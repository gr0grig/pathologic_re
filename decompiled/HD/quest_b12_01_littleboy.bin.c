task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xe1 PushI
	if(var_14_int == 0) goto Label_663; // 0xe2 JumpB
	func_1057(); // 0xe4 NEW_2
	var_16_int = 42528; // 0xe6 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xe7 Eq
	if(var_17_bool == 0) goto Label_238; // 0xe8 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xe9 PushV
	var_18_object = var_1_object; // 0xea MovT
	var_19_object = var_0_object; // 0xeb MovT
	func_1108(); // 0xec NEW_2
	
Label_238:
	var_22_int = 42539; // 0xee PushI
	var_23_bool = var_13_bool == var_22_int; // 0xef Eq
	if(var_23_bool == 0) goto Label_246; // 0xf0 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xf1 PushV
	var_24_object = var_1_object; // 0xf2 MovT
	var_25_object = var_0_object; // 0xf3 MovT
	func_1114(); // 0xf4 NEW_2
	
Label_246:
	var_28_int = 24067; // 0xf6 PushI
	var_29_bool = var_12_bool == var_28_int; // 0xf7 Eq
	if(var_29_bool == 0) goto Label_339; // 0xf8 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0xf9 PushV
	var_31_object = var_1_object; // 0xfa MovT
	func_1165(var_31_object); // 0xfb NEW_2
	if(var_30_bool == 0) goto Label_299; // 0xfd JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0xfe PushV
	var_38_object = var_1_object; // 0xff MovT
	var_39_object = var_0_object; // 0x100 MovT
	func_1120(); // 0x101 NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0x103 PushV
	var_50_object = var_1_object; // 0x104 MovT
	var_51_object = var_0_object; // 0x105 MovT
	func_1159(); // 0x106 NEW_2
	var_54_object = Obj(); var_55_object = Obj(); // 0x108 PushV
	var_54_object = var_1_object; // 0x109 MovT
	var_55_object = var_0_object; // 0x10a MovT
	func_1127(); // 0x10b NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x10d PushV
	var_99_object = var_1_object; // 0x10e MovT
	var_100_object = var_0_object; // 0x10f MovT
	func_1102(); // 0x110 NEW_2
	var_103_string = ""; // 0x112 PushV
	var_103_string = "Neutral"; // 0x113 MovS
	func_202(var_13_bool, var_103_string); // 0x114 NEW_2
	var_120_int = 522879; // 0x116 PushI
	SetMessage(var_120_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_121_int = 522880; // 0x11b PushI
	var_122_int = 24069; // 0x11c PushI
	var_123_int = 24068; // 0x11d PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x11e TObjFunc
	var_124_int = 522898; // 0x120 PushI
	var_125_int = 24089; // 0x121 PushI
	var_126_int = 24088; // 0x122 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x123 TObjFunc
	var_127_int = 522900; // 0x125 PushI
	var_128_int = 24091; // 0x126 PushI
	var_129_int = 24090; // 0x127 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_130_string = ""; // 0x12b PushV
	var_130_string = "Neutral"; // 0x12c MovS
	func_202(var_13_bool, var_130_string); // 0x12d NEW_2
	var_131_int = 540520; // 0x12f PushI
	SetMessage(var_131_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_132_bool = 0; var_133_object = Obj(); // 0x134 PushV
	var_133_object = var_1_object; // 0x135 MovT
	func_1177(var_133_object); // 0x136 NEW_2
	if(var_132_bool == 0) goto Label_318; // 0x138 JumpB
	var_138_int = 540521; // 0x139 PushI
	var_139_int = 42529; // 0x13a PushI
	var_140_int = 42528; // 0x13b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x13c TObjFunc
	
Label_318:
	var_141_bool = 0; var_142_object = Obj(); // 0x13e PushV
	var_142_object = var_1_object; // 0x13f MovT
	func_1189(var_142_object); // 0x140 NEW_2
	if(var_141_bool == 0) goto Label_328; // 0x142 JumpB
	var_147_int = 540531; // 0x143 PushI
	var_148_int = 42540; // 0x144 PushI
	var_149_int = 42539; // 0x145 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x146 TObjFunc
	
Label_328:
	var_150_int = 540535; // 0x148 PushI
	var_151_int = -1; // 0x149 PushI
	var_152_int = 42545; // 0x14a PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x14b TObjFunc
	var_153_int = 523160; // 0x14d PushI
	var_154_int = -1; // 0x14e PushI
	var_155_int = 24362; // 0x14f PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_156_int = 42540; // 0x153 PushI
	var_157_bool = var_12_bool == var_156_int; // 0x154 Eq
	if(var_157_bool == 0) goto Label_362; // 0x155 JumpB
	var_158_string = ""; // 0x156 PushV
	var_158_string = "Neutral"; // 0x157 MovS
	func_202(var_13_bool, var_158_string); // 0x158 NEW_2
	var_159_int = 540532; // 0x15a PushI
	SetMessage(var_159_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_160_int = 540533; // 0x15f PushI
	var_161_int = 42534; // 0x160 PushI
	var_162_int = 42541; // 0x161 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x162 TObjFunc
	var_163_int = 540534; // 0x164 PushI
	var_164_int = 42531; // 0x165 PushI
	var_165_int = 42543; // 0x166 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_166_int = 42529; // 0x16a PushI
	var_167_bool = var_12_bool == var_166_int; // 0x16b Eq
	if(var_167_bool == 0) goto Label_385; // 0x16c JumpB
	var_168_string = ""; // 0x16d PushV
	var_168_string = "Neutral"; // 0x16e MovS
	func_202(var_13_bool, var_168_string); // 0x16f NEW_2
	var_169_int = 540522; // 0x171 PushI
	SetMessage(var_169_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_170_int = 540523; // 0x176 PushI
	var_171_int = 42531; // 0x177 PushI
	var_172_int = 42530; // 0x178 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x179 TObjFunc
	var_173_int = 540530; // 0x17b PushI
	var_174_int = 42531; // 0x17c PushI
	var_175_int = 42537; // 0x17d PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_176_int = 42531; // 0x181 PushI
	var_177_bool = var_12_bool == var_176_int; // 0x182 Eq
	if(var_177_bool == 0) goto Label_408; // 0x183 JumpB
	var_178_string = ""; // 0x184 PushV
	var_178_string = "Neutral"; // 0x185 MovS
	func_202(var_13_bool, var_178_string); // 0x186 NEW_2
	var_179_int = 540524; // 0x188 PushI
	SetMessage(var_179_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_180_int = 540525; // 0x18d PushI
	var_181_int = -1; // 0x18e PushI
	var_182_int = 42532; // 0x18f PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x190 TObjFunc
	var_183_int = 540526; // 0x192 PushI
	var_184_int = 42534; // 0x193 PushI
	var_185_int = 42533; // 0x194 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_186_int = 42534; // 0x198 PushI
	var_187_bool = var_12_bool == var_186_int; // 0x199 Eq
	if(var_187_bool == 0) goto Label_431; // 0x19a JumpB
	var_188_string = ""; // 0x19b PushV
	var_188_string = "Neutral"; // 0x19c MovS
	func_202(var_13_bool, var_188_string); // 0x19d NEW_2
	var_189_int = 540527; // 0x19f PushI
	SetMessage(var_189_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_190_int = 540528; // 0x1a4 PushI
	var_191_int = -1; // 0x1a5 PushI
	var_192_int = 42535; // 0x1a6 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1a7 TObjFunc
	var_193_int = 540529; // 0x1a9 PushI
	var_194_int = -1; // 0x1aa PushI
	var_195_int = 42536; // 0x1ab PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_196_int = 24091; // 0x1af PushI
	var_197_bool = var_12_bool == var_196_int; // 0x1b0 Eq
	if(var_197_bool == 0) goto Label_454; // 0x1b1 JumpB
	var_198_string = ""; // 0x1b2 PushV
	var_198_string = "Neutral"; // 0x1b3 MovS
	func_202(var_13_bool, var_198_string); // 0x1b4 NEW_2
	var_199_int = 522901; // 0x1b6 PushI
	SetMessage(var_199_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_200_int = 522902; // 0x1bb PushI
	var_201_int = 24093; // 0x1bc PushI
	var_202_int = 24092; // 0x1bd PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1be TObjFunc
	var_203_int = 522910; // 0x1c0 PushI
	var_204_int = -1; // 0x1c1 PushI
	var_205_int = 24100; // 0x1c2 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1c3 TObjFunc
	return 0; // 0x1c5 Return
	
Label_454:
	var_206_int = 24093; // 0x1c6 PushI
	var_207_bool = var_12_bool == var_206_int; // 0x1c7 Eq
	if(var_207_bool == 0) goto Label_477; // 0x1c8 JumpB
	var_208_string = ""; // 0x1c9 PushV
	var_208_string = "Neutral"; // 0x1ca MovS
	func_202(var_13_bool, var_208_string); // 0x1cb NEW_2
	var_209_int = 522903; // 0x1cd PushI
	SetMessage(var_209_int); // 0x1ce TObjFunc
	ClearReplies(); // 0x1d0 TObjFunc
	var_210_int = 522904; // 0x1d2 PushI
	var_211_int = 24095; // 0x1d3 PushI
	var_212_int = 24094; // 0x1d4 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1d5 TObjFunc
	var_213_int = 522909; // 0x1d7 PushI
	var_214_int = -1; // 0x1d8 PushI
	var_215_int = 24099; // 0x1d9 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_216_int = 24095; // 0x1dd PushI
	var_217_bool = var_12_bool == var_216_int; // 0x1de Eq
	if(var_217_bool == 0) goto Label_500; // 0x1df JumpB
	var_218_string = ""; // 0x1e0 PushV
	var_218_string = "Neutral"; // 0x1e1 MovS
	func_202(var_13_bool, var_218_string); // 0x1e2 NEW_2
	var_219_int = 522905; // 0x1e4 PushI
	SetMessage(var_219_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_220_int = 522906; // 0x1e9 PushI
	var_221_int = -1; // 0x1ea PushI
	var_222_int = 24096; // 0x1eb PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1ec TObjFunc
	var_223_int = 522908; // 0x1ee PushI
	var_224_int = -1; // 0x1ef PushI
	var_225_int = 24098; // 0x1f0 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_226_int = 24089; // 0x1f4 PushI
	var_227_bool = var_12_bool == var_226_int; // 0x1f5 Eq
	if(var_227_bool == 0) goto Label_518; // 0x1f6 JumpB
	var_228_string = ""; // 0x1f7 PushV
	var_228_string = "Neutral"; // 0x1f8 MovS
	func_202(var_13_bool, var_228_string); // 0x1f9 NEW_2
	var_229_int = 522899; // 0x1fb PushI
	SetMessage(var_229_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_230_int = 522911; // 0x200 PushI
	var_231_int = 24102; // 0x201 PushI
	var_232_int = 24101; // 0x202 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_233_int = 24102; // 0x206 PushI
	var_234_bool = var_12_bool == var_233_int; // 0x207 Eq
	if(var_234_bool == 0) goto Label_536; // 0x208 JumpB
	var_235_string = ""; // 0x209 PushV
	var_235_string = "Neutral"; // 0x20a MovS
	func_202(var_13_bool, var_235_string); // 0x20b NEW_2
	var_236_int = 522912; // 0x20d PushI
	SetMessage(var_236_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_237_int = 522913; // 0x212 PushI
	var_238_int = 24091; // 0x213 PushI
	var_239_int = 24103; // 0x214 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x215 TObjFunc
	return 0; // 0x217 Return
	
Label_536:
	var_240_int = 24069; // 0x218 PushI
	var_241_bool = var_12_bool == var_240_int; // 0x219 Eq
	if(var_241_bool == 0) goto Label_559; // 0x21a JumpB
	var_242_string = ""; // 0x21b PushV
	var_242_string = "Neutral"; // 0x21c MovS
	func_202(var_13_bool, var_242_string); // 0x21d NEW_2
	var_243_int = 522881; // 0x21f PushI
	SetMessage(var_243_int); // 0x220 TObjFunc
	ClearReplies(); // 0x222 TObjFunc
	var_244_int = 522882; // 0x224 PushI
	var_245_int = 24071; // 0x225 PushI
	var_246_int = 24070; // 0x226 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x227 TObjFunc
	var_247_int = 522897; // 0x229 PushI
	var_248_int = 24071; // 0x22a PushI
	var_249_int = 24086; // 0x22b PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x22c TObjFunc
	return 0; // 0x22e Return
	
Label_559:
	var_250_int = 24071; // 0x22f PushI
	var_251_bool = var_12_bool == var_250_int; // 0x230 Eq
	if(var_251_bool == 0) goto Label_582; // 0x231 JumpB
	var_252_string = ""; // 0x232 PushV
	var_252_string = "Neutral"; // 0x233 MovS
	func_202(var_13_bool, var_252_string); // 0x234 NEW_2
	var_253_int = 522883; // 0x236 PushI
	SetMessage(var_253_int); // 0x237 TObjFunc
	ClearReplies(); // 0x239 TObjFunc
	var_254_int = 522884; // 0x23b PushI
	var_255_int = 24073; // 0x23c PushI
	var_256_int = 24072; // 0x23d PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x23e TObjFunc
	var_257_int = 522896; // 0x240 PushI
	var_258_int = 24073; // 0x241 PushI
	var_259_int = 24084; // 0x242 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x243 TObjFunc
	return 0; // 0x245 Return
	
Label_582:
	var_260_int = 24073; // 0x246 PushI
	var_261_bool = var_12_bool == var_260_int; // 0x247 Eq
	if(var_261_bool == 0) goto Label_605; // 0x248 JumpB
	var_262_string = ""; // 0x249 PushV
	var_262_string = "Neutral"; // 0x24a MovS
	func_202(var_13_bool, var_262_string); // 0x24b NEW_2
	var_263_int = 522885; // 0x24d PushI
	SetMessage(var_263_int); // 0x24e TObjFunc
	ClearReplies(); // 0x250 TObjFunc
	var_264_int = 522886; // 0x252 PushI
	var_265_int = 24075; // 0x253 PushI
	var_266_int = 24074; // 0x254 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x255 TObjFunc
	var_267_int = 522891; // 0x257 PushI
	var_268_int = 24080; // 0x258 PushI
	var_269_int = 24079; // 0x259 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x25a TObjFunc
	return 0; // 0x25c Return
	
Label_605:
	var_270_int = 24080; // 0x25d PushI
	var_271_bool = var_12_bool == var_270_int; // 0x25e Eq
	if(var_271_bool == 0) goto Label_628; // 0x25f JumpB
	var_272_string = ""; // 0x260 PushV
	var_272_string = "Neutral"; // 0x261 MovS
	func_202(var_13_bool, var_272_string); // 0x262 NEW_2
	var_273_int = 522892; // 0x264 PushI
	SetMessage(var_273_int); // 0x265 TObjFunc
	ClearReplies(); // 0x267 TObjFunc
	var_274_int = 522894; // 0x269 PushI
	var_275_int = -1; // 0x26a PushI
	var_276_int = 24082; // 0x26b PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x26c TObjFunc
	var_277_int = 522895; // 0x26e PushI
	var_278_int = -1; // 0x26f PushI
	var_279_int = 24083; // 0x270 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x271 TObjFunc
	return 0; // 0x273 Return
	
Label_628:
	var_280_int = 24075; // 0x274 PushI
	var_281_bool = var_12_bool == var_280_int; // 0x275 Eq
	if(var_281_bool == 0) goto Label_651; // 0x276 JumpB
	var_282_string = ""; // 0x277 PushV
	var_282_string = "Neutral"; // 0x278 MovS
	func_202(var_13_bool, var_282_string); // 0x279 NEW_2
	var_283_int = 522887; // 0x27b PushI
	SetMessage(var_283_int); // 0x27c TObjFunc
	ClearReplies(); // 0x27e TObjFunc
	var_284_int = 522889; // 0x280 PushI
	var_285_int = -1; // 0x281 PushI
	var_286_int = 24077; // 0x282 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x283 TObjFunc
	var_287_int = 522890; // 0x285 PushI
	var_288_int = -1; // 0x286 PushI
	var_289_int = 24078; // 0x287 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x288 TObjFunc
	return 0; // 0x28a Return
	
Label_651:
	var_3_string = 1; // 0x28b TMovB
	var_290_bool = 0; // 0x28c PushV
	func_1297(var_290_bool); // 0x28d NEW_2
	if(var_290_bool == 0) goto Label_659; // 0x28f JumpB
	lshStopAnimation(); // 0x290 Func
	goto Label_661; // 0x292 Jump
	
Label_661:
	return 0; // 0x295 Return
	
Label_659:
	StopAnimation(); // 0x293 Func
	
Label_663:
	return 0; // 0x297 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_815(var_11_bool, var_12_object); // 0x2a0 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x2a2 PushV
	var_17_object = var_12_object; // 0x2a3 Mov
	TaskCall(0); // 0x2a4 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x2a5 NEW_2
	TaskReturn(); // 0x2a6 TaskReturn
	return 0; // 0x2a8 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x2d0 PushS
	var_14_bool = var_12_string == var_13_string; // 0x2d1 Eq
	if(var_14_bool == 0) goto Label_726; // 0x2d2 JumpB
	func_699(var_12_string); // 0x2d4 NEW_2
	
Label_726:
	return 0; // 0x2d6 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x2d7 PushT
	if(var_12_int == 0) goto Label_732; // 0x2d8 JumpB
	func_815(var_10_bool, var_11_bool); // 0x2da NEW_2
	
Label_732:
	var_16_bool = 0; // 0x2dc PushV
	var_16_bool = 0; // 0x2dd MovB
	var_17_int = var_5_int; // 0x2de PushT
	if(var_17_int == 0) goto Label_741; // 0x2df JumpB
	var_18_bool = 0; // 0x2e0 PushV
	func_748(var_18_bool); // 0x2e1 NEW_2
	if(var_18_bool == 0) goto Label_741; // 0x2e3 JumpB
	var_16_bool = 1; // 0x2e4 MovB
	
Label_741:
	if(var_16_bool == 0) goto Label_747; // 0x2e5 JumpB
	var_19_object = Obj(); // 0x2e6 PushV
	func_1064(var_19_object); // 0x2e7 NEW_2
	RemoveActor(var_19_object); // 0x2e9 Func
	
Label_747:
	return 0; // 0x2eb Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x319 PushI
	var_14_bool = var_12_int == var_13_int; // 0x31a Eq
	if(var_14_bool == 0) goto Label_814; // 0x31b JumpB
	var_15_bool = 0; // 0x31c PushV
	func_777(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x31d NEW_2
	if(var_15_bool == 0) goto Label_808; // 0x31f JumpB
	var_28_bool = var_2_object == 0; // 0x320 Not
	if(var_28_bool == 0) goto Label_807; // 0x321 JumpB
	var_29_object = Obj(); // 0x322 PushV
	var_29_object = var_4_bool; // 0x323 MovT
	func_1046(var_29_object); // 0x324 NEW_2
	var_2_object = 1; // 0x326 TMovB
	
Label_807:
	goto Label_814; // 0x327 Jump
	
Label_814:
	return 0; // 0x32e Return
	
Label_808:
	var_36_object = var_2_object; // 0x328 PushT
	if(var_36_object == 0) goto Label_814; // 0x329 JumpB
	var_37_string = "head"; // 0x32a PushS
	UnlookAsync(var_37_string); // 0x32b Func
	var_2_object = 0; // 0x32d TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x298 PushV
	var_12_float = 300; // 0x299 MovI
	var_13_float = 100; // 0x29a MovI
	func_681(var_11_bool, var_12_float, var_13_float); // 0x29b NEW_2
	return 0; // 0x29d Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_928(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1291(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1289(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1293(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1295(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1272(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_239_bool = var_26_bool == 0; // 0x38 Not
	if(var_239_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_240_object = Obj(); // 0x3f PushV
	var_240_object = var_17_object; // 0x40 Mov
	func_997(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1159()
{
	var_117_string = "b12q01ChildsAreVisited"; // 0x488 PushS
	var_118_int = 1; // 0x489 PushI
	SetVariable(var_117_string, var_118_int); // 0x48a Func
	return 0; // 0x48c Return
}


func_1031(var_172_string, var_173_bool)
{
	var_176_bool = 0; var_177_float = 0; var_178_float = 0; var_179_bool = 0; var_180_float = 0; var_181_float = 0; // 0x407 PushV
	lshHasAnimation(var_179_bool, var_172_string); // 0x408 Func
	var_182_bool = var_179_bool; // 0x40a Push
	if(var_182_bool == 0) goto Label_1041; // 0x40b JumpB
	lshGetAnimTimes(var_172_string, var_180_float, var_181_float); // 0x40c Func
	lshPlayAnimation(var_180_float, var_181_float, var_173_bool); // 0x40e Func
	goto Label_1045; // 0x410 Jump
	
Label_1045:
	return 6; // 0x415 Return
	
Label_1041:
	var_183_string = "Can't find lsh animation : "; // 0x411 PushS
	var_184_int = var_183_string + var_172_string; // 0x412 Add
	Trace(var_184_int); // 0x413 Func
}


func_1289(var_76_int)
{
	var_76_int = 515560; // 0x509 MovI
	return 0; // 0x50a Return
}


func_777(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x309 PushV
	var_18_bool = var_4_bool == 0; // 0x30a NullEq
	if(var_18_bool == 0) goto Label_782; // 0x30b JumpB
	var_15_bool = 0; // 0x30c MovB
	return 2; // 0x30d Return
	
Label_782:
	var_19_float = 0; var_20_object = Obj(); // 0x30e PushV
	var_20_object = var_4_bool; // 0x30f MovT
	func_915(var_20_object); // 0x310 NEW_2
	var_17_float = sqrt(var_19_float); // 0x312 Sqrt2
	var_27_object = var_2_object; // 0x313 PushT
	if(var_27_object == 0) goto Label_790; // 0x314 JumpB
	var_17_float = var_17_float - var_1_object; // 0x315 Sub2
	
Label_790:
	var_15_bool = var_17_float < var_0_object; // 0x316 LT2
	return 2; // 0x317 Return
}


func_1291(var_75_int)
{
	var_75_int = 503345; // 0x50b MovI
	return 0; // 0x50c Return
}


func_908(var_71_bool)
{
	var_71_bool = 1; // 0x38c MovB
	return 0; // 0x38d Return
}


func_1293(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x50d MovS
	return 0; // 0x50e Return
}


func_1165(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x48e PushV
	var_98_string = "oob12Littleboy1"; // 0x48f MovS
	func_1080(var_97_int, var_98_string); // 0x490 NEW_2
	var_101_int = 0; // 0x492 PushI
	var_102_bool = var_97_int == var_101_int; // 0x493 Eq
	if(var_102_bool == 0) goto Label_1175; // 0x494 JumpB
	var_95_bool = 1; // 0x495 MovB
	return 0; // 0x496 Return
	
Label_1175:
	var_95_bool = 0; // 0x497 MovB
	return 0; // 0x498 Return
}


func_1295(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x50f MovS
	return 0; // 0x510 Return
}


func_910()
{
	StopAnimation(); // 0x38e Func
	StopGroup0(); // 0x390 Func
	return 0; // 0x392 Return
}


func_1297(var_70_bool)
{
	var_70_bool = 0; // 0x511 MovB
	return 0; // 0x512 Return
}


func_915(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x393 PushV
	GetPosition(var_24_cvector); // 0x394 Func
	GetPosition(var_25_cvector); // 0x396 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x398 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x399 Or2
	return 6; // 0x39a Return
}


func_1299(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x513 PushV
	var_55_string = "idle"; // 0x514 MovS
	var_56_int = var_53_int; // 0x515 Push
	if(var_56_int == 0) goto Label_1304; // 0x516 JumpB
	var_55_string = var_55_string + var_53_int; // 0x517 Add2
	
Label_1304:
	var_52_string = var_55_string; // 0x518 Mov
	return 2; // 0x519 Return
}


func_1046(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x416 PushV
	GetEyesHeight(var_32_float); // 0x417 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x419 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x41a PushE
	var_34_float = var_32_float; // 0x41b Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x41c PopE
	var_35_string = "head"; // 0x41d PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x41e Func
	return 4; // 0x420 Return
}


func_1177(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x49a PushV
	var_218_string = "oob12Littleboy2"; // 0x49b MovS
	func_1080(var_217_int, var_218_string); // 0x49c NEW_2
	var_219_int = 0; // 0x49e PushI
	var_220_bool = var_217_int == var_219_int; // 0x49f Eq
	if(var_220_bool == 0) goto Label_1187; // 0x4a0 JumpB
	var_215_bool = 1; // 0x4a1 MovB
	return 0; // 0x4a2 Return
	
Label_1187:
	var_215_bool = 0; // 0x4a3 MovB
	return 0; // 0x4a4 Return
}


func_1306(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x51a PushV
	var_49_int = 0; // 0x51b MovI
	
Label_1308:
	var_51_string = "all"; // 0x51c PushS
	var_52_string = ""; var_53_int = 0; // 0x51d PushV
	var_53_int = var_49_int; // 0x51e Mov
	func_1299(var_52_string, var_53_int); // 0x51f NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x521 Func
	var_57_bool = var_50_bool == 0; // 0x523 Not
	if(var_57_bool == 0) goto Label_1318; // 0x524 JumpB
	goto Label_1321; // 0x525 Jump
	
Label_1321:
	var_46_int = var_49_int; // 0x529 Mov
	return 4; // 0x52a Return
	
Label_1318:
	var_58_int = 1; // 0x526 PushI
	var_49_int = var_49_int + var_58_int; // 0x527 Add2
	goto Label_1308; // 0x528 Jump
}


func_923(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x39b PushV
	IsLoaded(var_25_bool); // 0x39c Func
	var_23_bool = var_25_bool; // 0x39e Mov
	return 2; // 0x39f Return
}


func_928(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x3a0 PushV
	GetPosition(var_40_cvector); // 0x3a1 ObjFunc
	GetEyesHeight(var_39_float); // 0x3a3 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x3a5 PushE
	var_48_float = var_48_float + var_39_float; // 0x3a6 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x3a7 PopE
	GetPosition(var_41_cvector); // 0x3a8 Func
	GetEyesHeight(var_39_float); // 0x3aa Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x3ac PushE
	var_49_float = var_49_float + var_39_float; // 0x3ad Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x3ae PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x3af Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x3b0 PushE
	var_50_float = 0; // 0x3b1 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x3b2 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x3b3 Or
	var_52_float = sqrt(var_51_int); // 0x3b4 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x3b5 Div2
	var_43_cvector = -var_42_cvector; // 0x3b6 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x3b7 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x3b8 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x3b9 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x3ba Xor2
	func_1070(var_54_cvector, var_55_cvector); // 0x3bb NEW_2
	var_62_int = 25; // 0x3bd PushI
	var_63_float = var_54_cvector * var_62_int; // 0x3be Mult
	var_64_int = var_53_float + var_63_float; // 0x3bf Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x3c0 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x3c1 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x3c2 Add2
	IsOverrideActive(var_46_bool); // 0x3c3 Func
	var_66_bool = var_46_bool; // 0x3c5 Push
	if(var_66_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_27_bool = 0; // 0x3c7 MovB
	return 18; // 0x3c8 Return
	
Label_969:
	StopWorld(); // 0x3c9 Func
	var_67_bool = 1; // 0x3cb PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x3cc Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x3ce PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x3cf PushE
	Rotate(var_68_float, var_69_float); // 0x3d0 Func
	var_70_bool = 0; // 0x3d2 PushV
	func_1297(var_70_bool); // 0x3d3 NEW_2
	if(var_70_bool == 0) goto Label_983; // 0x3d5 JumpB
	goto Label_991; // 0x3d6 Jump
	
Label_991:
	CameraWaitForPlayFinish(); // 0x3df Func
	ResumeWorld(); // 0x3e1 Func
	var_27_bool = 1; // 0x3e3 MovB
	return 18; // 0x3e4 Return
	
Label_983:
	var_71_string = "head"; // 0x3d7 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x3d8 Func
	var_72_bool = var_47_bool; // 0x3da Push
	if(var_72_bool == 0) goto Label_991; // 0x3db JumpB
	var_73_string = "head"; // 0x3dc PushS
	LookAsyncCamera(var_73_string); // 0x3dd Func
}


func_1057()
{
	var_15_bool = 0; // 0x421 PushV
	func_1297(var_15_bool); // 0x422 NEW_2
	if(var_15_bool == 0) goto Label_1063; // 0x424 JumpB
	lshStopSpeech(); // 0x425 Func
	
Label_1063:
	return 0; // 0x427 Return
}


func_1189(var_224_bool)
{
	var_226_int = 0; var_227_string = ""; // 0x4a6 PushV
	var_227_string = "oob12Littleboy3"; // 0x4a7 MovS
	func_1080(var_226_int, var_227_string); // 0x4a8 NEW_2
	var_228_int = 0; // 0x4aa PushI
	var_229_bool = var_226_int == var_228_int; // 0x4ab Eq
	if(var_229_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_224_bool = 1; // 0x4ad MovB
	return 0; // 0x4ae Return
	
Label_1199:
	var_224_bool = 0; // 0x4af MovB
	return 0; // 0x4b0 Return
}


func_1064(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x428 PushV
	self(var_21_object); // 0x429 Func
	var_19_object = var_21_object; // 0x42b Mov
	return 2; // 0x42c Return
}


func_681(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x2a9 PushV
	var_6_int = 0; // 0x2aa TMovB
	
Label_683:
	var_18_int = 3; // 0x2ab PushI
	rand(var_16_float, var_18_int); // 0x2ac Func
	var_19_int = 3; // 0x2ae PushI
	var_20_int = var_16_float + var_19_int; // 0x2af Add
	Sleep(var_20_int, var_17_bool); // 0x2b0 Func
	var_6_int = 1; // 0x2b2 TMovB
	var_21_float = 0; var_22_float = 0; // 0x2b3 PushV
	var_21_float = var_12_float; // 0x2b4 Mov
	var_22_float = var_13_float; // 0x2b5 Mov
	func_750(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x2b6 NEW_2
	var_6_int = 0; // 0x2b8 TMovB
	goto Label_683; // 0x2b9 Jump
}


func_1070(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x42e PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x42f Or
	var_58_float = sqrt(var_59_int); // 0x430 Sqrt2
	var_60_float = 0.0; // 0x431 PushF
	var_61_bool = var_58_float < var_60_float; // 0x432 LT
	if(var_61_bool == 0) goto Label_1078; // 0x433 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x434 MovV
	return 2; // 0x435 Return
	
Label_1078:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x436 Div2
	return 2; // 0x437 Return
}


func_815(var_2_object, var_3_string)
{
	func_910(); // 0x330 NEW_2
	var_13_int = 10; // 0x332 PushI
	KillTimer(var_13_int); // 0x333 Func
	var_14_object = var_2_object; // 0x335 PushT
	if(var_14_object == 0) goto Label_827; // 0x336 JumpB
	var_15_string = "head"; // 0x337 PushS
	UnlookAsync(var_15_string); // 0x338 Func
	var_2_object = 0; // 0x33a TMovB
	
Label_827:
	var_3_string = 1; // 0x33b TMovB
	return 0; // 0x33c Return
}


func_1201()
{
	var_127_object = Obj(); var_128_object = Obj(); // 0x4b1 PushV
	var_129_int = 566; // 0x4b2 PushI
	var_130_int = 0; // 0x4b3 PushI
	var_131_int = 530580; // 0x4b4 PushI
	CreateDiaryEntry(var_128_object, var_129_int, var_130_int, var_131_int); // 0x4b5 Func
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0; // 0x4b7 PushV
	var_133_object = var_128_object; // 0x4b8 Mov
	var_134_int = -1; // 0x4b9 MovI
	func_1227(var_132_bool, var_133_object, var_134_int); // 0x4ba NEW_2
	return 2; // 0x4bc Return
}


func_1080(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x438 PushV
	GetVariable(var_98_string, var_100_int); // 0x439 Func
	var_97_int = var_100_int; // 0x43b Mov
	return 2; // 0x43c Return
}


func_699(var_5_int)
{
	var_5_int = 1; // 0x2bb TMovB
	var_15_bool = 0; // 0x2bc PushV
	var_15_bool = 0; // 0x2bd MovB
	var_16_bool = 0; // 0x2be PushV
	func_923(var_16_bool); // 0x2bf NEW_2
	var_19_bool = var_16_bool == 0; // 0x2c1 Not
	if(var_19_bool == 0) goto Label_712; // 0x2c2 JumpB
	var_20_bool = 0; // 0x2c3 PushV
	func_748(var_20_bool); // 0x2c4 NEW_2
	if(var_20_bool == 0) goto Label_712; // 0x2c6 JumpB
	var_15_bool = 1; // 0x2c7 MovB
	
Label_712:
	if(var_15_bool == 0) goto Label_718; // 0x2c8 JumpB
	var_21_object = Obj(); // 0x2c9 PushV
	func_1064(var_21_object); // 0x2ca NEW_2
	RemoveActor(var_21_object); // 0x2cc Func
	
Label_718:
	return 0; // 0x2ce Return
}


func_829()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x33d PushV
	WaitForAnimEnd(); // 0x33e Func
	var_44_bool = 0; // 0x340 PushV
	func_923(var_44_bool); // 0x341 NEW_2
	var_45_bool = var_44_bool == 0; // 0x343 Not
	if(var_45_bool == 0) goto Label_838; // 0x344 JumpB
	return 14; // 0x345 Return
	
Label_838:
	var_46_int = 0; // 0x346 PushV
	func_1306(var_46_int); // 0x347 NEW_2
	var_37_int = var_46_int; // 0x348 Mov
	var_38_int = 0; // 0x34a MovI
	
Label_843:
	var_59_bool = 0; // 0x34b PushV
	var_59_bool = 0; // 0x34c MovB
	var_60_int = 5; // 0x34d PushI
	var_61_bool = var_38_int < var_60_int; // 0x34e LT
	if(var_61_bool == 0) goto Label_853; // 0x34f JumpB
	var_62_bool = 0; // 0x350 PushV
	func_923(var_62_bool); // 0x351 NEW_2
	if(var_62_bool == 0) goto Label_853; // 0x353 JumpB
	var_59_bool = 1; // 0x354 MovB
	
Label_853:
	if(var_59_bool == 0) goto Label_905; // 0x355 JumpB
	var_63_int = 3; // 0x356 PushI
	irand(var_39_int, var_63_int); // 0x357 Func
	var_64_int = 0; // 0x359 PushI
	var_65_bool = var_39_int == var_64_int; // 0x35a Eq
	if(var_65_bool == 0) goto Label_877; // 0x35b JumpB
	var_66_int = var_37_int; // 0x35c Push
	if(var_66_int == 0) goto Label_876; // 0x35d JumpB
	irand(var_40_int, var_37_int); // 0x35e Func
	var_67_string = "all"; // 0x360 PushS
	var_68_string = ""; var_69_int = 0; // 0x361 PushV
	var_69_int = var_40_int; // 0x362 Mov
	func_1299(var_68_string, var_69_int); // 0x363 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x365 Func
	WaitForAnimEnd(var_41_bool); // 0x367 Func
	var_70_bool = var_41_bool == 0; // 0x369 Not
	if(var_70_bool == 0) goto Label_876; // 0x36a JumpB
	goto Label_905; // 0x36b Jump
	
Label_905:
	ResetAAS(); // 0x389 Func
	return 14; // 0x38b Return
	
Label_876:
	goto Label_894; // 0x36c Jump
	
Label_894:
	var_71_bool = 0; // 0x37e PushV
	func_908(var_71_bool); // 0x37f NEW_2
	var_72_bool = var_71_bool == 0; // 0x381 Not
	if(var_72_bool == 0) goto Label_900; // 0x382 JumpB
	goto Label_905; // 0x383 Jump
	
Label_900:
	ResetAAS(); // 0x384 Func
	var_73_int = 1; // 0x386 PushI
	var_38_int = var_38_int + var_73_int; // 0x387 Add2
	goto Label_843; // 0x388 Jump
	
Label_877:
	var_74_int = 1; // 0x36d PushI
	var_75_bool = var_39_int == var_74_int; // 0x36e Eq
	if(var_75_bool == 0) goto Label_891; // 0x36f JumpB
	var_76_int = 4; // 0x370 PushI
	rand(var_42_float, var_76_int); // 0x371 Func
	var_77_int = 1; // 0x373 PushI
	var_78_int = var_42_float + var_77_int; // 0x374 Add
	Sleep(var_78_int, var_43_bool); // 0x375 Func
	var_79_bool = var_43_bool == 0; // 0x377 Not
	if(var_79_bool == 0) goto Label_890; // 0x378 JumpB
	goto Label_905; // 0x379 Jump
	
Label_890:
	goto Label_894; // 0x37a Jump
	
Label_891:
	var_80_int = var_38_int; // 0x37b Push
	if(var_80_int == 0) goto Label_894; // 0x37c JumpB
	goto Label_905; // 0x37d Jump
}


func_1085(var_105_string, var_106_bool)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x43d PushV
	FindActor(var_108_object, var_105_string); // 0x43e Func
	var_109_bool = var_108_object == 0; // 0x440 Not
	if(var_109_bool == 0) goto Label_1097; // 0x441 JumpB
	var_110_string = "Door "; // 0x442 PushS
	var_111_int = var_110_string + var_105_string; // 0x443 Add
	var_112_string = " not found"; // 0x444 PushS
	var_113_int = var_111_int + var_112_string; // 0x445 Add
	Trace(var_113_int); // 0x446 Func
	goto Label_1100; // 0x448 Jump
	
Label_1100:
	return 2; // 0x44c Return
	
Label_1097:
	var_114_string = "locked"; // 0x449 PushS
	SetProperty(var_114_string, var_106_bool); // 0x44a ObjFunc
}


func_1214(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj(); // 0x4be PushV
	GetDiaryRoot(var_143_object); // 0x4bf Func
	var_144_bool = var_143_object == 0; // 0x4c1 Not
	if(var_144_bool == 0) goto Label_1224; // 0x4c2 JumpB
	var_145_string = "Can't retrieve diary root"; // 0x4c3 PushS
	Trace(var_145_string); // 0x4c4 Func
	var_141_object = 0; // 0x4c6 MovB
	return 2; // 0x4c7 Return
	
Label_1224:
	var_141_object = var_143_object; // 0x4c8 Mov
	return 2; // 0x4c9 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_172; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_1165(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_130; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_1120(); // 0x58 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0x5a PushV
	var_115_object = var_1_object; // 0x5b MovT
	var_116_object = var_0_object; // 0x5c MovT
	func_1159(); // 0x5d NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x5f PushV
	var_119_object = var_1_object; // 0x60 MovT
	var_120_object = var_0_object; // 0x61 MovT
	func_1127(); // 0x62 NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x64 PushV
	var_164_object = var_1_object; // 0x65 MovT
	var_165_object = var_0_object; // 0x66 MovT
	func_1102(); // 0x67 NEW_2
	var_168_string = ""; // 0x69 PushV
	var_168_string = "Neutral"; // 0x6a MovS
	func_202(var_89_object, var_168_string); // 0x6b NEW_2
	var_185_int = 522879; // 0x6d PushI
	SetMessage(var_185_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_186_int = 522880; // 0x72 PushI
	var_187_int = 24069; // 0x73 PushI
	var_188_int = 24068; // 0x74 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x75 TObjFunc
	var_189_int = 522898; // 0x77 PushI
	var_190_int = 24089; // 0x78 PushI
	var_191_int = 24088; // 0x79 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x7a TObjFunc
	var_192_int = 522900; // 0x7c PushI
	var_193_int = 24091; // 0x7d PushI
	var_194_int = 24090; // 0x7e PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x7f TObjFunc
	goto Label_172; // 0x81 Jump
	
Label_172:
	var_195_bool = 0; // 0xac PushV
	func_1297(var_195_bool); // 0xad NEW_2
	if(var_195_bool == 0) goto Label_187; // 0xaf JumpB
	
Label_176:
	lshWaitForAnimEnd(); // 0xb0 Func
	var_196_string = var_3_string; // 0xb2 PushT
	if(var_196_string == 0) goto Label_181; // 0xb3 JumpB
	goto Label_186; // 0xb4 Jump
	
Label_186:
	goto Label_201; // 0xba Jump
	
Label_201:
	return 0; // 0xc9 Return
	
Label_181:
	var_197_string = ""; // 0xb5 PushV
	var_197_string = var_2_object; // 0xb6 MovT
	func_1015(var_197_string); // 0xb7 NEW_2
	goto Label_176; // 0xb9 Jump
	
Label_187:
	var_208_string = "all"; // 0xbb PushS
	var_209_string = "idle"; // 0xbc PushS
	PlayAnimation(var_208_string, var_209_string); // 0xbd Func
	
Label_191:
	WaitForAnimEnd(); // 0xbf Func
	var_210_string = var_3_string; // 0xc1 PushT
	if(var_210_string == 0) goto Label_196; // 0xc2 JumpB
	goto Label_201; // 0xc3 Jump
	
Label_196:
	var_211_string = "all"; // 0xc4 PushS
	var_212_string = "idle"; // 0xc5 PushS
	PlayAnimation(var_211_string, var_212_string); // 0xc6 Func
	goto Label_191; // 0xc8 Jump
	
Label_130:
	var_213_string = ""; // 0x82 PushV
	var_213_string = "Neutral"; // 0x83 MovS
	func_202(var_89_object, var_213_string); // 0x84 NEW_2
	var_214_int = 540520; // 0x86 PushI
	SetMessage(var_214_int); // 0x87 TObjFunc
	ClearReplies(); // 0x89 TObjFunc
	var_215_bool = 0; var_216_object = Obj(); // 0x8b PushV
	var_216_object = var_1_object; // 0x8c MovT
	func_1177(var_216_object); // 0x8d NEW_2
	if(var_215_bool == 0) goto Label_149; // 0x8f JumpB
	var_221_int = 540521; // 0x90 PushI
	var_222_int = 42529; // 0x91 PushI
	var_223_int = 42528; // 0x92 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x93 TObjFunc
	
Label_149:
	var_224_bool = 0; var_225_object = Obj(); // 0x95 PushV
	var_225_object = var_1_object; // 0x96 MovT
	func_1189(var_225_object); // 0x97 NEW_2
	if(var_224_bool == 0) goto Label_159; // 0x99 JumpB
	var_230_int = 540531; // 0x9a PushI
	var_231_int = 42540; // 0x9b PushI
	var_232_int = 42539; // 0x9c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x9d TObjFunc
	
Label_159:
	var_233_int = 540535; // 0x9f PushI
	var_234_int = -1; // 0xa0 PushI
	var_235_int = 42545; // 0xa1 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xa2 TObjFunc
	var_236_int = 523160; // 0xa4 PushI
	var_237_int = -1; // 0xa5 PushI
	var_238_int = 24362; // 0xa6 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xa7 TObjFunc
	goto Label_172; // 0xa9 Jump
}


func_202(var_2_object, var_168_string)
{
	var_169_bool = 0; // 0xcb PushV
	func_1297(var_169_bool); // 0xcc NEW_2
	var_170_bool = var_169_bool == 0; // 0xce Not
	if(var_170_bool == 0) goto Label_209; // 0xcf JumpB
	return 0; // 0xd0 Return
	
Label_209:
	var_171_bool = var_168_string == var_2_object; // 0xd1 Eq
	if(var_171_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_172_string = ""; var_173_bool = 0; // 0xd4 PushV
	var_172_string = var_168_string; // 0xd5 Mov
	var_174_string = ""; // 0xd6 PushS
	var_175_bool = var_168_string == var_174_string; // 0xd7 Eq
	if(var_175_bool == 0) goto Label_219; // 0xd8 JumpB
	var_173_bool = 0; // 0xd9 MovB
	goto Label_220; // 0xda Jump
	
Label_220:
	func_1031(var_172_string, var_173_bool); // 0xdc NEW_2
	var_2_object = var_168_string; // 0xde TMov
	return 0; // 0xdf Return
	
Label_219:
	var_173_bool = 1; // 0xdb MovB
}


func_1227(var_132_bool, var_133_object, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; var_138_object = Obj(); var_139_object = Obj(); var_140_int = 0; // 0x4cb PushV
	var_141_object = Obj(); // 0x4cc PushV
	func_1214(var_141_object); // 0x4cd NEW_2
	var_138_object = var_141_object; // 0x4ce Mov
	Find(var_134_int, var_139_object); // 0x4d0 ObjFunc
	var_146_bool = var_139_object == 0; // 0x4d2 Not
	if(var_146_bool == 0) goto Label_1242; // 0x4d3 JumpB
	var_147_string = "Can't find diary parent with id: "; // 0x4d4 PushS
	var_148_int = var_147_string + var_134_int; // 0x4d5 Add
	Trace(var_148_int); // 0x4d6 Func
	var_132_bool = 0; // 0x4d8 MovB
	return 6; // 0x4d9 Return
	
Label_1242:
	AddChild(var_133_object); // 0x4da ObjFunc
	var_149_int = 7; // 0x4dc PushI
	SendWorldWndMessage(var_149_int); // 0x4dd Func
	GetCategory(var_140_int); // 0x4df ObjFunc
	SetDiarySection(var_140_int); // 0x4e1 Func
	var_132_bool = 0; // 0x4e3 MovB
	return 6; // 0x4e4 Return
}


func_1102()
{
	var_166_string = "oob12Littleboy1"; // 0x44f PushS
	var_167_int = 1; // 0x450 PushI
	SetVariable(var_166_string, var_167_int); // 0x451 Func
	return 0; // 0x453 Return
}


func_1108()
{
	var_20_string = "oob12Littleboy2"; // 0x455 PushS
	var_21_int = 1; // 0x456 PushI
	SetVariable(var_20_string, var_21_int); // 0x457 Func
	return 0; // 0x459 Return
}


func_1114()
{
	var_26_string = "oob12Littleboy3"; // 0x45b PushS
	var_27_int = 1; // 0x45c PushI
	SetVariable(var_26_string, var_27_int); // 0x45d Func
	return 0; // 0x45f Return
}


func_1120()
{
	var_105_string = ""; var_106_bool = 0; // 0x461 PushV
	var_105_string = "mnogogrannik@door2"; // 0x462 MovS
	var_106_bool = 0; // 0x463 MovB
	func_1085(var_105_string, var_106_bool); // 0x464 NEW_2
	return 0; // 0x466 Return
}


func_997()
{
	var_241_bool = 0; var_242_bool = 0; // 0x3e5 PushV
	var_243_bool = 1; // 0x3e6 PushB
	CameraSwitchToNormal(var_243_bool); // 0x3e7 Func
	var_244_bool = 0; // 0x3e9 PushV
	func_1297(var_244_bool); // 0x3ea NEW_2
	if(var_244_bool == 0) goto Label_1006; // 0x3ec JumpB
	goto Label_1014; // 0x3ed Jump
	
Label_1014:
	return 2; // 0x3f6 Return
	
Label_1006:
	var_245_string = "head"; // 0x3ee PushS
	HasAnimationTrack(var_242_bool, var_245_string); // 0x3ef Func
	var_246_bool = var_242_bool; // 0x3f1 Push
	if(var_246_bool == 0) goto Label_1014; // 0x3f2 JumpB
	var_247_string = "head"; // 0x3f3 PushS
	UnlookAsync(var_247_string); // 0x3f4 Func
}


func_1127()
{
	var_121_int = 0; var_122_string = ""; // 0x468 PushV
	var_122_string = "B_Mission5"; // 0x469 MovS
	func_1080(var_121_int, var_122_string); // 0x46a NEW_2
	var_123_int = 0; // 0x46c PushI
	var_124_bool = var_121_int == var_123_int; // 0x46d Eq
	if(var_124_bool == 0) goto Label_1158; // 0x46e JumpB
	var_125_string = "B_Mission5"; // 0x46f PushS
	var_126_int = 1; // 0x470 PushI
	SetVariable(var_125_string, var_126_int); // 0x471 Func
	func_1201(); // 0x474 NEW_2
	var_150_bool = 0; var_151_int = 0; // 0x476 PushV
	var_151_int = 562; // 0x477 MovI
	func_1255(var_150_bool, var_151_int); // 0x478 NEW_2
	var_158_bool = 0; var_159_int = 0; // 0x47a PushV
	var_159_int = 563; // 0x47b MovI
	func_1255(var_158_bool, var_159_int); // 0x47c NEW_2
	var_160_bool = 0; var_161_int = 0; // 0x47e PushV
	var_161_int = 564; // 0x47f MovI
	func_1255(var_160_bool, var_161_int); // 0x480 NEW_2
	var_162_bool = 0; var_163_int = 0; // 0x482 PushV
	var_163_int = 565; // 0x483 MovI
	func_1255(var_162_bool, var_163_int); // 0x484 NEW_2
	
Label_1158:
	return 0; // 0x486 Return
}


func_1255(var_150_bool, var_151_int)
{
	var_152_object = Obj(); var_153_object = Obj(); var_154_object = Obj(); var_155_object = Obj(); // 0x4e7 PushV
	var_156_object = Obj(); // 0x4e8 PushV
	func_1214(var_156_object); // 0x4e9 NEW_2
	var_154_object = var_156_object; // 0x4ea Mov
	Find(var_151_int, var_155_object); // 0x4ec ObjFunc
	var_157_bool = var_155_object == 0; // 0x4ee Not
	if(var_157_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_150_bool = 0; // 0x4f0 MovB
	return 4; // 0x4f1 Return
	
Label_1266:
	Remove(); // 0x4f2 ObjFunc
	var_150_bool = 1; // 0x4f4 MovB
	return 4; // 0x4f5 Return
}


func_748(var_18_bool)
{
	var_18_bool = 1; // 0x2ec MovB
	return 0; // 0x2ed Return
}


func_750(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x2ef PushV
	func_923(var_23_bool); // 0x2f0 NEW_2
	var_26_bool = var_23_bool == 0; // 0x2f2 Not
	if(var_26_bool == 0) goto Label_757; // 0x2f3 JumpB
	return 0; // 0x2f4 Return
	
Label_757:
	var_27_string = "player"; // 0x2f5 PushS
	FindActor(var_17_bool, var_27_string); // 0x2f6 Func
	var_2_object = 0; // 0x2f8 TMovB
	var_3_string = 0; // 0x2f9 TMovB
	var_0_object = var_21_float; // 0x2fa TMov
	var_1_object = var_22_float; // 0x2fb TMov
	var_28_int = 10; // 0x2fc PushI
	var_29_float = 1.0; // 0x2fd PushF
	SetTimer(var_28_int, var_29_float); // 0x2fe Func
	func_829(); // 0x301 NEW_2
	var_81_bool = var_3_string == 0; // 0x303 Not
	if(var_81_bool == 0) goto Label_776; // 0x304 JumpB
	var_82_int = 10; // 0x305 PushI
	KillTimer(var_82_int); // 0x306 Func
	
Label_776:
	return 0; // 0x308 Return
}


func_1015(var_197_string)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x3f7 PushV
	lshHasAnimation(var_201_bool, var_197_string); // 0x3f8 Func
	var_204_bool = var_201_bool; // 0x3fa Push
	if(var_204_bool == 0) goto Label_1026; // 0x3fb JumpB
	lshGetAnimTimes(var_197_string, var_202_float, var_203_float); // 0x3fc Func
	var_205_bool = 0; // 0x3fe PushB
	lshPlayAnimation(var_202_float, var_203_float, var_205_bool); // 0x3ff Func
	goto Label_1030; // 0x401 Jump
	
Label_1030:
	return 6; // 0x406 Return
	
Label_1026:
	var_206_string = "Can't find lsh animation : "; // 0x402 PushS
	var_207_int = var_206_string + var_197_string; // 0x403 Add
	Trace(var_207_int); // 0x404 Func
}


func_1272(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x4f8 PushV
	var_82_string = "branch"; // 0x4f9 PushS
	GetVariable(var_82_string, var_81_int); // 0x4fa Func
	var_83_int = 0; // 0x4fc PushI
	var_84_bool = var_81_int == var_83_int; // 0x4fd Eq
	if(var_84_bool == 0) goto Label_1282; // 0x4fe JumpB
	var_79_int = 1; // 0x4ff MovI
	return 2; // 0x500 Return
	
Label_1282:
	var_85_int = 1; // 0x502 PushI
	var_86_bool = var_81_int == var_85_int; // 0x503 Eq
	if(var_86_bool == 0) goto Label_1287; // 0x504 JumpB
	var_79_int = 2; // 0x505 MovI
	return 2; // 0x506 Return
	
Label_1287:
	var_79_int = 3; // 0x507 MovI
	return 2; // 0x508 Return
}


