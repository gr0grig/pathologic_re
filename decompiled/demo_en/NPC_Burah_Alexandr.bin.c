task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa7 PushI
	if(var_23_int == 0) goto Label_258; // 0xa8 JumpB
	func_1804(); // 0xaa NEW_2
	var_25_int = 36971; // 0xac PushI
	var_26_bool = var_21_bool == var_25_int; // 0xad Eq
	if(var_26_bool == 0) goto Label_200; // 0xae JumpB
	var_27_string = ""; // 0xaf PushV
	var_27_string = "Neutral"; // 0xb0 MovS
	func_144(var_22_cvector, var_27_string); // 0xb1 NEW_2
	var_44_int = 535294; // 0xb3 PushI
	SetMessage(var_44_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_45_int = 535295; // 0xb8 PushI
	var_46_int = 36973; // 0xb9 PushI
	var_47_int = 36972; // 0xba PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xbb TObjFunc
	var_48_int = 535302; // 0xbd PushI
	var_49_int = -1; // 0xbe PushI
	var_50_int = 36980; // 0xbf PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc0 TObjFunc
	var_51_int = 535303; // 0xc2 PushI
	var_52_int = -1; // 0xc3 PushI
	var_53_int = 36981; // 0xc4 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_54_int = 36973; // 0xc8 PushI
	var_55_bool = var_21_bool == var_54_int; // 0xc9 Eq
	if(var_55_bool == 0) goto Label_223; // 0xca JumpB
	var_56_string = ""; // 0xcb PushV
	var_56_string = "Neutral"; // 0xcc MovS
	func_144(var_22_cvector, var_56_string); // 0xcd NEW_2
	var_57_int = 535296; // 0xcf PushI
	SetMessage(var_57_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_58_int = 535297; // 0xd4 PushI
	var_59_int = 36975; // 0xd5 PushI
	var_60_int = 36974; // 0xd6 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd7 TObjFunc
	var_61_int = 535301; // 0xd9 PushI
	var_62_int = 36975; // 0xda PushI
	var_63_int = 36978; // 0xdb PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_64_int = 36975; // 0xdf PushI
	var_65_bool = var_21_bool == var_64_int; // 0xe0 Eq
	if(var_65_bool == 0) goto Label_246; // 0xe1 JumpB
	var_66_string = ""; // 0xe2 PushV
	var_66_string = "Neutral"; // 0xe3 MovS
	func_144(var_22_cvector, var_66_string); // 0xe4 NEW_2
	var_67_int = 535298; // 0xe6 PushI
	SetMessage(var_67_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_68_int = 535299; // 0xeb PushI
	var_69_int = -1; // 0xec PushI
	var_70_int = 36976; // 0xed PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xee TObjFunc
	var_71_int = 535300; // 0xf0 PushI
	var_72_int = -1; // 0xf1 PushI
	var_73_int = 36977; // 0xf2 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_74_bool = 0; // 0xf7 PushV
	func_1928(var_74_bool); // 0xf8 NEW_2
	if(var_74_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x1c3 PushI
	if(var_23_int == 0) goto Label_837; // 0x1c4 JumpB
	func_1804(); // 0x1c6 NEW_2
	var_25_int = 20555; // 0x1c8 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x1c9 Eq
	if(var_26_bool == 0) goto Label_474; // 0x1ca JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x1cb PushV
	var_27_object = var_1_object; // 0x1cc MovT
	var_28_object = var_0_object; // 0x1cd MovT
	func_1930(); // 0x1ce NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0x1d0 PushV
	var_70_object = var_1_object; // 0x1d1 MovT
	var_71_object = var_0_object; // 0x1d2 MovT
	func_1970(); // 0x1d3 NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0x1d5 PushV
	var_96_object = var_1_object; // 0x1d6 MovT
	var_97_object = var_0_object; // 0x1d7 MovT
	func_1959(var_97_object); // 0x1d8 NEW_2
	
Label_474:
	var_120_int = 20574; // 0x1da PushI
	var_121_bool = var_22_cvector == var_120_int; // 0x1db Eq
	if(var_121_bool == 0) goto Label_492; // 0x1dc JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x1dd PushV
	var_122_object = var_1_object; // 0x1de MovT
	var_123_object = var_0_object; // 0x1df MovT
	func_1930(); // 0x1e0 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x1e2 PushV
	var_124_object = var_1_object; // 0x1e3 MovT
	var_125_object = var_0_object; // 0x1e4 MovT
	func_1970(); // 0x1e5 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x1e7 PushV
	var_126_object = var_1_object; // 0x1e8 MovT
	var_127_object = var_0_object; // 0x1e9 MovT
	func_1959(var_127_object); // 0x1ea NEW_2
	
Label_492:
	var_128_int = 20537; // 0x1ec PushI
	var_129_bool = var_22_cvector == var_128_int; // 0x1ed Eq
	if(var_129_bool == 0) goto Label_500; // 0x1ee JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x1ef PushV
	var_130_object = var_1_object; // 0x1f0 MovT
	var_131_object = var_0_object; // 0x1f1 MovT
	func_1953(); // 0x1f2 NEW_2
	
Label_500:
	var_134_int = 19348; // 0x1f4 PushI
	var_135_bool = var_21_bool == var_134_int; // 0x1f5 Eq
	if(var_135_bool == 0) goto Label_553; // 0x1f6 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x1f7 PushV
	var_137_object = var_1_object; // 0x1f8 MovT
	func_1986(var_137_object); // 0x1f9 NEW_2
	if(var_136_bool == 0) goto Label_528; // 0x1fb JumpB
	var_144_string = ""; // 0x1fc PushV
	var_144_string = "Neutral"; // 0x1fd MovS
	func_428(var_22_cvector, var_144_string); // 0x1fe NEW_2
	var_161_int = 518239; // 0x200 PushI
	SetMessage(var_161_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_162_int = 518240; // 0x205 PushI
	var_163_int = 20533; // 0x206 PushI
	var_164_int = 19349; // 0x207 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x208 TObjFunc
	var_165_int = 519398; // 0x20a PushI
	var_166_int = 20561; // 0x20b PushI
	var_167_int = 20560; // 0x20c PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_168_string = ""; // 0x210 PushV
	var_168_string = "Neutral"; // 0x211 MovS
	func_428(var_22_cvector, var_168_string); // 0x212 NEW_2
	var_169_int = 518241; // 0x214 PushI
	SetMessage(var_169_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_170_bool = 0; var_171_object = Obj(); // 0x219 PushV
	var_171_object = var_1_object; // 0x21a MovT
	func_1998(var_171_object); // 0x21b NEW_2
	if(var_170_bool == 0) goto Label_547; // 0x21d JumpB
	var_176_int = 519376; // 0x21e PushI
	var_177_int = 20538; // 0x21f PushI
	var_178_int = 20537; // 0x220 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x221 TObjFunc
	
Label_547:
	var_179_int = 518242; // 0x223 PushI
	var_180_int = -1; // 0x224 PushI
	var_181_int = 19351; // 0x225 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_182_int = 20544; // 0x229 PushI
	var_183_bool = var_21_bool == var_182_int; // 0x22a Eq
	if(var_183_bool == 0) goto Label_556; // 0x22b JumpB
	
Label_556:
	var_184_int = 20546; // 0x22c PushI
	var_185_bool = var_21_bool == var_184_int; // 0x22d Eq
	if(var_185_bool == 0) goto Label_579; // 0x22e JumpB
	var_186_string = ""; // 0x22f PushV
	var_186_string = "Neutral"; // 0x230 MovS
	func_428(var_22_cvector, var_186_string); // 0x231 NEW_2
	var_187_int = 519385; // 0x233 PushI
	SetMessage(var_187_int); // 0x234 TObjFunc
	ClearReplies(); // 0x236 TObjFunc
	var_188_int = 519387; // 0x238 PushI
	var_189_int = 20549; // 0x239 PushI
	var_190_int = 20548; // 0x23a PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x23b TObjFunc
	var_191_int = 519386; // 0x23d PushI
	var_192_int = -1; // 0x23e PushI
	var_193_int = 20547; // 0x23f PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x240 TObjFunc
	return 0; // 0x242 Return
	
Label_579:
	var_194_int = 20549; // 0x243 PushI
	var_195_bool = var_21_bool == var_194_int; // 0x244 Eq
	if(var_195_bool == 0) goto Label_602; // 0x245 JumpB
	var_196_string = ""; // 0x246 PushV
	var_196_string = "Neutral"; // 0x247 MovS
	func_428(var_22_cvector, var_196_string); // 0x248 NEW_2
	var_197_int = 519388; // 0x24a PushI
	SetMessage(var_197_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_198_int = 519389; // 0x24f PushI
	var_199_int = -1; // 0x250 PushI
	var_200_int = 20550; // 0x251 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x252 TObjFunc
	var_201_int = 519390; // 0x254 PushI
	var_202_int = -1; // 0x255 PushI
	var_203_int = 20551; // 0x256 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x257 TObjFunc
	return 0; // 0x259 Return
	
Label_602:
	var_204_int = 20538; // 0x25a PushI
	var_205_bool = var_21_bool == var_204_int; // 0x25b Eq
	if(var_205_bool == 0) goto Label_620; // 0x25c JumpB
	var_206_string = ""; // 0x25d PushV
	var_206_string = "Neutral"; // 0x25e MovS
	func_428(var_22_cvector, var_206_string); // 0x25f NEW_2
	var_207_int = 519377; // 0x261 PushI
	SetMessage(var_207_int); // 0x262 TObjFunc
	ClearReplies(); // 0x264 TObjFunc
	var_208_int = 519378; // 0x266 PushI
	var_209_int = 20540; // 0x267 PushI
	var_210_int = 20539; // 0x268 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x269 TObjFunc
	return 0; // 0x26b Return
	
Label_620:
	var_211_int = 20540; // 0x26c PushI
	var_212_bool = var_21_bool == var_211_int; // 0x26d Eq
	if(var_212_bool == 0) goto Label_643; // 0x26e JumpB
	var_213_string = ""; // 0x26f PushV
	var_213_string = "Neutral"; // 0x270 MovS
	func_428(var_22_cvector, var_213_string); // 0x271 NEW_2
	var_214_int = 519379; // 0x273 PushI
	SetMessage(var_214_int); // 0x274 TObjFunc
	ClearReplies(); // 0x276 TObjFunc
	var_215_int = 519380; // 0x278 PushI
	var_216_int = -1; // 0x279 PushI
	var_217_int = 20541; // 0x27a PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x27b TObjFunc
	var_218_int = 519381; // 0x27d PushI
	var_219_int = -1; // 0x27e PushI
	var_220_int = 20542; // 0x27f PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x280 TObjFunc
	return 0; // 0x282 Return
	
Label_643:
	var_221_int = 20561; // 0x283 PushI
	var_222_bool = var_21_bool == var_221_int; // 0x284 Eq
	if(var_222_bool == 0) goto Label_661; // 0x285 JumpB
	var_223_string = ""; // 0x286 PushV
	var_223_string = "Neutral"; // 0x287 MovS
	func_428(var_22_cvector, var_223_string); // 0x288 NEW_2
	var_224_int = 519399; // 0x28a PushI
	SetMessage(var_224_int); // 0x28b TObjFunc
	ClearReplies(); // 0x28d TObjFunc
	var_225_int = 519400; // 0x28f PushI
	var_226_int = 20563; // 0x290 PushI
	var_227_int = 20562; // 0x291 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x292 TObjFunc
	return 0; // 0x294 Return
	
Label_661:
	var_228_int = 20563; // 0x295 PushI
	var_229_bool = var_21_bool == var_228_int; // 0x296 Eq
	if(var_229_bool == 0) goto Label_679; // 0x297 JumpB
	var_230_string = ""; // 0x298 PushV
	var_230_string = "Neutral"; // 0x299 MovS
	func_428(var_22_cvector, var_230_string); // 0x29a NEW_2
	var_231_int = 519401; // 0x29c PushI
	SetMessage(var_231_int); // 0x29d TObjFunc
	ClearReplies(); // 0x29f TObjFunc
	var_232_int = 519402; // 0x2a1 PushI
	var_233_int = 20565; // 0x2a2 PushI
	var_234_int = 20564; // 0x2a3 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x2a4 TObjFunc
	return 0; // 0x2a6 Return
	
Label_679:
	var_235_int = 20565; // 0x2a7 PushI
	var_236_bool = var_21_bool == var_235_int; // 0x2a8 Eq
	if(var_236_bool == 0) goto Label_697; // 0x2a9 JumpB
	var_237_string = ""; // 0x2aa PushV
	var_237_string = "Neutral"; // 0x2ab MovS
	func_428(var_22_cvector, var_237_string); // 0x2ac NEW_2
	var_238_int = 519403; // 0x2ae PushI
	SetMessage(var_238_int); // 0x2af TObjFunc
	ClearReplies(); // 0x2b1 TObjFunc
	var_239_int = 519404; // 0x2b3 PushI
	var_240_int = 20533; // 0x2b4 PushI
	var_241_int = 20566; // 0x2b5 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x2b6 TObjFunc
	return 0; // 0x2b8 Return
	
Label_697:
	var_242_int = 20533; // 0x2b9 PushI
	var_243_bool = var_21_bool == var_242_int; // 0x2ba Eq
	if(var_243_bool == 0) goto Label_720; // 0x2bb JumpB
	var_244_string = ""; // 0x2bc PushV
	var_244_string = "Neutral"; // 0x2bd MovS
	func_428(var_22_cvector, var_244_string); // 0x2be NEW_2
	var_245_int = 519372; // 0x2c0 PushI
	SetMessage(var_245_int); // 0x2c1 TObjFunc
	ClearReplies(); // 0x2c3 TObjFunc
	var_246_int = 519373; // 0x2c5 PushI
	var_247_int = 20535; // 0x2c6 PushI
	var_248_int = 20534; // 0x2c7 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x2c8 TObjFunc
	var_249_int = 519395; // 0x2ca PushI
	var_250_int = 20557; // 0x2cb PushI
	var_251_int = 20556; // 0x2cc PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x2cd TObjFunc
	return 0; // 0x2cf Return
	
Label_720:
	var_252_int = 20557; // 0x2d0 PushI
	var_253_bool = var_21_bool == var_252_int; // 0x2d1 Eq
	if(var_253_bool == 0) goto Label_738; // 0x2d2 JumpB
	var_254_string = ""; // 0x2d3 PushV
	var_254_string = "Neutral"; // 0x2d4 MovS
	func_428(var_22_cvector, var_254_string); // 0x2d5 NEW_2
	var_255_int = 519396; // 0x2d7 PushI
	SetMessage(var_255_int); // 0x2d8 TObjFunc
	ClearReplies(); // 0x2da TObjFunc
	var_256_int = 519397; // 0x2dc PushI
	var_257_int = 20552; // 0x2dd PushI
	var_258_int = 20558; // 0x2de PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2df TObjFunc
	return 0; // 0x2e1 Return
	
Label_738:
	var_259_int = 20535; // 0x2e2 PushI
	var_260_bool = var_21_bool == var_259_int; // 0x2e3 Eq
	if(var_260_bool == 0) goto Label_761; // 0x2e4 JumpB
	var_261_string = ""; // 0x2e5 PushV
	var_261_string = "Neutral"; // 0x2e6 MovS
	func_428(var_22_cvector, var_261_string); // 0x2e7 NEW_2
	var_262_int = 519374; // 0x2e9 PushI
	SetMessage(var_262_int); // 0x2ea TObjFunc
	ClearReplies(); // 0x2ec TObjFunc
	var_263_int = 519375; // 0x2ee PushI
	var_264_int = 20552; // 0x2ef PushI
	var_265_int = 20536; // 0x2f0 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2f1 TObjFunc
	var_266_int = 519406; // 0x2f3 PushI
	var_267_int = 20571; // 0x2f4 PushI
	var_268_int = 20570; // 0x2f5 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x2f6 TObjFunc
	return 0; // 0x2f8 Return
	
Label_761:
	var_269_int = 20571; // 0x2f9 PushI
	var_270_bool = var_21_bool == var_269_int; // 0x2fa Eq
	if(var_270_bool == 0) goto Label_779; // 0x2fb JumpB
	var_271_string = ""; // 0x2fc PushV
	var_271_string = "Neutral"; // 0x2fd MovS
	func_428(var_22_cvector, var_271_string); // 0x2fe NEW_2
	var_272_int = 519407; // 0x300 PushI
	SetMessage(var_272_int); // 0x301 TObjFunc
	ClearReplies(); // 0x303 TObjFunc
	var_273_int = 519408; // 0x305 PushI
	var_274_int = 20557; // 0x306 PushI
	var_275_int = 20572; // 0x307 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x308 TObjFunc
	return 0; // 0x30a Return
	
Label_779:
	var_276_int = 20552; // 0x30b PushI
	var_277_bool = var_21_bool == var_276_int; // 0x30c Eq
	if(var_277_bool == 0) goto Label_802; // 0x30d JumpB
	var_278_string = ""; // 0x30e PushV
	var_278_string = "Neutral"; // 0x30f MovS
	func_428(var_22_cvector, var_278_string); // 0x310 NEW_2
	var_279_int = 519391; // 0x312 PushI
	SetMessage(var_279_int); // 0x313 TObjFunc
	ClearReplies(); // 0x315 TObjFunc
	var_280_int = 519392; // 0x317 PushI
	var_281_int = 20554; // 0x318 PushI
	var_282_int = 20553; // 0x319 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x31a TObjFunc
	var_283_int = 519405; // 0x31c PushI
	var_284_int = 20554; // 0x31d PushI
	var_285_int = 20568; // 0x31e PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x31f TObjFunc
	return 0; // 0x321 Return
	
Label_802:
	var_286_int = 20554; // 0x322 PushI
	var_287_bool = var_21_bool == var_286_int; // 0x323 Eq
	if(var_287_bool == 0) goto Label_825; // 0x324 JumpB
	var_288_string = ""; // 0x325 PushV
	var_288_string = "Strict"; // 0x326 MovS
	func_428(var_22_cvector, var_288_string); // 0x327 NEW_2
	var_289_int = 519393; // 0x329 PushI
	SetMessage(var_289_int); // 0x32a TObjFunc
	ClearReplies(); // 0x32c TObjFunc
	var_290_int = 519394; // 0x32e PushI
	var_291_int = -1; // 0x32f PushI
	var_292_int = 20555; // 0x330 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x331 TObjFunc
	var_293_int = 519409; // 0x333 PushI
	var_294_int = -1; // 0x334 PushI
	var_295_int = 20574; // 0x335 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x336 TObjFunc
	return 0; // 0x338 Return
	
Label_825:
	var_3_string = 1; // 0x339 TMovB
	var_296_bool = 0; // 0x33a PushV
	func_1928(var_296_bool); // 0x33b NEW_2
	if(var_296_bool == 0) goto Label_833; // 0x33d JumpB
	lshStopAnimation(); // 0x33e Func
	goto Label_835; // 0x340 Jump
	
Label_835:
	return 0; // 0x343 Return
	
Label_833:
	StopAnimation(); // 0x341 Func
	
Label_837:
	return 0; // 0x345 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x3e8 PushI
	if(var_23_int == 0) goto Label_1040; // 0x3e9 JumpB
	func_1804(); // 0x3eb NEW_2
	var_25_int = 21877; // 0x3ed PushI
	var_26_bool = var_21_bool == var_25_int; // 0x3ee Eq
	if(var_26_bool == 0) goto Label_1028; // 0x3ef JumpB
	var_27_string = ""; // 0x3f0 PushV
	var_27_string = "Strict"; // 0x3f1 MovS
	func_977(var_22_cvector, var_27_string); // 0x3f2 NEW_2
	var_44_int = 520670; // 0x3f4 PushI
	SetMessage(var_44_int); // 0x3f5 TObjFunc
	ClearReplies(); // 0x3f7 TObjFunc
	var_45_int = 520671; // 0x3f9 PushI
	var_46_int = -1; // 0x3fa PushI
	var_47_int = 21878; // 0x3fb PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x3fc TObjFunc
	var_48_int = 527796; // 0x3fe PushI
	var_49_int = -1; // 0x3ff PushI
	var_50_int = 29129; // 0x400 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_3_string = 1; // 0x404 TMovB
	var_51_bool = 0; // 0x405 PushV
	func_1928(var_51_bool); // 0x406 NEW_2
	if(var_51_bool == 0) goto Label_1036; // 0x408 JumpB
	lshStopAnimation(); // 0x409 Func
	goto Label_1038; // 0x40b Jump
	
Label_1038:
	return 0; // 0x40e Return
	
Label_1036:
	StopAnimation(); // 0x40c Func
	
Label_1040:
	return 0; // 0x410 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x4b3 PushI
	if(var_23_int == 0) goto Label_1243; // 0x4b4 JumpB
	func_1804(); // 0x4b6 NEW_2
	var_25_int = 42563; // 0x4b8 PushI
	var_26_bool = var_21_int == var_25_int; // 0x4b9 Eq
	if(var_26_bool == 0) goto Label_1231; // 0x4ba JumpB
	var_27_string = ""; // 0x4bb PushV
	var_27_string = "Neutral"; // 0x4bc MovS
	func_1180(var_22_cvector, var_27_string); // 0x4bd NEW_2
	var_44_int = 540554; // 0x4bf PushI
	SetMessage(var_44_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_45_int = 540555; // 0x4c4 PushI
	var_46_int = -1; // 0x4c5 PushI
	var_47_int = 42564; // 0x4c6 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x4c7 TObjFunc
	var_48_int = 540794; // 0x4c9 PushI
	var_49_int = -1; // 0x4ca PushI
	var_50_int = 42843; // 0x4cb PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x4cc TObjFunc
	return 0; // 0x4ce Return
	
Label_1231:
	var_3_string = 1; // 0x4cf TMovB
	var_51_bool = 0; // 0x4d0 PushV
	func_1928(var_51_bool); // 0x4d1 NEW_2
	if(var_51_bool == 0) goto Label_1239; // 0x4d3 JumpB
	lshStopAnimation(); // 0x4d4 Func
	goto Label_1241; // 0x4d6 Jump
	
Label_1241:
	return 0; // 0x4d9 Return
	
Label_1239:
	StopAnimation(); // 0x4d7 Func
	
Label_1243:
	return 0; // 0x4db Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x529 PushI
	var_23_bool = var_21_int == var_22_int; // 0x52a Eq
	if(var_23_bool == 0) goto Label_1357; // 0x52b JumpB
	func_1316(); // 0x52d NEW_2
	var_25_bool = 0; // 0x52f PushV
	var_25_bool = 0; // 0x530 MovB
	var_26_bool = 0; // 0x531 PushV
	func_1530(var_26_bool); // 0x532 NEW_2
	if(var_26_bool == 0) goto Label_1338; // 0x534 JumpB
	var_29_bool = 0; // 0x535 PushV
	func_1285(var_29_bool); // 0x536 NEW_2
	if(var_29_bool == 0) goto Label_1338; // 0x538 JumpB
	var_25_bool = 1; // 0x539 MovB
	
Label_1338:
	if(var_25_bool == 0) goto Label_1351; // 0x53a JumpB
	var_46_bool = 0; // 0x53b PushV
	func_1265(var_46_bool); // 0x53c NEW_2
	if(var_46_bool == 0) goto Label_1350; // 0x53e JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x53f PushV
	var_67_object = Obj(); // 0x540 PushV
	func_1811(var_67_object); // 0x541 NEW_2
	var_66_object = var_67_object; // 0x542 Mov
	func_1678(var_66_object); // 0x544 NEW_2
	
Label_1350:
	goto Label_1357; // 0x546 Jump
	
Label_1357:
	return 0; // 0x54d Return
	
Label_1351:
	func_1280(var_21_int); // 0x548 NEW_2
	func_1307(); // 0x54b NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1498(); // 0x54f NEW_2
	func_1316(); // 0x552 NEW_2
	lshStopSpeech(); // 0x554 Func
	lshStopAnimation(); // 0x556 Func
	StopAsync(); // 0x558 Func
	Hold(); // 0x55a Func
	return 0; // 0x55c Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x55d Func
	func_1316(); // 0x560 NEW_2
	var_22_string = ""; // 0x562 PushV
	var_22_string = "Neutral"; // 0x563 MovS
	func_1758(var_22_string); // 0x564 NEW_2
	func_1307(); // 0x567 NEW_2
	return 0; // 0x569 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x56b Push
	if(var_22_bool == 0) goto Label_1393; // 0x56c JumpB
	func_1307(); // 0x56e NEW_2
	goto Label_1397; // 0x570 Jump
	
Label_1397:
	return 0; // 0x575 Return
	
Label_1393:
	var_28_string = ""; // 0x571 PushV
	var_28_string = "Neutral"; // 0x572 MovS
	func_1758(var_28_string); // 0x573 NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x576 PushV
	IsOverrideActive(var_23_bool); // 0x577 Func
	var_24_bool = var_23_bool == 0; // 0x579 Not
	if(var_24_bool == 0) goto Label_1426; // 0x57a JumpB
	EventDisable(0); // 0x57b EventDisable
	func_1498(); // 0x57d NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x57f PushV
	var_26_object = var_21_object; // 0x580 Mov
	func_1521(var_26_object); // 0x581 NEW_2
	EventEnable(0); // 0x583 EventEnable
	var_39_object = Obj(); // 0x584 PushV
	var_39_object = var_21_object; // 0x585 Mov
	func_2131(var_39_object); // 0x586 NEW_2
	var_468_string = ""; // 0x588 PushV
	var_468_string = "Neutral"; // 0x589 MovS
	func_1758(var_468_string); // 0x58a NEW_2
	func_1316(); // 0x58d NEW_2
	func_1307(); // 0x590 NEW_2
	
Label_1426:
	return 2; // 0x592 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x4dc PushGE
	var_21_bool = 0; // 0x4dd MovB
	GlobalVars[1] = var_21_bool; // 0x4de PopGE
	func_1251(var_20_cvector); // 0x4e0 NEW_2
	return 0; // 0x4e2 Return
}


func_1920(var_101_int)
{
	var_101_int = 515528; // 0x780 MovI
	return 0; // 0x781 Return
}


func_1280(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x500 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x501 PushE
	RotateAsync(var_98_float, var_99_float); // 0x502 Func
	return 0; // 0x504 Return
}


func_1922(var_100_int)
{
	var_100_int = 502854; // 0x782 MovI
	return 0; // 0x783 Return
}


func_259(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0x103 PushV
	var_0_object = var_270_object; // 0x104 TMov
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; // 0x105 PushV
	var_281_object = var_270_object; // 0x106 Mov
	var_282_float = 70.0; // 0x107 MovF
	func_1535(var_281_object, var_282_float); // 0x108 NEW_2
	var_283_bool = var_280_bool == 0; // 0x10a Not
	if(var_283_bool == 0) goto Label_270; // 0x10b JumpB
	var_269_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_276_object); // 0x10e Func
	var_284_int = 0; // 0x110 PushV
	func_1922(var_284_int); // 0x111 NEW_2
	SetNPCName(var_284_int); // 0x113 ObjFunc
	var_285_int = 0; // 0x115 PushV
	func_1920(var_285_int); // 0x116 NEW_2
	SetNPCDescription(var_285_int); // 0x118 ObjFunc
	var_286_string = ""; // 0x11a PushV
	func_1924(var_286_string); // 0x11b NEW_2
	SetPhoto(var_286_string); // 0x11d ObjFunc
	var_287_string = ""; // 0x11f PushV
	func_1926(var_287_string); // 0x120 NEW_2
	SetPhoto2(var_287_string); // 0x122 ObjFunc
	var_288_int = 0; // 0x124 PushV
	func_2114(var_288_int); // 0x125 NEW_2
	SetPlayerName(var_288_int); // 0x127 ObjFunc
	var_278_int = -1; // 0x129 MovI
	IsOverrideActive(var_277_bool); // 0x12a Func
	var_289_bool = var_277_bool; // 0x12c Push
	if(var_289_bool == 0) goto Label_304; // 0x12d JumpB
	var_269_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_276_object); // 0x130 Func
	var_290_bool = 0; var_291_object = Obj(); // 0x132 PushV
	var_292_object = Obj(); // 0x133 PushV
	func_1811(var_292_object); // 0x134 NEW_2
	var_291_object = var_292_object; // 0x135 Mov
	func_1620(var_290_bool, var_291_object); // 0x137 NEW_2
	var_293_object = Obj(); var_294_object = Obj(); // 0x139 PushV
	var_293_object = var_270_object; // 0x13a Mov
	var_294_object = var_276_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_279_bool); // 0x140 ObjFunc
	
Label_322:
	var_345_bool = var_279_bool == 0; // 0x142 Not
	if(var_345_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_279_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_346_object = Obj(); // 0x149 PushV
	var_346_object = var_270_object; // 0x14a Mov
	func_1603(); // 0x14b NEW_2
	StopDialog(var_276_object); // 0x14d Func
	GetReturnValue(var_278_int); // 0x14f ObjFunc
	var_269_int = var_278_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_1924(var_102_string)
{
	var_102_string = "ui/NPC_Alexandr.png"; // 0x784 MovS
	return 0; // 0x785 Return
}


func_1285(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x505 PushV
	var_34_string = "player"; // 0x506 PushS
	FindActor(var_32_object, var_34_string); // 0x507 Func
	var_35_bool = var_32_object == 0; // 0x509 Not
	if(var_35_bool == 0) goto Label_1293; // 0x50a JumpB
	var_29_bool = 0; // 0x50b MovB
	return 4; // 0x50c Return
	
Label_1293:
	var_36_float = 0; var_37_object = Obj(); // 0x50d PushV
	var_37_object = var_32_object; // 0x50e Mov
	func_1503(var_37_object); // 0x50f NEW_2
	var_44_float = 90000.0; // 0x511 PushF
	var_45_bool = var_36_float > var_44_float; // 0x512 GT
	if(var_45_bool == 0) goto Label_1302; // 0x513 JumpB
	var_29_bool = 0; // 0x514 MovB
	return 4; // 0x515 Return
	
Label_1302:
	CanSee(var_33_bool, var_32_object); // 0x516 Func
	var_29_bool = var_33_bool; // 0x518 Mov
	return 4; // 0x519 Return
}


func_1926(var_103_string)
{
	var_103_string = "ui/NPC_Alexandr_b.png"; // 0x786 MovS
	return 0; // 0x787 Return
}


func_0(var_0_object, var_352_int, var_353_object)
{
	var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0; var_359_object = Obj(); var_360_bool = 0; var_361_int = 0; var_362_bool = 0; // 0x0 PushV
	var_0_object = var_353_object; // 0x1 TMov
	var_363_bool = 0; var_364_object = Obj(); var_365_float = 0; // 0x2 PushV
	var_364_object = var_353_object; // 0x3 Mov
	var_365_float = 70.0; // 0x4 MovF
	func_1535(var_364_object, var_365_float); // 0x5 NEW_2
	var_366_bool = var_363_bool == 0; // 0x7 Not
	if(var_366_bool == 0) goto Label_11; // 0x8 JumpB
	var_352_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_359_object); // 0xb Func
	var_367_int = 0; // 0xd PushV
	func_1922(var_367_int); // 0xe NEW_2
	SetNPCName(var_367_int); // 0x10 ObjFunc
	var_368_int = 0; // 0x12 PushV
	func_1920(var_368_int); // 0x13 NEW_2
	SetNPCDescription(var_368_int); // 0x15 ObjFunc
	var_369_string = ""; // 0x17 PushV
	func_1924(var_369_string); // 0x18 NEW_2
	SetPhoto(var_369_string); // 0x1a ObjFunc
	var_370_string = ""; // 0x1c PushV
	func_1926(var_370_string); // 0x1d NEW_2
	SetPhoto2(var_370_string); // 0x1f ObjFunc
	var_371_int = 0; // 0x21 PushV
	func_2114(var_371_int); // 0x22 NEW_2
	SetPlayerName(var_371_int); // 0x24 ObjFunc
	var_361_int = -1; // 0x26 MovI
	IsOverrideActive(var_360_bool); // 0x27 Func
	var_372_bool = var_360_bool; // 0x29 Push
	if(var_372_bool == 0) goto Label_45; // 0x2a JumpB
	var_352_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_359_object); // 0x2d Func
	var_373_bool = 0; var_374_object = Obj(); // 0x2f PushV
	var_375_object = Obj(); // 0x30 PushV
	func_1811(var_375_object); // 0x31 NEW_2
	var_374_object = var_375_object; // 0x32 Mov
	func_1620(var_373_bool, var_374_object); // 0x34 NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x36 PushV
	var_376_object = var_353_object; // 0x37 Mov
	var_377_object = var_359_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_362_bool); // 0x3d ObjFunc
	
Label_63:
	var_409_bool = var_362_bool == 0; // 0x3f Not
	if(var_409_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_362_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_410_object = Obj(); // 0x46 PushV
	var_410_object = var_353_object; // 0x47 Mov
	func_1603(); // 0x48 NEW_2
	StopDialog(var_359_object); // 0x4a Func
	GetReturnValue(var_361_int); // 0x4c ObjFunc
	var_352_int = var_361_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1928(var_95_bool)
{
	var_95_bool = 1; // 0x788 MovB
	return 0; // 0x789 Return
}


func_1930()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x78a PushV
	var_31_string = "b2q01"; // 0x78b PushS
	var_32_int = 2; // 0x78c PushI
	SetVariable(var_31_string, var_32_int); // 0x78d Func
	var_33_object = Obj(); // 0x78f PushV
	func_2064(var_33_object); // 0x790 NEW_2
	var_30_object = var_33_object; // 0x791 Mov
	var_40_string = "b2q01AlexandrGotoOspina"; // 0x793 PushS
	var_41_string = "pt_map_ospina"; // 0x794 PushS
	var_42_int = 1; // 0x795 PushI
	var_43_int = 520459; // 0x796 PushI
	var_44_float = 0; // 0x797 PushV
	func_1876(var_44_float); // 0x798 NEW_2
	AddMark(var_40_string, var_41_string, var_42_int, var_43_int, var_44_float); // 0x79a ObjFunc
	func_2010(); // 0x79d NEW_2
	return 2; // 0x79f Return
}


func_1804()
{
	var_24_bool = 0; // 0x70c PushV
	func_1928(var_24_bool); // 0x70d NEW_2
	if(var_24_bool == 0) goto Label_1810; // 0x70f JumpB
	lshStopSpeech(); // 0x710 Func
	
Label_1810:
	return 0; // 0x712 Return
}


func_1678(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x68e PushV
	var_131_string = "c"; // 0x68f MovS
	var_132_int = 0; // 0x690 MovI
	
Label_1681:
	var_136_int = 1; // 0x691 PushI
	if(var_136_int == 0) goto Label_1694; // 0x692 JumpB
	var_137_int = 1; // 0x693 PushI
	var_138_int = var_132_int + var_137_int; // 0x694 Add
	var_139_int = var_131_string + var_138_int; // 0x695 Add
	HasProperty(var_139_int, var_133_bool); // 0x696 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x698 Not
	if(var_140_bool == 0) goto Label_1691; // 0x699 JumpB
	goto Label_1694; // 0x69a Jump
	
Label_1694:
	var_141_bool = var_132_int == 0; // 0x69e Not
	if(var_141_bool == 0) goto Label_1698; // 0x69f JumpB
	var_124_bool = 0; // 0x6a0 MovB
	return 10; // 0x6a1 Return
	
Label_1698:
	var_134_int = 0; // 0x6a2 MovI
	var_142_int = 1; // 0x6a3 PushI
	var_143_bool = var_132_int > var_142_int; // 0x6a4 GT
	if(var_143_bool == 0) goto Label_1704; // 0x6a5 JumpB
	irand(var_134_int, var_132_int); // 0x6a6 Func
	
Label_1704:
	var_144_int = 1; // 0x6a8 PushI
	var_145_int = var_134_int + var_144_int; // 0x6a9 Add
	var_146_int = var_131_string + var_145_int; // 0x6aa Add
	GetProperty(var_146_int, var_135_string); // 0x6ab ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x6ad PushV
	var_148_string = var_135_string; // 0x6ae Mov
	func_1789(var_147_bool, var_148_string); // 0x6af NEW_2
	var_124_bool = var_147_bool; // 0x6b0 Mov
	return 10; // 0x6b2 Return
	
Label_1691:
	var_153_int = 1; // 0x69b PushI
	var_132_int = var_132_int + var_153_int; // 0x69c Add2
	goto Label_1681; // 0x69d Jump
}


func_144(var_2_object, var_383_string)
{
	var_384_bool = 0; // 0x91 PushV
	func_1928(var_384_bool); // 0x92 NEW_2
	var_385_bool = var_384_bool == 0; // 0x94 Not
	if(var_385_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_386_bool = var_383_string == var_2_object; // 0x97 Eq
	if(var_386_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_387_string = ""; var_388_bool = 0; // 0x9a PushV
	var_387_string = var_383_string; // 0x9b Mov
	var_389_string = ""; // 0x9c PushS
	var_390_bool = var_383_string == var_389_string; // 0x9d Eq
	if(var_390_bool == 0) goto Label_161; // 0x9e JumpB
	var_388_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1774(var_387_string, var_388_bool); // 0xa2 NEW_2
	var_2_object = var_383_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_388_bool = 1; // 0xa1 MovB
}


func_2064(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x810 PushV
	GetMainOutdoorScene(var_36_object); // 0x811 Func
	var_38_bool = var_36_object == 0; // 0x813 NullEq
	if(var_38_bool == 0) goto Label_2075; // 0x814 JumpB
	var_39_string = "Can't find main outdoor scene"; // 0x815 PushS
	Trace(var_39_string); // 0x816 Func
	var_37_object = 0; // 0x818 SetNull
	var_33_object = var_37_object; // 0x819 Mov
	return 4; // 0x81a Return
	
Label_2075:
	GetMap(var_37_object); // 0x81b ObjFunc
	var_33_object = var_37_object; // 0x81d Mov
	return 4; // 0x81e Return
}


func_1041(var_0_object, var_412_int, var_413_object)
{
	var_415_object = Obj(); var_416_bool = 0; var_417_int = 0; var_418_bool = 0; var_419_object = Obj(); var_420_bool = 0; var_421_int = 0; var_422_bool = 0; // 0x411 PushV
	var_0_object = var_413_object; // 0x412 TMov
	var_423_bool = 0; var_424_object = Obj(); var_425_float = 0; // 0x413 PushV
	var_424_object = var_413_object; // 0x414 Mov
	var_425_float = 70.0; // 0x415 MovF
	func_1535(var_424_object, var_425_float); // 0x416 NEW_2
	var_426_bool = var_423_bool == 0; // 0x418 Not
	if(var_426_bool == 0) goto Label_1052; // 0x419 JumpB
	var_412_int = -2; // 0x41a MovI
	return 8; // 0x41b Return
	
Label_1052:
	CreateDialog(var_419_object); // 0x41c Func
	var_427_int = 0; // 0x41e PushV
	func_1922(var_427_int); // 0x41f NEW_2
	SetNPCName(var_427_int); // 0x421 ObjFunc
	var_428_int = 0; // 0x423 PushV
	func_1920(var_428_int); // 0x424 NEW_2
	SetNPCDescription(var_428_int); // 0x426 ObjFunc
	var_429_string = ""; // 0x428 PushV
	func_1924(var_429_string); // 0x429 NEW_2
	SetPhoto(var_429_string); // 0x42b ObjFunc
	var_430_string = ""; // 0x42d PushV
	func_1926(var_430_string); // 0x42e NEW_2
	SetPhoto2(var_430_string); // 0x430 ObjFunc
	var_431_int = 0; // 0x432 PushV
	func_2114(var_431_int); // 0x433 NEW_2
	SetPlayerName(var_431_int); // 0x435 ObjFunc
	var_421_int = -1; // 0x437 MovI
	IsOverrideActive(var_420_bool); // 0x438 Func
	var_432_bool = var_420_bool; // 0x43a Push
	if(var_432_bool == 0) goto Label_1086; // 0x43b JumpB
	var_412_int = -2; // 0x43c MovI
	return 8; // 0x43d Return
	
Label_1086:
	DoDialog(var_419_object); // 0x43e Func
	var_433_bool = 0; var_434_object = Obj(); // 0x440 PushV
	var_435_object = Obj(); // 0x441 PushV
	func_1811(var_435_object); // 0x442 NEW_2
	var_434_object = var_435_object; // 0x443 Mov
	func_1620(var_433_bool, var_434_object); // 0x445 NEW_2
	var_436_object = Obj(); var_437_object = Obj(); // 0x447 PushV
	var_436_object = var_413_object; // 0x448 Mov
	var_437_object = var_419_object; // 0x449 Mov
	TaskCall(7); // 0x44a TaskCall
	func_1122(var_438_object, var_439_object, var_440_string, var_441_bool, var_436_object, var_437_object); // 0x44b NEW_2
	TaskReturn(); // 0x44c TaskReturn
	IsDialogEnd(var_422_bool); // 0x44e ObjFunc
	
Label_1104:
	var_466_bool = var_422_bool == 0; // 0x450 Not
	if(var_466_bool == 0) goto Label_1111; // 0x451 JumpB
	sync(); // 0x452 Func
	IsDialogEnd(var_422_bool); // 0x454 ObjFunc
	goto Label_1104; // 0x456 Jump
	
Label_1111:
	var_467_object = Obj(); // 0x457 PushV
	var_467_object = var_413_object; // 0x458 Mov
	func_1603(); // 0x459 NEW_2
	StopDialog(var_419_object); // 0x45b Func
	GetReturnValue(var_421_int); // 0x45d ObjFunc
	var_412_int = var_421_int; // 0x45f Mov
	return 8; // 0x460 Return
}


func_1811(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x713 PushV
	self(var_117_object); // 0x714 Func
	var_115_object = var_117_object; // 0x716 Mov
	return 2; // 0x717 Return
}


func_1427()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x593 PushV
	WaitForAnimEnd(); // 0x594 Func
	var_38_bool = 0; // 0x596 PushV
	func_1530(var_38_bool); // 0x597 NEW_2
	var_39_bool = var_38_bool == 0; // 0x599 Not
	if(var_39_bool == 0) goto Label_1436; // 0x59a JumpB
	return 12; // 0x59b Return
	
Label_1436:
	var_40_int = 0; // 0x59c PushV
	func_1903(var_40_int); // 0x59d NEW_2
	var_32_int = var_40_int; // 0x59e Mov
	var_33_int = 0; // 0x5a0 MovI
	
Label_1441:
	var_53_bool = 0; // 0x5a1 PushV
	var_53_bool = 0; // 0x5a2 MovB
	var_54_int = 5; // 0x5a3 PushI
	var_55_bool = var_33_int < var_54_int; // 0x5a4 LT
	if(var_55_bool == 0) goto Label_1451; // 0x5a5 JumpB
	var_56_bool = 0; // 0x5a6 PushV
	func_1530(var_56_bool); // 0x5a7 NEW_2
	if(var_56_bool == 0) goto Label_1451; // 0x5a9 JumpB
	var_53_bool = 1; // 0x5aa MovB
	
Label_1451:
	if(var_53_bool == 0) goto Label_1493; // 0x5ab JumpB
	var_57_bool = var_32_int == 0; // 0x5ac Not
	if(var_57_bool == 0) goto Label_1461; // 0x5ad JumpB
	var_58_int = 3; // 0x5ae PushI
	Sleep(var_58_int, var_34_bool); // 0x5af Func
	var_59_bool = var_34_bool == 0; // 0x5b1 Not
	if(var_59_bool == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1493; // 0x5b3 Jump
	
Label_1493:
	ResetAAS(); // 0x5d5 Func
	return 12; // 0x5d7 Return
	
Label_1460:
	goto Label_1482; // 0x5b4 Jump
	
Label_1482:
	var_60_bool = 0; // 0x5ca PushV
	func_1496(var_60_bool); // 0x5cb NEW_2
	var_61_bool = var_60_bool == 0; // 0x5cd Not
	if(var_61_bool == 0) goto Label_1488; // 0x5ce JumpB
	goto Label_1493; // 0x5cf Jump
	
Label_1488:
	ResetAAS(); // 0x5d0 Func
	var_62_int = 1; // 0x5d2 PushI
	var_33_int = var_33_int + var_62_int; // 0x5d3 Add2
	goto Label_1441; // 0x5d4 Jump
	
Label_1461:
	irand(var_35_int, var_32_int); // 0x5b5 Func
	var_63_int = 5; // 0x5b7 PushI
	irand(var_36_int, var_63_int); // 0x5b8 Func
	var_64_int = 0; // 0x5ba PushI
	var_65_bool = var_36_int != var_64_int; // 0x5bb Neq
	if(var_65_bool == 0) goto Label_1470; // 0x5bc JumpB
	var_35_int = 0; // 0x5bd MovI
	
Label_1470:
	var_66_string = "all"; // 0x5be PushS
	var_67_string = ""; var_68_int = 0; // 0x5bf PushV
	var_68_int = var_35_int; // 0x5c0 Mov
	func_1896(var_67_string, var_68_int); // 0x5c1 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x5c3 Func
	WaitForAnimEnd(var_37_bool); // 0x5c5 Func
	var_69_bool = var_37_bool == 0; // 0x5c7 Not
	if(var_69_bool == 0) goto Label_1482; // 0x5c8 JumpB
	goto Label_1493; // 0x5c9 Jump
}


func_919(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x398 TMov
	var_1_object = var_208_object; // 0x399 TMov
	var_3_string = 0; // 0x39a TMovB
	var_214_int = 1; // 0x39b PushI
	if(var_214_int == 0) goto Label_947; // 0x39c JumpB
	var_215_string = ""; // 0x39d PushV
	var_215_string = "Strict"; // 0x39e MovS
	func_977(var_209_object, var_215_string); // 0x39f NEW_2
	var_232_int = 520670; // 0x3a1 PushI
	SetMessage(var_232_int); // 0x3a2 TObjFunc
	ClearReplies(); // 0x3a4 TObjFunc
	var_233_int = 520671; // 0x3a6 PushI
	var_234_int = -1; // 0x3a7 PushI
	var_235_int = 21878; // 0x3a8 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x3a9 TObjFunc
	var_236_int = 527796; // 0x3ab PushI
	var_237_int = -1; // 0x3ac PushI
	var_238_int = 29129; // 0x3ad PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x3ae TObjFunc
	goto Label_947; // 0x3b0 Jump
	
Label_947:
	var_239_bool = 0; // 0x3b3 PushV
	func_1928(var_239_bool); // 0x3b4 NEW_2
	if(var_239_bool == 0) goto Label_962; // 0x3b6 JumpB
	
Label_951:
	lshWaitForAnimEnd(); // 0x3b7 Func
	var_240_string = var_3_string; // 0x3b9 PushT
	if(var_240_string == 0) goto Label_956; // 0x3ba JumpB
	goto Label_961; // 0x3bb Jump
	
Label_961:
	goto Label_976; // 0x3c1 Jump
	
Label_976:
	return 0; // 0x3d0 Return
	
Label_956:
	var_241_string = ""; // 0x3bc PushV
	var_241_string = var_2_object; // 0x3bd MovT
	func_1758(var_241_string); // 0x3be NEW_2
	goto Label_951; // 0x3c0 Jump
	
Label_962:
	var_252_string = "all"; // 0x3c2 PushS
	var_253_string = "idle"; // 0x3c3 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x3c4 Func
	
Label_966:
	WaitForAnimEnd(); // 0x3c6 Func
	var_254_string = var_3_string; // 0x3c8 PushT
	if(var_254_string == 0) goto Label_971; // 0x3c9 JumpB
	goto Label_976; // 0x3ca Jump
	
Label_971:
	var_255_string = "all"; // 0x3cb PushS
	var_256_string = "idle"; // 0x3cc PushS
	PlayAnimation(var_255_string, var_256_string); // 0x3cd Func
	goto Label_966; // 0x3cf Jump
}


func_1817(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x719 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x71a Or
	var_84_float = sqrt(var_85_int); // 0x71b Sqrt2
	var_86_float = 0.0; // 0x71c PushF
	var_87_bool = var_84_float < var_86_float; // 0x71d LT
	if(var_87_bool == 0) goto Label_1825; // 0x71e JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x71f MovV
	return 2; // 0x720 Return
	
Label_1825:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x721 Div2
	return 2; // 0x722 Return
}


func_1307()
{
	var_470_float = 0; var_471_float = 0; // 0x51b PushV
	var_472_int = 8; // 0x51c PushI
	var_473_int = 16; // 0x51d PushI
	rand(var_471_float, var_472_int, var_473_int); // 0x51e Func
	var_474_int = 10; // 0x520 PushI
	SetTimer(var_474_int, var_471_float); // 0x521 Func
	return 2; // 0x523 Return
}


func_1180(var_2_object, var_443_string)
{
	var_444_bool = 0; // 0x49d PushV
	func_1928(var_444_bool); // 0x49e NEW_2
	var_445_bool = var_444_bool == 0; // 0x4a0 Not
	if(var_445_bool == 0) goto Label_1187; // 0x4a1 JumpB
	return 0; // 0x4a2 Return
	
Label_1187:
	var_446_bool = var_443_string == var_2_object; // 0x4a3 Eq
	if(var_446_bool == 0) goto Label_1190; // 0x4a4 JumpB
	return 0; // 0x4a5 Return
	
Label_1190:
	var_447_string = ""; var_448_bool = 0; // 0x4a6 PushV
	var_447_string = var_443_string; // 0x4a7 Mov
	var_449_string = ""; // 0x4a8 PushS
	var_450_bool = var_443_string == var_449_string; // 0x4a9 Eq
	if(var_450_bool == 0) goto Label_1197; // 0x4aa JumpB
	var_448_bool = 0; // 0x4ab MovB
	goto Label_1198; // 0x4ac Jump
	
Label_1198:
	func_1774(var_447_string, var_448_bool); // 0x4ae NEW_2
	var_2_object = var_443_string; // 0x4b0 TMov
	return 0; // 0x4b1 Return
	
Label_1197:
	var_448_bool = 1; // 0x4ad MovB
}


func_1953()
{
	var_132_string = "oob2Alexandr1"; // 0x7a2 PushS
	var_133_int = 1; // 0x7a3 PushI
	SetVariable(var_132_string, var_133_int); // 0x7a4 Func
	return 0; // 0x7a6 Return
}


func_2081(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; // 0x821 PushV
	GetMainOutdoorScene(var_82_object); // 0x822 Func
	var_84_bool = var_82_object == 0; // 0x824 NullEq
	if(var_84_bool == 0) goto Label_2090; // 0x825 JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x826 PushS
	Trace(var_85_string); // 0x827 Func
	return 8; // 0x829 Return
	
Label_2090:
	GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector); // 0x82a ObjFunc
	var_86_bool = var_83_bool == 0; // 0x82c Not
	if(var_86_bool == 0) goto Label_2100; // 0x82d JumpB
	var_87_string = "Warning: outdoor scene locator "; // 0x82e PushS
	var_88_int = var_87_string + var_73_string; // 0x82f Add
	var_89_string = " doesnt exist"; // 0x830 PushS
	var_90_int = var_88_int + var_89_string; // 0x831 Add
	Trace(var_90_int); // 0x832 Func
	
Label_2100:
	GetMap(var_72_object); // 0x834 ObjFunc
	var_91_bool = var_72_object == 0; // 0x836 NullEq
	if(var_91_bool == 0) goto Label_2108; // 0x837 JumpB
	var_92_string = "Can't find map"; // 0x838 PushS
	Trace(var_92_string); // 0x839 Func
	return 8; // 0x83b Return
	
Label_2108:
	var_93_float = GetByIndex(var_80_cvector, 0); // 0x83c PushE
	var_94_float = GetByIndex(var_80_cvector, 2); // 0x83d PushE
	SetMapParams(var_93_float, var_94_float, var_74_float); // 0x83e ObjFunc
	return 8; // 0x840 Return
}


func_1827(var_302_int, var_303_string)
{
	var_304_int = 0; var_305_int = 0; // 0x723 PushV
	GetVariable(var_303_string, var_305_int); // 0x724 Func
	var_302_int = var_305_int; // 0x726 Mov
	return 2; // 0x727 Return
}


func_1316()
{
	var_469_int = 10; // 0x524 PushI
	KillTimer(var_469_int); // 0x525 Func
	return 0; // 0x527 Return
}


func_1959(var_96_object)
{
	var_98_string = "key is given"; // 0x7a8 PushS
	Trace(var_98_string); // 0x7a9 Func
	var_99_object = Obj(); var_100_string = ""; var_101_int = 0; // 0x7ab PushV
	var_99_object = var_96_object; // 0x7ac Mov
	var_100_string = "b2q01_key"; // 0x7ad MovS
	var_101_int = 1; // 0x7ae MovI
	func_1863(var_99_object, var_100_string, var_101_int); // 0x7af NEW_2
	return 0; // 0x7b1 Return
}


func_1832(var_115_int, var_116_int)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x728 PushV
	CreateIntVector(var_118_object); // 0x729 Func
	add(var_115_int); // 0x72b ObjFunc
	add(var_116_int); // 0x72d ObjFunc
	var_119_int = 3; // 0x72f PushI
	SendWorldWndMessage(var_119_int, var_118_object); // 0x730 Func
	return 2; // 0x732 Return
}


func_428(var_2_object, var_308_string)
{
	var_309_bool = 0; // 0x1ad PushV
	func_1928(var_309_bool); // 0x1ae NEW_2
	var_310_bool = var_309_bool == 0; // 0x1b0 Not
	if(var_310_bool == 0) goto Label_435; // 0x1b1 JumpB
	return 0; // 0x1b2 Return
	
Label_435:
	var_311_bool = var_308_string == var_2_object; // 0x1b3 Eq
	if(var_311_bool == 0) goto Label_438; // 0x1b4 JumpB
	return 0; // 0x1b5 Return
	
Label_438:
	var_312_string = ""; var_313_bool = 0; // 0x1b6 PushV
	var_312_string = var_308_string; // 0x1b7 Mov
	var_314_string = ""; // 0x1b8 PushS
	var_315_bool = var_308_string == var_314_string; // 0x1b9 Eq
	if(var_315_bool == 0) goto Label_445; // 0x1ba JumpB
	var_313_bool = 0; // 0x1bb MovB
	goto Label_446; // 0x1bc Jump
	
Label_446:
	func_1774(var_312_string, var_313_bool); // 0x1be NEW_2
	var_2_object = var_308_string; // 0x1c0 TMov
	return 0; // 0x1c1 Return
	
Label_445:
	var_313_bool = 1; // 0x1bd MovB
}


func_1970()
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0; // 0x7b3 PushV
	var_75_object = Obj(); // 0x7b4 PushV
	func_2064(var_75_object); // 0x7b5 NEW_2
	var_72_object = var_75_object; // 0x7b6 Mov
	var_73_string = "pt_map_ospina"; // 0x7b8 MovS
	var_74_float = 2; // 0x7b9 MovI
	func_2081(var_72_object, var_73_string, var_74_float); // 0x7ba NEW_2
	var_95_object = Obj(); // 0x7bc PushV
	func_2064(var_95_object); // 0x7bd NEW_2
	ShowMap(var_95_object); // 0x7bf ObjFunc
	return 0; // 0x7c1 Return
}


func_1715(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x6b3 PushV
	var_167_string = "d"; // 0x6b4 PushS
	var_168_int = 0; // 0x6b5 PushV
	func_1881(var_168_int); // 0x6b6 NEW_2
	var_174_int = var_167_string + var_168_int; // 0x6b8 Add
	var_175_string = "m"; // 0x6b9 PushS
	var_162_string = var_174_int + var_175_string; // 0x6ba Add2
	var_163_int = 0; // 0x6bb MovI
	
Label_1724:
	var_176_int = 1; // 0x6bc PushI
	if(var_176_int == 0) goto Label_1737; // 0x6bd JumpB
	var_177_int = 1; // 0x6be PushI
	var_178_int = var_163_int + var_177_int; // 0x6bf Add
	var_179_int = var_162_string + var_178_int; // 0x6c0 Add
	HasProperty(var_179_int, var_164_bool); // 0x6c1 ObjFunc
	var_180_bool = var_164_bool == 0; // 0x6c3 Not
	if(var_180_bool == 0) goto Label_1734; // 0x6c4 JumpB
	goto Label_1737; // 0x6c5 Jump
	
Label_1737:
	var_181_bool = var_163_int == 0; // 0x6c9 Not
	if(var_181_bool == 0) goto Label_1741; // 0x6ca JumpB
	var_155_bool = 0; // 0x6cb MovB
	return 10; // 0x6cc Return
	
Label_1741:
	var_165_int = 0; // 0x6cd MovI
	var_182_int = 1; // 0x6ce PushI
	var_183_bool = var_163_int > var_182_int; // 0x6cf GT
	if(var_183_bool == 0) goto Label_1747; // 0x6d0 JumpB
	irand(var_165_int, var_163_int); // 0x6d1 Func
	
Label_1747:
	var_184_int = 1; // 0x6d3 PushI
	var_185_int = var_165_int + var_184_int; // 0x6d4 Add
	var_186_int = var_162_string + var_185_int; // 0x6d5 Add
	GetProperty(var_186_int, var_166_string); // 0x6d6 ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x6d8 PushV
	var_188_string = var_166_string; // 0x6d9 Mov
	func_1789(var_187_bool, var_188_string); // 0x6da NEW_2
	var_155_bool = var_187_bool; // 0x6db Mov
	return 10; // 0x6dd Return
	
Label_1734:
	var_189_int = 1; // 0x6c6 PushI
	var_163_int = var_163_int + var_189_int; // 0x6c7 Add2
	goto Label_1724; // 0x6c8 Jump
}


func_1844(var_105_object, var_106_int)
{
	var_107_int = 0; var_108_int = 0; var_109_bool = 0; var_110_int = 0; var_111_int = 0; var_112_bool = 0; // 0x734 PushV
	GetItemID(var_110_int); // 0x735 ObjFunc
	var_113_string = "Category"; // 0x737 PushS
	GetInvItemProperty(var_111_int, var_110_int, var_113_string); // 0x738 Func
	AddItem(var_112_bool, var_105_object, var_111_int, var_106_int); // 0x73a ObjFunc
	var_114_bool = var_112_bool == 0; // 0x73c Not
	if(var_114_bool == 0) goto Label_1857; // 0x73d JumpB
	DropItems(var_105_object, var_106_int); // 0x73e ObjFunc
	goto Label_1862; // 0x740 Jump
	
Label_1862:
	return 6; // 0x746 Return
	
Label_1857:
	var_115_int = 0; var_116_int = 0; // 0x741 PushV
	var_115_int = var_110_int; // 0x742 Mov
	var_116_int = var_106_int; // 0x743 Mov
	func_1832(var_115_int, var_116_int); // 0x744 NEW_2
}


func_2114(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x842 PushV
	var_107_string = "branch"; // 0x843 PushS
	GetVariable(var_107_string, var_106_int); // 0x844 Func
	var_108_int = 0; // 0x846 PushI
	var_109_bool = var_106_int == var_108_int; // 0x847 Eq
	if(var_109_bool == 0) goto Label_2124; // 0x848 JumpB
	var_104_int = 1; // 0x849 MovI
	return 2; // 0x84a Return
	
Label_2124:
	var_110_int = 1; // 0x84c PushI
	var_111_bool = var_106_int == var_110_int; // 0x84d Eq
	if(var_111_bool == 0) goto Label_2129; // 0x84e JumpB
	var_104_int = 2; // 0x84f MovI
	return 2; // 0x850 Return
	
Label_2129:
	var_104_int = 3; // 0x851 MovI
	return 2; // 0x852 Return
}


func_1603()
{
	var_259_bool = 0; var_260_bool = 0; // 0x643 PushV
	CameraSwitchToNormal(); // 0x644 Func
	var_261_bool = 0; // 0x646 PushV
	func_1928(var_261_bool); // 0x647 NEW_2
	if(var_261_bool == 0) goto Label_1611; // 0x649 JumpB
	goto Label_1619; // 0x64a Jump
	
Label_1619:
	return 2; // 0x653 Return
	
Label_1611:
	var_262_string = "head"; // 0x64b PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x64c Func
	var_263_bool = var_260_bool; // 0x64e Push
	if(var_263_bool == 0) goto Label_1619; // 0x64f JumpB
	var_264_string = "head"; // 0x650 PushS
	UnlookAsync(var_264_string); // 0x651 Func
}


func_1986(var_300_bool)
{
	var_302_int = 0; var_303_string = ""; // 0x7c3 PushV
	var_303_string = "b2q01"; // 0x7c4 MovS
	func_1827(var_302_int, var_303_string); // 0x7c5 NEW_2
	var_306_int = 1; // 0x7c7 PushI
	var_307_bool = var_302_int == var_306_int; // 0x7c8 Eq
	if(var_307_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_300_bool = 1; // 0x7ca MovB
	return 0; // 0x7cb Return
	
Label_1996:
	var_300_bool = 0; // 0x7cc MovB
	return 0; // 0x7cd Return
}


func_838(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x346 PushV
	var_0_object = var_43_object; // 0x347 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x348 PushV
	var_54_object = var_43_object; // 0x349 Mov
	var_55_float = 70.0; // 0x34a MovF
	func_1535(var_54_object, var_55_float); // 0x34b NEW_2
	var_99_bool = var_53_bool == 0; // 0x34d Not
	if(var_99_bool == 0) goto Label_849; // 0x34e JumpB
	var_42_int = -2; // 0x34f MovI
	return 8; // 0x350 Return
	
Label_849:
	CreateDialog(var_49_object); // 0x351 Func
	var_100_int = 0; // 0x353 PushV
	func_1922(var_100_int); // 0x354 NEW_2
	SetNPCName(var_100_int); // 0x356 ObjFunc
	var_101_int = 0; // 0x358 PushV
	func_1920(var_101_int); // 0x359 NEW_2
	SetNPCDescription(var_101_int); // 0x35b ObjFunc
	var_102_string = ""; // 0x35d PushV
	func_1924(var_102_string); // 0x35e NEW_2
	SetPhoto(var_102_string); // 0x360 ObjFunc
	var_103_string = ""; // 0x362 PushV
	func_1926(var_103_string); // 0x363 NEW_2
	SetPhoto2(var_103_string); // 0x365 ObjFunc
	var_104_int = 0; // 0x367 PushV
	func_2114(var_104_int); // 0x368 NEW_2
	SetPlayerName(var_104_int); // 0x36a ObjFunc
	var_51_int = -1; // 0x36c MovI
	IsOverrideActive(var_50_bool); // 0x36d Func
	var_112_bool = var_50_bool; // 0x36f Push
	if(var_112_bool == 0) goto Label_883; // 0x370 JumpB
	var_42_int = -2; // 0x371 MovI
	return 8; // 0x372 Return
	
Label_883:
	DoDialog(var_49_object); // 0x373 Func
	var_113_bool = 0; var_114_object = Obj(); // 0x375 PushV
	var_115_object = Obj(); // 0x376 PushV
	func_1811(var_115_object); // 0x377 NEW_2
	var_114_object = var_115_object; // 0x378 Mov
	func_1620(var_113_bool, var_114_object); // 0x37a NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x37c PushV
	var_208_object = var_43_object; // 0x37d Mov
	var_209_object = var_49_object; // 0x37e Mov
	TaskCall(5); // 0x37f TaskCall
	func_919(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x380 NEW_2
	TaskReturn(); // 0x381 TaskReturn
	IsDialogEnd(var_52_bool); // 0x383 ObjFunc
	
Label_901:
	var_257_bool = var_52_bool == 0; // 0x385 Not
	if(var_257_bool == 0) goto Label_908; // 0x386 JumpB
	sync(); // 0x387 Func
	IsDialogEnd(var_52_bool); // 0x389 ObjFunc
	goto Label_901; // 0x38b Jump
	
Label_908:
	var_258_object = Obj(); // 0x38c PushV
	var_258_object = var_43_object; // 0x38d Mov
	func_1603(); // 0x38e NEW_2
	StopDialog(var_49_object); // 0x390 Func
	GetReturnValue(var_51_int); // 0x392 ObjFunc
	var_42_int = var_51_int; // 0x394 Mov
	return 8; // 0x395 Return
}


func_1863(var_99_object, var_100_string, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x747 PushV
	CreateInvItem(var_103_object); // 0x748 Func
	SetItemName(var_100_string); // 0x74a ObjFunc
	var_104_object = Obj(); var_105_object = Obj(); var_106_int = 0; // 0x74c PushV
	var_104_object = var_99_object; // 0x74d Mov
	var_105_object = var_103_object; // 0x74e Mov
	var_106_int = var_101_int; // 0x74f Mov
	func_1844(var_105_object, var_106_int); // 0x750 NEW_2
	return 2; // 0x752 Return
}


func_1998(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0x7cf PushV
	var_336_string = "oob2Alexandr1"; // 0x7d0 MovS
	func_1827(var_335_int, var_336_string); // 0x7d1 NEW_2
	var_337_int = 0; // 0x7d3 PushI
	var_338_bool = var_335_int == var_337_int; // 0x7d4 Eq
	if(var_338_bool == 0) goto Label_2008; // 0x7d5 JumpB
	var_333_bool = 1; // 0x7d6 MovB
	return 0; // 0x7d7 Return
	
Label_2008:
	var_333_bool = 0; // 0x7d8 MovB
	return 0; // 0x7d9 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_376_object, var_377_object)
{
	var_0_object = var_377_object; // 0x52 TMov
	var_1_object = var_376_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_382_int = 1; // 0x55 PushI
	if(var_382_int == 0) goto Label_114; // 0x56 JumpB
	var_383_string = ""; // 0x57 PushV
	var_383_string = "Neutral"; // 0x58 MovS
	func_144(var_377_object, var_383_string); // 0x59 NEW_2
	var_391_int = 535294; // 0x5b PushI
	SetMessage(var_391_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_392_int = 535295; // 0x60 PushI
	var_393_int = 36973; // 0x61 PushI
	var_394_int = 36972; // 0x62 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x63 TObjFunc
	var_395_int = 535302; // 0x65 PushI
	var_396_int = -1; // 0x66 PushI
	var_397_int = 36980; // 0x67 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x68 TObjFunc
	var_398_int = 535303; // 0x6a PushI
	var_399_int = -1; // 0x6b PushI
	var_400_int = 36981; // 0x6c PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_401_bool = 0; // 0x72 PushV
	func_1928(var_401_bool); // 0x73 NEW_2
	if(var_401_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_402_string = var_3_string; // 0x78 PushT
	if(var_402_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_403_string = ""; // 0x7b PushV
	var_403_string = var_2_object; // 0x7c MovT
	func_1758(var_403_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_404_string = "all"; // 0x81 PushS
	var_405_string = "idle"; // 0x82 PushS
	PlayAnimation(var_404_string, var_405_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_406_string = var_3_string; // 0x87 PushT
	if(var_406_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_407_string = "all"; // 0x8a PushS
	var_408_string = "idle"; // 0x8b PushS
	PlayAnimation(var_407_string, var_408_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_977(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x3d2 PushV
	func_1928(var_216_bool); // 0x3d3 NEW_2
	var_217_bool = var_216_bool == 0; // 0x3d5 Not
	if(var_217_bool == 0) goto Label_984; // 0x3d6 JumpB
	return 0; // 0x3d7 Return
	
Label_984:
	var_218_bool = var_215_string == var_2_object; // 0x3d8 Eq
	if(var_218_bool == 0) goto Label_987; // 0x3d9 JumpB
	return 0; // 0x3da Return
	
Label_987:
	var_219_string = ""; var_220_bool = 0; // 0x3db PushV
	var_219_string = var_215_string; // 0x3dc Mov
	var_221_string = ""; // 0x3dd PushS
	var_222_bool = var_215_string == var_221_string; // 0x3de Eq
	if(var_222_bool == 0) goto Label_994; // 0x3df JumpB
	var_220_bool = 0; // 0x3e0 MovB
	goto Label_995; // 0x3e1 Jump
	
Label_995:
	func_1774(var_219_string, var_220_bool); // 0x3e3 NEW_2
	var_2_object = var_215_string; // 0x3e5 TMov
	return 0; // 0x3e6 Return
	
Label_994:
	var_220_bool = 1; // 0x3e2 MovB
}


func_2131(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x854 PushGE
	var_41_bool = var_40_bool == 0; // 0x855 Not
	if(var_41_bool == 0) goto Label_2144; // 0x856 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x857 PushV
	var_43_object = var_39_object; // 0x858 Mov
	TaskCall(4); // 0x859 TaskCall
	func_838(var_44_object, var_42_int, var_43_object); // 0x85a NEW_2
	TaskReturn(); // 0x85b TaskReturn
	var_265_bool = GlobalVars[1]; // 0x85d PushGE
	var_265_bool = 1; // 0x85e MovB
	GlobalVars[1] = var_265_bool; // 0x85f PopGE
	
Label_2144:
	var_266_bool = 0; var_267_int = 0; // 0x860 PushV
	var_267_int = 2; // 0x861 MovI
	func_1890(var_266_bool, var_267_int); // 0x862 NEW_2
	if(var_266_bool == 0) goto Label_2156; // 0x864 JumpB
	var_269_int = 0; var_270_object = Obj(); // 0x865 PushV
	var_270_object = var_39_object; // 0x866 Mov
	TaskCall(2); // 0x867 TaskCall
	func_259(var_271_object, var_269_int, var_270_object); // 0x868 NEW_2
	TaskReturn(); // 0x869 TaskReturn
	return 0; // 0x86b Return
	
Label_2156:
	var_347_bool = 0; // 0x86c PushV
	var_347_bool = 0; // 0x86d MovB
	var_348_bool = 0; var_349_int = 0; // 0x86e PushV
	var_349_int = 12; // 0x86f MovI
	func_1890(var_348_bool, var_349_int); // 0x870 NEW_2
	if(var_348_bool == 0) goto Label_2167; // 0x872 JumpB
	var_350_bool = GlobalVars[2]; // 0x873 PushGE
	var_351_bool = var_350_bool == 0; // 0x874 Not
	if(var_351_bool == 0) goto Label_2167; // 0x875 JumpB
	var_347_bool = 1; // 0x876 MovB
	
Label_2167:
	if(var_347_bool == 0) goto Label_2178; // 0x877 JumpB
	var_352_int = 0; var_353_object = Obj(); // 0x878 PushV
	var_353_object = var_39_object; // 0x879 Mov
	TaskCall(0); // 0x87a TaskCall
	func_0(var_354_object, var_352_int, var_353_object); // 0x87b NEW_2
	TaskReturn(); // 0x87c TaskReturn
	var_411_bool = GlobalVars[2]; // 0x87e PushGE
	var_411_bool = 1; // 0x87f MovB
	GlobalVars[2] = var_411_bool; // 0x880 PopGE
	return 0; // 0x881 Return
	
Label_2178:
	var_412_int = 0; var_413_object = Obj(); // 0x882 PushV
	var_413_object = var_39_object; // 0x883 Mov
	TaskCall(6); // 0x884 TaskCall
	func_1041(var_414_object, var_412_int, var_413_object); // 0x885 NEW_2
	TaskReturn(); // 0x886 TaskReturn
	return 0; // 0x888 Return
}


func_1620(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x654 PushV
	var_122_string = "voice_common"; // 0x655 PushS
	GetVariable(var_122_string, var_120_int); // 0x656 Func
	var_123_int = var_120_int; // 0x658 Push
	if(var_123_int == 0) goto Label_1658; // 0x659 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x65a PushV
	var_125_object = var_114_object; // 0x65b Mov
	func_1678(var_125_object); // 0x65c NEW_2
	var_154_bool = var_124_bool == 0; // 0x65e Not
	if(var_154_bool == 0) goto Label_1640; // 0x65f JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x660 PushV
	var_156_object = var_114_object; // 0x661 Mov
	func_1715(var_156_object); // 0x662 NEW_2
	var_190_bool = var_155_bool == 0; // 0x664 Not
	if(var_190_bool == 0) goto Label_1640; // 0x665 JumpB
	var_113_bool = 0; // 0x666 MovB
	return 4; // 0x667 Return
	
Label_1640:
	var_191_int = 2; // 0x668 PushI
	irand(var_121_int, var_191_int); // 0x669 Func
	var_192_int = var_121_int; // 0x66b Push
	if(var_192_int == 0) goto Label_1653; // 0x66c JumpB
	var_193_string = "voice_common"; // 0x66d PushS
	var_194_int = 1; // 0x66e PushI
	var_195_int = var_120_int + var_194_int; // 0x66f Add
	var_196_int = 3; // 0x670 PushI
	var_197_int = var_195_int / var_196_int; // 0x671 Mod
	SetVariable(var_193_string, var_197_int); // 0x672 Func
	goto Label_1657; // 0x674 Jump
	
Label_1657:
	goto Label_1676; // 0x679 Jump
	
Label_1676:
	var_113_bool = 1; // 0x68c MovB
	return 4; // 0x68d Return
	
Label_1653:
	var_198_string = "voice_common"; // 0x675 PushS
	var_199_int = 0; // 0x676 PushI
	SetVariable(var_198_string, var_199_int); // 0x677 Func
	
Label_1658:
	var_200_bool = 0; var_201_object = Obj(); // 0x67a PushV
	var_201_object = var_114_object; // 0x67b Mov
	func_1715(var_201_object); // 0x67c NEW_2
	var_202_bool = var_200_bool == 0; // 0x67e Not
	if(var_202_bool == 0) goto Label_1672; // 0x67f JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x680 PushV
	var_204_object = var_114_object; // 0x681 Mov
	func_1678(var_204_object); // 0x682 NEW_2
	var_205_bool = var_203_bool == 0; // 0x684 Not
	if(var_205_bool == 0) goto Label_1672; // 0x685 JumpB
	var_113_bool = 0; // 0x686 MovB
	return 4; // 0x687 Return
	
Label_1672:
	var_206_string = "voice_common"; // 0x688 PushS
	var_207_int = 1; // 0x689 PushI
	SetVariable(var_206_string, var_207_int); // 0x68a Func
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object; // 0x155 TMov
	var_1_object = var_293_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_299_int = 1; // 0x158 PushI
	if(var_299_int == 0) goto Label_398; // 0x159 JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x15a PushV
	var_301_object = var_1_object; // 0x15b MovT
	func_1986(var_301_object); // 0x15c NEW_2
	if(var_300_bool == 0) goto Label_371; // 0x15e JumpB
	var_308_string = ""; // 0x15f PushV
	var_308_string = "Neutral"; // 0x160 MovS
	func_428(var_294_object, var_308_string); // 0x161 NEW_2
	var_316_int = 518239; // 0x163 PushI
	SetMessage(var_316_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_317_int = 518240; // 0x168 PushI
	var_318_int = 20533; // 0x169 PushI
	var_319_int = 19349; // 0x16a PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x16b TObjFunc
	var_320_int = 519398; // 0x16d PushI
	var_321_int = 20561; // 0x16e PushI
	var_322_int = 20560; // 0x16f PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x170 TObjFunc
	goto Label_398; // 0x172 Jump
	
Label_398:
	var_323_bool = 0; // 0x18e PushV
	func_1928(var_323_bool); // 0x18f NEW_2
	if(var_323_bool == 0) goto Label_413; // 0x191 JumpB
	
Label_402:
	lshWaitForAnimEnd(); // 0x192 Func
	var_324_string = var_3_string; // 0x194 PushT
	if(var_324_string == 0) goto Label_407; // 0x195 JumpB
	goto Label_412; // 0x196 Jump
	
Label_412:
	goto Label_427; // 0x19c Jump
	
Label_427:
	return 0; // 0x1ab Return
	
Label_407:
	var_325_string = ""; // 0x197 PushV
	var_325_string = var_2_object; // 0x198 MovT
	func_1758(var_325_string); // 0x199 NEW_2
	goto Label_402; // 0x19b Jump
	
Label_413:
	var_326_string = "all"; // 0x19d PushS
	var_327_string = "idle"; // 0x19e PushS
	PlayAnimation(var_326_string, var_327_string); // 0x19f Func
	
Label_417:
	WaitForAnimEnd(); // 0x1a1 Func
	var_328_string = var_3_string; // 0x1a3 PushT
	if(var_328_string == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_427; // 0x1a5 Jump
	
Label_422:
	var_329_string = "all"; // 0x1a6 PushS
	var_330_string = "idle"; // 0x1a7 PushS
	PlayAnimation(var_329_string, var_330_string); // 0x1a8 Func
	goto Label_417; // 0x1aa Jump
	
Label_371:
	var_331_string = ""; // 0x173 PushV
	var_331_string = "Neutral"; // 0x174 MovS
	func_428(var_294_object, var_331_string); // 0x175 NEW_2
	var_332_int = 518241; // 0x177 PushI
	SetMessage(var_332_int); // 0x178 TObjFunc
	ClearReplies(); // 0x17a TObjFunc
	var_333_bool = 0; var_334_object = Obj(); // 0x17c PushV
	var_334_object = var_1_object; // 0x17d MovT
	func_1998(var_334_object); // 0x17e NEW_2
	if(var_333_bool == 0) goto Label_390; // 0x180 JumpB
	var_339_int = 519376; // 0x181 PushI
	var_340_int = 20538; // 0x182 PushI
	var_341_int = 20537; // 0x183 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x184 TObjFunc
	
Label_390:
	var_342_int = 518242; // 0x186 PushI
	var_343_int = -1; // 0x187 PushI
	var_344_int = 19351; // 0x188 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x189 TObjFunc
	goto Label_398; // 0x18b Jump
}


func_1876(var_44_float)
{
	var_45_float = 0; var_46_float = 0; // 0x754 PushV
	GetGameTime(var_46_float); // 0x755 Func
	var_44_float = var_46_float; // 0x757 Mov
	return 2; // 0x758 Return
}


func_1496(var_60_bool)
{
	var_60_bool = 1; // 0x5d8 MovB
	return 0; // 0x5d9 Return
}


func_1881(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x759 PushV
	GetGameTime(var_170_float); // 0x75a Func
	var_171_int = 1; // 0x75c PushI
	var_172_int = 0; // 0x75d PushV
	var_173_int = 24; // 0x75e PushI
	var_172_int = var_170_float / var_170_float; // 0x75f Div2
	var_168_int = var_171_int + var_172_int; // 0x760 Add2
	return 2; // 0x761 Return
}


func_1498()
{
	StopAnimation(); // 0x5da Func
	StopGroup0(); // 0x5dc Func
	return 0; // 0x5de Return
}


func_2010()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x7da PushV
	var_49_int = 247; // 0x7db PushI
	var_50_int = 1; // 0x7dc PushI
	var_51_int = 520468; // 0x7dd PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0x7de Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0x7e0 PushV
	var_53_object = var_48_object; // 0x7e1 Mov
	var_54_int = 245; // 0x7e2 MovI
	func_2036(var_52_bool, var_53_object, var_54_int); // 0x7e3 NEW_2
	return 2; // 0x7e5 Return
}


func_1758(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x6de PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x6df Func
	var_248_bool = var_245_bool; // 0x6e1 Push
	if(var_248_bool == 0) goto Label_1769; // 0x6e2 JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x6e3 Func
	var_249_bool = 0; // 0x6e5 PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x6e6 Func
	goto Label_1773; // 0x6e8 Jump
	
Label_1773:
	return 6; // 0x6ed Return
	
Label_1769:
	var_250_string = "Can't find lsh animation : "; // 0x6e9 PushS
	var_251_int = var_250_string + var_241_string; // 0x6ea Add
	Trace(var_251_int); // 0x6eb Func
}


func_1503(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x5df PushV
	GetPosition(var_41_cvector); // 0x5e0 Func
	GetPosition(var_42_cvector); // 0x5e2 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x5e4 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x5e5 Or2
	return 6; // 0x5e6 Return
}


func_1122(var_0_object, var_1_object, var_2_object, var_3_string, var_436_object, var_437_object)
{
	var_0_object = var_437_object; // 0x463 TMov
	var_1_object = var_436_object; // 0x464 TMov
	var_3_string = 0; // 0x465 TMovB
	var_442_int = 1; // 0x466 PushI
	if(var_442_int == 0) goto Label_1150; // 0x467 JumpB
	var_443_string = ""; // 0x468 PushV
	var_443_string = "Neutral"; // 0x469 MovS
	func_1180(var_437_object, var_443_string); // 0x46a NEW_2
	var_451_int = 540554; // 0x46c PushI
	SetMessage(var_451_int); // 0x46d TObjFunc
	ClearReplies(); // 0x46f TObjFunc
	var_452_int = 540555; // 0x471 PushI
	var_453_int = -1; // 0x472 PushI
	var_454_int = 42564; // 0x473 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x474 TObjFunc
	var_455_int = 540794; // 0x476 PushI
	var_456_int = -1; // 0x477 PushI
	var_457_int = 42843; // 0x478 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x479 TObjFunc
	goto Label_1150; // 0x47b Jump
	
Label_1150:
	var_458_bool = 0; // 0x47e PushV
	func_1928(var_458_bool); // 0x47f NEW_2
	if(var_458_bool == 0) goto Label_1165; // 0x481 JumpB
	
Label_1154:
	lshWaitForAnimEnd(); // 0x482 Func
	var_459_string = var_3_string; // 0x484 PushT
	if(var_459_string == 0) goto Label_1159; // 0x485 JumpB
	goto Label_1164; // 0x486 Jump
	
Label_1164:
	goto Label_1179; // 0x48c Jump
	
Label_1179:
	return 0; // 0x49b Return
	
Label_1159:
	var_460_string = ""; // 0x487 PushV
	var_460_string = var_2_object; // 0x488 MovT
	func_1758(var_460_string); // 0x489 NEW_2
	goto Label_1154; // 0x48b Jump
	
Label_1165:
	var_461_string = "all"; // 0x48d PushS
	var_462_string = "idle"; // 0x48e PushS
	PlayAnimation(var_461_string, var_462_string); // 0x48f Func
	
Label_1169:
	WaitForAnimEnd(); // 0x491 Func
	var_463_string = var_3_string; // 0x493 PushT
	if(var_463_string == 0) goto Label_1174; // 0x494 JumpB
	goto Label_1179; // 0x495 Jump
	
Label_1174:
	var_464_string = "all"; // 0x496 PushS
	var_465_string = "idle"; // 0x497 PushS
	PlayAnimation(var_464_string, var_465_string); // 0x498 Func
	goto Label_1169; // 0x49a Jump
}


func_1251(var_0_object)
{
	var_22_bool = 0; // 0x4e3 PushV
	func_1530(var_22_bool); // 0x4e4 NEW_2
	var_25_bool = var_22_bool == 0; // 0x4e6 Not
	if(var_25_bool == 0) goto Label_1258; // 0x4e7 JumpB
	Hold(); // 0x4e8 Func
	
Label_1258:
	GetDirection(var_0_object); // 0x4ea Func
	
Label_1260:
	func_1427(); // 0x4ed NEW_2
	goto Label_1260; // 0x4ef Jump
}


func_1890(var_266_bool, var_267_int)
{
	var_268_int = 0; // 0x763 PushV
	func_1881(var_268_int); // 0x764 NEW_2
	var_266_bool = var_268_int == var_267_int; // 0x766 Eq2
	return 0; // 0x767 Return
}


func_1511(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x5e7 PushV
	GetPosition(var_34_cvector); // 0x5e8 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x5ea Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x5eb PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x5ec PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x5ed Func
	var_29_bool = var_36_bool; // 0x5ef Mov
	return 6; // 0x5f0 Return
}


func_1896(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x768 PushV
	var_49_string = "idle"; // 0x769 MovS
	var_50_int = var_47_int; // 0x76a Push
	if(var_50_int == 0) goto Label_1901; // 0x76b JumpB
	var_49_string = var_49_string + var_47_int; // 0x76c Add2
	
Label_1901:
	var_46_string = var_49_string; // 0x76d Mov
	return 2; // 0x76e Return
}


func_2023(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x7e7 PushV
	GetDiaryRoot(var_63_object); // 0x7e8 Func
	var_64_bool = var_63_object == 0; // 0x7ea Not
	if(var_64_bool == 0) goto Label_2033; // 0x7eb JumpB
	var_65_string = "Can't retrieve diary root"; // 0x7ec PushS
	Trace(var_65_string); // 0x7ed Func
	var_61_object = 0; // 0x7ef MovB
	return 2; // 0x7f0 Return
	
Label_2033:
	var_61_object = var_63_object; // 0x7f1 Mov
	return 2; // 0x7f2 Return
}


func_1774(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x6ee PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x6ef Func
	var_229_bool = var_226_bool; // 0x6f1 Push
	if(var_229_bool == 0) goto Label_1784; // 0x6f2 JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x6f3 Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x6f5 Func
	goto Label_1788; // 0x6f7 Jump
	
Label_1788:
	return 6; // 0x6fc Return
	
Label_1784:
	var_230_string = "Can't find lsh animation : "; // 0x6f8 PushS
	var_231_int = var_230_string + var_219_string; // 0x6f9 Add
	Trace(var_231_int); // 0x6fa Func
}


func_1903(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x76f PushV
	var_43_int = 0; // 0x770 MovI
	
Label_1905:
	var_45_string = "all"; // 0x771 PushS
	var_46_string = ""; var_47_int = 0; // 0x772 PushV
	var_47_int = var_43_int; // 0x773 Mov
	func_1896(var_46_string, var_47_int); // 0x774 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x776 Func
	var_51_bool = var_44_bool == 0; // 0x778 Not
	if(var_51_bool == 0) goto Label_1915; // 0x779 JumpB
	goto Label_1918; // 0x77a Jump
	
Label_1918:
	var_40_int = var_43_int; // 0x77e Mov
	return 4; // 0x77f Return
	
Label_1915:
	var_52_int = 1; // 0x77b PushI
	var_43_int = var_43_int + var_52_int; // 0x77c Add2
	goto Label_1905; // 0x77d Jump
}


func_1521(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5f1 PushV
	GetPosition(var_28_cvector); // 0x5f2 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x5f4 PushV
	var_30_cvector = var_28_cvector; // 0x5f5 Mov
	func_1511(var_29_bool, var_30_cvector); // 0x5f6 NEW_2
	var_25_bool = var_29_bool; // 0x5f7 Mov
	return 2; // 0x5f9 Return
}


func_1265(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x4f1 PushV
	var_49_string = "player"; // 0x4f2 PushS
	FindActor(var_48_object, var_49_string); // 0x4f3 Func
	var_50_bool = var_48_object == 0; // 0x4f5 Not
	if(var_50_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_46_bool = 0; // 0x4f7 MovB
	return 2; // 0x4f8 Return
	
Label_1273:
	var_51_bool = 0; var_52_object = Obj(); // 0x4f9 PushV
	var_52_object = var_48_object; // 0x4fa Mov
	func_1521(var_52_object); // 0x4fb NEW_2
	var_46_bool = var_51_bool; // 0x4fc Mov
	return 2; // 0x4fe Return
}


func_2036(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0x7f4 PushV
	var_61_object = Obj(); // 0x7f5 PushV
	func_2023(var_61_object); // 0x7f6 NEW_2
	var_58_object = var_61_object; // 0x7f7 Mov
	Find(var_54_int, var_59_object); // 0x7f9 ObjFunc
	var_66_bool = var_59_object == 0; // 0x7fb Not
	if(var_66_bool == 0) goto Label_2051; // 0x7fc JumpB
	var_67_string = "Can't find diary parent with id: "; // 0x7fd PushS
	var_68_int = var_67_string + var_54_int; // 0x7fe Add
	Trace(var_68_int); // 0x7ff Func
	var_52_bool = 0; // 0x801 MovB
	return 6; // 0x802 Return
	
Label_2051:
	AddChild(var_53_object); // 0x803 ObjFunc
	var_69_int = 7; // 0x805 PushI
	SendWorldWndMessage(var_69_int); // 0x806 Func
	GetCategory(var_60_int); // 0x808 ObjFunc
	SetDiarySection(var_60_int); // 0x80a Func
	var_52_bool = 0; // 0x80c MovB
	return 6; // 0x80d Return
}


func_1530(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5fa PushV
	IsLoaded(var_24_bool); // 0x5fb Func
	var_22_bool = var_24_bool; // 0x5fd Mov
	return 2; // 0x5fe Return
}


func_1789(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x6fd PushV
	var_151_bool = 0; // 0x6fe PushV
	func_1928(var_151_bool); // 0x6ff NEW_2
	if(var_151_bool == 0) goto Label_1802; // 0x701 JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x702 Func
	var_152_bool = var_150_bool; // 0x704 Push
	if(var_152_bool == 0) goto Label_1802; // 0x705 JumpB
	lshPlaySpeech(var_148_string); // 0x706 Func
	var_147_bool = 1; // 0x708 MovB
	return 2; // 0x709 Return
	
Label_1802:
	var_147_bool = 0; // 0x70a MovB
	return 2; // 0x70b Return
}


func_1535(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x5ff PushV
	GetPosition(var_66_cvector); // 0x600 ObjFunc
	GetEyesHeight(var_65_float); // 0x602 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x604 PushE
	var_74_float = var_74_float + var_65_float; // 0x605 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x606 PopE
	GetPosition(var_67_cvector); // 0x607 Func
	GetEyesHeight(var_65_float); // 0x609 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x60b PushE
	var_75_float = var_75_float + var_65_float; // 0x60c Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x60d PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x60e Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x60f PushE
	var_76_float = 0; // 0x610 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x611 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x612 Or
	var_78_float = sqrt(var_77_int); // 0x613 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x614 Div2
	var_69_cvector = -var_68_cvector; // 0x615 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x616 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x617 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x618 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x619 Xor2
	func_1817(var_80_cvector, var_81_cvector); // 0x61a NEW_2
	var_88_int = 25; // 0x61c PushI
	var_89_float = var_80_cvector * var_88_int; // 0x61d Mult
	var_90_int = var_79_float + var_89_float; // 0x61e Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x61f PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x620 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x621 Add2
	IsOverrideActive(var_72_bool); // 0x622 Func
	var_92_bool = var_72_bool; // 0x624 Push
	if(var_92_bool == 0) goto Label_1576; // 0x625 JumpB
	var_53_bool = 0; // 0x626 MovB
	return 18; // 0x627 Return
	
Label_1576:
	StopWorld(); // 0x628 Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x62a Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x62c PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x62d PushE
	Rotate(var_93_float, var_94_float); // 0x62e Func
	var_95_bool = 0; // 0x630 PushV
	func_1928(var_95_bool); // 0x631 NEW_2
	if(var_95_bool == 0) goto Label_1589; // 0x633 JumpB
	goto Label_1597; // 0x634 Jump
	
Label_1597:
	CameraWaitForPlayFinish(); // 0x63d Func
	ResumeWorld(); // 0x63f Func
	var_53_bool = 1; // 0x641 MovB
	return 18; // 0x642 Return
	
Label_1589:
	var_96_string = "head"; // 0x635 PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x636 Func
	var_97_bool = var_73_bool; // 0x638 Push
	if(var_97_bool == 0) goto Label_1597; // 0x639 JumpB
	var_98_string = "head"; // 0x63a PushS
	LookAsyncCamera(var_98_string); // 0x63b Func
}


