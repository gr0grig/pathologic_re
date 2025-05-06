task_0_event_15(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_int, var_6_float)
{
	var_7_int = 0; // 0x161 PushI
	var_8_bool = var_6_float > var_7_int; // 0x162 GT
	if(var_8_bool == 0) goto Label_358; // 0x163 JumpB
	var_6_float = 1; // 0x164 MovI
	goto Label_362; // 0x165 Jump
	
Label_362:
	var_2_int = var_2_int + var_6_float; // 0x16a Add2
	var_9_int = 0; // 0x16b PushI
	var_10_bool = var_2_int < var_9_int; // 0x16c LT
	if(var_10_bool == 0) goto Label_367; // 0x16d JumpB
	var_2_int = 0; // 0x16e TMovI
	
Label_367:
	func_411(var_6_float); // 0x170 NEW_2
	return 0; // 0x172 Return
	
Label_358:
	var_39_int = 0; // 0x166 PushI
	var_40_bool = var_6_float < var_39_int; // 0x167 LT
	if(var_40_bool == 0) goto Label_362; // 0x168 JumpB
	var_6_float = -1; // 0x169 MovI
}


task_0_event_100(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	DestroyWindow(); // 0x246 Func
	return 0; // 0x248 Return
}


task_0_event_102(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 0; // 0x24a PushV
	var_5_int = var_4_int; // 0x24b Mov
	func_152(var_4_int, var_5_int); // 0x24c NEW_2
	return 0; // 0x24e Return
}


task_0_event_101(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 266; // 0x250 PushI
	var_6_bool = var_4_int == var_5_int; // 0x251 Eq
	if(var_6_bool == 0) goto Label_635; // 0x252 JumpB
	var_7_int = 0; // 0x253 PushI
	var_8_bool = var_0_int == var_7_int; // 0x254 Eq
	if(var_8_bool == 0) goto Label_603; // 0x255 JumpB
	var_9_int = 0; // 0x256 PushV
	var_9_int = 1; // 0x257 MovI
	func_912(var_4_int, var_9_int); // 0x258 NEW_2
	goto Label_634; // 0x25a Jump
	
Label_634:
	goto Label_677; // 0x27a Jump
	
Label_677:
	var_44_int = 0; // 0x2a5 PushV
	var_44_int = var_4_int; // 0x2a6 Mov
	func_72(var_4_int, var_44_int); // 0x2a7 NEW_2
	return 0; // 0x2a9 Return
	
Label_603:
	var_128_int = 1; // 0x25b PushI
	var_129_bool = var_0_int == var_128_int; // 0x25c Eq
	if(var_129_bool == 0) goto Label_611; // 0x25d JumpB
	var_130_int = 0; // 0x25e PushV
	var_130_int = 2; // 0x25f MovI
	func_912(var_4_int, var_130_int); // 0x260 NEW_2
	goto Label_634; // 0x262 Jump
	
Label_611:
	var_131_int = 2; // 0x263 PushI
	var_132_bool = var_0_int == var_131_int; // 0x264 Eq
	if(var_132_bool == 0) goto Label_619; // 0x265 JumpB
	var_133_int = 0; // 0x266 PushV
	var_133_int = 3; // 0x267 MovI
	func_912(var_4_int, var_133_int); // 0x268 NEW_2
	goto Label_634; // 0x26a Jump
	
Label_619:
	var_134_int = 3; // 0x26b PushI
	var_135_bool = var_0_int == var_134_int; // 0x26c Eq
	if(var_135_bool == 0) goto Label_627; // 0x26d JumpB
	var_136_int = 0; // 0x26e PushV
	var_136_int = 4; // 0x26f MovI
	func_912(var_4_int, var_136_int); // 0x270 NEW_2
	goto Label_634; // 0x272 Jump
	
Label_627:
	var_137_int = 4; // 0x273 PushI
	var_138_bool = var_0_int == var_137_int; // 0x274 Eq
	if(var_138_bool == 0) goto Label_634; // 0x275 JumpB
	var_139_int = 0; // 0x276 PushV
	var_139_int = 0; // 0x277 MovI
	func_912(var_4_int, var_139_int); // 0x278 NEW_2
	
Label_635:
	var_140_int = 265; // 0x27b PushI
	var_141_bool = var_4_int == var_140_int; // 0x27c Eq
	if(var_141_bool == 0) goto Label_677; // 0x27d JumpB
	var_142_int = 0; // 0x27e PushI
	var_143_bool = var_0_int == var_142_int; // 0x27f Eq
	if(var_143_bool == 0) goto Label_646; // 0x280 JumpB
	var_144_int = 0; // 0x281 PushV
	var_144_int = 4; // 0x282 MovI
	func_912(var_4_int, var_144_int); // 0x283 NEW_2
	goto Label_677; // 0x285 Jump
	
Label_646:
	var_145_int = 1; // 0x286 PushI
	var_146_bool = var_0_int == var_145_int; // 0x287 Eq
	if(var_146_bool == 0) goto Label_654; // 0x288 JumpB
	var_147_int = 0; // 0x289 PushV
	var_147_int = 0; // 0x28a MovI
	func_912(var_4_int, var_147_int); // 0x28b NEW_2
	goto Label_677; // 0x28d Jump
	
Label_654:
	var_148_int = 2; // 0x28e PushI
	var_149_bool = var_0_int == var_148_int; // 0x28f Eq
	if(var_149_bool == 0) goto Label_662; // 0x290 JumpB
	var_150_int = 0; // 0x291 PushV
	var_150_int = 1; // 0x292 MovI
	func_912(var_4_int, var_150_int); // 0x293 NEW_2
	goto Label_677; // 0x295 Jump
	
Label_662:
	var_151_int = 3; // 0x296 PushI
	var_152_bool = var_0_int == var_151_int; // 0x297 Eq
	if(var_152_bool == 0) goto Label_670; // 0x298 JumpB
	var_153_int = 0; // 0x299 PushV
	var_153_int = 2; // 0x29a MovI
	func_912(var_4_int, var_153_int); // 0x29b NEW_2
	goto Label_677; // 0x29d Jump
	
Label_670:
	var_154_int = 4; // 0x29e PushI
	var_155_bool = var_0_int == var_154_int; // 0x29f Eq
	if(var_155_bool == 0) goto Label_677; // 0x2a0 JumpB
	var_156_int = 0; // 0x2a1 PushV
	var_156_int = 3; // 0x2a2 MovI
	func_912(var_4_int, var_156_int); // 0x2a3 NEW_2
}


task_0_event_1(var_0_int, var_1_object, var_2_int, var_3_int, var_4_float)
{
	var_5_int = 0; // 0x307 PushV
	var_5_int = var_0_int; // 0x308 MovT
	func_1146(var_5_int); // 0x309 NEW_2
	func_947(); // 0x30c NEW_2
	func_371(); // 0x30f NEW_2
	return 0; // 0x311 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); // 0x312 PushV
	var_13_bool = 0; // 0x313 MovB
	var_19_int = 0; // 0x314 PushI
	var_20_bool = var_4_int < var_19_int; // 0x315 LT
	if(var_20_bool == 0) goto Label_799; // 0x316 JumpB
	var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_object = Obj(); // 0x317 PushV
	var_22_int = var_4_int; // 0x318 Mov
	var_23_string = var_5_string; // 0x319 Mov
	var_24_object = var_6_object; // 0x31a Mov
	func_238(var_18_object, var_21_bool, var_22_int, var_23_string, var_24_object); // 0x31b NEW_2
	var_13_bool = var_21_bool; // 0x31c Mov
	return 12; // 0x31e Return
	
Label_799:
	var_238_string = "button_weapon"; // 0x31f PushS
	var_239_bool = var_5_string == var_238_string; // 0x320 Eq
	if(var_239_bool == 0) goto Label_808; // 0x321 JumpB
	var_240_int = 0; // 0x322 PushV
	var_240_int = 0; // 0x323 MovI
	func_912(var_18_object, var_240_int); // 0x324 NEW_2
	var_13_bool = 1; // 0x326 MovB
	goto Label_900; // 0x327 Jump
	
Label_900:
	var_241_bool = var_13_bool == 0; // 0x384 Not
	if(var_241_bool == 0) goto Label_909; // 0x385 JumpB
	var_242_bool = 0; var_243_int = 0; var_244_string = ""; var_245_object = Obj(); // 0x386 PushV
	var_243_int = var_4_int; // 0x387 Mov
	var_244_string = var_5_string; // 0x388 Mov
	var_245_object = var_6_object; // 0x389 Mov
	func_238(var_18_object, var_242_bool, var_243_int, var_244_string, var_245_object); // 0x38a NEW_2
	var_13_bool = var_242_bool; // 0x38b Mov
	
Label_909:
	var_246_bool = var_13_bool; // 0x38d Push
	if(var_246_bool == 0) goto Label_911; // 0x38e JumpB
	
Label_911:
	return 12; // 0x38f Return
	
Label_808:
	var_247_string = "button_clothes"; // 0x328 PushS
	var_248_bool = var_5_string == var_247_string; // 0x329 Eq
	if(var_248_bool == 0) goto Label_817; // 0x32a JumpB
	var_249_int = 0; // 0x32b PushV
	var_249_int = 1; // 0x32c MovI
	func_912(var_18_object, var_249_int); // 0x32d NEW_2
	var_13_bool = 1; // 0x32f MovB
	goto Label_900; // 0x330 Jump
	
Label_817:
	var_250_string = "button_medcine"; // 0x331 PushS
	var_251_bool = var_5_string == var_250_string; // 0x332 Eq
	if(var_251_bool == 0) goto Label_826; // 0x333 JumpB
	var_252_int = 0; // 0x334 PushV
	var_252_int = 2; // 0x335 MovI
	func_912(var_18_object, var_252_int); // 0x336 NEW_2
	var_13_bool = 1; // 0x338 MovB
	goto Label_900; // 0x339 Jump
	
Label_826:
	var_253_string = "button_food"; // 0x33a PushS
	var_254_bool = var_5_string == var_253_string; // 0x33b Eq
	if(var_254_bool == 0) goto Label_835; // 0x33c JumpB
	var_255_int = 0; // 0x33d PushV
	var_255_int = 3; // 0x33e MovI
	func_912(var_18_object, var_255_int); // 0x33f NEW_2
	var_13_bool = 1; // 0x341 MovB
	goto Label_900; // 0x342 Jump
	
Label_835:
	var_256_string = "button_other"; // 0x343 PushS
	var_257_bool = var_5_string == var_256_string; // 0x344 Eq
	if(var_257_bool == 0) goto Label_844; // 0x345 JumpB
	var_258_int = 0; // 0x346 PushV
	var_258_int = 4; // 0x347 MovI
	func_912(var_18_object, var_258_int); // 0x348 NEW_2
	var_13_bool = 1; // 0x34a MovB
	goto Label_900; // 0x34b Jump
	
Label_844:
	var_259_string = "button_detector"; // 0x34c PushS
	var_260_bool = var_5_string == var_259_string; // 0x34d Eq
	if(var_260_bool == 0) goto Label_848; // 0x34e JumpB
	goto Label_900; // 0x34f Jump
	
Label_848:
	var_261_string = "button_anticeptic"; // 0x350 PushS
	var_262_bool = var_5_string == var_261_string; // 0x351 Eq
	if(var_262_bool == 0) goto Label_852; // 0x352 JumpB
	goto Label_900; // 0x353 Jump
	
Label_852:
	var_263_int = 0; // 0x354 PushI
	var_264_bool = var_4_int != var_263_int; // 0x355 Neq
	if(var_264_bool == 0) goto Label_861; // 0x356 JumpB
	var_265_string = "noinv_drop"; // 0x357 PushS
	GetVariable(var_265_string, var_14_int); // 0x358 Func
	var_266_int = var_14_int; // 0x35a Push
	if(var_266_int == 0) goto Label_861; // 0x35b JumpB
	return 12; // 0x35c Return
	
Label_861:
	var_15_int = 0; // 0x35d MovI
	
Label_862:
	var_267_int = 12; // 0x35e PushI
	var_268_bool = var_15_int < var_267_int; // 0x35f LT
	if(var_268_bool == 0) goto Label_900; // 0x360 JumpB
	var_269_string = ""; var_270_int = 0; // 0x361 PushV
	var_270_int = var_15_int; // 0x362 Mov
	func_1233(var_269_string, var_270_int); // 0x363 NEW_2
	var_281_bool = var_5_string == var_269_string; // 0x365 Eq
	if(var_281_bool == 0) goto Label_897; // 0x366 JumpB
	var_282_object = Obj(); // 0x367 PushV
	func_232(var_282_object); // 0x368 NEW_2
	var_16_object = var_282_object; // 0x369 Mov
	GetItemCount(var_17_int, var_0_int); // 0x36b ObjFunc
	var_283_bool = var_17_int > var_15_int; // 0x36d GT
	if(var_283_bool == 0) goto Label_895; // 0x36e JumpB
	GetItem(var_18_object, var_15_int, var_0_int); // 0x36f ObjFunc
	var_284_bool = 0; var_285_object = Obj(); // 0x371 PushV
	var_285_object = var_18_object; // 0x372 Mov
	func_754(var_285_object); // 0x373 NEW_2
	var_286_bool = var_284_bool == 0; // 0x375 Not
	if(var_286_bool == 0) goto Label_894; // 0x376 JumpB
	var_287_bool = 0; var_288_int = 0; var_289_bool = 0; // 0x377 PushV
	var_288_int = var_15_int; // 0x378 Mov
	var_290_int = 0; // 0x379 PushI
	var_289_bool = var_4_int == var_290_int; // 0x37a Eq2
	func_398(var_18_object, var_287_bool, var_288_int, var_289_bool); // 0x37b NEW_2
	var_13_bool = var_287_bool; // 0x37c Mov
	
Label_894:
	var_18_object = 0; // 0x37e SetNull
	
Label_895:
	goto Label_900; // 0x37f Jump
	
Label_897:
	var_325_int = 1; // 0x381 PushI
	var_15_int = var_15_int + var_325_int; // 0x382 Add2
	goto Label_862; // 0x383 Jump
}


main(var_0_int, var_1_object, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_int = 0; var_9_object = Obj(); var_10_string = ""; var_11_string = ""; // 0x0 PushV
	var_12_string = "inventory_base.xml"; // 0x1 PushS
	var_13_bool = 0; // 0x2 PushB
	CreateWindow(var_12_string, var_13_bool, var_13_bool); // 0x3 Func
	func_411(var_11_string); // 0x6 NEW_2
	var_3_int = 2; // 0x8 TMovI
	var_8_int = 0; // 0x9 MovI
	
Label_10:
	var_42_int = 4; // 0xa PushI
	var_43_bool = var_8_int < var_42_int; // 0xb LT
	if(var_43_bool == 0) goto Label_56; // 0xc JumpB
	CreateStringVector(var_9_object); // 0xd Func
	var_44_int = 1; // 0xf PushI
	var_45_int = var_8_int - var_44_int; // 0x10 Sub
	var_46_int = 0; // 0x11 PushI
	var_47_bool = var_45_int >= var_46_int; // 0x12 GE
	if(var_47_bool == 0) goto Label_27; // 0x13 JumpB
	var_48_string = ""; var_49_int = 0; // 0x14 PushV
	var_50_int = 1; // 0x15 PushI
	var_49_int = var_8_int - var_50_int; // 0x16 Sub2
	func_1249(var_48_string, var_49_int); // 0x17 NEW_2
	var_10_string = var_48_string; // 0x18 Mov
	goto Label_28; // 0x1a Jump
	
Label_28:
	var_61_int = 1; // 0x1c PushI
	var_62_int = var_8_int + var_61_int; // 0x1d Add
	var_63_int = 4; // 0x1e PushI
	var_64_bool = var_62_int < var_63_int; // 0x1f LT
	if(var_64_bool == 0) goto Label_40; // 0x20 JumpB
	var_65_string = ""; var_66_int = 0; // 0x21 PushV
	var_67_int = 1; // 0x22 PushI
	var_66_int = var_8_int + var_67_int; // 0x23 Add2
	func_1249(var_65_string, var_66_int); // 0x24 NEW_2
	var_11_string = var_65_string; // 0x25 Mov
	goto Label_41; // 0x27 Jump
	
Label_41:
	add(var_10_string); // 0x29 ObjFunc
	add(var_11_string); // 0x2b ObjFunc
	var_68_int = -1; // 0x2d PushI
	var_69_string = ""; var_70_int = 0; // 0x2e PushV
	var_70_int = var_8_int; // 0x2f Mov
	func_1249(var_69_string, var_70_int); // 0x30 NEW_2
	SendMessage(var_68_int, var_69_string, var_9_object); // 0x32 Func
	var_9_object = 0; // 0x34 SetNull
	var_71_int = 1; // 0x35 PushI
	var_8_int = var_8_int + var_71_int; // 0x36 Add2
	goto Label_10; // 0x37 Jump
	
Label_40:
	var_11_string = "$parent"; // 0x28 MovS
	
Label_27:
	var_10_string = "$parent"; // 0x1b MovS
	
Label_56:
	var_72_int = 0; // 0x38 PushV
	var_72_int = 0; // 0x39 MovI
	func_499(var_11_string, var_72_int); // 0x3a NEW_2
	return 8; // 0x3c Return
}


func_398(var_0_int, var_2_int, var_287_bool, var_288_int)
{
	var_291_bool = 0; var_292_int = 0; var_293_int = 0; // 0x18f PushV
	var_292_int = var_0_int; // 0x190 MovT
	var_293_int = var_288_int; // 0x191 Mov
	func_1096(var_289_bool, var_291_bool, var_292_int, var_293_int); // 0x192 NEW_2
	var_324_int = 1; // 0x194 PushI
	var_2_int = var_2_int + var_324_int; // 0x195 Add2
	func_411(var_289_bool); // 0x197 NEW_2
	var_287_bool = 1; // 0x199 MovB
	return 0; // 0x19a Return
}


func_912(var_0_int, var_77_int)
{
	var_78_int = -1; // 0x391 PushI
	var_79_bool = var_77_int == var_78_int; // 0x392 Eq
	if(var_79_bool == 0) goto Label_917; // 0x393 JumpB
	return 0; // 0x394 Return
	
Label_917:
	var_80_bool = var_0_int == var_77_int; // 0x395 Eq
	if(var_80_bool == 0) goto Label_920; // 0x396 JumpB
	return 0; // 0x397 Return
	
Label_920:
	var_0_int = var_77_int; // 0x398 TMov
	var_81_int = 0; // 0x399 PushV
	var_81_int = var_0_int; // 0x39a MovT
	func_954(var_81_int); // 0x39b NEW_2
	return 0; // 0x39d Return
}


func_152(var_3_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0x98 PushV
	var_14_int = 272; // 0x99 PushI
	var_15_bool = var_5_int == var_14_int; // 0x9a Eq
	if(var_15_bool == 0) goto Label_171; // 0x9b JumpB
	var_3_int = 2; // 0x9c TMovI
	var_10_int = 0; // 0x9d MovI
	
Label_158:
	var_16_int = 4; // 0x9e PushI
	var_17_bool = var_10_int < var_16_int; // 0x9f LT
	if(var_17_bool == 0) goto Label_171; // 0xa0 JumpB
	var_18_int = -7; // 0xa1 PushI
	var_19_string = ""; var_20_int = 0; // 0xa2 PushV
	var_20_int = var_10_int; // 0xa3 Mov
	func_1249(var_19_string, var_20_int); // 0xa4 NEW_2
	SendMessage(var_18_int, var_19_string); // 0xa6 Func
	var_31_int = 1; // 0xa8 PushI
	var_10_int = var_10_int + var_31_int; // 0xa9 Add2
	goto Label_158; // 0xaa Jump
	
Label_171:
	var_32_int = 274; // 0xab PushI
	var_33_bool = var_5_int == var_32_int; // 0xac Eq
	if(var_33_bool == 0) goto Label_189; // 0xad JumpB
	var_3_int = 0; // 0xae TMovI
	var_11_int = 0; // 0xaf MovI
	
Label_176:
	var_34_int = 12; // 0xb0 PushI
	var_35_bool = var_11_int < var_34_int; // 0xb1 LT
	if(var_35_bool == 0) goto Label_189; // 0xb2 JumpB
	var_36_int = -7; // 0xb3 PushI
	var_37_string = ""; var_38_int = 0; // 0xb4 PushV
	var_38_int = var_11_int; // 0xb5 Mov
	func_1233(var_37_string, var_38_int); // 0xb6 NEW_2
	SendMessage(var_36_int, var_37_string); // 0xb8 Func
	var_49_int = 1; // 0xba PushI
	var_11_int = var_11_int + var_49_int; // 0xbb Add2
	goto Label_176; // 0xbc Jump
	
Label_189:
	var_50_int = 0; // 0xbd PushI
	var_51_bool = var_3_int == var_50_int; // 0xbe Eq
	if(var_51_bool == 0) goto Label_197; // 0xbf JumpB
	var_52_int = 0; // 0xc0 PushV
	var_52_int = var_5_int; // 0xc1 Mov
	func_718(var_52_int); // 0xc2 NEW_2
	return 8; // 0xc4 Return
	
Label_197:
	var_73_int = 273; // 0xc5 PushI
	var_74_bool = var_5_int == var_73_int; // 0xc6 Eq
	if(var_74_bool == 0) goto Label_214; // 0xc7 JumpB
	var_12_int = 0; // 0xc8 MovI
	
Label_201:
	var_75_int = 4; // 0xc9 PushI
	var_76_bool = var_12_int < var_75_int; // 0xca LT
	if(var_76_bool == 0) goto Label_214; // 0xcb JumpB
	var_77_int = -2; // 0xcc PushI
	var_78_string = ""; var_79_int = 0; // 0xcd PushV
	var_79_int = var_12_int; // 0xce Mov
	func_1249(var_78_string, var_79_int); // 0xcf NEW_2
	SendMessage(var_77_int, var_78_string); // 0xd1 Func
	var_80_int = 1; // 0xd3 PushI
	var_12_int = var_12_int + var_80_int; // 0xd4 Add2
	goto Label_201; // 0xd5 Jump
	
Label_214:
	var_81_int = 271; // 0xd6 PushI
	var_82_bool = var_5_int == var_81_int; // 0xd7 Eq
	if(var_82_bool == 0) goto Label_231; // 0xd8 JumpB
	var_13_int = 0; // 0xd9 MovI
	
Label_218:
	var_83_int = 4; // 0xda PushI
	var_84_bool = var_13_int < var_83_int; // 0xdb LT
	if(var_84_bool == 0) goto Label_231; // 0xdc JumpB
	var_85_int = -3; // 0xdd PushI
	var_86_string = ""; var_87_int = 0; // 0xde PushV
	var_87_int = var_13_int; // 0xdf Mov
	func_1249(var_86_string, var_87_int); // 0xe0 NEW_2
	SendMessage(var_85_int, var_86_string); // 0xe2 Func
	var_88_int = 1; // 0xe4 PushI
	var_13_int = var_13_int + var_88_int; // 0xe5 Add2
	goto Label_218; // 0xe6 Jump
	
Label_231:
	return 8; // 0xe7 Return
}


func_411(var_2_int)
{
	var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_object = Obj(); var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x19b PushV
	GetContainer(var_18_object); // 0x19c Func
	GetItemCount(var_19_int); // 0x19e ObjFunc
	var_22_int = 4; // 0x1a0 PushI
	var_23_bool = var_19_int <= var_22_int; // 0x1a1 LE
	if(var_23_bool == 0) goto Label_425; // 0x1a2 JumpB
	var_24_int = 16384; // 0x1a3 PushI
	var_25_string = "scrollbar"; // 0x1a4 PushS
	SendMessage(var_24_int, var_25_string); // 0x1a5 Func
	var_2_int = 0; // 0x1a7 TMovI
	goto Label_450; // 0x1a8 Jump
	
Label_450:
	return 8; // 0x1c2 Return
	
Label_425:
	var_26_int = 4; // 0x1a9 PushI
	var_27_int = var_2_int + var_26_int; // 0x1aa Add
	var_28_bool = var_27_int > var_19_int; // 0x1ab GT
	if(var_28_bool == 0) goto Label_442; // 0x1ac JumpB
	var_29_int = 4; // 0x1ad PushI
	var_30_int = var_2_int + var_29_int; // 0x1ae Add
	var_31_int = var_30_int - var_19_int; // 0x1af Sub
	var_2_int = var_2_int - var_31_int; // 0x1b0 Sub2
	var_32_int = 100; // 0x1b1 PushI
	var_33_float = var_2_int * var_32_int; // 0x1b2 Mult
	var_34_int = 4; // 0x1b3 PushI
	var_35_int = var_19_int - var_34_int; // 0x1b4 Sub
	var_20_int = var_33_float / var_33_float; // 0x1b5 Div2
	var_36_string = "scrollbar"; // 0x1b6 PushS
	SendMessage(var_20_int, var_36_string); // 0x1b7 Func
	goto Label_450; // 0x1b9 Jump
	
Label_442:
	var_37_int = 100; // 0x1ba PushI
	var_38_float = var_2_int * var_37_int; // 0x1bb Mult
	var_39_int = 4; // 0x1bc PushI
	var_40_int = var_19_int - var_39_int; // 0x1bd Sub
	var_21_int = var_38_float / var_38_float; // 0x1be Div2
	var_41_string = "scrollbar"; // 0x1bf PushS
	SendMessage(var_21_int, var_41_string); // 0x1c0 Func
}


func_926(var_177_int)
{
	var_178_object = Obj(); var_179_int = 0; var_180_object = Obj(); var_181_int = 0; // 0x39e PushV
	var_182_object = Obj(); // 0x39f PushV
	func_232(var_182_object); // 0x3a0 NEW_2
	var_180_object = var_182_object; // 0x3a1 Mov
	var_183_string = "money"; // 0x3a3 PushS
	GetProperty(var_183_string, var_181_int); // 0x3a4 ObjFunc
	var_177_int = var_181_int; // 0x3a6 Mov
	return 4; // 0x3a7 Return
}


func_937(var_182_int)
{
	var_183_object = Obj(); var_184_object = Obj(); // 0x3a9 PushV
	var_185_object = Obj(); // 0x3aa PushV
	func_232(var_185_object); // 0x3ab NEW_2
	var_184_object = var_185_object; // 0x3ac Mov
	var_186_string = "money"; // 0x3ae PushS
	SetProperty(var_186_string, var_182_int); // 0x3af ObjFunc
	return 2; // 0x3b1 Return
}


func_682(var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; // 0x2aa PushV
	var_96_int = 269; // 0x2ab PushI
	var_97_bool = var_91_int == var_96_int; // 0x2ac Eq
	if(var_97_bool == 0) goto Label_700; // 0x2ad JumpB
	var_94_int = 0; // 0x2ae MovI
	
Label_687:
	var_98_int = 12; // 0x2af PushI
	var_99_bool = var_94_int < var_98_int; // 0x2b0 LT
	if(var_99_bool == 0) goto Label_700; // 0x2b1 JumpB
	var_100_int = -2; // 0x2b2 PushI
	var_101_string = ""; var_102_int = 0; // 0x2b3 PushV
	var_102_int = var_94_int; // 0x2b4 Mov
	func_1233(var_101_string, var_102_int); // 0x2b5 NEW_2
	SendMessage(var_100_int, var_101_string); // 0x2b7 Func
	var_103_int = 1; // 0x2b9 PushI
	var_94_int = var_94_int + var_103_int; // 0x2ba Add2
	goto Label_687; // 0x2bb Jump
	
Label_700:
	var_104_int = 270; // 0x2bc PushI
	var_105_bool = var_91_int == var_104_int; // 0x2bd Eq
	if(var_105_bool == 0) goto Label_717; // 0x2be JumpB
	var_95_int = 0; // 0x2bf MovI
	
Label_704:
	var_106_int = 12; // 0x2c0 PushI
	var_107_bool = var_95_int < var_106_int; // 0x2c1 LT
	if(var_107_bool == 0) goto Label_717; // 0x2c2 JumpB
	var_108_int = -3; // 0x2c3 PushI
	var_109_string = ""; var_110_int = 0; // 0x2c4 PushV
	var_110_int = var_95_int; // 0x2c5 Mov
	func_1233(var_109_string, var_110_int); // 0x2c6 NEW_2
	SendMessage(var_108_int, var_109_string); // 0x2c8 Func
	var_111_int = 1; // 0x2ca PushI
	var_95_int = var_95_int + var_111_int; // 0x2cb Add2
	goto Label_704; // 0x2cc Jump
	
Label_717:
	return 4; // 0x2cd Return
}


func_947()
{
	var_177_int = 0; // 0x3b3 PushV
	func_926(var_177_int); // 0x3b4 NEW_2
	var_184_string = "money"; // 0x3b6 PushS
	SendMessage(var_177_int, var_184_string); // 0x3b7 Func
	return 0; // 0x3b9 Return
}


func_954(var_81_int)
{
	var_82_int = 0; // 0x3bb PushI
	var_83_bool = var_81_int != var_82_int; // 0x3bc Neq
	if(var_83_bool == 0) goto Label_963; // 0x3bd JumpB
	var_84_int = 0; // 0x3be PushI
	var_85_string = "button_weapon"; // 0x3bf PushS
	SendMessage(var_84_int, var_85_string); // 0x3c0 Func
	goto Label_967; // 0x3c2 Jump
	
Label_967:
	var_86_int = 1; // 0x3c7 PushI
	var_87_bool = var_81_int != var_86_int; // 0x3c8 Neq
	if(var_87_bool == 0) goto Label_975; // 0x3c9 JumpB
	var_88_int = 0; // 0x3ca PushI
	var_89_string = "button_clothes"; // 0x3cb PushS
	SendMessage(var_88_int, var_89_string); // 0x3cc Func
	goto Label_979; // 0x3ce Jump
	
Label_979:
	var_90_int = 2; // 0x3d3 PushI
	var_91_bool = var_81_int != var_90_int; // 0x3d4 Neq
	if(var_91_bool == 0) goto Label_987; // 0x3d5 JumpB
	var_92_int = 0; // 0x3d6 PushI
	var_93_string = "button_medcine"; // 0x3d7 PushS
	SendMessage(var_92_int, var_93_string); // 0x3d8 Func
	goto Label_991; // 0x3da Jump
	
Label_991:
	var_94_int = 3; // 0x3df PushI
	var_95_bool = var_81_int != var_94_int; // 0x3e0 Neq
	if(var_95_bool == 0) goto Label_999; // 0x3e1 JumpB
	var_96_int = 0; // 0x3e2 PushI
	var_97_string = "button_food"; // 0x3e3 PushS
	SendMessage(var_96_int, var_97_string); // 0x3e4 Func
	goto Label_1003; // 0x3e6 Jump
	
Label_1003:
	var_98_int = 4; // 0x3eb PushI
	var_99_bool = var_81_int != var_98_int; // 0x3ec Neq
	if(var_99_bool == 0) goto Label_1011; // 0x3ed JumpB
	var_100_int = 0; // 0x3ee PushI
	var_101_string = "button_other"; // 0x3ef PushS
	SendMessage(var_100_int, var_101_string); // 0x3f0 Func
	goto Label_1015; // 0x3f2 Jump
	
Label_1015:
	return 0; // 0x3f7 Return
	
Label_1011:
	var_102_int = 1; // 0x3f3 PushI
	var_103_string = "button_other"; // 0x3f4 PushS
	SendMessage(var_102_int, var_103_string); // 0x3f5 Func
	
Label_999:
	var_104_int = 1; // 0x3e7 PushI
	var_105_string = "button_food"; // 0x3e8 PushS
	SendMessage(var_104_int, var_105_string); // 0x3e9 Func
	
Label_987:
	var_106_int = 1; // 0x3db PushI
	var_107_string = "button_medcine"; // 0x3dc PushS
	SendMessage(var_106_int, var_107_string); // 0x3dd Func
	
Label_975:
	var_108_int = 1; // 0x3cf PushI
	var_109_string = "button_clothes"; // 0x3d0 PushS
	SendMessage(var_108_int, var_109_string); // 0x3d1 Func
	
Label_963:
	var_110_int = 1; // 0x3c3 PushI
	var_111_string = "button_weapon"; // 0x3c4 PushS
	SendMessage(var_110_int, var_111_string); // 0x3c5 Func
}


func_61()
{
	func_573(); // 0x3e NEW_2
	var_208_int = -6; // 0x40 PushI
	var_209_string = ""; var_210_int = 0; // 0x41 PushV
	var_210_int = 0; // 0x42 MovI
	func_1249(var_209_string, var_210_int); // 0x43 NEW_2
	SendMessage(var_208_int, var_209_string); // 0x45 Func
	return 0; // 0x47 Return
}


func_573()
{
	var_205_int = -6; // 0x23d PushI
	var_206_string = ""; var_207_int = 0; // 0x23e PushV
	var_207_int = 0; // 0x23f MovI
	func_1233(var_206_string, var_207_int); // 0x240 NEW_2
	SendMessage(var_205_int, var_206_string); // 0x242 Func
	return 0; // 0x244 Return
}


func_452(var_2_int)
{
	var_214_object = Obj(); var_215_int = 0; var_216_int = 0; var_217_object = Obj(); var_218_int = 0; var_219_int = 0; var_220_object = Obj(); var_221_int = 0; var_222_int = 0; var_223_object = Obj(); var_224_int = 0; var_225_int = 0; // 0x1c4 PushV
	GetContainer(var_220_object); // 0x1c5 Func
	GetItemCount(var_221_int); // 0x1c7 ObjFunc
	var_222_int = var_2_int; // 0x1c9 MovT
	
Label_458:
	var_226_int = 4; // 0x1ca PushI
	var_227_int = var_2_int + var_226_int; // 0x1cb Add
	var_228_bool = var_222_int < var_227_int; // 0x1cc LT
	if(var_228_bool == 0) goto Label_497; // 0x1cd JumpB
	var_229_bool = var_222_int < var_221_int; // 0x1ce LT
	if(var_229_bool == 0) goto Label_487; // 0x1cf JumpB
	GetItem(var_223_object, var_222_int); // 0x1d0 ObjFunc
	GetItemID(var_224_int); // 0x1d2 ObjFunc
	GetItemAmount(var_225_int, var_222_int); // 0x1d4 ObjFunc
	var_230_int = 0; // 0x1d6 PushI
	var_231_string = ""; var_232_int = 0; // 0x1d7 PushV
	var_232_int = var_222_int - var_2_int; // 0x1d8 Sub2
	func_1249(var_231_string, var_232_int); // 0x1d9 NEW_2
	SendMessage(var_230_int, var_231_string, var_223_object); // 0x1db Func
	var_233_int = 65536; // 0x1dd PushI
	var_234_int = var_225_int | var_233_int; // 0x1de Or
	var_235_string = ""; var_236_int = 0; // 0x1df PushV
	var_236_int = var_222_int - var_2_int; // 0x1e0 Sub2
	func_1249(var_235_string, var_236_int); // 0x1e1 NEW_2
	SendMessage(var_234_int, var_235_string); // 0x1e3 Func
	var_223_object = 0; // 0x1e5 SetNull
	goto Label_494; // 0x1e6 Jump
	
Label_494:
	var_237_int = 1; // 0x1ee PushI
	var_222_int = var_222_int + var_237_int; // 0x1ef Add2
	goto Label_458; // 0x1f0 Jump
	
Label_487:
	var_238_int = 32768; // 0x1e7 PushI
	var_239_string = ""; var_240_int = 0; // 0x1e8 PushV
	var_240_int = var_222_int - var_2_int; // 0x1e9 Sub2
	func_1249(var_239_string, var_240_int); // 0x1ea NEW_2
	SendMessage(var_238_int, var_239_string); // 0x1ec Func
	
Label_497:
	return 12; // 0x1f1 Return
}


func_1096(var_0_int, var_291_bool, var_292_int, var_293_int)
{
	var_294_object = Obj(); var_295_object = Obj(); var_296_object = Obj(); var_297_int = 0; var_298_int = 0; var_299_bool = 0; var_300_int = 0; var_301_bool = 0; var_302_bool = 0; var_303_object = Obj(); var_304_object = Obj(); var_305_object = Obj(); var_306_int = 0; var_307_int = 0; var_308_bool = 0; var_309_int = 0; var_310_bool = 0; var_311_bool = 0; // 0x448 PushV
	var_312_object = Obj(); // 0x449 PushV
	func_232(var_312_object); // 0x44a NEW_2
	var_304_object = var_312_object; // 0x44b Mov
	GetContainer(var_303_object); // 0x44d Func
	GetItemCount(var_306_int, var_292_int); // 0x44f ObjFunc
	var_313_bool = var_306_int <= var_293_int; // 0x451 LE
	if(var_313_bool == 0) goto Label_1109; // 0x452 JumpB
	var_291_bool = 0; // 0x453 MovB
	return 18; // 0x454 Return
	
Label_1109:
	GetItemAmount(var_307_int, var_293_int, var_292_int); // 0x455 ObjFunc
	GetItem(var_305_object, var_293_int, var_292_int); // 0x457 ObjFunc
	var_314_int = 0; // 0x459 PushI
	var_315_int = 1; // 0x45a PushI
	AddItem(var_308_bool, var_305_object, var_314_int, var_315_int); // 0x45b ObjFunc
	var_316_bool = var_308_bool == 0; // 0x45d Not
	if(var_316_bool == 0) goto Label_1121; // 0x45e JumpB
	var_291_bool = 0; // 0x45f MovB
	return 18; // 0x460 Return
	
Label_1121:
	var_317_int = 0; // 0x461 PushI
	var_318_bool = var_0_int == var_317_int; // 0x462 Eq
	if(var_318_bool == 0) goto Label_1138; // 0x463 JumpB
	GetItemID(var_309_int); // 0x464 ObjFunc
	var_319_string = "Weapon"; // 0x466 PushS
	HasInvItemProperty(var_310_bool, var_309_int, var_319_string); // 0x467 Func
	var_320_bool = var_310_bool; // 0x469 Push
	if(var_320_bool == 0) goto Label_1138; // 0x46a JumpB
	IsItemSelected(var_311_bool, var_293_int, var_0_int); // 0x46b ObjFunc
	var_321_bool = var_311_bool; // 0x46d Push
	if(var_321_bool == 0) goto Label_1138; // 0x46e JumpB
	var_322_int = -1; // 0x46f PushI
	SetPlayerHandsItem(var_322_int); // 0x470 Func
	
Label_1138:
	var_323_int = 1; // 0x472 PushI
	RemoveItem(var_293_int, var_323_int, var_292_int); // 0x473 ObjFunc
	var_291_bool = 1; // 0x475 MovB
	return 18; // 0x476 Return
}


func_72(var_3_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x48 PushV
	var_53_int = 267; // 0x49 PushI
	var_54_bool = var_44_int == var_53_int; // 0x4a Eq
	if(var_54_bool == 0) goto Label_91; // 0x4b JumpB
	var_3_int = 2; // 0x4c TMovI
	var_49_int = 0; // 0x4d MovI
	
Label_78:
	var_55_int = 4; // 0x4e PushI
	var_56_bool = var_49_int < var_55_int; // 0x4f LT
	if(var_56_bool == 0) goto Label_91; // 0x50 JumpB
	var_57_int = -7; // 0x51 PushI
	var_58_string = ""; var_59_int = 0; // 0x52 PushV
	var_59_int = var_49_int; // 0x53 Mov
	func_1249(var_58_string, var_59_int); // 0x54 NEW_2
	SendMessage(var_57_int, var_58_string); // 0x56 Func
	var_70_int = 1; // 0x58 PushI
	var_49_int = var_49_int + var_70_int; // 0x59 Add2
	goto Label_78; // 0x5a Jump
	
Label_91:
	var_71_int = 268; // 0x5b PushI
	var_72_bool = var_44_int == var_71_int; // 0x5c Eq
	if(var_72_bool == 0) goto Label_109; // 0x5d JumpB
	var_3_int = 0; // 0x5e TMovI
	var_50_int = 0; // 0x5f MovI
	
Label_96:
	var_73_int = 12; // 0x60 PushI
	var_74_bool = var_50_int < var_73_int; // 0x61 LT
	if(var_74_bool == 0) goto Label_109; // 0x62 JumpB
	var_75_int = -7; // 0x63 PushI
	var_76_string = ""; var_77_int = 0; // 0x64 PushV
	var_77_int = var_50_int; // 0x65 Mov
	func_1233(var_76_string, var_77_int); // 0x66 NEW_2
	SendMessage(var_75_int, var_76_string); // 0x68 Func
	var_88_int = 1; // 0x6a PushI
	var_50_int = var_50_int + var_88_int; // 0x6b Add2
	goto Label_96; // 0x6c Jump
	
Label_109:
	var_89_int = 0; // 0x6d PushI
	var_90_bool = var_3_int == var_89_int; // 0x6e Eq
	if(var_90_bool == 0) goto Label_117; // 0x6f JumpB
	var_91_int = 0; // 0x70 PushV
	var_91_int = var_44_int; // 0x71 Mov
	func_682(var_91_int); // 0x72 NEW_2
	return 8; // 0x74 Return
	
Label_117:
	var_112_int = 269; // 0x75 PushI
	var_113_bool = var_44_int == var_112_int; // 0x76 Eq
	if(var_113_bool == 0) goto Label_134; // 0x77 JumpB
	var_51_int = 0; // 0x78 MovI
	
Label_121:
	var_114_int = 4; // 0x79 PushI
	var_115_bool = var_51_int < var_114_int; // 0x7a LT
	if(var_115_bool == 0) goto Label_134; // 0x7b JumpB
	var_116_int = -2; // 0x7c PushI
	var_117_string = ""; var_118_int = 0; // 0x7d PushV
	var_118_int = var_51_int; // 0x7e Mov
	func_1249(var_117_string, var_118_int); // 0x7f NEW_2
	SendMessage(var_116_int, var_117_string); // 0x81 Func
	var_119_int = 1; // 0x83 PushI
	var_51_int = var_51_int + var_119_int; // 0x84 Add2
	goto Label_121; // 0x85 Jump
	
Label_134:
	var_120_int = 270; // 0x86 PushI
	var_121_bool = var_44_int == var_120_int; // 0x87 Eq
	if(var_121_bool == 0) goto Label_151; // 0x88 JumpB
	var_52_int = 0; // 0x89 MovI
	
Label_138:
	var_122_int = 4; // 0x8a PushI
	var_123_bool = var_52_int < var_122_int; // 0x8b LT
	if(var_123_bool == 0) goto Label_151; // 0x8c JumpB
	var_124_int = -3; // 0x8d PushI
	var_125_string = ""; var_126_int = 0; // 0x8e PushV
	var_126_int = var_52_int; // 0x8f Mov
	func_1249(var_125_string, var_126_int); // 0x90 NEW_2
	SendMessage(var_124_int, var_125_string); // 0x92 Func
	var_127_int = 1; // 0x94 PushI
	var_52_int = var_52_int + var_127_int; // 0x95 Add2
	goto Label_138; // 0x96 Jump
	
Label_151:
	return 8; // 0x97 Return
}


func_718(var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0x2ce PushV
	var_57_int = 273; // 0x2cf PushI
	var_58_bool = var_52_int == var_57_int; // 0x2d0 Eq
	if(var_58_bool == 0) goto Label_736; // 0x2d1 JumpB
	var_55_int = 0; // 0x2d2 MovI
	
Label_723:
	var_59_int = 12; // 0x2d3 PushI
	var_60_bool = var_55_int < var_59_int; // 0x2d4 LT
	if(var_60_bool == 0) goto Label_736; // 0x2d5 JumpB
	var_61_int = -2; // 0x2d6 PushI
	var_62_string = ""; var_63_int = 0; // 0x2d7 PushV
	var_63_int = var_55_int; // 0x2d8 Mov
	func_1233(var_62_string, var_63_int); // 0x2d9 NEW_2
	SendMessage(var_61_int, var_62_string); // 0x2db Func
	var_64_int = 1; // 0x2dd PushI
	var_55_int = var_55_int + var_64_int; // 0x2de Add2
	goto Label_723; // 0x2df Jump
	
Label_736:
	var_65_int = 271; // 0x2e0 PushI
	var_66_bool = var_52_int == var_65_int; // 0x2e1 Eq
	if(var_66_bool == 0) goto Label_753; // 0x2e2 JumpB
	var_56_int = 0; // 0x2e3 MovI
	
Label_740:
	var_67_int = 12; // 0x2e4 PushI
	var_68_bool = var_56_int < var_67_int; // 0x2e5 LT
	if(var_68_bool == 0) goto Label_753; // 0x2e6 JumpB
	var_69_int = -3; // 0x2e7 PushI
	var_70_string = ""; var_71_int = 0; // 0x2e8 PushV
	var_71_int = var_56_int; // 0x2e9 Mov
	func_1233(var_70_string, var_71_int); // 0x2ea NEW_2
	SendMessage(var_69_int, var_70_string); // 0x2ec Func
	var_72_int = 1; // 0x2ee PushI
	var_56_int = var_56_int + var_72_int; // 0x2ef Add2
	goto Label_740; // 0x2f0 Jump
	
Label_753:
	return 4; // 0x2f1 Return
}


func_1233(var_147_string, var_148_int)
{
	var_149_int = 1; // 0x4d2 PushI
	var_150_int = var_148_int + var_149_int; // 0x4d3 Add
	var_151_int = 10; // 0x4d4 PushI
	var_152_bool = var_150_int < var_151_int; // 0x4d5 LT
	if(var_152_bool == 0) goto Label_1244; // 0x4d6 JumpB
	var_153_string = "slot0"; // 0x4d7 PushS
	var_154_int = 1; // 0x4d8 PushI
	var_155_int = var_148_int + var_154_int; // 0x4d9 Add
	var_147_string = var_153_string + var_155_int; // 0x4da Add2
	return 0; // 0x4db Return
	
Label_1244:
	var_156_string = "slot"; // 0x4dc PushS
	var_157_int = 1; // 0x4dd PushI
	var_158_int = var_148_int + var_157_int; // 0x4de Add
	var_147_string = var_156_string + var_158_int; // 0x4df Add2
	return 0; // 0x4e0 Return
}


func_1249(var_48_string, var_49_int)
{
	var_51_int = 1; // 0x4e2 PushI
	var_52_int = var_49_int + var_51_int; // 0x4e3 Add
	var_53_int = 10; // 0x4e4 PushI
	var_54_bool = var_52_int < var_53_int; // 0x4e5 LT
	if(var_54_bool == 0) goto Label_1260; // 0x4e6 JumpB
	var_55_string = "cslot0"; // 0x4e7 PushS
	var_56_int = 1; // 0x4e8 PushI
	var_57_int = var_49_int + var_56_int; // 0x4e9 Add
	var_48_string = var_55_string + var_57_int; // 0x4ea Add2
	return 0; // 0x4eb Return
	
Label_1260:
	var_58_string = "cslot"; // 0x4ec PushS
	var_59_int = 1; // 0x4ed PushI
	var_60_int = var_49_int + var_59_int; // 0x4ee Add
	var_48_string = var_58_string + var_60_int; // 0x4ef Add2
	return 0; // 0x4f0 Return
}


func_232(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xe8 PushV
	GetPlayerContainer(var_129_object); // 0xe9 Func
	var_127_object = var_129_object; // 0xeb Mov
	return 2; // 0xec Return
}


func_238(var_2_int, var_3_int, var_21_bool, var_22_int, var_23_string)
{
	var_25_object = Obj(); var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_object = Obj(); var_34_int = 0; // 0xee PushV
	var_35_int = -4; // 0xef PushI
	var_36_bool = var_22_int == var_35_int; // 0xf0 Eq
	if(var_36_bool == 0) goto Label_288; // 0xf1 JumpB
	var_37_string = ""; var_38_int = 0; // 0xf2 PushV
	var_38_int = 0; // 0xf3 MovI
	func_1249(var_37_string, var_38_int); // 0xf4 NEW_2
	var_49_bool = var_23_string == var_37_string; // 0xf6 Eq
	if(var_49_bool == 0) goto Label_260; // 0xf7 JumpB
	var_50_int = 0; // 0xf8 PushI
	var_51_bool = var_2_int > var_50_int; // 0xf9 GT
	if(var_51_bool == 0) goto Label_259; // 0xfa JumpB
	var_52_int = -1; // 0xfb PushI
	var_2_int = var_2_int + var_52_int; // 0xfc Add2
	func_452(var_34_int); // 0xfe NEW_2
	func_411(var_34_int); // 0x101 NEW_2
	
Label_259:
	goto Label_283; // 0x103 Jump
	
Label_283:
	var_108_int = -4; // 0x11b PushI
	SendMessage(var_108_int, var_23_string); // 0x11c Func
	var_21_bool = 1; // 0x11e MovB
	return 10; // 0x11f Return
	
Label_260:
	var_109_string = ""; var_110_int = 0; // 0x104 PushV
	var_110_int = 3; // 0x105 MovI
	func_1249(var_109_string, var_110_int); // 0x106 NEW_2
	var_111_bool = var_23_string == var_109_string; // 0x108 Eq
	if(var_111_bool == 0) goto Label_283; // 0x109 JumpB
	GetContainer(var_30_object); // 0x10a Func
	GetItemCount(var_31_int); // 0x10c ObjFunc
	var_112_int = 4; // 0x10e PushI
	var_113_int = var_2_int + var_112_int; // 0x10f Add
	var_114_bool = var_113_int <= var_31_int; // 0x110 LE
	if(var_114_bool == 0) goto Label_282; // 0x111 JumpB
	var_115_int = 1; // 0x112 PushI
	var_2_int = var_2_int + var_115_int; // 0x113 Add2
	func_452(var_34_int); // 0x115 NEW_2
	func_411(var_34_int); // 0x118 NEW_2
	
Label_282:
	var_30_object = 0; // 0x11a SetNull
	
Label_288:
	var_116_int = -8; // 0x120 PushI
	var_117_bool = var_22_int == var_116_int; // 0x121 Eq
	if(var_117_bool == 0) goto Label_294; // 0x122 JumpB
	var_3_int = 0; // 0x123 TMovI
	var_21_bool = 1; // 0x124 MovB
	return 10; // 0x125 Return
	
Label_294:
	var_118_int = -9; // 0x126 PushI
	var_119_bool = var_22_int == var_118_int; // 0x127 Eq
	if(var_119_bool == 0) goto Label_300; // 0x128 JumpB
	var_3_int = 2; // 0x129 TMovI
	var_21_bool = 1; // 0x12a MovB
	return 10; // 0x12b Return
	
Label_300:
	var_120_int = 0; // 0x12c PushI
	var_121_bool = var_22_int < var_120_int; // 0x12d LT
	if(var_121_bool == 0) goto Label_305; // 0x12e JumpB
	var_21_bool = 1; // 0x12f MovB
	return 10; // 0x130 Return
	
Label_305:
	var_32_int = 0; // 0x131 MovI
	
Label_306:
	var_122_int = 4; // 0x132 PushI
	var_123_bool = var_32_int < var_122_int; // 0x133 LT
	if(var_123_bool == 0) goto Label_326; // 0x134 JumpB
	var_124_string = ""; var_125_int = 0; // 0x135 PushV
	var_125_int = var_32_int; // 0x136 Mov
	func_1249(var_124_string, var_125_int); // 0x137 NEW_2
	var_126_bool = var_23_string == var_124_string; // 0x139 Eq
	if(var_126_bool == 0) goto Label_323; // 0x13a JumpB
	var_127_int = 0; var_128_bool = 0; // 0x13b PushV
	var_127_int = var_32_int; // 0x13c Mov
	var_129_int = 0; // 0x13d PushI
	var_128_bool = var_22_int == var_129_int; // 0x13e Eq2
	func_382(var_127_int, var_128_bool); // 0x13f NEW_2
	var_21_bool = 1; // 0x141 MovB
	return 10; // 0x142 Return
	
Label_323:
	var_227_int = 1; // 0x143 PushI
	var_32_int = var_32_int + var_227_int; // 0x144 Add2
	goto Label_306; // 0x145 Jump
	
Label_326:
	var_228_string = "scrollbar"; // 0x146 PushS
	var_229_bool = var_23_string == var_228_string; // 0x147 Eq
	if(var_229_bool == 0) goto Label_350; // 0x148 JumpB
	GetContainer(var_33_object); // 0x149 Func
	GetItemCount(var_34_int); // 0x14b ObjFunc
	var_230_float = 0.01; // 0x14d PushF
	var_231_int = 4; // 0x14e PushI
	var_232_int = var_34_int - var_231_int; // 0x14f Sub
	var_233_float = var_230_float * var_232_int; // 0x150 Mult
	var_234_float = var_233_float * var_22_int; // 0x151 Mult
	var_235_float = 0.5; // 0x152 PushF
	var_2_int = var_234_float + var_235_float; // 0x153 Add2
	var_236_int = 0; // 0x154 PushI
	var_237_bool = var_2_int < var_236_int; // 0x155 LT
	if(var_237_bool == 0) goto Label_344; // 0x156 JumpB
	var_2_int = 0; // 0x157 TMovI
	
Label_344:
	func_452(var_34_int); // 0x159 NEW_2
	var_21_bool = 1; // 0x15b MovB
	return 10; // 0x15c Return
	
Label_350:
	var_21_bool = 0; // 0x15e MovB
	return 10; // 0x15f Return
}


func_1265(var_170_int)
{
	var_171_int = 0; var_172_int = 0; // 0x4f1 PushV
	var_173_string = "Money"; // 0x4f2 PushS
	GetInvItemByName(var_172_int, var_173_string); // 0x4f3 Func
	var_170_int = var_172_int; // 0x4f5 Mov
	return 2; // 0x4f6 Return
}


func_754(var_142_bool)
{
	var_142_bool = 0; // 0x2f3 MovB
	return 0; // 0x2f4 Return
}


func_499(var_0_int, var_72_int)
{
	var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); // 0x1f3 PushV
	var_0_int = -1; // 0x1f4 TMovI
	var_77_int = 0; // 0x1f5 PushV
	var_77_int = var_72_int; // 0x1f6 Mov
	func_912(var_76_object, var_77_int); // 0x1f7 NEW_2
	var_112_int = 0; // 0x1f9 PushV
	var_112_int = var_0_int; // 0x1fa MovT
	func_1146(var_112_int); // 0x1fb NEW_2
	func_947(); // 0x1fe NEW_2
	var_75_int = 0; // 0x200 MovI
	
Label_513:
	var_185_int = 12; // 0x201 PushI
	var_186_bool = var_75_int < var_185_int; // 0x202 LT
	if(var_186_bool == 0) goto Label_551; // 0x203 JumpB
	CreateStringVector(var_76_object); // 0x204 Func
	var_187_string = ""; var_188_int = 0; // 0x206 PushV
	var_189_int = 12; // 0x207 PushI
	var_190_int = var_75_int + var_189_int; // 0x208 Add
	var_191_int = 1; // 0x209 PushI
	var_192_int = var_190_int - var_191_int; // 0x20a Sub
	var_193_int = 12; // 0x20b PushI
	var_188_int = var_192_int % var_193_int; // 0x20c Mod2
	func_1233(var_187_string, var_188_int); // 0x20d NEW_2
	add(var_187_string); // 0x20f ObjFunc
	var_194_string = ""; var_195_int = 0; // 0x211 PushV
	var_196_int = 12; // 0x212 PushI
	var_197_int = var_75_int + var_196_int; // 0x213 Add
	var_198_int = 1; // 0x214 PushI
	var_199_int = var_197_int + var_198_int; // 0x215 Add
	var_200_int = 12; // 0x216 PushI
	var_195_int = var_199_int % var_200_int; // 0x217 Mod2
	func_1233(var_194_string, var_195_int); // 0x218 NEW_2
	add(var_194_string); // 0x21a ObjFunc
	var_201_int = -1; // 0x21c PushI
	var_202_string = ""; var_203_int = 0; // 0x21d PushV
	var_203_int = var_75_int; // 0x21e Mov
	func_1233(var_202_string, var_203_int); // 0x21f NEW_2
	SendMessage(var_201_int, var_202_string, var_76_object); // 0x221 Func
	var_76_object = 0; // 0x223 SetNull
	var_204_int = 1; // 0x224 PushI
	var_75_int = var_75_int + var_204_int; // 0x225 Add2
	goto Label_513; // 0x226 Jump
	
Label_551:
	func_61(); // 0x228 NEW_2
	var_211_string = "default"; // 0x22a PushS
	SetCursor(var_211_string); // 0x22b Func
	ShowCursor(); // 0x22d Func
	CaptureKeyboard(); // 0x22f Func
	var_212_bool = 0; // 0x231 PushB
	SetOwnerDraw(var_212_bool); // 0x232 Func
	var_213_bool = 1; // 0x234 PushB
	SetNeedUpdate(var_213_bool); // 0x235 Func
	func_375(); // 0x238 NEW_2
	ProcessEvents(); // 0x23a Func
	return 4; // 0x23c Return
}


func_371()
{
	func_452(var_4_float); // 0x174 NEW_2
	return 0; // 0x176 Return
}


func_757(var_133_bool, var_134_int, var_135_int)
{
	var_136_bool = 0; var_137_bool = 0; // 0x2f5 PushV
	var_138_object = Obj(); // 0x2f6 PushV
	func_232(var_138_object); // 0x2f7 NEW_2
	var_139_object = Obj(); // 0x2f9 PushV
	func_232(var_139_object); // 0x2fa NEW_2
	var_140_object = Obj(); // 0x2fc PushV
	func_232(var_140_object); // 0x2fd NEW_2
	var_141_object = Obj(); // 0x2ff PushV
	func_232(var_141_object); // 0x300 NEW_2
	IsItemSelected(var_137_bool, var_134_int, var_135_int); // 0x302 ObjFunc
	var_133_bool = var_137_bool; // 0x304 Mov
	return 2; // 0x305 Return
}


func_375()
{
	func_411(var_76_object); // 0x178 NEW_2
	func_452(var_76_object); // 0x17b NEW_2
	return 0; // 0x17d Return
}


func_1016(var_133_int, var_134_bool, var_135_int)
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_int = 0; var_145_bool = 0; var_146_bool = 0; var_147_object = Obj(); var_148_object = Obj(); var_149_object = Obj(); var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_int = 0; var_156_bool = 0; var_157_bool = 0; // 0x3f8 PushV
	var_134_bool = 0; // 0x3f9 MovB
	var_158_int = -1; // 0x3fa PushI
	var_159_bool = var_135_int == var_158_int; // 0x3fb Eq
	if(var_159_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_133_int = -1; // 0x3fd MovI
	return 22; // 0x3fe Return
	
Label_1023:
	var_160_object = Obj(); // 0x3ff PushV
	func_232(var_160_object); // 0x400 NEW_2
	var_148_object = var_160_object; // 0x401 Mov
	GetContainer(var_147_object); // 0x403 Func
	GetItemCount(var_150_int); // 0x405 ObjFunc
	var_163_bool = var_150_int <= var_135_int; // 0x407 LE
	if(var_163_bool == 0) goto Label_1035; // 0x408 JumpB
	var_133_int = -1; // 0x409 MovI
	return 22; // 0x40a Return
	
Label_1035:
	GetItemAmount(var_151_int, var_135_int); // 0x40b ObjFunc
	var_164_int = 0; // 0x40d PushI
	var_165_bool = var_151_int == var_164_int; // 0x40e Eq
	if(var_165_bool == 0) goto Label_1042; // 0x40f JumpB
	var_133_int = -1; // 0x410 MovI
	return 22; // 0x411 Return
	
Label_1042:
	GetItem(var_149_object, var_135_int); // 0x412 ObjFunc
	GetItemID(var_152_int); // 0x414 ObjFunc
	var_153_bool = 0; // 0x416 MovB
	var_166_string = "Organ"; // 0x417 PushS
	HasProperty(var_153_bool, var_166_string); // 0x418 ObjFunc
	var_167_bool = var_153_bool; // 0x41a Push
	if(var_167_bool == 0) goto Label_1055; // 0x41b JumpB
	var_168_string = "Organ"; // 0x41c PushS
	RemoveProperty(var_168_string); // 0x41d ObjFunc
	
Label_1055:
	var_169_string = "Category"; // 0x41f PushS
	GetInvItemProperty(var_154_int, var_152_int, var_169_string); // 0x420 Func
	var_170_int = 0; // 0x422 PushV
	func_1265(var_170_int); // 0x423 NEW_2
	var_174_bool = var_152_int == var_170_int; // 0x425 Eq
	if(var_174_bool == 0) goto Label_1080; // 0x426 JumpB
	var_175_int = 0; // 0x427 PushV
	func_926(var_175_int); // 0x428 NEW_2
	var_155_int = var_175_int; // 0x429 Mov
	var_155_int = var_155_int + var_151_int; // 0x42b Add2
	var_182_int = 0; // 0x42c PushV
	var_182_int = var_155_int; // 0x42d Mov
	func_937(var_182_int); // 0x42e NEW_2
	RemoveItem(var_135_int, var_151_int); // 0x430 ObjFunc
	func_947(); // 0x433 NEW_2
	var_134_bool = 1; // 0x435 MovB
	var_133_int = -1; // 0x436 MovI
	return 22; // 0x437 Return
	
Label_1080:
	var_189_int = 1; // 0x438 PushI
	AddItem(var_157_bool, var_149_object, var_154_int, var_189_int); // 0x439 ObjFunc
	var_190_bool = var_157_bool == 0; // 0x43b Not
	if(var_190_bool == 0) goto Label_1087; // 0x43c JumpB
	var_133_int = var_154_int; // 0x43d Mov
	return 22; // 0x43e Return
	
Label_1087:
	var_134_bool = 1; // 0x43f MovB
	var_191_int = 1; // 0x440 PushI
	RemoveItem(var_135_int, var_191_int); // 0x441 ObjFunc
	var_133_int = var_154_int; // 0x443 Mov
	return 22; // 0x444 Return
}


func_1146(var_112_int)
{
	var_113_object = Obj(); var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_bool = 0; var_119_bool = 0; var_120_object = Obj(); var_121_int = 0; var_122_int = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_bool = 0; // 0x47a PushV
	var_127_object = Obj(); // 0x47b PushV
	func_232(var_127_object); // 0x47c NEW_2
	var_120_object = var_127_object; // 0x47d Mov
	GetItemCount(var_121_int, var_112_int); // 0x47f ObjFunc
	var_122_int = 0; // 0x481 MovI
	
Label_1154:
	var_130_int = 12; // 0x482 PushI
	var_131_bool = var_122_int < var_130_int; // 0x483 LT
	if(var_131_bool == 0) goto Label_1231; // 0x484 JumpB
	var_132_bool = var_122_int < var_121_int; // 0x485 LT
	if(var_132_bool == 0) goto Label_1221; // 0x486 JumpB
	GetItem(var_123_object, var_122_int, var_112_int); // 0x487 ObjFunc
	GetItemAmount(var_124_int, var_122_int, var_112_int); // 0x489 ObjFunc
	var_133_bool = 0; var_134_int = 0; var_135_int = 0; // 0x48b PushV
	var_134_int = var_122_int; // 0x48c Mov
	var_135_int = var_112_int; // 0x48d Mov
	func_757(var_133_bool, var_134_int, var_135_int); // 0x48e NEW_2
	var_125_bool = var_133_bool; // 0x48f Mov
	var_142_bool = 0; var_143_object = Obj(); // 0x491 PushV
	var_143_object = var_123_object; // 0x492 Mov
	func_754(var_143_object); // 0x493 NEW_2
	var_126_bool = var_142_bool; // 0x494 Mov
	var_144_bool = var_125_bool; // 0x496 Push
	if(var_144_bool == 0) goto Label_1194; // 0x497 JumpB
	var_145_bool = var_126_bool; // 0x498 Push
	if(var_145_bool == 0) goto Label_1186; // 0x499 JumpB
	var_146_int = 0; // 0x49a PushI
	var_147_string = ""; var_148_int = 0; // 0x49b PushV
	var_148_int = var_122_int; // 0x49c Mov
	func_1233(var_147_string, var_148_int); // 0x49d NEW_2
	SendMessage(var_146_int, var_147_string, var_123_object); // 0x49f Func
	goto Label_1193; // 0x4a1 Jump
	
Label_1193:
	goto Label_1211; // 0x4a9 Jump
	
Label_1211:
	var_159_int = 65536; // 0x4bb PushI
	var_160_int = var_124_int | var_159_int; // 0x4bc Or
	var_161_string = ""; var_162_int = 0; // 0x4bd PushV
	var_162_int = var_122_int; // 0x4be Mov
	func_1233(var_161_string, var_162_int); // 0x4bf NEW_2
	SendMessage(var_160_int, var_161_string); // 0x4c1 Func
	var_123_object = 0; // 0x4c3 SetNull
	goto Label_1228; // 0x4c4 Jump
	
Label_1228:
	var_163_int = 1; // 0x4cc PushI
	var_122_int = var_122_int + var_163_int; // 0x4cd Add2
	goto Label_1154; // 0x4ce Jump
	
Label_1186:
	var_164_int = 16384; // 0x4a2 PushI
	var_165_string = ""; var_166_int = 0; // 0x4a3 PushV
	var_166_int = var_122_int; // 0x4a4 Mov
	func_1233(var_165_string, var_166_int); // 0x4a5 NEW_2
	SendMessage(var_164_int, var_165_string, var_123_object); // 0x4a7 Func
	
Label_1194:
	var_167_bool = var_126_bool; // 0x4aa Push
	if(var_167_bool == 0) goto Label_1204; // 0x4ab JumpB
	var_168_int = 131072; // 0x4ac PushI
	var_169_string = ""; var_170_int = 0; // 0x4ad PushV
	var_170_int = var_122_int; // 0x4ae Mov
	func_1233(var_169_string, var_170_int); // 0x4af NEW_2
	SendMessage(var_168_int, var_169_string, var_123_object); // 0x4b1 Func
	goto Label_1211; // 0x4b3 Jump
	
Label_1204:
	var_171_int = 0; // 0x4b4 PushI
	var_172_string = ""; var_173_int = 0; // 0x4b5 PushV
	var_173_int = var_122_int; // 0x4b6 Mov
	func_1233(var_172_string, var_173_int); // 0x4b7 NEW_2
	SendMessage(var_171_int, var_172_string, var_123_object); // 0x4b9 Func
	
Label_1221:
	var_174_int = 32768; // 0x4c5 PushI
	var_175_string = ""; var_176_int = 0; // 0x4c6 PushV
	var_176_int = var_122_int; // 0x4c7 Mov
	func_1233(var_175_string, var_176_int); // 0x4c8 NEW_2
	SendMessage(var_174_int, var_175_string); // 0x4ca Func
	
Label_1231:
	return 14; // 0x4cf Return
}


func_382(var_2_int, var_127_int)
{
	var_130_bool = 0; var_131_bool = 0; // 0x17e PushV
	var_132_int = 0; // 0x17f PushV
	var_133_int = 0; var_134_bool = 0; var_135_int = 0; // 0x180 PushV
	var_134_bool = var_131_bool; // 0x181 Mov
	var_135_int = var_127_int + var_2_int; // 0x182 Add2
	func_1016(var_133_int, var_134_bool, var_135_int); // 0x183 NEW_2
	var_132_int = var_133_int; // 0x184 Mov
	func_912(var_131_bool, var_132_int); // 0x186 NEW_2
	var_226_bool = var_131_bool == 0; // 0x188 Not
	if(var_226_bool == 0) goto Label_394; // 0x189 JumpB
	
Label_394:
	func_411(var_131_bool); // 0x18b NEW_2
	return 2; // 0x18d Return
}


