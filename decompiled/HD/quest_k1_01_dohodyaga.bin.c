task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xf3 PushI
	if(var_12_int == 0) goto Label_664; // 0xf4 JumpB
	func_993(); // 0xf6 NEW_2
	var_14_int = 28060; // 0xf8 PushI
	var_15_bool = var_11_object == var_14_int; // 0xf9 Eq
	if(var_15_bool == 0) goto Label_261; // 0xfa JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xfb PushV
	var_16_object = var_1_object; // 0xfc MovT
	var_17_object = var_0_object; // 0xfd MovT
	func_1056(); // 0xfe NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0x100 PushV
	var_65_object = var_1_object; // 0x101 MovT
	var_66_object = var_0_object; // 0x102 MovT
	func_1086(); // 0x103 NEW_2
	
Label_261:
	var_97_int = 28061; // 0x105 PushI
	var_98_bool = var_11_object == var_97_int; // 0x106 Eq
	if(var_98_bool == 0) goto Label_274; // 0x107 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x108 PushV
	var_99_object = var_1_object; // 0x109 MovT
	var_100_object = var_0_object; // 0x10a MovT
	func_1056(); // 0x10b NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0x10d PushV
	var_101_object = var_1_object; // 0x10e MovT
	var_102_object = var_0_object; // 0x10f MovT
	func_1086(); // 0x110 NEW_2
	
Label_274:
	var_103_int = 28062; // 0x112 PushI
	var_104_bool = var_11_object == var_103_int; // 0x113 Eq
	if(var_104_bool == 0) goto Label_287; // 0x114 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x115 PushV
	var_105_object = var_1_object; // 0x116 MovT
	var_106_object = var_0_object; // 0x117 MovT
	func_1056(); // 0x118 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x11a PushV
	var_107_object = var_1_object; // 0x11b MovT
	var_108_object = var_0_object; // 0x11c MovT
	func_1086(); // 0x11d NEW_2
	
Label_287:
	var_109_int = 26008; // 0x11f PushI
	var_110_bool = var_11_object == var_109_int; // 0x120 Eq
	if(var_110_bool == 0) goto Label_295; // 0x121 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x122 PushV
	var_111_object = var_1_object; // 0x123 MovT
	var_112_object = var_0_object; // 0x124 MovT
	func_1056(); // 0x125 NEW_2
	
Label_295:
	var_113_int = 26011; // 0x127 PushI
	var_114_bool = var_10_bool == var_113_int; // 0x128 Eq
	if(var_114_bool == 0) goto Label_406; // 0x129 JumpB
	var_115_bool = 0; // 0x12a PushV
	var_115_bool = 0; // 0x12b MovB
	var_116_bool = 0; var_117_object = Obj(); // 0x12c PushV
	var_117_object = var_1_object; // 0x12d MovT
	func_1113(var_117_object); // 0x12e NEW_2
	if(var_116_bool == 0) goto Label_311; // 0x130 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x131 PushV
	var_123_object = var_1_object; // 0x132 MovT
	func_1125(var_123_object); // 0x133 NEW_2
	if(var_122_bool == 0) goto Label_311; // 0x135 JumpB
	var_115_bool = 1; // 0x136 MovB
	
Label_311:
	if(var_115_bool == 0) goto Label_337; // 0x137 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x138 PushV
	var_128_object = var_1_object; // 0x139 MovT
	var_129_object = var_0_object; // 0x13a MovT
	func_1044(); // 0x13b NEW_2
	var_132_string = ""; // 0x13d PushV
	var_132_string = "Neutral"; // 0x13e MovS
	func_220(var_11_object, var_132_string); // 0x13f NEW_2
	var_149_int = 524672; // 0x141 PushI
	SetMessage(var_149_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_150_int = 526770; // 0x146 PushI
	var_151_int = 28048; // 0x147 PushI
	var_152_int = 28047; // 0x148 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x149 TObjFunc
	var_153_int = 526776; // 0x14b PushI
	var_154_int = 28048; // 0x14c PushI
	var_155_int = 28053; // 0x14d PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_156_bool = 0; // 0x151 PushV
	var_156_bool = 0; // 0x152 MovB
	var_157_bool = 0; // 0x153 PushV
	var_157_bool = 0; // 0x154 MovB
	var_158_bool = 0; var_159_object = Obj(); // 0x155 PushV
	var_159_object = var_1_object; // 0x156 MovT
	func_1137(var_159_object); // 0x157 NEW_2
	if(var_158_bool == 0) goto Label_352; // 0x159 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x15a PushV
	var_165_object = var_1_object; // 0x15b MovT
	func_1149(var_165_object); // 0x15c NEW_2
	if(var_164_bool == 0) goto Label_352; // 0x15e JumpB
	var_157_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_157_bool == 0) goto Label_360; // 0x160 JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x161 PushV
	var_171_object = var_1_object; // 0x162 MovT
	func_1125(var_171_object); // 0x163 NEW_2
	var_172_bool = var_170_bool == 0; // 0x165 Not
	if(var_172_bool == 0) goto Label_360; // 0x166 JumpB
	var_156_bool = 1; // 0x167 MovB
	
Label_360:
	if(var_156_bool == 0) goto Label_386; // 0x168 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x169 PushV
	var_173_object = var_1_object; // 0x16a MovT
	var_174_object = var_0_object; // 0x16b MovT
	func_1050(); // 0x16c NEW_2
	var_177_string = ""; // 0x16e PushV
	var_177_string = "Neutral"; // 0x16f MovS
	func_220(var_11_object, var_177_string); // 0x170 NEW_2
	var_178_int = 524668; // 0x172 PushI
	SetMessage(var_178_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_179_int = 526760; // 0x177 PushI
	var_180_int = 28045; // 0x178 PushI
	var_181_int = 28037; // 0x179 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x17a TObjFunc
	var_182_int = 541744; // 0x17c PushI
	var_183_int = 28042; // 0x17d PushI
	var_184_int = 43941; // 0x17e PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_185_string = ""; // 0x182 PushV
	var_185_string = "Neutral"; // 0x183 MovS
	func_220(var_11_object, var_185_string); // 0x184 NEW_2
	var_186_int = 524670; // 0x186 PushI
	SetMessage(var_186_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_187_int = 524671; // 0x18b PushI
	var_188_int = -1; // 0x18c PushI
	var_189_int = 26010; // 0x18d PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x18e TObjFunc
	var_190_int = 541781; // 0x190 PushI
	var_191_int = -1; // 0x191 PushI
	var_192_int = 43987; // 0x192 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_193_int = 28045; // 0x196 PushI
	var_194_bool = var_10_bool == var_193_int; // 0x197 Eq
	if(var_194_bool == 0) goto Label_424; // 0x198 JumpB
	var_195_string = ""; // 0x199 PushV
	var_195_string = "Neutral"; // 0x19a MovS
	func_220(var_11_object, var_195_string); // 0x19b NEW_2
	var_196_int = 526768; // 0x19d PushI
	SetMessage(var_196_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_197_int = 526769; // 0x1a2 PushI
	var_198_int = 28038; // 0x1a3 PushI
	var_199_int = 28046; // 0x1a4 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_200_int = 28038; // 0x1a8 PushI
	var_201_bool = var_10_bool == var_200_int; // 0x1a9 Eq
	if(var_201_bool == 0) goto Label_447; // 0x1aa JumpB
	var_202_string = ""; // 0x1ab PushV
	var_202_string = "Neutral"; // 0x1ac MovS
	func_220(var_11_object, var_202_string); // 0x1ad NEW_2
	var_203_int = 526761; // 0x1af PushI
	SetMessage(var_203_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_204_int = 526762; // 0x1b4 PushI
	var_205_int = 28040; // 0x1b5 PushI
	var_206_int = 28039; // 0x1b6 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1b7 TObjFunc
	var_207_int = 541750; // 0x1b9 PushI
	var_208_int = 28042; // 0x1ba PushI
	var_209_int = 43949; // 0x1bb PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1bc TObjFunc
	return 0; // 0x1be Return
	
Label_447:
	var_210_int = 28040; // 0x1bf PushI
	var_211_bool = var_10_bool == var_210_int; // 0x1c0 Eq
	if(var_211_bool == 0) goto Label_465; // 0x1c1 JumpB
	var_212_string = ""; // 0x1c2 PushV
	var_212_string = "Neutral"; // 0x1c3 MovS
	func_220(var_11_object, var_212_string); // 0x1c4 NEW_2
	var_213_int = 526763; // 0x1c6 PushI
	SetMessage(var_213_int); // 0x1c7 TObjFunc
	ClearReplies(); // 0x1c9 TObjFunc
	var_214_int = 526764; // 0x1cb PushI
	var_215_int = 28042; // 0x1cc PushI
	var_216_int = 28041; // 0x1cd PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_217_int = 28042; // 0x1d1 PushI
	var_218_bool = var_10_bool == var_217_int; // 0x1d2 Eq
	if(var_218_bool == 0) goto Label_488; // 0x1d3 JumpB
	var_219_string = ""; // 0x1d4 PushV
	var_219_string = "Neutral"; // 0x1d5 MovS
	func_220(var_11_object, var_219_string); // 0x1d6 NEW_2
	var_220_int = 526765; // 0x1d8 PushI
	SetMessage(var_220_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_221_int = 541745; // 0x1dd PushI
	var_222_int = 43944; // 0x1de PushI
	var_223_int = 43943; // 0x1df PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1e0 TObjFunc
	var_224_int = 541748; // 0x1e2 PushI
	var_225_int = 43948; // 0x1e3 PushI
	var_226_int = 43947; // 0x1e4 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_227_int = 43948; // 0x1e8 PushI
	var_228_bool = var_10_bool == var_227_int; // 0x1e9 Eq
	if(var_228_bool == 0) goto Label_506; // 0x1ea JumpB
	var_229_string = ""; // 0x1eb PushV
	var_229_string = "Neutral"; // 0x1ec MovS
	func_220(var_11_object, var_229_string); // 0x1ed NEW_2
	var_230_int = 541749; // 0x1ef PushI
	SetMessage(var_230_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_231_int = 526766; // 0x1f4 PushI
	var_232_int = 28044; // 0x1f5 PushI
	var_233_int = 28043; // 0x1f6 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_234_int = 28044; // 0x1fa PushI
	var_235_bool = var_10_bool == var_234_int; // 0x1fb Eq
	if(var_235_bool == 0) goto Label_524; // 0x1fc JumpB
	var_236_string = ""; // 0x1fd PushV
	var_236_string = "Neutral"; // 0x1fe MovS
	func_220(var_11_object, var_236_string); // 0x1ff NEW_2
	var_237_int = 526767; // 0x201 PushI
	SetMessage(var_237_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_238_int = 524669; // 0x206 PushI
	var_239_int = -1; // 0x207 PushI
	var_240_int = 26008; // 0x208 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_241_int = 43944; // 0x20c PushI
	var_242_bool = var_10_bool == var_241_int; // 0x20d Eq
	if(var_242_bool == 0) goto Label_542; // 0x20e JumpB
	var_243_string = ""; // 0x20f PushV
	var_243_string = "Neutral"; // 0x210 MovS
	func_220(var_11_object, var_243_string); // 0x211 NEW_2
	var_244_int = 541746; // 0x213 PushI
	SetMessage(var_244_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_245_int = 541747; // 0x218 PushI
	var_246_int = 28044; // 0x219 PushI
	var_247_int = 43945; // 0x21a PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_248_int = 28048; // 0x21e PushI
	var_249_bool = var_10_bool == var_248_int; // 0x21f Eq
	if(var_249_bool == 0) goto Label_565; // 0x220 JumpB
	var_250_string = ""; // 0x221 PushV
	var_250_string = "Neutral"; // 0x222 MovS
	func_220(var_11_object, var_250_string); // 0x223 NEW_2
	var_251_int = 526771; // 0x225 PushI
	SetMessage(var_251_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_252_int = 526772; // 0x22a PushI
	var_253_int = 28050; // 0x22b PushI
	var_254_int = 28049; // 0x22c PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x22d TObjFunc
	var_255_int = 526777; // 0x22f PushI
	var_256_int = 28052; // 0x230 PushI
	var_257_int = 28055; // 0x231 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_258_int = 28050; // 0x235 PushI
	var_259_bool = var_10_bool == var_258_int; // 0x236 Eq
	if(var_259_bool == 0) goto Label_588; // 0x237 JumpB
	var_260_string = ""; // 0x238 PushV
	var_260_string = "Neutral"; // 0x239 MovS
	func_220(var_11_object, var_260_string); // 0x23a NEW_2
	var_261_int = 526773; // 0x23c PushI
	SetMessage(var_261_int); // 0x23d TObjFunc
	ClearReplies(); // 0x23f TObjFunc
	var_262_int = 526774; // 0x241 PushI
	var_263_int = 28052; // 0x242 PushI
	var_264_int = 28051; // 0x243 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x244 TObjFunc
	var_265_int = 526778; // 0x246 PushI
	var_266_int = 28052; // 0x247 PushI
	var_267_int = 28056; // 0x248 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x249 TObjFunc
	return 0; // 0x24b Return
	
Label_588:
	var_268_int = 28052; // 0x24c PushI
	var_269_bool = var_10_bool == var_268_int; // 0x24d Eq
	if(var_269_bool == 0) goto Label_606; // 0x24e JumpB
	var_270_string = ""; // 0x24f PushV
	var_270_string = "Neutral"; // 0x250 MovS
	func_220(var_11_object, var_270_string); // 0x251 NEW_2
	var_271_int = 526775; // 0x253 PushI
	SetMessage(var_271_int); // 0x254 TObjFunc
	ClearReplies(); // 0x256 TObjFunc
	var_272_int = 524673; // 0x258 PushI
	var_273_int = 26013; // 0x259 PushI
	var_274_int = 26012; // 0x25a PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_275_int = 26013; // 0x25e PushI
	var_276_bool = var_10_bool == var_275_int; // 0x25f Eq
	if(var_276_bool == 0) goto Label_629; // 0x260 JumpB
	var_277_string = ""; // 0x261 PushV
	var_277_string = "Neutral"; // 0x262 MovS
	func_220(var_11_object, var_277_string); // 0x263 NEW_2
	var_278_int = 524674; // 0x265 PushI
	SetMessage(var_278_int); // 0x266 TObjFunc
	ClearReplies(); // 0x268 TObjFunc
	var_279_int = 524675; // 0x26a PushI
	var_280_int = 28059; // 0x26b PushI
	var_281_int = 26014; // 0x26c PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x26d TObjFunc
	var_282_int = 526782; // 0x26f PushI
	var_283_int = -1; // 0x270 PushI
	var_284_int = 28062; // 0x271 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x272 TObjFunc
	return 0; // 0x274 Return
	
Label_629:
	var_285_int = 28059; // 0x275 PushI
	var_286_bool = var_10_bool == var_285_int; // 0x276 Eq
	if(var_286_bool == 0) goto Label_652; // 0x277 JumpB
	var_287_string = ""; // 0x278 PushV
	var_287_string = "Neutral"; // 0x279 MovS
	func_220(var_11_object, var_287_string); // 0x27a NEW_2
	var_288_int = 526779; // 0x27c PushI
	SetMessage(var_288_int); // 0x27d TObjFunc
	ClearReplies(); // 0x27f TObjFunc
	var_289_int = 526780; // 0x281 PushI
	var_290_int = -1; // 0x282 PushI
	var_291_int = 28060; // 0x283 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x284 TObjFunc
	var_292_int = 526781; // 0x286 PushI
	var_293_int = -1; // 0x287 PushI
	var_294_int = 28061; // 0x288 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_3_string = 1; // 0x28c TMovB
	var_295_bool = 0; // 0x28d PushV
	func_1290(var_295_bool); // 0x28e NEW_2
	if(var_295_bool == 0) goto Label_660; // 0x290 JumpB
	lshStopAnimation(); // 0x291 Func
	goto Label_662; // 0x293 Jump
	
Label_662:
	return 0; // 0x296 Return
	
Label_660:
	StopAnimation(); // 0x294 Func
	
Label_664:
	return 0; // 0x298 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_751(var_9_object, var_10_object); // 0x2a5 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x2a7 PushV
	var_15_object = var_10_object; // 0x2a8 Mov
	TaskCall(0); // 0x2a9 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x2aa NEW_2
	TaskReturn(); // 0x2ab TaskReturn
	return 0; // 0x2ad Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x2d9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x2da Eq
	if(var_12_bool == 0) goto Label_750; // 0x2db JumpB
	var_13_bool = 0; // 0x2dc PushV
	func_713(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x2dd NEW_2
	if(var_13_bool == 0) goto Label_744; // 0x2df JumpB
	var_26_bool = var_2_object == 0; // 0x2e0 Not
	if(var_26_bool == 0) goto Label_743; // 0x2e1 JumpB
	var_27_object = Obj(); // 0x2e2 PushV
	var_27_object = var_4_bool; // 0x2e3 MovT
	func_982(var_27_object); // 0x2e4 NEW_2
	var_2_object = 1; // 0x2e6 TMovB
	
Label_743:
	goto Label_750; // 0x2e7 Jump
	
Label_750:
	return 0; // 0x2ee Return
	
Label_744:
	var_34_object = var_2_object; // 0x2e8 PushT
	if(var_34_object == 0) goto Label_750; // 0x2e9 JumpB
	var_35_string = "head"; // 0x2ea PushS
	UnlookAsync(var_35_string); // 0x2eb Func
	var_2_object = 0; // 0x2ed TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_665:
	var_10_int = 3; // 0x299 PushI
	Sleep(var_10_int); // 0x29a Func
	var_11_float = 0; var_12_float = 0; // 0x29c PushV
	var_11_float = 300; // 0x29d MovI
	var_12_float = 100; // 0x29e MovI
	func_686(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x29f NEW_2
	goto Label_665; // 0x2a1 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_864(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_1284(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_1282(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_1286(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_1288(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1265(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_191_bool = var_24_bool == 0; // 0x38 Not
	if(var_191_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_192_object = Obj(); // 0x3f PushV
	var_192_object = var_15_object; // 0x40 Mov
	func_933(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1282(var_74_int)
{
	var_74_int = 515563; // 0x502 MovI
	return 0; // 0x503 Return
}


func_1027(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x403 PushV
	var_39_int = 0; // 0x404 MovI
	
Label_1029:
	var_41_string = "all"; // 0x405 PushS
	var_42_string = ""; var_43_int = 0; // 0x406 PushV
	var_43_int = var_39_int; // 0x407 Mov
	func_1020(var_42_string, var_43_int); // 0x408 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x40a Func
	var_47_bool = var_40_bool == 0; // 0x40c Not
	if(var_47_bool == 0) goto Label_1039; // 0x40d JumpB
	goto Label_1042; // 0x40e Jump
	
Label_1042:
	var_36_int = var_39_int; // 0x412 Mov
	return 4; // 0x413 Return
	
Label_1039:
	var_48_int = 1; // 0x40f PushI
	var_39_int = var_39_int + var_48_int; // 0x410 Add2
	goto Label_1029; // 0x411 Jump
}


func_1284(var_73_int)
{
	var_73_int = 503348; // 0x504 MovI
	return 0; // 0x505 Return
}


func_1286(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x506 MovS
	return 0; // 0x507 Return
}


func_1288(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x508 MovS
	return 0; // 0x509 Return
}


func_1161()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x489 PushV
	var_44_int = 775; // 0x48a PushI
	var_45_int = 1; // 0x48b PushI
	var_46_int = 541529; // 0x48c PushI
	CreateDiaryEntry(var_43_object, var_44_int, var_45_int, var_46_int); // 0x48d Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0x48f PushV
	var_48_object = var_43_object; // 0x490 Mov
	var_49_int = 318; // 0x491 MovI
	func_1187(var_47_bool, var_48_object, var_49_int); // 0x492 NEW_2
	return 2; // 0x494 Return
}


func_1290(var_68_bool)
{
	var_68_bool = 0; // 0x50a MovB
	return 0; // 0x50b Return
}


func_1044()
{
	var_110_string = "ook1Dohodyaga1"; // 0x415 PushS
	var_111_int = 1; // 0x416 PushI
	SetVariable(var_110_string, var_111_int); // 0x417 Func
	return 0; // 0x419 Return
}


func_1149(var_162_bool)
{
	var_164_int = 0; var_165_string = ""; // 0x47e PushV
	var_165_string = "ook1Dohodyaga2"; // 0x47f MovS
	func_1010(var_164_int, var_165_string); // 0x480 NEW_2
	var_166_int = 0; // 0x482 PushI
	var_167_bool = var_164_int == var_166_int; // 0x483 Eq
	if(var_167_bool == 0) goto Label_1159; // 0x484 JumpB
	var_162_bool = 1; // 0x485 MovB
	return 0; // 0x486 Return
	
Label_1159:
	var_162_bool = 0; // 0x487 MovB
	return 0; // 0x488 Return
}


func_1174(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x496 PushV
	GetDiaryRoot(var_58_object); // 0x497 Func
	var_59_bool = var_58_object == 0; // 0x499 Not
	if(var_59_bool == 0) goto Label_1184; // 0x49a JumpB
	var_60_string = "Can't retrieve diary root"; // 0x49b PushS
	Trace(var_60_string); // 0x49c Func
	var_56_object = 0; // 0x49e MovB
	return 2; // 0x49f Return
	
Label_1184:
	var_56_object = var_58_object; // 0x4a0 Mov
	return 2; // 0x4a1 Return
}


func_1050()
{
	var_173_string = "ook1Dohodyaga2"; // 0x41b PushS
	var_174_int = 1; // 0x41c PushI
	SetVariable(var_173_string, var_174_int); // 0x41d Func
	return 0; // 0x41f Return
}


func_1056()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x420 PushV
	var_20_int = 0; var_21_string = ""; // 0x421 PushV
	var_21_string = "k1q01ooStationGotoLaska"; // 0x422 MovS
	func_1010(var_20_int, var_21_string); // 0x423 NEW_2
	var_24_int = 0; // 0x425 PushI
	var_25_bool = var_20_int == var_24_int; // 0x426 Eq
	if(var_25_bool == 0) goto Label_1085; // 0x427 JumpB
	var_26_string = "k1q01ooStationGotoLaska"; // 0x428 PushS
	var_27_int = 1; // 0x429 PushI
	SetVariable(var_26_string, var_27_int); // 0x42a Func
	var_28_object = Obj(); // 0x42c PushV
	func_1215(var_28_object); // 0x42d NEW_2
	var_19_object = var_28_object; // 0x42e Mov
	var_35_string = "k1q01StationGotoLaska"; // 0x430 PushS
	var_36_string = "pt_map_laska"; // 0x431 PushS
	var_37_int = 1; // 0x432 PushI
	var_38_int = 524730; // 0x433 PushI
	var_39_float = 0; // 0x434 PushV
	func_1015(var_39_float); // 0x435 NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x437 ObjFunc
	func_1161(); // 0x43a NEW_2
	var_19_object = 0; // 0x43c SetNull
	
Label_1085:
	return 2; // 0x43d Return
}


func_1187(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0x4a3 PushV
	var_56_object = Obj(); // 0x4a4 PushV
	func_1174(var_56_object); // 0x4a5 NEW_2
	var_53_object = var_56_object; // 0x4a6 Mov
	Find(var_49_int, var_54_object); // 0x4a8 ObjFunc
	var_61_bool = var_54_object == 0; // 0x4aa Not
	if(var_61_bool == 0) goto Label_1202; // 0x4ab JumpB
	var_62_string = "Can't find diary parent with id: "; // 0x4ac PushS
	var_63_int = var_62_string + var_49_int; // 0x4ad Add
	Trace(var_63_int); // 0x4ae Func
	var_47_bool = 0; // 0x4b0 MovB
	return 6; // 0x4b1 Return
	
Label_1202:
	AddChild(var_48_object); // 0x4b2 ObjFunc
	var_64_int = 7; // 0x4b4 PushI
	SendWorldWndMessage(var_64_int); // 0x4b5 Func
	GetCategory(var_55_int); // 0x4b7 ObjFunc
	SetDiarySection(var_55_int); // 0x4b9 Func
	var_47_bool = 0; // 0x4bb MovB
	return 6; // 0x4bc Return
}


func_933()
{
	var_193_bool = 0; var_194_bool = 0; // 0x3a5 PushV
	var_195_bool = 1; // 0x3a6 PushB
	CameraSwitchToNormal(var_195_bool); // 0x3a7 Func
	var_196_bool = 0; // 0x3a9 PushV
	func_1290(var_196_bool); // 0x3aa NEW_2
	if(var_196_bool == 0) goto Label_942; // 0x3ac JumpB
	goto Label_950; // 0x3ad Jump
	
Label_950:
	return 2; // 0x3b6 Return
	
Label_942:
	var_197_string = "head"; // 0x3ae PushS
	HasAnimationTrack(var_194_bool, var_197_string); // 0x3af Func
	var_198_bool = var_194_bool; // 0x3b1 Push
	if(var_198_bool == 0) goto Label_950; // 0x3b2 JumpB
	var_199_string = "head"; // 0x3b3 PushS
	UnlookAsync(var_199_string); // 0x3b4 Func
}


func_686(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x2af PushV
	func_859(var_13_bool); // 0x2b0 NEW_2
	var_16_bool = var_13_bool == 0; // 0x2b2 Not
	if(var_16_bool == 0) goto Label_693; // 0x2b3 JumpB
	return 0; // 0x2b4 Return
	
Label_693:
	var_17_string = "player"; // 0x2b5 PushS
	FindActor(var_9_object, var_17_string); // 0x2b6 Func
	var_2_object = 0; // 0x2b8 TMovB
	var_3_string = 0; // 0x2b9 TMovB
	var_0_object = var_11_float; // 0x2ba TMov
	var_1_object = var_12_float; // 0x2bb TMov
	var_18_int = 10; // 0x2bc PushI
	var_19_float = 1.0; // 0x2bd PushF
	SetTimer(var_18_int, var_19_float); // 0x2be Func
	func_765(); // 0x2c1 NEW_2
	var_71_bool = var_3_string == 0; // 0x2c3 Not
	if(var_71_bool == 0) goto Label_712; // 0x2c4 JumpB
	var_72_int = 10; // 0x2c5 PushI
	KillTimer(var_72_int); // 0x2c6 Func
	
Label_712:
	return 0; // 0x2c8 Return
}


func_951(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x3b7 PushV
	lshHasAnimation(var_142_bool, var_138_string); // 0x3b8 Func
	var_145_bool = var_142_bool; // 0x3ba Push
	if(var_145_bool == 0) goto Label_962; // 0x3bb JumpB
	lshGetAnimTimes(var_138_string, var_143_float, var_144_float); // 0x3bc Func
	var_146_bool = 0; // 0x3be PushB
	lshPlayAnimation(var_143_float, var_144_float, var_146_bool); // 0x3bf Func
	goto Label_966; // 0x3c1 Jump
	
Label_966:
	return 6; // 0x3c6 Return
	
Label_962:
	var_147_string = "Can't find lsh animation : "; // 0x3c2 PushS
	var_148_int = var_147_string + var_138_string; // 0x3c3 Add
	Trace(var_148_int); // 0x3c4 Func
}


func_1086()
{
	var_67_int = 0; var_68_string = ""; // 0x43f PushV
	var_68_string = "k1q01ooStationGotoLaska"; // 0x440 MovS
	func_1010(var_67_int, var_68_string); // 0x441 NEW_2
	var_69_int = 0; // 0x443 PushI
	var_70_bool = var_67_int == var_69_int; // 0x444 Eq
	if(var_70_bool == 0) goto Label_1112; // 0x445 JumpB
	var_71_string = "k1q01ooStationGotoLaska"; // 0x446 PushS
	var_72_int = 1; // 0x447 PushI
	SetVariable(var_71_string, var_72_int); // 0x448 Func
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0; // 0x44a PushV
	var_76_object = Obj(); // 0x44b PushV
	func_1215(var_76_object); // 0x44c NEW_2
	var_73_object = var_76_object; // 0x44d Mov
	var_74_string = "pt_map_laska"; // 0x44f MovS
	var_75_float = 2; // 0x450 MovI
	func_1232(var_73_object, var_74_string, var_75_float); // 0x451 NEW_2
	var_96_object = Obj(); // 0x453 PushV
	func_1215(var_96_object); // 0x454 NEW_2
	ShowMap(var_96_object); // 0x456 ObjFunc
	
Label_1112:
	return 0; // 0x458 Return
}


func_1215(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x4bf PushV
	GetMainOutdoorScene(var_31_object); // 0x4c0 Func
	var_33_bool = var_31_object == 0; // 0x4c2 NullEq
	if(var_33_bool == 0) goto Label_1226; // 0x4c3 JumpB
	var_34_string = "Can't find main outdoor scene"; // 0x4c4 PushS
	Trace(var_34_string); // 0x4c5 Func
	var_32_object = 0; // 0x4c7 SetNull
	var_28_object = var_32_object; // 0x4c8 Mov
	return 4; // 0x4c9 Return
	
Label_1226:
	GetMap(var_32_object); // 0x4ca ObjFunc
	var_28_object = var_32_object; // 0x4cc Mov
	return 4; // 0x4cd Return
}


func_967(var_116_string, var_117_bool)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x3c7 PushV
	lshHasAnimation(var_123_bool, var_116_string); // 0x3c8 Func
	var_126_bool = var_123_bool; // 0x3ca Push
	if(var_126_bool == 0) goto Label_977; // 0x3cb JumpB
	lshGetAnimTimes(var_116_string, var_124_float, var_125_float); // 0x3cc Func
	lshPlayAnimation(var_124_float, var_125_float, var_117_bool); // 0x3ce Func
	goto Label_981; // 0x3d0 Jump
	
Label_981:
	return 6; // 0x3d5 Return
	
Label_977:
	var_127_string = "Can't find lsh animation : "; // 0x3d1 PushS
	var_128_int = var_127_string + var_116_string; // 0x3d2 Add
	Trace(var_128_int); // 0x3d3 Func
}


func_713(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x2c9 PushV
	var_16_bool = var_4_bool == 0; // 0x2ca NullEq
	if(var_16_bool == 0) goto Label_718; // 0x2cb JumpB
	var_13_bool = 0; // 0x2cc MovB
	return 2; // 0x2cd Return
	
Label_718:
	var_17_float = 0; var_18_object = Obj(); // 0x2ce PushV
	var_18_object = var_4_bool; // 0x2cf MovT
	func_851(var_18_object); // 0x2d0 NEW_2
	var_15_float = sqrt(var_17_float); // 0x2d2 Sqrt2
	var_25_object = var_2_object; // 0x2d3 PushT
	if(var_25_object == 0) goto Label_726; // 0x2d4 JumpB
	var_15_float = var_15_float - var_1_object; // 0x2d5 Sub2
	
Label_726:
	var_13_bool = var_15_float < var_0_object; // 0x2d6 LT2
	return 2; // 0x2d7 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_190; // 0x4f JumpB
	var_93_bool = 0; // 0x50 PushV
	var_93_bool = 0; // 0x51 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x52 PushV
	var_95_object = var_1_object; // 0x53 MovT
	func_1113(var_95_object); // 0x54 NEW_2
	if(var_94_bool == 0) goto Label_93; // 0x56 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x57 PushV
	var_103_object = var_1_object; // 0x58 MovT
	func_1125(var_103_object); // 0x59 NEW_2
	if(var_102_bool == 0) goto Label_93; // 0x5b JumpB
	var_93_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_93_bool == 0) goto Label_119; // 0x5d JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x5e PushV
	var_108_object = var_1_object; // 0x5f MovT
	var_109_object = var_0_object; // 0x60 MovT
	func_1044(); // 0x61 NEW_2
	var_112_string = ""; // 0x63 PushV
	var_112_string = "Neutral"; // 0x64 MovS
	func_220(var_87_object, var_112_string); // 0x65 NEW_2
	var_129_int = 524672; // 0x67 PushI
	SetMessage(var_129_int); // 0x68 TObjFunc
	ClearReplies(); // 0x6a TObjFunc
	var_130_int = 526770; // 0x6c PushI
	var_131_int = 28048; // 0x6d PushI
	var_132_int = 28047; // 0x6e PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x6f TObjFunc
	var_133_int = 526776; // 0x71 PushI
	var_134_int = 28048; // 0x72 PushI
	var_135_int = 28053; // 0x73 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x74 TObjFunc
	goto Label_190; // 0x76 Jump
	
Label_190:
	var_136_bool = 0; // 0xbe PushV
	func_1290(var_136_bool); // 0xbf NEW_2
	if(var_136_bool == 0) goto Label_205; // 0xc1 JumpB
	
Label_194:
	lshWaitForAnimEnd(); // 0xc2 Func
	var_137_string = var_3_string; // 0xc4 PushT
	if(var_137_string == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_204:
	goto Label_219; // 0xcc Jump
	
Label_219:
	return 0; // 0xdb Return
	
Label_199:
	var_138_string = ""; // 0xc7 PushV
	var_138_string = var_2_object; // 0xc8 MovT
	func_951(var_138_string); // 0xc9 NEW_2
	goto Label_194; // 0xcb Jump
	
Label_205:
	var_149_string = "all"; // 0xcd PushS
	var_150_string = "idle"; // 0xce PushS
	PlayAnimation(var_149_string, var_150_string); // 0xcf Func
	
Label_209:
	WaitForAnimEnd(); // 0xd1 Func
	var_151_string = var_3_string; // 0xd3 PushT
	if(var_151_string == 0) goto Label_214; // 0xd4 JumpB
	goto Label_219; // 0xd5 Jump
	
Label_214:
	var_152_string = "all"; // 0xd6 PushS
	var_153_string = "idle"; // 0xd7 PushS
	PlayAnimation(var_152_string, var_153_string); // 0xd8 Func
	goto Label_209; // 0xda Jump
	
Label_119:
	var_154_bool = 0; // 0x77 PushV
	var_154_bool = 0; // 0x78 MovB
	var_155_bool = 0; // 0x79 PushV
	var_155_bool = 0; // 0x7a MovB
	var_156_bool = 0; var_157_object = Obj(); // 0x7b PushV
	var_157_object = var_1_object; // 0x7c MovT
	func_1137(var_157_object); // 0x7d NEW_2
	if(var_156_bool == 0) goto Label_134; // 0x7f JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x80 PushV
	var_163_object = var_1_object; // 0x81 MovT
	func_1149(var_163_object); // 0x82 NEW_2
	if(var_162_bool == 0) goto Label_134; // 0x84 JumpB
	var_155_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_155_bool == 0) goto Label_142; // 0x86 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x87 PushV
	var_169_object = var_1_object; // 0x88 MovT
	func_1125(var_169_object); // 0x89 NEW_2
	var_170_bool = var_168_bool == 0; // 0x8b Not
	if(var_170_bool == 0) goto Label_142; // 0x8c JumpB
	var_154_bool = 1; // 0x8d MovB
	
Label_142:
	if(var_154_bool == 0) goto Label_168; // 0x8e JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x8f PushV
	var_171_object = var_1_object; // 0x90 MovT
	var_172_object = var_0_object; // 0x91 MovT
	func_1050(); // 0x92 NEW_2
	var_175_string = ""; // 0x94 PushV
	var_175_string = "Neutral"; // 0x95 MovS
	func_220(var_87_object, var_175_string); // 0x96 NEW_2
	var_176_int = 524668; // 0x98 PushI
	SetMessage(var_176_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_177_int = 526760; // 0x9d PushI
	var_178_int = 28045; // 0x9e PushI
	var_179_int = 28037; // 0x9f PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xa0 TObjFunc
	var_180_int = 541744; // 0xa2 PushI
	var_181_int = 28042; // 0xa3 PushI
	var_182_int = 43941; // 0xa4 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xa5 TObjFunc
	goto Label_190; // 0xa7 Jump
	
Label_168:
	var_183_string = ""; // 0xa8 PushV
	var_183_string = "Neutral"; // 0xa9 MovS
	func_220(var_87_object, var_183_string); // 0xaa NEW_2
	var_184_int = 524670; // 0xac PushI
	SetMessage(var_184_int); // 0xad TObjFunc
	ClearReplies(); // 0xaf TObjFunc
	var_185_int = 524671; // 0xb1 PushI
	var_186_int = -1; // 0xb2 PushI
	var_187_int = 26010; // 0xb3 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xb4 TObjFunc
	var_188_int = 541781; // 0xb6 PushI
	var_189_int = -1; // 0xb7 PushI
	var_190_int = 43987; // 0xb8 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xb9 TObjFunc
	goto Label_190; // 0xbb Jump
}


func_844(var_61_bool)
{
	var_61_bool = 1; // 0x34c MovB
	return 0; // 0x34d Return
}


func_846()
{
	StopAnimation(); // 0x34e Func
	StopGroup0(); // 0x350 Func
	return 0; // 0x352 Return
}


func_1232(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; // 0x4d0 PushV
	GetMainOutdoorScene(var_83_object); // 0x4d1 Func
	var_85_bool = var_83_object == 0; // 0x4d3 NullEq
	if(var_85_bool == 0) goto Label_1241; // 0x4d4 JumpB
	var_86_string = "Can't find main outdoor scene"; // 0x4d5 PushS
	Trace(var_86_string); // 0x4d6 Func
	return 8; // 0x4d8 Return
	
Label_1241:
	GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector); // 0x4d9 ObjFunc
	var_87_bool = var_84_bool == 0; // 0x4db Not
	if(var_87_bool == 0) goto Label_1251; // 0x4dc JumpB
	var_88_string = "Warning: outdoor scene locator "; // 0x4dd PushS
	var_89_int = var_88_string + var_74_string; // 0x4de Add
	var_90_string = " doesnt exist"; // 0x4df PushS
	var_91_int = var_89_int + var_90_string; // 0x4e0 Add
	Trace(var_91_int); // 0x4e1 Func
	
Label_1251:
	GetMap(var_73_object); // 0x4e3 ObjFunc
	var_92_bool = var_73_object == 0; // 0x4e5 NullEq
	if(var_92_bool == 0) goto Label_1259; // 0x4e6 JumpB
	var_93_string = "Can't find map"; // 0x4e7 PushS
	Trace(var_93_string); // 0x4e8 Func
	return 8; // 0x4ea Return
	
Label_1259:
	var_94_float = GetByIndex(var_81_cvector, 0); // 0x4eb PushE
	var_95_float = GetByIndex(var_81_cvector, 2); // 0x4ec PushE
	SetMapParams(var_94_float, var_95_float, var_75_float); // 0x4ed ObjFunc
	return 8; // 0x4ef Return
}


func_851(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x353 PushV
	GetPosition(var_22_cvector); // 0x354 Func
	GetPosition(var_23_cvector); // 0x356 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x358 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x359 Or2
	return 6; // 0x35a Return
}


func_982(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3d6 PushV
	GetEyesHeight(var_30_float); // 0x3d7 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3d9 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3da PushE
	var_32_float = var_30_float; // 0x3db Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3dc PopE
	var_33_string = "head"; // 0x3dd PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3de Func
	return 4; // 0x3e0 Return
}


func_1113(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x45a PushV
	var_97_string = "ook1Dohodyaga1"; // 0x45b MovS
	func_1010(var_96_int, var_97_string); // 0x45c NEW_2
	var_100_int = 0; // 0x45e PushI
	var_101_bool = var_96_int == var_100_int; // 0x45f Eq
	if(var_101_bool == 0) goto Label_1123; // 0x460 JumpB
	var_94_bool = 1; // 0x461 MovB
	return 0; // 0x462 Return
	
Label_1123:
	var_94_bool = 0; // 0x463 MovB
	return 0; // 0x464 Return
}


func_859(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x35b PushV
	IsLoaded(var_15_bool); // 0x35c Func
	var_13_bool = var_15_bool; // 0x35e Mov
	return 2; // 0x35f Return
}


func_220(var_2_object, var_112_string)
{
	var_113_bool = 0; // 0xdd PushV
	func_1290(var_113_bool); // 0xde NEW_2
	var_114_bool = var_113_bool == 0; // 0xe0 Not
	if(var_114_bool == 0) goto Label_227; // 0xe1 JumpB
	return 0; // 0xe2 Return
	
Label_227:
	var_115_bool = var_112_string == var_2_object; // 0xe3 Eq
	if(var_115_bool == 0) goto Label_230; // 0xe4 JumpB
	return 0; // 0xe5 Return
	
Label_230:
	var_116_string = ""; var_117_bool = 0; // 0xe6 PushV
	var_116_string = var_112_string; // 0xe7 Mov
	var_118_string = ""; // 0xe8 PushS
	var_119_bool = var_112_string == var_118_string; // 0xe9 Eq
	if(var_119_bool == 0) goto Label_237; // 0xea JumpB
	var_117_bool = 0; // 0xeb MovB
	goto Label_238; // 0xec Jump
	
Label_238:
	func_967(var_116_string, var_117_bool); // 0xee NEW_2
	var_2_object = var_112_string; // 0xf0 TMov
	return 0; // 0xf1 Return
	
Label_237:
	var_117_bool = 1; // 0xed MovB
}


func_864(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x360 PushV
	GetPosition(var_38_cvector); // 0x361 ObjFunc
	GetEyesHeight(var_37_float); // 0x363 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x365 PushE
	var_46_float = var_46_float + var_37_float; // 0x366 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x367 PopE
	GetPosition(var_39_cvector); // 0x368 Func
	GetEyesHeight(var_37_float); // 0x36a Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x36c PushE
	var_47_float = var_47_float + var_37_float; // 0x36d Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x36e PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x36f Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x370 PushE
	var_48_float = 0; // 0x371 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x372 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x373 Or
	var_50_float = sqrt(var_49_int); // 0x374 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x375 Div2
	var_41_cvector = -var_40_cvector; // 0x376 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x377 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x378 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x379 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x37a Xor2
	func_1000(var_52_cvector, var_53_cvector); // 0x37b NEW_2
	var_60_int = 25; // 0x37d PushI
	var_61_float = var_52_cvector * var_60_int; // 0x37e Mult
	var_62_int = var_51_float + var_61_float; // 0x37f Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x380 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x381 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x382 Add2
	IsOverrideActive(var_44_bool); // 0x383 Func
	var_64_bool = var_44_bool; // 0x385 Push
	if(var_64_bool == 0) goto Label_905; // 0x386 JumpB
	var_25_bool = 0; // 0x387 MovB
	return 18; // 0x388 Return
	
Label_905:
	StopWorld(); // 0x389 Func
	var_65_bool = 1; // 0x38b PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x38c Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x38e PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x38f PushE
	Rotate(var_66_float, var_67_float); // 0x390 Func
	var_68_bool = 0; // 0x392 PushV
	func_1290(var_68_bool); // 0x393 NEW_2
	if(var_68_bool == 0) goto Label_919; // 0x395 JumpB
	goto Label_927; // 0x396 Jump
	
Label_927:
	CameraWaitForPlayFinish(); // 0x39f Func
	ResumeWorld(); // 0x3a1 Func
	var_25_bool = 1; // 0x3a3 MovB
	return 18; // 0x3a4 Return
	
Label_919:
	var_69_string = "head"; // 0x397 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x398 Func
	var_70_bool = var_45_bool; // 0x39a Push
	if(var_70_bool == 0) goto Label_927; // 0x39b JumpB
	var_71_string = "head"; // 0x39c PushS
	LookAsyncCamera(var_71_string); // 0x39d Func
}


func_993()
{
	var_13_bool = 0; // 0x3e1 PushV
	func_1290(var_13_bool); // 0x3e2 NEW_2
	if(var_13_bool == 0) goto Label_999; // 0x3e4 JumpB
	lshStopSpeech(); // 0x3e5 Func
	
Label_999:
	return 0; // 0x3e7 Return
}


func_1125(var_102_bool)
{
	var_104_int = 0; var_105_string = ""; // 0x466 PushV
	var_105_string = "k1q01DobermanDead"; // 0x467 MovS
	func_1010(var_104_int, var_105_string); // 0x468 NEW_2
	var_106_int = 0; // 0x46a PushI
	var_107_bool = var_104_int != var_106_int; // 0x46b Neq
	if(var_107_bool == 0) goto Label_1135; // 0x46c JumpB
	var_102_bool = 1; // 0x46d MovB
	return 0; // 0x46e Return
	
Label_1135:
	var_102_bool = 0; // 0x46f MovB
	return 0; // 0x470 Return
}


func_1000(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x3e8 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x3e9 Or
	var_56_float = sqrt(var_57_int); // 0x3ea Sqrt2
	var_58_float = 0.0; // 0x3eb PushF
	var_59_bool = var_56_float < var_58_float; // 0x3ec LT
	if(var_59_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x3ee MovV
	return 2; // 0x3ef Return
	
Label_1008:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x3f0 Div2
	return 2; // 0x3f1 Return
}


func_751(var_2_object, var_3_string)
{
	func_846(); // 0x2f0 NEW_2
	var_11_int = 10; // 0x2f2 PushI
	KillTimer(var_11_int); // 0x2f3 Func
	var_12_object = var_2_object; // 0x2f5 PushT
	if(var_12_object == 0) goto Label_763; // 0x2f6 JumpB
	var_13_string = "head"; // 0x2f7 PushS
	UnlookAsync(var_13_string); // 0x2f8 Func
	var_2_object = 0; // 0x2fa TMovB
	
Label_763:
	var_3_string = 1; // 0x2fb TMovB
	return 0; // 0x2fc Return
}


func_1265(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x4f1 PushV
	var_80_string = "branch"; // 0x4f2 PushS
	GetVariable(var_80_string, var_79_int); // 0x4f3 Func
	var_81_int = 0; // 0x4f5 PushI
	var_82_bool = var_79_int == var_81_int; // 0x4f6 Eq
	if(var_82_bool == 0) goto Label_1275; // 0x4f7 JumpB
	var_77_int = 1; // 0x4f8 MovI
	return 2; // 0x4f9 Return
	
Label_1275:
	var_83_int = 1; // 0x4fb PushI
	var_84_bool = var_79_int == var_83_int; // 0x4fc Eq
	if(var_84_bool == 0) goto Label_1280; // 0x4fd JumpB
	var_77_int = 2; // 0x4fe MovI
	return 2; // 0x4ff Return
	
Label_1280:
	var_77_int = 3; // 0x500 MovI
	return 2; // 0x501 Return
}


func_1137(var_156_bool)
{
	var_158_int = 0; var_159_string = ""; // 0x472 PushV
	var_159_string = "k1q01"; // 0x473 MovS
	func_1010(var_158_int, var_159_string); // 0x474 NEW_2
	var_160_int = 4; // 0x476 PushI
	var_161_bool = var_158_int == var_160_int; // 0x477 Eq
	if(var_161_bool == 0) goto Label_1147; // 0x478 JumpB
	var_156_bool = 1; // 0x479 MovB
	return 0; // 0x47a Return
	
Label_1147:
	var_156_bool = 0; // 0x47b MovB
	return 0; // 0x47c Return
}


func_1010(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x3f2 PushV
	GetVariable(var_97_string, var_99_int); // 0x3f3 Func
	var_96_int = var_99_int; // 0x3f5 Mov
	return 2; // 0x3f6 Return
}


func_1015(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x3f7 PushV
	GetGameTime(var_41_float); // 0x3f8 Func
	var_39_float = var_41_float; // 0x3fa Mov
	return 2; // 0x3fb Return
}


func_1020(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x3fc PushV
	var_45_string = "idle"; // 0x3fd MovS
	var_46_int = var_43_int; // 0x3fe Push
	if(var_46_int == 0) goto Label_1025; // 0x3ff JumpB
	var_45_string = var_45_string + var_43_int; // 0x400 Add2
	
Label_1025:
	var_42_string = var_45_string; // 0x401 Mov
	return 2; // 0x402 Return
}


func_765()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x2fd PushV
	WaitForAnimEnd(); // 0x2fe Func
	var_34_bool = 0; // 0x300 PushV
	func_859(var_34_bool); // 0x301 NEW_2
	var_35_bool = var_34_bool == 0; // 0x303 Not
	if(var_35_bool == 0) goto Label_774; // 0x304 JumpB
	return 14; // 0x305 Return
	
Label_774:
	var_36_int = 0; // 0x306 PushV
	func_1027(var_36_int); // 0x307 NEW_2
	var_27_int = var_36_int; // 0x308 Mov
	var_28_int = 0; // 0x30a MovI
	
Label_779:
	var_49_bool = 0; // 0x30b PushV
	var_49_bool = 0; // 0x30c MovB
	var_50_int = 5; // 0x30d PushI
	var_51_bool = var_28_int < var_50_int; // 0x30e LT
	if(var_51_bool == 0) goto Label_789; // 0x30f JumpB
	var_52_bool = 0; // 0x310 PushV
	func_859(var_52_bool); // 0x311 NEW_2
	if(var_52_bool == 0) goto Label_789; // 0x313 JumpB
	var_49_bool = 1; // 0x314 MovB
	
Label_789:
	if(var_49_bool == 0) goto Label_841; // 0x315 JumpB
	var_53_int = 3; // 0x316 PushI
	irand(var_29_int, var_53_int); // 0x317 Func
	var_54_int = 0; // 0x319 PushI
	var_55_bool = var_29_int == var_54_int; // 0x31a Eq
	if(var_55_bool == 0) goto Label_813; // 0x31b JumpB
	var_56_int = var_27_int; // 0x31c Push
	if(var_56_int == 0) goto Label_812; // 0x31d JumpB
	irand(var_30_int, var_27_int); // 0x31e Func
	var_57_string = "all"; // 0x320 PushS
	var_58_string = ""; var_59_int = 0; // 0x321 PushV
	var_59_int = var_30_int; // 0x322 Mov
	func_1020(var_58_string, var_59_int); // 0x323 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x325 Func
	WaitForAnimEnd(var_31_bool); // 0x327 Func
	var_60_bool = var_31_bool == 0; // 0x329 Not
	if(var_60_bool == 0) goto Label_812; // 0x32a JumpB
	goto Label_841; // 0x32b Jump
	
Label_841:
	ResetAAS(); // 0x349 Func
	return 14; // 0x34b Return
	
Label_812:
	goto Label_830; // 0x32c Jump
	
Label_830:
	var_61_bool = 0; // 0x33e PushV
	func_844(var_61_bool); // 0x33f NEW_2
	var_62_bool = var_61_bool == 0; // 0x341 Not
	if(var_62_bool == 0) goto Label_836; // 0x342 JumpB
	goto Label_841; // 0x343 Jump
	
Label_836:
	ResetAAS(); // 0x344 Func
	var_63_int = 1; // 0x346 PushI
	var_28_int = var_28_int + var_63_int; // 0x347 Add2
	goto Label_779; // 0x348 Jump
	
Label_813:
	var_64_int = 1; // 0x32d PushI
	var_65_bool = var_29_int == var_64_int; // 0x32e Eq
	if(var_65_bool == 0) goto Label_827; // 0x32f JumpB
	var_66_int = 4; // 0x330 PushI
	rand(var_32_float, var_66_int); // 0x331 Func
	var_67_int = 1; // 0x333 PushI
	var_68_int = var_32_float + var_67_int; // 0x334 Add
	Sleep(var_68_int, var_33_bool); // 0x335 Func
	var_69_bool = var_33_bool == 0; // 0x337 Not
	if(var_69_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_841; // 0x339 Jump
	
Label_826:
	goto Label_830; // 0x33a Jump
	
Label_827:
	var_70_int = var_28_int; // 0x33b Push
	if(var_70_int == 0) goto Label_830; // 0x33c JumpB
	goto Label_841; // 0x33d Jump
}


