task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_6_int = 0; var_7_string = ""; var_8_int = 0; var_9_int = 0; var_10_string = ""; var_11_int = 0; // 0x54 PushV
	var_9_int = 0; // 0x55 MovI
	var_12_int = 200; // 0x56 PushI
	GetStringByID(var_10_string, var_12_int); // 0x57 Func
	var_13_string = "default"; // 0x59 PushS
	GetTextHeightInWidth(var_9_int, var_13_string, var_10_string, var_10_string); // 0x5a Func
	var_14_int = 0; var_15_int = 0; // 0x5c PushV
	var_15_int = var_1_int + var_9_int; // 0x5d Add2
	func_119(var_11_int, var_14_int, var_15_int); // 0x5e NEW_2
	var_11_int = var_14_int; // 0x5f Mov
	var_429_int = 0; var_430_int = 0; // 0x61 PushV
	var_430_int = var_11_int; // 0x62 Mov
	func_209(var_11_int, var_429_int, var_430_int); // 0x63 NEW_2
	var_11_int = var_429_int; // 0x64 Mov
	var_500_int = var_1_int + var_9_int; // 0x66 Add
	var_501_bool = var_500_int < var_11_int; // 0x67 LT
	if(var_501_bool == 0) goto Label_112; // 0x68 JumpB
	var_502_string = "default"; // 0x69 PushS
	var_503_int = 0; // 0x6a PushI
	var_504_float = 1.0; // 0x6b PushF
	var_505_float = 1.0; // 0x6c PushF
	var_506_float = 1.0; // 0x6d PushF
	PrintInWidth(var_9_int, var_502_string, var_503_int, var_506_float, var_504_float, var_10_string, var_504_float, var_505_float, var_506_float); // 0x6e Func
	
Label_112:
	var_507_int = var_11_int - var_1_int; // 0x70 Sub
	var_2_int = var_507_int - var_4_int; // 0x71 Sub2
	var_508_int = 0; // 0x72 PushI
	var_509_bool = var_2_int < var_508_int; // 0x73 LT
	if(var_509_bool == 0) goto Label_118; // 0x74 JumpB
	var_2_int = 0; // 0x75 TMovI
	
Label_118:
	return 6; // 0x76 Return
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_int, var_7_int, var_8_float)
{
	var_9_int = 0; var_10_int = 0; // 0x11d PushV
	var_11_int = 140; // 0x11e PushI
	var_12_float = var_8_float * var_11_int; // 0x11f Mult
	var_13_int = 2; // 0x120 PushI
	var_10_int = var_12_float / var_12_float; // 0x121 Div2
	var_1_int = var_1_int + var_10_int; // 0x122 Add2
	func_295(var_9_int, var_10_int); // 0x124 NEW_2
	return 2; // 0x126 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_int, var_7_string, var_8_object)
{
	var_9_string = "scrollbar"; // 0x145 PushS
	var_10_bool = var_7_string == var_9_string; // 0x146 Eq
	if(var_10_bool == 0) goto Label_333; // 0x147 JumpB
	var_11_int = -var_2_int; // 0x148 Neg
	var_12_float = var_11_int * var_6_int; // 0x149 Mult
	var_13_int = 100; // 0x14a PushI
	var_1_int = var_12_float / var_12_float; // 0x14b Div2
	return 0; // 0x14c Return
	
Label_333:
	return 0; // 0x14d Return
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_1_int = 0; // 0x0 TMovI
	GetWindowSize(var_3_int, var_2_int); // 0x1 Func
	var_6_bool = 1; // 0x3 PushB
	EnableClipping(var_6_bool); // 0x4 Func
	var_7_bool = 1; // 0x6 PushB
	SetOwnerDraw(var_7_bool); // 0x7 Func
	func_15(var_5_object); // 0xa NEW_2
	ProcessEvents(); // 0xc Func
	return 0; // 0xe Return
}


func_1190(var_21_bool, var_22_int)
{
	var_23_int = 18; // 0x4a7 PushI
	add(var_23_int); // 0x4a8 ObjFunc
	var_24_int = 24; // 0x4aa PushI
	add(var_24_int); // 0x4ab ObjFunc
	var_25_int = 20; // 0x4ad PushI
	add(var_25_int); // 0x4ae ObjFunc
	var_26_int = 14; // 0x4b0 PushI
	add(var_26_int); // 0x4b1 ObjFunc
	var_27_bool = 0; // 0x4b3 PushB
	var_28_bool = var_21_bool == var_27_bool; // 0x4b4 Eq
	if(var_28_bool == 0) goto Label_1216; // 0x4b5 JumpB
	var_29_int = 10; // 0x4b6 PushI
	add(var_29_int); // 0x4b7 ObjFunc
	var_30_int = 17; // 0x4b9 PushI
	add(var_30_int); // 0x4ba ObjFunc
	var_31_int = 8; // 0x4bc PushI
	add(var_31_int); // 0x4bd ObjFunc
	goto Label_1222; // 0x4bf Jump
	
Label_1222:
	return 0; // 0x4c6 Return
	
Label_1216:
	var_32_int = 1; // 0x4c0 PushI
	var_33_bool = var_22_int != var_32_int; // 0x4c1 Neq
	if(var_33_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_34_int = 10; // 0x4c3 PushI
	add(var_34_int); // 0x4c4 ObjFunc
}


func_1318(var_14_int)
{
	var_15_int = 0; var_16_int = 0; // 0x526 PushV
	var_17_string = "branch"; // 0x527 PushS
	GetVariable(var_17_string, var_16_int); // 0x528 Func
	var_14_int = var_16_int; // 0x52a Mov
	return 2; // 0x52b Return
}


func_1256(var_248_bool)
{
	var_250_int = 7; // 0x4e9 PushI
	add(var_250_int); // 0x4ea ObjFunc
	var_251_int = 23; // 0x4ec PushI
	add(var_251_int); // 0x4ed ObjFunc
	var_252_int = 21; // 0x4ef PushI
	add(var_252_int); // 0x4f0 ObjFunc
	var_253_int = 9; // 0x4f2 PushI
	add(var_253_int); // 0x4f3 ObjFunc
	var_254_int = 3; // 0x4f5 PushI
	add(var_254_int); // 0x4f6 ObjFunc
	var_255_int = 1; // 0x4f8 PushI
	add(var_255_int); // 0x4f9 ObjFunc
	var_256_int = 11; // 0x4fb PushI
	add(var_256_int); // 0x4fc ObjFunc
	var_257_int = 13; // 0x4fe PushI
	add(var_257_int); // 0x4ff ObjFunc
	var_258_bool = 0; // 0x501 PushB
	var_259_bool = var_248_bool == var_258_bool; // 0x502 Eq
	if(var_259_bool == 0) goto Label_1287; // 0x503 JumpB
	var_260_int = 25; // 0x504 PushI
	add(var_260_int); // 0x505 ObjFunc
	
Label_1287:
	return 0; // 0x507 Return
}


func_1288(var_462_bool, var_463_int)
{
	var_464_int = 0; var_465_int = 0; // 0x508 PushV
	var_466_string = "vol_"; // 0x509 PushS
	var_467_int = var_466_string + var_463_int; // 0x50a Add
	GetVariable(var_467_int, var_465_int); // 0x50b Func
	var_468_int = 4; // 0x50d PushI
	var_469_int = var_465_int & var_468_int; // 0x50e And
	var_470_int = 0; // 0x50f PushI
	var_462_bool = var_469_int != var_470_int; // 0x510 Neq2
	return 2; // 0x511 Return
}


func_1223(var_233_bool, var_234_int)
{
	var_235_int = 6; // 0x4c8 PushI
	add(var_235_int); // 0x4c9 ObjFunc
	var_236_int = 26; // 0x4cb PushI
	add(var_236_int); // 0x4cc ObjFunc
	var_237_int = 2; // 0x4ce PushI
	add(var_237_int); // 0x4cf ObjFunc
	var_238_int = 22; // 0x4d1 PushI
	add(var_238_int); // 0x4d2 ObjFunc
	var_239_bool = 0; // 0x4d4 PushB
	var_240_bool = var_233_bool == var_239_bool; // 0x4d5 Eq
	if(var_240_bool == 0) goto Label_1249; // 0x4d6 JumpB
	var_241_int = 15; // 0x4d7 PushI
	add(var_241_int); // 0x4d8 ObjFunc
	var_242_int = 5; // 0x4da PushI
	add(var_242_int); // 0x4db ObjFunc
	var_243_int = 16; // 0x4dd PushI
	add(var_243_int); // 0x4de ObjFunc
	goto Label_1255; // 0x4e0 Jump
	
Label_1255:
	return 0; // 0x4e7 Return
	
Label_1249:
	var_244_int = 0; // 0x4e1 PushI
	var_245_bool = var_234_int != var_244_int; // 0x4e2 Neq
	if(var_245_bool == 0) goto Label_1255; // 0x4e3 JumpB
	var_246_int = 15; // 0x4e4 PushI
	add(var_246_int); // 0x4e5 ObjFunc
}


func_295(var_1_int, var_2_int)
{
	var_14_int = 0; // 0x127 PushI
	var_15_bool = var_2_int < var_14_int; // 0x128 LT
	if(var_15_bool == 0) goto Label_299; // 0x129 JumpB
	var_2_int = 0; // 0x12a TMovI
	
Label_299:
	var_16_int = -var_1_int; // 0x12b Neg
	var_17_bool = var_16_int > var_2_int; // 0x12c GT
	if(var_17_bool == 0) goto Label_304; // 0x12d JumpB
	var_1_int = -var_2_int; // 0x12e Neg2
	goto Label_308; // 0x12f Jump
	
Label_308:
	var_18_int = 0; // 0x134 PushI
	var_19_bool = var_2_int == var_18_int; // 0x135 Eq
	if(var_19_bool == 0) goto Label_316; // 0x136 JumpB
	var_20_int = 16384; // 0x137 PushI
	var_21_string = "scrollbar"; // 0x138 PushS
	SendMessage(var_20_int, var_21_string); // 0x139 Func
	goto Label_323; // 0x13b Jump
	
Label_323:
	return 0; // 0x143 Return
	
Label_316:
	var_22_int = -var_1_int; // 0x13c Neg
	var_23_int = 100; // 0x13d PushI
	var_24_float = var_22_int * var_23_int; // 0x13e Mult
	var_25_float = var_24_float / var_2_int; // 0x13f Div
	var_26_string = "scrollbar"; // 0x140 PushS
	SendMessage(var_25_float, var_26_string); // 0x141 Func
	
Label_304:
	var_27_int = 0; // 0x130 PushI
	var_28_bool = var_1_int > var_27_int; // 0x131 GT
	if(var_28_bool == 0) goto Label_308; // 0x132 JumpB
	var_1_int = 0; // 0x133 TMovI
}


func_334(var_220_int, var_221_int)
{
	var_222_int = 1; // 0x14f PushI
	var_223_bool = var_221_int == var_222_int; // 0x150 Eq
	if(var_223_bool == 0) goto Label_340; // 0x151 JumpB
	var_220_int = 502854; // 0x152 MovI
	return 0; // 0x153 Return
	
Label_340:
	var_224_int = 2; // 0x154 PushI
	var_225_bool = var_221_int == var_224_int; // 0x155 Eq
	if(var_225_bool == 0) goto Label_345; // 0x156 JumpB
	var_220_int = 502855; // 0x157 MovI
	return 0; // 0x158 Return
	
Label_345:
	var_226_int = 3; // 0x159 PushI
	var_227_bool = var_221_int == var_226_int; // 0x15a Eq
	if(var_227_bool == 0) goto Label_350; // 0x15b JumpB
	var_220_int = 502856; // 0x15c MovI
	return 0; // 0x15d Return
	
Label_350:
	var_228_int = 4; // 0x15e PushI
	var_229_bool = var_221_int == var_228_int; // 0x15f Eq
	if(var_229_bool == 0) goto Label_355; // 0x160 JumpB
	var_220_int = 502857; // 0x161 MovI
	return 0; // 0x162 Return
	
Label_355:
	var_230_int = 5; // 0x163 PushI
	var_231_bool = var_221_int == var_230_int; // 0x164 Eq
	if(var_231_bool == 0) goto Label_360; // 0x165 JumpB
	var_220_int = 502858; // 0x166 MovI
	return 0; // 0x167 Return
	
Label_360:
	var_232_int = 6; // 0x168 PushI
	var_233_bool = var_221_int == var_232_int; // 0x169 Eq
	if(var_233_bool == 0) goto Label_365; // 0x16a JumpB
	var_220_int = 502859; // 0x16b MovI
	return 0; // 0x16c Return
	
Label_365:
	var_234_int = 7; // 0x16d PushI
	var_235_bool = var_221_int == var_234_int; // 0x16e Eq
	if(var_235_bool == 0) goto Label_370; // 0x16f JumpB
	var_220_int = 502860; // 0x170 MovI
	return 0; // 0x171 Return
	
Label_370:
	var_236_int = 8; // 0x172 PushI
	var_237_bool = var_221_int == var_236_int; // 0x173 Eq
	if(var_237_bool == 0) goto Label_375; // 0x174 JumpB
	var_220_int = 502861; // 0x175 MovI
	return 0; // 0x176 Return
	
Label_375:
	var_238_int = 9; // 0x177 PushI
	var_239_bool = var_221_int == var_238_int; // 0x178 Eq
	if(var_239_bool == 0) goto Label_380; // 0x179 JumpB
	var_220_int = 502862; // 0x17a MovI
	return 0; // 0x17b Return
	
Label_380:
	var_240_int = 10; // 0x17c PushI
	var_241_bool = var_221_int == var_240_int; // 0x17d Eq
	if(var_241_bool == 0) goto Label_385; // 0x17e JumpB
	var_220_int = 502863; // 0x17f MovI
	return 0; // 0x180 Return
	
Label_385:
	var_242_int = 11; // 0x181 PushI
	var_243_bool = var_221_int == var_242_int; // 0x182 Eq
	if(var_243_bool == 0) goto Label_390; // 0x183 JumpB
	var_220_int = 502864; // 0x184 MovI
	return 0; // 0x185 Return
	
Label_390:
	var_244_int = 12; // 0x186 PushI
	var_245_bool = var_221_int == var_244_int; // 0x187 Eq
	if(var_245_bool == 0) goto Label_395; // 0x188 JumpB
	var_220_int = 502865; // 0x189 MovI
	return 0; // 0x18a Return
	
Label_395:
	var_246_int = 13; // 0x18b PushI
	var_247_bool = var_221_int == var_246_int; // 0x18c Eq
	if(var_247_bool == 0) goto Label_400; // 0x18d JumpB
	var_220_int = 502866; // 0x18e MovI
	return 0; // 0x18f Return
	
Label_400:
	var_248_int = 14; // 0x190 PushI
	var_249_bool = var_221_int == var_248_int; // 0x191 Eq
	if(var_249_bool == 0) goto Label_405; // 0x192 JumpB
	var_220_int = 502867; // 0x193 MovI
	return 0; // 0x194 Return
	
Label_405:
	var_250_int = 15; // 0x195 PushI
	var_251_bool = var_221_int == var_250_int; // 0x196 Eq
	if(var_251_bool == 0) goto Label_410; // 0x197 JumpB
	var_220_int = 502868; // 0x198 MovI
	return 0; // 0x199 Return
	
Label_410:
	var_252_int = 16; // 0x19a PushI
	var_253_bool = var_221_int == var_252_int; // 0x19b Eq
	if(var_253_bool == 0) goto Label_415; // 0x19c JumpB
	var_220_int = 502869; // 0x19d MovI
	return 0; // 0x19e Return
	
Label_415:
	var_254_int = 17; // 0x19f PushI
	var_255_bool = var_221_int == var_254_int; // 0x1a0 Eq
	if(var_255_bool == 0) goto Label_420; // 0x1a1 JumpB
	var_220_int = 502870; // 0x1a2 MovI
	return 0; // 0x1a3 Return
	
Label_420:
	var_256_int = 18; // 0x1a4 PushI
	var_257_bool = var_221_int == var_256_int; // 0x1a5 Eq
	if(var_257_bool == 0) goto Label_425; // 0x1a6 JumpB
	var_220_int = 502871; // 0x1a7 MovI
	return 0; // 0x1a8 Return
	
Label_425:
	var_258_int = 19; // 0x1a9 PushI
	var_259_bool = var_221_int == var_258_int; // 0x1aa Eq
	if(var_259_bool == 0) goto Label_430; // 0x1ab JumpB
	var_220_int = 502872; // 0x1ac MovI
	return 0; // 0x1ad Return
	
Label_430:
	var_260_int = 20; // 0x1ae PushI
	var_261_bool = var_221_int == var_260_int; // 0x1af Eq
	if(var_261_bool == 0) goto Label_435; // 0x1b0 JumpB
	var_220_int = 502873; // 0x1b1 MovI
	return 0; // 0x1b2 Return
	
Label_435:
	var_262_int = 21; // 0x1b3 PushI
	var_263_bool = var_221_int == var_262_int; // 0x1b4 Eq
	if(var_263_bool == 0) goto Label_440; // 0x1b5 JumpB
	var_220_int = 502874; // 0x1b6 MovI
	return 0; // 0x1b7 Return
	
Label_440:
	var_264_int = 22; // 0x1b8 PushI
	var_265_bool = var_221_int == var_264_int; // 0x1b9 Eq
	if(var_265_bool == 0) goto Label_445; // 0x1ba JumpB
	var_220_int = 502875; // 0x1bb MovI
	return 0; // 0x1bc Return
	
Label_445:
	var_266_int = 23; // 0x1bd PushI
	var_267_bool = var_221_int == var_266_int; // 0x1be Eq
	if(var_267_bool == 0) goto Label_450; // 0x1bf JumpB
	var_220_int = 502876; // 0x1c0 MovI
	return 0; // 0x1c1 Return
	
Label_450:
	var_268_int = 24; // 0x1c2 PushI
	var_269_bool = var_221_int == var_268_int; // 0x1c3 Eq
	if(var_269_bool == 0) goto Label_455; // 0x1c4 JumpB
	var_220_int = 502877; // 0x1c5 MovI
	return 0; // 0x1c6 Return
	
Label_455:
	var_270_int = 25; // 0x1c7 PushI
	var_271_bool = var_221_int == var_270_int; // 0x1c8 Eq
	if(var_271_bool == 0) goto Label_460; // 0x1c9 JumpB
	var_220_int = 502878; // 0x1ca MovI
	return 0; // 0x1cb Return
	
Label_460:
	var_272_int = 26; // 0x1cc PushI
	var_273_bool = var_221_int == var_272_int; // 0x1cd Eq
	if(var_273_bool == 0) goto Label_465; // 0x1ce JumpB
	var_220_int = 502879; // 0x1cf MovI
	return 0; // 0x1d0 Return
	
Label_465:
	var_274_int = 27; // 0x1d1 PushI
	var_275_bool = var_221_int == var_274_int; // 0x1d2 Eq
	if(var_275_bool == 0) goto Label_470; // 0x1d3 JumpB
	var_220_int = 503340; // 0x1d4 MovI
	return 0; // 0x1d5 Return
	
Label_470:
	var_276_int = 28; // 0x1d6 PushI
	var_277_bool = var_221_int == var_276_int; // 0x1d7 Eq
	if(var_277_bool == 0) goto Label_475; // 0x1d8 JumpB
	var_220_int = 503341; // 0x1d9 MovI
	return 0; // 0x1da Return
	
Label_475:
	var_278_int = 29; // 0x1db PushI
	var_279_bool = var_221_int == var_278_int; // 0x1dc Eq
	if(var_279_bool == 0) goto Label_480; // 0x1dd JumpB
	var_220_int = 503342; // 0x1de MovI
	return 0; // 0x1df Return
	
Label_480:
	var_280_int = 30; // 0x1e0 PushI
	var_281_bool = var_221_int == var_280_int; // 0x1e1 Eq
	if(var_281_bool == 0) goto Label_485; // 0x1e2 JumpB
	var_220_int = 503343; // 0x1e3 MovI
	return 0; // 0x1e4 Return
	
Label_485:
	var_282_int = 31; // 0x1e5 PushI
	var_283_bool = var_221_int == var_282_int; // 0x1e6 Eq
	if(var_283_bool == 0) goto Label_490; // 0x1e7 JumpB
	var_220_int = 503344; // 0x1e8 MovI
	return 0; // 0x1e9 Return
	
Label_490:
	var_284_int = 32; // 0x1ea PushI
	var_285_bool = var_221_int == var_284_int; // 0x1eb Eq
	if(var_285_bool == 0) goto Label_495; // 0x1ec JumpB
	var_220_int = 503345; // 0x1ed MovI
	return 0; // 0x1ee Return
	
Label_495:
	var_286_int = 33; // 0x1ef PushI
	var_287_bool = var_221_int == var_286_int; // 0x1f0 Eq
	if(var_287_bool == 0) goto Label_500; // 0x1f1 JumpB
	var_220_int = 503346; // 0x1f2 MovI
	return 0; // 0x1f3 Return
	
Label_500:
	var_288_int = 34; // 0x1f4 PushI
	var_289_bool = var_221_int == var_288_int; // 0x1f5 Eq
	if(var_289_bool == 0) goto Label_505; // 0x1f6 JumpB
	var_220_int = 503347; // 0x1f7 MovI
	return 0; // 0x1f8 Return
	
Label_505:
	var_290_int = 35; // 0x1f9 PushI
	var_291_bool = var_221_int == var_290_int; // 0x1fa Eq
	if(var_291_bool == 0) goto Label_510; // 0x1fb JumpB
	var_220_int = 503348; // 0x1fc MovI
	return 0; // 0x1fd Return
	
Label_510:
	var_292_int = 36; // 0x1fe PushI
	var_293_bool = var_221_int == var_292_int; // 0x1ff Eq
	if(var_293_bool == 0) goto Label_515; // 0x200 JumpB
	var_220_int = 503349; // 0x201 MovI
	return 0; // 0x202 Return
	
Label_515:
	var_294_int = 37; // 0x203 PushI
	var_295_bool = var_221_int == var_294_int; // 0x204 Eq
	if(var_295_bool == 0) goto Label_520; // 0x205 JumpB
	var_220_int = 503350; // 0x206 MovI
	return 0; // 0x207 Return
	
Label_520:
	var_296_int = 38; // 0x208 PushI
	var_297_bool = var_221_int == var_296_int; // 0x209 Eq
	if(var_297_bool == 0) goto Label_525; // 0x20a JumpB
	var_220_int = 503351; // 0x20b MovI
	return 0; // 0x20c Return
	
Label_525:
	var_298_int = 39; // 0x20d PushI
	var_299_bool = var_221_int == var_298_int; // 0x20e Eq
	if(var_299_bool == 0) goto Label_530; // 0x20f JumpB
	var_220_int = 503352; // 0x210 MovI
	return 0; // 0x211 Return
	
Label_530:
	var_300_int = 40; // 0x212 PushI
	var_301_bool = var_221_int == var_300_int; // 0x213 Eq
	if(var_301_bool == 0) goto Label_535; // 0x214 JumpB
	var_220_int = 503353; // 0x215 MovI
	return 0; // 0x216 Return
	
Label_535:
	var_302_int = 42; // 0x217 PushI
	var_303_bool = var_221_int == var_302_int; // 0x218 Eq
	if(var_303_bool == 0) goto Label_540; // 0x219 JumpB
	var_220_int = 503354; // 0x21a MovI
	return 0; // 0x21b Return
	
Label_540:
	var_304_int = 43; // 0x21c PushI
	var_305_bool = var_221_int == var_304_int; // 0x21d Eq
	if(var_305_bool == 0) goto Label_545; // 0x21e JumpB
	var_220_int = 503355; // 0x21f MovI
	return 0; // 0x220 Return
	
Label_545:
	var_306_int = 44; // 0x221 PushI
	var_307_bool = var_221_int == var_306_int; // 0x222 Eq
	if(var_307_bool == 0) goto Label_550; // 0x223 JumpB
	var_220_int = 504029; // 0x224 MovI
	return 0; // 0x225 Return
	
Label_550:
	var_308_int = 46; // 0x226 PushI
	var_309_bool = var_221_int == var_308_int; // 0x227 Eq
	if(var_309_bool == 0) goto Label_555; // 0x228 JumpB
	var_220_int = 504031; // 0x229 MovI
	return 0; // 0x22a Return
	
Label_555:
	var_310_int = 47; // 0x22b PushI
	var_311_bool = var_221_int == var_310_int; // 0x22c Eq
	if(var_311_bool == 0) goto Label_560; // 0x22d JumpB
	var_220_int = 504032; // 0x22e MovI
	return 0; // 0x22f Return
	
Label_560:
	var_312_int = 48; // 0x230 PushI
	var_313_bool = var_221_int == var_312_int; // 0x231 Eq
	if(var_313_bool == 0) goto Label_565; // 0x232 JumpB
	var_220_int = 506270; // 0x233 MovI
	return 0; // 0x234 Return
	
Label_565:
	var_314_int = 49; // 0x235 PushI
	var_315_bool = var_221_int == var_314_int; // 0x236 Eq
	if(var_315_bool == 0) goto Label_570; // 0x237 JumpB
	var_220_int = 506271; // 0x238 MovI
	return 0; // 0x239 Return
	
Label_570:
	var_316_int = 50; // 0x23a PushI
	var_317_bool = var_221_int == var_316_int; // 0x23b Eq
	if(var_317_bool == 0) goto Label_575; // 0x23c JumpB
	var_220_int = 506272; // 0x23d MovI
	return 0; // 0x23e Return
	
Label_575:
	var_318_int = 51; // 0x23f PushI
	var_319_bool = var_221_int == var_318_int; // 0x240 Eq
	if(var_319_bool == 0) goto Label_580; // 0x241 JumpB
	var_220_int = 506273; // 0x242 MovI
	return 0; // 0x243 Return
	
Label_580:
	var_320_int = 52; // 0x244 PushI
	var_321_bool = var_221_int == var_320_int; // 0x245 Eq
	if(var_321_bool == 0) goto Label_585; // 0x246 JumpB
	var_220_int = 506274; // 0x247 MovI
	return 0; // 0x248 Return
	
Label_585:
	var_322_int = 53; // 0x249 PushI
	var_323_bool = var_221_int == var_322_int; // 0x24a Eq
	if(var_323_bool == 0) goto Label_590; // 0x24b JumpB
	var_220_int = 506275; // 0x24c MovI
	return 0; // 0x24d Return
	
Label_590:
	var_324_int = 54; // 0x24e PushI
	var_325_bool = var_221_int == var_324_int; // 0x24f Eq
	if(var_325_bool == 0) goto Label_595; // 0x250 JumpB
	var_220_int = 506276; // 0x251 MovI
	return 0; // 0x252 Return
	
Label_595:
	var_326_int = 55; // 0x253 PushI
	var_327_bool = var_221_int == var_326_int; // 0x254 Eq
	if(var_327_bool == 0) goto Label_600; // 0x255 JumpB
	var_220_int = 506277; // 0x256 MovI
	return 0; // 0x257 Return
	
Label_600:
	var_328_int = 56; // 0x258 PushI
	var_329_bool = var_221_int == var_328_int; // 0x259 Eq
	if(var_329_bool == 0) goto Label_605; // 0x25a JumpB
	var_220_int = 506278; // 0x25b MovI
	return 0; // 0x25c Return
	
Label_605:
	var_330_int = 57; // 0x25d PushI
	var_331_bool = var_221_int == var_330_int; // 0x25e Eq
	if(var_331_bool == 0) goto Label_610; // 0x25f JumpB
	var_220_int = 506279; // 0x260 MovI
	return 0; // 0x261 Return
	
Label_610:
	var_332_int = 58; // 0x262 PushI
	var_333_bool = var_221_int == var_332_int; // 0x263 Eq
	if(var_333_bool == 0) goto Label_615; // 0x264 JumpB
	var_220_int = 506280; // 0x265 MovI
	return 0; // 0x266 Return
	
Label_615:
	var_334_int = 59; // 0x267 PushI
	var_335_bool = var_221_int == var_334_int; // 0x268 Eq
	if(var_335_bool == 0) goto Label_620; // 0x269 JumpB
	var_220_int = 506281; // 0x26a MovI
	return 0; // 0x26b Return
	
Label_620:
	var_336_int = 60; // 0x26c PushI
	var_337_bool = var_221_int == var_336_int; // 0x26d Eq
	if(var_337_bool == 0) goto Label_625; // 0x26e JumpB
	var_220_int = 506282; // 0x26f MovI
	return 0; // 0x270 Return
	
Label_625:
	var_338_int = 61; // 0x271 PushI
	var_339_bool = var_221_int == var_338_int; // 0x272 Eq
	if(var_339_bool == 0) goto Label_630; // 0x273 JumpB
	var_220_int = 506283; // 0x274 MovI
	return 0; // 0x275 Return
	
Label_630:
	var_340_int = 62; // 0x276 PushI
	var_341_bool = var_221_int == var_340_int; // 0x277 Eq
	if(var_341_bool == 0) goto Label_635; // 0x278 JumpB
	var_220_int = 506284; // 0x279 MovI
	return 0; // 0x27a Return
	
Label_635:
	var_342_int = 63; // 0x27b PushI
	var_343_bool = var_221_int == var_342_int; // 0x27c Eq
	if(var_343_bool == 0) goto Label_640; // 0x27d JumpB
	var_220_int = 506285; // 0x27e MovI
	return 0; // 0x27f Return
	
Label_640:
	var_344_int = 64; // 0x280 PushI
	var_345_bool = var_221_int == var_344_int; // 0x281 Eq
	if(var_345_bool == 0) goto Label_645; // 0x282 JumpB
	var_220_int = 506286; // 0x283 MovI
	return 0; // 0x284 Return
	
Label_645:
	var_346_int = 65; // 0x285 PushI
	var_347_bool = var_221_int == var_346_int; // 0x286 Eq
	if(var_347_bool == 0) goto Label_650; // 0x287 JumpB
	var_220_int = 506287; // 0x288 MovI
	return 0; // 0x289 Return
	
Label_650:
	var_348_int = 66; // 0x28a PushI
	var_349_bool = var_221_int == var_348_int; // 0x28b Eq
	if(var_349_bool == 0) goto Label_655; // 0x28c JumpB
	var_220_int = 511961; // 0x28d MovI
	return 0; // 0x28e Return
	
Label_655:
	var_350_int = 67; // 0x28f PushI
	var_351_bool = var_221_int == var_350_int; // 0x290 Eq
	if(var_351_bool == 0) goto Label_660; // 0x291 JumpB
	var_220_int = 512582; // 0x292 MovI
	return 0; // 0x293 Return
	
Label_660:
	var_352_int = 68; // 0x294 PushI
	var_353_bool = var_221_int == var_352_int; // 0x295 Eq
	if(var_353_bool == 0) goto Label_665; // 0x296 JumpB
	var_220_int = 512583; // 0x297 MovI
	return 0; // 0x298 Return
	
Label_665:
	var_354_int = 69; // 0x299 PushI
	var_355_bool = var_221_int == var_354_int; // 0x29a Eq
	if(var_355_bool == 0) goto Label_670; // 0x29b JumpB
	var_220_int = 512611; // 0x29c MovI
	return 0; // 0x29d Return
	
Label_670:
	var_356_int = 70; // 0x29e PushI
	var_357_bool = var_221_int == var_356_int; // 0x29f Eq
	if(var_357_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_220_int = 513334; // 0x2a1 MovI
	return 0; // 0x2a2 Return
	
Label_675:
	var_358_int = 71; // 0x2a3 PushI
	var_359_bool = var_221_int == var_358_int; // 0x2a4 Eq
	if(var_359_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_220_int = 514839; // 0x2a6 MovI
	return 0; // 0x2a7 Return
	
Label_680:
	var_360_int = 72; // 0x2a8 PushI
	var_361_bool = var_221_int == var_360_int; // 0x2a9 Eq
	if(var_361_bool == 0) goto Label_685; // 0x2aa JumpB
	var_220_int = 514840; // 0x2ab MovI
	return 0; // 0x2ac Return
	
Label_685:
	var_362_int = 73; // 0x2ad PushI
	var_363_bool = var_221_int == var_362_int; // 0x2ae Eq
	if(var_363_bool == 0) goto Label_690; // 0x2af JumpB
	var_220_int = 514841; // 0x2b0 MovI
	return 0; // 0x2b1 Return
	
Label_690:
	var_364_int = 74; // 0x2b2 PushI
	var_365_bool = var_221_int == var_364_int; // 0x2b3 Eq
	if(var_365_bool == 0) goto Label_695; // 0x2b4 JumpB
	var_220_int = 518096; // 0x2b5 MovI
	return 0; // 0x2b6 Return
	
Label_695:
	var_366_int = 75; // 0x2b7 PushI
	var_367_bool = var_221_int == var_366_int; // 0x2b8 Eq
	if(var_367_bool == 0) goto Label_700; // 0x2b9 JumpB
	var_220_int = 518410; // 0x2ba MovI
	return 0; // 0x2bb Return
	
Label_700:
	var_368_int = 76; // 0x2bc PushI
	var_369_bool = var_221_int == var_368_int; // 0x2bd Eq
	if(var_369_bool == 0) goto Label_705; // 0x2be JumpB
	var_220_int = 518606; // 0x2bf MovI
	return 0; // 0x2c0 Return
	
Label_705:
	var_370_int = 77; // 0x2c1 PushI
	var_371_bool = var_221_int == var_370_int; // 0x2c2 Eq
	if(var_371_bool == 0) goto Label_710; // 0x2c3 JumpB
	var_220_int = 518715; // 0x2c4 MovI
	return 0; // 0x2c5 Return
	
Label_710:
	var_372_int = 78; // 0x2c6 PushI
	var_373_bool = var_221_int == var_372_int; // 0x2c7 Eq
	if(var_373_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_220_int = 521047; // 0x2c9 MovI
	return 0; // 0x2ca Return
	
Label_715:
	var_374_int = 79; // 0x2cb PushI
	var_375_bool = var_221_int == var_374_int; // 0x2cc Eq
	if(var_375_bool == 0) goto Label_720; // 0x2cd JumpB
	var_220_int = 527720; // 0x2ce MovI
	return 0; // 0x2cf Return
	
Label_720:
	var_376_int = 80; // 0x2d0 PushI
	var_377_bool = var_221_int == var_376_int; // 0x2d1 Eq
	if(var_377_bool == 0) goto Label_725; // 0x2d2 JumpB
	var_220_int = 529825; // 0x2d3 MovI
	return 0; // 0x2d4 Return
	
Label_725:
	var_378_int = 81; // 0x2d5 PushI
	var_379_bool = var_221_int == var_378_int; // 0x2d6 Eq
	if(var_379_bool == 0) goto Label_730; // 0x2d7 JumpB
	var_220_int = 529835; // 0x2d8 MovI
	return 0; // 0x2d9 Return
	
Label_730:
	var_380_int = 82; // 0x2da PushI
	var_381_bool = var_221_int == var_380_int; // 0x2db Eq
	if(var_381_bool == 0) goto Label_735; // 0x2dc JumpB
	var_220_int = 530493; // 0x2dd MovI
	return 0; // 0x2de Return
	
Label_735:
	var_382_int = 83; // 0x2df PushI
	var_383_bool = var_221_int == var_382_int; // 0x2e0 Eq
	if(var_383_bool == 0) goto Label_740; // 0x2e1 JumpB
	var_220_int = 531556; // 0x2e2 MovI
	return 0; // 0x2e3 Return
	
Label_740:
	var_384_int = 84; // 0x2e4 PushI
	var_385_bool = var_221_int == var_384_int; // 0x2e5 Eq
	if(var_385_bool == 0) goto Label_745; // 0x2e6 JumpB
	var_220_int = 533304; // 0x2e7 MovI
	return 0; // 0x2e8 Return
	
Label_745:
	var_386_int = 85; // 0x2e9 PushI
	var_387_bool = var_221_int == var_386_int; // 0x2ea Eq
	if(var_387_bool == 0) goto Label_750; // 0x2eb JumpB
	var_220_int = 539027; // 0x2ec MovI
	return 0; // 0x2ed Return
	
Label_750:
	var_388_int = 86; // 0x2ee PushI
	var_389_bool = var_221_int == var_388_int; // 0x2ef Eq
	if(var_389_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_220_int = 541571; // 0x2f1 MovI
	return 0; // 0x2f2 Return
	
Label_755:
	var_390_int = 87; // 0x2f3 PushI
	var_391_bool = var_221_int == var_390_int; // 0x2f4 Eq
	if(var_391_bool == 0) goto Label_760; // 0x2f5 JumpB
	var_220_int = 541581; // 0x2f6 MovI
	return 0; // 0x2f7 Return
	
Label_760:
	var_220_int = -1; // 0x2f8 MovI
	return 0; // 0x2f9 Return
}


func_15(var_5_object)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0xf PushV
	CreateIntVector(var_9_int); // 0x10 Func
	var_14_int = 0; // 0x12 PushV
	func_1318(var_14_int); // 0x13 NEW_2
	var_18_int = 1; // 0x15 PushI
	var_19_bool = var_14_int == var_18_int; // 0x16 Eq
	if(var_19_bool == 0) goto Label_31; // 0x17 JumpB
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; // 0x18 PushV
	var_20_object = var_5_object; // 0x19 MovT
	var_21_bool = 0; // 0x1a MovB
	var_22_int = 1; // 0x1b MovI
	func_1190(var_21_bool, var_22_int); // 0x1c NEW_2
	goto Label_50; // 0x1e Jump
	
Label_50:
	size(var_11_int); // 0x32 TObjFunc
	var_12_int = 0; // 0x34 MovI
	
Label_53:
	var_35_bool = var_12_int < var_11_int; // 0x35 LT
	if(var_35_bool == 0) goto Label_83; // 0x36 JumpB
	get(var_13_int, var_12_int); // 0x37 TObjFunc
	var_36_bool = 0; var_37_int = 0; // 0x39 PushV
	var_37_int = var_13_int; // 0x3a Mov
	func_1298(var_36_bool, var_37_int); // 0x3b NEW_2
	if(var_36_bool == 0) goto Label_69; // 0x3d JumpB
	var_45_string = ""; var_46_int = 0; // 0x3e PushV
	var_46_int = var_13_int; // 0x3f Mov
	func_762(var_45_string, var_46_int); // 0x40 NEW_2
	LoadImage(var_45_string); // 0x42 Func
	goto Label_80; // 0x44 Jump
	
Label_80:
	var_217_int = 1; // 0x50 PushI
	var_12_int = var_12_int + var_217_int; // 0x51 Add2
	goto Label_53; // 0x52 Jump
	
Label_69:
	var_218_bool = 0; var_219_int = 0; // 0x45 PushV
	var_219_int = var_13_int; // 0x46 Mov
	func_1308(var_218_bool, var_219_int); // 0x47 NEW_2
	if(var_218_bool == 0) goto Label_80; // 0x49 JumpB
	var_227_string = ""; var_228_int = 0; // 0x4a PushV
	var_228_int = var_13_int; // 0x4b Mov
	func_762(var_227_string, var_228_int); // 0x4c NEW_2
	LoadImage(var_227_string); // 0x4e Func
	
Label_83:
	return 6; // 0x53 Return
	
Label_31:
	var_229_int = 0; // 0x1f PushV
	func_1318(var_229_int); // 0x20 NEW_2
	var_230_int = 0; // 0x22 PushI
	var_231_bool = var_229_int == var_230_int; // 0x23 Eq
	if(var_231_bool == 0) goto Label_44; // 0x24 JumpB
	var_232_object = Obj(); var_233_bool = 0; var_234_int = 0; // 0x25 PushV
	var_232_object = var_5_object; // 0x26 MovT
	var_233_bool = 0; // 0x27 MovB
	var_234_int = 0; // 0x28 MovI
	func_1223(var_233_bool, var_234_int); // 0x29 NEW_2
	goto Label_50; // 0x2b Jump
	
Label_44:
	var_247_object = Obj(); var_248_bool = 0; var_249_int = 0; // 0x2c PushV
	var_247_object = var_5_object; // 0x2d MovT
	var_248_bool = 0; // 0x2e MovB
	var_249_int = 2; // 0x2f MovI
	func_1256(var_249_int); // 0x30 NEW_2
}


func_209(var_3_int, var_429_int, var_430_int)
{
	var_431_int = 0; var_432_int = 0; var_433_int = 0; var_434_bool = 0; var_435_int = 0; var_436_int = 0; var_437_int = 0; var_438_string = ""; var_439_int = 0; var_440_int = 0; var_441_int = 0; var_442_int = 0; var_443_bool = 0; var_444_int = 0; var_445_int = 0; var_446_int = 0; var_447_string = ""; var_448_int = 0; // 0xd1 PushV
	var_440_int = var_430_int; // 0xd2 Mov
	size(var_442_int); // 0xd3 TObjFunc
	var_443_bool = 1; // 0xd5 MovB
	var_444_int = 0; // 0xd6 MovI
	
Label_215:
	var_449_bool = var_444_int < var_442_int; // 0xd7 LT
	if(var_449_bool == 0) goto Label_279; // 0xd8 JumpB
	get(var_445_int, var_444_int); // 0xd9 TObjFunc
	var_450_bool = 0; var_451_int = 0; // 0xdb PushV
	var_451_int = var_445_int; // 0xdc Mov
	func_1308(var_450_bool, var_451_int); // 0xdd NEW_2
	if(var_450_bool == 0) goto Label_276; // 0xdf JumpB
	var_443_bool = 0; // 0xe0 MovB
	var_459_string = ""; var_460_int = 0; // 0xe1 PushV
	var_460_int = var_445_int; // 0xe2 Mov
	func_762(var_459_string, var_460_int); // 0xe3 NEW_2
	var_461_int = 0; // 0xe5 PushI
	Blit(var_459_string, var_461_int, var_440_int); // 0xe6 Func
	var_462_bool = 0; var_463_int = 0; // 0xe8 PushV
	var_463_int = var_445_int; // 0xe9 Mov
	func_1288(var_462_bool, var_463_int); // 0xea NEW_2
	if(var_462_bool == 0) goto Label_241; // 0xec JumpB
	var_471_string = "birdmask"; // 0xed PushS
	var_472_int = 0; // 0xee PushI
	Blit(var_471_string, var_472_int, var_440_int); // 0xef Func
	
Label_241:
	var_473_int = 0; var_474_int = 0; // 0xf1 PushV
	var_474_int = var_445_int; // 0xf2 Mov
	func_334(var_473_int, var_474_int); // 0xf3 NEW_2
	var_446_int = var_473_int; // 0xf4 Mov
	GetStringByID(var_447_string, var_446_int); // 0xf6 Func
	var_475_string = "name"; // 0xf8 PushS
	var_476_int = 2; // 0xf9 PushI
	var_477_float = var_476_int * var_3_int; // 0xfa Mult
	var_478_int = 5; // 0xfb PushI
	var_479_float = var_477_float / var_478_int; // 0xfc Div
	GetTextHeightInWidth(var_448_int, var_475_string, var_479_float, var_447_string); // 0xfd Func
	var_480_string = "name"; // 0xff PushS
	var_481_int = 3; // 0x100 PushI
	var_482_float = var_481_int * var_3_int; // 0x101 Mult
	var_483_int = 5; // 0x102 PushI
	var_484_float = var_482_float / var_483_int; // 0x103 Div
	var_485_int = 140; // 0x104 PushI
	var_486_int = var_440_int + var_485_int; // 0x105 Add
	var_487_int = var_486_int - var_448_int; // 0x106 Sub
	var_488_int = 15; // 0x107 PushI
	var_489_int = var_487_int - var_488_int; // 0x108 Sub
	var_490_int = 2; // 0x109 PushI
	var_491_float = var_490_int * var_3_int; // 0x10a Mult
	var_492_int = 5; // 0x10b PushI
	var_493_float = var_491_float / var_492_int; // 0x10c Div
	var_494_float = 0.6; // 0x10d PushF
	var_495_float = 0.6; // 0x10e PushF
	var_496_float = 0.6; // 0x10f PushF
	PrintInWidth(var_448_int, var_480_string, var_484_float, var_489_int, var_493_float, var_447_string, var_494_float, var_495_float, var_496_float); // 0x110 Func
	var_497_int = 140; // 0x112 PushI
	var_440_int = var_440_int + var_497_int; // 0x113 Add2
	
Label_276:
	var_498_int = 1; // 0x114 PushI
	var_444_int = var_444_int + var_498_int; // 0x115 Add2
	goto Label_215; // 0x116 Jump
	
Label_279:
	var_499_bool = var_443_bool; // 0x117 Push
	if(var_499_bool == 0) goto Label_283; // 0x118 JumpB
	var_429_int = var_430_int; // 0x119 Mov
	return 18; // 0x11a Return
	
Label_283:
	var_429_int = var_440_int; // 0x11b Mov
	return 18; // 0x11c Return
}


func_1298(var_36_bool, var_37_int)
{
	var_38_int = 0; var_39_int = 0; // 0x512 PushV
	var_40_string = "vol_"; // 0x513 PushS
	var_41_int = var_40_string + var_37_int; // 0x514 Add
	GetVariable(var_41_int, var_39_int); // 0x515 Func
	var_42_int = 2; // 0x517 PushI
	var_43_int = var_39_int & var_42_int; // 0x518 And
	var_44_int = 0; // 0x519 PushI
	var_36_bool = var_43_int != var_44_int; // 0x51a Neq2
	return 2; // 0x51b Return
}


func_119(var_3_int, var_14_int, var_15_int)
{
	var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_string = ""; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_int = 0; var_35_string = ""; // 0x77 PushV
	var_36_int = 15; // 0x78 PushI
	var_26_int = var_15_int + var_36_int; // 0x79 Add2
	var_28_bool = 1; // 0x7a MovB
	size(var_29_int); // 0x7b TObjFunc
	var_30_int = 0; // 0x7d MovI
	
Label_126:
	var_37_bool = var_30_int < var_29_int; // 0x7e LT
	if(var_37_bool == 0) goto Label_184; // 0x7f JumpB
	get(var_31_int, var_30_int); // 0x80 TObjFunc
	var_38_bool = 0; var_39_int = 0; // 0x82 PushV
	var_39_int = var_31_int; // 0x83 Mov
	func_1298(var_38_bool, var_39_int); // 0x84 NEW_2
	if(var_38_bool == 0) goto Label_181; // 0x86 JumpB
	var_28_bool = 0; // 0x87 MovB
	var_47_string = ""; var_48_int = 0; // 0x88 PushV
	var_48_int = var_31_int; // 0x89 Mov
	func_762(var_47_string, var_48_int); // 0x8a NEW_2
	var_219_int = 0; // 0x8c PushI
	Blit(var_47_string, var_219_int, var_26_int); // 0x8d Func
	var_220_int = 0; var_221_int = 0; // 0x8f PushV
	var_221_int = var_31_int; // 0x90 Mov
	func_334(var_220_int, var_221_int); // 0x91 NEW_2
	var_32_int = var_220_int; // 0x92 Mov
	GetStringByID(var_33_string, var_32_int); // 0x94 Func
	var_392_string = "name"; // 0x96 PushS
	var_393_int = 2; // 0x97 PushI
	var_394_float = var_393_int * var_3_int; // 0x98 Mult
	var_395_int = 5; // 0x99 PushI
	var_396_float = var_394_float / var_395_int; // 0x9a Div
	GetTextHeightInWidth(var_34_int, var_392_string, var_396_float, var_33_string); // 0x9b Func
	var_397_string = "name"; // 0x9d PushS
	var_398_int = 3; // 0x9e PushI
	var_399_float = var_398_int * var_3_int; // 0x9f Mult
	var_400_int = 5; // 0xa0 PushI
	var_401_float = var_399_float / var_400_int; // 0xa1 Div
	var_402_int = 140; // 0xa2 PushI
	var_403_int = var_26_int + var_402_int; // 0xa3 Add
	var_404_int = var_403_int - var_34_int; // 0xa4 Sub
	var_405_int = 2; // 0xa5 PushI
	var_406_float = var_405_int * var_3_int; // 0xa6 Mult
	var_407_int = 5; // 0xa7 PushI
	var_408_float = var_406_float / var_407_int; // 0xa8 Div
	var_409_float = 0.6; // 0xa9 PushF
	var_410_float = 0.6; // 0xaa PushF
	var_411_float = 0.6; // 0xab PushF
	PrintInWidth(var_34_int, var_397_string, var_401_float, var_404_int, var_408_float, var_33_string, var_409_float, var_410_float, var_411_float); // 0xac Func
	var_412_int = 140; // 0xae PushI
	var_413_bool = var_34_int > var_412_int; // 0xaf GT
	if(var_413_bool == 0) goto Label_179; // 0xb0 JumpB
	var_26_int = var_26_int + var_34_int; // 0xb1 Add2
	goto Label_181; // 0xb2 Jump
	
Label_181:
	var_414_int = 1; // 0xb5 PushI
	var_30_int = var_30_int + var_414_int; // 0xb6 Add2
	goto Label_126; // 0xb7 Jump
	
Label_179:
	var_415_int = 140; // 0xb3 PushI
	var_26_int = var_26_int + var_415_int; // 0xb4 Add2
	
Label_184:
	var_416_bool = var_28_bool; // 0xb8 Push
	if(var_416_bool == 0) goto Label_188; // 0xb9 JumpB
	var_14_int = var_15_int; // 0xba Mov
	return 20; // 0xbb Return
	
Label_188:
	var_417_int = 201; // 0xbc PushI
	GetStringByID(var_35_string, var_417_int); // 0xbd Func
	var_418_string = "default"; // 0xbf PushS
	var_419_int = 0; // 0xc0 PushI
	var_420_float = 1.0; // 0xc1 PushF
	var_421_float = 1.0; // 0xc2 PushF
	var_422_float = 1.0; // 0xc3 PushF
	PrintInWidth(var_27_int, var_418_string, var_419_int, var_26_int, var_420_float, var_35_string, var_420_float, var_421_float, var_422_float); // 0xc4 Func
	var_423_int = 7; // 0xc6 PushI
	var_424_int = var_27_int + var_423_int; // 0xc7 Add
	var_26_int = var_26_int + var_424_int; // 0xc8 Add2
	var_425_string = "separator"; // 0xc9 PushS
	var_426_int = 0; // 0xca PushI
	var_427_int = 1; // 0xcb PushI
	StretchBlit(var_425_string, var_426_int, var_26_int, var_425_string, var_427_int); // 0xcc Func
	var_428_int = 7; // 0xce PushI
	var_14_int = var_26_int + var_428_int; // 0xcf Add2
	return 20; // 0xd0 Return
}


func_762(var_45_string, var_46_int)
{
	var_47_int = 1; // 0x2fb PushI
	var_48_bool = var_46_int == var_47_int; // 0x2fc Eq
	if(var_48_bool == 0) goto Label_768; // 0x2fd JumpB
	var_45_string = "ui/NPC_Alexandr.png"; // 0x2fe MovS
	return 0; // 0x2ff Return
	
Label_768:
	var_49_int = 2; // 0x300 PushI
	var_50_bool = var_46_int == var_49_int; // 0x301 Eq
	if(var_50_bool == 0) goto Label_773; // 0x302 JumpB
	var_45_string = "ui/NPC_Andrei.png"; // 0x303 MovS
	return 0; // 0x304 Return
	
Label_773:
	var_51_int = 3; // 0x305 PushI
	var_52_bool = var_46_int == var_51_int; // 0x306 Eq
	if(var_52_bool == 0) goto Label_778; // 0x307 JumpB
	var_45_string = "ui/NPC_Anna.png"; // 0x308 MovS
	return 0; // 0x309 Return
	
Label_778:
	var_53_int = 4; // 0x30a PushI
	var_54_bool = var_46_int == var_53_int; // 0x30b Eq
	if(var_54_bool == 0) goto Label_783; // 0x30c JumpB
	var_45_string = "ui/NPC_BigVlad.png"; // 0x30d MovS
	return 0; // 0x30e Return
	
Label_783:
	var_55_int = 5; // 0x30f PushI
	var_56_bool = var_46_int == var_55_int; // 0x310 Eq
	if(var_56_bool == 0) goto Label_788; // 0x311 JumpB
	var_45_string = "ui/NPC_Eva.png"; // 0x312 MovS
	return 0; // 0x313 Return
	
Label_788:
	var_57_int = 6; // 0x314 PushI
	var_58_bool = var_46_int == var_57_int; // 0x315 Eq
	if(var_58_bool == 0) goto Label_793; // 0x316 JumpB
	var_45_string = "ui/NPC_Georg.png"; // 0x317 MovS
	return 0; // 0x318 Return
	
Label_793:
	var_59_int = 7; // 0x319 PushI
	var_60_bool = var_46_int == var_59_int; // 0x31a Eq
	if(var_60_bool == 0) goto Label_798; // 0x31b JumpB
	var_45_string = "ui/NPC_Grif.png"; // 0x31c MovS
	return 0; // 0x31d Return
	
Label_798:
	var_61_int = 8; // 0x31e PushI
	var_62_bool = var_46_int == var_61_int; // 0x31f Eq
	if(var_62_bool == 0) goto Label_803; // 0x320 JumpB
	var_45_string = "ui/NPC_Han.png"; // 0x321 MovS
	return 0; // 0x322 Return
	
Label_803:
	var_63_int = 9; // 0x323 PushI
	var_64_bool = var_46_int == var_63_int; // 0x324 Eq
	if(var_64_bool == 0) goto Label_808; // 0x325 JumpB
	var_45_string = "ui/NPC_Julia.png"; // 0x326 MovS
	return 0; // 0x327 Return
	
Label_808:
	var_65_int = 10; // 0x328 PushI
	var_66_bool = var_46_int == var_65_int; // 0x329 Eq
	if(var_66_bool == 0) goto Label_813; // 0x32a JumpB
	var_45_string = "ui/NPC_Kapella.png"; // 0x32b MovS
	return 0; // 0x32c Return
	
Label_813:
	var_67_int = 11; // 0x32d PushI
	var_68_bool = var_46_int == var_67_int; // 0x32e Eq
	if(var_68_bool == 0) goto Label_818; // 0x32f JumpB
	var_45_string = "ui/NPC_Katerina.png"; // 0x330 MovS
	return 0; // 0x331 Return
	
Label_818:
	var_69_int = 12; // 0x332 PushI
	var_70_bool = var_46_int == var_69_int; // 0x333 Eq
	if(var_70_bool == 0) goto Label_823; // 0x334 JumpB
	var_45_string = "ui/NPC_Klara.png"; // 0x335 MovS
	return 0; // 0x336 Return
	
Label_823:
	var_71_int = 13; // 0x337 PushI
	var_72_bool = var_46_int == var_71_int; // 0x338 Eq
	if(var_72_bool == 0) goto Label_828; // 0x339 JumpB
	var_45_string = "ui/NPC_Lara.png"; // 0x33a MovS
	return 0; // 0x33b Return
	
Label_828:
	var_73_int = 14; // 0x33c PushI
	var_74_bool = var_46_int == var_73_int; // 0x33d Eq
	if(var_74_bool == 0) goto Label_833; // 0x33e JumpB
	var_45_string = "ui/NPC_Laska.png"; // 0x33f MovS
	return 0; // 0x340 Return
	
Label_833:
	var_75_int = 15; // 0x341 PushI
	var_76_bool = var_46_int == var_75_int; // 0x342 Eq
	if(var_76_bool == 0) goto Label_838; // 0x343 JumpB
	var_45_string = "ui/NPC_Maria.png"; // 0x344 MovS
	return 0; // 0x345 Return
	
Label_838:
	var_77_int = 16; // 0x346 PushI
	var_78_bool = var_46_int == var_77_int; // 0x347 Eq
	if(var_78_bool == 0) goto Label_843; // 0x348 JumpB
	var_45_string = "ui/NPC_Mark.png"; // 0x349 MovS
	return 0; // 0x34a Return
	
Label_843:
	var_79_int = 17; // 0x34b PushI
	var_80_bool = var_46_int == var_79_int; // 0x34c Eq
	if(var_80_bool == 0) goto Label_848; // 0x34d JumpB
	var_45_string = "ui/NPC_Mat.png"; // 0x34e MovS
	return 0; // 0x34f Return
	
Label_848:
	var_81_int = 18; // 0x350 PushI
	var_82_bool = var_46_int == var_81_int; // 0x351 Eq
	if(var_82_bool == 0) goto Label_853; // 0x352 JumpB
	var_45_string = "ui/NPC_Mishka.png"; // 0x353 MovS
	return 0; // 0x354 Return
	
Label_853:
	var_83_int = 19; // 0x355 PushI
	var_84_bool = var_46_int == var_83_int; // 0x356 Eq
	if(var_84_bool == 0) goto Label_858; // 0x357 JumpB
	var_45_string = "ui/NPC_MladVlad.png"; // 0x358 MovS
	return 0; // 0x359 Return
	
Label_858:
	var_85_int = 20; // 0x35a PushI
	var_86_bool = var_46_int == var_85_int; // 0x35b Eq
	if(var_86_bool == 0) goto Label_863; // 0x35c JumpB
	var_45_string = "ui/NPC_Notkin.png"; // 0x35d MovS
	return 0; // 0x35e Return
	
Label_863:
	var_87_int = 21; // 0x35f PushI
	var_88_bool = var_46_int == var_87_int; // 0x360 Eq
	if(var_88_bool == 0) goto Label_868; // 0x361 JumpB
	var_45_string = "ui/NPC_Ospina.png"; // 0x362 MovS
	return 0; // 0x363 Return
	
Label_868:
	var_89_int = 22; // 0x364 PushI
	var_90_bool = var_46_int == var_89_int; // 0x365 Eq
	if(var_90_bool == 0) goto Label_873; // 0x366 JumpB
	var_45_string = "ui/NPC_Petr.png"; // 0x367 MovS
	return 0; // 0x368 Return
	
Label_873:
	var_91_int = 23; // 0x369 PushI
	var_92_bool = var_46_int == var_91_int; // 0x36a Eq
	if(var_92_bool == 0) goto Label_878; // 0x36b JumpB
	var_45_string = "ui/NPC_Rubin.png"; // 0x36c MovS
	return 0; // 0x36d Return
	
Label_878:
	var_93_int = 24; // 0x36e PushI
	var_94_bool = var_46_int == var_93_int; // 0x36f Eq
	if(var_94_bool == 0) goto Label_883; // 0x370 JumpB
	var_45_string = "ui/NPC_Spi4ka.png"; // 0x371 MovS
	return 0; // 0x372 Return
	
Label_883:
	var_95_int = 25; // 0x373 PushI
	var_96_bool = var_46_int == var_95_int; // 0x374 Eq
	if(var_96_bool == 0) goto Label_888; // 0x375 JumpB
	var_45_string = "ui/NPC_Starshina.png"; // 0x376 MovS
	return 0; // 0x377 Return
	
Label_888:
	var_97_int = 26; // 0x378 PushI
	var_98_bool = var_46_int == var_97_int; // 0x379 Eq
	if(var_98_bool == 0) goto Label_893; // 0x37a JumpB
	var_45_string = "ui/NPC_Viktor.png"; // 0x37b MovS
	return 0; // 0x37c Return
	
Label_893:
	var_99_int = 27; // 0x37d PushI
	var_100_bool = var_46_int == var_99_int; // 0x37e Eq
	if(var_100_bool == 0) goto Label_898; // 0x37f JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x380 MovS
	return 0; // 0x381 Return
	
Label_898:
	var_101_int = 28; // 0x382 PushI
	var_102_bool = var_46_int == var_101_int; // 0x383 Eq
	if(var_102_bool == 0) goto Label_903; // 0x384 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x385 MovS
	return 0; // 0x386 Return
	
Label_903:
	var_103_int = 29; // 0x387 PushI
	var_104_bool = var_46_int == var_103_int; // 0x388 Eq
	if(var_104_bool == 0) goto Label_908; // 0x389 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x38a MovS
	return 0; // 0x38b Return
	
Label_908:
	var_105_int = 30; // 0x38c PushI
	var_106_bool = var_46_int == var_105_int; // 0x38d Eq
	if(var_106_bool == 0) goto Label_913; // 0x38e JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x38f MovS
	return 0; // 0x390 Return
	
Label_913:
	var_107_int = 31; // 0x391 PushI
	var_108_bool = var_46_int == var_107_int; // 0x392 Eq
	if(var_108_bool == 0) goto Label_918; // 0x393 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x394 MovS
	return 0; // 0x395 Return
	
Label_918:
	var_109_int = 32; // 0x396 PushI
	var_110_bool = var_46_int == var_109_int; // 0x397 Eq
	if(var_110_bool == 0) goto Label_923; // 0x398 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x399 MovS
	return 0; // 0x39a Return
	
Label_923:
	var_111_int = 33; // 0x39b PushI
	var_112_bool = var_46_int == var_111_int; // 0x39c Eq
	if(var_112_bool == 0) goto Label_928; // 0x39d JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x39e MovS
	return 0; // 0x39f Return
	
Label_928:
	var_113_int = 34; // 0x3a0 PushI
	var_114_bool = var_46_int == var_113_int; // 0x3a1 Eq
	if(var_114_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x3a3 MovS
	return 0; // 0x3a4 Return
	
Label_933:
	var_115_int = 35; // 0x3a5 PushI
	var_116_bool = var_46_int == var_115_int; // 0x3a6 Eq
	if(var_116_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x3a8 MovS
	return 0; // 0x3a9 Return
	
Label_938:
	var_117_int = 36; // 0x3aa PushI
	var_118_bool = var_46_int == var_117_int; // 0x3ab Eq
	if(var_118_bool == 0) goto Label_943; // 0x3ac JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x3ad MovS
	return 0; // 0x3ae Return
	
Label_943:
	var_119_int = 37; // 0x3af PushI
	var_120_bool = var_46_int == var_119_int; // 0x3b0 Eq
	if(var_120_bool == 0) goto Label_948; // 0x3b1 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x3b2 MovS
	return 0; // 0x3b3 Return
	
Label_948:
	var_121_int = 38; // 0x3b4 PushI
	var_122_bool = var_46_int == var_121_int; // 0x3b5 Eq
	if(var_122_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x3b7 MovS
	return 0; // 0x3b8 Return
	
Label_953:
	var_123_int = 39; // 0x3b9 PushI
	var_124_bool = var_46_int == var_123_int; // 0x3ba Eq
	if(var_124_bool == 0) goto Label_958; // 0x3bb JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x3bc MovS
	return 0; // 0x3bd Return
	
Label_958:
	var_125_int = 40; // 0x3be PushI
	var_126_bool = var_46_int == var_125_int; // 0x3bf Eq
	if(var_126_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x3c1 MovS
	return 0; // 0x3c2 Return
	
Label_963:
	var_127_int = 42; // 0x3c3 PushI
	var_128_bool = var_46_int == var_127_int; // 0x3c4 Eq
	if(var_128_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_45_string = "ui/NPC_wmask.png"; // 0x3c6 MovS
	return 0; // 0x3c7 Return
	
Label_968:
	var_129_int = 43; // 0x3c8 PushI
	var_130_bool = var_46_int == var_129_int; // 0x3c9 Eq
	if(var_130_bool == 0) goto Label_973; // 0x3ca JumpB
	var_45_string = "ui/NPC_Black.png"; // 0x3cb MovS
	return 0; // 0x3cc Return
	
Label_973:
	var_131_int = 44; // 0x3cd PushI
	var_132_bool = var_46_int == var_131_int; // 0x3ce Eq
	if(var_132_bool == 0) goto Label_978; // 0x3cf JumpB
	var_45_string = "ui/NPC_bmask.png"; // 0x3d0 MovS
	return 0; // 0x3d1 Return
	
Label_978:
	var_133_int = 46; // 0x3d2 PushI
	var_134_bool = var_46_int == var_133_int; // 0x3d3 Eq
	if(var_134_bool == 0) goto Label_983; // 0x3d4 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x3d5 MovS
	return 0; // 0x3d6 Return
	
Label_983:
	var_135_int = 47; // 0x3d7 PushI
	var_136_bool = var_46_int == var_135_int; // 0x3d8 Eq
	if(var_136_bool == 0) goto Label_988; // 0x3d9 JumpB
	var_45_string = "ui/NPC_Bakalavr.png"; // 0x3da MovS
	return 0; // 0x3db Return
	
Label_988:
	var_137_int = 48; // 0x3dc PushI
	var_138_bool = var_46_int == var_137_int; // 0x3dd Eq
	if(var_138_bool == 0) goto Label_993; // 0x3de JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x3df MovS
	return 0; // 0x3e0 Return
	
Label_993:
	var_139_int = 49; // 0x3e1 PushI
	var_140_bool = var_46_int == var_139_int; // 0x3e2 Eq
	if(var_140_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x3e4 MovS
	return 0; // 0x3e5 Return
	
Label_998:
	var_141_int = 50; // 0x3e6 PushI
	var_142_bool = var_46_int == var_141_int; // 0x3e7 Eq
	if(var_142_bool == 0) goto Label_1003; // 0x3e8 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x3e9 MovS
	return 0; // 0x3ea Return
	
Label_1003:
	var_143_int = 51; // 0x3eb PushI
	var_144_bool = var_46_int == var_143_int; // 0x3ec Eq
	if(var_144_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x3ee MovS
	return 0; // 0x3ef Return
	
Label_1008:
	var_145_int = 52; // 0x3f0 PushI
	var_146_bool = var_46_int == var_145_int; // 0x3f1 Eq
	if(var_146_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x3f3 MovS
	return 0; // 0x3f4 Return
	
Label_1013:
	var_147_int = 53; // 0x3f5 PushI
	var_148_bool = var_46_int == var_147_int; // 0x3f6 Eq
	if(var_148_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x3f8 MovS
	return 0; // 0x3f9 Return
	
Label_1018:
	var_149_int = 54; // 0x3fa PushI
	var_150_bool = var_46_int == var_149_int; // 0x3fb Eq
	if(var_150_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x3fd MovS
	return 0; // 0x3fe Return
	
Label_1023:
	var_151_int = 55; // 0x3ff PushI
	var_152_bool = var_46_int == var_151_int; // 0x400 Eq
	if(var_152_bool == 0) goto Label_1028; // 0x401 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x402 MovS
	return 0; // 0x403 Return
	
Label_1028:
	var_153_int = 56; // 0x404 PushI
	var_154_bool = var_46_int == var_153_int; // 0x405 Eq
	if(var_154_bool == 0) goto Label_1033; // 0x406 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x407 MovS
	return 0; // 0x408 Return
	
Label_1033:
	var_155_int = 57; // 0x409 PushI
	var_156_bool = var_46_int == var_155_int; // 0x40a Eq
	if(var_156_bool == 0) goto Label_1038; // 0x40b JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x40c MovS
	return 0; // 0x40d Return
	
Label_1038:
	var_157_int = 58; // 0x40e PushI
	var_158_bool = var_46_int == var_157_int; // 0x40f Eq
	if(var_158_bool == 0) goto Label_1043; // 0x410 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x411 MovS
	return 0; // 0x412 Return
	
Label_1043:
	var_159_int = 59; // 0x413 PushI
	var_160_bool = var_46_int == var_159_int; // 0x414 Eq
	if(var_160_bool == 0) goto Label_1048; // 0x415 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x416 MovS
	return 0; // 0x417 Return
	
Label_1048:
	var_161_int = 60; // 0x418 PushI
	var_162_bool = var_46_int == var_161_int; // 0x419 Eq
	if(var_162_bool == 0) goto Label_1053; // 0x41a JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x41b MovS
	return 0; // 0x41c Return
	
Label_1053:
	var_163_int = 61; // 0x41d PushI
	var_164_bool = var_46_int == var_163_int; // 0x41e Eq
	if(var_164_bool == 0) goto Label_1058; // 0x41f JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x420 MovS
	return 0; // 0x421 Return
	
Label_1058:
	var_165_int = 62; // 0x422 PushI
	var_166_bool = var_46_int == var_165_int; // 0x423 Eq
	if(var_166_bool == 0) goto Label_1063; // 0x424 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x425 MovS
	return 0; // 0x426 Return
	
Label_1063:
	var_167_int = 63; // 0x427 PushI
	var_168_bool = var_46_int == var_167_int; // 0x428 Eq
	if(var_168_bool == 0) goto Label_1068; // 0x429 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x42a MovS
	return 0; // 0x42b Return
	
Label_1068:
	var_169_int = 64; // 0x42c PushI
	var_170_bool = var_46_int == var_169_int; // 0x42d Eq
	if(var_170_bool == 0) goto Label_1073; // 0x42e JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x42f MovS
	return 0; // 0x430 Return
	
Label_1073:
	var_171_int = 65; // 0x431 PushI
	var_172_bool = var_46_int == var_171_int; // 0x432 Eq
	if(var_172_bool == 0) goto Label_1078; // 0x433 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x434 MovS
	return 0; // 0x435 Return
	
Label_1078:
	var_173_int = 66; // 0x436 PushI
	var_174_bool = var_46_int == var_173_int; // 0x437 Eq
	if(var_174_bool == 0) goto Label_1083; // 0x438 JumpB
	var_45_string = "ui/NPC_Burah.png"; // 0x439 MovS
	return 0; // 0x43a Return
	
Label_1083:
	var_175_int = 67; // 0x43b PushI
	var_176_bool = var_46_int == var_175_int; // 0x43c Eq
	if(var_176_bool == 0) goto Label_1088; // 0x43d JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x43e MovS
	return 0; // 0x43f Return
	
Label_1088:
	var_177_int = 68; // 0x440 PushI
	var_178_bool = var_46_int == var_177_int; // 0x441 Eq
	if(var_178_bool == 0) goto Label_1093; // 0x442 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x443 MovS
	return 0; // 0x444 Return
	
Label_1093:
	var_179_int = 69; // 0x445 PushI
	var_180_bool = var_46_int == var_179_int; // 0x446 Eq
	if(var_180_bool == 0) goto Label_1098; // 0x447 JumpB
	var_45_string = "ui/NPC_Albinos.png"; // 0x448 MovS
	return 0; // 0x449 Return
	
Label_1098:
	var_181_int = 70; // 0x44a PushI
	var_182_bool = var_46_int == var_181_int; // 0x44b Eq
	if(var_182_bool == 0) goto Label_1103; // 0x44c JumpB
	var_45_string = "ui/NPC_Aglaja.png"; // 0x44d MovS
	return 0; // 0x44e Return
	
Label_1103:
	var_183_int = 71; // 0x44f PushI
	var_184_bool = var_46_int == var_183_int; // 0x450 Eq
	if(var_184_bool == 0) goto Label_1108; // 0x451 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x452 MovS
	return 0; // 0x453 Return
	
Label_1108:
	var_185_int = 72; // 0x454 PushI
	var_186_bool = var_46_int == var_185_int; // 0x455 Eq
	if(var_186_bool == 0) goto Label_1113; // 0x456 JumpB
	var_45_string = "ui/NPC_Block.png"; // 0x457 MovS
	return 0; // 0x458 Return
	
Label_1113:
	var_187_int = 73; // 0x459 PushI
	var_188_bool = var_46_int == var_187_int; // 0x45a Eq
	if(var_188_bool == 0) goto Label_1118; // 0x45b JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x45c MovS
	return 0; // 0x45d Return
	
Label_1118:
	var_189_int = 74; // 0x45e PushI
	var_190_bool = var_46_int == var_189_int; // 0x45f Eq
	if(var_190_bool == 0) goto Label_1123; // 0x460 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x461 MovS
	return 0; // 0x462 Return
	
Label_1123:
	var_191_int = 75; // 0x463 PushI
	var_192_bool = var_46_int == var_191_int; // 0x464 Eq
	if(var_192_bool == 0) goto Label_1128; // 0x465 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x466 MovS
	return 0; // 0x467 Return
	
Label_1128:
	var_193_int = 76; // 0x468 PushI
	var_194_bool = var_46_int == var_193_int; // 0x469 Eq
	if(var_194_bool == 0) goto Label_1133; // 0x46a JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x46b MovS
	return 0; // 0x46c Return
	
Label_1133:
	var_195_int = 77; // 0x46d PushI
	var_196_bool = var_46_int == var_195_int; // 0x46e Eq
	if(var_196_bool == 0) goto Label_1138; // 0x46f JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x470 MovS
	return 0; // 0x471 Return
	
Label_1138:
	var_197_int = 78; // 0x472 PushI
	var_198_bool = var_46_int == var_197_int; // 0x473 Eq
	if(var_198_bool == 0) goto Label_1143; // 0x474 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x475 MovS
	return 0; // 0x476 Return
	
Label_1143:
	var_199_int = 79; // 0x477 PushI
	var_200_bool = var_46_int == var_199_int; // 0x478 Eq
	if(var_200_bool == 0) goto Label_1148; // 0x479 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x47a MovS
	return 0; // 0x47b Return
	
Label_1148:
	var_201_int = 80; // 0x47c PushI
	var_202_bool = var_46_int == var_201_int; // 0x47d Eq
	if(var_202_bool == 0) goto Label_1153; // 0x47e JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x47f MovS
	return 0; // 0x480 Return
	
Label_1153:
	var_203_int = 81; // 0x481 PushI
	var_204_bool = var_46_int == var_203_int; // 0x482 Eq
	if(var_204_bool == 0) goto Label_1158; // 0x483 JumpB
	var_45_string = "ui/NPC_Citizen2.png"; // 0x484 MovS
	return 0; // 0x485 Return
	
Label_1158:
	var_205_int = 82; // 0x486 PushI
	var_206_bool = var_46_int == var_205_int; // 0x487 Eq
	if(var_206_bool == 0) goto Label_1163; // 0x488 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x489 MovS
	return 0; // 0x48a Return
	
Label_1163:
	var_207_int = 83; // 0x48b PushI
	var_208_bool = var_46_int == var_207_int; // 0x48c Eq
	if(var_208_bool == 0) goto Label_1168; // 0x48d JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x48e MovS
	return 0; // 0x48f Return
	
Label_1168:
	var_209_int = 84; // 0x490 PushI
	var_210_bool = var_46_int == var_209_int; // 0x491 Eq
	if(var_210_bool == 0) goto Label_1173; // 0x492 JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x493 MovS
	return 0; // 0x494 Return
	
Label_1173:
	var_211_int = 85; // 0x495 PushI
	var_212_bool = var_46_int == var_211_int; // 0x496 Eq
	if(var_212_bool == 0) goto Label_1178; // 0x497 JumpB
	var_45_string = "ui/NPC_Petr.png"; // 0x498 MovS
	return 0; // 0x499 Return
	
Label_1178:
	var_213_int = 86; // 0x49a PushI
	var_214_bool = var_46_int == var_213_int; // 0x49b Eq
	if(var_214_bool == 0) goto Label_1183; // 0x49c JumpB
	var_45_string = "ui/NPC_Citizen1.png"; // 0x49d MovS
	return 0; // 0x49e Return
	
Label_1183:
	var_215_int = 87; // 0x49f PushI
	var_216_bool = var_46_int == var_215_int; // 0x4a0 Eq
	if(var_216_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_45_string = "ui/NPC_Citizen3.png"; // 0x4a2 MovS
	return 0; // 0x4a3 Return
	
Label_1188:
	var_45_string = ""; // 0x4a4 MovS
	return 0; // 0x4a5 Return
}


func_1308(var_218_bool, var_219_int)
{
	var_220_int = 0; var_221_int = 0; // 0x51c PushV
	var_222_string = "vol_"; // 0x51d PushS
	var_223_int = var_222_string + var_219_int; // 0x51e Add
	GetVariable(var_223_int, var_221_int); // 0x51f Func
	var_224_int = 8; // 0x521 PushI
	var_225_int = var_221_int & var_224_int; // 0x522 And
	var_226_int = 0; // 0x523 PushI
	var_218_bool = var_225_int != var_226_int; // 0x524 Neq2
	return 2; // 0x525 Return
}


