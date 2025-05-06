task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xc5 PushI
	if(var_14_int == 0) goto Label_508; // 0xc6 JumpB
	func_909(); // 0xc8 NEW_2
	var_16_int = 34192; // 0xca PushI
	var_17_bool = var_13_bool == var_16_int; // 0xcb Eq
	if(var_17_bool == 0) goto Label_210; // 0xcc JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xcd PushV
	var_18_object = var_1_object; // 0xce MovT
	var_19_object = var_0_object; // 0xcf MovT
	func_1044(); // 0xd0 NEW_2
	
Label_210:
	var_22_int = 34194; // 0xd2 PushI
	var_23_bool = var_13_bool == var_22_int; // 0xd3 Eq
	if(var_23_bool == 0) goto Label_228; // 0xd4 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xd5 PushV
	var_24_object = var_1_object; // 0xd6 MovT
	var_25_object = var_0_object; // 0xd7 MovT
	func_1075(); // 0xd8 NEW_2
	var_28_object = Obj(); var_29_object = Obj(); // 0xda PushV
	var_28_object = var_1_object; // 0xdb MovT
	var_29_object = var_0_object; // 0xdc MovT
	func_1014(); // 0xdd NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xdf PushV
	var_74_object = var_1_object; // 0xe0 MovT
	var_75_object = var_0_object; // 0xe1 MovT
	func_1059(var_75_object); // 0xe2 NEW_2
	
Label_228:
	var_95_int = 34195; // 0xe4 PushI
	var_96_bool = var_13_bool == var_95_int; // 0xe5 Eq
	if(var_96_bool == 0) goto Label_236; // 0xe6 JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0xe7 PushV
	var_97_object = var_1_object; // 0xe8 MovT
	var_98_object = var_0_object; // 0xe9 MovT
	func_1050(); // 0xea NEW_2
	
Label_236:
	var_109_int = 34196; // 0xec PushI
	var_110_bool = var_13_bool == var_109_int; // 0xed Eq
	if(var_110_bool == 0) goto Label_244; // 0xee JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0xef PushV
	var_111_object = var_1_object; // 0xf0 MovT
	var_112_object = var_0_object; // 0xf1 MovT
	func_1069(); // 0xf2 NEW_2
	
Label_244:
	var_115_int = 34198; // 0xf4 PushI
	var_116_bool = var_13_bool == var_115_int; // 0xf5 Eq
	if(var_116_bool == 0) goto Label_262; // 0xf6 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0xf7 PushV
	var_117_object = var_1_object; // 0xf8 MovT
	var_118_object = var_0_object; // 0xf9 MovT
	func_1014(); // 0xfa NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0xfc PushV
	var_119_object = var_1_object; // 0xfd MovT
	var_120_object = var_0_object; // 0xfe MovT
	func_1075(); // 0xff NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x101 PushV
	var_121_object = var_1_object; // 0x102 MovT
	var_122_object = var_0_object; // 0x103 MovT
	func_1059(var_122_object); // 0x104 NEW_2
	
Label_262:
	var_123_int = 34591; // 0x106 PushI
	var_124_bool = var_13_bool == var_123_int; // 0x107 Eq
	if(var_124_bool == 0) goto Label_280; // 0x108 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x109 PushV
	var_125_object = var_1_object; // 0x10a MovT
	var_126_object = var_0_object; // 0x10b MovT
	func_1014(); // 0x10c NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x10e PushV
	var_127_object = var_1_object; // 0x10f MovT
	var_128_object = var_0_object; // 0x110 MovT
	func_1075(); // 0x111 NEW_2
	var_129_object = Obj(); var_130_object = Obj(); // 0x113 PushV
	var_129_object = var_1_object; // 0x114 MovT
	var_130_object = var_0_object; // 0x115 MovT
	func_1059(var_130_object); // 0x116 NEW_2
	
Label_280:
	var_131_int = 34191; // 0x118 PushI
	var_132_bool = var_12_bool == var_131_int; // 0x119 Eq
	if(var_132_bool == 0) goto Label_345; // 0x11a JumpB
	var_133_string = ""; // 0x11b PushV
	var_133_string = "Neutral"; // 0x11c MovS
	func_174(var_13_bool, var_133_string); // 0x11d NEW_2
	var_150_int = 532716; // 0x11f PushI
	SetMessage(var_150_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_151_bool = 0; // 0x124 PushV
	var_151_bool = 0; // 0x125 MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x126 PushV
	var_153_object = var_1_object; // 0x127 MovT
	func_1127(var_153_object); // 0x128 NEW_2
	if(var_152_bool == 0) goto Label_305; // 0x12a JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x12b PushV
	var_161_object = var_1_object; // 0x12c MovT
	func_1091(var_161_object); // 0x12d NEW_2
	if(var_160_bool == 0) goto Label_305; // 0x12f JumpB
	var_151_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_151_bool == 0) goto Label_311; // 0x131 JumpB
	var_166_int = 532717; // 0x132 PushI
	var_167_int = 34571; // 0x133 PushI
	var_168_int = 34192; // 0x134 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x135 TObjFunc
	
Label_311:
	var_169_bool = 0; // 0x137 PushV
	var_169_bool = 0; // 0x138 MovB
	var_170_bool = 0; // 0x139 PushV
	var_170_bool = 0; // 0x13a MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x13b PushV
	var_172_object = var_1_object; // 0x13c MovT
	func_1081(var_171_bool, var_172_object); // 0x13d NEW_2
	if(var_171_bool == 0) goto Label_326; // 0x13f JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x140 PushV
	var_181_object = var_1_object; // 0x141 MovT
	func_1103(var_181_object); // 0x142 NEW_2
	if(var_180_bool == 0) goto Label_326; // 0x144 JumpB
	var_170_bool = 1; // 0x145 MovB
	
Label_326:
	if(var_170_bool == 0) goto Label_333; // 0x146 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x147 PushV
	var_187_object = var_1_object; // 0x148 MovT
	func_1115(var_187_object); // 0x149 NEW_2
	if(var_186_bool == 0) goto Label_333; // 0x14b JumpB
	var_169_bool = 1; // 0x14c MovB
	
Label_333:
	if(var_169_bool == 0) goto Label_339; // 0x14d JumpB
	var_192_int = 532721; // 0x14e PushI
	var_193_int = 34197; // 0x14f PushI
	var_194_int = 34196; // 0x150 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x151 TObjFunc
	
Label_339:
	var_195_int = 532724; // 0x153 PushI
	var_196_int = -1; // 0x154 PushI
	var_197_int = 34199; // 0x155 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_198_int = 34197; // 0x159 PushI
	var_199_bool = var_12_bool == var_198_int; // 0x15a Eq
	if(var_199_bool == 0) goto Label_368; // 0x15b JumpB
	var_200_string = ""; // 0x15c PushV
	var_200_string = "Neutral"; // 0x15d MovS
	func_174(var_13_bool, var_200_string); // 0x15e NEW_2
	var_201_int = 532722; // 0x160 PushI
	SetMessage(var_201_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_202_int = 532723; // 0x165 PushI
	var_203_int = -1; // 0x166 PushI
	var_204_int = 34198; // 0x167 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x168 TObjFunc
	var_205_int = 533075; // 0x16a PushI
	var_206_int = 34590; // 0x16b PushI
	var_207_int = 34589; // 0x16c PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x16d TObjFunc
	return 0; // 0x16f Return
	
Label_368:
	var_208_int = 34590; // 0x170 PushI
	var_209_bool = var_12_bool == var_208_int; // 0x171 Eq
	if(var_209_bool == 0) goto Label_386; // 0x172 JumpB
	var_210_string = ""; // 0x173 PushV
	var_210_string = "Neutral"; // 0x174 MovS
	func_174(var_13_bool, var_210_string); // 0x175 NEW_2
	var_211_int = 533076; // 0x177 PushI
	SetMessage(var_211_int); // 0x178 TObjFunc
	ClearReplies(); // 0x17a TObjFunc
	var_212_int = 533077; // 0x17c PushI
	var_213_int = -1; // 0x17d PushI
	var_214_int = 34591; // 0x17e PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_215_int = 34571; // 0x182 PushI
	var_216_bool = var_12_bool == var_215_int; // 0x183 Eq
	if(var_216_bool == 0) goto Label_409; // 0x184 JumpB
	var_217_string = ""; // 0x185 PushV
	var_217_string = "Neutral"; // 0x186 MovS
	func_174(var_13_bool, var_217_string); // 0x187 NEW_2
	var_218_int = 533060; // 0x189 PushI
	SetMessage(var_218_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_219_int = 533061; // 0x18e PushI
	var_220_int = 34573; // 0x18f PushI
	var_221_int = 34572; // 0x190 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x191 TObjFunc
	var_222_int = 533071; // 0x193 PushI
	var_223_int = 34573; // 0x194 PushI
	var_224_int = 34583; // 0x195 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_225_int = 34573; // 0x199 PushI
	var_226_bool = var_12_bool == var_225_int; // 0x19a Eq
	if(var_226_bool == 0) goto Label_432; // 0x19b JumpB
	var_227_string = ""; // 0x19c PushV
	var_227_string = "Neutral"; // 0x19d MovS
	func_174(var_13_bool, var_227_string); // 0x19e NEW_2
	var_228_int = 533062; // 0x1a0 PushI
	SetMessage(var_228_int); // 0x1a1 TObjFunc
	ClearReplies(); // 0x1a3 TObjFunc
	var_229_int = 533063; // 0x1a5 PushI
	var_230_int = 34575; // 0x1a6 PushI
	var_231_int = 34574; // 0x1a7 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1a8 TObjFunc
	var_232_int = 533072; // 0x1aa PushI
	var_233_int = 34193; // 0x1ab PushI
	var_234_int = 34585; // 0x1ac PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1ad TObjFunc
	return 0; // 0x1af Return
	
Label_432:
	var_235_int = 34575; // 0x1b0 PushI
	var_236_bool = var_12_bool == var_235_int; // 0x1b1 Eq
	if(var_236_bool == 0) goto Label_450; // 0x1b2 JumpB
	var_237_string = ""; // 0x1b3 PushV
	var_237_string = "Neutral"; // 0x1b4 MovS
	func_174(var_13_bool, var_237_string); // 0x1b5 NEW_2
	var_238_int = 533064; // 0x1b7 PushI
	SetMessage(var_238_int); // 0x1b8 TObjFunc
	ClearReplies(); // 0x1ba TObjFunc
	var_239_int = 533065; // 0x1bc PushI
	var_240_int = 34193; // 0x1bd PushI
	var_241_int = 34576; // 0x1be PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1bf TObjFunc
	return 0; // 0x1c1 Return
	
Label_450:
	var_242_int = 34193; // 0x1c2 PushI
	var_243_bool = var_12_bool == var_242_int; // 0x1c3 Eq
	if(var_243_bool == 0) goto Label_468; // 0x1c4 JumpB
	var_244_string = ""; // 0x1c5 PushV
	var_244_string = "Neutral"; // 0x1c6 MovS
	func_174(var_13_bool, var_244_string); // 0x1c7 NEW_2
	var_245_int = 532718; // 0x1c9 PushI
	SetMessage(var_245_int); // 0x1ca TObjFunc
	ClearReplies(); // 0x1cc TObjFunc
	var_246_int = 533073; // 0x1ce PushI
	var_247_int = 34588; // 0x1cf PushI
	var_248_int = 34587; // 0x1d0 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x1d1 TObjFunc
	return 0; // 0x1d3 Return
	
Label_468:
	var_249_int = 34588; // 0x1d4 PushI
	var_250_bool = var_12_bool == var_249_int; // 0x1d5 Eq
	if(var_250_bool == 0) goto Label_496; // 0x1d6 JumpB
	var_251_string = ""; // 0x1d7 PushV
	var_251_string = "Neutral"; // 0x1d8 MovS
	func_174(var_13_bool, var_251_string); // 0x1d9 NEW_2
	var_252_int = 533074; // 0x1db PushI
	SetMessage(var_252_int); // 0x1dc TObjFunc
	ClearReplies(); // 0x1de TObjFunc
	var_253_bool = 0; var_254_object = Obj(); // 0x1e0 PushV
	var_254_object = var_1_object; // 0x1e1 MovT
	func_1081(var_253_bool, var_254_object); // 0x1e2 NEW_2
	if(var_253_bool == 0) goto Label_490; // 0x1e4 JumpB
	var_255_int = 532719; // 0x1e5 PushI
	var_256_int = -1; // 0x1e6 PushI
	var_257_int = 34194; // 0x1e7 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x1e8 TObjFunc
	
Label_490:
	var_258_int = 532720; // 0x1ea PushI
	var_259_int = -1; // 0x1eb PushI
	var_260_int = 34195; // 0x1ec PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_3_string = 1; // 0x1f0 TMovB
	var_261_bool = 0; // 0x1f1 PushV
	func_988(var_261_bool); // 0x1f2 NEW_2
	if(var_261_bool == 0) goto Label_504; // 0x1f4 JumpB
	lshStopAnimation(); // 0x1f5 Func
	goto Label_506; // 0x1f7 Jump
	
Label_506:
	return 0; // 0x1fa Return
	
Label_504:
	StopAnimation(); // 0x1f8 Func
	
Label_508:
	return 0; // 0x1fc Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_660(var_11_bool, var_12_object); // 0x205 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x207 PushV
	var_17_object = var_12_object; // 0x208 Mov
	TaskCall(0); // 0x209 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x20a NEW_2
	TaskReturn(); // 0x20b TaskReturn
	return 0; // 0x20d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x235 PushS
	var_14_bool = var_12_string == var_13_string; // 0x236 Eq
	if(var_14_bool == 0) goto Label_571; // 0x237 JumpB
	func_544(var_12_string); // 0x239 NEW_2
	
Label_571:
	return 0; // 0x23b Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x23c PushT
	if(var_12_int == 0) goto Label_577; // 0x23d JumpB
	func_660(var_10_bool, var_11_bool); // 0x23f NEW_2
	
Label_577:
	var_16_bool = 0; // 0x241 PushV
	var_16_bool = 0; // 0x242 MovB
	var_17_int = var_5_int; // 0x243 PushT
	if(var_17_int == 0) goto Label_586; // 0x244 JumpB
	var_18_bool = 0; // 0x245 PushV
	func_593(var_18_bool); // 0x246 NEW_2
	if(var_18_bool == 0) goto Label_586; // 0x248 JumpB
	var_16_bool = 1; // 0x249 MovB
	
Label_586:
	if(var_16_bool == 0) goto Label_592; // 0x24a JumpB
	var_19_object = Obj(); // 0x24b PushV
	func_916(var_19_object); // 0x24c NEW_2
	RemoveActor(var_19_object); // 0x24e Func
	
Label_592:
	return 0; // 0x250 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x27e PushI
	var_14_bool = var_12_int == var_13_int; // 0x27f Eq
	if(var_14_bool == 0) goto Label_659; // 0x280 JumpB
	var_15_bool = 0; // 0x281 PushV
	func_622(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x282 NEW_2
	if(var_15_bool == 0) goto Label_653; // 0x284 JumpB
	var_28_bool = var_2_object == 0; // 0x285 Not
	if(var_28_bool == 0) goto Label_652; // 0x286 JumpB
	var_29_object = Obj(); // 0x287 PushV
	var_29_object = var_4_bool; // 0x288 MovT
	func_898(var_29_object); // 0x289 NEW_2
	var_2_object = 1; // 0x28b TMovB
	
Label_652:
	goto Label_659; // 0x28c Jump
	
Label_659:
	return 0; // 0x293 Return
	
Label_653:
	var_36_object = var_2_object; // 0x28d PushT
	if(var_36_object == 0) goto Label_659; // 0x28e JumpB
	var_37_string = "head"; // 0x28f PushS
	UnlookAsync(var_37_string); // 0x290 Func
	var_2_object = 0; // 0x292 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1fd PushV
	var_12_float = 300; // 0x1fe MovI
	var_13_float = 100; // 0x1ff MovI
	func_526(var_11_bool, var_12_float, var_13_float); // 0x200 NEW_2
	return 0; // 0x202 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 100.0; // 0x4 MovF
	func_780(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_982(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_980(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_984(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_986(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1234(var_79_int); // 0x22 NEW_2
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
	var_178_bool = var_26_bool == 0; // 0x38 Not
	if(var_178_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_179_object = Obj(); // 0x3f PushV
	var_179_object = var_17_object; // 0x40 Mov
	func_849(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_768(var_82_string, var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x300 PushV
	GetProperty(var_82_string, var_85_int); // 0x301 ObjFunc
	var_86_int = var_85_int + var_83_int; // 0x303 Add
	SetProperty(var_82_string, var_86_int); // 0x304 ObjFunc
	return 2; // 0x306 Return
}


func_898(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x382 PushV
	GetEyesHeight(var_32_float); // 0x383 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x385 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x386 PushE
	var_34_float = var_32_float; // 0x387 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x388 PopE
	var_35_string = "head"; // 0x389 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x38a Func
	return 4; // 0x38c Return
}


func_775(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x307 PushV
	IsLoaded(var_25_bool); // 0x308 Func
	var_23_bool = var_25_bool; // 0x30a Mov
	return 2; // 0x30b Return
}


func_1163()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x48b PushV
	var_103_int = 625; // 0x48c PushI
	var_104_int = 2; // 0x48d PushI
	var_105_int = 532728; // 0x48e PushI
	CreateDiaryEntry(var_102_object, var_103_int, var_104_int, var_105_int); // 0x48f Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0x491 PushV
	var_107_object = var_102_object; // 0x492 Mov
	var_108_int = 7; // 0x493 MovI
	func_1189(var_106_bool, var_107_object, var_108_int); // 0x494 NEW_2
	return 2; // 0x496 Return
}


func_780(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x30c PushV
	GetPosition(var_40_cvector); // 0x30d ObjFunc
	GetEyesHeight(var_39_float); // 0x30f ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x311 PushE
	var_48_float = var_48_float + var_39_float; // 0x312 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x313 PopE
	GetPosition(var_41_cvector); // 0x314 Func
	GetEyesHeight(var_39_float); // 0x316 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x318 PushE
	var_49_float = var_49_float + var_39_float; // 0x319 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x31a PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x31b Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x31c PushE
	var_50_float = 0; // 0x31d MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x31e PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x31f Or
	var_52_float = sqrt(var_51_int); // 0x320 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x321 Div2
	var_43_cvector = -var_42_cvector; // 0x322 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x323 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x324 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x325 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x326 Xor2
	func_922(var_54_cvector, var_55_cvector); // 0x327 NEW_2
	var_62_int = 25; // 0x329 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x32a Mult
	var_64_int = var_53_float + var_63_float; // 0x32b Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x32c PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x32d Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x32e Add2
	IsOverrideActive(var_46_bool); // 0x32f Func
	var_66_bool = var_46_bool; // 0x331 Push
	if(var_66_bool == 0) goto Label_821; // 0x332 JumpB
	var_27_bool = 0; // 0x333 MovB
	return 18; // 0x334 Return
	
Label_821:
	StopWorld(); // 0x335 Func
	var_67_bool = 1; // 0x337 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x338 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x33a PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x33b PushE
	Rotate(var_68_float, var_69_float); // 0x33c Func
	var_70_bool = 0; // 0x33e PushV
	func_988(var_70_bool); // 0x33f NEW_2
	if(var_70_bool == 0) goto Label_835; // 0x341 JumpB
	goto Label_843; // 0x342 Jump
	
Label_843:
	CameraWaitForPlayFinish(); // 0x34b Func
	ResumeWorld(); // 0x34d Func
	var_27_bool = 1; // 0x34f MovB
	return 18; // 0x350 Return
	
Label_835:
	var_71_string = "head"; // 0x343 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x344 Func
	var_72_bool = var_47_bool; // 0x346 Push
	if(var_72_bool == 0) goto Label_843; // 0x347 JumpB
	var_73_string = "head"; // 0x348 PushS
	LookAsyncCamera(var_73_string); // 0x349 Func
}


func_909()
{
	var_15_bool = 0; // 0x38d PushV
	func_988(var_15_bool); // 0x38e NEW_2
	if(var_15_bool == 0) goto Label_915; // 0x390 JumpB
	lshStopSpeech(); // 0x391 Func
	
Label_915:
	return 0; // 0x393 Return
}


func_526(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x20e PushV
	var_6_int = 0; // 0x20f TMovB
	
Label_528:
	var_18_int = 3; // 0x210 PushI
	rand(var_16_float, var_18_int); // 0x211 Func
	var_19_int = 3; // 0x213 PushI
	var_20_int = var_16_float + var_19_int; // 0x214 Add
	Sleep(var_20_int, var_17_bool); // 0x215 Func
	var_6_int = 1; // 0x217 TMovB
	var_21_float = 0; var_22_float = 0; // 0x218 PushV
	var_21_float = var_12_float; // 0x219 Mov
	var_22_float = var_13_float; // 0x21a Mov
	func_595(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x21b NEW_2
	var_6_int = 0; // 0x21d TMovB
	goto Label_528; // 0x21e Jump
}


func_1044()
{
	var_20_string = "ood1GorbunLaska1"; // 0x415 PushS
	var_21_int = 1; // 0x416 PushI
	SetVariable(var_20_string, var_21_int); // 0x417 Func
	return 0; // 0x419 Return
}


func_660(var_2_object, var_3_string)
{
	func_755(); // 0x295 NEW_2
	var_13_int = 10; // 0x297 PushI
	KillTimer(var_13_int); // 0x298 Func
	var_14_object = var_2_object; // 0x29a PushT
	if(var_14_object == 0) goto Label_672; // 0x29b JumpB
	var_15_string = "head"; // 0x29c PushS
	UnlookAsync(var_15_string); // 0x29d Func
	var_2_object = 0; // 0x29f TMovB
	
Label_672:
	var_3_string = 1; // 0x2a0 TMovB
	return 0; // 0x2a1 Return
}


func_916(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x394 PushV
	self(var_21_object); // 0x395 Func
	var_19_object = var_21_object; // 0x397 Mov
	return 2; // 0x398 Return
}


func_1176(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x498 PushV
	GetDiaryRoot(var_61_object); // 0x499 Func
	var_62_bool = var_61_object == 0; // 0x49b Not
	if(var_62_bool == 0) goto Label_1186; // 0x49c JumpB
	var_63_string = "Can't retrieve diary root"; // 0x49d PushS
	Trace(var_63_string); // 0x49e Func
	var_59_object = 0; // 0x4a0 MovB
	return 2; // 0x4a1 Return
	
Label_1186:
	var_59_object = var_61_object; // 0x4a2 Mov
	return 2; // 0x4a3 Return
}


func_1050()
{
	var_99_string = "d1q02"; // 0x41b PushS
	var_100_int = 4; // 0x41c PushI
	SetVariable(var_99_string, var_100_int); // 0x41d Func
	func_1163(); // 0x420 NEW_2
	return 0; // 0x422 Return
}


func_922(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x39a PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x39b Or
	var_58_float = sqrt(var_59_int); // 0x39c Sqrt2
	var_60_float = 0.0; // 0x39d PushF
	var_61_bool = var_58_float < var_60_float; // 0x39e LT
	if(var_61_bool == 0) goto Label_930; // 0x39f JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x3a0 MovV
	return 2; // 0x3a1 Return
	
Label_930:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x3a2 Div2
	return 2; // 0x3a3 Return
}


func_544(var_5_int)
{
	var_5_int = 1; // 0x220 TMovB
	var_15_bool = 0; // 0x221 PushV
	var_15_bool = 0; // 0x222 MovB
	var_16_bool = 0; // 0x223 PushV
	func_775(var_16_bool); // 0x224 NEW_2
	var_19_bool = var_16_bool == 0; // 0x226 Not
	if(var_19_bool == 0) goto Label_557; // 0x227 JumpB
	var_20_bool = 0; // 0x228 PushV
	func_593(var_20_bool); // 0x229 NEW_2
	if(var_20_bool == 0) goto Label_557; // 0x22b JumpB
	var_15_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_15_bool == 0) goto Label_563; // 0x22d JumpB
	var_21_object = Obj(); // 0x22e PushV
	func_916(var_21_object); // 0x22f NEW_2
	RemoveActor(var_21_object); // 0x231 Func
	
Label_563:
	return 0; // 0x233 Return
}


func_674()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x2a2 PushV
	WaitForAnimEnd(); // 0x2a3 Func
	var_44_bool = 0; // 0x2a5 PushV
	func_775(var_44_bool); // 0x2a6 NEW_2
	var_45_bool = var_44_bool == 0; // 0x2a8 Not
	if(var_45_bool == 0) goto Label_683; // 0x2a9 JumpB
	return 14; // 0x2aa Return
	
Label_683:
	var_46_int = 0; // 0x2ab PushV
	func_997(var_46_int); // 0x2ac NEW_2
	var_37_int = var_46_int; // 0x2ad Mov
	var_38_int = 0; // 0x2af MovI
	
Label_688:
	var_59_bool = 0; // 0x2b0 PushV
	var_59_bool = 0; // 0x2b1 MovB
	var_60_int = 5; // 0x2b2 PushI
	var_61_bool = var_38_int < var_60_int; // 0x2b3 LT
	if(var_61_bool == 0) goto Label_698; // 0x2b4 JumpB
	var_62_bool = 0; // 0x2b5 PushV
	func_775(var_62_bool); // 0x2b6 NEW_2
	if(var_62_bool == 0) goto Label_698; // 0x2b8 JumpB
	var_59_bool = 1; // 0x2b9 MovB
	
Label_698:
	if(var_59_bool == 0) goto Label_750; // 0x2ba JumpB
	var_63_int = 3; // 0x2bb PushI
	irand(var_39_int, var_63_int); // 0x2bc Func
	var_64_int = 0; // 0x2be PushI
	var_65_bool = var_39_int == var_64_int; // 0x2bf Eq
	if(var_65_bool == 0) goto Label_722; // 0x2c0 JumpB
	var_66_int = var_37_int; // 0x2c1 Push
	if(var_66_int == 0) goto Label_721; // 0x2c2 JumpB
	irand(var_40_int, var_37_int); // 0x2c3 Func
	var_67_string = "all"; // 0x2c5 PushS
	var_68_string = ""; var_69_int = 0; // 0x2c6 PushV
	var_69_int = var_40_int; // 0x2c7 Mov
	func_990(var_68_string, var_69_int); // 0x2c8 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x2ca Func
	WaitForAnimEnd(var_41_bool); // 0x2cc Func
	var_70_bool = var_41_bool == 0; // 0x2ce Not
	if(var_70_bool == 0) goto Label_721; // 0x2cf JumpB
	goto Label_750; // 0x2d0 Jump
	
Label_750:
	ResetAAS(); // 0x2ee Func
	return 14; // 0x2f0 Return
	
Label_721:
	goto Label_739; // 0x2d1 Jump
	
Label_739:
	var_71_bool = 0; // 0x2e3 PushV
	func_753(var_71_bool); // 0x2e4 NEW_2
	var_72_bool = var_71_bool == 0; // 0x2e6 Not
	if(var_72_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_750; // 0x2e8 Jump
	
Label_745:
	ResetAAS(); // 0x2e9 Func
	var_73_int = 1; // 0x2eb PushI
	var_38_int = var_38_int + var_73_int; // 0x2ec Add2
	goto Label_688; // 0x2ed Jump
	
Label_722:
	var_74_int = 1; // 0x2d2 PushI
	var_75_bool = var_39_int == var_74_int; // 0x2d3 Eq
	if(var_75_bool == 0) goto Label_736; // 0x2d4 JumpB
	var_76_int = 4; // 0x2d5 PushI
	rand(var_42_float, var_76_int); // 0x2d6 Func
	var_77_int = 1; // 0x2d8 PushI
	var_78_int = var_42_float + var_77_int; // 0x2d9 Add
	Sleep(var_78_int, var_43_bool); // 0x2da Func
	var_79_bool = var_43_bool == 0; // 0x2dc Not
	if(var_79_bool == 0) goto Label_735; // 0x2dd JumpB
	goto Label_750; // 0x2de Jump
	
Label_735:
	goto Label_739; // 0x2df Jump
	
Label_736:
	var_80_int = var_38_int; // 0x2e0 Push
	if(var_80_int == 0) goto Label_739; // 0x2e1 JumpB
	goto Label_750; // 0x2e2 Jump
}


func_1059(var_74_object)
{
	var_76_string = "money 2000 removed"; // 0x424 PushS
	Trace(var_76_string); // 0x425 Func
	var_77_object = Obj(); var_78_int = 0; // 0x427 PushV
	var_77_object = var_74_object; // 0x428 Mov
	var_78_int = -2000; // 0x429 MovI
	func_949(var_77_object, var_78_int); // 0x42a NEW_2
	return 0; // 0x42c Return
}


func_932(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0; // 0x3a4 PushV
	GetVariable(var_117_string, var_119_int); // 0x3a5 Func
	var_116_int = var_119_int; // 0x3a7 Mov
	return 2; // 0x3a8 Return
}


func_1189(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x4a5 PushV
	var_59_object = Obj(); // 0x4a6 PushV
	func_1176(var_59_object); // 0x4a7 NEW_2
	var_56_object = var_59_object; // 0x4a8 Mov
	Find(var_52_int, var_57_object); // 0x4aa ObjFunc
	var_64_bool = var_57_object == 0; // 0x4ac Not
	if(var_64_bool == 0) goto Label_1204; // 0x4ad JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x4ae PushS
	var_66_int = var_65_string + var_52_int; // 0x4af Add
	Trace(var_66_int); // 0x4b0 Func
	var_50_bool = 0; // 0x4b2 MovB
	return 6; // 0x4b3 Return
	
Label_1204:
	AddChild(var_51_object); // 0x4b4 ObjFunc
	var_67_int = 7; // 0x4b6 PushI
	SendWorldWndMessage(var_67_int); // 0x4b7 Func
	GetCategory(var_58_int); // 0x4b9 ObjFunc
	SetDiarySection(var_58_int); // 0x4bb Func
	var_50_bool = 0; // 0x4bd MovB
	return 6; // 0x4be Return
}


func_937(var_90_int, var_91_int)
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x3a9 PushV
	CreateIntVector(var_93_object); // 0x3aa Func
	add(var_90_int); // 0x3ac ObjFunc
	add(var_91_int); // 0x3ae ObjFunc
	var_94_int = 3; // 0x3b0 PushI
	SendWorldWndMessage(var_94_int, var_93_object); // 0x3b1 Func
	return 2; // 0x3b3 Return
}


func_1069()
{
	var_113_string = "ood1GorbunLaska2"; // 0x42e PushS
	var_114_int = 1; // 0x42f PushI
	SetVariable(var_113_string, var_114_int); // 0x430 Func
	return 0; // 0x432 Return
}


func_174(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0xaf PushV
	func_988(var_96_bool); // 0xb0 NEW_2
	var_97_bool = var_96_bool == 0; // 0xb2 Not
	if(var_97_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_98_bool = var_95_string == var_2_object; // 0xb5 Eq
	if(var_98_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_99_string = ""; var_100_bool = 0; // 0xb8 PushV
	var_99_string = var_95_string; // 0xb9 Mov
	var_101_string = ""; // 0xba PushS
	var_102_bool = var_95_string == var_101_string; // 0xbb Eq
	if(var_102_bool == 0) goto Label_191; // 0xbc JumpB
	var_100_bool = 0; // 0xbd MovB
	goto Label_192; // 0xbe Jump
	
Label_192:
	func_883(var_99_string, var_100_bool); // 0xc0 NEW_2
	var_2_object = var_95_string; // 0xc2 TMov
	return 0; // 0xc3 Return
	
Label_191:
	var_100_bool = 1; // 0xbf MovB
}


func_1075()
{
	var_26_string = "playsound"; // 0x434 PushS
	var_27_string = "givemoney"; // 0x435 PushS
	TriggerWorld(var_26_string, var_27_string); // 0x436 Func
	return 0; // 0x438 Return
}


func_949(var_77_object, var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x3b5 PushV
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; // 0x3b6 PushV
	var_81_object = var_77_object; // 0x3b7 Mov
	var_82_string = "money"; // 0x3b8 MovS
	var_83_int = var_78_int; // 0x3b9 Mov
	func_768(var_82_string, var_83_int); // 0x3ba NEW_2
	var_87_int = 0; // 0x3bc PushI
	var_88_bool = var_78_int > var_87_int; // 0x3bd GT
	if(var_88_bool == 0) goto Label_967; // 0x3be JumpB
	var_89_string = "Money"; // 0x3bf PushS
	GetInvItemByName(var_80_int, var_89_string); // 0x3c0 Func
	var_90_int = 0; var_91_int = 0; // 0x3c2 PushV
	var_90_int = var_80_int; // 0x3c3 Mov
	var_91_int = var_78_int; // 0x3c4 Mov
	func_937(var_90_int, var_91_int); // 0x3c5 NEW_2
	
Label_967:
	return 2; // 0x3c7 Return
}


func_1081(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x43a PushV
	var_136_object = var_134_object; // 0x43b Mov
	func_1139(var_136_object); // 0x43c NEW_2
	if(var_135_bool == 0) goto Label_1089; // 0x43e JumpB
	var_133_bool = 1; // 0x43f MovB
	return 0; // 0x440 Return
	
Label_1089:
	var_133_bool = 0; // 0x441 MovB
	return 0; // 0x442 Return
}


func_1217(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x4c1 PushV
	GetMainOutdoorScene(var_37_object); // 0x4c2 Func
	var_39_bool = var_37_object == 0; // 0x4c4 NullEq
	if(var_39_bool == 0) goto Label_1228; // 0x4c5 JumpB
	var_40_string = "Can't find main outdoor scene"; // 0x4c6 PushS
	Trace(var_40_string); // 0x4c7 Func
	var_38_object = 0; // 0x4c9 SetNull
	var_34_object = var_38_object; // 0x4ca Mov
	return 4; // 0x4cb Return
	
Label_1228:
	GetMap(var_38_object); // 0x4cc ObjFunc
	var_34_object = var_38_object; // 0x4ce Mov
	return 4; // 0x4cf Return
}


func_1091(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x444 PushV
	var_125_string = "ood1GorbunLaska1"; // 0x445 MovS
	func_932(var_124_int, var_125_string); // 0x446 NEW_2
	var_126_int = 0; // 0x448 PushI
	var_127_bool = var_124_int == var_126_int; // 0x449 Eq
	if(var_127_bool == 0) goto Label_1101; // 0x44a JumpB
	var_122_bool = 1; // 0x44b MovB
	return 0; // 0x44c Return
	
Label_1101:
	var_122_bool = 0; // 0x44d MovB
	return 0; // 0x44e Return
}


func_968(var_68_bool, var_69_string, var_70_string)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x3c8 PushV
	FindActor(var_72_object, var_69_string); // 0x3c9 Func
	var_73_bool = var_72_object == 0; // 0x3cb NullEq
	if(var_73_bool == 0) goto Label_975; // 0x3cc JumpB
	var_68_bool = 0; // 0x3cd MovB
	return 2; // 0x3ce Return
	
Label_975:
	Trigger(var_72_object, var_70_string); // 0x3cf Func
	var_68_bool = 1; // 0x3d1 MovB
	return 2; // 0x3d2 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_144; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_174(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 532716; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; // 0x59 PushV
	var_113_bool = 0; // 0x5a MovB
	var_114_bool = 0; var_115_object = Obj(); // 0x5b PushV
	var_115_object = var_1_object; // 0x5c MovT
	func_1127(var_115_object); // 0x5d NEW_2
	if(var_114_bool == 0) goto Label_102; // 0x5f JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x60 PushV
	var_123_object = var_1_object; // 0x61 MovT
	func_1091(var_123_object); // 0x62 NEW_2
	if(var_122_bool == 0) goto Label_102; // 0x64 JumpB
	var_113_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_113_bool == 0) goto Label_108; // 0x66 JumpB
	var_128_int = 532717; // 0x67 PushI
	var_129_int = 34571; // 0x68 PushI
	var_130_int = 34192; // 0x69 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6a TObjFunc
	
Label_108:
	var_131_bool = 0; // 0x6c PushV
	var_131_bool = 0; // 0x6d MovB
	var_132_bool = 0; // 0x6e PushV
	var_132_bool = 0; // 0x6f MovB
	var_133_bool = 0; var_134_object = Obj(); // 0x70 PushV
	var_134_object = var_1_object; // 0x71 MovT
	func_1081(var_133_bool, var_134_object); // 0x72 NEW_2
	if(var_133_bool == 0) goto Label_123; // 0x74 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x75 PushV
	var_143_object = var_1_object; // 0x76 MovT
	func_1103(var_143_object); // 0x77 NEW_2
	if(var_142_bool == 0) goto Label_123; // 0x79 JumpB
	var_132_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_132_bool == 0) goto Label_130; // 0x7b JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x7c PushV
	var_149_object = var_1_object; // 0x7d MovT
	func_1115(var_149_object); // 0x7e NEW_2
	if(var_148_bool == 0) goto Label_130; // 0x80 JumpB
	var_131_bool = 1; // 0x81 MovB
	
Label_130:
	if(var_131_bool == 0) goto Label_136; // 0x82 JumpB
	var_154_int = 532721; // 0x83 PushI
	var_155_int = 34197; // 0x84 PushI
	var_156_int = 34196; // 0x85 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x86 TObjFunc
	
Label_136:
	var_157_int = 532724; // 0x88 PushI
	var_158_int = -1; // 0x89 PushI
	var_159_int = 34199; // 0x8a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x8b TObjFunc
	goto Label_144; // 0x8d Jump
	
Label_144:
	var_160_bool = 0; // 0x90 PushV
	func_988(var_160_bool); // 0x91 NEW_2
	if(var_160_bool == 0) goto Label_159; // 0x93 JumpB
	
Label_148:
	lshWaitForAnimEnd(); // 0x94 Func
	var_161_string = var_3_string; // 0x96 PushT
	if(var_161_string == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_158:
	goto Label_173; // 0x9e Jump
	
Label_173:
	return 0; // 0xad Return
	
Label_153:
	var_162_string = ""; // 0x99 PushV
	var_162_string = var_2_object; // 0x9a MovT
	func_867(var_162_string); // 0x9b NEW_2
	goto Label_148; // 0x9d Jump
	
Label_159:
	var_173_string = "all"; // 0x9f PushS
	var_174_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_173_string, var_174_string); // 0xa1 Func
	
Label_163:
	WaitForAnimEnd(); // 0xa3 Func
	var_175_string = var_3_string; // 0xa5 PushT
	if(var_175_string == 0) goto Label_168; // 0xa6 JumpB
	goto Label_173; // 0xa7 Jump
	
Label_168:
	var_176_string = "all"; // 0xa8 PushS
	var_177_string = "idle"; // 0xa9 PushS
	PlayAnimation(var_176_string, var_177_string); // 0xaa Func
	goto Label_163; // 0xac Jump
}


func_1103(var_142_bool)
{
	var_144_int = 0; var_145_string = ""; // 0x450 PushV
	var_145_string = "ood1GorbunLaska2"; // 0x451 MovS
	func_932(var_144_int, var_145_string); // 0x452 NEW_2
	var_146_int = 0; // 0x454 PushI
	var_147_bool = var_144_int == var_146_int; // 0x455 Eq
	if(var_147_bool == 0) goto Label_1113; // 0x456 JumpB
	var_142_bool = 1; // 0x457 MovB
	return 0; // 0x458 Return
	
Label_1113:
	var_142_bool = 0; // 0x459 MovB
	return 0; // 0x45a Return
}


func_849()
{
	var_180_bool = 0; var_181_bool = 0; // 0x351 PushV
	var_182_bool = 1; // 0x352 PushB
	CameraSwitchToNormal(var_182_bool); // 0x353 Func
	var_183_bool = 0; // 0x355 PushV
	func_988(var_183_bool); // 0x356 NEW_2
	if(var_183_bool == 0) goto Label_858; // 0x358 JumpB
	goto Label_866; // 0x359 Jump
	
Label_866:
	return 2; // 0x362 Return
	
Label_858:
	var_184_string = "head"; // 0x35a PushS
	HasAnimationTrack(var_181_bool, var_184_string); // 0x35b Func
	var_185_bool = var_181_bool; // 0x35d Push
	if(var_185_bool == 0) goto Label_866; // 0x35e JumpB
	var_186_string = "head"; // 0x35f PushS
	UnlookAsync(var_186_string); // 0x360 Func
}


func_1234(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x4d2 PushV
	var_82_string = "branch"; // 0x4d3 PushS
	GetVariable(var_82_string, var_81_int); // 0x4d4 Func
	var_83_int = 0; // 0x4d6 PushI
	var_84_bool = var_81_int == var_83_int; // 0x4d7 Eq
	if(var_84_bool == 0) goto Label_1244; // 0x4d8 JumpB
	var_79_int = 1; // 0x4d9 MovI
	return 2; // 0x4da Return
	
Label_1244:
	var_85_int = 1; // 0x4dc PushI
	var_86_bool = var_81_int == var_85_int; // 0x4dd Eq
	if(var_86_bool == 0) goto Label_1249; // 0x4de JumpB
	var_79_int = 2; // 0x4df MovI
	return 2; // 0x4e0 Return
	
Label_1249:
	var_79_int = 3; // 0x4e1 MovI
	return 2; // 0x4e2 Return
}


func_595(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x254 PushV
	func_775(var_23_bool); // 0x255 NEW_2
	var_26_bool = var_23_bool == 0; // 0x257 Not
	if(var_26_bool == 0) goto Label_602; // 0x258 JumpB
	return 0; // 0x259 Return
	
Label_602:
	var_27_string = "player"; // 0x25a PushS
	FindActor(var_17_bool, var_27_string); // 0x25b Func
	var_2_object = 0; // 0x25d TMovB
	var_3_string = 0; // 0x25e TMovB
	var_0_object = var_21_float; // 0x25f TMov
	var_1_object = var_22_float; // 0x260 TMov
	var_28_int = 10; // 0x261 PushI
	var_29_float = 1.0; // 0x262 PushF
	SetTimer(var_28_int, var_29_float); // 0x263 Func
	func_674(); // 0x266 NEW_2
	var_81_bool = var_3_string == 0; // 0x268 Not
	if(var_81_bool == 0) goto Label_621; // 0x269 JumpB
	var_82_int = 10; // 0x26a PushI
	KillTimer(var_82_int); // 0x26b Func
	
Label_621:
	return 0; // 0x26d Return
}


func_980(var_76_int)
{
	var_76_int = 515594; // 0x3d4 MovI
	return 0; // 0x3d5 Return
}


func_593(var_18_bool)
{
	var_18_bool = 1; // 0x251 MovB
	return 0; // 0x252 Return
}


func_982(var_75_int)
{
	var_75_int = 512583; // 0x3d6 MovI
	return 0; // 0x3d7 Return
}


func_984(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x3d8 MovS
	return 0; // 0x3d9 Return
}


func_986(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x3da MovS
	return 0; // 0x3db Return
}


func_1115(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x45c PushV
	var_151_string = "d1q02"; // 0x45d MovS
	func_932(var_150_int, var_151_string); // 0x45e NEW_2
	var_152_int = 4; // 0x460 PushI
	var_153_bool = var_150_int == var_152_int; // 0x461 Eq
	if(var_153_bool == 0) goto Label_1125; // 0x462 JumpB
	var_148_bool = 1; // 0x463 MovB
	return 0; // 0x464 Return
	
Label_1125:
	var_148_bool = 0; // 0x465 MovB
	return 0; // 0x466 Return
}


func_988(var_70_bool)
{
	var_70_bool = 0; // 0x3dc MovB
	return 0; // 0x3dd Return
}


func_990(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3de PushV
	var_55_string = "idle"; // 0x3df MovS
	var_56_int = var_53_int; // 0x3e0 Push
	if(var_56_int == 0) goto Label_995; // 0x3e1 JumpB
	var_55_string = var_55_string + var_53_int; // 0x3e2 Add2
	
Label_995:
	var_52_string = var_55_string; // 0x3e3 Mov
	return 2; // 0x3e4 Return
}


func_867(var_162_string)
{
	var_163_bool = 0; var_164_float = 0; var_165_float = 0; var_166_bool = 0; var_167_float = 0; var_168_float = 0; // 0x363 PushV
	lshHasAnimation(var_166_bool, var_162_string); // 0x364 Func
	var_169_bool = var_166_bool; // 0x366 Push
	if(var_169_bool == 0) goto Label_878; // 0x367 JumpB
	lshGetAnimTimes(var_162_string, var_167_float, var_168_float); // 0x368 Func
	var_170_bool = 0; // 0x36a PushB
	lshPlayAnimation(var_167_float, var_168_float, var_170_bool); // 0x36b Func
	goto Label_882; // 0x36d Jump
	
Label_882:
	return 6; // 0x372 Return
	
Label_878:
	var_171_string = "Can't find lsh animation : "; // 0x36e PushS
	var_172_int = var_171_string + var_162_string; // 0x36f Add
	Trace(var_172_int); // 0x370 Func
}


func_997(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x3e5 PushV
	var_49_int = 0; // 0x3e6 MovI
	
Label_999:
	var_51_string = "all"; // 0x3e7 PushS
	var_52_string = ""; var_53_int = 0; // 0x3e8 PushV
	var_53_int = var_49_int; // 0x3e9 Mov
	func_990(var_52_string, var_53_int); // 0x3ea NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x3ec Func
	var_57_bool = var_50_bool == 0; // 0x3ee Not
	if(var_57_bool == 0) goto Label_1009; // 0x3ef JumpB
	goto Label_1012; // 0x3f0 Jump
	
Label_1012:
	var_46_int = var_49_int; // 0x3f4 Mov
	return 4; // 0x3f5 Return
	
Label_1009:
	var_58_int = 1; // 0x3f1 PushI
	var_49_int = var_49_int + var_58_int; // 0x3f2 Add2
	goto Label_999; // 0x3f3 Jump
}


func_1127(var_114_bool)
{
	var_116_int = 0; var_117_string = ""; // 0x468 PushV
	var_117_string = "d1q02"; // 0x469 MovS
	func_932(var_116_int, var_117_string); // 0x46a NEW_2
	var_120_int = 2; // 0x46c PushI
	var_121_bool = var_116_int == var_120_int; // 0x46d Eq
	if(var_121_bool == 0) goto Label_1137; // 0x46e JumpB
	var_114_bool = 1; // 0x46f MovB
	return 0; // 0x470 Return
	
Label_1137:
	var_114_bool = 0; // 0x471 MovB
	return 0; // 0x472 Return
}


func_622(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x26e PushV
	var_18_bool = var_4_bool == 0; // 0x26f NullEq
	if(var_18_bool == 0) goto Label_627; // 0x270 JumpB
	var_15_bool = 0; // 0x271 MovB
	return 2; // 0x272 Return
	
Label_627:
	var_19_float = 0; var_20_object = Obj(); // 0x273 PushV
	var_20_object = var_4_bool; // 0x274 MovT
	func_760(var_20_object); // 0x275 NEW_2
	var_17_float = sqrt(var_19_float); // 0x277 Sqrt2
	var_27_object = var_2_object; // 0x278 PushT
	if(var_27_object == 0) goto Label_635; // 0x279 JumpB
	var_17_float = var_17_float - var_1_object; // 0x27a Sub2
	
Label_635:
	var_15_bool = var_17_float < var_0_object; // 0x27b LT2
	return 2; // 0x27c Return
}


func_753(var_71_bool)
{
	var_71_bool = 1; // 0x2f1 MovB
	return 0; // 0x2f2 Return
}


func_883(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x373 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x374 Func
	var_109_bool = var_106_bool; // 0x376 Push
	if(var_109_bool == 0) goto Label_893; // 0x377 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x378 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x37a Func
	goto Label_897; // 0x37c Jump
	
Label_897:
	return 6; // 0x381 Return
	
Label_893:
	var_110_string = "Can't find lsh animation : "; // 0x37d PushS
	var_111_int = var_110_string + var_99_string; // 0x37e Add
	Trace(var_111_int); // 0x37f Func
}


func_755()
{
	StopAnimation(); // 0x2f3 Func
	StopGroup0(); // 0x2f5 Func
	return 0; // 0x2f7 Return
}


func_1139(var_135_bool)
{
	var_137_float = 0; var_138_float = 0; // 0x473 PushV
	var_139_string = "money"; // 0x474 PushS
	GetProperty(var_139_string, var_138_float); // 0x475 ObjFunc
	var_140_int = 2000; // 0x477 PushI
	var_141_bool = var_138_float >= var_140_int; // 0x478 GE
	if(var_141_bool == 0) goto Label_1148; // 0x479 JumpB
	var_135_bool = 1; // 0x47a MovB
	return 2; // 0x47b Return
	
Label_1148:
	var_135_bool = 0; // 0x47c MovB
	return 2; // 0x47d Return
}


func_1014()
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x3f6 PushV
	var_34_object = Obj(); // 0x3f7 PushV
	func_1217(var_34_object); // 0x3f8 NEW_2
	var_32_object = var_34_object; // 0x3f9 Mov
	var_41_string = "d1q02AnnaGotoLaska"; // 0x3fb PushS
	FindMark(var_33_object, var_41_string); // 0x3fc ObjFunc
	var_42_object = var_33_object; // 0x3fe Push
	if(var_42_object == 0) goto Label_1026; // 0x3ff JumpB
	Remove(); // 0x400 ObjFunc
	
Label_1026:
	var_43_string = "d1q02JuliaGotoAnna"; // 0x402 PushS
	FindMark(var_33_object, var_43_string); // 0x403 ObjFunc
	var_44_object = var_33_object; // 0x405 Push
	if(var_44_object == 0) goto Label_1033; // 0x406 JumpB
	Remove(); // 0x407 ObjFunc
	
Label_1033:
	func_1150(); // 0x40a NEW_2
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x40c PushV
	var_69_string = "quest_d1_02"; // 0x40d MovS
	var_70_string = "completed"; // 0x40e MovS
	func_968(var_68_bool, var_69_string, var_70_string); // 0x40f NEW_2
	return 4; // 0x411 Return
}


func_760(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2f8 PushV
	GetPosition(var_24_cvector); // 0x2f9 Func
	GetPosition(var_25_cvector); // 0x2fb ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2fd Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2fe Or2
	return 6; // 0x2ff Return
}


func_1150()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x47e PushV
	var_47_int = 36; // 0x47f PushI
	var_48_int = 2; // 0x480 PushI
	var_49_int = 512118; // 0x481 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0x482 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x484 PushV
	var_51_object = var_46_object; // 0x485 Mov
	var_52_int = 7; // 0x486 MovI
	func_1189(var_50_bool, var_51_object, var_52_int); // 0x487 NEW_2
	return 2; // 0x489 Return
}


