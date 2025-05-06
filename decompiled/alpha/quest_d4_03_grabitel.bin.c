task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x7 PushV
	IsPlayerActor(var_8_object, var_10_bool); // 0x8 Func
	var_11_bool = var_10_bool; // 0xa Push
	if(var_11_bool == 0) goto Label_22; // 0xb JumpB
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0xc PushV
	var_13_string = "quest_d4_03"; // 0xd MovS
	var_14_string = "gang_attack"; // 0xe MovS
	func_1147(var_12_bool, var_13_string, var_14_string); // 0xf Call
	TaskCall(1); // 0x12 TaskCall
	func_88(); // 0x13 Call
	TaskReturn(); // 0x14 TaskReturn
	
Label_22:
	return 2; // 0x16 Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_string = "attack"; // 0x18 PushS
	var_10_bool = var_8_object == var_9_string; // 0x19 Eq
	if(var_10_bool == 0) goto Label_33; // 0x1a JumpB
	TaskCall(1); // 0x1c TaskCall
	func_88(); // 0x1d Call
	TaskReturn(); // 0x1e TaskReturn
	goto Label_37; // 0x20 Jump
	
Label_37:
	return 0; // 0x25 Return
	
Label_33:
	var_371_string = ""; // 0x21 PushV
	var_371_string = var_8_object; // 0x22 Mov
	func_42(var_8_object, var_371_string); // 0x23 Call
}


task_0_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_bool = 0; // 0x46 PushV
	var_8_bool = 0; // 0x47 MovB
	var_9_bool = var_0_bool; // 0x48 PushT
	if(var_9_bool == 0) goto Label_79; // 0x49 JumpB
	var_10_bool = 0; // 0x4a PushV
	func_86(var_10_bool); // 0x4b Call
	if(var_10_bool == 0) goto Label_79; // 0x4d JumpB
	var_8_bool = 1; // 0x4e MovB
	
Label_79:
	if(var_8_bool == 0) goto Label_85; // 0x4f JumpB
	var_11_object = Obj(); // 0x50 PushV
	func_1123(var_11_object); // 0x51 Call
	RemoveActor(var_11_object); // 0x53 Func
	
Label_85:
	return 0; // 0x55 Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj(); // 0x6a PushV
	func_1123(var_8_object); // 0x6b Call
	RemoveActor(var_8_object); // 0x6d Func
	Hold(); // 0x6f Func
	return 0; // 0x71 Return
}


task_2_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj(); // 0x25d PushV
	func_1123(var_8_object); // 0x25e Call
	RemoveActor(var_8_object); // 0x260 Func
	Hold(); // 0x262 Func
	return 0; // 0x264 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0; // 0x2cc PushI
	var_10_bool = var_8_int != var_9_int; // 0x2cd Neq
	if(var_10_bool == 0) goto Label_720; // 0x2ce JumpB
	return 0; // 0x2cf Return
	
Label_720:
	var_11_bool = 0; var_12_object = Obj(); // 0x2d0 PushV
	var_12_object = var_1_object; // 0x2d1 MovT
	func_753(var_11_bool, var_12_object); // 0x2d2 Call
	var_47_bool = var_11_bool == 0; // 0x2d4 Not
	if(var_47_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_0_bool = 1; // 0x2d6 TMovB
	
Label_727:
	var_48_int = 0; // 0x2d7 PushI
	KillTimer(var_48_int); // 0x2d8 Func
	Stop(); // 0x2da Func
	return 0; // 0x2dc Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object); // 0x2de Func
	return 0; // 0x2e0 Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	func_737(var_8_object); // 0x2ea Call
	var_10_object = Obj(); // 0x2ec PushV
	var_10_object = var_8_object; // 0x2ed Mov
	func_1193(); // 0x2ee Call
	return 0; // 0x2f0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj(); // 0x2fc PushV
	func_1123(var_8_object); // 0x2fd Call
	RemoveActor(var_8_object); // 0x2ff Func
	Hold(); // 0x301 Func
	return 0; // 0x303 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x37b Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	return 0; // 0x37d Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	return 0; // 0x37f Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x495 PushV
	var_12_object = var_8_object; // 0x496 Mov
	var_13_int = var_9_int; // 0x497 Mov
	var_14_float = var_10_float; // 0x498 Mov
	func_1045(var_13_int, var_14_float); // 0x499 Call
	return 0; // 0x49b Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x49c PushV
	var_12_string = "health"; // 0x49d PushS
	var_13_bool = var_9_string == var_12_string; // 0x49e Eq
	if(var_13_bool == 0) goto Label_1192; // 0x49f JumpB
	var_14_string = "health"; // 0x4a0 PushS
	GetProperty(var_14_string, var_11_float); // 0x4a1 Func
	var_15_int = 0; // 0x4a3 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x4a4 LE
	if(var_16_bool == 0) goto Label_1192; // 0x4a5 JumpB
	SignalDeath(var_8_object); // 0x4a6 Func
	
Label_1192:
	return 2; // 0x4a8 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj(); // 0x4aa PushV
	var_9_object = var_8_object; // 0x4ab Mov
	func_1159(var_9_object); // 0x4ac Call
	return 0; // 0x4ae Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_bool = 1; // 0x0 PushB
	SensePlayerOnly(var_8_bool); // 0x1 Func
	func_38(); // 0x4 Call
	return 0; // 0x6 Return
}


func_896(var_300_string, var_301_int)
{
	var_302_int = 1; // 0x381 PushI
	var_303_bool = var_301_int == var_302_int; // 0x382 Eq
	if(var_303_bool == 0) goto Label_902; // 0x383 JumpB
	var_300_string = "fire"; // 0x384 MovS
	return 0; // 0x385 Return
	
Label_902:
	var_300_string = "phys"; // 0x386 MovS
	return 0; // 0x387 Return
}


func_772(var_16_object)
{
	var_17_object = Obj(); // 0x305 PushV
	var_17_object = var_16_object; // 0x306 Mov
	func_781(var_17_object); // 0x307 Call
	
Label_777:
	Hold(); // 0x309 Func
	goto Label_777; // 0x30b Jump
}


func_1159(var_9_object)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = ""; // 0x488 PushV
	var_11_string = "quest_d4_03"; // 0x489 MovS
	var_12_string = "death"; // 0x48a MovS
	func_1147(var_10_bool, var_11_string, var_12_string); // 0x48b Call
	var_16_object = Obj(); // 0x48d PushV
	var_16_object = var_9_object; // 0x48e Mov
	TaskCall(3); // 0x48f TaskCall
	func_772(var_16_object); // 0x490 Call
	TaskReturn(); // 0x491 TaskReturn
	return 0; // 0x493 Return
}


func_904(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x388 PushV
	var_40_string = "HasProperty"; // 0x389 PushS
	var_41_int = 2; // 0x38a PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x38b FuncExist
	var_43_bool = var_42_bool == 0; // 0x38c Not
	if(var_43_bool == 0) goto Label_912; // 0x38d JumpB
	var_35_bool = 0; // 0x38e MovB
	return 2; // 0x38f Return
	
Label_912:
	HasProperty(var_37_string, var_39_bool); // 0x390 ObjFunc
	var_35_bool = var_39_bool; // 0x392 Mov
	return 2; // 0x393 Return
}


func_781(var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; var_25_bool = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); // 0x30d PushV
	var_38_bool = var_17_object == 0; // 0x30e NullEq
	if(var_38_bool == 0) goto Label_789; // 0x30f JumpB
	var_39_string = ""; // 0x310 PushV
	var_39_string = "fdie"; // 0x311 MovS
	func_868(var_39_string); // 0x312 Call
	goto Label_867; // 0x314 Jump
	
Label_867:
	return 20; // 0x363 Return
	
Label_789:
	GetPosition(var_28_cvector); // 0x315 ObjFunc
	GetPosition(var_29_cvector); // 0x317 Func
	GetDirection(var_30_cvector); // 0x319 Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x31b Sub2
	var_42_float = GetByIndex(var_31_cvector, 0); // 0x31c PushE
	var_43_float = GetByIndex(var_30_cvector, 0); // 0x31d PushE
	var_44_float = var_42_float * var_43_float; // 0x31e Mult
	var_45_float = GetByIndex(var_31_cvector, 2); // 0x31f PushE
	var_46_float = GetByIndex(var_30_cvector, 2); // 0x320 PushE
	var_47_float = var_45_float * var_46_float; // 0x321 Mult
	var_48_int = var_44_float + var_47_float; // 0x322 Add
	var_49_int = 0; // 0x323 PushI
	var_50_bool = var_48_int >= var_49_int; // 0x324 GE
	if(var_50_bool == 0) goto Label_808; // 0x325 JumpB
	var_32_string = "fdie"; // 0x326 MovS
	goto Label_809; // 0x327 Jump
	
Label_809:
	RemoveRTEnvelope(); // 0x329 Func
	SetDeathState(); // 0x32b Func
	Stop(); // 0x32d Func
	StopAsync(); // 0x32f Func
	var_33_object = var_17_object; // 0x331 Mov
	var_51_string = "GetScriptProperty"; // 0x332 PushS
	var_52_int = 2; // 0x333 PushI
	var_53_bool = IsFuncExist(var_17_object, var_51_string, var_52_int); // 0x334 FuncExist
	if(var_53_bool == 0) goto Label_833; // 0x335 JumpB
	var_54_string = "Owner"; // 0x336 PushS
	HasScriptProperty(var_34_bool, var_54_string); // 0x337 ObjFunc
	var_55_bool = var_34_bool; // 0x339 Push
	if(var_55_bool == 0) goto Label_833; // 0x33a JumpB
	var_56_string = "Owner"; // 0x33b PushS
	GetScriptProperty(var_33_object, var_56_string); // 0x33c ObjFunc
	var_57_bool = var_33_object == 0; // 0x33e NullEq
	if(var_57_bool == 0) goto Label_833; // 0x33f JumpB
	var_33_object = var_17_object; // 0x340 Mov
	
Label_833:
	var_58_string = "@GetEyesHeight"; // 0x341 PushS
	var_59_int = 1; // 0x342 PushI
	var_60_bool = IsFuncExist(var_33_object, var_58_string, var_59_int); // 0x343 FuncExist
	if(var_60_bool == 0) goto Label_848; // 0x344 JumpB
	GetEyesHeight(var_36_float); // 0x345 ObjFunc
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x347 MovV
	var_61_float = GetByIndex(var_37_cvector, 1); // 0x348 PushE
	var_61_float = var_36_float; // 0x349 Mov
	SetByIndex(var_37_cvector, 1) = var_61_float; // 0x34a PopE
	var_62_string = "head"; // 0x34b PushS
	LookAsync(var_17_object, var_62_string, var_37_cvector); // 0x34c Func
	var_35_bool = 1; // 0x34e MovB
	goto Label_849; // 0x34f Jump
	
Label_849:
	var_63_string = "all"; // 0x351 PushS
	PlayAnimation(var_63_string, var_32_string); // 0x352 Func
	WaitForAnimEnd(); // 0x354 Func
	var_64_bool = var_35_bool; // 0x356 Push
	if(var_64_bool == 0) goto Label_861; // 0x357 JumpB
	StopAsync(); // 0x358 Func
	var_65_string = "head"; // 0x35a PushS
	UnlookAsync(var_65_string); // 0x35b Func
	
Label_861:
	var_66_string = "all"; // 0x35d PushS
	LockAnimationEnd(var_66_string, var_32_string); // 0x35e Func
	RemoveEnvelope(); // 0x360 Func
	var_33_object = 0; // 0x362 SetNull
	
Label_848:
	var_35_bool = 0; // 0x350 MovB
	
Label_808:
	var_32_string = "bdie"; // 0x328 MovS
}


func_916(var_272_float, var_273_object, var_274_float, var_275_int)
{
	var_279_int = 0; var_280_string = ""; var_281_int = 0; var_282_float = 0; var_283_float = 0; var_284_float = 0; var_285_int = 0; var_286_string = ""; var_287_int = 0; var_288_float = 0; var_289_float = 0; var_290_float = 0; // 0x394 PushV
	var_291_bool = 0; var_292_object = Obj(); var_293_string = ""; // 0x395 PushV
	var_292_object = var_273_object; // 0x396 Mov
	var_293_string = "health"; // 0x397 MovS
	func_904(var_291_bool, var_292_object, var_293_string); // 0x398 Call
	var_294_bool = var_291_bool == 0; // 0x39a Not
	if(var_294_bool == 0) goto Label_926; // 0x39b JumpB
	var_272_float = 0.0; // 0x39c MovF
	return 12; // 0x39d Return
	
Label_926:
	var_295_bool = 0; var_296_object = Obj(); var_297_string = ""; // 0x39e PushV
	var_296_object = var_273_object; // 0x39f Mov
	var_297_string = "armor"; // 0x3a0 MovS
	func_904(var_295_bool, var_296_object, var_297_string); // 0x3a1 Call
	var_298_bool = var_295_bool == 0; // 0x3a3 Not
	if(var_298_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_285_int = 0; // 0x3a5 MovI
	goto Label_938; // 0x3a6 Jump
	
Label_938:
	var_299_string = "armor_"; // 0x3aa PushS
	var_300_string = ""; var_301_int = 0; // 0x3ab PushV
	var_301_int = var_275_int; // 0x3ac Mov
	func_896(var_300_string, var_301_int); // 0x3ad Call
	var_286_string = var_299_string + var_300_string; // 0x3af Add2
	var_304_bool = 0; var_305_object = Obj(); var_306_string = ""; // 0x3b0 PushV
	var_305_object = var_273_object; // 0x3b1 Mov
	var_306_string = var_286_string; // 0x3b2 Mov
	func_904(var_304_bool, var_305_object, var_306_string); // 0x3b3 Call
	var_307_bool = var_304_bool == 0; // 0x3b5 Not
	if(var_307_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_287_int = 0; // 0x3b7 MovI
	goto Label_955; // 0x3b8 Jump
	
Label_955:
	var_308_float = 0; var_309_float = 0; var_310_float = 0; // 0x3bb PushV
	var_311_int = var_285_int + var_287_int; // 0x3bc Add
	var_312_float = 100.0; // 0x3bd PushF
	var_309_float = var_311_int / var_311_int; // 0x3be Div2
	var_310_float = 1; // 0x3bf MovI
	func_1129(var_308_float, var_309_float, var_310_float); // 0x3c0 Call
	var_288_float = var_308_float; // 0x3c1 Mov
	var_314_string = "health"; // 0x3c3 PushS
	GetProperty(var_314_string, var_289_float); // 0x3c4 ObjFunc
	var_315_int = 1; // 0x3c6 PushI
	var_316_int = var_315_int - var_288_float; // 0x3c7 Sub
	var_290_float = var_274_float * var_316_int; // 0x3c8 Mult2
	var_317_string = "health"; // 0x3c9 PushS
	var_318_float = 0; var_319_float = 0; var_320_float = 0; var_321_float = 0; // 0x3ca PushV
	var_319_float = var_289_float - var_290_float; // 0x3cb Sub2
	var_320_float = 0; // 0x3cc MovI
	var_321_float = 1; // 0x3cd MovI
	func_1136(var_318_float, var_319_float, var_320_float, var_321_float); // 0x3ce Call
	SetProperty(var_317_string, var_318_float); // 0x3d0 ObjFunc
	var_272_float = var_290_float; // 0x3d2 Mov
	return 12; // 0x3d3 Return
	
Label_953:
	GetProperty(var_286_string, var_287_int); // 0x3b9 ObjFunc
	
Label_935:
	var_324_string = "armor"; // 0x3a7 PushS
	GetProperty(var_324_string, var_285_int); // 0x3a8 ObjFunc
}


func_1045(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; // 0x415 PushV
	var_35_bool = 0; // 0x416 PushV
	var_35_bool = 0; // 0x417 MovB
	var_36_int = 4; // 0x418 PushI
	var_37_bool = var_13_int != var_36_int; // 0x419 Neq
	if(var_37_bool == 0) goto Label_1055; // 0x41a JumpB
	var_38_int = 5; // 0x41b PushI
	var_39_bool = var_13_int != var_38_int; // 0x41c Neq
	if(var_39_bool == 0) goto Label_1055; // 0x41d JumpB
	var_35_bool = 1; // 0x41e MovB
	
Label_1055:
	if(var_35_bool == 0) goto Label_1074; // 0x41f JumpB
	GetScene(var_25_object); // 0x420 Func
	GetPosition(var_27_cvector); // 0x422 Func
	GetEyesHeight(var_28_float); // 0x424 Func
	var_40_float = GetByIndex(var_27_cvector, 1); // 0x426 PushE
	var_41_int = 2; // 0x427 PushI
	var_42_float = var_28_float / var_41_int; // 0x428 Div
	var_40_float = var_40_float + var_42_float; // 0x429 Add2
	SetByIndex(var_27_cvector, 1) = var_40_float; // 0x42a PopE
	var_43_string = "scripted"; // 0x42b PushS
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0x42c PushVec
	var_45_string = "blood.xml"; // 0x42d PushS
	AddActorByType(var_26_object, var_43_string, var_25_object, var_27_cvector, var_44_cvector, var_45_string); // 0x42e Func
	var_26_object = 0; // 0x430 SetNull
	var_25_object = 0; // 0x431 SetNull
	
Label_1074:
	var_46_bool = var_12_object == 0; // 0x432 NullEq
	if(var_46_bool == 0) goto Label_1077; // 0x433 JumpB
	return 20; // 0x434 Return
	
Label_1077:
	GetSecondaryAnimationType(var_29_int); // 0x435 Func
	var_47_int = 0; // 0x437 PushI
	var_48_bool = var_29_int < var_47_int; // 0x438 LT
	if(var_48_bool == 0) goto Label_1083; // 0x439 JumpB
	return 20; // 0x43a Return
	
Label_1083:
	GetPosition(var_30_cvector); // 0x43b ObjFunc
	GetPosition(var_31_cvector); // 0x43d Func
	GetDirection(var_32_cvector); // 0x43f Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x441 Sub2
	var_49_float = GetByIndex(var_33_cvector, 0); // 0x442 PushE
	var_50_float = GetByIndex(var_32_cvector, 0); // 0x443 PushE
	var_51_float = var_49_float * var_50_float; // 0x444 Mult
	var_52_float = GetByIndex(var_33_cvector, 2); // 0x445 PushE
	var_53_float = GetByIndex(var_32_cvector, 2); // 0x446 PushE
	var_54_float = var_52_float * var_53_float; // 0x447 Mult
	var_55_int = var_51_float + var_54_float; // 0x448 Add
	var_56_int = 0; // 0x449 PushI
	var_57_bool = var_55_int >= var_56_int; // 0x44a GE
	if(var_57_bool == 0) goto Label_1102; // 0x44b JumpB
	var_34_string = "fhit"; // 0x44c MovS
	goto Label_1103; // 0x44d Jump
	
Label_1103:
	var_58_string = "hit_react"; // 0x44f PushS
	var_59_string = "1"; // 0x450 PushS
	var_60_int = var_34_string + var_59_string; // 0x451 Add
	var_61_string = "2"; // 0x452 PushS
	var_62_int = var_34_string + var_61_string; // 0x453 Add
	var_63_int = -10; // 0x454 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x455 Func
	return 20; // 0x457 Return
	
Label_1102:
	var_34_string = "bhit"; // 0x44e MovS
}


func_535(var_0_bool)
{
	var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); // 0x217 PushV
	Face(var_0_bool); // 0x218 Func
	var_221_string = "all"; // 0x21a PushS
	var_222_string = "bjump"; // 0x21b PushS
	PlayAnimation(var_221_string, var_222_string); // 0x21c Func
	GetPFPosition(var_219_cvector); // 0x21e TObjFunc
	GetPFPosition(var_220_cvector); // 0x220 Func
	WaitForAnimEnd(); // 0x222 Func
	StopAsync(); // 0x224 Func
	var_223_cvector = CVector(0.0, 0.0, 0.0); // 0x226 PushVec
	SetSpeed(var_223_cvector); // 0x227 Func
	return 4; // 0x229 Return
}


func_38()
{
	
Label_38:
	Hold(); // 0x26 Func
	goto Label_38; // 0x28 Jump
}


func_42(var_0_bool, var_371_string)
{
	var_372_bool = 0; var_373_bool = 0; // 0x2a PushV
	var_374_string = "cleanup"; // 0x2b PushS
	var_375_bool = var_371_string == var_374_string; // 0x2c Eq
	if(var_375_bool == 0) goto Label_65; // 0x2d JumpB
	var_0_bool = 1; // 0x2e TMovB
	IsLoaded(var_373_bool); // 0x2f Func
	var_376_bool = 0; // 0x31 PushV
	var_376_bool = 0; // 0x32 MovB
	var_377_bool = var_373_bool == 0; // 0x33 Not
	if(var_377_bool == 0) goto Label_58; // 0x34 JumpB
	var_378_bool = 0; // 0x35 PushV
	func_86(var_378_bool); // 0x36 Call
	if(var_378_bool == 0) goto Label_58; // 0x38 JumpB
	var_376_bool = 1; // 0x39 MovB
	
Label_58:
	if(var_376_bool == 0) goto Label_64; // 0x3a JumpB
	var_379_object = Obj(); // 0x3b PushV
	func_1123(var_379_object); // 0x3c Call
	RemoveActor(var_379_object); // 0x3e Func
	
Label_64:
	goto Label_69; // 0x40 Jump
	
Label_69:
	return 2; // 0x45 Return
	
Label_65:
	var_382_string = "restore"; // 0x41 PushS
	var_383_bool = var_371_string == var_382_string; // 0x42 Eq
	if(var_383_bool == 0) goto Label_69; // 0x43 JumpB
	var_0_bool = 0; // 0x44 TMovB
}


func_554(var_0_bool, var_178_bool)
{
	var_179_bool = 0; var_180_bool = 0; // 0x22a PushV
	var_181_string = "IsAttacking"; // 0x22b PushS
	var_182_int = 1; // 0x22c PushI
	var_183_bool = IsFuncExist(var_0_bool, var_181_string, var_182_int); // 0x22d FuncExist
	if(var_183_bool == 0) goto Label_563; // 0x22e JumpB
	IsAttacking(var_180_bool); // 0x22f TObjFunc
	var_178_bool = var_180_bool; // 0x231 Mov
	return 2; // 0x232 Return
	
Label_563:
	var_178_bool = 0; // 0x233 MovB
	return 2; // 0x234 Return
}


func_565(var_2_object, var_4_int)
{
	var_240_float = 0; var_241_int = 0; var_242_float = 0; var_243_int = 0; // 0x235 PushV
	var_244_bool = var_2_object == 0; // 0x236 Not
	if(var_244_bool == 0) goto Label_569; // 0x237 JumpB
	return 4; // 0x238 Return
	
Label_569:
	var_245_int = var_4_int; // 0x239 PushT
	if(var_245_int == 0) goto Label_577; // 0x23a JumpB
	var_246_int = -1; // 0x23b PushI
	var_4_int = var_4_int + var_246_int; // 0x23c Add2
	var_247_int = 0; // 0x23d PushI
	var_248_bool = var_4_int > var_247_int; // 0x23e GT
	if(var_248_bool == 0) goto Label_577; // 0x23f JumpB
	return 4; // 0x240 Return
	
Label_577:
	rand(var_242_float); // 0x241 Func
	var_249_float = 0; // 0x243 PushV
	func_603(var_249_float); // 0x244 Call
	var_250_bool = var_242_float < var_249_float; // 0x246 LT
	if(var_250_bool == 0) goto Label_596; // 0x247 JumpB
	irand(var_243_int, var_242_float); // 0x248 Func
	var_251_int = 1; // 0x24a PushI
	var_243_int = var_243_int + var_251_int; // 0x24b Add2
	var_252_string = "attack"; // 0x24c PushS
	var_253_int = var_252_string + var_243_int; // 0x24d Add
	Speak(var_253_int); // 0x24e Func
	var_254_int = 0; // 0x250 PushV
	func_601(var_254_int); // 0x251 Call
	var_4_int = var_254_int; // 0x252 TMov
	
Label_596:
	return 4; // 0x254 Return
}


func_438(var_344_bool, var_345_float)
{
	var_346_float = 0; var_347_bool = 0; var_348_float = 0; var_349_bool = 0; // 0x1b6 PushV
	rand(var_348_float); // 0x1b7 Func
	var_350_bool = var_348_float < var_345_float; // 0x1b9 LT
	if(var_350_bool == 0) goto Label_458; // 0x1ba JumpB
	
Label_443:
	IsAnimationPlaying(var_349_bool); // 0x1bb Func
	var_351_bool = var_349_bool == 0; // 0x1bd Not
	if(var_351_bool == 0) goto Label_448; // 0x1be JumpB
	goto Label_457; // 0x1bf Jump
	
Label_457:
	goto Label_460; // 0x1c9 Jump
	
Label_460:
	var_344_bool = 0; // 0x1cc MovB
	return 4; // 0x1cd Return
	
Label_448:
	var_352_bool = 0; // 0x1c0 PushV
	func_502(var_349_bool, var_352_bool); // 0x1c1 Call
	if(var_352_bool == 0) goto Label_454; // 0x1c3 JumpB
	var_344_bool = 1; // 0x1c4 MovB
	return 4; // 0x1c5 Return
	
Label_454:
	sync(); // 0x1c6 Func
	goto Label_443; // 0x1c8 Jump
	
Label_458:
	WaitForAnimEnd(); // 0x1ca Func
}


func_319(var_0_bool, var_258_float, var_259_int)
{
	var_260_object = Obj(); var_261_float = 0; var_262_float = 0; var_263_object = Obj(); var_264_float = 0; var_265_float = 0; // 0x13f PushV
	var_266_float = 0.9; // 0x140 PushF
	var_267_float = var_258_float * var_266_float; // 0x141 Mult
	GetVictim(var_267_float, var_263_object); // 0x142 Func
	ReportAttack(var_0_bool); // 0x144 Func
	var_268_bool = var_263_object == var_0_bool; // 0x146 Eq
	if(var_268_bool == 0) goto Label_356; // 0x147 JumpB
	var_269_float = 0; var_270_object = Obj(); var_271_int = 0; // 0x148 PushV
	var_270_object = var_263_object; // 0x149 Mov
	var_271_int = var_259_int; // 0x14a Mov
	func_100(var_271_int); // 0x14b Call
	var_264_float = var_269_float; // 0x14c Mov
	var_272_float = 0; var_273_object = Obj(); var_274_float = 0; var_275_int = 0; // 0x14e PushV
	var_273_object = var_263_object; // 0x14f Mov
	var_274_float = var_264_float; // 0x150 Mov
	var_276_int = 0; var_277_object = Obj(); var_278_int = 0; // 0x151 PushV
	var_277_object = var_263_object; // 0x152 Mov
	var_278_int = var_259_int; // 0x153 Mov
	func_103(var_278_int); // 0x154 Call
	var_275_int = var_276_int; // 0x155 Mov
	func_916(var_272_float, var_273_object, var_274_float, var_275_int); // 0x157 Call
	var_265_float = var_272_float; // 0x158 Mov
	var_325_int = 0; // 0x15a PushV
	func_597(var_325_int); // 0x15b Call
	ReportHit(var_0_bool, var_325_int, var_265_float, var_264_float); // 0x15d Func
	var_326_object = Obj(); var_327_float = 0; // 0x15f PushV
	var_326_object = var_263_object; // 0x160 Mov
	var_327_float = var_265_float; // 0x161 Mov
	func_599(); // 0x162 Call
	
Label_356:
	return 6; // 0x164 Return
}


func_462(var_0_bool, var_186_bool, var_187_float)
{
	var_188_bool = 0; var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_float = 0; var_193_bool = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0; // 0x1ce PushV
	
Label_463:
	IsAnimationPlaying(var_193_bool); // 0x1cf Func
	var_198_bool = var_193_bool == 0; // 0x1d1 Not
	if(var_198_bool == 0) goto Label_468; // 0x1d2 JumpB
	goto Label_500; // 0x1d3 Jump
	
Label_500:
	var_186_bool = 0; // 0x1f4 MovB
	return 10; // 0x1f5 Return
	
Label_468:
	var_199_bool = 0; // 0x1d4 PushV
	func_502(var_197_float, var_199_bool); // 0x1d5 Call
	if(var_199_bool == 0) goto Label_474; // 0x1d7 JumpB
	var_186_bool = 1; // 0x1d8 MovB
	return 10; // 0x1d9 Return
	
Label_474:
	var_224_bool = 0; var_225_object = Obj(); // 0x1da PushV
	var_225_object = var_0_bool; // 0x1db MovT
	func_1021(var_224_bool, var_225_object); // 0x1dc Call
	var_226_bool = var_224_bool == 0; // 0x1de Not
	if(var_226_bool == 0) goto Label_482; // 0x1df JumpB
	var_186_bool = 0; // 0x1e0 MovB
	return 10; // 0x1e1 Return
	
Label_482:
	GetPFPosition(var_194_cvector); // 0x1e2 TObjFunc
	GetPFPosition(var_195_cvector); // 0x1e4 Func
	var_196_cvector = var_194_cvector - var_195_cvector; // 0x1e6 Sub2
	var_197_float = var_196_cvector | var_196_cvector; // 0x1e7 Or2
	var_227_float = var_187_float * var_187_float; // 0x1e8 Mult
	var_228_bool = var_197_float < var_227_float; // 0x1e9 LT
	if(var_228_bool == 0) goto Label_497; // 0x1ea JumpB
	var_229_bool = 0; var_230_float = 0; // 0x1eb PushV
	var_230_float = var_187_float; // 0x1ec Mov
	func_358(var_197_float, var_229_bool, var_230_float); // 0x1ed Call
	var_186_bool = 1; // 0x1ef MovB
	return 10; // 0x1f0 Return
	
Label_497:
	sync(); // 0x1f1 Func
	goto Label_463; // 0x1f3 Jump
}


func_980(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x3d4 PushV
	IsDead(var_31_bool); // 0x3d5 ObjFunc
	var_28_bool = var_31_bool; // 0x3d7 Mov
	return 2; // 0x3d8 Return
}


func_597(var_325_int)
{
	var_325_int = 0; // 0x255 MovI
	return 0; // 0x256 Return
}


func_86(var_10_bool)
{
	var_10_bool = 1; // 0x56 MovB
	return 0; // 0x57 Return
}


func_599()
{
	return 0; // 0x258 Return
}


func_1112()
{
	var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); // 0x458 PushV
	GetPosition(var_168_cvector); // 0x459 ObjFunc
	GetPosition(var_169_cvector); // 0x45b Func
	var_170_cvector = var_168_cvector - var_169_cvector; // 0x45d Sub2
	var_171_float = GetByIndex(var_170_cvector, 0); // 0x45e PushE
	var_172_float = GetByIndex(var_170_cvector, 2); // 0x45f PushE
	RotateAsync(var_171_float, var_172_float); // 0x460 Func
	return 6; // 0x462 Return
}


func_88()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x58 PushV
	var_18_string = "player"; // 0x59 PushS
	FindActor(var_17_object, var_18_string); // 0x5a Func
	var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; // 0x5c PushV
	var_19_object = var_17_object; // 0x5d Mov
	var_20_bool = 1; // 0x5e MovB
	var_21_float = 180.0; // 0x5f MovF
	func_114(var_12_int, var_13_int, var_14_bool, var_15_int, var_16_object, var_17_object, var_19_object, var_20_bool, var_21_float); // 0x60 Call
	return 2; // 0x62 Return
}


func_601(var_254_int)
{
	var_254_int = 1; // 0x259 MovI
	return 0; // 0x25a Return
}


func_603(var_249_float)
{
	var_249_float = 0.5; // 0x25b MovF
	return 0; // 0x25c Return
}


func_985(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3d9 PushV
	var_23_bool = var_18_object == 0; // 0x3da NullEq
	if(var_23_bool == 0) goto Label_990; // 0x3db JumpB
	var_17_bool = 0; // 0x3dc MovB
	return 4; // 0x3dd Return
	
Label_990:
	var_24_bool = 0; // 0x3de PushV
	var_24_bool = 0; // 0x3df MovB
	var_25_string = "IsDead"; // 0x3e0 PushS
	var_26_int = 1; // 0x3e1 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x3e2 FuncExist
	if(var_27_bool == 0) goto Label_1002; // 0x3e3 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x3e4 PushV
	var_29_object = var_18_object; // 0x3e5 Mov
	func_980(var_29_object); // 0x3e6 Call
	if(var_28_bool == 0) goto Label_1002; // 0x3e8 JumpB
	var_24_bool = 1; // 0x3e9 MovB
	
Label_1002:
	if(var_24_bool == 0) goto Label_1005; // 0x3ea JumpB
	var_17_bool = 0; // 0x3eb MovB
	return 4; // 0x3ec Return
	
Label_1005:
	GetScene(var_21_object); // 0x3ed Func
	var_32_bool = var_21_object == 0; // 0x3ef NullEq
	if(var_32_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_17_bool = 0; // 0x3f1 MovB
	return 4; // 0x3f2 Return
	
Label_1011:
	GetScene(var_22_object); // 0x3f3 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x3f5 Neq
	if(var_33_bool == 0) goto Label_1017; // 0x3f6 JumpB
	var_17_bool = 0; // 0x3f7 MovB
	return 4; // 0x3f8 Return
	
Label_1017:
	var_17_bool = 1; // 0x3f9 MovB
	return 4; // 0x3fa Return
}


func_737(var_0_bool)
{
	var_0_bool = 1; // 0x2e1 TMovB
	var_9_int = 0; // 0x2e2 PushI
	KillTimer(var_9_int); // 0x2e3 Func
	Stop(); // 0x2e5 Func
	return 0; // 0x2e7 Return
}


func_1123(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x463 PushV
	self(var_10_object); // 0x464 Func
	var_8_object = var_10_object; // 0x466 Mov
	return 2; // 0x467 Return
}


func_100(var_269_float)
{
	var_269_float = 0.1; // 0x65 MovF
	return 0; // 0x66 Return
}


func_613(var_0_bool, var_1_string, var_102_bool, var_103_object, var_104_float, var_105_float, var_106_bool, var_107_bool)
{
	var_110_bool = 0; var_111_bool = 0; var_112_object = Obj(); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_object = Obj(); var_118_bool = 0; var_119_bool = 0; var_120_object = Obj(); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_float = 0; var_125_object = Obj(); // 0x265 PushV
	var_0_bool = 0; // 0x266 TMovB
	var_1_string = var_103_object; // 0x267 TMov
	var_119_bool = var_107_bool; // 0x268 Mov
	
Label_617:
	var_126_bool = 0; var_127_object = Obj(); // 0x269 PushV
	var_127_object = var_103_object; // 0x26a Mov
	func_753(var_126_bool, var_127_object); // 0x26b Call
	var_130_bool = var_126_bool == 0; // 0x26d Not
	if(var_130_bool == 0) goto Label_625; // 0x26e JumpB
	var_102_bool = 0; // 0x26f MovB
	return 16; // 0x270 Return
	
Label_625:
	GetPosition(var_121_cvector); // 0x271 ObjFunc
	GetPosition(var_122_cvector); // 0x273 Func
	var_123_cvector = var_121_cvector - var_122_cvector; // 0x275 Sub2
	var_124_float = var_123_cvector | var_123_cvector; // 0x276 Or2
	var_131_bool = 0; // 0x277 PushV
	var_131_bool = 0; // 0x278 MovB
	var_132_int = 0; // 0x279 PushI
	var_133_bool = var_105_float > var_132_int; // 0x27a GT
	if(var_133_bool == 0) goto Label_640; // 0x27b JumpB
	var_134_float = var_105_float * var_105_float; // 0x27c Mult
	var_135_bool = var_124_float > var_134_float; // 0x27d GT
	if(var_135_bool == 0) goto Label_640; // 0x27e JumpB
	var_131_bool = 1; // 0x27f MovB
	
Label_640:
	if(var_131_bool == 0) goto Label_645; // 0x280 JumpB
	Stop(); // 0x281 Func
	var_102_bool = 0; // 0x283 MovB
	return 16; // 0x284 Return
	
Label_645:
	var_136_float = var_104_float * var_104_float; // 0x285 Mult
	var_137_bool = var_124_float > var_136_float; // 0x286 GT
	if(var_137_bool == 0) goto Label_707; // 0x287 JumpB
	GetPFPosition(var_121_cvector); // 0x288 ObjFunc
	FindPathTo(var_125_object, var_121_cvector); // 0x28a Func
	var_138_bool = var_125_object != 0; // 0x28c NullNeq
	if(var_138_bool == 0) goto Label_656; // 0x28d JumpB
	var_120_object = var_125_object; // 0x28e Mov
	var_125_object = 0; // 0x28f SetNull
	
Label_656:
	var_139_bool = var_120_object != 0; // 0x290 NullNeq
	if(var_139_bool == 0) goto Label_689; // 0x291 JumpB
	var_140_bool = var_119_bool; // 0x292 Push
	if(var_140_bool == 0) goto Label_666; // 0x293 JumpB
	var_119_bool = 0; // 0x294 MovB
	RotatePath(var_120_object, var_118_bool); // 0x295 Func
	var_141_bool = var_118_bool == 0; // 0x297 Not
	if(var_141_bool == 0) goto Label_666; // 0x298 JumpB
	goto Label_713; // 0x299 Jump
	
Label_713:
	var_102_bool = !var_0_bool; // 0x2c9 Not2
	return 16; // 0x2ca Return
	
Label_666:
	var_142_int = 0; // 0x29a PushI
	var_143_float = 0.3; // 0x29b PushF
	SetTimer(var_142_int, var_143_float); // 0x29c Func
	var_144_string = ""; // 0x29e PushV
	func_760(var_144_string); // 0x29f Call
	var_145_string = ""; // 0x2a1 PushV
	func_762(var_145_string); // 0x2a2 Call
	FollowPath(var_120_object, var_106_bool, var_118_bool, var_144_string, var_145_string); // 0x2a4 Func
	var_146_bool = var_118_bool == 0; // 0x2a6 Not
	if(var_146_bool == 0) goto Label_687; // 0x2a7 JumpB
	var_147_bool = var_0_bool; // 0x2a8 PushT
	if(var_147_bool == 0) goto Label_685; // 0x2a9 JumpB
	var_120_object = 0; // 0x2aa SetNull
	goto Label_713; // 0x2ab Jump
	
Label_685:
	goto Label_712; // 0x2ad Jump
	
Label_712:
	goto Label_617; // 0x2c8 Jump
	
Label_687:
	var_120_object = 0; // 0x2af SetNull
	goto Label_705; // 0x2b0 Jump
	
Label_705:
	var_125_object = 0; // 0x2c1 SetNull
	goto Label_711; // 0x2c2 Jump
	
Label_711:
	var_120_object = 0; // 0x2c7 SetNull
	
Label_689:
	var_148_int = 0; // 0x2b1 PushI
	KillTimer(var_148_int); // 0x2b2 Func
	var_149_float = 0.5; // 0x2b4 PushF
	Sleep(var_149_float, var_118_bool); // 0x2b5 Func
	var_150_bool = var_118_bool == 0; // 0x2b7 Not
	if(var_150_bool == 0) goto Label_701; // 0x2b8 JumpB
	var_151_bool = var_0_bool; // 0x2b9 PushT
	if(var_151_bool == 0) goto Label_701; // 0x2ba JumpB
	var_120_object = 0; // 0x2bb SetNull
	goto Label_713; // 0x2bc Jump
	
Label_701:
	var_152_int = 0; // 0x2bd PushI
	var_153_float = 0.3; // 0x2be PushF
	SetTimer(var_152_int, var_153_float); // 0x2bf Func
	
Label_707:
	var_154_int = 0; // 0x2c3 PushI
	KillTimer(var_154_int); // 0x2c4 Func
	goto Label_713; // 0x2c6 Jump
}


func_358(var_0_bool, var_229_bool, var_230_float)
{
	var_231_int = 0; var_232_bool = 0; var_233_int = 0; var_234_bool = 0; // 0x166 PushV
	irand(var_233_int, var_234_bool); // 0x167 Func
	var_235_int = 1; // 0x169 PushI
	var_233_int = var_233_int + var_235_int; // 0x16a Add2
	Face(var_0_bool); // 0x16b Func
	var_236_bool = 1; // 0x16d PushB
	SetAttackState(var_236_bool); // 0x16e Func
	var_237_string = "all"; // 0x170 PushS
	var_238_string = "attack_begin"; // 0x171 PushS
	var_239_int = var_238_string + var_233_int; // 0x172 Add
	PlayAnimation(var_237_string, var_239_int); // 0x173 Func
	WaitForAnimEnd(); // 0x175 Func
	func_565(var_233_int, var_234_bool); // 0x178 Call
	var_255_bool = 0; var_256_object = Obj(); // 0x17a PushV
	var_256_object = var_0_bool; // 0x17b MovT
	func_1021(var_255_bool, var_256_object); // 0x17c Call
	var_257_bool = var_255_bool == 0; // 0x17e Not
	if(var_257_bool == 0) goto Label_388; // 0x17f JumpB
	StopAsync(); // 0x180 Func
	var_229_bool = 0; // 0x182 MovB
	return 4; // 0x183 Return
	
Label_388:
	var_258_float = 0; var_259_int = 0; // 0x184 PushV
	var_258_float = var_230_float; // 0x185 Mov
	var_259_int = var_233_int; // 0x186 Mov
	func_319(var_234_bool, var_258_float, var_259_int); // 0x187 Call
	var_328_string = "all"; // 0x189 PushS
	var_329_string = "attack_middle"; // 0x18a PushS
	var_330_int = var_329_string + var_233_int; // 0x18b Add
	HasAnimation(var_234_bool, var_328_string, var_330_int); // 0x18c Func
	var_331_bool = var_234_bool; // 0x18e Push
	if(var_331_bool == 0) goto Label_422; // 0x18f JumpB
	var_332_string = "all"; // 0x190 PushS
	var_333_string = "attack_middle"; // 0x191 PushS
	var_334_int = var_333_string + var_233_int; // 0x192 Add
	PlayAnimation(var_332_string, var_334_int); // 0x193 Func
	WaitForAnimEnd(); // 0x195 Func
	var_335_bool = 0; var_336_object = Obj(); // 0x197 PushV
	var_336_object = var_0_bool; // 0x198 MovT
	func_1021(var_335_bool, var_336_object); // 0x199 Call
	var_337_bool = var_335_bool == 0; // 0x19b Not
	if(var_337_bool == 0) goto Label_417; // 0x19c JumpB
	StopAsync(); // 0x19d Func
	var_229_bool = 0; // 0x19f MovB
	return 4; // 0x1a0 Return
	
Label_417:
	var_338_float = 0; var_339_int = 0; // 0x1a1 PushV
	var_338_float = var_230_float; // 0x1a2 Mov
	var_339_int = var_233_int; // 0x1a3 Mov
	func_319(var_234_bool, var_338_float, var_339_int); // 0x1a4 Call
	
Label_422:
	var_340_bool = 0; // 0x1a6 PushB
	SetAttackState(var_340_bool); // 0x1a7 Func
	var_341_string = "all"; // 0x1a9 PushS
	var_342_string = "attack_end"; // 0x1aa PushS
	var_343_int = var_342_string + var_233_int; // 0x1ab Add
	PlayAnimation(var_341_string, var_343_int); // 0x1ac Func
	var_344_bool = 0; var_345_float = 0; // 0x1ae PushV
	var_345_float = 0.75; // 0x1af MovF
	func_438(var_344_bool, var_345_float); // 0x1b0 Call
	StopAsync(); // 0x1b2 Func
	var_229_bool = 1; // 0x1b4 MovB
	return 4; // 0x1b5 Return
}


func_103(var_276_int)
{
	var_276_int = 1; // 0x68 MovI
	return 0; // 0x69 Return
}


func_868(var_39_string)
{
	RemoveRTEnvelope(); // 0x365 Func
	SetDeathState(); // 0x367 Func
	Stop(); // 0x369 Func
	StopAsync(); // 0x36b Func
	StopSecondaryAnimation(); // 0x36d Func
	var_40_string = "all"; // 0x36f PushS
	PlayAnimation(var_40_string, var_39_string); // 0x370 Func
	WaitForAnimEnd(); // 0x372 Func
	var_41_string = "all"; // 0x374 PushS
	LockAnimationEnd(var_41_string, var_39_string); // 0x375 Func
	RemoveEnvelope(); // 0x377 Func
	return 0; // 0x379 Return
}


func_1129(var_308_float, var_309_float, var_310_float)
{
	var_313_bool = var_309_float < var_310_float; // 0x46a LT
	if(var_313_bool == 0) goto Label_1134; // 0x46b JumpB
	var_308_float = var_309_float; // 0x46c Mov
	goto Label_1135; // 0x46d Jump
	
Label_1135:
	return 0; // 0x46f Return
	
Label_1134:
	var_308_float = var_310_float; // 0x46e Mov
}


func_1136(var_318_float, var_319_float, var_320_float, var_321_float)
{
	var_322_bool = var_319_float < var_320_float; // 0x471 LT
	if(var_322_bool == 0) goto Label_1141; // 0x472 JumpB
	var_318_float = var_320_float; // 0x473 Mov
	return 0; // 0x474 Return
	
Label_1141:
	var_323_bool = var_319_float > var_321_float; // 0x475 GT
	if(var_323_bool == 0) goto Label_1145; // 0x476 JumpB
	var_318_float = var_321_float; // 0x477 Mov
	return 0; // 0x478 Return
	
Label_1145:
	var_318_float = var_319_float; // 0x479 Mov
	return 0; // 0x47a Return
}


func_753(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x2f2 PushV
	var_14_object = var_12_object; // 0x2f3 Mov
	func_1021(var_13_bool, var_14_object); // 0x2f4 Call
	var_11_bool = var_13_bool; // 0x2f5 Mov
	return 0; // 0x2f7 Return
}


func_114(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_19_object, var_20_bool, var_21_float, var_108_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_float = 0; var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_float = 0; // 0x72 PushV
	var_1_string = 0; // 0x73 TMovI
	
Label_116:
	var_42_string = "all"; // 0x74 PushS
	var_43_string = "attack_begin"; // 0x75 PushS
	var_44_int = 1; // 0x76 PushI
	var_45_int = var_1_string + var_44_int; // 0x77 Add
	var_46_int = var_43_string + var_45_int; // 0x78 Add
	HasAnimation(var_32_bool, var_42_string, var_46_int); // 0x79 Func
	var_47_bool = var_32_bool == 0; // 0x7b Not
	if(var_47_bool == 0) goto Label_126; // 0x7c JumpB
	goto Label_129; // 0x7d Jump
	
Label_129:
	var_2_object = 0; // 0x81 TMovI
	
Label_130:
	var_48_string = "attack"; // 0x82 PushS
	var_49_int = 1; // 0x83 PushI
	var_50_int = var_2_object + var_49_int; // 0x84 Add
	var_51_int = var_48_string + var_50_int; // 0x85 Add
	IsExisting3DSound(var_33_bool, var_51_int); // 0x86 Func
	var_52_bool = var_33_bool == 0; // 0x88 Not
	if(var_52_bool == 0) goto Label_139; // 0x89 JumpB
	goto Label_142; // 0x8a Jump
	
Label_142:
	var_4_int = 0; // 0x8e TMovI
	var_53_string = "@GetAttackDistance"; // 0x8f PushS
	var_54_int = 1; // 0x90 PushI
	var_55_bool = IsFuncExist(var_19_object, var_53_string, var_54_int); // 0x91 FuncExist
	if(var_55_bool == 0) goto Label_152; // 0x92 JumpB
	GetAttackDistance(var_34_float); // 0x93 ObjFunc
	var_56_int = 50; // 0x95 PushI
	var_34_float = var_34_float + var_56_int; // 0x96 Add2
	goto Label_153; // 0x97 Jump
	
Label_153:
	var_57_int = 150; // 0x99 PushI
	var_58_bool = var_34_float >= var_57_int; // 0x9a GE
	if(var_58_bool == 0) goto Label_157; // 0x9b JumpB
	var_34_float = 150; // 0x9c MovI
	
Label_157:
	var_3_int = 0; // 0x9d TMovB
	var_0_bool = var_19_object; // 0x9e TMov
	IsPlayerActor(var_0_bool, var_37_bool); // 0x9f Func
	var_59_bool = var_20_bool; // 0xa1 Push
	if(var_59_bool == 0) goto Label_165; // 0xa2 JumpB
	var_38_bool = 0; // 0xa3 MovB
	goto Label_166; // 0xa4 Jump
	
Label_166:
	var_60_bool = 0; // 0xa6 PushV
	var_60_bool = 0; // 0xa7 MovB
	var_61_bool = 0; var_62_object = Obj(); // 0xa8 PushV
	var_62_object = var_0_bool; // 0xa9 MovT
	func_1021(var_61_bool, var_62_object); // 0xaa Call
	if(var_61_bool == 0) goto Label_176; // 0xac JumpB
	var_95_bool = var_3_int == 0; // 0xad Not
	if(var_95_bool == 0) goto Label_176; // 0xae JumpB
	var_60_bool = 1; // 0xaf MovB
	
Label_176:
	if(var_60_bool == 0) goto Label_302; // 0xb0 JumpB
	GetPFPosition(var_35_cvector); // 0xb1 TObjFunc
	GetPFPosition(var_36_cvector); // 0xb3 Func
	var_39_cvector = var_35_cvector - var_36_cvector; // 0xb5 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xb6 Or2
	var_96_float = 400.0; // 0xb7 PushF
	var_97_int = var_96_float + var_34_float; // 0xb8 Add
	var_98_float = 400.0; // 0xb9 PushF
	var_99_int = var_98_float + var_34_float; // 0xba Add
	var_100_float = var_97_int * var_99_int; // 0xbb Mult
	var_101_bool = var_40_float >= var_100_float; // 0xbc GE
	if(var_101_bool == 0) goto Label_205; // 0xbd JumpB
	var_102_bool = 0; var_103_object = Obj(); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0; // 0xbe PushV
	var_103_object = var_0_bool; // 0xbf MovT
	var_104_float = var_34_float; // 0xc0 Mov
	var_105_float = 3000.0; // 0xc1 MovF
	var_106_bool = 1; // 0xc2 MovB
	var_107_bool = 0; // 0xc3 MovB
	TaskCall(2); // 0xc4 TaskCall
	func_613(var_108_bool, var_109_object, var_102_bool, var_103_object, var_104_float, var_105_float, var_106_bool, var_107_bool); // 0xc5 Call
	TaskReturn(); // 0xc6 TaskReturn
	var_155_bool = var_108_bool == 0; // 0xc8 Not
	if(var_155_bool == 0) goto Label_203; // 0xc9 JumpB
	goto Label_302; // 0xca Jump
	
Label_302:
	WaitForAnimEnd(); // 0x12e Func
	var_156_int = var_3_int; // 0x130 PushT
	if(var_156_int == 0) goto Label_307; // 0x131 JumpB
	return 20; // 0x132 Return
	
Label_307:
	var_157_string = "all"; // 0x133 PushS
	var_158_string = "attack_off"; // 0x134 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x135 Func
	WaitForAnimEnd(); // 0x137 Func
	var_159_bool = var_37_bool; // 0x139 Push
	if(var_159_bool == 0) goto Label_318; // 0x13a JumpB
	var_160_float = 2.0; // 0x13b PushF
	Sleep(var_160_float); // 0x13c Func
	
Label_318:
	return 20; // 0x13e Return
	
Label_203:
	var_38_bool = 0; // 0xcb MovB
	goto Label_301; // 0xcc Jump
	
Label_301:
	goto Label_166; // 0x12d Jump
	
Label_205:
	var_161_float = var_21_float * var_21_float; // 0xcd Mult
	var_162_bool = var_40_float >= var_161_float; // 0xce GE
	if(var_162_bool == 0) goto Label_293; // 0xcf JumpB
	var_163_bool = var_38_bool == 0; // 0xd0 Not
	if(var_163_bool == 0) goto Label_223; // 0xd1 JumpB
	var_164_object = Obj(); // 0xd2 PushV
	var_164_object = var_0_bool; // 0xd3 MovT
	func_1112(); // 0xd4 Call
	var_173_string = "all"; // 0xd6 PushS
	var_174_string = "attack_on"; // 0xd7 PushS
	PlayAnimation(var_173_string, var_174_string); // 0xd8 Func
	WaitForAnimEnd(); // 0xda Func
	StopAsync(); // 0xdc Func
	var_38_bool = 1; // 0xde MovB
	
Label_223:
	rand(var_41_float); // 0xdf Func
	var_175_bool = 0; // 0xe1 PushV
	var_175_bool = 1; // 0xe2 MovB
	var_176_float = 0.6; // 0xe3 PushF
	var_177_bool = var_41_float < var_176_float; // 0xe4 LT
	if(var_177_bool == 0) goto Label_235; // 0xe5 JumpB
	var_178_bool = 0; // 0xe6 PushV
	func_554(var_175_bool, var_178_bool); // 0xe7 Call
	if(var_178_bool == 0) goto Label_235; // 0xe9 JumpB
	var_175_bool = 0; // 0xea MovB
	
Label_235:
	if(var_175_bool == 0) goto Label_249; // 0xeb JumpB
	Face(var_0_bool); // 0xec Func
	var_184_string = "all"; // 0xee PushS
	var_185_string = "attack_stay"; // 0xef PushS
	PlayAnimation(var_184_string, var_185_string); // 0xf0 Func
	var_186_bool = 0; var_187_float = 0; // 0xf2 PushV
	var_187_float = var_21_float; // 0xf3 Mov
	func_462(var_41_float, var_186_bool, var_187_float); // 0xf4 Call
	StopAsync(); // 0xf6 Func
	goto Label_292; // 0xf8 Jump
	
Label_292:
	goto Label_301; // 0x124 Jump
	
Label_249:
	Face(var_0_bool); // 0xf9 Func
	var_353_string = "all"; // 0xfb PushS
	var_354_string = "fjump"; // 0xfc PushS
	PlayAnimation(var_353_string, var_354_string); // 0xfd Func
	WaitForAnimEnd(); // 0xff Func
	var_355_cvector = CVector(0.0, 0.0, 0.0); // 0x101 PushVec
	SetSpeed(var_355_cvector); // 0x102 Func
	Stop(); // 0x104 Func
	StopAsync(); // 0x106 Func
	var_356_bool = 0; // 0x108 PushV
	func_554(var_41_float, var_356_bool); // 0x109 Call
	var_357_bool = var_356_bool == 0; // 0x10b Not
	if(var_357_bool == 0) goto Label_292; // 0x10c JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x10d PushV
	var_359_object = var_0_bool; // 0x10e MovT
	func_1021(var_358_bool, var_359_object); // 0x10f Call
	var_360_bool = var_358_bool == 0; // 0x111 Not
	if(var_360_bool == 0) goto Label_276; // 0x112 JumpB
	goto Label_302; // 0x113 Jump
	
Label_276:
	GetPFPosition(var_35_cvector); // 0x114 TObjFunc
	GetPFPosition(var_36_cvector); // 0x116 Func
	var_39_cvector = var_35_cvector - var_36_cvector; // 0x118 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0x119 Or2
	var_361_float = var_21_float * var_21_float; // 0x11a Mult
	var_362_bool = var_40_float < var_361_float; // 0x11b LT
	if(var_362_bool == 0) goto Label_292; // 0x11c JumpB
	var_363_bool = 0; var_364_float = 0; // 0x11d PushV
	var_364_float = var_21_float; // 0x11e Mov
	func_358(var_41_float, var_363_bool, var_364_float); // 0x11f Call
	var_365_bool = var_363_bool == 0; // 0x121 Not
	if(var_365_bool == 0) goto Label_292; // 0x122 JumpB
	goto Label_302; // 0x123 Jump
	
Label_293:
	var_366_bool = 0; var_367_float = 0; // 0x125 PushV
	var_367_float = var_21_float; // 0x126 Mov
	func_358(var_41_float, var_366_bool, var_367_float); // 0x127 Call
	var_368_bool = var_366_bool == 0; // 0x129 Not
	if(var_368_bool == 0) goto Label_300; // 0x12a JumpB
	goto Label_302; // 0x12b Jump
	
Label_300:
	var_38_bool = 1; // 0x12c MovB
	
Label_165:
	var_38_bool = 1; // 0xa5 MovB
	
Label_152:
	var_34_float = var_21_float; // 0x98 Mov
	
Label_139:
	var_369_int = 1; // 0x8b PushI
	var_2_object = var_2_object + var_369_int; // 0x8c Add2
	goto Label_130; // 0x8d Jump
	
Label_126:
	var_370_int = 1; // 0x7e PushI
	var_1_string = var_1_string + var_370_int; // 0x7f Add2
	goto Label_116; // 0x80 Jump
}


func_502(var_0_bool, var_199_bool)
{
	var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_float = 0; var_209_float = 0; // 0x1f6 PushV
	var_210_bool = 0; var_211_object = Obj(); // 0x1f7 PushV
	var_211_object = var_0_bool; // 0x1f8 MovT
	func_1021(var_210_bool, var_211_object); // 0x1f9 Call
	var_212_bool = var_210_bool == 0; // 0x1fb Not
	if(var_212_bool == 0) goto Label_511; // 0x1fc JumpB
	var_199_bool = 0; // 0x1fd MovB
	return 10; // 0x1fe Return
	
Label_511:
	var_213_bool = 0; // 0x1ff PushV
	func_554(var_209_float, var_213_bool); // 0x200 Call
	if(var_213_bool == 0) goto Label_533; // 0x202 JumpB
	GetPFPosition(var_205_cvector); // 0x203 TObjFunc
	GetPFPosition(var_206_cvector); // 0x205 Func
	var_207_cvector = var_205_cvector - var_206_cvector; // 0x207 Sub2
	var_208_float = var_207_cvector | var_207_cvector; // 0x208 Or2
	GetAttackDistance(var_209_float); // 0x209 TObjFunc
	var_214_int = 50; // 0x20b PushI
	var_209_float = var_209_float + var_214_int; // 0x20c Add2
	var_215_float = var_209_float * var_209_float; // 0x20d Mult
	var_216_bool = var_208_float <= var_215_float; // 0x20e LE
	if(var_216_bool == 0) goto Label_533; // 0x20f JumpB
	func_535(var_209_float); // 0x211 Call
	var_199_bool = 1; // 0x213 MovB
	return 10; // 0x214 Return
	
Label_533:
	var_199_bool = 0; // 0x215 MovB
	return 10; // 0x216 Return
}


func_760(var_144_string)
{
	var_144_string = "walk"; // 0x2f8 MovS
	return 0; // 0x2f9 Return
}


func_762(var_145_string)
{
	var_145_string = "run"; // 0x2fa MovS
	return 0; // 0x2fb Return
}


func_1147(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x47b PushV
	FindActor(var_14_object, var_11_string); // 0x47c Func
	var_15_bool = var_14_object == 0; // 0x47e NullEq
	if(var_15_bool == 0) goto Label_1154; // 0x47f JumpB
	var_10_bool = 0; // 0x480 MovB
	return 2; // 0x481 Return
	
Label_1154:
	Trigger(var_14_object, var_12_string); // 0x482 Func
	var_10_bool = 1; // 0x484 MovB
	return 2; // 0x485 Return
}


func_1021(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x3fd PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x3fe PushV
	var_18_object = var_14_object; // 0x3ff Mov
	func_985(var_17_bool, var_18_object); // 0x400 Call
	var_34_bool = var_17_bool == 0; // 0x402 Not
	if(var_34_bool == 0) goto Label_1030; // 0x403 JumpB
	var_13_bool = 0; // 0x404 MovB
	return 2; // 0x405 Return
	
Label_1030:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x406 PushV
	var_36_object = var_14_object; // 0x407 Mov
	var_37_string = "noaccess"; // 0x408 MovS
	func_904(var_35_bool, var_36_object, var_37_string); // 0x409 Call
	var_44_bool = var_35_bool == 0; // 0x40b Not
	if(var_44_bool == 0) goto Label_1039; // 0x40c JumpB
	var_13_bool = 1; // 0x40d MovB
	return 2; // 0x40e Return
	
Label_1039:
	var_45_string = "noaccess"; // 0x40f PushS
	GetProperty(var_45_string, var_16_int); // 0x410 ObjFunc
	var_46_int = 0; // 0x412 PushI
	var_13_bool = var_16_int == var_46_int; // 0x413 Eq2
	return 2; // 0x414 Return
}


