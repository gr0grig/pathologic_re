task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xba PushI
	if(var_48_int == 0) goto Label_584; // 0xbb JumpB
	func_5102(); // 0xbd NEW_2
	var_50_int = 36154; // 0xbf PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xc0 Eq
	if(var_51_bool == 0) goto Label_199; // 0xc1 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xc2 PushV
	var_52_object = var_1_object; // 0xc3 MovT
	var_53_object = var_0_object; // 0xc4 MovT
	func_5334(); // 0xc5 NEW_2
	
Label_199:
	var_56_int = 36158; // 0xc7 PushI
	var_57_bool = var_47_cvector == var_56_int; // 0xc8 Eq
	if(var_57_bool == 0) goto Label_212; // 0xc9 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xca PushV
	var_58_object = var_1_object; // 0xcb MovT
	var_59_object = var_0_object; // 0xcc MovT
	func_5289(var_59_object); // 0xcd NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0xcf PushV
	var_107_object = var_1_object; // 0xd0 MovT
	var_108_object = var_0_object; // 0xd1 MovT
	func_5307(); // 0xd2 NEW_2
	
Label_212:
	var_130_int = 41664; // 0xd4 PushI
	var_131_bool = var_47_cvector == var_130_int; // 0xd5 Eq
	if(var_131_bool == 0) goto Label_220; // 0xd6 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0xd7 PushV
	var_132_object = var_1_object; // 0xd8 MovT
	var_133_object = var_0_object; // 0xd9 MovT
	func_5346(); // 0xda NEW_2
	
Label_220:
	var_148_int = 42228; // 0xdc PushI
	var_149_bool = var_47_cvector == var_148_int; // 0xdd Eq
	if(var_149_bool == 0) goto Label_228; // 0xde JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0xdf PushV
	var_150_object = var_1_object; // 0xe0 MovT
	var_151_object = var_0_object; // 0xe1 MovT
	func_5340(); // 0xe2 NEW_2
	
Label_228:
	var_154_int = 36153; // 0xe4 PushI
	var_155_bool = var_46_bool == var_154_int; // 0xe5 Eq
	if(var_155_bool == 0) goto Label_275; // 0xe6 JumpB
	var_156_string = ""; // 0xe7 PushV
	var_156_string = "Neutral"; // 0xe8 MovS
	func_163(var_47_cvector, var_156_string); // 0xe9 NEW_2
	var_173_int = 534512; // 0xeb PushI
	SetMessage(var_173_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_174_bool = 0; // 0xf0 PushV
	var_174_bool = 0; // 0xf1 MovB
	var_175_bool = 0; var_176_object = Obj(); // 0xf2 PushV
	var_176_object = var_1_object; // 0xf3 MovT
	func_5557(var_176_object); // 0xf4 NEW_2
	if(var_175_bool == 0) goto Label_253; // 0xf6 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0xf7 PushV
	var_182_object = var_1_object; // 0xf8 MovT
	func_5569(var_182_object); // 0xf9 NEW_2
	if(var_181_bool == 0) goto Label_253; // 0xfb JumpB
	var_174_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_174_bool == 0) goto Label_259; // 0xfd JumpB
	var_187_int = 534513; // 0xfe PushI
	var_188_int = 41645; // 0xff PushI
	var_189_int = 36154; // 0x100 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x101 TObjFunc
	
Label_259:
	var_190_bool = 0; var_191_object = Obj(); // 0x103 PushV
	var_191_object = var_1_object; // 0x104 MovT
	func_5581(var_191_object); // 0x105 NEW_2
	if(var_190_bool == 0) goto Label_269; // 0x107 JumpB
	var_196_int = 540246; // 0x108 PushI
	var_197_int = 42229; // 0x109 PushI
	var_198_int = 42228; // 0x10a PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x10b TObjFunc
	
Label_269:
	var_199_int = 534518; // 0x10d PushI
	var_200_int = -1; // 0x10e PushI
	var_201_int = 36159; // 0x10f PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_202_int = 42229; // 0x113 PushI
	var_203_bool = var_46_bool == var_202_int; // 0x114 Eq
	if(var_203_bool == 0) goto Label_298; // 0x115 JumpB
	var_204_string = ""; // 0x116 PushV
	var_204_string = "Neutral"; // 0x117 MovS
	func_163(var_47_cvector, var_204_string); // 0x118 NEW_2
	var_205_int = 540247; // 0x11a PushI
	SetMessage(var_205_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_206_int = 540248; // 0x11f PushI
	var_207_int = 42232; // 0x120 PushI
	var_208_int = 42230; // 0x121 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x122 TObjFunc
	var_209_int = 540249; // 0x124 PushI
	var_210_int = 42233; // 0x125 PushI
	var_211_int = 42231; // 0x126 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_212_int = 42233; // 0x12a PushI
	var_213_bool = var_46_bool == var_212_int; // 0x12b Eq
	if(var_213_bool == 0) goto Label_316; // 0x12c JumpB
	var_214_string = ""; // 0x12d PushV
	var_214_string = "Neutral"; // 0x12e MovS
	func_163(var_47_cvector, var_214_string); // 0x12f NEW_2
	var_215_int = 540251; // 0x131 PushI
	SetMessage(var_215_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_216_int = 540252; // 0x136 PushI
	var_217_int = 42236; // 0x137 PushI
	var_218_int = 42234; // 0x138 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_219_int = 42232; // 0x13c PushI
	var_220_bool = var_46_bool == var_219_int; // 0x13d Eq
	if(var_220_bool == 0) goto Label_334; // 0x13e JumpB
	var_221_string = ""; // 0x13f PushV
	var_221_string = "Neutral"; // 0x140 MovS
	func_163(var_47_cvector, var_221_string); // 0x141 NEW_2
	var_222_int = 540250; // 0x143 PushI
	SetMessage(var_222_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_223_int = 540253; // 0x148 PushI
	var_224_int = 42236; // 0x149 PushI
	var_225_int = 42235; // 0x14a PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_226_int = 42236; // 0x14e PushI
	var_227_bool = var_46_bool == var_226_int; // 0x14f Eq
	if(var_227_bool == 0) goto Label_357; // 0x150 JumpB
	var_228_string = ""; // 0x151 PushV
	var_228_string = "Neutral"; // 0x152 MovS
	func_163(var_47_cvector, var_228_string); // 0x153 NEW_2
	var_229_int = 540254; // 0x155 PushI
	SetMessage(var_229_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_230_int = 540255; // 0x15a PushI
	var_231_int = -1; // 0x15b PushI
	var_232_int = 42238; // 0x15c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x15d TObjFunc
	var_233_int = 540256; // 0x15f PushI
	var_234_int = 42240; // 0x160 PushI
	var_235_int = 42239; // 0x161 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_236_int = 42240; // 0x165 PushI
	var_237_bool = var_46_bool == var_236_int; // 0x166 Eq
	if(var_237_bool == 0) goto Label_375; // 0x167 JumpB
	var_238_string = ""; // 0x168 PushV
	var_238_string = "Neutral"; // 0x169 MovS
	func_163(var_47_cvector, var_238_string); // 0x16a NEW_2
	var_239_int = 540257; // 0x16c PushI
	SetMessage(var_239_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_240_int = 540258; // 0x171 PushI
	var_241_int = -1; // 0x172 PushI
	var_242_int = 42241; // 0x173 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_243_int = 41645; // 0x177 PushI
	var_244_bool = var_46_bool == var_243_int; // 0x178 Eq
	if(var_244_bool == 0) goto Label_398; // 0x179 JumpB
	var_245_string = ""; // 0x17a PushV
	var_245_string = "Neutral"; // 0x17b MovS
	func_163(var_47_cvector, var_245_string); // 0x17c NEW_2
	var_246_int = 539692; // 0x17e PushI
	SetMessage(var_246_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_247_int = 539693; // 0x183 PushI
	var_248_int = 41648; // 0x184 PushI
	var_249_int = 41646; // 0x185 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x186 TObjFunc
	var_250_int = 539694; // 0x188 PushI
	var_251_int = 40360; // 0x189 PushI
	var_252_int = 41647; // 0x18a PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_253_int = 41648; // 0x18e PushI
	var_254_bool = var_46_bool == var_253_int; // 0x18f Eq
	if(var_254_bool == 0) goto Label_416; // 0x190 JumpB
	var_255_string = ""; // 0x191 PushV
	var_255_string = "Neutral"; // 0x192 MovS
	func_163(var_47_cvector, var_255_string); // 0x193 NEW_2
	var_256_int = 539695; // 0x195 PushI
	SetMessage(var_256_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_257_int = 539696; // 0x19a PushI
	var_258_int = 40360; // 0x19b PushI
	var_259_int = 41649; // 0x19c PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_260_int = 40360; // 0x1a0 PushI
	var_261_bool = var_46_bool == var_260_int; // 0x1a1 Eq
	if(var_261_bool == 0) goto Label_439; // 0x1a2 JumpB
	var_262_string = ""; // 0x1a3 PushV
	var_262_string = "Neutral"; // 0x1a4 MovS
	func_163(var_47_cvector, var_262_string); // 0x1a5 NEW_2
	var_263_int = 538476; // 0x1a7 PushI
	SetMessage(var_263_int); // 0x1a8 TObjFunc
	ClearReplies(); // 0x1aa TObjFunc
	var_264_int = 538477; // 0x1ac PushI
	var_265_int = 40362; // 0x1ad PushI
	var_266_int = 40361; // 0x1ae PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x1af TObjFunc
	var_267_int = 538481; // 0x1b1 PushI
	var_268_int = 40366; // 0x1b2 PushI
	var_269_int = 40365; // 0x1b3 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x1b4 TObjFunc
	return 0; // 0x1b6 Return
	
Label_439:
	var_270_int = 40366; // 0x1b7 PushI
	var_271_bool = var_46_bool == var_270_int; // 0x1b8 Eq
	if(var_271_bool == 0) goto Label_462; // 0x1b9 JumpB
	var_272_string = ""; // 0x1ba PushV
	var_272_string = "Neutral"; // 0x1bb MovS
	func_163(var_47_cvector, var_272_string); // 0x1bc NEW_2
	var_273_int = 538482; // 0x1be PushI
	SetMessage(var_273_int); // 0x1bf TObjFunc
	ClearReplies(); // 0x1c1 TObjFunc
	var_274_int = 539691; // 0x1c3 PushI
	var_275_int = 40362; // 0x1c4 PushI
	var_276_int = 41643; // 0x1c5 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x1c6 TObjFunc
	var_277_int = 539697; // 0x1c8 PushI
	var_278_int = 41652; // 0x1c9 PushI
	var_279_int = 41651; // 0x1ca PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_280_int = 41652; // 0x1ce PushI
	var_281_bool = var_46_bool == var_280_int; // 0x1cf Eq
	if(var_281_bool == 0) goto Label_485; // 0x1d0 JumpB
	var_282_string = ""; // 0x1d1 PushV
	var_282_string = "Neutral"; // 0x1d2 MovS
	func_163(var_47_cvector, var_282_string); // 0x1d3 NEW_2
	var_283_int = 539698; // 0x1d5 PushI
	SetMessage(var_283_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_284_int = 539699; // 0x1da PushI
	var_285_int = 40362; // 0x1db PushI
	var_286_int = 41653; // 0x1dc PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1dd TObjFunc
	var_287_int = 539701; // 0x1df PushI
	var_288_int = 41658; // 0x1e0 PushI
	var_289_int = 41657; // 0x1e1 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_290_int = 41658; // 0x1e5 PushI
	var_291_bool = var_46_bool == var_290_int; // 0x1e6 Eq
	if(var_291_bool == 0) goto Label_508; // 0x1e7 JumpB
	var_292_string = ""; // 0x1e8 PushV
	var_292_string = "Neutral"; // 0x1e9 MovS
	func_163(var_47_cvector, var_292_string); // 0x1ea NEW_2
	var_293_int = 539702; // 0x1ec PushI
	SetMessage(var_293_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_294_int = 539703; // 0x1f1 PushI
	var_295_int = 40364; // 0x1f2 PushI
	var_296_int = 41659; // 0x1f3 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x1f4 TObjFunc
	var_297_int = 539704; // 0x1f6 PushI
	var_298_int = 41662; // 0x1f7 PushI
	var_299_int = 41661; // 0x1f8 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_300_int = 41662; // 0x1fc PushI
	var_301_bool = var_46_bool == var_300_int; // 0x1fd Eq
	if(var_301_bool == 0) goto Label_531; // 0x1fe JumpB
	var_302_string = ""; // 0x1ff PushV
	var_302_string = "Neutral"; // 0x200 MovS
	func_163(var_47_cvector, var_302_string); // 0x201 NEW_2
	var_303_int = 539705; // 0x203 PushI
	SetMessage(var_303_int); // 0x204 TObjFunc
	ClearReplies(); // 0x206 TObjFunc
	var_304_int = 539706; // 0x208 PushI
	var_305_int = 40364; // 0x209 PushI
	var_306_int = 41663; // 0x20a PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x20b TObjFunc
	var_307_int = 539707; // 0x20d PushI
	var_308_int = -1; // 0x20e PushI
	var_309_int = 41664; // 0x20f PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x210 TObjFunc
	return 0; // 0x212 Return
	
Label_531:
	var_310_int = 40362; // 0x213 PushI
	var_311_bool = var_46_bool == var_310_int; // 0x214 Eq
	if(var_311_bool == 0) goto Label_554; // 0x215 JumpB
	var_312_string = ""; // 0x216 PushV
	var_312_string = "Neutral"; // 0x217 MovS
	func_163(var_47_cvector, var_312_string); // 0x218 NEW_2
	var_313_int = 538478; // 0x21a PushI
	SetMessage(var_313_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_314_int = 538479; // 0x21f PushI
	var_315_int = 40364; // 0x220 PushI
	var_316_int = 40363; // 0x221 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x222 TObjFunc
	var_317_int = 539700; // 0x224 PushI
	var_318_int = 40364; // 0x225 PushI
	var_319_int = 41655; // 0x226 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x227 TObjFunc
	return 0; // 0x229 Return
	
Label_554:
	var_320_int = 40364; // 0x22a PushI
	var_321_bool = var_46_bool == var_320_int; // 0x22b Eq
	if(var_321_bool == 0) goto Label_572; // 0x22c JumpB
	var_322_string = ""; // 0x22d PushV
	var_322_string = "Neutral"; // 0x22e MovS
	func_163(var_47_cvector, var_322_string); // 0x22f NEW_2
	var_323_int = 538480; // 0x231 PushI
	SetMessage(var_323_int); // 0x232 TObjFunc
	ClearReplies(); // 0x234 TObjFunc
	var_324_int = 534517; // 0x236 PushI
	var_325_int = -1; // 0x237 PushI
	var_326_int = 36158; // 0x238 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x239 TObjFunc
	return 0; // 0x23b Return
	
Label_572:
	var_3_string = 1; // 0x23c TMovB
	var_327_bool = 0; // 0x23d PushV
	func_5249(var_327_bool); // 0x23e NEW_2
	if(var_327_bool == 0) goto Label_580; // 0x240 JumpB
	lshStopAnimation(); // 0x241 Func
	goto Label_582; // 0x243 Jump
	
Label_582:
	return 0; // 0x246 Return
	
Label_580:
	StopAnimation(); // 0x244 Func
	
Label_584:
	return 0; // 0x248 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x2f0 PushI
	if(var_48_int == 0) goto Label_843; // 0x2f1 JumpB
	func_5102(); // 0x2f3 NEW_2
	var_50_int = 36960; // 0x2f5 PushI
	var_51_bool = var_46_bool == var_50_int; // 0x2f6 Eq
	if(var_51_bool == 0) goto Label_785; // 0x2f7 JumpB
	var_52_string = ""; // 0x2f8 PushV
	var_52_string = "Neutral"; // 0x2f9 MovS
	func_729(var_47_cvector, var_52_string); // 0x2fa NEW_2
	var_69_int = 535284; // 0x2fc PushI
	SetMessage(var_69_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_70_int = 535285; // 0x301 PushI
	var_71_int = 36962; // 0x302 PushI
	var_72_int = 36961; // 0x303 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x304 TObjFunc
	var_73_int = 535292; // 0x306 PushI
	var_74_int = -1; // 0x307 PushI
	var_75_int = 36968; // 0x308 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x309 TObjFunc
	var_76_int = 535293; // 0x30b PushI
	var_77_int = -1; // 0x30c PushI
	var_78_int = 36969; // 0x30d PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_79_int = 36962; // 0x311 PushI
	var_80_bool = var_46_bool == var_79_int; // 0x312 Eq
	if(var_80_bool == 0) goto Label_808; // 0x313 JumpB
	var_81_string = ""; // 0x314 PushV
	var_81_string = "Neutral"; // 0x315 MovS
	func_729(var_47_cvector, var_81_string); // 0x316 NEW_2
	var_82_int = 535286; // 0x318 PushI
	SetMessage(var_82_int); // 0x319 TObjFunc
	ClearReplies(); // 0x31b TObjFunc
	var_83_int = 535287; // 0x31d PushI
	var_84_int = 36964; // 0x31e PushI
	var_85_int = 36963; // 0x31f PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x320 TObjFunc
	var_86_int = 535291; // 0x322 PushI
	var_87_int = -1; // 0x323 PushI
	var_88_int = 36967; // 0x324 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_89_int = 36964; // 0x328 PushI
	var_90_bool = var_46_bool == var_89_int; // 0x329 Eq
	if(var_90_bool == 0) goto Label_831; // 0x32a JumpB
	var_91_string = ""; // 0x32b PushV
	var_91_string = "Neutral"; // 0x32c MovS
	func_729(var_47_cvector, var_91_string); // 0x32d NEW_2
	var_92_int = 535288; // 0x32f PushI
	SetMessage(var_92_int); // 0x330 TObjFunc
	ClearReplies(); // 0x332 TObjFunc
	var_93_int = 535289; // 0x334 PushI
	var_94_int = -1; // 0x335 PushI
	var_95_int = 36965; // 0x336 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x337 TObjFunc
	var_96_int = 535290; // 0x339 PushI
	var_97_int = -1; // 0x33a PushI
	var_98_int = 36966; // 0x33b PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x33c TObjFunc
	return 0; // 0x33e Return
	
Label_831:
	var_3_string = 1; // 0x33f TMovB
	var_99_bool = 0; // 0x340 PushV
	func_5249(var_99_bool); // 0x341 NEW_2
	if(var_99_bool == 0) goto Label_839; // 0x343 JumpB
	lshStopAnimation(); // 0x344 Func
	goto Label_841; // 0x346 Jump
	
Label_841:
	return 0; // 0x349 Return
	
Label_839:
	StopAnimation(); // 0x347 Func
	
Label_843:
	return 0; // 0x34b Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x3f8 PushI
	if(var_48_int == 0) goto Label_1168; // 0x3f9 JumpB
	func_5102(); // 0x3fb NEW_2
	var_50_int = 543; // 0x3fd PushI
	var_51_bool = var_46_bool == var_50_int; // 0x3fe Eq
	if(var_51_bool == 0) goto Label_1054; // 0x3ff JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x400 PushV
	var_52_object = var_1_object; // 0x401 MovT
	var_53_object = var_0_object; // 0x402 MovT
	func_5251(); // 0x403 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0x405 PushV
	var_56_object = var_1_object; // 0x406 MovT
	var_57_object = var_0_object; // 0x407 MovT
	func_5257(); // 0x408 NEW_2
	var_60_string = ""; // 0x40a PushV
	var_60_string = "Neutral"; // 0x40b MovS
	func_993(var_47_cvector, var_60_string); // 0x40c NEW_2
	var_77_int = 500473; // 0x40e PushI
	SetMessage(var_77_int); // 0x40f TObjFunc
	ClearReplies(); // 0x411 TObjFunc
	var_78_int = 500476; // 0x413 PushI
	var_79_int = 547; // 0x414 PushI
	var_80_int = 546; // 0x415 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x416 TObjFunc
	var_81_int = 500474; // 0x418 PushI
	var_82_int = 545; // 0x419 PushI
	var_83_int = 544; // 0x41a PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x41b TObjFunc
	return 0; // 0x41d Return
	
Label_1054:
	var_84_int = 545; // 0x41e PushI
	var_85_bool = var_46_bool == var_84_int; // 0x41f Eq
	if(var_85_bool == 0) goto Label_1082; // 0x420 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x421 PushV
	var_86_object = var_1_object; // 0x422 MovT
	var_87_object = var_0_object; // 0x423 MovT
	func_5499(); // 0x424 NEW_2
	var_90_string = ""; // 0x426 PushV
	var_90_string = "Neutral"; // 0x427 MovS
	func_993(var_47_cvector, var_90_string); // 0x428 NEW_2
	var_91_int = 500475; // 0x42a PushI
	SetMessage(var_91_int); // 0x42b TObjFunc
	ClearReplies(); // 0x42d TObjFunc
	var_92_int = 500480; // 0x42f PushI
	var_93_int = 547; // 0x430 PushI
	var_94_int = 550; // 0x431 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x432 TObjFunc
	var_95_int = 500479; // 0x434 PushI
	var_96_int = -1; // 0x435 PushI
	var_97_int = 549; // 0x436 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x437 TObjFunc
	return 0; // 0x439 Return
	
Label_1082:
	var_98_int = 547; // 0x43a PushI
	var_99_bool = var_46_bool == var_98_int; // 0x43b Eq
	if(var_99_bool == 0) goto Label_1110; // 0x43c JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x43d PushV
	var_100_object = var_1_object; // 0x43e MovT
	var_101_object = var_0_object; // 0x43f MovT
	func_5523(); // 0x440 NEW_2
	var_104_string = ""; // 0x442 PushV
	var_104_string = "Neutral"; // 0x443 MovS
	func_993(var_47_cvector, var_104_string); // 0x444 NEW_2
	var_105_int = 500477; // 0x446 PushI
	SetMessage(var_105_int); // 0x447 TObjFunc
	ClearReplies(); // 0x449 TObjFunc
	var_106_int = 500481; // 0x44b PushI
	var_107_int = 554; // 0x44c PushI
	var_108_int = 552; // 0x44d PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x44e TObjFunc
	var_109_int = 508439; // 0x450 PushI
	var_110_int = 9263; // 0x451 PushI
	var_111_int = 9262; // 0x452 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x453 TObjFunc
	return 0; // 0x455 Return
	
Label_1110:
	var_112_int = 9263; // 0x456 PushI
	var_113_bool = var_46_bool == var_112_int; // 0x457 Eq
	if(var_113_bool == 0) goto Label_1133; // 0x458 JumpB
	var_114_string = ""; // 0x459 PushV
	var_114_string = "Neutral"; // 0x45a MovS
	func_993(var_47_cvector, var_114_string); // 0x45b NEW_2
	var_115_int = 508440; // 0x45d PushI
	SetMessage(var_115_int); // 0x45e TObjFunc
	ClearReplies(); // 0x460 TObjFunc
	var_116_int = 508442; // 0x462 PushI
	var_117_int = -1; // 0x463 PushI
	var_118_int = 9265; // 0x464 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x465 TObjFunc
	var_119_int = 508441; // 0x467 PushI
	var_120_int = -1; // 0x468 PushI
	var_121_int = 9264; // 0x469 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x46a TObjFunc
	return 0; // 0x46c Return
	
Label_1133:
	var_122_int = 554; // 0x46d PushI
	var_123_bool = var_46_bool == var_122_int; // 0x46e Eq
	if(var_123_bool == 0) goto Label_1156; // 0x46f JumpB
	var_124_string = ""; // 0x470 PushV
	var_124_string = "Neutral"; // 0x471 MovS
	func_993(var_47_cvector, var_124_string); // 0x472 NEW_2
	var_125_int = 500483; // 0x474 PushI
	SetMessage(var_125_int); // 0x475 TObjFunc
	ClearReplies(); // 0x477 TObjFunc
	var_126_int = 500484; // 0x479 PushI
	var_127_int = -1; // 0x47a PushI
	var_128_int = 555; // 0x47b PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x47c TObjFunc
	var_129_int = 500485; // 0x47e PushI
	var_130_int = -1; // 0x47f PushI
	var_131_int = 556; // 0x480 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x481 TObjFunc
	return 0; // 0x483 Return
	
Label_1156:
	var_3_string = 1; // 0x484 TMovB
	var_132_bool = 0; // 0x485 PushV
	func_5249(var_132_bool); // 0x486 NEW_2
	if(var_132_bool == 0) goto Label_1164; // 0x488 JumpB
	lshStopAnimation(); // 0x489 Func
	goto Label_1166; // 0x48b Jump
	
Label_1166:
	return 0; // 0x48e Return
	
Label_1164:
	StopAnimation(); // 0x48c Func
	
Label_1168:
	return 0; // 0x490 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x591 PushI
	if(var_48_int == 0) goto Label_1795; // 0x592 JumpB
	func_5102(); // 0x594 NEW_2
	var_50_int = 13328; // 0x596 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x597 Eq
	if(var_51_bool == 0) goto Label_1443; // 0x598 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x599 PushV
	var_52_object = var_1_object; // 0x59a MovT
	var_53_object = var_0_object; // 0x59b MovT
	func_5487(); // 0x59c NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0x59e PushV
	var_56_object = var_1_object; // 0x59f MovT
	var_57_object = var_0_object; // 0x5a0 MovT
	func_5529(); // 0x5a1 NEW_2
	
Label_1443:
	var_74_int = 13695; // 0x5a3 PushI
	var_75_bool = var_47_cvector == var_74_int; // 0x5a4 Eq
	if(var_75_bool == 0) goto Label_1451; // 0x5a5 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x5a6 PushV
	var_76_object = var_1_object; // 0x5a7 MovT
	var_77_object = var_0_object; // 0x5a8 MovT
	func_5487(); // 0x5a9 NEW_2
	
Label_1451:
	var_78_int = 3618; // 0x5ab PushI
	var_79_bool = var_46_bool == var_78_int; // 0x5ac Eq
	if(var_79_bool == 0) goto Label_1568; // 0x5ad JumpB
	var_80_bool = 0; // 0x5ae PushV
	var_80_bool = 0; // 0x5af MovB
	var_81_bool = 0; var_82_object = Obj(); // 0x5b0 PushV
	var_82_object = var_1_object; // 0x5b1 MovT
	func_5740(var_82_object); // 0x5b2 NEW_2
	if(var_81_bool == 0) goto Label_1467; // 0x5b4 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x5b5 PushV
	var_90_object = var_1_object; // 0x5b6 MovT
	func_5824(var_90_object); // 0x5b7 NEW_2
	if(var_89_bool == 0) goto Label_1467; // 0x5b9 JumpB
	var_80_bool = 1; // 0x5ba MovB
	
Label_1467:
	if(var_80_bool == 0) goto Label_1498; // 0x5bb JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x5bc PushV
	var_95_object = var_1_object; // 0x5bd MovT
	var_96_object = var_0_object; // 0x5be MovT
	func_5545(); // 0x5bf NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x5c1 PushV
	var_99_object = var_1_object; // 0x5c2 MovT
	var_100_object = var_0_object; // 0x5c3 MovT
	func_5551(); // 0x5c4 NEW_2
	var_103_string = ""; // 0x5c6 PushV
	var_103_string = "Neutral"; // 0x5c7 MovS
	func_1402(var_47_cvector, var_103_string); // 0x5c8 NEW_2
	var_120_int = 503371; // 0x5ca PushI
	SetMessage(var_120_int); // 0x5cb TObjFunc
	ClearReplies(); // 0x5cd TObjFunc
	var_121_int = 503375; // 0x5cf PushI
	var_122_int = 3621; // 0x5d0 PushI
	var_123_int = 3619; // 0x5d1 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x5d2 TObjFunc
	var_124_int = 503376; // 0x5d4 PushI
	var_125_int = 3621; // 0x5d5 PushI
	var_126_int = 3620; // 0x5d6 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x5d7 TObjFunc
	return 0; // 0x5d9 Return
	
Label_1498:
	var_127_bool = 0; // 0x5da PushV
	var_127_bool = 0; // 0x5db MovB
	var_128_bool = 0; // 0x5dc PushV
	var_128_bool = 0; // 0x5dd MovB
	var_129_bool = 0; var_130_object = Obj(); // 0x5de PushV
	var_130_object = var_1_object; // 0x5df MovT
	func_5728(var_130_object); // 0x5e0 NEW_2
	if(var_129_bool == 0) goto Label_1514; // 0x5e2 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x5e3 PushV
	var_136_object = var_1_object; // 0x5e4 MovT
	func_5704(var_136_object); // 0x5e5 NEW_2
	var_141_bool = var_135_bool == 0; // 0x5e7 Not
	if(var_141_bool == 0) goto Label_1514; // 0x5e8 JumpB
	var_128_bool = 1; // 0x5e9 MovB
	
Label_1514:
	if(var_128_bool == 0) goto Label_1522; // 0x5ea JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x5eb PushV
	var_143_object = var_1_object; // 0x5ec MovT
	func_5716(var_143_object); // 0x5ed NEW_2
	var_148_bool = var_142_bool == 0; // 0x5ef Not
	if(var_148_bool == 0) goto Label_1522; // 0x5f0 JumpB
	var_127_bool = 1; // 0x5f1 MovB
	
Label_1522:
	if(var_127_bool == 0) goto Label_1548; // 0x5f2 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x5f3 PushV
	var_149_object = var_1_object; // 0x5f4 MovT
	var_150_object = var_0_object; // 0x5f5 MovT
	func_5545(); // 0x5f6 NEW_2
	var_151_string = ""; // 0x5f8 PushV
	var_151_string = "Neutral"; // 0x5f9 MovS
	func_1402(var_47_cvector, var_151_string); // 0x5fa NEW_2
	var_152_int = 512095; // 0x5fc PushI
	SetMessage(var_152_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_153_int = 512096; // 0x601 PushI
	var_154_int = 13323; // 0x602 PushI
	var_155_int = 13322; // 0x603 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x604 TObjFunc
	var_156_int = 536136; // 0x606 PushI
	var_157_int = -1; // 0x607 PushI
	var_158_int = 37895; // 0x608 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x609 TObjFunc
	return 0; // 0x60b Return
	
Label_1548:
	var_159_string = ""; // 0x60c PushV
	var_159_string = "Neutral"; // 0x60d MovS
	func_1402(var_47_cvector, var_159_string); // 0x60e NEW_2
	var_160_int = 512523; // 0x610 PushI
	SetMessage(var_160_int); // 0x611 TObjFunc
	ClearReplies(); // 0x613 TObjFunc
	var_161_int = 512524; // 0x615 PushI
	var_162_int = -1; // 0x616 PushI
	var_163_int = 13694; // 0x617 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x618 TObjFunc
	var_164_int = 536137; // 0x61a PushI
	var_165_int = -1; // 0x61b PushI
	var_166_int = 37896; // 0x61c PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x61d TObjFunc
	return 0; // 0x61f Return
	
Label_1568:
	var_167_int = 13323; // 0x620 PushI
	var_168_bool = var_46_bool == var_167_int; // 0x621 Eq
	if(var_168_bool == 0) goto Label_1586; // 0x622 JumpB
	var_169_string = ""; // 0x623 PushV
	var_169_string = "Neutral"; // 0x624 MovS
	func_1402(var_47_cvector, var_169_string); // 0x625 NEW_2
	var_170_int = 512097; // 0x627 PushI
	SetMessage(var_170_int); // 0x628 TObjFunc
	ClearReplies(); // 0x62a TObjFunc
	var_171_int = 512098; // 0x62c PushI
	var_172_int = 13325; // 0x62d PushI
	var_173_int = 13324; // 0x62e PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x62f TObjFunc
	return 0; // 0x631 Return
	
Label_1586:
	var_174_int = 13325; // 0x632 PushI
	var_175_bool = var_46_bool == var_174_int; // 0x633 Eq
	if(var_175_bool == 0) goto Label_1604; // 0x634 JumpB
	var_176_string = ""; // 0x635 PushV
	var_176_string = "Neutral"; // 0x636 MovS
	func_1402(var_47_cvector, var_176_string); // 0x637 NEW_2
	var_177_int = 512099; // 0x639 PushI
	SetMessage(var_177_int); // 0x63a TObjFunc
	ClearReplies(); // 0x63c TObjFunc
	var_178_int = 512100; // 0x63e PushI
	var_179_int = 13327; // 0x63f PushI
	var_180_int = 13326; // 0x640 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x641 TObjFunc
	return 0; // 0x643 Return
	
Label_1604:
	var_181_int = 13327; // 0x644 PushI
	var_182_bool = var_46_bool == var_181_int; // 0x645 Eq
	if(var_182_bool == 0) goto Label_1643; // 0x646 JumpB
	var_183_object = Obj(); var_184_object = Obj(); // 0x647 PushV
	var_183_object = var_1_object; // 0x648 MovT
	var_184_object = var_0_object; // 0x649 MovT
	func_5493(); // 0x64a NEW_2
	var_187_string = ""; // 0x64c PushV
	var_187_string = "Neutral"; // 0x64d MovS
	func_1402(var_47_cvector, var_187_string); // 0x64e NEW_2
	var_188_int = 512101; // 0x650 PushI
	SetMessage(var_188_int); // 0x651 TObjFunc
	ClearReplies(); // 0x653 TObjFunc
	var_189_bool = 0; var_190_object = Obj(); // 0x655 PushV
	var_190_object = var_1_object; // 0x656 MovT
	func_5692(var_190_object); // 0x657 NEW_2
	if(var_189_bool == 0) goto Label_1631; // 0x659 JumpB
	var_195_int = 512102; // 0x65a PushI
	var_196_int = -1; // 0x65b PushI
	var_197_int = 13328; // 0x65c PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x65d TObjFunc
	
Label_1631:
	var_198_bool = 0; var_199_object = Obj(); // 0x65f PushV
	var_199_object = var_1_object; // 0x660 MovT
	func_5692(var_199_object); // 0x661 NEW_2
	var_200_bool = var_198_bool == 0; // 0x663 Not
	if(var_200_bool == 0) goto Label_1642; // 0x664 JumpB
	var_201_int = 512525; // 0x665 PushI
	var_202_int = -1; // 0x666 PushI
	var_203_int = 13695; // 0x667 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x668 TObjFunc
	
Label_1642:
	return 0; // 0x66a Return
	
Label_1643:
	var_204_int = 3621; // 0x66b PushI
	var_205_bool = var_46_bool == var_204_int; // 0x66c Eq
	if(var_205_bool == 0) goto Label_1671; // 0x66d JumpB
	var_206_string = ""; // 0x66e PushV
	var_206_string = "Neutral"; // 0x66f MovS
	func_1402(var_47_cvector, var_206_string); // 0x670 NEW_2
	var_207_int = 503377; // 0x672 PushI
	SetMessage(var_207_int); // 0x673 TObjFunc
	ClearReplies(); // 0x675 TObjFunc
	var_208_int = 503378; // 0x677 PushI
	var_209_int = 3626; // 0x678 PushI
	var_210_int = 3622; // 0x679 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x67a TObjFunc
	var_211_int = 503379; // 0x67c PushI
	var_212_int = 3626; // 0x67d PushI
	var_213_int = 3624; // 0x67e PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x67f TObjFunc
	var_214_int = 503380; // 0x681 PushI
	var_215_int = 3626; // 0x682 PushI
	var_216_int = 3625; // 0x683 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x684 TObjFunc
	return 0; // 0x686 Return
	
Label_1671:
	var_217_int = 3626; // 0x687 PushI
	var_218_bool = var_46_bool == var_217_int; // 0x688 Eq
	if(var_218_bool == 0) goto Label_1699; // 0x689 JumpB
	var_219_string = ""; // 0x68a PushV
	var_219_string = "Neutral"; // 0x68b MovS
	func_1402(var_47_cvector, var_219_string); // 0x68c NEW_2
	var_220_int = 503381; // 0x68e PushI
	SetMessage(var_220_int); // 0x68f TObjFunc
	ClearReplies(); // 0x691 TObjFunc
	var_221_int = 503382; // 0x693 PushI
	var_222_int = 3631; // 0x694 PushI
	var_223_int = 3627; // 0x695 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x696 TObjFunc
	var_224_int = 503383; // 0x698 PushI
	var_225_int = -1; // 0x699 PushI
	var_226_int = 3630; // 0x69a PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x69b TObjFunc
	var_227_int = 503396; // 0x69d PushI
	var_228_int = -1; // 0x69e PushI
	var_229_int = 3643; // 0x69f PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x6a0 TObjFunc
	return 0; // 0x6a2 Return
	
Label_1699:
	var_230_int = 3631; // 0x6a3 PushI
	var_231_bool = var_46_bool == var_230_int; // 0x6a4 Eq
	if(var_231_bool == 0) goto Label_1732; // 0x6a5 JumpB
	var_232_string = ""; // 0x6a6 PushV
	var_232_string = "Neutral"; // 0x6a7 MovS
	func_1402(var_47_cvector, var_232_string); // 0x6a8 NEW_2
	var_233_int = 503384; // 0x6aa PushI
	SetMessage(var_233_int); // 0x6ab TObjFunc
	ClearReplies(); // 0x6ad TObjFunc
	var_234_int = 503385; // 0x6af PushI
	var_235_int = 3639; // 0x6b0 PushI
	var_236_int = 3632; // 0x6b1 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x6b2 TObjFunc
	var_237_int = 503386; // 0x6b4 PushI
	var_238_int = -1; // 0x6b5 PushI
	var_239_int = 3633; // 0x6b6 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x6b7 TObjFunc
	var_240_int = 503387; // 0x6b9 PushI
	var_241_int = -1; // 0x6ba PushI
	var_242_int = 3634; // 0x6bb PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x6bc TObjFunc
	var_243_int = 503388; // 0x6be PushI
	var_244_int = 3636; // 0x6bf PushI
	var_245_int = 3635; // 0x6c0 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x6c1 TObjFunc
	return 0; // 0x6c3 Return
	
Label_1732:
	var_246_int = 3636; // 0x6c4 PushI
	var_247_bool = var_46_bool == var_246_int; // 0x6c5 Eq
	if(var_247_bool == 0) goto Label_1755; // 0x6c6 JumpB
	var_248_string = ""; // 0x6c7 PushV
	var_248_string = "Neutral"; // 0x6c8 MovS
	func_1402(var_47_cvector, var_248_string); // 0x6c9 NEW_2
	var_249_int = 503389; // 0x6cb PushI
	SetMessage(var_249_int); // 0x6cc TObjFunc
	ClearReplies(); // 0x6ce TObjFunc
	var_250_int = 503390; // 0x6d0 PushI
	var_251_int = -1; // 0x6d1 PushI
	var_252_int = 3637; // 0x6d2 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x6d3 TObjFunc
	var_253_int = 503391; // 0x6d5 PushI
	var_254_int = -1; // 0x6d6 PushI
	var_255_int = 3638; // 0x6d7 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x6d8 TObjFunc
	return 0; // 0x6da Return
	
Label_1755:
	var_256_int = 3639; // 0x6db PushI
	var_257_bool = var_46_bool == var_256_int; // 0x6dc Eq
	if(var_257_bool == 0) goto Label_1783; // 0x6dd JumpB
	var_258_string = ""; // 0x6de PushV
	var_258_string = "Neutral"; // 0x6df MovS
	func_1402(var_47_cvector, var_258_string); // 0x6e0 NEW_2
	var_259_int = 503392; // 0x6e2 PushI
	SetMessage(var_259_int); // 0x6e3 TObjFunc
	ClearReplies(); // 0x6e5 TObjFunc
	var_260_int = 503393; // 0x6e7 PushI
	var_261_int = -1; // 0x6e8 PushI
	var_262_int = 3640; // 0x6e9 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x6ea TObjFunc
	var_263_int = 503394; // 0x6ec PushI
	var_264_int = -1; // 0x6ed PushI
	var_265_int = 3641; // 0x6ee PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x6ef TObjFunc
	var_266_int = 503395; // 0x6f1 PushI
	var_267_int = -1; // 0x6f2 PushI
	var_268_int = 3642; // 0x6f3 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x6f4 TObjFunc
	return 0; // 0x6f6 Return
	
Label_1783:
	var_3_string = 1; // 0x6f7 TMovB
	var_269_bool = 0; // 0x6f8 PushV
	func_5249(var_269_bool); // 0x6f9 NEW_2
	if(var_269_bool == 0) goto Label_1791; // 0x6fb JumpB
	lshStopAnimation(); // 0x6fc Func
	goto Label_1793; // 0x6fe Jump
	
Label_1793:
	return 0; // 0x701 Return
	
Label_1791:
	StopAnimation(); // 0x6ff Func
	
Label_1795:
	return 0; // 0x703 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x7c7 PushI
	if(var_48_int == 0) goto Label_2375; // 0x7c8 JumpB
	func_5102(); // 0x7ca NEW_2
	var_50_int = 7322; // 0x7cc PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x7cd Eq
	if(var_51_bool == 0) goto Label_2014; // 0x7ce JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x7cf PushV
	var_52_object = var_1_object; // 0x7d0 MovT
	var_53_object = var_0_object; // 0x7d1 MovT
	func_5356(); // 0x7d2 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0x7d4 PushV
	var_56_object = var_1_object; // 0x7d5 MovT
	var_57_object = var_0_object; // 0x7d6 MovT
	func_5368(); // 0x7d7 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x7d9 PushV
	var_105_object = var_1_object; // 0x7da MovT
	var_106_object = var_0_object; // 0x7db MovT
	func_5396(); // 0x7dc NEW_2
	
Label_2014:
	var_131_int = 8137; // 0x7de PushI
	var_132_bool = var_47_cvector == var_131_int; // 0x7df Eq
	if(var_132_bool == 0) goto Label_2032; // 0x7e0 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x7e1 PushV
	var_133_object = var_1_object; // 0x7e2 MovT
	var_134_object = var_0_object; // 0x7e3 MovT
	func_5356(); // 0x7e4 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x7e6 PushV
	var_135_object = var_1_object; // 0x7e7 MovT
	var_136_object = var_0_object; // 0x7e8 MovT
	func_5368(); // 0x7e9 NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0x7eb PushV
	var_137_object = var_1_object; // 0x7ec MovT
	var_138_object = var_0_object; // 0x7ed MovT
	func_5396(); // 0x7ee NEW_2
	
Label_2032:
	var_139_int = 7317; // 0x7f0 PushI
	var_140_bool = var_47_cvector == var_139_int; // 0x7f1 Eq
	if(var_140_bool == 0) goto Label_2040; // 0x7f2 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x7f3 PushV
	var_141_object = var_1_object; // 0x7f4 MovT
	var_142_object = var_0_object; // 0x7f5 MovT
	func_5362(); // 0x7f6 NEW_2
	
Label_2040:
	var_145_int = 7313; // 0x7f8 PushI
	var_146_bool = var_47_cvector == var_145_int; // 0x7f9 Eq
	if(var_146_bool == 0) goto Label_2048; // 0x7fa JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x7fb PushV
	var_147_object = var_1_object; // 0x7fc MovT
	var_148_object = var_0_object; // 0x7fd MovT
	func_5362(); // 0x7fe NEW_2
	
Label_2048:
	var_149_int = 7320; // 0x800 PushI
	var_150_bool = var_46_bool == var_149_int; // 0x801 Eq
	if(var_150_bool == 0) goto Label_2104; // 0x802 JumpB
	var_151_string = ""; // 0x803 PushV
	var_151_string = "Neutral"; // 0x804 MovS
	func_1968(var_47_cvector, var_151_string); // 0x805 NEW_2
	var_168_int = 506647; // 0x807 PushI
	SetMessage(var_168_int); // 0x808 TObjFunc
	ClearReplies(); // 0x80a TObjFunc
	var_169_bool = 0; // 0x80c PushV
	var_169_bool = 0; // 0x80d MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x80e PushV
	var_171_object = var_1_object; // 0x80f MovT
	func_5593(var_171_object); // 0x810 NEW_2
	if(var_170_bool == 0) goto Label_2073; // 0x812 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x813 PushV
	var_179_object = var_1_object; // 0x814 MovT
	func_5617(var_179_object); // 0x815 NEW_2
	if(var_178_bool == 0) goto Label_2073; // 0x817 JumpB
	var_169_bool = 1; // 0x818 MovB
	
Label_2073:
	if(var_169_bool == 0) goto Label_2079; // 0x819 JumpB
	var_184_int = 507373; // 0x81a PushI
	var_185_int = 35431; // 0x81b PushI
	var_186_int = 8134; // 0x81c PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x81d TObjFunc
	
Label_2079:
	var_187_bool = 0; // 0x81f PushV
	var_187_bool = 0; // 0x820 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0x821 PushV
	var_189_object = var_1_object; // 0x822 MovT
	func_5605(var_189_object); // 0x823 NEW_2
	if(var_188_bool == 0) goto Label_2092; // 0x825 JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x826 PushV
	var_195_object = var_1_object; // 0x827 MovT
	func_5836(var_195_object); // 0x828 NEW_2
	if(var_194_bool == 0) goto Label_2092; // 0x82a JumpB
	var_187_bool = 1; // 0x82b MovB
	
Label_2092:
	if(var_187_bool == 0) goto Label_2098; // 0x82c JumpB
	var_200_int = 506640; // 0x82d PushI
	var_201_int = 7312; // 0x82e PushI
	var_202_int = 7311; // 0x82f PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x830 TObjFunc
	
Label_2098:
	var_203_int = 507533; // 0x832 PushI
	var_204_int = -1; // 0x833 PushI
	var_205_int = 8315; // 0x834 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x835 TObjFunc
	return 0; // 0x837 Return
	
Label_2104:
	var_206_int = 7312; // 0x838 PushI
	var_207_bool = var_46_bool == var_206_int; // 0x839 Eq
	if(var_207_bool == 0) goto Label_2127; // 0x83a JumpB
	var_208_string = ""; // 0x83b PushV
	var_208_string = "Neutral"; // 0x83c MovS
	func_1968(var_47_cvector, var_208_string); // 0x83d NEW_2
	var_209_int = 506641; // 0x83f PushI
	SetMessage(var_209_int); // 0x840 TObjFunc
	ClearReplies(); // 0x842 TObjFunc
	var_210_int = 506643; // 0x844 PushI
	var_211_int = 7316; // 0x845 PushI
	var_212_int = 7315; // 0x846 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x847 TObjFunc
	var_213_int = 506642; // 0x849 PushI
	var_214_int = -1; // 0x84a PushI
	var_215_int = 7313; // 0x84b PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x84c TObjFunc
	return 0; // 0x84e Return
	
Label_2127:
	var_216_int = 7316; // 0x84f PushI
	var_217_bool = var_46_bool == var_216_int; // 0x850 Eq
	if(var_217_bool == 0) goto Label_2145; // 0x851 JumpB
	var_218_string = ""; // 0x852 PushV
	var_218_string = "Neutral"; // 0x853 MovS
	func_1968(var_47_cvector, var_218_string); // 0x854 NEW_2
	var_219_int = 506644; // 0x856 PushI
	SetMessage(var_219_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_220_int = 506645; // 0x85b PushI
	var_221_int = -1; // 0x85c PushI
	var_222_int = 7317; // 0x85d PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x85e TObjFunc
	return 0; // 0x860 Return
	
Label_2145:
	var_223_int = 35431; // 0x861 PushI
	var_224_bool = var_46_bool == var_223_int; // 0x862 Eq
	if(var_224_bool == 0) goto Label_2163; // 0x863 JumpB
	var_225_string = ""; // 0x864 PushV
	var_225_string = "Neutral"; // 0x865 MovS
	func_1968(var_47_cvector, var_225_string); // 0x866 NEW_2
	var_226_int = 533876; // 0x868 PushI
	SetMessage(var_226_int); // 0x869 TObjFunc
	ClearReplies(); // 0x86b TObjFunc
	var_227_int = 533877; // 0x86d PushI
	var_228_int = 8135; // 0x86e PushI
	var_229_int = 35432; // 0x86f PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x870 TObjFunc
	return 0; // 0x872 Return
	
Label_2163:
	var_230_int = 35434; // 0x873 PushI
	var_231_bool = var_46_bool == var_230_int; // 0x874 Eq
	if(var_231_bool == 0) goto Label_2166; // 0x875 JumpB
	
Label_2166:
	var_232_int = 35437; // 0x876 PushI
	var_233_bool = var_46_bool == var_232_int; // 0x877 Eq
	if(var_233_bool == 0) goto Label_2189; // 0x878 JumpB
	var_234_string = ""; // 0x879 PushV
	var_234_string = "Neutral"; // 0x87a MovS
	func_1968(var_47_cvector, var_234_string); // 0x87b NEW_2
	var_235_int = 533882; // 0x87d PushI
	SetMessage(var_235_int); // 0x87e TObjFunc
	ClearReplies(); // 0x880 TObjFunc
	var_236_int = 533883; // 0x882 PushI
	var_237_int = 35444; // 0x883 PushI
	var_238_int = 35439; // 0x884 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x885 TObjFunc
	var_239_int = 533884; // 0x887 PushI
	var_240_int = 35441; // 0x888 PushI
	var_241_int = 35440; // 0x889 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x88a TObjFunc
	return 0; // 0x88c Return
	
Label_2189:
	var_242_int = 35441; // 0x88d PushI
	var_243_bool = var_46_bool == var_242_int; // 0x88e Eq
	if(var_243_bool == 0) goto Label_2207; // 0x88f JumpB
	var_244_string = ""; // 0x890 PushV
	var_244_string = "Neutral"; // 0x891 MovS
	func_1968(var_47_cvector, var_244_string); // 0x892 NEW_2
	var_245_int = 533885; // 0x894 PushI
	SetMessage(var_245_int); // 0x895 TObjFunc
	ClearReplies(); // 0x897 TObjFunc
	var_246_int = 533889; // 0x899 PushI
	var_247_int = 35444; // 0x89a PushI
	var_248_int = 35445; // 0x89b PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x89c TObjFunc
	return 0; // 0x89e Return
	
Label_2207:
	var_249_int = 35444; // 0x89f PushI
	var_250_bool = var_46_bool == var_249_int; // 0x8a0 Eq
	if(var_250_bool == 0) goto Label_2230; // 0x8a1 JumpB
	var_251_string = ""; // 0x8a2 PushV
	var_251_string = "Neutral"; // 0x8a3 MovS
	func_1968(var_47_cvector, var_251_string); // 0x8a4 NEW_2
	var_252_int = 533888; // 0x8a6 PushI
	SetMessage(var_252_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_253_int = 533887; // 0x8ab PushI
	var_254_int = 35447; // 0x8ac PushI
	var_255_int = 35443; // 0x8ad PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x8ae TObjFunc
	var_256_int = 533886; // 0x8b0 PushI
	var_257_int = -1; // 0x8b1 PushI
	var_258_int = 35442; // 0x8b2 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_259_int = 35447; // 0x8b6 PushI
	var_260_bool = var_46_bool == var_259_int; // 0x8b7 Eq
	if(var_260_bool == 0) goto Label_2253; // 0x8b8 JumpB
	var_261_string = ""; // 0x8b9 PushV
	var_261_string = "Neutral"; // 0x8ba MovS
	func_1968(var_47_cvector, var_261_string); // 0x8bb NEW_2
	var_262_int = 533890; // 0x8bd PushI
	SetMessage(var_262_int); // 0x8be TObjFunc
	ClearReplies(); // 0x8c0 TObjFunc
	var_263_int = 533891; // 0x8c2 PushI
	var_264_int = -1; // 0x8c3 PushI
	var_265_int = 35448; // 0x8c4 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x8c5 TObjFunc
	var_266_int = 533892; // 0x8c7 PushI
	var_267_int = -1; // 0x8c8 PushI
	var_268_int = 35449; // 0x8c9 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x8ca TObjFunc
	return 0; // 0x8cc Return
	
Label_2253:
	var_269_int = 8135; // 0x8cd PushI
	var_270_bool = var_46_bool == var_269_int; // 0x8ce Eq
	if(var_270_bool == 0) goto Label_2276; // 0x8cf JumpB
	var_271_string = ""; // 0x8d0 PushV
	var_271_string = "Neutral"; // 0x8d1 MovS
	func_1968(var_47_cvector, var_271_string); // 0x8d2 NEW_2
	var_272_int = 507374; // 0x8d4 PushI
	SetMessage(var_272_int); // 0x8d5 TObjFunc
	ClearReplies(); // 0x8d7 TObjFunc
	var_273_int = 506630; // 0x8d9 PushI
	var_274_int = 7300; // 0x8da PushI
	var_275_int = 7299; // 0x8db PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x8dc TObjFunc
	var_276_int = 533893; // 0x8de PushI
	var_277_int = 7300; // 0x8df PushI
	var_278_int = 35450; // 0x8e0 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x8e1 TObjFunc
	return 0; // 0x8e3 Return
	
Label_2276:
	var_279_int = 7300; // 0x8e4 PushI
	var_280_bool = var_46_bool == var_279_int; // 0x8e5 Eq
	if(var_280_bool == 0) goto Label_2299; // 0x8e6 JumpB
	var_281_string = ""; // 0x8e7 PushV
	var_281_string = "Neutral"; // 0x8e8 MovS
	func_1968(var_47_cvector, var_281_string); // 0x8e9 NEW_2
	var_282_int = 506631; // 0x8eb PushI
	SetMessage(var_282_int); // 0x8ec TObjFunc
	ClearReplies(); // 0x8ee TObjFunc
	var_283_int = 506636; // 0x8f0 PushI
	var_284_int = 7306; // 0x8f1 PushI
	var_285_int = 7305; // 0x8f2 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x8f3 TObjFunc
	var_286_int = 506632; // 0x8f5 PushI
	var_287_int = 7302; // 0x8f6 PushI
	var_288_int = 7301; // 0x8f7 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x8f8 TObjFunc
	return 0; // 0x8fa Return
	
Label_2299:
	var_289_int = 7302; // 0x8fb PushI
	var_290_bool = var_46_bool == var_289_int; // 0x8fc Eq
	if(var_290_bool == 0) goto Label_2322; // 0x8fd JumpB
	var_291_string = ""; // 0x8fe PushV
	var_291_string = "Neutral"; // 0x8ff MovS
	func_1968(var_47_cvector, var_291_string); // 0x900 NEW_2
	var_292_int = 506633; // 0x902 PushI
	SetMessage(var_292_int); // 0x903 TObjFunc
	ClearReplies(); // 0x905 TObjFunc
	var_293_int = 506634; // 0x907 PushI
	var_294_int = 7297; // 0x908 PushI
	var_295_int = 7303; // 0x909 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x90a TObjFunc
	var_296_int = 506635; // 0x90c PushI
	var_297_int = 7297; // 0x90d PushI
	var_298_int = 7304; // 0x90e PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x90f TObjFunc
	return 0; // 0x911 Return
	
Label_2322:
	var_299_int = 7297; // 0x912 PushI
	var_300_bool = var_46_bool == var_299_int; // 0x913 Eq
	if(var_300_bool == 0) goto Label_2345; // 0x914 JumpB
	var_301_string = ""; // 0x915 PushV
	var_301_string = "Neutral"; // 0x916 MovS
	func_1968(var_47_cvector, var_301_string); // 0x917 NEW_2
	var_302_int = 506628; // 0x919 PushI
	SetMessage(var_302_int); // 0x91a TObjFunc
	ClearReplies(); // 0x91c TObjFunc
	var_303_int = 506648; // 0x91e PushI
	var_304_int = -1; // 0x91f PushI
	var_305_int = 7322; // 0x920 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x921 TObjFunc
	var_306_int = 507376; // 0x923 PushI
	var_307_int = -1; // 0x924 PushI
	var_308_int = 8137; // 0x925 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x926 TObjFunc
	return 0; // 0x928 Return
	
Label_2345:
	var_309_int = 7306; // 0x929 PushI
	var_310_bool = var_46_bool == var_309_int; // 0x92a Eq
	if(var_310_bool == 0) goto Label_2363; // 0x92b JumpB
	var_311_string = ""; // 0x92c PushV
	var_311_string = "Neutral"; // 0x92d MovS
	func_1968(var_47_cvector, var_311_string); // 0x92e NEW_2
	var_312_int = 506637; // 0x930 PushI
	SetMessage(var_312_int); // 0x931 TObjFunc
	ClearReplies(); // 0x933 TObjFunc
	var_313_int = 506638; // 0x935 PushI
	var_314_int = 7302; // 0x936 PushI
	var_315_int = 7307; // 0x937 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x938 TObjFunc
	return 0; // 0x93a Return
	
Label_2363:
	var_3_string = 1; // 0x93b TMovB
	var_316_bool = 0; // 0x93c PushV
	func_5249(var_316_bool); // 0x93d NEW_2
	if(var_316_bool == 0) goto Label_2371; // 0x93f JumpB
	lshStopAnimation(); // 0x940 Func
	goto Label_2373; // 0x942 Jump
	
Label_2373:
	return 0; // 0x945 Return
	
Label_2371:
	StopAnimation(); // 0x943 Func
	
Label_2375:
	return 0; // 0x947 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xa45 PushI
	if(var_48_int == 0) goto Label_3394; // 0xa46 JumpB
	func_5102(); // 0xa48 NEW_2
	var_50_int = 12018; // 0xa4a PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xa4b Eq
	if(var_51_bool == 0) goto Label_2647; // 0xa4c JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xa4d PushV
	var_52_object = var_1_object; // 0xa4e MovT
	var_53_object = var_0_object; // 0xa4f MovT
	func_5433(); // 0xa50 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0xa52 PushV
	var_56_object = var_1_object; // 0xa53 MovT
	var_57_object = var_0_object; // 0xa54 MovT
	func_5412(); // 0xa55 NEW_2
	
Label_2647:
	var_105_int = 12019; // 0xa57 PushI
	var_106_bool = var_47_cvector == var_105_int; // 0xa58 Eq
	if(var_106_bool == 0) goto Label_2655; // 0xa59 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0xa5a PushV
	var_107_object = var_1_object; // 0xa5b MovT
	var_108_object = var_0_object; // 0xa5c MovT
	func_5433(); // 0xa5d NEW_2
	
Label_2655:
	var_109_int = 12015; // 0xa5f PushI
	var_110_bool = var_47_cvector == var_109_int; // 0xa60 Eq
	if(var_110_bool == 0) goto Label_2668; // 0xa61 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0xa62 PushV
	var_111_object = var_1_object; // 0xa63 MovT
	var_112_object = var_0_object; // 0xa64 MovT
	func_5433(); // 0xa65 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0xa67 PushV
	var_113_object = var_1_object; // 0xa68 MovT
	var_114_object = var_0_object; // 0xa69 MovT
	func_5412(); // 0xa6a NEW_2
	
Label_2668:
	var_115_int = 12023; // 0xa6c PushI
	var_116_bool = var_47_cvector == var_115_int; // 0xa6d Eq
	if(var_116_bool == 0) goto Label_2676; // 0xa6e JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0xa6f PushV
	var_117_object = var_1_object; // 0xa70 MovT
	var_118_object = var_0_object; // 0xa71 MovT
	func_5412(); // 0xa72 NEW_2
	
Label_2676:
	var_119_int = 12024; // 0xa74 PushI
	var_120_bool = var_47_cvector == var_119_int; // 0xa75 Eq
	if(var_120_bool == 0) goto Label_2684; // 0xa76 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0xa77 PushV
	var_121_object = var_1_object; // 0xa78 MovT
	var_122_object = var_0_object; // 0xa79 MovT
	func_5439(); // 0xa7a NEW_2
	
Label_2684:
	var_125_int = 12033; // 0xa7c PushI
	var_126_bool = var_47_cvector == var_125_int; // 0xa7d Eq
	if(var_126_bool == 0) goto Label_2692; // 0xa7e JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0xa7f PushV
	var_127_object = var_1_object; // 0xa80 MovT
	var_128_object = var_0_object; // 0xa81 MovT
	func_5445(); // 0xa82 NEW_2
	
Label_2692:
	var_155_int = 12029; // 0xa84 PushI
	var_156_bool = var_47_cvector == var_155_int; // 0xa85 Eq
	if(var_156_bool == 0) goto Label_2700; // 0xa86 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0xa87 PushV
	var_157_object = var_1_object; // 0xa88 MovT
	var_158_object = var_0_object; // 0xa89 MovT
	func_5445(); // 0xa8a NEW_2
	
Label_2700:
	var_159_int = 12343; // 0xa8c PushI
	var_160_bool = var_47_cvector == var_159_int; // 0xa8d Eq
	if(var_160_bool == 0) goto Label_2708; // 0xa8e JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0xa8f PushV
	var_161_object = var_1_object; // 0xa90 MovT
	var_162_object = var_0_object; // 0xa91 MovT
	func_5475(); // 0xa92 NEW_2
	
Label_2708:
	var_163_int = 12345; // 0xa94 PushI
	var_164_bool = var_47_cvector == var_163_int; // 0xa95 Eq
	if(var_164_bool == 0) goto Label_2716; // 0xa96 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0xa97 PushV
	var_165_object = var_1_object; // 0xa98 MovT
	var_166_object = var_0_object; // 0xa99 MovT
	func_5477(); // 0xa9a NEW_2
	
Label_2716:
	var_178_int = 11988; // 0xa9c PushI
	var_179_bool = var_46_bool == var_178_int; // 0xa9d Eq
	if(var_179_bool == 0) goto Label_2830; // 0xa9e JumpB
	var_180_bool = 0; // 0xa9f PushV
	var_180_bool = 0; // 0xaa0 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0xaa1 PushV
	var_182_object = var_1_object; // 0xaa2 MovT
	func_5629(var_182_object); // 0xaa3 NEW_2
	if(var_181_bool == 0) goto Label_2732; // 0xaa5 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0xaa6 PushV
	var_190_object = var_1_object; // 0xaa7 MovT
	func_5641(var_190_object); // 0xaa8 NEW_2
	if(var_189_bool == 0) goto Label_2732; // 0xaaa JumpB
	var_180_bool = 1; // 0xaab MovB
	
Label_2732:
	if(var_180_bool == 0) goto Label_2748; // 0xaac JumpB
	var_195_string = ""; // 0xaad PushV
	var_195_string = "Neutral"; // 0xaae MovS
	func_2606(var_47_cvector, var_195_string); // 0xaaf NEW_2
	var_212_int = 510844; // 0xab1 PushI
	SetMessage(var_212_int); // 0xab2 TObjFunc
	ClearReplies(); // 0xab4 TObjFunc
	var_213_int = 510845; // 0xab6 PushI
	var_214_int = 11990; // 0xab7 PushI
	var_215_int = 11989; // 0xab8 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xab9 TObjFunc
	return 0; // 0xabb Return
	
Label_2748:
	var_216_string = ""; // 0xabc PushV
	var_216_string = "Neutral"; // 0xabd MovS
	func_2606(var_47_cvector, var_216_string); // 0xabe NEW_2
	var_217_int = 510841; // 0xac0 PushI
	SetMessage(var_217_int); // 0xac1 TObjFunc
	ClearReplies(); // 0xac3 TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0xac5 PushV
	var_219_object = var_1_object; // 0xac6 MovT
	func_5629(var_219_object); // 0xac7 NEW_2
	if(var_218_bool == 0) goto Label_2767; // 0xac9 JumpB
	var_220_int = 510873; // 0xaca PushI
	var_221_int = 12022; // 0xacb PushI
	var_222_int = 12021; // 0xacc PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xacd TObjFunc
	
Label_2767:
	var_223_bool = 0; // 0xacf PushV
	var_223_bool = 0; // 0xad0 MovB
	var_224_bool = 0; // 0xad1 PushV
	var_224_bool = 0; // 0xad2 MovB
	var_225_bool = 0; var_226_object = Obj(); // 0xad3 PushV
	var_226_object = var_1_object; // 0xad4 MovT
	func_5653(var_226_object); // 0xad5 NEW_2
	if(var_225_bool == 0) goto Label_2782; // 0xad7 JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0xad8 PushV
	var_232_object = var_1_object; // 0xad9 MovT
	func_5665(var_232_object); // 0xada NEW_2
	if(var_231_bool == 0) goto Label_2782; // 0xadc JumpB
	var_224_bool = 1; // 0xadd MovB
	
Label_2782:
	if(var_224_bool == 0) goto Label_2789; // 0xade JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xadf PushV
	var_238_object = var_1_object; // 0xae0 MovT
	func_5677(var_237_bool, var_238_object); // 0xae1 NEW_2
	if(var_237_bool == 0) goto Label_2789; // 0xae3 JumpB
	var_223_bool = 1; // 0xae4 MovB
	
Label_2789:
	if(var_223_bool == 0) goto Label_2795; // 0xae5 JumpB
	var_245_int = 510876; // 0xae6 PushI
	var_246_int = 12025; // 0xae7 PushI
	var_247_int = 12024; // 0xae8 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xae9 TObjFunc
	
Label_2795:
	var_248_bool = 0; // 0xaeb PushV
	var_248_bool = 0; // 0xaec MovB
	var_249_bool = 0; // 0xaed PushV
	var_249_bool = 0; // 0xaee MovB
	var_250_bool = 0; var_251_object = Obj(); // 0xaef PushV
	var_251_object = var_1_object; // 0xaf0 MovT
	func_5653(var_251_object); // 0xaf1 NEW_2
	if(var_250_bool == 0) goto Label_2810; // 0xaf3 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0xaf4 PushV
	var_253_object = var_1_object; // 0xaf5 MovT
	func_5687(var_253_object); // 0xaf6 NEW_2
	if(var_252_bool == 0) goto Label_2810; // 0xaf8 JumpB
	var_249_bool = 1; // 0xaf9 MovB
	
Label_2810:
	if(var_249_bool == 0) goto Label_2818; // 0xafa JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0xafb PushV
	var_255_object = var_1_object; // 0xafc MovT
	func_5677(var_254_bool, var_255_object); // 0xafd NEW_2
	var_256_bool = var_254_bool == 0; // 0xaff Not
	if(var_256_bool == 0) goto Label_2818; // 0xb00 JumpB
	var_248_bool = 1; // 0xb01 MovB
	
Label_2818:
	if(var_248_bool == 0) goto Label_2824; // 0xb02 JumpB
	var_257_int = 511160; // 0xb03 PushI
	var_258_int = 12344; // 0xb04 PushI
	var_259_int = 12343; // 0xb05 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xb06 TObjFunc
	
Label_2824:
	var_260_int = 511157; // 0xb08 PushI
	var_261_int = -1; // 0xb09 PushI
	var_262_int = 12342; // 0xb0a PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xb0b TObjFunc
	return 0; // 0xb0d Return
	
Label_2830:
	var_263_int = 10909; // 0xb0e PushI
	var_264_bool = var_46_bool == var_263_int; // 0xb0f Eq
	if(var_264_bool == 0) goto Label_2833; // 0xb10 JumpB
	
Label_2833:
	var_265_int = 10911; // 0xb11 PushI
	var_266_bool = var_46_bool == var_265_int; // 0xb12 Eq
	if(var_266_bool == 0) goto Label_2856; // 0xb13 JumpB
	var_267_string = ""; // 0xb14 PushV
	var_267_string = "Neutral"; // 0xb15 MovS
	func_2606(var_47_cvector, var_267_string); // 0xb16 NEW_2
	var_268_int = 509906; // 0xb18 PushI
	SetMessage(var_268_int); // 0xb19 TObjFunc
	ClearReplies(); // 0xb1b TObjFunc
	var_269_int = 509907; // 0xb1d PushI
	var_270_int = 10913; // 0xb1e PushI
	var_271_int = 10912; // 0xb1f PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xb20 TObjFunc
	var_272_int = 509911; // 0xb22 PushI
	var_273_int = -1; // 0xb23 PushI
	var_274_int = 10916; // 0xb24 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xb25 TObjFunc
	return 0; // 0xb27 Return
	
Label_2856:
	var_275_int = 10913; // 0xb28 PushI
	var_276_bool = var_46_bool == var_275_int; // 0xb29 Eq
	if(var_276_bool == 0) goto Label_2879; // 0xb2a JumpB
	var_277_string = ""; // 0xb2b PushV
	var_277_string = "Neutral"; // 0xb2c MovS
	func_2606(var_47_cvector, var_277_string); // 0xb2d NEW_2
	var_278_int = 509908; // 0xb2f PushI
	SetMessage(var_278_int); // 0xb30 TObjFunc
	ClearReplies(); // 0xb32 TObjFunc
	var_279_int = 509909; // 0xb34 PushI
	var_280_int = -1; // 0xb35 PushI
	var_281_int = 10914; // 0xb36 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xb37 TObjFunc
	var_282_int = 509910; // 0xb39 PushI
	var_283_int = -1; // 0xb3a PushI
	var_284_int = 10915; // 0xb3b PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xb3c TObjFunc
	return 0; // 0xb3e Return
	
Label_2879:
	var_285_int = 10899; // 0xb3f PushI
	var_286_bool = var_46_bool == var_285_int; // 0xb40 Eq
	if(var_286_bool == 0) goto Label_2882; // 0xb41 JumpB
	
Label_2882:
	var_287_int = 10906; // 0xb42 PushI
	var_288_bool = var_46_bool == var_287_int; // 0xb43 Eq
	if(var_288_bool == 0) goto Label_2900; // 0xb44 JumpB
	var_289_string = ""; // 0xb45 PushV
	var_289_string = "Neutral"; // 0xb46 MovS
	func_2606(var_47_cvector, var_289_string); // 0xb47 NEW_2
	var_290_int = 509902; // 0xb49 PushI
	SetMessage(var_290_int); // 0xb4a TObjFunc
	ClearReplies(); // 0xb4c TObjFunc
	var_291_int = 509903; // 0xb4e PushI
	var_292_int = 10901; // 0xb4f PushI
	var_293_int = 10907; // 0xb50 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xb51 TObjFunc
	return 0; // 0xb53 Return
	
Label_2900:
	var_294_int = 10901; // 0xb54 PushI
	var_295_bool = var_46_bool == var_294_int; // 0xb55 Eq
	if(var_295_bool == 0) goto Label_2918; // 0xb56 JumpB
	var_296_string = ""; // 0xb57 PushV
	var_296_string = "Neutral"; // 0xb58 MovS
	func_2606(var_47_cvector, var_296_string); // 0xb59 NEW_2
	var_297_int = 509897; // 0xb5b PushI
	SetMessage(var_297_int); // 0xb5c TObjFunc
	ClearReplies(); // 0xb5e TObjFunc
	var_298_int = 509898; // 0xb60 PushI
	var_299_int = 10903; // 0xb61 PushI
	var_300_int = 10902; // 0xb62 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xb63 TObjFunc
	return 0; // 0xb65 Return
	
Label_2918:
	var_301_int = 10903; // 0xb66 PushI
	var_302_bool = var_46_bool == var_301_int; // 0xb67 Eq
	if(var_302_bool == 0) goto Label_2936; // 0xb68 JumpB
	var_303_string = ""; // 0xb69 PushV
	var_303_string = "Neutral"; // 0xb6a MovS
	func_2606(var_47_cvector, var_303_string); // 0xb6b NEW_2
	var_304_int = 509899; // 0xb6d PushI
	SetMessage(var_304_int); // 0xb6e TObjFunc
	ClearReplies(); // 0xb70 TObjFunc
	var_305_int = 509900; // 0xb72 PushI
	var_306_int = -1; // 0xb73 PushI
	var_307_int = 10904; // 0xb74 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xb75 TObjFunc
	return 0; // 0xb77 Return
	
Label_2936:
	var_308_int = 10885; // 0xb78 PushI
	var_309_bool = var_46_bool == var_308_int; // 0xb79 Eq
	if(var_309_bool == 0) goto Label_2939; // 0xb7a JumpB
	
Label_2939:
	var_310_int = 10887; // 0xb7b PushI
	var_311_bool = var_46_bool == var_310_int; // 0xb7c Eq
	if(var_311_bool == 0) goto Label_2962; // 0xb7d JumpB
	var_312_string = ""; // 0xb7e PushV
	var_312_string = "Neutral"; // 0xb7f MovS
	func_2606(var_47_cvector, var_312_string); // 0xb80 NEW_2
	var_313_int = 509884; // 0xb82 PushI
	SetMessage(var_313_int); // 0xb83 TObjFunc
	ClearReplies(); // 0xb85 TObjFunc
	var_314_int = 509886; // 0xb87 PushI
	var_315_int = 10890; // 0xb88 PushI
	var_316_int = 10889; // 0xb89 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xb8a TObjFunc
	var_317_int = 509885; // 0xb8c PushI
	var_318_int = -1; // 0xb8d PushI
	var_319_int = 10888; // 0xb8e PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xb8f TObjFunc
	return 0; // 0xb91 Return
	
Label_2962:
	var_320_int = 10890; // 0xb92 PushI
	var_321_bool = var_46_bool == var_320_int; // 0xb93 Eq
	if(var_321_bool == 0) goto Label_2985; // 0xb94 JumpB
	var_322_string = ""; // 0xb95 PushV
	var_322_string = "Neutral"; // 0xb96 MovS
	func_2606(var_47_cvector, var_322_string); // 0xb97 NEW_2
	var_323_int = 509887; // 0xb99 PushI
	SetMessage(var_323_int); // 0xb9a TObjFunc
	ClearReplies(); // 0xb9c TObjFunc
	var_324_int = 509888; // 0xb9e PushI
	var_325_int = 10892; // 0xb9f PushI
	var_326_int = 10891; // 0xba0 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xba1 TObjFunc
	var_327_int = 509892; // 0xba3 PushI
	var_328_int = -1; // 0xba4 PushI
	var_329_int = 10895; // 0xba5 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xba6 TObjFunc
	return 0; // 0xba8 Return
	
Label_2985:
	var_330_int = 10892; // 0xba9 PushI
	var_331_bool = var_46_bool == var_330_int; // 0xbaa Eq
	if(var_331_bool == 0) goto Label_3008; // 0xbab JumpB
	var_332_string = ""; // 0xbac PushV
	var_332_string = "Neutral"; // 0xbad MovS
	func_2606(var_47_cvector, var_332_string); // 0xbae NEW_2
	var_333_int = 509889; // 0xbb0 PushI
	SetMessage(var_333_int); // 0xbb1 TObjFunc
	ClearReplies(); // 0xbb3 TObjFunc
	var_334_int = 509890; // 0xbb5 PushI
	var_335_int = -1; // 0xbb6 PushI
	var_336_int = 10893; // 0xbb7 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xbb8 TObjFunc
	var_337_int = 509891; // 0xbba PushI
	var_338_int = -1; // 0xbbb PushI
	var_339_int = 10894; // 0xbbc PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xbbd TObjFunc
	return 0; // 0xbbf Return
	
Label_3008:
	var_340_int = 12344; // 0xbc0 PushI
	var_341_bool = var_46_bool == var_340_int; // 0xbc1 Eq
	if(var_341_bool == 0) goto Label_3026; // 0xbc2 JumpB
	var_342_string = ""; // 0xbc3 PushV
	var_342_string = "Neutral"; // 0xbc4 MovS
	func_2606(var_47_cvector, var_342_string); // 0xbc5 NEW_2
	var_343_int = 511161; // 0xbc7 PushI
	SetMessage(var_343_int); // 0xbc8 TObjFunc
	ClearReplies(); // 0xbca TObjFunc
	var_344_int = 511162; // 0xbcc PushI
	var_345_int = -1; // 0xbcd PushI
	var_346_int = 12345; // 0xbce PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xbcf TObjFunc
	return 0; // 0xbd1 Return
	
Label_3026:
	var_347_int = 12025; // 0xbd2 PushI
	var_348_bool = var_46_bool == var_347_int; // 0xbd3 Eq
	if(var_348_bool == 0) goto Label_3049; // 0xbd4 JumpB
	var_349_string = ""; // 0xbd5 PushV
	var_349_string = "Neutral"; // 0xbd6 MovS
	func_2606(var_47_cvector, var_349_string); // 0xbd7 NEW_2
	var_350_int = 510877; // 0xbd9 PushI
	SetMessage(var_350_int); // 0xbda TObjFunc
	ClearReplies(); // 0xbdc TObjFunc
	var_351_int = 510878; // 0xbde PushI
	var_352_int = 12030; // 0xbdf PushI
	var_353_int = 12026; // 0xbe0 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xbe1 TObjFunc
	var_354_int = 510879; // 0xbe3 PushI
	var_355_int = 12028; // 0xbe4 PushI
	var_356_int = 12027; // 0xbe5 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xbe6 TObjFunc
	return 0; // 0xbe8 Return
	
Label_3049:
	var_357_int = 12028; // 0xbe9 PushI
	var_358_bool = var_46_bool == var_357_int; // 0xbea Eq
	if(var_358_bool == 0) goto Label_3067; // 0xbeb JumpB
	var_359_string = ""; // 0xbec PushV
	var_359_string = "Neutral"; // 0xbed MovS
	func_2606(var_47_cvector, var_359_string); // 0xbee NEW_2
	var_360_int = 510880; // 0xbf0 PushI
	SetMessage(var_360_int); // 0xbf1 TObjFunc
	ClearReplies(); // 0xbf3 TObjFunc
	var_361_int = 510881; // 0xbf5 PushI
	var_362_int = -1; // 0xbf6 PushI
	var_363_int = 12029; // 0xbf7 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xbf8 TObjFunc
	return 0; // 0xbfa Return
	
Label_3067:
	var_364_int = 12030; // 0xbfb PushI
	var_365_bool = var_46_bool == var_364_int; // 0xbfc Eq
	if(var_365_bool == 0) goto Label_3085; // 0xbfd JumpB
	var_366_string = ""; // 0xbfe PushV
	var_366_string = "Neutral"; // 0xbff MovS
	func_2606(var_47_cvector, var_366_string); // 0xc00 NEW_2
	var_367_int = 510882; // 0xc02 PushI
	SetMessage(var_367_int); // 0xc03 TObjFunc
	ClearReplies(); // 0xc05 TObjFunc
	var_368_int = 510883; // 0xc07 PushI
	var_369_int = 12032; // 0xc08 PushI
	var_370_int = 12031; // 0xc09 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xc0a TObjFunc
	return 0; // 0xc0c Return
	
Label_3085:
	var_371_int = 12032; // 0xc0d PushI
	var_372_bool = var_46_bool == var_371_int; // 0xc0e Eq
	if(var_372_bool == 0) goto Label_3103; // 0xc0f JumpB
	var_373_string = ""; // 0xc10 PushV
	var_373_string = "Neutral"; // 0xc11 MovS
	func_2606(var_47_cvector, var_373_string); // 0xc12 NEW_2
	var_374_int = 510884; // 0xc14 PushI
	SetMessage(var_374_int); // 0xc15 TObjFunc
	ClearReplies(); // 0xc17 TObjFunc
	var_375_int = 510885; // 0xc19 PushI
	var_376_int = -1; // 0xc1a PushI
	var_377_int = 12033; // 0xc1b PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xc1c TObjFunc
	return 0; // 0xc1e Return
	
Label_3103:
	var_378_int = 12022; // 0xc1f PushI
	var_379_bool = var_46_bool == var_378_int; // 0xc20 Eq
	if(var_379_bool == 0) goto Label_3121; // 0xc21 JumpB
	var_380_string = ""; // 0xc22 PushV
	var_380_string = "Neutral"; // 0xc23 MovS
	func_2606(var_47_cvector, var_380_string); // 0xc24 NEW_2
	var_381_int = 510874; // 0xc26 PushI
	SetMessage(var_381_int); // 0xc27 TObjFunc
	ClearReplies(); // 0xc29 TObjFunc
	var_382_int = 510875; // 0xc2b PushI
	var_383_int = -1; // 0xc2c PushI
	var_384_int = 12023; // 0xc2d PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xc2e TObjFunc
	return 0; // 0xc30 Return
	
Label_3121:
	var_385_int = 11990; // 0xc31 PushI
	var_386_bool = var_46_bool == var_385_int; // 0xc32 Eq
	if(var_386_bool == 0) goto Label_3149; // 0xc33 JumpB
	var_387_string = ""; // 0xc34 PushV
	var_387_string = "Neutral"; // 0xc35 MovS
	func_2606(var_47_cvector, var_387_string); // 0xc36 NEW_2
	var_388_int = 510846; // 0xc38 PushI
	SetMessage(var_388_int); // 0xc39 TObjFunc
	ClearReplies(); // 0xc3b TObjFunc
	var_389_int = 510847; // 0xc3d PushI
	var_390_int = 11994; // 0xc3e PushI
	var_391_int = 11991; // 0xc3f PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xc40 TObjFunc
	var_392_int = 510849; // 0xc42 PushI
	var_393_int = 11994; // 0xc43 PushI
	var_394_int = 11993; // 0xc44 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xc45 TObjFunc
	var_395_int = 510848; // 0xc47 PushI
	var_396_int = 12010; // 0xc48 PushI
	var_397_int = 11992; // 0xc49 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xc4a TObjFunc
	return 0; // 0xc4c Return
	
Label_3149:
	var_398_int = 11994; // 0xc4d PushI
	var_399_bool = var_46_bool == var_398_int; // 0xc4e Eq
	if(var_399_bool == 0) goto Label_3177; // 0xc4f JumpB
	var_400_string = ""; // 0xc50 PushV
	var_400_string = "Neutral"; // 0xc51 MovS
	func_2606(var_47_cvector, var_400_string); // 0xc52 NEW_2
	var_401_int = 510850; // 0xc54 PushI
	SetMessage(var_401_int); // 0xc55 TObjFunc
	ClearReplies(); // 0xc57 TObjFunc
	var_402_int = 510852; // 0xc59 PushI
	var_403_int = 12003; // 0xc5a PushI
	var_404_int = 11997; // 0xc5b PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xc5c TObjFunc
	var_405_int = 510853; // 0xc5e PushI
	var_406_int = 11999; // 0xc5f PushI
	var_407_int = 11998; // 0xc60 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xc61 TObjFunc
	var_408_int = 510851; // 0xc63 PushI
	var_409_int = 12001; // 0xc64 PushI
	var_410_int = 11995; // 0xc65 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xc66 TObjFunc
	return 0; // 0xc68 Return
	
Label_3177:
	var_411_int = 12001; // 0xc69 PushI
	var_412_bool = var_46_bool == var_411_int; // 0xc6a Eq
	if(var_412_bool == 0) goto Label_3195; // 0xc6b JumpB
	var_413_string = ""; // 0xc6c PushV
	var_413_string = "Neutral"; // 0xc6d MovS
	func_2606(var_47_cvector, var_413_string); // 0xc6e NEW_2
	var_414_int = 510856; // 0xc70 PushI
	SetMessage(var_414_int); // 0xc71 TObjFunc
	ClearReplies(); // 0xc73 TObjFunc
	var_415_int = 510857; // 0xc75 PushI
	var_416_int = 12003; // 0xc76 PushI
	var_417_int = 12002; // 0xc77 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0xc78 TObjFunc
	return 0; // 0xc7a Return
	
Label_3195:
	var_418_int = 11999; // 0xc7b PushI
	var_419_bool = var_46_bool == var_418_int; // 0xc7c Eq
	if(var_419_bool == 0) goto Label_3213; // 0xc7d JumpB
	var_420_string = ""; // 0xc7e PushV
	var_420_string = "Neutral"; // 0xc7f MovS
	func_2606(var_47_cvector, var_420_string); // 0xc80 NEW_2
	var_421_int = 510854; // 0xc82 PushI
	SetMessage(var_421_int); // 0xc83 TObjFunc
	ClearReplies(); // 0xc85 TObjFunc
	var_422_int = 510855; // 0xc87 PushI
	var_423_int = 12003; // 0xc88 PushI
	var_424_int = 12000; // 0xc89 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0xc8a TObjFunc
	return 0; // 0xc8c Return
	
Label_3213:
	var_425_int = 12003; // 0xc8d PushI
	var_426_bool = var_46_bool == var_425_int; // 0xc8e Eq
	if(var_426_bool == 0) goto Label_3236; // 0xc8f JumpB
	var_427_string = ""; // 0xc90 PushV
	var_427_string = "Neutral"; // 0xc91 MovS
	func_2606(var_47_cvector, var_427_string); // 0xc92 NEW_2
	var_428_int = 510858; // 0xc94 PushI
	SetMessage(var_428_int); // 0xc95 TObjFunc
	ClearReplies(); // 0xc97 TObjFunc
	var_429_int = 510859; // 0xc99 PushI
	var_430_int = 12007; // 0xc9a PushI
	var_431_int = 12006; // 0xc9b PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xc9c TObjFunc
	var_432_int = 534070; // 0xc9e PushI
	var_433_int = 35664; // 0xc9f PushI
	var_434_int = 35663; // 0xca0 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xca1 TObjFunc
	return 0; // 0xca3 Return
	
Label_3236:
	var_435_int = 35664; // 0xca4 PushI
	var_436_bool = var_46_bool == var_435_int; // 0xca5 Eq
	if(var_436_bool == 0) goto Label_3254; // 0xca6 JumpB
	var_437_string = ""; // 0xca7 PushV
	var_437_string = "Neutral"; // 0xca8 MovS
	func_2606(var_47_cvector, var_437_string); // 0xca9 NEW_2
	var_438_int = 534071; // 0xcab PushI
	SetMessage(var_438_int); // 0xcac TObjFunc
	ClearReplies(); // 0xcae TObjFunc
	var_439_int = 534072; // 0xcb0 PushI
	var_440_int = 12010; // 0xcb1 PushI
	var_441_int = 35665; // 0xcb2 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0xcb3 TObjFunc
	return 0; // 0xcb5 Return
	
Label_3254:
	var_442_int = 12007; // 0xcb6 PushI
	var_443_bool = var_46_bool == var_442_int; // 0xcb7 Eq
	if(var_443_bool == 0) goto Label_3277; // 0xcb8 JumpB
	var_444_string = ""; // 0xcb9 PushV
	var_444_string = "Neutral"; // 0xcba MovS
	func_2606(var_47_cvector, var_444_string); // 0xcbb NEW_2
	var_445_int = 510860; // 0xcbd PushI
	SetMessage(var_445_int); // 0xcbe TObjFunc
	ClearReplies(); // 0xcc0 TObjFunc
	var_446_int = 510861; // 0xcc2 PushI
	var_447_int = 12010; // 0xcc3 PushI
	var_448_int = 12008; // 0xcc4 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0xcc5 TObjFunc
	var_449_int = 510862; // 0xcc7 PushI
	var_450_int = 12014; // 0xcc8 PushI
	var_451_int = 12009; // 0xcc9 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0xcca TObjFunc
	return 0; // 0xccc Return
	
Label_3277:
	var_452_int = 12010; // 0xccd PushI
	var_453_bool = var_46_bool == var_452_int; // 0xcce Eq
	if(var_453_bool == 0) goto Label_3300; // 0xccf JumpB
	var_454_string = ""; // 0xcd0 PushV
	var_454_string = "Neutral"; // 0xcd1 MovS
	func_2606(var_47_cvector, var_454_string); // 0xcd2 NEW_2
	var_455_int = 510863; // 0xcd4 PushI
	SetMessage(var_455_int); // 0xcd5 TObjFunc
	ClearReplies(); // 0xcd7 TObjFunc
	var_456_int = 510864; // 0xcd9 PushI
	var_457_int = 12012; // 0xcda PushI
	var_458_int = 12011; // 0xcdb PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0xcdc TObjFunc
	var_459_int = 534073; // 0xcde PushI
	var_460_int = 12012; // 0xcdf PushI
	var_461_int = 35667; // 0xce0 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xce1 TObjFunc
	return 0; // 0xce3 Return
	
Label_3300:
	var_462_int = 12012; // 0xce4 PushI
	var_463_bool = var_46_bool == var_462_int; // 0xce5 Eq
	if(var_463_bool == 0) goto Label_3318; // 0xce6 JumpB
	var_464_string = ""; // 0xce7 PushV
	var_464_string = "Neutral"; // 0xce8 MovS
	func_2606(var_47_cvector, var_464_string); // 0xce9 NEW_2
	var_465_int = 510865; // 0xceb PushI
	SetMessage(var_465_int); // 0xcec TObjFunc
	ClearReplies(); // 0xcee TObjFunc
	var_466_int = 510866; // 0xcf0 PushI
	var_467_int = 12014; // 0xcf1 PushI
	var_468_int = 12013; // 0xcf2 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0xcf3 TObjFunc
	return 0; // 0xcf5 Return
	
Label_3318:
	var_469_int = 12014; // 0xcf6 PushI
	var_470_bool = var_46_bool == var_469_int; // 0xcf7 Eq
	if(var_470_bool == 0) goto Label_3336; // 0xcf8 JumpB
	var_471_string = ""; // 0xcf9 PushV
	var_471_string = "Neutral"; // 0xcfa MovS
	func_2606(var_47_cvector, var_471_string); // 0xcfb NEW_2
	var_472_int = 510867; // 0xcfd PushI
	SetMessage(var_472_int); // 0xcfe TObjFunc
	ClearReplies(); // 0xd00 TObjFunc
	var_473_int = 534074; // 0xd02 PushI
	var_474_int = 35670; // 0xd03 PushI
	var_475_int = 35669; // 0xd04 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0xd05 TObjFunc
	return 0; // 0xd07 Return
	
Label_3336:
	var_476_int = 35670; // 0xd08 PushI
	var_477_bool = var_46_bool == var_476_int; // 0xd09 Eq
	if(var_477_bool == 0) goto Label_3359; // 0xd0a JumpB
	var_478_string = ""; // 0xd0b PushV
	var_478_string = "Neutral"; // 0xd0c MovS
	func_2606(var_47_cvector, var_478_string); // 0xd0d NEW_2
	var_479_int = 534075; // 0xd0f PushI
	SetMessage(var_479_int); // 0xd10 TObjFunc
	ClearReplies(); // 0xd12 TObjFunc
	var_480_int = 510869; // 0xd14 PushI
	var_481_int = 12017; // 0xd15 PushI
	var_482_int = 12016; // 0xd16 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0xd17 TObjFunc
	var_483_int = 510868; // 0xd19 PushI
	var_484_int = -1; // 0xd1a PushI
	var_485_int = 12015; // 0xd1b PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0xd1c TObjFunc
	return 0; // 0xd1e Return
	
Label_3359:
	var_486_int = 12017; // 0xd1f PushI
	var_487_bool = var_46_bool == var_486_int; // 0xd20 Eq
	if(var_487_bool == 0) goto Label_3382; // 0xd21 JumpB
	var_488_string = ""; // 0xd22 PushV
	var_488_string = "Neutral"; // 0xd23 MovS
	func_2606(var_47_cvector, var_488_string); // 0xd24 NEW_2
	var_489_int = 510870; // 0xd26 PushI
	SetMessage(var_489_int); // 0xd27 TObjFunc
	ClearReplies(); // 0xd29 TObjFunc
	var_490_int = 510871; // 0xd2b PushI
	var_491_int = -1; // 0xd2c PushI
	var_492_int = 12018; // 0xd2d PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0xd2e TObjFunc
	var_493_int = 510872; // 0xd30 PushI
	var_494_int = -1; // 0xd31 PushI
	var_495_int = 12019; // 0xd32 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0xd33 TObjFunc
	return 0; // 0xd35 Return
	
Label_3382:
	var_3_string = 1; // 0xd36 TMovB
	var_496_bool = 0; // 0xd37 PushV
	func_5249(var_496_bool); // 0xd38 NEW_2
	if(var_496_bool == 0) goto Label_3390; // 0xd3a JumpB
	lshStopAnimation(); // 0xd3b Func
	goto Label_3392; // 0xd3d Jump
	
Label_3392:
	return 0; // 0xd40 Return
	
Label_3390:
	StopAnimation(); // 0xd3e Func
	
Label_3394:
	return 0; // 0xd42 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xdf3 PushI
	if(var_48_int == 0) goto Label_3687; // 0xdf4 JumpB
	func_5102(); // 0xdf6 NEW_2
	var_50_int = 12437; // 0xdf8 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xdf9 Eq
	if(var_51_bool == 0) goto Label_3584; // 0xdfa JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xdfb PushV
	var_52_object = var_1_object; // 0xdfc MovT
	var_53_object = var_0_object; // 0xdfd MovT
	func_5517(); // 0xdfe NEW_2
	
Label_3584:
	var_56_int = 12435; // 0xe00 PushI
	var_57_bool = var_46_bool == var_56_int; // 0xe01 Eq
	if(var_57_bool == 0) goto Label_3621; // 0xe02 JumpB
	var_58_string = ""; // 0xe03 PushV
	var_58_string = "Neutral"; // 0xe04 MovS
	func_3548(var_47_cvector, var_58_string); // 0xe05 NEW_2
	var_75_int = 511245; // 0xe07 PushI
	SetMessage(var_75_int); // 0xe08 TObjFunc
	ClearReplies(); // 0xe0a TObjFunc
	var_76_bool = 0; // 0xe0c PushV
	var_76_bool = 0; // 0xe0d MovB
	var_77_bool = 0; var_78_object = Obj(); // 0xe0e PushV
	var_78_object = var_1_object; // 0xe0f MovT
	func_5800(var_78_object); // 0xe10 NEW_2
	if(var_77_bool == 0) goto Label_3609; // 0xe12 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0xe13 PushV
	var_86_object = var_1_object; // 0xe14 MovT
	func_5812(var_86_object); // 0xe15 NEW_2
	if(var_85_bool == 0) goto Label_3609; // 0xe17 JumpB
	var_76_bool = 1; // 0xe18 MovB
	
Label_3609:
	if(var_76_bool == 0) goto Label_3615; // 0xe19 JumpB
	var_91_int = 511247; // 0xe1a PushI
	var_92_int = 12438; // 0xe1b PushI
	var_93_int = 12437; // 0xe1c PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xe1d TObjFunc
	
Label_3615:
	var_94_int = 511246; // 0xe1f PushI
	var_95_int = -1; // 0xe20 PushI
	var_96_int = 12436; // 0xe21 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xe22 TObjFunc
	return 0; // 0xe24 Return
	
Label_3621:
	var_97_int = 12438; // 0xe25 PushI
	var_98_bool = var_46_bool == var_97_int; // 0xe26 Eq
	if(var_98_bool == 0) goto Label_3639; // 0xe27 JumpB
	var_99_string = ""; // 0xe28 PushV
	var_99_string = "Neutral"; // 0xe29 MovS
	func_3548(var_47_cvector, var_99_string); // 0xe2a NEW_2
	var_100_int = 511248; // 0xe2c PushI
	SetMessage(var_100_int); // 0xe2d TObjFunc
	ClearReplies(); // 0xe2f TObjFunc
	var_101_int = 511249; // 0xe31 PushI
	var_102_int = 12440; // 0xe32 PushI
	var_103_int = 12439; // 0xe33 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xe34 TObjFunc
	return 0; // 0xe36 Return
	
Label_3639:
	var_104_int = 12440; // 0xe37 PushI
	var_105_bool = var_46_bool == var_104_int; // 0xe38 Eq
	if(var_105_bool == 0) goto Label_3657; // 0xe39 JumpB
	var_106_string = ""; // 0xe3a PushV
	var_106_string = "Neutral"; // 0xe3b MovS
	func_3548(var_47_cvector, var_106_string); // 0xe3c NEW_2
	var_107_int = 511250; // 0xe3e PushI
	SetMessage(var_107_int); // 0xe3f TObjFunc
	ClearReplies(); // 0xe41 TObjFunc
	var_108_int = 511251; // 0xe43 PushI
	var_109_int = 12442; // 0xe44 PushI
	var_110_int = 12441; // 0xe45 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xe46 TObjFunc
	return 0; // 0xe48 Return
	
Label_3657:
	var_111_int = 12442; // 0xe49 PushI
	var_112_bool = var_46_bool == var_111_int; // 0xe4a Eq
	if(var_112_bool == 0) goto Label_3675; // 0xe4b JumpB
	var_113_string = ""; // 0xe4c PushV
	var_113_string = "Neutral"; // 0xe4d MovS
	func_3548(var_47_cvector, var_113_string); // 0xe4e NEW_2
	var_114_int = 511252; // 0xe50 PushI
	SetMessage(var_114_int); // 0xe51 TObjFunc
	ClearReplies(); // 0xe53 TObjFunc
	var_115_int = 511253; // 0xe55 PushI
	var_116_int = -1; // 0xe56 PushI
	var_117_int = 12443; // 0xe57 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xe58 TObjFunc
	return 0; // 0xe5a Return
	
Label_3675:
	var_3_string = 1; // 0xe5b TMovB
	var_118_bool = 0; // 0xe5c PushV
	func_5249(var_118_bool); // 0xe5d NEW_2
	if(var_118_bool == 0) goto Label_3683; // 0xe5f JumpB
	lshStopAnimation(); // 0xe60 Func
	goto Label_3685; // 0xe62 Jump
	
Label_3685:
	return 0; // 0xe65 Return
	
Label_3683:
	StopAnimation(); // 0xe63 Func
	
Label_3687:
	return 0; // 0xe67 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xf30 PushI
	if(var_48_int == 0) goto Label_4338; // 0xf31 JumpB
	func_5102(); // 0xf33 NEW_2
	var_50_int = 34823; // 0xf35 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xf36 Eq
	if(var_51_bool == 0) goto Label_3901; // 0xf37 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xf38 PushV
	var_52_object = var_1_object; // 0xf39 MovT
	var_53_object = var_0_object; // 0xf3a MovT
	func_5505(); // 0xf3b NEW_2
	
Label_3901:
	var_56_int = 34827; // 0xf3d PushI
	var_57_bool = var_47_cvector == var_56_int; // 0xf3e Eq
	if(var_57_bool == 0) goto Label_3919; // 0xf3f JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xf40 PushV
	var_58_object = var_1_object; // 0xf41 MovT
	var_59_object = var_0_object; // 0xf42 MovT
	func_5269(); // 0xf43 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0xf45 PushV
	var_85_object = var_1_object; // 0xf46 MovT
	var_86_object = var_0_object; // 0xf47 MovT
	func_5278(var_86_object); // 0xf48 NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0xf4a PushV
	var_109_object = var_1_object; // 0xf4b MovT
	var_110_object = var_0_object; // 0xf4c MovT
	func_5263(); // 0xf4d NEW_2
	
Label_3919:
	var_113_int = 14700; // 0xf4f PushI
	var_114_bool = var_47_cvector == var_113_int; // 0xf50 Eq
	if(var_114_bool == 0) goto Label_3927; // 0xf51 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0xf52 PushV
	var_115_object = var_1_object; // 0xf53 MovT
	var_116_object = var_0_object; // 0xf54 MovT
	func_5511(); // 0xf55 NEW_2
	
Label_3927:
	var_119_int = 14699; // 0xf57 PushI
	var_120_bool = var_46_bool == var_119_int; // 0xf58 Eq
	if(var_120_bool == 0) goto Label_3988; // 0xf59 JumpB
	var_121_string = ""; // 0xf5a PushV
	var_121_string = "Neutral"; // 0xf5b MovS
	func_3865(var_47_cvector, var_121_string); // 0xf5c NEW_2
	var_138_int = 513462; // 0xf5e PushI
	SetMessage(var_138_int); // 0xf5f TObjFunc
	ClearReplies(); // 0xf61 TObjFunc
	var_139_bool = 0; // 0xf63 PushV
	var_139_bool = 0; // 0xf64 MovB
	var_140_bool = 0; var_141_object = Obj(); // 0xf65 PushV
	var_141_object = var_1_object; // 0xf66 MovT
	func_5764(var_141_object); // 0xf67 NEW_2
	if(var_140_bool == 0) goto Label_3952; // 0xf69 JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0xf6a PushV
	var_149_object = var_1_object; // 0xf6b MovT
	func_5752(var_149_object); // 0xf6c NEW_2
	if(var_148_bool == 0) goto Label_3952; // 0xf6e JumpB
	var_139_bool = 1; // 0xf6f MovB
	
Label_3952:
	if(var_139_bool == 0) goto Label_3958; // 0xf70 JumpB
	var_154_int = 533315; // 0xf71 PushI
	var_155_int = 37609; // 0xf72 PushI
	var_156_int = 34823; // 0xf73 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0xf74 TObjFunc
	
Label_3958:
	var_157_bool = 0; // 0xf76 PushV
	var_157_bool = 0; // 0xf77 MovB
	var_158_bool = 0; var_159_object = Obj(); // 0xf78 PushV
	var_159_object = var_1_object; // 0xf79 MovT
	func_5776(var_159_object); // 0xf7a NEW_2
	if(var_158_bool == 0) goto Label_3971; // 0xf7c JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0xf7d PushV
	var_165_object = var_1_object; // 0xf7e MovT
	func_5788(var_165_object); // 0xf7f NEW_2
	if(var_164_bool == 0) goto Label_3971; // 0xf81 JumpB
	var_157_bool = 1; // 0xf82 MovB
	
Label_3971:
	if(var_157_bool == 0) goto Label_3977; // 0xf83 JumpB
	var_170_int = 513463; // 0xf84 PushI
	var_171_int = 14713; // 0xf85 PushI
	var_172_int = 14700; // 0xf86 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xf87 TObjFunc
	
Label_3977:
	var_173_int = 513483; // 0xf89 PushI
	var_174_int = -1; // 0xf8a PushI
	var_175_int = 14721; // 0xf8b PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xf8c TObjFunc
	var_176_int = 535898; // 0xf8e PushI
	var_177_int = -1; // 0xf8f PushI
	var_178_int = 37608; // 0xf90 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xf91 TObjFunc
	return 0; // 0xf93 Return
	
Label_3988:
	var_179_int = 14713; // 0xf94 PushI
	var_180_bool = var_46_bool == var_179_int; // 0xf95 Eq
	if(var_180_bool == 0) goto Label_4011; // 0xf96 JumpB
	var_181_string = ""; // 0xf97 PushV
	var_181_string = "Neutral"; // 0xf98 MovS
	func_3865(var_47_cvector, var_181_string); // 0xf99 NEW_2
	var_182_int = 513476; // 0xf9b PushI
	SetMessage(var_182_int); // 0xf9c TObjFunc
	ClearReplies(); // 0xf9e TObjFunc
	var_183_int = 513477; // 0xfa0 PushI
	var_184_int = 14715; // 0xfa1 PushI
	var_185_int = 14714; // 0xfa2 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xfa3 TObjFunc
	var_186_int = 535926; // 0xfa5 PushI
	var_187_int = 37644; // 0xfa6 PushI
	var_188_int = 37643; // 0xfa7 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xfa8 TObjFunc
	return 0; // 0xfaa Return
	
Label_4011:
	var_189_int = 37644; // 0xfab PushI
	var_190_bool = var_46_bool == var_189_int; // 0xfac Eq
	if(var_190_bool == 0) goto Label_4034; // 0xfad JumpB
	var_191_string = ""; // 0xfae PushV
	var_191_string = "Neutral"; // 0xfaf MovS
	func_3865(var_47_cvector, var_191_string); // 0xfb0 NEW_2
	var_192_int = 535927; // 0xfb2 PushI
	SetMessage(var_192_int); // 0xfb3 TObjFunc
	ClearReplies(); // 0xfb5 TObjFunc
	var_193_int = 535928; // 0xfb7 PushI
	var_194_int = -1; // 0xfb8 PushI
	var_195_int = 37645; // 0xfb9 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0xfba TObjFunc
	var_196_int = 535929; // 0xfbc PushI
	var_197_int = 14715; // 0xfbd PushI
	var_198_int = 37646; // 0xfbe PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xfbf TObjFunc
	return 0; // 0xfc1 Return
	
Label_4034:
	var_199_int = 14715; // 0xfc2 PushI
	var_200_bool = var_46_bool == var_199_int; // 0xfc3 Eq
	if(var_200_bool == 0) goto Label_4057; // 0xfc4 JumpB
	var_201_string = ""; // 0xfc5 PushV
	var_201_string = "Neutral"; // 0xfc6 MovS
	func_3865(var_47_cvector, var_201_string); // 0xfc7 NEW_2
	var_202_int = 513478; // 0xfc9 PushI
	SetMessage(var_202_int); // 0xfca TObjFunc
	ClearReplies(); // 0xfcc TObjFunc
	var_203_int = 513480; // 0xfce PushI
	var_204_int = 14718; // 0xfcf PushI
	var_205_int = 14717; // 0xfd0 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xfd1 TObjFunc
	var_206_int = 513479; // 0xfd3 PushI
	var_207_int = -1; // 0xfd4 PushI
	var_208_int = 14716; // 0xfd5 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xfd6 TObjFunc
	return 0; // 0xfd8 Return
	
Label_4057:
	var_209_int = 14718; // 0xfd9 PushI
	var_210_bool = var_46_bool == var_209_int; // 0xfda Eq
	if(var_210_bool == 0) goto Label_4075; // 0xfdb JumpB
	var_211_string = ""; // 0xfdc PushV
	var_211_string = "Neutral"; // 0xfdd MovS
	func_3865(var_47_cvector, var_211_string); // 0xfde NEW_2
	var_212_int = 513481; // 0xfe0 PushI
	SetMessage(var_212_int); // 0xfe1 TObjFunc
	ClearReplies(); // 0xfe3 TObjFunc
	var_213_int = 513482; // 0xfe5 PushI
	var_214_int = -1; // 0xfe6 PushI
	var_215_int = 14719; // 0xfe7 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xfe8 TObjFunc
	return 0; // 0xfea Return
	
Label_4075:
	var_216_int = 37609; // 0xfeb PushI
	var_217_bool = var_46_bool == var_216_int; // 0xfec Eq
	if(var_217_bool == 0) goto Label_4098; // 0xfed JumpB
	var_218_string = ""; // 0xfee PushV
	var_218_string = "Neutral"; // 0xfef MovS
	func_3865(var_47_cvector, var_218_string); // 0xff0 NEW_2
	var_219_int = 535899; // 0xff2 PushI
	SetMessage(var_219_int); // 0xff3 TObjFunc
	ClearReplies(); // 0xff5 TObjFunc
	var_220_int = 535900; // 0xff7 PushI
	var_221_int = 37611; // 0xff8 PushI
	var_222_int = 37610; // 0xff9 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xffa TObjFunc
	var_223_int = 535905; // 0xffc PushI
	var_224_int = 37611; // 0xffd PushI
	var_225_int = 37615; // 0xffe PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xfff TObjFunc
	return 0; // 0x1001 Return
	
Label_4098:
	var_226_int = 37611; // 0x1002 PushI
	var_227_bool = var_46_bool == var_226_int; // 0x1003 Eq
	if(var_227_bool == 0) goto Label_4121; // 0x1004 JumpB
	var_228_string = ""; // 0x1005 PushV
	var_228_string = "Neutral"; // 0x1006 MovS
	func_3865(var_47_cvector, var_228_string); // 0x1007 NEW_2
	var_229_int = 535901; // 0x1009 PushI
	SetMessage(var_229_int); // 0x100a TObjFunc
	ClearReplies(); // 0x100c TObjFunc
	var_230_int = 535902; // 0x100e PushI
	var_231_int = 37613; // 0x100f PushI
	var_232_int = 37612; // 0x1010 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1011 TObjFunc
	var_233_int = 535908; // 0x1013 PushI
	var_234_int = 37620; // 0x1014 PushI
	var_235_int = 37619; // 0x1015 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1016 TObjFunc
	return 0; // 0x1018 Return
	
Label_4121:
	var_236_int = 37620; // 0x1019 PushI
	var_237_bool = var_46_bool == var_236_int; // 0x101a Eq
	if(var_237_bool == 0) goto Label_4144; // 0x101b JumpB
	var_238_string = ""; // 0x101c PushV
	var_238_string = "Neutral"; // 0x101d MovS
	func_3865(var_47_cvector, var_238_string); // 0x101e NEW_2
	var_239_int = 535909; // 0x1020 PushI
	SetMessage(var_239_int); // 0x1021 TObjFunc
	ClearReplies(); // 0x1023 TObjFunc
	var_240_int = 535914; // 0x1025 PushI
	var_241_int = 37613; // 0x1026 PushI
	var_242_int = 37625; // 0x1027 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1028 TObjFunc
	var_243_int = 535904; // 0x102a PushI
	var_244_int = 37617; // 0x102b PushI
	var_245_int = 37614; // 0x102c PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x102d TObjFunc
	return 0; // 0x102f Return
	
Label_4144:
	var_246_int = 37613; // 0x1030 PushI
	var_247_bool = var_46_bool == var_246_int; // 0x1031 Eq
	if(var_247_bool == 0) goto Label_4162; // 0x1032 JumpB
	var_248_string = ""; // 0x1033 PushV
	var_248_string = "Neutral"; // 0x1034 MovS
	func_3865(var_47_cvector, var_248_string); // 0x1035 NEW_2
	var_249_int = 535903; // 0x1037 PushI
	SetMessage(var_249_int); // 0x1038 TObjFunc
	ClearReplies(); // 0x103a TObjFunc
	var_250_int = 535910; // 0x103c PushI
	var_251_int = 37622; // 0x103d PushI
	var_252_int = 37621; // 0x103e PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x103f TObjFunc
	return 0; // 0x1041 Return
	
Label_4162:
	var_253_int = 37622; // 0x1042 PushI
	var_254_bool = var_46_bool == var_253_int; // 0x1043 Eq
	if(var_254_bool == 0) goto Label_4180; // 0x1044 JumpB
	var_255_string = ""; // 0x1045 PushV
	var_255_string = "Neutral"; // 0x1046 MovS
	func_3865(var_47_cvector, var_255_string); // 0x1047 NEW_2
	var_256_int = 535911; // 0x1049 PushI
	SetMessage(var_256_int); // 0x104a TObjFunc
	ClearReplies(); // 0x104c TObjFunc
	var_257_int = 535912; // 0x104e PushI
	var_258_int = 37624; // 0x104f PushI
	var_259_int = 37623; // 0x1050 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x1051 TObjFunc
	return 0; // 0x1053 Return
	
Label_4180:
	var_260_int = 37624; // 0x1054 PushI
	var_261_bool = var_46_bool == var_260_int; // 0x1055 Eq
	if(var_261_bool == 0) goto Label_4203; // 0x1056 JumpB
	var_262_string = ""; // 0x1057 PushV
	var_262_string = "Neutral"; // 0x1058 MovS
	func_3865(var_47_cvector, var_262_string); // 0x1059 NEW_2
	var_263_int = 535913; // 0x105b PushI
	SetMessage(var_263_int); // 0x105c TObjFunc
	ClearReplies(); // 0x105e TObjFunc
	var_264_int = 535915; // 0x1060 PushI
	var_265_int = 37617; // 0x1061 PushI
	var_266_int = 37627; // 0x1062 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x1063 TObjFunc
	var_267_int = 535916; // 0x1065 PushI
	var_268_int = 37617; // 0x1066 PushI
	var_269_int = 37629; // 0x1067 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x1068 TObjFunc
	return 0; // 0x106a Return
	
Label_4203:
	var_270_int = 37617; // 0x106b PushI
	var_271_bool = var_46_bool == var_270_int; // 0x106c Eq
	if(var_271_bool == 0) goto Label_4221; // 0x106d JumpB
	var_272_string = ""; // 0x106e PushV
	var_272_string = "Neutral"; // 0x106f MovS
	func_3865(var_47_cvector, var_272_string); // 0x1070 NEW_2
	var_273_int = 535906; // 0x1072 PushI
	SetMessage(var_273_int); // 0x1073 TObjFunc
	ClearReplies(); // 0x1075 TObjFunc
	var_274_int = 535907; // 0x1077 PushI
	var_275_int = 37631; // 0x1078 PushI
	var_276_int = 37618; // 0x1079 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x107a TObjFunc
	return 0; // 0x107c Return
	
Label_4221:
	var_277_int = 37631; // 0x107d PushI
	var_278_bool = var_46_bool == var_277_int; // 0x107e Eq
	if(var_278_bool == 0) goto Label_4244; // 0x107f JumpB
	var_279_string = ""; // 0x1080 PushV
	var_279_string = "Neutral"; // 0x1081 MovS
	func_3865(var_47_cvector, var_279_string); // 0x1082 NEW_2
	var_280_int = 535917; // 0x1084 PushI
	SetMessage(var_280_int); // 0x1085 TObjFunc
	ClearReplies(); // 0x1087 TObjFunc
	var_281_int = 535918; // 0x1089 PushI
	var_282_int = 34824; // 0x108a PushI
	var_283_int = 37632; // 0x108b PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x108c TObjFunc
	var_284_int = 535919; // 0x108e PushI
	var_285_int = 34824; // 0x108f PushI
	var_286_int = 37633; // 0x1090 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1091 TObjFunc
	return 0; // 0x1093 Return
	
Label_4244:
	var_287_int = 34824; // 0x1094 PushI
	var_288_bool = var_46_bool == var_287_int; // 0x1095 Eq
	if(var_288_bool == 0) goto Label_4262; // 0x1096 JumpB
	var_289_string = ""; // 0x1097 PushV
	var_289_string = "Neutral"; // 0x1098 MovS
	func_3865(var_47_cvector, var_289_string); // 0x1099 NEW_2
	var_290_int = 533316; // 0x109b PushI
	SetMessage(var_290_int); // 0x109c TObjFunc
	ClearReplies(); // 0x109e TObjFunc
	var_291_int = 533317; // 0x10a0 PushI
	var_292_int = 34826; // 0x10a1 PushI
	var_293_int = 34825; // 0x10a2 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x10a3 TObjFunc
	return 0; // 0x10a5 Return
	
Label_4262:
	var_294_int = 34826; // 0x10a6 PushI
	var_295_bool = var_46_bool == var_294_int; // 0x10a7 Eq
	if(var_295_bool == 0) goto Label_4285; // 0x10a8 JumpB
	var_296_string = ""; // 0x10a9 PushV
	var_296_string = "Neutral"; // 0x10aa MovS
	func_3865(var_47_cvector, var_296_string); // 0x10ab NEW_2
	var_297_int = 533318; // 0x10ad PushI
	SetMessage(var_297_int); // 0x10ae TObjFunc
	ClearReplies(); // 0x10b0 TObjFunc
	var_298_int = 535920; // 0x10b2 PushI
	var_299_int = 37636; // 0x10b3 PushI
	var_300_int = 37635; // 0x10b4 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x10b5 TObjFunc
	var_301_int = 535922; // 0x10b7 PushI
	var_302_int = 37636; // 0x10b8 PushI
	var_303_int = 37637; // 0x10b9 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x10ba TObjFunc
	return 0; // 0x10bc Return
	
Label_4285:
	var_304_int = 37636; // 0x10bd PushI
	var_305_bool = var_46_bool == var_304_int; // 0x10be Eq
	if(var_305_bool == 0) goto Label_4308; // 0x10bf JumpB
	var_306_string = ""; // 0x10c0 PushV
	var_306_string = "Neutral"; // 0x10c1 MovS
	func_3865(var_47_cvector, var_306_string); // 0x10c2 NEW_2
	var_307_int = 535921; // 0x10c4 PushI
	SetMessage(var_307_int); // 0x10c5 TObjFunc
	ClearReplies(); // 0x10c7 TObjFunc
	var_308_int = 535925; // 0x10c9 PushI
	var_309_int = 37640; // 0x10ca PushI
	var_310_int = 37642; // 0x10cb PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x10cc TObjFunc
	var_311_int = 535923; // 0x10ce PushI
	var_312_int = 37640; // 0x10cf PushI
	var_313_int = 37639; // 0x10d0 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x10d1 TObjFunc
	return 0; // 0x10d3 Return
	
Label_4308:
	var_314_int = 37640; // 0x10d4 PushI
	var_315_bool = var_46_bool == var_314_int; // 0x10d5 Eq
	if(var_315_bool == 0) goto Label_4326; // 0x10d6 JumpB
	var_316_string = ""; // 0x10d7 PushV
	var_316_string = "Neutral"; // 0x10d8 MovS
	func_3865(var_47_cvector, var_316_string); // 0x10d9 NEW_2
	var_317_int = 535924; // 0x10db PushI
	SetMessage(var_317_int); // 0x10dc TObjFunc
	ClearReplies(); // 0x10de TObjFunc
	var_318_int = 533319; // 0x10e0 PushI
	var_319_int = -1; // 0x10e1 PushI
	var_320_int = 34827; // 0x10e2 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x10e3 TObjFunc
	return 0; // 0x10e5 Return
	
Label_4326:
	var_3_string = 1; // 0x10e6 TMovB
	var_321_bool = 0; // 0x10e7 PushV
	func_5249(var_321_bool); // 0x10e8 NEW_2
	if(var_321_bool == 0) goto Label_4334; // 0x10ea JumpB
	lshStopAnimation(); // 0x10eb Func
	goto Label_4336; // 0x10ed Jump
	
Label_4336:
	return 0; // 0x10f0 Return
	
Label_4334:
	StopAnimation(); // 0x10ee Func
	
Label_4338:
	return 0; // 0x10f2 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0x1195 PushI
	if(var_48_int == 0) goto Label_4541; // 0x1196 JumpB
	func_5102(); // 0x1198 NEW_2
	var_50_int = 42557; // 0x119a PushI
	var_51_bool = var_46_int == var_50_int; // 0x119b Eq
	if(var_51_bool == 0) goto Label_4529; // 0x119c JumpB
	var_52_string = ""; // 0x119d PushV
	var_52_string = "Neutral"; // 0x119e MovS
	func_4478(var_47_cvector, var_52_string); // 0x119f NEW_2
	var_69_int = 540548; // 0x11a1 PushI
	SetMessage(var_69_int); // 0x11a2 TObjFunc
	ClearReplies(); // 0x11a4 TObjFunc
	var_70_int = 540549; // 0x11a6 PushI
	var_71_int = -1; // 0x11a7 PushI
	var_72_int = 42558; // 0x11a8 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x11a9 TObjFunc
	var_73_int = 540797; // 0x11ab PushI
	var_74_int = -1; // 0x11ac PushI
	var_75_int = 42846; // 0x11ad PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x11ae TObjFunc
	return 0; // 0x11b0 Return
	
Label_4529:
	var_3_string = 1; // 0x11b1 TMovB
	var_76_bool = 0; // 0x11b2 PushV
	func_5249(var_76_bool); // 0x11b3 NEW_2
	if(var_76_bool == 0) goto Label_4537; // 0x11b5 JumpB
	lshStopAnimation(); // 0x11b6 Func
	goto Label_4539; // 0x11b8 Jump
	
Label_4539:
	return 0; // 0x11bb Return
	
Label_4537:
	StopAnimation(); // 0x11b9 Func
	
Label_4541:
	return 0; // 0x11bd Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x120b PushI
	var_48_bool = var_46_int == var_47_int; // 0x120c Eq
	if(var_48_bool == 0) goto Label_4655; // 0x120d JumpB
	func_4614(); // 0x120f NEW_2
	var_50_bool = 0; // 0x1211 PushV
	var_50_bool = 0; // 0x1212 MovB
	var_51_bool = 0; // 0x1213 PushV
	func_4828(var_51_bool); // 0x1214 NEW_2
	if(var_51_bool == 0) goto Label_4636; // 0x1216 JumpB
	var_54_bool = 0; // 0x1217 PushV
	func_4583(var_54_bool); // 0x1218 NEW_2
	if(var_54_bool == 0) goto Label_4636; // 0x121a JumpB
	var_50_bool = 1; // 0x121b MovB
	
Label_4636:
	if(var_50_bool == 0) goto Label_4649; // 0x121c JumpB
	var_71_bool = 0; // 0x121d PushV
	func_4563(var_71_bool); // 0x121e NEW_2
	if(var_71_bool == 0) goto Label_4648; // 0x1220 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x1221 PushV
	var_92_object = Obj(); // 0x1222 PushV
	func_5109(var_92_object); // 0x1223 NEW_2
	var_91_object = var_92_object; // 0x1224 Mov
	func_4976(var_91_object); // 0x1226 NEW_2
	
Label_4648:
	goto Label_4655; // 0x1228 Jump
	
Label_4655:
	return 0; // 0x122f Return
	
Label_4649:
	func_4578(var_46_int); // 0x122a NEW_2
	func_4605(); // 0x122d NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4796(); // 0x1231 NEW_2
	func_4614(); // 0x1234 NEW_2
	lshStopSpeech(); // 0x1236 Func
	lshStopAnimation(); // 0x1238 Func
	StopAsync(); // 0x123a Func
	Hold(); // 0x123c Func
	return 0; // 0x123e Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x123f Func
	func_4614(); // 0x1242 NEW_2
	var_47_string = ""; // 0x1244 PushV
	var_47_string = "Neutral"; // 0x1245 MovS
	func_5056(var_47_string); // 0x1246 NEW_2
	func_4605(); // 0x1249 NEW_2
	return 0; // 0x124b Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x124d Push
	if(var_47_bool == 0) goto Label_4691; // 0x124e JumpB
	func_4605(); // 0x1250 NEW_2
	goto Label_4695; // 0x1252 Jump
	
Label_4695:
	return 0; // 0x1257 Return
	
Label_4691:
	var_53_string = ""; // 0x1253 PushV
	var_53_string = "Neutral"; // 0x1254 MovS
	func_5056(var_53_string); // 0x1255 NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x1258 PushV
	IsOverrideActive(var_48_bool); // 0x1259 Func
	var_49_bool = var_48_bool == 0; // 0x125b Not
	if(var_49_bool == 0) goto Label_4724; // 0x125c JumpB
	EventDisable(0); // 0x125d EventDisable
	func_4796(); // 0x125f NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x1261 PushV
	var_51_object = var_46_object; // 0x1262 Mov
	func_4819(var_51_object); // 0x1263 NEW_2
	EventEnable(0); // 0x1265 EventEnable
	var_64_object = Obj(); // 0x1266 PushV
	var_64_object = var_46_object; // 0x1267 Mov
	func_6080(var_64_object); // 0x1268 NEW_2
	var_981_string = ""; // 0x126a PushV
	var_981_string = "Neutral"; // 0x126b MovS
	func_5056(var_981_string); // 0x126c NEW_2
	func_4614(); // 0x126f NEW_2
	func_4605(); // 0x1272 NEW_2
	
Label_4724:
	return 2; // 0x1274 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1]; // 0x11be PushGE
	var_46_bool = 0; // 0x11bf MovB
	GlobalVars[1] = var_46_bool; // 0x11c0 PopGE
	func_4549(var_45_cvector); // 0x11c2 NEW_2
	return 0; // 0x11c4 Return
}


func_0(var_0_object, var_786_int, var_787_object)
{
	var_789_object = Obj(); var_790_bool = 0; var_791_int = 0; var_792_bool = 0; var_793_object = Obj(); var_794_bool = 0; var_795_int = 0; var_796_bool = 0; // 0x0 PushV
	var_0_object = var_787_object; // 0x1 TMov
	var_797_bool = 0; var_798_object = Obj(); var_799_float = 0; // 0x2 PushV
	var_798_object = var_787_object; // 0x3 Mov
	var_799_float = 70.0; // 0x4 MovF
	func_4833(var_798_object, var_799_float); // 0x5 NEW_2
	var_800_bool = var_797_bool == 0; // 0x7 Not
	if(var_800_bool == 0) goto Label_11; // 0x8 JumpB
	var_786_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_793_object); // 0xb Func
	var_801_int = 0; // 0xd PushV
	func_5243(var_801_int); // 0xe NEW_2
	SetNPCName(var_801_int); // 0x10 ObjFunc
	var_802_int = 0; // 0x12 PushV
	func_5241(var_802_int); // 0x13 NEW_2
	SetNPCDescription(var_802_int); // 0x15 ObjFunc
	var_803_string = ""; // 0x17 PushV
	func_5245(var_803_string); // 0x18 NEW_2
	SetPhoto(var_803_string); // 0x1a ObjFunc
	var_804_string = ""; // 0x1c PushV
	func_5247(var_804_string); // 0x1d NEW_2
	SetPhoto2(var_804_string); // 0x1f ObjFunc
	var_805_int = 0; // 0x21 PushV
	func_6063(var_805_int); // 0x22 NEW_2
	SetPlayerName(var_805_int); // 0x24 ObjFunc
	var_795_int = -1; // 0x26 MovI
	IsOverrideActive(var_794_bool); // 0x27 Func
	var_806_bool = var_794_bool; // 0x29 Push
	if(var_806_bool == 0) goto Label_45; // 0x2a JumpB
	var_786_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_793_object); // 0x2d Func
	var_807_bool = 0; var_808_object = Obj(); // 0x2f PushV
	var_809_object = Obj(); // 0x30 PushV
	func_5109(var_809_object); // 0x31 NEW_2
	var_808_object = var_809_object; // 0x32 Mov
	func_4918(var_807_bool, var_808_object); // 0x34 NEW_2
	var_810_object = Obj(); var_811_object = Obj(); // 0x36 PushV
	var_810_object = var_787_object; // 0x37 Mov
	var_811_object = var_793_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_812_object, var_813_object, var_814_string, var_815_bool, var_810_object, var_811_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_796_bool); // 0x3d ObjFunc
	
Label_63:
	var_862_bool = var_796_bool == 0; // 0x3f Not
	if(var_862_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_796_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_863_object = Obj(); // 0x46 PushV
	var_863_object = var_787_object; // 0x47 Mov
	func_4901(); // 0x48 NEW_2
	StopDialog(var_793_object); // 0x4a Func
	GetReturnValue(var_795_int); // 0x4c ObjFunc
	var_786_int = var_795_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_5125(var_345_int, var_346_string)
{
	var_347_int = 0; var_348_int = 0; // 0x1405 PushV
	GetVariable(var_346_string, var_348_int); // 0x1406 Func
	var_345_int = var_348_int; // 0x1408 Mov
	return 2; // 0x1409 Return
}


func_4614()
{
	var_982_int = 10; // 0x1206 PushI
	KillTimer(var_982_int); // 0x1207 Func
	return 0; // 0x1209 Return
}


func_5641(var_429_bool)
{
	var_431_int = 0; var_432_string = ""; // 0x160a PushV
	var_432_string = "ood3Kapella1"; // 0x160b MovS
	func_5125(var_431_int, var_432_string); // 0x160c NEW_2
	var_433_int = 0; // 0x160e PushI
	var_434_bool = var_431_int == var_433_int; // 0x160f Eq
	if(var_434_bool == 0) goto Label_5651; // 0x1610 JumpB
	var_429_bool = 1; // 0x1611 MovB
	return 0; // 0x1612 Return
	
Label_5651:
	var_429_bool = 0; // 0x1613 MovB
	return 0; // 0x1614 Return
}


func_5130(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); // 0x140a PushV
	GetMainOutdoorScene(var_95_object); // 0x140b Func
	var_97_string = ".bin"; // 0x140d PushS
	var_98_int = var_92_string + var_97_string; // 0x140e Add
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int); // 0x140f Func
	var_91_object = var_96_object; // 0x1411 Mov
	return 4; // 0x1412 Return
}


func_5653(var_464_bool)
{
	var_466_int = 0; var_467_string = ""; // 0x1616 PushV
	var_467_string = "d3q03"; // 0x1617 MovS
	func_5125(var_466_int, var_467_string); // 0x1618 NEW_2
	var_468_int = 2; // 0x161a PushI
	var_469_bool = var_466_int == var_468_int; // 0x161b Eq
	if(var_469_bool == 0) goto Label_5663; // 0x161c JumpB
	var_464_bool = 1; // 0x161d MovB
	return 0; // 0x161e Return
	
Label_5663:
	var_464_bool = 0; // 0x161f MovB
	return 0; // 0x1620 Return
}


func_5141(var_104_int, var_105_int)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x1415 PushV
	CreateIntVector(var_107_object); // 0x1416 Func
	add(var_104_int); // 0x1418 ObjFunc
	add(var_105_int); // 0x141a ObjFunc
	var_108_int = 3; // 0x141c PushI
	SendWorldWndMessage(var_108_int, var_107_object); // 0x141d Func
	return 2; // 0x141f Return
}


func_5665(var_470_bool)
{
	var_472_int = 0; var_473_string = ""; // 0x1622 PushV
	var_473_string = "ood3Kapella2"; // 0x1623 MovS
	func_5125(var_472_int, var_473_string); // 0x1624 NEW_2
	var_474_int = 0; // 0x1626 PushI
	var_475_bool = var_472_int == var_474_int; // 0x1627 Eq
	if(var_475_bool == 0) goto Label_5675; // 0x1628 JumpB
	var_470_bool = 1; // 0x1629 MovB
	return 0; // 0x162a Return
	
Label_5675:
	var_470_bool = 0; // 0x162b MovB
	return 0; // 0x162c Return
}


func_5153(var_94_object, var_95_int)
{
	var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_bool = 0; // 0x1421 PushV
	GetItemID(var_99_int); // 0x1422 ObjFunc
	var_102_string = "Category"; // 0x1424 PushS
	GetInvItemProperty(var_100_int, var_99_int, var_102_string); // 0x1425 Func
	AddItem(var_101_bool, var_94_object, var_100_int, var_95_int); // 0x1427 ObjFunc
	var_103_bool = var_101_bool == 0; // 0x1429 Not
	if(var_103_bool == 0) goto Label_5166; // 0x142a JumpB
	DropItems(var_94_object, var_95_int); // 0x142b ObjFunc
	goto Label_5171; // 0x142d Jump
	
Label_5171:
	return 6; // 0x1433 Return
	
Label_5166:
	var_104_int = 0; var_105_int = 0; // 0x142e PushV
	var_104_int = var_99_int; // 0x142f Mov
	var_105_int = var_95_int; // 0x1430 Mov
	func_5141(var_104_int, var_105_int); // 0x1431 NEW_2
}


func_5677(var_476_bool, var_477_object)
{
	var_478_bool = 0; var_479_object = Obj(); // 0x162e PushV
	var_479_object = var_477_object; // 0x162f Mov
	func_5848(var_479_object); // 0x1630 NEW_2
	if(var_478_bool == 0) goto Label_5685; // 0x1632 JumpB
	var_476_bool = 1; // 0x1633 MovB
	return 0; // 0x1634 Return
	
Label_5685:
	var_476_bool = 0; // 0x1635 MovB
	return 0; // 0x1636 Return
}


func_2606(var_2_object, var_435_string)
{
	var_436_bool = 0; // 0xa2f PushV
	func_5249(var_436_bool); // 0xa30 NEW_2
	var_437_bool = var_436_bool == 0; // 0xa32 Not
	if(var_437_bool == 0) goto Label_2613; // 0xa33 JumpB
	return 0; // 0xa34 Return
	
Label_2613:
	var_438_bool = var_435_string == var_2_object; // 0xa35 Eq
	if(var_438_bool == 0) goto Label_2616; // 0xa36 JumpB
	return 0; // 0xa37 Return
	
Label_2616:
	var_439_string = ""; var_440_bool = 0; // 0xa38 PushV
	var_439_string = var_435_string; // 0xa39 Mov
	var_441_string = ""; // 0xa3a PushS
	var_442_bool = var_435_string == var_441_string; // 0xa3b Eq
	if(var_442_bool == 0) goto Label_2623; // 0xa3c JumpB
	var_440_bool = 0; // 0xa3d MovB
	goto Label_2624; // 0xa3e Jump
	
Label_2624:
	func_5072(var_439_string, var_440_bool); // 0xa40 NEW_2
	var_2_object = var_435_string; // 0xa42 TMov
	return 0; // 0xa43 Return
	
Label_2623:
	var_440_bool = 1; // 0xa3f MovB
}


func_5172(var_88_object, var_89_string, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x1434 PushV
	CreateInvItem(var_92_object); // 0x1435 Func
	SetItemName(var_89_string); // 0x1437 ObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0; // 0x1439 PushV
	var_93_object = var_88_object; // 0x143a Mov
	var_94_object = var_92_object; // 0x143b Mov
	var_95_int = var_90_int; // 0x143c Mov
	func_5153(var_94_object, var_95_int); // 0x143d NEW_2
	return 2; // 0x143f Return
}


func_5687(var_491_bool)
{
	var_491_bool = 1; // 0x1638 MovB
	return 0; // 0x1639 Return
}


func_5692(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x163d PushV
	var_192_string = "d6q02"; // 0x163e MovS
	func_5125(var_191_int, var_192_string); // 0x163f NEW_2
	var_193_int = 0; // 0x1641 PushI
	var_194_bool = var_191_int == var_193_int; // 0x1642 Eq
	if(var_194_bool == 0) goto Label_5702; // 0x1643 JumpB
	var_189_bool = 1; // 0x1644 MovB
	return 0; // 0x1645 Return
	
Label_5702:
	var_189_bool = 0; // 0x1646 MovB
	return 0; // 0x1647 Return
}


func_5185(var_99_bool, var_100_string, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x1441 PushV
	FindActor(var_103_object, var_100_string); // 0x1442 Func
	var_104_bool = var_103_object == 0; // 0x1444 NullEq
	if(var_104_bool == 0) goto Label_5192; // 0x1445 JumpB
	var_99_bool = 0; // 0x1446 MovB
	return 2; // 0x1447 Return
	
Label_5192:
	Trigger(var_103_object, var_101_string); // 0x1448 Func
	var_99_bool = 1; // 0x144a MovB
	return 2; // 0x144b Return
}


func_5704(var_660_bool)
{
	var_662_int = 0; var_663_string = ""; // 0x1649 PushV
	var_663_string = "d6q02"; // 0x164a MovS
	func_5125(var_662_int, var_663_string); // 0x164b NEW_2
	var_664_int = 1000; // 0x164d PushI
	var_665_bool = var_662_int == var_664_int; // 0x164e Eq
	if(var_665_bool == 0) goto Label_5714; // 0x164f JumpB
	var_660_bool = 1; // 0x1650 MovB
	return 0; // 0x1651 Return
	
Label_5714:
	var_660_bool = 0; // 0x1652 MovB
	return 0; // 0x1653 Return
}


func_585(var_0_object, var_866_int, var_867_object)
{
	var_869_object = Obj(); var_870_bool = 0; var_871_int = 0; var_872_bool = 0; var_873_object = Obj(); var_874_bool = 0; var_875_int = 0; var_876_bool = 0; // 0x249 PushV
	var_0_object = var_867_object; // 0x24a TMov
	var_877_bool = 0; var_878_object = Obj(); var_879_float = 0; // 0x24b PushV
	var_878_object = var_867_object; // 0x24c Mov
	var_879_float = 70.0; // 0x24d MovF
	func_4833(var_878_object, var_879_float); // 0x24e NEW_2
	var_880_bool = var_877_bool == 0; // 0x250 Not
	if(var_880_bool == 0) goto Label_596; // 0x251 JumpB
	var_866_int = -2; // 0x252 MovI
	return 8; // 0x253 Return
	
Label_596:
	CreateDialog(var_873_object); // 0x254 Func
	var_881_int = 0; // 0x256 PushV
	func_5243(var_881_int); // 0x257 NEW_2
	SetNPCName(var_881_int); // 0x259 ObjFunc
	var_882_int = 0; // 0x25b PushV
	func_5241(var_882_int); // 0x25c NEW_2
	SetNPCDescription(var_882_int); // 0x25e ObjFunc
	var_883_string = ""; // 0x260 PushV
	func_5245(var_883_string); // 0x261 NEW_2
	SetPhoto(var_883_string); // 0x263 ObjFunc
	var_884_string = ""; // 0x265 PushV
	func_5247(var_884_string); // 0x266 NEW_2
	SetPhoto2(var_884_string); // 0x268 ObjFunc
	var_885_int = 0; // 0x26a PushV
	func_6063(var_885_int); // 0x26b NEW_2
	SetPlayerName(var_885_int); // 0x26d ObjFunc
	var_875_int = -1; // 0x26f MovI
	IsOverrideActive(var_874_bool); // 0x270 Func
	var_886_bool = var_874_bool; // 0x272 Push
	if(var_886_bool == 0) goto Label_630; // 0x273 JumpB
	var_866_int = -2; // 0x274 MovI
	return 8; // 0x275 Return
	
Label_630:
	DoDialog(var_873_object); // 0x276 Func
	var_887_bool = 0; var_888_object = Obj(); // 0x278 PushV
	var_889_object = Obj(); // 0x279 PushV
	func_5109(var_889_object); // 0x27a NEW_2
	var_888_object = var_889_object; // 0x27b Mov
	func_4918(var_887_bool, var_888_object); // 0x27d NEW_2
	var_890_object = Obj(); var_891_object = Obj(); // 0x27f PushV
	var_890_object = var_867_object; // 0x280 Mov
	var_891_object = var_873_object; // 0x281 Mov
	TaskCall(3); // 0x282 TaskCall
	func_666(var_892_object, var_893_object, var_894_string, var_895_bool, var_890_object, var_891_object); // 0x283 NEW_2
	TaskReturn(); // 0x284 TaskReturn
	IsDialogEnd(var_876_bool); // 0x286 ObjFunc
	
Label_648:
	var_923_bool = var_876_bool == 0; // 0x288 Not
	if(var_923_bool == 0) goto Label_655; // 0x289 JumpB
	sync(); // 0x28a Func
	IsDialogEnd(var_876_bool); // 0x28c ObjFunc
	goto Label_648; // 0x28e Jump
	
Label_655:
	var_924_object = Obj(); // 0x28f PushV
	var_924_object = var_867_object; // 0x290 Mov
	func_4901(); // 0x291 NEW_2
	StopDialog(var_873_object); // 0x293 Func
	GetReturnValue(var_875_int); // 0x295 ObjFunc
	var_866_int = var_875_int; // 0x297 Mov
	return 8; // 0x298 Return
}


func_5197(var_73_float)
{
	var_74_float = 0; var_75_float = 0; // 0x144d PushV
	GetGameTime(var_75_float); // 0x144e Func
	var_73_float = var_75_float; // 0x1450 Mov
	return 2; // 0x1451 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_810_object, var_811_object)
{
	var_0_object = var_811_object; // 0x52 TMov
	var_1_object = var_810_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_816_int = 1; // 0x55 PushI
	if(var_816_int == 0) goto Label_133; // 0x56 JumpB
	var_817_string = ""; // 0x57 PushV
	var_817_string = "Neutral"; // 0x58 MovS
	func_163(var_811_object, var_817_string); // 0x59 NEW_2
	var_825_int = 534512; // 0x5b PushI
	SetMessage(var_825_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_826_bool = 0; // 0x60 PushV
	var_826_bool = 0; // 0x61 MovB
	var_827_bool = 0; var_828_object = Obj(); // 0x62 PushV
	var_828_object = var_1_object; // 0x63 MovT
	func_5557(var_828_object); // 0x64 NEW_2
	if(var_827_bool == 0) goto Label_109; // 0x66 JumpB
	var_833_bool = 0; var_834_object = Obj(); // 0x67 PushV
	var_834_object = var_1_object; // 0x68 MovT
	func_5569(var_834_object); // 0x69 NEW_2
	if(var_833_bool == 0) goto Label_109; // 0x6b JumpB
	var_826_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_826_bool == 0) goto Label_115; // 0x6d JumpB
	var_839_int = 534513; // 0x6e PushI
	var_840_int = 41645; // 0x6f PushI
	var_841_int = 36154; // 0x70 PushI
	AddReply(var_839_int, var_840_int, var_841_int); // 0x71 TObjFunc
	
Label_115:
	var_842_bool = 0; var_843_object = Obj(); // 0x73 PushV
	var_843_object = var_1_object; // 0x74 MovT
	func_5581(var_843_object); // 0x75 NEW_2
	if(var_842_bool == 0) goto Label_125; // 0x77 JumpB
	var_848_int = 540246; // 0x78 PushI
	var_849_int = 42229; // 0x79 PushI
	var_850_int = 42228; // 0x7a PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0x7b TObjFunc
	
Label_125:
	var_851_int = 534518; // 0x7d PushI
	var_852_int = -1; // 0x7e PushI
	var_853_int = 36159; // 0x7f PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0x80 TObjFunc
	goto Label_133; // 0x82 Jump
	
Label_133:
	var_854_bool = 0; // 0x85 PushV
	func_5249(var_854_bool); // 0x86 NEW_2
	if(var_854_bool == 0) goto Label_148; // 0x88 JumpB
	
Label_137:
	lshWaitForAnimEnd(); // 0x89 Func
	var_855_string = var_3_string; // 0x8b PushT
	if(var_855_string == 0) goto Label_142; // 0x8c JumpB
	goto Label_147; // 0x8d Jump
	
Label_147:
	goto Label_162; // 0x93 Jump
	
Label_162:
	return 0; // 0xa2 Return
	
Label_142:
	var_856_string = ""; // 0x8e PushV
	var_856_string = var_2_object; // 0x8f MovT
	func_5056(var_856_string); // 0x90 NEW_2
	goto Label_137; // 0x92 Jump
	
Label_148:
	var_857_string = "all"; // 0x94 PushS
	var_858_string = "idle"; // 0x95 PushS
	PlayAnimation(var_857_string, var_858_string); // 0x96 Func
	
Label_152:
	WaitForAnimEnd(); // 0x98 Func
	var_859_string = var_3_string; // 0x9a PushT
	if(var_859_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_157:
	var_860_string = "all"; // 0x9d PushS
	var_861_string = "idle"; // 0x9e PushS
	PlayAnimation(var_860_string, var_861_string); // 0x9f Func
	goto Label_152; // 0xa1 Jump
}


func_5202(var_193_int)
{
	var_194_float = 0; var_195_float = 0; // 0x1452 PushV
	GetGameTime(var_195_float); // 0x1453 Func
	var_196_int = 1; // 0x1455 PushI
	var_197_int = 0; // 0x1456 PushV
	var_198_int = 24; // 0x1457 PushI
	var_197_int = var_195_float / var_195_float; // 0x1458 Div2
	var_193_int = var_196_int + var_197_int; // 0x1459 Add2
	return 2; // 0x145a Return
}


func_5716(var_667_bool)
{
	var_669_int = 0; var_670_string = ""; // 0x1655 PushV
	var_670_string = "d6q02"; // 0x1656 MovS
	func_5125(var_669_int, var_670_string); // 0x1657 NEW_2
	var_671_int = -1; // 0x1659 PushI
	var_672_bool = var_669_int == var_671_int; // 0x165a Eq
	if(var_672_bool == 0) goto Label_5726; // 0x165b JumpB
	var_667_bool = 1; // 0x165c MovB
	return 0; // 0x165d Return
	
Label_5726:
	var_667_bool = 0; // 0x165e MovB
	return 0; // 0x165f Return
}


func_5211(var_299_bool, var_300_int)
{
	var_301_int = 0; // 0x145c PushV
	func_5202(var_301_int); // 0x145d NEW_2
	var_299_bool = var_301_int == var_300_int; // 0x145f Eq2
	return 0; // 0x1460 Return
}


func_5728(var_654_bool)
{
	var_656_int = 0; var_657_string = ""; // 0x1661 PushV
	var_657_string = "ood6Kapella1"; // 0x1662 MovS
	func_5125(var_656_int, var_657_string); // 0x1663 NEW_2
	var_658_int = 0; // 0x1665 PushI
	var_659_bool = var_656_int == var_658_int; // 0x1666 Eq
	if(var_659_bool == 0) goto Label_5738; // 0x1667 JumpB
	var_654_bool = 1; // 0x1668 MovB
	return 0; // 0x1669 Return
	
Label_5738:
	var_654_bool = 0; // 0x166a MovB
	return 0; // 0x166b Return
}


func_5217(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0x1461 PushV
	var_74_string = "idle"; // 0x1462 MovS
	var_75_int = var_72_int; // 0x1463 Push
	if(var_75_int == 0) goto Label_5222; // 0x1464 JumpB
	var_74_string = var_74_string + var_72_int; // 0x1465 Add2
	
Label_5222:
	var_71_string = var_74_string; // 0x1466 Mov
	return 2; // 0x1467 Return
}


func_5224(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x1468 PushV
	var_68_int = 0; // 0x1469 MovI
	
Label_5226:
	var_70_string = "all"; // 0x146a PushS
	var_71_string = ""; var_72_int = 0; // 0x146b PushV
	var_72_int = var_68_int; // 0x146c Mov
	func_5217(var_71_string, var_72_int); // 0x146d NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0x146f Func
	var_76_bool = var_69_bool == 0; // 0x1471 Not
	if(var_76_bool == 0) goto Label_5236; // 0x1472 JumpB
	goto Label_5239; // 0x1473 Jump
	
Label_5239:
	var_65_int = var_68_int; // 0x1477 Mov
	return 4; // 0x1478 Return
	
Label_5236:
	var_77_int = 1; // 0x1474 PushI
	var_68_int = var_68_int + var_77_int; // 0x1475 Add2
	goto Label_5226; // 0x1476 Jump
}


func_3688(var_0_object, var_696_int, var_697_object)
{
	var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0; // 0xe68 PushV
	var_0_object = var_697_object; // 0xe69 TMov
	var_707_bool = 0; var_708_object = Obj(); var_709_float = 0; // 0xe6a PushV
	var_708_object = var_697_object; // 0xe6b Mov
	var_709_float = 70.0; // 0xe6c MovF
	func_4833(var_708_object, var_709_float); // 0xe6d NEW_2
	var_710_bool = var_707_bool == 0; // 0xe6f Not
	if(var_710_bool == 0) goto Label_3699; // 0xe70 JumpB
	var_696_int = -2; // 0xe71 MovI
	return 8; // 0xe72 Return
	
Label_3699:
	CreateDialog(var_703_object); // 0xe73 Func
	var_711_int = 0; // 0xe75 PushV
	func_5243(var_711_int); // 0xe76 NEW_2
	SetNPCName(var_711_int); // 0xe78 ObjFunc
	var_712_int = 0; // 0xe7a PushV
	func_5241(var_712_int); // 0xe7b NEW_2
	SetNPCDescription(var_712_int); // 0xe7d ObjFunc
	var_713_string = ""; // 0xe7f PushV
	func_5245(var_713_string); // 0xe80 NEW_2
	SetPhoto(var_713_string); // 0xe82 ObjFunc
	var_714_string = ""; // 0xe84 PushV
	func_5247(var_714_string); // 0xe85 NEW_2
	SetPhoto2(var_714_string); // 0xe87 ObjFunc
	var_715_int = 0; // 0xe89 PushV
	func_6063(var_715_int); // 0xe8a NEW_2
	SetPlayerName(var_715_int); // 0xe8c ObjFunc
	var_705_int = -1; // 0xe8e MovI
	IsOverrideActive(var_704_bool); // 0xe8f Func
	var_716_bool = var_704_bool; // 0xe91 Push
	if(var_716_bool == 0) goto Label_3733; // 0xe92 JumpB
	var_696_int = -2; // 0xe93 MovI
	return 8; // 0xe94 Return
	
Label_3733:
	DoDialog(var_703_object); // 0xe95 Func
	var_717_bool = 0; var_718_object = Obj(); // 0xe97 PushV
	var_719_object = Obj(); // 0xe98 PushV
	func_5109(var_719_object); // 0xe99 NEW_2
	var_718_object = var_719_object; // 0xe9a Mov
	func_4918(var_717_bool, var_718_object); // 0xe9c NEW_2
	var_720_object = Obj(); var_721_object = Obj(); // 0xe9e PushV
	var_720_object = var_697_object; // 0xe9f Mov
	var_721_object = var_703_object; // 0xea0 Mov
	TaskCall(15); // 0xea1 TaskCall
	func_3769(var_722_object, var_723_object, var_724_string, var_725_bool, var_720_object, var_721_object); // 0xea2 NEW_2
	TaskReturn(); // 0xea3 TaskReturn
	IsDialogEnd(var_706_bool); // 0xea5 ObjFunc
	
Label_3751:
	var_782_bool = var_706_bool == 0; // 0xea7 Not
	if(var_782_bool == 0) goto Label_3758; // 0xea8 JumpB
	sync(); // 0xea9 Func
	IsDialogEnd(var_706_bool); // 0xeab ObjFunc
	goto Label_3751; // 0xead Jump
	
Label_3758:
	var_783_object = Obj(); // 0xeae PushV
	var_783_object = var_697_object; // 0xeaf Mov
	func_4901(); // 0xeb0 NEW_2
	StopDialog(var_703_object); // 0xeb2 Func
	GetReturnValue(var_705_int); // 0xeb4 ObjFunc
	var_696_int = var_705_int; // 0xeb6 Mov
	return 8; // 0xeb7 Return
}


func_5740(var_609_bool)
{
	var_611_int = 0; var_612_string = ""; // 0x166d PushV
	var_612_string = "d6q01"; // 0x166e MovS
	func_5125(var_611_int, var_612_string); // 0x166f NEW_2
	var_613_int = 0; // 0x1671 PushI
	var_614_bool = var_611_int == var_613_int; // 0x1672 Eq
	if(var_614_bool == 0) goto Label_5750; // 0x1673 JumpB
	var_609_bool = 1; // 0x1674 MovB
	return 0; // 0x1675 Return
	
Label_5750:
	var_609_bool = 0; // 0x1676 MovB
	return 0; // 0x1677 Return
}


func_4725()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x1275 PushV
	WaitForAnimEnd(); // 0x1276 Func
	var_63_bool = 0; // 0x1278 PushV
	func_4828(var_63_bool); // 0x1279 NEW_2
	var_64_bool = var_63_bool == 0; // 0x127b Not
	if(var_64_bool == 0) goto Label_4734; // 0x127c JumpB
	return 12; // 0x127d Return
	
Label_4734:
	var_65_int = 0; // 0x127e PushV
	func_5224(var_65_int); // 0x127f NEW_2
	var_57_int = var_65_int; // 0x1280 Mov
	var_58_int = 0; // 0x1282 MovI
	
Label_4739:
	var_78_bool = 0; // 0x1283 PushV
	var_78_bool = 0; // 0x1284 MovB
	var_79_int = 5; // 0x1285 PushI
	var_80_bool = var_58_int < var_79_int; // 0x1286 LT
	if(var_80_bool == 0) goto Label_4749; // 0x1287 JumpB
	var_81_bool = 0; // 0x1288 PushV
	func_4828(var_81_bool); // 0x1289 NEW_2
	if(var_81_bool == 0) goto Label_4749; // 0x128b JumpB
	var_78_bool = 1; // 0x128c MovB
	
Label_4749:
	if(var_78_bool == 0) goto Label_4791; // 0x128d JumpB
	var_82_bool = var_57_int == 0; // 0x128e Not
	if(var_82_bool == 0) goto Label_4759; // 0x128f JumpB
	var_83_int = 3; // 0x1290 PushI
	Sleep(var_83_int, var_59_bool); // 0x1291 Func
	var_84_bool = var_59_bool == 0; // 0x1293 Not
	if(var_84_bool == 0) goto Label_4758; // 0x1294 JumpB
	goto Label_4791; // 0x1295 Jump
	
Label_4791:
	ResetAAS(); // 0x12b7 Func
	return 12; // 0x12b9 Return
	
Label_4758:
	goto Label_4780; // 0x1296 Jump
	
Label_4780:
	var_85_bool = 0; // 0x12ac PushV
	func_4794(var_85_bool); // 0x12ad NEW_2
	var_86_bool = var_85_bool == 0; // 0x12af Not
	if(var_86_bool == 0) goto Label_4786; // 0x12b0 JumpB
	goto Label_4791; // 0x12b1 Jump
	
Label_4786:
	ResetAAS(); // 0x12b2 Func
	var_87_int = 1; // 0x12b4 PushI
	var_58_int = var_58_int + var_87_int; // 0x12b5 Add2
	goto Label_4739; // 0x12b6 Jump
	
Label_4759:
	irand(var_60_int, var_57_int); // 0x1297 Func
	var_88_int = 5; // 0x1299 PushI
	irand(var_61_int, var_88_int); // 0x129a Func
	var_89_int = 0; // 0x129c PushI
	var_90_bool = var_61_int != var_89_int; // 0x129d Neq
	if(var_90_bool == 0) goto Label_4768; // 0x129e JumpB
	var_60_int = 0; // 0x129f MovI
	
Label_4768:
	var_91_string = "all"; // 0x12a0 PushS
	var_92_string = ""; var_93_int = 0; // 0x12a1 PushV
	var_93_int = var_60_int; // 0x12a2 Mov
	func_5217(var_92_string, var_93_int); // 0x12a3 NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x12a5 Func
	WaitForAnimEnd(var_62_bool); // 0x12a7 Func
	var_94_bool = var_62_bool == 0; // 0x12a9 Not
	if(var_94_bool == 0) goto Label_4780; // 0x12aa JumpB
	goto Label_4791; // 0x12ab Jump
}


func_5752(var_743_bool)
{
	var_745_int = 0; var_746_string = ""; // 0x1679 PushV
	var_746_string = "ood8Kapella1"; // 0x167a MovS
	func_5125(var_745_int, var_746_string); // 0x167b NEW_2
	var_747_int = 0; // 0x167d PushI
	var_748_bool = var_745_int == var_747_int; // 0x167e Eq
	if(var_748_bool == 0) goto Label_5762; // 0x167f JumpB
	var_743_bool = 1; // 0x1680 MovB
	return 0; // 0x1681 Return
	
Label_5762:
	var_743_bool = 0; // 0x1682 MovB
	return 0; // 0x1683 Return
}


func_5241(var_126_int)
{
	var_126_int = 515538; // 0x1479 MovI
	return 0; // 0x147a Return
}


func_5243(var_125_int)
{
	var_125_int = 502863; // 0x147b MovI
	return 0; // 0x147c Return
}


func_5245(var_127_string)
{
	var_127_string = "ui/NPC_Kapella.png"; // 0x147d MovS
	return 0; // 0x147e Return
}


func_5247(var_128_string)
{
	var_128_string = "ui/NPC_Kapella_b.png"; // 0x147f MovS
	return 0; // 0x1480 Return
}


func_5249(var_120_bool)
{
	var_120_bool = 1; // 0x1481 MovB
	return 0; // 0x1482 Return
}


func_5251()
{
	var_242_string = "KnowKaterina"; // 0x1484 PushS
	var_243_int = 1; // 0x1485 PushI
	SetVariable(var_242_string, var_243_int); // 0x1486 Func
	return 0; // 0x1488 Return
}


func_5764(var_737_bool)
{
	var_739_int = 0; var_740_string = ""; // 0x1685 PushV
	var_740_string = "d8q02"; // 0x1686 MovS
	func_5125(var_739_int, var_740_string); // 0x1687 NEW_2
	var_741_int = 1; // 0x1689 PushI
	var_742_bool = var_739_int == var_741_int; // 0x168a Eq
	if(var_742_bool == 0) goto Label_5774; // 0x168b JumpB
	var_737_bool = 1; // 0x168c MovB
	return 0; // 0x168d Return
	
Label_5774:
	var_737_bool = 0; // 0x168e MovB
	return 0; // 0x168f Return
}


func_5257()
{
	var_246_string = "KnowKapella"; // 0x148a PushS
	var_247_int = 1; // 0x148b PushI
	SetVariable(var_246_string, var_247_int); // 0x148c Func
	return 0; // 0x148e Return
}


func_5263()
{
	var_111_string = "playsound"; // 0x1490 PushS
	var_112_string = "giveitem"; // 0x1491 PushS
	TriggerWorld(var_111_string, var_112_string); // 0x1492 Func
	return 0; // 0x1494 Return
}


func_5776(var_753_bool)
{
	var_755_int = 0; var_756_string = ""; // 0x1691 PushV
	var_756_string = "d8q02"; // 0x1692 MovS
	func_5125(var_755_int, var_756_string); // 0x1693 NEW_2
	var_757_int = 1000; // 0x1695 PushI
	var_758_bool = var_755_int == var_757_int; // 0x1696 Eq
	if(var_758_bool == 0) goto Label_5786; // 0x1697 JumpB
	var_753_bool = 1; // 0x1698 MovB
	return 0; // 0x1699 Return
	
Label_5786:
	var_753_bool = 0; // 0x169a MovB
	return 0; // 0x169b Return
}


func_1169(var_0_object, var_577_int, var_578_object)
{
	var_580_object = Obj(); var_581_bool = 0; var_582_int = 0; var_583_bool = 0; var_584_object = Obj(); var_585_bool = 0; var_586_int = 0; var_587_bool = 0; // 0x491 PushV
	var_0_object = var_578_object; // 0x492 TMov
	var_588_bool = 0; var_589_object = Obj(); var_590_float = 0; // 0x493 PushV
	var_589_object = var_578_object; // 0x494 Mov
	var_590_float = 70.0; // 0x495 MovF
	func_4833(var_589_object, var_590_float); // 0x496 NEW_2
	var_591_bool = var_588_bool == 0; // 0x498 Not
	if(var_591_bool == 0) goto Label_1180; // 0x499 JumpB
	var_577_int = -2; // 0x49a MovI
	return 8; // 0x49b Return
	
Label_1180:
	CreateDialog(var_584_object); // 0x49c Func
	var_592_int = 0; // 0x49e PushV
	func_5243(var_592_int); // 0x49f NEW_2
	SetNPCName(var_592_int); // 0x4a1 ObjFunc
	var_593_int = 0; // 0x4a3 PushV
	func_5241(var_593_int); // 0x4a4 NEW_2
	SetNPCDescription(var_593_int); // 0x4a6 ObjFunc
	var_594_string = ""; // 0x4a8 PushV
	func_5245(var_594_string); // 0x4a9 NEW_2
	SetPhoto(var_594_string); // 0x4ab ObjFunc
	var_595_string = ""; // 0x4ad PushV
	func_5247(var_595_string); // 0x4ae NEW_2
	SetPhoto2(var_595_string); // 0x4b0 ObjFunc
	var_596_int = 0; // 0x4b2 PushV
	func_6063(var_596_int); // 0x4b3 NEW_2
	SetPlayerName(var_596_int); // 0x4b5 ObjFunc
	var_586_int = -1; // 0x4b7 MovI
	IsOverrideActive(var_585_bool); // 0x4b8 Func
	var_597_bool = var_585_bool; // 0x4ba Push
	if(var_597_bool == 0) goto Label_1214; // 0x4bb JumpB
	var_577_int = -2; // 0x4bc MovI
	return 8; // 0x4bd Return
	
Label_1214:
	DoDialog(var_584_object); // 0x4be Func
	var_598_bool = 0; var_599_object = Obj(); // 0x4c0 PushV
	var_600_object = Obj(); // 0x4c1 PushV
	func_5109(var_600_object); // 0x4c2 NEW_2
	var_599_object = var_600_object; // 0x4c3 Mov
	func_4918(var_598_bool, var_599_object); // 0x4c5 NEW_2
	var_601_object = Obj(); var_602_object = Obj(); // 0x4c7 PushV
	var_601_object = var_578_object; // 0x4c8 Mov
	var_602_object = var_584_object; // 0x4c9 Mov
	TaskCall(7); // 0x4ca TaskCall
	func_1250(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object); // 0x4cb NEW_2
	TaskReturn(); // 0x4cc TaskReturn
	IsDialogEnd(var_587_bool); // 0x4ce ObjFunc
	
Label_1232:
	var_692_bool = var_587_bool == 0; // 0x4d0 Not
	if(var_692_bool == 0) goto Label_1239; // 0x4d1 JumpB
	sync(); // 0x4d2 Func
	IsDialogEnd(var_587_bool); // 0x4d4 ObjFunc
	goto Label_1232; // 0x4d6 Jump
	
Label_1239:
	var_693_object = Obj(); // 0x4d7 PushV
	var_693_object = var_578_object; // 0x4d8 Mov
	func_4901(); // 0x4d9 NEW_2
	StopDialog(var_584_object); // 0x4db Func
	GetReturnValue(var_586_int); // 0x4dd ObjFunc
	var_577_int = var_586_int; // 0x4df Mov
	return 8; // 0x4e0 Return
}


func_5269()
{
	var_60_string = "d8q02"; // 0x1496 PushS
	var_61_int = 2; // 0x1497 PushI
	SetVariable(var_60_string, var_61_int); // 0x1498 Func
	func_5959(); // 0x149b NEW_2
	return 0; // 0x149d Return
}


func_666(var_0_object, var_1_object, var_2_object, var_3_string, var_890_object, var_891_object)
{
	var_0_object = var_891_object; // 0x29b TMov
	var_1_object = var_890_object; // 0x29c TMov
	var_3_string = 0; // 0x29d TMovB
	var_896_int = 1; // 0x29e PushI
	if(var_896_int == 0) goto Label_699; // 0x29f JumpB
	var_897_string = ""; // 0x2a0 PushV
	var_897_string = "Neutral"; // 0x2a1 MovS
	func_729(var_891_object, var_897_string); // 0x2a2 NEW_2
	var_905_int = 535284; // 0x2a4 PushI
	SetMessage(var_905_int); // 0x2a5 TObjFunc
	ClearReplies(); // 0x2a7 TObjFunc
	var_906_int = 535285; // 0x2a9 PushI
	var_907_int = 36962; // 0x2aa PushI
	var_908_int = 36961; // 0x2ab PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0x2ac TObjFunc
	var_909_int = 535292; // 0x2ae PushI
	var_910_int = -1; // 0x2af PushI
	var_911_int = 36968; // 0x2b0 PushI
	AddReply(var_909_int, var_910_int, var_911_int); // 0x2b1 TObjFunc
	var_912_int = 535293; // 0x2b3 PushI
	var_913_int = -1; // 0x2b4 PushI
	var_914_int = 36969; // 0x2b5 PushI
	AddReply(var_912_int, var_913_int, var_914_int); // 0x2b6 TObjFunc
	goto Label_699; // 0x2b8 Jump
	
Label_699:
	var_915_bool = 0; // 0x2bb PushV
	func_5249(var_915_bool); // 0x2bc NEW_2
	if(var_915_bool == 0) goto Label_714; // 0x2be JumpB
	
Label_703:
	lshWaitForAnimEnd(); // 0x2bf Func
	var_916_string = var_3_string; // 0x2c1 PushT
	if(var_916_string == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_713; // 0x2c3 Jump
	
Label_713:
	goto Label_728; // 0x2c9 Jump
	
Label_728:
	return 0; // 0x2d8 Return
	
Label_708:
	var_917_string = ""; // 0x2c4 PushV
	var_917_string = var_2_object; // 0x2c5 MovT
	func_5056(var_917_string); // 0x2c6 NEW_2
	goto Label_703; // 0x2c8 Jump
	
Label_714:
	var_918_string = "all"; // 0x2ca PushS
	var_919_string = "idle"; // 0x2cb PushS
	PlayAnimation(var_918_string, var_919_string); // 0x2cc Func
	
Label_718:
	WaitForAnimEnd(); // 0x2ce Func
	var_920_string = var_3_string; // 0x2d0 PushT
	if(var_920_string == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_728; // 0x2d2 Jump
	
Label_723:
	var_921_string = "all"; // 0x2d3 PushS
	var_922_string = "idle"; // 0x2d4 PushS
	PlayAnimation(var_921_string, var_922_string); // 0x2d5 Func
	goto Label_718; // 0x2d7 Jump
}


func_5788(var_759_bool)
{
	var_761_int = 0; var_762_string = ""; // 0x169d PushV
	var_762_string = "ood8Kapella2"; // 0x169e MovS
	func_5125(var_761_int, var_762_string); // 0x169f NEW_2
	var_763_int = 0; // 0x16a1 PushI
	var_764_bool = var_761_int == var_763_int; // 0x16a2 Eq
	if(var_764_bool == 0) goto Label_5798; // 0x16a3 JumpB
	var_759_bool = 1; // 0x16a4 MovB
	return 0; // 0x16a5 Return
	
Label_5798:
	var_759_bool = 0; // 0x16a6 MovB
	return 0; // 0x16a7 Return
}


func_5278(var_85_object)
{
	var_87_string = "feromicin2 is given"; // 0x149f PushS
	Trace(var_87_string); // 0x14a0 Func
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0; // 0x14a2 PushV
	var_88_object = var_85_object; // 0x14a3 Mov
	var_89_string = "feromicin"; // 0x14a4 MovS
	var_90_int = 2; // 0x14a5 MovI
	func_5172(var_88_object, var_89_string, var_90_int); // 0x14a6 NEW_2
	return 0; // 0x14a8 Return
}


func_5629(var_423_bool)
{
	var_425_int = 0; var_426_string = ""; // 0x15fe PushV
	var_426_string = "d3q03"; // 0x15ff MovS
	func_5125(var_425_int, var_426_string); // 0x1600 NEW_2
	var_427_int = 0; // 0x1602 PushI
	var_428_bool = var_425_int == var_427_int; // 0x1603 Eq
	if(var_428_bool == 0) goto Label_5639; // 0x1604 JumpB
	var_423_bool = 1; // 0x1605 MovB
	return 0; // 0x1606 Return
	
Label_5639:
	var_423_bool = 0; // 0x1607 MovB
	return 0; // 0x1608 Return
}


func_163(var_2_object, var_817_string)
{
	var_818_bool = 0; // 0xa4 PushV
	func_5249(var_818_bool); // 0xa5 NEW_2
	var_819_bool = var_818_bool == 0; // 0xa7 Not
	if(var_819_bool == 0) goto Label_170; // 0xa8 JumpB
	return 0; // 0xa9 Return
	
Label_170:
	var_820_bool = var_817_string == var_2_object; // 0xaa Eq
	if(var_820_bool == 0) goto Label_173; // 0xab JumpB
	return 0; // 0xac Return
	
Label_173:
	var_821_string = ""; var_822_bool = 0; // 0xad PushV
	var_821_string = var_817_string; // 0xae Mov
	var_823_string = ""; // 0xaf PushS
	var_824_bool = var_817_string == var_823_string; // 0xb0 Eq
	if(var_824_bool == 0) goto Label_180; // 0xb1 JumpB
	var_822_bool = 0; // 0xb2 MovB
	goto Label_181; // 0xb3 Jump
	
Label_181:
	func_5072(var_821_string, var_822_bool); // 0xb5 NEW_2
	var_2_object = var_817_string; // 0xb7 TMov
	return 0; // 0xb8 Return
	
Label_180:
	var_822_bool = 1; // 0xb4 MovB
}


func_5800(var_547_bool)
{
	var_549_int = 0; var_550_string = ""; // 0x16a9 PushV
	var_550_string = "ood4Kapella1"; // 0x16aa MovS
	func_5125(var_549_int, var_550_string); // 0x16ab NEW_2
	var_551_int = 0; // 0x16ad PushI
	var_552_bool = var_549_int == var_551_int; // 0x16ae Eq
	if(var_552_bool == 0) goto Label_5810; // 0x16af JumpB
	var_547_bool = 1; // 0x16b0 MovB
	return 0; // 0x16b1 Return
	
Label_5810:
	var_547_bool = 0; // 0x16b2 MovB
	return 0; // 0x16b3 Return
}


func_5289(var_58_object)
{
	var_60_string = "d11q06KapellaRing"; // 0x14aa PushS
	var_61_int = 1; // 0x14ab PushI
	SetVariable(var_60_string, var_61_int); // 0x14ac Func
	func_5881(); // 0x14af NEW_2
	var_85_string = "d11q06KapellaBeads is given"; // 0x14b1 PushS
	Trace(var_85_string); // 0x14b2 Func
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0; // 0x14b4 PushV
	var_86_object = var_58_object; // 0x14b5 Mov
	var_87_string = "d11q06KapellaBeads"; // 0x14b6 MovS
	var_88_int = 1; // 0x14b7 MovI
	func_5172(var_86_object, var_87_string, var_88_int); // 0x14b8 NEW_2
	return 0; // 0x14ba Return
}


func_5812(var_553_bool)
{
	var_555_int = 0; var_556_string = ""; // 0x16b5 PushV
	var_556_string = "d4q02"; // 0x16b6 MovS
	func_5125(var_555_int, var_556_string); // 0x16b7 NEW_2
	var_557_int = 0; // 0x16b9 PushI
	var_558_bool = var_555_int == var_557_int; // 0x16ba Eq
	if(var_558_bool == 0) goto Label_5822; // 0x16bb JumpB
	var_553_bool = 1; // 0x16bc MovB
	return 0; // 0x16bd Return
	
Label_5822:
	var_553_bool = 0; // 0x16be MovB
	return 0; // 0x16bf Return
}


func_3769(var_0_object, var_1_object, var_2_object, var_3_string, var_720_object, var_721_object)
{
	var_0_object = var_721_object; // 0xeba TMov
	var_1_object = var_720_object; // 0xebb TMov
	var_3_string = 0; // 0xebc TMovB
	var_726_int = 1; // 0xebd PushI
	if(var_726_int == 0) goto Label_3835; // 0xebe JumpB
	var_727_string = ""; // 0xebf PushV
	var_727_string = "Neutral"; // 0xec0 MovS
	func_3865(var_721_object, var_727_string); // 0xec1 NEW_2
	var_735_int = 513462; // 0xec3 PushI
	SetMessage(var_735_int); // 0xec4 TObjFunc
	ClearReplies(); // 0xec6 TObjFunc
	var_736_bool = 0; // 0xec8 PushV
	var_736_bool = 0; // 0xec9 MovB
	var_737_bool = 0; var_738_object = Obj(); // 0xeca PushV
	var_738_object = var_1_object; // 0xecb MovT
	func_5764(var_738_object); // 0xecc NEW_2
	if(var_737_bool == 0) goto Label_3797; // 0xece JumpB
	var_743_bool = 0; var_744_object = Obj(); // 0xecf PushV
	var_744_object = var_1_object; // 0xed0 MovT
	func_5752(var_744_object); // 0xed1 NEW_2
	if(var_743_bool == 0) goto Label_3797; // 0xed3 JumpB
	var_736_bool = 1; // 0xed4 MovB
	
Label_3797:
	if(var_736_bool == 0) goto Label_3803; // 0xed5 JumpB
	var_749_int = 533315; // 0xed6 PushI
	var_750_int = 37609; // 0xed7 PushI
	var_751_int = 34823; // 0xed8 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0xed9 TObjFunc
	
Label_3803:
	var_752_bool = 0; // 0xedb PushV
	var_752_bool = 0; // 0xedc MovB
	var_753_bool = 0; var_754_object = Obj(); // 0xedd PushV
	var_754_object = var_1_object; // 0xede MovT
	func_5776(var_754_object); // 0xedf NEW_2
	if(var_753_bool == 0) goto Label_3816; // 0xee1 JumpB
	var_759_bool = 0; var_760_object = Obj(); // 0xee2 PushV
	var_760_object = var_1_object; // 0xee3 MovT
	func_5788(var_760_object); // 0xee4 NEW_2
	if(var_759_bool == 0) goto Label_3816; // 0xee6 JumpB
	var_752_bool = 1; // 0xee7 MovB
	
Label_3816:
	if(var_752_bool == 0) goto Label_3822; // 0xee8 JumpB
	var_765_int = 513463; // 0xee9 PushI
	var_766_int = 14713; // 0xeea PushI
	var_767_int = 14700; // 0xeeb PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0xeec TObjFunc
	
Label_3822:
	var_768_int = 513483; // 0xeee PushI
	var_769_int = -1; // 0xeef PushI
	var_770_int = 14721; // 0xef0 PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xef1 TObjFunc
	var_771_int = 535898; // 0xef3 PushI
	var_772_int = -1; // 0xef4 PushI
	var_773_int = 37608; // 0xef5 PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0xef6 TObjFunc
	goto Label_3835; // 0xef8 Jump
	
Label_3835:
	var_774_bool = 0; // 0xefb PushV
	func_5249(var_774_bool); // 0xefc NEW_2
	if(var_774_bool == 0) goto Label_3850; // 0xefe JumpB
	
Label_3839:
	lshWaitForAnimEnd(); // 0xeff Func
	var_775_string = var_3_string; // 0xf01 PushT
	if(var_775_string == 0) goto Label_3844; // 0xf02 JumpB
	goto Label_3849; // 0xf03 Jump
	
Label_3849:
	goto Label_3864; // 0xf09 Jump
	
Label_3864:
	return 0; // 0xf18 Return
	
Label_3844:
	var_776_string = ""; // 0xf04 PushV
	var_776_string = var_2_object; // 0xf05 MovT
	func_5056(var_776_string); // 0xf06 NEW_2
	goto Label_3839; // 0xf08 Jump
	
Label_3850:
	var_777_string = "all"; // 0xf0a PushS
	var_778_string = "idle"; // 0xf0b PushS
	PlayAnimation(var_777_string, var_778_string); // 0xf0c Func
	
Label_3854:
	WaitForAnimEnd(); // 0xf0e Func
	var_779_string = var_3_string; // 0xf10 PushT
	if(var_779_string == 0) goto Label_3859; // 0xf11 JumpB
	goto Label_3864; // 0xf12 Jump
	
Label_3859:
	var_780_string = "all"; // 0xf13 PushS
	var_781_string = "idle"; // 0xf14 PushS
	PlayAnimation(var_780_string, var_781_string); // 0xf15 Func
	goto Label_3854; // 0xf17 Jump
}


func_4794(var_85_bool)
{
	var_85_bool = 1; // 0x12ba MovB
	return 0; // 0x12bb Return
}


func_5307()
{
	var_109_bool = 0; // 0x14bc PushV
	var_109_bool = 0; // 0x14bd MovB
	var_110_int = 0; var_111_string = ""; // 0x14be PushV
	var_111_string = "d11q06KapellaRing"; // 0x14bf MovS
	func_5125(var_110_int, var_111_string); // 0x14c0 NEW_2
	var_114_int = 0; // 0x14c2 PushI
	var_115_bool = var_110_int != var_114_int; // 0x14c3 Neq
	if(var_115_bool == 0) goto Label_5325; // 0x14c4 JumpB
	var_116_int = 0; var_117_string = ""; // 0x14c5 PushV
	var_117_string = "d11q06KlaraRing"; // 0x14c6 MovS
	func_5125(var_116_int, var_117_string); // 0x14c7 NEW_2
	var_118_int = 0; // 0x14c9 PushI
	var_119_bool = var_116_int != var_118_int; // 0x14ca Neq
	if(var_119_bool == 0) goto Label_5325; // 0x14cb JumpB
	var_109_bool = 1; // 0x14cc MovB
	
Label_5325:
	if(var_109_bool == 0) goto Label_5333; // 0x14cd JumpB
	var_120_string = "d11q06"; // 0x14ce PushS
	var_121_int = 2; // 0x14cf PushI
	SetVariable(var_120_string, var_121_int); // 0x14d0 Func
	func_5855(); // 0x14d3 NEW_2
	
Label_5333:
	return 0; // 0x14d5 Return
}


func_4796()
{
	StopAnimation(); // 0x12bc Func
	StopGroup0(); // 0x12be Func
	return 0; // 0x12c0 Return
}


func_5824(var_615_bool)
{
	var_617_int = 0; var_618_string = ""; // 0x16c1 PushV
	var_618_string = "ood6Kapella3"; // 0x16c2 MovS
	func_5125(var_617_int, var_618_string); // 0x16c3 NEW_2
	var_619_int = 0; // 0x16c5 PushI
	var_620_bool = var_617_int == var_619_int; // 0x16c6 Eq
	if(var_620_bool == 0) goto Label_5834; // 0x16c7 JumpB
	var_615_bool = 1; // 0x16c8 MovB
	return 0; // 0x16c9 Return
	
Label_5834:
	var_615_bool = 0; // 0x16ca MovB
	return 0; // 0x16cb Return
}


func_4801(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x12c1 PushV
	GetPosition(var_66_cvector); // 0x12c2 Func
	GetPosition(var_67_cvector); // 0x12c4 ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x12c6 Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x12c7 Or2
	return 6; // 0x12c8 Return
}


func_4809(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x12c9 PushV
	GetPosition(var_59_cvector); // 0x12ca Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x12cc Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x12cd PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x12ce PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x12cf Func
	var_54_bool = var_61_bool; // 0x12d1 Mov
	return 6; // 0x12d2 Return
}


func_5836(var_367_bool)
{
	var_369_int = 0; var_370_string = ""; // 0x16cd PushV
	var_370_string = "d2KnowBigVladIsBad"; // 0x16ce MovS
	func_5125(var_369_int, var_370_string); // 0x16cf NEW_2
	var_371_int = 1; // 0x16d1 PushI
	var_372_bool = var_369_int == var_371_int; // 0x16d2 Eq
	if(var_372_bool == 0) goto Label_5846; // 0x16d3 JumpB
	var_367_bool = 1; // 0x16d4 MovB
	return 0; // 0x16d5 Return
	
Label_5846:
	var_367_bool = 0; // 0x16d6 MovB
	return 0; // 0x16d7 Return
}


func_4819(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x12d3 PushV
	GetPosition(var_53_cvector); // 0x12d4 ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x12d6 PushV
	var_55_cvector = var_53_cvector; // 0x12d7 Mov
	func_4809(var_54_bool, var_55_cvector); // 0x12d8 NEW_2
	var_50_bool = var_54_bool; // 0x12d9 Mov
	return 2; // 0x12db Return
}


func_5334()
{
	var_54_string = "ood11Kapella1"; // 0x14d7 PushS
	var_55_int = 1; // 0x14d8 PushI
	SetVariable(var_54_string, var_55_int); // 0x14d9 Func
	return 0; // 0x14db Return
}


func_5848(var_478_bool)
{
	var_480_float = 0; var_481_float = 0; // 0x16d8 PushV
	var_482_string = "disease"; // 0x16d9 PushS
	GetProperty(var_482_string, var_481_float); // 0x16da ObjFunc
	var_483_int = 0; // 0x16dc PushI
	var_478_bool = var_481_float == var_483_int; // 0x16dd Eq2
	return 2; // 0x16de Return
}


func_729(var_2_object, var_897_string)
{
	var_898_bool = 0; // 0x2da PushV
	func_5249(var_898_bool); // 0x2db NEW_2
	var_899_bool = var_898_bool == 0; // 0x2dd Not
	if(var_899_bool == 0) goto Label_736; // 0x2de JumpB
	return 0; // 0x2df Return
	
Label_736:
	var_900_bool = var_897_string == var_2_object; // 0x2e0 Eq
	if(var_900_bool == 0) goto Label_739; // 0x2e1 JumpB
	return 0; // 0x2e2 Return
	
Label_739:
	var_901_string = ""; var_902_bool = 0; // 0x2e3 PushV
	var_901_string = var_897_string; // 0x2e4 Mov
	var_903_string = ""; // 0x2e5 PushS
	var_904_bool = var_897_string == var_903_string; // 0x2e6 Eq
	if(var_904_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_902_bool = 0; // 0x2e8 MovB
	goto Label_747; // 0x2e9 Jump
	
Label_747:
	func_5072(var_901_string, var_902_bool); // 0x2eb NEW_2
	var_2_object = var_897_string; // 0x2ed TMov
	return 0; // 0x2ee Return
	
Label_746:
	var_902_bool = 1; // 0x2ea MovB
}


func_5340()
{
	var_152_string = "ood11Kapella2"; // 0x14dd PushS
	var_153_int = 1; // 0x14de PushI
	SetVariable(var_152_string, var_153_int); // 0x14df Func
	return 0; // 0x14e1 Return
}


func_4828(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x12dc PushV
	IsLoaded(var_49_bool); // 0x12dd Func
	var_47_bool = var_49_bool; // 0x12df Mov
	return 2; // 0x12e0 Return
}


func_5855()
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x16df PushV
	var_124_int = 690; // 0x16e0 PushI
	var_125_int = 2; // 0x16e1 PushI
	var_126_int = 534538; // 0x16e2 PushI
	CreateDiaryEntry(var_123_object, var_124_int, var_125_int, var_126_int); // 0x16e3 Func
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0; // 0x16e5 PushV
	var_128_object = var_123_object; // 0x16e6 Mov
	var_129_int = 686; // 0x16e7 MovI
	func_5985(var_127_bool, var_128_object, var_129_int); // 0x16e8 NEW_2
	return 2; // 0x16ea Return
}


func_4833(var_78_bool, var_80_float)
{
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; // 0x12e1 PushV
	GetPosition(var_91_cvector); // 0x12e2 ObjFunc
	GetEyesHeight(var_90_float); // 0x12e4 ObjFunc
	var_99_float = GetByIndex(var_91_cvector, 1); // 0x12e6 PushE
	var_99_float = var_99_float + var_90_float; // 0x12e7 Add2
	SetByIndex(var_91_cvector, 1) = var_99_float; // 0x12e8 PopE
	GetPosition(var_92_cvector); // 0x12e9 Func
	GetEyesHeight(var_90_float); // 0x12eb Func
	var_100_float = GetByIndex(var_92_cvector, 1); // 0x12ed PushE
	var_100_float = var_100_float + var_90_float; // 0x12ee Add2
	SetByIndex(var_92_cvector, 1) = var_100_float; // 0x12ef PopE
	var_93_cvector = var_91_cvector - var_92_cvector; // 0x12f0 Sub2
	var_101_float = GetByIndex(var_93_cvector, 1); // 0x12f1 PushE
	var_101_float = 0; // 0x12f2 MovI
	SetByIndex(var_93_cvector, 1) = var_101_float; // 0x12f3 PopE
	var_102_int = var_93_cvector | var_93_cvector; // 0x12f4 Or
	var_103_float = sqrt(var_102_int); // 0x12f5 Sqrt
	var_93_cvector = var_93_cvector / var_93_cvector; // 0x12f6 Div2
	var_94_cvector = -var_93_cvector; // 0x12f7 Neg2
	var_104_float = var_93_cvector * var_80_float; // 0x12f8 Mult
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x12f9 PushV
	var_107_cvector = CVector(0.0, 1.0, 0.0); // 0x12fa PushVec
	var_106_cvector = var_94_cvector ^ var_107_cvector; // 0x12fb Xor2
	func_5115(var_105_cvector, var_106_cvector); // 0x12fc NEW_2
	var_113_int = 25; // 0x12fe PushI
	var_114_float = var_105_cvector * var_113_int; // 0x12ff Mult
	var_115_int = var_104_float + var_114_float; // 0x1300 Add
	var_116_cvector = CVector(0.0, 10.0, 0.0); // 0x1301 PushVec
	var_95_cvector = var_115_int - var_116_cvector; // 0x1302 Sub2
	var_96_cvector = var_92_cvector + var_95_cvector; // 0x1303 Add2
	IsOverrideActive(var_97_bool); // 0x1304 Func
	var_117_bool = var_97_bool; // 0x1306 Push
	if(var_117_bool == 0) goto Label_4874; // 0x1307 JumpB
	var_78_bool = 0; // 0x1308 MovB
	return 18; // 0x1309 Return
	
Label_4874:
	StopWorld(); // 0x130a Func
	CameraTransit(var_96_cvector, var_94_cvector); // 0x130c Func
	var_118_float = GetByIndex(var_95_cvector, 0); // 0x130e PushE
	var_119_float = GetByIndex(var_95_cvector, 2); // 0x130f PushE
	Rotate(var_118_float, var_119_float); // 0x1310 Func
	var_120_bool = 0; // 0x1312 PushV
	func_5249(var_120_bool); // 0x1313 NEW_2
	if(var_120_bool == 0) goto Label_4887; // 0x1315 JumpB
	goto Label_4895; // 0x1316 Jump
	
Label_4895:
	CameraWaitForPlayFinish(); // 0x131f Func
	ResumeWorld(); // 0x1321 Func
	var_78_bool = 1; // 0x1323 MovB
	return 18; // 0x1324 Return
	
Label_4887:
	var_121_string = "head"; // 0x1317 PushS
	HasAnimationTrack(var_98_bool, var_121_string); // 0x1318 Func
	var_122_bool = var_98_bool; // 0x131a Push
	if(var_122_bool == 0) goto Label_4895; // 0x131b JumpB
	var_123_string = "head"; // 0x131c PushS
	LookAsyncCamera(var_123_string); // 0x131d Func
}


func_5346()
{
	func_5868(); // 0x14e4 NEW_2
	var_142_bool = 0; var_143_string = ""; var_144_string = ""; // 0x14e6 PushV
	var_143_string = "quest_d11_06"; // 0x14e7 MovS
	var_144_string = "fail"; // 0x14e8 MovS
	func_5185(var_142_bool, var_143_string, var_144_string); // 0x14e9 NEW_2
	return 0; // 0x14eb Return
}


func_1250(var_0_object, var_1_object, var_2_object, var_3_string, var_601_object, var_602_object)
{
	var_0_object = var_602_object; // 0x4e3 TMov
	var_1_object = var_601_object; // 0x4e4 TMov
	var_3_string = 0; // 0x4e5 TMovB
	var_607_int = 1; // 0x4e6 PushI
	if(var_607_int == 0) goto Label_1372; // 0x4e7 JumpB
	var_608_bool = 0; // 0x4e8 PushV
	var_608_bool = 0; // 0x4e9 MovB
	var_609_bool = 0; var_610_object = Obj(); // 0x4ea PushV
	var_610_object = var_1_object; // 0x4eb MovT
	func_5740(var_610_object); // 0x4ec NEW_2
	if(var_609_bool == 0) goto Label_1269; // 0x4ee JumpB
	var_615_bool = 0; var_616_object = Obj(); // 0x4ef PushV
	var_616_object = var_1_object; // 0x4f0 MovT
	func_5824(var_616_object); // 0x4f1 NEW_2
	if(var_615_bool == 0) goto Label_1269; // 0x4f3 JumpB
	var_608_bool = 1; // 0x4f4 MovB
	
Label_1269:
	if(var_608_bool == 0) goto Label_1300; // 0x4f5 JumpB
	var_621_object = Obj(); var_622_object = Obj(); // 0x4f6 PushV
	var_621_object = var_1_object; // 0x4f7 MovT
	var_622_object = var_0_object; // 0x4f8 MovT
	func_5545(); // 0x4f9 NEW_2
	var_625_object = Obj(); var_626_object = Obj(); // 0x4fb PushV
	var_625_object = var_1_object; // 0x4fc MovT
	var_626_object = var_0_object; // 0x4fd MovT
	func_5551(); // 0x4fe NEW_2
	var_629_string = ""; // 0x500 PushV
	var_629_string = "Neutral"; // 0x501 MovS
	func_1402(var_602_object, var_629_string); // 0x502 NEW_2
	var_637_int = 503371; // 0x504 PushI
	SetMessage(var_637_int); // 0x505 TObjFunc
	ClearReplies(); // 0x507 TObjFunc
	var_638_int = 503375; // 0x509 PushI
	var_639_int = 3621; // 0x50a PushI
	var_640_int = 3619; // 0x50b PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x50c TObjFunc
	var_641_int = 503376; // 0x50e PushI
	var_642_int = 3621; // 0x50f PushI
	var_643_int = 3620; // 0x510 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x511 TObjFunc
	goto Label_1372; // 0x513 Jump
	
Label_1372:
	var_644_bool = 0; // 0x55c PushV
	func_5249(var_644_bool); // 0x55d NEW_2
	if(var_644_bool == 0) goto Label_1387; // 0x55f JumpB
	
Label_1376:
	lshWaitForAnimEnd(); // 0x560 Func
	var_645_string = var_3_string; // 0x562 PushT
	if(var_645_string == 0) goto Label_1381; // 0x563 JumpB
	goto Label_1386; // 0x564 Jump
	
Label_1386:
	goto Label_1401; // 0x56a Jump
	
Label_1401:
	return 0; // 0x579 Return
	
Label_1381:
	var_646_string = ""; // 0x565 PushV
	var_646_string = var_2_object; // 0x566 MovT
	func_5056(var_646_string); // 0x567 NEW_2
	goto Label_1376; // 0x569 Jump
	
Label_1387:
	var_647_string = "all"; // 0x56b PushS
	var_648_string = "idle"; // 0x56c PushS
	PlayAnimation(var_647_string, var_648_string); // 0x56d Func
	
Label_1391:
	WaitForAnimEnd(); // 0x56f Func
	var_649_string = var_3_string; // 0x571 PushT
	if(var_649_string == 0) goto Label_1396; // 0x572 JumpB
	goto Label_1401; // 0x573 Jump
	
Label_1396:
	var_650_string = "all"; // 0x574 PushS
	var_651_string = "idle"; // 0x575 PushS
	PlayAnimation(var_650_string, var_651_string); // 0x576 Func
	goto Label_1391; // 0x578 Jump
	
Label_1300:
	var_652_bool = 0; // 0x514 PushV
	var_652_bool = 0; // 0x515 MovB
	var_653_bool = 0; // 0x516 PushV
	var_653_bool = 0; // 0x517 MovB
	var_654_bool = 0; var_655_object = Obj(); // 0x518 PushV
	var_655_object = var_1_object; // 0x519 MovT
	func_5728(var_655_object); // 0x51a NEW_2
	if(var_654_bool == 0) goto Label_1316; // 0x51c JumpB
	var_660_bool = 0; var_661_object = Obj(); // 0x51d PushV
	var_661_object = var_1_object; // 0x51e MovT
	func_5704(var_661_object); // 0x51f NEW_2
	var_666_bool = var_660_bool == 0; // 0x521 Not
	if(var_666_bool == 0) goto Label_1316; // 0x522 JumpB
	var_653_bool = 1; // 0x523 MovB
	
Label_1316:
	if(var_653_bool == 0) goto Label_1324; // 0x524 JumpB
	var_667_bool = 0; var_668_object = Obj(); // 0x525 PushV
	var_668_object = var_1_object; // 0x526 MovT
	func_5716(var_668_object); // 0x527 NEW_2
	var_673_bool = var_667_bool == 0; // 0x529 Not
	if(var_673_bool == 0) goto Label_1324; // 0x52a JumpB
	var_652_bool = 1; // 0x52b MovB
	
Label_1324:
	if(var_652_bool == 0) goto Label_1350; // 0x52c JumpB
	var_674_object = Obj(); var_675_object = Obj(); // 0x52d PushV
	var_674_object = var_1_object; // 0x52e MovT
	var_675_object = var_0_object; // 0x52f MovT
	func_5545(); // 0x530 NEW_2
	var_676_string = ""; // 0x532 PushV
	var_676_string = "Neutral"; // 0x533 MovS
	func_1402(var_602_object, var_676_string); // 0x534 NEW_2
	var_677_int = 512095; // 0x536 PushI
	SetMessage(var_677_int); // 0x537 TObjFunc
	ClearReplies(); // 0x539 TObjFunc
	var_678_int = 512096; // 0x53b PushI
	var_679_int = 13323; // 0x53c PushI
	var_680_int = 13322; // 0x53d PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x53e TObjFunc
	var_681_int = 536136; // 0x540 PushI
	var_682_int = -1; // 0x541 PushI
	var_683_int = 37895; // 0x542 PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0x543 TObjFunc
	goto Label_1372; // 0x545 Jump
	
Label_1350:
	var_684_string = ""; // 0x546 PushV
	var_684_string = "Neutral"; // 0x547 MovS
	func_1402(var_602_object, var_684_string); // 0x548 NEW_2
	var_685_int = 512523; // 0x54a PushI
	SetMessage(var_685_int); // 0x54b TObjFunc
	ClearReplies(); // 0x54d TObjFunc
	var_686_int = 512524; // 0x54f PushI
	var_687_int = -1; // 0x550 PushI
	var_688_int = 13694; // 0x551 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x552 TObjFunc
	var_689_int = 536137; // 0x554 PushI
	var_690_int = -1; // 0x555 PushI
	var_691_int = 37896; // 0x556 PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x557 TObjFunc
	goto Label_1372; // 0x559 Jump
}


func_5356()
{
	var_54_string = "ood2Kapella1"; // 0x14ed PushS
	var_55_int = 1; // 0x14ee PushI
	SetVariable(var_54_string, var_55_int); // 0x14ef Func
	return 0; // 0x14f1 Return
}


func_5868()
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x16ec PushV
	var_136_int = 792; // 0x16ed PushI
	var_137_int = 2; // 0x16ee PushI
	var_138_int = 543367; // 0x16ef PushI
	CreateDiaryEntry(var_135_object, var_136_int, var_137_int, var_138_int); // 0x16f0 Func
	var_139_bool = 0; var_140_object = Obj(); var_141_int = 0; // 0x16f2 PushV
	var_140_object = var_135_object; // 0x16f3 Mov
	var_141_int = 686; // 0x16f4 MovI
	func_5985(var_139_bool, var_140_object, var_141_int); // 0x16f5 NEW_2
	return 2; // 0x16f7 Return
}


func_5362()
{
	var_143_string = "ood2Kapella2"; // 0x14f3 PushS
	var_144_int = 1; // 0x14f4 PushI
	SetVariable(var_143_string, var_144_int); // 0x14f5 Func
	return 0; // 0x14f7 Return
}


func_4339(var_0_object, var_925_int, var_926_object)
{
	var_928_object = Obj(); var_929_bool = 0; var_930_int = 0; var_931_bool = 0; var_932_object = Obj(); var_933_bool = 0; var_934_int = 0; var_935_bool = 0; // 0x10f3 PushV
	var_0_object = var_926_object; // 0x10f4 TMov
	var_936_bool = 0; var_937_object = Obj(); var_938_float = 0; // 0x10f5 PushV
	var_937_object = var_926_object; // 0x10f6 Mov
	var_938_float = 70.0; // 0x10f7 MovF
	func_4833(var_937_object, var_938_float); // 0x10f8 NEW_2
	var_939_bool = var_936_bool == 0; // 0x10fa Not
	if(var_939_bool == 0) goto Label_4350; // 0x10fb JumpB
	var_925_int = -2; // 0x10fc MovI
	return 8; // 0x10fd Return
	
Label_4350:
	CreateDialog(var_932_object); // 0x10fe Func
	var_940_int = 0; // 0x1100 PushV
	func_5243(var_940_int); // 0x1101 NEW_2
	SetNPCName(var_940_int); // 0x1103 ObjFunc
	var_941_int = 0; // 0x1105 PushV
	func_5241(var_941_int); // 0x1106 NEW_2
	SetNPCDescription(var_941_int); // 0x1108 ObjFunc
	var_942_string = ""; // 0x110a PushV
	func_5245(var_942_string); // 0x110b NEW_2
	SetPhoto(var_942_string); // 0x110d ObjFunc
	var_943_string = ""; // 0x110f PushV
	func_5247(var_943_string); // 0x1110 NEW_2
	SetPhoto2(var_943_string); // 0x1112 ObjFunc
	var_944_int = 0; // 0x1114 PushV
	func_6063(var_944_int); // 0x1115 NEW_2
	SetPlayerName(var_944_int); // 0x1117 ObjFunc
	var_934_int = -1; // 0x1119 MovI
	IsOverrideActive(var_933_bool); // 0x111a Func
	var_945_bool = var_933_bool; // 0x111c Push
	if(var_945_bool == 0) goto Label_4384; // 0x111d JumpB
	var_925_int = -2; // 0x111e MovI
	return 8; // 0x111f Return
	
Label_4384:
	DoDialog(var_932_object); // 0x1120 Func
	var_946_bool = 0; var_947_object = Obj(); // 0x1122 PushV
	var_948_object = Obj(); // 0x1123 PushV
	func_5109(var_948_object); // 0x1124 NEW_2
	var_947_object = var_948_object; // 0x1125 Mov
	func_4918(var_946_bool, var_947_object); // 0x1127 NEW_2
	var_949_object = Obj(); var_950_object = Obj(); // 0x1129 PushV
	var_949_object = var_926_object; // 0x112a Mov
	var_950_object = var_932_object; // 0x112b Mov
	TaskCall(17); // 0x112c TaskCall
	func_4420(var_951_object, var_952_object, var_953_string, var_954_bool, var_949_object, var_950_object); // 0x112d NEW_2
	TaskReturn(); // 0x112e TaskReturn
	IsDialogEnd(var_935_bool); // 0x1130 ObjFunc
	
Label_4402:
	var_979_bool = var_935_bool == 0; // 0x1132 Not
	if(var_979_bool == 0) goto Label_4409; // 0x1133 JumpB
	sync(); // 0x1134 Func
	IsDialogEnd(var_935_bool); // 0x1136 ObjFunc
	goto Label_4402; // 0x1138 Jump
	
Label_4409:
	var_980_object = Obj(); // 0x1139 PushV
	var_980_object = var_926_object; // 0x113a Mov
	func_4901(); // 0x113b NEW_2
	StopDialog(var_932_object); // 0x113d Func
	GetReturnValue(var_934_int); // 0x113f ObjFunc
	var_925_int = var_934_int; // 0x1141 Mov
	return 8; // 0x1142 Return
}


func_5368()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x14f8 PushV
	var_60_string = "d2q01"; // 0x14f9 PushS
	var_61_int = 3; // 0x14fa PushI
	SetVariable(var_60_string, var_61_int); // 0x14fb Func
	var_62_object = Obj(); // 0x14fd PushV
	func_6013(var_62_object); // 0x14fe NEW_2
	var_59_object = var_62_object; // 0x14ff Mov
	var_69_string = "d2q01KapellaGotoSpi4ka"; // 0x1501 PushS
	var_70_string = "pt_map_spi4ka"; // 0x1502 PushS
	var_71_int = 1; // 0x1503 PushI
	var_72_int = 511389; // 0x1504 PushI
	var_73_float = 0; // 0x1505 PushV
	func_5197(var_73_float); // 0x1506 NEW_2
	AddMark(var_69_string, var_70_string, var_71_int, var_72_int, var_73_float); // 0x1508 ObjFunc
	func_5894(); // 0x150b NEW_2
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; // 0x150d PushV
	var_100_string = "quest_d2_01"; // 0x150e MovS
	var_101_string = "woman"; // 0x150f MovS
	func_5185(var_99_bool, var_100_string, var_101_string); // 0x1510 NEW_2
	return 2; // 0x1512 Return
}


func_5881()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x16f9 PushV
	var_64_int = 688; // 0x16fa PushI
	var_65_int = 2; // 0x16fb PushI
	var_66_int = 534536; // 0x16fc PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x16fd Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x16ff PushV
	var_68_object = var_63_object; // 0x1700 Mov
	var_69_int = 686; // 0x1701 MovI
	func_5985(var_67_bool, var_68_object, var_69_int); // 0x1702 NEW_2
	return 2; // 0x1704 Return
}


func_1796(var_0_object, var_302_int, var_303_object)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_int = 0; var_308_bool = 0; var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; // 0x704 PushV
	var_0_object = var_303_object; // 0x705 TMov
	var_313_bool = 0; var_314_object = Obj(); var_315_float = 0; // 0x706 PushV
	var_314_object = var_303_object; // 0x707 Mov
	var_315_float = 70.0; // 0x708 MovF
	func_4833(var_314_object, var_315_float); // 0x709 NEW_2
	var_316_bool = var_313_bool == 0; // 0x70b Not
	if(var_316_bool == 0) goto Label_1807; // 0x70c JumpB
	var_302_int = -2; // 0x70d MovI
	return 8; // 0x70e Return
	
Label_1807:
	CreateDialog(var_309_object); // 0x70f Func
	var_317_int = 0; // 0x711 PushV
	func_5243(var_317_int); // 0x712 NEW_2
	SetNPCName(var_317_int); // 0x714 ObjFunc
	var_318_int = 0; // 0x716 PushV
	func_5241(var_318_int); // 0x717 NEW_2
	SetNPCDescription(var_318_int); // 0x719 ObjFunc
	var_319_string = ""; // 0x71b PushV
	func_5245(var_319_string); // 0x71c NEW_2
	SetPhoto(var_319_string); // 0x71e ObjFunc
	var_320_string = ""; // 0x720 PushV
	func_5247(var_320_string); // 0x721 NEW_2
	SetPhoto2(var_320_string); // 0x723 ObjFunc
	var_321_int = 0; // 0x725 PushV
	func_6063(var_321_int); // 0x726 NEW_2
	SetPlayerName(var_321_int); // 0x728 ObjFunc
	var_311_int = -1; // 0x72a MovI
	IsOverrideActive(var_310_bool); // 0x72b Func
	var_322_bool = var_310_bool; // 0x72d Push
	if(var_322_bool == 0) goto Label_1841; // 0x72e JumpB
	var_302_int = -2; // 0x72f MovI
	return 8; // 0x730 Return
	
Label_1841:
	DoDialog(var_309_object); // 0x731 Func
	var_323_bool = 0; var_324_object = Obj(); // 0x733 PushV
	var_325_object = Obj(); // 0x734 PushV
	func_5109(var_325_object); // 0x735 NEW_2
	var_324_object = var_325_object; // 0x736 Mov
	func_4918(var_323_bool, var_324_object); // 0x738 NEW_2
	var_326_object = Obj(); var_327_object = Obj(); // 0x73a PushV
	var_326_object = var_303_object; // 0x73b Mov
	var_327_object = var_309_object; // 0x73c Mov
	TaskCall(9); // 0x73d TaskCall
	func_1877(var_328_object, var_329_object, var_330_string, var_331_bool, var_326_object, var_327_object); // 0x73e NEW_2
	TaskReturn(); // 0x73f TaskReturn
	IsDialogEnd(var_312_bool); // 0x741 ObjFunc
	
Label_1859:
	var_387_bool = var_312_bool == 0; // 0x743 Not
	if(var_387_bool == 0) goto Label_1866; // 0x744 JumpB
	sync(); // 0x745 Func
	IsDialogEnd(var_312_bool); // 0x747 ObjFunc
	goto Label_1859; // 0x749 Jump
	
Label_1866:
	var_388_object = Obj(); // 0x74a PushV
	var_388_object = var_303_object; // 0x74b Mov
	func_4901(); // 0x74c NEW_2
	StopDialog(var_309_object); // 0x74e Func
	GetReturnValue(var_311_int); // 0x750 ObjFunc
	var_302_int = var_311_int; // 0x752 Mov
	return 8; // 0x753 Return
}


func_5894()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1706 PushV
	var_78_int = 52; // 0x1707 PushI
	var_79_int = 1; // 0x1708 PushI
	var_80_int = 512134; // 0x1709 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x170a Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x170c PushV
	var_82_object = var_77_object; // 0x170d Mov
	var_83_int = 10; // 0x170e MovI
	func_5985(var_81_bool, var_82_object, var_83_int); // 0x170f NEW_2
	return 2; // 0x1711 Return
}


func_5907()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1713 PushV
	var_62_int = 27; // 0x1714 PushI
	var_63_int = 2; // 0x1715 PushI
	var_64_int = 503367; // 0x1716 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x1717 Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x1719 PushV
	var_66_object = var_61_object; // 0x171a Mov
	var_67_int = -1; // 0x171b MovI
	func_5985(var_65_bool, var_66_object, var_67_int); // 0x171c NEW_2
	return 2; // 0x171e Return
}


func_5396()
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x1515 PushV
	var_110_object = Obj(); // 0x1516 PushV
	func_6013(var_110_object); // 0x1517 NEW_2
	var_107_object = var_110_object; // 0x1518 Mov
	var_108_string = "pt_map_spi4ka"; // 0x151a MovS
	var_109_float = 2; // 0x151b MovI
	func_6030(var_107_object, var_108_string, var_109_float); // 0x151c NEW_2
	var_130_object = Obj(); // 0x151e PushV
	func_6013(var_130_object); // 0x151f NEW_2
	ShowMap(var_130_object); // 0x1521 ObjFunc
	return 0; // 0x1523 Return
}


func_3865(var_2_object, var_727_string)
{
	var_728_bool = 0; // 0xf1a PushV
	func_5249(var_728_bool); // 0xf1b NEW_2
	var_729_bool = var_728_bool == 0; // 0xf1d Not
	if(var_729_bool == 0) goto Label_3872; // 0xf1e JumpB
	return 0; // 0xf1f Return
	
Label_3872:
	var_730_bool = var_727_string == var_2_object; // 0xf20 Eq
	if(var_730_bool == 0) goto Label_3875; // 0xf21 JumpB
	return 0; // 0xf22 Return
	
Label_3875:
	var_731_string = ""; var_732_bool = 0; // 0xf23 PushV
	var_731_string = var_727_string; // 0xf24 Mov
	var_733_string = ""; // 0xf25 PushS
	var_734_bool = var_727_string == var_733_string; // 0xf26 Eq
	if(var_734_bool == 0) goto Label_3882; // 0xf27 JumpB
	var_732_bool = 0; // 0xf28 MovB
	goto Label_3883; // 0xf29 Jump
	
Label_3883:
	func_5072(var_731_string, var_732_bool); // 0xf2b NEW_2
	var_2_object = var_727_string; // 0xf2d TMov
	return 0; // 0xf2e Return
	
Label_3882:
	var_732_bool = 1; // 0xf2a MovB
}


func_5920()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x1720 PushV
	var_85_int = 83; // 0x1721 PushI
	var_86_int = 2; // 0x1722 PushI
	var_87_int = 512165; // 0x1723 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x1724 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x1726 PushV
	var_89_object = var_84_object; // 0x1727 Mov
	var_90_int = 27; // 0x1728 MovI
	func_5985(var_88_bool, var_89_object, var_90_int); // 0x1729 NEW_2
	return 2; // 0x172b Return
}


func_5412()
{
	var_58_string = "d3q03"; // 0x1525 PushS
	var_59_int = 1; // 0x1526 PushI
	SetVariable(var_58_string, var_59_int); // 0x1527 Func
	func_5907(); // 0x152a NEW_2
	func_5920(); // 0x152d NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0x152f PushV
	var_92_string = "quest_d3_03"; // 0x1530 MovS
	func_5130(var_91_object, var_92_string); // 0x1531 NEW_2
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; // 0x1533 PushV
	var_100_string = "quest_d3_03"; // 0x1534 MovS
	var_101_string = "boy"; // 0x1535 MovS
	func_5185(var_99_bool, var_100_string, var_101_string); // 0x1536 NEW_2
	return 0; // 0x1538 Return
}


func_4901()
{
	var_292_bool = 0; var_293_bool = 0; // 0x1325 PushV
	CameraSwitchToNormal(); // 0x1326 Func
	var_294_bool = 0; // 0x1328 PushV
	func_5249(var_294_bool); // 0x1329 NEW_2
	if(var_294_bool == 0) goto Label_4909; // 0x132b JumpB
	goto Label_4917; // 0x132c Jump
	
Label_4917:
	return 2; // 0x1335 Return
	
Label_4909:
	var_295_string = "head"; // 0x132d PushS
	HasAnimationTrack(var_293_bool, var_295_string); // 0x132e Func
	var_296_bool = var_293_bool; // 0x1330 Push
	if(var_296_bool == 0) goto Label_4917; // 0x1331 JumpB
	var_297_string = "head"; // 0x1332 PushS
	UnlookAsync(var_297_string); // 0x1333 Func
}


func_5933()
{
	var_144_object = Obj(); var_145_object = Obj(); // 0x172d PushV
	var_146_int = 85; // 0x172e PushI
	var_147_int = 2; // 0x172f PushI
	var_148_int = 512167; // 0x1730 PushI
	CreateDiaryEntry(var_145_object, var_146_int, var_147_int, var_148_int); // 0x1731 Func
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0; // 0x1733 PushV
	var_150_object = var_145_object; // 0x1734 Mov
	var_151_int = 27; // 0x1735 MovI
	func_5985(var_149_bool, var_150_object, var_151_int); // 0x1736 NEW_2
	return 2; // 0x1738 Return
}


func_4918(var_138_bool, var_139_object)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; // 0x1336 PushV
	var_147_string = "voice_common"; // 0x1337 PushS
	GetVariable(var_147_string, var_145_int); // 0x1338 Func
	var_148_int = var_145_int; // 0x133a Push
	if(var_148_int == 0) goto Label_4956; // 0x133b JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x133c PushV
	var_150_object = var_139_object; // 0x133d Mov
	func_4976(var_150_object); // 0x133e NEW_2
	var_179_bool = var_149_bool == 0; // 0x1340 Not
	if(var_179_bool == 0) goto Label_4938; // 0x1341 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x1342 PushV
	var_181_object = var_139_object; // 0x1343 Mov
	func_5013(var_181_object); // 0x1344 NEW_2
	var_215_bool = var_180_bool == 0; // 0x1346 Not
	if(var_215_bool == 0) goto Label_4938; // 0x1347 JumpB
	var_138_bool = 0; // 0x1348 MovB
	return 4; // 0x1349 Return
	
Label_4938:
	var_216_int = 2; // 0x134a PushI
	irand(var_146_int, var_216_int); // 0x134b Func
	var_217_int = var_146_int; // 0x134d Push
	if(var_217_int == 0) goto Label_4951; // 0x134e JumpB
	var_218_string = "voice_common"; // 0x134f PushS
	var_219_int = 1; // 0x1350 PushI
	var_220_int = var_145_int + var_219_int; // 0x1351 Add
	var_221_int = 3; // 0x1352 PushI
	var_222_int = var_220_int / var_221_int; // 0x1353 Mod
	SetVariable(var_218_string, var_222_int); // 0x1354 Func
	goto Label_4955; // 0x1356 Jump
	
Label_4955:
	goto Label_4974; // 0x135b Jump
	
Label_4974:
	var_138_bool = 1; // 0x136e MovB
	return 4; // 0x136f Return
	
Label_4951:
	var_223_string = "voice_common"; // 0x1357 PushS
	var_224_int = 0; // 0x1358 PushI
	SetVariable(var_223_string, var_224_int); // 0x1359 Func
	
Label_4956:
	var_225_bool = 0; var_226_object = Obj(); // 0x135c PushV
	var_226_object = var_139_object; // 0x135d Mov
	func_5013(var_226_object); // 0x135e NEW_2
	var_227_bool = var_225_bool == 0; // 0x1360 Not
	if(var_227_bool == 0) goto Label_4970; // 0x1361 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x1362 PushV
	var_229_object = var_139_object; // 0x1363 Mov
	func_4976(var_229_object); // 0x1364 NEW_2
	var_230_bool = var_228_bool == 0; // 0x1366 Not
	if(var_230_bool == 0) goto Label_4970; // 0x1367 JumpB
	var_138_bool = 0; // 0x1368 MovB
	return 4; // 0x1369 Return
	
Label_4970:
	var_231_string = "voice_common"; // 0x136a PushS
	var_232_int = 1; // 0x136b PushI
	SetVariable(var_231_string, var_232_int); // 0x136c Func
}


func_5433()
{
	var_54_string = "ood3Kapella1"; // 0x153a PushS
	var_55_int = 1; // 0x153b PushI
	SetVariable(var_54_string, var_55_int); // 0x153c Func
	return 0; // 0x153e Return
}


func_5946()
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x173a PushV
	var_169_int = 86; // 0x173b PushI
	var_170_int = 2; // 0x173c PushI
	var_171_int = 512168; // 0x173d PushI
	CreateDiaryEntry(var_168_object, var_169_int, var_170_int, var_171_int); // 0x173e Func
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0; // 0x1740 PushV
	var_173_object = var_168_object; // 0x1741 Mov
	var_174_int = 27; // 0x1742 MovI
	func_5985(var_172_bool, var_173_object, var_174_int); // 0x1743 NEW_2
	return 2; // 0x1745 Return
}


func_5439()
{
	var_123_string = "ood3Kapella2"; // 0x1540 PushS
	var_124_int = 1; // 0x1541 PushI
	SetVariable(var_123_string, var_124_int); // 0x1542 Func
	return 0; // 0x1544 Return
}


func_3395(var_0_object, var_506_int, var_507_object)
{
	var_509_object = Obj(); var_510_bool = 0; var_511_int = 0; var_512_bool = 0; var_513_object = Obj(); var_514_bool = 0; var_515_int = 0; var_516_bool = 0; // 0xd43 PushV
	var_0_object = var_507_object; // 0xd44 TMov
	var_517_bool = 0; var_518_object = Obj(); var_519_float = 0; // 0xd45 PushV
	var_518_object = var_507_object; // 0xd46 Mov
	var_519_float = 70.0; // 0xd47 MovF
	func_4833(var_518_object, var_519_float); // 0xd48 NEW_2
	var_520_bool = var_517_bool == 0; // 0xd4a Not
	if(var_520_bool == 0) goto Label_3406; // 0xd4b JumpB
	var_506_int = -2; // 0xd4c MovI
	return 8; // 0xd4d Return
	
Label_3406:
	CreateDialog(var_513_object); // 0xd4e Func
	var_521_int = 0; // 0xd50 PushV
	func_5243(var_521_int); // 0xd51 NEW_2
	SetNPCName(var_521_int); // 0xd53 ObjFunc
	var_522_int = 0; // 0xd55 PushV
	func_5241(var_522_int); // 0xd56 NEW_2
	SetNPCDescription(var_522_int); // 0xd58 ObjFunc
	var_523_string = ""; // 0xd5a PushV
	func_5245(var_523_string); // 0xd5b NEW_2
	SetPhoto(var_523_string); // 0xd5d ObjFunc
	var_524_string = ""; // 0xd5f PushV
	func_5247(var_524_string); // 0xd60 NEW_2
	SetPhoto2(var_524_string); // 0xd62 ObjFunc
	var_525_int = 0; // 0xd64 PushV
	func_6063(var_525_int); // 0xd65 NEW_2
	SetPlayerName(var_525_int); // 0xd67 ObjFunc
	var_515_int = -1; // 0xd69 MovI
	IsOverrideActive(var_514_bool); // 0xd6a Func
	var_526_bool = var_514_bool; // 0xd6c Push
	if(var_526_bool == 0) goto Label_3440; // 0xd6d JumpB
	var_506_int = -2; // 0xd6e MovI
	return 8; // 0xd6f Return
	
Label_3440:
	DoDialog(var_513_object); // 0xd70 Func
	var_527_bool = 0; var_528_object = Obj(); // 0xd72 PushV
	var_529_object = Obj(); // 0xd73 PushV
	func_5109(var_529_object); // 0xd74 NEW_2
	var_528_object = var_529_object; // 0xd75 Mov
	func_4918(var_527_bool, var_528_object); // 0xd77 NEW_2
	var_530_object = Obj(); var_531_object = Obj(); // 0xd79 PushV
	var_530_object = var_507_object; // 0xd7a Mov
	var_531_object = var_513_object; // 0xd7b Mov
	TaskCall(13); // 0xd7c TaskCall
	func_3476(var_532_object, var_533_object, var_534_string, var_535_bool, var_530_object, var_531_object); // 0xd7d NEW_2
	TaskReturn(); // 0xd7e TaskReturn
	IsDialogEnd(var_516_bool); // 0xd80 ObjFunc
	
Label_3458:
	var_573_bool = var_516_bool == 0; // 0xd82 Not
	if(var_573_bool == 0) goto Label_3465; // 0xd83 JumpB
	sync(); // 0xd84 Func
	IsDialogEnd(var_516_bool); // 0xd86 ObjFunc
	goto Label_3458; // 0xd88 Jump
	
Label_3465:
	var_574_object = Obj(); // 0xd89 PushV
	var_574_object = var_507_object; // 0xd8a Mov
	func_4901(); // 0xd8b NEW_2
	StopDialog(var_513_object); // 0xd8d Func
	GetReturnValue(var_515_int); // 0xd8f ObjFunc
	var_506_int = var_515_int; // 0xd91 Mov
	return 8; // 0xd92 Return
}


func_4420(var_0_object, var_1_object, var_2_object, var_3_string, var_949_object, var_950_object)
{
	var_0_object = var_950_object; // 0x1145 TMov
	var_1_object = var_949_object; // 0x1146 TMov
	var_3_string = 0; // 0x1147 TMovB
	var_955_int = 1; // 0x1148 PushI
	if(var_955_int == 0) goto Label_4448; // 0x1149 JumpB
	var_956_string = ""; // 0x114a PushV
	var_956_string = "Neutral"; // 0x114b MovS
	func_4478(var_950_object, var_956_string); // 0x114c NEW_2
	var_964_int = 540548; // 0x114e PushI
	SetMessage(var_964_int); // 0x114f TObjFunc
	ClearReplies(); // 0x1151 TObjFunc
	var_965_int = 540549; // 0x1153 PushI
	var_966_int = -1; // 0x1154 PushI
	var_967_int = 42558; // 0x1155 PushI
	AddReply(var_965_int, var_966_int, var_967_int); // 0x1156 TObjFunc
	var_968_int = 540797; // 0x1158 PushI
	var_969_int = -1; // 0x1159 PushI
	var_970_int = 42846; // 0x115a PushI
	AddReply(var_968_int, var_969_int, var_970_int); // 0x115b TObjFunc
	goto Label_4448; // 0x115d Jump
	
Label_4448:
	var_971_bool = 0; // 0x1160 PushV
	func_5249(var_971_bool); // 0x1161 NEW_2
	if(var_971_bool == 0) goto Label_4463; // 0x1163 JumpB
	
Label_4452:
	lshWaitForAnimEnd(); // 0x1164 Func
	var_972_string = var_3_string; // 0x1166 PushT
	if(var_972_string == 0) goto Label_4457; // 0x1167 JumpB
	goto Label_4462; // 0x1168 Jump
	
Label_4462:
	goto Label_4477; // 0x116e Jump
	
Label_4477:
	return 0; // 0x117d Return
	
Label_4457:
	var_973_string = ""; // 0x1169 PushV
	var_973_string = var_2_object; // 0x116a MovT
	func_5056(var_973_string); // 0x116b NEW_2
	goto Label_4452; // 0x116d Jump
	
Label_4463:
	var_974_string = "all"; // 0x116f PushS
	var_975_string = "idle"; // 0x1170 PushS
	PlayAnimation(var_974_string, var_975_string); // 0x1171 Func
	
Label_4467:
	WaitForAnimEnd(); // 0x1173 Func
	var_976_string = var_3_string; // 0x1175 PushT
	if(var_976_string == 0) goto Label_4472; // 0x1176 JumpB
	goto Label_4477; // 0x1177 Jump
	
Label_4472:
	var_977_string = "all"; // 0x1178 PushS
	var_978_string = "idle"; // 0x1179 PushS
	PlayAnimation(var_977_string, var_978_string); // 0x117a Func
	goto Label_4467; // 0x117c Jump
}


func_5445()
{
	var_129_object = Obj(); var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj(); // 0x1545 PushV
	var_133_object = Obj(); // 0x1546 PushV
	func_6013(var_133_object); // 0x1547 NEW_2
	var_131_object = var_133_object; // 0x1548 Mov
	var_140_string = "d3q03KapellaBoyLocation"; // 0x154a PushS
	FindMark(var_132_object, var_140_string); // 0x154b ObjFunc
	var_141_object = var_132_object; // 0x154d Push
	if(var_141_object == 0) goto Label_5457; // 0x154e JumpB
	Remove(); // 0x154f ObjFunc
	
Label_5457:
	var_142_string = "d8q01OspinaGotoMladVlad"; // 0x1551 PushS
	FindMark(var_132_object, var_142_string); // 0x1552 ObjFunc
	var_143_object = var_132_object; // 0x1554 Push
	if(var_143_object == 0) goto Label_5464; // 0x1555 JumpB
	Remove(); // 0x1556 ObjFunc
	
Label_5464:
	func_5933(); // 0x1559 NEW_2
	var_152_bool = 0; var_153_string = ""; var_154_string = ""; // 0x155b PushV
	var_153_string = "quest_d3_03"; // 0x155c MovS
	var_154_string = "completed"; // 0x155d MovS
	func_5185(var_152_bool, var_153_string, var_154_string); // 0x155e NEW_2
	return 4; // 0x1560 Return
}


func_5959()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x1747 PushV
	var_64_int = 647; // 0x1748 PushI
	var_65_int = 2; // 0x1749 PushI
	var_66_int = 533320; // 0x174a PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x174b Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x174d PushV
	var_68_object = var_63_object; // 0x174e Mov
	var_69_int = 127; // 0x174f MovI
	func_5985(var_67_bool, var_68_object, var_69_int); // 0x1750 NEW_2
	return 2; // 0x1752 Return
}


func_2376(var_0_object, var_391_int, var_392_object)
{
	var_394_object = Obj(); var_395_bool = 0; var_396_int = 0; var_397_bool = 0; var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; // 0x948 PushV
	var_0_object = var_392_object; // 0x949 TMov
	var_402_bool = 0; var_403_object = Obj(); var_404_float = 0; // 0x94a PushV
	var_403_object = var_392_object; // 0x94b Mov
	var_404_float = 70.0; // 0x94c MovF
	func_4833(var_403_object, var_404_float); // 0x94d NEW_2
	var_405_bool = var_402_bool == 0; // 0x94f Not
	if(var_405_bool == 0) goto Label_2387; // 0x950 JumpB
	var_391_int = -2; // 0x951 MovI
	return 8; // 0x952 Return
	
Label_2387:
	CreateDialog(var_398_object); // 0x953 Func
	var_406_int = 0; // 0x955 PushV
	func_5243(var_406_int); // 0x956 NEW_2
	SetNPCName(var_406_int); // 0x958 ObjFunc
	var_407_int = 0; // 0x95a PushV
	func_5241(var_407_int); // 0x95b NEW_2
	SetNPCDescription(var_407_int); // 0x95d ObjFunc
	var_408_string = ""; // 0x95f PushV
	func_5245(var_408_string); // 0x960 NEW_2
	SetPhoto(var_408_string); // 0x962 ObjFunc
	var_409_string = ""; // 0x964 PushV
	func_5247(var_409_string); // 0x965 NEW_2
	SetPhoto2(var_409_string); // 0x967 ObjFunc
	var_410_int = 0; // 0x969 PushV
	func_6063(var_410_int); // 0x96a NEW_2
	SetPlayerName(var_410_int); // 0x96c ObjFunc
	var_400_int = -1; // 0x96e MovI
	IsOverrideActive(var_399_bool); // 0x96f Func
	var_411_bool = var_399_bool; // 0x971 Push
	if(var_411_bool == 0) goto Label_2421; // 0x972 JumpB
	var_391_int = -2; // 0x973 MovI
	return 8; // 0x974 Return
	
Label_2421:
	DoDialog(var_398_object); // 0x975 Func
	var_412_bool = 0; var_413_object = Obj(); // 0x977 PushV
	var_414_object = Obj(); // 0x978 PushV
	func_5109(var_414_object); // 0x979 NEW_2
	var_413_object = var_414_object; // 0x97a Mov
	func_4918(var_412_bool, var_413_object); // 0x97c NEW_2
	var_415_object = Obj(); var_416_object = Obj(); // 0x97e PushV
	var_415_object = var_392_object; // 0x97f Mov
	var_416_object = var_398_object; // 0x980 Mov
	TaskCall(11); // 0x981 TaskCall
	func_2457(var_417_object, var_418_object, var_419_string, var_420_bool, var_415_object, var_416_object); // 0x982 NEW_2
	TaskReturn(); // 0x983 TaskReturn
	IsDialogEnd(var_401_bool); // 0x985 ObjFunc
	
Label_2439:
	var_502_bool = var_401_bool == 0; // 0x987 Not
	if(var_502_bool == 0) goto Label_2446; // 0x988 JumpB
	sync(); // 0x989 Func
	IsDialogEnd(var_401_bool); // 0x98b ObjFunc
	goto Label_2439; // 0x98d Jump
	
Label_2446:
	var_503_object = Obj(); // 0x98e PushV
	var_503_object = var_392_object; // 0x98f Mov
	func_4901(); // 0x990 NEW_2
	StopDialog(var_398_object); // 0x992 Func
	GetReturnValue(var_400_int); // 0x994 ObjFunc
	var_391_int = var_400_int; // 0x996 Mov
	return 8; // 0x997 Return
}


func_844(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0; // 0x34c PushV
	var_0_object = var_68_object; // 0x34d TMov
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0; // 0x34e PushV
	var_79_object = var_68_object; // 0x34f Mov
	var_80_float = 70.0; // 0x350 MovF
	func_4833(var_79_object, var_80_float); // 0x351 NEW_2
	var_124_bool = var_78_bool == 0; // 0x353 Not
	if(var_124_bool == 0) goto Label_855; // 0x354 JumpB
	var_67_int = -2; // 0x355 MovI
	return 8; // 0x356 Return
	
Label_855:
	CreateDialog(var_74_object); // 0x357 Func
	var_125_int = 0; // 0x359 PushV
	func_5243(var_125_int); // 0x35a NEW_2
	SetNPCName(var_125_int); // 0x35c ObjFunc
	var_126_int = 0; // 0x35e PushV
	func_5241(var_126_int); // 0x35f NEW_2
	SetNPCDescription(var_126_int); // 0x361 ObjFunc
	var_127_string = ""; // 0x363 PushV
	func_5245(var_127_string); // 0x364 NEW_2
	SetPhoto(var_127_string); // 0x366 ObjFunc
	var_128_string = ""; // 0x368 PushV
	func_5247(var_128_string); // 0x369 NEW_2
	SetPhoto2(var_128_string); // 0x36b ObjFunc
	var_129_int = 0; // 0x36d PushV
	func_6063(var_129_int); // 0x36e NEW_2
	SetPlayerName(var_129_int); // 0x370 ObjFunc
	var_76_int = -1; // 0x372 MovI
	IsOverrideActive(var_75_bool); // 0x373 Func
	var_137_bool = var_75_bool; // 0x375 Push
	if(var_137_bool == 0) goto Label_889; // 0x376 JumpB
	var_67_int = -2; // 0x377 MovI
	return 8; // 0x378 Return
	
Label_889:
	DoDialog(var_74_object); // 0x379 Func
	var_138_bool = 0; var_139_object = Obj(); // 0x37b PushV
	var_140_object = Obj(); // 0x37c PushV
	func_5109(var_140_object); // 0x37d NEW_2
	var_139_object = var_140_object; // 0x37e Mov
	func_4918(var_138_bool, var_139_object); // 0x380 NEW_2
	var_233_object = Obj(); var_234_object = Obj(); // 0x382 PushV
	var_233_object = var_68_object; // 0x383 Mov
	var_234_object = var_74_object; // 0x384 Mov
	TaskCall(5); // 0x385 TaskCall
	func_925(var_235_object, var_236_object, var_237_string, var_238_bool, var_233_object, var_234_object); // 0x386 NEW_2
	TaskReturn(); // 0x387 TaskReturn
	IsDialogEnd(var_77_bool); // 0x389 ObjFunc
	
Label_907:
	var_290_bool = var_77_bool == 0; // 0x38b Not
	if(var_290_bool == 0) goto Label_914; // 0x38c JumpB
	sync(); // 0x38d Func
	IsDialogEnd(var_77_bool); // 0x38f ObjFunc
	goto Label_907; // 0x391 Jump
	
Label_914:
	var_291_object = Obj(); // 0x392 PushV
	var_291_object = var_68_object; // 0x393 Mov
	func_4901(); // 0x394 NEW_2
	StopDialog(var_74_object); // 0x396 Func
	GetReturnValue(var_76_int); // 0x398 ObjFunc
	var_67_int = var_76_int; // 0x39a Mov
	return 8; // 0x39b Return
}


func_5972(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1754 PushV
	GetDiaryRoot(var_78_object); // 0x1755 Func
	var_79_bool = var_78_object == 0; // 0x1757 Not
	if(var_79_bool == 0) goto Label_5982; // 0x1758 JumpB
	var_80_string = "Can't retrieve diary root"; // 0x1759 PushS
	Trace(var_80_string); // 0x175a Func
	var_76_object = 0; // 0x175c MovB
	return 2; // 0x175d Return
	
Label_5982:
	var_76_object = var_78_object; // 0x175e Mov
	return 2; // 0x175f Return
}


func_1877(var_0_object, var_1_object, var_2_object, var_3_string, var_326_object, var_327_object)
{
	var_0_object = var_327_object; // 0x756 TMov
	var_1_object = var_326_object; // 0x757 TMov
	var_3_string = 0; // 0x758 TMovB
	var_332_int = 1; // 0x759 PushI
	if(var_332_int == 0) goto Label_1938; // 0x75a JumpB
	var_333_string = ""; // 0x75b PushV
	var_333_string = "Neutral"; // 0x75c MovS
	func_1968(var_327_object, var_333_string); // 0x75d NEW_2
	var_341_int = 506647; // 0x75f PushI
	SetMessage(var_341_int); // 0x760 TObjFunc
	ClearReplies(); // 0x762 TObjFunc
	var_342_bool = 0; // 0x764 PushV
	var_342_bool = 0; // 0x765 MovB
	var_343_bool = 0; var_344_object = Obj(); // 0x766 PushV
	var_344_object = var_1_object; // 0x767 MovT
	func_5593(var_344_object); // 0x768 NEW_2
	if(var_343_bool == 0) goto Label_1905; // 0x76a JumpB
	var_351_bool = 0; var_352_object = Obj(); // 0x76b PushV
	var_352_object = var_1_object; // 0x76c MovT
	func_5617(var_352_object); // 0x76d NEW_2
	if(var_351_bool == 0) goto Label_1905; // 0x76f JumpB
	var_342_bool = 1; // 0x770 MovB
	
Label_1905:
	if(var_342_bool == 0) goto Label_1911; // 0x771 JumpB
	var_357_int = 507373; // 0x772 PushI
	var_358_int = 35431; // 0x773 PushI
	var_359_int = 8134; // 0x774 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x775 TObjFunc
	
Label_1911:
	var_360_bool = 0; // 0x777 PushV
	var_360_bool = 0; // 0x778 MovB
	var_361_bool = 0; var_362_object = Obj(); // 0x779 PushV
	var_362_object = var_1_object; // 0x77a MovT
	func_5605(var_362_object); // 0x77b NEW_2
	if(var_361_bool == 0) goto Label_1924; // 0x77d JumpB
	var_367_bool = 0; var_368_object = Obj(); // 0x77e PushV
	var_368_object = var_1_object; // 0x77f MovT
	func_5836(var_368_object); // 0x780 NEW_2
	if(var_367_bool == 0) goto Label_1924; // 0x782 JumpB
	var_360_bool = 1; // 0x783 MovB
	
Label_1924:
	if(var_360_bool == 0) goto Label_1930; // 0x784 JumpB
	var_373_int = 506640; // 0x785 PushI
	var_374_int = 7312; // 0x786 PushI
	var_375_int = 7311; // 0x787 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x788 TObjFunc
	
Label_1930:
	var_376_int = 507533; // 0x78a PushI
	var_377_int = -1; // 0x78b PushI
	var_378_int = 8315; // 0x78c PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x78d TObjFunc
	goto Label_1938; // 0x78f Jump
	
Label_1938:
	var_379_bool = 0; // 0x792 PushV
	func_5249(var_379_bool); // 0x793 NEW_2
	if(var_379_bool == 0) goto Label_1953; // 0x795 JumpB
	
Label_1942:
	lshWaitForAnimEnd(); // 0x796 Func
	var_380_string = var_3_string; // 0x798 PushT
	if(var_380_string == 0) goto Label_1947; // 0x799 JumpB
	goto Label_1952; // 0x79a Jump
	
Label_1952:
	goto Label_1967; // 0x7a0 Jump
	
Label_1967:
	return 0; // 0x7af Return
	
Label_1947:
	var_381_string = ""; // 0x79b PushV
	var_381_string = var_2_object; // 0x79c MovT
	func_5056(var_381_string); // 0x79d NEW_2
	goto Label_1942; // 0x79f Jump
	
Label_1953:
	var_382_string = "all"; // 0x7a1 PushS
	var_383_string = "idle"; // 0x7a2 PushS
	PlayAnimation(var_382_string, var_383_string); // 0x7a3 Func
	
Label_1957:
	WaitForAnimEnd(); // 0x7a5 Func
	var_384_string = var_3_string; // 0x7a7 PushT
	if(var_384_string == 0) goto Label_1962; // 0x7a8 JumpB
	goto Label_1967; // 0x7a9 Jump
	
Label_1962:
	var_385_string = "all"; // 0x7aa PushS
	var_386_string = "idle"; // 0x7ab PushS
	PlayAnimation(var_385_string, var_386_string); // 0x7ac Func
	goto Label_1957; // 0x7ae Jump
}


func_5985(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; // 0x1761 PushV
	var_76_object = Obj(); // 0x1762 PushV
	func_5972(var_76_object); // 0x1763 NEW_2
	var_73_object = var_76_object; // 0x1764 Mov
	Find(var_69_int, var_74_object); // 0x1766 ObjFunc
	var_81_bool = var_74_object == 0; // 0x1768 Not
	if(var_81_bool == 0) goto Label_6000; // 0x1769 JumpB
	var_82_string = "Can't find diary parent with id: "; // 0x176a PushS
	var_83_int = var_82_string + var_69_int; // 0x176b Add
	Trace(var_83_int); // 0x176c Func
	var_67_bool = 0; // 0x176e MovB
	return 6; // 0x176f Return
	
Label_6000:
	AddChild(var_68_object); // 0x1770 ObjFunc
	var_84_int = 7; // 0x1772 PushI
	SendWorldWndMessage(var_84_int); // 0x1773 Func
	GetCategory(var_75_int); // 0x1775 ObjFunc
	SetDiarySection(var_75_int); // 0x1777 Func
	var_67_bool = 0; // 0x1779 MovB
	return 6; // 0x177a Return
}


func_5475()
{
	return 0; // 0x1564 Return
}


func_5477()
{
	func_5946(); // 0x1567 NEW_2
	var_175_bool = 0; var_176_string = ""; var_177_string = ""; // 0x1569 PushV
	var_176_string = "quest_d3_03"; // 0x156a MovS
	var_177_string = "fail"; // 0x156b MovS
	func_5185(var_175_bool, var_176_string, var_177_string); // 0x156c NEW_2
	return 0; // 0x156e Return
}


func_5487()
{
	var_54_string = "ood6Kapella1"; // 0x1570 PushS
	var_55_int = 1; // 0x1571 PushI
	SetVariable(var_54_string, var_55_int); // 0x1572 Func
	return 0; // 0x1574 Return
}


func_4976(var_149_bool)
{
	var_151_string = ""; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_string = ""; var_156_string = ""; var_157_int = 0; var_158_bool = 0; var_159_int = 0; var_160_string = ""; // 0x1370 PushV
	var_156_string = "c"; // 0x1371 MovS
	var_157_int = 0; // 0x1372 MovI
	
Label_4979:
	var_161_int = 1; // 0x1373 PushI
	if(var_161_int == 0) goto Label_4992; // 0x1374 JumpB
	var_162_int = 1; // 0x1375 PushI
	var_163_int = var_157_int + var_162_int; // 0x1376 Add
	var_164_int = var_156_string + var_163_int; // 0x1377 Add
	HasProperty(var_164_int, var_158_bool); // 0x1378 ObjFunc
	var_165_bool = var_158_bool == 0; // 0x137a Not
	if(var_165_bool == 0) goto Label_4989; // 0x137b JumpB
	goto Label_4992; // 0x137c Jump
	
Label_4992:
	var_166_bool = var_157_int == 0; // 0x1380 Not
	if(var_166_bool == 0) goto Label_4996; // 0x1381 JumpB
	var_149_bool = 0; // 0x1382 MovB
	return 10; // 0x1383 Return
	
Label_4996:
	var_159_int = 0; // 0x1384 MovI
	var_167_int = 1; // 0x1385 PushI
	var_168_bool = var_157_int > var_167_int; // 0x1386 GT
	if(var_168_bool == 0) goto Label_5002; // 0x1387 JumpB
	irand(var_159_int, var_157_int); // 0x1388 Func
	
Label_5002:
	var_169_int = 1; // 0x138a PushI
	var_170_int = var_159_int + var_169_int; // 0x138b Add
	var_171_int = var_156_string + var_170_int; // 0x138c Add
	GetProperty(var_171_int, var_160_string); // 0x138d ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x138f PushV
	var_173_string = var_160_string; // 0x1390 Mov
	func_5087(var_172_bool, var_173_string); // 0x1391 NEW_2
	var_149_bool = var_172_bool; // 0x1392 Mov
	return 10; // 0x1394 Return
	
Label_4989:
	var_178_int = 1; // 0x137d PushI
	var_157_int = var_157_int + var_178_int; // 0x137e Add2
	goto Label_4979; // 0x137f Jump
}


func_5493()
{
	var_185_string = "d6q02KnowAboutAttack"; // 0x1576 PushS
	var_186_int = 1; // 0x1577 PushI
	SetVariable(var_185_string, var_186_int); // 0x1578 Func
	return 0; // 0x157a Return
}


func_1402(var_2_object, var_629_string)
{
	var_630_bool = 0; // 0x57b PushV
	func_5249(var_630_bool); // 0x57c NEW_2
	var_631_bool = var_630_bool == 0; // 0x57e Not
	if(var_631_bool == 0) goto Label_1409; // 0x57f JumpB
	return 0; // 0x580 Return
	
Label_1409:
	var_632_bool = var_629_string == var_2_object; // 0x581 Eq
	if(var_632_bool == 0) goto Label_1412; // 0x582 JumpB
	return 0; // 0x583 Return
	
Label_1412:
	var_633_string = ""; var_634_bool = 0; // 0x584 PushV
	var_633_string = var_629_string; // 0x585 Mov
	var_635_string = ""; // 0x586 PushS
	var_636_bool = var_629_string == var_635_string; // 0x587 Eq
	if(var_636_bool == 0) goto Label_1419; // 0x588 JumpB
	var_634_bool = 0; // 0x589 MovB
	goto Label_1420; // 0x58a Jump
	
Label_1420:
	func_5072(var_633_string, var_634_bool); // 0x58c NEW_2
	var_2_object = var_629_string; // 0x58e TMov
	return 0; // 0x58f Return
	
Label_1419:
	var_634_bool = 1; // 0x58b MovB
}


func_5499()
{
	var_88_string = "KnowViktoria"; // 0x157c PushS
	var_89_int = 1; // 0x157d PushI
	SetVariable(var_88_string, var_89_int); // 0x157e Func
	return 0; // 0x1580 Return
}


func_6013(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj(); var_137_object = Obj(); // 0x177d PushV
	GetMainOutdoorScene(var_136_object); // 0x177e Func
	var_138_bool = var_136_object == 0; // 0x1780 NullEq
	if(var_138_bool == 0) goto Label_6024; // 0x1781 JumpB
	var_139_string = "Can't find main outdoor scene"; // 0x1782 PushS
	Trace(var_139_string); // 0x1783 Func
	var_137_object = 0; // 0x1785 SetNull
	var_133_object = var_137_object; // 0x1786 Mov
	return 4; // 0x1787 Return
	
Label_6024:
	GetMap(var_137_object); // 0x1788 ObjFunc
	var_133_object = var_137_object; // 0x178a Mov
	return 4; // 0x178b Return
}


func_4478(var_2_object, var_956_string)
{
	var_957_bool = 0; // 0x117f PushV
	func_5249(var_957_bool); // 0x1180 NEW_2
	var_958_bool = var_957_bool == 0; // 0x1182 Not
	if(var_958_bool == 0) goto Label_4485; // 0x1183 JumpB
	return 0; // 0x1184 Return
	
Label_4485:
	var_959_bool = var_956_string == var_2_object; // 0x1185 Eq
	if(var_959_bool == 0) goto Label_4488; // 0x1186 JumpB
	return 0; // 0x1187 Return
	
Label_4488:
	var_960_string = ""; var_961_bool = 0; // 0x1188 PushV
	var_960_string = var_956_string; // 0x1189 Mov
	var_962_string = ""; // 0x118a PushS
	var_963_bool = var_956_string == var_962_string; // 0x118b Eq
	if(var_963_bool == 0) goto Label_4495; // 0x118c JumpB
	var_961_bool = 0; // 0x118d MovB
	goto Label_4496; // 0x118e Jump
	
Label_4496:
	func_5072(var_960_string, var_961_bool); // 0x1190 NEW_2
	var_2_object = var_956_string; // 0x1192 TMov
	return 0; // 0x1193 Return
	
Label_4495:
	var_961_bool = 1; // 0x118f MovB
}


func_5505()
{
	var_54_string = "ood8Kapella1"; // 0x1582 PushS
	var_55_int = 1; // 0x1583 PushI
	SetVariable(var_54_string, var_55_int); // 0x1584 Func
	return 0; // 0x1586 Return
}


func_5511()
{
	var_117_string = "ood8Kapella2"; // 0x1588 PushS
	var_118_int = 1; // 0x1589 PushI
	SetVariable(var_117_string, var_118_int); // 0x158a Func
	return 0; // 0x158c Return
}


func_5517()
{
	var_54_string = "ood4Kapella1"; // 0x158e PushS
	var_55_int = 1; // 0x158f PushI
	SetVariable(var_54_string, var_55_int); // 0x1590 Func
	return 0; // 0x1592 Return
}


func_6030(var_107_object, var_108_string, var_109_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0; // 0x178e PushV
	GetMainOutdoorScene(var_117_object); // 0x178f Func
	var_119_bool = var_117_object == 0; // 0x1791 NullEq
	if(var_119_bool == 0) goto Label_6039; // 0x1792 JumpB
	var_120_string = "Can't find main outdoor scene"; // 0x1793 PushS
	Trace(var_120_string); // 0x1794 Func
	return 8; // 0x1796 Return
	
Label_6039:
	GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector); // 0x1797 ObjFunc
	var_121_bool = var_118_bool == 0; // 0x1799 Not
	if(var_121_bool == 0) goto Label_6049; // 0x179a JumpB
	var_122_string = "Warning: outdoor scene locator "; // 0x179b PushS
	var_123_int = var_122_string + var_108_string; // 0x179c Add
	var_124_string = " doesnt exist"; // 0x179d PushS
	var_125_int = var_123_int + var_124_string; // 0x179e Add
	Trace(var_125_int); // 0x179f Func
	
Label_6049:
	GetMap(var_107_object); // 0x17a1 ObjFunc
	var_126_bool = var_107_object == 0; // 0x17a3 NullEq
	if(var_126_bool == 0) goto Label_6057; // 0x17a4 JumpB
	var_127_string = "Can't find map"; // 0x17a5 PushS
	Trace(var_127_string); // 0x17a6 Func
	return 8; // 0x17a8 Return
	
Label_6057:
	var_128_float = GetByIndex(var_115_cvector, 0); // 0x17a9 PushE
	var_129_float = GetByIndex(var_115_cvector, 2); // 0x17aa PushE
	SetMapParams(var_128_float, var_129_float, var_109_float); // 0x17ab ObjFunc
	return 8; // 0x17ad Return
}


func_5523()
{
	var_102_string = "KnowPredictions"; // 0x1594 PushS
	var_103_int = 1; // 0x1595 PushI
	SetVariable(var_102_string, var_103_int); // 0x1596 Func
	return 0; // 0x1598 Return
}


func_3476(var_0_object, var_1_object, var_2_object, var_3_string, var_530_object, var_531_object)
{
	var_0_object = var_531_object; // 0xd95 TMov
	var_1_object = var_530_object; // 0xd96 TMov
	var_3_string = 0; // 0xd97 TMovB
	var_536_int = 1; // 0xd98 PushI
	if(var_536_int == 0) goto Label_3518; // 0xd99 JumpB
	var_537_string = ""; // 0xd9a PushV
	var_537_string = "Neutral"; // 0xd9b MovS
	func_3548(var_531_object, var_537_string); // 0xd9c NEW_2
	var_545_int = 511245; // 0xd9e PushI
	SetMessage(var_545_int); // 0xd9f TObjFunc
	ClearReplies(); // 0xda1 TObjFunc
	var_546_bool = 0; // 0xda3 PushV
	var_546_bool = 0; // 0xda4 MovB
	var_547_bool = 0; var_548_object = Obj(); // 0xda5 PushV
	var_548_object = var_1_object; // 0xda6 MovT
	func_5800(var_548_object); // 0xda7 NEW_2
	if(var_547_bool == 0) goto Label_3504; // 0xda9 JumpB
	var_553_bool = 0; var_554_object = Obj(); // 0xdaa PushV
	var_554_object = var_1_object; // 0xdab MovT
	func_5812(var_554_object); // 0xdac NEW_2
	if(var_553_bool == 0) goto Label_3504; // 0xdae JumpB
	var_546_bool = 1; // 0xdaf MovB
	
Label_3504:
	if(var_546_bool == 0) goto Label_3510; // 0xdb0 JumpB
	var_559_int = 511247; // 0xdb1 PushI
	var_560_int = 12438; // 0xdb2 PushI
	var_561_int = 12437; // 0xdb3 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0xdb4 TObjFunc
	
Label_3510:
	var_562_int = 511246; // 0xdb6 PushI
	var_563_int = -1; // 0xdb7 PushI
	var_564_int = 12436; // 0xdb8 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0xdb9 TObjFunc
	goto Label_3518; // 0xdbb Jump
	
Label_3518:
	var_565_bool = 0; // 0xdbe PushV
	func_5249(var_565_bool); // 0xdbf NEW_2
	if(var_565_bool == 0) goto Label_3533; // 0xdc1 JumpB
	
Label_3522:
	lshWaitForAnimEnd(); // 0xdc2 Func
	var_566_string = var_3_string; // 0xdc4 PushT
	if(var_566_string == 0) goto Label_3527; // 0xdc5 JumpB
	goto Label_3532; // 0xdc6 Jump
	
Label_3532:
	goto Label_3547; // 0xdcc Jump
	
Label_3547:
	return 0; // 0xddb Return
	
Label_3527:
	var_567_string = ""; // 0xdc7 PushV
	var_567_string = var_2_object; // 0xdc8 MovT
	func_5056(var_567_string); // 0xdc9 NEW_2
	goto Label_3522; // 0xdcb Jump
	
Label_3533:
	var_568_string = "all"; // 0xdcd PushS
	var_569_string = "idle"; // 0xdce PushS
	PlayAnimation(var_568_string, var_569_string); // 0xdcf Func
	
Label_3537:
	WaitForAnimEnd(); // 0xdd1 Func
	var_570_string = var_3_string; // 0xdd3 PushT
	if(var_570_string == 0) goto Label_3542; // 0xdd4 JumpB
	goto Label_3547; // 0xdd5 Jump
	
Label_3542:
	var_571_string = "all"; // 0xdd6 PushS
	var_572_string = "idle"; // 0xdd7 PushS
	PlayAnimation(var_571_string, var_572_string); // 0xdd8 Func
	goto Label_3537; // 0xdda Jump
}


func_5013(var_180_bool)
{
	var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = ""; var_187_string = ""; var_188_int = 0; var_189_bool = 0; var_190_int = 0; var_191_string = ""; // 0x1395 PushV
	var_192_string = "d"; // 0x1396 PushS
	var_193_int = 0; // 0x1397 PushV
	func_5202(var_193_int); // 0x1398 NEW_2
	var_199_int = var_192_string + var_193_int; // 0x139a Add
	var_200_string = "m"; // 0x139b PushS
	var_187_string = var_199_int + var_200_string; // 0x139c Add2
	var_188_int = 0; // 0x139d MovI
	
Label_5022:
	var_201_int = 1; // 0x139e PushI
	if(var_201_int == 0) goto Label_5035; // 0x139f JumpB
	var_202_int = 1; // 0x13a0 PushI
	var_203_int = var_188_int + var_202_int; // 0x13a1 Add
	var_204_int = var_187_string + var_203_int; // 0x13a2 Add
	HasProperty(var_204_int, var_189_bool); // 0x13a3 ObjFunc
	var_205_bool = var_189_bool == 0; // 0x13a5 Not
	if(var_205_bool == 0) goto Label_5032; // 0x13a6 JumpB
	goto Label_5035; // 0x13a7 Jump
	
Label_5035:
	var_206_bool = var_188_int == 0; // 0x13ab Not
	if(var_206_bool == 0) goto Label_5039; // 0x13ac JumpB
	var_180_bool = 0; // 0x13ad MovB
	return 10; // 0x13ae Return
	
Label_5039:
	var_190_int = 0; // 0x13af MovI
	var_207_int = 1; // 0x13b0 PushI
	var_208_bool = var_188_int > var_207_int; // 0x13b1 GT
	if(var_208_bool == 0) goto Label_5045; // 0x13b2 JumpB
	irand(var_190_int, var_188_int); // 0x13b3 Func
	
Label_5045:
	var_209_int = 1; // 0x13b5 PushI
	var_210_int = var_190_int + var_209_int; // 0x13b6 Add
	var_211_int = var_187_string + var_210_int; // 0x13b7 Add
	GetProperty(var_211_int, var_191_string); // 0x13b8 ObjFunc
	var_212_bool = 0; var_213_string = ""; // 0x13ba PushV
	var_213_string = var_191_string; // 0x13bb Mov
	func_5087(var_212_bool, var_213_string); // 0x13bc NEW_2
	var_180_bool = var_212_bool; // 0x13bd Mov
	return 10; // 0x13bf Return
	
Label_5032:
	var_214_int = 1; // 0x13a8 PushI
	var_188_int = var_188_int + var_214_int; // 0x13a9 Add2
	goto Label_5022; // 0x13aa Jump
}


func_5529()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x1599 PushV
	var_60_object = Obj(); // 0x159a PushV
	func_6013(var_60_object); // 0x159b NEW_2
	var_59_object = var_60_object; // 0x159c Mov
	var_67_string = "d6q02KapellaGotoMladVlad"; // 0x159e PushS
	var_68_string = "pt_map_mladvlad"; // 0x159f PushS
	var_69_int = 0; // 0x15a0 PushI
	var_70_int = 515377; // 0x15a1 PushI
	var_71_float = 0; // 0x15a2 PushV
	func_5197(var_71_float); // 0x15a3 NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0x15a5 ObjFunc
	return 2; // 0x15a7 Return
}


func_2457(var_0_object, var_1_object, var_2_object, var_3_string, var_415_object, var_416_object)
{
	var_0_object = var_416_object; // 0x99a TMov
	var_1_object = var_415_object; // 0x99b TMov
	var_3_string = 0; // 0x99c TMovB
	var_421_int = 1; // 0x99d PushI
	if(var_421_int == 0) goto Label_2576; // 0x99e JumpB
	var_422_bool = 0; // 0x99f PushV
	var_422_bool = 0; // 0x9a0 MovB
	var_423_bool = 0; var_424_object = Obj(); // 0x9a1 PushV
	var_424_object = var_1_object; // 0x9a2 MovT
	func_5629(var_424_object); // 0x9a3 NEW_2
	if(var_423_bool == 0) goto Label_2476; // 0x9a5 JumpB
	var_429_bool = 0; var_430_object = Obj(); // 0x9a6 PushV
	var_430_object = var_1_object; // 0x9a7 MovT
	func_5641(var_430_object); // 0x9a8 NEW_2
	if(var_429_bool == 0) goto Label_2476; // 0x9aa JumpB
	var_422_bool = 1; // 0x9ab MovB
	
Label_2476:
	if(var_422_bool == 0) goto Label_2492; // 0x9ac JumpB
	var_435_string = ""; // 0x9ad PushV
	var_435_string = "Neutral"; // 0x9ae MovS
	func_2606(var_416_object, var_435_string); // 0x9af NEW_2
	var_443_int = 510844; // 0x9b1 PushI
	SetMessage(var_443_int); // 0x9b2 TObjFunc
	ClearReplies(); // 0x9b4 TObjFunc
	var_444_int = 510845; // 0x9b6 PushI
	var_445_int = 11990; // 0x9b7 PushI
	var_446_int = 11989; // 0x9b8 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x9b9 TObjFunc
	goto Label_2576; // 0x9bb Jump
	
Label_2576:
	var_447_bool = 0; // 0xa10 PushV
	func_5249(var_447_bool); // 0xa11 NEW_2
	if(var_447_bool == 0) goto Label_2591; // 0xa13 JumpB
	
Label_2580:
	lshWaitForAnimEnd(); // 0xa14 Func
	var_448_string = var_3_string; // 0xa16 PushT
	if(var_448_string == 0) goto Label_2585; // 0xa17 JumpB
	goto Label_2590; // 0xa18 Jump
	
Label_2590:
	goto Label_2605; // 0xa1e Jump
	
Label_2605:
	return 0; // 0xa2d Return
	
Label_2585:
	var_449_string = ""; // 0xa19 PushV
	var_449_string = var_2_object; // 0xa1a MovT
	func_5056(var_449_string); // 0xa1b NEW_2
	goto Label_2580; // 0xa1d Jump
	
Label_2591:
	var_450_string = "all"; // 0xa1f PushS
	var_451_string = "idle"; // 0xa20 PushS
	PlayAnimation(var_450_string, var_451_string); // 0xa21 Func
	
Label_2595:
	WaitForAnimEnd(); // 0xa23 Func
	var_452_string = var_3_string; // 0xa25 PushT
	if(var_452_string == 0) goto Label_2600; // 0xa26 JumpB
	goto Label_2605; // 0xa27 Jump
	
Label_2600:
	var_453_string = "all"; // 0xa28 PushS
	var_454_string = "idle"; // 0xa29 PushS
	PlayAnimation(var_453_string, var_454_string); // 0xa2a Func
	goto Label_2595; // 0xa2c Jump
	
Label_2492:
	var_455_string = ""; // 0x9bc PushV
	var_455_string = "Neutral"; // 0x9bd MovS
	func_2606(var_416_object, var_455_string); // 0x9be NEW_2
	var_456_int = 510841; // 0x9c0 PushI
	SetMessage(var_456_int); // 0x9c1 TObjFunc
	ClearReplies(); // 0x9c3 TObjFunc
	var_457_bool = 0; var_458_object = Obj(); // 0x9c5 PushV
	var_458_object = var_1_object; // 0x9c6 MovT
	func_5629(var_458_object); // 0x9c7 NEW_2
	if(var_457_bool == 0) goto Label_2511; // 0x9c9 JumpB
	var_459_int = 510873; // 0x9ca PushI
	var_460_int = 12022; // 0x9cb PushI
	var_461_int = 12021; // 0x9cc PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x9cd TObjFunc
	
Label_2511:
	var_462_bool = 0; // 0x9cf PushV
	var_462_bool = 0; // 0x9d0 MovB
	var_463_bool = 0; // 0x9d1 PushV
	var_463_bool = 0; // 0x9d2 MovB
	var_464_bool = 0; var_465_object = Obj(); // 0x9d3 PushV
	var_465_object = var_1_object; // 0x9d4 MovT
	func_5653(var_465_object); // 0x9d5 NEW_2
	if(var_464_bool == 0) goto Label_2526; // 0x9d7 JumpB
	var_470_bool = 0; var_471_object = Obj(); // 0x9d8 PushV
	var_471_object = var_1_object; // 0x9d9 MovT
	func_5665(var_471_object); // 0x9da NEW_2
	if(var_470_bool == 0) goto Label_2526; // 0x9dc JumpB
	var_463_bool = 1; // 0x9dd MovB
	
Label_2526:
	if(var_463_bool == 0) goto Label_2533; // 0x9de JumpB
	var_476_bool = 0; var_477_object = Obj(); // 0x9df PushV
	var_477_object = var_1_object; // 0x9e0 MovT
	func_5677(var_476_bool, var_477_object); // 0x9e1 NEW_2
	if(var_476_bool == 0) goto Label_2533; // 0x9e3 JumpB
	var_462_bool = 1; // 0x9e4 MovB
	
Label_2533:
	if(var_462_bool == 0) goto Label_2539; // 0x9e5 JumpB
	var_484_int = 510876; // 0x9e6 PushI
	var_485_int = 12025; // 0x9e7 PushI
	var_486_int = 12024; // 0x9e8 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x9e9 TObjFunc
	
Label_2539:
	var_487_bool = 0; // 0x9eb PushV
	var_487_bool = 0; // 0x9ec MovB
	var_488_bool = 0; // 0x9ed PushV
	var_488_bool = 0; // 0x9ee MovB
	var_489_bool = 0; var_490_object = Obj(); // 0x9ef PushV
	var_490_object = var_1_object; // 0x9f0 MovT
	func_5653(var_490_object); // 0x9f1 NEW_2
	if(var_489_bool == 0) goto Label_2554; // 0x9f3 JumpB
	var_491_bool = 0; var_492_object = Obj(); // 0x9f4 PushV
	var_492_object = var_1_object; // 0x9f5 MovT
	func_5687(var_492_object); // 0x9f6 NEW_2
	if(var_491_bool == 0) goto Label_2554; // 0x9f8 JumpB
	var_488_bool = 1; // 0x9f9 MovB
	
Label_2554:
	if(var_488_bool == 0) goto Label_2562; // 0x9fa JumpB
	var_493_bool = 0; var_494_object = Obj(); // 0x9fb PushV
	var_494_object = var_1_object; // 0x9fc MovT
	func_5677(var_493_bool, var_494_object); // 0x9fd NEW_2
	var_495_bool = var_493_bool == 0; // 0x9ff Not
	if(var_495_bool == 0) goto Label_2562; // 0xa00 JumpB
	var_487_bool = 1; // 0xa01 MovB
	
Label_2562:
	if(var_487_bool == 0) goto Label_2568; // 0xa02 JumpB
	var_496_int = 511160; // 0xa03 PushI
	var_497_int = 12344; // 0xa04 PushI
	var_498_int = 12343; // 0xa05 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0xa06 TObjFunc
	
Label_2568:
	var_499_int = 511157; // 0xa08 PushI
	var_500_int = -1; // 0xa09 PushI
	var_501_int = 12342; // 0xa0a PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0xa0b TObjFunc
	goto Label_2576; // 0xa0d Jump
}


func_925(var_0_object, var_1_object, var_2_object, var_3_string, var_233_object, var_234_object)
{
	var_0_object = var_234_object; // 0x39e TMov
	var_1_object = var_233_object; // 0x39f TMov
	var_3_string = 0; // 0x3a0 TMovB
	var_239_int = 1; // 0x3a1 PushI
	if(var_239_int == 0) goto Label_963; // 0x3a2 JumpB
	var_240_object = Obj(); var_241_object = Obj(); // 0x3a3 PushV
	var_240_object = var_1_object; // 0x3a4 MovT
	var_241_object = var_0_object; // 0x3a5 MovT
	func_5251(); // 0x3a6 NEW_2
	var_244_object = Obj(); var_245_object = Obj(); // 0x3a8 PushV
	var_244_object = var_1_object; // 0x3a9 MovT
	var_245_object = var_0_object; // 0x3aa MovT
	func_5257(); // 0x3ab NEW_2
	var_248_string = ""; // 0x3ad PushV
	var_248_string = "Neutral"; // 0x3ae MovS
	func_993(var_234_object, var_248_string); // 0x3af NEW_2
	var_265_int = 500473; // 0x3b1 PushI
	SetMessage(var_265_int); // 0x3b2 TObjFunc
	ClearReplies(); // 0x3b4 TObjFunc
	var_266_int = 500476; // 0x3b6 PushI
	var_267_int = 547; // 0x3b7 PushI
	var_268_int = 546; // 0x3b8 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x3b9 TObjFunc
	var_269_int = 500474; // 0x3bb PushI
	var_270_int = 545; // 0x3bc PushI
	var_271_int = 544; // 0x3bd PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x3be TObjFunc
	goto Label_963; // 0x3c0 Jump
	
Label_963:
	var_272_bool = 0; // 0x3c3 PushV
	func_5249(var_272_bool); // 0x3c4 NEW_2
	if(var_272_bool == 0) goto Label_978; // 0x3c6 JumpB
	
Label_967:
	lshWaitForAnimEnd(); // 0x3c7 Func
	var_273_string = var_3_string; // 0x3c9 PushT
	if(var_273_string == 0) goto Label_972; // 0x3ca JumpB
	goto Label_977; // 0x3cb Jump
	
Label_977:
	goto Label_992; // 0x3d1 Jump
	
Label_992:
	return 0; // 0x3e0 Return
	
Label_972:
	var_274_string = ""; // 0x3cc PushV
	var_274_string = var_2_object; // 0x3cd MovT
	func_5056(var_274_string); // 0x3ce NEW_2
	goto Label_967; // 0x3d0 Jump
	
Label_978:
	var_285_string = "all"; // 0x3d2 PushS
	var_286_string = "idle"; // 0x3d3 PushS
	PlayAnimation(var_285_string, var_286_string); // 0x3d4 Func
	
Label_982:
	WaitForAnimEnd(); // 0x3d6 Func
	var_287_string = var_3_string; // 0x3d8 PushT
	if(var_287_string == 0) goto Label_987; // 0x3d9 JumpB
	goto Label_992; // 0x3da Jump
	
Label_987:
	var_288_string = "all"; // 0x3db PushS
	var_289_string = "idle"; // 0x3dc PushS
	PlayAnimation(var_288_string, var_289_string); // 0x3dd Func
	goto Label_982; // 0x3df Jump
}


func_5545()
{
	var_623_string = "d6KapellaVisit"; // 0x15aa PushS
	var_624_int = 1; // 0x15ab PushI
	SetVariable(var_623_string, var_624_int); // 0x15ac Func
	return 0; // 0x15ae Return
}


func_6063(var_129_int)
{
	var_130_int = 0; var_131_int = 0; // 0x17af PushV
	var_132_string = "branch"; // 0x17b0 PushS
	GetVariable(var_132_string, var_131_int); // 0x17b1 Func
	var_133_int = 0; // 0x17b3 PushI
	var_134_bool = var_131_int == var_133_int; // 0x17b4 Eq
	if(var_134_bool == 0) goto Label_6073; // 0x17b5 JumpB
	var_129_int = 1; // 0x17b6 MovI
	return 2; // 0x17b7 Return
	
Label_6073:
	var_135_int = 1; // 0x17b9 PushI
	var_136_bool = var_131_int == var_135_int; // 0x17ba Eq
	if(var_136_bool == 0) goto Label_6078; // 0x17bb JumpB
	var_129_int = 2; // 0x17bc MovI
	return 2; // 0x17bd Return
	
Label_6078:
	var_129_int = 3; // 0x17be MovI
	return 2; // 0x17bf Return
}


func_5551()
{
	var_627_string = "ood6Kapella3"; // 0x15b0 PushS
	var_628_int = 1; // 0x15b1 PushI
	SetVariable(var_627_string, var_628_int); // 0x15b2 Func
	return 0; // 0x15b4 Return
}


func_1968(var_2_object, var_333_string)
{
	var_334_bool = 0; // 0x7b1 PushV
	func_5249(var_334_bool); // 0x7b2 NEW_2
	var_335_bool = var_334_bool == 0; // 0x7b4 Not
	if(var_335_bool == 0) goto Label_1975; // 0x7b5 JumpB
	return 0; // 0x7b6 Return
	
Label_1975:
	var_336_bool = var_333_string == var_2_object; // 0x7b7 Eq
	if(var_336_bool == 0) goto Label_1978; // 0x7b8 JumpB
	return 0; // 0x7b9 Return
	
Label_1978:
	var_337_string = ""; var_338_bool = 0; // 0x7ba PushV
	var_337_string = var_333_string; // 0x7bb Mov
	var_339_string = ""; // 0x7bc PushS
	var_340_bool = var_333_string == var_339_string; // 0x7bd Eq
	if(var_340_bool == 0) goto Label_1985; // 0x7be JumpB
	var_338_bool = 0; // 0x7bf MovB
	goto Label_1986; // 0x7c0 Jump
	
Label_1986:
	func_5072(var_337_string, var_338_bool); // 0x7c2 NEW_2
	var_2_object = var_333_string; // 0x7c4 TMov
	return 0; // 0x7c5 Return
	
Label_1985:
	var_338_bool = 1; // 0x7c1 MovB
}


func_5557(var_827_bool)
{
	var_829_int = 0; var_830_string = ""; // 0x15b6 PushV
	var_830_string = "d11q06"; // 0x15b7 MovS
	func_5125(var_829_int, var_830_string); // 0x15b8 NEW_2
	var_831_int = 1; // 0x15ba PushI
	var_832_bool = var_829_int == var_831_int; // 0x15bb Eq
	if(var_832_bool == 0) goto Label_5567; // 0x15bc JumpB
	var_827_bool = 1; // 0x15bd MovB
	return 0; // 0x15be Return
	
Label_5567:
	var_827_bool = 0; // 0x15bf MovB
	return 0; // 0x15c0 Return
}


func_5056(var_274_string)
{
	var_275_bool = 0; var_276_float = 0; var_277_float = 0; var_278_bool = 0; var_279_float = 0; var_280_float = 0; // 0x13c0 PushV
	lshHasAnimation(var_278_bool, var_274_string); // 0x13c1 Func
	var_281_bool = var_278_bool; // 0x13c3 Push
	if(var_281_bool == 0) goto Label_5067; // 0x13c4 JumpB
	lshGetAnimTimes(var_274_string, var_279_float, var_280_float); // 0x13c5 Func
	var_282_bool = 0; // 0x13c7 PushB
	lshPlayAnimation(var_279_float, var_280_float, var_282_bool); // 0x13c8 Func
	goto Label_5071; // 0x13ca Jump
	
Label_5071:
	return 6; // 0x13cf Return
	
Label_5067:
	var_283_string = "Can't find lsh animation : "; // 0x13cb PushS
	var_284_int = var_283_string + var_274_string; // 0x13cc Add
	Trace(var_284_int); // 0x13cd Func
}


func_5569(var_833_bool)
{
	var_835_int = 0; var_836_string = ""; // 0x15c2 PushV
	var_836_string = "ood11Kapella1"; // 0x15c3 MovS
	func_5125(var_835_int, var_836_string); // 0x15c4 NEW_2
	var_837_int = 0; // 0x15c6 PushI
	var_838_bool = var_835_int == var_837_int; // 0x15c7 Eq
	if(var_838_bool == 0) goto Label_5579; // 0x15c8 JumpB
	var_833_bool = 1; // 0x15c9 MovB
	return 0; // 0x15ca Return
	
Label_5579:
	var_833_bool = 0; // 0x15cb MovB
	return 0; // 0x15cc Return
}


func_6080(var_64_object)
{
	var_65_bool = GlobalVars[1]; // 0x17c1 PushGE
	var_66_bool = var_65_bool == 0; // 0x17c2 Not
	if(var_66_bool == 0) goto Label_6093; // 0x17c3 JumpB
	var_67_int = 0; var_68_object = Obj(); // 0x17c4 PushV
	var_68_object = var_64_object; // 0x17c5 Mov
	TaskCall(4); // 0x17c6 TaskCall
	func_844(var_69_object, var_67_int, var_68_object); // 0x17c7 NEW_2
	TaskReturn(); // 0x17c8 TaskReturn
	var_298_bool = GlobalVars[1]; // 0x17ca PushGE
	var_298_bool = 1; // 0x17cb MovB
	GlobalVars[1] = var_298_bool; // 0x17cc PopGE
	
Label_6093:
	var_299_bool = 0; var_300_int = 0; // 0x17cd PushV
	var_300_int = 2; // 0x17ce MovI
	func_5211(var_299_bool, var_300_int); // 0x17cf NEW_2
	if(var_299_bool == 0) goto Label_6105; // 0x17d1 JumpB
	var_302_int = 0; var_303_object = Obj(); // 0x17d2 PushV
	var_303_object = var_64_object; // 0x17d3 Mov
	TaskCall(8); // 0x17d4 TaskCall
	func_1796(var_304_object, var_302_int, var_303_object); // 0x17d5 NEW_2
	TaskReturn(); // 0x17d6 TaskReturn
	return 0; // 0x17d8 Return
	
Label_6105:
	var_389_bool = 0; var_390_int = 0; // 0x17d9 PushV
	var_390_int = 3; // 0x17da MovI
	func_5211(var_389_bool, var_390_int); // 0x17db NEW_2
	if(var_389_bool == 0) goto Label_6117; // 0x17dd JumpB
	var_391_int = 0; var_392_object = Obj(); // 0x17de PushV
	var_392_object = var_64_object; // 0x17df Mov
	TaskCall(10); // 0x17e0 TaskCall
	func_2376(var_393_object, var_391_int, var_392_object); // 0x17e1 NEW_2
	TaskReturn(); // 0x17e2 TaskReturn
	return 0; // 0x17e4 Return
	
Label_6117:
	var_504_bool = 0; var_505_int = 0; // 0x17e5 PushV
	var_505_int = 4; // 0x17e6 MovI
	func_5211(var_504_bool, var_505_int); // 0x17e7 NEW_2
	if(var_504_bool == 0) goto Label_6129; // 0x17e9 JumpB
	var_506_int = 0; var_507_object = Obj(); // 0x17ea PushV
	var_507_object = var_64_object; // 0x17eb Mov
	TaskCall(12); // 0x17ec TaskCall
	func_3395(var_508_object, var_506_int, var_507_object); // 0x17ed NEW_2
	TaskReturn(); // 0x17ee TaskReturn
	return 0; // 0x17f0 Return
	
Label_6129:
	var_575_bool = 0; var_576_int = 0; // 0x17f1 PushV
	var_576_int = 6; // 0x17f2 MovI
	func_5211(var_575_bool, var_576_int); // 0x17f3 NEW_2
	if(var_575_bool == 0) goto Label_6141; // 0x17f5 JumpB
	var_577_int = 0; var_578_object = Obj(); // 0x17f6 PushV
	var_578_object = var_64_object; // 0x17f7 Mov
	TaskCall(6); // 0x17f8 TaskCall
	func_1169(var_579_object, var_577_int, var_578_object); // 0x17f9 NEW_2
	TaskReturn(); // 0x17fa TaskReturn
	return 0; // 0x17fc Return
	
Label_6141:
	var_694_bool = 0; var_695_int = 0; // 0x17fd PushV
	var_695_int = 8; // 0x17fe MovI
	func_5211(var_694_bool, var_695_int); // 0x17ff NEW_2
	if(var_694_bool == 0) goto Label_6153; // 0x1801 JumpB
	var_696_int = 0; var_697_object = Obj(); // 0x1802 PushV
	var_697_object = var_64_object; // 0x1803 Mov
	TaskCall(14); // 0x1804 TaskCall
	func_3688(var_698_object, var_696_int, var_697_object); // 0x1805 NEW_2
	TaskReturn(); // 0x1806 TaskReturn
	return 0; // 0x1808 Return
	
Label_6153:
	var_784_bool = 0; var_785_int = 0; // 0x1809 PushV
	var_785_int = 11; // 0x180a MovI
	func_5211(var_784_bool, var_785_int); // 0x180b NEW_2
	if(var_784_bool == 0) goto Label_6165; // 0x180d JumpB
	var_786_int = 0; var_787_object = Obj(); // 0x180e PushV
	var_787_object = var_64_object; // 0x180f Mov
	TaskCall(0); // 0x1810 TaskCall
	func_0(var_788_object, var_786_int, var_787_object); // 0x1811 NEW_2
	TaskReturn(); // 0x1812 TaskReturn
	return 0; // 0x1814 Return
	
Label_6165:
	var_864_bool = 0; var_865_int = 0; // 0x1815 PushV
	var_865_int = 12; // 0x1816 MovI
	func_5211(var_864_bool, var_865_int); // 0x1817 NEW_2
	if(var_864_bool == 0) goto Label_6177; // 0x1819 JumpB
	var_866_int = 0; var_867_object = Obj(); // 0x181a PushV
	var_867_object = var_64_object; // 0x181b Mov
	TaskCall(2); // 0x181c TaskCall
	func_585(var_868_object, var_866_int, var_867_object); // 0x181d NEW_2
	TaskReturn(); // 0x181e TaskReturn
	return 0; // 0x1820 Return
	
Label_6177:
	var_925_int = 0; var_926_object = Obj(); // 0x1821 PushV
	var_926_object = var_64_object; // 0x1822 Mov
	TaskCall(16); // 0x1823 TaskCall
	func_4339(var_927_object, var_925_int, var_926_object); // 0x1824 NEW_2
	TaskReturn(); // 0x1825 TaskReturn
	return 0; // 0x1827 Return
}


func_4549(var_0_object)
{
	var_47_bool = 0; // 0x11c5 PushV
	func_4828(var_47_bool); // 0x11c6 NEW_2
	var_50_bool = var_47_bool == 0; // 0x11c8 Not
	if(var_50_bool == 0) goto Label_4556; // 0x11c9 JumpB
	Hold(); // 0x11ca Func
	
Label_4556:
	GetDirection(var_0_object); // 0x11cc Func
	
Label_4558:
	func_4725(); // 0x11cf NEW_2
	goto Label_4558; // 0x11d1 Jump
}


func_5581(var_842_bool)
{
	var_844_int = 0; var_845_string = ""; // 0x15ce PushV
	var_845_string = "ood11Kapella2"; // 0x15cf MovS
	func_5125(var_844_int, var_845_string); // 0x15d0 NEW_2
	var_846_int = 0; // 0x15d2 PushI
	var_847_bool = var_844_int == var_846_int; // 0x15d3 Eq
	if(var_847_bool == 0) goto Label_5591; // 0x15d4 JumpB
	var_842_bool = 1; // 0x15d5 MovB
	return 0; // 0x15d6 Return
	
Label_5591:
	var_842_bool = 0; // 0x15d7 MovB
	return 0; // 0x15d8 Return
}


func_5072(var_252_string, var_253_bool)
{
	var_256_bool = 0; var_257_float = 0; var_258_float = 0; var_259_bool = 0; var_260_float = 0; var_261_float = 0; // 0x13d0 PushV
	lshHasAnimation(var_259_bool, var_252_string); // 0x13d1 Func
	var_262_bool = var_259_bool; // 0x13d3 Push
	if(var_262_bool == 0) goto Label_5082; // 0x13d4 JumpB
	lshGetAnimTimes(var_252_string, var_260_float, var_261_float); // 0x13d5 Func
	lshPlayAnimation(var_260_float, var_261_float, var_253_bool); // 0x13d7 Func
	goto Label_5086; // 0x13d9 Jump
	
Label_5086:
	return 6; // 0x13de Return
	
Label_5082:
	var_263_string = "Can't find lsh animation : "; // 0x13da PushS
	var_264_int = var_263_string + var_252_string; // 0x13db Add
	Trace(var_264_int); // 0x13dc Func
}


func_4563(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x11d3 PushV
	var_74_string = "player"; // 0x11d4 PushS
	FindActor(var_73_object, var_74_string); // 0x11d5 Func
	var_75_bool = var_73_object == 0; // 0x11d7 Not
	if(var_75_bool == 0) goto Label_4571; // 0x11d8 JumpB
	var_71_bool = 0; // 0x11d9 MovB
	return 2; // 0x11da Return
	
Label_4571:
	var_76_bool = 0; var_77_object = Obj(); // 0x11db PushV
	var_77_object = var_73_object; // 0x11dc Mov
	func_4819(var_77_object); // 0x11dd NEW_2
	var_71_bool = var_76_bool; // 0x11de Mov
	return 2; // 0x11e0 Return
}


func_5593(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x15da PushV
	var_346_string = "ood2Kapella1"; // 0x15db MovS
	func_5125(var_345_int, var_346_string); // 0x15dc NEW_2
	var_349_int = 0; // 0x15de PushI
	var_350_bool = var_345_int == var_349_int; // 0x15df Eq
	if(var_350_bool == 0) goto Label_5603; // 0x15e0 JumpB
	var_343_bool = 1; // 0x15e1 MovB
	return 0; // 0x15e2 Return
	
Label_5603:
	var_343_bool = 0; // 0x15e3 MovB
	return 0; // 0x15e4 Return
}


func_3548(var_2_object, var_537_string)
{
	var_538_bool = 0; // 0xddd PushV
	func_5249(var_538_bool); // 0xdde NEW_2
	var_539_bool = var_538_bool == 0; // 0xde0 Not
	if(var_539_bool == 0) goto Label_3555; // 0xde1 JumpB
	return 0; // 0xde2 Return
	
Label_3555:
	var_540_bool = var_537_string == var_2_object; // 0xde3 Eq
	if(var_540_bool == 0) goto Label_3558; // 0xde4 JumpB
	return 0; // 0xde5 Return
	
Label_3558:
	var_541_string = ""; var_542_bool = 0; // 0xde6 PushV
	var_541_string = var_537_string; // 0xde7 Mov
	var_543_string = ""; // 0xde8 PushS
	var_544_bool = var_537_string == var_543_string; // 0xde9 Eq
	if(var_544_bool == 0) goto Label_3565; // 0xdea JumpB
	var_542_bool = 0; // 0xdeb MovB
	goto Label_3566; // 0xdec Jump
	
Label_3566:
	func_5072(var_541_string, var_542_bool); // 0xdee NEW_2
	var_2_object = var_537_string; // 0xdf0 TMov
	return 0; // 0xdf1 Return
	
Label_3565:
	var_542_bool = 1; // 0xded MovB
}


func_5087(var_172_bool, var_173_string)
{
	var_174_bool = 0; var_175_bool = 0; // 0x13df PushV
	var_176_bool = 0; // 0x13e0 PushV
	func_5249(var_176_bool); // 0x13e1 NEW_2
	if(var_176_bool == 0) goto Label_5100; // 0x13e3 JumpB
	lshHasSpeech(var_175_bool, var_173_string); // 0x13e4 Func
	var_177_bool = var_175_bool; // 0x13e6 Push
	if(var_177_bool == 0) goto Label_5100; // 0x13e7 JumpB
	lshPlaySpeech(var_173_string); // 0x13e8 Func
	var_172_bool = 1; // 0x13ea MovB
	return 2; // 0x13eb Return
	
Label_5100:
	var_172_bool = 0; // 0x13ec MovB
	return 2; // 0x13ed Return
}


func_993(var_2_object, var_248_string)
{
	var_249_bool = 0; // 0x3e2 PushV
	func_5249(var_249_bool); // 0x3e3 NEW_2
	var_250_bool = var_249_bool == 0; // 0x3e5 Not
	if(var_250_bool == 0) goto Label_1000; // 0x3e6 JumpB
	return 0; // 0x3e7 Return
	
Label_1000:
	var_251_bool = var_248_string == var_2_object; // 0x3e8 Eq
	if(var_251_bool == 0) goto Label_1003; // 0x3e9 JumpB
	return 0; // 0x3ea Return
	
Label_1003:
	var_252_string = ""; var_253_bool = 0; // 0x3eb PushV
	var_252_string = var_248_string; // 0x3ec Mov
	var_254_string = ""; // 0x3ed PushS
	var_255_bool = var_248_string == var_254_string; // 0x3ee Eq
	if(var_255_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_253_bool = 0; // 0x3f0 MovB
	goto Label_1011; // 0x3f1 Jump
	
Label_1011:
	func_5072(var_252_string, var_253_bool); // 0x3f3 NEW_2
	var_2_object = var_248_string; // 0x3f5 TMov
	return 0; // 0x3f6 Return
	
Label_1010:
	var_253_bool = 1; // 0x3f2 MovB
}


func_4578(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x11e2 PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x11e3 PushE
	RotateAsync(var_123_float, var_124_float); // 0x11e4 Func
	return 0; // 0x11e6 Return
}


func_5605(var_361_bool)
{
	var_363_int = 0; var_364_string = ""; // 0x15e6 PushV
	var_364_string = "ood2Kapella2"; // 0x15e7 MovS
	func_5125(var_363_int, var_364_string); // 0x15e8 NEW_2
	var_365_int = 0; // 0x15ea PushI
	var_366_bool = var_363_int == var_365_int; // 0x15eb Eq
	if(var_366_bool == 0) goto Label_5615; // 0x15ec JumpB
	var_361_bool = 1; // 0x15ed MovB
	return 0; // 0x15ee Return
	
Label_5615:
	var_361_bool = 0; // 0x15ef MovB
	return 0; // 0x15f0 Return
}


func_4583(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x11e7 PushV
	var_59_string = "player"; // 0x11e8 PushS
	FindActor(var_57_object, var_59_string); // 0x11e9 Func
	var_60_bool = var_57_object == 0; // 0x11eb Not
	if(var_60_bool == 0) goto Label_4591; // 0x11ec JumpB
	var_54_bool = 0; // 0x11ed MovB
	return 4; // 0x11ee Return
	
Label_4591:
	var_61_float = 0; var_62_object = Obj(); // 0x11ef PushV
	var_62_object = var_57_object; // 0x11f0 Mov
	func_4801(var_62_object); // 0x11f1 NEW_2
	var_69_float = 90000.0; // 0x11f3 PushF
	var_70_bool = var_61_float > var_69_float; // 0x11f4 GT
	if(var_70_bool == 0) goto Label_4600; // 0x11f5 JumpB
	var_54_bool = 0; // 0x11f6 MovB
	return 4; // 0x11f7 Return
	
Label_4600:
	CanSee(var_58_bool, var_57_object); // 0x11f8 Func
	var_54_bool = var_58_bool; // 0x11fa Mov
	return 4; // 0x11fb Return
}


func_5102()
{
	var_49_bool = 0; // 0x13ee PushV
	func_5249(var_49_bool); // 0x13ef NEW_2
	if(var_49_bool == 0) goto Label_5108; // 0x13f1 JumpB
	lshStopSpeech(); // 0x13f2 Func
	
Label_5108:
	return 0; // 0x13f4 Return
}


func_5617(var_351_bool)
{
	var_353_int = 0; var_354_string = ""; // 0x15f2 PushV
	var_354_string = "d2q01"; // 0x15f3 MovS
	func_5125(var_353_int, var_354_string); // 0x15f4 NEW_2
	var_355_int = 2; // 0x15f6 PushI
	var_356_bool = var_353_int == var_355_int; // 0x15f7 Eq
	if(var_356_bool == 0) goto Label_5627; // 0x15f8 JumpB
	var_351_bool = 1; // 0x15f9 MovB
	return 0; // 0x15fa Return
	
Label_5627:
	var_351_bool = 0; // 0x15fb MovB
	return 0; // 0x15fc Return
}


func_5109(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj(); // 0x13f5 PushV
	self(var_142_object); // 0x13f6 Func
	var_140_object = var_142_object; // 0x13f8 Mov
	return 2; // 0x13f9 Return
}


func_5115(var_105_cvector, var_106_cvector)
{
	var_108_float = 0; var_109_float = 0; // 0x13fb PushV
	var_110_int = var_106_cvector | var_106_cvector; // 0x13fc Or
	var_109_float = sqrt(var_110_int); // 0x13fd Sqrt2
	var_111_float = 0.0; // 0x13fe PushF
	var_112_bool = var_109_float < var_111_float; // 0x13ff LT
	if(var_112_bool == 0) goto Label_5123; // 0x1400 JumpB
	var_105_cvector = CVector(0.0, 0.0, 0.0); // 0x1401 MovV
	return 2; // 0x1402 Return
	
Label_5123:
	var_105_cvector = var_106_cvector / var_106_cvector; // 0x1403 Div2
	return 2; // 0x1404 Return
}


func_4605()
{
	var_983_float = 0; var_984_float = 0; // 0x11fd PushV
	var_985_int = 8; // 0x11fe PushI
	var_986_int = 16; // 0x11ff PushI
	rand(var_984_float, var_985_int, var_986_int); // 0x1200 Func
	var_987_int = 10; // 0x1202 PushI
	SetTimer(var_987_int, var_984_float); // 0x1203 Func
	return 2; // 0x1205 Return
}


