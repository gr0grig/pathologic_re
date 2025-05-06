task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xe1 PushI
	if(var_14_int == 0) goto Label_663; // 0xe2 JumpB
	func_1055(); // 0xe4 NEW_2
	var_16_int = 42528; // 0xe6 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xe7 Eq
	if(var_17_bool == 0) goto Label_238; // 0xe8 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xe9 PushV
	var_18_object = var_1_object; // 0xea MovT
	var_19_object = var_0_object; // 0xeb MovT
	func_1106(); // 0xec NEW_2
	
Label_238:
	var_22_int = 42539; // 0xee PushI
	var_23_bool = var_13_bool == var_22_int; // 0xef Eq
	if(var_23_bool == 0) goto Label_246; // 0xf0 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xf1 PushV
	var_24_object = var_1_object; // 0xf2 MovT
	var_25_object = var_0_object; // 0xf3 MovT
	func_1112(); // 0xf4 NEW_2
	
Label_246:
	var_28_int = 24067; // 0xf6 PushI
	var_29_bool = var_12_bool == var_28_int; // 0xf7 Eq
	if(var_29_bool == 0) goto Label_339; // 0xf8 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0xf9 PushV
	var_31_object = var_1_object; // 0xfa MovT
	func_1163(var_31_object); // 0xfb NEW_2
	if(var_30_bool == 0) goto Label_299; // 0xfd JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0xfe PushV
	var_38_object = var_1_object; // 0xff MovT
	var_39_object = var_0_object; // 0x100 MovT
	func_1118(); // 0x101 NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0x103 PushV
	var_50_object = var_1_object; // 0x104 MovT
	var_51_object = var_0_object; // 0x105 MovT
	func_1157(); // 0x106 NEW_2
	var_54_object = Obj(); var_55_object = Obj(); // 0x108 PushV
	var_54_object = var_1_object; // 0x109 MovT
	var_55_object = var_0_object; // 0x10a MovT
	func_1125(); // 0x10b NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x10d PushV
	var_99_object = var_1_object; // 0x10e MovT
	var_100_object = var_0_object; // 0x10f MovT
	func_1100(); // 0x110 NEW_2
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
	func_1175(var_133_object); // 0x136 NEW_2
	if(var_132_bool == 0) goto Label_318; // 0x138 JumpB
	var_138_int = 540521; // 0x139 PushI
	var_139_int = 42529; // 0x13a PushI
	var_140_int = 42528; // 0x13b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x13c TObjFunc
	
Label_318:
	var_141_bool = 0; var_142_object = Obj(); // 0x13e PushV
	var_142_object = var_1_object; // 0x13f MovT
	func_1187(var_142_object); // 0x140 NEW_2
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
	func_1295(var_290_bool); // 0x28d NEW_2
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
	func_1062(var_19_object); // 0x2e7 NEW_2
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
	func_1044(var_29_object); // 0x324 NEW_2
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
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_1289(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_1287(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_1291(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_1293(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_1270(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_238_bool = var_26_bool == 0; // 0x38 Not
	if(var_238_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_239_object = Obj(); // 0x3f PushV
	var_239_object = var_17_object; // 0x40 Mov
	func_996(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1029(var_171_string, var_172_bool)
{
	var_175_bool = 0; var_176_float = 0; var_177_float = 0; var_178_bool = 0; var_179_float = 0; var_180_float = 0; // 0x405 PushV
	lshHasAnimation(var_178_bool, var_171_string); // 0x406 Func
	var_181_bool = var_178_bool; // 0x408 Push
	if(var_181_bool == 0) goto Label_1039; // 0x409 JumpB
	lshGetAnimTimes(var_171_string, var_179_float, var_180_float); // 0x40a Func
	lshPlayAnimation(var_179_float, var_180_float, var_172_bool); // 0x40c Func
	goto Label_1043; // 0x40e Jump
	
Label_1043:
	return 6; // 0x413 Return
	
Label_1039:
	var_182_string = "Can't find lsh animation : "; // 0x40f PushS
	var_183_int = var_182_string + var_171_string; // 0x410 Add
	Trace(var_183_int); // 0x411 Func
}


func_1157()
{
	var_116_string = "b12q01ChildsAreVisited"; // 0x486 PushS
	var_117_int = 1; // 0x487 PushI
	SetVariable(var_116_string, var_117_int); // 0x488 Func
	return 0; // 0x48a Return
}


func_1287(var_75_int)
{
	var_75_int = 515560; // 0x507 MovI
	return 0; // 0x508 Return
}


func_1289(var_74_int)
{
	var_74_int = 503345; // 0x509 MovI
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


func_1291(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png"; // 0x50b MovS
	return 0; // 0x50c Return
}


func_1163(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x48c PushV
	var_97_string = "oob12Littleboy1"; // 0x48d MovS
	func_1078(var_96_int, var_97_string); // 0x48e NEW_2
	var_100_int = 0; // 0x490 PushI
	var_101_bool = var_96_int == var_100_int; // 0x491 Eq
	if(var_101_bool == 0) goto Label_1173; // 0x492 JumpB
	var_94_bool = 1; // 0x493 MovB
	return 0; // 0x494 Return
	
Label_1173:
	var_94_bool = 0; // 0x495 MovB
	return 0; // 0x496 Return
}


func_1293(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png"; // 0x50d MovS
	return 0; // 0x50e Return
}


func_910()
{
	StopAnimation(); // 0x38e Func
	StopGroup0(); // 0x390 Func
	return 0; // 0x392 Return
}


func_1295(var_69_bool)
{
	var_69_bool = 0; // 0x50f MovB
	return 0; // 0x510 Return
}


func_908(var_71_bool)
{
	var_71_bool = 1; // 0x38c MovB
	return 0; // 0x38d Return
}


func_1297(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x511 PushV
	var_55_string = "idle"; // 0x512 MovS
	var_56_int = var_53_int; // 0x513 Push
	if(var_56_int == 0) goto Label_1302; // 0x514 JumpB
	var_55_string = var_55_string + var_53_int; // 0x515 Add2
	
Label_1302:
	var_52_string = var_55_string; // 0x516 Mov
	return 2; // 0x517 Return
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


func_1044(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x414 PushV
	GetEyesHeight(var_32_float); // 0x415 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x417 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x418 PushE
	var_34_float = var_32_float; // 0x419 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x41a PopE
	var_35_string = "head"; // 0x41b PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x41c Func
	return 4; // 0x41e Return
}


func_1175(var_214_bool)
{
	var_216_int = 0; var_217_string = ""; // 0x498 PushV
	var_217_string = "oob12Littleboy2"; // 0x499 MovS
	func_1078(var_216_int, var_217_string); // 0x49a NEW_2
	var_218_int = 0; // 0x49c PushI
	var_219_bool = var_216_int == var_218_int; // 0x49d Eq
	if(var_219_bool == 0) goto Label_1185; // 0x49e JumpB
	var_214_bool = 1; // 0x49f MovB
	return 0; // 0x4a0 Return
	
Label_1185:
	var_214_bool = 0; // 0x4a1 MovB
	return 0; // 0x4a2 Return
}


func_1304(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x518 PushV
	var_49_int = 0; // 0x519 MovI
	
Label_1306:
	var_51_string = "all"; // 0x51a PushS
	var_52_string = ""; var_53_int = 0; // 0x51b PushV
	var_53_int = var_49_int; // 0x51c Mov
	func_1297(var_52_string, var_53_int); // 0x51d NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x51f Func
	var_57_bool = var_50_bool == 0; // 0x521 Not
	if(var_57_bool == 0) goto Label_1316; // 0x522 JumpB
	goto Label_1319; // 0x523 Jump
	
Label_1319:
	var_46_int = var_49_int; // 0x527 Mov
	return 4; // 0x528 Return
	
Label_1316:
	var_58_int = 1; // 0x524 PushI
	var_49_int = var_49_int + var_58_int; // 0x525 Add2
	goto Label_1306; // 0x526 Jump
}


func_923(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x39b PushV
	IsLoaded(var_25_bool); // 0x39c Func
	var_23_bool = var_25_bool; // 0x39e Mov
	return 2; // 0x39f Return
}


func_1055()
{
	var_15_bool = 0; // 0x41f PushV
	func_1295(var_15_bool); // 0x420 NEW_2
	if(var_15_bool == 0) goto Label_1061; // 0x422 JumpB
	lshStopSpeech(); // 0x423 Func
	
Label_1061:
	return 0; // 0x425 Return
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
	func_1068(var_54_cvector, var_55_cvector); // 0x3bb NEW_2
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
	CameraTransit(var_45_cvector, var_43_cvector); // 0x3cb Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x3cd PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x3ce PushE
	Rotate(var_67_float, var_68_float); // 0x3cf Func
	var_69_bool = 0; // 0x3d1 PushV
	func_1295(var_69_bool); // 0x3d2 NEW_2
	if(var_69_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_990; // 0x3d5 Jump
	
Label_990:
	CameraWaitForPlayFinish(); // 0x3de Func
	ResumeWorld(); // 0x3e0 Func
	var_27_bool = 1; // 0x3e2 MovB
	return 18; // 0x3e3 Return
	
Label_982:
	var_70_string = "head"; // 0x3d6 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x3d7 Func
	var_71_bool = var_47_bool; // 0x3d9 Push
	if(var_71_bool == 0) goto Label_990; // 0x3da JumpB
	var_72_string = "head"; // 0x3db PushS
	LookAsyncCamera(var_72_string); // 0x3dc Func
}


func_1187(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x4a4 PushV
	var_226_string = "oob12Littleboy3"; // 0x4a5 MovS
	func_1078(var_225_int, var_226_string); // 0x4a6 NEW_2
	var_227_int = 0; // 0x4a8 PushI
	var_228_bool = var_225_int == var_227_int; // 0x4a9 Eq
	if(var_228_bool == 0) goto Label_1197; // 0x4aa JumpB
	var_223_bool = 1; // 0x4ab MovB
	return 0; // 0x4ac Return
	
Label_1197:
	var_223_bool = 0; // 0x4ad MovB
	return 0; // 0x4ae Return
}


func_1062(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x426 PushV
	self(var_21_object); // 0x427 Func
	var_19_object = var_21_object; // 0x429 Mov
	return 2; // 0x42a Return
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


func_1068(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x42c PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x42d Or
	var_58_float = sqrt(var_59_int); // 0x42e Sqrt2
	var_60_float = 0.0; // 0x42f PushF
	var_61_bool = var_58_float < var_60_float; // 0x430 LT
	if(var_61_bool == 0) goto Label_1076; // 0x431 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x432 MovV
	return 2; // 0x433 Return
	
Label_1076:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x434 Div2
	return 2; // 0x435 Return
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


func_1199()
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x4af PushV
	var_128_int = 566; // 0x4b0 PushI
	var_129_int = 0; // 0x4b1 PushI
	var_130_int = 530580; // 0x4b2 PushI
	CreateDiaryEntry(var_127_object, var_128_int, var_129_int, var_130_int); // 0x4b3 Func
	var_131_bool = 0; var_132_object = Obj(); var_133_int = 0; // 0x4b5 PushV
	var_132_object = var_127_object; // 0x4b6 Mov
	var_133_int = -1; // 0x4b7 MovI
	func_1225(var_131_bool, var_132_object, var_133_int); // 0x4b8 NEW_2
	return 2; // 0x4ba Return
}


func_1078(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x436 PushV
	GetVariable(var_97_string, var_99_int); // 0x437 Func
	var_96_int = var_99_int; // 0x439 Mov
	return 2; // 0x43a Return
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
	func_1062(var_21_object); // 0x2ca NEW_2
	RemoveActor(var_21_object); // 0x2cc Func
	
Label_718:
	return 0; // 0x2ce Return
}


func_1083(var_104_string, var_105_bool)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x43b PushV
	FindActor(var_107_object, var_104_string); // 0x43c Func
	var_108_bool = var_107_object == 0; // 0x43e Not
	if(var_108_bool == 0) goto Label_1095; // 0x43f JumpB
	var_109_string = "Door "; // 0x440 PushS
	var_110_int = var_109_string + var_104_string; // 0x441 Add
	var_111_string = " not found"; // 0x442 PushS
	var_112_int = var_110_int + var_111_string; // 0x443 Add
	Trace(var_112_int); // 0x444 Func
	goto Label_1098; // 0x446 Jump
	
Label_1098:
	return 2; // 0x44a Return
	
Label_1095:
	var_113_string = "locked"; // 0x447 PushS
	SetProperty(var_113_string, var_105_bool); // 0x448 ObjFunc
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
	func_1304(var_46_int); // 0x347 NEW_2
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
	func_1297(var_68_string, var_69_int); // 0x363 NEW_2
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


func_1212(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj(); // 0x4bc PushV
	GetDiaryRoot(var_142_object); // 0x4bd Func
	var_143_bool = var_142_object == 0; // 0x4bf Not
	if(var_143_bool == 0) goto Label_1222; // 0x4c0 JumpB
	var_144_string = "Can't retrieve diary root"; // 0x4c1 PushS
	Trace(var_144_string); // 0x4c2 Func
	var_140_object = 0; // 0x4c4 MovB
	return 2; // 0x4c5 Return
	
Label_1222:
	var_140_object = var_142_object; // 0x4c6 Mov
	return 2; // 0x4c7 Return
}


func_1225(var_131_bool, var_132_object, var_133_int)
{
	var_134_object = Obj(); var_135_object = Obj(); var_136_int = 0; var_137_object = Obj(); var_138_object = Obj(); var_139_int = 0; // 0x4c9 PushV
	var_140_object = Obj(); // 0x4ca PushV
	func_1212(var_140_object); // 0x4cb NEW_2
	var_137_object = var_140_object; // 0x4cc Mov
	Find(var_133_int, var_138_object); // 0x4ce ObjFunc
	var_145_bool = var_138_object == 0; // 0x4d0 Not
	if(var_145_bool == 0) goto Label_1240; // 0x4d1 JumpB
	var_146_string = "Can't find diary parent with id: "; // 0x4d2 PushS
	var_147_int = var_146_string + var_133_int; // 0x4d3 Add
	Trace(var_147_int); // 0x4d4 Func
	var_131_bool = 0; // 0x4d6 MovB
	return 6; // 0x4d7 Return
	
Label_1240:
	AddChild(var_132_object); // 0x4d8 ObjFunc
	var_148_int = 7; // 0x4da PushI
	SendWorldWndMessage(var_148_int); // 0x4db Func
	GetCategory(var_139_int); // 0x4dd ObjFunc
	SetDiarySection(var_139_int); // 0x4df Func
	var_131_bool = 0; // 0x4e1 MovB
	return 6; // 0x4e2 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_172; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_1163(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_130; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_1118(); // 0x58 NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0x5a PushV
	var_114_object = var_1_object; // 0x5b MovT
	var_115_object = var_0_object; // 0x5c MovT
	func_1157(); // 0x5d NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x5f PushV
	var_118_object = var_1_object; // 0x60 MovT
	var_119_object = var_0_object; // 0x61 MovT
	func_1125(); // 0x62 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x64 PushV
	var_163_object = var_1_object; // 0x65 MovT
	var_164_object = var_0_object; // 0x66 MovT
	func_1100(); // 0x67 NEW_2
	var_167_string = ""; // 0x69 PushV
	var_167_string = "Neutral"; // 0x6a MovS
	func_202(var_88_object, var_167_string); // 0x6b NEW_2
	var_184_int = 522879; // 0x6d PushI
	SetMessage(var_184_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_185_int = 522880; // 0x72 PushI
	var_186_int = 24069; // 0x73 PushI
	var_187_int = 24068; // 0x74 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x75 TObjFunc
	var_188_int = 522898; // 0x77 PushI
	var_189_int = 24089; // 0x78 PushI
	var_190_int = 24088; // 0x79 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x7a TObjFunc
	var_191_int = 522900; // 0x7c PushI
	var_192_int = 24091; // 0x7d PushI
	var_193_int = 24090; // 0x7e PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x7f TObjFunc
	goto Label_172; // 0x81 Jump
	
Label_172:
	var_194_bool = 0; // 0xac PushV
	func_1295(var_194_bool); // 0xad NEW_2
	if(var_194_bool == 0) goto Label_187; // 0xaf JumpB
	
Label_176:
	lshWaitForAnimEnd(); // 0xb0 Func
	var_195_string = var_3_string; // 0xb2 PushT
	if(var_195_string == 0) goto Label_181; // 0xb3 JumpB
	goto Label_186; // 0xb4 Jump
	
Label_186:
	goto Label_201; // 0xba Jump
	
Label_201:
	return 0; // 0xc9 Return
	
Label_181:
	var_196_string = ""; // 0xb5 PushV
	var_196_string = var_2_object; // 0xb6 MovT
	func_1013(var_196_string); // 0xb7 NEW_2
	goto Label_176; // 0xb9 Jump
	
Label_187:
	var_207_string = "all"; // 0xbb PushS
	var_208_string = "idle"; // 0xbc PushS
	PlayAnimation(var_207_string, var_208_string); // 0xbd Func
	
Label_191:
	WaitForAnimEnd(); // 0xbf Func
	var_209_string = var_3_string; // 0xc1 PushT
	if(var_209_string == 0) goto Label_196; // 0xc2 JumpB
	goto Label_201; // 0xc3 Jump
	
Label_196:
	var_210_string = "all"; // 0xc4 PushS
	var_211_string = "idle"; // 0xc5 PushS
	PlayAnimation(var_210_string, var_211_string); // 0xc6 Func
	goto Label_191; // 0xc8 Jump
	
Label_130:
	var_212_string = ""; // 0x82 PushV
	var_212_string = "Neutral"; // 0x83 MovS
	func_202(var_88_object, var_212_string); // 0x84 NEW_2
	var_213_int = 540520; // 0x86 PushI
	SetMessage(var_213_int); // 0x87 TObjFunc
	ClearReplies(); // 0x89 TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x8b PushV
	var_215_object = var_1_object; // 0x8c MovT
	func_1175(var_215_object); // 0x8d NEW_2
	if(var_214_bool == 0) goto Label_149; // 0x8f JumpB
	var_220_int = 540521; // 0x90 PushI
	var_221_int = 42529; // 0x91 PushI
	var_222_int = 42528; // 0x92 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x93 TObjFunc
	
Label_149:
	var_223_bool = 0; var_224_object = Obj(); // 0x95 PushV
	var_224_object = var_1_object; // 0x96 MovT
	func_1187(var_224_object); // 0x97 NEW_2
	if(var_223_bool == 0) goto Label_159; // 0x99 JumpB
	var_229_int = 540531; // 0x9a PushI
	var_230_int = 42540; // 0x9b PushI
	var_231_int = 42539; // 0x9c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x9d TObjFunc
	
Label_159:
	var_232_int = 540535; // 0x9f PushI
	var_233_int = -1; // 0xa0 PushI
	var_234_int = 42545; // 0xa1 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xa2 TObjFunc
	var_235_int = 523160; // 0xa4 PushI
	var_236_int = -1; // 0xa5 PushI
	var_237_int = 24362; // 0xa6 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xa7 TObjFunc
	goto Label_172; // 0xa9 Jump
}


func_202(var_2_object, var_167_string)
{
	var_168_bool = 0; // 0xcb PushV
	func_1295(var_168_bool); // 0xcc NEW_2
	var_169_bool = var_168_bool == 0; // 0xce Not
	if(var_169_bool == 0) goto Label_209; // 0xcf JumpB
	return 0; // 0xd0 Return
	
Label_209:
	var_170_bool = var_167_string == var_2_object; // 0xd1 Eq
	if(var_170_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_171_string = ""; var_172_bool = 0; // 0xd4 PushV
	var_171_string = var_167_string; // 0xd5 Mov
	var_173_string = ""; // 0xd6 PushS
	var_174_bool = var_167_string == var_173_string; // 0xd7 Eq
	if(var_174_bool == 0) goto Label_219; // 0xd8 JumpB
	var_172_bool = 0; // 0xd9 MovB
	goto Label_220; // 0xda Jump
	
Label_220:
	func_1029(var_171_string, var_172_bool); // 0xdc NEW_2
	var_2_object = var_167_string; // 0xde TMov
	return 0; // 0xdf Return
	
Label_219:
	var_172_bool = 1; // 0xdb MovB
}


func_1100()
{
	var_165_string = "oob12Littleboy1"; // 0x44d PushS
	var_166_int = 1; // 0x44e PushI
	SetVariable(var_165_string, var_166_int); // 0x44f Func
	return 0; // 0x451 Return
}


func_1106()
{
	var_20_string = "oob12Littleboy2"; // 0x453 PushS
	var_21_int = 1; // 0x454 PushI
	SetVariable(var_20_string, var_21_int); // 0x455 Func
	return 0; // 0x457 Return
}


func_1112()
{
	var_26_string = "oob12Littleboy3"; // 0x459 PushS
	var_27_int = 1; // 0x45a PushI
	SetVariable(var_26_string, var_27_int); // 0x45b Func
	return 0; // 0x45d Return
}


func_1118()
{
	var_104_string = ""; var_105_bool = 0; // 0x45f PushV
	var_104_string = "mnogogrannik@door2"; // 0x460 MovS
	var_105_bool = 0; // 0x461 MovB
	func_1083(var_104_string, var_105_bool); // 0x462 NEW_2
	return 0; // 0x464 Return
}


func_996()
{
	var_240_bool = 0; var_241_bool = 0; // 0x3e4 PushV
	CameraSwitchToNormal(); // 0x3e5 Func
	var_242_bool = 0; // 0x3e7 PushV
	func_1295(var_242_bool); // 0x3e8 NEW_2
	if(var_242_bool == 0) goto Label_1004; // 0x3ea JumpB
	goto Label_1012; // 0x3eb Jump
	
Label_1012:
	return 2; // 0x3f4 Return
	
Label_1004:
	var_243_string = "head"; // 0x3ec PushS
	HasAnimationTrack(var_241_bool, var_243_string); // 0x3ed Func
	var_244_bool = var_241_bool; // 0x3ef Push
	if(var_244_bool == 0) goto Label_1012; // 0x3f0 JumpB
	var_245_string = "head"; // 0x3f1 PushS
	UnlookAsync(var_245_string); // 0x3f2 Func
}


func_1125()
{
	var_120_int = 0; var_121_string = ""; // 0x466 PushV
	var_121_string = "B_Mission5"; // 0x467 MovS
	func_1078(var_120_int, var_121_string); // 0x468 NEW_2
	var_122_int = 0; // 0x46a PushI
	var_123_bool = var_120_int == var_122_int; // 0x46b Eq
	if(var_123_bool == 0) goto Label_1156; // 0x46c JumpB
	var_124_string = "B_Mission5"; // 0x46d PushS
	var_125_int = 1; // 0x46e PushI
	SetVariable(var_124_string, var_125_int); // 0x46f Func
	func_1199(); // 0x472 NEW_2
	var_149_bool = 0; var_150_int = 0; // 0x474 PushV
	var_150_int = 562; // 0x475 MovI
	func_1253(var_149_bool, var_150_int); // 0x476 NEW_2
	var_157_bool = 0; var_158_int = 0; // 0x478 PushV
	var_158_int = 563; // 0x479 MovI
	func_1253(var_157_bool, var_158_int); // 0x47a NEW_2
	var_159_bool = 0; var_160_int = 0; // 0x47c PushV
	var_160_int = 564; // 0x47d MovI
	func_1253(var_159_bool, var_160_int); // 0x47e NEW_2
	var_161_bool = 0; var_162_int = 0; // 0x480 PushV
	var_162_int = 565; // 0x481 MovI
	func_1253(var_161_bool, var_162_int); // 0x482 NEW_2
	
Label_1156:
	return 0; // 0x484 Return
}


func_1253(var_149_bool, var_150_int)
{
	var_151_object = Obj(); var_152_object = Obj(); var_153_object = Obj(); var_154_object = Obj(); // 0x4e5 PushV
	var_155_object = Obj(); // 0x4e6 PushV
	func_1212(var_155_object); // 0x4e7 NEW_2
	var_153_object = var_155_object; // 0x4e8 Mov
	Find(var_150_int, var_154_object); // 0x4ea ObjFunc
	var_156_bool = var_154_object == 0; // 0x4ec Not
	if(var_156_bool == 0) goto Label_1264; // 0x4ed JumpB
	var_149_bool = 0; // 0x4ee MovB
	return 4; // 0x4ef Return
	
Label_1264:
	Remove(); // 0x4f0 ObjFunc
	var_149_bool = 1; // 0x4f2 MovB
	return 4; // 0x4f3 Return
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


func_1013(var_196_string)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x3f5 PushV
	lshHasAnimation(var_200_bool, var_196_string); // 0x3f6 Func
	var_203_bool = var_200_bool; // 0x3f8 Push
	if(var_203_bool == 0) goto Label_1024; // 0x3f9 JumpB
	lshGetAnimTimes(var_196_string, var_201_float, var_202_float); // 0x3fa Func
	var_204_bool = 0; // 0x3fc PushB
	lshPlayAnimation(var_201_float, var_202_float, var_204_bool); // 0x3fd Func
	goto Label_1028; // 0x3ff Jump
	
Label_1028:
	return 6; // 0x404 Return
	
Label_1024:
	var_205_string = "Can't find lsh animation : "; // 0x400 PushS
	var_206_int = var_205_string + var_196_string; // 0x401 Add
	Trace(var_206_int); // 0x402 Func
}


func_1270(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x4f6 PushV
	var_81_string = "branch"; // 0x4f7 PushS
	GetVariable(var_81_string, var_80_int); // 0x4f8 Func
	var_82_int = 0; // 0x4fa PushI
	var_83_bool = var_80_int == var_82_int; // 0x4fb Eq
	if(var_83_bool == 0) goto Label_1280; // 0x4fc JumpB
	var_78_int = 1; // 0x4fd MovI
	return 2; // 0x4fe Return
	
Label_1280:
	var_84_int = 1; // 0x500 PushI
	var_85_bool = var_80_int == var_84_int; // 0x501 Eq
	if(var_85_bool == 0) goto Label_1285; // 0x502 JumpB
	var_78_int = 2; // 0x503 MovI
	return 2; // 0x504 Return
	
Label_1285:
	var_78_int = 3; // 0x505 MovI
	return 2; // 0x506 Return
}


