task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xd4 PushI
	if(var_9_int == 0) goto Label_490; // 0xd5 JumpB
	func_1127(); // 0xd7 NEW_2
	var_11_int = 22381; // 0xd9 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xda Eq
	if(var_12_bool == 0) goto Label_230; // 0xdb JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xdc PushV
	var_13_object = var_1_object; // 0xdd MovT
	var_14_object = var_0_object; // 0xde MovT
	func_1305(); // 0xdf NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xe1 PushV
	var_70_object = var_1_object; // 0xe2 MovT
	var_71_object = var_0_object; // 0xe3 MovT
	func_1369(); // 0xe4 NEW_2
	
Label_230:
	var_96_int = 29741; // 0xe6 PushI
	var_97_bool = var_8_bool == var_96_int; // 0xe7 Eq
	if(var_97_bool == 0) goto Label_238; // 0xe8 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xe9 PushV
	var_98_object = var_1_object; // 0xea MovT
	var_99_object = var_0_object; // 0xeb MovT
	func_1385(var_99_object); // 0xec NEW_2
	
Label_238:
	var_138_int = 22389; // 0xee PushI
	var_139_bool = var_8_bool == var_138_int; // 0xef Eq
	if(var_139_bool == 0) goto Label_251; // 0xf0 JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0xf1 PushV
	var_140_object = var_1_object; // 0xf2 MovT
	var_141_object = var_0_object; // 0xf3 MovT
	func_1305(); // 0xf4 NEW_2
	var_142_object = Obj(); var_143_object = Obj(); // 0xf6 PushV
	var_142_object = var_1_object; // 0xf7 MovT
	var_143_object = var_0_object; // 0xf8 MovT
	func_1369(); // 0xf9 NEW_2
	
Label_251:
	var_144_int = 22392; // 0xfb PushI
	var_145_bool = var_8_bool == var_144_int; // 0xfc Eq
	if(var_145_bool == 0) goto Label_269; // 0xfd JumpB
	var_146_object = Obj(); var_147_object = Obj(); // 0xfe PushV
	var_146_object = var_1_object; // 0xff MovT
	var_147_object = var_0_object; // 0x100 MovT
	func_1336(); // 0x101 NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0x103 PushV
	var_159_object = var_1_object; // 0x104 MovT
	var_160_object = var_0_object; // 0x105 MovT
	func_1352(); // 0x106 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x108 PushV
	var_163_object = var_1_object; // 0x109 MovT
	var_164_object = var_0_object; // 0x10a MovT
	func_1358(var_164_object); // 0x10b NEW_2
	
Label_269:
	var_187_int = 22380; // 0x10d PushI
	var_188_bool = var_7_cvector == var_187_int; // 0x10e Eq
	if(var_188_bool == 0) goto Label_342; // 0x10f JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x110 PushV
	var_190_object = var_1_object; // 0x111 MovT
	func_1416(var_190_object); // 0x112 NEW_2
	if(var_189_bool == 0) goto Label_297; // 0x114 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x115 PushV
	var_197_object = var_1_object; // 0x116 MovT
	var_198_object = var_0_object; // 0x117 MovT
	func_1346(); // 0x118 NEW_2
	var_201_string = ""; // 0x11a PushV
	var_201_string = "Fear"; // 0x11b MovS
	func_189(var_8_bool, var_201_string); // 0x11c NEW_2
	var_218_int = 521178; // 0x11e PushI
	SetMessage(var_218_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_219_int = 528362; // 0x123 PushI
	var_220_int = 29735; // 0x124 PushI
	var_221_int = 29734; // 0x125 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_222_string = ""; // 0x129 PushV
	var_222_string = "Fear"; // 0x12a MovS
	func_189(var_8_bool, var_222_string); // 0x12b NEW_2
	var_223_int = 521184; // 0x12d PushI
	SetMessage(var_223_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_224_bool = 0; var_225_object = Obj(); // 0x132 PushV
	var_225_object = var_1_object; // 0x133 MovT
	func_1428(var_225_object); // 0x134 NEW_2
	if(var_224_bool == 0) goto Label_316; // 0x136 JumpB
	var_230_int = 521185; // 0x137 PushI
	var_231_int = 22388; // 0x138 PushI
	var_232_int = 22387; // 0x139 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x13a TObjFunc
	
Label_316:
	var_233_bool = 0; // 0x13c PushV
	var_233_bool = 0; // 0x13d MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x13e PushV
	var_235_object = var_1_object; // 0x13f MovT
	func_1404(var_235_object); // 0x140 NEW_2
	if(var_234_bool == 0) goto Label_330; // 0x142 JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0x143 PushV
	var_241_object = var_1_object; // 0x144 MovT
	func_1392(var_241_object); // 0x145 NEW_2
	var_246_bool = var_240_bool == 0; // 0x147 Not
	if(var_246_bool == 0) goto Label_330; // 0x148 JumpB
	var_233_bool = 1; // 0x149 MovB
	
Label_330:
	if(var_233_bool == 0) goto Label_336; // 0x14a JumpB
	var_247_int = 521188; // 0x14b PushI
	var_248_int = 22391; // 0x14c PushI
	var_249_int = 22390; // 0x14d PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x14e TObjFunc
	
Label_336:
	var_250_int = 521191; // 0x150 PushI
	var_251_int = -1; // 0x151 PushI
	var_252_int = 22393; // 0x152 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_253_int = 22391; // 0x156 PushI
	var_254_bool = var_7_cvector == var_253_int; // 0x157 Eq
	if(var_254_bool == 0) goto Label_365; // 0x158 JumpB
	var_255_string = ""; // 0x159 PushV
	var_255_string = "Saveyouall"; // 0x15a MovS
	func_189(var_8_bool, var_255_string); // 0x15b NEW_2
	var_256_int = 521189; // 0x15d PushI
	SetMessage(var_256_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_257_int = 528371; // 0x162 PushI
	var_258_int = 29744; // 0x163 PushI
	var_259_int = 29743; // 0x164 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x165 TObjFunc
	var_260_int = 528373; // 0x167 PushI
	var_261_int = 29744; // 0x168 PushI
	var_262_int = 29745; // 0x169 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_263_int = 29744; // 0x16d PushI
	var_264_bool = var_7_cvector == var_263_int; // 0x16e Eq
	if(var_264_bool == 0) goto Label_383; // 0x16f JumpB
	var_265_string = ""; // 0x170 PushV
	var_265_string = "Saveyouall"; // 0x171 MovS
	func_189(var_8_bool, var_265_string); // 0x172 NEW_2
	var_266_int = 528372; // 0x174 PushI
	SetMessage(var_266_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_267_int = 521190; // 0x179 PushI
	var_268_int = -1; // 0x17a PushI
	var_269_int = 22392; // 0x17b PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x17c TObjFunc
	return 0; // 0x17e Return
	
Label_383:
	var_270_int = 22388; // 0x17f PushI
	var_271_bool = var_7_cvector == var_270_int; // 0x180 Eq
	if(var_271_bool == 0) goto Label_401; // 0x181 JumpB
	var_272_string = ""; // 0x182 PushV
	var_272_string = "Saveyouall"; // 0x183 MovS
	func_189(var_8_bool, var_272_string); // 0x184 NEW_2
	var_273_int = 521186; // 0x186 PushI
	SetMessage(var_273_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_274_int = 521187; // 0x18b PushI
	var_275_int = -1; // 0x18c PushI
	var_276_int = 22389; // 0x18d PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_277_int = 29735; // 0x191 PushI
	var_278_bool = var_7_cvector == var_277_int; // 0x192 Eq
	if(var_278_bool == 0) goto Label_419; // 0x193 JumpB
	var_279_string = ""; // 0x194 PushV
	var_279_string = "Fear"; // 0x195 MovS
	func_189(var_8_bool, var_279_string); // 0x196 NEW_2
	var_280_int = 528363; // 0x198 PushI
	SetMessage(var_280_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_281_int = 528364; // 0x19d PushI
	var_282_int = 29737; // 0x19e PushI
	var_283_int = 29736; // 0x19f PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_284_int = 29737; // 0x1a3 PushI
	var_285_bool = var_7_cvector == var_284_int; // 0x1a4 Eq
	if(var_285_bool == 0) goto Label_437; // 0x1a5 JumpB
	var_286_string = ""; // 0x1a6 PushV
	var_286_string = "Fear"; // 0x1a7 MovS
	func_189(var_8_bool, var_286_string); // 0x1a8 NEW_2
	var_287_int = 528365; // 0x1aa PushI
	SetMessage(var_287_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_288_int = 528366; // 0x1af PushI
	var_289_int = 29739; // 0x1b0 PushI
	var_290_int = 29738; // 0x1b1 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_291_int = 29739; // 0x1b5 PushI
	var_292_bool = var_7_cvector == var_291_int; // 0x1b6 Eq
	if(var_292_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_293_string = ""; // 0x1b8 PushV
	var_293_string = "Fear"; // 0x1b9 MovS
	func_189(var_8_bool, var_293_string); // 0x1ba NEW_2
	var_294_int = 528367; // 0x1bc PushI
	SetMessage(var_294_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_295_int = 521183; // 0x1c1 PushI
	var_296_int = 29740; // 0x1c2 PushI
	var_297_int = 22385; // 0x1c3 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_298_int = 29740; // 0x1c7 PushI
	var_299_bool = var_7_cvector == var_298_int; // 0x1c8 Eq
	if(var_299_bool == 0) goto Label_478; // 0x1c9 JumpB
	var_300_string = ""; // 0x1ca PushV
	var_300_string = "Saveyouall"; // 0x1cb MovS
	func_189(var_8_bool, var_300_string); // 0x1cc NEW_2
	var_301_int = 528368; // 0x1ce PushI
	SetMessage(var_301_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_302_int = 521179; // 0x1d3 PushI
	var_303_int = -1; // 0x1d4 PushI
	var_304_int = 22381; // 0x1d5 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x1d6 TObjFunc
	var_305_int = 528369; // 0x1d8 PushI
	var_306_int = -1; // 0x1d9 PushI
	var_307_int = 29741; // 0x1da PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_3_string = 1; // 0x1de TMovB
	var_308_bool = 0; // 0x1df PushV
	func_1595(var_308_bool); // 0x1e0 NEW_2
	if(var_308_bool == 0) goto Label_486; // 0x1e2 JumpB
	lshStopAnimation(); // 0x1e3 Func
	goto Label_488; // 0x1e5 Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_486:
	StopAnimation(); // 0x1e6 Func
	
Label_490:
	return 0; // 0x1ea Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1f7 PushV
	var_10_string = "cleanup"; // 0x1f8 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1f9 Eq
	if(var_11_bool == 0) goto Label_518; // 0x1fa JumpB
	var_1_object = 1; // 0x1fb TMovB
	IsLoaded(var_9_bool); // 0x1fc Func
	var_12_bool = var_9_bool == 0; // 0x1fe Not
	if(var_12_bool == 0) goto Label_517; // 0x1ff JumpB
	var_13_object = Obj(); // 0x200 PushV
	func_1134(var_13_object); // 0x201 NEW_2
	RemoveActor(var_13_object); // 0x203 Func
	
Label_517:
	goto Label_522; // 0x205 Jump
	
Label_522:
	return 2; // 0x20a Return
	
Label_518:
	var_16_string = "restore"; // 0x206 PushS
	var_17_bool = var_7_string == var_16_string; // 0x207 Eq
	if(var_17_bool == 0) goto Label_522; // 0x208 JumpB
	var_1_object = 0; // 0x209 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x20b PushT
	if(var_7_object == 0) goto Label_532; // 0x20c JumpB
	var_8_object = Obj(); // 0x20d PushV
	func_1134(var_8_object); // 0x20e NEW_2
	RemoveActor(var_8_object); // 0x210 Func
	Hold(); // 0x212 Func
	
Label_532:
	func_647(); // 0x215 NEW_2
	return 0; // 0x217 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_662(); // 0x219 NEW_2
	return 0; // 0x21b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x262 PushI
	var_9_bool = var_7_int == var_8_int; // 0x263 Eq
	if(var_9_bool == 0) goto Label_646; // 0x264 JumpB
	func_605(); // 0x266 NEW_2
	var_11_bool = 0; // 0x268 PushV
	var_11_bool = 0; // 0x269 MovB
	var_12_bool = 0; // 0x26a PushV
	func_853(var_12_bool); // 0x26b NEW_2
	if(var_12_bool == 0) goto Label_627; // 0x26d JumpB
	var_15_bool = 0; // 0x26e PushV
	func_574(var_15_bool); // 0x26f NEW_2
	if(var_15_bool == 0) goto Label_627; // 0x271 JumpB
	var_11_bool = 1; // 0x272 MovB
	
Label_627:
	if(var_11_bool == 0) goto Label_640; // 0x273 JumpB
	var_32_bool = 0; // 0x274 PushV
	func_554(var_32_bool); // 0x275 NEW_2
	if(var_32_bool == 0) goto Label_639; // 0x277 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x278 PushV
	var_53_object = Obj(); // 0x279 PushV
	func_1134(var_53_object); // 0x27a NEW_2
	var_52_object = var_53_object; // 0x27b Mov
	func_1001(var_52_object); // 0x27d NEW_2
	
Label_639:
	goto Label_646; // 0x27f Jump
	
Label_646:
	return 0; // 0x286 Return
	
Label_640:
	func_569(var_7_int); // 0x281 NEW_2
	func_596(); // 0x284 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2a4 Push
	if(var_8_bool == 0) goto Label_682; // 0x2a5 JumpB
	func_596(); // 0x2a7 NEW_2
	goto Label_686; // 0x2a9 Jump
	
Label_686:
	return 0; // 0x2ae Return
	
Label_682:
	var_14_string = ""; // 0x2aa PushV
	var_14_string = "Neutral"; // 0x2ab MovS
	func_1081(var_14_string); // 0x2ac NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2af PushV
	IsOverrideActive(var_9_bool); // 0x2b0 Func
	var_10_bool = var_9_bool == 0; // 0x2b2 Not
	if(var_10_bool == 0) goto Label_715; // 0x2b3 JumpB
	EventDisable(0); // 0x2b4 EventDisable
	func_787(); // 0x2b6 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2b8 PushV
	var_12_object = var_7_object; // 0x2b9 Mov
	func_844(var_12_object); // 0x2ba NEW_2
	EventEnable(0); // 0x2bc EventEnable
	var_25_object = Obj(); // 0x2bd PushV
	var_25_object = var_7_object; // 0x2be Mov
	func_491(var_25_object); // 0x2bf NEW_2
	var_289_string = ""; // 0x2c1 PushV
	var_289_string = "Neutral"; // 0x2c2 MovS
	func_1081(var_289_string); // 0x2c3 NEW_2
	func_605(); // 0x2c6 NEW_2
	func_596(); // 0x2c9 NEW_2
	
Label_715:
	return 2; // 0x2cb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_540(var_6_bool); // 0x1f4 NEW_2
	return 0; // 0x1f6 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_858(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1589(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1587(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1591(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1593(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1570(var_88_int); // 0x22 NEW_2
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
	func_1134(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_943(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_281_bool = var_36_bool == 0; // 0x3f Not
	if(var_281_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_282_object = Obj(); // 0x46 PushV
	var_282_object = var_27_object; // 0x47 Mov
	func_926(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1281(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x501 PushV
	var_34_string = "idle"; // 0x502 MovS
	var_35_int = var_32_int; // 0x503 Push
	if(var_35_int == 0) goto Label_1286; // 0x504 JumpB
	var_34_string = var_34_string + var_32_int; // 0x505 Add2
	
Label_1286:
	var_31_string = var_34_string; // 0x506 Mov
	return 2; // 0x507 Return
}


func_1537(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; // 0x601 PushV
	GetMainOutdoorScene(var_82_object); // 0x602 Func
	var_84_bool = var_82_object == 0; // 0x604 NullEq
	if(var_84_bool == 0) goto Label_1546; // 0x605 JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x606 PushS
	Trace(var_85_string); // 0x607 Func
	return 8; // 0x609 Return
	
Label_1546:
	GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector); // 0x60a ObjFunc
	var_86_bool = var_83_bool == 0; // 0x60c Not
	if(var_86_bool == 0) goto Label_1556; // 0x60d JumpB
	var_87_string = "Warning: outdoor scene locator "; // 0x60e PushS
	var_88_int = var_87_string + var_73_string; // 0x60f Add
	var_89_string = " doesnt exist"; // 0x610 PushS
	var_90_int = var_88_int + var_89_string; // 0x611 Add
	Trace(var_90_int); // 0x612 Func
	
Label_1556:
	GetMap(var_72_object); // 0x614 ObjFunc
	var_91_bool = var_72_object == 0; // 0x616 NullEq
	if(var_91_bool == 0) goto Label_1564; // 0x617 JumpB
	var_92_string = "Can't find map"; // 0x618 PushS
	Trace(var_92_string); // 0x619 Func
	return 8; // 0x61b Return
	
Label_1564:
	var_93_float = GetByIndex(var_80_cvector, 0); // 0x61c PushE
	var_94_float = GetByIndex(var_80_cvector, 2); // 0x61d PushE
	SetMapParams(var_93_float, var_94_float, var_74_float); // 0x61e ObjFunc
	return 8; // 0x620 Return
}


func_1288(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x508 PushV
	var_28_int = 0; // 0x509 MovI
	
Label_1290:
	var_30_string = "all"; // 0x50a PushS
	var_31_string = ""; var_32_int = 0; // 0x50b PushV
	var_32_int = var_28_int; // 0x50c Mov
	func_1281(var_31_string, var_32_int); // 0x50d NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x50f Func
	var_36_bool = var_29_bool == 0; // 0x511 Not
	if(var_36_bool == 0) goto Label_1300; // 0x512 JumpB
	goto Label_1303; // 0x513 Jump
	
Label_1303:
	var_25_int = var_28_int; // 0x517 Mov
	return 4; // 0x518 Return
	
Label_1300:
	var_37_int = 1; // 0x514 PushI
	var_28_int = var_28_int + var_37_int; // 0x515 Add2
	goto Label_1290; // 0x516 Jump
}


func_1038(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x40e PushV
	var_151_string = "d"; // 0x40f PushS
	var_152_int = 0; // 0x410 PushV
	func_1272(var_152_int); // 0x411 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x413 Add
	var_159_string = "m"; // 0x414 PushS
	var_146_string = var_158_int + var_159_string; // 0x415 Add2
	var_147_int = 0; // 0x416 MovI
	
Label_1047:
	var_160_int = 1; // 0x417 PushI
	if(var_160_int == 0) goto Label_1060; // 0x418 JumpB
	var_161_int = 1; // 0x419 PushI
	var_162_int = var_147_int + var_161_int; // 0x41a Add
	var_163_int = var_146_string + var_162_int; // 0x41b Add
	HasProperty(var_163_int, var_148_bool); // 0x41c ObjFunc
	var_164_bool = var_148_bool == 0; // 0x41e Not
	if(var_164_bool == 0) goto Label_1057; // 0x41f JumpB
	goto Label_1060; // 0x420 Jump
	
Label_1060:
	var_165_bool = var_147_int == 0; // 0x424 Not
	if(var_165_bool == 0) goto Label_1064; // 0x425 JumpB
	var_139_bool = 0; // 0x426 MovB
	return 10; // 0x427 Return
	
Label_1064:
	var_149_int = 0; // 0x428 MovI
	var_166_int = 1; // 0x429 PushI
	var_167_bool = var_147_int > var_166_int; // 0x42a GT
	if(var_167_bool == 0) goto Label_1070; // 0x42b JumpB
	irand(var_149_int, var_147_int); // 0x42c Func
	
Label_1070:
	var_168_int = 1; // 0x42e PushI
	var_169_int = var_149_int + var_168_int; // 0x42f Add
	var_170_int = var_146_string + var_169_int; // 0x430 Add
	GetProperty(var_170_int, var_150_string); // 0x431 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x433 PushV
	var_172_string = var_150_string; // 0x434 Mov
	func_1112(var_171_bool, var_172_string); // 0x435 NEW_2
	var_139_bool = var_171_bool; // 0x436 Mov
	return 10; // 0x438 Return
	
Label_1057:
	var_173_int = 1; // 0x421 PushI
	var_147_int = var_147_int + var_173_int; // 0x422 Add2
	goto Label_1047; // 0x423 Jump
}


func_785(var_45_bool)
{
	var_45_bool = 1; // 0x311 MovB
	return 0; // 0x312 Return
}


func_787()
{
	StopAnimation(); // 0x313 Func
	StopGroup0(); // 0x315 Func
	return 0; // 0x317 Return
}


func_792(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x318 PushV
	GetPosition(var_27_cvector); // 0x319 Func
	GetPosition(var_28_cvector); // 0x31b ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x31d Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x31e Or2
	return 6; // 0x31f Return
}


func_1305()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x519 PushV
	var_17_string = "b6q02"; // 0x51a PushS
	var_18_int = 1; // 0x51b PushI
	SetVariable(var_17_string, var_18_int); // 0x51c Func
	var_19_object = Obj(); // 0x51e PushV
	func_1520(var_19_object); // 0x51f NEW_2
	var_16_object = var_19_object; // 0x520 Mov
	var_26_string = "b6q02KlaraGotoRat"; // 0x522 PushS
	var_27_string = "pt_map_theater"; // 0x523 PushS
	var_28_int = 0; // 0x524 PushI
	var_29_int = 521207; // 0x525 PushI
	var_30_float = 0; // 0x526 PushV
	func_1267(var_30_float); // 0x527 NEW_2
	AddMark(var_26_string, var_27_string, var_28_int, var_29_int, var_30_float); // 0x529 ObjFunc
	func_1440(); // 0x52c NEW_2
	func_1466(); // 0x52f NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0x531 PushV
	var_65_string = "quest_b6_02"; // 0x532 MovS
	var_66_string = "init_maze"; // 0x533 MovS
	func_1255(var_64_bool, var_65_string, var_66_string); // 0x534 NEW_2
	return 2; // 0x536 Return
}


func_540(var_0_object)
{
	var_7_bool = 0; // 0x21c PushV
	func_853(var_7_bool); // 0x21d NEW_2
	var_10_bool = var_7_bool == 0; // 0x21f Not
	if(var_10_bool == 0) goto Label_547; // 0x220 JumpB
	Hold(); // 0x221 Func
	
Label_547:
	GetDirection(var_0_object); // 0x223 Func
	
Label_549:
	func_716(); // 0x226 NEW_2
	goto Label_549; // 0x228 Jump
}


func_800(var_119_bool, var_120_object, var_121_string)
{
	var_122_bool = 0; var_123_bool = 0; // 0x320 PushV
	var_124_string = "HasProperty"; // 0x321 PushS
	var_125_int = 2; // 0x322 PushI
	var_126_bool = IsFuncExist(var_120_object, var_124_string, var_125_int); // 0x323 FuncExist
	var_127_bool = var_126_bool == 0; // 0x324 Not
	if(var_127_bool == 0) goto Label_808; // 0x325 JumpB
	var_119_bool = 0; // 0x326 MovB
	return 2; // 0x327 Return
	
Label_808:
	HasProperty(var_121_string, var_123_bool); // 0x328 ObjFunc
	var_119_bool = var_123_bool; // 0x32a Mov
	return 2; // 0x32b Return
}


func_1570(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x622 PushV
	var_91_string = "branch"; // 0x623 PushS
	GetVariable(var_91_string, var_90_int); // 0x624 Func
	var_92_int = 0; // 0x626 PushI
	var_93_bool = var_90_int == var_92_int; // 0x627 Eq
	if(var_93_bool == 0) goto Label_1580; // 0x628 JumpB
	var_88_int = 1; // 0x629 MovI
	return 2; // 0x62a Return
	
Label_1580:
	var_94_int = 1; // 0x62c PushI
	var_95_bool = var_90_int == var_94_int; // 0x62d Eq
	if(var_95_bool == 0) goto Label_1585; // 0x62e JumpB
	var_88_int = 2; // 0x62f MovI
	return 2; // 0x630 Return
	
Label_1585:
	var_88_int = 3; // 0x631 MovI
	return 2; // 0x632 Return
}


func_554(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x22a PushV
	var_35_string = "player"; // 0x22b PushS
	FindActor(var_34_object, var_35_string); // 0x22c Func
	var_36_bool = var_34_object == 0; // 0x22e Not
	if(var_36_bool == 0) goto Label_562; // 0x22f JumpB
	var_32_bool = 0; // 0x230 MovB
	return 2; // 0x231 Return
	
Label_562:
	var_37_bool = 0; var_38_object = Obj(); // 0x232 PushV
	var_38_object = var_34_object; // 0x233 Mov
	func_844(var_38_object); // 0x234 NEW_2
	var_32_bool = var_37_bool; // 0x235 Mov
	return 2; // 0x237 Return
}


func_812(var_111_bool, var_112_object, var_113_string, var_114_float, var_115_float, var_116_float)
{
	var_117_float = 0; var_118_float = 0; // 0x32c PushV
	var_119_bool = 0; var_120_object = Obj(); var_121_string = ""; // 0x32d PushV
	var_120_object = var_112_object; // 0x32e Mov
	var_121_string = var_113_string; // 0x32f Mov
	func_800(var_119_bool, var_120_object, var_121_string); // 0x330 NEW_2
	var_128_bool = var_119_bool == 0; // 0x332 Not
	if(var_128_bool == 0) goto Label_822; // 0x333 JumpB
	var_111_bool = 0; // 0x334 MovB
	return 2; // 0x335 Return
	
Label_822:
	GetProperty(var_113_string, var_118_float); // 0x336 ObjFunc
	var_129_float = 0; var_130_float = 0; var_131_float = 0; var_132_float = 0; // 0x338 PushV
	var_130_float = var_118_float + var_114_float; // 0x339 Add2
	var_131_float = var_115_float; // 0x33a Mov
	var_132_float = var_116_float; // 0x33b Mov
	func_1150(var_129_float, var_130_float, var_131_float, var_132_float); // 0x33c NEW_2
	SetProperty(var_113_string, var_129_float); // 0x33e ObjFunc
	var_111_bool = 1; // 0x340 MovB
	return 2; // 0x341 Return
}


func_1587(var_85_int)
{
	var_85_int = 515540; // 0x633 MovI
	return 0; // 0x634 Return
}


func_1589(var_84_int)
{
	var_84_int = 502865; // 0x635 MovI
	return 0; // 0x636 Return
}


func_1591(var_86_string)
{
	var_86_string = "ui/NPC_Klara.png"; // 0x637 MovS
	return 0; // 0x638 Return
}


func_1336()
{
	func_1453(); // 0x53a NEW_2
	var_156_bool = 0; var_157_string = ""; var_158_string = ""; // 0x53c PushV
	var_157_string = "quest_b6_02"; // 0x53d MovS
	var_158_string = "completed"; // 0x53e MovS
	func_1255(var_156_bool, var_157_string, var_158_string); // 0x53f NEW_2
	return 0; // 0x541 Return
}


func_1593(var_87_string)
{
	var_87_string = "ui/NPC_Klara_b.png"; // 0x639 MovS
	return 0; // 0x63a Return
}


func_1081(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x439 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x43a Func
	var_241_bool = var_238_bool; // 0x43c Push
	if(var_241_bool == 0) goto Label_1092; // 0x43d JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x43e Func
	var_242_bool = 0; // 0x440 PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x441 Func
	goto Label_1096; // 0x443 Jump
	
Label_1096:
	return 6; // 0x448 Return
	
Label_1092:
	var_243_string = "Can't find lsh animation : "; // 0x444 PushS
	var_244_int = var_243_string + var_234_string; // 0x445 Add
	Trace(var_244_int); // 0x446 Func
}


func_1595(var_79_bool)
{
	var_79_bool = 1; // 0x63b MovB
	return 0; // 0x63c Return
}


func_569(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x239 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x23a PushE
	RotateAsync(var_84_float, var_85_float); // 0x23b Func
	return 0; // 0x23d Return
}


func_574(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x23e PushV
	var_20_string = "player"; // 0x23f PushS
	FindActor(var_18_object, var_20_string); // 0x240 Func
	var_21_bool = var_18_object == 0; // 0x242 Not
	if(var_21_bool == 0) goto Label_582; // 0x243 JumpB
	var_15_bool = 0; // 0x244 MovB
	return 4; // 0x245 Return
	
Label_582:
	var_22_float = 0; var_23_object = Obj(); // 0x246 PushV
	var_23_object = var_18_object; // 0x247 Mov
	func_792(var_23_object); // 0x248 NEW_2
	var_30_float = 90000.0; // 0x24a PushF
	var_31_bool = var_22_float > var_30_float; // 0x24b GT
	if(var_31_bool == 0) goto Label_591; // 0x24c JumpB
	var_15_bool = 0; // 0x24d MovB
	return 4; // 0x24e Return
	
Label_591:
	CanSee(var_19_bool, var_18_object); // 0x24f Func
	var_15_bool = var_19_bool; // 0x251 Mov
	return 4; // 0x252 Return
}


func_1346()
{
	var_209_string = "oob6Klara2_1"; // 0x543 PushS
	var_210_int = 1; // 0x544 PushI
	SetVariable(var_209_string, var_210_int); // 0x545 Func
	return 0; // 0x547 Return
}


func_834(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x342 PushV
	GetPosition(var_20_cvector); // 0x343 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x345 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x346 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x347 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x348 Func
	var_15_bool = var_22_bool; // 0x34a Mov
	return 6; // 0x34b Return
}


func_1352()
{
	var_161_string = "playsound"; // 0x549 PushS
	var_162_string = "giveitem"; // 0x54a PushS
	TriggerWorld(var_161_string, var_162_string); // 0x54b Func
	return 0; // 0x54d Return
}


func_1097(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x449 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x44a Func
	var_225_bool = var_222_bool; // 0x44c Push
	if(var_225_bool == 0) goto Label_1107; // 0x44d JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x44e Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x450 Func
	goto Label_1111; // 0x452 Jump
	
Label_1111:
	return 6; // 0x457 Return
	
Label_1107:
	var_226_string = "Can't find lsh animation : "; // 0x453 PushS
	var_227_int = var_226_string + var_215_string; // 0x454 Add
	Trace(var_227_int); // 0x455 Func
}


func_844(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x34c PushV
	GetPosition(var_14_cvector); // 0x34d ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x34f PushV
	var_16_cvector = var_14_cvector; // 0x350 Mov
	func_834(var_15_bool, var_16_cvector); // 0x351 NEW_2
	var_11_bool = var_15_bool; // 0x352 Mov
	return 2; // 0x354 Return
}


func_1358(var_163_object)
{
	var_165_string = "recipe7 is given"; // 0x54f PushS
	Trace(var_165_string); // 0x550 Func
	var_166_object = Obj(); var_167_string = ""; var_168_int = 0; // 0x552 PushV
	var_166_object = var_163_object; // 0x553 Mov
	var_167_string = "recipe7"; // 0x554 MovS
	var_168_int = 1; // 0x555 MovI
	func_1197(var_166_object, var_167_string, var_168_int); // 0x556 NEW_2
	return 0; // 0x558 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_159; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1416(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_112; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1346(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Fear"; // 0x62 MovS
	func_189(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 521178; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 528362; // 0x6a PushI
	var_230_int = 29735; // 0x6b PushI
	var_231_int = 29734; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_159; // 0x6f Jump
	
Label_159:
	var_232_bool = 0; // 0x9f PushV
	func_1595(var_232_bool); // 0xa0 NEW_2
	if(var_232_bool == 0) goto Label_174; // 0xa2 JumpB
	
Label_163:
	lshWaitForAnimEnd(); // 0xa3 Func
	var_233_string = var_3_string; // 0xa5 PushT
	if(var_233_string == 0) goto Label_168; // 0xa6 JumpB
	goto Label_173; // 0xa7 Jump
	
Label_173:
	goto Label_188; // 0xad Jump
	
Label_188:
	return 0; // 0xbc Return
	
Label_168:
	var_234_string = ""; // 0xa8 PushV
	var_234_string = var_2_object; // 0xa9 MovT
	func_1081(var_234_string); // 0xaa NEW_2
	goto Label_163; // 0xac Jump
	
Label_174:
	var_245_string = "all"; // 0xae PushS
	var_246_string = "idle"; // 0xaf PushS
	PlayAnimation(var_245_string, var_246_string); // 0xb0 Func
	
Label_178:
	WaitForAnimEnd(); // 0xb2 Func
	var_247_string = var_3_string; // 0xb4 PushT
	if(var_247_string == 0) goto Label_183; // 0xb5 JumpB
	goto Label_188; // 0xb6 Jump
	
Label_183:
	var_248_string = "all"; // 0xb7 PushS
	var_249_string = "idle"; // 0xb8 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xb9 Func
	goto Label_178; // 0xbb Jump
	
Label_112:
	var_250_string = ""; // 0x70 PushV
	var_250_string = "Fear"; // 0x71 MovS
	func_189(var_193_object, var_250_string); // 0x72 NEW_2
	var_251_int = 521184; // 0x74 PushI
	SetMessage(var_251_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_252_bool = 0; var_253_object = Obj(); // 0x79 PushV
	var_253_object = var_1_object; // 0x7a MovT
	func_1428(var_253_object); // 0x7b NEW_2
	if(var_252_bool == 0) goto Label_131; // 0x7d JumpB
	var_258_int = 521185; // 0x7e PushI
	var_259_int = 22388; // 0x7f PushI
	var_260_int = 22387; // 0x80 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x81 TObjFunc
	
Label_131:
	var_261_bool = 0; // 0x83 PushV
	var_261_bool = 0; // 0x84 MovB
	var_262_bool = 0; var_263_object = Obj(); // 0x85 PushV
	var_263_object = var_1_object; // 0x86 MovT
	func_1404(var_263_object); // 0x87 NEW_2
	if(var_262_bool == 0) goto Label_145; // 0x89 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x8a PushV
	var_269_object = var_1_object; // 0x8b MovT
	func_1392(var_269_object); // 0x8c NEW_2
	var_274_bool = var_268_bool == 0; // 0x8e Not
	if(var_274_bool == 0) goto Label_145; // 0x8f JumpB
	var_261_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_261_bool == 0) goto Label_151; // 0x91 JumpB
	var_275_int = 521188; // 0x92 PushI
	var_276_int = 22391; // 0x93 PushI
	var_277_int = 22390; // 0x94 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x95 TObjFunc
	
Label_151:
	var_278_int = 521191; // 0x97 PushI
	var_279_int = -1; // 0x98 PushI
	var_280_int = 22393; // 0x99 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x9a TObjFunc
	goto Label_159; // 0x9c Jump
}


func_596()
{
	var_291_float = 0; var_292_float = 0; // 0x254 PushV
	var_293_int = 8; // 0x255 PushI
	var_294_int = 16; // 0x256 PushI
	rand(var_292_float, var_293_int, var_294_int); // 0x257 Func
	var_295_int = 10; // 0x259 PushI
	SetTimer(var_295_int, var_292_float); // 0x25a Func
	return 2; // 0x25c Return
}


func_853(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x355 PushV
	IsLoaded(var_9_bool); // 0x356 Func
	var_7_bool = var_9_bool; // 0x358 Mov
	return 2; // 0x359 Return
}


func_1112(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x458 PushV
	var_135_bool = 0; // 0x459 PushV
	func_1595(var_135_bool); // 0x45a NEW_2
	if(var_135_bool == 0) goto Label_1125; // 0x45c JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x45d Func
	var_136_bool = var_134_bool; // 0x45f Push
	if(var_136_bool == 0) goto Label_1125; // 0x460 JumpB
	lshPlaySpeech(var_132_string); // 0x461 Func
	var_131_bool = 1; // 0x463 MovB
	return 2; // 0x464 Return
	
Label_1125:
	var_131_bool = 0; // 0x465 MovB
	return 2; // 0x466 Return
}


func_1369()
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0; // 0x55a PushV
	var_75_object = Obj(); // 0x55b PushV
	func_1520(var_75_object); // 0x55c NEW_2
	var_72_object = var_75_object; // 0x55d Mov
	var_73_string = "pt_map_theater"; // 0x55f MovS
	var_74_float = 2; // 0x560 MovI
	func_1537(var_72_object, var_73_string, var_74_float); // 0x561 NEW_2
	var_95_object = Obj(); // 0x563 PushV
	func_1520(var_95_object); // 0x564 NEW_2
	ShowMap(var_95_object); // 0x566 ObjFunc
	return 0; // 0x568 Return
}


func_858(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x35a PushV
	GetPosition(var_50_cvector); // 0x35b ObjFunc
	GetEyesHeight(var_49_float); // 0x35d ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x35f PushE
	var_58_float = var_58_float + var_49_float; // 0x360 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x361 PopE
	GetPosition(var_51_cvector); // 0x362 Func
	GetEyesHeight(var_49_float); // 0x364 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x366 PushE
	var_59_float = var_59_float + var_49_float; // 0x367 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x368 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x369 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x36a PushE
	var_60_float = 0; // 0x36b MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x36c PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x36d Or
	var_62_float = sqrt(var_61_int); // 0x36e Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x36f Div2
	var_53_cvector = -var_52_cvector; // 0x370 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x371 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x372 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x373 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x374 Xor2
	func_1140(var_64_cvector, var_65_cvector); // 0x375 NEW_2
	var_72_int = 25; // 0x377 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x378 Mult
	var_74_int = var_63_float + var_73_float; // 0x379 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x37a PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x37b Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x37c Add2
	IsOverrideActive(var_56_bool); // 0x37d Func
	var_76_bool = var_56_bool; // 0x37f Push
	if(var_76_bool == 0) goto Label_899; // 0x380 JumpB
	var_37_bool = 0; // 0x381 MovB
	return 18; // 0x382 Return
	
Label_899:
	StopWorld(); // 0x383 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x385 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x387 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x388 PushE
	Rotate(var_77_float, var_78_float); // 0x389 Func
	var_79_bool = 0; // 0x38b PushV
	func_1595(var_79_bool); // 0x38c NEW_2
	if(var_79_bool == 0) goto Label_912; // 0x38e JumpB
	goto Label_920; // 0x38f Jump
	
Label_920:
	CameraWaitForPlayFinish(); // 0x398 Func
	ResumeWorld(); // 0x39a Func
	var_37_bool = 1; // 0x39c MovB
	return 18; // 0x39d Return
	
Label_912:
	var_80_string = "head"; // 0x390 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x391 Func
	var_81_bool = var_57_bool; // 0x393 Push
	if(var_81_bool == 0) goto Label_920; // 0x394 JumpB
	var_82_string = "head"; // 0x395 PushS
	LookAsyncCamera(var_82_string); // 0x396 Func
}


func_605()
{
	var_290_int = 10; // 0x25d PushI
	KillTimer(var_290_int); // 0x25e Func
	return 0; // 0x260 Return
}


func_1127()
{
	var_10_bool = 0; // 0x467 PushV
	func_1595(var_10_bool); // 0x468 NEW_2
	if(var_10_bool == 0) goto Label_1133; // 0x46a JumpB
	lshStopSpeech(); // 0x46b Func
	
Label_1133:
	return 0; // 0x46d Return
}


func_1385(var_98_object)
{
	var_100_bool = 0; var_101_object = Obj(); var_102_float = 0; // 0x56a PushV
	var_101_object = var_98_object; // 0x56b Mov
	var_102_float = -0.1; // 0x56c MovF
	func_1210(var_100_bool, var_101_object, var_102_float); // 0x56d NEW_2
	return 0; // 0x56f Return
}


func_1134(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x46e PushV
	self(var_101_object); // 0x46f Func
	var_99_object = var_101_object; // 0x471 Mov
	return 2; // 0x472 Return
}


func_1392(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0x571 PushV
	var_271_string = "b6q02"; // 0x572 MovS
	func_1161(var_270_int, var_271_string); // 0x573 NEW_2
	var_272_int = 1000; // 0x575 PushI
	var_273_bool = var_270_int == var_272_int; // 0x576 Eq
	if(var_273_bool == 0) goto Label_1402; // 0x577 JumpB
	var_268_bool = 1; // 0x578 MovB
	return 0; // 0x579 Return
	
Label_1402:
	var_268_bool = 0; // 0x57a MovB
	return 0; // 0x57b Return
}


func_1140(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x474 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x475 Or
	var_68_float = sqrt(var_69_int); // 0x476 Sqrt2
	var_70_float = 0.0; // 0x477 PushF
	var_71_bool = var_68_float < var_70_float; // 0x478 LT
	if(var_71_bool == 0) goto Label_1148; // 0x479 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x47a MovV
	return 2; // 0x47b Return
	
Label_1148:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x47c Div2
	return 2; // 0x47d Return
}


func_1404(var_262_bool)
{
	var_264_int = 0; var_265_string = ""; // 0x57d PushV
	var_265_string = "b6q02"; // 0x57e MovS
	func_1161(var_264_int, var_265_string); // 0x57f NEW_2
	var_266_int = 2; // 0x581 PushI
	var_267_bool = var_264_int == var_266_int; // 0x582 Eq
	if(var_267_bool == 0) goto Label_1414; // 0x583 JumpB
	var_262_bool = 1; // 0x584 MovB
	return 0; // 0x585 Return
	
Label_1414:
	var_262_bool = 0; // 0x586 MovB
	return 0; // 0x587 Return
}


func_1150(var_129_float, var_130_float, var_131_float, var_132_float)
{
	var_133_bool = var_130_float < var_131_float; // 0x47f LT
	if(var_133_bool == 0) goto Label_1155; // 0x480 JumpB
	var_129_float = var_131_float; // 0x481 Mov
	return 0; // 0x482 Return
	
Label_1155:
	var_134_bool = var_130_float > var_132_float; // 0x483 GT
	if(var_134_bool == 0) goto Label_1159; // 0x484 JumpB
	var_129_float = var_132_float; // 0x485 Mov
	return 0; // 0x486 Return
	
Label_1159:
	var_129_float = var_130_float; // 0x487 Mov
	return 0; // 0x488 Return
}


func_647()
{
	func_787(); // 0x288 NEW_2
	func_605(); // 0x28b NEW_2
	lshStopSpeech(); // 0x28d Func
	lshStopAnimation(); // 0x28f Func
	StopAsync(); // 0x291 Func
	Hold(); // 0x293 Func
	return 0; // 0x295 Return
}


func_1416(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x589 PushV
	var_202_string = "oob6Klara2_1"; // 0x58a MovS
	func_1161(var_201_int, var_202_string); // 0x58b NEW_2
	var_205_int = 0; // 0x58d PushI
	var_206_bool = var_201_int == var_205_int; // 0x58e Eq
	if(var_206_bool == 0) goto Label_1426; // 0x58f JumpB
	var_199_bool = 1; // 0x590 MovB
	return 0; // 0x591 Return
	
Label_1426:
	var_199_bool = 0; // 0x592 MovB
	return 0; // 0x593 Return
}


func_1161(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x489 PushV
	GetVariable(var_202_string, var_204_int); // 0x48a Func
	var_201_int = var_204_int; // 0x48c Mov
	return 2; // 0x48d Return
}


func_1166(var_182_int, var_183_int)
{
	var_184_object = Obj(); var_185_object = Obj(); // 0x48e PushV
	CreateIntVector(var_185_object); // 0x48f Func
	add(var_182_int); // 0x491 ObjFunc
	add(var_183_int); // 0x493 ObjFunc
	var_186_int = 3; // 0x495 PushI
	SendWorldWndMessage(var_186_int, var_185_object); // 0x496 Func
	return 2; // 0x498 Return
}


func_1428(var_252_bool)
{
	var_254_int = 0; var_255_string = ""; // 0x595 PushV
	var_255_string = "b6q02"; // 0x596 MovS
	func_1161(var_254_int, var_255_string); // 0x597 NEW_2
	var_256_int = 0; // 0x599 PushI
	var_257_bool = var_254_int == var_256_int; // 0x59a Eq
	if(var_257_bool == 0) goto Label_1438; // 0x59b JumpB
	var_252_bool = 1; // 0x59c MovB
	return 0; // 0x59d Return
	
Label_1438:
	var_252_bool = 0; // 0x59e MovB
	return 0; // 0x59f Return
}


func_662()
{
	StopGroup0(); // 0x296 Func
	func_605(); // 0x299 NEW_2
	var_8_string = ""; // 0x29b PushV
	var_8_string = "Neutral"; // 0x29c MovS
	func_1081(var_8_string); // 0x29d NEW_2
	func_596(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


func_1178(var_172_object, var_173_int)
{
	var_174_int = 0; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_int = 0; var_179_bool = 0; // 0x49a PushV
	GetItemID(var_177_int); // 0x49b ObjFunc
	var_180_string = "Category"; // 0x49d PushS
	GetInvItemProperty(var_178_int, var_177_int, var_180_string); // 0x49e Func
	AddItem(var_179_bool, var_172_object, var_178_int, var_173_int); // 0x4a0 ObjFunc
	var_181_bool = var_179_bool == 0; // 0x4a2 Not
	if(var_181_bool == 0) goto Label_1191; // 0x4a3 JumpB
	DropItems(var_172_object, var_173_int); // 0x4a4 ObjFunc
	goto Label_1196; // 0x4a6 Jump
	
Label_1196:
	return 6; // 0x4ac Return
	
Label_1191:
	var_182_int = 0; var_183_int = 0; // 0x4a7 PushV
	var_182_int = var_177_int; // 0x4a8 Mov
	var_183_int = var_173_int; // 0x4a9 Mov
	func_1166(var_182_int, var_183_int); // 0x4aa NEW_2
}


func_926()
{
	var_283_bool = 0; var_284_bool = 0; // 0x39e PushV
	CameraSwitchToNormal(); // 0x39f Func
	var_285_bool = 0; // 0x3a1 PushV
	func_1595(var_285_bool); // 0x3a2 NEW_2
	if(var_285_bool == 0) goto Label_934; // 0x3a4 JumpB
	goto Label_942; // 0x3a5 Jump
	
Label_942:
	return 2; // 0x3ae Return
	
Label_934:
	var_286_string = "head"; // 0x3a6 PushS
	HasAnimationTrack(var_284_bool, var_286_string); // 0x3a7 Func
	var_287_bool = var_284_bool; // 0x3a9 Push
	if(var_287_bool == 0) goto Label_942; // 0x3aa JumpB
	var_288_string = "head"; // 0x3ab PushS
	UnlookAsync(var_288_string); // 0x3ac Func
}


func_1440()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x5a0 PushV
	var_35_int = 266; // 0x5a1 PushI
	var_36_int = 2; // 0x5a2 PushI
	var_37_int = 521193; // 0x5a3 PushI
	CreateDiaryEntry(var_34_object, var_35_int, var_36_int, var_37_int); // 0x5a4 Func
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; // 0x5a6 PushV
	var_39_object = var_34_object; // 0x5a7 Mov
	var_40_int = -1; // 0x5a8 MovI
	func_1492(var_38_bool, var_39_object, var_40_int); // 0x5a9 NEW_2
	return 2; // 0x5ab Return
}


func_1453()
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x5ad PushV
	var_150_int = 269; // 0x5ae PushI
	var_151_int = 2; // 0x5af PushI
	var_152_int = 521196; // 0x5b0 PushI
	CreateDiaryEntry(var_149_object, var_150_int, var_151_int, var_152_int); // 0x5b1 Func
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; // 0x5b3 PushV
	var_154_object = var_149_object; // 0x5b4 Mov
	var_155_int = 266; // 0x5b5 MovI
	func_1492(var_153_bool, var_154_object, var_155_int); // 0x5b6 NEW_2
	return 2; // 0x5b8 Return
}


func_1197(var_166_object, var_167_string, var_168_int)
{
	var_169_object = Obj(); var_170_object = Obj(); // 0x4ad PushV
	CreateInvItem(var_170_object); // 0x4ae Func
	SetItemName(var_167_string); // 0x4b0 ObjFunc
	var_171_object = Obj(); var_172_object = Obj(); var_173_int = 0; // 0x4b2 PushV
	var_171_object = var_166_object; // 0x4b3 Mov
	var_172_object = var_170_object; // 0x4b4 Mov
	var_173_int = var_168_int; // 0x4b5 Mov
	func_1178(var_172_object, var_173_int); // 0x4b6 NEW_2
	return 2; // 0x4b8 Return
}


func_943(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3af PushV
	var_106_string = "voice_common"; // 0x3b0 PushS
	GetVariable(var_106_string, var_104_int); // 0x3b1 Func
	var_107_int = var_104_int; // 0x3b3 Push
	if(var_107_int == 0) goto Label_981; // 0x3b4 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3b5 PushV
	var_109_object = var_98_object; // 0x3b6 Mov
	func_1001(var_109_object); // 0x3b7 NEW_2
	var_138_bool = var_108_bool == 0; // 0x3b9 Not
	if(var_138_bool == 0) goto Label_963; // 0x3ba JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3bb PushV
	var_140_object = var_98_object; // 0x3bc Mov
	func_1038(var_140_object); // 0x3bd NEW_2
	var_174_bool = var_139_bool == 0; // 0x3bf Not
	if(var_174_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_97_bool = 0; // 0x3c1 MovB
	return 4; // 0x3c2 Return
	
Label_963:
	var_175_int = 2; // 0x3c3 PushI
	irand(var_105_int, var_175_int); // 0x3c4 Func
	var_176_int = var_105_int; // 0x3c6 Push
	if(var_176_int == 0) goto Label_976; // 0x3c7 JumpB
	var_177_string = "voice_common"; // 0x3c8 PushS
	var_178_int = 1; // 0x3c9 PushI
	var_179_int = var_104_int + var_178_int; // 0x3ca Add
	var_180_int = 3; // 0x3cb PushI
	var_181_int = var_179_int / var_180_int; // 0x3cc Mod
	SetVariable(var_177_string, var_181_int); // 0x3cd Func
	goto Label_980; // 0x3cf Jump
	
Label_980:
	goto Label_999; // 0x3d4 Jump
	
Label_999:
	var_97_bool = 1; // 0x3e7 MovB
	return 4; // 0x3e8 Return
	
Label_976:
	var_182_string = "voice_common"; // 0x3d0 PushS
	var_183_int = 0; // 0x3d1 PushI
	SetVariable(var_182_string, var_183_int); // 0x3d2 Func
	
Label_981:
	var_184_bool = 0; var_185_object = Obj(); // 0x3d5 PushV
	var_185_object = var_98_object; // 0x3d6 Mov
	func_1038(var_185_object); // 0x3d7 NEW_2
	var_186_bool = var_184_bool == 0; // 0x3d9 Not
	if(var_186_bool == 0) goto Label_995; // 0x3da JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3db PushV
	var_188_object = var_98_object; // 0x3dc Mov
	func_1001(var_188_object); // 0x3dd NEW_2
	var_189_bool = var_187_bool == 0; // 0x3df Not
	if(var_189_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_97_bool = 0; // 0x3e1 MovB
	return 4; // 0x3e2 Return
	
Label_995:
	var_190_string = "voice_common"; // 0x3e3 PushS
	var_191_int = 1; // 0x3e4 PushI
	SetVariable(var_190_string, var_191_int); // 0x3e5 Func
}


func_1466()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x5ba PushV
	var_58_int = 267; // 0x5bb PushI
	var_59_int = 2; // 0x5bc PushI
	var_60_int = 521194; // 0x5bd PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x5be Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x5c0 PushV
	var_62_object = var_57_object; // 0x5c1 Mov
	var_63_int = 266; // 0x5c2 MovI
	func_1492(var_61_bool, var_62_object, var_63_int); // 0x5c3 NEW_2
	return 2; // 0x5c5 Return
}


func_1210(var_100_bool, var_101_object, var_102_float)
{
	var_103_bool = var_101_object == 0; // 0x4bb Not
	if(var_103_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_100_bool = 0; // 0x4bd MovB
	return 0; // 0x4be Return
	
Label_1215:
	var_104_int = 0; // 0x4bf PushI
	var_105_bool = var_102_float > var_104_int; // 0x4c0 GT
	if(var_105_bool == 0) goto Label_1222; // 0x4c1 JumpB
	var_106_int = 8; // 0x4c2 PushI
	SendWorldWndMessage(var_106_int); // 0x4c3 Func
	goto Label_1231; // 0x4c5 Jump
	
Label_1231:
	var_107_float = 0; // 0x4cf PushV
	var_107_float = var_102_float; // 0x4d0 Mov
	func_1245(var_107_float); // 0x4d1 NEW_2
	var_111_bool = 0; var_112_object = Obj(); var_113_string = ""; var_114_float = 0; var_115_float = 0; var_116_float = 0; // 0x4d3 PushV
	var_112_object = var_101_object; // 0x4d4 Mov
	var_113_string = "reputation"; // 0x4d5 MovS
	var_114_float = var_102_float; // 0x4d6 Mov
	var_115_float = 0; // 0x4d7 MovI
	var_116_float = 1; // 0x4d8 MovI
	func_812(var_111_bool, var_112_object, var_113_string, var_114_float, var_115_float, var_116_float); // 0x4d9 NEW_2
	var_100_bool = 1; // 0x4db MovB
	return 0; // 0x4dc Return
	
Label_1222:
	var_135_int = 0; // 0x4c6 PushI
	var_136_bool = var_102_float < var_135_int; // 0x4c7 LT
	if(var_136_bool == 0) goto Label_1229; // 0x4c8 JumpB
	var_137_int = 9; // 0x4c9 PushI
	SendWorldWndMessage(var_137_int); // 0x4ca Func
	goto Label_1231; // 0x4cc Jump
	
Label_1229:
	var_100_bool = 0; // 0x4cd MovB
	return 0; // 0x4ce Return
}


func_189(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xbe PushV
	func_1595(var_212_bool); // 0xbf NEW_2
	var_213_bool = var_212_bool == 0; // 0xc1 Not
	if(var_213_bool == 0) goto Label_196; // 0xc2 JumpB
	return 0; // 0xc3 Return
	
Label_196:
	var_214_bool = var_211_string == var_2_object; // 0xc4 Eq
	if(var_214_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_215_string = ""; var_216_bool = 0; // 0xc7 PushV
	var_215_string = var_211_string; // 0xc8 Mov
	var_217_string = ""; // 0xc9 PushS
	var_218_bool = var_211_string == var_217_string; // 0xca Eq
	if(var_218_bool == 0) goto Label_206; // 0xcb JumpB
	var_216_bool = 0; // 0xcc MovB
	goto Label_207; // 0xcd Jump
	
Label_207:
	func_1097(var_215_string, var_216_bool); // 0xcf NEW_2
	var_2_object = var_211_string; // 0xd1 TMov
	return 0; // 0xd2 Return
	
Label_206:
	var_216_bool = 1; // 0xce MovB
}


func_1479(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x5c7 PushV
	GetDiaryRoot(var_49_object); // 0x5c8 Func
	var_50_bool = var_49_object == 0; // 0x5ca Not
	if(var_50_bool == 0) goto Label_1489; // 0x5cb JumpB
	var_51_string = "Can't retrieve diary root"; // 0x5cc PushS
	Trace(var_51_string); // 0x5cd Func
	var_47_object = 0; // 0x5cf MovB
	return 2; // 0x5d0 Return
	
Label_1489:
	var_47_object = var_49_object; // 0x5d1 Mov
	return 2; // 0x5d2 Return
}


func_716()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2cc PushV
	WaitForAnimEnd(); // 0x2cd Func
	var_23_bool = 0; // 0x2cf PushV
	func_853(var_23_bool); // 0x2d0 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2d2 Not
	if(var_24_bool == 0) goto Label_725; // 0x2d3 JumpB
	return 12; // 0x2d4 Return
	
Label_725:
	var_25_int = 0; // 0x2d5 PushV
	func_1288(var_25_int); // 0x2d6 NEW_2
	var_17_int = var_25_int; // 0x2d7 Mov
	var_18_int = 0; // 0x2d9 MovI
	
Label_730:
	var_38_bool = 0; // 0x2da PushV
	var_38_bool = 0; // 0x2db MovB
	var_39_int = 5; // 0x2dc PushI
	var_40_bool = var_18_int < var_39_int; // 0x2dd LT
	if(var_40_bool == 0) goto Label_740; // 0x2de JumpB
	var_41_bool = 0; // 0x2df PushV
	func_853(var_41_bool); // 0x2e0 NEW_2
	if(var_41_bool == 0) goto Label_740; // 0x2e2 JumpB
	var_38_bool = 1; // 0x2e3 MovB
	
Label_740:
	if(var_38_bool == 0) goto Label_782; // 0x2e4 JumpB
	var_42_bool = var_17_int == 0; // 0x2e5 Not
	if(var_42_bool == 0) goto Label_750; // 0x2e6 JumpB
	var_43_int = 3; // 0x2e7 PushI
	Sleep(var_43_int, var_19_bool); // 0x2e8 Func
	var_44_bool = var_19_bool == 0; // 0x2ea Not
	if(var_44_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_782; // 0x2ec Jump
	
Label_782:
	ResetAAS(); // 0x30e Func
	return 12; // 0x310 Return
	
Label_749:
	goto Label_771; // 0x2ed Jump
	
Label_771:
	var_45_bool = 0; // 0x303 PushV
	func_785(var_45_bool); // 0x304 NEW_2
	var_46_bool = var_45_bool == 0; // 0x306 Not
	if(var_46_bool == 0) goto Label_777; // 0x307 JumpB
	goto Label_782; // 0x308 Jump
	
Label_777:
	ResetAAS(); // 0x309 Func
	var_47_int = 1; // 0x30b PushI
	var_18_int = var_18_int + var_47_int; // 0x30c Add2
	goto Label_730; // 0x30d Jump
	
Label_750:
	irand(var_20_int, var_17_int); // 0x2ee Func
	var_48_int = 5; // 0x2f0 PushI
	irand(var_21_int, var_48_int); // 0x2f1 Func
	var_49_int = 0; // 0x2f3 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2f4 Neq
	if(var_50_bool == 0) goto Label_759; // 0x2f5 JumpB
	var_20_int = 0; // 0x2f6 MovI
	
Label_759:
	var_51_string = "all"; // 0x2f7 PushS
	var_52_string = ""; var_53_int = 0; // 0x2f8 PushV
	var_53_int = var_20_int; // 0x2f9 Mov
	func_1281(var_52_string, var_53_int); // 0x2fa NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2fc Func
	WaitForAnimEnd(var_22_bool); // 0x2fe Func
	var_54_bool = var_22_bool == 0; // 0x300 Not
	if(var_54_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_782; // 0x302 Jump
}


func_1492(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x5d4 PushV
	var_47_object = Obj(); // 0x5d5 PushV
	func_1479(var_47_object); // 0x5d6 NEW_2
	var_44_object = var_47_object; // 0x5d7 Mov
	Find(var_40_int, var_45_object); // 0x5d9 ObjFunc
	var_52_bool = var_45_object == 0; // 0x5db Not
	if(var_52_bool == 0) goto Label_1507; // 0x5dc JumpB
	var_53_string = "Can't find diary parent with id: "; // 0x5dd PushS
	var_54_int = var_53_string + var_40_int; // 0x5de Add
	Trace(var_54_int); // 0x5df Func
	var_38_bool = 0; // 0x5e1 MovB
	return 6; // 0x5e2 Return
	
Label_1507:
	AddChild(var_39_object); // 0x5e3 ObjFunc
	var_55_int = 7; // 0x5e5 PushI
	SendWorldWndMessage(var_55_int); // 0x5e6 Func
	GetCategory(var_46_int); // 0x5e8 ObjFunc
	SetDiarySection(var_46_int); // 0x5ea Func
	var_38_bool = 0; // 0x5ec MovB
	return 6; // 0x5ed Return
}


func_1245(var_107_float)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x4dd PushV
	CreateFloatVector(var_109_object); // 0x4de Func
	add(var_107_float); // 0x4e0 ObjFunc
	var_110_int = 16; // 0x4e2 PushI
	SendWorldWndMessage(var_110_int, var_109_object); // 0x4e3 Func
	return 2; // 0x4e5 Return
}


func_1255(var_64_bool, var_65_string, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x4e7 PushV
	FindActor(var_68_object, var_65_string); // 0x4e8 Func
	var_69_bool = var_68_object == 0; // 0x4ea NullEq
	if(var_69_bool == 0) goto Label_1262; // 0x4eb JumpB
	var_64_bool = 0; // 0x4ec MovB
	return 2; // 0x4ed Return
	
Label_1262:
	Trigger(var_68_object, var_66_string); // 0x4ee Func
	var_64_bool = 1; // 0x4f0 MovB
	return 2; // 0x4f1 Return
}


func_1001(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3e9 PushV
	var_115_string = "c"; // 0x3ea MovS
	var_116_int = 0; // 0x3eb MovI
	
Label_1004:
	var_120_int = 1; // 0x3ec PushI
	if(var_120_int == 0) goto Label_1017; // 0x3ed JumpB
	var_121_int = 1; // 0x3ee PushI
	var_122_int = var_116_int + var_121_int; // 0x3ef Add
	var_123_int = var_115_string + var_122_int; // 0x3f0 Add
	HasProperty(var_123_int, var_117_bool); // 0x3f1 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3f3 Not
	if(var_124_bool == 0) goto Label_1014; // 0x3f4 JumpB
	goto Label_1017; // 0x3f5 Jump
	
Label_1017:
	var_125_bool = var_116_int == 0; // 0x3f9 Not
	if(var_125_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_108_bool = 0; // 0x3fb MovB
	return 10; // 0x3fc Return
	
Label_1021:
	var_118_int = 0; // 0x3fd MovI
	var_126_int = 1; // 0x3fe PushI
	var_127_bool = var_116_int > var_126_int; // 0x3ff GT
	if(var_127_bool == 0) goto Label_1027; // 0x400 JumpB
	irand(var_118_int, var_116_int); // 0x401 Func
	
Label_1027:
	var_128_int = 1; // 0x403 PushI
	var_129_int = var_118_int + var_128_int; // 0x404 Add
	var_130_int = var_115_string + var_129_int; // 0x405 Add
	GetProperty(var_130_int, var_119_string); // 0x406 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x408 PushV
	var_132_string = var_119_string; // 0x409 Mov
	func_1112(var_131_bool, var_132_string); // 0x40a NEW_2
	var_108_bool = var_131_bool; // 0x40b Mov
	return 10; // 0x40d Return
	
Label_1014:
	var_137_int = 1; // 0x3f6 PushI
	var_116_int = var_116_int + var_137_int; // 0x3f7 Add2
	goto Label_1004; // 0x3f8 Jump
}


func_491(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1ec PushV
	var_27_object = var_25_object; // 0x1ed Mov
	TaskCall(0); // 0x1ee TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1ef NEW_2
	TaskReturn(); // 0x1f0 TaskReturn
	return 0; // 0x1f2 Return
}


func_1520(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x5f0 PushV
	GetMainOutdoorScene(var_22_object); // 0x5f1 Func
	var_24_bool = var_22_object == 0; // 0x5f3 NullEq
	if(var_24_bool == 0) goto Label_1531; // 0x5f4 JumpB
	var_25_string = "Can't find main outdoor scene"; // 0x5f5 PushS
	Trace(var_25_string); // 0x5f6 Func
	var_23_object = 0; // 0x5f8 SetNull
	var_19_object = var_23_object; // 0x5f9 Mov
	return 4; // 0x5fa Return
	
Label_1531:
	GetMap(var_23_object); // 0x5fb ObjFunc
	var_19_object = var_23_object; // 0x5fd Mov
	return 4; // 0x5fe Return
}


func_1267(var_30_float)
{
	var_31_float = 0; var_32_float = 0; // 0x4f3 PushV
	GetGameTime(var_32_float); // 0x4f4 Func
	var_30_float = var_32_float; // 0x4f6 Mov
	return 2; // 0x4f7 Return
}


func_1272(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x4f8 PushV
	GetGameTime(var_154_float); // 0x4f9 Func
	var_155_int = 1; // 0x4fb PushI
	var_156_int = 0; // 0x4fc PushV
	var_157_int = 24; // 0x4fd PushI
	var_156_int = var_154_float / var_154_float; // 0x4fe Div2
	var_152_int = var_155_int + var_156_int; // 0x4ff Add2
	return 2; // 0x500 Return
}


