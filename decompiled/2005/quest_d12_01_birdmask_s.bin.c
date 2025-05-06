task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x105 PushI
	if(var_12_int == 0) goto Label_741; // 0x106 JumpB
	func_1076(); // 0x108 NEW_2
	var_14_int = 41936; // 0x10a PushI
	var_15_bool = var_11_object == var_14_int; // 0x10b Eq
	if(var_15_bool == 0) goto Label_274; // 0x10c JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x10d PushV
	var_16_object = var_1_object; // 0x10e MovT
	var_17_object = var_0_object; // 0x10f MovT
	func_1182(); // 0x110 NEW_2
	
Label_274:
	var_20_int = 41942; // 0x112 PushI
	var_21_bool = var_11_object == var_20_int; // 0x113 Eq
	if(var_21_bool == 0) goto Label_282; // 0x114 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x115 PushV
	var_22_object = var_1_object; // 0x116 MovT
	var_23_object = var_0_object; // 0x117 MovT
	func_1188(); // 0x118 NEW_2
	
Label_282:
	var_26_int = 41920; // 0x11a PushI
	var_27_bool = var_11_object == var_26_int; // 0x11b Eq
	if(var_27_bool == 0) goto Label_290; // 0x11c JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x11d PushV
	var_28_object = var_1_object; // 0x11e MovT
	var_29_object = var_0_object; // 0x11f MovT
	func_1194(); // 0x120 NEW_2
	
Label_290:
	var_32_int = 37168; // 0x122 PushI
	var_33_bool = var_11_object == var_32_int; // 0x123 Eq
	if(var_33_bool == 0) goto Label_303; // 0x124 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x125 PushV
	var_34_object = var_1_object; // 0x126 MovT
	var_35_object = var_0_object; // 0x127 MovT
	func_1200(); // 0x128 NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0x12a PushV
	var_46_object = var_1_object; // 0x12b MovT
	var_47_object = var_0_object; // 0x12c MovT
	func_1175(); // 0x12d NEW_2
	
Label_303:
	var_54_int = 37143; // 0x12f PushI
	var_55_bool = var_10_bool == var_54_int; // 0x130 Eq
	if(var_55_bool == 0) goto Label_432; // 0x131 JumpB
	var_56_bool = 0; var_57_object = Obj(); // 0x132 PushV
	var_57_object = var_1_object; // 0x133 MovT
	func_1207(var_56_bool, var_57_object); // 0x134 NEW_2
	var_105_bool = var_56_bool == 0; // 0x136 Not
	if(var_105_bool == 0) goto Label_347; // 0x137 JumpB
	var_106_string = ""; // 0x138 PushV
	var_106_string = "Neutral"; // 0x139 MovS
	func_238(var_11_object, var_106_string); // 0x13a NEW_2
	var_123_int = 535461; // 0x13c PushI
	SetMessage(var_123_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_124_bool = 0; var_125_object = Obj(); // 0x141 PushV
	var_125_object = var_1_object; // 0x142 MovT
	func_1239(var_125_object); // 0x143 NEW_2
	if(var_124_bool == 0) goto Label_331; // 0x145 JumpB
	var_132_int = 539970; // 0x146 PushI
	var_133_int = 41937; // 0x147 PushI
	var_134_int = 41936; // 0x148 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x149 TObjFunc
	
Label_331:
	var_135_bool = 0; var_136_object = Obj(); // 0x14b PushV
	var_136_object = var_1_object; // 0x14c MovT
	func_1251(var_136_object); // 0x14d NEW_2
	if(var_135_bool == 0) goto Label_341; // 0x14f JumpB
	var_141_int = 539976; // 0x150 PushI
	var_142_int = 41943; // 0x151 PushI
	var_143_int = 41942; // 0x152 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x153 TObjFunc
	
Label_341:
	var_144_int = 535479; // 0x155 PushI
	var_145_int = -1; // 0x156 PushI
	var_146_int = 37161; // 0x157 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_147_bool = 0; var_148_object = Obj(); // 0x15b PushV
	var_148_object = var_1_object; // 0x15c MovT
	func_1217(var_147_bool, var_148_object); // 0x15d NEW_2
	var_158_bool = var_147_bool == 0; // 0x15f Not
	if(var_158_bool == 0) goto Label_378; // 0x160 JumpB
	var_159_string = ""; // 0x161 PushV
	var_159_string = "Neutral"; // 0x162 MovS
	func_238(var_11_object, var_159_string); // 0x163 NEW_2
	var_160_int = 535443; // 0x165 PushI
	SetMessage(var_160_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_161_bool = 0; var_162_object = Obj(); // 0x16a PushV
	var_162_object = var_1_object; // 0x16b MovT
	func_1263(var_162_object); // 0x16c NEW_2
	if(var_161_bool == 0) goto Label_372; // 0x16e JumpB
	var_167_int = 539954; // 0x16f PushI
	var_168_int = 41921; // 0x170 PushI
	var_169_int = 41920; // 0x171 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x172 TObjFunc
	
Label_372:
	var_170_int = 535460; // 0x174 PushI
	var_171_int = -1; // 0x175 PushI
	var_172_int = 37142; // 0x176 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_173_bool = 0; // 0x17a PushV
	var_173_bool = 0; // 0x17b MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x17c PushV
	var_175_object = var_1_object; // 0x17d MovT
	func_1207(var_174_bool, var_175_object); // 0x17e NEW_2
	if(var_174_bool == 0) goto Label_391; // 0x180 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x181 PushV
	var_177_object = var_1_object; // 0x182 MovT
	func_1227(var_177_object); // 0x183 NEW_2
	if(var_176_bool == 0) goto Label_391; // 0x185 JumpB
	var_173_bool = 1; // 0x186 MovB
	
Label_391:
	if(var_173_bool == 0) goto Label_412; // 0x187 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x188 PushV
	var_182_object = var_1_object; // 0x189 MovT
	var_183_object = var_0_object; // 0x18a MovT
	func_1169(); // 0x18b NEW_2
	var_186_string = ""; // 0x18d PushV
	var_186_string = "Neutral"; // 0x18e MovS
	func_238(var_11_object, var_186_string); // 0x18f NEW_2
	var_187_int = 535485; // 0x191 PushI
	SetMessage(var_187_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_188_int = 539994; // 0x196 PushI
	var_189_int = 41963; // 0x197 PushI
	var_190_int = 41962; // 0x198 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_191_string = ""; // 0x19c PushV
	var_191_string = "Neutral"; // 0x19d MovS
	func_238(var_11_object, var_191_string); // 0x19e NEW_2
	var_192_int = 535487; // 0x1a0 PushI
	SetMessage(var_192_int); // 0x1a1 TObjFunc
	ClearReplies(); // 0x1a3 TObjFunc
	var_193_int = 535488; // 0x1a5 PushI
	var_194_int = -1; // 0x1a6 PushI
	var_195_int = 37170; // 0x1a7 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1a8 TObjFunc
	var_196_int = 539997; // 0x1aa PushI
	var_197_int = -1; // 0x1ab PushI
	var_198_int = 41965; // 0x1ac PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1ad TObjFunc
	return 0; // 0x1af Return
	
Label_432:
	var_199_int = 41963; // 0x1b0 PushI
	var_200_bool = var_10_bool == var_199_int; // 0x1b1 Eq
	if(var_200_bool == 0) goto Label_450; // 0x1b2 JumpB
	var_201_string = ""; // 0x1b3 PushV
	var_201_string = "Neutral"; // 0x1b4 MovS
	func_238(var_11_object, var_201_string); // 0x1b5 NEW_2
	var_202_int = 539995; // 0x1b7 PushI
	SetMessage(var_202_int); // 0x1b8 TObjFunc
	ClearReplies(); // 0x1ba TObjFunc
	var_203_int = 535486; // 0x1bc PushI
	var_204_int = -1; // 0x1bd PushI
	var_205_int = 37168; // 0x1be PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1bf TObjFunc
	return 0; // 0x1c1 Return
	
Label_450:
	var_206_int = 41921; // 0x1c2 PushI
	var_207_bool = var_10_bool == var_206_int; // 0x1c3 Eq
	if(var_207_bool == 0) goto Label_473; // 0x1c4 JumpB
	var_208_string = ""; // 0x1c5 PushV
	var_208_string = "Neutral"; // 0x1c6 MovS
	func_238(var_11_object, var_208_string); // 0x1c7 NEW_2
	var_209_int = 539955; // 0x1c9 PushI
	SetMessage(var_209_int); // 0x1ca TObjFunc
	ClearReplies(); // 0x1cc TObjFunc
	var_210_int = 539987; // 0x1ce PushI
	var_211_int = 41954; // 0x1cf PushI
	var_212_int = 41953; // 0x1d0 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1d1 TObjFunc
	var_213_int = 539969; // 0x1d3 PushI
	var_214_int = -1; // 0x1d4 PushI
	var_215_int = 41935; // 0x1d5 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_216_int = 41954; // 0x1d9 PushI
	var_217_bool = var_10_bool == var_216_int; // 0x1da Eq
	if(var_217_bool == 0) goto Label_491; // 0x1db JumpB
	var_218_string = ""; // 0x1dc PushV
	var_218_string = "Neutral"; // 0x1dd MovS
	func_238(var_11_object, var_218_string); // 0x1de NEW_2
	var_219_int = 539988; // 0x1e0 PushI
	SetMessage(var_219_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_220_int = 539956; // 0x1e5 PushI
	var_221_int = 41923; // 0x1e6 PushI
	var_222_int = 41922; // 0x1e7 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_223_int = 41923; // 0x1eb PushI
	var_224_bool = var_10_bool == var_223_int; // 0x1ec Eq
	if(var_224_bool == 0) goto Label_514; // 0x1ed JumpB
	var_225_string = ""; // 0x1ee PushV
	var_225_string = "Neutral"; // 0x1ef MovS
	func_238(var_11_object, var_225_string); // 0x1f0 NEW_2
	var_226_int = 539957; // 0x1f2 PushI
	SetMessage(var_226_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_227_int = 539958; // 0x1f7 PushI
	var_228_int = 41925; // 0x1f8 PushI
	var_229_int = 41924; // 0x1f9 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1fa TObjFunc
	var_230_int = 539989; // 0x1fc PushI
	var_231_int = 41956; // 0x1fd PushI
	var_232_int = 41955; // 0x1fe PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1ff TObjFunc
	return 0; // 0x201 Return
	
Label_514:
	var_233_int = 41956; // 0x202 PushI
	var_234_bool = var_10_bool == var_233_int; // 0x203 Eq
	if(var_234_bool == 0) goto Label_537; // 0x204 JumpB
	var_235_string = ""; // 0x205 PushV
	var_235_string = "Neutral"; // 0x206 MovS
	func_238(var_11_object, var_235_string); // 0x207 NEW_2
	var_236_int = 539990; // 0x209 PushI
	SetMessage(var_236_int); // 0x20a TObjFunc
	ClearReplies(); // 0x20c TObjFunc
	var_237_int = 539991; // 0x20e PushI
	var_238_int = 41929; // 0x20f PushI
	var_239_int = 41957; // 0x210 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x211 TObjFunc
	var_240_int = 539992; // 0x213 PushI
	var_241_int = 41927; // 0x214 PushI
	var_242_int = 41958; // 0x215 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_243_int = 41925; // 0x219 PushI
	var_244_bool = var_10_bool == var_243_int; // 0x21a Eq
	if(var_244_bool == 0) goto Label_555; // 0x21b JumpB
	var_245_string = ""; // 0x21c PushV
	var_245_string = "Neutral"; // 0x21d MovS
	func_238(var_11_object, var_245_string); // 0x21e NEW_2
	var_246_int = 539959; // 0x220 PushI
	SetMessage(var_246_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_247_int = 539960; // 0x225 PushI
	var_248_int = 41927; // 0x226 PushI
	var_249_int = 41926; // 0x227 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_250_int = 41927; // 0x22b PushI
	var_251_bool = var_10_bool == var_250_int; // 0x22c Eq
	if(var_251_bool == 0) goto Label_578; // 0x22d JumpB
	var_252_string = ""; // 0x22e PushV
	var_252_string = "Neutral"; // 0x22f MovS
	func_238(var_11_object, var_252_string); // 0x230 NEW_2
	var_253_int = 539961; // 0x232 PushI
	SetMessage(var_253_int); // 0x233 TObjFunc
	ClearReplies(); // 0x235 TObjFunc
	var_254_int = 539962; // 0x237 PushI
	var_255_int = 41929; // 0x238 PushI
	var_256_int = 41928; // 0x239 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x23a TObjFunc
	var_257_int = 539966; // 0x23c PushI
	var_258_int = -1; // 0x23d PushI
	var_259_int = 41932; // 0x23e PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x23f TObjFunc
	return 0; // 0x241 Return
	
Label_578:
	var_260_int = 41929; // 0x242 PushI
	var_261_bool = var_10_bool == var_260_int; // 0x243 Eq
	if(var_261_bool == 0) goto Label_601; // 0x244 JumpB
	var_262_string = ""; // 0x245 PushV
	var_262_string = "Neutral"; // 0x246 MovS
	func_238(var_11_object, var_262_string); // 0x247 NEW_2
	var_263_int = 539963; // 0x249 PushI
	SetMessage(var_263_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_264_int = 539965; // 0x24e PushI
	var_265_int = -1; // 0x24f PushI
	var_266_int = 41931; // 0x250 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x251 TObjFunc
	var_267_int = 539968; // 0x253 PushI
	var_268_int = -1; // 0x254 PushI
	var_269_int = 41934; // 0x255 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x256 TObjFunc
	return 0; // 0x258 Return
	
Label_601:
	var_270_int = 41943; // 0x259 PushI
	var_271_bool = var_10_bool == var_270_int; // 0x25a Eq
	if(var_271_bool == 0) goto Label_624; // 0x25b JumpB
	var_272_string = ""; // 0x25c PushV
	var_272_string = "Neutral"; // 0x25d MovS
	func_238(var_11_object, var_272_string); // 0x25e NEW_2
	var_273_int = 539977; // 0x260 PushI
	SetMessage(var_273_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_274_int = 539978; // 0x265 PushI
	var_275_int = 41945; // 0x266 PushI
	var_276_int = 41944; // 0x267 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x268 TObjFunc
	var_277_int = 539984; // 0x26a PushI
	var_278_int = 41951; // 0x26b PushI
	var_279_int = 41950; // 0x26c PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x26d TObjFunc
	return 0; // 0x26f Return
	
Label_624:
	var_280_int = 41951; // 0x270 PushI
	var_281_bool = var_10_bool == var_280_int; // 0x271 Eq
	if(var_281_bool == 0) goto Label_642; // 0x272 JumpB
	var_282_string = ""; // 0x273 PushV
	var_282_string = "Neutral"; // 0x274 MovS
	func_238(var_11_object, var_282_string); // 0x275 NEW_2
	var_283_int = 539985; // 0x277 PushI
	SetMessage(var_283_int); // 0x278 TObjFunc
	ClearReplies(); // 0x27a TObjFunc
	var_284_int = 539986; // 0x27c PushI
	var_285_int = -1; // 0x27d PushI
	var_286_int = 41952; // 0x27e PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_287_int = 41945; // 0x282 PushI
	var_288_bool = var_10_bool == var_287_int; // 0x283 Eq
	if(var_288_bool == 0) goto Label_665; // 0x284 JumpB
	var_289_string = ""; // 0x285 PushV
	var_289_string = "Neutral"; // 0x286 MovS
	func_238(var_11_object, var_289_string); // 0x287 NEW_2
	var_290_int = 539979; // 0x289 PushI
	SetMessage(var_290_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_291_int = 539980; // 0x28e PushI
	var_292_int = 41947; // 0x28f PushI
	var_293_int = 41946; // 0x290 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x291 TObjFunc
	var_294_int = 539993; // 0x293 PushI
	var_295_int = -1; // 0x294 PushI
	var_296_int = 41961; // 0x295 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x296 TObjFunc
	return 0; // 0x298 Return
	
Label_665:
	var_297_int = 41947; // 0x299 PushI
	var_298_bool = var_10_bool == var_297_int; // 0x29a Eq
	if(var_298_bool == 0) goto Label_688; // 0x29b JumpB
	var_299_string = ""; // 0x29c PushV
	var_299_string = "Neutral"; // 0x29d MovS
	func_238(var_11_object, var_299_string); // 0x29e NEW_2
	var_300_int = 539981; // 0x2a0 PushI
	SetMessage(var_300_int); // 0x2a1 TObjFunc
	ClearReplies(); // 0x2a3 TObjFunc
	var_301_int = 539982; // 0x2a5 PushI
	var_302_int = -1; // 0x2a6 PushI
	var_303_int = 41948; // 0x2a7 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x2a8 TObjFunc
	var_304_int = 539983; // 0x2aa PushI
	var_305_int = -1; // 0x2ab PushI
	var_306_int = 41949; // 0x2ac PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x2ad TObjFunc
	return 0; // 0x2af Return
	
Label_688:
	var_307_int = 41937; // 0x2b0 PushI
	var_308_bool = var_10_bool == var_307_int; // 0x2b1 Eq
	if(var_308_bool == 0) goto Label_711; // 0x2b2 JumpB
	var_309_string = ""; // 0x2b3 PushV
	var_309_string = "Neutral"; // 0x2b4 MovS
	func_238(var_11_object, var_309_string); // 0x2b5 NEW_2
	var_310_int = 539971; // 0x2b7 PushI
	SetMessage(var_310_int); // 0x2b8 TObjFunc
	ClearReplies(); // 0x2ba TObjFunc
	var_311_int = 539972; // 0x2bc PushI
	var_312_int = 41939; // 0x2bd PushI
	var_313_int = 41938; // 0x2be PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x2bf TObjFunc
	var_314_int = 539975; // 0x2c1 PushI
	var_315_int = -1; // 0x2c2 PushI
	var_316_int = 41941; // 0x2c3 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x2c4 TObjFunc
	return 0; // 0x2c6 Return
	
Label_711:
	var_317_int = 41939; // 0x2c7 PushI
	var_318_bool = var_10_bool == var_317_int; // 0x2c8 Eq
	if(var_318_bool == 0) goto Label_729; // 0x2c9 JumpB
	var_319_string = ""; // 0x2ca PushV
	var_319_string = "Neutral"; // 0x2cb MovS
	func_238(var_11_object, var_319_string); // 0x2cc NEW_2
	var_320_int = 539973; // 0x2ce PushI
	SetMessage(var_320_int); // 0x2cf TObjFunc
	ClearReplies(); // 0x2d1 TObjFunc
	var_321_int = 539974; // 0x2d3 PushI
	var_322_int = -1; // 0x2d4 PushI
	var_323_int = 41940; // 0x2d5 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x2d6 TObjFunc
	return 0; // 0x2d8 Return
	
Label_729:
	var_3_string = 1; // 0x2d9 TMovB
	var_324_bool = 0; // 0x2da PushV
	func_1167(var_324_bool); // 0x2db NEW_2
	if(var_324_bool == 0) goto Label_737; // 0x2dd JumpB
	lshStopAnimation(); // 0x2de Func
	goto Label_739; // 0x2e0 Jump
	
Label_739:
	return 0; // 0x2e3 Return
	
Label_737:
	StopAnimation(); // 0x2e1 Func
	
Label_741:
	return 0; // 0x2e5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x2f3 PushV
	func_1400(var_11_int); // 0x2f4 NEW_2
	var_15_int = 0; // 0x2f6 PushI
	var_16_bool = var_11_int == var_15_int; // 0x2f7 Eq
	if(var_16_bool == 0) goto Label_770; // 0x2f8 JumpB
	func_836(var_9_object, var_10_object); // 0x2fa NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0x2fc PushV
	var_21_object = var_10_object; // 0x2fd Mov
	TaskCall(0); // 0x2fe TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x2ff NEW_2
	TaskReturn(); // 0x300 TaskReturn
	
Label_770:
	return 0; // 0x302 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x32e PushI
	var_12_bool = var_10_int == var_11_int; // 0x32f Eq
	if(var_12_bool == 0) goto Label_835; // 0x330 JumpB
	var_13_bool = 0; // 0x331 PushV
	func_798(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x332 NEW_2
	if(var_13_bool == 0) goto Label_829; // 0x334 JumpB
	var_26_bool = var_2_object == 0; // 0x335 Not
	if(var_26_bool == 0) goto Label_828; // 0x336 JumpB
	var_27_object = Obj(); // 0x337 PushV
	var_27_object = var_4_bool; // 0x338 MovT
	func_1065(var_27_object); // 0x339 NEW_2
	var_2_object = 1; // 0x33b TMovB
	
Label_828:
	goto Label_835; // 0x33c Jump
	
Label_835:
	return 0; // 0x343 Return
	
Label_829:
	var_34_object = var_2_object; // 0x33d PushT
	if(var_34_object == 0) goto Label_835; // 0x33e JumpB
	var_35_string = "head"; // 0x33f PushS
	UnlookAsync(var_35_string); // 0x340 Func
	var_2_object = 0; // 0x342 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_742:
	var_10_bool = 1; // 0x2e6 PushB
	if(var_10_bool == 0) goto Label_753; // 0x2e7 JumpB
	var_11_float = 0; var_12_float = 0; // 0x2e8 PushV
	var_11_float = 300; // 0x2e9 MovI
	var_12_float = 100; // 0x2ea MovI
	func_771(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x2eb NEW_2
	var_73_int = 1; // 0x2ed PushI
	Sleep(var_73_int); // 0x2ee Func
	goto Label_742; // 0x2f0 Jump
	
Label_753:
	return 0; // 0x2f1 Return
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 130.0; // 0x4 MovF
	func_949(var_32_object, var_33_float); // 0x5 NEW_2
	var_77_bool = var_31_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_1161(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_1159(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_1163(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_1165(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_1292(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_29_int = -1; // 0x26 MovI
	IsOverrideActive(var_28_bool); // 0x27 Func
	var_90_bool = var_28_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_20_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_27_object); // 0x2d Func
	var_91_object = Obj(); var_92_object = Obj(); // 0x2f PushV
	var_91_object = var_21_object; // 0x30 Mov
	var_92_object = var_27_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_30_bool); // 0x36 ObjFunc
	
Label_56:
	var_259_bool = var_30_bool == 0; // 0x38 Not
	if(var_259_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_260_object = Obj(); // 0x3f PushV
	var_260_object = var_21_object; // 0x40 Mov
	func_1017(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1281(var_209_bool)
{
	var_211_int = 0; // 0x502 PushV
	func_1127(var_211_int); // 0x503 NEW_2
	var_216_int = 19; // 0x505 PushI
	var_217_bool = var_211_int >= var_216_int; // 0x506 GE
	if(var_217_bool == 0) goto Label_1290; // 0x507 JumpB
	var_209_bool = 1; // 0x508 MovB
	return 0; // 0x509 Return
	
Label_1290:
	var_209_bool = 0; // 0x50a MovB
	return 0; // 0x50b Return
}


func_771(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x304 PushV
	func_944(var_13_bool); // 0x305 NEW_2
	var_16_bool = var_13_bool == 0; // 0x307 Not
	if(var_16_bool == 0) goto Label_778; // 0x308 JumpB
	return 0; // 0x309 Return
	
Label_778:
	var_17_string = "player"; // 0x30a PushS
	FindActor(var_9_object, var_17_string); // 0x30b Func
	var_2_object = 0; // 0x30d TMovB
	var_3_string = 0; // 0x30e TMovB
	var_0_object = var_11_float; // 0x30f TMov
	var_1_object = var_12_float; // 0x310 TMov
	var_18_int = 10; // 0x311 PushI
	var_19_float = 1.0; // 0x312 PushF
	SetTimer(var_18_int, var_19_float); // 0x313 Func
	func_850(); // 0x316 NEW_2
	var_71_bool = var_3_string == 0; // 0x318 Not
	if(var_71_bool == 0) goto Label_797; // 0x319 JumpB
	var_72_int = 10; // 0x31a PushI
	KillTimer(var_72_int); // 0x31b Func
	
Label_797:
	return 0; // 0x31d Return
}


func_1159(var_79_int)
{
	var_79_int = 515571; // 0x487 MovI
	return 0; // 0x488 Return
}


func_1161(var_78_int)
{
	var_78_int = 504029; // 0x489 MovI
	return 0; // 0x48a Return
}


func_1034(var_191_string)
{
	var_192_bool = 0; var_193_float = 0; var_194_float = 0; var_195_bool = 0; var_196_float = 0; var_197_float = 0; // 0x40a PushV
	lshHasAnimation(var_195_bool, var_191_string); // 0x40b Func
	var_198_bool = var_195_bool; // 0x40d Push
	if(var_198_bool == 0) goto Label_1045; // 0x40e JumpB
	lshGetAnimTimes(var_191_string, var_196_float, var_197_float); // 0x40f Func
	var_199_bool = 0; // 0x411 PushB
	lshPlayAnimation(var_196_float, var_197_float, var_199_bool); // 0x412 Func
	goto Label_1049; // 0x414 Jump
	
Label_1049:
	return 6; // 0x419 Return
	
Label_1045:
	var_200_string = "Can't find lsh animation : "; // 0x415 PushS
	var_201_int = var_200_string + var_191_string; // 0x416 Add
	Trace(var_201_int); // 0x417 Func
}


func_1163(var_80_string)
{
	var_80_string = "ui/NPC_bmask.png"; // 0x48b MovS
	return 0; // 0x48c Return
}


func_1292(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x50c PushV
	var_85_string = "branch"; // 0x50d PushS
	GetVariable(var_85_string, var_84_int); // 0x50e Func
	var_86_int = 0; // 0x510 PushI
	var_87_bool = var_84_int == var_86_int; // 0x511 Eq
	if(var_87_bool == 0) goto Label_1302; // 0x512 JumpB
	var_82_int = 1; // 0x513 MovI
	return 2; // 0x514 Return
	
Label_1302:
	var_88_int = 1; // 0x516 PushI
	var_89_bool = var_84_int == var_88_int; // 0x517 Eq
	if(var_89_bool == 0) goto Label_1307; // 0x518 JumpB
	var_82_int = 2; // 0x519 MovI
	return 2; // 0x51a Return
	
Label_1307:
	var_82_int = 3; // 0x51b MovI
	return 2; // 0x51c Return
}


func_1165(var_81_string)
{
	var_81_string = "ui/NPC_bmask_b.png"; // 0x48d MovS
	return 0; // 0x48e Return
}


func_1167(var_73_bool)
{
	var_73_bool = 0; // 0x48f MovB
	return 0; // 0x490 Return
}


func_1169()
{
	var_244_string = "ood12BirdmaskS1"; // 0x492 PushS
	var_245_int = 1; // 0x493 PushI
	SetVariable(var_244_string, var_245_int); // 0x494 Func
	return 0; // 0x496 Return
}


func_1175()
{
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x498 PushV
	var_49_string = "quest_d12_01"; // 0x499 MovS
	var_50_string = "init_sobor"; // 0x49a MovS
	func_1115(var_48_bool, var_49_string, var_50_string); // 0x49b NEW_2
	return 0; // 0x49d Return
}


func_1050(var_152_string, var_153_bool)
{
	var_156_bool = 0; var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_float = 0; var_161_float = 0; // 0x41a PushV
	lshHasAnimation(var_159_bool, var_152_string); // 0x41b Func
	var_162_bool = var_159_bool; // 0x41d Push
	if(var_162_bool == 0) goto Label_1060; // 0x41e JumpB
	lshGetAnimTimes(var_152_string, var_160_float, var_161_float); // 0x41f Func
	lshPlayAnimation(var_160_float, var_161_float, var_153_bool); // 0x421 Func
	goto Label_1064; // 0x423 Jump
	
Label_1064:
	return 6; // 0x428 Return
	
Label_1060:
	var_163_string = "Can't find lsh animation : "; // 0x424 PushS
	var_164_int = var_163_string + var_152_string; // 0x425 Add
	Trace(var_164_int); // 0x426 Func
}


func_1309(var_112_bool, var_113_int)
{
	var_114_int = 6; // 0x51e PushI
	add(var_114_int); // 0x51f ObjFunc
	var_115_int = 26; // 0x521 PushI
	add(var_115_int); // 0x522 ObjFunc
	var_116_int = 2; // 0x524 PushI
	add(var_116_int); // 0x525 ObjFunc
	var_117_int = 22; // 0x527 PushI
	add(var_117_int); // 0x528 ObjFunc
	var_118_bool = 0; // 0x52a PushB
	var_119_bool = var_112_bool == var_118_bool; // 0x52b Eq
	if(var_119_bool == 0) goto Label_1335; // 0x52c JumpB
	var_120_int = 15; // 0x52d PushI
	add(var_120_int); // 0x52e ObjFunc
	var_121_int = 5; // 0x530 PushI
	add(var_121_int); // 0x531 ObjFunc
	var_122_int = 16; // 0x533 PushI
	add(var_122_int); // 0x534 ObjFunc
	goto Label_1341; // 0x536 Jump
	
Label_1341:
	return 0; // 0x53d Return
	
Label_1335:
	var_123_int = 0; // 0x537 PushI
	var_124_bool = var_113_int != var_123_int; // 0x538 Neq
	if(var_124_bool == 0) goto Label_1341; // 0x539 JumpB
	var_125_int = 15; // 0x53a PushI
	add(var_125_int); // 0x53b ObjFunc
}


func_798(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x31e PushV
	var_16_bool = var_4_bool == 0; // 0x31f NullEq
	if(var_16_bool == 0) goto Label_803; // 0x320 JumpB
	var_13_bool = 0; // 0x321 MovB
	return 2; // 0x322 Return
	
Label_803:
	var_17_float = 0; var_18_object = Obj(); // 0x323 PushV
	var_18_object = var_4_bool; // 0x324 MovT
	func_936(var_18_object); // 0x325 NEW_2
	var_15_float = sqrt(var_17_float); // 0x327 Sqrt2
	var_25_object = var_2_object; // 0x328 PushT
	if(var_25_object == 0) goto Label_811; // 0x329 JumpB
	var_15_float = var_15_float - var_1_object; // 0x32a Sub2
	
Label_811:
	var_13_bool = var_15_float < var_0_object; // 0x32b LT2
	return 2; // 0x32c Return
}


func_1182()
{
	var_18_string = "ood12BirdmaskS2"; // 0x49f PushS
	var_19_int = 1; // 0x4a0 PushI
	SetVariable(var_18_string, var_19_int); // 0x4a1 Func
	return 0; // 0x4a3 Return
}


func_929(var_61_bool)
{
	var_61_bool = 1; // 0x3a1 MovB
	return 0; // 0x3a2 Return
}


func_931()
{
	StopAnimation(); // 0x3a3 Func
	StopGroup0(); // 0x3a5 Func
	return 0; // 0x3a7 Return
}


func_1188()
{
	var_24_string = "ood12BirdmaskS3"; // 0x4a5 PushS
	var_25_int = 1; // 0x4a6 PushI
	SetVariable(var_24_string, var_25_int); // 0x4a7 Func
	return 0; // 0x4a9 Return
}


func_936(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x3a8 PushV
	GetPosition(var_22_cvector); // 0x3a9 Func
	GetPosition(var_23_cvector); // 0x3ab ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x3ad Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x3ae Or2
	return 6; // 0x3af Return
}


func_1065(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x429 PushV
	GetEyesHeight(var_30_float); // 0x42a ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x42c MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x42d PushE
	var_32_float = var_30_float; // 0x42e Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x42f PopE
	var_33_string = "head"; // 0x430 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x431 Func
	return 4; // 0x433 Return
}


func_1194()
{
	var_30_string = "ood12BirdmaskS4"; // 0x4ab PushS
	var_31_int = 1; // 0x4ac PushI
	SetVariable(var_30_string, var_31_int); // 0x4ad Func
	return 0; // 0x4af Return
}


func_1200()
{
	var_36_string = ""; var_37_bool = 0; // 0x4b1 PushV
	var_36_string = "sobor@door1"; // 0x4b2 MovS
	var_37_bool = 0; // 0x4b3 MovB
	func_1098(var_36_string, var_37_bool); // 0x4b4 NEW_2
	return 0; // 0x4b6 Return
}


func_944(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x3b0 PushV
	IsLoaded(var_15_bool); // 0x3b1 Func
	var_13_bool = var_15_bool; // 0x3b3 Mov
	return 2; // 0x3b4 Return
}


func_1076()
{
	var_13_bool = 0; // 0x434 PushV
	func_1167(var_13_bool); // 0x435 NEW_2
	if(var_13_bool == 0) goto Label_1082; // 0x437 JumpB
	lshStopSpeech(); // 0x438 Func
	
Label_1082:
	return 0; // 0x43a Return
}


func_949(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x3b5 PushV
	GetPosition(var_44_cvector); // 0x3b6 ObjFunc
	GetEyesHeight(var_43_float); // 0x3b8 ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x3ba PushE
	var_52_float = var_52_float + var_43_float; // 0x3bb Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x3bc PopE
	GetPosition(var_45_cvector); // 0x3bd Func
	GetEyesHeight(var_43_float); // 0x3bf Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x3c1 PushE
	var_53_float = var_53_float + var_43_float; // 0x3c2 Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x3c3 PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x3c4 Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x3c5 PushE
	var_54_float = 0; // 0x3c6 MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x3c7 PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x3c8 Or
	var_56_float = sqrt(var_55_int); // 0x3c9 Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x3ca Div2
	var_47_cvector = -var_46_cvector; // 0x3cb Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x3cc Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x3cd PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x3ce PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x3cf Xor2
	func_1083(var_58_cvector, var_59_cvector); // 0x3d0 NEW_2
	var_66_int = 25; // 0x3d2 PushI
	var_67_float = var_58_cvector * var_66_int; // 0x3d3 Mult
	var_68_int = var_57_float + var_67_float; // 0x3d4 Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x3d5 PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x3d6 Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x3d7 Add2
	IsOverrideActive(var_50_bool); // 0x3d8 Func
	var_70_bool = var_50_bool; // 0x3da Push
	if(var_70_bool == 0) goto Label_990; // 0x3db JumpB
	var_31_bool = 0; // 0x3dc MovB
	return 18; // 0x3dd Return
	
Label_990:
	StopWorld(); // 0x3de Func
	CameraTransit(var_49_cvector, var_47_cvector); // 0x3e0 Func
	var_71_float = GetByIndex(var_48_cvector, 0); // 0x3e2 PushE
	var_72_float = GetByIndex(var_48_cvector, 2); // 0x3e3 PushE
	Rotate(var_71_float, var_72_float); // 0x3e4 Func
	var_73_bool = 0; // 0x3e6 PushV
	func_1167(var_73_bool); // 0x3e7 NEW_2
	if(var_73_bool == 0) goto Label_1003; // 0x3e9 JumpB
	goto Label_1011; // 0x3ea Jump
	
Label_1011:
	CameraWaitForPlayFinish(); // 0x3f3 Func
	ResumeWorld(); // 0x3f5 Func
	var_31_bool = 1; // 0x3f7 MovB
	return 18; // 0x3f8 Return
	
Label_1003:
	var_74_string = "head"; // 0x3eb PushS
	HasAnimationTrack(var_51_bool, var_74_string); // 0x3ec Func
	var_75_bool = var_51_bool; // 0x3ee Push
	if(var_75_bool == 0) goto Label_1011; // 0x3ef JumpB
	var_76_string = "head"; // 0x3f0 PushS
	LookAsyncCamera(var_76_string); // 0x3f1 Func
}


func_1207(var_98_bool, var_99_object)
{
	var_100_bool = 0; var_101_object = Obj(); // 0x4b8 PushV
	var_101_object = var_99_object; // 0x4b9 Mov
	func_1275(var_101_object); // 0x4ba NEW_2
	if(var_100_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_98_bool = 1; // 0x4bd MovB
	return 0; // 0x4be Return
	
Label_1215:
	var_98_bool = 0; // 0x4bf MovB
	return 0; // 0x4c0 Return
}


func_1083(var_58_cvector, var_59_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0x43b PushV
	var_63_int = var_59_cvector | var_59_cvector; // 0x43c Or
	var_62_float = sqrt(var_63_int); // 0x43d Sqrt2
	var_64_float = 0.0; // 0x43e PushF
	var_65_bool = var_62_float < var_64_float; // 0x43f LT
	if(var_65_bool == 0) goto Label_1091; // 0x440 JumpB
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x441 MovV
	return 2; // 0x442 Return
	
Label_1091:
	var_58_cvector = var_59_cvector / var_59_cvector; // 0x443 Div2
	return 2; // 0x444 Return
}


func_1342(var_137_bool, var_138_int)
{
	var_139_int = 0; var_140_int = 0; // 0x53e PushV
	var_141_string = "vol_"; // 0x53f PushS
	var_142_int = var_141_string + var_138_int; // 0x540 Add
	GetVariable(var_142_int, var_140_int); // 0x541 Func
	var_143_int = 4; // 0x543 PushI
	var_144_int = var_140_int & var_143_int; // 0x544 And
	var_145_int = 0; // 0x545 PushI
	var_137_bool = var_144_int != var_145_int; // 0x546 Neq2
	return 2; // 0x547 Return
}


func_1217(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj(); // 0x4c2 PushV
	var_210_object = var_208_object; // 0x4c3 Mov
	func_1281(var_210_object); // 0x4c4 NEW_2
	if(var_209_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_207_bool = 1; // 0x4c7 MovB
	return 0; // 0x4c8 Return
	
Label_1225:
	var_207_bool = 0; // 0x4c9 MovB
	return 0; // 0x4ca Return
}


func_836(var_2_object, var_3_string)
{
	func_931(); // 0x345 NEW_2
	var_17_int = 10; // 0x347 PushI
	KillTimer(var_17_int); // 0x348 Func
	var_18_object = var_2_object; // 0x34a PushT
	if(var_18_object == 0) goto Label_848; // 0x34b JumpB
	var_19_string = "head"; // 0x34c PushS
	UnlookAsync(var_19_string); // 0x34d Func
	var_2_object = 0; // 0x34f TMovB
	
Label_848:
	var_3_string = 1; // 0x350 TMovB
	return 0; // 0x351 Return
}


func_1093(var_168_int, var_169_string)
{
	var_170_int = 0; var_171_int = 0; // 0x445 PushV
	GetVariable(var_169_string, var_171_int); // 0x446 Func
	var_168_int = var_171_int; // 0x448 Mov
	return 2; // 0x449 Return
}


func_1352(var_128_bool, var_129_int)
{
	var_130_int = 0; var_131_int = 0; // 0x548 PushV
	var_132_string = "vol_"; // 0x549 PushS
	var_133_int = var_132_string + var_129_int; // 0x54a Add
	GetVariable(var_133_int, var_131_int); // 0x54b Func
	var_134_int = 16; // 0x54d PushI
	var_135_int = var_131_int & var_134_int; // 0x54e And
	var_136_int = 0; // 0x54f PushI
	var_128_bool = var_135_int != var_136_int; // 0x550 Neq2
	return 2; // 0x551 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_208; // 0x4f JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x50 PushV
	var_99_object = var_1_object; // 0x51 MovT
	func_1207(var_98_bool, var_99_object); // 0x52 NEW_2
	var_147_bool = var_98_bool == 0; // 0x54 Not
	if(var_147_bool == 0) goto Label_121; // 0x55 JumpB
	var_148_string = ""; // 0x56 PushV
	var_148_string = "Neutral"; // 0x57 MovS
	func_238(var_92_object, var_148_string); // 0x58 NEW_2
	var_165_int = 535461; // 0x5a PushI
	SetMessage(var_165_int); // 0x5b TObjFunc
	ClearReplies(); // 0x5d TObjFunc
	var_166_bool = 0; var_167_object = Obj(); // 0x5f PushV
	var_167_object = var_1_object; // 0x60 MovT
	func_1239(var_167_object); // 0x61 NEW_2
	if(var_166_bool == 0) goto Label_105; // 0x63 JumpB
	var_174_int = 539970; // 0x64 PushI
	var_175_int = 41937; // 0x65 PushI
	var_176_int = 41936; // 0x66 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x67 TObjFunc
	
Label_105:
	var_177_bool = 0; var_178_object = Obj(); // 0x69 PushV
	var_178_object = var_1_object; // 0x6a MovT
	func_1251(var_178_object); // 0x6b NEW_2
	if(var_177_bool == 0) goto Label_115; // 0x6d JumpB
	var_183_int = 539976; // 0x6e PushI
	var_184_int = 41943; // 0x6f PushI
	var_185_int = 41942; // 0x70 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x71 TObjFunc
	
Label_115:
	var_186_int = 535479; // 0x73 PushI
	var_187_int = -1; // 0x74 PushI
	var_188_int = 37161; // 0x75 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x76 TObjFunc
	goto Label_208; // 0x78 Jump
	
Label_208:
	var_189_bool = 0; // 0xd0 PushV
	func_1167(var_189_bool); // 0xd1 NEW_2
	if(var_189_bool == 0) goto Label_223; // 0xd3 JumpB
	
Label_212:
	lshWaitForAnimEnd(); // 0xd4 Func
	var_190_string = var_3_string; // 0xd6 PushT
	if(var_190_string == 0) goto Label_217; // 0xd7 JumpB
	goto Label_222; // 0xd8 Jump
	
Label_222:
	goto Label_237; // 0xde Jump
	
Label_237:
	return 0; // 0xed Return
	
Label_217:
	var_191_string = ""; // 0xd9 PushV
	var_191_string = var_2_object; // 0xda MovT
	func_1034(var_191_string); // 0xdb NEW_2
	goto Label_212; // 0xdd Jump
	
Label_223:
	var_202_string = "all"; // 0xdf PushS
	var_203_string = "idle"; // 0xe0 PushS
	PlayAnimation(var_202_string, var_203_string); // 0xe1 Func
	
Label_227:
	WaitForAnimEnd(); // 0xe3 Func
	var_204_string = var_3_string; // 0xe5 PushT
	if(var_204_string == 0) goto Label_232; // 0xe6 JumpB
	goto Label_237; // 0xe7 Jump
	
Label_232:
	var_205_string = "all"; // 0xe8 PushS
	var_206_string = "idle"; // 0xe9 PushS
	PlayAnimation(var_205_string, var_206_string); // 0xea Func
	goto Label_227; // 0xec Jump
	
Label_121:
	var_207_bool = 0; var_208_object = Obj(); // 0x79 PushV
	var_208_object = var_1_object; // 0x7a MovT
	func_1217(var_207_bool, var_208_object); // 0x7b NEW_2
	var_218_bool = var_207_bool == 0; // 0x7d Not
	if(var_218_bool == 0) goto Label_152; // 0x7e JumpB
	var_219_string = ""; // 0x7f PushV
	var_219_string = "Neutral"; // 0x80 MovS
	func_238(var_92_object, var_219_string); // 0x81 NEW_2
	var_220_int = 535443; // 0x83 PushI
	SetMessage(var_220_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_221_bool = 0; var_222_object = Obj(); // 0x88 PushV
	var_222_object = var_1_object; // 0x89 MovT
	func_1263(var_222_object); // 0x8a NEW_2
	if(var_221_bool == 0) goto Label_146; // 0x8c JumpB
	var_227_int = 539954; // 0x8d PushI
	var_228_int = 41921; // 0x8e PushI
	var_229_int = 41920; // 0x8f PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x90 TObjFunc
	
Label_146:
	var_230_int = 535460; // 0x92 PushI
	var_231_int = -1; // 0x93 PushI
	var_232_int = 37142; // 0x94 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x95 TObjFunc
	goto Label_208; // 0x97 Jump
	
Label_152:
	var_233_bool = 0; // 0x98 PushV
	var_233_bool = 0; // 0x99 MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x9a PushV
	var_235_object = var_1_object; // 0x9b MovT
	func_1207(var_234_bool, var_235_object); // 0x9c NEW_2
	if(var_234_bool == 0) goto Label_165; // 0x9e JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x9f PushV
	var_237_object = var_1_object; // 0xa0 MovT
	func_1227(var_237_object); // 0xa1 NEW_2
	if(var_236_bool == 0) goto Label_165; // 0xa3 JumpB
	var_233_bool = 1; // 0xa4 MovB
	
Label_165:
	if(var_233_bool == 0) goto Label_186; // 0xa5 JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0xa6 PushV
	var_242_object = var_1_object; // 0xa7 MovT
	var_243_object = var_0_object; // 0xa8 MovT
	func_1169(); // 0xa9 NEW_2
	var_246_string = ""; // 0xab PushV
	var_246_string = "Neutral"; // 0xac MovS
	func_238(var_92_object, var_246_string); // 0xad NEW_2
	var_247_int = 535485; // 0xaf PushI
	SetMessage(var_247_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_248_int = 539994; // 0xb4 PushI
	var_249_int = 41963; // 0xb5 PushI
	var_250_int = 41962; // 0xb6 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xb7 TObjFunc
	goto Label_208; // 0xb9 Jump
	
Label_186:
	var_251_string = ""; // 0xba PushV
	var_251_string = "Neutral"; // 0xbb MovS
	func_238(var_92_object, var_251_string); // 0xbc NEW_2
	var_252_int = 535487; // 0xbe PushI
	SetMessage(var_252_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_253_int = 535488; // 0xc3 PushI
	var_254_int = -1; // 0xc4 PushI
	var_255_int = 37170; // 0xc5 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xc6 TObjFunc
	var_256_int = 539997; // 0xc8 PushI
	var_257_int = -1; // 0xc9 PushI
	var_258_int = 41965; // 0xca PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xcb TObjFunc
	goto Label_208; // 0xcd Jump
}


func_1227(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x4cc PushV
	var_239_string = "ood12BirdmaskS1"; // 0x4cd MovS
	func_1093(var_238_int, var_239_string); // 0x4ce NEW_2
	var_240_int = 0; // 0x4d0 PushI
	var_241_bool = var_238_int == var_240_int; // 0x4d1 Eq
	if(var_241_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_236_bool = 1; // 0x4d3 MovB
	return 0; // 0x4d4 Return
	
Label_1237:
	var_236_bool = 0; // 0x4d5 MovB
	return 0; // 0x4d6 Return
}


func_1098(var_36_string, var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x44a PushV
	FindActor(var_39_object, var_36_string); // 0x44b Func
	var_40_bool = var_39_object == 0; // 0x44d Not
	if(var_40_bool == 0) goto Label_1110; // 0x44e JumpB
	var_41_string = "Door "; // 0x44f PushS
	var_42_int = var_41_string + var_36_string; // 0x450 Add
	var_43_string = " not found"; // 0x451 PushS
	var_44_int = var_42_int + var_43_string; // 0x452 Add
	Trace(var_44_int); // 0x453 Func
	goto Label_1113; // 0x455 Jump
	
Label_1113:
	return 2; // 0x459 Return
	
Label_1110:
	var_45_string = "locked"; // 0x456 PushS
	SetProperty(var_45_string, var_37_bool); // 0x457 ObjFunc
}


func_850()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x352 PushV
	WaitForAnimEnd(); // 0x353 Func
	var_34_bool = 0; // 0x355 PushV
	func_944(var_34_bool); // 0x356 NEW_2
	var_35_bool = var_34_bool == 0; // 0x358 Not
	if(var_35_bool == 0) goto Label_859; // 0x359 JumpB
	return 14; // 0x35a Return
	
Label_859:
	var_36_int = 0; // 0x35b PushV
	func_1142(var_36_int); // 0x35c NEW_2
	var_27_int = var_36_int; // 0x35d Mov
	var_28_int = 0; // 0x35f MovI
	
Label_864:
	var_49_bool = 0; // 0x360 PushV
	var_49_bool = 0; // 0x361 MovB
	var_50_int = 5; // 0x362 PushI
	var_51_bool = var_28_int < var_50_int; // 0x363 LT
	if(var_51_bool == 0) goto Label_874; // 0x364 JumpB
	var_52_bool = 0; // 0x365 PushV
	func_944(var_52_bool); // 0x366 NEW_2
	if(var_52_bool == 0) goto Label_874; // 0x368 JumpB
	var_49_bool = 1; // 0x369 MovB
	
Label_874:
	if(var_49_bool == 0) goto Label_926; // 0x36a JumpB
	var_53_int = 3; // 0x36b PushI
	irand(var_29_int, var_53_int); // 0x36c Func
	var_54_int = 0; // 0x36e PushI
	var_55_bool = var_29_int == var_54_int; // 0x36f Eq
	if(var_55_bool == 0) goto Label_898; // 0x370 JumpB
	var_56_int = var_27_int; // 0x371 Push
	if(var_56_int == 0) goto Label_897; // 0x372 JumpB
	irand(var_30_int, var_27_int); // 0x373 Func
	var_57_string = "all"; // 0x375 PushS
	var_58_string = ""; var_59_int = 0; // 0x376 PushV
	var_59_int = var_30_int; // 0x377 Mov
	func_1135(var_58_string, var_59_int); // 0x378 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x37a Func
	WaitForAnimEnd(var_31_bool); // 0x37c Func
	var_60_bool = var_31_bool == 0; // 0x37e Not
	if(var_60_bool == 0) goto Label_897; // 0x37f JumpB
	goto Label_926; // 0x380 Jump
	
Label_926:
	ResetAAS(); // 0x39e Func
	return 14; // 0x3a0 Return
	
Label_897:
	goto Label_915; // 0x381 Jump
	
Label_915:
	var_61_bool = 0; // 0x393 PushV
	func_929(var_61_bool); // 0x394 NEW_2
	var_62_bool = var_61_bool == 0; // 0x396 Not
	if(var_62_bool == 0) goto Label_921; // 0x397 JumpB
	goto Label_926; // 0x398 Jump
	
Label_921:
	ResetAAS(); // 0x399 Func
	var_63_int = 1; // 0x39b PushI
	var_28_int = var_28_int + var_63_int; // 0x39c Add2
	goto Label_864; // 0x39d Jump
	
Label_898:
	var_64_int = 1; // 0x382 PushI
	var_65_bool = var_29_int == var_64_int; // 0x383 Eq
	if(var_65_bool == 0) goto Label_912; // 0x384 JumpB
	var_66_int = 4; // 0x385 PushI
	rand(var_32_float, var_66_int); // 0x386 Func
	var_67_int = 1; // 0x388 PushI
	var_68_int = var_32_float + var_67_int; // 0x389 Add
	Sleep(var_68_int, var_33_bool); // 0x38a Func
	var_69_bool = var_33_bool == 0; // 0x38c Not
	if(var_69_bool == 0) goto Label_911; // 0x38d JumpB
	goto Label_926; // 0x38e Jump
	
Label_911:
	goto Label_915; // 0x38f Jump
	
Label_912:
	var_70_int = var_28_int; // 0x390 Push
	if(var_70_int == 0) goto Label_915; // 0x391 JumpB
	goto Label_926; // 0x392 Jump
}


func_1362(var_102_bool)
{
	var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_int = 0; var_107_object = Obj(); var_108_int = 0; var_109_int = 0; var_110_int = 0; // 0x552 PushV
	CreateIntVector(var_107_object); // 0x553 Func
	var_111_object = Obj(); var_112_bool = 0; var_113_int = 0; // 0x555 PushV
	var_111_object = var_107_object; // 0x556 Mov
	var_112_bool = 0; // 0x557 MovB
	var_113_int = -1; // 0x558 MovI
	func_1309(var_112_bool, var_113_int); // 0x559 NEW_2
	size(var_108_int); // 0x55b ObjFunc
	var_109_int = 0; // 0x55d MovI
	
Label_1374:
	var_126_bool = var_109_int < var_108_int; // 0x55e LT
	if(var_126_bool == 0) goto Label_1397; // 0x55f JumpB
	get(var_110_int, var_109_int); // 0x560 ObjFunc
	var_127_bool = 0; // 0x562 PushV
	var_127_bool = 1; // 0x563 MovB
	var_128_bool = 0; var_129_int = 0; // 0x564 PushV
	var_129_int = var_110_int; // 0x565 Mov
	func_1352(var_128_bool, var_129_int); // 0x566 NEW_2
	if(var_128_bool == 0) goto Label_1391; // 0x568 JumpB
	var_137_bool = 0; var_138_int = 0; // 0x569 PushV
	var_138_int = var_110_int; // 0x56a Mov
	func_1342(var_137_bool, var_138_int); // 0x56b NEW_2
	if(var_137_bool == 0) goto Label_1391; // 0x56d JumpB
	var_127_bool = 0; // 0x56e MovB
	
Label_1391:
	if(var_127_bool == 0) goto Label_1394; // 0x56f JumpB
	var_102_bool = 0; // 0x570 MovB
	return 8; // 0x571 Return
	
Label_1394:
	var_146_int = 1; // 0x572 PushI
	var_109_int = var_109_int + var_146_int; // 0x573 Add2
	goto Label_1374; // 0x574 Jump
	
Label_1397:
	var_102_bool = 1; // 0x575 MovB
	return 8; // 0x576 Return
}


func_1239(var_166_bool)
{
	var_168_int = 0; var_169_string = ""; // 0x4d8 PushV
	var_169_string = "ood12BirdmaskS2"; // 0x4d9 MovS
	func_1093(var_168_int, var_169_string); // 0x4da NEW_2
	var_172_int = 0; // 0x4dc PushI
	var_173_bool = var_168_int == var_172_int; // 0x4dd Eq
	if(var_173_bool == 0) goto Label_1249; // 0x4de JumpB
	var_166_bool = 1; // 0x4df MovB
	return 0; // 0x4e0 Return
	
Label_1249:
	var_166_bool = 0; // 0x4e1 MovB
	return 0; // 0x4e2 Return
}


func_1115(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x45b PushV
	FindActor(var_52_object, var_49_string); // 0x45c Func
	var_53_bool = var_52_object == 0; // 0x45e NullEq
	if(var_53_bool == 0) goto Label_1122; // 0x45f JumpB
	var_48_bool = 0; // 0x460 MovB
	return 2; // 0x461 Return
	
Label_1122:
	Trigger(var_52_object, var_50_string); // 0x462 Func
	var_48_bool = 1; // 0x464 MovB
	return 2; // 0x465 Return
}


func_1251(var_177_bool)
{
	var_179_int = 0; var_180_string = ""; // 0x4e4 PushV
	var_180_string = "ood12BirdmaskS3"; // 0x4e5 MovS
	func_1093(var_179_int, var_180_string); // 0x4e6 NEW_2
	var_181_int = 0; // 0x4e8 PushI
	var_182_bool = var_179_int == var_181_int; // 0x4e9 Eq
	if(var_182_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_177_bool = 1; // 0x4eb MovB
	return 0; // 0x4ec Return
	
Label_1261:
	var_177_bool = 0; // 0x4ed MovB
	return 0; // 0x4ee Return
}


func_1127(var_211_int)
{
	var_212_float = 0; var_213_float = 0; // 0x467 PushV
	GetGameTime(var_213_float); // 0x468 Func
	var_214_int = 0; // 0x46a PushV
	var_214_int = var_213_float; // 0x46b Mov
	var_215_int = 24; // 0x46c PushI
	var_211_int = var_214_int % var_215_int; // 0x46d Mod2
	return 2; // 0x46e Return
}


func_238(var_2_object, var_148_string)
{
	var_149_bool = 0; // 0xef PushV
	func_1167(var_149_bool); // 0xf0 NEW_2
	var_150_bool = var_149_bool == 0; // 0xf2 Not
	if(var_150_bool == 0) goto Label_245; // 0xf3 JumpB
	return 0; // 0xf4 Return
	
Label_245:
	var_151_bool = var_148_string == var_2_object; // 0xf5 Eq
	if(var_151_bool == 0) goto Label_248; // 0xf6 JumpB
	return 0; // 0xf7 Return
	
Label_248:
	var_152_string = ""; var_153_bool = 0; // 0xf8 PushV
	var_152_string = var_148_string; // 0xf9 Mov
	var_154_string = ""; // 0xfa PushS
	var_155_bool = var_148_string == var_154_string; // 0xfb Eq
	if(var_155_bool == 0) goto Label_255; // 0xfc JumpB
	var_153_bool = 0; // 0xfd MovB
	goto Label_256; // 0xfe Jump
	
Label_256:
	func_1050(var_152_string, var_153_bool); // 0x100 NEW_2
	var_2_object = var_148_string; // 0x102 TMov
	return 0; // 0x103 Return
	
Label_255:
	var_153_bool = 1; // 0xff MovB
}


func_1263(var_221_bool)
{
	var_223_int = 0; var_224_string = ""; // 0x4f0 PushV
	var_224_string = "ood12BirdmaskS4"; // 0x4f1 MovS
	func_1093(var_223_int, var_224_string); // 0x4f2 NEW_2
	var_225_int = 0; // 0x4f4 PushI
	var_226_bool = var_223_int == var_225_int; // 0x4f5 Eq
	if(var_226_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_221_bool = 1; // 0x4f7 MovB
	return 0; // 0x4f8 Return
	
Label_1273:
	var_221_bool = 0; // 0x4f9 MovB
	return 0; // 0x4fa Return
}


func_1135(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x46f PushV
	var_45_string = "idle"; // 0x470 MovS
	var_46_int = var_43_int; // 0x471 Push
	if(var_46_int == 0) goto Label_1140; // 0x472 JumpB
	var_45_string = var_45_string + var_43_int; // 0x473 Add2
	
Label_1140:
	var_42_string = var_45_string; // 0x474 Mov
	return 2; // 0x475 Return
}


func_1142(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x476 PushV
	var_39_int = 0; // 0x477 MovI
	
Label_1144:
	var_41_string = "all"; // 0x478 PushS
	var_42_string = ""; var_43_int = 0; // 0x479 PushV
	var_43_int = var_39_int; // 0x47a Mov
	func_1135(var_42_string, var_43_int); // 0x47b NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x47d Func
	var_47_bool = var_40_bool == 0; // 0x47f Not
	if(var_47_bool == 0) goto Label_1154; // 0x480 JumpB
	goto Label_1157; // 0x481 Jump
	
Label_1157:
	var_36_int = var_39_int; // 0x485 Mov
	return 4; // 0x486 Return
	
Label_1154:
	var_48_int = 1; // 0x482 PushI
	var_39_int = var_39_int + var_48_int; // 0x483 Add2
	goto Label_1144; // 0x484 Jump
}


func_1400(var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x578 PushV
	var_14_string = "game_final"; // 0x579 PushS
	GetVariable(var_14_string, var_13_int); // 0x57a Func
	var_11_int = var_13_int; // 0x57c Mov
	return 2; // 0x57d Return
}


func_1017()
{
	var_261_bool = 0; var_262_bool = 0; // 0x3f9 PushV
	CameraSwitchToNormal(); // 0x3fa Func
	var_263_bool = 0; // 0x3fc PushV
	func_1167(var_263_bool); // 0x3fd NEW_2
	if(var_263_bool == 0) goto Label_1025; // 0x3ff JumpB
	goto Label_1033; // 0x400 Jump
	
Label_1033:
	return 2; // 0x409 Return
	
Label_1025:
	var_264_string = "head"; // 0x401 PushS
	HasAnimationTrack(var_262_bool, var_264_string); // 0x402 Func
	var_265_bool = var_262_bool; // 0x404 Push
	if(var_265_bool == 0) goto Label_1033; // 0x405 JumpB
	var_266_string = "head"; // 0x406 PushS
	UnlookAsync(var_266_string); // 0x407 Func
}


func_1275(var_100_bool)
{
	var_102_bool = 0; // 0x4fc PushV
	func_1362(var_102_bool); // 0x4fd NEW_2
	var_100_bool = var_102_bool; // 0x4fe Mov
	return 0; // 0x500 Return
}


