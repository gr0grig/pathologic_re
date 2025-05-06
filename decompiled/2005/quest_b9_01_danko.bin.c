task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe8 PushI
	if(var_7_int == 0) goto Label_662; // 0xe9 JumpB
	func_1003(); // 0xeb NEW_2
	var_9_int = 22745; // 0xed PushI
	var_10_bool = var_6_int == var_9_int; // 0xee Eq
	if(var_10_bool == 0) goto Label_255; // 0xef JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xf0 PushV
	var_11_object = var_1_object; // 0xf1 MovT
	var_12_object = var_0_object; // 0xf2 MovT
	func_1052(); // 0xf3 NEW_2
	var_38_object = Obj(); var_39_object = Obj(); // 0xf5 PushV
	var_38_object = var_1_object; // 0xf6 MovT
	var_39_object = var_0_object; // 0xf7 MovT
	func_1073(); // 0xf8 NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0xfa PushV
	var_50_object = var_1_object; // 0xfb MovT
	var_51_object = var_0_object; // 0xfc MovT
	func_1090(); // 0xfd NEW_2
	
Label_255:
	var_82_int = 23541; // 0xff PushI
	var_83_bool = var_6_int == var_82_int; // 0x100 Eq
	if(var_83_bool == 0) goto Label_273; // 0x101 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x102 PushV
	var_84_object = var_1_object; // 0x103 MovT
	var_85_object = var_0_object; // 0x104 MovT
	func_1052(); // 0x105 NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x107 PushV
	var_86_object = var_1_object; // 0x108 MovT
	var_87_object = var_0_object; // 0x109 MovT
	func_1073(); // 0x10a NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x10c PushV
	var_88_object = var_1_object; // 0x10d MovT
	var_89_object = var_0_object; // 0x10e MovT
	func_1090(); // 0x10f NEW_2
	
Label_273:
	var_90_int = 22739; // 0x111 PushI
	var_91_bool = var_6_int == var_90_int; // 0x112 Eq
	if(var_91_bool == 0) goto Label_281; // 0x113 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x114 PushV
	var_92_object = var_1_object; // 0x115 MovT
	var_93_object = var_0_object; // 0x116 MovT
	func_1046(); // 0x117 NEW_2
	
Label_281:
	var_96_int = 22741; // 0x119 PushI
	var_97_bool = var_6_int == var_96_int; // 0x11a Eq
	if(var_97_bool == 0) goto Label_289; // 0x11b JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x11c PushV
	var_98_object = var_1_object; // 0x11d MovT
	var_99_object = var_0_object; // 0x11e MovT
	func_1061(); // 0x11f NEW_2
	
Label_289:
	var_102_int = 23549; // 0x121 PushI
	var_103_bool = var_6_int == var_102_int; // 0x122 Eq
	if(var_103_bool == 0) goto Label_297; // 0x123 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x124 PushV
	var_104_object = var_1_object; // 0x125 MovT
	var_105_object = var_0_object; // 0x126 MovT
	func_1061(); // 0x127 NEW_2
	
Label_297:
	var_106_int = 23546; // 0x129 PushI
	var_107_bool = var_6_int == var_106_int; // 0x12a Eq
	if(var_107_bool == 0) goto Label_305; // 0x12b JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x12c PushV
	var_108_object = var_1_object; // 0x12d MovT
	var_109_object = var_0_object; // 0x12e MovT
	func_1067(); // 0x12f NEW_2
	
Label_305:
	var_112_int = 22742; // 0x131 PushI
	var_113_bool = var_5_int == var_112_int; // 0x132 Eq
	if(var_113_bool == 0) goto Label_398; // 0x133 JumpB
	var_114_bool = 0; // 0x134 PushV
	var_114_bool = 0; // 0x135 MovB
	var_115_bool = 0; var_116_object = Obj(); // 0x136 PushV
	var_116_object = var_1_object; // 0x137 MovT
	func_1106(var_116_object); // 0x138 NEW_2
	if(var_115_bool == 0) goto Label_321; // 0x13a JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x13b PushV
	var_122_object = var_1_object; // 0x13c MovT
	func_1118(var_122_object); // 0x13d NEW_2
	if(var_121_bool == 0) goto Label_321; // 0x13f JumpB
	var_114_bool = 1; // 0x140 MovB
	
Label_321:
	if(var_114_bool == 0) goto Label_342; // 0x141 JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x142 PushV
	var_127_object = var_1_object; // 0x143 MovT
	var_128_object = var_0_object; // 0x144 MovT
	func_1040(); // 0x145 NEW_2
	var_131_string = ""; // 0x147 PushV
	var_131_string = "Menace"; // 0x148 MovS
	func_209(var_6_int, var_131_string); // 0x149 NEW_2
	var_148_int = 521581; // 0x14b PushI
	SetMessage(var_148_int); // 0x14c TObjFunc
	ClearReplies(); // 0x14e TObjFunc
	var_149_int = 531554; // 0x150 PushI
	var_150_int = 32918; // 0x151 PushI
	var_151_int = 32917; // 0x152 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_152_bool = 0; var_153_object = Obj(); // 0x156 PushV
	var_153_object = var_1_object; // 0x157 MovT
	func_1106(var_153_object); // 0x158 NEW_2
	var_154_bool = var_152_bool == 0; // 0x15a Not
	if(var_154_bool == 0) goto Label_383; // 0x15b JumpB
	var_155_string = ""; // 0x15c PushV
	var_155_string = "Neutral"; // 0x15d MovS
	func_209(var_6_int, var_155_string); // 0x15e NEW_2
	var_156_int = 521577; // 0x160 PushI
	SetMessage(var_156_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_157_bool = 0; var_158_object = Obj(); // 0x165 PushV
	var_158_object = var_1_object; // 0x166 MovT
	func_1130(var_158_object); // 0x167 NEW_2
	if(var_157_bool == 0) goto Label_367; // 0x169 JumpB
	var_163_int = 521578; // 0x16a PushI
	var_164_int = 22740; // 0x16b PushI
	var_165_int = 22739; // 0x16c PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x16d TObjFunc
	
Label_367:
	var_166_bool = 0; var_167_object = Obj(); // 0x16f PushV
	var_167_object = var_1_object; // 0x170 MovT
	func_1142(var_167_object); // 0x171 NEW_2
	if(var_166_bool == 0) goto Label_377; // 0x173 JumpB
	var_172_int = 522381; // 0x174 PushI
	var_173_int = 23547; // 0x175 PushI
	var_174_int = 23546; // 0x176 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x177 TObjFunc
	
Label_377:
	var_175_int = 521586; // 0x179 PushI
	var_176_int = -1; // 0x17a PushI
	var_177_int = 22747; // 0x17b PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x17c TObjFunc
	return 0; // 0x17e Return
	
Label_383:
	var_178_string = ""; // 0x17f PushV
	var_178_string = "Neutral"; // 0x180 MovS
	func_209(var_6_int, var_178_string); // 0x181 NEW_2
	var_179_int = 521601; // 0x183 PushI
	SetMessage(var_179_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_180_int = 521602; // 0x188 PushI
	var_181_int = -1; // 0x189 PushI
	var_182_int = 22767; // 0x18a PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_183_int = 23551; // 0x18e PushI
	var_184_bool = var_5_int == var_183_int; // 0x18f Eq
	if(var_184_bool == 0) goto Label_401; // 0x190 JumpB
	
Label_401:
	var_185_int = 23553; // 0x191 PushI
	var_186_bool = var_5_int == var_185_int; // 0x192 Eq
	if(var_186_bool == 0) goto Label_419; // 0x193 JumpB
	var_187_string = ""; // 0x194 PushV
	var_187_string = "Sorrow"; // 0x195 MovS
	func_209(var_6_int, var_187_string); // 0x196 NEW_2
	var_188_int = 522388; // 0x198 PushI
	SetMessage(var_188_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_189_int = 522389; // 0x19d PushI
	var_190_int = -1; // 0x19e PushI
	var_191_int = 23554; // 0x19f PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_192_int = 23547; // 0x1a3 PushI
	var_193_bool = var_5_int == var_192_int; // 0x1a4 Eq
	if(var_193_bool == 0) goto Label_437; // 0x1a5 JumpB
	var_194_string = ""; // 0x1a6 PushV
	var_194_string = "Neutral"; // 0x1a7 MovS
	func_209(var_6_int, var_194_string); // 0x1a8 NEW_2
	var_195_int = 522382; // 0x1aa PushI
	SetMessage(var_195_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_196_int = 522383; // 0x1af PushI
	var_197_int = -1; // 0x1b0 PushI
	var_198_int = 23548; // 0x1b1 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_199_int = 22740; // 0x1b5 PushI
	var_200_bool = var_5_int == var_199_int; // 0x1b6 Eq
	if(var_200_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_201_string = ""; // 0x1b8 PushV
	var_201_string = "Sorrow"; // 0x1b9 MovS
	func_209(var_6_int, var_201_string); // 0x1ba NEW_2
	var_202_int = 521579; // 0x1bc PushI
	SetMessage(var_202_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_203_int = 522377; // 0x1c1 PushI
	var_204_int = 23543; // 0x1c2 PushI
	var_205_int = 23542; // 0x1c3 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_206_int = 23543; // 0x1c7 PushI
	var_207_bool = var_5_int == var_206_int; // 0x1c8 Eq
	if(var_207_bool == 0) goto Label_478; // 0x1c9 JumpB
	var_208_string = ""; // 0x1ca PushV
	var_208_string = "Sorrow"; // 0x1cb MovS
	func_209(var_6_int, var_208_string); // 0x1cc NEW_2
	var_209_int = 522378; // 0x1ce PushI
	SetMessage(var_209_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_210_int = 521580; // 0x1d3 PushI
	var_211_int = -1; // 0x1d4 PushI
	var_212_int = 22741; // 0x1d5 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1d6 TObjFunc
	var_213_int = 522379; // 0x1d8 PushI
	var_214_int = 23545; // 0x1d9 PushI
	var_215_int = 23544; // 0x1da PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_216_int = 23545; // 0x1de PushI
	var_217_bool = var_5_int == var_216_int; // 0x1df Eq
	if(var_217_bool == 0) goto Label_496; // 0x1e0 JumpB
	var_218_string = ""; // 0x1e1 PushV
	var_218_string = "Sorrow"; // 0x1e2 MovS
	func_209(var_6_int, var_218_string); // 0x1e3 NEW_2
	var_219_int = 522380; // 0x1e5 PushI
	SetMessage(var_219_int); // 0x1e6 TObjFunc
	ClearReplies(); // 0x1e8 TObjFunc
	var_220_int = 522384; // 0x1ea PushI
	var_221_int = -1; // 0x1eb PushI
	var_222_int = 23549; // 0x1ec PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_223_int = 32918; // 0x1f0 PushI
	var_224_bool = var_5_int == var_223_int; // 0x1f1 Eq
	if(var_224_bool == 0) goto Label_514; // 0x1f2 JumpB
	var_225_string = ""; // 0x1f3 PushV
	var_225_string = "Neutral"; // 0x1f4 MovS
	func_209(var_6_int, var_225_string); // 0x1f5 NEW_2
	var_226_int = 531555; // 0x1f7 PushI
	SetMessage(var_226_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_227_int = 521582; // 0x1fc PushI
	var_228_int = 23526; // 0x1fd PushI
	var_229_int = 22743; // 0x1fe PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1ff TObjFunc
	return 0; // 0x201 Return
	
Label_514:
	var_230_int = 23526; // 0x202 PushI
	var_231_bool = var_5_int == var_230_int; // 0x203 Eq
	if(var_231_bool == 0) goto Label_537; // 0x204 JumpB
	var_232_string = ""; // 0x205 PushV
	var_232_string = "Untrust"; // 0x206 MovS
	func_209(var_6_int, var_232_string); // 0x207 NEW_2
	var_233_int = 522363; // 0x209 PushI
	SetMessage(var_233_int); // 0x20a TObjFunc
	ClearReplies(); // 0x20c TObjFunc
	var_234_int = 522364; // 0x20e PushI
	var_235_int = 23528; // 0x20f PushI
	var_236_int = 23527; // 0x210 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x211 TObjFunc
	var_237_int = 522369; // 0x213 PushI
	var_238_int = 23533; // 0x214 PushI
	var_239_int = 23532; // 0x215 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_240_int = 23533; // 0x219 PushI
	var_241_bool = var_5_int == var_240_int; // 0x21a Eq
	if(var_241_bool == 0) goto Label_555; // 0x21b JumpB
	var_242_string = ""; // 0x21c PushV
	var_242_string = "Neutral"; // 0x21d MovS
	func_209(var_6_int, var_242_string); // 0x21e NEW_2
	var_243_int = 522370; // 0x220 PushI
	SetMessage(var_243_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_244_int = 522371; // 0x225 PushI
	var_245_int = 22744; // 0x226 PushI
	var_246_int = 23534; // 0x227 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_247_int = 23528; // 0x22b PushI
	var_248_bool = var_5_int == var_247_int; // 0x22c Eq
	if(var_248_bool == 0) goto Label_573; // 0x22d JumpB
	var_249_string = ""; // 0x22e PushV
	var_249_string = "Untrust"; // 0x22f MovS
	func_209(var_6_int, var_249_string); // 0x230 NEW_2
	var_250_int = 522365; // 0x232 PushI
	SetMessage(var_250_int); // 0x233 TObjFunc
	ClearReplies(); // 0x235 TObjFunc
	var_251_int = 522366; // 0x237 PushI
	var_252_int = 23530; // 0x238 PushI
	var_253_int = 23529; // 0x239 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x23a TObjFunc
	return 0; // 0x23c Return
	
Label_573:
	var_254_int = 23530; // 0x23d PushI
	var_255_bool = var_5_int == var_254_int; // 0x23e Eq
	if(var_255_bool == 0) goto Label_591; // 0x23f JumpB
	var_256_string = ""; // 0x240 PushV
	var_256_string = "Untrust"; // 0x241 MovS
	func_209(var_6_int, var_256_string); // 0x242 NEW_2
	var_257_int = 522367; // 0x244 PushI
	SetMessage(var_257_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_258_int = 522368; // 0x249 PushI
	var_259_int = 22744; // 0x24a PushI
	var_260_int = 23531; // 0x24b PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x24c TObjFunc
	return 0; // 0x24e Return
	
Label_591:
	var_261_int = 22744; // 0x24f PushI
	var_262_bool = var_5_int == var_261_int; // 0x250 Eq
	if(var_262_bool == 0) goto Label_609; // 0x251 JumpB
	var_263_string = ""; // 0x252 PushV
	var_263_string = "Untrust"; // 0x253 MovS
	func_209(var_6_int, var_263_string); // 0x254 NEW_2
	var_264_int = 521583; // 0x256 PushI
	SetMessage(var_264_int); // 0x257 TObjFunc
	ClearReplies(); // 0x259 TObjFunc
	var_265_int = 522372; // 0x25b PushI
	var_266_int = 23538; // 0x25c PushI
	var_267_int = 23537; // 0x25d PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x25e TObjFunc
	return 0; // 0x260 Return
	
Label_609:
	var_268_int = 23538; // 0x261 PushI
	var_269_bool = var_5_int == var_268_int; // 0x262 Eq
	if(var_269_bool == 0) goto Label_627; // 0x263 JumpB
	var_270_string = ""; // 0x264 PushV
	var_270_string = "Untrust"; // 0x265 MovS
	func_209(var_6_int, var_270_string); // 0x266 NEW_2
	var_271_int = 522373; // 0x268 PushI
	SetMessage(var_271_int); // 0x269 TObjFunc
	ClearReplies(); // 0x26b TObjFunc
	var_272_int = 522374; // 0x26d PushI
	var_273_int = 23540; // 0x26e PushI
	var_274_int = 23539; // 0x26f PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x270 TObjFunc
	return 0; // 0x272 Return
	
Label_627:
	var_275_int = 23540; // 0x273 PushI
	var_276_bool = var_5_int == var_275_int; // 0x274 Eq
	if(var_276_bool == 0) goto Label_650; // 0x275 JumpB
	var_277_string = ""; // 0x276 PushV
	var_277_string = "Neutral"; // 0x277 MovS
	func_209(var_6_int, var_277_string); // 0x278 NEW_2
	var_278_int = 522375; // 0x27a PushI
	SetMessage(var_278_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_279_int = 521584; // 0x27f PushI
	var_280_int = -1; // 0x280 PushI
	var_281_int = 22745; // 0x281 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x282 TObjFunc
	var_282_int = 522376; // 0x284 PushI
	var_283_int = -1; // 0x285 PushI
	var_284_int = 23541; // 0x286 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x287 TObjFunc
	return 0; // 0x289 Return
	
Label_650:
	var_3_string = 1; // 0x28a TMovB
	var_285_bool = 0; // 0x28b PushV
	func_1283(var_285_bool); // 0x28c NEW_2
	if(var_285_bool == 0) goto Label_658; // 0x28e JumpB
	lshStopAnimation(); // 0x28f Func
	goto Label_660; // 0x291 Jump
	
Label_660:
	return 0; // 0x294 Return
	
Label_658:
	StopAnimation(); // 0x292 Func
	
Label_662:
	return 0; // 0x296 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold(); // 0x2b0 Func
	return 0; // 0x2b2 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x2b3 Func
	return 0; // 0x2b5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0; // 0x2b6 PushV
	IsOverrideActive(var_7_bool); // 0x2b7 Func
	var_8_bool = var_7_bool == 0; // 0x2b9 Not
	if(var_8_bool == 0) goto Label_709; // 0x2ba JumpB
	EventDisable(0); // 0x2bb EventDisable
	var_9_bool = 0; var_10_object = Obj(); // 0x2bc PushV
	var_10_object = var_5_object; // 0x2bd Mov
	func_720(var_10_object); // 0x2be NEW_2
	EventEnable(0); // 0x2c0 EventEnable
	var_23_object = Obj(); // 0x2c1 PushV
	var_23_object = var_5_object; // 0x2c2 Mov
	func_663(var_23_object); // 0x2c3 NEW_2
	
Label_709:
	return 2; // 0x2c5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0; // 0x29f PushV
	func_729(var_5_bool); // 0x2a0 NEW_2
	var_8_bool = var_5_bool == 0; // 0x2a2 Not
	if(var_8_bool == 0) goto Label_678; // 0x2a3 JumpB
	Hold(); // 0x2a4 Func
	
Label_678:
	var_9_string = ""; // 0x2a6 PushV
	var_9_string = "Neutral"; // 0x2a7 MovS
	func_957(var_9_string); // 0x2a8 NEW_2
	lshWaitForAnimEnd(); // 0x2aa Func
	goto Label_678; // 0x2ac Jump
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_734(var_36_object, var_37_float); // 0x5 NEW_2
	var_81_bool = var_35_bool == 0; // 0x7 Not
	if(var_81_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_82_int = 0; // 0xd PushV
	func_1277(var_82_int); // 0xe NEW_2
	SetNPCName(var_82_int); // 0x10 ObjFunc
	var_83_int = 0; // 0x12 PushV
	func_1275(var_83_int); // 0x13 NEW_2
	SetNPCDescription(var_83_int); // 0x15 ObjFunc
	var_84_string = ""; // 0x17 PushV
	func_1279(var_84_string); // 0x18 NEW_2
	SetPhoto(var_84_string); // 0x1a ObjFunc
	var_85_string = ""; // 0x1c PushV
	func_1281(var_85_string); // 0x1d NEW_2
	SetPhoto2(var_85_string); // 0x1f ObjFunc
	var_86_int = 0; // 0x21 PushV
	func_1258(var_86_int); // 0x22 NEW_2
	SetPlayerName(var_86_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_94_bool = var_32_bool; // 0x29 Push
	if(var_94_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_95_bool = 0; var_96_object = Obj(); // 0x2f PushV
	var_97_object = Obj(); // 0x30 PushV
	func_1010(var_97_object); // 0x31 NEW_2
	var_96_object = var_97_object; // 0x32 Mov
	func_819(var_95_bool, var_96_object); // 0x34 NEW_2
	var_190_object = Obj(); var_191_object = Obj(); // 0x36 PushV
	var_190_object = var_25_object; // 0x37 Mov
	var_191_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_192_object, var_193_object, var_194_string, var_195_bool, var_190_object, var_191_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_286_bool = var_34_bool == 0; // 0x3f Not
	if(var_286_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_287_object = Obj(); // 0x46 PushV
	var_287_object = var_25_object; // 0x47 Mov
	func_802(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1281(var_85_string)
{
	var_85_string = "ui/NPC_Bakalavr_b.png"; // 0x501 MovS
	return 0; // 0x502 Return
}


func_1154()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x482 PushV
	var_17_int = 303; // 0x483 PushI
	var_18_int = 1; // 0x484 PushI
	var_19_int = 521618; // 0x485 PushI
	CreateDiaryEntry(var_16_object, var_17_int, var_18_int, var_19_int); // 0x486 Func
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0; // 0x488 PushV
	var_21_object = var_16_object; // 0x489 Mov
	var_22_int = 297; // 0x48a MovI
	func_1180(var_20_bool, var_21_object, var_22_int); // 0x48b NEW_2
	return 2; // 0x48d Return
}


func_1283(var_77_bool)
{
	var_77_bool = 1; // 0x503 MovB
	return 0; // 0x504 Return
}


func_1026(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x402 PushV
	GetVariable(var_201_string, var_203_int); // 0x403 Func
	var_200_int = var_203_int; // 0x405 Mov
	return 2; // 0x406 Return
}


func_1031(var_150_int)
{
	var_151_float = 0; var_152_float = 0; // 0x407 PushV
	GetGameTime(var_152_float); // 0x408 Func
	var_153_int = 1; // 0x40a PushI
	var_154_int = 0; // 0x40b PushV
	var_155_int = 24; // 0x40c PushI
	var_154_int = var_152_float / var_152_float; // 0x40d Div2
	var_150_int = var_153_int + var_154_int; // 0x40e Add2
	return 2; // 0x40f Return
}


func_1167(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x48f PushV
	GetDiaryRoot(var_31_object); // 0x490 Func
	var_32_bool = var_31_object == 0; // 0x492 Not
	if(var_32_bool == 0) goto Label_1177; // 0x493 JumpB
	var_33_string = "Can't retrieve diary root"; // 0x494 PushS
	Trace(var_33_string); // 0x495 Func
	var_29_object = 0; // 0x497 MovB
	return 2; // 0x498 Return
	
Label_1177:
	var_29_object = var_31_object; // 0x499 Mov
	return 2; // 0x49a Return
}


func_1040()
{
	var_214_string = "oob9Danko1"; // 0x411 PushS
	var_215_int = 1; // 0x412 PushI
	SetVariable(var_214_string, var_215_int); // 0x413 Func
	return 0; // 0x415 Return
}


func_914(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0x392 PushV
	var_149_string = "d"; // 0x393 PushS
	var_150_int = 0; // 0x394 PushV
	func_1031(var_150_int); // 0x395 NEW_2
	var_156_int = var_149_string + var_150_int; // 0x397 Add
	var_157_string = "m"; // 0x398 PushS
	var_144_string = var_156_int + var_157_string; // 0x399 Add2
	var_145_int = 0; // 0x39a MovI
	
Label_923:
	var_158_int = 1; // 0x39b PushI
	if(var_158_int == 0) goto Label_936; // 0x39c JumpB
	var_159_int = 1; // 0x39d PushI
	var_160_int = var_145_int + var_159_int; // 0x39e Add
	var_161_int = var_144_string + var_160_int; // 0x39f Add
	HasProperty(var_161_int, var_146_bool); // 0x3a0 ObjFunc
	var_162_bool = var_146_bool == 0; // 0x3a2 Not
	if(var_162_bool == 0) goto Label_933; // 0x3a3 JumpB
	goto Label_936; // 0x3a4 Jump
	
Label_936:
	var_163_bool = var_145_int == 0; // 0x3a8 Not
	if(var_163_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_137_bool = 0; // 0x3aa MovB
	return 10; // 0x3ab Return
	
Label_940:
	var_147_int = 0; // 0x3ac MovI
	var_164_int = 1; // 0x3ad PushI
	var_165_bool = var_145_int > var_164_int; // 0x3ae GT
	if(var_165_bool == 0) goto Label_946; // 0x3af JumpB
	irand(var_147_int, var_145_int); // 0x3b0 Func
	
Label_946:
	var_166_int = 1; // 0x3b2 PushI
	var_167_int = var_147_int + var_166_int; // 0x3b3 Add
	var_168_int = var_144_string + var_167_int; // 0x3b4 Add
	GetProperty(var_168_int, var_148_string); // 0x3b5 ObjFunc
	var_169_bool = 0; var_170_string = ""; // 0x3b7 PushV
	var_170_string = var_148_string; // 0x3b8 Mov
	func_988(var_169_bool, var_170_string); // 0x3b9 NEW_2
	var_137_bool = var_169_bool; // 0x3ba Mov
	return 10; // 0x3bc Return
	
Label_933:
	var_171_int = 1; // 0x3a5 PushI
	var_145_int = var_145_int + var_171_int; // 0x3a6 Add2
	goto Label_923; // 0x3a7 Jump
}


func_1046()
{
	var_94_string = "oob9Danko2"; // 0x417 PushS
	var_95_int = 1; // 0x418 PushI
	SetVariable(var_94_string, var_95_int); // 0x419 Func
	return 0; // 0x41b Return
}


func_663(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x298 PushV
	var_25_object = var_23_object; // 0x299 Mov
	TaskCall(0); // 0x29a TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x29b NEW_2
	TaskReturn(); // 0x29c TaskReturn
	return 0; // 0x29e Return
}


func_1180(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x49c PushV
	var_29_object = Obj(); // 0x49d PushV
	func_1167(var_29_object); // 0x49e NEW_2
	var_26_object = var_29_object; // 0x49f Mov
	Find(var_22_int, var_27_object); // 0x4a1 ObjFunc
	var_34_bool = var_27_object == 0; // 0x4a3 Not
	if(var_34_bool == 0) goto Label_1195; // 0x4a4 JumpB
	var_35_string = "Can't find diary parent with id: "; // 0x4a5 PushS
	var_36_int = var_35_string + var_22_int; // 0x4a6 Add
	Trace(var_36_int); // 0x4a7 Func
	var_20_bool = 0; // 0x4a9 MovB
	return 6; // 0x4aa Return
	
Label_1195:
	AddChild(var_21_object); // 0x4ab ObjFunc
	var_37_int = 7; // 0x4ad PushI
	SendWorldWndMessage(var_37_int); // 0x4ae Func
	GetCategory(var_28_int); // 0x4b0 ObjFunc
	SetDiarySection(var_28_int); // 0x4b2 Func
	var_20_bool = 0; // 0x4b4 MovB
	return 6; // 0x4b5 Return
}


func_1052()
{
	var_13_string = "b9q01"; // 0x41d PushS
	var_14_int = 3; // 0x41e PushI
	SetVariable(var_13_string, var_14_int); // 0x41f Func
	func_1154(); // 0x422 NEW_2
	return 0; // 0x424 Return
}


func_802()
{
	var_288_bool = 0; var_289_bool = 0; // 0x322 PushV
	CameraSwitchToNormal(); // 0x323 Func
	var_290_bool = 0; // 0x325 PushV
	func_1283(var_290_bool); // 0x326 NEW_2
	if(var_290_bool == 0) goto Label_810; // 0x328 JumpB
	goto Label_818; // 0x329 Jump
	
Label_818:
	return 2; // 0x332 Return
	
Label_810:
	var_291_string = "head"; // 0x32a PushS
	HasAnimationTrack(var_289_bool, var_291_string); // 0x32b Func
	var_292_bool = var_289_bool; // 0x32d Push
	if(var_292_bool == 0) goto Label_818; // 0x32e JumpB
	var_293_string = "head"; // 0x32f PushS
	UnlookAsync(var_293_string); // 0x330 Func
}


func_1061()
{
	var_100_string = "b9q01DankoAmmo"; // 0x426 PushS
	var_101_int = 1; // 0x427 PushI
	SetVariable(var_100_string, var_101_int); // 0x428 Func
	return 0; // 0x42a Return
}


func_1067()
{
	var_110_string = "oob9Danko4"; // 0x42c PushS
	var_111_int = 1; // 0x42d PushI
	SetVariable(var_110_string, var_111_int); // 0x42e Func
	return 0; // 0x430 Return
}


func_1073()
{
	var_40_int = 0; var_41_string = ""; // 0x432 PushV
	var_41_string = "map_chertez_state"; // 0x433 MovS
	func_1026(var_40_int, var_41_string); // 0x434 NEW_2
	var_44_int = 4; // 0x436 PushI
	var_45_bool = var_40_int <= var_44_int; // 0x437 LE
	if(var_45_bool == 0) goto Label_1089; // 0x438 JumpB
	var_46_string = "map_chertez_state"; // 0x439 PushS
	var_47_int = 4; // 0x43a PushI
	SetVariable(var_46_string, var_47_int); // 0x43b Func
	var_48_string = "map_chertez_force"; // 0x43d PushS
	var_49_int = 1; // 0x43e PushI
	SetVariable(var_48_string, var_49_int); // 0x43f Func
	
Label_1089:
	return 0; // 0x441 Return
}


func_819(var_95_bool, var_96_object)
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; // 0x333 PushV
	var_104_string = "voice_common"; // 0x334 PushS
	GetVariable(var_104_string, var_102_int); // 0x335 Func
	var_105_int = var_102_int; // 0x337 Push
	if(var_105_int == 0) goto Label_857; // 0x338 JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0x339 PushV
	var_107_object = var_96_object; // 0x33a Mov
	func_877(var_107_object); // 0x33b NEW_2
	var_136_bool = var_106_bool == 0; // 0x33d Not
	if(var_136_bool == 0) goto Label_839; // 0x33e JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x33f PushV
	var_138_object = var_96_object; // 0x340 Mov
	func_914(var_138_object); // 0x341 NEW_2
	var_172_bool = var_137_bool == 0; // 0x343 Not
	if(var_172_bool == 0) goto Label_839; // 0x344 JumpB
	var_95_bool = 0; // 0x345 MovB
	return 4; // 0x346 Return
	
Label_839:
	var_173_int = 2; // 0x347 PushI
	irand(var_103_int, var_173_int); // 0x348 Func
	var_174_int = var_103_int; // 0x34a Push
	if(var_174_int == 0) goto Label_852; // 0x34b JumpB
	var_175_string = "voice_common"; // 0x34c PushS
	var_176_int = 1; // 0x34d PushI
	var_177_int = var_102_int + var_176_int; // 0x34e Add
	var_178_int = 3; // 0x34f PushI
	var_179_int = var_177_int / var_178_int; // 0x350 Mod
	SetVariable(var_175_string, var_179_int); // 0x351 Func
	goto Label_856; // 0x353 Jump
	
Label_856:
	goto Label_875; // 0x358 Jump
	
Label_875:
	var_95_bool = 1; // 0x36b MovB
	return 4; // 0x36c Return
	
Label_852:
	var_180_string = "voice_common"; // 0x354 PushS
	var_181_int = 0; // 0x355 PushI
	SetVariable(var_180_string, var_181_int); // 0x356 Func
	
Label_857:
	var_182_bool = 0; var_183_object = Obj(); // 0x359 PushV
	var_183_object = var_96_object; // 0x35a Mov
	func_914(var_183_object); // 0x35b NEW_2
	var_184_bool = var_182_bool == 0; // 0x35d Not
	if(var_184_bool == 0) goto Label_871; // 0x35e JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x35f PushV
	var_186_object = var_96_object; // 0x360 Mov
	func_877(var_186_object); // 0x361 NEW_2
	var_187_bool = var_185_bool == 0; // 0x363 Not
	if(var_187_bool == 0) goto Label_871; // 0x364 JumpB
	var_95_bool = 0; // 0x365 MovB
	return 4; // 0x366 Return
	
Label_871:
	var_188_string = "voice_common"; // 0x367 PushS
	var_189_int = 1; // 0x368 PushI
	SetVariable(var_188_string, var_189_int); // 0x369 Func
}


func_1208(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); // 0x4b8 PushV
	GetMainOutdoorScene(var_58_object); // 0x4b9 Func
	var_60_bool = var_58_object == 0; // 0x4bb NullEq
	if(var_60_bool == 0) goto Label_1219; // 0x4bc JumpB
	var_61_string = "Can't find main outdoor scene"; // 0x4bd PushS
	Trace(var_61_string); // 0x4be Func
	var_59_object = 0; // 0x4c0 SetNull
	var_55_object = var_59_object; // 0x4c1 Mov
	return 4; // 0x4c2 Return
	
Label_1219:
	GetMap(var_59_object); // 0x4c3 ObjFunc
	var_55_object = var_59_object; // 0x4c5 Mov
	return 4; // 0x4c6 Return
}


func_957(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x3bd PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x3be Func
	var_16_bool = var_13_bool; // 0x3c0 Push
	if(var_16_bool == 0) goto Label_968; // 0x3c1 JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x3c2 Func
	var_17_bool = 0; // 0x3c4 PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x3c5 Func
	goto Label_972; // 0x3c7 Jump
	
Label_972:
	return 6; // 0x3cc Return
	
Label_968:
	var_18_string = "Can't find lsh animation : "; // 0x3c8 PushS
	var_19_int = var_18_string + var_9_string; // 0x3c9 Add
	Trace(var_19_int); // 0x3ca Func
}


func_1090()
{
	var_52_object = Obj(); var_53_string = ""; var_54_float = 0; // 0x443 PushV
	var_55_object = Obj(); // 0x444 PushV
	func_1208(var_55_object); // 0x445 NEW_2
	var_52_object = var_55_object; // 0x446 Mov
	var_53_string = "pt_map_aglaja"; // 0x448 MovS
	var_54_float = -1; // 0x449 MovI
	func_1225(var_52_object, var_53_string, var_54_float); // 0x44a NEW_2
	var_81_object = Obj(); // 0x44c PushV
	func_1208(var_81_object); // 0x44d NEW_2
	ShowMap(var_81_object); // 0x44f ObjFunc
	return 0; // 0x451 Return
}


func_710(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x2c6 PushV
	GetPosition(var_18_cvector); // 0x2c7 Func
	var_19_cvector = var_14_cvector - var_18_cvector; // 0x2c9 Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x2ca PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x2cb PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x2cc Func
	var_13_bool = var_20_bool; // 0x2ce Mov
	return 6; // 0x2cf Return
}


func_1225(var_52_object, var_53_string, var_54_float)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; // 0x4c9 PushV
	GetMainOutdoorScene(var_68_object); // 0x4ca Func
	var_70_bool = var_68_object == 0; // 0x4cc NullEq
	if(var_70_bool == 0) goto Label_1234; // 0x4cd JumpB
	var_71_string = "Can't find main outdoor scene"; // 0x4ce PushS
	Trace(var_71_string); // 0x4cf Func
	return 8; // 0x4d1 Return
	
Label_1234:
	GetLocator(var_53_string, var_69_bool, var_66_cvector, var_67_cvector); // 0x4d2 ObjFunc
	var_72_bool = var_69_bool == 0; // 0x4d4 Not
	if(var_72_bool == 0) goto Label_1244; // 0x4d5 JumpB
	var_73_string = "Warning: outdoor scene locator "; // 0x4d6 PushS
	var_74_int = var_73_string + var_53_string; // 0x4d7 Add
	var_75_string = " doesnt exist"; // 0x4d8 PushS
	var_76_int = var_74_int + var_75_string; // 0x4d9 Add
	Trace(var_76_int); // 0x4da Func
	
Label_1244:
	GetMap(var_52_object); // 0x4dc ObjFunc
	var_77_bool = var_52_object == 0; // 0x4de NullEq
	if(var_77_bool == 0) goto Label_1252; // 0x4df JumpB
	var_78_string = "Can't find map"; // 0x4e0 PushS
	Trace(var_78_string); // 0x4e1 Func
	return 8; // 0x4e3 Return
	
Label_1252:
	var_79_float = GetByIndex(var_66_cvector, 0); // 0x4e4 PushE
	var_80_float = GetByIndex(var_66_cvector, 2); // 0x4e5 PushE
	SetMapParams(var_79_float, var_80_float, var_54_float); // 0x4e6 ObjFunc
	return 8; // 0x4e8 Return
}


func_973(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x3cd PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x3ce Func
	var_230_bool = var_227_bool; // 0x3d0 Push
	if(var_230_bool == 0) goto Label_983; // 0x3d1 JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x3d2 Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x3d4 Func
	goto Label_987; // 0x3d6 Jump
	
Label_987:
	return 6; // 0x3db Return
	
Label_983:
	var_231_string = "Can't find lsh animation : "; // 0x3d7 PushS
	var_232_int = var_231_string + var_220_string; // 0x3d8 Add
	Trace(var_232_int); // 0x3d9 Func
}


func_720(var_9_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x2d0 PushV
	GetPosition(var_12_cvector); // 0x2d1 ObjFunc
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); // 0x2d3 PushV
	var_14_cvector = var_12_cvector; // 0x2d4 Mov
	func_710(var_13_bool, var_14_cvector); // 0x2d5 NEW_2
	var_9_bool = var_13_bool; // 0x2d6 Mov
	return 2; // 0x2d8 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_190_object, var_191_object)
{
	var_0_object = var_191_object; // 0x52 TMov
	var_1_object = var_190_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_196_int = 1; // 0x55 PushI
	if(var_196_int == 0) goto Label_179; // 0x56 JumpB
	var_197_bool = 0; // 0x57 PushV
	var_197_bool = 0; // 0x58 MovB
	var_198_bool = 0; var_199_object = Obj(); // 0x59 PushV
	var_199_object = var_1_object; // 0x5a MovT
	func_1106(var_199_object); // 0x5b NEW_2
	if(var_198_bool == 0) goto Label_100; // 0x5d JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x5e PushV
	var_207_object = var_1_object; // 0x5f MovT
	func_1118(var_207_object); // 0x60 NEW_2
	if(var_206_bool == 0) goto Label_100; // 0x62 JumpB
	var_197_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_197_bool == 0) goto Label_121; // 0x64 JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0x65 PushV
	var_212_object = var_1_object; // 0x66 MovT
	var_213_object = var_0_object; // 0x67 MovT
	func_1040(); // 0x68 NEW_2
	var_216_string = ""; // 0x6a PushV
	var_216_string = "Menace"; // 0x6b MovS
	func_209(var_191_object, var_216_string); // 0x6c NEW_2
	var_233_int = 521581; // 0x6e PushI
	SetMessage(var_233_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_234_int = 531554; // 0x73 PushI
	var_235_int = 32918; // 0x74 PushI
	var_236_int = 32917; // 0x75 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x76 TObjFunc
	goto Label_179; // 0x78 Jump
	
Label_179:
	var_237_bool = 0; // 0xb3 PushV
	func_1283(var_237_bool); // 0xb4 NEW_2
	if(var_237_bool == 0) goto Label_194; // 0xb6 JumpB
	
Label_183:
	lshWaitForAnimEnd(); // 0xb7 Func
	var_238_string = var_3_string; // 0xb9 PushT
	if(var_238_string == 0) goto Label_188; // 0xba JumpB
	goto Label_193; // 0xbb Jump
	
Label_193:
	goto Label_208; // 0xc1 Jump
	
Label_208:
	return 0; // 0xd0 Return
	
Label_188:
	var_239_string = ""; // 0xbc PushV
	var_239_string = var_2_object; // 0xbd MovT
	func_957(var_239_string); // 0xbe NEW_2
	goto Label_183; // 0xc0 Jump
	
Label_194:
	var_250_string = "all"; // 0xc2 PushS
	var_251_string = "idle"; // 0xc3 PushS
	PlayAnimation(var_250_string, var_251_string); // 0xc4 Func
	
Label_198:
	WaitForAnimEnd(); // 0xc6 Func
	var_252_string = var_3_string; // 0xc8 PushT
	if(var_252_string == 0) goto Label_203; // 0xc9 JumpB
	goto Label_208; // 0xca Jump
	
Label_203:
	var_253_string = "all"; // 0xcb PushS
	var_254_string = "idle"; // 0xcc PushS
	PlayAnimation(var_253_string, var_254_string); // 0xcd Func
	goto Label_198; // 0xcf Jump
	
Label_121:
	var_255_bool = 0; var_256_object = Obj(); // 0x79 PushV
	var_256_object = var_1_object; // 0x7a MovT
	func_1106(var_256_object); // 0x7b NEW_2
	var_257_bool = var_255_bool == 0; // 0x7d Not
	if(var_257_bool == 0) goto Label_162; // 0x7e JumpB
	var_258_string = ""; // 0x7f PushV
	var_258_string = "Neutral"; // 0x80 MovS
	func_209(var_191_object, var_258_string); // 0x81 NEW_2
	var_259_int = 521577; // 0x83 PushI
	SetMessage(var_259_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_260_bool = 0; var_261_object = Obj(); // 0x88 PushV
	var_261_object = var_1_object; // 0x89 MovT
	func_1130(var_261_object); // 0x8a NEW_2
	if(var_260_bool == 0) goto Label_146; // 0x8c JumpB
	var_266_int = 521578; // 0x8d PushI
	var_267_int = 22740; // 0x8e PushI
	var_268_int = 22739; // 0x8f PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x90 TObjFunc
	
Label_146:
	var_269_bool = 0; var_270_object = Obj(); // 0x92 PushV
	var_270_object = var_1_object; // 0x93 MovT
	func_1142(var_270_object); // 0x94 NEW_2
	if(var_269_bool == 0) goto Label_156; // 0x96 JumpB
	var_275_int = 522381; // 0x97 PushI
	var_276_int = 23547; // 0x98 PushI
	var_277_int = 23546; // 0x99 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x9a TObjFunc
	
Label_156:
	var_278_int = 521586; // 0x9c PushI
	var_279_int = -1; // 0x9d PushI
	var_280_int = 22747; // 0x9e PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x9f TObjFunc
	goto Label_179; // 0xa1 Jump
	
Label_162:
	var_281_string = ""; // 0xa2 PushV
	var_281_string = "Neutral"; // 0xa3 MovS
	func_209(var_191_object, var_281_string); // 0xa4 NEW_2
	var_282_int = 521601; // 0xa6 PushI
	SetMessage(var_282_int); // 0xa7 TObjFunc
	ClearReplies(); // 0xa9 TObjFunc
	var_283_int = 521602; // 0xab PushI
	var_284_int = -1; // 0xac PushI
	var_285_int = 22767; // 0xad PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xae TObjFunc
	goto Label_179; // 0xb0 Jump
}


func_1106(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x453 PushV
	var_201_string = "b9q01DankoFree"; // 0x454 MovS
	func_1026(var_200_int, var_201_string); // 0x455 NEW_2
	var_204_int = 0; // 0x457 PushI
	var_205_bool = var_200_int != var_204_int; // 0x458 Neq
	if(var_205_bool == 0) goto Label_1116; // 0x459 JumpB
	var_198_bool = 1; // 0x45a MovB
	return 0; // 0x45b Return
	
Label_1116:
	var_198_bool = 0; // 0x45c MovB
	return 0; // 0x45d Return
}


func_209(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0xd2 PushV
	func_1283(var_217_bool); // 0xd3 NEW_2
	var_218_bool = var_217_bool == 0; // 0xd5 Not
	if(var_218_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_219_bool = var_216_string == var_2_object; // 0xd8 Eq
	if(var_219_bool == 0) goto Label_219; // 0xd9 JumpB
	return 0; // 0xda Return
	
Label_219:
	var_220_string = ""; var_221_bool = 0; // 0xdb PushV
	var_220_string = var_216_string; // 0xdc Mov
	var_222_string = ""; // 0xdd PushS
	var_223_bool = var_216_string == var_222_string; // 0xde Eq
	if(var_223_bool == 0) goto Label_226; // 0xdf JumpB
	var_221_bool = 0; // 0xe0 MovB
	goto Label_227; // 0xe1 Jump
	
Label_227:
	func_973(var_220_string, var_221_bool); // 0xe3 NEW_2
	var_2_object = var_216_string; // 0xe5 TMov
	return 0; // 0xe6 Return
	
Label_226:
	var_221_bool = 1; // 0xe2 MovB
}


func_729(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x2d9 PushV
	IsLoaded(var_7_bool); // 0x2da Func
	var_5_bool = var_7_bool; // 0x2dc Mov
	return 2; // 0x2dd Return
}


func_988(var_129_bool, var_130_string)
{
	var_131_bool = 0; var_132_bool = 0; // 0x3dc PushV
	var_133_bool = 0; // 0x3dd PushV
	func_1283(var_133_bool); // 0x3de NEW_2
	if(var_133_bool == 0) goto Label_1001; // 0x3e0 JumpB
	lshHasSpeech(var_132_bool, var_130_string); // 0x3e1 Func
	var_134_bool = var_132_bool; // 0x3e3 Push
	if(var_134_bool == 0) goto Label_1001; // 0x3e4 JumpB
	lshPlaySpeech(var_130_string); // 0x3e5 Func
	var_129_bool = 1; // 0x3e7 MovB
	return 2; // 0x3e8 Return
	
Label_1001:
	var_129_bool = 0; // 0x3e9 MovB
	return 2; // 0x3ea Return
}


func_1118(var_206_bool)
{
	var_208_int = 0; var_209_string = ""; // 0x45f PushV
	var_209_string = "oob9Danko1"; // 0x460 MovS
	func_1026(var_208_int, var_209_string); // 0x461 NEW_2
	var_210_int = 0; // 0x463 PushI
	var_211_bool = var_208_int == var_210_int; // 0x464 Eq
	if(var_211_bool == 0) goto Label_1128; // 0x465 JumpB
	var_206_bool = 1; // 0x466 MovB
	return 0; // 0x467 Return
	
Label_1128:
	var_206_bool = 0; // 0x468 MovB
	return 0; // 0x469 Return
}


func_734(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x2de PushV
	GetPosition(var_48_cvector); // 0x2df ObjFunc
	GetEyesHeight(var_47_float); // 0x2e1 ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x2e3 PushE
	var_56_float = var_56_float + var_47_float; // 0x2e4 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x2e5 PopE
	GetPosition(var_49_cvector); // 0x2e6 Func
	GetEyesHeight(var_47_float); // 0x2e8 Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x2ea PushE
	var_57_float = var_57_float + var_47_float; // 0x2eb Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x2ec PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x2ed Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2ee PushE
	var_58_float = 0; // 0x2ef MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2f0 PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x2f1 Or
	var_60_float = sqrt(var_59_int); // 0x2f2 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x2f3 Div2
	var_51_cvector = -var_50_cvector; // 0x2f4 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x2f5 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x2f6 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x2f7 PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x2f8 Xor2
	func_1016(var_62_cvector, var_63_cvector); // 0x2f9 NEW_2
	var_70_int = 25; // 0x2fb PushI
	var_71_float = var_62_cvector * var_70_int; // 0x2fc Mult
	var_72_int = var_61_float + var_71_float; // 0x2fd Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x2fe PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x2ff Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x300 Add2
	IsOverrideActive(var_54_bool); // 0x301 Func
	var_74_bool = var_54_bool; // 0x303 Push
	if(var_74_bool == 0) goto Label_775; // 0x304 JumpB
	var_35_bool = 0; // 0x305 MovB
	return 18; // 0x306 Return
	
Label_775:
	StopWorld(); // 0x307 Func
	CameraTransit(var_53_cvector, var_51_cvector); // 0x309 Func
	var_75_float = GetByIndex(var_52_cvector, 0); // 0x30b PushE
	var_76_float = GetByIndex(var_52_cvector, 2); // 0x30c PushE
	Rotate(var_75_float, var_76_float); // 0x30d Func
	var_77_bool = 0; // 0x30f PushV
	func_1283(var_77_bool); // 0x310 NEW_2
	if(var_77_bool == 0) goto Label_788; // 0x312 JumpB
	goto Label_796; // 0x313 Jump
	
Label_796:
	CameraWaitForPlayFinish(); // 0x31c Func
	ResumeWorld(); // 0x31e Func
	var_35_bool = 1; // 0x320 MovB
	return 18; // 0x321 Return
	
Label_788:
	var_78_string = "head"; // 0x314 PushS
	HasAnimationTrack(var_55_bool, var_78_string); // 0x315 Func
	var_79_bool = var_55_bool; // 0x317 Push
	if(var_79_bool == 0) goto Label_796; // 0x318 JumpB
	var_80_string = "head"; // 0x319 PushS
	LookAsyncCamera(var_80_string); // 0x31a Func
}


func_1258(var_86_int)
{
	var_87_int = 0; var_88_int = 0; // 0x4ea PushV
	var_89_string = "branch"; // 0x4eb PushS
	GetVariable(var_89_string, var_88_int); // 0x4ec Func
	var_90_int = 0; // 0x4ee PushI
	var_91_bool = var_88_int == var_90_int; // 0x4ef Eq
	if(var_91_bool == 0) goto Label_1268; // 0x4f0 JumpB
	var_86_int = 1; // 0x4f1 MovI
	return 2; // 0x4f2 Return
	
Label_1268:
	var_92_int = 1; // 0x4f4 PushI
	var_93_bool = var_88_int == var_92_int; // 0x4f5 Eq
	if(var_93_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_86_int = 2; // 0x4f7 MovI
	return 2; // 0x4f8 Return
	
Label_1273:
	var_86_int = 3; // 0x4f9 MovI
	return 2; // 0x4fa Return
}


func_1130(var_260_bool)
{
	var_262_int = 0; var_263_string = ""; // 0x46b PushV
	var_263_string = "oob9Danko2"; // 0x46c MovS
	func_1026(var_262_int, var_263_string); // 0x46d NEW_2
	var_264_int = 0; // 0x46f PushI
	var_265_bool = var_262_int == var_264_int; // 0x470 Eq
	if(var_265_bool == 0) goto Label_1140; // 0x471 JumpB
	var_260_bool = 1; // 0x472 MovB
	return 0; // 0x473 Return
	
Label_1140:
	var_260_bool = 0; // 0x474 MovB
	return 0; // 0x475 Return
}


func_1003()
{
	var_8_bool = 0; // 0x3eb PushV
	func_1283(var_8_bool); // 0x3ec NEW_2
	if(var_8_bool == 0) goto Label_1009; // 0x3ee JumpB
	lshStopSpeech(); // 0x3ef Func
	
Label_1009:
	return 0; // 0x3f1 Return
}


func_877(var_106_bool)
{
	var_108_string = ""; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_string = ""; var_113_string = ""; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_string = ""; // 0x36d PushV
	var_113_string = "c"; // 0x36e MovS
	var_114_int = 0; // 0x36f MovI
	
Label_880:
	var_118_int = 1; // 0x370 PushI
	if(var_118_int == 0) goto Label_893; // 0x371 JumpB
	var_119_int = 1; // 0x372 PushI
	var_120_int = var_114_int + var_119_int; // 0x373 Add
	var_121_int = var_113_string + var_120_int; // 0x374 Add
	HasProperty(var_121_int, var_115_bool); // 0x375 ObjFunc
	var_122_bool = var_115_bool == 0; // 0x377 Not
	if(var_122_bool == 0) goto Label_890; // 0x378 JumpB
	goto Label_893; // 0x379 Jump
	
Label_893:
	var_123_bool = var_114_int == 0; // 0x37d Not
	if(var_123_bool == 0) goto Label_897; // 0x37e JumpB
	var_106_bool = 0; // 0x37f MovB
	return 10; // 0x380 Return
	
Label_897:
	var_116_int = 0; // 0x381 MovI
	var_124_int = 1; // 0x382 PushI
	var_125_bool = var_114_int > var_124_int; // 0x383 GT
	if(var_125_bool == 0) goto Label_903; // 0x384 JumpB
	irand(var_116_int, var_114_int); // 0x385 Func
	
Label_903:
	var_126_int = 1; // 0x387 PushI
	var_127_int = var_116_int + var_126_int; // 0x388 Add
	var_128_int = var_113_string + var_127_int; // 0x389 Add
	GetProperty(var_128_int, var_117_string); // 0x38a ObjFunc
	var_129_bool = 0; var_130_string = ""; // 0x38c PushV
	var_130_string = var_117_string; // 0x38d Mov
	func_988(var_129_bool, var_130_string); // 0x38e NEW_2
	var_106_bool = var_129_bool; // 0x38f Mov
	return 10; // 0x391 Return
	
Label_890:
	var_135_int = 1; // 0x37a PushI
	var_114_int = var_114_int + var_135_int; // 0x37b Add2
	goto Label_880; // 0x37c Jump
}


func_1010(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x3f2 PushV
	self(var_99_object); // 0x3f3 Func
	var_97_object = var_99_object; // 0x3f5 Mov
	return 2; // 0x3f6 Return
}


func_1142(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0x477 PushV
	var_272_string = "oob9Danko4"; // 0x478 MovS
	func_1026(var_271_int, var_272_string); // 0x479 NEW_2
	var_273_int = 0; // 0x47b PushI
	var_274_bool = var_271_int == var_273_int; // 0x47c Eq
	if(var_274_bool == 0) goto Label_1152; // 0x47d JumpB
	var_269_bool = 1; // 0x47e MovB
	return 0; // 0x47f Return
	
Label_1152:
	var_269_bool = 0; // 0x480 MovB
	return 0; // 0x481 Return
}


func_1016(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x3f8 PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x3f9 Or
	var_66_float = sqrt(var_67_int); // 0x3fa Sqrt2
	var_68_float = 0.0; // 0x3fb PushF
	var_69_bool = var_66_float < var_68_float; // 0x3fc LT
	if(var_69_bool == 0) goto Label_1024; // 0x3fd JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x3fe MovV
	return 2; // 0x3ff Return
	
Label_1024:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x400 Div2
	return 2; // 0x401 Return
}


func_1275(var_83_int)
{
	var_83_int = 515573; // 0x4fb MovI
	return 0; // 0x4fc Return
}


func_1277(var_82_int)
{
	var_82_int = 504032; // 0x4fd MovI
	return 0; // 0x4fe Return
}


func_1279(var_84_string)
{
	var_84_string = "ui/NPC_Bakalavr.png"; // 0x4ff MovS
	return 0; // 0x500 Return
}


