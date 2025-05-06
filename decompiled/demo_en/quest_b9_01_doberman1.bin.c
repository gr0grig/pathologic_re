task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 1; // 0xd9 PushI
	if(var_16_int == 0) goto Label_649; // 0xda JumpB
	func_2268(); // 0xdc NEW_2
	var_18_int = 22726; // 0xde PushI
	var_19_bool = var_15_bool == var_18_int; // 0xdf Eq
	if(var_19_bool == 0) goto Label_230; // 0xe0 JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0xe1 PushV
	var_20_object = var_1_object; // 0xe2 MovT
	var_21_object = var_0_object; // 0xe3 MovT
	func_2448(); // 0xe4 NEW_2
	
Label_230:
	var_24_int = 23389; // 0xe6 PushI
	var_25_bool = var_15_bool == var_24_int; // 0xe7 Eq
	if(var_25_bool == 0) goto Label_238; // 0xe8 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xe9 PushV
	var_26_object = var_1_object; // 0xea MovT
	var_27_object = var_0_object; // 0xeb MovT
	func_2460(); // 0xec NEW_2
	
Label_238:
	var_51_int = 22728; // 0xee PushI
	var_52_bool = var_15_bool == var_51_int; // 0xef Eq
	if(var_52_bool == 0) goto Label_246; // 0xf0 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xf1 PushV
	var_53_object = var_1_object; // 0xf2 MovT
	var_54_object = var_0_object; // 0xf3 MovT
	func_2460(); // 0xf4 NEW_2
	
Label_246:
	var_55_int = 23405; // 0xf6 PushI
	var_56_bool = var_15_bool == var_55_int; // 0xf7 Eq
	if(var_56_bool == 0) goto Label_254; // 0xf8 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xf9 PushV
	var_57_object = var_1_object; // 0xfa MovT
	var_58_object = var_0_object; // 0xfb MovT
	func_2465(); // 0xfc NEW_2
	
Label_254:
	var_75_int = 22734; // 0xfe PushI
	var_76_bool = var_15_bool == var_75_int; // 0xff Eq
	if(var_76_bool == 0) goto Label_262; // 0x100 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x101 PushV
	var_77_object = var_1_object; // 0x102 MovT
	var_78_object = var_0_object; // 0x103 MovT
	func_2454(); // 0x104 NEW_2
	
Label_262:
	var_81_int = 22736; // 0x106 PushI
	var_82_bool = var_15_bool == var_81_int; // 0x107 Eq
	if(var_82_bool == 0) goto Label_280; // 0x108 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x109 PushV
	var_83_object = var_1_object; // 0x10a MovT
	var_84_object = var_0_object; // 0x10b MovT
	func_2442(); // 0x10c NEW_2
	var_89_object = Obj(); var_90_object = Obj(); // 0x10e PushV
	var_89_object = var_1_object; // 0x10f MovT
	var_90_object = var_0_object; // 0x110 MovT
	func_2479(); // 0x111 NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0x113 PushV
	var_93_object = var_1_object; // 0x114 MovT
	var_94_object = var_0_object; // 0x115 MovT
	func_2465(); // 0x116 NEW_2
	
Label_280:
	var_95_int = 22725; // 0x118 PushI
	var_96_bool = var_14_object == var_95_int; // 0x119 Eq
	if(var_96_bool == 0) goto Label_365; // 0x11a JumpB
	var_97_string = ""; // 0x11b PushV
	var_97_string = "Neutral"; // 0x11c MovS
	func_194(var_15_bool, var_97_string); // 0x11d NEW_2
	var_114_int = 521564; // 0x11f PushI
	SetMessage(var_114_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_115_bool = 0; // 0x124 PushV
	var_115_bool = 0; // 0x125 MovB
	var_116_bool = 0; var_117_object = Obj(); // 0x126 PushV
	var_117_object = var_1_object; // 0x127 MovT
	func_2507(var_117_object); // 0x128 NEW_2
	if(var_116_bool == 0) goto Label_305; // 0x12a JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x12b PushV
	var_125_object = var_1_object; // 0x12c MovT
	func_2485(var_125_object); // 0x12d NEW_2
	if(var_124_bool == 0) goto Label_305; // 0x12f JumpB
	var_115_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_115_bool == 0) goto Label_311; // 0x131 JumpB
	var_130_int = 521565; // 0x132 PushI
	var_131_int = 22727; // 0x133 PushI
	var_132_int = 22726; // 0x134 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x135 TObjFunc
	
Label_311:
	var_133_bool = 0; // 0x137 PushV
	var_133_bool = 0; // 0x138 MovB
	var_134_bool = 0; // 0x139 PushV
	var_134_bool = 0; // 0x13a MovB
	var_135_bool = 0; // 0x13b PushV
	var_135_bool = 0; // 0x13c MovB
	var_136_bool = 0; // 0x13d PushV
	var_136_bool = 0; // 0x13e MovB
	var_137_bool = 0; var_138_object = Obj(); // 0x13f PushV
	var_138_object = var_1_object; // 0x140 MovT
	func_2485(var_138_object); // 0x141 NEW_2
	if(var_137_bool == 0) goto Label_330; // 0x143 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x144 PushV
	var_140_object = var_1_object; // 0x145 MovT
	func_2497(var_139_bool, var_140_object); // 0x146 NEW_2
	if(var_139_bool == 0) goto Label_330; // 0x148 JumpB
	var_136_bool = 1; // 0x149 MovB
	
Label_330:
	if(var_136_bool == 0) goto Label_337; // 0x14a JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x14b PushV
	var_148_object = var_1_object; // 0x14c MovT
	func_2519(var_148_object); // 0x14d NEW_2
	if(var_147_bool == 0) goto Label_337; // 0x14f JumpB
	var_135_bool = 1; // 0x150 MovB
	
Label_337:
	if(var_135_bool == 0) goto Label_345; // 0x151 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x152 PushV
	var_154_object = var_1_object; // 0x153 MovT
	func_2507(var_154_object); // 0x154 NEW_2
	var_155_bool = var_153_bool == 0; // 0x156 Not
	if(var_155_bool == 0) goto Label_345; // 0x157 JumpB
	var_134_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_134_bool == 0) goto Label_353; // 0x159 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x15a PushV
	var_157_object = var_1_object; // 0x15b MovT
	func_2554(var_157_object); // 0x15c NEW_2
	var_162_bool = var_156_bool == 0; // 0x15e Not
	if(var_162_bool == 0) goto Label_353; // 0x15f JumpB
	var_133_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_133_bool == 0) goto Label_359; // 0x161 JumpB
	var_163_int = 521573; // 0x162 PushI
	var_164_int = 23390; // 0x163 PushI
	var_165_int = 22734; // 0x164 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x165 TObjFunc
	
Label_359:
	var_166_int = 521572; // 0x167 PushI
	var_167_int = -1; // 0x168 PushI
	var_168_int = 22733; // 0x169 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_169_int = 23390; // 0x16d PushI
	var_170_bool = var_14_object == var_169_int; // 0x16e Eq
	if(var_170_bool == 0) goto Label_388; // 0x16f JumpB
	var_171_string = ""; // 0x170 PushV
	var_171_string = "Neutral"; // 0x171 MovS
	func_194(var_15_bool, var_171_string); // 0x172 NEW_2
	var_172_int = 522241; // 0x174 PushI
	SetMessage(var_172_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_173_int = 522242; // 0x179 PushI
	var_174_int = 22735; // 0x17a PushI
	var_175_int = 23391; // 0x17b PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x17c TObjFunc
	var_176_int = 522243; // 0x17e PushI
	var_177_int = 22735; // 0x17f PushI
	var_178_int = 23392; // 0x180 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_179_int = 22735; // 0x184 PushI
	var_180_bool = var_14_object == var_179_int; // 0x185 Eq
	if(var_180_bool == 0) goto Label_406; // 0x186 JumpB
	var_181_string = ""; // 0x187 PushV
	var_181_string = "Neutral"; // 0x188 MovS
	func_194(var_15_bool, var_181_string); // 0x189 NEW_2
	var_182_int = 521574; // 0x18b PushI
	SetMessage(var_182_int); // 0x18c TObjFunc
	ClearReplies(); // 0x18e TObjFunc
	var_183_int = 521575; // 0x190 PushI
	var_184_int = -1; // 0x191 PushI
	var_185_int = 22736; // 0x192 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_186_int = 22727; // 0x196 PushI
	var_187_bool = var_14_object == var_186_int; // 0x197 Eq
	if(var_187_bool == 0) goto Label_455; // 0x198 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x199 PushV
	var_189_object = var_1_object; // 0x19a MovT
	func_2531(var_189_object); // 0x19b NEW_2
	var_199_bool = var_188_bool == 0; // 0x19d Not
	if(var_199_bool == 0) goto Label_430; // 0x19e JumpB
	var_200_string = ""; // 0x19f PushV
	var_200_string = "Neutral"; // 0x1a0 MovS
	func_194(var_15_bool, var_200_string); // 0x1a1 NEW_2
	var_201_int = 521566; // 0x1a3 PushI
	SetMessage(var_201_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_202_int = 522231; // 0x1a8 PushI
	var_203_int = 23381; // 0x1a9 PushI
	var_204_int = 23380; // 0x1aa PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_205_bool = 0; var_206_object = Obj(); // 0x1ae PushV
	var_206_object = var_1_object; // 0x1af MovT
	func_2531(var_206_object); // 0x1b0 NEW_2
	if(var_205_bool == 0) goto Label_455; // 0x1b2 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x1b3 PushV
	var_207_object = var_1_object; // 0x1b4 MovT
	var_208_object = var_0_object; // 0x1b5 MovT
	func_2454(); // 0x1b6 NEW_2
	var_209_string = ""; // 0x1b8 PushV
	var_209_string = "Neutral"; // 0x1b9 MovS
	func_194(var_15_bool, var_209_string); // 0x1ba NEW_2
	var_210_int = 521568; // 0x1bc PushI
	SetMessage(var_210_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_211_int = 522251; // 0x1c1 PushI
	var_212_int = 23403; // 0x1c2 PushI
	var_213_int = 23402; // 0x1c3 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_214_int = 23403; // 0x1c7 PushI
	var_215_bool = var_14_object == var_214_int; // 0x1c8 Eq
	if(var_215_bool == 0) goto Label_478; // 0x1c9 JumpB
	var_216_string = ""; // 0x1ca PushV
	var_216_string = "Neutral"; // 0x1cb MovS
	func_194(var_15_bool, var_216_string); // 0x1cc NEW_2
	var_217_int = 522252; // 0x1ce PushI
	SetMessage(var_217_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_218_int = 522244; // 0x1d3 PushI
	var_219_int = 23395; // 0x1d4 PushI
	var_220_int = 23394; // 0x1d5 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1d6 TObjFunc
	var_221_int = 522246; // 0x1d8 PushI
	var_222_int = 23395; // 0x1d9 PushI
	var_223_int = 23396; // 0x1da PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_224_int = 23395; // 0x1de PushI
	var_225_bool = var_14_object == var_224_int; // 0x1df Eq
	if(var_225_bool == 0) goto Label_501; // 0x1e0 JumpB
	var_226_string = ""; // 0x1e1 PushV
	var_226_string = "Neutral"; // 0x1e2 MovS
	func_194(var_15_bool, var_226_string); // 0x1e3 NEW_2
	var_227_int = 522245; // 0x1e5 PushI
	SetMessage(var_227_int); // 0x1e6 TObjFunc
	ClearReplies(); // 0x1e8 TObjFunc
	var_228_int = 521569; // 0x1ea PushI
	var_229_int = 22731; // 0x1eb PushI
	var_230_int = 22730; // 0x1ec PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1ed TObjFunc
	var_231_int = 522247; // 0x1ef PushI
	var_232_int = 23399; // 0x1f0 PushI
	var_233_int = 23398; // 0x1f1 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1f2 TObjFunc
	return 0; // 0x1f4 Return
	
Label_501:
	var_234_int = 23399; // 0x1f5 PushI
	var_235_bool = var_14_object == var_234_int; // 0x1f6 Eq
	if(var_235_bool == 0) goto Label_519; // 0x1f7 JumpB
	var_236_string = ""; // 0x1f8 PushV
	var_236_string = "Neutral"; // 0x1f9 MovS
	func_194(var_15_bool, var_236_string); // 0x1fa NEW_2
	var_237_int = 522248; // 0x1fc PushI
	SetMessage(var_237_int); // 0x1fd TObjFunc
	ClearReplies(); // 0x1ff TObjFunc
	var_238_int = 522249; // 0x201 PushI
	var_239_int = 23401; // 0x202 PushI
	var_240_int = 23400; // 0x203 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_241_int = 22731; // 0x207 PushI
	var_242_bool = var_14_object == var_241_int; // 0x208 Eq
	if(var_242_bool == 0) goto Label_537; // 0x209 JumpB
	var_243_string = ""; // 0x20a PushV
	var_243_string = "Neutral"; // 0x20b MovS
	func_194(var_15_bool, var_243_string); // 0x20c NEW_2
	var_244_int = 521570; // 0x20e PushI
	SetMessage(var_244_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_245_int = 521571; // 0x213 PushI
	var_246_int = 23401; // 0x214 PushI
	var_247_int = 22732; // 0x215 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_248_int = 23401; // 0x219 PushI
	var_249_bool = var_14_object == var_248_int; // 0x21a Eq
	if(var_249_bool == 0) goto Label_555; // 0x21b JumpB
	var_250_string = ""; // 0x21c PushV
	var_250_string = "Neutral"; // 0x21d MovS
	func_194(var_15_bool, var_250_string); // 0x21e NEW_2
	var_251_int = 522250; // 0x220 PushI
	SetMessage(var_251_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_252_int = 522253; // 0x225 PushI
	var_253_int = -1; // 0x226 PushI
	var_254_int = 23405; // 0x227 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_255_int = 23381; // 0x22b PushI
	var_256_bool = var_14_object == var_255_int; // 0x22c Eq
	if(var_256_bool == 0) goto Label_578; // 0x22d JumpB
	var_257_string = ""; // 0x22e PushV
	var_257_string = "Neutral"; // 0x22f MovS
	func_194(var_15_bool, var_257_string); // 0x230 NEW_2
	var_258_int = 522232; // 0x232 PushI
	SetMessage(var_258_int); // 0x233 TObjFunc
	ClearReplies(); // 0x235 TObjFunc
	var_259_int = 522233; // 0x237 PushI
	var_260_int = 23383; // 0x238 PushI
	var_261_int = 23382; // 0x239 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x23a TObjFunc
	var_262_int = 522237; // 0x23c PushI
	var_263_int = -1; // 0x23d PushI
	var_264_int = 23386; // 0x23e PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x23f TObjFunc
	return 0; // 0x241 Return
	
Label_578:
	var_265_int = 23383; // 0x242 PushI
	var_266_bool = var_14_object == var_265_int; // 0x243 Eq
	if(var_266_bool == 0) goto Label_596; // 0x244 JumpB
	var_267_string = ""; // 0x245 PushV
	var_267_string = "Neutral"; // 0x246 MovS
	func_194(var_15_bool, var_267_string); // 0x247 NEW_2
	var_268_int = 522234; // 0x249 PushI
	SetMessage(var_268_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_269_int = 522235; // 0x24e PushI
	var_270_int = 23379; // 0x24f PushI
	var_271_int = 23384; // 0x250 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_272_int = 23379; // 0x254 PushI
	var_273_bool = var_14_object == var_272_int; // 0x255 Eq
	if(var_273_bool == 0) goto Label_619; // 0x256 JumpB
	var_274_string = ""; // 0x257 PushV
	var_274_string = "Neutral"; // 0x258 MovS
	func_194(var_15_bool, var_274_string); // 0x259 NEW_2
	var_275_int = 522230; // 0x25b PushI
	SetMessage(var_275_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_276_int = 522238; // 0x260 PushI
	var_277_int = 23388; // 0x261 PushI
	var_278_int = 23387; // 0x262 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x263 TObjFunc
	var_279_int = 521567; // 0x265 PushI
	var_280_int = -1; // 0x266 PushI
	var_281_int = 22728; // 0x267 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_282_int = 23388; // 0x26b PushI
	var_283_bool = var_14_object == var_282_int; // 0x26c Eq
	if(var_283_bool == 0) goto Label_637; // 0x26d JumpB
	var_284_string = ""; // 0x26e PushV
	var_284_string = "Neutral"; // 0x26f MovS
	func_194(var_15_bool, var_284_string); // 0x270 NEW_2
	var_285_int = 522239; // 0x272 PushI
	SetMessage(var_285_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_286_int = 522240; // 0x277 PushI
	var_287_int = -1; // 0x278 PushI
	var_288_int = 23389; // 0x279 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x27a TObjFunc
	return 0; // 0x27c Return
	
Label_637:
	var_3_string = 1; // 0x27d TMovB
	var_289_bool = 0; // 0x27e PushV
	func_2762(var_289_bool); // 0x27f NEW_2
	if(var_289_bool == 0) goto Label_645; // 0x281 JumpB
	lshStopAnimation(); // 0x282 Func
	goto Label_647; // 0x284 Jump
	
Label_647:
	return 0; // 0x287 Return
	
Label_645:
	StopAnimation(); // 0x285 Func
	
Label_649:
	return 0; // 0x289 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int)
{
	var_15_int = 1; // 0x567 PushI
	var_16_bool = var_14_int == var_15_int; // 0x568 Eq
	if(var_16_bool == 0) goto Label_1391; // 0x569 JumpB
	var_17_object = Obj(); // 0x56a PushV
	var_17_object = var_1_object; // 0x56b MovT
	func_2422(var_17_object); // 0x56c NEW_2
	goto Label_1395; // 0x56e Jump
	
Label_1395:
	return 0; // 0x573 Return
	
Label_1391:
	var_22_int = 0; // 0x56f PushV
	var_22_int = var_14_int; // 0x570 Mov
	func_1540(var_13_bool, var_14_int, var_22_int); // 0x571 NEW_2
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x582 PushV
	var_15_bool = 0; // 0x583 MovB
	var_16_bool = var_1_object == var_14_object; // 0x584 Eq
	if(var_16_bool == 0) goto Label_1417; // 0x585 JumpB
	var_17_bool = var_2_object == 0; // 0x586 Not
	if(var_17_bool == 0) goto Label_1417; // 0x587 JumpB
	var_15_bool = 1; // 0x588 MovB
	
Label_1417:
	if(var_15_bool == 0) goto Label_1423; // 0x589 JumpB
	var_2_object = 1; // 0x58a TMovB
	var_18_object = Obj(); // 0x58b PushV
	var_18_object = var_14_object; // 0x58c Mov
	func_2257(var_18_object); // 0x58d NEW_2
	
Label_1423:
	return 0; // 0x58f Return
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x591 PushV
	var_15_bool = 0; // 0x592 MovB
	var_16_bool = var_1_object == var_14_object; // 0x593 Eq
	if(var_16_bool == 0) goto Label_1432; // 0x594 JumpB
	var_17_object = var_2_object; // 0x595 PushT
	if(var_17_object == 0) goto Label_1432; // 0x596 JumpB
	var_15_bool = 1; // 0x597 MovB
	
Label_1432:
	if(var_15_bool == 0) goto Label_1437; // 0x598 JumpB
	var_2_object = 0; // 0x599 TMovB
	var_18_string = "head"; // 0x59a PushS
	UnlookAsync(var_18_string); // 0x59b Func
	
Label_1437:
	return 0; // 0x59d Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	RequestClearPath(var_14_object); // 0x617 Func
	return 0; // 0x619 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1396(var_14_object); // 0x623 NEW_2
	var_19_object = Obj(); // 0x625 PushV
	var_19_object = var_14_object; // 0x626 Mov
	func_2748(); // 0x627 NEW_2
	return 0; // 0x629 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x654 PushV
	IsOverrideActive(var_16_bool); // 0x655 Func
	var_17_bool = var_16_bool == 0; // 0x657 Not
	if(var_17_bool == 0) goto Label_1629; // 0x658 JumpB
	var_18_object = Obj(); // 0x659 PushV
	var_18_object = var_14_object; // 0x65a Mov
	func_2663(var_18_object); // 0x65b NEW_2
	
Label_1629:
	return 2; // 0x65d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_object = Obj(); // 0x65e PushV
	func_2316(var_14_object); // 0x65f NEW_2
	RemoveActor(var_14_object); // 0x661 Func
	Hold(); // 0x663 Func
	return 0; // 0x665 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0; // 0x6dc Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	return 0; // 0x6de Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	return 0; // 0x6e0 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x6ee PushV
	func_1783(var_15_bool); // 0x6ef NEW_2
	if(var_15_bool == 0) goto Label_1782; // 0x6f1 JumpB
	var_16_object = Obj(); // 0x6f2 PushV
	var_16_object = var_14_object; // 0x6f3 Mov
	func_1761(var_16_object); // 0x6f4 NEW_2
	
Label_1782:
	return 0; // 0x6f6 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x6f9 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x6fa Func
	var_17_bool = var_16_bool; // 0x6fc Push
	if(var_17_bool == 0) goto Label_1795; // 0x6fd JumpB
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x6fe PushV
	var_19_string = "quest_b9_01"; // 0x6ff MovS
	var_20_string = "factory_fight"; // 0x700 MovS
	func_2410(var_18_bool, var_19_string, var_20_string); // 0x701 NEW_2
	
Label_1795:
	return 2; // 0x703 Return
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_string)
{
	var_15_string = "attack"; // 0x705 PushS
	var_16_bool = var_14_string == var_15_string; // 0x706 Eq
	if(var_16_bool == 0) goto Label_1805; // 0x707 JumpB
	TaskCall(2); // 0x709 TaskCall
	func_650(); // 0x70a NEW_2
	TaskReturn(); // 0x70b TaskReturn
	
Label_1805:
	return 0; // 0x70d Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0xa9e PushV
	var_18_object = var_14_object; // 0xa9f Mov
	var_19_int = var_15_int; // 0xaa0 Mov
	var_20_float = var_16_float; // 0xaa1 Mov
	func_2048(var_18_object, var_19_int, var_20_float); // 0xaa2 NEW_2
	return 0; // 0xaa4 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0xaa6 PushV
	var_20_object = var_14_object; // 0xaa7 Mov
	var_21_int = var_15_int; // 0xaa8 Mov
	var_22_float = var_16_float; // 0xaa9 Mov
	var_23_cvector = var_18_cvector; // 0xaaa Mov
	var_24_cvector = var_19_cvector; // 0xaab Mov
	func_2116(var_22_float, var_23_cvector, var_24_cvector); // 0xaac NEW_2
	return 0; // 0xaae Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0xaaf PushV
	var_18_string = "health"; // 0xab0 PushS
	var_19_bool = var_15_string == var_18_string; // 0xab1 Eq
	if(var_19_bool == 0) goto Label_2747; // 0xab2 JumpB
	var_20_string = "health"; // 0xab3 PushS
	GetProperty(var_20_string, var_17_float); // 0xab4 Func
	var_21_int = 0; // 0xab6 PushI
	var_22_bool = var_17_float <= var_21_int; // 0xab7 LE
	if(var_22_bool == 0) goto Label_2747; // 0xab8 JumpB
	SignalDeath(var_14_object); // 0xab9 Func
	
Label_2747:
	return 2; // 0xabb Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj(); // 0xabd PushV
	var_15_object = var_14_object; // 0xabe Mov
	func_2764(var_15_object); // 0xabf NEW_2
	return 0; // 0xac1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	
Label_1769:
	Hold(); // 0x6e9 Func
	goto Label_1769; // 0x6eb Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_2141(var_29_object, var_30_float); // 0x5 NEW_2
	var_74_bool = var_28_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_2756(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_2754(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_2758(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_2760(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_2640(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_87_bool = var_25_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_18_object; // 0x30 Mov
	var_89_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_185_bool = var_27_bool == 0; // 0x38 Not
	if(var_185_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_186_object = Obj(); // 0x3f PushV
	var_186_object = var_18_object; // 0x40 Mov
	func_2209(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2048(var_18_object, var_19_int, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_int = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); // 0x800 PushV
	var_39_bool = 0; // 0x801 PushV
	var_39_bool = 0; // 0x802 MovB
	var_40_bool = 0; // 0x803 PushV
	var_40_bool = 0; // 0x804 MovB
	var_41_object = var_18_object; // 0x805 Push
	if(var_41_object == 0) goto Label_2059; // 0x806 JumpB
	var_42_int = 4; // 0x807 PushI
	var_43_bool = var_19_int != var_42_int; // 0x808 Neq
	if(var_43_bool == 0) goto Label_2059; // 0x809 JumpB
	var_40_bool = 1; // 0x80a MovB
	
Label_2059:
	if(var_40_bool == 0) goto Label_2064; // 0x80b JumpB
	var_44_int = 5; // 0x80c PushI
	var_45_bool = var_19_int != var_44_int; // 0x80d Neq
	if(var_45_bool == 0) goto Label_2064; // 0x80e JumpB
	var_39_bool = 1; // 0x80f MovB
	
Label_2064:
	if(var_39_bool == 0) goto Label_2111; // 0x810 JumpB
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x811 PushV
	var_48_cvector = CVector(0,0,0); var_49_object = Obj(); // 0x812 PushV
	var_49_object = var_18_object; // 0x813 Mov
	func_1820(var_49_object); // 0x814 NEW_2
	var_47_cvector = var_48_cvector; // 0x815 Mov
	func_2322(var_46_cvector, var_47_cvector); // 0x817 NEW_2
	var_30_cvector = var_46_cvector; // 0x818 Mov
	CreateVectorVector(var_31_object); // 0x81a Func
	var_32_int = 1; // 0x81c MovI
	
Label_2077:
	var_59_string = "hit"; // 0x81d PushS
	var_60_int = var_59_string + var_32_int; // 0x81e Add
	GetGeometryLocator(var_60_int, var_33_bool, var_34_cvector, var_35_cvector); // 0x81f Func
	var_61_bool = var_33_bool == 0; // 0x821 Not
	if(var_61_bool == 0) goto Label_2084; // 0x822 JumpB
	goto Label_2093; // 0x823 Jump
	
Label_2093:
	size(var_36_int); // 0x82d ObjFunc
	var_62_int = var_36_int; // 0x82f Push
	if(var_62_int == 0) goto Label_2110; // 0x830 JumpB
	irand(var_37_int, var_36_int); // 0x831 Func
	get(var_38_cvector, var_37_int); // 0x833 ObjFunc
	var_63_object = Obj(); var_64_int = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x835 PushV
	var_63_object = var_18_object; // 0x836 Mov
	var_64_int = var_19_int; // 0x837 Mov
	var_65_float = var_20_float; // 0x838 Mov
	var_66_cvector = var_38_cvector; // 0x839 Mov
	var_67_cvector = -var_30_cvector; // 0x83a Neg2
	func_2116(var_65_float, var_66_cvector, var_67_cvector); // 0x83b NEW_2
	return 18; // 0x83d Return
	
Label_2110:
	var_31_object = 0; // 0x83e SetNull
	
Label_2111:
	var_108_object = Obj(); // 0x83f PushV
	var_108_object = var_18_object; // 0x840 Mov
	func_2004(var_108_object); // 0x841 NEW_2
	return 18; // 0x843 Return
	
Label_2084:
	var_109_int = var_35_cvector | var_30_cvector; // 0x824 Or
	var_110_float = 0.70711; // 0x825 PushF
	var_111_bool = var_109_int >= var_110_float; // 0x826 GE
	if(var_111_bool == 0) goto Label_2090; // 0x827 JumpB
	add(var_34_cvector); // 0x828 ObjFunc
	
Label_2090:
	var_112_int = 1; // 0x82a PushI
	var_32_int = var_32_int + var_112_int; // 0x82b Add2
	goto Label_2077; // 0x82c Jump
}


func_1281(var_2_object, var_5_object)
{
	var_367_float = 0; var_368_int = 0; var_369_float = 0; var_370_int = 0; // 0x501 PushV
	var_371_bool = var_2_object == 0; // 0x502 Not
	if(var_371_bool == 0) goto Label_1285; // 0x503 JumpB
	return 4; // 0x504 Return
	
Label_1285:
	var_372_object = var_5_object; // 0x505 PushT
	if(var_372_object == 0) goto Label_1293; // 0x506 JumpB
	var_373_int = -1; // 0x507 PushI
	var_5_object = var_5_object + var_373_int; // 0x508 Add2
	var_374_int = 0; // 0x509 PushI
	var_375_bool = var_5_object > var_374_int; // 0x50a GT
	if(var_375_bool == 0) goto Label_1293; // 0x50b JumpB
	return 4; // 0x50c Return
	
Label_1293:
	rand(var_369_float); // 0x50d Func
	var_376_float = 0; // 0x50f PushV
	func_1331(var_376_float); // 0x510 NEW_2
	var_377_bool = var_369_float < var_376_float; // 0x512 LT
	if(var_377_bool == 0) goto Label_1312; // 0x513 JumpB
	irand(var_370_int, var_369_float); // 0x514 Func
	var_378_int = 1; // 0x516 PushI
	var_370_int = var_370_int + var_378_int; // 0x517 Add2
	var_379_string = "attack"; // 0x518 PushS
	var_380_int = var_379_string + var_370_int; // 0x519 Add
	Speak(var_380_int); // 0x51a Func
	var_381_int = 0; // 0x51c PushV
	func_1329(var_381_int); // 0x51d NEW_2
	var_5_object = var_381_int; // 0x51e TMov
	
Label_1312:
	return 4; // 0x520 Return
}


func_1540(var_0_object, var_1_object, var_22_int)
{
	var_23_int = 0; // 0x605 PushI
	var_24_bool = var_22_int != var_23_int; // 0x606 Neq
	if(var_24_bool == 0) goto Label_1545; // 0x607 JumpB
	return 0; // 0x608 Return
	
Label_1545:
	var_25_bool = 0; var_26_object = Obj(); // 0x609 PushV
	var_26_object = var_1_object; // 0x60a MovT
	func_1578(var_25_bool, var_26_object); // 0x60b NEW_2
	var_61_bool = var_25_bool == 0; // 0x60d Not
	if(var_61_bool == 0) goto Label_1552; // 0x60e JumpB
	var_0_object = 1; // 0x60f TMovB
	
Label_1552:
	var_62_int = 0; // 0x610 PushI
	KillTimer(var_62_int); // 0x611 Func
	Stop(); // 0x613 Func
	return 0; // 0x615 Return
}


func_2566(var_139_bool)
{
	var_141_int = 0; var_142_int = 0; // 0xa06 PushV
	var_143_string = "rifle_ammo"; // 0xa07 PushS
	GetItemCountOfType(var_142_int, var_143_string); // 0xa08 ObjFunc
	var_144_int = 30; // 0xa0a PushI
	var_139_bool = var_142_int >= var_144_int; // 0xa0b GE2
	return 2; // 0xa0c Return
}


func_2316(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x90c PushV
	self(var_84_object); // 0x90d Func
	var_82_object = var_84_object; // 0x90f Mov
	return 2; // 0x910 Return
}


func_2573()
{
	var_28_object = Obj(); var_29_object = Obj(); // 0xa0d PushV
	var_30_int = 301; // 0xa0e PushI
	var_31_int = 1; // 0xa0f PushI
	var_32_int = 521616; // 0xa10 PushI
	CreateDiaryEntry(var_29_object, var_30_int, var_31_int, var_32_int); // 0xa11 Func
	var_33_bool = 0; var_34_object = Obj(); var_35_int = 0; // 0xa13 PushV
	var_34_object = var_29_object; // 0xa14 Mov
	var_35_int = 297; // 0xa15 MovI
	func_2612(var_33_bool, var_34_object, var_35_int); // 0xa16 NEW_2
	return 2; // 0xa18 Return
}


func_1806(var_427_string, var_428_int)
{
	var_429_int = 2; // 0x70f PushI
	var_430_bool = var_428_int == var_429_int; // 0x710 Eq
	if(var_430_bool == 0) goto Label_1813; // 0x711 JumpB
	var_427_string = "fire"; // 0x712 MovS
	return 0; // 0x713 Return
	
Label_1813:
	var_431_int = 1; // 0x715 PushI
	var_432_bool = var_428_int == var_431_int; // 0x716 Eq
	if(var_432_bool == 0) goto Label_1818; // 0x717 JumpB
	var_427_string = "bullet"; // 0x718 MovS
	return 0; // 0x719 Return
	
Label_1818:
	var_427_string = "phys"; // 0x71a MovS
	return 0; // 0x71b Return
}


func_2322(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x912 PushV
	var_56_int = var_47_cvector | var_47_cvector; // 0x913 Or
	var_55_float = sqrt(var_56_int); // 0x914 Sqrt2
	var_57_float = 0.0; // 0x915 PushF
	var_58_bool = var_55_float < var_57_float; // 0x916 LT
	if(var_58_bool == 0) goto Label_2330; // 0x917 JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x918 MovV
	return 2; // 0x919 Return
	
Label_2330:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x91a Div2
	return 2; // 0x91b Return
}


func_2586()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0xa1a PushV
	var_63_int = 302; // 0xa1b PushI
	var_64_int = 1; // 0xa1c PushI
	var_65_int = 521617; // 0xa1d PushI
	CreateDiaryEntry(var_62_object, var_63_int, var_64_int, var_65_int); // 0xa1e Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0xa20 PushV
	var_67_object = var_62_object; // 0xa21 Mov
	var_68_int = 297; // 0xa22 MovI
	func_2612(var_66_bool, var_67_object, var_68_int); // 0xa23 NEW_2
	return 2; // 0xa25 Return
}


func_1562(var_0_object)
{
	var_0_object = 1; // 0x61a TMovB
	var_18_int = 0; // 0x61b PushI
	KillTimer(var_18_int); // 0x61c Func
	Stop(); // 0x61e Func
	return 0; // 0x620 Return
}


func_1820(var_48_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x71c PushV
	GetPosition(var_52_cvector); // 0x71d Func
	GetPosition(var_53_cvector); // 0x71f ObjFunc
	var_48_cvector = var_53_cvector - var_52_cvector; // 0x721 Sub2
	return 4; // 0x722 Return
}


func_2332(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float; // 0x91d LT
	if(var_442_bool == 0) goto Label_2337; // 0x91e JumpB
	var_437_float = var_438_float; // 0x91f Mov
	goto Label_2338; // 0x920 Jump
	
Label_2338:
	return 0; // 0x922 Return
	
Label_2337:
	var_437_float = var_439_float; // 0x921 Mov
}


func_1313(var_0_object)
{
	var_123_object = Obj(); // 0x521 PushV
	var_123_object = var_0_object; // 0x522 MovT
	func_2422(var_123_object); // 0x523 NEW_2
	return 0; // 0x525 Return
}


func_1827(var_125_bool, var_126_object)
{
	var_127_bool = 0; var_128_bool = 0; // 0x723 PushV
	IsPlayerActor(var_126_object, var_128_bool); // 0x724 Func
	var_125_bool = var_128_bool; // 0x726 Mov
	return 2; // 0x727 Return
}


func_2339(var_158_float, var_159_float, var_160_float, var_161_float)
{
	var_162_bool = var_159_float < var_160_float; // 0x924 LT
	if(var_162_bool == 0) goto Label_2344; // 0x925 JumpB
	var_158_float = var_160_float; // 0x926 Mov
	return 0; // 0x927 Return
	
Label_2344:
	var_163_bool = var_159_float > var_161_float; // 0x928 GT
	if(var_163_bool == 0) goto Label_2348; // 0x929 JumpB
	var_158_float = var_161_float; // 0x92a Mov
	return 0; // 0x92b Return
	
Label_2348:
	var_158_float = var_159_float; // 0x92c Mov
	return 0; // 0x92d Return
}


func_1318(var_460_int)
{
	var_460_int = 0; // 0x526 MovI
	return 0; // 0x527 Return
}


func_2599(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xa27 PushV
	GetDiaryRoot(var_44_object); // 0xa28 Func
	var_45_bool = var_44_object == 0; // 0xa2a Not
	if(var_45_bool == 0) goto Label_2609; // 0xa2b JumpB
	var_46_string = "Can't retrieve diary root"; // 0xa2c PushS
	Trace(var_46_string); // 0xa2d Func
	var_42_object = 0; // 0xa2f MovB
	return 2; // 0xa30 Return
	
Label_2609:
	var_42_object = var_44_object; // 0xa31 Mov
	return 2; // 0xa32 Return
}


func_1320()
{
	var_256_string = ""; // 0x528 PushV
	var_256_string = "attack_stay"; // 0x529 MovS
	func_2275(var_256_string); // 0x52a NEW_2
	return 0; // 0x52c Return
}


func_1832(var_148_bool, var_149_object, var_150_string)
{
	var_151_bool = 0; var_152_bool = 0; // 0x728 PushV
	var_153_string = "HasProperty"; // 0x729 PushS
	var_154_int = 2; // 0x72a PushI
	var_155_bool = IsFuncExist(var_149_object, var_153_string, var_154_int); // 0x72b FuncExist
	var_156_bool = var_155_bool == 0; // 0x72c Not
	if(var_156_bool == 0) goto Label_1840; // 0x72d JumpB
	var_148_bool = 0; // 0x72e MovB
	return 2; // 0x72f Return
	
Label_1840:
	HasProperty(var_150_string, var_152_bool); // 0x730 ObjFunc
	var_148_bool = var_152_bool; // 0x732 Mov
	return 2; // 0x733 Return
}


func_1578(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj(); // 0x62b PushV
	var_184_object = var_182_object; // 0x62c Mov
	func_1980(var_183_bool, var_184_object); // 0x62d NEW_2
	var_181_bool = var_183_bool; // 0x62e Mov
	return 0; // 0x630 Return
}


func_1325()
{
	return 0; // 0x52e Return
}


func_2350(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0; // 0x92e PushV
	GetVariable(var_117_string, var_119_int); // 0x92f Func
	var_116_int = var_119_int; // 0x931 Mov
	return 2; // 0x932 Return
}


func_1327(var_485_bool)
{
	var_485_bool = 1; // 0x52f MovB
	return 0; // 0x530 Return
}


func_1585(var_199_string)
{
	var_199_string = "walk"; // 0x631 MovS
	return 0; // 0x632 Return
}


func_1329(var_381_int)
{
	var_381_int = 1; // 0x531 MovI
	return 0; // 0x532 Return
}


func_1587(var_200_string)
{
	var_200_string = "run"; // 0x633 MovS
	return 0; // 0x634 Return
}


func_2612(var_33_bool, var_34_object, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; // 0xa34 PushV
	var_42_object = Obj(); // 0xa35 PushV
	func_2599(var_42_object); // 0xa36 NEW_2
	var_39_object = var_42_object; // 0xa37 Mov
	Find(var_35_int, var_40_object); // 0xa39 ObjFunc
	var_47_bool = var_40_object == 0; // 0xa3b Not
	if(var_47_bool == 0) goto Label_2627; // 0xa3c JumpB
	var_48_string = "Can't find diary parent with id: "; // 0xa3d PushS
	var_49_int = var_48_string + var_35_int; // 0xa3e Add
	Trace(var_49_int); // 0xa3f Func
	var_33_bool = 0; // 0xa41 MovB
	return 6; // 0xa42 Return
	
Label_2627:
	AddChild(var_34_object); // 0xa43 ObjFunc
	var_50_int = 7; // 0xa45 PushI
	SendWorldWndMessage(var_50_int); // 0xa46 Func
	GetCategory(var_41_int); // 0xa48 ObjFunc
	SetDiarySection(var_41_int); // 0xa4a Func
	var_33_bool = 0; // 0xa4c MovB
	return 6; // 0xa4d Return
}


func_1589(var_16_object)
{
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; // 0x636 PushV
	var_18_string = "quest_b9_01"; // 0x637 MovS
	var_19_string = "doberman_dead"; // 0x638 MovS
	func_2410(var_17_bool, var_18_string, var_19_string); // 0x639 NEW_2
	var_23_object = Obj(); // 0x63b PushV
	var_23_object = var_16_object; // 0x63c Mov
	func_1638(var_23_object); // 0x63d NEW_2
	var_103_int = 50; // 0x63f PushI
	var_104_int = 40; // 0x640 PushI
	SetRTEnvelope(var_103_int, var_104_int); // 0x641 Func
	func_2693(); // 0x644 NEW_2
	var_125_bool = 0; var_126_object = Obj(); // 0x646 PushV
	var_126_object = var_16_object; // 0x647 Mov
	func_1827(var_125_bool, var_126_object); // 0x648 NEW_2
	if(var_125_bool == 0) goto Label_1616; // 0x64a JumpB
	var_129_bool = 0; var_130_object = Obj(); var_131_float = 0; // 0x64b PushV
	var_130_object = var_16_object; // 0x64c Mov
	var_131_float = -0.03; // 0x64d MovF
	func_2355(var_129_bool, var_130_object, var_131_float); // 0x64e NEW_2
	
Label_1616:
	Hold(); // 0x650 Func
	goto Label_1616; // 0x652 Jump
}


func_1331(var_376_float)
{
	var_376_float = 0.5; // 0x533 MovF
	return 0; // 0x534 Return
}


func_2355(var_129_bool, var_130_object, var_131_float)
{
	var_132_bool = var_130_object == 0; // 0x934 Not
	if(var_132_bool == 0) goto Label_2360; // 0x935 JumpB
	var_129_bool = 0; // 0x936 MovB
	return 0; // 0x937 Return
	
Label_2360:
	var_133_int = 0; // 0x938 PushI
	var_134_bool = var_131_float > var_133_int; // 0x939 GT
	if(var_134_bool == 0) goto Label_2367; // 0x93a JumpB
	var_135_int = 8; // 0x93b PushI
	SendWorldWndMessage(var_135_int); // 0x93c Func
	goto Label_2376; // 0x93e Jump
	
Label_2376:
	var_136_float = 0; // 0x948 PushV
	var_136_float = var_131_float; // 0x949 Mov
	func_2400(var_136_float); // 0x94a NEW_2
	var_140_bool = 0; var_141_object = Obj(); var_142_string = ""; var_143_float = 0; var_144_float = 0; var_145_float = 0; // 0x94c PushV
	var_141_object = var_130_object; // 0x94d Mov
	var_142_string = "reputation"; // 0x94e MovS
	var_143_float = var_131_float; // 0x94f Mov
	var_144_float = 0; // 0x950 MovI
	var_145_float = 1; // 0x951 MovI
	func_1844(var_140_bool, var_141_object, var_142_string, var_143_float, var_144_float, var_145_float); // 0x952 NEW_2
	var_129_bool = 1; // 0x954 MovB
	return 0; // 0x955 Return
	
Label_2367:
	var_164_int = 0; // 0x93f PushI
	var_165_bool = var_131_float < var_164_int; // 0x940 LT
	if(var_165_bool == 0) goto Label_2374; // 0x941 JumpB
	var_166_int = 9; // 0x942 PushI
	SendWorldWndMessage(var_166_int); // 0x943 Func
	goto Label_2376; // 0x945 Jump
	
Label_2374:
	var_129_bool = 0; // 0x946 MovB
	return 0; // 0x947 Return
}


func_1333(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x535 PushV
	var_143_object = Obj(); // 0x536 PushV
	var_143_object = var_131_object; // 0x537 Mov
	func_2422(var_143_object); // 0x538 NEW_2
	var_144_int = 1; // 0x53a PushI
	var_145_int = 5; // 0x53b PushI
	SetTimer(var_144_int, var_145_int); // 0x53c Func
	CanSee(var_141_bool, var_131_object); // 0x53e Func
	var_146_bool = var_141_bool; // 0x540 Push
	if(var_146_bool == 0) goto Label_1352; // 0x541 JumpB
	var_2_object = 1; // 0x542 TMovB
	var_147_object = Obj(); // 0x543 PushV
	var_147_object = var_131_object; // 0x544 Mov
	func_2257(var_147_object); // 0x545 NEW_2
	goto Label_1353; // 0x547 Jump
	
Label_1353:
	var_154_bool = 0; var_155_object = Obj(); // 0x549 PushV
	var_155_object = var_131_object; // 0x54a Mov
	func_1827(var_154_bool, var_155_object); // 0x54b NEW_2
	if(var_154_bool == 0) goto Label_1363; // 0x54d JumpB
	var_158_object = Obj(); // 0x54e PushV
	func_2316(var_158_object); // 0x54f NEW_2
	SendPlayerEnemy(var_131_object, var_158_object); // 0x551 Func
	
Label_1363:
	var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0; // 0x553 PushV
	var_160_object = var_131_object; // 0x554 Mov
	var_161_float = var_132_float; // 0x555 Mov
	var_162_float = var_133_float; // 0x556 Mov
	var_163_bool = var_134_bool; // 0x557 Mov
	var_164_bool = var_135_bool; // 0x558 Mov
	func_1438(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool); // 0x559 NEW_2
	var_142_bool = var_159_bool; // 0x55a Mov
	var_210_object = var_2_object; // 0x55c PushT
	if(var_210_object == 0) goto Label_1377; // 0x55d JumpB
	var_211_string = "head"; // 0x55e PushS
	UnlookAsync(var_211_string); // 0x55f Func
	
Label_1377:
	var_212_int = 1; // 0x561 PushI
	KillTimer(var_212_int); // 0x562 Func
	var_130_bool = var_142_bool; // 0x564 Mov
	return 4; // 0x565 Return
	
Label_1352:
	var_2_object = 0; // 0x548 TMovB
}


func_1844(var_140_bool, var_141_object, var_142_string, var_143_float, var_144_float, var_145_float)
{
	var_146_float = 0; var_147_float = 0; // 0x734 PushV
	var_148_bool = 0; var_149_object = Obj(); var_150_string = ""; // 0x735 PushV
	var_149_object = var_141_object; // 0x736 Mov
	var_150_string = var_142_string; // 0x737 Mov
	func_1832(var_148_bool, var_149_object, var_150_string); // 0x738 NEW_2
	var_157_bool = var_148_bool == 0; // 0x73a Not
	if(var_157_bool == 0) goto Label_1854; // 0x73b JumpB
	var_140_bool = 0; // 0x73c MovB
	return 2; // 0x73d Return
	
Label_1854:
	GetProperty(var_142_string, var_147_float); // 0x73e ObjFunc
	var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; // 0x740 PushV
	var_159_float = var_147_float + var_143_float; // 0x741 Add2
	var_160_float = var_144_float; // 0x742 Mov
	var_161_float = var_145_float; // 0x743 Mov
	func_2339(var_158_float, var_159_float, var_160_float, var_161_float); // 0x744 NEW_2
	SetProperty(var_142_string, var_158_float); // 0x746 ObjFunc
	var_140_bool = 1; // 0x748 MovB
	return 2; // 0x749 Return
}


func_2116(var_20_object, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x844 PushV
	GetScene(var_27_object); // 0x845 Func
	var_29_string = "scripted"; // 0x847 PushS
	var_30_string = "blood_dir.xml"; // 0x848 PushS
	AddActorByType(var_28_object, var_29_string, var_27_object, var_23_cvector, var_24_cvector, var_30_string); // 0x849 Func
	var_31_object = Obj(); // 0x84b PushV
	var_31_object = var_20_object; // 0x84c Mov
	func_2004(var_31_object); // 0x84d NEW_2
	return 4; // 0x84f Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_164; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_194(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 521564; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; // 0x59 PushV
	var_113_bool = 0; // 0x5a MovB
	var_114_bool = 0; var_115_object = Obj(); // 0x5b PushV
	var_115_object = var_1_object; // 0x5c MovT
	func_2507(var_115_object); // 0x5d NEW_2
	if(var_114_bool == 0) goto Label_102; // 0x5f JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x60 PushV
	var_123_object = var_1_object; // 0x61 MovT
	func_2485(var_123_object); // 0x62 NEW_2
	if(var_122_bool == 0) goto Label_102; // 0x64 JumpB
	var_113_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_113_bool == 0) goto Label_108; // 0x66 JumpB
	var_128_int = 521565; // 0x67 PushI
	var_129_int = 22727; // 0x68 PushI
	var_130_int = 22726; // 0x69 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6a TObjFunc
	
Label_108:
	var_131_bool = 0; // 0x6c PushV
	var_131_bool = 0; // 0x6d MovB
	var_132_bool = 0; // 0x6e PushV
	var_132_bool = 0; // 0x6f MovB
	var_133_bool = 0; // 0x70 PushV
	var_133_bool = 0; // 0x71 MovB
	var_134_bool = 0; // 0x72 PushV
	var_134_bool = 0; // 0x73 MovB
	var_135_bool = 0; var_136_object = Obj(); // 0x74 PushV
	var_136_object = var_1_object; // 0x75 MovT
	func_2485(var_136_object); // 0x76 NEW_2
	if(var_135_bool == 0) goto Label_127; // 0x78 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x79 PushV
	var_138_object = var_1_object; // 0x7a MovT
	func_2497(var_137_bool, var_138_object); // 0x7b NEW_2
	if(var_137_bool == 0) goto Label_127; // 0x7d JumpB
	var_134_bool = 1; // 0x7e MovB
	
Label_127:
	if(var_134_bool == 0) goto Label_134; // 0x7f JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x80 PushV
	var_146_object = var_1_object; // 0x81 MovT
	func_2519(var_146_object); // 0x82 NEW_2
	if(var_145_bool == 0) goto Label_134; // 0x84 JumpB
	var_133_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_133_bool == 0) goto Label_142; // 0x86 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x87 PushV
	var_152_object = var_1_object; // 0x88 MovT
	func_2507(var_152_object); // 0x89 NEW_2
	var_153_bool = var_151_bool == 0; // 0x8b Not
	if(var_153_bool == 0) goto Label_142; // 0x8c JumpB
	var_132_bool = 1; // 0x8d MovB
	
Label_142:
	if(var_132_bool == 0) goto Label_150; // 0x8e JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x8f PushV
	var_155_object = var_1_object; // 0x90 MovT
	func_2554(var_155_object); // 0x91 NEW_2
	var_160_bool = var_154_bool == 0; // 0x93 Not
	if(var_160_bool == 0) goto Label_150; // 0x94 JumpB
	var_131_bool = 1; // 0x95 MovB
	
Label_150:
	if(var_131_bool == 0) goto Label_156; // 0x96 JumpB
	var_161_int = 521573; // 0x97 PushI
	var_162_int = 23390; // 0x98 PushI
	var_163_int = 22734; // 0x99 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x9a TObjFunc
	
Label_156:
	var_164_int = 521572; // 0x9c PushI
	var_165_int = -1; // 0x9d PushI
	var_166_int = 22733; // 0x9e PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x9f TObjFunc
	goto Label_164; // 0xa1 Jump
	
Label_164:
	var_167_bool = 0; // 0xa4 PushV
	func_2762(var_167_bool); // 0xa5 NEW_2
	if(var_167_bool == 0) goto Label_179; // 0xa7 JumpB
	
Label_168:
	lshWaitForAnimEnd(); // 0xa8 Func
	var_168_string = var_3_string; // 0xaa PushT
	if(var_168_string == 0) goto Label_173; // 0xab JumpB
	goto Label_178; // 0xac Jump
	
Label_178:
	goto Label_193; // 0xb2 Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_173:
	var_169_string = ""; // 0xad PushV
	var_169_string = var_2_object; // 0xae MovT
	func_2226(var_169_string); // 0xaf NEW_2
	goto Label_168; // 0xb1 Jump
	
Label_179:
	var_180_string = "all"; // 0xb3 PushS
	var_181_string = "idle"; // 0xb4 PushS
	PlayAnimation(var_180_string, var_181_string); // 0xb5 Func
	
Label_183:
	WaitForAnimEnd(); // 0xb7 Func
	var_182_string = var_3_string; // 0xb9 PushT
	if(var_182_string == 0) goto Label_188; // 0xba JumpB
	goto Label_193; // 0xbb Jump
	
Label_188:
	var_183_string = "all"; // 0xbc PushS
	var_184_string = "idle"; // 0xbd PushS
	PlayAnimation(var_183_string, var_184_string); // 0xbe Func
	goto Label_183; // 0xc0 Jump
}


func_1866(var_399_float, var_400_object, var_401_float, var_402_int)
{
	var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_float = 0; var_410_float = 0; var_411_float = 0; var_412_int = 0; var_413_string = ""; var_414_int = 0; var_415_float = 0; var_416_float = 0; var_417_float = 0; // 0x74a PushV
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x74b PushV
	var_419_object = var_400_object; // 0x74c Mov
	var_420_string = "health"; // 0x74d MovS
	func_1832(var_418_bool, var_419_object, var_420_string); // 0x74e NEW_2
	var_421_bool = var_418_bool == 0; // 0x750 Not
	if(var_421_bool == 0) goto Label_1876; // 0x751 JumpB
	var_399_float = 0.0; // 0x752 MovF
	return 12; // 0x753 Return
	
Label_1876:
	var_422_bool = 0; var_423_object = Obj(); var_424_string = ""; // 0x754 PushV
	var_423_object = var_400_object; // 0x755 Mov
	var_424_string = "armor"; // 0x756 MovS
	func_1832(var_422_bool, var_423_object, var_424_string); // 0x757 NEW_2
	var_425_bool = var_422_bool == 0; // 0x759 Not
	if(var_425_bool == 0) goto Label_1885; // 0x75a JumpB
	var_412_int = 0; // 0x75b MovI
	goto Label_1888; // 0x75c Jump
	
Label_1888:
	var_426_string = "armor_"; // 0x760 PushS
	var_427_string = ""; var_428_int = 0; // 0x761 PushV
	var_428_int = var_402_int; // 0x762 Mov
	func_1806(var_427_string, var_428_int); // 0x763 NEW_2
	var_413_string = var_426_string + var_427_string; // 0x765 Add2
	var_433_bool = 0; var_434_object = Obj(); var_435_string = ""; // 0x766 PushV
	var_434_object = var_400_object; // 0x767 Mov
	var_435_string = var_413_string; // 0x768 Mov
	func_1832(var_433_bool, var_434_object, var_435_string); // 0x769 NEW_2
	var_436_bool = var_433_bool == 0; // 0x76b Not
	if(var_436_bool == 0) goto Label_1903; // 0x76c JumpB
	var_414_int = 0; // 0x76d MovI
	goto Label_1905; // 0x76e Jump
	
Label_1905:
	var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x771 PushV
	var_440_int = var_412_int + var_414_int; // 0x772 Add
	var_441_float = 100.0; // 0x773 PushF
	var_438_float = var_440_int / var_440_int; // 0x774 Div2
	var_439_float = 1; // 0x775 MovI
	func_2332(var_437_float, var_438_float, var_439_float); // 0x776 NEW_2
	var_415_float = var_437_float; // 0x777 Mov
	var_443_string = "health"; // 0x779 PushS
	GetProperty(var_443_string, var_416_float); // 0x77a ObjFunc
	var_444_int = 1; // 0x77c PushI
	var_445_int = var_444_int - var_415_float; // 0x77d Sub
	var_417_float = var_401_float * var_445_int; // 0x77e Mult2
	var_446_string = "health"; // 0x77f PushS
	var_447_float = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0; // 0x780 PushV
	var_448_float = var_416_float - var_417_float; // 0x781 Sub2
	var_449_float = 0; // 0x782 MovI
	var_450_float = 1; // 0x783 MovI
	func_2339(var_447_float, var_448_float, var_449_float, var_450_float); // 0x784 NEW_2
	SetProperty(var_446_string, var_447_float); // 0x786 ObjFunc
	var_453_bool = 0; var_454_object = Obj(); // 0x788 PushV
	var_454_object = var_400_object; // 0x789 Mov
	func_1827(var_453_bool, var_454_object); // 0x78a NEW_2
	if(var_453_bool == 0) goto Label_1937; // 0x78c JumpB
	var_455_float = 0; // 0x78d PushV
	var_455_float = -var_417_float; // 0x78e Neg2
	func_2390(var_455_float); // 0x78f NEW_2
	
Label_1937:
	var_399_float = var_417_float; // 0x791 Mov
	return 12; // 0x792 Return
	
Label_1903:
	GetProperty(var_413_string, var_414_int); // 0x76f ObjFunc
	
Label_1885:
	var_459_string = "armor"; // 0x75d PushS
	GetProperty(var_459_string, var_412_int); // 0x75e ObjFunc
}


func_2640(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0xa50 PushV
	var_82_string = "branch"; // 0xa51 PushS
	GetVariable(var_82_string, var_81_int); // 0xa52 Func
	var_83_int = 0; // 0xa54 PushI
	var_84_bool = var_81_int == var_83_int; // 0xa55 Eq
	if(var_84_bool == 0) goto Label_2650; // 0xa56 JumpB
	var_79_int = 1; // 0xa57 MovI
	return 2; // 0xa58 Return
	
Label_2650:
	var_85_int = 1; // 0xa5a PushI
	var_86_bool = var_81_int == var_85_int; // 0xa5b Eq
	if(var_86_bool == 0) goto Label_2655; // 0xa5c JumpB
	var_79_int = 2; // 0xa5d MovI
	return 2; // 0xa5e Return
	
Label_2655:
	var_79_int = 3; // 0xa5f MovI
	return 2; // 0xa60 Return
}


func_2130()
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); // 0x852 PushV
	GetPosition(var_237_cvector); // 0x853 ObjFunc
	GetPosition(var_238_cvector); // 0x855 Func
	var_239_cvector = var_237_cvector - var_238_cvector; // 0x857 Sub2
	var_240_float = GetByIndex(var_239_cvector, 0); // 0x858 PushE
	var_241_float = GetByIndex(var_239_cvector, 2); // 0x859 PushE
	RotateAsync(var_240_float, var_241_float); // 0x85a Func
	return 6; // 0x85c Return
}


func_2390(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj(); // 0x956 PushV
	CreateFloatVector(var_457_object); // 0x957 Func
	add(var_455_float); // 0x959 ObjFunc
	var_458_int = 15; // 0x95b PushI
	SendWorldWndMessage(var_458_int, var_457_object); // 0x95c Func
	return 2; // 0x95e Return
}


func_1111(var_486_bool, var_487_float)
{
	var_488_float = 0; var_489_bool = 0; var_490_float = 0; var_491_bool = 0; // 0x457 PushV
	rand(var_490_float); // 0x458 Func
	var_492_bool = var_490_float < var_487_float; // 0x45a LT
	if(var_492_bool == 0) goto Label_1131; // 0x45b JumpB
	
Label_1116:
	IsAnimationPlaying(var_491_bool); // 0x45c Func
	var_493_bool = var_491_bool == 0; // 0x45e Not
	if(var_493_bool == 0) goto Label_1121; // 0x45f JumpB
	goto Label_1130; // 0x460 Jump
	
Label_1130:
	goto Label_1136; // 0x46a Jump
	
Label_1136:
	var_486_bool = 0; // 0x470 MovB
	return 4; // 0x471 Return
	
Label_1121:
	var_494_bool = 0; // 0x461 PushV
	func_1209(var_494_bool); // 0x462 NEW_2
	if(var_494_bool == 0) goto Label_1127; // 0x464 JumpB
	var_486_bool = 1; // 0x465 MovB
	return 4; // 0x466 Return
	
Label_1127:
	sync(); // 0x467 Func
	goto Label_1116; // 0x469 Jump
	
Label_1131:
	WaitForAnimEnd(); // 0x46b Func
	func_1313(var_491_bool); // 0x46e NEW_2
}


func_2141(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x85d PushV
	GetPosition(var_41_cvector); // 0x85e ObjFunc
	GetEyesHeight(var_40_float); // 0x860 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x862 PushE
	var_49_float = var_49_float + var_40_float; // 0x863 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x864 PopE
	GetPosition(var_42_cvector); // 0x865 Func
	GetEyesHeight(var_40_float); // 0x867 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x869 PushE
	var_50_float = var_50_float + var_40_float; // 0x86a Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x86b PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x86c Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x86d PushE
	var_51_float = 0; // 0x86e MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x86f PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x870 Or
	var_53_float = sqrt(var_52_int); // 0x871 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x872 Div2
	var_44_cvector = -var_43_cvector; // 0x873 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x874 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x875 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x876 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x877 Xor2
	func_2322(var_55_cvector, var_56_cvector); // 0x878 NEW_2
	var_63_int = 25; // 0x87a PushI
	var_64_float = var_55_cvector * var_63_int; // 0x87b Mult
	var_65_int = var_54_float + var_64_float; // 0x87c Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x87d PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x87e Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x87f Add2
	IsOverrideActive(var_47_bool); // 0x880 Func
	var_67_bool = var_47_bool; // 0x882 Push
	if(var_67_bool == 0) goto Label_2182; // 0x883 JumpB
	var_28_bool = 0; // 0x884 MovB
	return 18; // 0x885 Return
	
Label_2182:
	StopWorld(); // 0x886 Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x888 Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x88a PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x88b PushE
	Rotate(var_68_float, var_69_float); // 0x88c Func
	var_70_bool = 0; // 0x88e PushV
	func_2762(var_70_bool); // 0x88f NEW_2
	if(var_70_bool == 0) goto Label_2195; // 0x891 JumpB
	goto Label_2203; // 0x892 Jump
	
Label_2203:
	CameraWaitForPlayFinish(); // 0x89b Func
	ResumeWorld(); // 0x89d Func
	var_28_bool = 1; // 0x89f MovB
	return 18; // 0x8a0 Return
	
Label_2195:
	var_71_string = "head"; // 0x893 PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x894 Func
	var_72_bool = var_48_bool; // 0x896 Push
	if(var_72_bool == 0) goto Label_2203; // 0x897 JumpB
	var_73_string = "head"; // 0x898 PushS
	LookAsyncCamera(var_73_string); // 0x899 Func
}


func_2400(var_136_float)
{
	var_137_object = Obj(); var_138_object = Obj(); // 0x960 PushV
	CreateFloatVector(var_138_object); // 0x961 Func
	add(var_136_float); // 0x963 ObjFunc
	var_139_int = 16; // 0x965 PushI
	SendWorldWndMessage(var_139_int, var_138_object); // 0x966 Func
	return 2; // 0x968 Return
}


func_2657(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0xa61 PushV
	var_108_string = "branch"; // 0xa62 PushS
	GetVariable(var_108_string, var_107_int); // 0xa63 Func
	var_105_int = var_107_int; // 0xa65 Mov
	return 2; // 0xa66 Return
}


func_1638(var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); // 0x666 PushV
	var_44_bool = var_23_object == 0; // 0x667 NullEq
	if(var_44_bool == 0) goto Label_1646; // 0x668 JumpB
	var_45_string = ""; // 0x669 PushV
	var_45_string = "fdie"; // 0x66a MovS
	func_1729(var_45_string); // 0x66b NEW_2
	goto Label_1728; // 0x66d Jump
	
Label_1728:
	return 20; // 0x6c0 Return
	
Label_1646:
	GetPosition(var_34_cvector); // 0x66e ObjFunc
	GetPosition(var_35_cvector); // 0x670 Func
	GetDirection(var_36_cvector); // 0x672 Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x674 Sub2
	var_77_float = GetByIndex(var_37_cvector, 0); // 0x675 PushE
	var_78_float = GetByIndex(var_36_cvector, 0); // 0x676 PushE
	var_79_float = var_77_float * var_78_float; // 0x677 Mult
	var_80_float = GetByIndex(var_37_cvector, 2); // 0x678 PushE
	var_81_float = GetByIndex(var_36_cvector, 2); // 0x679 PushE
	var_82_float = var_80_float * var_81_float; // 0x67a Mult
	var_83_int = var_79_float + var_82_float; // 0x67b Add
	var_84_int = 0; // 0x67c PushI
	var_85_bool = var_83_int >= var_84_int; // 0x67d GE
	if(var_85_bool == 0) goto Label_1665; // 0x67e JumpB
	var_38_string = "fdie"; // 0x67f MovS
	goto Label_1666; // 0x680 Jump
	
Label_1666:
	RemoveRTEnvelope(); // 0x682 Func
	SetDeathState(); // 0x684 Func
	Stop(); // 0x686 Func
	StopAsync(); // 0x688 Func
	var_39_object = var_23_object; // 0x68a Mov
	var_86_string = "GetScriptProperty"; // 0x68b PushS
	var_87_int = 2; // 0x68c PushI
	var_88_bool = IsFuncExist(var_23_object, var_86_string, var_87_int); // 0x68d FuncExist
	if(var_88_bool == 0) goto Label_1690; // 0x68e JumpB
	var_89_string = "Owner"; // 0x68f PushS
	HasScriptProperty(var_40_bool, var_89_string); // 0x690 ObjFunc
	var_90_bool = var_40_bool; // 0x692 Push
	if(var_90_bool == 0) goto Label_1690; // 0x693 JumpB
	var_91_string = "Owner"; // 0x694 PushS
	GetScriptProperty(var_39_object, var_91_string); // 0x695 ObjFunc
	var_92_bool = var_39_object == 0; // 0x697 NullEq
	if(var_92_bool == 0) goto Label_1690; // 0x698 JumpB
	var_39_object = var_23_object; // 0x699 Mov
	
Label_1690:
	var_93_string = "@GetEyesHeight"; // 0x69a PushS
	var_94_int = 1; // 0x69b PushI
	var_95_bool = IsFuncExist(var_39_object, var_93_string, var_94_int); // 0x69c FuncExist
	if(var_95_bool == 0) goto Label_1705; // 0x69d JumpB
	GetEyesHeight(var_42_float); // 0x69e ObjFunc
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x6a0 MovV
	var_96_float = GetByIndex(var_43_cvector, 1); // 0x6a1 PushE
	var_96_float = var_42_float; // 0x6a2 Mov
	SetByIndex(var_43_cvector, 1) = var_96_float; // 0x6a3 PopE
	var_97_string = "head"; // 0x6a4 PushS
	LookAsync(var_23_object, var_97_string, var_43_cvector); // 0x6a5 Func
	var_41_bool = 1; // 0x6a7 MovB
	goto Label_1706; // 0x6a8 Jump
	
Label_1706:
	var_98_string = ""; // 0x6aa PushV
	var_98_string = var_38_string; // 0x6ab Mov
	func_2275(var_98_string); // 0x6ac NEW_2
	var_99_string = "all"; // 0x6ae PushS
	PlayAnimation(var_99_string, var_38_string); // 0x6af Func
	WaitForAnimEnd(); // 0x6b1 Func
	var_100_bool = var_41_bool; // 0x6b3 Push
	if(var_100_bool == 0) goto Label_1722; // 0x6b4 JumpB
	StopAsync(); // 0x6b5 Func
	var_101_string = "head"; // 0x6b7 PushS
	UnlookAsync(var_101_string); // 0x6b8 Func
	
Label_1722:
	var_102_string = "all"; // 0x6ba PushS
	LockAnimationEnd(var_102_string, var_38_string); // 0x6bb Func
	RemoveEnvelope(); // 0x6bd Func
	var_39_object = 0; // 0x6bf SetNull
	
Label_1705:
	var_41_bool = 0; // 0x6a9 MovB
	
Label_1665:
	var_38_string = "bdie"; // 0x681 MovS
}


func_2663(var_18_object)
{
	var_19_int = 0; // 0xa68 PushV
	func_2657(var_19_int); // 0xa69 NEW_2
	var_23_int = 1; // 0xa6b PushI
	var_24_bool = var_19_int == var_23_int; // 0xa6c Eq
	if(var_24_bool == 0) goto Label_2673; // 0xa6d JumpB
	WorkWithCorpse(var_18_object); // 0xa6e Func
	goto Label_2675; // 0xa70 Jump
	
Label_2675:
	return 0; // 0xa73 Return
	
Label_2673:
	Barter(var_18_object); // 0xa71 Func
}


func_2410(var_17_bool, var_18_string, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x96a PushV
	FindActor(var_21_object, var_18_string); // 0x96b Func
	var_22_bool = var_21_object == 0; // 0x96d NullEq
	if(var_22_bool == 0) goto Label_2417; // 0x96e JumpB
	var_17_bool = 0; // 0x96f MovB
	return 2; // 0x970 Return
	
Label_2417:
	Trigger(var_21_object, var_19_string); // 0x971 Func
	var_17_bool = 1; // 0x973 MovB
	return 2; // 0x974 Return
}


func_1138(var_0_object, var_287_bool, var_288_float)
{
	var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; // 0x472 PushV
	
Label_1139:
	IsAnimationPlaying(var_294_bool); // 0x473 Func
	var_299_bool = var_294_bool == 0; // 0x475 Not
	if(var_299_bool == 0) goto Label_1144; // 0x476 JumpB
	goto Label_1176; // 0x477 Jump
	
Label_1176:
	func_1313(var_298_float); // 0x499 NEW_2
	var_287_bool = 0; // 0x49b MovB
	return 10; // 0x49c Return
	
Label_1144:
	var_300_bool = 0; // 0x478 PushV
	func_1209(var_300_bool); // 0x479 NEW_2
	if(var_300_bool == 0) goto Label_1150; // 0x47b JumpB
	var_287_bool = 1; // 0x47c MovB
	return 10; // 0x47d Return
	
Label_1150:
	var_343_bool = 0; var_344_object = Obj(); // 0x47e PushV
	var_344_object = var_0_object; // 0x47f MovT
	func_1980(var_343_bool, var_344_object); // 0x480 NEW_2
	var_345_bool = var_343_bool == 0; // 0x482 Not
	if(var_345_bool == 0) goto Label_1158; // 0x483 JumpB
	var_287_bool = 0; // 0x484 MovB
	return 10; // 0x485 Return
	
Label_1158:
	GetPFPosition(var_295_cvector); // 0x486 TObjFunc
	GetPFPosition(var_296_cvector); // 0x488 Func
	var_297_cvector = var_295_cvector - var_296_cvector; // 0x48a Sub2
	var_298_float = var_297_cvector | var_297_cvector; // 0x48b Or2
	var_346_float = var_288_float * var_288_float; // 0x48c Mult
	var_347_bool = var_298_float < var_346_float; // 0x48d LT
	if(var_347_bool == 0) goto Label_1173; // 0x48e JumpB
	var_348_bool = 0; var_349_float = 0; // 0x48f PushV
	var_349_float = var_288_float; // 0x490 Mov
	func_974(var_298_float, var_348_bool, var_349_float); // 0x491 NEW_2
	var_287_bool = 1; // 0x493 MovB
	return 10; // 0x494 Return
	
Label_1173:
	sync(); // 0x495 Func
	goto Label_1139; // 0x497 Jump
}


func_2676(var_111_string)
{
	var_112_object = Obj(); var_113_int = 0; var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; var_117_bool = 0; // 0xa74 PushV
	CreateInvItem(var_115_object); // 0xa75 Func
	SetItemName(var_111_string); // 0xa77 ObjFunc
	var_118_string = "Organ"; // 0xa79 PushS
	var_119_int = 1; // 0xa7a PushI
	SetProperty(var_118_string, var_119_int); // 0xa7b ObjFunc
	GetItemID(var_116_int); // 0xa7d ObjFunc
	var_120_int = 0; // 0xa7f PushI
	var_121_int = 1; // 0xa80 PushI
	AddItem(var_117_bool, var_115_object, var_120_int, var_121_int); // 0xa81 Func
	return 6; // 0xa83 Return
}


func_1396(var_2_object)
{
	var_15_int = 1; // 0x574 PushI
	KillTimer(var_15_int); // 0x575 Func
	var_16_object = var_2_object; // 0x577 PushT
	if(var_16_object == 0) goto Label_1405; // 0x578 JumpB
	var_2_object = 0; // 0x579 TMovB
	var_17_string = "head"; // 0x57a PushS
	UnlookAsync(var_17_string); // 0x57b Func
	
Label_1405:
	func_1562(var_14_object); // 0x57e NEW_2
	return 0; // 0x580 Return
}


func_2422(var_123_object)
{
	var_124_bool = 0; var_125_bool = 0; // 0x976 PushV
	IsPlayerActor(var_123_object, var_125_bool); // 0x977 Func
	var_126_bool = var_125_bool; // 0x979 Push
	if(var_126_bool == 0) goto Label_2430; // 0x97a JumpB
	var_127_string = "attack"; // 0x97b PushS
	PlayGlobalMusic(var_127_string); // 0x97c Func
	
Label_2430:
	return 2; // 0x97e Return
}


func_2431()
{
	var_360_object = Obj(); var_361_object = Obj(); // 0x97f PushV
	GetScene(var_361_object); // 0x980 Func
	var_362_string = "battle"; // 0x982 PushS
	var_363_object = Obj(); // 0x983 PushV
	func_2316(var_363_object); // 0x984 NEW_2
	BroadcastMessage(var_362_string, var_363_object, var_361_object); // 0x986 Func
	return 2; // 0x988 Return
}


func_900(var_1_object, var_2_object, var_4_bool)
{
	var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; var_57_cvector = CVector(0,0,0); // 0x384 PushV
	var_1_object = 0; // 0x385 TMovI
	
Label_902:
	var_58_string = "all"; // 0x386 PushS
	var_59_string = "attack_begin"; // 0x387 PushS
	var_60_int = 1; // 0x388 PushI
	var_61_int = var_1_object + var_60_int; // 0x389 Add
	var_62_int = var_59_string + var_61_int; // 0x38a Add
	HasAnimation(var_55_bool, var_58_string, var_62_int); // 0x38b Func
	var_63_bool = var_55_bool == 0; // 0x38d Not
	if(var_63_bool == 0) goto Label_912; // 0x38e JumpB
	goto Label_915; // 0x38f Jump
	
Label_915:
	var_2_object = 0; // 0x393 TMovI
	
Label_916:
	var_64_string = "attack"; // 0x394 PushS
	var_65_int = 1; // 0x395 PushI
	var_66_int = var_2_object + var_65_int; // 0x396 Add
	var_67_int = var_64_string + var_66_int; // 0x397 Add
	IsExisting3DSound(var_56_bool, var_67_int); // 0x398 Func
	var_68_bool = var_56_bool == 0; // 0x39a Not
	if(var_68_bool == 0) goto Label_925; // 0x39b JumpB
	goto Label_928; // 0x39c Jump
	
Label_928:
	var_69_string = "all"; // 0x3a0 PushS
	var_70_string = "bjump"; // 0x3a1 PushS
	GetAnimationOffset(var_57_cvector, var_69_string, var_70_string); // 0x3a2 Func
	var_71_float = GetByIndex(var_57_cvector, 2); // 0x3a4 PushE
	var_4_bool = -var_71_float; // 0x3a5 Neg2
	return 6; // 0x3a6 Return
	
Label_925:
	var_72_int = 1; // 0x39d PushI
	var_2_object = var_2_object + var_72_int; // 0x39e Add2
	goto Label_916; // 0x39f Jump
	
Label_912:
	var_73_int = 1; // 0x390 PushI
	var_1_object = var_1_object + var_73_int; // 0x391 Add2
	goto Label_902; // 0x392 Jump
}


func_2693()
{
	var_105_int = 0; // 0xa85 PushV
	func_2657(var_105_int); // 0xa86 NEW_2
	var_109_int = 1; // 0xa88 PushI
	var_110_bool = var_105_int != var_109_int; // 0xa89 Neq
	if(var_110_bool == 0) goto Label_2700; // 0xa8a JumpB
	return 0; // 0xa8b Return
	
Label_2700:
	var_111_string = ""; // 0xa8c PushV
	var_111_string = "liver"; // 0xa8d MovS
	func_2676(var_111_string); // 0xa8e NEW_2
	var_122_string = ""; // 0xa90 PushV
	var_122_string = "kidney"; // 0xa91 MovS
	func_2676(var_122_string); // 0xa92 NEW_2
	var_123_string = ""; // 0xa94 PushV
	var_123_string = "heart"; // 0xa95 MovS
	func_2676(var_123_string); // 0xa96 NEW_2
	var_124_string = ""; // 0xa98 PushV
	var_124_string = "blood"; // 0xa99 MovS
	func_2676(var_124_string); // 0xa9a NEW_2
	return 0; // 0xa9c Return
}


func_650()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x28a PushV
	var_25_string = "player"; // 0x28b PushS
	FindActor(var_24_object, var_25_string); // 0x28c Func
	var_26_bool = var_24_object == 0; // 0x28e Not
	if(var_26_bool == 0) goto Label_657; // 0x28f JumpB
	return 2; // 0x290 Return
	
Label_657:
	var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; // 0x291 PushV
	var_27_object = var_24_object; // 0x292 Mov
	var_28_bool = 1; // 0x293 MovB
	var_29_float = 180.0; // 0x294 MovF
	func_671(var_20_bool, var_21_float, var_22_int, var_23_object, var_24_object, var_27_object, var_28_bool, var_29_float); // 0x295 NEW_2
	return 2; // 0x297 Return
}


func_2442()
{
	var_85_int = 0; var_86_int = 0; // 0x98a PushV
	var_87_string = "rifle_ammo"; // 0x98b PushS
	var_88_int = 30; // 0x98c PushI
	RemoveItemByType(var_86_int, var_87_string, var_88_int); // 0x98d ObjFunc
	return 2; // 0x98f Return
}


func_2448()
{
	var_22_string = "oob9Doberman1"; // 0x991 PushS
	var_23_int = 1; // 0x992 PushI
	SetVariable(var_22_string, var_23_int); // 0x993 Func
	return 0; // 0x995 Return
}


func_1939(var_103_bool)
{
	var_105_bool = 0; var_106_bool = 0; // 0x793 PushV
	IsDead(var_106_bool); // 0x794 ObjFunc
	var_103_bool = var_106_bool; // 0x796 Mov
	return 2; // 0x797 Return
}


func_2454()
{
	var_79_string = "oob9Doberman2"; // 0x997 PushS
	var_80_int = 1; // 0x998 PushI
	SetVariable(var_79_string, var_80_int); // 0x999 Func
	return 0; // 0x99b Return
}


func_1944(var_92_bool, var_93_object)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); // 0x798 PushV
	var_98_bool = var_93_object == 0; // 0x799 NullEq
	if(var_98_bool == 0) goto Label_1949; // 0x79a JumpB
	var_92_bool = 0; // 0x79b MovB
	return 4; // 0x79c Return
	
Label_1949:
	var_99_bool = 0; // 0x79d PushV
	var_99_bool = 0; // 0x79e MovB
	var_100_string = "IsDead"; // 0x79f PushS
	var_101_int = 1; // 0x7a0 PushI
	var_102_bool = IsFuncExist(var_93_object, var_100_string, var_101_int); // 0x7a1 FuncExist
	if(var_102_bool == 0) goto Label_1961; // 0x7a2 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x7a3 PushV
	var_104_object = var_93_object; // 0x7a4 Mov
	func_1939(var_104_object); // 0x7a5 NEW_2
	if(var_103_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_99_bool = 1; // 0x7a8 MovB
	
Label_1961:
	if(var_99_bool == 0) goto Label_1964; // 0x7a9 JumpB
	var_92_bool = 0; // 0x7aa MovB
	return 4; // 0x7ab Return
	
Label_1964:
	GetScene(var_96_object); // 0x7ac Func
	var_107_bool = var_96_object == 0; // 0x7ae NullEq
	if(var_107_bool == 0) goto Label_1970; // 0x7af JumpB
	var_92_bool = 0; // 0x7b0 MovB
	return 4; // 0x7b1 Return
	
Label_1970:
	GetScene(var_97_object); // 0x7b2 ObjFunc
	var_108_bool = var_96_object != var_97_object; // 0x7b4 Neq
	if(var_108_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_92_bool = 0; // 0x7b6 MovB
	return 4; // 0x7b7 Return
	
Label_1976:
	var_92_bool = 1; // 0x7b8 MovB
	return 4; // 0x7b9 Return
}


func_665(var_396_float)
{
	var_396_float = 0.3; // 0x29a MovF
	return 0; // 0x29b Return
}


func_668(var_403_int)
{
	var_403_int = 0; // 0x29d MovI
	return 0; // 0x29e Return
}


func_1181(var_0_object, var_302_bool)
{
	var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; // 0x49d PushV
	var_313_bool = 0; var_314_object = Obj(); // 0x49e PushV
	var_314_object = var_0_object; // 0x49f MovT
	func_1980(var_313_bool, var_314_object); // 0x4a0 NEW_2
	var_315_bool = var_313_bool == 0; // 0x4a2 Not
	if(var_315_bool == 0) goto Label_1190; // 0x4a3 JumpB
	var_302_bool = 0; // 0x4a4 MovB
	return 10; // 0x4a5 Return
	
Label_1190:
	var_316_bool = 0; // 0x4a6 PushV
	func_1270(var_312_float, var_316_bool); // 0x4a7 NEW_2
	if(var_316_bool == 0) goto Label_1207; // 0x4a9 JumpB
	GetPFPosition(var_308_cvector); // 0x4aa TObjFunc
	GetPFPosition(var_309_cvector); // 0x4ac Func
	var_310_cvector = var_308_cvector - var_309_cvector; // 0x4ae Sub2
	var_311_float = var_310_cvector | var_310_cvector; // 0x4af Or2
	GetAttackDistance(var_312_float); // 0x4b0 TObjFunc
	var_317_int = 50; // 0x4b2 PushI
	var_312_float = var_312_float + var_317_int; // 0x4b3 Add2
	var_318_float = var_312_float * var_312_float; // 0x4b4 Mult
	var_302_bool = var_311_float <= var_318_float; // 0x4b5 LE2
	return 10; // 0x4b6 Return
	
Label_1207:
	var_302_bool = 0; // 0x4b7 MovB
	return 10; // 0x4b8 Return
}


func_2460()
{
	func_2573(); // 0x99e NEW_2
	return 0; // 0x9a0 Return
}


func_671(var_0_object, var_3_string, var_5_object, var_27_object, var_28_bool, var_29_float, var_136_bool, var_228_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0; // 0x29f PushV
	func_900(var_49_cvector, var_50_bool, var_51_float); // 0x2a1 NEW_2
	var_5_object = 0; // 0x2a3 TMovI
	var_74_string = "@GetAttackDistance"; // 0x2a4 PushS
	var_75_int = 1; // 0x2a5 PushI
	var_76_bool = IsFuncExist(var_27_object, var_74_string, var_75_int); // 0x2a6 FuncExist
	if(var_76_bool == 0) goto Label_685; // 0x2a7 JumpB
	GetAttackDistance(var_41_float); // 0x2a8 ObjFunc
	var_77_int = 50; // 0x2aa PushI
	var_41_float = var_41_float + var_77_int; // 0x2ab Add2
	goto Label_686; // 0x2ac Jump
	
Label_686:
	var_78_int = 150; // 0x2ae PushI
	var_79_bool = var_41_float >= var_78_int; // 0x2af GE
	if(var_79_bool == 0) goto Label_690; // 0x2b0 JumpB
	var_41_float = 150; // 0x2b1 MovI
	
Label_690:
	var_3_string = 0; // 0x2b2 TMovB
	var_0_object = var_27_object; // 0x2b3 TMov
	IsPlayerActor(var_0_object, var_44_bool); // 0x2b4 Func
	var_80_bool = var_44_bool; // 0x2b6 Push
	if(var_80_bool == 0) goto Label_704; // 0x2b7 JumpB
	var_81_string = "attack"; // 0x2b8 PushS
	PlayGlobalMusic(var_81_string); // 0x2b9 Func
	var_82_object = Obj(); // 0x2bb PushV
	func_2316(var_82_object); // 0x2bc NEW_2
	SendPlayerEnemy(var_27_object, var_82_object); // 0x2be Func
	
Label_704:
	var_85_bool = var_28_bool; // 0x2c0 Push
	if(var_85_bool == 0) goto Label_708; // 0x2c1 JumpB
	var_45_bool = 0; // 0x2c2 MovB
	goto Label_709; // 0x2c3 Jump
	
Label_709:
	var_86_float = 400.0; // 0x2c5 PushF
	var_46_float = var_86_float + var_41_float; // 0x2c6 Add2
	
Label_711:
	var_87_bool = 0; // 0x2c7 PushV
	var_87_bool = 0; // 0x2c8 MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x2c9 PushV
	var_89_object = var_0_object; // 0x2ca MovT
	func_1980(var_88_bool, var_89_object); // 0x2cb NEW_2
	if(var_88_bool == 0) goto Label_721; // 0x2cd JumpB
	var_122_bool = var_3_string == 0; // 0x2ce Not
	if(var_122_bool == 0) goto Label_721; // 0x2cf JumpB
	var_87_bool = 1; // 0x2d0 MovB
	
Label_721:
	if(var_87_bool == 0) goto Label_883; // 0x2d1 JumpB
	func_1313(var_51_float); // 0x2d3 NEW_2
	GetPFPosition(var_42_cvector); // 0x2d5 TObjFunc
	GetPFPosition(var_43_cvector); // 0x2d7 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x2d9 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x2da Or2
	var_128_float = var_46_float * var_46_float; // 0x2db Mult
	var_129_bool = var_48_float >= var_128_float; // 0x2dc GE
	if(var_129_bool == 0) goto Label_749; // 0x2dd JumpB
	var_130_bool = 0; var_131_object = Obj(); var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_bool = 0; // 0x2de PushV
	var_131_object = var_0_object; // 0x2df MovT
	var_132_float = var_41_float; // 0x2e0 Mov
	var_133_float = 10000.0; // 0x2e1 MovF
	var_134_bool = 1; // 0x2e2 MovB
	var_135_bool = 0; // 0x2e3 MovB
	TaskCall(3); // 0x2e4 TaskCall
	func_1333(var_138_bool, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool); // 0x2e5 NEW_2
	TaskReturn(); // 0x2e6 TaskReturn
	var_213_bool = var_136_bool == 0; // 0x2e8 Not
	if(var_213_bool == 0) goto Label_747; // 0x2e9 JumpB
	goto Label_883; // 0x2ea Jump
	
Label_883:
	WaitForAnimEnd(); // 0x373 Func
	var_214_string = var_3_string; // 0x375 PushT
	if(var_214_string == 0) goto Label_888; // 0x376 JumpB
	return 22; // 0x377 Return
	
Label_888:
	var_215_string = "all"; // 0x378 PushS
	var_216_string = "attack_off"; // 0x379 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x37a Func
	WaitForAnimEnd(); // 0x37c Func
	var_217_bool = var_44_bool; // 0x37e Push
	if(var_217_bool == 0) goto Label_899; // 0x37f JumpB
	var_218_float = 2.0; // 0x380 PushF
	Sleep(var_218_float); // 0x381 Func
	
Label_899:
	return 22; // 0x383 Return
	
Label_747:
	var_45_bool = 0; // 0x2eb MovB
	goto Label_882; // 0x2ec Jump
	
Label_882:
	goto Label_711; // 0x372 Jump
	
Label_749:
	var_219_float = var_29_float * var_29_float; // 0x2ed Mult
	var_220_bool = var_48_float >= var_219_float; // 0x2ee GE
	if(var_220_bool == 0) goto Label_874; // 0x2ef JumpB
	GetPFPosition(var_49_cvector); // 0x2f0 TObjFunc
	CanReachByPF(var_50_bool, var_49_cvector); // 0x2f2 Func
	var_221_bool = var_50_bool == 0; // 0x2f4 Not
	if(var_221_bool == 0) goto Label_773; // 0x2f5 JumpB
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_bool = 0; // 0x2f6 PushV
	var_223_object = var_0_object; // 0x2f7 MovT
	var_224_float = var_41_float; // 0x2f8 Mov
	var_225_float = 10000.0; // 0x2f9 MovF
	var_226_bool = 1; // 0x2fa MovB
	var_227_bool = 0; // 0x2fb MovB
	TaskCall(3); // 0x2fc TaskCall
	func_1333(var_230_bool, var_222_bool, var_223_object, var_224_float, var_225_float, var_226_bool, var_227_bool); // 0x2fd NEW_2
	TaskReturn(); // 0x2fe TaskReturn
	var_231_bool = var_228_bool == 0; // 0x300 Not
	if(var_231_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_883; // 0x302 Jump
	
Label_771:
	var_45_bool = 0; // 0x303 MovB
	goto Label_711; // 0x304 Jump
	
Label_773:
	var_232_bool = var_45_bool == 0; // 0x305 Not
	if(var_232_bool == 0) goto Label_798; // 0x306 JumpB
	var_233_object = Obj(); // 0x307 PushV
	var_233_object = var_0_object; // 0x308 MovT
	func_2130(); // 0x309 NEW_2
	var_242_string = "all"; // 0x30b PushS
	var_243_string = "attack_on"; // 0x30c PushS
	PlayAnimation(var_242_string, var_243_string); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	func_1313(var_51_float); // 0x312 NEW_2
	StopAsync(); // 0x314 Func
	var_45_bool = 1; // 0x316 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x317 PushV
	var_245_object = var_0_object; // 0x318 MovT
	func_1980(var_244_bool, var_245_object); // 0x319 NEW_2
	var_246_bool = var_244_bool == 0; // 0x31b Not
	if(var_246_bool == 0) goto Label_798; // 0x31c JumpB
	goto Label_883; // 0x31d Jump
	
Label_798:
	rand(var_51_float); // 0x31e Func
	var_247_bool = 0; // 0x320 PushV
	var_247_bool = 1; // 0x321 MovB
	var_248_float = 0.25; // 0x322 PushF
	var_249_bool = var_51_float < var_248_float; // 0x323 LT
	if(var_249_bool == 0) goto Label_810; // 0x324 JumpB
	var_250_bool = 0; // 0x325 PushV
	func_1270(var_247_bool, var_250_bool); // 0x326 NEW_2
	if(var_250_bool == 0) goto Label_810; // 0x328 JumpB
	var_247_bool = 0; // 0x329 MovB
	
Label_810:
	if(var_247_bool == 0) goto Label_827; // 0x32a JumpB
	Face(var_0_object); // 0x32b Func
	func_1320(); // 0x32e NEW_2
	var_285_string = "all"; // 0x330 PushS
	var_286_string = "attack_stay"; // 0x331 PushS
	PlayAnimation(var_285_string, var_286_string); // 0x332 Func
	var_287_bool = 0; var_288_float = 0; // 0x334 PushV
	var_288_float = var_29_float; // 0x335 Mov
	func_1138(var_51_float, var_287_bool, var_288_float); // 0x336 NEW_2
	StopAsync(); // 0x338 Func
	goto Label_873; // 0x33a Jump
	
Label_873:
	goto Label_882; // 0x369 Jump
	
Label_827:
	Face(var_0_object); // 0x33b Func
	var_502_string = "all"; // 0x33d PushS
	var_503_string = "fjump"; // 0x33e PushS
	PlayAnimation(var_502_string, var_503_string); // 0x33f Func
	WaitForAnimEnd(); // 0x341 Func
	func_1313(var_51_float); // 0x344 NEW_2
	var_504_cvector = CVector(0.0, 0.0, 0.0); // 0x346 PushVec
	SetSpeed(var_504_cvector); // 0x347 Func
	Stop(); // 0x349 Func
	StopAsync(); // 0x34b Func
	var_505_bool = 0; // 0x34d PushV
	func_1270(var_51_float, var_505_bool); // 0x34e NEW_2
	var_506_bool = var_505_bool == 0; // 0x350 Not
	if(var_506_bool == 0) goto Label_873; // 0x351 JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x352 PushV
	var_508_object = var_0_object; // 0x353 MovT
	func_1980(var_507_bool, var_508_object); // 0x354 NEW_2
	var_509_bool = var_507_bool == 0; // 0x356 Not
	if(var_509_bool == 0) goto Label_857; // 0x357 JumpB
	goto Label_883; // 0x358 Jump
	
Label_857:
	GetPFPosition(var_42_cvector); // 0x359 TObjFunc
	GetPFPosition(var_43_cvector); // 0x35b Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x35d Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x35e Or2
	var_510_float = var_29_float * var_29_float; // 0x35f Mult
	var_511_bool = var_48_float < var_510_float; // 0x360 LT
	if(var_511_bool == 0) goto Label_873; // 0x361 JumpB
	var_512_bool = 0; var_513_float = 0; // 0x362 PushV
	var_513_float = var_29_float; // 0x363 Mov
	func_974(var_51_float, var_512_bool, var_513_float); // 0x364 NEW_2
	var_514_bool = var_512_bool == 0; // 0x366 Not
	if(var_514_bool == 0) goto Label_873; // 0x367 JumpB
	goto Label_883; // 0x368 Jump
	
Label_874:
	var_515_bool = 0; var_516_float = 0; // 0x36a PushV
	var_516_float = var_29_float; // 0x36b Mov
	func_974(var_51_float, var_515_bool, var_516_float); // 0x36c NEW_2
	var_517_bool = var_515_bool == 0; // 0x36e Not
	if(var_517_bool == 0) goto Label_881; // 0x36f JumpB
	goto Label_883; // 0x370 Jump
	
Label_881:
	var_45_bool = 1; // 0x371 MovB
	
Label_708:
	var_45_bool = 1; // 0x2c4 MovB
	
Label_685:
	var_41_float = var_29_float; // 0x2ad Mov
}


func_1438(var_0_object, var_1_object, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); // 0x59e PushV
	var_0_object = 0; // 0x59f TMovB
	var_1_object = var_160_object; // 0x5a0 TMov
	var_174_bool = var_164_bool; // 0x5a1 Mov
	
Label_1442:
	var_181_bool = 0; var_182_object = Obj(); // 0x5a2 PushV
	var_182_object = var_160_object; // 0x5a3 Mov
	func_1578(var_181_bool, var_182_object); // 0x5a4 NEW_2
	var_185_bool = var_181_bool == 0; // 0x5a6 Not
	if(var_185_bool == 0) goto Label_1450; // 0x5a7 JumpB
	var_159_bool = 0; // 0x5a8 MovB
	return 16; // 0x5a9 Return
	
Label_1450:
	GetPosition(var_176_cvector); // 0x5aa ObjFunc
	GetPosition(var_177_cvector); // 0x5ac Func
	var_178_cvector = var_176_cvector - var_177_cvector; // 0x5ae Sub2
	var_179_float = var_178_cvector | var_178_cvector; // 0x5af Or2
	var_186_bool = 0; // 0x5b0 PushV
	var_186_bool = 0; // 0x5b1 MovB
	var_187_int = 0; // 0x5b2 PushI
	var_188_bool = var_162_float > var_187_int; // 0x5b3 GT
	if(var_188_bool == 0) goto Label_1465; // 0x5b4 JumpB
	var_189_float = var_162_float * var_162_float; // 0x5b5 Mult
	var_190_bool = var_179_float > var_189_float; // 0x5b6 GT
	if(var_190_bool == 0) goto Label_1465; // 0x5b7 JumpB
	var_186_bool = 1; // 0x5b8 MovB
	
Label_1465:
	if(var_186_bool == 0) goto Label_1470; // 0x5b9 JumpB
	Stop(); // 0x5ba Func
	var_159_bool = 0; // 0x5bc MovB
	return 16; // 0x5bd Return
	
Label_1470:
	var_191_float = var_161_float * var_161_float; // 0x5be Mult
	var_192_bool = var_179_float > var_191_float; // 0x5bf GT
	if(var_192_bool == 0) goto Label_1532; // 0x5c0 JumpB
	GetPFPosition(var_176_cvector); // 0x5c1 ObjFunc
	FindPathTo(var_180_object, var_176_cvector); // 0x5c3 Func
	var_193_bool = var_180_object != 0; // 0x5c5 NullNeq
	if(var_193_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_175_object = var_180_object; // 0x5c7 Mov
	var_180_object = 0; // 0x5c8 SetNull
	
Label_1481:
	var_194_bool = var_175_object != 0; // 0x5c9 NullNeq
	if(var_194_bool == 0) goto Label_1514; // 0x5ca JumpB
	var_195_bool = var_174_bool; // 0x5cb Push
	if(var_195_bool == 0) goto Label_1491; // 0x5cc JumpB
	var_174_bool = 0; // 0x5cd MovB
	RotatePath(var_175_object, var_173_bool); // 0x5ce Func
	var_196_bool = var_173_bool == 0; // 0x5d0 Not
	if(var_196_bool == 0) goto Label_1491; // 0x5d1 JumpB
	goto Label_1538; // 0x5d2 Jump
	
Label_1538:
	var_159_bool = !var_0_object; // 0x602 Not2
	return 16; // 0x603 Return
	
Label_1491:
	var_197_int = 0; // 0x5d3 PushI
	var_198_float = 0.3; // 0x5d4 PushF
	SetTimer(var_197_int, var_198_float); // 0x5d5 Func
	var_199_string = ""; // 0x5d7 PushV
	func_1585(var_199_string); // 0x5d8 NEW_2
	var_200_string = ""; // 0x5da PushV
	func_1587(var_200_string); // 0x5db NEW_2
	FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string); // 0x5dd Func
	var_201_bool = var_173_bool == 0; // 0x5df Not
	if(var_201_bool == 0) goto Label_1512; // 0x5e0 JumpB
	var_202_object = var_0_object; // 0x5e1 PushT
	if(var_202_object == 0) goto Label_1510; // 0x5e2 JumpB
	var_175_object = 0; // 0x5e3 SetNull
	goto Label_1538; // 0x5e4 Jump
	
Label_1510:
	goto Label_1537; // 0x5e6 Jump
	
Label_1537:
	goto Label_1442; // 0x601 Jump
	
Label_1512:
	var_175_object = 0; // 0x5e8 SetNull
	goto Label_1530; // 0x5e9 Jump
	
Label_1530:
	var_180_object = 0; // 0x5fa SetNull
	goto Label_1536; // 0x5fb Jump
	
Label_1536:
	var_175_object = 0; // 0x600 SetNull
	
Label_1514:
	var_203_int = 0; // 0x5ea PushI
	KillTimer(var_203_int); // 0x5eb Func
	var_204_float = 0.5; // 0x5ed PushF
	Sleep(var_204_float, var_173_bool); // 0x5ee Func
	var_205_bool = var_173_bool == 0; // 0x5f0 Not
	if(var_205_bool == 0) goto Label_1526; // 0x5f1 JumpB
	var_206_object = var_0_object; // 0x5f2 PushT
	if(var_206_object == 0) goto Label_1526; // 0x5f3 JumpB
	var_175_object = 0; // 0x5f4 SetNull
	goto Label_1538; // 0x5f5 Jump
	
Label_1526:
	var_207_int = 0; // 0x5f6 PushI
	var_208_float = 0.3; // 0x5f7 PushF
	SetTimer(var_207_int, var_208_float); // 0x5f8 Func
	
Label_1532:
	var_209_int = 0; // 0x5fc PushI
	KillTimer(var_209_int); // 0x5fd Func
	goto Label_1538; // 0x5ff Jump
}


func_2209()
{
	var_187_bool = 0; var_188_bool = 0; // 0x8a1 PushV
	CameraSwitchToNormal(); // 0x8a2 Func
	var_189_bool = 0; // 0x8a4 PushV
	func_2762(var_189_bool); // 0x8a5 NEW_2
	if(var_189_bool == 0) goto Label_2217; // 0x8a7 JumpB
	goto Label_2225; // 0x8a8 Jump
	
Label_2225:
	return 2; // 0x8b1 Return
	
Label_2217:
	var_190_string = "head"; // 0x8a9 PushS
	HasAnimationTrack(var_188_bool, var_190_string); // 0x8aa Func
	var_191_bool = var_188_bool; // 0x8ac Push
	if(var_191_bool == 0) goto Label_2225; // 0x8ad JumpB
	var_192_string = "head"; // 0x8ae PushS
	UnlookAsync(var_192_string); // 0x8af Func
}


func_2465()
{
	var_59_string = "b9q01DankoFree"; // 0x9a2 PushS
	var_60_int = 1; // 0x9a3 PushI
	SetVariable(var_59_string, var_60_int); // 0x9a4 Func
	func_2586(); // 0x9a7 NEW_2
	var_69_bool = 0; var_70_string = ""; var_71_string = ""; // 0x9a9 PushV
	var_70_string = "quest_b9_01"; // 0x9aa MovS
	var_71_string = "danko_free"; // 0x9ab MovS
	func_2410(var_69_bool, var_70_string, var_71_string); // 0x9ac NEW_2
	return 0; // 0x9ae Return
}


func_935(var_0_object, var_385_float, var_386_int)
{
	var_387_object = Obj(); var_388_float = 0; var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_float = 0; // 0x3a7 PushV
	var_393_float = 0.9; // 0x3a8 PushF
	var_394_float = var_385_float * var_393_float; // 0x3a9 Mult
	GetVictim(var_394_float, var_390_object); // 0x3aa Func
	ReportAttack(var_0_object); // 0x3ac Func
	var_395_bool = var_390_object == var_0_object; // 0x3ae Eq
	if(var_395_bool == 0) goto Label_972; // 0x3af JumpB
	var_396_float = 0; var_397_object = Obj(); var_398_int = 0; // 0x3b0 PushV
	var_397_object = var_390_object; // 0x3b1 Mov
	var_398_int = var_386_int; // 0x3b2 Mov
	func_665(var_398_int); // 0x3b3 NEW_2
	var_391_float = var_396_float; // 0x3b4 Mov
	var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_int = 0; // 0x3b6 PushV
	var_400_object = var_390_object; // 0x3b7 Mov
	var_401_float = var_391_float; // 0x3b8 Mov
	var_403_int = 0; var_404_object = Obj(); var_405_int = 0; // 0x3b9 PushV
	var_404_object = var_390_object; // 0x3ba Mov
	var_405_int = var_386_int; // 0x3bb Mov
	func_668(var_405_int); // 0x3bc NEW_2
	var_402_int = var_403_int; // 0x3bd Mov
	func_1866(var_399_float, var_400_object, var_401_float, var_402_int); // 0x3bf NEW_2
	var_392_float = var_399_float; // 0x3c0 Mov
	var_460_int = 0; // 0x3c2 PushV
	func_1318(var_460_int); // 0x3c3 NEW_2
	ReportHit(var_0_object, var_460_int, var_392_float, var_391_float); // 0x3c5 Func
	var_461_object = Obj(); var_462_float = 0; // 0x3c7 PushV
	var_461_object = var_390_object; // 0x3c8 Mov
	var_462_float = var_392_float; // 0x3c9 Mov
	func_1325(); // 0x3ca NEW_2
	
Label_972:
	return 6; // 0x3cc Return
}


func_2479()
{
	var_91_string = "playsound"; // 0x9b0 PushS
	var_92_string = "giveitem"; // 0x9b1 PushS
	TriggerWorld(var_91_string, var_92_string); // 0x9b2 Func
	return 0; // 0x9b4 Return
}


func_2226(var_169_string)
{
	var_170_bool = 0; var_171_float = 0; var_172_float = 0; var_173_bool = 0; var_174_float = 0; var_175_float = 0; // 0x8b2 PushV
	lshHasAnimation(var_173_bool, var_169_string); // 0x8b3 Func
	var_176_bool = var_173_bool; // 0x8b5 Push
	if(var_176_bool == 0) goto Label_2237; // 0x8b6 JumpB
	lshGetAnimTimes(var_169_string, var_174_float, var_175_float); // 0x8b7 Func
	var_177_bool = 0; // 0x8b9 PushB
	lshPlayAnimation(var_174_float, var_175_float, var_177_bool); // 0x8ba Func
	goto Label_2241; // 0x8bc Jump
	
Label_2241:
	return 6; // 0x8c1 Return
	
Label_2237:
	var_178_string = "Can't find lsh animation : "; // 0x8bd PushS
	var_179_int = var_178_string + var_169_string; // 0x8be Add
	Trace(var_179_int); // 0x8bf Func
}


func_2485(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x9b6 PushV
	var_125_string = "b9q01"; // 0x9b7 MovS
	func_2350(var_124_int, var_125_string); // 0x9b8 NEW_2
	var_126_int = 2; // 0x9ba PushI
	var_127_bool = var_124_int == var_126_int; // 0x9bb Eq
	if(var_127_bool == 0) goto Label_2495; // 0x9bc JumpB
	var_122_bool = 1; // 0x9bd MovB
	return 0; // 0x9be Return
	
Label_2495:
	var_122_bool = 0; // 0x9bf MovB
	return 0; // 0x9c0 Return
}


func_1209(var_300_bool)
{
	var_301_bool = 0; // 0x4b9 PushV
	var_301_bool = 0; // 0x4ba MovB
	var_302_bool = 0; // 0x4bb PushV
	func_1181(var_301_bool, var_302_bool); // 0x4bc NEW_2
	if(var_302_bool == 0) goto Label_1220; // 0x4be JumpB
	var_319_bool = 0; // 0x4bf PushV
	func_1225(var_300_bool, var_301_bool, var_319_bool); // 0x4c0 NEW_2
	if(var_319_bool == 0) goto Label_1220; // 0x4c2 JumpB
	var_301_bool = 1; // 0x4c3 MovB
	
Label_1220:
	if(var_301_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_300_bool = 1; // 0x4c5 MovB
	return 0; // 0x4c6 Return
	
Label_1223:
	var_300_bool = 0; // 0x4c7 MovB
	return 0; // 0x4c8 Return
}


func_1980(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_int = 0; // 0x7bc PushV
	var_92_bool = 0; var_93_object = Obj(); // 0x7bd PushV
	var_93_object = var_89_object; // 0x7be Mov
	func_1944(var_92_bool, var_93_object); // 0x7bf NEW_2
	var_109_bool = var_92_bool == 0; // 0x7c1 Not
	if(var_109_bool == 0) goto Label_1989; // 0x7c2 JumpB
	var_88_bool = 0; // 0x7c3 MovB
	return 2; // 0x7c4 Return
	
Label_1989:
	var_110_bool = 0; var_111_object = Obj(); var_112_string = ""; // 0x7c5 PushV
	var_111_object = var_89_object; // 0x7c6 Mov
	var_112_string = "noaccess"; // 0x7c7 MovS
	func_1832(var_110_bool, var_111_object, var_112_string); // 0x7c8 NEW_2
	var_119_bool = var_110_bool == 0; // 0x7ca Not
	if(var_119_bool == 0) goto Label_1998; // 0x7cb JumpB
	var_88_bool = 1; // 0x7cc MovB
	return 2; // 0x7cd Return
	
Label_1998:
	var_120_string = "noaccess"; // 0x7ce PushS
	GetProperty(var_120_string, var_91_int); // 0x7cf ObjFunc
	var_121_int = 0; // 0x7d1 PushI
	var_88_bool = var_91_int == var_121_int; // 0x7d2 Eq2
	return 2; // 0x7d3 Return
}


func_1729(var_45_string)
{
	RemoveRTEnvelope(); // 0x6c2 Func
	SetDeathState(); // 0x6c4 Func
	Stop(); // 0x6c6 Func
	StopAsync(); // 0x6c8 Func
	StopSecondaryAnimation(); // 0x6ca Func
	var_46_string = ""; // 0x6cc PushV
	var_46_string = var_45_string; // 0x6cd Mov
	func_2275(var_46_string); // 0x6ce NEW_2
	var_75_string = "all"; // 0x6d0 PushS
	PlayAnimation(var_75_string, var_45_string); // 0x6d1 Func
	WaitForAnimEnd(); // 0x6d3 Func
	var_76_string = "all"; // 0x6d5 PushS
	LockAnimationEnd(var_76_string, var_45_string); // 0x6d6 Func
	RemoveEnvelope(); // 0x6d8 Func
	return 0; // 0x6da Return
}


func_2754(var_76_int)
{
	var_76_int = 543371; // 0xac2 MovI
	return 0; // 0xac3 Return
}


func_194(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0xc3 PushV
	func_2762(var_96_bool); // 0xc4 NEW_2
	var_97_bool = var_96_bool == 0; // 0xc6 Not
	if(var_97_bool == 0) goto Label_201; // 0xc7 JumpB
	return 0; // 0xc8 Return
	
Label_201:
	var_98_bool = var_95_string == var_2_object; // 0xc9 Eq
	if(var_98_bool == 0) goto Label_204; // 0xca JumpB
	return 0; // 0xcb Return
	
Label_204:
	var_99_string = ""; var_100_bool = 0; // 0xcc PushV
	var_99_string = var_95_string; // 0xcd Mov
	var_101_string = ""; // 0xce PushS
	var_102_bool = var_95_string == var_101_string; // 0xcf Eq
	if(var_102_bool == 0) goto Label_211; // 0xd0 JumpB
	var_100_bool = 0; // 0xd1 MovB
	goto Label_212; // 0xd2 Jump
	
Label_212:
	func_2242(var_99_string, var_100_bool); // 0xd4 NEW_2
	var_2_object = var_95_string; // 0xd6 TMov
	return 0; // 0xd7 Return
	
Label_211:
	var_100_bool = 1; // 0xd3 MovB
}


func_2756(var_75_int)
{
	var_75_int = 543370; // 0xac4 MovI
	return 0; // 0xac5 Return
}


func_2242(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x8c2 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x8c3 Func
	var_109_bool = var_106_bool; // 0x8c5 Push
	if(var_109_bool == 0) goto Label_2252; // 0x8c6 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x8c7 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x8c9 Func
	goto Label_2256; // 0x8cb Jump
	
Label_2256:
	return 6; // 0x8d0 Return
	
Label_2252:
	var_110_string = "Can't find lsh animation : "; // 0x8cc PushS
	var_111_int = var_110_string + var_99_string; // 0x8cd Add
	Trace(var_111_int); // 0x8ce Func
}


func_2758(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0xac6 MovS
	return 0; // 0xac7 Return
}


func_2497(var_137_bool, var_138_object)
{
	var_139_bool = 0; var_140_object = Obj(); // 0x9c2 PushV
	var_140_object = var_138_object; // 0x9c3 Mov
	func_2566(var_140_object); // 0x9c4 NEW_2
	if(var_139_bool == 0) goto Label_2505; // 0x9c6 JumpB
	var_137_bool = 1; // 0x9c7 MovB
	return 0; // 0x9c8 Return
	
Label_2505:
	var_137_bool = 0; // 0x9c9 MovB
	return 0; // 0x9ca Return
}


func_2760(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0xac8 MovS
	return 0; // 0xac9 Return
}


func_1225(var_0_object, var_4_bool, var_319_bool)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); // 0x4c9 PushV
	GetScene(var_325_object); // 0x4ca Func
	var_326_bool = 0; // 0x4cc MovB
	
Label_1229:
	var_330_cvector = CVector(0,0,0); var_331_object = Obj(); // 0x4cd PushV
	var_331_object = var_0_object; // 0x4ce MovT
	func_1820(var_331_object); // 0x4cf NEW_2
	var_336_int = -var_330_cvector; // 0x4d1 Neg
	FindDirLength(var_327_float, var_336_int, var_327_float); // 0x4d2 Func
	var_337_bool = var_327_float < var_4_bool; // 0x4d4 LT
	if(var_337_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1267; // 0x4d6 Jump
	
Label_1267:
	var_319_bool = var_326_bool; // 0x4f3 Mov
	return 10; // 0x4f4 Return
	
Label_1239:
	Face(var_0_object); // 0x4d7 Func
	var_338_string = "all"; // 0x4d9 PushS
	var_339_string = "bjump"; // 0x4da PushS
	PlayAnimation(var_338_string, var_339_string); // 0x4db Func
	GetPFPosition(var_328_cvector); // 0x4dd TObjFunc
	GetPFPosition(var_329_cvector); // 0x4df Func
	WaitForAnimEnd(); // 0x4e1 Func
	func_1313(var_329_cvector); // 0x4e4 NEW_2
	StopAsync(); // 0x4e6 Func
	var_340_cvector = CVector(0.0, 0.0, 0.0); // 0x4e8 PushVec
	SetSpeed(var_340_cvector); // 0x4e9 Func
	var_326_bool = 1; // 0x4eb MovB
	var_341_bool = 0; // 0x4ec PushV
	func_1181(var_329_cvector, var_341_bool); // 0x4ed NEW_2
	var_342_bool = var_341_bool == 0; // 0x4ef Not
	if(var_342_bool == 0) goto Label_1266; // 0x4f0 JumpB
	goto Label_1267; // 0x4f1 Jump
	
Label_1266:
	goto Label_1229; // 0x4f2 Jump
}


func_2762(var_70_bool)
{
	var_70_bool = 0; // 0xaca MovB
	return 0; // 0xacb Return
}


func_2507(var_114_bool)
{
	var_116_int = 0; var_117_string = ""; // 0x9cc PushV
	var_117_string = "oob9Doberman1"; // 0x9cd MovS
	func_2350(var_116_int, var_117_string); // 0x9ce NEW_2
	var_120_int = 0; // 0x9d0 PushI
	var_121_bool = var_116_int == var_120_int; // 0x9d1 Eq
	if(var_121_bool == 0) goto Label_2517; // 0x9d2 JumpB
	var_114_bool = 1; // 0x9d3 MovB
	return 0; // 0x9d4 Return
	
Label_2517:
	var_114_bool = 0; // 0x9d5 MovB
	return 0; // 0x9d6 Return
}


func_2764(var_15_object)
{
	var_16_object = Obj(); // 0xacd PushV
	var_16_object = var_15_object; // 0xace Mov
	TaskCall(4); // 0xacf TaskCall
	func_1589(var_16_object); // 0xad0 NEW_2
	TaskReturn(); // 0xad1 TaskReturn
	return 0; // 0xad3 Return
}


func_974(var_0_object, var_348_bool, var_349_float)
{
	var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = ""; // 0x3ce PushV
	func_1313(var_357_string); // 0x3d0 NEW_2
	irand(var_354_int, var_357_string); // 0x3d2 Func
	var_358_int = 1; // 0x3d4 PushI
	var_354_int = var_354_int + var_358_int; // 0x3d5 Add2
	Face(var_0_object); // 0x3d6 Func
	var_359_bool = 1; // 0x3d8 PushB
	SetAttackState(var_359_bool); // 0x3d9 Func
	func_2431(); // 0x3dc NEW_2
	var_364_string = "all"; // 0x3de PushS
	var_365_string = "attack_begin"; // 0x3df PushS
	var_366_int = var_365_string + var_354_int; // 0x3e0 Add
	PlayAnimation(var_364_string, var_366_int); // 0x3e1 Func
	WaitForAnimEnd(); // 0x3e3 Func
	func_1281(var_356_int, var_357_string); // 0x3e6 NEW_2
	var_382_bool = 0; var_383_object = Obj(); // 0x3e8 PushV
	var_383_object = var_0_object; // 0x3e9 MovT
	func_1980(var_382_bool, var_383_object); // 0x3ea NEW_2
	var_384_bool = var_382_bool == 0; // 0x3ec Not
	if(var_384_bool == 0) goto Label_1010; // 0x3ed JumpB
	StopAsync(); // 0x3ee Func
	var_348_bool = 0; // 0x3f0 MovB
	return 8; // 0x3f1 Return
	
Label_1010:
	var_385_float = 0; var_386_int = 0; // 0x3f2 PushV
	var_385_float = var_349_float; // 0x3f3 Mov
	var_386_int = var_354_int; // 0x3f4 Mov
	func_935(var_357_string, var_385_float, var_386_int); // 0x3f5 NEW_2
	var_463_string = "all"; // 0x3f7 PushS
	var_464_string = "attack_middle"; // 0x3f8 PushS
	var_465_int = var_464_string + var_354_int; // 0x3f9 Add
	HasAnimation(var_355_bool, var_463_string, var_465_int); // 0x3fa Func
	var_466_bool = var_355_bool; // 0x3fc Push
	if(var_466_bool == 0) goto Label_1091; // 0x3fd JumpB
	func_2431(); // 0x3ff NEW_2
	var_467_string = "all"; // 0x401 PushS
	var_468_string = "attack_middle"; // 0x402 PushS
	var_469_int = var_468_string + var_354_int; // 0x403 Add
	PlayAnimation(var_467_string, var_469_int); // 0x404 Func
	WaitForAnimEnd(); // 0x406 Func
	func_1313(var_357_string); // 0x409 NEW_2
	var_470_bool = 0; var_471_object = Obj(); // 0x40b PushV
	var_471_object = var_0_object; // 0x40c MovT
	func_1980(var_470_bool, var_471_object); // 0x40d NEW_2
	var_472_bool = var_470_bool == 0; // 0x40f Not
	if(var_472_bool == 0) goto Label_1045; // 0x410 JumpB
	StopAsync(); // 0x411 Func
	var_348_bool = 0; // 0x413 MovB
	return 8; // 0x414 Return
	
Label_1045:
	var_473_float = 0; var_474_int = 0; // 0x415 PushV
	var_473_float = var_349_float; // 0x416 Mov
	var_474_int = var_354_int; // 0x417 Mov
	func_935(var_357_string, var_473_float, var_474_int); // 0x418 NEW_2
	var_356_int = 1; // 0x41a MovI
	
Label_1051:
	var_475_string = "attack_middle"; // 0x41b PushS
	var_476_int = var_475_string + var_354_int; // 0x41c Add
	var_477_string = "_"; // 0x41d PushS
	var_478_int = var_476_int + var_477_string; // 0x41e Add
	var_357_string = var_478_int + var_356_int; // 0x41f Add2
	var_479_string = "all"; // 0x420 PushS
	HasAnimation(var_355_bool, var_479_string, var_357_string); // 0x421 Func
	var_480_bool = var_355_bool == 0; // 0x423 Not
	if(var_480_bool == 0) goto Label_1062; // 0x424 JumpB
	goto Label_1091; // 0x425 Jump
	
Label_1091:
	var_481_bool = 0; // 0x443 PushB
	SetAttackState(var_481_bool); // 0x444 Func
	var_482_string = "all"; // 0x446 PushS
	var_483_string = "attack_end"; // 0x447 PushS
	var_484_int = var_483_string + var_354_int; // 0x448 Add
	PlayAnimation(var_482_string, var_484_int); // 0x449 Func
	var_485_bool = 0; // 0x44b PushV
	func_1327(var_485_bool); // 0x44c NEW_2
	if(var_485_bool == 0) goto Label_1109; // 0x44e JumpB
	var_486_bool = 0; var_487_float = 0; // 0x44f PushV
	var_487_float = 0.75; // 0x450 MovF
	func_1111(var_486_bool, var_487_float); // 0x451 NEW_2
	StopAsync(); // 0x453 Func
	
Label_1109:
	var_348_bool = 1; // 0x455 MovB
	return 8; // 0x456 Return
	
Label_1062:
	func_2431(); // 0x427 NEW_2
	var_495_string = "all"; // 0x429 PushS
	PlayAnimation(var_495_string, var_357_string); // 0x42a Func
	WaitForAnimEnd(); // 0x42c Func
	func_1313(var_357_string); // 0x42f NEW_2
	var_496_bool = 0; var_497_object = Obj(); // 0x431 PushV
	var_497_object = var_0_object; // 0x432 MovT
	func_1980(var_496_bool, var_497_object); // 0x433 NEW_2
	var_498_bool = var_496_bool == 0; // 0x435 Not
	if(var_498_bool == 0) goto Label_1083; // 0x436 JumpB
	StopAsync(); // 0x437 Func
	var_348_bool = 0; // 0x439 MovB
	return 8; // 0x43a Return
	
Label_1083:
	var_499_float = 0; var_500_int = 0; // 0x43b PushV
	var_499_float = var_349_float; // 0x43c Mov
	var_500_int = var_354_int; // 0x43d Mov
	func_935(var_357_string, var_499_float, var_500_int); // 0x43e NEW_2
	var_501_int = 1; // 0x440 PushI
	var_356_int = var_356_int + var_501_int; // 0x441 Add2
	goto Label_1051; // 0x442 Jump
}


func_2257(var_147_object)
{
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_cvector = CVector(0,0,0); // 0x8d1 PushV
	GetEyesHeight(var_150_float); // 0x8d2 ObjFunc
	var_151_cvector = CVector(0.0, 0.0, 0.0); // 0x8d4 MovV
	var_152_float = GetByIndex(var_151_cvector, 1); // 0x8d5 PushE
	var_152_float = var_150_float; // 0x8d6 Mov
	SetByIndex(var_151_cvector, 1) = var_152_float; // 0x8d7 PopE
	var_153_string = "head"; // 0x8d8 PushS
	LookAsync(var_147_object, var_153_string, var_151_cvector); // 0x8d9 Func
	return 4; // 0x8db Return
}


func_2004(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; // 0x7d4 PushV
	var_46_bool = var_31_object == 0; // 0x7d5 NullEq
	if(var_46_bool == 0) goto Label_2008; // 0x7d6 JumpB
	return 14; // 0x7d7 Return
	
Label_2008:
	IsDead(var_39_bool); // 0x7d8 Func
	var_47_bool = var_39_bool; // 0x7da Push
	if(var_47_bool == 0) goto Label_2013; // 0x7db JumpB
	return 14; // 0x7dc Return
	
Label_2013:
	GetSecondaryAnimationType(var_40_int); // 0x7dd Func
	var_48_int = 0; // 0x7df PushI
	var_49_bool = var_40_int < var_48_int; // 0x7e0 LT
	if(var_49_bool == 0) goto Label_2019; // 0x7e1 JumpB
	return 14; // 0x7e2 Return
	
Label_2019:
	GetPosition(var_41_cvector); // 0x7e3 ObjFunc
	GetPosition(var_42_cvector); // 0x7e5 Func
	GetDirection(var_43_cvector); // 0x7e7 Func
	var_44_cvector = var_42_cvector - var_41_cvector; // 0x7e9 Sub2
	var_50_float = GetByIndex(var_44_cvector, 0); // 0x7ea PushE
	var_51_float = GetByIndex(var_43_cvector, 0); // 0x7eb PushE
	var_52_float = var_50_float * var_51_float; // 0x7ec Mult
	var_53_float = GetByIndex(var_44_cvector, 2); // 0x7ed PushE
	var_54_float = GetByIndex(var_43_cvector, 2); // 0x7ee PushE
	var_55_float = var_53_float * var_54_float; // 0x7ef Mult
	var_56_int = var_52_float + var_55_float; // 0x7f0 Add
	var_57_int = 0; // 0x7f1 PushI
	var_58_bool = var_56_int >= var_57_int; // 0x7f2 GE
	if(var_58_bool == 0) goto Label_2038; // 0x7f3 JumpB
	var_45_string = "fhit"; // 0x7f4 MovS
	goto Label_2039; // 0x7f5 Jump
	
Label_2039:
	var_59_string = "hit_react"; // 0x7f7 PushS
	var_60_string = "1"; // 0x7f8 PushS
	var_61_int = var_45_string + var_60_string; // 0x7f9 Add
	var_62_string = "2"; // 0x7fa PushS
	var_63_int = var_45_string + var_62_string; // 0x7fb Add
	var_64_int = -10; // 0x7fc PushI
	FadeSecondaryAnimation(var_59_string, var_61_int, var_63_int, var_64_int); // 0x7fd Func
	return 14; // 0x7ff Return
	
Label_2038:
	var_45_string = "bhit"; // 0x7f6 MovS
}


func_2519(var_145_bool)
{
	var_147_int = 0; var_148_string = ""; // 0x9d8 PushV
	var_148_string = "oob9Doberman2"; // 0x9d9 MovS
	func_2350(var_147_int, var_148_string); // 0x9da NEW_2
	var_149_int = 0; // 0x9dc PushI
	var_150_bool = var_147_int == var_149_int; // 0x9dd Eq
	if(var_150_bool == 0) goto Label_2529; // 0x9de JumpB
	var_145_bool = 1; // 0x9df MovB
	return 0; // 0x9e0 Return
	
Label_2529:
	var_145_bool = 0; // 0x9e1 MovB
	return 0; // 0x9e2 Return
}


func_2268()
{
	var_17_bool = 0; // 0x8dc PushV
	func_2762(var_17_bool); // 0x8dd NEW_2
	if(var_17_bool == 0) goto Label_2274; // 0x8df JumpB
	lshStopSpeech(); // 0x8e0 Func
	
Label_2274:
	return 0; // 0x8e2 Return
}


func_1761(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x6e2 PushV
	var_18_object = var_16_object; // 0x6e3 Mov
	TaskCall(0); // 0x6e4 TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x6e5 NEW_2
	TaskReturn(); // 0x6e6 TaskReturn
	return 0; // 0x6e8 Return
}


func_2275(var_46_string)
{
	var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x8e3 PushV
	IsExisting3DSound(var_55_bool, var_46_string); // 0x8e4 Func
	var_63_bool = var_55_bool == 0; // 0x8e6 Not
	if(var_63_bool == 0) goto Label_2300; // 0x8e7 JumpB
	var_56_int = 0; // 0x8e8 MovI
	
Label_2281:
	var_64_int = 1; // 0x8e9 PushI
	var_65_int = var_56_int + var_64_int; // 0x8ea Add
	var_66_int = var_46_string + var_65_int; // 0x8eb Add
	IsExisting3DSound(var_57_bool, var_66_int); // 0x8ec Func
	var_67_bool = var_57_bool == 0; // 0x8ee Not
	if(var_67_bool == 0) goto Label_2289; // 0x8ef JumpB
	goto Label_2292; // 0x8f0 Jump
	
Label_2292:
	var_68_bool = var_56_int == 0; // 0x8f4 Not
	if(var_68_bool == 0) goto Label_2295; // 0x8f5 JumpB
	return 16; // 0x8f6 Return
	
Label_2295:
	irand(var_58_int, var_56_int); // 0x8f7 Func
	var_69_int = 1; // 0x8f9 PushI
	var_70_int = var_58_int + var_69_int; // 0x8fa Add
	var_46_string = var_46_string + var_70_int; // 0x8fb Add2
	
Label_2300:
	Is3DSoundLoaded(var_59_bool, var_46_string); // 0x8fc Func
	var_71_bool = var_59_bool; // 0x8fe Push
	if(var_71_bool == 0) goto Label_2315; // 0x8ff JumpB
	GetEyesHeight(var_60_float); // 0x900 Func
	GetDirection(var_61_cvector); // 0x902 Func
	var_72_int = 50; // 0x904 PushI
	var_62_cvector = var_61_cvector * var_72_int; // 0x905 Mult2
	var_73_float = GetByIndex(var_62_cvector, 1); // 0x906 PushE
	var_73_float = var_73_float + var_60_float; // 0x907 Add2
	SetByIndex(var_62_cvector, 1) = var_73_float; // 0x908 PopE
	PlayGlobalSound(var_46_string, var_62_cvector); // 0x909 Func
	
Label_2315:
	return 16; // 0x90b Return
	
Label_2289:
	var_74_int = 1; // 0x8f1 PushI
	var_56_int = var_56_int + var_74_int; // 0x8f2 Add2
	goto Label_2281; // 0x8f3 Jump
}


func_2531(var_188_bool)
{
	var_190_bool = 0; // 0x9e4 PushV
	var_190_bool = 0; // 0x9e5 MovB
	var_191_int = 0; var_192_string = ""; // 0x9e6 PushV
	var_192_string = "b1q03_retreat"; // 0x9e7 MovS
	func_2350(var_191_int, var_192_string); // 0x9e8 NEW_2
	var_193_int = 0; // 0x9ea PushI
	var_194_bool = var_191_int != var_193_int; // 0x9eb Neq
	if(var_194_bool == 0) goto Label_2549; // 0x9ec JumpB
	var_195_int = 0; var_196_string = ""; // 0x9ed PushV
	var_196_string = "b1q03_dead"; // 0x9ee MovS
	func_2350(var_195_int, var_196_string); // 0x9ef NEW_2
	var_197_int = 0; // 0x9f1 PushI
	var_198_bool = var_195_int == var_197_int; // 0x9f2 Eq
	if(var_198_bool == 0) goto Label_2549; // 0x9f3 JumpB
	var_190_bool = 1; // 0x9f4 MovB
	
Label_2549:
	if(var_190_bool == 0) goto Label_2552; // 0x9f5 JumpB
	var_188_bool = 1; // 0x9f6 MovB
	return 0; // 0x9f7 Return
	
Label_2552:
	var_188_bool = 0; // 0x9f8 MovB
	return 0; // 0x9f9 Return
}


func_1270(var_0_object, var_250_bool)
{
	var_251_bool = 0; var_252_bool = 0; // 0x4f6 PushV
	var_253_string = "IsAttacking"; // 0x4f7 PushS
	var_254_int = 1; // 0x4f8 PushI
	var_255_bool = IsFuncExist(var_0_object, var_253_string, var_254_int); // 0x4f9 FuncExist
	if(var_255_bool == 0) goto Label_1279; // 0x4fa JumpB
	IsAttacking(var_252_bool); // 0x4fb TObjFunc
	var_250_bool = var_252_bool; // 0x4fd Mov
	return 2; // 0x4fe Return
	
Label_1279:
	var_250_bool = 0; // 0x4ff MovB
	return 2; // 0x500 Return
}


func_1783(var_15_bool)
{
	var_15_bool = 1; // 0x6f7 MovB
	return 0; // 0x6f8 Return
}


func_2554(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x9fb PushV
	var_157_string = "b9q01DankoFree"; // 0x9fc MovS
	func_2350(var_156_int, var_157_string); // 0x9fd NEW_2
	var_158_int = 0; // 0x9ff PushI
	var_159_bool = var_156_int != var_158_int; // 0xa00 Neq
	if(var_159_bool == 0) goto Label_2564; // 0xa01 JumpB
	var_154_bool = 1; // 0xa02 MovB
	return 0; // 0xa03 Return
	
Label_2564:
	var_154_bool = 0; // 0xa04 MovB
	return 0; // 0xa05 Return
}


