task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xf6 PushI
	if(var_12_int == 0) goto Label_624; // 0xf7 JumpB
	func_959(); // 0xf9 NEW_2
	var_14_int = 23302; // 0xfb PushI
	var_15_bool = var_11_object == var_14_int; // 0xfc Eq
	if(var_15_bool == 0) goto Label_259; // 0xfd JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xfe PushV
	var_16_object = var_1_object; // 0xff MovT
	var_17_object = var_0_object; // 0x100 MovT
	func_1065(); // 0x101 NEW_2
	
Label_259:
	var_20_int = 23324; // 0x103 PushI
	var_21_bool = var_11_object == var_20_int; // 0x104 Eq
	if(var_21_bool == 0) goto Label_267; // 0x105 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x106 PushV
	var_22_object = var_1_object; // 0x107 MovT
	var_23_object = var_0_object; // 0x108 MovT
	func_1071(); // 0x109 NEW_2
	
Label_267:
	var_26_int = 23304; // 0x10b PushI
	var_27_bool = var_11_object == var_26_int; // 0x10c Eq
	if(var_27_bool == 0) goto Label_280; // 0x10d JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x10e PushV
	var_28_object = var_1_object; // 0x10f MovT
	var_29_object = var_0_object; // 0x110 MovT
	func_1077(); // 0x111 NEW_2
	var_40_object = Obj(); var_41_object = Obj(); // 0x113 PushV
	var_40_object = var_1_object; // 0x114 MovT
	var_41_object = var_0_object; // 0x115 MovT
	func_1058(); // 0x116 NEW_2
	
Label_280:
	var_48_int = 23301; // 0x118 PushI
	var_49_bool = var_10_bool == var_48_int; // 0x119 Eq
	if(var_49_bool == 0) goto Label_394; // 0x11a JumpB
	var_50_bool = 0; var_51_object = Obj(); // 0x11b PushV
	var_51_object = var_1_object; // 0x11c MovT
	func_1084(var_50_bool, var_51_object); // 0x11d NEW_2
	var_99_bool = var_50_bool == 0; // 0x11f Not
	if(var_99_bool == 0) goto Label_324; // 0x120 JumpB
	var_100_string = ""; // 0x121 PushV
	var_100_string = "Neutral"; // 0x122 MovS
	func_223(var_11_object, var_100_string); // 0x123 NEW_2
	var_117_int = 522134; // 0x125 PushI
	SetMessage(var_117_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_118_bool = 0; var_119_object = Obj(); // 0x12a PushV
	var_119_object = var_1_object; // 0x12b MovT
	func_1116(var_119_object); // 0x12c NEW_2
	if(var_118_bool == 0) goto Label_308; // 0x12e JumpB
	var_126_int = 522135; // 0x12f PushI
	var_127_int = 23323; // 0x130 PushI
	var_128_int = 23302; // 0x131 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x132 TObjFunc
	
Label_308:
	var_129_bool = 0; var_130_object = Obj(); // 0x134 PushV
	var_130_object = var_1_object; // 0x135 MovT
	func_1128(var_130_object); // 0x136 NEW_2
	if(var_129_bool == 0) goto Label_318; // 0x138 JumpB
	var_135_int = 522157; // 0x139 PushI
	var_136_int = 23325; // 0x13a PushI
	var_137_int = 23324; // 0x13b PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x13c TObjFunc
	
Label_318:
	var_138_int = 522166; // 0x13e PushI
	var_139_int = -1; // 0x13f PushI
	var_140_int = 23333; // 0x140 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_141_bool = 0; var_142_object = Obj(); // 0x144 PushV
	var_142_object = var_1_object; // 0x145 MovT
	func_1094(var_141_bool, var_142_object); // 0x146 NEW_2
	var_152_bool = var_141_bool == 0; // 0x148 Not
	if(var_152_bool == 0) goto Label_345; // 0x149 JumpB
	var_153_string = ""; // 0x14a PushV
	var_153_string = "Neutral"; // 0x14b MovS
	func_223(var_11_object, var_153_string); // 0x14c NEW_2
	var_154_int = 522130; // 0x14e PushI
	SetMessage(var_154_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_155_int = 522140; // 0x153 PushI
	var_156_int = -1; // 0x154 PushI
	var_157_int = 23307; // 0x155 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_158_bool = 0; // 0x159 PushV
	var_158_bool = 0; // 0x15a MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x15b PushV
	var_160_object = var_1_object; // 0x15c MovT
	func_1104(var_160_object); // 0x15d NEW_2
	if(var_159_bool == 0) goto Label_358; // 0x15f JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x160 PushV
	var_166_object = var_1_object; // 0x161 MovT
	func_1084(var_165_bool, var_166_object); // 0x162 NEW_2
	if(var_165_bool == 0) goto Label_358; // 0x164 JumpB
	var_158_bool = 1; // 0x165 MovB
	
Label_358:
	if(var_158_bool == 0) goto Label_379; // 0x166 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x167 PushV
	var_167_object = var_1_object; // 0x168 MovT
	var_168_object = var_0_object; // 0x169 MovT
	func_1052(); // 0x16a NEW_2
	var_171_string = ""; // 0x16c PushV
	var_171_string = "Neutral"; // 0x16d MovS
	func_223(var_11_object, var_171_string); // 0x16e NEW_2
	var_172_int = 522136; // 0x170 PushI
	SetMessage(var_172_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_173_int = 522137; // 0x175 PushI
	var_174_int = -1; // 0x176 PushI
	var_175_int = 23304; // 0x177 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_176_string = ""; // 0x17b PushV
	var_176_string = "Neutral"; // 0x17c MovS
	func_223(var_11_object, var_176_string); // 0x17d NEW_2
	var_177_int = 522138; // 0x17f PushI
	SetMessage(var_177_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_178_int = 522139; // 0x184 PushI
	var_179_int = -1; // 0x185 PushI
	var_180_int = 23306; // 0x186 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_181_int = 23308; // 0x18a PushI
	var_182_bool = var_10_bool == var_181_int; // 0x18b Eq
	if(var_182_bool == 0) goto Label_397; // 0x18c JumpB
	
Label_397:
	var_183_int = 23311; // 0x18d PushI
	var_184_bool = var_10_bool == var_183_int; // 0x18e Eq
	if(var_184_bool == 0) goto Label_420; // 0x18f JumpB
	var_185_string = ""; // 0x190 PushV
	var_185_string = "Neutral"; // 0x191 MovS
	func_223(var_11_object, var_185_string); // 0x192 NEW_2
	var_186_int = 522144; // 0x194 PushI
	SetMessage(var_186_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_187_int = 522145; // 0x199 PushI
	var_188_int = 23314; // 0x19a PushI
	var_189_int = 23312; // 0x19b PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x19c TObjFunc
	var_190_int = 522146; // 0x19e PushI
	var_191_int = -1; // 0x19f PushI
	var_192_int = 23313; // 0x1a0 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_193_int = 23314; // 0x1a4 PushI
	var_194_bool = var_10_bool == var_193_int; // 0x1a5 Eq
	if(var_194_bool == 0) goto Label_443; // 0x1a6 JumpB
	var_195_string = ""; // 0x1a7 PushV
	var_195_string = "Neutral"; // 0x1a8 MovS
	func_223(var_11_object, var_195_string); // 0x1a9 NEW_2
	var_196_int = 522147; // 0x1ab PushI
	SetMessage(var_196_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_197_int = 522148; // 0x1b0 PushI
	var_198_int = 23317; // 0x1b1 PushI
	var_199_int = 23315; // 0x1b2 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1b3 TObjFunc
	var_200_int = 522149; // 0x1b5 PushI
	var_201_int = -1; // 0x1b6 PushI
	var_202_int = 23316; // 0x1b7 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_203_int = 23317; // 0x1bb PushI
	var_204_bool = var_10_bool == var_203_int; // 0x1bc Eq
	if(var_204_bool == 0) goto Label_466; // 0x1bd JumpB
	var_205_string = ""; // 0x1be PushV
	var_205_string = "Neutral"; // 0x1bf MovS
	func_223(var_11_object, var_205_string); // 0x1c0 NEW_2
	var_206_int = 522150; // 0x1c2 PushI
	SetMessage(var_206_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_207_int = 522151; // 0x1c7 PushI
	var_208_int = 23320; // 0x1c8 PushI
	var_209_int = 23318; // 0x1c9 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1ca TObjFunc
	var_210_int = 522152; // 0x1cc PushI
	var_211_int = -1; // 0x1cd PushI
	var_212_int = 23319; // 0x1ce PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_213_int = 23320; // 0x1d2 PushI
	var_214_bool = var_10_bool == var_213_int; // 0x1d3 Eq
	if(var_214_bool == 0) goto Label_489; // 0x1d4 JumpB
	var_215_string = ""; // 0x1d5 PushV
	var_215_string = "Neutral"; // 0x1d6 MovS
	func_223(var_11_object, var_215_string); // 0x1d7 NEW_2
	var_216_int = 522153; // 0x1d9 PushI
	SetMessage(var_216_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_217_int = 522154; // 0x1de PushI
	var_218_int = -1; // 0x1df PushI
	var_219_int = 23321; // 0x1e0 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1e1 TObjFunc
	var_220_int = 522155; // 0x1e3 PushI
	var_221_int = -1; // 0x1e4 PushI
	var_222_int = 23322; // 0x1e5 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_223_int = 23325; // 0x1e9 PushI
	var_224_bool = var_10_bool == var_223_int; // 0x1ea Eq
	if(var_224_bool == 0) goto Label_512; // 0x1eb JumpB
	var_225_string = ""; // 0x1ec PushV
	var_225_string = "Neutral"; // 0x1ed MovS
	func_223(var_11_object, var_225_string); // 0x1ee NEW_2
	var_226_int = 522158; // 0x1f0 PushI
	SetMessage(var_226_int); // 0x1f1 TObjFunc
	ClearReplies(); // 0x1f3 TObjFunc
	var_227_int = 522159; // 0x1f5 PushI
	var_228_int = 23327; // 0x1f6 PushI
	var_229_int = 23326; // 0x1f7 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1f8 TObjFunc
	var_230_int = 522161; // 0x1fa PushI
	var_231_int = 23997; // 0x1fb PushI
	var_232_int = 23328; // 0x1fc PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_233_int = 23997; // 0x200 PushI
	var_234_bool = var_10_bool == var_233_int; // 0x201 Eq
	if(var_234_bool == 0) goto Label_530; // 0x202 JumpB
	var_235_string = ""; // 0x203 PushV
	var_235_string = "Neutral"; // 0x204 MovS
	func_223(var_11_object, var_235_string); // 0x205 NEW_2
	var_236_int = 522814; // 0x207 PushI
	SetMessage(var_236_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_237_int = 522815; // 0x20c PushI
	var_238_int = -1; // 0x20d PushI
	var_239_int = 23998; // 0x20e PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_240_int = 23327; // 0x212 PushI
	var_241_bool = var_10_bool == var_240_int; // 0x213 Eq
	if(var_241_bool == 0) goto Label_548; // 0x214 JumpB
	var_242_string = ""; // 0x215 PushV
	var_242_string = "Neutral"; // 0x216 MovS
	func_223(var_11_object, var_242_string); // 0x217 NEW_2
	var_243_int = 522160; // 0x219 PushI
	SetMessage(var_243_int); // 0x21a TObjFunc
	ClearReplies(); // 0x21c TObjFunc
	var_244_int = 522162; // 0x21e PushI
	var_245_int = 23330; // 0x21f PushI
	var_246_int = 23329; // 0x220 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x221 TObjFunc
	return 0; // 0x223 Return
	
Label_548:
	var_247_int = 23330; // 0x224 PushI
	var_248_bool = var_10_bool == var_247_int; // 0x225 Eq
	if(var_248_bool == 0) goto Label_571; // 0x226 JumpB
	var_249_string = ""; // 0x227 PushV
	var_249_string = "Neutral"; // 0x228 MovS
	func_223(var_11_object, var_249_string); // 0x229 NEW_2
	var_250_int = 522163; // 0x22b PushI
	SetMessage(var_250_int); // 0x22c TObjFunc
	ClearReplies(); // 0x22e TObjFunc
	var_251_int = 522164; // 0x230 PushI
	var_252_int = -1; // 0x231 PushI
	var_253_int = 23331; // 0x232 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x233 TObjFunc
	var_254_int = 522165; // 0x235 PushI
	var_255_int = -1; // 0x236 PushI
	var_256_int = 23332; // 0x237 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x238 TObjFunc
	return 0; // 0x23a Return
	
Label_571:
	var_257_int = 23323; // 0x23b PushI
	var_258_bool = var_10_bool == var_257_int; // 0x23c Eq
	if(var_258_bool == 0) goto Label_594; // 0x23d JumpB
	var_259_string = ""; // 0x23e PushV
	var_259_string = "Neutral"; // 0x23f MovS
	func_223(var_11_object, var_259_string); // 0x240 NEW_2
	var_260_int = 522156; // 0x242 PushI
	SetMessage(var_260_int); // 0x243 TObjFunc
	ClearReplies(); // 0x245 TObjFunc
	var_261_int = 522808; // 0x247 PushI
	var_262_int = 23992; // 0x248 PushI
	var_263_int = 23991; // 0x249 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x24a TObjFunc
	var_264_int = 522807; // 0x24c PushI
	var_265_int = -1; // 0x24d PushI
	var_266_int = 23990; // 0x24e PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x24f TObjFunc
	return 0; // 0x251 Return
	
Label_594:
	var_267_int = 23992; // 0x252 PushI
	var_268_bool = var_10_bool == var_267_int; // 0x253 Eq
	if(var_268_bool == 0) goto Label_612; // 0x254 JumpB
	var_269_string = ""; // 0x255 PushV
	var_269_string = "Neutral"; // 0x256 MovS
	func_223(var_11_object, var_269_string); // 0x257 NEW_2
	var_270_int = 522809; // 0x259 PushI
	SetMessage(var_270_int); // 0x25a TObjFunc
	ClearReplies(); // 0x25c TObjFunc
	var_271_int = 522810; // 0x25e PushI
	var_272_int = -1; // 0x25f PushI
	var_273_int = 23993; // 0x260 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x261 TObjFunc
	return 0; // 0x263 Return
	
Label_612:
	var_3_string = 1; // 0x264 TMovB
	var_274_bool = 0; // 0x265 PushV
	func_1050(var_274_bool); // 0x266 NEW_2
	if(var_274_bool == 0) goto Label_620; // 0x268 JumpB
	lshStopAnimation(); // 0x269 Func
	goto Label_622; // 0x26b Jump
	
Label_622:
	return 0; // 0x26e Return
	
Label_620:
	StopAnimation(); // 0x26c Func
	
Label_624:
	return 0; // 0x270 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x27e PushV
	func_1265(var_11_int); // 0x27f NEW_2
	var_15_int = 0; // 0x281 PushI
	var_16_bool = var_11_int == var_15_int; // 0x282 Eq
	if(var_16_bool == 0) goto Label_653; // 0x283 JumpB
	func_719(var_9_object, var_10_object); // 0x285 NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0x287 PushV
	var_21_object = var_10_object; // 0x288 Mov
	TaskCall(0); // 0x289 TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x28a NEW_2
	TaskReturn(); // 0x28b TaskReturn
	
Label_653:
	return 0; // 0x28d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x2b9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x2ba Eq
	if(var_12_bool == 0) goto Label_718; // 0x2bb JumpB
	var_13_bool = 0; // 0x2bc PushV
	func_681(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x2bd NEW_2
	if(var_13_bool == 0) goto Label_712; // 0x2bf JumpB
	var_26_bool = var_2_object == 0; // 0x2c0 Not
	if(var_26_bool == 0) goto Label_711; // 0x2c1 JumpB
	var_27_object = Obj(); // 0x2c2 PushV
	var_27_object = var_4_bool; // 0x2c3 MovT
	func_948(var_27_object); // 0x2c4 NEW_2
	var_2_object = 1; // 0x2c6 TMovB
	
Label_711:
	goto Label_718; // 0x2c7 Jump
	
Label_718:
	return 0; // 0x2ce Return
	
Label_712:
	var_34_object = var_2_object; // 0x2c8 PushT
	if(var_34_object == 0) goto Label_718; // 0x2c9 JumpB
	var_35_string = "head"; // 0x2ca PushS
	UnlookAsync(var_35_string); // 0x2cb Func
	var_2_object = 0; // 0x2cd TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_625:
	var_10_bool = 1; // 0x271 PushB
	if(var_10_bool == 0) goto Label_636; // 0x272 JumpB
	var_11_float = 0; var_12_float = 0; // 0x273 PushV
	var_11_float = 300; // 0x274 MovI
	var_12_float = 100; // 0x275 MovI
	func_654(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x276 NEW_2
	var_73_int = 1; // 0x278 PushI
	Sleep(var_73_int); // 0x279 Func
	goto Label_625; // 0x27b Jump
	
Label_636:
	return 0; // 0x27c Return
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 130.0; // 0x4 MovF
	func_832(var_32_object, var_33_float); // 0x5 NEW_2
	var_77_bool = var_31_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_1044(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_1042(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_1046(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_1048(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_1157(var_82_int); // 0x22 NEW_2
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
	var_247_bool = var_30_bool == 0; // 0x38 Not
	if(var_247_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_248_object = Obj(); // 0x3f PushV
	var_248_object = var_21_object; // 0x40 Mov
	func_900(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1025(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x401 PushV
	var_39_int = 0; // 0x402 MovI
	
Label_1027:
	var_41_string = "all"; // 0x403 PushS
	var_42_string = ""; var_43_int = 0; // 0x404 PushV
	var_43_int = var_39_int; // 0x405 Mov
	func_1018(var_42_string, var_43_int); // 0x406 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x408 Func
	var_47_bool = var_40_bool == 0; // 0x40a Not
	if(var_47_bool == 0) goto Label_1037; // 0x40b JumpB
	goto Label_1040; // 0x40c Jump
	
Label_1040:
	var_36_int = var_39_int; // 0x410 Mov
	return 4; // 0x411 Return
	
Label_1037:
	var_48_int = 1; // 0x40d PushI
	var_39_int = var_39_int + var_48_int; // 0x40e Add2
	goto Label_1027; // 0x40f Jump
}


func_1018(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x3fa PushV
	var_45_string = "idle"; // 0x3fb MovS
	var_46_int = var_43_int; // 0x3fc Push
	if(var_46_int == 0) goto Label_1023; // 0x3fd JumpB
	var_45_string = var_45_string + var_43_int; // 0x3fe Add2
	
Label_1023:
	var_42_string = var_45_string; // 0x3ff Mov
	return 2; // 0x400 Return
}


func_900()
{
	var_249_bool = 0; var_250_bool = 0; // 0x384 PushV
	CameraSwitchToNormal(); // 0x385 Func
	var_251_bool = 0; // 0x387 PushV
	func_1050(var_251_bool); // 0x388 NEW_2
	if(var_251_bool == 0) goto Label_908; // 0x38a JumpB
	goto Label_916; // 0x38b Jump
	
Label_916:
	return 2; // 0x394 Return
	
Label_908:
	var_252_string = "head"; // 0x38c PushS
	HasAnimationTrack(var_250_bool, var_252_string); // 0x38d Func
	var_253_bool = var_250_bool; // 0x38f Push
	if(var_253_bool == 0) goto Label_916; // 0x390 JumpB
	var_254_string = "head"; // 0x391 PushS
	UnlookAsync(var_254_string); // 0x392 Func
}


func_1157(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x485 PushV
	var_85_string = "branch"; // 0x486 PushS
	GetVariable(var_85_string, var_84_int); // 0x487 Func
	var_86_int = 0; // 0x489 PushI
	var_87_bool = var_84_int == var_86_int; // 0x48a Eq
	if(var_87_bool == 0) goto Label_1167; // 0x48b JumpB
	var_82_int = 1; // 0x48c MovI
	return 2; // 0x48d Return
	
Label_1167:
	var_88_int = 1; // 0x48f PushI
	var_89_bool = var_84_int == var_88_int; // 0x490 Eq
	if(var_89_bool == 0) goto Label_1172; // 0x491 JumpB
	var_82_int = 2; // 0x492 MovI
	return 2; // 0x493 Return
	
Label_1172:
	var_82_int = 3; // 0x494 MovI
	return 2; // 0x495 Return
}


func_654(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x28f PushV
	func_827(var_13_bool); // 0x290 NEW_2
	var_16_bool = var_13_bool == 0; // 0x292 Not
	if(var_16_bool == 0) goto Label_661; // 0x293 JumpB
	return 0; // 0x294 Return
	
Label_661:
	var_17_string = "player"; // 0x295 PushS
	FindActor(var_9_object, var_17_string); // 0x296 Func
	var_2_object = 0; // 0x298 TMovB
	var_3_string = 0; // 0x299 TMovB
	var_0_object = var_11_float; // 0x29a TMov
	var_1_object = var_12_float; // 0x29b TMov
	var_18_int = 10; // 0x29c PushI
	var_19_float = 1.0; // 0x29d PushF
	SetTimer(var_18_int, var_19_float); // 0x29e Func
	func_733(); // 0x2a1 NEW_2
	var_71_bool = var_3_string == 0; // 0x2a3 Not
	if(var_71_bool == 0) goto Label_680; // 0x2a4 JumpB
	var_72_int = 10; // 0x2a5 PushI
	KillTimer(var_72_int); // 0x2a6 Func
	
Label_680:
	return 0; // 0x2a8 Return
}


func_1042(var_79_int)
{
	var_79_int = 515571; // 0x412 MovI
	return 0; // 0x413 Return
}


func_1044(var_78_int)
{
	var_78_int = 504029; // 0x414 MovI
	return 0; // 0x415 Return
}


func_917(var_191_string)
{
	var_192_bool = 0; var_193_float = 0; var_194_float = 0; var_195_bool = 0; var_196_float = 0; var_197_float = 0; // 0x395 PushV
	lshHasAnimation(var_195_bool, var_191_string); // 0x396 Func
	var_198_bool = var_195_bool; // 0x398 Push
	if(var_198_bool == 0) goto Label_928; // 0x399 JumpB
	lshGetAnimTimes(var_191_string, var_196_float, var_197_float); // 0x39a Func
	var_199_bool = 0; // 0x39c PushB
	lshPlayAnimation(var_196_float, var_197_float, var_199_bool); // 0x39d Func
	goto Label_932; // 0x39f Jump
	
Label_932:
	return 6; // 0x3a4 Return
	
Label_928:
	var_200_string = "Can't find lsh animation : "; // 0x3a0 PushS
	var_201_int = var_200_string + var_191_string; // 0x3a1 Add
	Trace(var_201_int); // 0x3a2 Func
}


func_1046(var_80_string)
{
	var_80_string = "ui/NPC_bmask.png"; // 0x416 MovS
	return 0; // 0x417 Return
}


func_1174(var_112_bool, var_113_int)
{
	var_114_int = 18; // 0x497 PushI
	add(var_114_int); // 0x498 ObjFunc
	var_115_int = 24; // 0x49a PushI
	add(var_115_int); // 0x49b ObjFunc
	var_116_int = 20; // 0x49d PushI
	add(var_116_int); // 0x49e ObjFunc
	var_117_int = 14; // 0x4a0 PushI
	add(var_117_int); // 0x4a1 ObjFunc
	var_118_bool = 0; // 0x4a3 PushB
	var_119_bool = var_112_bool == var_118_bool; // 0x4a4 Eq
	if(var_119_bool == 0) goto Label_1200; // 0x4a5 JumpB
	var_120_int = 10; // 0x4a6 PushI
	add(var_120_int); // 0x4a7 ObjFunc
	var_121_int = 17; // 0x4a9 PushI
	add(var_121_int); // 0x4aa ObjFunc
	var_122_int = 8; // 0x4ac PushI
	add(var_122_int); // 0x4ad ObjFunc
	goto Label_1206; // 0x4af Jump
	
Label_1206:
	return 0; // 0x4b6 Return
	
Label_1200:
	var_123_int = 1; // 0x4b0 PushI
	var_124_bool = var_113_int != var_123_int; // 0x4b1 Neq
	if(var_124_bool == 0) goto Label_1206; // 0x4b2 JumpB
	var_125_int = 10; // 0x4b3 PushI
	add(var_125_int); // 0x4b4 ObjFunc
}


func_1048(var_81_string)
{
	var_81_string = "ui/NPC_bmask_b.png"; // 0x418 MovS
	return 0; // 0x419 Return
}


func_1050(var_73_bool)
{
	var_73_bool = 0; // 0x41a MovB
	return 0; // 0x41b Return
}


func_1052()
{
	var_235_string = "oob12BirdmaskS1"; // 0x41d PushS
	var_236_int = 1; // 0x41e PushI
	SetVariable(var_235_string, var_236_int); // 0x41f Func
	return 0; // 0x421 Return
}


func_1058()
{
	var_42_bool = 0; var_43_string = ""; var_44_string = ""; // 0x423 PushV
	var_43_string = "quest_b12_01"; // 0x424 MovS
	var_44_string = "init_sobor"; // 0x425 MovS
	func_998(var_42_bool, var_43_string, var_44_string); // 0x426 NEW_2
	return 0; // 0x428 Return
}


func_933(var_152_string, var_153_bool)
{
	var_156_bool = 0; var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_float = 0; var_161_float = 0; // 0x3a5 PushV
	lshHasAnimation(var_159_bool, var_152_string); // 0x3a6 Func
	var_162_bool = var_159_bool; // 0x3a8 Push
	if(var_162_bool == 0) goto Label_943; // 0x3a9 JumpB
	lshGetAnimTimes(var_152_string, var_160_float, var_161_float); // 0x3aa Func
	lshPlayAnimation(var_160_float, var_161_float, var_153_bool); // 0x3ac Func
	goto Label_947; // 0x3ae Jump
	
Label_947:
	return 6; // 0x3b3 Return
	
Label_943:
	var_163_string = "Can't find lsh animation : "; // 0x3af PushS
	var_164_int = var_163_string + var_152_string; // 0x3b0 Add
	Trace(var_164_int); // 0x3b1 Func
}


func_1065()
{
	var_18_string = "oob12BirdmaskS3"; // 0x42a PushS
	var_19_int = 1; // 0x42b PushI
	SetVariable(var_18_string, var_19_int); // 0x42c Func
	return 0; // 0x42e Return
}


func_681(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x2a9 PushV
	var_16_bool = var_4_bool == 0; // 0x2aa NullEq
	if(var_16_bool == 0) goto Label_686; // 0x2ab JumpB
	var_13_bool = 0; // 0x2ac MovB
	return 2; // 0x2ad Return
	
Label_686:
	var_17_float = 0; var_18_object = Obj(); // 0x2ae PushV
	var_18_object = var_4_bool; // 0x2af MovT
	func_819(var_18_object); // 0x2b0 NEW_2
	var_15_float = sqrt(var_17_float); // 0x2b2 Sqrt2
	var_25_object = var_2_object; // 0x2b3 PushT
	if(var_25_object == 0) goto Label_694; // 0x2b4 JumpB
	var_15_float = var_15_float - var_1_object; // 0x2b5 Sub2
	
Label_694:
	var_13_bool = var_15_float < var_0_object; // 0x2b6 LT2
	return 2; // 0x2b7 Return
}


func_812(var_61_bool)
{
	var_61_bool = 1; // 0x32c MovB
	return 0; // 0x32d Return
}


func_814()
{
	StopAnimation(); // 0x32e Func
	StopGroup0(); // 0x330 Func
	return 0; // 0x332 Return
}


func_1071()
{
	var_24_string = "oob12BirdmaskS4"; // 0x430 PushS
	var_25_int = 1; // 0x431 PushI
	SetVariable(var_24_string, var_25_int); // 0x432 Func
	return 0; // 0x434 Return
}


func_819(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x333 PushV
	GetPosition(var_22_cvector); // 0x334 Func
	GetPosition(var_23_cvector); // 0x336 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x338 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x339 Or2
	return 6; // 0x33a Return
}


func_948(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3b4 PushV
	GetEyesHeight(var_30_float); // 0x3b5 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3b7 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3b8 PushE
	var_32_float = var_30_float; // 0x3b9 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3ba PopE
	var_33_string = "head"; // 0x3bb PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3bc Func
	return 4; // 0x3be Return
}


func_1077()
{
	var_30_string = ""; var_31_bool = 0; // 0x436 PushV
	var_30_string = "sobor@door1"; // 0x437 MovS
	var_31_bool = 0; // 0x438 MovB
	func_981(var_30_string, var_31_bool); // 0x439 NEW_2
	return 0; // 0x43b Return
}


func_1207(var_137_bool, var_138_int)
{
	var_139_int = 0; var_140_int = 0; // 0x4b7 PushV
	var_141_string = "vol_"; // 0x4b8 PushS
	var_142_int = var_141_string + var_138_int; // 0x4b9 Add
	GetVariable(var_142_int, var_140_int); // 0x4ba Func
	var_143_int = 4; // 0x4bc PushI
	var_144_int = var_140_int & var_143_int; // 0x4bd And
	var_145_int = 0; // 0x4be PushI
	var_137_bool = var_144_int != var_145_int; // 0x4bf Neq2
	return 2; // 0x4c0 Return
}


func_827(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x33b PushV
	IsLoaded(var_15_bool); // 0x33c Func
	var_13_bool = var_15_bool; // 0x33e Mov
	return 2; // 0x33f Return
}


func_1084(var_98_bool, var_99_object)
{
	var_100_bool = 0; var_101_object = Obj(); // 0x43d PushV
	var_101_object = var_99_object; // 0x43e Mov
	func_1140(var_101_object); // 0x43f NEW_2
	if(var_100_bool == 0) goto Label_1092; // 0x441 JumpB
	var_98_bool = 1; // 0x442 MovB
	return 0; // 0x443 Return
	
Label_1092:
	var_98_bool = 0; // 0x444 MovB
	return 0; // 0x445 Return
}


func_959()
{
	var_13_bool = 0; // 0x3bf PushV
	func_1050(var_13_bool); // 0x3c0 NEW_2
	if(var_13_bool == 0) goto Label_965; // 0x3c2 JumpB
	lshStopSpeech(); // 0x3c3 Func
	
Label_965:
	return 0; // 0x3c5 Return
}


func_832(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x340 PushV
	GetPosition(var_44_cvector); // 0x341 ObjFunc
	GetEyesHeight(var_43_float); // 0x343 ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x345 PushE
	var_52_float = var_52_float + var_43_float; // 0x346 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x347 PopE
	GetPosition(var_45_cvector); // 0x348 Func
	GetEyesHeight(var_43_float); // 0x34a Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x34c PushE
	var_53_float = var_53_float + var_43_float; // 0x34d Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x34e PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x34f Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x350 PushE
	var_54_float = 0; // 0x351 MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x352 PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x353 Or
	var_56_float = sqrt(var_55_int); // 0x354 Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x355 Div2
	var_47_cvector = -var_46_cvector; // 0x356 Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x357 Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x358 PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x359 PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x35a Xor2
	func_966(var_58_cvector, var_59_cvector); // 0x35b NEW_2
	var_66_int = 25; // 0x35d PushI
	var_67_float = var_58_cvector * var_66_int; // 0x35e Mult
	var_68_int = var_57_float + var_67_float; // 0x35f Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x360 PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x361 Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x362 Add2
	IsOverrideActive(var_50_bool); // 0x363 Func
	var_70_bool = var_50_bool; // 0x365 Push
	if(var_70_bool == 0) goto Label_873; // 0x366 JumpB
	var_31_bool = 0; // 0x367 MovB
	return 18; // 0x368 Return
	
Label_873:
	StopWorld(); // 0x369 Func
	CameraTransit(var_49_cvector, var_47_cvector); // 0x36b Func
	var_71_float = GetByIndex(var_48_cvector, 0); // 0x36d PushE
	var_72_float = GetByIndex(var_48_cvector, 2); // 0x36e PushE
	Rotate(var_71_float, var_72_float); // 0x36f Func
	var_73_bool = 0; // 0x371 PushV
	func_1050(var_73_bool); // 0x372 NEW_2
	if(var_73_bool == 0) goto Label_886; // 0x374 JumpB
	goto Label_894; // 0x375 Jump
	
Label_894:
	CameraWaitForPlayFinish(); // 0x37e Func
	ResumeWorld(); // 0x380 Func
	var_31_bool = 1; // 0x382 MovB
	return 18; // 0x383 Return
	
Label_886:
	var_74_string = "head"; // 0x376 PushS
	HasAnimationTrack(var_51_bool, var_74_string); // 0x377 Func
	var_75_bool = var_51_bool; // 0x379 Push
	if(var_75_bool == 0) goto Label_894; // 0x37a JumpB
	var_76_string = "head"; // 0x37b PushS
	LookAsyncCamera(var_76_string); // 0x37c Func
}


func_1217(var_128_bool, var_129_int)
{
	var_130_int = 0; var_131_int = 0; // 0x4c1 PushV
	var_132_string = "vol_"; // 0x4c2 PushS
	var_133_int = var_132_string + var_129_int; // 0x4c3 Add
	GetVariable(var_133_int, var_131_int); // 0x4c4 Func
	var_134_int = 16; // 0x4c6 PushI
	var_135_int = var_131_int & var_134_int; // 0x4c7 And
	var_136_int = 0; // 0x4c8 PushI
	var_128_bool = var_135_int != var_136_int; // 0x4c9 Neq2
	return 2; // 0x4ca Return
}


func_1094(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj(); // 0x447 PushV
	var_210_object = var_208_object; // 0x448 Mov
	func_1146(var_210_object); // 0x449 NEW_2
	if(var_209_bool == 0) goto Label_1102; // 0x44b JumpB
	var_207_bool = 1; // 0x44c MovB
	return 0; // 0x44d Return
	
Label_1102:
	var_207_bool = 0; // 0x44e MovB
	return 0; // 0x44f Return
}


func_966(var_58_cvector, var_59_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0x3c6 PushV
	var_63_int = var_59_cvector | var_59_cvector; // 0x3c7 Or
	var_62_float = sqrt(var_63_int); // 0x3c8 Sqrt2
	var_64_float = 0.0; // 0x3c9 PushF
	var_65_bool = var_62_float < var_64_float; // 0x3ca LT
	if(var_65_bool == 0) goto Label_974; // 0x3cb JumpB
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x3cc MovV
	return 2; // 0x3cd Return
	
Label_974:
	var_58_cvector = var_59_cvector / var_59_cvector; // 0x3ce Div2
	return 2; // 0x3cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_193; // 0x4f JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x50 PushV
	var_99_object = var_1_object; // 0x51 MovT
	func_1084(var_98_bool, var_99_object); // 0x52 NEW_2
	var_147_bool = var_98_bool == 0; // 0x54 Not
	if(var_147_bool == 0) goto Label_121; // 0x55 JumpB
	var_148_string = ""; // 0x56 PushV
	var_148_string = "Neutral"; // 0x57 MovS
	func_223(var_92_object, var_148_string); // 0x58 NEW_2
	var_165_int = 522134; // 0x5a PushI
	SetMessage(var_165_int); // 0x5b TObjFunc
	ClearReplies(); // 0x5d TObjFunc
	var_166_bool = 0; var_167_object = Obj(); // 0x5f PushV
	var_167_object = var_1_object; // 0x60 MovT
	func_1116(var_167_object); // 0x61 NEW_2
	if(var_166_bool == 0) goto Label_105; // 0x63 JumpB
	var_174_int = 522135; // 0x64 PushI
	var_175_int = 23323; // 0x65 PushI
	var_176_int = 23302; // 0x66 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x67 TObjFunc
	
Label_105:
	var_177_bool = 0; var_178_object = Obj(); // 0x69 PushV
	var_178_object = var_1_object; // 0x6a MovT
	func_1128(var_178_object); // 0x6b NEW_2
	if(var_177_bool == 0) goto Label_115; // 0x6d JumpB
	var_183_int = 522157; // 0x6e PushI
	var_184_int = 23325; // 0x6f PushI
	var_185_int = 23324; // 0x70 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x71 TObjFunc
	
Label_115:
	var_186_int = 522166; // 0x73 PushI
	var_187_int = -1; // 0x74 PushI
	var_188_int = 23333; // 0x75 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x76 TObjFunc
	goto Label_193; // 0x78 Jump
	
Label_193:
	var_189_bool = 0; // 0xc1 PushV
	func_1050(var_189_bool); // 0xc2 NEW_2
	if(var_189_bool == 0) goto Label_208; // 0xc4 JumpB
	
Label_197:
	lshWaitForAnimEnd(); // 0xc5 Func
	var_190_string = var_3_string; // 0xc7 PushT
	if(var_190_string == 0) goto Label_202; // 0xc8 JumpB
	goto Label_207; // 0xc9 Jump
	
Label_207:
	goto Label_222; // 0xcf Jump
	
Label_222:
	return 0; // 0xde Return
	
Label_202:
	var_191_string = ""; // 0xca PushV
	var_191_string = var_2_object; // 0xcb MovT
	func_917(var_191_string); // 0xcc NEW_2
	goto Label_197; // 0xce Jump
	
Label_208:
	var_202_string = "all"; // 0xd0 PushS
	var_203_string = "idle"; // 0xd1 PushS
	PlayAnimation(var_202_string, var_203_string); // 0xd2 Func
	
Label_212:
	WaitForAnimEnd(); // 0xd4 Func
	var_204_string = var_3_string; // 0xd6 PushT
	if(var_204_string == 0) goto Label_217; // 0xd7 JumpB
	goto Label_222; // 0xd8 Jump
	
Label_217:
	var_205_string = "all"; // 0xd9 PushS
	var_206_string = "idle"; // 0xda PushS
	PlayAnimation(var_205_string, var_206_string); // 0xdb Func
	goto Label_212; // 0xdd Jump
	
Label_121:
	var_207_bool = 0; var_208_object = Obj(); // 0x79 PushV
	var_208_object = var_1_object; // 0x7a MovT
	func_1094(var_207_bool, var_208_object); // 0x7b NEW_2
	var_218_bool = var_207_bool == 0; // 0x7d Not
	if(var_218_bool == 0) goto Label_142; // 0x7e JumpB
	var_219_string = ""; // 0x7f PushV
	var_219_string = "Neutral"; // 0x80 MovS
	func_223(var_92_object, var_219_string); // 0x81 NEW_2
	var_220_int = 522130; // 0x83 PushI
	SetMessage(var_220_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_221_int = 522140; // 0x88 PushI
	var_222_int = -1; // 0x89 PushI
	var_223_int = 23307; // 0x8a PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x8b TObjFunc
	goto Label_193; // 0x8d Jump
	
Label_142:
	var_224_bool = 0; // 0x8e PushV
	var_224_bool = 0; // 0x8f MovB
	var_225_bool = 0; var_226_object = Obj(); // 0x90 PushV
	var_226_object = var_1_object; // 0x91 MovT
	func_1104(var_226_object); // 0x92 NEW_2
	if(var_225_bool == 0) goto Label_155; // 0x94 JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0x95 PushV
	var_232_object = var_1_object; // 0x96 MovT
	func_1084(var_231_bool, var_232_object); // 0x97 NEW_2
	if(var_231_bool == 0) goto Label_155; // 0x99 JumpB
	var_224_bool = 1; // 0x9a MovB
	
Label_155:
	if(var_224_bool == 0) goto Label_176; // 0x9b JumpB
	var_233_object = Obj(); var_234_object = Obj(); // 0x9c PushV
	var_233_object = var_1_object; // 0x9d MovT
	var_234_object = var_0_object; // 0x9e MovT
	func_1052(); // 0x9f NEW_2
	var_237_string = ""; // 0xa1 PushV
	var_237_string = "Neutral"; // 0xa2 MovS
	func_223(var_92_object, var_237_string); // 0xa3 NEW_2
	var_238_int = 522136; // 0xa5 PushI
	SetMessage(var_238_int); // 0xa6 TObjFunc
	ClearReplies(); // 0xa8 TObjFunc
	var_239_int = 522137; // 0xaa PushI
	var_240_int = -1; // 0xab PushI
	var_241_int = 23304; // 0xac PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xad TObjFunc
	goto Label_193; // 0xaf Jump
	
Label_176:
	var_242_string = ""; // 0xb0 PushV
	var_242_string = "Neutral"; // 0xb1 MovS
	func_223(var_92_object, var_242_string); // 0xb2 NEW_2
	var_243_int = 522138; // 0xb4 PushI
	SetMessage(var_243_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_244_int = 522139; // 0xb9 PushI
	var_245_int = -1; // 0xba PushI
	var_246_int = 23306; // 0xbb PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0xbc TObjFunc
	goto Label_193; // 0xbe Jump
}


func_1227(var_102_bool)
{
	var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_int = 0; var_107_object = Obj(); var_108_int = 0; var_109_int = 0; var_110_int = 0; // 0x4cb PushV
	CreateIntVector(var_107_object); // 0x4cc Func
	var_111_object = Obj(); var_112_bool = 0; var_113_int = 0; // 0x4ce PushV
	var_111_object = var_107_object; // 0x4cf Mov
	var_112_bool = 0; // 0x4d0 MovB
	var_113_int = -1; // 0x4d1 MovI
	func_1174(var_112_bool, var_113_int); // 0x4d2 NEW_2
	size(var_108_int); // 0x4d4 ObjFunc
	var_109_int = 0; // 0x4d6 MovI
	
Label_1239:
	var_126_bool = var_109_int < var_108_int; // 0x4d7 LT
	if(var_126_bool == 0) goto Label_1262; // 0x4d8 JumpB
	get(var_110_int, var_109_int); // 0x4d9 ObjFunc
	var_127_bool = 0; // 0x4db PushV
	var_127_bool = 1; // 0x4dc MovB
	var_128_bool = 0; var_129_int = 0; // 0x4dd PushV
	var_129_int = var_110_int; // 0x4de Mov
	func_1217(var_128_bool, var_129_int); // 0x4df NEW_2
	if(var_128_bool == 0) goto Label_1256; // 0x4e1 JumpB
	var_137_bool = 0; var_138_int = 0; // 0x4e2 PushV
	var_138_int = var_110_int; // 0x4e3 Mov
	func_1207(var_137_bool, var_138_int); // 0x4e4 NEW_2
	if(var_137_bool == 0) goto Label_1256; // 0x4e6 JumpB
	var_127_bool = 0; // 0x4e7 MovB
	
Label_1256:
	if(var_127_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_102_bool = 0; // 0x4e9 MovB
	return 8; // 0x4ea Return
	
Label_1259:
	var_146_int = 1; // 0x4eb PushI
	var_109_int = var_109_int + var_146_int; // 0x4ec Add2
	goto Label_1239; // 0x4ed Jump
	
Label_1262:
	var_102_bool = 1; // 0x4ee MovB
	return 8; // 0x4ef Return
}


func_719(var_2_object, var_3_string)
{
	func_814(); // 0x2d0 NEW_2
	var_17_int = 10; // 0x2d2 PushI
	KillTimer(var_17_int); // 0x2d3 Func
	var_18_object = var_2_object; // 0x2d5 PushT
	if(var_18_object == 0) goto Label_731; // 0x2d6 JumpB
	var_19_string = "head"; // 0x2d7 PushS
	UnlookAsync(var_19_string); // 0x2d8 Func
	var_2_object = 0; // 0x2da TMovB
	
Label_731:
	var_3_string = 1; // 0x2db TMovB
	return 0; // 0x2dc Return
}


func_1104(var_225_bool)
{
	var_227_int = 0; var_228_string = ""; // 0x451 PushV
	var_228_string = "oob12BirdmaskS1"; // 0x452 MovS
	func_976(var_227_int, var_228_string); // 0x453 NEW_2
	var_229_int = 0; // 0x455 PushI
	var_230_bool = var_227_int == var_229_int; // 0x456 Eq
	if(var_230_bool == 0) goto Label_1114; // 0x457 JumpB
	var_225_bool = 1; // 0x458 MovB
	return 0; // 0x459 Return
	
Label_1114:
	var_225_bool = 0; // 0x45a MovB
	return 0; // 0x45b Return
}


func_976(var_168_int, var_169_string)
{
	var_170_int = 0; var_171_int = 0; // 0x3d0 PushV
	GetVariable(var_169_string, var_171_int); // 0x3d1 Func
	var_168_int = var_171_int; // 0x3d3 Mov
	return 2; // 0x3d4 Return
}


func_981(var_30_string, var_31_bool)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3d5 PushV
	FindActor(var_33_object, var_30_string); // 0x3d6 Func
	var_34_bool = var_33_object == 0; // 0x3d8 Not
	if(var_34_bool == 0) goto Label_993; // 0x3d9 JumpB
	var_35_string = "Door "; // 0x3da PushS
	var_36_int = var_35_string + var_30_string; // 0x3db Add
	var_37_string = " not found"; // 0x3dc PushS
	var_38_int = var_36_int + var_37_string; // 0x3dd Add
	Trace(var_38_int); // 0x3de Func
	goto Label_996; // 0x3e0 Jump
	
Label_996:
	return 2; // 0x3e4 Return
	
Label_993:
	var_39_string = "locked"; // 0x3e1 PushS
	SetProperty(var_39_string, var_31_bool); // 0x3e2 ObjFunc
}


func_1116(var_166_bool)
{
	var_168_int = 0; var_169_string = ""; // 0x45d PushV
	var_169_string = "oob12BirdmaskS3"; // 0x45e MovS
	func_976(var_168_int, var_169_string); // 0x45f NEW_2
	var_172_int = 0; // 0x461 PushI
	var_173_bool = var_168_int == var_172_int; // 0x462 Eq
	if(var_173_bool == 0) goto Label_1126; // 0x463 JumpB
	var_166_bool = 1; // 0x464 MovB
	return 0; // 0x465 Return
	
Label_1126:
	var_166_bool = 0; // 0x466 MovB
	return 0; // 0x467 Return
}


func_733()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x2dd PushV
	WaitForAnimEnd(); // 0x2de Func
	var_34_bool = 0; // 0x2e0 PushV
	func_827(var_34_bool); // 0x2e1 NEW_2
	var_35_bool = var_34_bool == 0; // 0x2e3 Not
	if(var_35_bool == 0) goto Label_742; // 0x2e4 JumpB
	return 14; // 0x2e5 Return
	
Label_742:
	var_36_int = 0; // 0x2e6 PushV
	func_1025(var_36_int); // 0x2e7 NEW_2
	var_27_int = var_36_int; // 0x2e8 Mov
	var_28_int = 0; // 0x2ea MovI
	
Label_747:
	var_49_bool = 0; // 0x2eb PushV
	var_49_bool = 0; // 0x2ec MovB
	var_50_int = 5; // 0x2ed PushI
	var_51_bool = var_28_int < var_50_int; // 0x2ee LT
	if(var_51_bool == 0) goto Label_757; // 0x2ef JumpB
	var_52_bool = 0; // 0x2f0 PushV
	func_827(var_52_bool); // 0x2f1 NEW_2
	if(var_52_bool == 0) goto Label_757; // 0x2f3 JumpB
	var_49_bool = 1; // 0x2f4 MovB
	
Label_757:
	if(var_49_bool == 0) goto Label_809; // 0x2f5 JumpB
	var_53_int = 3; // 0x2f6 PushI
	irand(var_29_int, var_53_int); // 0x2f7 Func
	var_54_int = 0; // 0x2f9 PushI
	var_55_bool = var_29_int == var_54_int; // 0x2fa Eq
	if(var_55_bool == 0) goto Label_781; // 0x2fb JumpB
	var_56_int = var_27_int; // 0x2fc Push
	if(var_56_int == 0) goto Label_780; // 0x2fd JumpB
	irand(var_30_int, var_27_int); // 0x2fe Func
	var_57_string = "all"; // 0x300 PushS
	var_58_string = ""; var_59_int = 0; // 0x301 PushV
	var_59_int = var_30_int; // 0x302 Mov
	func_1018(var_58_string, var_59_int); // 0x303 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x305 Func
	WaitForAnimEnd(var_31_bool); // 0x307 Func
	var_60_bool = var_31_bool == 0; // 0x309 Not
	if(var_60_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_809; // 0x30b Jump
	
Label_809:
	ResetAAS(); // 0x329 Func
	return 14; // 0x32b Return
	
Label_780:
	goto Label_798; // 0x30c Jump
	
Label_798:
	var_61_bool = 0; // 0x31e PushV
	func_812(var_61_bool); // 0x31f NEW_2
	var_62_bool = var_61_bool == 0; // 0x321 Not
	if(var_62_bool == 0) goto Label_804; // 0x322 JumpB
	goto Label_809; // 0x323 Jump
	
Label_804:
	ResetAAS(); // 0x324 Func
	var_63_int = 1; // 0x326 PushI
	var_28_int = var_28_int + var_63_int; // 0x327 Add2
	goto Label_747; // 0x328 Jump
	
Label_781:
	var_64_int = 1; // 0x30d PushI
	var_65_bool = var_29_int == var_64_int; // 0x30e Eq
	if(var_65_bool == 0) goto Label_795; // 0x30f JumpB
	var_66_int = 4; // 0x310 PushI
	rand(var_32_float, var_66_int); // 0x311 Func
	var_67_int = 1; // 0x313 PushI
	var_68_int = var_32_float + var_67_int; // 0x314 Add
	Sleep(var_68_int, var_33_bool); // 0x315 Func
	var_69_bool = var_33_bool == 0; // 0x317 Not
	if(var_69_bool == 0) goto Label_794; // 0x318 JumpB
	goto Label_809; // 0x319 Jump
	
Label_794:
	goto Label_798; // 0x31a Jump
	
Label_795:
	var_70_int = var_28_int; // 0x31b Push
	if(var_70_int == 0) goto Label_798; // 0x31c JumpB
	goto Label_809; // 0x31d Jump
}


func_223(var_2_object, var_148_string)
{
	var_149_bool = 0; // 0xe0 PushV
	func_1050(var_149_bool); // 0xe1 NEW_2
	var_150_bool = var_149_bool == 0; // 0xe3 Not
	if(var_150_bool == 0) goto Label_230; // 0xe4 JumpB
	return 0; // 0xe5 Return
	
Label_230:
	var_151_bool = var_148_string == var_2_object; // 0xe6 Eq
	if(var_151_bool == 0) goto Label_233; // 0xe7 JumpB
	return 0; // 0xe8 Return
	
Label_233:
	var_152_string = ""; var_153_bool = 0; // 0xe9 PushV
	var_152_string = var_148_string; // 0xea Mov
	var_154_string = ""; // 0xeb PushS
	var_155_bool = var_148_string == var_154_string; // 0xec Eq
	if(var_155_bool == 0) goto Label_240; // 0xed JumpB
	var_153_bool = 0; // 0xee MovB
	goto Label_241; // 0xef Jump
	
Label_241:
	func_933(var_152_string, var_153_bool); // 0xf1 NEW_2
	var_2_object = var_148_string; // 0xf3 TMov
	return 0; // 0xf4 Return
	
Label_240:
	var_153_bool = 1; // 0xf0 MovB
}


func_998(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x3e6 PushV
	FindActor(var_46_object, var_43_string); // 0x3e7 Func
	var_47_bool = var_46_object == 0; // 0x3e9 NullEq
	if(var_47_bool == 0) goto Label_1005; // 0x3ea JumpB
	var_42_bool = 0; // 0x3eb MovB
	return 2; // 0x3ec Return
	
Label_1005:
	Trigger(var_46_object, var_44_string); // 0x3ed Func
	var_42_bool = 1; // 0x3ef MovB
	return 2; // 0x3f0 Return
}


func_1128(var_177_bool)
{
	var_179_int = 0; var_180_string = ""; // 0x469 PushV
	var_180_string = "oob12BirdmaskS4"; // 0x46a MovS
	func_976(var_179_int, var_180_string); // 0x46b NEW_2
	var_181_int = 0; // 0x46d PushI
	var_182_bool = var_179_int == var_181_int; // 0x46e Eq
	if(var_182_bool == 0) goto Label_1138; // 0x46f JumpB
	var_177_bool = 1; // 0x470 MovB
	return 0; // 0x471 Return
	
Label_1138:
	var_177_bool = 0; // 0x472 MovB
	return 0; // 0x473 Return
}


func_1265(var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x4f1 PushV
	var_14_string = "game_final"; // 0x4f2 PushS
	GetVariable(var_14_string, var_13_int); // 0x4f3 Func
	var_11_int = var_13_int; // 0x4f5 Mov
	return 2; // 0x4f6 Return
}


func_1010(var_211_int)
{
	var_212_float = 0; var_213_float = 0; // 0x3f2 PushV
	GetGameTime(var_213_float); // 0x3f3 Func
	var_214_int = 0; // 0x3f5 PushV
	var_214_int = var_213_float; // 0x3f6 Mov
	var_215_int = 24; // 0x3f7 PushI
	var_211_int = var_214_int % var_215_int; // 0x3f8 Mod2
	return 2; // 0x3f9 Return
}


func_1140(var_100_bool)
{
	var_102_bool = 0; // 0x475 PushV
	func_1227(var_102_bool); // 0x476 NEW_2
	var_100_bool = var_102_bool; // 0x477 Mov
	return 0; // 0x479 Return
}


func_1146(var_209_bool)
{
	var_211_int = 0; // 0x47b PushV
	func_1010(var_211_int); // 0x47c NEW_2
	var_216_int = 19; // 0x47e PushI
	var_217_bool = var_211_int >= var_216_int; // 0x47f GE
	if(var_217_bool == 0) goto Label_1155; // 0x480 JumpB
	var_209_bool = 1; // 0x481 MovB
	return 0; // 0x482 Return
	
Label_1155:
	var_209_bool = 0; // 0x483 MovB
	return 0; // 0x484 Return
}


