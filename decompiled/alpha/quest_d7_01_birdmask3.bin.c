task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xcf PushI
	if(var_7_int == 0) goto Label_647; // 0xd0 JumpB
	func_738(); // 0xd2 Call
	var_9_int = 14438; // 0xd4 PushI
	var_10_bool = var_6_int == var_9_int; // 0xd5 Eq
	if(var_10_bool == 0) goto Label_230; // 0xd6 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xd7 PushV
	var_11_object = var_1_object; // 0xd8 MovT
	var_12_object = var_0_object; // 0xd9 MovT
	func_824(); // 0xda Call
	var_15_object = Obj(); var_16_object = Obj(); // 0xdc PushV
	var_15_object = var_1_object; // 0xdd MovT
	var_16_object = var_0_object; // 0xde MovT
	func_813(var_16_object); // 0xdf Call
	var_34_object = Obj(); var_35_object = Obj(); // 0xe1 PushV
	var_34_object = var_1_object; // 0xe2 MovT
	var_35_object = var_0_object; // 0xe3 MovT
	func_798(); // 0xe4 Call
	
Label_230:
	var_38_int = 14485; // 0xe6 PushI
	var_39_bool = var_6_int == var_38_int; // 0xe7 Eq
	if(var_39_bool == 0) goto Label_243; // 0xe8 JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0xe9 PushV
	var_40_object = var_1_object; // 0xea MovT
	var_41_object = var_0_object; // 0xeb MovT
	func_804(); // 0xec Call
	var_69_object = Obj(); var_70_object = Obj(); // 0xee PushV
	var_69_object = var_1_object; // 0xef MovT
	var_70_object = var_0_object; // 0xf0 MovT
	func_830(); // 0xf1 Call
	
Label_243:
	var_77_int = 14446; // 0xf3 PushI
	var_78_bool = var_6_int == var_77_int; // 0xf4 Eq
	if(var_78_bool == 0) goto Label_256; // 0xf5 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xf6 PushV
	var_79_object = var_1_object; // 0xf7 MovT
	var_80_object = var_0_object; // 0xf8 MovT
	func_804(); // 0xf9 Call
	var_81_object = Obj(); var_82_object = Obj(); // 0xfb PushV
	var_81_object = var_1_object; // 0xfc MovT
	var_82_object = var_0_object; // 0xfd MovT
	func_830(); // 0xfe Call
	
Label_256:
	var_83_int = 16565; // 0x100 PushI
	var_84_bool = var_6_int == var_83_int; // 0x101 Eq
	if(var_84_bool == 0) goto Label_269; // 0x102 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x103 PushV
	var_85_object = var_1_object; // 0x104 MovT
	var_86_object = var_0_object; // 0x105 MovT
	func_804(); // 0x106 Call
	var_87_object = Obj(); var_88_object = Obj(); // 0x108 PushV
	var_87_object = var_1_object; // 0x109 MovT
	var_88_object = var_0_object; // 0x10a MovT
	func_830(); // 0x10b Call
	
Label_269:
	var_89_int = 16566; // 0x10d PushI
	var_90_bool = var_6_int == var_89_int; // 0x10e Eq
	if(var_90_bool == 0) goto Label_282; // 0x10f JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x110 PushV
	var_91_object = var_1_object; // 0x111 MovT
	var_92_object = var_0_object; // 0x112 MovT
	func_804(); // 0x113 Call
	var_93_object = Obj(); var_94_object = Obj(); // 0x115 PushV
	var_93_object = var_1_object; // 0x116 MovT
	var_94_object = var_0_object; // 0x117 MovT
	func_830(); // 0x118 Call
	
Label_282:
	var_95_int = 14435; // 0x11a PushI
	var_96_bool = var_5_int == var_95_int; // 0x11b Eq
	if(var_96_bool == 0) goto Label_374; // 0x11c JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x11d PushV
	var_98_object = var_1_object; // 0x11e MovT
	func_859(var_98_object); // 0x11f Call
	if(var_97_bool == 0) goto Label_305; // 0x121 JumpB
	var_105_string = ""; // 0x122 PushV
	var_105_string = "Neutral"; // 0x123 MovS
	func_190(var_6_int, var_105_string); // 0x124 Call
	var_120_int = 13212; // 0x126 PushI
	SetMessage(var_120_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_121_int = 13213; // 0x12b PushI
	var_122_int = 14437; // 0x12c PushI
	var_123_int = 14436; // 0x12d PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_124_bool = 0; // 0x131 PushV
	var_124_bool = 0; // 0x132 MovB
	var_125_bool = 0; var_126_object = Obj(); // 0x133 PushV
	var_126_object = var_1_object; // 0x134 MovT
	func_837(var_126_object); // 0x135 Call
	if(var_125_bool == 0) goto Label_318; // 0x137 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x138 PushV
	var_132_object = var_1_object; // 0x139 MovT
	func_849(var_131_bool, var_132_object); // 0x13a Call
	if(var_131_bool == 0) goto Label_318; // 0x13c JumpB
	var_124_bool = 1; // 0x13d MovB
	
Label_318:
	if(var_124_bool == 0) goto Label_344; // 0x13e JumpB
	var_169_string = ""; // 0x13f PushV
	var_169_string = "Neutral"; // 0x140 MovS
	func_190(var_6_int, var_169_string); // 0x141 Call
	var_170_int = 13216; // 0x143 PushI
	SetMessage(var_170_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_171_int = 13217; // 0x148 PushI
	var_172_int = 14441; // 0x149 PushI
	var_173_int = 14440; // 0x14a PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x14b TObjFunc
	var_174_int = 13220; // 0x14d PushI
	var_175_int = 14444; // 0x14e PushI
	var_176_int = 14443; // 0x14f PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x150 TObjFunc
	var_177_int = 13224; // 0x152 PushI
	var_178_int = 14441; // 0x153 PushI
	var_179_int = 14447; // 0x154 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_180_bool = 0; var_181_object = Obj(); // 0x158 PushV
	var_181_object = var_1_object; // 0x159 MovT
	func_837(var_181_object); // 0x15a Call
	if(var_180_bool == 0) goto Label_374; // 0x15c JumpB
	var_182_string = ""; // 0x15d PushV
	var_182_string = "Neutral"; // 0x15e MovS
	func_190(var_6_int, var_182_string); // 0x15f Call
	var_183_int = 13231; // 0x161 PushI
	SetMessage(var_183_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_184_int = 13232; // 0x166 PushI
	var_185_int = 14456; // 0x167 PushI
	var_186_int = 14455; // 0x168 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x169 TObjFunc
	var_187_int = 13248; // 0x16b PushI
	var_188_int = 16562; // 0x16c PushI
	var_189_int = 14473; // 0x16d PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x16e TObjFunc
	var_190_int = 13249; // 0x170 PushI
	var_191_int = -1; // 0x171 PushI
	var_192_int = 14475; // 0x172 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_193_int = 14456; // 0x176 PushI
	var_194_bool = var_5_int == var_193_int; // 0x177 Eq
	if(var_194_bool == 0) goto Label_402; // 0x178 JumpB
	var_195_string = ""; // 0x179 PushV
	var_195_string = "Neutral"; // 0x17a MovS
	func_190(var_6_int, var_195_string); // 0x17b Call
	var_196_int = 13233; // 0x17d PushI
	SetMessage(var_196_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_197_int = 13234; // 0x182 PushI
	var_198_int = 14458; // 0x183 PushI
	var_199_int = 14457; // 0x184 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x185 TObjFunc
	var_200_int = 13240; // 0x187 PushI
	var_201_int = 14469; // 0x188 PushI
	var_202_int = 14463; // 0x189 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x18a TObjFunc
	var_203_int = 13244; // 0x18c PushI
	var_204_int = 14464; // 0x18d PushI
	var_205_int = 14468; // 0x18e PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_206_int = 14464; // 0x192 PushI
	var_207_bool = var_5_int == var_206_int; // 0x193 Eq
	if(var_207_bool == 0) goto Label_425; // 0x194 JumpB
	var_208_string = ""; // 0x195 PushV
	var_208_string = "Neutral"; // 0x196 MovS
	func_190(var_6_int, var_208_string); // 0x197 Call
	var_209_int = 13241; // 0x199 PushI
	SetMessage(var_209_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_210_int = 13242; // 0x19e PushI
	var_211_int = -1; // 0x19f PushI
	var_212_int = 14465; // 0x1a0 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1a1 TObjFunc
	var_213_int = 13243; // 0x1a3 PushI
	var_214_int = 16562; // 0x1a4 PushI
	var_215_int = 14466; // 0x1a5 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_216_int = 14469; // 0x1a9 PushI
	var_217_bool = var_5_int == var_216_int; // 0x1aa Eq
	if(var_217_bool == 0) goto Label_448; // 0x1ab JumpB
	var_218_string = ""; // 0x1ac PushV
	var_218_string = "Neutral"; // 0x1ad MovS
	func_190(var_6_int, var_218_string); // 0x1ae Call
	var_219_int = 13245; // 0x1b0 PushI
	SetMessage(var_219_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_220_int = 13246; // 0x1b5 PushI
	var_221_int = -1; // 0x1b6 PushI
	var_222_int = 14470; // 0x1b7 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1b8 TObjFunc
	var_223_int = 13247; // 0x1ba PushI
	var_224_int = 16562; // 0x1bb PushI
	var_225_int = 14471; // 0x1bc PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_226_int = 14458; // 0x1c0 PushI
	var_227_bool = var_5_int == var_226_int; // 0x1c1 Eq
	if(var_227_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_228_string = ""; // 0x1c3 PushV
	var_228_string = "Neutral"; // 0x1c4 MovS
	func_190(var_6_int, var_228_string); // 0x1c5 Call
	var_229_int = 13235; // 0x1c7 PushI
	SetMessage(var_229_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_230_int = 13236; // 0x1cc PushI
	var_231_int = 16562; // 0x1cd PushI
	var_232_int = 14459; // 0x1ce PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1cf TObjFunc
	var_233_int = 13239; // 0x1d1 PushI
	var_234_int = -1; // 0x1d2 PushI
	var_235_int = 14462; // 0x1d3 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_236_int = 16562; // 0x1d7 PushI
	var_237_bool = var_5_int == var_236_int; // 0x1d8 Eq
	if(var_237_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_238_string = ""; // 0x1da PushV
	var_238_string = "Neutral"; // 0x1db MovS
	func_190(var_6_int, var_238_string); // 0x1dc Call
	var_239_int = 15419; // 0x1de PushI
	SetMessage(var_239_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_240_int = 15420; // 0x1e3 PushI
	var_241_int = -1; // 0x1e4 PushI
	var_242_int = 16565; // 0x1e5 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1e6 TObjFunc
	var_243_int = 15421; // 0x1e8 PushI
	var_244_int = -1; // 0x1e9 PushI
	var_245_int = 16566; // 0x1ea PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_246_int = 14444; // 0x1ee PushI
	var_247_bool = var_5_int == var_246_int; // 0x1ef Eq
	if(var_247_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_248_string = ""; // 0x1f1 PushV
	var_248_string = "Neutral"; // 0x1f2 MovS
	func_190(var_6_int, var_248_string); // 0x1f3 Call
	var_249_int = 13221; // 0x1f5 PushI
	SetMessage(var_249_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_250_int = 13222; // 0x1fa PushI
	var_251_int = -1; // 0x1fb PushI
	var_252_int = 14445; // 0x1fc PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1fd TObjFunc
	var_253_int = 13223; // 0x1ff PushI
	var_254_int = -1; // 0x200 PushI
	var_255_int = 14446; // 0x201 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_256_int = 14441; // 0x205 PushI
	var_257_bool = var_5_int == var_256_int; // 0x206 Eq
	if(var_257_bool == 0) goto Label_540; // 0x207 JumpB
	var_258_string = ""; // 0x208 PushV
	var_258_string = "Neutral"; // 0x209 MovS
	func_190(var_6_int, var_258_string); // 0x20a Call
	var_259_int = 13218; // 0x20c PushI
	SetMessage(var_259_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_260_int = 13219; // 0x211 PushI
	var_261_int = -1; // 0x212 PushI
	var_262_int = 14442; // 0x213 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x214 TObjFunc
	var_263_int = 13259; // 0x216 PushI
	var_264_int = -1; // 0x217 PushI
	var_265_int = 14485; // 0x218 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_266_int = 14437; // 0x21c PushI
	var_267_bool = var_5_int == var_266_int; // 0x21d Eq
	if(var_267_bool == 0) goto Label_563; // 0x21e JumpB
	var_268_string = ""; // 0x21f PushV
	var_268_string = "Neutral"; // 0x220 MovS
	func_190(var_6_int, var_268_string); // 0x221 Call
	var_269_int = 13214; // 0x223 PushI
	SetMessage(var_269_int); // 0x224 TObjFunc
	ClearReplies(); // 0x226 TObjFunc
	var_270_int = 13250; // 0x228 PushI
	var_271_int = 14478; // 0x229 PushI
	var_272_int = 14476; // 0x22a PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x22b TObjFunc
	var_273_int = 13251; // 0x22d PushI
	var_274_int = 14482; // 0x22e PushI
	var_275_int = 14477; // 0x22f PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x230 TObjFunc
	return 0; // 0x232 Return
	
Label_563:
	var_276_int = 14482; // 0x233 PushI
	var_277_bool = var_5_int == var_276_int; // 0x234 Eq
	if(var_277_bool == 0) goto Label_581; // 0x235 JumpB
	var_278_string = ""; // 0x236 PushV
	var_278_string = "Neutral"; // 0x237 MovS
	func_190(var_6_int, var_278_string); // 0x238 Call
	var_279_int = 13256; // 0x23a PushI
	SetMessage(var_279_int); // 0x23b TObjFunc
	ClearReplies(); // 0x23d TObjFunc
	var_280_int = 13257; // 0x23f PushI
	var_281_int = 14484; // 0x240 PushI
	var_282_int = 14483; // 0x241 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x242 TObjFunc
	return 0; // 0x244 Return
	
Label_581:
	var_283_int = 14484; // 0x245 PushI
	var_284_bool = var_5_int == var_283_int; // 0x246 Eq
	if(var_284_bool == 0) goto Label_599; // 0x247 JumpB
	var_285_string = ""; // 0x248 PushV
	var_285_string = "Neutral"; // 0x249 MovS
	func_190(var_6_int, var_285_string); // 0x24a Call
	var_286_int = 13258; // 0x24c PushI
	SetMessage(var_286_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_287_int = 13215; // 0x251 PushI
	var_288_int = -1; // 0x252 PushI
	var_289_int = 14438; // 0x253 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_290_int = 14478; // 0x257 PushI
	var_291_bool = var_5_int == var_290_int; // 0x258 Eq
	if(var_291_bool == 0) goto Label_617; // 0x259 JumpB
	var_292_string = ""; // 0x25a PushV
	var_292_string = "Neutral"; // 0x25b MovS
	func_190(var_6_int, var_292_string); // 0x25c Call
	var_293_int = 13252; // 0x25e PushI
	SetMessage(var_293_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_294_int = 13253; // 0x263 PushI
	var_295_int = 14480; // 0x264 PushI
	var_296_int = 14479; // 0x265 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x266 TObjFunc
	return 0; // 0x268 Return
	
Label_617:
	var_297_int = 14480; // 0x269 PushI
	var_298_bool = var_5_int == var_297_int; // 0x26a Eq
	if(var_298_bool == 0) goto Label_635; // 0x26b JumpB
	var_299_string = ""; // 0x26c PushV
	var_299_string = "Neutral"; // 0x26d MovS
	func_190(var_6_int, var_299_string); // 0x26e Call
	var_300_int = 13254; // 0x270 PushI
	SetMessage(var_300_int); // 0x271 TObjFunc
	ClearReplies(); // 0x273 TObjFunc
	var_301_int = 13255; // 0x275 PushI
	var_302_int = -1; // 0x276 PushI
	var_303_int = 14481; // 0x277 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x278 TObjFunc
	return 0; // 0x27a Return
	
Label_635:
	var_3_string = 1; // 0x27b TMovB
	var_304_bool = 0; // 0x27c PushV
	func_998(var_304_bool); // 0x27d Call
	if(var_304_bool == 0) goto Label_643; // 0x27f JumpB
	lshStopAnimation(); // 0x280 Func
	goto Label_645; // 0x282 Jump
	
Label_645:
	return 0; // 0x285 Return
	
Label_643:
	StopAnimation(); // 0x283 Func
	
Label_647:
	return 0; // 0x287 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x28d PushV
	var_7_object = var_5_object; // 0x28e Mov
	TaskCall(0); // 0x28f TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x290 Call
	TaskReturn(); // 0x291 TaskReturn
	return 0; // 0x293 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_648:
	Hold(); // 0x288 Func
	goto Label_648; // 0x28a Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_660(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_994(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_996(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_961(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_180_bool = var_16_bool == 0; // 0x2d Not
	if(var_180_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_181_object = Obj(); // 0x34 PushV
	var_181_object = var_7_object; // 0x35 Mov
	func_716(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_961(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x3c1 PushV
	var_63_string = "player"; // 0x3c2 PushS
	GetVariable(var_63_string, var_62_int); // 0x3c3 Func
	var_64_int = 0; // 0x3c5 PushI
	var_65_bool = var_62_int == var_64_int; // 0x3c6 Eq
	if(var_65_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_60_int = 200001; // 0x3c8 MovI
	return 2; // 0x3c9 Return
	
Label_971:
	var_66_int = 1; // 0x3cb PushI
	var_67_bool = var_62_int == var_66_int; // 0x3cc Eq
	if(var_67_bool == 0) goto Label_976; // 0x3cd JumpB
	var_60_int = 200002; // 0x3ce MovI
	return 2; // 0x3cf Return
	
Label_976:
	var_60_int = 200003; // 0x3d0 MovI
	return 2; // 0x3d1 Return
}


func_773(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x305 PushV
	CreateInvItem(var_22_object); // 0x306 Func
	SetItemName(var_19_string); // 0x308 ObjFunc
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0x30a PushV
	var_23_object = var_18_object; // 0x30b Mov
	var_24_object = var_22_object; // 0x30c Mov
	var_25_int = var_20_int; // 0x30d Mov
	func_760(var_24_object, var_25_int); // 0x30e Call
	return 2; // 0x310 Return
}


func_837(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x346 PushV
	var_115_string = "d7q01"; // 0x347 MovS
	func_755(var_114_int, var_115_string); // 0x348 Call
	var_116_int = 2; // 0x34a PushI
	var_117_bool = var_114_int == var_116_int; // 0x34b Eq
	if(var_117_bool == 0) goto Label_847; // 0x34c JumpB
	var_112_bool = 1; // 0x34d MovB
	return 0; // 0x34e Return
	
Label_847:
	var_112_bool = 0; // 0x34f MovB
	return 0; // 0x350 Return
}


func_716()
{
	CameraSwitchToNormal(); // 0x2cd Func
	return 0; // 0x2cf Return
}


func_720(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; // 0x2d0 PushV
	var_93_string = "playing "; // 0x2d1 PushS
	var_94_int = var_93_string + var_88_string; // 0x2d2 Add
	Trace(var_94_int); // 0x2d3 Func
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float); // 0x2d5 Func
	lshPlayAnimation(var_91_float, var_92_float); // 0x2d7 Func
	var_95_string = "start: "; // 0x2d9 PushS
	var_96_int = var_95_string + var_91_float; // 0x2da Add
	Trace(var_96_int); // 0x2db Func
	var_97_string = "end: "; // 0x2dd PushS
	var_98_int = var_97_string + var_92_float; // 0x2de Add
	Trace(var_98_int); // 0x2df Func
	return 4; // 0x2e1 Return
}


func_849(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj(); // 0x352 PushV
	var_121_object = var_119_object; // 0x353 Mov
	func_871(var_121_object); // 0x354 Call
	if(var_120_bool == 0) goto Label_857; // 0x356 JumpB
	var_118_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
	
Label_857:
	var_118_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_786(var_71_bool, var_72_string, var_73_string)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x312 PushV
	FindActor(var_75_object, var_72_string); // 0x313 Func
	var_76_bool = var_75_object == 0; // 0x315 NullEq
	if(var_76_bool == 0) goto Label_793; // 0x316 JumpB
	var_71_bool = 0; // 0x317 MovB
	return 2; // 0x318 Return
	
Label_793:
	Trigger(var_75_object, var_73_string); // 0x319 Func
	var_71_bool = 1; // 0x31b MovB
	return 2; // 0x31c Return
}


func_978()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x3d2 PushV
	var_46_string = "Adding diary entry"; // 0x3d3 PushS
	Trace(var_46_string); // 0x3d4 Func
	var_47_int = 169; // 0x3d6 PushI
	var_48_int = 1; // 0x3d7 PushI
	var_49_int = 15418; // 0x3d8 PushI
	CreateDiaryEntry(var_45_object, var_47_int, var_48_int, var_49_int); // 0x3d9 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x3db PushV
	var_51_object = var_45_object; // 0x3dc Mov
	var_52_int = 165; // 0x3dd MovI
	func_932(var_50_bool, var_51_object, var_52_int); // 0x3de Call
	return 2; // 0x3e0 Return
}


func_660(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x294 PushV
	GetPosition(var_28_cvector); // 0x295 ObjFunc
	GetEyesHeight(var_27_float); // 0x297 ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x299 PushE
	var_35_float = var_35_float + var_27_float; // 0x29a Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x29b PopE
	GetPosition(var_29_cvector); // 0x29c Func
	GetEyesHeight(var_27_float); // 0x29e Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x2a0 PushE
	var_36_float = var_36_float + var_27_float; // 0x2a1 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x2a2 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x2a3 Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x2a4 PushE
	var_37_float = 0; // 0x2a5 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x2a6 PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x2a7 Or
	var_39_float = sqrt(var_38_int); // 0x2a8 Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x2a9 Div2
	var_31_cvector = -var_30_cvector; // 0x2aa Neg2
	var_40_int = 70; // 0x2ab PushI
	var_41_float = var_30_cvector * var_40_int; // 0x2ac Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x2ad PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x2ae PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x2af Xor2
	func_745(var_42_cvector, var_43_cvector); // 0x2b0 Call
	var_50_int = 25; // 0x2b2 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x2b3 Mult
	var_52_int = var_41_float + var_51_float; // 0x2b4 Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x2b5 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x2b6 Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x2b7 Add2
	IsOverrideActive(var_34_bool); // 0x2b8 Func
	var_54_bool = var_34_bool; // 0x2ba Push
	if(var_54_bool == 0) goto Label_702; // 0x2bb JumpB
	var_17_bool = 0; // 0x2bc MovB
	return 16; // 0x2bd Return
	
Label_702:
	StopWorld(); // 0x2be Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x2c0 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x2c2 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x2c3 PushE
	Rotate(var_55_float, var_56_float); // 0x2c4 Func
	CameraWaitForPlayFinish(); // 0x2c6 Func
	ResumeWorld(); // 0x2c8 Func
	var_17_bool = 1; // 0x2ca MovB
	return 16; // 0x2cb Return
}


func_919(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x397 PushV
	GetDiaryRoot(var_61_object); // 0x398 Func
	var_62_bool = var_61_object == 0; // 0x39a Not
	if(var_62_bool == 0) goto Label_929; // 0x39b JumpB
	var_63_string = "Can't retrieve diary root"; // 0x39c PushS
	Trace(var_63_string); // 0x39d Func
	var_59_object = 0; // 0x39f MovB
	return 2; // 0x3a0 Return
	
Label_929:
	var_59_object = var_61_object; // 0x3a1 Mov
	return 2; // 0x3a2 Return
}


func_859(var_76_bool)
{
	var_78_int = 0; var_79_string = ""; // 0x35c PushV
	var_79_string = "ood7MBirdmask1"; // 0x35d MovS
	func_755(var_78_int, var_79_string); // 0x35e Call
	var_82_int = 0; // 0x360 PushI
	var_83_bool = var_78_int == var_82_int; // 0x361 Eq
	if(var_83_bool == 0) goto Label_869; // 0x362 JumpB
	var_76_bool = 1; // 0x363 MovB
	return 0; // 0x364 Return
	
Label_869:
	var_76_bool = 0; // 0x365 MovB
	return 0; // 0x366 Return
}


func_798()
{
	var_36_string = "playsound"; // 0x31f PushS
	var_37_string = "giveitem"; // 0x320 PushS
	TriggerWorld(var_36_string, var_37_string); // 0x321 Func
	return 0; // 0x323 Return
}


func_994(var_58_int)
{
	var_58_int = 4029; // 0x3e2 MovI
	return 0; // 0x3e3 Return
}


func_738()
{
	var_8_bool = 0; // 0x2e2 PushV
	func_998(var_8_bool); // 0x2e3 Call
	if(var_8_bool == 0) goto Label_744; // 0x2e5 JumpB
	lshStopSpeech(); // 0x2e6 Func
	
Label_744:
	return 0; // 0x2e8 Return
}


func_804()
{
	var_42_string = "d7q01"; // 0x325 PushS
	var_43_int = 3; // 0x326 PushI
	SetVariable(var_42_string, var_43_int); // 0x327 Func
	func_978(); // 0x32a Call
	return 0; // 0x32c Return
}


func_932(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x3a4 PushV
	var_59_object = Obj(); // 0x3a5 PushV
	func_919(var_59_object); // 0x3a6 Call
	var_56_object = var_59_object; // 0x3a7 Mov
	Find(var_52_int, var_57_object); // 0x3a9 ObjFunc
	var_64_bool = var_57_object == 0; // 0x3ab Not
	if(var_64_bool == 0) goto Label_947; // 0x3ac JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x3ad PushS
	var_66_int = var_65_string + var_52_int; // 0x3ae Add
	Trace(var_66_int); // 0x3af Func
	var_50_bool = 0; // 0x3b1 MovB
	return 6; // 0x3b2 Return
	
Label_947:
	AddChild(var_51_object); // 0x3b3 ObjFunc
	var_67_string = "player_diary"; // 0x3b5 PushS
	var_68_int = 1; // 0x3b6 PushI
	SetVariable(var_67_string, var_68_int); // 0x3b7 Func
	GetCategory(var_58_int); // 0x3b9 ObjFunc
	SetDiarySection(var_58_int); // 0x3bb Func
	var_50_bool = 0; // 0x3bd MovB
	return 6; // 0x3be Return
}


func_996(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x3e4 MovS
	return 0; // 0x3e5 Return
}


func_998(var_85_bool)
{
	var_85_bool = 0; // 0x3e6 MovB
	return 0; // 0x3e7 Return
}


func_871(var_120_bool)
{
	var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0; var_126_bool = 0; var_127_int = 0; var_128_object = Obj(); var_129_int = 0; var_130_bool = 0; var_131_bool = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_bool = 0; var_136_bool = 0; var_137_int = 0; var_138_object = Obj(); var_139_int = 0; var_140_bool = 0; var_141_bool = 0; // 0x367 PushV
	var_142_int = 1; // 0x368 PushI
	GetItemCount(var_132_int, var_142_int); // 0x369 ObjFunc
	var_143_string = "bird_mask"; // 0x36b PushS
	GetInvItemByName(var_133_int, var_143_string); // 0x36c Func
	var_144_string = "bird_balahon"; // 0x36e PushS
	GetInvItemByName(var_134_int, var_144_string); // 0x36f Func
	var_135_bool = 0; // 0x371 MovB
	var_136_bool = 0; // 0x372 MovB
	var_137_int = 0; // 0x373 MovI
	
Label_884:
	var_145_bool = var_137_int < var_132_int; // 0x374 LT
	if(var_145_bool == 0) goto Label_912; // 0x375 JumpB
	var_146_int = 1; // 0x376 PushI
	GetItem(var_138_object, var_137_int, var_146_int); // 0x377 ObjFunc
	GetItemID(var_139_int); // 0x379 ObjFunc
	var_147_bool = var_139_int == var_133_int; // 0x37b Eq
	if(var_147_bool == 0) goto Label_900; // 0x37c JumpB
	var_148_int = 1; // 0x37d PushI
	IsItemSelected(var_140_bool, var_137_int, var_148_int); // 0x37e ObjFunc
	var_149_bool = var_140_bool; // 0x380 Push
	if(var_149_bool == 0) goto Label_899; // 0x381 JumpB
	var_135_bool = 1; // 0x382 MovB
	
Label_899:
	goto Label_908; // 0x383 Jump
	
Label_908:
	var_138_object = 0; // 0x38c SetNull
	var_150_int = 1; // 0x38d PushI
	var_137_int = var_137_int + var_150_int; // 0x38e Add2
	goto Label_884; // 0x38f Jump
	
Label_900:
	var_151_bool = var_139_int == var_134_int; // 0x384 Eq
	if(var_151_bool == 0) goto Label_908; // 0x385 JumpB
	var_152_int = 1; // 0x386 PushI
	IsItemSelected(var_141_bool, var_137_int, var_152_int); // 0x387 ObjFunc
	var_153_bool = var_141_bool; // 0x389 Push
	if(var_153_bool == 0) goto Label_908; // 0x38a JumpB
	var_136_bool = 1; // 0x38b MovB
	
Label_912:
	var_120_bool = 0; // 0x390 MovB
	var_154_bool = var_135_bool; // 0x391 Push
	if(var_154_bool == 0) goto Label_918; // 0x392 JumpB
	var_155_bool = var_136_bool; // 0x393 Push
	if(var_155_bool == 0) goto Label_918; // 0x394 JumpB
	var_120_bool = 1; // 0x395 MovB
	
Label_918:
	return 20; // 0x396 Return
}


func_745(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x2e9 PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x2ea Or
	var_46_float = sqrt(var_47_int); // 0x2eb Sqrt2
	var_48_float = 0.0; // 0x2ec PushF
	var_49_bool = var_46_float < var_48_float; // 0x2ed LT
	if(var_49_bool == 0) goto Label_753; // 0x2ee JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x2ef MovV
	return 2; // 0x2f0 Return
	
Label_753:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x2f1 Div2
	return 2; // 0x2f2 Return
}


func_813(var_15_object)
{
	var_17_string = "mreport is given"; // 0x32e PushS
	Trace(var_17_string); // 0x32f Func
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0; // 0x331 PushV
	var_18_object = var_15_object; // 0x332 Mov
	var_19_string = "d7q01_mreport"; // 0x333 MovS
	var_20_int = 1; // 0x334 MovI
	func_773(var_18_object, var_19_string, var_20_int); // 0x335 Call
	return 0; // 0x337 Return
}


func_760(var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; // 0x2f8 PushV
	GetItemID(var_29_int); // 0x2f9 ObjFunc
	var_32_string = "Category"; // 0x2fb PushS
	GetInvItemProperty(var_30_int, var_29_int, var_32_string); // 0x2fc Func
	AddItem(var_31_bool, var_24_object, var_30_int, var_25_int); // 0x2fe ObjFunc
	var_33_bool = var_31_bool == 0; // 0x300 Not
	if(var_33_bool == 0) goto Label_772; // 0x301 JumpB
	DropItems(var_24_object, var_25_int); // 0x302 ObjFunc
	
Label_772:
	return 6; // 0x304 Return
}


func_755(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0; // 0x2f3 PushV
	GetVariable(var_79_string, var_81_int); // 0x2f4 Func
	var_78_int = var_81_int; // 0x2f6 Mov
	return 2; // 0x2f7 Return
}


func_824()
{
	var_13_string = "ood7MBirdmask1"; // 0x339 PushS
	var_14_int = 1; // 0x33a PushI
	SetVariable(var_13_string, var_14_int); // 0x33b Func
	return 0; // 0x33d Return
}


func_190(var_2_object, var_84_string)
{
	var_85_bool = 0; // 0xbf PushV
	func_998(var_85_bool); // 0xc0 Call
	var_86_bool = var_85_bool == 0; // 0xc2 Not
	if(var_86_bool == 0) goto Label_197; // 0xc3 JumpB
	return 0; // 0xc4 Return
	
Label_197:
	var_87_bool = var_84_string == var_2_object; // 0xc5 Eq
	if(var_87_bool == 0) goto Label_200; // 0xc6 JumpB
	return 0; // 0xc7 Return
	
Label_200:
	var_88_string = ""; // 0xc8 PushV
	var_88_string = var_84_string; // 0xc9 Mov
	func_720(var_88_string); // 0xca Call
	var_2_object = var_84_string; // 0xcc TMov
	return 0; // 0xcd Return
}


func_830()
{
	var_71_bool = 0; var_72_string = ""; var_73_string = ""; // 0x33f PushV
	var_72_string = "quest_d7_01"; // 0x340 MovS
	var_73_string = "sobor_teleport"; // 0x341 MovS
	func_786(var_71_bool, var_72_string, var_73_string); // 0x342 Call
	return 0; // 0x344 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_160; // 0x44 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x45 PushV
	var_77_object = var_1_object; // 0x46 MovT
	func_859(var_77_object); // 0x47 Call
	if(var_76_bool == 0) goto Label_89; // 0x49 JumpB
	var_84_string = ""; // 0x4a PushV
	var_84_string = "Neutral"; // 0x4b MovS
	func_190(var_70_object, var_84_string); // 0x4c Call
	var_99_int = 13212; // 0x4e PushI
	SetMessage(var_99_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_100_int = 13213; // 0x53 PushI
	var_101_int = 14437; // 0x54 PushI
	var_102_int = 14436; // 0x55 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x56 TObjFunc
	goto Label_160; // 0x58 Jump
	
Label_160:
	var_103_bool = 0; // 0xa0 PushV
	func_998(var_103_bool); // 0xa1 Call
	if(var_103_bool == 0) goto Label_175; // 0xa3 JumpB
	
Label_164:
	lshWaitForAnimEnd(); // 0xa4 Func
	var_104_string = var_3_string; // 0xa6 PushT
	if(var_104_string == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_174:
	goto Label_189; // 0xae Jump
	
Label_189:
	return 0; // 0xbd Return
	
Label_169:
	var_105_string = ""; // 0xa9 PushV
	var_105_string = var_2_object; // 0xaa MovT
	func_720(var_105_string); // 0xab Call
	goto Label_164; // 0xad Jump
	
Label_175:
	var_106_string = "all"; // 0xaf PushS
	var_107_string = "idle"; // 0xb0 PushS
	PlayAnimation(var_106_string, var_107_string); // 0xb1 Func
	
Label_179:
	WaitForAnimEnd(); // 0xb3 Func
	var_108_string = var_3_string; // 0xb5 PushT
	if(var_108_string == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_184:
	var_109_string = "all"; // 0xb8 PushS
	var_110_string = "idle"; // 0xb9 PushS
	PlayAnimation(var_109_string, var_110_string); // 0xba Func
	goto Label_179; // 0xbc Jump
	
Label_89:
	var_111_bool = 0; // 0x59 PushV
	var_111_bool = 0; // 0x5a MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x5b PushV
	var_113_object = var_1_object; // 0x5c MovT
	func_837(var_113_object); // 0x5d Call
	if(var_112_bool == 0) goto Label_102; // 0x5f JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0x60 PushV
	var_119_object = var_1_object; // 0x61 MovT
	func_849(var_118_bool, var_119_object); // 0x62 Call
	if(var_118_bool == 0) goto Label_102; // 0x64 JumpB
	var_111_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_111_bool == 0) goto Label_128; // 0x66 JumpB
	var_156_string = ""; // 0x67 PushV
	var_156_string = "Neutral"; // 0x68 MovS
	func_190(var_70_object, var_156_string); // 0x69 Call
	var_157_int = 13216; // 0x6b PushI
	SetMessage(var_157_int); // 0x6c TObjFunc
	ClearReplies(); // 0x6e TObjFunc
	var_158_int = 13217; // 0x70 PushI
	var_159_int = 14441; // 0x71 PushI
	var_160_int = 14440; // 0x72 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x73 TObjFunc
	var_161_int = 13220; // 0x75 PushI
	var_162_int = 14444; // 0x76 PushI
	var_163_int = 14443; // 0x77 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x78 TObjFunc
	var_164_int = 13224; // 0x7a PushI
	var_165_int = 14441; // 0x7b PushI
	var_166_int = 14447; // 0x7c PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x7d TObjFunc
	goto Label_160; // 0x7f Jump
	
Label_128:
	var_167_bool = 0; var_168_object = Obj(); // 0x80 PushV
	var_168_object = var_1_object; // 0x81 MovT
	func_837(var_168_object); // 0x82 Call
	if(var_167_bool == 0) goto Label_158; // 0x84 JumpB
	var_169_string = ""; // 0x85 PushV
	var_169_string = "Neutral"; // 0x86 MovS
	func_190(var_70_object, var_169_string); // 0x87 Call
	var_170_int = 13231; // 0x89 PushI
	SetMessage(var_170_int); // 0x8a TObjFunc
	ClearReplies(); // 0x8c TObjFunc
	var_171_int = 13232; // 0x8e PushI
	var_172_int = 14456; // 0x8f PushI
	var_173_int = 14455; // 0x90 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x91 TObjFunc
	var_174_int = 13248; // 0x93 PushI
	var_175_int = 16562; // 0x94 PushI
	var_176_int = 14473; // 0x95 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x96 TObjFunc
	var_177_int = 13249; // 0x98 PushI
	var_178_int = -1; // 0x99 PushI
	var_179_int = 14475; // 0x9a PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x9b TObjFunc
	goto Label_160; // 0x9d Jump
	
Label_158:
	return 0; // 0x9e Return
}


