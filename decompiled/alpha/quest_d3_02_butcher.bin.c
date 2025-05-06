task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x7 PushV
	IsPlayerActor(var_8_object, var_10_bool); // 0x8 Func
	var_11_bool = var_10_bool; // 0xa Push
	if(var_11_bool == 0) goto Label_17; // 0xb JumpB
	TaskCall(1); // 0xd TaskCall
	func_86(); // 0xe Call
	TaskReturn(); // 0xf TaskReturn
	
Label_17:
	return 2; // 0x11 Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_string = "trigger"; // 0x13 PushS
	var_10_bool = var_8_object == var_9_string; // 0x14 Eq
	if(var_10_bool == 0) goto Label_31; // 0x15 JumpB
	var_11_string = "growl"; // 0x16 PushS
	PlayGlobalSound(var_11_string); // 0x17 Func
	TaskCall(1); // 0x1a TaskCall
	func_86(); // 0x1b Call
	TaskReturn(); // 0x1c TaskReturn
	goto Label_35; // 0x1e Jump
	
Label_35:
	return 0; // 0x23 Return
	
Label_31:
	var_372_string = ""; // 0x1f PushV
	var_372_string = var_8_object; // 0x20 Mov
	func_40(var_8_object, var_372_string); // 0x21 Call
}


task_0_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_bool = 0; // 0x44 PushV
	var_8_bool = 0; // 0x45 MovB
	var_9_bool = var_0_bool; // 0x46 PushT
	if(var_9_bool == 0) goto Label_77; // 0x47 JumpB
	var_10_bool = 0; // 0x48 PushV
	func_84(var_10_bool); // 0x49 Call
	if(var_10_bool == 0) goto Label_77; // 0x4b JumpB
	var_8_bool = 1; // 0x4c MovB
	
Label_77:
	if(var_8_bool == 0) goto Label_83; // 0x4d JumpB
	var_11_object = Obj(); // 0x4e PushV
	func_1113(var_11_object); // 0x4f Call
	RemoveActor(var_11_object); // 0x51 Func
	
Label_83:
	return 0; // 0x53 Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj(); // 0x68 PushV
	func_1113(var_8_object); // 0x69 Call
	RemoveActor(var_8_object); // 0x6b Func
	Hold(); // 0x6d Func
	return 0; // 0x6f Return
}


task_2_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj(); // 0x25b PushV
	func_1113(var_8_object); // 0x25c Call
	RemoveActor(var_8_object); // 0x25e Func
	Hold(); // 0x260 Func
	return 0; // 0x262 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0; // 0x2ca PushI
	var_10_bool = var_8_int != var_9_int; // 0x2cb Neq
	if(var_10_bool == 0) goto Label_718; // 0x2cc JumpB
	return 0; // 0x2cd Return
	
Label_718:
	var_11_bool = 0; var_12_object = Obj(); // 0x2ce PushV
	var_12_object = var_1_object; // 0x2cf MovT
	func_751(var_11_bool, var_12_object); // 0x2d0 Call
	var_47_bool = var_11_bool == 0; // 0x2d2 Not
	if(var_47_bool == 0) goto Label_725; // 0x2d3 JumpB
	var_0_bool = 1; // 0x2d4 TMovB
	
Label_725:
	var_48_int = 0; // 0x2d5 PushI
	KillTimer(var_48_int); // 0x2d6 Func
	Stop(); // 0x2d8 Func
	return 0; // 0x2da Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object); // 0x2dc Func
	return 0; // 0x2de Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	func_735(var_8_object); // 0x2e8 Call
	var_10_object = Obj(); // 0x2ea PushV
	var_10_object = var_8_object; // 0x2eb Mov
	func_1183(); // 0x2ec Call
	return 0; // 0x2ee Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x371 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	return 0; // 0x373 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	return 0; // 0x375 Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x48b PushV
	var_12_object = var_8_object; // 0x48c Mov
	var_13_int = var_9_int; // 0x48d Mov
	var_14_float = var_10_float; // 0x48e Mov
	func_1035(var_13_int, var_14_float); // 0x48f Call
	return 0; // 0x491 Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x492 PushV
	var_12_string = "health"; // 0x493 PushS
	var_13_bool = var_9_string == var_12_string; // 0x494 Eq
	if(var_13_bool == 0) goto Label_1182; // 0x495 JumpB
	var_14_string = "health"; // 0x496 PushS
	GetProperty(var_14_string, var_11_float); // 0x497 Func
	var_15_int = 0; // 0x499 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x49a LE
	if(var_16_bool == 0) goto Label_1182; // 0x49b JumpB
	SignalDeath(var_8_object); // 0x49c Func
	
Label_1182:
	return 2; // 0x49e Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj(); // 0x4a0 PushV
	var_9_object = var_8_object; // 0x4a1 Mov
	func_1149(var_9_object); // 0x4a2 Call
	return 0; // 0x4a4 Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_bool = 1; // 0x0 PushB
	SensePlayerOnly(var_8_bool); // 0x1 Func
	func_36(); // 0x4 Call
	return 0; // 0x6 Return
}


func_771(var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; var_25_bool = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); // 0x303 PushV
	var_38_bool = var_17_object == 0; // 0x304 NullEq
	if(var_38_bool == 0) goto Label_779; // 0x305 JumpB
	var_39_string = ""; // 0x306 PushV
	var_39_string = "fdie"; // 0x307 MovS
	func_858(var_39_string); // 0x308 Call
	goto Label_857; // 0x30a Jump
	
Label_857:
	return 20; // 0x359 Return
	
Label_779:
	GetPosition(var_28_cvector); // 0x30b ObjFunc
	GetPosition(var_29_cvector); // 0x30d Func
	GetDirection(var_30_cvector); // 0x30f Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x311 Sub2
	var_42_float = GetByIndex(var_31_cvector, 0); // 0x312 PushE
	var_43_float = GetByIndex(var_30_cvector, 0); // 0x313 PushE
	var_44_float = var_42_float * var_43_float; // 0x314 Mult
	var_45_float = GetByIndex(var_31_cvector, 2); // 0x315 PushE
	var_46_float = GetByIndex(var_30_cvector, 2); // 0x316 PushE
	var_47_float = var_45_float * var_46_float; // 0x317 Mult
	var_48_int = var_44_float + var_47_float; // 0x318 Add
	var_49_int = 0; // 0x319 PushI
	var_50_bool = var_48_int >= var_49_int; // 0x31a GE
	if(var_50_bool == 0) goto Label_798; // 0x31b JumpB
	var_32_string = "fdie"; // 0x31c MovS
	goto Label_799; // 0x31d Jump
	
Label_799:
	RemoveRTEnvelope(); // 0x31f Func
	SetDeathState(); // 0x321 Func
	Stop(); // 0x323 Func
	StopAsync(); // 0x325 Func
	var_33_object = var_17_object; // 0x327 Mov
	var_51_string = "GetScriptProperty"; // 0x328 PushS
	var_52_int = 2; // 0x329 PushI
	var_53_bool = IsFuncExist(var_17_object, var_51_string, var_52_int); // 0x32a FuncExist
	if(var_53_bool == 0) goto Label_823; // 0x32b JumpB
	var_54_string = "Owner"; // 0x32c PushS
	HasScriptProperty(var_34_bool, var_54_string); // 0x32d ObjFunc
	var_55_bool = var_34_bool; // 0x32f Push
	if(var_55_bool == 0) goto Label_823; // 0x330 JumpB
	var_56_string = "Owner"; // 0x331 PushS
	GetScriptProperty(var_33_object, var_56_string); // 0x332 ObjFunc
	var_57_bool = var_33_object == 0; // 0x334 NullEq
	if(var_57_bool == 0) goto Label_823; // 0x335 JumpB
	var_33_object = var_17_object; // 0x336 Mov
	
Label_823:
	var_58_string = "@GetEyesHeight"; // 0x337 PushS
	var_59_int = 1; // 0x338 PushI
	var_60_bool = IsFuncExist(var_33_object, var_58_string, var_59_int); // 0x339 FuncExist
	if(var_60_bool == 0) goto Label_838; // 0x33a JumpB
	GetEyesHeight(var_36_float); // 0x33b ObjFunc
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x33d MovV
	var_61_float = GetByIndex(var_37_cvector, 1); // 0x33e PushE
	var_61_float = var_36_float; // 0x33f Mov
	SetByIndex(var_37_cvector, 1) = var_61_float; // 0x340 PopE
	var_62_string = "head"; // 0x341 PushS
	LookAsync(var_17_object, var_62_string, var_37_cvector); // 0x342 Func
	var_35_bool = 1; // 0x344 MovB
	goto Label_839; // 0x345 Jump
	
Label_839:
	var_63_string = "all"; // 0x347 PushS
	PlayAnimation(var_63_string, var_32_string); // 0x348 Func
	WaitForAnimEnd(); // 0x34a Func
	var_64_bool = var_35_bool; // 0x34c Push
	if(var_64_bool == 0) goto Label_851; // 0x34d JumpB
	StopAsync(); // 0x34e Func
	var_65_string = "head"; // 0x350 PushS
	UnlookAsync(var_65_string); // 0x351 Func
	
Label_851:
	var_66_string = "all"; // 0x353 PushS
	LockAnimationEnd(var_66_string, var_32_string); // 0x354 Func
	RemoveEnvelope(); // 0x356 Func
	var_33_object = 0; // 0x358 SetNull
	
Label_838:
	var_35_bool = 0; // 0x346 MovB
	
Label_798:
	var_32_string = "bdie"; // 0x31e MovS
}


func_906(var_273_float, var_274_object, var_275_float, var_276_int)
{
	var_280_int = 0; var_281_string = ""; var_282_int = 0; var_283_float = 0; var_284_float = 0; var_285_float = 0; var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0; // 0x38a PushV
	var_292_bool = 0; var_293_object = Obj(); var_294_string = ""; // 0x38b PushV
	var_293_object = var_274_object; // 0x38c Mov
	var_294_string = "health"; // 0x38d MovS
	func_894(var_292_bool, var_293_object, var_294_string); // 0x38e Call
	var_295_bool = var_292_bool == 0; // 0x390 Not
	if(var_295_bool == 0) goto Label_916; // 0x391 JumpB
	var_273_float = 0.0; // 0x392 MovF
	return 12; // 0x393 Return
	
Label_916:
	var_296_bool = 0; var_297_object = Obj(); var_298_string = ""; // 0x394 PushV
	var_297_object = var_274_object; // 0x395 Mov
	var_298_string = "armor"; // 0x396 MovS
	func_894(var_296_bool, var_297_object, var_298_string); // 0x397 Call
	var_299_bool = var_296_bool == 0; // 0x399 Not
	if(var_299_bool == 0) goto Label_925; // 0x39a JumpB
	var_286_int = 0; // 0x39b MovI
	goto Label_928; // 0x39c Jump
	
Label_928:
	var_300_string = "armor_"; // 0x3a0 PushS
	var_301_string = ""; var_302_int = 0; // 0x3a1 PushV
	var_302_int = var_276_int; // 0x3a2 Mov
	func_886(var_301_string, var_302_int); // 0x3a3 Call
	var_287_string = var_300_string + var_301_string; // 0x3a5 Add2
	var_305_bool = 0; var_306_object = Obj(); var_307_string = ""; // 0x3a6 PushV
	var_306_object = var_274_object; // 0x3a7 Mov
	var_307_string = var_287_string; // 0x3a8 Mov
	func_894(var_305_bool, var_306_object, var_307_string); // 0x3a9 Call
	var_308_bool = var_305_bool == 0; // 0x3ab Not
	if(var_308_bool == 0) goto Label_943; // 0x3ac JumpB
	var_288_int = 0; // 0x3ad MovI
	goto Label_945; // 0x3ae Jump
	
Label_945:
	var_309_float = 0; var_310_float = 0; var_311_float = 0; // 0x3b1 PushV
	var_312_int = var_286_int + var_288_int; // 0x3b2 Add
	var_313_float = 100.0; // 0x3b3 PushF
	var_310_float = var_312_int / var_312_int; // 0x3b4 Div2
	var_311_float = 1; // 0x3b5 MovI
	func_1119(var_309_float, var_310_float, var_311_float); // 0x3b6 Call
	var_289_float = var_309_float; // 0x3b7 Mov
	var_315_string = "health"; // 0x3b9 PushS
	GetProperty(var_315_string, var_290_float); // 0x3ba ObjFunc
	var_316_int = 1; // 0x3bc PushI
	var_317_int = var_316_int - var_289_float; // 0x3bd Sub
	var_291_float = var_275_float * var_317_int; // 0x3be Mult2
	var_318_string = "health"; // 0x3bf PushS
	var_319_float = 0; var_320_float = 0; var_321_float = 0; var_322_float = 0; // 0x3c0 PushV
	var_320_float = var_290_float - var_291_float; // 0x3c1 Sub2
	var_321_float = 0; // 0x3c2 MovI
	var_322_float = 1; // 0x3c3 MovI
	func_1126(var_319_float, var_320_float, var_321_float, var_322_float); // 0x3c4 Call
	SetProperty(var_318_string, var_319_float); // 0x3c6 ObjFunc
	var_273_float = var_291_float; // 0x3c8 Mov
	return 12; // 0x3c9 Return
	
Label_943:
	GetProperty(var_287_string, var_288_int); // 0x3af ObjFunc
	
Label_925:
	var_325_string = "armor"; // 0x39d PushS
	GetProperty(var_325_string, var_286_int); // 0x39e ObjFunc
}


func_1035(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; // 0x40b PushV
	var_35_bool = 0; // 0x40c PushV
	var_35_bool = 0; // 0x40d MovB
	var_36_int = 4; // 0x40e PushI
	var_37_bool = var_13_int != var_36_int; // 0x40f Neq
	if(var_37_bool == 0) goto Label_1045; // 0x410 JumpB
	var_38_int = 5; // 0x411 PushI
	var_39_bool = var_13_int != var_38_int; // 0x412 Neq
	if(var_39_bool == 0) goto Label_1045; // 0x413 JumpB
	var_35_bool = 1; // 0x414 MovB
	
Label_1045:
	if(var_35_bool == 0) goto Label_1064; // 0x415 JumpB
	GetScene(var_25_object); // 0x416 Func
	GetPosition(var_27_cvector); // 0x418 Func
	GetEyesHeight(var_28_float); // 0x41a Func
	var_40_float = GetByIndex(var_27_cvector, 1); // 0x41c PushE
	var_41_int = 2; // 0x41d PushI
	var_42_float = var_28_float / var_41_int; // 0x41e Div
	var_40_float = var_40_float + var_42_float; // 0x41f Add2
	SetByIndex(var_27_cvector, 1) = var_40_float; // 0x420 PopE
	var_43_string = "scripted"; // 0x421 PushS
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0x422 PushVec
	var_45_string = "blood.xml"; // 0x423 PushS
	AddActorByType(var_26_object, var_43_string, var_25_object, var_27_cvector, var_44_cvector, var_45_string); // 0x424 Func
	var_26_object = 0; // 0x426 SetNull
	var_25_object = 0; // 0x427 SetNull
	
Label_1064:
	var_46_bool = var_12_object == 0; // 0x428 NullEq
	if(var_46_bool == 0) goto Label_1067; // 0x429 JumpB
	return 20; // 0x42a Return
	
Label_1067:
	GetSecondaryAnimationType(var_29_int); // 0x42b Func
	var_47_int = 0; // 0x42d PushI
	var_48_bool = var_29_int < var_47_int; // 0x42e LT
	if(var_48_bool == 0) goto Label_1073; // 0x42f JumpB
	return 20; // 0x430 Return
	
Label_1073:
	GetPosition(var_30_cvector); // 0x431 ObjFunc
	GetPosition(var_31_cvector); // 0x433 Func
	GetDirection(var_32_cvector); // 0x435 Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x437 Sub2
	var_49_float = GetByIndex(var_33_cvector, 0); // 0x438 PushE
	var_50_float = GetByIndex(var_32_cvector, 0); // 0x439 PushE
	var_51_float = var_49_float * var_50_float; // 0x43a Mult
	var_52_float = GetByIndex(var_33_cvector, 2); // 0x43b PushE
	var_53_float = GetByIndex(var_32_cvector, 2); // 0x43c PushE
	var_54_float = var_52_float * var_53_float; // 0x43d Mult
	var_55_int = var_51_float + var_54_float; // 0x43e Add
	var_56_int = 0; // 0x43f PushI
	var_57_bool = var_55_int >= var_56_int; // 0x440 GE
	if(var_57_bool == 0) goto Label_1092; // 0x441 JumpB
	var_34_string = "fhit"; // 0x442 MovS
	goto Label_1093; // 0x443 Jump
	
Label_1093:
	var_58_string = "hit_react"; // 0x445 PushS
	var_59_string = "1"; // 0x446 PushS
	var_60_int = var_34_string + var_59_string; // 0x447 Add
	var_61_string = "2"; // 0x448 PushS
	var_62_int = var_34_string + var_61_string; // 0x449 Add
	var_63_int = -10; // 0x44a PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x44b Func
	return 20; // 0x44d Return
	
Label_1092:
	var_34_string = "bhit"; // 0x444 MovS
}


func_533(var_0_bool)
{
	var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); // 0x215 PushV
	Face(var_0_bool); // 0x216 Func
	var_222_string = "all"; // 0x218 PushS
	var_223_string = "bjump"; // 0x219 PushS
	PlayAnimation(var_222_string, var_223_string); // 0x21a Func
	GetPFPosition(var_220_cvector); // 0x21c TObjFunc
	GetPFPosition(var_221_cvector); // 0x21e Func
	WaitForAnimEnd(); // 0x220 Func
	StopAsync(); // 0x222 Func
	var_224_cvector = CVector(0.0, 0.0, 0.0); // 0x224 PushVec
	SetSpeed(var_224_cvector); // 0x225 Func
	return 4; // 0x227 Return
}


func_36()
{
	
Label_36:
	Hold(); // 0x24 Func
	goto Label_36; // 0x26 Jump
}


func_40(var_0_bool, var_372_string)
{
	var_373_bool = 0; var_374_bool = 0; // 0x28 PushV
	var_375_string = "cleanup"; // 0x29 PushS
	var_376_bool = var_372_string == var_375_string; // 0x2a Eq
	if(var_376_bool == 0) goto Label_63; // 0x2b JumpB
	var_0_bool = 1; // 0x2c TMovB
	IsLoaded(var_374_bool); // 0x2d Func
	var_377_bool = 0; // 0x2f PushV
	var_377_bool = 0; // 0x30 MovB
	var_378_bool = var_374_bool == 0; // 0x31 Not
	if(var_378_bool == 0) goto Label_56; // 0x32 JumpB
	var_379_bool = 0; // 0x33 PushV
	func_84(var_379_bool); // 0x34 Call
	if(var_379_bool == 0) goto Label_56; // 0x36 JumpB
	var_377_bool = 1; // 0x37 MovB
	
Label_56:
	if(var_377_bool == 0) goto Label_62; // 0x38 JumpB
	var_380_object = Obj(); // 0x39 PushV
	func_1113(var_380_object); // 0x3a Call
	RemoveActor(var_380_object); // 0x3c Func
	
Label_62:
	goto Label_67; // 0x3e Jump
	
Label_67:
	return 2; // 0x43 Return
	
Label_63:
	var_383_string = "restore"; // 0x3f PushS
	var_384_bool = var_372_string == var_383_string; // 0x40 Eq
	if(var_384_bool == 0) goto Label_67; // 0x41 JumpB
	var_0_bool = 0; // 0x42 TMovB
}


func_552(var_0_bool, var_179_bool)
{
	var_180_bool = 0; var_181_bool = 0; // 0x228 PushV
	var_182_string = "IsAttacking"; // 0x229 PushS
	var_183_int = 1; // 0x22a PushI
	var_184_bool = IsFuncExist(var_0_bool, var_182_string, var_183_int); // 0x22b FuncExist
	if(var_184_bool == 0) goto Label_561; // 0x22c JumpB
	IsAttacking(var_181_bool); // 0x22d TObjFunc
	var_179_bool = var_181_bool; // 0x22f Mov
	return 2; // 0x230 Return
	
Label_561:
	var_179_bool = 0; // 0x231 MovB
	return 2; // 0x232 Return
}


func_563(var_2_object, var_4_int)
{
	var_241_float = 0; var_242_int = 0; var_243_float = 0; var_244_int = 0; // 0x233 PushV
	var_245_bool = var_2_object == 0; // 0x234 Not
	if(var_245_bool == 0) goto Label_567; // 0x235 JumpB
	return 4; // 0x236 Return
	
Label_567:
	var_246_int = var_4_int; // 0x237 PushT
	if(var_246_int == 0) goto Label_575; // 0x238 JumpB
	var_247_int = -1; // 0x239 PushI
	var_4_int = var_4_int + var_247_int; // 0x23a Add2
	var_248_int = 0; // 0x23b PushI
	var_249_bool = var_4_int > var_248_int; // 0x23c GT
	if(var_249_bool == 0) goto Label_575; // 0x23d JumpB
	return 4; // 0x23e Return
	
Label_575:
	rand(var_243_float); // 0x23f Func
	var_250_float = 0; // 0x241 PushV
	func_601(var_250_float); // 0x242 Call
	var_251_bool = var_243_float < var_250_float; // 0x244 LT
	if(var_251_bool == 0) goto Label_594; // 0x245 JumpB
	irand(var_244_int, var_243_float); // 0x246 Func
	var_252_int = 1; // 0x248 PushI
	var_244_int = var_244_int + var_252_int; // 0x249 Add2
	var_253_string = "attack"; // 0x24a PushS
	var_254_int = var_253_string + var_244_int; // 0x24b Add
	Speak(var_254_int); // 0x24c Func
	var_255_int = 0; // 0x24e PushV
	func_599(var_255_int); // 0x24f Call
	var_4_int = var_255_int; // 0x250 TMov
	
Label_594:
	return 4; // 0x252 Return
}


func_436(var_345_bool, var_346_float)
{
	var_347_float = 0; var_348_bool = 0; var_349_float = 0; var_350_bool = 0; // 0x1b4 PushV
	rand(var_349_float); // 0x1b5 Func
	var_351_bool = var_349_float < var_346_float; // 0x1b7 LT
	if(var_351_bool == 0) goto Label_456; // 0x1b8 JumpB
	
Label_441:
	IsAnimationPlaying(var_350_bool); // 0x1b9 Func
	var_352_bool = var_350_bool == 0; // 0x1bb Not
	if(var_352_bool == 0) goto Label_446; // 0x1bc JumpB
	goto Label_455; // 0x1bd Jump
	
Label_455:
	goto Label_458; // 0x1c7 Jump
	
Label_458:
	var_345_bool = 0; // 0x1ca MovB
	return 4; // 0x1cb Return
	
Label_446:
	var_353_bool = 0; // 0x1be PushV
	func_500(var_350_bool, var_353_bool); // 0x1bf Call
	if(var_353_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_345_bool = 1; // 0x1c2 MovB
	return 4; // 0x1c3 Return
	
Label_452:
	sync(); // 0x1c4 Func
	goto Label_441; // 0x1c6 Jump
	
Label_456:
	WaitForAnimEnd(); // 0x1c8 Func
}


func_317(var_0_bool, var_259_float, var_260_int)
{
	var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_object = Obj(); var_265_float = 0; var_266_float = 0; // 0x13d PushV
	var_267_float = 0.9; // 0x13e PushF
	var_268_float = var_259_float * var_267_float; // 0x13f Mult
	GetVictim(var_268_float, var_264_object); // 0x140 Func
	ReportAttack(var_0_bool); // 0x142 Func
	var_269_bool = var_264_object == var_0_bool; // 0x144 Eq
	if(var_269_bool == 0) goto Label_354; // 0x145 JumpB
	var_270_float = 0; var_271_object = Obj(); var_272_int = 0; // 0x146 PushV
	var_271_object = var_264_object; // 0x147 Mov
	var_272_int = var_260_int; // 0x148 Mov
	func_98(var_272_int); // 0x149 Call
	var_265_float = var_270_float; // 0x14a Mov
	var_273_float = 0; var_274_object = Obj(); var_275_float = 0; var_276_int = 0; // 0x14c PushV
	var_274_object = var_264_object; // 0x14d Mov
	var_275_float = var_265_float; // 0x14e Mov
	var_277_int = 0; var_278_object = Obj(); var_279_int = 0; // 0x14f PushV
	var_278_object = var_264_object; // 0x150 Mov
	var_279_int = var_260_int; // 0x151 Mov
	func_101(var_279_int); // 0x152 Call
	var_276_int = var_277_int; // 0x153 Mov
	func_906(var_273_float, var_274_object, var_275_float, var_276_int); // 0x155 Call
	var_266_float = var_273_float; // 0x156 Mov
	var_326_int = 0; // 0x158 PushV
	func_595(var_326_int); // 0x159 Call
	ReportHit(var_0_bool, var_326_int, var_266_float, var_265_float); // 0x15b Func
	var_327_object = Obj(); var_328_float = 0; // 0x15d PushV
	var_327_object = var_264_object; // 0x15e Mov
	var_328_float = var_266_float; // 0x15f Mov
	func_597(); // 0x160 Call
	
Label_354:
	return 6; // 0x162 Return
}


func_970(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x3ca PushV
	IsDead(var_31_bool); // 0x3cb ObjFunc
	var_28_bool = var_31_bool; // 0x3cd Mov
	return 2; // 0x3ce Return
}


func_460(var_0_bool, var_187_bool, var_188_float)
{
	var_189_bool = 0; var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_bool = 0; var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_float = 0; // 0x1cc PushV
	
Label_461:
	IsAnimationPlaying(var_194_bool); // 0x1cd Func
	var_199_bool = var_194_bool == 0; // 0x1cf Not
	if(var_199_bool == 0) goto Label_466; // 0x1d0 JumpB
	goto Label_498; // 0x1d1 Jump
	
Label_498:
	var_187_bool = 0; // 0x1f2 MovB
	return 10; // 0x1f3 Return
	
Label_466:
	var_200_bool = 0; // 0x1d2 PushV
	func_500(var_198_float, var_200_bool); // 0x1d3 Call
	if(var_200_bool == 0) goto Label_472; // 0x1d5 JumpB
	var_187_bool = 1; // 0x1d6 MovB
	return 10; // 0x1d7 Return
	
Label_472:
	var_225_bool = 0; var_226_object = Obj(); // 0x1d8 PushV
	var_226_object = var_0_bool; // 0x1d9 MovT
	func_1011(var_225_bool, var_226_object); // 0x1da Call
	var_227_bool = var_225_bool == 0; // 0x1dc Not
	if(var_227_bool == 0) goto Label_480; // 0x1dd JumpB
	var_187_bool = 0; // 0x1de MovB
	return 10; // 0x1df Return
	
Label_480:
	GetPFPosition(var_195_cvector); // 0x1e0 TObjFunc
	GetPFPosition(var_196_cvector); // 0x1e2 Func
	var_197_cvector = var_195_cvector - var_196_cvector; // 0x1e4 Sub2
	var_198_float = var_197_cvector | var_197_cvector; // 0x1e5 Or2
	var_228_float = var_188_float * var_188_float; // 0x1e6 Mult
	var_229_bool = var_198_float < var_228_float; // 0x1e7 LT
	if(var_229_bool == 0) goto Label_495; // 0x1e8 JumpB
	var_230_bool = 0; var_231_float = 0; // 0x1e9 PushV
	var_231_float = var_188_float; // 0x1ea Mov
	func_356(var_198_float, var_230_bool, var_231_float); // 0x1eb Call
	var_187_bool = 1; // 0x1ed MovB
	return 10; // 0x1ee Return
	
Label_495:
	sync(); // 0x1ef Func
	goto Label_461; // 0x1f1 Jump
}


func_1102()
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); // 0x44e PushV
	GetPosition(var_169_cvector); // 0x44f ObjFunc
	GetPosition(var_170_cvector); // 0x451 Func
	var_171_cvector = var_169_cvector - var_170_cvector; // 0x453 Sub2
	var_172_float = GetByIndex(var_171_cvector, 0); // 0x454 PushE
	var_173_float = GetByIndex(var_171_cvector, 2); // 0x455 PushE
	RotateAsync(var_172_float, var_173_float); // 0x456 Func
	return 6; // 0x458 Return
}


func_975(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3cf PushV
	var_23_bool = var_18_object == 0; // 0x3d0 NullEq
	if(var_23_bool == 0) goto Label_980; // 0x3d1 JumpB
	var_17_bool = 0; // 0x3d2 MovB
	return 4; // 0x3d3 Return
	
Label_980:
	var_24_bool = 0; // 0x3d4 PushV
	var_24_bool = 0; // 0x3d5 MovB
	var_25_string = "IsDead"; // 0x3d6 PushS
	var_26_int = 1; // 0x3d7 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x3d8 FuncExist
	if(var_27_bool == 0) goto Label_992; // 0x3d9 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x3da PushV
	var_29_object = var_18_object; // 0x3db Mov
	func_970(var_29_object); // 0x3dc Call
	if(var_28_bool == 0) goto Label_992; // 0x3de JumpB
	var_24_bool = 1; // 0x3df MovB
	
Label_992:
	if(var_24_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_17_bool = 0; // 0x3e1 MovB
	return 4; // 0x3e2 Return
	
Label_995:
	GetScene(var_21_object); // 0x3e3 Func
	var_32_bool = var_21_object == 0; // 0x3e5 NullEq
	if(var_32_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_17_bool = 0; // 0x3e7 MovB
	return 4; // 0x3e8 Return
	
Label_1001:
	GetScene(var_22_object); // 0x3e9 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x3eb Neq
	if(var_33_bool == 0) goto Label_1007; // 0x3ec JumpB
	var_17_bool = 0; // 0x3ed MovB
	return 4; // 0x3ee Return
	
Label_1007:
	var_17_bool = 1; // 0x3ef MovB
	return 4; // 0x3f0 Return
}


func_595(var_326_int)
{
	var_326_int = 0; // 0x253 MovI
	return 0; // 0x254 Return
}


func_84(var_10_bool)
{
	var_10_bool = 1; // 0x54 MovB
	return 0; // 0x55 Return
}


func_597()
{
	return 0; // 0x256 Return
}


func_86()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x56 PushV
	var_19_string = "player"; // 0x57 PushS
	FindActor(var_18_object, var_19_string); // 0x58 Func
	var_20_object = Obj(); var_21_bool = 0; var_22_float = 0; // 0x5a PushV
	var_20_object = var_18_object; // 0x5b Mov
	var_21_bool = 1; // 0x5c MovB
	var_22_float = 180.0; // 0x5d MovF
	func_112(var_13_int, var_14_int, var_15_bool, var_16_int, var_17_object, var_18_object, var_20_object, var_21_bool, var_22_float); // 0x5e Call
	return 2; // 0x60 Return
}


func_599(var_255_int)
{
	var_255_int = 1; // 0x257 MovI
	return 0; // 0x258 Return
}


func_1113(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x459 PushV
	self(var_10_object); // 0x45a Func
	var_8_object = var_10_object; // 0x45c Mov
	return 2; // 0x45d Return
}


func_601(var_250_float)
{
	var_250_float = 0.5; // 0x259 MovF
	return 0; // 0x25a Return
}


func_858(var_39_string)
{
	RemoveRTEnvelope(); // 0x35b Func
	SetDeathState(); // 0x35d Func
	Stop(); // 0x35f Func
	StopAsync(); // 0x361 Func
	StopSecondaryAnimation(); // 0x363 Func
	var_40_string = "all"; // 0x365 PushS
	PlayAnimation(var_40_string, var_39_string); // 0x366 Func
	WaitForAnimEnd(); // 0x368 Func
	var_41_string = "all"; // 0x36a PushS
	LockAnimationEnd(var_41_string, var_39_string); // 0x36b Func
	RemoveEnvelope(); // 0x36d Func
	return 0; // 0x36f Return
}


func_735(var_0_bool)
{
	var_0_bool = 1; // 0x2df TMovB
	var_9_int = 0; // 0x2e0 PushI
	KillTimer(var_9_int); // 0x2e1 Func
	Stop(); // 0x2e3 Func
	return 0; // 0x2e5 Return
}


func_1119(var_309_float, var_310_float, var_311_float)
{
	var_314_bool = var_310_float < var_311_float; // 0x460 LT
	if(var_314_bool == 0) goto Label_1124; // 0x461 JumpB
	var_309_float = var_310_float; // 0x462 Mov
	goto Label_1125; // 0x463 Jump
	
Label_1125:
	return 0; // 0x465 Return
	
Label_1124:
	var_309_float = var_311_float; // 0x464 Mov
}


func_98(var_270_float)
{
	var_270_float = 0.1; // 0x63 MovF
	return 0; // 0x64 Return
}


func_611(var_0_bool, var_1_string, var_103_bool, var_104_object, var_105_float, var_106_float, var_107_bool, var_108_bool)
{
	var_111_bool = 0; var_112_bool = 0; var_113_object = Obj(); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_object = Obj(); var_119_bool = 0; var_120_bool = 0; var_121_object = Obj(); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_float = 0; var_126_object = Obj(); // 0x263 PushV
	var_0_bool = 0; // 0x264 TMovB
	var_1_string = var_104_object; // 0x265 TMov
	var_120_bool = var_108_bool; // 0x266 Mov
	
Label_615:
	var_127_bool = 0; var_128_object = Obj(); // 0x267 PushV
	var_128_object = var_104_object; // 0x268 Mov
	func_751(var_127_bool, var_128_object); // 0x269 Call
	var_131_bool = var_127_bool == 0; // 0x26b Not
	if(var_131_bool == 0) goto Label_623; // 0x26c JumpB
	var_103_bool = 0; // 0x26d MovB
	return 16; // 0x26e Return
	
Label_623:
	GetPosition(var_122_cvector); // 0x26f ObjFunc
	GetPosition(var_123_cvector); // 0x271 Func
	var_124_cvector = var_122_cvector - var_123_cvector; // 0x273 Sub2
	var_125_float = var_124_cvector | var_124_cvector; // 0x274 Or2
	var_132_bool = 0; // 0x275 PushV
	var_132_bool = 0; // 0x276 MovB
	var_133_int = 0; // 0x277 PushI
	var_134_bool = var_106_float > var_133_int; // 0x278 GT
	if(var_134_bool == 0) goto Label_638; // 0x279 JumpB
	var_135_float = var_106_float * var_106_float; // 0x27a Mult
	var_136_bool = var_125_float > var_135_float; // 0x27b GT
	if(var_136_bool == 0) goto Label_638; // 0x27c JumpB
	var_132_bool = 1; // 0x27d MovB
	
Label_638:
	if(var_132_bool == 0) goto Label_643; // 0x27e JumpB
	Stop(); // 0x27f Func
	var_103_bool = 0; // 0x281 MovB
	return 16; // 0x282 Return
	
Label_643:
	var_137_float = var_105_float * var_105_float; // 0x283 Mult
	var_138_bool = var_125_float > var_137_float; // 0x284 GT
	if(var_138_bool == 0) goto Label_705; // 0x285 JumpB
	GetPFPosition(var_122_cvector); // 0x286 ObjFunc
	FindPathTo(var_126_object, var_122_cvector); // 0x288 Func
	var_139_bool = var_126_object != 0; // 0x28a NullNeq
	if(var_139_bool == 0) goto Label_654; // 0x28b JumpB
	var_121_object = var_126_object; // 0x28c Mov
	var_126_object = 0; // 0x28d SetNull
	
Label_654:
	var_140_bool = var_121_object != 0; // 0x28e NullNeq
	if(var_140_bool == 0) goto Label_687; // 0x28f JumpB
	var_141_bool = var_120_bool; // 0x290 Push
	if(var_141_bool == 0) goto Label_664; // 0x291 JumpB
	var_120_bool = 0; // 0x292 MovB
	RotatePath(var_121_object, var_119_bool); // 0x293 Func
	var_142_bool = var_119_bool == 0; // 0x295 Not
	if(var_142_bool == 0) goto Label_664; // 0x296 JumpB
	goto Label_711; // 0x297 Jump
	
Label_711:
	var_103_bool = !var_0_bool; // 0x2c7 Not2
	return 16; // 0x2c8 Return
	
Label_664:
	var_143_int = 0; // 0x298 PushI
	var_144_float = 0.3; // 0x299 PushF
	SetTimer(var_143_int, var_144_float); // 0x29a Func
	var_145_string = ""; // 0x29c PushV
	func_758(var_145_string); // 0x29d Call
	var_146_string = ""; // 0x29f PushV
	func_760(var_146_string); // 0x2a0 Call
	FollowPath(var_121_object, var_107_bool, var_119_bool, var_145_string, var_146_string); // 0x2a2 Func
	var_147_bool = var_119_bool == 0; // 0x2a4 Not
	if(var_147_bool == 0) goto Label_685; // 0x2a5 JumpB
	var_148_bool = var_0_bool; // 0x2a6 PushT
	if(var_148_bool == 0) goto Label_683; // 0x2a7 JumpB
	var_121_object = 0; // 0x2a8 SetNull
	goto Label_711; // 0x2a9 Jump
	
Label_683:
	goto Label_710; // 0x2ab Jump
	
Label_710:
	goto Label_615; // 0x2c6 Jump
	
Label_685:
	var_121_object = 0; // 0x2ad SetNull
	goto Label_703; // 0x2ae Jump
	
Label_703:
	var_126_object = 0; // 0x2bf SetNull
	goto Label_709; // 0x2c0 Jump
	
Label_709:
	var_121_object = 0; // 0x2c5 SetNull
	
Label_687:
	var_149_int = 0; // 0x2af PushI
	KillTimer(var_149_int); // 0x2b0 Func
	var_150_float = 0.5; // 0x2b2 PushF
	Sleep(var_150_float, var_119_bool); // 0x2b3 Func
	var_151_bool = var_119_bool == 0; // 0x2b5 Not
	if(var_151_bool == 0) goto Label_699; // 0x2b6 JumpB
	var_152_bool = var_0_bool; // 0x2b7 PushT
	if(var_152_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_121_object = 0; // 0x2b9 SetNull
	goto Label_711; // 0x2ba Jump
	
Label_699:
	var_153_int = 0; // 0x2bb PushI
	var_154_float = 0.3; // 0x2bc PushF
	SetTimer(var_153_int, var_154_float); // 0x2bd Func
	
Label_705:
	var_155_int = 0; // 0x2c1 PushI
	KillTimer(var_155_int); // 0x2c2 Func
	goto Label_711; // 0x2c4 Jump
}


func_356(var_0_bool, var_230_bool, var_231_float)
{
	var_232_int = 0; var_233_bool = 0; var_234_int = 0; var_235_bool = 0; // 0x164 PushV
	irand(var_234_int, var_235_bool); // 0x165 Func
	var_236_int = 1; // 0x167 PushI
	var_234_int = var_234_int + var_236_int; // 0x168 Add2
	Face(var_0_bool); // 0x169 Func
	var_237_bool = 1; // 0x16b PushB
	SetAttackState(var_237_bool); // 0x16c Func
	var_238_string = "all"; // 0x16e PushS
	var_239_string = "attack_begin"; // 0x16f PushS
	var_240_int = var_239_string + var_234_int; // 0x170 Add
	PlayAnimation(var_238_string, var_240_int); // 0x171 Func
	WaitForAnimEnd(); // 0x173 Func
	func_563(var_234_int, var_235_bool); // 0x176 Call
	var_256_bool = 0; var_257_object = Obj(); // 0x178 PushV
	var_257_object = var_0_bool; // 0x179 MovT
	func_1011(var_256_bool, var_257_object); // 0x17a Call
	var_258_bool = var_256_bool == 0; // 0x17c Not
	if(var_258_bool == 0) goto Label_386; // 0x17d JumpB
	StopAsync(); // 0x17e Func
	var_230_bool = 0; // 0x180 MovB
	return 4; // 0x181 Return
	
Label_386:
	var_259_float = 0; var_260_int = 0; // 0x182 PushV
	var_259_float = var_231_float; // 0x183 Mov
	var_260_int = var_234_int; // 0x184 Mov
	func_317(var_235_bool, var_259_float, var_260_int); // 0x185 Call
	var_329_string = "all"; // 0x187 PushS
	var_330_string = "attack_middle"; // 0x188 PushS
	var_331_int = var_330_string + var_234_int; // 0x189 Add
	HasAnimation(var_235_bool, var_329_string, var_331_int); // 0x18a Func
	var_332_bool = var_235_bool; // 0x18c Push
	if(var_332_bool == 0) goto Label_420; // 0x18d JumpB
	var_333_string = "all"; // 0x18e PushS
	var_334_string = "attack_middle"; // 0x18f PushS
	var_335_int = var_334_string + var_234_int; // 0x190 Add
	PlayAnimation(var_333_string, var_335_int); // 0x191 Func
	WaitForAnimEnd(); // 0x193 Func
	var_336_bool = 0; var_337_object = Obj(); // 0x195 PushV
	var_337_object = var_0_bool; // 0x196 MovT
	func_1011(var_336_bool, var_337_object); // 0x197 Call
	var_338_bool = var_336_bool == 0; // 0x199 Not
	if(var_338_bool == 0) goto Label_415; // 0x19a JumpB
	StopAsync(); // 0x19b Func
	var_230_bool = 0; // 0x19d MovB
	return 4; // 0x19e Return
	
Label_415:
	var_339_float = 0; var_340_int = 0; // 0x19f PushV
	var_339_float = var_231_float; // 0x1a0 Mov
	var_340_int = var_234_int; // 0x1a1 Mov
	func_317(var_235_bool, var_339_float, var_340_int); // 0x1a2 Call
	
Label_420:
	var_341_bool = 0; // 0x1a4 PushB
	SetAttackState(var_341_bool); // 0x1a5 Func
	var_342_string = "all"; // 0x1a7 PushS
	var_343_string = "attack_end"; // 0x1a8 PushS
	var_344_int = var_343_string + var_234_int; // 0x1a9 Add
	PlayAnimation(var_342_string, var_344_int); // 0x1aa Func
	var_345_bool = 0; var_346_float = 0; // 0x1ac PushV
	var_346_float = 0.75; // 0x1ad MovF
	func_436(var_345_bool, var_346_float); // 0x1ae Call
	StopAsync(); // 0x1b0 Func
	var_230_bool = 1; // 0x1b2 MovB
	return 4; // 0x1b3 Return
}


func_101(var_277_int)
{
	var_277_int = 0; // 0x66 MovI
	return 0; // 0x67 Return
}


func_1126(var_319_float, var_320_float, var_321_float, var_322_float)
{
	var_323_bool = var_320_float < var_321_float; // 0x467 LT
	if(var_323_bool == 0) goto Label_1131; // 0x468 JumpB
	var_319_float = var_321_float; // 0x469 Mov
	return 0; // 0x46a Return
	
Label_1131:
	var_324_bool = var_320_float > var_322_float; // 0x46b GT
	if(var_324_bool == 0) goto Label_1135; // 0x46c JumpB
	var_319_float = var_322_float; // 0x46d Mov
	return 0; // 0x46e Return
	
Label_1135:
	var_319_float = var_320_float; // 0x46f Mov
	return 0; // 0x470 Return
}


func_751(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x2f0 PushV
	var_14_object = var_12_object; // 0x2f1 Mov
	func_1011(var_13_bool, var_14_object); // 0x2f2 Call
	var_11_bool = var_13_bool; // 0x2f3 Mov
	return 0; // 0x2f5 Return
}


func_112(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_20_object, var_21_bool, var_22_float, var_109_bool)
{
	var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_float = 0; var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_float = 0; // 0x70 PushV
	var_1_string = 0; // 0x71 TMovI
	
Label_114:
	var_43_string = "all"; // 0x72 PushS
	var_44_string = "attack_begin"; // 0x73 PushS
	var_45_int = 1; // 0x74 PushI
	var_46_int = var_1_string + var_45_int; // 0x75 Add
	var_47_int = var_44_string + var_46_int; // 0x76 Add
	HasAnimation(var_33_bool, var_43_string, var_47_int); // 0x77 Func
	var_48_bool = var_33_bool == 0; // 0x79 Not
	if(var_48_bool == 0) goto Label_124; // 0x7a JumpB
	goto Label_127; // 0x7b Jump
	
Label_127:
	var_2_object = 0; // 0x7f TMovI
	
Label_128:
	var_49_string = "attack"; // 0x80 PushS
	var_50_int = 1; // 0x81 PushI
	var_51_int = var_2_object + var_50_int; // 0x82 Add
	var_52_int = var_49_string + var_51_int; // 0x83 Add
	IsExisting3DSound(var_34_bool, var_52_int); // 0x84 Func
	var_53_bool = var_34_bool == 0; // 0x86 Not
	if(var_53_bool == 0) goto Label_137; // 0x87 JumpB
	goto Label_140; // 0x88 Jump
	
Label_140:
	var_4_int = 0; // 0x8c TMovI
	var_54_string = "@GetAttackDistance"; // 0x8d PushS
	var_55_int = 1; // 0x8e PushI
	var_56_bool = IsFuncExist(var_20_object, var_54_string, var_55_int); // 0x8f FuncExist
	if(var_56_bool == 0) goto Label_150; // 0x90 JumpB
	GetAttackDistance(var_35_float); // 0x91 ObjFunc
	var_57_int = 50; // 0x93 PushI
	var_35_float = var_35_float + var_57_int; // 0x94 Add2
	goto Label_151; // 0x95 Jump
	
Label_151:
	var_58_int = 150; // 0x97 PushI
	var_59_bool = var_35_float >= var_58_int; // 0x98 GE
	if(var_59_bool == 0) goto Label_155; // 0x99 JumpB
	var_35_float = 150; // 0x9a MovI
	
Label_155:
	var_3_int = 0; // 0x9b TMovB
	var_0_bool = var_20_object; // 0x9c TMov
	IsPlayerActor(var_0_bool, var_38_bool); // 0x9d Func
	var_60_bool = var_21_bool; // 0x9f Push
	if(var_60_bool == 0) goto Label_163; // 0xa0 JumpB
	var_39_bool = 0; // 0xa1 MovB
	goto Label_164; // 0xa2 Jump
	
Label_164:
	var_61_bool = 0; // 0xa4 PushV
	var_61_bool = 0; // 0xa5 MovB
	var_62_bool = 0; var_63_object = Obj(); // 0xa6 PushV
	var_63_object = var_0_bool; // 0xa7 MovT
	func_1011(var_62_bool, var_63_object); // 0xa8 Call
	if(var_62_bool == 0) goto Label_174; // 0xaa JumpB
	var_96_bool = var_3_int == 0; // 0xab Not
	if(var_96_bool == 0) goto Label_174; // 0xac JumpB
	var_61_bool = 1; // 0xad MovB
	
Label_174:
	if(var_61_bool == 0) goto Label_300; // 0xae JumpB
	GetPFPosition(var_36_cvector); // 0xaf TObjFunc
	GetPFPosition(var_37_cvector); // 0xb1 Func
	var_40_cvector = var_36_cvector - var_37_cvector; // 0xb3 Sub2
	var_41_float = var_40_cvector | var_40_cvector; // 0xb4 Or2
	var_97_float = 400.0; // 0xb5 PushF
	var_98_int = var_97_float + var_35_float; // 0xb6 Add
	var_99_float = 400.0; // 0xb7 PushF
	var_100_int = var_99_float + var_35_float; // 0xb8 Add
	var_101_float = var_98_int * var_100_int; // 0xb9 Mult
	var_102_bool = var_41_float >= var_101_float; // 0xba GE
	if(var_102_bool == 0) goto Label_203; // 0xbb JumpB
	var_103_bool = 0; var_104_object = Obj(); var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_bool = 0; // 0xbc PushV
	var_104_object = var_0_bool; // 0xbd MovT
	var_105_float = var_35_float; // 0xbe Mov
	var_106_float = 3000.0; // 0xbf MovF
	var_107_bool = 1; // 0xc0 MovB
	var_108_bool = 0; // 0xc1 MovB
	TaskCall(2); // 0xc2 TaskCall
	func_611(var_109_bool, var_110_object, var_103_bool, var_104_object, var_105_float, var_106_float, var_107_bool, var_108_bool); // 0xc3 Call
	TaskReturn(); // 0xc4 TaskReturn
	var_156_bool = var_109_bool == 0; // 0xc6 Not
	if(var_156_bool == 0) goto Label_201; // 0xc7 JumpB
	goto Label_300; // 0xc8 Jump
	
Label_300:
	WaitForAnimEnd(); // 0x12c Func
	var_157_int = var_3_int; // 0x12e PushT
	if(var_157_int == 0) goto Label_305; // 0x12f JumpB
	return 20; // 0x130 Return
	
Label_305:
	var_158_string = "all"; // 0x131 PushS
	var_159_string = "attack_off"; // 0x132 PushS
	PlayAnimation(var_158_string, var_159_string); // 0x133 Func
	WaitForAnimEnd(); // 0x135 Func
	var_160_bool = var_38_bool; // 0x137 Push
	if(var_160_bool == 0) goto Label_316; // 0x138 JumpB
	var_161_float = 2.0; // 0x139 PushF
	Sleep(var_161_float); // 0x13a Func
	
Label_316:
	return 20; // 0x13c Return
	
Label_201:
	var_39_bool = 0; // 0xc9 MovB
	goto Label_299; // 0xca Jump
	
Label_299:
	goto Label_164; // 0x12b Jump
	
Label_203:
	var_162_float = var_22_float * var_22_float; // 0xcb Mult
	var_163_bool = var_41_float >= var_162_float; // 0xcc GE
	if(var_163_bool == 0) goto Label_291; // 0xcd JumpB
	var_164_bool = var_39_bool == 0; // 0xce Not
	if(var_164_bool == 0) goto Label_221; // 0xcf JumpB
	var_165_object = Obj(); // 0xd0 PushV
	var_165_object = var_0_bool; // 0xd1 MovT
	func_1102(); // 0xd2 Call
	var_174_string = "all"; // 0xd4 PushS
	var_175_string = "attack_on"; // 0xd5 PushS
	PlayAnimation(var_174_string, var_175_string); // 0xd6 Func
	WaitForAnimEnd(); // 0xd8 Func
	StopAsync(); // 0xda Func
	var_39_bool = 1; // 0xdc MovB
	
Label_221:
	rand(var_42_float); // 0xdd Func
	var_176_bool = 0; // 0xdf PushV
	var_176_bool = 1; // 0xe0 MovB
	var_177_float = 0.6; // 0xe1 PushF
	var_178_bool = var_42_float < var_177_float; // 0xe2 LT
	if(var_178_bool == 0) goto Label_233; // 0xe3 JumpB
	var_179_bool = 0; // 0xe4 PushV
	func_552(var_176_bool, var_179_bool); // 0xe5 Call
	if(var_179_bool == 0) goto Label_233; // 0xe7 JumpB
	var_176_bool = 0; // 0xe8 MovB
	
Label_233:
	if(var_176_bool == 0) goto Label_247; // 0xe9 JumpB
	Face(var_0_bool); // 0xea Func
	var_185_string = "all"; // 0xec PushS
	var_186_string = "attack_stay"; // 0xed PushS
	PlayAnimation(var_185_string, var_186_string); // 0xee Func
	var_187_bool = 0; var_188_float = 0; // 0xf0 PushV
	var_188_float = var_22_float; // 0xf1 Mov
	func_460(var_42_float, var_187_bool, var_188_float); // 0xf2 Call
	StopAsync(); // 0xf4 Func
	goto Label_290; // 0xf6 Jump
	
Label_290:
	goto Label_299; // 0x122 Jump
	
Label_247:
	Face(var_0_bool); // 0xf7 Func
	var_354_string = "all"; // 0xf9 PushS
	var_355_string = "fjump"; // 0xfa PushS
	PlayAnimation(var_354_string, var_355_string); // 0xfb Func
	WaitForAnimEnd(); // 0xfd Func
	var_356_cvector = CVector(0.0, 0.0, 0.0); // 0xff PushVec
	SetSpeed(var_356_cvector); // 0x100 Func
	Stop(); // 0x102 Func
	StopAsync(); // 0x104 Func
	var_357_bool = 0; // 0x106 PushV
	func_552(var_42_float, var_357_bool); // 0x107 Call
	var_358_bool = var_357_bool == 0; // 0x109 Not
	if(var_358_bool == 0) goto Label_290; // 0x10a JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x10b PushV
	var_360_object = var_0_bool; // 0x10c MovT
	func_1011(var_359_bool, var_360_object); // 0x10d Call
	var_361_bool = var_359_bool == 0; // 0x10f Not
	if(var_361_bool == 0) goto Label_274; // 0x110 JumpB
	goto Label_300; // 0x111 Jump
	
Label_274:
	GetPFPosition(var_36_cvector); // 0x112 TObjFunc
	GetPFPosition(var_37_cvector); // 0x114 Func
	var_40_cvector = var_36_cvector - var_37_cvector; // 0x116 Sub2
	var_41_float = var_40_cvector | var_40_cvector; // 0x117 Or2
	var_362_float = var_22_float * var_22_float; // 0x118 Mult
	var_363_bool = var_41_float < var_362_float; // 0x119 LT
	if(var_363_bool == 0) goto Label_290; // 0x11a JumpB
	var_364_bool = 0; var_365_float = 0; // 0x11b PushV
	var_365_float = var_22_float; // 0x11c Mov
	func_356(var_42_float, var_364_bool, var_365_float); // 0x11d Call
	var_366_bool = var_364_bool == 0; // 0x11f Not
	if(var_366_bool == 0) goto Label_290; // 0x120 JumpB
	goto Label_300; // 0x121 Jump
	
Label_291:
	var_367_bool = 0; var_368_float = 0; // 0x123 PushV
	var_368_float = var_22_float; // 0x124 Mov
	func_356(var_42_float, var_367_bool, var_368_float); // 0x125 Call
	var_369_bool = var_367_bool == 0; // 0x127 Not
	if(var_369_bool == 0) goto Label_298; // 0x128 JumpB
	goto Label_300; // 0x129 Jump
	
Label_298:
	var_39_bool = 1; // 0x12a MovB
	
Label_163:
	var_39_bool = 1; // 0xa3 MovB
	
Label_150:
	var_35_float = var_22_float; // 0x96 Mov
	
Label_137:
	var_370_int = 1; // 0x89 PushI
	var_2_object = var_2_object + var_370_int; // 0x8a Add2
	goto Label_128; // 0x8b Jump
	
Label_124:
	var_371_int = 1; // 0x7c PushI
	var_1_string = var_1_string + var_371_int; // 0x7d Add2
	goto Label_114; // 0x7e Jump
}


func_1137(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x471 PushV
	FindActor(var_14_object, var_11_string); // 0x472 Func
	var_15_bool = var_14_object == 0; // 0x474 NullEq
	if(var_15_bool == 0) goto Label_1144; // 0x475 JumpB
	var_10_bool = 0; // 0x476 MovB
	return 2; // 0x477 Return
	
Label_1144:
	Trigger(var_14_object, var_12_string); // 0x478 Func
	var_10_bool = 1; // 0x47a MovB
	return 2; // 0x47b Return
}


func_1011(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x3f3 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x3f4 PushV
	var_18_object = var_14_object; // 0x3f5 Mov
	func_975(var_17_bool, var_18_object); // 0x3f6 Call
	var_34_bool = var_17_bool == 0; // 0x3f8 Not
	if(var_34_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_13_bool = 0; // 0x3fa MovB
	return 2; // 0x3fb Return
	
Label_1020:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x3fc PushV
	var_36_object = var_14_object; // 0x3fd Mov
	var_37_string = "noaccess"; // 0x3fe MovS
	func_894(var_35_bool, var_36_object, var_37_string); // 0x3ff Call
	var_44_bool = var_35_bool == 0; // 0x401 Not
	if(var_44_bool == 0) goto Label_1029; // 0x402 JumpB
	var_13_bool = 1; // 0x403 MovB
	return 2; // 0x404 Return
	
Label_1029:
	var_45_string = "noaccess"; // 0x405 PushS
	GetProperty(var_45_string, var_16_int); // 0x406 ObjFunc
	var_46_int = 0; // 0x408 PushI
	var_13_bool = var_16_int == var_46_int; // 0x409 Eq2
	return 2; // 0x40a Return
}


func_500(var_0_bool, var_200_bool)
{
	var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; var_210_float = 0; // 0x1f4 PushV
	var_211_bool = 0; var_212_object = Obj(); // 0x1f5 PushV
	var_212_object = var_0_bool; // 0x1f6 MovT
	func_1011(var_211_bool, var_212_object); // 0x1f7 Call
	var_213_bool = var_211_bool == 0; // 0x1f9 Not
	if(var_213_bool == 0) goto Label_509; // 0x1fa JumpB
	var_200_bool = 0; // 0x1fb MovB
	return 10; // 0x1fc Return
	
Label_509:
	var_214_bool = 0; // 0x1fd PushV
	func_552(var_210_float, var_214_bool); // 0x1fe Call
	if(var_214_bool == 0) goto Label_531; // 0x200 JumpB
	GetPFPosition(var_206_cvector); // 0x201 TObjFunc
	GetPFPosition(var_207_cvector); // 0x203 Func
	var_208_cvector = var_206_cvector - var_207_cvector; // 0x205 Sub2
	var_209_float = var_208_cvector | var_208_cvector; // 0x206 Or2
	GetAttackDistance(var_210_float); // 0x207 TObjFunc
	var_215_int = 50; // 0x209 PushI
	var_210_float = var_210_float + var_215_int; // 0x20a Add2
	var_216_float = var_210_float * var_210_float; // 0x20b Mult
	var_217_bool = var_209_float <= var_216_float; // 0x20c LE
	if(var_217_bool == 0) goto Label_531; // 0x20d JumpB
	func_533(var_210_float); // 0x20f Call
	var_200_bool = 1; // 0x211 MovB
	return 10; // 0x212 Return
	
Label_531:
	var_200_bool = 0; // 0x213 MovB
	return 10; // 0x214 Return
}


func_758(var_145_string)
{
	var_145_string = "walk"; // 0x2f6 MovS
	return 0; // 0x2f7 Return
}


func_886(var_301_string, var_302_int)
{
	var_303_int = 1; // 0x377 PushI
	var_304_bool = var_302_int == var_303_int; // 0x378 Eq
	if(var_304_bool == 0) goto Label_892; // 0x379 JumpB
	var_301_string = "fire"; // 0x37a MovS
	return 0; // 0x37b Return
	
Label_892:
	var_301_string = "phys"; // 0x37c MovS
	return 0; // 0x37d Return
}


func_760(var_146_string)
{
	var_146_string = "run"; // 0x2f8 MovS
	return 0; // 0x2f9 Return
}


func_762(var_16_object)
{
	var_17_object = Obj(); // 0x2fb PushV
	var_17_object = var_16_object; // 0x2fc Mov
	func_771(var_17_object); // 0x2fd Call
	
Label_767:
	Hold(); // 0x2ff Func
	goto Label_767; // 0x301 Jump
}


func_1149(var_9_object)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = ""; // 0x47e PushV
	var_11_string = "quest_d1_03"; // 0x47f MovS
	var_12_string = "butcher_death"; // 0x480 MovS
	func_1137(var_10_bool, var_11_string, var_12_string); // 0x481 Call
	var_16_object = Obj(); // 0x483 PushV
	var_16_object = var_9_object; // 0x484 Mov
	TaskCall(3); // 0x485 TaskCall
	func_762(var_16_object); // 0x486 Call
	TaskReturn(); // 0x487 TaskReturn
	return 0; // 0x489 Return
}


func_894(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x37e PushV
	var_40_string = "HasProperty"; // 0x37f PushS
	var_41_int = 2; // 0x380 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x381 FuncExist
	var_43_bool = var_42_bool == 0; // 0x382 Not
	if(var_43_bool == 0) goto Label_902; // 0x383 JumpB
	var_35_bool = 0; // 0x384 MovB
	return 2; // 0x385 Return
	
Label_902:
	HasProperty(var_37_string, var_39_bool); // 0x386 ObjFunc
	var_35_bool = var_39_bool; // 0x388 Mov
	return 2; // 0x389 Return
}


