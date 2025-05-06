task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xca PushI
	if(var_8_int == 0) goto Label_522; // 0xcb JumpB
	func_667(); // 0xcd Call
	var_10_int = 13729; // 0xcf PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd0 Eq
	if(var_11_bool == 0) goto Label_225; // 0xd1 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd2 PushV
	var_12_object = var_1_object; // 0xd3 MovT
	var_13_object = var_0_object; // 0xd4 MovT
	func_741(); // 0xd5 Call
	var_63_object = Obj(); var_64_object = Obj(); // 0xd7 PushV
	var_63_object = var_1_object; // 0xd8 MovT
	var_64_object = var_0_object; // 0xd9 MovT
	func_724(); // 0xda Call
	var_73_object = Obj(); var_74_object = Obj(); // 0xdc PushV
	var_73_object = var_1_object; // 0xdd MovT
	var_74_object = var_0_object; // 0xde MovT
	func_712(); // 0xdf Call
	
Label_225:
	var_77_int = 13730; // 0xe1 PushI
	var_78_bool = var_7_bool == var_77_int; // 0xe2 Eq
	if(var_78_bool == 0) goto Label_233; // 0xe3 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xe4 PushV
	var_79_object = var_1_object; // 0xe5 MovT
	var_80_object = var_0_object; // 0xe6 MovT
	func_797(); // 0xe7 Call
	
Label_233:
	var_112_int = 13735; // 0xe9 PushI
	var_113_bool = var_7_bool == var_112_int; // 0xea Eq
	if(var_113_bool == 0) goto Label_251; // 0xeb JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0xec PushV
	var_114_object = var_1_object; // 0xed MovT
	var_115_object = var_0_object; // 0xee MovT
	func_724(); // 0xef Call
	var_116_object = Obj(); var_117_object = Obj(); // 0xf1 PushV
	var_116_object = var_1_object; // 0xf2 MovT
	var_117_object = var_0_object; // 0xf3 MovT
	func_712(); // 0xf4 Call
	var_118_object = Obj(); var_119_object = Obj(); // 0xf6 PushV
	var_118_object = var_1_object; // 0xf7 MovT
	var_119_object = var_0_object; // 0xf8 MovT
	func_741(); // 0xf9 Call
	
Label_251:
	var_120_int = 13738; // 0xfb PushI
	var_121_bool = var_7_bool == var_120_int; // 0xfc Eq
	if(var_121_bool == 0) goto Label_259; // 0xfd JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0xfe PushV
	var_122_object = var_1_object; // 0xff MovT
	var_123_object = var_0_object; // 0x100 MovT
	func_718(); // 0x101 Call
	
Label_259:
	var_126_int = 13720; // 0x103 PushI
	var_127_bool = var_6_int == var_126_int; // 0x104 Eq
	if(var_127_bool == 0) goto Label_346; // 0x105 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x106 PushV
	var_129_object = var_1_object; // 0x107 MovT
	func_860(var_129_object); // 0x108 Call
	if(var_128_bool == 0) goto Label_282; // 0x10a JumpB
	var_136_string = ""; // 0x10b PushV
	var_136_string = "Neutral"; // 0x10c MovS
	func_185(var_7_bool, var_136_string); // 0x10d Call
	var_151_int = 12551; // 0x10f PushI
	SetMessage(var_151_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_152_int = 12552; // 0x114 PushI
	var_153_int = 13722; // 0x115 PushI
	var_154_int = 13721; // 0x116 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_155_string = ""; // 0x11a PushV
	var_155_string = "Neutral"; // 0x11b MovS
	func_185(var_7_bool, var_155_string); // 0x11c Call
	var_156_int = 12562; // 0x11e PushI
	SetMessage(var_156_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_157_bool = 0; // 0x123 PushV
	var_157_bool = 0; // 0x124 MovB
	var_158_bool = 0; var_159_object = Obj(); // 0x125 PushV
	var_159_object = var_1_object; // 0x126 MovT
	func_838(var_158_bool, var_159_object); // 0x127 Call
	if(var_158_bool == 0) goto Label_304; // 0x129 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x12a PushV
	var_168_object = var_1_object; // 0x12b MovT
	func_896(var_168_object); // 0x12c Call
	if(var_167_bool == 0) goto Label_304; // 0x12e JumpB
	var_157_bool = 1; // 0x12f MovB
	
Label_304:
	if(var_157_bool == 0) goto Label_310; // 0x130 JumpB
	var_173_int = 12563; // 0x131 PushI
	var_174_int = 13734; // 0x132 PushI
	var_175_int = 13732; // 0x133 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x134 TObjFunc
	
Label_310:
	var_176_bool = 0; // 0x136 PushV
	var_176_bool = 0; // 0x137 MovB
	var_177_bool = 0; // 0x138 PushV
	var_177_bool = 0; // 0x139 MovB
	var_178_bool = 0; var_179_object = Obj(); // 0x13a PushV
	var_179_object = var_1_object; // 0x13b MovT
	func_848(var_179_object); // 0x13c Call
	if(var_178_bool == 0) goto Label_326; // 0x13e JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x13f PushV
	var_185_object = var_1_object; // 0x140 MovT
	func_872(var_185_object); // 0x141 Call
	var_190_bool = var_184_bool == 0; // 0x143 Not
	if(var_190_bool == 0) goto Label_326; // 0x144 JumpB
	var_177_bool = 1; // 0x145 MovB
	
Label_326:
	if(var_177_bool == 0) goto Label_334; // 0x146 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x147 PushV
	var_192_object = var_1_object; // 0x148 MovT
	func_884(var_192_object); // 0x149 Call
	var_197_bool = var_191_bool == 0; // 0x14b Not
	if(var_197_bool == 0) goto Label_334; // 0x14c JumpB
	var_176_bool = 1; // 0x14d MovB
	
Label_334:
	if(var_176_bool == 0) goto Label_340; // 0x14e JumpB
	var_198_int = 12567; // 0x14f PushI
	var_199_int = 13737; // 0x150 PushI
	var_200_int = 13736; // 0x151 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x152 TObjFunc
	
Label_340:
	var_201_int = 12564; // 0x154 PushI
	var_202_int = -1; // 0x155 PushI
	var_203_int = 13733; // 0x156 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_204_int = 13737; // 0x15a PushI
	var_205_bool = var_6_int == var_204_int; // 0x15b Eq
	if(var_205_bool == 0) goto Label_364; // 0x15c JumpB
	var_206_string = ""; // 0x15d PushV
	var_206_string = "Neutral"; // 0x15e MovS
	func_185(var_7_bool, var_206_string); // 0x15f Call
	var_207_int = 12568; // 0x161 PushI
	SetMessage(var_207_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_208_int = 12609; // 0x166 PushI
	var_209_int = 13785; // 0x167 PushI
	var_210_int = 13784; // 0x168 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_211_int = 13785; // 0x16c PushI
	var_212_bool = var_6_int == var_211_int; // 0x16d Eq
	if(var_212_bool == 0) goto Label_382; // 0x16e JumpB
	var_213_string = ""; // 0x16f PushV
	var_213_string = "Neutral"; // 0x170 MovS
	func_185(var_7_bool, var_213_string); // 0x171 Call
	var_214_int = 12610; // 0x173 PushI
	SetMessage(var_214_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_215_int = 12569; // 0x178 PushI
	var_216_int = -1; // 0x179 PushI
	var_217_int = 13738; // 0x17a PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x17b TObjFunc
	return 0; // 0x17d Return
	
Label_382:
	var_218_int = 13734; // 0x17e PushI
	var_219_bool = var_6_int == var_218_int; // 0x17f Eq
	if(var_219_bool == 0) goto Label_400; // 0x180 JumpB
	var_220_string = ""; // 0x181 PushV
	var_220_string = "Neutral"; // 0x182 MovS
	func_185(var_7_bool, var_220_string); // 0x183 Call
	var_221_int = 12565; // 0x185 PushI
	SetMessage(var_221_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_222_int = 12566; // 0x18a PushI
	var_223_int = -1; // 0x18b PushI
	var_224_int = 13735; // 0x18c PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x18d TObjFunc
	return 0; // 0x18f Return
	
Label_400:
	var_225_int = 13722; // 0x190 PushI
	var_226_bool = var_6_int == var_225_int; // 0x191 Eq
	if(var_226_bool == 0) goto Label_423; // 0x192 JumpB
	var_227_string = ""; // 0x193 PushV
	var_227_string = "Neutral"; // 0x194 MovS
	func_185(var_7_bool, var_227_string); // 0x195 Call
	var_228_int = 12553; // 0x197 PushI
	SetMessage(var_228_int); // 0x198 TObjFunc
	ClearReplies(); // 0x19a TObjFunc
	var_229_int = 12554; // 0x19c PushI
	var_230_int = 13724; // 0x19d PushI
	var_231_int = 13723; // 0x19e PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x19f TObjFunc
	var_232_int = 12604; // 0x1a1 PushI
	var_233_int = 13778; // 0x1a2 PushI
	var_234_int = 13777; // 0x1a3 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_235_int = 13778; // 0x1a7 PushI
	var_236_bool = var_6_int == var_235_int; // 0x1a8 Eq
	if(var_236_bool == 0) goto Label_441; // 0x1a9 JumpB
	var_237_string = ""; // 0x1aa PushV
	var_237_string = "Neutral"; // 0x1ab MovS
	func_185(var_7_bool, var_237_string); // 0x1ac Call
	var_238_int = 12605; // 0x1ae PushI
	SetMessage(var_238_int); // 0x1af TObjFunc
	ClearReplies(); // 0x1b1 TObjFunc
	var_239_int = 12606; // 0x1b3 PushI
	var_240_int = 13724; // 0x1b4 PushI
	var_241_int = 13779; // 0x1b5 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_242_int = 13724; // 0x1b9 PushI
	var_243_bool = var_6_int == var_242_int; // 0x1ba Eq
	if(var_243_bool == 0) goto Label_464; // 0x1bb JumpB
	var_244_string = ""; // 0x1bc PushV
	var_244_string = "Neutral"; // 0x1bd MovS
	func_185(var_7_bool, var_244_string); // 0x1be Call
	var_245_int = 12555; // 0x1c0 PushI
	SetMessage(var_245_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_246_int = 12556; // 0x1c5 PushI
	var_247_int = 13726; // 0x1c6 PushI
	var_248_int = 13725; // 0x1c7 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x1c8 TObjFunc
	var_249_int = 12607; // 0x1ca PushI
	var_250_int = 13726; // 0x1cb PushI
	var_251_int = 13781; // 0x1cc PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1cd TObjFunc
	return 0; // 0x1cf Return
	
Label_464:
	var_252_int = 13726; // 0x1d0 PushI
	var_253_bool = var_6_int == var_252_int; // 0x1d1 Eq
	if(var_253_bool == 0) goto Label_482; // 0x1d2 JumpB
	var_254_string = ""; // 0x1d3 PushV
	var_254_string = "Neutral"; // 0x1d4 MovS
	func_185(var_7_bool, var_254_string); // 0x1d5 Call
	var_255_int = 12557; // 0x1d7 PushI
	SetMessage(var_255_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_256_int = 12558; // 0x1dc PushI
	var_257_int = 13728; // 0x1dd PushI
	var_258_int = 13727; // 0x1de PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_259_int = 13728; // 0x1e2 PushI
	var_260_bool = var_6_int == var_259_int; // 0x1e3 Eq
	if(var_260_bool == 0) goto Label_510; // 0x1e4 JumpB
	var_261_string = ""; // 0x1e5 PushV
	var_261_string = "Neutral"; // 0x1e6 MovS
	func_185(var_7_bool, var_261_string); // 0x1e7 Call
	var_262_int = 12559; // 0x1e9 PushI
	SetMessage(var_262_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_263_bool = 0; var_264_object = Obj(); // 0x1ee PushV
	var_264_object = var_1_object; // 0x1ef MovT
	func_838(var_263_bool, var_264_object); // 0x1f0 Call
	if(var_263_bool == 0) goto Label_504; // 0x1f2 JumpB
	var_265_int = 12560; // 0x1f3 PushI
	var_266_int = -1; // 0x1f4 PushI
	var_267_int = 13729; // 0x1f5 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x1f6 TObjFunc
	
Label_504:
	var_268_int = 12561; // 0x1f8 PushI
	var_269_int = -1; // 0x1f9 PushI
	var_270_int = 13730; // 0x1fa PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1fb TObjFunc
	return 0; // 0x1fd Return
	
Label_510:
	var_3_string = 1; // 0x1fe TMovB
	var_271_bool = 0; // 0x1ff PushV
	func_1031(var_271_bool); // 0x200 Call
	if(var_271_bool == 0) goto Label_518; // 0x202 JumpB
	lshStopAnimation(); // 0x203 Func
	goto Label_520; // 0x205 Jump
	
Label_520:
	return 0; // 0x208 Return
	
Label_518:
	StopAnimation(); // 0x206 Func
	
Label_522:
	return 0; // 0x20a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x20c PushV
	var_8_object = var_6_object; // 0x20d Mov
	TaskCall(0); // 0x20e TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x20f Call
	TaskReturn(); // 0x210 TaskReturn
	var_163_int = 1; // 0x212 PushI
	var_164_bool = var_9_object == var_163_int; // 0x213 Eq
	if(var_164_bool == 0) goto Label_538; // 0x214 JumpB
	var_165_bool = 0; var_166_string = ""; var_167_string = ""; // 0x215 PushV
	var_166_string = "quest_d5_03"; // 0x216 MovS
	var_167_string = "completed"; // 0x217 MovS
	func_695(var_165_bool, var_166_string, var_167_string); // 0x218 Call
	
Label_538:
	return 0; // 0x21a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x21f PushV
	var_9_string = "cleanup"; // 0x220 PushS
	var_10_bool = var_6_string == var_9_string; // 0x221 Eq
	if(var_10_bool == 0) goto Label_566; // 0x222 JumpB
	var_0_object = 1; // 0x223 TMovB
	IsLoaded(var_8_bool); // 0x224 Func
	var_11_bool = 0; // 0x226 PushV
	var_11_bool = 0; // 0x227 MovB
	var_12_bool = var_8_bool == 0; // 0x228 Not
	if(var_12_bool == 0) goto Label_559; // 0x229 JumpB
	var_13_bool = 0; // 0x22a PushV
	func_587(var_13_bool); // 0x22b Call
	if(var_13_bool == 0) goto Label_559; // 0x22d JumpB
	var_11_bool = 1; // 0x22e MovB
	
Label_559:
	if(var_11_bool == 0) goto Label_565; // 0x22f JumpB
	var_14_object = Obj(); // 0x230 PushV
	func_674(var_14_object); // 0x231 Call
	RemoveActor(var_14_object); // 0x233 Func
	
Label_565:
	goto Label_570; // 0x235 Jump
	
Label_570:
	return 2; // 0x23a Return
	
Label_566:
	var_17_string = "restore"; // 0x236 PushS
	var_18_bool = var_6_string == var_17_string; // 0x237 Eq
	if(var_18_bool == 0) goto Label_570; // 0x238 JumpB
	var_0_object = 0; // 0x239 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x23b PushV
	var_6_bool = 0; // 0x23c MovB
	var_7_object = var_0_object; // 0x23d PushT
	if(var_7_object == 0) goto Label_580; // 0x23e JumpB
	var_8_bool = 0; // 0x23f PushV
	func_587(var_8_bool); // 0x240 Call
	if(var_8_bool == 0) goto Label_580; // 0x242 JumpB
	var_6_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_6_bool == 0) goto Label_586; // 0x244 JumpB
	var_9_object = Obj(); // 0x245 PushV
	func_674(var_9_object); // 0x246 Call
	RemoveActor(var_9_object); // 0x248 Func
	
Label_586:
	return 0; // 0x24a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_539:
	Hold(); // 0x21b Func
	goto Label_539; // 0x21d Jump
}


func_896(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x381 PushV
	var_127_string = "d5q03"; // 0x382 MovS
	func_690(var_126_int, var_127_string); // 0x383 Call
	var_128_int = 2; // 0x385 PushI
	var_129_bool = var_126_int == var_128_int; // 0x386 Eq
	if(var_129_bool == 0) goto Label_906; // 0x387 JumpB
	var_124_bool = 1; // 0x388 MovB
	return 0; // 0x389 Return
	
Label_906:
	var_124_bool = 0; // 0x38a MovB
	return 0; // 0x38b Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_589(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_1027(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_1029(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_978(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_161_bool = var_17_bool == 0; // 0x2d Not
	if(var_161_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_162_object = Obj(); // 0x34 PushV
	var_162_object = var_8_object; // 0x35 Mov
	func_645(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1027(var_59_int)
{
	var_59_int = 4029; // 0x403 MovI
	return 0; // 0x404 Return
}


func_1029(var_60_string)
{
	var_60_string = "ui/NPC_Black.png"; // 0x405 MovS
	return 0; // 0x406 Return
}


func_645()
{
	CameraSwitchToNormal(); // 0x286 Func
	return 0; // 0x288 Return
}


func_1031(var_86_bool)
{
	var_86_bool = 0; // 0x407 MovB
	return 0; // 0x408 Return
}


func_649(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0; // 0x289 PushV
	var_94_string = "playing "; // 0x28a PushS
	var_95_int = var_94_string + var_89_string; // 0x28b Add
	Trace(var_95_int); // 0x28c Func
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float); // 0x28e Func
	lshPlayAnimation(var_92_float, var_93_float); // 0x290 Func
	var_96_string = "start: "; // 0x292 PushS
	var_97_int = var_96_string + var_92_float; // 0x293 Add
	Trace(var_97_int); // 0x294 Func
	var_98_string = "end: "; // 0x296 PushS
	var_99_int = var_98_string + var_93_float; // 0x297 Add
	Trace(var_99_int); // 0x298 Func
	return 4; // 0x29a Return
}


func_908(var_117_bool)
{
	var_119_float = 0; var_120_float = 0; // 0x38c PushV
	var_121_string = "money"; // 0x38d PushS
	GetProperty(var_121_string, var_120_float); // 0x38e ObjFunc
	var_122_int = 50000; // 0x390 PushI
	var_123_bool = var_120_float >= var_122_int; // 0x391 GE
	if(var_123_bool == 0) goto Label_917; // 0x392 JumpB
	var_117_bool = 1; // 0x393 MovB
	return 2; // 0x394 Return
	
Label_917:
	var_117_bool = 0; // 0x395 MovB
	return 2; // 0x396 Return
}


func_919(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x397 PushV
	GetDiaryRoot(var_54_object); // 0x398 Func
	var_55_bool = var_54_object == 0; // 0x39a Not
	if(var_55_bool == 0) goto Label_929; // 0x39b JumpB
	var_56_string = "Can't retrieve diary root"; // 0x39c PushS
	Trace(var_56_string); // 0x39d Func
	var_52_object = 0; // 0x39f MovB
	return 2; // 0x3a0 Return
	
Label_929:
	var_52_object = var_54_object; // 0x3a1 Mov
	return 2; // 0x3a2 Return
}


func_667()
{
	var_9_bool = 0; // 0x29b PushV
	func_1031(var_9_bool); // 0x29c Call
	if(var_9_bool == 0) goto Label_673; // 0x29e JumpB
	lshStopSpeech(); // 0x29f Func
	
Label_673:
	return 0; // 0x2a1 Return
}


func_797()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x31d PushV
	var_83_string = "d5q03"; // 0x31e PushS
	var_84_int = 2; // 0x31f PushI
	SetVariable(var_83_string, var_84_int); // 0x320 Func
	var_85_object = Obj(); // 0x322 PushV
	func_961(var_85_object); // 0x323 Call
	var_82_object = var_85_object; // 0x324 Mov
	var_86_string = "d5q03BirdmaskBringMoneySelf"; // 0x326 PushS
	var_87_string = "pt_map_uprava_prison"; // 0x327 PushS
	var_88_int = 0; // 0x328 PushI
	var_89_int = 15372; // 0x329 PushI
	var_90_float = 0; // 0x32a PushV
	func_707(var_90_float); // 0x32b Call
	AddMark(var_86_string, var_87_string, var_88_int, var_89_int, var_90_float); // 0x32d ObjFunc
	var_93_string = "d5q03BirdmaskGotoMladVlad"; // 0x32f PushS
	var_94_string = "pt_map_mladvlad"; // 0x330 PushS
	var_95_int = 0; // 0x331 PushI
	var_96_int = 15374; // 0x332 PushI
	var_97_float = 0; // 0x333 PushV
	func_707(var_97_float); // 0x334 Call
	AddMark(var_93_string, var_94_string, var_95_int, var_96_int, var_97_float); // 0x336 ObjFunc
	var_98_string = "d5q03BirdmaskGotoViktor"; // 0x338 PushS
	var_99_string = "pt_map_viktor"; // 0x339 PushS
	var_100_int = 0; // 0x33a PushI
	var_101_int = 15373; // 0x33b PushI
	var_102_float = 0; // 0x33c PushV
	func_707(var_102_float); // 0x33d Call
	AddMark(var_98_string, var_99_string, var_100_int, var_101_int, var_102_float); // 0x33f ObjFunc
	func_995(); // 0x342 Call
	return 2; // 0x344 Return
}


func_674(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2a2 PushV
	self(var_11_object); // 0x2a3 Func
	var_9_object = var_11_object; // 0x2a5 Mov
	return 2; // 0x2a6 Return
}


func_932(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x3a4 PushV
	var_52_object = Obj(); // 0x3a5 PushV
	func_919(var_52_object); // 0x3a6 Call
	var_49_object = var_52_object; // 0x3a7 Mov
	Find(var_45_int, var_50_object); // 0x3a9 ObjFunc
	var_57_bool = var_50_object == 0; // 0x3ab Not
	if(var_57_bool == 0) goto Label_947; // 0x3ac JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x3ad PushS
	var_59_int = var_58_string + var_45_int; // 0x3ae Add
	Trace(var_59_int); // 0x3af Func
	var_43_bool = 0; // 0x3b1 MovB
	return 6; // 0x3b2 Return
	
Label_947:
	AddChild(var_44_object); // 0x3b3 ObjFunc
	var_60_string = "player_diary"; // 0x3b5 PushS
	var_61_int = 1; // 0x3b6 PushI
	SetVariable(var_60_string, var_61_int); // 0x3b7 Func
	GetCategory(var_51_int); // 0x3b9 ObjFunc
	SetDiarySection(var_51_int); // 0x3bb Func
	var_43_bool = 0; // 0x3bd MovB
	return 6; // 0x3be Return
}


func_680(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x2a8 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x2a9 Or
	var_47_float = sqrt(var_48_int); // 0x2aa Sqrt2
	var_49_float = 0.0; // 0x2ab PushF
	var_50_bool = var_47_float < var_49_float; // 0x2ac LT
	if(var_50_bool == 0) goto Label_688; // 0x2ad JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x2ae MovV
	return 2; // 0x2af Return
	
Label_688:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x2b0 Div2
	return 2; // 0x2b1 Return
}


func_690(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x2b2 PushV
	GetVariable(var_80_string, var_82_int); // 0x2b3 Func
	var_79_int = var_82_int; // 0x2b5 Mov
	return 2; // 0x2b6 Return
}


func_695(var_165_bool, var_166_string, var_167_string)
{
	var_168_object = Obj(); var_169_object = Obj(); // 0x2b7 PushV
	FindActor(var_169_object, var_166_string); // 0x2b8 Func
	var_170_bool = var_169_object == 0; // 0x2ba NullEq
	if(var_170_bool == 0) goto Label_702; // 0x2bb JumpB
	var_165_bool = 0; // 0x2bc MovB
	return 2; // 0x2bd Return
	
Label_702:
	Trigger(var_169_object, var_167_string); // 0x2be Func
	var_165_bool = 1; // 0x2c0 MovB
	return 2; // 0x2c1 Return
}


func_185(var_2_object, var_85_string)
{
	var_86_bool = 0; // 0xba PushV
	func_1031(var_86_bool); // 0xbb Call
	var_87_bool = var_86_bool == 0; // 0xbd Not
	if(var_87_bool == 0) goto Label_192; // 0xbe JumpB
	return 0; // 0xbf Return
	
Label_192:
	var_88_bool = var_85_string == var_2_object; // 0xc0 Eq
	if(var_88_bool == 0) goto Label_195; // 0xc1 JumpB
	return 0; // 0xc2 Return
	
Label_195:
	var_89_string = ""; // 0xc3 PushV
	var_89_string = var_85_string; // 0xc4 Mov
	func_649(var_89_string); // 0xc5 Call
	var_2_object = var_85_string; // 0xc7 TMov
	return 0; // 0xc8 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_155; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_860(var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_89; // 0x49 JumpB
	var_85_string = ""; // 0x4a PushV
	var_85_string = "Neutral"; // 0x4b MovS
	func_185(var_71_object, var_85_string); // 0x4c Call
	var_100_int = 12551; // 0x4e PushI
	SetMessage(var_100_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_101_int = 12552; // 0x53 PushI
	var_102_int = 13722; // 0x54 PushI
	var_103_int = 13721; // 0x55 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x56 TObjFunc
	goto Label_155; // 0x58 Jump
	
Label_155:
	var_104_bool = 0; // 0x9b PushV
	func_1031(var_104_bool); // 0x9c Call
	if(var_104_bool == 0) goto Label_170; // 0x9e JumpB
	
Label_159:
	lshWaitForAnimEnd(); // 0x9f Func
	var_105_string = var_3_string; // 0xa1 PushT
	if(var_105_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_169:
	goto Label_184; // 0xa9 Jump
	
Label_184:
	return 0; // 0xb8 Return
	
Label_164:
	var_106_string = ""; // 0xa4 PushV
	var_106_string = var_2_object; // 0xa5 MovT
	func_649(var_106_string); // 0xa6 Call
	goto Label_159; // 0xa8 Jump
	
Label_170:
	var_107_string = "all"; // 0xaa PushS
	var_108_string = "idle"; // 0xab PushS
	PlayAnimation(var_107_string, var_108_string); // 0xac Func
	
Label_174:
	WaitForAnimEnd(); // 0xae Func
	var_109_string = var_3_string; // 0xb0 PushT
	if(var_109_string == 0) goto Label_179; // 0xb1 JumpB
	goto Label_184; // 0xb2 Jump
	
Label_179:
	var_110_string = "all"; // 0xb3 PushS
	var_111_string = "idle"; // 0xb4 PushS
	PlayAnimation(var_110_string, var_111_string); // 0xb5 Func
	goto Label_174; // 0xb7 Jump
	
Label_89:
	var_112_string = ""; // 0x59 PushV
	var_112_string = "Neutral"; // 0x5a MovS
	func_185(var_71_object, var_112_string); // 0x5b Call
	var_113_int = 12562; // 0x5d PushI
	SetMessage(var_113_int); // 0x5e TObjFunc
	ClearReplies(); // 0x60 TObjFunc
	var_114_bool = 0; // 0x62 PushV
	var_114_bool = 0; // 0x63 MovB
	var_115_bool = 0; var_116_object = Obj(); // 0x64 PushV
	var_116_object = var_1_object; // 0x65 MovT
	func_838(var_115_bool, var_116_object); // 0x66 Call
	if(var_115_bool == 0) goto Label_111; // 0x68 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x69 PushV
	var_125_object = var_1_object; // 0x6a MovT
	func_896(var_125_object); // 0x6b Call
	if(var_124_bool == 0) goto Label_111; // 0x6d JumpB
	var_114_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_114_bool == 0) goto Label_117; // 0x6f JumpB
	var_130_int = 12563; // 0x70 PushI
	var_131_int = 13734; // 0x71 PushI
	var_132_int = 13732; // 0x72 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x73 TObjFunc
	
Label_117:
	var_133_bool = 0; // 0x75 PushV
	var_133_bool = 0; // 0x76 MovB
	var_134_bool = 0; // 0x77 PushV
	var_134_bool = 0; // 0x78 MovB
	var_135_bool = 0; var_136_object = Obj(); // 0x79 PushV
	var_136_object = var_1_object; // 0x7a MovT
	func_848(var_136_object); // 0x7b Call
	if(var_135_bool == 0) goto Label_133; // 0x7d JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x7e PushV
	var_142_object = var_1_object; // 0x7f MovT
	func_872(var_142_object); // 0x80 Call
	var_147_bool = var_141_bool == 0; // 0x82 Not
	if(var_147_bool == 0) goto Label_133; // 0x83 JumpB
	var_134_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_134_bool == 0) goto Label_141; // 0x85 JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x86 PushV
	var_149_object = var_1_object; // 0x87 MovT
	func_884(var_149_object); // 0x88 Call
	var_154_bool = var_148_bool == 0; // 0x8a Not
	if(var_154_bool == 0) goto Label_141; // 0x8b JumpB
	var_133_bool = 1; // 0x8c MovB
	
Label_141:
	if(var_133_bool == 0) goto Label_147; // 0x8d JumpB
	var_155_int = 12567; // 0x8e PushI
	var_156_int = 13737; // 0x8f PushI
	var_157_int = 13736; // 0x90 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x91 TObjFunc
	
Label_147:
	var_158_int = 12564; // 0x93 PushI
	var_159_int = -1; // 0x94 PushI
	var_160_int = 13733; // 0x95 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x96 TObjFunc
	goto Label_155; // 0x98 Jump
}


func_961(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3c1 PushV
	GetMainOutdoorScene(var_21_object); // 0x3c2 Func
	var_23_bool = var_21_object == 0; // 0x3c4 NullEq
	if(var_23_bool == 0) goto Label_972; // 0x3c5 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x3c6 PushS
	Trace(var_24_string); // 0x3c7 Func
	var_22_object = 0; // 0x3c9 SetNull
	var_18_object = var_22_object; // 0x3ca Mov
	return 4; // 0x3cb Return
	
Label_972:
	GetMap(var_22_object); // 0x3cc ObjFunc
	var_18_object = var_22_object; // 0x3ce Mov
	return 4; // 0x3cf Return
}


func_707(var_90_float)
{
	var_91_float = 0; var_92_float = 0; // 0x2c3 PushV
	GetGameTime(var_92_float); // 0x2c4 Func
	var_90_float = var_92_float; // 0x2c6 Mov
	return 2; // 0x2c7 Return
}


func_838(var_115_bool, var_116_object)
{
	var_117_bool = 0; var_118_object = Obj(); // 0x347 PushV
	var_118_object = var_116_object; // 0x348 Mov
	func_908(var_118_object); // 0x349 Call
	if(var_117_bool == 0) goto Label_846; // 0x34b JumpB
	var_115_bool = 1; // 0x34c MovB
	return 0; // 0x34d Return
	
Label_846:
	var_115_bool = 0; // 0x34e MovB
	return 0; // 0x34f Return
}


func_712()
{
	var_75_string = "playsound"; // 0x2c9 PushS
	var_76_string = "givemoney"; // 0x2ca PushS
	TriggerWorld(var_75_string, var_76_string); // 0x2cb Func
	return 0; // 0x2cd Return
}


func_587(var_8_bool)
{
	var_8_bool = 1; // 0x24b MovB
	return 0; // 0x24c Return
}


func_589(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x24d PushV
	GetPosition(var_29_cvector); // 0x24e ObjFunc
	GetEyesHeight(var_28_float); // 0x250 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x252 PushE
	var_36_float = var_36_float + var_28_float; // 0x253 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x254 PopE
	GetPosition(var_30_cvector); // 0x255 Func
	GetEyesHeight(var_28_float); // 0x257 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x259 PushE
	var_37_float = var_37_float + var_28_float; // 0x25a Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x25b PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x25c Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x25d PushE
	var_38_float = 0; // 0x25e MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x25f PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x260 Or
	var_40_float = sqrt(var_39_int); // 0x261 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x262 Div2
	var_32_cvector = -var_31_cvector; // 0x263 Neg2
	var_41_int = 70; // 0x264 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x265 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x266 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x267 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x268 Xor2
	func_680(var_43_cvector, var_44_cvector); // 0x269 Call
	var_51_int = 25; // 0x26b PushI
	var_52_float = var_43_cvector * var_51_int; // 0x26c Mult
	var_53_int = var_42_float + var_52_float; // 0x26d Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x26e PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x26f Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x270 Add2
	IsOverrideActive(var_35_bool); // 0x271 Func
	var_55_bool = var_35_bool; // 0x273 Push
	if(var_55_bool == 0) goto Label_631; // 0x274 JumpB
	var_18_bool = 0; // 0x275 MovB
	return 16; // 0x276 Return
	
Label_631:
	StopWorld(); // 0x277 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x279 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x27b PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x27c PushE
	Rotate(var_56_float, var_57_float); // 0x27d Func
	CameraWaitForPlayFinish(); // 0x27f Func
	ResumeWorld(); // 0x281 Func
	var_18_bool = 1; // 0x283 MovB
	return 16; // 0x284 Return
}


func_718()
{
	var_124_string = "ood5Birdmask1"; // 0x2cf PushS
	var_125_int = 1; // 0x2d0 PushI
	SetVariable(var_124_string, var_125_int); // 0x2d1 Func
	return 0; // 0x2d3 Return
}


func_848(var_135_bool)
{
	var_137_int = 0; var_138_string = ""; // 0x351 PushV
	var_138_string = "ood5Birdmask1"; // 0x352 MovS
	func_690(var_137_int, var_138_string); // 0x353 Call
	var_139_int = 0; // 0x355 PushI
	var_140_bool = var_137_int == var_139_int; // 0x356 Eq
	if(var_140_bool == 0) goto Label_858; // 0x357 JumpB
	var_135_bool = 1; // 0x358 MovB
	return 0; // 0x359 Return
	
Label_858:
	var_135_bool = 0; // 0x35a MovB
	return 0; // 0x35b Return
}


func_978(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x3d2 PushV
	var_64_string = "player"; // 0x3d3 PushS
	GetVariable(var_64_string, var_63_int); // 0x3d4 Func
	var_65_int = 0; // 0x3d6 PushI
	var_66_bool = var_63_int == var_65_int; // 0x3d7 Eq
	if(var_66_bool == 0) goto Label_988; // 0x3d8 JumpB
	var_61_int = 200001; // 0x3d9 MovI
	return 2; // 0x3da Return
	
Label_988:
	var_67_int = 1; // 0x3dc PushI
	var_68_bool = var_63_int == var_67_int; // 0x3dd Eq
	if(var_68_bool == 0) goto Label_993; // 0x3de JumpB
	var_61_int = 200002; // 0x3df MovI
	return 2; // 0x3e0 Return
	
Label_993:
	var_61_int = 200003; // 0x3e1 MovI
	return 2; // 0x3e2 Return
}


func_724()
{
	var_65_float = 0; var_66_float = 0; // 0x2d4 PushV
	var_67_string = "money"; // 0x2d5 PushS
	GetProperty(var_67_string, var_66_float); // 0x2d6 ObjFunc
	var_68_int = 50000; // 0x2d8 PushI
	var_66_float = var_66_float - var_68_int; // 0x2d9 Sub2
	var_69_int = 0; // 0x2da PushI
	var_70_bool = var_66_float < var_69_int; // 0x2db LT
	if(var_70_bool == 0) goto Label_734; // 0x2dc JumpB
	var_66_float = 0; // 0x2dd MovI
	
Label_734:
	var_71_string = "money"; // 0x2de PushS
	SetProperty(var_71_string, var_66_float); // 0x2df ObjFunc
	var_72_string = "money 50000 removed"; // 0x2e1 PushS
	Trace(var_72_string); // 0x2e2 Func
	return 2; // 0x2e4 Return
}


func_860(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x35d PushV
	var_80_string = "d5q03"; // 0x35e MovS
	func_690(var_79_int, var_80_string); // 0x35f Call
	var_83_int = 1; // 0x361 PushI
	var_84_bool = var_79_int == var_83_int; // 0x362 Eq
	if(var_84_bool == 0) goto Label_870; // 0x363 JumpB
	var_77_bool = 1; // 0x364 MovB
	return 0; // 0x365 Return
	
Label_870:
	var_77_bool = 0; // 0x366 MovB
	return 0; // 0x367 Return
}


func_995()
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x3e3 PushV
	var_105_string = "Adding diary entry"; // 0x3e4 PushS
	Trace(var_105_string); // 0x3e5 Func
	var_106_int = 156; // 0x3e7 PushI
	var_107_int = 2; // 0x3e8 PushI
	var_108_int = 15367; // 0x3e9 PushI
	CreateDiaryEntry(var_104_object, var_106_int, var_107_int, var_108_int); // 0x3ea Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x3ec PushV
	var_110_object = var_104_object; // 0x3ed Mov
	var_111_int = 154; // 0x3ee MovI
	func_932(var_109_bool, var_110_object, var_111_int); // 0x3ef Call
	return 2; // 0x3f1 Return
}


func_741()
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); // 0x2e5 PushV
	var_18_object = Obj(); // 0x2e6 PushV
	func_961(var_18_object); // 0x2e7 Call
	var_16_object = var_18_object; // 0x2e8 Mov
	var_25_string = "d5q03BirdmaskBringMoneySelf"; // 0x2ea PushS
	FindMark(var_17_object, var_25_string); // 0x2eb ObjFunc
	var_26_object = var_17_object; // 0x2ed Push
	if(var_26_object == 0) goto Label_753; // 0x2ee JumpB
	Remove(); // 0x2ef ObjFunc
	
Label_753:
	var_27_string = "d5q03BirdmaskGotoMladVlad"; // 0x2f1 PushS
	FindMark(var_17_object, var_27_string); // 0x2f2 ObjFunc
	var_28_object = var_17_object; // 0x2f4 Push
	if(var_28_object == 0) goto Label_760; // 0x2f5 JumpB
	Remove(); // 0x2f6 ObjFunc
	
Label_760:
	var_29_string = "d5q03BirdmaskGotoViktor"; // 0x2f8 PushS
	FindMark(var_17_object, var_29_string); // 0x2f9 ObjFunc
	var_30_object = var_17_object; // 0x2fb Push
	if(var_30_object == 0) goto Label_767; // 0x2fc JumpB
	Remove(); // 0x2fd ObjFunc
	
Label_767:
	var_31_string = "d5q03MladVladSavePrisonersSelf"; // 0x2ff PushS
	FindMark(var_17_object, var_31_string); // 0x300 ObjFunc
	var_32_object = var_17_object; // 0x302 Push
	if(var_32_object == 0) goto Label_774; // 0x303 JumpB
	Remove(); // 0x304 ObjFunc
	
Label_774:
	var_33_string = "d5q03SavePrisoners"; // 0x306 PushS
	FindMark(var_17_object, var_33_string); // 0x307 ObjFunc
	var_34_object = var_17_object; // 0x309 Push
	if(var_34_object == 0) goto Label_781; // 0x30a JumpB
	Remove(); // 0x30b ObjFunc
	
Label_781:
	var_35_string = "d5q03ViktorSavePrisonersSelf"; // 0x30d PushS
	FindMark(var_17_object, var_35_string); // 0x30e ObjFunc
	var_36_object = var_17_object; // 0x310 Push
	if(var_36_object == 0) goto Label_788; // 0x311 JumpB
	Remove(); // 0x312 ObjFunc
	
Label_788:
	func_1011(); // 0x315 Call
	var_62_int = 1; // 0x317 PushI
	SetReturnValue(var_62_int); // 0x318 ObjFunc
	return 4; // 0x31a Return
}


func_872(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x369 PushV
	var_144_string = "d5q03"; // 0x36a MovS
	func_690(var_143_int, var_144_string); // 0x36b Call
	var_145_int = 1000; // 0x36d PushI
	var_146_bool = var_143_int == var_145_int; // 0x36e Eq
	if(var_146_bool == 0) goto Label_882; // 0x36f JumpB
	var_141_bool = 1; // 0x370 MovB
	return 0; // 0x371 Return
	
Label_882:
	var_141_bool = 0; // 0x372 MovB
	return 0; // 0x373 Return
}


func_1011()
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x3f3 PushV
	var_39_string = "Adding diary entry"; // 0x3f4 PushS
	Trace(var_39_string); // 0x3f5 Func
	var_40_int = 157; // 0x3f7 PushI
	var_41_int = 2; // 0x3f8 PushI
	var_42_int = 15368; // 0x3f9 PushI
	CreateDiaryEntry(var_38_object, var_40_int, var_41_int, var_42_int); // 0x3fa Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x3fc PushV
	var_44_object = var_38_object; // 0x3fd Mov
	var_45_int = 154; // 0x3fe MovI
	func_932(var_43_bool, var_44_object, var_45_int); // 0x3ff Call
	return 2; // 0x401 Return
}


func_884(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x375 PushV
	var_151_string = "d5q03"; // 0x376 MovS
	func_690(var_150_int, var_151_string); // 0x377 Call
	var_152_int = -1; // 0x379 PushI
	var_153_bool = var_150_int == var_152_int; // 0x37a Eq
	if(var_153_bool == 0) goto Label_894; // 0x37b JumpB
	var_148_bool = 1; // 0x37c MovB
	return 0; // 0x37d Return
	
Label_894:
	var_148_bool = 0; // 0x37e MovB
	return 0; // 0x37f Return
}


