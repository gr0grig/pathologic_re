task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xa7 PushI
	if(var_48_int == 0) goto Label_258; // 0xa8 JumpB
	func_4627(); // 0xaa NEW_2
	var_50_int = 36971; // 0xac PushI
	var_51_bool = var_46_bool == var_50_int; // 0xad Eq
	if(var_51_bool == 0) goto Label_200; // 0xae JumpB
	var_52_string = ""; // 0xaf PushV
	var_52_string = "Neutral"; // 0xb0 MovS
	func_144(var_47_cvector, var_52_string); // 0xb1 NEW_2
	var_69_int = 535294; // 0xb3 PushI
	SetMessage(var_69_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_70_int = 535295; // 0xb8 PushI
	var_71_int = 36973; // 0xb9 PushI
	var_72_int = 36972; // 0xba PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xbb TObjFunc
	var_73_int = 535302; // 0xbd PushI
	var_74_int = -1; // 0xbe PushI
	var_75_int = 36980; // 0xbf PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xc0 TObjFunc
	var_76_int = 535303; // 0xc2 PushI
	var_77_int = -1; // 0xc3 PushI
	var_78_int = 36981; // 0xc4 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_79_int = 36973; // 0xc8 PushI
	var_80_bool = var_46_bool == var_79_int; // 0xc9 Eq
	if(var_80_bool == 0) goto Label_223; // 0xca JumpB
	var_81_string = ""; // 0xcb PushV
	var_81_string = "Neutral"; // 0xcc MovS
	func_144(var_47_cvector, var_81_string); // 0xcd NEW_2
	var_82_int = 535296; // 0xcf PushI
	SetMessage(var_82_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_83_int = 535297; // 0xd4 PushI
	var_84_int = 36975; // 0xd5 PushI
	var_85_int = 36974; // 0xd6 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xd7 TObjFunc
	var_86_int = 535301; // 0xd9 PushI
	var_87_int = 36975; // 0xda PushI
	var_88_int = 36978; // 0xdb PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_89_int = 36975; // 0xdf PushI
	var_90_bool = var_46_bool == var_89_int; // 0xe0 Eq
	if(var_90_bool == 0) goto Label_246; // 0xe1 JumpB
	var_91_string = ""; // 0xe2 PushV
	var_91_string = "Neutral"; // 0xe3 MovS
	func_144(var_47_cvector, var_91_string); // 0xe4 NEW_2
	var_92_int = 535298; // 0xe6 PushI
	SetMessage(var_92_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_93_int = 535299; // 0xeb PushI
	var_94_int = -1; // 0xec PushI
	var_95_int = 36976; // 0xed PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xee TObjFunc
	var_96_int = 535300; // 0xf0 PushI
	var_97_int = -1; // 0xf1 PushI
	var_98_int = 36977; // 0xf2 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_99_bool = 0; // 0xf7 PushV
	func_4774(var_99_bool); // 0xf8 NEW_2
	if(var_99_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x1b3 PushI
	if(var_48_int == 0) goto Label_775; // 0x1b4 JumpB
	func_4627(); // 0x1b6 NEW_2
	var_50_int = 19713; // 0x1b8 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x1b9 Eq
	if(var_51_bool == 0) goto Label_448; // 0x1ba JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x1bb PushV
	var_52_object = var_1_object; // 0x1bc MovT
	var_53_object = var_0_object; // 0x1bd MovT
	func_4776(); // 0x1be NEW_2
	
Label_448:
	var_56_int = 19715; // 0x1c0 PushI
	var_57_bool = var_47_cvector == var_56_int; // 0x1c1 Eq
	if(var_57_bool == 0) goto Label_466; // 0x1c2 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x1c3 PushV
	var_58_object = var_1_object; // 0x1c4 MovT
	var_59_object = var_0_object; // 0x1c5 MovT
	func_4782(); // 0x1c6 NEW_2
	var_90_object = Obj(); var_91_object = Obj(); // 0x1c8 PushV
	var_90_object = var_1_object; // 0x1c9 MovT
	var_91_object = var_0_object; // 0x1ca MovT
	func_4963(); // 0x1cb NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0x1cd PushV
	var_115_object = var_1_object; // 0x1ce MovT
	var_116_object = var_0_object; // 0x1cf MovT
	func_4968(); // 0x1d0 NEW_2
	
Label_466:
	var_141_int = 19963; // 0x1d2 PushI
	var_142_bool = var_47_cvector == var_141_int; // 0x1d3 Eq
	if(var_142_bool == 0) goto Label_484; // 0x1d4 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x1d5 PushV
	var_143_object = var_1_object; // 0x1d6 MovT
	var_144_object = var_0_object; // 0x1d7 MovT
	func_4782(); // 0x1d8 NEW_2
	var_145_object = Obj(); var_146_object = Obj(); // 0x1da PushV
	var_145_object = var_1_object; // 0x1db MovT
	var_146_object = var_0_object; // 0x1dc MovT
	func_4963(); // 0x1dd NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x1df PushV
	var_147_object = var_1_object; // 0x1e0 MovT
	var_148_object = var_0_object; // 0x1e1 MovT
	func_4968(); // 0x1e2 NEW_2
	
Label_484:
	var_149_int = 19712; // 0x1e4 PushI
	var_150_bool = var_46_bool == var_149_int; // 0x1e5 Eq
	if(var_150_bool == 0) goto Label_521; // 0x1e6 JumpB
	var_151_string = ""; // 0x1e7 PushV
	var_151_string = "Strange"; // 0x1e8 MovS
	func_412(var_47_cvector, var_151_string); // 0x1e9 NEW_2
	var_168_int = 518620; // 0x1eb PushI
	SetMessage(var_168_int); // 0x1ec TObjFunc
	ClearReplies(); // 0x1ee TObjFunc
	var_169_bool = 0; // 0x1f0 PushV
	var_169_bool = 0; // 0x1f1 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x1f2 PushV
	var_171_object = var_1_object; // 0x1f3 MovT
	func_5099(var_171_object); // 0x1f4 NEW_2
	if(var_170_bool == 0) goto Label_509; // 0x1f6 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x1f7 PushV
	var_177_object = var_1_object; // 0x1f8 MovT
	func_5111(var_177_object); // 0x1f9 NEW_2
	if(var_176_bool == 0) goto Label_509; // 0x1fb JumpB
	var_169_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_169_bool == 0) goto Label_515; // 0x1fd JumpB
	var_182_int = 518621; // 0x1fe PushI
	var_183_int = 19933; // 0x1ff PushI
	var_184_int = 19713; // 0x200 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x201 TObjFunc
	
Label_515:
	var_185_int = 518624; // 0x203 PushI
	var_186_int = -1; // 0x204 PushI
	var_187_int = 19716; // 0x205 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x206 TObjFunc
	return 0; // 0x208 Return
	
Label_521:
	var_188_int = 19933; // 0x209 PushI
	var_189_bool = var_46_bool == var_188_int; // 0x20a Eq
	if(var_189_bool == 0) goto Label_539; // 0x20b JumpB
	var_190_string = ""; // 0x20c PushV
	var_190_string = "Neutral"; // 0x20d MovS
	func_412(var_47_cvector, var_190_string); // 0x20e NEW_2
	var_191_int = 518828; // 0x210 PushI
	SetMessage(var_191_int); // 0x211 TObjFunc
	ClearReplies(); // 0x213 TObjFunc
	var_192_int = 518829; // 0x215 PushI
	var_193_int = 19935; // 0x216 PushI
	var_194_int = 19934; // 0x217 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x218 TObjFunc
	return 0; // 0x21a Return
	
Label_539:
	var_195_int = 19935; // 0x21b PushI
	var_196_bool = var_46_bool == var_195_int; // 0x21c Eq
	if(var_196_bool == 0) goto Label_562; // 0x21d JumpB
	var_197_string = ""; // 0x21e PushV
	var_197_string = "Fear"; // 0x21f MovS
	func_412(var_47_cvector, var_197_string); // 0x220 NEW_2
	var_198_int = 518830; // 0x222 PushI
	SetMessage(var_198_int); // 0x223 TObjFunc
	ClearReplies(); // 0x225 TObjFunc
	var_199_int = 518831; // 0x227 PushI
	var_200_int = 19937; // 0x228 PushI
	var_201_int = 19936; // 0x229 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x22a TObjFunc
	var_202_int = 518845; // 0x22c PushI
	var_203_int = 19951; // 0x22d PushI
	var_204_int = 19950; // 0x22e PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x22f TObjFunc
	return 0; // 0x231 Return
	
Label_562:
	var_205_int = 19951; // 0x232 PushI
	var_206_bool = var_46_bool == var_205_int; // 0x233 Eq
	if(var_206_bool == 0) goto Label_585; // 0x234 JumpB
	var_207_string = ""; // 0x235 PushV
	var_207_string = "Neutral"; // 0x236 MovS
	func_412(var_47_cvector, var_207_string); // 0x237 NEW_2
	var_208_int = 518846; // 0x239 PushI
	SetMessage(var_208_int); // 0x23a TObjFunc
	ClearReplies(); // 0x23c TObjFunc
	var_209_int = 518847; // 0x23e PushI
	var_210_int = 19937; // 0x23f PushI
	var_211_int = 19952; // 0x240 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x241 TObjFunc
	var_212_int = 518848; // 0x243 PushI
	var_213_int = 19940; // 0x244 PushI
	var_214_int = 19953; // 0x245 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x246 TObjFunc
	return 0; // 0x248 Return
	
Label_585:
	var_215_int = 19937; // 0x249 PushI
	var_216_bool = var_46_bool == var_215_int; // 0x24a Eq
	if(var_216_bool == 0) goto Label_603; // 0x24b JumpB
	var_217_string = ""; // 0x24c PushV
	var_217_string = "Neutral"; // 0x24d MovS
	func_412(var_47_cvector, var_217_string); // 0x24e NEW_2
	var_218_int = 518832; // 0x250 PushI
	SetMessage(var_218_int); // 0x251 TObjFunc
	ClearReplies(); // 0x253 TObjFunc
	var_219_int = 518834; // 0x255 PushI
	var_220_int = 19940; // 0x256 PushI
	var_221_int = 19939; // 0x257 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x258 TObjFunc
	return 0; // 0x25a Return
	
Label_603:
	var_222_int = 19940; // 0x25b PushI
	var_223_bool = var_46_bool == var_222_int; // 0x25c Eq
	if(var_223_bool == 0) goto Label_626; // 0x25d JumpB
	var_224_string = ""; // 0x25e PushV
	var_224_string = "Neutral"; // 0x25f MovS
	func_412(var_47_cvector, var_224_string); // 0x260 NEW_2
	var_225_int = 518835; // 0x262 PushI
	SetMessage(var_225_int); // 0x263 TObjFunc
	ClearReplies(); // 0x265 TObjFunc
	var_226_int = 518837; // 0x267 PushI
	var_227_int = 19948; // 0x268 PushI
	var_228_int = 19942; // 0x269 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x26a TObjFunc
	var_229_int = 518836; // 0x26c PushI
	var_230_int = 19943; // 0x26d PushI
	var_231_int = 19941; // 0x26e PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x26f TObjFunc
	return 0; // 0x271 Return
	
Label_626:
	var_232_int = 19943; // 0x272 PushI
	var_233_bool = var_46_bool == var_232_int; // 0x273 Eq
	if(var_233_bool == 0) goto Label_649; // 0x274 JumpB
	var_234_string = ""; // 0x275 PushV
	var_234_string = "Neutral"; // 0x276 MovS
	func_412(var_47_cvector, var_234_string); // 0x277 NEW_2
	var_235_int = 518838; // 0x279 PushI
	SetMessage(var_235_int); // 0x27a TObjFunc
	ClearReplies(); // 0x27c TObjFunc
	var_236_int = 518841; // 0x27e PushI
	var_237_int = 19954; // 0x27f PushI
	var_238_int = 19946; // 0x280 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x281 TObjFunc
	var_239_int = 518839; // 0x283 PushI
	var_240_int = 19945; // 0x284 PushI
	var_241_int = 19944; // 0x285 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x286 TObjFunc
	return 0; // 0x288 Return
	
Label_649:
	var_242_int = 19945; // 0x289 PushI
	var_243_bool = var_46_bool == var_242_int; // 0x28a Eq
	if(var_243_bool == 0) goto Label_667; // 0x28b JumpB
	var_244_string = ""; // 0x28c PushV
	var_244_string = "Grin"; // 0x28d MovS
	func_412(var_47_cvector, var_244_string); // 0x28e NEW_2
	var_245_int = 518840; // 0x290 PushI
	SetMessage(var_245_int); // 0x291 TObjFunc
	ClearReplies(); // 0x293 TObjFunc
	var_246_int = 518842; // 0x295 PushI
	var_247_int = -1; // 0x296 PushI
	var_248_int = 19947; // 0x297 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x298 TObjFunc
	return 0; // 0x29a Return
	
Label_667:
	var_249_int = 19954; // 0x29b PushI
	var_250_bool = var_46_bool == var_249_int; // 0x29c Eq
	if(var_250_bool == 0) goto Label_690; // 0x29d JumpB
	var_251_string = ""; // 0x29e PushV
	var_251_string = "Grin"; // 0x29f MovS
	func_412(var_47_cvector, var_251_string); // 0x2a0 NEW_2
	var_252_int = 518849; // 0x2a2 PushI
	SetMessage(var_252_int); // 0x2a3 TObjFunc
	ClearReplies(); // 0x2a5 TObjFunc
	var_253_int = 518850; // 0x2a7 PushI
	var_254_int = 19956; // 0x2a8 PushI
	var_255_int = 19955; // 0x2a9 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x2aa TObjFunc
	var_256_int = 518852; // 0x2ac PushI
	var_257_int = 19956; // 0x2ad PushI
	var_258_int = 19957; // 0x2ae PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2af TObjFunc
	return 0; // 0x2b1 Return
	
Label_690:
	var_259_int = 19956; // 0x2b2 PushI
	var_260_bool = var_46_bool == var_259_int; // 0x2b3 Eq
	if(var_260_bool == 0) goto Label_708; // 0x2b4 JumpB
	var_261_string = ""; // 0x2b5 PushV
	var_261_string = "Neutral"; // 0x2b6 MovS
	func_412(var_47_cvector, var_261_string); // 0x2b7 NEW_2
	var_262_int = 518851; // 0x2b9 PushI
	SetMessage(var_262_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_263_int = 518853; // 0x2be PushI
	var_264_int = 19714; // 0x2bf PushI
	var_265_int = 19959; // 0x2c0 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_266_int = 19948; // 0x2c4 PushI
	var_267_bool = var_46_bool == var_266_int; // 0x2c5 Eq
	if(var_267_bool == 0) goto Label_726; // 0x2c6 JumpB
	var_268_string = ""; // 0x2c7 PushV
	var_268_string = "Grimacing"; // 0x2c8 MovS
	func_412(var_47_cvector, var_268_string); // 0x2c9 NEW_2
	var_269_int = 518843; // 0x2cb PushI
	SetMessage(var_269_int); // 0x2cc TObjFunc
	ClearReplies(); // 0x2ce TObjFunc
	var_270_int = 518844; // 0x2d0 PushI
	var_271_int = 19714; // 0x2d1 PushI
	var_272_int = 19949; // 0x2d2 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x2d3 TObjFunc
	return 0; // 0x2d5 Return
	
Label_726:
	var_273_int = 19714; // 0x2d6 PushI
	var_274_bool = var_46_bool == var_273_int; // 0x2d7 Eq
	if(var_274_bool == 0) goto Label_745; // 0x2d8 JumpB
	var_275_int = 518622; // 0x2d9 PushI
	SetMessage(var_275_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_276_int = 518623; // 0x2de PushI
	var_277_int = -1; // 0x2df PushI
	var_278_int = 19715; // 0x2e0 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x2e1 TObjFunc
	var_279_int = 518854; // 0x2e3 PushI
	var_280_int = 19962; // 0x2e4 PushI
	var_281_int = 19961; // 0x2e5 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x2e6 TObjFunc
	return 0; // 0x2e8 Return
	
Label_745:
	var_282_int = 19962; // 0x2e9 PushI
	var_283_bool = var_46_bool == var_282_int; // 0x2ea Eq
	if(var_283_bool == 0) goto Label_763; // 0x2eb JumpB
	var_284_string = ""; // 0x2ec PushV
	var_284_string = "Neutral"; // 0x2ed MovS
	func_412(var_47_cvector, var_284_string); // 0x2ee NEW_2
	var_285_int = 518855; // 0x2f0 PushI
	SetMessage(var_285_int); // 0x2f1 TObjFunc
	ClearReplies(); // 0x2f3 TObjFunc
	var_286_int = 518856; // 0x2f5 PushI
	var_287_int = -1; // 0x2f6 PushI
	var_288_int = 19963; // 0x2f7 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x2f8 TObjFunc
	return 0; // 0x2fa Return
	
Label_763:
	var_3_string = 1; // 0x2fb TMovB
	var_289_bool = 0; // 0x2fc PushV
	func_4774(var_289_bool); // 0x2fd NEW_2
	if(var_289_bool == 0) goto Label_771; // 0x2ff JumpB
	lshStopAnimation(); // 0x300 Func
	goto Label_773; // 0x302 Jump
	
Label_773:
	return 0; // 0x305 Return
	
Label_771:
	StopAnimation(); // 0x303 Func
	
Label_775:
	return 0; // 0x307 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x3b9 PushI
	if(var_48_int == 0) goto Label_1170; // 0x3ba JumpB
	func_4627(); // 0x3bc NEW_2
	var_50_int = 20446; // 0x3be PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x3bf Eq
	if(var_51_bool == 0) goto Label_971; // 0x3c0 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x3c1 PushV
	var_52_object = var_1_object; // 0x3c2 MovT
	var_53_object = var_0_object; // 0x3c3 MovT
	func_4820(); // 0x3c4 NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0x3c6 PushV
	var_101_object = var_1_object; // 0x3c7 MovT
	var_102_object = var_0_object; // 0x3c8 MovT
	func_4848(); // 0x3c9 NEW_2
	
Label_971:
	var_127_int = 20443; // 0x3cb PushI
	var_128_bool = var_47_cvector == var_127_int; // 0x3cc Eq
	if(var_128_bool == 0) goto Label_979; // 0x3cd JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x3ce PushV
	var_129_object = var_1_object; // 0x3cf MovT
	var_130_object = var_0_object; // 0x3d0 MovT
	func_4814(); // 0x3d1 NEW_2
	
Label_979:
	var_133_int = 20425; // 0x3d3 PushI
	var_134_bool = var_46_bool == var_133_int; // 0x3d4 Eq
	if(var_134_bool == 0) goto Label_1017; // 0x3d5 JumpB
	var_135_string = ""; // 0x3d6 PushV
	var_135_string = "Neutral"; // 0x3d7 MovS
	func_930(var_47_cvector, var_135_string); // 0x3d8 NEW_2
	var_152_int = 519273; // 0x3da PushI
	SetMessage(var_152_int); // 0x3db TObjFunc
	ClearReplies(); // 0x3dd TObjFunc
	var_153_bool = 0; var_154_object = Obj(); // 0x3df PushV
	var_154_object = var_1_object; // 0x3e0 MovT
	func_5135(var_154_object); // 0x3e1 NEW_2
	if(var_153_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_161_int = 519274; // 0x3e4 PushI
	var_162_int = 20428; // 0x3e5 PushI
	var_163_int = 20426; // 0x3e6 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x3e7 TObjFunc
	
Label_1001:
	var_164_bool = 0; var_165_object = Obj(); // 0x3e9 PushV
	var_165_object = var_1_object; // 0x3ea MovT
	func_5123(var_165_object); // 0x3eb NEW_2
	if(var_164_bool == 0) goto Label_1011; // 0x3ed JumpB
	var_170_int = 519289; // 0x3ee PushI
	var_171_int = 20444; // 0x3ef PushI
	var_172_int = 20443; // 0x3f0 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x3f1 TObjFunc
	
Label_1011:
	var_173_int = 519275; // 0x3f3 PushI
	var_174_int = -1; // 0x3f4 PushI
	var_175_int = 20427; // 0x3f5 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x3f6 TObjFunc
	return 0; // 0x3f8 Return
	
Label_1017:
	var_176_int = 20444; // 0x3f9 PushI
	var_177_bool = var_46_bool == var_176_int; // 0x3fa Eq
	if(var_177_bool == 0) goto Label_1035; // 0x3fb JumpB
	var_178_string = ""; // 0x3fc PushV
	var_178_string = "Neutral"; // 0x3fd MovS
	func_930(var_47_cvector, var_178_string); // 0x3fe NEW_2
	var_179_int = 519290; // 0x400 PushI
	SetMessage(var_179_int); // 0x401 TObjFunc
	ClearReplies(); // 0x403 TObjFunc
	var_180_int = 519291; // 0x405 PushI
	var_181_int = -1; // 0x406 PushI
	var_182_int = 20445; // 0x407 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x408 TObjFunc
	return 0; // 0x40a Return
	
Label_1035:
	var_183_int = 20428; // 0x40b PushI
	var_184_bool = var_46_bool == var_183_int; // 0x40c Eq
	if(var_184_bool == 0) goto Label_1058; // 0x40d JumpB
	var_185_string = ""; // 0x40e PushV
	var_185_string = "Neutral"; // 0x40f MovS
	func_930(var_47_cvector, var_185_string); // 0x410 NEW_2
	var_186_int = 519276; // 0x412 PushI
	SetMessage(var_186_int); // 0x413 TObjFunc
	ClearReplies(); // 0x415 TObjFunc
	var_187_int = 519277; // 0x417 PushI
	var_188_int = 20432; // 0x418 PushI
	var_189_int = 20429; // 0x419 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x41a TObjFunc
	var_190_int = 519278; // 0x41c PushI
	var_191_int = 20431; // 0x41d PushI
	var_192_int = 20430; // 0x41e PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x41f TObjFunc
	return 0; // 0x421 Return
	
Label_1058:
	var_193_int = 20431; // 0x422 PushI
	var_194_bool = var_46_bool == var_193_int; // 0x423 Eq
	if(var_194_bool == 0) goto Label_1076; // 0x424 JumpB
	var_195_string = ""; // 0x425 PushV
	var_195_string = "Neutral"; // 0x426 MovS
	func_930(var_47_cvector, var_195_string); // 0x427 NEW_2
	var_196_int = 519279; // 0x429 PushI
	SetMessage(var_196_int); // 0x42a TObjFunc
	ClearReplies(); // 0x42c TObjFunc
	var_197_int = 519281; // 0x42e PushI
	var_198_int = 20432; // 0x42f PushI
	var_199_int = 20433; // 0x430 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x431 TObjFunc
	return 0; // 0x433 Return
	
Label_1076:
	var_200_int = 20432; // 0x434 PushI
	var_201_bool = var_46_bool == var_200_int; // 0x435 Eq
	if(var_201_bool == 0) goto Label_1099; // 0x436 JumpB
	var_202_string = ""; // 0x437 PushV
	var_202_string = "Neutral"; // 0x438 MovS
	func_930(var_47_cvector, var_202_string); // 0x439 NEW_2
	var_203_int = 519280; // 0x43b PushI
	SetMessage(var_203_int); // 0x43c TObjFunc
	ClearReplies(); // 0x43e TObjFunc
	var_204_int = 519282; // 0x440 PushI
	var_205_int = 20436; // 0x441 PushI
	var_206_int = 20435; // 0x442 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x443 TObjFunc
	var_207_int = 527864; // 0x445 PushI
	var_208_int = 20439; // 0x446 PushI
	var_209_int = 29209; // 0x447 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x448 TObjFunc
	return 0; // 0x44a Return
	
Label_1099:
	var_210_int = 20436; // 0x44b PushI
	var_211_bool = var_46_bool == var_210_int; // 0x44c Eq
	if(var_211_bool == 0) goto Label_1122; // 0x44d JumpB
	var_212_string = ""; // 0x44e PushV
	var_212_string = "Neutral"; // 0x44f MovS
	func_930(var_47_cvector, var_212_string); // 0x450 NEW_2
	var_213_int = 519283; // 0x452 PushI
	SetMessage(var_213_int); // 0x453 TObjFunc
	ClearReplies(); // 0x455 TObjFunc
	var_214_int = 519284; // 0x457 PushI
	var_215_int = 20441; // 0x458 PushI
	var_216_int = 20437; // 0x459 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x45a TObjFunc
	var_217_int = 519285; // 0x45c PushI
	var_218_int = 20439; // 0x45d PushI
	var_219_int = 20438; // 0x45e PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x45f TObjFunc
	return 0; // 0x461 Return
	
Label_1122:
	var_220_int = 20439; // 0x462 PushI
	var_221_bool = var_46_bool == var_220_int; // 0x463 Eq
	if(var_221_bool == 0) goto Label_1140; // 0x464 JumpB
	var_222_string = ""; // 0x465 PushV
	var_222_string = "Neutral"; // 0x466 MovS
	func_930(var_47_cvector, var_222_string); // 0x467 NEW_2
	var_223_int = 519286; // 0x469 PushI
	SetMessage(var_223_int); // 0x46a TObjFunc
	ClearReplies(); // 0x46c TObjFunc
	var_224_int = 519287; // 0x46e PushI
	var_225_int = 20441; // 0x46f PushI
	var_226_int = 20440; // 0x470 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x471 TObjFunc
	return 0; // 0x473 Return
	
Label_1140:
	var_227_int = 20441; // 0x474 PushI
	var_228_bool = var_46_bool == var_227_int; // 0x475 Eq
	if(var_228_bool == 0) goto Label_1158; // 0x476 JumpB
	var_229_string = ""; // 0x477 PushV
	var_229_string = "Neutral"; // 0x478 MovS
	func_930(var_47_cvector, var_229_string); // 0x479 NEW_2
	var_230_int = 519288; // 0x47b PushI
	SetMessage(var_230_int); // 0x47c TObjFunc
	ClearReplies(); // 0x47e TObjFunc
	var_231_int = 519292; // 0x480 PushI
	var_232_int = -1; // 0x481 PushI
	var_233_int = 20446; // 0x482 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x483 TObjFunc
	return 0; // 0x485 Return
	
Label_1158:
	var_3_string = 1; // 0x486 TMovB
	var_234_bool = 0; // 0x487 PushV
	func_4774(var_234_bool); // 0x488 NEW_2
	if(var_234_bool == 0) goto Label_1166; // 0x48a JumpB
	lshStopAnimation(); // 0x48b Func
	goto Label_1168; // 0x48d Jump
	
Label_1168:
	return 0; // 0x490 Return
	
Label_1166:
	StopAnimation(); // 0x48e Func
	
Label_1170:
	return 0; // 0x492 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x571 PushI
	if(var_48_int == 0) goto Label_2103; // 0x572 JumpB
	func_4627(); // 0x574 NEW_2
	var_50_int = 21486; // 0x576 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x577 Eq
	if(var_51_bool == 0) goto Label_1406; // 0x578 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x579 PushV
	var_52_object = var_1_object; // 0x57a MovT
	var_53_object = var_0_object; // 0x57b MovT
	func_4990(); // 0x57c NEW_2
	
Label_1406:
	var_70_int = 21480; // 0x57e PushI
	var_71_bool = var_47_cvector == var_70_int; // 0x57f Eq
	if(var_71_bool == 0) goto Label_1414; // 0x580 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x581 PushV
	var_72_object = var_1_object; // 0x582 MovT
	var_73_object = var_0_object; // 0x583 MovT
	func_4990(); // 0x584 NEW_2
	
Label_1414:
	var_74_int = 21481; // 0x586 PushI
	var_75_bool = var_47_cvector == var_74_int; // 0x587 Eq
	if(var_75_bool == 0) goto Label_1422; // 0x588 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x589 PushV
	var_76_object = var_1_object; // 0x58a MovT
	var_77_object = var_0_object; // 0x58b MovT
	func_4990(); // 0x58c NEW_2
	
Label_1422:
	var_78_int = 21496; // 0x58e PushI
	var_79_bool = var_47_cvector == var_78_int; // 0x58f Eq
	if(var_79_bool == 0) goto Label_1430; // 0x590 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x591 PushV
	var_80_object = var_1_object; // 0x592 MovT
	var_81_object = var_0_object; // 0x593 MovT
	func_4864(); // 0x594 NEW_2
	
Label_1430:
	var_84_int = 21512; // 0x596 PushI
	var_85_bool = var_47_cvector == var_84_int; // 0x597 Eq
	if(var_85_bool == 0) goto Label_1438; // 0x598 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x599 PushV
	var_86_object = var_1_object; // 0x59a MovT
	var_87_object = var_0_object; // 0x59b MovT
	func_4870(); // 0x59c NEW_2
	
Label_1438:
	var_90_int = 21518; // 0x59e PushI
	var_91_bool = var_47_cvector == var_90_int; // 0x59f Eq
	if(var_91_bool == 0) goto Label_1446; // 0x5a0 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x5a1 PushV
	var_92_object = var_1_object; // 0x5a2 MovT
	var_93_object = var_0_object; // 0x5a3 MovT
	func_4888(); // 0x5a4 NEW_2
	
Label_1446:
	var_128_int = 21519; // 0x5a6 PushI
	var_129_bool = var_47_cvector == var_128_int; // 0x5a7 Eq
	if(var_129_bool == 0) goto Label_1454; // 0x5a8 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x5a9 PushV
	var_130_object = var_1_object; // 0x5aa MovT
	var_131_object = var_0_object; // 0x5ab MovT
	func_4876(); // 0x5ac NEW_2
	
Label_1454:
	var_134_int = 21522; // 0x5ae PushI
	var_135_bool = var_47_cvector == var_134_int; // 0x5af Eq
	if(var_135_bool == 0) goto Label_1462; // 0x5b0 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x5b1 PushV
	var_136_object = var_1_object; // 0x5b2 MovT
	var_137_object = var_0_object; // 0x5b3 MovT
	func_4882(); // 0x5b4 NEW_2
	
Label_1462:
	var_140_int = 21471; // 0x5b6 PushI
	var_141_bool = var_46_bool == var_140_int; // 0x5b7 Eq
	if(var_141_bool == 0) goto Label_1545; // 0x5b8 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x5b9 PushV
	var_143_object = var_1_object; // 0x5ba MovT
	func_5147(var_143_object); // 0x5bb NEW_2
	if(var_142_bool == 0) goto Label_1490; // 0x5bd JumpB
	var_148_string = ""; // 0x5be PushV
	var_148_string = "Neutral"; // 0x5bf MovS
	func_1370(var_47_cvector, var_148_string); // 0x5c0 NEW_2
	var_165_int = 520279; // 0x5c2 PushI
	SetMessage(var_165_int); // 0x5c3 TObjFunc
	ClearReplies(); // 0x5c5 TObjFunc
	var_166_int = 520280; // 0x5c7 PushI
	var_167_int = 21473; // 0x5c8 PushI
	var_168_int = 21472; // 0x5c9 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x5ca TObjFunc
	var_169_int = 520299; // 0x5cc PushI
	var_170_int = 21475; // 0x5cd PushI
	var_171_int = 21493; // 0x5ce PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x5cf TObjFunc
	return 0; // 0x5d1 Return
	
Label_1490:
	var_172_string = ""; // 0x5d2 PushV
	var_172_string = "Neutral"; // 0x5d3 MovS
	func_1370(var_47_cvector, var_172_string); // 0x5d4 NEW_2
	var_173_int = 520300; // 0x5d6 PushI
	SetMessage(var_173_int); // 0x5d7 TObjFunc
	ClearReplies(); // 0x5d9 TObjFunc
	var_174_bool = 0; var_175_object = Obj(); // 0x5db PushV
	var_175_object = var_1_object; // 0x5dc MovT
	func_5159(var_175_object); // 0x5dd NEW_2
	if(var_174_bool == 0) goto Label_1509; // 0x5df JumpB
	var_180_int = 520301; // 0x5e0 PushI
	var_181_int = 21497; // 0x5e1 PushI
	var_182_int = 21496; // 0x5e2 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x5e3 TObjFunc
	
Label_1509:
	var_183_bool = 0; var_184_object = Obj(); // 0x5e5 PushV
	var_184_object = var_1_object; // 0x5e6 MovT
	func_5171(var_184_object); // 0x5e7 NEW_2
	if(var_183_bool == 0) goto Label_1519; // 0x5e9 JumpB
	var_189_int = 520317; // 0x5ea PushI
	var_190_int = 21513; // 0x5eb PushI
	var_191_int = 21512; // 0x5ec PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x5ed TObjFunc
	
Label_1519:
	var_192_bool = 0; var_193_object = Obj(); // 0x5ef PushV
	var_193_object = var_1_object; // 0x5f0 MovT
	func_5183(var_193_object); // 0x5f1 NEW_2
	if(var_192_bool == 0) goto Label_1529; // 0x5f3 JumpB
	var_198_int = 520324; // 0x5f4 PushI
	var_199_int = 21520; // 0x5f5 PushI
	var_200_int = 21519; // 0x5f6 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x5f7 TObjFunc
	
Label_1529:
	var_201_bool = 0; var_202_object = Obj(); // 0x5f9 PushV
	var_202_object = var_1_object; // 0x5fa MovT
	func_5195(var_202_object); // 0x5fb NEW_2
	if(var_201_bool == 0) goto Label_1539; // 0x5fd JumpB
	var_207_int = 520327; // 0x5fe PushI
	var_208_int = 21523; // 0x5ff PushI
	var_209_int = 21522; // 0x600 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x601 TObjFunc
	
Label_1539:
	var_210_int = 520330; // 0x603 PushI
	var_211_int = -1; // 0x604 PushI
	var_212_int = 21525; // 0x605 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x606 TObjFunc
	return 0; // 0x608 Return
	
Label_1545:
	var_213_int = 21523; // 0x609 PushI
	var_214_bool = var_46_bool == var_213_int; // 0x60a Eq
	if(var_214_bool == 0) goto Label_1563; // 0x60b JumpB
	var_215_string = ""; // 0x60c PushV
	var_215_string = "Neutral"; // 0x60d MovS
	func_1370(var_47_cvector, var_215_string); // 0x60e NEW_2
	var_216_int = 520328; // 0x610 PushI
	SetMessage(var_216_int); // 0x611 TObjFunc
	ClearReplies(); // 0x613 TObjFunc
	var_217_int = 527820; // 0x615 PushI
	var_218_int = 29160; // 0x616 PushI
	var_219_int = 29159; // 0x617 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x618 TObjFunc
	return 0; // 0x61a Return
	
Label_1563:
	var_220_int = 29160; // 0x61b PushI
	var_221_bool = var_46_bool == var_220_int; // 0x61c Eq
	if(var_221_bool == 0) goto Label_1581; // 0x61d JumpB
	var_222_string = ""; // 0x61e PushV
	var_222_string = "Neutral"; // 0x61f MovS
	func_1370(var_47_cvector, var_222_string); // 0x620 NEW_2
	var_223_int = 527821; // 0x622 PushI
	SetMessage(var_223_int); // 0x623 TObjFunc
	ClearReplies(); // 0x625 TObjFunc
	var_224_int = 527822; // 0x627 PushI
	var_225_int = 29162; // 0x628 PushI
	var_226_int = 29161; // 0x629 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_227_int = 29162; // 0x62d PushI
	var_228_bool = var_46_bool == var_227_int; // 0x62e Eq
	if(var_228_bool == 0) goto Label_1599; // 0x62f JumpB
	var_229_string = ""; // 0x630 PushV
	var_229_string = "Neutral"; // 0x631 MovS
	func_1370(var_47_cvector, var_229_string); // 0x632 NEW_2
	var_230_int = 527823; // 0x634 PushI
	SetMessage(var_230_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_231_int = 520329; // 0x639 PushI
	var_232_int = -1; // 0x63a PushI
	var_233_int = 21524; // 0x63b PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x63c TObjFunc
	return 0; // 0x63e Return
	
Label_1599:
	var_234_int = 21520; // 0x63f PushI
	var_235_bool = var_46_bool == var_234_int; // 0x640 Eq
	if(var_235_bool == 0) goto Label_1622; // 0x641 JumpB
	var_236_string = ""; // 0x642 PushV
	var_236_string = "Neutral"; // 0x643 MovS
	func_1370(var_47_cvector, var_236_string); // 0x644 NEW_2
	var_237_int = 520325; // 0x646 PushI
	SetMessage(var_237_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_238_int = 527824; // 0x64b PushI
	var_239_int = 29164; // 0x64c PushI
	var_240_int = 29163; // 0x64d PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x64e TObjFunc
	var_241_int = 520326; // 0x650 PushI
	var_242_int = -1; // 0x651 PushI
	var_243_int = 21521; // 0x652 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_244_int = 29164; // 0x656 PushI
	var_245_bool = var_46_bool == var_244_int; // 0x657 Eq
	if(var_245_bool == 0) goto Label_1645; // 0x658 JumpB
	var_246_string = ""; // 0x659 PushV
	var_246_string = "Neutral"; // 0x65a MovS
	func_1370(var_47_cvector, var_246_string); // 0x65b NEW_2
	var_247_int = 527825; // 0x65d PushI
	SetMessage(var_247_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_248_int = 527826; // 0x662 PushI
	var_249_int = -1; // 0x663 PushI
	var_250_int = 29165; // 0x664 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x665 TObjFunc
	var_251_int = 527827; // 0x667 PushI
	var_252_int = -1; // 0x668 PushI
	var_253_int = 29166; // 0x669 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x66a TObjFunc
	return 0; // 0x66c Return
	
Label_1645:
	var_254_int = 21513; // 0x66d PushI
	var_255_bool = var_46_bool == var_254_int; // 0x66e Eq
	if(var_255_bool == 0) goto Label_1663; // 0x66f JumpB
	var_256_string = ""; // 0x670 PushV
	var_256_string = "Neutral"; // 0x671 MovS
	func_1370(var_47_cvector, var_256_string); // 0x672 NEW_2
	var_257_int = 520318; // 0x674 PushI
	SetMessage(var_257_int); // 0x675 TObjFunc
	ClearReplies(); // 0x677 TObjFunc
	var_258_int = 520319; // 0x679 PushI
	var_259_int = 21515; // 0x67a PushI
	var_260_int = 21514; // 0x67b PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x67c TObjFunc
	return 0; // 0x67e Return
	
Label_1663:
	var_261_int = 21515; // 0x67f PushI
	var_262_bool = var_46_bool == var_261_int; // 0x680 Eq
	if(var_262_bool == 0) goto Label_1681; // 0x681 JumpB
	var_263_string = ""; // 0x682 PushV
	var_263_string = "Neutral"; // 0x683 MovS
	func_1370(var_47_cvector, var_263_string); // 0x684 NEW_2
	var_264_int = 520320; // 0x686 PushI
	SetMessage(var_264_int); // 0x687 TObjFunc
	ClearReplies(); // 0x689 TObjFunc
	var_265_int = 527818; // 0x68b PushI
	var_266_int = 29158; // 0x68c PushI
	var_267_int = 29157; // 0x68d PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x68e TObjFunc
	return 0; // 0x690 Return
	
Label_1681:
	var_268_int = 29158; // 0x691 PushI
	var_269_bool = var_46_bool == var_268_int; // 0x692 Eq
	if(var_269_bool == 0) goto Label_1699; // 0x693 JumpB
	var_270_string = ""; // 0x694 PushV
	var_270_string = "Neutral"; // 0x695 MovS
	func_1370(var_47_cvector, var_270_string); // 0x696 NEW_2
	var_271_int = 527819; // 0x698 PushI
	SetMessage(var_271_int); // 0x699 TObjFunc
	ClearReplies(); // 0x69b TObjFunc
	var_272_int = 520321; // 0x69d PushI
	var_273_int = 21517; // 0x69e PushI
	var_274_int = 21516; // 0x69f PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x6a0 TObjFunc
	return 0; // 0x6a2 Return
	
Label_1699:
	var_275_int = 21517; // 0x6a3 PushI
	var_276_bool = var_46_bool == var_275_int; // 0x6a4 Eq
	if(var_276_bool == 0) goto Label_1717; // 0x6a5 JumpB
	var_277_string = ""; // 0x6a6 PushV
	var_277_string = "Neutral"; // 0x6a7 MovS
	func_1370(var_47_cvector, var_277_string); // 0x6a8 NEW_2
	var_278_int = 520322; // 0x6aa PushI
	SetMessage(var_278_int); // 0x6ab TObjFunc
	ClearReplies(); // 0x6ad TObjFunc
	var_279_int = 520323; // 0x6af PushI
	var_280_int = -1; // 0x6b0 PushI
	var_281_int = 21518; // 0x6b1 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x6b2 TObjFunc
	return 0; // 0x6b4 Return
	
Label_1717:
	var_282_int = 21497; // 0x6b5 PushI
	var_283_bool = var_46_bool == var_282_int; // 0x6b6 Eq
	if(var_283_bool == 0) goto Label_1740; // 0x6b7 JumpB
	var_284_string = ""; // 0x6b8 PushV
	var_284_string = "Neutral"; // 0x6b9 MovS
	func_1370(var_47_cvector, var_284_string); // 0x6ba NEW_2
	var_285_int = 520302; // 0x6bc PushI
	SetMessage(var_285_int); // 0x6bd TObjFunc
	ClearReplies(); // 0x6bf TObjFunc
	var_286_int = 520303; // 0x6c1 PushI
	var_287_int = 21499; // 0x6c2 PushI
	var_288_int = 21498; // 0x6c3 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x6c4 TObjFunc
	var_289_int = 527811; // 0x6c6 PushI
	var_290_int = 29150; // 0x6c7 PushI
	var_291_int = 29149; // 0x6c8 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x6c9 TObjFunc
	return 0; // 0x6cb Return
	
Label_1740:
	var_292_int = 29150; // 0x6cc PushI
	var_293_bool = var_46_bool == var_292_int; // 0x6cd Eq
	if(var_293_bool == 0) goto Label_1758; // 0x6ce JumpB
	var_294_string = ""; // 0x6cf PushV
	var_294_string = "Neutral"; // 0x6d0 MovS
	func_1370(var_47_cvector, var_294_string); // 0x6d1 NEW_2
	var_295_int = 527812; // 0x6d3 PushI
	SetMessage(var_295_int); // 0x6d4 TObjFunc
	ClearReplies(); // 0x6d6 TObjFunc
	var_296_int = 527813; // 0x6d8 PushI
	var_297_int = 29152; // 0x6d9 PushI
	var_298_int = 29151; // 0x6da PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x6db TObjFunc
	return 0; // 0x6dd Return
	
Label_1758:
	var_299_int = 29152; // 0x6de PushI
	var_300_bool = var_46_bool == var_299_int; // 0x6df Eq
	if(var_300_bool == 0) goto Label_1776; // 0x6e0 JumpB
	var_301_string = ""; // 0x6e1 PushV
	var_301_string = "Neutral"; // 0x6e2 MovS
	func_1370(var_47_cvector, var_301_string); // 0x6e3 NEW_2
	var_302_int = 527814; // 0x6e5 PushI
	SetMessage(var_302_int); // 0x6e6 TObjFunc
	ClearReplies(); // 0x6e8 TObjFunc
	var_303_int = 527815; // 0x6ea PushI
	var_304_int = 29154; // 0x6eb PushI
	var_305_int = 29153; // 0x6ec PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x6ed TObjFunc
	return 0; // 0x6ef Return
	
Label_1776:
	var_306_int = 29154; // 0x6f0 PushI
	var_307_bool = var_46_bool == var_306_int; // 0x6f1 Eq
	if(var_307_bool == 0) goto Label_1794; // 0x6f2 JumpB
	var_308_string = ""; // 0x6f3 PushV
	var_308_string = "Neutral"; // 0x6f4 MovS
	func_1370(var_47_cvector, var_308_string); // 0x6f5 NEW_2
	var_309_int = 527816; // 0x6f7 PushI
	SetMessage(var_309_int); // 0x6f8 TObjFunc
	ClearReplies(); // 0x6fa TObjFunc
	var_310_int = 527817; // 0x6fc PushI
	var_311_int = 21499; // 0x6fd PushI
	var_312_int = 29155; // 0x6fe PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x6ff TObjFunc
	return 0; // 0x701 Return
	
Label_1794:
	var_313_int = 21499; // 0x702 PushI
	var_314_bool = var_46_bool == var_313_int; // 0x703 Eq
	if(var_314_bool == 0) goto Label_1817; // 0x704 JumpB
	var_315_string = ""; // 0x705 PushV
	var_315_string = "Neutral"; // 0x706 MovS
	func_1370(var_47_cvector, var_315_string); // 0x707 NEW_2
	var_316_int = 520304; // 0x709 PushI
	SetMessage(var_316_int); // 0x70a TObjFunc
	ClearReplies(); // 0x70c TObjFunc
	var_317_int = 520305; // 0x70e PushI
	var_318_int = 21501; // 0x70f PushI
	var_319_int = 21500; // 0x710 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x711 TObjFunc
	var_320_int = 520311; // 0x713 PushI
	var_321_int = 21507; // 0x714 PushI
	var_322_int = 21506; // 0x715 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x716 TObjFunc
	return 0; // 0x718 Return
	
Label_1817:
	var_323_int = 21507; // 0x719 PushI
	var_324_bool = var_46_bool == var_323_int; // 0x71a Eq
	if(var_324_bool == 0) goto Label_1835; // 0x71b JumpB
	var_325_string = ""; // 0x71c PushV
	var_325_string = "Neutral"; // 0x71d MovS
	func_1370(var_47_cvector, var_325_string); // 0x71e NEW_2
	var_326_int = 520312; // 0x720 PushI
	SetMessage(var_326_int); // 0x721 TObjFunc
	ClearReplies(); // 0x723 TObjFunc
	var_327_int = 520313; // 0x725 PushI
	var_328_int = 21509; // 0x726 PushI
	var_329_int = 21508; // 0x727 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x728 TObjFunc
	return 0; // 0x72a Return
	
Label_1835:
	var_330_int = 21509; // 0x72b PushI
	var_331_bool = var_46_bool == var_330_int; // 0x72c Eq
	if(var_331_bool == 0) goto Label_1858; // 0x72d JumpB
	var_332_string = ""; // 0x72e PushV
	var_332_string = "Neutral"; // 0x72f MovS
	func_1370(var_47_cvector, var_332_string); // 0x730 NEW_2
	var_333_int = 520314; // 0x732 PushI
	SetMessage(var_333_int); // 0x733 TObjFunc
	ClearReplies(); // 0x735 TObjFunc
	var_334_int = 520315; // 0x737 PushI
	var_335_int = -1; // 0x738 PushI
	var_336_int = 21510; // 0x739 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x73a TObjFunc
	var_337_int = 520316; // 0x73c PushI
	var_338_int = -1; // 0x73d PushI
	var_339_int = 21511; // 0x73e PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x73f TObjFunc
	return 0; // 0x741 Return
	
Label_1858:
	var_340_int = 21501; // 0x742 PushI
	var_341_bool = var_46_bool == var_340_int; // 0x743 Eq
	if(var_341_bool == 0) goto Label_1881; // 0x744 JumpB
	var_342_string = ""; // 0x745 PushV
	var_342_string = "Neutral"; // 0x746 MovS
	func_1370(var_47_cvector, var_342_string); // 0x747 NEW_2
	var_343_int = 520306; // 0x749 PushI
	SetMessage(var_343_int); // 0x74a TObjFunc
	ClearReplies(); // 0x74c TObjFunc
	var_344_int = 520307; // 0x74e PushI
	var_345_int = -1; // 0x74f PushI
	var_346_int = 21502; // 0x750 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x751 TObjFunc
	var_347_int = 520308; // 0x753 PushI
	var_348_int = 21504; // 0x754 PushI
	var_349_int = 21503; // 0x755 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x756 TObjFunc
	return 0; // 0x758 Return
	
Label_1881:
	var_350_int = 21504; // 0x759 PushI
	var_351_bool = var_46_bool == var_350_int; // 0x75a Eq
	if(var_351_bool == 0) goto Label_1899; // 0x75b JumpB
	var_352_string = ""; // 0x75c PushV
	var_352_string = "Neutral"; // 0x75d MovS
	func_1370(var_47_cvector, var_352_string); // 0x75e NEW_2
	var_353_int = 520309; // 0x760 PushI
	SetMessage(var_353_int); // 0x761 TObjFunc
	ClearReplies(); // 0x763 TObjFunc
	var_354_int = 520310; // 0x765 PushI
	var_355_int = -1; // 0x766 PushI
	var_356_int = 21505; // 0x767 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x768 TObjFunc
	return 0; // 0x76a Return
	
Label_1899:
	var_357_int = 21473; // 0x76b PushI
	var_358_bool = var_46_bool == var_357_int; // 0x76c Eq
	if(var_358_bool == 0) goto Label_1922; // 0x76d JumpB
	var_359_string = ""; // 0x76e PushV
	var_359_string = "Neutral"; // 0x76f MovS
	func_1370(var_47_cvector, var_359_string); // 0x770 NEW_2
	var_360_int = 520281; // 0x772 PushI
	SetMessage(var_360_int); // 0x773 TObjFunc
	ClearReplies(); // 0x775 TObjFunc
	var_361_int = 520282; // 0x777 PushI
	var_362_int = 21475; // 0x778 PushI
	var_363_int = 21474; // 0x779 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x77a TObjFunc
	var_364_int = 520294; // 0x77c PushI
	var_365_int = 21488; // 0x77d PushI
	var_366_int = 21487; // 0x77e PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x77f TObjFunc
	return 0; // 0x781 Return
	
Label_1922:
	var_367_int = 21488; // 0x782 PushI
	var_368_bool = var_46_bool == var_367_int; // 0x783 Eq
	if(var_368_bool == 0) goto Label_1945; // 0x784 JumpB
	var_369_string = ""; // 0x785 PushV
	var_369_string = "Neutral"; // 0x786 MovS
	func_1370(var_47_cvector, var_369_string); // 0x787 NEW_2
	var_370_int = 520295; // 0x789 PushI
	SetMessage(var_370_int); // 0x78a TObjFunc
	ClearReplies(); // 0x78c TObjFunc
	var_371_int = 520296; // 0x78e PushI
	var_372_int = 21490; // 0x78f PushI
	var_373_int = 21489; // 0x790 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x791 TObjFunc
	var_374_int = 527807; // 0x793 PushI
	var_375_int = 21477; // 0x794 PushI
	var_376_int = 29143; // 0x795 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x796 TObjFunc
	return 0; // 0x798 Return
	
Label_1945:
	var_377_int = 21490; // 0x799 PushI
	var_378_bool = var_46_bool == var_377_int; // 0x79a Eq
	if(var_378_bool == 0) goto Label_1963; // 0x79b JumpB
	var_379_string = ""; // 0x79c PushV
	var_379_string = "Neutral"; // 0x79d MovS
	func_1370(var_47_cvector, var_379_string); // 0x79e NEW_2
	var_380_int = 520297; // 0x7a0 PushI
	SetMessage(var_380_int); // 0x7a1 TObjFunc
	ClearReplies(); // 0x7a3 TObjFunc
	var_381_int = 527805; // 0x7a5 PushI
	var_382_int = 29142; // 0x7a6 PushI
	var_383_int = 29141; // 0x7a7 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x7a8 TObjFunc
	return 0; // 0x7aa Return
	
Label_1963:
	var_384_int = 29142; // 0x7ab PushI
	var_385_bool = var_46_bool == var_384_int; // 0x7ac Eq
	if(var_385_bool == 0) goto Label_1981; // 0x7ad JumpB
	var_386_string = ""; // 0x7ae PushV
	var_386_string = "Neutral"; // 0x7af MovS
	func_1370(var_47_cvector, var_386_string); // 0x7b0 NEW_2
	var_387_int = 527806; // 0x7b2 PushI
	SetMessage(var_387_int); // 0x7b3 TObjFunc
	ClearReplies(); // 0x7b5 TObjFunc
	var_388_int = 520298; // 0x7b7 PushI
	var_389_int = 21477; // 0x7b8 PushI
	var_390_int = 21491; // 0x7b9 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x7ba TObjFunc
	return 0; // 0x7bc Return
	
Label_1981:
	var_391_int = 21475; // 0x7bd PushI
	var_392_bool = var_46_bool == var_391_int; // 0x7be Eq
	if(var_392_bool == 0) goto Label_2004; // 0x7bf JumpB
	var_393_string = ""; // 0x7c0 PushV
	var_393_string = "Neutral"; // 0x7c1 MovS
	func_1370(var_47_cvector, var_393_string); // 0x7c2 NEW_2
	var_394_int = 520283; // 0x7c4 PushI
	SetMessage(var_394_int); // 0x7c5 TObjFunc
	ClearReplies(); // 0x7c7 TObjFunc
	var_395_int = 520290; // 0x7c9 PushI
	var_396_int = 21483; // 0x7ca PushI
	var_397_int = 21482; // 0x7cb PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x7cc TObjFunc
	var_398_int = 520284; // 0x7ce PushI
	var_399_int = 21477; // 0x7cf PushI
	var_400_int = 21476; // 0x7d0 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x7d1 TObjFunc
	return 0; // 0x7d3 Return
	
Label_2004:
	var_401_int = 21477; // 0x7d4 PushI
	var_402_bool = var_46_bool == var_401_int; // 0x7d5 Eq
	if(var_402_bool == 0) goto Label_2027; // 0x7d6 JumpB
	var_403_string = ""; // 0x7d7 PushV
	var_403_string = "Neutral"; // 0x7d8 MovS
	func_1370(var_47_cvector, var_403_string); // 0x7d9 NEW_2
	var_404_int = 520285; // 0x7db PushI
	SetMessage(var_404_int); // 0x7dc TObjFunc
	ClearReplies(); // 0x7de TObjFunc
	var_405_int = 520286; // 0x7e0 PushI
	var_406_int = 21479; // 0x7e1 PushI
	var_407_int = 21478; // 0x7e2 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x7e3 TObjFunc
	var_408_int = 527808; // 0x7e5 PushI
	var_409_int = 29146; // 0x7e6 PushI
	var_410_int = 29145; // 0x7e7 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x7e8 TObjFunc
	return 0; // 0x7ea Return
	
Label_2027:
	var_411_int = 29146; // 0x7eb PushI
	var_412_bool = var_46_bool == var_411_int; // 0x7ec Eq
	if(var_412_bool == 0) goto Label_2045; // 0x7ed JumpB
	var_413_string = ""; // 0x7ee PushV
	var_413_string = "Neutral"; // 0x7ef MovS
	func_1370(var_47_cvector, var_413_string); // 0x7f0 NEW_2
	var_414_int = 527809; // 0x7f2 PushI
	SetMessage(var_414_int); // 0x7f3 TObjFunc
	ClearReplies(); // 0x7f5 TObjFunc
	var_415_int = 527810; // 0x7f7 PushI
	var_416_int = 21479; // 0x7f8 PushI
	var_417_int = 29147; // 0x7f9 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x7fa TObjFunc
	return 0; // 0x7fc Return
	
Label_2045:
	var_418_int = 21479; // 0x7fd PushI
	var_419_bool = var_46_bool == var_418_int; // 0x7fe Eq
	if(var_419_bool == 0) goto Label_2068; // 0x7ff JumpB
	var_420_string = ""; // 0x800 PushV
	var_420_string = "Neutral"; // 0x801 MovS
	func_1370(var_47_cvector, var_420_string); // 0x802 NEW_2
	var_421_int = 520287; // 0x804 PushI
	SetMessage(var_421_int); // 0x805 TObjFunc
	ClearReplies(); // 0x807 TObjFunc
	var_422_int = 520288; // 0x809 PushI
	var_423_int = -1; // 0x80a PushI
	var_424_int = 21480; // 0x80b PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x80c TObjFunc
	var_425_int = 520289; // 0x80e PushI
	var_426_int = -1; // 0x80f PushI
	var_427_int = 21481; // 0x810 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x811 TObjFunc
	return 0; // 0x813 Return
	
Label_2068:
	var_428_int = 21483; // 0x814 PushI
	var_429_bool = var_46_bool == var_428_int; // 0x815 Eq
	if(var_429_bool == 0) goto Label_2091; // 0x816 JumpB
	var_430_string = ""; // 0x817 PushV
	var_430_string = "Neutral"; // 0x818 MovS
	func_1370(var_47_cvector, var_430_string); // 0x819 NEW_2
	var_431_int = 520291; // 0x81b PushI
	SetMessage(var_431_int); // 0x81c TObjFunc
	ClearReplies(); // 0x81e TObjFunc
	var_432_int = 520292; // 0x820 PushI
	var_433_int = 21477; // 0x821 PushI
	var_434_int = 21484; // 0x822 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x823 TObjFunc
	var_435_int = 520293; // 0x825 PushI
	var_436_int = -1; // 0x826 PushI
	var_437_int = 21486; // 0x827 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x828 TObjFunc
	return 0; // 0x82a Return
	
Label_2091:
	var_3_string = 1; // 0x82b TMovB
	var_438_bool = 0; // 0x82c PushV
	func_4774(var_438_bool); // 0x82d NEW_2
	if(var_438_bool == 0) goto Label_2099; // 0x82f JumpB
	lshStopAnimation(); // 0x830 Func
	goto Label_2101; // 0x832 Jump
	
Label_2101:
	return 0; // 0x835 Return
	
Label_2099:
	StopAnimation(); // 0x833 Func
	
Label_2103:
	return 0; // 0x837 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x8da PushI
	if(var_48_int == 0) goto Label_2329; // 0x8db JumpB
	func_4627(); // 0x8dd NEW_2
	var_50_int = 22017; // 0x8df PushI
	var_51_bool = var_46_bool == var_50_int; // 0x8e0 Eq
	if(var_51_bool == 0) goto Label_2294; // 0x8e1 JumpB
	var_52_string = ""; // 0x8e2 PushV
	var_52_string = "Neutral"; // 0x8e3 MovS
	func_2243(var_47_cvector, var_52_string); // 0x8e4 NEW_2
	var_69_int = 520800; // 0x8e6 PushI
	SetMessage(var_69_int); // 0x8e7 TObjFunc
	ClearReplies(); // 0x8e9 TObjFunc
	var_70_int = 520801; // 0x8eb PushI
	var_71_int = 29131; // 0x8ec PushI
	var_72_int = 22018; // 0x8ed PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x8ee TObjFunc
	var_73_int = 527799; // 0x8f0 PushI
	var_74_int = -1; // 0x8f1 PushI
	var_75_int = 29132; // 0x8f2 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x8f3 TObjFunc
	return 0; // 0x8f5 Return
	
Label_2294:
	var_76_int = 29131; // 0x8f6 PushI
	var_77_bool = var_46_bool == var_76_int; // 0x8f7 Eq
	if(var_77_bool == 0) goto Label_2317; // 0x8f8 JumpB
	var_78_string = ""; // 0x8f9 PushV
	var_78_string = "Neutral"; // 0x8fa MovS
	func_2243(var_47_cvector, var_78_string); // 0x8fb NEW_2
	var_79_int = 527798; // 0x8fd PushI
	SetMessage(var_79_int); // 0x8fe TObjFunc
	ClearReplies(); // 0x900 TObjFunc
	var_80_int = 527800; // 0x902 PushI
	var_81_int = -1; // 0x903 PushI
	var_82_int = 29133; // 0x904 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x905 TObjFunc
	var_83_int = 527801; // 0x907 PushI
	var_84_int = -1; // 0x908 PushI
	var_85_int = 29134; // 0x909 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x90a TObjFunc
	return 0; // 0x90c Return
	
Label_2317:
	var_3_string = 1; // 0x90d TMovB
	var_86_bool = 0; // 0x90e PushV
	func_4774(var_86_bool); // 0x90f NEW_2
	if(var_86_bool == 0) goto Label_2325; // 0x911 JumpB
	lshStopAnimation(); // 0x912 Func
	goto Label_2327; // 0x914 Jump
	
Label_2327:
	return 0; // 0x917 Return
	
Label_2325:
	StopAnimation(); // 0x915 Func
	
Label_2329:
	return 0; // 0x919 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x9cb PushI
	if(var_48_int == 0) goto Label_2972; // 0x9cc JumpB
	func_4627(); // 0x9ce NEW_2
	var_50_int = 22612; // 0x9d0 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x9d1 Eq
	if(var_51_bool == 0) goto Label_2530; // 0x9d2 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x9d3 PushV
	var_52_object = var_1_object; // 0x9d4 MovT
	var_53_object = var_0_object; // 0x9d5 MovT
	func_4933(); // 0x9d6 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x9d8 PushV
	var_79_object = var_1_object; // 0x9d9 MovT
	var_80_object = var_0_object; // 0x9da MovT
	func_5011(var_80_object); // 0x9db NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0x9dd PushV
	var_103_object = var_1_object; // 0x9de MovT
	var_104_object = var_0_object; // 0x9df MovT
	func_4984(); // 0x9e0 NEW_2
	
Label_2530:
	var_107_int = 24978; // 0x9e2 PushI
	var_108_bool = var_47_cvector == var_107_int; // 0x9e3 Eq
	if(var_108_bool == 0) goto Label_2548; // 0x9e4 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x9e5 PushV
	var_109_object = var_1_object; // 0x9e6 MovT
	var_110_object = var_0_object; // 0x9e7 MovT
	func_4933(); // 0x9e8 NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0x9ea PushV
	var_111_object = var_1_object; // 0x9eb MovT
	var_112_object = var_0_object; // 0x9ec MovT
	func_5011(var_112_object); // 0x9ed NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x9ef PushV
	var_113_object = var_1_object; // 0x9f0 MovT
	var_114_object = var_0_object; // 0x9f1 MovT
	func_4984(); // 0x9f2 NEW_2
	
Label_2548:
	var_115_int = 24931; // 0x9f4 PushI
	var_116_bool = var_47_cvector == var_115_int; // 0x9f5 Eq
	if(var_116_bool == 0) goto Label_2556; // 0x9f6 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x9f7 PushV
	var_117_object = var_1_object; // 0x9f8 MovT
	var_118_object = var_0_object; // 0x9f9 MovT
	func_5005(); // 0x9fa NEW_2
	
Label_2556:
	var_121_int = 22609; // 0x9fc PushI
	var_122_bool = var_46_bool == var_121_int; // 0x9fd Eq
	if(var_122_bool == 0) goto Label_2594; // 0x9fe JumpB
	var_123_string = ""; // 0x9ff PushV
	var_123_string = "Neutral"; // 0xa00 MovS
	func_2484(var_47_cvector, var_123_string); // 0xa01 NEW_2
	var_140_int = 521431; // 0xa03 PushI
	SetMessage(var_140_int); // 0xa04 TObjFunc
	ClearReplies(); // 0xa06 TObjFunc
	var_141_bool = 0; var_142_object = Obj(); // 0xa08 PushV
	var_142_object = var_1_object; // 0xa09 MovT
	func_5022(var_142_object); // 0xa0a NEW_2
	if(var_141_bool == 0) goto Label_2578; // 0xa0c JumpB
	var_149_int = 521432; // 0xa0d PushI
	var_150_int = 22611; // 0xa0e PushI
	var_151_int = 22610; // 0xa0f PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xa10 TObjFunc
	
Label_2578:
	var_152_bool = 0; var_153_object = Obj(); // 0xa12 PushV
	var_153_object = var_1_object; // 0xa13 MovT
	func_5087(var_153_object); // 0xa14 NEW_2
	if(var_152_bool == 0) goto Label_2588; // 0xa16 JumpB
	var_158_int = 523679; // 0xa17 PushI
	var_159_int = 24958; // 0xa18 PushI
	var_160_int = 24931; // 0xa19 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xa1a TObjFunc
	
Label_2588:
	var_161_int = 521435; // 0xa1c PushI
	var_162_int = -1; // 0xa1d PushI
	var_163_int = 22613; // 0xa1e PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0xa1f TObjFunc
	return 0; // 0xa21 Return
	
Label_2594:
	var_164_int = 24958; // 0xa22 PushI
	var_165_bool = var_46_bool == var_164_int; // 0xa23 Eq
	if(var_165_bool == 0) goto Label_2622; // 0xa24 JumpB
	var_166_string = ""; // 0xa25 PushV
	var_166_string = "Neutral"; // 0xa26 MovS
	func_2484(var_47_cvector, var_166_string); // 0xa27 NEW_2
	var_167_int = 523703; // 0xa29 PushI
	SetMessage(var_167_int); // 0xa2a TObjFunc
	ClearReplies(); // 0xa2c TObjFunc
	var_168_int = 523704; // 0xa2e PushI
	var_169_int = 24960; // 0xa2f PushI
	var_170_int = 24959; // 0xa30 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xa31 TObjFunc
	var_171_int = 523706; // 0xa33 PushI
	var_172_int = -1; // 0xa34 PushI
	var_173_int = 24961; // 0xa35 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xa36 TObjFunc
	var_174_int = 523707; // 0xa38 PushI
	var_175_int = -1; // 0xa39 PushI
	var_176_int = 24962; // 0xa3a PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xa3b TObjFunc
	return 0; // 0xa3d Return
	
Label_2622:
	var_177_int = 24960; // 0xa3e PushI
	var_178_bool = var_46_bool == var_177_int; // 0xa3f Eq
	if(var_178_bool == 0) goto Label_2640; // 0xa40 JumpB
	var_179_string = ""; // 0xa41 PushV
	var_179_string = "Neutral"; // 0xa42 MovS
	func_2484(var_47_cvector, var_179_string); // 0xa43 NEW_2
	var_180_int = 523705; // 0xa45 PushI
	SetMessage(var_180_int); // 0xa46 TObjFunc
	ClearReplies(); // 0xa48 TObjFunc
	var_181_int = 523681; // 0xa4a PushI
	var_182_int = 24934; // 0xa4b PushI
	var_183_int = 24933; // 0xa4c PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xa4d TObjFunc
	return 0; // 0xa4f Return
	
Label_2640:
	var_184_int = 24934; // 0xa50 PushI
	var_185_bool = var_46_bool == var_184_int; // 0xa51 Eq
	if(var_185_bool == 0) goto Label_2668; // 0xa52 JumpB
	var_186_string = ""; // 0xa53 PushV
	var_186_string = "Neutral"; // 0xa54 MovS
	func_2484(var_47_cvector, var_186_string); // 0xa55 NEW_2
	var_187_int = 523682; // 0xa57 PushI
	SetMessage(var_187_int); // 0xa58 TObjFunc
	ClearReplies(); // 0xa5a TObjFunc
	var_188_int = 523683; // 0xa5c PushI
	var_189_int = 24936; // 0xa5d PushI
	var_190_int = 24935; // 0xa5e PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xa5f TObjFunc
	var_191_int = 523701; // 0xa61 PushI
	var_192_int = 24957; // 0xa62 PushI
	var_193_int = 24956; // 0xa63 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xa64 TObjFunc
	var_194_int = 523708; // 0xa66 PushI
	var_195_int = -1; // 0xa67 PushI
	var_196_int = 24963; // 0xa68 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xa69 TObjFunc
	return 0; // 0xa6b Return
	
Label_2668:
	var_197_int = 24957; // 0xa6c PushI
	var_198_bool = var_46_bool == var_197_int; // 0xa6d Eq
	if(var_198_bool == 0) goto Label_2686; // 0xa6e JumpB
	var_199_string = ""; // 0xa6f PushV
	var_199_string = "Neutral"; // 0xa70 MovS
	func_2484(var_47_cvector, var_199_string); // 0xa71 NEW_2
	var_200_int = 523702; // 0xa73 PushI
	SetMessage(var_200_int); // 0xa74 TObjFunc
	ClearReplies(); // 0xa76 TObjFunc
	var_201_int = 523709; // 0xa78 PushI
	var_202_int = 24965; // 0xa79 PushI
	var_203_int = 24964; // 0xa7a PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xa7b TObjFunc
	return 0; // 0xa7d Return
	
Label_2686:
	var_204_int = 24965; // 0xa7e PushI
	var_205_bool = var_46_bool == var_204_int; // 0xa7f Eq
	if(var_205_bool == 0) goto Label_2709; // 0xa80 JumpB
	var_206_string = ""; // 0xa81 PushV
	var_206_string = "Neutral"; // 0xa82 MovS
	func_2484(var_47_cvector, var_206_string); // 0xa83 NEW_2
	var_207_int = 523710; // 0xa85 PushI
	SetMessage(var_207_int); // 0xa86 TObjFunc
	ClearReplies(); // 0xa88 TObjFunc
	var_208_int = 523712; // 0xa8a PushI
	var_209_int = -1; // 0xa8b PushI
	var_210_int = 24967; // 0xa8c PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xa8d TObjFunc
	var_211_int = 523711; // 0xa8f PushI
	var_212_int = -1; // 0xa90 PushI
	var_213_int = 24966; // 0xa91 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xa92 TObjFunc
	return 0; // 0xa94 Return
	
Label_2709:
	var_214_int = 24936; // 0xa95 PushI
	var_215_bool = var_46_bool == var_214_int; // 0xa96 Eq
	if(var_215_bool == 0) goto Label_2727; // 0xa97 JumpB
	var_216_string = ""; // 0xa98 PushV
	var_216_string = "Neutral"; // 0xa99 MovS
	func_2484(var_47_cvector, var_216_string); // 0xa9a NEW_2
	var_217_int = 523684; // 0xa9c PushI
	SetMessage(var_217_int); // 0xa9d TObjFunc
	ClearReplies(); // 0xa9f TObjFunc
	var_218_int = 523685; // 0xaa1 PushI
	var_219_int = 24968; // 0xaa2 PushI
	var_220_int = 24937; // 0xaa3 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xaa4 TObjFunc
	return 0; // 0xaa6 Return
	
Label_2727:
	var_221_int = 24968; // 0xaa7 PushI
	var_222_bool = var_46_bool == var_221_int; // 0xaa8 Eq
	if(var_222_bool == 0) goto Label_2745; // 0xaa9 JumpB
	var_223_string = ""; // 0xaaa PushV
	var_223_string = "Neutral"; // 0xaab MovS
	func_2484(var_47_cvector, var_223_string); // 0xaac NEW_2
	var_224_int = 523713; // 0xaae PushI
	SetMessage(var_224_int); // 0xaaf TObjFunc
	ClearReplies(); // 0xab1 TObjFunc
	var_225_int = 523714; // 0xab3 PushI
	var_226_int = -1; // 0xab4 PushI
	var_227_int = 24969; // 0xab5 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xab6 TObjFunc
	return 0; // 0xab8 Return
	
Label_2745:
	var_228_int = 22611; // 0xab9 PushI
	var_229_bool = var_46_bool == var_228_int; // 0xaba Eq
	if(var_229_bool == 0) goto Label_2768; // 0xabb JumpB
	var_230_string = ""; // 0xabc PushV
	var_230_string = "Neutral"; // 0xabd MovS
	func_2484(var_47_cvector, var_230_string); // 0xabe NEW_2
	var_231_int = 521433; // 0xac0 PushI
	SetMessage(var_231_int); // 0xac1 TObjFunc
	ClearReplies(); // 0xac3 TObjFunc
	var_232_int = 523686; // 0xac5 PushI
	var_233_int = 24939; // 0xac6 PushI
	var_234_int = 24938; // 0xac7 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xac8 TObjFunc
	var_235_int = 523690; // 0xaca PushI
	var_236_int = 24941; // 0xacb PushI
	var_237_int = 24942; // 0xacc PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xacd TObjFunc
	return 0; // 0xacf Return
	
Label_2768:
	var_238_int = 24939; // 0xad0 PushI
	var_239_bool = var_46_bool == var_238_int; // 0xad1 Eq
	if(var_239_bool == 0) goto Label_2791; // 0xad2 JumpB
	var_240_string = ""; // 0xad3 PushV
	var_240_string = "Neutral"; // 0xad4 MovS
	func_2484(var_47_cvector, var_240_string); // 0xad5 NEW_2
	var_241_int = 523687; // 0xad7 PushI
	SetMessage(var_241_int); // 0xad8 TObjFunc
	ClearReplies(); // 0xada TObjFunc
	var_242_int = 523688; // 0xadc PushI
	var_243_int = 24941; // 0xadd PushI
	var_244_int = 24940; // 0xade PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xadf TObjFunc
	var_245_int = 523695; // 0xae1 PushI
	var_246_int = 24949; // 0xae2 PushI
	var_247_int = 24948; // 0xae3 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xae4 TObjFunc
	return 0; // 0xae6 Return
	
Label_2791:
	var_248_int = 24949; // 0xae7 PushI
	var_249_bool = var_46_bool == var_248_int; // 0xae8 Eq
	if(var_249_bool == 0) goto Label_2814; // 0xae9 JumpB
	var_250_string = ""; // 0xaea PushV
	var_250_string = "Neutral"; // 0xaeb MovS
	func_2484(var_47_cvector, var_250_string); // 0xaec NEW_2
	var_251_int = 523696; // 0xaee PushI
	SetMessage(var_251_int); // 0xaef TObjFunc
	ClearReplies(); // 0xaf1 TObjFunc
	var_252_int = 523697; // 0xaf3 PushI
	var_253_int = 24941; // 0xaf4 PushI
	var_254_int = 24950; // 0xaf5 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xaf6 TObjFunc
	var_255_int = 523698; // 0xaf8 PushI
	var_256_int = 24952; // 0xaf9 PushI
	var_257_int = 24951; // 0xafa PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xafb TObjFunc
	return 0; // 0xafd Return
	
Label_2814:
	var_258_int = 24952; // 0xafe PushI
	var_259_bool = var_46_bool == var_258_int; // 0xaff Eq
	if(var_259_bool == 0) goto Label_2832; // 0xb00 JumpB
	var_260_string = ""; // 0xb01 PushV
	var_260_string = "Neutral"; // 0xb02 MovS
	func_2484(var_47_cvector, var_260_string); // 0xb03 NEW_2
	var_261_int = 523699; // 0xb05 PushI
	SetMessage(var_261_int); // 0xb06 TObjFunc
	ClearReplies(); // 0xb08 TObjFunc
	var_262_int = 523700; // 0xb0a PushI
	var_263_int = 24941; // 0xb0b PushI
	var_264_int = 24953; // 0xb0c PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xb0d TObjFunc
	return 0; // 0xb0f Return
	
Label_2832:
	var_265_int = 24941; // 0xb10 PushI
	var_266_bool = var_46_bool == var_265_int; // 0xb11 Eq
	if(var_266_bool == 0) goto Label_2855; // 0xb12 JumpB
	var_267_string = ""; // 0xb13 PushV
	var_267_string = "Neutral"; // 0xb14 MovS
	func_2484(var_47_cvector, var_267_string); // 0xb15 NEW_2
	var_268_int = 523689; // 0xb17 PushI
	SetMessage(var_268_int); // 0xb18 TObjFunc
	ClearReplies(); // 0xb1a TObjFunc
	var_269_int = 523691; // 0xb1c PushI
	var_270_int = 24944; // 0xb1d PushI
	var_271_int = 24943; // 0xb1e PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xb1f TObjFunc
	var_272_int = 523715; // 0xb21 PushI
	var_273_int = 24971; // 0xb22 PushI
	var_274_int = 24970; // 0xb23 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xb24 TObjFunc
	return 0; // 0xb26 Return
	
Label_2855:
	var_275_int = 24971; // 0xb27 PushI
	var_276_bool = var_46_bool == var_275_int; // 0xb28 Eq
	if(var_276_bool == 0) goto Label_2878; // 0xb29 JumpB
	var_277_string = ""; // 0xb2a PushV
	var_277_string = "Neutral"; // 0xb2b MovS
	func_2484(var_47_cvector, var_277_string); // 0xb2c NEW_2
	var_278_int = 523716; // 0xb2e PushI
	SetMessage(var_278_int); // 0xb2f TObjFunc
	ClearReplies(); // 0xb31 TObjFunc
	var_279_int = 523718; // 0xb33 PushI
	var_280_int = 24944; // 0xb34 PushI
	var_281_int = 24973; // 0xb35 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xb36 TObjFunc
	var_282_int = 523719; // 0xb38 PushI
	var_283_int = 24944; // 0xb39 PushI
	var_284_int = 24974; // 0xb3a PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xb3b TObjFunc
	return 0; // 0xb3d Return
	
Label_2878:
	var_285_int = 24944; // 0xb3e PushI
	var_286_bool = var_46_bool == var_285_int; // 0xb3f Eq
	if(var_286_bool == 0) goto Label_2901; // 0xb40 JumpB
	var_287_string = ""; // 0xb41 PushV
	var_287_string = "Neutral"; // 0xb42 MovS
	func_2484(var_47_cvector, var_287_string); // 0xb43 NEW_2
	var_288_int = 523692; // 0xb45 PushI
	SetMessage(var_288_int); // 0xb46 TObjFunc
	ClearReplies(); // 0xb48 TObjFunc
	var_289_int = 523693; // 0xb4a PushI
	var_290_int = 24946; // 0xb4b PushI
	var_291_int = 24945; // 0xb4c PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xb4d TObjFunc
	var_292_int = 523717; // 0xb4f PushI
	var_293_int = 24977; // 0xb50 PushI
	var_294_int = 24972; // 0xb51 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xb52 TObjFunc
	return 0; // 0xb54 Return
	
Label_2901:
	var_295_int = 24977; // 0xb55 PushI
	var_296_bool = var_46_bool == var_295_int; // 0xb56 Eq
	if(var_296_bool == 0) goto Label_2919; // 0xb57 JumpB
	var_297_string = ""; // 0xb58 PushV
	var_297_string = "Neutral"; // 0xb59 MovS
	func_2484(var_47_cvector, var_297_string); // 0xb5a NEW_2
	var_298_int = 523720; // 0xb5c PushI
	SetMessage(var_298_int); // 0xb5d TObjFunc
	ClearReplies(); // 0xb5f TObjFunc
	var_299_int = 523722; // 0xb61 PushI
	var_300_int = 24980; // 0xb62 PushI
	var_301_int = 24979; // 0xb63 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xb64 TObjFunc
	return 0; // 0xb66 Return
	
Label_2919:
	var_302_int = 24980; // 0xb67 PushI
	var_303_bool = var_46_bool == var_302_int; // 0xb68 Eq
	if(var_303_bool == 0) goto Label_2937; // 0xb69 JumpB
	var_304_string = ""; // 0xb6a PushV
	var_304_string = "Neutral"; // 0xb6b MovS
	func_2484(var_47_cvector, var_304_string); // 0xb6c NEW_2
	var_305_int = 523723; // 0xb6e PushI
	SetMessage(var_305_int); // 0xb6f TObjFunc
	ClearReplies(); // 0xb71 TObjFunc
	var_306_int = 523724; // 0xb73 PushI
	var_307_int = 24946; // 0xb74 PushI
	var_308_int = 24981; // 0xb75 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xb76 TObjFunc
	return 0; // 0xb78 Return
	
Label_2937:
	var_309_int = 24946; // 0xb79 PushI
	var_310_bool = var_46_bool == var_309_int; // 0xb7a Eq
	if(var_310_bool == 0) goto Label_2960; // 0xb7b JumpB
	var_311_string = ""; // 0xb7c PushV
	var_311_string = "Neutral"; // 0xb7d MovS
	func_2484(var_47_cvector, var_311_string); // 0xb7e NEW_2
	var_312_int = 523694; // 0xb80 PushI
	SetMessage(var_312_int); // 0xb81 TObjFunc
	ClearReplies(); // 0xb83 TObjFunc
	var_313_int = 521434; // 0xb85 PushI
	var_314_int = -1; // 0xb86 PushI
	var_315_int = 22612; // 0xb87 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xb88 TObjFunc
	var_316_int = 523721; // 0xb8a PushI
	var_317_int = -1; // 0xb8b PushI
	var_318_int = 24978; // 0xb8c PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xb8d TObjFunc
	return 0; // 0xb8f Return
	
Label_2960:
	var_3_string = 1; // 0xb90 TMovB
	var_319_bool = 0; // 0xb91 PushV
	func_4774(var_319_bool); // 0xb92 NEW_2
	if(var_319_bool == 0) goto Label_2968; // 0xb94 JumpB
	lshStopAnimation(); // 0xb95 Func
	goto Label_2970; // 0xb97 Jump
	
Label_2970:
	return 0; // 0xb9a Return
	
Label_2968:
	StopAnimation(); // 0xb98 Func
	
Label_2972:
	return 0; // 0xb9c Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xc5f PushI
	if(var_48_int == 0) goto Label_3342; // 0xc60 JumpB
	func_4627(); // 0xc62 NEW_2
	var_50_int = 23120; // 0xc64 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xc65 Eq
	if(var_51_bool == 0) goto Label_3180; // 0xc66 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xc67 PushV
	var_52_object = var_1_object; // 0xc68 MovT
	var_53_object = var_0_object; // 0xc69 MovT
	func_4942(); // 0xc6a NEW_2
	
Label_3180:
	var_56_int = 23119; // 0xc6c PushI
	var_57_bool = var_46_bool == var_56_int; // 0xc6d Eq
	if(var_57_bool == 0) goto Label_3235; // 0xc6e JumpB
	var_58_string = ""; // 0xc6f PushV
	var_58_string = "Neutral"; // 0xc70 MovS
	func_3144(var_47_cvector, var_58_string); // 0xc71 NEW_2
	var_75_int = 521945; // 0xc73 PushI
	SetMessage(var_75_int); // 0xc74 TObjFunc
	ClearReplies(); // 0xc76 TObjFunc
	var_76_bool = 0; // 0xc78 PushV
	var_76_bool = 1; // 0xc79 MovB
	var_77_bool = 0; // 0xc7a PushV
	var_77_bool = 0; // 0xc7b MovB
	var_78_bool = 0; var_79_object = Obj(); // 0xc7c PushV
	var_79_object = var_1_object; // 0xc7d MovT
	func_5046(var_79_object); // 0xc7e NEW_2
	if(var_78_bool == 0) goto Label_3207; // 0xc80 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0xc81 PushV
	var_87_object = var_1_object; // 0xc82 MovT
	func_5058(var_87_object); // 0xc83 NEW_2
	if(var_86_bool == 0) goto Label_3207; // 0xc85 JumpB
	var_77_bool = 1; // 0xc86 MovB
	
Label_3207:
	if(var_77_bool == 0) goto Label_3223; // 0xc87 JumpB
	var_88_bool = 0; // 0xc88 PushV
	var_88_bool = 0; // 0xc89 MovB
	var_89_bool = 0; var_90_object = Obj(); // 0xc8a PushV
	var_90_object = var_1_object; // 0xc8b MovT
	func_5034(var_90_object); // 0xc8c NEW_2
	if(var_89_bool == 0) goto Label_3221; // 0xc8e JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0xc8f PushV
	var_96_object = var_1_object; // 0xc90 MovT
	func_5058(var_96_object); // 0xc91 NEW_2
	if(var_95_bool == 0) goto Label_3221; // 0xc93 JumpB
	var_88_bool = 1; // 0xc94 MovB
	
Label_3221:
	if(var_88_bool == 0) goto Label_3223; // 0xc95 JumpB
	var_76_bool = 0; // 0xc96 MovB
	
Label_3223:
	if(var_76_bool == 0) goto Label_3229; // 0xc97 JumpB
	var_97_int = 521946; // 0xc98 PushI
	var_98_int = 23122; // 0xc99 PushI
	var_99_int = 23120; // 0xc9a PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xc9b TObjFunc
	
Label_3229:
	var_100_int = 521947; // 0xc9d PushI
	var_101_int = -1; // 0xc9e PushI
	var_102_int = 23121; // 0xc9f PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xca0 TObjFunc
	return 0; // 0xca2 Return
	
Label_3235:
	var_103_int = 23122; // 0xca3 PushI
	var_104_bool = var_46_bool == var_103_int; // 0xca4 Eq
	if(var_104_bool == 0) goto Label_3253; // 0xca5 JumpB
	var_105_string = ""; // 0xca6 PushV
	var_105_string = "Neutral"; // 0xca7 MovS
	func_3144(var_47_cvector, var_105_string); // 0xca8 NEW_2
	var_106_int = 521948; // 0xcaa PushI
	SetMessage(var_106_int); // 0xcab TObjFunc
	ClearReplies(); // 0xcad TObjFunc
	var_107_int = 521949; // 0xcaf PushI
	var_108_int = 23730; // 0xcb0 PushI
	var_109_int = 23123; // 0xcb1 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xcb2 TObjFunc
	return 0; // 0xcb4 Return
	
Label_3253:
	var_110_int = 23730; // 0xcb5 PushI
	var_111_bool = var_46_bool == var_110_int; // 0xcb6 Eq
	if(var_111_bool == 0) goto Label_3271; // 0xcb7 JumpB
	var_112_string = ""; // 0xcb8 PushV
	var_112_string = "Neutral"; // 0xcb9 MovS
	func_3144(var_47_cvector, var_112_string); // 0xcba NEW_2
	var_113_int = 522551; // 0xcbc PushI
	SetMessage(var_113_int); // 0xcbd TObjFunc
	ClearReplies(); // 0xcbf TObjFunc
	var_114_int = 522552; // 0xcc1 PushI
	var_115_int = 23732; // 0xcc2 PushI
	var_116_int = 23731; // 0xcc3 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xcc4 TObjFunc
	return 0; // 0xcc6 Return
	
Label_3271:
	var_117_int = 23732; // 0xcc7 PushI
	var_118_bool = var_46_bool == var_117_int; // 0xcc8 Eq
	if(var_118_bool == 0) goto Label_3294; // 0xcc9 JumpB
	var_119_string = ""; // 0xcca PushV
	var_119_string = "Neutral"; // 0xccb MovS
	func_3144(var_47_cvector, var_119_string); // 0xccc NEW_2
	var_120_int = 522553; // 0xcce PushI
	SetMessage(var_120_int); // 0xccf TObjFunc
	ClearReplies(); // 0xcd1 TObjFunc
	var_121_int = 522554; // 0xcd3 PushI
	var_122_int = 23734; // 0xcd4 PushI
	var_123_int = 23733; // 0xcd5 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xcd6 TObjFunc
	var_124_int = 522556; // 0xcd8 PushI
	var_125_int = -1; // 0xcd9 PushI
	var_126_int = 23735; // 0xcda PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xcdb TObjFunc
	return 0; // 0xcdd Return
	
Label_3294:
	var_127_int = 23734; // 0xcde PushI
	var_128_bool = var_46_bool == var_127_int; // 0xcdf Eq
	if(var_128_bool == 0) goto Label_3312; // 0xce0 JumpB
	var_129_string = ""; // 0xce1 PushV
	var_129_string = "Neutral"; // 0xce2 MovS
	func_3144(var_47_cvector, var_129_string); // 0xce3 NEW_2
	var_130_int = 522555; // 0xce5 PushI
	SetMessage(var_130_int); // 0xce6 TObjFunc
	ClearReplies(); // 0xce8 TObjFunc
	var_131_int = 522557; // 0xcea PushI
	var_132_int = 23737; // 0xceb PushI
	var_133_int = 23736; // 0xcec PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xced TObjFunc
	return 0; // 0xcef Return
	
Label_3312:
	var_134_int = 23737; // 0xcf0 PushI
	var_135_bool = var_46_bool == var_134_int; // 0xcf1 Eq
	if(var_135_bool == 0) goto Label_3330; // 0xcf2 JumpB
	var_136_string = ""; // 0xcf3 PushV
	var_136_string = "Neutral"; // 0xcf4 MovS
	func_3144(var_47_cvector, var_136_string); // 0xcf5 NEW_2
	var_137_int = 522558; // 0xcf7 PushI
	SetMessage(var_137_int); // 0xcf8 TObjFunc
	ClearReplies(); // 0xcfa TObjFunc
	var_138_int = 522559; // 0xcfc PushI
	var_139_int = -1; // 0xcfd PushI
	var_140_int = 23738; // 0xcfe PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xcff TObjFunc
	return 0; // 0xd01 Return
	
Label_3330:
	var_3_string = 1; // 0xd02 TMovB
	var_141_bool = 0; // 0xd03 PushV
	func_4774(var_141_bool); // 0xd04 NEW_2
	if(var_141_bool == 0) goto Label_3338; // 0xd06 JumpB
	lshStopAnimation(); // 0xd07 Func
	goto Label_3340; // 0xd09 Jump
	
Label_3340:
	return 0; // 0xd0c Return
	
Label_3338:
	StopAnimation(); // 0xd0a Func
	
Label_3342:
	return 0; // 0xd0e Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xdd4 PushI
	if(var_48_int == 0) goto Label_3863; // 0xdd5 JumpB
	func_4627(); // 0xdd7 NEW_2
	var_50_int = 23259; // 0xdd9 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xdda Eq
	if(var_51_bool == 0) goto Label_3553; // 0xddb JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xddc PushV
	var_52_object = var_1_object; // 0xddd MovT
	var_53_object = var_0_object; // 0xdde MovT
	func_4948(); // 0xddf NEW_2
	
Label_3553:
	var_79_int = 23258; // 0xde1 PushI
	var_80_bool = var_46_bool == var_79_int; // 0xde2 Eq
	if(var_80_bool == 0) goto Label_3611; // 0xde3 JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0xde4 PushV
	var_82_object = var_1_object; // 0xde5 MovT
	func_5075(var_82_object); // 0xde6 NEW_2
	if(var_81_bool == 0) goto Label_3596; // 0xde8 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xde9 PushV
	var_89_object = var_1_object; // 0xdea MovT
	var_90_object = var_0_object; // 0xdeb MovT
	func_4957(); // 0xdec NEW_2
	var_93_string = ""; // 0xdee PushV
	var_93_string = "Neutral"; // 0xdef MovS
	func_3517(var_47_cvector, var_93_string); // 0xdf0 NEW_2
	var_110_int = 522089; // 0xdf2 PushI
	SetMessage(var_110_int); // 0xdf3 TObjFunc
	ClearReplies(); // 0xdf5 TObjFunc
	var_111_int = 523647; // 0xdf7 PushI
	var_112_int = 24892; // 0xdf8 PushI
	var_113_int = 24891; // 0xdf9 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xdfa TObjFunc
	var_114_int = 523657; // 0xdfc PushI
	var_115_int = 24892; // 0xdfd PushI
	var_116_int = 24901; // 0xdfe PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xdff TObjFunc
	var_117_bool = 0; var_118_object = Obj(); // 0xe01 PushV
	var_118_object = var_1_object; // 0xe02 MovT
	func_5063(var_118_object); // 0xe03 NEW_2
	if(var_117_bool == 0) goto Label_3595; // 0xe05 JumpB
	var_123_int = 522091; // 0xe06 PushI
	var_124_int = 23261; // 0xe07 PushI
	var_125_int = 23260; // 0xe08 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xe09 TObjFunc
	
Label_3595:
	return 0; // 0xe0b Return
	
Label_3596:
	var_126_string = ""; // 0xe0c PushV
	var_126_string = "Neutral"; // 0xe0d MovS
	func_3517(var_47_cvector, var_126_string); // 0xe0e NEW_2
	var_127_int = 522094; // 0xe10 PushI
	SetMessage(var_127_int); // 0xe11 TObjFunc
	ClearReplies(); // 0xe13 TObjFunc
	var_128_int = 522095; // 0xe15 PushI
	var_129_int = -1; // 0xe16 PushI
	var_130_int = 23264; // 0xe17 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xe18 TObjFunc
	return 0; // 0xe1a Return
	
Label_3611:
	var_131_int = 24834; // 0xe1b PushI
	var_132_bool = var_46_bool == var_131_int; // 0xe1c Eq
	if(var_132_bool == 0) goto Label_3614; // 0xe1d JumpB
	
Label_3614:
	var_133_int = 24900; // 0xe1e PushI
	var_134_bool = var_46_bool == var_133_int; // 0xe1f Eq
	if(var_134_bool == 0) goto Label_3632; // 0xe20 JumpB
	var_135_string = ""; // 0xe21 PushV
	var_135_string = "Neutral"; // 0xe22 MovS
	func_3517(var_47_cvector, var_135_string); // 0xe23 NEW_2
	var_136_int = 523656; // 0xe25 PushI
	SetMessage(var_136_int); // 0xe26 TObjFunc
	ClearReplies(); // 0xe28 TObjFunc
	var_137_int = 534554; // 0xe2a PushI
	var_138_int = -1; // 0xe2b PushI
	var_139_int = 36186; // 0xe2c PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xe2d TObjFunc
	return 0; // 0xe2f Return
	
Label_3632:
	var_140_int = 23261; // 0xe30 PushI
	var_141_bool = var_46_bool == var_140_int; // 0xe31 Eq
	if(var_141_bool == 0) goto Label_3655; // 0xe32 JumpB
	var_142_string = ""; // 0xe33 PushV
	var_142_string = "Neutral"; // 0xe34 MovS
	func_3517(var_47_cvector, var_142_string); // 0xe35 NEW_2
	var_143_int = 522092; // 0xe37 PushI
	SetMessage(var_143_int); // 0xe38 TObjFunc
	ClearReplies(); // 0xe3a TObjFunc
	var_144_int = 523645; // 0xe3c PushI
	var_145_int = 24889; // 0xe3d PushI
	var_146_int = 24888; // 0xe3e PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xe3f TObjFunc
	var_147_int = 523644; // 0xe41 PushI
	var_148_int = 24889; // 0xe42 PushI
	var_149_int = 24887; // 0xe43 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0xe44 TObjFunc
	return 0; // 0xe46 Return
	
Label_3655:
	var_150_int = 24889; // 0xe47 PushI
	var_151_bool = var_46_bool == var_150_int; // 0xe48 Eq
	if(var_151_bool == 0) goto Label_3673; // 0xe49 JumpB
	var_152_string = ""; // 0xe4a PushV
	var_152_string = "Neutral"; // 0xe4b MovS
	func_3517(var_47_cvector, var_152_string); // 0xe4c NEW_2
	var_153_int = 523646; // 0xe4e PushI
	SetMessage(var_153_int); // 0xe4f TObjFunc
	ClearReplies(); // 0xe51 TObjFunc
	var_154_int = 522093; // 0xe53 PushI
	var_155_int = -1; // 0xe54 PushI
	var_156_int = 23262; // 0xe55 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0xe56 TObjFunc
	return 0; // 0xe58 Return
	
Label_3673:
	var_157_int = 24892; // 0xe59 PushI
	var_158_bool = var_46_bool == var_157_int; // 0xe5a Eq
	if(var_158_bool == 0) goto Label_3691; // 0xe5b JumpB
	var_159_string = ""; // 0xe5c PushV
	var_159_string = "Neutral"; // 0xe5d MovS
	func_3517(var_47_cvector, var_159_string); // 0xe5e NEW_2
	var_160_int = 523648; // 0xe60 PushI
	SetMessage(var_160_int); // 0xe61 TObjFunc
	ClearReplies(); // 0xe63 TObjFunc
	var_161_int = 523649; // 0xe65 PushI
	var_162_int = 24894; // 0xe66 PushI
	var_163_int = 24893; // 0xe67 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0xe68 TObjFunc
	return 0; // 0xe6a Return
	
Label_3691:
	var_164_int = 24908; // 0xe6b PushI
	var_165_bool = var_46_bool == var_164_int; // 0xe6c Eq
	if(var_165_bool == 0) goto Label_3694; // 0xe6d JumpB
	
Label_3694:
	var_166_int = 24912; // 0xe6e PushI
	var_167_bool = var_46_bool == var_166_int; // 0xe6f Eq
	if(var_167_bool == 0) goto Label_3712; // 0xe70 JumpB
	var_168_string = ""; // 0xe71 PushV
	var_168_string = "Neutral"; // 0xe72 MovS
	func_3517(var_47_cvector, var_168_string); // 0xe73 NEW_2
	var_169_int = 523667; // 0xe75 PushI
	SetMessage(var_169_int); // 0xe76 TObjFunc
	ClearReplies(); // 0xe78 TObjFunc
	var_170_int = 523668; // 0xe7a PushI
	var_171_int = 24905; // 0xe7b PushI
	var_172_int = 24913; // 0xe7c PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xe7d TObjFunc
	return 0; // 0xe7f Return
	
Label_3712:
	var_173_int = 24894; // 0xe80 PushI
	var_174_bool = var_46_bool == var_173_int; // 0xe81 Eq
	if(var_174_bool == 0) goto Label_3735; // 0xe82 JumpB
	var_175_string = ""; // 0xe83 PushV
	var_175_string = "Neutral"; // 0xe84 MovS
	func_3517(var_47_cvector, var_175_string); // 0xe85 NEW_2
	var_176_int = 523650; // 0xe87 PushI
	SetMessage(var_176_int); // 0xe88 TObjFunc
	ClearReplies(); // 0xe8a TObjFunc
	var_177_int = 523659; // 0xe8c PushI
	var_178_int = 24905; // 0xe8d PushI
	var_179_int = 24904; // 0xe8e PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xe8f TObjFunc
	var_180_int = 523666; // 0xe91 PushI
	var_181_int = 24896; // 0xe92 PushI
	var_182_int = 24911; // 0xe93 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xe94 TObjFunc
	return 0; // 0xe96 Return
	
Label_3735:
	var_183_int = 24905; // 0xe97 PushI
	var_184_bool = var_46_bool == var_183_int; // 0xe98 Eq
	if(var_184_bool == 0) goto Label_3763; // 0xe99 JumpB
	var_185_string = ""; // 0xe9a PushV
	var_185_string = "Neutral"; // 0xe9b MovS
	func_3517(var_47_cvector, var_185_string); // 0xe9c NEW_2
	var_186_int = 523660; // 0xe9e PushI
	SetMessage(var_186_int); // 0xe9f TObjFunc
	ClearReplies(); // 0xea1 TObjFunc
	var_187_int = 523661; // 0xea3 PushI
	var_188_int = 24896; // 0xea4 PushI
	var_189_int = 24906; // 0xea5 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xea6 TObjFunc
	var_190_int = 523669; // 0xea8 PushI
	var_191_int = 24896; // 0xea9 PushI
	var_192_int = 24915; // 0xeaa PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xeab TObjFunc
	var_193_int = 523651; // 0xead PushI
	var_194_int = 24918; // 0xeae PushI
	var_195_int = 24895; // 0xeaf PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0xeb0 TObjFunc
	return 0; // 0xeb2 Return
	
Label_3763:
	var_196_int = 24918; // 0xeb3 PushI
	var_197_bool = var_46_bool == var_196_int; // 0xeb4 Eq
	if(var_197_bool == 0) goto Label_3781; // 0xeb5 JumpB
	var_198_string = ""; // 0xeb6 PushV
	var_198_string = "Neutral"; // 0xeb7 MovS
	func_3517(var_47_cvector, var_198_string); // 0xeb8 NEW_2
	var_199_int = 523670; // 0xeba PushI
	SetMessage(var_199_int); // 0xebb TObjFunc
	ClearReplies(); // 0xebd TObjFunc
	var_200_int = 523671; // 0xebf PushI
	var_201_int = 24896; // 0xec0 PushI
	var_202_int = 24919; // 0xec1 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xec2 TObjFunc
	return 0; // 0xec4 Return
	
Label_3781:
	var_203_int = 24896; // 0xec5 PushI
	var_204_bool = var_46_bool == var_203_int; // 0xec6 Eq
	if(var_204_bool == 0) goto Label_3804; // 0xec7 JumpB
	var_205_string = ""; // 0xec8 PushV
	var_205_string = "Neutral"; // 0xec9 MovS
	func_3517(var_47_cvector, var_205_string); // 0xeca NEW_2
	var_206_int = 523652; // 0xecc PushI
	SetMessage(var_206_int); // 0xecd TObjFunc
	ClearReplies(); // 0xecf TObjFunc
	var_207_int = 523653; // 0xed1 PushI
	var_208_int = 24898; // 0xed2 PushI
	var_209_int = 24897; // 0xed3 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xed4 TObjFunc
	var_210_int = 523675; // 0xed6 PushI
	var_211_int = 24925; // 0xed7 PushI
	var_212_int = 24924; // 0xed8 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0xed9 TObjFunc
	return 0; // 0xedb Return
	
Label_3804:
	var_213_int = 24925; // 0xedc PushI
	var_214_bool = var_46_bool == var_213_int; // 0xedd Eq
	if(var_214_bool == 0) goto Label_3822; // 0xede JumpB
	var_215_string = ""; // 0xedf PushV
	var_215_string = "Neutral"; // 0xee0 MovS
	func_3517(var_47_cvector, var_215_string); // 0xee1 NEW_2
	var_216_int = 523676; // 0xee3 PushI
	SetMessage(var_216_int); // 0xee4 TObjFunc
	ClearReplies(); // 0xee6 TObjFunc
	var_217_int = 523677; // 0xee8 PushI
	var_218_int = 24898; // 0xee9 PushI
	var_219_int = 24926; // 0xeea PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0xeeb TObjFunc
	return 0; // 0xeed Return
	
Label_3822:
	var_220_int = 24898; // 0xeee PushI
	var_221_bool = var_46_bool == var_220_int; // 0xeef Eq
	if(var_221_bool == 0) goto Label_3851; // 0xef0 JumpB
	var_222_string = ""; // 0xef1 PushV
	var_222_string = "Neutral"; // 0xef2 MovS
	func_3517(var_47_cvector, var_222_string); // 0xef3 NEW_2
	var_223_int = 523654; // 0xef5 PushI
	SetMessage(var_223_int); // 0xef6 TObjFunc
	ClearReplies(); // 0xef8 TObjFunc
	var_224_bool = 0; var_225_object = Obj(); // 0xefa PushV
	var_225_object = var_1_object; // 0xefb MovT
	func_5063(var_225_object); // 0xefc NEW_2
	var_226_bool = var_224_bool == 0; // 0xefe Not
	if(var_226_bool == 0) goto Label_3845; // 0xeff JumpB
	var_227_int = 522090; // 0xf00 PushI
	var_228_int = -1; // 0xf01 PushI
	var_229_int = 23259; // 0xf02 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0xf03 TObjFunc
	
Label_3845:
	var_230_int = 523678; // 0xf05 PushI
	var_231_int = -1; // 0xf06 PushI
	var_232_int = 24928; // 0xf07 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xf08 TObjFunc
	return 0; // 0xf0a Return
	
Label_3851:
	var_3_string = 1; // 0xf0b TMovB
	var_233_bool = 0; // 0xf0c PushV
	func_4774(var_233_bool); // 0xf0d NEW_2
	if(var_233_bool == 0) goto Label_3859; // 0xf0f JumpB
	lshStopAnimation(); // 0xf10 Func
	goto Label_3861; // 0xf12 Jump
	
Label_3861:
	return 0; // 0xf15 Return
	
Label_3859:
	StopAnimation(); // 0xf13 Func
	
Label_3863:
	return 0; // 0xf17 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0xfba PushI
	if(var_48_int == 0) goto Label_4066; // 0xfbb JumpB
	func_4627(); // 0xfbd NEW_2
	var_50_int = 42560; // 0xfbf PushI
	var_51_bool = var_46_int == var_50_int; // 0xfc0 Eq
	if(var_51_bool == 0) goto Label_4054; // 0xfc1 JumpB
	var_52_string = ""; // 0xfc2 PushV
	var_52_string = "Neutral"; // 0xfc3 MovS
	func_4003(var_47_cvector, var_52_string); // 0xfc4 NEW_2
	var_69_int = 540551; // 0xfc6 PushI
	SetMessage(var_69_int); // 0xfc7 TObjFunc
	ClearReplies(); // 0xfc9 TObjFunc
	var_70_int = 540552; // 0xfcb PushI
	var_71_int = -1; // 0xfcc PushI
	var_72_int = 42561; // 0xfcd PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xfce TObjFunc
	var_73_int = 540795; // 0xfd0 PushI
	var_74_int = -1; // 0xfd1 PushI
	var_75_int = 42844; // 0xfd2 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xfd3 TObjFunc
	return 0; // 0xfd5 Return
	
Label_4054:
	var_3_string = 1; // 0xfd6 TMovB
	var_76_bool = 0; // 0xfd7 PushV
	func_4774(var_76_bool); // 0xfd8 NEW_2
	if(var_76_bool == 0) goto Label_4062; // 0xfda JumpB
	lshStopAnimation(); // 0xfdb Func
	goto Label_4064; // 0xfdd Jump
	
Label_4064:
	return 0; // 0xfe0 Return
	
Label_4062:
	StopAnimation(); // 0xfde Func
	
Label_4066:
	return 0; // 0xfe2 Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x1030 PushI
	var_48_bool = var_46_int == var_47_int; // 0x1031 Eq
	if(var_48_bool == 0) goto Label_4180; // 0x1032 JumpB
	func_4139(); // 0x1034 NEW_2
	var_50_bool = 0; // 0x1036 PushV
	var_50_bool = 0; // 0x1037 MovB
	var_51_bool = 0; // 0x1038 PushV
	func_4353(var_51_bool); // 0x1039 NEW_2
	if(var_51_bool == 0) goto Label_4161; // 0x103b JumpB
	var_54_bool = 0; // 0x103c PushV
	func_4108(var_54_bool); // 0x103d NEW_2
	if(var_54_bool == 0) goto Label_4161; // 0x103f JumpB
	var_50_bool = 1; // 0x1040 MovB
	
Label_4161:
	if(var_50_bool == 0) goto Label_4174; // 0x1041 JumpB
	var_71_bool = 0; // 0x1042 PushV
	func_4088(var_71_bool); // 0x1043 NEW_2
	if(var_71_bool == 0) goto Label_4173; // 0x1045 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x1046 PushV
	var_92_object = Obj(); // 0x1047 PushV
	func_4634(var_92_object); // 0x1048 NEW_2
	var_91_object = var_92_object; // 0x1049 Mov
	func_4501(var_91_object); // 0x104b NEW_2
	
Label_4173:
	goto Label_4180; // 0x104d Jump
	
Label_4180:
	return 0; // 0x1054 Return
	
Label_4174:
	func_4103(var_46_int); // 0x104f NEW_2
	func_4130(); // 0x1052 NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4321(); // 0x1056 NEW_2
	func_4139(); // 0x1059 NEW_2
	lshStopSpeech(); // 0x105b Func
	lshStopAnimation(); // 0x105d Func
	StopAsync(); // 0x105f Func
	Hold(); // 0x1061 Func
	return 0; // 0x1063 Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x1064 Func
	func_4139(); // 0x1067 NEW_2
	var_47_string = ""; // 0x1069 PushV
	var_47_string = "Neutral"; // 0x106a MovS
	func_4581(var_47_string); // 0x106b NEW_2
	func_4130(); // 0x106e NEW_2
	return 0; // 0x1070 Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x1072 Push
	if(var_47_bool == 0) goto Label_4216; // 0x1073 JumpB
	func_4130(); // 0x1075 NEW_2
	goto Label_4220; // 0x1077 Jump
	
Label_4220:
	return 0; // 0x107c Return
	
Label_4216:
	var_53_string = ""; // 0x1078 PushV
	var_53_string = "Neutral"; // 0x1079 MovS
	func_4581(var_53_string); // 0x107a NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x107d PushV
	IsOverrideActive(var_48_bool); // 0x107e Func
	var_49_bool = var_48_bool == 0; // 0x1080 Not
	if(var_49_bool == 0) goto Label_4249; // 0x1081 JumpB
	EventDisable(0); // 0x1082 EventDisable
	func_4321(); // 0x1084 NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x1086 PushV
	var_51_object = var_46_object; // 0x1087 Mov
	func_4344(var_51_object); // 0x1088 NEW_2
	EventEnable(0); // 0x108a EventEnable
	var_64_object = Obj(); // 0x108b PushV
	var_64_object = var_46_object; // 0x108c Mov
	func_5367(var_64_object); // 0x108d NEW_2
	var_896_string = ""; // 0x108f PushV
	var_896_string = "Neutral"; // 0x1090 MovS
	func_4581(var_896_string); // 0x1091 NEW_2
	func_4139(); // 0x1094 NEW_2
	func_4130(); // 0x1097 NEW_2
	
Label_4249:
	return 2; // 0x1099 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1]; // 0xfe3 PushGE
	var_46_bool = 0; // 0xfe4 MovB
	GlobalVars[1] = var_46_bool; // 0xfe5 PopGE
	func_4074(var_45_cvector); // 0xfe7 NEW_2
	return 0; // 0xfe9 Return
}


func_0(var_0_object, var_780_int, var_781_object)
{
	var_783_object = Obj(); var_784_bool = 0; var_785_int = 0; var_786_bool = 0; var_787_object = Obj(); var_788_bool = 0; var_789_int = 0; var_790_bool = 0; // 0x0 PushV
	var_0_object = var_781_object; // 0x1 TMov
	var_791_bool = 0; var_792_object = Obj(); var_793_float = 0; // 0x2 PushV
	var_792_object = var_781_object; // 0x3 Mov
	var_793_float = 70.0; // 0x4 MovF
	func_4358(var_792_object, var_793_float); // 0x5 NEW_2
	var_794_bool = var_791_bool == 0; // 0x7 Not
	if(var_794_bool == 0) goto Label_11; // 0x8 JumpB
	var_780_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_787_object); // 0xb Func
	var_795_int = 0; // 0xd PushV
	func_4768(var_795_int); // 0xe NEW_2
	SetNPCName(var_795_int); // 0x10 ObjFunc
	var_796_int = 0; // 0x12 PushV
	func_4766(var_796_int); // 0x13 NEW_2
	SetNPCDescription(var_796_int); // 0x15 ObjFunc
	var_797_string = ""; // 0x17 PushV
	func_4770(var_797_string); // 0x18 NEW_2
	SetPhoto(var_797_string); // 0x1a ObjFunc
	var_798_string = ""; // 0x1c PushV
	func_4772(var_798_string); // 0x1d NEW_2
	SetPhoto2(var_798_string); // 0x1f ObjFunc
	var_799_int = 0; // 0x21 PushV
	func_5350(var_799_int); // 0x22 NEW_2
	SetPlayerName(var_799_int); // 0x24 ObjFunc
	var_789_int = -1; // 0x26 MovI
	IsOverrideActive(var_788_bool); // 0x27 Func
	var_800_bool = var_788_bool; // 0x29 Push
	if(var_800_bool == 0) goto Label_45; // 0x2a JumpB
	var_780_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_787_object); // 0x2d Func
	var_801_bool = 0; var_802_object = Obj(); // 0x2f PushV
	var_803_object = Obj(); // 0x30 PushV
	func_4634(var_803_object); // 0x31 NEW_2
	var_802_object = var_803_object; // 0x32 Mov
	func_4443(var_801_bool, var_802_object); // 0x34 NEW_2
	var_804_object = Obj(); var_805_object = Obj(); // 0x36 PushV
	var_804_object = var_781_object; // 0x37 Mov
	var_805_object = var_787_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_806_object, var_807_object, var_808_string, var_809_bool, var_804_object, var_805_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_790_bool); // 0x3d ObjFunc
	
Label_63:
	var_837_bool = var_790_bool == 0; // 0x3f Not
	if(var_837_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_790_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_838_object = Obj(); // 0x46 PushV
	var_838_object = var_781_object; // 0x47 Mov
	func_4426(); // 0x48 NEW_2
	StopDialog(var_787_object); // 0x4a Func
	GetReturnValue(var_789_int); // 0x4c ObjFunc
	var_780_int = var_789_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4864()
{
	var_82_string = "oob2Ospina1"; // 0x1301 PushS
	var_83_int = 1; // 0x1302 PushI
	SetVariable(var_82_string, var_83_int); // 0x1303 Func
	return 0; // 0x1305 Return
}


func_4353(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x1101 PushV
	IsLoaded(var_49_bool); // 0x1102 Func
	var_47_bool = var_49_bool; // 0x1104 Mov
	return 2; // 0x1105 Return
}


func_5123(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0x1404 PushV
	var_453_string = "oob3Ospina1"; // 0x1405 MovS
	func_4650(var_452_int, var_453_string); // 0x1406 NEW_2
	var_454_int = 0; // 0x1408 PushI
	var_455_bool = var_452_int == var_454_int; // 0x1409 Eq
	if(var_455_bool == 0) goto Label_5133; // 0x140a JumpB
	var_450_bool = 1; // 0x140b MovB
	return 0; // 0x140c Return
	
Label_5133:
	var_450_bool = 0; // 0x140d MovB
	return 0; // 0x140e Return
}


func_4612(var_172_bool, var_173_string)
{
	var_174_bool = 0; var_175_bool = 0; // 0x1204 PushV
	var_176_bool = 0; // 0x1205 PushV
	func_4774(var_176_bool); // 0x1206 NEW_2
	if(var_176_bool == 0) goto Label_4625; // 0x1208 JumpB
	lshHasSpeech(var_175_bool, var_173_string); // 0x1209 Func
	var_177_bool = var_175_bool; // 0x120b Push
	if(var_177_bool == 0) goto Label_4625; // 0x120c JumpB
	lshPlaySpeech(var_173_string); // 0x120d Func
	var_172_bool = 1; // 0x120f MovB
	return 2; // 0x1210 Return
	
Label_4625:
	var_172_bool = 0; // 0x1211 MovB
	return 2; // 0x1212 Return
}


func_259(var_0_object, var_474_int, var_475_object)
{
	var_477_object = Obj(); var_478_bool = 0; var_479_int = 0; var_480_bool = 0; var_481_object = Obj(); var_482_bool = 0; var_483_int = 0; var_484_bool = 0; // 0x103 PushV
	var_0_object = var_475_object; // 0x104 TMov
	var_485_bool = 0; var_486_object = Obj(); var_487_float = 0; // 0x105 PushV
	var_486_object = var_475_object; // 0x106 Mov
	var_487_float = 70.0; // 0x107 MovF
	func_4358(var_486_object, var_487_float); // 0x108 NEW_2
	var_488_bool = var_485_bool == 0; // 0x10a Not
	if(var_488_bool == 0) goto Label_270; // 0x10b JumpB
	var_474_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_481_object); // 0x10e Func
	var_489_int = 0; // 0x110 PushV
	func_4768(var_489_int); // 0x111 NEW_2
	SetNPCName(var_489_int); // 0x113 ObjFunc
	var_490_int = 0; // 0x115 PushV
	func_4766(var_490_int); // 0x116 NEW_2
	SetNPCDescription(var_490_int); // 0x118 ObjFunc
	var_491_string = ""; // 0x11a PushV
	func_4770(var_491_string); // 0x11b NEW_2
	SetPhoto(var_491_string); // 0x11d ObjFunc
	var_492_string = ""; // 0x11f PushV
	func_4772(var_492_string); // 0x120 NEW_2
	SetPhoto2(var_492_string); // 0x122 ObjFunc
	var_493_int = 0; // 0x124 PushV
	func_5350(var_493_int); // 0x125 NEW_2
	SetPlayerName(var_493_int); // 0x127 ObjFunc
	var_483_int = -1; // 0x129 MovI
	IsOverrideActive(var_482_bool); // 0x12a Func
	var_494_bool = var_482_bool; // 0x12c Push
	if(var_494_bool == 0) goto Label_304; // 0x12d JumpB
	var_474_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_481_object); // 0x130 Func
	var_495_bool = 0; var_496_object = Obj(); // 0x132 PushV
	var_497_object = Obj(); // 0x133 PushV
	func_4634(var_497_object); // 0x134 NEW_2
	var_496_object = var_497_object; // 0x135 Mov
	func_4443(var_495_bool, var_496_object); // 0x137 NEW_2
	var_498_object = Obj(); var_499_object = Obj(); // 0x139 PushV
	var_498_object = var_475_object; // 0x13a Mov
	var_499_object = var_481_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_500_object, var_501_object, var_502_string, var_503_bool, var_498_object, var_499_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_484_bool); // 0x140 ObjFunc
	
Label_322:
	var_541_bool = var_484_bool == 0; // 0x142 Not
	if(var_541_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_484_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_542_object = Obj(); // 0x149 PushV
	var_542_object = var_475_object; // 0x14a Mov
	func_4426(); // 0x14b NEW_2
	StopDialog(var_481_object); // 0x14d Func
	GetReturnValue(var_483_int); // 0x14f ObjFunc
	var_474_int = var_483_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_4358(var_78_bool, var_80_float)
{
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; // 0x1106 PushV
	GetPosition(var_91_cvector); // 0x1107 ObjFunc
	GetEyesHeight(var_90_float); // 0x1109 ObjFunc
	var_99_float = GetByIndex(var_91_cvector, 1); // 0x110b PushE
	var_99_float = var_99_float + var_90_float; // 0x110c Add2
	SetByIndex(var_91_cvector, 1) = var_99_float; // 0x110d PopE
	GetPosition(var_92_cvector); // 0x110e Func
	GetEyesHeight(var_90_float); // 0x1110 Func
	var_100_float = GetByIndex(var_92_cvector, 1); // 0x1112 PushE
	var_100_float = var_100_float + var_90_float; // 0x1113 Add2
	SetByIndex(var_92_cvector, 1) = var_100_float; // 0x1114 PopE
	var_93_cvector = var_91_cvector - var_92_cvector; // 0x1115 Sub2
	var_101_float = GetByIndex(var_93_cvector, 1); // 0x1116 PushE
	var_101_float = 0; // 0x1117 MovI
	SetByIndex(var_93_cvector, 1) = var_101_float; // 0x1118 PopE
	var_102_int = var_93_cvector | var_93_cvector; // 0x1119 Or
	var_103_float = sqrt(var_102_int); // 0x111a Sqrt
	var_93_cvector = var_93_cvector / var_93_cvector; // 0x111b Div2
	var_94_cvector = -var_93_cvector; // 0x111c Neg2
	var_104_float = var_93_cvector * var_80_float; // 0x111d Mult
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x111e PushV
	var_107_cvector = CVector(0.0, 1.0, 0.0); // 0x111f PushVec
	var_106_cvector = var_94_cvector ^ var_107_cvector; // 0x1120 Xor2
	func_4640(var_105_cvector, var_106_cvector); // 0x1121 NEW_2
	var_113_int = 25; // 0x1123 PushI
	var_114_float = var_105_cvector * var_113_int; // 0x1124 Mult
	var_115_int = var_104_float + var_114_float; // 0x1125 Add
	var_116_cvector = CVector(0.0, 10.0, 0.0); // 0x1126 PushVec
	var_95_cvector = var_115_int - var_116_cvector; // 0x1127 Sub2
	var_96_cvector = var_92_cvector + var_95_cvector; // 0x1128 Add2
	IsOverrideActive(var_97_bool); // 0x1129 Func
	var_117_bool = var_97_bool; // 0x112b Push
	if(var_117_bool == 0) goto Label_4399; // 0x112c JumpB
	var_78_bool = 0; // 0x112d MovB
	return 18; // 0x112e Return
	
Label_4399:
	StopWorld(); // 0x112f Func
	CameraTransit(var_96_cvector, var_94_cvector); // 0x1131 Func
	var_118_float = GetByIndex(var_95_cvector, 0); // 0x1133 PushE
	var_119_float = GetByIndex(var_95_cvector, 2); // 0x1134 PushE
	Rotate(var_118_float, var_119_float); // 0x1135 Func
	var_120_bool = 0; // 0x1137 PushV
	func_4774(var_120_bool); // 0x1138 NEW_2
	if(var_120_bool == 0) goto Label_4412; // 0x113a JumpB
	goto Label_4420; // 0x113b Jump
	
Label_4420:
	CameraWaitForPlayFinish(); // 0x1144 Func
	ResumeWorld(); // 0x1146 Func
	var_78_bool = 1; // 0x1148 MovB
	return 18; // 0x1149 Return
	
Label_4412:
	var_121_string = "head"; // 0x113c PushS
	HasAnimationTrack(var_98_bool, var_121_string); // 0x113d Func
	var_122_bool = var_98_bool; // 0x113f Push
	if(var_122_bool == 0) goto Label_4420; // 0x1140 JumpB
	var_123_string = "head"; // 0x1141 PushS
	LookAsyncCamera(var_123_string); // 0x1142 Func
}


func_4103(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x1007 PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x1008 PushE
	RotateAsync(var_123_float, var_124_float); // 0x1009 Func
	return 0; // 0x100b Return
}


func_4870()
{
	var_88_string = "oob2Ospina2"; // 0x1307 PushS
	var_89_int = 1; // 0x1308 PushI
	SetVariable(var_88_string, var_89_int); // 0x1309 Func
	return 0; // 0x130b Return
}


func_776(var_0_object, var_401_int, var_402_object)
{
	var_404_object = Obj(); var_405_bool = 0; var_406_int = 0; var_407_bool = 0; var_408_object = Obj(); var_409_bool = 0; var_410_int = 0; var_411_bool = 0; // 0x308 PushV
	var_0_object = var_402_object; // 0x309 TMov
	var_412_bool = 0; var_413_object = Obj(); var_414_float = 0; // 0x30a PushV
	var_413_object = var_402_object; // 0x30b Mov
	var_414_float = 70.0; // 0x30c MovF
	func_4358(var_413_object, var_414_float); // 0x30d NEW_2
	var_415_bool = var_412_bool == 0; // 0x30f Not
	if(var_415_bool == 0) goto Label_787; // 0x310 JumpB
	var_401_int = -2; // 0x311 MovI
	return 8; // 0x312 Return
	
Label_787:
	CreateDialog(var_408_object); // 0x313 Func
	var_416_int = 0; // 0x315 PushV
	func_4768(var_416_int); // 0x316 NEW_2
	SetNPCName(var_416_int); // 0x318 ObjFunc
	var_417_int = 0; // 0x31a PushV
	func_4766(var_417_int); // 0x31b NEW_2
	SetNPCDescription(var_417_int); // 0x31d ObjFunc
	var_418_string = ""; // 0x31f PushV
	func_4770(var_418_string); // 0x320 NEW_2
	SetPhoto(var_418_string); // 0x322 ObjFunc
	var_419_string = ""; // 0x324 PushV
	func_4772(var_419_string); // 0x325 NEW_2
	SetPhoto2(var_419_string); // 0x327 ObjFunc
	var_420_int = 0; // 0x329 PushV
	func_5350(var_420_int); // 0x32a NEW_2
	SetPlayerName(var_420_int); // 0x32c ObjFunc
	var_410_int = -1; // 0x32e MovI
	IsOverrideActive(var_409_bool); // 0x32f Func
	var_421_bool = var_409_bool; // 0x331 Push
	if(var_421_bool == 0) goto Label_821; // 0x332 JumpB
	var_401_int = -2; // 0x333 MovI
	return 8; // 0x334 Return
	
Label_821:
	DoDialog(var_408_object); // 0x335 Func
	var_422_bool = 0; var_423_object = Obj(); // 0x337 PushV
	var_424_object = Obj(); // 0x338 PushV
	func_4634(var_424_object); // 0x339 NEW_2
	var_423_object = var_424_object; // 0x33a Mov
	func_4443(var_422_bool, var_423_object); // 0x33c NEW_2
	var_425_object = Obj(); var_426_object = Obj(); // 0x33e PushV
	var_425_object = var_402_object; // 0x33f Mov
	var_426_object = var_408_object; // 0x340 Mov
	TaskCall(5); // 0x341 TaskCall
	func_857(var_427_object, var_428_object, var_429_string, var_430_bool, var_425_object, var_426_object); // 0x342 NEW_2
	TaskReturn(); // 0x343 TaskReturn
	IsDialogEnd(var_411_bool); // 0x345 ObjFunc
	
Label_839:
	var_470_bool = var_411_bool == 0; // 0x347 Not
	if(var_470_bool == 0) goto Label_846; // 0x348 JumpB
	sync(); // 0x349 Func
	IsDialogEnd(var_411_bool); // 0x34b ObjFunc
	goto Label_839; // 0x34d Jump
	
Label_846:
	var_471_object = Obj(); // 0x34e PushV
	var_471_object = var_402_object; // 0x34f Mov
	func_4426(); // 0x350 NEW_2
	StopDialog(var_408_object); // 0x352 Func
	GetReturnValue(var_410_int); // 0x354 ObjFunc
	var_401_int = var_410_int; // 0x356 Mov
	return 8; // 0x357 Return
}


func_4108(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x100c PushV
	var_59_string = "player"; // 0x100d PushS
	FindActor(var_57_object, var_59_string); // 0x100e Func
	var_60_bool = var_57_object == 0; // 0x1010 Not
	if(var_60_bool == 0) goto Label_4116; // 0x1011 JumpB
	var_54_bool = 0; // 0x1012 MovB
	return 4; // 0x1013 Return
	
Label_4116:
	var_61_float = 0; var_62_object = Obj(); // 0x1014 PushV
	var_62_object = var_57_object; // 0x1015 Mov
	func_4326(var_62_object); // 0x1016 NEW_2
	var_69_float = 90000.0; // 0x1018 PushF
	var_70_bool = var_61_float > var_69_float; // 0x1019 GT
	if(var_70_bool == 0) goto Label_4125; // 0x101a JumpB
	var_54_bool = 0; // 0x101b MovB
	return 4; // 0x101c Return
	
Label_4125:
	CanSee(var_58_bool, var_57_object); // 0x101d Func
	var_54_bool = var_58_bool; // 0x101f Mov
	return 4; // 0x1020 Return
}


func_4876()
{
	var_132_string = "oob2Ospina3"; // 0x130d PushS
	var_133_int = 1; // 0x130e PushI
	SetVariable(var_132_string, var_133_int); // 0x130f Func
	return 0; // 0x1311 Return
}


func_5135(var_441_bool)
{
	var_443_int = 0; var_444_string = ""; // 0x1410 PushV
	var_444_string = "b3q01"; // 0x1411 MovS
	func_4650(var_443_int, var_444_string); // 0x1412 NEW_2
	var_445_int = 1; // 0x1414 PushI
	var_446_bool = var_443_int == var_445_int; // 0x1415 Eq
	if(var_446_bool == 0) goto Label_5145; // 0x1416 JumpB
	var_441_bool = 1; // 0x1417 MovB
	return 0; // 0x1418 Return
	
Label_5145:
	var_441_bool = 0; // 0x1419 MovB
	return 0; // 0x141a Return
}


func_3343(var_0_object, var_695_int, var_696_object)
{
	var_698_object = Obj(); var_699_bool = 0; var_700_int = 0; var_701_bool = 0; var_702_object = Obj(); var_703_bool = 0; var_704_int = 0; var_705_bool = 0; // 0xd0f PushV
	var_0_object = var_696_object; // 0xd10 TMov
	var_706_bool = 0; var_707_object = Obj(); var_708_float = 0; // 0xd11 PushV
	var_707_object = var_696_object; // 0xd12 Mov
	var_708_float = 70.0; // 0xd13 MovF
	func_4358(var_707_object, var_708_float); // 0xd14 NEW_2
	var_709_bool = var_706_bool == 0; // 0xd16 Not
	if(var_709_bool == 0) goto Label_3354; // 0xd17 JumpB
	var_695_int = -2; // 0xd18 MovI
	return 8; // 0xd19 Return
	
Label_3354:
	CreateDialog(var_702_object); // 0xd1a Func
	var_710_int = 0; // 0xd1c PushV
	func_4768(var_710_int); // 0xd1d NEW_2
	SetNPCName(var_710_int); // 0xd1f ObjFunc
	var_711_int = 0; // 0xd21 PushV
	func_4766(var_711_int); // 0xd22 NEW_2
	SetNPCDescription(var_711_int); // 0xd24 ObjFunc
	var_712_string = ""; // 0xd26 PushV
	func_4770(var_712_string); // 0xd27 NEW_2
	SetPhoto(var_712_string); // 0xd29 ObjFunc
	var_713_string = ""; // 0xd2b PushV
	func_4772(var_713_string); // 0xd2c NEW_2
	SetPhoto2(var_713_string); // 0xd2e ObjFunc
	var_714_int = 0; // 0xd30 PushV
	func_5350(var_714_int); // 0xd31 NEW_2
	SetPlayerName(var_714_int); // 0xd33 ObjFunc
	var_704_int = -1; // 0xd35 MovI
	IsOverrideActive(var_703_bool); // 0xd36 Func
	var_715_bool = var_703_bool; // 0xd38 Push
	if(var_715_bool == 0) goto Label_3388; // 0xd39 JumpB
	var_695_int = -2; // 0xd3a MovI
	return 8; // 0xd3b Return
	
Label_3388:
	DoDialog(var_702_object); // 0xd3c Func
	var_716_bool = 0; var_717_object = Obj(); // 0xd3e PushV
	var_718_object = Obj(); // 0xd3f PushV
	func_4634(var_718_object); // 0xd40 NEW_2
	var_717_object = var_718_object; // 0xd41 Mov
	func_4443(var_716_bool, var_717_object); // 0xd43 NEW_2
	var_719_object = Obj(); var_720_object = Obj(); // 0xd45 PushV
	var_719_object = var_696_object; // 0xd46 Mov
	var_720_object = var_702_object; // 0xd47 Mov
	TaskCall(15); // 0xd48 TaskCall
	func_3424(var_721_object, var_722_object, var_723_string, var_724_bool, var_719_object, var_720_object); // 0xd49 NEW_2
	TaskReturn(); // 0xd4a TaskReturn
	IsDialogEnd(var_705_bool); // 0xd4c ObjFunc
	
Label_3406:
	var_773_bool = var_705_bool == 0; // 0xd4e Not
	if(var_773_bool == 0) goto Label_3413; // 0xd4f JumpB
	sync(); // 0xd50 Func
	IsDialogEnd(var_705_bool); // 0xd52 ObjFunc
	goto Label_3406; // 0xd54 Jump
	
Label_3413:
	var_774_object = Obj(); // 0xd55 PushV
	var_774_object = var_696_object; // 0xd56 Mov
	func_4426(); // 0xd57 NEW_2
	StopDialog(var_702_object); // 0xd59 Func
	GetReturnValue(var_704_int); // 0xd5b ObjFunc
	var_695_int = var_704_int; // 0xd5d Mov
	return 8; // 0xd5e Return
}


func_4882()
{
	var_138_string = "oob2Ospina4"; // 0x1313 PushS
	var_139_int = 1; // 0x1314 PushI
	SetVariable(var_138_string, var_139_int); // 0x1315 Func
	return 0; // 0x1317 Return
}


func_4627()
{
	var_49_bool = 0; // 0x1213 PushV
	func_4774(var_49_bool); // 0x1214 NEW_2
	if(var_49_bool == 0) goto Label_4633; // 0x1216 JumpB
	lshStopSpeech(); // 0x1217 Func
	
Label_4633:
	return 0; // 0x1219 Return
}


func_4888()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x1318 PushV
	var_96_int = 0; var_97_string = ""; // 0x1319 PushV
	var_97_string = "b2TravnikMark"; // 0x131a MovS
	func_4650(var_96_int, var_97_string); // 0x131b NEW_2
	var_100_int = 0; // 0x131d PushI
	var_101_bool = var_96_int == var_100_int; // 0x131e Eq
	if(var_101_bool == 0) goto Label_4932; // 0x131f JumpB
	var_102_string = "b2TravnikMark"; // 0x1320 PushS
	var_103_int = 1; // 0x1321 PushI
	SetVariable(var_102_string, var_103_int); // 0x1322 Func
	var_104_object = Obj(); // 0x1324 PushV
	func_5300(var_104_object); // 0x1325 NEW_2
	var_95_object = var_104_object; // 0x1326 Mov
	var_111_string = "b2Travnik1"; // 0x1328 PushS
	var_112_string = "pt_map_gatherer1"; // 0x1329 PushS
	var_113_int = 3; // 0x132a PushI
	var_114_int = 520463; // 0x132b PushI
	var_115_float = 0; // 0x132c PushV
	func_4722(var_115_float); // 0x132d NEW_2
	AddMark(var_111_string, var_112_string, var_113_int, var_114_int, var_115_float); // 0x132f ObjFunc
	var_118_string = "b2Travnik2"; // 0x1331 PushS
	var_119_string = "pt_map_gatherer2"; // 0x1332 PushS
	var_120_int = 3; // 0x1333 PushI
	var_121_int = 520464; // 0x1334 PushI
	var_122_float = 0; // 0x1335 PushV
	func_4722(var_122_float); // 0x1336 NEW_2
	AddMark(var_118_string, var_119_string, var_120_int, var_121_int, var_122_float); // 0x1338 ObjFunc
	var_123_string = "b2Travnik3"; // 0x133a PushS
	var_124_string = "pt_map_gatherer3"; // 0x133b PushS
	var_125_int = 3; // 0x133c PushI
	var_126_int = 520465; // 0x133d PushI
	var_127_float = 0; // 0x133e PushV
	func_4722(var_127_float); // 0x133f NEW_2
	AddMark(var_123_string, var_124_string, var_125_int, var_126_int, var_127_float); // 0x1341 ObjFunc
	var_95_object = 0; // 0x1343 SetNull
	
Label_4932:
	return 2; // 0x1344 Return
}


func_3864(var_0_object, var_840_int, var_841_object)
{
	var_843_object = Obj(); var_844_bool = 0; var_845_int = 0; var_846_bool = 0; var_847_object = Obj(); var_848_bool = 0; var_849_int = 0; var_850_bool = 0; // 0xf18 PushV
	var_0_object = var_841_object; // 0xf19 TMov
	var_851_bool = 0; var_852_object = Obj(); var_853_float = 0; // 0xf1a PushV
	var_852_object = var_841_object; // 0xf1b Mov
	var_853_float = 70.0; // 0xf1c MovF
	func_4358(var_852_object, var_853_float); // 0xf1d NEW_2
	var_854_bool = var_851_bool == 0; // 0xf1f Not
	if(var_854_bool == 0) goto Label_3875; // 0xf20 JumpB
	var_840_int = -2; // 0xf21 MovI
	return 8; // 0xf22 Return
	
Label_3875:
	CreateDialog(var_847_object); // 0xf23 Func
	var_855_int = 0; // 0xf25 PushV
	func_4768(var_855_int); // 0xf26 NEW_2
	SetNPCName(var_855_int); // 0xf28 ObjFunc
	var_856_int = 0; // 0xf2a PushV
	func_4766(var_856_int); // 0xf2b NEW_2
	SetNPCDescription(var_856_int); // 0xf2d ObjFunc
	var_857_string = ""; // 0xf2f PushV
	func_4770(var_857_string); // 0xf30 NEW_2
	SetPhoto(var_857_string); // 0xf32 ObjFunc
	var_858_string = ""; // 0xf34 PushV
	func_4772(var_858_string); // 0xf35 NEW_2
	SetPhoto2(var_858_string); // 0xf37 ObjFunc
	var_859_int = 0; // 0xf39 PushV
	func_5350(var_859_int); // 0xf3a NEW_2
	SetPlayerName(var_859_int); // 0xf3c ObjFunc
	var_849_int = -1; // 0xf3e MovI
	IsOverrideActive(var_848_bool); // 0xf3f Func
	var_860_bool = var_848_bool; // 0xf41 Push
	if(var_860_bool == 0) goto Label_3909; // 0xf42 JumpB
	var_840_int = -2; // 0xf43 MovI
	return 8; // 0xf44 Return
	
Label_3909:
	DoDialog(var_847_object); // 0xf45 Func
	var_861_bool = 0; var_862_object = Obj(); // 0xf47 PushV
	var_863_object = Obj(); // 0xf48 PushV
	func_4634(var_863_object); // 0xf49 NEW_2
	var_862_object = var_863_object; // 0xf4a Mov
	func_4443(var_861_bool, var_862_object); // 0xf4c NEW_2
	var_864_object = Obj(); var_865_object = Obj(); // 0xf4e PushV
	var_864_object = var_841_object; // 0xf4f Mov
	var_865_object = var_847_object; // 0xf50 Mov
	TaskCall(17); // 0xf51 TaskCall
	func_3945(var_866_object, var_867_object, var_868_string, var_869_bool, var_864_object, var_865_object); // 0xf52 NEW_2
	TaskReturn(); // 0xf53 TaskReturn
	IsDialogEnd(var_850_bool); // 0xf55 ObjFunc
	
Label_3927:
	var_894_bool = var_850_bool == 0; // 0xf57 Not
	if(var_894_bool == 0) goto Label_3934; // 0xf58 JumpB
	sync(); // 0xf59 Func
	IsDialogEnd(var_850_bool); // 0xf5b ObjFunc
	goto Label_3927; // 0xf5d Jump
	
Label_3934:
	var_895_object = Obj(); // 0xf5e PushV
	var_895_object = var_841_object; // 0xf5f Mov
	func_4426(); // 0xf60 NEW_2
	StopDialog(var_847_object); // 0xf62 Func
	GetReturnValue(var_849_int); // 0xf64 ObjFunc
	var_840_int = var_849_int; // 0xf66 Mov
	return 8; // 0xf67 Return
}


func_4634(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj(); // 0x121a PushV
	self(var_142_object); // 0x121b Func
	var_140_object = var_142_object; // 0x121d Mov
	return 2; // 0x121e Return
}


func_5147(var_325_bool)
{
	var_327_int = 0; var_328_string = ""; // 0x141c PushV
	var_328_string = "b2q01"; // 0x141d MovS
	func_4650(var_327_int, var_328_string); // 0x141e NEW_2
	var_331_int = 2; // 0x1420 PushI
	var_332_bool = var_327_int == var_331_int; // 0x1421 Eq
	if(var_332_bool == 0) goto Label_5157; // 0x1422 JumpB
	var_325_bool = 1; // 0x1423 MovB
	return 0; // 0x1424 Return
	
Label_5157:
	var_325_bool = 0; // 0x1425 MovB
	return 0; // 0x1426 Return
}


func_2330(var_0_object, var_545_int, var_546_object)
{
	var_548_object = Obj(); var_549_bool = 0; var_550_int = 0; var_551_bool = 0; var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; // 0x91a PushV
	var_0_object = var_546_object; // 0x91b TMov
	var_556_bool = 0; var_557_object = Obj(); var_558_float = 0; // 0x91c PushV
	var_557_object = var_546_object; // 0x91d Mov
	var_558_float = 70.0; // 0x91e MovF
	func_4358(var_557_object, var_558_float); // 0x91f NEW_2
	var_559_bool = var_556_bool == 0; // 0x921 Not
	if(var_559_bool == 0) goto Label_2341; // 0x922 JumpB
	var_545_int = -2; // 0x923 MovI
	return 8; // 0x924 Return
	
Label_2341:
	CreateDialog(var_552_object); // 0x925 Func
	var_560_int = 0; // 0x927 PushV
	func_4768(var_560_int); // 0x928 NEW_2
	SetNPCName(var_560_int); // 0x92a ObjFunc
	var_561_int = 0; // 0x92c PushV
	func_4766(var_561_int); // 0x92d NEW_2
	SetNPCDescription(var_561_int); // 0x92f ObjFunc
	var_562_string = ""; // 0x931 PushV
	func_4770(var_562_string); // 0x932 NEW_2
	SetPhoto(var_562_string); // 0x934 ObjFunc
	var_563_string = ""; // 0x936 PushV
	func_4772(var_563_string); // 0x937 NEW_2
	SetPhoto2(var_563_string); // 0x939 ObjFunc
	var_564_int = 0; // 0x93b PushV
	func_5350(var_564_int); // 0x93c NEW_2
	SetPlayerName(var_564_int); // 0x93e ObjFunc
	var_554_int = -1; // 0x940 MovI
	IsOverrideActive(var_553_bool); // 0x941 Func
	var_565_bool = var_553_bool; // 0x943 Push
	if(var_565_bool == 0) goto Label_2375; // 0x944 JumpB
	var_545_int = -2; // 0x945 MovI
	return 8; // 0x946 Return
	
Label_2375:
	DoDialog(var_552_object); // 0x947 Func
	var_566_bool = 0; var_567_object = Obj(); // 0x949 PushV
	var_568_object = Obj(); // 0x94a PushV
	func_4634(var_568_object); // 0x94b NEW_2
	var_567_object = var_568_object; // 0x94c Mov
	func_4443(var_566_bool, var_567_object); // 0x94e NEW_2
	var_569_object = Obj(); var_570_object = Obj(); // 0x950 PushV
	var_569_object = var_546_object; // 0x951 Mov
	var_570_object = var_552_object; // 0x952 Mov
	TaskCall(11); // 0x953 TaskCall
	func_2411(var_571_object, var_572_object, var_573_string, var_574_bool, var_569_object, var_570_object); // 0x954 NEW_2
	TaskReturn(); // 0x955 TaskReturn
	IsDialogEnd(var_555_bool); // 0x957 ObjFunc
	
Label_2393:
	var_614_bool = var_555_bool == 0; // 0x959 Not
	if(var_614_bool == 0) goto Label_2400; // 0x95a JumpB
	sync(); // 0x95b Func
	IsDialogEnd(var_555_bool); // 0x95d ObjFunc
	goto Label_2393; // 0x95f Jump
	
Label_2400:
	var_615_object = Obj(); // 0x960 PushV
	var_615_object = var_546_object; // 0x961 Mov
	func_4426(); // 0x962 NEW_2
	StopDialog(var_552_object); // 0x964 Func
	GetReturnValue(var_554_int); // 0x966 ObjFunc
	var_545_int = var_554_int; // 0x968 Mov
	return 8; // 0x969 Return
}


func_4640(var_105_cvector, var_106_cvector)
{
	var_108_float = 0; var_109_float = 0; // 0x1220 PushV
	var_110_int = var_106_cvector | var_106_cvector; // 0x1221 Or
	var_109_float = sqrt(var_110_int); // 0x1222 Sqrt2
	var_111_float = 0.0; // 0x1223 PushF
	var_112_bool = var_109_float < var_111_float; // 0x1224 LT
	if(var_112_bool == 0) goto Label_4648; // 0x1225 JumpB
	var_105_cvector = CVector(0.0, 0.0, 0.0); // 0x1226 MovV
	return 2; // 0x1227 Return
	
Label_4648:
	var_105_cvector = var_106_cvector / var_106_cvector; // 0x1228 Div2
	return 2; // 0x1229 Return
}


func_4130()
{
	var_898_float = 0; var_899_float = 0; // 0x1022 PushV
	var_900_int = 8; // 0x1023 PushI
	var_901_int = 16; // 0x1024 PushI
	rand(var_899_float, var_900_int, var_901_int); // 0x1025 Func
	var_902_int = 10; // 0x1027 PushI
	SetTimer(var_902_int, var_899_float); // 0x1028 Func
	return 2; // 0x102a Return
}


func_5159(var_358_bool)
{
	var_360_int = 0; var_361_string = ""; // 0x1428 PushV
	var_361_string = "oob2Ospina1"; // 0x1429 MovS
	func_4650(var_360_int, var_361_string); // 0x142a NEW_2
	var_362_int = 0; // 0x142c PushI
	var_363_bool = var_360_int == var_362_int; // 0x142d Eq
	if(var_363_bool == 0) goto Label_5169; // 0x142e JumpB
	var_358_bool = 1; // 0x142f MovB
	return 0; // 0x1430 Return
	
Label_5169:
	var_358_bool = 0; // 0x1431 MovB
	return 0; // 0x1432 Return
}


func_4650(var_327_int, var_328_string)
{
	var_329_int = 0; var_330_int = 0; // 0x122a PushV
	GetVariable(var_328_string, var_330_int); // 0x122b Func
	var_327_int = var_330_int; // 0x122d Mov
	return 2; // 0x122e Return
}


func_4139()
{
	var_897_int = 10; // 0x102b PushI
	KillTimer(var_897_int); // 0x102c Func
	return 0; // 0x102e Return
}


func_4655(var_62_object, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); // 0x122f PushV
	GetMainOutdoorScene(var_66_object); // 0x1230 Func
	var_68_string = ".bin"; // 0x1232 PushS
	var_69_int = var_63_string + var_68_string; // 0x1233 Add
	AddBlankActor(var_67_object, var_66_object, var_63_string, var_69_int); // 0x1234 Func
	var_62_object = var_67_object; // 0x1236 Mov
	return 4; // 0x1237 Return
}


func_5171(var_367_bool)
{
	var_369_int = 0; var_370_string = ""; // 0x1434 PushV
	var_370_string = "oob2Ospina2"; // 0x1435 MovS
	func_4650(var_369_int, var_370_string); // 0x1436 NEW_2
	var_371_int = 0; // 0x1438 PushI
	var_372_bool = var_369_int == var_371_int; // 0x1439 Eq
	if(var_372_bool == 0) goto Label_5181; // 0x143a JumpB
	var_367_bool = 1; // 0x143b MovB
	return 0; // 0x143c Return
	
Label_5181:
	var_367_bool = 0; // 0x143d MovB
	return 0; // 0x143e Return
}


func_2104(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0; // 0x838 PushV
	var_0_object = var_68_object; // 0x839 TMov
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0; // 0x83a PushV
	var_79_object = var_68_object; // 0x83b Mov
	var_80_float = 70.0; // 0x83c MovF
	func_4358(var_79_object, var_80_float); // 0x83d NEW_2
	var_124_bool = var_78_bool == 0; // 0x83f Not
	if(var_124_bool == 0) goto Label_2115; // 0x840 JumpB
	var_67_int = -2; // 0x841 MovI
	return 8; // 0x842 Return
	
Label_2115:
	CreateDialog(var_74_object); // 0x843 Func
	var_125_int = 0; // 0x845 PushV
	func_4768(var_125_int); // 0x846 NEW_2
	SetNPCName(var_125_int); // 0x848 ObjFunc
	var_126_int = 0; // 0x84a PushV
	func_4766(var_126_int); // 0x84b NEW_2
	SetNPCDescription(var_126_int); // 0x84d ObjFunc
	var_127_string = ""; // 0x84f PushV
	func_4770(var_127_string); // 0x850 NEW_2
	SetPhoto(var_127_string); // 0x852 ObjFunc
	var_128_string = ""; // 0x854 PushV
	func_4772(var_128_string); // 0x855 NEW_2
	SetPhoto2(var_128_string); // 0x857 ObjFunc
	var_129_int = 0; // 0x859 PushV
	func_5350(var_129_int); // 0x85a NEW_2
	SetPlayerName(var_129_int); // 0x85c ObjFunc
	var_76_int = -1; // 0x85e MovI
	IsOverrideActive(var_75_bool); // 0x85f Func
	var_137_bool = var_75_bool; // 0x861 Push
	if(var_137_bool == 0) goto Label_2149; // 0x862 JumpB
	var_67_int = -2; // 0x863 MovI
	return 8; // 0x864 Return
	
Label_2149:
	DoDialog(var_74_object); // 0x865 Func
	var_138_bool = 0; var_139_object = Obj(); // 0x867 PushV
	var_140_object = Obj(); // 0x868 PushV
	func_4634(var_140_object); // 0x869 NEW_2
	var_139_object = var_140_object; // 0x86a Mov
	func_4443(var_138_bool, var_139_object); // 0x86c NEW_2
	var_233_object = Obj(); var_234_object = Obj(); // 0x86e PushV
	var_233_object = var_68_object; // 0x86f Mov
	var_234_object = var_74_object; // 0x870 Mov
	TaskCall(9); // 0x871 TaskCall
	func_2185(var_235_object, var_236_object, var_237_string, var_238_bool, var_233_object, var_234_object); // 0x872 NEW_2
	TaskReturn(); // 0x873 TaskReturn
	IsDialogEnd(var_77_bool); // 0x875 ObjFunc
	
Label_2167:
	var_282_bool = var_77_bool == 0; // 0x877 Not
	if(var_282_bool == 0) goto Label_2174; // 0x878 JumpB
	sync(); // 0x879 Func
	IsDialogEnd(var_77_bool); // 0x87b ObjFunc
	goto Label_2167; // 0x87d Jump
	
Label_2174:
	var_283_object = Obj(); // 0x87e PushV
	var_283_object = var_68_object; // 0x87f Mov
	func_4426(); // 0x880 NEW_2
	StopDialog(var_74_object); // 0x882 Func
	GetReturnValue(var_76_int); // 0x884 ObjFunc
	var_67_int = var_76_int; // 0x886 Mov
	return 8; // 0x887 Return
}


func_4666(var_98_int, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x123a PushV
	CreateIntVector(var_101_object); // 0x123b Func
	add(var_98_int); // 0x123d ObjFunc
	add(var_99_int); // 0x123f ObjFunc
	var_102_int = 3; // 0x1241 PushI
	SendWorldWndMessage(var_102_int, var_101_object); // 0x1242 Func
	return 2; // 0x1244 Return
}


func_5183(var_376_bool)
{
	var_378_int = 0; var_379_string = ""; // 0x1440 PushV
	var_379_string = "oob2Ospina3"; // 0x1441 MovS
	func_4650(var_378_int, var_379_string); // 0x1442 NEW_2
	var_380_int = 0; // 0x1444 PushI
	var_381_bool = var_378_int == var_380_int; // 0x1445 Eq
	if(var_381_bool == 0) goto Label_5193; // 0x1446 JumpB
	var_376_bool = 1; // 0x1447 MovB
	return 0; // 0x1448 Return
	
Label_5193:
	var_376_bool = 0; // 0x1449 MovB
	return 0; // 0x144a Return
}


func_4933()
{
	var_54_string = "b8q01"; // 0x1346 PushS
	var_55_int = 6; // 0x1347 PushI
	SetVariable(var_54_string, var_55_int); // 0x1348 Func
	func_5246(); // 0x134b NEW_2
	return 0; // 0x134d Return
}


func_4678(var_88_object, var_89_int)
{
	var_90_int = 0; var_91_int = 0; var_92_bool = 0; var_93_int = 0; var_94_int = 0; var_95_bool = 0; // 0x1246 PushV
	GetItemID(var_93_int); // 0x1247 ObjFunc
	var_96_string = "Category"; // 0x1249 PushS
	GetInvItemProperty(var_94_int, var_93_int, var_96_string); // 0x124a Func
	AddItem(var_95_bool, var_88_object, var_94_int, var_89_int); // 0x124c ObjFunc
	var_97_bool = var_95_bool == 0; // 0x124e Not
	if(var_97_bool == 0) goto Label_4691; // 0x124f JumpB
	DropItems(var_88_object, var_89_int); // 0x1250 ObjFunc
	goto Label_4696; // 0x1252 Jump
	
Label_4696:
	return 6; // 0x1258 Return
	
Label_4691:
	var_98_int = 0; var_99_int = 0; // 0x1253 PushV
	var_98_int = var_93_int; // 0x1254 Mov
	var_99_int = var_89_int; // 0x1255 Mov
	func_4666(var_98_int, var_99_int); // 0x1256 NEW_2
}


func_3144(var_2_object, var_649_string)
{
	var_650_bool = 0; // 0xc49 PushV
	func_4774(var_650_bool); // 0xc4a NEW_2
	var_651_bool = var_650_bool == 0; // 0xc4c Not
	if(var_651_bool == 0) goto Label_3151; // 0xc4d JumpB
	return 0; // 0xc4e Return
	
Label_3151:
	var_652_bool = var_649_string == var_2_object; // 0xc4f Eq
	if(var_652_bool == 0) goto Label_3154; // 0xc50 JumpB
	return 0; // 0xc51 Return
	
Label_3154:
	var_653_string = ""; var_654_bool = 0; // 0xc52 PushV
	var_653_string = var_649_string; // 0xc53 Mov
	var_655_string = ""; // 0xc54 PushS
	var_656_bool = var_649_string == var_655_string; // 0xc55 Eq
	if(var_656_bool == 0) goto Label_3161; // 0xc56 JumpB
	var_654_bool = 0; // 0xc57 MovB
	goto Label_3162; // 0xc58 Jump
	
Label_3162:
	func_4597(var_653_string, var_654_bool); // 0xc5a NEW_2
	var_2_object = var_649_string; // 0xc5c TMov
	return 0; // 0xc5d Return
	
Label_3161:
	var_654_bool = 1; // 0xc59 MovB
}


func_4426()
{
	var_284_bool = 0; var_285_bool = 0; // 0x114a PushV
	CameraSwitchToNormal(); // 0x114b Func
	var_286_bool = 0; // 0x114d PushV
	func_4774(var_286_bool); // 0x114e NEW_2
	if(var_286_bool == 0) goto Label_4434; // 0x1150 JumpB
	goto Label_4442; // 0x1151 Jump
	
Label_4442:
	return 2; // 0x115a Return
	
Label_4434:
	var_287_string = "head"; // 0x1152 PushS
	HasAnimationTrack(var_285_bool, var_287_string); // 0x1153 Func
	var_288_bool = var_285_bool; // 0x1155 Push
	if(var_288_bool == 0) goto Label_4442; // 0x1156 JumpB
	var_289_string = "head"; // 0x1157 PushS
	UnlookAsync(var_289_string); // 0x1158 Func
}


func_5195(var_385_bool)
{
	var_387_int = 0; var_388_string = ""; // 0x144c PushV
	var_388_string = "oob2Ospina4"; // 0x144d MovS
	func_4650(var_387_int, var_388_string); // 0x144e NEW_2
	var_389_int = 0; // 0x1450 PushI
	var_390_bool = var_387_int == var_389_int; // 0x1451 Eq
	if(var_390_bool == 0) goto Label_5205; // 0x1452 JumpB
	var_385_bool = 1; // 0x1453 MovB
	return 0; // 0x1454 Return
	
Label_5205:
	var_385_bool = 0; // 0x1455 MovB
	return 0; // 0x1456 Return
}


func_4942()
{
	var_54_string = "oob10Ospina1"; // 0x134f PushS
	var_55_int = 1; // 0x1350 PushI
	SetVariable(var_54_string, var_55_int); // 0x1351 Func
	return 0; // 0x1353 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_804_object, var_805_object)
{
	var_0_object = var_805_object; // 0x52 TMov
	var_1_object = var_804_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_810_int = 1; // 0x55 PushI
	if(var_810_int == 0) goto Label_114; // 0x56 JumpB
	var_811_string = ""; // 0x57 PushV
	var_811_string = "Neutral"; // 0x58 MovS
	func_144(var_805_object, var_811_string); // 0x59 NEW_2
	var_819_int = 535294; // 0x5b PushI
	SetMessage(var_819_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_820_int = 535295; // 0x60 PushI
	var_821_int = 36973; // 0x61 PushI
	var_822_int = 36972; // 0x62 PushI
	AddReply(var_820_int, var_821_int, var_822_int); // 0x63 TObjFunc
	var_823_int = 535302; // 0x65 PushI
	var_824_int = -1; // 0x66 PushI
	var_825_int = 36980; // 0x67 PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x68 TObjFunc
	var_826_int = 535303; // 0x6a PushI
	var_827_int = -1; // 0x6b PushI
	var_828_int = 36981; // 0x6c PushI
	AddReply(var_826_int, var_827_int, var_828_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_829_bool = 0; // 0x72 PushV
	func_4774(var_829_bool); // 0x73 NEW_2
	if(var_829_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_830_string = var_3_string; // 0x78 PushT
	if(var_830_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_831_string = ""; // 0x7b PushV
	var_831_string = var_2_object; // 0x7c MovT
	func_4581(var_831_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_832_string = "all"; // 0x81 PushS
	var_833_string = "idle"; // 0x82 PushS
	PlayAnimation(var_832_string, var_833_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_834_string = var_3_string; // 0x87 PushT
	if(var_834_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_835_string = "all"; // 0x8a PushS
	var_836_string = "idle"; // 0x8b PushS
	PlayAnimation(var_835_string, var_836_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_498_object, var_499_object)
{
	var_0_object = var_499_object; // 0x155 TMov
	var_1_object = var_498_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_504_int = 1; // 0x158 PushI
	if(var_504_int == 0) goto Label_382; // 0x159 JumpB
	var_505_string = ""; // 0x15a PushV
	var_505_string = "Strange"; // 0x15b MovS
	func_412(var_499_object, var_505_string); // 0x15c NEW_2
	var_513_int = 518620; // 0x15e PushI
	SetMessage(var_513_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_514_bool = 0; // 0x163 PushV
	var_514_bool = 0; // 0x164 MovB
	var_515_bool = 0; var_516_object = Obj(); // 0x165 PushV
	var_516_object = var_1_object; // 0x166 MovT
	func_5099(var_516_object); // 0x167 NEW_2
	if(var_515_bool == 0) goto Label_368; // 0x169 JumpB
	var_521_bool = 0; var_522_object = Obj(); // 0x16a PushV
	var_522_object = var_1_object; // 0x16b MovT
	func_5111(var_522_object); // 0x16c NEW_2
	if(var_521_bool == 0) goto Label_368; // 0x16e JumpB
	var_514_bool = 1; // 0x16f MovB
	
Label_368:
	if(var_514_bool == 0) goto Label_374; // 0x170 JumpB
	var_527_int = 518621; // 0x171 PushI
	var_528_int = 19933; // 0x172 PushI
	var_529_int = 19713; // 0x173 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x174 TObjFunc
	
Label_374:
	var_530_int = 518624; // 0x176 PushI
	var_531_int = -1; // 0x177 PushI
	var_532_int = 19716; // 0x178 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x179 TObjFunc
	goto Label_382; // 0x17b Jump
	
Label_382:
	var_533_bool = 0; // 0x17e PushV
	func_4774(var_533_bool); // 0x17f NEW_2
	if(var_533_bool == 0) goto Label_397; // 0x181 JumpB
	
Label_386:
	lshWaitForAnimEnd(); // 0x182 Func
	var_534_string = var_3_string; // 0x184 PushT
	if(var_534_string == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_396:
	goto Label_411; // 0x18c Jump
	
Label_411:
	return 0; // 0x19b Return
	
Label_391:
	var_535_string = ""; // 0x187 PushV
	var_535_string = var_2_object; // 0x188 MovT
	func_4581(var_535_string); // 0x189 NEW_2
	goto Label_386; // 0x18b Jump
	
Label_397:
	var_536_string = "all"; // 0x18d PushS
	var_537_string = "idle"; // 0x18e PushS
	PlayAnimation(var_536_string, var_537_string); // 0x18f Func
	
Label_401:
	WaitForAnimEnd(); // 0x191 Func
	var_538_string = var_3_string; // 0x193 PushT
	if(var_538_string == 0) goto Label_406; // 0x194 JumpB
	goto Label_411; // 0x195 Jump
	
Label_406:
	var_539_string = "all"; // 0x196 PushS
	var_540_string = "idle"; // 0x197 PushS
	PlayAnimation(var_539_string, var_540_string); // 0x198 Func
	goto Label_401; // 0x19a Jump
}


func_4948()
{
	var_54_string = "b11q01KnowWhoKilled"; // 0x1355 PushS
	var_55_int = 1; // 0x1356 PushI
	SetVariable(var_54_string, var_55_int); // 0x1357 Func
	func_5207(); // 0x135a NEW_2
	return 0; // 0x135c Return
}


func_5207()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x1457 PushV
	var_58_int = 315; // 0x1458 PushI
	var_59_int = 1; // 0x1459 PushI
	var_60_int = 522057; // 0x145a PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x145b Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x145d PushV
	var_62_object = var_57_object; // 0x145e Mov
	var_63_int = 313; // 0x145f MovI
	func_5272(var_61_bool, var_62_object, var_63_int); // 0x1460 NEW_2
	return 2; // 0x1462 Return
}


func_4088(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xff8 PushV
	var_74_string = "player"; // 0xff9 PushS
	FindActor(var_73_object, var_74_string); // 0xffa Func
	var_75_bool = var_73_object == 0; // 0xffc Not
	if(var_75_bool == 0) goto Label_4096; // 0xffd JumpB
	var_71_bool = 0; // 0xffe MovB
	return 2; // 0xfff Return
	
Label_4096:
	var_76_bool = 0; var_77_object = Obj(); // 0x1000 PushV
	var_77_object = var_73_object; // 0x1001 Mov
	func_4344(var_77_object); // 0x1002 NEW_2
	var_71_bool = var_76_bool; // 0x1003 Mov
	return 2; // 0x1005 Return
}


func_4697(var_82_object, var_83_string, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x1259 PushV
	CreateInvItem(var_86_object); // 0x125a Func
	SetItemName(var_83_string); // 0x125c ObjFunc
	var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x125e PushV
	var_87_object = var_82_object; // 0x125f Mov
	var_88_object = var_86_object; // 0x1260 Mov
	var_89_int = var_84_int; // 0x1261 Mov
	func_4678(var_88_object, var_89_int); // 0x1262 NEW_2
	return 2; // 0x1264 Return
}


func_857(var_0_object, var_1_object, var_2_object, var_3_string, var_425_object, var_426_object)
{
	var_0_object = var_426_object; // 0x35a TMov
	var_1_object = var_425_object; // 0x35b TMov
	var_3_string = 0; // 0x35c TMovB
	var_431_int = 1; // 0x35d PushI
	if(var_431_int == 0) goto Label_900; // 0x35e JumpB
	var_432_string = ""; // 0x35f PushV
	var_432_string = "Neutral"; // 0x360 MovS
	func_930(var_426_object, var_432_string); // 0x361 NEW_2
	var_440_int = 519273; // 0x363 PushI
	SetMessage(var_440_int); // 0x364 TObjFunc
	ClearReplies(); // 0x366 TObjFunc
	var_441_bool = 0; var_442_object = Obj(); // 0x368 PushV
	var_442_object = var_1_object; // 0x369 MovT
	func_5135(var_442_object); // 0x36a NEW_2
	if(var_441_bool == 0) goto Label_882; // 0x36c JumpB
	var_447_int = 519274; // 0x36d PushI
	var_448_int = 20428; // 0x36e PushI
	var_449_int = 20426; // 0x36f PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x370 TObjFunc
	
Label_882:
	var_450_bool = 0; var_451_object = Obj(); // 0x372 PushV
	var_451_object = var_1_object; // 0x373 MovT
	func_5123(var_451_object); // 0x374 NEW_2
	if(var_450_bool == 0) goto Label_892; // 0x376 JumpB
	var_456_int = 519289; // 0x377 PushI
	var_457_int = 20444; // 0x378 PushI
	var_458_int = 20443; // 0x379 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x37a TObjFunc
	
Label_892:
	var_459_int = 519275; // 0x37c PushI
	var_460_int = -1; // 0x37d PushI
	var_461_int = 20427; // 0x37e PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x37f TObjFunc
	goto Label_900; // 0x381 Jump
	
Label_900:
	var_462_bool = 0; // 0x384 PushV
	func_4774(var_462_bool); // 0x385 NEW_2
	if(var_462_bool == 0) goto Label_915; // 0x387 JumpB
	
Label_904:
	lshWaitForAnimEnd(); // 0x388 Func
	var_463_string = var_3_string; // 0x38a PushT
	if(var_463_string == 0) goto Label_909; // 0x38b JumpB
	goto Label_914; // 0x38c Jump
	
Label_914:
	goto Label_929; // 0x392 Jump
	
Label_929:
	return 0; // 0x3a1 Return
	
Label_909:
	var_464_string = ""; // 0x38d PushV
	var_464_string = var_2_object; // 0x38e MovT
	func_4581(var_464_string); // 0x38f NEW_2
	goto Label_904; // 0x391 Jump
	
Label_915:
	var_465_string = "all"; // 0x393 PushS
	var_466_string = "idle"; // 0x394 PushS
	PlayAnimation(var_465_string, var_466_string); // 0x395 Func
	
Label_919:
	WaitForAnimEnd(); // 0x397 Func
	var_467_string = var_3_string; // 0x399 PushT
	if(var_467_string == 0) goto Label_924; // 0x39a JumpB
	goto Label_929; // 0x39b Jump
	
Label_924:
	var_468_string = "all"; // 0x39c PushS
	var_469_string = "idle"; // 0x39d PushS
	PlayAnimation(var_468_string, var_469_string); // 0x39e Func
	goto Label_919; // 0x3a0 Jump
}


func_1370(var_2_object, var_333_string)
{
	var_334_bool = 0; // 0x55b PushV
	func_4774(var_334_bool); // 0x55c NEW_2
	var_335_bool = var_334_bool == 0; // 0x55e Not
	if(var_335_bool == 0) goto Label_1377; // 0x55f JumpB
	return 0; // 0x560 Return
	
Label_1377:
	var_336_bool = var_333_string == var_2_object; // 0x561 Eq
	if(var_336_bool == 0) goto Label_1380; // 0x562 JumpB
	return 0; // 0x563 Return
	
Label_1380:
	var_337_string = ""; var_338_bool = 0; // 0x564 PushV
	var_337_string = var_333_string; // 0x565 Mov
	var_339_string = ""; // 0x566 PushS
	var_340_bool = var_333_string == var_339_string; // 0x567 Eq
	if(var_340_bool == 0) goto Label_1387; // 0x568 JumpB
	var_338_bool = 0; // 0x569 MovB
	goto Label_1388; // 0x56a Jump
	
Label_1388:
	func_4597(var_337_string, var_338_bool); // 0x56c NEW_2
	var_2_object = var_333_string; // 0x56e TMov
	return 0; // 0x56f Return
	
Label_1387:
	var_338_bool = 1; // 0x56b MovB
}


func_4443(var_138_bool, var_139_object)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; // 0x115b PushV
	var_147_string = "voice_common"; // 0x115c PushS
	GetVariable(var_147_string, var_145_int); // 0x115d Func
	var_148_int = var_145_int; // 0x115f Push
	if(var_148_int == 0) goto Label_4481; // 0x1160 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x1161 PushV
	var_150_object = var_139_object; // 0x1162 Mov
	func_4501(var_150_object); // 0x1163 NEW_2
	var_179_bool = var_149_bool == 0; // 0x1165 Not
	if(var_179_bool == 0) goto Label_4463; // 0x1166 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x1167 PushV
	var_181_object = var_139_object; // 0x1168 Mov
	func_4538(var_181_object); // 0x1169 NEW_2
	var_215_bool = var_180_bool == 0; // 0x116b Not
	if(var_215_bool == 0) goto Label_4463; // 0x116c JumpB
	var_138_bool = 0; // 0x116d MovB
	return 4; // 0x116e Return
	
Label_4463:
	var_216_int = 2; // 0x116f PushI
	irand(var_146_int, var_216_int); // 0x1170 Func
	var_217_int = var_146_int; // 0x1172 Push
	if(var_217_int == 0) goto Label_4476; // 0x1173 JumpB
	var_218_string = "voice_common"; // 0x1174 PushS
	var_219_int = 1; // 0x1175 PushI
	var_220_int = var_145_int + var_219_int; // 0x1176 Add
	var_221_int = 3; // 0x1177 PushI
	var_222_int = var_220_int / var_221_int; // 0x1178 Mod
	SetVariable(var_218_string, var_222_int); // 0x1179 Func
	goto Label_4480; // 0x117b Jump
	
Label_4480:
	goto Label_4499; // 0x1180 Jump
	
Label_4499:
	var_138_bool = 1; // 0x1193 MovB
	return 4; // 0x1194 Return
	
Label_4476:
	var_223_string = "voice_common"; // 0x117c PushS
	var_224_int = 0; // 0x117d PushI
	SetVariable(var_223_string, var_224_int); // 0x117e Func
	
Label_4481:
	var_225_bool = 0; var_226_object = Obj(); // 0x1181 PushV
	var_226_object = var_139_object; // 0x1182 Mov
	func_4538(var_226_object); // 0x1183 NEW_2
	var_227_bool = var_225_bool == 0; // 0x1185 Not
	if(var_227_bool == 0) goto Label_4495; // 0x1186 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x1187 PushV
	var_229_object = var_139_object; // 0x1188 Mov
	func_4501(var_229_object); // 0x1189 NEW_2
	var_230_bool = var_228_bool == 0; // 0x118b Not
	if(var_230_bool == 0) goto Label_4495; // 0x118c JumpB
	var_138_bool = 0; // 0x118d MovB
	return 4; // 0x118e Return
	
Label_4495:
	var_231_string = "voice_common"; // 0x118f PushS
	var_232_int = 1; // 0x1190 PushI
	SetVariable(var_231_string, var_232_int); // 0x1191 Func
}


func_4957()
{
	var_734_string = "oob11Ospina1"; // 0x135e PushS
	var_735_int = 1; // 0x135f PushI
	SetVariable(var_734_string, var_735_int); // 0x1360 Func
	return 0; // 0x1362 Return
}


func_3424(var_0_object, var_1_object, var_2_object, var_3_string, var_719_object, var_720_object)
{
	var_0_object = var_720_object; // 0xd61 TMov
	var_1_object = var_719_object; // 0xd62 TMov
	var_3_string = 0; // 0xd63 TMovB
	var_725_int = 1; // 0xd64 PushI
	if(var_725_int == 0) goto Label_3487; // 0xd65 JumpB
	var_726_bool = 0; var_727_object = Obj(); // 0xd66 PushV
	var_727_object = var_1_object; // 0xd67 MovT
	func_5075(var_727_object); // 0xd68 NEW_2
	if(var_726_bool == 0) goto Label_3470; // 0xd6a JumpB
	var_732_object = Obj(); var_733_object = Obj(); // 0xd6b PushV
	var_732_object = var_1_object; // 0xd6c MovT
	var_733_object = var_0_object; // 0xd6d MovT
	func_4957(); // 0xd6e NEW_2
	var_736_string = ""; // 0xd70 PushV
	var_736_string = "Neutral"; // 0xd71 MovS
	func_3517(var_720_object, var_736_string); // 0xd72 NEW_2
	var_744_int = 522089; // 0xd74 PushI
	SetMessage(var_744_int); // 0xd75 TObjFunc
	ClearReplies(); // 0xd77 TObjFunc
	var_745_int = 523647; // 0xd79 PushI
	var_746_int = 24892; // 0xd7a PushI
	var_747_int = 24891; // 0xd7b PushI
	AddReply(var_745_int, var_746_int, var_747_int); // 0xd7c TObjFunc
	var_748_int = 523657; // 0xd7e PushI
	var_749_int = 24892; // 0xd7f PushI
	var_750_int = 24901; // 0xd80 PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0xd81 TObjFunc
	var_751_bool = 0; var_752_object = Obj(); // 0xd83 PushV
	var_752_object = var_1_object; // 0xd84 MovT
	func_5063(var_752_object); // 0xd85 NEW_2
	if(var_751_bool == 0) goto Label_3469; // 0xd87 JumpB
	var_757_int = 522091; // 0xd88 PushI
	var_758_int = 23261; // 0xd89 PushI
	var_759_int = 23260; // 0xd8a PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0xd8b TObjFunc
	
Label_3469:
	goto Label_3487; // 0xd8d Jump
	
Label_3487:
	var_760_bool = 0; // 0xd9f PushV
	func_4774(var_760_bool); // 0xda0 NEW_2
	if(var_760_bool == 0) goto Label_3502; // 0xda2 JumpB
	
Label_3491:
	lshWaitForAnimEnd(); // 0xda3 Func
	var_761_string = var_3_string; // 0xda5 PushT
	if(var_761_string == 0) goto Label_3496; // 0xda6 JumpB
	goto Label_3501; // 0xda7 Jump
	
Label_3501:
	goto Label_3516; // 0xdad Jump
	
Label_3516:
	return 0; // 0xdbc Return
	
Label_3496:
	var_762_string = ""; // 0xda8 PushV
	var_762_string = var_2_object; // 0xda9 MovT
	func_4581(var_762_string); // 0xdaa NEW_2
	goto Label_3491; // 0xdac Jump
	
Label_3502:
	var_763_string = "all"; // 0xdae PushS
	var_764_string = "idle"; // 0xdaf PushS
	PlayAnimation(var_763_string, var_764_string); // 0xdb0 Func
	
Label_3506:
	WaitForAnimEnd(); // 0xdb2 Func
	var_765_string = var_3_string; // 0xdb4 PushT
	if(var_765_string == 0) goto Label_3511; // 0xdb5 JumpB
	goto Label_3516; // 0xdb6 Jump
	
Label_3511:
	var_766_string = "all"; // 0xdb7 PushS
	var_767_string = "idle"; // 0xdb8 PushS
	PlayAnimation(var_766_string, var_767_string); // 0xdb9 Func
	goto Label_3506; // 0xdbb Jump
	
Label_3470:
	var_768_string = ""; // 0xd8e PushV
	var_768_string = "Neutral"; // 0xd8f MovS
	func_3517(var_720_object, var_768_string); // 0xd90 NEW_2
	var_769_int = 522094; // 0xd92 PushI
	SetMessage(var_769_int); // 0xd93 TObjFunc
	ClearReplies(); // 0xd95 TObjFunc
	var_770_int = 522095; // 0xd97 PushI
	var_771_int = -1; // 0xd98 PushI
	var_772_int = 23264; // 0xd99 PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0xd9a TObjFunc
	goto Label_3487; // 0xd9c Jump
}


func_4963()
{
	func_5233(); // 0x1365 NEW_2
	return 0; // 0x1367 Return
}


func_5220()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1464 PushV
	var_74_int = 223; // 0x1465 PushI
	var_75_int = 1; // 0x1466 PushI
	var_76_int = 519636; // 0x1467 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x1468 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x146a PushV
	var_78_object = var_73_object; // 0x146b Mov
	var_79_int = 221; // 0x146c MovI
	func_5272(var_77_bool, var_78_object, var_79_int); // 0x146d NEW_2
	return 2; // 0x146f Return
}


func_4710(var_56_bool, var_57_string, var_58_string)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x1266 PushV
	FindActor(var_60_object, var_57_string); // 0x1267 Func
	var_61_bool = var_60_object == 0; // 0x1269 NullEq
	if(var_61_bool == 0) goto Label_4717; // 0x126a JumpB
	var_56_bool = 0; // 0x126b MovB
	return 2; // 0x126c Return
	
Label_4717:
	Trigger(var_60_object, var_58_string); // 0x126d Func
	var_56_bool = 1; // 0x126f MovB
	return 2; // 0x1270 Return
}


func_4968()
{
	var_117_object = Obj(); var_118_string = ""; var_119_float = 0; // 0x1369 PushV
	var_120_object = Obj(); // 0x136a PushV
	func_5300(var_120_object); // 0x136b NEW_2
	var_117_object = var_120_object; // 0x136c Mov
	var_118_string = "pt_gatherer3"; // 0x136e MovS
	var_119_float = 2; // 0x136f MovI
	func_5317(var_117_object, var_118_string, var_119_float); // 0x1370 NEW_2
	var_140_object = Obj(); // 0x1372 PushV
	func_5300(var_140_object); // 0x1373 NEW_2
	ShowMap(var_140_object); // 0x1375 ObjFunc
	return 0; // 0x1377 Return
}


func_3945(var_0_object, var_1_object, var_2_object, var_3_string, var_864_object, var_865_object)
{
	var_0_object = var_865_object; // 0xf6a TMov
	var_1_object = var_864_object; // 0xf6b TMov
	var_3_string = 0; // 0xf6c TMovB
	var_870_int = 1; // 0xf6d PushI
	if(var_870_int == 0) goto Label_3973; // 0xf6e JumpB
	var_871_string = ""; // 0xf6f PushV
	var_871_string = "Neutral"; // 0xf70 MovS
	func_4003(var_865_object, var_871_string); // 0xf71 NEW_2
	var_879_int = 540551; // 0xf73 PushI
	SetMessage(var_879_int); // 0xf74 TObjFunc
	ClearReplies(); // 0xf76 TObjFunc
	var_880_int = 540552; // 0xf78 PushI
	var_881_int = -1; // 0xf79 PushI
	var_882_int = 42561; // 0xf7a PushI
	AddReply(var_880_int, var_881_int, var_882_int); // 0xf7b TObjFunc
	var_883_int = 540795; // 0xf7d PushI
	var_884_int = -1; // 0xf7e PushI
	var_885_int = 42844; // 0xf7f PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0xf80 TObjFunc
	goto Label_3973; // 0xf82 Jump
	
Label_3973:
	var_886_bool = 0; // 0xf85 PushV
	func_4774(var_886_bool); // 0xf86 NEW_2
	if(var_886_bool == 0) goto Label_3988; // 0xf88 JumpB
	
Label_3977:
	lshWaitForAnimEnd(); // 0xf89 Func
	var_887_string = var_3_string; // 0xf8b PushT
	if(var_887_string == 0) goto Label_3982; // 0xf8c JumpB
	goto Label_3987; // 0xf8d Jump
	
Label_3987:
	goto Label_4002; // 0xf93 Jump
	
Label_4002:
	return 0; // 0xfa2 Return
	
Label_3982:
	var_888_string = ""; // 0xf8e PushV
	var_888_string = var_2_object; // 0xf8f MovT
	func_4581(var_888_string); // 0xf90 NEW_2
	goto Label_3977; // 0xf92 Jump
	
Label_3988:
	var_889_string = "all"; // 0xf94 PushS
	var_890_string = "idle"; // 0xf95 PushS
	PlayAnimation(var_889_string, var_890_string); // 0xf96 Func
	
Label_3992:
	WaitForAnimEnd(); // 0xf98 Func
	var_891_string = var_3_string; // 0xf9a PushT
	if(var_891_string == 0) goto Label_3997; // 0xf9b JumpB
	goto Label_4002; // 0xf9c Jump
	
Label_3997:
	var_892_string = "all"; // 0xf9d PushS
	var_893_string = "idle"; // 0xf9e PushS
	PlayAnimation(var_892_string, var_893_string); // 0xf9f Func
	goto Label_3992; // 0xfa1 Jump
}


func_2411(var_0_object, var_1_object, var_2_object, var_3_string, var_569_object, var_570_object)
{
	var_0_object = var_570_object; // 0x96c TMov
	var_1_object = var_569_object; // 0x96d TMov
	var_3_string = 0; // 0x96e TMovB
	var_575_int = 1; // 0x96f PushI
	if(var_575_int == 0) goto Label_2454; // 0x970 JumpB
	var_576_string = ""; // 0x971 PushV
	var_576_string = "Neutral"; // 0x972 MovS
	func_2484(var_570_object, var_576_string); // 0x973 NEW_2
	var_584_int = 521431; // 0x975 PushI
	SetMessage(var_584_int); // 0x976 TObjFunc
	ClearReplies(); // 0x978 TObjFunc
	var_585_bool = 0; var_586_object = Obj(); // 0x97a PushV
	var_586_object = var_1_object; // 0x97b MovT
	func_5022(var_586_object); // 0x97c NEW_2
	if(var_585_bool == 0) goto Label_2436; // 0x97e JumpB
	var_591_int = 521432; // 0x97f PushI
	var_592_int = 22611; // 0x980 PushI
	var_593_int = 22610; // 0x981 PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x982 TObjFunc
	
Label_2436:
	var_594_bool = 0; var_595_object = Obj(); // 0x984 PushV
	var_595_object = var_1_object; // 0x985 MovT
	func_5087(var_595_object); // 0x986 NEW_2
	if(var_594_bool == 0) goto Label_2446; // 0x988 JumpB
	var_600_int = 523679; // 0x989 PushI
	var_601_int = 24958; // 0x98a PushI
	var_602_int = 24931; // 0x98b PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x98c TObjFunc
	
Label_2446:
	var_603_int = 521435; // 0x98e PushI
	var_604_int = -1; // 0x98f PushI
	var_605_int = 22613; // 0x990 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x991 TObjFunc
	goto Label_2454; // 0x993 Jump
	
Label_2454:
	var_606_bool = 0; // 0x996 PushV
	func_4774(var_606_bool); // 0x997 NEW_2
	if(var_606_bool == 0) goto Label_2469; // 0x999 JumpB
	
Label_2458:
	lshWaitForAnimEnd(); // 0x99a Func
	var_607_string = var_3_string; // 0x99c PushT
	if(var_607_string == 0) goto Label_2463; // 0x99d JumpB
	goto Label_2468; // 0x99e Jump
	
Label_2468:
	goto Label_2483; // 0x9a4 Jump
	
Label_2483:
	return 0; // 0x9b3 Return
	
Label_2463:
	var_608_string = ""; // 0x99f PushV
	var_608_string = var_2_object; // 0x9a0 MovT
	func_4581(var_608_string); // 0x9a1 NEW_2
	goto Label_2458; // 0x9a3 Jump
	
Label_2469:
	var_609_string = "all"; // 0x9a5 PushS
	var_610_string = "idle"; // 0x9a6 PushS
	PlayAnimation(var_609_string, var_610_string); // 0x9a7 Func
	
Label_2473:
	WaitForAnimEnd(); // 0x9a9 Func
	var_611_string = var_3_string; // 0x9ab PushT
	if(var_611_string == 0) goto Label_2478; // 0x9ac JumpB
	goto Label_2483; // 0x9ad Jump
	
Label_2478:
	var_612_string = "all"; // 0x9ae PushS
	var_613_string = "idle"; // 0x9af PushS
	PlayAnimation(var_612_string, var_613_string); // 0x9b0 Func
	goto Label_2473; // 0x9b2 Jump
}


func_5233()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x1471 PushV
	var_94_int = 240; // 0x1472 PushI
	var_95_int = 1; // 0x1473 PushI
	var_96_int = 519745; // 0x1474 PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0x1475 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0x1477 PushV
	var_98_object = var_93_object; // 0x1478 Mov
	var_99_int = 238; // 0x1479 MovI
	func_5272(var_97_bool, var_98_object, var_99_int); // 0x147a NEW_2
	return 2; // 0x147c Return
}


func_4722(var_115_float)
{
	var_116_float = 0; var_117_float = 0; // 0x1272 PushV
	GetGameTime(var_117_float); // 0x1273 Func
	var_115_float = var_117_float; // 0x1275 Mov
	return 2; // 0x1276 Return
}


func_5111(var_521_bool)
{
	var_523_int = 0; var_524_string = ""; // 0x13f8 PushV
	var_524_string = "oob5Ospina1"; // 0x13f9 MovS
	func_4650(var_523_int, var_524_string); // 0x13fa NEW_2
	var_525_int = 0; // 0x13fc PushI
	var_526_bool = var_523_int == var_525_int; // 0x13fd Eq
	if(var_526_bool == 0) goto Label_5121; // 0x13fe JumpB
	var_521_bool = 1; // 0x13ff MovB
	return 0; // 0x1400 Return
	
Label_5121:
	var_521_bool = 0; // 0x1401 MovB
	return 0; // 0x1402 Return
}


func_4727(var_193_int)
{
	var_194_float = 0; var_195_float = 0; // 0x1277 PushV
	GetGameTime(var_195_float); // 0x1278 Func
	var_196_int = 1; // 0x127a PushI
	var_197_int = 0; // 0x127b PushV
	var_198_int = 24; // 0x127c PushI
	var_197_int = var_195_float / var_195_float; // 0x127d Div2
	var_193_int = var_196_int + var_197_int; // 0x127e Add2
	return 2; // 0x127f Return
}


func_4984()
{
	var_105_string = "playsound"; // 0x1379 PushS
	var_106_string = "giveitem"; // 0x137a PushS
	TriggerWorld(var_105_string, var_106_string); // 0x137b Func
	return 0; // 0x137d Return
}


func_5246()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x147e PushV
	var_58_int = 290; // 0x147f PushI
	var_59_int = 1; // 0x1480 PushI
	var_60_int = 521461; // 0x1481 PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x1482 Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x1484 PushV
	var_62_object = var_57_object; // 0x1485 Mov
	var_63_int = 284; // 0x1486 MovI
	func_5272(var_61_bool, var_62_object, var_63_int); // 0x1487 NEW_2
	return 2; // 0x1489 Return
}


func_4990()
{
	var_54_string = "b2q01"; // 0x137f PushS
	var_55_int = 3; // 0x1380 PushI
	SetVariable(var_54_string, var_55_int); // 0x1381 Func
	var_56_bool = 0; var_57_string = ""; var_58_string = ""; // 0x1383 PushV
	var_57_string = "quest_b2_01"; // 0x1384 MovS
	var_58_string = "place_box"; // 0x1385 MovS
	func_4710(var_56_bool, var_57_string, var_58_string); // 0x1386 NEW_2
	var_62_object = Obj(); var_63_string = ""; // 0x1388 PushV
	var_63_string = "quest_b2_02"; // 0x1389 MovS
	func_4655(var_62_object, var_63_string); // 0x138a NEW_2
	return 0; // 0x138c Return
}


func_4736(var_291_bool, var_292_int)
{
	var_293_int = 0; // 0x1281 PushV
	func_4727(var_293_int); // 0x1282 NEW_2
	var_291_bool = var_293_int == var_292_int; // 0x1284 Eq2
	return 0; // 0x1285 Return
}


func_4742(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0x1286 PushV
	var_74_string = "idle"; // 0x1287 MovS
	var_75_int = var_72_int; // 0x1288 Push
	if(var_75_int == 0) goto Label_4747; // 0x1289 JumpB
	var_74_string = var_74_string + var_72_int; // 0x128a Add2
	
Label_4747:
	var_71_string = var_74_string; // 0x128b Mov
	return 2; // 0x128c Return
}


func_2185(var_0_object, var_1_object, var_2_object, var_3_string, var_233_object, var_234_object)
{
	var_0_object = var_234_object; // 0x88a TMov
	var_1_object = var_233_object; // 0x88b TMov
	var_3_string = 0; // 0x88c TMovB
	var_239_int = 1; // 0x88d PushI
	if(var_239_int == 0) goto Label_2213; // 0x88e JumpB
	var_240_string = ""; // 0x88f PushV
	var_240_string = "Neutral"; // 0x890 MovS
	func_2243(var_234_object, var_240_string); // 0x891 NEW_2
	var_257_int = 520800; // 0x893 PushI
	SetMessage(var_257_int); // 0x894 TObjFunc
	ClearReplies(); // 0x896 TObjFunc
	var_258_int = 520801; // 0x898 PushI
	var_259_int = 29131; // 0x899 PushI
	var_260_int = 22018; // 0x89a PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x89b TObjFunc
	var_261_int = 527799; // 0x89d PushI
	var_262_int = -1; // 0x89e PushI
	var_263_int = 29132; // 0x89f PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x8a0 TObjFunc
	goto Label_2213; // 0x8a2 Jump
	
Label_2213:
	var_264_bool = 0; // 0x8a5 PushV
	func_4774(var_264_bool); // 0x8a6 NEW_2
	if(var_264_bool == 0) goto Label_2228; // 0x8a8 JumpB
	
Label_2217:
	lshWaitForAnimEnd(); // 0x8a9 Func
	var_265_string = var_3_string; // 0x8ab PushT
	if(var_265_string == 0) goto Label_2222; // 0x8ac JumpB
	goto Label_2227; // 0x8ad Jump
	
Label_2227:
	goto Label_2242; // 0x8b3 Jump
	
Label_2242:
	return 0; // 0x8c2 Return
	
Label_2222:
	var_266_string = ""; // 0x8ae PushV
	var_266_string = var_2_object; // 0x8af MovT
	func_4581(var_266_string); // 0x8b0 NEW_2
	goto Label_2217; // 0x8b2 Jump
	
Label_2228:
	var_277_string = "all"; // 0x8b4 PushS
	var_278_string = "idle"; // 0x8b5 PushS
	PlayAnimation(var_277_string, var_278_string); // 0x8b6 Func
	
Label_2232:
	WaitForAnimEnd(); // 0x8b8 Func
	var_279_string = var_3_string; // 0x8ba PushT
	if(var_279_string == 0) goto Label_2237; // 0x8bb JumpB
	goto Label_2242; // 0x8bc Jump
	
Label_2237:
	var_280_string = "all"; // 0x8bd PushS
	var_281_string = "idle"; // 0x8be PushS
	PlayAnimation(var_280_string, var_281_string); // 0x8bf Func
	goto Label_2232; // 0x8c1 Jump
}


func_5259(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x148b PushV
	GetDiaryRoot(var_72_object); // 0x148c Func
	var_73_bool = var_72_object == 0; // 0x148e Not
	if(var_73_bool == 0) goto Label_5269; // 0x148f JumpB
	var_74_string = "Can't retrieve diary root"; // 0x1490 PushS
	Trace(var_74_string); // 0x1491 Func
	var_70_object = 0; // 0x1493 MovB
	return 2; // 0x1494 Return
	
Label_5269:
	var_70_object = var_72_object; // 0x1495 Mov
	return 2; // 0x1496 Return
}


func_4749(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x128d PushV
	var_68_int = 0; // 0x128e MovI
	
Label_4751:
	var_70_string = "all"; // 0x128f PushS
	var_71_string = ""; var_72_int = 0; // 0x1290 PushV
	var_72_int = var_68_int; // 0x1291 Mov
	func_4742(var_71_string, var_72_int); // 0x1292 NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0x1294 Func
	var_76_bool = var_69_bool == 0; // 0x1296 Not
	if(var_76_bool == 0) goto Label_4761; // 0x1297 JumpB
	goto Label_4764; // 0x1298 Jump
	
Label_4764:
	var_65_int = var_68_int; // 0x129c Mov
	return 4; // 0x129d Return
	
Label_4761:
	var_77_int = 1; // 0x1299 PushI
	var_68_int = var_68_int + var_77_int; // 0x129a Add2
	goto Label_4751; // 0x129b Jump
}


func_5005()
{
	var_119_string = "oob8Ospina1"; // 0x138e PushS
	var_120_int = 1; // 0x138f PushI
	SetVariable(var_119_string, var_120_int); // 0x1390 Func
	return 0; // 0x1392 Return
}


func_144(var_2_object, var_811_string)
{
	var_812_bool = 0; // 0x91 PushV
	func_4774(var_812_bool); // 0x92 NEW_2
	var_813_bool = var_812_bool == 0; // 0x94 Not
	if(var_813_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_814_bool = var_811_string == var_2_object; // 0x97 Eq
	if(var_814_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_815_string = ""; var_816_bool = 0; // 0x9a PushV
	var_815_string = var_811_string; // 0x9b Mov
	var_817_string = ""; // 0x9c PushS
	var_818_bool = var_811_string == var_817_string; // 0x9d Eq
	if(var_818_bool == 0) goto Label_161; // 0x9e JumpB
	var_816_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_4597(var_815_string, var_816_bool); // 0xa2 NEW_2
	var_2_object = var_811_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_816_bool = 1; // 0xa1 MovB
}


func_1171(var_0_object, var_294_int, var_295_object)
{
	var_297_object = Obj(); var_298_bool = 0; var_299_int = 0; var_300_bool = 0; var_301_object = Obj(); var_302_bool = 0; var_303_int = 0; var_304_bool = 0; // 0x493 PushV
	var_0_object = var_295_object; // 0x494 TMov
	var_305_bool = 0; var_306_object = Obj(); var_307_float = 0; // 0x495 PushV
	var_306_object = var_295_object; // 0x496 Mov
	var_307_float = 70.0; // 0x497 MovF
	func_4358(var_306_object, var_307_float); // 0x498 NEW_2
	var_308_bool = var_305_bool == 0; // 0x49a Not
	if(var_308_bool == 0) goto Label_1182; // 0x49b JumpB
	var_294_int = -2; // 0x49c MovI
	return 8; // 0x49d Return
	
Label_1182:
	CreateDialog(var_301_object); // 0x49e Func
	var_309_int = 0; // 0x4a0 PushV
	func_4768(var_309_int); // 0x4a1 NEW_2
	SetNPCName(var_309_int); // 0x4a3 ObjFunc
	var_310_int = 0; // 0x4a5 PushV
	func_4766(var_310_int); // 0x4a6 NEW_2
	SetNPCDescription(var_310_int); // 0x4a8 ObjFunc
	var_311_string = ""; // 0x4aa PushV
	func_4770(var_311_string); // 0x4ab NEW_2
	SetPhoto(var_311_string); // 0x4ad ObjFunc
	var_312_string = ""; // 0x4af PushV
	func_4772(var_312_string); // 0x4b0 NEW_2
	SetPhoto2(var_312_string); // 0x4b2 ObjFunc
	var_313_int = 0; // 0x4b4 PushV
	func_5350(var_313_int); // 0x4b5 NEW_2
	SetPlayerName(var_313_int); // 0x4b7 ObjFunc
	var_303_int = -1; // 0x4b9 MovI
	IsOverrideActive(var_302_bool); // 0x4ba Func
	var_314_bool = var_302_bool; // 0x4bc Push
	if(var_314_bool == 0) goto Label_1216; // 0x4bd JumpB
	var_294_int = -2; // 0x4be MovI
	return 8; // 0x4bf Return
	
Label_1216:
	DoDialog(var_301_object); // 0x4c0 Func
	var_315_bool = 0; var_316_object = Obj(); // 0x4c2 PushV
	var_317_object = Obj(); // 0x4c3 PushV
	func_4634(var_317_object); // 0x4c4 NEW_2
	var_316_object = var_317_object; // 0x4c5 Mov
	func_4443(var_315_bool, var_316_object); // 0x4c7 NEW_2
	var_318_object = Obj(); var_319_object = Obj(); // 0x4c9 PushV
	var_318_object = var_295_object; // 0x4ca Mov
	var_319_object = var_301_object; // 0x4cb Mov
	TaskCall(7); // 0x4cc TaskCall
	func_1252(var_320_object, var_321_object, var_322_string, var_323_bool, var_318_object, var_319_object); // 0x4cd NEW_2
	TaskReturn(); // 0x4ce TaskReturn
	IsDialogEnd(var_304_bool); // 0x4d0 ObjFunc
	
Label_1234:
	var_397_bool = var_304_bool == 0; // 0x4d2 Not
	if(var_397_bool == 0) goto Label_1241; // 0x4d3 JumpB
	sync(); // 0x4d4 Func
	IsDialogEnd(var_304_bool); // 0x4d6 ObjFunc
	goto Label_1234; // 0x4d8 Jump
	
Label_1241:
	var_398_object = Obj(); // 0x4d9 PushV
	var_398_object = var_295_object; // 0x4da Mov
	func_4426(); // 0x4db NEW_2
	StopDialog(var_301_object); // 0x4dd Func
	GetReturnValue(var_303_int); // 0x4df ObjFunc
	var_294_int = var_303_int; // 0x4e1 Mov
	return 8; // 0x4e2 Return
}


func_5011(var_79_object)
{
	var_81_string = "b8q01_bone is given"; // 0x1394 PushS
	Trace(var_81_string); // 0x1395 Func
	var_82_object = Obj(); var_83_string = ""; var_84_int = 0; // 0x1397 PushV
	var_82_object = var_79_object; // 0x1398 Mov
	var_83_string = "b8q01_bone"; // 0x1399 MovS
	var_84_int = 1; // 0x139a MovI
	func_4697(var_82_object, var_83_string, var_84_int); // 0x139b NEW_2
	return 0; // 0x139d Return
}


func_4501(var_149_bool)
{
	var_151_string = ""; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_string = ""; var_156_string = ""; var_157_int = 0; var_158_bool = 0; var_159_int = 0; var_160_string = ""; // 0x1195 PushV
	var_156_string = "c"; // 0x1196 MovS
	var_157_int = 0; // 0x1197 MovI
	
Label_4504:
	var_161_int = 1; // 0x1198 PushI
	if(var_161_int == 0) goto Label_4517; // 0x1199 JumpB
	var_162_int = 1; // 0x119a PushI
	var_163_int = var_157_int + var_162_int; // 0x119b Add
	var_164_int = var_156_string + var_163_int; // 0x119c Add
	HasProperty(var_164_int, var_158_bool); // 0x119d ObjFunc
	var_165_bool = var_158_bool == 0; // 0x119f Not
	if(var_165_bool == 0) goto Label_4514; // 0x11a0 JumpB
	goto Label_4517; // 0x11a1 Jump
	
Label_4517:
	var_166_bool = var_157_int == 0; // 0x11a5 Not
	if(var_166_bool == 0) goto Label_4521; // 0x11a6 JumpB
	var_149_bool = 0; // 0x11a7 MovB
	return 10; // 0x11a8 Return
	
Label_4521:
	var_159_int = 0; // 0x11a9 MovI
	var_167_int = 1; // 0x11aa PushI
	var_168_bool = var_157_int > var_167_int; // 0x11ab GT
	if(var_168_bool == 0) goto Label_4527; // 0x11ac JumpB
	irand(var_159_int, var_157_int); // 0x11ad Func
	
Label_4527:
	var_169_int = 1; // 0x11af PushI
	var_170_int = var_159_int + var_169_int; // 0x11b0 Add
	var_171_int = var_156_string + var_170_int; // 0x11b1 Add
	GetProperty(var_171_int, var_160_string); // 0x11b2 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x11b4 PushV
	var_173_string = var_160_string; // 0x11b5 Mov
	func_4612(var_172_bool, var_173_string); // 0x11b6 NEW_2
	var_149_bool = var_172_bool; // 0x11b7 Mov
	return 10; // 0x11b9 Return
	
Label_4514:
	var_178_int = 1; // 0x11a2 PushI
	var_157_int = var_157_int + var_178_int; // 0x11a3 Add2
	goto Label_4504; // 0x11a4 Jump
}


func_5272(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; // 0x1498 PushV
	var_70_object = Obj(); // 0x1499 PushV
	func_5259(var_70_object); // 0x149a NEW_2
	var_67_object = var_70_object; // 0x149b Mov
	Find(var_63_int, var_68_object); // 0x149d ObjFunc
	var_75_bool = var_68_object == 0; // 0x149f Not
	if(var_75_bool == 0) goto Label_5287; // 0x14a0 JumpB
	var_76_string = "Can't find diary parent with id: "; // 0x14a1 PushS
	var_77_int = var_76_string + var_63_int; // 0x14a2 Add
	Trace(var_77_int); // 0x14a3 Func
	var_61_bool = 0; // 0x14a5 MovB
	return 6; // 0x14a6 Return
	
Label_5287:
	AddChild(var_62_object); // 0x14a7 ObjFunc
	var_78_int = 7; // 0x14a9 PushI
	SendWorldWndMessage(var_78_int); // 0x14aa Func
	GetCategory(var_69_int); // 0x14ac ObjFunc
	SetDiarySection(var_69_int); // 0x14ae Func
	var_61_bool = 0; // 0x14b0 MovB
	return 6; // 0x14b1 Return
}


func_4250()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x109a PushV
	WaitForAnimEnd(); // 0x109b Func
	var_63_bool = 0; // 0x109d PushV
	func_4353(var_63_bool); // 0x109e NEW_2
	var_64_bool = var_63_bool == 0; // 0x10a0 Not
	if(var_64_bool == 0) goto Label_4259; // 0x10a1 JumpB
	return 12; // 0x10a2 Return
	
Label_4259:
	var_65_int = 0; // 0x10a3 PushV
	func_4749(var_65_int); // 0x10a4 NEW_2
	var_57_int = var_65_int; // 0x10a5 Mov
	var_58_int = 0; // 0x10a7 MovI
	
Label_4264:
	var_78_bool = 0; // 0x10a8 PushV
	var_78_bool = 0; // 0x10a9 MovB
	var_79_int = 5; // 0x10aa PushI
	var_80_bool = var_58_int < var_79_int; // 0x10ab LT
	if(var_80_bool == 0) goto Label_4274; // 0x10ac JumpB
	var_81_bool = 0; // 0x10ad PushV
	func_4353(var_81_bool); // 0x10ae NEW_2
	if(var_81_bool == 0) goto Label_4274; // 0x10b0 JumpB
	var_78_bool = 1; // 0x10b1 MovB
	
Label_4274:
	if(var_78_bool == 0) goto Label_4316; // 0x10b2 JumpB
	var_82_bool = var_57_int == 0; // 0x10b3 Not
	if(var_82_bool == 0) goto Label_4284; // 0x10b4 JumpB
	var_83_int = 3; // 0x10b5 PushI
	Sleep(var_83_int, var_59_bool); // 0x10b6 Func
	var_84_bool = var_59_bool == 0; // 0x10b8 Not
	if(var_84_bool == 0) goto Label_4283; // 0x10b9 JumpB
	goto Label_4316; // 0x10ba Jump
	
Label_4316:
	ResetAAS(); // 0x10dc Func
	return 12; // 0x10de Return
	
Label_4283:
	goto Label_4305; // 0x10bb Jump
	
Label_4305:
	var_85_bool = 0; // 0x10d1 PushV
	func_4319(var_85_bool); // 0x10d2 NEW_2
	var_86_bool = var_85_bool == 0; // 0x10d4 Not
	if(var_86_bool == 0) goto Label_4311; // 0x10d5 JumpB
	goto Label_4316; // 0x10d6 Jump
	
Label_4311:
	ResetAAS(); // 0x10d7 Func
	var_87_int = 1; // 0x10d9 PushI
	var_58_int = var_58_int + var_87_int; // 0x10da Add2
	goto Label_4264; // 0x10db Jump
	
Label_4284:
	irand(var_60_int, var_57_int); // 0x10bc Func
	var_88_int = 5; // 0x10be PushI
	irand(var_61_int, var_88_int); // 0x10bf Func
	var_89_int = 0; // 0x10c1 PushI
	var_90_bool = var_61_int != var_89_int; // 0x10c2 Neq
	if(var_90_bool == 0) goto Label_4293; // 0x10c3 JumpB
	var_60_int = 0; // 0x10c4 MovI
	
Label_4293:
	var_91_string = "all"; // 0x10c5 PushS
	var_92_string = ""; var_93_int = 0; // 0x10c6 PushV
	var_93_int = var_60_int; // 0x10c7 Mov
	func_4742(var_92_string, var_93_int); // 0x10c8 NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x10ca Func
	WaitForAnimEnd(var_62_bool); // 0x10cc Func
	var_94_bool = var_62_bool == 0; // 0x10ce Not
	if(var_94_bool == 0) goto Label_4305; // 0x10cf JumpB
	goto Label_4316; // 0x10d0 Jump
}


func_412(var_2_object, var_505_string)
{
	var_506_bool = 0; // 0x19d PushV
	func_4774(var_506_bool); // 0x19e NEW_2
	var_507_bool = var_506_bool == 0; // 0x1a0 Not
	if(var_507_bool == 0) goto Label_419; // 0x1a1 JumpB
	return 0; // 0x1a2 Return
	
Label_419:
	var_508_bool = var_505_string == var_2_object; // 0x1a3 Eq
	if(var_508_bool == 0) goto Label_422; // 0x1a4 JumpB
	return 0; // 0x1a5 Return
	
Label_422:
	var_509_string = ""; var_510_bool = 0; // 0x1a6 PushV
	var_509_string = var_505_string; // 0x1a7 Mov
	var_511_string = ""; // 0x1a8 PushS
	var_512_bool = var_505_string == var_511_string; // 0x1a9 Eq
	if(var_512_bool == 0) goto Label_429; // 0x1aa JumpB
	var_510_bool = 0; // 0x1ab MovB
	goto Label_430; // 0x1ac Jump
	
Label_430:
	func_4597(var_509_string, var_510_bool); // 0x1ae NEW_2
	var_2_object = var_505_string; // 0x1b0 TMov
	return 0; // 0x1b1 Return
	
Label_429:
	var_510_bool = 1; // 0x1ad MovB
}


func_2973(var_0_object, var_618_int, var_619_object)
{
	var_621_object = Obj(); var_622_bool = 0; var_623_int = 0; var_624_bool = 0; var_625_object = Obj(); var_626_bool = 0; var_627_int = 0; var_628_bool = 0; // 0xb9d PushV
	var_0_object = var_619_object; // 0xb9e TMov
	var_629_bool = 0; var_630_object = Obj(); var_631_float = 0; // 0xb9f PushV
	var_630_object = var_619_object; // 0xba0 Mov
	var_631_float = 70.0; // 0xba1 MovF
	func_4358(var_630_object, var_631_float); // 0xba2 NEW_2
	var_632_bool = var_629_bool == 0; // 0xba4 Not
	if(var_632_bool == 0) goto Label_2984; // 0xba5 JumpB
	var_618_int = -2; // 0xba6 MovI
	return 8; // 0xba7 Return
	
Label_2984:
	CreateDialog(var_625_object); // 0xba8 Func
	var_633_int = 0; // 0xbaa PushV
	func_4768(var_633_int); // 0xbab NEW_2
	SetNPCName(var_633_int); // 0xbad ObjFunc
	var_634_int = 0; // 0xbaf PushV
	func_4766(var_634_int); // 0xbb0 NEW_2
	SetNPCDescription(var_634_int); // 0xbb2 ObjFunc
	var_635_string = ""; // 0xbb4 PushV
	func_4770(var_635_string); // 0xbb5 NEW_2
	SetPhoto(var_635_string); // 0xbb7 ObjFunc
	var_636_string = ""; // 0xbb9 PushV
	func_4772(var_636_string); // 0xbba NEW_2
	SetPhoto2(var_636_string); // 0xbbc ObjFunc
	var_637_int = 0; // 0xbbe PushV
	func_5350(var_637_int); // 0xbbf NEW_2
	SetPlayerName(var_637_int); // 0xbc1 ObjFunc
	var_627_int = -1; // 0xbc3 MovI
	IsOverrideActive(var_626_bool); // 0xbc4 Func
	var_638_bool = var_626_bool; // 0xbc6 Push
	if(var_638_bool == 0) goto Label_3018; // 0xbc7 JumpB
	var_618_int = -2; // 0xbc8 MovI
	return 8; // 0xbc9 Return
	
Label_3018:
	DoDialog(var_625_object); // 0xbca Func
	var_639_bool = 0; var_640_object = Obj(); // 0xbcc PushV
	var_641_object = Obj(); // 0xbcd PushV
	func_4634(var_641_object); // 0xbce NEW_2
	var_640_object = var_641_object; // 0xbcf Mov
	func_4443(var_639_bool, var_640_object); // 0xbd1 NEW_2
	var_642_object = Obj(); var_643_object = Obj(); // 0xbd3 PushV
	var_642_object = var_619_object; // 0xbd4 Mov
	var_643_object = var_625_object; // 0xbd5 Mov
	TaskCall(13); // 0xbd6 TaskCall
	func_3054(var_644_object, var_645_object, var_646_string, var_647_bool, var_642_object, var_643_object); // 0xbd7 NEW_2
	TaskReturn(); // 0xbd8 TaskReturn
	IsDialogEnd(var_628_bool); // 0xbda ObjFunc
	
Label_3036:
	var_691_bool = var_628_bool == 0; // 0xbdc Not
	if(var_691_bool == 0) goto Label_3043; // 0xbdd JumpB
	sync(); // 0xbde Func
	IsDialogEnd(var_628_bool); // 0xbe0 ObjFunc
	goto Label_3036; // 0xbe2 Jump
	
Label_3043:
	var_692_object = Obj(); // 0xbe3 PushV
	var_692_object = var_619_object; // 0xbe4 Mov
	func_4426(); // 0xbe5 NEW_2
	StopDialog(var_625_object); // 0xbe7 Func
	GetReturnValue(var_627_int); // 0xbe9 ObjFunc
	var_618_int = var_627_int; // 0xbeb Mov
	return 8; // 0xbec Return
}


func_4766(var_126_int)
{
	var_126_int = 515549; // 0x129e MovI
	return 0; // 0x129f Return
}


func_5022(var_585_bool)
{
	var_587_int = 0; var_588_string = ""; // 0x139f PushV
	var_588_string = "b8q01"; // 0x13a0 MovS
	func_4650(var_587_int, var_588_string); // 0x13a1 NEW_2
	var_589_int = 5; // 0x13a3 PushI
	var_590_bool = var_587_int == var_589_int; // 0x13a4 Eq
	if(var_590_bool == 0) goto Label_5032; // 0x13a5 JumpB
	var_585_bool = 1; // 0x13a6 MovB
	return 0; // 0x13a7 Return
	
Label_5032:
	var_585_bool = 0; // 0x13a8 MovB
	return 0; // 0x13a9 Return
}


func_4768(var_125_int)
{
	var_125_int = 502874; // 0x12a0 MovI
	return 0; // 0x12a1 Return
}


func_4770(var_127_string)
{
	var_127_string = "ui/NPC_Ospina.png"; // 0x12a2 MovS
	return 0; // 0x12a3 Return
}


func_930(var_2_object, var_432_string)
{
	var_433_bool = 0; // 0x3a3 PushV
	func_4774(var_433_bool); // 0x3a4 NEW_2
	var_434_bool = var_433_bool == 0; // 0x3a6 Not
	if(var_434_bool == 0) goto Label_937; // 0x3a7 JumpB
	return 0; // 0x3a8 Return
	
Label_937:
	var_435_bool = var_432_string == var_2_object; // 0x3a9 Eq
	if(var_435_bool == 0) goto Label_940; // 0x3aa JumpB
	return 0; // 0x3ab Return
	
Label_940:
	var_436_string = ""; var_437_bool = 0; // 0x3ac PushV
	var_436_string = var_432_string; // 0x3ad Mov
	var_438_string = ""; // 0x3ae PushS
	var_439_bool = var_432_string == var_438_string; // 0x3af Eq
	if(var_439_bool == 0) goto Label_947; // 0x3b0 JumpB
	var_437_bool = 0; // 0x3b1 MovB
	goto Label_948; // 0x3b2 Jump
	
Label_948:
	func_4597(var_436_string, var_437_bool); // 0x3b4 NEW_2
	var_2_object = var_432_string; // 0x3b6 TMov
	return 0; // 0x3b7 Return
	
Label_947:
	var_437_bool = 1; // 0x3b3 MovB
}


func_4772(var_128_string)
{
	var_128_string = "ui/NPC_Ospina_b.png"; // 0x12a4 MovS
	return 0; // 0x12a5 Return
}


func_4003(var_2_object, var_871_string)
{
	var_872_bool = 0; // 0xfa4 PushV
	func_4774(var_872_bool); // 0xfa5 NEW_2
	var_873_bool = var_872_bool == 0; // 0xfa7 Not
	if(var_873_bool == 0) goto Label_4010; // 0xfa8 JumpB
	return 0; // 0xfa9 Return
	
Label_4010:
	var_874_bool = var_871_string == var_2_object; // 0xfaa Eq
	if(var_874_bool == 0) goto Label_4013; // 0xfab JumpB
	return 0; // 0xfac Return
	
Label_4013:
	var_875_string = ""; var_876_bool = 0; // 0xfad PushV
	var_875_string = var_871_string; // 0xfae Mov
	var_877_string = ""; // 0xfaf PushS
	var_878_bool = var_871_string == var_877_string; // 0xfb0 Eq
	if(var_878_bool == 0) goto Label_4020; // 0xfb1 JumpB
	var_876_bool = 0; // 0xfb2 MovB
	goto Label_4021; // 0xfb3 Jump
	
Label_4021:
	func_4597(var_875_string, var_876_bool); // 0xfb5 NEW_2
	var_2_object = var_871_string; // 0xfb7 TMov
	return 0; // 0xfb8 Return
	
Label_4020:
	var_876_bool = 1; // 0xfb4 MovB
}


func_4774(var_120_bool)
{
	var_120_bool = 1; // 0x12a6 MovB
	return 0; // 0x12a7 Return
}


func_4776()
{
	var_54_string = "oob5Ospina1"; // 0x12a9 PushS
	var_55_int = 1; // 0x12aa PushI
	SetVariable(var_54_string, var_55_int); // 0x12ab Func
	return 0; // 0x12ad Return
}


func_5034(var_669_bool)
{
	var_671_int = 0; var_672_string = ""; // 0x13ab PushV
	var_672_string = "b10q01"; // 0x13ac MovS
	func_4650(var_671_int, var_672_string); // 0x13ad NEW_2
	var_673_int = 4; // 0x13af PushI
	var_674_bool = var_671_int == var_673_int; // 0x13b0 Eq
	if(var_674_bool == 0) goto Label_5044; // 0x13b1 JumpB
	var_669_bool = 1; // 0x13b2 MovB
	return 0; // 0x13b3 Return
	
Label_5044:
	var_669_bool = 0; // 0x13b4 MovB
	return 0; // 0x13b5 Return
}


func_4782()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x12ae PushV
	var_62_int = 0; var_63_string = ""; // 0x12af PushV
	var_63_string = "b5q01PlaceButchers"; // 0x12b0 MovS
	func_4650(var_62_int, var_63_string); // 0x12b1 NEW_2
	var_66_int = 0; // 0x12b3 PushI
	var_67_bool = var_62_int == var_66_int; // 0x12b4 Eq
	if(var_67_bool == 0) goto Label_4813; // 0x12b5 JumpB
	var_68_string = "b5q01PlaceButchers"; // 0x12b6 PushS
	var_69_int = 1; // 0x12b7 PushI
	SetVariable(var_68_string, var_69_int); // 0x12b8 Func
	var_70_object = Obj(); // 0x12ba PushV
	func_5300(var_70_object); // 0x12bb NEW_2
	var_61_object = var_70_object; // 0x12bc Mov
	var_77_string = "b5q01GathererWife"; // 0x12be PushS
	var_78_string = "pt_gatherer3"; // 0x12bf PushS
	var_79_int = 1; // 0x12c0 PushI
	var_80_int = 530181; // 0x12c1 PushI
	var_81_float = 0; // 0x12c2 PushV
	func_4722(var_81_float); // 0x12c3 NEW_2
	AddMark(var_77_string, var_78_string, var_79_int, var_80_int, var_81_float); // 0x12c5 ObjFunc
	var_84_bool = 0; var_85_string = ""; var_86_string = ""; // 0x12c7 PushV
	var_85_string = "quest_b5_01"; // 0x12c8 MovS
	var_86_string = "place_butchers"; // 0x12c9 MovS
	func_4710(var_84_bool, var_85_string, var_86_string); // 0x12ca NEW_2
	var_61_object = 0; // 0x12cc SetNull
	
Label_4813:
	return 2; // 0x12cd Return
}


func_5300(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); // 0x14b4 PushV
	GetMainOutdoorScene(var_107_object); // 0x14b5 Func
	var_109_bool = var_107_object == 0; // 0x14b7 NullEq
	if(var_109_bool == 0) goto Label_5311; // 0x14b8 JumpB
	var_110_string = "Can't find main outdoor scene"; // 0x14b9 PushS
	Trace(var_110_string); // 0x14ba Func
	var_108_object = 0; // 0x14bc SetNull
	var_104_object = var_108_object; // 0x14bd Mov
	return 4; // 0x14be Return
	
Label_5311:
	GetMap(var_108_object); // 0x14bf ObjFunc
	var_104_object = var_108_object; // 0x14c1 Mov
	return 4; // 0x14c2 Return
}


func_2484(var_2_object, var_576_string)
{
	var_577_bool = 0; // 0x9b5 PushV
	func_4774(var_577_bool); // 0x9b6 NEW_2
	var_578_bool = var_577_bool == 0; // 0x9b8 Not
	if(var_578_bool == 0) goto Label_2491; // 0x9b9 JumpB
	return 0; // 0x9ba Return
	
Label_2491:
	var_579_bool = var_576_string == var_2_object; // 0x9bb Eq
	if(var_579_bool == 0) goto Label_2494; // 0x9bc JumpB
	return 0; // 0x9bd Return
	
Label_2494:
	var_580_string = ""; var_581_bool = 0; // 0x9be PushV
	var_580_string = var_576_string; // 0x9bf Mov
	var_582_string = ""; // 0x9c0 PushS
	var_583_bool = var_576_string == var_582_string; // 0x9c1 Eq
	if(var_583_bool == 0) goto Label_2501; // 0x9c2 JumpB
	var_581_bool = 0; // 0x9c3 MovB
	goto Label_2502; // 0x9c4 Jump
	
Label_2502:
	func_4597(var_580_string, var_581_bool); // 0x9c6 NEW_2
	var_2_object = var_576_string; // 0x9c8 TMov
	return 0; // 0x9c9 Return
	
Label_2501:
	var_581_bool = 1; // 0x9c5 MovB
}


func_5046(var_660_bool)
{
	var_662_int = 0; var_663_string = ""; // 0x13b7 PushV
	var_663_string = "b10q01"; // 0x13b8 MovS
	func_4650(var_662_int, var_663_string); // 0x13b9 NEW_2
	var_664_int = 1000; // 0x13bb PushI
	var_665_bool = var_662_int == var_664_int; // 0x13bc Eq
	if(var_665_bool == 0) goto Label_5056; // 0x13bd JumpB
	var_660_bool = 1; // 0x13be MovB
	return 0; // 0x13bf Return
	
Label_5056:
	var_660_bool = 0; // 0x13c0 MovB
	return 0; // 0x13c1 Return
}


func_4538(var_180_bool)
{
	var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = ""; var_187_string = ""; var_188_int = 0; var_189_bool = 0; var_190_int = 0; var_191_string = ""; // 0x11ba PushV
	var_192_string = "d"; // 0x11bb PushS
	var_193_int = 0; // 0x11bc PushV
	func_4727(var_193_int); // 0x11bd NEW_2
	var_199_int = var_192_string + var_193_int; // 0x11bf Add
	var_200_string = "m"; // 0x11c0 PushS
	var_187_string = var_199_int + var_200_string; // 0x11c1 Add2
	var_188_int = 0; // 0x11c2 MovI
	
Label_4547:
	var_201_int = 1; // 0x11c3 PushI
	if(var_201_int == 0) goto Label_4560; // 0x11c4 JumpB
	var_202_int = 1; // 0x11c5 PushI
	var_203_int = var_188_int + var_202_int; // 0x11c6 Add
	var_204_int = var_187_string + var_203_int; // 0x11c7 Add
	HasProperty(var_204_int, var_189_bool); // 0x11c8 ObjFunc
	var_205_bool = var_189_bool == 0; // 0x11ca Not
	if(var_205_bool == 0) goto Label_4557; // 0x11cb JumpB
	goto Label_4560; // 0x11cc Jump
	
Label_4560:
	var_206_bool = var_188_int == 0; // 0x11d0 Not
	if(var_206_bool == 0) goto Label_4564; // 0x11d1 JumpB
	var_180_bool = 0; // 0x11d2 MovB
	return 10; // 0x11d3 Return
	
Label_4564:
	var_190_int = 0; // 0x11d4 MovI
	var_207_int = 1; // 0x11d5 PushI
	var_208_bool = var_188_int > var_207_int; // 0x11d6 GT
	if(var_208_bool == 0) goto Label_4570; // 0x11d7 JumpB
	irand(var_190_int, var_188_int); // 0x11d8 Func
	
Label_4570:
	var_209_int = 1; // 0x11da PushI
	var_210_int = var_190_int + var_209_int; // 0x11db Add
	var_211_int = var_187_string + var_210_int; // 0x11dc Add
	GetProperty(var_211_int, var_191_string); // 0x11dd ObjFunc
	var_212_bool = 0; var_213_string = ""; // 0x11df PushV
	var_213_string = var_191_string; // 0x11e0 Mov
	func_4612(var_212_bool, var_213_string); // 0x11e1 NEW_2
	var_180_bool = var_212_bool; // 0x11e2 Mov
	return 10; // 0x11e4 Return
	
Label_4557:
	var_214_int = 1; // 0x11cd PushI
	var_188_int = var_188_int + var_214_int; // 0x11ce Add2
	goto Label_4547; // 0x11cf Jump
}


func_3517(var_2_object, var_736_string)
{
	var_737_bool = 0; // 0xdbe PushV
	func_4774(var_737_bool); // 0xdbf NEW_2
	var_738_bool = var_737_bool == 0; // 0xdc1 Not
	if(var_738_bool == 0) goto Label_3524; // 0xdc2 JumpB
	return 0; // 0xdc3 Return
	
Label_3524:
	var_739_bool = var_736_string == var_2_object; // 0xdc4 Eq
	if(var_739_bool == 0) goto Label_3527; // 0xdc5 JumpB
	return 0; // 0xdc6 Return
	
Label_3527:
	var_740_string = ""; var_741_bool = 0; // 0xdc7 PushV
	var_740_string = var_736_string; // 0xdc8 Mov
	var_742_string = ""; // 0xdc9 PushS
	var_743_bool = var_736_string == var_742_string; // 0xdca Eq
	if(var_743_bool == 0) goto Label_3534; // 0xdcb JumpB
	var_741_bool = 0; // 0xdcc MovB
	goto Label_3535; // 0xdcd Jump
	
Label_3535:
	func_4597(var_740_string, var_741_bool); // 0xdcf NEW_2
	var_2_object = var_736_string; // 0xdd1 TMov
	return 0; // 0xdd2 Return
	
Label_3534:
	var_741_bool = 1; // 0xdce MovB
}


func_5058(var_666_bool)
{
	var_666_bool = 1; // 0x13c3 MovB
	return 0; // 0x13c4 Return
}


func_2243(var_2_object, var_240_string)
{
	var_241_bool = 0; // 0x8c4 PushV
	func_4774(var_241_bool); // 0x8c5 NEW_2
	var_242_bool = var_241_bool == 0; // 0x8c7 Not
	if(var_242_bool == 0) goto Label_2250; // 0x8c8 JumpB
	return 0; // 0x8c9 Return
	
Label_2250:
	var_243_bool = var_240_string == var_2_object; // 0x8ca Eq
	if(var_243_bool == 0) goto Label_2253; // 0x8cb JumpB
	return 0; // 0x8cc Return
	
Label_2253:
	var_244_string = ""; var_245_bool = 0; // 0x8cd PushV
	var_244_string = var_240_string; // 0x8ce Mov
	var_246_string = ""; // 0x8cf PushS
	var_247_bool = var_240_string == var_246_string; // 0x8d0 Eq
	if(var_247_bool == 0) goto Label_2260; // 0x8d1 JumpB
	var_245_bool = 0; // 0x8d2 MovB
	goto Label_2261; // 0x8d3 Jump
	
Label_2261:
	func_4597(var_244_string, var_245_bool); // 0x8d5 NEW_2
	var_2_object = var_240_string; // 0x8d7 TMov
	return 0; // 0x8d8 Return
	
Label_2260:
	var_245_bool = 1; // 0x8d4 MovB
}


func_5317(var_103_object, var_104_string, var_105_float)
{
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_object = Obj(); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; // 0x14c5 PushV
	GetMainOutdoorScene(var_113_object); // 0x14c6 Func
	var_115_bool = var_113_object == 0; // 0x14c8 NullEq
	if(var_115_bool == 0) goto Label_5326; // 0x14c9 JumpB
	var_116_string = "Can't find main outdoor scene"; // 0x14ca PushS
	Trace(var_116_string); // 0x14cb Func
	return 8; // 0x14cd Return
	
Label_5326:
	GetLocator(var_104_string, var_114_bool, var_111_cvector, var_112_cvector); // 0x14ce ObjFunc
	var_117_bool = var_114_bool == 0; // 0x14d0 Not
	if(var_117_bool == 0) goto Label_5336; // 0x14d1 JumpB
	var_118_string = "Warning: outdoor scene locator "; // 0x14d2 PushS
	var_119_int = var_118_string + var_104_string; // 0x14d3 Add
	var_120_string = " doesnt exist"; // 0x14d4 PushS
	var_121_int = var_119_int + var_120_string; // 0x14d5 Add
	Trace(var_121_int); // 0x14d6 Func
	
Label_5336:
	GetMap(var_103_object); // 0x14d8 ObjFunc
	var_122_bool = var_103_object == 0; // 0x14da NullEq
	if(var_122_bool == 0) goto Label_5344; // 0x14db JumpB
	var_123_string = "Can't find map"; // 0x14dc PushS
	Trace(var_123_string); // 0x14dd Func
	return 8; // 0x14df Return
	
Label_5344:
	var_124_float = GetByIndex(var_111_cvector, 0); // 0x14e0 PushE
	var_125_float = GetByIndex(var_111_cvector, 2); // 0x14e1 PushE
	SetMapParams(var_124_float, var_125_float, var_105_float); // 0x14e2 ObjFunc
	return 8; // 0x14e4 Return
}


func_5063(var_751_bool)
{
	var_753_int = 0; var_754_string = ""; // 0x13c8 PushV
	var_754_string = "b11q01"; // 0x13c9 MovS
	func_4650(var_753_int, var_754_string); // 0x13ca NEW_2
	var_755_int = 1000; // 0x13cc PushI
	var_756_bool = var_753_int == var_755_int; // 0x13cd Eq
	if(var_756_bool == 0) goto Label_5073; // 0x13ce JumpB
	var_751_bool = 1; // 0x13cf MovB
	return 0; // 0x13d0 Return
	
Label_5073:
	var_751_bool = 0; // 0x13d1 MovB
	return 0; // 0x13d2 Return
}


func_4814()
{
	var_131_string = "oob3Ospina1"; // 0x12cf PushS
	var_132_int = 1; // 0x12d0 PushI
	SetVariable(var_131_string, var_132_int); // 0x12d1 Func
	return 0; // 0x12d3 Return
}


func_5075(var_726_bool)
{
	var_728_int = 0; var_729_string = ""; // 0x13d4 PushV
	var_729_string = "oob11Ospina1"; // 0x13d5 MovS
	func_4650(var_728_int, var_729_string); // 0x13d6 NEW_2
	var_730_int = 0; // 0x13d8 PushI
	var_731_bool = var_728_int == var_730_int; // 0x13d9 Eq
	if(var_731_bool == 0) goto Label_5085; // 0x13da JumpB
	var_726_bool = 1; // 0x13db MovB
	return 0; // 0x13dc Return
	
Label_5085:
	var_726_bool = 0; // 0x13dd MovB
	return 0; // 0x13de Return
}


func_4820()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x12d4 PushV
	var_56_string = "b3q01"; // 0x12d5 PushS
	var_57_int = 2; // 0x12d6 PushI
	SetVariable(var_56_string, var_57_int); // 0x12d7 Func
	var_58_object = Obj(); // 0x12d9 PushV
	func_5300(var_58_object); // 0x12da NEW_2
	var_55_object = var_58_object; // 0x12db Mov
	var_65_string = "b3q01OspinaGotoButcher"; // 0x12dd PushS
	var_66_string = "pt_gmap_house5_24"; // 0x12de PushS
	var_67_int = 1; // 0x12df PushI
	var_68_int = 519635; // 0x12e0 PushI
	var_69_float = 0; // 0x12e1 PushV
	func_4722(var_69_float); // 0x12e2 NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x12e4 ObjFunc
	func_5220(); // 0x12e7 NEW_2
	var_95_bool = 0; var_96_string = ""; var_97_string = ""; // 0x12e9 PushV
	var_96_string = "quest_b3_01"; // 0x12ea MovS
	var_97_string = "place_butcher"; // 0x12eb MovS
	func_4710(var_95_bool, var_96_string, var_97_string); // 0x12ec NEW_2
	return 2; // 0x12ee Return
}


func_4319(var_85_bool)
{
	var_85_bool = 1; // 0x10df MovB
	return 0; // 0x10e0 Return
}


func_5087(var_594_bool)
{
	var_596_int = 0; var_597_string = ""; // 0x13e0 PushV
	var_597_string = "oob8Ospina1"; // 0x13e1 MovS
	func_4650(var_596_int, var_597_string); // 0x13e2 NEW_2
	var_598_int = 0; // 0x13e4 PushI
	var_599_bool = var_596_int == var_598_int; // 0x13e5 Eq
	if(var_599_bool == 0) goto Label_5097; // 0x13e6 JumpB
	var_594_bool = 1; // 0x13e7 MovB
	return 0; // 0x13e8 Return
	
Label_5097:
	var_594_bool = 0; // 0x13e9 MovB
	return 0; // 0x13ea Return
}


func_4321()
{
	StopAnimation(); // 0x10e1 Func
	StopGroup0(); // 0x10e3 Func
	return 0; // 0x10e5 Return
}


func_1252(var_0_object, var_1_object, var_2_object, var_3_string, var_318_object, var_319_object)
{
	var_0_object = var_319_object; // 0x4e5 TMov
	var_1_object = var_318_object; // 0x4e6 TMov
	var_3_string = 0; // 0x4e7 TMovB
	var_324_int = 1; // 0x4e8 PushI
	if(var_324_int == 0) goto Label_1340; // 0x4e9 JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0x4ea PushV
	var_326_object = var_1_object; // 0x4eb MovT
	func_5147(var_326_object); // 0x4ec NEW_2
	if(var_325_bool == 0) goto Label_1283; // 0x4ee JumpB
	var_333_string = ""; // 0x4ef PushV
	var_333_string = "Neutral"; // 0x4f0 MovS
	func_1370(var_319_object, var_333_string); // 0x4f1 NEW_2
	var_341_int = 520279; // 0x4f3 PushI
	SetMessage(var_341_int); // 0x4f4 TObjFunc
	ClearReplies(); // 0x4f6 TObjFunc
	var_342_int = 520280; // 0x4f8 PushI
	var_343_int = 21473; // 0x4f9 PushI
	var_344_int = 21472; // 0x4fa PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x4fb TObjFunc
	var_345_int = 520299; // 0x4fd PushI
	var_346_int = 21475; // 0x4fe PushI
	var_347_int = 21493; // 0x4ff PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x500 TObjFunc
	goto Label_1340; // 0x502 Jump
	
Label_1340:
	var_348_bool = 0; // 0x53c PushV
	func_4774(var_348_bool); // 0x53d NEW_2
	if(var_348_bool == 0) goto Label_1355; // 0x53f JumpB
	
Label_1344:
	lshWaitForAnimEnd(); // 0x540 Func
	var_349_string = var_3_string; // 0x542 PushT
	if(var_349_string == 0) goto Label_1349; // 0x543 JumpB
	goto Label_1354; // 0x544 Jump
	
Label_1354:
	goto Label_1369; // 0x54a Jump
	
Label_1369:
	return 0; // 0x559 Return
	
Label_1349:
	var_350_string = ""; // 0x545 PushV
	var_350_string = var_2_object; // 0x546 MovT
	func_4581(var_350_string); // 0x547 NEW_2
	goto Label_1344; // 0x549 Jump
	
Label_1355:
	var_351_string = "all"; // 0x54b PushS
	var_352_string = "idle"; // 0x54c PushS
	PlayAnimation(var_351_string, var_352_string); // 0x54d Func
	
Label_1359:
	WaitForAnimEnd(); // 0x54f Func
	var_353_string = var_3_string; // 0x551 PushT
	if(var_353_string == 0) goto Label_1364; // 0x552 JumpB
	goto Label_1369; // 0x553 Jump
	
Label_1364:
	var_354_string = "all"; // 0x554 PushS
	var_355_string = "idle"; // 0x555 PushS
	PlayAnimation(var_354_string, var_355_string); // 0x556 Func
	goto Label_1359; // 0x558 Jump
	
Label_1283:
	var_356_string = ""; // 0x503 PushV
	var_356_string = "Neutral"; // 0x504 MovS
	func_1370(var_319_object, var_356_string); // 0x505 NEW_2
	var_357_int = 520300; // 0x507 PushI
	SetMessage(var_357_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_358_bool = 0; var_359_object = Obj(); // 0x50c PushV
	var_359_object = var_1_object; // 0x50d MovT
	func_5159(var_359_object); // 0x50e NEW_2
	if(var_358_bool == 0) goto Label_1302; // 0x510 JumpB
	var_364_int = 520301; // 0x511 PushI
	var_365_int = 21497; // 0x512 PushI
	var_366_int = 21496; // 0x513 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x514 TObjFunc
	
Label_1302:
	var_367_bool = 0; var_368_object = Obj(); // 0x516 PushV
	var_368_object = var_1_object; // 0x517 MovT
	func_5171(var_368_object); // 0x518 NEW_2
	if(var_367_bool == 0) goto Label_1312; // 0x51a JumpB
	var_373_int = 520317; // 0x51b PushI
	var_374_int = 21513; // 0x51c PushI
	var_375_int = 21512; // 0x51d PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x51e TObjFunc
	
Label_1312:
	var_376_bool = 0; var_377_object = Obj(); // 0x520 PushV
	var_377_object = var_1_object; // 0x521 MovT
	func_5183(var_377_object); // 0x522 NEW_2
	if(var_376_bool == 0) goto Label_1322; // 0x524 JumpB
	var_382_int = 520324; // 0x525 PushI
	var_383_int = 21520; // 0x526 PushI
	var_384_int = 21519; // 0x527 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x528 TObjFunc
	
Label_1322:
	var_385_bool = 0; var_386_object = Obj(); // 0x52a PushV
	var_386_object = var_1_object; // 0x52b MovT
	func_5195(var_386_object); // 0x52c NEW_2
	if(var_385_bool == 0) goto Label_1332; // 0x52e JumpB
	var_391_int = 520327; // 0x52f PushI
	var_392_int = 21523; // 0x530 PushI
	var_393_int = 21522; // 0x531 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x532 TObjFunc
	
Label_1332:
	var_394_int = 520330; // 0x534 PushI
	var_395_int = -1; // 0x535 PushI
	var_396_int = 21525; // 0x536 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x537 TObjFunc
	goto Label_1340; // 0x539 Jump
}


func_4581(var_266_string)
{
	var_267_bool = 0; var_268_float = 0; var_269_float = 0; var_270_bool = 0; var_271_float = 0; var_272_float = 0; // 0x11e5 PushV
	lshHasAnimation(var_270_bool, var_266_string); // 0x11e6 Func
	var_273_bool = var_270_bool; // 0x11e8 Push
	if(var_273_bool == 0) goto Label_4592; // 0x11e9 JumpB
	lshGetAnimTimes(var_266_string, var_271_float, var_272_float); // 0x11ea Func
	var_274_bool = 0; // 0x11ec PushB
	lshPlayAnimation(var_271_float, var_272_float, var_274_bool); // 0x11ed Func
	goto Label_4596; // 0x11ef Jump
	
Label_4596:
	return 6; // 0x11f4 Return
	
Label_4592:
	var_275_string = "Can't find lsh animation : "; // 0x11f0 PushS
	var_276_int = var_275_string + var_266_string; // 0x11f1 Add
	Trace(var_276_int); // 0x11f2 Func
}


func_5350(var_129_int)
{
	var_130_int = 0; var_131_int = 0; // 0x14e6 PushV
	var_132_string = "branch"; // 0x14e7 PushS
	GetVariable(var_132_string, var_131_int); // 0x14e8 Func
	var_133_int = 0; // 0x14ea PushI
	var_134_bool = var_131_int == var_133_int; // 0x14eb Eq
	if(var_134_bool == 0) goto Label_5360; // 0x14ec JumpB
	var_129_int = 1; // 0x14ed MovI
	return 2; // 0x14ee Return
	
Label_5360:
	var_135_int = 1; // 0x14f0 PushI
	var_136_bool = var_131_int == var_135_int; // 0x14f1 Eq
	if(var_136_bool == 0) goto Label_5365; // 0x14f2 JumpB
	var_129_int = 2; // 0x14f3 MovI
	return 2; // 0x14f4 Return
	
Label_5365:
	var_129_int = 3; // 0x14f5 MovI
	return 2; // 0x14f6 Return
}


func_4326(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x10e6 PushV
	GetPosition(var_66_cvector); // 0x10e7 Func
	GetPosition(var_67_cvector); // 0x10e9 ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x10eb Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x10ec Or2
	return 6; // 0x10ed Return
}


func_4074(var_0_object)
{
	var_47_bool = 0; // 0xfea PushV
	func_4353(var_47_bool); // 0xfeb NEW_2
	var_50_bool = var_47_bool == 0; // 0xfed Not
	if(var_50_bool == 0) goto Label_4081; // 0xfee JumpB
	Hold(); // 0xfef Func
	
Label_4081:
	GetDirection(var_0_object); // 0xff1 Func
	
Label_4083:
	func_4250(); // 0xff4 NEW_2
	goto Label_4083; // 0xff6 Jump
}


func_5099(var_515_bool)
{
	var_517_int = 0; var_518_string = ""; // 0x13ec PushV
	var_518_string = "b5q01"; // 0x13ed MovS
	func_4650(var_517_int, var_518_string); // 0x13ee NEW_2
	var_519_int = 1; // 0x13f0 PushI
	var_520_bool = var_517_int == var_519_int; // 0x13f1 Eq
	if(var_520_bool == 0) goto Label_5109; // 0x13f2 JumpB
	var_515_bool = 1; // 0x13f3 MovB
	return 0; // 0x13f4 Return
	
Label_5109:
	var_515_bool = 0; // 0x13f5 MovB
	return 0; // 0x13f6 Return
}


func_4334(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x10ee PushV
	GetPosition(var_59_cvector); // 0x10ef Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x10f1 Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x10f2 PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x10f3 PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x10f4 Func
	var_54_bool = var_61_bool; // 0x10f6 Mov
	return 6; // 0x10f7 Return
}


func_3054(var_0_object, var_1_object, var_2_object, var_3_string, var_642_object, var_643_object)
{
	var_0_object = var_643_object; // 0xbef TMov
	var_1_object = var_642_object; // 0xbf0 TMov
	var_3_string = 0; // 0xbf1 TMovB
	var_648_int = 1; // 0xbf2 PushI
	if(var_648_int == 0) goto Label_3114; // 0xbf3 JumpB
	var_649_string = ""; // 0xbf4 PushV
	var_649_string = "Neutral"; // 0xbf5 MovS
	func_3144(var_643_object, var_649_string); // 0xbf6 NEW_2
	var_657_int = 521945; // 0xbf8 PushI
	SetMessage(var_657_int); // 0xbf9 TObjFunc
	ClearReplies(); // 0xbfb TObjFunc
	var_658_bool = 0; // 0xbfd PushV
	var_658_bool = 1; // 0xbfe MovB
	var_659_bool = 0; // 0xbff PushV
	var_659_bool = 0; // 0xc00 MovB
	var_660_bool = 0; var_661_object = Obj(); // 0xc01 PushV
	var_661_object = var_1_object; // 0xc02 MovT
	func_5046(var_661_object); // 0xc03 NEW_2
	if(var_660_bool == 0) goto Label_3084; // 0xc05 JumpB
	var_666_bool = 0; var_667_object = Obj(); // 0xc06 PushV
	var_667_object = var_1_object; // 0xc07 MovT
	func_5058(var_667_object); // 0xc08 NEW_2
	if(var_666_bool == 0) goto Label_3084; // 0xc0a JumpB
	var_659_bool = 1; // 0xc0b MovB
	
Label_3084:
	if(var_659_bool == 0) goto Label_3100; // 0xc0c JumpB
	var_668_bool = 0; // 0xc0d PushV
	var_668_bool = 0; // 0xc0e MovB
	var_669_bool = 0; var_670_object = Obj(); // 0xc0f PushV
	var_670_object = var_1_object; // 0xc10 MovT
	func_5034(var_670_object); // 0xc11 NEW_2
	if(var_669_bool == 0) goto Label_3098; // 0xc13 JumpB
	var_675_bool = 0; var_676_object = Obj(); // 0xc14 PushV
	var_676_object = var_1_object; // 0xc15 MovT
	func_5058(var_676_object); // 0xc16 NEW_2
	if(var_675_bool == 0) goto Label_3098; // 0xc18 JumpB
	var_668_bool = 1; // 0xc19 MovB
	
Label_3098:
	if(var_668_bool == 0) goto Label_3100; // 0xc1a JumpB
	var_658_bool = 0; // 0xc1b MovB
	
Label_3100:
	if(var_658_bool == 0) goto Label_3106; // 0xc1c JumpB
	var_677_int = 521946; // 0xc1d PushI
	var_678_int = 23122; // 0xc1e PushI
	var_679_int = 23120; // 0xc1f PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0xc20 TObjFunc
	
Label_3106:
	var_680_int = 521947; // 0xc22 PushI
	var_681_int = -1; // 0xc23 PushI
	var_682_int = 23121; // 0xc24 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0xc25 TObjFunc
	goto Label_3114; // 0xc27 Jump
	
Label_3114:
	var_683_bool = 0; // 0xc2a PushV
	func_4774(var_683_bool); // 0xc2b NEW_2
	if(var_683_bool == 0) goto Label_3129; // 0xc2d JumpB
	
Label_3118:
	lshWaitForAnimEnd(); // 0xc2e Func
	var_684_string = var_3_string; // 0xc30 PushT
	if(var_684_string == 0) goto Label_3123; // 0xc31 JumpB
	goto Label_3128; // 0xc32 Jump
	
Label_3128:
	goto Label_3143; // 0xc38 Jump
	
Label_3143:
	return 0; // 0xc47 Return
	
Label_3123:
	var_685_string = ""; // 0xc33 PushV
	var_685_string = var_2_object; // 0xc34 MovT
	func_4581(var_685_string); // 0xc35 NEW_2
	goto Label_3118; // 0xc37 Jump
	
Label_3129:
	var_686_string = "all"; // 0xc39 PushS
	var_687_string = "idle"; // 0xc3a PushS
	PlayAnimation(var_686_string, var_687_string); // 0xc3b Func
	
Label_3133:
	WaitForAnimEnd(); // 0xc3d Func
	var_688_string = var_3_string; // 0xc3f PushT
	if(var_688_string == 0) goto Label_3138; // 0xc40 JumpB
	goto Label_3143; // 0xc41 Jump
	
Label_3138:
	var_689_string = "all"; // 0xc42 PushS
	var_690_string = "idle"; // 0xc43 PushS
	PlayAnimation(var_689_string, var_690_string); // 0xc44 Func
	goto Label_3133; // 0xc46 Jump
}


func_4848()
{
	var_103_object = Obj(); var_104_string = ""; var_105_float = 0; // 0x12f1 PushV
	var_106_object = Obj(); // 0x12f2 PushV
	func_5300(var_106_object); // 0x12f3 NEW_2
	var_103_object = var_106_object; // 0x12f4 Mov
	var_104_string = "pt_gmap_house5_24"; // 0x12f6 MovS
	var_105_float = 2; // 0x12f7 MovI
	func_5317(var_103_object, var_104_string, var_105_float); // 0x12f8 NEW_2
	var_126_object = Obj(); // 0x12fa PushV
	func_5300(var_126_object); // 0x12fb NEW_2
	ShowMap(var_126_object); // 0x12fd ObjFunc
	return 0; // 0x12ff Return
}


func_4597(var_244_string, var_245_bool)
{
	var_248_bool = 0; var_249_float = 0; var_250_float = 0; var_251_bool = 0; var_252_float = 0; var_253_float = 0; // 0x11f5 PushV
	lshHasAnimation(var_251_bool, var_244_string); // 0x11f6 Func
	var_254_bool = var_251_bool; // 0x11f8 Push
	if(var_254_bool == 0) goto Label_4607; // 0x11f9 JumpB
	lshGetAnimTimes(var_244_string, var_252_float, var_253_float); // 0x11fa Func
	lshPlayAnimation(var_252_float, var_253_float, var_245_bool); // 0x11fc Func
	goto Label_4611; // 0x11fe Jump
	
Label_4611:
	return 6; // 0x1203 Return
	
Label_4607:
	var_255_string = "Can't find lsh animation : "; // 0x11ff PushS
	var_256_int = var_255_string + var_244_string; // 0x1200 Add
	Trace(var_256_int); // 0x1201 Func
}


func_5367(var_64_object)
{
	var_65_bool = GlobalVars[1]; // 0x14f8 PushGE
	var_66_bool = var_65_bool == 0; // 0x14f9 Not
	if(var_66_bool == 0) goto Label_5380; // 0x14fa JumpB
	var_67_int = 0; var_68_object = Obj(); // 0x14fb PushV
	var_68_object = var_64_object; // 0x14fc Mov
	TaskCall(8); // 0x14fd TaskCall
	func_2104(var_69_object, var_67_int, var_68_object); // 0x14fe NEW_2
	TaskReturn(); // 0x14ff TaskReturn
	var_290_bool = GlobalVars[1]; // 0x1501 PushGE
	var_290_bool = 1; // 0x1502 MovB
	GlobalVars[1] = var_290_bool; // 0x1503 PopGE
	
Label_5380:
	var_291_bool = 0; var_292_int = 0; // 0x1504 PushV
	var_292_int = 2; // 0x1505 MovI
	func_4736(var_291_bool, var_292_int); // 0x1506 NEW_2
	if(var_291_bool == 0) goto Label_5392; // 0x1508 JumpB
	var_294_int = 0; var_295_object = Obj(); // 0x1509 PushV
	var_295_object = var_64_object; // 0x150a Mov
	TaskCall(6); // 0x150b TaskCall
	func_1171(var_296_object, var_294_int, var_295_object); // 0x150c NEW_2
	TaskReturn(); // 0x150d TaskReturn
	return 0; // 0x150f Return
	
Label_5392:
	var_399_bool = 0; var_400_int = 0; // 0x1510 PushV
	var_400_int = 3; // 0x1511 MovI
	func_4736(var_399_bool, var_400_int); // 0x1512 NEW_2
	if(var_399_bool == 0) goto Label_5404; // 0x1514 JumpB
	var_401_int = 0; var_402_object = Obj(); // 0x1515 PushV
	var_402_object = var_64_object; // 0x1516 Mov
	TaskCall(4); // 0x1517 TaskCall
	func_776(var_403_object, var_401_int, var_402_object); // 0x1518 NEW_2
	TaskReturn(); // 0x1519 TaskReturn
	return 0; // 0x151b Return
	
Label_5404:
	var_472_bool = 0; var_473_int = 0; // 0x151c PushV
	var_473_int = 5; // 0x151d MovI
	func_4736(var_472_bool, var_473_int); // 0x151e NEW_2
	if(var_472_bool == 0) goto Label_5416; // 0x1520 JumpB
	var_474_int = 0; var_475_object = Obj(); // 0x1521 PushV
	var_475_object = var_64_object; // 0x1522 Mov
	TaskCall(2); // 0x1523 TaskCall
	func_259(var_476_object, var_474_int, var_475_object); // 0x1524 NEW_2
	TaskReturn(); // 0x1525 TaskReturn
	return 0; // 0x1527 Return
	
Label_5416:
	var_543_bool = 0; var_544_int = 0; // 0x1528 PushV
	var_544_int = 8; // 0x1529 MovI
	func_4736(var_543_bool, var_544_int); // 0x152a NEW_2
	if(var_543_bool == 0) goto Label_5428; // 0x152c JumpB
	var_545_int = 0; var_546_object = Obj(); // 0x152d PushV
	var_546_object = var_64_object; // 0x152e Mov
	TaskCall(10); // 0x152f TaskCall
	func_2330(var_547_object, var_545_int, var_546_object); // 0x1530 NEW_2
	TaskReturn(); // 0x1531 TaskReturn
	return 0; // 0x1533 Return
	
Label_5428:
	var_616_bool = 0; var_617_int = 0; // 0x1534 PushV
	var_617_int = 10; // 0x1535 MovI
	func_4736(var_616_bool, var_617_int); // 0x1536 NEW_2
	if(var_616_bool == 0) goto Label_5440; // 0x1538 JumpB
	var_618_int = 0; var_619_object = Obj(); // 0x1539 PushV
	var_619_object = var_64_object; // 0x153a Mov
	TaskCall(12); // 0x153b TaskCall
	func_2973(var_620_object, var_618_int, var_619_object); // 0x153c NEW_2
	TaskReturn(); // 0x153d TaskReturn
	return 0; // 0x153f Return
	
Label_5440:
	var_693_bool = 0; var_694_int = 0; // 0x1540 PushV
	var_694_int = 11; // 0x1541 MovI
	func_4736(var_693_bool, var_694_int); // 0x1542 NEW_2
	if(var_693_bool == 0) goto Label_5452; // 0x1544 JumpB
	var_695_int = 0; var_696_object = Obj(); // 0x1545 PushV
	var_696_object = var_64_object; // 0x1546 Mov
	TaskCall(14); // 0x1547 TaskCall
	func_3343(var_697_object, var_695_int, var_696_object); // 0x1548 NEW_2
	TaskReturn(); // 0x1549 TaskReturn
	return 0; // 0x154b Return
	
Label_5452:
	var_775_bool = 0; // 0x154c PushV
	var_775_bool = 0; // 0x154d MovB
	var_776_bool = 0; var_777_int = 0; // 0x154e PushV
	var_777_int = 12; // 0x154f MovI
	func_4736(var_776_bool, var_777_int); // 0x1550 NEW_2
	if(var_776_bool == 0) goto Label_5463; // 0x1552 JumpB
	var_778_bool = GlobalVars[2]; // 0x1553 PushGE
	var_779_bool = var_778_bool == 0; // 0x1554 Not
	if(var_779_bool == 0) goto Label_5463; // 0x1555 JumpB
	var_775_bool = 1; // 0x1556 MovB
	
Label_5463:
	if(var_775_bool == 0) goto Label_5474; // 0x1557 JumpB
	var_780_int = 0; var_781_object = Obj(); // 0x1558 PushV
	var_781_object = var_64_object; // 0x1559 Mov
	TaskCall(0); // 0x155a TaskCall
	func_0(var_782_object, var_780_int, var_781_object); // 0x155b NEW_2
	TaskReturn(); // 0x155c TaskReturn
	var_839_bool = GlobalVars[2]; // 0x155e PushGE
	var_839_bool = 1; // 0x155f MovB
	GlobalVars[2] = var_839_bool; // 0x1560 PopGE
	return 0; // 0x1561 Return
	
Label_5474:
	var_840_int = 0; var_841_object = Obj(); // 0x1562 PushV
	var_841_object = var_64_object; // 0x1563 Mov
	TaskCall(16); // 0x1564 TaskCall
	func_3864(var_842_object, var_840_int, var_841_object); // 0x1565 NEW_2
	TaskReturn(); // 0x1566 TaskReturn
	return 0; // 0x1568 Return
}


func_4344(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x10f8 PushV
	GetPosition(var_53_cvector); // 0x10f9 ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x10fb PushV
	var_55_cvector = var_53_cvector; // 0x10fc Mov
	func_4334(var_54_bool, var_55_cvector); // 0x10fd NEW_2
	var_50_bool = var_54_bool; // 0x10fe Mov
	return 2; // 0x1100 Return
}


