task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xc5 PushI
	if(var_38_int == 0) goto Label_681; // 0xc6 JumpB
	func_3223(); // 0xc8 NEW_2
	var_40_int = 26622; // 0xca PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xcb Eq
	if(var_41_bool == 0) goto Label_210; // 0xcc JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xcd PushV
	var_42_object = var_1_object; // 0xce MovT
	var_43_object = var_0_object; // 0xcf MovT
	func_3300(); // 0xd0 NEW_2
	
Label_210:
	var_69_int = 44528; // 0xd2 PushI
	var_70_bool = var_37_cvector == var_69_int; // 0xd3 Eq
	if(var_70_bool == 0) goto Label_218; // 0xd4 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0xd5 PushV
	var_71_object = var_1_object; // 0xd6 MovT
	var_72_object = var_0_object; // 0xd7 MovT
	func_3395(); // 0xd8 NEW_2
	
Label_218:
	var_83_int = 44526; // 0xda PushI
	var_84_bool = var_37_cvector == var_83_int; // 0xdb Eq
	if(var_84_bool == 0) goto Label_226; // 0xdc JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0xdd PushV
	var_85_object = var_1_object; // 0xde MovT
	var_86_object = var_0_object; // 0xdf MovT
	func_3395(); // 0xe0 NEW_2
	
Label_226:
	var_87_int = 26641; // 0xe2 PushI
	var_88_bool = var_37_cvector == var_87_int; // 0xe3 Eq
	if(var_88_bool == 0) goto Label_234; // 0xe4 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xe5 PushV
	var_89_object = var_1_object; // 0xe6 MovT
	var_90_object = var_0_object; // 0xe7 MovT
	func_3309(); // 0xe8 NEW_2
	
Label_234:
	var_101_int = 44534; // 0xea PushI
	var_102_bool = var_37_cvector == var_101_int; // 0xeb Eq
	if(var_102_bool == 0) goto Label_242; // 0xec JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0xed PushV
	var_103_object = var_1_object; // 0xee MovT
	var_104_object = var_0_object; // 0xef MovT
	func_3309(); // 0xf0 NEW_2
	
Label_242:
	var_105_int = 26619; // 0xf2 PushI
	var_106_bool = var_36_bool == var_105_int; // 0xf3 Eq
	if(var_106_bool == 0) goto Label_300; // 0xf4 JumpB
	var_107_string = ""; // 0xf5 PushV
	var_107_string = "Neutral"; // 0xf6 MovS
	func_174(var_37_cvector, var_107_string); // 0xf7 NEW_2
	var_124_int = 525251; // 0xf9 PushI
	SetMessage(var_124_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_125_bool = 0; var_126_object = Obj(); // 0xfe PushV
	var_126_object = var_1_object; // 0xff MovT
	func_3404(var_126_object); // 0x100 NEW_2
	if(var_125_bool == 0) goto Label_264; // 0x102 JumpB
	var_133_int = 525252; // 0x103 PushI
	var_134_int = 44489; // 0x104 PushI
	var_135_int = 26620; // 0x105 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x106 TObjFunc
	
Label_264:
	var_136_bool = 0; var_137_object = Obj(); // 0x108 PushV
	var_137_object = var_1_object; // 0x109 MovT
	func_3416(var_137_object); // 0x10a NEW_2
	if(var_136_bool == 0) goto Label_274; // 0x10c JumpB
	var_142_int = 525263; // 0x10d PushI
	var_143_int = 26632; // 0x10e PushI
	var_144_int = 26631; // 0x10f PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x110 TObjFunc
	
Label_274:
	var_145_int = 525255; // 0x112 PushI
	var_146_int = -1; // 0x113 PushI
	var_147_int = 26623; // 0x114 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_300:
	var_148_int = 44499; // 0x12c PushI
	var_149_bool = var_36_bool == var_148_int; // 0x12d Eq
	if(var_149_bool == 0) goto Label_303; // 0x12e JumpB
	
Label_303:
	var_150_int = 44502; // 0x12f PushI
	var_151_bool = var_36_bool == var_150_int; // 0x130 Eq
	if(var_151_bool == 0) goto Label_326; // 0x131 JumpB
	var_152_string = ""; // 0x132 PushV
	var_152_string = "Grimacing"; // 0x133 MovS
	func_174(var_37_cvector, var_152_string); // 0x134 NEW_2
	var_153_int = 542183; // 0x136 PushI
	SetMessage(var_153_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_154_int = 542184; // 0x13b PushI
	var_155_int = -1; // 0x13c PushI
	var_156_int = 44504; // 0x13d PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x13e TObjFunc
	var_157_int = 542185; // 0x140 PushI
	var_158_int = -1; // 0x141 PushI
	var_159_int = 44505; // 0x142 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_160_int = 26632; // 0x146 PushI
	var_161_bool = var_36_bool == var_160_int; // 0x147 Eq
	if(var_161_bool == 0) goto Label_349; // 0x148 JumpB
	var_162_string = ""; // 0x149 PushV
	var_162_string = "Neutral"; // 0x14a MovS
	func_174(var_37_cvector, var_162_string); // 0x14b NEW_2
	var_163_int = 525264; // 0x14d PushI
	SetMessage(var_163_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_164_int = 542194; // 0x152 PushI
	var_165_int = 44520; // 0x153 PushI
	var_166_int = 44518; // 0x154 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x155 TObjFunc
	var_167_int = 542195; // 0x157 PushI
	var_168_int = 44520; // 0x158 PushI
	var_169_int = 44519; // 0x159 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_170_int = 44520; // 0x15d PushI
	var_171_bool = var_36_bool == var_170_int; // 0x15e Eq
	if(var_171_bool == 0) goto Label_377; // 0x15f JumpB
	var_172_string = ""; // 0x160 PushV
	var_172_string = "Neutral"; // 0x161 MovS
	func_174(var_37_cvector, var_172_string); // 0x162 NEW_2
	var_173_int = 542196; // 0x164 PushI
	SetMessage(var_173_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_174_int = 525265; // 0x169 PushI
	var_175_int = 44524; // 0x16a PushI
	var_176_int = 26633; // 0x16b PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x16c TObjFunc
	var_177_int = 542197; // 0x16e PushI
	var_178_int = 26634; // 0x16f PushI
	var_179_int = 44522; // 0x170 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x171 TObjFunc
	var_180_int = 542198; // 0x173 PushI
	var_181_int = 44524; // 0x174 PushI
	var_182_int = 44523; // 0x175 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x176 TObjFunc
	return 0; // 0x178 Return
	
Label_377:
	var_183_int = 26634; // 0x179 PushI
	var_184_bool = var_36_bool == var_183_int; // 0x17a Eq
	if(var_184_bool == 0) goto Label_400; // 0x17b JumpB
	var_185_string = ""; // 0x17c PushV
	var_185_string = "Neutral"; // 0x17d MovS
	func_174(var_37_cvector, var_185_string); // 0x17e NEW_2
	var_186_int = 525266; // 0x180 PushI
	SetMessage(var_186_int); // 0x181 TObjFunc
	ClearReplies(); // 0x183 TObjFunc
	var_187_int = 529215; // 0x185 PushI
	var_188_int = 30668; // 0x186 PushI
	var_189_int = 30667; // 0x187 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x188 TObjFunc
	var_190_int = 542204; // 0x18a PushI
	var_191_int = 30670; // 0x18b PushI
	var_192_int = 44530; // 0x18c PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x18d TObjFunc
	return 0; // 0x18f Return
	
Label_400:
	var_193_int = 30668; // 0x190 PushI
	var_194_bool = var_36_bool == var_193_int; // 0x191 Eq
	if(var_194_bool == 0) goto Label_418; // 0x192 JumpB
	var_195_string = ""; // 0x193 PushV
	var_195_string = "Neutral"; // 0x194 MovS
	func_174(var_37_cvector, var_195_string); // 0x195 NEW_2
	var_196_int = 529216; // 0x197 PushI
	SetMessage(var_196_int); // 0x198 TObjFunc
	ClearReplies(); // 0x19a TObjFunc
	var_197_int = 529217; // 0x19c PushI
	var_198_int = 30670; // 0x19d PushI
	var_199_int = 30669; // 0x19e PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x19f TObjFunc
	return 0; // 0x1a1 Return
	
Label_418:
	var_200_int = 30670; // 0x1a2 PushI
	var_201_bool = var_36_bool == var_200_int; // 0x1a3 Eq
	if(var_201_bool == 0) goto Label_441; // 0x1a4 JumpB
	var_202_string = ""; // 0x1a5 PushV
	var_202_string = "Fear"; // 0x1a6 MovS
	func_174(var_37_cvector, var_202_string); // 0x1a7 NEW_2
	var_203_int = 529218; // 0x1a9 PushI
	SetMessage(var_203_int); // 0x1aa TObjFunc
	ClearReplies(); // 0x1ac TObjFunc
	var_204_int = 525267; // 0x1ae PushI
	var_205_int = 26636; // 0x1af PushI
	var_206_int = 26635; // 0x1b0 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1b1 TObjFunc
	var_207_int = 542205; // 0x1b3 PushI
	var_208_int = 26638; // 0x1b4 PushI
	var_209_int = 44532; // 0x1b5 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_210_int = 26636; // 0x1b9 PushI
	var_211_bool = var_36_bool == var_210_int; // 0x1ba Eq
	if(var_211_bool == 0) goto Label_459; // 0x1bb JumpB
	var_212_string = ""; // 0x1bc PushV
	var_212_string = "Fear"; // 0x1bd MovS
	func_174(var_37_cvector, var_212_string); // 0x1be NEW_2
	var_213_int = 525268; // 0x1c0 PushI
	SetMessage(var_213_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_214_int = 525269; // 0x1c5 PushI
	var_215_int = 26638; // 0x1c6 PushI
	var_216_int = 26637; // 0x1c7 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_217_int = 26638; // 0x1cb PushI
	var_218_bool = var_36_bool == var_217_int; // 0x1cc Eq
	if(var_218_bool == 0) goto Label_482; // 0x1cd JumpB
	var_219_string = ""; // 0x1ce PushV
	var_219_string = "Strange"; // 0x1cf MovS
	func_174(var_37_cvector, var_219_string); // 0x1d0 NEW_2
	var_220_int = 525270; // 0x1d2 PushI
	SetMessage(var_220_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_221_int = 525271; // 0x1d7 PushI
	var_222_int = 26640; // 0x1d8 PushI
	var_223_int = 26639; // 0x1d9 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1da TObjFunc
	var_224_int = 542206; // 0x1dc PushI
	var_225_int = -1; // 0x1dd PushI
	var_226_int = 44534; // 0x1de PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_227_int = 26640; // 0x1e2 PushI
	var_228_bool = var_36_bool == var_227_int; // 0x1e3 Eq
	if(var_228_bool == 0) goto Label_500; // 0x1e4 JumpB
	var_229_string = ""; // 0x1e5 PushV
	var_229_string = "Neutral"; // 0x1e6 MovS
	func_174(var_37_cvector, var_229_string); // 0x1e7 NEW_2
	var_230_int = 525272; // 0x1e9 PushI
	SetMessage(var_230_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_231_int = 525273; // 0x1ee PushI
	var_232_int = -1; // 0x1ef PushI
	var_233_int = 26641; // 0x1f0 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_234_int = 44524; // 0x1f4 PushI
	var_235_bool = var_36_bool == var_234_int; // 0x1f5 Eq
	if(var_235_bool == 0) goto Label_523; // 0x1f6 JumpB
	var_236_string = ""; // 0x1f7 PushV
	var_236_string = "Grin"; // 0x1f8 MovS
	func_174(var_37_cvector, var_236_string); // 0x1f9 NEW_2
	var_237_int = 542199; // 0x1fb PushI
	SetMessage(var_237_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_238_int = 542200; // 0x200 PushI
	var_239_int = 44527; // 0x201 PushI
	var_240_int = 44525; // 0x202 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x203 TObjFunc
	var_241_int = 542201; // 0x205 PushI
	var_242_int = -1; // 0x206 PushI
	var_243_int = 44526; // 0x207 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x208 TObjFunc
	return 0; // 0x20a Return
	
Label_523:
	var_244_int = 44527; // 0x20b PushI
	var_245_bool = var_36_bool == var_244_int; // 0x20c Eq
	if(var_245_bool == 0) goto Label_541; // 0x20d JumpB
	var_246_string = ""; // 0x20e PushV
	var_246_string = "Neutral"; // 0x20f MovS
	func_174(var_37_cvector, var_246_string); // 0x210 NEW_2
	var_247_int = 542202; // 0x212 PushI
	SetMessage(var_247_int); // 0x213 TObjFunc
	ClearReplies(); // 0x215 TObjFunc
	var_248_int = 542203; // 0x217 PushI
	var_249_int = -1; // 0x218 PushI
	var_250_int = 44528; // 0x219 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_251_int = 44489; // 0x21d PushI
	var_252_bool = var_36_bool == var_251_int; // 0x21e Eq
	if(var_252_bool == 0) goto Label_564; // 0x21f JumpB
	var_253_string = ""; // 0x220 PushV
	var_253_string = "Strange"; // 0x221 MovS
	func_174(var_37_cvector, var_253_string); // 0x222 NEW_2
	var_254_int = 542172; // 0x224 PushI
	SetMessage(var_254_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_255_int = 542173; // 0x229 PushI
	var_256_int = 44491; // 0x22a PushI
	var_257_int = 44490; // 0x22b PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x22c TObjFunc
	var_258_int = 542186; // 0x22e PushI
	var_259_int = 44507; // 0x22f PushI
	var_260_int = 44506; // 0x230 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x231 TObjFunc
	return 0; // 0x233 Return
	
Label_564:
	var_261_int = 44507; // 0x234 PushI
	var_262_bool = var_36_bool == var_261_int; // 0x235 Eq
	if(var_262_bool == 0) goto Label_587; // 0x236 JumpB
	var_263_string = ""; // 0x237 PushV
	var_263_string = "Grimacing"; // 0x238 MovS
	func_174(var_37_cvector, var_263_string); // 0x239 NEW_2
	var_264_int = 542187; // 0x23b PushI
	SetMessage(var_264_int); // 0x23c TObjFunc
	ClearReplies(); // 0x23e TObjFunc
	var_265_int = 542188; // 0x240 PushI
	var_266_int = 26621; // 0x241 PushI
	var_267_int = 44508; // 0x242 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x243 TObjFunc
	var_268_int = 542190; // 0x245 PushI
	var_269_int = 26621; // 0x246 PushI
	var_270_int = 44510; // 0x247 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x248 TObjFunc
	return 0; // 0x24a Return
	
Label_587:
	var_271_int = 44491; // 0x24b PushI
	var_272_bool = var_36_bool == var_271_int; // 0x24c Eq
	if(var_272_bool == 0) goto Label_610; // 0x24d JumpB
	var_273_string = ""; // 0x24e PushV
	var_273_string = "Strange"; // 0x24f MovS
	func_174(var_37_cvector, var_273_string); // 0x250 NEW_2
	var_274_int = 542174; // 0x252 PushI
	SetMessage(var_274_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_275_int = 542175; // 0x257 PushI
	var_276_int = 26621; // 0x258 PushI
	var_277_int = 44492; // 0x259 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x25a TObjFunc
	var_278_int = 542189; // 0x25c PushI
	var_279_int = 26621; // 0x25d PushI
	var_280_int = 44509; // 0x25e PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x25f TObjFunc
	return 0; // 0x261 Return
	
Label_610:
	var_281_int = 26621; // 0x262 PushI
	var_282_bool = var_36_bool == var_281_int; // 0x263 Eq
	if(var_282_bool == 0) goto Label_633; // 0x264 JumpB
	var_283_string = ""; // 0x265 PushV
	var_283_string = "Neutral"; // 0x266 MovS
	func_174(var_37_cvector, var_283_string); // 0x267 NEW_2
	var_284_int = 525253; // 0x269 PushI
	SetMessage(var_284_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_285_int = 529213; // 0x26e PushI
	var_286_int = 30666; // 0x26f PushI
	var_287_int = 30665; // 0x270 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x271 TObjFunc
	var_288_int = 542191; // 0x273 PushI
	var_289_int = 44515; // 0x274 PushI
	var_290_int = 44514; // 0x275 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x276 TObjFunc
	return 0; // 0x278 Return
	
Label_633:
	var_291_int = 44515; // 0x279 PushI
	var_292_bool = var_36_bool == var_291_int; // 0x27a Eq
	if(var_292_bool == 0) goto Label_651; // 0x27b JumpB
	var_293_string = ""; // 0x27c PushV
	var_293_string = "Neutral"; // 0x27d MovS
	func_174(var_37_cvector, var_293_string); // 0x27e NEW_2
	var_294_int = 542192; // 0x280 PushI
	SetMessage(var_294_int); // 0x281 TObjFunc
	ClearReplies(); // 0x283 TObjFunc
	var_295_int = 542193; // 0x285 PushI
	var_296_int = 30666; // 0x286 PushI
	var_297_int = 44516; // 0x287 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x288 TObjFunc
	return 0; // 0x28a Return
	
Label_651:
	var_298_int = 30666; // 0x28b PushI
	var_299_bool = var_36_bool == var_298_int; // 0x28c Eq
	if(var_299_bool == 0) goto Label_669; // 0x28d JumpB
	var_300_string = ""; // 0x28e PushV
	var_300_string = "Neutral"; // 0x28f MovS
	func_174(var_37_cvector, var_300_string); // 0x290 NEW_2
	var_301_int = 529214; // 0x292 PushI
	SetMessage(var_301_int); // 0x293 TObjFunc
	ClearReplies(); // 0x295 TObjFunc
	var_302_int = 525254; // 0x297 PushI
	var_303_int = -1; // 0x298 PushI
	var_304_int = 26622; // 0x299 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x29a TObjFunc
	return 0; // 0x29c Return
	
Label_669:
	var_3_string = 1; // 0x29d TMovB
	var_305_bool = 0; // 0x29e PushV
	func_3298(var_305_bool); // 0x29f NEW_2
	if(var_305_bool == 0) goto Label_677; // 0x2a1 JumpB
	lshStopAnimation(); // 0x2a2 Func
	goto Label_679; // 0x2a4 Jump
	
Label_679:
	return 0; // 0x2a7 Return
	
Label_677:
	StopAnimation(); // 0x2a5 Func
	
Label_681:
	return 0; // 0x2a9 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x34c PushI
	if(var_38_int == 0) goto Label_948; // 0x34d JumpB
	func_3223(); // 0x34f NEW_2
	var_40_int = 26875; // 0x351 PushI
	var_41_bool = var_36_bool == var_40_int; // 0x352 Eq
	if(var_41_bool == 0) goto Label_872; // 0x353 JumpB
	var_42_string = ""; // 0x354 PushV
	var_42_string = "Neutral"; // 0x355 MovS
	func_821(var_37_cvector, var_42_string); // 0x356 NEW_2
	var_59_int = 525519; // 0x358 PushI
	SetMessage(var_59_int); // 0x359 TObjFunc
	ClearReplies(); // 0x35b TObjFunc
	var_60_int = 525520; // 0x35d PushI
	var_61_int = 30224; // 0x35e PushI
	var_62_int = 26876; // 0x35f PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x360 TObjFunc
	var_63_int = 528815; // 0x362 PushI
	var_64_int = 30230; // 0x363 PushI
	var_65_int = 30229; // 0x364 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x365 TObjFunc
	return 0; // 0x367 Return
	
Label_872:
	var_66_int = 30230; // 0x368 PushI
	var_67_bool = var_36_bool == var_66_int; // 0x369 Eq
	if(var_67_bool == 0) goto Label_890; // 0x36a JumpB
	var_68_string = ""; // 0x36b PushV
	var_68_string = "Neutral"; // 0x36c MovS
	func_821(var_37_cvector, var_68_string); // 0x36d NEW_2
	var_69_int = 528816; // 0x36f PushI
	SetMessage(var_69_int); // 0x370 TObjFunc
	ClearReplies(); // 0x372 TObjFunc
	var_70_int = 528817; // 0x374 PushI
	var_71_int = 30224; // 0x375 PushI
	var_72_int = 30231; // 0x376 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x377 TObjFunc
	return 0; // 0x379 Return
	
Label_890:
	var_73_int = 30224; // 0x37a PushI
	var_74_bool = var_36_bool == var_73_int; // 0x37b Eq
	if(var_74_bool == 0) goto Label_913; // 0x37c JumpB
	var_75_string = ""; // 0x37d PushV
	var_75_string = "Neutral"; // 0x37e MovS
	func_821(var_37_cvector, var_75_string); // 0x37f NEW_2
	var_76_int = 528810; // 0x381 PushI
	SetMessage(var_76_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_77_int = 528811; // 0x386 PushI
	var_78_int = 30226; // 0x387 PushI
	var_79_int = 30225; // 0x388 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x389 TObjFunc
	var_80_int = 528818; // 0x38b PushI
	var_81_int = 30226; // 0x38c PushI
	var_82_int = 30233; // 0x38d PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x38e TObjFunc
	return 0; // 0x390 Return
	
Label_913:
	var_83_int = 30226; // 0x391 PushI
	var_84_bool = var_36_bool == var_83_int; // 0x392 Eq
	if(var_84_bool == 0) goto Label_936; // 0x393 JumpB
	var_85_string = ""; // 0x394 PushV
	var_85_string = "Neutral"; // 0x395 MovS
	func_821(var_37_cvector, var_85_string); // 0x396 NEW_2
	var_86_int = 528812; // 0x398 PushI
	SetMessage(var_86_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_87_int = 528813; // 0x39d PushI
	var_88_int = -1; // 0x39e PushI
	var_89_int = 30227; // 0x39f PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x3a0 TObjFunc
	var_90_int = 528814; // 0x3a2 PushI
	var_91_int = -1; // 0x3a3 PushI
	var_92_int = 30228; // 0x3a4 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_3_string = 1; // 0x3a8 TMovB
	var_93_bool = 0; // 0x3a9 PushV
	func_3298(var_93_bool); // 0x3aa NEW_2
	if(var_93_bool == 0) goto Label_944; // 0x3ac JumpB
	lshStopAnimation(); // 0x3ad Func
	goto Label_946; // 0x3af Jump
	
Label_946:
	return 0; // 0x3b2 Return
	
Label_944:
	StopAnimation(); // 0x3b0 Func
	
Label_948:
	return 0; // 0x3b4 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x46e PushI
	if(var_38_int == 0) goto Label_1285; // 0x46f JumpB
	func_3223(); // 0x471 NEW_2
	var_40_int = 27378; // 0x473 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x474 Eq
	if(var_41_bool == 0) goto Label_1147; // 0x475 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x476 PushV
	var_42_object = var_1_object; // 0x477 MovT
	var_43_object = var_0_object; // 0x478 MovT
	func_3318(); // 0x479 NEW_2
	
Label_1147:
	var_46_int = 27380; // 0x47b PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x47c Eq
	if(var_47_bool == 0) goto Label_1155; // 0x47d JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x47e PushV
	var_48_object = var_1_object; // 0x47f MovT
	var_49_object = var_0_object; // 0x480 MovT
	func_3324(); // 0x481 NEW_2
	
Label_1155:
	var_73_int = 43716; // 0x483 PushI
	var_74_bool = var_37_cvector == var_73_int; // 0x484 Eq
	if(var_74_bool == 0) goto Label_1163; // 0x485 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x486 PushV
	var_75_object = var_1_object; // 0x487 MovT
	var_76_object = var_0_object; // 0x488 MovT
	func_3324(); // 0x489 NEW_2
	
Label_1163:
	var_77_int = 27377; // 0x48b PushI
	var_78_bool = var_36_bool == var_77_int; // 0x48c Eq
	if(var_78_bool == 0) goto Label_1209; // 0x48d JumpB
	var_79_string = ""; // 0x48e PushV
	var_79_string = "Fear"; // 0x48f MovS
	func_1111(var_37_cvector, var_79_string); // 0x490 NEW_2
	var_96_int = 526091; // 0x492 PushI
	SetMessage(var_96_int); // 0x493 TObjFunc
	ClearReplies(); // 0x495 TObjFunc
	var_97_bool = 0; // 0x497 PushV
	var_97_bool = 0; // 0x498 MovB
	var_98_bool = 0; // 0x499 PushV
	var_98_bool = 0; // 0x49a MovB
	var_99_bool = 0; var_100_object = Obj(); // 0x49b PushV
	var_100_object = var_1_object; // 0x49c MovT
	func_3428(var_100_object); // 0x49d NEW_2
	if(var_99_bool == 0) goto Label_1190; // 0x49f JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x4a0 PushV
	var_108_object = var_1_object; // 0x4a1 MovT
	func_3440(var_108_object); // 0x4a2 NEW_2
	if(var_107_bool == 0) goto Label_1190; // 0x4a4 JumpB
	var_98_bool = 1; // 0x4a5 MovB
	
Label_1190:
	if(var_98_bool == 0) goto Label_1197; // 0x4a6 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x4a7 PushV
	var_114_object = var_1_object; // 0x4a8 MovT
	func_3452(var_114_object); // 0x4a9 NEW_2
	if(var_113_bool == 0) goto Label_1197; // 0x4ab JumpB
	var_97_bool = 1; // 0x4ac MovB
	
Label_1197:
	if(var_97_bool == 0) goto Label_1203; // 0x4ad JumpB
	var_119_int = 526092; // 0x4ae PushI
	var_120_int = 27379; // 0x4af PushI
	var_121_int = 27378; // 0x4b0 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x4b1 TObjFunc
	
Label_1203:
	var_122_int = 526095; // 0x4b3 PushI
	var_123_int = -1; // 0x4b4 PushI
	var_124_int = 27381; // 0x4b5 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x4b6 TObjFunc
	return 0; // 0x4b8 Return
	
Label_1209:
	var_125_int = 27379; // 0x4b9 PushI
	var_126_bool = var_36_bool == var_125_int; // 0x4ba Eq
	if(var_126_bool == 0) goto Label_1227; // 0x4bb JumpB
	var_127_string = ""; // 0x4bc PushV
	var_127_string = "Grin"; // 0x4bd MovS
	func_1111(var_37_cvector, var_127_string); // 0x4be NEW_2
	var_128_int = 526093; // 0x4c0 PushI
	SetMessage(var_128_int); // 0x4c1 TObjFunc
	ClearReplies(); // 0x4c3 TObjFunc
	var_129_int = 528804; // 0x4c5 PushI
	var_130_int = 30219; // 0x4c6 PushI
	var_131_int = 30218; // 0x4c7 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x4c8 TObjFunc
	return 0; // 0x4ca Return
	
Label_1227:
	var_132_int = 30219; // 0x4cb PushI
	var_133_bool = var_36_bool == var_132_int; // 0x4cc Eq
	if(var_133_bool == 0) goto Label_1250; // 0x4cd JumpB
	var_134_string = ""; // 0x4ce PushV
	var_134_string = "Grin"; // 0x4cf MovS
	func_1111(var_37_cvector, var_134_string); // 0x4d0 NEW_2
	var_135_int = 528805; // 0x4d2 PushI
	SetMessage(var_135_int); // 0x4d3 TObjFunc
	ClearReplies(); // 0x4d5 TObjFunc
	var_136_int = 528806; // 0x4d7 PushI
	var_137_int = 30222; // 0x4d8 PushI
	var_138_int = 30220; // 0x4d9 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x4da TObjFunc
	var_139_int = 528807; // 0x4dc PushI
	var_140_int = 30222; // 0x4dd PushI
	var_141_int = 30221; // 0x4de PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_142_int = 30222; // 0x4e2 PushI
	var_143_bool = var_36_bool == var_142_int; // 0x4e3 Eq
	if(var_143_bool == 0) goto Label_1273; // 0x4e4 JumpB
	var_144_string = ""; // 0x4e5 PushV
	var_144_string = "Strange"; // 0x4e6 MovS
	func_1111(var_37_cvector, var_144_string); // 0x4e7 NEW_2
	var_145_int = 528808; // 0x4e9 PushI
	SetMessage(var_145_int); // 0x4ea TObjFunc
	ClearReplies(); // 0x4ec TObjFunc
	var_146_int = 526094; // 0x4ee PushI
	var_147_int = -1; // 0x4ef PushI
	var_148_int = 27380; // 0x4f0 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x4f1 TObjFunc
	var_149_int = 541550; // 0x4f3 PushI
	var_150_int = -1; // 0x4f4 PushI
	var_151_int = 43716; // 0x4f5 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x4f6 TObjFunc
	return 0; // 0x4f8 Return
	
Label_1273:
	var_3_string = 1; // 0x4f9 TMovB
	var_152_bool = 0; // 0x4fa PushV
	func_3298(var_152_bool); // 0x4fb NEW_2
	if(var_152_bool == 0) goto Label_1281; // 0x4fd JumpB
	lshStopAnimation(); // 0x4fe Func
	goto Label_1283; // 0x500 Jump
	
Label_1283:
	return 0; // 0x503 Return
	
Label_1281:
	StopAnimation(); // 0x501 Func
	
Label_1285:
	return 0; // 0x505 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x5b2 PushI
	if(var_38_int == 0) goto Label_1704; // 0x5b3 JumpB
	func_3223(); // 0x5b5 NEW_2
	var_40_int = 30428; // 0x5b7 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x5b8 Eq
	if(var_41_bool == 0) goto Label_1471; // 0x5b9 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x5ba PushV
	var_42_object = var_1_object; // 0x5bb MovT
	var_43_object = var_0_object; // 0x5bc MovT
	func_3329(); // 0x5bd NEW_2
	
Label_1471:
	var_69_int = 30433; // 0x5bf PushI
	var_70_bool = var_37_cvector == var_69_int; // 0x5c0 Eq
	if(var_70_bool == 0) goto Label_1479; // 0x5c1 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0x5c2 PushV
	var_71_object = var_1_object; // 0x5c3 MovT
	var_72_object = var_0_object; // 0x5c4 MovT
	func_3329(); // 0x5c5 NEW_2
	
Label_1479:
	var_73_int = 27723; // 0x5c7 PushI
	var_74_bool = var_37_cvector == var_73_int; // 0x5c8 Eq
	if(var_74_bool == 0) goto Label_1487; // 0x5c9 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x5ca PushV
	var_75_object = var_1_object; // 0x5cb MovT
	var_76_object = var_0_object; // 0x5cc MovT
	func_3329(); // 0x5cd NEW_2
	
Label_1487:
	var_77_int = 27716; // 0x5cf PushI
	var_78_bool = var_36_bool == var_77_int; // 0x5d0 Eq
	if(var_78_bool == 0) goto Label_1520; // 0x5d1 JumpB
	var_79_string = ""; // 0x5d2 PushV
	var_79_string = "Neutral"; // 0x5d3 MovS
	func_1435(var_37_cvector, var_79_string); // 0x5d4 NEW_2
	var_96_int = 526441; // 0x5d6 PushI
	SetMessage(var_96_int); // 0x5d7 TObjFunc
	ClearReplies(); // 0x5d9 TObjFunc
	var_97_bool = 0; var_98_object = Obj(); // 0x5db PushV
	var_98_object = var_1_object; // 0x5dc MovT
	func_3464(var_98_object); // 0x5dd NEW_2
	if(var_97_bool == 0) goto Label_1509; // 0x5df JumpB
	var_105_int = 526442; // 0x5e0 PushI
	var_106_int = 27718; // 0x5e1 PushI
	var_107_int = 27717; // 0x5e2 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x5e3 TObjFunc
	
Label_1509:
	var_108_int = 526449; // 0x5e5 PushI
	var_109_int = -1; // 0x5e6 PushI
	var_110_int = 27724; // 0x5e7 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x5e8 TObjFunc
	var_111_int = 528982; // 0x5ea PushI
	var_112_int = -1; // 0x5eb PushI
	var_113_int = 30419; // 0x5ec PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x5ed TObjFunc
	return 0; // 0x5ef Return
	
Label_1520:
	var_114_int = 27718; // 0x5f0 PushI
	var_115_bool = var_36_bool == var_114_int; // 0x5f1 Eq
	if(var_115_bool == 0) goto Label_1538; // 0x5f2 JumpB
	var_116_string = ""; // 0x5f3 PushV
	var_116_string = "Neutral"; // 0x5f4 MovS
	func_1435(var_37_cvector, var_116_string); // 0x5f5 NEW_2
	var_117_int = 526443; // 0x5f7 PushI
	SetMessage(var_117_int); // 0x5f8 TObjFunc
	ClearReplies(); // 0x5fa TObjFunc
	var_118_int = 528983; // 0x5fc PushI
	var_119_int = 30421; // 0x5fd PushI
	var_120_int = 30420; // 0x5fe PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x5ff TObjFunc
	return 0; // 0x601 Return
	
Label_1538:
	var_121_int = 30421; // 0x602 PushI
	var_122_bool = var_36_bool == var_121_int; // 0x603 Eq
	if(var_122_bool == 0) goto Label_1556; // 0x604 JumpB
	var_123_string = ""; // 0x605 PushV
	var_123_string = "Grimacing"; // 0x606 MovS
	func_1435(var_37_cvector, var_123_string); // 0x607 NEW_2
	var_124_int = 528984; // 0x609 PushI
	SetMessage(var_124_int); // 0x60a TObjFunc
	ClearReplies(); // 0x60c TObjFunc
	var_125_int = 528985; // 0x60e PushI
	var_126_int = 30423; // 0x60f PushI
	var_127_int = 30422; // 0x610 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x611 TObjFunc
	return 0; // 0x613 Return
	
Label_1556:
	var_128_int = 30423; // 0x614 PushI
	var_129_bool = var_36_bool == var_128_int; // 0x615 Eq
	if(var_129_bool == 0) goto Label_1574; // 0x616 JumpB
	var_130_string = ""; // 0x617 PushV
	var_130_string = "Neutral"; // 0x618 MovS
	func_1435(var_37_cvector, var_130_string); // 0x619 NEW_2
	var_131_int = 528986; // 0x61b PushI
	SetMessage(var_131_int); // 0x61c TObjFunc
	ClearReplies(); // 0x61e TObjFunc
	var_132_int = 526444; // 0x620 PushI
	var_133_int = 27720; // 0x621 PushI
	var_134_int = 27719; // 0x622 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x623 TObjFunc
	return 0; // 0x625 Return
	
Label_1574:
	var_135_int = 27720; // 0x626 PushI
	var_136_bool = var_36_bool == var_135_int; // 0x627 Eq
	if(var_136_bool == 0) goto Label_1592; // 0x628 JumpB
	var_137_string = ""; // 0x629 PushV
	var_137_string = "Strange"; // 0x62a MovS
	func_1435(var_37_cvector, var_137_string); // 0x62b NEW_2
	var_138_int = 526445; // 0x62d PushI
	SetMessage(var_138_int); // 0x62e TObjFunc
	ClearReplies(); // 0x630 TObjFunc
	var_139_int = 526446; // 0x632 PushI
	var_140_int = 27722; // 0x633 PushI
	var_141_int = 27721; // 0x634 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x635 TObjFunc
	return 0; // 0x637 Return
	
Label_1592:
	var_142_int = 27722; // 0x638 PushI
	var_143_bool = var_36_bool == var_142_int; // 0x639 Eq
	if(var_143_bool == 0) goto Label_1615; // 0x63a JumpB
	var_144_string = ""; // 0x63b PushV
	var_144_string = "Strange"; // 0x63c MovS
	func_1435(var_37_cvector, var_144_string); // 0x63d NEW_2
	var_145_int = 526447; // 0x63f PushI
	SetMessage(var_145_int); // 0x640 TObjFunc
	ClearReplies(); // 0x642 TObjFunc
	var_146_int = 528987; // 0x644 PushI
	var_147_int = 30425; // 0x645 PushI
	var_148_int = 30424; // 0x646 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x647 TObjFunc
	var_149_int = 526448; // 0x649 PushI
	var_150_int = -1; // 0x64a PushI
	var_151_int = 27723; // 0x64b PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x64c TObjFunc
	return 0; // 0x64e Return
	
Label_1615:
	var_152_int = 30425; // 0x64f PushI
	var_153_bool = var_36_bool == var_152_int; // 0x650 Eq
	if(var_153_bool == 0) goto Label_1633; // 0x651 JumpB
	var_154_string = ""; // 0x652 PushV
	var_154_string = "Neutral"; // 0x653 MovS
	func_1435(var_37_cvector, var_154_string); // 0x654 NEW_2
	var_155_int = 528988; // 0x656 PushI
	SetMessage(var_155_int); // 0x657 TObjFunc
	ClearReplies(); // 0x659 TObjFunc
	var_156_int = 528989; // 0x65b PushI
	var_157_int = 30427; // 0x65c PushI
	var_158_int = 30426; // 0x65d PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x65e TObjFunc
	return 0; // 0x660 Return
	
Label_1633:
	var_159_int = 30427; // 0x661 PushI
	var_160_bool = var_36_bool == var_159_int; // 0x662 Eq
	if(var_160_bool == 0) goto Label_1656; // 0x663 JumpB
	var_161_string = ""; // 0x664 PushV
	var_161_string = "Neutral"; // 0x665 MovS
	func_1435(var_37_cvector, var_161_string); // 0x666 NEW_2
	var_162_int = 528990; // 0x668 PushI
	SetMessage(var_162_int); // 0x669 TObjFunc
	ClearReplies(); // 0x66b TObjFunc
	var_163_int = 528991; // 0x66d PushI
	var_164_int = -1; // 0x66e PushI
	var_165_int = 30428; // 0x66f PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x670 TObjFunc
	var_166_int = 528992; // 0x672 PushI
	var_167_int = 30430; // 0x673 PushI
	var_168_int = 30429; // 0x674 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x675 TObjFunc
	return 0; // 0x677 Return
	
Label_1656:
	var_169_int = 30430; // 0x678 PushI
	var_170_bool = var_36_bool == var_169_int; // 0x679 Eq
	if(var_170_bool == 0) goto Label_1674; // 0x67a JumpB
	var_171_string = ""; // 0x67b PushV
	var_171_string = "Neutral"; // 0x67c MovS
	func_1435(var_37_cvector, var_171_string); // 0x67d NEW_2
	var_172_int = 528993; // 0x67f PushI
	SetMessage(var_172_int); // 0x680 TObjFunc
	ClearReplies(); // 0x682 TObjFunc
	var_173_int = 528994; // 0x684 PushI
	var_174_int = 30432; // 0x685 PushI
	var_175_int = 30431; // 0x686 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x687 TObjFunc
	return 0; // 0x689 Return
	
Label_1674:
	var_176_int = 30432; // 0x68a PushI
	var_177_bool = var_36_bool == var_176_int; // 0x68b Eq
	if(var_177_bool == 0) goto Label_1692; // 0x68c JumpB
	var_178_string = ""; // 0x68d PushV
	var_178_string = "Neutral"; // 0x68e MovS
	func_1435(var_37_cvector, var_178_string); // 0x68f NEW_2
	var_179_int = 528995; // 0x691 PushI
	SetMessage(var_179_int); // 0x692 TObjFunc
	ClearReplies(); // 0x694 TObjFunc
	var_180_int = 528996; // 0x696 PushI
	var_181_int = -1; // 0x697 PushI
	var_182_int = 30433; // 0x698 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x699 TObjFunc
	return 0; // 0x69b Return
	
Label_1692:
	var_3_string = 1; // 0x69c TMovB
	var_183_bool = 0; // 0x69d PushV
	func_3298(var_183_bool); // 0x69e NEW_2
	if(var_183_bool == 0) goto Label_1700; // 0x6a0 JumpB
	lshStopAnimation(); // 0x6a1 Func
	goto Label_1702; // 0x6a3 Jump
	
Label_1702:
	return 0; // 0x6a6 Return
	
Label_1700:
	StopAnimation(); // 0x6a4 Func
	
Label_1704:
	return 0; // 0x6a8 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x759 PushI
	if(var_38_int == 0) goto Label_2141; // 0x75a JumpB
	func_3223(); // 0x75c NEW_2
	var_40_int = 28960; // 0x75e PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x75f Eq
	if(var_41_bool == 0) goto Label_1894; // 0x760 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x761 PushV
	var_42_object = var_1_object; // 0x762 MovT
	var_43_object = var_0_object; // 0x763 MovT
	func_3389(); // 0x764 NEW_2
	
Label_1894:
	var_46_int = 28972; // 0x766 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x767 Eq
	if(var_47_bool == 0) goto Label_1902; // 0x768 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x769 PushV
	var_48_object = var_1_object; // 0x76a MovT
	var_49_object = var_0_object; // 0x76b MovT
	func_3338(); // 0x76c NEW_2
	
Label_1902:
	var_130_int = 28958; // 0x76e PushI
	var_131_bool = var_36_bool == var_130_int; // 0x76f Eq
	if(var_131_bool == 0) goto Label_1939; // 0x770 JumpB
	var_132_string = ""; // 0x771 PushV
	var_132_string = "Neutral"; // 0x772 MovS
	func_1858(var_37_cvector, var_132_string); // 0x773 NEW_2
	var_149_int = 527613; // 0x775 PushI
	SetMessage(var_149_int); // 0x776 TObjFunc
	ClearReplies(); // 0x778 TObjFunc
	var_150_bool = 0; // 0x77a PushV
	var_150_bool = 0; // 0x77b MovB
	var_151_bool = 0; var_152_object = Obj(); // 0x77c PushV
	var_152_object = var_1_object; // 0x77d MovT
	func_3488(var_152_object); // 0x77e NEW_2
	if(var_151_bool == 0) goto Label_1927; // 0x780 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x781 PushV
	var_160_object = var_1_object; // 0x782 MovT
	func_3476(var_160_object); // 0x783 NEW_2
	if(var_159_bool == 0) goto Label_1927; // 0x785 JumpB
	var_150_bool = 1; // 0x786 MovB
	
Label_1927:
	if(var_150_bool == 0) goto Label_1933; // 0x787 JumpB
	var_165_int = 527615; // 0x788 PushI
	var_166_int = 28961; // 0x789 PushI
	var_167_int = 28960; // 0x78a PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x78b TObjFunc
	
Label_1933:
	var_168_int = 527614; // 0x78d PushI
	var_169_int = -1; // 0x78e PushI
	var_170_int = 28959; // 0x78f PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x790 TObjFunc
	return 0; // 0x792 Return
	
Label_1939:
	var_171_int = 28961; // 0x793 PushI
	var_172_bool = var_36_bool == var_171_int; // 0x794 Eq
	if(var_172_bool == 0) goto Label_1957; // 0x795 JumpB
	var_173_string = ""; // 0x796 PushV
	var_173_string = "Strange"; // 0x797 MovS
	func_1858(var_37_cvector, var_173_string); // 0x798 NEW_2
	var_174_int = 527616; // 0x79a PushI
	SetMessage(var_174_int); // 0x79b TObjFunc
	ClearReplies(); // 0x79d TObjFunc
	var_175_int = 527631; // 0x79f PushI
	var_176_int = 28978; // 0x7a0 PushI
	var_177_int = 28977; // 0x7a1 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x7a2 TObjFunc
	return 0; // 0x7a4 Return
	
Label_1957:
	var_178_int = 28978; // 0x7a5 PushI
	var_179_bool = var_36_bool == var_178_int; // 0x7a6 Eq
	if(var_179_bool == 0) goto Label_1980; // 0x7a7 JumpB
	var_180_string = ""; // 0x7a8 PushV
	var_180_string = "Strange"; // 0x7a9 MovS
	func_1858(var_37_cvector, var_180_string); // 0x7aa NEW_2
	var_181_int = 527632; // 0x7ac PushI
	SetMessage(var_181_int); // 0x7ad TObjFunc
	ClearReplies(); // 0x7af TObjFunc
	var_182_int = 527617; // 0x7b1 PushI
	var_183_int = 28963; // 0x7b2 PushI
	var_184_int = 28962; // 0x7b3 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x7b4 TObjFunc
	var_185_int = 527628; // 0x7b6 PushI
	var_186_int = 28974; // 0x7b7 PushI
	var_187_int = 28973; // 0x7b8 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x7b9 TObjFunc
	return 0; // 0x7bb Return
	
Label_1980:
	var_188_int = 28974; // 0x7bc PushI
	var_189_bool = var_36_bool == var_188_int; // 0x7bd Eq
	if(var_189_bool == 0) goto Label_1998; // 0x7be JumpB
	var_190_string = ""; // 0x7bf PushV
	var_190_string = "Grimacing"; // 0x7c0 MovS
	func_1858(var_37_cvector, var_190_string); // 0x7c1 NEW_2
	var_191_int = 527629; // 0x7c3 PushI
	SetMessage(var_191_int); // 0x7c4 TObjFunc
	ClearReplies(); // 0x7c6 TObjFunc
	var_192_int = 527633; // 0x7c8 PushI
	var_193_int = 28980; // 0x7c9 PushI
	var_194_int = 28979; // 0x7ca PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x7cb TObjFunc
	return 0; // 0x7cd Return
	
Label_1998:
	var_195_int = 28980; // 0x7ce PushI
	var_196_bool = var_36_bool == var_195_int; // 0x7cf Eq
	if(var_196_bool == 0) goto Label_2016; // 0x7d0 JumpB
	var_197_string = ""; // 0x7d1 PushV
	var_197_string = "Grimacing"; // 0x7d2 MovS
	func_1858(var_37_cvector, var_197_string); // 0x7d3 NEW_2
	var_198_int = 527634; // 0x7d5 PushI
	SetMessage(var_198_int); // 0x7d6 TObjFunc
	ClearReplies(); // 0x7d8 TObjFunc
	var_199_int = 527630; // 0x7da PushI
	var_200_int = 28965; // 0x7db PushI
	var_201_int = 28975; // 0x7dc PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x7dd TObjFunc
	return 0; // 0x7df Return
	
Label_2016:
	var_202_int = 28963; // 0x7e0 PushI
	var_203_bool = var_36_bool == var_202_int; // 0x7e1 Eq
	if(var_203_bool == 0) goto Label_2034; // 0x7e2 JumpB
	var_204_string = ""; // 0x7e3 PushV
	var_204_string = "Neutral"; // 0x7e4 MovS
	func_1858(var_37_cvector, var_204_string); // 0x7e5 NEW_2
	var_205_int = 527618; // 0x7e7 PushI
	SetMessage(var_205_int); // 0x7e8 TObjFunc
	ClearReplies(); // 0x7ea TObjFunc
	var_206_int = 527619; // 0x7ec PushI
	var_207_int = 28965; // 0x7ed PushI
	var_208_int = 28964; // 0x7ee PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x7ef TObjFunc
	return 0; // 0x7f1 Return
	
Label_2034:
	var_209_int = 28965; // 0x7f2 PushI
	var_210_bool = var_36_bool == var_209_int; // 0x7f3 Eq
	if(var_210_bool == 0) goto Label_2052; // 0x7f4 JumpB
	var_211_string = ""; // 0x7f5 PushV
	var_211_string = "Neutral"; // 0x7f6 MovS
	func_1858(var_37_cvector, var_211_string); // 0x7f7 NEW_2
	var_212_int = 527620; // 0x7f9 PushI
	SetMessage(var_212_int); // 0x7fa TObjFunc
	ClearReplies(); // 0x7fc TObjFunc
	var_213_int = 527621; // 0x7fe PushI
	var_214_int = 28967; // 0x7ff PushI
	var_215_int = 28966; // 0x800 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x801 TObjFunc
	return 0; // 0x803 Return
	
Label_2052:
	var_216_int = 28967; // 0x804 PushI
	var_217_bool = var_36_bool == var_216_int; // 0x805 Eq
	if(var_217_bool == 0) goto Label_2070; // 0x806 JumpB
	var_218_string = ""; // 0x807 PushV
	var_218_string = "Neutral"; // 0x808 MovS
	func_1858(var_37_cvector, var_218_string); // 0x809 NEW_2
	var_219_int = 527622; // 0x80b PushI
	SetMessage(var_219_int); // 0x80c TObjFunc
	ClearReplies(); // 0x80e TObjFunc
	var_220_int = 527623; // 0x810 PushI
	var_221_int = 28969; // 0x811 PushI
	var_222_int = 28968; // 0x812 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x813 TObjFunc
	return 0; // 0x815 Return
	
Label_2070:
	var_223_int = 28969; // 0x816 PushI
	var_224_bool = var_36_bool == var_223_int; // 0x817 Eq
	if(var_224_bool == 0) goto Label_2093; // 0x818 JumpB
	var_225_string = ""; // 0x819 PushV
	var_225_string = "Neutral"; // 0x81a MovS
	func_1858(var_37_cvector, var_225_string); // 0x81b NEW_2
	var_226_int = 527624; // 0x81d PushI
	SetMessage(var_226_int); // 0x81e TObjFunc
	ClearReplies(); // 0x820 TObjFunc
	var_227_int = 527625; // 0x822 PushI
	var_228_int = 28971; // 0x823 PushI
	var_229_int = 28970; // 0x824 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x825 TObjFunc
	var_230_int = 527635; // 0x827 PushI
	var_231_int = 28982; // 0x828 PushI
	var_232_int = 28981; // 0x829 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x82a TObjFunc
	return 0; // 0x82c Return
	
Label_2093:
	var_233_int = 28982; // 0x82d PushI
	var_234_bool = var_36_bool == var_233_int; // 0x82e Eq
	if(var_234_bool == 0) goto Label_2111; // 0x82f JumpB
	var_235_string = ""; // 0x830 PushV
	var_235_string = "Grimacing"; // 0x831 MovS
	func_1858(var_37_cvector, var_235_string); // 0x832 NEW_2
	var_236_int = 527636; // 0x834 PushI
	SetMessage(var_236_int); // 0x835 TObjFunc
	ClearReplies(); // 0x837 TObjFunc
	var_237_int = 527637; // 0x839 PushI
	var_238_int = 28971; // 0x83a PushI
	var_239_int = 28983; // 0x83b PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x83c TObjFunc
	return 0; // 0x83e Return
	
Label_2111:
	var_240_int = 28971; // 0x83f PushI
	var_241_bool = var_36_bool == var_240_int; // 0x840 Eq
	if(var_241_bool == 0) goto Label_2129; // 0x841 JumpB
	var_242_string = ""; // 0x842 PushV
	var_242_string = "Neutral"; // 0x843 MovS
	func_1858(var_37_cvector, var_242_string); // 0x844 NEW_2
	var_243_int = 527626; // 0x846 PushI
	SetMessage(var_243_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_244_int = 527627; // 0x84b PushI
	var_245_int = -1; // 0x84c PushI
	var_246_int = 28972; // 0x84d PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x84e TObjFunc
	return 0; // 0x850 Return
	
Label_2129:
	var_3_string = 1; // 0x851 TMovB
	var_247_bool = 0; // 0x852 PushV
	func_3298(var_247_bool); // 0x853 NEW_2
	if(var_247_bool == 0) goto Label_2137; // 0x855 JumpB
	lshStopAnimation(); // 0x856 Func
	goto Label_2139; // 0x858 Jump
	
Label_2139:
	return 0; // 0x85b Return
	
Label_2137:
	StopAnimation(); // 0x859 Func
	
Label_2141:
	return 0; // 0x85d Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x905 PushI
	if(var_38_int == 0) goto Label_2459; // 0x906 JumpB
	func_3223(); // 0x908 NEW_2
	var_40_int = 41240; // 0x90a PushI
	var_41_bool = var_36_bool == var_40_int; // 0x90b Eq
	if(var_41_bool == 0) goto Label_2342; // 0x90c JumpB
	var_42_string = ""; // 0x90d PushV
	var_42_string = "Neutral"; // 0x90e MovS
	func_2286(var_37_cvector, var_42_string); // 0x90f NEW_2
	var_59_int = 539297; // 0x911 PushI
	SetMessage(var_59_int); // 0x912 TObjFunc
	ClearReplies(); // 0x914 TObjFunc
	var_60_int = 542655; // 0x916 PushI
	var_61_int = 45059; // 0x917 PushI
	var_62_int = 45057; // 0x918 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x919 TObjFunc
	var_63_int = 539298; // 0x91b PushI
	var_64_int = -1; // 0x91c PushI
	var_65_int = 41241; // 0x91d PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x91e TObjFunc
	var_66_int = 542656; // 0x920 PushI
	var_67_int = -1; // 0x921 PushI
	var_68_int = 45058; // 0x922 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x923 TObjFunc
	return 0; // 0x925 Return
	
Label_2342:
	var_69_int = 45059; // 0x926 PushI
	var_70_bool = var_36_bool == var_69_int; // 0x927 Eq
	if(var_70_bool == 0) goto Label_2365; // 0x928 JumpB
	var_71_string = ""; // 0x929 PushV
	var_71_string = "Neutral"; // 0x92a MovS
	func_2286(var_37_cvector, var_71_string); // 0x92b NEW_2
	var_72_int = 542657; // 0x92d PushI
	SetMessage(var_72_int); // 0x92e TObjFunc
	ClearReplies(); // 0x930 TObjFunc
	var_73_int = 542658; // 0x932 PushI
	var_74_int = 45061; // 0x933 PushI
	var_75_int = 45060; // 0x934 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x935 TObjFunc
	var_76_int = 542662; // 0x937 PushI
	var_77_int = 45063; // 0x938 PushI
	var_78_int = 45064; // 0x939 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x93a TObjFunc
	return 0; // 0x93c Return
	
Label_2365:
	var_79_int = 45061; // 0x93d PushI
	var_80_bool = var_36_bool == var_79_int; // 0x93e Eq
	if(var_80_bool == 0) goto Label_2383; // 0x93f JumpB
	var_81_string = ""; // 0x940 PushV
	var_81_string = "Strange"; // 0x941 MovS
	func_2286(var_37_cvector, var_81_string); // 0x942 NEW_2
	var_82_int = 542659; // 0x944 PushI
	SetMessage(var_82_int); // 0x945 TObjFunc
	ClearReplies(); // 0x947 TObjFunc
	var_83_int = 542660; // 0x949 PushI
	var_84_int = 45063; // 0x94a PushI
	var_85_int = 45062; // 0x94b PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x94c TObjFunc
	return 0; // 0x94e Return
	
Label_2383:
	var_86_int = 45063; // 0x94f PushI
	var_87_bool = var_36_bool == var_86_int; // 0x950 Eq
	if(var_87_bool == 0) goto Label_2406; // 0x951 JumpB
	var_88_string = ""; // 0x952 PushV
	var_88_string = "Strange"; // 0x953 MovS
	func_2286(var_37_cvector, var_88_string); // 0x954 NEW_2
	var_89_int = 542661; // 0x956 PushI
	SetMessage(var_89_int); // 0x957 TObjFunc
	ClearReplies(); // 0x959 TObjFunc
	var_90_int = 542663; // 0x95b PushI
	var_91_int = 45067; // 0x95c PushI
	var_92_int = 45065; // 0x95d PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x95e TObjFunc
	var_93_int = 542667; // 0x960 PushI
	var_94_int = 45071; // 0x961 PushI
	var_95_int = 45070; // 0x962 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x963 TObjFunc
	return 0; // 0x965 Return
	
Label_2406:
	var_96_int = 45071; // 0x966 PushI
	var_97_bool = var_36_bool == var_96_int; // 0x967 Eq
	if(var_97_bool == 0) goto Label_2424; // 0x968 JumpB
	var_98_string = ""; // 0x969 PushV
	var_98_string = "Neutral"; // 0x96a MovS
	func_2286(var_37_cvector, var_98_string); // 0x96b NEW_2
	var_99_int = 542668; // 0x96d PushI
	SetMessage(var_99_int); // 0x96e TObjFunc
	ClearReplies(); // 0x970 TObjFunc
	var_100_int = 542669; // 0x972 PushI
	var_101_int = 45067; // 0x973 PushI
	var_102_int = 45072; // 0x974 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x975 TObjFunc
	return 0; // 0x977 Return
	
Label_2424:
	var_103_int = 45067; // 0x978 PushI
	var_104_bool = var_36_bool == var_103_int; // 0x979 Eq
	if(var_104_bool == 0) goto Label_2447; // 0x97a JumpB
	var_105_string = ""; // 0x97b PushV
	var_105_string = "Neutral"; // 0x97c MovS
	func_2286(var_37_cvector, var_105_string); // 0x97d NEW_2
	var_106_int = 542664; // 0x97f PushI
	SetMessage(var_106_int); // 0x980 TObjFunc
	ClearReplies(); // 0x982 TObjFunc
	var_107_int = 542665; // 0x984 PushI
	var_108_int = -1; // 0x985 PushI
	var_109_int = 45068; // 0x986 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x987 TObjFunc
	var_110_int = 542666; // 0x989 PushI
	var_111_int = -1; // 0x98a PushI
	var_112_int = 45069; // 0x98b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x98c TObjFunc
	return 0; // 0x98e Return
	
Label_2447:
	var_3_string = 1; // 0x98f TMovB
	var_113_bool = 0; // 0x990 PushV
	func_3298(var_113_bool); // 0x991 NEW_2
	if(var_113_bool == 0) goto Label_2455; // 0x993 JumpB
	lshStopAnimation(); // 0x994 Func
	goto Label_2457; // 0x996 Jump
	
Label_2457:
	return 0; // 0x999 Return
	
Label_2455:
	StopAnimation(); // 0x997 Func
	
Label_2459:
	return 0; // 0x99b Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0xa3e PushI
	if(var_38_int == 0) goto Label_2662; // 0xa3f JumpB
	func_3223(); // 0xa41 NEW_2
	var_40_int = 42548; // 0xa43 PushI
	var_41_bool = var_36_int == var_40_int; // 0xa44 Eq
	if(var_41_bool == 0) goto Label_2650; // 0xa45 JumpB
	var_42_string = ""; // 0xa46 PushV
	var_42_string = "Neutral"; // 0xa47 MovS
	func_2599(var_37_cvector, var_42_string); // 0xa48 NEW_2
	var_59_int = 540539; // 0xa4a PushI
	SetMessage(var_59_int); // 0xa4b TObjFunc
	ClearReplies(); // 0xa4d TObjFunc
	var_60_int = 540540; // 0xa4f PushI
	var_61_int = -1; // 0xa50 PushI
	var_62_int = 42549; // 0xa51 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xa52 TObjFunc
	var_63_int = 540799; // 0xa54 PushI
	var_64_int = -1; // 0xa55 PushI
	var_65_int = 42848; // 0xa56 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xa57 TObjFunc
	return 0; // 0xa59 Return
	
Label_2650:
	var_3_string = 1; // 0xa5a TMovB
	var_66_bool = 0; // 0xa5b PushV
	func_3298(var_66_bool); // 0xa5c NEW_2
	if(var_66_bool == 0) goto Label_2658; // 0xa5e JumpB
	lshStopAnimation(); // 0xa5f Func
	goto Label_2660; // 0xa61 Jump
	
Label_2660:
	return 0; // 0xa64 Return
	
Label_2658:
	StopAnimation(); // 0xa62 Func
	
Label_2662:
	return 0; // 0xa66 Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0xab4 PushI
	var_38_bool = var_36_int == var_37_int; // 0xab5 Eq
	if(var_38_bool == 0) goto Label_2776; // 0xab6 JumpB
	func_2735(); // 0xab8 NEW_2
	var_40_bool = 0; // 0xaba PushV
	var_40_bool = 0; // 0xabb MovB
	var_41_bool = 0; // 0xabc PushV
	func_2949(var_41_bool); // 0xabd NEW_2
	if(var_41_bool == 0) goto Label_2757; // 0xabf JumpB
	var_44_bool = 0; // 0xac0 PushV
	func_2704(var_44_bool); // 0xac1 NEW_2
	if(var_44_bool == 0) goto Label_2757; // 0xac3 JumpB
	var_40_bool = 1; // 0xac4 MovB
	
Label_2757:
	if(var_40_bool == 0) goto Label_2770; // 0xac5 JumpB
	var_61_bool = 0; // 0xac6 PushV
	func_2684(var_61_bool); // 0xac7 NEW_2
	if(var_61_bool == 0) goto Label_2769; // 0xac9 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0xaca PushV
	var_82_object = Obj(); // 0xacb PushV
	func_3230(var_82_object); // 0xacc NEW_2
	var_81_object = var_82_object; // 0xacd Mov
	func_3097(var_81_object); // 0xacf NEW_2
	
Label_2769:
	goto Label_2776; // 0xad1 Jump
	
Label_2776:
	return 0; // 0xad8 Return
	
Label_2770:
	func_2699(var_36_int); // 0xad3 NEW_2
	func_2726(); // 0xad6 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2917(); // 0xada NEW_2
	func_2735(); // 0xadd NEW_2
	lshStopSpeech(); // 0xadf Func
	lshStopAnimation(); // 0xae1 Func
	StopAsync(); // 0xae3 Func
	Hold(); // 0xae5 Func
	return 0; // 0xae7 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0xae8 Func
	func_2735(); // 0xaeb NEW_2
	var_37_string = ""; // 0xaed PushV
	var_37_string = "Neutral"; // 0xaee MovS
	func_3177(var_37_string); // 0xaef NEW_2
	func_2726(); // 0xaf2 NEW_2
	return 0; // 0xaf4 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0xaf6 Push
	if(var_37_bool == 0) goto Label_2812; // 0xaf7 JumpB
	func_2726(); // 0xaf9 NEW_2
	goto Label_2816; // 0xafb Jump
	
Label_2816:
	return 0; // 0xb00 Return
	
Label_2812:
	var_43_string = ""; // 0xafc PushV
	var_43_string = "Neutral"; // 0xafd MovS
	func_3177(var_43_string); // 0xafe NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0xb01 PushV
	IsOverrideActive(var_38_bool); // 0xb02 Func
	var_39_bool = var_38_bool == 0; // 0xb04 Not
	if(var_39_bool == 0) goto Label_2845; // 0xb05 JumpB
	EventDisable(0); // 0xb06 EventDisable
	func_2917(); // 0xb08 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0xb0a PushV
	var_41_object = var_36_object; // 0xb0b Mov
	func_2940(var_41_object); // 0xb0c NEW_2
	EventEnable(0); // 0xb0e EventEnable
	var_54_object = Obj(); // 0xb0f PushV
	var_54_object = var_36_object; // 0xb10 Mov
	func_3701(var_54_object); // 0xb11 NEW_2
	var_690_string = ""; // 0xb13 PushV
	var_690_string = "Neutral"; // 0xb14 MovS
	func_3177(var_690_string); // 0xb15 NEW_2
	func_2735(); // 0xb18 NEW_2
	func_2726(); // 0xb1b NEW_2
	
Label_2845:
	return 2; // 0xb1d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	var_36_bool = GlobalVars[1]; // 0xa67 PushGE
	var_36_bool = 0; // 0xa68 MovB
	GlobalVars[1] = var_36_bool; // 0xa69 PopGE
	func_2670(var_35_cvector); // 0xa6b NEW_2
	return 0; // 0xa6d Return
}


func_0(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; // 0x0 PushV
	var_0_object = var_285_object; // 0x1 TMov
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; // 0x2 PushV
	var_296_object = var_285_object; // 0x3 Mov
	var_297_float = 70.0; // 0x4 MovF
	func_2954(var_296_object, var_297_float); // 0x5 NEW_2
	var_298_bool = var_295_bool == 0; // 0x7 Not
	if(var_298_bool == 0) goto Label_11; // 0x8 JumpB
	var_284_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_291_object); // 0xb Func
	var_299_int = 0; // 0xd PushV
	func_3292(var_299_int); // 0xe NEW_2
	SetNPCName(var_299_int); // 0x10 ObjFunc
	var_300_int = 0; // 0x12 PushV
	func_3290(var_300_int); // 0x13 NEW_2
	SetNPCDescription(var_300_int); // 0x15 ObjFunc
	var_301_string = ""; // 0x17 PushV
	func_3294(var_301_string); // 0x18 NEW_2
	SetPhoto(var_301_string); // 0x1a ObjFunc
	var_302_string = ""; // 0x1c PushV
	func_3296(var_302_string); // 0x1d NEW_2
	SetPhoto2(var_302_string); // 0x1f ObjFunc
	var_303_int = 0; // 0x21 PushV
	func_3684(var_303_int); // 0x22 NEW_2
	SetPlayerName(var_303_int); // 0x24 ObjFunc
	var_293_int = -1; // 0x26 MovI
	IsOverrideActive(var_292_bool); // 0x27 Func
	var_304_bool = var_292_bool; // 0x29 Push
	if(var_304_bool == 0) goto Label_45; // 0x2a JumpB
	var_284_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_291_object); // 0x2d Func
	var_305_bool = 0; var_306_object = Obj(); // 0x2f PushV
	var_307_object = Obj(); // 0x30 PushV
	func_3230(var_307_object); // 0x31 NEW_2
	var_306_object = var_307_object; // 0x32 Mov
	func_3039(var_305_bool, var_306_object); // 0x34 NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0x36 PushV
	var_308_object = var_285_object; // 0x37 Mov
	var_309_object = var_291_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_294_bool); // 0x3d ObjFunc
	
Label_63:
	var_355_bool = var_294_bool == 0; // 0x3f Not
	if(var_355_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_294_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_356_object = Obj(); // 0x46 PushV
	var_356_object = var_285_object; // 0x47 Mov
	func_3022(); // 0x48 NEW_2
	StopDialog(var_291_object); // 0x4a Func
	GetReturnValue(var_293_int); // 0x4c ObjFunc
	var_284_int = var_293_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3329()
{
	var_44_string = "k8q01"; // 0xd02 PushS
	var_45_int = 6; // 0xd03 PushI
	SetVariable(var_44_string, var_45_int); // 0xd04 Func
	func_3630(); // 0xd07 NEW_2
	return 0; // 0xd09 Return
}


func_1030(var_0_object, var_1_object, var_2_object, var_3_string, var_383_object, var_384_object)
{
	var_0_object = var_384_object; // 0x407 TMov
	var_1_object = var_383_object; // 0x408 TMov
	var_3_string = 0; // 0x409 TMovB
	var_389_int = 1; // 0x40a PushI
	if(var_389_int == 0) goto Label_1081; // 0x40b JumpB
	var_390_string = ""; // 0x40c PushV
	var_390_string = "Fear"; // 0x40d MovS
	func_1111(var_384_object, var_390_string); // 0x40e NEW_2
	var_398_int = 526091; // 0x410 PushI
	SetMessage(var_398_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_399_bool = 0; // 0x415 PushV
	var_399_bool = 0; // 0x416 MovB
	var_400_bool = 0; // 0x417 PushV
	var_400_bool = 0; // 0x418 MovB
	var_401_bool = 0; var_402_object = Obj(); // 0x419 PushV
	var_402_object = var_1_object; // 0x41a MovT
	func_3428(var_402_object); // 0x41b NEW_2
	if(var_401_bool == 0) goto Label_1060; // 0x41d JumpB
	var_407_bool = 0; var_408_object = Obj(); // 0x41e PushV
	var_408_object = var_1_object; // 0x41f MovT
	func_3440(var_408_object); // 0x420 NEW_2
	if(var_407_bool == 0) goto Label_1060; // 0x422 JumpB
	var_400_bool = 1; // 0x423 MovB
	
Label_1060:
	if(var_400_bool == 0) goto Label_1067; // 0x424 JumpB
	var_413_bool = 0; var_414_object = Obj(); // 0x425 PushV
	var_414_object = var_1_object; // 0x426 MovT
	func_3452(var_414_object); // 0x427 NEW_2
	if(var_413_bool == 0) goto Label_1067; // 0x429 JumpB
	var_399_bool = 1; // 0x42a MovB
	
Label_1067:
	if(var_399_bool == 0) goto Label_1073; // 0x42b JumpB
	var_419_int = 526092; // 0x42c PushI
	var_420_int = 27379; // 0x42d PushI
	var_421_int = 27378; // 0x42e PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x42f TObjFunc
	
Label_1073:
	var_422_int = 526095; // 0x431 PushI
	var_423_int = -1; // 0x432 PushI
	var_424_int = 27381; // 0x433 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x434 TObjFunc
	goto Label_1081; // 0x436 Jump
	
Label_1081:
	var_425_bool = 0; // 0x439 PushV
	func_3298(var_425_bool); // 0x43a NEW_2
	if(var_425_bool == 0) goto Label_1096; // 0x43c JumpB
	
Label_1085:
	lshWaitForAnimEnd(); // 0x43d Func
	var_426_string = var_3_string; // 0x43f PushT
	if(var_426_string == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1095; // 0x441 Jump
	
Label_1095:
	goto Label_1110; // 0x447 Jump
	
Label_1110:
	return 0; // 0x456 Return
	
Label_1090:
	var_427_string = ""; // 0x442 PushV
	var_427_string = var_2_object; // 0x443 MovT
	func_3177(var_427_string); // 0x444 NEW_2
	goto Label_1085; // 0x446 Jump
	
Label_1096:
	var_428_string = "all"; // 0x448 PushS
	var_429_string = "idle"; // 0x449 PushS
	PlayAnimation(var_428_string, var_429_string); // 0x44a Func
	
Label_1100:
	WaitForAnimEnd(); // 0x44c Func
	var_430_string = var_3_string; // 0x44e PushT
	if(var_430_string == 0) goto Label_1105; // 0x44f JumpB
	goto Label_1110; // 0x450 Jump
	
Label_1105:
	var_431_string = "all"; // 0x451 PushS
	var_432_string = "idle"; // 0x452 PushS
	PlayAnimation(var_431_string, var_432_string); // 0x453 Func
	goto Label_1100; // 0x455 Jump
}


func_3591()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0xe07 PushV
	var_95_int = 467; // 0xe08 PushI
	var_96_int = 1; // 0xe09 PushI
	var_97_int = 527783; // 0xe0a PushI
	CreateDiaryEntry(var_94_object, var_95_int, var_96_int, var_97_int); // 0xe0b Func
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0; // 0xe0d PushV
	var_99_object = var_94_object; // 0xe0e Mov
	var_100_int = 461; // 0xe0f MovI
	func_3656(var_98_bool, var_99_object, var_100_int); // 0xe10 NEW_2
	return 2; // 0xe12 Return
}


func_1286(var_0_object, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0; // 0x506 PushV
	var_0_object = var_438_object; // 0x507 TMov
	var_448_bool = 0; var_449_object = Obj(); var_450_float = 0; // 0x508 PushV
	var_449_object = var_438_object; // 0x509 Mov
	var_450_float = 70.0; // 0x50a MovF
	func_2954(var_449_object, var_450_float); // 0x50b NEW_2
	var_451_bool = var_448_bool == 0; // 0x50d Not
	if(var_451_bool == 0) goto Label_1297; // 0x50e JumpB
	var_437_int = -2; // 0x50f MovI
	return 8; // 0x510 Return
	
Label_1297:
	CreateDialog(var_444_object); // 0x511 Func
	var_452_int = 0; // 0x513 PushV
	func_3292(var_452_int); // 0x514 NEW_2
	SetNPCName(var_452_int); // 0x516 ObjFunc
	var_453_int = 0; // 0x518 PushV
	func_3290(var_453_int); // 0x519 NEW_2
	SetNPCDescription(var_453_int); // 0x51b ObjFunc
	var_454_string = ""; // 0x51d PushV
	func_3294(var_454_string); // 0x51e NEW_2
	SetPhoto(var_454_string); // 0x520 ObjFunc
	var_455_string = ""; // 0x522 PushV
	func_3296(var_455_string); // 0x523 NEW_2
	SetPhoto2(var_455_string); // 0x525 ObjFunc
	var_456_int = 0; // 0x527 PushV
	func_3684(var_456_int); // 0x528 NEW_2
	SetPlayerName(var_456_int); // 0x52a ObjFunc
	var_446_int = -1; // 0x52c MovI
	IsOverrideActive(var_445_bool); // 0x52d Func
	var_457_bool = var_445_bool; // 0x52f Push
	if(var_457_bool == 0) goto Label_1331; // 0x530 JumpB
	var_437_int = -2; // 0x531 MovI
	return 8; // 0x532 Return
	
Label_1331:
	DoDialog(var_444_object); // 0x533 Func
	var_458_bool = 0; var_459_object = Obj(); // 0x535 PushV
	var_460_object = Obj(); // 0x536 PushV
	func_3230(var_460_object); // 0x537 NEW_2
	var_459_object = var_460_object; // 0x538 Mov
	func_3039(var_458_bool, var_459_object); // 0x53a NEW_2
	var_461_object = Obj(); var_462_object = Obj(); // 0x53c PushV
	var_461_object = var_438_object; // 0x53d Mov
	var_462_object = var_444_object; // 0x53e Mov
	TaskCall(7); // 0x53f TaskCall
	func_1367(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object); // 0x540 NEW_2
	TaskReturn(); // 0x541 TaskReturn
	IsDialogEnd(var_447_bool); // 0x543 ObjFunc
	
Label_1349:
	var_500_bool = var_447_bool == 0; // 0x545 Not
	if(var_500_bool == 0) goto Label_1356; // 0x546 JumpB
	sync(); // 0x547 Func
	IsDialogEnd(var_447_bool); // 0x549 ObjFunc
	goto Label_1349; // 0x54b Jump
	
Label_1356:
	var_501_object = Obj(); // 0x54c PushV
	var_501_object = var_438_object; // 0x54d Mov
	func_3022(); // 0x54e NEW_2
	StopDialog(var_444_object); // 0x550 Func
	GetReturnValue(var_446_int); // 0x552 ObjFunc
	var_437_int = var_446_int; // 0x554 Mov
	return 8; // 0x555 Return
}


func_3338()
{
	var_50_int = 0; var_51_int = 0; // 0xd0a PushV
	var_52_string = "k11q01SoulCount"; // 0xd0b PushS
	GetVariable(var_52_string, var_51_int); // 0xd0c Func
	var_53_int = 1; // 0xd0e PushI
	var_51_int = var_51_int + var_53_int; // 0xd0f Add2
	var_54_string = "k11q01SoulCount"; // 0xd10 PushS
	SetVariable(var_54_string, var_51_int); // 0xd11 Func
	var_55_int = 2; // 0xd13 PushI
	var_56_bool = var_51_int == var_55_int; // 0xd14 Eq
	if(var_56_bool == 0) goto Label_3354; // 0xd15 JumpB
	func_3565(); // 0xd17 NEW_2
	goto Label_3388; // 0xd19 Jump
	
Label_3388:
	return 2; // 0xd3c Return
	
Label_3354:
	var_80_int = 3; // 0xd1a PushI
	var_81_bool = var_51_int == var_80_int; // 0xd1b Eq
	if(var_81_bool == 0) goto Label_3361; // 0xd1c JumpB
	func_3552(); // 0xd1e NEW_2
	goto Label_3388; // 0xd20 Jump
	
Label_3361:
	var_90_int = 4; // 0xd21 PushI
	var_91_bool = var_51_int == var_90_int; // 0xd22 Eq
	if(var_91_bool == 0) goto Label_3368; // 0xd23 JumpB
	func_3539(); // 0xd25 NEW_2
	goto Label_3388; // 0xd27 Jump
	
Label_3368:
	var_100_int = 5; // 0xd28 PushI
	var_101_bool = var_51_int == var_100_int; // 0xd29 Eq
	if(var_101_bool == 0) goto Label_3375; // 0xd2a JumpB
	func_3526(); // 0xd2c NEW_2
	goto Label_3388; // 0xd2e Jump
	
Label_3375:
	var_110_int = 6; // 0xd2f PushI
	var_111_bool = var_51_int == var_110_int; // 0xd30 Eq
	if(var_111_bool == 0) goto Label_3382; // 0xd31 JumpB
	func_3513(); // 0xd33 NEW_2
	goto Label_3388; // 0xd35 Jump
	
Label_3382:
	var_120_int = 7; // 0xd36 PushI
	var_121_bool = var_51_int == var_120_int; // 0xd37 Eq
	if(var_121_bool == 0) goto Label_3388; // 0xd38 JumpB
	func_3500(); // 0xd3a NEW_2
}


func_3604()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xe14 PushV
	var_48_int = 465; // 0xe15 PushI
	var_49_int = 1; // 0xe16 PushI
	var_50_int = 527781; // 0xe17 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0xe18 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0xe1a PushV
	var_52_object = var_47_object; // 0xe1b Mov
	var_53_int = 461; // 0xe1c MovI
	func_3656(var_51_bool, var_52_object, var_53_int); // 0xe1d NEW_2
	return 2; // 0xe1f Return
}


func_3097(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0xc19 PushV
	var_146_string = "c"; // 0xc1a MovS
	var_147_int = 0; // 0xc1b MovI
	
Label_3100:
	var_151_int = 1; // 0xc1c PushI
	if(var_151_int == 0) goto Label_3113; // 0xc1d JumpB
	var_152_int = 1; // 0xc1e PushI
	var_153_int = var_147_int + var_152_int; // 0xc1f Add
	var_154_int = var_146_string + var_153_int; // 0xc20 Add
	HasProperty(var_154_int, var_148_bool); // 0xc21 ObjFunc
	var_155_bool = var_148_bool == 0; // 0xc23 Not
	if(var_155_bool == 0) goto Label_3110; // 0xc24 JumpB
	goto Label_3113; // 0xc25 Jump
	
Label_3113:
	var_156_bool = var_147_int == 0; // 0xc29 Not
	if(var_156_bool == 0) goto Label_3117; // 0xc2a JumpB
	var_139_bool = 0; // 0xc2b MovB
	return 10; // 0xc2c Return
	
Label_3117:
	var_149_int = 0; // 0xc2d MovI
	var_157_int = 1; // 0xc2e PushI
	var_158_bool = var_147_int > var_157_int; // 0xc2f GT
	if(var_158_bool == 0) goto Label_3123; // 0xc30 JumpB
	irand(var_149_int, var_147_int); // 0xc31 Func
	
Label_3123:
	var_159_int = 1; // 0xc33 PushI
	var_160_int = var_149_int + var_159_int; // 0xc34 Add
	var_161_int = var_146_string + var_160_int; // 0xc35 Add
	GetProperty(var_161_int, var_150_string); // 0xc36 ObjFunc
	var_162_bool = 0; var_163_string = ""; // 0xc38 PushV
	var_163_string = var_150_string; // 0xc39 Mov
	func_3208(var_162_bool, var_163_string); // 0xc3a NEW_2
	var_139_bool = var_162_bool; // 0xc3b Mov
	return 10; // 0xc3d Return
	
Label_3110:
	var_168_int = 1; // 0xc26 PushI
	var_147_int = var_147_int + var_168_int; // 0xc27 Add2
	goto Label_3100; // 0xc28 Jump
}


func_2846()
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0xb1e PushV
	WaitForAnimEnd(); // 0xb1f Func
	var_53_bool = 0; // 0xb21 PushV
	func_2949(var_53_bool); // 0xb22 NEW_2
	var_54_bool = var_53_bool == 0; // 0xb24 Not
	if(var_54_bool == 0) goto Label_2855; // 0xb25 JumpB
	return 12; // 0xb26 Return
	
Label_2855:
	var_55_int = 0; // 0xb27 PushV
	func_3273(var_55_int); // 0xb28 NEW_2
	var_47_int = var_55_int; // 0xb29 Mov
	var_48_int = 0; // 0xb2b MovI
	
Label_2860:
	var_68_bool = 0; // 0xb2c PushV
	var_68_bool = 0; // 0xb2d MovB
	var_69_int = 5; // 0xb2e PushI
	var_70_bool = var_48_int < var_69_int; // 0xb2f LT
	if(var_70_bool == 0) goto Label_2870; // 0xb30 JumpB
	var_71_bool = 0; // 0xb31 PushV
	func_2949(var_71_bool); // 0xb32 NEW_2
	if(var_71_bool == 0) goto Label_2870; // 0xb34 JumpB
	var_68_bool = 1; // 0xb35 MovB
	
Label_2870:
	if(var_68_bool == 0) goto Label_2912; // 0xb36 JumpB
	var_72_bool = var_47_int == 0; // 0xb37 Not
	if(var_72_bool == 0) goto Label_2880; // 0xb38 JumpB
	var_73_int = 3; // 0xb39 PushI
	Sleep(var_73_int, var_49_bool); // 0xb3a Func
	var_74_bool = var_49_bool == 0; // 0xb3c Not
	if(var_74_bool == 0) goto Label_2879; // 0xb3d JumpB
	goto Label_2912; // 0xb3e Jump
	
Label_2912:
	ResetAAS(); // 0xb60 Func
	return 12; // 0xb62 Return
	
Label_2879:
	goto Label_2901; // 0xb3f Jump
	
Label_2901:
	var_75_bool = 0; // 0xb55 PushV
	func_2915(var_75_bool); // 0xb56 NEW_2
	var_76_bool = var_75_bool == 0; // 0xb58 Not
	if(var_76_bool == 0) goto Label_2907; // 0xb59 JumpB
	goto Label_2912; // 0xb5a Jump
	
Label_2907:
	ResetAAS(); // 0xb5b Func
	var_77_int = 1; // 0xb5d PushI
	var_48_int = var_48_int + var_77_int; // 0xb5e Add2
	goto Label_2860; // 0xb5f Jump
	
Label_2880:
	irand(var_50_int, var_47_int); // 0xb40 Func
	var_78_int = 5; // 0xb42 PushI
	irand(var_51_int, var_78_int); // 0xb43 Func
	var_79_int = 0; // 0xb45 PushI
	var_80_bool = var_51_int != var_79_int; // 0xb46 Neq
	if(var_80_bool == 0) goto Label_2889; // 0xb47 JumpB
	var_50_int = 0; // 0xb48 MovI
	
Label_2889:
	var_81_string = "all"; // 0xb49 PushS
	var_82_string = ""; var_83_int = 0; // 0xb4a PushV
	var_83_int = var_50_int; // 0xb4b Mov
	func_3266(var_82_string, var_83_int); // 0xb4c NEW_2
	PlayAnimation(var_81_string, var_82_string); // 0xb4e Func
	WaitForAnimEnd(var_52_bool); // 0xb50 Func
	var_84_bool = var_52_bool == 0; // 0xb52 Not
	if(var_84_bool == 0) goto Label_2901; // 0xb53 JumpB
	goto Label_2912; // 0xb54 Jump
}


func_3617()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xe21 PushV
	var_52_int = 414; // 0xe22 PushI
	var_53_int = 1; // 0xe23 PushI
	var_54_int = 526115; // 0xe24 PushI
	CreateDiaryEntry(var_51_object, var_52_int, var_53_int, var_54_int); // 0xe25 Func
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; // 0xe27 PushV
	var_56_object = var_51_object; // 0xe28 Mov
	var_57_int = 408; // 0xe29 MovI
	func_3656(var_55_bool, var_56_object, var_57_int); // 0xe2a NEW_2
	return 2; // 0xe2c Return
}


func_2599(var_2_object, var_665_string)
{
	var_666_bool = 0; // 0xa28 PushV
	func_3298(var_666_bool); // 0xa29 NEW_2
	var_667_bool = var_666_bool == 0; // 0xa2b Not
	if(var_667_bool == 0) goto Label_2606; // 0xa2c JumpB
	return 0; // 0xa2d Return
	
Label_2606:
	var_668_bool = var_665_string == var_2_object; // 0xa2e Eq
	if(var_668_bool == 0) goto Label_2609; // 0xa2f JumpB
	return 0; // 0xa30 Return
	
Label_2609:
	var_669_string = ""; var_670_bool = 0; // 0xa31 PushV
	var_669_string = var_665_string; // 0xa32 Mov
	var_671_string = ""; // 0xa33 PushS
	var_672_bool = var_665_string == var_671_string; // 0xa34 Eq
	if(var_672_bool == 0) goto Label_2616; // 0xa35 JumpB
	var_670_bool = 0; // 0xa36 MovB
	goto Label_2617; // 0xa37 Jump
	
Label_2617:
	func_3193(var_669_string, var_670_bool); // 0xa39 NEW_2
	var_2_object = var_665_string; // 0xa3b TMov
	return 0; // 0xa3c Return
	
Label_2616:
	var_670_bool = 1; // 0xa38 MovB
}


func_3630()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xe2e PushV
	var_48_int = 444; // 0xe2f PushI
	var_49_int = 1; // 0xe30 PushI
	var_50_int = 526469; // 0xe31 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0xe32 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0xe34 PushV
	var_52_object = var_47_object; // 0xe35 Mov
	var_53_int = 438; // 0xe36 MovI
	func_3656(var_51_bool, var_52_object, var_53_int); // 0xe37 NEW_2
	return 2; // 0xe39 Return
}


func_821(var_2_object, var_230_string)
{
	var_231_bool = 0; // 0x336 PushV
	func_3298(var_231_bool); // 0x337 NEW_2
	var_232_bool = var_231_bool == 0; // 0x339 Not
	if(var_232_bool == 0) goto Label_828; // 0x33a JumpB
	return 0; // 0x33b Return
	
Label_828:
	var_233_bool = var_230_string == var_2_object; // 0x33c Eq
	if(var_233_bool == 0) goto Label_831; // 0x33d JumpB
	return 0; // 0x33e Return
	
Label_831:
	var_234_string = ""; var_235_bool = 0; // 0x33f PushV
	var_234_string = var_230_string; // 0x340 Mov
	var_236_string = ""; // 0x341 PushS
	var_237_bool = var_230_string == var_236_string; // 0x342 Eq
	if(var_237_bool == 0) goto Label_838; // 0x343 JumpB
	var_235_bool = 0; // 0x344 MovB
	goto Label_839; // 0x345 Jump
	
Label_839:
	func_3193(var_234_string, var_235_bool); // 0x347 NEW_2
	var_2_object = var_230_string; // 0x349 TMov
	return 0; // 0x34a Return
	
Label_838:
	var_235_bool = 1; // 0x346 MovB
}


func_3643(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xe3b PushV
	GetDiaryRoot(var_73_object); // 0xe3c Func
	var_74_bool = var_73_object == 0; // 0xe3e Not
	if(var_74_bool == 0) goto Label_3653; // 0xe3f JumpB
	var_75_string = "Can't retrieve diary root"; // 0xe40 PushS
	Trace(var_75_string); // 0xe41 Func
	var_71_object = 0; // 0xe43 MovB
	return 2; // 0xe44 Return
	
Label_3653:
	var_71_object = var_73_object; // 0xe45 Mov
	return 2; // 0xe46 Return
}


func_3389()
{
	var_44_string = "ook11Ospina1"; // 0xd3e PushS
	var_45_int = 1; // 0xd3f PushI
	SetVariable(var_44_string, var_45_int); // 0xd40 Func
	return 0; // 0xd42 Return
}


func_3134(var_170_bool)
{
	var_172_string = ""; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_string = ""; var_177_string = ""; var_178_int = 0; var_179_bool = 0; var_180_int = 0; var_181_string = ""; // 0xc3e PushV
	var_182_string = "d"; // 0xc3f PushS
	var_183_int = 0; // 0xc40 PushV
	func_3251(var_183_int); // 0xc41 NEW_2
	var_189_int = var_182_string + var_183_int; // 0xc43 Add
	var_190_string = "m"; // 0xc44 PushS
	var_177_string = var_189_int + var_190_string; // 0xc45 Add2
	var_178_int = 0; // 0xc46 MovI
	
Label_3143:
	var_191_int = 1; // 0xc47 PushI
	if(var_191_int == 0) goto Label_3156; // 0xc48 JumpB
	var_192_int = 1; // 0xc49 PushI
	var_193_int = var_178_int + var_192_int; // 0xc4a Add
	var_194_int = var_177_string + var_193_int; // 0xc4b Add
	HasProperty(var_194_int, var_179_bool); // 0xc4c ObjFunc
	var_195_bool = var_179_bool == 0; // 0xc4e Not
	if(var_195_bool == 0) goto Label_3153; // 0xc4f JumpB
	goto Label_3156; // 0xc50 Jump
	
Label_3156:
	var_196_bool = var_178_int == 0; // 0xc54 Not
	if(var_196_bool == 0) goto Label_3160; // 0xc55 JumpB
	var_170_bool = 0; // 0xc56 MovB
	return 10; // 0xc57 Return
	
Label_3160:
	var_180_int = 0; // 0xc58 MovI
	var_197_int = 1; // 0xc59 PushI
	var_198_bool = var_178_int > var_197_int; // 0xc5a GT
	if(var_198_bool == 0) goto Label_3166; // 0xc5b JumpB
	irand(var_180_int, var_178_int); // 0xc5c Func
	
Label_3166:
	var_199_int = 1; // 0xc5e PushI
	var_200_int = var_180_int + var_199_int; // 0xc5f Add
	var_201_int = var_177_string + var_200_int; // 0xc60 Add
	GetProperty(var_201_int, var_181_string); // 0xc61 ObjFunc
	var_202_bool = 0; var_203_string = ""; // 0xc63 PushV
	var_203_string = var_181_string; // 0xc64 Mov
	func_3208(var_202_bool, var_203_string); // 0xc65 NEW_2
	var_170_bool = var_202_bool; // 0xc66 Mov
	return 10; // 0xc68 Return
	
Label_3153:
	var_204_int = 1; // 0xc51 PushI
	var_178_int = var_178_int + var_204_int; // 0xc52 Add2
	goto Label_3143; // 0xc53 Jump
}


func_1858(var_2_object, var_535_string)
{
	var_536_bool = 0; // 0x743 PushV
	func_3298(var_536_bool); // 0x744 NEW_2
	var_537_bool = var_536_bool == 0; // 0x746 Not
	if(var_537_bool == 0) goto Label_1865; // 0x747 JumpB
	return 0; // 0x748 Return
	
Label_1865:
	var_538_bool = var_535_string == var_2_object; // 0x749 Eq
	if(var_538_bool == 0) goto Label_1868; // 0x74a JumpB
	return 0; // 0x74b Return
	
Label_1868:
	var_539_string = ""; var_540_bool = 0; // 0x74c PushV
	var_539_string = var_535_string; // 0x74d Mov
	var_541_string = ""; // 0x74e PushS
	var_542_bool = var_535_string == var_541_string; // 0x74f Eq
	if(var_542_bool == 0) goto Label_1875; // 0x750 JumpB
	var_540_bool = 0; // 0x751 MovB
	goto Label_1876; // 0x752 Jump
	
Label_1876:
	func_3193(var_539_string, var_540_bool); // 0x754 NEW_2
	var_2_object = var_535_string; // 0x756 TMov
	return 0; // 0x757 Return
	
Label_1875:
	var_540_bool = 1; // 0x753 MovB
}


func_3395()
{
	var_73_string = "k2q01"; // 0xd44 PushS
	var_74_int = -1; // 0xd45 PushI
	SetVariable(var_73_string, var_74_int); // 0xd46 Func
	func_3578(); // 0xd49 NEW_2
	return 0; // 0xd4b Return
}


func_3656(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0xe48 PushV
	var_71_object = Obj(); // 0xe49 PushV
	func_3643(var_71_object); // 0xe4a NEW_2
	var_68_object = var_71_object; // 0xe4b Mov
	Find(var_64_int, var_69_object); // 0xe4d ObjFunc
	var_76_bool = var_69_object == 0; // 0xe4f Not
	if(var_76_bool == 0) goto Label_3671; // 0xe50 JumpB
	var_77_string = "Can't find diary parent with id: "; // 0xe51 PushS
	var_78_int = var_77_string + var_64_int; // 0xe52 Add
	Trace(var_78_int); // 0xe53 Func
	var_62_bool = 0; // 0xe55 MovB
	return 6; // 0xe56 Return
	
Label_3671:
	AddChild(var_63_object); // 0xe57 ObjFunc
	var_79_int = 7; // 0xe59 PushI
	SendWorldWndMessage(var_79_int); // 0xe5a Func
	GetCategory(var_70_int); // 0xe5c ObjFunc
	SetDiarySection(var_70_int); // 0xe5e Func
	var_62_bool = 0; // 0xe60 MovB
	return 6; // 0xe61 Return
}


func_3404(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0xd4d PushV
	var_327_string = "k2q01"; // 0xd4e MovS
	func_3246(var_326_int, var_327_string); // 0xd4f NEW_2
	var_330_int = 2; // 0xd51 PushI
	var_331_bool = var_326_int == var_330_int; // 0xd52 Eq
	if(var_331_bool == 0) goto Label_3414; // 0xd53 JumpB
	var_324_bool = 1; // 0xd54 MovB
	return 0; // 0xd55 Return
	
Label_3414:
	var_324_bool = 0; // 0xd56 MovB
	return 0; // 0xd57 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object; // 0x52 TMov
	var_1_object = var_308_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_314_int = 1; // 0x55 PushI
	if(var_314_int == 0) goto Label_144; // 0x56 JumpB
	var_315_string = ""; // 0x57 PushV
	var_315_string = "Neutral"; // 0x58 MovS
	func_174(var_309_object, var_315_string); // 0x59 NEW_2
	var_323_int = 525251; // 0x5b PushI
	SetMessage(var_323_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_324_bool = 0; var_325_object = Obj(); // 0x60 PushV
	var_325_object = var_1_object; // 0x61 MovT
	func_3404(var_325_object); // 0x62 NEW_2
	if(var_324_bool == 0) goto Label_106; // 0x64 JumpB
	var_332_int = 525252; // 0x65 PushI
	var_333_int = 44489; // 0x66 PushI
	var_334_int = 26620; // 0x67 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x68 TObjFunc
	
Label_106:
	var_335_bool = 0; var_336_object = Obj(); // 0x6a PushV
	var_336_object = var_1_object; // 0x6b MovT
	func_3416(var_336_object); // 0x6c NEW_2
	if(var_335_bool == 0) goto Label_116; // 0x6e JumpB
	var_341_int = 525263; // 0x6f PushI
	var_342_int = 26632; // 0x70 PushI
	var_343_int = 26631; // 0x71 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x72 TObjFunc
	
Label_116:
	var_344_int = 525255; // 0x74 PushI
	var_345_int = -1; // 0x75 PushI
	var_346_int = 26623; // 0x76 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x77 TObjFunc
	goto Label_144; // 0x79 Jump
	
Label_144:
	var_347_bool = 0; // 0x90 PushV
	func_3298(var_347_bool); // 0x91 NEW_2
	if(var_347_bool == 0) goto Label_159; // 0x93 JumpB
	
Label_148:
	lshWaitForAnimEnd(); // 0x94 Func
	var_348_string = var_3_string; // 0x96 PushT
	if(var_348_string == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_158:
	goto Label_173; // 0x9e Jump
	
Label_173:
	return 0; // 0xad Return
	
Label_153:
	var_349_string = ""; // 0x99 PushV
	var_349_string = var_2_object; // 0x9a MovT
	func_3177(var_349_string); // 0x9b NEW_2
	goto Label_148; // 0x9d Jump
	
Label_159:
	var_350_string = "all"; // 0x9f PushS
	var_351_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_350_string, var_351_string); // 0xa1 Func
	
Label_163:
	WaitForAnimEnd(); // 0xa3 Func
	var_352_string = var_3_string; // 0xa5 PushT
	if(var_352_string == 0) goto Label_168; // 0xa6 JumpB
	goto Label_173; // 0xa7 Jump
	
Label_168:
	var_353_string = "all"; // 0xa8 PushS
	var_354_string = "idle"; // 0xa9 PushS
	PlayAnimation(var_353_string, var_354_string); // 0xaa Func
	goto Label_163; // 0xac Jump
}


func_3578()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0xdfa PushV
	var_77_int = 790; // 0xdfb PushI
	var_78_int = 1; // 0xdfc PushI
	var_79_int = 542526; // 0xdfd PushI
	CreateDiaryEntry(var_76_object, var_77_int, var_78_int, var_79_int); // 0xdfe Func
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0; // 0xe00 PushV
	var_81_object = var_76_object; // 0xe01 Mov
	var_82_int = 461; // 0xe02 MovI
	func_3656(var_80_bool, var_81_object, var_82_int); // 0xe03 NEW_2
	return 2; // 0xe05 Return
}


func_1111(var_2_object, var_390_string)
{
	var_391_bool = 0; // 0x458 PushV
	func_3298(var_391_bool); // 0x459 NEW_2
	var_392_bool = var_391_bool == 0; // 0x45b Not
	if(var_392_bool == 0) goto Label_1118; // 0x45c JumpB
	return 0; // 0x45d Return
	
Label_1118:
	var_393_bool = var_390_string == var_2_object; // 0x45e Eq
	if(var_393_bool == 0) goto Label_1121; // 0x45f JumpB
	return 0; // 0x460 Return
	
Label_1121:
	var_394_string = ""; var_395_bool = 0; // 0x461 PushV
	var_394_string = var_390_string; // 0x462 Mov
	var_396_string = ""; // 0x463 PushS
	var_397_bool = var_390_string == var_396_string; // 0x464 Eq
	if(var_397_bool == 0) goto Label_1128; // 0x465 JumpB
	var_395_bool = 0; // 0x466 MovB
	goto Label_1129; // 0x467 Jump
	
Label_1129:
	func_3193(var_394_string, var_395_bool); // 0x469 NEW_2
	var_2_object = var_390_string; // 0x46b TMov
	return 0; // 0x46c Return
	
Label_1128:
	var_395_bool = 1; // 0x468 MovB
}


func_1367(var_0_object, var_1_object, var_2_object, var_3_string, var_461_object, var_462_object)
{
	var_0_object = var_462_object; // 0x558 TMov
	var_1_object = var_461_object; // 0x559 TMov
	var_3_string = 0; // 0x55a TMovB
	var_467_int = 1; // 0x55b PushI
	if(var_467_int == 0) goto Label_1405; // 0x55c JumpB
	var_468_string = ""; // 0x55d PushV
	var_468_string = "Neutral"; // 0x55e MovS
	func_1435(var_462_object, var_468_string); // 0x55f NEW_2
	var_476_int = 526441; // 0x561 PushI
	SetMessage(var_476_int); // 0x562 TObjFunc
	ClearReplies(); // 0x564 TObjFunc
	var_477_bool = 0; var_478_object = Obj(); // 0x566 PushV
	var_478_object = var_1_object; // 0x567 MovT
	func_3464(var_478_object); // 0x568 NEW_2
	if(var_477_bool == 0) goto Label_1392; // 0x56a JumpB
	var_483_int = 526442; // 0x56b PushI
	var_484_int = 27718; // 0x56c PushI
	var_485_int = 27717; // 0x56d PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x56e TObjFunc
	
Label_1392:
	var_486_int = 526449; // 0x570 PushI
	var_487_int = -1; // 0x571 PushI
	var_488_int = 27724; // 0x572 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x573 TObjFunc
	var_489_int = 528982; // 0x575 PushI
	var_490_int = -1; // 0x576 PushI
	var_491_int = 30419; // 0x577 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x578 TObjFunc
	goto Label_1405; // 0x57a Jump
	
Label_1405:
	var_492_bool = 0; // 0x57d PushV
	func_3298(var_492_bool); // 0x57e NEW_2
	if(var_492_bool == 0) goto Label_1420; // 0x580 JumpB
	
Label_1409:
	lshWaitForAnimEnd(); // 0x581 Func
	var_493_string = var_3_string; // 0x583 PushT
	if(var_493_string == 0) goto Label_1414; // 0x584 JumpB
	goto Label_1419; // 0x585 Jump
	
Label_1419:
	goto Label_1434; // 0x58b Jump
	
Label_1434:
	return 0; // 0x59a Return
	
Label_1414:
	var_494_string = ""; // 0x586 PushV
	var_494_string = var_2_object; // 0x587 MovT
	func_3177(var_494_string); // 0x588 NEW_2
	goto Label_1409; // 0x58a Jump
	
Label_1420:
	var_495_string = "all"; // 0x58c PushS
	var_496_string = "idle"; // 0x58d PushS
	PlayAnimation(var_495_string, var_496_string); // 0x58e Func
	
Label_1424:
	WaitForAnimEnd(); // 0x590 Func
	var_497_string = var_3_string; // 0x592 PushT
	if(var_497_string == 0) goto Label_1429; // 0x593 JumpB
	goto Label_1434; // 0x594 Jump
	
Label_1429:
	var_498_string = "all"; // 0x595 PushS
	var_499_string = "idle"; // 0x596 PushS
	PlayAnimation(var_498_string, var_499_string); // 0x597 Func
	goto Label_1424; // 0x599 Jump
}


func_3416(var_335_bool)
{
	var_337_int = 0; var_338_string = ""; // 0xd59 PushV
	var_338_string = "k2q01"; // 0xd5a MovS
	func_3246(var_337_int, var_338_string); // 0xd5b NEW_2
	var_339_int = 5; // 0xd5d PushI
	var_340_bool = var_337_int == var_339_int; // 0xd5e Eq
	if(var_340_bool == 0) goto Label_3426; // 0xd5f JumpB
	var_335_bool = 1; // 0xd60 MovB
	return 0; // 0xd61 Return
	
Label_3426:
	var_335_bool = 0; // 0xd62 MovB
	return 0; // 0xd63 Return
}


func_2142(var_0_object, var_575_int, var_576_object)
{
	var_578_object = Obj(); var_579_bool = 0; var_580_int = 0; var_581_bool = 0; var_582_object = Obj(); var_583_bool = 0; var_584_int = 0; var_585_bool = 0; // 0x85e PushV
	var_0_object = var_576_object; // 0x85f TMov
	var_586_bool = 0; var_587_object = Obj(); var_588_float = 0; // 0x860 PushV
	var_587_object = var_576_object; // 0x861 Mov
	var_588_float = 70.0; // 0x862 MovF
	func_2954(var_587_object, var_588_float); // 0x863 NEW_2
	var_589_bool = var_586_bool == 0; // 0x865 Not
	if(var_589_bool == 0) goto Label_2153; // 0x866 JumpB
	var_575_int = -2; // 0x867 MovI
	return 8; // 0x868 Return
	
Label_2153:
	CreateDialog(var_582_object); // 0x869 Func
	var_590_int = 0; // 0x86b PushV
	func_3292(var_590_int); // 0x86c NEW_2
	SetNPCName(var_590_int); // 0x86e ObjFunc
	var_591_int = 0; // 0x870 PushV
	func_3290(var_591_int); // 0x871 NEW_2
	SetNPCDescription(var_591_int); // 0x873 ObjFunc
	var_592_string = ""; // 0x875 PushV
	func_3294(var_592_string); // 0x876 NEW_2
	SetPhoto(var_592_string); // 0x878 ObjFunc
	var_593_string = ""; // 0x87a PushV
	func_3296(var_593_string); // 0x87b NEW_2
	SetPhoto2(var_593_string); // 0x87d ObjFunc
	var_594_int = 0; // 0x87f PushV
	func_3684(var_594_int); // 0x880 NEW_2
	SetPlayerName(var_594_int); // 0x882 ObjFunc
	var_584_int = -1; // 0x884 MovI
	IsOverrideActive(var_583_bool); // 0x885 Func
	var_595_bool = var_583_bool; // 0x887 Push
	if(var_595_bool == 0) goto Label_2187; // 0x888 JumpB
	var_575_int = -2; // 0x889 MovI
	return 8; // 0x88a Return
	
Label_2187:
	DoDialog(var_582_object); // 0x88b Func
	var_596_bool = 0; var_597_object = Obj(); // 0x88d PushV
	var_598_object = Obj(); // 0x88e PushV
	func_3230(var_598_object); // 0x88f NEW_2
	var_597_object = var_598_object; // 0x890 Mov
	func_3039(var_596_bool, var_597_object); // 0x892 NEW_2
	var_599_object = Obj(); var_600_object = Obj(); // 0x894 PushV
	var_599_object = var_576_object; // 0x895 Mov
	var_600_object = var_582_object; // 0x896 Mov
	TaskCall(11); // 0x897 TaskCall
	func_2223(var_601_object, var_602_object, var_603_string, var_604_bool, var_599_object, var_600_object); // 0x898 NEW_2
	TaskReturn(); // 0x899 TaskReturn
	IsDialogEnd(var_585_bool); // 0x89b ObjFunc
	
Label_2205:
	var_632_bool = var_585_bool == 0; // 0x89d Not
	if(var_632_bool == 0) goto Label_2212; // 0x89e JumpB
	sync(); // 0x89f Func
	IsDialogEnd(var_585_bool); // 0x8a1 ObjFunc
	goto Label_2205; // 0x8a3 Jump
	
Label_2212:
	var_633_object = Obj(); // 0x8a4 PushV
	var_633_object = var_576_object; // 0x8a5 Mov
	func_3022(); // 0x8a6 NEW_2
	StopDialog(var_582_object); // 0x8a8 Func
	GetReturnValue(var_584_int); // 0x8aa ObjFunc
	var_575_int = var_584_int; // 0x8ac Mov
	return 8; // 0x8ad Return
}


func_2915(var_75_bool)
{
	var_75_bool = 1; // 0xb63 MovB
	return 0; // 0xb64 Return
}


func_3684(var_119_int)
{
	var_120_int = 0; var_121_int = 0; // 0xe64 PushV
	var_122_string = "branch"; // 0xe65 PushS
	GetVariable(var_122_string, var_121_int); // 0xe66 Func
	var_123_int = 0; // 0xe68 PushI
	var_124_bool = var_121_int == var_123_int; // 0xe69 Eq
	if(var_124_bool == 0) goto Label_3694; // 0xe6a JumpB
	var_119_int = 1; // 0xe6b MovI
	return 2; // 0xe6c Return
	
Label_3694:
	var_125_int = 1; // 0xe6e PushI
	var_126_bool = var_121_int == var_125_int; // 0xe6f Eq
	if(var_126_bool == 0) goto Label_3699; // 0xe70 JumpB
	var_119_int = 2; // 0xe71 MovI
	return 2; // 0xe72 Return
	
Label_3699:
	var_119_int = 3; // 0xe73 MovI
	return 2; // 0xe74 Return
}


func_3428(var_401_bool)
{
	var_403_int = 0; var_404_string = ""; // 0xd65 PushV
	var_404_string = "k6q01"; // 0xd66 MovS
	func_3246(var_403_int, var_404_string); // 0xd67 NEW_2
	var_405_int = 2; // 0xd69 PushI
	var_406_bool = var_403_int == var_405_int; // 0xd6a Eq
	if(var_406_bool == 0) goto Label_3438; // 0xd6b JumpB
	var_401_bool = 1; // 0xd6c MovB
	return 0; // 0xd6d Return
	
Label_3438:
	var_401_bool = 0; // 0xd6e MovB
	return 0; // 0xd6f Return
}


func_2917()
{
	StopAnimation(); // 0xb65 Func
	StopGroup0(); // 0xb67 Func
	return 0; // 0xb69 Return
}


func_3177(var_256_string)
{
	var_257_bool = 0; var_258_float = 0; var_259_float = 0; var_260_bool = 0; var_261_float = 0; var_262_float = 0; // 0xc69 PushV
	lshHasAnimation(var_260_bool, var_256_string); // 0xc6a Func
	var_263_bool = var_260_bool; // 0xc6c Push
	if(var_263_bool == 0) goto Label_3188; // 0xc6d JumpB
	lshGetAnimTimes(var_256_string, var_261_float, var_262_float); // 0xc6e Func
	var_264_bool = 0; // 0xc70 PushB
	lshPlayAnimation(var_261_float, var_262_float, var_264_bool); // 0xc71 Func
	goto Label_3192; // 0xc73 Jump
	
Label_3192:
	return 6; // 0xc78 Return
	
Label_3188:
	var_265_string = "Can't find lsh animation : "; // 0xc74 PushS
	var_266_int = var_265_string + var_256_string; // 0xc75 Add
	Trace(var_266_int); // 0xc76 Func
}


func_2922(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xb6a PushV
	GetPosition(var_56_cvector); // 0xb6b Func
	GetPosition(var_57_cvector); // 0xb6d ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xb6f Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xb70 Or2
	return 6; // 0xb71 Return
}


func_2670(var_0_object)
{
	var_37_bool = 0; // 0xa6e PushV
	func_2949(var_37_bool); // 0xa6f NEW_2
	var_40_bool = var_37_bool == 0; // 0xa71 Not
	if(var_40_bool == 0) goto Label_2677; // 0xa72 JumpB
	Hold(); // 0xa73 Func
	
Label_2677:
	GetDirection(var_0_object); // 0xa75 Func
	
Label_2679:
	func_2846(); // 0xa78 NEW_2
	goto Label_2679; // 0xa7a Jump
}


func_3440(var_407_bool)
{
	var_409_int = 0; var_410_string = ""; // 0xd71 PushV
	var_410_string = "k6q01DankoPos"; // 0xd72 MovS
	func_3246(var_409_int, var_410_string); // 0xd73 NEW_2
	var_411_int = 3; // 0xd75 PushI
	var_412_bool = var_409_int > var_411_int; // 0xd76 GT
	if(var_412_bool == 0) goto Label_3450; // 0xd77 JumpB
	var_407_bool = 1; // 0xd78 MovB
	return 0; // 0xd79 Return
	
Label_3450:
	var_407_bool = 0; // 0xd7a MovB
	return 0; // 0xd7b Return
}


func_2930(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xb72 PushV
	GetPosition(var_49_cvector); // 0xb73 Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xb75 Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xb76 PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xb77 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xb78 Func
	var_44_bool = var_51_bool; // 0xb7a Mov
	return 6; // 0xb7b Return
}


func_3701(var_54_object)
{
	var_55_bool = GlobalVars[1]; // 0xe76 PushGE
	var_56_bool = var_55_bool == 0; // 0xe77 Not
	if(var_56_bool == 0) goto Label_3714; // 0xe78 JumpB
	var_57_int = 0; var_58_object = Obj(); // 0xe79 PushV
	var_58_object = var_54_object; // 0xe7a Mov
	TaskCall(2); // 0xe7b TaskCall
	func_682(var_59_object, var_57_int, var_58_object); // 0xe7c NEW_2
	TaskReturn(); // 0xe7d TaskReturn
	var_280_bool = GlobalVars[1]; // 0xe7f PushGE
	var_280_bool = 1; // 0xe80 MovB
	GlobalVars[1] = var_280_bool; // 0xe81 PopGE
	
Label_3714:
	var_281_bool = 0; var_282_int = 0; // 0xe82 PushV
	var_282_int = 2; // 0xe83 MovI
	func_3260(var_281_bool, var_282_int); // 0xe84 NEW_2
	if(var_281_bool == 0) goto Label_3726; // 0xe86 JumpB
	var_284_int = 0; var_285_object = Obj(); // 0xe87 PushV
	var_285_object = var_54_object; // 0xe88 Mov
	TaskCall(0); // 0xe89 TaskCall
	func_0(var_286_object, var_284_int, var_285_object); // 0xe8a NEW_2
	TaskReturn(); // 0xe8b TaskReturn
	return 0; // 0xe8d Return
	
Label_3726:
	var_357_bool = 0; var_358_int = 0; // 0xe8e PushV
	var_358_int = 6; // 0xe8f MovI
	func_3260(var_357_bool, var_358_int); // 0xe90 NEW_2
	if(var_357_bool == 0) goto Label_3738; // 0xe92 JumpB
	var_359_int = 0; var_360_object = Obj(); // 0xe93 PushV
	var_360_object = var_54_object; // 0xe94 Mov
	TaskCall(4); // 0xe95 TaskCall
	func_949(var_361_object, var_359_int, var_360_object); // 0xe96 NEW_2
	TaskReturn(); // 0xe97 TaskReturn
	return 0; // 0xe99 Return
	
Label_3738:
	var_435_bool = 0; var_436_int = 0; // 0xe9a PushV
	var_436_int = 8; // 0xe9b MovI
	func_3260(var_435_bool, var_436_int); // 0xe9c NEW_2
	if(var_435_bool == 0) goto Label_3750; // 0xe9e JumpB
	var_437_int = 0; var_438_object = Obj(); // 0xe9f PushV
	var_438_object = var_54_object; // 0xea0 Mov
	TaskCall(6); // 0xea1 TaskCall
	func_1286(var_439_object, var_437_int, var_438_object); // 0xea2 NEW_2
	TaskReturn(); // 0xea3 TaskReturn
	return 0; // 0xea5 Return
	
Label_3750:
	var_502_bool = 0; var_503_int = 0; // 0xea6 PushV
	var_503_int = 11; // 0xea7 MovI
	func_3260(var_502_bool, var_503_int); // 0xea8 NEW_2
	if(var_502_bool == 0) goto Label_3762; // 0xeaa JumpB
	var_504_int = 0; var_505_object = Obj(); // 0xeab PushV
	var_505_object = var_54_object; // 0xeac Mov
	TaskCall(8); // 0xead TaskCall
	func_1705(var_506_object, var_504_int, var_505_object); // 0xeae NEW_2
	TaskReturn(); // 0xeaf TaskReturn
	return 0; // 0xeb1 Return
	
Label_3762:
	var_573_bool = 0; var_574_int = 0; // 0xeb2 PushV
	var_574_int = 12; // 0xeb3 MovI
	func_3260(var_573_bool, var_574_int); // 0xeb4 NEW_2
	if(var_573_bool == 0) goto Label_3774; // 0xeb6 JumpB
	var_575_int = 0; var_576_object = Obj(); // 0xeb7 PushV
	var_576_object = var_54_object; // 0xeb8 Mov
	TaskCall(10); // 0xeb9 TaskCall
	func_2142(var_577_object, var_575_int, var_576_object); // 0xeba NEW_2
	TaskReturn(); // 0xebb TaskReturn
	return 0; // 0xebd Return
	
Label_3774:
	var_634_int = 0; var_635_object = Obj(); // 0xebe PushV
	var_635_object = var_54_object; // 0xebf Mov
	TaskCall(12); // 0xec0 TaskCall
	func_2460(var_636_object, var_634_int, var_635_object); // 0xec1 NEW_2
	TaskReturn(); // 0xec2 TaskReturn
	return 0; // 0xec4 Return
}


func_3193(var_234_string, var_235_bool)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0xc79 PushV
	lshHasAnimation(var_241_bool, var_234_string); // 0xc7a Func
	var_244_bool = var_241_bool; // 0xc7c Push
	if(var_244_bool == 0) goto Label_3203; // 0xc7d JumpB
	lshGetAnimTimes(var_234_string, var_242_float, var_243_float); // 0xc7e Func
	lshPlayAnimation(var_242_float, var_243_float, var_235_bool); // 0xc80 Func
	goto Label_3207; // 0xc82 Jump
	
Label_3207:
	return 6; // 0xc87 Return
	
Label_3203:
	var_245_string = "Can't find lsh animation : "; // 0xc83 PushS
	var_246_int = var_245_string + var_234_string; // 0xc84 Add
	Trace(var_246_int); // 0xc85 Func
}


func_2684(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xa7c PushV
	var_64_string = "player"; // 0xa7d PushS
	FindActor(var_63_object, var_64_string); // 0xa7e Func
	var_65_bool = var_63_object == 0; // 0xa80 Not
	if(var_65_bool == 0) goto Label_2692; // 0xa81 JumpB
	var_61_bool = 0; // 0xa82 MovB
	return 2; // 0xa83 Return
	
Label_2692:
	var_66_bool = 0; var_67_object = Obj(); // 0xa84 PushV
	var_67_object = var_63_object; // 0xa85 Mov
	func_2940(var_67_object); // 0xa86 NEW_2
	var_61_bool = var_66_bool; // 0xa87 Mov
	return 2; // 0xa89 Return
}


func_2940(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xb7c PushV
	GetPosition(var_43_cvector); // 0xb7d ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xb7f PushV
	var_45_cvector = var_43_cvector; // 0xb80 Mov
	func_2930(var_44_bool, var_45_cvector); // 0xb81 NEW_2
	var_40_bool = var_44_bool; // 0xb82 Mov
	return 2; // 0xb84 Return
}


func_3452(var_413_bool)
{
	var_415_int = 0; var_416_string = ""; // 0xd7d PushV
	var_416_string = "ook6Ospina1"; // 0xd7e MovS
	func_3246(var_415_int, var_416_string); // 0xd7f NEW_2
	var_417_int = 0; // 0xd81 PushI
	var_418_bool = var_415_int == var_417_int; // 0xd82 Eq
	if(var_418_bool == 0) goto Label_3462; // 0xd83 JumpB
	var_413_bool = 1; // 0xd84 MovB
	return 0; // 0xd85 Return
	
Label_3462:
	var_413_bool = 0; // 0xd86 MovB
	return 0; // 0xd87 Return
}


func_2949(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0; // 0xb85 PushV
	IsLoaded(var_39_bool); // 0xb86 Func
	var_37_bool = var_39_bool; // 0xb88 Mov
	return 2; // 0xb89 Return
}


func_3208(var_162_bool, var_163_string)
{
	var_164_bool = 0; var_165_bool = 0; // 0xc88 PushV
	var_166_bool = 0; // 0xc89 PushV
	func_3298(var_166_bool); // 0xc8a NEW_2
	if(var_166_bool == 0) goto Label_3221; // 0xc8c JumpB
	lshHasSpeech(var_165_bool, var_163_string); // 0xc8d Func
	var_167_bool = var_165_bool; // 0xc8f Push
	if(var_167_bool == 0) goto Label_3221; // 0xc90 JumpB
	lshPlaySpeech(var_163_string); // 0xc91 Func
	var_162_bool = 1; // 0xc93 MovB
	return 2; // 0xc94 Return
	
Label_3221:
	var_162_bool = 0; // 0xc95 MovB
	return 2; // 0xc96 Return
}


func_3464(var_477_bool)
{
	var_479_int = 0; var_480_string = ""; // 0xd89 PushV
	var_480_string = "k8q01"; // 0xd8a MovS
	func_3246(var_479_int, var_480_string); // 0xd8b NEW_2
	var_481_int = 5; // 0xd8d PushI
	var_482_bool = var_479_int == var_481_int; // 0xd8e Eq
	if(var_482_bool == 0) goto Label_3474; // 0xd8f JumpB
	var_477_bool = 1; // 0xd90 MovB
	return 0; // 0xd91 Return
	
Label_3474:
	var_477_bool = 0; // 0xd92 MovB
	return 0; // 0xd93 Return
}


func_2954(var_68_bool, var_70_float)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0; // 0xb8a PushV
	GetPosition(var_81_cvector); // 0xb8b ObjFunc
	GetEyesHeight(var_80_float); // 0xb8d ObjFunc
	var_89_float = GetByIndex(var_81_cvector, 1); // 0xb8f PushE
	var_89_float = var_89_float + var_80_float; // 0xb90 Add2
	SetByIndex(var_81_cvector, 1) = var_89_float; // 0xb91 PopE
	GetPosition(var_82_cvector); // 0xb92 Func
	GetEyesHeight(var_80_float); // 0xb94 Func
	var_90_float = GetByIndex(var_82_cvector, 1); // 0xb96 PushE
	var_90_float = var_90_float + var_80_float; // 0xb97 Add2
	SetByIndex(var_82_cvector, 1) = var_90_float; // 0xb98 PopE
	var_83_cvector = var_81_cvector - var_82_cvector; // 0xb99 Sub2
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xb9a PushE
	var_91_float = 0; // 0xb9b MovI
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xb9c PopE
	var_92_int = var_83_cvector | var_83_cvector; // 0xb9d Or
	var_93_float = sqrt(var_92_int); // 0xb9e Sqrt
	var_83_cvector = var_83_cvector / var_83_cvector; // 0xb9f Div2
	var_84_cvector = -var_83_cvector; // 0xba0 Neg2
	var_94_float = var_83_cvector * var_70_float; // 0xba1 Mult
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0xba2 PushV
	var_97_cvector = CVector(0.0, 1.0, 0.0); // 0xba3 PushVec
	var_96_cvector = var_84_cvector ^ var_97_cvector; // 0xba4 Xor2
	func_3236(var_95_cvector, var_96_cvector); // 0xba5 NEW_2
	var_103_int = 25; // 0xba7 PushI
	var_104_float = var_95_cvector * var_103_int; // 0xba8 Mult
	var_105_int = var_94_float + var_104_float; // 0xba9 Add
	var_106_cvector = CVector(0.0, 10.0, 0.0); // 0xbaa PushVec
	var_85_cvector = var_105_int - var_106_cvector; // 0xbab Sub2
	var_86_cvector = var_82_cvector + var_85_cvector; // 0xbac Add2
	IsOverrideActive(var_87_bool); // 0xbad Func
	var_107_bool = var_87_bool; // 0xbaf Push
	if(var_107_bool == 0) goto Label_2995; // 0xbb0 JumpB
	var_68_bool = 0; // 0xbb1 MovB
	return 18; // 0xbb2 Return
	
Label_2995:
	StopWorld(); // 0xbb3 Func
	CameraTransit(var_86_cvector, var_84_cvector); // 0xbb5 Func
	var_108_float = GetByIndex(var_85_cvector, 0); // 0xbb7 PushE
	var_109_float = GetByIndex(var_85_cvector, 2); // 0xbb8 PushE
	Rotate(var_108_float, var_109_float); // 0xbb9 Func
	var_110_bool = 0; // 0xbbb PushV
	func_3298(var_110_bool); // 0xbbc NEW_2
	if(var_110_bool == 0) goto Label_3008; // 0xbbe JumpB
	goto Label_3016; // 0xbbf Jump
	
Label_3016:
	CameraWaitForPlayFinish(); // 0xbc8 Func
	ResumeWorld(); // 0xbca Func
	var_68_bool = 1; // 0xbcc MovB
	return 18; // 0xbcd Return
	
Label_3008:
	var_111_string = "head"; // 0xbc0 PushS
	HasAnimationTrack(var_88_bool, var_111_string); // 0xbc1 Func
	var_112_bool = var_88_bool; // 0xbc3 Push
	if(var_112_bool == 0) goto Label_3016; // 0xbc4 JumpB
	var_113_string = "head"; // 0xbc5 PushS
	LookAsyncCamera(var_113_string); // 0xbc6 Func
}


func_2699(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0xa8b PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0xa8c PushE
	RotateAsync(var_113_float, var_114_float); // 0xa8d Func
	return 0; // 0xa8f Return
}


func_2704(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0xa90 PushV
	var_49_string = "player"; // 0xa91 PushS
	FindActor(var_47_object, var_49_string); // 0xa92 Func
	var_50_bool = var_47_object == 0; // 0xa94 Not
	if(var_50_bool == 0) goto Label_2712; // 0xa95 JumpB
	var_44_bool = 0; // 0xa96 MovB
	return 4; // 0xa97 Return
	
Label_2712:
	var_51_float = 0; var_52_object = Obj(); // 0xa98 PushV
	var_52_object = var_47_object; // 0xa99 Mov
	func_2922(var_52_object); // 0xa9a NEW_2
	var_59_float = 90000.0; // 0xa9c PushF
	var_60_bool = var_51_float > var_59_float; // 0xa9d GT
	if(var_60_bool == 0) goto Label_2721; // 0xa9e JumpB
	var_44_bool = 0; // 0xa9f MovB
	return 4; // 0xaa0 Return
	
Label_2721:
	CanSee(var_48_bool, var_47_object); // 0xaa1 Func
	var_44_bool = var_48_bool; // 0xaa3 Mov
	return 4; // 0xaa4 Return
}


func_3476(var_551_bool)
{
	var_553_int = 0; var_554_string = ""; // 0xd95 PushV
	var_554_string = "k11q01"; // 0xd96 MovS
	func_3246(var_553_int, var_554_string); // 0xd97 NEW_2
	var_555_int = 9; // 0xd99 PushI
	var_556_bool = var_553_int == var_555_int; // 0xd9a Eq
	if(var_556_bool == 0) goto Label_3486; // 0xd9b JumpB
	var_551_bool = 1; // 0xd9c MovB
	return 0; // 0xd9d Return
	
Label_3486:
	var_551_bool = 0; // 0xd9e MovB
	return 0; // 0xd9f Return
}


func_3223()
{
	var_39_bool = 0; // 0xc97 PushV
	func_3298(var_39_bool); // 0xc98 NEW_2
	if(var_39_bool == 0) goto Label_3229; // 0xc9a JumpB
	lshStopSpeech(); // 0xc9b Func
	
Label_3229:
	return 0; // 0xc9d Return
}


func_1435(var_2_object, var_468_string)
{
	var_469_bool = 0; // 0x59c PushV
	func_3298(var_469_bool); // 0x59d NEW_2
	var_470_bool = var_469_bool == 0; // 0x59f Not
	if(var_470_bool == 0) goto Label_1442; // 0x5a0 JumpB
	return 0; // 0x5a1 Return
	
Label_1442:
	var_471_bool = var_468_string == var_2_object; // 0x5a2 Eq
	if(var_471_bool == 0) goto Label_1445; // 0x5a3 JumpB
	return 0; // 0x5a4 Return
	
Label_1445:
	var_472_string = ""; var_473_bool = 0; // 0x5a5 PushV
	var_472_string = var_468_string; // 0x5a6 Mov
	var_474_string = ""; // 0x5a7 PushS
	var_475_bool = var_468_string == var_474_string; // 0x5a8 Eq
	if(var_475_bool == 0) goto Label_1452; // 0x5a9 JumpB
	var_473_bool = 0; // 0x5aa MovB
	goto Label_1453; // 0x5ab Jump
	
Label_1453:
	func_3193(var_472_string, var_473_bool); // 0x5ad NEW_2
	var_2_object = var_468_string; // 0x5af TMov
	return 0; // 0x5b0 Return
	
Label_1452:
	var_473_bool = 1; // 0x5ac MovB
}


func_2460(var_0_object, var_634_int, var_635_object)
{
	var_637_object = Obj(); var_638_bool = 0; var_639_int = 0; var_640_bool = 0; var_641_object = Obj(); var_642_bool = 0; var_643_int = 0; var_644_bool = 0; // 0x99c PushV
	var_0_object = var_635_object; // 0x99d TMov
	var_645_bool = 0; var_646_object = Obj(); var_647_float = 0; // 0x99e PushV
	var_646_object = var_635_object; // 0x99f Mov
	var_647_float = 70.0; // 0x9a0 MovF
	func_2954(var_646_object, var_647_float); // 0x9a1 NEW_2
	var_648_bool = var_645_bool == 0; // 0x9a3 Not
	if(var_648_bool == 0) goto Label_2471; // 0x9a4 JumpB
	var_634_int = -2; // 0x9a5 MovI
	return 8; // 0x9a6 Return
	
Label_2471:
	CreateDialog(var_641_object); // 0x9a7 Func
	var_649_int = 0; // 0x9a9 PushV
	func_3292(var_649_int); // 0x9aa NEW_2
	SetNPCName(var_649_int); // 0x9ac ObjFunc
	var_650_int = 0; // 0x9ae PushV
	func_3290(var_650_int); // 0x9af NEW_2
	SetNPCDescription(var_650_int); // 0x9b1 ObjFunc
	var_651_string = ""; // 0x9b3 PushV
	func_3294(var_651_string); // 0x9b4 NEW_2
	SetPhoto(var_651_string); // 0x9b6 ObjFunc
	var_652_string = ""; // 0x9b8 PushV
	func_3296(var_652_string); // 0x9b9 NEW_2
	SetPhoto2(var_652_string); // 0x9bb ObjFunc
	var_653_int = 0; // 0x9bd PushV
	func_3684(var_653_int); // 0x9be NEW_2
	SetPlayerName(var_653_int); // 0x9c0 ObjFunc
	var_643_int = -1; // 0x9c2 MovI
	IsOverrideActive(var_642_bool); // 0x9c3 Func
	var_654_bool = var_642_bool; // 0x9c5 Push
	if(var_654_bool == 0) goto Label_2505; // 0x9c6 JumpB
	var_634_int = -2; // 0x9c7 MovI
	return 8; // 0x9c8 Return
	
Label_2505:
	DoDialog(var_641_object); // 0x9c9 Func
	var_655_bool = 0; var_656_object = Obj(); // 0x9cb PushV
	var_657_object = Obj(); // 0x9cc PushV
	func_3230(var_657_object); // 0x9cd NEW_2
	var_656_object = var_657_object; // 0x9ce Mov
	func_3039(var_655_bool, var_656_object); // 0x9d0 NEW_2
	var_658_object = Obj(); var_659_object = Obj(); // 0x9d2 PushV
	var_658_object = var_635_object; // 0x9d3 Mov
	var_659_object = var_641_object; // 0x9d4 Mov
	TaskCall(13); // 0x9d5 TaskCall
	func_2541(var_660_object, var_661_object, var_662_string, var_663_bool, var_658_object, var_659_object); // 0x9d6 NEW_2
	TaskReturn(); // 0x9d7 TaskReturn
	IsDialogEnd(var_644_bool); // 0x9d9 ObjFunc
	
Label_2523:
	var_688_bool = var_644_bool == 0; // 0x9db Not
	if(var_688_bool == 0) goto Label_2530; // 0x9dc JumpB
	sync(); // 0x9dd Func
	IsDialogEnd(var_644_bool); // 0x9df ObjFunc
	goto Label_2523; // 0x9e1 Jump
	
Label_2530:
	var_689_object = Obj(); // 0x9e2 PushV
	var_689_object = var_635_object; // 0x9e3 Mov
	func_3022(); // 0x9e4 NEW_2
	StopDialog(var_641_object); // 0x9e6 Func
	GetReturnValue(var_643_int); // 0x9e8 ObjFunc
	var_634_int = var_643_int; // 0x9ea Mov
	return 8; // 0x9eb Return
}


func_3230(var_130_object)
{
	var_131_object = Obj(); var_132_object = Obj(); // 0xc9e PushV
	self(var_132_object); // 0xc9f Func
	var_130_object = var_132_object; // 0xca1 Mov
	return 2; // 0xca2 Return
}


func_3488(var_545_bool)
{
	var_547_int = 0; var_548_string = ""; // 0xda1 PushV
	var_548_string = "ook11Ospina1"; // 0xda2 MovS
	func_3246(var_547_int, var_548_string); // 0xda3 NEW_2
	var_549_int = 0; // 0xda5 PushI
	var_550_bool = var_547_int == var_549_int; // 0xda6 Eq
	if(var_550_bool == 0) goto Label_3498; // 0xda7 JumpB
	var_545_bool = 1; // 0xda8 MovB
	return 0; // 0xda9 Return
	
Label_3498:
	var_545_bool = 0; // 0xdaa MovB
	return 0; // 0xdab Return
}


func_3236(var_95_cvector, var_96_cvector)
{
	var_98_float = 0; var_99_float = 0; // 0xca4 PushV
	var_100_int = var_96_cvector | var_96_cvector; // 0xca5 Or
	var_99_float = sqrt(var_100_int); // 0xca6 Sqrt2
	var_101_float = 0.0; // 0xca7 PushF
	var_102_bool = var_99_float < var_101_float; // 0xca8 LT
	if(var_102_bool == 0) goto Label_3244; // 0xca9 JumpB
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0xcaa MovV
	return 2; // 0xcab Return
	
Label_3244:
	var_95_cvector = var_96_cvector / var_96_cvector; // 0xcac Div2
	return 2; // 0xcad Return
}


func_2726()
{
	var_692_float = 0; var_693_float = 0; // 0xaa6 PushV
	var_694_int = 8; // 0xaa7 PushI
	var_695_int = 16; // 0xaa8 PushI
	rand(var_693_float, var_694_int, var_695_int); // 0xaa9 Func
	var_696_int = 10; // 0xaab PushI
	SetTimer(var_696_int, var_693_float); // 0xaac Func
	return 2; // 0xaae Return
}


func_1705(var_0_object, var_504_int, var_505_object)
{
	var_507_object = Obj(); var_508_bool = 0; var_509_int = 0; var_510_bool = 0; var_511_object = Obj(); var_512_bool = 0; var_513_int = 0; var_514_bool = 0; // 0x6a9 PushV
	var_0_object = var_505_object; // 0x6aa TMov
	var_515_bool = 0; var_516_object = Obj(); var_517_float = 0; // 0x6ab PushV
	var_516_object = var_505_object; // 0x6ac Mov
	var_517_float = 70.0; // 0x6ad MovF
	func_2954(var_516_object, var_517_float); // 0x6ae NEW_2
	var_518_bool = var_515_bool == 0; // 0x6b0 Not
	if(var_518_bool == 0) goto Label_1716; // 0x6b1 JumpB
	var_504_int = -2; // 0x6b2 MovI
	return 8; // 0x6b3 Return
	
Label_1716:
	CreateDialog(var_511_object); // 0x6b4 Func
	var_519_int = 0; // 0x6b6 PushV
	func_3292(var_519_int); // 0x6b7 NEW_2
	SetNPCName(var_519_int); // 0x6b9 ObjFunc
	var_520_int = 0; // 0x6bb PushV
	func_3290(var_520_int); // 0x6bc NEW_2
	SetNPCDescription(var_520_int); // 0x6be ObjFunc
	var_521_string = ""; // 0x6c0 PushV
	func_3294(var_521_string); // 0x6c1 NEW_2
	SetPhoto(var_521_string); // 0x6c3 ObjFunc
	var_522_string = ""; // 0x6c5 PushV
	func_3296(var_522_string); // 0x6c6 NEW_2
	SetPhoto2(var_522_string); // 0x6c8 ObjFunc
	var_523_int = 0; // 0x6ca PushV
	func_3684(var_523_int); // 0x6cb NEW_2
	SetPlayerName(var_523_int); // 0x6cd ObjFunc
	var_513_int = -1; // 0x6cf MovI
	IsOverrideActive(var_512_bool); // 0x6d0 Func
	var_524_bool = var_512_bool; // 0x6d2 Push
	if(var_524_bool == 0) goto Label_1750; // 0x6d3 JumpB
	var_504_int = -2; // 0x6d4 MovI
	return 8; // 0x6d5 Return
	
Label_1750:
	DoDialog(var_511_object); // 0x6d6 Func
	var_525_bool = 0; var_526_object = Obj(); // 0x6d8 PushV
	var_527_object = Obj(); // 0x6d9 PushV
	func_3230(var_527_object); // 0x6da NEW_2
	var_526_object = var_527_object; // 0x6db Mov
	func_3039(var_525_bool, var_526_object); // 0x6dd NEW_2
	var_528_object = Obj(); var_529_object = Obj(); // 0x6df PushV
	var_528_object = var_505_object; // 0x6e0 Mov
	var_529_object = var_511_object; // 0x6e1 Mov
	TaskCall(9); // 0x6e2 TaskCall
	func_1786(var_530_object, var_531_object, var_532_string, var_533_bool, var_528_object, var_529_object); // 0x6e3 NEW_2
	TaskReturn(); // 0x6e4 TaskReturn
	IsDialogEnd(var_514_bool); // 0x6e6 ObjFunc
	
Label_1768:
	var_571_bool = var_514_bool == 0; // 0x6e8 Not
	if(var_571_bool == 0) goto Label_1775; // 0x6e9 JumpB
	sync(); // 0x6ea Func
	IsDialogEnd(var_514_bool); // 0x6ec ObjFunc
	goto Label_1768; // 0x6ee Jump
	
Label_1775:
	var_572_object = Obj(); // 0x6ef PushV
	var_572_object = var_505_object; // 0x6f0 Mov
	func_3022(); // 0x6f1 NEW_2
	StopDialog(var_511_object); // 0x6f3 Func
	GetReturnValue(var_513_int); // 0x6f5 ObjFunc
	var_504_int = var_513_int; // 0x6f7 Mov
	return 8; // 0x6f8 Return
}


func_682(var_0_object, var_57_int, var_58_object)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_object = Obj(); var_65_bool = 0; var_66_int = 0; var_67_bool = 0; // 0x2aa PushV
	var_0_object = var_58_object; // 0x2ab TMov
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; // 0x2ac PushV
	var_69_object = var_58_object; // 0x2ad Mov
	var_70_float = 70.0; // 0x2ae MovF
	func_2954(var_69_object, var_70_float); // 0x2af NEW_2
	var_114_bool = var_68_bool == 0; // 0x2b1 Not
	if(var_114_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_57_int = -2; // 0x2b3 MovI
	return 8; // 0x2b4 Return
	
Label_693:
	CreateDialog(var_64_object); // 0x2b5 Func
	var_115_int = 0; // 0x2b7 PushV
	func_3292(var_115_int); // 0x2b8 NEW_2
	SetNPCName(var_115_int); // 0x2ba ObjFunc
	var_116_int = 0; // 0x2bc PushV
	func_3290(var_116_int); // 0x2bd NEW_2
	SetNPCDescription(var_116_int); // 0x2bf ObjFunc
	var_117_string = ""; // 0x2c1 PushV
	func_3294(var_117_string); // 0x2c2 NEW_2
	SetPhoto(var_117_string); // 0x2c4 ObjFunc
	var_118_string = ""; // 0x2c6 PushV
	func_3296(var_118_string); // 0x2c7 NEW_2
	SetPhoto2(var_118_string); // 0x2c9 ObjFunc
	var_119_int = 0; // 0x2cb PushV
	func_3684(var_119_int); // 0x2cc NEW_2
	SetPlayerName(var_119_int); // 0x2ce ObjFunc
	var_66_int = -1; // 0x2d0 MovI
	IsOverrideActive(var_65_bool); // 0x2d1 Func
	var_127_bool = var_65_bool; // 0x2d3 Push
	if(var_127_bool == 0) goto Label_727; // 0x2d4 JumpB
	var_57_int = -2; // 0x2d5 MovI
	return 8; // 0x2d6 Return
	
Label_727:
	DoDialog(var_64_object); // 0x2d7 Func
	var_128_bool = 0; var_129_object = Obj(); // 0x2d9 PushV
	var_130_object = Obj(); // 0x2da PushV
	func_3230(var_130_object); // 0x2db NEW_2
	var_129_object = var_130_object; // 0x2dc Mov
	func_3039(var_128_bool, var_129_object); // 0x2de NEW_2
	var_223_object = Obj(); var_224_object = Obj(); // 0x2e0 PushV
	var_223_object = var_58_object; // 0x2e1 Mov
	var_224_object = var_64_object; // 0x2e2 Mov
	TaskCall(3); // 0x2e3 TaskCall
	func_763(var_225_object, var_226_object, var_227_string, var_228_bool, var_223_object, var_224_object); // 0x2e4 NEW_2
	TaskReturn(); // 0x2e5 TaskReturn
	IsDialogEnd(var_67_bool); // 0x2e7 ObjFunc
	
Label_745:
	var_272_bool = var_67_bool == 0; // 0x2e9 Not
	if(var_272_bool == 0) goto Label_752; // 0x2ea JumpB
	sync(); // 0x2eb Func
	IsDialogEnd(var_67_bool); // 0x2ed ObjFunc
	goto Label_745; // 0x2ef Jump
	
Label_752:
	var_273_object = Obj(); // 0x2f0 PushV
	var_273_object = var_58_object; // 0x2f1 Mov
	func_3022(); // 0x2f2 NEW_2
	StopDialog(var_64_object); // 0x2f4 Func
	GetReturnValue(var_66_int); // 0x2f6 ObjFunc
	var_57_int = var_66_int; // 0x2f8 Mov
	return 8; // 0x2f9 Return
}


func_3500()
{
	var_122_object = Obj(); var_123_object = Obj(); // 0xdac PushV
	var_124_int = 498; // 0xdad PushI
	var_125_int = 1; // 0xdae PushI
	var_126_int = 528065; // 0xdaf PushI
	CreateDiaryEntry(var_123_object, var_124_int, var_125_int, var_126_int); // 0xdb0 Func
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0; // 0xdb2 PushV
	var_128_object = var_123_object; // 0xdb3 Mov
	var_129_int = 480; // 0xdb4 MovI
	func_3656(var_127_bool, var_128_object, var_129_int); // 0xdb5 NEW_2
	return 2; // 0xdb7 Return
}


func_174(var_2_object, var_315_string)
{
	var_316_bool = 0; // 0xaf PushV
	func_3298(var_316_bool); // 0xb0 NEW_2
	var_317_bool = var_316_bool == 0; // 0xb2 Not
	if(var_317_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_318_bool = var_315_string == var_2_object; // 0xb5 Eq
	if(var_318_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_319_string = ""; var_320_bool = 0; // 0xb8 PushV
	var_319_string = var_315_string; // 0xb9 Mov
	var_321_string = ""; // 0xba PushS
	var_322_bool = var_315_string == var_321_string; // 0xbb Eq
	if(var_322_bool == 0) goto Label_191; // 0xbc JumpB
	var_320_bool = 0; // 0xbd MovB
	goto Label_192; // 0xbe Jump
	
Label_192:
	func_3193(var_319_string, var_320_bool); // 0xc0 NEW_2
	var_2_object = var_315_string; // 0xc2 TMov
	return 0; // 0xc3 Return
	
Label_191:
	var_320_bool = 1; // 0xbf MovB
}


func_2223(var_0_object, var_1_object, var_2_object, var_3_string, var_599_object, var_600_object)
{
	var_0_object = var_600_object; // 0x8b0 TMov
	var_1_object = var_599_object; // 0x8b1 TMov
	var_3_string = 0; // 0x8b2 TMovB
	var_605_int = 1; // 0x8b3 PushI
	if(var_605_int == 0) goto Label_2256; // 0x8b4 JumpB
	var_606_string = ""; // 0x8b5 PushV
	var_606_string = "Neutral"; // 0x8b6 MovS
	func_2286(var_600_object, var_606_string); // 0x8b7 NEW_2
	var_614_int = 539297; // 0x8b9 PushI
	SetMessage(var_614_int); // 0x8ba TObjFunc
	ClearReplies(); // 0x8bc TObjFunc
	var_615_int = 542655; // 0x8be PushI
	var_616_int = 45059; // 0x8bf PushI
	var_617_int = 45057; // 0x8c0 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x8c1 TObjFunc
	var_618_int = 539298; // 0x8c3 PushI
	var_619_int = -1; // 0x8c4 PushI
	var_620_int = 41241; // 0x8c5 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x8c6 TObjFunc
	var_621_int = 542656; // 0x8c8 PushI
	var_622_int = -1; // 0x8c9 PushI
	var_623_int = 45058; // 0x8ca PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x8cb TObjFunc
	goto Label_2256; // 0x8cd Jump
	
Label_2256:
	var_624_bool = 0; // 0x8d0 PushV
	func_3298(var_624_bool); // 0x8d1 NEW_2
	if(var_624_bool == 0) goto Label_2271; // 0x8d3 JumpB
	
Label_2260:
	lshWaitForAnimEnd(); // 0x8d4 Func
	var_625_string = var_3_string; // 0x8d6 PushT
	if(var_625_string == 0) goto Label_2265; // 0x8d7 JumpB
	goto Label_2270; // 0x8d8 Jump
	
Label_2270:
	goto Label_2285; // 0x8de Jump
	
Label_2285:
	return 0; // 0x8ed Return
	
Label_2265:
	var_626_string = ""; // 0x8d9 PushV
	var_626_string = var_2_object; // 0x8da MovT
	func_3177(var_626_string); // 0x8db NEW_2
	goto Label_2260; // 0x8dd Jump
	
Label_2271:
	var_627_string = "all"; // 0x8df PushS
	var_628_string = "idle"; // 0x8e0 PushS
	PlayAnimation(var_627_string, var_628_string); // 0x8e1 Func
	
Label_2275:
	WaitForAnimEnd(); // 0x8e3 Func
	var_629_string = var_3_string; // 0x8e5 PushT
	if(var_629_string == 0) goto Label_2280; // 0x8e6 JumpB
	goto Label_2285; // 0x8e7 Jump
	
Label_2280:
	var_630_string = "all"; // 0x8e8 PushS
	var_631_string = "idle"; // 0x8e9 PushS
	PlayAnimation(var_630_string, var_631_string); // 0x8ea Func
	goto Label_2275; // 0x8ec Jump
}


func_2735()
{
	var_691_int = 10; // 0xaaf PushI
	KillTimer(var_691_int); // 0xab0 Func
	return 0; // 0xab2 Return
}


func_3246(var_326_int, var_327_string)
{
	var_328_int = 0; var_329_int = 0; // 0xcae PushV
	GetVariable(var_327_string, var_329_int); // 0xcaf Func
	var_326_int = var_329_int; // 0xcb1 Mov
	return 2; // 0xcb2 Return
}


func_3251(var_183_int)
{
	var_184_float = 0; var_185_float = 0; // 0xcb3 PushV
	GetGameTime(var_185_float); // 0xcb4 Func
	var_186_int = 1; // 0xcb6 PushI
	var_187_int = 0; // 0xcb7 PushV
	var_188_int = 24; // 0xcb8 PushI
	var_187_int = var_185_float / var_185_float; // 0xcb9 Div2
	var_183_int = var_186_int + var_187_int; // 0xcba Add2
	return 2; // 0xcbb Return
}


func_949(var_0_object, var_359_int, var_360_object)
{
	var_362_object = Obj(); var_363_bool = 0; var_364_int = 0; var_365_bool = 0; var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; // 0x3b5 PushV
	var_0_object = var_360_object; // 0x3b6 TMov
	var_370_bool = 0; var_371_object = Obj(); var_372_float = 0; // 0x3b7 PushV
	var_371_object = var_360_object; // 0x3b8 Mov
	var_372_float = 70.0; // 0x3b9 MovF
	func_2954(var_371_object, var_372_float); // 0x3ba NEW_2
	var_373_bool = var_370_bool == 0; // 0x3bc Not
	if(var_373_bool == 0) goto Label_960; // 0x3bd JumpB
	var_359_int = -2; // 0x3be MovI
	return 8; // 0x3bf Return
	
Label_960:
	CreateDialog(var_366_object); // 0x3c0 Func
	var_374_int = 0; // 0x3c2 PushV
	func_3292(var_374_int); // 0x3c3 NEW_2
	SetNPCName(var_374_int); // 0x3c5 ObjFunc
	var_375_int = 0; // 0x3c7 PushV
	func_3290(var_375_int); // 0x3c8 NEW_2
	SetNPCDescription(var_375_int); // 0x3ca ObjFunc
	var_376_string = ""; // 0x3cc PushV
	func_3294(var_376_string); // 0x3cd NEW_2
	SetPhoto(var_376_string); // 0x3cf ObjFunc
	var_377_string = ""; // 0x3d1 PushV
	func_3296(var_377_string); // 0x3d2 NEW_2
	SetPhoto2(var_377_string); // 0x3d4 ObjFunc
	var_378_int = 0; // 0x3d6 PushV
	func_3684(var_378_int); // 0x3d7 NEW_2
	SetPlayerName(var_378_int); // 0x3d9 ObjFunc
	var_368_int = -1; // 0x3db MovI
	IsOverrideActive(var_367_bool); // 0x3dc Func
	var_379_bool = var_367_bool; // 0x3de Push
	if(var_379_bool == 0) goto Label_994; // 0x3df JumpB
	var_359_int = -2; // 0x3e0 MovI
	return 8; // 0x3e1 Return
	
Label_994:
	DoDialog(var_366_object); // 0x3e2 Func
	var_380_bool = 0; var_381_object = Obj(); // 0x3e4 PushV
	var_382_object = Obj(); // 0x3e5 PushV
	func_3230(var_382_object); // 0x3e6 NEW_2
	var_381_object = var_382_object; // 0x3e7 Mov
	func_3039(var_380_bool, var_381_object); // 0x3e9 NEW_2
	var_383_object = Obj(); var_384_object = Obj(); // 0x3eb PushV
	var_383_object = var_360_object; // 0x3ec Mov
	var_384_object = var_366_object; // 0x3ed Mov
	TaskCall(5); // 0x3ee TaskCall
	func_1030(var_385_object, var_386_object, var_387_string, var_388_bool, var_383_object, var_384_object); // 0x3ef NEW_2
	TaskReturn(); // 0x3f0 TaskReturn
	IsDialogEnd(var_369_bool); // 0x3f2 ObjFunc
	
Label_1012:
	var_433_bool = var_369_bool == 0; // 0x3f4 Not
	if(var_433_bool == 0) goto Label_1019; // 0x3f5 JumpB
	sync(); // 0x3f6 Func
	IsDialogEnd(var_369_bool); // 0x3f8 ObjFunc
	goto Label_1012; // 0x3fa Jump
	
Label_1019:
	var_434_object = Obj(); // 0x3fb PushV
	var_434_object = var_360_object; // 0x3fc Mov
	func_3022(); // 0x3fd NEW_2
	StopDialog(var_366_object); // 0x3ff Func
	GetReturnValue(var_368_int); // 0x401 ObjFunc
	var_359_int = var_368_int; // 0x403 Mov
	return 8; // 0x404 Return
}


func_3513()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0xdb9 PushV
	var_114_int = 497; // 0xdba PushI
	var_115_int = 1; // 0xdbb PushI
	var_116_int = 528064; // 0xdbc PushI
	CreateDiaryEntry(var_113_object, var_114_int, var_115_int, var_116_int); // 0xdbd Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0xdbf PushV
	var_118_object = var_113_object; // 0xdc0 Mov
	var_119_int = 480; // 0xdc1 MovI
	func_3656(var_117_bool, var_118_object, var_119_int); // 0xdc2 NEW_2
	return 2; // 0xdc4 Return
}


func_3260(var_281_bool, var_282_int)
{
	var_283_int = 0; // 0xcbd PushV
	func_3251(var_283_int); // 0xcbe NEW_2
	var_281_bool = var_283_int == var_282_int; // 0xcc0 Eq2
	return 0; // 0xcc1 Return
}


func_3266(var_61_string, var_62_int)
{
	var_63_string = ""; var_64_string = ""; // 0xcc2 PushV
	var_64_string = "idle"; // 0xcc3 MovS
	var_65_int = var_62_int; // 0xcc4 Push
	if(var_65_int == 0) goto Label_3271; // 0xcc5 JumpB
	var_64_string = var_64_string + var_62_int; // 0xcc6 Add2
	
Label_3271:
	var_61_string = var_64_string; // 0xcc7 Mov
	return 2; // 0xcc8 Return
}


func_3526()
{
	var_102_object = Obj(); var_103_object = Obj(); // 0xdc6 PushV
	var_104_int = 496; // 0xdc7 PushI
	var_105_int = 1; // 0xdc8 PushI
	var_106_int = 528063; // 0xdc9 PushI
	CreateDiaryEntry(var_103_object, var_104_int, var_105_int, var_106_int); // 0xdca Func
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0; // 0xdcc PushV
	var_108_object = var_103_object; // 0xdcd Mov
	var_109_int = 480; // 0xdce MovI
	func_3656(var_107_bool, var_108_object, var_109_int); // 0xdcf NEW_2
	return 2; // 0xdd1 Return
}


func_3273(var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0xcc9 PushV
	var_58_int = 0; // 0xcca MovI
	
Label_3275:
	var_60_string = "all"; // 0xccb PushS
	var_61_string = ""; var_62_int = 0; // 0xccc PushV
	var_62_int = var_58_int; // 0xccd Mov
	func_3266(var_61_string, var_62_int); // 0xcce NEW_2
	HasAnimation(var_59_bool, var_60_string, var_61_string); // 0xcd0 Func
	var_66_bool = var_59_bool == 0; // 0xcd2 Not
	if(var_66_bool == 0) goto Label_3285; // 0xcd3 JumpB
	goto Label_3288; // 0xcd4 Jump
	
Label_3288:
	var_55_int = var_58_int; // 0xcd8 Mov
	return 4; // 0xcd9 Return
	
Label_3285:
	var_67_int = 1; // 0xcd5 PushI
	var_58_int = var_58_int + var_67_int; // 0xcd6 Add2
	goto Label_3275; // 0xcd7 Jump
}


func_3022()
{
	var_274_bool = 0; var_275_bool = 0; // 0xbce PushV
	CameraSwitchToNormal(); // 0xbcf Func
	var_276_bool = 0; // 0xbd1 PushV
	func_3298(var_276_bool); // 0xbd2 NEW_2
	if(var_276_bool == 0) goto Label_3030; // 0xbd4 JumpB
	goto Label_3038; // 0xbd5 Jump
	
Label_3038:
	return 2; // 0xbde Return
	
Label_3030:
	var_277_string = "head"; // 0xbd6 PushS
	HasAnimationTrack(var_275_bool, var_277_string); // 0xbd7 Func
	var_278_bool = var_275_bool; // 0xbd9 Push
	if(var_278_bool == 0) goto Label_3038; // 0xbda JumpB
	var_279_string = "head"; // 0xbdb PushS
	UnlookAsync(var_279_string); // 0xbdc Func
}


func_3539()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0xdd3 PushV
	var_94_int = 495; // 0xdd4 PushI
	var_95_int = 1; // 0xdd5 PushI
	var_96_int = 528062; // 0xdd6 PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0xdd7 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0xdd9 PushV
	var_98_object = var_93_object; // 0xdda Mov
	var_99_int = 480; // 0xddb MovI
	func_3656(var_97_bool, var_98_object, var_99_int); // 0xddc NEW_2
	return 2; // 0xdde Return
}


func_3290(var_116_int)
{
	var_116_int = 515549; // 0xcda MovI
	return 0; // 0xcdb Return
}


func_3292(var_115_int)
{
	var_115_int = 502874; // 0xcdc MovI
	return 0; // 0xcdd Return
}


func_3294(var_117_string)
{
	var_117_string = "ui/NPC_Ospina.png"; // 0xcde MovS
	return 0; // 0xcdf Return
}


func_3039(var_128_bool, var_129_object)
{
	var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_int = 0; // 0xbdf PushV
	var_137_string = "voice_common"; // 0xbe0 PushS
	GetVariable(var_137_string, var_135_int); // 0xbe1 Func
	var_138_int = var_135_int; // 0xbe3 Push
	if(var_138_int == 0) goto Label_3077; // 0xbe4 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0xbe5 PushV
	var_140_object = var_129_object; // 0xbe6 Mov
	func_3097(var_140_object); // 0xbe7 NEW_2
	var_169_bool = var_139_bool == 0; // 0xbe9 Not
	if(var_169_bool == 0) goto Label_3059; // 0xbea JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0xbeb PushV
	var_171_object = var_129_object; // 0xbec Mov
	func_3134(var_171_object); // 0xbed NEW_2
	var_205_bool = var_170_bool == 0; // 0xbef Not
	if(var_205_bool == 0) goto Label_3059; // 0xbf0 JumpB
	var_128_bool = 0; // 0xbf1 MovB
	return 4; // 0xbf2 Return
	
Label_3059:
	var_206_int = 2; // 0xbf3 PushI
	irand(var_136_int, var_206_int); // 0xbf4 Func
	var_207_int = var_136_int; // 0xbf6 Push
	if(var_207_int == 0) goto Label_3072; // 0xbf7 JumpB
	var_208_string = "voice_common"; // 0xbf8 PushS
	var_209_int = 1; // 0xbf9 PushI
	var_210_int = var_135_int + var_209_int; // 0xbfa Add
	var_211_int = 3; // 0xbfb PushI
	var_212_int = var_210_int / var_211_int; // 0xbfc Mod
	SetVariable(var_208_string, var_212_int); // 0xbfd Func
	goto Label_3076; // 0xbff Jump
	
Label_3076:
	goto Label_3095; // 0xc04 Jump
	
Label_3095:
	var_128_bool = 1; // 0xc17 MovB
	return 4; // 0xc18 Return
	
Label_3072:
	var_213_string = "voice_common"; // 0xc00 PushS
	var_214_int = 0; // 0xc01 PushI
	SetVariable(var_213_string, var_214_int); // 0xc02 Func
	
Label_3077:
	var_215_bool = 0; var_216_object = Obj(); // 0xc05 PushV
	var_216_object = var_129_object; // 0xc06 Mov
	func_3134(var_216_object); // 0xc07 NEW_2
	var_217_bool = var_215_bool == 0; // 0xc09 Not
	if(var_217_bool == 0) goto Label_3091; // 0xc0a JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0xc0b PushV
	var_219_object = var_129_object; // 0xc0c Mov
	func_3097(var_219_object); // 0xc0d NEW_2
	var_220_bool = var_218_bool == 0; // 0xc0f Not
	if(var_220_bool == 0) goto Label_3091; // 0xc10 JumpB
	var_128_bool = 0; // 0xc11 MovB
	return 4; // 0xc12 Return
	
Label_3091:
	var_221_string = "voice_common"; // 0xc13 PushS
	var_222_int = 1; // 0xc14 PushI
	SetVariable(var_221_string, var_222_int); // 0xc15 Func
}


func_3296(var_118_string)
{
	var_118_string = "ui/NPC_Ospina_b.png"; // 0xce0 MovS
	return 0; // 0xce1 Return
}


func_3552()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xde0 PushV
	var_84_int = 494; // 0xde1 PushI
	var_85_int = 1; // 0xde2 PushI
	var_86_int = 528061; // 0xde3 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0xde4 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0xde6 PushV
	var_88_object = var_83_object; // 0xde7 Mov
	var_89_int = 480; // 0xde8 MovI
	func_3656(var_87_bool, var_88_object, var_89_int); // 0xde9 NEW_2
	return 2; // 0xdeb Return
}


func_3298(var_110_bool)
{
	var_110_bool = 1; // 0xce2 MovB
	return 0; // 0xce3 Return
}


func_3300()
{
	var_44_string = "k2q01"; // 0xce5 PushS
	var_45_int = 4; // 0xce6 PushI
	SetVariable(var_44_string, var_45_int); // 0xce7 Func
	func_3604(); // 0xcea NEW_2
	return 0; // 0xcec Return
}


func_3309()
{
	var_91_string = "k2q01"; // 0xcee PushS
	var_92_int = 6; // 0xcef PushI
	SetVariable(var_91_string, var_92_int); // 0xcf0 Func
	func_3591(); // 0xcf3 NEW_2
	return 0; // 0xcf5 Return
}


func_2286(var_2_object, var_606_string)
{
	var_607_bool = 0; // 0x8ef PushV
	func_3298(var_607_bool); // 0x8f0 NEW_2
	var_608_bool = var_607_bool == 0; // 0x8f2 Not
	if(var_608_bool == 0) goto Label_2293; // 0x8f3 JumpB
	return 0; // 0x8f4 Return
	
Label_2293:
	var_609_bool = var_606_string == var_2_object; // 0x8f5 Eq
	if(var_609_bool == 0) goto Label_2296; // 0x8f6 JumpB
	return 0; // 0x8f7 Return
	
Label_2296:
	var_610_string = ""; var_611_bool = 0; // 0x8f8 PushV
	var_610_string = var_606_string; // 0x8f9 Mov
	var_612_string = ""; // 0x8fa PushS
	var_613_bool = var_606_string == var_612_string; // 0x8fb Eq
	if(var_613_bool == 0) goto Label_2303; // 0x8fc JumpB
	var_611_bool = 0; // 0x8fd MovB
	goto Label_2304; // 0x8fe Jump
	
Label_2304:
	func_3193(var_610_string, var_611_bool); // 0x900 NEW_2
	var_2_object = var_606_string; // 0x902 TMov
	return 0; // 0x903 Return
	
Label_2303:
	var_611_bool = 1; // 0x8ff MovB
}


func_2541(var_0_object, var_1_object, var_2_object, var_3_string, var_658_object, var_659_object)
{
	var_0_object = var_659_object; // 0x9ee TMov
	var_1_object = var_658_object; // 0x9ef TMov
	var_3_string = 0; // 0x9f0 TMovB
	var_664_int = 1; // 0x9f1 PushI
	if(var_664_int == 0) goto Label_2569; // 0x9f2 JumpB
	var_665_string = ""; // 0x9f3 PushV
	var_665_string = "Neutral"; // 0x9f4 MovS
	func_2599(var_659_object, var_665_string); // 0x9f5 NEW_2
	var_673_int = 540539; // 0x9f7 PushI
	SetMessage(var_673_int); // 0x9f8 TObjFunc
	ClearReplies(); // 0x9fa TObjFunc
	var_674_int = 540540; // 0x9fc PushI
	var_675_int = -1; // 0x9fd PushI
	var_676_int = 42549; // 0x9fe PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x9ff TObjFunc
	var_677_int = 540799; // 0xa01 PushI
	var_678_int = -1; // 0xa02 PushI
	var_679_int = 42848; // 0xa03 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0xa04 TObjFunc
	goto Label_2569; // 0xa06 Jump
	
Label_2569:
	var_680_bool = 0; // 0xa09 PushV
	func_3298(var_680_bool); // 0xa0a NEW_2
	if(var_680_bool == 0) goto Label_2584; // 0xa0c JumpB
	
Label_2573:
	lshWaitForAnimEnd(); // 0xa0d Func
	var_681_string = var_3_string; // 0xa0f PushT
	if(var_681_string == 0) goto Label_2578; // 0xa10 JumpB
	goto Label_2583; // 0xa11 Jump
	
Label_2583:
	goto Label_2598; // 0xa17 Jump
	
Label_2598:
	return 0; // 0xa26 Return
	
Label_2578:
	var_682_string = ""; // 0xa12 PushV
	var_682_string = var_2_object; // 0xa13 MovT
	func_3177(var_682_string); // 0xa14 NEW_2
	goto Label_2573; // 0xa16 Jump
	
Label_2584:
	var_683_string = "all"; // 0xa18 PushS
	var_684_string = "idle"; // 0xa19 PushS
	PlayAnimation(var_683_string, var_684_string); // 0xa1a Func
	
Label_2588:
	WaitForAnimEnd(); // 0xa1c Func
	var_685_string = var_3_string; // 0xa1e PushT
	if(var_685_string == 0) goto Label_2593; // 0xa1f JumpB
	goto Label_2598; // 0xa20 Jump
	
Label_2593:
	var_686_string = "all"; // 0xa21 PushS
	var_687_string = "idle"; // 0xa22 PushS
	PlayAnimation(var_686_string, var_687_string); // 0xa23 Func
	goto Label_2588; // 0xa25 Jump
}


func_3565()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xded PushV
	var_59_int = 493; // 0xdee PushI
	var_60_int = 1; // 0xdef PushI
	var_61_int = 528060; // 0xdf0 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xdf1 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xdf3 PushV
	var_63_object = var_58_object; // 0xdf4 Mov
	var_64_int = 480; // 0xdf5 MovI
	func_3656(var_62_bool, var_63_object, var_64_int); // 0xdf6 NEW_2
	return 2; // 0xdf8 Return
}


func_3318()
{
	var_44_string = "ook6Ospina1"; // 0xcf7 PushS
	var_45_int = 1; // 0xcf8 PushI
	SetVariable(var_44_string, var_45_int); // 0xcf9 Func
	return 0; // 0xcfb Return
}


func_1786(var_0_object, var_1_object, var_2_object, var_3_string, var_528_object, var_529_object)
{
	var_0_object = var_529_object; // 0x6fb TMov
	var_1_object = var_528_object; // 0x6fc TMov
	var_3_string = 0; // 0x6fd TMovB
	var_534_int = 1; // 0x6fe PushI
	if(var_534_int == 0) goto Label_1828; // 0x6ff JumpB
	var_535_string = ""; // 0x700 PushV
	var_535_string = "Neutral"; // 0x701 MovS
	func_1858(var_529_object, var_535_string); // 0x702 NEW_2
	var_543_int = 527613; // 0x704 PushI
	SetMessage(var_543_int); // 0x705 TObjFunc
	ClearReplies(); // 0x707 TObjFunc
	var_544_bool = 0; // 0x709 PushV
	var_544_bool = 0; // 0x70a MovB
	var_545_bool = 0; var_546_object = Obj(); // 0x70b PushV
	var_546_object = var_1_object; // 0x70c MovT
	func_3488(var_546_object); // 0x70d NEW_2
	if(var_545_bool == 0) goto Label_1814; // 0x70f JumpB
	var_551_bool = 0; var_552_object = Obj(); // 0x710 PushV
	var_552_object = var_1_object; // 0x711 MovT
	func_3476(var_552_object); // 0x712 NEW_2
	if(var_551_bool == 0) goto Label_1814; // 0x714 JumpB
	var_544_bool = 1; // 0x715 MovB
	
Label_1814:
	if(var_544_bool == 0) goto Label_1820; // 0x716 JumpB
	var_557_int = 527615; // 0x717 PushI
	var_558_int = 28961; // 0x718 PushI
	var_559_int = 28960; // 0x719 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x71a TObjFunc
	
Label_1820:
	var_560_int = 527614; // 0x71c PushI
	var_561_int = -1; // 0x71d PushI
	var_562_int = 28959; // 0x71e PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x71f TObjFunc
	goto Label_1828; // 0x721 Jump
	
Label_1828:
	var_563_bool = 0; // 0x724 PushV
	func_3298(var_563_bool); // 0x725 NEW_2
	if(var_563_bool == 0) goto Label_1843; // 0x727 JumpB
	
Label_1832:
	lshWaitForAnimEnd(); // 0x728 Func
	var_564_string = var_3_string; // 0x72a PushT
	if(var_564_string == 0) goto Label_1837; // 0x72b JumpB
	goto Label_1842; // 0x72c Jump
	
Label_1842:
	goto Label_1857; // 0x732 Jump
	
Label_1857:
	return 0; // 0x741 Return
	
Label_1837:
	var_565_string = ""; // 0x72d PushV
	var_565_string = var_2_object; // 0x72e MovT
	func_3177(var_565_string); // 0x72f NEW_2
	goto Label_1832; // 0x731 Jump
	
Label_1843:
	var_566_string = "all"; // 0x733 PushS
	var_567_string = "idle"; // 0x734 PushS
	PlayAnimation(var_566_string, var_567_string); // 0x735 Func
	
Label_1847:
	WaitForAnimEnd(); // 0x737 Func
	var_568_string = var_3_string; // 0x739 PushT
	if(var_568_string == 0) goto Label_1852; // 0x73a JumpB
	goto Label_1857; // 0x73b Jump
	
Label_1852:
	var_569_string = "all"; // 0x73c PushS
	var_570_string = "idle"; // 0x73d PushS
	PlayAnimation(var_569_string, var_570_string); // 0x73e Func
	goto Label_1847; // 0x740 Jump
}


func_763(var_0_object, var_1_object, var_2_object, var_3_string, var_223_object, var_224_object)
{
	var_0_object = var_224_object; // 0x2fc TMov
	var_1_object = var_223_object; // 0x2fd TMov
	var_3_string = 0; // 0x2fe TMovB
	var_229_int = 1; // 0x2ff PushI
	if(var_229_int == 0) goto Label_791; // 0x300 JumpB
	var_230_string = ""; // 0x301 PushV
	var_230_string = "Neutral"; // 0x302 MovS
	func_821(var_224_object, var_230_string); // 0x303 NEW_2
	var_247_int = 525519; // 0x305 PushI
	SetMessage(var_247_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_248_int = 525520; // 0x30a PushI
	var_249_int = 30224; // 0x30b PushI
	var_250_int = 26876; // 0x30c PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x30d TObjFunc
	var_251_int = 528815; // 0x30f PushI
	var_252_int = 30230; // 0x310 PushI
	var_253_int = 30229; // 0x311 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x312 TObjFunc
	goto Label_791; // 0x314 Jump
	
Label_791:
	var_254_bool = 0; // 0x317 PushV
	func_3298(var_254_bool); // 0x318 NEW_2
	if(var_254_bool == 0) goto Label_806; // 0x31a JumpB
	
Label_795:
	lshWaitForAnimEnd(); // 0x31b Func
	var_255_string = var_3_string; // 0x31d PushT
	if(var_255_string == 0) goto Label_800; // 0x31e JumpB
	goto Label_805; // 0x31f Jump
	
Label_805:
	goto Label_820; // 0x325 Jump
	
Label_820:
	return 0; // 0x334 Return
	
Label_800:
	var_256_string = ""; // 0x320 PushV
	var_256_string = var_2_object; // 0x321 MovT
	func_3177(var_256_string); // 0x322 NEW_2
	goto Label_795; // 0x324 Jump
	
Label_806:
	var_267_string = "all"; // 0x326 PushS
	var_268_string = "idle"; // 0x327 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x328 Func
	
Label_810:
	WaitForAnimEnd(); // 0x32a Func
	var_269_string = var_3_string; // 0x32c PushT
	if(var_269_string == 0) goto Label_815; // 0x32d JumpB
	goto Label_820; // 0x32e Jump
	
Label_815:
	var_270_string = "all"; // 0x32f PushS
	var_271_string = "idle"; // 0x330 PushS
	PlayAnimation(var_270_string, var_271_string); // 0x331 Func
	goto Label_810; // 0x333 Jump
}


func_3324()
{
	func_3617(); // 0xcfe NEW_2
	return 0; // 0xd00 Return
}


