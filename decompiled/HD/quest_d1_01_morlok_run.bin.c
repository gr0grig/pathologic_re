task_0_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; // 0xa PushV
	var_16_bool = 0; // 0xb MovB
	var_17_bool = 0; var_18_object = Obj(); // 0xc PushV
	var_18_object = var_15_bool; // 0xd Mov
	func_1436(var_17_bool, var_18_object); // 0xe NEW_2
	if(var_17_bool == 0) goto Label_23; // 0x10 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x11 PushV
	var_22_object = var_15_bool; // 0x12 Mov
	func_1567(var_21_bool, var_22_object); // 0x13 NEW_2
	if(var_21_bool == 0) goto Label_23; // 0x15 JumpB
	var_16_bool = 1; // 0x16 MovB
	
Label_23:
	if(var_16_bool == 0) goto Label_33; // 0x17 JumpB
	func_124(var_14_object, var_15_bool); // 0x19 NEW_2
	var_58_object = Obj(); // 0x1b PushV
	var_58_object = var_15_bool; // 0x1c Mov
	TaskCall(2); // 0x1d TaskCall
	func_323(var_58_object); // 0x1e NEW_2
	TaskReturn(); // 0x1f TaskReturn
	
Label_33:
	return 0; // 0x21 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; // 0x23 PushV
	var_16_bool = 0; // 0x24 MovB
	var_17_bool = 0; var_18_object = Obj(); // 0x25 PushV
	var_18_object = var_15_bool; // 0x26 Mov
	func_1436(var_17_bool, var_18_object); // 0x27 NEW_2
	if(var_17_bool == 0) goto Label_48; // 0x29 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x2a PushV
	var_22_object = var_15_bool; // 0x2b Mov
	func_1567(var_21_bool, var_22_object); // 0x2c NEW_2
	if(var_21_bool == 0) goto Label_48; // 0x2e JumpB
	var_16_bool = 1; // 0x2f MovB
	
Label_48:
	if(var_16_bool == 0) goto Label_58; // 0x30 JumpB
	func_124(var_14_object, var_15_bool); // 0x32 NEW_2
	var_58_object = Obj(); // 0x34 PushV
	var_58_object = var_15_bool; // 0x35 Mov
	TaskCall(2); // 0x36 TaskCall
	func_323(var_58_object); // 0x37 NEW_2
	TaskReturn(); // 0x38 TaskReturn
	
Label_58:
	return 0; // 0x3a Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 10; // 0x66 PushI
	var_17_bool = var_15_bool == var_16_int; // 0x67 Eq
	if(var_17_bool == 0) goto Label_123; // 0x68 JumpB
	var_18_bool = 0; // 0x69 PushV
	func_86(var_13_bool, var_14_object, var_15_bool, var_18_bool); // 0x6a NEW_2
	if(var_18_bool == 0) goto Label_117; // 0x6c JumpB
	var_31_bool = var_2_bool == 0; // 0x6d Not
	if(var_31_bool == 0) goto Label_116; // 0x6e JumpB
	var_32_object = Obj(); // 0x6f PushV
	var_32_object = var_4_object; // 0x70 MovT
	func_1733(var_32_object); // 0x71 NEW_2
	var_2_bool = 1; // 0x73 TMovB
	
Label_116:
	goto Label_123; // 0x74 Jump
	
Label_123:
	return 0; // 0x7b Return
	
Label_117:
	var_39_bool = var_2_bool; // 0x75 PushT
	if(var_39_bool == 0) goto Label_123; // 0x76 JumpB
	var_40_string = "head"; // 0x77 PushS
	UnlookAsync(var_40_string); // 0x78 Func
	var_2_bool = 0; // 0x7a TMovB
}


task_1_event_5(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	StopGroup0(); // 0xe0 Func
	return 0; // 0xe2 Return
}


task_1_event_17(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_304(var_15_bool); // 0x13a NEW_2
	var_16_object = Obj(); // 0x13c PushV
	var_16_object = var_15_bool; // 0x13d Mov
	TaskCall(2); // 0x13e TaskCall
	func_323(var_16_object); // 0x13f NEW_2
	TaskReturn(); // 0x140 TaskReturn
	return 0; // 0x142 Return
}


task_3_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_16_int = 1; // 0x41d PushI
	var_17_bool = var_15_int == var_16_int; // 0x41e Eq
	if(var_17_bool == 0) goto Label_1061; // 0x41f JumpB
	var_18_object = Obj(); // 0x420 PushV
	var_18_object = var_1_int; // 0x421 MovT
	func_1836(var_18_object); // 0x422 NEW_2
	goto Label_1065; // 0x424 Jump
	
Label_1065:
	return 0; // 0x429 Return
	
Label_1061:
	var_23_int = 0; // 0x425 PushV
	var_23_int = var_15_int; // 0x426 Mov
	func_1210(var_14_bool, var_15_int, var_23_int); // 0x427 NEW_2
}


task_3_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x438 PushV
	var_16_bool = 0; // 0x439 MovB
	var_17_bool = var_1_int == var_15_object; // 0x43a Eq
	if(var_17_bool == 0) goto Label_1087; // 0x43b JumpB
	var_18_bool = var_2_bool == 0; // 0x43c Not
	if(var_18_bool == 0) goto Label_1087; // 0x43d JumpB
	var_16_bool = 1; // 0x43e MovB
	
Label_1087:
	if(var_16_bool == 0) goto Label_1093; // 0x43f JumpB
	var_2_bool = 1; // 0x440 TMovB
	var_19_object = Obj(); // 0x441 PushV
	var_19_object = var_15_object; // 0x442 Mov
	func_1733(var_19_object); // 0x443 NEW_2
	
Label_1093:
	return 0; // 0x445 Return
}


task_3_event_2(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x447 PushV
	var_16_bool = 0; // 0x448 MovB
	var_17_bool = var_1_int == var_15_object; // 0x449 Eq
	if(var_17_bool == 0) goto Label_1102; // 0x44a JumpB
	var_18_bool = var_2_bool; // 0x44b PushT
	if(var_18_bool == 0) goto Label_1102; // 0x44c JumpB
	var_16_bool = 1; // 0x44d MovB
	
Label_1102:
	if(var_16_bool == 0) goto Label_1107; // 0x44e JumpB
	var_2_bool = 0; // 0x44f TMovB
	var_19_string = "head"; // 0x450 PushS
	UnlookAsync(var_19_string); // 0x451 Func
	
Label_1107:
	return 0; // 0x453 Return
}


task_3_event_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object); // 0x4cd Func
	return 0; // 0x4cf Return
}


task_3_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1066(var_15_object); // 0x4d9 NEW_2
	var_20_object = Obj(); // 0x4db PushV
	var_20_object = var_15_object; // 0x4dc Mov
	func_1993(); // 0x4dd NEW_2
	return 0; // 0x4df Return
}


task_4_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x4fa PushV
	IsOverrideActive(var_17_bool); // 0x4fb Func
	var_18_bool = var_17_bool == 0; // 0x4fd Not
	if(var_18_bool == 0) goto Label_1283; // 0x4fe JumpB
	var_19_object = Obj(); // 0x4ff PushV
	var_19_object = var_15_object; // 0x500 Mov
	func_1886(var_19_object); // 0x501 NEW_2
	
Label_1283:
	return 2; // 0x503 Return
}


task_4_event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x57a Return
}


task_4_event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x57c Return
}


task_4_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0; // 0x57e Return
}


event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x794 PushV
	func_1785(var_15_object); // 0x795 NEW_2
	RemoveActor(var_15_object); // 0x797 Func
	Hold(); // 0x799 Func
	return 0; // 0x79b Return
}


event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x7ab PushV
	var_19_object = var_15_object; // 0x7ac Mov
	var_20_int = var_16_int; // 0x7ad Mov
	var_21_float = var_17_float; // 0x7ae Mov
	func_1635(var_19_object, var_20_int, var_21_float); // 0x7af NEW_2
	return 0; // 0x7b1 Return
}


event_43(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x7b3 PushV
	var_21_object = var_15_object; // 0x7b4 Mov
	var_22_int = var_16_int; // 0x7b5 Mov
	var_23_float = var_17_float; // 0x7b6 Mov
	var_24_cvector = var_19_cvector; // 0x7b7 Mov
	var_25_cvector = var_20_cvector; // 0x7b8 Mov
	func_1703(var_23_float, var_24_cvector, var_25_cvector); // 0x7b9 NEW_2
	return 0; // 0x7bb Return
}


event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x7bc PushV
	var_19_string = "health"; // 0x7bd PushS
	var_20_bool = var_16_string == var_19_string; // 0x7be Eq
	if(var_20_bool == 0) goto Label_1992; // 0x7bf JumpB
	var_21_string = "health"; // 0x7c0 PushS
	GetProperty(var_21_string, var_18_float); // 0x7c1 Func
	var_22_int = 0; // 0x7c3 PushI
	var_23_bool = var_18_float <= var_22_int; // 0x7c4 LE
	if(var_23_bool == 0) goto Label_1992; // 0x7c5 JumpB
	SignalDeath(var_15_object); // 0x7c6 Func
	
Label_1992:
	return 2; // 0x7c8 Return
}


event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_object = Obj(); // 0x7ca PushV
	var_16_object = var_15_object; // 0x7cb Mov
	func_1948(var_16_object); // 0x7cc NEW_2
	return 0; // 0x7ce Return
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0xe3 PushV
	Hold(); // 0xe4 Func
	GetMainOutdoorScene(var_22_object); // 0xe6 Func
	var_23_int = 0; // 0xe8 MovI
	
Label_233:
	var_29_bool = 1; // 0xe9 PushB
	if(var_29_bool == 0) goto Label_279; // 0xea JumpB
	var_30_int = 1; // 0xeb PushI
	var_23_int = var_23_int + var_30_int; // 0xec Add2
	var_31_string = "pt_d1q01_morlok_run_path"; // 0xed PushS
	var_32_int = var_31_string + var_23_int; // 0xee Add
	GetLocator(var_32_int, var_26_bool, var_24_cvector, var_25_cvector); // 0xef ObjFunc
	var_33_bool = var_26_bool == 0; // 0xf1 Not
	if(var_33_bool == 0) goto Label_244; // 0xf2 JumpB
	goto Label_279; // 0xf3 Jump
	
Label_279:
	var_34_bool = var_0_int == 0; // 0x117 Not
	if(var_34_bool == 0) goto Label_291; // 0x118 JumpB
	var_35_float = GetByIndex(var_25_cvector, 0); // 0x119 PushE
	var_36_float = GetByIndex(var_25_cvector, 2); // 0x11a PushE
	RotateAsync(var_35_float, var_36_float); // 0x11b Func
	TaskCall(0); // 0x11e TaskCall
	func_0(); // 0x11f NEW_2
	TaskReturn(); // 0x120 TaskReturn
	goto Label_296; // 0x122 Jump
	
Label_296:
	return 14; // 0x128 Return
	
Label_291:
	var_105_bool = 1; // 0x123 PushB
	if(var_105_bool == 0) goto Label_296; // 0x124 JumpB
	Hold(); // 0x125 Func
	goto Label_291; // 0x127 Jump
	
Label_244:
	var_106_string = "pt_d1q01_morlok_run_path"; // 0xf4 PushS
	var_107_int = var_106_string + var_23_int; // 0xf5 Add
	Trace(var_107_int); // 0xf6 Func
	var_108_object = Obj(); var_109_cvector = CVector(0,0,0); // 0xf8 PushV
	var_109_cvector = var_24_cvector; // 0xf9 Mov
	func_298(var_108_object, var_109_cvector); // 0xfa NEW_2
	var_27_object = var_108_object; // 0xfb Mov
	var_112_bool = var_27_object == 0; // 0xfd Not
	if(var_112_bool == 0) goto Label_261; // 0xfe JumpB
	var_113_string = "Can't find path to point "; // 0xff PushS
	var_114_int = var_113_string + var_23_int; // 0x100 Add
	Trace(var_114_int); // 0x101 Func
	goto Label_279; // 0x103 Jump
	
Label_261:
	RotatePath(var_27_object, var_28_bool); // 0x105 Func
	var_115_bool = var_28_bool; // 0x107 Push
	if(var_115_bool == 0) goto Label_273; // 0x108 JumpB
	var_116_bool = 1; // 0x109 PushB
	FollowPath(var_27_object, var_116_bool, var_28_bool); // 0x10a Func
	var_27_object = 0; // 0x10c SetNull
	var_117_bool = var_28_bool == 0; // 0x10d Not
	if(var_117_bool == 0) goto Label_272; // 0x10e JumpB
	goto Label_279; // 0x10f Jump
	
Label_272:
	goto Label_277; // 0x110 Jump
	
Label_277:
	var_27_object = 0; // 0x115 SetNull
	goto Label_233; // 0x116 Jump
	
Label_273:
	var_118_string = "Error rotating path"; // 0x111 PushS
	var_119_int = var_118_string + var_23_int; // 0x112 Add
	Trace(var_119_int); // 0x113 Func
}


func_0()
{
	
Label_0:
	var_42_bool = 1; // 0x0 PushB
	if(var_42_bool == 0) goto Label_8; // 0x1 JumpB
	var_43_float = 0; var_44_float = 0; // 0x2 PushV
	var_43_float = 300; // 0x3 MovI
	var_44_float = 100; // 0x4 MovI
	func_59(var_37_int, var_38_int, var_39_bool, var_40_bool, var_41_object, var_43_float, var_44_float); // 0x5 NEW_2
	goto Label_0; // 0x7 Jump
	
Label_8:
	return 0; // 0x8 Return
}


func_644(var_0_int, var_344_bool, var_345_float)
{
	var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; // 0x284 PushV
	func_983(var_353_string); // 0x286 NEW_2
	irand(var_350_int, var_353_string); // 0x288 Func
	var_354_int = 1; // 0x28a PushI
	var_350_int = var_350_int + var_354_int; // 0x28b Add2
	Face(var_0_int); // 0x28c Func
	var_355_bool = 1; // 0x28e PushB
	SetAttackState(var_355_bool); // 0x28f Func
	func_1845(); // 0x292 NEW_2
	var_360_string = "all"; // 0x294 PushS
	var_361_string = "attack_begin"; // 0x295 PushS
	var_362_int = var_361_string + var_350_int; // 0x296 Add
	PlayAnimation(var_360_string, var_362_int); // 0x297 Func
	WaitForAnimEnd(); // 0x299 Func
	func_951(var_352_int, var_353_string); // 0x29c NEW_2
	var_378_bool = 0; var_379_object = Obj(); // 0x29e PushV
	var_379_object = var_0_int; // 0x29f MovT
	func_1567(var_378_bool, var_379_object); // 0x2a0 NEW_2
	var_380_bool = var_378_bool == 0; // 0x2a2 Not
	if(var_380_bool == 0) goto Label_680; // 0x2a3 JumpB
	StopAsync(); // 0x2a4 Func
	var_344_bool = 0; // 0x2a6 MovB
	return 8; // 0x2a7 Return
	
Label_680:
	var_381_float = 0; var_382_int = 0; // 0x2a8 PushV
	var_381_float = var_345_float; // 0x2a9 Mov
	var_382_int = var_350_int; // 0x2aa Mov
	func_605(var_353_string, var_381_float, var_382_int); // 0x2ab NEW_2
	var_463_string = "all"; // 0x2ad PushS
	var_464_string = "attack_middle"; // 0x2ae PushS
	var_465_int = var_464_string + var_350_int; // 0x2af Add
	HasAnimation(var_351_bool, var_463_string, var_465_int); // 0x2b0 Func
	var_466_bool = var_351_bool; // 0x2b2 Push
	if(var_466_bool == 0) goto Label_761; // 0x2b3 JumpB
	func_1845(); // 0x2b5 NEW_2
	var_467_string = "all"; // 0x2b7 PushS
	var_468_string = "attack_middle"; // 0x2b8 PushS
	var_469_int = var_468_string + var_350_int; // 0x2b9 Add
	PlayAnimation(var_467_string, var_469_int); // 0x2ba Func
	WaitForAnimEnd(); // 0x2bc Func
	func_983(var_353_string); // 0x2bf NEW_2
	var_470_bool = 0; var_471_object = Obj(); // 0x2c1 PushV
	var_471_object = var_0_int; // 0x2c2 MovT
	func_1567(var_470_bool, var_471_object); // 0x2c3 NEW_2
	var_472_bool = var_470_bool == 0; // 0x2c5 Not
	if(var_472_bool == 0) goto Label_715; // 0x2c6 JumpB
	StopAsync(); // 0x2c7 Func
	var_344_bool = 0; // 0x2c9 MovB
	return 8; // 0x2ca Return
	
Label_715:
	var_473_float = 0; var_474_int = 0; // 0x2cb PushV
	var_473_float = var_345_float; // 0x2cc Mov
	var_474_int = var_350_int; // 0x2cd Mov
	func_605(var_353_string, var_473_float, var_474_int); // 0x2ce NEW_2
	var_352_int = 1; // 0x2d0 MovI
	
Label_721:
	var_475_string = "attack_middle"; // 0x2d1 PushS
	var_476_int = var_475_string + var_350_int; // 0x2d2 Add
	var_477_string = "_"; // 0x2d3 PushS
	var_478_int = var_476_int + var_477_string; // 0x2d4 Add
	var_353_string = var_478_int + var_352_int; // 0x2d5 Add2
	var_479_string = "all"; // 0x2d6 PushS
	HasAnimation(var_351_bool, var_479_string, var_353_string); // 0x2d7 Func
	var_480_bool = var_351_bool == 0; // 0x2d9 Not
	if(var_480_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_761; // 0x2db Jump
	
Label_761:
	var_481_bool = 0; // 0x2f9 PushB
	SetAttackState(var_481_bool); // 0x2fa Func
	var_482_string = "all"; // 0x2fc PushS
	var_483_string = "attack_end"; // 0x2fd PushS
	var_484_int = var_483_string + var_350_int; // 0x2fe Add
	PlayAnimation(var_482_string, var_484_int); // 0x2ff Func
	var_485_bool = 0; // 0x301 PushV
	func_997(var_485_bool); // 0x302 NEW_2
	if(var_485_bool == 0) goto Label_779; // 0x304 JumpB
	var_486_bool = 0; var_487_float = 0; // 0x305 PushV
	var_487_float = 0.75; // 0x306 MovF
	func_781(var_486_bool, var_487_float); // 0x307 NEW_2
	StopAsync(); // 0x309 Func
	
Label_779:
	var_344_bool = 1; // 0x30b MovB
	return 8; // 0x30c Return
	
Label_732:
	func_1845(); // 0x2dd NEW_2
	var_495_string = "all"; // 0x2df PushS
	PlayAnimation(var_495_string, var_353_string); // 0x2e0 Func
	WaitForAnimEnd(); // 0x2e2 Func
	func_983(var_353_string); // 0x2e5 NEW_2
	var_496_bool = 0; var_497_object = Obj(); // 0x2e7 PushV
	var_497_object = var_0_int; // 0x2e8 MovT
	func_1567(var_496_bool, var_497_object); // 0x2e9 NEW_2
	var_498_bool = var_496_bool == 0; // 0x2eb Not
	if(var_498_bool == 0) goto Label_753; // 0x2ec JumpB
	StopAsync(); // 0x2ed Func
	var_344_bool = 0; // 0x2ef MovB
	return 8; // 0x2f0 Return
	
Label_753:
	var_499_float = 0; var_500_int = 0; // 0x2f1 PushV
	var_499_float = var_345_float; // 0x2f2 Mov
	var_500_int = var_350_int; // 0x2f3 Mov
	func_605(var_353_string, var_499_float, var_500_int); // 0x2f4 NEW_2
	var_501_int = 1; // 0x2f6 PushI
	var_352_int = var_352_int + var_501_int; // 0x2f7 Add2
	goto Label_721; // 0x2f8 Jump
}


func_1284(var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_object = Obj(); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_string = ""; var_56_object = Obj(); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); // 0x504 PushV
	var_61_bool = var_40_object == 0; // 0x505 NullEq
	if(var_61_bool == 0) goto Label_1292; // 0x506 JumpB
	var_62_string = ""; // 0x507 PushV
	var_62_string = "fdie"; // 0x508 MovS
	func_1375(var_62_string); // 0x509 NEW_2
	goto Label_1374; // 0x50b Jump
	
Label_1374:
	return 20; // 0x55e Return
	
Label_1292:
	GetPosition(var_51_cvector); // 0x50c ObjFunc
	GetPosition(var_52_cvector); // 0x50e Func
	GetDirection(var_53_cvector); // 0x510 Func
	var_54_cvector = var_52_cvector - var_51_cvector; // 0x512 Sub2
	var_94_float = GetByIndex(var_54_cvector, 0); // 0x513 PushE
	var_95_float = GetByIndex(var_53_cvector, 0); // 0x514 PushE
	var_96_float = var_94_float * var_95_float; // 0x515 Mult
	var_97_float = GetByIndex(var_54_cvector, 2); // 0x516 PushE
	var_98_float = GetByIndex(var_53_cvector, 2); // 0x517 PushE
	var_99_float = var_97_float * var_98_float; // 0x518 Mult
	var_100_int = var_96_float + var_99_float; // 0x519 Add
	var_101_int = 0; // 0x51a PushI
	var_102_bool = var_100_int >= var_101_int; // 0x51b GE
	if(var_102_bool == 0) goto Label_1311; // 0x51c JumpB
	var_55_string = "fdie"; // 0x51d MovS
	goto Label_1312; // 0x51e Jump
	
Label_1312:
	RemoveRTEnvelope(); // 0x520 Func
	SetDeathState(); // 0x522 Func
	Stop(); // 0x524 Func
	StopAsync(); // 0x526 Func
	var_56_object = var_40_object; // 0x528 Mov
	var_103_string = "GetScriptProperty"; // 0x529 PushS
	var_104_int = 2; // 0x52a PushI
	var_105_bool = IsFuncExist(var_40_object, var_103_string, var_104_int); // 0x52b FuncExist
	if(var_105_bool == 0) goto Label_1336; // 0x52c JumpB
	var_106_string = "Owner"; // 0x52d PushS
	HasScriptProperty(var_57_bool, var_106_string); // 0x52e ObjFunc
	var_107_bool = var_57_bool; // 0x530 Push
	if(var_107_bool == 0) goto Label_1336; // 0x531 JumpB
	var_108_string = "Owner"; // 0x532 PushS
	GetScriptProperty(var_56_object, var_108_string); // 0x533 ObjFunc
	var_109_bool = var_56_object == 0; // 0x535 NullEq
	if(var_109_bool == 0) goto Label_1336; // 0x536 JumpB
	var_56_object = var_40_object; // 0x537 Mov
	
Label_1336:
	var_110_string = "@GetEyesHeight"; // 0x538 PushS
	var_111_int = 1; // 0x539 PushI
	var_112_bool = IsFuncExist(var_56_object, var_110_string, var_111_int); // 0x53a FuncExist
	if(var_112_bool == 0) goto Label_1351; // 0x53b JumpB
	GetEyesHeight(var_59_float); // 0x53c ObjFunc
	var_60_cvector = CVector(0.0, 0.0, 0.0); // 0x53e MovV
	var_113_float = GetByIndex(var_60_cvector, 1); // 0x53f PushE
	var_113_float = var_59_float; // 0x540 Mov
	SetByIndex(var_60_cvector, 1) = var_113_float; // 0x541 PopE
	var_114_string = "head"; // 0x542 PushS
	LookAsync(var_40_object, var_114_string, var_60_cvector); // 0x543 Func
	var_58_bool = 1; // 0x545 MovB
	goto Label_1352; // 0x546 Jump
	
Label_1352:
	var_115_string = ""; // 0x548 PushV
	var_115_string = var_55_string; // 0x549 Mov
	func_1744(var_115_string); // 0x54a NEW_2
	var_116_string = "all"; // 0x54c PushS
	PlayAnimation(var_116_string, var_55_string); // 0x54d Func
	WaitForAnimEnd(); // 0x54f Func
	var_117_bool = var_58_bool; // 0x551 Push
	if(var_117_bool == 0) goto Label_1368; // 0x552 JumpB
	StopAsync(); // 0x553 Func
	var_118_string = "head"; // 0x555 PushS
	UnlookAsync(var_118_string); // 0x556 Func
	
Label_1368:
	var_119_string = "all"; // 0x558 PushS
	LockAnimationEnd(var_119_string, var_55_string); // 0x559 Func
	RemoveEnvelope(); // 0x55b Func
	var_56_object = 0; // 0x55d SetNull
	
Label_1351:
	var_58_bool = 0; // 0x547 MovB
	
Label_1311:
	var_55_string = "bdie"; // 0x51f MovS
}


func_1801(var_433_float, var_434_float, var_435_float)
{
	var_438_bool = var_434_float < var_435_float; // 0x70a LT
	if(var_438_bool == 0) goto Label_1806; // 0x70b JumpB
	var_433_float = var_434_float; // 0x70c Mov
	goto Label_1807; // 0x70d Jump
	
Label_1807:
	return 0; // 0x70f Return
	
Label_1806:
	var_433_float = var_435_float; // 0x70e Mov
}


func_138()
{
	var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_bool = 0; // 0x8a PushV
	WaitForAnimEnd(); // 0x8b Func
	var_66_bool = 0; // 0x8d PushV
	func_1728(var_66_bool); // 0x8e NEW_2
	var_67_bool = var_66_bool == 0; // 0x90 Not
	if(var_67_bool == 0) goto Label_147; // 0x91 JumpB
	return 14; // 0x92 Return
	
Label_147:
	var_68_int = 0; // 0x93 PushV
	func_1863(var_68_int); // 0x94 NEW_2
	var_59_int = var_68_int; // 0x95 Mov
	var_60_int = 0; // 0x97 MovI
	
Label_152:
	var_81_bool = 0; // 0x98 PushV
	var_81_bool = 0; // 0x99 MovB
	var_82_int = 5; // 0x9a PushI
	var_83_bool = var_60_int < var_82_int; // 0x9b LT
	if(var_83_bool == 0) goto Label_162; // 0x9c JumpB
	var_84_bool = 0; // 0x9d PushV
	func_1728(var_84_bool); // 0x9e NEW_2
	if(var_84_bool == 0) goto Label_162; // 0xa0 JumpB
	var_81_bool = 1; // 0xa1 MovB
	
Label_162:
	if(var_81_bool == 0) goto Label_214; // 0xa2 JumpB
	var_85_int = 3; // 0xa3 PushI
	irand(var_61_int, var_85_int); // 0xa4 Func
	var_86_int = 0; // 0xa6 PushI
	var_87_bool = var_61_int == var_86_int; // 0xa7 Eq
	if(var_87_bool == 0) goto Label_186; // 0xa8 JumpB
	var_88_int = var_59_int; // 0xa9 Push
	if(var_88_int == 0) goto Label_185; // 0xaa JumpB
	irand(var_62_int, var_59_int); // 0xab Func
	var_89_string = "all"; // 0xad PushS
	var_90_string = ""; var_91_int = 0; // 0xae PushV
	var_91_int = var_62_int; // 0xaf Mov
	func_1856(var_90_string, var_91_int); // 0xb0 NEW_2
	PlayAnimation(var_89_string, var_90_string); // 0xb2 Func
	WaitForAnimEnd(var_63_bool); // 0xb4 Func
	var_92_bool = var_63_bool == 0; // 0xb6 Not
	if(var_92_bool == 0) goto Label_185; // 0xb7 JumpB
	goto Label_214; // 0xb8 Jump
	
Label_214:
	ResetAAS(); // 0xd6 Func
	return 14; // 0xd8 Return
	
Label_185:
	goto Label_203; // 0xb9 Jump
	
Label_203:
	var_93_bool = 0; // 0xcb PushV
	func_217(var_93_bool); // 0xcc NEW_2
	var_94_bool = var_93_bool == 0; // 0xce Not
	if(var_94_bool == 0) goto Label_209; // 0xcf JumpB
	goto Label_214; // 0xd0 Jump
	
Label_209:
	ResetAAS(); // 0xd1 Func
	var_95_int = 1; // 0xd3 PushI
	var_60_int = var_60_int + var_95_int; // 0xd4 Add2
	goto Label_152; // 0xd5 Jump
	
Label_186:
	var_96_int = 1; // 0xba PushI
	var_97_bool = var_61_int == var_96_int; // 0xbb Eq
	if(var_97_bool == 0) goto Label_200; // 0xbc JumpB
	var_98_int = 4; // 0xbd PushI
	rand(var_64_float, var_98_int); // 0xbe Func
	var_99_int = 1; // 0xc0 PushI
	var_100_int = var_64_float + var_99_int; // 0xc1 Add
	Sleep(var_100_int, var_65_bool); // 0xc2 Func
	var_101_bool = var_65_bool == 0; // 0xc4 Not
	if(var_101_bool == 0) goto Label_199; // 0xc5 JumpB
	goto Label_214; // 0xc6 Jump
	
Label_199:
	goto Label_203; // 0xc7 Jump
	
Label_200:
	var_102_int = var_60_int; // 0xc8 Push
	if(var_102_int == 0) goto Label_203; // 0xc9 JumpB
	goto Label_214; // 0xca Jump
}


func_781(var_486_bool, var_487_float)
{
	var_488_float = 0; var_489_bool = 0; var_490_float = 0; var_491_bool = 0; // 0x30d PushV
	rand(var_490_float); // 0x30e Func
	var_492_bool = var_490_float < var_487_float; // 0x310 LT
	if(var_492_bool == 0) goto Label_801; // 0x311 JumpB
	
Label_786:
	IsAnimationPlaying(var_491_bool); // 0x312 Func
	var_493_bool = var_491_bool == 0; // 0x314 Not
	if(var_493_bool == 0) goto Label_791; // 0x315 JumpB
	goto Label_800; // 0x316 Jump
	
Label_800:
	goto Label_806; // 0x320 Jump
	
Label_806:
	var_486_bool = 0; // 0x326 MovB
	return 4; // 0x327 Return
	
Label_791:
	var_494_bool = 0; // 0x317 PushV
	func_879(var_494_bool); // 0x318 NEW_2
	if(var_494_bool == 0) goto Label_797; // 0x31a JumpB
	var_486_bool = 1; // 0x31b MovB
	return 4; // 0x31c Return
	
Label_797:
	sync(); // 0x31d Func
	goto Label_786; // 0x31f Jump
	
Label_801:
	WaitForAnimEnd(); // 0x321 Func
	func_983(var_491_bool); // 0x324 NEW_2
}


func_1421(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x58d PushV
	GetPosition(var_53_cvector); // 0x58e Func
	GetPosition(var_54_cvector); // 0x590 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x592 Sub2
	return 4; // 0x593 Return
}


func_1808(var_443_float, var_444_float, var_445_float, var_446_float)
{
	var_447_bool = var_444_float < var_445_float; // 0x711 LT
	if(var_447_bool == 0) goto Label_1813; // 0x712 JumpB
	var_443_float = var_445_float; // 0x713 Mov
	return 0; // 0x714 Return
	
Label_1813:
	var_448_bool = var_444_float > var_446_float; // 0x715 GT
	if(var_448_bool == 0) goto Label_1817; // 0x716 JumpB
	var_443_float = var_446_float; // 0x717 Mov
	return 0; // 0x718 Return
	
Label_1817:
	var_443_float = var_444_float; // 0x719 Mov
	return 0; // 0x71a Return
}


func_1428(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x594 PushV
	GetPosition(var_27_cvector); // 0x595 Func
	GetPosition(var_28_cvector); // 0x597 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x599 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x59a Or2
	return 6; // 0x59b Return
}


func_1819(var_451_float)
{
	var_452_object = Obj(); var_453_object = Obj(); // 0x71b PushV
	CreateFloatVector(var_453_object); // 0x71c Func
	add(var_451_float); // 0x71e ObjFunc
	var_454_int = 0; // 0x720 PushI
	var_455_bool = var_451_float < var_454_int; // 0x721 LT
	if(var_455_bool == 0) goto Label_1831; // 0x722 JumpB
	var_456_float = 0.7; // 0x723 PushF
	var_457_int = 500; // 0x724 PushI
	RumblePlay(var_456_float, var_457_int); // 0x725 Func
	
Label_1831:
	var_458_int = 15; // 0x727 PushI
	SendWorldWndMessage(var_458_int, var_453_object); // 0x728 Func
	return 2; // 0x72a Return
}


func_1436(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_bool = 0; // 0x59c PushV
	IsPlayerActor(var_151_object, var_153_bool); // 0x59d Func
	var_150_bool = var_153_bool; // 0x59f Mov
	return 2; // 0x5a0 Return
}


func_1948(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x79c PushV
	GetScene(var_18_object); // 0x79d Func
	func_1916(); // 0x7a0 NEW_2
	var_39_object = Obj(); // 0x7a2 PushV
	var_39_object = var_16_object; // 0x7a3 Mov
	TaskCall(4); // 0x7a4 TaskCall
	func_1259(var_39_object); // 0x7a5 NEW_2
	TaskReturn(); // 0x7a6 TaskReturn
	return 2; // 0x7a8 Return
}


func_1567(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x61f PushV
	var_32_bool = 0; var_33_object = Obj(); // 0x620 PushV
	var_33_object = var_29_object; // 0x621 Mov
	func_1531(var_32_bool, var_33_object); // 0x622 NEW_2
	var_49_bool = var_32_bool == 0; // 0x624 Not
	if(var_49_bool == 0) goto Label_1576; // 0x625 JumpB
	var_28_bool = 0; // 0x626 MovB
	return 2; // 0x627 Return
	
Label_1576:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x628 PushV
	var_51_object = var_29_object; // 0x629 Mov
	var_52_string = "noaccess"; // 0x62a MovS
	func_1441(var_50_bool, var_51_object, var_52_string); // 0x62b NEW_2
	var_59_bool = var_50_bool == 0; // 0x62d Not
	if(var_59_bool == 0) goto Label_1585; // 0x62e JumpB
	var_28_bool = 1; // 0x62f MovB
	return 2; // 0x630 Return
	
Label_1585:
	var_60_string = "noaccess"; // 0x631 PushS
	GetProperty(var_60_string, var_31_int); // 0x632 ObjFunc
	var_61_int = 0; // 0x634 PushI
	var_28_bool = var_31_int == var_61_int; // 0x635 Eq2
	return 2; // 0x636 Return
}


func_1441(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x5a1 PushV
	var_55_string = "HasProperty"; // 0x5a2 PushS
	var_56_int = 2; // 0x5a3 PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x5a4 FuncExist
	var_58_bool = var_57_bool == 0; // 0x5a5 Not
	if(var_58_bool == 0) goto Label_1449; // 0x5a6 JumpB
	var_50_bool = 0; // 0x5a7 MovB
	return 2; // 0x5a8 Return
	
Label_1449:
	HasProperty(var_52_string, var_54_bool); // 0x5a9 ObjFunc
	var_50_bool = var_54_bool; // 0x5ab Mov
	return 2; // 0x5ac Return
}


func_1703(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x6a7 PushV
	GetScene(var_28_object); // 0x6a8 Func
	var_30_string = "scripted"; // 0x6aa PushS
	var_31_string = "blood_dir.xml"; // 0x6ab PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x6ac Func
	var_32_object = Obj(); // 0x6ae PushV
	var_32_object = var_21_object; // 0x6af Mov
	func_1591(var_32_object); // 0x6b0 NEW_2
	return 4; // 0x6b2 Return
}


func_808(var_0_int, var_283_bool, var_284_float)
{
	var_285_bool = 0; var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_float = 0; var_290_bool = 0; var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_float = 0; // 0x328 PushV
	
Label_809:
	IsAnimationPlaying(var_290_bool); // 0x329 Func
	var_295_bool = var_290_bool == 0; // 0x32b Not
	if(var_295_bool == 0) goto Label_814; // 0x32c JumpB
	goto Label_846; // 0x32d Jump
	
Label_846:
	func_983(var_294_float); // 0x34f NEW_2
	var_283_bool = 0; // 0x351 MovB
	return 10; // 0x352 Return
	
Label_814:
	var_296_bool = 0; // 0x32e PushV
	func_879(var_296_bool); // 0x32f NEW_2
	if(var_296_bool == 0) goto Label_820; // 0x331 JumpB
	var_283_bool = 1; // 0x332 MovB
	return 10; // 0x333 Return
	
Label_820:
	var_339_bool = 0; var_340_object = Obj(); // 0x334 PushV
	var_340_object = var_0_int; // 0x335 MovT
	func_1567(var_339_bool, var_340_object); // 0x336 NEW_2
	var_341_bool = var_339_bool == 0; // 0x338 Not
	if(var_341_bool == 0) goto Label_828; // 0x339 JumpB
	var_283_bool = 0; // 0x33a MovB
	return 10; // 0x33b Return
	
Label_828:
	GetPFPosition(var_291_cvector); // 0x33c TObjFunc
	GetPFPosition(var_292_cvector); // 0x33e Func
	var_293_cvector = var_291_cvector - var_292_cvector; // 0x340 Sub2
	var_294_float = var_293_cvector | var_293_cvector; // 0x341 Or2
	var_342_float = var_284_float * var_284_float; // 0x342 Mult
	var_343_bool = var_294_float < var_342_float; // 0x343 LT
	if(var_343_bool == 0) goto Label_843; // 0x344 JumpB
	var_344_bool = 0; var_345_float = 0; // 0x345 PushV
	var_345_float = var_284_float; // 0x346 Mov
	func_644(var_294_float, var_344_bool, var_345_float); // 0x347 NEW_2
	var_283_bool = 1; // 0x349 MovB
	return 10; // 0x34a Return
	
Label_843:
	sync(); // 0x34b Func
	goto Label_809; // 0x34d Jump
}


func_1916()
{
	var_19_int = 0; // 0x77c PushV
	func_1880(var_19_int); // 0x77d NEW_2
	var_23_int = 1; // 0x77f PushI
	var_24_bool = var_19_int != var_23_int; // 0x780 Neq
	if(var_24_bool == 0) goto Label_1923; // 0x781 JumpB
	return 0; // 0x782 Return
	
Label_1923:
	var_25_string = ""; // 0x783 PushV
	var_25_string = "liver"; // 0x784 MovS
	func_1899(var_25_string); // 0x785 NEW_2
	var_36_string = ""; // 0x787 PushV
	var_36_string = "kidney"; // 0x788 MovS
	func_1899(var_36_string); // 0x789 NEW_2
	var_37_string = ""; // 0x78b PushV
	var_37_string = "heart"; // 0x78c MovS
	func_1899(var_37_string); // 0x78d NEW_2
	var_38_string = ""; // 0x78f PushV
	var_38_string = "blood"; // 0x790 MovS
	func_1899(var_38_string); // 0x791 NEW_2
	return 0; // 0x793 Return
}


func_298(var_108_object, var_109_cvector)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x12a PushV
	FindPathTo(var_111_object, var_109_cvector); // 0x12b Func
	var_108_object = var_111_object; // 0x12d Mov
	return 2; // 0x12e Return
}


func_1066(var_2_bool)
{
	var_16_int = 1; // 0x42a PushI
	KillTimer(var_16_int); // 0x42b Func
	var_17_bool = var_2_bool; // 0x42d PushT
	if(var_17_bool == 0) goto Label_1075; // 0x42e JumpB
	var_2_bool = 0; // 0x42f TMovB
	var_18_string = "head"; // 0x430 PushS
	UnlookAsync(var_18_string); // 0x431 Func
	
Label_1075:
	func_1232(var_15_object); // 0x434 NEW_2
	return 0; // 0x436 Return
}


func_940(var_0_int, var_246_bool)
{
	var_247_bool = 0; var_248_bool = 0; // 0x3ac PushV
	var_249_string = "IsAttacking"; // 0x3ad PushS
	var_250_int = 1; // 0x3ae PushI
	var_251_bool = IsFuncExist(var_0_int, var_249_string, var_250_int); // 0x3af FuncExist
	if(var_251_bool == 0) goto Label_949; // 0x3b0 JumpB
	IsAttacking(var_248_bool); // 0x3b1 TObjFunc
	var_246_bool = var_248_bool; // 0x3b3 Mov
	return 2; // 0x3b4 Return
	
Label_949:
	var_246_bool = 0; // 0x3b5 MovB
	return 2; // 0x3b6 Return
}


func_1453(var_395_float, var_396_object, var_397_float, var_398_int)
{
	var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_float = 0; var_406_float = 0; var_407_float = 0; var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; // 0x5ad PushV
	var_414_bool = 0; var_415_object = Obj(); var_416_string = ""; // 0x5ae PushV
	var_415_object = var_396_object; // 0x5af Mov
	var_416_string = "health"; // 0x5b0 MovS
	func_1441(var_414_bool, var_415_object, var_416_string); // 0x5b1 NEW_2
	var_417_bool = var_414_bool == 0; // 0x5b3 Not
	if(var_417_bool == 0) goto Label_1463; // 0x5b4 JumpB
	var_395_float = 0.0; // 0x5b5 MovF
	return 12; // 0x5b6 Return
	
Label_1463:
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x5b7 PushV
	var_419_object = var_396_object; // 0x5b8 Mov
	var_420_string = "armor"; // 0x5b9 MovS
	func_1441(var_418_bool, var_419_object, var_420_string); // 0x5ba NEW_2
	var_421_bool = var_418_bool == 0; // 0x5bc Not
	if(var_421_bool == 0) goto Label_1472; // 0x5bd JumpB
	var_408_int = 0; // 0x5be MovI
	goto Label_1475; // 0x5bf Jump
	
Label_1475:
	var_422_string = "armor_"; // 0x5c3 PushS
	var_423_string = ""; var_424_int = 0; // 0x5c4 PushV
	var_424_int = var_398_int; // 0x5c5 Mov
	func_1407(var_423_string, var_424_int); // 0x5c6 NEW_2
	var_409_string = var_422_string + var_423_string; // 0x5c8 Add2
	var_429_bool = 0; var_430_object = Obj(); var_431_string = ""; // 0x5c9 PushV
	var_430_object = var_396_object; // 0x5ca Mov
	var_431_string = var_409_string; // 0x5cb Mov
	func_1441(var_429_bool, var_430_object, var_431_string); // 0x5cc NEW_2
	var_432_bool = var_429_bool == 0; // 0x5ce Not
	if(var_432_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_410_int = 0; // 0x5d0 MovI
	goto Label_1492; // 0x5d1 Jump
	
Label_1492:
	var_433_float = 0; var_434_float = 0; var_435_float = 0; // 0x5d4 PushV
	var_436_int = var_408_int + var_410_int; // 0x5d5 Add
	var_437_float = 100.0; // 0x5d6 PushF
	var_434_float = var_436_int / var_436_int; // 0x5d7 Div2
	var_435_float = 1; // 0x5d8 MovI
	func_1801(var_433_float, var_434_float, var_435_float); // 0x5d9 NEW_2
	var_411_float = var_433_float; // 0x5da Mov
	var_439_string = "health"; // 0x5dc PushS
	GetProperty(var_439_string, var_412_float); // 0x5dd ObjFunc
	var_440_int = 1; // 0x5df PushI
	var_441_int = var_440_int - var_411_float; // 0x5e0 Sub
	var_413_float = var_397_float * var_441_int; // 0x5e1 Mult2
	var_442_string = "health"; // 0x5e2 PushS
	var_443_float = 0; var_444_float = 0; var_445_float = 0; var_446_float = 0; // 0x5e3 PushV
	var_444_float = var_412_float - var_413_float; // 0x5e4 Sub2
	var_445_float = 0; // 0x5e5 MovI
	var_446_float = 1; // 0x5e6 MovI
	func_1808(var_443_float, var_444_float, var_445_float, var_446_float); // 0x5e7 NEW_2
	SetProperty(var_442_string, var_443_float); // 0x5e9 ObjFunc
	var_449_bool = 0; var_450_object = Obj(); // 0x5eb PushV
	var_450_object = var_396_object; // 0x5ec Mov
	func_1436(var_449_bool, var_450_object); // 0x5ed NEW_2
	if(var_449_bool == 0) goto Label_1524; // 0x5ef JumpB
	var_451_float = 0; // 0x5f0 PushV
	var_451_float = -var_413_float; // 0x5f1 Neg2
	func_1819(var_451_float); // 0x5f2 NEW_2
	
Label_1524:
	var_395_float = var_413_float; // 0x5f4 Mov
	return 12; // 0x5f5 Return
	
Label_1490:
	GetProperty(var_409_string, var_410_int); // 0x5d2 ObjFunc
	
Label_1472:
	var_459_string = "armor"; // 0x5c0 PushS
	GetProperty(var_459_string, var_408_int); // 0x5c1 ObjFunc
}


func_1836(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x72c PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x72d Func
	var_21_bool = var_20_bool; // 0x72f Push
	if(var_21_bool == 0) goto Label_1844; // 0x730 JumpB
	var_22_string = "attack"; // 0x731 PushS
	PlayGlobalMusic(var_22_string); // 0x732 Func
	
Label_1844:
	return 2; // 0x734 Return
}


func_1407(var_423_string, var_424_int)
{
	var_425_int = 2; // 0x580 PushI
	var_426_bool = var_424_int == var_425_int; // 0x581 Eq
	if(var_426_bool == 0) goto Label_1414; // 0x582 JumpB
	var_423_string = "fire"; // 0x583 MovS
	return 0; // 0x584 Return
	
Label_1414:
	var_427_int = 1; // 0x586 PushI
	var_428_bool = var_424_int == var_427_int; // 0x587 Eq
	if(var_428_bool == 0) goto Label_1419; // 0x588 JumpB
	var_423_string = "bullet"; // 0x589 MovS
	return 0; // 0x58a Return
	
Label_1419:
	var_423_string = "phys"; // 0x58b MovS
	return 0; // 0x58c Return
}


func_304(var_0_int)
{
	var_0_int = 1; // 0x130 TMovB
	Stop(); // 0x131 Func
	StopGroup0(); // 0x133 Func
	StopAsync(); // 0x135 Func
	return 0; // 0x137 Return
}


func_1791(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x6ff PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x700 Or
	var_56_float = sqrt(var_57_int); // 0x701 Sqrt2
	var_58_float = 0.0; // 0x702 PushF
	var_59_bool = var_56_float < var_58_float; // 0x703 LT
	if(var_59_bool == 0) goto Label_1799; // 0x704 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x705 MovV
	return 2; // 0x706 Return
	
Label_1799:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x707 Div2
	return 2; // 0x708 Return
}


func_1717()
{
	var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); // 0x6b5 PushV
	GetPosition(var_233_cvector); // 0x6b6 ObjFunc
	GetPosition(var_234_cvector); // 0x6b8 Func
	var_235_cvector = var_233_cvector - var_234_cvector; // 0x6ba Sub2
	var_236_float = GetByIndex(var_235_cvector, 0); // 0x6bb PushE
	var_237_float = GetByIndex(var_235_cvector, 2); // 0x6bc PushE
	RotateAsync(var_236_float, var_237_float); // 0x6bd Func
	return 6; // 0x6bf Return
}


func_1845()
{
	var_356_object = Obj(); var_357_object = Obj(); // 0x735 PushV
	GetScene(var_357_object); // 0x736 Func
	var_358_string = "battle"; // 0x738 PushS
	var_359_object = Obj(); // 0x739 PushV
	func_1785(var_359_object); // 0x73a NEW_2
	BroadcastMessage(var_358_string, var_359_object, var_357_object); // 0x73c Func
	return 2; // 0x73e Return
}


func_951(var_2_bool, var_5_bool)
{
	var_363_float = 0; var_364_int = 0; var_365_float = 0; var_366_int = 0; // 0x3b7 PushV
	var_367_bool = var_2_bool == 0; // 0x3b8 Not
	if(var_367_bool == 0) goto Label_955; // 0x3b9 JumpB
	return 4; // 0x3ba Return
	
Label_955:
	var_368_bool = var_5_bool; // 0x3bb PushT
	if(var_368_bool == 0) goto Label_963; // 0x3bc JumpB
	var_369_int = -1; // 0x3bd PushI
	var_5_bool = var_5_bool + var_369_int; // 0x3be Add2
	var_370_int = 0; // 0x3bf PushI
	var_371_bool = var_5_bool > var_370_int; // 0x3c0 GT
	if(var_371_bool == 0) goto Label_963; // 0x3c1 JumpB
	return 4; // 0x3c2 Return
	
Label_963:
	rand(var_365_float); // 0x3c3 Func
	var_372_float = 0; // 0x3c5 PushV
	func_1001(var_372_float); // 0x3c6 NEW_2
	var_373_bool = var_365_float < var_372_float; // 0x3c8 LT
	if(var_373_bool == 0) goto Label_982; // 0x3c9 JumpB
	irand(var_366_int, var_365_float); // 0x3ca Func
	var_374_int = 1; // 0x3cc PushI
	var_366_int = var_366_int + var_374_int; // 0x3cd Add2
	var_375_string = "attack"; // 0x3ce PushS
	var_376_int = var_375_string + var_366_int; // 0x3cf Add
	Speak(var_376_int); // 0x3d0 Func
	var_377_int = 0; // 0x3d2 PushV
	func_999(var_377_int); // 0x3d3 NEW_2
	var_5_bool = var_377_int; // 0x3d4 TMov
	
Label_982:
	return 4; // 0x3d6 Return
}


func_1591(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x637 PushV
	var_47_bool = var_32_object == 0; // 0x638 NullEq
	if(var_47_bool == 0) goto Label_1595; // 0x639 JumpB
	return 14; // 0x63a Return
	
Label_1595:
	IsDead(var_40_bool); // 0x63b Func
	var_48_bool = var_40_bool; // 0x63d Push
	if(var_48_bool == 0) goto Label_1600; // 0x63e JumpB
	return 14; // 0x63f Return
	
Label_1600:
	GetSecondaryAnimationType(var_41_int); // 0x640 Func
	var_49_int = 0; // 0x642 PushI
	var_50_bool = var_41_int < var_49_int; // 0x643 LT
	if(var_50_bool == 0) goto Label_1606; // 0x644 JumpB
	return 14; // 0x645 Return
	
Label_1606:
	GetPosition(var_42_cvector); // 0x646 ObjFunc
	GetPosition(var_43_cvector); // 0x648 Func
	GetDirection(var_44_cvector); // 0x64a Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x64c Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x64d PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x64e PushE
	var_53_float = var_51_float * var_52_float; // 0x64f Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x650 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x651 PushE
	var_56_float = var_54_float * var_55_float; // 0x652 Mult
	var_57_int = var_53_float + var_56_float; // 0x653 Add
	var_58_int = 0; // 0x654 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x655 GE
	if(var_59_bool == 0) goto Label_1625; // 0x656 JumpB
	var_46_string = "fhit"; // 0x657 MovS
	goto Label_1626; // 0x658 Jump
	
Label_1626:
	var_60_string = "hit_react"; // 0x65a PushS
	var_61_string = "1"; // 0x65b PushS
	var_62_int = var_46_string + var_61_string; // 0x65c Add
	var_63_string = "2"; // 0x65d PushS
	var_64_int = var_46_string + var_63_string; // 0x65e Add
	var_65_int = -10; // 0x65f PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x660 Func
	return 14; // 0x662 Return
	
Label_1625:
	var_46_string = "bhit"; // 0x659 MovS
}


func_570(var_1_int, var_2_bool, var_4_object)
{
	var_48_bool = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); // 0x23a PushV
	var_1_int = 0; // 0x23b TMovI
	
Label_572:
	var_54_string = "all"; // 0x23c PushS
	var_55_string = "attack_begin"; // 0x23d PushS
	var_56_int = 1; // 0x23e PushI
	var_57_int = var_1_int + var_56_int; // 0x23f Add
	var_58_int = var_55_string + var_57_int; // 0x240 Add
	HasAnimation(var_51_bool, var_54_string, var_58_int); // 0x241 Func
	var_59_bool = var_51_bool == 0; // 0x243 Not
	if(var_59_bool == 0) goto Label_582; // 0x244 JumpB
	goto Label_585; // 0x245 Jump
	
Label_585:
	var_2_bool = 0; // 0x249 TMovI
	
Label_586:
	var_60_string = "attack"; // 0x24a PushS
	var_61_int = 1; // 0x24b PushI
	var_62_int = var_2_bool + var_61_int; // 0x24c Add
	var_63_int = var_60_string + var_62_int; // 0x24d Add
	IsExisting3DSound(var_52_bool, var_63_int); // 0x24e Func
	var_64_bool = var_52_bool == 0; // 0x250 Not
	if(var_64_bool == 0) goto Label_595; // 0x251 JumpB
	goto Label_598; // 0x252 Jump
	
Label_598:
	var_65_string = "all"; // 0x256 PushS
	var_66_string = "bjump"; // 0x257 PushS
	GetAnimationOffset(var_53_cvector, var_65_string, var_66_string); // 0x258 Func
	var_67_float = GetByIndex(var_53_cvector, 2); // 0x25a PushE
	var_4_object = -var_67_float; // 0x25b Neg2
	return 6; // 0x25c Return
	
Label_595:
	var_68_int = 1; // 0x253 PushI
	var_2_bool = var_2_bool + var_68_int; // 0x254 Add2
	goto Label_586; // 0x255 Jump
	
Label_582:
	var_69_int = 1; // 0x246 PushI
	var_1_int = var_1_int + var_69_int; // 0x247 Add2
	goto Label_572; // 0x248 Jump
}


func_59(var_0_int, var_1_int, var_2_bool, var_3_bool, var_41_object, var_43_float, var_44_float)
{
	var_45_bool = 0; // 0x3c PushV
	func_1728(var_45_bool); // 0x3d NEW_2
	var_48_bool = var_45_bool == 0; // 0x3f Not
	if(var_48_bool == 0) goto Label_66; // 0x40 JumpB
	return 0; // 0x41 Return
	
Label_66:
	var_49_string = "player"; // 0x42 PushS
	FindActor(var_41_object, var_49_string); // 0x43 Func
	var_2_bool = 0; // 0x45 TMovB
	var_3_bool = 0; // 0x46 TMovB
	var_0_int = var_43_float; // 0x47 TMov
	var_1_int = var_44_float; // 0x48 TMov
	var_50_int = 10; // 0x49 PushI
	var_51_float = 1.0; // 0x4a PushF
	SetTimer(var_50_int, var_51_float); // 0x4b Func
	func_138(); // 0x4e NEW_2
	var_103_bool = var_3_bool == 0; // 0x50 Not
	if(var_103_bool == 0) goto Label_85; // 0x51 JumpB
	var_104_int = 10; // 0x52 PushI
	KillTimer(var_104_int); // 0x53 Func
	
Label_85:
	return 0; // 0x55 Return
}


func_1210(var_0_int, var_1_int, var_23_int)
{
	var_24_int = 0; // 0x4bb PushI
	var_25_bool = var_23_int != var_24_int; // 0x4bc Neq
	if(var_25_bool == 0) goto Label_1215; // 0x4bd JumpB
	return 0; // 0x4be Return
	
Label_1215:
	var_26_bool = 0; var_27_object = Obj(); // 0x4bf PushV
	var_27_object = var_1_int; // 0x4c0 MovT
	func_1248(var_26_bool, var_27_object); // 0x4c1 NEW_2
	var_62_bool = var_26_bool == 0; // 0x4c3 Not
	if(var_62_bool == 0) goto Label_1222; // 0x4c4 JumpB
	var_0_int = 1; // 0x4c5 TMovB
	
Label_1222:
	var_63_int = 0; // 0x4c6 PushI
	KillTimer(var_63_int); // 0x4c7 Func
	Stop(); // 0x4c9 Func
	return 0; // 0x4cb Return
}


func_1728(var_45_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x6c0 PushV
	IsLoaded(var_47_bool); // 0x6c1 Func
	var_45_bool = var_47_bool; // 0x6c3 Mov
	return 2; // 0x6c4 Return
}


func_1856(var_74_string, var_75_int)
{
	var_76_string = ""; var_77_string = ""; // 0x740 PushV
	var_77_string = "idle"; // 0x741 MovS
	var_78_int = var_75_int; // 0x742 Push
	if(var_78_int == 0) goto Label_1861; // 0x743 JumpB
	var_77_string = var_77_string + var_75_int; // 0x744 Add2
	
Label_1861:
	var_74_string = var_77_string; // 0x745 Mov
	return 2; // 0x746 Return
}


func_323(var_16_object)
{
	
Label_324:
	var_23_object = Obj(); var_24_bool = 0; var_25_float = 0; // 0x144 PushV
	var_23_object = var_16_object; // 0x145 Mov
	var_24_bool = 1; // 0x146 MovB
	var_25_float = 180.0; // 0x147 MovF
	func_341(var_19_int, var_20_bool, var_21_float, var_22_int, var_16_object, var_23_object, var_24_bool, var_25_float); // 0x148 NEW_2
	var_518_int = 1; // 0x14a PushI
	Sleep(var_518_int); // 0x14b Func
	goto Label_324; // 0x14d Jump
}


func_1733(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); // 0x6c5 PushV
	GetEyesHeight(var_22_float); // 0x6c6 ObjFunc
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x6c8 MovV
	var_24_float = GetByIndex(var_23_cvector, 1); // 0x6c9 PushE
	var_24_float = var_22_float; // 0x6ca Mov
	SetByIndex(var_23_cvector, 1) = var_24_float; // 0x6cb PopE
	var_25_string = "head"; // 0x6cc PushS
	LookAsync(var_19_object, var_25_string, var_23_cvector); // 0x6cd Func
	return 4; // 0x6cf Return
}


func_1863(var_68_int)
{
	var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0; // 0x747 PushV
	var_71_int = 0; // 0x748 MovI
	
Label_1865:
	var_73_string = "all"; // 0x749 PushS
	var_74_string = ""; var_75_int = 0; // 0x74a PushV
	var_75_int = var_71_int; // 0x74b Mov
	func_1856(var_74_string, var_75_int); // 0x74c NEW_2
	HasAnimation(var_72_bool, var_73_string, var_74_string); // 0x74e Func
	var_79_bool = var_72_bool == 0; // 0x750 Not
	if(var_79_bool == 0) goto Label_1875; // 0x751 JumpB
	goto Label_1878; // 0x752 Jump
	
Label_1878:
	var_68_int = var_71_int; // 0x756 Mov
	return 4; // 0x757 Return
	
Label_1875:
	var_80_int = 1; // 0x753 PushI
	var_71_int = var_71_int + var_80_int; // 0x754 Add2
	goto Label_1865; // 0x755 Jump
}


func_335(var_392_float)
{
	var_392_float = 0.2; // 0x150 MovF
	return 0; // 0x151 Return
}


func_1744(var_63_string)
{
	var_64_bool = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x6d0 PushV
	IsExisting3DSound(var_72_bool, var_63_string); // 0x6d1 Func
	var_80_bool = var_72_bool == 0; // 0x6d3 Not
	if(var_80_bool == 0) goto Label_1769; // 0x6d4 JumpB
	var_73_int = 0; // 0x6d5 MovI
	
Label_1750:
	var_81_int = 1; // 0x6d6 PushI
	var_82_int = var_73_int + var_81_int; // 0x6d7 Add
	var_83_int = var_63_string + var_82_int; // 0x6d8 Add
	IsExisting3DSound(var_74_bool, var_83_int); // 0x6d9 Func
	var_84_bool = var_74_bool == 0; // 0x6db Not
	if(var_84_bool == 0) goto Label_1758; // 0x6dc JumpB
	goto Label_1761; // 0x6dd Jump
	
Label_1761:
	var_85_bool = var_73_int == 0; // 0x6e1 Not
	if(var_85_bool == 0) goto Label_1764; // 0x6e2 JumpB
	return 16; // 0x6e3 Return
	
Label_1764:
	irand(var_75_int, var_73_int); // 0x6e4 Func
	var_86_int = 1; // 0x6e6 PushI
	var_87_int = var_75_int + var_86_int; // 0x6e7 Add
	var_63_string = var_63_string + var_87_int; // 0x6e8 Add2
	
Label_1769:
	Is3DSoundLoaded(var_76_bool, var_63_string); // 0x6e9 Func
	var_88_bool = var_76_bool; // 0x6eb Push
	if(var_88_bool == 0) goto Label_1784; // 0x6ec JumpB
	GetEyesHeight(var_77_float); // 0x6ed Func
	GetDirection(var_78_cvector); // 0x6ef Func
	var_89_int = 50; // 0x6f1 PushI
	var_79_cvector = var_78_cvector * var_89_int; // 0x6f2 Mult2
	var_90_float = GetByIndex(var_79_cvector, 1); // 0x6f3 PushE
	var_90_float = var_90_float + var_77_float; // 0x6f4 Add2
	SetByIndex(var_79_cvector, 1) = var_90_float; // 0x6f5 PopE
	PlayGlobalSound(var_63_string, var_79_cvector); // 0x6f6 Func
	
Label_1784:
	return 16; // 0x6f8 Return
	
Label_1758:
	var_91_int = 1; // 0x6de PushI
	var_73_int = var_73_int + var_91_int; // 0x6df Add2
	goto Label_1750; // 0x6e0 Jump
}


func_1232(var_0_int)
{
	var_0_int = 1; // 0x4d0 TMovB
	var_19_int = 0; // 0x4d1 PushI
	KillTimer(var_19_int); // 0x4d2 Func
	Stop(); // 0x4d4 Func
	return 0; // 0x4d6 Return
}


func_338(var_399_int)
{
	var_399_int = 0; // 0x153 MovI
	return 0; // 0x154 Return
}


func_851(var_0_int, var_298_bool)
{
	var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; var_308_float = 0; // 0x353 PushV
	var_309_bool = 0; var_310_object = Obj(); // 0x354 PushV
	var_310_object = var_0_int; // 0x355 MovT
	func_1567(var_309_bool, var_310_object); // 0x356 NEW_2
	var_311_bool = var_309_bool == 0; // 0x358 Not
	if(var_311_bool == 0) goto Label_860; // 0x359 JumpB
	var_298_bool = 0; // 0x35a MovB
	return 10; // 0x35b Return
	
Label_860:
	var_312_bool = 0; // 0x35c PushV
	func_940(var_308_float, var_312_bool); // 0x35d NEW_2
	if(var_312_bool == 0) goto Label_877; // 0x35f JumpB
	GetPFPosition(var_304_cvector); // 0x360 TObjFunc
	GetPFPosition(var_305_cvector); // 0x362 Func
	var_306_cvector = var_304_cvector - var_305_cvector; // 0x364 Sub2
	var_307_float = var_306_cvector | var_306_cvector; // 0x365 Or2
	GetAttackDistance(var_308_float); // 0x366 TObjFunc
	var_313_int = 50; // 0x368 PushI
	var_308_float = var_308_float + var_313_int; // 0x369 Add2
	var_314_float = var_308_float * var_308_float; // 0x36a Mult
	var_298_bool = var_307_float <= var_314_float; // 0x36b LE2
	return 10; // 0x36c Return
	
Label_877:
	var_298_bool = 0; // 0x36d MovB
	return 10; // 0x36e Return
}


func_1108(var_0_int, var_1_int, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_object = Obj(); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_float = 0; var_168_object = Obj(); var_169_bool = 0; var_170_bool = 0; var_171_object = Obj(); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); // 0x454 PushV
	var_0_int = 0; // 0x455 TMovB
	var_1_int = var_156_object; // 0x456 TMov
	var_170_bool = var_160_bool; // 0x457 Mov
	
Label_1112:
	var_177_bool = 0; var_178_object = Obj(); // 0x458 PushV
	var_178_object = var_156_object; // 0x459 Mov
	func_1248(var_177_bool, var_178_object); // 0x45a NEW_2
	var_181_bool = var_177_bool == 0; // 0x45c Not
	if(var_181_bool == 0) goto Label_1120; // 0x45d JumpB
	var_155_bool = 0; // 0x45e MovB
	return 16; // 0x45f Return
	
Label_1120:
	GetPosition(var_172_cvector); // 0x460 ObjFunc
	GetPosition(var_173_cvector); // 0x462 Func
	var_174_cvector = var_172_cvector - var_173_cvector; // 0x464 Sub2
	var_175_float = var_174_cvector | var_174_cvector; // 0x465 Or2
	var_182_bool = 0; // 0x466 PushV
	var_182_bool = 0; // 0x467 MovB
	var_183_int = 0; // 0x468 PushI
	var_184_bool = var_158_float > var_183_int; // 0x469 GT
	if(var_184_bool == 0) goto Label_1135; // 0x46a JumpB
	var_185_float = var_158_float * var_158_float; // 0x46b Mult
	var_186_bool = var_175_float > var_185_float; // 0x46c GT
	if(var_186_bool == 0) goto Label_1135; // 0x46d JumpB
	var_182_bool = 1; // 0x46e MovB
	
Label_1135:
	if(var_182_bool == 0) goto Label_1140; // 0x46f JumpB
	Stop(); // 0x470 Func
	var_155_bool = 0; // 0x472 MovB
	return 16; // 0x473 Return
	
Label_1140:
	var_187_float = var_157_float * var_157_float; // 0x474 Mult
	var_188_bool = var_175_float > var_187_float; // 0x475 GT
	if(var_188_bool == 0) goto Label_1202; // 0x476 JumpB
	GetPFPosition(var_172_cvector); // 0x477 ObjFunc
	FindPathTo(var_176_object, var_172_cvector); // 0x479 Func
	var_189_bool = var_176_object != 0; // 0x47b NullNeq
	if(var_189_bool == 0) goto Label_1151; // 0x47c JumpB
	var_171_object = var_176_object; // 0x47d Mov
	var_176_object = 0; // 0x47e SetNull
	
Label_1151:
	var_190_bool = var_171_object != 0; // 0x47f NullNeq
	if(var_190_bool == 0) goto Label_1184; // 0x480 JumpB
	var_191_bool = var_170_bool; // 0x481 Push
	if(var_191_bool == 0) goto Label_1161; // 0x482 JumpB
	var_170_bool = 0; // 0x483 MovB
	RotatePath(var_171_object, var_169_bool); // 0x484 Func
	var_192_bool = var_169_bool == 0; // 0x486 Not
	if(var_192_bool == 0) goto Label_1161; // 0x487 JumpB
	goto Label_1208; // 0x488 Jump
	
Label_1208:
	var_155_bool = !var_0_int; // 0x4b8 Not2
	return 16; // 0x4b9 Return
	
Label_1161:
	var_193_int = 0; // 0x489 PushI
	var_194_float = 0.3; // 0x48a PushF
	SetTimer(var_193_int, var_194_float); // 0x48b Func
	var_195_string = ""; // 0x48d PushV
	func_1255(var_195_string); // 0x48e NEW_2
	var_196_string = ""; // 0x490 PushV
	func_1257(var_196_string); // 0x491 NEW_2
	FollowPath(var_171_object, var_159_bool, var_169_bool, var_195_string, var_196_string); // 0x493 Func
	var_197_bool = var_169_bool == 0; // 0x495 Not
	if(var_197_bool == 0) goto Label_1182; // 0x496 JumpB
	var_198_int = var_0_int; // 0x497 PushT
	if(var_198_int == 0) goto Label_1180; // 0x498 JumpB
	var_171_object = 0; // 0x499 SetNull
	goto Label_1208; // 0x49a Jump
	
Label_1180:
	goto Label_1207; // 0x49c Jump
	
Label_1207:
	goto Label_1112; // 0x4b7 Jump
	
Label_1182:
	var_171_object = 0; // 0x49e SetNull
	goto Label_1200; // 0x49f Jump
	
Label_1200:
	var_176_object = 0; // 0x4b0 SetNull
	goto Label_1206; // 0x4b1 Jump
	
Label_1206:
	var_171_object = 0; // 0x4b6 SetNull
	
Label_1184:
	var_199_int = 0; // 0x4a0 PushI
	KillTimer(var_199_int); // 0x4a1 Func
	var_200_float = 0.5; // 0x4a3 PushF
	Sleep(var_200_float, var_169_bool); // 0x4a4 Func
	var_201_bool = var_169_bool == 0; // 0x4a6 Not
	if(var_201_bool == 0) goto Label_1196; // 0x4a7 JumpB
	var_202_int = var_0_int; // 0x4a8 PushT
	if(var_202_int == 0) goto Label_1196; // 0x4a9 JumpB
	var_171_object = 0; // 0x4aa SetNull
	goto Label_1208; // 0x4ab Jump
	
Label_1196:
	var_203_int = 0; // 0x4ac PushI
	var_204_float = 0.3; // 0x4ad PushF
	SetTimer(var_203_int, var_204_float); // 0x4ae Func
	
Label_1202:
	var_205_int = 0; // 0x4b2 PushI
	KillTimer(var_205_int); // 0x4b3 Func
	goto Label_1208; // 0x4b5 Jump
}


func_341(var_0_int, var_3_bool, var_5_bool, var_23_object, var_24_bool, var_25_float, var_132_bool, var_224_bool)
{
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0; // 0x155 PushV
	func_570(var_45_cvector, var_46_bool, var_47_float); // 0x157 NEW_2
	var_5_bool = 0; // 0x159 TMovI
	var_70_string = "@GetAttackDistance"; // 0x15a PushS
	var_71_int = 1; // 0x15b PushI
	var_72_bool = IsFuncExist(var_23_object, var_70_string, var_71_int); // 0x15c FuncExist
	if(var_72_bool == 0) goto Label_355; // 0x15d JumpB
	GetAttackDistance(var_37_float); // 0x15e ObjFunc
	var_73_int = 50; // 0x160 PushI
	var_37_float = var_37_float + var_73_int; // 0x161 Add2
	goto Label_356; // 0x162 Jump
	
Label_356:
	var_74_int = 150; // 0x164 PushI
	var_75_bool = var_37_float >= var_74_int; // 0x165 GE
	if(var_75_bool == 0) goto Label_360; // 0x166 JumpB
	var_37_float = 150; // 0x167 MovI
	
Label_360:
	var_3_bool = 0; // 0x168 TMovB
	var_0_int = var_23_object; // 0x169 TMov
	IsPlayerActor(var_0_int, var_40_bool); // 0x16a Func
	var_76_bool = var_40_bool; // 0x16c Push
	if(var_76_bool == 0) goto Label_374; // 0x16d JumpB
	var_77_string = "attack"; // 0x16e PushS
	PlayGlobalMusic(var_77_string); // 0x16f Func
	var_78_object = Obj(); // 0x171 PushV
	func_1785(var_78_object); // 0x172 NEW_2
	SendPlayerEnemy(var_23_object, var_78_object); // 0x174 Func
	
Label_374:
	var_81_bool = var_24_bool; // 0x176 Push
	if(var_81_bool == 0) goto Label_378; // 0x177 JumpB
	var_41_bool = 0; // 0x178 MovB
	goto Label_379; // 0x179 Jump
	
Label_379:
	var_82_float = 400.0; // 0x17b PushF
	var_42_float = var_82_float + var_37_float; // 0x17c Add2
	
Label_381:
	var_83_bool = 0; // 0x17d PushV
	var_83_bool = 0; // 0x17e MovB
	var_84_bool = 0; var_85_object = Obj(); // 0x17f PushV
	var_85_object = var_0_int; // 0x180 MovT
	func_1567(var_84_bool, var_85_object); // 0x181 NEW_2
	if(var_84_bool == 0) goto Label_391; // 0x183 JumpB
	var_118_bool = var_3_bool == 0; // 0x184 Not
	if(var_118_bool == 0) goto Label_391; // 0x185 JumpB
	var_83_bool = 1; // 0x186 MovB
	
Label_391:
	if(var_83_bool == 0) goto Label_553; // 0x187 JumpB
	func_983(var_47_float); // 0x189 NEW_2
	GetPFPosition(var_38_cvector); // 0x18b TObjFunc
	GetPFPosition(var_39_cvector); // 0x18d Func
	var_43_cvector = var_38_cvector - var_39_cvector; // 0x18f Sub2
	var_44_float = var_43_cvector | var_43_cvector; // 0x190 Or2
	var_124_float = var_42_float * var_42_float; // 0x191 Mult
	var_125_bool = var_44_float >= var_124_float; // 0x192 GE
	if(var_125_bool == 0) goto Label_419; // 0x193 JumpB
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_bool = 0; // 0x194 PushV
	var_127_object = var_0_int; // 0x195 MovT
	var_128_float = var_37_float; // 0x196 Mov
	var_129_float = 10000.0; // 0x197 MovF
	var_130_bool = 1; // 0x198 MovB
	var_131_bool = 0; // 0x199 MovB
	TaskCall(3); // 0x19a TaskCall
	func_1003(var_134_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool); // 0x19b NEW_2
	TaskReturn(); // 0x19c TaskReturn
	var_209_bool = var_132_bool == 0; // 0x19e Not
	if(var_209_bool == 0) goto Label_417; // 0x19f JumpB
	goto Label_553; // 0x1a0 Jump
	
Label_553:
	WaitForAnimEnd(); // 0x229 Func
	var_210_bool = var_3_bool; // 0x22b PushT
	if(var_210_bool == 0) goto Label_558; // 0x22c JumpB
	return 22; // 0x22d Return
	
Label_558:
	var_211_string = "all"; // 0x22e PushS
	var_212_string = "attack_off"; // 0x22f PushS
	PlayAnimation(var_211_string, var_212_string); // 0x230 Func
	WaitForAnimEnd(); // 0x232 Func
	var_213_bool = var_40_bool; // 0x234 Push
	if(var_213_bool == 0) goto Label_569; // 0x235 JumpB
	var_214_float = 2.0; // 0x236 PushF
	Sleep(var_214_float); // 0x237 Func
	
Label_569:
	return 22; // 0x239 Return
	
Label_417:
	var_41_bool = 0; // 0x1a1 MovB
	goto Label_552; // 0x1a2 Jump
	
Label_552:
	goto Label_381; // 0x228 Jump
	
Label_419:
	var_215_float = var_25_float * var_25_float; // 0x1a3 Mult
	var_216_bool = var_44_float >= var_215_float; // 0x1a4 GE
	if(var_216_bool == 0) goto Label_544; // 0x1a5 JumpB
	GetPFPosition(var_45_cvector); // 0x1a6 TObjFunc
	CanReachByPF(var_46_bool, var_45_cvector); // 0x1a8 Func
	var_217_bool = var_46_bool == 0; // 0x1aa Not
	if(var_217_bool == 0) goto Label_443; // 0x1ab JumpB
	var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_bool = 0; // 0x1ac PushV
	var_219_object = var_0_int; // 0x1ad MovT
	var_220_float = var_37_float; // 0x1ae Mov
	var_221_float = 10000.0; // 0x1af MovF
	var_222_bool = 1; // 0x1b0 MovB
	var_223_bool = 0; // 0x1b1 MovB
	TaskCall(3); // 0x1b2 TaskCall
	func_1003(var_226_bool, var_218_bool, var_219_object, var_220_float, var_221_float, var_222_bool, var_223_bool); // 0x1b3 NEW_2
	TaskReturn(); // 0x1b4 TaskReturn
	var_227_bool = var_224_bool == 0; // 0x1b6 Not
	if(var_227_bool == 0) goto Label_441; // 0x1b7 JumpB
	goto Label_553; // 0x1b8 Jump
	
Label_441:
	var_41_bool = 0; // 0x1b9 MovB
	goto Label_381; // 0x1ba Jump
	
Label_443:
	var_228_bool = var_41_bool == 0; // 0x1bb Not
	if(var_228_bool == 0) goto Label_468; // 0x1bc JumpB
	var_229_object = Obj(); // 0x1bd PushV
	var_229_object = var_0_int; // 0x1be MovT
	func_1717(); // 0x1bf NEW_2
	var_238_string = "all"; // 0x1c1 PushS
	var_239_string = "attack_on"; // 0x1c2 PushS
	PlayAnimation(var_238_string, var_239_string); // 0x1c3 Func
	WaitForAnimEnd(); // 0x1c5 Func
	func_983(var_47_float); // 0x1c8 NEW_2
	StopAsync(); // 0x1ca Func
	var_41_bool = 1; // 0x1cc MovB
	var_240_bool = 0; var_241_object = Obj(); // 0x1cd PushV
	var_241_object = var_0_int; // 0x1ce MovT
	func_1567(var_240_bool, var_241_object); // 0x1cf NEW_2
	var_242_bool = var_240_bool == 0; // 0x1d1 Not
	if(var_242_bool == 0) goto Label_468; // 0x1d2 JumpB
	goto Label_553; // 0x1d3 Jump
	
Label_468:
	rand(var_47_float); // 0x1d4 Func
	var_243_bool = 0; // 0x1d6 PushV
	var_243_bool = 1; // 0x1d7 MovB
	var_244_float = 0.25; // 0x1d8 PushF
	var_245_bool = var_47_float < var_244_float; // 0x1d9 LT
	if(var_245_bool == 0) goto Label_480; // 0x1da JumpB
	var_246_bool = 0; // 0x1db PushV
	func_940(var_243_bool, var_246_bool); // 0x1dc NEW_2
	if(var_246_bool == 0) goto Label_480; // 0x1de JumpB
	var_243_bool = 0; // 0x1df MovB
	
Label_480:
	if(var_243_bool == 0) goto Label_497; // 0x1e0 JumpB
	Face(var_0_int); // 0x1e1 Func
	func_990(); // 0x1e4 NEW_2
	var_281_string = "all"; // 0x1e6 PushS
	var_282_string = "attack_stay"; // 0x1e7 PushS
	PlayAnimation(var_281_string, var_282_string); // 0x1e8 Func
	var_283_bool = 0; var_284_float = 0; // 0x1ea PushV
	var_284_float = var_25_float; // 0x1eb Mov
	func_808(var_47_float, var_283_bool, var_284_float); // 0x1ec NEW_2
	StopAsync(); // 0x1ee Func
	goto Label_543; // 0x1f0 Jump
	
Label_543:
	goto Label_552; // 0x21f Jump
	
Label_497:
	Face(var_0_int); // 0x1f1 Func
	var_502_string = "all"; // 0x1f3 PushS
	var_503_string = "fjump"; // 0x1f4 PushS
	PlayAnimation(var_502_string, var_503_string); // 0x1f5 Func
	WaitForAnimEnd(); // 0x1f7 Func
	func_983(var_47_float); // 0x1fa NEW_2
	var_504_cvector = CVector(0.0, 0.0, 0.0); // 0x1fc PushVec
	SetSpeed(var_504_cvector); // 0x1fd Func
	Stop(); // 0x1ff Func
	StopAsync(); // 0x201 Func
	var_505_bool = 0; // 0x203 PushV
	func_940(var_47_float, var_505_bool); // 0x204 NEW_2
	var_506_bool = var_505_bool == 0; // 0x206 Not
	if(var_506_bool == 0) goto Label_543; // 0x207 JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x208 PushV
	var_508_object = var_0_int; // 0x209 MovT
	func_1567(var_507_bool, var_508_object); // 0x20a NEW_2
	var_509_bool = var_507_bool == 0; // 0x20c Not
	if(var_509_bool == 0) goto Label_527; // 0x20d JumpB
	goto Label_553; // 0x20e Jump
	
Label_527:
	GetPFPosition(var_38_cvector); // 0x20f TObjFunc
	GetPFPosition(var_39_cvector); // 0x211 Func
	var_43_cvector = var_38_cvector - var_39_cvector; // 0x213 Sub2
	var_44_float = var_43_cvector | var_43_cvector; // 0x214 Or2
	var_510_float = var_25_float * var_25_float; // 0x215 Mult
	var_511_bool = var_44_float < var_510_float; // 0x216 LT
	if(var_511_bool == 0) goto Label_543; // 0x217 JumpB
	var_512_bool = 0; var_513_float = 0; // 0x218 PushV
	var_513_float = var_25_float; // 0x219 Mov
	func_644(var_47_float, var_512_bool, var_513_float); // 0x21a NEW_2
	var_514_bool = var_512_bool == 0; // 0x21c Not
	if(var_514_bool == 0) goto Label_543; // 0x21d JumpB
	goto Label_553; // 0x21e Jump
	
Label_544:
	var_515_bool = 0; var_516_float = 0; // 0x220 PushV
	var_516_float = var_25_float; // 0x221 Mov
	func_644(var_47_float, var_515_bool, var_516_float); // 0x222 NEW_2
	var_517_bool = var_515_bool == 0; // 0x224 Not
	if(var_517_bool == 0) goto Label_551; // 0x225 JumpB
	goto Label_553; // 0x226 Jump
	
Label_551:
	var_41_bool = 1; // 0x227 MovB
	
Label_378:
	var_41_bool = 1; // 0x17a MovB
	
Label_355:
	var_37_float = var_25_float; // 0x163 Mov
}


func_86(var_0_int, var_1_int, var_4_object, var_18_bool)
{
	var_19_float = 0; var_20_float = 0; // 0x56 PushV
	var_21_bool = var_4_object == 0; // 0x57 NullEq
	if(var_21_bool == 0) goto Label_91; // 0x58 JumpB
	var_18_bool = 0; // 0x59 MovB
	return 2; // 0x5a Return
	
Label_91:
	var_22_float = 0; var_23_object = Obj(); // 0x5b PushV
	var_23_object = var_4_object; // 0x5c MovT
	func_1428(var_23_object); // 0x5d NEW_2
	var_20_float = sqrt(var_22_float); // 0x5f Sqrt2
	var_30_bool = var_2_bool; // 0x60 PushT
	if(var_30_bool == 0) goto Label_99; // 0x61 JumpB
	var_20_float = var_20_float - var_1_int; // 0x62 Sub2
	
Label_99:
	var_18_bool = var_20_float < var_0_int; // 0x63 LT2
	return 2; // 0x64 Return
}


func_983(var_0_int)
{
	var_119_object = Obj(); // 0x3d7 PushV
	var_119_object = var_0_int; // 0x3d8 MovT
	func_1836(var_119_object); // 0x3d9 NEW_2
	return 0; // 0x3db Return
}


func_1880(var_19_int)
{
	var_20_int = 0; var_21_int = 0; // 0x758 PushV
	var_22_string = "branch"; // 0x759 PushS
	GetVariable(var_22_string, var_21_int); // 0x75a Func
	var_19_int = var_21_int; // 0x75c Mov
	return 2; // 0x75d Return
}


func_217(var_93_bool)
{
	var_93_bool = 1; // 0xd9 MovB
	return 0; // 0xda Return
}


func_219()
{
	StopAnimation(); // 0xdb Func
	StopGroup0(); // 0xdd Func
	return 0; // 0xdf Return
}


func_988(var_460_int)
{
	var_460_int = 0; // 0x3dc MovI
	return 0; // 0x3dd Return
}


func_605(var_0_int, var_381_float, var_382_int)
{
	var_383_object = Obj(); var_384_float = 0; var_385_float = 0; var_386_object = Obj(); var_387_float = 0; var_388_float = 0; // 0x25d PushV
	var_389_float = 0.9; // 0x25e PushF
	var_390_float = var_381_float * var_389_float; // 0x25f Mult
	GetVictim(var_390_float, var_386_object); // 0x260 Func
	ReportAttack(var_0_int); // 0x262 Func
	var_391_bool = var_386_object == var_0_int; // 0x264 Eq
	if(var_391_bool == 0) goto Label_642; // 0x265 JumpB
	var_392_float = 0; var_393_object = Obj(); var_394_int = 0; // 0x266 PushV
	var_393_object = var_386_object; // 0x267 Mov
	var_394_int = var_382_int; // 0x268 Mov
	func_335(var_394_int); // 0x269 NEW_2
	var_387_float = var_392_float; // 0x26a Mov
	var_395_float = 0; var_396_object = Obj(); var_397_float = 0; var_398_int = 0; // 0x26c PushV
	var_396_object = var_386_object; // 0x26d Mov
	var_397_float = var_387_float; // 0x26e Mov
	var_399_int = 0; var_400_object = Obj(); var_401_int = 0; // 0x26f PushV
	var_400_object = var_386_object; // 0x270 Mov
	var_401_int = var_382_int; // 0x271 Mov
	func_338(var_401_int); // 0x272 NEW_2
	var_398_int = var_399_int; // 0x273 Mov
	func_1453(var_395_float, var_396_object, var_397_float, var_398_int); // 0x275 NEW_2
	var_388_float = var_395_float; // 0x276 Mov
	var_460_int = 0; // 0x278 PushV
	func_988(var_460_int); // 0x279 NEW_2
	ReportHit(var_0_int, var_460_int, var_388_float, var_387_float); // 0x27b Func
	var_461_object = Obj(); var_462_float = 0; // 0x27d PushV
	var_461_object = var_386_object; // 0x27e Mov
	var_462_float = var_388_float; // 0x27f Mov
	func_995(); // 0x280 NEW_2
	
Label_642:
	return 6; // 0x282 Return
}


func_990()
{
	var_252_string = ""; // 0x3de PushV
	var_252_string = "attack_stay"; // 0x3df MovS
	func_1744(var_252_string); // 0x3e0 NEW_2
	return 0; // 0x3e2 Return
}


func_1886(var_19_object)
{
	var_20_int = 0; // 0x75f PushV
	func_1880(var_20_int); // 0x760 NEW_2
	var_24_int = 1; // 0x762 PushI
	var_25_bool = var_20_int == var_24_int; // 0x763 Eq
	if(var_25_bool == 0) goto Label_1896; // 0x764 JumpB
	WorkWithCorpse(var_19_object); // 0x765 Func
	goto Label_1898; // 0x767 Jump
	
Label_1898:
	return 0; // 0x76a Return
	
Label_1896:
	Barter(var_19_object); // 0x768 Func
}


func_1248(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x4e1 PushV
	var_29_object = var_27_object; // 0x4e2 Mov
	func_1567(var_28_bool, var_29_object); // 0x4e3 NEW_2
	var_26_bool = var_28_bool; // 0x4e4 Mov
	return 0; // 0x4e6 Return
}


func_1375(var_62_string)
{
	RemoveRTEnvelope(); // 0x560 Func
	SetDeathState(); // 0x562 Func
	Stop(); // 0x564 Func
	StopAsync(); // 0x566 Func
	StopSecondaryAnimation(); // 0x568 Func
	var_63_string = ""; // 0x56a PushV
	var_63_string = var_62_string; // 0x56b Mov
	func_1744(var_63_string); // 0x56c NEW_2
	var_92_string = "all"; // 0x56e PushS
	PlayAnimation(var_92_string, var_62_string); // 0x56f Func
	WaitForAnimEnd(); // 0x571 Func
	var_93_string = "all"; // 0x573 PushS
	LockAnimationEnd(var_93_string, var_62_string); // 0x574 Func
	RemoveEnvelope(); // 0x576 Func
	return 0; // 0x578 Return
}


func_995()
{
	return 0; // 0x3e4 Return
}


func_1635(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x663 PushV
	var_40_bool = 0; // 0x664 PushV
	var_40_bool = 0; // 0x665 MovB
	var_41_bool = 0; // 0x666 PushV
	var_41_bool = 0; // 0x667 MovB
	var_42_object = var_19_object; // 0x668 Push
	if(var_42_object == 0) goto Label_1646; // 0x669 JumpB
	var_43_int = 4; // 0x66a PushI
	var_44_bool = var_20_int != var_43_int; // 0x66b Neq
	if(var_44_bool == 0) goto Label_1646; // 0x66c JumpB
	var_41_bool = 1; // 0x66d MovB
	
Label_1646:
	if(var_41_bool == 0) goto Label_1651; // 0x66e JumpB
	var_45_int = 5; // 0x66f PushI
	var_46_bool = var_20_int != var_45_int; // 0x670 Neq
	if(var_46_bool == 0) goto Label_1651; // 0x671 JumpB
	var_40_bool = 1; // 0x672 MovB
	
Label_1651:
	if(var_40_bool == 0) goto Label_1698; // 0x673 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x674 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x675 PushV
	var_50_object = var_19_object; // 0x676 Mov
	func_1421(var_50_object); // 0x677 NEW_2
	var_48_cvector = var_49_cvector; // 0x678 Mov
	func_1791(var_47_cvector, var_48_cvector); // 0x67a NEW_2
	var_31_cvector = var_47_cvector; // 0x67b Mov
	CreateVectorVector(var_32_object); // 0x67d Func
	var_33_int = 1; // 0x67f MovI
	
Label_1664:
	var_60_string = "hit"; // 0x680 PushS
	var_61_int = var_60_string + var_33_int; // 0x681 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x682 Func
	var_62_bool = var_34_bool == 0; // 0x684 Not
	if(var_62_bool == 0) goto Label_1671; // 0x685 JumpB
	goto Label_1680; // 0x686 Jump
	
Label_1680:
	size(var_37_int); // 0x690 ObjFunc
	var_63_int = var_37_int; // 0x692 Push
	if(var_63_int == 0) goto Label_1697; // 0x693 JumpB
	irand(var_38_int, var_37_int); // 0x694 Func
	get(var_39_cvector, var_38_int); // 0x696 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x698 PushV
	var_64_object = var_19_object; // 0x699 Mov
	var_65_int = var_20_int; // 0x69a Mov
	var_66_float = var_21_float; // 0x69b Mov
	var_67_cvector = var_39_cvector; // 0x69c Mov
	var_68_cvector = -var_31_cvector; // 0x69d Neg2
	func_1703(var_66_float, var_67_cvector, var_68_cvector); // 0x69e NEW_2
	return 18; // 0x6a0 Return
	
Label_1697:
	var_32_object = 0; // 0x6a1 SetNull
	
Label_1698:
	var_109_object = Obj(); // 0x6a2 PushV
	var_109_object = var_19_object; // 0x6a3 Mov
	func_1591(var_109_object); // 0x6a4 NEW_2
	return 18; // 0x6a6 Return
	
Label_1671:
	var_110_int = var_36_cvector | var_31_cvector; // 0x687 Or
	var_111_float = 0.70711; // 0x688 PushF
	var_112_bool = var_110_int >= var_111_float; // 0x689 GE
	if(var_112_bool == 0) goto Label_1677; // 0x68a JumpB
	add(var_35_cvector); // 0x68b ObjFunc
	
Label_1677:
	var_113_int = 1; // 0x68d PushI
	var_33_int = var_33_int + var_113_int; // 0x68e Add2
	goto Label_1664; // 0x68f Jump
}


func_997(var_485_bool)
{
	var_485_bool = 1; // 0x3e5 MovB
	return 0; // 0x3e6 Return
}


func_999(var_377_int)
{
	var_377_int = 1; // 0x3e7 MovI
	return 0; // 0x3e8 Return
}


func_1255(var_195_string)
{
	var_195_string = "walk"; // 0x4e7 MovS
	return 0; // 0x4e8 Return
}


func_1001(var_372_float)
{
	var_372_float = 0.5; // 0x3e9 MovF
	return 0; // 0x3ea Return
}


func_1257(var_196_string)
{
	var_196_string = "run"; // 0x4e9 MovS
	return 0; // 0x4ea Return
}


func_1003(var_2_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_bool = 0; var_138_bool = 0; // 0x3eb PushV
	var_139_object = Obj(); // 0x3ec PushV
	var_139_object = var_127_object; // 0x3ed Mov
	func_1836(var_139_object); // 0x3ee NEW_2
	var_140_int = 1; // 0x3f0 PushI
	var_141_int = 5; // 0x3f1 PushI
	SetTimer(var_140_int, var_141_int); // 0x3f2 Func
	CanSee(var_137_bool, var_127_object); // 0x3f4 Func
	var_142_bool = var_137_bool; // 0x3f6 Push
	if(var_142_bool == 0) goto Label_1022; // 0x3f7 JumpB
	var_2_bool = 1; // 0x3f8 TMovB
	var_143_object = Obj(); // 0x3f9 PushV
	var_143_object = var_127_object; // 0x3fa Mov
	func_1733(var_143_object); // 0x3fb NEW_2
	goto Label_1023; // 0x3fd Jump
	
Label_1023:
	var_150_bool = 0; var_151_object = Obj(); // 0x3ff PushV
	var_151_object = var_127_object; // 0x400 Mov
	func_1436(var_150_bool, var_151_object); // 0x401 NEW_2
	if(var_150_bool == 0) goto Label_1033; // 0x403 JumpB
	var_154_object = Obj(); // 0x404 PushV
	func_1785(var_154_object); // 0x405 NEW_2
	SendPlayerEnemy(var_127_object, var_154_object); // 0x407 Func
	
Label_1033:
	var_155_bool = 0; var_156_object = Obj(); var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_bool = 0; // 0x409 PushV
	var_156_object = var_127_object; // 0x40a Mov
	var_157_float = var_128_float; // 0x40b Mov
	var_158_float = var_129_float; // 0x40c Mov
	var_159_bool = var_130_bool; // 0x40d Mov
	var_160_bool = var_131_bool; // 0x40e Mov
	func_1108(var_137_bool, var_138_bool, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool); // 0x40f NEW_2
	var_138_bool = var_155_bool; // 0x410 Mov
	var_206_bool = var_2_bool; // 0x412 PushT
	if(var_206_bool == 0) goto Label_1047; // 0x413 JumpB
	var_207_string = "head"; // 0x414 PushS
	UnlookAsync(var_207_string); // 0x415 Func
	
Label_1047:
	var_208_int = 1; // 0x417 PushI
	KillTimer(var_208_int); // 0x418 Func
	var_126_bool = var_138_bool; // 0x41a Mov
	return 4; // 0x41b Return
	
Label_1022:
	var_2_bool = 0; // 0x3fe TMovB
}


func_1899(var_25_string)
{
	var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; // 0x76b PushV
	CreateInvItem(var_29_object); // 0x76c Func
	SetItemName(var_25_string); // 0x76e ObjFunc
	var_32_string = "Organ"; // 0x770 PushS
	var_33_int = 1; // 0x771 PushI
	SetProperty(var_32_string, var_33_int); // 0x772 ObjFunc
	GetItemID(var_30_int); // 0x774 ObjFunc
	var_34_int = 0; // 0x776 PushI
	var_35_int = 1; // 0x777 PushI
	AddItem(var_31_bool, var_29_object, var_34_int, var_35_int); // 0x778 Func
	return 6; // 0x77a Return
}


func_1259(var_39_object)
{
	EventDisable(0); // 0x4ec EventDisable
	var_40_object = Obj(); // 0x4ed PushV
	var_40_object = var_39_object; // 0x4ee Mov
	func_1284(var_40_object); // 0x4ef NEW_2
	var_120_int = 50; // 0x4f1 PushI
	var_121_int = 40; // 0x4f2 PushI
	SetRTEnvelope(var_120_int, var_121_int); // 0x4f3 Func
	EventEnable(0); // 0x4f5 EventEnable
	
Label_1270:
	Hold(); // 0x4f6 Func
	goto Label_1270; // 0x4f8 Jump
}


func_879(var_296_bool)
{
	var_297_bool = 0; // 0x36f PushV
	var_297_bool = 0; // 0x370 MovB
	var_298_bool = 0; // 0x371 PushV
	func_851(var_297_bool, var_298_bool); // 0x372 NEW_2
	if(var_298_bool == 0) goto Label_890; // 0x374 JumpB
	var_315_bool = 0; // 0x375 PushV
	func_895(var_296_bool, var_297_bool, var_315_bool); // 0x376 NEW_2
	if(var_315_bool == 0) goto Label_890; // 0x378 JumpB
	var_297_bool = 1; // 0x379 MovB
	
Label_890:
	if(var_297_bool == 0) goto Label_893; // 0x37a JumpB
	var_296_bool = 1; // 0x37b MovB
	return 0; // 0x37c Return
	
Label_893:
	var_296_bool = 0; // 0x37d MovB
	return 0; // 0x37e Return
}


func_1526(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x5f6 PushV
	IsDead(var_46_bool); // 0x5f7 ObjFunc
	var_43_bool = var_46_bool; // 0x5f9 Mov
	return 2; // 0x5fa Return
}


func_1785(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x6f9 PushV
	self(var_17_object); // 0x6fa Func
	var_15_object = var_17_object; // 0x6fc Mov
	return 2; // 0x6fd Return
}


func_1531(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x5fb PushV
	var_38_bool = var_33_object == 0; // 0x5fc NullEq
	if(var_38_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_32_bool = 0; // 0x5fe MovB
	return 4; // 0x5ff Return
	
Label_1536:
	var_39_bool = 0; // 0x600 PushV
	var_39_bool = 0; // 0x601 MovB
	var_40_string = "IsDead"; // 0x602 PushS
	var_41_int = 1; // 0x603 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0x604 FuncExist
	if(var_42_bool == 0) goto Label_1548; // 0x605 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x606 PushV
	var_44_object = var_33_object; // 0x607 Mov
	func_1526(var_44_object); // 0x608 NEW_2
	if(var_43_bool == 0) goto Label_1548; // 0x60a JumpB
	var_39_bool = 1; // 0x60b MovB
	
Label_1548:
	if(var_39_bool == 0) goto Label_1551; // 0x60c JumpB
	var_32_bool = 0; // 0x60d MovB
	return 4; // 0x60e Return
	
Label_1551:
	GetScene(var_36_object); // 0x60f Func
	var_47_bool = var_36_object == 0; // 0x611 NullEq
	if(var_47_bool == 0) goto Label_1557; // 0x612 JumpB
	var_32_bool = 0; // 0x613 MovB
	return 4; // 0x614 Return
	
Label_1557:
	GetScene(var_37_object); // 0x615 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0x617 Neq
	if(var_48_bool == 0) goto Label_1563; // 0x618 JumpB
	var_32_bool = 0; // 0x619 MovB
	return 4; // 0x61a Return
	
Label_1563:
	var_32_bool = 1; // 0x61b MovB
	return 4; // 0x61c Return
}


func_124(var_2_bool, var_3_bool)
{
	func_219(); // 0x7d NEW_2
	var_55_int = 10; // 0x7f PushI
	KillTimer(var_55_int); // 0x80 Func
	var_56_bool = var_2_bool; // 0x82 PushT
	if(var_56_bool == 0) goto Label_136; // 0x83 JumpB
	var_57_string = "head"; // 0x84 PushS
	UnlookAsync(var_57_string); // 0x85 Func
	var_2_bool = 0; // 0x87 TMovB
	
Label_136:
	var_3_bool = 1; // 0x88 TMovB
	return 0; // 0x89 Return
}


func_895(var_0_int, var_4_object, var_315_bool)
{
	var_316_object = Obj(); var_317_bool = 0; var_318_float = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_object = Obj(); var_322_bool = 0; var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); // 0x37f PushV
	GetScene(var_321_object); // 0x380 Func
	var_322_bool = 0; // 0x382 MovB
	
Label_899:
	var_326_cvector = CVector(0,0,0); var_327_object = Obj(); // 0x383 PushV
	var_327_object = var_0_int; // 0x384 MovT
	func_1421(var_327_object); // 0x385 NEW_2
	var_332_int = -var_326_cvector; // 0x387 Neg
	FindDirLength(var_323_float, var_332_int, var_323_float); // 0x388 Func
	var_333_bool = var_323_float < var_4_object; // 0x38a LT
	if(var_333_bool == 0) goto Label_909; // 0x38b JumpB
	goto Label_937; // 0x38c Jump
	
Label_937:
	var_315_bool = var_322_bool; // 0x3a9 Mov
	return 10; // 0x3aa Return
	
Label_909:
	Face(var_0_int); // 0x38d Func
	var_334_string = "all"; // 0x38f PushS
	var_335_string = "bjump"; // 0x390 PushS
	PlayAnimation(var_334_string, var_335_string); // 0x391 Func
	GetPFPosition(var_324_cvector); // 0x393 TObjFunc
	GetPFPosition(var_325_cvector); // 0x395 Func
	WaitForAnimEnd(); // 0x397 Func
	func_983(var_325_cvector); // 0x39a NEW_2
	StopAsync(); // 0x39c Func
	var_336_cvector = CVector(0.0, 0.0, 0.0); // 0x39e PushVec
	SetSpeed(var_336_cvector); // 0x39f Func
	var_322_bool = 1; // 0x3a1 MovB
	var_337_bool = 0; // 0x3a2 PushV
	func_851(var_325_cvector, var_337_bool); // 0x3a3 NEW_2
	var_338_bool = var_337_bool == 0; // 0x3a5 Not
	if(var_338_bool == 0) goto Label_936; // 0x3a6 JumpB
	goto Label_937; // 0x3a7 Jump
	
Label_936:
	goto Label_899; // 0x3a8 Jump
}


