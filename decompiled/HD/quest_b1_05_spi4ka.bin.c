task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_bool)
{
	var_13_int = 1; // 0xa2 PushI
	if(var_13_int == 0) goto Label_238; // 0xa3 JumpB
	func_1097(); // 0xa5 NEW_2
	var_15_int = 22020; // 0xa7 PushI
	var_16_bool = var_11_bool == var_15_int; // 0xa8 Eq
	if(var_16_bool == 0) goto Label_190; // 0xa9 JumpB
	var_17_string = ""; // 0xaa PushV
	var_17_string = "Neutral"; // 0xab MovS
	func_139(var_12_bool, var_17_string); // 0xac NEW_2
	var_34_int = 520803; // 0xae PushI
	SetMessage(var_34_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_35_int = 520804; // 0xb3 PushI
	var_36_int = 29221; // 0xb4 PushI
	var_37_int = 22021; // 0xb5 PushI
	AddReply(var_35_int, var_36_int, var_37_int); // 0xb6 TObjFunc
	var_38_int = 527876; // 0xb8 PushI
	var_39_int = 29224; // 0xb9 PushI
	var_40_int = 29223; // 0xba PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_41_int = 29224; // 0xbe PushI
	var_42_bool = var_11_bool == var_41_int; // 0xbf Eq
	if(var_42_bool == 0) goto Label_208; // 0xc0 JumpB
	var_43_string = ""; // 0xc1 PushV
	var_43_string = "Neutral"; // 0xc2 MovS
	func_139(var_12_bool, var_43_string); // 0xc3 NEW_2
	var_44_int = 527877; // 0xc5 PushI
	SetMessage(var_44_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_45_int = 527878; // 0xca PushI
	var_46_int = -1; // 0xcb PushI
	var_47_int = 29225; // 0xcc PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_48_int = 29221; // 0xd0 PushI
	var_49_bool = var_11_bool == var_48_int; // 0xd1 Eq
	if(var_49_bool == 0) goto Label_226; // 0xd2 JumpB
	var_50_string = ""; // 0xd3 PushV
	var_50_string = "Neutral"; // 0xd4 MovS
	func_139(var_12_bool, var_50_string); // 0xd5 NEW_2
	var_51_int = 527874; // 0xd7 PushI
	SetMessage(var_51_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_52_int = 527875; // 0xdc PushI
	var_53_int = -1; // 0xdd PushI
	var_54_int = 29222; // 0xde PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_3_string = 1; // 0xe2 TMovB
	var_55_bool = 0; // 0xe3 PushV
	func_1404(var_55_bool); // 0xe4 NEW_2
	if(var_55_bool == 0) goto Label_234; // 0xe6 JumpB
	lshStopAnimation(); // 0xe7 Func
	goto Label_236; // 0xe9 Jump
	
Label_236:
	return 0; // 0xec Return
	
Label_234:
	StopAnimation(); // 0xea Func
	
Label_238:
	return 0; // 0xee Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool)
{
	var_13_int = 1; // 0x1a5 PushI
	if(var_13_int == 0) goto Label_763; // 0x1a6 JumpB
	func_1097(); // 0x1a8 NEW_2
	var_15_int = 32262; // 0x1aa PushI
	var_16_bool = var_12_bool == var_15_int; // 0x1ab Eq
	if(var_16_bool == 0) goto Label_444; // 0x1ac JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0x1ad PushV
	var_17_object = var_1_object; // 0x1ae MovT
	var_18_object = var_0_object; // 0x1af MovT
	func_1174(); // 0x1b0 NEW_2
	var_69_object = Obj(); var_70_object = Obj(); // 0x1b2 PushV
	var_69_object = var_1_object; // 0x1b3 MovT
	var_70_object = var_0_object; // 0x1b4 MovT
	func_1239(); // 0x1b5 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x1b7 PushV
	var_81_object = var_1_object; // 0x1b8 MovT
	var_82_object = var_0_object; // 0x1b9 MovT
	func_1207(); // 0x1ba NEW_2
	
Label_444:
	var_107_int = 32312; // 0x1bc PushI
	var_108_bool = var_12_bool == var_107_int; // 0x1bd Eq
	if(var_108_bool == 0) goto Label_462; // 0x1be JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x1bf PushV
	var_109_object = var_1_object; // 0x1c0 MovT
	var_110_object = var_0_object; // 0x1c1 MovT
	func_1174(); // 0x1c2 NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0x1c4 PushV
	var_111_object = var_1_object; // 0x1c5 MovT
	var_112_object = var_0_object; // 0x1c6 MovT
	func_1239(); // 0x1c7 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x1c9 PushV
	var_113_object = var_1_object; // 0x1ca MovT
	var_114_object = var_0_object; // 0x1cb MovT
	func_1223(); // 0x1cc NEW_2
	
Label_462:
	var_120_int = 32255; // 0x1ce PushI
	var_121_bool = var_11_int == var_120_int; // 0x1cf Eq
	if(var_121_bool == 0) goto Label_505; // 0x1d0 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x1d1 PushV
	var_123_object = var_1_object; // 0x1d2 MovT
	func_1246(var_123_object); // 0x1d3 NEW_2
	if(var_122_bool == 0) goto Label_490; // 0x1d5 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x1d6 PushV
	var_130_object = var_1_object; // 0x1d7 MovT
	var_131_object = var_0_object; // 0x1d8 MovT
	func_1168(); // 0x1d9 NEW_2
	var_134_string = ""; // 0x1db PushV
	var_134_string = "Fear"; // 0x1dc MovS
	func_398(var_12_bool, var_134_string); // 0x1dd NEW_2
	var_151_int = 530928; // 0x1df PushI
	SetMessage(var_151_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_152_int = 530929; // 0x1e4 PushI
	var_153_int = 32288; // 0x1e5 PushI
	var_154_int = 32256; // 0x1e6 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_155_string = ""; // 0x1ea PushV
	var_155_string = "Neutral"; // 0x1eb MovS
	func_398(var_12_bool, var_155_string); // 0x1ec NEW_2
	var_156_int = 530936; // 0x1ee PushI
	SetMessage(var_156_int); // 0x1ef TObjFunc
	ClearReplies(); // 0x1f1 TObjFunc
	var_157_int = 530937; // 0x1f3 PushI
	var_158_int = -1; // 0x1f4 PushI
	var_159_int = 32264; // 0x1f5 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1f6 TObjFunc
	return 0; // 0x1f8 Return
	
Label_505:
	var_160_int = 32288; // 0x1f9 PushI
	var_161_bool = var_11_int == var_160_int; // 0x1fa Eq
	if(var_161_bool == 0) goto Label_528; // 0x1fb JumpB
	var_162_string = ""; // 0x1fc PushV
	var_162_string = "Fear"; // 0x1fd MovS
	func_398(var_12_bool, var_162_string); // 0x1fe NEW_2
	var_163_int = 530967; // 0x200 PushI
	SetMessage(var_163_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_164_int = 530968; // 0x205 PushI
	var_165_int = 32291; // 0x206 PushI
	var_166_int = 32289; // 0x207 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x208 TObjFunc
	var_167_int = 530969; // 0x20a PushI
	var_168_int = 32294; // 0x20b PushI
	var_169_int = 32290; // 0x20c PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_170_int = 32294; // 0x210 PushI
	var_171_bool = var_11_int == var_170_int; // 0x211 Eq
	if(var_171_bool == 0) goto Label_551; // 0x212 JumpB
	var_172_string = ""; // 0x213 PushV
	var_172_string = "Azart"; // 0x214 MovS
	func_398(var_12_bool, var_172_string); // 0x215 NEW_2
	var_173_int = 530973; // 0x217 PushI
	SetMessage(var_173_int); // 0x218 TObjFunc
	ClearReplies(); // 0x21a TObjFunc
	var_174_int = 530974; // 0x21c PushI
	var_175_int = 32296; // 0x21d PushI
	var_176_int = 32295; // 0x21e PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x21f TObjFunc
	var_177_int = 530976; // 0x221 PushI
	var_178_int = 32291; // 0x222 PushI
	var_179_int = 32297; // 0x223 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x224 TObjFunc
	return 0; // 0x226 Return
	
Label_551:
	var_180_int = 32296; // 0x227 PushI
	var_181_bool = var_11_int == var_180_int; // 0x228 Eq
	if(var_181_bool == 0) goto Label_569; // 0x229 JumpB
	var_182_string = ""; // 0x22a PushV
	var_182_string = "Azart"; // 0x22b MovS
	func_398(var_12_bool, var_182_string); // 0x22c NEW_2
	var_183_int = 530975; // 0x22e PushI
	SetMessage(var_183_int); // 0x22f TObjFunc
	ClearReplies(); // 0x231 TObjFunc
	var_184_int = 530977; // 0x233 PushI
	var_185_int = 32291; // 0x234 PushI
	var_186_int = 32298; // 0x235 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x236 TObjFunc
	return 0; // 0x238 Return
	
Label_569:
	var_187_int = 32291; // 0x239 PushI
	var_188_bool = var_11_int == var_187_int; // 0x23a Eq
	if(var_188_bool == 0) goto Label_592; // 0x23b JumpB
	var_189_string = ""; // 0x23c PushV
	var_189_string = "Azart"; // 0x23d MovS
	func_398(var_12_bool, var_189_string); // 0x23e NEW_2
	var_190_int = 530970; // 0x240 PushI
	SetMessage(var_190_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_191_int = 530971; // 0x245 PushI
	var_192_int = 32293; // 0x246 PushI
	var_193_int = 32292; // 0x247 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x248 TObjFunc
	var_194_int = 530989; // 0x24a PushI
	var_195_int = 32315; // 0x24b PushI
	var_196_int = 32314; // 0x24c PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x24d TObjFunc
	return 0; // 0x24f Return
	
Label_592:
	var_197_int = 32315; // 0x250 PushI
	var_198_bool = var_11_int == var_197_int; // 0x251 Eq
	if(var_198_bool == 0) goto Label_610; // 0x252 JumpB
	var_199_string = ""; // 0x253 PushV
	var_199_string = "Serious"; // 0x254 MovS
	func_398(var_12_bool, var_199_string); // 0x255 NEW_2
	var_200_int = 530990; // 0x257 PushI
	SetMessage(var_200_int); // 0x258 TObjFunc
	ClearReplies(); // 0x25a TObjFunc
	var_201_int = 530991; // 0x25c PushI
	var_202_int = 32293; // 0x25d PushI
	var_203_int = 32316; // 0x25e PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x25f TObjFunc
	return 0; // 0x261 Return
	
Label_610:
	var_204_int = 32293; // 0x262 PushI
	var_205_bool = var_11_int == var_204_int; // 0x263 Eq
	if(var_205_bool == 0) goto Label_628; // 0x264 JumpB
	var_206_string = ""; // 0x265 PushV
	var_206_string = "Azart"; // 0x266 MovS
	func_398(var_12_bool, var_206_string); // 0x267 NEW_2
	var_207_int = 530972; // 0x269 PushI
	SetMessage(var_207_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_208_int = 530978; // 0x26e PushI
	var_209_int = 32302; // 0x26f PushI
	var_210_int = 32300; // 0x270 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x271 TObjFunc
	return 0; // 0x273 Return
	
Label_628:
	var_211_int = 32302; // 0x274 PushI
	var_212_bool = var_11_int == var_211_int; // 0x275 Eq
	if(var_212_bool == 0) goto Label_651; // 0x276 JumpB
	var_213_string = ""; // 0x277 PushV
	var_213_string = "Serious"; // 0x278 MovS
	func_398(var_12_bool, var_213_string); // 0x279 NEW_2
	var_214_int = 530980; // 0x27b PushI
	SetMessage(var_214_int); // 0x27c TObjFunc
	ClearReplies(); // 0x27e TObjFunc
	var_215_int = 530981; // 0x280 PushI
	var_216_int = 32301; // 0x281 PushI
	var_217_int = 32303; // 0x282 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x283 TObjFunc
	var_218_int = 530987; // 0x285 PushI
	var_219_int = 32301; // 0x286 PushI
	var_220_int = 32310; // 0x287 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x288 TObjFunc
	return 0; // 0x28a Return
	
Label_651:
	var_221_int = 32301; // 0x28b PushI
	var_222_bool = var_11_int == var_221_int; // 0x28c Eq
	if(var_222_bool == 0) goto Label_669; // 0x28d JumpB
	var_223_string = ""; // 0x28e PushV
	var_223_string = "Serious"; // 0x28f MovS
	func_398(var_12_bool, var_223_string); // 0x290 NEW_2
	var_224_int = 530979; // 0x292 PushI
	SetMessage(var_224_int); // 0x293 TObjFunc
	ClearReplies(); // 0x295 TObjFunc
	var_225_int = 530982; // 0x297 PushI
	var_226_int = 32305; // 0x298 PushI
	var_227_int = 32304; // 0x299 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x29a TObjFunc
	return 0; // 0x29c Return
	
Label_669:
	var_228_int = 32305; // 0x29d PushI
	var_229_bool = var_11_int == var_228_int; // 0x29e Eq
	if(var_229_bool == 0) goto Label_692; // 0x29f JumpB
	var_230_string = ""; // 0x2a0 PushV
	var_230_string = "Azart"; // 0x2a1 MovS
	func_398(var_12_bool, var_230_string); // 0x2a2 NEW_2
	var_231_int = 530983; // 0x2a4 PushI
	SetMessage(var_231_int); // 0x2a5 TObjFunc
	ClearReplies(); // 0x2a7 TObjFunc
	var_232_int = 530931; // 0x2a9 PushI
	var_233_int = 32259; // 0x2aa PushI
	var_234_int = 32258; // 0x2ab PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x2ac TObjFunc
	var_235_int = 530984; // 0x2ae PushI
	var_236_int = 32307; // 0x2af PushI
	var_237_int = 32306; // 0x2b0 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x2b1 TObjFunc
	return 0; // 0x2b3 Return
	
Label_692:
	var_238_int = 32307; // 0x2b4 PushI
	var_239_bool = var_11_int == var_238_int; // 0x2b5 Eq
	if(var_239_bool == 0) goto Label_710; // 0x2b6 JumpB
	var_240_string = ""; // 0x2b7 PushV
	var_240_string = "Azart"; // 0x2b8 MovS
	func_398(var_12_bool, var_240_string); // 0x2b9 NEW_2
	var_241_int = 530985; // 0x2bb PushI
	SetMessage(var_241_int); // 0x2bc TObjFunc
	ClearReplies(); // 0x2be TObjFunc
	var_242_int = 530986; // 0x2c0 PushI
	var_243_int = 32259; // 0x2c1 PushI
	var_244_int = 32308; // 0x2c2 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x2c3 TObjFunc
	return 0; // 0x2c5 Return
	
Label_710:
	var_245_int = 32259; // 0x2c6 PushI
	var_246_bool = var_11_int == var_245_int; // 0x2c7 Eq
	if(var_246_bool == 0) goto Label_733; // 0x2c8 JumpB
	var_247_string = ""; // 0x2c9 PushV
	var_247_string = "Serious"; // 0x2ca MovS
	func_398(var_12_bool, var_247_string); // 0x2cb NEW_2
	var_248_int = 530932; // 0x2cd PushI
	SetMessage(var_248_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_249_int = 530933; // 0x2d2 PushI
	var_250_int = 32261; // 0x2d3 PushI
	var_251_int = 32260; // 0x2d4 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x2d5 TObjFunc
	var_252_int = 530988; // 0x2d7 PushI
	var_253_int = -1; // 0x2d8 PushI
	var_254_int = 32312; // 0x2d9 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x2da TObjFunc
	return 0; // 0x2dc Return
	
Label_733:
	var_255_int = 32261; // 0x2dd PushI
	var_256_bool = var_11_int == var_255_int; // 0x2de Eq
	if(var_256_bool == 0) goto Label_751; // 0x2df JumpB
	var_257_string = ""; // 0x2e0 PushV
	var_257_string = "Serious"; // 0x2e1 MovS
	func_398(var_12_bool, var_257_string); // 0x2e2 NEW_2
	var_258_int = 530934; // 0x2e4 PushI
	SetMessage(var_258_int); // 0x2e5 TObjFunc
	ClearReplies(); // 0x2e7 TObjFunc
	var_259_int = 530935; // 0x2e9 PushI
	var_260_int = -1; // 0x2ea PushI
	var_261_int = 32262; // 0x2eb PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x2ec TObjFunc
	return 0; // 0x2ee Return
	
Label_751:
	var_3_string = 1; // 0x2ef TMovB
	var_262_bool = 0; // 0x2f0 PushV
	func_1404(var_262_bool); // 0x2f1 NEW_2
	if(var_262_bool == 0) goto Label_759; // 0x2f3 JumpB
	lshStopAnimation(); // 0x2f4 Func
	goto Label_761; // 0x2f6 Jump
	
Label_761:
	return 0; // 0x2f9 Return
	
Label_759:
	StopAnimation(); // 0x2f7 Func
	
Label_763:
	return 0; // 0x2fb Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x2fd PushV
	var_12_object = var_11_object; // 0x2fe Mov
	func_1379(var_12_object); // 0x2ff NEW_2
	var_244_int = 0; var_245_object = Obj(); // 0x301 PushV
	var_245_object = var_11_object; // 0x302 Mov
	TaskCall(2); // 0x303 TaskCall
	func_239(var_246_object, var_244_int, var_245_object); // 0x304 NEW_2
	TaskReturn(); // 0x305 TaskReturn
	return 0; // 0x307 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_bool = 0; // 0x30c PushV
	var_14_string = "cleanup"; // 0x30d PushS
	var_15_bool = var_11_string == var_14_string; // 0x30e Eq
	if(var_15_bool == 0) goto Label_803; // 0x30f JumpB
	var_0_object = 1; // 0x310 TMovB
	IsLoaded(var_13_bool); // 0x311 Func
	var_16_bool = 0; // 0x313 PushV
	var_16_bool = 0; // 0x314 MovB
	var_17_bool = var_13_bool == 0; // 0x315 Not
	if(var_17_bool == 0) goto Label_796; // 0x316 JumpB
	var_18_bool = 0; // 0x317 PushV
	func_824(var_18_bool); // 0x318 NEW_2
	if(var_18_bool == 0) goto Label_796; // 0x31a JumpB
	var_16_bool = 1; // 0x31b MovB
	
Label_796:
	if(var_16_bool == 0) goto Label_802; // 0x31c JumpB
	var_19_object = Obj(); // 0x31d PushV
	func_1104(var_19_object); // 0x31e NEW_2
	RemoveActor(var_19_object); // 0x320 Func
	
Label_802:
	goto Label_807; // 0x322 Jump
	
Label_807:
	return 2; // 0x327 Return
	
Label_803:
	var_22_string = "restore"; // 0x323 PushS
	var_23_bool = var_11_string == var_22_string; // 0x324 Eq
	if(var_23_bool == 0) goto Label_807; // 0x325 JumpB
	var_0_object = 0; // 0x326 TMovB
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool)
{
	var_11_bool = 0; // 0x328 PushV
	var_11_bool = 0; // 0x329 MovB
	var_12_object = var_0_object; // 0x32a PushT
	if(var_12_object == 0) goto Label_817; // 0x32b JumpB
	var_13_bool = 0; // 0x32c PushV
	func_824(var_13_bool); // 0x32d NEW_2
	if(var_13_bool == 0) goto Label_817; // 0x32f JumpB
	var_11_bool = 1; // 0x330 MovB
	
Label_817:
	if(var_11_bool == 0) goto Label_823; // 0x331 JumpB
	var_14_object = Obj(); // 0x332 PushV
	func_1104(var_14_object); // 0x333 NEW_2
	RemoveActor(var_14_object); // 0x335 Func
	
Label_823:
	return 0; // 0x337 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool)
{
	
Label_776:
	Hold(); // 0x308 Func
	goto Label_776; // 0x30a Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_826(var_29_object, var_30_float); // 0x5 NEW_2
	var_75_bool = var_28_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_1398(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_1396(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_1400(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_1402(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_1362(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_88_bool = var_25_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_89_bool = 0; var_90_object = Obj(); // 0x2f PushV
	var_91_object = Obj(); // 0x30 PushV
	func_1104(var_91_object); // 0x31 NEW_2
	var_90_object = var_91_object; // 0x32 Mov
	func_913(var_89_bool, var_90_object); // 0x34 NEW_2
	var_184_object = Obj(); var_185_object = Obj(); // 0x36 PushV
	var_184_object = var_18_object; // 0x37 Mov
	var_185_object = var_24_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_186_object, var_187_object, var_188_string, var_189_bool, var_184_object, var_185_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_27_bool); // 0x3d ObjFunc
	
Label_63:
	var_233_bool = var_27_bool == 0; // 0x3f Not
	if(var_233_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_27_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_234_object = Obj(); // 0x46 PushV
	var_234_object = var_18_object; // 0x47 Mov
	func_895(); // 0x48 NEW_2
	StopDialog(var_24_object); // 0x4a Func
	GetReturnValue(var_26_int); // 0x4c ObjFunc
	var_17_int = var_26_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1154(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x482 PushV
	GetGameTime(var_34_float); // 0x483 Func
	var_32_float = var_34_float; // 0x485 Mov
	return 2; // 0x486 Return
}


func_1284(var_45_bool, var_46_object, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; // 0x504 PushV
	var_54_object = Obj(); // 0x505 PushV
	func_1271(var_54_object); // 0x506 NEW_2
	var_51_object = var_54_object; // 0x507 Mov
	Find(var_47_int, var_52_object); // 0x509 ObjFunc
	var_59_bool = var_52_object == 0; // 0x50b Not
	if(var_59_bool == 0) goto Label_1299; // 0x50c JumpB
	var_60_string = "Can't find diary parent with id: "; // 0x50d PushS
	var_61_int = var_60_string + var_47_int; // 0x50e Add
	Trace(var_61_int); // 0x50f Func
	var_45_bool = 0; // 0x511 MovB
	return 6; // 0x512 Return
	
Label_1299:
	AddChild(var_46_object); // 0x513 ObjFunc
	var_62_int = 7; // 0x515 PushI
	SendWorldWndMessage(var_62_int); // 0x516 Func
	GetCategory(var_53_int); // 0x518 ObjFunc
	SetDiarySection(var_53_int); // 0x51a Func
	var_45_bool = 0; // 0x51c MovB
	return 6; // 0x51d Return
}


func_1159(var_144_int)
{
	var_145_float = 0; var_146_float = 0; // 0x487 PushV
	GetGameTime(var_146_float); // 0x488 Func
	var_147_int = 1; // 0x48a PushI
	var_148_int = 0; // 0x48b PushV
	var_149_int = 24; // 0x48c PushI
	var_148_int = var_146_float / var_146_float; // 0x48d Div2
	var_144_int = var_147_int + var_148_int; // 0x48e Add2
	return 2; // 0x48f Return
}


func_139(var_2_object, var_191_string)
{
	var_192_bool = 0; // 0x8c PushV
	func_1404(var_192_bool); // 0x8d NEW_2
	var_193_bool = var_192_bool == 0; // 0x8f Not
	if(var_193_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_194_bool = var_191_string == var_2_object; // 0x92 Eq
	if(var_194_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_195_string = ""; var_196_bool = 0; // 0x95 PushV
	var_195_string = var_191_string; // 0x96 Mov
	var_197_string = ""; // 0x97 PushS
	var_198_bool = var_191_string == var_197_string; // 0x98 Eq
	if(var_198_bool == 0) goto Label_156; // 0x99 JumpB
	var_196_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1067(var_195_string, var_196_bool); // 0x9d NEW_2
	var_2_object = var_191_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_196_bool = 1; // 0x9c MovB
}


func_398(var_2_object, var_287_string)
{
	var_288_bool = 0; // 0x18f PushV
	func_1404(var_288_bool); // 0x190 NEW_2
	var_289_bool = var_288_bool == 0; // 0x192 Not
	if(var_289_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_290_bool = var_287_string == var_2_object; // 0x195 Eq
	if(var_290_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_291_string = ""; var_292_bool = 0; // 0x198 PushV
	var_291_string = var_287_string; // 0x199 Mov
	var_293_string = ""; // 0x19a PushS
	var_294_bool = var_287_string == var_293_string; // 0x19b Eq
	if(var_294_bool == 0) goto Label_415; // 0x19c JumpB
	var_292_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_1067(var_291_string, var_292_bool); // 0x1a0 NEW_2
	var_2_object = var_287_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_292_bool = 1; // 0x19f MovB
}


func_1168()
{
	var_285_string = "oob1Spi4ka1"; // 0x491 PushS
	var_286_int = 1; // 0x492 PushI
	SetVariable(var_285_string, var_286_int); // 0x493 Func
	return 0; // 0x495 Return
}


func_913(var_89_bool, var_90_object)
{
	var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; // 0x391 PushV
	var_98_string = "voice_common"; // 0x392 PushS
	GetVariable(var_98_string, var_96_int); // 0x393 Func
	var_99_int = var_96_int; // 0x395 Push
	if(var_99_int == 0) goto Label_951; // 0x396 JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x397 PushV
	var_101_object = var_90_object; // 0x398 Mov
	func_971(var_101_object); // 0x399 NEW_2
	var_130_bool = var_100_bool == 0; // 0x39b Not
	if(var_130_bool == 0) goto Label_933; // 0x39c JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x39d PushV
	var_132_object = var_90_object; // 0x39e Mov
	func_1008(var_132_object); // 0x39f NEW_2
	var_166_bool = var_131_bool == 0; // 0x3a1 Not
	if(var_166_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_89_bool = 0; // 0x3a3 MovB
	return 4; // 0x3a4 Return
	
Label_933:
	var_167_int = 2; // 0x3a5 PushI
	irand(var_97_int, var_167_int); // 0x3a6 Func
	var_168_int = var_97_int; // 0x3a8 Push
	if(var_168_int == 0) goto Label_946; // 0x3a9 JumpB
	var_169_string = "voice_common"; // 0x3aa PushS
	var_170_int = 1; // 0x3ab PushI
	var_171_int = var_96_int + var_170_int; // 0x3ac Add
	var_172_int = 3; // 0x3ad PushI
	var_173_int = var_171_int / var_172_int; // 0x3ae Mod
	SetVariable(var_169_string, var_173_int); // 0x3af Func
	goto Label_950; // 0x3b1 Jump
	
Label_950:
	goto Label_969; // 0x3b6 Jump
	
Label_969:
	var_89_bool = 1; // 0x3c9 MovB
	return 4; // 0x3ca Return
	
Label_946:
	var_174_string = "voice_common"; // 0x3b2 PushS
	var_175_int = 0; // 0x3b3 PushI
	SetVariable(var_174_string, var_175_int); // 0x3b4 Func
	
Label_951:
	var_176_bool = 0; var_177_object = Obj(); // 0x3b7 PushV
	var_177_object = var_90_object; // 0x3b8 Mov
	func_1008(var_177_object); // 0x3b9 NEW_2
	var_178_bool = var_176_bool == 0; // 0x3bb Not
	if(var_178_bool == 0) goto Label_965; // 0x3bc JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x3bd PushV
	var_180_object = var_90_object; // 0x3be Mov
	func_971(var_180_object); // 0x3bf NEW_2
	var_181_bool = var_179_bool == 0; // 0x3c1 Not
	if(var_181_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_89_bool = 0; // 0x3c3 MovB
	return 4; // 0x3c4 Return
	
Label_965:
	var_182_string = "voice_common"; // 0x3c5 PushS
	var_183_int = 1; // 0x3c6 PushI
	SetVariable(var_182_string, var_183_int); // 0x3c7 Func
}


func_1174()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x496 PushV
	var_21_object = Obj(); // 0x497 PushV
	func_1312(var_21_object); // 0x498 NEW_2
	var_20_object = var_21_object; // 0x499 Mov
	var_28_string = "b1q05Spi4kaGotoLaska"; // 0x49b PushS
	var_29_string = "pt_map_laska"; // 0x49c PushS
	var_30_int = 3; // 0x49d PushI
	var_31_int = 530954; // 0x49e PushI
	var_32_float = 0; // 0x49f PushV
	func_1154(var_32_float); // 0x4a0 NEW_2
	AddMark(var_28_string, var_29_string, var_30_int, var_31_int, var_32_float); // 0x4a2 ObjFunc
	var_35_string = "b1q05Spi4kaGotoMishka"; // 0x4a4 PushS
	var_36_string = "pt_map_mishka"; // 0x4a5 PushS
	var_37_int = 3; // 0x4a6 PushI
	var_38_int = 530955; // 0x4a7 PushI
	var_39_float = 0; // 0x4a8 PushV
	func_1154(var_39_float); // 0x4a9 NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x4ab ObjFunc
	func_1258(); // 0x4ae NEW_2
	var_63_bool = 0; var_64_string = ""; var_65_string = ""; // 0x4b0 PushV
	var_64_string = "quest_b1_05"; // 0x4b1 MovS
	var_65_string = "completed"; // 0x4b2 MovS
	func_1142(var_63_bool, var_64_string, var_65_string); // 0x4b3 NEW_2
	return 2; // 0x4b5 Return
}


func_1051(var_217_string)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x41b PushV
	lshHasAnimation(var_221_bool, var_217_string); // 0x41c Func
	var_224_bool = var_221_bool; // 0x41e Push
	if(var_224_bool == 0) goto Label_1062; // 0x41f JumpB
	lshGetAnimTimes(var_217_string, var_222_float, var_223_float); // 0x420 Func
	var_225_bool = 0; // 0x422 PushB
	lshPlayAnimation(var_222_float, var_223_float, var_225_bool); // 0x423 Func
	goto Label_1066; // 0x425 Jump
	
Label_1066:
	return 6; // 0x42a Return
	
Label_1062:
	var_226_string = "Can't find lsh animation : "; // 0x426 PushS
	var_227_int = var_226_string + var_217_string; // 0x427 Add
	Trace(var_227_int); // 0x428 Func
}


func_1312(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x520 PushV
	GetMainOutdoorScene(var_24_object); // 0x521 Func
	var_26_bool = var_24_object == 0; // 0x523 NullEq
	if(var_26_bool == 0) goto Label_1323; // 0x524 JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x525 PushS
	Trace(var_27_string); // 0x526 Func
	var_25_object = 0; // 0x528 SetNull
	var_21_object = var_25_object; // 0x529 Mov
	return 4; // 0x52a Return
	
Label_1323:
	GetMap(var_25_object); // 0x52b ObjFunc
	var_21_object = var_25_object; // 0x52d Mov
	return 4; // 0x52e Return
}


func_1067(var_195_string, var_196_bool)
{
	var_199_bool = 0; var_200_float = 0; var_201_float = 0; var_202_bool = 0; var_203_float = 0; var_204_float = 0; // 0x42b PushV
	lshHasAnimation(var_202_bool, var_195_string); // 0x42c Func
	var_205_bool = var_202_bool; // 0x42e Push
	if(var_205_bool == 0) goto Label_1077; // 0x42f JumpB
	lshGetAnimTimes(var_195_string, var_203_float, var_204_float); // 0x430 Func
	lshPlayAnimation(var_203_float, var_204_float, var_196_bool); // 0x432 Func
	goto Label_1081; // 0x434 Jump
	
Label_1081:
	return 6; // 0x439 Return
	
Label_1077:
	var_206_string = "Can't find lsh animation : "; // 0x435 PushS
	var_207_int = var_206_string + var_195_string; // 0x436 Add
	Trace(var_207_int); // 0x437 Func
}


func_1329(var_83_object, var_84_string, var_85_float)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; // 0x531 PushV
	GetMainOutdoorScene(var_93_object); // 0x532 Func
	var_95_bool = var_93_object == 0; // 0x534 NullEq
	if(var_95_bool == 0) goto Label_1338; // 0x535 JumpB
	var_96_string = "Can't find main outdoor scene"; // 0x536 PushS
	Trace(var_96_string); // 0x537 Func
	return 8; // 0x539 Return
	
Label_1338:
	GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector); // 0x53a ObjFunc
	var_97_bool = var_94_bool == 0; // 0x53c Not
	if(var_97_bool == 0) goto Label_1348; // 0x53d JumpB
	var_98_string = "Warning: outdoor scene locator "; // 0x53e PushS
	var_99_int = var_98_string + var_84_string; // 0x53f Add
	var_100_string = " doesnt exist"; // 0x540 PushS
	var_101_int = var_99_int + var_100_string; // 0x541 Add
	Trace(var_101_int); // 0x542 Func
	
Label_1348:
	GetMap(var_83_object); // 0x544 ObjFunc
	var_102_bool = var_83_object == 0; // 0x546 NullEq
	if(var_102_bool == 0) goto Label_1356; // 0x547 JumpB
	var_103_string = "Can't find map"; // 0x548 PushS
	Trace(var_103_string); // 0x549 Func
	return 8; // 0x54b Return
	
Label_1356:
	var_104_float = GetByIndex(var_91_cvector, 0); // 0x54c PushE
	var_105_float = GetByIndex(var_91_cvector, 2); // 0x54d PushE
	SetMapParams(var_104_float, var_105_float, var_85_float); // 0x54e ObjFunc
	return 8; // 0x550 Return
}


func_1207()
{
	var_83_object = Obj(); var_84_string = ""; var_85_float = 0; // 0x4b8 PushV
	var_86_object = Obj(); // 0x4b9 PushV
	func_1312(var_86_object); // 0x4ba NEW_2
	var_83_object = var_86_object; // 0x4bb Mov
	var_84_string = "pt_map_laska"; // 0x4bd MovS
	var_85_float = 2; // 0x4be MovI
	func_1329(var_83_object, var_84_string, var_85_float); // 0x4bf NEW_2
	var_106_object = Obj(); // 0x4c1 PushV
	func_1312(var_106_object); // 0x4c2 NEW_2
	ShowMap(var_106_object); // 0x4c4 ObjFunc
	return 0; // 0x4c6 Return
}


func_824(var_13_bool)
{
	var_13_bool = 1; // 0x338 MovB
	return 0; // 0x339 Return
}


func_1082(var_123_bool, var_124_string)
{
	var_125_bool = 0; var_126_bool = 0; // 0x43a PushV
	var_127_bool = 0; // 0x43b PushV
	func_1404(var_127_bool); // 0x43c NEW_2
	if(var_127_bool == 0) goto Label_1095; // 0x43e JumpB
	lshHasSpeech(var_126_bool, var_124_string); // 0x43f Func
	var_128_bool = var_126_bool; // 0x441 Push
	if(var_128_bool == 0) goto Label_1095; // 0x442 JumpB
	lshPlaySpeech(var_124_string); // 0x443 Func
	var_123_bool = 1; // 0x445 MovB
	return 2; // 0x446 Return
	
Label_1095:
	var_123_bool = 0; // 0x447 MovB
	return 2; // 0x448 Return
}


func_826(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x33a PushV
	GetPosition(var_41_cvector); // 0x33b ObjFunc
	GetEyesHeight(var_40_float); // 0x33d ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x33f PushE
	var_49_float = var_49_float + var_40_float; // 0x340 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x341 PopE
	GetPosition(var_42_cvector); // 0x342 Func
	GetEyesHeight(var_40_float); // 0x344 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x346 PushE
	var_50_float = var_50_float + var_40_float; // 0x347 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x348 PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x349 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x34a PushE
	var_51_float = 0; // 0x34b MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x34c PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x34d Or
	var_53_float = sqrt(var_52_int); // 0x34e Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x34f Div2
	var_44_cvector = -var_43_cvector; // 0x350 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x351 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x352 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x353 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x354 Xor2
	func_1110(var_55_cvector, var_56_cvector); // 0x355 NEW_2
	var_63_int = 25; // 0x357 PushI
	var_64_float = var_55_cvector * var_63_int; // 0x358 Mult
	var_65_int = var_54_float + var_64_float; // 0x359 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x35a PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x35b Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x35c Add2
	IsOverrideActive(var_47_bool); // 0x35d Func
	var_67_bool = var_47_bool; // 0x35f Push
	if(var_67_bool == 0) goto Label_867; // 0x360 JumpB
	var_28_bool = 0; // 0x361 MovB
	return 18; // 0x362 Return
	
Label_867:
	StopWorld(); // 0x363 Func
	var_68_bool = 1; // 0x365 PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x366 Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x368 PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x369 PushE
	Rotate(var_69_float, var_70_float); // 0x36a Func
	var_71_bool = 0; // 0x36c PushV
	func_1404(var_71_bool); // 0x36d NEW_2
	if(var_71_bool == 0) goto Label_881; // 0x36f JumpB
	goto Label_889; // 0x370 Jump
	
Label_889:
	CameraWaitForPlayFinish(); // 0x379 Func
	ResumeWorld(); // 0x37b Func
	var_28_bool = 1; // 0x37d MovB
	return 18; // 0x37e Return
	
Label_881:
	var_72_string = "head"; // 0x371 PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x372 Func
	var_73_bool = var_48_bool; // 0x374 Push
	if(var_73_bool == 0) goto Label_889; // 0x375 JumpB
	var_74_string = "head"; // 0x376 PushS
	LookAsyncCamera(var_74_string); // 0x377 Func
}


func_320(var_0_object, var_1_object, var_2_object, var_3_string, var_268_object, var_269_object)
{
	var_0_object = var_269_object; // 0x141 TMov
	var_1_object = var_268_object; // 0x142 TMov
	var_3_string = 0; // 0x143 TMovB
	var_274_int = 1; // 0x144 PushI
	if(var_274_int == 0) goto Label_368; // 0x145 JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x146 PushV
	var_276_object = var_1_object; // 0x147 MovT
	func_1246(var_276_object); // 0x148 NEW_2
	if(var_275_bool == 0) goto Label_351; // 0x14a JumpB
	var_283_object = Obj(); var_284_object = Obj(); // 0x14b PushV
	var_283_object = var_1_object; // 0x14c MovT
	var_284_object = var_0_object; // 0x14d MovT
	func_1168(); // 0x14e NEW_2
	var_287_string = ""; // 0x150 PushV
	var_287_string = "Fear"; // 0x151 MovS
	func_398(var_269_object, var_287_string); // 0x152 NEW_2
	var_295_int = 530928; // 0x154 PushI
	SetMessage(var_295_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_296_int = 530929; // 0x159 PushI
	var_297_int = 32288; // 0x15a PushI
	var_298_int = 32256; // 0x15b PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x15c TObjFunc
	goto Label_368; // 0x15e Jump
	
Label_368:
	var_299_bool = 0; // 0x170 PushV
	func_1404(var_299_bool); // 0x171 NEW_2
	if(var_299_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_300_string = var_3_string; // 0x176 PushT
	if(var_300_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_301_string = ""; // 0x179 PushV
	var_301_string = var_2_object; // 0x17a MovT
	func_1051(var_301_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_302_string = "all"; // 0x17f PushS
	var_303_string = "idle"; // 0x180 PushS
	PlayAnimation(var_302_string, var_303_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_304_string = var_3_string; // 0x185 PushT
	if(var_304_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_305_string = "all"; // 0x188 PushS
	var_306_string = "idle"; // 0x189 PushS
	PlayAnimation(var_305_string, var_306_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
	
Label_351:
	var_307_string = ""; // 0x15f PushV
	var_307_string = "Neutral"; // 0x160 MovS
	func_398(var_269_object, var_307_string); // 0x161 NEW_2
	var_308_int = 530936; // 0x163 PushI
	SetMessage(var_308_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_309_int = 530937; // 0x168 PushI
	var_310_int = -1; // 0x169 PushI
	var_311_int = 32264; // 0x16a PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
}


func_1223()
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0; // 0x4c8 PushV
	var_118_object = Obj(); // 0x4c9 PushV
	func_1312(var_118_object); // 0x4ca NEW_2
	var_115_object = var_118_object; // 0x4cb Mov
	var_116_string = "pt_map_mishka"; // 0x4cd MovS
	var_117_float = 2; // 0x4ce MovI
	func_1329(var_115_object, var_116_string, var_117_float); // 0x4cf NEW_2
	var_119_object = Obj(); // 0x4d1 PushV
	func_1312(var_119_object); // 0x4d2 NEW_2
	ShowMap(var_119_object); // 0x4d4 ObjFunc
	return 0; // 0x4d6 Return
}


func_1097()
{
	var_14_bool = 0; // 0x449 PushV
	func_1404(var_14_bool); // 0x44a NEW_2
	if(var_14_bool == 0) goto Label_1103; // 0x44c JumpB
	lshStopSpeech(); // 0x44d Func
	
Label_1103:
	return 0; // 0x44f Return
}


func_971(var_100_bool)
{
	var_102_string = ""; var_103_int = 0; var_104_bool = 0; var_105_int = 0; var_106_string = ""; var_107_string = ""; var_108_int = 0; var_109_bool = 0; var_110_int = 0; var_111_string = ""; // 0x3cb PushV
	var_107_string = "c"; // 0x3cc MovS
	var_108_int = 0; // 0x3cd MovI
	
Label_974:
	var_112_int = 1; // 0x3ce PushI
	if(var_112_int == 0) goto Label_987; // 0x3cf JumpB
	var_113_int = 1; // 0x3d0 PushI
	var_114_int = var_108_int + var_113_int; // 0x3d1 Add
	var_115_int = var_107_string + var_114_int; // 0x3d2 Add
	HasProperty(var_115_int, var_109_bool); // 0x3d3 ObjFunc
	var_116_bool = var_109_bool == 0; // 0x3d5 Not
	if(var_116_bool == 0) goto Label_984; // 0x3d6 JumpB
	goto Label_987; // 0x3d7 Jump
	
Label_987:
	var_117_bool = var_108_int == 0; // 0x3db Not
	if(var_117_bool == 0) goto Label_991; // 0x3dc JumpB
	var_100_bool = 0; // 0x3dd MovB
	return 10; // 0x3de Return
	
Label_991:
	var_110_int = 0; // 0x3df MovI
	var_118_int = 1; // 0x3e0 PushI
	var_119_bool = var_108_int > var_118_int; // 0x3e1 GT
	if(var_119_bool == 0) goto Label_997; // 0x3e2 JumpB
	irand(var_110_int, var_108_int); // 0x3e3 Func
	
Label_997:
	var_120_int = 1; // 0x3e5 PushI
	var_121_int = var_110_int + var_120_int; // 0x3e6 Add
	var_122_int = var_107_string + var_121_int; // 0x3e7 Add
	GetProperty(var_122_int, var_111_string); // 0x3e8 ObjFunc
	var_123_bool = 0; var_124_string = ""; // 0x3ea PushV
	var_124_string = var_111_string; // 0x3eb Mov
	func_1082(var_123_bool, var_124_string); // 0x3ec NEW_2
	var_100_bool = var_123_bool; // 0x3ed Mov
	return 10; // 0x3ef Return
	
Label_984:
	var_129_int = 1; // 0x3d8 PushI
	var_108_int = var_108_int + var_129_int; // 0x3d9 Add2
	goto Label_974; // 0x3da Jump
}


func_1104(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x450 PushV
	self(var_16_object); // 0x451 Func
	var_14_object = var_16_object; // 0x453 Mov
	return 2; // 0x454 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_184_object, var_185_object)
{
	var_0_object = var_185_object; // 0x52 TMov
	var_1_object = var_184_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_190_int = 1; // 0x55 PushI
	if(var_190_int == 0) goto Label_109; // 0x56 JumpB
	var_191_string = ""; // 0x57 PushV
	var_191_string = "Neutral"; // 0x58 MovS
	func_139(var_185_object, var_191_string); // 0x59 NEW_2
	var_208_int = 520803; // 0x5b PushI
	SetMessage(var_208_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_209_int = 520804; // 0x60 PushI
	var_210_int = 29221; // 0x61 PushI
	var_211_int = 22021; // 0x62 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x63 TObjFunc
	var_212_int = 527876; // 0x65 PushI
	var_213_int = 29224; // 0x66 PushI
	var_214_int = 29223; // 0x67 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_215_bool = 0; // 0x6d PushV
	func_1404(var_215_bool); // 0x6e NEW_2
	if(var_215_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_216_string = var_3_string; // 0x73 PushT
	if(var_216_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_217_string = ""; // 0x76 PushV
	var_217_string = var_2_object; // 0x77 MovT
	func_1051(var_217_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_228_string = "all"; // 0x7c PushS
	var_229_string = "idle"; // 0x7d PushS
	PlayAnimation(var_228_string, var_229_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_230_string = var_3_string; // 0x82 PushT
	if(var_230_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_231_string = "all"; // 0x85 PushS
	var_232_string = "idle"; // 0x86 PushS
	PlayAnimation(var_231_string, var_232_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1362(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x552 PushV
	var_83_string = "branch"; // 0x553 PushS
	GetVariable(var_83_string, var_82_int); // 0x554 Func
	var_84_int = 0; // 0x556 PushI
	var_85_bool = var_82_int == var_84_int; // 0x557 Eq
	if(var_85_bool == 0) goto Label_1372; // 0x558 JumpB
	var_80_int = 1; // 0x559 MovI
	return 2; // 0x55a Return
	
Label_1372:
	var_86_int = 1; // 0x55c PushI
	var_87_bool = var_82_int == var_86_int; // 0x55d Eq
	if(var_87_bool == 0) goto Label_1377; // 0x55e JumpB
	var_80_int = 2; // 0x55f MovI
	return 2; // 0x560 Return
	
Label_1377:
	var_80_int = 3; // 0x561 MovI
	return 2; // 0x562 Return
}


func_1110(var_55_cvector, var_56_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x456 PushV
	var_60_int = var_56_cvector | var_56_cvector; // 0x457 Or
	var_59_float = sqrt(var_60_int); // 0x458 Sqrt2
	var_61_float = 0.0; // 0x459 PushF
	var_62_bool = var_59_float < var_61_float; // 0x45a LT
	if(var_62_bool == 0) goto Label_1118; // 0x45b JumpB
	var_55_cvector = CVector(0.0, 0.0, 0.0); // 0x45c MovV
	return 2; // 0x45d Return
	
Label_1118:
	var_55_cvector = var_56_cvector / var_56_cvector; // 0x45e Div2
	return 2; // 0x45f Return
}


func_1239()
{
	var_71_string = ""; var_72_bool = 0; // 0x4d8 PushV
	var_71_string = "vagon_mishka@door1"; // 0x4d9 MovS
	var_72_bool = 0; // 0x4da MovB
	func_1125(var_71_string, var_72_bool); // 0x4db NEW_2
	return 0; // 0x4dd Return
}


func_1246(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0x4df PushV
	var_278_string = "oob1Spi4ka1"; // 0x4e0 MovS
	func_1120(var_277_int, var_278_string); // 0x4e1 NEW_2
	var_281_int = 0; // 0x4e3 PushI
	var_282_bool = var_277_int == var_281_int; // 0x4e4 Eq
	if(var_282_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_275_bool = 1; // 0x4e6 MovB
	return 0; // 0x4e7 Return
	
Label_1256:
	var_275_bool = 0; // 0x4e8 MovB
	return 0; // 0x4e9 Return
}


func_1120(var_277_int, var_278_string)
{
	var_279_int = 0; var_280_int = 0; // 0x460 PushV
	GetVariable(var_278_string, var_280_int); // 0x461 Func
	var_277_int = var_280_int; // 0x463 Mov
	return 2; // 0x464 Return
}


func_1379(var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x563 PushV
	var_15_string = "mt_spi4ka"; // 0x564 PushS
	GetVariable(var_15_string, var_14_int); // 0x565 Func
	var_16_bool = var_14_int == 0; // 0x567 Not
	if(var_16_bool == 0) goto Label_1395; // 0x568 JumpB
	var_17_int = 0; var_18_object = Obj(); // 0x569 PushV
	var_18_object = var_12_object; // 0x56a Mov
	TaskCall(0); // 0x56b TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x56c NEW_2
	TaskReturn(); // 0x56d TaskReturn
	var_242_string = "mt_spi4ka"; // 0x56f PushS
	var_243_int = 1; // 0x570 PushI
	SetVariable(var_242_string, var_243_int); // 0x571 Func
	
Label_1395:
	return 2; // 0x573 Return
}


func_1125(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x465 PushV
	FindActor(var_74_object, var_71_string); // 0x466 Func
	var_75_bool = var_74_object == 0; // 0x468 Not
	if(var_75_bool == 0) goto Label_1137; // 0x469 JumpB
	var_76_string = "Door "; // 0x46a PushS
	var_77_int = var_76_string + var_71_string; // 0x46b Add
	var_78_string = " not found"; // 0x46c PushS
	var_79_int = var_77_int + var_78_string; // 0x46d Add
	Trace(var_79_int); // 0x46e Func
	goto Label_1140; // 0x470 Jump
	
Label_1140:
	return 2; // 0x474 Return
	
Label_1137:
	var_80_string = "locked"; // 0x471 PushS
	SetProperty(var_80_string, var_72_bool); // 0x472 ObjFunc
}


func_1258()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x4ea PushV
	var_42_int = 584; // 0x4eb PushI
	var_43_int = 2; // 0x4ec PushI
	var_44_int = 530953; // 0x4ed PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x4ee Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x4f0 PushV
	var_46_object = var_41_object; // 0x4f1 Mov
	var_47_int = 582; // 0x4f2 MovI
	func_1284(var_45_bool, var_46_object, var_47_int); // 0x4f3 NEW_2
	return 2; // 0x4f5 Return
}


func_239(var_0_object, var_244_int, var_245_object)
{
	var_247_object = Obj(); var_248_bool = 0; var_249_int = 0; var_250_bool = 0; var_251_object = Obj(); var_252_bool = 0; var_253_int = 0; var_254_bool = 0; // 0xef PushV
	var_0_object = var_245_object; // 0xf0 TMov
	var_255_bool = 0; var_256_object = Obj(); var_257_float = 0; // 0xf1 PushV
	var_256_object = var_245_object; // 0xf2 Mov
	var_257_float = 70.0; // 0xf3 MovF
	func_826(var_256_object, var_257_float); // 0xf4 NEW_2
	var_258_bool = var_255_bool == 0; // 0xf6 Not
	if(var_258_bool == 0) goto Label_250; // 0xf7 JumpB
	var_244_int = -2; // 0xf8 MovI
	return 8; // 0xf9 Return
	
Label_250:
	CreateDialog(var_251_object); // 0xfa Func
	var_259_int = 0; // 0xfc PushV
	func_1398(var_259_int); // 0xfd NEW_2
	SetNPCName(var_259_int); // 0xff ObjFunc
	var_260_int = 0; // 0x101 PushV
	func_1396(var_260_int); // 0x102 NEW_2
	SetNPCDescription(var_260_int); // 0x104 ObjFunc
	var_261_string = ""; // 0x106 PushV
	func_1400(var_261_string); // 0x107 NEW_2
	SetPhoto(var_261_string); // 0x109 ObjFunc
	var_262_string = ""; // 0x10b PushV
	func_1402(var_262_string); // 0x10c NEW_2
	SetPhoto2(var_262_string); // 0x10e ObjFunc
	var_263_int = 0; // 0x110 PushV
	func_1362(var_263_int); // 0x111 NEW_2
	SetPlayerName(var_263_int); // 0x113 ObjFunc
	var_253_int = -1; // 0x115 MovI
	IsOverrideActive(var_252_bool); // 0x116 Func
	var_264_bool = var_252_bool; // 0x118 Push
	if(var_264_bool == 0) goto Label_284; // 0x119 JumpB
	var_244_int = -2; // 0x11a MovI
	return 8; // 0x11b Return
	
Label_284:
	DoDialog(var_251_object); // 0x11c Func
	var_265_bool = 0; var_266_object = Obj(); // 0x11e PushV
	var_267_object = Obj(); // 0x11f PushV
	func_1104(var_267_object); // 0x120 NEW_2
	var_266_object = var_267_object; // 0x121 Mov
	func_913(var_265_bool, var_266_object); // 0x123 NEW_2
	var_268_object = Obj(); var_269_object = Obj(); // 0x125 PushV
	var_268_object = var_245_object; // 0x126 Mov
	var_269_object = var_251_object; // 0x127 Mov
	TaskCall(3); // 0x128 TaskCall
	func_320(var_270_object, var_271_object, var_272_string, var_273_bool, var_268_object, var_269_object); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	IsDialogEnd(var_254_bool); // 0x12c ObjFunc
	
Label_302:
	var_312_bool = var_254_bool == 0; // 0x12e Not
	if(var_312_bool == 0) goto Label_309; // 0x12f JumpB
	sync(); // 0x130 Func
	IsDialogEnd(var_254_bool); // 0x132 ObjFunc
	goto Label_302; // 0x134 Jump
	
Label_309:
	var_313_object = Obj(); // 0x135 PushV
	var_313_object = var_245_object; // 0x136 Mov
	func_895(); // 0x137 NEW_2
	StopDialog(var_251_object); // 0x139 Func
	GetReturnValue(var_253_int); // 0x13b ObjFunc
	var_244_int = var_253_int; // 0x13d Mov
	return 8; // 0x13e Return
}


func_1008(var_131_bool)
{
	var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; // 0x3f0 PushV
	var_143_string = "d"; // 0x3f1 PushS
	var_144_int = 0; // 0x3f2 PushV
	func_1159(var_144_int); // 0x3f3 NEW_2
	var_150_int = var_143_string + var_144_int; // 0x3f5 Add
	var_151_string = "m"; // 0x3f6 PushS
	var_138_string = var_150_int + var_151_string; // 0x3f7 Add2
	var_139_int = 0; // 0x3f8 MovI
	
Label_1017:
	var_152_int = 1; // 0x3f9 PushI
	if(var_152_int == 0) goto Label_1030; // 0x3fa JumpB
	var_153_int = 1; // 0x3fb PushI
	var_154_int = var_139_int + var_153_int; // 0x3fc Add
	var_155_int = var_138_string + var_154_int; // 0x3fd Add
	HasProperty(var_155_int, var_140_bool); // 0x3fe ObjFunc
	var_156_bool = var_140_bool == 0; // 0x400 Not
	if(var_156_bool == 0) goto Label_1027; // 0x401 JumpB
	goto Label_1030; // 0x402 Jump
	
Label_1030:
	var_157_bool = var_139_int == 0; // 0x406 Not
	if(var_157_bool == 0) goto Label_1034; // 0x407 JumpB
	var_131_bool = 0; // 0x408 MovB
	return 10; // 0x409 Return
	
Label_1034:
	var_141_int = 0; // 0x40a MovI
	var_158_int = 1; // 0x40b PushI
	var_159_bool = var_139_int > var_158_int; // 0x40c GT
	if(var_159_bool == 0) goto Label_1040; // 0x40d JumpB
	irand(var_141_int, var_139_int); // 0x40e Func
	
Label_1040:
	var_160_int = 1; // 0x410 PushI
	var_161_int = var_141_int + var_160_int; // 0x411 Add
	var_162_int = var_138_string + var_161_int; // 0x412 Add
	GetProperty(var_162_int, var_142_string); // 0x413 ObjFunc
	var_163_bool = 0; var_164_string = ""; // 0x415 PushV
	var_164_string = var_142_string; // 0x416 Mov
	func_1082(var_163_bool, var_164_string); // 0x417 NEW_2
	var_131_bool = var_163_bool; // 0x418 Mov
	return 10; // 0x41a Return
	
Label_1027:
	var_165_int = 1; // 0x403 PushI
	var_139_int = var_139_int + var_165_int; // 0x404 Add2
	goto Label_1017; // 0x405 Jump
}


func_1396(var_77_int)
{
	var_77_int = 515552; // 0x574 MovI
	return 0; // 0x575 Return
}


func_1398(var_76_int)
{
	var_76_int = 502877; // 0x576 MovI
	return 0; // 0x577 Return
}


func_1142(var_63_bool, var_64_string, var_65_string)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x476 PushV
	FindActor(var_67_object, var_64_string); // 0x477 Func
	var_68_bool = var_67_object == 0; // 0x479 NullEq
	if(var_68_bool == 0) goto Label_1149; // 0x47a JumpB
	var_63_bool = 0; // 0x47b MovB
	return 2; // 0x47c Return
	
Label_1149:
	Trigger(var_67_object, var_65_string); // 0x47d Func
	var_63_bool = 1; // 0x47f MovB
	return 2; // 0x480 Return
}


func_1400(var_78_string)
{
	var_78_string = "ui/NPC_Spi4ka.png"; // 0x578 MovS
	return 0; // 0x579 Return
}


func_1402(var_79_string)
{
	var_79_string = "ui/NPC_Spi4ka_b.png"; // 0x57a MovS
	return 0; // 0x57b Return
}


func_1271(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x4f7 PushV
	GetDiaryRoot(var_56_object); // 0x4f8 Func
	var_57_bool = var_56_object == 0; // 0x4fa Not
	if(var_57_bool == 0) goto Label_1281; // 0x4fb JumpB
	var_58_string = "Can't retrieve diary root"; // 0x4fc PushS
	Trace(var_58_string); // 0x4fd Func
	var_54_object = 0; // 0x4ff MovB
	return 2; // 0x500 Return
	
Label_1281:
	var_54_object = var_56_object; // 0x501 Mov
	return 2; // 0x502 Return
}


func_1404(var_71_bool)
{
	var_71_bool = 1; // 0x57c MovB
	return 0; // 0x57d Return
}


func_895()
{
	var_235_bool = 0; var_236_bool = 0; // 0x37f PushV
	var_237_bool = 1; // 0x380 PushB
	CameraSwitchToNormal(var_237_bool); // 0x381 Func
	var_238_bool = 0; // 0x383 PushV
	func_1404(var_238_bool); // 0x384 NEW_2
	if(var_238_bool == 0) goto Label_904; // 0x386 JumpB
	goto Label_912; // 0x387 Jump
	
Label_912:
	return 2; // 0x390 Return
	
Label_904:
	var_239_string = "head"; // 0x388 PushS
	HasAnimationTrack(var_236_bool, var_239_string); // 0x389 Func
	var_240_bool = var_236_bool; // 0x38b Push
	if(var_240_bool == 0) goto Label_912; // 0x38c JumpB
	var_241_string = "head"; // 0x38d PushS
	UnlookAsync(var_241_string); // 0x38e Func
}


