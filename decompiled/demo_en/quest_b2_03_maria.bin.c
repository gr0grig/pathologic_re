task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xf7 PushI
	if(var_9_int == 0) goto Label_580; // 0xf8 JumpB
	func_1190(); // 0xfa NEW_2
	var_11_int = 32390; // 0xfc PushI
	var_12_bool = var_8_bool == var_11_int; // 0xfd Eq
	if(var_12_bool == 0) goto Label_260; // 0xfe JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xff PushV
	var_13_object = var_1_object; // 0x100 MovT
	var_14_object = var_0_object; // 0x101 MovT
	func_1338(); // 0x102 NEW_2
	
Label_260:
	var_48_int = 32396; // 0x104 PushI
	var_49_bool = var_8_bool == var_48_int; // 0x105 Eq
	if(var_49_bool == 0) goto Label_268; // 0x106 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0x107 PushV
	var_50_object = var_1_object; // 0x108 MovT
	var_51_object = var_0_object; // 0x109 MovT
	func_1338(); // 0x10a NEW_2
	
Label_268:
	var_52_int = 32574; // 0x10c PushI
	var_53_bool = var_8_bool == var_52_int; // 0x10d Eq
	if(var_53_bool == 0) goto Label_276; // 0x10e JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0x10f PushV
	var_54_object = var_1_object; // 0x110 MovT
	var_55_object = var_0_object; // 0x111 MovT
	func_1338(); // 0x112 NEW_2
	
Label_276:
	var_56_int = 32398; // 0x114 PushI
	var_57_bool = var_8_bool == var_56_int; // 0x115 Eq
	if(var_57_bool == 0) goto Label_299; // 0x116 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x117 PushV
	var_58_object = var_1_object; // 0x118 MovT
	var_59_object = var_0_object; // 0x119 MovT
	func_1350(); // 0x11a NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x11c PushV
	var_76_object = var_1_object; // 0x11d MovT
	var_77_object = var_0_object; // 0x11e MovT
	func_1375(var_77_object); // 0x11f NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x121 PushV
	var_97_object = var_1_object; // 0x122 MovT
	var_98_object = var_0_object; // 0x123 MovT
	func_1364(var_98_object); // 0x124 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x126 PushV
	var_118_object = var_1_object; // 0x127 MovT
	var_119_object = var_0_object; // 0x128 MovT
	func_1326(); // 0x129 NEW_2
	
Label_299:
	var_122_int = 32573; // 0x12b PushI
	var_123_bool = var_8_bool == var_122_int; // 0x12c Eq
	if(var_123_bool == 0) goto Label_322; // 0x12d JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x12e PushV
	var_124_object = var_1_object; // 0x12f MovT
	var_125_object = var_0_object; // 0x130 MovT
	func_1350(); // 0x131 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x133 PushV
	var_126_object = var_1_object; // 0x134 MovT
	var_127_object = var_0_object; // 0x135 MovT
	func_1375(var_127_object); // 0x136 NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0x138 PushV
	var_128_object = var_1_object; // 0x139 MovT
	var_129_object = var_0_object; // 0x13a MovT
	func_1364(var_129_object); // 0x13b NEW_2
	var_130_object = Obj(); var_131_object = Obj(); // 0x13d PushV
	var_130_object = var_1_object; // 0x13e MovT
	var_131_object = var_0_object; // 0x13f MovT
	func_1326(); // 0x140 NEW_2
	
Label_322:
	var_132_int = 32388; // 0x142 PushI
	var_133_bool = var_7_cvector == var_132_int; // 0x143 Eq
	if(var_133_bool == 0) goto Label_430; // 0x144 JumpB
	var_134_bool = 0; // 0x145 PushV
	var_134_bool = 0; // 0x146 MovB
	var_135_bool = 0; var_136_object = Obj(); // 0x147 PushV
	var_136_object = var_1_object; // 0x148 MovT
	func_1397(var_136_object); // 0x149 NEW_2
	if(var_135_bool == 0) goto Label_339; // 0x14b JumpB
	var_143_bool = 0; var_144_object = Obj(); // 0x14c PushV
	var_144_object = var_1_object; // 0x14d MovT
	func_1385(var_144_object); // 0x14e NEW_2
	var_149_bool = var_143_bool == 0; // 0x150 Not
	if(var_149_bool == 0) goto Label_339; // 0x151 JumpB
	var_134_bool = 1; // 0x152 MovB
	
Label_339:
	if(var_134_bool == 0) goto Label_365; // 0x153 JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x154 PushV
	var_150_object = var_1_object; // 0x155 MovT
	var_151_object = var_0_object; // 0x156 MovT
	func_1332(); // 0x157 NEW_2
	var_154_string = ""; // 0x159 PushV
	var_154_string = "Staring"; // 0x15a MovS
	func_224(var_8_bool, var_154_string); // 0x15b NEW_2
	var_171_int = 531063; // 0x15d PushI
	SetMessage(var_171_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_172_int = 531064; // 0x162 PushI
	var_173_int = 32569; // 0x163 PushI
	var_174_int = 32389; // 0x164 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x165 TObjFunc
	var_175_int = 531269; // 0x167 PushI
	var_176_int = 32569; // 0x168 PushI
	var_177_int = 32581; // 0x169 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_178_bool = 0; var_179_object = Obj(); // 0x16d PushV
	var_179_object = var_1_object; // 0x16e MovT
	func_1385(var_179_object); // 0x16f NEW_2
	if(var_178_bool == 0) goto Label_390; // 0x171 JumpB
	var_180_string = ""; // 0x172 PushV
	var_180_string = "Angry"; // 0x173 MovS
	func_224(var_8_bool, var_180_string); // 0x174 NEW_2
	var_181_int = 531077; // 0x176 PushI
	SetMessage(var_181_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_182_int = 531078; // 0x17b PushI
	var_183_int = -1; // 0x17c PushI
	var_184_int = 32400; // 0x17d PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x17e TObjFunc
	var_185_int = 531255; // 0x180 PushI
	var_186_int = -1; // 0x181 PushI
	var_187_int = 32571; // 0x182 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_188_string = ""; // 0x186 PushV
	var_188_string = "Mysterious"; // 0x187 MovS
	func_224(var_8_bool, var_188_string); // 0x188 NEW_2
	var_189_int = 531066; // 0x18a PushI
	SetMessage(var_189_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_190_bool = 0; var_191_object = Obj(); // 0x18f PushV
	var_191_object = var_1_object; // 0x190 MovT
	func_1409(var_191_object); // 0x191 NEW_2
	if(var_190_bool == 0) goto Label_409; // 0x193 JumpB
	var_196_int = 531067; // 0x194 PushI
	var_197_int = 32395; // 0x195 PushI
	var_198_int = 32392; // 0x196 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x197 TObjFunc
	
Label_409:
	var_199_bool = 0; var_200_object = Obj(); // 0x199 PushV
	var_200_object = var_1_object; // 0x19a MovT
	func_1421(var_200_object); // 0x19b NEW_2
	if(var_199_bool == 0) goto Label_419; // 0x19d JumpB
	var_205_int = 531068; // 0x19e PushI
	var_206_int = 32397; // 0x19f PushI
	var_207_int = 32393; // 0x1a0 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1a1 TObjFunc
	
Label_419:
	var_208_int = 531069; // 0x1a3 PushI
	var_209_int = -1; // 0x1a4 PushI
	var_210_int = 32394; // 0x1a5 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1a6 TObjFunc
	var_211_int = 531256; // 0x1a8 PushI
	var_212_int = -1; // 0x1a9 PushI
	var_213_int = 32572; // 0x1aa PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_214_int = 32397; // 0x1ae PushI
	var_215_bool = var_7_cvector == var_214_int; // 0x1af Eq
	if(var_215_bool == 0) goto Label_453; // 0x1b0 JumpB
	var_216_string = ""; // 0x1b1 PushV
	var_216_string = "Staring"; // 0x1b2 MovS
	func_224(var_8_bool, var_216_string); // 0x1b3 NEW_2
	var_217_int = 531072; // 0x1b5 PushI
	SetMessage(var_217_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_218_int = 531073; // 0x1ba PushI
	var_219_int = -1; // 0x1bb PushI
	var_220_int = 32398; // 0x1bc PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1bd TObjFunc
	var_221_int = 531257; // 0x1bf PushI
	var_222_int = -1; // 0x1c0 PushI
	var_223_int = 32573; // 0x1c1 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1c2 TObjFunc
	return 0; // 0x1c4 Return
	
Label_453:
	var_224_int = 32395; // 0x1c5 PushI
	var_225_bool = var_7_cvector == var_224_int; // 0x1c6 Eq
	if(var_225_bool == 0) goto Label_476; // 0x1c7 JumpB
	var_226_string = ""; // 0x1c8 PushV
	var_226_string = "Staring"; // 0x1c9 MovS
	func_224(var_8_bool, var_226_string); // 0x1ca NEW_2
	var_227_int = 531070; // 0x1cc PushI
	SetMessage(var_227_int); // 0x1cd TObjFunc
	ClearReplies(); // 0x1cf TObjFunc
	var_228_int = 531071; // 0x1d1 PushI
	var_229_int = -1; // 0x1d2 PushI
	var_230_int = 32396; // 0x1d3 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1d4 TObjFunc
	var_231_int = 531258; // 0x1d6 PushI
	var_232_int = -1; // 0x1d7 PushI
	var_233_int = 32574; // 0x1d8 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_234_int = 32569; // 0x1dc PushI
	var_235_bool = var_7_cvector == var_234_int; // 0x1dd Eq
	if(var_235_bool == 0) goto Label_499; // 0x1de JumpB
	var_236_string = ""; // 0x1df PushV
	var_236_string = "Staring"; // 0x1e0 MovS
	func_224(var_8_bool, var_236_string); // 0x1e1 NEW_2
	var_237_int = 531253; // 0x1e3 PushI
	SetMessage(var_237_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_238_int = 531254; // 0x1e8 PushI
	var_239_int = 32576; // 0x1e9 PushI
	var_240_int = 32570; // 0x1ea PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1eb TObjFunc
	var_241_int = 531270; // 0x1ed PushI
	var_242_int = -1; // 0x1ee PushI
	var_243_int = 32583; // 0x1ef PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1f0 TObjFunc
	return 0; // 0x1f2 Return
	
Label_499:
	var_244_int = 32576; // 0x1f3 PushI
	var_245_bool = var_7_cvector == var_244_int; // 0x1f4 Eq
	if(var_245_bool == 0) goto Label_522; // 0x1f5 JumpB
	var_246_string = ""; // 0x1f6 PushV
	var_246_string = "Neutral"; // 0x1f7 MovS
	func_224(var_8_bool, var_246_string); // 0x1f8 NEW_2
	var_247_int = 531264; // 0x1fa PushI
	SetMessage(var_247_int); // 0x1fb TObjFunc
	ClearReplies(); // 0x1fd TObjFunc
	var_248_int = 531265; // 0x1ff PushI
	var_249_int = 32578; // 0x200 PushI
	var_250_int = 32577; // 0x201 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x202 TObjFunc
	var_251_int = 531271; // 0x204 PushI
	var_252_int = -1; // 0x205 PushI
	var_253_int = 32584; // 0x206 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x207 TObjFunc
	return 0; // 0x209 Return
	
Label_522:
	var_254_int = 32578; // 0x20a PushI
	var_255_bool = var_7_cvector == var_254_int; // 0x20b Eq
	if(var_255_bool == 0) goto Label_545; // 0x20c JumpB
	var_256_string = ""; // 0x20d PushV
	var_256_string = "Neutral"; // 0x20e MovS
	func_224(var_8_bool, var_256_string); // 0x20f NEW_2
	var_257_int = 531266; // 0x211 PushI
	SetMessage(var_257_int); // 0x212 TObjFunc
	ClearReplies(); // 0x214 TObjFunc
	var_258_int = 531267; // 0x216 PushI
	var_259_int = 32580; // 0x217 PushI
	var_260_int = 32579; // 0x218 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x219 TObjFunc
	var_261_int = 531272; // 0x21b PushI
	var_262_int = 32580; // 0x21c PushI
	var_263_int = 32585; // 0x21d PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_264_int = 32580; // 0x221 PushI
	var_265_bool = var_7_cvector == var_264_int; // 0x222 Eq
	if(var_265_bool == 0) goto Label_568; // 0x223 JumpB
	var_266_string = ""; // 0x224 PushV
	var_266_string = "Neutral"; // 0x225 MovS
	func_224(var_8_bool, var_266_string); // 0x226 NEW_2
	var_267_int = 531268; // 0x228 PushI
	SetMessage(var_267_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_268_int = 531065; // 0x22d PushI
	var_269_int = -1; // 0x22e PushI
	var_270_int = 32390; // 0x22f PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x230 TObjFunc
	var_271_int = 531273; // 0x232 PushI
	var_272_int = -1; // 0x233 PushI
	var_273_int = 32587; // 0x234 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_3_string = 1; // 0x238 TMovB
	var_274_bool = 0; // 0x239 PushV
	func_1538(var_274_bool); // 0x23a NEW_2
	if(var_274_bool == 0) goto Label_576; // 0x23c JumpB
	lshStopAnimation(); // 0x23d Func
	goto Label_578; // 0x23f Jump
	
Label_578:
	return 0; // 0x242 Return
	
Label_576:
	StopAnimation(); // 0x240 Func
	
Label_580:
	return 0; // 0x244 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x251 PushV
	var_10_string = "cleanup"; // 0x252 PushS
	var_11_bool = var_7_string == var_10_string; // 0x253 Eq
	if(var_11_bool == 0) goto Label_608; // 0x254 JumpB
	var_1_object = 1; // 0x255 TMovB
	IsLoaded(var_9_bool); // 0x256 Func
	var_12_bool = var_9_bool == 0; // 0x258 Not
	if(var_12_bool == 0) goto Label_607; // 0x259 JumpB
	var_13_object = Obj(); // 0x25a PushV
	func_1197(var_13_object); // 0x25b NEW_2
	RemoveActor(var_13_object); // 0x25d Func
	
Label_607:
	goto Label_612; // 0x25f Jump
	
Label_612:
	return 2; // 0x264 Return
	
Label_608:
	var_16_string = "restore"; // 0x260 PushS
	var_17_bool = var_7_string == var_16_string; // 0x261 Eq
	if(var_17_bool == 0) goto Label_612; // 0x262 JumpB
	var_1_object = 0; // 0x263 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x265 PushT
	if(var_7_object == 0) goto Label_622; // 0x266 JumpB
	var_8_object = Obj(); // 0x267 PushV
	func_1197(var_8_object); // 0x268 NEW_2
	RemoveActor(var_8_object); // 0x26a Func
	Hold(); // 0x26c Func
	
Label_622:
	func_737(); // 0x26f NEW_2
	return 0; // 0x271 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_752(); // 0x273 NEW_2
	return 0; // 0x275 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2bc PushI
	var_9_bool = var_7_int == var_8_int; // 0x2bd Eq
	if(var_9_bool == 0) goto Label_736; // 0x2be JumpB
	func_695(); // 0x2c0 NEW_2
	var_11_bool = 0; // 0x2c2 PushV
	var_11_bool = 0; // 0x2c3 MovB
	var_12_bool = 0; // 0x2c4 PushV
	func_916(var_12_bool); // 0x2c5 NEW_2
	if(var_12_bool == 0) goto Label_717; // 0x2c7 JumpB
	var_15_bool = 0; // 0x2c8 PushV
	func_664(var_15_bool); // 0x2c9 NEW_2
	if(var_15_bool == 0) goto Label_717; // 0x2cb JumpB
	var_11_bool = 1; // 0x2cc MovB
	
Label_717:
	if(var_11_bool == 0) goto Label_730; // 0x2cd JumpB
	var_32_bool = 0; // 0x2ce PushV
	func_644(var_32_bool); // 0x2cf NEW_2
	if(var_32_bool == 0) goto Label_729; // 0x2d1 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2d2 PushV
	var_53_object = Obj(); // 0x2d3 PushV
	func_1197(var_53_object); // 0x2d4 NEW_2
	var_52_object = var_53_object; // 0x2d5 Mov
	func_1064(var_52_object); // 0x2d7 NEW_2
	
Label_729:
	goto Label_736; // 0x2d9 Jump
	
Label_736:
	return 0; // 0x2e0 Return
	
Label_730:
	func_659(var_7_int); // 0x2db NEW_2
	func_686(); // 0x2de NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2fe Push
	if(var_8_bool == 0) goto Label_772; // 0x2ff JumpB
	func_686(); // 0x301 NEW_2
	goto Label_776; // 0x303 Jump
	
Label_776:
	return 0; // 0x308 Return
	
Label_772:
	var_14_string = ""; // 0x304 PushV
	var_14_string = "Neutral"; // 0x305 MovS
	func_1144(var_14_string); // 0x306 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x309 PushV
	IsOverrideActive(var_9_bool); // 0x30a Func
	var_10_bool = var_9_bool == 0; // 0x30c Not
	if(var_10_bool == 0) goto Label_805; // 0x30d JumpB
	EventDisable(0); // 0x30e EventDisable
	func_877(); // 0x310 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x312 PushV
	var_12_object = var_7_object; // 0x313 Mov
	func_907(var_12_object); // 0x314 NEW_2
	EventEnable(0); // 0x316 EventEnable
	var_25_object = Obj(); // 0x317 PushV
	var_25_object = var_7_object; // 0x318 Mov
	func_581(var_25_object); // 0x319 NEW_2
	var_305_string = ""; // 0x31b PushV
	var_305_string = "Neutral"; // 0x31c MovS
	func_1144(var_305_string); // 0x31d NEW_2
	func_695(); // 0x320 NEW_2
	func_686(); // 0x323 NEW_2
	
Label_805:
	return 2; // 0x325 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_630(var_6_bool); // 0x24e NEW_2
	return 0; // 0x250 Return
}


func_1536(var_87_string)
{
	var_87_string = "ui/NPC_Maria_b.png"; // 0x600 MovS
	return 0; // 0x601 Return
}


func_1409(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x582 PushV
	var_276_string = "b2q03_1"; // 0x583 MovS
	func_1213(var_275_int, var_276_string); // 0x584 NEW_2
	var_277_int = 0; // 0x586 PushI
	var_278_bool = var_275_int == var_277_int; // 0x587 Eq
	if(var_278_bool == 0) goto Label_1419; // 0x588 JumpB
	var_273_bool = 1; // 0x589 MovB
	return 0; // 0x58a Return
	
Label_1419:
	var_273_bool = 0; // 0x58b MovB
	return 0; // 0x58c Return
}


func_1538(var_79_bool)
{
	var_79_bool = 1; // 0x602 MovB
	return 0; // 0x603 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_921(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1532(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1530(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1534(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1536(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1513(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1197(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_1006(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_297_bool = var_36_bool == 0; // 0x3f Not
	if(var_297_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_298_object = Obj(); // 0x46 PushV
	var_298_object = var_27_object; // 0x47 Mov
	func_989(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_644(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x284 PushV
	var_35_string = "player"; // 0x285 PushS
	FindActor(var_34_object, var_35_string); // 0x286 Func
	var_36_bool = var_34_object == 0; // 0x288 Not
	if(var_36_bool == 0) goto Label_652; // 0x289 JumpB
	var_32_bool = 0; // 0x28a MovB
	return 2; // 0x28b Return
	
Label_652:
	var_37_bool = 0; var_38_object = Obj(); // 0x28c PushV
	var_38_object = var_34_object; // 0x28d Mov
	func_907(var_38_object); // 0x28e NEW_2
	var_32_bool = var_37_bool; // 0x28f Mov
	return 2; // 0x291 Return
}


func_897(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x381 PushV
	GetPosition(var_20_cvector); // 0x382 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x384 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x385 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x386 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x387 Func
	var_15_bool = var_22_bool; // 0x389 Mov
	return 6; // 0x38a Return
}


func_1281(var_70_bool, var_71_string, var_72_string)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x501 PushV
	FindActor(var_74_object, var_71_string); // 0x502 Func
	var_75_bool = var_74_object == 0; // 0x504 NullEq
	if(var_75_bool == 0) goto Label_1288; // 0x505 JumpB
	var_70_bool = 0; // 0x506 MovB
	return 2; // 0x507 Return
	
Label_1288:
	Trigger(var_74_object, var_72_string); // 0x508 Func
	var_70_bool = 1; // 0x50a MovB
	return 2; // 0x50b Return
}


func_1160(var_223_string, var_224_bool)
{
	var_227_bool = 0; var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_float = 0; var_232_float = 0; // 0x488 PushV
	lshHasAnimation(var_230_bool, var_223_string); // 0x489 Func
	var_233_bool = var_230_bool; // 0x48b Push
	if(var_233_bool == 0) goto Label_1170; // 0x48c JumpB
	lshGetAnimTimes(var_223_string, var_231_float, var_232_float); // 0x48d Func
	lshPlayAnimation(var_231_float, var_232_float, var_224_bool); // 0x48f Func
	goto Label_1174; // 0x491 Jump
	
Label_1174:
	return 6; // 0x496 Return
	
Label_1170:
	var_234_string = "Can't find lsh animation : "; // 0x492 PushS
	var_235_int = var_234_string + var_223_string; // 0x493 Add
	Trace(var_235_int); // 0x494 Func
}


func_907(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x38b PushV
	GetPosition(var_14_cvector); // 0x38c ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x38e PushV
	var_16_cvector = var_14_cvector; // 0x38f Mov
	func_897(var_15_bool, var_16_cvector); // 0x390 NEW_2
	var_11_bool = var_15_bool; // 0x391 Mov
	return 2; // 0x393 Return
}


func_1421(var_282_bool)
{
	var_284_int = 0; var_285_string = ""; // 0x58e PushV
	var_285_string = "b2q03_1"; // 0x58f MovS
	func_1213(var_284_int, var_285_string); // 0x590 NEW_2
	var_286_int = 2; // 0x592 PushI
	var_287_bool = var_284_int == var_286_int; // 0x593 Eq
	if(var_287_bool == 0) goto Label_1431; // 0x594 JumpB
	var_282_bool = 1; // 0x595 MovB
	return 0; // 0x596 Return
	
Label_1431:
	var_282_bool = 0; // 0x597 MovB
	return 0; // 0x598 Return
}


func_1293(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x50d PushV
	GetGameTime(var_154_float); // 0x50e Func
	var_155_int = 1; // 0x510 PushI
	var_156_int = 0; // 0x511 PushV
	var_157_int = 24; // 0x512 PushI
	var_156_int = var_154_float / var_154_float; // 0x513 Div2
	var_152_int = var_155_int + var_156_int; // 0x514 Add2
	return 2; // 0x515 Return
}


func_1530(var_85_int)
{
	var_85_int = 515543; // 0x5fa MovI
	return 0; // 0x5fb Return
}


func_659(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x293 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x294 PushE
	RotateAsync(var_84_float, var_85_float); // 0x295 Func
	return 0; // 0x297 Return
}


func_916(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x394 PushV
	IsLoaded(var_9_bool); // 0x395 Func
	var_7_bool = var_9_bool; // 0x397 Mov
	return 2; // 0x398 Return
}


func_1302(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x516 PushV
	var_34_string = "idle"; // 0x517 MovS
	var_35_int = var_32_int; // 0x518 Push
	if(var_35_int == 0) goto Label_1307; // 0x519 JumpB
	var_34_string = var_34_string + var_32_int; // 0x51a Add2
	
Label_1307:
	var_31_string = var_34_string; // 0x51b Mov
	return 2; // 0x51c Return
}


func_1175(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x497 PushV
	var_135_bool = 0; // 0x498 PushV
	func_1538(var_135_bool); // 0x499 NEW_2
	if(var_135_bool == 0) goto Label_1188; // 0x49b JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x49c Func
	var_136_bool = var_134_bool; // 0x49e Push
	if(var_136_bool == 0) goto Label_1188; // 0x49f JumpB
	lshPlaySpeech(var_132_string); // 0x4a0 Func
	var_131_bool = 1; // 0x4a2 MovB
	return 2; // 0x4a3 Return
	
Label_1188:
	var_131_bool = 0; // 0x4a4 MovB
	return 2; // 0x4a5 Return
}


func_664(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x298 PushV
	var_20_string = "player"; // 0x299 PushS
	FindActor(var_18_object, var_20_string); // 0x29a Func
	var_21_bool = var_18_object == 0; // 0x29c Not
	if(var_21_bool == 0) goto Label_672; // 0x29d JumpB
	var_15_bool = 0; // 0x29e MovB
	return 4; // 0x29f Return
	
Label_672:
	var_22_float = 0; var_23_object = Obj(); // 0x2a0 PushV
	var_23_object = var_18_object; // 0x2a1 Mov
	func_882(var_23_object); // 0x2a2 NEW_2
	var_30_float = 90000.0; // 0x2a4 PushF
	var_31_bool = var_22_float > var_30_float; // 0x2a5 GT
	if(var_31_bool == 0) goto Label_681; // 0x2a6 JumpB
	var_15_bool = 0; // 0x2a7 MovB
	return 4; // 0x2a8 Return
	
Label_681:
	CanSee(var_19_bool, var_18_object); // 0x2a9 Func
	var_15_bool = var_19_bool; // 0x2ab Mov
	return 4; // 0x2ac Return
}


func_1433()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x599 PushV
	var_19_int = 588; // 0x59a PushI
	var_20_int = 2; // 0x59b PushI
	var_21_int = 531074; // 0x59c PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x59d Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x59f PushV
	var_23_object = var_18_object; // 0x5a0 Mov
	var_24_int = -1; // 0x5a1 MovI
	func_1485(var_22_bool, var_23_object, var_24_int); // 0x5a2 NEW_2
	return 2; // 0x5a4 Return
}


func_921(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x399 PushV
	GetPosition(var_50_cvector); // 0x39a ObjFunc
	GetEyesHeight(var_49_float); // 0x39c ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x39e PushE
	var_58_float = var_58_float + var_49_float; // 0x39f Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x3a0 PopE
	GetPosition(var_51_cvector); // 0x3a1 Func
	GetEyesHeight(var_49_float); // 0x3a3 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x3a5 PushE
	var_59_float = var_59_float + var_49_float; // 0x3a6 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x3a7 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x3a8 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x3a9 PushE
	var_60_float = 0; // 0x3aa MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x3ab PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x3ac Or
	var_62_float = sqrt(var_61_int); // 0x3ad Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x3ae Div2
	var_53_cvector = -var_52_cvector; // 0x3af Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x3b0 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x3b1 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x3b2 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x3b3 Xor2
	func_1203(var_64_cvector, var_65_cvector); // 0x3b4 NEW_2
	var_72_int = 25; // 0x3b6 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x3b7 Mult
	var_74_int = var_63_float + var_73_float; // 0x3b8 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x3b9 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x3ba Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x3bb Add2
	IsOverrideActive(var_56_bool); // 0x3bc Func
	var_76_bool = var_56_bool; // 0x3be Push
	if(var_76_bool == 0) goto Label_962; // 0x3bf JumpB
	var_37_bool = 0; // 0x3c0 MovB
	return 18; // 0x3c1 Return
	
Label_962:
	StopWorld(); // 0x3c2 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x3c4 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x3c6 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x3c7 PushE
	Rotate(var_77_float, var_78_float); // 0x3c8 Func
	var_79_bool = 0; // 0x3ca PushV
	func_1538(var_79_bool); // 0x3cb NEW_2
	if(var_79_bool == 0) goto Label_975; // 0x3cd JumpB
	goto Label_983; // 0x3ce Jump
	
Label_983:
	CameraWaitForPlayFinish(); // 0x3d7 Func
	ResumeWorld(); // 0x3d9 Func
	var_37_bool = 1; // 0x3db MovB
	return 18; // 0x3dc Return
	
Label_975:
	var_80_string = "head"; // 0x3cf PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x3d0 Func
	var_81_bool = var_57_bool; // 0x3d2 Push
	if(var_81_bool == 0) goto Label_983; // 0x3d3 JumpB
	var_82_string = "head"; // 0x3d4 PushS
	LookAsyncCamera(var_82_string); // 0x3d5 Func
}


func_1309(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x51d PushV
	var_28_int = 0; // 0x51e MovI
	
Label_1311:
	var_30_string = "all"; // 0x51f PushS
	var_31_string = ""; var_32_int = 0; // 0x520 PushV
	var_32_int = var_28_int; // 0x521 Mov
	func_1302(var_31_string, var_32_int); // 0x522 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x524 Func
	var_36_bool = var_29_bool == 0; // 0x526 Not
	if(var_36_bool == 0) goto Label_1321; // 0x527 JumpB
	goto Label_1324; // 0x528 Jump
	
Label_1324:
	var_25_int = var_28_int; // 0x52c Mov
	return 4; // 0x52d Return
	
Label_1321:
	var_37_int = 1; // 0x529 PushI
	var_28_int = var_28_int + var_37_int; // 0x52a Add2
	goto Label_1311; // 0x52b Jump
}


func_1190()
{
	var_10_bool = 0; // 0x4a6 PushV
	func_1538(var_10_bool); // 0x4a7 NEW_2
	if(var_10_bool == 0) goto Label_1196; // 0x4a9 JumpB
	lshStopSpeech(); // 0x4aa Func
	
Label_1196:
	return 0; // 0x4ac Return
}


func_806()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x326 PushV
	WaitForAnimEnd(); // 0x327 Func
	var_23_bool = 0; // 0x329 PushV
	func_916(var_23_bool); // 0x32a NEW_2
	var_24_bool = var_23_bool == 0; // 0x32c Not
	if(var_24_bool == 0) goto Label_815; // 0x32d JumpB
	return 12; // 0x32e Return
	
Label_815:
	var_25_int = 0; // 0x32f PushV
	func_1309(var_25_int); // 0x330 NEW_2
	var_17_int = var_25_int; // 0x331 Mov
	var_18_int = 0; // 0x333 MovI
	
Label_820:
	var_38_bool = 0; // 0x334 PushV
	var_38_bool = 0; // 0x335 MovB
	var_39_int = 5; // 0x336 PushI
	var_40_bool = var_18_int < var_39_int; // 0x337 LT
	if(var_40_bool == 0) goto Label_830; // 0x338 JumpB
	var_41_bool = 0; // 0x339 PushV
	func_916(var_41_bool); // 0x33a NEW_2
	if(var_41_bool == 0) goto Label_830; // 0x33c JumpB
	var_38_bool = 1; // 0x33d MovB
	
Label_830:
	if(var_38_bool == 0) goto Label_872; // 0x33e JumpB
	var_42_bool = var_17_int == 0; // 0x33f Not
	if(var_42_bool == 0) goto Label_840; // 0x340 JumpB
	var_43_int = 3; // 0x341 PushI
	Sleep(var_43_int, var_19_bool); // 0x342 Func
	var_44_bool = var_19_bool == 0; // 0x344 Not
	if(var_44_bool == 0) goto Label_839; // 0x345 JumpB
	goto Label_872; // 0x346 Jump
	
Label_872:
	ResetAAS(); // 0x368 Func
	return 12; // 0x36a Return
	
Label_839:
	goto Label_861; // 0x347 Jump
	
Label_861:
	var_45_bool = 0; // 0x35d PushV
	func_875(var_45_bool); // 0x35e NEW_2
	var_46_bool = var_45_bool == 0; // 0x360 Not
	if(var_46_bool == 0) goto Label_867; // 0x361 JumpB
	goto Label_872; // 0x362 Jump
	
Label_867:
	ResetAAS(); // 0x363 Func
	var_47_int = 1; // 0x365 PushI
	var_18_int = var_18_int + var_47_int; // 0x366 Add2
	goto Label_820; // 0x367 Jump
	
Label_840:
	irand(var_20_int, var_17_int); // 0x348 Func
	var_48_int = 5; // 0x34a PushI
	irand(var_21_int, var_48_int); // 0x34b Func
	var_49_int = 0; // 0x34d PushI
	var_50_bool = var_21_int != var_49_int; // 0x34e Neq
	if(var_50_bool == 0) goto Label_849; // 0x34f JumpB
	var_20_int = 0; // 0x350 MovI
	
Label_849:
	var_51_string = "all"; // 0x351 PushS
	var_52_string = ""; var_53_int = 0; // 0x352 PushV
	var_53_int = var_20_int; // 0x353 Mov
	func_1302(var_52_string, var_53_int); // 0x354 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x356 Func
	WaitForAnimEnd(var_22_bool); // 0x358 Func
	var_54_bool = var_22_bool == 0; // 0x35a Not
	if(var_54_bool == 0) goto Label_861; // 0x35b JumpB
	goto Label_872; // 0x35c Jump
}


func_1064(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x428 PushV
	var_115_string = "c"; // 0x429 MovS
	var_116_int = 0; // 0x42a MovI
	
Label_1067:
	var_120_int = 1; // 0x42b PushI
	if(var_120_int == 0) goto Label_1080; // 0x42c JumpB
	var_121_int = 1; // 0x42d PushI
	var_122_int = var_116_int + var_121_int; // 0x42e Add
	var_123_int = var_115_string + var_122_int; // 0x42f Add
	HasProperty(var_123_int, var_117_bool); // 0x430 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x432 Not
	if(var_124_bool == 0) goto Label_1077; // 0x433 JumpB
	goto Label_1080; // 0x434 Jump
	
Label_1080:
	var_125_bool = var_116_int == 0; // 0x438 Not
	if(var_125_bool == 0) goto Label_1084; // 0x439 JumpB
	var_108_bool = 0; // 0x43a MovB
	return 10; // 0x43b Return
	
Label_1084:
	var_118_int = 0; // 0x43c MovI
	var_126_int = 1; // 0x43d PushI
	var_127_bool = var_116_int > var_126_int; // 0x43e GT
	if(var_127_bool == 0) goto Label_1090; // 0x43f JumpB
	irand(var_118_int, var_116_int); // 0x440 Func
	
Label_1090:
	var_128_int = 1; // 0x442 PushI
	var_129_int = var_118_int + var_128_int; // 0x443 Add
	var_130_int = var_115_string + var_129_int; // 0x444 Add
	GetProperty(var_130_int, var_119_string); // 0x445 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x447 PushV
	var_132_string = var_119_string; // 0x448 Mov
	func_1175(var_131_bool, var_132_string); // 0x449 NEW_2
	var_108_bool = var_131_bool; // 0x44a Mov
	return 10; // 0x44c Return
	
Label_1077:
	var_137_int = 1; // 0x435 PushI
	var_116_int = var_116_int + var_137_int; // 0x436 Add2
	goto Label_1067; // 0x437 Jump
}


func_1446()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x5a6 PushV
	var_64_int = 590; // 0x5a7 PushI
	var_65_int = 2; // 0x5a8 PushI
	var_66_int = 531076; // 0x5a9 PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x5aa Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x5ac PushV
	var_68_object = var_63_object; // 0x5ad Mov
	var_69_int = 588; // 0x5ae MovI
	func_1485(var_67_bool, var_68_object, var_69_int); // 0x5af NEW_2
	return 2; // 0x5b1 Return
}


func_1197(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x4ad PushV
	self(var_101_object); // 0x4ae Func
	var_99_object = var_101_object; // 0x4b0 Mov
	return 2; // 0x4b1 Return
}


func_1326()
{
	var_120_string = "playsound"; // 0x52f PushS
	var_121_string = "giveitem"; // 0x530 PushS
	TriggerWorld(var_120_string, var_121_string); // 0x531 Func
	return 0; // 0x533 Return
}


func_686()
{
	var_307_float = 0; var_308_float = 0; // 0x2ae PushV
	var_309_int = 8; // 0x2af PushI
	var_310_int = 16; // 0x2b0 PushI
	rand(var_308_float, var_309_int, var_310_int); // 0x2b1 Func
	var_311_int = 10; // 0x2b3 PushI
	SetTimer(var_311_int, var_308_float); // 0x2b4 Func
	return 2; // 0x2b6 Return
}


func_1203(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x4b3 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x4b4 Or
	var_68_float = sqrt(var_69_int); // 0x4b5 Sqrt2
	var_70_float = 0.0; // 0x4b6 PushF
	var_71_bool = var_68_float < var_70_float; // 0x4b7 LT
	if(var_71_bool == 0) goto Label_1211; // 0x4b8 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x4b9 MovV
	return 2; // 0x4ba Return
	
Label_1211:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x4bb Div2
	return 2; // 0x4bc Return
}


func_1332()
{
	var_217_string = "oob2MariaKabak1"; // 0x535 PushS
	var_218_int = 1; // 0x536 PushI
	SetVariable(var_217_string, var_218_int); // 0x537 Func
	return 0; // 0x539 Return
}


func_1459()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x5b3 PushV
	var_42_int = 589; // 0x5b4 PushI
	var_43_int = 2; // 0x5b5 PushI
	var_44_int = 531075; // 0x5b6 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x5b7 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x5b9 PushV
	var_46_object = var_41_object; // 0x5ba Mov
	var_47_int = 588; // 0x5bb MovI
	func_1485(var_45_bool, var_46_object, var_47_int); // 0x5bc NEW_2
	return 2; // 0x5be Return
}


func_695()
{
	var_306_int = 10; // 0x2b7 PushI
	KillTimer(var_306_int); // 0x2b8 Func
	return 0; // 0x2ba Return
}


func_1338()
{
	var_15_string = "b2q03_1"; // 0x53b PushS
	var_16_int = 1; // 0x53c PushI
	SetVariable(var_15_string, var_16_int); // 0x53d Func
	func_1433(); // 0x540 NEW_2
	func_1459(); // 0x543 NEW_2
	return 0; // 0x545 Return
}


func_1213(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x4bd PushV
	GetVariable(var_203_string, var_205_int); // 0x4be Func
	var_202_int = var_205_int; // 0x4c0 Mov
	return 2; // 0x4c1 Return
}


func_1472(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x5c0 PushV
	GetDiaryRoot(var_33_object); // 0x5c1 Func
	var_34_bool = var_33_object == 0; // 0x5c3 Not
	if(var_34_bool == 0) goto Label_1482; // 0x5c4 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x5c5 PushS
	Trace(var_35_string); // 0x5c6 Func
	var_31_object = 0; // 0x5c8 MovB
	return 2; // 0x5c9 Return
	
Label_1482:
	var_31_object = var_33_object; // 0x5ca Mov
	return 2; // 0x5cb Return
}


func_1218(var_92_int, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x4c2 PushV
	CreateIntVector(var_95_object); // 0x4c3 Func
	add(var_92_int); // 0x4c5 ObjFunc
	add(var_93_int); // 0x4c7 ObjFunc
	var_96_int = 3; // 0x4c9 PushI
	SendWorldWndMessage(var_96_int, var_95_object); // 0x4ca Func
	return 2; // 0x4cc Return
}


func_581(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x246 PushV
	var_27_object = var_25_object; // 0x247 Mov
	TaskCall(0); // 0x248 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x249 NEW_2
	TaskReturn(); // 0x24a TaskReturn
	return 0; // 0x24c Return
}


func_1350()
{
	var_60_string = "b2q03_1"; // 0x547 PushS
	var_61_int = 1000; // 0x548 PushI
	SetVariable(var_60_string, var_61_int); // 0x549 Func
	func_1446(); // 0x54c NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0x54e PushV
	var_71_string = "quest_b2_03"; // 0x54f MovS
	var_72_string = "fail"; // 0x550 MovS
	func_1281(var_70_bool, var_71_string, var_72_string); // 0x551 NEW_2
	return 0; // 0x553 Return
}


func_1101(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x44d PushV
	var_151_string = "d"; // 0x44e PushS
	var_152_int = 0; // 0x44f PushV
	func_1293(var_152_int); // 0x450 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x452 Add
	var_159_string = "m"; // 0x453 PushS
	var_146_string = var_158_int + var_159_string; // 0x454 Add2
	var_147_int = 0; // 0x455 MovI
	
Label_1110:
	var_160_int = 1; // 0x456 PushI
	if(var_160_int == 0) goto Label_1123; // 0x457 JumpB
	var_161_int = 1; // 0x458 PushI
	var_162_int = var_147_int + var_161_int; // 0x459 Add
	var_163_int = var_146_string + var_162_int; // 0x45a Add
	HasProperty(var_163_int, var_148_bool); // 0x45b ObjFunc
	var_164_bool = var_148_bool == 0; // 0x45d Not
	if(var_164_bool == 0) goto Label_1120; // 0x45e JumpB
	goto Label_1123; // 0x45f Jump
	
Label_1123:
	var_165_bool = var_147_int == 0; // 0x463 Not
	if(var_165_bool == 0) goto Label_1127; // 0x464 JumpB
	var_139_bool = 0; // 0x465 MovB
	return 10; // 0x466 Return
	
Label_1127:
	var_149_int = 0; // 0x467 MovI
	var_166_int = 1; // 0x468 PushI
	var_167_bool = var_147_int > var_166_int; // 0x469 GT
	if(var_167_bool == 0) goto Label_1133; // 0x46a JumpB
	irand(var_149_int, var_147_int); // 0x46b Func
	
Label_1133:
	var_168_int = 1; // 0x46d PushI
	var_169_int = var_149_int + var_168_int; // 0x46e Add
	var_170_int = var_146_string + var_169_int; // 0x46f Add
	GetProperty(var_170_int, var_150_string); // 0x470 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x472 PushV
	var_172_string = var_150_string; // 0x473 Mov
	func_1175(var_171_bool, var_172_string); // 0x474 NEW_2
	var_139_bool = var_171_bool; // 0x475 Mov
	return 10; // 0x477 Return
	
Label_1120:
	var_173_int = 1; // 0x460 PushI
	var_147_int = var_147_int + var_173_int; // 0x461 Add2
	goto Label_1110; // 0x462 Jump
}


func_1230(var_79_object, var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x4ce PushV
	var_83_object = Obj(); var_84_string = ""; var_85_int = 0; // 0x4cf PushV
	var_83_object = var_79_object; // 0x4d0 Mov
	var_84_string = "money"; // 0x4d1 MovS
	var_85_int = var_80_int; // 0x4d2 Mov
	func_890(var_84_string, var_85_int); // 0x4d3 NEW_2
	var_89_int = 0; // 0x4d5 PushI
	var_90_bool = var_80_int > var_89_int; // 0x4d6 GT
	if(var_90_bool == 0) goto Label_1248; // 0x4d7 JumpB
	var_91_string = "Money"; // 0x4d8 PushS
	GetInvItemByName(var_82_int, var_91_string); // 0x4d9 Func
	var_92_int = 0; var_93_int = 0; // 0x4db PushV
	var_92_int = var_82_int; // 0x4dc Mov
	var_93_int = var_80_int; // 0x4dd Mov
	func_1218(var_92_int, var_93_int); // 0x4de NEW_2
	
Label_1248:
	return 2; // 0x4e0 Return
}


func_1485(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x5cd PushV
	var_31_object = Obj(); // 0x5ce PushV
	func_1472(var_31_object); // 0x5cf NEW_2
	var_28_object = var_31_object; // 0x5d0 Mov
	Find(var_24_int, var_29_object); // 0x5d2 ObjFunc
	var_36_bool = var_29_object == 0; // 0x5d4 Not
	if(var_36_bool == 0) goto Label_1500; // 0x5d5 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x5d6 PushS
	var_38_int = var_37_string + var_24_int; // 0x5d7 Add
	Trace(var_38_int); // 0x5d8 Func
	var_22_bool = 0; // 0x5da MovB
	return 6; // 0x5db Return
	
Label_1500:
	AddChild(var_23_object); // 0x5dc ObjFunc
	var_39_int = 7; // 0x5de PushI
	SendWorldWndMessage(var_39_int); // 0x5df Func
	GetCategory(var_30_int); // 0x5e1 ObjFunc
	SetDiarySection(var_30_int); // 0x5e3 Func
	var_22_bool = 0; // 0x5e5 MovB
	return 6; // 0x5e6 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_194; // 0x56 JumpB
	var_199_bool = 0; // 0x57 PushV
	var_199_bool = 0; // 0x58 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x59 PushV
	var_201_object = var_1_object; // 0x5a MovT
	func_1397(var_201_object); // 0x5b NEW_2
	if(var_200_bool == 0) goto Label_101; // 0x5d JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x5e PushV
	var_209_object = var_1_object; // 0x5f MovT
	func_1385(var_209_object); // 0x60 NEW_2
	var_214_bool = var_208_bool == 0; // 0x62 Not
	if(var_214_bool == 0) goto Label_101; // 0x63 JumpB
	var_199_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_199_bool == 0) goto Label_127; // 0x65 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x66 PushV
	var_215_object = var_1_object; // 0x67 MovT
	var_216_object = var_0_object; // 0x68 MovT
	func_1332(); // 0x69 NEW_2
	var_219_string = ""; // 0x6b PushV
	var_219_string = "Staring"; // 0x6c MovS
	func_224(var_193_object, var_219_string); // 0x6d NEW_2
	var_236_int = 531063; // 0x6f PushI
	SetMessage(var_236_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_237_int = 531064; // 0x74 PushI
	var_238_int = 32569; // 0x75 PushI
	var_239_int = 32389; // 0x76 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x77 TObjFunc
	var_240_int = 531269; // 0x79 PushI
	var_241_int = 32569; // 0x7a PushI
	var_242_int = 32581; // 0x7b PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x7c TObjFunc
	goto Label_194; // 0x7e Jump
	
Label_194:
	var_243_bool = 0; // 0xc2 PushV
	func_1538(var_243_bool); // 0xc3 NEW_2
	if(var_243_bool == 0) goto Label_209; // 0xc5 JumpB
	
Label_198:
	lshWaitForAnimEnd(); // 0xc6 Func
	var_244_string = var_3_string; // 0xc8 PushT
	if(var_244_string == 0) goto Label_203; // 0xc9 JumpB
	goto Label_208; // 0xca Jump
	
Label_208:
	goto Label_223; // 0xd0 Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_203:
	var_245_string = ""; // 0xcb PushV
	var_245_string = var_2_object; // 0xcc MovT
	func_1144(var_245_string); // 0xcd NEW_2
	goto Label_198; // 0xcf Jump
	
Label_209:
	var_256_string = "all"; // 0xd1 PushS
	var_257_string = "idle"; // 0xd2 PushS
	PlayAnimation(var_256_string, var_257_string); // 0xd3 Func
	
Label_213:
	WaitForAnimEnd(); // 0xd5 Func
	var_258_string = var_3_string; // 0xd7 PushT
	if(var_258_string == 0) goto Label_218; // 0xd8 JumpB
	goto Label_223; // 0xd9 Jump
	
Label_218:
	var_259_string = "all"; // 0xda PushS
	var_260_string = "idle"; // 0xdb PushS
	PlayAnimation(var_259_string, var_260_string); // 0xdc Func
	goto Label_213; // 0xde Jump
	
Label_127:
	var_261_bool = 0; var_262_object = Obj(); // 0x7f PushV
	var_262_object = var_1_object; // 0x80 MovT
	func_1385(var_262_object); // 0x81 NEW_2
	if(var_261_bool == 0) goto Label_152; // 0x83 JumpB
	var_263_string = ""; // 0x84 PushV
	var_263_string = "Angry"; // 0x85 MovS
	func_224(var_193_object, var_263_string); // 0x86 NEW_2
	var_264_int = 531077; // 0x88 PushI
	SetMessage(var_264_int); // 0x89 TObjFunc
	ClearReplies(); // 0x8b TObjFunc
	var_265_int = 531078; // 0x8d PushI
	var_266_int = -1; // 0x8e PushI
	var_267_int = 32400; // 0x8f PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x90 TObjFunc
	var_268_int = 531255; // 0x92 PushI
	var_269_int = -1; // 0x93 PushI
	var_270_int = 32571; // 0x94 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x95 TObjFunc
	goto Label_194; // 0x97 Jump
	
Label_152:
	var_271_string = ""; // 0x98 PushV
	var_271_string = "Mysterious"; // 0x99 MovS
	func_224(var_193_object, var_271_string); // 0x9a NEW_2
	var_272_int = 531066; // 0x9c PushI
	SetMessage(var_272_int); // 0x9d TObjFunc
	ClearReplies(); // 0x9f TObjFunc
	var_273_bool = 0; var_274_object = Obj(); // 0xa1 PushV
	var_274_object = var_1_object; // 0xa2 MovT
	func_1409(var_274_object); // 0xa3 NEW_2
	if(var_273_bool == 0) goto Label_171; // 0xa5 JumpB
	var_279_int = 531067; // 0xa6 PushI
	var_280_int = 32395; // 0xa7 PushI
	var_281_int = 32392; // 0xa8 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xa9 TObjFunc
	
Label_171:
	var_282_bool = 0; var_283_object = Obj(); // 0xab PushV
	var_283_object = var_1_object; // 0xac MovT
	func_1421(var_283_object); // 0xad NEW_2
	if(var_282_bool == 0) goto Label_181; // 0xaf JumpB
	var_288_int = 531068; // 0xb0 PushI
	var_289_int = 32397; // 0xb1 PushI
	var_290_int = 32393; // 0xb2 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xb3 TObjFunc
	
Label_181:
	var_291_int = 531069; // 0xb5 PushI
	var_292_int = -1; // 0xb6 PushI
	var_293_int = 32394; // 0xb7 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xb8 TObjFunc
	var_294_int = 531256; // 0xba PushI
	var_295_int = -1; // 0xbb PushI
	var_296_int = 32572; // 0xbc PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xbd TObjFunc
	goto Label_194; // 0xbf Jump
}


func_1364(var_97_object)
{
	var_99_string = "recipe5 is given"; // 0x555 PushS
	Trace(var_99_string); // 0x556 Func
	var_100_object = Obj(); var_101_string = ""; var_102_int = 0; // 0x558 PushV
	var_100_object = var_97_object; // 0x559 Mov
	var_101_string = "recipe5"; // 0x55a MovS
	var_102_int = 1; // 0x55b MovI
	func_1268(var_100_object, var_101_string, var_102_int); // 0x55c NEW_2
	return 0; // 0x55e Return
}


func_989()
{
	var_299_bool = 0; var_300_bool = 0; // 0x3dd PushV
	CameraSwitchToNormal(); // 0x3de Func
	var_301_bool = 0; // 0x3e0 PushV
	func_1538(var_301_bool); // 0x3e1 NEW_2
	if(var_301_bool == 0) goto Label_997; // 0x3e3 JumpB
	goto Label_1005; // 0x3e4 Jump
	
Label_1005:
	return 2; // 0x3ed Return
	
Label_997:
	var_302_string = "head"; // 0x3e5 PushS
	HasAnimationTrack(var_300_bool, var_302_string); // 0x3e6 Func
	var_303_bool = var_300_bool; // 0x3e8 Push
	if(var_303_bool == 0) goto Label_1005; // 0x3e9 JumpB
	var_304_string = "head"; // 0x3ea PushS
	UnlookAsync(var_304_string); // 0x3eb Func
}


func_1375(var_76_object)
{
	var_78_string = "money 5000 is given"; // 0x560 PushS
	Trace(var_78_string); // 0x561 Func
	var_79_object = Obj(); var_80_int = 0; // 0x563 PushV
	var_79_object = var_76_object; // 0x564 Mov
	var_80_int = 5000; // 0x565 MovI
	func_1230(var_79_object, var_80_int); // 0x566 NEW_2
	return 0; // 0x568 Return
}


func_224(var_2_object, var_219_string)
{
	var_220_bool = 0; // 0xe1 PushV
	func_1538(var_220_bool); // 0xe2 NEW_2
	var_221_bool = var_220_bool == 0; // 0xe4 Not
	if(var_221_bool == 0) goto Label_231; // 0xe5 JumpB
	return 0; // 0xe6 Return
	
Label_231:
	var_222_bool = var_219_string == var_2_object; // 0xe7 Eq
	if(var_222_bool == 0) goto Label_234; // 0xe8 JumpB
	return 0; // 0xe9 Return
	
Label_234:
	var_223_string = ""; var_224_bool = 0; // 0xea PushV
	var_223_string = var_219_string; // 0xeb Mov
	var_225_string = ""; // 0xec PushS
	var_226_bool = var_219_string == var_225_string; // 0xed Eq
	if(var_226_bool == 0) goto Label_241; // 0xee JumpB
	var_224_bool = 0; // 0xef MovB
	goto Label_242; // 0xf0 Jump
	
Label_242:
	func_1160(var_223_string, var_224_bool); // 0xf2 NEW_2
	var_2_object = var_219_string; // 0xf4 TMov
	return 0; // 0xf5 Return
	
Label_241:
	var_224_bool = 1; // 0xf1 MovB
}


func_737()
{
	func_877(); // 0x2e2 NEW_2
	func_695(); // 0x2e5 NEW_2
	lshStopSpeech(); // 0x2e7 Func
	lshStopAnimation(); // 0x2e9 Func
	StopAsync(); // 0x2eb Func
	Hold(); // 0x2ed Func
	return 0; // 0x2ef Return
}


func_1249(var_106_object, var_107_int)
{
	var_108_int = 0; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_int = 0; var_113_bool = 0; // 0x4e1 PushV
	GetItemID(var_111_int); // 0x4e2 ObjFunc
	var_114_string = "Category"; // 0x4e4 PushS
	GetInvItemProperty(var_112_int, var_111_int, var_114_string); // 0x4e5 Func
	AddItem(var_113_bool, var_106_object, var_112_int, var_107_int); // 0x4e7 ObjFunc
	var_115_bool = var_113_bool == 0; // 0x4e9 Not
	if(var_115_bool == 0) goto Label_1262; // 0x4ea JumpB
	DropItems(var_106_object, var_107_int); // 0x4eb ObjFunc
	goto Label_1267; // 0x4ed Jump
	
Label_1267:
	return 6; // 0x4f3 Return
	
Label_1262:
	var_116_int = 0; var_117_int = 0; // 0x4ee PushV
	var_116_int = var_111_int; // 0x4ef Mov
	var_117_int = var_107_int; // 0x4f0 Mov
	func_1218(var_116_int, var_117_int); // 0x4f1 NEW_2
}


func_1513(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x5e9 PushV
	var_91_string = "branch"; // 0x5ea PushS
	GetVariable(var_91_string, var_90_int); // 0x5eb Func
	var_92_int = 0; // 0x5ed PushI
	var_93_bool = var_90_int == var_92_int; // 0x5ee Eq
	if(var_93_bool == 0) goto Label_1523; // 0x5ef JumpB
	var_88_int = 1; // 0x5f0 MovI
	return 2; // 0x5f1 Return
	
Label_1523:
	var_94_int = 1; // 0x5f3 PushI
	var_95_bool = var_90_int == var_94_int; // 0x5f4 Eq
	if(var_95_bool == 0) goto Label_1528; // 0x5f5 JumpB
	var_88_int = 2; // 0x5f6 MovI
	return 2; // 0x5f7 Return
	
Label_1528:
	var_88_int = 3; // 0x5f8 MovI
	return 2; // 0x5f9 Return
}


func_1385(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x56a PushV
	var_211_string = "b2q03"; // 0x56b MovS
	func_1213(var_210_int, var_211_string); // 0x56c NEW_2
	var_212_int = 1000; // 0x56e PushI
	var_213_bool = var_210_int == var_212_int; // 0x56f Eq
	if(var_213_bool == 0) goto Label_1395; // 0x570 JumpB
	var_208_bool = 1; // 0x571 MovB
	return 0; // 0x572 Return
	
Label_1395:
	var_208_bool = 0; // 0x573 MovB
	return 0; // 0x574 Return
}


func_875(var_45_bool)
{
	var_45_bool = 1; // 0x36b MovB
	return 0; // 0x36c Return
}


func_877()
{
	StopAnimation(); // 0x36d Func
	StopGroup0(); // 0x36f Func
	return 0; // 0x371 Return
}


func_1006(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3ee PushV
	var_106_string = "voice_common"; // 0x3ef PushS
	GetVariable(var_106_string, var_104_int); // 0x3f0 Func
	var_107_int = var_104_int; // 0x3f2 Push
	if(var_107_int == 0) goto Label_1044; // 0x3f3 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3f4 PushV
	var_109_object = var_98_object; // 0x3f5 Mov
	func_1064(var_109_object); // 0x3f6 NEW_2
	var_138_bool = var_108_bool == 0; // 0x3f8 Not
	if(var_138_bool == 0) goto Label_1026; // 0x3f9 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3fa PushV
	var_140_object = var_98_object; // 0x3fb Mov
	func_1101(var_140_object); // 0x3fc NEW_2
	var_174_bool = var_139_bool == 0; // 0x3fe Not
	if(var_174_bool == 0) goto Label_1026; // 0x3ff JumpB
	var_97_bool = 0; // 0x400 MovB
	return 4; // 0x401 Return
	
Label_1026:
	var_175_int = 2; // 0x402 PushI
	irand(var_105_int, var_175_int); // 0x403 Func
	var_176_int = var_105_int; // 0x405 Push
	if(var_176_int == 0) goto Label_1039; // 0x406 JumpB
	var_177_string = "voice_common"; // 0x407 PushS
	var_178_int = 1; // 0x408 PushI
	var_179_int = var_104_int + var_178_int; // 0x409 Add
	var_180_int = 3; // 0x40a PushI
	var_181_int = var_179_int / var_180_int; // 0x40b Mod
	SetVariable(var_177_string, var_181_int); // 0x40c Func
	goto Label_1043; // 0x40e Jump
	
Label_1043:
	goto Label_1062; // 0x413 Jump
	
Label_1062:
	var_97_bool = 1; // 0x426 MovB
	return 4; // 0x427 Return
	
Label_1039:
	var_182_string = "voice_common"; // 0x40f PushS
	var_183_int = 0; // 0x410 PushI
	SetVariable(var_182_string, var_183_int); // 0x411 Func
	
Label_1044:
	var_184_bool = 0; var_185_object = Obj(); // 0x414 PushV
	var_185_object = var_98_object; // 0x415 Mov
	func_1101(var_185_object); // 0x416 NEW_2
	var_186_bool = var_184_bool == 0; // 0x418 Not
	if(var_186_bool == 0) goto Label_1058; // 0x419 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x41a PushV
	var_188_object = var_98_object; // 0x41b Mov
	func_1064(var_188_object); // 0x41c NEW_2
	var_189_bool = var_187_bool == 0; // 0x41e Not
	if(var_189_bool == 0) goto Label_1058; // 0x41f JumpB
	var_97_bool = 0; // 0x420 MovB
	return 4; // 0x421 Return
	
Label_1058:
	var_190_string = "voice_common"; // 0x422 PushS
	var_191_int = 1; // 0x423 PushI
	SetVariable(var_190_string, var_191_int); // 0x424 Func
}


func_752()
{
	StopGroup0(); // 0x2f0 Func
	func_695(); // 0x2f3 NEW_2
	var_8_string = ""; // 0x2f5 PushV
	var_8_string = "Neutral"; // 0x2f6 MovS
	func_1144(var_8_string); // 0x2f7 NEW_2
	func_686(); // 0x2fa NEW_2
	return 0; // 0x2fc Return
}


func_882(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x372 PushV
	GetPosition(var_27_cvector); // 0x373 Func
	GetPosition(var_28_cvector); // 0x375 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x377 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x378 Or2
	return 6; // 0x379 Return
}


func_1268(var_100_object, var_101_string, var_102_int)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x4f4 PushV
	CreateInvItem(var_104_object); // 0x4f5 Func
	SetItemName(var_101_string); // 0x4f7 ObjFunc
	var_105_object = Obj(); var_106_object = Obj(); var_107_int = 0; // 0x4f9 PushV
	var_105_object = var_100_object; // 0x4fa Mov
	var_106_object = var_104_object; // 0x4fb Mov
	var_107_int = var_102_int; // 0x4fc Mov
	func_1249(var_106_object, var_107_int); // 0x4fd NEW_2
	return 2; // 0x4ff Return
}


func_1397(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x576 PushV
	var_203_string = "oob2MariaKabak1"; // 0x577 MovS
	func_1213(var_202_int, var_203_string); // 0x578 NEW_2
	var_206_int = 0; // 0x57a PushI
	var_207_bool = var_202_int == var_206_int; // 0x57b Eq
	if(var_207_bool == 0) goto Label_1407; // 0x57c JumpB
	var_200_bool = 1; // 0x57d MovB
	return 0; // 0x57e Return
	
Label_1407:
	var_200_bool = 0; // 0x57f MovB
	return 0; // 0x580 Return
}


func_630(var_0_object)
{
	var_7_bool = 0; // 0x276 PushV
	func_916(var_7_bool); // 0x277 NEW_2
	var_10_bool = var_7_bool == 0; // 0x279 Not
	if(var_10_bool == 0) goto Label_637; // 0x27a JumpB
	Hold(); // 0x27b Func
	
Label_637:
	GetDirection(var_0_object); // 0x27d Func
	
Label_639:
	func_806(); // 0x280 NEW_2
	goto Label_639; // 0x282 Jump
}


func_1144(var_245_string)
{
	var_246_bool = 0; var_247_float = 0; var_248_float = 0; var_249_bool = 0; var_250_float = 0; var_251_float = 0; // 0x478 PushV
	lshHasAnimation(var_249_bool, var_245_string); // 0x479 Func
	var_252_bool = var_249_bool; // 0x47b Push
	if(var_252_bool == 0) goto Label_1155; // 0x47c JumpB
	lshGetAnimTimes(var_245_string, var_250_float, var_251_float); // 0x47d Func
	var_253_bool = 0; // 0x47f PushB
	lshPlayAnimation(var_250_float, var_251_float, var_253_bool); // 0x480 Func
	goto Label_1159; // 0x482 Jump
	
Label_1159:
	return 6; // 0x487 Return
	
Label_1155:
	var_254_string = "Can't find lsh animation : "; // 0x483 PushS
	var_255_int = var_254_string + var_245_string; // 0x484 Add
	Trace(var_255_int); // 0x485 Func
}


func_890(var_84_string, var_85_int)
{
	var_86_int = 0; var_87_int = 0; // 0x37a PushV
	GetProperty(var_84_string, var_87_int); // 0x37b ObjFunc
	var_88_int = var_87_int + var_85_int; // 0x37d Add
	SetProperty(var_84_string, var_88_int); // 0x37e ObjFunc
	return 2; // 0x380 Return
}


func_1532(var_84_int)
{
	var_84_int = 502868; // 0x5fc MovI
	return 0; // 0x5fd Return
}


func_1534(var_86_string)
{
	var_86_string = "ui/NPC_Maria.png"; // 0x5fe MovS
	return 0; // 0x5ff Return
}


