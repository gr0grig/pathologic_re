task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x100 PushI
	if(var_12_int == 0) goto Label_672; // 0x101 JumpB
	func_1009(); // 0x103 NEW_2
	var_14_int = 23302; // 0x105 PushI
	var_15_bool = var_11_object == var_14_int; // 0x106 Eq
	if(var_15_bool == 0) goto Label_269; // 0x107 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x108 PushV
	var_16_object = var_1_object; // 0x109 MovT
	var_17_object = var_0_object; // 0x10a MovT
	func_1121(); // 0x10b NEW_2
	
Label_269:
	var_20_int = 23324; // 0x10d PushI
	var_21_bool = var_11_object == var_20_int; // 0x10e Eq
	if(var_21_bool == 0) goto Label_277; // 0x10f JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x110 PushV
	var_22_object = var_1_object; // 0x111 MovT
	var_23_object = var_0_object; // 0x112 MovT
	func_1127(); // 0x113 NEW_2
	
Label_277:
	var_26_int = 23299; // 0x115 PushI
	var_27_bool = var_11_object == var_26_int; // 0x116 Eq
	if(var_27_bool == 0) goto Label_285; // 0x117 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x118 PushV
	var_28_object = var_1_object; // 0x119 MovT
	var_29_object = var_0_object; // 0x11a MovT
	func_1115(); // 0x11b NEW_2
	
Label_285:
	var_32_int = 23304; // 0x11d PushI
	var_33_bool = var_11_object == var_32_int; // 0x11e Eq
	if(var_33_bool == 0) goto Label_298; // 0x11f JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x120 PushV
	var_34_object = var_1_object; // 0x121 MovT
	var_35_object = var_0_object; // 0x122 MovT
	func_1133(); // 0x123 NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0x125 PushV
	var_46_object = var_1_object; // 0x126 MovT
	var_47_object = var_0_object; // 0x127 MovT
	func_1108(); // 0x128 NEW_2
	
Label_298:
	var_54_int = 23301; // 0x12a PushI
	var_55_bool = var_10_bool == var_54_int; // 0x12b Eq
	if(var_55_bool == 0) goto Label_422; // 0x12c JumpB
	var_56_bool = 0; var_57_object = Obj(); // 0x12d PushV
	var_57_object = var_1_object; // 0x12e MovT
	func_1140(var_56_bool, var_57_object); // 0x12f NEW_2
	var_105_bool = var_56_bool == 0; // 0x131 Not
	if(var_105_bool == 0) goto Label_342; // 0x132 JumpB
	var_106_string = ""; // 0x133 PushV
	var_106_string = "Neutral"; // 0x134 MovS
	func_233(var_11_object, var_106_string); // 0x135 NEW_2
	var_123_int = 522134; // 0x137 PushI
	SetMessage(var_123_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_124_bool = 0; var_125_object = Obj(); // 0x13c PushV
	var_125_object = var_1_object; // 0x13d MovT
	func_1184(var_125_object); // 0x13e NEW_2
	if(var_124_bool == 0) goto Label_326; // 0x140 JumpB
	var_132_int = 522135; // 0x141 PushI
	var_133_int = 23323; // 0x142 PushI
	var_134_int = 23302; // 0x143 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x144 TObjFunc
	
Label_326:
	var_135_bool = 0; var_136_object = Obj(); // 0x146 PushV
	var_136_object = var_1_object; // 0x147 MovT
	func_1196(var_136_object); // 0x148 NEW_2
	if(var_135_bool == 0) goto Label_336; // 0x14a JumpB
	var_141_int = 522157; // 0x14b PushI
	var_142_int = 23325; // 0x14c PushI
	var_143_int = 23324; // 0x14d PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x14e TObjFunc
	
Label_336:
	var_144_int = 522166; // 0x150 PushI
	var_145_int = -1; // 0x151 PushI
	var_146_int = 23333; // 0x152 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_147_bool = 0; var_148_object = Obj(); // 0x156 PushV
	var_148_object = var_1_object; // 0x157 MovT
	func_1150(var_147_bool, var_148_object); // 0x158 NEW_2
	var_158_bool = var_147_bool == 0; // 0x15a Not
	if(var_158_bool == 0) goto Label_373; // 0x15b JumpB
	var_159_string = ""; // 0x15c PushV
	var_159_string = "Neutral"; // 0x15d MovS
	func_233(var_11_object, var_159_string); // 0x15e NEW_2
	var_160_int = 522130; // 0x160 PushI
	SetMessage(var_160_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_161_bool = 0; var_162_object = Obj(); // 0x165 PushV
	var_162_object = var_1_object; // 0x166 MovT
	func_1172(var_162_object); // 0x167 NEW_2
	if(var_161_bool == 0) goto Label_367; // 0x169 JumpB
	var_167_int = 522132; // 0x16a PushI
	var_168_int = 23308; // 0x16b PushI
	var_169_int = 23299; // 0x16c PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x16d TObjFunc
	
Label_367:
	var_170_int = 522140; // 0x16f PushI
	var_171_int = -1; // 0x170 PushI
	var_172_int = 23307; // 0x171 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_173_bool = 0; // 0x175 PushV
	var_173_bool = 0; // 0x176 MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x177 PushV
	var_175_object = var_1_object; // 0x178 MovT
	func_1160(var_175_object); // 0x179 NEW_2
	if(var_174_bool == 0) goto Label_386; // 0x17b JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x17c PushV
	var_181_object = var_1_object; // 0x17d MovT
	func_1140(var_180_bool, var_181_object); // 0x17e NEW_2
	if(var_180_bool == 0) goto Label_386; // 0x180 JumpB
	var_173_bool = 1; // 0x181 MovB
	
Label_386:
	if(var_173_bool == 0) goto Label_407; // 0x182 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x183 PushV
	var_182_object = var_1_object; // 0x184 MovT
	var_183_object = var_0_object; // 0x185 MovT
	func_1102(); // 0x186 NEW_2
	var_186_string = ""; // 0x188 PushV
	var_186_string = "Neutral"; // 0x189 MovS
	func_233(var_11_object, var_186_string); // 0x18a NEW_2
	var_187_int = 522136; // 0x18c PushI
	SetMessage(var_187_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_188_int = 522137; // 0x191 PushI
	var_189_int = -1; // 0x192 PushI
	var_190_int = 23304; // 0x193 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_191_string = ""; // 0x197 PushV
	var_191_string = "Neutral"; // 0x198 MovS
	func_233(var_11_object, var_191_string); // 0x199 NEW_2
	var_192_int = 522138; // 0x19b PushI
	SetMessage(var_192_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_193_int = 522139; // 0x1a0 PushI
	var_194_int = -1; // 0x1a1 PushI
	var_195_int = 23306; // 0x1a2 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1a3 TObjFunc
	return 0; // 0x1a5 Return
	
Label_422:
	var_196_int = 23308; // 0x1a6 PushI
	var_197_bool = var_10_bool == var_196_int; // 0x1a7 Eq
	if(var_197_bool == 0) goto Label_445; // 0x1a8 JumpB
	var_198_string = ""; // 0x1a9 PushV
	var_198_string = "Neutral"; // 0x1aa MovS
	func_233(var_11_object, var_198_string); // 0x1ab NEW_2
	var_199_int = 522141; // 0x1ad PushI
	SetMessage(var_199_int); // 0x1ae TObjFunc
	ClearReplies(); // 0x1b0 TObjFunc
	var_200_int = 522142; // 0x1b2 PushI
	var_201_int = 23311; // 0x1b3 PushI
	var_202_int = 23309; // 0x1b4 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1b5 TObjFunc
	var_203_int = 522143; // 0x1b7 PushI
	var_204_int = -1; // 0x1b8 PushI
	var_205_int = 23310; // 0x1b9 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1ba TObjFunc
	return 0; // 0x1bc Return
	
Label_445:
	var_206_int = 23311; // 0x1bd PushI
	var_207_bool = var_10_bool == var_206_int; // 0x1be Eq
	if(var_207_bool == 0) goto Label_468; // 0x1bf JumpB
	var_208_string = ""; // 0x1c0 PushV
	var_208_string = "Neutral"; // 0x1c1 MovS
	func_233(var_11_object, var_208_string); // 0x1c2 NEW_2
	var_209_int = 522144; // 0x1c4 PushI
	SetMessage(var_209_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_210_int = 522145; // 0x1c9 PushI
	var_211_int = 23314; // 0x1ca PushI
	var_212_int = 23312; // 0x1cb PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1cc TObjFunc
	var_213_int = 522146; // 0x1ce PushI
	var_214_int = -1; // 0x1cf PushI
	var_215_int = 23313; // 0x1d0 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1d1 TObjFunc
	return 0; // 0x1d3 Return
	
Label_468:
	var_216_int = 23314; // 0x1d4 PushI
	var_217_bool = var_10_bool == var_216_int; // 0x1d5 Eq
	if(var_217_bool == 0) goto Label_491; // 0x1d6 JumpB
	var_218_string = ""; // 0x1d7 PushV
	var_218_string = "Neutral"; // 0x1d8 MovS
	func_233(var_11_object, var_218_string); // 0x1d9 NEW_2
	var_219_int = 522147; // 0x1db PushI
	SetMessage(var_219_int); // 0x1dc TObjFunc
	ClearReplies(); // 0x1de TObjFunc
	var_220_int = 522148; // 0x1e0 PushI
	var_221_int = 23317; // 0x1e1 PushI
	var_222_int = 23315; // 0x1e2 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1e3 TObjFunc
	var_223_int = 522149; // 0x1e5 PushI
	var_224_int = -1; // 0x1e6 PushI
	var_225_int = 23316; // 0x1e7 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_226_int = 23317; // 0x1eb PushI
	var_227_bool = var_10_bool == var_226_int; // 0x1ec Eq
	if(var_227_bool == 0) goto Label_514; // 0x1ed JumpB
	var_228_string = ""; // 0x1ee PushV
	var_228_string = "Neutral"; // 0x1ef MovS
	func_233(var_11_object, var_228_string); // 0x1f0 NEW_2
	var_229_int = 522150; // 0x1f2 PushI
	SetMessage(var_229_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_230_int = 522151; // 0x1f7 PushI
	var_231_int = 23320; // 0x1f8 PushI
	var_232_int = 23318; // 0x1f9 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1fa TObjFunc
	var_233_int = 522152; // 0x1fc PushI
	var_234_int = -1; // 0x1fd PushI
	var_235_int = 23319; // 0x1fe PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1ff TObjFunc
	return 0; // 0x201 Return
	
Label_514:
	var_236_int = 23320; // 0x202 PushI
	var_237_bool = var_10_bool == var_236_int; // 0x203 Eq
	if(var_237_bool == 0) goto Label_537; // 0x204 JumpB
	var_238_string = ""; // 0x205 PushV
	var_238_string = "Neutral"; // 0x206 MovS
	func_233(var_11_object, var_238_string); // 0x207 NEW_2
	var_239_int = 522153; // 0x209 PushI
	SetMessage(var_239_int); // 0x20a TObjFunc
	ClearReplies(); // 0x20c TObjFunc
	var_240_int = 522154; // 0x20e PushI
	var_241_int = -1; // 0x20f PushI
	var_242_int = 23321; // 0x210 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x211 TObjFunc
	var_243_int = 522155; // 0x213 PushI
	var_244_int = -1; // 0x214 PushI
	var_245_int = 23322; // 0x215 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_246_int = 23325; // 0x219 PushI
	var_247_bool = var_10_bool == var_246_int; // 0x21a Eq
	if(var_247_bool == 0) goto Label_560; // 0x21b JumpB
	var_248_string = ""; // 0x21c PushV
	var_248_string = "Neutral"; // 0x21d MovS
	func_233(var_11_object, var_248_string); // 0x21e NEW_2
	var_249_int = 522158; // 0x220 PushI
	SetMessage(var_249_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_250_int = 522159; // 0x225 PushI
	var_251_int = 23327; // 0x226 PushI
	var_252_int = 23326; // 0x227 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x228 TObjFunc
	var_253_int = 522161; // 0x22a PushI
	var_254_int = 23997; // 0x22b PushI
	var_255_int = 23328; // 0x22c PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x22d TObjFunc
	return 0; // 0x22f Return
	
Label_560:
	var_256_int = 23997; // 0x230 PushI
	var_257_bool = var_10_bool == var_256_int; // 0x231 Eq
	if(var_257_bool == 0) goto Label_578; // 0x232 JumpB
	var_258_string = ""; // 0x233 PushV
	var_258_string = "Neutral"; // 0x234 MovS
	func_233(var_11_object, var_258_string); // 0x235 NEW_2
	var_259_int = 522814; // 0x237 PushI
	SetMessage(var_259_int); // 0x238 TObjFunc
	ClearReplies(); // 0x23a TObjFunc
	var_260_int = 522815; // 0x23c PushI
	var_261_int = -1; // 0x23d PushI
	var_262_int = 23998; // 0x23e PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x23f TObjFunc
	return 0; // 0x241 Return
	
Label_578:
	var_263_int = 23327; // 0x242 PushI
	var_264_bool = var_10_bool == var_263_int; // 0x243 Eq
	if(var_264_bool == 0) goto Label_596; // 0x244 JumpB
	var_265_string = ""; // 0x245 PushV
	var_265_string = "Neutral"; // 0x246 MovS
	func_233(var_11_object, var_265_string); // 0x247 NEW_2
	var_266_int = 522160; // 0x249 PushI
	SetMessage(var_266_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_267_int = 522162; // 0x24e PushI
	var_268_int = 23330; // 0x24f PushI
	var_269_int = 23329; // 0x250 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_270_int = 23330; // 0x254 PushI
	var_271_bool = var_10_bool == var_270_int; // 0x255 Eq
	if(var_271_bool == 0) goto Label_619; // 0x256 JumpB
	var_272_string = ""; // 0x257 PushV
	var_272_string = "Neutral"; // 0x258 MovS
	func_233(var_11_object, var_272_string); // 0x259 NEW_2
	var_273_int = 522163; // 0x25b PushI
	SetMessage(var_273_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_274_int = 522164; // 0x260 PushI
	var_275_int = -1; // 0x261 PushI
	var_276_int = 23331; // 0x262 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x263 TObjFunc
	var_277_int = 522165; // 0x265 PushI
	var_278_int = -1; // 0x266 PushI
	var_279_int = 23332; // 0x267 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_280_int = 23323; // 0x26b PushI
	var_281_bool = var_10_bool == var_280_int; // 0x26c Eq
	if(var_281_bool == 0) goto Label_642; // 0x26d JumpB
	var_282_string = ""; // 0x26e PushV
	var_282_string = "Neutral"; // 0x26f MovS
	func_233(var_11_object, var_282_string); // 0x270 NEW_2
	var_283_int = 522156; // 0x272 PushI
	SetMessage(var_283_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_284_int = 522808; // 0x277 PushI
	var_285_int = 23992; // 0x278 PushI
	var_286_int = 23991; // 0x279 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x27a TObjFunc
	var_287_int = 522807; // 0x27c PushI
	var_288_int = -1; // 0x27d PushI
	var_289_int = 23990; // 0x27e PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_290_int = 23992; // 0x282 PushI
	var_291_bool = var_10_bool == var_290_int; // 0x283 Eq
	if(var_291_bool == 0) goto Label_660; // 0x284 JumpB
	var_292_string = ""; // 0x285 PushV
	var_292_string = "Neutral"; // 0x286 MovS
	func_233(var_11_object, var_292_string); // 0x287 NEW_2
	var_293_int = 522809; // 0x289 PushI
	SetMessage(var_293_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_294_int = 522810; // 0x28e PushI
	var_295_int = -1; // 0x28f PushI
	var_296_int = 23993; // 0x290 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x291 TObjFunc
	return 0; // 0x293 Return
	
Label_660:
	var_3_string = 1; // 0x294 TMovB
	var_297_bool = 0; // 0x295 PushV
	func_1100(var_297_bool); // 0x296 NEW_2
	if(var_297_bool == 0) goto Label_668; // 0x298 JumpB
	lshStopAnimation(); // 0x299 Func
	goto Label_670; // 0x29b Jump
	
Label_670:
	return 0; // 0x29e Return
	
Label_668:
	StopAnimation(); // 0x29c Func
	
Label_672:
	return 0; // 0x2a0 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x2ae PushV
	func_1333(var_11_int); // 0x2af NEW_2
	var_15_int = 0; // 0x2b1 PushI
	var_16_bool = var_11_int == var_15_int; // 0x2b2 Eq
	if(var_16_bool == 0) goto Label_701; // 0x2b3 JumpB
	func_767(var_9_object, var_10_object); // 0x2b5 NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0x2b7 PushV
	var_21_object = var_10_object; // 0x2b8 Mov
	TaskCall(0); // 0x2b9 TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x2ba NEW_2
	TaskReturn(); // 0x2bb TaskReturn
	
Label_701:
	return 0; // 0x2bd Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x2e9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x2ea Eq
	if(var_12_bool == 0) goto Label_766; // 0x2eb JumpB
	var_13_bool = 0; // 0x2ec PushV
	func_729(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x2ed NEW_2
	if(var_13_bool == 0) goto Label_760; // 0x2ef JumpB
	var_26_bool = var_2_object == 0; // 0x2f0 Not
	if(var_26_bool == 0) goto Label_759; // 0x2f1 JumpB
	var_27_object = Obj(); // 0x2f2 PushV
	var_27_object = var_4_bool; // 0x2f3 MovT
	func_998(var_27_object); // 0x2f4 NEW_2
	var_2_object = 1; // 0x2f6 TMovB
	
Label_759:
	goto Label_766; // 0x2f7 Jump
	
Label_766:
	return 0; // 0x2fe Return
	
Label_760:
	var_34_object = var_2_object; // 0x2f8 PushT
	if(var_34_object == 0) goto Label_766; // 0x2f9 JumpB
	var_35_string = "head"; // 0x2fa PushS
	UnlookAsync(var_35_string); // 0x2fb Func
	var_2_object = 0; // 0x2fd TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_673:
	var_10_bool = 1; // 0x2a1 PushB
	if(var_10_bool == 0) goto Label_684; // 0x2a2 JumpB
	var_11_float = 0; var_12_float = 0; // 0x2a3 PushV
	var_11_float = 300; // 0x2a4 MovI
	var_12_float = 100; // 0x2a5 MovI
	func_702(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x2a6 NEW_2
	var_73_int = 1; // 0x2a8 PushI
	Sleep(var_73_int); // 0x2a9 Func
	goto Label_673; // 0x2ab Jump
	
Label_684:
	return 0; // 0x2ac Return
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 130.0; // 0x4 MovF
	func_880(var_32_object, var_33_float); // 0x5 NEW_2
	var_78_bool = var_31_bool == 0; // 0x7 Not
	if(var_78_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_79_int = 0; // 0xd PushV
	func_1094(var_79_int); // 0xe NEW_2
	SetNPCName(var_79_int); // 0x10 ObjFunc
	var_80_int = 0; // 0x12 PushV
	func_1092(var_80_int); // 0x13 NEW_2
	SetNPCDescription(var_80_int); // 0x15 ObjFunc
	var_81_string = ""; // 0x17 PushV
	func_1096(var_81_string); // 0x18 NEW_2
	SetPhoto(var_81_string); // 0x1a ObjFunc
	var_82_string = ""; // 0x1c PushV
	func_1098(var_82_string); // 0x1d NEW_2
	SetPhoto2(var_82_string); // 0x1f ObjFunc
	var_83_int = 0; // 0x21 PushV
	func_1225(var_83_int); // 0x22 NEW_2
	SetPlayerName(var_83_int); // 0x24 ObjFunc
	var_29_int = -1; // 0x26 MovI
	IsOverrideActive(var_28_bool); // 0x27 Func
	var_91_bool = var_28_bool; // 0x29 Push
	if(var_91_bool == 0) goto Label_45; // 0x2a JumpB
	var_20_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_27_object); // 0x2d Func
	var_92_object = Obj(); var_93_object = Obj(); // 0x2f PushV
	var_92_object = var_21_object; // 0x30 Mov
	var_93_object = var_27_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_30_bool); // 0x36 ObjFunc
	
Label_56:
	var_257_bool = var_30_bool == 0; // 0x38 Not
	if(var_257_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_258_object = Obj(); // 0x3f PushV
	var_258_object = var_21_object; // 0x40 Mov
	func_949(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1026(var_169_int, var_170_string)
{
	var_171_int = 0; var_172_int = 0; // 0x402 PushV
	GetVariable(var_170_string, var_172_int); // 0x403 Func
	var_169_int = var_172_int; // 0x405 Mov
	return 2; // 0x406 Return
}


func_1285(var_129_bool, var_130_int)
{
	var_131_int = 0; var_132_int = 0; // 0x505 PushV
	var_133_string = "vol_"; // 0x506 PushS
	var_134_int = var_133_string + var_130_int; // 0x507 Add
	GetVariable(var_134_int, var_132_int); // 0x508 Func
	var_135_int = 16; // 0x50a PushI
	var_136_int = var_132_int & var_135_int; // 0x50b And
	var_137_int = 0; // 0x50c PushI
	var_129_bool = var_136_int != var_137_int; // 0x50d Neq2
	return 2; // 0x50e Return
}


func_1031(var_36_string, var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x407 PushV
	FindActor(var_39_object, var_36_string); // 0x408 Func
	var_40_bool = var_39_object == 0; // 0x40a Not
	if(var_40_bool == 0) goto Label_1043; // 0x40b JumpB
	var_41_string = "Door "; // 0x40c PushS
	var_42_int = var_41_string + var_36_string; // 0x40d Add
	var_43_string = " not found"; // 0x40e PushS
	var_44_int = var_42_int + var_43_string; // 0x40f Add
	Trace(var_44_int); // 0x410 Func
	goto Label_1046; // 0x412 Jump
	
Label_1046:
	return 2; // 0x416 Return
	
Label_1043:
	var_45_string = "locked"; // 0x413 PushS
	SetProperty(var_45_string, var_37_bool); // 0x414 ObjFunc
}


func_1160(var_235_bool)
{
	var_237_int = 0; var_238_string = ""; // 0x489 PushV
	var_238_string = "oob12BirdmaskS1"; // 0x48a MovS
	func_1026(var_237_int, var_238_string); // 0x48b NEW_2
	var_239_int = 0; // 0x48d PushI
	var_240_bool = var_237_int == var_239_int; // 0x48e Eq
	if(var_240_bool == 0) goto Label_1170; // 0x48f JumpB
	var_235_bool = 1; // 0x490 MovB
	return 0; // 0x491 Return
	
Label_1170:
	var_235_bool = 0; // 0x492 MovB
	return 0; // 0x493 Return
}


func_781()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x30d PushV
	WaitForAnimEnd(); // 0x30e Func
	var_34_bool = 0; // 0x310 PushV
	func_875(var_34_bool); // 0x311 NEW_2
	var_35_bool = var_34_bool == 0; // 0x313 Not
	if(var_35_bool == 0) goto Label_790; // 0x314 JumpB
	return 14; // 0x315 Return
	
Label_790:
	var_36_int = 0; // 0x316 PushV
	func_1075(var_36_int); // 0x317 NEW_2
	var_27_int = var_36_int; // 0x318 Mov
	var_28_int = 0; // 0x31a MovI
	
Label_795:
	var_49_bool = 0; // 0x31b PushV
	var_49_bool = 0; // 0x31c MovB
	var_50_int = 5; // 0x31d PushI
	var_51_bool = var_28_int < var_50_int; // 0x31e LT
	if(var_51_bool == 0) goto Label_805; // 0x31f JumpB
	var_52_bool = 0; // 0x320 PushV
	func_875(var_52_bool); // 0x321 NEW_2
	if(var_52_bool == 0) goto Label_805; // 0x323 JumpB
	var_49_bool = 1; // 0x324 MovB
	
Label_805:
	if(var_49_bool == 0) goto Label_857; // 0x325 JumpB
	var_53_int = 3; // 0x326 PushI
	irand(var_29_int, var_53_int); // 0x327 Func
	var_54_int = 0; // 0x329 PushI
	var_55_bool = var_29_int == var_54_int; // 0x32a Eq
	if(var_55_bool == 0) goto Label_829; // 0x32b JumpB
	var_56_int = var_27_int; // 0x32c Push
	if(var_56_int == 0) goto Label_828; // 0x32d JumpB
	irand(var_30_int, var_27_int); // 0x32e Func
	var_57_string = "all"; // 0x330 PushS
	var_58_string = ""; var_59_int = 0; // 0x331 PushV
	var_59_int = var_30_int; // 0x332 Mov
	func_1068(var_58_string, var_59_int); // 0x333 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x335 Func
	WaitForAnimEnd(var_31_bool); // 0x337 Func
	var_60_bool = var_31_bool == 0; // 0x339 Not
	if(var_60_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_857; // 0x33b Jump
	
Label_857:
	ResetAAS(); // 0x359 Func
	return 14; // 0x35b Return
	
Label_828:
	goto Label_846; // 0x33c Jump
	
Label_846:
	var_61_bool = 0; // 0x34e PushV
	func_860(var_61_bool); // 0x34f NEW_2
	var_62_bool = var_61_bool == 0; // 0x351 Not
	if(var_62_bool == 0) goto Label_852; // 0x352 JumpB
	goto Label_857; // 0x353 Jump
	
Label_852:
	ResetAAS(); // 0x354 Func
	var_63_int = 1; // 0x356 PushI
	var_28_int = var_28_int + var_63_int; // 0x357 Add2
	goto Label_795; // 0x358 Jump
	
Label_829:
	var_64_int = 1; // 0x33d PushI
	var_65_bool = var_29_int == var_64_int; // 0x33e Eq
	if(var_65_bool == 0) goto Label_843; // 0x33f JumpB
	var_66_int = 4; // 0x340 PushI
	rand(var_32_float, var_66_int); // 0x341 Func
	var_67_int = 1; // 0x343 PushI
	var_68_int = var_32_float + var_67_int; // 0x344 Add
	Sleep(var_68_int, var_33_bool); // 0x345 Func
	var_69_bool = var_33_bool == 0; // 0x347 Not
	if(var_69_bool == 0) goto Label_842; // 0x348 JumpB
	goto Label_857; // 0x349 Jump
	
Label_842:
	goto Label_846; // 0x34a Jump
	
Label_843:
	var_70_int = var_28_int; // 0x34b Push
	if(var_70_int == 0) goto Label_846; // 0x34c JumpB
	goto Label_857; // 0x34d Jump
}


func_1295(var_103_bool)
{
	var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0; var_110_int = 0; var_111_int = 0; // 0x50f PushV
	CreateIntVector(var_108_object); // 0x510 Func
	var_112_object = Obj(); var_113_bool = 0; var_114_int = 0; // 0x512 PushV
	var_112_object = var_108_object; // 0x513 Mov
	var_113_bool = 0; // 0x514 MovB
	var_114_int = -1; // 0x515 MovI
	func_1242(var_113_bool, var_114_int); // 0x516 NEW_2
	size(var_109_int); // 0x518 ObjFunc
	var_110_int = 0; // 0x51a MovI
	
Label_1307:
	var_127_bool = var_110_int < var_109_int; // 0x51b LT
	if(var_127_bool == 0) goto Label_1330; // 0x51c JumpB
	get(var_111_int, var_110_int); // 0x51d ObjFunc
	var_128_bool = 0; // 0x51f PushV
	var_128_bool = 1; // 0x520 MovB
	var_129_bool = 0; var_130_int = 0; // 0x521 PushV
	var_130_int = var_111_int; // 0x522 Mov
	func_1285(var_129_bool, var_130_int); // 0x523 NEW_2
	if(var_129_bool == 0) goto Label_1324; // 0x525 JumpB
	var_138_bool = 0; var_139_int = 0; // 0x526 PushV
	var_139_int = var_111_int; // 0x527 Mov
	func_1275(var_138_bool, var_139_int); // 0x528 NEW_2
	if(var_138_bool == 0) goto Label_1324; // 0x52a JumpB
	var_128_bool = 0; // 0x52b MovB
	
Label_1324:
	if(var_128_bool == 0) goto Label_1327; // 0x52c JumpB
	var_103_bool = 0; // 0x52d MovB
	return 8; // 0x52e Return
	
Label_1327:
	var_147_int = 1; // 0x52f PushI
	var_110_int = var_110_int + var_147_int; // 0x530 Add2
	goto Label_1307; // 0x531 Jump
	
Label_1330:
	var_103_bool = 1; // 0x532 MovB
	return 8; // 0x533 Return
}


func_1172(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x495 PushV
	var_225_string = "oob12BirdmaskS2"; // 0x496 MovS
	func_1026(var_224_int, var_225_string); // 0x497 NEW_2
	var_226_int = 0; // 0x499 PushI
	var_227_bool = var_224_int == var_226_int; // 0x49a Eq
	if(var_227_bool == 0) goto Label_1182; // 0x49b JumpB
	var_222_bool = 1; // 0x49c MovB
	return 0; // 0x49d Return
	
Label_1182:
	var_222_bool = 0; // 0x49e MovB
	return 0; // 0x49f Return
}


func_1048(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x418 PushV
	FindActor(var_52_object, var_49_string); // 0x419 Func
	var_53_bool = var_52_object == 0; // 0x41b NullEq
	if(var_53_bool == 0) goto Label_1055; // 0x41c JumpB
	var_48_bool = 0; // 0x41d MovB
	return 2; // 0x41e Return
	
Label_1055:
	Trigger(var_52_object, var_50_string); // 0x41f Func
	var_48_bool = 1; // 0x421 MovB
	return 2; // 0x422 Return
}


func_1184(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x4a1 PushV
	var_170_string = "oob12BirdmaskS3"; // 0x4a2 MovS
	func_1026(var_169_int, var_170_string); // 0x4a3 NEW_2
	var_173_int = 0; // 0x4a5 PushI
	var_174_bool = var_169_int == var_173_int; // 0x4a6 Eq
	if(var_174_bool == 0) goto Label_1194; // 0x4a7 JumpB
	var_167_bool = 1; // 0x4a8 MovB
	return 0; // 0x4a9 Return
	
Label_1194:
	var_167_bool = 0; // 0x4aa MovB
	return 0; // 0x4ab Return
}


func_1060(var_212_int)
{
	var_213_float = 0; var_214_float = 0; // 0x424 PushV
	GetGameTime(var_214_float); // 0x425 Func
	var_215_int = 0; // 0x427 PushV
	var_215_int = var_214_float; // 0x428 Mov
	var_216_int = 24; // 0x429 PushI
	var_212_int = var_215_int % var_216_int; // 0x42a Mod2
	return 2; // 0x42b Return
}


func_1196(var_178_bool)
{
	var_180_int = 0; var_181_string = ""; // 0x4ad PushV
	var_181_string = "oob12BirdmaskS4"; // 0x4ae MovS
	func_1026(var_180_int, var_181_string); // 0x4af NEW_2
	var_182_int = 0; // 0x4b1 PushI
	var_183_bool = var_180_int == var_182_int; // 0x4b2 Eq
	if(var_183_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_178_bool = 1; // 0x4b4 MovB
	return 0; // 0x4b5 Return
	
Label_1206:
	var_178_bool = 0; // 0x4b6 MovB
	return 0; // 0x4b7 Return
}


func_1068(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x42c PushV
	var_45_string = "idle"; // 0x42d MovS
	var_46_int = var_43_int; // 0x42e Push
	if(var_46_int == 0) goto Label_1073; // 0x42f JumpB
	var_45_string = var_45_string + var_43_int; // 0x430 Add2
	
Label_1073:
	var_42_string = var_45_string; // 0x431 Mov
	return 2; // 0x432 Return
}


func_1075(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x433 PushV
	var_39_int = 0; // 0x434 MovI
	
Label_1077:
	var_41_string = "all"; // 0x435 PushS
	var_42_string = ""; var_43_int = 0; // 0x436 PushV
	var_43_int = var_39_int; // 0x437 Mov
	func_1068(var_42_string, var_43_int); // 0x438 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x43a Func
	var_47_bool = var_40_bool == 0; // 0x43c Not
	if(var_47_bool == 0) goto Label_1087; // 0x43d JumpB
	goto Label_1090; // 0x43e Jump
	
Label_1090:
	var_36_int = var_39_int; // 0x442 Mov
	return 4; // 0x443 Return
	
Label_1087:
	var_48_int = 1; // 0x43f PushI
	var_39_int = var_39_int + var_48_int; // 0x440 Add2
	goto Label_1077; // 0x441 Jump
}


func_949()
{
	var_259_bool = 0; var_260_bool = 0; // 0x3b5 PushV
	var_261_bool = 1; // 0x3b6 PushB
	CameraSwitchToNormal(var_261_bool); // 0x3b7 Func
	var_262_bool = 0; // 0x3b9 PushV
	func_1100(var_262_bool); // 0x3ba NEW_2
	if(var_262_bool == 0) goto Label_958; // 0x3bc JumpB
	goto Label_966; // 0x3bd Jump
	
Label_966:
	return 2; // 0x3c6 Return
	
Label_958:
	var_263_string = "head"; // 0x3be PushS
	HasAnimationTrack(var_260_bool, var_263_string); // 0x3bf Func
	var_264_bool = var_260_bool; // 0x3c1 Push
	if(var_264_bool == 0) goto Label_966; // 0x3c2 JumpB
	var_265_string = "head"; // 0x3c3 PushS
	UnlookAsync(var_265_string); // 0x3c4 Func
}


func_1333(var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x535 PushV
	var_14_string = "game_final"; // 0x536 PushS
	GetVariable(var_14_string, var_13_int); // 0x537 Func
	var_11_int = var_13_int; // 0x539 Mov
	return 2; // 0x53a Return
}


func_1208(var_101_bool)
{
	var_103_bool = 0; // 0x4b9 PushV
	func_1295(var_103_bool); // 0x4ba NEW_2
	var_101_bool = var_103_bool; // 0x4bb Mov
	return 0; // 0x4bd Return
}


func_702(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x2bf PushV
	func_875(var_13_bool); // 0x2c0 NEW_2
	var_16_bool = var_13_bool == 0; // 0x2c2 Not
	if(var_16_bool == 0) goto Label_709; // 0x2c3 JumpB
	return 0; // 0x2c4 Return
	
Label_709:
	var_17_string = "player"; // 0x2c5 PushS
	FindActor(var_9_object, var_17_string); // 0x2c6 Func
	var_2_object = 0; // 0x2c8 TMovB
	var_3_string = 0; // 0x2c9 TMovB
	var_0_object = var_11_float; // 0x2ca TMov
	var_1_object = var_12_float; // 0x2cb TMov
	var_18_int = 10; // 0x2cc PushI
	var_19_float = 1.0; // 0x2cd PushF
	SetTimer(var_18_int, var_19_float); // 0x2ce Func
	func_781(); // 0x2d1 NEW_2
	var_71_bool = var_3_string == 0; // 0x2d3 Not
	if(var_71_bool == 0) goto Label_728; // 0x2d4 JumpB
	var_72_int = 10; // 0x2d5 PushI
	KillTimer(var_72_int); // 0x2d6 Func
	
Label_728:
	return 0; // 0x2d8 Return
}


func_1214(var_210_bool)
{
	var_212_int = 0; // 0x4bf PushV
	func_1060(var_212_int); // 0x4c0 NEW_2
	var_217_int = 19; // 0x4c2 PushI
	var_218_bool = var_212_int >= var_217_int; // 0x4c3 GE
	if(var_218_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_210_bool = 1; // 0x4c5 MovB
	return 0; // 0x4c6 Return
	
Label_1223:
	var_210_bool = 0; // 0x4c7 MovB
	return 0; // 0x4c8 Return
}


func_1092(var_80_int)
{
	var_80_int = 515571; // 0x444 MovI
	return 0; // 0x445 Return
}


func_1094(var_79_int)
{
	var_79_int = 504029; // 0x446 MovI
	return 0; // 0x447 Return
}


func_967(var_192_string)
{
	var_193_bool = 0; var_194_float = 0; var_195_float = 0; var_196_bool = 0; var_197_float = 0; var_198_float = 0; // 0x3c7 PushV
	lshHasAnimation(var_196_bool, var_192_string); // 0x3c8 Func
	var_199_bool = var_196_bool; // 0x3ca Push
	if(var_199_bool == 0) goto Label_978; // 0x3cb JumpB
	lshGetAnimTimes(var_192_string, var_197_float, var_198_float); // 0x3cc Func
	var_200_bool = 0; // 0x3ce PushB
	lshPlayAnimation(var_197_float, var_198_float, var_200_bool); // 0x3cf Func
	goto Label_982; // 0x3d1 Jump
	
Label_982:
	return 6; // 0x3d6 Return
	
Label_978:
	var_201_string = "Can't find lsh animation : "; // 0x3d2 PushS
	var_202_int = var_201_string + var_192_string; // 0x3d3 Add
	Trace(var_202_int); // 0x3d4 Func
}


func_1096(var_81_string)
{
	var_81_string = "ui/NPC_bmask.png"; // 0x448 MovS
	return 0; // 0x449 Return
}


func_1225(var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x4c9 PushV
	var_86_string = "branch"; // 0x4ca PushS
	GetVariable(var_86_string, var_85_int); // 0x4cb Func
	var_87_int = 0; // 0x4cd PushI
	var_88_bool = var_85_int == var_87_int; // 0x4ce Eq
	if(var_88_bool == 0) goto Label_1235; // 0x4cf JumpB
	var_83_int = 1; // 0x4d0 MovI
	return 2; // 0x4d1 Return
	
Label_1235:
	var_89_int = 1; // 0x4d3 PushI
	var_90_bool = var_85_int == var_89_int; // 0x4d4 Eq
	if(var_90_bool == 0) goto Label_1240; // 0x4d5 JumpB
	var_83_int = 2; // 0x4d6 MovI
	return 2; // 0x4d7 Return
	
Label_1240:
	var_83_int = 3; // 0x4d8 MovI
	return 2; // 0x4d9 Return
}


func_1098(var_82_string)
{
	var_82_string = "ui/NPC_bmask_b.png"; // 0x44a MovS
	return 0; // 0x44b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object; // 0x4b TMov
	var_1_object = var_92_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_98_int = 1; // 0x4e PushI
	if(var_98_int == 0) goto Label_203; // 0x4f JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x50 PushV
	var_100_object = var_1_object; // 0x51 MovT
	func_1140(var_99_bool, var_100_object); // 0x52 NEW_2
	var_148_bool = var_99_bool == 0; // 0x54 Not
	if(var_148_bool == 0) goto Label_121; // 0x55 JumpB
	var_149_string = ""; // 0x56 PushV
	var_149_string = "Neutral"; // 0x57 MovS
	func_233(var_93_object, var_149_string); // 0x58 NEW_2
	var_166_int = 522134; // 0x5a PushI
	SetMessage(var_166_int); // 0x5b TObjFunc
	ClearReplies(); // 0x5d TObjFunc
	var_167_bool = 0; var_168_object = Obj(); // 0x5f PushV
	var_168_object = var_1_object; // 0x60 MovT
	func_1184(var_168_object); // 0x61 NEW_2
	if(var_167_bool == 0) goto Label_105; // 0x63 JumpB
	var_175_int = 522135; // 0x64 PushI
	var_176_int = 23323; // 0x65 PushI
	var_177_int = 23302; // 0x66 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x67 TObjFunc
	
Label_105:
	var_178_bool = 0; var_179_object = Obj(); // 0x69 PushV
	var_179_object = var_1_object; // 0x6a MovT
	func_1196(var_179_object); // 0x6b NEW_2
	if(var_178_bool == 0) goto Label_115; // 0x6d JumpB
	var_184_int = 522157; // 0x6e PushI
	var_185_int = 23325; // 0x6f PushI
	var_186_int = 23324; // 0x70 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x71 TObjFunc
	
Label_115:
	var_187_int = 522166; // 0x73 PushI
	var_188_int = -1; // 0x74 PushI
	var_189_int = 23333; // 0x75 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x76 TObjFunc
	goto Label_203; // 0x78 Jump
	
Label_203:
	var_190_bool = 0; // 0xcb PushV
	func_1100(var_190_bool); // 0xcc NEW_2
	if(var_190_bool == 0) goto Label_218; // 0xce JumpB
	
Label_207:
	lshWaitForAnimEnd(); // 0xcf Func
	var_191_string = var_3_string; // 0xd1 PushT
	if(var_191_string == 0) goto Label_212; // 0xd2 JumpB
	goto Label_217; // 0xd3 Jump
	
Label_217:
	goto Label_232; // 0xd9 Jump
	
Label_232:
	return 0; // 0xe8 Return
	
Label_212:
	var_192_string = ""; // 0xd4 PushV
	var_192_string = var_2_object; // 0xd5 MovT
	func_967(var_192_string); // 0xd6 NEW_2
	goto Label_207; // 0xd8 Jump
	
Label_218:
	var_203_string = "all"; // 0xda PushS
	var_204_string = "idle"; // 0xdb PushS
	PlayAnimation(var_203_string, var_204_string); // 0xdc Func
	
Label_222:
	WaitForAnimEnd(); // 0xde Func
	var_205_string = var_3_string; // 0xe0 PushT
	if(var_205_string == 0) goto Label_227; // 0xe1 JumpB
	goto Label_232; // 0xe2 Jump
	
Label_227:
	var_206_string = "all"; // 0xe3 PushS
	var_207_string = "idle"; // 0xe4 PushS
	PlayAnimation(var_206_string, var_207_string); // 0xe5 Func
	goto Label_222; // 0xe7 Jump
	
Label_121:
	var_208_bool = 0; var_209_object = Obj(); // 0x79 PushV
	var_209_object = var_1_object; // 0x7a MovT
	func_1150(var_208_bool, var_209_object); // 0x7b NEW_2
	var_219_bool = var_208_bool == 0; // 0x7d Not
	if(var_219_bool == 0) goto Label_152; // 0x7e JumpB
	var_220_string = ""; // 0x7f PushV
	var_220_string = "Neutral"; // 0x80 MovS
	func_233(var_93_object, var_220_string); // 0x81 NEW_2
	var_221_int = 522130; // 0x83 PushI
	SetMessage(var_221_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_222_bool = 0; var_223_object = Obj(); // 0x88 PushV
	var_223_object = var_1_object; // 0x89 MovT
	func_1172(var_223_object); // 0x8a NEW_2
	if(var_222_bool == 0) goto Label_146; // 0x8c JumpB
	var_228_int = 522132; // 0x8d PushI
	var_229_int = 23308; // 0x8e PushI
	var_230_int = 23299; // 0x8f PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x90 TObjFunc
	
Label_146:
	var_231_int = 522140; // 0x92 PushI
	var_232_int = -1; // 0x93 PushI
	var_233_int = 23307; // 0x94 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x95 TObjFunc
	goto Label_203; // 0x97 Jump
	
Label_152:
	var_234_bool = 0; // 0x98 PushV
	var_234_bool = 0; // 0x99 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0x9a PushV
	var_236_object = var_1_object; // 0x9b MovT
	func_1160(var_236_object); // 0x9c NEW_2
	if(var_235_bool == 0) goto Label_165; // 0x9e JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x9f PushV
	var_242_object = var_1_object; // 0xa0 MovT
	func_1140(var_241_bool, var_242_object); // 0xa1 NEW_2
	if(var_241_bool == 0) goto Label_165; // 0xa3 JumpB
	var_234_bool = 1; // 0xa4 MovB
	
Label_165:
	if(var_234_bool == 0) goto Label_186; // 0xa5 JumpB
	var_243_object = Obj(); var_244_object = Obj(); // 0xa6 PushV
	var_243_object = var_1_object; // 0xa7 MovT
	var_244_object = var_0_object; // 0xa8 MovT
	func_1102(); // 0xa9 NEW_2
	var_247_string = ""; // 0xab PushV
	var_247_string = "Neutral"; // 0xac MovS
	func_233(var_93_object, var_247_string); // 0xad NEW_2
	var_248_int = 522136; // 0xaf PushI
	SetMessage(var_248_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_249_int = 522137; // 0xb4 PushI
	var_250_int = -1; // 0xb5 PushI
	var_251_int = 23304; // 0xb6 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xb7 TObjFunc
	goto Label_203; // 0xb9 Jump
	
Label_186:
	var_252_string = ""; // 0xba PushV
	var_252_string = "Neutral"; // 0xbb MovS
	func_233(var_93_object, var_252_string); // 0xbc NEW_2
	var_253_int = 522138; // 0xbe PushI
	SetMessage(var_253_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_254_int = 522139; // 0xc3 PushI
	var_255_int = -1; // 0xc4 PushI
	var_256_int = 23306; // 0xc5 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xc6 TObjFunc
	goto Label_203; // 0xc8 Jump
}


func_1100(var_74_bool)
{
	var_74_bool = 0; // 0x44c MovB
	return 0; // 0x44d Return
}


func_1102()
{
	var_245_string = "oob12BirdmaskS1"; // 0x44f PushS
	var_246_int = 1; // 0x450 PushI
	SetVariable(var_245_string, var_246_int); // 0x451 Func
	return 0; // 0x453 Return
}


func_1108()
{
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x455 PushV
	var_49_string = "quest_b12_01"; // 0x456 MovS
	var_50_string = "init_sobor"; // 0x457 MovS
	func_1048(var_48_bool, var_49_string, var_50_string); // 0x458 NEW_2
	return 0; // 0x45a Return
}


func_983(var_153_string, var_154_bool)
{
	var_157_bool = 0; var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_float = 0; var_162_float = 0; // 0x3d7 PushV
	lshHasAnimation(var_160_bool, var_153_string); // 0x3d8 Func
	var_163_bool = var_160_bool; // 0x3da Push
	if(var_163_bool == 0) goto Label_993; // 0x3db JumpB
	lshGetAnimTimes(var_153_string, var_161_float, var_162_float); // 0x3dc Func
	lshPlayAnimation(var_161_float, var_162_float, var_154_bool); // 0x3de Func
	goto Label_997; // 0x3e0 Jump
	
Label_997:
	return 6; // 0x3e5 Return
	
Label_993:
	var_164_string = "Can't find lsh animation : "; // 0x3e1 PushS
	var_165_int = var_164_string + var_153_string; // 0x3e2 Add
	Trace(var_165_int); // 0x3e3 Func
}


func_729(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x2d9 PushV
	var_16_bool = var_4_bool == 0; // 0x2da NullEq
	if(var_16_bool == 0) goto Label_734; // 0x2db JumpB
	var_13_bool = 0; // 0x2dc MovB
	return 2; // 0x2dd Return
	
Label_734:
	var_17_float = 0; var_18_object = Obj(); // 0x2de PushV
	var_18_object = var_4_bool; // 0x2df MovT
	func_867(var_18_object); // 0x2e0 NEW_2
	var_15_float = sqrt(var_17_float); // 0x2e2 Sqrt2
	var_25_object = var_2_object; // 0x2e3 PushT
	if(var_25_object == 0) goto Label_742; // 0x2e4 JumpB
	var_15_float = var_15_float - var_1_object; // 0x2e5 Sub2
	
Label_742:
	var_13_bool = var_15_float < var_0_object; // 0x2e6 LT2
	return 2; // 0x2e7 Return
}


func_1242(var_113_bool, var_114_int)
{
	var_115_int = 18; // 0x4db PushI
	add(var_115_int); // 0x4dc ObjFunc
	var_116_int = 24; // 0x4de PushI
	add(var_116_int); // 0x4df ObjFunc
	var_117_int = 20; // 0x4e1 PushI
	add(var_117_int); // 0x4e2 ObjFunc
	var_118_int = 14; // 0x4e4 PushI
	add(var_118_int); // 0x4e5 ObjFunc
	var_119_bool = 0; // 0x4e7 PushB
	var_120_bool = var_113_bool == var_119_bool; // 0x4e8 Eq
	if(var_120_bool == 0) goto Label_1268; // 0x4e9 JumpB
	var_121_int = 10; // 0x4ea PushI
	add(var_121_int); // 0x4eb ObjFunc
	var_122_int = 17; // 0x4ed PushI
	add(var_122_int); // 0x4ee ObjFunc
	var_123_int = 8; // 0x4f0 PushI
	add(var_123_int); // 0x4f1 ObjFunc
	goto Label_1274; // 0x4f3 Jump
	
Label_1274:
	return 0; // 0x4fa Return
	
Label_1268:
	var_124_int = 1; // 0x4f4 PushI
	var_125_bool = var_114_int != var_124_int; // 0x4f5 Neq
	if(var_125_bool == 0) goto Label_1274; // 0x4f6 JumpB
	var_126_int = 10; // 0x4f7 PushI
	add(var_126_int); // 0x4f8 ObjFunc
}


func_1115()
{
	var_30_string = "oob12BirdmaskS2"; // 0x45c PushS
	var_31_int = 1; // 0x45d PushI
	SetVariable(var_30_string, var_31_int); // 0x45e Func
	return 0; // 0x460 Return
}


func_860(var_61_bool)
{
	var_61_bool = 1; // 0x35c MovB
	return 0; // 0x35d Return
}


func_862()
{
	StopAnimation(); // 0x35e Func
	StopGroup0(); // 0x360 Func
	return 0; // 0x362 Return
}


func_1121()
{
	var_18_string = "oob12BirdmaskS3"; // 0x462 PushS
	var_19_int = 1; // 0x463 PushI
	SetVariable(var_18_string, var_19_int); // 0x464 Func
	return 0; // 0x466 Return
}


func_867(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x363 PushV
	GetPosition(var_22_cvector); // 0x364 Func
	GetPosition(var_23_cvector); // 0x366 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x368 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x369 Or2
	return 6; // 0x36a Return
}


func_998(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3e6 PushV
	GetEyesHeight(var_30_float); // 0x3e7 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3e9 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3ea PushE
	var_32_float = var_30_float; // 0x3eb Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3ec PopE
	var_33_string = "head"; // 0x3ed PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3ee Func
	return 4; // 0x3f0 Return
}


func_1127()
{
	var_24_string = "oob12BirdmaskS4"; // 0x468 PushS
	var_25_int = 1; // 0x469 PushI
	SetVariable(var_24_string, var_25_int); // 0x46a Func
	return 0; // 0x46c Return
}


func_233(var_2_object, var_149_string)
{
	var_150_bool = 0; // 0xea PushV
	func_1100(var_150_bool); // 0xeb NEW_2
	var_151_bool = var_150_bool == 0; // 0xed Not
	if(var_151_bool == 0) goto Label_240; // 0xee JumpB
	return 0; // 0xef Return
	
Label_240:
	var_152_bool = var_149_string == var_2_object; // 0xf0 Eq
	if(var_152_bool == 0) goto Label_243; // 0xf1 JumpB
	return 0; // 0xf2 Return
	
Label_243:
	var_153_string = ""; var_154_bool = 0; // 0xf3 PushV
	var_153_string = var_149_string; // 0xf4 Mov
	var_155_string = ""; // 0xf5 PushS
	var_156_bool = var_149_string == var_155_string; // 0xf6 Eq
	if(var_156_bool == 0) goto Label_250; // 0xf7 JumpB
	var_154_bool = 0; // 0xf8 MovB
	goto Label_251; // 0xf9 Jump
	
Label_251:
	func_983(var_153_string, var_154_bool); // 0xfb NEW_2
	var_2_object = var_149_string; // 0xfd TMov
	return 0; // 0xfe Return
	
Label_250:
	var_154_bool = 1; // 0xfa MovB
}


func_875(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x36b PushV
	IsLoaded(var_15_bool); // 0x36c Func
	var_13_bool = var_15_bool; // 0x36e Mov
	return 2; // 0x36f Return
}


func_1133()
{
	var_36_string = ""; var_37_bool = 0; // 0x46e PushV
	var_36_string = "sobor@door1"; // 0x46f MovS
	var_37_bool = 0; // 0x470 MovB
	func_1031(var_36_string, var_37_bool); // 0x471 NEW_2
	return 0; // 0x473 Return
}


func_880(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x370 PushV
	GetPosition(var_44_cvector); // 0x371 ObjFunc
	GetEyesHeight(var_43_float); // 0x373 ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x375 PushE
	var_52_float = var_52_float + var_43_float; // 0x376 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x377 PopE
	GetPosition(var_45_cvector); // 0x378 Func
	GetEyesHeight(var_43_float); // 0x37a Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x37c PushE
	var_53_float = var_53_float + var_43_float; // 0x37d Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x37e PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x37f Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x380 PushE
	var_54_float = 0; // 0x381 MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x382 PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x383 Or
	var_56_float = sqrt(var_55_int); // 0x384 Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x385 Div2
	var_47_cvector = -var_46_cvector; // 0x386 Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x387 Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x388 PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x389 PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x38a Xor2
	func_1016(var_58_cvector, var_59_cvector); // 0x38b NEW_2
	var_66_int = 25; // 0x38d PushI
	var_67_float = var_58_cvector * var_66_int; // 0x38e Mult
	var_68_int = var_57_float + var_67_float; // 0x38f Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x390 PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x391 Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x392 Add2
	IsOverrideActive(var_50_bool); // 0x393 Func
	var_70_bool = var_50_bool; // 0x395 Push
	if(var_70_bool == 0) goto Label_921; // 0x396 JumpB
	var_31_bool = 0; // 0x397 MovB
	return 18; // 0x398 Return
	
Label_921:
	StopWorld(); // 0x399 Func
	var_71_bool = 1; // 0x39b PushB
	CameraTransit(var_49_cvector, var_47_cvector, var_71_bool); // 0x39c Func
	var_72_float = GetByIndex(var_48_cvector, 0); // 0x39e PushE
	var_73_float = GetByIndex(var_48_cvector, 2); // 0x39f PushE
	Rotate(var_72_float, var_73_float); // 0x3a0 Func
	var_74_bool = 0; // 0x3a2 PushV
	func_1100(var_74_bool); // 0x3a3 NEW_2
	if(var_74_bool == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_943; // 0x3a6 Jump
	
Label_943:
	CameraWaitForPlayFinish(); // 0x3af Func
	ResumeWorld(); // 0x3b1 Func
	var_31_bool = 1; // 0x3b3 MovB
	return 18; // 0x3b4 Return
	
Label_935:
	var_75_string = "head"; // 0x3a7 PushS
	HasAnimationTrack(var_51_bool, var_75_string); // 0x3a8 Func
	var_76_bool = var_51_bool; // 0x3aa Push
	if(var_76_bool == 0) goto Label_943; // 0x3ab JumpB
	var_77_string = "head"; // 0x3ac PushS
	LookAsyncCamera(var_77_string); // 0x3ad Func
}


func_1009()
{
	var_13_bool = 0; // 0x3f1 PushV
	func_1100(var_13_bool); // 0x3f2 NEW_2
	if(var_13_bool == 0) goto Label_1015; // 0x3f4 JumpB
	lshStopSpeech(); // 0x3f5 Func
	
Label_1015:
	return 0; // 0x3f7 Return
}


func_1140(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_object = Obj(); // 0x475 PushV
	var_102_object = var_100_object; // 0x476 Mov
	func_1208(var_102_object); // 0x477 NEW_2
	if(var_101_bool == 0) goto Label_1148; // 0x479 JumpB
	var_99_bool = 1; // 0x47a MovB
	return 0; // 0x47b Return
	
Label_1148:
	var_99_bool = 0; // 0x47c MovB
	return 0; // 0x47d Return
}


func_1016(var_58_cvector, var_59_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0x3f8 PushV
	var_63_int = var_59_cvector | var_59_cvector; // 0x3f9 Or
	var_62_float = sqrt(var_63_int); // 0x3fa Sqrt2
	var_64_float = 0.0; // 0x3fb PushF
	var_65_bool = var_62_float < var_64_float; // 0x3fc LT
	if(var_65_bool == 0) goto Label_1024; // 0x3fd JumpB
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x3fe MovV
	return 2; // 0x3ff Return
	
Label_1024:
	var_58_cvector = var_59_cvector / var_59_cvector; // 0x400 Div2
	return 2; // 0x401 Return
}


func_1275(var_138_bool, var_139_int)
{
	var_140_int = 0; var_141_int = 0; // 0x4fb PushV
	var_142_string = "vol_"; // 0x4fc PushS
	var_143_int = var_142_string + var_139_int; // 0x4fd Add
	GetVariable(var_143_int, var_141_int); // 0x4fe Func
	var_144_int = 4; // 0x500 PushI
	var_145_int = var_141_int & var_144_int; // 0x501 And
	var_146_int = 0; // 0x502 PushI
	var_138_bool = var_145_int != var_146_int; // 0x503 Neq2
	return 2; // 0x504 Return
}


func_1150(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj(); // 0x47f PushV
	var_211_object = var_209_object; // 0x480 Mov
	func_1214(var_211_object); // 0x481 NEW_2
	if(var_210_bool == 0) goto Label_1158; // 0x483 JumpB
	var_208_bool = 1; // 0x484 MovB
	return 0; // 0x485 Return
	
Label_1158:
	var_208_bool = 0; // 0x486 MovB
	return 0; // 0x487 Return
}


func_767(var_2_object, var_3_string)
{
	func_862(); // 0x300 NEW_2
	var_17_int = 10; // 0x302 PushI
	KillTimer(var_17_int); // 0x303 Func
	var_18_object = var_2_object; // 0x305 PushT
	if(var_18_object == 0) goto Label_779; // 0x306 JumpB
	var_19_string = "head"; // 0x307 PushS
	UnlookAsync(var_19_string); // 0x308 Func
	var_2_object = 0; // 0x30a TMovB
	
Label_779:
	var_3_string = 1; // 0x30b TMovB
	return 0; // 0x30c Return
}


