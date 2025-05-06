task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe0 PushI
	if(var_8_int == 0) goto Label_698; // 0xe1 JumpB
	func_835(); // 0xe3 Call
	var_10_int = 14074; // 0xe5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe6 Eq
	if(var_11_bool == 0) goto Label_237; // 0xe7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xe8 PushV
	var_12_object = var_1_object; // 0xe9 MovT
	var_13_object = var_0_object; // 0xea MovT
	func_904(); // 0xeb Call
	
Label_237:
	var_16_int = 14080; // 0xed PushI
	var_17_bool = var_7_bool == var_16_int; // 0xee Eq
	if(var_17_bool == 0) goto Label_245; // 0xef JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xf0 PushV
	var_18_object = var_1_object; // 0xf1 MovT
	var_19_object = var_0_object; // 0xf2 MovT
	func_895(); // 0xf3 Call
	
Label_245:
	var_47_int = 16589; // 0xf5 PushI
	var_48_bool = var_7_bool == var_47_int; // 0xf6 Eq
	if(var_48_bool == 0) goto Label_253; // 0xf7 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xf8 PushV
	var_49_object = var_1_object; // 0xf9 MovT
	var_50_object = var_0_object; // 0xfa MovT
	func_910(var_50_object); // 0xfb Call
	
Label_253:
	var_79_int = 14081; // 0xfd PushI
	var_80_bool = var_7_bool == var_79_int; // 0xfe Eq
	if(var_80_bool == 0) goto Label_261; // 0xff JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x100 PushV
	var_81_object = var_1_object; // 0x101 MovT
	var_82_object = var_0_object; // 0x102 MovT
	func_928(); // 0x103 Call
	
Label_261:
	var_85_int = 14054; // 0x105 PushI
	var_86_bool = var_6_int == var_85_int; // 0x106 Eq
	if(var_86_bool == 0) goto Label_370; // 0x107 JumpB
	var_87_bool = 0; // 0x108 PushV
	var_87_bool = 0; // 0x109 MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x10a PushV
	var_89_object = var_1_object; // 0x10b MovT
	func_934(var_89_object); // 0x10c Call
	if(var_88_bool == 0) goto Label_277; // 0x10e JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x10f PushV
	var_97_object = var_1_object; // 0x110 MovT
	func_946(var_97_object); // 0x111 Call
	if(var_96_bool == 0) goto Label_277; // 0x113 JumpB
	var_87_bool = 1; // 0x114 MovB
	
Label_277:
	if(var_87_bool == 0) goto Label_298; // 0x115 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x116 PushV
	var_102_object = var_1_object; // 0x117 MovT
	var_103_object = var_0_object; // 0x118 MovT
	func_889(); // 0x119 Call
	var_106_string = ""; // 0x11b PushV
	var_106_string = "Neutral"; // 0x11c MovS
	func_207(var_7_bool, var_106_string); // 0x11d Call
	var_121_int = 12853; // 0x11f PushI
	SetMessage(var_121_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_122_int = 12854; // 0x124 PushI
	var_123_int = 14056; // 0x125 PushI
	var_124_int = 14055; // 0x126 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_125_string = ""; // 0x12a PushV
	var_125_string = "Neutral"; // 0x12b MovS
	func_207(var_7_bool, var_125_string); // 0x12c Call
	var_126_int = 12871; // 0x12e PushI
	SetMessage(var_126_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_127_bool = 0; // 0x133 PushV
	var_127_bool = 0; // 0x134 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x135 PushV
	var_129_object = var_1_object; // 0x136 MovT
	func_958(var_129_object); // 0x137 Call
	if(var_128_bool == 0) goto Label_320; // 0x139 JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x13a PushV
	var_135_object = var_1_object; // 0x13b MovT
	func_970(var_135_object); // 0x13c Call
	if(var_134_bool == 0) goto Label_320; // 0x13e JumpB
	var_127_bool = 1; // 0x13f MovB
	
Label_320:
	if(var_127_bool == 0) goto Label_326; // 0x140 JumpB
	var_140_int = 12872; // 0x141 PushI
	var_141_int = 14075; // 0x142 PushI
	var_142_int = 14074; // 0x143 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x144 TObjFunc
	
Label_326:
	var_143_bool = 0; // 0x146 PushV
	var_143_bool = 0; // 0x147 MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x148 PushV
	var_145_object = var_1_object; // 0x149 MovT
	func_982(var_145_object); // 0x14a Call
	if(var_144_bool == 0) goto Label_339; // 0x14c JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x14d PushV
	var_151_object = var_1_object; // 0x14e MovT
	func_994(var_150_bool, var_151_object); // 0x14f Call
	if(var_150_bool == 0) goto Label_339; // 0x151 JumpB
	var_143_bool = 1; // 0x152 MovB
	
Label_339:
	if(var_143_bool == 0) goto Label_345; // 0x153 JumpB
	var_159_int = 15468; // 0x154 PushI
	var_160_int = 16586; // 0x155 PushI
	var_161_int = 16585; // 0x156 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x157 TObjFunc
	
Label_345:
	var_162_bool = 0; // 0x159 PushV
	var_162_bool = 0; // 0x15a MovB
	var_163_bool = 0; var_164_object = Obj(); // 0x15b PushV
	var_164_object = var_1_object; // 0x15c MovT
	func_1004(var_164_object); // 0x15d Call
	if(var_163_bool == 0) goto Label_358; // 0x15f JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x160 PushV
	var_170_object = var_1_object; // 0x161 MovT
	func_1016(var_170_object); // 0x162 Call
	if(var_169_bool == 0) goto Label_358; // 0x164 JumpB
	var_162_bool = 1; // 0x165 MovB
	
Label_358:
	if(var_162_bool == 0) goto Label_364; // 0x166 JumpB
	var_175_int = 12879; // 0x167 PushI
	var_176_int = 14082; // 0x168 PushI
	var_177_int = 14081; // 0x169 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x16a TObjFunc
	
Label_364:
	var_178_int = 12890; // 0x16c PushI
	var_179_int = -1; // 0x16d PushI
	var_180_int = 14092; // 0x16e PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_181_int = 14082; // 0x172 PushI
	var_182_bool = var_6_int == var_181_int; // 0x173 Eq
	if(var_182_bool == 0) goto Label_388; // 0x174 JumpB
	var_183_string = ""; // 0x175 PushV
	var_183_string = "Neutral"; // 0x176 MovS
	func_207(var_7_bool, var_183_string); // 0x177 Call
	var_184_int = 12880; // 0x179 PushI
	SetMessage(var_184_int); // 0x17a TObjFunc
	ClearReplies(); // 0x17c TObjFunc
	var_185_int = 12881; // 0x17e PushI
	var_186_int = 14084; // 0x17f PushI
	var_187_int = 14083; // 0x180 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_188_int = 14084; // 0x184 PushI
	var_189_bool = var_6_int == var_188_int; // 0x185 Eq
	if(var_189_bool == 0) goto Label_406; // 0x186 JumpB
	var_190_string = ""; // 0x187 PushV
	var_190_string = "Neutral"; // 0x188 MovS
	func_207(var_7_bool, var_190_string); // 0x189 Call
	var_191_int = 12882; // 0x18b PushI
	SetMessage(var_191_int); // 0x18c TObjFunc
	ClearReplies(); // 0x18e TObjFunc
	var_192_int = 12883; // 0x190 PushI
	var_193_int = 14086; // 0x191 PushI
	var_194_int = 14085; // 0x192 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_195_int = 14086; // 0x196 PushI
	var_196_bool = var_6_int == var_195_int; // 0x197 Eq
	if(var_196_bool == 0) goto Label_424; // 0x198 JumpB
	var_197_string = ""; // 0x199 PushV
	var_197_string = "Neutral"; // 0x19a MovS
	func_207(var_7_bool, var_197_string); // 0x19b Call
	var_198_int = 12884; // 0x19d PushI
	SetMessage(var_198_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_199_int = 12885; // 0x1a2 PushI
	var_200_int = 14088; // 0x1a3 PushI
	var_201_int = 14087; // 0x1a4 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_202_int = 14088; // 0x1a8 PushI
	var_203_bool = var_6_int == var_202_int; // 0x1a9 Eq
	if(var_203_bool == 0) goto Label_442; // 0x1aa JumpB
	var_204_string = ""; // 0x1ab PushV
	var_204_string = "Neutral"; // 0x1ac MovS
	func_207(var_7_bool, var_204_string); // 0x1ad Call
	var_205_int = 12886; // 0x1af PushI
	SetMessage(var_205_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_206_int = 12887; // 0x1b4 PushI
	var_207_int = 14090; // 0x1b5 PushI
	var_208_int = 14089; // 0x1b6 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_209_int = 14090; // 0x1ba PushI
	var_210_bool = var_6_int == var_209_int; // 0x1bb Eq
	if(var_210_bool == 0) goto Label_460; // 0x1bc JumpB
	var_211_string = ""; // 0x1bd PushV
	var_211_string = "Neutral"; // 0x1be MovS
	func_207(var_7_bool, var_211_string); // 0x1bf Call
	var_212_int = 12888; // 0x1c1 PushI
	SetMessage(var_212_int); // 0x1c2 TObjFunc
	ClearReplies(); // 0x1c4 TObjFunc
	var_213_int = 12889; // 0x1c6 PushI
	var_214_int = -1; // 0x1c7 PushI
	var_215_int = 14091; // 0x1c8 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1c9 TObjFunc
	return 0; // 0x1cb Return
	
Label_460:
	var_216_int = 16586; // 0x1cc PushI
	var_217_bool = var_6_int == var_216_int; // 0x1cd Eq
	if(var_217_bool == 0) goto Label_478; // 0x1ce JumpB
	var_218_string = ""; // 0x1cf PushV
	var_218_string = "Neutral"; // 0x1d0 MovS
	func_207(var_7_bool, var_218_string); // 0x1d1 Call
	var_219_int = 15469; // 0x1d3 PushI
	SetMessage(var_219_int); // 0x1d4 TObjFunc
	ClearReplies(); // 0x1d6 TObjFunc
	var_220_int = 15470; // 0x1d8 PushI
	var_221_int = 16588; // 0x1d9 PushI
	var_222_int = 16587; // 0x1da PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_223_int = 16588; // 0x1de PushI
	var_224_bool = var_6_int == var_223_int; // 0x1df Eq
	if(var_224_bool == 0) goto Label_496; // 0x1e0 JumpB
	var_225_string = ""; // 0x1e1 PushV
	var_225_string = "Neutral"; // 0x1e2 MovS
	func_207(var_7_bool, var_225_string); // 0x1e3 Call
	var_226_int = 15471; // 0x1e5 PushI
	SetMessage(var_226_int); // 0x1e6 TObjFunc
	ClearReplies(); // 0x1e8 TObjFunc
	var_227_int = 15472; // 0x1ea PushI
	var_228_int = -1; // 0x1eb PushI
	var_229_int = 16589; // 0x1ec PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_230_int = 14075; // 0x1f0 PushI
	var_231_bool = var_6_int == var_230_int; // 0x1f1 Eq
	if(var_231_bool == 0) goto Label_514; // 0x1f2 JumpB
	var_232_string = ""; // 0x1f3 PushV
	var_232_string = "Neutral"; // 0x1f4 MovS
	func_207(var_7_bool, var_232_string); // 0x1f5 Call
	var_233_int = 12873; // 0x1f7 PushI
	SetMessage(var_233_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_234_int = 12874; // 0x1fc PushI
	var_235_int = 14077; // 0x1fd PushI
	var_236_int = 14076; // 0x1fe PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x1ff TObjFunc
	return 0; // 0x201 Return
	
Label_514:
	var_237_int = 14077; // 0x202 PushI
	var_238_bool = var_6_int == var_237_int; // 0x203 Eq
	if(var_238_bool == 0) goto Label_532; // 0x204 JumpB
	var_239_string = ""; // 0x205 PushV
	var_239_string = "Neutral"; // 0x206 MovS
	func_207(var_7_bool, var_239_string); // 0x207 Call
	var_240_int = 12875; // 0x209 PushI
	SetMessage(var_240_int); // 0x20a TObjFunc
	ClearReplies(); // 0x20c TObjFunc
	var_241_int = 12876; // 0x20e PushI
	var_242_int = 14079; // 0x20f PushI
	var_243_int = 14078; // 0x210 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x211 TObjFunc
	return 0; // 0x213 Return
	
Label_532:
	var_244_int = 14079; // 0x214 PushI
	var_245_bool = var_6_int == var_244_int; // 0x215 Eq
	if(var_245_bool == 0) goto Label_550; // 0x216 JumpB
	var_246_string = ""; // 0x217 PushV
	var_246_string = "Neutral"; // 0x218 MovS
	func_207(var_7_bool, var_246_string); // 0x219 Call
	var_247_int = 12877; // 0x21b PushI
	SetMessage(var_247_int); // 0x21c TObjFunc
	ClearReplies(); // 0x21e TObjFunc
	var_248_int = 12878; // 0x220 PushI
	var_249_int = -1; // 0x221 PushI
	var_250_int = 14080; // 0x222 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x223 TObjFunc
	return 0; // 0x225 Return
	
Label_550:
	var_251_int = 14056; // 0x226 PushI
	var_252_bool = var_6_int == var_251_int; // 0x227 Eq
	if(var_252_bool == 0) goto Label_568; // 0x228 JumpB
	var_253_string = ""; // 0x229 PushV
	var_253_string = "Neutral"; // 0x22a MovS
	func_207(var_7_bool, var_253_string); // 0x22b Call
	var_254_int = 12855; // 0x22d PushI
	SetMessage(var_254_int); // 0x22e TObjFunc
	ClearReplies(); // 0x230 TObjFunc
	var_255_int = 12856; // 0x232 PushI
	var_256_int = 14058; // 0x233 PushI
	var_257_int = 14057; // 0x234 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_258_int = 14058; // 0x238 PushI
	var_259_bool = var_6_int == var_258_int; // 0x239 Eq
	if(var_259_bool == 0) goto Label_596; // 0x23a JumpB
	var_260_string = ""; // 0x23b PushV
	var_260_string = "Neutral"; // 0x23c MovS
	func_207(var_7_bool, var_260_string); // 0x23d Call
	var_261_int = 12857; // 0x23f PushI
	SetMessage(var_261_int); // 0x240 TObjFunc
	ClearReplies(); // 0x242 TObjFunc
	var_262_int = 12858; // 0x244 PushI
	var_263_int = 14061; // 0x245 PushI
	var_264_int = 14059; // 0x246 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x247 TObjFunc
	var_265_int = 12859; // 0x249 PushI
	var_266_int = 14064; // 0x24a PushI
	var_267_int = 14060; // 0x24b PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x24c TObjFunc
	var_268_int = 12868; // 0x24e PushI
	var_269_int = 14070; // 0x24f PushI
	var_270_int = 14069; // 0x250 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_271_int = 14064; // 0x254 PushI
	var_272_bool = var_6_int == var_271_int; // 0x255 Eq
	if(var_272_bool == 0) goto Label_614; // 0x256 JumpB
	var_273_string = ""; // 0x257 PushV
	var_273_string = "Neutral"; // 0x258 MovS
	func_207(var_7_bool, var_273_string); // 0x259 Call
	var_274_int = 12863; // 0x25b PushI
	SetMessage(var_274_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_275_int = 12864; // 0x260 PushI
	var_276_int = -1; // 0x261 PushI
	var_277_int = 14065; // 0x262 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x263 TObjFunc
	return 0; // 0x265 Return
	
Label_614:
	var_278_int = 14061; // 0x266 PushI
	var_279_bool = var_6_int == var_278_int; // 0x267 Eq
	if(var_279_bool == 0) goto Label_632; // 0x268 JumpB
	var_280_string = ""; // 0x269 PushV
	var_280_string = "Neutral"; // 0x26a MovS
	func_207(var_7_bool, var_280_string); // 0x26b Call
	var_281_int = 12860; // 0x26d PushI
	SetMessage(var_281_int); // 0x26e TObjFunc
	ClearReplies(); // 0x270 TObjFunc
	var_282_int = 12861; // 0x272 PushI
	var_283_int = 14063; // 0x273 PushI
	var_284_int = 14062; // 0x274 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x275 TObjFunc
	return 0; // 0x277 Return
	
Label_632:
	var_285_int = 14063; // 0x278 PushI
	var_286_bool = var_6_int == var_285_int; // 0x279 Eq
	if(var_286_bool == 0) goto Label_650; // 0x27a JumpB
	var_287_string = ""; // 0x27b PushV
	var_287_string = "Neutral"; // 0x27c MovS
	func_207(var_7_bool, var_287_string); // 0x27d Call
	var_288_int = 12862; // 0x27f PushI
	SetMessage(var_288_int); // 0x280 TObjFunc
	ClearReplies(); // 0x282 TObjFunc
	var_289_int = 12865; // 0x284 PushI
	var_290_int = 14067; // 0x285 PushI
	var_291_int = 14066; // 0x286 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x287 TObjFunc
	return 0; // 0x289 Return
	
Label_650:
	var_292_int = 14067; // 0x28a PushI
	var_293_bool = var_6_int == var_292_int; // 0x28b Eq
	if(var_293_bool == 0) goto Label_668; // 0x28c JumpB
	var_294_string = ""; // 0x28d PushV
	var_294_string = "Neutral"; // 0x28e MovS
	func_207(var_7_bool, var_294_string); // 0x28f Call
	var_295_int = 12866; // 0x291 PushI
	SetMessage(var_295_int); // 0x292 TObjFunc
	ClearReplies(); // 0x294 TObjFunc
	var_296_int = 12867; // 0x296 PushI
	var_297_int = 14070; // 0x297 PushI
	var_298_int = 14068; // 0x298 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x299 TObjFunc
	return 0; // 0x29b Return
	
Label_668:
	var_299_int = 14070; // 0x29c PushI
	var_300_bool = var_6_int == var_299_int; // 0x29d Eq
	if(var_300_bool == 0) goto Label_686; // 0x29e JumpB
	var_301_string = ""; // 0x29f PushV
	var_301_string = "Neutral"; // 0x2a0 MovS
	func_207(var_7_bool, var_301_string); // 0x2a1 Call
	var_302_int = 12869; // 0x2a3 PushI
	SetMessage(var_302_int); // 0x2a4 TObjFunc
	ClearReplies(); // 0x2a6 TObjFunc
	var_303_int = 12870; // 0x2a8 PushI
	var_304_int = -1; // 0x2a9 PushI
	var_305_int = 14072; // 0x2aa PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x2ab TObjFunc
	return 0; // 0x2ad Return
	
Label_686:
	var_3_string = 1; // 0x2ae TMovB
	var_306_bool = 0; // 0x2af PushV
	func_1134(var_306_bool); // 0x2b0 Call
	if(var_306_bool == 0) goto Label_694; // 0x2b2 JumpB
	lshStopAnimation(); // 0x2b3 Func
	goto Label_696; // 0x2b5 Jump
	
Label_696:
	return 0; // 0x2b8 Return
	
Label_694:
	StopAnimation(); // 0x2b6 Func
	
Label_698:
	return 0; // 0x2ba Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x2bc PushV
	var_8_object = var_6_object; // 0x2bd Mov
	TaskCall(0); // 0x2be TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x2bf Call
	TaskReturn(); // 0x2c0 TaskReturn
	return 0; // 0x2c2 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x2c7 PushV
	var_9_string = "cleanup"; // 0x2c8 PushS
	var_10_bool = var_6_string == var_9_string; // 0x2c9 Eq
	if(var_10_bool == 0) goto Label_734; // 0x2ca JumpB
	var_0_object = 1; // 0x2cb TMovB
	IsLoaded(var_8_bool); // 0x2cc Func
	var_11_bool = 0; // 0x2ce PushV
	var_11_bool = 0; // 0x2cf MovB
	var_12_bool = var_8_bool == 0; // 0x2d0 Not
	if(var_12_bool == 0) goto Label_727; // 0x2d1 JumpB
	var_13_bool = 0; // 0x2d2 PushV
	func_755(var_13_bool); // 0x2d3 Call
	if(var_13_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_11_bool = 1; // 0x2d6 MovB
	
Label_727:
	if(var_11_bool == 0) goto Label_733; // 0x2d7 JumpB
	var_14_object = Obj(); // 0x2d8 PushV
	func_842(var_14_object); // 0x2d9 Call
	RemoveActor(var_14_object); // 0x2db Func
	
Label_733:
	goto Label_738; // 0x2dd Jump
	
Label_738:
	return 2; // 0x2e2 Return
	
Label_734:
	var_17_string = "restore"; // 0x2de PushS
	var_18_bool = var_6_string == var_17_string; // 0x2df Eq
	if(var_18_bool == 0) goto Label_738; // 0x2e0 JumpB
	var_0_object = 0; // 0x2e1 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x2e3 PushV
	var_6_bool = 0; // 0x2e4 MovB
	var_7_object = var_0_object; // 0x2e5 PushT
	if(var_7_object == 0) goto Label_748; // 0x2e6 JumpB
	var_8_bool = 0; // 0x2e7 PushV
	func_755(var_8_bool); // 0x2e8 Call
	if(var_8_bool == 0) goto Label_748; // 0x2ea JumpB
	var_6_bool = 1; // 0x2eb MovB
	
Label_748:
	if(var_6_bool == 0) goto Label_754; // 0x2ec JumpB
	var_9_object = Obj(); // 0x2ed PushV
	func_842(var_9_object); // 0x2ee Call
	RemoveActor(var_9_object); // 0x2f0 Func
	
Label_754:
	return 0; // 0x2f2 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_707:
	Hold(); // 0x2c3 Func
	goto Label_707; // 0x2c5 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_757(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_1130(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_1132(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_1081(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_179_bool = var_17_bool == 0; // 0x2d Not
	if(var_179_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_180_object = Obj(); // 0x34 PushV
	var_180_object = var_8_object; // 0x35 Mov
	func_813(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1028(var_150_bool)
{
	var_152_int = 0; var_153_int = 0; // 0x404 PushV
	var_154_string = "tvirin"; // 0x405 PushS
	GetItemCountOfType(var_153_int, var_154_string); // 0x406 ObjFunc
	var_155_int = 5; // 0x408 PushI
	var_156_bool = var_153_int >= var_155_int; // 0x409 GE
	if(var_156_bool == 0) goto Label_1037; // 0x40a JumpB
	var_150_bool = 1; // 0x40b MovB
	return 2; // 0x40c Return
	
Label_1037:
	var_150_bool = 0; // 0x40d MovB
	return 2; // 0x40e Return
}


func_904()
{
	var_14_string = "ood10Petr2"; // 0x389 PushS
	var_15_int = 1; // 0x38a PushI
	SetVariable(var_14_string, var_15_int); // 0x38b Func
	return 0; // 0x38d Return
}


func_910(var_49_object)
{
	var_51_string = "d10q01"; // 0x38f PushS
	var_52_int = 3; // 0x390 PushI
	SetVariable(var_51_string, var_52_int); // 0x391 Func
	func_1114(); // 0x394 Call
	var_62_string = "blueprint is given"; // 0x396 PushS
	Trace(var_62_string); // 0x397 Func
	var_63_object = Obj(); var_64_string = ""; var_65_int = 0; // 0x399 PushV
	var_63_object = var_49_object; // 0x39a Mov
	var_64_string = "d10q01_blueprint"; // 0x39b MovS
	var_65_int = 1; // 0x39c MovI
	func_876(var_63_object, var_64_string, var_65_int); // 0x39d Call
	return 0; // 0x39f Return
}


func_1039(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x40f PushV
	GetDiaryRoot(var_39_object); // 0x410 Func
	var_40_bool = var_39_object == 0; // 0x412 Not
	if(var_40_bool == 0) goto Label_1049; // 0x413 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x414 PushS
	Trace(var_41_string); // 0x415 Func
	var_37_object = 0; // 0x417 MovB
	return 2; // 0x418 Return
	
Label_1049:
	var_37_object = var_39_object; // 0x419 Mov
	return 2; // 0x41a Return
}


func_1052(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x41c PushV
	var_37_object = Obj(); // 0x41d PushV
	func_1039(var_37_object); // 0x41e Call
	var_34_object = var_37_object; // 0x41f Mov
	Find(var_30_int, var_35_object); // 0x421 ObjFunc
	var_42_bool = var_35_object == 0; // 0x423 Not
	if(var_42_bool == 0) goto Label_1067; // 0x424 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x425 PushS
	var_44_int = var_43_string + var_30_int; // 0x426 Add
	Trace(var_44_int); // 0x427 Func
	var_28_bool = 0; // 0x429 MovB
	return 6; // 0x42a Return
	
Label_1067:
	AddChild(var_29_object); // 0x42b ObjFunc
	var_45_string = "player_diary"; // 0x42d PushS
	var_46_int = 1; // 0x42e PushI
	SetVariable(var_45_string, var_46_int); // 0x42f Func
	GetCategory(var_36_int); // 0x431 ObjFunc
	SetDiarySection(var_36_int); // 0x433 Func
	var_28_bool = 0; // 0x435 MovB
	return 6; // 0x436 Return
}


func_928()
{
	var_83_string = "ood10Petr3"; // 0x3a1 PushS
	var_84_int = 1; // 0x3a2 PushI
	SetVariable(var_83_string, var_84_int); // 0x3a3 Func
	return 0; // 0x3a5 Return
}


func_934(var_78_bool)
{
	var_80_int = 0; var_81_string = ""; // 0x3a7 PushV
	var_81_string = "ood10Petr1"; // 0x3a8 MovS
	func_858(var_80_int, var_81_string); // 0x3a9 Call
	var_84_int = 0; // 0x3ab PushI
	var_85_bool = var_80_int == var_84_int; // 0x3ac Eq
	if(var_85_bool == 0) goto Label_944; // 0x3ad JumpB
	var_78_bool = 1; // 0x3ae MovB
	return 0; // 0x3af Return
	
Label_944:
	var_78_bool = 0; // 0x3b0 MovB
	return 0; // 0x3b1 Return
}


func_813()
{
	CameraSwitchToNormal(); // 0x32e Func
	return 0; // 0x330 Return
}


func_817(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x331 PushV
	var_105_string = "playing "; // 0x332 PushS
	var_106_int = var_105_string + var_100_string; // 0x333 Add
	Trace(var_106_int); // 0x334 Func
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float); // 0x336 Func
	lshPlayAnimation(var_103_float, var_104_float); // 0x338 Func
	var_107_string = "start: "; // 0x33a PushS
	var_108_int = var_107_string + var_103_float; // 0x33b Add
	Trace(var_108_int); // 0x33c Func
	var_109_string = "end: "; // 0x33e PushS
	var_110_int = var_109_string + var_104_float; // 0x33f Add
	Trace(var_110_int); // 0x340 Func
	return 4; // 0x342 Return
}


func_946(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x3b3 PushV
	var_89_string = "d10q01MariaSavePetr"; // 0x3b4 MovS
	func_858(var_88_int, var_89_string); // 0x3b5 Call
	var_90_int = 1; // 0x3b7 PushI
	var_91_bool = var_88_int == var_90_int; // 0x3b8 Eq
	if(var_91_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_86_bool = 1; // 0x3ba MovB
	return 0; // 0x3bb Return
	
Label_956:
	var_86_bool = 0; // 0x3bc MovB
	return 0; // 0x3bd Return
}


func_1081(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x439 PushV
	var_64_string = "player"; // 0x43a PushS
	GetVariable(var_64_string, var_63_int); // 0x43b Func
	var_65_int = 0; // 0x43d PushI
	var_66_bool = var_63_int == var_65_int; // 0x43e Eq
	if(var_66_bool == 0) goto Label_1091; // 0x43f JumpB
	var_61_int = 200001; // 0x440 MovI
	return 2; // 0x441 Return
	
Label_1091:
	var_67_int = 1; // 0x443 PushI
	var_68_bool = var_63_int == var_67_int; // 0x444 Eq
	if(var_68_bool == 0) goto Label_1096; // 0x445 JumpB
	var_61_int = 200002; // 0x446 MovI
	return 2; // 0x447 Return
	
Label_1096:
	var_61_int = 200003; // 0x448 MovI
	return 2; // 0x449 Return
}


func_958(var_126_bool)
{
	var_128_int = 0; var_129_string = ""; // 0x3bf PushV
	var_129_string = "d10q01"; // 0x3c0 MovS
	func_858(var_128_int, var_129_string); // 0x3c1 Call
	var_130_int = 1; // 0x3c3 PushI
	var_131_bool = var_128_int == var_130_int; // 0x3c4 Eq
	if(var_131_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_126_bool = 1; // 0x3c6 MovB
	return 0; // 0x3c7 Return
	
Label_968:
	var_126_bool = 0; // 0x3c8 MovB
	return 0; // 0x3c9 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_177; // 0x44 JumpB
	var_77_bool = 0; // 0x45 PushV
	var_77_bool = 0; // 0x46 MovB
	var_78_bool = 0; var_79_object = Obj(); // 0x47 PushV
	var_79_object = var_1_object; // 0x48 MovT
	func_934(var_79_object); // 0x49 Call
	if(var_78_bool == 0) goto Label_82; // 0x4b JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x4c PushV
	var_87_object = var_1_object; // 0x4d MovT
	func_946(var_87_object); // 0x4e Call
	if(var_86_bool == 0) goto Label_82; // 0x50 JumpB
	var_77_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_77_bool == 0) goto Label_103; // 0x52 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x53 PushV
	var_92_object = var_1_object; // 0x54 MovT
	var_93_object = var_0_object; // 0x55 MovT
	func_889(); // 0x56 Call
	var_96_string = ""; // 0x58 PushV
	var_96_string = "Neutral"; // 0x59 MovS
	func_207(var_71_object, var_96_string); // 0x5a Call
	var_111_int = 12853; // 0x5c PushI
	SetMessage(var_111_int); // 0x5d TObjFunc
	ClearReplies(); // 0x5f TObjFunc
	var_112_int = 12854; // 0x61 PushI
	var_113_int = 14056; // 0x62 PushI
	var_114_int = 14055; // 0x63 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x64 TObjFunc
	goto Label_177; // 0x66 Jump
	
Label_177:
	var_115_bool = 0; // 0xb1 PushV
	func_1134(var_115_bool); // 0xb2 Call
	if(var_115_bool == 0) goto Label_192; // 0xb4 JumpB
	
Label_181:
	lshWaitForAnimEnd(); // 0xb5 Func
	var_116_string = var_3_string; // 0xb7 PushT
	if(var_116_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_191:
	goto Label_206; // 0xbf Jump
	
Label_206:
	return 0; // 0xce Return
	
Label_186:
	var_117_string = ""; // 0xba PushV
	var_117_string = var_2_object; // 0xbb MovT
	func_817(var_117_string); // 0xbc Call
	goto Label_181; // 0xbe Jump
	
Label_192:
	var_118_string = "all"; // 0xc0 PushS
	var_119_string = "idle"; // 0xc1 PushS
	PlayAnimation(var_118_string, var_119_string); // 0xc2 Func
	
Label_196:
	WaitForAnimEnd(); // 0xc4 Func
	var_120_string = var_3_string; // 0xc6 PushT
	if(var_120_string == 0) goto Label_201; // 0xc7 JumpB
	goto Label_206; // 0xc8 Jump
	
Label_201:
	var_121_string = "all"; // 0xc9 PushS
	var_122_string = "idle"; // 0xca PushS
	PlayAnimation(var_121_string, var_122_string); // 0xcb Func
	goto Label_196; // 0xcd Jump
	
Label_103:
	var_123_string = ""; // 0x67 PushV
	var_123_string = "Neutral"; // 0x68 MovS
	func_207(var_71_object, var_123_string); // 0x69 Call
	var_124_int = 12871; // 0x6b PushI
	SetMessage(var_124_int); // 0x6c TObjFunc
	ClearReplies(); // 0x6e TObjFunc
	var_125_bool = 0; // 0x70 PushV
	var_125_bool = 0; // 0x71 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x72 PushV
	var_127_object = var_1_object; // 0x73 MovT
	func_958(var_127_object); // 0x74 Call
	if(var_126_bool == 0) goto Label_125; // 0x76 JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x77 PushV
	var_133_object = var_1_object; // 0x78 MovT
	func_970(var_133_object); // 0x79 Call
	if(var_132_bool == 0) goto Label_125; // 0x7b JumpB
	var_125_bool = 1; // 0x7c MovB
	
Label_125:
	if(var_125_bool == 0) goto Label_131; // 0x7d JumpB
	var_138_int = 12872; // 0x7e PushI
	var_139_int = 14075; // 0x7f PushI
	var_140_int = 14074; // 0x80 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x81 TObjFunc
	
Label_131:
	var_141_bool = 0; // 0x83 PushV
	var_141_bool = 0; // 0x84 MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x85 PushV
	var_143_object = var_1_object; // 0x86 MovT
	func_982(var_143_object); // 0x87 Call
	if(var_142_bool == 0) goto Label_144; // 0x89 JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x8a PushV
	var_149_object = var_1_object; // 0x8b MovT
	func_994(var_148_bool, var_149_object); // 0x8c Call
	if(var_148_bool == 0) goto Label_144; // 0x8e JumpB
	var_141_bool = 1; // 0x8f MovB
	
Label_144:
	if(var_141_bool == 0) goto Label_150; // 0x90 JumpB
	var_157_int = 15468; // 0x91 PushI
	var_158_int = 16586; // 0x92 PushI
	var_159_int = 16585; // 0x93 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x94 TObjFunc
	
Label_150:
	var_160_bool = 0; // 0x96 PushV
	var_160_bool = 0; // 0x97 MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x98 PushV
	var_162_object = var_1_object; // 0x99 MovT
	func_1004(var_162_object); // 0x9a Call
	if(var_161_bool == 0) goto Label_163; // 0x9c JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x9d PushV
	var_168_object = var_1_object; // 0x9e MovT
	func_1016(var_168_object); // 0x9f Call
	if(var_167_bool == 0) goto Label_163; // 0xa1 JumpB
	var_160_bool = 1; // 0xa2 MovB
	
Label_163:
	if(var_160_bool == 0) goto Label_169; // 0xa3 JumpB
	var_173_int = 12879; // 0xa4 PushI
	var_174_int = 14082; // 0xa5 PushI
	var_175_int = 14081; // 0xa6 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xa7 TObjFunc
	
Label_169:
	var_176_int = 12890; // 0xa9 PushI
	var_177_int = -1; // 0xaa PushI
	var_178_int = 14092; // 0xab PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xac TObjFunc
	goto Label_177; // 0xae Jump
}


func_835()
{
	var_9_bool = 0; // 0x343 PushV
	func_1134(var_9_bool); // 0x344 Call
	if(var_9_bool == 0) goto Label_841; // 0x346 JumpB
	lshStopSpeech(); // 0x347 Func
	
Label_841:
	return 0; // 0x349 Return
}


func_970(var_132_bool)
{
	var_134_int = 0; var_135_string = ""; // 0x3cb PushV
	var_135_string = "ood10Petr2"; // 0x3cc MovS
	func_858(var_134_int, var_135_string); // 0x3cd Call
	var_136_int = 0; // 0x3cf PushI
	var_137_bool = var_134_int == var_136_int; // 0x3d0 Eq
	if(var_137_bool == 0) goto Label_980; // 0x3d1 JumpB
	var_132_bool = 1; // 0x3d2 MovB
	return 0; // 0x3d3 Return
	
Label_980:
	var_132_bool = 0; // 0x3d4 MovB
	return 0; // 0x3d5 Return
}


func_842(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x34a PushV
	self(var_11_object); // 0x34b Func
	var_9_object = var_11_object; // 0x34d Mov
	return 2; // 0x34e Return
}


func_1098()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x44a PushV
	var_24_string = "Adding diary entry"; // 0x44b PushS
	Trace(var_24_string); // 0x44c Func
	var_25_int = 189; // 0x44e PushI
	var_26_int = 1; // 0x44f PushI
	var_27_int = 15474; // 0x450 PushI
	CreateDiaryEntry(var_23_object, var_25_int, var_26_int, var_27_int); // 0x451 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x453 PushV
	var_29_object = var_23_object; // 0x454 Mov
	var_30_int = 186; // 0x455 MovI
	func_1052(var_28_bool, var_29_object, var_30_int); // 0x456 Call
	return 2; // 0x458 Return
}


func_207(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0xd0 PushV
	func_1134(var_97_bool); // 0xd1 Call
	var_98_bool = var_97_bool == 0; // 0xd3 Not
	if(var_98_bool == 0) goto Label_214; // 0xd4 JumpB
	return 0; // 0xd5 Return
	
Label_214:
	var_99_bool = var_96_string == var_2_object; // 0xd6 Eq
	if(var_99_bool == 0) goto Label_217; // 0xd7 JumpB
	return 0; // 0xd8 Return
	
Label_217:
	var_100_string = ""; // 0xd9 PushV
	var_100_string = var_96_string; // 0xda Mov
	func_817(var_100_string); // 0xdb Call
	var_2_object = var_96_string; // 0xdd TMov
	return 0; // 0xde Return
}


func_848(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x350 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x351 Or
	var_47_float = sqrt(var_48_int); // 0x352 Sqrt2
	var_49_float = 0.0; // 0x353 PushF
	var_50_bool = var_47_float < var_49_float; // 0x354 LT
	if(var_50_bool == 0) goto Label_856; // 0x355 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x356 MovV
	return 2; // 0x357 Return
	
Label_856:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x358 Div2
	return 2; // 0x359 Return
}


func_982(var_142_bool)
{
	var_144_int = 0; var_145_string = ""; // 0x3d7 PushV
	var_145_string = "d10q01"; // 0x3d8 MovS
	func_858(var_144_int, var_145_string); // 0x3d9 Call
	var_146_int = 2; // 0x3db PushI
	var_147_bool = var_144_int == var_146_int; // 0x3dc Eq
	if(var_147_bool == 0) goto Label_992; // 0x3dd JumpB
	var_142_bool = 1; // 0x3de MovB
	return 0; // 0x3df Return
	
Label_992:
	var_142_bool = 0; // 0x3e0 MovB
	return 0; // 0x3e1 Return
}


func_1114()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x45a PushV
	var_55_string = "Adding diary entry"; // 0x45b PushS
	Trace(var_55_string); // 0x45c Func
	var_56_int = 190; // 0x45e PushI
	var_57_int = 1; // 0x45f PushI
	var_58_int = 15475; // 0x460 PushI
	CreateDiaryEntry(var_54_object, var_56_int, var_57_int, var_58_int); // 0x461 Func
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; // 0x463 PushV
	var_60_object = var_54_object; // 0x464 Mov
	var_61_int = 186; // 0x465 MovI
	func_1052(var_59_bool, var_60_object, var_61_int); // 0x466 Call
	return 2; // 0x468 Return
}


func_858(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0; // 0x35a PushV
	GetVariable(var_81_string, var_83_int); // 0x35b Func
	var_80_int = var_83_int; // 0x35d Mov
	return 2; // 0x35e Return
}


func_863(var_69_object, var_70_int)
{
	var_71_int = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; // 0x35f PushV
	GetItemID(var_74_int); // 0x360 ObjFunc
	var_77_string = "Category"; // 0x362 PushS
	GetInvItemProperty(var_75_int, var_74_int, var_77_string); // 0x363 Func
	AddItem(var_76_bool, var_69_object, var_75_int, var_70_int); // 0x365 ObjFunc
	var_78_bool = var_76_bool == 0; // 0x367 Not
	if(var_78_bool == 0) goto Label_875; // 0x368 JumpB
	DropItems(var_69_object, var_70_int); // 0x369 ObjFunc
	
Label_875:
	return 6; // 0x36b Return
}


func_994(var_148_bool, var_149_object)
{
	var_150_bool = 0; var_151_object = Obj(); // 0x3e3 PushV
	var_151_object = var_149_object; // 0x3e4 Mov
	func_1028(var_151_object); // 0x3e5 Call
	if(var_150_bool == 0) goto Label_1002; // 0x3e7 JumpB
	var_148_bool = 1; // 0x3e8 MovB
	return 0; // 0x3e9 Return
	
Label_1002:
	var_148_bool = 0; // 0x3ea MovB
	return 0; // 0x3eb Return
}


func_1130(var_59_int)
{
	var_59_int = 4029; // 0x46a MovI
	return 0; // 0x46b Return
}


func_1132(var_60_string)
{
	var_60_string = "ui/NPC_Black.png"; // 0x46c MovS
	return 0; // 0x46d Return
}


func_1004(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0x3ed PushV
	var_164_string = "d10q01"; // 0x3ee MovS
	func_858(var_163_int, var_164_string); // 0x3ef Call
	var_165_int = 3; // 0x3f1 PushI
	var_166_bool = var_163_int == var_165_int; // 0x3f2 Eq
	if(var_166_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_161_bool = 1; // 0x3f4 MovB
	return 0; // 0x3f5 Return
	
Label_1014:
	var_161_bool = 0; // 0x3f6 MovB
	return 0; // 0x3f7 Return
}


func_1134(var_97_bool)
{
	var_97_bool = 0; // 0x46e MovB
	return 0; // 0x46f Return
}


func_876(var_63_object, var_64_string, var_65_int)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x36c PushV
	CreateInvItem(var_67_object); // 0x36d Func
	SetItemName(var_64_string); // 0x36f ObjFunc
	var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0x371 PushV
	var_68_object = var_63_object; // 0x372 Mov
	var_69_object = var_67_object; // 0x373 Mov
	var_70_int = var_65_int; // 0x374 Mov
	func_863(var_69_object, var_70_int); // 0x375 Call
	return 2; // 0x377 Return
}


func_755(var_8_bool)
{
	var_8_bool = 1; // 0x2f3 MovB
	return 0; // 0x2f4 Return
}


func_757(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x2f5 PushV
	GetPosition(var_29_cvector); // 0x2f6 ObjFunc
	GetEyesHeight(var_28_float); // 0x2f8 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x2fa PushE
	var_36_float = var_36_float + var_28_float; // 0x2fb Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x2fc PopE
	GetPosition(var_30_cvector); // 0x2fd Func
	GetEyesHeight(var_28_float); // 0x2ff Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x301 PushE
	var_37_float = var_37_float + var_28_float; // 0x302 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x303 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x304 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x305 PushE
	var_38_float = 0; // 0x306 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x307 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x308 Or
	var_40_float = sqrt(var_39_int); // 0x309 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x30a Div2
	var_32_cvector = -var_31_cvector; // 0x30b Neg2
	var_41_int = 70; // 0x30c PushI
	var_42_float = var_31_cvector * var_41_int; // 0x30d Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x30e PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x30f PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x310 Xor2
	func_848(var_43_cvector, var_44_cvector); // 0x311 Call
	var_51_int = 25; // 0x313 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x314 Mult
	var_53_int = var_42_float + var_52_float; // 0x315 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x316 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x317 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x318 Add2
	IsOverrideActive(var_35_bool); // 0x319 Func
	var_55_bool = var_35_bool; // 0x31b Push
	if(var_55_bool == 0) goto Label_799; // 0x31c JumpB
	var_18_bool = 0; // 0x31d MovB
	return 16; // 0x31e Return
	
Label_799:
	StopWorld(); // 0x31f Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x321 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x323 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x324 PushE
	Rotate(var_56_float, var_57_float); // 0x325 Func
	CameraWaitForPlayFinish(); // 0x327 Func
	ResumeWorld(); // 0x329 Func
	var_18_bool = 1; // 0x32b MovB
	return 16; // 0x32c Return
}


func_1016(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x3f9 PushV
	var_170_string = "ood10Petr3"; // 0x3fa MovS
	func_858(var_169_int, var_170_string); // 0x3fb Call
	var_171_int = 0; // 0x3fd PushI
	var_172_bool = var_169_int == var_171_int; // 0x3fe Eq
	if(var_172_bool == 0) goto Label_1026; // 0x3ff JumpB
	var_167_bool = 1; // 0x400 MovB
	return 0; // 0x401 Return
	
Label_1026:
	var_167_bool = 0; // 0x402 MovB
	return 0; // 0x403 Return
}


func_889()
{
	var_94_string = "ood10Petr1"; // 0x37a PushS
	var_95_int = 1; // 0x37b PushI
	SetVariable(var_94_string, var_95_int); // 0x37c Func
	return 0; // 0x37e Return
}


func_895()
{
	var_20_string = "d10q01"; // 0x380 PushS
	var_21_int = 2; // 0x381 PushI
	SetVariable(var_20_string, var_21_int); // 0x382 Func
	func_1098(); // 0x385 Call
	return 0; // 0x387 Return
}


