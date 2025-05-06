task_0_event_5(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_int = 4; // 0x3 PushI
	Sleep(var_9_int); // 0x4 Func
	TaskCall(1); // 0x7 TaskCall
	func_22(); // 0x8 NEW_2
	TaskReturn(); // 0x9 TaskReturn
	return 0; // 0xb Return
}


task_0_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_string = "cleanup"; // 0xd PushS
	var_11_bool = var_9_bool == var_10_string; // 0xe Eq
	if(var_11_bool == 0) goto Label_21; // 0xf JumpB
	var_12_object = Obj(); // 0x10 PushV
	func_1462(var_12_object); // 0x11 NEW_2
	RemoveActor(var_12_object); // 0x13 Func
	
Label_21:
	return 0; // 0x15 Return
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x2f7 PushI
	var_11_bool = var_9_int == var_10_int; // 0x2f8 Eq
	if(var_11_bool == 0) goto Label_767; // 0x2f9 JumpB
	var_12_object = Obj(); // 0x2fa PushV
	var_12_object = var_1_int; // 0x2fb MovT
	func_1506(var_12_object); // 0x2fc NEW_2
	goto Label_771; // 0x2fe Jump
	
Label_771:
	return 0; // 0x303 Return
	
Label_767:
	var_17_int = 0; // 0x2ff PushV
	var_17_int = var_9_int; // 0x300 Mov
	func_916(var_8_bool, var_9_int, var_17_int); // 0x301 NEW_2
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x312 PushV
	var_10_bool = 0; // 0x313 MovB
	var_11_bool = var_1_int == var_9_object; // 0x314 Eq
	if(var_11_bool == 0) goto Label_793; // 0x315 JumpB
	var_12_bool = var_2_int == 0; // 0x316 Not
	if(var_12_bool == 0) goto Label_793; // 0x317 JumpB
	var_10_bool = 1; // 0x318 MovB
	
Label_793:
	if(var_10_bool == 0) goto Label_799; // 0x319 JumpB
	var_2_int = 1; // 0x31a TMovB
	var_13_object = Obj(); // 0x31b PushV
	var_13_object = var_9_object; // 0x31c Mov
	func_1410(var_13_object); // 0x31d NEW_2
	
Label_799:
	return 0; // 0x31f Return
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x321 PushV
	var_10_bool = 0; // 0x322 MovB
	var_11_bool = var_1_int == var_9_object; // 0x323 Eq
	if(var_11_bool == 0) goto Label_808; // 0x324 JumpB
	var_12_int = var_2_int; // 0x325 PushT
	if(var_12_int == 0) goto Label_808; // 0x326 JumpB
	var_10_bool = 1; // 0x327 MovB
	
Label_808:
	if(var_10_bool == 0) goto Label_813; // 0x328 JumpB
	var_2_int = 0; // 0x329 TMovB
	var_13_string = "head"; // 0x32a PushS
	UnlookAsync(var_13_string); // 0x32b Func
	
Label_813:
	return 0; // 0x32d Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x3a7 Func
	return 0; // 0x3a9 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_772(var_9_object); // 0x3b3 NEW_2
	var_14_object = Obj(); // 0x3b5 PushV
	var_14_object = var_9_object; // 0x3b6 Mov
	func_1573(); // 0x3b7 NEW_2
	return 0; // 0x3b9 Return
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x444 Return
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x446 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x448 Return
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x5f6 PushV
	func_1462(var_9_object); // 0x5f7 NEW_2
	RemoveActor(var_9_object); // 0x5f9 Func
	Hold(); // 0x5fb Func
	return 0; // 0x5fd Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x607 PushV
	var_13_object = var_9_object; // 0x608 Mov
	var_14_int = var_10_int; // 0x609 Mov
	var_15_float = var_11_float; // 0x60a Mov
	func_1317(var_13_object, var_14_int, var_15_float); // 0x60b NEW_2
	return 0; // 0x60d Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x60f PushV
	var_15_object = var_9_object; // 0x610 Mov
	var_16_int = var_10_int; // 0x611 Mov
	var_17_float = var_11_float; // 0x612 Mov
	var_18_cvector = var_13_cvector; // 0x613 Mov
	var_19_cvector = var_14_cvector; // 0x614 Mov
	func_1385(var_17_float, var_18_cvector, var_19_cvector); // 0x615 NEW_2
	return 0; // 0x617 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x618 PushV
	var_13_string = "health"; // 0x619 PushS
	var_14_bool = var_10_string == var_13_string; // 0x61a Eq
	if(var_14_bool == 0) goto Label_1572; // 0x61b JumpB
	var_15_string = "health"; // 0x61c PushS
	GetProperty(var_15_string, var_12_float); // 0x61d Func
	var_16_int = 0; // 0x61f PushI
	var_17_bool = var_12_float <= var_16_int; // 0x620 LE
	if(var_17_bool == 0) goto Label_1572; // 0x621 JumpB
	SignalDeath(var_9_object); // 0x622 Func
	
Label_1572:
	return 2; // 0x624 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x626 PushV
	var_10_object = var_9_object; // 0x627 Mov
	func_1534(var_10_object); // 0x628 NEW_2
	return 0; // 0x62a Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_514(var_0_object, var_280_bool, var_281_float)
{
	var_282_bool = 0; var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_float = 0; var_287_bool = 0; var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_float = 0; // 0x202 PushV
	
Label_515:
	IsAnimationPlaying(var_287_bool); // 0x203 Func
	var_292_bool = var_287_bool == 0; // 0x205 Not
	if(var_292_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_552; // 0x207 Jump
	
Label_552:
	func_689(var_291_float); // 0x229 NEW_2
	var_280_bool = 0; // 0x22b MovB
	return 10; // 0x22c Return
	
Label_520:
	var_293_bool = 0; // 0x208 PushV
	func_585(var_293_bool); // 0x209 NEW_2
	if(var_293_bool == 0) goto Label_526; // 0x20b JumpB
	var_280_bool = 1; // 0x20c MovB
	return 10; // 0x20d Return
	
Label_526:
	var_336_bool = 0; var_337_object = Obj(); // 0x20e PushV
	var_337_object = var_0_object; // 0x20f MovT
	func_1249(var_336_bool, var_337_object); // 0x210 NEW_2
	var_338_bool = var_336_bool == 0; // 0x212 Not
	if(var_338_bool == 0) goto Label_534; // 0x213 JumpB
	var_280_bool = 0; // 0x214 MovB
	return 10; // 0x215 Return
	
Label_534:
	GetPFPosition(var_288_cvector); // 0x216 TObjFunc
	GetPFPosition(var_289_cvector); // 0x218 Func
	var_290_cvector = var_288_cvector - var_289_cvector; // 0x21a Sub2
	var_291_float = var_290_cvector | var_290_cvector; // 0x21b Or2
	var_339_float = var_281_float * var_281_float; // 0x21c Mult
	var_340_bool = var_291_float < var_339_float; // 0x21d LT
	if(var_340_bool == 0) goto Label_549; // 0x21e JumpB
	var_341_bool = 0; var_342_float = 0; // 0x21f PushV
	var_342_float = var_281_float; // 0x220 Mov
	func_350(var_291_float, var_341_bool, var_342_float); // 0x221 NEW_2
	var_280_bool = 1; // 0x223 MovB
	return 10; // 0x224 Return
	
Label_549:
	sync(); // 0x225 Func
	goto Label_515; // 0x227 Jump
}


func_1410(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); // 0x582 PushV
	GetEyesHeight(var_16_float); // 0x583 ObjFunc
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x585 MovV
	var_18_float = GetByIndex(var_17_cvector, 1); // 0x586 PushE
	var_18_float = var_16_float; // 0x587 Mov
	SetByIndex(var_17_cvector, 1) = var_18_float; // 0x588 PopE
	var_19_string = "head"; // 0x589 PushS
	LookAsync(var_13_object, var_19_string, var_17_cvector); // 0x58a Func
	return 4; // 0x58c Return
}


func_772(var_2_int)
{
	var_10_int = 1; // 0x304 PushI
	KillTimer(var_10_int); // 0x305 Func
	var_11_int = var_2_int; // 0x307 PushT
	if(var_11_int == 0) goto Label_781; // 0x308 JumpB
	var_2_int = 0; // 0x309 TMovB
	var_12_string = "head"; // 0x30a PushS
	UnlookAsync(var_12_string); // 0x30b Func
	
Label_781:
	func_938(var_9_object); // 0x30e NEW_2
	return 0; // 0x310 Return
}


func_646(var_0_object, var_243_bool)
{
	var_244_bool = 0; var_245_bool = 0; // 0x286 PushV
	var_246_string = "IsAttacking"; // 0x287 PushS
	var_247_int = 1; // 0x288 PushI
	var_248_bool = IsFuncExist(var_0_object, var_246_string, var_247_int); // 0x289 FuncExist
	if(var_248_bool == 0) goto Label_655; // 0x28a JumpB
	IsAttacking(var_245_bool); // 0x28b TObjFunc
	var_243_bool = var_245_bool; // 0x28d Mov
	return 2; // 0x28e Return
	
Label_655:
	var_243_bool = 0; // 0x28f MovB
	return 2; // 0x290 Return
}


func_1421(var_35_string)
{
	var_36_bool = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x58d PushV
	IsExisting3DSound(var_44_bool, var_35_string); // 0x58e Func
	var_52_bool = var_44_bool == 0; // 0x590 Not
	if(var_52_bool == 0) goto Label_1446; // 0x591 JumpB
	var_45_int = 0; // 0x592 MovI
	
Label_1427:
	var_53_int = 1; // 0x593 PushI
	var_54_int = var_45_int + var_53_int; // 0x594 Add
	var_55_int = var_35_string + var_54_int; // 0x595 Add
	IsExisting3DSound(var_46_bool, var_55_int); // 0x596 Func
	var_56_bool = var_46_bool == 0; // 0x598 Not
	if(var_56_bool == 0) goto Label_1435; // 0x599 JumpB
	goto Label_1438; // 0x59a Jump
	
Label_1438:
	var_57_bool = var_45_int == 0; // 0x59e Not
	if(var_57_bool == 0) goto Label_1441; // 0x59f JumpB
	return 16; // 0x5a0 Return
	
Label_1441:
	irand(var_47_int, var_45_int); // 0x5a1 Func
	var_58_int = 1; // 0x5a3 PushI
	var_59_int = var_47_int + var_58_int; // 0x5a4 Add
	var_35_string = var_35_string + var_59_int; // 0x5a5 Add2
	
Label_1446:
	Is3DSoundLoaded(var_48_bool, var_35_string); // 0x5a6 Func
	var_60_bool = var_48_bool; // 0x5a8 Push
	if(var_60_bool == 0) goto Label_1461; // 0x5a9 JumpB
	GetEyesHeight(var_49_float); // 0x5aa Func
	GetDirection(var_50_cvector); // 0x5ac Func
	var_61_int = 50; // 0x5ae PushI
	var_51_cvector = var_50_cvector * var_61_int; // 0x5af Mult2
	var_62_float = GetByIndex(var_51_cvector, 1); // 0x5b0 PushE
	var_62_float = var_62_float + var_49_float; // 0x5b1 Add2
	SetByIndex(var_51_cvector, 1) = var_62_float; // 0x5b2 PopE
	PlayGlobalSound(var_35_string, var_51_cvector); // 0x5b3 Func
	
Label_1461:
	return 16; // 0x5b5 Return
	
Label_1435:
	var_63_int = 1; // 0x59b PushI
	var_45_int = var_45_int + var_63_int; // 0x59c Add2
	goto Label_1427; // 0x59d Jump
}


func_657(var_2_int, var_5_int)
{
	var_360_float = 0; var_361_int = 0; var_362_float = 0; var_363_int = 0; // 0x291 PushV
	var_364_bool = var_2_int == 0; // 0x292 Not
	if(var_364_bool == 0) goto Label_661; // 0x293 JumpB
	return 4; // 0x294 Return
	
Label_661:
	var_365_int = var_5_int; // 0x295 PushT
	if(var_365_int == 0) goto Label_669; // 0x296 JumpB
	var_366_int = -1; // 0x297 PushI
	var_5_int = var_5_int + var_366_int; // 0x298 Add2
	var_367_int = 0; // 0x299 PushI
	var_368_bool = var_5_int > var_367_int; // 0x29a GT
	if(var_368_bool == 0) goto Label_669; // 0x29b JumpB
	return 4; // 0x29c Return
	
Label_669:
	rand(var_362_float); // 0x29d Func
	var_369_float = 0; // 0x29f PushV
	func_707(var_369_float); // 0x2a0 NEW_2
	var_370_bool = var_362_float < var_369_float; // 0x2a2 LT
	if(var_370_bool == 0) goto Label_688; // 0x2a3 JumpB
	irand(var_363_int, var_362_float); // 0x2a4 Func
	var_371_int = 1; // 0x2a6 PushI
	var_363_int = var_363_int + var_371_int; // 0x2a7 Add2
	var_372_string = "attack"; // 0x2a8 PushS
	var_373_int = var_372_string + var_363_int; // 0x2a9 Add
	Speak(var_373_int); // 0x2aa Func
	var_374_int = 0; // 0x2ac PushV
	func_705(var_374_int); // 0x2ad NEW_2
	var_5_int = var_374_int; // 0x2ae TMov
	
Label_688:
	return 4; // 0x2b0 Return
}


func_276(var_1_int, var_2_int, var_4_float)
{
	var_45_bool = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0); // 0x114 PushV
	var_1_int = 0; // 0x115 TMovI
	
Label_278:
	var_51_string = "all"; // 0x116 PushS
	var_52_string = "attack_begin"; // 0x117 PushS
	var_53_int = 1; // 0x118 PushI
	var_54_int = var_1_int + var_53_int; // 0x119 Add
	var_55_int = var_52_string + var_54_int; // 0x11a Add
	HasAnimation(var_48_bool, var_51_string, var_55_int); // 0x11b Func
	var_56_bool = var_48_bool == 0; // 0x11d Not
	if(var_56_bool == 0) goto Label_288; // 0x11e JumpB
	goto Label_291; // 0x11f Jump
	
Label_291:
	var_2_int = 0; // 0x123 TMovI
	
Label_292:
	var_57_string = "attack"; // 0x124 PushS
	var_58_int = 1; // 0x125 PushI
	var_59_int = var_2_int + var_58_int; // 0x126 Add
	var_60_int = var_57_string + var_59_int; // 0x127 Add
	IsExisting3DSound(var_49_bool, var_60_int); // 0x128 Func
	var_61_bool = var_49_bool == 0; // 0x12a Not
	if(var_61_bool == 0) goto Label_301; // 0x12b JumpB
	goto Label_304; // 0x12c Jump
	
Label_304:
	var_62_string = "all"; // 0x130 PushS
	var_63_string = "bjump"; // 0x131 PushS
	GetAnimationOffset(var_50_cvector, var_62_string, var_63_string); // 0x132 Func
	var_64_float = GetByIndex(var_50_cvector, 2); // 0x134 PushE
	var_4_float = -var_64_float; // 0x135 Neg2
	return 6; // 0x136 Return
	
Label_301:
	var_65_int = 1; // 0x12d PushI
	var_2_int = var_2_int + var_65_int; // 0x12e Add2
	goto Label_292; // 0x12f Jump
	
Label_288:
	var_66_int = 1; // 0x120 PushI
	var_1_int = var_1_int + var_66_int; // 0x121 Add2
	goto Label_278; // 0x122 Jump
}


func_916(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x395 PushI
	var_19_bool = var_17_int != var_18_int; // 0x396 Neq
	if(var_19_bool == 0) goto Label_921; // 0x397 JumpB
	return 0; // 0x398 Return
	
Label_921:
	var_20_bool = 0; var_21_object = Obj(); // 0x399 PushV
	var_21_object = var_1_int; // 0x39a MovT
	func_954(var_20_bool, var_21_object); // 0x39b NEW_2
	var_56_bool = var_20_bool == 0; // 0x39d Not
	if(var_56_bool == 0) goto Label_928; // 0x39e JumpB
	var_0_object = 1; // 0x39f TMovB
	
Label_928:
	var_57_int = 0; // 0x3a0 PushI
	KillTimer(var_57_int); // 0x3a1 Func
	Stop(); // 0x3a3 Func
	return 0; // 0x3a5 Return
}


func_22()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x16 PushV
	var_18_string = "player"; // 0x17 PushS
	FindActor(var_17_object, var_18_string); // 0x18 Func
	var_19_bool = var_17_object == 0; // 0x1a Not
	if(var_19_bool == 0) goto Label_29; // 0x1b JumpB
	return 2; // 0x1c Return
	
Label_29:
	var_20_object = Obj(); var_21_bool = 0; var_22_float = 0; // 0x1d PushV
	var_20_object = var_17_object; // 0x1e Mov
	var_21_bool = 1; // 0x1f MovB
	var_22_float = 180.0; // 0x20 MovF
	func_47(var_13_bool, var_14_float, var_15_int, var_16_object, var_17_object, var_20_object, var_21_bool, var_22_float); // 0x21 NEW_2
	var_511_int = 1; // 0x23 PushI
	Sleep(var_511_int); // 0x24 Func
	goto Label_29; // 0x26 Jump
}


func_1317(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x525 PushV
	var_34_bool = 0; // 0x526 PushV
	var_34_bool = 0; // 0x527 MovB
	var_35_bool = 0; // 0x528 PushV
	var_35_bool = 0; // 0x529 MovB
	var_36_object = var_13_object; // 0x52a Push
	if(var_36_object == 0) goto Label_1328; // 0x52b JumpB
	var_37_int = 4; // 0x52c PushI
	var_38_bool = var_14_int != var_37_int; // 0x52d Neq
	if(var_38_bool == 0) goto Label_1328; // 0x52e JumpB
	var_35_bool = 1; // 0x52f MovB
	
Label_1328:
	if(var_35_bool == 0) goto Label_1333; // 0x530 JumpB
	var_39_int = 5; // 0x531 PushI
	var_40_bool = var_14_int != var_39_int; // 0x532 Neq
	if(var_40_bool == 0) goto Label_1333; // 0x533 JumpB
	var_34_bool = 1; // 0x534 MovB
	
Label_1333:
	if(var_34_bool == 0) goto Label_1380; // 0x535 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x536 PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x537 PushV
	var_44_object = var_13_object; // 0x538 Mov
	func_1111(var_44_object); // 0x539 NEW_2
	var_42_cvector = var_43_cvector; // 0x53a Mov
	func_1468(var_41_cvector, var_42_cvector); // 0x53c NEW_2
	var_25_cvector = var_41_cvector; // 0x53d Mov
	CreateVectorVector(var_26_object); // 0x53f Func
	var_27_int = 1; // 0x541 MovI
	
Label_1346:
	var_54_string = "hit"; // 0x542 PushS
	var_55_int = var_54_string + var_27_int; // 0x543 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x544 Func
	var_56_bool = var_28_bool == 0; // 0x546 Not
	if(var_56_bool == 0) goto Label_1353; // 0x547 JumpB
	goto Label_1362; // 0x548 Jump
	
Label_1362:
	size(var_31_int); // 0x552 ObjFunc
	var_57_int = var_31_int; // 0x554 Push
	if(var_57_int == 0) goto Label_1379; // 0x555 JumpB
	irand(var_32_int, var_31_int); // 0x556 Func
	get(var_33_cvector, var_32_int); // 0x558 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x55a PushV
	var_58_object = var_13_object; // 0x55b Mov
	var_59_int = var_14_int; // 0x55c Mov
	var_60_float = var_15_float; // 0x55d Mov
	var_61_cvector = var_33_cvector; // 0x55e Mov
	var_62_cvector = -var_25_cvector; // 0x55f Neg2
	func_1385(var_60_float, var_61_cvector, var_62_cvector); // 0x560 NEW_2
	return 18; // 0x562 Return
	
Label_1379:
	var_26_object = 0; // 0x563 SetNull
	
Label_1380:
	var_103_object = Obj(); // 0x564 PushV
	var_103_object = var_13_object; // 0x565 Mov
	func_1273(var_103_object); // 0x566 NEW_2
	return 18; // 0x568 Return
	
Label_1353:
	var_104_int = var_30_cvector | var_25_cvector; // 0x549 Or
	var_105_float = 0.70711; // 0x54a PushF
	var_106_bool = var_104_int >= var_105_float; // 0x54b GE
	if(var_106_bool == 0) goto Label_1359; // 0x54c JumpB
	add(var_29_cvector); // 0x54d ObjFunc
	
Label_1359:
	var_107_int = 1; // 0x54f PushI
	var_27_int = var_27_int + var_107_int; // 0x550 Add2
	goto Label_1346; // 0x551 Jump
}


func_41(var_389_float)
{
	var_389_float = 0.1; // 0x2a MovF
	return 0; // 0x2b Return
}


func_938(var_0_object)
{
	var_0_object = 1; // 0x3aa TMovB
	var_13_int = 0; // 0x3ab PushI
	KillTimer(var_13_int); // 0x3ac Func
	Stop(); // 0x3ae Func
	return 0; // 0x3b0 Return
}


func_1065(var_34_string)
{
	RemoveRTEnvelope(); // 0x42a Func
	SetDeathState(); // 0x42c Func
	Stop(); // 0x42e Func
	StopAsync(); // 0x430 Func
	StopSecondaryAnimation(); // 0x432 Func
	var_35_string = ""; // 0x434 PushV
	var_35_string = var_34_string; // 0x435 Mov
	func_1421(var_35_string); // 0x436 NEW_2
	var_64_string = "all"; // 0x438 PushS
	PlayAnimation(var_64_string, var_34_string); // 0x439 Func
	WaitForAnimEnd(); // 0x43b Func
	var_65_string = "all"; // 0x43d PushS
	LockAnimationEnd(var_65_string, var_34_string); // 0x43e Func
	RemoveEnvelope(); // 0x440 Func
	return 0; // 0x442 Return
}


func_44(var_396_int)
{
	var_396_int = 0; // 0x2d MovI
	return 0; // 0x2e Return
}


func_557(var_0_object, var_295_bool)
{
	var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_float = 0; var_300_float = 0; var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_float = 0; // 0x22d PushV
	var_306_bool = 0; var_307_object = Obj(); // 0x22e PushV
	var_307_object = var_0_object; // 0x22f MovT
	func_1249(var_306_bool, var_307_object); // 0x230 NEW_2
	var_308_bool = var_306_bool == 0; // 0x232 Not
	if(var_308_bool == 0) goto Label_566; // 0x233 JumpB
	var_295_bool = 0; // 0x234 MovB
	return 10; // 0x235 Return
	
Label_566:
	var_309_bool = 0; // 0x236 PushV
	func_646(var_305_float, var_309_bool); // 0x237 NEW_2
	if(var_309_bool == 0) goto Label_583; // 0x239 JumpB
	GetPFPosition(var_301_cvector); // 0x23a TObjFunc
	GetPFPosition(var_302_cvector); // 0x23c Func
	var_303_cvector = var_301_cvector - var_302_cvector; // 0x23e Sub2
	var_304_float = var_303_cvector | var_303_cvector; // 0x23f Or2
	GetAttackDistance(var_305_float); // 0x240 TObjFunc
	var_310_int = 50; // 0x242 PushI
	var_305_float = var_305_float + var_310_int; // 0x243 Add2
	var_311_float = var_305_float * var_305_float; // 0x244 Mult
	var_295_bool = var_304_float <= var_311_float; // 0x245 LE2
	return 10; // 0x246 Return
	
Label_583:
	var_295_bool = 0; // 0x247 MovB
	return 10; // 0x248 Return
}


func_814(var_0_object, var_1_int, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_158_bool = 0; var_159_bool = 0; var_160_object = Obj(); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_float = 0; var_165_object = Obj(); var_166_bool = 0; var_167_bool = 0; var_168_object = Obj(); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_float = 0; var_173_object = Obj(); // 0x32e PushV
	var_0_object = 0; // 0x32f TMovB
	var_1_int = var_153_object; // 0x330 TMov
	var_167_bool = var_157_bool; // 0x331 Mov
	
Label_818:
	var_174_bool = 0; var_175_object = Obj(); // 0x332 PushV
	var_175_object = var_153_object; // 0x333 Mov
	func_954(var_174_bool, var_175_object); // 0x334 NEW_2
	var_178_bool = var_174_bool == 0; // 0x336 Not
	if(var_178_bool == 0) goto Label_826; // 0x337 JumpB
	var_152_bool = 0; // 0x338 MovB
	return 16; // 0x339 Return
	
Label_826:
	GetPosition(var_169_cvector); // 0x33a ObjFunc
	GetPosition(var_170_cvector); // 0x33c Func
	var_171_cvector = var_169_cvector - var_170_cvector; // 0x33e Sub2
	var_172_float = var_171_cvector | var_171_cvector; // 0x33f Or2
	var_179_bool = 0; // 0x340 PushV
	var_179_bool = 0; // 0x341 MovB
	var_180_int = 0; // 0x342 PushI
	var_181_bool = var_155_float > var_180_int; // 0x343 GT
	if(var_181_bool == 0) goto Label_841; // 0x344 JumpB
	var_182_float = var_155_float * var_155_float; // 0x345 Mult
	var_183_bool = var_172_float > var_182_float; // 0x346 GT
	if(var_183_bool == 0) goto Label_841; // 0x347 JumpB
	var_179_bool = 1; // 0x348 MovB
	
Label_841:
	if(var_179_bool == 0) goto Label_846; // 0x349 JumpB
	Stop(); // 0x34a Func
	var_152_bool = 0; // 0x34c MovB
	return 16; // 0x34d Return
	
Label_846:
	var_184_float = var_154_float * var_154_float; // 0x34e Mult
	var_185_bool = var_172_float > var_184_float; // 0x34f GT
	if(var_185_bool == 0) goto Label_908; // 0x350 JumpB
	GetPFPosition(var_169_cvector); // 0x351 ObjFunc
	FindPathTo(var_173_object, var_169_cvector); // 0x353 Func
	var_186_bool = var_173_object != 0; // 0x355 NullNeq
	if(var_186_bool == 0) goto Label_857; // 0x356 JumpB
	var_168_object = var_173_object; // 0x357 Mov
	var_173_object = 0; // 0x358 SetNull
	
Label_857:
	var_187_bool = var_168_object != 0; // 0x359 NullNeq
	if(var_187_bool == 0) goto Label_890; // 0x35a JumpB
	var_188_bool = var_167_bool; // 0x35b Push
	if(var_188_bool == 0) goto Label_867; // 0x35c JumpB
	var_167_bool = 0; // 0x35d MovB
	RotatePath(var_168_object, var_166_bool); // 0x35e Func
	var_189_bool = var_166_bool == 0; // 0x360 Not
	if(var_189_bool == 0) goto Label_867; // 0x361 JumpB
	goto Label_914; // 0x362 Jump
	
Label_914:
	var_152_bool = !var_0_object; // 0x392 Not2
	return 16; // 0x393 Return
	
Label_867:
	var_190_int = 0; // 0x363 PushI
	var_191_float = 0.3; // 0x364 PushF
	SetTimer(var_190_int, var_191_float); // 0x365 Func
	var_192_string = ""; // 0x367 PushV
	func_961(var_192_string); // 0x368 NEW_2
	var_193_string = ""; // 0x36a PushV
	func_963(var_193_string); // 0x36b NEW_2
	FollowPath(var_168_object, var_156_bool, var_166_bool, var_192_string, var_193_string); // 0x36d Func
	var_194_bool = var_166_bool == 0; // 0x36f Not
	if(var_194_bool == 0) goto Label_888; // 0x370 JumpB
	var_195_object = var_0_object; // 0x371 PushT
	if(var_195_object == 0) goto Label_886; // 0x372 JumpB
	var_168_object = 0; // 0x373 SetNull
	goto Label_914; // 0x374 Jump
	
Label_886:
	goto Label_913; // 0x376 Jump
	
Label_913:
	goto Label_818; // 0x391 Jump
	
Label_888:
	var_168_object = 0; // 0x378 SetNull
	goto Label_906; // 0x379 Jump
	
Label_906:
	var_173_object = 0; // 0x38a SetNull
	goto Label_912; // 0x38b Jump
	
Label_912:
	var_168_object = 0; // 0x390 SetNull
	
Label_890:
	var_196_int = 0; // 0x37a PushI
	KillTimer(var_196_int); // 0x37b Func
	var_197_float = 0.5; // 0x37d PushF
	Sleep(var_197_float, var_166_bool); // 0x37e Func
	var_198_bool = var_166_bool == 0; // 0x380 Not
	if(var_198_bool == 0) goto Label_902; // 0x381 JumpB
	var_199_object = var_0_object; // 0x382 PushT
	if(var_199_object == 0) goto Label_902; // 0x383 JumpB
	var_168_object = 0; // 0x384 SetNull
	goto Label_914; // 0x385 Jump
	
Label_902:
	var_200_int = 0; // 0x386 PushI
	var_201_float = 0.3; // 0x387 PushF
	SetTimer(var_200_int, var_201_float); // 0x388 Func
	
Label_908:
	var_202_int = 0; // 0x38c PushI
	KillTimer(var_202_int); // 0x38d Func
	goto Label_914; // 0x38f Jump
}


func_47(var_0_object, var_3_bool, var_5_int, var_20_object, var_21_bool, var_22_float, var_129_bool, var_221_bool)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_float = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_float = 0; // 0x2f PushV
	func_276(var_42_cvector, var_43_bool, var_44_float); // 0x31 NEW_2
	var_5_int = 0; // 0x33 TMovI
	var_67_string = "@GetAttackDistance"; // 0x34 PushS
	var_68_int = 1; // 0x35 PushI
	var_69_bool = IsFuncExist(var_20_object, var_67_string, var_68_int); // 0x36 FuncExist
	if(var_69_bool == 0) goto Label_61; // 0x37 JumpB
	GetAttackDistance(var_34_float); // 0x38 ObjFunc
	var_70_int = 50; // 0x3a PushI
	var_34_float = var_34_float + var_70_int; // 0x3b Add2
	goto Label_62; // 0x3c Jump
	
Label_62:
	var_71_int = 150; // 0x3e PushI
	var_72_bool = var_34_float >= var_71_int; // 0x3f GE
	if(var_72_bool == 0) goto Label_66; // 0x40 JumpB
	var_34_float = 150; // 0x41 MovI
	
Label_66:
	var_3_bool = 0; // 0x42 TMovB
	var_0_object = var_20_object; // 0x43 TMov
	IsPlayerActor(var_0_object, var_37_bool); // 0x44 Func
	var_73_bool = var_37_bool; // 0x46 Push
	if(var_73_bool == 0) goto Label_80; // 0x47 JumpB
	var_74_string = "attack"; // 0x48 PushS
	PlayGlobalMusic(var_74_string); // 0x49 Func
	var_75_object = Obj(); // 0x4b PushV
	func_1462(var_75_object); // 0x4c NEW_2
	SendPlayerEnemy(var_20_object, var_75_object); // 0x4e Func
	
Label_80:
	var_78_bool = var_21_bool; // 0x50 Push
	if(var_78_bool == 0) goto Label_84; // 0x51 JumpB
	var_38_bool = 0; // 0x52 MovB
	goto Label_85; // 0x53 Jump
	
Label_85:
	var_79_float = 400.0; // 0x55 PushF
	var_39_float = var_79_float + var_34_float; // 0x56 Add2
	
Label_87:
	var_80_bool = 0; // 0x57 PushV
	var_80_bool = 0; // 0x58 MovB
	var_81_bool = 0; var_82_object = Obj(); // 0x59 PushV
	var_82_object = var_0_object; // 0x5a MovT
	func_1249(var_81_bool, var_82_object); // 0x5b NEW_2
	if(var_81_bool == 0) goto Label_97; // 0x5d JumpB
	var_115_bool = var_3_bool == 0; // 0x5e Not
	if(var_115_bool == 0) goto Label_97; // 0x5f JumpB
	var_80_bool = 1; // 0x60 MovB
	
Label_97:
	if(var_80_bool == 0) goto Label_259; // 0x61 JumpB
	func_689(var_44_float); // 0x63 NEW_2
	GetPFPosition(var_35_cvector); // 0x65 TObjFunc
	GetPFPosition(var_36_cvector); // 0x67 Func
	var_40_cvector = var_35_cvector - var_36_cvector; // 0x69 Sub2
	var_41_float = var_40_cvector | var_40_cvector; // 0x6a Or2
	var_121_float = var_39_float * var_39_float; // 0x6b Mult
	var_122_bool = var_41_float >= var_121_float; // 0x6c GE
	if(var_122_bool == 0) goto Label_125; // 0x6d JumpB
	var_123_bool = 0; var_124_object = Obj(); var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_bool = 0; // 0x6e PushV
	var_124_object = var_0_object; // 0x6f MovT
	var_125_float = var_34_float; // 0x70 Mov
	var_126_float = 10000.0; // 0x71 MovF
	var_127_bool = 1; // 0x72 MovB
	var_128_bool = 0; // 0x73 MovB
	TaskCall(2); // 0x74 TaskCall
	func_709(var_131_bool, var_123_bool, var_124_object, var_125_float, var_126_float, var_127_bool, var_128_bool); // 0x75 NEW_2
	TaskReturn(); // 0x76 TaskReturn
	var_206_bool = var_129_bool == 0; // 0x78 Not
	if(var_206_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_259; // 0x7a Jump
	
Label_259:
	WaitForAnimEnd(); // 0x103 Func
	var_207_bool = var_3_bool; // 0x105 PushT
	if(var_207_bool == 0) goto Label_264; // 0x106 JumpB
	return 22; // 0x107 Return
	
Label_264:
	var_208_string = "all"; // 0x108 PushS
	var_209_string = "attack_off"; // 0x109 PushS
	PlayAnimation(var_208_string, var_209_string); // 0x10a Func
	WaitForAnimEnd(); // 0x10c Func
	var_210_bool = var_37_bool; // 0x10e Push
	if(var_210_bool == 0) goto Label_275; // 0x10f JumpB
	var_211_float = 2.0; // 0x110 PushF
	Sleep(var_211_float); // 0x111 Func
	
Label_275:
	return 22; // 0x113 Return
	
Label_123:
	var_38_bool = 0; // 0x7b MovB
	goto Label_258; // 0x7c Jump
	
Label_258:
	goto Label_87; // 0x102 Jump
	
Label_125:
	var_212_float = var_22_float * var_22_float; // 0x7d Mult
	var_213_bool = var_41_float >= var_212_float; // 0x7e GE
	if(var_213_bool == 0) goto Label_250; // 0x7f JumpB
	GetPFPosition(var_42_cvector); // 0x80 TObjFunc
	CanReachByPF(var_43_bool, var_42_cvector); // 0x82 Func
	var_214_bool = var_43_bool == 0; // 0x84 Not
	if(var_214_bool == 0) goto Label_149; // 0x85 JumpB
	var_215_bool = 0; var_216_object = Obj(); var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_bool = 0; // 0x86 PushV
	var_216_object = var_0_object; // 0x87 MovT
	var_217_float = var_34_float; // 0x88 Mov
	var_218_float = 10000.0; // 0x89 MovF
	var_219_bool = 1; // 0x8a MovB
	var_220_bool = 0; // 0x8b MovB
	TaskCall(2); // 0x8c TaskCall
	func_709(var_223_bool, var_215_bool, var_216_object, var_217_float, var_218_float, var_219_bool, var_220_bool); // 0x8d NEW_2
	TaskReturn(); // 0x8e TaskReturn
	var_224_bool = var_221_bool == 0; // 0x90 Not
	if(var_224_bool == 0) goto Label_147; // 0x91 JumpB
	goto Label_259; // 0x92 Jump
	
Label_147:
	var_38_bool = 0; // 0x93 MovB
	goto Label_87; // 0x94 Jump
	
Label_149:
	var_225_bool = var_38_bool == 0; // 0x95 Not
	if(var_225_bool == 0) goto Label_174; // 0x96 JumpB
	var_226_object = Obj(); // 0x97 PushV
	var_226_object = var_0_object; // 0x98 MovT
	func_1399(); // 0x99 NEW_2
	var_235_string = "all"; // 0x9b PushS
	var_236_string = "attack_on"; // 0x9c PushS
	PlayAnimation(var_235_string, var_236_string); // 0x9d Func
	WaitForAnimEnd(); // 0x9f Func
	func_689(var_44_float); // 0xa2 NEW_2
	StopAsync(); // 0xa4 Func
	var_38_bool = 1; // 0xa6 MovB
	var_237_bool = 0; var_238_object = Obj(); // 0xa7 PushV
	var_238_object = var_0_object; // 0xa8 MovT
	func_1249(var_237_bool, var_238_object); // 0xa9 NEW_2
	var_239_bool = var_237_bool == 0; // 0xab Not
	if(var_239_bool == 0) goto Label_174; // 0xac JumpB
	goto Label_259; // 0xad Jump
	
Label_174:
	rand(var_44_float); // 0xae Func
	var_240_bool = 0; // 0xb0 PushV
	var_240_bool = 1; // 0xb1 MovB
	var_241_float = 0.25; // 0xb2 PushF
	var_242_bool = var_44_float < var_241_float; // 0xb3 LT
	if(var_242_bool == 0) goto Label_186; // 0xb4 JumpB
	var_243_bool = 0; // 0xb5 PushV
	func_646(var_240_bool, var_243_bool); // 0xb6 NEW_2
	if(var_243_bool == 0) goto Label_186; // 0xb8 JumpB
	var_240_bool = 0; // 0xb9 MovB
	
Label_186:
	if(var_240_bool == 0) goto Label_203; // 0xba JumpB
	Face(var_0_object); // 0xbb Func
	func_696(); // 0xbe NEW_2
	var_278_string = "all"; // 0xc0 PushS
	var_279_string = "attack_stay"; // 0xc1 PushS
	PlayAnimation(var_278_string, var_279_string); // 0xc2 Func
	var_280_bool = 0; var_281_float = 0; // 0xc4 PushV
	var_281_float = var_22_float; // 0xc5 Mov
	func_514(var_44_float, var_280_bool, var_281_float); // 0xc6 NEW_2
	StopAsync(); // 0xc8 Func
	goto Label_249; // 0xca Jump
	
Label_249:
	goto Label_258; // 0xf9 Jump
	
Label_203:
	Face(var_0_object); // 0xcb Func
	var_495_string = "all"; // 0xcd PushS
	var_496_string = "fjump"; // 0xce PushS
	PlayAnimation(var_495_string, var_496_string); // 0xcf Func
	WaitForAnimEnd(); // 0xd1 Func
	func_689(var_44_float); // 0xd4 NEW_2
	var_497_cvector = CVector(0.0, 0.0, 0.0); // 0xd6 PushVec
	SetSpeed(var_497_cvector); // 0xd7 Func
	Stop(); // 0xd9 Func
	StopAsync(); // 0xdb Func
	var_498_bool = 0; // 0xdd PushV
	func_646(var_44_float, var_498_bool); // 0xde NEW_2
	var_499_bool = var_498_bool == 0; // 0xe0 Not
	if(var_499_bool == 0) goto Label_249; // 0xe1 JumpB
	var_500_bool = 0; var_501_object = Obj(); // 0xe2 PushV
	var_501_object = var_0_object; // 0xe3 MovT
	func_1249(var_500_bool, var_501_object); // 0xe4 NEW_2
	var_502_bool = var_500_bool == 0; // 0xe6 Not
	if(var_502_bool == 0) goto Label_233; // 0xe7 JumpB
	goto Label_259; // 0xe8 Jump
	
Label_233:
	GetPFPosition(var_35_cvector); // 0xe9 TObjFunc
	GetPFPosition(var_36_cvector); // 0xeb Func
	var_40_cvector = var_35_cvector - var_36_cvector; // 0xed Sub2
	var_41_float = var_40_cvector | var_40_cvector; // 0xee Or2
	var_503_float = var_22_float * var_22_float; // 0xef Mult
	var_504_bool = var_41_float < var_503_float; // 0xf0 LT
	if(var_504_bool == 0) goto Label_249; // 0xf1 JumpB
	var_505_bool = 0; var_506_float = 0; // 0xf2 PushV
	var_506_float = var_22_float; // 0xf3 Mov
	func_350(var_44_float, var_505_bool, var_506_float); // 0xf4 NEW_2
	var_507_bool = var_505_bool == 0; // 0xf6 Not
	if(var_507_bool == 0) goto Label_249; // 0xf7 JumpB
	goto Label_259; // 0xf8 Jump
	
Label_250:
	var_508_bool = 0; var_509_float = 0; // 0xfa PushV
	var_509_float = var_22_float; // 0xfb Mov
	func_350(var_44_float, var_508_bool, var_509_float); // 0xfc NEW_2
	var_510_bool = var_508_bool == 0; // 0xfe Not
	if(var_510_bool == 0) goto Label_257; // 0xff JumpB
	goto Label_259; // 0x100 Jump
	
Label_257:
	var_38_bool = 1; // 0x101 MovB
	
Label_84:
	var_38_bool = 1; // 0x54 MovB
	
Label_61:
	var_34_float = var_22_float; // 0x3d Mov
}


func_689(var_0_object)
{
	var_116_object = Obj(); // 0x2b1 PushV
	var_116_object = var_0_object; // 0x2b2 MovT
	func_1506(var_116_object); // 0x2b3 NEW_2
	return 0; // 0x2b5 Return
}


func_1462(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x5b6 PushV
	self(var_11_object); // 0x5b7 Func
	var_9_object = var_11_object; // 0x5b9 Mov
	return 2; // 0x5ba Return
}


func_694(var_453_int)
{
	var_453_int = 0; // 0x2b6 MovI
	return 0; // 0x2b7 Return
}


func_696()
{
	var_249_string = ""; // 0x2b8 PushV
	var_249_string = "attack_stay"; // 0x2b9 MovS
	func_1421(var_249_string); // 0x2ba NEW_2
	return 0; // 0x2bc Return
}


func_311(var_0_object, var_378_float, var_379_int)
{
	var_380_object = Obj(); var_381_float = 0; var_382_float = 0; var_383_object = Obj(); var_384_float = 0; var_385_float = 0; // 0x137 PushV
	var_386_float = 0.9; // 0x138 PushF
	var_387_float = var_378_float * var_386_float; // 0x139 Mult
	GetVictim(var_387_float, var_383_object); // 0x13a Func
	ReportAttack(var_0_object); // 0x13c Func
	var_388_bool = var_383_object == var_0_object; // 0x13e Eq
	if(var_388_bool == 0) goto Label_348; // 0x13f JumpB
	var_389_float = 0; var_390_object = Obj(); var_391_int = 0; // 0x140 PushV
	var_390_object = var_383_object; // 0x141 Mov
	var_391_int = var_379_int; // 0x142 Mov
	func_41(var_391_int); // 0x143 NEW_2
	var_384_float = var_389_float; // 0x144 Mov
	var_392_float = 0; var_393_object = Obj(); var_394_float = 0; var_395_int = 0; // 0x146 PushV
	var_393_object = var_383_object; // 0x147 Mov
	var_394_float = var_384_float; // 0x148 Mov
	var_396_int = 0; var_397_object = Obj(); var_398_int = 0; // 0x149 PushV
	var_397_object = var_383_object; // 0x14a Mov
	var_398_int = var_379_int; // 0x14b Mov
	func_44(var_398_int); // 0x14c NEW_2
	var_395_int = var_396_int; // 0x14d Mov
	func_1135(var_392_float, var_393_object, var_394_float, var_395_int); // 0x14f NEW_2
	var_385_float = var_392_float; // 0x150 Mov
	var_453_int = 0; // 0x152 PushV
	func_694(var_453_int); // 0x153 NEW_2
	ReportHit(var_0_object, var_453_int, var_385_float, var_384_float); // 0x155 Func
	var_454_object = Obj(); var_455_float = 0; // 0x157 PushV
	var_454_object = var_383_object; // 0x158 Mov
	var_455_float = var_385_float; // 0x159 Mov
	func_701(); // 0x15a NEW_2
	
Label_348:
	return 6; // 0x15c Return
}


func_954(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x3bb PushV
	var_23_object = var_21_object; // 0x3bc Mov
	func_1249(var_22_bool, var_23_object); // 0x3bd NEW_2
	var_20_bool = var_22_bool; // 0x3be Mov
	return 0; // 0x3c0 Return
}


func_1208(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x4b8 PushV
	IsDead(var_40_bool); // 0x4b9 ObjFunc
	var_37_bool = var_40_bool; // 0x4bb Mov
	return 2; // 0x4bc Return
}


func_1468(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x5bc PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x5bd Or
	var_50_float = sqrt(var_51_int); // 0x5be Sqrt2
	var_52_float = 0.0; // 0x5bf PushF
	var_53_bool = var_50_float < var_52_float; // 0x5c0 LT
	if(var_53_bool == 0) goto Label_1476; // 0x5c1 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5c2 MovV
	return 2; // 0x5c3 Return
	
Label_1476:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x5c4 Div2
	return 2; // 0x5c5 Return
}


func_701()
{
	return 0; // 0x2be Return
}


func_1213(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x4bd PushV
	var_32_bool = var_27_object == 0; // 0x4be NullEq
	if(var_32_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_26_bool = 0; // 0x4c0 MovB
	return 4; // 0x4c1 Return
	
Label_1218:
	var_33_bool = 0; // 0x4c2 PushV
	var_33_bool = 0; // 0x4c3 MovB
	var_34_string = "IsDead"; // 0x4c4 PushS
	var_35_int = 1; // 0x4c5 PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x4c6 FuncExist
	if(var_36_bool == 0) goto Label_1230; // 0x4c7 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x4c8 PushV
	var_38_object = var_27_object; // 0x4c9 Mov
	func_1208(var_38_object); // 0x4ca NEW_2
	if(var_37_bool == 0) goto Label_1230; // 0x4cc JumpB
	var_33_bool = 1; // 0x4cd MovB
	
Label_1230:
	if(var_33_bool == 0) goto Label_1233; // 0x4ce JumpB
	var_26_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1233:
	GetScene(var_30_object); // 0x4d1 Func
	var_41_bool = var_30_object == 0; // 0x4d3 NullEq
	if(var_41_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_26_bool = 0; // 0x4d5 MovB
	return 4; // 0x4d6 Return
	
Label_1239:
	GetScene(var_31_object); // 0x4d7 ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x4d9 Neq
	if(var_42_bool == 0) goto Label_1245; // 0x4da JumpB
	var_26_bool = 0; // 0x4db MovB
	return 4; // 0x4dc Return
	
Label_1245:
	var_26_bool = 1; // 0x4dd MovB
	return 4; // 0x4de Return
}


func_703(var_478_bool)
{
	var_478_bool = 1; // 0x2bf MovB
	return 0; // 0x2c0 Return
}


func_705(var_374_int)
{
	var_374_int = 1; // 0x2c1 MovI
	return 0; // 0x2c2 Return
}


func_961(var_192_string)
{
	var_192_string = "walk"; // 0x3c1 MovS
	return 0; // 0x3c2 Return
}


func_707(var_369_float)
{
	var_369_float = 0.5; // 0x2c3 MovF
	return 0; // 0x2c4 Return
}


func_963(var_193_string)
{
	var_193_string = "run"; // 0x3c3 MovS
	return 0; // 0x3c4 Return
}


func_709(var_2_int, var_123_bool, var_124_object, var_125_float, var_126_float, var_127_bool, var_128_bool)
{
	var_132_bool = 0; var_133_bool = 0; var_134_bool = 0; var_135_bool = 0; // 0x2c5 PushV
	var_136_object = Obj(); // 0x2c6 PushV
	var_136_object = var_124_object; // 0x2c7 Mov
	func_1506(var_136_object); // 0x2c8 NEW_2
	var_137_int = 1; // 0x2ca PushI
	var_138_int = 5; // 0x2cb PushI
	SetTimer(var_137_int, var_138_int); // 0x2cc Func
	CanSee(var_134_bool, var_124_object); // 0x2ce Func
	var_139_bool = var_134_bool; // 0x2d0 Push
	if(var_139_bool == 0) goto Label_728; // 0x2d1 JumpB
	var_2_int = 1; // 0x2d2 TMovB
	var_140_object = Obj(); // 0x2d3 PushV
	var_140_object = var_124_object; // 0x2d4 Mov
	func_1410(var_140_object); // 0x2d5 NEW_2
	goto Label_729; // 0x2d7 Jump
	
Label_729:
	var_147_bool = 0; var_148_object = Obj(); // 0x2d9 PushV
	var_148_object = var_124_object; // 0x2da Mov
	func_1118(var_147_bool, var_148_object); // 0x2db NEW_2
	if(var_147_bool == 0) goto Label_739; // 0x2dd JumpB
	var_151_object = Obj(); // 0x2de PushV
	func_1462(var_151_object); // 0x2df NEW_2
	SendPlayerEnemy(var_124_object, var_151_object); // 0x2e1 Func
	
Label_739:
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0; // 0x2e3 PushV
	var_153_object = var_124_object; // 0x2e4 Mov
	var_154_float = var_125_float; // 0x2e5 Mov
	var_155_float = var_126_float; // 0x2e6 Mov
	var_156_bool = var_127_bool; // 0x2e7 Mov
	var_157_bool = var_128_bool; // 0x2e8 Mov
	func_814(var_134_bool, var_135_bool, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool); // 0x2e9 NEW_2
	var_135_bool = var_152_bool; // 0x2ea Mov
	var_203_int = var_2_int; // 0x2ec PushT
	if(var_203_int == 0) goto Label_753; // 0x2ed JumpB
	var_204_string = "head"; // 0x2ee PushS
	UnlookAsync(var_204_string); // 0x2ef Func
	
Label_753:
	var_205_int = 1; // 0x2f1 PushI
	KillTimer(var_205_int); // 0x2f2 Func
	var_123_bool = var_135_bool; // 0x2f4 Mov
	return 4; // 0x2f5 Return
	
Label_728:
	var_2_int = 0; // 0x2d8 TMovB
}


func_1478(var_430_float, var_431_float, var_432_float)
{
	var_435_bool = var_431_float < var_432_float; // 0x5c7 LT
	if(var_435_bool == 0) goto Label_1483; // 0x5c8 JumpB
	var_430_float = var_431_float; // 0x5c9 Mov
	goto Label_1484; // 0x5ca Jump
	
Label_1484:
	return 0; // 0x5cc Return
	
Label_1483:
	var_430_float = var_432_float; // 0x5cb Mov
}


func_965(var_11_object)
{
	var_12_object = Obj(); // 0x3c6 PushV
	var_12_object = var_11_object; // 0x3c7 Mov
	func_974(var_12_object); // 0x3c8 NEW_2
	
Label_970:
	Hold(); // 0x3ca Func
	goto Label_970; // 0x3cc Jump
}


func_585(var_293_bool)
{
	var_294_bool = 0; // 0x249 PushV
	var_294_bool = 0; // 0x24a MovB
	var_295_bool = 0; // 0x24b PushV
	func_557(var_294_bool, var_295_bool); // 0x24c NEW_2
	if(var_295_bool == 0) goto Label_596; // 0x24e JumpB
	var_312_bool = 0; // 0x24f PushV
	func_601(var_293_bool, var_294_bool, var_312_bool); // 0x250 NEW_2
	if(var_312_bool == 0) goto Label_596; // 0x252 JumpB
	var_294_bool = 1; // 0x253 MovB
	
Label_596:
	if(var_294_bool == 0) goto Label_599; // 0x254 JumpB
	var_293_bool = 1; // 0x255 MovB
	return 0; // 0x256 Return
	
Label_599:
	var_293_bool = 0; // 0x257 MovB
	return 0; // 0x258 Return
}


func_1097(var_420_string, var_421_int)
{
	var_422_int = 2; // 0x44a PushI
	var_423_bool = var_421_int == var_422_int; // 0x44b Eq
	if(var_423_bool == 0) goto Label_1104; // 0x44c JumpB
	var_420_string = "fire"; // 0x44d MovS
	return 0; // 0x44e Return
	
Label_1104:
	var_424_int = 1; // 0x450 PushI
	var_425_bool = var_421_int == var_424_int; // 0x451 Eq
	if(var_425_bool == 0) goto Label_1109; // 0x452 JumpB
	var_420_string = "bullet"; // 0x453 MovS
	return 0; // 0x454 Return
	
Label_1109:
	var_420_string = "phys"; // 0x455 MovS
	return 0; // 0x456 Return
}


func_1485(var_440_float, var_441_float, var_442_float, var_443_float)
{
	var_444_bool = var_441_float < var_442_float; // 0x5ce LT
	if(var_444_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_440_float = var_442_float; // 0x5d0 Mov
	return 0; // 0x5d1 Return
	
Label_1490:
	var_445_bool = var_441_float > var_443_float; // 0x5d2 GT
	if(var_445_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_440_float = var_443_float; // 0x5d4 Mov
	return 0; // 0x5d5 Return
	
Label_1494:
	var_440_float = var_441_float; // 0x5d6 Mov
	return 0; // 0x5d7 Return
}


func_974(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); // 0x3ce PushV
	var_33_bool = var_12_object == 0; // 0x3cf NullEq
	if(var_33_bool == 0) goto Label_982; // 0x3d0 JumpB
	var_34_string = ""; // 0x3d1 PushV
	var_34_string = "fdie"; // 0x3d2 MovS
	func_1065(var_34_string); // 0x3d3 NEW_2
	goto Label_1064; // 0x3d5 Jump
	
Label_1064:
	return 20; // 0x428 Return
	
Label_982:
	GetPosition(var_23_cvector); // 0x3d6 ObjFunc
	GetPosition(var_24_cvector); // 0x3d8 Func
	GetDirection(var_25_cvector); // 0x3da Func
	var_26_cvector = var_24_cvector - var_23_cvector; // 0x3dc Sub2
	var_66_float = GetByIndex(var_26_cvector, 0); // 0x3dd PushE
	var_67_float = GetByIndex(var_25_cvector, 0); // 0x3de PushE
	var_68_float = var_66_float * var_67_float; // 0x3df Mult
	var_69_float = GetByIndex(var_26_cvector, 2); // 0x3e0 PushE
	var_70_float = GetByIndex(var_25_cvector, 2); // 0x3e1 PushE
	var_71_float = var_69_float * var_70_float; // 0x3e2 Mult
	var_72_int = var_68_float + var_71_float; // 0x3e3 Add
	var_73_int = 0; // 0x3e4 PushI
	var_74_bool = var_72_int >= var_73_int; // 0x3e5 GE
	if(var_74_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_27_string = "fdie"; // 0x3e7 MovS
	goto Label_1002; // 0x3e8 Jump
	
Label_1002:
	RemoveRTEnvelope(); // 0x3ea Func
	SetDeathState(); // 0x3ec Func
	Stop(); // 0x3ee Func
	StopAsync(); // 0x3f0 Func
	var_28_object = var_12_object; // 0x3f2 Mov
	var_75_string = "GetScriptProperty"; // 0x3f3 PushS
	var_76_int = 2; // 0x3f4 PushI
	var_77_bool = IsFuncExist(var_12_object, var_75_string, var_76_int); // 0x3f5 FuncExist
	if(var_77_bool == 0) goto Label_1026; // 0x3f6 JumpB
	var_78_string = "Owner"; // 0x3f7 PushS
	HasScriptProperty(var_29_bool, var_78_string); // 0x3f8 ObjFunc
	var_79_bool = var_29_bool; // 0x3fa Push
	if(var_79_bool == 0) goto Label_1026; // 0x3fb JumpB
	var_80_string = "Owner"; // 0x3fc PushS
	GetScriptProperty(var_28_object, var_80_string); // 0x3fd ObjFunc
	var_81_bool = var_28_object == 0; // 0x3ff NullEq
	if(var_81_bool == 0) goto Label_1026; // 0x400 JumpB
	var_28_object = var_12_object; // 0x401 Mov
	
Label_1026:
	var_82_string = "@GetEyesHeight"; // 0x402 PushS
	var_83_int = 1; // 0x403 PushI
	var_84_bool = IsFuncExist(var_28_object, var_82_string, var_83_int); // 0x404 FuncExist
	if(var_84_bool == 0) goto Label_1041; // 0x405 JumpB
	GetEyesHeight(var_31_float); // 0x406 ObjFunc
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x408 MovV
	var_85_float = GetByIndex(var_32_cvector, 1); // 0x409 PushE
	var_85_float = var_31_float; // 0x40a Mov
	SetByIndex(var_32_cvector, 1) = var_85_float; // 0x40b PopE
	var_86_string = "head"; // 0x40c PushS
	LookAsync(var_12_object, var_86_string, var_32_cvector); // 0x40d Func
	var_30_bool = 1; // 0x40f MovB
	goto Label_1042; // 0x410 Jump
	
Label_1042:
	var_87_string = ""; // 0x412 PushV
	var_87_string = var_27_string; // 0x413 Mov
	func_1421(var_87_string); // 0x414 NEW_2
	var_88_string = "all"; // 0x416 PushS
	PlayAnimation(var_88_string, var_27_string); // 0x417 Func
	WaitForAnimEnd(); // 0x419 Func
	var_89_bool = var_30_bool; // 0x41b Push
	if(var_89_bool == 0) goto Label_1058; // 0x41c JumpB
	StopAsync(); // 0x41d Func
	var_90_string = "head"; // 0x41f PushS
	UnlookAsync(var_90_string); // 0x420 Func
	
Label_1058:
	var_91_string = "all"; // 0x422 PushS
	LockAnimationEnd(var_91_string, var_27_string); // 0x423 Func
	RemoveEnvelope(); // 0x425 Func
	var_28_object = 0; // 0x427 SetNull
	
Label_1041:
	var_30_bool = 0; // 0x411 MovB
	
Label_1001:
	var_27_string = "bdie"; // 0x3e9 MovS
}


func_1111(var_43_cvector)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x457 PushV
	GetPosition(var_47_cvector); // 0x458 Func
	GetPosition(var_48_cvector); // 0x45a ObjFunc
	var_43_cvector = var_48_cvector - var_47_cvector; // 0x45c Sub2
	return 4; // 0x45d Return
}


func_1496(var_448_float)
{
	var_449_object = Obj(); var_450_object = Obj(); // 0x5d8 PushV
	CreateFloatVector(var_450_object); // 0x5d9 Func
	add(var_448_float); // 0x5db ObjFunc
	var_451_int = 15; // 0x5dd PushI
	SendWorldWndMessage(var_451_int, var_450_object); // 0x5de Func
	return 2; // 0x5e0 Return
}


func_601(var_0_object, var_4_float, var_312_bool)
{
	var_313_object = Obj(); var_314_bool = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_object = Obj(); var_319_bool = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); // 0x259 PushV
	GetScene(var_318_object); // 0x25a Func
	var_319_bool = 0; // 0x25c MovB
	
Label_605:
	var_323_cvector = CVector(0,0,0); var_324_object = Obj(); // 0x25d PushV
	var_324_object = var_0_object; // 0x25e MovT
	func_1111(var_324_object); // 0x25f NEW_2
	var_329_int = -var_323_cvector; // 0x261 Neg
	FindDirLength(var_320_float, var_329_int, var_320_float); // 0x262 Func
	var_330_bool = var_320_float < var_4_float; // 0x264 LT
	if(var_330_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_643; // 0x266 Jump
	
Label_643:
	var_312_bool = var_319_bool; // 0x283 Mov
	return 10; // 0x284 Return
	
Label_615:
	Face(var_0_object); // 0x267 Func
	var_331_string = "all"; // 0x269 PushS
	var_332_string = "bjump"; // 0x26a PushS
	PlayAnimation(var_331_string, var_332_string); // 0x26b Func
	GetPFPosition(var_321_cvector); // 0x26d TObjFunc
	GetPFPosition(var_322_cvector); // 0x26f Func
	WaitForAnimEnd(); // 0x271 Func
	func_689(var_322_cvector); // 0x274 NEW_2
	StopAsync(); // 0x276 Func
	var_333_cvector = CVector(0.0, 0.0, 0.0); // 0x278 PushVec
	SetSpeed(var_333_cvector); // 0x279 Func
	var_319_bool = 1; // 0x27b MovB
	var_334_bool = 0; // 0x27c PushV
	func_557(var_322_cvector, var_334_bool); // 0x27d NEW_2
	var_335_bool = var_334_bool == 0; // 0x27f Not
	if(var_335_bool == 0) goto Label_642; // 0x280 JumpB
	goto Label_643; // 0x281 Jump
	
Label_642:
	goto Label_605; // 0x282 Jump
}


func_350(var_0_object, var_341_bool, var_342_float)
{
	var_343_int = 0; var_344_bool = 0; var_345_int = 0; var_346_string = ""; var_347_int = 0; var_348_bool = 0; var_349_int = 0; var_350_string = ""; // 0x15e PushV
	func_689(var_350_string); // 0x160 NEW_2
	irand(var_347_int, var_350_string); // 0x162 Func
	var_351_int = 1; // 0x164 PushI
	var_347_int = var_347_int + var_351_int; // 0x165 Add2
	Face(var_0_object); // 0x166 Func
	var_352_bool = 1; // 0x168 PushB
	SetAttackState(var_352_bool); // 0x169 Func
	func_1515(); // 0x16c NEW_2
	var_357_string = "all"; // 0x16e PushS
	var_358_string = "attack_begin"; // 0x16f PushS
	var_359_int = var_358_string + var_347_int; // 0x170 Add
	PlayAnimation(var_357_string, var_359_int); // 0x171 Func
	WaitForAnimEnd(); // 0x173 Func
	func_657(var_349_int, var_350_string); // 0x176 NEW_2
	var_375_bool = 0; var_376_object = Obj(); // 0x178 PushV
	var_376_object = var_0_object; // 0x179 MovT
	func_1249(var_375_bool, var_376_object); // 0x17a NEW_2
	var_377_bool = var_375_bool == 0; // 0x17c Not
	if(var_377_bool == 0) goto Label_386; // 0x17d JumpB
	StopAsync(); // 0x17e Func
	var_341_bool = 0; // 0x180 MovB
	return 8; // 0x181 Return
	
Label_386:
	var_378_float = 0; var_379_int = 0; // 0x182 PushV
	var_378_float = var_342_float; // 0x183 Mov
	var_379_int = var_347_int; // 0x184 Mov
	func_311(var_350_string, var_378_float, var_379_int); // 0x185 NEW_2
	var_456_string = "all"; // 0x187 PushS
	var_457_string = "attack_middle"; // 0x188 PushS
	var_458_int = var_457_string + var_347_int; // 0x189 Add
	HasAnimation(var_348_bool, var_456_string, var_458_int); // 0x18a Func
	var_459_bool = var_348_bool; // 0x18c Push
	if(var_459_bool == 0) goto Label_467; // 0x18d JumpB
	func_1515(); // 0x18f NEW_2
	var_460_string = "all"; // 0x191 PushS
	var_461_string = "attack_middle"; // 0x192 PushS
	var_462_int = var_461_string + var_347_int; // 0x193 Add
	PlayAnimation(var_460_string, var_462_int); // 0x194 Func
	WaitForAnimEnd(); // 0x196 Func
	func_689(var_350_string); // 0x199 NEW_2
	var_463_bool = 0; var_464_object = Obj(); // 0x19b PushV
	var_464_object = var_0_object; // 0x19c MovT
	func_1249(var_463_bool, var_464_object); // 0x19d NEW_2
	var_465_bool = var_463_bool == 0; // 0x19f Not
	if(var_465_bool == 0) goto Label_421; // 0x1a0 JumpB
	StopAsync(); // 0x1a1 Func
	var_341_bool = 0; // 0x1a3 MovB
	return 8; // 0x1a4 Return
	
Label_421:
	var_466_float = 0; var_467_int = 0; // 0x1a5 PushV
	var_466_float = var_342_float; // 0x1a6 Mov
	var_467_int = var_347_int; // 0x1a7 Mov
	func_311(var_350_string, var_466_float, var_467_int); // 0x1a8 NEW_2
	var_349_int = 1; // 0x1aa MovI
	
Label_427:
	var_468_string = "attack_middle"; // 0x1ab PushS
	var_469_int = var_468_string + var_347_int; // 0x1ac Add
	var_470_string = "_"; // 0x1ad PushS
	var_471_int = var_469_int + var_470_string; // 0x1ae Add
	var_350_string = var_471_int + var_349_int; // 0x1af Add2
	var_472_string = "all"; // 0x1b0 PushS
	HasAnimation(var_348_bool, var_472_string, var_350_string); // 0x1b1 Func
	var_473_bool = var_348_bool == 0; // 0x1b3 Not
	if(var_473_bool == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_467; // 0x1b5 Jump
	
Label_467:
	var_474_bool = 0; // 0x1d3 PushB
	SetAttackState(var_474_bool); // 0x1d4 Func
	var_475_string = "all"; // 0x1d6 PushS
	var_476_string = "attack_end"; // 0x1d7 PushS
	var_477_int = var_476_string + var_347_int; // 0x1d8 Add
	PlayAnimation(var_475_string, var_477_int); // 0x1d9 Func
	var_478_bool = 0; // 0x1db PushV
	func_703(var_478_bool); // 0x1dc NEW_2
	if(var_478_bool == 0) goto Label_485; // 0x1de JumpB
	var_479_bool = 0; var_480_float = 0; // 0x1df PushV
	var_480_float = 0.75; // 0x1e0 MovF
	func_487(var_479_bool, var_480_float); // 0x1e1 NEW_2
	StopAsync(); // 0x1e3 Func
	
Label_485:
	var_341_bool = 1; // 0x1e5 MovB
	return 8; // 0x1e6 Return
	
Label_438:
	func_1515(); // 0x1b7 NEW_2
	var_488_string = "all"; // 0x1b9 PushS
	PlayAnimation(var_488_string, var_350_string); // 0x1ba Func
	WaitForAnimEnd(); // 0x1bc Func
	func_689(var_350_string); // 0x1bf NEW_2
	var_489_bool = 0; var_490_object = Obj(); // 0x1c1 PushV
	var_490_object = var_0_object; // 0x1c2 MovT
	func_1249(var_489_bool, var_490_object); // 0x1c3 NEW_2
	var_491_bool = var_489_bool == 0; // 0x1c5 Not
	if(var_491_bool == 0) goto Label_459; // 0x1c6 JumpB
	StopAsync(); // 0x1c7 Func
	var_341_bool = 0; // 0x1c9 MovB
	return 8; // 0x1ca Return
	
Label_459:
	var_492_float = 0; var_493_int = 0; // 0x1cb PushV
	var_492_float = var_342_float; // 0x1cc Mov
	var_493_int = var_347_int; // 0x1cd Mov
	func_311(var_350_string, var_492_float, var_493_int); // 0x1ce NEW_2
	var_494_int = 1; // 0x1d0 PushI
	var_349_int = var_349_int + var_494_int; // 0x1d1 Add2
	goto Label_427; // 0x1d2 Jump
}


func_1118(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_bool = 0; // 0x45e PushV
	IsPlayerActor(var_148_object, var_150_bool); // 0x45f Func
	var_147_bool = var_150_bool; // 0x461 Mov
	return 2; // 0x462 Return
}


func_1249(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x4e1 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x4e2 PushV
	var_27_object = var_23_object; // 0x4e3 Mov
	func_1213(var_26_bool, var_27_object); // 0x4e4 NEW_2
	var_43_bool = var_26_bool == 0; // 0x4e6 Not
	if(var_43_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_22_bool = 0; // 0x4e8 MovB
	return 2; // 0x4e9 Return
	
Label_1258:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x4ea PushV
	var_45_object = var_23_object; // 0x4eb Mov
	var_46_string = "noaccess"; // 0x4ec MovS
	func_1123(var_44_bool, var_45_object, var_46_string); // 0x4ed NEW_2
	var_53_bool = var_44_bool == 0; // 0x4ef Not
	if(var_53_bool == 0) goto Label_1267; // 0x4f0 JumpB
	var_22_bool = 1; // 0x4f1 MovB
	return 2; // 0x4f2 Return
	
Label_1267:
	var_54_string = "noaccess"; // 0x4f3 PushS
	GetProperty(var_54_string, var_25_int); // 0x4f4 ObjFunc
	var_55_int = 0; // 0x4f6 PushI
	var_22_bool = var_25_int == var_55_int; // 0x4f7 Eq2
	return 2; // 0x4f8 Return
}


func_1506(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x5e2 PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x5e3 Func
	var_15_bool = var_14_bool; // 0x5e5 Push
	if(var_15_bool == 0) goto Label_1514; // 0x5e6 JumpB
	var_16_string = "attack"; // 0x5e7 PushS
	PlayGlobalMusic(var_16_string); // 0x5e8 Func
	
Label_1514:
	return 2; // 0x5ea Return
}


func_1123(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0; // 0x463 PushV
	var_49_string = "HasProperty"; // 0x464 PushS
	var_50_int = 2; // 0x465 PushI
	var_51_bool = IsFuncExist(var_45_object, var_49_string, var_50_int); // 0x466 FuncExist
	var_52_bool = var_51_bool == 0; // 0x467 Not
	if(var_52_bool == 0) goto Label_1131; // 0x468 JumpB
	var_44_bool = 0; // 0x469 MovB
	return 2; // 0x46a Return
	
Label_1131:
	HasProperty(var_46_string, var_48_bool); // 0x46b ObjFunc
	var_44_bool = var_48_bool; // 0x46d Mov
	return 2; // 0x46e Return
}


func_487(var_479_bool, var_480_float)
{
	var_481_float = 0; var_482_bool = 0; var_483_float = 0; var_484_bool = 0; // 0x1e7 PushV
	rand(var_483_float); // 0x1e8 Func
	var_485_bool = var_483_float < var_480_float; // 0x1ea LT
	if(var_485_bool == 0) goto Label_507; // 0x1eb JumpB
	
Label_492:
	IsAnimationPlaying(var_484_bool); // 0x1ec Func
	var_486_bool = var_484_bool == 0; // 0x1ee Not
	if(var_486_bool == 0) goto Label_497; // 0x1ef JumpB
	goto Label_506; // 0x1f0 Jump
	
Label_506:
	goto Label_512; // 0x1fa Jump
	
Label_512:
	var_479_bool = 0; // 0x200 MovB
	return 4; // 0x201 Return
	
Label_497:
	var_487_bool = 0; // 0x1f1 PushV
	func_585(var_487_bool); // 0x1f2 NEW_2
	if(var_487_bool == 0) goto Label_503; // 0x1f4 JumpB
	var_479_bool = 1; // 0x1f5 MovB
	return 4; // 0x1f6 Return
	
Label_503:
	sync(); // 0x1f7 Func
	goto Label_492; // 0x1f9 Jump
	
Label_507:
	WaitForAnimEnd(); // 0x1fb Func
	func_689(var_484_bool); // 0x1fe NEW_2
}


func_1385(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x569 PushV
	GetScene(var_22_object); // 0x56a Func
	var_24_string = "scripted"; // 0x56c PushS
	var_25_string = "blood_dir.xml"; // 0x56d PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x56e Func
	var_26_object = Obj(); // 0x570 PushV
	var_26_object = var_15_object; // 0x571 Mov
	func_1273(var_26_object); // 0x572 NEW_2
	return 4; // 0x574 Return
}


func_1515()
{
	var_353_object = Obj(); var_354_object = Obj(); // 0x5eb PushV
	GetScene(var_354_object); // 0x5ec Func
	var_355_string = "battle"; // 0x5ee PushS
	var_356_object = Obj(); // 0x5ef PushV
	func_1462(var_356_object); // 0x5f0 NEW_2
	BroadcastMessage(var_355_string, var_356_object, var_354_object); // 0x5f2 Func
	return 2; // 0x5f4 Return
}


func_1135(var_392_float, var_393_object, var_394_float, var_395_int)
{
	var_399_int = 0; var_400_string = ""; var_401_int = 0; var_402_float = 0; var_403_float = 0; var_404_float = 0; var_405_int = 0; var_406_string = ""; var_407_int = 0; var_408_float = 0; var_409_float = 0; var_410_float = 0; // 0x46f PushV
	var_411_bool = 0; var_412_object = Obj(); var_413_string = ""; // 0x470 PushV
	var_412_object = var_393_object; // 0x471 Mov
	var_413_string = "health"; // 0x472 MovS
	func_1123(var_411_bool, var_412_object, var_413_string); // 0x473 NEW_2
	var_414_bool = var_411_bool == 0; // 0x475 Not
	if(var_414_bool == 0) goto Label_1145; // 0x476 JumpB
	var_392_float = 0.0; // 0x477 MovF
	return 12; // 0x478 Return
	
Label_1145:
	var_415_bool = 0; var_416_object = Obj(); var_417_string = ""; // 0x479 PushV
	var_416_object = var_393_object; // 0x47a Mov
	var_417_string = "armor"; // 0x47b MovS
	func_1123(var_415_bool, var_416_object, var_417_string); // 0x47c NEW_2
	var_418_bool = var_415_bool == 0; // 0x47e Not
	if(var_418_bool == 0) goto Label_1154; // 0x47f JumpB
	var_405_int = 0; // 0x480 MovI
	goto Label_1157; // 0x481 Jump
	
Label_1157:
	var_419_string = "armor_"; // 0x485 PushS
	var_420_string = ""; var_421_int = 0; // 0x486 PushV
	var_421_int = var_395_int; // 0x487 Mov
	func_1097(var_420_string, var_421_int); // 0x488 NEW_2
	var_406_string = var_419_string + var_420_string; // 0x48a Add2
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x48b PushV
	var_427_object = var_393_object; // 0x48c Mov
	var_428_string = var_406_string; // 0x48d Mov
	func_1123(var_426_bool, var_427_object, var_428_string); // 0x48e NEW_2
	var_429_bool = var_426_bool == 0; // 0x490 Not
	if(var_429_bool == 0) goto Label_1172; // 0x491 JumpB
	var_407_int = 0; // 0x492 MovI
	goto Label_1174; // 0x493 Jump
	
Label_1174:
	var_430_float = 0; var_431_float = 0; var_432_float = 0; // 0x496 PushV
	var_433_int = var_405_int + var_407_int; // 0x497 Add
	var_434_float = 100.0; // 0x498 PushF
	var_431_float = var_433_int / var_433_int; // 0x499 Div2
	var_432_float = 1; // 0x49a MovI
	func_1478(var_430_float, var_431_float, var_432_float); // 0x49b NEW_2
	var_408_float = var_430_float; // 0x49c Mov
	var_436_string = "health"; // 0x49e PushS
	GetProperty(var_436_string, var_409_float); // 0x49f ObjFunc
	var_437_int = 1; // 0x4a1 PushI
	var_438_int = var_437_int - var_408_float; // 0x4a2 Sub
	var_410_float = var_394_float * var_438_int; // 0x4a3 Mult2
	var_439_string = "health"; // 0x4a4 PushS
	var_440_float = 0; var_441_float = 0; var_442_float = 0; var_443_float = 0; // 0x4a5 PushV
	var_441_float = var_409_float - var_410_float; // 0x4a6 Sub2
	var_442_float = 0; // 0x4a7 MovI
	var_443_float = 1; // 0x4a8 MovI
	func_1485(var_440_float, var_441_float, var_442_float, var_443_float); // 0x4a9 NEW_2
	SetProperty(var_439_string, var_440_float); // 0x4ab ObjFunc
	var_446_bool = 0; var_447_object = Obj(); // 0x4ad PushV
	var_447_object = var_393_object; // 0x4ae Mov
	func_1118(var_446_bool, var_447_object); // 0x4af NEW_2
	if(var_446_bool == 0) goto Label_1206; // 0x4b1 JumpB
	var_448_float = 0; // 0x4b2 PushV
	var_448_float = -var_410_float; // 0x4b3 Neg2
	func_1496(var_448_float); // 0x4b4 NEW_2
	
Label_1206:
	var_392_float = var_410_float; // 0x4b6 Mov
	return 12; // 0x4b7 Return
	
Label_1172:
	GetProperty(var_406_string, var_407_int); // 0x494 ObjFunc
	
Label_1154:
	var_452_string = "armor"; // 0x482 PushS
	GetProperty(var_452_string, var_405_int); // 0x483 ObjFunc
}


func_1399()
{
	var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); // 0x577 PushV
	GetPosition(var_230_cvector); // 0x578 ObjFunc
	GetPosition(var_231_cvector); // 0x57a Func
	var_232_cvector = var_230_cvector - var_231_cvector; // 0x57c Sub2
	var_233_float = GetByIndex(var_232_cvector, 0); // 0x57d PushE
	var_234_float = GetByIndex(var_232_cvector, 2); // 0x57e PushE
	RotateAsync(var_233_float, var_234_float); // 0x57f Func
	return 6; // 0x581 Return
}


func_1273(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x4f9 PushV
	var_41_bool = var_26_object == 0; // 0x4fa NullEq
	if(var_41_bool == 0) goto Label_1277; // 0x4fb JumpB
	return 14; // 0x4fc Return
	
Label_1277:
	IsDead(var_34_bool); // 0x4fd Func
	var_42_bool = var_34_bool; // 0x4ff Push
	if(var_42_bool == 0) goto Label_1282; // 0x500 JumpB
	return 14; // 0x501 Return
	
Label_1282:
	GetSecondaryAnimationType(var_35_int); // 0x502 Func
	var_43_int = 0; // 0x504 PushI
	var_44_bool = var_35_int < var_43_int; // 0x505 LT
	if(var_44_bool == 0) goto Label_1288; // 0x506 JumpB
	return 14; // 0x507 Return
	
Label_1288:
	GetPosition(var_36_cvector); // 0x508 ObjFunc
	GetPosition(var_37_cvector); // 0x50a Func
	GetDirection(var_38_cvector); // 0x50c Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x50e Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x50f PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x510 PushE
	var_47_float = var_45_float * var_46_float; // 0x511 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x512 PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x513 PushE
	var_50_float = var_48_float * var_49_float; // 0x514 Mult
	var_51_int = var_47_float + var_50_float; // 0x515 Add
	var_52_int = 0; // 0x516 PushI
	var_53_bool = var_51_int >= var_52_int; // 0x517 GE
	if(var_53_bool == 0) goto Label_1307; // 0x518 JumpB
	var_40_string = "fhit"; // 0x519 MovS
	goto Label_1308; // 0x51a Jump
	
Label_1308:
	var_54_string = "hit_react"; // 0x51c PushS
	var_55_string = "1"; // 0x51d PushS
	var_56_int = var_40_string + var_55_string; // 0x51e Add
	var_57_string = "2"; // 0x51f PushS
	var_58_int = var_40_string + var_57_string; // 0x520 Add
	var_59_int = -10; // 0x521 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x522 Func
	return 14; // 0x524 Return
	
Label_1307:
	var_40_string = "bhit"; // 0x51b MovS
}


func_1534(var_10_object)
{
	var_11_object = Obj(); // 0x5ff PushV
	var_11_object = var_10_object; // 0x600 Mov
	TaskCall(3); // 0x601 TaskCall
	func_965(var_11_object); // 0x602 NEW_2
	TaskReturn(); // 0x603 TaskReturn
	return 0; // 0x605 Return
}


