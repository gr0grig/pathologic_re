task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xf3 PushI
	if(var_12_int == 0) goto Label_664; // 0xf4 JumpB
	func_991(); // 0xf6 NEW_2
	var_14_int = 28060; // 0xf8 PushI
	var_15_bool = var_11_object == var_14_int; // 0xf9 Eq
	if(var_15_bool == 0) goto Label_261; // 0xfa JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xfb PushV
	var_16_object = var_1_object; // 0xfc MovT
	var_17_object = var_0_object; // 0xfd MovT
	func_1054(); // 0xfe NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0x100 PushV
	var_65_object = var_1_object; // 0x101 MovT
	var_66_object = var_0_object; // 0x102 MovT
	func_1084(); // 0x103 NEW_2
	
Label_261:
	var_97_int = 28061; // 0x105 PushI
	var_98_bool = var_11_object == var_97_int; // 0x106 Eq
	if(var_98_bool == 0) goto Label_274; // 0x107 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x108 PushV
	var_99_object = var_1_object; // 0x109 MovT
	var_100_object = var_0_object; // 0x10a MovT
	func_1054(); // 0x10b NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0x10d PushV
	var_101_object = var_1_object; // 0x10e MovT
	var_102_object = var_0_object; // 0x10f MovT
	func_1084(); // 0x110 NEW_2
	
Label_274:
	var_103_int = 28062; // 0x112 PushI
	var_104_bool = var_11_object == var_103_int; // 0x113 Eq
	if(var_104_bool == 0) goto Label_287; // 0x114 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x115 PushV
	var_105_object = var_1_object; // 0x116 MovT
	var_106_object = var_0_object; // 0x117 MovT
	func_1054(); // 0x118 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x11a PushV
	var_107_object = var_1_object; // 0x11b MovT
	var_108_object = var_0_object; // 0x11c MovT
	func_1084(); // 0x11d NEW_2
	
Label_287:
	var_109_int = 26008; // 0x11f PushI
	var_110_bool = var_11_object == var_109_int; // 0x120 Eq
	if(var_110_bool == 0) goto Label_295; // 0x121 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x122 PushV
	var_111_object = var_1_object; // 0x123 MovT
	var_112_object = var_0_object; // 0x124 MovT
	func_1054(); // 0x125 NEW_2
	
Label_295:
	var_113_int = 26011; // 0x127 PushI
	var_114_bool = var_10_bool == var_113_int; // 0x128 Eq
	if(var_114_bool == 0) goto Label_406; // 0x129 JumpB
	var_115_bool = 0; // 0x12a PushV
	var_115_bool = 0; // 0x12b MovB
	var_116_bool = 0; var_117_object = Obj(); // 0x12c PushV
	var_117_object = var_1_object; // 0x12d MovT
	func_1111(var_117_object); // 0x12e NEW_2
	if(var_116_bool == 0) goto Label_311; // 0x130 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x131 PushV
	var_123_object = var_1_object; // 0x132 MovT
	func_1123(var_123_object); // 0x133 NEW_2
	if(var_122_bool == 0) goto Label_311; // 0x135 JumpB
	var_115_bool = 1; // 0x136 MovB
	
Label_311:
	if(var_115_bool == 0) goto Label_337; // 0x137 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x138 PushV
	var_128_object = var_1_object; // 0x139 MovT
	var_129_object = var_0_object; // 0x13a MovT
	func_1042(); // 0x13b NEW_2
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
	func_1135(var_159_object); // 0x157 NEW_2
	if(var_158_bool == 0) goto Label_352; // 0x159 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x15a PushV
	var_165_object = var_1_object; // 0x15b MovT
	func_1147(var_165_object); // 0x15c NEW_2
	if(var_164_bool == 0) goto Label_352; // 0x15e JumpB
	var_157_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_157_bool == 0) goto Label_360; // 0x160 JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x161 PushV
	var_171_object = var_1_object; // 0x162 MovT
	func_1123(var_171_object); // 0x163 NEW_2
	var_172_bool = var_170_bool == 0; // 0x165 Not
	if(var_172_bool == 0) goto Label_360; // 0x166 JumpB
	var_156_bool = 1; // 0x167 MovB
	
Label_360:
	if(var_156_bool == 0) goto Label_386; // 0x168 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x169 PushV
	var_173_object = var_1_object; // 0x16a MovT
	var_174_object = var_0_object; // 0x16b MovT
	func_1048(); // 0x16c NEW_2
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
	func_1288(var_295_bool); // 0x28e NEW_2
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
	func_980(var_27_object); // 0x2e4 NEW_2
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


func_1280(var_73_int)
{
	var_73_int = 515563; // 0x500 MovI
	return 0; // 0x501 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_864(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_1282(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_1280(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_1284(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_1286(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1263(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_190_bool = var_24_bool == 0; // 0x38 Not
	if(var_190_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_191_object = Obj(); // 0x3f PushV
	var_191_object = var_15_object; // 0x40 Mov
	func_932(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1282(var_72_int)
{
	var_72_int = 503348; // 0x502 MovI
	return 0; // 0x503 Return
}


func_1025(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x401 PushV
	var_39_int = 0; // 0x402 MovI
	
Label_1027:
	var_41_string = "all"; // 0x403 PushS
	var_42_string = ""; var_43_int = 0; // 0x404 PushV
	var_43_int = var_39_int; // 0x405 Mov
	func_1018(var_42_string, var_43_int); // 0x406 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x408 Func
	var_47_bool = var_40_bool == 0; // 0x40a Not
	if(var_47_bool == 0) goto Label_1037; // 0x40b JumpB
	goto Label_1040; // 0x40c Jump
	
Label_1040:
	var_36_int = var_39_int; // 0x410 Mov
	return 4; // 0x411 Return
	
Label_1037:
	var_48_int = 1; // 0x40d PushI
	var_39_int = var_39_int + var_48_int; // 0x40e Add2
	goto Label_1027; // 0x40f Jump
}


func_1284(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png"; // 0x504 MovS
	return 0; // 0x505 Return
}


func_1286(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png"; // 0x506 MovS
	return 0; // 0x507 Return
}


func_1159()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x487 PushV
	var_44_int = 775; // 0x488 PushI
	var_45_int = 1; // 0x489 PushI
	var_46_int = 541529; // 0x48a PushI
	CreateDiaryEntry(var_43_object, var_44_int, var_45_int, var_46_int); // 0x48b Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0x48d PushV
	var_48_object = var_43_object; // 0x48e Mov
	var_49_int = 318; // 0x48f MovI
	func_1185(var_47_bool, var_48_object, var_49_int); // 0x490 NEW_2
	return 2; // 0x492 Return
}


func_1288(var_67_bool)
{
	var_67_bool = 0; // 0x508 MovB
	return 0; // 0x509 Return
}


func_1042()
{
	var_109_string = "ook1Dohodyaga1"; // 0x413 PushS
	var_110_int = 1; // 0x414 PushI
	SetVariable(var_109_string, var_110_int); // 0x415 Func
	return 0; // 0x417 Return
}


func_1172(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x494 PushV
	GetDiaryRoot(var_58_object); // 0x495 Func
	var_59_bool = var_58_object == 0; // 0x497 Not
	if(var_59_bool == 0) goto Label_1182; // 0x498 JumpB
	var_60_string = "Can't retrieve diary root"; // 0x499 PushS
	Trace(var_60_string); // 0x49a Func
	var_56_object = 0; // 0x49c MovB
	return 2; // 0x49d Return
	
Label_1182:
	var_56_object = var_58_object; // 0x49e Mov
	return 2; // 0x49f Return
}


func_1048()
{
	var_172_string = "ook1Dohodyaga2"; // 0x419 PushS
	var_173_int = 1; // 0x41a PushI
	SetVariable(var_172_string, var_173_int); // 0x41b Func
	return 0; // 0x41d Return
}


func_1054()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x41e PushV
	var_20_int = 0; var_21_string = ""; // 0x41f PushV
	var_21_string = "k1q01ooStationGotoLaska"; // 0x420 MovS
	func_1008(var_20_int, var_21_string); // 0x421 NEW_2
	var_24_int = 0; // 0x423 PushI
	var_25_bool = var_20_int == var_24_int; // 0x424 Eq
	if(var_25_bool == 0) goto Label_1083; // 0x425 JumpB
	var_26_string = "k1q01ooStationGotoLaska"; // 0x426 PushS
	var_27_int = 1; // 0x427 PushI
	SetVariable(var_26_string, var_27_int); // 0x428 Func
	var_28_object = Obj(); // 0x42a PushV
	func_1213(var_28_object); // 0x42b NEW_2
	var_19_object = var_28_object; // 0x42c Mov
	var_35_string = "k1q01StationGotoLaska"; // 0x42e PushS
	var_36_string = "pt_map_laska"; // 0x42f PushS
	var_37_int = 1; // 0x430 PushI
	var_38_int = 524730; // 0x431 PushI
	var_39_float = 0; // 0x432 PushV
	func_1013(var_39_float); // 0x433 NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x435 ObjFunc
	func_1159(); // 0x438 NEW_2
	var_19_object = 0; // 0x43a SetNull
	
Label_1083:
	return 2; // 0x43b Return
}


func_1185(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0x4a1 PushV
	var_56_object = Obj(); // 0x4a2 PushV
	func_1172(var_56_object); // 0x4a3 NEW_2
	var_53_object = var_56_object; // 0x4a4 Mov
	Find(var_49_int, var_54_object); // 0x4a6 ObjFunc
	var_61_bool = var_54_object == 0; // 0x4a8 Not
	if(var_61_bool == 0) goto Label_1200; // 0x4a9 JumpB
	var_62_string = "Can't find diary parent with id: "; // 0x4aa PushS
	var_63_int = var_62_string + var_49_int; // 0x4ab Add
	Trace(var_63_int); // 0x4ac Func
	var_47_bool = 0; // 0x4ae MovB
	return 6; // 0x4af Return
	
Label_1200:
	AddChild(var_48_object); // 0x4b0 ObjFunc
	var_64_int = 7; // 0x4b2 PushI
	SendWorldWndMessage(var_64_int); // 0x4b3 Func
	GetCategory(var_55_int); // 0x4b5 ObjFunc
	SetDiarySection(var_55_int); // 0x4b7 Func
	var_47_bool = 0; // 0x4b9 MovB
	return 6; // 0x4ba Return
}


func_932()
{
	var_192_bool = 0; var_193_bool = 0; // 0x3a4 PushV
	CameraSwitchToNormal(); // 0x3a5 Func
	var_194_bool = 0; // 0x3a7 PushV
	func_1288(var_194_bool); // 0x3a8 NEW_2
	if(var_194_bool == 0) goto Label_940; // 0x3aa JumpB
	goto Label_948; // 0x3ab Jump
	
Label_948:
	return 2; // 0x3b4 Return
	
Label_940:
	var_195_string = "head"; // 0x3ac PushS
	HasAnimationTrack(var_193_bool, var_195_string); // 0x3ad Func
	var_196_bool = var_193_bool; // 0x3af Push
	if(var_196_bool == 0) goto Label_948; // 0x3b0 JumpB
	var_197_string = "head"; // 0x3b1 PushS
	UnlookAsync(var_197_string); // 0x3b2 Func
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


func_949(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x3b5 PushV
	lshHasAnimation(var_141_bool, var_137_string); // 0x3b6 Func
	var_144_bool = var_141_bool; // 0x3b8 Push
	if(var_144_bool == 0) goto Label_960; // 0x3b9 JumpB
	lshGetAnimTimes(var_137_string, var_142_float, var_143_float); // 0x3ba Func
	var_145_bool = 0; // 0x3bc PushB
	lshPlayAnimation(var_142_float, var_143_float, var_145_bool); // 0x3bd Func
	goto Label_964; // 0x3bf Jump
	
Label_964:
	return 6; // 0x3c4 Return
	
Label_960:
	var_146_string = "Can't find lsh animation : "; // 0x3c0 PushS
	var_147_int = var_146_string + var_137_string; // 0x3c1 Add
	Trace(var_147_int); // 0x3c2 Func
}


func_1084()
{
	var_67_int = 0; var_68_string = ""; // 0x43d PushV
	var_68_string = "k1q01ooStationGotoLaska"; // 0x43e MovS
	func_1008(var_67_int, var_68_string); // 0x43f NEW_2
	var_69_int = 0; // 0x441 PushI
	var_70_bool = var_67_int == var_69_int; // 0x442 Eq
	if(var_70_bool == 0) goto Label_1110; // 0x443 JumpB
	var_71_string = "k1q01ooStationGotoLaska"; // 0x444 PushS
	var_72_int = 1; // 0x445 PushI
	SetVariable(var_71_string, var_72_int); // 0x446 Func
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0; // 0x448 PushV
	var_76_object = Obj(); // 0x449 PushV
	func_1213(var_76_object); // 0x44a NEW_2
	var_73_object = var_76_object; // 0x44b Mov
	var_74_string = "pt_map_laska"; // 0x44d MovS
	var_75_float = 2; // 0x44e MovI
	func_1230(var_73_object, var_74_string, var_75_float); // 0x44f NEW_2
	var_96_object = Obj(); // 0x451 PushV
	func_1213(var_96_object); // 0x452 NEW_2
	ShowMap(var_96_object); // 0x454 ObjFunc
	
Label_1110:
	return 0; // 0x456 Return
}


func_1213(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x4bd PushV
	GetMainOutdoorScene(var_31_object); // 0x4be Func
	var_33_bool = var_31_object == 0; // 0x4c0 NullEq
	if(var_33_bool == 0) goto Label_1224; // 0x4c1 JumpB
	var_34_string = "Can't find main outdoor scene"; // 0x4c2 PushS
	Trace(var_34_string); // 0x4c3 Func
	var_32_object = 0; // 0x4c5 SetNull
	var_28_object = var_32_object; // 0x4c6 Mov
	return 4; // 0x4c7 Return
	
Label_1224:
	GetMap(var_32_object); // 0x4c8 ObjFunc
	var_28_object = var_32_object; // 0x4ca Mov
	return 4; // 0x4cb Return
}


func_965(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x3c5 PushV
	lshHasAnimation(var_122_bool, var_115_string); // 0x3c6 Func
	var_125_bool = var_122_bool; // 0x3c8 Push
	if(var_125_bool == 0) goto Label_975; // 0x3c9 JumpB
	lshGetAnimTimes(var_115_string, var_123_float, var_124_float); // 0x3ca Func
	lshPlayAnimation(var_123_float, var_124_float, var_116_bool); // 0x3cc Func
	goto Label_979; // 0x3ce Jump
	
Label_979:
	return 6; // 0x3d3 Return
	
Label_975:
	var_126_string = "Can't find lsh animation : "; // 0x3cf PushS
	var_127_int = var_126_string + var_115_string; // 0x3d0 Add
	Trace(var_127_int); // 0x3d1 Func
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_190; // 0x4f JumpB
	var_92_bool = 0; // 0x50 PushV
	var_92_bool = 0; // 0x51 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x52 PushV
	var_94_object = var_1_object; // 0x53 MovT
	func_1111(var_94_object); // 0x54 NEW_2
	if(var_93_bool == 0) goto Label_93; // 0x56 JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x57 PushV
	var_102_object = var_1_object; // 0x58 MovT
	func_1123(var_102_object); // 0x59 NEW_2
	if(var_101_bool == 0) goto Label_93; // 0x5b JumpB
	var_92_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_92_bool == 0) goto Label_119; // 0x5d JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x5e PushV
	var_107_object = var_1_object; // 0x5f MovT
	var_108_object = var_0_object; // 0x60 MovT
	func_1042(); // 0x61 NEW_2
	var_111_string = ""; // 0x63 PushV
	var_111_string = "Neutral"; // 0x64 MovS
	func_220(var_86_object, var_111_string); // 0x65 NEW_2
	var_128_int = 524672; // 0x67 PushI
	SetMessage(var_128_int); // 0x68 TObjFunc
	ClearReplies(); // 0x6a TObjFunc
	var_129_int = 526770; // 0x6c PushI
	var_130_int = 28048; // 0x6d PushI
	var_131_int = 28047; // 0x6e PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x6f TObjFunc
	var_132_int = 526776; // 0x71 PushI
	var_133_int = 28048; // 0x72 PushI
	var_134_int = 28053; // 0x73 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x74 TObjFunc
	goto Label_190; // 0x76 Jump
	
Label_190:
	var_135_bool = 0; // 0xbe PushV
	func_1288(var_135_bool); // 0xbf NEW_2
	if(var_135_bool == 0) goto Label_205; // 0xc1 JumpB
	
Label_194:
	lshWaitForAnimEnd(); // 0xc2 Func
	var_136_string = var_3_string; // 0xc4 PushT
	if(var_136_string == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_204:
	goto Label_219; // 0xcc Jump
	
Label_219:
	return 0; // 0xdb Return
	
Label_199:
	var_137_string = ""; // 0xc7 PushV
	var_137_string = var_2_object; // 0xc8 MovT
	func_949(var_137_string); // 0xc9 NEW_2
	goto Label_194; // 0xcb Jump
	
Label_205:
	var_148_string = "all"; // 0xcd PushS
	var_149_string = "idle"; // 0xce PushS
	PlayAnimation(var_148_string, var_149_string); // 0xcf Func
	
Label_209:
	WaitForAnimEnd(); // 0xd1 Func
	var_150_string = var_3_string; // 0xd3 PushT
	if(var_150_string == 0) goto Label_214; // 0xd4 JumpB
	goto Label_219; // 0xd5 Jump
	
Label_214:
	var_151_string = "all"; // 0xd6 PushS
	var_152_string = "idle"; // 0xd7 PushS
	PlayAnimation(var_151_string, var_152_string); // 0xd8 Func
	goto Label_209; // 0xda Jump
	
Label_119:
	var_153_bool = 0; // 0x77 PushV
	var_153_bool = 0; // 0x78 MovB
	var_154_bool = 0; // 0x79 PushV
	var_154_bool = 0; // 0x7a MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x7b PushV
	var_156_object = var_1_object; // 0x7c MovT
	func_1135(var_156_object); // 0x7d NEW_2
	if(var_155_bool == 0) goto Label_134; // 0x7f JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x80 PushV
	var_162_object = var_1_object; // 0x81 MovT
	func_1147(var_162_object); // 0x82 NEW_2
	if(var_161_bool == 0) goto Label_134; // 0x84 JumpB
	var_154_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_154_bool == 0) goto Label_142; // 0x86 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x87 PushV
	var_168_object = var_1_object; // 0x88 MovT
	func_1123(var_168_object); // 0x89 NEW_2
	var_169_bool = var_167_bool == 0; // 0x8b Not
	if(var_169_bool == 0) goto Label_142; // 0x8c JumpB
	var_153_bool = 1; // 0x8d MovB
	
Label_142:
	if(var_153_bool == 0) goto Label_168; // 0x8e JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x8f PushV
	var_170_object = var_1_object; // 0x90 MovT
	var_171_object = var_0_object; // 0x91 MovT
	func_1048(); // 0x92 NEW_2
	var_174_string = ""; // 0x94 PushV
	var_174_string = "Neutral"; // 0x95 MovS
	func_220(var_86_object, var_174_string); // 0x96 NEW_2
	var_175_int = 524668; // 0x98 PushI
	SetMessage(var_175_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_176_int = 526760; // 0x9d PushI
	var_177_int = 28045; // 0x9e PushI
	var_178_int = 28037; // 0x9f PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xa0 TObjFunc
	var_179_int = 541744; // 0xa2 PushI
	var_180_int = 28042; // 0xa3 PushI
	var_181_int = 43941; // 0xa4 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xa5 TObjFunc
	goto Label_190; // 0xa7 Jump
	
Label_168:
	var_182_string = ""; // 0xa8 PushV
	var_182_string = "Neutral"; // 0xa9 MovS
	func_220(var_86_object, var_182_string); // 0xaa NEW_2
	var_183_int = 524670; // 0xac PushI
	SetMessage(var_183_int); // 0xad TObjFunc
	ClearReplies(); // 0xaf TObjFunc
	var_184_int = 524671; // 0xb1 PushI
	var_185_int = -1; // 0xb2 PushI
	var_186_int = 26010; // 0xb3 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xb4 TObjFunc
	var_187_int = 541781; // 0xb6 PushI
	var_188_int = -1; // 0xb7 PushI
	var_189_int = 43987; // 0xb8 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xb9 TObjFunc
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


func_1230(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; // 0x4ce PushV
	GetMainOutdoorScene(var_83_object); // 0x4cf Func
	var_85_bool = var_83_object == 0; // 0x4d1 NullEq
	if(var_85_bool == 0) goto Label_1239; // 0x4d2 JumpB
	var_86_string = "Can't find main outdoor scene"; // 0x4d3 PushS
	Trace(var_86_string); // 0x4d4 Func
	return 8; // 0x4d6 Return
	
Label_1239:
	GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector); // 0x4d7 ObjFunc
	var_87_bool = var_84_bool == 0; // 0x4d9 Not
	if(var_87_bool == 0) goto Label_1249; // 0x4da JumpB
	var_88_string = "Warning: outdoor scene locator "; // 0x4db PushS
	var_89_int = var_88_string + var_74_string; // 0x4dc Add
	var_90_string = " doesnt exist"; // 0x4dd PushS
	var_91_int = var_89_int + var_90_string; // 0x4de Add
	Trace(var_91_int); // 0x4df Func
	
Label_1249:
	GetMap(var_73_object); // 0x4e1 ObjFunc
	var_92_bool = var_73_object == 0; // 0x4e3 NullEq
	if(var_92_bool == 0) goto Label_1257; // 0x4e4 JumpB
	var_93_string = "Can't find map"; // 0x4e5 PushS
	Trace(var_93_string); // 0x4e6 Func
	return 8; // 0x4e8 Return
	
Label_1257:
	var_94_float = GetByIndex(var_81_cvector, 0); // 0x4e9 PushE
	var_95_float = GetByIndex(var_81_cvector, 2); // 0x4ea PushE
	SetMapParams(var_94_float, var_95_float, var_75_float); // 0x4eb ObjFunc
	return 8; // 0x4ed Return
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


func_980(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3d4 PushV
	GetEyesHeight(var_30_float); // 0x3d5 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3d7 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3d8 PushE
	var_32_float = var_30_float; // 0x3d9 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3da PopE
	var_33_string = "head"; // 0x3db PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3dc Func
	return 4; // 0x3de Return
}


func_1111(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x458 PushV
	var_96_string = "ook1Dohodyaga1"; // 0x459 MovS
	func_1008(var_95_int, var_96_string); // 0x45a NEW_2
	var_99_int = 0; // 0x45c PushI
	var_100_bool = var_95_int == var_99_int; // 0x45d Eq
	if(var_100_bool == 0) goto Label_1121; // 0x45e JumpB
	var_93_bool = 1; // 0x45f MovB
	return 0; // 0x460 Return
	
Label_1121:
	var_93_bool = 0; // 0x461 MovB
	return 0; // 0x462 Return
}


func_859(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x35b PushV
	IsLoaded(var_15_bool); // 0x35c Func
	var_13_bool = var_15_bool; // 0x35e Mov
	return 2; // 0x35f Return
}


func_220(var_2_object, var_111_string)
{
	var_112_bool = 0; // 0xdd PushV
	func_1288(var_112_bool); // 0xde NEW_2
	var_113_bool = var_112_bool == 0; // 0xe0 Not
	if(var_113_bool == 0) goto Label_227; // 0xe1 JumpB
	return 0; // 0xe2 Return
	
Label_227:
	var_114_bool = var_111_string == var_2_object; // 0xe3 Eq
	if(var_114_bool == 0) goto Label_230; // 0xe4 JumpB
	return 0; // 0xe5 Return
	
Label_230:
	var_115_string = ""; var_116_bool = 0; // 0xe6 PushV
	var_115_string = var_111_string; // 0xe7 Mov
	var_117_string = ""; // 0xe8 PushS
	var_118_bool = var_111_string == var_117_string; // 0xe9 Eq
	if(var_118_bool == 0) goto Label_237; // 0xea JumpB
	var_116_bool = 0; // 0xeb MovB
	goto Label_238; // 0xec Jump
	
Label_238:
	func_965(var_115_string, var_116_bool); // 0xee NEW_2
	var_2_object = var_111_string; // 0xf0 TMov
	return 0; // 0xf1 Return
	
Label_237:
	var_116_bool = 1; // 0xed MovB
}


func_991()
{
	var_13_bool = 0; // 0x3df PushV
	func_1288(var_13_bool); // 0x3e0 NEW_2
	if(var_13_bool == 0) goto Label_997; // 0x3e2 JumpB
	lshStopSpeech(); // 0x3e3 Func
	
Label_997:
	return 0; // 0x3e5 Return
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
	func_998(var_52_cvector, var_53_cvector); // 0x37b NEW_2
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
	CameraTransit(var_43_cvector, var_41_cvector); // 0x38b Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x38d PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x38e PushE
	Rotate(var_65_float, var_66_float); // 0x38f Func
	var_67_bool = 0; // 0x391 PushV
	func_1288(var_67_bool); // 0x392 NEW_2
	if(var_67_bool == 0) goto Label_918; // 0x394 JumpB
	goto Label_926; // 0x395 Jump
	
Label_926:
	CameraWaitForPlayFinish(); // 0x39e Func
	ResumeWorld(); // 0x3a0 Func
	var_25_bool = 1; // 0x3a2 MovB
	return 18; // 0x3a3 Return
	
Label_918:
	var_68_string = "head"; // 0x396 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x397 Func
	var_69_bool = var_45_bool; // 0x399 Push
	if(var_69_bool == 0) goto Label_926; // 0x39a JumpB
	var_70_string = "head"; // 0x39b PushS
	LookAsyncCamera(var_70_string); // 0x39c Func
}


func_1123(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x464 PushV
	var_104_string = "k1q01DobermanDead"; // 0x465 MovS
	func_1008(var_103_int, var_104_string); // 0x466 NEW_2
	var_105_int = 0; // 0x468 PushI
	var_106_bool = var_103_int != var_105_int; // 0x469 Neq
	if(var_106_bool == 0) goto Label_1133; // 0x46a JumpB
	var_101_bool = 1; // 0x46b MovB
	return 0; // 0x46c Return
	
Label_1133:
	var_101_bool = 0; // 0x46d MovB
	return 0; // 0x46e Return
}


func_998(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x3e6 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x3e7 Or
	var_56_float = sqrt(var_57_int); // 0x3e8 Sqrt2
	var_58_float = 0.0; // 0x3e9 PushF
	var_59_bool = var_56_float < var_58_float; // 0x3ea LT
	if(var_59_bool == 0) goto Label_1006; // 0x3eb JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x3ec MovV
	return 2; // 0x3ed Return
	
Label_1006:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x3ee Div2
	return 2; // 0x3ef Return
}


func_1263(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x4ef PushV
	var_79_string = "branch"; // 0x4f0 PushS
	GetVariable(var_79_string, var_78_int); // 0x4f1 Func
	var_80_int = 0; // 0x4f3 PushI
	var_81_bool = var_78_int == var_80_int; // 0x4f4 Eq
	if(var_81_bool == 0) goto Label_1273; // 0x4f5 JumpB
	var_76_int = 1; // 0x4f6 MovI
	return 2; // 0x4f7 Return
	
Label_1273:
	var_82_int = 1; // 0x4f9 PushI
	var_83_bool = var_78_int == var_82_int; // 0x4fa Eq
	if(var_83_bool == 0) goto Label_1278; // 0x4fb JumpB
	var_76_int = 2; // 0x4fc MovI
	return 2; // 0x4fd Return
	
Label_1278:
	var_76_int = 3; // 0x4fe MovI
	return 2; // 0x4ff Return
}


func_1135(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0x470 PushV
	var_158_string = "k1q01"; // 0x471 MovS
	func_1008(var_157_int, var_158_string); // 0x472 NEW_2
	var_159_int = 4; // 0x474 PushI
	var_160_bool = var_157_int == var_159_int; // 0x475 Eq
	if(var_160_bool == 0) goto Label_1145; // 0x476 JumpB
	var_155_bool = 1; // 0x477 MovB
	return 0; // 0x478 Return
	
Label_1145:
	var_155_bool = 0; // 0x479 MovB
	return 0; // 0x47a Return
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


func_1008(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x3f0 PushV
	GetVariable(var_96_string, var_98_int); // 0x3f1 Func
	var_95_int = var_98_int; // 0x3f3 Mov
	return 2; // 0x3f4 Return
}


func_1013(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x3f5 PushV
	GetGameTime(var_41_float); // 0x3f6 Func
	var_39_float = var_41_float; // 0x3f8 Mov
	return 2; // 0x3f9 Return
}


func_1018(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x3fa PushV
	var_45_string = "idle"; // 0x3fb MovS
	var_46_int = var_43_int; // 0x3fc Push
	if(var_46_int == 0) goto Label_1023; // 0x3fd JumpB
	var_45_string = var_45_string + var_43_int; // 0x3fe Add2
	
Label_1023:
	var_42_string = var_45_string; // 0x3ff Mov
	return 2; // 0x400 Return
}


func_1147(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0x47c PushV
	var_164_string = "ook1Dohodyaga2"; // 0x47d MovS
	func_1008(var_163_int, var_164_string); // 0x47e NEW_2
	var_165_int = 0; // 0x480 PushI
	var_166_bool = var_163_int == var_165_int; // 0x481 Eq
	if(var_166_bool == 0) goto Label_1157; // 0x482 JumpB
	var_161_bool = 1; // 0x483 MovB
	return 0; // 0x484 Return
	
Label_1157:
	var_161_bool = 0; // 0x485 MovB
	return 0; // 0x486 Return
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
	func_1025(var_36_int); // 0x307 NEW_2
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
	func_1018(var_58_string, var_59_int); // 0x323 NEW_2
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


