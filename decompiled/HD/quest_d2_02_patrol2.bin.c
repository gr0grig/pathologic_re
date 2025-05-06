task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_cvector, var_17_cvector)
{
	var_18_int = 1; // 0xa2 PushI
	if(var_18_int == 0) goto Label_202; // 0xa3 JumpB
	func_2036(); // 0xa5 NEW_2
	var_20_int = 8308; // 0xa7 PushI
	var_21_bool = var_16_cvector == var_20_int; // 0xa8 Eq
	if(var_21_bool == 0) goto Label_190; // 0xa9 JumpB
	var_22_string = ""; // 0xaa PushV
	var_22_string = "Neutral"; // 0xab MovS
	func_139(var_17_cvector, var_22_string); // 0xac NEW_2
	var_39_int = 507526; // 0xae PushI
	SetMessage(var_39_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_40_int = 507527; // 0xb3 PushI
	var_41_int = -1; // 0xb4 PushI
	var_42_int = 8309; // 0xb5 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xb6 TObjFunc
	var_43_int = 533979; // 0xb8 PushI
	var_44_int = -1; // 0xb9 PushI
	var_45_int = 35550; // 0xba PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_3_string = 1; // 0xbe TMovB
	var_46_bool = 0; // 0xbf PushV
	func_2401(var_46_bool); // 0xc0 NEW_2
	if(var_46_bool == 0) goto Label_198; // 0xc2 JumpB
	lshStopAnimation(); // 0xc3 Func
	goto Label_200; // 0xc5 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_198:
	StopAnimation(); // 0xc6 Func
	
Label_202:
	return 0; // 0xca Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int, var_15_cvector, var_16_cvector)
{
	var_17_int = 1; // 0x3a8 PushI
	var_18_bool = var_16_cvector == var_17_int; // 0x3a9 Eq
	if(var_18_bool == 0) goto Label_944; // 0x3aa JumpB
	var_19_object = Obj(); // 0x3ab PushV
	var_19_object = var_1_object; // 0x3ac MovT
	func_2205(var_19_object); // 0x3ad NEW_2
	goto Label_948; // 0x3af Jump
	
Label_948:
	return 0; // 0x3b4 Return
	
Label_944:
	var_24_int = 0; // 0x3b0 PushV
	var_24_int = var_16_cvector; // 0x3b1 Mov
	func_1093(var_15_cvector, var_16_cvector, var_24_int); // 0x3b2 NEW_2
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; // 0x3c3 PushV
	var_17_bool = 0; // 0x3c4 MovB
	var_18_bool = var_1_object == var_16_cvector; // 0x3c5 Eq
	if(var_18_bool == 0) goto Label_970; // 0x3c6 JumpB
	var_19_bool = var_2_object == 0; // 0x3c7 Not
	if(var_19_bool == 0) goto Label_970; // 0x3c8 JumpB
	var_17_bool = 1; // 0x3c9 MovB
	
Label_970:
	if(var_17_bool == 0) goto Label_976; // 0x3ca JumpB
	var_2_object = 1; // 0x3cb TMovB
	var_20_object = Obj(); // 0x3cc PushV
	var_20_object = var_16_cvector; // 0x3cd Mov
	func_2010(var_20_object); // 0x3ce NEW_2
	
Label_976:
	return 0; // 0x3d0 Return
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; // 0x3d2 PushV
	var_17_bool = 0; // 0x3d3 MovB
	var_18_bool = var_1_object == var_16_cvector; // 0x3d4 Eq
	if(var_18_bool == 0) goto Label_985; // 0x3d5 JumpB
	var_19_object = var_2_object; // 0x3d6 PushT
	if(var_19_object == 0) goto Label_985; // 0x3d7 JumpB
	var_17_bool = 1; // 0x3d8 MovB
	
Label_985:
	if(var_17_bool == 0) goto Label_990; // 0x3d9 JumpB
	var_2_object = 0; // 0x3da TMovB
	var_20_string = "head"; // 0x3db PushS
	UnlookAsync(var_20_string); // 0x3dc Func
	
Label_990:
	return 0; // 0x3de Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	RequestClearPath(var_16_cvector); // 0x458 Func
	return 0; // 0x45a Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	func_949(var_16_cvector); // 0x464 NEW_2
	var_21_object = Obj(); // 0x466 PushV
	var_21_object = var_16_cvector; // 0x467 Mov
	func_2387(); // 0x468 NEW_2
	return 0; // 0x46a Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; var_18_bool = 0; // 0x483 PushV
	IsOverrideActive(var_18_bool); // 0x484 Func
	var_19_bool = var_18_bool == 0; // 0x486 Not
	if(var_19_bool == 0) goto Label_1164; // 0x487 JumpB
	var_20_object = Obj(); // 0x488 PushV
	var_20_object = var_16_cvector; // 0x489 Mov
	func_2248(var_20_object); // 0x48a NEW_2
	
Label_1164:
	return 2; // 0x48c Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	return 0; // 0x503 Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string, var_16_cvector, var_17_cvector)
{
	return 0; // 0x505 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	return 0; // 0x507 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_bool = 0; // 0x519 PushV
	func_1327(var_17_bool); // 0x51a NEW_2
	if(var_17_bool == 0) goto Label_1316; // 0x51c JumpB
	func_1413(); // 0x51e NEW_2
	var_18_object = Obj(); // 0x520 PushV
	var_18_object = var_16_object; // 0x521 Mov
	func_1288(var_18_object); // 0x522 NEW_2
	
Label_1316:
	return 0; // 0x524 Return
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_string)
{
	var_17_string = "kill_player"; // 0x526 PushS
	var_18_bool = var_16_string == var_17_string; // 0x527 Eq
	if(var_18_bool == 0) goto Label_1326; // 0x528 JumpB
	TaskCall(2); // 0x52a TaskCall
	func_203(); // 0x52b NEW_2
	TaskReturn(); // 0x52c TaskReturn
	
Label_1326:
	return 0; // 0x52e Return
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x8fe PushV
	var_19_bool = GlobalVars[0]; // 0x8ff PushGE
	if(var_19_bool == 0) goto Label_2306; // 0x900 JumpB
	return 2; // 0x901 Return
	
Label_2306:
	IsPlayerActor(var_16_object, var_18_bool); // 0x902 Func
	var_20_bool = var_18_bool; // 0x904 Push
	if(var_20_bool == 0) goto Label_2318; // 0x905 JumpB
	var_21_bool = GlobalVars[0]; // 0x906 PushGE
	var_21_bool = 1; // 0x907 MovB
	GlobalVars[0] = var_21_bool; // 0x908 PopGE
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; // 0x909 PushV
	var_23_string = "quest_d2_02"; // 0x90a MovS
	var_24_string = "player_attack"; // 0x90b MovS
	func_2184(var_22_bool, var_23_string, var_24_string); // 0x90c NEW_2
	
Label_2318:
	return 2; // 0x90e Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x90f PushV
	var_17_string = "quest_d2_02"; // 0x910 MovS
	var_18_string = "patrol2_unload"; // 0x911 MovS
	func_2184(var_16_bool, var_17_string, var_18_string); // 0x912 NEW_2
	return 0; // 0x914 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x935 PushV
	var_20_object = var_16_object; // 0x936 Mov
	var_21_int = var_17_int; // 0x937 Mov
	var_22_float = var_18_float; // 0x938 Mov
	func_1661(var_20_object, var_21_int, var_22_float); // 0x939 NEW_2
	return 0; // 0x93b Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x93d PushV
	var_22_object = var_16_object; // 0x93e Mov
	var_23_int = var_17_int; // 0x93f Mov
	var_24_float = var_18_float; // 0x940 Mov
	var_25_cvector = var_20_cvector; // 0x941 Mov
	var_26_cvector = var_21_cvector; // 0x942 Mov
	func_1729(var_24_float, var_25_cvector, var_26_cvector); // 0x943 NEW_2
	return 0; // 0x945 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x946 PushV
	var_20_string = "health"; // 0x947 PushS
	var_21_bool = var_17_string == var_20_string; // 0x948 Eq
	if(var_21_bool == 0) goto Label_2386; // 0x949 JumpB
	var_22_string = "health"; // 0x94a PushS
	GetProperty(var_22_string, var_19_float); // 0x94b Func
	var_23_int = 0; // 0x94d PushI
	var_24_bool = var_19_float <= var_23_int; // 0x94e LE
	if(var_24_bool == 0) goto Label_2386; // 0x94f JumpB
	SignalDeath(var_16_object); // 0x950 Func
	
Label_2386:
	return 2; // 0x952 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_object = Obj(); // 0x954 PushV
	var_17_object = var_16_object; // 0x955 Mov
	func_2325(var_17_object); // 0x956 NEW_2
	return 0; // 0x958 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector)
{
	var_16_bool = GlobalVars[0]; // 0x510 PushGE
	var_16_bool = 0; // 0x511 MovB
	GlobalVars[0] = var_16_bool; // 0x512 PopGE
	func_1329(var_14_cvector, var_15_cvector); // 0x514 NEW_2
	return 0; // 0x516 Return
}


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x0 PushV
	var_0_object = var_20_object; // 0x1 TMov
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x2 PushV
	var_31_object = var_20_object; // 0x3 Mov
	var_32_float = 70.0; // 0x4 MovF
	func_1754(var_31_object, var_32_float); // 0x5 NEW_2
	var_77_bool = var_30_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_19_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_26_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_2395(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_2393(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_2397(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_2399(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_2225(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_28_int = -1; // 0x26 MovI
	IsOverrideActive(var_27_bool); // 0x27 Func
	var_90_bool = var_27_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_19_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_26_object); // 0x2d Func
	var_91_bool = 0; var_92_object = Obj(); // 0x2f PushV
	var_93_object = Obj(); // 0x30 PushV
	func_2084(var_93_object); // 0x31 NEW_2
	var_92_object = var_93_object; // 0x32 Mov
	func_1841(var_91_bool, var_92_object); // 0x34 NEW_2
	var_186_object = Obj(); var_187_object = Obj(); // 0x36 PushV
	var_186_object = var_20_object; // 0x37 Mov
	var_187_object = var_26_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_188_object, var_189_object, var_190_string, var_191_bool, var_186_object, var_187_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_29_bool); // 0x3d ObjFunc
	
Label_63:
	var_235_bool = var_29_bool == 0; // 0x3f Not
	if(var_235_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_29_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_236_object = Obj(); // 0x46 PushV
	var_236_object = var_20_object; // 0x47 Mov
	func_1823(); // 0x48 NEW_2
	StopDialog(var_26_object); // 0x4a Func
	GetReturnValue(var_28_int); // 0x4c ObjFunc
	var_19_int = var_28_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1288(var_18_object)
{
	var_19_int = 0; var_20_object = Obj(); // 0x509 PushV
	var_20_object = var_18_object; // 0x50a Mov
	TaskCall(0); // 0x50b TaskCall
	func_0(var_21_object, var_19_int, var_20_object); // 0x50c NEW_2
	TaskReturn(); // 0x50d TaskReturn
	return 0; // 0x50f Return
}


func_778(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); // 0x30a PushV
	GetScene(var_327_object); // 0x30b Func
	var_328_bool = 0; // 0x30d MovB
	
Label_782:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj(); // 0x30e PushV
	var_333_object = var_0_object; // 0x30f MovT
	func_1433(var_333_object); // 0x310 NEW_2
	var_338_int = -var_332_cvector; // 0x312 Neg
	FindDirLength(var_329_float, var_338_int, var_329_float); // 0x313 Func
	var_339_bool = var_329_float < var_4_bool; // 0x315 LT
	if(var_339_bool == 0) goto Label_792; // 0x316 JumpB
	goto Label_820; // 0x317 Jump
	
Label_820:
	var_321_bool = var_328_bool; // 0x334 Mov
	return 10; // 0x335 Return
	
Label_792:
	Face(var_0_object); // 0x318 Func
	var_340_string = "all"; // 0x31a PushS
	var_341_string = "bjump"; // 0x31b PushS
	PlayAnimation(var_340_string, var_341_string); // 0x31c Func
	GetPFPosition(var_330_cvector); // 0x31e TObjFunc
	GetPFPosition(var_331_cvector); // 0x320 Func
	WaitForAnimEnd(); // 0x322 Func
	func_866(var_331_cvector); // 0x325 NEW_2
	StopAsync(); // 0x327 Func
	var_342_cvector = CVector(0.0, 0.0, 0.0); // 0x329 PushVec
	SetSpeed(var_342_cvector); // 0x32a Func
	var_328_bool = 1; // 0x32c MovB
	var_343_bool = 0; // 0x32d PushV
	func_734(var_331_cvector, var_343_bool); // 0x32e NEW_2
	var_344_bool = var_343_bool == 0; // 0x330 Not
	if(var_344_bool == 0) goto Label_819; // 0x331 JumpB
	goto Label_820; // 0x332 Jump
	
Label_819:
	goto Label_782; // 0x333 Jump
}


func_527(var_0_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = ""; // 0x20f PushV
	func_866(var_359_string); // 0x211 NEW_2
	irand(var_356_int, var_359_string); // 0x213 Func
	var_360_int = 1; // 0x215 PushI
	var_356_int = var_356_int + var_360_int; // 0x216 Add2
	Face(var_0_object); // 0x217 Func
	var_361_bool = 1; // 0x219 PushB
	SetAttackState(var_361_bool); // 0x21a Func
	func_2214(); // 0x21d NEW_2
	var_366_string = "all"; // 0x21f PushS
	var_367_string = "attack_begin"; // 0x220 PushS
	var_368_int = var_367_string + var_356_int; // 0x221 Add
	PlayAnimation(var_366_string, var_368_int); // 0x222 Func
	WaitForAnimEnd(); // 0x224 Func
	func_834(var_358_int, var_359_string); // 0x227 NEW_2
	var_384_bool = 0; var_385_object = Obj(); // 0x229 PushV
	var_385_object = var_0_object; // 0x22a MovT
	func_1593(var_384_bool, var_385_object); // 0x22b NEW_2
	var_386_bool = var_384_bool == 0; // 0x22d Not
	if(var_386_bool == 0) goto Label_563; // 0x22e JumpB
	StopAsync(); // 0x22f Func
	var_350_bool = 0; // 0x231 MovB
	return 8; // 0x232 Return
	
Label_563:
	var_387_float = 0; var_388_int = 0; // 0x233 PushV
	var_387_float = var_351_float; // 0x234 Mov
	var_388_int = var_356_int; // 0x235 Mov
	func_488(var_359_string, var_387_float, var_388_int); // 0x236 NEW_2
	var_469_string = "all"; // 0x238 PushS
	var_470_string = "attack_middle"; // 0x239 PushS
	var_471_int = var_470_string + var_356_int; // 0x23a Add
	HasAnimation(var_357_bool, var_469_string, var_471_int); // 0x23b Func
	var_472_bool = var_357_bool; // 0x23d Push
	if(var_472_bool == 0) goto Label_644; // 0x23e JumpB
	func_2214(); // 0x240 NEW_2
	var_473_string = "all"; // 0x242 PushS
	var_474_string = "attack_middle"; // 0x243 PushS
	var_475_int = var_474_string + var_356_int; // 0x244 Add
	PlayAnimation(var_473_string, var_475_int); // 0x245 Func
	WaitForAnimEnd(); // 0x247 Func
	func_866(var_359_string); // 0x24a NEW_2
	var_476_bool = 0; var_477_object = Obj(); // 0x24c PushV
	var_477_object = var_0_object; // 0x24d MovT
	func_1593(var_476_bool, var_477_object); // 0x24e NEW_2
	var_478_bool = var_476_bool == 0; // 0x250 Not
	if(var_478_bool == 0) goto Label_598; // 0x251 JumpB
	StopAsync(); // 0x252 Func
	var_350_bool = 0; // 0x254 MovB
	return 8; // 0x255 Return
	
Label_598:
	var_479_float = 0; var_480_int = 0; // 0x256 PushV
	var_479_float = var_351_float; // 0x257 Mov
	var_480_int = var_356_int; // 0x258 Mov
	func_488(var_359_string, var_479_float, var_480_int); // 0x259 NEW_2
	var_358_int = 1; // 0x25b MovI
	
Label_604:
	var_481_string = "attack_middle"; // 0x25c PushS
	var_482_int = var_481_string + var_356_int; // 0x25d Add
	var_483_string = "_"; // 0x25e PushS
	var_484_int = var_482_int + var_483_string; // 0x25f Add
	var_359_string = var_484_int + var_358_int; // 0x260 Add2
	var_485_string = "all"; // 0x261 PushS
	HasAnimation(var_357_bool, var_485_string, var_359_string); // 0x262 Func
	var_486_bool = var_357_bool == 0; // 0x264 Not
	if(var_486_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_644; // 0x266 Jump
	
Label_644:
	var_487_bool = 0; // 0x284 PushB
	SetAttackState(var_487_bool); // 0x285 Func
	var_488_string = "all"; // 0x287 PushS
	var_489_string = "attack_end"; // 0x288 PushS
	var_490_int = var_489_string + var_356_int; // 0x289 Add
	PlayAnimation(var_488_string, var_490_int); // 0x28a Func
	var_491_bool = 0; // 0x28c PushV
	func_880(var_491_bool); // 0x28d NEW_2
	if(var_491_bool == 0) goto Label_662; // 0x28f JumpB
	var_492_bool = 0; var_493_float = 0; // 0x290 PushV
	var_493_float = 0.75; // 0x291 MovF
	func_664(var_492_bool, var_493_float); // 0x292 NEW_2
	StopAsync(); // 0x294 Func
	
Label_662:
	var_350_bool = 1; // 0x296 MovB
	return 8; // 0x297 Return
	
Label_615:
	func_2214(); // 0x268 NEW_2
	var_501_string = "all"; // 0x26a PushS
	PlayAnimation(var_501_string, var_359_string); // 0x26b Func
	WaitForAnimEnd(); // 0x26d Func
	func_866(var_359_string); // 0x270 NEW_2
	var_502_bool = 0; var_503_object = Obj(); // 0x272 PushV
	var_503_object = var_0_object; // 0x273 MovT
	func_1593(var_502_bool, var_503_object); // 0x274 NEW_2
	var_504_bool = var_502_bool == 0; // 0x276 Not
	if(var_504_bool == 0) goto Label_636; // 0x277 JumpB
	StopAsync(); // 0x278 Func
	var_350_bool = 0; // 0x27a MovB
	return 8; // 0x27b Return
	
Label_636:
	var_505_float = 0; var_506_int = 0; // 0x27c PushV
	var_505_float = var_351_float; // 0x27d Mov
	var_506_int = var_356_int; // 0x27e Mov
	func_488(var_359_string, var_505_float, var_506_int); // 0x27f NEW_2
	var_507_int = 1; // 0x281 PushI
	var_358_int = var_358_int + var_507_int; // 0x282 Add2
	goto Label_604; // 0x283 Jump
}


func_1552(var_105_bool)
{
	var_107_bool = 0; var_108_bool = 0; // 0x610 PushV
	IsDead(var_108_bool); // 0x611 ObjFunc
	var_105_bool = var_108_bool; // 0x613 Mov
	return 2; // 0x614 Return
}


func_1557(var_94_bool, var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj(); var_99_object = Obj(); // 0x615 PushV
	var_100_bool = var_95_object == 0; // 0x616 NullEq
	if(var_100_bool == 0) goto Label_1562; // 0x617 JumpB
	var_94_bool = 0; // 0x618 MovB
	return 4; // 0x619 Return
	
Label_1562:
	var_101_bool = 0; // 0x61a PushV
	var_101_bool = 0; // 0x61b MovB
	var_102_string = "IsDead"; // 0x61c PushS
	var_103_int = 1; // 0x61d PushI
	var_104_bool = IsFuncExist(var_95_object, var_102_string, var_103_int); // 0x61e FuncExist
	if(var_104_bool == 0) goto Label_1574; // 0x61f JumpB
	var_105_bool = 0; var_106_object = Obj(); // 0x620 PushV
	var_106_object = var_95_object; // 0x621 Mov
	func_1552(var_106_object); // 0x622 NEW_2
	if(var_105_bool == 0) goto Label_1574; // 0x624 JumpB
	var_101_bool = 1; // 0x625 MovB
	
Label_1574:
	if(var_101_bool == 0) goto Label_1577; // 0x626 JumpB
	var_94_bool = 0; // 0x627 MovB
	return 4; // 0x628 Return
	
Label_1577:
	GetScene(var_98_object); // 0x629 Func
	var_109_bool = var_98_object == 0; // 0x62b NullEq
	if(var_109_bool == 0) goto Label_1583; // 0x62c JumpB
	var_94_bool = 0; // 0x62d MovB
	return 4; // 0x62e Return
	
Label_1583:
	GetScene(var_99_object); // 0x62f ObjFunc
	var_110_bool = var_98_object != var_99_object; // 0x631 Neq
	if(var_110_bool == 0) goto Label_1589; // 0x632 JumpB
	var_94_bool = 0; // 0x633 MovB
	return 4; // 0x634 Return
	
Label_1589:
	var_94_bool = 1; // 0x635 MovB
	return 4; // 0x636 Return
}


func_2325(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x915 PushV
	var_20_string = "revolver_ammo"; // 0x916 PushS
	var_21_int = 0; // 0x917 PushI
	var_22_int = 2; // 0x918 PushI
	AddItem(var_19_bool, var_20_string, var_21_int, var_22_int); // 0x919 Func
	var_23_string = "alpha_pills"; // 0x91b PushS
	var_24_int = 0; // 0x91c PushI
	var_25_int = 2; // 0x91d PushI
	AddItem(var_19_bool, var_23_string, var_24_int, var_25_int); // 0x91e Func
	var_26_bool = 0; var_27_object = Obj(); // 0x920 PushV
	var_27_object = var_17_object; // 0x921 Mov
	func_1440(var_26_bool, var_27_object); // 0x922 NEW_2
	if(var_26_bool == 0) goto Label_2346; // 0x924 JumpB
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x925 PushV
	var_31_object = var_17_object; // 0x926 Mov
	var_32_float = -0.15; // 0x927 MovF
	func_2122(var_30_bool, var_31_object, var_32_float); // 0x928 NEW_2
	
Label_2346:
	func_2278(); // 0x92b NEW_2
	var_88_object = Obj(); // 0x92d PushV
	var_88_object = var_17_object; // 0x92e Mov
	TaskCall(4); // 0x92f TaskCall
	func_1142(var_88_object); // 0x930 NEW_2
	TaskReturn(); // 0x931 TaskReturn
	return 2; // 0x933 Return
}


func_1303()
{
	return 0; // 0x517 Return
}


func_1823()
{
	var_237_bool = 0; var_238_bool = 0; // 0x71f PushV
	var_239_bool = 1; // 0x720 PushB
	CameraSwitchToNormal(var_239_bool); // 0x721 Func
	var_240_bool = 0; // 0x723 PushV
	func_2401(var_240_bool); // 0x724 NEW_2
	if(var_240_bool == 0) goto Label_1832; // 0x726 JumpB
	goto Label_1840; // 0x727 Jump
	
Label_1840:
	return 2; // 0x730 Return
	
Label_1832:
	var_241_string = "head"; // 0x728 PushS
	HasAnimationTrack(var_238_bool, var_241_string); // 0x729 Func
	var_242_bool = var_238_bool; // 0x72b Push
	if(var_242_bool == 0) goto Label_1840; // 0x72c JumpB
	var_243_string = "head"; // 0x72d PushS
	UnlookAsync(var_243_string); // 0x72e Func
}


func_2084(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x824 PushV
	self(var_86_object); // 0x825 Func
	var_84_object = var_86_object; // 0x827 Mov
	return 2; // 0x828 Return
}


func_2090(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x82a PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x82b Or
	var_57_float = sqrt(var_58_int); // 0x82c Sqrt2
	var_59_float = 0.0; // 0x82d PushF
	var_60_bool = var_57_float < var_59_float; // 0x82e LT
	if(var_60_bool == 0) goto Label_2098; // 0x82f JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x830 MovV
	return 2; // 0x831 Return
	
Label_2098:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x832 Div2
	return 2; // 0x833 Return
}


func_1327(var_17_bool)
{
	var_17_bool = 1; // 0x52f MovB
	return 0; // 0x530 Return
}


func_1841(var_91_bool, var_92_object)
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x731 PushV
	var_100_string = "voice_common"; // 0x732 PushS
	GetVariable(var_100_string, var_98_int); // 0x733 Func
	var_101_int = var_98_int; // 0x735 Push
	if(var_101_int == 0) goto Label_1879; // 0x736 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x737 PushV
	var_103_object = var_92_object; // 0x738 Mov
	func_1899(var_103_object); // 0x739 NEW_2
	var_132_bool = var_102_bool == 0; // 0x73b Not
	if(var_132_bool == 0) goto Label_1861; // 0x73c JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x73d PushV
	var_134_object = var_92_object; // 0x73e Mov
	func_1936(var_134_object); // 0x73f NEW_2
	var_168_bool = var_133_bool == 0; // 0x741 Not
	if(var_168_bool == 0) goto Label_1861; // 0x742 JumpB
	var_91_bool = 0; // 0x743 MovB
	return 4; // 0x744 Return
	
Label_1861:
	var_169_int = 2; // 0x745 PushI
	irand(var_99_int, var_169_int); // 0x746 Func
	var_170_int = var_99_int; // 0x748 Push
	if(var_170_int == 0) goto Label_1874; // 0x749 JumpB
	var_171_string = "voice_common"; // 0x74a PushS
	var_172_int = 1; // 0x74b PushI
	var_173_int = var_98_int + var_172_int; // 0x74c Add
	var_174_int = 3; // 0x74d PushI
	var_175_int = var_173_int / var_174_int; // 0x74e Mod
	SetVariable(var_171_string, var_175_int); // 0x74f Func
	goto Label_1878; // 0x751 Jump
	
Label_1878:
	goto Label_1897; // 0x756 Jump
	
Label_1897:
	var_91_bool = 1; // 0x769 MovB
	return 4; // 0x76a Return
	
Label_1874:
	var_176_string = "voice_common"; // 0x752 PushS
	var_177_int = 0; // 0x753 PushI
	SetVariable(var_176_string, var_177_int); // 0x754 Func
	
Label_1879:
	var_178_bool = 0; var_179_object = Obj(); // 0x757 PushV
	var_179_object = var_92_object; // 0x758 Mov
	func_1936(var_179_object); // 0x759 NEW_2
	var_180_bool = var_178_bool == 0; // 0x75b Not
	if(var_180_bool == 0) goto Label_1893; // 0x75c JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x75d PushV
	var_182_object = var_92_object; // 0x75e Mov
	func_1899(var_182_object); // 0x75f NEW_2
	var_183_bool = var_181_bool == 0; // 0x761 Not
	if(var_183_bool == 0) goto Label_1893; // 0x762 JumpB
	var_91_bool = 0; // 0x763 MovB
	return 4; // 0x764 Return
	
Label_1893:
	var_184_string = "voice_common"; // 0x765 PushS
	var_185_int = 1; // 0x766 PushI
	SetVariable(var_184_string, var_185_int); // 0x767 Func
}


func_1329(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj(); // 0x531 PushV
	GetPFPosition(var_24_object); // 0x532 Func
	GetDirection(var_0_object); // 0x534 Func
	
Label_1334:
	func_1418(); // 0x537 NEW_2
	var_25_int = 10; // 0x539 PushI
	irand(var_21_int, var_25_int); // 0x53a Func
	var_26_int = 5; // 0x53c PushI
	var_27_int = var_21_int + var_26_int; // 0x53d Add
	Sleep(var_27_int, var_22_bool); // 0x53e Func
	var_28_bool = var_22_bool; // 0x540 Push
	if(var_28_bool == 0) goto Label_1350; // 0x541 JumpB
	func_1303(); // 0x543 NEW_2
	goto Label_1411; // 0x545 Jump
	
Label_1411:
	goto Label_1334; // 0x583 Jump
	
Label_1350:
	func_1418(); // 0x547 NEW_2
	GetPFPosition(var_23_cvector); // 0x549 Func
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x54b PushV
	var_30_cvector = var_1_object; // 0x54c MovT
	var_31_cvector = var_23_cvector; // 0x54d Mov
	func_2100(var_29_float, var_30_cvector, var_31_cvector); // 0x54e NEW_2
	var_34_int = 40000; // 0x550 PushI
	var_35_bool = var_29_float > var_34_int; // 0x551 GT
	if(var_35_bool == 0) goto Label_1397; // 0x552 JumpB
	FindPathTo(var_24_object, var_24_object); // 0x553 Func
	var_36_bool = var_24_object != 0; // 0x555 NullNeq
	if(var_36_bool == 0) goto Label_1392; // 0x556 JumpB
	RotatePath(var_24_object, var_22_bool); // 0x557 Func
	var_37_bool = var_22_bool == 0; // 0x559 Not
	if(var_37_bool == 0) goto Label_1372; // 0x55a JumpB
	goto Label_1410; // 0x55b Jump
	
Label_1410:
	goto Label_1350; // 0x582 Jump
	
Label_1372:
	var_38_bool = 0; // 0x55c PushB
	FollowPath(var_24_object, var_38_bool, var_22_bool); // 0x55d Func
	var_39_bool = var_22_bool == 0; // 0x55f Not
	if(var_39_bool == 0) goto Label_1378; // 0x560 JumpB
	goto Label_1410; // 0x561 Jump
	
Label_1378:
	var_40_float = GetByIndex(var_0_object, 0); // 0x562 PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x563 PushE
	Rotate(var_40_float, var_41_float, var_22_bool); // 0x564 Func
	var_42_bool = var_22_bool == 0; // 0x566 Not
	if(var_42_bool == 0) goto Label_1385; // 0x567 JumpB
	goto Label_1410; // 0x568 Jump
	
Label_1385:
	WaitForAnimEnd(var_22_bool); // 0x569 Func
	var_43_bool = var_22_bool == 0; // 0x56b Not
	if(var_43_bool == 0) goto Label_1390; // 0x56c JumpB
	goto Label_1410; // 0x56d Jump
	
Label_1390:
	goto Label_1411; // 0x56e Jump
	
Label_1392:
	var_44_int = 1; // 0x570 PushI
	Sleep(var_44_int); // 0x571 Func
	var_24_object = 0; // 0x573 SetNull
	goto Label_1410; // 0x574 Jump
	
Label_1397:
	var_45_float = GetByIndex(var_0_object, 0); // 0x575 PushE
	var_46_float = GetByIndex(var_0_object, 2); // 0x576 PushE
	Rotate(var_45_float, var_46_float, var_22_bool); // 0x577 Func
	var_47_bool = var_22_bool == 0; // 0x579 Not
	if(var_47_bool == 0) goto Label_1404; // 0x57a JumpB
	goto Label_1410; // 0x57b Jump
	
Label_1404:
	WaitForAnimEnd(var_22_bool); // 0x57c Func
	var_48_bool = var_22_bool == 0; // 0x57e Not
	if(var_48_bool == 0) goto Label_1409; // 0x57f JumpB
	goto Label_1410; // 0x580 Jump
	
Label_1409:
	goto Label_1411; // 0x581 Jump
}


func_2100(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x834 PushV
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x835 Sub2
	var_29_float = var_33_cvector | var_33_cvector; // 0x836 Or2
	return 2; // 0x837 Return
}


func_823(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0; // 0x337 PushV
	var_255_string = "IsAttacking"; // 0x338 PushS
	var_256_int = 1; // 0x339 PushI
	var_257_bool = IsFuncExist(var_0_object, var_255_string, var_256_int); // 0x33a FuncExist
	if(var_257_bool == 0) goto Label_832; // 0x33b JumpB
	IsAttacking(var_254_bool); // 0x33c TObjFunc
	var_252_bool = var_254_bool; // 0x33e Mov
	return 2; // 0x33f Return
	
Label_832:
	var_252_bool = 0; // 0x340 MovB
	return 2; // 0x341 Return
}


func_2104(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float; // 0x839 LT
	if(var_444_bool == 0) goto Label_2109; // 0x83a JumpB
	var_439_float = var_440_float; // 0x83b Mov
	goto Label_2110; // 0x83c Jump
	
Label_2110:
	return 0; // 0x83e Return
	
Label_2109:
	var_439_float = var_441_float; // 0x83d Mov
}


func_1593(var_90_bool, var_91_object)
{
	var_92_int = 0; var_93_int = 0; // 0x639 PushV
	var_94_bool = 0; var_95_object = Obj(); // 0x63a PushV
	var_95_object = var_91_object; // 0x63b Mov
	func_1557(var_94_bool, var_95_object); // 0x63c NEW_2
	var_111_bool = var_94_bool == 0; // 0x63e Not
	if(var_111_bool == 0) goto Label_1602; // 0x63f JumpB
	var_90_bool = 0; // 0x640 MovB
	return 2; // 0x641 Return
	
Label_1602:
	var_112_bool = 0; var_113_object = Obj(); var_114_string = ""; // 0x642 PushV
	var_113_object = var_91_object; // 0x643 Mov
	var_114_string = "noaccess"; // 0x644 MovS
	func_1445(var_112_bool, var_113_object, var_114_string); // 0x645 NEW_2
	var_121_bool = var_112_bool == 0; // 0x647 Not
	if(var_121_bool == 0) goto Label_1611; // 0x648 JumpB
	var_90_bool = 1; // 0x649 MovB
	return 2; // 0x64a Return
	
Label_1611:
	var_122_string = "noaccess"; // 0x64b PushS
	GetProperty(var_122_string, var_93_int); // 0x64c ObjFunc
	var_123_int = 0; // 0x64e PushI
	var_90_bool = var_93_int == var_123_int; // 0x64f Eq2
	return 2; // 0x650 Return
}


func_2111(var_59_float, var_60_float, var_61_float, var_62_float)
{
	var_63_bool = var_60_float < var_61_float; // 0x840 LT
	if(var_63_bool == 0) goto Label_2116; // 0x841 JumpB
	var_59_float = var_61_float; // 0x842 Mov
	return 0; // 0x843 Return
	
Label_2116:
	var_64_bool = var_60_float > var_62_float; // 0x844 GT
	if(var_64_bool == 0) goto Label_2120; // 0x845 JumpB
	var_59_float = var_62_float; // 0x846 Mov
	return 0; // 0x847 Return
	
Label_2120:
	var_59_float = var_60_float; // 0x848 Mov
	return 0; // 0x849 Return
}


func_834(var_2_object, var_5_object)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0; // 0x342 PushV
	var_373_bool = var_2_object == 0; // 0x343 Not
	if(var_373_bool == 0) goto Label_838; // 0x344 JumpB
	return 4; // 0x345 Return
	
Label_838:
	var_374_object = var_5_object; // 0x346 PushT
	if(var_374_object == 0) goto Label_846; // 0x347 JumpB
	var_375_int = -1; // 0x348 PushI
	var_5_object = var_5_object + var_375_int; // 0x349 Add2
	var_376_int = 0; // 0x34a PushI
	var_377_bool = var_5_object > var_376_int; // 0x34b GT
	if(var_377_bool == 0) goto Label_846; // 0x34c JumpB
	return 4; // 0x34d Return
	
Label_846:
	rand(var_371_float); // 0x34e Func
	var_378_float = 0; // 0x350 PushV
	func_884(var_378_float); // 0x351 NEW_2
	var_379_bool = var_371_float < var_378_float; // 0x353 LT
	if(var_379_bool == 0) goto Label_865; // 0x354 JumpB
	irand(var_372_int, var_371_float); // 0x355 Func
	var_380_int = 1; // 0x357 PushI
	var_372_int = var_372_int + var_380_int; // 0x358 Add2
	var_381_string = "attack"; // 0x359 PushS
	var_382_int = var_381_string + var_372_int; // 0x35a Add
	Speak(var_382_int); // 0x35b Func
	var_383_int = 0; // 0x35d PushV
	func_882(var_383_int); // 0x35e NEW_2
	var_5_object = var_383_int; // 0x35f TMov
	
Label_865:
	return 4; // 0x361 Return
}


func_1093(var_0_object, var_1_object, var_24_int)
{
	var_25_int = 0; // 0x446 PushI
	var_26_bool = var_24_int != var_25_int; // 0x447 Neq
	if(var_26_bool == 0) goto Label_1098; // 0x448 JumpB
	return 0; // 0x449 Return
	
Label_1098:
	var_27_bool = 0; var_28_object = Obj(); // 0x44a PushV
	var_28_object = var_1_object; // 0x44b MovT
	func_1131(var_27_bool, var_28_object); // 0x44c NEW_2
	var_63_bool = var_27_bool == 0; // 0x44e Not
	if(var_63_bool == 0) goto Label_1105; // 0x44f JumpB
	var_0_object = 1; // 0x450 TMovB
	
Label_1105:
	var_64_int = 0; // 0x451 PushI
	KillTimer(var_64_int); // 0x452 Func
	Stop(); // 0x454 Func
	return 0; // 0x456 Return
}


func_2122(var_30_bool, var_31_object, var_32_float)
{
	var_33_bool = var_31_object == 0; // 0x84b Not
	if(var_33_bool == 0) goto Label_2127; // 0x84c JumpB
	var_30_bool = 0; // 0x84d MovB
	return 0; // 0x84e Return
	
Label_2127:
	var_34_int = 0; // 0x84f PushI
	var_35_bool = var_32_float > var_34_int; // 0x850 GT
	if(var_35_bool == 0) goto Label_2134; // 0x851 JumpB
	var_36_int = 8; // 0x852 PushI
	SendWorldWndMessage(var_36_int); // 0x853 Func
	goto Label_2143; // 0x855 Jump
	
Label_2143:
	var_37_float = 0; // 0x85f PushV
	var_37_float = var_32_float; // 0x860 Mov
	func_2174(var_37_float); // 0x861 NEW_2
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x863 PushV
	var_42_object = var_31_object; // 0x864 Mov
	var_43_string = "reputation"; // 0x865 MovS
	var_44_float = var_32_float; // 0x866 Mov
	var_45_float = 0; // 0x867 MovI
	var_46_float = 1; // 0x868 MovI
	func_1457(var_41_bool, var_42_object, var_43_string, var_44_float, var_45_float, var_46_float); // 0x869 NEW_2
	var_30_bool = 1; // 0x86b MovB
	return 0; // 0x86c Return
	
Label_2134:
	var_65_int = 0; // 0x856 PushI
	var_66_bool = var_32_float < var_65_int; // 0x857 LT
	if(var_66_bool == 0) goto Label_2141; // 0x858 JumpB
	var_67_int = 9; // 0x859 PushI
	SendWorldWndMessage(var_67_int); // 0x85a Func
	goto Label_2143; // 0x85c Jump
	
Label_2141:
	var_30_bool = 0; // 0x85d MovB
	return 0; // 0x85e Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_186_object, var_187_object)
{
	var_0_object = var_187_object; // 0x52 TMov
	var_1_object = var_186_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_192_int = 1; // 0x55 PushI
	if(var_192_int == 0) goto Label_109; // 0x56 JumpB
	var_193_string = ""; // 0x57 PushV
	var_193_string = "Neutral"; // 0x58 MovS
	func_139(var_187_object, var_193_string); // 0x59 NEW_2
	var_210_int = 507526; // 0x5b PushI
	SetMessage(var_210_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_211_int = 507527; // 0x60 PushI
	var_212_int = -1; // 0x61 PushI
	var_213_int = 8309; // 0x62 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x63 TObjFunc
	var_214_int = 533979; // 0x65 PushI
	var_215_int = -1; // 0x66 PushI
	var_216_int = 35550; // 0x67 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_217_bool = 0; // 0x6d PushV
	func_2401(var_217_bool); // 0x6e NEW_2
	if(var_217_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_218_string = var_3_string; // 0x73 PushT
	if(var_218_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_219_string = ""; // 0x76 PushV
	var_219_string = var_2_object; // 0x77 MovT
	func_1979(var_219_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_230_string = "all"; // 0x7c PushS
	var_231_string = "idle"; // 0x7d PushS
	PlayAnimation(var_230_string, var_231_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_232_string = var_3_string; // 0x82 PushT
	if(var_232_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_233_string = "all"; // 0x85 PushS
	var_234_string = "idle"; // 0x86 PushS
	PlayAnimation(var_233_string, var_234_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1617(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x651 PushV
	var_48_bool = var_33_object == 0; // 0x652 NullEq
	if(var_48_bool == 0) goto Label_1621; // 0x653 JumpB
	return 14; // 0x654 Return
	
Label_1621:
	IsDead(var_41_bool); // 0x655 Func
	var_49_bool = var_41_bool; // 0x657 Push
	if(var_49_bool == 0) goto Label_1626; // 0x658 JumpB
	return 14; // 0x659 Return
	
Label_1626:
	GetSecondaryAnimationType(var_42_int); // 0x65a Func
	var_50_int = 0; // 0x65c PushI
	var_51_bool = var_42_int < var_50_int; // 0x65d LT
	if(var_51_bool == 0) goto Label_1632; // 0x65e JumpB
	return 14; // 0x65f Return
	
Label_1632:
	GetPosition(var_43_cvector); // 0x660 ObjFunc
	GetPosition(var_44_cvector); // 0x662 Func
	GetDirection(var_45_cvector); // 0x664 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x666 Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x667 PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x668 PushE
	var_54_float = var_52_float * var_53_float; // 0x669 Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x66a PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x66b PushE
	var_57_float = var_55_float * var_56_float; // 0x66c Mult
	var_58_int = var_54_float + var_57_float; // 0x66d Add
	var_59_int = 0; // 0x66e PushI
	var_60_bool = var_58_int >= var_59_int; // 0x66f GE
	if(var_60_bool == 0) goto Label_1651; // 0x670 JumpB
	var_47_string = "fhit"; // 0x671 MovS
	goto Label_1652; // 0x672 Jump
	
Label_1652:
	var_61_string = "hit_react"; // 0x674 PushS
	var_62_string = "1"; // 0x675 PushS
	var_63_int = var_47_string + var_62_string; // 0x676 Add
	var_64_string = "2"; // 0x677 PushS
	var_65_int = var_47_string + var_64_string; // 0x678 Add
	var_66_int = -10; // 0x679 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x67a Func
	return 14; // 0x67c Return
	
Label_1651:
	var_47_string = "bhit"; // 0x673 MovS
}


func_2393(var_79_int)
{
	var_79_int = 515572; // 0x959 MovI
	return 0; // 0x95a Return
}


func_1115(var_0_object)
{
	var_0_object = 1; // 0x45b TMovB
	var_20_int = 0; // 0x45c PushI
	KillTimer(var_20_int); // 0x45d Func
	Stop(); // 0x45f Func
	return 0; // 0x461 Return
}


func_2395(var_78_int)
{
	var_78_int = 504031; // 0x95b MovI
	return 0; // 0x95c Return
}


func_2397(var_80_string)
{
	var_80_string = "ui/NPC_Citizen2.png"; // 0x95d MovS
	return 0; // 0x95e Return
}


func_2399(var_81_string)
{
	var_81_string = "ui/NPC_Citizen2_b.png"; // 0x95f MovS
	return 0; // 0x960 Return
}


func_2401(var_73_bool)
{
	var_73_bool = 0; // 0x961 MovB
	return 0; // 0x962 Return
}


func_866(var_0_object)
{
	var_125_object = Obj(); // 0x362 PushV
	var_125_object = var_0_object; // 0x363 MovT
	func_2205(var_125_object); // 0x364 NEW_2
	return 0; // 0x366 Return
}


func_871(var_466_int)
{
	var_466_int = 0; // 0x367 MovI
	return 0; // 0x368 Return
}


func_873()
{
	var_258_string = ""; // 0x369 PushV
	var_258_string = "attack_stay"; // 0x36a MovS
	func_2043(var_258_string); // 0x36b NEW_2
	return 0; // 0x36d Return
}


func_1131(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj(); // 0x46c PushV
	var_186_object = var_184_object; // 0x46d Mov
	func_1593(var_185_bool, var_186_object); // 0x46e NEW_2
	var_183_bool = var_185_bool; // 0x46f Mov
	return 0; // 0x471 Return
}


func_1899(var_102_bool)
{
	var_104_string = ""; var_105_int = 0; var_106_bool = 0; var_107_int = 0; var_108_string = ""; var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; // 0x76b PushV
	var_109_string = "c"; // 0x76c MovS
	var_110_int = 0; // 0x76d MovI
	
Label_1902:
	var_114_int = 1; // 0x76e PushI
	if(var_114_int == 0) goto Label_1915; // 0x76f JumpB
	var_115_int = 1; // 0x770 PushI
	var_116_int = var_110_int + var_115_int; // 0x771 Add
	var_117_int = var_109_string + var_116_int; // 0x772 Add
	HasProperty(var_117_int, var_111_bool); // 0x773 ObjFunc
	var_118_bool = var_111_bool == 0; // 0x775 Not
	if(var_118_bool == 0) goto Label_1912; // 0x776 JumpB
	goto Label_1915; // 0x777 Jump
	
Label_1915:
	var_119_bool = var_110_int == 0; // 0x77b Not
	if(var_119_bool == 0) goto Label_1919; // 0x77c JumpB
	var_102_bool = 0; // 0x77d MovB
	return 10; // 0x77e Return
	
Label_1919:
	var_112_int = 0; // 0x77f MovI
	var_120_int = 1; // 0x780 PushI
	var_121_bool = var_110_int > var_120_int; // 0x781 GT
	if(var_121_bool == 0) goto Label_1925; // 0x782 JumpB
	irand(var_112_int, var_110_int); // 0x783 Func
	
Label_1925:
	var_122_int = 1; // 0x785 PushI
	var_123_int = var_112_int + var_122_int; // 0x786 Add
	var_124_int = var_109_string + var_123_int; // 0x787 Add
	GetProperty(var_124_int, var_113_string); // 0x788 ObjFunc
	var_125_bool = 0; var_126_string = ""; // 0x78a PushV
	var_126_string = var_113_string; // 0x78b Mov
	func_2021(var_125_bool, var_126_string); // 0x78c NEW_2
	var_102_bool = var_125_bool; // 0x78d Mov
	return 10; // 0x78f Return
	
Label_1912:
	var_131_int = 1; // 0x778 PushI
	var_110_int = var_110_int + var_131_int; // 0x779 Add2
	goto Label_1902; // 0x77a Jump
}


func_2157(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj(); // 0x86d PushV
	CreateFloatVector(var_459_object); // 0x86e Func
	add(var_457_float); // 0x870 ObjFunc
	var_460_int = 0; // 0x872 PushI
	var_461_bool = var_457_float < var_460_int; // 0x873 LT
	if(var_461_bool == 0) goto Label_2169; // 0x874 JumpB
	var_462_float = 0.7; // 0x875 PushF
	var_463_int = 500; // 0x876 PushI
	RumblePlay(var_462_float, var_463_int); // 0x877 Func
	
Label_2169:
	var_464_int = 15; // 0x879 PushI
	SendWorldWndMessage(var_464_int, var_459_object); // 0x87a Func
	return 2; // 0x87c Return
}


func_878()
{
	return 0; // 0x36f Return
}


func_880(var_491_bool)
{
	var_491_bool = 1; // 0x370 MovB
	return 0; // 0x371 Return
}


func_1138(var_201_string)
{
	var_201_string = "walk"; // 0x472 MovS
	return 0; // 0x473 Return
}


func_882(var_383_int)
{
	var_383_int = 1; // 0x372 MovI
	return 0; // 0x373 Return
}


func_1140(var_202_string)
{
	var_202_string = "run"; // 0x474 MovS
	return 0; // 0x475 Return
}


func_884(var_378_float)
{
	var_378_float = 0.5; // 0x374 MovF
	return 0; // 0x375 Return
}


func_1142(var_88_object)
{
	var_89_object = Obj(); // 0x477 PushV
	var_89_object = var_88_object; // 0x478 Mov
	func_1165(var_89_object); // 0x479 NEW_2
	var_169_int = 50; // 0x47b PushI
	var_170_int = 40; // 0x47c PushI
	SetRTEnvelope(var_169_int, var_170_int); // 0x47d Func
	
Label_1151:
	Hold(); // 0x47f Func
	goto Label_1151; // 0x481 Jump
}


func_886(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x376 PushV
	var_145_object = Obj(); // 0x377 PushV
	var_145_object = var_133_object; // 0x378 Mov
	func_2205(var_145_object); // 0x379 NEW_2
	var_146_int = 1; // 0x37b PushI
	var_147_int = 5; // 0x37c PushI
	SetTimer(var_146_int, var_147_int); // 0x37d Func
	CanSee(var_143_bool, var_133_object); // 0x37f Func
	var_148_bool = var_143_bool; // 0x381 Push
	if(var_148_bool == 0) goto Label_905; // 0x382 JumpB
	var_2_object = 1; // 0x383 TMovB
	var_149_object = Obj(); // 0x384 PushV
	var_149_object = var_133_object; // 0x385 Mov
	func_2010(var_149_object); // 0x386 NEW_2
	goto Label_906; // 0x388 Jump
	
Label_906:
	var_156_bool = 0; var_157_object = Obj(); // 0x38a PushV
	var_157_object = var_133_object; // 0x38b Mov
	func_1440(var_156_bool, var_157_object); // 0x38c NEW_2
	if(var_156_bool == 0) goto Label_916; // 0x38e JumpB
	var_160_object = Obj(); // 0x38f PushV
	func_2084(var_160_object); // 0x390 NEW_2
	SendPlayerEnemy(var_133_object, var_160_object); // 0x392 Func
	
Label_916:
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0; // 0x394 PushV
	var_162_object = var_133_object; // 0x395 Mov
	var_163_float = var_134_float; // 0x396 Mov
	var_164_float = var_135_float; // 0x397 Mov
	var_165_bool = var_136_bool; // 0x398 Mov
	var_166_bool = var_137_bool; // 0x399 Mov
	func_991(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool); // 0x39a NEW_2
	var_144_bool = var_161_bool; // 0x39b Mov
	var_212_object = var_2_object; // 0x39d PushT
	if(var_212_object == 0) goto Label_930; // 0x39e JumpB
	var_213_string = "head"; // 0x39f PushS
	UnlookAsync(var_213_string); // 0x3a0 Func
	
Label_930:
	var_214_int = 1; // 0x3a2 PushI
	KillTimer(var_214_int); // 0x3a3 Func
	var_132_bool = var_144_bool; // 0x3a5 Mov
	return 4; // 0x3a6 Return
	
Label_905:
	var_2_object = 0; // 0x389 TMovB
}


func_1661(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x67d PushV
	var_41_bool = 0; // 0x67e PushV
	var_41_bool = 0; // 0x67f MovB
	var_42_bool = 0; // 0x680 PushV
	var_42_bool = 0; // 0x681 MovB
	var_43_object = var_20_object; // 0x682 Push
	if(var_43_object == 0) goto Label_1672; // 0x683 JumpB
	var_44_int = 4; // 0x684 PushI
	var_45_bool = var_21_int != var_44_int; // 0x685 Neq
	if(var_45_bool == 0) goto Label_1672; // 0x686 JumpB
	var_42_bool = 1; // 0x687 MovB
	
Label_1672:
	if(var_42_bool == 0) goto Label_1677; // 0x688 JumpB
	var_46_int = 5; // 0x689 PushI
	var_47_bool = var_21_int != var_46_int; // 0x68a Neq
	if(var_47_bool == 0) goto Label_1677; // 0x68b JumpB
	var_41_bool = 1; // 0x68c MovB
	
Label_1677:
	if(var_41_bool == 0) goto Label_1724; // 0x68d JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x68e PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x68f PushV
	var_51_object = var_20_object; // 0x690 Mov
	func_1433(var_51_object); // 0x691 NEW_2
	var_49_cvector = var_50_cvector; // 0x692 Mov
	func_2090(var_48_cvector, var_49_cvector); // 0x694 NEW_2
	var_32_cvector = var_48_cvector; // 0x695 Mov
	CreateVectorVector(var_33_object); // 0x697 Func
	var_34_int = 1; // 0x699 MovI
	
Label_1690:
	var_61_string = "hit"; // 0x69a PushS
	var_62_int = var_61_string + var_34_int; // 0x69b Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x69c Func
	var_63_bool = var_35_bool == 0; // 0x69e Not
	if(var_63_bool == 0) goto Label_1697; // 0x69f JumpB
	goto Label_1706; // 0x6a0 Jump
	
Label_1706:
	size(var_38_int); // 0x6aa ObjFunc
	var_64_int = var_38_int; // 0x6ac Push
	if(var_64_int == 0) goto Label_1723; // 0x6ad JumpB
	irand(var_39_int, var_38_int); // 0x6ae Func
	get(var_40_cvector, var_39_int); // 0x6b0 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x6b2 PushV
	var_65_object = var_20_object; // 0x6b3 Mov
	var_66_int = var_21_int; // 0x6b4 Mov
	var_67_float = var_22_float; // 0x6b5 Mov
	var_68_cvector = var_40_cvector; // 0x6b6 Mov
	var_69_cvector = -var_32_cvector; // 0x6b7 Neg2
	func_1729(var_67_float, var_68_cvector, var_69_cvector); // 0x6b8 NEW_2
	return 18; // 0x6ba Return
	
Label_1723:
	var_33_object = 0; // 0x6bb SetNull
	
Label_1724:
	var_110_object = Obj(); // 0x6bc PushV
	var_110_object = var_20_object; // 0x6bd Mov
	func_1617(var_110_object); // 0x6be NEW_2
	return 18; // 0x6c0 Return
	
Label_1697:
	var_111_int = var_37_cvector | var_32_cvector; // 0x6a1 Or
	var_112_float = 0.70711; // 0x6a2 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x6a3 GE
	if(var_113_bool == 0) goto Label_1703; // 0x6a4 JumpB
	add(var_36_cvector); // 0x6a5 ObjFunc
	
Label_1703:
	var_114_int = 1; // 0x6a7 PushI
	var_34_int = var_34_int + var_114_int; // 0x6a8 Add2
	goto Label_1690; // 0x6a9 Jump
}


func_2174(var_37_float)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x87e PushV
	CreateFloatVector(var_39_object); // 0x87f Func
	add(var_37_float); // 0x881 ObjFunc
	var_40_int = 16; // 0x883 PushI
	SendWorldWndMessage(var_40_int, var_39_object); // 0x884 Func
	return 2; // 0x886 Return
}


func_1413()
{
	StopGroup0(); // 0x585 Func
	Stop(); // 0x587 Func
	return 0; // 0x589 Return
}


func_2184(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x888 PushV
	FindActor(var_20_object, var_17_string); // 0x889 Func
	var_21_bool = var_20_object == 0; // 0x88b NullEq
	if(var_21_bool == 0) goto Label_2191; // 0x88c JumpB
	var_16_bool = 0; // 0x88d MovB
	return 2; // 0x88e Return
	
Label_2191:
	Trigger(var_20_object, var_18_string); // 0x88f Func
	var_16_bool = 1; // 0x891 MovB
	return 2; // 0x892 Return
}


func_1418()
{
	return 0; // 0x58a Return
}


func_139(var_2_object, var_193_string)
{
	var_194_bool = 0; // 0x8c PushV
	func_2401(var_194_bool); // 0x8d NEW_2
	var_195_bool = var_194_bool == 0; // 0x8f Not
	if(var_195_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_196_bool = var_193_string == var_2_object; // 0x92 Eq
	if(var_196_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_197_string = ""; var_198_bool = 0; // 0x95 PushV
	var_197_string = var_193_string; // 0x96 Mov
	var_199_string = ""; // 0x97 PushS
	var_200_bool = var_193_string == var_199_string; // 0x98 Eq
	if(var_200_bool == 0) goto Label_156; // 0x99 JumpB
	var_198_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1995(var_197_string, var_198_bool); // 0x9d NEW_2
	var_2_object = var_193_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_198_bool = 1; // 0x9c MovB
}


func_1419(var_429_string, var_430_int)
{
	var_431_int = 2; // 0x58c PushI
	var_432_bool = var_430_int == var_431_int; // 0x58d Eq
	if(var_432_bool == 0) goto Label_1426; // 0x58e JumpB
	var_429_string = "fire"; // 0x58f MovS
	return 0; // 0x590 Return
	
Label_1426:
	var_433_int = 1; // 0x592 PushI
	var_434_bool = var_430_int == var_433_int; // 0x593 Eq
	if(var_434_bool == 0) goto Label_1431; // 0x594 JumpB
	var_429_string = "bullet"; // 0x595 MovS
	return 0; // 0x596 Return
	
Label_1431:
	var_429_string = "phys"; // 0x597 MovS
	return 0; // 0x598 Return
}


func_1165(var_89_object)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_string = ""; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_string = ""; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); // 0x48d PushV
	var_110_bool = var_89_object == 0; // 0x48e NullEq
	if(var_110_bool == 0) goto Label_1173; // 0x48f JumpB
	var_111_string = ""; // 0x490 PushV
	var_111_string = "fdie"; // 0x491 MovS
	func_1256(var_111_string); // 0x492 NEW_2
	goto Label_1255; // 0x494 Jump
	
Label_1255:
	return 20; // 0x4e7 Return
	
Label_1173:
	GetPosition(var_100_cvector); // 0x495 ObjFunc
	GetPosition(var_101_cvector); // 0x497 Func
	GetDirection(var_102_cvector); // 0x499 Func
	var_103_cvector = var_101_cvector - var_100_cvector; // 0x49b Sub2
	var_143_float = GetByIndex(var_103_cvector, 0); // 0x49c PushE
	var_144_float = GetByIndex(var_102_cvector, 0); // 0x49d PushE
	var_145_float = var_143_float * var_144_float; // 0x49e Mult
	var_146_float = GetByIndex(var_103_cvector, 2); // 0x49f PushE
	var_147_float = GetByIndex(var_102_cvector, 2); // 0x4a0 PushE
	var_148_float = var_146_float * var_147_float; // 0x4a1 Mult
	var_149_int = var_145_float + var_148_float; // 0x4a2 Add
	var_150_int = 0; // 0x4a3 PushI
	var_151_bool = var_149_int >= var_150_int; // 0x4a4 GE
	if(var_151_bool == 0) goto Label_1192; // 0x4a5 JumpB
	var_104_string = "fdie"; // 0x4a6 MovS
	goto Label_1193; // 0x4a7 Jump
	
Label_1193:
	RemoveRTEnvelope(); // 0x4a9 Func
	SetDeathState(); // 0x4ab Func
	Stop(); // 0x4ad Func
	StopAsync(); // 0x4af Func
	var_105_object = var_89_object; // 0x4b1 Mov
	var_152_string = "GetScriptProperty"; // 0x4b2 PushS
	var_153_int = 2; // 0x4b3 PushI
	var_154_bool = IsFuncExist(var_89_object, var_152_string, var_153_int); // 0x4b4 FuncExist
	if(var_154_bool == 0) goto Label_1217; // 0x4b5 JumpB
	var_155_string = "Owner"; // 0x4b6 PushS
	HasScriptProperty(var_106_bool, var_155_string); // 0x4b7 ObjFunc
	var_156_bool = var_106_bool; // 0x4b9 Push
	if(var_156_bool == 0) goto Label_1217; // 0x4ba JumpB
	var_157_string = "Owner"; // 0x4bb PushS
	GetScriptProperty(var_105_object, var_157_string); // 0x4bc ObjFunc
	var_158_bool = var_105_object == 0; // 0x4be NullEq
	if(var_158_bool == 0) goto Label_1217; // 0x4bf JumpB
	var_105_object = var_89_object; // 0x4c0 Mov
	
Label_1217:
	var_159_string = "@GetEyesHeight"; // 0x4c1 PushS
	var_160_int = 1; // 0x4c2 PushI
	var_161_bool = IsFuncExist(var_105_object, var_159_string, var_160_int); // 0x4c3 FuncExist
	if(var_161_bool == 0) goto Label_1232; // 0x4c4 JumpB
	GetEyesHeight(var_108_float); // 0x4c5 ObjFunc
	var_109_cvector = CVector(0.0, 0.0, 0.0); // 0x4c7 MovV
	var_162_float = GetByIndex(var_109_cvector, 1); // 0x4c8 PushE
	var_162_float = var_108_float; // 0x4c9 Mov
	SetByIndex(var_109_cvector, 1) = var_162_float; // 0x4ca PopE
	var_163_string = "head"; // 0x4cb PushS
	LookAsync(var_89_object, var_163_string, var_109_cvector); // 0x4cc Func
	var_107_bool = 1; // 0x4ce MovB
	goto Label_1233; // 0x4cf Jump
	
Label_1233:
	var_164_string = ""; // 0x4d1 PushV
	var_164_string = var_104_string; // 0x4d2 Mov
	func_2043(var_164_string); // 0x4d3 NEW_2
	var_165_string = "all"; // 0x4d5 PushS
	PlayAnimation(var_165_string, var_104_string); // 0x4d6 Func
	WaitForAnimEnd(); // 0x4d8 Func
	var_166_bool = var_107_bool; // 0x4da Push
	if(var_166_bool == 0) goto Label_1249; // 0x4db JumpB
	StopAsync(); // 0x4dc Func
	var_167_string = "head"; // 0x4de PushS
	UnlookAsync(var_167_string); // 0x4df Func
	
Label_1249:
	var_168_string = "all"; // 0x4e1 PushS
	LockAnimationEnd(var_168_string, var_104_string); // 0x4e2 Func
	RemoveEnvelope(); // 0x4e4 Func
	var_105_object = 0; // 0x4e6 SetNull
	
Label_1232:
	var_107_bool = 0; // 0x4d0 MovB
	
Label_1192:
	var_104_string = "bdie"; // 0x4a8 MovS
}


func_1936(var_133_bool)
{
	var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; // 0x790 PushV
	var_145_string = "d"; // 0x791 PushS
	var_146_int = 0; // 0x792 PushV
	func_2196(var_146_int); // 0x793 NEW_2
	var_152_int = var_145_string + var_146_int; // 0x795 Add
	var_153_string = "m"; // 0x796 PushS
	var_140_string = var_152_int + var_153_string; // 0x797 Add2
	var_141_int = 0; // 0x798 MovI
	
Label_1945:
	var_154_int = 1; // 0x799 PushI
	if(var_154_int == 0) goto Label_1958; // 0x79a JumpB
	var_155_int = 1; // 0x79b PushI
	var_156_int = var_141_int + var_155_int; // 0x79c Add
	var_157_int = var_140_string + var_156_int; // 0x79d Add
	HasProperty(var_157_int, var_142_bool); // 0x79e ObjFunc
	var_158_bool = var_142_bool == 0; // 0x7a0 Not
	if(var_158_bool == 0) goto Label_1955; // 0x7a1 JumpB
	goto Label_1958; // 0x7a2 Jump
	
Label_1958:
	var_159_bool = var_141_int == 0; // 0x7a6 Not
	if(var_159_bool == 0) goto Label_1962; // 0x7a7 JumpB
	var_133_bool = 0; // 0x7a8 MovB
	return 10; // 0x7a9 Return
	
Label_1962:
	var_143_int = 0; // 0x7aa MovI
	var_160_int = 1; // 0x7ab PushI
	var_161_bool = var_141_int > var_160_int; // 0x7ac GT
	if(var_161_bool == 0) goto Label_1968; // 0x7ad JumpB
	irand(var_143_int, var_141_int); // 0x7ae Func
	
Label_1968:
	var_162_int = 1; // 0x7b0 PushI
	var_163_int = var_143_int + var_162_int; // 0x7b1 Add
	var_164_int = var_140_string + var_163_int; // 0x7b2 Add
	GetProperty(var_164_int, var_144_string); // 0x7b3 ObjFunc
	var_165_bool = 0; var_166_string = ""; // 0x7b5 PushV
	var_166_string = var_144_string; // 0x7b6 Mov
	func_2021(var_165_bool, var_166_string); // 0x7b7 NEW_2
	var_133_bool = var_165_bool; // 0x7b8 Mov
	return 10; // 0x7ba Return
	
Label_1955:
	var_167_int = 1; // 0x7a3 PushI
	var_141_int = var_141_int + var_167_int; // 0x7a4 Add2
	goto Label_1945; // 0x7a5 Jump
}


func_2196(var_146_int)
{
	var_147_float = 0; var_148_float = 0; // 0x894 PushV
	GetGameTime(var_148_float); // 0x895 Func
	var_149_int = 1; // 0x897 PushI
	var_150_int = 0; // 0x898 PushV
	var_151_int = 24; // 0x899 PushI
	var_150_int = var_148_float / var_148_float; // 0x89a Div2
	var_146_int = var_149_int + var_150_int; // 0x89b Add2
	return 2; // 0x89c Return
}


func_664(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0; // 0x298 PushV
	rand(var_496_float); // 0x299 Func
	var_498_bool = var_496_float < var_493_float; // 0x29b LT
	if(var_498_bool == 0) goto Label_684; // 0x29c JumpB
	
Label_669:
	IsAnimationPlaying(var_497_bool); // 0x29d Func
	var_499_bool = var_497_bool == 0; // 0x29f Not
	if(var_499_bool == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_683; // 0x2a1 Jump
	
Label_683:
	goto Label_689; // 0x2ab Jump
	
Label_689:
	var_492_bool = 0; // 0x2b1 MovB
	return 4; // 0x2b2 Return
	
Label_674:
	var_500_bool = 0; // 0x2a2 PushV
	func_762(var_500_bool); // 0x2a3 NEW_2
	if(var_500_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_492_bool = 1; // 0x2a6 MovB
	return 4; // 0x2a7 Return
	
Label_680:
	sync(); // 0x2a8 Func
	goto Label_669; // 0x2aa Jump
	
Label_684:
	WaitForAnimEnd(); // 0x2ac Func
	func_866(var_497_bool); // 0x2af NEW_2
}


func_1433(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x599 PushV
	GetPosition(var_54_cvector); // 0x59a Func
	GetPosition(var_55_cvector); // 0x59c ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x59e Sub2
	return 4; // 0x59f Return
}


func_2205(var_125_object)
{
	var_126_bool = 0; var_127_bool = 0; // 0x89d PushV
	IsPlayerActor(var_125_object, var_127_bool); // 0x89e Func
	var_128_bool = var_127_bool; // 0x8a0 Push
	if(var_128_bool == 0) goto Label_2213; // 0x8a1 JumpB
	var_129_string = "attack"; // 0x8a2 PushS
	PlayGlobalMusic(var_129_string); // 0x8a3 Func
	
Label_2213:
	return 2; // 0x8a5 Return
}


func_1440(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0; // 0x5a0 PushV
	IsPlayerActor(var_27_object, var_29_bool); // 0x5a1 Func
	var_26_bool = var_29_bool; // 0x5a3 Mov
	return 2; // 0x5a4 Return
}


func_1445(var_49_bool, var_50_object, var_51_string)
{
	var_52_bool = 0; var_53_bool = 0; // 0x5a5 PushV
	var_54_string = "HasProperty"; // 0x5a6 PushS
	var_55_int = 2; // 0x5a7 PushI
	var_56_bool = IsFuncExist(var_50_object, var_54_string, var_55_int); // 0x5a8 FuncExist
	var_57_bool = var_56_bool == 0; // 0x5a9 Not
	if(var_57_bool == 0) goto Label_1453; // 0x5aa JumpB
	var_49_bool = 0; // 0x5ab MovB
	return 2; // 0x5ac Return
	
Label_1453:
	HasProperty(var_51_string, var_53_bool); // 0x5ad ObjFunc
	var_49_bool = var_53_bool; // 0x5af Mov
	return 2; // 0x5b0 Return
}


func_2214()
{
	var_362_object = Obj(); var_363_object = Obj(); // 0x8a6 PushV
	GetScene(var_363_object); // 0x8a7 Func
	var_364_string = "battle"; // 0x8a9 PushS
	var_365_object = Obj(); // 0x8aa PushV
	func_2084(var_365_object); // 0x8ab NEW_2
	BroadcastMessage(var_364_string, var_365_object, var_363_object); // 0x8ad Func
	return 2; // 0x8af Return
}


func_2225(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x8b1 PushV
	var_85_string = "branch"; // 0x8b2 PushS
	GetVariable(var_85_string, var_84_int); // 0x8b3 Func
	var_86_int = 0; // 0x8b5 PushI
	var_87_bool = var_84_int == var_86_int; // 0x8b6 Eq
	if(var_87_bool == 0) goto Label_2235; // 0x8b7 JumpB
	var_82_int = 1; // 0x8b8 MovI
	return 2; // 0x8b9 Return
	
Label_2235:
	var_88_int = 1; // 0x8bb PushI
	var_89_bool = var_84_int == var_88_int; // 0x8bc Eq
	if(var_89_bool == 0) goto Label_2240; // 0x8bd JumpB
	var_82_int = 2; // 0x8be MovI
	return 2; // 0x8bf Return
	
Label_2240:
	var_82_int = 3; // 0x8c0 MovI
	return 2; // 0x8c1 Return
}


func_1457(var_41_bool, var_42_object, var_43_string, var_44_float, var_45_float, var_46_float)
{
	var_47_float = 0; var_48_float = 0; // 0x5b1 PushV
	var_49_bool = 0; var_50_object = Obj(); var_51_string = ""; // 0x5b2 PushV
	var_50_object = var_42_object; // 0x5b3 Mov
	var_51_string = var_43_string; // 0x5b4 Mov
	func_1445(var_49_bool, var_50_object, var_51_string); // 0x5b5 NEW_2
	var_58_bool = var_49_bool == 0; // 0x5b7 Not
	if(var_58_bool == 0) goto Label_1467; // 0x5b8 JumpB
	var_41_bool = 0; // 0x5b9 MovB
	return 2; // 0x5ba Return
	
Label_1467:
	GetProperty(var_43_string, var_48_float); // 0x5bb ObjFunc
	var_59_float = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x5bd PushV
	var_60_float = var_48_float + var_44_float; // 0x5be Add2
	var_61_float = var_45_float; // 0x5bf Mov
	var_62_float = var_46_float; // 0x5c0 Mov
	func_2111(var_59_float, var_60_float, var_61_float, var_62_float); // 0x5c1 NEW_2
	SetProperty(var_43_string, var_59_float); // 0x5c3 ObjFunc
	var_41_bool = 1; // 0x5c5 MovB
	return 2; // 0x5c6 Return
}


func_691(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; // 0x2b3 PushV
	
Label_692:
	IsAnimationPlaying(var_296_bool); // 0x2b4 Func
	var_301_bool = var_296_bool == 0; // 0x2b6 Not
	if(var_301_bool == 0) goto Label_697; // 0x2b7 JumpB
	goto Label_729; // 0x2b8 Jump
	
Label_729:
	func_866(var_300_float); // 0x2da NEW_2
	var_289_bool = 0; // 0x2dc MovB
	return 10; // 0x2dd Return
	
Label_697:
	var_302_bool = 0; // 0x2b9 PushV
	func_762(var_302_bool); // 0x2ba NEW_2
	if(var_302_bool == 0) goto Label_703; // 0x2bc JumpB
	var_289_bool = 1; // 0x2bd MovB
	return 10; // 0x2be Return
	
Label_703:
	var_345_bool = 0; var_346_object = Obj(); // 0x2bf PushV
	var_346_object = var_0_object; // 0x2c0 MovT
	func_1593(var_345_bool, var_346_object); // 0x2c1 NEW_2
	var_347_bool = var_345_bool == 0; // 0x2c3 Not
	if(var_347_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_289_bool = 0; // 0x2c5 MovB
	return 10; // 0x2c6 Return
	
Label_711:
	GetPFPosition(var_297_cvector); // 0x2c7 TObjFunc
	GetPFPosition(var_298_cvector); // 0x2c9 Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0x2cb Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0x2cc Or2
	var_348_float = var_290_float * var_290_float; // 0x2cd Mult
	var_349_bool = var_300_float < var_348_float; // 0x2ce LT
	if(var_349_bool == 0) goto Label_726; // 0x2cf JumpB
	var_350_bool = 0; var_351_float = 0; // 0x2d0 PushV
	var_351_float = var_290_float; // 0x2d1 Mov
	func_527(var_300_float, var_350_bool, var_351_float); // 0x2d2 NEW_2
	var_289_bool = 1; // 0x2d4 MovB
	return 10; // 0x2d5 Return
	
Label_726:
	sync(); // 0x2d6 Func
	goto Label_692; // 0x2d8 Jump
}


func_949(var_2_object)
{
	var_17_int = 1; // 0x3b5 PushI
	KillTimer(var_17_int); // 0x3b6 Func
	var_18_object = var_2_object; // 0x3b8 PushT
	if(var_18_object == 0) goto Label_958; // 0x3b9 JumpB
	var_2_object = 0; // 0x3ba TMovB
	var_19_string = "head"; // 0x3bb PushS
	UnlookAsync(var_19_string); // 0x3bc Func
	
Label_958:
	func_1115(var_16_cvector); // 0x3bf NEW_2
	return 0; // 0x3c1 Return
}


func_1979(var_219_string)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x7bb PushV
	lshHasAnimation(var_223_bool, var_219_string); // 0x7bc Func
	var_226_bool = var_223_bool; // 0x7be Push
	if(var_226_bool == 0) goto Label_1990; // 0x7bf JumpB
	lshGetAnimTimes(var_219_string, var_224_float, var_225_float); // 0x7c0 Func
	var_227_bool = 0; // 0x7c2 PushB
	lshPlayAnimation(var_224_float, var_225_float, var_227_bool); // 0x7c3 Func
	goto Label_1994; // 0x7c5 Jump
	
Label_1994:
	return 6; // 0x7ca Return
	
Label_1990:
	var_228_string = "Can't find lsh animation : "; // 0x7c6 PushS
	var_229_int = var_228_string + var_219_string; // 0x7c7 Add
	Trace(var_229_int); // 0x7c8 Func
}


func_1729(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x6c1 PushV
	GetScene(var_29_object); // 0x6c2 Func
	var_31_string = "scripted"; // 0x6c4 PushS
	var_32_string = "blood_dir.xml"; // 0x6c5 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x6c6 Func
	var_33_object = Obj(); // 0x6c8 PushV
	var_33_object = var_22_object; // 0x6c9 Mov
	func_1617(var_33_object); // 0x6ca NEW_2
	return 4; // 0x6cc Return
}


func_2242(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x8c2 PushV
	var_71_string = "branch"; // 0x8c3 PushS
	GetVariable(var_71_string, var_70_int); // 0x8c4 Func
	var_68_int = var_70_int; // 0x8c6 Mov
	return 2; // 0x8c7 Return
}


func_453(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); // 0x1c5 PushV
	var_1_object = 0; // 0x1c6 TMovI
	
Label_455:
	var_60_string = "all"; // 0x1c7 PushS
	var_61_string = "attack_begin"; // 0x1c8 PushS
	var_62_int = 1; // 0x1c9 PushI
	var_63_int = var_1_object + var_62_int; // 0x1ca Add
	var_64_int = var_61_string + var_63_int; // 0x1cb Add
	HasAnimation(var_57_bool, var_60_string, var_64_int); // 0x1cc Func
	var_65_bool = var_57_bool == 0; // 0x1ce Not
	if(var_65_bool == 0) goto Label_465; // 0x1cf JumpB
	goto Label_468; // 0x1d0 Jump
	
Label_468:
	var_2_object = 0; // 0x1d4 TMovI
	
Label_469:
	var_66_string = "attack"; // 0x1d5 PushS
	var_67_int = 1; // 0x1d6 PushI
	var_68_int = var_2_object + var_67_int; // 0x1d7 Add
	var_69_int = var_66_string + var_68_int; // 0x1d8 Add
	IsExisting3DSound(var_58_bool, var_69_int); // 0x1d9 Func
	var_70_bool = var_58_bool == 0; // 0x1db Not
	if(var_70_bool == 0) goto Label_478; // 0x1dc JumpB
	goto Label_481; // 0x1dd Jump
	
Label_481:
	var_71_string = "all"; // 0x1e1 PushS
	var_72_string = "bjump"; // 0x1e2 PushS
	GetAnimationOffset(var_59_cvector, var_71_string, var_72_string); // 0x1e3 Func
	var_73_float = GetByIndex(var_59_cvector, 2); // 0x1e5 PushE
	var_4_bool = -var_73_float; // 0x1e6 Neg2
	return 6; // 0x1e7 Return
	
Label_478:
	var_74_int = 1; // 0x1de PushI
	var_2_object = var_2_object + var_74_int; // 0x1df Add2
	goto Label_469; // 0x1e0 Jump
	
Label_465:
	var_75_int = 1; // 0x1d1 PushI
	var_1_object = var_1_object + var_75_int; // 0x1d2 Add2
	goto Label_455; // 0x1d3 Jump
}


func_1479(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; // 0x5c7 PushV
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x5c8 PushV
	var_421_object = var_402_object; // 0x5c9 Mov
	var_422_string = "health"; // 0x5ca MovS
	func_1445(var_420_bool, var_421_object, var_422_string); // 0x5cb NEW_2
	var_423_bool = var_420_bool == 0; // 0x5cd Not
	if(var_423_bool == 0) goto Label_1489; // 0x5ce JumpB
	var_401_float = 0.0; // 0x5cf MovF
	return 12; // 0x5d0 Return
	
Label_1489:
	var_424_bool = 0; var_425_object = Obj(); var_426_string = ""; // 0x5d1 PushV
	var_425_object = var_402_object; // 0x5d2 Mov
	var_426_string = "armor"; // 0x5d3 MovS
	func_1445(var_424_bool, var_425_object, var_426_string); // 0x5d4 NEW_2
	var_427_bool = var_424_bool == 0; // 0x5d6 Not
	if(var_427_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_414_int = 0; // 0x5d8 MovI
	goto Label_1501; // 0x5d9 Jump
	
Label_1501:
	var_428_string = "armor_"; // 0x5dd PushS
	var_429_string = ""; var_430_int = 0; // 0x5de PushV
	var_430_int = var_404_int; // 0x5df Mov
	func_1419(var_429_string, var_430_int); // 0x5e0 NEW_2
	var_415_string = var_428_string + var_429_string; // 0x5e2 Add2
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0x5e3 PushV
	var_436_object = var_402_object; // 0x5e4 Mov
	var_437_string = var_415_string; // 0x5e5 Mov
	func_1445(var_435_bool, var_436_object, var_437_string); // 0x5e6 NEW_2
	var_438_bool = var_435_bool == 0; // 0x5e8 Not
	if(var_438_bool == 0) goto Label_1516; // 0x5e9 JumpB
	var_416_int = 0; // 0x5ea MovI
	goto Label_1518; // 0x5eb Jump
	
Label_1518:
	var_439_float = 0; var_440_float = 0; var_441_float = 0; // 0x5ee PushV
	var_442_int = var_414_int + var_416_int; // 0x5ef Add
	var_443_float = 100.0; // 0x5f0 PushF
	var_440_float = var_442_int / var_442_int; // 0x5f1 Div2
	var_441_float = 1; // 0x5f2 MovI
	func_2104(var_439_float, var_440_float, var_441_float); // 0x5f3 NEW_2
	var_417_float = var_439_float; // 0x5f4 Mov
	var_445_string = "health"; // 0x5f6 PushS
	GetProperty(var_445_string, var_418_float); // 0x5f7 ObjFunc
	var_446_int = 1; // 0x5f9 PushI
	var_447_int = var_446_int - var_417_float; // 0x5fa Sub
	var_419_float = var_403_float * var_447_int; // 0x5fb Mult2
	var_448_string = "health"; // 0x5fc PushS
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0; // 0x5fd PushV
	var_450_float = var_418_float - var_419_float; // 0x5fe Sub2
	var_451_float = 0; // 0x5ff MovI
	var_452_float = 1; // 0x600 MovI
	func_2111(var_449_float, var_450_float, var_451_float, var_452_float); // 0x601 NEW_2
	SetProperty(var_448_string, var_449_float); // 0x603 ObjFunc
	var_455_bool = 0; var_456_object = Obj(); // 0x605 PushV
	var_456_object = var_402_object; // 0x606 Mov
	func_1440(var_455_bool, var_456_object); // 0x607 NEW_2
	if(var_455_bool == 0) goto Label_1550; // 0x609 JumpB
	var_457_float = 0; // 0x60a PushV
	var_457_float = -var_419_float; // 0x60b Neg2
	func_2157(var_457_float); // 0x60c NEW_2
	
Label_1550:
	var_401_float = var_419_float; // 0x60e Mov
	return 12; // 0x60f Return
	
Label_1516:
	GetProperty(var_415_string, var_416_int); // 0x5ec ObjFunc
	
Label_1498:
	var_465_string = "armor"; // 0x5da PushS
	GetProperty(var_465_string, var_414_int); // 0x5db ObjFunc
}


func_2248(var_20_object)
{
	var_21_int = 0; // 0x8c9 PushV
	func_2242(var_21_int); // 0x8ca NEW_2
	var_25_int = 1; // 0x8cc PushI
	var_26_bool = var_21_int == var_25_int; // 0x8cd Eq
	if(var_26_bool == 0) goto Label_2258; // 0x8ce JumpB
	WorkWithCorpse(var_20_object); // 0x8cf Func
	goto Label_2260; // 0x8d1 Jump
	
Label_2260:
	return 0; // 0x8d4 Return
	
Label_2258:
	Barter(var_20_object); // 0x8d2 Func
}


func_203()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xcb PushV
	var_27_string = "player"; // 0xcc PushS
	FindActor(var_26_object, var_27_string); // 0xcd Func
	var_28_bool = var_26_object == 0; // 0xcf Not
	if(var_28_bool == 0) goto Label_210; // 0xd0 JumpB
	return 2; // 0xd1 Return
	
Label_210:
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; // 0xd2 PushV
	var_29_object = var_26_object; // 0xd3 Mov
	var_30_bool = 1; // 0xd4 MovB
	var_31_float = 180.0; // 0xd5 MovF
	func_224(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_29_object, var_30_bool, var_31_float); // 0xd6 NEW_2
	return 2; // 0xd8 Return
}


func_1995(var_197_string, var_198_bool)
{
	var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_bool = 0; var_205_float = 0; var_206_float = 0; // 0x7cb PushV
	lshHasAnimation(var_204_bool, var_197_string); // 0x7cc Func
	var_207_bool = var_204_bool; // 0x7ce Push
	if(var_207_bool == 0) goto Label_2005; // 0x7cf JumpB
	lshGetAnimTimes(var_197_string, var_205_float, var_206_float); // 0x7d0 Func
	lshPlayAnimation(var_205_float, var_206_float, var_198_bool); // 0x7d2 Func
	goto Label_2009; // 0x7d4 Jump
	
Label_2009:
	return 6; // 0x7d9 Return
	
Label_2005:
	var_208_string = "Can't find lsh animation : "; // 0x7d5 PushS
	var_209_int = var_208_string + var_197_string; // 0x7d6 Add
	Trace(var_209_int); // 0x7d7 Func
}


func_1743()
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); // 0x6cf PushV
	GetPosition(var_239_cvector); // 0x6d0 ObjFunc
	GetPosition(var_240_cvector); // 0x6d2 Func
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x6d4 Sub2
	var_242_float = GetByIndex(var_241_cvector, 0); // 0x6d5 PushE
	var_243_float = GetByIndex(var_241_cvector, 2); // 0x6d6 PushE
	RotateAsync(var_242_float, var_243_float); // 0x6d7 Func
	return 6; // 0x6d9 Return
}


func_2261(var_74_string)
{
	var_75_object = Obj(); var_76_int = 0; var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; var_80_bool = 0; // 0x8d5 PushV
	CreateInvItem(var_78_object); // 0x8d6 Func
	SetItemName(var_74_string); // 0x8d8 ObjFunc
	var_81_string = "Organ"; // 0x8da PushS
	var_82_int = 1; // 0x8db PushI
	SetProperty(var_81_string, var_82_int); // 0x8dc ObjFunc
	GetItemID(var_79_int); // 0x8de ObjFunc
	var_83_int = 0; // 0x8e0 PushI
	var_84_int = 1; // 0x8e1 PushI
	AddItem(var_80_bool, var_78_object, var_83_int, var_84_int); // 0x8e2 Func
	return 6; // 0x8e4 Return
}


func_1754(var_30_bool, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; // 0x6da PushV
	GetPosition(var_43_cvector); // 0x6db ObjFunc
	GetEyesHeight(var_42_float); // 0x6dd ObjFunc
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x6df PushE
	var_51_float = var_51_float + var_42_float; // 0x6e0 Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x6e1 PopE
	GetPosition(var_44_cvector); // 0x6e2 Func
	GetEyesHeight(var_42_float); // 0x6e4 Func
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x6e6 PushE
	var_52_float = var_52_float + var_42_float; // 0x6e7 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x6e8 PopE
	var_45_cvector = var_43_cvector - var_44_cvector; // 0x6e9 Sub2
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x6ea PushE
	var_53_float = 0; // 0x6eb MovI
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x6ec PopE
	var_54_int = var_45_cvector | var_45_cvector; // 0x6ed Or
	var_55_float = sqrt(var_54_int); // 0x6ee Sqrt
	var_45_cvector = var_45_cvector / var_45_cvector; // 0x6ef Div2
	var_46_cvector = -var_45_cvector; // 0x6f0 Neg2
	var_56_float = var_45_cvector * var_32_float; // 0x6f1 Mult
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x6f2 PushV
	var_59_cvector = CVector(0.0, 1.0, 0.0); // 0x6f3 PushVec
	var_58_cvector = var_46_cvector ^ var_59_cvector; // 0x6f4 Xor2
	func_2090(var_57_cvector, var_58_cvector); // 0x6f5 NEW_2
	var_65_int = 25; // 0x6f7 PushI
	var_66_float = var_57_cvector * var_65_int; // 0x6f8 Mult
	var_67_int = var_56_float + var_66_float; // 0x6f9 Add
	var_68_cvector = CVector(0.0, 10.0, 0.0); // 0x6fa PushVec
	var_47_cvector = var_67_int - var_68_cvector; // 0x6fb Sub2
	var_48_cvector = var_44_cvector + var_47_cvector; // 0x6fc Add2
	IsOverrideActive(var_49_bool); // 0x6fd Func
	var_69_bool = var_49_bool; // 0x6ff Push
	if(var_69_bool == 0) goto Label_1795; // 0x700 JumpB
	var_30_bool = 0; // 0x701 MovB
	return 18; // 0x702 Return
	
Label_1795:
	StopWorld(); // 0x703 Func
	var_70_bool = 1; // 0x705 PushB
	CameraTransit(var_48_cvector, var_46_cvector, var_70_bool); // 0x706 Func
	var_71_float = GetByIndex(var_47_cvector, 0); // 0x708 PushE
	var_72_float = GetByIndex(var_47_cvector, 2); // 0x709 PushE
	Rotate(var_71_float, var_72_float); // 0x70a Func
	var_73_bool = 0; // 0x70c PushV
	func_2401(var_73_bool); // 0x70d NEW_2
	if(var_73_bool == 0) goto Label_1809; // 0x70f JumpB
	goto Label_1817; // 0x710 Jump
	
Label_1817:
	CameraWaitForPlayFinish(); // 0x719 Func
	ResumeWorld(); // 0x71b Func
	var_30_bool = 1; // 0x71d MovB
	return 18; // 0x71e Return
	
Label_1809:
	var_74_string = "head"; // 0x711 PushS
	HasAnimationTrack(var_50_bool, var_74_string); // 0x712 Func
	var_75_bool = var_50_bool; // 0x714 Push
	if(var_75_bool == 0) goto Label_1817; // 0x715 JumpB
	var_76_string = "head"; // 0x716 PushS
	LookAsyncCamera(var_76_string); // 0x717 Func
}


func_218(var_398_float)
{
	var_398_float = 0.3; // 0xdb MovF
	return 0; // 0xdc Return
}


func_2010(var_149_object)
{
	var_150_float = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; var_153_cvector = CVector(0,0,0); // 0x7da PushV
	GetEyesHeight(var_152_float); // 0x7db ObjFunc
	var_153_cvector = CVector(0.0, 0.0, 0.0); // 0x7dd MovV
	var_154_float = GetByIndex(var_153_cvector, 1); // 0x7de PushE
	var_154_float = var_152_float; // 0x7df Mov
	SetByIndex(var_153_cvector, 1) = var_154_float; // 0x7e0 PopE
	var_155_string = "head"; // 0x7e1 PushS
	LookAsync(var_149_object, var_155_string, var_153_cvector); // 0x7e2 Func
	return 4; // 0x7e4 Return
}


func_221(var_405_int)
{
	var_405_int = 0; // 0xde MovI
	return 0; // 0xdf Return
}


func_734(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; // 0x2de PushV
	var_315_bool = 0; var_316_object = Obj(); // 0x2df PushV
	var_316_object = var_0_object; // 0x2e0 MovT
	func_1593(var_315_bool, var_316_object); // 0x2e1 NEW_2
	var_317_bool = var_315_bool == 0; // 0x2e3 Not
	if(var_317_bool == 0) goto Label_743; // 0x2e4 JumpB
	var_304_bool = 0; // 0x2e5 MovB
	return 10; // 0x2e6 Return
	
Label_743:
	var_318_bool = 0; // 0x2e7 PushV
	func_823(var_314_float, var_318_bool); // 0x2e8 NEW_2
	if(var_318_bool == 0) goto Label_760; // 0x2ea JumpB
	GetPFPosition(var_310_cvector); // 0x2eb TObjFunc
	GetPFPosition(var_311_cvector); // 0x2ed Func
	var_312_cvector = var_310_cvector - var_311_cvector; // 0x2ef Sub2
	var_313_float = var_312_cvector | var_312_cvector; // 0x2f0 Or2
	GetAttackDistance(var_314_float); // 0x2f1 TObjFunc
	var_319_int = 50; // 0x2f3 PushI
	var_314_float = var_314_float + var_319_int; // 0x2f4 Add2
	var_320_float = var_314_float * var_314_float; // 0x2f5 Mult
	var_304_bool = var_313_float <= var_320_float; // 0x2f6 LE2
	return 10; // 0x2f7 Return
	
Label_760:
	var_304_bool = 0; // 0x2f8 MovB
	return 10; // 0x2f9 Return
}


func_991(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); // 0x3df PushV
	var_0_object = 0; // 0x3e0 TMovB
	var_1_object = var_162_object; // 0x3e1 TMov
	var_176_bool = var_166_bool; // 0x3e2 Mov
	
Label_995:
	var_183_bool = 0; var_184_object = Obj(); // 0x3e3 PushV
	var_184_object = var_162_object; // 0x3e4 Mov
	func_1131(var_183_bool, var_184_object); // 0x3e5 NEW_2
	var_187_bool = var_183_bool == 0; // 0x3e7 Not
	if(var_187_bool == 0) goto Label_1003; // 0x3e8 JumpB
	var_161_bool = 0; // 0x3e9 MovB
	return 16; // 0x3ea Return
	
Label_1003:
	GetPosition(var_178_cvector); // 0x3eb ObjFunc
	GetPosition(var_179_cvector); // 0x3ed Func
	var_180_cvector = var_178_cvector - var_179_cvector; // 0x3ef Sub2
	var_181_float = var_180_cvector | var_180_cvector; // 0x3f0 Or2
	var_188_bool = 0; // 0x3f1 PushV
	var_188_bool = 0; // 0x3f2 MovB
	var_189_int = 0; // 0x3f3 PushI
	var_190_bool = var_164_float > var_189_int; // 0x3f4 GT
	if(var_190_bool == 0) goto Label_1018; // 0x3f5 JumpB
	var_191_float = var_164_float * var_164_float; // 0x3f6 Mult
	var_192_bool = var_181_float > var_191_float; // 0x3f7 GT
	if(var_192_bool == 0) goto Label_1018; // 0x3f8 JumpB
	var_188_bool = 1; // 0x3f9 MovB
	
Label_1018:
	if(var_188_bool == 0) goto Label_1023; // 0x3fa JumpB
	Stop(); // 0x3fb Func
	var_161_bool = 0; // 0x3fd MovB
	return 16; // 0x3fe Return
	
Label_1023:
	var_193_float = var_163_float * var_163_float; // 0x3ff Mult
	var_194_bool = var_181_float > var_193_float; // 0x400 GT
	if(var_194_bool == 0) goto Label_1085; // 0x401 JumpB
	GetPFPosition(var_178_cvector); // 0x402 ObjFunc
	FindPathTo(var_182_object, var_178_cvector); // 0x404 Func
	var_195_bool = var_182_object != 0; // 0x406 NullNeq
	if(var_195_bool == 0) goto Label_1034; // 0x407 JumpB
	var_177_object = var_182_object; // 0x408 Mov
	var_182_object = 0; // 0x409 SetNull
	
Label_1034:
	var_196_bool = var_177_object != 0; // 0x40a NullNeq
	if(var_196_bool == 0) goto Label_1067; // 0x40b JumpB
	var_197_bool = var_176_bool; // 0x40c Push
	if(var_197_bool == 0) goto Label_1044; // 0x40d JumpB
	var_176_bool = 0; // 0x40e MovB
	RotatePath(var_177_object, var_175_bool); // 0x40f Func
	var_198_bool = var_175_bool == 0; // 0x411 Not
	if(var_198_bool == 0) goto Label_1044; // 0x412 JumpB
	goto Label_1091; // 0x413 Jump
	
Label_1091:
	var_161_bool = !var_0_object; // 0x443 Not2
	return 16; // 0x444 Return
	
Label_1044:
	var_199_int = 0; // 0x414 PushI
	var_200_float = 0.3; // 0x415 PushF
	SetTimer(var_199_int, var_200_float); // 0x416 Func
	var_201_string = ""; // 0x418 PushV
	func_1138(var_201_string); // 0x419 NEW_2
	var_202_string = ""; // 0x41b PushV
	func_1140(var_202_string); // 0x41c NEW_2
	FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string); // 0x41e Func
	var_203_bool = var_175_bool == 0; // 0x420 Not
	if(var_203_bool == 0) goto Label_1065; // 0x421 JumpB
	var_204_object = var_0_object; // 0x422 PushT
	if(var_204_object == 0) goto Label_1063; // 0x423 JumpB
	var_177_object = 0; // 0x424 SetNull
	goto Label_1091; // 0x425 Jump
	
Label_1063:
	goto Label_1090; // 0x427 Jump
	
Label_1090:
	goto Label_995; // 0x442 Jump
	
Label_1065:
	var_177_object = 0; // 0x429 SetNull
	goto Label_1083; // 0x42a Jump
	
Label_1083:
	var_182_object = 0; // 0x43b SetNull
	goto Label_1089; // 0x43c Jump
	
Label_1089:
	var_177_object = 0; // 0x441 SetNull
	
Label_1067:
	var_205_int = 0; // 0x42b PushI
	KillTimer(var_205_int); // 0x42c Func
	var_206_float = 0.5; // 0x42e PushF
	Sleep(var_206_float, var_175_bool); // 0x42f Func
	var_207_bool = var_175_bool == 0; // 0x431 Not
	if(var_207_bool == 0) goto Label_1079; // 0x432 JumpB
	var_208_object = var_0_object; // 0x433 PushT
	if(var_208_object == 0) goto Label_1079; // 0x434 JumpB
	var_177_object = 0; // 0x435 SetNull
	goto Label_1091; // 0x436 Jump
	
Label_1079:
	var_209_int = 0; // 0x437 PushI
	var_210_float = 0.3; // 0x438 PushF
	SetTimer(var_209_int, var_210_float); // 0x439 Func
	
Label_1085:
	var_211_int = 0; // 0x43d PushI
	KillTimer(var_211_int); // 0x43e Func
	goto Label_1091; // 0x440 Jump
}


func_224(var_0_object, var_3_string, var_5_object, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0; // 0xe0 PushV
	func_453(var_51_cvector, var_52_bool, var_53_float); // 0xe2 NEW_2
	var_5_object = 0; // 0xe4 TMovI
	var_76_string = "@GetAttackDistance"; // 0xe5 PushS
	var_77_int = 1; // 0xe6 PushI
	var_78_bool = IsFuncExist(var_29_object, var_76_string, var_77_int); // 0xe7 FuncExist
	if(var_78_bool == 0) goto Label_238; // 0xe8 JumpB
	GetAttackDistance(var_43_float); // 0xe9 ObjFunc
	var_79_int = 50; // 0xeb PushI
	var_43_float = var_43_float + var_79_int; // 0xec Add2
	goto Label_239; // 0xed Jump
	
Label_239:
	var_80_int = 150; // 0xef PushI
	var_81_bool = var_43_float >= var_80_int; // 0xf0 GE
	if(var_81_bool == 0) goto Label_243; // 0xf1 JumpB
	var_43_float = 150; // 0xf2 MovI
	
Label_243:
	var_3_string = 0; // 0xf3 TMovB
	var_0_object = var_29_object; // 0xf4 TMov
	IsPlayerActor(var_0_object, var_46_bool); // 0xf5 Func
	var_82_bool = var_46_bool; // 0xf7 Push
	if(var_82_bool == 0) goto Label_257; // 0xf8 JumpB
	var_83_string = "attack"; // 0xf9 PushS
	PlayGlobalMusic(var_83_string); // 0xfa Func
	var_84_object = Obj(); // 0xfc PushV
	func_2084(var_84_object); // 0xfd NEW_2
	SendPlayerEnemy(var_29_object, var_84_object); // 0xff Func
	
Label_257:
	var_87_bool = var_30_bool; // 0x101 Push
	if(var_87_bool == 0) goto Label_261; // 0x102 JumpB
	var_47_bool = 0; // 0x103 MovB
	goto Label_262; // 0x104 Jump
	
Label_262:
	var_88_float = 400.0; // 0x106 PushF
	var_48_float = var_88_float + var_43_float; // 0x107 Add2
	
Label_264:
	var_89_bool = 0; // 0x108 PushV
	var_89_bool = 0; // 0x109 MovB
	var_90_bool = 0; var_91_object = Obj(); // 0x10a PushV
	var_91_object = var_0_object; // 0x10b MovT
	func_1593(var_90_bool, var_91_object); // 0x10c NEW_2
	if(var_90_bool == 0) goto Label_274; // 0x10e JumpB
	var_124_bool = var_3_string == 0; // 0x10f Not
	if(var_124_bool == 0) goto Label_274; // 0x110 JumpB
	var_89_bool = 1; // 0x111 MovB
	
Label_274:
	if(var_89_bool == 0) goto Label_436; // 0x112 JumpB
	func_866(var_53_float); // 0x114 NEW_2
	GetPFPosition(var_44_cvector); // 0x116 TObjFunc
	GetPFPosition(var_45_cvector); // 0x118 Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x11a Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x11b Or2
	var_130_float = var_48_float * var_48_float; // 0x11c Mult
	var_131_bool = var_50_float >= var_130_float; // 0x11d GE
	if(var_131_bool == 0) goto Label_302; // 0x11e JumpB
	var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0; // 0x11f PushV
	var_133_object = var_0_object; // 0x120 MovT
	var_134_float = var_43_float; // 0x121 Mov
	var_135_float = 10000.0; // 0x122 MovF
	var_136_bool = 1; // 0x123 MovB
	var_137_bool = 0; // 0x124 MovB
	TaskCall(3); // 0x125 TaskCall
	func_886(var_140_bool, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool); // 0x126 NEW_2
	TaskReturn(); // 0x127 TaskReturn
	var_215_bool = var_138_bool == 0; // 0x129 Not
	if(var_215_bool == 0) goto Label_300; // 0x12a JumpB
	goto Label_436; // 0x12b Jump
	
Label_436:
	WaitForAnimEnd(); // 0x1b4 Func
	var_216_string = var_3_string; // 0x1b6 PushT
	if(var_216_string == 0) goto Label_441; // 0x1b7 JumpB
	return 22; // 0x1b8 Return
	
Label_441:
	var_217_string = "all"; // 0x1b9 PushS
	var_218_string = "attack_off"; // 0x1ba PushS
	PlayAnimation(var_217_string, var_218_string); // 0x1bb Func
	WaitForAnimEnd(); // 0x1bd Func
	var_219_bool = var_46_bool; // 0x1bf Push
	if(var_219_bool == 0) goto Label_452; // 0x1c0 JumpB
	var_220_float = 2.0; // 0x1c1 PushF
	Sleep(var_220_float); // 0x1c2 Func
	
Label_452:
	return 22; // 0x1c4 Return
	
Label_300:
	var_47_bool = 0; // 0x12c MovB
	goto Label_435; // 0x12d Jump
	
Label_435:
	goto Label_264; // 0x1b3 Jump
	
Label_302:
	var_221_float = var_31_float * var_31_float; // 0x12e Mult
	var_222_bool = var_50_float >= var_221_float; // 0x12f GE
	if(var_222_bool == 0) goto Label_427; // 0x130 JumpB
	GetPFPosition(var_51_cvector); // 0x131 TObjFunc
	CanReachByPF(var_52_bool, var_51_cvector); // 0x133 Func
	var_223_bool = var_52_bool == 0; // 0x135 Not
	if(var_223_bool == 0) goto Label_326; // 0x136 JumpB
	var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0; // 0x137 PushV
	var_225_object = var_0_object; // 0x138 MovT
	var_226_float = var_43_float; // 0x139 Mov
	var_227_float = 10000.0; // 0x13a MovF
	var_228_bool = 1; // 0x13b MovB
	var_229_bool = 0; // 0x13c MovB
	TaskCall(3); // 0x13d TaskCall
	func_886(var_232_bool, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool); // 0x13e NEW_2
	TaskReturn(); // 0x13f TaskReturn
	var_233_bool = var_230_bool == 0; // 0x141 Not
	if(var_233_bool == 0) goto Label_324; // 0x142 JumpB
	goto Label_436; // 0x143 Jump
	
Label_324:
	var_47_bool = 0; // 0x144 MovB
	goto Label_264; // 0x145 Jump
	
Label_326:
	var_234_bool = var_47_bool == 0; // 0x146 Not
	if(var_234_bool == 0) goto Label_351; // 0x147 JumpB
	var_235_object = Obj(); // 0x148 PushV
	var_235_object = var_0_object; // 0x149 MovT
	func_1743(); // 0x14a NEW_2
	var_244_string = "all"; // 0x14c PushS
	var_245_string = "attack_on"; // 0x14d PushS
	PlayAnimation(var_244_string, var_245_string); // 0x14e Func
	WaitForAnimEnd(); // 0x150 Func
	func_866(var_53_float); // 0x153 NEW_2
	StopAsync(); // 0x155 Func
	var_47_bool = 1; // 0x157 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x158 PushV
	var_247_object = var_0_object; // 0x159 MovT
	func_1593(var_246_bool, var_247_object); // 0x15a NEW_2
	var_248_bool = var_246_bool == 0; // 0x15c Not
	if(var_248_bool == 0) goto Label_351; // 0x15d JumpB
	goto Label_436; // 0x15e Jump
	
Label_351:
	rand(var_53_float); // 0x15f Func
	var_249_bool = 0; // 0x161 PushV
	var_249_bool = 1; // 0x162 MovB
	var_250_float = 0.25; // 0x163 PushF
	var_251_bool = var_53_float < var_250_float; // 0x164 LT
	if(var_251_bool == 0) goto Label_363; // 0x165 JumpB
	var_252_bool = 0; // 0x166 PushV
	func_823(var_249_bool, var_252_bool); // 0x167 NEW_2
	if(var_252_bool == 0) goto Label_363; // 0x169 JumpB
	var_249_bool = 0; // 0x16a MovB
	
Label_363:
	if(var_249_bool == 0) goto Label_380; // 0x16b JumpB
	Face(var_0_object); // 0x16c Func
	func_873(); // 0x16f NEW_2
	var_287_string = "all"; // 0x171 PushS
	var_288_string = "attack_stay"; // 0x172 PushS
	PlayAnimation(var_287_string, var_288_string); // 0x173 Func
	var_289_bool = 0; var_290_float = 0; // 0x175 PushV
	var_290_float = var_31_float; // 0x176 Mov
	func_691(var_53_float, var_289_bool, var_290_float); // 0x177 NEW_2
	StopAsync(); // 0x179 Func
	goto Label_426; // 0x17b Jump
	
Label_426:
	goto Label_435; // 0x1aa Jump
	
Label_380:
	Face(var_0_object); // 0x17c Func
	var_508_string = "all"; // 0x17e PushS
	var_509_string = "fjump"; // 0x17f PushS
	PlayAnimation(var_508_string, var_509_string); // 0x180 Func
	WaitForAnimEnd(); // 0x182 Func
	func_866(var_53_float); // 0x185 NEW_2
	var_510_cvector = CVector(0.0, 0.0, 0.0); // 0x187 PushVec
	SetSpeed(var_510_cvector); // 0x188 Func
	Stop(); // 0x18a Func
	StopAsync(); // 0x18c Func
	var_511_bool = 0; // 0x18e PushV
	func_823(var_53_float, var_511_bool); // 0x18f NEW_2
	var_512_bool = var_511_bool == 0; // 0x191 Not
	if(var_512_bool == 0) goto Label_426; // 0x192 JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0x193 PushV
	var_514_object = var_0_object; // 0x194 MovT
	func_1593(var_513_bool, var_514_object); // 0x195 NEW_2
	var_515_bool = var_513_bool == 0; // 0x197 Not
	if(var_515_bool == 0) goto Label_410; // 0x198 JumpB
	goto Label_436; // 0x199 Jump
	
Label_410:
	GetPFPosition(var_44_cvector); // 0x19a TObjFunc
	GetPFPosition(var_45_cvector); // 0x19c Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x19e Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x19f Or2
	var_516_float = var_31_float * var_31_float; // 0x1a0 Mult
	var_517_bool = var_50_float < var_516_float; // 0x1a1 LT
	if(var_517_bool == 0) goto Label_426; // 0x1a2 JumpB
	var_518_bool = 0; var_519_float = 0; // 0x1a3 PushV
	var_519_float = var_31_float; // 0x1a4 Mov
	func_527(var_53_float, var_518_bool, var_519_float); // 0x1a5 NEW_2
	var_520_bool = var_518_bool == 0; // 0x1a7 Not
	if(var_520_bool == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_436; // 0x1a9 Jump
	
Label_427:
	var_521_bool = 0; var_522_float = 0; // 0x1ab PushV
	var_522_float = var_31_float; // 0x1ac Mov
	func_527(var_53_float, var_521_bool, var_522_float); // 0x1ad NEW_2
	var_523_bool = var_521_bool == 0; // 0x1af Not
	if(var_523_bool == 0) goto Label_434; // 0x1b0 JumpB
	goto Label_436; // 0x1b1 Jump
	
Label_434:
	var_47_bool = 1; // 0x1b2 MovB
	
Label_261:
	var_47_bool = 1; // 0x105 MovB
	
Label_238:
	var_43_float = var_31_float; // 0xee Mov
}


func_2021(var_125_bool, var_126_string)
{
	var_127_bool = 0; var_128_bool = 0; // 0x7e5 PushV
	var_129_bool = 0; // 0x7e6 PushV
	func_2401(var_129_bool); // 0x7e7 NEW_2
	if(var_129_bool == 0) goto Label_2034; // 0x7e9 JumpB
	lshHasSpeech(var_128_bool, var_126_string); // 0x7ea Func
	var_130_bool = var_128_bool; // 0x7ec Push
	if(var_130_bool == 0) goto Label_2034; // 0x7ed JumpB
	lshPlaySpeech(var_126_string); // 0x7ee Func
	var_125_bool = 1; // 0x7f0 MovB
	return 2; // 0x7f1 Return
	
Label_2034:
	var_125_bool = 0; // 0x7f2 MovB
	return 2; // 0x7f3 Return
}


func_2278()
{
	var_68_int = 0; // 0x8e6 PushV
	func_2242(var_68_int); // 0x8e7 NEW_2
	var_72_int = 1; // 0x8e9 PushI
	var_73_bool = var_68_int != var_72_int; // 0x8ea Neq
	if(var_73_bool == 0) goto Label_2285; // 0x8eb JumpB
	return 0; // 0x8ec Return
	
Label_2285:
	var_74_string = ""; // 0x8ed PushV
	var_74_string = "liver"; // 0x8ee MovS
	func_2261(var_74_string); // 0x8ef NEW_2
	var_85_string = ""; // 0x8f1 PushV
	var_85_string = "kidney"; // 0x8f2 MovS
	func_2261(var_85_string); // 0x8f3 NEW_2
	var_86_string = ""; // 0x8f5 PushV
	var_86_string = "heart"; // 0x8f6 MovS
	func_2261(var_86_string); // 0x8f7 NEW_2
	var_87_string = ""; // 0x8f9 PushV
	var_87_string = "blood"; // 0x8fa MovS
	func_2261(var_87_string); // 0x8fb NEW_2
	return 0; // 0x8fd Return
}


func_1256(var_111_string)
{
	RemoveRTEnvelope(); // 0x4e9 Func
	SetDeathState(); // 0x4eb Func
	Stop(); // 0x4ed Func
	StopAsync(); // 0x4ef Func
	StopSecondaryAnimation(); // 0x4f1 Func
	var_112_string = ""; // 0x4f3 PushV
	var_112_string = var_111_string; // 0x4f4 Mov
	func_2043(var_112_string); // 0x4f5 NEW_2
	var_141_string = "all"; // 0x4f7 PushS
	PlayAnimation(var_141_string, var_111_string); // 0x4f8 Func
	WaitForAnimEnd(); // 0x4fa Func
	var_142_string = "all"; // 0x4fc PushS
	LockAnimationEnd(var_142_string, var_111_string); // 0x4fd Func
	RemoveEnvelope(); // 0x4ff Func
	return 0; // 0x501 Return
}


func_488(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0; // 0x1e8 PushV
	var_395_float = 0.9; // 0x1e9 PushF
	var_396_float = var_387_float * var_395_float; // 0x1ea Mult
	GetVictim(var_396_float, var_392_object); // 0x1eb Func
	ReportAttack(var_0_object); // 0x1ed Func
	var_397_bool = var_392_object == var_0_object; // 0x1ef Eq
	if(var_397_bool == 0) goto Label_525; // 0x1f0 JumpB
	var_398_float = 0; var_399_object = Obj(); var_400_int = 0; // 0x1f1 PushV
	var_399_object = var_392_object; // 0x1f2 Mov
	var_400_int = var_388_int; // 0x1f3 Mov
	func_218(var_400_int); // 0x1f4 NEW_2
	var_393_float = var_398_float; // 0x1f5 Mov
	var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0; // 0x1f7 PushV
	var_402_object = var_392_object; // 0x1f8 Mov
	var_403_float = var_393_float; // 0x1f9 Mov
	var_405_int = 0; var_406_object = Obj(); var_407_int = 0; // 0x1fa PushV
	var_406_object = var_392_object; // 0x1fb Mov
	var_407_int = var_388_int; // 0x1fc Mov
	func_221(var_407_int); // 0x1fd NEW_2
	var_404_int = var_405_int; // 0x1fe Mov
	func_1479(var_401_float, var_402_object, var_403_float, var_404_int); // 0x200 NEW_2
	var_394_float = var_401_float; // 0x201 Mov
	var_466_int = 0; // 0x203 PushV
	func_871(var_466_int); // 0x204 NEW_2
	ReportHit(var_0_object, var_466_int, var_394_float, var_393_float); // 0x206 Func
	var_467_object = Obj(); var_468_float = 0; // 0x208 PushV
	var_467_object = var_392_object; // 0x209 Mov
	var_468_float = var_394_float; // 0x20a Mov
	func_878(); // 0x20b NEW_2
	
Label_525:
	return 6; // 0x20d Return
}


func_2036()
{
	var_19_bool = 0; // 0x7f4 PushV
	func_2401(var_19_bool); // 0x7f5 NEW_2
	if(var_19_bool == 0) goto Label_2042; // 0x7f7 JumpB
	lshStopSpeech(); // 0x7f8 Func
	
Label_2042:
	return 0; // 0x7fa Return
}


func_762(var_302_bool)
{
	var_303_bool = 0; // 0x2fa PushV
	var_303_bool = 0; // 0x2fb MovB
	var_304_bool = 0; // 0x2fc PushV
	func_734(var_303_bool, var_304_bool); // 0x2fd NEW_2
	if(var_304_bool == 0) goto Label_773; // 0x2ff JumpB
	var_321_bool = 0; // 0x300 PushV
	func_778(var_302_bool, var_303_bool, var_321_bool); // 0x301 NEW_2
	if(var_321_bool == 0) goto Label_773; // 0x303 JumpB
	var_303_bool = 1; // 0x304 MovB
	
Label_773:
	if(var_303_bool == 0) goto Label_776; // 0x305 JumpB
	var_302_bool = 1; // 0x306 MovB
	return 0; // 0x307 Return
	
Label_776:
	var_302_bool = 0; // 0x308 MovB
	return 0; // 0x309 Return
}


func_2043(var_112_string)
{
	var_113_bool = 0; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); // 0x7fb PushV
	IsExisting3DSound(var_121_bool, var_112_string); // 0x7fc Func
	var_129_bool = var_121_bool == 0; // 0x7fe Not
	if(var_129_bool == 0) goto Label_2068; // 0x7ff JumpB
	var_122_int = 0; // 0x800 MovI
	
Label_2049:
	var_130_int = 1; // 0x801 PushI
	var_131_int = var_122_int + var_130_int; // 0x802 Add
	var_132_int = var_112_string + var_131_int; // 0x803 Add
	IsExisting3DSound(var_123_bool, var_132_int); // 0x804 Func
	var_133_bool = var_123_bool == 0; // 0x806 Not
	if(var_133_bool == 0) goto Label_2057; // 0x807 JumpB
	goto Label_2060; // 0x808 Jump
	
Label_2060:
	var_134_bool = var_122_int == 0; // 0x80c Not
	if(var_134_bool == 0) goto Label_2063; // 0x80d JumpB
	return 16; // 0x80e Return
	
Label_2063:
	irand(var_124_int, var_122_int); // 0x80f Func
	var_135_int = 1; // 0x811 PushI
	var_136_int = var_124_int + var_135_int; // 0x812 Add
	var_112_string = var_112_string + var_136_int; // 0x813 Add2
	
Label_2068:
	Is3DSoundLoaded(var_125_bool, var_112_string); // 0x814 Func
	var_137_bool = var_125_bool; // 0x816 Push
	if(var_137_bool == 0) goto Label_2083; // 0x817 JumpB
	GetEyesHeight(var_126_float); // 0x818 Func
	GetDirection(var_127_cvector); // 0x81a Func
	var_138_int = 50; // 0x81c PushI
	var_128_cvector = var_127_cvector * var_138_int; // 0x81d Mult2
	var_139_float = GetByIndex(var_128_cvector, 1); // 0x81e PushE
	var_139_float = var_139_float + var_126_float; // 0x81f Add2
	SetByIndex(var_128_cvector, 1) = var_139_float; // 0x820 PopE
	PlayGlobalSound(var_112_string, var_128_cvector); // 0x821 Func
	
Label_2083:
	return 16; // 0x823 Return
	
Label_2057:
	var_140_int = 1; // 0x809 PushI
	var_122_int = var_122_int + var_140_int; // 0x80a Add2
	goto Label_2049; // 0x80b Jump
}


