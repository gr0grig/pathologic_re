task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0; // 0x7f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0; // 0x81 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	return 0; // 0x83 Return
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x372 PushI
	var_11_bool = var_9_int == var_10_int; // 0x373 Eq
	if(var_11_bool == 0) goto Label_890; // 0x374 JumpB
	var_12_object = Obj(); // 0x375 PushV
	var_12_object = var_1_int; // 0x376 MovT
	func_1466(var_12_object); // 0x377 NEW_2
	goto Label_894; // 0x379 Jump
	
Label_894:
	return 0; // 0x37e Return
	
Label_890:
	var_17_int = 0; // 0x37a PushV
	var_17_int = var_9_int; // 0x37b Mov
	func_1039(var_8_bool, var_9_int, var_17_int); // 0x37c NEW_2
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x38d PushV
	var_10_bool = 0; // 0x38e MovB
	var_11_bool = var_1_int == var_9_object; // 0x38f Eq
	if(var_11_bool == 0) goto Label_916; // 0x390 JumpB
	var_12_bool = var_2_int == 0; // 0x391 Not
	if(var_12_bool == 0) goto Label_916; // 0x392 JumpB
	var_10_bool = 1; // 0x393 MovB
	
Label_916:
	if(var_10_bool == 0) goto Label_922; // 0x394 JumpB
	var_2_int = 1; // 0x395 TMovB
	var_13_object = Obj(); // 0x396 PushV
	var_13_object = var_9_object; // 0x397 Mov
	func_1370(var_13_object); // 0x398 NEW_2
	
Label_922:
	return 0; // 0x39a Return
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x39c PushV
	var_10_bool = 0; // 0x39d MovB
	var_11_bool = var_1_int == var_9_object; // 0x39e Eq
	if(var_11_bool == 0) goto Label_931; // 0x39f JumpB
	var_12_int = var_2_int; // 0x3a0 PushT
	if(var_12_int == 0) goto Label_931; // 0x3a1 JumpB
	var_10_bool = 1; // 0x3a2 MovB
	
Label_931:
	if(var_10_bool == 0) goto Label_936; // 0x3a3 JumpB
	var_2_int = 0; // 0x3a4 TMovB
	var_13_string = "head"; // 0x3a5 PushS
	UnlookAsync(var_13_string); // 0x3a6 Func
	
Label_936:
	return 0; // 0x3a8 Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x422 Func
	return 0; // 0x424 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_895(var_9_object); // 0x42e NEW_2
	var_14_object = Obj(); // 0x430 PushV
	var_14_object = var_9_object; // 0x431 Mov
	func_1525(); // 0x432 NEW_2
	return 0; // 0x434 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x5d7 PushV
	var_13_object = var_9_object; // 0x5d8 Mov
	var_14_int = var_10_int; // 0x5d9 Mov
	var_15_float = var_11_float; // 0x5da Mov
	func_1277(var_13_object, var_14_int, var_15_float); // 0x5db NEW_2
	return 0; // 0x5dd Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x5df PushV
	var_15_object = var_9_object; // 0x5e0 Mov
	var_16_int = var_10_int; // 0x5e1 Mov
	var_17_float = var_11_float; // 0x5e2 Mov
	var_18_cvector = var_13_cvector; // 0x5e3 Mov
	var_19_cvector = var_14_cvector; // 0x5e4 Mov
	func_1345(var_17_float, var_18_cvector, var_19_cvector); // 0x5e5 NEW_2
	return 0; // 0x5e7 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x5e8 PushV
	var_13_string = "health"; // 0x5e9 PushS
	var_14_bool = var_10_string == var_13_string; // 0x5ea Eq
	if(var_14_bool == 0) goto Label_1524; // 0x5eb JumpB
	var_15_string = "health"; // 0x5ec PushS
	GetProperty(var_15_string, var_12_float); // 0x5ed Func
	var_16_int = 0; // 0x5ef PushI
	var_17_bool = var_12_float <= var_16_int; // 0x5f0 LE
	if(var_17_bool == 0) goto Label_1524; // 0x5f1 JumpB
	SignalDeath(var_9_object); // 0x5f2 Func
	
Label_1524:
	return 2; // 0x5f4 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x5f6 PushV
	var_10_object = var_9_object; // 0x5f7 Mov
	func_1486(var_10_object); // 0x5f8 NEW_2
	return 0; // 0x5fa Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x84 PushV
	var_11_bool = 1; // 0x85 PushB
	SensePlayerOnly(var_11_bool); // 0x86 Func
	var_12_float = 1.5; // 0x88 PushF
	Sleep(var_12_float); // 0x89 Func
	var_13_string = "player"; // 0x8b PushS
	FindActor(var_10_object, var_13_string); // 0x8c Func
	var_14_object = Obj(); var_15_bool = 0; var_16_float = 0; // 0x8e PushV
	var_14_object = var_10_object; // 0x8f Mov
	var_15_bool = 1; // 0x90 MovB
	var_16_float = 155.0; // 0x91 MovF
	func_163(var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_object, var_14_object, var_15_bool, var_16_float); // 0x92 NEW_2
	return 2; // 0x94 Return
}


func_0(var_11_object)
{
	var_12_object = Obj(); // 0x1 PushV
	var_12_object = var_11_object; // 0x2 Mov
	func_9(var_12_object); // 0x3 NEW_2
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


func_773(var_2_int, var_5_int)
{
	var_339_float = 0; var_340_int = 0; var_341_float = 0; var_342_int = 0; // 0x305 PushV
	var_343_bool = var_2_int == 0; // 0x306 Not
	if(var_343_bool == 0) goto Label_777; // 0x307 JumpB
	return 4; // 0x308 Return
	
Label_777:
	var_344_int = var_5_int; // 0x309 PushT
	if(var_344_int == 0) goto Label_785; // 0x30a JumpB
	var_345_int = -1; // 0x30b PushI
	var_5_int = var_5_int + var_345_int; // 0x30c Add2
	var_346_int = 0; // 0x30d PushI
	var_347_bool = var_5_int > var_346_int; // 0x30e GT
	if(var_347_bool == 0) goto Label_785; // 0x30f JumpB
	return 4; // 0x310 Return
	
Label_785:
	rand(var_341_float); // 0x311 Func
	var_348_float = 0; // 0x313 PushV
	func_823(var_348_float); // 0x314 NEW_2
	var_349_bool = var_341_float < var_348_float; // 0x316 LT
	if(var_349_bool == 0) goto Label_804; // 0x317 JumpB
	irand(var_342_int, var_341_float); // 0x318 Func
	var_350_int = 1; // 0x31a PushI
	var_342_int = var_342_int + var_350_int; // 0x31b Add2
	var_351_string = "attack"; // 0x31c PushS
	var_352_int = var_351_string + var_342_int; // 0x31d Add
	Speak(var_352_int); // 0x31e Func
	var_353_int = 0; // 0x320 PushV
	func_821(var_353_int); // 0x321 NEW_2
	var_5_int = var_353_int; // 0x322 TMov
	
Label_804:
	return 4; // 0x324 Return
}


func_392(var_1_int, var_2_int, var_4_float)
{
	var_39_bool = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); // 0x188 PushV
	var_1_int = 0; // 0x189 TMovI
	
Label_394:
	var_45_string = "all"; // 0x18a PushS
	var_46_string = "attack_begin"; // 0x18b PushS
	var_47_int = 1; // 0x18c PushI
	var_48_int = var_1_int + var_47_int; // 0x18d Add
	var_49_int = var_46_string + var_48_int; // 0x18e Add
	HasAnimation(var_42_bool, var_45_string, var_49_int); // 0x18f Func
	var_50_bool = var_42_bool == 0; // 0x191 Not
	if(var_50_bool == 0) goto Label_404; // 0x192 JumpB
	goto Label_407; // 0x193 Jump
	
Label_407:
	var_2_int = 0; // 0x197 TMovI
	
Label_408:
	var_51_string = "attack"; // 0x198 PushS
	var_52_int = 1; // 0x199 PushI
	var_53_int = var_2_int + var_52_int; // 0x19a Add
	var_54_int = var_51_string + var_53_int; // 0x19b Add
	IsExisting3DSound(var_43_bool, var_54_int); // 0x19c Func
	var_55_bool = var_43_bool == 0; // 0x19e Not
	if(var_55_bool == 0) goto Label_417; // 0x19f JumpB
	goto Label_420; // 0x1a0 Jump
	
Label_420:
	var_56_string = "all"; // 0x1a4 PushS
	var_57_string = "bjump"; // 0x1a5 PushS
	GetAnimationOffset(var_44_cvector, var_56_string, var_57_string); // 0x1a6 Func
	var_58_float = GetByIndex(var_44_cvector, 2); // 0x1a8 PushE
	var_4_float = -var_58_float; // 0x1a9 Neg2
	return 6; // 0x1aa Return
	
Label_417:
	var_59_int = 1; // 0x1a1 PushI
	var_2_int = var_2_int + var_59_int; // 0x1a2 Add2
	goto Label_408; // 0x1a3 Jump
	
Label_404:
	var_60_int = 1; // 0x194 PushI
	var_1_int = var_1_int + var_60_int; // 0x195 Add2
	goto Label_394; // 0x196 Jump
}


func_9(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); // 0x9 PushV
	var_33_bool = var_12_object == 0; // 0xa NullEq
	if(var_33_bool == 0) goto Label_17; // 0xb JumpB
	var_34_string = ""; // 0xc PushV
	var_34_string = "fdie"; // 0xd MovS
	func_100(var_34_string); // 0xe NEW_2
	goto Label_99; // 0x10 Jump
	
Label_99:
	return 20; // 0x63 Return
	
Label_17:
	GetPosition(var_23_cvector); // 0x11 ObjFunc
	GetPosition(var_24_cvector); // 0x13 Func
	GetDirection(var_25_cvector); // 0x15 Func
	var_26_cvector = var_24_cvector - var_23_cvector; // 0x17 Sub2
	var_66_float = GetByIndex(var_26_cvector, 0); // 0x18 PushE
	var_67_float = GetByIndex(var_25_cvector, 0); // 0x19 PushE
	var_68_float = var_66_float * var_67_float; // 0x1a Mult
	var_69_float = GetByIndex(var_26_cvector, 2); // 0x1b PushE
	var_70_float = GetByIndex(var_25_cvector, 2); // 0x1c PushE
	var_71_float = var_69_float * var_70_float; // 0x1d Mult
	var_72_int = var_68_float + var_71_float; // 0x1e Add
	var_73_int = 0; // 0x1f PushI
	var_74_bool = var_72_int >= var_73_int; // 0x20 GE
	if(var_74_bool == 0) goto Label_36; // 0x21 JumpB
	var_27_string = "fdie"; // 0x22 MovS
	goto Label_37; // 0x23 Jump
	
Label_37:
	RemoveRTEnvelope(); // 0x25 Func
	SetDeathState(); // 0x27 Func
	Stop(); // 0x29 Func
	StopAsync(); // 0x2b Func
	var_28_object = var_12_object; // 0x2d Mov
	var_75_string = "GetScriptProperty"; // 0x2e PushS
	var_76_int = 2; // 0x2f PushI
	var_77_bool = IsFuncExist(var_12_object, var_75_string, var_76_int); // 0x30 FuncExist
	if(var_77_bool == 0) goto Label_61; // 0x31 JumpB
	var_78_string = "Owner"; // 0x32 PushS
	HasScriptProperty(var_29_bool, var_78_string); // 0x33 ObjFunc
	var_79_bool = var_29_bool; // 0x35 Push
	if(var_79_bool == 0) goto Label_61; // 0x36 JumpB
	var_80_string = "Owner"; // 0x37 PushS
	GetScriptProperty(var_28_object, var_80_string); // 0x38 ObjFunc
	var_81_bool = var_28_object == 0; // 0x3a NullEq
	if(var_81_bool == 0) goto Label_61; // 0x3b JumpB
	var_28_object = var_12_object; // 0x3c Mov
	
Label_61:
	var_82_string = "@GetEyesHeight"; // 0x3d PushS
	var_83_int = 1; // 0x3e PushI
	var_84_bool = IsFuncExist(var_28_object, var_82_string, var_83_int); // 0x3f FuncExist
	if(var_84_bool == 0) goto Label_76; // 0x40 JumpB
	GetEyesHeight(var_31_float); // 0x41 ObjFunc
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x43 MovV
	var_85_float = GetByIndex(var_32_cvector, 1); // 0x44 PushE
	var_85_float = var_31_float; // 0x45 Mov
	SetByIndex(var_32_cvector, 1) = var_85_float; // 0x46 PopE
	var_86_string = "head"; // 0x47 PushS
	LookAsync(var_12_object, var_86_string, var_32_cvector); // 0x48 Func
	var_30_bool = 1; // 0x4a MovB
	goto Label_77; // 0x4b Jump
	
Label_77:
	var_87_string = ""; // 0x4d PushV
	var_87_string = var_27_string; // 0x4e Mov
	func_1381(var_87_string); // 0x4f NEW_2
	var_88_string = "all"; // 0x51 PushS
	PlayAnimation(var_88_string, var_27_string); // 0x52 Func
	WaitForAnimEnd(); // 0x54 Func
	var_89_bool = var_30_bool; // 0x56 Push
	if(var_89_bool == 0) goto Label_93; // 0x57 JumpB
	StopAsync(); // 0x58 Func
	var_90_string = "head"; // 0x5a PushS
	UnlookAsync(var_90_string); // 0x5b Func
	
Label_93:
	var_91_string = "all"; // 0x5d PushS
	LockAnimationEnd(var_91_string, var_27_string); // 0x5e Func
	RemoveEnvelope(); // 0x60 Func
	var_28_object = 0; // 0x62 SetNull
	
Label_76:
	var_30_bool = 0; // 0x4c MovB
	
Label_36:
	var_27_string = "bdie"; // 0x24 MovS
}


func_1422(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x58e PushV
	self(var_71_object); // 0x58f Func
	var_69_object = var_71_object; // 0x591 Mov
	return 2; // 0x592 Return
}


func_1039(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x410 PushI
	var_19_bool = var_17_int != var_18_int; // 0x411 Neq
	if(var_19_bool == 0) goto Label_1044; // 0x412 JumpB
	return 0; // 0x413 Return
	
Label_1044:
	var_20_bool = 0; var_21_object = Obj(); // 0x414 PushV
	var_21_object = var_1_int; // 0x415 MovT
	func_825(var_20_bool, var_21_object); // 0x416 NEW_2
	var_39_bool = var_20_bool == 0; // 0x418 Not
	if(var_39_bool == 0) goto Label_1051; // 0x419 JumpB
	var_0_object = 1; // 0x41a TMovB
	
Label_1051:
	var_40_int = 0; // 0x41b PushI
	KillTimer(var_40_int); // 0x41c Func
	Stop(); // 0x41e Func
	return 0; // 0x420 Return
}


func_1428(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x594 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x595 Or
	var_50_float = sqrt(var_51_int); // 0x596 Sqrt2
	var_52_float = 0.0; // 0x597 PushF
	var_53_bool = var_50_float < var_52_float; // 0x598 LT
	if(var_53_bool == 0) goto Label_1436; // 0x599 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x59a MovV
	return 2; // 0x59b Return
	
Label_1436:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x59c Div2
	return 2; // 0x59d Return
}


func_150(var_368_float)
{
	var_368_float = 0.1; // 0x97 MovF
	return 0; // 0x98 Return
}


func_153(var_375_int)
{
	var_375_int = 0; // 0x9a MovI
	return 0; // 0x9b Return
}


func_156(var_75_bool, var_76_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0x9d PushV
	var_78_object = var_76_object; // 0x9e Mov
	func_1197(var_77_bool, var_78_object); // 0x9f NEW_2
	var_75_bool = var_77_bool; // 0xa0 Mov
	return 0; // 0xa2 Return
}


func_1438(var_415_float, var_416_float, var_417_float)
{
	var_420_bool = var_416_float < var_417_float; // 0x59f LT
	if(var_420_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_415_float = var_416_float; // 0x5a1 Mov
	goto Label_1444; // 0x5a2 Jump
	
Label_1444:
	return 0; // 0x5a4 Return
	
Label_1443:
	var_415_float = var_417_float; // 0x5a3 Mov
}


func_673(var_0_object, var_274_bool)
{
	var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); var_278_float = 0; var_279_float = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_float = 0; // 0x2a1 PushV
	var_285_bool = 0; var_286_object = Obj(); // 0x2a2 PushV
	var_286_object = var_0_object; // 0x2a3 MovT
	func_156(var_285_bool, var_286_object); // 0x2a4 NEW_2
	var_287_bool = var_285_bool == 0; // 0x2a6 Not
	if(var_287_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_274_bool = 0; // 0x2a8 MovB
	return 10; // 0x2a9 Return
	
Label_682:
	var_288_bool = 0; // 0x2aa PushV
	func_762(var_284_float, var_288_bool); // 0x2ab NEW_2
	if(var_288_bool == 0) goto Label_699; // 0x2ad JumpB
	GetPFPosition(var_280_cvector); // 0x2ae TObjFunc
	GetPFPosition(var_281_cvector); // 0x2b0 Func
	var_282_cvector = var_280_cvector - var_281_cvector; // 0x2b2 Sub2
	var_283_float = var_282_cvector | var_282_cvector; // 0x2b3 Or2
	GetAttackDistance(var_284_float); // 0x2b4 TObjFunc
	var_289_int = 50; // 0x2b6 PushI
	var_284_float = var_284_float + var_289_int; // 0x2b7 Add2
	var_290_float = var_284_float * var_284_float; // 0x2b8 Mult
	var_274_bool = var_283_float <= var_290_float; // 0x2b9 LE2
	return 10; // 0x2ba Return
	
Label_699:
	var_274_bool = 0; // 0x2bb MovB
	return 10; // 0x2bc Return
}


func_163(var_0_object, var_3_bool, var_5_int, var_14_object, var_15_bool, var_16_float, var_108_bool, var_200_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; // 0xa3 PushV
	func_392(var_36_cvector, var_37_bool, var_38_float); // 0xa5 NEW_2
	var_5_int = 0; // 0xa7 TMovI
	var_61_string = "@GetAttackDistance"; // 0xa8 PushS
	var_62_int = 1; // 0xa9 PushI
	var_63_bool = IsFuncExist(var_14_object, var_61_string, var_62_int); // 0xaa FuncExist
	if(var_63_bool == 0) goto Label_177; // 0xab JumpB
	GetAttackDistance(var_28_float); // 0xac ObjFunc
	var_64_int = 50; // 0xae PushI
	var_28_float = var_28_float + var_64_int; // 0xaf Add2
	goto Label_178; // 0xb0 Jump
	
Label_178:
	var_65_int = 150; // 0xb2 PushI
	var_66_bool = var_28_float >= var_65_int; // 0xb3 GE
	if(var_66_bool == 0) goto Label_182; // 0xb4 JumpB
	var_28_float = 150; // 0xb5 MovI
	
Label_182:
	var_3_bool = 0; // 0xb6 TMovB
	var_0_object = var_14_object; // 0xb7 TMov
	IsPlayerActor(var_0_object, var_31_bool); // 0xb8 Func
	var_67_bool = var_31_bool; // 0xba Push
	if(var_67_bool == 0) goto Label_196; // 0xbb JumpB
	var_68_string = "attack"; // 0xbc PushS
	PlayGlobalMusic(var_68_string); // 0xbd Func
	var_69_object = Obj(); // 0xbf PushV
	func_1422(var_69_object); // 0xc0 NEW_2
	SendPlayerEnemy(var_14_object, var_69_object); // 0xc2 Func
	
Label_196:
	var_72_bool = var_15_bool; // 0xc4 Push
	if(var_72_bool == 0) goto Label_200; // 0xc5 JumpB
	var_32_bool = 0; // 0xc6 MovB
	goto Label_201; // 0xc7 Jump
	
Label_201:
	var_73_float = 300.0; // 0xc9 PushF
	var_33_float = var_73_float + var_28_float; // 0xca Add2
	
Label_203:
	var_74_bool = 0; // 0xcb PushV
	var_74_bool = 0; // 0xcc MovB
	var_75_bool = 0; var_76_object = Obj(); // 0xcd PushV
	var_76_object = var_0_object; // 0xce MovT
	func_156(var_75_bool, var_76_object); // 0xcf NEW_2
	if(var_75_bool == 0) goto Label_213; // 0xd1 JumpB
	var_94_bool = var_3_bool == 0; // 0xd2 Not
	if(var_94_bool == 0) goto Label_213; // 0xd3 JumpB
	var_74_bool = 1; // 0xd4 MovB
	
Label_213:
	if(var_74_bool == 0) goto Label_375; // 0xd5 JumpB
	func_805(var_38_float); // 0xd7 NEW_2
	GetPFPosition(var_29_cvector); // 0xd9 TObjFunc
	GetPFPosition(var_30_cvector); // 0xdb Func
	var_34_cvector = var_29_cvector - var_30_cvector; // 0xdd Sub2
	var_35_float = var_34_cvector | var_34_cvector; // 0xde Or2
	var_100_float = var_33_float * var_33_float; // 0xdf Mult
	var_101_bool = var_35_float >= var_100_float; // 0xe0 GE
	if(var_101_bool == 0) goto Label_241; // 0xe1 JumpB
	var_102_bool = 0; var_103_object = Obj(); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0; // 0xe2 PushV
	var_103_object = var_0_object; // 0xe3 MovT
	var_104_float = var_28_float; // 0xe4 Mov
	var_105_float = 3000.0; // 0xe5 MovF
	var_106_bool = 1; // 0xe6 MovB
	var_107_bool = 0; // 0xe7 MovB
	TaskCall(2); // 0xe8 TaskCall
	func_832(var_110_bool, var_102_bool, var_103_object, var_104_float, var_105_float, var_106_bool, var_107_bool); // 0xe9 NEW_2
	TaskReturn(); // 0xea TaskReturn
	var_185_bool = var_108_bool == 0; // 0xec Not
	if(var_185_bool == 0) goto Label_239; // 0xed JumpB
	goto Label_375; // 0xee Jump
	
Label_375:
	WaitForAnimEnd(); // 0x177 Func
	var_186_bool = var_3_bool; // 0x179 PushT
	if(var_186_bool == 0) goto Label_380; // 0x17a JumpB
	return 22; // 0x17b Return
	
Label_380:
	var_187_string = "all"; // 0x17c PushS
	var_188_string = "attack_off"; // 0x17d PushS
	PlayAnimation(var_187_string, var_188_string); // 0x17e Func
	WaitForAnimEnd(); // 0x180 Func
	var_189_bool = var_31_bool; // 0x182 Push
	if(var_189_bool == 0) goto Label_391; // 0x183 JumpB
	var_190_float = 2.0; // 0x184 PushF
	Sleep(var_190_float); // 0x185 Func
	
Label_391:
	return 22; // 0x187 Return
	
Label_239:
	var_32_bool = 0; // 0xef MovB
	goto Label_374; // 0xf0 Jump
	
Label_374:
	goto Label_203; // 0x176 Jump
	
Label_241:
	var_191_float = var_16_float * var_16_float; // 0xf1 Mult
	var_192_bool = var_35_float >= var_191_float; // 0xf2 GE
	if(var_192_bool == 0) goto Label_366; // 0xf3 JumpB
	GetPFPosition(var_36_cvector); // 0xf4 TObjFunc
	CanReachByPF(var_37_bool, var_36_cvector); // 0xf6 Func
	var_193_bool = var_37_bool == 0; // 0xf8 Not
	if(var_193_bool == 0) goto Label_265; // 0xf9 JumpB
	var_194_bool = 0; var_195_object = Obj(); var_196_float = 0; var_197_float = 0; var_198_bool = 0; var_199_bool = 0; // 0xfa PushV
	var_195_object = var_0_object; // 0xfb MovT
	var_196_float = var_28_float; // 0xfc Mov
	var_197_float = 3000.0; // 0xfd MovF
	var_198_bool = 1; // 0xfe MovB
	var_199_bool = 0; // 0xff MovB
	TaskCall(2); // 0x100 TaskCall
	func_832(var_202_bool, var_194_bool, var_195_object, var_196_float, var_197_float, var_198_bool, var_199_bool); // 0x101 NEW_2
	TaskReturn(); // 0x102 TaskReturn
	var_203_bool = var_200_bool == 0; // 0x104 Not
	if(var_203_bool == 0) goto Label_263; // 0x105 JumpB
	goto Label_375; // 0x106 Jump
	
Label_263:
	var_32_bool = 0; // 0x107 MovB
	goto Label_203; // 0x108 Jump
	
Label_265:
	var_204_bool = var_32_bool == 0; // 0x109 Not
	if(var_204_bool == 0) goto Label_290; // 0x10a JumpB
	var_205_object = Obj(); // 0x10b PushV
	var_205_object = var_0_object; // 0x10c MovT
	func_1359(); // 0x10d NEW_2
	var_214_string = "all"; // 0x10f PushS
	var_215_string = "attack_on"; // 0x110 PushS
	PlayAnimation(var_214_string, var_215_string); // 0x111 Func
	WaitForAnimEnd(); // 0x113 Func
	func_805(var_38_float); // 0x116 NEW_2
	StopAsync(); // 0x118 Func
	var_32_bool = 1; // 0x11a MovB
	var_216_bool = 0; var_217_object = Obj(); // 0x11b PushV
	var_217_object = var_0_object; // 0x11c MovT
	func_156(var_216_bool, var_217_object); // 0x11d NEW_2
	var_218_bool = var_216_bool == 0; // 0x11f Not
	if(var_218_bool == 0) goto Label_290; // 0x120 JumpB
	goto Label_375; // 0x121 Jump
	
Label_290:
	rand(var_38_float); // 0x122 Func
	var_219_bool = 0; // 0x124 PushV
	var_219_bool = 1; // 0x125 MovB
	var_220_float = 0.6; // 0x126 PushF
	var_221_bool = var_38_float < var_220_float; // 0x127 LT
	if(var_221_bool == 0) goto Label_302; // 0x128 JumpB
	var_222_bool = 0; // 0x129 PushV
	func_762(var_219_bool, var_222_bool); // 0x12a NEW_2
	if(var_222_bool == 0) goto Label_302; // 0x12c JumpB
	var_219_bool = 0; // 0x12d MovB
	
Label_302:
	if(var_219_bool == 0) goto Label_319; // 0x12e JumpB
	Face(var_0_object); // 0x12f Func
	func_812(); // 0x132 NEW_2
	var_257_string = "all"; // 0x134 PushS
	var_258_string = "attack_stay"; // 0x135 PushS
	PlayAnimation(var_257_string, var_258_string); // 0x136 Func
	var_259_bool = 0; var_260_float = 0; // 0x138 PushV
	var_260_float = var_16_float; // 0x139 Mov
	func_630(var_38_float, var_259_bool, var_260_float); // 0x13a NEW_2
	StopAsync(); // 0x13c Func
	goto Label_365; // 0x13e Jump
	
Label_365:
	goto Label_374; // 0x16d Jump
	
Label_319:
	Face(var_0_object); // 0x13f Func
	var_480_string = "all"; // 0x141 PushS
	var_481_string = "fjump"; // 0x142 PushS
	PlayAnimation(var_480_string, var_481_string); // 0x143 Func
	WaitForAnimEnd(); // 0x145 Func
	func_805(var_38_float); // 0x148 NEW_2
	var_482_cvector = CVector(0.0, 0.0, 0.0); // 0x14a PushVec
	SetSpeed(var_482_cvector); // 0x14b Func
	Stop(); // 0x14d Func
	StopAsync(); // 0x14f Func
	var_483_bool = 0; // 0x151 PushV
	func_762(var_38_float, var_483_bool); // 0x152 NEW_2
	var_484_bool = var_483_bool == 0; // 0x154 Not
	if(var_484_bool == 0) goto Label_365; // 0x155 JumpB
	var_485_bool = 0; var_486_object = Obj(); // 0x156 PushV
	var_486_object = var_0_object; // 0x157 MovT
	func_156(var_485_bool, var_486_object); // 0x158 NEW_2
	var_487_bool = var_485_bool == 0; // 0x15a Not
	if(var_487_bool == 0) goto Label_349; // 0x15b JumpB
	goto Label_375; // 0x15c Jump
	
Label_349:
	GetPFPosition(var_29_cvector); // 0x15d TObjFunc
	GetPFPosition(var_30_cvector); // 0x15f Func
	var_34_cvector = var_29_cvector - var_30_cvector; // 0x161 Sub2
	var_35_float = var_34_cvector | var_34_cvector; // 0x162 Or2
	var_488_float = var_16_float * var_16_float; // 0x163 Mult
	var_489_bool = var_35_float < var_488_float; // 0x164 LT
	if(var_489_bool == 0) goto Label_365; // 0x165 JumpB
	var_490_bool = 0; var_491_float = 0; // 0x166 PushV
	var_491_float = var_16_float; // 0x167 Mov
	func_466(var_38_float, var_490_bool, var_491_float); // 0x168 NEW_2
	var_492_bool = var_490_bool == 0; // 0x16a Not
	if(var_492_bool == 0) goto Label_365; // 0x16b JumpB
	goto Label_375; // 0x16c Jump
	
Label_366:
	var_493_bool = 0; var_494_float = 0; // 0x16e PushV
	var_494_float = var_16_float; // 0x16f Mov
	func_466(var_38_float, var_493_bool, var_494_float); // 0x170 NEW_2
	var_495_bool = var_493_bool == 0; // 0x172 Not
	if(var_495_bool == 0) goto Label_373; // 0x173 JumpB
	goto Label_375; // 0x174 Jump
	
Label_373:
	var_32_bool = 1; // 0x175 MovB
	
Label_200:
	var_32_bool = 1; // 0xc8 MovB
	
Label_177:
	var_28_float = var_16_float; // 0xb1 Mov
}


func_805(var_0_object)
{
	var_95_object = Obj(); // 0x325 PushV
	var_95_object = var_0_object; // 0x326 MovT
	func_1466(var_95_object); // 0x327 NEW_2
	return 0; // 0x329 Return
}


func_1061(var_0_object)
{
	var_0_object = 1; // 0x425 TMovB
	var_13_int = 0; // 0x426 PushI
	KillTimer(var_13_int); // 0x427 Func
	Stop(); // 0x429 Func
	return 0; // 0x42b Return
}


func_1445(var_425_float, var_426_float, var_427_float, var_428_float)
{
	var_429_bool = var_426_float < var_427_float; // 0x5a6 LT
	if(var_429_bool == 0) goto Label_1450; // 0x5a7 JumpB
	var_425_float = var_427_float; // 0x5a8 Mov
	return 0; // 0x5a9 Return
	
Label_1450:
	var_430_bool = var_426_float > var_428_float; // 0x5aa GT
	if(var_430_bool == 0) goto Label_1454; // 0x5ab JumpB
	var_425_float = var_428_float; // 0x5ac Mov
	return 0; // 0x5ad Return
	
Label_1454:
	var_425_float = var_426_float; // 0x5ae Mov
	return 0; // 0x5af Return
}


func_1192(var_88_bool)
{
	var_90_bool = 0; var_91_bool = 0; // 0x4a8 PushV
	IsDead(var_91_bool); // 0x4a9 ObjFunc
	var_88_bool = var_91_bool; // 0x4ab Mov
	return 2; // 0x4ac Return
}


func_937(var_0_object, var_1_int, var_131_bool, var_132_object, var_133_float, var_134_float, var_135_bool, var_136_bool)
{
	var_137_bool = 0; var_138_bool = 0; var_139_object = Obj(); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_object = Obj(); var_145_bool = 0; var_146_bool = 0; var_147_object = Obj(); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_float = 0; var_152_object = Obj(); // 0x3a9 PushV
	var_0_object = 0; // 0x3aa TMovB
	var_1_int = var_132_object; // 0x3ab TMov
	var_146_bool = var_136_bool; // 0x3ac Mov
	
Label_941:
	var_153_bool = 0; var_154_object = Obj(); // 0x3ad PushV
	var_154_object = var_132_object; // 0x3ae Mov
	func_825(var_153_bool, var_154_object); // 0x3af NEW_2
	var_157_bool = var_153_bool == 0; // 0x3b1 Not
	if(var_157_bool == 0) goto Label_949; // 0x3b2 JumpB
	var_131_bool = 0; // 0x3b3 MovB
	return 16; // 0x3b4 Return
	
Label_949:
	GetPosition(var_148_cvector); // 0x3b5 ObjFunc
	GetPosition(var_149_cvector); // 0x3b7 Func
	var_150_cvector = var_148_cvector - var_149_cvector; // 0x3b9 Sub2
	var_151_float = var_150_cvector | var_150_cvector; // 0x3ba Or2
	var_158_bool = 0; // 0x3bb PushV
	var_158_bool = 0; // 0x3bc MovB
	var_159_int = 0; // 0x3bd PushI
	var_160_bool = var_134_float > var_159_int; // 0x3be GT
	if(var_160_bool == 0) goto Label_964; // 0x3bf JumpB
	var_161_float = var_134_float * var_134_float; // 0x3c0 Mult
	var_162_bool = var_151_float > var_161_float; // 0x3c1 GT
	if(var_162_bool == 0) goto Label_964; // 0x3c2 JumpB
	var_158_bool = 1; // 0x3c3 MovB
	
Label_964:
	if(var_158_bool == 0) goto Label_969; // 0x3c4 JumpB
	Stop(); // 0x3c5 Func
	var_131_bool = 0; // 0x3c7 MovB
	return 16; // 0x3c8 Return
	
Label_969:
	var_163_float = var_133_float * var_133_float; // 0x3c9 Mult
	var_164_bool = var_151_float > var_163_float; // 0x3ca GT
	if(var_164_bool == 0) goto Label_1031; // 0x3cb JumpB
	GetPFPosition(var_148_cvector); // 0x3cc ObjFunc
	FindPathTo(var_152_object, var_148_cvector); // 0x3ce Func
	var_165_bool = var_152_object != 0; // 0x3d0 NullNeq
	if(var_165_bool == 0) goto Label_980; // 0x3d1 JumpB
	var_147_object = var_152_object; // 0x3d2 Mov
	var_152_object = 0; // 0x3d3 SetNull
	
Label_980:
	var_166_bool = var_147_object != 0; // 0x3d4 NullNeq
	if(var_166_bool == 0) goto Label_1013; // 0x3d5 JumpB
	var_167_bool = var_146_bool; // 0x3d6 Push
	if(var_167_bool == 0) goto Label_990; // 0x3d7 JumpB
	var_146_bool = 0; // 0x3d8 MovB
	RotatePath(var_147_object, var_145_bool); // 0x3d9 Func
	var_168_bool = var_145_bool == 0; // 0x3db Not
	if(var_168_bool == 0) goto Label_990; // 0x3dc JumpB
	goto Label_1037; // 0x3dd Jump
	
Label_1037:
	var_131_bool = !var_0_object; // 0x40d Not2
	return 16; // 0x40e Return
	
Label_990:
	var_169_int = 0; // 0x3de PushI
	var_170_float = 0.3; // 0x3df PushF
	SetTimer(var_169_int, var_170_float); // 0x3e0 Func
	var_171_string = ""; // 0x3e2 PushV
	func_1077(var_171_string); // 0x3e3 NEW_2
	var_172_string = ""; // 0x3e5 PushV
	func_1079(var_172_string); // 0x3e6 NEW_2
	FollowPath(var_147_object, var_135_bool, var_145_bool, var_171_string, var_172_string); // 0x3e8 Func
	var_173_bool = var_145_bool == 0; // 0x3ea Not
	if(var_173_bool == 0) goto Label_1011; // 0x3eb JumpB
	var_174_object = var_0_object; // 0x3ec PushT
	if(var_174_object == 0) goto Label_1009; // 0x3ed JumpB
	var_147_object = 0; // 0x3ee SetNull
	goto Label_1037; // 0x3ef Jump
	
Label_1009:
	goto Label_1036; // 0x3f1 Jump
	
Label_1036:
	goto Label_941; // 0x40c Jump
	
Label_1011:
	var_147_object = 0; // 0x3f3 SetNull
	goto Label_1029; // 0x3f4 Jump
	
Label_1029:
	var_152_object = 0; // 0x405 SetNull
	goto Label_1035; // 0x406 Jump
	
Label_1035:
	var_147_object = 0; // 0x40b SetNull
	
Label_1013:
	var_175_int = 0; // 0x3f5 PushI
	KillTimer(var_175_int); // 0x3f6 Func
	var_176_float = 0.5; // 0x3f8 PushF
	Sleep(var_176_float, var_145_bool); // 0x3f9 Func
	var_177_bool = var_145_bool == 0; // 0x3fb Not
	if(var_177_bool == 0) goto Label_1025; // 0x3fc JumpB
	var_178_object = var_0_object; // 0x3fd PushT
	if(var_178_object == 0) goto Label_1025; // 0x3fe JumpB
	var_147_object = 0; // 0x3ff SetNull
	goto Label_1037; // 0x400 Jump
	
Label_1025:
	var_179_int = 0; // 0x401 PushI
	var_180_float = 0.3; // 0x402 PushF
	SetTimer(var_179_int, var_180_float); // 0x403 Func
	
Label_1031:
	var_181_int = 0; // 0x407 PushI
	KillTimer(var_181_int); // 0x408 Func
	goto Label_1037; // 0x40a Jump
}


func_810(var_438_int)
{
	var_438_int = 0; // 0x32a MovI
	return 0; // 0x32b Return
}


func_427(var_0_object, var_357_float, var_358_int)
{
	var_359_object = Obj(); var_360_float = 0; var_361_float = 0; var_362_object = Obj(); var_363_float = 0; var_364_float = 0; // 0x1ab PushV
	var_365_float = 0.9; // 0x1ac PushF
	var_366_float = var_357_float * var_365_float; // 0x1ad Mult
	GetVictim(var_366_float, var_362_object); // 0x1ae Func
	ReportAttack(var_0_object); // 0x1b0 Func
	var_367_bool = var_362_object == var_0_object; // 0x1b2 Eq
	if(var_367_bool == 0) goto Label_464; // 0x1b3 JumpB
	var_368_float = 0; var_369_object = Obj(); var_370_int = 0; // 0x1b4 PushV
	var_369_object = var_362_object; // 0x1b5 Mov
	var_370_int = var_358_int; // 0x1b6 Mov
	func_150(var_370_int); // 0x1b7 NEW_2
	var_363_float = var_368_float; // 0x1b8 Mov
	var_371_float = 0; var_372_object = Obj(); var_373_float = 0; var_374_int = 0; // 0x1ba PushV
	var_372_object = var_362_object; // 0x1bb Mov
	var_373_float = var_363_float; // 0x1bc Mov
	var_375_int = 0; var_376_object = Obj(); var_377_int = 0; // 0x1bd PushV
	var_376_object = var_362_object; // 0x1be Mov
	var_377_int = var_358_int; // 0x1bf Mov
	func_153(var_377_int); // 0x1c0 NEW_2
	var_374_int = var_375_int; // 0x1c1 Mov
	func_1119(var_371_float, var_372_object, var_373_float, var_374_int); // 0x1c3 NEW_2
	var_364_float = var_371_float; // 0x1c4 Mov
	var_438_int = 0; // 0x1c6 PushV
	func_810(var_438_int); // 0x1c7 NEW_2
	ReportHit(var_0_object, var_438_int, var_364_float, var_363_float); // 0x1c9 Func
	var_439_object = Obj(); var_440_float = 0; // 0x1cb PushV
	var_439_object = var_362_object; // 0x1cc Mov
	var_440_float = var_364_float; // 0x1cd Mov
	func_817(); // 0x1ce NEW_2
	
Label_464:
	return 6; // 0x1d0 Return
}


func_812()
{
	var_228_string = ""; // 0x32c PushV
	var_228_string = "attack_stay"; // 0x32d MovS
	func_1381(var_228_string); // 0x32e NEW_2
	return 0; // 0x330 Return
}


func_1197(var_77_bool, var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); // 0x4ad PushV
	var_83_bool = var_78_object == 0; // 0x4ae NullEq
	if(var_83_bool == 0) goto Label_1202; // 0x4af JumpB
	var_77_bool = 0; // 0x4b0 MovB
	return 4; // 0x4b1 Return
	
Label_1202:
	var_84_bool = 0; // 0x4b2 PushV
	var_84_bool = 0; // 0x4b3 MovB
	var_85_string = "IsDead"; // 0x4b4 PushS
	var_86_int = 1; // 0x4b5 PushI
	var_87_bool = IsFuncExist(var_78_object, var_85_string, var_86_int); // 0x4b6 FuncExist
	if(var_87_bool == 0) goto Label_1214; // 0x4b7 JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x4b8 PushV
	var_89_object = var_78_object; // 0x4b9 Mov
	func_1192(var_89_object); // 0x4ba NEW_2
	if(var_88_bool == 0) goto Label_1214; // 0x4bc JumpB
	var_84_bool = 1; // 0x4bd MovB
	
Label_1214:
	if(var_84_bool == 0) goto Label_1217; // 0x4be JumpB
	var_77_bool = 0; // 0x4bf MovB
	return 4; // 0x4c0 Return
	
Label_1217:
	GetScene(var_81_object); // 0x4c1 Func
	var_92_bool = var_81_object == 0; // 0x4c3 NullEq
	if(var_92_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_77_bool = 0; // 0x4c5 MovB
	return 4; // 0x4c6 Return
	
Label_1223:
	GetScene(var_82_object); // 0x4c7 ObjFunc
	var_93_bool = var_81_object != var_82_object; // 0x4c9 Neq
	if(var_93_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_77_bool = 0; // 0x4cb MovB
	return 4; // 0x4cc Return
	
Label_1229:
	var_77_bool = 1; // 0x4cd MovB
	return 4; // 0x4ce Return
}


func_1456(var_433_float)
{
	var_434_object = Obj(); var_435_object = Obj(); // 0x5b0 PushV
	CreateFloatVector(var_435_object); // 0x5b1 Func
	add(var_433_float); // 0x5b3 ObjFunc
	var_436_int = 15; // 0x5b5 PushI
	SendWorldWndMessage(var_436_int, var_435_object); // 0x5b6 Func
	return 2; // 0x5b8 Return
}


func_817()
{
	return 0; // 0x332 Return
}


func_819(var_463_bool)
{
	var_463_bool = 1; // 0x333 MovB
	return 0; // 0x334 Return
}


func_821(var_353_int)
{
	var_353_int = 1; // 0x335 MovI
	return 0; // 0x336 Return
}


func_1077(var_171_string)
{
	var_171_string = "walk"; // 0x435 MovS
	return 0; // 0x436 Return
}


func_823(var_348_float)
{
	var_348_float = 0.5; // 0x337 MovF
	return 0; // 0x338 Return
}


func_1079(var_172_string)
{
	var_172_string = "run"; // 0x437 MovS
	return 0; // 0x438 Return
}


func_825(var_153_bool, var_154_object)
{
	var_155_bool = 0; var_156_object = Obj(); // 0x33a PushV
	var_156_object = var_154_object; // 0x33b Mov
	func_1197(var_155_bool, var_156_object); // 0x33c NEW_2
	var_153_bool = var_155_bool; // 0x33d Mov
	return 0; // 0x33f Return
}


func_1466(var_95_object)
{
	var_96_bool = 0; var_97_bool = 0; // 0x5ba PushV
	IsPlayerActor(var_95_object, var_97_bool); // 0x5bb Func
	var_98_bool = var_97_bool; // 0x5bd Push
	if(var_98_bool == 0) goto Label_1474; // 0x5be JumpB
	var_99_string = "attack"; // 0x5bf PushS
	PlayGlobalMusic(var_99_string); // 0x5c0 Func
	
Label_1474:
	return 2; // 0x5c2 Return
}


func_1081(var_405_string, var_406_int)
{
	var_407_int = 2; // 0x43a PushI
	var_408_bool = var_406_int == var_407_int; // 0x43b Eq
	if(var_408_bool == 0) goto Label_1088; // 0x43c JumpB
	var_405_string = "fire"; // 0x43d MovS
	return 0; // 0x43e Return
	
Label_1088:
	var_409_int = 1; // 0x440 PushI
	var_410_bool = var_406_int == var_409_int; // 0x441 Eq
	if(var_410_bool == 0) goto Label_1093; // 0x442 JumpB
	var_405_string = "bullet"; // 0x443 MovS
	return 0; // 0x444 Return
	
Label_1093:
	var_405_string = "phys"; // 0x445 MovS
	return 0; // 0x446 Return
}


func_701(var_272_bool)
{
	var_273_bool = 0; // 0x2bd PushV
	var_273_bool = 0; // 0x2be MovB
	var_274_bool = 0; // 0x2bf PushV
	func_673(var_273_bool, var_274_bool); // 0x2c0 NEW_2
	if(var_274_bool == 0) goto Label_712; // 0x2c2 JumpB
	var_291_bool = 0; // 0x2c3 PushV
	func_717(var_272_bool, var_273_bool, var_291_bool); // 0x2c4 NEW_2
	if(var_291_bool == 0) goto Label_712; // 0x2c6 JumpB
	var_273_bool = 1; // 0x2c7 MovB
	
Label_712:
	if(var_273_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_272_bool = 1; // 0x2c9 MovB
	return 0; // 0x2ca Return
	
Label_715:
	var_272_bool = 0; // 0x2cb MovB
	return 0; // 0x2cc Return
}


func_832(var_2_int, var_102_bool, var_103_object, var_104_float, var_105_float, var_106_bool, var_107_bool)
{
	var_111_bool = 0; var_112_bool = 0; var_113_bool = 0; var_114_bool = 0; // 0x340 PushV
	var_115_object = Obj(); // 0x341 PushV
	var_115_object = var_103_object; // 0x342 Mov
	func_1466(var_115_object); // 0x343 NEW_2
	var_116_int = 1; // 0x345 PushI
	var_117_int = 5; // 0x346 PushI
	SetTimer(var_116_int, var_117_int); // 0x347 Func
	CanSee(var_113_bool, var_103_object); // 0x349 Func
	var_118_bool = var_113_bool; // 0x34b Push
	if(var_118_bool == 0) goto Label_851; // 0x34c JumpB
	var_2_int = 1; // 0x34d TMovB
	var_119_object = Obj(); // 0x34e PushV
	var_119_object = var_103_object; // 0x34f Mov
	func_1370(var_119_object); // 0x350 NEW_2
	goto Label_852; // 0x352 Jump
	
Label_852:
	var_126_bool = 0; var_127_object = Obj(); // 0x354 PushV
	var_127_object = var_103_object; // 0x355 Mov
	func_1102(var_126_bool, var_127_object); // 0x356 NEW_2
	if(var_126_bool == 0) goto Label_862; // 0x358 JumpB
	var_130_object = Obj(); // 0x359 PushV
	func_1422(var_130_object); // 0x35a NEW_2
	SendPlayerEnemy(var_103_object, var_130_object); // 0x35c Func
	
Label_862:
	var_131_bool = 0; var_132_object = Obj(); var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_bool = 0; // 0x35e PushV
	var_132_object = var_103_object; // 0x35f Mov
	var_133_float = var_104_float; // 0x360 Mov
	var_134_float = var_105_float; // 0x361 Mov
	var_135_bool = var_106_bool; // 0x362 Mov
	var_136_bool = var_107_bool; // 0x363 Mov
	func_937(var_113_bool, var_114_bool, var_131_bool, var_132_object, var_133_float, var_134_float, var_135_bool, var_136_bool); // 0x364 NEW_2
	var_114_bool = var_131_bool; // 0x365 Mov
	var_182_int = var_2_int; // 0x367 PushT
	if(var_182_int == 0) goto Label_876; // 0x368 JumpB
	var_183_string = "head"; // 0x369 PushS
	UnlookAsync(var_183_string); // 0x36a Func
	
Label_876:
	var_184_int = 1; // 0x36c PushI
	KillTimer(var_184_int); // 0x36d Func
	var_102_bool = var_114_bool; // 0x36f Mov
	return 4; // 0x370 Return
	
Label_851:
	var_2_int = 0; // 0x353 TMovB
}


func_1345(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x541 PushV
	GetScene(var_22_object); // 0x542 Func
	var_24_string = "scripted"; // 0x544 PushS
	var_25_string = "blood_dir.xml"; // 0x545 PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x546 Func
	var_26_object = Obj(); // 0x548 PushV
	var_26_object = var_15_object; // 0x549 Mov
	func_1233(var_26_object); // 0x54a NEW_2
	return 4; // 0x54c Return
}


func_1475()
{
	var_332_object = Obj(); var_333_object = Obj(); // 0x5c3 PushV
	GetScene(var_333_object); // 0x5c4 Func
	var_334_string = "battle"; // 0x5c6 PushS
	var_335_object = Obj(); // 0x5c7 PushV
	func_1422(var_335_object); // 0x5c8 NEW_2
	BroadcastMessage(var_334_string, var_335_object, var_333_object); // 0x5ca Func
	return 2; // 0x5cc Return
}


func_1095(var_302_cvector)
{
	var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); // 0x447 PushV
	GetPosition(var_306_cvector); // 0x448 Func
	GetPosition(var_307_cvector); // 0x44a ObjFunc
	var_302_cvector = var_307_cvector - var_306_cvector; // 0x44c Sub2
	return 4; // 0x44d Return
}


func_717(var_0_object, var_4_float, var_291_bool)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_float = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_object = Obj(); var_298_bool = 0; var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); // 0x2cd PushV
	GetScene(var_297_object); // 0x2ce Func
	var_298_bool = 0; // 0x2d0 MovB
	
Label_721:
	var_302_cvector = CVector(0,0,0); var_303_object = Obj(); // 0x2d1 PushV
	var_303_object = var_0_object; // 0x2d2 MovT
	func_1095(var_303_object); // 0x2d3 NEW_2
	var_308_int = -var_302_cvector; // 0x2d5 Neg
	FindDirLength(var_299_float, var_308_int, var_299_float); // 0x2d6 Func
	var_309_bool = var_299_float < var_4_float; // 0x2d8 LT
	if(var_309_bool == 0) goto Label_731; // 0x2d9 JumpB
	goto Label_759; // 0x2da Jump
	
Label_759:
	var_291_bool = var_298_bool; // 0x2f7 Mov
	return 10; // 0x2f8 Return
	
Label_731:
	Face(var_0_object); // 0x2db Func
	var_310_string = "all"; // 0x2dd PushS
	var_311_string = "bjump"; // 0x2de PushS
	PlayAnimation(var_310_string, var_311_string); // 0x2df Func
	GetPFPosition(var_300_cvector); // 0x2e1 TObjFunc
	GetPFPosition(var_301_cvector); // 0x2e3 Func
	WaitForAnimEnd(); // 0x2e5 Func
	func_805(var_301_cvector); // 0x2e8 NEW_2
	StopAsync(); // 0x2ea Func
	var_312_cvector = CVector(0.0, 0.0, 0.0); // 0x2ec PushVec
	SetSpeed(var_312_cvector); // 0x2ed Func
	var_298_bool = 1; // 0x2ef MovB
	var_313_bool = 0; // 0x2f0 PushV
	func_673(var_301_cvector, var_313_bool); // 0x2f1 NEW_2
	var_314_bool = var_313_bool == 0; // 0x2f3 Not
	if(var_314_bool == 0) goto Label_758; // 0x2f4 JumpB
	goto Label_759; // 0x2f5 Jump
	
Label_758:
	goto Label_721; // 0x2f6 Jump
}


func_1102(var_126_bool, var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x44e PushV
	IsPlayerActor(var_127_object, var_129_bool); // 0x44f Func
	var_126_bool = var_129_bool; // 0x451 Mov
	return 2; // 0x452 Return
}


func_1359()
{
	var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); // 0x54f PushV
	GetPosition(var_209_cvector); // 0x550 ObjFunc
	GetPosition(var_210_cvector); // 0x552 Func
	var_211_cvector = var_209_cvector - var_210_cvector; // 0x554 Sub2
	var_212_float = GetByIndex(var_211_cvector, 0); // 0x555 PushE
	var_213_float = GetByIndex(var_211_cvector, 2); // 0x556 PushE
	RotateAsync(var_212_float, var_213_float); // 0x557 Func
	return 6; // 0x559 Return
}


func_1486(var_10_object)
{
	var_11_object = Obj(); // 0x5cf PushV
	var_11_object = var_10_object; // 0x5d0 Mov
	TaskCall(0); // 0x5d1 TaskCall
	func_0(var_11_object); // 0x5d2 NEW_2
	TaskReturn(); // 0x5d3 TaskReturn
	return 0; // 0x5d5 Return
}


func_1233(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x4d1 PushV
	var_41_bool = var_26_object == 0; // 0x4d2 NullEq
	if(var_41_bool == 0) goto Label_1237; // 0x4d3 JumpB
	return 14; // 0x4d4 Return
	
Label_1237:
	IsDead(var_34_bool); // 0x4d5 Func
	var_42_bool = var_34_bool; // 0x4d7 Push
	if(var_42_bool == 0) goto Label_1242; // 0x4d8 JumpB
	return 14; // 0x4d9 Return
	
Label_1242:
	GetSecondaryAnimationType(var_35_int); // 0x4da Func
	var_43_int = 0; // 0x4dc PushI
	var_44_bool = var_35_int < var_43_int; // 0x4dd LT
	if(var_44_bool == 0) goto Label_1248; // 0x4de JumpB
	return 14; // 0x4df Return
	
Label_1248:
	GetPosition(var_36_cvector); // 0x4e0 ObjFunc
	GetPosition(var_37_cvector); // 0x4e2 Func
	GetDirection(var_38_cvector); // 0x4e4 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x4e6 Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x4e7 PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x4e8 PushE
	var_47_float = var_45_float * var_46_float; // 0x4e9 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x4ea PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x4eb PushE
	var_50_float = var_48_float * var_49_float; // 0x4ec Mult
	var_51_int = var_47_float + var_50_float; // 0x4ed Add
	var_52_int = 0; // 0x4ee PushI
	var_53_bool = var_51_int >= var_52_int; // 0x4ef GE
	if(var_53_bool == 0) goto Label_1267; // 0x4f0 JumpB
	var_40_string = "fhit"; // 0x4f1 MovS
	goto Label_1268; // 0x4f2 Jump
	
Label_1268:
	var_54_string = "hit_react"; // 0x4f4 PushS
	var_55_string = "1"; // 0x4f5 PushS
	var_56_int = var_40_string + var_55_string; // 0x4f6 Add
	var_57_string = "2"; // 0x4f7 PushS
	var_58_int = var_40_string + var_57_string; // 0x4f8 Add
	var_59_int = -10; // 0x4f9 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x4fa Func
	return 14; // 0x4fc Return
	
Label_1267:
	var_40_string = "bhit"; // 0x4f3 MovS
}


func_466(var_0_object, var_320_bool, var_321_float)
{
	var_322_int = 0; var_323_bool = 0; var_324_int = 0; var_325_string = ""; var_326_int = 0; var_327_bool = 0; var_328_int = 0; var_329_string = ""; // 0x1d2 PushV
	func_805(var_329_string); // 0x1d4 NEW_2
	irand(var_326_int, var_329_string); // 0x1d6 Func
	var_330_int = 1; // 0x1d8 PushI
	var_326_int = var_326_int + var_330_int; // 0x1d9 Add2
	Face(var_0_object); // 0x1da Func
	var_331_bool = 1; // 0x1dc PushB
	SetAttackState(var_331_bool); // 0x1dd Func
	func_1475(); // 0x1e0 NEW_2
	var_336_string = "all"; // 0x1e2 PushS
	var_337_string = "attack_begin"; // 0x1e3 PushS
	var_338_int = var_337_string + var_326_int; // 0x1e4 Add
	PlayAnimation(var_336_string, var_338_int); // 0x1e5 Func
	WaitForAnimEnd(); // 0x1e7 Func
	func_773(var_328_int, var_329_string); // 0x1ea NEW_2
	var_354_bool = 0; var_355_object = Obj(); // 0x1ec PushV
	var_355_object = var_0_object; // 0x1ed MovT
	func_156(var_354_bool, var_355_object); // 0x1ee NEW_2
	var_356_bool = var_354_bool == 0; // 0x1f0 Not
	if(var_356_bool == 0) goto Label_502; // 0x1f1 JumpB
	StopAsync(); // 0x1f2 Func
	var_320_bool = 0; // 0x1f4 MovB
	return 8; // 0x1f5 Return
	
Label_502:
	var_357_float = 0; var_358_int = 0; // 0x1f6 PushV
	var_357_float = var_321_float; // 0x1f7 Mov
	var_358_int = var_326_int; // 0x1f8 Mov
	func_427(var_329_string, var_357_float, var_358_int); // 0x1f9 NEW_2
	var_441_string = "all"; // 0x1fb PushS
	var_442_string = "attack_middle"; // 0x1fc PushS
	var_443_int = var_442_string + var_326_int; // 0x1fd Add
	HasAnimation(var_327_bool, var_441_string, var_443_int); // 0x1fe Func
	var_444_bool = var_327_bool; // 0x200 Push
	if(var_444_bool == 0) goto Label_583; // 0x201 JumpB
	func_1475(); // 0x203 NEW_2
	var_445_string = "all"; // 0x205 PushS
	var_446_string = "attack_middle"; // 0x206 PushS
	var_447_int = var_446_string + var_326_int; // 0x207 Add
	PlayAnimation(var_445_string, var_447_int); // 0x208 Func
	WaitForAnimEnd(); // 0x20a Func
	func_805(var_329_string); // 0x20d NEW_2
	var_448_bool = 0; var_449_object = Obj(); // 0x20f PushV
	var_449_object = var_0_object; // 0x210 MovT
	func_156(var_448_bool, var_449_object); // 0x211 NEW_2
	var_450_bool = var_448_bool == 0; // 0x213 Not
	if(var_450_bool == 0) goto Label_537; // 0x214 JumpB
	StopAsync(); // 0x215 Func
	var_320_bool = 0; // 0x217 MovB
	return 8; // 0x218 Return
	
Label_537:
	var_451_float = 0; var_452_int = 0; // 0x219 PushV
	var_451_float = var_321_float; // 0x21a Mov
	var_452_int = var_326_int; // 0x21b Mov
	func_427(var_329_string, var_451_float, var_452_int); // 0x21c NEW_2
	var_328_int = 1; // 0x21e MovI
	
Label_543:
	var_453_string = "attack_middle"; // 0x21f PushS
	var_454_int = var_453_string + var_326_int; // 0x220 Add
	var_455_string = "_"; // 0x221 PushS
	var_456_int = var_454_int + var_455_string; // 0x222 Add
	var_329_string = var_456_int + var_328_int; // 0x223 Add2
	var_457_string = "all"; // 0x224 PushS
	HasAnimation(var_327_bool, var_457_string, var_329_string); // 0x225 Func
	var_458_bool = var_327_bool == 0; // 0x227 Not
	if(var_458_bool == 0) goto Label_554; // 0x228 JumpB
	goto Label_583; // 0x229 Jump
	
Label_583:
	var_459_bool = 0; // 0x247 PushB
	SetAttackState(var_459_bool); // 0x248 Func
	var_460_string = "all"; // 0x24a PushS
	var_461_string = "attack_end"; // 0x24b PushS
	var_462_int = var_461_string + var_326_int; // 0x24c Add
	PlayAnimation(var_460_string, var_462_int); // 0x24d Func
	var_463_bool = 0; // 0x24f PushV
	func_819(var_463_bool); // 0x250 NEW_2
	if(var_463_bool == 0) goto Label_601; // 0x252 JumpB
	var_464_bool = 0; var_465_float = 0; // 0x253 PushV
	var_465_float = 0.75; // 0x254 MovF
	func_603(var_464_bool, var_465_float); // 0x255 NEW_2
	StopAsync(); // 0x257 Func
	
Label_601:
	var_320_bool = 1; // 0x259 MovB
	return 8; // 0x25a Return
	
Label_554:
	func_1475(); // 0x22b NEW_2
	var_473_string = "all"; // 0x22d PushS
	PlayAnimation(var_473_string, var_329_string); // 0x22e Func
	WaitForAnimEnd(); // 0x230 Func
	func_805(var_329_string); // 0x233 NEW_2
	var_474_bool = 0; var_475_object = Obj(); // 0x235 PushV
	var_475_object = var_0_object; // 0x236 MovT
	func_156(var_474_bool, var_475_object); // 0x237 NEW_2
	var_476_bool = var_474_bool == 0; // 0x239 Not
	if(var_476_bool == 0) goto Label_575; // 0x23a JumpB
	StopAsync(); // 0x23b Func
	var_320_bool = 0; // 0x23d MovB
	return 8; // 0x23e Return
	
Label_575:
	var_477_float = 0; var_478_int = 0; // 0x23f PushV
	var_477_float = var_321_float; // 0x240 Mov
	var_478_int = var_326_int; // 0x241 Mov
	func_427(var_329_string, var_477_float, var_478_int); // 0x242 NEW_2
	var_479_int = 1; // 0x244 PushI
	var_328_int = var_328_int + var_479_int; // 0x245 Add2
	goto Label_543; // 0x246 Jump
}


func_1107(var_390_bool, var_391_object, var_392_string)
{
	var_393_bool = 0; var_394_bool = 0; // 0x453 PushV
	var_395_string = "HasProperty"; // 0x454 PushS
	var_396_int = 2; // 0x455 PushI
	var_397_bool = IsFuncExist(var_391_object, var_395_string, var_396_int); // 0x456 FuncExist
	var_398_bool = var_397_bool == 0; // 0x457 Not
	if(var_398_bool == 0) goto Label_1115; // 0x458 JumpB
	var_390_bool = 0; // 0x459 MovB
	return 2; // 0x45a Return
	
Label_1115:
	HasProperty(var_392_string, var_394_bool); // 0x45b ObjFunc
	var_390_bool = var_394_bool; // 0x45d Mov
	return 2; // 0x45e Return
}


func_1370(var_119_object)
{
	var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_cvector = CVector(0,0,0); // 0x55a PushV
	GetEyesHeight(var_122_float); // 0x55b ObjFunc
	var_123_cvector = CVector(0.0, 0.0, 0.0); // 0x55d MovV
	var_124_float = GetByIndex(var_123_cvector, 1); // 0x55e PushE
	var_124_float = var_122_float; // 0x55f Mov
	SetByIndex(var_123_cvector, 1) = var_124_float; // 0x560 PopE
	var_125_string = "head"; // 0x561 PushS
	LookAsync(var_119_object, var_125_string, var_123_cvector); // 0x562 Func
	return 4; // 0x564 Return
}


func_603(var_464_bool, var_465_float)
{
	var_466_float = 0; var_467_bool = 0; var_468_float = 0; var_469_bool = 0; // 0x25b PushV
	rand(var_468_float); // 0x25c Func
	var_470_bool = var_468_float < var_465_float; // 0x25e LT
	if(var_470_bool == 0) goto Label_623; // 0x25f JumpB
	
Label_608:
	IsAnimationPlaying(var_469_bool); // 0x260 Func
	var_471_bool = var_469_bool == 0; // 0x262 Not
	if(var_471_bool == 0) goto Label_613; // 0x263 JumpB
	goto Label_622; // 0x264 Jump
	
Label_622:
	goto Label_628; // 0x26e Jump
	
Label_628:
	var_464_bool = 0; // 0x274 MovB
	return 4; // 0x275 Return
	
Label_613:
	var_472_bool = 0; // 0x265 PushV
	func_701(var_472_bool); // 0x266 NEW_2
	if(var_472_bool == 0) goto Label_619; // 0x268 JumpB
	var_464_bool = 1; // 0x269 MovB
	return 4; // 0x26a Return
	
Label_619:
	sync(); // 0x26b Func
	goto Label_608; // 0x26d Jump
	
Label_623:
	WaitForAnimEnd(); // 0x26f Func
	func_805(var_469_bool); // 0x272 NEW_2
}


func_1119(var_371_float, var_372_object, var_373_float, var_374_int)
{
	var_378_int = 0; var_379_string = ""; var_380_int = 0; var_381_float = 0; var_382_float = 0; var_383_float = 0; var_384_int = 0; var_385_string = ""; var_386_int = 0; var_387_float = 0; var_388_float = 0; var_389_float = 0; // 0x45f PushV
	var_390_bool = 0; var_391_object = Obj(); var_392_string = ""; // 0x460 PushV
	var_391_object = var_372_object; // 0x461 Mov
	var_392_string = "health"; // 0x462 MovS
	func_1107(var_390_bool, var_391_object, var_392_string); // 0x463 NEW_2
	var_399_bool = var_390_bool == 0; // 0x465 Not
	if(var_399_bool == 0) goto Label_1129; // 0x466 JumpB
	var_371_float = 0.0; // 0x467 MovF
	return 12; // 0x468 Return
	
Label_1129:
	var_400_bool = 0; var_401_object = Obj(); var_402_string = ""; // 0x469 PushV
	var_401_object = var_372_object; // 0x46a Mov
	var_402_string = "armor"; // 0x46b MovS
	func_1107(var_400_bool, var_401_object, var_402_string); // 0x46c NEW_2
	var_403_bool = var_400_bool == 0; // 0x46e Not
	if(var_403_bool == 0) goto Label_1138; // 0x46f JumpB
	var_384_int = 0; // 0x470 MovI
	goto Label_1141; // 0x471 Jump
	
Label_1141:
	var_404_string = "armor_"; // 0x475 PushS
	var_405_string = ""; var_406_int = 0; // 0x476 PushV
	var_406_int = var_374_int; // 0x477 Mov
	func_1081(var_405_string, var_406_int); // 0x478 NEW_2
	var_385_string = var_404_string + var_405_string; // 0x47a Add2
	var_411_bool = 0; var_412_object = Obj(); var_413_string = ""; // 0x47b PushV
	var_412_object = var_372_object; // 0x47c Mov
	var_413_string = var_385_string; // 0x47d Mov
	func_1107(var_411_bool, var_412_object, var_413_string); // 0x47e NEW_2
	var_414_bool = var_411_bool == 0; // 0x480 Not
	if(var_414_bool == 0) goto Label_1156; // 0x481 JumpB
	var_386_int = 0; // 0x482 MovI
	goto Label_1158; // 0x483 Jump
	
Label_1158:
	var_415_float = 0; var_416_float = 0; var_417_float = 0; // 0x486 PushV
	var_418_int = var_384_int + var_386_int; // 0x487 Add
	var_419_float = 100.0; // 0x488 PushF
	var_416_float = var_418_int / var_418_int; // 0x489 Div2
	var_417_float = 1; // 0x48a MovI
	func_1438(var_415_float, var_416_float, var_417_float); // 0x48b NEW_2
	var_387_float = var_415_float; // 0x48c Mov
	var_421_string = "health"; // 0x48e PushS
	GetProperty(var_421_string, var_388_float); // 0x48f ObjFunc
	var_422_int = 1; // 0x491 PushI
	var_423_int = var_422_int - var_387_float; // 0x492 Sub
	var_389_float = var_373_float * var_423_int; // 0x493 Mult2
	var_424_string = "health"; // 0x494 PushS
	var_425_float = 0; var_426_float = 0; var_427_float = 0; var_428_float = 0; // 0x495 PushV
	var_426_float = var_388_float - var_389_float; // 0x496 Sub2
	var_427_float = 0; // 0x497 MovI
	var_428_float = 1; // 0x498 MovI
	func_1445(var_425_float, var_426_float, var_427_float, var_428_float); // 0x499 NEW_2
	SetProperty(var_424_string, var_425_float); // 0x49b ObjFunc
	var_431_bool = 0; var_432_object = Obj(); // 0x49d PushV
	var_432_object = var_372_object; // 0x49e Mov
	func_1102(var_431_bool, var_432_object); // 0x49f NEW_2
	if(var_431_bool == 0) goto Label_1190; // 0x4a1 JumpB
	var_433_float = 0; // 0x4a2 PushV
	var_433_float = -var_389_float; // 0x4a3 Neg2
	func_1456(var_433_float); // 0x4a4 NEW_2
	
Label_1190:
	var_371_float = var_389_float; // 0x4a6 Mov
	return 12; // 0x4a7 Return
	
Label_1156:
	GetProperty(var_385_string, var_386_int); // 0x484 ObjFunc
	
Label_1138:
	var_437_string = "armor"; // 0x472 PushS
	GetProperty(var_437_string, var_384_int); // 0x473 ObjFunc
}


func_100(var_34_string)
{
	RemoveRTEnvelope(); // 0x65 Func
	SetDeathState(); // 0x67 Func
	Stop(); // 0x69 Func
	StopAsync(); // 0x6b Func
	StopSecondaryAnimation(); // 0x6d Func
	var_35_string = ""; // 0x6f PushV
	var_35_string = var_34_string; // 0x70 Mov
	func_1381(var_35_string); // 0x71 NEW_2
	var_64_string = "all"; // 0x73 PushS
	PlayAnimation(var_64_string, var_34_string); // 0x74 Func
	WaitForAnimEnd(); // 0x76 Func
	var_65_string = "all"; // 0x78 PushS
	LockAnimationEnd(var_65_string, var_34_string); // 0x79 Func
	RemoveEnvelope(); // 0x7b Func
	return 0; // 0x7d Return
}


func_1381(var_228_string)
{
	var_229_bool = 0; var_230_int = 0; var_231_bool = 0; var_232_int = 0; var_233_bool = 0; var_234_float = 0; var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_bool = 0; var_238_int = 0; var_239_bool = 0; var_240_int = 0; var_241_bool = 0; var_242_float = 0; var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); // 0x565 PushV
	IsExisting3DSound(var_237_bool, var_228_string); // 0x566 Func
	var_245_bool = var_237_bool == 0; // 0x568 Not
	if(var_245_bool == 0) goto Label_1406; // 0x569 JumpB
	var_238_int = 0; // 0x56a MovI
	
Label_1387:
	var_246_int = 1; // 0x56b PushI
	var_247_int = var_238_int + var_246_int; // 0x56c Add
	var_248_int = var_228_string + var_247_int; // 0x56d Add
	IsExisting3DSound(var_239_bool, var_248_int); // 0x56e Func
	var_249_bool = var_239_bool == 0; // 0x570 Not
	if(var_249_bool == 0) goto Label_1395; // 0x571 JumpB
	goto Label_1398; // 0x572 Jump
	
Label_1398:
	var_250_bool = var_238_int == 0; // 0x576 Not
	if(var_250_bool == 0) goto Label_1401; // 0x577 JumpB
	return 16; // 0x578 Return
	
Label_1401:
	irand(var_240_int, var_238_int); // 0x579 Func
	var_251_int = 1; // 0x57b PushI
	var_252_int = var_240_int + var_251_int; // 0x57c Add
	var_228_string = var_228_string + var_252_int; // 0x57d Add2
	
Label_1406:
	Is3DSoundLoaded(var_241_bool, var_228_string); // 0x57e Func
	var_253_bool = var_241_bool; // 0x580 Push
	if(var_253_bool == 0) goto Label_1421; // 0x581 JumpB
	GetEyesHeight(var_242_float); // 0x582 Func
	GetDirection(var_243_cvector); // 0x584 Func
	var_254_int = 50; // 0x586 PushI
	var_244_cvector = var_243_cvector * var_254_int; // 0x587 Mult2
	var_255_float = GetByIndex(var_244_cvector, 1); // 0x588 PushE
	var_255_float = var_255_float + var_242_float; // 0x589 Add2
	SetByIndex(var_244_cvector, 1) = var_255_float; // 0x58a PopE
	PlayGlobalSound(var_228_string, var_244_cvector); // 0x58b Func
	
Label_1421:
	return 16; // 0x58d Return
	
Label_1395:
	var_256_int = 1; // 0x573 PushI
	var_238_int = var_238_int + var_256_int; // 0x574 Add2
	goto Label_1387; // 0x575 Jump
}


func_630(var_0_object, var_259_bool, var_260_float)
{
	var_261_bool = 0; var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_float = 0; var_266_bool = 0; var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_cvector = CVector(0,0,0); var_270_float = 0; // 0x276 PushV
	
Label_631:
	IsAnimationPlaying(var_266_bool); // 0x277 Func
	var_271_bool = var_266_bool == 0; // 0x279 Not
	if(var_271_bool == 0) goto Label_636; // 0x27a JumpB
	goto Label_668; // 0x27b Jump
	
Label_668:
	func_805(var_270_float); // 0x29d NEW_2
	var_259_bool = 0; // 0x29f MovB
	return 10; // 0x2a0 Return
	
Label_636:
	var_272_bool = 0; // 0x27c PushV
	func_701(var_272_bool); // 0x27d NEW_2
	if(var_272_bool == 0) goto Label_642; // 0x27f JumpB
	var_259_bool = 1; // 0x280 MovB
	return 10; // 0x281 Return
	
Label_642:
	var_315_bool = 0; var_316_object = Obj(); // 0x282 PushV
	var_316_object = var_0_object; // 0x283 MovT
	func_156(var_315_bool, var_316_object); // 0x284 NEW_2
	var_317_bool = var_315_bool == 0; // 0x286 Not
	if(var_317_bool == 0) goto Label_650; // 0x287 JumpB
	var_259_bool = 0; // 0x288 MovB
	return 10; // 0x289 Return
	
Label_650:
	GetPFPosition(var_267_cvector); // 0x28a TObjFunc
	GetPFPosition(var_268_cvector); // 0x28c Func
	var_269_cvector = var_267_cvector - var_268_cvector; // 0x28e Sub2
	var_270_float = var_269_cvector | var_269_cvector; // 0x28f Or2
	var_318_float = var_260_float * var_260_float; // 0x290 Mult
	var_319_bool = var_270_float < var_318_float; // 0x291 LT
	if(var_319_bool == 0) goto Label_665; // 0x292 JumpB
	var_320_bool = 0; var_321_float = 0; // 0x293 PushV
	var_321_float = var_260_float; // 0x294 Mov
	func_466(var_270_float, var_320_bool, var_321_float); // 0x295 NEW_2
	var_259_bool = 1; // 0x297 MovB
	return 10; // 0x298 Return
	
Label_665:
	sync(); // 0x299 Func
	goto Label_631; // 0x29b Jump
}


func_762(var_0_object, var_222_bool)
{
	var_223_bool = 0; var_224_bool = 0; // 0x2fa PushV
	var_225_string = "IsAttacking"; // 0x2fb PushS
	var_226_int = 1; // 0x2fc PushI
	var_227_bool = IsFuncExist(var_0_object, var_225_string, var_226_int); // 0x2fd FuncExist
	if(var_227_bool == 0) goto Label_771; // 0x2fe JumpB
	IsAttacking(var_224_bool); // 0x2ff TObjFunc
	var_222_bool = var_224_bool; // 0x301 Mov
	return 2; // 0x302 Return
	
Label_771:
	var_222_bool = 0; // 0x303 MovB
	return 2; // 0x304 Return
}


func_1277(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x4fd PushV
	var_34_bool = 0; // 0x4fe PushV
	var_34_bool = 0; // 0x4ff MovB
	var_35_bool = 0; // 0x500 PushV
	var_35_bool = 0; // 0x501 MovB
	var_36_object = var_13_object; // 0x502 Push
	if(var_36_object == 0) goto Label_1288; // 0x503 JumpB
	var_37_int = 4; // 0x504 PushI
	var_38_bool = var_14_int != var_37_int; // 0x505 Neq
	if(var_38_bool == 0) goto Label_1288; // 0x506 JumpB
	var_35_bool = 1; // 0x507 MovB
	
Label_1288:
	if(var_35_bool == 0) goto Label_1293; // 0x508 JumpB
	var_39_int = 5; // 0x509 PushI
	var_40_bool = var_14_int != var_39_int; // 0x50a Neq
	if(var_40_bool == 0) goto Label_1293; // 0x50b JumpB
	var_34_bool = 1; // 0x50c MovB
	
Label_1293:
	if(var_34_bool == 0) goto Label_1340; // 0x50d JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x50e PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x50f PushV
	var_44_object = var_13_object; // 0x510 Mov
	func_1095(var_44_object); // 0x511 NEW_2
	var_42_cvector = var_43_cvector; // 0x512 Mov
	func_1428(var_41_cvector, var_42_cvector); // 0x514 NEW_2
	var_25_cvector = var_41_cvector; // 0x515 Mov
	CreateVectorVector(var_26_object); // 0x517 Func
	var_27_int = 1; // 0x519 MovI
	
Label_1306:
	var_54_string = "hit"; // 0x51a PushS
	var_55_int = var_54_string + var_27_int; // 0x51b Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x51c Func
	var_56_bool = var_28_bool == 0; // 0x51e Not
	if(var_56_bool == 0) goto Label_1313; // 0x51f JumpB
	goto Label_1322; // 0x520 Jump
	
Label_1322:
	size(var_31_int); // 0x52a ObjFunc
	var_57_int = var_31_int; // 0x52c Push
	if(var_57_int == 0) goto Label_1339; // 0x52d JumpB
	irand(var_32_int, var_31_int); // 0x52e Func
	get(var_33_cvector, var_32_int); // 0x530 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x532 PushV
	var_58_object = var_13_object; // 0x533 Mov
	var_59_int = var_14_int; // 0x534 Mov
	var_60_float = var_15_float; // 0x535 Mov
	var_61_cvector = var_33_cvector; // 0x536 Mov
	var_62_cvector = -var_25_cvector; // 0x537 Neg2
	func_1345(var_60_float, var_61_cvector, var_62_cvector); // 0x538 NEW_2
	return 18; // 0x53a Return
	
Label_1339:
	var_26_object = 0; // 0x53b SetNull
	
Label_1340:
	var_103_object = Obj(); // 0x53c PushV
	var_103_object = var_13_object; // 0x53d Mov
	func_1233(var_103_object); // 0x53e NEW_2
	return 18; // 0x540 Return
	
Label_1313:
	var_104_int = var_30_cvector | var_25_cvector; // 0x521 Or
	var_105_float = 0.70711; // 0x522 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x523 GE
	if(var_106_bool == 0) goto Label_1319; // 0x524 JumpB
	add(var_29_cvector); // 0x525 ObjFunc
	
Label_1319:
	var_107_int = 1; // 0x527 PushI
	var_27_int = var_27_int + var_107_int; // 0x528 Add2
	goto Label_1306; // 0x529 Jump
}


func_895(var_2_int)
{
	var_10_int = 1; // 0x37f PushI
	KillTimer(var_10_int); // 0x380 Func
	var_11_int = var_2_int; // 0x382 PushT
	if(var_11_int == 0) goto Label_904; // 0x383 JumpB
	var_2_int = 0; // 0x384 TMovB
	var_12_string = "head"; // 0x385 PushS
	UnlookAsync(var_12_string); // 0x386 Func
	
Label_904:
	func_1061(var_9_object); // 0x389 NEW_2
	return 0; // 0x38b Return
}


