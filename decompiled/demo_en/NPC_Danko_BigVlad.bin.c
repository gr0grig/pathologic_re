task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0xe6 PushI
	if(var_57_int == 0) goto Label_718; // 0xe7 JumpB
	func_7300(); // 0xe9 NEW_2
	var_59_int = 33343; // 0xeb PushI
	var_60_bool = var_56_bool == var_59_int; // 0xec Eq
	if(var_60_bool == 0) goto Label_243; // 0xed JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xee PushV
	var_61_object = var_1_object; // 0xef MovT
	var_62_object = var_0_object; // 0xf0 MovT
	func_8096(); // 0xf1 NEW_2
	
Label_243:
	var_94_int = 35010; // 0xf3 PushI
	var_95_bool = var_56_bool == var_94_int; // 0xf4 Eq
	if(var_95_bool == 0) goto Label_251; // 0xf5 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0xf6 PushV
	var_96_object = var_1_object; // 0xf7 MovT
	var_97_object = var_0_object; // 0xf8 MovT
	func_8096(); // 0xf9 NEW_2
	
Label_251:
	var_98_int = 35109; // 0xfb PushI
	var_99_bool = var_56_bool == var_98_int; // 0xfc Eq
	if(var_99_bool == 0) goto Label_259; // 0xfd JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0xfe PushV
	var_100_object = var_1_object; // 0xff MovT
	var_101_object = var_0_object; // 0x100 MovT
	func_7446(); // 0x101 NEW_2
	
Label_259:
	var_104_int = 33081; // 0x103 PushI
	var_105_bool = var_55_string == var_104_int; // 0x104 Eq
	if(var_105_bool == 0) goto Label_350; // 0x105 JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0x106 PushV
	var_107_object = var_1_object; // 0x107 MovT
	func_8110(var_107_object); // 0x108 NEW_2
	var_114_bool = var_106_bool == 0; // 0x10a Not
	if(var_114_bool == 0) goto Label_288; // 0x10b JumpB
	var_115_string = ""; // 0x10c PushV
	var_115_string = "Neutral"; // 0x10d MovS
	func_207(var_56_bool, var_115_string); // 0x10e NEW_2
	var_132_int = 531697; // 0x110 PushI
	SetMessage(var_132_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_133_int = 531698; // 0x115 PushI
	var_134_int = 33083; // 0x116 PushI
	var_135_int = 33082; // 0x117 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x118 TObjFunc
	var_136_int = 531701; // 0x11a PushI
	var_137_int = -1; // 0x11b PushI
	var_138_int = 33085; // 0x11c PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_139_string = ""; // 0x120 PushV
	var_139_string = "Neutral"; // 0x121 MovS
	func_207(var_56_bool, var_139_string); // 0x122 NEW_2
	var_140_int = 531735; // 0x124 PushI
	SetMessage(var_140_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_141_bool = 0; var_142_object = Obj(); // 0x129 PushV
	var_142_object = var_1_object; // 0x12a MovT
	func_8122(var_142_object); // 0x12b NEW_2
	if(var_141_bool == 0) goto Label_307; // 0x12d JumpB
	var_147_int = 532945; // 0x12e PushI
	var_148_int = 33336; // 0x12f PushI
	var_149_int = 34434; // 0x130 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x131 TObjFunc
	
Label_307:
	var_150_bool = 0; // 0x133 PushV
	var_150_bool = 1; // 0x134 MovB
	var_151_bool = 0; // 0x135 PushV
	var_151_bool = 0; // 0x136 MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x137 PushV
	var_153_object = var_1_object; // 0x138 MovT
	func_8122(var_153_object); // 0x139 NEW_2
	if(var_152_bool == 0) goto Label_322; // 0x13b JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x13c PushV
	var_155_object = var_1_object; // 0x13d MovT
	func_8183(var_155_object); // 0x13e NEW_2
	if(var_154_bool == 0) goto Label_322; // 0x140 JumpB
	var_151_bool = 1; // 0x141 MovB
	
Label_322:
	if(var_151_bool == 0) goto Label_338; // 0x142 JumpB
	var_160_bool = 0; // 0x143 PushV
	var_160_bool = 0; // 0x144 MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x145 PushV
	var_162_object = var_1_object; // 0x146 MovT
	func_8134(var_162_object); // 0x147 NEW_2
	if(var_161_bool == 0) goto Label_336; // 0x149 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x14a PushV
	var_168_object = var_1_object; // 0x14b MovT
	func_8183(var_168_object); // 0x14c NEW_2
	if(var_167_bool == 0) goto Label_336; // 0x14e JumpB
	var_160_bool = 1; // 0x14f MovB
	
Label_336:
	if(var_160_bool == 0) goto Label_338; // 0x150 JumpB
	var_150_bool = 0; // 0x151 MovB
	
Label_338:
	if(var_150_bool == 0) goto Label_344; // 0x152 JumpB
	var_169_int = 533590; // 0x153 PushI
	var_170_int = 35110; // 0x154 PushI
	var_171_int = 35109; // 0x155 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x156 TObjFunc
	
Label_344:
	var_172_int = 531813; // 0x158 PushI
	var_173_int = -1; // 0x159 PushI
	var_174_int = 33207; // 0x15a PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_175_int = 35110; // 0x15e PushI
	var_176_bool = var_55_string == var_175_int; // 0x15f Eq
	if(var_176_bool == 0) goto Label_373; // 0x160 JumpB
	var_177_string = ""; // 0x161 PushV
	var_177_string = "Neutral"; // 0x162 MovS
	func_207(var_56_bool, var_177_string); // 0x163 NEW_2
	var_178_int = 533591; // 0x165 PushI
	SetMessage(var_178_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_179_int = 533593; // 0x16a PushI
	var_180_int = 35115; // 0x16b PushI
	var_181_int = 35112; // 0x16c PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x16d TObjFunc
	var_182_int = 533592; // 0x16f PushI
	var_183_int = 35113; // 0x170 PushI
	var_184_int = 35111; // 0x171 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_185_int = 35113; // 0x175 PushI
	var_186_bool = var_55_string == var_185_int; // 0x176 Eq
	if(var_186_bool == 0) goto Label_391; // 0x177 JumpB
	var_187_string = ""; // 0x178 PushV
	var_187_string = "Neutral"; // 0x179 MovS
	func_207(var_56_bool, var_187_string); // 0x17a NEW_2
	var_188_int = 533594; // 0x17c PushI
	SetMessage(var_188_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_189_int = 533595; // 0x181 PushI
	var_190_int = -1; // 0x182 PushI
	var_191_int = 35114; // 0x183 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_192_int = 35115; // 0x187 PushI
	var_193_bool = var_55_string == var_192_int; // 0x188 Eq
	if(var_193_bool == 0) goto Label_414; // 0x189 JumpB
	var_194_string = ""; // 0x18a PushV
	var_194_string = "Neutral"; // 0x18b MovS
	func_207(var_56_bool, var_194_string); // 0x18c NEW_2
	var_195_int = 533596; // 0x18e PushI
	SetMessage(var_195_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_196_int = 533597; // 0x193 PushI
	var_197_int = 35117; // 0x194 PushI
	var_198_int = 35116; // 0x195 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x196 TObjFunc
	var_199_int = 533603; // 0x198 PushI
	var_200_int = 35119; // 0x199 PushI
	var_201_int = 35122; // 0x19a PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_202_int = 35117; // 0x19e PushI
	var_203_bool = var_55_string == var_202_int; // 0x19f Eq
	if(var_203_bool == 0) goto Label_432; // 0x1a0 JumpB
	var_204_string = ""; // 0x1a1 PushV
	var_204_string = "Anger"; // 0x1a2 MovS
	func_207(var_56_bool, var_204_string); // 0x1a3 NEW_2
	var_205_int = 533598; // 0x1a5 PushI
	SetMessage(var_205_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_206_int = 533599; // 0x1aa PushI
	var_207_int = 35119; // 0x1ab PushI
	var_208_int = 35118; // 0x1ac PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1ad TObjFunc
	return 0; // 0x1af Return
	
Label_432:
	var_209_int = 35119; // 0x1b0 PushI
	var_210_bool = var_55_string == var_209_int; // 0x1b1 Eq
	if(var_210_bool == 0) goto Label_455; // 0x1b2 JumpB
	var_211_string = ""; // 0x1b3 PushV
	var_211_string = "Neutral"; // 0x1b4 MovS
	func_207(var_56_bool, var_211_string); // 0x1b5 NEW_2
	var_212_int = 533600; // 0x1b7 PushI
	SetMessage(var_212_int); // 0x1b8 TObjFunc
	ClearReplies(); // 0x1ba TObjFunc
	var_213_int = 533601; // 0x1bc PushI
	var_214_int = -1; // 0x1bd PushI
	var_215_int = 35120; // 0x1be PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1bf TObjFunc
	var_216_int = 533602; // 0x1c1 PushI
	var_217_int = -1; // 0x1c2 PushI
	var_218_int = 35121; // 0x1c3 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_219_int = 33124; // 0x1c7 PushI
	var_220_bool = var_55_string == var_219_int; // 0x1c8 Eq
	if(var_220_bool == 0) goto Label_458; // 0x1c9 JumpB
	
Label_458:
	var_221_int = 33126; // 0x1ca PushI
	var_222_bool = var_55_string == var_221_int; // 0x1cb Eq
	if(var_222_bool == 0) goto Label_481; // 0x1cc JumpB
	var_223_string = ""; // 0x1cd PushV
	var_223_string = "Neutral"; // 0x1ce MovS
	func_207(var_56_bool, var_223_string); // 0x1cf NEW_2
	var_224_int = 531739; // 0x1d1 PushI
	SetMessage(var_224_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_225_int = 531740; // 0x1d6 PushI
	var_226_int = 33128; // 0x1d7 PushI
	var_227_int = 33127; // 0x1d8 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1d9 TObjFunc
	var_228_int = 531746; // 0x1db PushI
	var_229_int = 33128; // 0x1dc PushI
	var_230_int = 33133; // 0x1dd PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_231_int = 33128; // 0x1e1 PushI
	var_232_bool = var_55_string == var_231_int; // 0x1e2 Eq
	if(var_232_bool == 0) goto Label_504; // 0x1e3 JumpB
	var_233_string = ""; // 0x1e4 PushV
	var_233_string = "Neutral"; // 0x1e5 MovS
	func_207(var_56_bool, var_233_string); // 0x1e6 NEW_2
	var_234_int = 531741; // 0x1e8 PushI
	SetMessage(var_234_int); // 0x1e9 TObjFunc
	ClearReplies(); // 0x1eb TObjFunc
	var_235_int = 531742; // 0x1ed PushI
	var_236_int = 33130; // 0x1ee PushI
	var_237_int = 33129; // 0x1ef PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1f0 TObjFunc
	var_238_int = 531745; // 0x1f2 PushI
	var_239_int = -1; // 0x1f3 PushI
	var_240_int = 33132; // 0x1f4 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_241_int = 33130; // 0x1f8 PushI
	var_242_bool = var_55_string == var_241_int; // 0x1f9 Eq
	if(var_242_bool == 0) goto Label_527; // 0x1fa JumpB
	var_243_string = ""; // 0x1fb PushV
	var_243_string = "Distrust"; // 0x1fc MovS
	func_207(var_56_bool, var_243_string); // 0x1fd NEW_2
	var_244_int = 531743; // 0x1ff PushI
	SetMessage(var_244_int); // 0x200 TObjFunc
	ClearReplies(); // 0x202 TObjFunc
	var_245_int = 531744; // 0x204 PushI
	var_246_int = -1; // 0x205 PushI
	var_247_int = 33131; // 0x206 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x207 TObjFunc
	var_248_int = 532944; // 0x209 PushI
	var_249_int = -1; // 0x20a PushI
	var_250_int = 34433; // 0x20b PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x20c TObjFunc
	return 0; // 0x20e Return
	
Label_527:
	var_251_int = 33336; // 0x20f PushI
	var_252_bool = var_55_string == var_251_int; // 0x210 Eq
	if(var_252_bool == 0) goto Label_550; // 0x211 JumpB
	var_253_string = ""; // 0x212 PushV
	var_253_string = "Anger"; // 0x213 MovS
	func_207(var_56_bool, var_253_string); // 0x214 NEW_2
	var_254_int = 531932; // 0x216 PushI
	SetMessage(var_254_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_255_int = 532961; // 0x21b PushI
	var_256_int = 34454; // 0x21c PushI
	var_257_int = 34453; // 0x21d PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x21e TObjFunc
	var_258_int = 532963; // 0x220 PushI
	var_259_int = 34456; // 0x221 PushI
	var_260_int = 34455; // 0x222 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x223 TObjFunc
	return 0; // 0x225 Return
	
Label_550:
	var_261_int = 34456; // 0x226 PushI
	var_262_bool = var_55_string == var_261_int; // 0x227 Eq
	if(var_262_bool == 0) goto Label_573; // 0x228 JumpB
	var_263_string = ""; // 0x229 PushV
	var_263_string = "Neutral"; // 0x22a MovS
	func_207(var_56_bool, var_263_string); // 0x22b NEW_2
	var_264_int = 532964; // 0x22d PushI
	SetMessage(var_264_int); // 0x22e TObjFunc
	ClearReplies(); // 0x230 TObjFunc
	var_265_int = 532965; // 0x232 PushI
	var_266_int = 34454; // 0x233 PushI
	var_267_int = 34457; // 0x234 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x235 TObjFunc
	var_268_int = 532966; // 0x237 PushI
	var_269_int = 34454; // 0x238 PushI
	var_270_int = 34459; // 0x239 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x23a TObjFunc
	return 0; // 0x23c Return
	
Label_573:
	var_271_int = 34454; // 0x23d PushI
	var_272_bool = var_55_string == var_271_int; // 0x23e Eq
	if(var_272_bool == 0) goto Label_596; // 0x23f JumpB
	var_273_string = ""; // 0x240 PushV
	var_273_string = "Neutral"; // 0x241 MovS
	func_207(var_56_bool, var_273_string); // 0x242 NEW_2
	var_274_int = 532962; // 0x244 PushI
	SetMessage(var_274_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_275_int = 531933; // 0x249 PushI
	var_276_int = 33338; // 0x24a PushI
	var_277_int = 33337; // 0x24b PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x24c TObjFunc
	var_278_int = 532967; // 0x24e PushI
	var_279_int = 34462; // 0x24f PushI
	var_280_int = 34461; // 0x250 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_281_int = 34462; // 0x254 PushI
	var_282_bool = var_55_string == var_281_int; // 0x255 Eq
	if(var_282_bool == 0) goto Label_619; // 0x256 JumpB
	var_283_string = ""; // 0x257 PushV
	var_283_string = "Neutral"; // 0x258 MovS
	func_207(var_56_bool, var_283_string); // 0x259 NEW_2
	var_284_int = 532968; // 0x25b PushI
	SetMessage(var_284_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_285_int = 532969; // 0x260 PushI
	var_286_int = 33338; // 0x261 PushI
	var_287_int = 34463; // 0x262 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x263 TObjFunc
	var_288_int = 532970; // 0x265 PushI
	var_289_int = 33340; // 0x266 PushI
	var_290_int = 34464; // 0x267 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_291_int = 33338; // 0x26b PushI
	var_292_bool = var_55_string == var_291_int; // 0x26c Eq
	if(var_292_bool == 0) goto Label_642; // 0x26d JumpB
	var_293_string = ""; // 0x26e PushV
	var_293_string = "Repentance"; // 0x26f MovS
	func_207(var_56_bool, var_293_string); // 0x270 NEW_2
	var_294_int = 531934; // 0x272 PushI
	SetMessage(var_294_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_295_int = 531935; // 0x277 PushI
	var_296_int = 33340; // 0x278 PushI
	var_297_int = 33339; // 0x279 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x27a TObjFunc
	var_298_int = 532971; // 0x27c PushI
	var_299_int = 33340; // 0x27d PushI
	var_300_int = 34467; // 0x27e PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_301_int = 33340; // 0x282 PushI
	var_302_bool = var_55_string == var_301_int; // 0x283 Eq
	if(var_302_bool == 0) goto Label_665; // 0x284 JumpB
	var_303_string = ""; // 0x285 PushV
	var_303_string = "Neutral"; // 0x286 MovS
	func_207(var_56_bool, var_303_string); // 0x287 NEW_2
	var_304_int = 531936; // 0x289 PushI
	SetMessage(var_304_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_305_int = 531937; // 0x28e PushI
	var_306_int = 33342; // 0x28f PushI
	var_307_int = 33341; // 0x290 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x291 TObjFunc
	var_308_int = 532972; // 0x293 PushI
	var_309_int = 33342; // 0x294 PushI
	var_310_int = 34469; // 0x295 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x296 TObjFunc
	return 0; // 0x298 Return
	
Label_665:
	var_311_int = 33342; // 0x299 PushI
	var_312_bool = var_55_string == var_311_int; // 0x29a Eq
	if(var_312_bool == 0) goto Label_688; // 0x29b JumpB
	var_313_string = ""; // 0x29c PushV
	var_313_string = "Neutral"; // 0x29d MovS
	func_207(var_56_bool, var_313_string); // 0x29e NEW_2
	var_314_int = 531938; // 0x2a0 PushI
	SetMessage(var_314_int); // 0x2a1 TObjFunc
	ClearReplies(); // 0x2a3 TObjFunc
	var_315_int = 531939; // 0x2a5 PushI
	var_316_int = -1; // 0x2a6 PushI
	var_317_int = 33343; // 0x2a7 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x2a8 TObjFunc
	var_318_int = 533484; // 0x2aa PushI
	var_319_int = -1; // 0x2ab PushI
	var_320_int = 35010; // 0x2ac PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x2ad TObjFunc
	return 0; // 0x2af Return
	
Label_688:
	var_321_int = 33083; // 0x2b0 PushI
	var_322_bool = var_55_string == var_321_int; // 0x2b1 Eq
	if(var_322_bool == 0) goto Label_706; // 0x2b2 JumpB
	var_323_string = ""; // 0x2b3 PushV
	var_323_string = "Neutral"; // 0x2b4 MovS
	func_207(var_56_bool, var_323_string); // 0x2b5 NEW_2
	var_324_int = 531699; // 0x2b7 PushI
	SetMessage(var_324_int); // 0x2b8 TObjFunc
	ClearReplies(); // 0x2ba TObjFunc
	var_325_int = 531700; // 0x2bc PushI
	var_326_int = -1; // 0x2bd PushI
	var_327_int = 33084; // 0x2be PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x2bf TObjFunc
	return 0; // 0x2c1 Return
	
Label_706:
	var_3_string = 1; // 0x2c2 TMovB
	var_328_bool = 0; // 0x2c3 PushV
	func_7411(var_328_bool); // 0x2c4 NEW_2
	if(var_328_bool == 0) goto Label_714; // 0x2c6 JumpB
	lshStopAnimation(); // 0x2c7 Func
	goto Label_716; // 0x2c9 Jump
	
Label_716:
	return 0; // 0x2cc Return
	
Label_714:
	StopAnimation(); // 0x2ca Func
	
Label_718:
	return 0; // 0x2ce Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x376 PushI
	if(var_57_int == 0) goto Label_977; // 0x377 JumpB
	func_7300(); // 0x379 NEW_2
	var_59_int = 36960; // 0x37b PushI
	var_60_bool = var_55_string == var_59_int; // 0x37c Eq
	if(var_60_bool == 0) goto Label_919; // 0x37d JumpB
	var_61_string = ""; // 0x37e PushV
	var_61_string = "Neutral"; // 0x37f MovS
	func_863(var_56_bool, var_61_string); // 0x380 NEW_2
	var_78_int = 535284; // 0x382 PushI
	SetMessage(var_78_int); // 0x383 TObjFunc
	ClearReplies(); // 0x385 TObjFunc
	var_79_int = 535285; // 0x387 PushI
	var_80_int = 36962; // 0x388 PushI
	var_81_int = 36961; // 0x389 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x38a TObjFunc
	var_82_int = 535292; // 0x38c PushI
	var_83_int = -1; // 0x38d PushI
	var_84_int = 36968; // 0x38e PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x38f TObjFunc
	var_85_int = 535293; // 0x391 PushI
	var_86_int = -1; // 0x392 PushI
	var_87_int = 36969; // 0x393 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_88_int = 36962; // 0x397 PushI
	var_89_bool = var_55_string == var_88_int; // 0x398 Eq
	if(var_89_bool == 0) goto Label_942; // 0x399 JumpB
	var_90_string = ""; // 0x39a PushV
	var_90_string = "Neutral"; // 0x39b MovS
	func_863(var_56_bool, var_90_string); // 0x39c NEW_2
	var_91_int = 535286; // 0x39e PushI
	SetMessage(var_91_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_92_int = 535287; // 0x3a3 PushI
	var_93_int = 36964; // 0x3a4 PushI
	var_94_int = 36963; // 0x3a5 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x3a6 TObjFunc
	var_95_int = 535291; // 0x3a8 PushI
	var_96_int = -1; // 0x3a9 PushI
	var_97_int = 36967; // 0x3aa PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x3ab TObjFunc
	return 0; // 0x3ad Return
	
Label_942:
	var_98_int = 36964; // 0x3ae PushI
	var_99_bool = var_55_string == var_98_int; // 0x3af Eq
	if(var_99_bool == 0) goto Label_965; // 0x3b0 JumpB
	var_100_string = ""; // 0x3b1 PushV
	var_100_string = "Neutral"; // 0x3b2 MovS
	func_863(var_56_bool, var_100_string); // 0x3b3 NEW_2
	var_101_int = 535288; // 0x3b5 PushI
	SetMessage(var_101_int); // 0x3b6 TObjFunc
	ClearReplies(); // 0x3b8 TObjFunc
	var_102_int = 535289; // 0x3ba PushI
	var_103_int = -1; // 0x3bb PushI
	var_104_int = 36965; // 0x3bc PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x3bd TObjFunc
	var_105_int = 535290; // 0x3bf PushI
	var_106_int = -1; // 0x3c0 PushI
	var_107_int = 36966; // 0x3c1 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x3c2 TObjFunc
	return 0; // 0x3c4 Return
	
Label_965:
	var_3_string = 1; // 0x3c5 TMovB
	var_108_bool = 0; // 0x3c6 PushV
	func_7411(var_108_bool); // 0x3c7 NEW_2
	if(var_108_bool == 0) goto Label_973; // 0x3c9 JumpB
	lshStopAnimation(); // 0x3ca Func
	goto Label_975; // 0x3cc Jump
	
Label_975:
	return 0; // 0x3cf Return
	
Label_973:
	StopAnimation(); // 0x3cd Func
	
Label_977:
	return 0; // 0x3d1 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x474 PushI
	if(var_57_int == 0) goto Label_1180; // 0x475 JumpB
	func_7300(); // 0x477 NEW_2
	var_59_int = 38000; // 0x479 PushI
	var_60_bool = var_55_string == var_59_int; // 0x47a Eq
	if(var_60_bool == 0) goto Label_1168; // 0x47b JumpB
	var_61_string = ""; // 0x47c PushV
	var_61_string = "Neutral"; // 0x47d MovS
	func_1117(var_56_bool, var_61_string); // 0x47e NEW_2
	var_78_int = 536225; // 0x480 PushI
	SetMessage(var_78_int); // 0x481 TObjFunc
	ClearReplies(); // 0x483 TObjFunc
	var_79_int = 536226; // 0x485 PushI
	var_80_int = -1; // 0x486 PushI
	var_81_int = 38001; // 0x487 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x488 TObjFunc
	var_82_int = 536227; // 0x48a PushI
	var_83_int = -1; // 0x48b PushI
	var_84_int = 38002; // 0x48c PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x48d TObjFunc
	return 0; // 0x48f Return
	
Label_1168:
	var_3_string = 1; // 0x490 TMovB
	var_85_bool = 0; // 0x491 PushV
	func_7411(var_85_bool); // 0x492 NEW_2
	if(var_85_bool == 0) goto Label_1176; // 0x494 JumpB
	lshStopAnimation(); // 0x495 Func
	goto Label_1178; // 0x497 Jump
	
Label_1178:
	return 0; // 0x49a Return
	
Label_1176:
	StopAnimation(); // 0x498 Func
	
Label_1180:
	return 0; // 0x49c Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x549 PushI
	if(var_57_int == 0) goto Label_1477; // 0x54a JumpB
	func_7300(); // 0x54c NEW_2
	var_59_int = 467; // 0x54e PushI
	var_60_bool = var_55_string == var_59_int; // 0x54f Eq
	if(var_60_bool == 0) goto Label_1391; // 0x550 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x551 PushV
	var_61_object = var_1_object; // 0x552 MovT
	var_62_object = var_0_object; // 0x553 MovT
	func_7864(); // 0x554 NEW_2
	var_65_string = ""; // 0x556 PushV
	var_65_string = "Neutral"; // 0x557 MovS
	func_1330(var_56_bool, var_65_string); // 0x558 NEW_2
	var_82_int = 500401; // 0x55a PushI
	SetMessage(var_82_int); // 0x55b TObjFunc
	ClearReplies(); // 0x55d TObjFunc
	var_83_int = 500402; // 0x55f PushI
	var_84_int = 471; // 0x560 PushI
	var_85_int = 468; // 0x561 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x562 TObjFunc
	var_86_int = 500403; // 0x564 PushI
	var_87_int = 472; // 0x565 PushI
	var_88_int = 469; // 0x566 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x567 TObjFunc
	var_89_int = 500404; // 0x569 PushI
	var_90_int = -1; // 0x56a PushI
	var_91_int = 470; // 0x56b PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x56c TObjFunc
	return 0; // 0x56e Return
	
Label_1391:
	var_92_int = 472; // 0x56f PushI
	var_93_bool = var_55_string == var_92_int; // 0x570 Eq
	if(var_93_bool == 0) goto Label_1414; // 0x571 JumpB
	var_94_string = ""; // 0x572 PushV
	var_94_string = "Neutral"; // 0x573 MovS
	func_1330(var_56_bool, var_94_string); // 0x574 NEW_2
	var_95_int = 500406; // 0x576 PushI
	SetMessage(var_95_int); // 0x577 TObjFunc
	ClearReplies(); // 0x579 TObjFunc
	var_96_int = 500413; // 0x57b PushI
	var_97_int = 475; // 0x57c PushI
	var_98_int = 480; // 0x57d PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x57e TObjFunc
	var_99_int = 500414; // 0x580 PushI
	var_100_int = -1; // 0x581 PushI
	var_101_int = 481; // 0x582 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x583 TObjFunc
	return 0; // 0x585 Return
	
Label_1414:
	var_102_int = 471; // 0x586 PushI
	var_103_bool = var_55_string == var_102_int; // 0x587 Eq
	if(var_103_bool == 0) goto Label_1437; // 0x588 JumpB
	var_104_string = ""; // 0x589 PushV
	var_104_string = "Neutral"; // 0x58a MovS
	func_1330(var_56_bool, var_104_string); // 0x58b NEW_2
	var_105_int = 500405; // 0x58d PushI
	SetMessage(var_105_int); // 0x58e TObjFunc
	ClearReplies(); // 0x590 TObjFunc
	var_106_int = 500407; // 0x592 PushI
	var_107_int = 475; // 0x593 PushI
	var_108_int = 473; // 0x594 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x595 TObjFunc
	var_109_int = 500408; // 0x597 PushI
	var_110_int = 475; // 0x598 PushI
	var_111_int = 474; // 0x599 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x59a TObjFunc
	return 0; // 0x59c Return
	
Label_1437:
	var_112_int = 475; // 0x59d PushI
	var_113_bool = var_55_string == var_112_int; // 0x59e Eq
	if(var_113_bool == 0) goto Label_1465; // 0x59f JumpB
	var_114_string = ""; // 0x5a0 PushV
	var_114_string = "Neutral"; // 0x5a1 MovS
	func_1330(var_56_bool, var_114_string); // 0x5a2 NEW_2
	var_115_int = 500409; // 0x5a4 PushI
	SetMessage(var_115_int); // 0x5a5 TObjFunc
	ClearReplies(); // 0x5a7 TObjFunc
	var_116_int = 500410; // 0x5a9 PushI
	var_117_int = -1; // 0x5aa PushI
	var_118_int = 477; // 0x5ab PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x5ac TObjFunc
	var_119_int = 500411; // 0x5ae PushI
	var_120_int = -1; // 0x5af PushI
	var_121_int = 478; // 0x5b0 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x5b1 TObjFunc
	var_122_int = 500412; // 0x5b3 PushI
	var_123_int = -1; // 0x5b4 PushI
	var_124_int = 479; // 0x5b5 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x5b6 TObjFunc
	return 0; // 0x5b8 Return
	
Label_1465:
	var_3_string = 1; // 0x5b9 TMovB
	var_125_bool = 0; // 0x5ba PushV
	func_7411(var_125_bool); // 0x5bb NEW_2
	if(var_125_bool == 0) goto Label_1473; // 0x5bd JumpB
	lshStopAnimation(); // 0x5be Func
	goto Label_1475; // 0x5c0 Jump
	
Label_1475:
	return 0; // 0x5c3 Return
	
Label_1473:
	StopAnimation(); // 0x5c1 Func
	
Label_1477:
	return 0; // 0x5c5 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x6de PushI
	if(var_57_int == 0) goto Label_2297; // 0x6df JumpB
	func_7300(); // 0x6e1 NEW_2
	var_59_int = 13245; // 0x6e3 PushI
	var_60_bool = var_56_bool == var_59_int; // 0x6e4 Eq
	if(var_60_bool == 0) goto Label_1771; // 0x6e5 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x6e6 PushV
	var_61_object = var_1_object; // 0x6e7 MovT
	var_62_object = var_0_object; // 0x6e8 MovT
	func_7858(); // 0x6e9 NEW_2
	
Label_1771:
	var_65_int = 13253; // 0x6eb PushI
	var_66_bool = var_56_bool == var_65_int; // 0x6ec Eq
	if(var_66_bool == 0) goto Label_1784; // 0x6ed JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x6ee PushV
	var_67_object = var_1_object; // 0x6ef MovT
	var_68_object = var_0_object; // 0x6f0 MovT
	func_7900(); // 0x6f1 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x6f3 PushV
	var_118_object = var_1_object; // 0x6f4 MovT
	var_119_object = var_0_object; // 0x6f5 MovT
	func_7512(); // 0x6f6 NEW_2
	
Label_1784:
	var_122_int = 13885; // 0x6f8 PushI
	var_123_bool = var_56_bool == var_122_int; // 0x6f9 Eq
	if(var_123_bool == 0) goto Label_1797; // 0x6fa JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x6fb PushV
	var_124_object = var_1_object; // 0x6fc MovT
	var_125_object = var_0_object; // 0x6fd MovT
	func_7900(); // 0x6fe NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x700 PushV
	var_126_object = var_1_object; // 0x701 MovT
	var_127_object = var_0_object; // 0x702 MovT
	func_7512(); // 0x703 NEW_2
	
Label_1797:
	var_128_int = 13673; // 0x705 PushI
	var_129_bool = var_56_bool == var_128_int; // 0x706 Eq
	if(var_129_bool == 0) goto Label_1805; // 0x707 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x708 PushV
	var_130_object = var_1_object; // 0x709 MovT
	var_131_object = var_0_object; // 0x70a MovT
	func_7852(); // 0x70b NEW_2
	
Label_1805:
	var_134_int = 13683; // 0x70d PushI
	var_135_bool = var_56_bool == var_134_int; // 0x70e Eq
	if(var_135_bool == 0) goto Label_1813; // 0x70f JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x710 PushV
	var_136_object = var_1_object; // 0x711 MovT
	var_137_object = var_0_object; // 0x712 MovT
	func_8071(); // 0x713 NEW_2
	
Label_1813:
	var_154_int = 11787; // 0x715 PushI
	var_155_bool = var_55_string == var_154_int; // 0x716 Eq
	if(var_155_bool == 0) goto Label_1954; // 0x717 JumpB
	var_156_bool = 0; // 0x718 PushV
	var_156_bool = 0; // 0x719 MovB
	var_157_bool = 0; var_158_object = Obj(); // 0x71a PushV
	var_158_object = var_1_object; // 0x71b MovT
	func_8481(var_158_object); // 0x71c NEW_2
	var_165_bool = var_157_bool == 0; // 0x71e Not
	if(var_165_bool == 0) goto Label_1830; // 0x71f JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0x720 PushV
	var_167_object = var_1_object; // 0x721 MovT
	func_8565(var_167_object); // 0x722 NEW_2
	if(var_166_bool == 0) goto Label_1830; // 0x724 JumpB
	var_156_bool = 1; // 0x725 MovB
	
Label_1830:
	if(var_156_bool == 0) goto Label_1856; // 0x726 JumpB
	var_172_object = Obj(); var_173_object = Obj(); // 0x727 PushV
	var_172_object = var_1_object; // 0x728 MovT
	var_173_object = var_0_object; // 0x729 MovT
	func_7894(); // 0x72a NEW_2
	var_176_object = Obj(); var_177_object = Obj(); // 0x72c PushV
	var_176_object = var_1_object; // 0x72d MovT
	var_177_object = var_0_object; // 0x72e MovT
	func_8090(); // 0x72f NEW_2
	var_180_string = ""; // 0x731 PushV
	var_180_string = "Neutral"; // 0x732 MovS
	func_1735(var_56_bool, var_180_string); // 0x733 NEW_2
	var_197_int = 510676; // 0x735 PushI
	SetMessage(var_197_int); // 0x736 TObjFunc
	ClearReplies(); // 0x738 TObjFunc
	var_198_int = 510688; // 0x73a PushI
	var_199_int = 11789; // 0x73b PushI
	var_200_int = 11801; // 0x73c PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x73d TObjFunc
	return 0; // 0x73f Return
	
Label_1856:
	var_201_object = Obj(); var_202_object = Obj(); // 0x740 PushV
	var_201_object = var_1_object; // 0x741 MovT
	var_202_object = var_0_object; // 0x742 MovT
	func_8090(); // 0x743 NEW_2
	var_203_string = ""; // 0x745 PushV
	var_203_string = "Neutral"; // 0x746 MovS
	func_1735(var_56_bool, var_203_string); // 0x747 NEW_2
	var_204_int = 512502; // 0x749 PushI
	SetMessage(var_204_int); // 0x74a TObjFunc
	ClearReplies(); // 0x74c TObjFunc
	var_205_bool = 0; // 0x74e PushV
	var_205_bool = 0; // 0x74f MovB
	var_206_bool = 0; var_207_object = Obj(); // 0x750 PushV
	var_207_object = var_1_object; // 0x751 MovT
	func_8481(var_207_object); // 0x752 NEW_2
	if(var_206_bool == 0) goto Label_1883; // 0x754 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x755 PushV
	var_209_object = var_1_object; // 0x756 MovT
	func_8493(var_209_object); // 0x757 NEW_2
	if(var_208_bool == 0) goto Label_1883; // 0x759 JumpB
	var_205_bool = 1; // 0x75a MovB
	
Label_1883:
	if(var_205_bool == 0) goto Label_1889; // 0x75b JumpB
	var_214_int = 512027; // 0x75c PushI
	var_215_int = 13248; // 0x75d PushI
	var_216_int = 13245; // 0x75e PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x75f TObjFunc
	
Label_1889:
	var_217_bool = 0; // 0x761 PushV
	var_217_bool = 0; // 0x762 MovB
	var_218_bool = 0; // 0x763 PushV
	var_218_bool = 0; // 0x764 MovB
	var_219_bool = 0; // 0x765 PushV
	var_219_bool = 0; // 0x766 MovB
	var_220_bool = 0; // 0x767 PushV
	var_220_bool = 0; // 0x768 MovB
	var_221_bool = 0; // 0x769 PushV
	var_221_bool = 0; // 0x76a MovB
	var_222_bool = 0; var_223_object = Obj(); // 0x76b PushV
	var_223_object = var_1_object; // 0x76c MovT
	func_8445(var_223_object); // 0x76d NEW_2
	if(var_222_bool == 0) goto Label_1910; // 0x76f JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x770 PushV
	var_229_object = var_1_object; // 0x771 MovT
	func_8457(var_229_object); // 0x772 NEW_2
	if(var_228_bool == 0) goto Label_1910; // 0x774 JumpB
	var_221_bool = 1; // 0x775 MovB
	
Label_1910:
	if(var_221_bool == 0) goto Label_1918; // 0x776 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x777 PushV
	var_235_object = var_1_object; // 0x778 MovT
	func_8421(var_235_object); // 0x779 NEW_2
	var_240_bool = var_234_bool == 0; // 0x77b Not
	if(var_240_bool == 0) goto Label_1918; // 0x77c JumpB
	var_220_bool = 1; // 0x77d MovB
	
Label_1918:
	if(var_220_bool == 0) goto Label_1926; // 0x77e JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x77f PushV
	var_242_object = var_1_object; // 0x780 MovT
	func_8433(var_242_object); // 0x781 NEW_2
	var_247_bool = var_241_bool == 0; // 0x783 Not
	if(var_247_bool == 0) goto Label_1926; // 0x784 JumpB
	var_219_bool = 1; // 0x785 MovB
	
Label_1926:
	if(var_219_bool == 0) goto Label_1934; // 0x786 JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x787 PushV
	var_249_object = var_1_object; // 0x788 MovT
	func_8469(var_249_object); // 0x789 NEW_2
	var_254_bool = var_248_bool == 0; // 0x78b Not
	if(var_254_bool == 0) goto Label_1934; // 0x78c JumpB
	var_218_bool = 1; // 0x78d MovB
	
Label_1934:
	if(var_218_bool == 0) goto Label_1942; // 0x78e JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x78f PushV
	var_256_object = var_1_object; // 0x790 MovT
	func_8409(var_256_object); // 0x791 NEW_2
	var_261_bool = var_255_bool == 0; // 0x793 Not
	if(var_261_bool == 0) goto Label_1942; // 0x794 JumpB
	var_217_bool = 1; // 0x795 MovB
	
Label_1942:
	if(var_217_bool == 0) goto Label_1948; // 0x796 JumpB
	var_262_int = 512503; // 0x797 PushI
	var_263_int = 13674; // 0x798 PushI
	var_264_int = 13673; // 0x799 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x79a TObjFunc
	
Label_1948:
	var_265_int = 512514; // 0x79c PushI
	var_266_int = -1; // 0x79d PushI
	var_267_int = 13684; // 0x79e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x79f TObjFunc
	return 0; // 0x7a1 Return
	
Label_1954:
	var_268_int = 13674; // 0x7a2 PushI
	var_269_bool = var_55_string == var_268_int; // 0x7a3 Eq
	if(var_269_bool == 0) goto Label_1972; // 0x7a4 JumpB
	var_270_string = ""; // 0x7a5 PushV
	var_270_string = "Neutral"; // 0x7a6 MovS
	func_1735(var_56_bool, var_270_string); // 0x7a7 NEW_2
	var_271_int = 512504; // 0x7a9 PushI
	SetMessage(var_271_int); // 0x7aa TObjFunc
	ClearReplies(); // 0x7ac TObjFunc
	var_272_int = 512505; // 0x7ae PushI
	var_273_int = 13676; // 0x7af PushI
	var_274_int = 13675; // 0x7b0 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x7b1 TObjFunc
	return 0; // 0x7b3 Return
	
Label_1972:
	var_275_int = 13676; // 0x7b4 PushI
	var_276_bool = var_55_string == var_275_int; // 0x7b5 Eq
	if(var_276_bool == 0) goto Label_1990; // 0x7b6 JumpB
	var_277_string = ""; // 0x7b7 PushV
	var_277_string = "Neutral"; // 0x7b8 MovS
	func_1735(var_56_bool, var_277_string); // 0x7b9 NEW_2
	var_278_int = 512506; // 0x7bb PushI
	SetMessage(var_278_int); // 0x7bc TObjFunc
	ClearReplies(); // 0x7be TObjFunc
	var_279_int = 512507; // 0x7c0 PushI
	var_280_int = 13678; // 0x7c1 PushI
	var_281_int = 13677; // 0x7c2 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x7c3 TObjFunc
	return 0; // 0x7c5 Return
	
Label_1990:
	var_282_int = 13678; // 0x7c6 PushI
	var_283_bool = var_55_string == var_282_int; // 0x7c7 Eq
	if(var_283_bool == 0) goto Label_2008; // 0x7c8 JumpB
	var_284_string = ""; // 0x7c9 PushV
	var_284_string = "Anger"; // 0x7ca MovS
	func_1735(var_56_bool, var_284_string); // 0x7cb NEW_2
	var_285_int = 512508; // 0x7cd PushI
	SetMessage(var_285_int); // 0x7ce TObjFunc
	ClearReplies(); // 0x7d0 TObjFunc
	var_286_int = 512509; // 0x7d2 PushI
	var_287_int = 13680; // 0x7d3 PushI
	var_288_int = 13679; // 0x7d4 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x7d5 TObjFunc
	return 0; // 0x7d7 Return
	
Label_2008:
	var_289_int = 13680; // 0x7d8 PushI
	var_290_bool = var_55_string == var_289_int; // 0x7d9 Eq
	if(var_290_bool == 0) goto Label_2026; // 0x7da JumpB
	var_291_string = ""; // 0x7db PushV
	var_291_string = "Anger"; // 0x7dc MovS
	func_1735(var_56_bool, var_291_string); // 0x7dd NEW_2
	var_292_int = 512510; // 0x7df PushI
	SetMessage(var_292_int); // 0x7e0 TObjFunc
	ClearReplies(); // 0x7e2 TObjFunc
	var_293_int = 512511; // 0x7e4 PushI
	var_294_int = 13682; // 0x7e5 PushI
	var_295_int = 13681; // 0x7e6 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x7e7 TObjFunc
	return 0; // 0x7e9 Return
	
Label_2026:
	var_296_int = 13682; // 0x7ea PushI
	var_297_bool = var_55_string == var_296_int; // 0x7eb Eq
	if(var_297_bool == 0) goto Label_2044; // 0x7ec JumpB
	var_298_string = ""; // 0x7ed PushV
	var_298_string = "Neutral"; // 0x7ee MovS
	func_1735(var_56_bool, var_298_string); // 0x7ef NEW_2
	var_299_int = 512512; // 0x7f1 PushI
	SetMessage(var_299_int); // 0x7f2 TObjFunc
	ClearReplies(); // 0x7f4 TObjFunc
	var_300_int = 512513; // 0x7f6 PushI
	var_301_int = -1; // 0x7f7 PushI
	var_302_int = 13683; // 0x7f8 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x7f9 TObjFunc
	return 0; // 0x7fb Return
	
Label_2044:
	var_303_int = 13248; // 0x7fc PushI
	var_304_bool = var_55_string == var_303_int; // 0x7fd Eq
	if(var_304_bool == 0) goto Label_2062; // 0x7fe JumpB
	var_305_string = ""; // 0x7ff PushV
	var_305_string = "Anger"; // 0x800 MovS
	func_1735(var_56_bool, var_305_string); // 0x801 NEW_2
	var_306_int = 512030; // 0x803 PushI
	SetMessage(var_306_int); // 0x804 TObjFunc
	ClearReplies(); // 0x806 TObjFunc
	var_307_int = 512031; // 0x808 PushI
	var_308_int = 13250; // 0x809 PushI
	var_309_int = 13249; // 0x80a PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x80b TObjFunc
	return 0; // 0x80d Return
	
Label_2062:
	var_310_int = 3597; // 0x80e PushI
	var_311_bool = var_55_string == var_310_int; // 0x80f Eq
	if(var_311_bool == 0) goto Label_2065; // 0x810 JumpB
	
Label_2065:
	var_312_int = 3817; // 0x811 PushI
	var_313_bool = var_55_string == var_312_int; // 0x812 Eq
	if(var_313_bool == 0) goto Label_2088; // 0x813 JumpB
	var_314_string = ""; // 0x814 PushV
	var_314_string = "Neutral"; // 0x815 MovS
	func_1735(var_56_bool, var_314_string); // 0x816 NEW_2
	var_315_int = 503536; // 0x818 PushI
	SetMessage(var_315_int); // 0x819 TObjFunc
	ClearReplies(); // 0x81b TObjFunc
	var_316_int = 503537; // 0x81d PushI
	var_317_int = 3604; // 0x81e PushI
	var_318_int = 3818; // 0x81f PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x820 TObjFunc
	var_319_int = 503538; // 0x822 PushI
	var_320_int = 3599; // 0x823 PushI
	var_321_int = 3819; // 0x824 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x825 TObjFunc
	return 0; // 0x827 Return
	
Label_2088:
	var_322_int = 3599; // 0x828 PushI
	var_323_bool = var_55_string == var_322_int; // 0x829 Eq
	if(var_323_bool == 0) goto Label_2111; // 0x82a JumpB
	var_324_string = ""; // 0x82b PushV
	var_324_string = "Patronage"; // 0x82c MovS
	func_1735(var_56_bool, var_324_string); // 0x82d NEW_2
	var_325_int = 503323; // 0x82f PushI
	SetMessage(var_325_int); // 0x830 TObjFunc
	ClearReplies(); // 0x832 TObjFunc
	var_326_int = 503324; // 0x834 PushI
	var_327_int = 3604; // 0x835 PushI
	var_328_int = 3600; // 0x836 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x837 TObjFunc
	var_329_int = 503325; // 0x839 PushI
	var_330_int = 3604; // 0x83a PushI
	var_331_int = 3601; // 0x83b PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x83c TObjFunc
	return 0; // 0x83e Return
	
Label_2111:
	var_332_int = 3604; // 0x83f PushI
	var_333_bool = var_55_string == var_332_int; // 0x840 Eq
	if(var_333_bool == 0) goto Label_2129; // 0x841 JumpB
	var_334_string = ""; // 0x842 PushV
	var_334_string = "Neutral"; // 0x843 MovS
	func_1735(var_56_bool, var_334_string); // 0x844 NEW_2
	var_335_int = 503327; // 0x846 PushI
	SetMessage(var_335_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_336_int = 503330; // 0x84b PushI
	var_337_int = 3815; // 0x84c PushI
	var_338_int = 3607; // 0x84d PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x84e TObjFunc
	return 0; // 0x850 Return
	
Label_2129:
	var_339_int = 13250; // 0x851 PushI
	var_340_bool = var_55_string == var_339_int; // 0x852 Eq
	if(var_340_bool == 0) goto Label_2152; // 0x853 JumpB
	var_341_string = ""; // 0x854 PushV
	var_341_string = "Neutral"; // 0x855 MovS
	func_1735(var_56_bool, var_341_string); // 0x856 NEW_2
	var_342_int = 512032; // 0x858 PushI
	SetMessage(var_342_int); // 0x859 TObjFunc
	ClearReplies(); // 0x85b TObjFunc
	var_343_int = 512033; // 0x85d PushI
	var_344_int = 13252; // 0x85e PushI
	var_345_int = 13251; // 0x85f PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x860 TObjFunc
	var_346_int = 503539; // 0x862 PushI
	var_347_int = 3823; // 0x863 PushI
	var_348_int = 3822; // 0x864 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x865 TObjFunc
	return 0; // 0x867 Return
	
Label_2152:
	var_349_int = 3823; // 0x868 PushI
	var_350_bool = var_55_string == var_349_int; // 0x869 Eq
	if(var_350_bool == 0) goto Label_2175; // 0x86a JumpB
	var_351_string = ""; // 0x86b PushV
	var_351_string = "Anger"; // 0x86c MovS
	func_1735(var_56_bool, var_351_string); // 0x86d NEW_2
	var_352_int = 503540; // 0x86f PushI
	SetMessage(var_352_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_353_int = 503541; // 0x874 PushI
	var_354_int = 13252; // 0x875 PushI
	var_355_int = 3824; // 0x876 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x877 TObjFunc
	var_356_int = 503533; // 0x879 PushI
	var_357_int = 3815; // 0x87a PushI
	var_358_int = 3814; // 0x87b PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x87c TObjFunc
	return 0; // 0x87e Return
	
Label_2175:
	var_359_int = 3815; // 0x87f PushI
	var_360_bool = var_55_string == var_359_int; // 0x880 Eq
	if(var_360_bool == 0) goto Label_2193; // 0x881 JumpB
	var_361_string = ""; // 0x882 PushV
	var_361_string = "Neutral"; // 0x883 MovS
	func_1735(var_56_bool, var_361_string); // 0x884 NEW_2
	var_362_int = 503534; // 0x886 PushI
	SetMessage(var_362_int); // 0x887 TObjFunc
	ClearReplies(); // 0x889 TObjFunc
	var_363_int = 512694; // 0x88b PushI
	var_364_int = -1; // 0x88c PushI
	var_365_int = 13885; // 0x88d PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x88e TObjFunc
	return 0; // 0x890 Return
	
Label_2193:
	var_366_int = 13252; // 0x891 PushI
	var_367_bool = var_55_string == var_366_int; // 0x892 Eq
	if(var_367_bool == 0) goto Label_2211; // 0x893 JumpB
	var_368_string = ""; // 0x894 PushV
	var_368_string = "Anger"; // 0x895 MovS
	func_1735(var_56_bool, var_368_string); // 0x896 NEW_2
	var_369_int = 512034; // 0x898 PushI
	SetMessage(var_369_int); // 0x899 TObjFunc
	ClearReplies(); // 0x89b TObjFunc
	var_370_int = 512035; // 0x89d PushI
	var_371_int = -1; // 0x89e PushI
	var_372_int = 13253; // 0x89f PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x8a0 TObjFunc
	return 0; // 0x8a2 Return
	
Label_2211:
	var_373_int = 11789; // 0x8a3 PushI
	var_374_bool = var_55_string == var_373_int; // 0x8a4 Eq
	if(var_374_bool == 0) goto Label_2234; // 0x8a5 JumpB
	var_375_string = ""; // 0x8a6 PushV
	var_375_string = "Distrust"; // 0x8a7 MovS
	func_1735(var_56_bool, var_375_string); // 0x8a8 NEW_2
	var_376_int = 510678; // 0x8aa PushI
	SetMessage(var_376_int); // 0x8ab TObjFunc
	ClearReplies(); // 0x8ad TObjFunc
	var_377_int = 510679; // 0x8af PushI
	var_378_int = 11791; // 0x8b0 PushI
	var_379_int = 11790; // 0x8b1 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x8b2 TObjFunc
	var_380_int = 510687; // 0x8b4 PushI
	var_381_int = -1; // 0x8b5 PushI
	var_382_int = 11800; // 0x8b6 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x8b7 TObjFunc
	return 0; // 0x8b9 Return
	
Label_2234:
	var_383_int = 11791; // 0x8ba PushI
	var_384_bool = var_55_string == var_383_int; // 0x8bb Eq
	if(var_384_bool == 0) goto Label_2262; // 0x8bc JumpB
	var_385_string = ""; // 0x8bd PushV
	var_385_string = "Neutral"; // 0x8be MovS
	func_1735(var_56_bool, var_385_string); // 0x8bf NEW_2
	var_386_int = 510680; // 0x8c1 PushI
	SetMessage(var_386_int); // 0x8c2 TObjFunc
	ClearReplies(); // 0x8c4 TObjFunc
	var_387_int = 510681; // 0x8c6 PushI
	var_388_int = 11793; // 0x8c7 PushI
	var_389_int = 11792; // 0x8c8 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x8c9 TObjFunc
	var_390_int = 510685; // 0x8cb PushI
	var_391_int = 11793; // 0x8cc PushI
	var_392_int = 11796; // 0x8cd PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x8ce TObjFunc
	var_393_int = 510686; // 0x8d0 PushI
	var_394_int = 11793; // 0x8d1 PushI
	var_395_int = 11798; // 0x8d2 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x8d3 TObjFunc
	return 0; // 0x8d5 Return
	
Label_2262:
	var_396_int = 11793; // 0x8d6 PushI
	var_397_bool = var_55_string == var_396_int; // 0x8d7 Eq
	if(var_397_bool == 0) goto Label_2285; // 0x8d8 JumpB
	var_398_string = ""; // 0x8d9 PushV
	var_398_string = "Distrust"; // 0x8da MovS
	func_1735(var_56_bool, var_398_string); // 0x8db NEW_2
	var_399_int = 510682; // 0x8dd PushI
	SetMessage(var_399_int); // 0x8de TObjFunc
	ClearReplies(); // 0x8e0 TObjFunc
	var_400_int = 510683; // 0x8e2 PushI
	var_401_int = -1; // 0x8e3 PushI
	var_402_int = 11794; // 0x8e4 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x8e5 TObjFunc
	var_403_int = 510684; // 0x8e7 PushI
	var_404_int = -1; // 0x8e8 PushI
	var_405_int = 11795; // 0x8e9 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x8ea TObjFunc
	return 0; // 0x8ec Return
	
Label_2285:
	var_3_string = 1; // 0x8ed TMovB
	var_406_bool = 0; // 0x8ee PushV
	func_7411(var_406_bool); // 0x8ef NEW_2
	if(var_406_bool == 0) goto Label_2293; // 0x8f1 JumpB
	lshStopAnimation(); // 0x8f2 Func
	goto Label_2295; // 0x8f4 Jump
	
Label_2295:
	return 0; // 0x8f7 Return
	
Label_2293:
	StopAnimation(); // 0x8f5 Func
	
Label_2297:
	return 0; // 0x8f9 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x9fd PushI
	if(var_57_int == 0) goto Label_3120; // 0x9fe JumpB
	func_7300(); // 0xa00 NEW_2
	var_59_int = 7460; // 0xa02 PushI
	var_60_bool = var_56_bool == var_59_int; // 0xa03 Eq
	if(var_60_bool == 0) goto Label_2575; // 0xa04 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xa05 PushV
	var_61_object = var_1_object; // 0xa06 MovT
	var_62_object = var_0_object; // 0xa07 MovT
	func_7503(); // 0xa08 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0xa0a PushV
	var_88_object = var_1_object; // 0xa0b MovT
	var_89_object = var_0_object; // 0xa0c MovT
	func_7413(); // 0xa0d NEW_2
	
Label_2575:
	var_109_int = 7461; // 0xa0f PushI
	var_110_bool = var_56_bool == var_109_int; // 0xa10 Eq
	if(var_110_bool == 0) goto Label_2588; // 0xa11 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0xa12 PushV
	var_111_object = var_1_object; // 0xa13 MovT
	var_112_object = var_0_object; // 0xa14 MovT
	func_7503(); // 0xa15 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0xa17 PushV
	var_113_object = var_1_object; // 0xa18 MovT
	var_114_object = var_0_object; // 0xa19 MovT
	func_7413(); // 0xa1a NEW_2
	
Label_2588:
	var_115_int = 7465; // 0xa1c PushI
	var_116_bool = var_56_bool == var_115_int; // 0xa1d Eq
	if(var_116_bool == 0) goto Label_2601; // 0xa1e JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0xa1f PushV
	var_117_object = var_1_object; // 0xa20 MovT
	var_118_object = var_0_object; // 0xa21 MovT
	func_7503(); // 0xa22 NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0xa24 PushV
	var_119_object = var_1_object; // 0xa25 MovT
	var_120_object = var_0_object; // 0xa26 MovT
	func_7413(); // 0xa27 NEW_2
	
Label_2601:
	var_121_int = 7466; // 0xa29 PushI
	var_122_bool = var_56_bool == var_121_int; // 0xa2a Eq
	if(var_122_bool == 0) goto Label_2614; // 0xa2b JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0xa2c PushV
	var_123_object = var_1_object; // 0xa2d MovT
	var_124_object = var_0_object; // 0xa2e MovT
	func_7503(); // 0xa2f NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0xa31 PushV
	var_125_object = var_1_object; // 0xa32 MovT
	var_126_object = var_0_object; // 0xa33 MovT
	func_7413(); // 0xa34 NEW_2
	
Label_2614:
	var_127_int = 7487; // 0xa36 PushI
	var_128_bool = var_56_bool == var_127_int; // 0xa37 Eq
	if(var_128_bool == 0) goto Label_2622; // 0xa38 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0xa39 PushV
	var_129_object = var_1_object; // 0xa3a MovT
	var_130_object = var_0_object; // 0xa3b MovT
	func_7490(); // 0xa3c NEW_2
	
Label_2622:
	var_133_int = 7489; // 0xa3e PushI
	var_134_bool = var_55_string == var_133_int; // 0xa3f Eq
	if(var_134_bool == 0) goto Label_2742; // 0xa40 JumpB
	var_135_bool = 0; // 0xa41 PushV
	var_135_bool = 0; // 0xa42 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0xa43 PushV
	var_137_object = var_1_object; // 0xa44 MovT
	func_8195(var_137_object); // 0xa45 NEW_2
	if(var_136_bool == 0) goto Label_2638; // 0xa47 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0xa48 PushV
	var_143_object = var_1_object; // 0xa49 MovT
	func_8231(var_143_object); // 0xa4a NEW_2
	if(var_142_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_135_bool = 1; // 0xa4d MovB
	
Label_2638:
	if(var_135_bool == 0) goto Label_2669; // 0xa4e JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0xa4f PushV
	var_148_object = var_1_object; // 0xa50 MovT
	var_149_object = var_0_object; // 0xa51 MovT
	func_7478(); // 0xa52 NEW_2
	var_152_string = ""; // 0xa54 PushV
	var_152_string = "Neutral"; // 0xa55 MovS
	func_2534(var_56_bool, var_152_string); // 0xa56 NEW_2
	var_169_int = 506797; // 0xa58 PushI
	SetMessage(var_169_int); // 0xa59 TObjFunc
	ClearReplies(); // 0xa5b TObjFunc
	var_170_int = 506810; // 0xa5d PushI
	var_171_int = 7493; // 0xa5e PushI
	var_172_int = 7505; // 0xa5f PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xa60 TObjFunc
	var_173_int = 506798; // 0xa62 PushI
	var_174_int = 7491; // 0xa63 PushI
	var_175_int = 7490; // 0xa64 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xa65 TObjFunc
	var_176_int = 506809; // 0xa67 PushI
	var_177_int = 7491; // 0xa68 PushI
	var_178_int = 7503; // 0xa69 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xa6a TObjFunc
	return 0; // 0xa6c Return
	
Label_2669:
	var_179_bool = 0; // 0xa6d PushV
	var_179_bool = 0; // 0xa6e MovB
	var_180_bool = 0; var_181_object = Obj(); // 0xa6f PushV
	var_181_object = var_1_object; // 0xa70 MovT
	func_8207(var_181_object); // 0xa71 NEW_2
	if(var_180_bool == 0) goto Label_2682; // 0xa73 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0xa74 PushV
	var_187_object = var_1_object; // 0xa75 MovT
	func_8243(var_187_object); // 0xa76 NEW_2
	if(var_186_bool == 0) goto Label_2682; // 0xa78 JumpB
	var_179_bool = 1; // 0xa79 MovB
	
Label_2682:
	if(var_179_bool == 0) goto Label_2708; // 0xa7a JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0xa7b PushV
	var_192_object = var_1_object; // 0xa7c MovT
	var_193_object = var_0_object; // 0xa7d MovT
	func_7484(); // 0xa7e NEW_2
	var_196_string = ""; // 0xa80 PushV
	var_196_string = "Neutral"; // 0xa81 MovS
	func_2534(var_56_bool, var_196_string); // 0xa82 NEW_2
	var_197_int = 506765; // 0xa84 PushI
	SetMessage(var_197_int); // 0xa85 TObjFunc
	ClearReplies(); // 0xa87 TObjFunc
	var_198_int = 506777; // 0xa89 PushI
	var_199_int = 7457; // 0xa8a PushI
	var_200_int = 7467; // 0xa8b PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xa8c TObjFunc
	var_201_int = 506766; // 0xa8e PushI
	var_202_int = 7459; // 0xa8f PushI
	var_203_int = 7456; // 0xa90 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xa91 TObjFunc
	return 0; // 0xa93 Return
	
Label_2708:
	var_204_string = ""; // 0xa94 PushV
	var_204_string = "Neutral"; // 0xa95 MovS
	func_2534(var_56_bool, var_204_string); // 0xa96 NEW_2
	var_205_int = 506794; // 0xa98 PushI
	SetMessage(var_205_int); // 0xa99 TObjFunc
	ClearReplies(); // 0xa9b TObjFunc
	var_206_bool = 0; // 0xa9d PushV
	var_206_bool = 0; // 0xa9e MovB
	var_207_bool = 0; var_208_object = Obj(); // 0xa9f PushV
	var_208_object = var_1_object; // 0xaa0 MovT
	func_8219(var_208_object); // 0xaa1 NEW_2
	if(var_207_bool == 0) goto Label_2730; // 0xaa3 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0xaa4 PushV
	var_214_object = var_1_object; // 0xaa5 MovT
	func_8601(var_214_object); // 0xaa6 NEW_2
	if(var_213_bool == 0) goto Label_2730; // 0xaa8 JumpB
	var_206_bool = 1; // 0xaa9 MovB
	
Label_2730:
	if(var_206_bool == 0) goto Label_2736; // 0xaaa JumpB
	var_219_int = 506795; // 0xaab PushI
	var_220_int = 7469; // 0xaac PushI
	var_221_int = 7487; // 0xaad PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xaae TObjFunc
	
Label_2736:
	var_222_int = 507535; // 0xab0 PushI
	var_223_int = -1; // 0xab1 PushI
	var_224_int = 8317; // 0xab2 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xab3 TObjFunc
	return 0; // 0xab5 Return
	
Label_2742:
	var_225_int = 7469; // 0xab6 PushI
	var_226_bool = var_55_string == var_225_int; // 0xab7 Eq
	if(var_226_bool == 0) goto Label_2765; // 0xab8 JumpB
	var_227_string = ""; // 0xab9 PushV
	var_227_string = "Neutral"; // 0xaba MovS
	func_2534(var_56_bool, var_227_string); // 0xabb NEW_2
	var_228_int = 506778; // 0xabd PushI
	SetMessage(var_228_int); // 0xabe TObjFunc
	ClearReplies(); // 0xac0 TObjFunc
	var_229_int = 506779; // 0xac2 PushI
	var_230_int = 7471; // 0xac3 PushI
	var_231_int = 7470; // 0xac4 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xac5 TObjFunc
	var_232_int = 506793; // 0xac7 PushI
	var_233_int = 7476; // 0xac8 PushI
	var_234_int = 7485; // 0xac9 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xaca TObjFunc
	return 0; // 0xacc Return
	
Label_2765:
	var_235_int = 7471; // 0xacd PushI
	var_236_bool = var_55_string == var_235_int; // 0xace Eq
	if(var_236_bool == 0) goto Label_2788; // 0xacf JumpB
	var_237_string = ""; // 0xad0 PushV
	var_237_string = "Anger"; // 0xad1 MovS
	func_2534(var_56_bool, var_237_string); // 0xad2 NEW_2
	var_238_int = 506780; // 0xad4 PushI
	SetMessage(var_238_int); // 0xad5 TObjFunc
	ClearReplies(); // 0xad7 TObjFunc
	var_239_int = 506781; // 0xad9 PushI
	var_240_int = 7473; // 0xada PushI
	var_241_int = 7472; // 0xadb PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xadc TObjFunc
	var_242_int = 506788; // 0xade PushI
	var_243_int = -1; // 0xadf PushI
	var_244_int = 7479; // 0xae0 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xae1 TObjFunc
	return 0; // 0xae3 Return
	
Label_2788:
	var_245_int = 7473; // 0xae4 PushI
	var_246_bool = var_55_string == var_245_int; // 0xae5 Eq
	if(var_246_bool == 0) goto Label_2811; // 0xae6 JumpB
	var_247_string = ""; // 0xae7 PushV
	var_247_string = "Neutral"; // 0xae8 MovS
	func_2534(var_56_bool, var_247_string); // 0xae9 NEW_2
	var_248_int = 506782; // 0xaeb PushI
	SetMessage(var_248_int); // 0xaec TObjFunc
	ClearReplies(); // 0xaee TObjFunc
	var_249_int = 506784; // 0xaf0 PushI
	var_250_int = 7476; // 0xaf1 PushI
	var_251_int = 7475; // 0xaf2 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xaf3 TObjFunc
	var_252_int = 506783; // 0xaf5 PushI
	var_253_int = -1; // 0xaf6 PushI
	var_254_int = 7474; // 0xaf7 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xaf8 TObjFunc
	return 0; // 0xafa Return
	
Label_2811:
	var_255_int = 7476; // 0xafb PushI
	var_256_bool = var_55_string == var_255_int; // 0xafc Eq
	if(var_256_bool == 0) goto Label_2834; // 0xafd JumpB
	var_257_string = ""; // 0xafe PushV
	var_257_string = "Neutral"; // 0xaff MovS
	func_2534(var_56_bool, var_257_string); // 0xb00 NEW_2
	var_258_int = 506785; // 0xb02 PushI
	SetMessage(var_258_int); // 0xb03 TObjFunc
	ClearReplies(); // 0xb05 TObjFunc
	var_259_int = 506786; // 0xb07 PushI
	var_260_int = -1; // 0xb08 PushI
	var_261_int = 7477; // 0xb09 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xb0a TObjFunc
	var_262_int = 506787; // 0xb0c PushI
	var_263_int = -1; // 0xb0d PushI
	var_264_int = 7478; // 0xb0e PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xb0f TObjFunc
	return 0; // 0xb11 Return
	
Label_2834:
	var_265_int = 7809; // 0xb12 PushI
	var_266_bool = var_55_string == var_265_int; // 0xb13 Eq
	if(var_266_bool == 0) goto Label_2837; // 0xb14 JumpB
	
Label_2837:
	var_267_int = 7811; // 0xb15 PushI
	var_268_bool = var_55_string == var_267_int; // 0xb16 Eq
	if(var_268_bool == 0) goto Label_2865; // 0xb17 JumpB
	var_269_string = ""; // 0xb18 PushV
	var_269_string = "Patronage"; // 0xb19 MovS
	func_2534(var_56_bool, var_269_string); // 0xb1a NEW_2
	var_270_int = 507087; // 0xb1c PushI
	SetMessage(var_270_int); // 0xb1d TObjFunc
	ClearReplies(); // 0xb1f TObjFunc
	var_271_int = 507088; // 0xb21 PushI
	var_272_int = 7813; // 0xb22 PushI
	var_273_int = 7812; // 0xb23 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0xb24 TObjFunc
	var_274_int = 507092; // 0xb26 PushI
	var_275_int = 7813; // 0xb27 PushI
	var_276_int = 7816; // 0xb28 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xb29 TObjFunc
	var_277_int = 507093; // 0xb2b PushI
	var_278_int = 7819; // 0xb2c PushI
	var_279_int = 7818; // 0xb2d PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xb2e TObjFunc
	return 0; // 0xb30 Return
	
Label_2865:
	var_280_int = 7819; // 0xb31 PushI
	var_281_bool = var_55_string == var_280_int; // 0xb32 Eq
	if(var_281_bool == 0) goto Label_2883; // 0xb33 JumpB
	var_282_string = ""; // 0xb34 PushV
	var_282_string = "Neutral"; // 0xb35 MovS
	func_2534(var_56_bool, var_282_string); // 0xb36 NEW_2
	var_283_int = 507094; // 0xb38 PushI
	SetMessage(var_283_int); // 0xb39 TObjFunc
	ClearReplies(); // 0xb3b TObjFunc
	var_284_int = 507095; // 0xb3d PushI
	var_285_int = 7813; // 0xb3e PushI
	var_286_int = 7820; // 0xb3f PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xb40 TObjFunc
	return 0; // 0xb42 Return
	
Label_2883:
	var_287_int = 7813; // 0xb43 PushI
	var_288_bool = var_55_string == var_287_int; // 0xb44 Eq
	if(var_288_bool == 0) goto Label_2906; // 0xb45 JumpB
	var_289_string = ""; // 0xb46 PushV
	var_289_string = "Neutral"; // 0xb47 MovS
	func_2534(var_56_bool, var_289_string); // 0xb48 NEW_2
	var_290_int = 507089; // 0xb4a PushI
	SetMessage(var_290_int); // 0xb4b TObjFunc
	ClearReplies(); // 0xb4d TObjFunc
	var_291_int = 507090; // 0xb4f PushI
	var_292_int = -1; // 0xb50 PushI
	var_293_int = 7814; // 0xb51 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xb52 TObjFunc
	var_294_int = 507091; // 0xb54 PushI
	var_295_int = -1; // 0xb55 PushI
	var_296_int = 7815; // 0xb56 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xb57 TObjFunc
	return 0; // 0xb59 Return
	
Label_2906:
	var_297_int = 7457; // 0xb5a PushI
	var_298_bool = var_55_string == var_297_int; // 0xb5b Eq
	if(var_298_bool == 0) goto Label_2929; // 0xb5c JumpB
	var_299_string = ""; // 0xb5d PushV
	var_299_string = "Neutral"; // 0xb5e MovS
	func_2534(var_56_bool, var_299_string); // 0xb5f NEW_2
	var_300_int = 506767; // 0xb61 PushI
	SetMessage(var_300_int); // 0xb62 TObjFunc
	ClearReplies(); // 0xb64 TObjFunc
	var_301_int = 506768; // 0xb66 PushI
	var_302_int = 7459; // 0xb67 PushI
	var_303_int = 7458; // 0xb68 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xb69 TObjFunc
	var_304_int = 506773; // 0xb6b PushI
	var_305_int = 7464; // 0xb6c PushI
	var_306_int = 7463; // 0xb6d PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xb6e TObjFunc
	return 0; // 0xb70 Return
	
Label_2929:
	var_307_int = 7464; // 0xb71 PushI
	var_308_bool = var_55_string == var_307_int; // 0xb72 Eq
	if(var_308_bool == 0) goto Label_2952; // 0xb73 JumpB
	var_309_string = ""; // 0xb74 PushV
	var_309_string = "Neutral"; // 0xb75 MovS
	func_2534(var_56_bool, var_309_string); // 0xb76 NEW_2
	var_310_int = 506774; // 0xb78 PushI
	SetMessage(var_310_int); // 0xb79 TObjFunc
	ClearReplies(); // 0xb7b TObjFunc
	var_311_int = 506775; // 0xb7d PushI
	var_312_int = -1; // 0xb7e PushI
	var_313_int = 7465; // 0xb7f PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xb80 TObjFunc
	var_314_int = 506776; // 0xb82 PushI
	var_315_int = -1; // 0xb83 PushI
	var_316_int = 7466; // 0xb84 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xb85 TObjFunc
	return 0; // 0xb87 Return
	
Label_2952:
	var_317_int = 7459; // 0xb88 PushI
	var_318_bool = var_55_string == var_317_int; // 0xb89 Eq
	if(var_318_bool == 0) goto Label_2975; // 0xb8a JumpB
	var_319_string = ""; // 0xb8b PushV
	var_319_string = "Patronage"; // 0xb8c MovS
	func_2534(var_56_bool, var_319_string); // 0xb8d NEW_2
	var_320_int = 506769; // 0xb8f PushI
	SetMessage(var_320_int); // 0xb90 TObjFunc
	ClearReplies(); // 0xb92 TObjFunc
	var_321_int = 506770; // 0xb94 PushI
	var_322_int = -1; // 0xb95 PushI
	var_323_int = 7460; // 0xb96 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xb97 TObjFunc
	var_324_int = 506771; // 0xb99 PushI
	var_325_int = -1; // 0xb9a PushI
	var_326_int = 7461; // 0xb9b PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xb9c TObjFunc
	return 0; // 0xb9e Return
	
Label_2975:
	var_327_int = 7491; // 0xb9f PushI
	var_328_bool = var_55_string == var_327_int; // 0xba0 Eq
	if(var_328_bool == 0) goto Label_2998; // 0xba1 JumpB
	var_329_string = ""; // 0xba2 PushV
	var_329_string = "Distrust"; // 0xba3 MovS
	func_2534(var_56_bool, var_329_string); // 0xba4 NEW_2
	var_330_int = 506799; // 0xba6 PushI
	SetMessage(var_330_int); // 0xba7 TObjFunc
	ClearReplies(); // 0xba9 TObjFunc
	var_331_int = 506800; // 0xbab PushI
	var_332_int = 7493; // 0xbac PushI
	var_333_int = 7492; // 0xbad PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xbae TObjFunc
	var_334_int = 506807; // 0xbb0 PushI
	var_335_int = 7493; // 0xbb1 PushI
	var_336_int = 7500; // 0xbb2 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xbb3 TObjFunc
	return 0; // 0xbb5 Return
	
Label_2998:
	var_337_int = 7493; // 0xbb6 PushI
	var_338_bool = var_55_string == var_337_int; // 0xbb7 Eq
	if(var_338_bool == 0) goto Label_3021; // 0xbb8 JumpB
	var_339_string = ""; // 0xbb9 PushV
	var_339_string = "Neutral"; // 0xbba MovS
	func_2534(var_56_bool, var_339_string); // 0xbbb NEW_2
	var_340_int = 506801; // 0xbbd PushI
	SetMessage(var_340_int); // 0xbbe TObjFunc
	ClearReplies(); // 0xbc0 TObjFunc
	var_341_int = 506802; // 0xbc2 PushI
	var_342_int = 7495; // 0xbc3 PushI
	var_343_int = 7494; // 0xbc4 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0xbc5 TObjFunc
	var_344_int = 506806; // 0xbc7 PushI
	var_345_int = 7495; // 0xbc8 PushI
	var_346_int = 7498; // 0xbc9 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xbca TObjFunc
	return 0; // 0xbcc Return
	
Label_3021:
	var_347_int = 7495; // 0xbcd PushI
	var_348_bool = var_55_string == var_347_int; // 0xbce Eq
	if(var_348_bool == 0) goto Label_3049; // 0xbcf JumpB
	var_349_string = ""; // 0xbd0 PushV
	var_349_string = "Neutral"; // 0xbd1 MovS
	func_2534(var_56_bool, var_349_string); // 0xbd2 NEW_2
	var_350_int = 506803; // 0xbd4 PushI
	SetMessage(var_350_int); // 0xbd5 TObjFunc
	ClearReplies(); // 0xbd7 TObjFunc
	var_351_int = 507097; // 0xbd9 PushI
	var_352_int = 7825; // 0xbda PushI
	var_353_int = 7824; // 0xbdb PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xbdc TObjFunc
	var_354_int = 506804; // 0xbde PushI
	var_355_int = -1; // 0xbdf PushI
	var_356_int = 7496; // 0xbe0 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xbe1 TObjFunc
	var_357_int = 506805; // 0xbe3 PushI
	var_358_int = -1; // 0xbe4 PushI
	var_359_int = 7497; // 0xbe5 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xbe6 TObjFunc
	return 0; // 0xbe8 Return
	
Label_3049:
	var_360_int = 7825; // 0xbe9 PushI
	var_361_bool = var_55_string == var_360_int; // 0xbea Eq
	if(var_361_bool == 0) goto Label_3067; // 0xbeb JumpB
	var_362_string = ""; // 0xbec PushV
	var_362_string = "Neutral"; // 0xbed MovS
	func_2534(var_56_bool, var_362_string); // 0xbee NEW_2
	var_363_int = 507098; // 0xbf0 PushI
	SetMessage(var_363_int); // 0xbf1 TObjFunc
	ClearReplies(); // 0xbf3 TObjFunc
	var_364_int = 507099; // 0xbf5 PushI
	var_365_int = 7827; // 0xbf6 PushI
	var_366_int = 7826; // 0xbf7 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xbf8 TObjFunc
	return 0; // 0xbfa Return
	
Label_3067:
	var_367_int = 7827; // 0xbfb PushI
	var_368_bool = var_55_string == var_367_int; // 0xbfc Eq
	if(var_368_bool == 0) goto Label_3090; // 0xbfd JumpB
	var_369_string = ""; // 0xbfe PushV
	var_369_string = "Repentance"; // 0xbff MovS
	func_2534(var_56_bool, var_369_string); // 0xc00 NEW_2
	var_370_int = 507100; // 0xc02 PushI
	SetMessage(var_370_int); // 0xc03 TObjFunc
	ClearReplies(); // 0xc05 TObjFunc
	var_371_int = 507101; // 0xc07 PushI
	var_372_int = -1; // 0xc08 PushI
	var_373_int = 7828; // 0xc09 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xc0a TObjFunc
	var_374_int = 507102; // 0xc0c PushI
	var_375_int = 7830; // 0xc0d PushI
	var_376_int = 7829; // 0xc0e PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0xc0f TObjFunc
	return 0; // 0xc11 Return
	
Label_3090:
	var_377_int = 7830; // 0xc12 PushI
	var_378_bool = var_55_string == var_377_int; // 0xc13 Eq
	if(var_378_bool == 0) goto Label_3108; // 0xc14 JumpB
	var_379_string = ""; // 0xc15 PushV
	var_379_string = "Neutral"; // 0xc16 MovS
	func_2534(var_56_bool, var_379_string); // 0xc17 NEW_2
	var_380_int = 507103; // 0xc19 PushI
	SetMessage(var_380_int); // 0xc1a TObjFunc
	ClearReplies(); // 0xc1c TObjFunc
	var_381_int = 507104; // 0xc1e PushI
	var_382_int = -1; // 0xc1f PushI
	var_383_int = 7831; // 0xc20 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xc21 TObjFunc
	return 0; // 0xc23 Return
	
Label_3108:
	var_3_string = 1; // 0xc24 TMovB
	var_384_bool = 0; // 0xc25 PushV
	func_7411(var_384_bool); // 0xc26 NEW_2
	if(var_384_bool == 0) goto Label_3116; // 0xc28 JumpB
	lshStopAnimation(); // 0xc29 Func
	goto Label_3118; // 0xc2b Jump
	
Label_3118:
	return 0; // 0xc2e Return
	
Label_3116:
	StopAnimation(); // 0xc2c Func
	
Label_3120:
	return 0; // 0xc30 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0xceb PushI
	if(var_57_int == 0) goto Label_4238; // 0xcec JumpB
	func_7300(); // 0xcee NEW_2
	var_59_int = 35888; // 0xcf0 PushI
	var_60_bool = var_56_bool == var_59_int; // 0xcf1 Eq
	if(var_60_bool == 0) goto Label_3325; // 0xcf2 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xcf3 PushV
	var_61_object = var_1_object; // 0xcf4 MovT
	var_62_object = var_0_object; // 0xcf5 MovT
	func_7524(); // 0xcf6 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0xcf8 PushV
	var_104_object = var_1_object; // 0xcf9 MovT
	var_105_object = var_0_object; // 0xcfa MovT
	func_7518(); // 0xcfb NEW_2
	
Label_3325:
	var_108_int = 35889; // 0xcfd PushI
	var_109_bool = var_56_bool == var_108_int; // 0xcfe Eq
	if(var_109_bool == 0) goto Label_3338; // 0xcff JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0xd00 PushV
	var_110_object = var_1_object; // 0xd01 MovT
	var_111_object = var_0_object; // 0xd02 MovT
	func_7524(); // 0xd03 NEW_2
	var_112_object = Obj(); var_113_object = Obj(); // 0xd05 PushV
	var_112_object = var_1_object; // 0xd06 MovT
	var_113_object = var_0_object; // 0xd07 MovT
	func_7518(); // 0xd08 NEW_2
	
Label_3338:
	var_114_int = 35886; // 0xd0a PushI
	var_115_bool = var_56_bool == var_114_int; // 0xd0b Eq
	if(var_115_bool == 0) goto Label_3346; // 0xd0c JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0xd0d PushV
	var_116_object = var_1_object; // 0xd0e MovT
	var_117_object = var_0_object; // 0xd0f MovT
	func_7436(); // 0xd10 NEW_2
	
Label_3346:
	var_132_int = 9791; // 0xd12 PushI
	var_133_bool = var_55_string == var_132_int; // 0xd13 Eq
	if(var_133_bool == 0) goto Label_3393; // 0xd14 JumpB
	var_134_string = ""; // 0xd15 PushV
	var_134_string = "Neutral"; // 0xd16 MovS
	func_3284(var_56_bool, var_134_string); // 0xd17 NEW_2
	var_151_int = 508926; // 0xd19 PushI
	SetMessage(var_151_int); // 0xd1a TObjFunc
	ClearReplies(); // 0xd1c TObjFunc
	var_152_bool = 0; // 0xd1e PushV
	var_152_bool = 0; // 0xd1f MovB
	var_153_bool = 0; var_154_object = Obj(); // 0xd20 PushV
	var_154_object = var_1_object; // 0xd21 MovT
	func_8255(var_154_object); // 0xd22 NEW_2
	if(var_153_bool == 0) goto Label_3371; // 0xd24 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0xd25 PushV
	var_162_object = var_1_object; // 0xd26 MovT
	func_8267(var_162_object); // 0xd27 NEW_2
	if(var_161_bool == 0) goto Label_3371; // 0xd29 JumpB
	var_152_bool = 1; // 0xd2a MovB
	
Label_3371:
	if(var_152_bool == 0) goto Label_3377; // 0xd2b JumpB
	var_167_int = 508977; // 0xd2c PushI
	var_168_int = 9847; // 0xd2d PushI
	var_169_int = 9846; // 0xd2e PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xd2f TObjFunc
	
Label_3377:
	var_170_bool = 0; var_171_object = Obj(); // 0xd31 PushV
	var_171_object = var_1_object; // 0xd32 MovT
	func_8146(var_171_object); // 0xd33 NEW_2
	if(var_170_bool == 0) goto Label_3387; // 0xd35 JumpB
	var_189_int = 510375; // 0xd36 PushI
	var_190_int = 11442; // 0xd37 PushI
	var_191_int = 11440; // 0xd38 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xd39 TObjFunc
	
Label_3387:
	var_192_int = 511139; // 0xd3b PushI
	var_193_int = -1; // 0xd3c PushI
	var_194_int = 12328; // 0xd3d PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xd3e TObjFunc
	return 0; // 0xd40 Return
	
Label_3393:
	var_195_int = 9815; // 0xd41 PushI
	var_196_bool = var_55_string == var_195_int; // 0xd42 Eq
	if(var_196_bool == 0) goto Label_3396; // 0xd43 JumpB
	
Label_3396:
	var_197_int = 9841; // 0xd44 PushI
	var_198_bool = var_55_string == var_197_int; // 0xd45 Eq
	if(var_198_bool == 0) goto Label_3414; // 0xd46 JumpB
	var_199_string = ""; // 0xd47 PushV
	var_199_string = "Neutral"; // 0xd48 MovS
	func_3284(var_56_bool, var_199_string); // 0xd49 NEW_2
	var_200_int = 508973; // 0xd4b PushI
	SetMessage(var_200_int); // 0xd4c TObjFunc
	ClearReplies(); // 0xd4e TObjFunc
	var_201_int = 508974; // 0xd50 PushI
	var_202_int = 9817; // 0xd51 PushI
	var_203_int = 9842; // 0xd52 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xd53 TObjFunc
	return 0; // 0xd55 Return
	
Label_3414:
	var_204_int = 9832; // 0xd56 PushI
	var_205_bool = var_55_string == var_204_int; // 0xd57 Eq
	if(var_205_bool == 0) goto Label_3437; // 0xd58 JumpB
	var_206_string = ""; // 0xd59 PushV
	var_206_string = "Neutral"; // 0xd5a MovS
	func_3284(var_56_bool, var_206_string); // 0xd5b NEW_2
	var_207_int = 508965; // 0xd5d PushI
	SetMessage(var_207_int); // 0xd5e TObjFunc
	ClearReplies(); // 0xd60 TObjFunc
	var_208_int = 508966; // 0xd62 PushI
	var_209_int = 9834; // 0xd63 PushI
	var_210_int = 9833; // 0xd64 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xd65 TObjFunc
	var_211_int = 508971; // 0xd67 PushI
	var_212_int = 9834; // 0xd68 PushI
	var_213_int = 9838; // 0xd69 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xd6a TObjFunc
	return 0; // 0xd6c Return
	
Label_3437:
	var_214_int = 9834; // 0xd6d PushI
	var_215_bool = var_55_string == var_214_int; // 0xd6e Eq
	if(var_215_bool == 0) goto Label_3460; // 0xd6f JumpB
	var_216_string = ""; // 0xd70 PushV
	var_216_string = "Anger"; // 0xd71 MovS
	func_3284(var_56_bool, var_216_string); // 0xd72 NEW_2
	var_217_int = 508967; // 0xd74 PushI
	SetMessage(var_217_int); // 0xd75 TObjFunc
	ClearReplies(); // 0xd77 TObjFunc
	var_218_int = 508968; // 0xd79 PushI
	var_219_int = 9836; // 0xd7a PushI
	var_220_int = 9835; // 0xd7b PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xd7c TObjFunc
	var_221_int = 508970; // 0xd7e PushI
	var_222_int = -1; // 0xd7f PushI
	var_223_int = 9837; // 0xd80 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xd81 TObjFunc
	return 0; // 0xd83 Return
	
Label_3460:
	var_224_int = 9836; // 0xd84 PushI
	var_225_bool = var_55_string == var_224_int; // 0xd85 Eq
	if(var_225_bool == 0) goto Label_3478; // 0xd86 JumpB
	var_226_string = ""; // 0xd87 PushV
	var_226_string = "Anger"; // 0xd88 MovS
	func_3284(var_56_bool, var_226_string); // 0xd89 NEW_2
	var_227_int = 508969; // 0xd8b PushI
	SetMessage(var_227_int); // 0xd8c TObjFunc
	ClearReplies(); // 0xd8e TObjFunc
	var_228_int = 535697; // 0xd90 PushI
	var_229_int = -1; // 0xd91 PushI
	var_230_int = 37369; // 0xd92 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xd93 TObjFunc
	return 0; // 0xd95 Return
	
Label_3478:
	var_231_int = 9817; // 0xd96 PushI
	var_232_bool = var_55_string == var_231_int; // 0xd97 Eq
	if(var_232_bool == 0) goto Label_3506; // 0xd98 JumpB
	var_233_string = ""; // 0xd99 PushV
	var_233_string = "Neutral"; // 0xd9a MovS
	func_3284(var_56_bool, var_233_string); // 0xd9b NEW_2
	var_234_int = 508951; // 0xd9d PushI
	SetMessage(var_234_int); // 0xd9e TObjFunc
	ClearReplies(); // 0xda0 TObjFunc
	var_235_int = 508952; // 0xda2 PushI
	var_236_int = -1; // 0xda3 PushI
	var_237_int = 9818; // 0xda4 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xda5 TObjFunc
	var_238_int = 508953; // 0xda7 PushI
	var_239_int = -1; // 0xda8 PushI
	var_240_int = 9819; // 0xda9 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xdaa TObjFunc
	var_241_int = 508954; // 0xdac PushI
	var_242_int = 9821; // 0xdad PushI
	var_243_int = 9820; // 0xdae PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xdaf TObjFunc
	return 0; // 0xdb1 Return
	
Label_3506:
	var_244_int = 9821; // 0xdb2 PushI
	var_245_bool = var_55_string == var_244_int; // 0xdb3 Eq
	if(var_245_bool == 0) goto Label_3529; // 0xdb4 JumpB
	var_246_string = ""; // 0xdb5 PushV
	var_246_string = "Patronage"; // 0xdb6 MovS
	func_3284(var_56_bool, var_246_string); // 0xdb7 NEW_2
	var_247_int = 508955; // 0xdb9 PushI
	SetMessage(var_247_int); // 0xdba TObjFunc
	ClearReplies(); // 0xdbc TObjFunc
	var_248_int = 508956; // 0xdbe PushI
	var_249_int = -1; // 0xdbf PushI
	var_250_int = 9822; // 0xdc0 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xdc1 TObjFunc
	var_251_int = 508957; // 0xdc3 PushI
	var_252_int = 9824; // 0xdc4 PushI
	var_253_int = 9823; // 0xdc5 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0xdc6 TObjFunc
	return 0; // 0xdc8 Return
	
Label_3529:
	var_254_int = 9824; // 0xdc9 PushI
	var_255_bool = var_55_string == var_254_int; // 0xdca Eq
	if(var_255_bool == 0) goto Label_3552; // 0xdcb JumpB
	var_256_string = ""; // 0xdcc PushV
	var_256_string = "Neutral"; // 0xdcd MovS
	func_3284(var_56_bool, var_256_string); // 0xdce NEW_2
	var_257_int = 508958; // 0xdd0 PushI
	SetMessage(var_257_int); // 0xdd1 TObjFunc
	ClearReplies(); // 0xdd3 TObjFunc
	var_258_int = 508959; // 0xdd5 PushI
	var_259_int = 9826; // 0xdd6 PushI
	var_260_int = 9825; // 0xdd7 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xdd8 TObjFunc
	var_261_int = 508962; // 0xdda PushI
	var_262_int = -1; // 0xddb PushI
	var_263_int = 9828; // 0xddc PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xddd TObjFunc
	return 0; // 0xddf Return
	
Label_3552:
	var_264_int = 9826; // 0xde0 PushI
	var_265_bool = var_55_string == var_264_int; // 0xde1 Eq
	if(var_265_bool == 0) goto Label_3570; // 0xde2 JumpB
	var_266_string = ""; // 0xde3 PushV
	var_266_string = "Distrust"; // 0xde4 MovS
	func_3284(var_56_bool, var_266_string); // 0xde5 NEW_2
	var_267_int = 508960; // 0xde7 PushI
	SetMessage(var_267_int); // 0xde8 TObjFunc
	ClearReplies(); // 0xdea TObjFunc
	var_268_int = 508961; // 0xdec PushI
	var_269_int = -1; // 0xded PushI
	var_270_int = 9827; // 0xdee PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xdef TObjFunc
	return 0; // 0xdf1 Return
	
Label_3570:
	var_271_int = 9792; // 0xdf2 PushI
	var_272_bool = var_55_string == var_271_int; // 0xdf3 Eq
	if(var_272_bool == 0) goto Label_3573; // 0xdf4 JumpB
	
Label_3573:
	var_273_int = 11142; // 0xdf5 PushI
	var_274_bool = var_55_string == var_273_int; // 0xdf6 Eq
	if(var_274_bool == 0) goto Label_3596; // 0xdf7 JumpB
	var_275_string = ""; // 0xdf8 PushV
	var_275_string = "Anger"; // 0xdf9 MovS
	func_3284(var_56_bool, var_275_string); // 0xdfa NEW_2
	var_276_int = 510108; // 0xdfc PushI
	SetMessage(var_276_int); // 0xdfd TObjFunc
	ClearReplies(); // 0xdff TObjFunc
	var_277_int = 510109; // 0xe01 PushI
	var_278_int = 11117; // 0xe02 PushI
	var_279_int = 11143; // 0xe03 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xe04 TObjFunc
	var_280_int = 510110; // 0xe06 PushI
	var_281_int = 11117; // 0xe07 PushI
	var_282_int = 11145; // 0xe08 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xe09 TObjFunc
	return 0; // 0xe0b Return
	
Label_3596:
	var_283_int = 11117; // 0xe0c PushI
	var_284_bool = var_55_string == var_283_int; // 0xe0d Eq
	if(var_284_bool == 0) goto Label_3619; // 0xe0e JumpB
	var_285_string = ""; // 0xe0f PushV
	var_285_string = "Anger"; // 0xe10 MovS
	func_3284(var_56_bool, var_285_string); // 0xe11 NEW_2
	var_286_int = 510087; // 0xe13 PushI
	SetMessage(var_286_int); // 0xe14 TObjFunc
	ClearReplies(); // 0xe16 TObjFunc
	var_287_int = 510088; // 0xe18 PushI
	var_288_int = 11119; // 0xe19 PushI
	var_289_int = 11118; // 0xe1a PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0xe1b TObjFunc
	var_290_int = 510105; // 0xe1d PushI
	var_291_int = 11121; // 0xe1e PushI
	var_292_int = 11137; // 0xe1f PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xe20 TObjFunc
	return 0; // 0xe22 Return
	
Label_3619:
	var_293_int = 11119; // 0xe23 PushI
	var_294_bool = var_55_string == var_293_int; // 0xe24 Eq
	if(var_294_bool == 0) goto Label_3642; // 0xe25 JumpB
	var_295_string = ""; // 0xe26 PushV
	var_295_string = "Neutral"; // 0xe27 MovS
	func_3284(var_56_bool, var_295_string); // 0xe28 NEW_2
	var_296_int = 510089; // 0xe2a PushI
	SetMessage(var_296_int); // 0xe2b TObjFunc
	ClearReplies(); // 0xe2d TObjFunc
	var_297_int = 510090; // 0xe2f PushI
	var_298_int = 11121; // 0xe30 PushI
	var_299_int = 11120; // 0xe31 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xe32 TObjFunc
	var_300_int = 510101; // 0xe34 PushI
	var_301_int = 11132; // 0xe35 PushI
	var_302_int = 11131; // 0xe36 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xe37 TObjFunc
	return 0; // 0xe39 Return
	
Label_3642:
	var_303_int = 11132; // 0xe3a PushI
	var_304_bool = var_55_string == var_303_int; // 0xe3b Eq
	if(var_304_bool == 0) goto Label_3665; // 0xe3c JumpB
	var_305_string = ""; // 0xe3d PushV
	var_305_string = "Distrust"; // 0xe3e MovS
	func_3284(var_56_bool, var_305_string); // 0xe3f NEW_2
	var_306_int = 510102; // 0xe41 PushI
	SetMessage(var_306_int); // 0xe42 TObjFunc
	ClearReplies(); // 0xe44 TObjFunc
	var_307_int = 510103; // 0xe46 PushI
	var_308_int = 11121; // 0xe47 PushI
	var_309_int = 11133; // 0xe48 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xe49 TObjFunc
	var_310_int = 510104; // 0xe4b PushI
	var_311_int = 11121; // 0xe4c PushI
	var_312_int = 11135; // 0xe4d PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xe4e TObjFunc
	return 0; // 0xe50 Return
	
Label_3665:
	var_313_int = 11121; // 0xe51 PushI
	var_314_bool = var_55_string == var_313_int; // 0xe52 Eq
	if(var_314_bool == 0) goto Label_3688; // 0xe53 JumpB
	var_315_string = ""; // 0xe54 PushV
	var_315_string = "Neutral"; // 0xe55 MovS
	func_3284(var_56_bool, var_315_string); // 0xe56 NEW_2
	var_316_int = 510091; // 0xe58 PushI
	SetMessage(var_316_int); // 0xe59 TObjFunc
	ClearReplies(); // 0xe5b TObjFunc
	var_317_int = 510092; // 0xe5d PushI
	var_318_int = 11123; // 0xe5e PushI
	var_319_int = 11122; // 0xe5f PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xe60 TObjFunc
	var_320_int = 510097; // 0xe62 PushI
	var_321_int = 11128; // 0xe63 PushI
	var_322_int = 11127; // 0xe64 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xe65 TObjFunc
	return 0; // 0xe67 Return
	
Label_3688:
	var_323_int = 11128; // 0xe68 PushI
	var_324_bool = var_55_string == var_323_int; // 0xe69 Eq
	if(var_324_bool == 0) goto Label_3711; // 0xe6a JumpB
	var_325_string = ""; // 0xe6b PushV
	var_325_string = "Neutral"; // 0xe6c MovS
	func_3284(var_56_bool, var_325_string); // 0xe6d NEW_2
	var_326_int = 510098; // 0xe6f PushI
	SetMessage(var_326_int); // 0xe70 TObjFunc
	ClearReplies(); // 0xe72 TObjFunc
	var_327_int = 510099; // 0xe74 PushI
	var_328_int = -1; // 0xe75 PushI
	var_329_int = 11129; // 0xe76 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xe77 TObjFunc
	var_330_int = 510100; // 0xe79 PushI
	var_331_int = -1; // 0xe7a PushI
	var_332_int = 11130; // 0xe7b PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xe7c TObjFunc
	return 0; // 0xe7e Return
	
Label_3711:
	var_333_int = 11123; // 0xe7f PushI
	var_334_bool = var_55_string == var_333_int; // 0xe80 Eq
	if(var_334_bool == 0) goto Label_3739; // 0xe81 JumpB
	var_335_string = ""; // 0xe82 PushV
	var_335_string = "Repentance"; // 0xe83 MovS
	func_3284(var_56_bool, var_335_string); // 0xe84 NEW_2
	var_336_int = 510093; // 0xe86 PushI
	SetMessage(var_336_int); // 0xe87 TObjFunc
	ClearReplies(); // 0xe89 TObjFunc
	var_337_int = 510094; // 0xe8b PushI
	var_338_int = -1; // 0xe8c PushI
	var_339_int = 11124; // 0xe8d PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xe8e TObjFunc
	var_340_int = 510095; // 0xe90 PushI
	var_341_int = -1; // 0xe91 PushI
	var_342_int = 11125; // 0xe92 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xe93 TObjFunc
	var_343_int = 510096; // 0xe95 PushI
	var_344_int = -1; // 0xe96 PushI
	var_345_int = 11126; // 0xe97 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xe98 TObjFunc
	return 0; // 0xe9a Return
	
Label_3739:
	var_346_int = 9808; // 0xe9b PushI
	var_347_bool = var_55_string == var_346_int; // 0xe9c Eq
	if(var_347_bool == 0) goto Label_3757; // 0xe9d JumpB
	var_348_string = ""; // 0xe9e PushV
	var_348_string = "Repentance"; // 0xe9f MovS
	func_3284(var_56_bool, var_348_string); // 0xea0 NEW_2
	var_349_int = 508942; // 0xea2 PushI
	SetMessage(var_349_int); // 0xea3 TObjFunc
	ClearReplies(); // 0xea5 TObjFunc
	var_350_int = 508943; // 0xea7 PushI
	var_351_int = 9810; // 0xea8 PushI
	var_352_int = 9809; // 0xea9 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xeaa TObjFunc
	return 0; // 0xeac Return
	
Label_3757:
	var_353_int = 9810; // 0xead PushI
	var_354_bool = var_55_string == var_353_int; // 0xeae Eq
	if(var_354_bool == 0) goto Label_3780; // 0xeaf JumpB
	var_355_string = ""; // 0xeb0 PushV
	var_355_string = "Neutral"; // 0xeb1 MovS
	func_3284(var_56_bool, var_355_string); // 0xeb2 NEW_2
	var_356_int = 508944; // 0xeb4 PushI
	SetMessage(var_356_int); // 0xeb5 TObjFunc
	ClearReplies(); // 0xeb7 TObjFunc
	var_357_int = 508945; // 0xeb9 PushI
	var_358_int = -1; // 0xeba PushI
	var_359_int = 9811; // 0xebb PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xebc TObjFunc
	var_360_int = 508946; // 0xebe PushI
	var_361_int = 9813; // 0xebf PushI
	var_362_int = 9812; // 0xec0 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0xec1 TObjFunc
	return 0; // 0xec3 Return
	
Label_3780:
	var_363_int = 9813; // 0xec4 PushI
	var_364_bool = var_55_string == var_363_int; // 0xec5 Eq
	if(var_364_bool == 0) goto Label_3798; // 0xec6 JumpB
	var_365_string = ""; // 0xec7 PushV
	var_365_string = "Neutral"; // 0xec8 MovS
	func_3284(var_56_bool, var_365_string); // 0xec9 NEW_2
	var_366_int = 508947; // 0xecb PushI
	SetMessage(var_366_int); // 0xecc TObjFunc
	ClearReplies(); // 0xece TObjFunc
	var_367_int = 508948; // 0xed0 PushI
	var_368_int = -1; // 0xed1 PushI
	var_369_int = 9814; // 0xed2 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xed3 TObjFunc
	return 0; // 0xed5 Return
	
Label_3798:
	var_370_int = 9794; // 0xed6 PushI
	var_371_bool = var_55_string == var_370_int; // 0xed7 Eq
	if(var_371_bool == 0) goto Label_3821; // 0xed8 JumpB
	var_372_string = ""; // 0xed9 PushV
	var_372_string = "Distrust"; // 0xeda MovS
	func_3284(var_56_bool, var_372_string); // 0xedb NEW_2
	var_373_int = 508929; // 0xedd PushI
	SetMessage(var_373_int); // 0xede TObjFunc
	ClearReplies(); // 0xee0 TObjFunc
	var_374_int = 508930; // 0xee2 PushI
	var_375_int = 9796; // 0xee3 PushI
	var_376_int = 9795; // 0xee4 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0xee5 TObjFunc
	var_377_int = 508938; // 0xee7 PushI
	var_378_int = 9804; // 0xee8 PushI
	var_379_int = 9803; // 0xee9 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xeea TObjFunc
	return 0; // 0xeec Return
	
Label_3821:
	var_380_int = 9804; // 0xeed PushI
	var_381_bool = var_55_string == var_380_int; // 0xeee Eq
	if(var_381_bool == 0) goto Label_3839; // 0xeef JumpB
	var_382_string = ""; // 0xef0 PushV
	var_382_string = "Neutral"; // 0xef1 MovS
	func_3284(var_56_bool, var_382_string); // 0xef2 NEW_2
	var_383_int = 508939; // 0xef4 PushI
	SetMessage(var_383_int); // 0xef5 TObjFunc
	ClearReplies(); // 0xef7 TObjFunc
	var_384_int = 508940; // 0xef9 PushI
	var_385_int = 9796; // 0xefa PushI
	var_386_int = 9805; // 0xefb PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0xefc TObjFunc
	return 0; // 0xefe Return
	
Label_3839:
	var_387_int = 9796; // 0xeff PushI
	var_388_bool = var_55_string == var_387_int; // 0xf00 Eq
	if(var_388_bool == 0) goto Label_3867; // 0xf01 JumpB
	var_389_string = ""; // 0xf02 PushV
	var_389_string = "Neutral"; // 0xf03 MovS
	func_3284(var_56_bool, var_389_string); // 0xf04 NEW_2
	var_390_int = 508931; // 0xf06 PushI
	SetMessage(var_390_int); // 0xf07 TObjFunc
	ClearReplies(); // 0xf09 TObjFunc
	var_391_int = 508932; // 0xf0b PushI
	var_392_int = -1; // 0xf0c PushI
	var_393_int = 9797; // 0xf0d PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xf0e TObjFunc
	var_394_int = 508933; // 0xf10 PushI
	var_395_int = -1; // 0xf11 PushI
	var_396_int = 9798; // 0xf12 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0xf13 TObjFunc
	var_397_int = 508934; // 0xf15 PushI
	var_398_int = 9800; // 0xf16 PushI
	var_399_int = 9799; // 0xf17 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0xf18 TObjFunc
	return 0; // 0xf1a Return
	
Label_3867:
	var_400_int = 9800; // 0xf1b PushI
	var_401_bool = var_55_string == var_400_int; // 0xf1c Eq
	if(var_401_bool == 0) goto Label_3890; // 0xf1d JumpB
	var_402_string = ""; // 0xf1e PushV
	var_402_string = "Neutral"; // 0xf1f MovS
	func_3284(var_56_bool, var_402_string); // 0xf20 NEW_2
	var_403_int = 508935; // 0xf22 PushI
	SetMessage(var_403_int); // 0xf23 TObjFunc
	ClearReplies(); // 0xf25 TObjFunc
	var_404_int = 508936; // 0xf27 PushI
	var_405_int = -1; // 0xf28 PushI
	var_406_int = 9801; // 0xf29 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xf2a TObjFunc
	var_407_int = 508937; // 0xf2c PushI
	var_408_int = -1; // 0xf2d PushI
	var_409_int = 9802; // 0xf2e PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0xf2f TObjFunc
	return 0; // 0xf31 Return
	
Label_3890:
	var_410_int = 11442; // 0xf32 PushI
	var_411_bool = var_55_string == var_410_int; // 0xf33 Eq
	if(var_411_bool == 0) goto Label_3913; // 0xf34 JumpB
	var_412_string = ""; // 0xf35 PushV
	var_412_string = "Neutral"; // 0xf36 MovS
	func_3284(var_56_bool, var_412_string); // 0xf37 NEW_2
	var_413_int = 510377; // 0xf39 PushI
	SetMessage(var_413_int); // 0xf3a TObjFunc
	ClearReplies(); // 0xf3c TObjFunc
	var_414_int = 510378; // 0xf3e PushI
	var_415_int = 11446; // 0xf3f PushI
	var_416_int = 11443; // 0xf40 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xf41 TObjFunc
	var_417_int = 510379; // 0xf43 PushI
	var_418_int = 11445; // 0xf44 PushI
	var_419_int = 11444; // 0xf45 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0xf46 TObjFunc
	return 0; // 0xf48 Return
	
Label_3913:
	var_420_int = 11445; // 0xf49 PushI
	var_421_bool = var_55_string == var_420_int; // 0xf4a Eq
	if(var_421_bool == 0) goto Label_3931; // 0xf4b JumpB
	var_422_string = ""; // 0xf4c PushV
	var_422_string = "Neutral"; // 0xf4d MovS
	func_3284(var_56_bool, var_422_string); // 0xf4e NEW_2
	var_423_int = 510380; // 0xf50 PushI
	SetMessage(var_423_int); // 0xf51 TObjFunc
	ClearReplies(); // 0xf53 TObjFunc
	var_424_int = 510383; // 0xf55 PushI
	var_425_int = -1; // 0xf56 PushI
	var_426_int = 11448; // 0xf57 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0xf58 TObjFunc
	return 0; // 0xf5a Return
	
Label_3931:
	var_427_int = 11446; // 0xf5b PushI
	var_428_bool = var_55_string == var_427_int; // 0xf5c Eq
	if(var_428_bool == 0) goto Label_3949; // 0xf5d JumpB
	var_429_string = ""; // 0xf5e PushV
	var_429_string = "Neutral"; // 0xf5f MovS
	func_3284(var_56_bool, var_429_string); // 0xf60 NEW_2
	var_430_int = 510381; // 0xf62 PushI
	SetMessage(var_430_int); // 0xf63 TObjFunc
	ClearReplies(); // 0xf65 TObjFunc
	var_431_int = 510382; // 0xf67 PushI
	var_432_int = -1; // 0xf68 PushI
	var_433_int = 11447; // 0xf69 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xf6a TObjFunc
	return 0; // 0xf6c Return
	
Label_3949:
	var_434_int = 9847; // 0xf6d PushI
	var_435_bool = var_55_string == var_434_int; // 0xf6e Eq
	if(var_435_bool == 0) goto Label_3972; // 0xf6f JumpB
	var_436_string = ""; // 0xf70 PushV
	var_436_string = "Neutral"; // 0xf71 MovS
	func_3284(var_56_bool, var_436_string); // 0xf72 NEW_2
	var_437_int = 508978; // 0xf74 PushI
	SetMessage(var_437_int); // 0xf75 TObjFunc
	ClearReplies(); // 0xf77 TObjFunc
	var_438_int = 508979; // 0xf79 PushI
	var_439_int = 9852; // 0xf7a PushI
	var_440_int = 9848; // 0xf7b PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xf7c TObjFunc
	var_441_int = 508980; // 0xf7e PushI
	var_442_int = 9850; // 0xf7f PushI
	var_443_int = 9849; // 0xf80 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0xf81 TObjFunc
	return 0; // 0xf83 Return
	
Label_3972:
	var_444_int = 9850; // 0xf84 PushI
	var_445_bool = var_55_string == var_444_int; // 0xf85 Eq
	if(var_445_bool == 0) goto Label_3995; // 0xf86 JumpB
	var_446_string = ""; // 0xf87 PushV
	var_446_string = "Anger"; // 0xf88 MovS
	func_3284(var_56_bool, var_446_string); // 0xf89 NEW_2
	var_447_int = 508981; // 0xf8b PushI
	SetMessage(var_447_int); // 0xf8c TObjFunc
	ClearReplies(); // 0xf8e TObjFunc
	var_448_int = 508982; // 0xf90 PushI
	var_449_int = 9852; // 0xf91 PushI
	var_450_int = 9851; // 0xf92 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xf93 TObjFunc
	var_451_int = 534335; // 0xf95 PushI
	var_452_int = 9852; // 0xf96 PushI
	var_453_int = 35934; // 0xf97 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0xf98 TObjFunc
	return 0; // 0xf9a Return
	
Label_3995:
	var_454_int = 9852; // 0xf9b PushI
	var_455_bool = var_55_string == var_454_int; // 0xf9c Eq
	if(var_455_bool == 0) goto Label_4013; // 0xf9d JumpB
	var_456_string = ""; // 0xf9e PushV
	var_456_string = "Neutral"; // 0xf9f MovS
	func_3284(var_56_bool, var_456_string); // 0xfa0 NEW_2
	var_457_int = 508983; // 0xfa2 PushI
	SetMessage(var_457_int); // 0xfa3 TObjFunc
	ClearReplies(); // 0xfa5 TObjFunc
	var_458_int = 508984; // 0xfa7 PushI
	var_459_int = 9854; // 0xfa8 PushI
	var_460_int = 9853; // 0xfa9 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0xfaa TObjFunc
	return 0; // 0xfac Return
	
Label_4013:
	var_461_int = 9857; // 0xfad PushI
	var_462_bool = var_55_string == var_461_int; // 0xfae Eq
	if(var_462_bool == 0) goto Label_4016; // 0xfaf JumpB
	
Label_4016:
	var_463_int = 9860; // 0xfb0 PushI
	var_464_bool = var_55_string == var_463_int; // 0xfb1 Eq
	if(var_464_bool == 0) goto Label_4039; // 0xfb2 JumpB
	var_465_string = ""; // 0xfb3 PushV
	var_465_string = "Repentance"; // 0xfb4 MovS
	func_3284(var_56_bool, var_465_string); // 0xfb5 NEW_2
	var_466_int = 508991; // 0xfb7 PushI
	SetMessage(var_466_int); // 0xfb8 TObjFunc
	ClearReplies(); // 0xfba TObjFunc
	var_467_int = 508992; // 0xfbc PushI
	var_468_int = 9863; // 0xfbd PushI
	var_469_int = 9861; // 0xfbe PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0xfbf TObjFunc
	var_470_int = 508993; // 0xfc1 PushI
	var_471_int = 9865; // 0xfc2 PushI
	var_472_int = 9862; // 0xfc3 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0xfc4 TObjFunc
	return 0; // 0xfc6 Return
	
Label_4039:
	var_473_int = 9865; // 0xfc7 PushI
	var_474_bool = var_55_string == var_473_int; // 0xfc8 Eq
	if(var_474_bool == 0) goto Label_4057; // 0xfc9 JumpB
	var_475_string = ""; // 0xfca PushV
	var_475_string = "Neutral"; // 0xfcb MovS
	func_3284(var_56_bool, var_475_string); // 0xfcc NEW_2
	var_476_int = 508996; // 0xfce PushI
	SetMessage(var_476_int); // 0xfcf TObjFunc
	ClearReplies(); // 0xfd1 TObjFunc
	var_477_int = 508997; // 0xfd3 PushI
	var_478_int = 9859; // 0xfd4 PushI
	var_479_int = 9866; // 0xfd5 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0xfd6 TObjFunc
	return 0; // 0xfd8 Return
	
Label_4057:
	var_480_int = 9863; // 0xfd9 PushI
	var_481_bool = var_55_string == var_480_int; // 0xfda Eq
	if(var_481_bool == 0) goto Label_4075; // 0xfdb JumpB
	var_482_string = ""; // 0xfdc PushV
	var_482_string = "Neutral"; // 0xfdd MovS
	func_3284(var_56_bool, var_482_string); // 0xfde NEW_2
	var_483_int = 508994; // 0xfe0 PushI
	SetMessage(var_483_int); // 0xfe1 TObjFunc
	ClearReplies(); // 0xfe3 TObjFunc
	var_484_int = 508995; // 0xfe5 PushI
	var_485_int = 9859; // 0xfe6 PushI
	var_486_int = 9864; // 0xfe7 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xfe8 TObjFunc
	return 0; // 0xfea Return
	
Label_4075:
	var_487_int = 9854; // 0xfeb PushI
	var_488_bool = var_55_string == var_487_int; // 0xfec Eq
	if(var_488_bool == 0) goto Label_4093; // 0xfed JumpB
	var_489_string = ""; // 0xfee PushV
	var_489_string = "Neutral"; // 0xfef MovS
	func_3284(var_56_bool, var_489_string); // 0xff0 NEW_2
	var_490_int = 508985; // 0xff2 PushI
	SetMessage(var_490_int); // 0xff3 TObjFunc
	ClearReplies(); // 0xff5 TObjFunc
	var_491_int = 508986; // 0xff7 PushI
	var_492_int = 9859; // 0xff8 PushI
	var_493_int = 9855; // 0xff9 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0xffa TObjFunc
	return 0; // 0xffc Return
	
Label_4093:
	var_494_int = 9859; // 0xffd PushI
	var_495_bool = var_55_string == var_494_int; // 0xffe Eq
	if(var_495_bool == 0) goto Label_4111; // 0xfff JumpB
	var_496_string = ""; // 0x1000 PushV
	var_496_string = "Neutral"; // 0x1001 MovS
	func_3284(var_56_bool, var_496_string); // 0x1002 NEW_2
	var_497_int = 508990; // 0x1004 PushI
	SetMessage(var_497_int); // 0x1005 TObjFunc
	ClearReplies(); // 0x1007 TObjFunc
	var_498_int = 508998; // 0x1009 PushI
	var_499_int = 9870; // 0x100a PushI
	var_500_int = 9869; // 0x100b PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x100c TObjFunc
	return 0; // 0x100e Return
	
Label_4111:
	var_501_int = 9870; // 0x100f PushI
	var_502_bool = var_55_string == var_501_int; // 0x1010 Eq
	if(var_502_bool == 0) goto Label_4134; // 0x1011 JumpB
	var_503_string = ""; // 0x1012 PushV
	var_503_string = "Distrust"; // 0x1013 MovS
	func_3284(var_56_bool, var_503_string); // 0x1014 NEW_2
	var_504_int = 508999; // 0x1016 PushI
	SetMessage(var_504_int); // 0x1017 TObjFunc
	ClearReplies(); // 0x1019 TObjFunc
	var_505_int = 509000; // 0x101b PushI
	var_506_int = 9873; // 0x101c PushI
	var_507_int = 9871; // 0x101d PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x101e TObjFunc
	var_508_int = 509011; // 0x1020 PushI
	var_509_int = 9883; // 0x1021 PushI
	var_510_int = 9882; // 0x1022 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x1023 TObjFunc
	return 0; // 0x1025 Return
	
Label_4134:
	var_511_int = 9883; // 0x1026 PushI
	var_512_bool = var_55_string == var_511_int; // 0x1027 Eq
	if(var_512_bool == 0) goto Label_4152; // 0x1028 JumpB
	var_513_string = ""; // 0x1029 PushV
	var_513_string = "Neutral"; // 0x102a MovS
	func_3284(var_56_bool, var_513_string); // 0x102b NEW_2
	var_514_int = 509012; // 0x102d PushI
	SetMessage(var_514_int); // 0x102e TObjFunc
	ClearReplies(); // 0x1030 TObjFunc
	var_515_int = 509013; // 0x1032 PushI
	var_516_int = 9873; // 0x1033 PushI
	var_517_int = 9884; // 0x1034 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x1035 TObjFunc
	return 0; // 0x1037 Return
	
Label_4152:
	var_518_int = 9873; // 0x1038 PushI
	var_519_bool = var_55_string == var_518_int; // 0x1039 Eq
	if(var_519_bool == 0) goto Label_4180; // 0x103a JumpB
	var_520_string = ""; // 0x103b PushV
	var_520_string = "Distrust"; // 0x103c MovS
	func_3284(var_56_bool, var_520_string); // 0x103d NEW_2
	var_521_int = 509002; // 0x103f PushI
	SetMessage(var_521_int); // 0x1040 TObjFunc
	ClearReplies(); // 0x1042 TObjFunc
	var_522_int = 509003; // 0x1044 PushI
	var_523_int = 35882; // 0x1045 PushI
	var_524_int = 9874; // 0x1046 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x1047 TObjFunc
	var_525_int = 509004; // 0x1049 PushI
	var_526_int = 35882; // 0x104a PushI
	var_527_int = 9875; // 0x104b PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x104c TObjFunc
	var_528_int = 534288; // 0x104e PushI
	var_529_int = 35882; // 0x104f PushI
	var_530_int = 35880; // 0x1050 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x1051 TObjFunc
	return 0; // 0x1053 Return
	
Label_4180:
	var_531_int = 35882; // 0x1054 PushI
	var_532_bool = var_55_string == var_531_int; // 0x1055 Eq
	if(var_532_bool == 0) goto Label_4203; // 0x1056 JumpB
	var_533_string = ""; // 0x1057 PushV
	var_533_string = "Neutral"; // 0x1058 MovS
	func_3284(var_56_bool, var_533_string); // 0x1059 NEW_2
	var_534_int = 534290; // 0x105b PushI
	SetMessage(var_534_int); // 0x105c TObjFunc
	ClearReplies(); // 0x105e TObjFunc
	var_535_int = 534291; // 0x1060 PushI
	var_536_int = 35887; // 0x1061 PushI
	var_537_int = 35885; // 0x1062 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x1063 TObjFunc
	var_538_int = 534292; // 0x1065 PushI
	var_539_int = -1; // 0x1066 PushI
	var_540_int = 35886; // 0x1067 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x1068 TObjFunc
	return 0; // 0x106a Return
	
Label_4203:
	var_541_int = 35887; // 0x106b PushI
	var_542_bool = var_55_string == var_541_int; // 0x106c Eq
	if(var_542_bool == 0) goto Label_4226; // 0x106d JumpB
	var_543_string = ""; // 0x106e PushV
	var_543_string = "Patronage"; // 0x106f MovS
	func_3284(var_56_bool, var_543_string); // 0x1070 NEW_2
	var_544_int = 534293; // 0x1072 PushI
	SetMessage(var_544_int); // 0x1073 TObjFunc
	ClearReplies(); // 0x1075 TObjFunc
	var_545_int = 534294; // 0x1077 PushI
	var_546_int = -1; // 0x1078 PushI
	var_547_int = 35888; // 0x1079 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x107a TObjFunc
	var_548_int = 534295; // 0x107c PushI
	var_549_int = -1; // 0x107d PushI
	var_550_int = 35889; // 0x107e PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x107f TObjFunc
	return 0; // 0x1081 Return
	
Label_4226:
	var_3_string = 1; // 0x1082 TMovB
	var_551_bool = 0; // 0x1083 PushV
	func_7411(var_551_bool); // 0x1084 NEW_2
	if(var_551_bool == 0) goto Label_4234; // 0x1086 JumpB
	lshStopAnimation(); // 0x1087 Func
	goto Label_4236; // 0x1089 Jump
	
Label_4236:
	return 0; // 0x108c Return
	
Label_4234:
	StopAnimation(); // 0x108a Func
	
Label_4238:
	return 0; // 0x108e Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x1183 PushI
	if(var_57_int == 0) goto Label_5626; // 0x1184 JumpB
	func_7300(); // 0x1186 NEW_2
	var_59_int = 12081; // 0x1188 PushI
	var_60_bool = var_56_bool == var_59_int; // 0x1189 Eq
	if(var_60_bool == 0) goto Label_4506; // 0x118a JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x118b PushV
	var_61_object = var_1_object; // 0x118c MovT
	var_62_object = var_0_object; // 0x118d MovT
	func_7563(); // 0x118e NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x1190 PushV
	var_117_object = var_1_object; // 0x1191 MovT
	var_118_object = var_0_object; // 0x1192 MovT
	func_7598(); // 0x1193 NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x1195 PushV
	var_121_object = var_1_object; // 0x1196 MovT
	var_122_object = var_0_object; // 0x1197 MovT
	func_7604(); // 0x1198 NEW_2
	
Label_4506:
	var_147_int = 12082; // 0x119a PushI
	var_148_bool = var_56_bool == var_147_int; // 0x119b Eq
	if(var_148_bool == 0) goto Label_4524; // 0x119c JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x119d PushV
	var_149_object = var_1_object; // 0x119e MovT
	var_150_object = var_0_object; // 0x119f MovT
	func_7563(); // 0x11a0 NEW_2
	var_151_object = Obj(); var_152_object = Obj(); // 0x11a2 PushV
	var_151_object = var_1_object; // 0x11a3 MovT
	var_152_object = var_0_object; // 0x11a4 MovT
	func_7598(); // 0x11a5 NEW_2
	var_153_object = Obj(); var_154_object = Obj(); // 0x11a7 PushV
	var_153_object = var_1_object; // 0x11a8 MovT
	var_154_object = var_0_object; // 0x11a9 MovT
	func_7604(); // 0x11aa NEW_2
	
Label_4524:
	var_155_int = 12079; // 0x11ac PushI
	var_156_bool = var_56_bool == var_155_int; // 0x11ad Eq
	if(var_156_bool == 0) goto Label_4542; // 0x11ae JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x11af PushV
	var_157_object = var_1_object; // 0x11b0 MovT
	var_158_object = var_0_object; // 0x11b1 MovT
	func_7563(); // 0x11b2 NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0x11b4 PushV
	var_159_object = var_1_object; // 0x11b5 MovT
	var_160_object = var_0_object; // 0x11b6 MovT
	func_7598(); // 0x11b7 NEW_2
	var_161_object = Obj(); var_162_object = Obj(); // 0x11b9 PushV
	var_161_object = var_1_object; // 0x11ba MovT
	var_162_object = var_0_object; // 0x11bb MovT
	func_7604(); // 0x11bc NEW_2
	
Label_4542:
	var_163_int = 11191; // 0x11be PushI
	var_164_bool = var_56_bool == var_163_int; // 0x11bf Eq
	if(var_164_bool == 0) goto Label_4560; // 0x11c0 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0x11c1 PushV
	var_165_object = var_1_object; // 0x11c2 MovT
	var_166_object = var_0_object; // 0x11c3 MovT
	func_7563(); // 0x11c4 NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x11c6 PushV
	var_167_object = var_1_object; // 0x11c7 MovT
	var_168_object = var_0_object; // 0x11c8 MovT
	func_7598(); // 0x11c9 NEW_2
	var_169_object = Obj(); var_170_object = Obj(); // 0x11cb PushV
	var_169_object = var_1_object; // 0x11cc MovT
	var_170_object = var_0_object; // 0x11cd MovT
	func_7604(); // 0x11ce NEW_2
	
Label_4560:
	var_171_int = 12096; // 0x11d0 PushI
	var_172_bool = var_56_bool == var_171_int; // 0x11d1 Eq
	if(var_172_bool == 0) goto Label_4573; // 0x11d2 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x11d3 PushV
	var_173_object = var_1_object; // 0x11d4 MovT
	var_174_object = var_0_object; // 0x11d5 MovT
	func_7620(); // 0x11d6 NEW_2
	var_177_object = Obj(); var_178_object = Obj(); // 0x11d8 PushV
	var_177_object = var_1_object; // 0x11d9 MovT
	var_178_object = var_0_object; // 0x11da MovT
	func_7626(); // 0x11db NEW_2
	
Label_4573:
	var_211_int = 12097; // 0x11dd PushI
	var_212_bool = var_56_bool == var_211_int; // 0x11de Eq
	if(var_212_bool == 0) goto Label_4586; // 0x11df JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x11e0 PushV
	var_213_object = var_1_object; // 0x11e1 MovT
	var_214_object = var_0_object; // 0x11e2 MovT
	func_7620(); // 0x11e3 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x11e5 PushV
	var_215_object = var_1_object; // 0x11e6 MovT
	var_216_object = var_0_object; // 0x11e7 MovT
	func_7937(); // 0x11e8 NEW_2
	
Label_4586:
	var_265_int = 12105; // 0x11ea PushI
	var_266_bool = var_56_bool == var_265_int; // 0x11eb Eq
	if(var_266_bool == 0) goto Label_4599; // 0x11ec JumpB
	var_267_object = Obj(); var_268_object = Obj(); // 0x11ed PushV
	var_267_object = var_1_object; // 0x11ee MovT
	var_268_object = var_0_object; // 0x11ef MovT
	func_7668(); // 0x11f0 NEW_2
	var_271_object = Obj(); var_272_object = Obj(); // 0x11f2 PushV
	var_271_object = var_1_object; // 0x11f3 MovT
	var_272_object = var_0_object; // 0x11f4 MovT
	func_7674(); // 0x11f5 NEW_2
	
Label_4599:
	var_339_int = 34559; // 0x11f7 PushI
	var_340_bool = var_56_bool == var_339_int; // 0x11f8 Eq
	if(var_340_bool == 0) goto Label_4607; // 0x11f9 JumpB
	var_341_object = Obj(); var_342_object = Obj(); // 0x11fa PushV
	var_341_object = var_1_object; // 0x11fb MovT
	var_342_object = var_0_object; // 0x11fc MovT
	func_7674(); // 0x11fd NEW_2
	
Label_4607:
	var_343_int = 10563; // 0x11ff PushI
	var_344_bool = var_56_bool == var_343_int; // 0x1200 Eq
	if(var_344_bool == 0) goto Label_4620; // 0x1201 JumpB
	var_345_object = Obj(); var_346_object = Obj(); // 0x1202 PushV
	var_345_object = var_1_object; // 0x1203 MovT
	var_346_object = var_0_object; // 0x1204 MovT
	func_7668(); // 0x1205 NEW_2
	var_347_object = Obj(); var_348_object = Obj(); // 0x1207 PushV
	var_347_object = var_1_object; // 0x1208 MovT
	var_348_object = var_0_object; // 0x1209 MovT
	func_7674(); // 0x120a NEW_2
	
Label_4620:
	var_349_int = 12103; // 0x120c PushI
	var_350_bool = var_56_bool == var_349_int; // 0x120d Eq
	if(var_350_bool == 0) goto Label_4633; // 0x120e JumpB
	var_351_object = Obj(); var_352_object = Obj(); // 0x120f PushV
	var_351_object = var_1_object; // 0x1210 MovT
	var_352_object = var_0_object; // 0x1211 MovT
	func_7668(); // 0x1212 NEW_2
	var_353_object = Obj(); var_354_object = Obj(); // 0x1214 PushV
	var_353_object = var_1_object; // 0x1215 MovT
	var_354_object = var_0_object; // 0x1216 MovT
	func_7674(); // 0x1217 NEW_2
	
Label_4633:
	var_355_int = 10572; // 0x1219 PushI
	var_356_bool = var_56_bool == var_355_int; // 0x121a Eq
	if(var_356_bool == 0) goto Label_4646; // 0x121b JumpB
	var_357_object = Obj(); var_358_object = Obj(); // 0x121c PushV
	var_357_object = var_1_object; // 0x121d MovT
	var_358_object = var_0_object; // 0x121e MovT
	func_7668(); // 0x121f NEW_2
	var_359_object = Obj(); var_360_object = Obj(); // 0x1221 PushV
	var_359_object = var_1_object; // 0x1222 MovT
	var_360_object = var_0_object; // 0x1223 MovT
	func_7674(); // 0x1224 NEW_2
	
Label_4646:
	var_361_int = 10573; // 0x1226 PushI
	var_362_bool = var_56_bool == var_361_int; // 0x1227 Eq
	if(var_362_bool == 0) goto Label_4659; // 0x1228 JumpB
	var_363_object = Obj(); var_364_object = Obj(); // 0x1229 PushV
	var_363_object = var_1_object; // 0x122a MovT
	var_364_object = var_0_object; // 0x122b MovT
	func_7668(); // 0x122c NEW_2
	var_365_object = Obj(); var_366_object = Obj(); // 0x122e PushV
	var_365_object = var_1_object; // 0x122f MovT
	var_366_object = var_0_object; // 0x1230 MovT
	func_7674(); // 0x1231 NEW_2
	
Label_4659:
	var_367_int = 11951; // 0x1233 PushI
	var_368_bool = var_55_string == var_367_int; // 0x1234 Eq
	if(var_368_bool == 0) goto Label_4764; // 0x1235 JumpB
	var_369_bool = 0; // 0x1236 PushV
	var_369_bool = 0; // 0x1237 MovB
	var_370_bool = 0; var_371_object = Obj(); // 0x1238 PushV
	var_371_object = var_1_object; // 0x1239 MovT
	func_8279(var_371_object); // 0x123a NEW_2
	if(var_370_bool == 0) goto Label_4675; // 0x123c JumpB
	var_378_bool = 0; var_379_object = Obj(); // 0x123d PushV
	var_379_object = var_1_object; // 0x123e MovT
	func_8291(var_379_object); // 0x123f NEW_2
	if(var_378_bool == 0) goto Label_4675; // 0x1241 JumpB
	var_369_bool = 1; // 0x1242 MovB
	
Label_4675:
	if(var_369_bool == 0) goto Label_4696; // 0x1243 JumpB
	var_384_object = Obj(); var_385_object = Obj(); // 0x1244 PushV
	var_384_object = var_1_object; // 0x1245 MovT
	var_385_object = var_0_object; // 0x1246 MovT
	func_8065(); // 0x1247 NEW_2
	var_388_string = ""; // 0x1249 PushV
	var_388_string = "Neutral"; // 0x124a MovS
	func_4460(var_56_bool, var_388_string); // 0x124b NEW_2
	var_405_int = 510811; // 0x124d PushI
	SetMessage(var_405_int); // 0x124e TObjFunc
	ClearReplies(); // 0x1250 TObjFunc
	var_406_int = 510812; // 0x1252 PushI
	var_407_int = 11147; // 0x1253 PushI
	var_408_int = 11952; // 0x1254 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x1255 TObjFunc
	return 0; // 0x1257 Return
	
Label_4696:
	var_409_string = ""; // 0x1258 PushV
	var_409_string = "Neutral"; // 0x1259 MovS
	func_4460(var_56_bool, var_409_string); // 0x125a NEW_2
	var_410_int = 510836; // 0x125c PushI
	SetMessage(var_410_int); // 0x125d TObjFunc
	ClearReplies(); // 0x125f TObjFunc
	var_411_bool = 0; // 0x1261 PushV
	var_411_bool = 0; // 0x1262 MovB
	var_412_bool = 0; var_413_object = Obj(); // 0x1263 PushV
	var_413_object = var_1_object; // 0x1264 MovT
	func_8303(var_413_object); // 0x1265 NEW_2
	if(var_412_bool == 0) goto Label_4718; // 0x1267 JumpB
	var_418_bool = 0; var_419_object = Obj(); // 0x1268 PushV
	var_419_object = var_1_object; // 0x1269 MovT
	func_8315(var_419_object); // 0x126a NEW_2
	if(var_418_bool == 0) goto Label_4718; // 0x126c JumpB
	var_411_bool = 1; // 0x126d MovB
	
Label_4718:
	if(var_411_bool == 0) goto Label_4724; // 0x126e JumpB
	var_424_int = 510839; // 0x126f PushI
	var_425_int = 11148; // 0x1270 PushI
	var_426_int = 11983; // 0x1271 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x1272 TObjFunc
	
Label_4724:
	var_427_bool = 0; var_428_object = Obj(); // 0x1274 PushV
	var_428_object = var_1_object; // 0x1275 MovT
	func_8327(var_427_bool, var_428_object); // 0x1276 NEW_2
	if(var_427_bool == 0) goto Label_4734; // 0x1278 JumpB
	var_446_int = 511508; // 0x1279 PushI
	var_447_int = 12709; // 0x127a PushI
	var_448_int = 12708; // 0x127b PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x127c TObjFunc
	
Label_4734:
	var_449_bool = 0; // 0x127e PushV
	var_449_bool = 0; // 0x127f MovB
	var_450_bool = 0; var_451_object = Obj(); // 0x1280 PushV
	var_451_object = var_1_object; // 0x1281 MovT
	func_8357(var_450_bool, var_451_object); // 0x1282 NEW_2
	if(var_450_bool == 0) goto Label_4747; // 0x1284 JumpB
	var_463_bool = 0; var_464_object = Obj(); // 0x1285 PushV
	var_464_object = var_1_object; // 0x1286 MovT
	func_8385(var_464_object); // 0x1287 NEW_2
	if(var_463_bool == 0) goto Label_4747; // 0x1289 JumpB
	var_449_bool = 1; // 0x128a MovB
	
Label_4747:
	if(var_449_bool == 0) goto Label_4753; // 0x128b JumpB
	var_469_int = 510837; // 0x128c PushI
	var_470_int = 10553; // 0x128d PushI
	var_471_int = 11981; // 0x128e PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x128f TObjFunc
	
Label_4753:
	var_472_int = 511480; // 0x1291 PushI
	var_473_int = -1; // 0x1292 PushI
	var_474_int = 12686; // 0x1293 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x1294 TObjFunc
	var_475_int = 533048; // 0x1296 PushI
	var_476_int = -1; // 0x1297 PushI
	var_477_int = 34560; // 0x1298 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x1299 TObjFunc
	return 0; // 0x129b Return
	
Label_4764:
	var_478_int = 10553; // 0x129c PushI
	var_479_bool = var_55_string == var_478_int; // 0x129d Eq
	if(var_479_bool == 0) goto Label_4792; // 0x129e JumpB
	var_480_string = ""; // 0x129f PushV
	var_480_string = "Neutral"; // 0x12a0 MovS
	func_4460(var_56_bool, var_480_string); // 0x12a1 NEW_2
	var_481_int = 509594; // 0x12a3 PushI
	SetMessage(var_481_int); // 0x12a4 TObjFunc
	ClearReplies(); // 0x12a6 TObjFunc
	var_482_int = 509595; // 0x12a8 PushI
	var_483_int = 10555; // 0x12a9 PushI
	var_484_int = 10554; // 0x12aa PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x12ab TObjFunc
	var_485_int = 509612; // 0x12ad PushI
	var_486_int = 10555; // 0x12ae PushI
	var_487_int = 10574; // 0x12af PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x12b0 TObjFunc
	var_488_int = 509613; // 0x12b2 PushI
	var_489_int = 10555; // 0x12b3 PushI
	var_490_int = 10576; // 0x12b4 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x12b5 TObjFunc
	return 0; // 0x12b7 Return
	
Label_4792:
	var_491_int = 10555; // 0x12b8 PushI
	var_492_bool = var_55_string == var_491_int; // 0x12b9 Eq
	if(var_492_bool == 0) goto Label_4815; // 0x12ba JumpB
	var_493_string = ""; // 0x12bb PushV
	var_493_string = "Neutral"; // 0x12bc MovS
	func_4460(var_56_bool, var_493_string); // 0x12bd NEW_2
	var_494_int = 509596; // 0x12bf PushI
	SetMessage(var_494_int); // 0x12c0 TObjFunc
	ClearReplies(); // 0x12c2 TObjFunc
	var_495_int = 509597; // 0x12c4 PushI
	var_496_int = 10557; // 0x12c5 PushI
	var_497_int = 10556; // 0x12c6 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x12c7 TObjFunc
	var_498_int = 509608; // 0x12c9 PushI
	var_499_int = 10571; // 0x12ca PushI
	var_500_int = 10570; // 0x12cb PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x12cc TObjFunc
	return 0; // 0x12ce Return
	
Label_4815:
	var_501_int = 10571; // 0x12cf PushI
	var_502_bool = var_55_string == var_501_int; // 0x12d0 Eq
	if(var_502_bool == 0) goto Label_4838; // 0x12d1 JumpB
	var_503_string = ""; // 0x12d2 PushV
	var_503_string = "Neutral"; // 0x12d3 MovS
	func_4460(var_56_bool, var_503_string); // 0x12d4 NEW_2
	var_504_int = 509609; // 0x12d6 PushI
	SetMessage(var_504_int); // 0x12d7 TObjFunc
	ClearReplies(); // 0x12d9 TObjFunc
	var_505_int = 509610; // 0x12db PushI
	var_506_int = -1; // 0x12dc PushI
	var_507_int = 10572; // 0x12dd PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x12de TObjFunc
	var_508_int = 509611; // 0x12e0 PushI
	var_509_int = -1; // 0x12e1 PushI
	var_510_int = 10573; // 0x12e2 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x12e3 TObjFunc
	return 0; // 0x12e5 Return
	
Label_4838:
	var_511_int = 10557; // 0x12e6 PushI
	var_512_bool = var_55_string == var_511_int; // 0x12e7 Eq
	if(var_512_bool == 0) goto Label_4861; // 0x12e8 JumpB
	var_513_string = ""; // 0x12e9 PushV
	var_513_string = "Patronage"; // 0x12ea MovS
	func_4460(var_56_bool, var_513_string); // 0x12eb NEW_2
	var_514_int = 509598; // 0x12ed PushI
	SetMessage(var_514_int); // 0x12ee TObjFunc
	ClearReplies(); // 0x12f0 TObjFunc
	var_515_int = 509599; // 0x12f2 PushI
	var_516_int = 10559; // 0x12f3 PushI
	var_517_int = 10558; // 0x12f4 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x12f5 TObjFunc
	var_518_int = 509607; // 0x12f7 PushI
	var_519_int = 10559; // 0x12f8 PushI
	var_520_int = 10568; // 0x12f9 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x12fa TObjFunc
	return 0; // 0x12fc Return
	
Label_4861:
	var_521_int = 10559; // 0x12fd PushI
	var_522_bool = var_55_string == var_521_int; // 0x12fe Eq
	if(var_522_bool == 0) goto Label_4889; // 0x12ff JumpB
	var_523_string = ""; // 0x1300 PushV
	var_523_string = "Patronage"; // 0x1301 MovS
	func_4460(var_56_bool, var_523_string); // 0x1302 NEW_2
	var_524_int = 509600; // 0x1304 PushI
	SetMessage(var_524_int); // 0x1305 TObjFunc
	ClearReplies(); // 0x1307 TObjFunc
	var_525_int = 509601; // 0x1309 PushI
	var_526_int = 10561; // 0x130a PushI
	var_527_int = 10560; // 0x130b PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x130c TObjFunc
	var_528_int = 509605; // 0x130e PushI
	var_529_int = 10561; // 0x130f PushI
	var_530_int = 10564; // 0x1310 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x1311 TObjFunc
	var_531_int = 509606; // 0x1313 PushI
	var_532_int = 10561; // 0x1314 PushI
	var_533_int = 10566; // 0x1315 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x1316 TObjFunc
	return 0; // 0x1318 Return
	
Label_4889:
	var_534_int = 10561; // 0x1319 PushI
	var_535_bool = var_55_string == var_534_int; // 0x131a Eq
	if(var_535_bool == 0) goto Label_4917; // 0x131b JumpB
	var_536_string = ""; // 0x131c PushV
	var_536_string = "Patronage"; // 0x131d MovS
	func_4460(var_56_bool, var_536_string); // 0x131e NEW_2
	var_537_int = 509602; // 0x1320 PushI
	SetMessage(var_537_int); // 0x1321 TObjFunc
	ClearReplies(); // 0x1323 TObjFunc
	var_538_int = 509603; // 0x1325 PushI
	var_539_int = 12104; // 0x1326 PushI
	var_540_int = 10562; // 0x1327 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x1328 TObjFunc
	var_541_int = 509604; // 0x132a PushI
	var_542_int = -1; // 0x132b PushI
	var_543_int = 10563; // 0x132c PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x132d TObjFunc
	var_544_int = 510944; // 0x132f PushI
	var_545_int = -1; // 0x1330 PushI
	var_546_int = 12103; // 0x1331 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x1332 TObjFunc
	return 0; // 0x1334 Return
	
Label_4917:
	var_547_int = 12104; // 0x1335 PushI
	var_548_bool = var_55_string == var_547_int; // 0x1336 Eq
	if(var_548_bool == 0) goto Label_4940; // 0x1337 JumpB
	var_549_string = ""; // 0x1338 PushV
	var_549_string = "Neutral"; // 0x1339 MovS
	func_4460(var_56_bool, var_549_string); // 0x133a NEW_2
	var_550_int = 510945; // 0x133c PushI
	SetMessage(var_550_int); // 0x133d TObjFunc
	ClearReplies(); // 0x133f TObjFunc
	var_551_int = 510946; // 0x1341 PushI
	var_552_int = -1; // 0x1342 PushI
	var_553_int = 12105; // 0x1343 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x1344 TObjFunc
	var_554_int = 533047; // 0x1346 PushI
	var_555_int = -1; // 0x1347 PushI
	var_556_int = 34559; // 0x1348 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x1349 TObjFunc
	return 0; // 0x134b Return
	
Label_4940:
	var_557_int = 12709; // 0x134c PushI
	var_558_bool = var_55_string == var_557_int; // 0x134d Eq
	if(var_558_bool == 0) goto Label_4963; // 0x134e JumpB
	var_559_string = ""; // 0x134f PushV
	var_559_string = "Neutral"; // 0x1350 MovS
	func_4460(var_56_bool, var_559_string); // 0x1351 NEW_2
	var_560_int = 511509; // 0x1353 PushI
	SetMessage(var_560_int); // 0x1354 TObjFunc
	ClearReplies(); // 0x1356 TObjFunc
	var_561_int = 511510; // 0x1358 PushI
	var_562_int = 12711; // 0x1359 PushI
	var_563_int = 12710; // 0x135a PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x135b TObjFunc
	var_564_int = 511512; // 0x135d PushI
	var_565_int = 12713; // 0x135e PushI
	var_566_int = 12712; // 0x135f PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x1360 TObjFunc
	return 0; // 0x1362 Return
	
Label_4963:
	var_567_int = 12713; // 0x1363 PushI
	var_568_bool = var_55_string == var_567_int; // 0x1364 Eq
	if(var_568_bool == 0) goto Label_4981; // 0x1365 JumpB
	var_569_string = ""; // 0x1366 PushV
	var_569_string = "Neutral"; // 0x1367 MovS
	func_4460(var_56_bool, var_569_string); // 0x1368 NEW_2
	var_570_int = 511513; // 0x136a PushI
	SetMessage(var_570_int); // 0x136b TObjFunc
	ClearReplies(); // 0x136d TObjFunc
	var_571_int = 511514; // 0x136f PushI
	var_572_int = 12715; // 0x1370 PushI
	var_573_int = 12714; // 0x1371 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x1372 TObjFunc
	return 0; // 0x1374 Return
	
Label_4981:
	var_574_int = 12715; // 0x1375 PushI
	var_575_bool = var_55_string == var_574_int; // 0x1376 Eq
	if(var_575_bool == 0) goto Label_4999; // 0x1377 JumpB
	var_576_string = ""; // 0x1378 PushV
	var_576_string = "Neutral"; // 0x1379 MovS
	func_4460(var_56_bool, var_576_string); // 0x137a NEW_2
	var_577_int = 511515; // 0x137c PushI
	SetMessage(var_577_int); // 0x137d TObjFunc
	ClearReplies(); // 0x137f TObjFunc
	var_578_int = 511516; // 0x1381 PushI
	var_579_int = -1; // 0x1382 PushI
	var_580_int = 12716; // 0x1383 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x1384 TObjFunc
	return 0; // 0x1386 Return
	
Label_4999:
	var_581_int = 12711; // 0x1387 PushI
	var_582_bool = var_55_string == var_581_int; // 0x1388 Eq
	if(var_582_bool == 0) goto Label_5017; // 0x1389 JumpB
	var_583_string = ""; // 0x138a PushV
	var_583_string = "Neutral"; // 0x138b MovS
	func_4460(var_56_bool, var_583_string); // 0x138c NEW_2
	var_584_int = 511511; // 0x138e PushI
	SetMessage(var_584_int); // 0x138f TObjFunc
	ClearReplies(); // 0x1391 TObjFunc
	var_585_int = 511517; // 0x1393 PushI
	var_586_int = 12718; // 0x1394 PushI
	var_587_int = 12717; // 0x1395 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x1396 TObjFunc
	return 0; // 0x1398 Return
	
Label_5017:
	var_588_int = 12718; // 0x1399 PushI
	var_589_bool = var_55_string == var_588_int; // 0x139a Eq
	if(var_589_bool == 0) goto Label_5035; // 0x139b JumpB
	var_590_string = ""; // 0x139c PushV
	var_590_string = "Neutral"; // 0x139d MovS
	func_4460(var_56_bool, var_590_string); // 0x139e NEW_2
	var_591_int = 511518; // 0x13a0 PushI
	SetMessage(var_591_int); // 0x13a1 TObjFunc
	ClearReplies(); // 0x13a3 TObjFunc
	var_592_int = 511519; // 0x13a5 PushI
	var_593_int = -1; // 0x13a6 PushI
	var_594_int = 12719; // 0x13a7 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x13a8 TObjFunc
	return 0; // 0x13aa Return
	
Label_5035:
	var_595_int = 10519; // 0x13ab PushI
	var_596_bool = var_55_string == var_595_int; // 0x13ac Eq
	if(var_596_bool == 0) goto Label_5038; // 0x13ad JumpB
	
Label_5038:
	var_597_int = 10548; // 0x13ae PushI
	var_598_bool = var_55_string == var_597_int; // 0x13af Eq
	if(var_598_bool == 0) goto Label_5061; // 0x13b0 JumpB
	var_599_string = ""; // 0x13b1 PushV
	var_599_string = "Distrust"; // 0x13b2 MovS
	func_4460(var_56_bool, var_599_string); // 0x13b3 NEW_2
	var_600_int = 509591; // 0x13b5 PushI
	SetMessage(var_600_int); // 0x13b6 TObjFunc
	ClearReplies(); // 0x13b8 TObjFunc
	var_601_int = 509592; // 0x13ba PushI
	var_602_int = 10521; // 0x13bb PushI
	var_603_int = 10549; // 0x13bc PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x13bd TObjFunc
	var_604_int = 509593; // 0x13bf PushI
	var_605_int = 10521; // 0x13c0 PushI
	var_606_int = 10551; // 0x13c1 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x13c2 TObjFunc
	return 0; // 0x13c4 Return
	
Label_5061:
	var_607_int = 10521; // 0x13c5 PushI
	var_608_bool = var_55_string == var_607_int; // 0x13c6 Eq
	if(var_608_bool == 0) goto Label_5089; // 0x13c7 JumpB
	var_609_string = ""; // 0x13c8 PushV
	var_609_string = "Distrust"; // 0x13c9 MovS
	func_4460(var_56_bool, var_609_string); // 0x13ca NEW_2
	var_610_int = 509569; // 0x13cc PushI
	SetMessage(var_610_int); // 0x13cd TObjFunc
	ClearReplies(); // 0x13cf TObjFunc
	var_611_int = 509572; // 0x13d1 PushI
	var_612_int = 10525; // 0x13d2 PushI
	var_613_int = 10524; // 0x13d3 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x13d4 TObjFunc
	var_614_int = 509570; // 0x13d6 PushI
	var_615_int = -1; // 0x13d7 PushI
	var_616_int = 10522; // 0x13d8 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x13d9 TObjFunc
	var_617_int = 509571; // 0x13db PushI
	var_618_int = -1; // 0x13dc PushI
	var_619_int = 10523; // 0x13dd PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x13de TObjFunc
	return 0; // 0x13e0 Return
	
Label_5089:
	var_620_int = 10525; // 0x13e1 PushI
	var_621_bool = var_55_string == var_620_int; // 0x13e2 Eq
	if(var_621_bool == 0) goto Label_5112; // 0x13e3 JumpB
	var_622_string = ""; // 0x13e4 PushV
	var_622_string = "Neutral"; // 0x13e5 MovS
	func_4460(var_56_bool, var_622_string); // 0x13e6 NEW_2
	var_623_int = 509573; // 0x13e8 PushI
	SetMessage(var_623_int); // 0x13e9 TObjFunc
	ClearReplies(); // 0x13eb TObjFunc
	var_624_int = 509574; // 0x13ed PushI
	var_625_int = 10527; // 0x13ee PushI
	var_626_int = 10526; // 0x13ef PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0x13f0 TObjFunc
	var_627_int = 509585; // 0x13f2 PushI
	var_628_int = 10540; // 0x13f3 PushI
	var_629_int = 10539; // 0x13f4 PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x13f5 TObjFunc
	return 0; // 0x13f7 Return
	
Label_5112:
	var_630_int = 10540; // 0x13f8 PushI
	var_631_bool = var_55_string == var_630_int; // 0x13f9 Eq
	if(var_631_bool == 0) goto Label_5135; // 0x13fa JumpB
	var_632_string = ""; // 0x13fb PushV
	var_632_string = "Neutral"; // 0x13fc MovS
	func_4460(var_56_bool, var_632_string); // 0x13fd NEW_2
	var_633_int = 509586; // 0x13ff PushI
	SetMessage(var_633_int); // 0x1400 TObjFunc
	ClearReplies(); // 0x1402 TObjFunc
	var_634_int = 509587; // 0x1404 PushI
	var_635_int = 10527; // 0x1405 PushI
	var_636_int = 10541; // 0x1406 PushI
	AddReply(var_634_int, var_635_int, var_636_int); // 0x1407 TObjFunc
	var_637_int = 509588; // 0x1409 PushI
	var_638_int = 10527; // 0x140a PushI
	var_639_int = 10543; // 0x140b PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x140c TObjFunc
	return 0; // 0x140e Return
	
Label_5135:
	var_640_int = 10527; // 0x140f PushI
	var_641_bool = var_55_string == var_640_int; // 0x1410 Eq
	if(var_641_bool == 0) goto Label_5153; // 0x1411 JumpB
	var_642_string = ""; // 0x1412 PushV
	var_642_string = "Neutral"; // 0x1413 MovS
	func_4460(var_56_bool, var_642_string); // 0x1414 NEW_2
	var_643_int = 509575; // 0x1416 PushI
	SetMessage(var_643_int); // 0x1417 TObjFunc
	ClearReplies(); // 0x1419 TObjFunc
	var_644_int = 509577; // 0x141b PushI
	var_645_int = 10530; // 0x141c PushI
	var_646_int = 10529; // 0x141d PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x141e TObjFunc
	return 0; // 0x1420 Return
	
Label_5153:
	var_647_int = 10530; // 0x1421 PushI
	var_648_bool = var_55_string == var_647_int; // 0x1422 Eq
	if(var_648_bool == 0) goto Label_5181; // 0x1423 JumpB
	var_649_string = ""; // 0x1424 PushV
	var_649_string = "Neutral"; // 0x1425 MovS
	func_4460(var_56_bool, var_649_string); // 0x1426 NEW_2
	var_650_int = 509578; // 0x1428 PushI
	SetMessage(var_650_int); // 0x1429 TObjFunc
	ClearReplies(); // 0x142b TObjFunc
	var_651_int = 509579; // 0x142d PushI
	var_652_int = 10532; // 0x142e PushI
	var_653_int = 10531; // 0x142f PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x1430 TObjFunc
	var_654_int = 509583; // 0x1432 PushI
	var_655_int = 10532; // 0x1433 PushI
	var_656_int = 10535; // 0x1434 PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x1435 TObjFunc
	var_657_int = 509584; // 0x1437 PushI
	var_658_int = 10532; // 0x1438 PushI
	var_659_int = 10537; // 0x1439 PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x143a TObjFunc
	return 0; // 0x143c Return
	
Label_5181:
	var_660_int = 10532; // 0x143d PushI
	var_661_bool = var_55_string == var_660_int; // 0x143e Eq
	if(var_661_bool == 0) goto Label_5204; // 0x143f JumpB
	var_662_string = ""; // 0x1440 PushV
	var_662_string = "Repentance"; // 0x1441 MovS
	func_4460(var_56_bool, var_662_string); // 0x1442 NEW_2
	var_663_int = 509580; // 0x1444 PushI
	SetMessage(var_663_int); // 0x1445 TObjFunc
	ClearReplies(); // 0x1447 TObjFunc
	var_664_int = 509581; // 0x1449 PushI
	var_665_int = -1; // 0x144a PushI
	var_666_int = 10533; // 0x144b PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x144c TObjFunc
	var_667_int = 509582; // 0x144e PushI
	var_668_int = -1; // 0x144f PushI
	var_669_int = 10534; // 0x1450 PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x1451 TObjFunc
	return 0; // 0x1453 Return
	
Label_5204:
	var_670_int = 11148; // 0x1454 PushI
	var_671_bool = var_55_string == var_670_int; // 0x1455 Eq
	if(var_671_bool == 0) goto Label_5222; // 0x1456 JumpB
	var_672_string = ""; // 0x1457 PushV
	var_672_string = "Neutral"; // 0x1458 MovS
	func_4460(var_56_bool, var_672_string); // 0x1459 NEW_2
	var_673_int = 510112; // 0x145b PushI
	SetMessage(var_673_int); // 0x145c TObjFunc
	ClearReplies(); // 0x145e TObjFunc
	var_674_int = 510115; // 0x1460 PushI
	var_675_int = 11154; // 0x1461 PushI
	var_676_int = 11151; // 0x1462 PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x1463 TObjFunc
	return 0; // 0x1465 Return
	
Label_5222:
	var_677_int = 11154; // 0x1466 PushI
	var_678_bool = var_55_string == var_677_int; // 0x1467 Eq
	if(var_678_bool == 0) goto Label_5250; // 0x1468 JumpB
	var_679_string = ""; // 0x1469 PushV
	var_679_string = "Repentance"; // 0x146a MovS
	func_4460(var_56_bool, var_679_string); // 0x146b NEW_2
	var_680_int = 510118; // 0x146d PushI
	SetMessage(var_680_int); // 0x146e TObjFunc
	ClearReplies(); // 0x1470 TObjFunc
	var_681_int = 510119; // 0x1472 PushI
	var_682_int = 11156; // 0x1473 PushI
	var_683_int = 11155; // 0x1474 PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0x1475 TObjFunc
	var_684_int = 510933; // 0x1477 PushI
	var_685_int = 12088; // 0x1478 PushI
	var_686_int = 12087; // 0x1479 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0x147a TObjFunc
	var_687_int = 510124; // 0x147c PushI
	var_688_int = 11161; // 0x147d PushI
	var_689_int = 11160; // 0x147e PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x147f TObjFunc
	return 0; // 0x1481 Return
	
Label_5250:
	var_690_int = 11161; // 0x1482 PushI
	var_691_bool = var_55_string == var_690_int; // 0x1483 Eq
	if(var_691_bool == 0) goto Label_5273; // 0x1484 JumpB
	var_692_string = ""; // 0x1485 PushV
	var_692_string = "Neutral"; // 0x1486 MovS
	func_4460(var_56_bool, var_692_string); // 0x1487 NEW_2
	var_693_int = 510125; // 0x1489 PushI
	SetMessage(var_693_int); // 0x148a TObjFunc
	ClearReplies(); // 0x148c TObjFunc
	var_694_int = 510126; // 0x148e PushI
	var_695_int = 11984; // 0x148f PushI
	var_696_int = 11162; // 0x1490 PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0x1491 TObjFunc
	var_697_int = 510127; // 0x1493 PushI
	var_698_int = 11984; // 0x1494 PushI
	var_699_int = 11163; // 0x1495 PushI
	AddReply(var_697_int, var_698_int, var_699_int); // 0x1496 TObjFunc
	return 0; // 0x1498 Return
	
Label_5273:
	var_700_int = 12088; // 0x1499 PushI
	var_701_bool = var_55_string == var_700_int; // 0x149a Eq
	if(var_701_bool == 0) goto Label_5291; // 0x149b JumpB
	var_702_string = ""; // 0x149c PushV
	var_702_string = "Neutral"; // 0x149d MovS
	func_4460(var_56_bool, var_702_string); // 0x149e NEW_2
	var_703_int = 510934; // 0x14a0 PushI
	SetMessage(var_703_int); // 0x14a1 TObjFunc
	ClearReplies(); // 0x14a3 TObjFunc
	var_704_int = 510935; // 0x14a5 PushI
	var_705_int = 12090; // 0x14a6 PushI
	var_706_int = 12089; // 0x14a7 PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0x14a8 TObjFunc
	return 0; // 0x14aa Return
	
Label_5291:
	var_707_int = 12090; // 0x14ab PushI
	var_708_bool = var_55_string == var_707_int; // 0x14ac Eq
	if(var_708_bool == 0) goto Label_5314; // 0x14ad JumpB
	var_709_string = ""; // 0x14ae PushV
	var_709_string = "Anger"; // 0x14af MovS
	func_4460(var_56_bool, var_709_string); // 0x14b0 NEW_2
	var_710_int = 510936; // 0x14b2 PushI
	SetMessage(var_710_int); // 0x14b3 TObjFunc
	ClearReplies(); // 0x14b5 TObjFunc
	var_711_int = 510939; // 0x14b7 PushI
	var_712_int = 11156; // 0x14b8 PushI
	var_713_int = 12093; // 0x14b9 PushI
	AddReply(var_711_int, var_712_int, var_713_int); // 0x14ba TObjFunc
	var_714_int = 510937; // 0x14bc PushI
	var_715_int = 12092; // 0x14bd PushI
	var_716_int = 12091; // 0x14be PushI
	AddReply(var_714_int, var_715_int, var_716_int); // 0x14bf TObjFunc
	return 0; // 0x14c1 Return
	
Label_5314:
	var_717_int = 12092; // 0x14c2 PushI
	var_718_bool = var_55_string == var_717_int; // 0x14c3 Eq
	if(var_718_bool == 0) goto Label_5332; // 0x14c4 JumpB
	var_719_string = ""; // 0x14c5 PushV
	var_719_string = "Neutral"; // 0x14c6 MovS
	func_4460(var_56_bool, var_719_string); // 0x14c7 NEW_2
	var_720_int = 510938; // 0x14c9 PushI
	SetMessage(var_720_int); // 0x14ca TObjFunc
	ClearReplies(); // 0x14cc TObjFunc
	var_721_int = 510943; // 0x14ce PushI
	var_722_int = 11156; // 0x14cf PushI
	var_723_int = 12101; // 0x14d0 PushI
	AddReply(var_721_int, var_722_int, var_723_int); // 0x14d1 TObjFunc
	return 0; // 0x14d3 Return
	
Label_5332:
	var_724_int = 11156; // 0x14d4 PushI
	var_725_bool = var_55_string == var_724_int; // 0x14d5 Eq
	if(var_725_bool == 0) goto Label_5355; // 0x14d6 JumpB
	var_726_string = ""; // 0x14d7 PushV
	var_726_string = "Repentance"; // 0x14d8 MovS
	func_4460(var_56_bool, var_726_string); // 0x14d9 NEW_2
	var_727_int = 510120; // 0x14db PushI
	SetMessage(var_727_int); // 0x14dc TObjFunc
	ClearReplies(); // 0x14de TObjFunc
	var_728_int = 510121; // 0x14e0 PushI
	var_729_int = 11984; // 0x14e1 PushI
	var_730_int = 11157; // 0x14e2 PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0x14e3 TObjFunc
	var_731_int = 510123; // 0x14e5 PushI
	var_732_int = 12094; // 0x14e6 PushI
	var_733_int = 11159; // 0x14e7 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0x14e8 TObjFunc
	return 0; // 0x14ea Return
	
Label_5355:
	var_734_int = 12094; // 0x14eb PushI
	var_735_bool = var_55_string == var_734_int; // 0x14ec Eq
	if(var_735_bool == 0) goto Label_5373; // 0x14ed JumpB
	var_736_string = ""; // 0x14ee PushV
	var_736_string = "Neutral"; // 0x14ef MovS
	func_4460(var_56_bool, var_736_string); // 0x14f0 NEW_2
	var_737_int = 510940; // 0x14f2 PushI
	SetMessage(var_737_int); // 0x14f3 TObjFunc
	ClearReplies(); // 0x14f5 TObjFunc
	var_738_int = 510122; // 0x14f7 PushI
	var_739_int = 11984; // 0x14f8 PushI
	var_740_int = 11158; // 0x14f9 PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0x14fa TObjFunc
	return 0; // 0x14fc Return
	
Label_5373:
	var_741_int = 11984; // 0x14fd PushI
	var_742_bool = var_55_string == var_741_int; // 0x14fe Eq
	if(var_742_bool == 0) goto Label_5396; // 0x14ff JumpB
	var_743_string = ""; // 0x1500 PushV
	var_743_string = "Repentance"; // 0x1501 MovS
	func_4460(var_56_bool, var_743_string); // 0x1502 NEW_2
	var_744_int = 510840; // 0x1504 PushI
	SetMessage(var_744_int); // 0x1505 TObjFunc
	ClearReplies(); // 0x1507 TObjFunc
	var_745_int = 510941; // 0x1509 PushI
	var_746_int = -1; // 0x150a PushI
	var_747_int = 12096; // 0x150b PushI
	AddReply(var_745_int, var_746_int, var_747_int); // 0x150c TObjFunc
	var_748_int = 510942; // 0x150e PushI
	var_749_int = -1; // 0x150f PushI
	var_750_int = 12097; // 0x1510 PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x1511 TObjFunc
	return 0; // 0x1513 Return
	
Label_5396:
	var_751_int = 11147; // 0x1514 PushI
	var_752_bool = var_55_string == var_751_int; // 0x1515 Eq
	if(var_752_bool == 0) goto Label_5419; // 0x1516 JumpB
	var_753_string = ""; // 0x1517 PushV
	var_753_string = "Repentance"; // 0x1518 MovS
	func_4460(var_56_bool, var_753_string); // 0x1519 NEW_2
	var_754_int = 510111; // 0x151b PushI
	SetMessage(var_754_int); // 0x151c TObjFunc
	ClearReplies(); // 0x151e TObjFunc
	var_755_int = 510138; // 0x1520 PushI
	var_756_int = 11181; // 0x1521 PushI
	var_757_int = 11180; // 0x1522 PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0x1523 TObjFunc
	var_758_int = 510140; // 0x1525 PushI
	var_759_int = 11183; // 0x1526 PushI
	var_760_int = 11182; // 0x1527 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x1528 TObjFunc
	return 0; // 0x152a Return
	
Label_5419:
	var_761_int = 11183; // 0x152b PushI
	var_762_bool = var_55_string == var_761_int; // 0x152c Eq
	if(var_762_bool == 0) goto Label_5437; // 0x152d JumpB
	var_763_string = ""; // 0x152e PushV
	var_763_string = "Neutral"; // 0x152f MovS
	func_4460(var_56_bool, var_763_string); // 0x1530 NEW_2
	var_764_int = 510141; // 0x1532 PushI
	SetMessage(var_764_int); // 0x1533 TObjFunc
	ClearReplies(); // 0x1535 TObjFunc
	var_765_int = 510142; // 0x1537 PushI
	var_766_int = 11186; // 0x1538 PushI
	var_767_int = 11184; // 0x1539 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0x153a TObjFunc
	return 0; // 0x153c Return
	
Label_5437:
	var_768_int = 12070; // 0x153d PushI
	var_769_bool = var_55_string == var_768_int; // 0x153e Eq
	if(var_769_bool == 0) goto Label_5440; // 0x153f JumpB
	
Label_5440:
	var_770_int = 12073; // 0x1540 PushI
	var_771_bool = var_55_string == var_770_int; // 0x1541 Eq
	if(var_771_bool == 0) goto Label_5458; // 0x1542 JumpB
	var_772_string = ""; // 0x1543 PushV
	var_772_string = "Neutral"; // 0x1544 MovS
	func_4460(var_56_bool, var_772_string); // 0x1545 NEW_2
	var_773_int = 510924; // 0x1547 PushI
	SetMessage(var_773_int); // 0x1548 TObjFunc
	ClearReplies(); // 0x154a TObjFunc
	var_774_int = 510925; // 0x154c PushI
	var_775_int = 11181; // 0x154d PushI
	var_776_int = 12074; // 0x154e PushI
	AddReply(var_774_int, var_775_int, var_776_int); // 0x154f TObjFunc
	return 0; // 0x1551 Return
	
Label_5458:
	var_777_int = 11186; // 0x1552 PushI
	var_778_bool = var_55_string == var_777_int; // 0x1553 Eq
	if(var_778_bool == 0) goto Label_5481; // 0x1554 JumpB
	var_779_string = ""; // 0x1555 PushV
	var_779_string = "Neutral"; // 0x1556 MovS
	func_4460(var_56_bool, var_779_string); // 0x1557 NEW_2
	var_780_int = 510144; // 0x1559 PushI
	SetMessage(var_780_int); // 0x155a TObjFunc
	ClearReplies(); // 0x155c TObjFunc
	var_781_int = 510919; // 0x155e PushI
	var_782_int = 11175; // 0x155f PushI
	var_783_int = 12068; // 0x1560 PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0x1561 TObjFunc
	var_784_int = 510920; // 0x1563 PushI
	var_785_int = 11181; // 0x1564 PushI
	var_786_int = 12069; // 0x1565 PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0x1566 TObjFunc
	return 0; // 0x1568 Return
	
Label_5481:
	var_787_int = 11181; // 0x1569 PushI
	var_788_bool = var_55_string == var_787_int; // 0x156a Eq
	if(var_788_bool == 0) goto Label_5504; // 0x156b JumpB
	var_789_string = ""; // 0x156c PushV
	var_789_string = "Neutral"; // 0x156d MovS
	func_4460(var_56_bool, var_789_string); // 0x156e NEW_2
	var_790_int = 510139; // 0x1570 PushI
	SetMessage(var_790_int); // 0x1571 TObjFunc
	ClearReplies(); // 0x1573 TObjFunc
	var_791_int = 510145; // 0x1575 PushI
	var_792_int = 11188; // 0x1576 PushI
	var_793_int = 11187; // 0x1577 PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0x1578 TObjFunc
	var_794_int = 510134; // 0x157a PushI
	var_795_int = 11175; // 0x157b PushI
	var_796_int = 11174; // 0x157c PushI
	AddReply(var_794_int, var_795_int, var_796_int); // 0x157d TObjFunc
	return 0; // 0x157f Return
	
Label_5504:
	var_797_int = 11175; // 0x1580 PushI
	var_798_bool = var_55_string == var_797_int; // 0x1581 Eq
	if(var_798_bool == 0) goto Label_5527; // 0x1582 JumpB
	var_799_string = ""; // 0x1583 PushV
	var_799_string = "Anger"; // 0x1584 MovS
	func_4460(var_56_bool, var_799_string); // 0x1585 NEW_2
	var_800_int = 510135; // 0x1587 PushI
	SetMessage(var_800_int); // 0x1588 TObjFunc
	ClearReplies(); // 0x158a TObjFunc
	var_801_int = 510136; // 0x158c PushI
	var_802_int = 12083; // 0x158d PushI
	var_803_int = 11176; // 0x158e PushI
	AddReply(var_801_int, var_802_int, var_803_int); // 0x158f TObjFunc
	var_804_int = 510137; // 0x1591 PushI
	var_805_int = 12083; // 0x1592 PushI
	var_806_int = 11178; // 0x1593 PushI
	AddReply(var_804_int, var_805_int, var_806_int); // 0x1594 TObjFunc
	return 0; // 0x1596 Return
	
Label_5527:
	var_807_int = 12083; // 0x1597 PushI
	var_808_bool = var_55_string == var_807_int; // 0x1598 Eq
	if(var_808_bool == 0) goto Label_5545; // 0x1599 JumpB
	var_809_string = ""; // 0x159a PushV
	var_809_string = "Neutral"; // 0x159b MovS
	func_4460(var_56_bool, var_809_string); // 0x159c NEW_2
	var_810_int = 510931; // 0x159e PushI
	SetMessage(var_810_int); // 0x159f TObjFunc
	ClearReplies(); // 0x15a1 TObjFunc
	var_811_int = 510932; // 0x15a3 PushI
	var_812_int = 11188; // 0x15a4 PushI
	var_813_int = 12085; // 0x15a5 PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0x15a6 TObjFunc
	return 0; // 0x15a8 Return
	
Label_5545:
	var_814_int = 11188; // 0x15a9 PushI
	var_815_bool = var_55_string == var_814_int; // 0x15aa Eq
	if(var_815_bool == 0) goto Label_5568; // 0x15ab JumpB
	var_816_string = ""; // 0x15ac PushV
	var_816_string = "Neutral"; // 0x15ad MovS
	func_4460(var_56_bool, var_816_string); // 0x15ae NEW_2
	var_817_int = 510146; // 0x15b0 PushI
	SetMessage(var_817_int); // 0x15b1 TObjFunc
	ClearReplies(); // 0x15b3 TObjFunc
	var_818_int = 510147; // 0x15b5 PushI
	var_819_int = 11190; // 0x15b6 PushI
	var_820_int = 11189; // 0x15b7 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x15b8 TObjFunc
	var_821_int = 510149; // 0x15ba PushI
	var_822_int = -1; // 0x15bb PushI
	var_823_int = 11191; // 0x15bc PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0x15bd TObjFunc
	return 0; // 0x15bf Return
	
Label_5568:
	var_824_int = 11190; // 0x15c0 PushI
	var_825_bool = var_55_string == var_824_int; // 0x15c1 Eq
	if(var_825_bool == 0) goto Label_5591; // 0x15c2 JumpB
	var_826_string = ""; // 0x15c3 PushV
	var_826_string = "Repentance"; // 0x15c4 MovS
	func_4460(var_56_bool, var_826_string); // 0x15c5 NEW_2
	var_827_int = 510148; // 0x15c7 PushI
	SetMessage(var_827_int); // 0x15c8 TObjFunc
	ClearReplies(); // 0x15ca TObjFunc
	var_828_int = 510926; // 0x15cc PushI
	var_829_int = 12080; // 0x15cd PushI
	var_830_int = 12078; // 0x15ce PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0x15cf TObjFunc
	var_831_int = 510927; // 0x15d1 PushI
	var_832_int = -1; // 0x15d2 PushI
	var_833_int = 12079; // 0x15d3 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0x15d4 TObjFunc
	return 0; // 0x15d6 Return
	
Label_5591:
	var_834_int = 12080; // 0x15d7 PushI
	var_835_bool = var_55_string == var_834_int; // 0x15d8 Eq
	if(var_835_bool == 0) goto Label_5614; // 0x15d9 JumpB
	var_836_string = ""; // 0x15da PushV
	var_836_string = "Neutral"; // 0x15db MovS
	func_4460(var_56_bool, var_836_string); // 0x15dc NEW_2
	var_837_int = 510928; // 0x15de PushI
	SetMessage(var_837_int); // 0x15df TObjFunc
	ClearReplies(); // 0x15e1 TObjFunc
	var_838_int = 510929; // 0x15e3 PushI
	var_839_int = -1; // 0x15e4 PushI
	var_840_int = 12081; // 0x15e5 PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x15e6 TObjFunc
	var_841_int = 510930; // 0x15e8 PushI
	var_842_int = -1; // 0x15e9 PushI
	var_843_int = 12082; // 0x15ea PushI
	AddReply(var_841_int, var_842_int, var_843_int); // 0x15eb TObjFunc
	return 0; // 0x15ed Return
	
Label_5614:
	var_3_string = 1; // 0x15ee TMovB
	var_844_bool = 0; // 0x15ef PushV
	func_7411(var_844_bool); // 0x15f0 NEW_2
	if(var_844_bool == 0) goto Label_5622; // 0x15f2 JumpB
	lshStopAnimation(); // 0x15f3 Func
	goto Label_5624; // 0x15f5 Jump
	
Label_5624:
	return 0; // 0x15f8 Return
	
Label_5622:
	StopAnimation(); // 0x15f6 Func
	
Label_5626:
	return 0; // 0x15fa Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x16a2 PushI
	if(var_57_int == 0) goto Label_6183; // 0x16a3 JumpB
	func_7300(); // 0x16a5 NEW_2
	var_59_int = 12763; // 0x16a7 PushI
	var_60_bool = var_56_bool == var_59_int; // 0x16a8 Eq
	if(var_60_bool == 0) goto Label_5817; // 0x16a9 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x16aa PushV
	var_61_object = var_1_object; // 0x16ab MovT
	var_62_object = var_0_object; // 0x16ac MovT
	func_7820(); // 0x16ad NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x16af PushV
	var_109_object = var_1_object; // 0x16b0 MovT
	var_110_object = var_0_object; // 0x16b1 MovT
	func_7496(); // 0x16b2 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x16b4 PushV
	var_117_object = var_1_object; // 0x16b5 MovT
	var_118_object = var_0_object; // 0x16b6 MovT
	func_7547(); // 0x16b7 NEW_2
	
Label_5817:
	var_143_int = 16728; // 0x16b9 PushI
	var_144_bool = var_56_bool == var_143_int; // 0x16ba Eq
	if(var_144_bool == 0) goto Label_5835; // 0x16bb JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x16bc PushV
	var_145_object = var_1_object; // 0x16bd MovT
	var_146_object = var_0_object; // 0x16be MovT
	func_7820(); // 0x16bf NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x16c1 PushV
	var_147_object = var_1_object; // 0x16c2 MovT
	var_148_object = var_0_object; // 0x16c3 MovT
	func_7496(); // 0x16c4 NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0x16c6 PushV
	var_149_object = var_1_object; // 0x16c7 MovT
	var_150_object = var_0_object; // 0x16c8 MovT
	func_7547(); // 0x16c9 NEW_2
	
Label_5835:
	var_151_int = 16725; // 0x16cb PushI
	var_152_bool = var_56_bool == var_151_int; // 0x16cc Eq
	if(var_152_bool == 0) goto Label_5853; // 0x16cd JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x16ce PushV
	var_153_object = var_1_object; // 0x16cf MovT
	var_154_object = var_0_object; // 0x16d0 MovT
	func_7452(); // 0x16d1 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x16d3 PushV
	var_163_object = var_1_object; // 0x16d4 MovT
	var_164_object = var_0_object; // 0x16d5 MovT
	func_7496(); // 0x16d6 NEW_2
	var_165_object = Obj(); var_166_object = Obj(); // 0x16d8 PushV
	var_165_object = var_1_object; // 0x16d9 MovT
	var_166_object = var_0_object; // 0x16da MovT
	func_7604(); // 0x16db NEW_2
	
Label_5853:
	var_172_int = 16724; // 0x16dd PushI
	var_173_bool = var_56_bool == var_172_int; // 0x16de Eq
	if(var_173_bool == 0) goto Label_5861; // 0x16df JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x16e0 PushV
	var_174_object = var_1_object; // 0x16e1 MovT
	var_175_object = var_0_object; // 0x16e2 MovT
	func_7468(); // 0x16e3 NEW_2
	
Label_5861:
	var_187_int = 12752; // 0x16e5 PushI
	var_188_bool = var_55_string == var_187_int; // 0x16e6 Eq
	if(var_188_bool == 0) goto Label_5889; // 0x16e7 JumpB
	var_189_string = ""; // 0x16e8 PushV
	var_189_string = "Neutral"; // 0x16e9 MovS
	func_5771(var_56_bool, var_189_string); // 0x16ea NEW_2
	var_206_int = 511558; // 0x16ec PushI
	SetMessage(var_206_int); // 0x16ed TObjFunc
	ClearReplies(); // 0x16ef TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x16f1 PushV
	var_208_object = var_1_object; // 0x16f2 MovT
	func_8397(var_208_object); // 0x16f3 NEW_2
	if(var_207_bool == 0) goto Label_5883; // 0x16f5 JumpB
	var_215_int = 511559; // 0x16f6 PushI
	var_216_int = 12754; // 0x16f7 PushI
	var_217_int = 12753; // 0x16f8 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x16f9 TObjFunc
	
Label_5883:
	var_218_int = 511589; // 0x16fb PushI
	var_219_int = -1; // 0x16fc PushI
	var_220_int = 12784; // 0x16fd PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x16fe TObjFunc
	return 0; // 0x1700 Return
	
Label_5889:
	var_221_int = 12765; // 0x1701 PushI
	var_222_bool = var_55_string == var_221_int; // 0x1702 Eq
	if(var_222_bool == 0) goto Label_5892; // 0x1703 JumpB
	
Label_5892:
	var_223_int = 16729; // 0x1704 PushI
	var_224_bool = var_55_string == var_223_int; // 0x1705 Eq
	if(var_224_bool == 0) goto Label_5915; // 0x1706 JumpB
	var_225_string = ""; // 0x1707 PushV
	var_225_string = "Neutral"; // 0x1708 MovS
	func_5771(var_56_bool, var_225_string); // 0x1709 NEW_2
	var_226_int = 515684; // 0x170b PushI
	SetMessage(var_226_int); // 0x170c TObjFunc
	ClearReplies(); // 0x170e TObjFunc
	var_227_int = 515685; // 0x1710 PushI
	var_228_int = 12767; // 0x1711 PushI
	var_229_int = 16730; // 0x1712 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1713 TObjFunc
	var_230_int = 515686; // 0x1715 PushI
	var_231_int = -1; // 0x1716 PushI
	var_232_int = 16732; // 0x1717 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1718 TObjFunc
	return 0; // 0x171a Return
	
Label_5915:
	var_233_int = 12767; // 0x171b PushI
	var_234_bool = var_55_string == var_233_int; // 0x171c Eq
	if(var_234_bool == 0) goto Label_5938; // 0x171d JumpB
	var_235_string = ""; // 0x171e PushV
	var_235_string = "Anger"; // 0x171f MovS
	func_5771(var_56_bool, var_235_string); // 0x1720 NEW_2
	var_236_int = 511573; // 0x1722 PushI
	SetMessage(var_236_int); // 0x1723 TObjFunc
	ClearReplies(); // 0x1725 TObjFunc
	var_237_int = 511574; // 0x1727 PushI
	var_238_int = 12769; // 0x1728 PushI
	var_239_int = 12768; // 0x1729 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x172a TObjFunc
	var_240_int = 515687; // 0x172c PushI
	var_241_int = 12773; // 0x172d PushI
	var_242_int = 16733; // 0x172e PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x172f TObjFunc
	return 0; // 0x1731 Return
	
Label_5938:
	var_243_int = 12769; // 0x1732 PushI
	var_244_bool = var_55_string == var_243_int; // 0x1733 Eq
	if(var_244_bool == 0) goto Label_5956; // 0x1734 JumpB
	var_245_string = ""; // 0x1735 PushV
	var_245_string = "Anger"; // 0x1736 MovS
	func_5771(var_56_bool, var_245_string); // 0x1737 NEW_2
	var_246_int = 511575; // 0x1739 PushI
	SetMessage(var_246_int); // 0x173a TObjFunc
	ClearReplies(); // 0x173c TObjFunc
	var_247_int = 511576; // 0x173e PushI
	var_248_int = 12771; // 0x173f PushI
	var_249_int = 12770; // 0x1740 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x1741 TObjFunc
	return 0; // 0x1743 Return
	
Label_5956:
	var_250_int = 12771; // 0x1744 PushI
	var_251_bool = var_55_string == var_250_int; // 0x1745 Eq
	if(var_251_bool == 0) goto Label_5979; // 0x1746 JumpB
	var_252_string = ""; // 0x1747 PushV
	var_252_string = "Neutral"; // 0x1748 MovS
	func_5771(var_56_bool, var_252_string); // 0x1749 NEW_2
	var_253_int = 511577; // 0x174b PushI
	SetMessage(var_253_int); // 0x174c TObjFunc
	ClearReplies(); // 0x174e TObjFunc
	var_254_int = 511578; // 0x1750 PushI
	var_255_int = 12773; // 0x1751 PushI
	var_256_int = 12772; // 0x1752 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x1753 TObjFunc
	var_257_int = 511586; // 0x1755 PushI
	var_258_int = 12781; // 0x1756 PushI
	var_259_int = 12780; // 0x1757 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x1758 TObjFunc
	return 0; // 0x175a Return
	
Label_5979:
	var_260_int = 12781; // 0x175b PushI
	var_261_bool = var_55_string == var_260_int; // 0x175c Eq
	if(var_261_bool == 0) goto Label_5997; // 0x175d JumpB
	var_262_string = ""; // 0x175e PushV
	var_262_string = "Distrust"; // 0x175f MovS
	func_5771(var_56_bool, var_262_string); // 0x1760 NEW_2
	var_263_int = 511587; // 0x1762 PushI
	SetMessage(var_263_int); // 0x1763 TObjFunc
	ClearReplies(); // 0x1765 TObjFunc
	var_264_int = 511588; // 0x1767 PushI
	var_265_int = 12773; // 0x1768 PushI
	var_266_int = 12782; // 0x1769 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x176a TObjFunc
	return 0; // 0x176c Return
	
Label_5997:
	var_267_int = 12773; // 0x176d PushI
	var_268_bool = var_55_string == var_267_int; // 0x176e Eq
	if(var_268_bool == 0) goto Label_6015; // 0x176f JumpB
	var_269_string = ""; // 0x1770 PushV
	var_269_string = "Neutral"; // 0x1771 MovS
	func_5771(var_56_bool, var_269_string); // 0x1772 NEW_2
	var_270_int = 511579; // 0x1774 PushI
	SetMessage(var_270_int); // 0x1775 TObjFunc
	ClearReplies(); // 0x1777 TObjFunc
	var_271_int = 511580; // 0x1779 PushI
	var_272_int = 12775; // 0x177a PushI
	var_273_int = 12774; // 0x177b PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x177c TObjFunc
	return 0; // 0x177e Return
	
Label_6015:
	var_274_int = 12775; // 0x177f PushI
	var_275_bool = var_55_string == var_274_int; // 0x1780 Eq
	if(var_275_bool == 0) goto Label_6038; // 0x1781 JumpB
	var_276_string = ""; // 0x1782 PushV
	var_276_string = "Neutral"; // 0x1783 MovS
	func_5771(var_56_bool, var_276_string); // 0x1784 NEW_2
	var_277_int = 511581; // 0x1786 PushI
	SetMessage(var_277_int); // 0x1787 TObjFunc
	ClearReplies(); // 0x1789 TObjFunc
	var_278_int = 511582; // 0x178b PushI
	var_279_int = 12777; // 0x178c PushI
	var_280_int = 12776; // 0x178d PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x178e TObjFunc
	var_281_int = 515688; // 0x1790 PushI
	var_282_int = -1; // 0x1791 PushI
	var_283_int = 16735; // 0x1792 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1793 TObjFunc
	return 0; // 0x1795 Return
	
Label_6038:
	var_284_int = 12777; // 0x1796 PushI
	var_285_bool = var_55_string == var_284_int; // 0x1797 Eq
	if(var_285_bool == 0) goto Label_6061; // 0x1798 JumpB
	var_286_string = ""; // 0x1799 PushV
	var_286_string = "Neutral"; // 0x179a MovS
	func_5771(var_56_bool, var_286_string); // 0x179b NEW_2
	var_287_int = 511583; // 0x179d PushI
	SetMessage(var_287_int); // 0x179e TObjFunc
	ClearReplies(); // 0x17a0 TObjFunc
	var_288_int = 511584; // 0x17a2 PushI
	var_289_int = -1; // 0x17a3 PushI
	var_290_int = 12778; // 0x17a4 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x17a5 TObjFunc
	var_291_int = 515689; // 0x17a7 PushI
	var_292_int = -1; // 0x17a8 PushI
	var_293_int = 16736; // 0x17a9 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x17aa TObjFunc
	return 0; // 0x17ac Return
	
Label_6061:
	var_294_int = 12754; // 0x17ad PushI
	var_295_bool = var_55_string == var_294_int; // 0x17ae Eq
	if(var_295_bool == 0) goto Label_6084; // 0x17af JumpB
	var_296_string = ""; // 0x17b0 PushV
	var_296_string = "Neutral"; // 0x17b1 MovS
	func_5771(var_56_bool, var_296_string); // 0x17b2 NEW_2
	var_297_int = 511560; // 0x17b4 PushI
	SetMessage(var_297_int); // 0x17b5 TObjFunc
	ClearReplies(); // 0x17b7 TObjFunc
	var_298_int = 511561; // 0x17b9 PushI
	var_299_int = 12756; // 0x17ba PushI
	var_300_int = 12755; // 0x17bb PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x17bc TObjFunc
	var_301_int = 515680; // 0x17be PushI
	var_302_int = -1; // 0x17bf PushI
	var_303_int = 16724; // 0x17c0 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x17c1 TObjFunc
	return 0; // 0x17c3 Return
	
Label_6084:
	var_304_int = 12756; // 0x17c4 PushI
	var_305_bool = var_55_string == var_304_int; // 0x17c5 Eq
	if(var_305_bool == 0) goto Label_6107; // 0x17c6 JumpB
	var_306_string = ""; // 0x17c7 PushV
	var_306_string = "Repentance"; // 0x17c8 MovS
	func_5771(var_56_bool, var_306_string); // 0x17c9 NEW_2
	var_307_int = 511562; // 0x17cb PushI
	SetMessage(var_307_int); // 0x17cc TObjFunc
	ClearReplies(); // 0x17ce TObjFunc
	var_308_int = 511563; // 0x17d0 PushI
	var_309_int = 12758; // 0x17d1 PushI
	var_310_int = 12757; // 0x17d2 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x17d3 TObjFunc
	var_311_int = 515681; // 0x17d5 PushI
	var_312_int = -1; // 0x17d6 PushI
	var_313_int = 16725; // 0x17d7 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x17d8 TObjFunc
	return 0; // 0x17da Return
	
Label_6107:
	var_314_int = 12758; // 0x17db PushI
	var_315_bool = var_55_string == var_314_int; // 0x17dc Eq
	if(var_315_bool == 0) goto Label_6130; // 0x17dd JumpB
	var_316_string = ""; // 0x17de PushV
	var_316_string = "Anger"; // 0x17df MovS
	func_5771(var_56_bool, var_316_string); // 0x17e0 NEW_2
	var_317_int = 511564; // 0x17e2 PushI
	SetMessage(var_317_int); // 0x17e3 TObjFunc
	ClearReplies(); // 0x17e5 TObjFunc
	var_318_int = 511565; // 0x17e7 PushI
	var_319_int = 12760; // 0x17e8 PushI
	var_320_int = 12759; // 0x17e9 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x17ea TObjFunc
	var_321_int = 515682; // 0x17ec PushI
	var_322_int = 12762; // 0x17ed PushI
	var_323_int = 16726; // 0x17ee PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x17ef TObjFunc
	return 0; // 0x17f1 Return
	
Label_6130:
	var_324_int = 12760; // 0x17f2 PushI
	var_325_bool = var_55_string == var_324_int; // 0x17f3 Eq
	if(var_325_bool == 0) goto Label_6148; // 0x17f4 JumpB
	var_326_string = ""; // 0x17f5 PushV
	var_326_string = "Anger"; // 0x17f6 MovS
	func_5771(var_56_bool, var_326_string); // 0x17f7 NEW_2
	var_327_int = 511566; // 0x17f9 PushI
	SetMessage(var_327_int); // 0x17fa TObjFunc
	ClearReplies(); // 0x17fc TObjFunc
	var_328_int = 511567; // 0x17fe PushI
	var_329_int = 12762; // 0x17ff PushI
	var_330_int = 12761; // 0x1800 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x1801 TObjFunc
	return 0; // 0x1803 Return
	
Label_6148:
	var_331_int = 12762; // 0x1804 PushI
	var_332_bool = var_55_string == var_331_int; // 0x1805 Eq
	if(var_332_bool == 0) goto Label_6171; // 0x1806 JumpB
	var_333_string = ""; // 0x1807 PushV
	var_333_string = "Neutral"; // 0x1808 MovS
	func_5771(var_56_bool, var_333_string); // 0x1809 NEW_2
	var_334_int = 511568; // 0x180b PushI
	SetMessage(var_334_int); // 0x180c TObjFunc
	ClearReplies(); // 0x180e TObjFunc
	var_335_int = 511569; // 0x1810 PushI
	var_336_int = -1; // 0x1811 PushI
	var_337_int = 12763; // 0x1812 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x1813 TObjFunc
	var_338_int = 515683; // 0x1815 PushI
	var_339_int = -1; // 0x1816 PushI
	var_340_int = 16728; // 0x1817 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x1818 TObjFunc
	return 0; // 0x181a Return
	
Label_6171:
	var_3_string = 1; // 0x181b TMovB
	var_341_bool = 0; // 0x181c PushV
	func_7411(var_341_bool); // 0x181d NEW_2
	if(var_341_bool == 0) goto Label_6179; // 0x181f JumpB
	lshStopAnimation(); // 0x1820 Func
	goto Label_6181; // 0x1822 Jump
	
Label_6181:
	return 0; // 0x1825 Return
	
Label_6179:
	StopAnimation(); // 0x1823 Func
	
Label_6183:
	return 0; // 0x1827 Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool)
{
	var_57_int = 1; // 0x1912 PushI
	if(var_57_int == 0) goto Label_6757; // 0x1913 JumpB
	func_7300(); // 0x1915 NEW_2
	var_59_int = 14919; // 0x1917 PushI
	var_60_bool = var_56_bool == var_59_int; // 0x1918 Eq
	if(var_60_bool == 0) goto Label_6431; // 0x1919 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x191a PushV
	var_61_object = var_1_object; // 0x191b MovT
	var_62_object = var_0_object; // 0x191c MovT
	func_7876(); // 0x191d NEW_2
	
Label_6431:
	var_65_int = 14927; // 0x191f PushI
	var_66_bool = var_56_bool == var_65_int; // 0x1920 Eq
	if(var_66_bool == 0) goto Label_6439; // 0x1921 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x1922 PushV
	var_67_object = var_1_object; // 0x1923 MovT
	var_68_object = var_0_object; // 0x1924 MovT
	func_7882(); // 0x1925 NEW_2
	
Label_6439:
	var_71_int = 14931; // 0x1927 PushI
	var_72_bool = var_56_bool == var_71_int; // 0x1928 Eq
	if(var_72_bool == 0) goto Label_6447; // 0x1929 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x192a PushV
	var_73_object = var_1_object; // 0x192b MovT
	var_74_object = var_0_object; // 0x192c MovT
	func_7870(); // 0x192d NEW_2
	
Label_6447:
	var_77_int = 14943; // 0x192f PushI
	var_78_bool = var_56_bool == var_77_int; // 0x1930 Eq
	if(var_78_bool == 0) goto Label_6455; // 0x1931 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x1932 PushV
	var_79_object = var_1_object; // 0x1933 MovT
	var_80_object = var_0_object; // 0x1934 MovT
	func_7888(); // 0x1935 NEW_2
	
Label_6455:
	var_83_int = 14918; // 0x1937 PushI
	var_84_bool = var_55_string == var_83_int; // 0x1938 Eq
	if(var_84_bool == 0) goto Label_6550; // 0x1939 JumpB
	var_85_string = ""; // 0x193a PushV
	var_85_string = "Neutral"; // 0x193b MovS
	func_6395(var_56_bool, var_85_string); // 0x193c NEW_2
	var_102_int = 513660; // 0x193e PushI
	SetMessage(var_102_int); // 0x193f TObjFunc
	ClearReplies(); // 0x1941 TObjFunc
	var_103_bool = 0; // 0x1943 PushV
	var_103_bool = 0; // 0x1944 MovB
	var_104_bool = 0; var_105_object = Obj(); // 0x1945 PushV
	var_105_object = var_1_object; // 0x1946 MovT
	func_8529(var_105_object); // 0x1947 NEW_2
	if(var_104_bool == 0) goto Label_6480; // 0x1949 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x194a PushV
	var_113_object = var_1_object; // 0x194b MovT
	func_8505(var_113_object); // 0x194c NEW_2
	if(var_112_bool == 0) goto Label_6480; // 0x194e JumpB
	var_103_bool = 1; // 0x194f MovB
	
Label_6480:
	if(var_103_bool == 0) goto Label_6486; // 0x1950 JumpB
	var_118_int = 513661; // 0x1951 PushI
	var_119_int = 14920; // 0x1952 PushI
	var_120_int = 14919; // 0x1953 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x1954 TObjFunc
	
Label_6486:
	var_121_bool = 0; // 0x1956 PushV
	var_121_bool = 0; // 0x1957 MovB
	var_122_bool = 0; // 0x1958 PushV
	var_122_bool = 0; // 0x1959 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x195a PushV
	var_124_object = var_1_object; // 0x195b MovT
	func_8541(var_124_object); // 0x195c NEW_2
	if(var_123_bool == 0) goto Label_6501; // 0x195e JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x195f PushV
	var_130_object = var_1_object; // 0x1960 MovT
	func_8517(var_130_object); // 0x1961 NEW_2
	if(var_129_bool == 0) goto Label_6501; // 0x1963 JumpB
	var_122_bool = 1; // 0x1964 MovB
	
Label_6501:
	if(var_122_bool == 0) goto Label_6509; // 0x1965 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x1966 PushV
	var_136_object = var_1_object; // 0x1967 MovT
	func_8589(var_136_object); // 0x1968 NEW_2
	var_141_bool = var_135_bool == 0; // 0x196a Not
	if(var_141_bool == 0) goto Label_6509; // 0x196b JumpB
	var_121_bool = 1; // 0x196c MovB
	
Label_6509:
	if(var_121_bool == 0) goto Label_6515; // 0x196d JumpB
	var_142_int = 513669; // 0x196e PushI
	var_143_int = 14928; // 0x196f PushI
	var_144_int = 14927; // 0x1970 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1971 TObjFunc
	
Label_6515:
	var_145_bool = 0; // 0x1973 PushV
	var_145_bool = 0; // 0x1974 MovB
	var_146_bool = 0; // 0x1975 PushV
	var_146_bool = 0; // 0x1976 MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x1977 PushV
	var_148_object = var_1_object; // 0x1978 MovT
	func_8517(var_148_object); // 0x1979 NEW_2
	if(var_147_bool == 0) goto Label_6530; // 0x197b JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x197c PushV
	var_150_object = var_1_object; // 0x197d MovT
	func_8553(var_150_object); // 0x197e NEW_2
	if(var_149_bool == 0) goto Label_6530; // 0x1980 JumpB
	var_146_bool = 1; // 0x1981 MovB
	
Label_6530:
	if(var_146_bool == 0) goto Label_6538; // 0x1982 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x1983 PushV
	var_156_object = var_1_object; // 0x1984 MovT
	func_8577(var_156_object); // 0x1985 NEW_2
	var_161_bool = var_155_bool == 0; // 0x1987 Not
	if(var_161_bool == 0) goto Label_6538; // 0x1988 JumpB
	var_145_bool = 1; // 0x1989 MovB
	
Label_6538:
	if(var_145_bool == 0) goto Label_6544; // 0x198a JumpB
	var_162_int = 513683; // 0x198b PushI
	var_163_int = 14944; // 0x198c PushI
	var_164_int = 14943; // 0x198d PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x198e TObjFunc
	
Label_6544:
	var_165_int = 513674; // 0x1990 PushI
	var_166_int = -1; // 0x1991 PushI
	var_167_int = 14932; // 0x1992 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1993 TObjFunc
	return 0; // 0x1995 Return
	
Label_6550:
	var_168_int = 14944; // 0x1996 PushI
	var_169_bool = var_55_string == var_168_int; // 0x1997 Eq
	if(var_169_bool == 0) goto Label_6568; // 0x1998 JumpB
	var_170_string = ""; // 0x1999 PushV
	var_170_string = "Neutral"; // 0x199a MovS
	func_6395(var_56_bool, var_170_string); // 0x199b NEW_2
	var_171_int = 513684; // 0x199d PushI
	SetMessage(var_171_int); // 0x199e TObjFunc
	ClearReplies(); // 0x19a0 TObjFunc
	var_172_int = 513685; // 0x19a2 PushI
	var_173_int = 14946; // 0x19a3 PushI
	var_174_int = 14945; // 0x19a4 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x19a5 TObjFunc
	return 0; // 0x19a7 Return
	
Label_6568:
	var_175_int = 14946; // 0x19a8 PushI
	var_176_bool = var_55_string == var_175_int; // 0x19a9 Eq
	if(var_176_bool == 0) goto Label_6586; // 0x19aa JumpB
	var_177_string = ""; // 0x19ab PushV
	var_177_string = "Neutral"; // 0x19ac MovS
	func_6395(var_56_bool, var_177_string); // 0x19ad NEW_2
	var_178_int = 513686; // 0x19af PushI
	SetMessage(var_178_int); // 0x19b0 TObjFunc
	ClearReplies(); // 0x19b2 TObjFunc
	var_179_int = 513687; // 0x19b4 PushI
	var_180_int = -1; // 0x19b5 PushI
	var_181_int = 14947; // 0x19b6 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x19b7 TObjFunc
	return 0; // 0x19b9 Return
	
Label_6586:
	var_182_int = 14928; // 0x19ba PushI
	var_183_bool = var_55_string == var_182_int; // 0x19bb Eq
	if(var_183_bool == 0) goto Label_6609; // 0x19bc JumpB
	var_184_string = ""; // 0x19bd PushV
	var_184_string = "Neutral"; // 0x19be MovS
	func_6395(var_56_bool, var_184_string); // 0x19bf NEW_2
	var_185_int = 513670; // 0x19c1 PushI
	SetMessage(var_185_int); // 0x19c2 TObjFunc
	ClearReplies(); // 0x19c4 TObjFunc
	var_186_int = 513671; // 0x19c6 PushI
	var_187_int = 14930; // 0x19c7 PushI
	var_188_int = 14929; // 0x19c8 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x19c9 TObjFunc
	var_189_int = 513675; // 0x19cb PushI
	var_190_int = 14930; // 0x19cc PushI
	var_191_int = 14933; // 0x19cd PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x19ce TObjFunc
	return 0; // 0x19d0 Return
	
Label_6609:
	var_192_int = 14930; // 0x19d1 PushI
	var_193_bool = var_55_string == var_192_int; // 0x19d2 Eq
	if(var_193_bool == 0) goto Label_6627; // 0x19d3 JumpB
	var_194_string = ""; // 0x19d4 PushV
	var_194_string = "Repentance"; // 0x19d5 MovS
	func_6395(var_56_bool, var_194_string); // 0x19d6 NEW_2
	var_195_int = 513672; // 0x19d8 PushI
	SetMessage(var_195_int); // 0x19d9 TObjFunc
	ClearReplies(); // 0x19db TObjFunc
	var_196_int = 513673; // 0x19dd PushI
	var_197_int = -1; // 0x19de PushI
	var_198_int = 14931; // 0x19df PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x19e0 TObjFunc
	return 0; // 0x19e2 Return
	
Label_6627:
	var_199_int = 14920; // 0x19e3 PushI
	var_200_bool = var_55_string == var_199_int; // 0x19e4 Eq
	if(var_200_bool == 0) goto Label_6650; // 0x19e5 JumpB
	var_201_string = ""; // 0x19e6 PushV
	var_201_string = "Neutral"; // 0x19e7 MovS
	func_6395(var_56_bool, var_201_string); // 0x19e8 NEW_2
	var_202_int = 513662; // 0x19ea PushI
	SetMessage(var_202_int); // 0x19eb TObjFunc
	ClearReplies(); // 0x19ed TObjFunc
	var_203_int = 513663; // 0x19ef PushI
	var_204_int = 14922; // 0x19f0 PushI
	var_205_int = 14921; // 0x19f1 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x19f2 TObjFunc
	var_206_int = 513677; // 0x19f4 PushI
	var_207_int = 14937; // 0x19f5 PushI
	var_208_int = 14936; // 0x19f6 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x19f7 TObjFunc
	return 0; // 0x19f9 Return
	
Label_6650:
	var_209_int = 14937; // 0x19fa PushI
	var_210_bool = var_55_string == var_209_int; // 0x19fb Eq
	if(var_210_bool == 0) goto Label_6673; // 0x19fc JumpB
	var_211_string = ""; // 0x19fd PushV
	var_211_string = "Anger"; // 0x19fe MovS
	func_6395(var_56_bool, var_211_string); // 0x19ff NEW_2
	var_212_int = 513678; // 0x1a01 PushI
	SetMessage(var_212_int); // 0x1a02 TObjFunc
	ClearReplies(); // 0x1a04 TObjFunc
	var_213_int = 513679; // 0x1a06 PushI
	var_214_int = 14924; // 0x1a07 PushI
	var_215_int = 14938; // 0x1a08 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1a09 TObjFunc
	var_216_int = 513680; // 0x1a0b PushI
	var_217_int = 14922; // 0x1a0c PushI
	var_218_int = 14940; // 0x1a0d PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1a0e TObjFunc
	return 0; // 0x1a10 Return
	
Label_6673:
	var_219_int = 14922; // 0x1a11 PushI
	var_220_bool = var_55_string == var_219_int; // 0x1a12 Eq
	if(var_220_bool == 0) goto Label_6691; // 0x1a13 JumpB
	var_221_string = ""; // 0x1a14 PushV
	var_221_string = "Neutral"; // 0x1a15 MovS
	func_6395(var_56_bool, var_221_string); // 0x1a16 NEW_2
	var_222_int = 513664; // 0x1a18 PushI
	SetMessage(var_222_int); // 0x1a19 TObjFunc
	ClearReplies(); // 0x1a1b TObjFunc
	var_223_int = 513665; // 0x1a1d PushI
	var_224_int = 14924; // 0x1a1e PushI
	var_225_int = 14923; // 0x1a1f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1a20 TObjFunc
	return 0; // 0x1a22 Return
	
Label_6691:
	var_226_int = 14924; // 0x1a23 PushI
	var_227_bool = var_55_string == var_226_int; // 0x1a24 Eq
	if(var_227_bool == 0) goto Label_6709; // 0x1a25 JumpB
	var_228_string = ""; // 0x1a26 PushV
	var_228_string = "Anger"; // 0x1a27 MovS
	func_6395(var_56_bool, var_228_string); // 0x1a28 NEW_2
	var_229_int = 513666; // 0x1a2a PushI
	SetMessage(var_229_int); // 0x1a2b TObjFunc
	ClearReplies(); // 0x1a2d TObjFunc
	var_230_int = 513667; // 0x1a2f PushI
	var_231_int = 14926; // 0x1a30 PushI
	var_232_int = 14925; // 0x1a31 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1a32 TObjFunc
	return 0; // 0x1a34 Return
	
Label_6709:
	var_233_int = 14926; // 0x1a35 PushI
	var_234_bool = var_55_string == var_233_int; // 0x1a36 Eq
	if(var_234_bool == 0) goto Label_6727; // 0x1a37 JumpB
	var_235_string = ""; // 0x1a38 PushV
	var_235_string = "Repentance"; // 0x1a39 MovS
	func_6395(var_56_bool, var_235_string); // 0x1a3a NEW_2
	var_236_int = 513668; // 0x1a3c PushI
	SetMessage(var_236_int); // 0x1a3d TObjFunc
	ClearReplies(); // 0x1a3f TObjFunc
	var_237_int = 513676; // 0x1a41 PushI
	var_238_int = 14941; // 0x1a42 PushI
	var_239_int = 14935; // 0x1a43 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x1a44 TObjFunc
	return 0; // 0x1a46 Return
	
Label_6727:
	var_240_int = 14941; // 0x1a47 PushI
	var_241_bool = var_55_string == var_240_int; // 0x1a48 Eq
	if(var_241_bool == 0) goto Label_6745; // 0x1a49 JumpB
	var_242_string = ""; // 0x1a4a PushV
	var_242_string = "Repentance"; // 0x1a4b MovS
	func_6395(var_56_bool, var_242_string); // 0x1a4c NEW_2
	var_243_int = 513681; // 0x1a4e PushI
	SetMessage(var_243_int); // 0x1a4f TObjFunc
	ClearReplies(); // 0x1a51 TObjFunc
	var_244_int = 513682; // 0x1a53 PushI
	var_245_int = -1; // 0x1a54 PushI
	var_246_int = 14942; // 0x1a55 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x1a56 TObjFunc
	return 0; // 0x1a58 Return
	
Label_6745:
	var_3_string = 1; // 0x1a59 TMovB
	var_247_bool = 0; // 0x1a5a PushV
	func_7411(var_247_bool); // 0x1a5b NEW_2
	if(var_247_bool == 0) goto Label_6753; // 0x1a5d JumpB
	lshStopAnimation(); // 0x1a5e Func
	goto Label_6755; // 0x1a60 Jump
	
Label_6755:
	return 0; // 0x1a63 Return
	
Label_6753:
	StopAnimation(); // 0x1a61 Func
	
Label_6757:
	return 0; // 0x1a65 Return
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int)
{
	var_57_int = 1; // 0x1b08 PushI
	if(var_57_int == 0) goto Label_6960; // 0x1b09 JumpB
	func_7300(); // 0x1b0b NEW_2
	var_59_int = 42551; // 0x1b0d PushI
	var_60_bool = var_55_int == var_59_int; // 0x1b0e Eq
	if(var_60_bool == 0) goto Label_6948; // 0x1b0f JumpB
	var_61_string = ""; // 0x1b10 PushV
	var_61_string = "Neutral"; // 0x1b11 MovS
	func_6897(var_56_int, var_61_string); // 0x1b12 NEW_2
	var_78_int = 540542; // 0x1b14 PushI
	SetMessage(var_78_int); // 0x1b15 TObjFunc
	ClearReplies(); // 0x1b17 TObjFunc
	var_79_int = 540543; // 0x1b19 PushI
	var_80_int = -1; // 0x1b1a PushI
	var_81_int = 42552; // 0x1b1b PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x1b1c TObjFunc
	var_82_int = 540796; // 0x1b1e PushI
	var_83_int = -1; // 0x1b1f PushI
	var_84_int = 42845; // 0x1b20 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1b21 TObjFunc
	return 0; // 0x1b23 Return
	
Label_6948:
	var_3_string = 1; // 0x1b24 TMovB
	var_85_bool = 0; // 0x1b25 PushV
	func_7411(var_85_bool); // 0x1b26 NEW_2
	if(var_85_bool == 0) goto Label_6956; // 0x1b28 JumpB
	lshStopAnimation(); // 0x1b29 Func
	goto Label_6958; // 0x1b2b Jump
	
Label_6958:
	return 0; // 0x1b2e Return
	
Label_6956:
	StopAnimation(); // 0x1b2c Func
	
Label_6960:
	return 0; // 0x1b30 Return
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool)
{
	Hold(); // 0x1b49 Func
	return 0; // 0x1b4b Return
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool)
{
	StopGroup0(); // 0x1b4c Func
	return 0; // 0x1b4e Return
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_bool = 0; // 0x1b4f PushV
	IsOverrideActive(var_57_bool); // 0x1b50 Func
	var_58_bool = var_57_bool == 0; // 0x1b52 Not
	if(var_58_bool == 0) goto Label_7006; // 0x1b53 JumpB
	EventDisable(0); // 0x1b54 EventDisable
	var_59_bool = 0; var_60_object = Obj(); // 0x1b55 PushV
	var_60_object = var_55_object; // 0x1b56 Mov
	func_7017(var_60_object); // 0x1b57 NEW_2
	EventEnable(0); // 0x1b59 EventEnable
	var_73_object = Obj(); // 0x1b5a PushV
	var_73_object = var_55_object; // 0x1b5b Mov
	func_8903(var_73_object); // 0x1b5c NEW_2
	
Label_7006:
	return 2; // 0x1b5e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool)
{
	var_55_bool = GlobalVars[1]; // 0x1b31 PushGE
	var_55_bool = 0; // 0x1b32 MovB
	GlobalVars[1] = var_55_bool; // 0x1b33 PopGE
	func_6968(); // 0x1b35 NEW_2
	return 0; // 0x1b37 Return
}


func_8704()
{
	var_194_object = Obj(); var_195_object = Obj(); // 0x2200 PushV
	var_196_int = 89; // 0x2201 PushI
	var_197_int = 1; // 0x2202 PushI
	var_198_int = 512171; // 0x2203 PushI
	CreateDiaryEntry(var_195_object, var_196_int, var_197_int, var_198_int); // 0x2204 Func
	var_199_bool = 0; var_200_object = Obj(); var_201_int = 0; // 0x2206 PushV
	var_200_object = var_195_object; // 0x2207 Mov
	var_201_int = 20; // 0x2208 MovI
	func_8808(var_199_bool, var_200_object, var_201_int); // 0x2209 NEW_2
	return 2; // 0x220b Return
}


func_0(var_0_object, var_381_int, var_382_object)
{
	var_384_object = Obj(); var_385_bool = 0; var_386_int = 0; var_387_bool = 0; var_388_object = Obj(); var_389_bool = 0; var_390_int = 0; var_391_bool = 0; // 0x0 PushV
	var_0_object = var_382_object; // 0x1 TMov
	var_392_bool = 0; var_393_object = Obj(); var_394_float = 0; // 0x2 PushV
	var_393_object = var_382_object; // 0x3 Mov
	var_394_float = 70.0; // 0x4 MovF
	func_7031(var_393_object, var_394_float); // 0x5 NEW_2
	var_395_bool = var_392_bool == 0; // 0x7 Not
	if(var_395_bool == 0) goto Label_11; // 0x8 JumpB
	var_381_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_388_object); // 0xb Func
	var_396_int = 0; // 0xd PushV
	func_7405(var_396_int); // 0xe NEW_2
	SetNPCName(var_396_int); // 0x10 ObjFunc
	var_397_int = 0; // 0x12 PushV
	func_7403(var_397_int); // 0x13 NEW_2
	SetNPCDescription(var_397_int); // 0x15 ObjFunc
	var_398_string = ""; // 0x17 PushV
	func_7407(var_398_string); // 0x18 NEW_2
	SetPhoto(var_398_string); // 0x1a ObjFunc
	var_399_string = ""; // 0x1c PushV
	func_7409(var_399_string); // 0x1d NEW_2
	SetPhoto2(var_399_string); // 0x1f ObjFunc
	var_400_int = 0; // 0x21 PushV
	func_8886(var_400_int); // 0x22 NEW_2
	SetPlayerName(var_400_int); // 0x24 ObjFunc
	var_390_int = -1; // 0x26 MovI
	IsOverrideActive(var_389_bool); // 0x27 Func
	var_401_bool = var_389_bool; // 0x29 Push
	if(var_401_bool == 0) goto Label_45; // 0x2a JumpB
	var_381_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_388_object); // 0x2d Func
	var_402_bool = 0; var_403_object = Obj(); // 0x2f PushV
	var_404_object = Obj(); // 0x30 PushV
	func_7307(var_404_object); // 0x31 NEW_2
	var_403_object = var_404_object; // 0x32 Mov
	func_7116(var_402_bool, var_403_object); // 0x34 NEW_2
	var_405_object = Obj(); var_406_object = Obj(); // 0x36 PushV
	var_405_object = var_382_object; // 0x37 Mov
	var_406_object = var_388_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_407_object, var_408_object, var_409_string, var_410_bool, var_405_object, var_406_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_391_bool); // 0x3d ObjFunc
	
Label_63:
	var_480_bool = var_391_bool == 0; // 0x3f Not
	if(var_480_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_391_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_481_object = Obj(); // 0x46 PushV
	var_481_object = var_382_object; // 0x47 Mov
	func_7099(); // 0x48 NEW_2
	StopDialog(var_388_object); // 0x4a Func
	GetReturnValue(var_390_int); // 0x4c ObjFunc
	var_381_int = var_390_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_8195(var_516_bool)
{
	var_518_int = 0; var_519_string = ""; // 0x2004 PushV
	var_519_string = "ood2BigVlad1"; // 0x2005 MovS
	func_7323(var_518_int, var_519_string); // 0x2006 NEW_2
	var_520_int = 0; // 0x2008 PushI
	var_521_bool = var_518_int == var_520_int; // 0x2009 Eq
	if(var_521_bool == 0) goto Label_8205; // 0x200a JumpB
	var_516_bool = 1; // 0x200b MovB
	return 0; // 0x200c Return
	
Label_8205:
	var_516_bool = 0; // 0x200d MovB
	return 0; // 0x200e Return
}


func_7174(var_158_bool)
{
	var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = ""; var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; // 0x1c06 PushV
	var_165_string = "c"; // 0x1c07 MovS
	var_166_int = 0; // 0x1c08 MovI
	
Label_7177:
	var_170_int = 1; // 0x1c09 PushI
	if(var_170_int == 0) goto Label_7190; // 0x1c0a JumpB
	var_171_int = 1; // 0x1c0b PushI
	var_172_int = var_166_int + var_171_int; // 0x1c0c Add
	var_173_int = var_165_string + var_172_int; // 0x1c0d Add
	HasProperty(var_173_int, var_167_bool); // 0x1c0e ObjFunc
	var_174_bool = var_167_bool == 0; // 0x1c10 Not
	if(var_174_bool == 0) goto Label_7187; // 0x1c11 JumpB
	goto Label_7190; // 0x1c12 Jump
	
Label_7190:
	var_175_bool = var_166_int == 0; // 0x1c16 Not
	if(var_175_bool == 0) goto Label_7194; // 0x1c17 JumpB
	var_158_bool = 0; // 0x1c18 MovB
	return 10; // 0x1c19 Return
	
Label_7194:
	var_168_int = 0; // 0x1c1a MovI
	var_176_int = 1; // 0x1c1b PushI
	var_177_bool = var_166_int > var_176_int; // 0x1c1c GT
	if(var_177_bool == 0) goto Label_7200; // 0x1c1d JumpB
	irand(var_168_int, var_166_int); // 0x1c1e Func
	
Label_7200:
	var_178_int = 1; // 0x1c20 PushI
	var_179_int = var_168_int + var_178_int; // 0x1c21 Add
	var_180_int = var_165_string + var_179_int; // 0x1c22 Add
	GetProperty(var_180_int, var_169_string); // 0x1c23 ObjFunc
	var_181_bool = 0; var_182_string = ""; // 0x1c25 PushV
	var_182_string = var_169_string; // 0x1c26 Mov
	func_7285(var_181_bool, var_182_string); // 0x1c27 NEW_2
	var_158_bool = var_181_bool; // 0x1c28 Mov
	return 10; // 0x1c2a Return
	
Label_7187:
	var_187_int = 1; // 0x1c13 PushI
	var_166_int = var_166_int + var_187_int; // 0x1c14 Add2
	goto Label_7177; // 0x1c15 Jump
}


func_8717()
{
	var_312_object = Obj(); var_313_object = Obj(); // 0x220d PushV
	var_314_int = 90; // 0x220e PushI
	var_315_int = 1; // 0x220f PushI
	var_316_int = 512172; // 0x2210 PushI
	CreateDiaryEntry(var_313_object, var_314_int, var_315_int, var_316_int); // 0x2211 Func
	var_317_bool = 0; var_318_object = Obj(); var_319_int = 0; // 0x2213 PushV
	var_318_object = var_313_object; // 0x2214 Mov
	var_319_int = 20; // 0x2215 MovI
	func_8808(var_317_bool, var_318_object, var_319_int); // 0x2216 NEW_2
	return 2; // 0x2218 Return
}


func_8207(var_559_bool)
{
	var_561_int = 0; var_562_string = ""; // 0x2010 PushV
	var_562_string = "ood2BigVlad2"; // 0x2011 MovS
	func_7323(var_561_int, var_562_string); // 0x2012 NEW_2
	var_563_int = 0; // 0x2014 PushI
	var_564_bool = var_561_int == var_563_int; // 0x2015 Eq
	if(var_564_bool == 0) goto Label_8217; // 0x2016 JumpB
	var_559_bool = 1; // 0x2017 MovB
	return 0; // 0x2018 Return
	
Label_8217:
	var_559_bool = 0; // 0x2019 MovB
	return 0; // 0x201a Return
}


func_1559(var_0_object, var_1_object, var_2_object, var_3_string, var_930_object, var_931_object)
{
	var_0_object = var_931_object; // 0x618 TMov
	var_1_object = var_930_object; // 0x619 TMov
	var_3_string = 0; // 0x61a TMovB
	var_936_int = 1; // 0x61b PushI
	if(var_936_int == 0) goto Label_1705; // 0x61c JumpB
	var_937_bool = 0; // 0x61d PushV
	var_937_bool = 0; // 0x61e MovB
	var_938_bool = 0; var_939_object = Obj(); // 0x61f PushV
	var_939_object = var_1_object; // 0x620 MovT
	func_8481(var_939_object); // 0x621 NEW_2
	var_944_bool = var_938_bool == 0; // 0x623 Not
	if(var_944_bool == 0) goto Label_1579; // 0x624 JumpB
	var_945_bool = 0; var_946_object = Obj(); // 0x625 PushV
	var_946_object = var_1_object; // 0x626 MovT
	func_8565(var_946_object); // 0x627 NEW_2
	if(var_945_bool == 0) goto Label_1579; // 0x629 JumpB
	var_937_bool = 1; // 0x62a MovB
	
Label_1579:
	if(var_937_bool == 0) goto Label_1605; // 0x62b JumpB
	var_951_object = Obj(); var_952_object = Obj(); // 0x62c PushV
	var_951_object = var_1_object; // 0x62d MovT
	var_952_object = var_0_object; // 0x62e MovT
	func_7894(); // 0x62f NEW_2
	var_955_object = Obj(); var_956_object = Obj(); // 0x631 PushV
	var_955_object = var_1_object; // 0x632 MovT
	var_956_object = var_0_object; // 0x633 MovT
	func_8090(); // 0x634 NEW_2
	var_959_string = ""; // 0x636 PushV
	var_959_string = "Neutral"; // 0x637 MovS
	func_1735(var_931_object, var_959_string); // 0x638 NEW_2
	var_967_int = 510676; // 0x63a PushI
	SetMessage(var_967_int); // 0x63b TObjFunc
	ClearReplies(); // 0x63d TObjFunc
	var_968_int = 510688; // 0x63f PushI
	var_969_int = 11789; // 0x640 PushI
	var_970_int = 11801; // 0x641 PushI
	AddReply(var_968_int, var_969_int, var_970_int); // 0x642 TObjFunc
	goto Label_1705; // 0x644 Jump
	
Label_1705:
	var_971_bool = 0; // 0x6a9 PushV
	func_7411(var_971_bool); // 0x6aa NEW_2
	if(var_971_bool == 0) goto Label_1720; // 0x6ac JumpB
	
Label_1709:
	lshWaitForAnimEnd(); // 0x6ad Func
	var_972_string = var_3_string; // 0x6af PushT
	if(var_972_string == 0) goto Label_1714; // 0x6b0 JumpB
	goto Label_1719; // 0x6b1 Jump
	
Label_1719:
	goto Label_1734; // 0x6b7 Jump
	
Label_1734:
	return 0; // 0x6c6 Return
	
Label_1714:
	var_973_string = ""; // 0x6b2 PushV
	var_973_string = var_2_object; // 0x6b3 MovT
	func_7254(var_973_string); // 0x6b4 NEW_2
	goto Label_1709; // 0x6b6 Jump
	
Label_1720:
	var_974_string = "all"; // 0x6b8 PushS
	var_975_string = "idle"; // 0x6b9 PushS
	PlayAnimation(var_974_string, var_975_string); // 0x6ba Func
	
Label_1724:
	WaitForAnimEnd(); // 0x6bc Func
	var_976_string = var_3_string; // 0x6be PushT
	if(var_976_string == 0) goto Label_1729; // 0x6bf JumpB
	goto Label_1734; // 0x6c0 Jump
	
Label_1729:
	var_977_string = "all"; // 0x6c1 PushS
	var_978_string = "idle"; // 0x6c2 PushS
	PlayAnimation(var_977_string, var_978_string); // 0x6c3 Func
	goto Label_1724; // 0x6c5 Jump
	
Label_1605:
	var_979_object = Obj(); var_980_object = Obj(); // 0x645 PushV
	var_979_object = var_1_object; // 0x646 MovT
	var_980_object = var_0_object; // 0x647 MovT
	func_8090(); // 0x648 NEW_2
	var_981_string = ""; // 0x64a PushV
	var_981_string = "Neutral"; // 0x64b MovS
	func_1735(var_931_object, var_981_string); // 0x64c NEW_2
	var_982_int = 512502; // 0x64e PushI
	SetMessage(var_982_int); // 0x64f TObjFunc
	ClearReplies(); // 0x651 TObjFunc
	var_983_bool = 0; // 0x653 PushV
	var_983_bool = 0; // 0x654 MovB
	var_984_bool = 0; var_985_object = Obj(); // 0x655 PushV
	var_985_object = var_1_object; // 0x656 MovT
	func_8481(var_985_object); // 0x657 NEW_2
	if(var_984_bool == 0) goto Label_1632; // 0x659 JumpB
	var_986_bool = 0; var_987_object = Obj(); // 0x65a PushV
	var_987_object = var_1_object; // 0x65b MovT
	func_8493(var_987_object); // 0x65c NEW_2
	if(var_986_bool == 0) goto Label_1632; // 0x65e JumpB
	var_983_bool = 1; // 0x65f MovB
	
Label_1632:
	if(var_983_bool == 0) goto Label_1638; // 0x660 JumpB
	var_992_int = 512027; // 0x661 PushI
	var_993_int = 13248; // 0x662 PushI
	var_994_int = 13245; // 0x663 PushI
	AddReply(var_992_int, var_993_int, var_994_int); // 0x664 TObjFunc
	
Label_1638:
	var_995_bool = 0; // 0x666 PushV
	var_995_bool = 0; // 0x667 MovB
	var_996_bool = 0; // 0x668 PushV
	var_996_bool = 0; // 0x669 MovB
	var_997_bool = 0; // 0x66a PushV
	var_997_bool = 0; // 0x66b MovB
	var_998_bool = 0; // 0x66c PushV
	var_998_bool = 0; // 0x66d MovB
	var_999_bool = 0; // 0x66e PushV
	var_999_bool = 0; // 0x66f MovB
	var_1000_bool = 0; var_1001_object = Obj(); // 0x670 PushV
	var_1001_object = var_1_object; // 0x671 MovT
	func_8445(var_1001_object); // 0x672 NEW_2
	if(var_1000_bool == 0) goto Label_1659; // 0x674 JumpB
	var_1006_bool = 0; var_1007_object = Obj(); // 0x675 PushV
	var_1007_object = var_1_object; // 0x676 MovT
	func_8457(var_1007_object); // 0x677 NEW_2
	if(var_1006_bool == 0) goto Label_1659; // 0x679 JumpB
	var_999_bool = 1; // 0x67a MovB
	
Label_1659:
	if(var_999_bool == 0) goto Label_1667; // 0x67b JumpB
	var_1012_bool = 0; var_1013_object = Obj(); // 0x67c PushV
	var_1013_object = var_1_object; // 0x67d MovT
	func_8421(var_1013_object); // 0x67e NEW_2
	var_1018_bool = var_1012_bool == 0; // 0x680 Not
	if(var_1018_bool == 0) goto Label_1667; // 0x681 JumpB
	var_998_bool = 1; // 0x682 MovB
	
Label_1667:
	if(var_998_bool == 0) goto Label_1675; // 0x683 JumpB
	var_1019_bool = 0; var_1020_object = Obj(); // 0x684 PushV
	var_1020_object = var_1_object; // 0x685 MovT
	func_8433(var_1020_object); // 0x686 NEW_2
	var_1025_bool = var_1019_bool == 0; // 0x688 Not
	if(var_1025_bool == 0) goto Label_1675; // 0x689 JumpB
	var_997_bool = 1; // 0x68a MovB
	
Label_1675:
	if(var_997_bool == 0) goto Label_1683; // 0x68b JumpB
	var_1026_bool = 0; var_1027_object = Obj(); // 0x68c PushV
	var_1027_object = var_1_object; // 0x68d MovT
	func_8469(var_1027_object); // 0x68e NEW_2
	var_1032_bool = var_1026_bool == 0; // 0x690 Not
	if(var_1032_bool == 0) goto Label_1683; // 0x691 JumpB
	var_996_bool = 1; // 0x692 MovB
	
Label_1683:
	if(var_996_bool == 0) goto Label_1691; // 0x693 JumpB
	var_1033_bool = 0; var_1034_object = Obj(); // 0x694 PushV
	var_1034_object = var_1_object; // 0x695 MovT
	func_8409(var_1034_object); // 0x696 NEW_2
	var_1039_bool = var_1033_bool == 0; // 0x698 Not
	if(var_1039_bool == 0) goto Label_1691; // 0x699 JumpB
	var_995_bool = 1; // 0x69a MovB
	
Label_1691:
	if(var_995_bool == 0) goto Label_1697; // 0x69b JumpB
	var_1040_int = 512503; // 0x69c PushI
	var_1041_int = 13674; // 0x69d PushI
	var_1042_int = 13673; // 0x69e PushI
	AddReply(var_1040_int, var_1041_int, var_1042_int); // 0x69f TObjFunc
	
Label_1697:
	var_1043_int = 512514; // 0x6a1 PushI
	var_1044_int = -1; // 0x6a2 PushI
	var_1045_int = 13684; // 0x6a3 PushI
	AddReply(var_1043_int, var_1044_int, var_1045_int); // 0x6a4 TObjFunc
	goto Label_1705; // 0x6a6 Jump
}


func_8730()
{
	var_254_object = Obj(); var_255_object = Obj(); // 0x221a PushV
	var_256_int = 91; // 0x221b PushI
	var_257_int = 1; // 0x221c PushI
	var_258_int = 512173; // 0x221d PushI
	CreateDiaryEntry(var_255_object, var_256_int, var_257_int, var_258_int); // 0x221e Func
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0; // 0x2220 PushV
	var_260_object = var_255_object; // 0x2221 Mov
	var_261_int = 20; // 0x2222 MovI
	func_8808(var_259_bool, var_260_object, var_261_int); // 0x2223 NEW_2
	return 2; // 0x2225 Return
}


func_8219(var_586_bool)
{
	var_588_int = 0; var_589_string = ""; // 0x201c PushV
	var_589_string = "ood2BigVlad4"; // 0x201d MovS
	func_7323(var_588_int, var_589_string); // 0x201e NEW_2
	var_590_int = 0; // 0x2020 PushI
	var_591_bool = var_588_int == var_590_int; // 0x2021 Eq
	if(var_591_bool == 0) goto Label_8229; // 0x2022 JumpB
	var_586_bool = 1; // 0x2023 MovB
	return 0; // 0x2024 Return
	
Label_8229:
	var_586_bool = 0; // 0x2025 MovB
	return 0; // 0x2026 Return
}


func_1059(var_0_object, var_1_object, var_2_object, var_3_string, var_346_object, var_347_object)
{
	var_0_object = var_347_object; // 0x424 TMov
	var_1_object = var_346_object; // 0x425 TMov
	var_3_string = 0; // 0x426 TMovB
	var_352_int = 1; // 0x427 PushI
	if(var_352_int == 0) goto Label_1087; // 0x428 JumpB
	var_353_string = ""; // 0x429 PushV
	var_353_string = "Neutral"; // 0x42a MovS
	func_1117(var_347_object, var_353_string); // 0x42b NEW_2
	var_361_int = 536225; // 0x42d PushI
	SetMessage(var_361_int); // 0x42e TObjFunc
	ClearReplies(); // 0x430 TObjFunc
	var_362_int = 536226; // 0x432 PushI
	var_363_int = -1; // 0x433 PushI
	var_364_int = 38001; // 0x434 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x435 TObjFunc
	var_365_int = 536227; // 0x437 PushI
	var_366_int = -1; // 0x438 PushI
	var_367_int = 38002; // 0x439 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x43a TObjFunc
	goto Label_1087; // 0x43c Jump
	
Label_1087:
	var_368_bool = 0; // 0x43f PushV
	func_7411(var_368_bool); // 0x440 NEW_2
	if(var_368_bool == 0) goto Label_1102; // 0x442 JumpB
	
Label_1091:
	lshWaitForAnimEnd(); // 0x443 Func
	var_369_string = var_3_string; // 0x445 PushT
	if(var_369_string == 0) goto Label_1096; // 0x446 JumpB
	goto Label_1101; // 0x447 Jump
	
Label_1101:
	goto Label_1116; // 0x44d Jump
	
Label_1116:
	return 0; // 0x45c Return
	
Label_1096:
	var_370_string = ""; // 0x448 PushV
	var_370_string = var_2_object; // 0x449 MovT
	func_7254(var_370_string); // 0x44a NEW_2
	goto Label_1091; // 0x44c Jump
	
Label_1102:
	var_371_string = "all"; // 0x44e PushS
	var_372_string = "idle"; // 0x44f PushS
	PlayAnimation(var_371_string, var_372_string); // 0x450 Func
	
Label_1106:
	WaitForAnimEnd(); // 0x452 Func
	var_373_string = var_3_string; // 0x454 PushT
	if(var_373_string == 0) goto Label_1111; // 0x455 JumpB
	goto Label_1116; // 0x456 Jump
	
Label_1111:
	var_374_string = "all"; // 0x457 PushS
	var_375_string = "idle"; // 0x458 PushS
	PlayAnimation(var_374_string, var_375_string); // 0x459 Func
	goto Label_1106; // 0x45b Jump
}


func_8231(var_522_bool)
{
	var_524_int = 0; var_525_string = ""; // 0x2028 PushV
	var_525_string = "d2q01"; // 0x2029 MovS
	func_7323(var_524_int, var_525_string); // 0x202a NEW_2
	var_526_int = 0; // 0x202c PushI
	var_527_bool = var_524_int == var_526_int; // 0x202d Eq
	if(var_527_bool == 0) goto Label_8241; // 0x202e JumpB
	var_522_bool = 1; // 0x202f MovB
	return 0; // 0x2030 Return
	
Label_8241:
	var_522_bool = 0; // 0x2031 MovB
	return 0; // 0x2032 Return
}


func_8743()
{
	var_176_object = Obj(); var_177_object = Obj(); // 0x2227 PushV
	var_178_int = 713; // 0x2228 PushI
	var_179_int = 1; // 0x2229 PushI
	var_180_int = 536321; // 0x222a PushI
	CreateDiaryEntry(var_177_object, var_178_int, var_179_int, var_180_int); // 0x222b Func
	var_181_bool = 0; var_182_object = Obj(); var_183_int = 0; // 0x222d PushV
	var_182_object = var_177_object; // 0x222e Mov
	var_183_int = 139; // 0x222f MovI
	func_8808(var_181_bool, var_182_object, var_183_int); // 0x2230 NEW_2
	return 2; // 0x2232 Return
}


func_6184(var_0_object, var_1050_int, var_1051_object)
{
	var_1053_object = Obj(); var_1054_bool = 0; var_1055_int = 0; var_1056_bool = 0; var_1057_object = Obj(); var_1058_bool = 0; var_1059_int = 0; var_1060_bool = 0; // 0x1828 PushV
	var_0_object = var_1051_object; // 0x1829 TMov
	var_1061_bool = 0; var_1062_object = Obj(); var_1063_float = 0; // 0x182a PushV
	var_1062_object = var_1051_object; // 0x182b Mov
	var_1063_float = 70.0; // 0x182c MovF
	func_7031(var_1062_object, var_1063_float); // 0x182d NEW_2
	var_1064_bool = var_1061_bool == 0; // 0x182f Not
	if(var_1064_bool == 0) goto Label_6195; // 0x1830 JumpB
	var_1050_int = -2; // 0x1831 MovI
	return 8; // 0x1832 Return
	
Label_6195:
	CreateDialog(var_1057_object); // 0x1833 Func
	var_1065_int = 0; // 0x1835 PushV
	func_7405(var_1065_int); // 0x1836 NEW_2
	SetNPCName(var_1065_int); // 0x1838 ObjFunc
	var_1066_int = 0; // 0x183a PushV
	func_7403(var_1066_int); // 0x183b NEW_2
	SetNPCDescription(var_1066_int); // 0x183d ObjFunc
	var_1067_string = ""; // 0x183f PushV
	func_7407(var_1067_string); // 0x1840 NEW_2
	SetPhoto(var_1067_string); // 0x1842 ObjFunc
	var_1068_string = ""; // 0x1844 PushV
	func_7409(var_1068_string); // 0x1845 NEW_2
	SetPhoto2(var_1068_string); // 0x1847 ObjFunc
	var_1069_int = 0; // 0x1849 PushV
	func_8886(var_1069_int); // 0x184a NEW_2
	SetPlayerName(var_1069_int); // 0x184c ObjFunc
	var_1059_int = -1; // 0x184e MovI
	IsOverrideActive(var_1058_bool); // 0x184f Func
	var_1070_bool = var_1058_bool; // 0x1851 Push
	if(var_1070_bool == 0) goto Label_6229; // 0x1852 JumpB
	var_1050_int = -2; // 0x1853 MovI
	return 8; // 0x1854 Return
	
Label_6229:
	DoDialog(var_1057_object); // 0x1855 Func
	var_1071_bool = 0; var_1072_object = Obj(); // 0x1857 PushV
	var_1073_object = Obj(); // 0x1858 PushV
	func_7307(var_1073_object); // 0x1859 NEW_2
	var_1072_object = var_1073_object; // 0x185a Mov
	func_7116(var_1071_bool, var_1072_object); // 0x185c NEW_2
	var_1074_object = Obj(); var_1075_object = Obj(); // 0x185e PushV
	var_1074_object = var_1051_object; // 0x185f Mov
	var_1075_object = var_1057_object; // 0x1860 Mov
	TaskCall(19); // 0x1861 TaskCall
	func_6265(var_1076_object, var_1077_object, var_1078_string, var_1079_bool, var_1074_object, var_1075_object); // 0x1862 NEW_2
	TaskReturn(); // 0x1863 TaskReturn
	IsDialogEnd(var_1060_bool); // 0x1865 ObjFunc
	
Label_6247:
	var_1161_bool = var_1060_bool == 0; // 0x1867 Not
	if(var_1161_bool == 0) goto Label_6254; // 0x1868 JumpB
	sync(); // 0x1869 Func
	IsDialogEnd(var_1060_bool); // 0x186b ObjFunc
	goto Label_6247; // 0x186d Jump
	
Label_6254:
	var_1162_object = Obj(); // 0x186e PushV
	var_1162_object = var_1051_object; // 0x186f Mov
	func_7099(); // 0x1870 NEW_2
	StopDialog(var_1057_object); // 0x1872 Func
	GetReturnValue(var_1059_int); // 0x1874 ObjFunc
	var_1050_int = var_1059_int; // 0x1876 Mov
	return 8; // 0x1877 Return
}


func_7211(var_189_bool)
{
	var_191_string = ""; var_192_int = 0; var_193_bool = 0; var_194_int = 0; var_195_string = ""; var_196_string = ""; var_197_int = 0; var_198_bool = 0; var_199_int = 0; var_200_string = ""; // 0x1c2b PushV
	var_201_string = "d"; // 0x1c2c PushS
	var_202_int = 0; // 0x1c2d PushV
	func_7369(var_202_int); // 0x1c2e NEW_2
	var_208_int = var_201_string + var_202_int; // 0x1c30 Add
	var_209_string = "m"; // 0x1c31 PushS
	var_196_string = var_208_int + var_209_string; // 0x1c32 Add2
	var_197_int = 0; // 0x1c33 MovI
	
Label_7220:
	var_210_int = 1; // 0x1c34 PushI
	if(var_210_int == 0) goto Label_7233; // 0x1c35 JumpB
	var_211_int = 1; // 0x1c36 PushI
	var_212_int = var_197_int + var_211_int; // 0x1c37 Add
	var_213_int = var_196_string + var_212_int; // 0x1c38 Add
	HasProperty(var_213_int, var_198_bool); // 0x1c39 ObjFunc
	var_214_bool = var_198_bool == 0; // 0x1c3b Not
	if(var_214_bool == 0) goto Label_7230; // 0x1c3c JumpB
	goto Label_7233; // 0x1c3d Jump
	
Label_7233:
	var_215_bool = var_197_int == 0; // 0x1c41 Not
	if(var_215_bool == 0) goto Label_7237; // 0x1c42 JumpB
	var_189_bool = 0; // 0x1c43 MovB
	return 10; // 0x1c44 Return
	
Label_7237:
	var_199_int = 0; // 0x1c45 MovI
	var_216_int = 1; // 0x1c46 PushI
	var_217_bool = var_197_int > var_216_int; // 0x1c47 GT
	if(var_217_bool == 0) goto Label_7243; // 0x1c48 JumpB
	irand(var_199_int, var_197_int); // 0x1c49 Func
	
Label_7243:
	var_218_int = 1; // 0x1c4b PushI
	var_219_int = var_199_int + var_218_int; // 0x1c4c Add
	var_220_int = var_196_string + var_219_int; // 0x1c4d Add
	GetProperty(var_220_int, var_200_string); // 0x1c4e ObjFunc
	var_221_bool = 0; var_222_string = ""; // 0x1c50 PushV
	var_222_string = var_200_string; // 0x1c51 Mov
	func_7285(var_221_bool, var_222_string); // 0x1c52 NEW_2
	var_189_bool = var_221_bool; // 0x1c53 Mov
	return 10; // 0x1c55 Return
	
Label_7230:
	var_223_int = 1; // 0x1c3e PushI
	var_197_int = var_197_int + var_223_int; // 0x1c3f Add2
	goto Label_7220; // 0x1c40 Jump
}


func_3121(var_0_object, var_608_int, var_609_object)
{
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; var_614_bool = 0; var_615_object = Obj(); var_616_bool = 0; var_617_int = 0; var_618_bool = 0; // 0xc31 PushV
	var_0_object = var_609_object; // 0xc32 TMov
	var_619_bool = 0; var_620_object = Obj(); var_621_float = 0; // 0xc33 PushV
	var_620_object = var_609_object; // 0xc34 Mov
	var_621_float = 70.0; // 0xc35 MovF
	func_7031(var_620_object, var_621_float); // 0xc36 NEW_2
	var_622_bool = var_619_bool == 0; // 0xc38 Not
	if(var_622_bool == 0) goto Label_3132; // 0xc39 JumpB
	var_608_int = -2; // 0xc3a MovI
	return 8; // 0xc3b Return
	
Label_3132:
	CreateDialog(var_615_object); // 0xc3c Func
	var_623_int = 0; // 0xc3e PushV
	func_7405(var_623_int); // 0xc3f NEW_2
	SetNPCName(var_623_int); // 0xc41 ObjFunc
	var_624_int = 0; // 0xc43 PushV
	func_7403(var_624_int); // 0xc44 NEW_2
	SetNPCDescription(var_624_int); // 0xc46 ObjFunc
	var_625_string = ""; // 0xc48 PushV
	func_7407(var_625_string); // 0xc49 NEW_2
	SetPhoto(var_625_string); // 0xc4b ObjFunc
	var_626_string = ""; // 0xc4d PushV
	func_7409(var_626_string); // 0xc4e NEW_2
	SetPhoto2(var_626_string); // 0xc50 ObjFunc
	var_627_int = 0; // 0xc52 PushV
	func_8886(var_627_int); // 0xc53 NEW_2
	SetPlayerName(var_627_int); // 0xc55 ObjFunc
	var_617_int = -1; // 0xc57 MovI
	IsOverrideActive(var_616_bool); // 0xc58 Func
	var_628_bool = var_616_bool; // 0xc5a Push
	if(var_628_bool == 0) goto Label_3166; // 0xc5b JumpB
	var_608_int = -2; // 0xc5c MovI
	return 8; // 0xc5d Return
	
Label_3166:
	DoDialog(var_615_object); // 0xc5e Func
	var_629_bool = 0; var_630_object = Obj(); // 0xc60 PushV
	var_631_object = Obj(); // 0xc61 PushV
	func_7307(var_631_object); // 0xc62 NEW_2
	var_630_object = var_631_object; // 0xc63 Mov
	func_7116(var_629_bool, var_630_object); // 0xc65 NEW_2
	var_632_object = Obj(); var_633_object = Obj(); // 0xc67 PushV
	var_632_object = var_609_object; // 0xc68 Mov
	var_633_object = var_615_object; // 0xc69 Mov
	TaskCall(13); // 0xc6a TaskCall
	func_3202(var_634_object, var_635_object, var_636_string, var_637_bool, var_632_object, var_633_object); // 0xc6b NEW_2
	TaskReturn(); // 0xc6c TaskReturn
	IsDialogEnd(var_618_bool); // 0xc6e ObjFunc
	
Label_3184:
	var_697_bool = var_618_bool == 0; // 0xc70 Not
	if(var_697_bool == 0) goto Label_3191; // 0xc71 JumpB
	sync(); // 0xc72 Func
	IsDialogEnd(var_618_bool); // 0xc74 ObjFunc
	goto Label_3184; // 0xc76 Jump
	
Label_3191:
	var_698_object = Obj(); // 0xc77 PushV
	var_698_object = var_609_object; // 0xc78 Mov
	func_7099(); // 0xc79 NEW_2
	StopDialog(var_615_object); // 0xc7b Func
	GetReturnValue(var_617_int); // 0xc7d ObjFunc
	var_608_int = var_617_int; // 0xc7f Mov
	return 8; // 0xc80 Return
}


func_8243(var_565_bool)
{
	var_567_int = 0; var_568_string = ""; // 0x2034 PushV
	var_568_string = "d2q01"; // 0x2035 MovS
	func_7323(var_567_int, var_568_string); // 0x2036 NEW_2
	var_569_int = 6; // 0x2038 PushI
	var_570_bool = var_567_int == var_569_int; // 0x2039 Eq
	if(var_570_bool == 0) goto Label_8253; // 0x203a JumpB
	var_565_bool = 1; // 0x203b MovB
	return 0; // 0x203c Return
	
Label_8253:
	var_565_bool = 0; // 0x203d MovB
	return 0; // 0x203e Return
}


func_8756()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x2234 PushV
	var_88_int = 141; // 0x2235 PushI
	var_89_int = 1; // 0x2236 PushI
	var_90_int = 515341; // 0x2237 PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0x2238 Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x223a PushV
	var_92_object = var_87_object; // 0x223b Mov
	var_93_int = 139; // 0x223c MovI
	func_8808(var_91_bool, var_92_object, var_93_int); // 0x223d NEW_2
	return 2; // 0x223f Return
}


func_8255(var_649_bool)
{
	var_651_int = 0; var_652_string = ""; // 0x2040 PushV
	var_652_string = "d3q01"; // 0x2041 MovS
	func_7323(var_651_int, var_652_string); // 0x2042 NEW_2
	var_653_int = 3; // 0x2044 PushI
	var_654_bool = var_651_int == var_653_int; // 0x2045 Eq
	if(var_654_bool == 0) goto Label_8265; // 0x2046 JumpB
	var_649_bool = 1; // 0x2047 MovB
	return 0; // 0x2048 Return
	
Label_8265:
	var_649_bool = 0; // 0x2049 MovB
	return 0; // 0x204a Return
}


func_8769()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x2241 PushV
	var_97_int = 115; // 0x2242 PushI
	var_98_int = 1; // 0x2243 PushI
	var_99_int = 513738; // 0x2244 PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x2245 Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x2247 PushV
	var_101_object = var_96_object; // 0x2248 Mov
	var_102_int = 111; // 0x2249 MovI
	func_8808(var_100_bool, var_101_object, var_102_int); // 0x224a NEW_2
	return 2; // 0x224c Return
}


func_8267(var_655_bool)
{
	var_657_int = 0; var_658_string = ""; // 0x204c PushV
	var_658_string = "ood3BigVlad1"; // 0x204d MovS
	func_7323(var_657_int, var_658_string); // 0x204e NEW_2
	var_659_int = 0; // 0x2050 PushI
	var_660_bool = var_657_int == var_659_int; // 0x2051 Eq
	if(var_660_bool == 0) goto Label_8277; // 0x2052 JumpB
	var_655_bool = 1; // 0x2053 MovB
	return 0; // 0x2054 Return
	
Label_8277:
	var_655_bool = 0; // 0x2055 MovB
	return 0; // 0x2056 Return
}


func_5708(var_0_object, var_1_object, var_2_object, var_3_string, var_866_object, var_867_object)
{
	var_0_object = var_867_object; // 0x164d TMov
	var_1_object = var_866_object; // 0x164e TMov
	var_3_string = 0; // 0x164f TMovB
	var_872_int = 1; // 0x1650 PushI
	if(var_872_int == 0) goto Label_5741; // 0x1651 JumpB
	var_873_string = ""; // 0x1652 PushV
	var_873_string = "Neutral"; // 0x1653 MovS
	func_5771(var_867_object, var_873_string); // 0x1654 NEW_2
	var_881_int = 511558; // 0x1656 PushI
	SetMessage(var_881_int); // 0x1657 TObjFunc
	ClearReplies(); // 0x1659 TObjFunc
	var_882_bool = 0; var_883_object = Obj(); // 0x165b PushV
	var_883_object = var_1_object; // 0x165c MovT
	func_8397(var_883_object); // 0x165d NEW_2
	if(var_882_bool == 0) goto Label_5733; // 0x165f JumpB
	var_888_int = 511559; // 0x1660 PushI
	var_889_int = 12754; // 0x1661 PushI
	var_890_int = 12753; // 0x1662 PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0x1663 TObjFunc
	
Label_5733:
	var_891_int = 511589; // 0x1665 PushI
	var_892_int = -1; // 0x1666 PushI
	var_893_int = 12784; // 0x1667 PushI
	AddReply(var_891_int, var_892_int, var_893_int); // 0x1668 TObjFunc
	goto Label_5741; // 0x166a Jump
	
Label_5741:
	var_894_bool = 0; // 0x166d PushV
	func_7411(var_894_bool); // 0x166e NEW_2
	if(var_894_bool == 0) goto Label_5756; // 0x1670 JumpB
	
Label_5745:
	lshWaitForAnimEnd(); // 0x1671 Func
	var_895_string = var_3_string; // 0x1673 PushT
	if(var_895_string == 0) goto Label_5750; // 0x1674 JumpB
	goto Label_5755; // 0x1675 Jump
	
Label_5755:
	goto Label_5770; // 0x167b Jump
	
Label_5770:
	return 0; // 0x168a Return
	
Label_5750:
	var_896_string = ""; // 0x1676 PushV
	var_896_string = var_2_object; // 0x1677 MovT
	func_7254(var_896_string); // 0x1678 NEW_2
	goto Label_5745; // 0x167a Jump
	
Label_5756:
	var_897_string = "all"; // 0x167c PushS
	var_898_string = "idle"; // 0x167d PushS
	PlayAnimation(var_897_string, var_898_string); // 0x167e Func
	
Label_5760:
	WaitForAnimEnd(); // 0x1680 Func
	var_899_string = var_3_string; // 0x1682 PushT
	if(var_899_string == 0) goto Label_5765; // 0x1683 JumpB
	goto Label_5770; // 0x1684 Jump
	
Label_5765:
	var_900_string = "all"; // 0x1685 PushS
	var_901_string = "idle"; // 0x1686 PushS
	PlayAnimation(var_900_string, var_901_string); // 0x1687 Func
	goto Label_5760; // 0x1689 Jump
}


func_8782()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x224e PushV
	var_148_int = 264; // 0x224f PushI
	var_149_int = 2; // 0x2250 PushI
	var_150_int = 521051; // 0x2251 PushI
	CreateDiaryEntry(var_147_object, var_148_int, var_149_int, var_150_int); // 0x2252 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x2254 PushV
	var_152_object = var_147_object; // 0x2255 Mov
	var_153_int = 102; // 0x2256 MovI
	func_8808(var_151_bool, var_152_object, var_153_int); // 0x2257 NEW_2
	return 2; // 0x2259 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_405_object, var_406_object)
{
	var_0_object = var_406_object; // 0x52 TMov
	var_1_object = var_405_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_411_int = 1; // 0x55 PushI
	if(var_411_int == 0) goto Label_177; // 0x56 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x57 PushV
	var_413_object = var_1_object; // 0x58 MovT
	func_8110(var_413_object); // 0x59 NEW_2
	var_420_bool = var_412_bool == 0; // 0x5b Not
	if(var_420_bool == 0) goto Label_113; // 0x5c JumpB
	var_421_string = ""; // 0x5d PushV
	var_421_string = "Neutral"; // 0x5e MovS
	func_207(var_406_object, var_421_string); // 0x5f NEW_2
	var_429_int = 531697; // 0x61 PushI
	SetMessage(var_429_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_430_int = 531698; // 0x66 PushI
	var_431_int = 33083; // 0x67 PushI
	var_432_int = 33082; // 0x68 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x69 TObjFunc
	var_433_int = 531701; // 0x6b PushI
	var_434_int = -1; // 0x6c PushI
	var_435_int = 33085; // 0x6d PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x6e TObjFunc
	goto Label_177; // 0x70 Jump
	
Label_177:
	var_436_bool = 0; // 0xb1 PushV
	func_7411(var_436_bool); // 0xb2 NEW_2
	if(var_436_bool == 0) goto Label_192; // 0xb4 JumpB
	
Label_181:
	lshWaitForAnimEnd(); // 0xb5 Func
	var_437_string = var_3_string; // 0xb7 PushT
	if(var_437_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_191:
	goto Label_206; // 0xbf Jump
	
Label_206:
	return 0; // 0xce Return
	
Label_186:
	var_438_string = ""; // 0xba PushV
	var_438_string = var_2_object; // 0xbb MovT
	func_7254(var_438_string); // 0xbc NEW_2
	goto Label_181; // 0xbe Jump
	
Label_192:
	var_439_string = "all"; // 0xc0 PushS
	var_440_string = "idle"; // 0xc1 PushS
	PlayAnimation(var_439_string, var_440_string); // 0xc2 Func
	
Label_196:
	WaitForAnimEnd(); // 0xc4 Func
	var_441_string = var_3_string; // 0xc6 PushT
	if(var_441_string == 0) goto Label_201; // 0xc7 JumpB
	goto Label_206; // 0xc8 Jump
	
Label_201:
	var_442_string = "all"; // 0xc9 PushS
	var_443_string = "idle"; // 0xca PushS
	PlayAnimation(var_442_string, var_443_string); // 0xcb Func
	goto Label_196; // 0xcd Jump
	
Label_113:
	var_444_string = ""; // 0x71 PushV
	var_444_string = "Neutral"; // 0x72 MovS
	func_207(var_406_object, var_444_string); // 0x73 NEW_2
	var_445_int = 531735; // 0x75 PushI
	SetMessage(var_445_int); // 0x76 TObjFunc
	ClearReplies(); // 0x78 TObjFunc
	var_446_bool = 0; var_447_object = Obj(); // 0x7a PushV
	var_447_object = var_1_object; // 0x7b MovT
	func_8122(var_447_object); // 0x7c NEW_2
	if(var_446_bool == 0) goto Label_132; // 0x7e JumpB
	var_452_int = 532945; // 0x7f PushI
	var_453_int = 33336; // 0x80 PushI
	var_454_int = 34434; // 0x81 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x82 TObjFunc
	
Label_132:
	var_455_bool = 0; // 0x84 PushV
	var_455_bool = 1; // 0x85 MovB
	var_456_bool = 0; // 0x86 PushV
	var_456_bool = 0; // 0x87 MovB
	var_457_bool = 0; var_458_object = Obj(); // 0x88 PushV
	var_458_object = var_1_object; // 0x89 MovT
	func_8122(var_458_object); // 0x8a NEW_2
	if(var_457_bool == 0) goto Label_147; // 0x8c JumpB
	var_459_bool = 0; var_460_object = Obj(); // 0x8d PushV
	var_460_object = var_1_object; // 0x8e MovT
	func_8183(var_460_object); // 0x8f NEW_2
	if(var_459_bool == 0) goto Label_147; // 0x91 JumpB
	var_456_bool = 1; // 0x92 MovB
	
Label_147:
	if(var_456_bool == 0) goto Label_163; // 0x93 JumpB
	var_465_bool = 0; // 0x94 PushV
	var_465_bool = 0; // 0x95 MovB
	var_466_bool = 0; var_467_object = Obj(); // 0x96 PushV
	var_467_object = var_1_object; // 0x97 MovT
	func_8134(var_467_object); // 0x98 NEW_2
	if(var_466_bool == 0) goto Label_161; // 0x9a JumpB
	var_472_bool = 0; var_473_object = Obj(); // 0x9b PushV
	var_473_object = var_1_object; // 0x9c MovT
	func_8183(var_473_object); // 0x9d NEW_2
	if(var_472_bool == 0) goto Label_161; // 0x9f JumpB
	var_465_bool = 1; // 0xa0 MovB
	
Label_161:
	if(var_465_bool == 0) goto Label_163; // 0xa1 JumpB
	var_455_bool = 0; // 0xa2 MovB
	
Label_163:
	if(var_455_bool == 0) goto Label_169; // 0xa3 JumpB
	var_474_int = 533590; // 0xa4 PushI
	var_475_int = 35110; // 0xa5 PushI
	var_476_int = 35109; // 0xa6 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0xa7 TObjFunc
	
Label_169:
	var_477_int = 531813; // 0xa9 PushI
	var_478_int = -1; // 0xaa PushI
	var_479_int = 33207; // 0xab PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0xac TObjFunc
	goto Label_177; // 0xae Jump
}


func_7254(var_60_string)
{
	var_61_bool = 0; var_62_float = 0; var_63_float = 0; var_64_bool = 0; var_65_float = 0; var_66_float = 0; // 0x1c56 PushV
	lshHasAnimation(var_64_bool, var_60_string); // 0x1c57 Func
	var_67_bool = var_64_bool; // 0x1c59 Push
	if(var_67_bool == 0) goto Label_7265; // 0x1c5a JumpB
	lshGetAnimTimes(var_60_string, var_65_float, var_66_float); // 0x1c5b Func
	var_68_bool = 0; // 0x1c5d PushB
	lshPlayAnimation(var_65_float, var_66_float, var_68_bool); // 0x1c5e Func
	goto Label_7269; // 0x1c60 Jump
	
Label_7269:
	return 6; // 0x1c65 Return
	
Label_7265:
	var_69_string = "Can't find lsh animation : "; // 0x1c61 PushS
	var_70_int = var_69_string + var_60_string; // 0x1c62 Add
	Trace(var_70_int); // 0x1c63 Func
}


func_8279(var_733_bool)
{
	var_735_int = 0; var_736_string = ""; // 0x2058 PushV
	var_736_string = "d4q01"; // 0x2059 MovS
	func_7323(var_735_int, var_736_string); // 0x205a NEW_2
	var_737_int = 0; // 0x205c PushI
	var_738_bool = var_735_int == var_737_int; // 0x205d Eq
	if(var_738_bool == 0) goto Label_8289; // 0x205e JumpB
	var_733_bool = 1; // 0x205f MovB
	return 0; // 0x2060 Return
	
Label_8289:
	var_733_bool = 0; // 0x2061 MovB
	return 0; // 0x2062 Return
}


func_8795(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x225b PushV
	GetDiaryRoot(var_102_object); // 0x225c Func
	var_103_bool = var_102_object == 0; // 0x225e Not
	if(var_103_bool == 0) goto Label_8805; // 0x225f JumpB
	var_104_string = "Can't retrieve diary root"; // 0x2260 PushS
	Trace(var_104_string); // 0x2261 Func
	var_100_object = 0; // 0x2263 MovB
	return 2; // 0x2264 Return
	
Label_8805:
	var_100_object = var_102_object; // 0x2265 Mov
	return 2; // 0x2266 Return
}


func_1117(var_2_object, var_353_string)
{
	var_354_bool = 0; // 0x45e PushV
	func_7411(var_354_bool); // 0x45f NEW_2
	var_355_bool = var_354_bool == 0; // 0x461 Not
	if(var_355_bool == 0) goto Label_1124; // 0x462 JumpB
	return 0; // 0x463 Return
	
Label_1124:
	var_356_bool = var_353_string == var_2_object; // 0x464 Eq
	if(var_356_bool == 0) goto Label_1127; // 0x465 JumpB
	return 0; // 0x466 Return
	
Label_1127:
	var_357_string = ""; var_358_bool = 0; // 0x467 PushV
	var_357_string = var_353_string; // 0x468 Mov
	var_359_string = ""; // 0x469 PushS
	var_360_bool = var_353_string == var_359_string; // 0x46a Eq
	if(var_360_bool == 0) goto Label_1134; // 0x46b JumpB
	var_358_bool = 0; // 0x46c MovB
	goto Label_1135; // 0x46d Jump
	
Label_1135:
	func_7270(var_357_string, var_358_bool); // 0x46f NEW_2
	var_2_object = var_353_string; // 0x471 TMov
	return 0; // 0x472 Return
	
Label_1134:
	var_358_bool = 1; // 0x46e MovB
}


func_8291(var_739_bool)
{
	var_741_int = 0; var_742_string = ""; // 0x2064 PushV
	var_742_string = "ood4BigVlad1"; // 0x2065 MovS
	func_7323(var_741_int, var_742_string); // 0x2066 NEW_2
	var_743_int = 0; // 0x2068 PushI
	var_744_bool = var_741_int == var_743_int; // 0x2069 Eq
	if(var_744_bool == 0) goto Label_8301; // 0x206a JumpB
	var_739_bool = 1; // 0x206b MovB
	return 0; // 0x206c Return
	
Label_8301:
	var_739_bool = 0; // 0x206d MovB
	return 0; // 0x206e Return
}


func_7270(var_257_string, var_258_bool)
{
	var_261_bool = 0; var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_float = 0; var_266_float = 0; // 0x1c66 PushV
	lshHasAnimation(var_264_bool, var_257_string); // 0x1c67 Func
	var_267_bool = var_264_bool; // 0x1c69 Push
	if(var_267_bool == 0) goto Label_7280; // 0x1c6a JumpB
	lshGetAnimTimes(var_257_string, var_265_float, var_266_float); // 0x1c6b Func
	lshPlayAnimation(var_265_float, var_266_float, var_258_bool); // 0x1c6d Func
	goto Label_7284; // 0x1c6f Jump
	
Label_7284:
	return 6; // 0x1c74 Return
	
Label_7280:
	var_268_string = "Can't find lsh animation : "; // 0x1c70 PushS
	var_269_int = var_268_string + var_257_string; // 0x1c71 Add
	Trace(var_269_int); // 0x1c72 Func
}


func_6758(var_0_object, var_1224_int, var_1225_object)
{
	var_1227_object = Obj(); var_1228_bool = 0; var_1229_int = 0; var_1230_bool = 0; var_1231_object = Obj(); var_1232_bool = 0; var_1233_int = 0; var_1234_bool = 0; // 0x1a66 PushV
	var_0_object = var_1225_object; // 0x1a67 TMov
	var_1235_bool = 0; var_1236_object = Obj(); var_1237_float = 0; // 0x1a68 PushV
	var_1236_object = var_1225_object; // 0x1a69 Mov
	var_1237_float = 70.0; // 0x1a6a MovF
	func_7031(var_1236_object, var_1237_float); // 0x1a6b NEW_2
	var_1238_bool = var_1235_bool == 0; // 0x1a6d Not
	if(var_1238_bool == 0) goto Label_6769; // 0x1a6e JumpB
	var_1224_int = -2; // 0x1a6f MovI
	return 8; // 0x1a70 Return
	
Label_6769:
	CreateDialog(var_1231_object); // 0x1a71 Func
	var_1239_int = 0; // 0x1a73 PushV
	func_7405(var_1239_int); // 0x1a74 NEW_2
	SetNPCName(var_1239_int); // 0x1a76 ObjFunc
	var_1240_int = 0; // 0x1a78 PushV
	func_7403(var_1240_int); // 0x1a79 NEW_2
	SetNPCDescription(var_1240_int); // 0x1a7b ObjFunc
	var_1241_string = ""; // 0x1a7d PushV
	func_7407(var_1241_string); // 0x1a7e NEW_2
	SetPhoto(var_1241_string); // 0x1a80 ObjFunc
	var_1242_string = ""; // 0x1a82 PushV
	func_7409(var_1242_string); // 0x1a83 NEW_2
	SetPhoto2(var_1242_string); // 0x1a85 ObjFunc
	var_1243_int = 0; // 0x1a87 PushV
	func_8886(var_1243_int); // 0x1a88 NEW_2
	SetPlayerName(var_1243_int); // 0x1a8a ObjFunc
	var_1233_int = -1; // 0x1a8c MovI
	IsOverrideActive(var_1232_bool); // 0x1a8d Func
	var_1244_bool = var_1232_bool; // 0x1a8f Push
	if(var_1244_bool == 0) goto Label_6803; // 0x1a90 JumpB
	var_1224_int = -2; // 0x1a91 MovI
	return 8; // 0x1a92 Return
	
Label_6803:
	DoDialog(var_1231_object); // 0x1a93 Func
	var_1245_bool = 0; var_1246_object = Obj(); // 0x1a95 PushV
	var_1247_object = Obj(); // 0x1a96 PushV
	func_7307(var_1247_object); // 0x1a97 NEW_2
	var_1246_object = var_1247_object; // 0x1a98 Mov
	func_7116(var_1245_bool, var_1246_object); // 0x1a9a NEW_2
	var_1248_object = Obj(); var_1249_object = Obj(); // 0x1a9c PushV
	var_1248_object = var_1225_object; // 0x1a9d Mov
	var_1249_object = var_1231_object; // 0x1a9e Mov
	TaskCall(21); // 0x1a9f TaskCall
	func_6839(var_1250_object, var_1251_object, var_1252_string, var_1253_bool, var_1248_object, var_1249_object); // 0x1aa0 NEW_2
	TaskReturn(); // 0x1aa1 TaskReturn
	IsDialogEnd(var_1234_bool); // 0x1aa3 ObjFunc
	
Label_6821:
	var_1278_bool = var_1234_bool == 0; // 0x1aa5 Not
	if(var_1278_bool == 0) goto Label_6828; // 0x1aa6 JumpB
	sync(); // 0x1aa7 Func
	IsDialogEnd(var_1234_bool); // 0x1aa9 ObjFunc
	goto Label_6821; // 0x1aab Jump
	
Label_6828:
	var_1279_object = Obj(); // 0x1aac PushV
	var_1279_object = var_1225_object; // 0x1aad Mov
	func_7099(); // 0x1aae NEW_2
	StopDialog(var_1231_object); // 0x1ab0 Func
	GetReturnValue(var_1233_int); // 0x1ab2 ObjFunc
	var_1224_int = var_1233_int; // 0x1ab4 Mov
	return 8; // 0x1ab5 Return
}


func_8808(var_91_bool, var_92_object, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; var_97_object = Obj(); var_98_object = Obj(); var_99_int = 0; // 0x2268 PushV
	var_100_object = Obj(); // 0x2269 PushV
	func_8795(var_100_object); // 0x226a NEW_2
	var_97_object = var_100_object; // 0x226b Mov
	Find(var_93_int, var_98_object); // 0x226d ObjFunc
	var_105_bool = var_98_object == 0; // 0x226f Not
	if(var_105_bool == 0) goto Label_8823; // 0x2270 JumpB
	var_106_string = "Can't find diary parent with id: "; // 0x2271 PushS
	var_107_int = var_106_string + var_93_int; // 0x2272 Add
	Trace(var_107_int); // 0x2273 Func
	var_91_bool = 0; // 0x2275 MovB
	return 6; // 0x2276 Return
	
Label_8823:
	AddChild(var_92_object); // 0x2277 ObjFunc
	var_108_int = 7; // 0x2279 PushI
	SendWorldWndMessage(var_108_int); // 0x227a Func
	GetCategory(var_99_int); // 0x227c ObjFunc
	SetDiarySection(var_99_int); // 0x227e Func
	var_91_bool = 0; // 0x2280 MovB
	return 6; // 0x2281 Return
}


func_8303(var_772_bool)
{
	var_774_int = 0; var_775_string = ""; // 0x2070 PushV
	var_775_string = "d4q01"; // 0x2071 MovS
	func_7323(var_774_int, var_775_string); // 0x2072 NEW_2
	var_776_int = 3; // 0x2074 PushI
	var_777_bool = var_774_int == var_776_int; // 0x2075 Eq
	if(var_777_bool == 0) goto Label_8313; // 0x2076 JumpB
	var_772_bool = 1; // 0x2077 MovB
	return 0; // 0x2078 Return
	
Label_8313:
	var_772_bool = 0; // 0x2079 MovB
	return 0; // 0x207a Return
}


func_7285(var_181_bool, var_182_string)
{
	var_183_bool = 0; var_184_bool = 0; // 0x1c75 PushV
	var_185_bool = 0; // 0x1c76 PushV
	func_7411(var_185_bool); // 0x1c77 NEW_2
	if(var_185_bool == 0) goto Label_7298; // 0x1c79 JumpB
	lshHasSpeech(var_184_bool, var_182_string); // 0x1c7a Func
	var_186_bool = var_184_bool; // 0x1c7c Push
	if(var_186_bool == 0) goto Label_7298; // 0x1c7d JumpB
	lshPlaySpeech(var_182_string); // 0x1c7e Func
	var_181_bool = 1; // 0x1c80 MovB
	return 2; // 0x1c81 Return
	
Label_7298:
	var_181_bool = 0; // 0x1c82 MovB
	return 2; // 0x1c83 Return
}


func_6265(var_0_object, var_1_object, var_2_object, var_3_string, var_1074_object, var_1075_object)
{
	var_0_object = var_1075_object; // 0x187a TMov
	var_1_object = var_1074_object; // 0x187b TMov
	var_3_string = 0; // 0x187c TMovB
	var_1080_int = 1; // 0x187d PushI
	if(var_1080_int == 0) goto Label_6365; // 0x187e JumpB
	var_1081_string = ""; // 0x187f PushV
	var_1081_string = "Neutral"; // 0x1880 MovS
	func_6395(var_1075_object, var_1081_string); // 0x1881 NEW_2
	var_1089_int = 513660; // 0x1883 PushI
	SetMessage(var_1089_int); // 0x1884 TObjFunc
	ClearReplies(); // 0x1886 TObjFunc
	var_1090_bool = 0; // 0x1888 PushV
	var_1090_bool = 0; // 0x1889 MovB
	var_1091_bool = 0; var_1092_object = Obj(); // 0x188a PushV
	var_1092_object = var_1_object; // 0x188b MovT
	func_8529(var_1092_object); // 0x188c NEW_2
	if(var_1091_bool == 0) goto Label_6293; // 0x188e JumpB
	var_1097_bool = 0; var_1098_object = Obj(); // 0x188f PushV
	var_1098_object = var_1_object; // 0x1890 MovT
	func_8505(var_1098_object); // 0x1891 NEW_2
	if(var_1097_bool == 0) goto Label_6293; // 0x1893 JumpB
	var_1090_bool = 1; // 0x1894 MovB
	
Label_6293:
	if(var_1090_bool == 0) goto Label_6299; // 0x1895 JumpB
	var_1103_int = 513661; // 0x1896 PushI
	var_1104_int = 14920; // 0x1897 PushI
	var_1105_int = 14919; // 0x1898 PushI
	AddReply(var_1103_int, var_1104_int, var_1105_int); // 0x1899 TObjFunc
	
Label_6299:
	var_1106_bool = 0; // 0x189b PushV
	var_1106_bool = 0; // 0x189c MovB
	var_1107_bool = 0; // 0x189d PushV
	var_1107_bool = 0; // 0x189e MovB
	var_1108_bool = 0; var_1109_object = Obj(); // 0x189f PushV
	var_1109_object = var_1_object; // 0x18a0 MovT
	func_8541(var_1109_object); // 0x18a1 NEW_2
	if(var_1108_bool == 0) goto Label_6314; // 0x18a3 JumpB
	var_1114_bool = 0; var_1115_object = Obj(); // 0x18a4 PushV
	var_1115_object = var_1_object; // 0x18a5 MovT
	func_8517(var_1115_object); // 0x18a6 NEW_2
	if(var_1114_bool == 0) goto Label_6314; // 0x18a8 JumpB
	var_1107_bool = 1; // 0x18a9 MovB
	
Label_6314:
	if(var_1107_bool == 0) goto Label_6322; // 0x18aa JumpB
	var_1120_bool = 0; var_1121_object = Obj(); // 0x18ab PushV
	var_1121_object = var_1_object; // 0x18ac MovT
	func_8589(var_1121_object); // 0x18ad NEW_2
	var_1126_bool = var_1120_bool == 0; // 0x18af Not
	if(var_1126_bool == 0) goto Label_6322; // 0x18b0 JumpB
	var_1106_bool = 1; // 0x18b1 MovB
	
Label_6322:
	if(var_1106_bool == 0) goto Label_6328; // 0x18b2 JumpB
	var_1127_int = 513669; // 0x18b3 PushI
	var_1128_int = 14928; // 0x18b4 PushI
	var_1129_int = 14927; // 0x18b5 PushI
	AddReply(var_1127_int, var_1128_int, var_1129_int); // 0x18b6 TObjFunc
	
Label_6328:
	var_1130_bool = 0; // 0x18b8 PushV
	var_1130_bool = 0; // 0x18b9 MovB
	var_1131_bool = 0; // 0x18ba PushV
	var_1131_bool = 0; // 0x18bb MovB
	var_1132_bool = 0; var_1133_object = Obj(); // 0x18bc PushV
	var_1133_object = var_1_object; // 0x18bd MovT
	func_8517(var_1133_object); // 0x18be NEW_2
	if(var_1132_bool == 0) goto Label_6343; // 0x18c0 JumpB
	var_1134_bool = 0; var_1135_object = Obj(); // 0x18c1 PushV
	var_1135_object = var_1_object; // 0x18c2 MovT
	func_8553(var_1135_object); // 0x18c3 NEW_2
	if(var_1134_bool == 0) goto Label_6343; // 0x18c5 JumpB
	var_1131_bool = 1; // 0x18c6 MovB
	
Label_6343:
	if(var_1131_bool == 0) goto Label_6351; // 0x18c7 JumpB
	var_1140_bool = 0; var_1141_object = Obj(); // 0x18c8 PushV
	var_1141_object = var_1_object; // 0x18c9 MovT
	func_8577(var_1141_object); // 0x18ca NEW_2
	var_1146_bool = var_1140_bool == 0; // 0x18cc Not
	if(var_1146_bool == 0) goto Label_6351; // 0x18cd JumpB
	var_1130_bool = 1; // 0x18ce MovB
	
Label_6351:
	if(var_1130_bool == 0) goto Label_6357; // 0x18cf JumpB
	var_1147_int = 513683; // 0x18d0 PushI
	var_1148_int = 14944; // 0x18d1 PushI
	var_1149_int = 14943; // 0x18d2 PushI
	AddReply(var_1147_int, var_1148_int, var_1149_int); // 0x18d3 TObjFunc
	
Label_6357:
	var_1150_int = 513674; // 0x18d5 PushI
	var_1151_int = -1; // 0x18d6 PushI
	var_1152_int = 14932; // 0x18d7 PushI
	AddReply(var_1150_int, var_1151_int, var_1152_int); // 0x18d8 TObjFunc
	goto Label_6365; // 0x18da Jump
	
Label_6365:
	var_1153_bool = 0; // 0x18dd PushV
	func_7411(var_1153_bool); // 0x18de NEW_2
	if(var_1153_bool == 0) goto Label_6380; // 0x18e0 JumpB
	
Label_6369:
	lshWaitForAnimEnd(); // 0x18e1 Func
	var_1154_string = var_3_string; // 0x18e3 PushT
	if(var_1154_string == 0) goto Label_6374; // 0x18e4 JumpB
	goto Label_6379; // 0x18e5 Jump
	
Label_6379:
	goto Label_6394; // 0x18eb Jump
	
Label_6394:
	return 0; // 0x18fa Return
	
Label_6374:
	var_1155_string = ""; // 0x18e6 PushV
	var_1155_string = var_2_object; // 0x18e7 MovT
	func_7254(var_1155_string); // 0x18e8 NEW_2
	goto Label_6369; // 0x18ea Jump
	
Label_6380:
	var_1156_string = "all"; // 0x18ec PushS
	var_1157_string = "idle"; // 0x18ed PushS
	PlayAnimation(var_1156_string, var_1157_string); // 0x18ee Func
	
Label_6384:
	WaitForAnimEnd(); // 0x18f0 Func
	var_1158_string = var_3_string; // 0x18f2 PushT
	if(var_1158_string == 0) goto Label_6389; // 0x18f3 JumpB
	goto Label_6394; // 0x18f4 Jump
	
Label_6389:
	var_1159_string = "all"; // 0x18f5 PushS
	var_1160_string = "idle"; // 0x18f6 PushS
	PlayAnimation(var_1159_string, var_1160_string); // 0x18f7 Func
	goto Label_6384; // 0x18f9 Jump
}


func_8315(var_778_bool)
{
	var_780_int = 0; var_781_string = ""; // 0x207c PushV
	var_781_string = "ood4BigVlad2"; // 0x207d MovS
	func_7323(var_780_int, var_781_string); // 0x207e NEW_2
	var_782_int = 0; // 0x2080 PushI
	var_783_bool = var_780_int == var_782_int; // 0x2081 Eq
	if(var_783_bool == 0) goto Label_8325; // 0x2082 JumpB
	var_778_bool = 1; // 0x2083 MovB
	return 0; // 0x2084 Return
	
Label_8325:
	var_778_bool = 0; // 0x2085 MovB
	return 0; // 0x2086 Return
}


func_3202(var_0_object, var_1_object, var_2_object, var_3_string, var_632_object, var_633_object)
{
	var_0_object = var_633_object; // 0xc83 TMov
	var_1_object = var_632_object; // 0xc84 TMov
	var_3_string = 0; // 0xc85 TMovB
	var_638_int = 1; // 0xc86 PushI
	if(var_638_int == 0) goto Label_3254; // 0xc87 JumpB
	var_639_string = ""; // 0xc88 PushV
	var_639_string = "Neutral"; // 0xc89 MovS
	func_3284(var_633_object, var_639_string); // 0xc8a NEW_2
	var_647_int = 508926; // 0xc8c PushI
	SetMessage(var_647_int); // 0xc8d TObjFunc
	ClearReplies(); // 0xc8f TObjFunc
	var_648_bool = 0; // 0xc91 PushV
	var_648_bool = 0; // 0xc92 MovB
	var_649_bool = 0; var_650_object = Obj(); // 0xc93 PushV
	var_650_object = var_1_object; // 0xc94 MovT
	func_8255(var_650_object); // 0xc95 NEW_2
	if(var_649_bool == 0) goto Label_3230; // 0xc97 JumpB
	var_655_bool = 0; var_656_object = Obj(); // 0xc98 PushV
	var_656_object = var_1_object; // 0xc99 MovT
	func_8267(var_656_object); // 0xc9a NEW_2
	if(var_655_bool == 0) goto Label_3230; // 0xc9c JumpB
	var_648_bool = 1; // 0xc9d MovB
	
Label_3230:
	if(var_648_bool == 0) goto Label_3236; // 0xc9e JumpB
	var_661_int = 508977; // 0xc9f PushI
	var_662_int = 9847; // 0xca0 PushI
	var_663_int = 9846; // 0xca1 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0xca2 TObjFunc
	
Label_3236:
	var_664_bool = 0; var_665_object = Obj(); // 0xca4 PushV
	var_665_object = var_1_object; // 0xca5 MovT
	func_8146(var_665_object); // 0xca6 NEW_2
	if(var_664_bool == 0) goto Label_3246; // 0xca8 JumpB
	var_683_int = 510375; // 0xca9 PushI
	var_684_int = 11442; // 0xcaa PushI
	var_685_int = 11440; // 0xcab PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0xcac TObjFunc
	
Label_3246:
	var_686_int = 511139; // 0xcae PushI
	var_687_int = -1; // 0xcaf PushI
	var_688_int = 12328; // 0xcb0 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0xcb1 TObjFunc
	goto Label_3254; // 0xcb3 Jump
	
Label_3254:
	var_689_bool = 0; // 0xcb6 PushV
	func_7411(var_689_bool); // 0xcb7 NEW_2
	if(var_689_bool == 0) goto Label_3269; // 0xcb9 JumpB
	
Label_3258:
	lshWaitForAnimEnd(); // 0xcba Func
	var_690_string = var_3_string; // 0xcbc PushT
	if(var_690_string == 0) goto Label_3263; // 0xcbd JumpB
	goto Label_3268; // 0xcbe Jump
	
Label_3268:
	goto Label_3283; // 0xcc4 Jump
	
Label_3283:
	return 0; // 0xcd3 Return
	
Label_3263:
	var_691_string = ""; // 0xcbf PushV
	var_691_string = var_2_object; // 0xcc0 MovT
	func_7254(var_691_string); // 0xcc1 NEW_2
	goto Label_3258; // 0xcc3 Jump
	
Label_3269:
	var_692_string = "all"; // 0xcc5 PushS
	var_693_string = "idle"; // 0xcc6 PushS
	PlayAnimation(var_692_string, var_693_string); // 0xcc7 Func
	
Label_3273:
	WaitForAnimEnd(); // 0xcc9 Func
	var_694_string = var_3_string; // 0xccb PushT
	if(var_694_string == 0) goto Label_3278; // 0xccc JumpB
	goto Label_3283; // 0xccd Jump
	
Label_3278:
	var_695_string = "all"; // 0xcce PushS
	var_696_string = "idle"; // 0xccf PushS
	PlayAnimation(var_695_string, var_696_string); // 0xcd0 Func
	goto Label_3273; // 0xcd2 Jump
}


func_7300()
{
	var_58_bool = 0; // 0x1c84 PushV
	func_7411(var_58_bool); // 0x1c85 NEW_2
	if(var_58_bool == 0) goto Label_7306; // 0x1c87 JumpB
	lshStopSpeech(); // 0x1c88 Func
	
Label_7306:
	return 0; // 0x1c8a Return
}


func_8836(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); // 0x2284 PushV
	GetMainOutdoorScene(var_70_object); // 0x2285 Func
	var_72_bool = var_70_object == 0; // 0x2287 NullEq
	if(var_72_bool == 0) goto Label_8847; // 0x2288 JumpB
	var_73_string = "Can't find main outdoor scene"; // 0x2289 PushS
	Trace(var_73_string); // 0x228a Func
	var_71_object = 0; // 0x228c SetNull
	var_67_object = var_71_object; // 0x228d Mov
	return 4; // 0x228e Return
	
Label_8847:
	GetMap(var_71_object); // 0x228f ObjFunc
	var_67_object = var_71_object; // 0x2291 Mov
	return 4; // 0x2292 Return
}


func_8327(var_787_bool, var_788_object)
{
	var_789_bool = 0; // 0x2088 PushV
	var_789_bool = 1; // 0x2089 MovB
	var_790_bool = 0; var_791_object = Obj(); var_792_string = ""; // 0x208a PushV
	var_791_object = var_788_object; // 0x208b Mov
	var_792_string = "d4q01_sobor_key"; // 0x208c MovS
	func_7345(var_791_object, var_792_string); // 0x208d NEW_2
	var_797_bool = var_790_bool == 0; // 0x208f Not
	if(var_797_bool == 0) goto Label_8345; // 0x2090 JumpB
	var_798_bool = 0; var_799_object = Obj(); var_800_string = ""; // 0x2091 PushV
	var_799_object = var_788_object; // 0x2092 Mov
	var_800_string = "d4q01_theater_key"; // 0x2093 MovS
	func_7345(var_799_object, var_800_string); // 0x2094 NEW_2
	var_801_bool = var_798_bool == 0; // 0x2096 Not
	if(var_801_bool == 0) goto Label_8345; // 0x2097 JumpB
	var_789_bool = 0; // 0x2098 MovB
	
Label_8345:
	if(var_789_bool == 0) goto Label_8355; // 0x2099 JumpB
	var_802_int = 0; var_803_string = ""; // 0x209a PushV
	var_803_string = "d4q01"; // 0x209b MovS
	func_7323(var_802_int, var_803_string); // 0x209c NEW_2
	var_804_int = 4; // 0x209e PushI
	var_805_bool = var_802_int == var_804_int; // 0x209f Eq
	if(var_805_bool == 0) goto Label_8355; // 0x20a0 JumpB
	var_787_bool = 1; // 0x20a1 MovB
	return 0; // 0x20a2 Return
	
Label_8355:
	var_787_bool = 0; // 0x20a3 MovB
	return 0; // 0x20a4 Return
}


func_7307(var_149_object)
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x1c8b PushV
	self(var_151_object); // 0x1c8c Func
	var_149_object = var_151_object; // 0x1c8e Mov
	return 2; // 0x1c8f Return
}


func_5771(var_2_object, var_873_string)
{
	var_874_bool = 0; // 0x168c PushV
	func_7411(var_874_bool); // 0x168d NEW_2
	var_875_bool = var_874_bool == 0; // 0x168f Not
	if(var_875_bool == 0) goto Label_5778; // 0x1690 JumpB
	return 0; // 0x1691 Return
	
Label_5778:
	var_876_bool = var_873_string == var_2_object; // 0x1692 Eq
	if(var_876_bool == 0) goto Label_5781; // 0x1693 JumpB
	return 0; // 0x1694 Return
	
Label_5781:
	var_877_string = ""; var_878_bool = 0; // 0x1695 PushV
	var_877_string = var_873_string; // 0x1696 Mov
	var_879_string = ""; // 0x1697 PushS
	var_880_bool = var_873_string == var_879_string; // 0x1698 Eq
	if(var_880_bool == 0) goto Label_5788; // 0x1699 JumpB
	var_878_bool = 0; // 0x169a MovB
	goto Label_5789; // 0x169b Jump
	
Label_5789:
	func_7270(var_877_string, var_878_bool); // 0x169d NEW_2
	var_2_object = var_873_string; // 0x169f TMov
	return 0; // 0x16a0 Return
	
Label_5788:
	var_878_bool = 1; // 0x169c MovB
}


func_7820()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x1e8c PushV
	var_65_string = "d5q01"; // 0x1e8d PushS
	var_66_int = 2; // 0x1e8e PushI
	SetVariable(var_65_string, var_66_int); // 0x1e8f Func
	var_67_object = Obj(); // 0x1e91 PushV
	func_8836(var_67_object); // 0x1e92 NEW_2
	var_64_object = var_67_object; // 0x1e93 Mov
	var_74_string = "d5q01BigVladGotoAlexandr"; // 0x1e95 PushS
	var_75_string = "pt_map_alexandr"; // 0x1e96 PushS
	var_76_int = 1; // 0x1e97 PushI
	var_77_int = 511957; // 0x1e98 PushI
	var_78_float = 0; // 0x1e99 PushV
	func_7364(var_78_float); // 0x1e9a NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x1e9c ObjFunc
	var_81_string = "d5q01BigVladGotoLara"; // 0x1e9e PushS
	var_82_string = "pt_map_lara"; // 0x1e9f PushS
	var_83_int = 1; // 0x1ea0 PushI
	var_84_int = 511959; // 0x1ea1 PushI
	var_85_float = 0; // 0x1ea2 PushV
	func_7364(var_85_float); // 0x1ea3 NEW_2
	AddMark(var_81_string, var_82_string, var_83_int, var_84_int, var_85_float); // 0x1ea5 ObjFunc
	func_8756(); // 0x1ea8 NEW_2
	return 2; // 0x1eaa Return
}


func_4239(var_0_object, var_701_int, var_702_object)
{
	var_704_object = Obj(); var_705_bool = 0; var_706_int = 0; var_707_bool = 0; var_708_object = Obj(); var_709_bool = 0; var_710_int = 0; var_711_bool = 0; // 0x108f PushV
	var_0_object = var_702_object; // 0x1090 TMov
	var_712_bool = 0; var_713_object = Obj(); var_714_float = 0; // 0x1091 PushV
	var_713_object = var_702_object; // 0x1092 Mov
	var_714_float = 70.0; // 0x1093 MovF
	func_7031(var_713_object, var_714_float); // 0x1094 NEW_2
	var_715_bool = var_712_bool == 0; // 0x1096 Not
	if(var_715_bool == 0) goto Label_4250; // 0x1097 JumpB
	var_701_int = -2; // 0x1098 MovI
	return 8; // 0x1099 Return
	
Label_4250:
	CreateDialog(var_708_object); // 0x109a Func
	var_716_int = 0; // 0x109c PushV
	func_7405(var_716_int); // 0x109d NEW_2
	SetNPCName(var_716_int); // 0x109f ObjFunc
	var_717_int = 0; // 0x10a1 PushV
	func_7403(var_717_int); // 0x10a2 NEW_2
	SetNPCDescription(var_717_int); // 0x10a4 ObjFunc
	var_718_string = ""; // 0x10a6 PushV
	func_7407(var_718_string); // 0x10a7 NEW_2
	SetPhoto(var_718_string); // 0x10a9 ObjFunc
	var_719_string = ""; // 0x10ab PushV
	func_7409(var_719_string); // 0x10ac NEW_2
	SetPhoto2(var_719_string); // 0x10ae ObjFunc
	var_720_int = 0; // 0x10b0 PushV
	func_8886(var_720_int); // 0x10b1 NEW_2
	SetPlayerName(var_720_int); // 0x10b3 ObjFunc
	var_710_int = -1; // 0x10b5 MovI
	IsOverrideActive(var_709_bool); // 0x10b6 Func
	var_721_bool = var_709_bool; // 0x10b8 Push
	if(var_721_bool == 0) goto Label_4284; // 0x10b9 JumpB
	var_701_int = -2; // 0x10ba MovI
	return 8; // 0x10bb Return
	
Label_4284:
	DoDialog(var_708_object); // 0x10bc Func
	var_722_bool = 0; var_723_object = Obj(); // 0x10be PushV
	var_724_object = Obj(); // 0x10bf PushV
	func_7307(var_724_object); // 0x10c0 NEW_2
	var_723_object = var_724_object; // 0x10c1 Mov
	func_7116(var_722_bool, var_723_object); // 0x10c3 NEW_2
	var_725_object = Obj(); var_726_object = Obj(); // 0x10c5 PushV
	var_725_object = var_702_object; // 0x10c6 Mov
	var_726_object = var_708_object; // 0x10c7 Mov
	TaskCall(15); // 0x10c8 TaskCall
	func_4320(var_727_object, var_728_object, var_729_string, var_730_bool, var_725_object, var_726_object); // 0x10c9 NEW_2
	TaskReturn(); // 0x10ca TaskReturn
	IsDialogEnd(var_711_bool); // 0x10cc ObjFunc
	
Label_4302:
	var_838_bool = var_711_bool == 0; // 0x10ce Not
	if(var_838_bool == 0) goto Label_4309; // 0x10cf JumpB
	sync(); // 0x10d0 Func
	IsDialogEnd(var_711_bool); // 0x10d2 ObjFunc
	goto Label_4302; // 0x10d4 Jump
	
Label_4309:
	var_839_object = Obj(); // 0x10d5 PushV
	var_839_object = var_702_object; // 0x10d6 Mov
	func_7099(); // 0x10d7 NEW_2
	StopDialog(var_708_object); // 0x10d9 Func
	GetReturnValue(var_710_int); // 0x10db ObjFunc
	var_701_int = var_710_int; // 0x10dd Mov
	return 8; // 0x10de Return
}


func_7313(var_114_cvector, var_115_cvector)
{
	var_117_float = 0; var_118_float = 0; // 0x1c91 PushV
	var_119_int = var_115_cvector | var_115_cvector; // 0x1c92 Or
	var_118_float = sqrt(var_119_int); // 0x1c93 Sqrt2
	var_120_float = 0.0; // 0x1c94 PushF
	var_121_bool = var_118_float < var_120_float; // 0x1c95 LT
	if(var_121_bool == 0) goto Label_7321; // 0x1c96 JumpB
	var_114_cvector = CVector(0.0, 0.0, 0.0); // 0x1c97 MovV
	return 2; // 0x1c98 Return
	
Label_7321:
	var_114_cvector = var_115_cvector / var_115_cvector; // 0x1c99 Div2
	return 2; // 0x1c9a Return
}


func_8853(var_119_object, var_120_string, var_121_float)
{
	var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_object = Obj(); var_126_bool = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_object = Obj(); var_130_bool = 0; // 0x2295 PushV
	GetMainOutdoorScene(var_129_object); // 0x2296 Func
	var_131_bool = var_129_object == 0; // 0x2298 NullEq
	if(var_131_bool == 0) goto Label_8862; // 0x2299 JumpB
	var_132_string = "Can't find main outdoor scene"; // 0x229a PushS
	Trace(var_132_string); // 0x229b Func
	return 8; // 0x229d Return
	
Label_8862:
	GetLocator(var_120_string, var_130_bool, var_127_cvector, var_128_cvector); // 0x229e ObjFunc
	var_133_bool = var_130_bool == 0; // 0x22a0 Not
	if(var_133_bool == 0) goto Label_8872; // 0x22a1 JumpB
	var_134_string = "Warning: outdoor scene locator "; // 0x22a2 PushS
	var_135_int = var_134_string + var_120_string; // 0x22a3 Add
	var_136_string = " doesnt exist"; // 0x22a4 PushS
	var_137_int = var_135_int + var_136_string; // 0x22a5 Add
	Trace(var_137_int); // 0x22a6 Func
	
Label_8872:
	GetMap(var_119_object); // 0x22a8 ObjFunc
	var_138_bool = var_119_object == 0; // 0x22aa NullEq
	if(var_138_bool == 0) goto Label_8880; // 0x22ab JumpB
	var_139_string = "Can't find map"; // 0x22ac PushS
	Trace(var_139_string); // 0x22ad Func
	return 8; // 0x22af Return
	
Label_8880:
	var_140_float = GetByIndex(var_127_cvector, 0); // 0x22b0 PushE
	var_141_float = GetByIndex(var_127_cvector, 2); // 0x22b1 PushE
	SetMapParams(var_140_float, var_141_float, var_121_float); // 0x22b2 ObjFunc
	return 8; // 0x22b4 Return
}


func_7323(var_414_int, var_415_string)
{
	var_416_int = 0; var_417_int = 0; // 0x1c9b PushV
	GetVariable(var_415_string, var_417_int); // 0x1c9c Func
	var_414_int = var_417_int; // 0x1c9e Mov
	return 2; // 0x1c9f Return
}


func_1181(var_0_object, var_76_int, var_77_object)
{
	var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0; var_85_int = 0; var_86_bool = 0; // 0x49d PushV
	var_0_object = var_77_object; // 0x49e TMov
	var_87_bool = 0; var_88_object = Obj(); var_89_float = 0; // 0x49f PushV
	var_88_object = var_77_object; // 0x4a0 Mov
	var_89_float = 70.0; // 0x4a1 MovF
	func_7031(var_88_object, var_89_float); // 0x4a2 NEW_2
	var_133_bool = var_87_bool == 0; // 0x4a4 Not
	if(var_133_bool == 0) goto Label_1192; // 0x4a5 JumpB
	var_76_int = -2; // 0x4a6 MovI
	return 8; // 0x4a7 Return
	
Label_1192:
	CreateDialog(var_83_object); // 0x4a8 Func
	var_134_int = 0; // 0x4aa PushV
	func_7405(var_134_int); // 0x4ab NEW_2
	SetNPCName(var_134_int); // 0x4ad ObjFunc
	var_135_int = 0; // 0x4af PushV
	func_7403(var_135_int); // 0x4b0 NEW_2
	SetNPCDescription(var_135_int); // 0x4b2 ObjFunc
	var_136_string = ""; // 0x4b4 PushV
	func_7407(var_136_string); // 0x4b5 NEW_2
	SetPhoto(var_136_string); // 0x4b7 ObjFunc
	var_137_string = ""; // 0x4b9 PushV
	func_7409(var_137_string); // 0x4ba NEW_2
	SetPhoto2(var_137_string); // 0x4bc ObjFunc
	var_138_int = 0; // 0x4be PushV
	func_8886(var_138_int); // 0x4bf NEW_2
	SetPlayerName(var_138_int); // 0x4c1 ObjFunc
	var_85_int = -1; // 0x4c3 MovI
	IsOverrideActive(var_84_bool); // 0x4c4 Func
	var_146_bool = var_84_bool; // 0x4c6 Push
	if(var_146_bool == 0) goto Label_1226; // 0x4c7 JumpB
	var_76_int = -2; // 0x4c8 MovI
	return 8; // 0x4c9 Return
	
Label_1226:
	DoDialog(var_83_object); // 0x4ca Func
	var_147_bool = 0; var_148_object = Obj(); // 0x4cc PushV
	var_149_object = Obj(); // 0x4cd PushV
	func_7307(var_149_object); // 0x4ce NEW_2
	var_148_object = var_149_object; // 0x4cf Mov
	func_7116(var_147_bool, var_148_object); // 0x4d1 NEW_2
	var_242_object = Obj(); var_243_object = Obj(); // 0x4d3 PushV
	var_242_object = var_77_object; // 0x4d4 Mov
	var_243_object = var_83_object; // 0x4d5 Mov
	TaskCall(7); // 0x4d6 TaskCall
	func_1262(var_244_object, var_245_object, var_246_string, var_247_bool, var_242_object, var_243_object); // 0x4d7 NEW_2
	TaskReturn(); // 0x4d8 TaskReturn
	IsDialogEnd(var_86_bool); // 0x4da ObjFunc
	
Label_1244:
	var_298_bool = var_86_bool == 0; // 0x4dc Not
	if(var_298_bool == 0) goto Label_1251; // 0x4dd JumpB
	sync(); // 0x4de Func
	IsDialogEnd(var_86_bool); // 0x4e0 ObjFunc
	goto Label_1244; // 0x4e2 Jump
	
Label_1251:
	var_299_object = Obj(); // 0x4e3 PushV
	var_299_object = var_77_object; // 0x4e4 Mov
	func_7099(); // 0x4e5 NEW_2
	StopDialog(var_83_object); // 0x4e7 Func
	GetReturnValue(var_85_int); // 0x4e9 ObjFunc
	var_76_int = var_85_int; // 0x4eb Mov
	return 8; // 0x4ec Return
}


func_7328(var_327_string, var_328_bool)
{
	var_329_object = Obj(); var_330_object = Obj(); // 0x1ca0 PushV
	FindActor(var_330_object, var_327_string); // 0x1ca1 Func
	var_331_bool = var_330_object == 0; // 0x1ca3 Not
	if(var_331_bool == 0) goto Label_7340; // 0x1ca4 JumpB
	var_332_string = "Door "; // 0x1ca5 PushS
	var_333_int = var_332_string + var_327_string; // 0x1ca6 Add
	var_334_string = " not found"; // 0x1ca7 PushS
	var_335_int = var_333_int + var_334_string; // 0x1ca8 Add
	Trace(var_335_int); // 0x1ca9 Func
	goto Label_7343; // 0x1cab Jump
	
Label_7343:
	return 2; // 0x1caf Return
	
Label_7340:
	var_336_string = "locked"; // 0x1cac PushS
	SetProperty(var_336_string, var_328_bool); // 0x1cad ObjFunc
}


func_8357(var_810_bool, var_811_object)
{
	var_812_bool = 0; // 0x20a6 PushV
	var_812_bool = 0; // 0x20a7 MovB
	var_813_bool = 0; var_814_object = Obj(); var_815_string = ""; // 0x20a8 PushV
	var_814_object = var_811_object; // 0x20a9 Mov
	var_815_string = "d4q01_sobor_key"; // 0x20aa MovS
	func_7345(var_814_object, var_815_string); // 0x20ab NEW_2
	if(var_813_bool == 0) goto Label_8373; // 0x20ad JumpB
	var_816_bool = 0; var_817_object = Obj(); var_818_string = ""; // 0x20ae PushV
	var_817_object = var_811_object; // 0x20af Mov
	var_818_string = "d4q01_theater_key"; // 0x20b0 MovS
	func_7345(var_817_object, var_818_string); // 0x20b1 NEW_2
	if(var_816_bool == 0) goto Label_8373; // 0x20b3 JumpB
	var_812_bool = 1; // 0x20b4 MovB
	
Label_8373:
	if(var_812_bool == 0) goto Label_8383; // 0x20b5 JumpB
	var_819_int = 0; var_820_string = ""; // 0x20b6 PushV
	var_820_string = "d4q01"; // 0x20b7 MovS
	func_7323(var_819_int, var_820_string); // 0x20b8 NEW_2
	var_821_int = 4; // 0x20ba PushI
	var_822_bool = var_819_int == var_821_int; // 0x20bb Eq
	if(var_822_bool == 0) goto Label_8383; // 0x20bc JumpB
	var_810_bool = 1; // 0x20bd MovB
	return 0; // 0x20be Return
	
Label_8383:
	var_810_bool = 0; // 0x20bf MovB
	return 0; // 0x20c0 Return
}


func_7852()
{
	var_132_string = "ood6BigVlad1"; // 0x1ead PushS
	var_133_int = 1; // 0x1eae PushI
	SetVariable(var_132_string, var_133_int); // 0x1eaf Func
	return 0; // 0x1eb1 Return
}


func_7345(var_790_bool, var_792_string)
{
	var_793_int = 0; var_794_bool = 0; var_795_int = 0; var_796_bool = 0; // 0x1cb1 PushV
	GetInvItemByName(var_795_int, var_792_string); // 0x1cb2 Func
	HasItem(var_795_int, var_796_bool); // 0x1cb4 ObjFunc
	var_790_bool = var_796_bool; // 0x1cb6 Mov
	return 4; // 0x1cb7 Return
}


func_7858()
{
	var_63_string = "ood6BigVlad2"; // 0x1eb3 PushS
	var_64_int = 1; // 0x1eb4 PushI
	SetVariable(var_63_string, var_64_int); // 0x1eb5 Func
	return 0; // 0x1eb7 Return
}


func_8886(var_138_int)
{
	var_139_int = 0; var_140_int = 0; // 0x22b6 PushV
	var_141_string = "branch"; // 0x22b7 PushS
	GetVariable(var_141_string, var_140_int); // 0x22b8 Func
	var_142_int = 0; // 0x22ba PushI
	var_143_bool = var_140_int == var_142_int; // 0x22bb Eq
	if(var_143_bool == 0) goto Label_8896; // 0x22bc JumpB
	var_138_int = 1; // 0x22bd MovI
	return 2; // 0x22be Return
	
Label_8896:
	var_144_int = 1; // 0x22c0 PushI
	var_145_bool = var_140_int == var_144_int; // 0x22c1 Eq
	if(var_145_bool == 0) goto Label_8901; // 0x22c2 JumpB
	var_138_int = 2; // 0x22c3 MovI
	return 2; // 0x22c4 Return
	
Label_8901:
	var_138_int = 3; // 0x22c5 MovI
	return 2; // 0x22c6 Return
}


func_6839(var_0_object, var_1_object, var_2_object, var_3_string, var_1248_object, var_1249_object)
{
	var_0_object = var_1249_object; // 0x1ab8 TMov
	var_1_object = var_1248_object; // 0x1ab9 TMov
	var_3_string = 0; // 0x1aba TMovB
	var_1254_int = 1; // 0x1abb PushI
	if(var_1254_int == 0) goto Label_6867; // 0x1abc JumpB
	var_1255_string = ""; // 0x1abd PushV
	var_1255_string = "Neutral"; // 0x1abe MovS
	func_6897(var_1249_object, var_1255_string); // 0x1abf NEW_2
	var_1263_int = 540542; // 0x1ac1 PushI
	SetMessage(var_1263_int); // 0x1ac2 TObjFunc
	ClearReplies(); // 0x1ac4 TObjFunc
	var_1264_int = 540543; // 0x1ac6 PushI
	var_1265_int = -1; // 0x1ac7 PushI
	var_1266_int = 42552; // 0x1ac8 PushI
	AddReply(var_1264_int, var_1265_int, var_1266_int); // 0x1ac9 TObjFunc
	var_1267_int = 540796; // 0x1acb PushI
	var_1268_int = -1; // 0x1acc PushI
	var_1269_int = 42845; // 0x1acd PushI
	AddReply(var_1267_int, var_1268_int, var_1269_int); // 0x1ace TObjFunc
	goto Label_6867; // 0x1ad0 Jump
	
Label_6867:
	var_1270_bool = 0; // 0x1ad3 PushV
	func_7411(var_1270_bool); // 0x1ad4 NEW_2
	if(var_1270_bool == 0) goto Label_6882; // 0x1ad6 JumpB
	
Label_6871:
	lshWaitForAnimEnd(); // 0x1ad7 Func
	var_1271_string = var_3_string; // 0x1ad9 PushT
	if(var_1271_string == 0) goto Label_6876; // 0x1ada JumpB
	goto Label_6881; // 0x1adb Jump
	
Label_6881:
	goto Label_6896; // 0x1ae1 Jump
	
Label_6896:
	return 0; // 0x1af0 Return
	
Label_6876:
	var_1272_string = ""; // 0x1adc PushV
	var_1272_string = var_2_object; // 0x1add MovT
	func_7254(var_1272_string); // 0x1ade NEW_2
	goto Label_6871; // 0x1ae0 Jump
	
Label_6882:
	var_1273_string = "all"; // 0x1ae2 PushS
	var_1274_string = "idle"; // 0x1ae3 PushS
	PlayAnimation(var_1273_string, var_1274_string); // 0x1ae4 Func
	
Label_6886:
	WaitForAnimEnd(); // 0x1ae6 Func
	var_1275_string = var_3_string; // 0x1ae8 PushT
	if(var_1275_string == 0) goto Label_6891; // 0x1ae9 JumpB
	goto Label_6896; // 0x1aea Jump
	
Label_6891:
	var_1276_string = "all"; // 0x1aeb PushS
	var_1277_string = "idle"; // 0x1aec PushS
	PlayAnimation(var_1276_string, var_1277_string); // 0x1aed Func
	goto Label_6886; // 0x1aef Jump
}


func_7864()
{
	var_251_string = "KnowBigVlad"; // 0x1eb9 PushS
	var_252_int = 1; // 0x1eba PushI
	SetVariable(var_251_string, var_252_int); // 0x1ebb Func
	return 0; // 0x1ebd Return
}


func_7352(var_111_bool, var_112_string, var_113_string)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x1cb8 PushV
	FindActor(var_115_object, var_112_string); // 0x1cb9 Func
	var_116_bool = var_115_object == 0; // 0x1cbb NullEq
	if(var_116_bool == 0) goto Label_7359; // 0x1cbc JumpB
	var_111_bool = 0; // 0x1cbd MovB
	return 2; // 0x1cbe Return
	
Label_7359:
	Trigger(var_115_object, var_113_string); // 0x1cbf Func
	var_111_bool = 1; // 0x1cc1 MovB
	return 2; // 0x1cc2 Return
}


func_7870()
{
	var_75_string = "d8q01BigVladIsVictim"; // 0x1ebf PushS
	var_76_int = 1; // 0x1ec0 PushI
	SetVariable(var_75_string, var_76_int); // 0x1ec1 Func
	return 0; // 0x1ec3 Return
}


func_8385(var_823_bool)
{
	var_825_int = 0; var_826_string = ""; // 0x20c2 PushV
	var_826_string = "ood4BigVlad3"; // 0x20c3 MovS
	func_7323(var_825_int, var_826_string); // 0x20c4 NEW_2
	var_827_int = 0; // 0x20c6 PushI
	var_828_bool = var_825_int == var_827_int; // 0x20c7 Eq
	if(var_828_bool == 0) goto Label_8395; // 0x20c8 JumpB
	var_823_bool = 1; // 0x20c9 MovB
	return 0; // 0x20ca Return
	
Label_8395:
	var_823_bool = 0; // 0x20cb MovB
	return 0; // 0x20cc Return
}


func_7876()
{
	var_63_string = "ood8BigVlad1"; // 0x1ec5 PushS
	var_64_int = 1; // 0x1ec6 PushI
	SetVariable(var_63_string, var_64_int); // 0x1ec7 Func
	return 0; // 0x1ec9 Return
}


func_7364(var_78_float)
{
	var_79_float = 0; var_80_float = 0; // 0x1cc4 PushV
	GetGameTime(var_80_float); // 0x1cc5 Func
	var_78_float = var_80_float; // 0x1cc7 Mov
	return 2; // 0x1cc8 Return
}


func_1735(var_2_object, var_959_string)
{
	var_960_bool = 0; // 0x6c8 PushV
	func_7411(var_960_bool); // 0x6c9 NEW_2
	var_961_bool = var_960_bool == 0; // 0x6cb Not
	if(var_961_bool == 0) goto Label_1742; // 0x6cc JumpB
	return 0; // 0x6cd Return
	
Label_1742:
	var_962_bool = var_959_string == var_2_object; // 0x6ce Eq
	if(var_962_bool == 0) goto Label_1745; // 0x6cf JumpB
	return 0; // 0x6d0 Return
	
Label_1745:
	var_963_string = ""; var_964_bool = 0; // 0x6d1 PushV
	var_963_string = var_959_string; // 0x6d2 Mov
	var_965_string = ""; // 0x6d3 PushS
	var_966_bool = var_959_string == var_965_string; // 0x6d4 Eq
	if(var_966_bool == 0) goto Label_1752; // 0x6d5 JumpB
	var_964_bool = 0; // 0x6d6 MovB
	goto Label_1753; // 0x6d7 Jump
	
Label_1753:
	func_7270(var_963_string, var_964_bool); // 0x6d9 NEW_2
	var_2_object = var_959_string; // 0x6db TMov
	return 0; // 0x6dc Return
	
Label_1752:
	var_964_bool = 1; // 0x6d8 MovB
}


func_8903(var_73_object)
{
	var_74_bool = GlobalVars[1]; // 0x22c8 PushGE
	var_75_bool = var_74_bool == 0; // 0x22c9 Not
	if(var_75_bool == 0) goto Label_8916; // 0x22ca JumpB
	var_76_int = 0; var_77_object = Obj(); // 0x22cb PushV
	var_77_object = var_73_object; // 0x22cc Mov
	TaskCall(6); // 0x22cd TaskCall
	func_1181(var_78_object, var_76_int, var_77_object); // 0x22ce NEW_2
	TaskReturn(); // 0x22cf TaskReturn
	var_306_bool = GlobalVars[1]; // 0x22d1 PushGE
	var_306_bool = 1; // 0x22d2 MovB
	GlobalVars[1] = var_306_bool; // 0x22d3 PopGE
	
Label_8916:
	var_307_bool = 0; var_308_int = 0; // 0x22d4 PushV
	var_308_int = 4; // 0x22d5 MovI
	func_7384(var_307_bool, var_308_int); // 0x22d6 NEW_2
	if(var_307_bool == 0) goto Label_8928; // 0x22d8 JumpB
	var_322_int = 0; var_323_object = Obj(); // 0x22d9 PushV
	var_323_object = var_73_object; // 0x22da Mov
	TaskCall(4); // 0x22db TaskCall
	func_978(var_324_object, var_322_int, var_323_object); // 0x22dc NEW_2
	TaskReturn(); // 0x22dd TaskReturn
	return 0; // 0x22df Return
	
Label_8928:
	var_378_bool = 0; var_379_int = 0; // 0x22e0 PushV
	var_379_int = 1; // 0x22e1 MovI
	func_7378(var_378_bool, var_379_int); // 0x22e2 NEW_2
	if(var_378_bool == 0) goto Label_8940; // 0x22e4 JumpB
	var_381_int = 0; var_382_object = Obj(); // 0x22e5 PushV
	var_382_object = var_73_object; // 0x22e6 Mov
	TaskCall(0); // 0x22e7 TaskCall
	func_0(var_383_object, var_381_int, var_382_object); // 0x22e8 NEW_2
	TaskReturn(); // 0x22e9 TaskReturn
	return 0; // 0x22eb Return
	
Label_8940:
	var_482_bool = 0; var_483_int = 0; // 0x22ec PushV
	var_483_int = 2; // 0x22ed MovI
	func_7378(var_482_bool, var_483_int); // 0x22ee NEW_2
	if(var_482_bool == 0) goto Label_8952; // 0x22f0 JumpB
	var_484_int = 0; var_485_object = Obj(); // 0x22f1 PushV
	var_485_object = var_73_object; // 0x22f2 Mov
	TaskCall(10); // 0x22f3 TaskCall
	func_2298(var_486_object, var_484_int, var_485_object); // 0x22f4 NEW_2
	TaskReturn(); // 0x22f5 TaskReturn
	return 0; // 0x22f7 Return
	
Label_8952:
	var_606_bool = 0; var_607_int = 0; // 0x22f8 PushV
	var_607_int = 3; // 0x22f9 MovI
	func_7378(var_606_bool, var_607_int); // 0x22fa NEW_2
	if(var_606_bool == 0) goto Label_8964; // 0x22fc JumpB
	var_608_int = 0; var_609_object = Obj(); // 0x22fd PushV
	var_609_object = var_73_object; // 0x22fe Mov
	TaskCall(12); // 0x22ff TaskCall
	func_3121(var_610_object, var_608_int, var_609_object); // 0x2300 NEW_2
	TaskReturn(); // 0x2301 TaskReturn
	return 0; // 0x2303 Return
	
Label_8964:
	var_699_bool = 0; var_700_int = 0; // 0x2304 PushV
	var_700_int = 4; // 0x2305 MovI
	func_7378(var_699_bool, var_700_int); // 0x2306 NEW_2
	if(var_699_bool == 0) goto Label_8976; // 0x2308 JumpB
	var_701_int = 0; var_702_object = Obj(); // 0x2309 PushV
	var_702_object = var_73_object; // 0x230a Mov
	TaskCall(14); // 0x230b TaskCall
	func_4239(var_703_object, var_701_int, var_702_object); // 0x230c NEW_2
	TaskReturn(); // 0x230d TaskReturn
	return 0; // 0x230f Return
	
Label_8976:
	var_840_bool = 0; var_841_int = 0; // 0x2310 PushV
	var_841_int = 5; // 0x2311 MovI
	func_7378(var_840_bool, var_841_int); // 0x2312 NEW_2
	if(var_840_bool == 0) goto Label_8988; // 0x2314 JumpB
	var_842_int = 0; var_843_object = Obj(); // 0x2315 PushV
	var_843_object = var_73_object; // 0x2316 Mov
	TaskCall(16); // 0x2317 TaskCall
	func_5627(var_844_object, var_842_int, var_843_object); // 0x2318 NEW_2
	TaskReturn(); // 0x2319 TaskReturn
	return 0; // 0x231b Return
	
Label_8988:
	var_904_bool = 0; var_905_int = 0; // 0x231c PushV
	var_905_int = 6; // 0x231d MovI
	func_7378(var_904_bool, var_905_int); // 0x231e NEW_2
	if(var_904_bool == 0) goto Label_9000; // 0x2320 JumpB
	var_906_int = 0; var_907_object = Obj(); // 0x2321 PushV
	var_907_object = var_73_object; // 0x2322 Mov
	TaskCall(8); // 0x2323 TaskCall
	func_1478(var_908_object, var_906_int, var_907_object); // 0x2324 NEW_2
	TaskReturn(); // 0x2325 TaskReturn
	return 0; // 0x2327 Return
	
Label_9000:
	var_1048_bool = 0; var_1049_int = 0; // 0x2328 PushV
	var_1049_int = 8; // 0x2329 MovI
	func_7378(var_1048_bool, var_1049_int); // 0x232a NEW_2
	if(var_1048_bool == 0) goto Label_9012; // 0x232c JumpB
	var_1050_int = 0; var_1051_object = Obj(); // 0x232d PushV
	var_1051_object = var_73_object; // 0x232e Mov
	TaskCall(18); // 0x232f TaskCall
	func_6184(var_1052_object, var_1050_int, var_1051_object); // 0x2330 NEW_2
	TaskReturn(); // 0x2331 TaskReturn
	return 0; // 0x2333 Return
	
Label_9012:
	var_1163_bool = 0; var_1164_int = 0; // 0x2334 PushV
	var_1164_int = 12; // 0x2335 MovI
	func_7378(var_1163_bool, var_1164_int); // 0x2336 NEW_2
	if(var_1163_bool == 0) goto Label_9024; // 0x2338 JumpB
	var_1165_int = 0; var_1166_object = Obj(); // 0x2339 PushV
	var_1166_object = var_73_object; // 0x233a Mov
	TaskCall(2); // 0x233b TaskCall
	func_719(var_1167_object, var_1165_int, var_1166_object); // 0x233c NEW_2
	TaskReturn(); // 0x233d TaskReturn
	return 0; // 0x233f Return
	
Label_9024:
	var_1224_int = 0; var_1225_object = Obj(); // 0x2340 PushV
	var_1225_object = var_73_object; // 0x2341 Mov
	TaskCall(20); // 0x2342 TaskCall
	func_6758(var_1226_object, var_1224_int, var_1225_object); // 0x2343 NEW_2
	TaskReturn(); // 0x2344 TaskReturn
	return 0; // 0x2346 Return
}


func_7369(var_202_int)
{
	var_203_float = 0; var_204_float = 0; // 0x1cc9 PushV
	GetGameTime(var_204_float); // 0x1cca Func
	var_205_int = 1; // 0x1ccc PushI
	var_206_int = 0; // 0x1ccd PushV
	var_207_int = 24; // 0x1cce PushI
	var_206_int = var_204_float / var_204_float; // 0x1ccf Div2
	var_202_int = var_205_int + var_206_int; // 0x1cd0 Add2
	return 2; // 0x1cd1 Return
}


func_7882()
{
	var_69_string = "ood8BigVlad2"; // 0x1ecb PushS
	var_70_int = 1; // 0x1ecc PushI
	SetVariable(var_69_string, var_70_int); // 0x1ecd Func
	return 0; // 0x1ecf Return
}


func_8397(var_882_bool)
{
	var_884_int = 0; var_885_string = ""; // 0x20ce PushV
	var_885_string = "d5q01"; // 0x20cf MovS
	func_7323(var_884_int, var_885_string); // 0x20d0 NEW_2
	var_886_int = 1; // 0x20d2 PushI
	var_887_bool = var_884_int == var_886_int; // 0x20d3 Eq
	if(var_887_bool == 0) goto Label_8407; // 0x20d4 JumpB
	var_882_bool = 1; // 0x20d5 MovB
	return 0; // 0x20d6 Return
	
Label_8407:
	var_882_bool = 0; // 0x20d7 MovB
	return 0; // 0x20d8 Return
}


func_207(var_2_object, var_421_string)
{
	var_422_bool = 0; // 0xd0 PushV
	func_7411(var_422_bool); // 0xd1 NEW_2
	var_423_bool = var_422_bool == 0; // 0xd3 Not
	if(var_423_bool == 0) goto Label_214; // 0xd4 JumpB
	return 0; // 0xd5 Return
	
Label_214:
	var_424_bool = var_421_string == var_2_object; // 0xd6 Eq
	if(var_424_bool == 0) goto Label_217; // 0xd7 JumpB
	return 0; // 0xd8 Return
	
Label_217:
	var_425_string = ""; var_426_bool = 0; // 0xd9 PushV
	var_425_string = var_421_string; // 0xda Mov
	var_427_string = ""; // 0xdb PushS
	var_428_bool = var_421_string == var_427_string; // 0xdc Eq
	if(var_428_bool == 0) goto Label_224; // 0xdd JumpB
	var_426_bool = 0; // 0xde MovB
	goto Label_225; // 0xdf Jump
	
Label_225:
	func_7270(var_425_string, var_426_bool); // 0xe1 NEW_2
	var_2_object = var_421_string; // 0xe3 TMov
	return 0; // 0xe4 Return
	
Label_224:
	var_426_bool = 1; // 0xe0 MovB
}


func_7888()
{
	var_81_string = "ood8BigVlad3"; // 0x1ed1 PushS
	var_82_int = 1; // 0x1ed2 PushI
	SetVariable(var_81_string, var_82_int); // 0x1ed3 Func
	return 0; // 0x1ed5 Return
}


func_719(var_0_object, var_1165_int, var_1166_object)
{
	var_1168_object = Obj(); var_1169_bool = 0; var_1170_int = 0; var_1171_bool = 0; var_1172_object = Obj(); var_1173_bool = 0; var_1174_int = 0; var_1175_bool = 0; // 0x2cf PushV
	var_0_object = var_1166_object; // 0x2d0 TMov
	var_1176_bool = 0; var_1177_object = Obj(); var_1178_float = 0; // 0x2d1 PushV
	var_1177_object = var_1166_object; // 0x2d2 Mov
	var_1178_float = 70.0; // 0x2d3 MovF
	func_7031(var_1177_object, var_1178_float); // 0x2d4 NEW_2
	var_1179_bool = var_1176_bool == 0; // 0x2d6 Not
	if(var_1179_bool == 0) goto Label_730; // 0x2d7 JumpB
	var_1165_int = -2; // 0x2d8 MovI
	return 8; // 0x2d9 Return
	
Label_730:
	CreateDialog(var_1172_object); // 0x2da Func
	var_1180_int = 0; // 0x2dc PushV
	func_7405(var_1180_int); // 0x2dd NEW_2
	SetNPCName(var_1180_int); // 0x2df ObjFunc
	var_1181_int = 0; // 0x2e1 PushV
	func_7403(var_1181_int); // 0x2e2 NEW_2
	SetNPCDescription(var_1181_int); // 0x2e4 ObjFunc
	var_1182_string = ""; // 0x2e6 PushV
	func_7407(var_1182_string); // 0x2e7 NEW_2
	SetPhoto(var_1182_string); // 0x2e9 ObjFunc
	var_1183_string = ""; // 0x2eb PushV
	func_7409(var_1183_string); // 0x2ec NEW_2
	SetPhoto2(var_1183_string); // 0x2ee ObjFunc
	var_1184_int = 0; // 0x2f0 PushV
	func_8886(var_1184_int); // 0x2f1 NEW_2
	SetPlayerName(var_1184_int); // 0x2f3 ObjFunc
	var_1174_int = -1; // 0x2f5 MovI
	IsOverrideActive(var_1173_bool); // 0x2f6 Func
	var_1185_bool = var_1173_bool; // 0x2f8 Push
	if(var_1185_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_1165_int = -2; // 0x2fa MovI
	return 8; // 0x2fb Return
	
Label_764:
	DoDialog(var_1172_object); // 0x2fc Func
	var_1186_bool = 0; var_1187_object = Obj(); // 0x2fe PushV
	var_1188_object = Obj(); // 0x2ff PushV
	func_7307(var_1188_object); // 0x300 NEW_2
	var_1187_object = var_1188_object; // 0x301 Mov
	func_7116(var_1186_bool, var_1187_object); // 0x303 NEW_2
	var_1189_object = Obj(); var_1190_object = Obj(); // 0x305 PushV
	var_1189_object = var_1166_object; // 0x306 Mov
	var_1190_object = var_1172_object; // 0x307 Mov
	TaskCall(3); // 0x308 TaskCall
	func_800(var_1191_object, var_1192_object, var_1193_string, var_1194_bool, var_1189_object, var_1190_object); // 0x309 NEW_2
	TaskReturn(); // 0x30a TaskReturn
	IsDialogEnd(var_1175_bool); // 0x30c ObjFunc
	
Label_782:
	var_1222_bool = var_1175_bool == 0; // 0x30e Not
	if(var_1222_bool == 0) goto Label_789; // 0x30f JumpB
	sync(); // 0x310 Func
	IsDialogEnd(var_1175_bool); // 0x312 ObjFunc
	goto Label_782; // 0x314 Jump
	
Label_789:
	var_1223_object = Obj(); // 0x315 PushV
	var_1223_object = var_1166_object; // 0x316 Mov
	func_7099(); // 0x317 NEW_2
	StopDialog(var_1172_object); // 0x319 Func
	GetReturnValue(var_1174_int); // 0x31b ObjFunc
	var_1165_int = var_1174_int; // 0x31d Mov
	return 8; // 0x31e Return
}


func_7378(var_378_bool, var_379_int)
{
	var_380_int = 0; // 0x1cd3 PushV
	func_7369(var_380_int); // 0x1cd4 NEW_2
	var_378_bool = var_380_int == var_379_int; // 0x1cd6 Eq2
	return 0; // 0x1cd7 Return
}


func_3284(var_2_object, var_639_string)
{
	var_640_bool = 0; // 0xcd5 PushV
	func_7411(var_640_bool); // 0xcd6 NEW_2
	var_641_bool = var_640_bool == 0; // 0xcd8 Not
	if(var_641_bool == 0) goto Label_3291; // 0xcd9 JumpB
	return 0; // 0xcda Return
	
Label_3291:
	var_642_bool = var_639_string == var_2_object; // 0xcdb Eq
	if(var_642_bool == 0) goto Label_3294; // 0xcdc JumpB
	return 0; // 0xcdd Return
	
Label_3294:
	var_643_string = ""; var_644_bool = 0; // 0xcde PushV
	var_643_string = var_639_string; // 0xcdf Mov
	var_645_string = ""; // 0xce0 PushS
	var_646_bool = var_639_string == var_645_string; // 0xce1 Eq
	if(var_646_bool == 0) goto Label_3301; // 0xce2 JumpB
	var_644_bool = 0; // 0xce3 MovB
	goto Label_3302; // 0xce4 Jump
	
Label_3302:
	func_7270(var_643_string, var_644_bool); // 0xce6 NEW_2
	var_2_object = var_639_string; // 0xce8 TMov
	return 0; // 0xce9 Return
	
Label_3301:
	var_644_bool = 1; // 0xce5 MovB
}


func_7894()
{
	var_953_string = "ood6BigVlad3"; // 0x1ed7 PushS
	var_954_int = 1; // 0x1ed8 PushI
	SetVariable(var_953_string, var_954_int); // 0x1ed9 Func
	return 0; // 0x1edb Return
}


func_7384(var_307_bool, var_308_int)
{
	var_309_float = 0; var_310_int = 0; var_311_int = 0; var_312_float = 0; var_313_int = 0; var_314_int = 0; // 0x1cd8 PushV
	GetGameTime(var_312_float); // 0x1cd9 Func
	var_315_int = 1; // 0x1cdb PushI
	var_316_int = 0; // 0x1cdc PushV
	var_317_int = 24; // 0x1cdd PushI
	var_316_int = var_312_float / var_312_float; // 0x1cde Div2
	var_313_int = var_315_int + var_316_int; // 0x1cdf Add2
	var_318_bool = var_313_int != var_308_int; // 0x1ce0 Neq
	if(var_318_bool == 0) goto Label_7396; // 0x1ce1 JumpB
	var_307_bool = 0; // 0x1ce2 MovB
	return 6; // 0x1ce3 Return
	
Label_7396:
	var_319_int = 0; // 0x1ce4 PushV
	var_319_int = var_312_float; // 0x1ce5 Mov
	var_320_int = 24; // 0x1ce6 PushI
	var_314_int = var_319_int % var_320_int; // 0x1ce7 Mod2
	var_321_int = 7; // 0x1ce8 PushI
	var_307_bool = var_314_int < var_321_int; // 0x1ce9 LT2
	return 6; // 0x1cea Return
}


func_8409(var_1033_bool)
{
	var_1035_int = 0; var_1036_string = ""; // 0x20da PushV
	var_1036_string = "d6q02"; // 0x20db MovS
	func_7323(var_1035_int, var_1036_string); // 0x20dc NEW_2
	var_1037_int = 0; // 0x20de PushI
	var_1038_bool = var_1035_int == var_1037_int; // 0x20df Eq
	if(var_1038_bool == 0) goto Label_8419; // 0x20e0 JumpB
	var_1033_bool = 1; // 0x20e1 MovB
	return 0; // 0x20e2 Return
	
Label_8419:
	var_1033_bool = 0; // 0x20e3 MovB
	return 0; // 0x20e4 Return
}


func_7900()
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x1edc PushV
	var_71_object = Obj(); // 0x1edd PushV
	func_8836(var_71_object); // 0x1ede NEW_2
	var_70_object = var_71_object; // 0x1edf Mov
	var_78_string = "d6q01BigVladGotoAnna"; // 0x1ee1 PushS
	var_79_string = "pt_map_anna"; // 0x1ee2 PushS
	var_80_int = 1; // 0x1ee3 PushI
	var_81_int = 515390; // 0x1ee4 PushI
	var_82_float = 0; // 0x1ee5 PushV
	func_7364(var_82_float); // 0x1ee6 NEW_2
	AddMark(var_78_string, var_79_string, var_80_int, var_81_int, var_82_float); // 0x1ee8 ObjFunc
	var_85_string = "d6q01BigVladGotoOspina"; // 0x1eea PushS
	var_86_string = "pt_map_ospina"; // 0x1eeb PushS
	var_87_int = 1; // 0x1eec PushI
	var_88_int = 515389; // 0x1eed PushI
	var_89_float = 0; // 0x1eee PushV
	func_7364(var_89_float); // 0x1eef NEW_2
	AddMark(var_85_string, var_86_string, var_87_int, var_88_int, var_89_float); // 0x1ef1 ObjFunc
	var_90_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x1ef3 PushS
	var_91_string = "pt_map_bigvlad"; // 0x1ef4 PushS
	var_92_int = 1; // 0x1ef5 PushI
	var_93_int = 515391; // 0x1ef6 PushI
	var_94_float = 0; // 0x1ef7 PushV
	func_7364(var_94_float); // 0x1ef8 NEW_2
	AddMark(var_90_string, var_91_string, var_92_int, var_93_int, var_94_float); // 0x1efa ObjFunc
	func_8769(); // 0x1efd NEW_2
	return 2; // 0x1eff Return
}


func_4320(var_0_object, var_1_object, var_2_object, var_3_string, var_725_object, var_726_object)
{
	var_0_object = var_726_object; // 0x10e1 TMov
	var_1_object = var_725_object; // 0x10e2 TMov
	var_3_string = 0; // 0x10e3 TMovB
	var_731_int = 1; // 0x10e4 PushI
	if(var_731_int == 0) goto Label_4430; // 0x10e5 JumpB
	var_732_bool = 0; // 0x10e6 PushV
	var_732_bool = 0; // 0x10e7 MovB
	var_733_bool = 0; var_734_object = Obj(); // 0x10e8 PushV
	var_734_object = var_1_object; // 0x10e9 MovT
	func_8279(var_734_object); // 0x10ea NEW_2
	if(var_733_bool == 0) goto Label_4339; // 0x10ec JumpB
	var_739_bool = 0; var_740_object = Obj(); // 0x10ed PushV
	var_740_object = var_1_object; // 0x10ee MovT
	func_8291(var_740_object); // 0x10ef NEW_2
	if(var_739_bool == 0) goto Label_4339; // 0x10f1 JumpB
	var_732_bool = 1; // 0x10f2 MovB
	
Label_4339:
	if(var_732_bool == 0) goto Label_4360; // 0x10f3 JumpB
	var_745_object = Obj(); var_746_object = Obj(); // 0x10f4 PushV
	var_745_object = var_1_object; // 0x10f5 MovT
	var_746_object = var_0_object; // 0x10f6 MovT
	func_8065(); // 0x10f7 NEW_2
	var_749_string = ""; // 0x10f9 PushV
	var_749_string = "Neutral"; // 0x10fa MovS
	func_4460(var_726_object, var_749_string); // 0x10fb NEW_2
	var_757_int = 510811; // 0x10fd PushI
	SetMessage(var_757_int); // 0x10fe TObjFunc
	ClearReplies(); // 0x1100 TObjFunc
	var_758_int = 510812; // 0x1102 PushI
	var_759_int = 11147; // 0x1103 PushI
	var_760_int = 11952; // 0x1104 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x1105 TObjFunc
	goto Label_4430; // 0x1107 Jump
	
Label_4430:
	var_761_bool = 0; // 0x114e PushV
	func_7411(var_761_bool); // 0x114f NEW_2
	if(var_761_bool == 0) goto Label_4445; // 0x1151 JumpB
	
Label_4434:
	lshWaitForAnimEnd(); // 0x1152 Func
	var_762_string = var_3_string; // 0x1154 PushT
	if(var_762_string == 0) goto Label_4439; // 0x1155 JumpB
	goto Label_4444; // 0x1156 Jump
	
Label_4444:
	goto Label_4459; // 0x115c Jump
	
Label_4459:
	return 0; // 0x116b Return
	
Label_4439:
	var_763_string = ""; // 0x1157 PushV
	var_763_string = var_2_object; // 0x1158 MovT
	func_7254(var_763_string); // 0x1159 NEW_2
	goto Label_4434; // 0x115b Jump
	
Label_4445:
	var_764_string = "all"; // 0x115d PushS
	var_765_string = "idle"; // 0x115e PushS
	PlayAnimation(var_764_string, var_765_string); // 0x115f Func
	
Label_4449:
	WaitForAnimEnd(); // 0x1161 Func
	var_766_string = var_3_string; // 0x1163 PushT
	if(var_766_string == 0) goto Label_4454; // 0x1164 JumpB
	goto Label_4459; // 0x1165 Jump
	
Label_4454:
	var_767_string = "all"; // 0x1166 PushS
	var_768_string = "idle"; // 0x1167 PushS
	PlayAnimation(var_767_string, var_768_string); // 0x1168 Func
	goto Label_4449; // 0x116a Jump
	
Label_4360:
	var_769_string = ""; // 0x1108 PushV
	var_769_string = "Neutral"; // 0x1109 MovS
	func_4460(var_726_object, var_769_string); // 0x110a NEW_2
	var_770_int = 510836; // 0x110c PushI
	SetMessage(var_770_int); // 0x110d TObjFunc
	ClearReplies(); // 0x110f TObjFunc
	var_771_bool = 0; // 0x1111 PushV
	var_771_bool = 0; // 0x1112 MovB
	var_772_bool = 0; var_773_object = Obj(); // 0x1113 PushV
	var_773_object = var_1_object; // 0x1114 MovT
	func_8303(var_773_object); // 0x1115 NEW_2
	if(var_772_bool == 0) goto Label_4382; // 0x1117 JumpB
	var_778_bool = 0; var_779_object = Obj(); // 0x1118 PushV
	var_779_object = var_1_object; // 0x1119 MovT
	func_8315(var_779_object); // 0x111a NEW_2
	if(var_778_bool == 0) goto Label_4382; // 0x111c JumpB
	var_771_bool = 1; // 0x111d MovB
	
Label_4382:
	if(var_771_bool == 0) goto Label_4388; // 0x111e JumpB
	var_784_int = 510839; // 0x111f PushI
	var_785_int = 11148; // 0x1120 PushI
	var_786_int = 11983; // 0x1121 PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0x1122 TObjFunc
	
Label_4388:
	var_787_bool = 0; var_788_object = Obj(); // 0x1124 PushV
	var_788_object = var_1_object; // 0x1125 MovT
	func_8327(var_787_bool, var_788_object); // 0x1126 NEW_2
	if(var_787_bool == 0) goto Label_4398; // 0x1128 JumpB
	var_806_int = 511508; // 0x1129 PushI
	var_807_int = 12709; // 0x112a PushI
	var_808_int = 12708; // 0x112b PushI
	AddReply(var_806_int, var_807_int, var_808_int); // 0x112c TObjFunc
	
Label_4398:
	var_809_bool = 0; // 0x112e PushV
	var_809_bool = 0; // 0x112f MovB
	var_810_bool = 0; var_811_object = Obj(); // 0x1130 PushV
	var_811_object = var_1_object; // 0x1131 MovT
	func_8357(var_810_bool, var_811_object); // 0x1132 NEW_2
	if(var_810_bool == 0) goto Label_4411; // 0x1134 JumpB
	var_823_bool = 0; var_824_object = Obj(); // 0x1135 PushV
	var_824_object = var_1_object; // 0x1136 MovT
	func_8385(var_824_object); // 0x1137 NEW_2
	if(var_823_bool == 0) goto Label_4411; // 0x1139 JumpB
	var_809_bool = 1; // 0x113a MovB
	
Label_4411:
	if(var_809_bool == 0) goto Label_4417; // 0x113b JumpB
	var_829_int = 510837; // 0x113c PushI
	var_830_int = 10553; // 0x113d PushI
	var_831_int = 11981; // 0x113e PushI
	AddReply(var_829_int, var_830_int, var_831_int); // 0x113f TObjFunc
	
Label_4417:
	var_832_int = 511480; // 0x1141 PushI
	var_833_int = -1; // 0x1142 PushI
	var_834_int = 12686; // 0x1143 PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0x1144 TObjFunc
	var_835_int = 533048; // 0x1146 PushI
	var_836_int = -1; // 0x1147 PushI
	var_837_int = 34560; // 0x1148 PushI
	AddReply(var_835_int, var_836_int, var_837_int); // 0x1149 TObjFunc
	goto Label_4430; // 0x114b Jump
}


func_8421(var_1012_bool)
{
	var_1014_int = 0; var_1015_string = ""; // 0x20e6 PushV
	var_1015_string = "d6q02"; // 0x20e7 MovS
	func_7323(var_1014_int, var_1015_string); // 0x20e8 NEW_2
	var_1016_int = 1000; // 0x20ea PushI
	var_1017_bool = var_1014_int == var_1016_int; // 0x20eb Eq
	if(var_1017_bool == 0) goto Label_8431; // 0x20ec JumpB
	var_1012_bool = 1; // 0x20ed MovB
	return 0; // 0x20ee Return
	
Label_8431:
	var_1012_bool = 0; // 0x20ef MovB
	return 0; // 0x20f0 Return
}


func_7403(var_135_int)
{
	var_135_int = 515531; // 0x1ceb MovI
	return 0; // 0x1cec Return
}


func_7405(var_134_int)
{
	var_134_int = 502857; // 0x1ced MovI
	return 0; // 0x1cee Return
}


func_1262(var_0_object, var_1_object, var_2_object, var_3_string, var_242_object, var_243_object)
{
	var_0_object = var_243_object; // 0x4ef TMov
	var_1_object = var_242_object; // 0x4f0 TMov
	var_3_string = 0; // 0x4f1 TMovB
	var_248_int = 1; // 0x4f2 PushI
	if(var_248_int == 0) goto Label_1300; // 0x4f3 JumpB
	var_249_object = Obj(); var_250_object = Obj(); // 0x4f4 PushV
	var_249_object = var_1_object; // 0x4f5 MovT
	var_250_object = var_0_object; // 0x4f6 MovT
	func_7864(); // 0x4f7 NEW_2
	var_253_string = ""; // 0x4f9 PushV
	var_253_string = "Neutral"; // 0x4fa MovS
	func_1330(var_243_object, var_253_string); // 0x4fb NEW_2
	var_270_int = 500401; // 0x4fd PushI
	SetMessage(var_270_int); // 0x4fe TObjFunc
	ClearReplies(); // 0x500 TObjFunc
	var_271_int = 500402; // 0x502 PushI
	var_272_int = 471; // 0x503 PushI
	var_273_int = 468; // 0x504 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x505 TObjFunc
	var_274_int = 500403; // 0x507 PushI
	var_275_int = 472; // 0x508 PushI
	var_276_int = 469; // 0x509 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x50a TObjFunc
	var_277_int = 500404; // 0x50c PushI
	var_278_int = -1; // 0x50d PushI
	var_279_int = 470; // 0x50e PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x50f TObjFunc
	goto Label_1300; // 0x511 Jump
	
Label_1300:
	var_280_bool = 0; // 0x514 PushV
	func_7411(var_280_bool); // 0x515 NEW_2
	if(var_280_bool == 0) goto Label_1315; // 0x517 JumpB
	
Label_1304:
	lshWaitForAnimEnd(); // 0x518 Func
	var_281_string = var_3_string; // 0x51a PushT
	if(var_281_string == 0) goto Label_1309; // 0x51b JumpB
	goto Label_1314; // 0x51c Jump
	
Label_1314:
	goto Label_1329; // 0x522 Jump
	
Label_1329:
	return 0; // 0x531 Return
	
Label_1309:
	var_282_string = ""; // 0x51d PushV
	var_282_string = var_2_object; // 0x51e MovT
	func_7254(var_282_string); // 0x51f NEW_2
	goto Label_1304; // 0x521 Jump
	
Label_1315:
	var_293_string = "all"; // 0x523 PushS
	var_294_string = "idle"; // 0x524 PushS
	PlayAnimation(var_293_string, var_294_string); // 0x525 Func
	
Label_1319:
	WaitForAnimEnd(); // 0x527 Func
	var_295_string = var_3_string; // 0x529 PushT
	if(var_295_string == 0) goto Label_1324; // 0x52a JumpB
	goto Label_1329; // 0x52b Jump
	
Label_1324:
	var_296_string = "all"; // 0x52c PushS
	var_297_string = "idle"; // 0x52d PushS
	PlayAnimation(var_296_string, var_297_string); // 0x52e Func
	goto Label_1319; // 0x530 Jump
}


func_7407(var_136_string)
{
	var_136_string = "ui/NPC_BigVlad.png"; // 0x1cef MovS
	return 0; // 0x1cf0 Return
}


func_7409(var_137_string)
{
	var_137_string = "ui/NPC_BigVlad_b.png"; // 0x1cf1 MovS
	return 0; // 0x1cf2 Return
}


func_8433(var_1019_bool)
{
	var_1021_int = 0; var_1022_string = ""; // 0x20f2 PushV
	var_1022_string = "d6q02"; // 0x20f3 MovS
	func_7323(var_1021_int, var_1022_string); // 0x20f4 NEW_2
	var_1023_int = -1; // 0x20f6 PushI
	var_1024_bool = var_1021_int == var_1023_int; // 0x20f7 Eq
	if(var_1024_bool == 0) goto Label_8443; // 0x20f8 JumpB
	var_1019_bool = 1; // 0x20f9 MovB
	return 0; // 0x20fa Return
	
Label_8443:
	var_1019_bool = 0; // 0x20fb MovB
	return 0; // 0x20fc Return
}


func_7411(var_129_bool)
{
	var_129_bool = 1; // 0x1cf3 MovB
	return 0; // 0x1cf4 Return
}


func_6897(var_2_object, var_1255_string)
{
	var_1256_bool = 0; // 0x1af2 PushV
	func_7411(var_1256_bool); // 0x1af3 NEW_2
	var_1257_bool = var_1256_bool == 0; // 0x1af5 Not
	if(var_1257_bool == 0) goto Label_6904; // 0x1af6 JumpB
	return 0; // 0x1af7 Return
	
Label_6904:
	var_1258_bool = var_1255_string == var_2_object; // 0x1af8 Eq
	if(var_1258_bool == 0) goto Label_6907; // 0x1af9 JumpB
	return 0; // 0x1afa Return
	
Label_6907:
	var_1259_string = ""; var_1260_bool = 0; // 0x1afb PushV
	var_1259_string = var_1255_string; // 0x1afc Mov
	var_1261_string = ""; // 0x1afd PushS
	var_1262_bool = var_1255_string == var_1261_string; // 0x1afe Eq
	if(var_1262_bool == 0) goto Label_6914; // 0x1aff JumpB
	var_1260_bool = 0; // 0x1b00 MovB
	goto Label_6915; // 0x1b01 Jump
	
Label_6915:
	func_7270(var_1259_string, var_1260_bool); // 0x1b03 NEW_2
	var_2_object = var_1255_string; // 0x1b05 TMov
	return 0; // 0x1b06 Return
	
Label_6914:
	var_1260_bool = 1; // 0x1b02 MovB
}


func_7413()
{
	var_90_bool = 0; // 0x1cf6 PushV
	var_90_bool = 0; // 0x1cf7 MovB
	var_91_int = 0; var_92_string = ""; // 0x1cf8 PushV
	var_92_string = "d2q01BigVladVisit"; // 0x1cf9 MovS
	func_7323(var_91_int, var_92_string); // 0x1cfa NEW_2
	var_95_int = 0; // 0x1cfc PushI
	var_96_bool = var_91_int != var_95_int; // 0x1cfd Neq
	if(var_96_bool == 0) goto Label_7431; // 0x1cfe JumpB
	var_97_int = 0; var_98_string = ""; // 0x1cff PushV
	var_98_string = "d2q01GeorgVisit"; // 0x1d00 MovS
	func_7323(var_97_int, var_98_string); // 0x1d01 NEW_2
	var_99_int = 0; // 0x1d03 PushI
	var_100_bool = var_97_int != var_99_int; // 0x1d04 Neq
	if(var_100_bool == 0) goto Label_7431; // 0x1d05 JumpB
	var_90_bool = 1; // 0x1d06 MovB
	
Label_7431:
	if(var_90_bool == 0) goto Label_7435; // 0x1d07 JumpB
	func_8639(); // 0x1d09 NEW_2
	
Label_7435:
	return 0; // 0x1d0b Return
}


func_2298(var_0_object, var_484_int, var_485_object)
{
	var_487_object = Obj(); var_488_bool = 0; var_489_int = 0; var_490_bool = 0; var_491_object = Obj(); var_492_bool = 0; var_493_int = 0; var_494_bool = 0; // 0x8fa PushV
	var_0_object = var_485_object; // 0x8fb TMov
	var_495_bool = 0; var_496_object = Obj(); var_497_float = 0; // 0x8fc PushV
	var_496_object = var_485_object; // 0x8fd Mov
	var_497_float = 70.0; // 0x8fe MovF
	func_7031(var_496_object, var_497_float); // 0x8ff NEW_2
	var_498_bool = var_495_bool == 0; // 0x901 Not
	if(var_498_bool == 0) goto Label_2309; // 0x902 JumpB
	var_484_int = -2; // 0x903 MovI
	return 8; // 0x904 Return
	
Label_2309:
	CreateDialog(var_491_object); // 0x905 Func
	var_499_int = 0; // 0x907 PushV
	func_7405(var_499_int); // 0x908 NEW_2
	SetNPCName(var_499_int); // 0x90a ObjFunc
	var_500_int = 0; // 0x90c PushV
	func_7403(var_500_int); // 0x90d NEW_2
	SetNPCDescription(var_500_int); // 0x90f ObjFunc
	var_501_string = ""; // 0x911 PushV
	func_7407(var_501_string); // 0x912 NEW_2
	SetPhoto(var_501_string); // 0x914 ObjFunc
	var_502_string = ""; // 0x916 PushV
	func_7409(var_502_string); // 0x917 NEW_2
	SetPhoto2(var_502_string); // 0x919 ObjFunc
	var_503_int = 0; // 0x91b PushV
	func_8886(var_503_int); // 0x91c NEW_2
	SetPlayerName(var_503_int); // 0x91e ObjFunc
	var_493_int = -1; // 0x920 MovI
	IsOverrideActive(var_492_bool); // 0x921 Func
	var_504_bool = var_492_bool; // 0x923 Push
	if(var_504_bool == 0) goto Label_2343; // 0x924 JumpB
	var_484_int = -2; // 0x925 MovI
	return 8; // 0x926 Return
	
Label_2343:
	DoDialog(var_491_object); // 0x927 Func
	var_505_bool = 0; var_506_object = Obj(); // 0x929 PushV
	var_507_object = Obj(); // 0x92a PushV
	func_7307(var_507_object); // 0x92b NEW_2
	var_506_object = var_507_object; // 0x92c Mov
	func_7116(var_505_bool, var_506_object); // 0x92e NEW_2
	var_508_object = Obj(); var_509_object = Obj(); // 0x930 PushV
	var_508_object = var_485_object; // 0x931 Mov
	var_509_object = var_491_object; // 0x932 Mov
	TaskCall(11); // 0x933 TaskCall
	func_2379(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object); // 0x934 NEW_2
	TaskReturn(); // 0x935 TaskReturn
	IsDialogEnd(var_494_bool); // 0x937 ObjFunc
	
Label_2361:
	var_604_bool = var_494_bool == 0; // 0x939 Not
	if(var_604_bool == 0) goto Label_2368; // 0x93a JumpB
	sync(); // 0x93b Func
	IsDialogEnd(var_494_bool); // 0x93d ObjFunc
	goto Label_2361; // 0x93f Jump
	
Label_2368:
	var_605_object = Obj(); // 0x940 PushV
	var_605_object = var_485_object; // 0x941 Mov
	func_7099(); // 0x942 NEW_2
	StopDialog(var_491_object); // 0x944 Func
	GetReturnValue(var_493_int); // 0x946 ObjFunc
	var_484_int = var_493_int; // 0x948 Mov
	return 8; // 0x949 Return
}


func_6395(var_2_object, var_1081_string)
{
	var_1082_bool = 0; // 0x18fc PushV
	func_7411(var_1082_bool); // 0x18fd NEW_2
	var_1083_bool = var_1082_bool == 0; // 0x18ff Not
	if(var_1083_bool == 0) goto Label_6402; // 0x1900 JumpB
	return 0; // 0x1901 Return
	
Label_6402:
	var_1084_bool = var_1081_string == var_2_object; // 0x1902 Eq
	if(var_1084_bool == 0) goto Label_6405; // 0x1903 JumpB
	return 0; // 0x1904 Return
	
Label_6405:
	var_1085_string = ""; var_1086_bool = 0; // 0x1905 PushV
	var_1085_string = var_1081_string; // 0x1906 Mov
	var_1087_string = ""; // 0x1907 PushS
	var_1088_bool = var_1081_string == var_1087_string; // 0x1908 Eq
	if(var_1088_bool == 0) goto Label_6412; // 0x1909 JumpB
	var_1086_bool = 0; // 0x190a MovB
	goto Label_6413; // 0x190b Jump
	
Label_6413:
	func_7270(var_1085_string, var_1086_bool); // 0x190d NEW_2
	var_2_object = var_1081_string; // 0x190f TMov
	return 0; // 0x1910 Return
	
Label_6412:
	var_1086_bool = 1; // 0x190c MovB
}


func_8445(var_1000_bool)
{
	var_1002_int = 0; var_1003_string = ""; // 0x20fe PushV
	var_1003_string = "ood6BigVlad1"; // 0x20ff MovS
	func_7323(var_1002_int, var_1003_string); // 0x2100 NEW_2
	var_1004_int = 0; // 0x2102 PushI
	var_1005_bool = var_1002_int == var_1004_int; // 0x2103 Eq
	if(var_1005_bool == 0) goto Label_8455; // 0x2104 JumpB
	var_1000_bool = 1; // 0x2105 MovB
	return 0; // 0x2106 Return
	
Label_8455:
	var_1000_bool = 0; // 0x2107 MovB
	return 0; // 0x2108 Return
}


func_7937()
{
	var_217_object = Obj(); var_218_object = Obj(); var_219_object = Obj(); var_220_object = Obj(); // 0x1f01 PushV
	var_221_object = Obj(); // 0x1f02 PushV
	func_8836(var_221_object); // 0x1f03 NEW_2
	var_219_object = var_221_object; // 0x1f04 Mov
	var_222_string = "d4q01BigVladGotoLara"; // 0x1f06 PushS
	FindMark(var_220_object, var_222_string); // 0x1f07 ObjFunc
	var_223_object = var_220_object; // 0x1f09 Push
	if(var_223_object == 0) goto Label_7949; // 0x1f0a JumpB
	Remove(); // 0x1f0b ObjFunc
	
Label_7949:
	var_224_string = "d8q01MladVladgotoOspina"; // 0x1f0d PushS
	FindMark(var_220_object, var_224_string); // 0x1f0e ObjFunc
	var_225_object = var_220_object; // 0x1f10 Push
	if(var_225_object == 0) goto Label_7956; // 0x1f11 JumpB
	Remove(); // 0x1f12 ObjFunc
	
Label_7956:
	var_226_string = "d4q01BigVladGotoSklad"; // 0x1f14 PushS
	FindMark(var_220_object, var_226_string); // 0x1f15 ObjFunc
	var_227_object = var_220_object; // 0x1f17 Push
	if(var_227_object == 0) goto Label_7963; // 0x1f18 JumpB
	Remove(); // 0x1f19 ObjFunc
	
Label_7963:
	var_228_string = "d4q01BigVladGotoSobor"; // 0x1f1b PushS
	FindMark(var_220_object, var_228_string); // 0x1f1c ObjFunc
	var_229_object = var_220_object; // 0x1f1e Push
	if(var_229_object == 0) goto Label_7970; // 0x1f1f JumpB
	Remove(); // 0x1f20 ObjFunc
	
Label_7970:
	var_230_string = "d8q01MladVladGotoMat"; // 0x1f22 PushS
	FindMark(var_220_object, var_230_string); // 0x1f23 ObjFunc
	var_231_object = var_220_object; // 0x1f25 Push
	if(var_231_object == 0) goto Label_7977; // 0x1f26 JumpB
	Remove(); // 0x1f27 ObjFunc
	
Label_7977:
	var_232_string = "d4q01BigVladGotoTheater"; // 0x1f29 PushS
	FindMark(var_220_object, var_232_string); // 0x1f2a ObjFunc
	var_233_object = var_220_object; // 0x1f2c Push
	if(var_233_object == 0) goto Label_7984; // 0x1f2d JumpB
	Remove(); // 0x1f2e ObjFunc
	
Label_7984:
	var_234_string = "d4q01LaraGotoMladVlad"; // 0x1f30 PushS
	FindMark(var_220_object, var_234_string); // 0x1f31 ObjFunc
	var_235_object = var_220_object; // 0x1f33 Push
	if(var_235_object == 0) goto Label_7991; // 0x1f34 JumpB
	Remove(); // 0x1f35 ObjFunc
	
Label_7991:
	var_236_string = "d4q01LaraGotoMladVladSelf"; // 0x1f37 PushS
	FindMark(var_220_object, var_236_string); // 0x1f38 ObjFunc
	var_237_object = var_220_object; // 0x1f3a Push
	if(var_237_object == 0) goto Label_7998; // 0x1f3b JumpB
	Remove(); // 0x1f3c ObjFunc
	
Label_7998:
	var_238_string = "d4q01LaraGotoOspina"; // 0x1f3e PushS
	FindMark(var_220_object, var_238_string); // 0x1f3f ObjFunc
	var_239_object = var_220_object; // 0x1f41 Push
	if(var_239_object == 0) goto Label_8005; // 0x1f42 JumpB
	Remove(); // 0x1f43 ObjFunc
	
Label_8005:
	var_240_string = "d8q01MatGotoBoiny"; // 0x1f45 PushS
	FindMark(var_220_object, var_240_string); // 0x1f46 ObjFunc
	var_241_object = var_220_object; // 0x1f48 Push
	if(var_241_object == 0) goto Label_8012; // 0x1f49 JumpB
	Remove(); // 0x1f4a ObjFunc
	
Label_8012:
	var_242_string = "d4q01MladVladGotoBigVlad"; // 0x1f4c PushS
	FindMark(var_220_object, var_242_string); // 0x1f4d ObjFunc
	var_243_object = var_220_object; // 0x1f4f Push
	if(var_243_object == 0) goto Label_8019; // 0x1f50 JumpB
	Remove(); // 0x1f51 ObjFunc
	
Label_8019:
	var_244_string = "d8q04MladVladGotoMark"; // 0x1f53 PushS
	FindMark(var_220_object, var_244_string); // 0x1f54 ObjFunc
	var_245_object = var_220_object; // 0x1f56 Push
	if(var_245_object == 0) goto Label_8026; // 0x1f57 JumpB
	Remove(); // 0x1f58 ObjFunc
	
Label_8026:
	var_246_string = "d4q01MladVladGotoOspina"; // 0x1f5a PushS
	FindMark(var_220_object, var_246_string); // 0x1f5b ObjFunc
	var_247_object = var_220_object; // 0x1f5d Push
	if(var_247_object == 0) goto Label_8033; // 0x1f5e JumpB
	Remove(); // 0x1f5f ObjFunc
	
Label_8033:
	var_248_string = "d4q01OspinaGotoLara"; // 0x1f61 PushS
	FindMark(var_220_object, var_248_string); // 0x1f62 ObjFunc
	var_249_object = var_220_object; // 0x1f64 Push
	if(var_249_object == 0) goto Label_8040; // 0x1f65 JumpB
	Remove(); // 0x1f66 ObjFunc
	
Label_8040:
	var_250_string = "d4q01WastedMale"; // 0x1f68 PushS
	FindMark(var_220_object, var_250_string); // 0x1f69 ObjFunc
	var_251_object = var_220_object; // 0x1f6b Push
	if(var_251_object == 0) goto Label_8047; // 0x1f6c JumpB
	Remove(); // 0x1f6d ObjFunc
	
Label_8047:
	var_252_string = "d4q01Whitemask"; // 0x1f6f PushS
	FindMark(var_220_object, var_252_string); // 0x1f70 ObjFunc
	var_253_object = var_220_object; // 0x1f72 Push
	if(var_253_object == 0) goto Label_8054; // 0x1f73 JumpB
	Remove(); // 0x1f74 ObjFunc
	
Label_8054:
	func_8730(); // 0x1f77 NEW_2
	var_262_bool = 0; var_263_string = ""; var_264_string = ""; // 0x1f79 PushV
	var_263_string = "quest_d4_01"; // 0x1f7a MovS
	var_264_string = "failed"; // 0x1f7b MovS
	func_7352(var_262_bool, var_263_string, var_264_string); // 0x1f7c NEW_2
	return 4; // 0x1f7e Return
}


func_8457(var_1006_bool)
{
	var_1008_int = 0; var_1009_string = ""; // 0x210a PushV
	var_1009_string = "d6q02KnowAboutAttack"; // 0x210b MovS
	func_7323(var_1008_int, var_1009_string); // 0x210c NEW_2
	var_1010_int = 1; // 0x210e PushI
	var_1011_bool = var_1008_int == var_1010_int; // 0x210f Eq
	if(var_1011_bool == 0) goto Label_8467; // 0x2110 JumpB
	var_1006_bool = 1; // 0x2111 MovB
	return 0; // 0x2112 Return
	
Label_8467:
	var_1006_bool = 0; // 0x2113 MovB
	return 0; // 0x2114 Return
}


func_7436()
{
	func_8652(); // 0x1d0e NEW_2
	var_126_bool = 0; var_127_string = ""; var_128_string = ""; // 0x1d10 PushV
	var_127_string = "quest_d3_01"; // 0x1d11 MovS
	var_128_string = "fail"; // 0x1d12 MovS
	func_7352(var_126_bool, var_127_string, var_128_string); // 0x1d13 NEW_2
	return 0; // 0x1d15 Return
}


func_8469(var_1026_bool)
{
	var_1028_int = 0; var_1029_string = ""; // 0x2116 PushV
	var_1029_string = "d6q02Trigger"; // 0x2117 MovS
	func_7323(var_1028_int, var_1029_string); // 0x2118 NEW_2
	var_1030_int = 0; // 0x211a PushI
	var_1031_bool = var_1028_int != var_1030_int; // 0x211b Neq
	if(var_1031_bool == 0) goto Label_8479; // 0x211c JumpB
	var_1026_bool = 1; // 0x211d MovB
	return 0; // 0x211e Return
	
Label_8479:
	var_1026_bool = 0; // 0x211f MovB
	return 0; // 0x2120 Return
}


func_7446()
{
	var_102_string = "ood1BigVlad2"; // 0x1d17 PushS
	var_103_int = 1; // 0x1d18 PushI
	SetVariable(var_102_string, var_103_int); // 0x1d19 Func
	return 0; // 0x1d1b Return
}


func_7452()
{
	var_155_object = Obj(); var_156_object = Obj(); // 0x1d1c PushV
	var_157_object = Obj(); // 0x1d1d PushV
	func_8836(var_157_object); // 0x1d1e NEW_2
	var_156_object = var_157_object; // 0x1d1f Mov
	var_158_string = "d5q01BigVladGotoLara"; // 0x1d21 PushS
	var_159_string = "pt_map_lara"; // 0x1d22 PushS
	var_160_int = 1; // 0x1d23 PushI
	var_161_int = 511959; // 0x1d24 PushI
	var_162_float = 0; // 0x1d25 PushV
	func_7364(var_162_float); // 0x1d26 NEW_2
	AddMark(var_158_string, var_159_string, var_160_int, var_161_int, var_162_float); // 0x1d28 ObjFunc
	return 2; // 0x1d2a Return
}


func_800(var_0_object, var_1_object, var_2_object, var_3_string, var_1189_object, var_1190_object)
{
	var_0_object = var_1190_object; // 0x321 TMov
	var_1_object = var_1189_object; // 0x322 TMov
	var_3_string = 0; // 0x323 TMovB
	var_1195_int = 1; // 0x324 PushI
	if(var_1195_int == 0) goto Label_833; // 0x325 JumpB
	var_1196_string = ""; // 0x326 PushV
	var_1196_string = "Neutral"; // 0x327 MovS
	func_863(var_1190_object, var_1196_string); // 0x328 NEW_2
	var_1204_int = 535284; // 0x32a PushI
	SetMessage(var_1204_int); // 0x32b TObjFunc
	ClearReplies(); // 0x32d TObjFunc
	var_1205_int = 535285; // 0x32f PushI
	var_1206_int = 36962; // 0x330 PushI
	var_1207_int = 36961; // 0x331 PushI
	AddReply(var_1205_int, var_1206_int, var_1207_int); // 0x332 TObjFunc
	var_1208_int = 535292; // 0x334 PushI
	var_1209_int = -1; // 0x335 PushI
	var_1210_int = 36968; // 0x336 PushI
	AddReply(var_1208_int, var_1209_int, var_1210_int); // 0x337 TObjFunc
	var_1211_int = 535293; // 0x339 PushI
	var_1212_int = -1; // 0x33a PushI
	var_1213_int = 36969; // 0x33b PushI
	AddReply(var_1211_int, var_1212_int, var_1213_int); // 0x33c TObjFunc
	goto Label_833; // 0x33e Jump
	
Label_833:
	var_1214_bool = 0; // 0x341 PushV
	func_7411(var_1214_bool); // 0x342 NEW_2
	if(var_1214_bool == 0) goto Label_848; // 0x344 JumpB
	
Label_837:
	lshWaitForAnimEnd(); // 0x345 Func
	var_1215_string = var_3_string; // 0x347 PushT
	if(var_1215_string == 0) goto Label_842; // 0x348 JumpB
	goto Label_847; // 0x349 Jump
	
Label_847:
	goto Label_862; // 0x34f Jump
	
Label_862:
	return 0; // 0x35e Return
	
Label_842:
	var_1216_string = ""; // 0x34a PushV
	var_1216_string = var_2_object; // 0x34b MovT
	func_7254(var_1216_string); // 0x34c NEW_2
	goto Label_837; // 0x34e Jump
	
Label_848:
	var_1217_string = "all"; // 0x350 PushS
	var_1218_string = "idle"; // 0x351 PushS
	PlayAnimation(var_1217_string, var_1218_string); // 0x352 Func
	
Label_852:
	WaitForAnimEnd(); // 0x354 Func
	var_1219_string = var_3_string; // 0x356 PushT
	if(var_1219_string == 0) goto Label_857; // 0x357 JumpB
	goto Label_862; // 0x358 Jump
	
Label_857:
	var_1220_string = "all"; // 0x359 PushS
	var_1221_string = "idle"; // 0x35a PushS
	PlayAnimation(var_1220_string, var_1221_string); // 0x35b Func
	goto Label_852; // 0x35d Jump
}


func_8481(var_938_bool)
{
	var_940_int = 0; var_941_string = ""; // 0x2122 PushV
	var_941_string = "d6q01"; // 0x2123 MovS
	func_7323(var_940_int, var_941_string); // 0x2124 NEW_2
	var_942_int = 1; // 0x2126 PushI
	var_943_bool = var_940_int == var_942_int; // 0x2127 Eq
	if(var_943_bool == 0) goto Label_8491; // 0x2128 JumpB
	var_938_bool = 1; // 0x2129 MovB
	return 0; // 0x212a Return
	
Label_8491:
	var_938_bool = 0; // 0x212b MovB
	return 0; // 0x212c Return
}


func_7468()
{
	func_8743(); // 0x1d2e NEW_2
	var_184_bool = 0; var_185_string = ""; var_186_string = ""; // 0x1d30 PushV
	var_185_string = "quest_d5_01"; // 0x1d31 MovS
	var_186_string = "fail"; // 0x1d32 MovS
	func_7352(var_184_bool, var_185_string, var_186_string); // 0x1d33 NEW_2
	return 0; // 0x1d35 Return
}


func_8493(var_986_bool)
{
	var_988_int = 0; var_989_string = ""; // 0x212e PushV
	var_989_string = "ood6BigVlad2"; // 0x212f MovS
	func_7323(var_988_int, var_989_string); // 0x2130 NEW_2
	var_990_int = 0; // 0x2132 PushI
	var_991_bool = var_988_int == var_990_int; // 0x2133 Eq
	if(var_991_bool == 0) goto Label_8503; // 0x2134 JumpB
	var_986_bool = 1; // 0x2135 MovB
	return 0; // 0x2136 Return
	
Label_8503:
	var_986_bool = 0; // 0x2137 MovB
	return 0; // 0x2138 Return
}


func_1330(var_2_object, var_253_string)
{
	var_254_bool = 0; // 0x533 PushV
	func_7411(var_254_bool); // 0x534 NEW_2
	var_255_bool = var_254_bool == 0; // 0x536 Not
	if(var_255_bool == 0) goto Label_1337; // 0x537 JumpB
	return 0; // 0x538 Return
	
Label_1337:
	var_256_bool = var_253_string == var_2_object; // 0x539 Eq
	if(var_256_bool == 0) goto Label_1340; // 0x53a JumpB
	return 0; // 0x53b Return
	
Label_1340:
	var_257_string = ""; var_258_bool = 0; // 0x53c PushV
	var_257_string = var_253_string; // 0x53d Mov
	var_259_string = ""; // 0x53e PushS
	var_260_bool = var_253_string == var_259_string; // 0x53f Eq
	if(var_260_bool == 0) goto Label_1347; // 0x540 JumpB
	var_258_bool = 0; // 0x541 MovB
	goto Label_1348; // 0x542 Jump
	
Label_1348:
	func_7270(var_257_string, var_258_bool); // 0x544 NEW_2
	var_2_object = var_253_string; // 0x546 TMov
	return 0; // 0x547 Return
	
Label_1347:
	var_258_bool = 1; // 0x543 MovB
}


func_7478()
{
	var_530_string = "ood2BigVlad1"; // 0x1d37 PushS
	var_531_int = 1; // 0x1d38 PushI
	SetVariable(var_530_string, var_531_int); // 0x1d39 Func
	return 0; // 0x1d3b Return
}


func_6968()
{
	var_56_bool = 0; // 0x1b38 PushV
	func_7026(var_56_bool); // 0x1b39 NEW_2
	var_59_bool = var_56_bool == 0; // 0x1b3b Not
	if(var_59_bool == 0) goto Label_6975; // 0x1b3c JumpB
	Hold(); // 0x1b3d Func
	
Label_6975:
	var_60_string = ""; // 0x1b3f PushV
	var_60_string = "Neutral"; // 0x1b40 MovS
	func_7254(var_60_string); // 0x1b41 NEW_2
	lshWaitForAnimEnd(); // 0x1b43 Func
	goto Label_6975; // 0x1b45 Jump
}


func_8505(var_1097_bool)
{
	var_1099_int = 0; var_1100_string = ""; // 0x213a PushV
	var_1100_string = "d8q01MladVladIsBad"; // 0x213b MovS
	func_7323(var_1099_int, var_1100_string); // 0x213c NEW_2
	var_1101_int = 1; // 0x213e PushI
	var_1102_bool = var_1099_int == var_1101_int; // 0x213f Eq
	if(var_1102_bool == 0) goto Label_8515; // 0x2140 JumpB
	var_1097_bool = 1; // 0x2141 MovB
	return 0; // 0x2142 Return
	
Label_8515:
	var_1097_bool = 0; // 0x2143 MovB
	return 0; // 0x2144 Return
}


func_7484()
{
	var_573_string = "ood2BigVlad2"; // 0x1d3d PushS
	var_574_int = 1; // 0x1d3e PushI
	SetVariable(var_573_string, var_574_int); // 0x1d3f Func
	return 0; // 0x1d41 Return
}


func_7490()
{
	var_131_string = "ood2BigVlad4"; // 0x1d43 PushS
	var_132_int = 1; // 0x1d44 PushI
	SetVariable(var_131_string, var_132_int); // 0x1d45 Func
	return 0; // 0x1d47 Return
}


func_8517(var_1114_bool)
{
	var_1116_int = 0; var_1117_string = ""; // 0x2146 PushV
	var_1117_string = "d8q01BringBadBoy"; // 0x2147 MovS
	func_7323(var_1116_int, var_1117_string); // 0x2148 NEW_2
	var_1118_int = 1; // 0x214a PushI
	var_1119_bool = var_1116_int == var_1118_int; // 0x214b Eq
	if(var_1119_bool == 0) goto Label_8527; // 0x214c JumpB
	var_1114_bool = 1; // 0x214d MovB
	return 0; // 0x214e Return
	
Label_8527:
	var_1114_bool = 0; // 0x214f MovB
	return 0; // 0x2150 Return
}


func_7496()
{
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x1d49 PushV
	var_112_string = "quest_d5_01"; // 0x1d4a MovS
	var_113_string = "factory"; // 0x1d4b MovS
	func_7352(var_111_bool, var_112_string, var_113_string); // 0x1d4c NEW_2
	return 0; // 0x1d4e Return
}


func_2379(var_0_object, var_1_object, var_2_object, var_3_string, var_508_object, var_509_object)
{
	var_0_object = var_509_object; // 0x94c TMov
	var_1_object = var_508_object; // 0x94d TMov
	var_3_string = 0; // 0x94e TMovB
	var_514_int = 1; // 0x94f PushI
	if(var_514_int == 0) goto Label_2504; // 0x950 JumpB
	var_515_bool = 0; // 0x951 PushV
	var_515_bool = 0; // 0x952 MovB
	var_516_bool = 0; var_517_object = Obj(); // 0x953 PushV
	var_517_object = var_1_object; // 0x954 MovT
	func_8195(var_517_object); // 0x955 NEW_2
	if(var_516_bool == 0) goto Label_2398; // 0x957 JumpB
	var_522_bool = 0; var_523_object = Obj(); // 0x958 PushV
	var_523_object = var_1_object; // 0x959 MovT
	func_8231(var_523_object); // 0x95a NEW_2
	if(var_522_bool == 0) goto Label_2398; // 0x95c JumpB
	var_515_bool = 1; // 0x95d MovB
	
Label_2398:
	if(var_515_bool == 0) goto Label_2429; // 0x95e JumpB
	var_528_object = Obj(); var_529_object = Obj(); // 0x95f PushV
	var_528_object = var_1_object; // 0x960 MovT
	var_529_object = var_0_object; // 0x961 MovT
	func_7478(); // 0x962 NEW_2
	var_532_string = ""; // 0x964 PushV
	var_532_string = "Neutral"; // 0x965 MovS
	func_2534(var_509_object, var_532_string); // 0x966 NEW_2
	var_540_int = 506797; // 0x968 PushI
	SetMessage(var_540_int); // 0x969 TObjFunc
	ClearReplies(); // 0x96b TObjFunc
	var_541_int = 506810; // 0x96d PushI
	var_542_int = 7493; // 0x96e PushI
	var_543_int = 7505; // 0x96f PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x970 TObjFunc
	var_544_int = 506798; // 0x972 PushI
	var_545_int = 7491; // 0x973 PushI
	var_546_int = 7490; // 0x974 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x975 TObjFunc
	var_547_int = 506809; // 0x977 PushI
	var_548_int = 7491; // 0x978 PushI
	var_549_int = 7503; // 0x979 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x97a TObjFunc
	goto Label_2504; // 0x97c Jump
	
Label_2504:
	var_550_bool = 0; // 0x9c8 PushV
	func_7411(var_550_bool); // 0x9c9 NEW_2
	if(var_550_bool == 0) goto Label_2519; // 0x9cb JumpB
	
Label_2508:
	lshWaitForAnimEnd(); // 0x9cc Func
	var_551_string = var_3_string; // 0x9ce PushT
	if(var_551_string == 0) goto Label_2513; // 0x9cf JumpB
	goto Label_2518; // 0x9d0 Jump
	
Label_2518:
	goto Label_2533; // 0x9d6 Jump
	
Label_2533:
	return 0; // 0x9e5 Return
	
Label_2513:
	var_552_string = ""; // 0x9d1 PushV
	var_552_string = var_2_object; // 0x9d2 MovT
	func_7254(var_552_string); // 0x9d3 NEW_2
	goto Label_2508; // 0x9d5 Jump
	
Label_2519:
	var_553_string = "all"; // 0x9d7 PushS
	var_554_string = "idle"; // 0x9d8 PushS
	PlayAnimation(var_553_string, var_554_string); // 0x9d9 Func
	
Label_2523:
	WaitForAnimEnd(); // 0x9db Func
	var_555_string = var_3_string; // 0x9dd PushT
	if(var_555_string == 0) goto Label_2528; // 0x9de JumpB
	goto Label_2533; // 0x9df Jump
	
Label_2528:
	var_556_string = "all"; // 0x9e0 PushS
	var_557_string = "idle"; // 0x9e1 PushS
	PlayAnimation(var_556_string, var_557_string); // 0x9e2 Func
	goto Label_2523; // 0x9e4 Jump
	
Label_2429:
	var_558_bool = 0; // 0x97d PushV
	var_558_bool = 0; // 0x97e MovB
	var_559_bool = 0; var_560_object = Obj(); // 0x97f PushV
	var_560_object = var_1_object; // 0x980 MovT
	func_8207(var_560_object); // 0x981 NEW_2
	if(var_559_bool == 0) goto Label_2442; // 0x983 JumpB
	var_565_bool = 0; var_566_object = Obj(); // 0x984 PushV
	var_566_object = var_1_object; // 0x985 MovT
	func_8243(var_566_object); // 0x986 NEW_2
	if(var_565_bool == 0) goto Label_2442; // 0x988 JumpB
	var_558_bool = 1; // 0x989 MovB
	
Label_2442:
	if(var_558_bool == 0) goto Label_2468; // 0x98a JumpB
	var_571_object = Obj(); var_572_object = Obj(); // 0x98b PushV
	var_571_object = var_1_object; // 0x98c MovT
	var_572_object = var_0_object; // 0x98d MovT
	func_7484(); // 0x98e NEW_2
	var_575_string = ""; // 0x990 PushV
	var_575_string = "Neutral"; // 0x991 MovS
	func_2534(var_509_object, var_575_string); // 0x992 NEW_2
	var_576_int = 506765; // 0x994 PushI
	SetMessage(var_576_int); // 0x995 TObjFunc
	ClearReplies(); // 0x997 TObjFunc
	var_577_int = 506777; // 0x999 PushI
	var_578_int = 7457; // 0x99a PushI
	var_579_int = 7467; // 0x99b PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x99c TObjFunc
	var_580_int = 506766; // 0x99e PushI
	var_581_int = 7459; // 0x99f PushI
	var_582_int = 7456; // 0x9a0 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x9a1 TObjFunc
	goto Label_2504; // 0x9a3 Jump
	
Label_2468:
	var_583_string = ""; // 0x9a4 PushV
	var_583_string = "Neutral"; // 0x9a5 MovS
	func_2534(var_509_object, var_583_string); // 0x9a6 NEW_2
	var_584_int = 506794; // 0x9a8 PushI
	SetMessage(var_584_int); // 0x9a9 TObjFunc
	ClearReplies(); // 0x9ab TObjFunc
	var_585_bool = 0; // 0x9ad PushV
	var_585_bool = 0; // 0x9ae MovB
	var_586_bool = 0; var_587_object = Obj(); // 0x9af PushV
	var_587_object = var_1_object; // 0x9b0 MovT
	func_8219(var_587_object); // 0x9b1 NEW_2
	if(var_586_bool == 0) goto Label_2490; // 0x9b3 JumpB
	var_592_bool = 0; var_593_object = Obj(); // 0x9b4 PushV
	var_593_object = var_1_object; // 0x9b5 MovT
	func_8601(var_593_object); // 0x9b6 NEW_2
	if(var_592_bool == 0) goto Label_2490; // 0x9b8 JumpB
	var_585_bool = 1; // 0x9b9 MovB
	
Label_2490:
	if(var_585_bool == 0) goto Label_2496; // 0x9ba JumpB
	var_598_int = 506795; // 0x9bb PushI
	var_599_int = 7469; // 0x9bc PushI
	var_600_int = 7487; // 0x9bd PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x9be TObjFunc
	
Label_2496:
	var_601_int = 507535; // 0x9c0 PushI
	var_602_int = -1; // 0x9c1 PushI
	var_603_int = 8317; // 0x9c2 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x9c3 TObjFunc
	goto Label_2504; // 0x9c5 Jump
}


func_7503()
{
	var_63_string = "d2q01BigVladVisit"; // 0x1d50 PushS
	var_64_int = 1; // 0x1d51 PushI
	SetVariable(var_63_string, var_64_int); // 0x1d52 Func
	func_8626(); // 0x1d55 NEW_2
	return 0; // 0x1d57 Return
}


func_8529(var_1091_bool)
{
	var_1093_int = 0; var_1094_string = ""; // 0x2152 PushV
	var_1094_string = "ood8BigVlad1"; // 0x2153 MovS
	func_7323(var_1093_int, var_1094_string); // 0x2154 NEW_2
	var_1095_int = 0; // 0x2156 PushI
	var_1096_bool = var_1093_int == var_1095_int; // 0x2157 Eq
	if(var_1096_bool == 0) goto Label_8539; // 0x2158 JumpB
	var_1091_bool = 1; // 0x2159 MovB
	return 0; // 0x215a Return
	
Label_8539:
	var_1091_bool = 0; // 0x215b MovB
	return 0; // 0x215c Return
}


func_7512()
{
	var_120_string = "playsound"; // 0x1d59 PushS
	var_121_string = "mapmark"; // 0x1d5a PushS
	TriggerWorld(var_120_string, var_121_string); // 0x1d5b Func
	return 0; // 0x1d5d Return
}


func_8541(var_1108_bool)
{
	var_1110_int = 0; var_1111_string = ""; // 0x215e PushV
	var_1111_string = "ood8BigVlad2"; // 0x215f MovS
	func_7323(var_1110_int, var_1111_string); // 0x2160 NEW_2
	var_1112_int = 0; // 0x2162 PushI
	var_1113_bool = var_1110_int == var_1112_int; // 0x2163 Eq
	if(var_1113_bool == 0) goto Label_8551; // 0x2164 JumpB
	var_1108_bool = 1; // 0x2165 MovB
	return 0; // 0x2166 Return
	
Label_8551:
	var_1108_bool = 0; // 0x2167 MovB
	return 0; // 0x2168 Return
}


func_7518()
{
	var_106_string = "d3q01HelpBurah"; // 0x1d5f PushS
	var_107_int = 1; // 0x1d60 PushI
	SetVariable(var_106_string, var_107_int); // 0x1d61 Func
	return 0; // 0x1d63 Return
}


func_863(var_2_object, var_1196_string)
{
	var_1197_bool = 0; // 0x360 PushV
	func_7411(var_1197_bool); // 0x361 NEW_2
	var_1198_bool = var_1197_bool == 0; // 0x363 Not
	if(var_1198_bool == 0) goto Label_870; // 0x364 JumpB
	return 0; // 0x365 Return
	
Label_870:
	var_1199_bool = var_1196_string == var_2_object; // 0x366 Eq
	if(var_1199_bool == 0) goto Label_873; // 0x367 JumpB
	return 0; // 0x368 Return
	
Label_873:
	var_1200_string = ""; var_1201_bool = 0; // 0x369 PushV
	var_1200_string = var_1196_string; // 0x36a Mov
	var_1202_string = ""; // 0x36b PushS
	var_1203_bool = var_1196_string == var_1202_string; // 0x36c Eq
	if(var_1203_bool == 0) goto Label_880; // 0x36d JumpB
	var_1201_bool = 0; // 0x36e MovB
	goto Label_881; // 0x36f Jump
	
Label_881:
	func_7270(var_1200_string, var_1201_bool); // 0x371 NEW_2
	var_2_object = var_1196_string; // 0x373 TMov
	return 0; // 0x374 Return
	
Label_880:
	var_1201_bool = 1; // 0x370 MovB
}


func_7007(var_63_bool, var_64_cvector)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; // 0x1b5f PushV
	GetPosition(var_68_cvector); // 0x1b60 Func
	var_69_cvector = var_64_cvector - var_68_cvector; // 0x1b62 Sub2
	var_71_float = GetByIndex(var_69_cvector, 0); // 0x1b63 PushE
	var_72_float = GetByIndex(var_69_cvector, 2); // 0x1b64 PushE
	Rotate(var_71_float, var_72_float, var_70_bool); // 0x1b65 Func
	var_63_bool = var_70_bool; // 0x1b67 Mov
	return 6; // 0x1b68 Return
}


func_7524()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x1d64 PushV
	var_65_string = "d3q01"; // 0x1d65 PushS
	var_66_int = 6; // 0x1d66 PushI
	SetVariable(var_65_string, var_66_int); // 0x1d67 Func
	var_67_object = Obj(); // 0x1d69 PushV
	func_8836(var_67_object); // 0x1d6a NEW_2
	var_64_object = var_67_object; // 0x1d6b Mov
	var_74_string = "d3q01BigVladAgreed"; // 0x1d6d PushS
	var_75_string = "pt_map_ospina"; // 0x1d6e PushS
	var_76_int = 1; // 0x1d6f PushI
	var_77_int = 515300; // 0x1d70 PushI
	var_78_float = 0; // 0x1d71 PushV
	func_7364(var_78_float); // 0x1d72 NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x1d74 ObjFunc
	func_8665(); // 0x1d77 NEW_2
	return 2; // 0x1d79 Return
}


func_8553(var_1134_bool)
{
	var_1136_int = 0; var_1137_string = ""; // 0x216a PushV
	var_1137_string = "ood8BigVlad3"; // 0x216b MovS
	func_7323(var_1136_int, var_1137_string); // 0x216c NEW_2
	var_1138_int = 0; // 0x216e PushI
	var_1139_bool = var_1136_int == var_1138_int; // 0x216f Eq
	if(var_1139_bool == 0) goto Label_8563; // 0x2170 JumpB
	var_1134_bool = 1; // 0x2171 MovB
	return 0; // 0x2172 Return
	
Label_8563:
	var_1134_bool = 0; // 0x2173 MovB
	return 0; // 0x2174 Return
}


func_7017(var_59_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x1b69 PushV
	GetPosition(var_62_cvector); // 0x1b6a ObjFunc
	var_63_bool = 0; var_64_cvector = CVector(0,0,0); // 0x1b6c PushV
	var_64_cvector = var_62_cvector; // 0x1b6d Mov
	func_7007(var_63_bool, var_64_cvector); // 0x1b6e NEW_2
	var_59_bool = var_63_bool; // 0x1b6f Mov
	return 2; // 0x1b71 Return
}


func_4460(var_2_object, var_749_string)
{
	var_750_bool = 0; // 0x116d PushV
	func_7411(var_750_bool); // 0x116e NEW_2
	var_751_bool = var_750_bool == 0; // 0x1170 Not
	if(var_751_bool == 0) goto Label_4467; // 0x1171 JumpB
	return 0; // 0x1172 Return
	
Label_4467:
	var_752_bool = var_749_string == var_2_object; // 0x1173 Eq
	if(var_752_bool == 0) goto Label_4470; // 0x1174 JumpB
	return 0; // 0x1175 Return
	
Label_4470:
	var_753_string = ""; var_754_bool = 0; // 0x1176 PushV
	var_753_string = var_749_string; // 0x1177 Mov
	var_755_string = ""; // 0x1178 PushS
	var_756_bool = var_749_string == var_755_string; // 0x1179 Eq
	if(var_756_bool == 0) goto Label_4477; // 0x117a JumpB
	var_754_bool = 0; // 0x117b MovB
	goto Label_4478; // 0x117c Jump
	
Label_4478:
	func_7270(var_753_string, var_754_bool); // 0x117e NEW_2
	var_2_object = var_749_string; // 0x1180 TMov
	return 0; // 0x1181 Return
	
Label_4477:
	var_754_bool = 1; // 0x117d MovB
}


func_7026(var_56_bool)
{
	var_57_bool = 0; var_58_bool = 0; // 0x1b72 PushV
	IsLoaded(var_58_bool); // 0x1b73 Func
	var_56_bool = var_58_bool; // 0x1b75 Mov
	return 2; // 0x1b76 Return
}


func_8565(var_945_bool)
{
	var_947_int = 0; var_948_string = ""; // 0x2176 PushV
	var_948_string = "ood6BigVlad3"; // 0x2177 MovS
	func_7323(var_947_int, var_948_string); // 0x2178 NEW_2
	var_949_int = 0; // 0x217a PushI
	var_950_bool = var_947_int == var_949_int; // 0x217b Eq
	if(var_950_bool == 0) goto Label_8575; // 0x217c JumpB
	var_945_bool = 1; // 0x217d MovB
	return 0; // 0x217e Return
	
Label_8575:
	var_945_bool = 0; // 0x217f MovB
	return 0; // 0x2180 Return
}


func_7031(var_87_bool, var_89_float)
{
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_bool = 0; // 0x1b77 PushV
	GetPosition(var_100_cvector); // 0x1b78 ObjFunc
	GetEyesHeight(var_99_float); // 0x1b7a ObjFunc
	var_108_float = GetByIndex(var_100_cvector, 1); // 0x1b7c PushE
	var_108_float = var_108_float + var_99_float; // 0x1b7d Add2
	SetByIndex(var_100_cvector, 1) = var_108_float; // 0x1b7e PopE
	GetPosition(var_101_cvector); // 0x1b7f Func
	GetEyesHeight(var_99_float); // 0x1b81 Func
	var_109_float = GetByIndex(var_101_cvector, 1); // 0x1b83 PushE
	var_109_float = var_109_float + var_99_float; // 0x1b84 Add2
	SetByIndex(var_101_cvector, 1) = var_109_float; // 0x1b85 PopE
	var_102_cvector = var_100_cvector - var_101_cvector; // 0x1b86 Sub2
	var_110_float = GetByIndex(var_102_cvector, 1); // 0x1b87 PushE
	var_110_float = 0; // 0x1b88 MovI
	SetByIndex(var_102_cvector, 1) = var_110_float; // 0x1b89 PopE
	var_111_int = var_102_cvector | var_102_cvector; // 0x1b8a Or
	var_112_float = sqrt(var_111_int); // 0x1b8b Sqrt
	var_102_cvector = var_102_cvector / var_102_cvector; // 0x1b8c Div2
	var_103_cvector = -var_102_cvector; // 0x1b8d Neg2
	var_113_float = var_102_cvector * var_89_float; // 0x1b8e Mult
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); // 0x1b8f PushV
	var_116_cvector = CVector(0.0, 1.0, 0.0); // 0x1b90 PushVec
	var_115_cvector = var_103_cvector ^ var_116_cvector; // 0x1b91 Xor2
	func_7313(var_114_cvector, var_115_cvector); // 0x1b92 NEW_2
	var_122_int = 25; // 0x1b94 PushI
	var_123_float = var_114_cvector * var_122_int; // 0x1b95 Mult
	var_124_int = var_113_float + var_123_float; // 0x1b96 Add
	var_125_cvector = CVector(0.0, 10.0, 0.0); // 0x1b97 PushVec
	var_104_cvector = var_124_int - var_125_cvector; // 0x1b98 Sub2
	var_105_cvector = var_101_cvector + var_104_cvector; // 0x1b99 Add2
	IsOverrideActive(var_106_bool); // 0x1b9a Func
	var_126_bool = var_106_bool; // 0x1b9c Push
	if(var_126_bool == 0) goto Label_7072; // 0x1b9d JumpB
	var_87_bool = 0; // 0x1b9e MovB
	return 18; // 0x1b9f Return
	
Label_7072:
	StopWorld(); // 0x1ba0 Func
	CameraTransit(var_105_cvector, var_103_cvector); // 0x1ba2 Func
	var_127_float = GetByIndex(var_104_cvector, 0); // 0x1ba4 PushE
	var_128_float = GetByIndex(var_104_cvector, 2); // 0x1ba5 PushE
	Rotate(var_127_float, var_128_float); // 0x1ba6 Func
	var_129_bool = 0; // 0x1ba8 PushV
	func_7411(var_129_bool); // 0x1ba9 NEW_2
	if(var_129_bool == 0) goto Label_7085; // 0x1bab JumpB
	goto Label_7093; // 0x1bac Jump
	
Label_7093:
	CameraWaitForPlayFinish(); // 0x1bb5 Func
	ResumeWorld(); // 0x1bb7 Func
	var_87_bool = 1; // 0x1bb9 MovB
	return 18; // 0x1bba Return
	
Label_7085:
	var_130_string = "head"; // 0x1bad PushS
	HasAnimationTrack(var_107_bool, var_130_string); // 0x1bae Func
	var_131_bool = var_107_bool; // 0x1bb0 Push
	if(var_131_bool == 0) goto Label_7093; // 0x1bb1 JumpB
	var_132_string = "head"; // 0x1bb2 PushS
	LookAsyncCamera(var_132_string); // 0x1bb3 Func
}


func_7547()
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0; // 0x1d7c PushV
	var_122_object = Obj(); // 0x1d7d PushV
	func_8836(var_122_object); // 0x1d7e NEW_2
	var_119_object = var_122_object; // 0x1d7f Mov
	var_120_string = "pt_map_alexandr"; // 0x1d81 MovS
	var_121_float = 2; // 0x1d82 MovI
	func_8853(var_119_object, var_120_string, var_121_float); // 0x1d83 NEW_2
	var_142_object = Obj(); // 0x1d85 PushV
	func_8836(var_142_object); // 0x1d86 NEW_2
	ShowMap(var_142_object); // 0x1d88 ObjFunc
	return 0; // 0x1d8a Return
}


func_8065()
{
	var_747_string = "d4BigVladVisit"; // 0x1f82 PushS
	var_748_int = 1; // 0x1f83 PushI
	SetVariable(var_747_string, var_748_int); // 0x1f84 Func
	return 0; // 0x1f86 Return
}


func_8577(var_1140_bool)
{
	var_1142_int = 0; var_1143_string = ""; // 0x2182 PushV
	var_1143_string = "d8q01BigVladIsVictim"; // 0x2183 MovS
	func_7323(var_1142_int, var_1143_string); // 0x2184 NEW_2
	var_1144_int = 1; // 0x2186 PushI
	var_1145_bool = var_1142_int == var_1144_int; // 0x2187 Eq
	if(var_1145_bool == 0) goto Label_8587; // 0x2188 JumpB
	var_1140_bool = 1; // 0x2189 MovB
	return 0; // 0x218a Return
	
Label_8587:
	var_1140_bool = 0; // 0x218b MovB
	return 0; // 0x218c Return
}


func_8071()
{
	var_138_object = Obj(); var_139_object = Obj(); // 0x1f87 PushV
	var_140_object = Obj(); // 0x1f88 PushV
	func_8836(var_140_object); // 0x1f89 NEW_2
	var_139_object = var_140_object; // 0x1f8a Mov
	var_141_string = "d6q02BigVlad"; // 0x1f8c PushS
	var_142_string = "pt_map_bigvlad"; // 0x1f8d PushS
	var_143_int = 0; // 0x1f8e PushI
	var_144_int = 515380; // 0x1f8f PushI
	var_145_float = 0; // 0x1f90 PushV
	func_7364(var_145_float); // 0x1f91 NEW_2
	AddMark(var_141_string, var_142_string, var_143_int, var_144_int, var_145_float); // 0x1f93 ObjFunc
	func_8782(); // 0x1f96 NEW_2
	return 2; // 0x1f98 Return
}


func_7563()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x1d8b PushV
	var_65_string = "d4q01"; // 0x1d8c PushS
	var_66_int = 1; // 0x1d8d PushI
	SetVariable(var_65_string, var_66_int); // 0x1d8e Func
	var_67_object = Obj(); // 0x1d90 PushV
	func_8836(var_67_object); // 0x1d91 NEW_2
	var_64_object = var_67_object; // 0x1d92 Mov
	var_74_string = "d4q01BigVladGotoLara"; // 0x1d94 PushS
	var_75_string = "pt_map_lara"; // 0x1d95 PushS
	var_76_int = 1; // 0x1d96 PushI
	var_77_int = 511481; // 0x1d97 PushI
	var_78_float = 0; // 0x1d98 PushV
	func_7364(var_78_float); // 0x1d99 NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x1d9b ObjFunc
	var_81_string = "d4q01BigVladGotoSklad"; // 0x1d9d PushS
	var_82_string = "pt_map_warehouse_gangster"; // 0x1d9e PushS
	var_83_int = 1; // 0x1d9f PushI
	var_84_int = 511482; // 0x1da0 PushI
	var_85_float = 0; // 0x1da1 PushV
	func_7364(var_85_float); // 0x1da2 NEW_2
	AddMark(var_81_string, var_82_string, var_83_int, var_84_int, var_85_float); // 0x1da4 ObjFunc
	func_8678(); // 0x1da7 NEW_2
	func_8691(); // 0x1daa NEW_2
	return 2; // 0x1dac Return
}


func_8589(var_1120_bool)
{
	var_1122_int = 0; var_1123_string = ""; // 0x218e PushV
	var_1123_string = "d8q01MladVladIsVictim"; // 0x218f MovS
	func_7323(var_1122_int, var_1123_string); // 0x2190 NEW_2
	var_1124_int = 1; // 0x2192 PushI
	var_1125_bool = var_1122_int == var_1124_int; // 0x2193 Eq
	if(var_1125_bool == 0) goto Label_8599; // 0x2194 JumpB
	var_1120_bool = 1; // 0x2195 MovB
	return 0; // 0x2196 Return
	
Label_8599:
	var_1120_bool = 0; // 0x2197 MovB
	return 0; // 0x2198 Return
}


func_8601(var_592_bool)
{
	var_594_int = 0; var_595_string = ""; // 0x219a PushV
	var_595_string = "d2KnowBigVladIsBad"; // 0x219b MovS
	func_7323(var_594_int, var_595_string); // 0x219c NEW_2
	var_596_int = 1; // 0x219e PushI
	var_597_bool = var_594_int == var_596_int; // 0x219f Eq
	if(var_597_bool == 0) goto Label_8611; // 0x21a0 JumpB
	var_592_bool = 1; // 0x21a1 MovB
	return 0; // 0x21a2 Return
	
Label_8611:
	var_592_bool = 0; // 0x21a3 MovB
	return 0; // 0x21a4 Return
}


func_8090()
{
	var_957_string = "d6BigVladVisit"; // 0x1f9b PushS
	var_958_int = 1; // 0x1f9c PushI
	SetVariable(var_957_string, var_958_int); // 0x1f9d Func
	return 0; // 0x1f9f Return
}


func_8096()
{
	var_63_string = "d1q01"; // 0x1fa1 PushS
	var_64_int = 6; // 0x1fa2 PushI
	SetVariable(var_63_string, var_64_int); // 0x1fa3 Func
	func_8613(); // 0x1fa6 NEW_2
	var_88_bool = 0; var_89_string = ""; var_90_string = ""; // 0x1fa8 PushV
	var_89_string = "quest_d1_01"; // 0x1fa9 MovS
	var_90_string = "place_morlok_run"; // 0x1faa MovS
	func_7352(var_88_bool, var_89_string, var_90_string); // 0x1fab NEW_2
	return 0; // 0x1fad Return
}


func_8613()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x21a5 PushV
	var_67_int = 619; // 0x21a6 PushI
	var_68_int = 1; // 0x21a7 PushI
	var_69_int = 532193; // 0x21a8 PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0x21a9 Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0x21ab PushV
	var_71_object = var_66_object; // 0x21ac Mov
	var_72_int = 2; // 0x21ad MovI
	func_8808(var_70_bool, var_71_object, var_72_int); // 0x21ae NEW_2
	return 2; // 0x21b0 Return
}


func_8110(var_412_bool)
{
	var_414_int = 0; var_415_string = ""; // 0x1faf PushV
	var_415_string = "d1q01FirstGeorgVisit"; // 0x1fb0 MovS
	func_7323(var_414_int, var_415_string); // 0x1fb1 NEW_2
	var_418_int = 1; // 0x1fb3 PushI
	var_419_bool = var_414_int == var_418_int; // 0x1fb4 Eq
	if(var_419_bool == 0) goto Label_8120; // 0x1fb5 JumpB
	var_412_bool = 1; // 0x1fb6 MovB
	return 0; // 0x1fb7 Return
	
Label_8120:
	var_412_bool = 0; // 0x1fb8 MovB
	return 0; // 0x1fb9 Return
}


func_7598()
{
	var_119_string = "ood4BigVlad1"; // 0x1daf PushS
	var_120_int = 1; // 0x1db0 PushI
	SetVariable(var_119_string, var_120_int); // 0x1db1 Func
	return 0; // 0x1db3 Return
}


func_8626()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x21b2 PushV
	var_67_int = 627; // 0x21b3 PushI
	var_68_int = 1; // 0x21b4 PushI
	var_69_int = 532756; // 0x21b5 PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0x21b6 Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0x21b8 PushV
	var_71_object = var_66_object; // 0x21b9 Mov
	var_72_int = 10; // 0x21ba MovI
	func_8808(var_70_bool, var_71_object, var_72_int); // 0x21bb NEW_2
	return 2; // 0x21bd Return
}


func_7604()
{
	var_167_object = Obj(); var_168_string = ""; var_169_float = 0; // 0x1db5 PushV
	var_170_object = Obj(); // 0x1db6 PushV
	func_8836(var_170_object); // 0x1db7 NEW_2
	var_167_object = var_170_object; // 0x1db8 Mov
	var_168_string = "pt_map_lara"; // 0x1dba MovS
	var_169_float = 2; // 0x1dbb MovI
	func_8853(var_167_object, var_168_string, var_169_float); // 0x1dbc NEW_2
	var_171_object = Obj(); // 0x1dbe PushV
	func_8836(var_171_object); // 0x1dbf NEW_2
	ShowMap(var_171_object); // 0x1dc1 ObjFunc
	return 0; // 0x1dc3 Return
}


func_8122(var_446_bool)
{
	var_448_int = 0; var_449_string = ""; // 0x1fbb PushV
	var_449_string = "d1q01"; // 0x1fbc MovS
	func_7323(var_448_int, var_449_string); // 0x1fbd NEW_2
	var_450_int = 5; // 0x1fbf PushI
	var_451_bool = var_448_int == var_450_int; // 0x1fc0 Eq
	if(var_451_bool == 0) goto Label_8132; // 0x1fc1 JumpB
	var_446_bool = 1; // 0x1fc2 MovB
	return 0; // 0x1fc3 Return
	
Label_8132:
	var_446_bool = 0; // 0x1fc4 MovB
	return 0; // 0x1fc5 Return
}


func_7099()
{
	var_300_bool = 0; var_301_bool = 0; // 0x1bbb PushV
	CameraSwitchToNormal(); // 0x1bbc Func
	var_302_bool = 0; // 0x1bbe PushV
	func_7411(var_302_bool); // 0x1bbf NEW_2
	if(var_302_bool == 0) goto Label_7107; // 0x1bc1 JumpB
	goto Label_7115; // 0x1bc2 Jump
	
Label_7115:
	return 2; // 0x1bcb Return
	
Label_7107:
	var_303_string = "head"; // 0x1bc3 PushS
	HasAnimationTrack(var_301_bool, var_303_string); // 0x1bc4 Func
	var_304_bool = var_301_bool; // 0x1bc6 Push
	if(var_304_bool == 0) goto Label_7115; // 0x1bc7 JumpB
	var_305_string = "head"; // 0x1bc8 PushS
	UnlookAsync(var_305_string); // 0x1bc9 Func
}


func_8639()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x21bf PushV
	var_103_int = 628; // 0x21c0 PushI
	var_104_int = 1; // 0x21c1 PushI
	var_105_int = 532757; // 0x21c2 PushI
	CreateDiaryEntry(var_102_object, var_103_int, var_104_int, var_105_int); // 0x21c3 Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0x21c5 PushV
	var_107_object = var_102_object; // 0x21c6 Mov
	var_108_int = 10; // 0x21c7 MovI
	func_8808(var_106_bool, var_107_object, var_108_int); // 0x21c8 NEW_2
	return 2; // 0x21ca Return
}


func_7620()
{
	var_175_string = "ood4BigVlad2"; // 0x1dc5 PushS
	var_176_int = 1; // 0x1dc6 PushI
	SetVariable(var_175_string, var_176_int); // 0x1dc7 Func
	return 0; // 0x1dc9 Return
}


func_8134(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0x1fc7 PushV
	var_469_string = "d1q01"; // 0x1fc8 MovS
	func_7323(var_468_int, var_469_string); // 0x1fc9 NEW_2
	var_470_int = 6; // 0x1fcb PushI
	var_471_bool = var_468_int == var_470_int; // 0x1fcc Eq
	if(var_471_bool == 0) goto Label_8144; // 0x1fcd JumpB
	var_466_bool = 1; // 0x1fce MovB
	return 0; // 0x1fcf Return
	
Label_8144:
	var_466_bool = 0; // 0x1fd0 MovB
	return 0; // 0x1fd1 Return
}


func_1478(var_0_object, var_906_int, var_907_object)
{
	var_909_object = Obj(); var_910_bool = 0; var_911_int = 0; var_912_bool = 0; var_913_object = Obj(); var_914_bool = 0; var_915_int = 0; var_916_bool = 0; // 0x5c6 PushV
	var_0_object = var_907_object; // 0x5c7 TMov
	var_917_bool = 0; var_918_object = Obj(); var_919_float = 0; // 0x5c8 PushV
	var_918_object = var_907_object; // 0x5c9 Mov
	var_919_float = 70.0; // 0x5ca MovF
	func_7031(var_918_object, var_919_float); // 0x5cb NEW_2
	var_920_bool = var_917_bool == 0; // 0x5cd Not
	if(var_920_bool == 0) goto Label_1489; // 0x5ce JumpB
	var_906_int = -2; // 0x5cf MovI
	return 8; // 0x5d0 Return
	
Label_1489:
	CreateDialog(var_913_object); // 0x5d1 Func
	var_921_int = 0; // 0x5d3 PushV
	func_7405(var_921_int); // 0x5d4 NEW_2
	SetNPCName(var_921_int); // 0x5d6 ObjFunc
	var_922_int = 0; // 0x5d8 PushV
	func_7403(var_922_int); // 0x5d9 NEW_2
	SetNPCDescription(var_922_int); // 0x5db ObjFunc
	var_923_string = ""; // 0x5dd PushV
	func_7407(var_923_string); // 0x5de NEW_2
	SetPhoto(var_923_string); // 0x5e0 ObjFunc
	var_924_string = ""; // 0x5e2 PushV
	func_7409(var_924_string); // 0x5e3 NEW_2
	SetPhoto2(var_924_string); // 0x5e5 ObjFunc
	var_925_int = 0; // 0x5e7 PushV
	func_8886(var_925_int); // 0x5e8 NEW_2
	SetPlayerName(var_925_int); // 0x5ea ObjFunc
	var_915_int = -1; // 0x5ec MovI
	IsOverrideActive(var_914_bool); // 0x5ed Func
	var_926_bool = var_914_bool; // 0x5ef Push
	if(var_926_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_906_int = -2; // 0x5f1 MovI
	return 8; // 0x5f2 Return
	
Label_1523:
	DoDialog(var_913_object); // 0x5f3 Func
	var_927_bool = 0; var_928_object = Obj(); // 0x5f5 PushV
	var_929_object = Obj(); // 0x5f6 PushV
	func_7307(var_929_object); // 0x5f7 NEW_2
	var_928_object = var_929_object; // 0x5f8 Mov
	func_7116(var_927_bool, var_928_object); // 0x5fa NEW_2
	var_930_object = Obj(); var_931_object = Obj(); // 0x5fc PushV
	var_930_object = var_907_object; // 0x5fd Mov
	var_931_object = var_913_object; // 0x5fe Mov
	TaskCall(9); // 0x5ff TaskCall
	func_1559(var_932_object, var_933_object, var_934_string, var_935_bool, var_930_object, var_931_object); // 0x600 NEW_2
	TaskReturn(); // 0x601 TaskReturn
	IsDialogEnd(var_916_bool); // 0x603 ObjFunc
	
Label_1541:
	var_1046_bool = var_916_bool == 0; // 0x605 Not
	if(var_1046_bool == 0) goto Label_1548; // 0x606 JumpB
	sync(); // 0x607 Func
	IsDialogEnd(var_916_bool); // 0x609 ObjFunc
	goto Label_1541; // 0x60b Jump
	
Label_1548:
	var_1047_object = Obj(); // 0x60c PushV
	var_1047_object = var_907_object; // 0x60d Mov
	func_7099(); // 0x60e NEW_2
	StopDialog(var_913_object); // 0x610 Func
	GetReturnValue(var_915_int); // 0x612 ObjFunc
	var_906_int = var_915_int; // 0x614 Mov
	return 8; // 0x615 Return
}


func_7626()
{
	var_179_object = Obj(); var_180_object = Obj(); // 0x1dca PushV
	var_181_string = "d4q01"; // 0x1dcb PushS
	var_182_int = 4; // 0x1dcc PushI
	SetVariable(var_181_string, var_182_int); // 0x1dcd Func
	var_183_object = Obj(); // 0x1dcf PushV
	func_8836(var_183_object); // 0x1dd0 NEW_2
	var_180_object = var_183_object; // 0x1dd1 Mov
	var_184_string = "d4q01BigVladGotoSobor"; // 0x1dd3 PushS
	var_185_string = "pt_map_sobor"; // 0x1dd4 PushS
	var_186_int = 1; // 0x1dd5 PushI
	var_187_int = 515325; // 0x1dd6 PushI
	var_188_float = 0; // 0x1dd7 PushV
	func_7364(var_188_float); // 0x1dd8 NEW_2
	AddMark(var_184_string, var_185_string, var_186_int, var_187_int, var_188_float); // 0x1dda ObjFunc
	var_189_string = "d4q01BigVladGotoTheater"; // 0x1ddc PushS
	var_190_string = "pt_map_theater"; // 0x1ddd PushS
	var_191_int = 1; // 0x1dde PushI
	var_192_int = 515326; // 0x1ddf PushI
	var_193_float = 0; // 0x1de0 PushV
	func_7364(var_193_float); // 0x1de1 NEW_2
	AddMark(var_189_string, var_190_string, var_191_int, var_192_int, var_193_float); // 0x1de3 ObjFunc
	func_8704(); // 0x1de6 NEW_2
	var_202_bool = 0; var_203_string = ""; var_204_string = ""; // 0x1de8 PushV
	var_203_string = "quest_d4_01"; // 0x1de9 MovS
	var_204_string = "pers"; // 0x1dea MovS
	func_7352(var_202_bool, var_203_string, var_204_string); // 0x1deb NEW_2
	var_208_bool = 0; var_209_string = ""; var_210_string = ""; // 0x1ded PushV
	var_209_string = "quest_d4_01"; // 0x1dee MovS
	var_210_string = "key_actors"; // 0x1def MovS
	func_7352(var_208_bool, var_209_string, var_210_string); // 0x1df0 NEW_2
	return 2; // 0x1df2 Return
}


func_7116(var_147_bool, var_148_object)
{
	var_152_int = 0; var_153_int = 0; var_154_int = 0; var_155_int = 0; // 0x1bcc PushV
	var_156_string = "voice_common"; // 0x1bcd PushS
	GetVariable(var_156_string, var_154_int); // 0x1bce Func
	var_157_int = var_154_int; // 0x1bd0 Push
	if(var_157_int == 0) goto Label_7154; // 0x1bd1 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x1bd2 PushV
	var_159_object = var_148_object; // 0x1bd3 Mov
	func_7174(var_159_object); // 0x1bd4 NEW_2
	var_188_bool = var_158_bool == 0; // 0x1bd6 Not
	if(var_188_bool == 0) goto Label_7136; // 0x1bd7 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x1bd8 PushV
	var_190_object = var_148_object; // 0x1bd9 Mov
	func_7211(var_190_object); // 0x1bda NEW_2
	var_224_bool = var_189_bool == 0; // 0x1bdc Not
	if(var_224_bool == 0) goto Label_7136; // 0x1bdd JumpB
	var_147_bool = 0; // 0x1bde MovB
	return 4; // 0x1bdf Return
	
Label_7136:
	var_225_int = 2; // 0x1be0 PushI
	irand(var_155_int, var_225_int); // 0x1be1 Func
	var_226_int = var_155_int; // 0x1be3 Push
	if(var_226_int == 0) goto Label_7149; // 0x1be4 JumpB
	var_227_string = "voice_common"; // 0x1be5 PushS
	var_228_int = 1; // 0x1be6 PushI
	var_229_int = var_154_int + var_228_int; // 0x1be7 Add
	var_230_int = 3; // 0x1be8 PushI
	var_231_int = var_229_int / var_230_int; // 0x1be9 Mod
	SetVariable(var_227_string, var_231_int); // 0x1bea Func
	goto Label_7153; // 0x1bec Jump
	
Label_7153:
	goto Label_7172; // 0x1bf1 Jump
	
Label_7172:
	var_147_bool = 1; // 0x1c04 MovB
	return 4; // 0x1c05 Return
	
Label_7149:
	var_232_string = "voice_common"; // 0x1bed PushS
	var_233_int = 0; // 0x1bee PushI
	SetVariable(var_232_string, var_233_int); // 0x1bef Func
	
Label_7154:
	var_234_bool = 0; var_235_object = Obj(); // 0x1bf2 PushV
	var_235_object = var_148_object; // 0x1bf3 Mov
	func_7211(var_235_object); // 0x1bf4 NEW_2
	var_236_bool = var_234_bool == 0; // 0x1bf6 Not
	if(var_236_bool == 0) goto Label_7168; // 0x1bf7 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x1bf8 PushV
	var_238_object = var_148_object; // 0x1bf9 Mov
	func_7174(var_238_object); // 0x1bfa NEW_2
	var_239_bool = var_237_bool == 0; // 0x1bfc Not
	if(var_239_bool == 0) goto Label_7168; // 0x1bfd JumpB
	var_147_bool = 0; // 0x1bfe MovB
	return 4; // 0x1bff Return
	
Label_7168:
	var_240_string = "voice_common"; // 0x1c00 PushS
	var_241_int = 1; // 0x1c01 PushI
	SetVariable(var_240_string, var_241_int); // 0x1c02 Func
}


func_8652()
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x21cc PushV
	var_120_int = 677; // 0x21cd PushI
	var_121_int = 1; // 0x21ce PushI
	var_122_int = 534363; // 0x21cf PushI
	CreateDiaryEntry(var_119_object, var_120_int, var_121_int, var_122_int); // 0x21d0 Func
	var_123_bool = 0; var_124_object = Obj(); var_125_int = 0; // 0x21d2 PushV
	var_124_object = var_119_object; // 0x21d3 Mov
	var_125_int = 25; // 0x21d4 MovI
	func_8808(var_123_bool, var_124_object, var_125_int); // 0x21d5 NEW_2
	return 2; // 0x21d7 Return
}


func_8146(var_664_bool)
{
	var_666_bool = 0; // 0x1fd3 PushV
	var_666_bool = 0; // 0x1fd4 MovB
	var_667_bool = 0; // 0x1fd5 PushV
	var_667_bool = 0; // 0x1fd6 MovB
	var_668_int = 0; var_669_string = ""; // 0x1fd7 PushV
	var_669_string = "d3q02"; // 0x1fd8 MovS
	func_7323(var_668_int, var_669_string); // 0x1fd9 NEW_2
	var_670_int = 1000; // 0x1fdb PushI
	var_671_bool = var_668_int == var_670_int; // 0x1fdc Eq
	var_672_bool = var_671_bool == 0; // 0x1fdd Not
	if(var_672_bool == 0) goto Label_8168; // 0x1fde JumpB
	var_673_int = 0; var_674_string = ""; // 0x1fdf PushV
	var_674_string = "d3q02"; // 0x1fe0 MovS
	func_7323(var_673_int, var_674_string); // 0x1fe1 NEW_2
	var_675_int = 0; // 0x1fe3 PushI
	var_676_bool = var_673_int == var_675_int; // 0x1fe4 Eq
	var_677_bool = var_676_bool == 0; // 0x1fe5 Not
	if(var_677_bool == 0) goto Label_8168; // 0x1fe6 JumpB
	var_667_bool = 1; // 0x1fe7 MovB
	
Label_8168:
	if(var_667_bool == 0) goto Label_8178; // 0x1fe8 JumpB
	var_678_int = 0; var_679_string = ""; // 0x1fe9 PushV
	var_679_string = "d3q02"; // 0x1fea MovS
	func_7323(var_678_int, var_679_string); // 0x1feb NEW_2
	var_680_int = -1; // 0x1fed PushI
	var_681_bool = var_678_int == var_680_int; // 0x1fee Eq
	var_682_bool = var_681_bool == 0; // 0x1fef Not
	if(var_682_bool == 0) goto Label_8178; // 0x1ff0 JumpB
	var_666_bool = 1; // 0x1ff1 MovB
	
Label_8178:
	if(var_666_bool == 0) goto Label_8181; // 0x1ff2 JumpB
	var_664_bool = 1; // 0x1ff3 MovB
	return 0; // 0x1ff4 Return
	
Label_8181:
	var_664_bool = 0; // 0x1ff5 MovB
	return 0; // 0x1ff6 Return
}


func_978(var_0_object, var_322_int, var_323_object)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_int = 0; var_328_bool = 0; var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; // 0x3d2 PushV
	var_0_object = var_323_object; // 0x3d3 TMov
	var_333_bool = 0; var_334_object = Obj(); var_335_float = 0; // 0x3d4 PushV
	var_334_object = var_323_object; // 0x3d5 Mov
	var_335_float = 70.0; // 0x3d6 MovF
	func_7031(var_334_object, var_335_float); // 0x3d7 NEW_2
	var_336_bool = var_333_bool == 0; // 0x3d9 Not
	if(var_336_bool == 0) goto Label_989; // 0x3da JumpB
	var_322_int = -2; // 0x3db MovI
	return 8; // 0x3dc Return
	
Label_989:
	CreateDialog(var_329_object); // 0x3dd Func
	var_337_int = 0; // 0x3df PushV
	func_7405(var_337_int); // 0x3e0 NEW_2
	SetNPCName(var_337_int); // 0x3e2 ObjFunc
	var_338_int = 0; // 0x3e4 PushV
	func_7403(var_338_int); // 0x3e5 NEW_2
	SetNPCDescription(var_338_int); // 0x3e7 ObjFunc
	var_339_string = ""; // 0x3e9 PushV
	func_7407(var_339_string); // 0x3ea NEW_2
	SetPhoto(var_339_string); // 0x3ec ObjFunc
	var_340_string = ""; // 0x3ee PushV
	func_7409(var_340_string); // 0x3ef NEW_2
	SetPhoto2(var_340_string); // 0x3f1 ObjFunc
	var_341_int = 0; // 0x3f3 PushV
	func_8886(var_341_int); // 0x3f4 NEW_2
	SetPlayerName(var_341_int); // 0x3f6 ObjFunc
	var_331_int = -1; // 0x3f8 MovI
	IsOverrideActive(var_330_bool); // 0x3f9 Func
	var_342_bool = var_330_bool; // 0x3fb Push
	if(var_342_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_322_int = -2; // 0x3fd MovI
	return 8; // 0x3fe Return
	
Label_1023:
	DoDialog(var_329_object); // 0x3ff Func
	var_343_bool = 0; var_344_object = Obj(); // 0x401 PushV
	var_345_object = Obj(); // 0x402 PushV
	func_7307(var_345_object); // 0x403 NEW_2
	var_344_object = var_345_object; // 0x404 Mov
	func_7116(var_343_bool, var_344_object); // 0x406 NEW_2
	var_346_object = Obj(); var_347_object = Obj(); // 0x408 PushV
	var_346_object = var_323_object; // 0x409 Mov
	var_347_object = var_329_object; // 0x40a Mov
	TaskCall(5); // 0x40b TaskCall
	func_1059(var_348_object, var_349_object, var_350_string, var_351_bool, var_346_object, var_347_object); // 0x40c NEW_2
	TaskReturn(); // 0x40d TaskReturn
	IsDialogEnd(var_332_bool); // 0x40f ObjFunc
	
Label_1041:
	var_376_bool = var_332_bool == 0; // 0x411 Not
	if(var_376_bool == 0) goto Label_1048; // 0x412 JumpB
	sync(); // 0x413 Func
	IsDialogEnd(var_332_bool); // 0x415 ObjFunc
	goto Label_1041; // 0x417 Jump
	
Label_1048:
	var_377_object = Obj(); // 0x418 PushV
	var_377_object = var_323_object; // 0x419 Mov
	func_7099(); // 0x41a NEW_2
	StopDialog(var_329_object); // 0x41c Func
	GetReturnValue(var_331_int); // 0x41e ObjFunc
	var_322_int = var_331_int; // 0x420 Mov
	return 8; // 0x421 Return
}


func_8665()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x21d9 PushV
	var_83_int = 135; // 0x21da PushI
	var_84_int = 1; // 0x21db PushI
	var_85_int = 515298; // 0x21dc PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x21dd Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x21df PushV
	var_87_object = var_82_object; // 0x21e0 Mov
	var_88_int = 25; // 0x21e1 MovI
	func_8808(var_86_bool, var_87_object, var_88_int); // 0x21e2 NEW_2
	return 2; // 0x21e4 Return
}


func_2534(var_2_object, var_532_string)
{
	var_533_bool = 0; // 0x9e7 PushV
	func_7411(var_533_bool); // 0x9e8 NEW_2
	var_534_bool = var_533_bool == 0; // 0x9ea Not
	if(var_534_bool == 0) goto Label_2541; // 0x9eb JumpB
	return 0; // 0x9ec Return
	
Label_2541:
	var_535_bool = var_532_string == var_2_object; // 0x9ed Eq
	if(var_535_bool == 0) goto Label_2544; // 0x9ee JumpB
	return 0; // 0x9ef Return
	
Label_2544:
	var_536_string = ""; var_537_bool = 0; // 0x9f0 PushV
	var_536_string = var_532_string; // 0x9f1 Mov
	var_538_string = ""; // 0x9f2 PushS
	var_539_bool = var_532_string == var_538_string; // 0x9f3 Eq
	if(var_539_bool == 0) goto Label_2551; // 0x9f4 JumpB
	var_537_bool = 0; // 0x9f5 MovB
	goto Label_2552; // 0x9f6 Jump
	
Label_2552:
	func_7270(var_536_string, var_537_bool); // 0x9f8 NEW_2
	var_2_object = var_532_string; // 0x9fa TMov
	return 0; // 0x9fb Return
	
Label_2551:
	var_537_bool = 1; // 0x9f7 MovB
}


func_8678()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x21e6 PushV
	var_88_int = 20; // 0x21e7 PushI
	var_89_int = 1; // 0x21e8 PushI
	var_90_int = 503360; // 0x21e9 PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0x21ea Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x21ec PushV
	var_92_object = var_87_object; // 0x21ed Mov
	var_93_int = -1; // 0x21ee MovI
	func_8808(var_91_bool, var_92_object, var_93_int); // 0x21ef NEW_2
	return 2; // 0x21f1 Return
}


func_8691()
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x21f3 PushV
	var_111_int = 87; // 0x21f4 PushI
	var_112_int = 1; // 0x21f5 PushI
	var_113_int = 512169; // 0x21f6 PushI
	CreateDiaryEntry(var_110_object, var_111_int, var_112_int, var_113_int); // 0x21f7 Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x21f9 PushV
	var_115_object = var_110_object; // 0x21fa Mov
	var_116_int = 20; // 0x21fb MovI
	func_8808(var_114_bool, var_115_object, var_116_int); // 0x21fc NEW_2
	return 2; // 0x21fe Return
}


func_7668()
{
	var_269_string = "ood4BigVlad3"; // 0x1df5 PushS
	var_270_int = 1; // 0x1df6 PushI
	SetVariable(var_269_string, var_270_int); // 0x1df7 Func
	return 0; // 0x1df9 Return
}


func_8183(var_459_bool)
{
	var_461_int = 0; var_462_string = ""; // 0x1ff8 PushV
	var_462_string = "ood1BigVlad2"; // 0x1ff9 MovS
	func_7323(var_461_int, var_462_string); // 0x1ffa NEW_2
	var_463_int = 0; // 0x1ffc PushI
	var_464_bool = var_461_int == var_463_int; // 0x1ffd Eq
	if(var_464_bool == 0) goto Label_8193; // 0x1ffe JumpB
	var_459_bool = 1; // 0x1fff MovB
	return 0; // 0x2000 Return
	
Label_8193:
	var_459_bool = 0; // 0x2001 MovB
	return 0; // 0x2002 Return
}


func_7674()
{
	var_273_object = Obj(); var_274_object = Obj(); var_275_int = 0; var_276_object = Obj(); var_277_object = Obj(); var_278_int = 0; // 0x1dfa PushV
	var_279_object = Obj(); // 0x1dfb PushV
	func_8836(var_279_object); // 0x1dfc NEW_2
	var_276_object = var_279_object; // 0x1dfd Mov
	var_280_string = "d4q01BigVladGotoLara"; // 0x1dff PushS
	FindMark(var_277_object, var_280_string); // 0x1e00 ObjFunc
	var_281_object = var_277_object; // 0x1e02 Push
	if(var_281_object == 0) goto Label_7686; // 0x1e03 JumpB
	Remove(); // 0x1e04 ObjFunc
	
Label_7686:
	var_282_string = "d8q01MladVladgotoOspina"; // 0x1e06 PushS
	FindMark(var_277_object, var_282_string); // 0x1e07 ObjFunc
	var_283_object = var_277_object; // 0x1e09 Push
	if(var_283_object == 0) goto Label_7693; // 0x1e0a JumpB
	Remove(); // 0x1e0b ObjFunc
	
Label_7693:
	var_284_string = "d4q01BigVladGotoSklad"; // 0x1e0d PushS
	FindMark(var_277_object, var_284_string); // 0x1e0e ObjFunc
	var_285_object = var_277_object; // 0x1e10 Push
	if(var_285_object == 0) goto Label_7700; // 0x1e11 JumpB
	Remove(); // 0x1e12 ObjFunc
	
Label_7700:
	var_286_string = "d4q01BigVladGotoSobor"; // 0x1e14 PushS
	FindMark(var_277_object, var_286_string); // 0x1e15 ObjFunc
	var_287_object = var_277_object; // 0x1e17 Push
	if(var_287_object == 0) goto Label_7707; // 0x1e18 JumpB
	Remove(); // 0x1e19 ObjFunc
	
Label_7707:
	var_288_string = "d8q01MladVladGotoMat"; // 0x1e1b PushS
	FindMark(var_277_object, var_288_string); // 0x1e1c ObjFunc
	var_289_object = var_277_object; // 0x1e1e Push
	if(var_289_object == 0) goto Label_7714; // 0x1e1f JumpB
	Remove(); // 0x1e20 ObjFunc
	
Label_7714:
	var_290_string = "d4q01BigVladGotoTheater"; // 0x1e22 PushS
	FindMark(var_277_object, var_290_string); // 0x1e23 ObjFunc
	var_291_object = var_277_object; // 0x1e25 Push
	if(var_291_object == 0) goto Label_7721; // 0x1e26 JumpB
	Remove(); // 0x1e27 ObjFunc
	
Label_7721:
	var_292_string = "d4q01LaraGotoMladVlad"; // 0x1e29 PushS
	FindMark(var_277_object, var_292_string); // 0x1e2a ObjFunc
	var_293_object = var_277_object; // 0x1e2c Push
	if(var_293_object == 0) goto Label_7728; // 0x1e2d JumpB
	Remove(); // 0x1e2e ObjFunc
	
Label_7728:
	var_294_string = "d4q01LaraGotoMladVladSelf"; // 0x1e30 PushS
	FindMark(var_277_object, var_294_string); // 0x1e31 ObjFunc
	var_295_object = var_277_object; // 0x1e33 Push
	if(var_295_object == 0) goto Label_7735; // 0x1e34 JumpB
	Remove(); // 0x1e35 ObjFunc
	
Label_7735:
	var_296_string = "d4q01LaraGotoOspina"; // 0x1e37 PushS
	FindMark(var_277_object, var_296_string); // 0x1e38 ObjFunc
	var_297_object = var_277_object; // 0x1e3a Push
	if(var_297_object == 0) goto Label_7742; // 0x1e3b JumpB
	Remove(); // 0x1e3c ObjFunc
	
Label_7742:
	var_298_string = "d8q01MatGotoBoiny"; // 0x1e3e PushS
	FindMark(var_277_object, var_298_string); // 0x1e3f ObjFunc
	var_299_object = var_277_object; // 0x1e41 Push
	if(var_299_object == 0) goto Label_7749; // 0x1e42 JumpB
	Remove(); // 0x1e43 ObjFunc
	
Label_7749:
	var_300_string = "d4q01MladVladGotoBigVlad"; // 0x1e45 PushS
	FindMark(var_277_object, var_300_string); // 0x1e46 ObjFunc
	var_301_object = var_277_object; // 0x1e48 Push
	if(var_301_object == 0) goto Label_7756; // 0x1e49 JumpB
	Remove(); // 0x1e4a ObjFunc
	
Label_7756:
	var_302_string = "d8q04MladVladGotoMark"; // 0x1e4c PushS
	FindMark(var_277_object, var_302_string); // 0x1e4d ObjFunc
	var_303_object = var_277_object; // 0x1e4f Push
	if(var_303_object == 0) goto Label_7763; // 0x1e50 JumpB
	Remove(); // 0x1e51 ObjFunc
	
Label_7763:
	var_304_string = "d4q01MladVladGotoOspina"; // 0x1e53 PushS
	FindMark(var_277_object, var_304_string); // 0x1e54 ObjFunc
	var_305_object = var_277_object; // 0x1e56 Push
	if(var_305_object == 0) goto Label_7770; // 0x1e57 JumpB
	Remove(); // 0x1e58 ObjFunc
	
Label_7770:
	var_306_string = "d4q01OspinaGotoLara"; // 0x1e5a PushS
	FindMark(var_277_object, var_306_string); // 0x1e5b ObjFunc
	var_307_object = var_277_object; // 0x1e5d Push
	if(var_307_object == 0) goto Label_7777; // 0x1e5e JumpB
	Remove(); // 0x1e5f ObjFunc
	
Label_7777:
	var_308_string = "d4q01WastedMale"; // 0x1e61 PushS
	FindMark(var_277_object, var_308_string); // 0x1e62 ObjFunc
	var_309_object = var_277_object; // 0x1e64 Push
	if(var_309_object == 0) goto Label_7784; // 0x1e65 JumpB
	Remove(); // 0x1e66 ObjFunc
	
Label_7784:
	var_310_string = "d4q01Whitemask"; // 0x1e68 PushS
	FindMark(var_277_object, var_310_string); // 0x1e69 ObjFunc
	var_311_object = var_277_object; // 0x1e6b Push
	if(var_311_object == 0) goto Label_7791; // 0x1e6c JumpB
	Remove(); // 0x1e6d ObjFunc
	
Label_7791:
	func_8717(); // 0x1e70 NEW_2
	var_320_bool = 0; var_321_string = ""; var_322_string = ""; // 0x1e72 PushV
	var_321_string = "quest_d4_01"; // 0x1e73 MovS
	var_322_string = "completed"; // 0x1e74 MovS
	func_7352(var_320_bool, var_321_string, var_322_string); // 0x1e75 NEW_2
	var_323_string = "d4q01_sobor_key"; // 0x1e77 PushS
	var_324_int = 1; // 0x1e78 PushI
	RemoveItemByType(var_278_int, var_323_string, var_324_int); // 0x1e79 ObjFunc
	var_325_string = "d4q01_theater_key"; // 0x1e7b PushS
	var_326_int = 1; // 0x1e7c PushI
	RemoveItemByType(var_278_int, var_325_string, var_326_int); // 0x1e7d ObjFunc
	var_327_string = ""; var_328_bool = 0; // 0x1e7f PushV
	var_327_string = "theater@door1"; // 0x1e80 MovS
	var_328_bool = 1; // 0x1e81 MovB
	func_7328(var_327_string, var_328_bool); // 0x1e82 NEW_2
	var_337_string = ""; var_338_bool = 0; // 0x1e84 PushV
	var_337_string = "sobor@door1"; // 0x1e85 MovS
	var_338_bool = 1; // 0x1e86 MovB
	func_7328(var_337_string, var_338_bool); // 0x1e87 NEW_2
	return 6; // 0x1e89 Return
}


func_5627(var_0_object, var_842_int, var_843_object)
{
	var_845_object = Obj(); var_846_bool = 0; var_847_int = 0; var_848_bool = 0; var_849_object = Obj(); var_850_bool = 0; var_851_int = 0; var_852_bool = 0; // 0x15fb PushV
	var_0_object = var_843_object; // 0x15fc TMov
	var_853_bool = 0; var_854_object = Obj(); var_855_float = 0; // 0x15fd PushV
	var_854_object = var_843_object; // 0x15fe Mov
	var_855_float = 70.0; // 0x15ff MovF
	func_7031(var_854_object, var_855_float); // 0x1600 NEW_2
	var_856_bool = var_853_bool == 0; // 0x1602 Not
	if(var_856_bool == 0) goto Label_5638; // 0x1603 JumpB
	var_842_int = -2; // 0x1604 MovI
	return 8; // 0x1605 Return
	
Label_5638:
	CreateDialog(var_849_object); // 0x1606 Func
	var_857_int = 0; // 0x1608 PushV
	func_7405(var_857_int); // 0x1609 NEW_2
	SetNPCName(var_857_int); // 0x160b ObjFunc
	var_858_int = 0; // 0x160d PushV
	func_7403(var_858_int); // 0x160e NEW_2
	SetNPCDescription(var_858_int); // 0x1610 ObjFunc
	var_859_string = ""; // 0x1612 PushV
	func_7407(var_859_string); // 0x1613 NEW_2
	SetPhoto(var_859_string); // 0x1615 ObjFunc
	var_860_string = ""; // 0x1617 PushV
	func_7409(var_860_string); // 0x1618 NEW_2
	SetPhoto2(var_860_string); // 0x161a ObjFunc
	var_861_int = 0; // 0x161c PushV
	func_8886(var_861_int); // 0x161d NEW_2
	SetPlayerName(var_861_int); // 0x161f ObjFunc
	var_851_int = -1; // 0x1621 MovI
	IsOverrideActive(var_850_bool); // 0x1622 Func
	var_862_bool = var_850_bool; // 0x1624 Push
	if(var_862_bool == 0) goto Label_5672; // 0x1625 JumpB
	var_842_int = -2; // 0x1626 MovI
	return 8; // 0x1627 Return
	
Label_5672:
	DoDialog(var_849_object); // 0x1628 Func
	var_863_bool = 0; var_864_object = Obj(); // 0x162a PushV
	var_865_object = Obj(); // 0x162b PushV
	func_7307(var_865_object); // 0x162c NEW_2
	var_864_object = var_865_object; // 0x162d Mov
	func_7116(var_863_bool, var_864_object); // 0x162f NEW_2
	var_866_object = Obj(); var_867_object = Obj(); // 0x1631 PushV
	var_866_object = var_843_object; // 0x1632 Mov
	var_867_object = var_849_object; // 0x1633 Mov
	TaskCall(17); // 0x1634 TaskCall
	func_5708(var_868_object, var_869_object, var_870_string, var_871_bool, var_866_object, var_867_object); // 0x1635 NEW_2
	TaskReturn(); // 0x1636 TaskReturn
	IsDialogEnd(var_852_bool); // 0x1638 ObjFunc
	
Label_5690:
	var_902_bool = var_852_bool == 0; // 0x163a Not
	if(var_902_bool == 0) goto Label_5697; // 0x163b JumpB
	sync(); // 0x163c Func
	IsDialogEnd(var_852_bool); // 0x163e ObjFunc
	goto Label_5690; // 0x1640 Jump
	
Label_5697:
	var_903_object = Obj(); // 0x1641 PushV
	var_903_object = var_843_object; // 0x1642 Mov
	func_7099(); // 0x1643 NEW_2
	StopDialog(var_849_object); // 0x1645 Func
	GetReturnValue(var_851_int); // 0x1647 ObjFunc
	var_842_int = var_851_int; // 0x1649 Mov
	return 8; // 0x164a Return
}


