task_0_event_0(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	return 0; // 0xc Return
}


task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xe PushV
	var_13_object = var_11_int; // 0xf Mov
	func_2469(var_12_bool, var_13_object); // 0x10 NEW_2
	if(var_12_bool == 0) goto Label_26; // 0x12 JumpB
	func_145(var_10_float, var_11_int); // 0x14 NEW_2
	var_76_object = Obj(); // 0x16 PushV
	var_76_object = var_11_int; // 0x17 Mov
	func_2476(var_76_object); // 0x18 NEW_2
	
Label_26:
	return 0; // 0x1a Return
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x1c PushV
	var_13_object = var_11_int; // 0x1d Mov
	func_2456(var_12_bool, var_13_object); // 0x1e NEW_2
	if(var_12_bool == 0) goto Label_40; // 0x20 JumpB
	func_145(var_10_float, var_11_int); // 0x22 NEW_2
	var_76_object = Obj(); // 0x24 PushV
	var_76_object = var_11_int; // 0x25 Mov
	func_2463(var_76_object); // 0x26 NEW_2
	
Label_40:
	return 0; // 0x28 Return
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0x2a PushV
	var_102_object = var_100_object; // 0x2b Mov
	func_1609(var_101_bool, var_102_object); // 0x2c NEW_2
	var_129_bool = var_101_bool == 0; // 0x2e Not
	if(var_129_bool == 0) goto Label_53; // 0x2f JumpB
	var_130_object = Obj(); // 0x30 PushV
	var_130_object = var_100_object; // 0x31 Mov
	func_2493(var_130_object); // 0x32 NEW_2
	return 0; // 0x34 Return
	
Label_53:
	func_145(var_13_int, var_100_object); // 0x36 NEW_2
	var_145_object = Obj(); // 0x38 PushV
	var_145_object = var_100_object; // 0x39 Mov
	func_2517(var_145_object); // 0x3a NEW_2
	return 0; // 0x3c Return
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x3e PushV
	var_15_object = var_11_bool; // 0x3f Mov
	var_16_object = var_12_float; // 0x40 Mov
	var_17_bool = var_13_int; // 0x41 Mov
	func_2596(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x42 NEW_2
	if(var_14_bool == 0) goto Label_73; // 0x44 JumpB
	var_100_object = Obj(); // 0x45 PushV
	var_100_object = var_11_bool; // 0x46 Mov
	func_41(); // 0x47 NEW_2
	
Label_73:
	return 0; // 0x49 Return
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	RequestClearPath(var_11_int); // 0x8b Func
	return 0; // 0x8d Return
}


task_0_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int)
{
	Stop(); // 0x8e Func
	return 0; // 0x90 Return
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	func_145(var_10_float, var_11_int); // 0x9a NEW_2
	var_12_object = Obj(); // 0x9c PushV
	var_12_object = var_11_int; // 0x9d Mov
	func_2590(); // 0x9e NEW_2
	return 0; // 0xa0 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	func_316(); // 0xab NEW_2
	return 0; // 0xad Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xaf PushV
	var_13_object = var_11_int; // 0xb0 Mov
	func_2469(var_12_bool, var_13_object); // 0xb1 NEW_2
	if(var_12_bool == 0) goto Label_187; // 0xb3 JumpB
	func_316(); // 0xb5 NEW_2
	var_76_object = Obj(); // 0xb7 PushV
	var_76_object = var_11_int; // 0xb8 Mov
	func_2476(var_76_object); // 0xb9 NEW_2
	
Label_187:
	return 0; // 0xbb Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xbd PushV
	var_13_object = var_11_int; // 0xbe Mov
	func_2456(var_12_bool, var_13_object); // 0xbf NEW_2
	if(var_12_bool == 0) goto Label_201; // 0xc1 JumpB
	func_316(); // 0xc3 NEW_2
	var_76_object = Obj(); // 0xc5 PushV
	var_76_object = var_11_int; // 0xc6 Mov
	func_2463(var_76_object); // 0xc7 NEW_2
	
Label_201:
	return 0; // 0xc9 Return
}


	task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj(); // 0xcb PushV
	var_102_object = var_100_object; // 0xcc Mov
	func_1609(var_101_bool, var_102_object); // 0xcd NEW_2
	var_129_bool = var_101_bool == 0; // 0xcf Not
	if(var_129_bool == 0) goto Label_214; // 0xd0 JumpB
	var_130_object = Obj(); // 0xd1 PushV
	var_130_object = var_100_object; // 0xd2 Mov
	func_2493(var_130_object); // 0xd3 NEW_2
	return 0; // 0xd5 Return
	
Label_214:
	func_316(); // 0xd7 NEW_2
	var_145_object = Obj(); // 0xd9 PushV
	var_145_object = var_100_object; // 0xda Mov
	func_2517(var_145_object); // 0xdb NEW_2
	return 0; // 0xdd Return
	}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0xdf PushV
	var_15_object = var_11_bool; // 0xe0 Mov
	var_16_object = var_12_float; // 0xe1 Mov
	var_17_bool = var_13_int; // 0xe2 Mov
	func_2596(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0xe3 NEW_2
	if(var_14_bool == 0) goto Label_234; // 0xe5 JumpB
	var_100_object = Obj(); // 0xe6 PushV
	var_100_object = var_11_bool; // 0xe7 Mov
	func_202(); // 0xe8 NEW_2
	
Label_234:
	return 0; // 0xea Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_object = Obj(); // 0x142 PushV
	var_12_object = var_11_int; // 0x143 Mov
	func_2493(var_12_object); // 0x144 NEW_2
	return 0; // 0x146 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x148 PushV
	var_15_object = var_11_bool; // 0x149 Mov
	var_16_object = var_12_float; // 0x14a Mov
	var_17_bool = var_13_int; // 0x14b Mov
	func_2596(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x14c NEW_2
	return 0; // 0x14e Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_int, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_int = 1; // 0x181 PushI
	var_13_bool = var_11_int == var_12_int; // 0x182 Eq
	if(var_13_bool == 0) goto Label_393; // 0x183 JumpB
	var_14_object = Obj(); // 0x184 PushV
	var_14_object = var_1_bool; // 0x185 MovT
	func_1917(var_14_object); // 0x186 NEW_2
	goto Label_397; // 0x188 Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_393:
	var_19_int = 0; // 0x189 PushV
	var_19_int = var_11_int; // 0x18a Mov
	func_542(var_10_float, var_11_int, var_19_int); // 0x18b NEW_2
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; // 0x19c PushV
	var_12_bool = 0; // 0x19d MovB
	var_13_bool = var_1_bool == var_11_int; // 0x19e Eq
	if(var_13_bool == 0) goto Label_419; // 0x19f JumpB
	var_14_bool = var_2_bool == 0; // 0x1a0 Not
	if(var_14_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_12_bool = 1; // 0x1a2 MovB
	
Label_419:
	if(var_12_bool == 0) goto Label_425; // 0x1a3 JumpB
	var_2_bool = 1; // 0x1a4 TMovB
	var_15_object = Obj(); // 0x1a5 PushV
	var_15_object = var_11_int; // 0x1a6 Mov
	func_1775(var_15_object); // 0x1a7 NEW_2
	
Label_425:
	return 0; // 0x1a9 Return
}


task_2_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	var_12_bool = 0; // 0x1ab PushV
	var_12_bool = 0; // 0x1ac MovB
	var_13_bool = var_1_bool == var_11_int; // 0x1ad Eq
	if(var_13_bool == 0) goto Label_434; // 0x1ae JumpB
	var_14_bool = var_2_bool; // 0x1af PushT
	if(var_14_bool == 0) goto Label_434; // 0x1b0 JumpB
	var_12_bool = 1; // 0x1b1 MovB
	
Label_434:
	if(var_12_bool == 0) goto Label_439; // 0x1b2 JumpB
	var_2_bool = 0; // 0x1b3 TMovB
	var_15_string = "head"; // 0x1b4 PushS
	UnlookAsync(var_15_string); // 0x1b5 Func
	
Label_439:
	return 0; // 0x1b7 Return
}


task_2_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	RequestClearPath(var_11_int); // 0x231 Func
	return 0; // 0x233 Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int)
{
	func_398(var_11_int); // 0x23d NEW_2
	var_16_object = Obj(); // 0x23f PushV
	var_16_object = var_11_int; // 0x240 Mov
	func_2590(); // 0x241 NEW_2
	return 0; // 0x243 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	var_12_object = Obj(); // 0x25e PushV
	var_12_object = var_11_object; // 0x25f Mov
	func_2493(var_12_object); // 0x260 NEW_2
	return 0; // 0x262 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; // 0x264 PushV
	var_15_object = var_11_object; // 0x265 Mov
	var_16_object = var_12_object; // 0x266 Mov
	var_17_bool = var_13_bool; // 0x267 Mov
	func_2596(var_14_bool, var_15_object, var_16_object, var_17_bool); // 0x268 NEW_2
	return 0; // 0x26a Return
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x524 PushV
	IsOverrideActive(var_13_bool); // 0x525 Func
	var_14_bool = var_13_bool == 0; // 0x527 Not
	if(var_14_bool == 0) goto Label_1325; // 0x528 JumpB
	var_15_object = Obj(); // 0x529 PushV
	var_15_object = var_11_object; // 0x52a Mov
	func_1967(var_15_object); // 0x52b NEW_2
	
Label_1325:
	return 2; // 0x52d Return
}


task_4_event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0; // 0x5a4 Return
}


task_4_event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_string)
{
	return 0; // 0x5a6 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	return 0; // 0x5a8 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x9f9 PushV
	var_15_object = var_11_object; // 0x9fa Mov
	var_16_int = var_12_int; // 0x9fb Mov
	var_17_float = var_13_float; // 0x9fc Mov
	func_1677(var_15_object, var_16_int, var_17_float); // 0x9fd NEW_2
	return 0; // 0x9ff Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0xa01 PushV
	var_17_object = var_11_object; // 0xa02 Mov
	var_18_int = var_12_int; // 0xa03 Mov
	var_19_float = var_13_float; // 0xa04 Mov
	var_20_cvector = var_15_cvector; // 0xa05 Mov
	var_21_cvector = var_16_cvector; // 0xa06 Mov
	func_1745(var_19_float, var_20_cvector, var_21_cvector); // 0xa07 NEW_2
	return 0; // 0xa09 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0xa0a PushV
	var_15_string = "health"; // 0xa0b PushS
	var_16_bool = var_12_string == var_15_string; // 0xa0c Eq
	if(var_16_bool == 0) goto Label_2582; // 0xa0d JumpB
	var_17_string = "health"; // 0xa0e PushS
	GetProperty(var_17_string, var_14_float); // 0xa0f Func
	var_18_int = 0; // 0xa11 PushI
	var_19_bool = var_14_float <= var_18_int; // 0xa12 LE
	if(var_19_bool == 0) goto Label_2582; // 0xa13 JumpB
	SignalDeath(var_11_object); // 0xa14 Func
	
Label_2582:
	return 2; // 0xa16 Return
}


event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object, var_12_string)
{
	var_13_string = "prc"; // 0xa18 PushS
	var_14_bool = var_12_string == var_13_string; // 0xa19 Eq
	if(var_14_bool == 0) goto Label_2589; // 0xa1a JumpB
	ResetAAS(); // 0xa1b Func
	
Label_2589:
	return 0; // 0xa1d Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_object)
{
	var_12_object = Obj(); // 0xa1f PushV
	var_12_object = var_11_object; // 0xa20 Mov
	func_2532(var_12_object); // 0xa21 NEW_2
	return 0; // 0xa23 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int)
{
	func_2449(); // 0x1 NEW_2
	func_2250(); // 0x4 NEW_2
	
Label_6:
	func_74(var_9_float, var_10_int); // 0x7 NEW_2
	goto Label_6; // 0x9 Jump
}


func_2052()
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; // 0x804 PushV
	var_32_int = 0; // 0x805 PushI
	ClearSubContainer(var_32_int); // 0x806 Func
	var_33_int = 0; // 0x808 PushV
	func_1908(var_33_int); // 0x809 NEW_2
	var_31_int = var_33_int; // 0x80a Mov
	var_39_int = 0; var_40_int = 0; // 0x80c PushV
	var_39_int = 0; // 0x80d MovI
	var_41_int = 100; // 0x80e PushI
	var_42_int = 100; // 0x80f PushI
	var_43_float = var_31_int * var_42_int; // 0x810 Mult
	var_40_int = var_41_int + var_43_float; // 0x811 Add2
	func_1980(var_39_int, var_40_int); // 0x812 NEW_2
	var_61_string = ""; var_62_int = 0; var_63_int = 0; // 0x814 PushV
	var_61_string = "tourniquet"; // 0x815 MovS
	var_62_int = 1; // 0x816 MovI
	var_63_int = 7; // 0x817 MovI
	func_1786(var_61_string, var_62_int, var_63_int); // 0x818 NEW_2
	var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x81a PushV
	var_72_string = "bandage"; // 0x81b MovS
	var_73_int = 1; // 0x81c MovI
	var_74_int = 7; // 0x81d MovI
	func_1786(var_72_string, var_73_int, var_74_int); // 0x81e NEW_2
	var_75_string = ""; var_76_int = 0; var_77_int = 0; // 0x820 PushV
	var_75_string = "packet"; // 0x821 MovS
	var_76_int = 1; // 0x822 MovI
	var_77_int = 10; // 0x823 MovI
	func_1786(var_75_string, var_76_int, var_77_int); // 0x824 NEW_2
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x826 PushV
	var_78_string = "bottle_water"; // 0x827 MovS
	var_79_int = 1; // 0x828 MovI
	var_80_int = 3; // 0x829 MovI
	func_1786(var_78_string, var_79_int, var_80_int); // 0x82a NEW_2
	var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0; // 0x82c PushV
	var_81_string = "rusk"; // 0x82d MovS
	var_82_int = 1; // 0x82e MovI
	var_83_int = 3; // 0x82f MovI
	var_84_int = 4; // 0x830 MovI
	func_1797(var_81_string, var_82_int, var_83_int, var_84_int); // 0x831 NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0x833 PushV
	var_95_string = "hook"; // 0x834 MovS
	var_96_int = 1; // 0x835 MovI
	var_97_int = 20; // 0x836 MovI
	func_1786(var_95_string, var_96_int, var_97_int); // 0x837 NEW_2
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0x839 PushV
	var_98_string = "watch"; // 0x83a MovS
	var_99_int = 1; // 0x83b MovI
	var_100_int = 20; // 0x83c MovI
	func_1786(var_98_string, var_99_int, var_100_int); // 0x83d NEW_2
	var_101_bool = 0; // 0x83f PushV
	var_101_bool = 0; // 0x840 MovB
	var_102_int = 3; // 0x841 PushI
	var_103_bool = var_31_int >= var_102_int; // 0x842 GE
	if(var_103_bool == 0) goto Label_2120; // 0x843 JumpB
	var_104_int = 6; // 0x844 PushI
	var_105_bool = var_31_int < var_104_int; // 0x845 LT
	if(var_105_bool == 0) goto Label_2120; // 0x846 JumpB
	var_101_bool = 1; // 0x847 MovB
	
Label_2120:
	if(var_101_bool == 0) goto Label_2128; // 0x848 JumpB
	var_106_string = ""; var_107_int = 0; var_108_int = 0; var_109_int = 0; // 0x849 PushV
	var_106_string = "alpha_pills"; // 0x84a MovS
	var_107_int = 1; // 0x84b MovI
	var_108_int = 2; // 0x84c MovI
	var_109_int = 3; // 0x84d MovI
	func_1797(var_106_string, var_107_int, var_108_int, var_109_int); // 0x84e NEW_2
	
Label_2128:
	var_110_int = 4; // 0x850 PushI
	var_111_bool = var_31_int >= var_110_int; // 0x851 GE
	if(var_111_bool == 0) goto Label_2138; // 0x852 JumpB
	var_112_string = ""; var_113_int = 0; var_114_int = 0; var_115_int = 0; // 0x853 PushV
	var_112_string = "beta_pills"; // 0x854 MovS
	var_113_int = 1; // 0x855 MovI
	var_114_int = 4; // 0x856 MovI
	var_115_int = 3; // 0x857 MovI
	func_1797(var_112_string, var_113_int, var_114_int, var_115_int); // 0x858 NEW_2
	
Label_2138:
	var_116_int = 6; // 0x85a PushI
	var_117_bool = var_31_int >= var_116_int; // 0x85b GE
	if(var_117_bool == 0) goto Label_2155; // 0x85c JumpB
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x85d PushV
	var_118_string = "alpha_pills"; // 0x85e MovS
	var_119_int = 1; // 0x85f MovI
	var_120_int = 2; // 0x860 MovI
	var_121_int = 8; // 0x861 MovI
	func_1797(var_118_string, var_119_int, var_120_int, var_121_int); // 0x862 NEW_2
	var_122_string = ""; var_123_int = 0; var_124_int = 0; var_125_int = 0; // 0x864 PushV
	var_122_string = "gamma_pills"; // 0x865 MovS
	var_123_int = 1; // 0x866 MovI
	var_124_int = 8; // 0x867 MovI
	var_125_int = 3; // 0x868 MovI
	func_1797(var_122_string, var_123_int, var_124_int, var_125_int); // 0x869 NEW_2
	
Label_2155:
	var_126_int = 8; // 0x86b PushI
	var_127_bool = var_31_int >= var_126_int; // 0x86c GE
	if(var_127_bool == 0) goto Label_2170; // 0x86d JumpB
	var_128_string = ""; var_129_int = 0; var_130_int = 0; // 0x86e PushV
	var_128_string = "revolver_ammo"; // 0x86f MovS
	var_129_int = 1; // 0x870 MovI
	var_130_int = 3; // 0x871 MovI
	func_1786(var_128_string, var_129_int, var_130_int); // 0x872 NEW_2
	var_131_string = ""; var_132_int = 0; var_133_int = 0; // 0x874 PushV
	var_131_string = "rifle_ammo"; // 0x875 MovS
	var_132_int = 1; // 0x876 MovI
	var_133_int = 3; // 0x877 MovI
	func_1786(var_131_string, var_132_int, var_133_int); // 0x878 NEW_2
	
Label_2170:
	var_134_int = 0; var_135_string = ""; // 0x87a PushV
	var_135_string = "patrol_mark"; // 0x87b MovS
	func_2308(var_134_int, var_135_string); // 0x87c NEW_2
	var_136_int = 0; // 0x87e PushI
	var_137_int = 1; // 0x87f PushI
	AddItem(var_30_bool, var_134_int, var_136_int, var_137_int); // 0x880 Func
	return 6; // 0x882 Return
}


func_542(var_0_bool, var_1_bool, var_19_int)
{
	var_20_int = 0; // 0x21f PushI
	var_21_bool = var_19_int != var_20_int; // 0x220 Neq
	if(var_21_bool == 0) goto Label_547; // 0x221 JumpB
	return 0; // 0x222 Return
	
Label_547:
	var_22_bool = 0; var_23_object = Obj(); // 0x223 PushV
	var_23_object = var_1_bool; // 0x224 MovT
	func_580(var_22_bool, var_23_object); // 0x225 NEW_2
	var_58_bool = var_22_bool == 0; // 0x227 Not
	if(var_58_bool == 0) goto Label_554; // 0x228 JumpB
	var_0_bool = 1; // 0x229 TMovB
	
Label_554:
	var_59_int = 0; // 0x22a PushI
	KillTimer(var_59_int); // 0x22b Func
	Stop(); // 0x22d Func
	return 0; // 0x22f Return
}


func_1568(var_39_bool)
{
	var_41_bool = 0; var_42_bool = 0; // 0x620 PushV
	IsDead(var_42_bool); // 0x621 ObjFunc
	var_39_bool = var_42_bool; // 0x623 Mov
	return 2; // 0x624 Return
}


func_1059(var_578_bool, var_579_float)
{
	var_580_float = 0; var_581_bool = 0; var_582_float = 0; var_583_bool = 0; // 0x423 PushV
	rand(var_582_float); // 0x424 Func
	var_584_bool = var_582_float < var_579_float; // 0x426 LT
	if(var_584_bool == 0) goto Label_1079; // 0x427 JumpB
	
Label_1064:
	IsAnimationPlaying(var_583_bool); // 0x428 Func
	var_585_bool = var_583_bool == 0; // 0x42a Not
	if(var_585_bool == 0) goto Label_1069; // 0x42b JumpB
	goto Label_1078; // 0x42c Jump
	
Label_1078:
	goto Label_1084; // 0x436 Jump
	
Label_1084:
	var_578_bool = 0; // 0x43c MovB
	return 4; // 0x43d Return
	
Label_1069:
	var_586_bool = 0; // 0x42d PushV
	func_1157(var_586_bool); // 0x42e NEW_2
	if(var_586_bool == 0) goto Label_1075; // 0x430 JumpB
	var_578_bool = 1; // 0x431 MovB
	return 4; // 0x432 Return
	
Label_1075:
	sync(); // 0x433 Func
	goto Label_1064; // 0x435 Jump
	
Label_1079:
	WaitForAnimEnd(); // 0x437 Func
	func_1261(var_583_bool); // 0x43a NEW_2
}


func_2596(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0xa24 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; // 0xa25 PushV
	var_21_object = var_16_object; // 0xa26 Mov
	var_22_bool = !var_17_bool; // 0xa27 Not2
	func_2313(var_20_bool, var_21_object, var_22_bool); // 0xa28 NEW_2
	if(var_20_bool == 0) goto Label_2620; // 0xa2a JumpB
	CanSee(var_19_bool, var_15_object); // 0xa2b Func
	var_88_bool = 0; // 0xa2d PushV
	var_88_bool = 1; // 0xa2e MovB
	var_89_bool = var_19_bool; // 0xa2f Push
	if(var_89_bool == 0) goto Label_2617; // 0xa30 JumpB
	var_90_float = 0; var_91_object = Obj(); // 0xa31 PushV
	var_91_object = var_15_object; // 0xa32 Mov
	func_1470(var_91_object); // 0xa33 NEW_2
	var_98_float = 160000.0; // 0xa35 PushF
	var_99_bool = var_90_float <= var_98_float; // 0xa36 LE
	if(var_99_bool == 0) goto Label_2617; // 0xa37 JumpB
	var_88_bool = 0; // 0xa38 MovB
	
Label_2617:
	if(var_88_bool == 0) goto Label_2620; // 0xa39 JumpB
	var_14_bool = 1; // 0xa3a MovB
	return 2; // 0xa3b Return
	
Label_2620:
	var_14_bool = 0; // 0xa3c MovB
	return 2; // 0xa3d Return
}


func_1573(var_28_bool, var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x625 PushV
	var_34_bool = var_29_object == 0; // 0x626 NullEq
	if(var_34_bool == 0) goto Label_1578; // 0x627 JumpB
	var_28_bool = 0; // 0x628 MovB
	return 4; // 0x629 Return
	
Label_1578:
	var_35_bool = 0; // 0x62a PushV
	var_35_bool = 0; // 0x62b MovB
	var_36_string = "IsDead"; // 0x62c PushS
	var_37_int = 1; // 0x62d PushI
	var_38_bool = IsFuncExist(var_29_object, var_36_string, var_37_int); // 0x62e FuncExist
	if(var_38_bool == 0) goto Label_1590; // 0x62f JumpB
	var_39_bool = 0; var_40_object = Obj(); // 0x630 PushV
	var_40_object = var_29_object; // 0x631 Mov
	func_1568(var_40_object); // 0x632 NEW_2
	if(var_39_bool == 0) goto Label_1590; // 0x634 JumpB
	var_35_bool = 1; // 0x635 MovB
	
Label_1590:
	if(var_35_bool == 0) goto Label_1593; // 0x636 JumpB
	var_28_bool = 0; // 0x637 MovB
	return 4; // 0x638 Return
	
Label_1593:
	GetScene(var_32_object); // 0x639 Func
	var_43_bool = var_32_object == 0; // 0x63b NullEq
	if(var_43_bool == 0) goto Label_1599; // 0x63c JumpB
	var_28_bool = 0; // 0x63d MovB
	return 4; // 0x63e Return
	
Label_1599:
	GetScene(var_33_object); // 0x63f ObjFunc
	var_44_bool = var_32_object != var_33_object; // 0x641 Neq
	if(var_44_bool == 0) goto Label_1605; // 0x642 JumpB
	var_28_bool = 0; // 0x643 MovB
	return 4; // 0x644 Return
	
Label_1605:
	var_28_bool = 1; // 0x645 MovB
	return 4; // 0x646 Return
}


func_564(var_0_bool)
{
	var_0_bool = 1; // 0x234 TMovB
	var_15_int = 0; // 0x235 PushI
	KillTimer(var_15_int); // 0x236 Func
	Stop(); // 0x238 Func
	return 0; // 0x23a Return
}


func_2622(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_string = ""; var_19_bool = 0; var_20_float = 0; var_21_string = ""; // 0xa3e PushV
	var_22_bool = 0; var_23_object = Obj(); // 0xa3f PushV
	var_23_object = var_15_object; // 0xa40 Mov
	func_1609(var_22_bool, var_23_object); // 0xa41 NEW_2
	var_56_bool = var_22_bool == 0; // 0xa43 Not
	if(var_56_bool == 0) goto Label_2631; // 0xa44 JumpB
	var_14_bool = 0; // 0xa45 MovB
	return 6; // 0xa46 Return
	
Label_2631:
	var_57_object = GlobalVars[0]; // 0xa47 PushGE
	in(var_19_bool, var_15_object); // 0xa48 ObjFunc
	var_58_bool = var_19_bool; // 0xa4a Push
	if(var_58_bool == 0) goto Label_2638; // 0xa4b JumpB
	var_14_bool = 1; // 0xa4c MovB
	return 6; // 0xa4d Return
	
Label_2638:
	var_59_bool = 0; var_60_object = Obj(); // 0xa4e PushV
	var_60_object = var_15_object; // 0xa4f Mov
	func_1478(var_59_bool, var_60_object); // 0xa50 NEW_2
	if(var_59_bool == 0) goto Label_2649; // 0xa52 JumpB
	var_63_string = "reputation"; // 0xa53 PushS
	GetProperty(var_63_string, var_20_float); // 0xa54 ObjFunc
	var_64_float = 0.33; // 0xa56 PushF
	var_14_bool = var_20_float < var_64_float; // 0xa57 LT2
	return 6; // 0xa58 Return
	
Label_2649:
	var_65_bool = 0; var_66_object = Obj(); var_67_string = ""; // 0xa59 PushV
	var_66_object = var_15_object; // 0xa5a Mov
	var_67_string = "class"; // 0xa5b MovS
	func_1483(var_65_bool, var_66_object, var_67_string); // 0xa5c NEW_2
	if(var_65_bool == 0) goto Label_2674; // 0xa5e JumpB
	var_68_string = "class"; // 0xa5f PushS
	GetProperty(var_68_string, var_21_string); // 0xa60 ObjFunc
	var_14_bool = 1; // 0xa62 MovB
	var_69_bool = 0; // 0xa63 PushV
	var_69_bool = 1; // 0xa64 MovB
	var_70_string = "bomber"; // 0xa65 PushS
	var_71_bool = var_21_string == var_70_string; // 0xa66 Eq
	if(var_71_bool == 0) goto Label_2668; // 0xa67 JumpB
	var_72_string = "hunter"; // 0xa68 PushS
	var_73_bool = var_21_string == var_72_string; // 0xa69 Eq
	if(var_73_bool == 0) goto Label_2668; // 0xa6a JumpB
	var_69_bool = 0; // 0xa6b MovB
	
Label_2668:
	if(var_69_bool == 0) goto Label_2673; // 0xa6c JumpB
	var_74_string = "grabitel"; // 0xa6d PushS
	var_75_bool = var_21_string == var_74_string; // 0xa6e Eq
	if(var_75_bool == 0) goto Label_2673; // 0xa6f JumpB
	var_14_bool = 0; // 0xa70 MovB
	
Label_2673:
	return 6; // 0xa71 Return
	
Label_2674:
	var_14_bool = 0; // 0xa72 MovB
	return 6; // 0xa73 Return
}


func_1086(var_0_bool, var_379_bool, var_380_float)
{
	var_381_bool = 0; var_382_cvector = CVector(0,0,0); var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0); var_385_float = 0; var_386_bool = 0; var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_float = 0; // 0x43e PushV
	
Label_1087:
	IsAnimationPlaying(var_386_bool); // 0x43f Func
	var_391_bool = var_386_bool == 0; // 0x441 Not
	if(var_391_bool == 0) goto Label_1092; // 0x442 JumpB
	goto Label_1124; // 0x443 Jump
	
Label_1124:
	func_1261(var_390_float); // 0x465 NEW_2
	var_379_bool = 0; // 0x467 MovB
	return 10; // 0x468 Return
	
Label_1092:
	var_392_bool = 0; // 0x444 PushV
	func_1157(var_392_bool); // 0x445 NEW_2
	if(var_392_bool == 0) goto Label_1098; // 0x447 JumpB
	var_379_bool = 1; // 0x448 MovB
	return 10; // 0x449 Return
	
Label_1098:
	var_435_bool = 0; var_436_object = Obj(); // 0x44a PushV
	var_436_object = var_0_bool; // 0x44b MovT
	func_1609(var_435_bool, var_436_object); // 0x44c NEW_2
	var_437_bool = var_435_bool == 0; // 0x44e Not
	if(var_437_bool == 0) goto Label_1106; // 0x44f JumpB
	var_379_bool = 0; // 0x450 MovB
	return 10; // 0x451 Return
	
Label_1106:
	GetPFPosition(var_387_cvector); // 0x452 TObjFunc
	GetPFPosition(var_388_cvector); // 0x454 Func
	var_389_cvector = var_387_cvector - var_388_cvector; // 0x456 Sub2
	var_390_float = var_389_cvector | var_389_cvector; // 0x457 Or2
	var_438_float = var_380_float * var_380_float; // 0x458 Mult
	var_439_bool = var_390_float < var_438_float; // 0x459 LT
	if(var_439_bool == 0) goto Label_1121; // 0x45a JumpB
	var_440_bool = 0; var_441_float = 0; // 0x45b PushV
	var_441_float = var_380_float; // 0x45c Mov
	func_922(var_390_float, var_440_bool, var_441_float); // 0x45d NEW_2
	var_379_bool = 1; // 0x45f MovB
	return 10; // 0x460 Return
	
Label_1121:
	sync(); // 0x461 Func
	goto Label_1087; // 0x463 Jump
}


func_580(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0x245 PushV
	var_25_object = var_23_object; // 0x246 Mov
	func_1609(var_24_bool, var_25_object); // 0x247 NEW_2
	var_22_bool = var_24_bool; // 0x248 Mov
	return 0; // 0x24a Return
}


func_1609(var_24_bool, var_25_object)
{
	var_26_int = 0; var_27_int = 0; // 0x649 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x64a PushV
	var_29_object = var_25_object; // 0x64b Mov
	func_1573(var_28_bool, var_29_object); // 0x64c NEW_2
	var_45_bool = var_28_bool == 0; // 0x64e Not
	if(var_45_bool == 0) goto Label_1618; // 0x64f JumpB
	var_24_bool = 0; // 0x650 MovB
	return 2; // 0x651 Return
	
Label_1618:
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; // 0x652 PushV
	var_47_object = var_25_object; // 0x653 Mov
	var_48_string = "noaccess"; // 0x654 MovS
	func_1483(var_46_bool, var_47_object, var_48_string); // 0x655 NEW_2
	var_55_bool = var_46_bool == 0; // 0x657 Not
	if(var_55_bool == 0) goto Label_1627; // 0x658 JumpB
	var_24_bool = 1; // 0x659 MovB
	return 2; // 0x65a Return
	
Label_1627:
	var_56_string = "noaccess"; // 0x65b PushS
	GetProperty(var_56_string, var_27_int); // 0x65c ObjFunc
	var_57_int = 0; // 0x65e PushI
	var_24_bool = var_27_int == var_57_int; // 0x65f Eq2
	return 2; // 0x660 Return
}


func_74(var_0_bool, var_1_bool)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_object = Obj(); var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_object = Obj(); var_84_bool = 0; // 0x4a PushV
	var_0_bool = 0; // 0x4b TMovB
	var_1_bool = 0; // 0x4c TMovB
	var_85_float = 0.5; // 0x4d PushF
	rand(var_79_float, var_85_float); // 0x4e Func
	Sleep(var_79_float); // 0x50 Func
	
Label_82:
	var_86_bool = var_0_bool == 0; // 0x52 Not
	if(var_86_bool == 0) goto Label_132; // 0x53 JumpB
	var_87_bool = var_1_bool == 0; // 0x54 Not
	if(var_87_bool == 0) goto Label_101; // 0x55 JumpB
	
Label_86:
	GetPosition(var_81_cvector); // 0x56 Func
	var_88_float = 0; // 0x58 PushV
	func_133(var_88_float); // 0x59 NEW_2
	GetRandomPFPointInCircle(var_80_cvector, var_81_cvector, var_88_float, var_82_bool); // 0x5b Func
	var_91_bool = var_82_bool; // 0x5d Push
	if(var_91_bool == 0) goto Label_96; // 0x5e JumpB
	goto Label_100; // 0x5f Jump
	
Label_100:
	goto Label_102; // 0x64 Jump
	
Label_102:
	var_92_object = Obj(); var_93_cvector = CVector(0,0,0); // 0x66 PushV
	var_93_cvector = var_80_cvector; // 0x67 Mov
	func_163(var_92_object, var_93_cvector); // 0x68 NEW_2
	var_83_object = var_92_object; // 0x69 Mov
	var_96_bool = var_83_object != 0; // 0x6b NullNeq
	if(var_96_bool == 0) goto Label_127; // 0x6c JumpB
	RotatePath(var_83_object, var_84_bool); // 0x6d Func
	var_97_bool = var_84_bool; // 0x6f Push
	if(var_97_bool == 0) goto Label_126; // 0x70 JumpB
	var_98_bool = 0; // 0x71 PushV
	func_161(var_98_bool); // 0x72 NEW_2
	FollowPath(var_83_object, var_98_bool, var_84_bool); // 0x74 Func
	var_83_object = 0; // 0x76 SetNull
	var_99_bool = var_84_bool; // 0x77 Push
	if(var_99_bool == 0) goto Label_126; // 0x78 JumpB
	TaskCall(1); // 0x7a TaskCall
	func_235(); // 0x7b NEW_2
	TaskReturn(); // 0x7c TaskReturn
	
Label_126:
	goto Label_130; // 0x7e Jump
	
Label_130:
	var_83_object = 0; // 0x82 SetNull
	goto Label_82; // 0x83 Jump
	
Label_127:
	var_153_int = 1; // 0x7f PushI
	Sleep(var_153_int); // 0x80 Func
	
Label_96:
	var_154_int = 1; // 0x60 PushI
	Sleep(var_154_int); // 0x61 Func
	goto Label_86; // 0x63 Jump
	
Label_101:
	var_1_bool = 0; // 0x65 TMovB
	
Label_132:
	return 12; // 0x84 Return
}


func_587(var_291_string)
{
	var_291_string = "walk"; // 0x24b MovS
	return 0; // 0x24c Return
}


func_589(var_292_string)
{
	var_292_string = "run"; // 0x24d MovS
	return 0; // 0x24e Return
}


func_591(var_147_object, var_148_bool)
{
	var_155_object = Obj(); var_156_bool = 0; var_157_float = 0; // 0x250 PushV
	var_155_object = var_147_object; // 0x251 Mov
	var_156_bool = var_148_bool; // 0x252 Mov
	var_157_float = 180.0; // 0x253 MovF
	func_619(var_152_bool, var_153_float, var_154_int, var_147_object, var_148_bool, var_155_object, var_156_bool, var_157_float); // 0x254 NEW_2
	return 0; // 0x256 Return
}


func_599(var_488_float)
{
	var_488_float = 0.1; // 0x258 MovF
	return 0; // 0x259 Return
}


func_602(var_495_int)
{
	var_495_int = 0; // 0x25b MovI
	return 0; // 0x25c Return
}


func_1633(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x661 PushV
	var_43_bool = var_28_object == 0; // 0x662 NullEq
	if(var_43_bool == 0) goto Label_1637; // 0x663 JumpB
	return 14; // 0x664 Return
	
Label_1637:
	IsDead(var_36_bool); // 0x665 Func
	var_44_bool = var_36_bool; // 0x667 Push
	if(var_44_bool == 0) goto Label_1642; // 0x668 JumpB
	return 14; // 0x669 Return
	
Label_1642:
	GetSecondaryAnimationType(var_37_int); // 0x66a Func
	var_45_int = 0; // 0x66c PushI
	var_46_bool = var_37_int < var_45_int; // 0x66d LT
	if(var_46_bool == 0) goto Label_1648; // 0x66e JumpB
	return 14; // 0x66f Return
	
Label_1648:
	GetPosition(var_38_cvector); // 0x670 ObjFunc
	GetPosition(var_39_cvector); // 0x672 Func
	GetDirection(var_40_cvector); // 0x674 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x676 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x677 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x678 PushE
	var_49_float = var_47_float * var_48_float; // 0x679 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x67a PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x67b PushE
	var_52_float = var_50_float * var_51_float; // 0x67c Mult
	var_53_int = var_49_float + var_52_float; // 0x67d Add
	var_54_int = 0; // 0x67e PushI
	var_55_bool = var_53_int >= var_54_int; // 0x67f GE
	if(var_55_bool == 0) goto Label_1667; // 0x680 JumpB
	var_42_string = "fhit"; // 0x681 MovS
	goto Label_1668; // 0x682 Jump
	
Label_1668:
	var_56_string = "hit_react"; // 0x684 PushS
	var_57_string = "1"; // 0x685 PushS
	var_58_int = var_42_string + var_57_string; // 0x686 Add
	var_59_string = "2"; // 0x687 PushS
	var_60_int = var_42_string + var_59_string; // 0x688 Add
	var_61_int = -10; // 0x689 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x68a Func
	return 14; // 0x68c Return
	
Label_1667:
	var_42_string = "bhit"; // 0x683 MovS
}


func_1129(var_0_bool, var_394_bool)
{
	var_395_cvector = CVector(0,0,0); var_396_cvector = CVector(0,0,0); var_397_cvector = CVector(0,0,0); var_398_float = 0; var_399_float = 0; var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_float = 0; var_404_float = 0; // 0x469 PushV
	var_405_bool = 0; var_406_object = Obj(); // 0x46a PushV
	var_406_object = var_0_bool; // 0x46b MovT
	func_1609(var_405_bool, var_406_object); // 0x46c NEW_2
	var_407_bool = var_405_bool == 0; // 0x46e Not
	if(var_407_bool == 0) goto Label_1138; // 0x46f JumpB
	var_394_bool = 0; // 0x470 MovB
	return 10; // 0x471 Return
	
Label_1138:
	var_408_bool = 0; // 0x472 PushV
	func_1218(var_404_float, var_408_bool); // 0x473 NEW_2
	if(var_408_bool == 0) goto Label_1155; // 0x475 JumpB
	GetPFPosition(var_400_cvector); // 0x476 TObjFunc
	GetPFPosition(var_401_cvector); // 0x478 Func
	var_402_cvector = var_400_cvector - var_401_cvector; // 0x47a Sub2
	var_403_float = var_402_cvector | var_402_cvector; // 0x47b Or2
	GetAttackDistance(var_404_float); // 0x47c TObjFunc
	var_409_int = 50; // 0x47e PushI
	var_404_float = var_404_float + var_409_int; // 0x47f Add2
	var_410_float = var_404_float * var_404_float; // 0x480 Mult
	var_394_bool = var_403_float <= var_410_float; // 0x481 LE2
	return 10; // 0x482 Return
	
Label_1155:
	var_394_bool = 0; // 0x483 MovB
	return 10; // 0x484 Return
}


func_619(var_0_bool, var_3_object, var_5_bool, var_155_object, var_156_bool, var_157_float, var_230_bool, var_320_bool)
{
	var_158_float = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_bool = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_bool = 0; var_168_float = 0; var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_bool = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_cvector = CVector(0,0,0); var_178_bool = 0; var_179_float = 0; // 0x26b PushV
	func_848(var_177_cvector, var_178_bool, var_179_float); // 0x26d NEW_2
	var_5_bool = 0; // 0x26f TMovI
	var_202_string = "@GetAttackDistance"; // 0x270 PushS
	var_203_int = 1; // 0x271 PushI
	var_204_bool = IsFuncExist(var_155_object, var_202_string, var_203_int); // 0x272 FuncExist
	if(var_204_bool == 0) goto Label_633; // 0x273 JumpB
	GetAttackDistance(var_169_float); // 0x274 ObjFunc
	var_205_int = 50; // 0x276 PushI
	var_169_float = var_169_float + var_205_int; // 0x277 Add2
	goto Label_634; // 0x278 Jump
	
Label_634:
	var_206_int = 150; // 0x27a PushI
	var_207_bool = var_169_float >= var_206_int; // 0x27b GE
	if(var_207_bool == 0) goto Label_638; // 0x27c JumpB
	var_169_float = 150; // 0x27d MovI
	
Label_638:
	var_3_object = 0; // 0x27e TMovB
	var_0_bool = var_155_object; // 0x27f TMov
	IsPlayerActor(var_0_bool, var_172_bool); // 0x280 Func
	var_208_bool = var_172_bool; // 0x282 Push
	if(var_208_bool == 0) goto Label_652; // 0x283 JumpB
	var_209_string = "attack"; // 0x284 PushS
	PlayGlobalMusic(var_209_string); // 0x285 Func
	var_210_object = Obj(); // 0x287 PushV
	func_1853(var_210_object); // 0x288 NEW_2
	SendPlayerEnemy(var_155_object, var_210_object); // 0x28a Func
	
Label_652:
	var_211_bool = var_156_bool; // 0x28c Push
	if(var_211_bool == 0) goto Label_656; // 0x28d JumpB
	var_173_bool = 0; // 0x28e MovB
	goto Label_657; // 0x28f Jump
	
Label_657:
	var_212_float = 300.0; // 0x291 PushF
	var_174_float = var_212_float + var_169_float; // 0x292 Add2
	
Label_659:
	var_213_bool = 0; // 0x293 PushV
	var_213_bool = 0; // 0x294 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x295 PushV
	var_215_object = var_0_bool; // 0x296 MovT
	func_1609(var_214_bool, var_215_object); // 0x297 NEW_2
	if(var_214_bool == 0) goto Label_669; // 0x299 JumpB
	var_216_bool = var_3_object == 0; // 0x29a Not
	if(var_216_bool == 0) goto Label_669; // 0x29b JumpB
	var_213_bool = 1; // 0x29c MovB
	
Label_669:
	if(var_213_bool == 0) goto Label_831; // 0x29d JumpB
	func_1261(var_179_float); // 0x29f NEW_2
	GetPFPosition(var_170_cvector); // 0x2a1 TObjFunc
	GetPFPosition(var_171_cvector); // 0x2a3 Func
	var_175_cvector = var_170_cvector - var_171_cvector; // 0x2a5 Sub2
	var_176_float = var_175_cvector | var_175_cvector; // 0x2a6 Or2
	var_222_float = var_174_float * var_174_float; // 0x2a7 Mult
	var_223_bool = var_176_float >= var_222_float; // 0x2a8 GE
	if(var_223_bool == 0) goto Label_697; // 0x2a9 JumpB
	var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0; // 0x2aa PushV
	var_225_object = var_0_bool; // 0x2ab MovT
	var_226_float = var_169_float; // 0x2ac Mov
	var_227_float = 3000.0; // 0x2ad MovF
	var_228_bool = 1; // 0x2ae MovB
	var_229_bool = 0; // 0x2af MovB
	TaskCall(2); // 0x2b0 TaskCall
	func_335(var_232_bool, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool); // 0x2b1 NEW_2
	TaskReturn(); // 0x2b2 TaskReturn
	var_305_bool = var_230_bool == 0; // 0x2b4 Not
	if(var_305_bool == 0) goto Label_695; // 0x2b5 JumpB
	goto Label_831; // 0x2b6 Jump
	
Label_831:
	WaitForAnimEnd(); // 0x33f Func
	var_306_object = var_3_object; // 0x341 PushT
	if(var_306_object == 0) goto Label_836; // 0x342 JumpB
	return 22; // 0x343 Return
	
Label_836:
	var_307_string = "all"; // 0x344 PushS
	var_308_string = "attack_off"; // 0x345 PushS
	PlayAnimation(var_307_string, var_308_string); // 0x346 Func
	WaitForAnimEnd(); // 0x348 Func
	var_309_bool = var_172_bool; // 0x34a Push
	if(var_309_bool == 0) goto Label_847; // 0x34b JumpB
	var_310_float = 2.0; // 0x34c PushF
	Sleep(var_310_float); // 0x34d Func
	
Label_847:
	return 22; // 0x34f Return
	
Label_695:
	var_173_bool = 0; // 0x2b7 MovB
	goto Label_830; // 0x2b8 Jump
	
Label_830:
	goto Label_659; // 0x33e Jump
	
Label_697:
	var_311_float = var_157_float * var_157_float; // 0x2b9 Mult
	var_312_bool = var_176_float >= var_311_float; // 0x2ba GE
	if(var_312_bool == 0) goto Label_822; // 0x2bb JumpB
	GetPFPosition(var_177_cvector); // 0x2bc TObjFunc
	CanReachByPF(var_178_bool, var_177_cvector); // 0x2be Func
	var_313_bool = var_178_bool == 0; // 0x2c0 Not
	if(var_313_bool == 0) goto Label_721; // 0x2c1 JumpB
	var_314_bool = 0; var_315_object = Obj(); var_316_float = 0; var_317_float = 0; var_318_bool = 0; var_319_bool = 0; // 0x2c2 PushV
	var_315_object = var_0_bool; // 0x2c3 MovT
	var_316_float = var_169_float; // 0x2c4 Mov
	var_317_float = 3000.0; // 0x2c5 MovF
	var_318_bool = 1; // 0x2c6 MovB
	var_319_bool = 0; // 0x2c7 MovB
	TaskCall(2); // 0x2c8 TaskCall
	func_335(var_322_bool, var_314_bool, var_315_object, var_316_float, var_317_float, var_318_bool, var_319_bool); // 0x2c9 NEW_2
	TaskReturn(); // 0x2ca TaskReturn
	var_323_bool = var_320_bool == 0; // 0x2cc Not
	if(var_323_bool == 0) goto Label_719; // 0x2cd JumpB
	goto Label_831; // 0x2ce Jump
	
Label_719:
	var_173_bool = 0; // 0x2cf MovB
	goto Label_659; // 0x2d0 Jump
	
Label_721:
	var_324_bool = var_173_bool == 0; // 0x2d1 Not
	if(var_324_bool == 0) goto Label_746; // 0x2d2 JumpB
	var_325_object = Obj(); // 0x2d3 PushV
	var_325_object = var_0_bool; // 0x2d4 MovT
	func_1759(); // 0x2d5 NEW_2
	var_334_string = "all"; // 0x2d7 PushS
	var_335_string = "attack_on"; // 0x2d8 PushS
	PlayAnimation(var_334_string, var_335_string); // 0x2d9 Func
	WaitForAnimEnd(); // 0x2db Func
	func_1261(var_179_float); // 0x2de NEW_2
	StopAsync(); // 0x2e0 Func
	var_173_bool = 1; // 0x2e2 MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x2e3 PushV
	var_337_object = var_0_bool; // 0x2e4 MovT
	func_1609(var_336_bool, var_337_object); // 0x2e5 NEW_2
	var_338_bool = var_336_bool == 0; // 0x2e7 Not
	if(var_338_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_831; // 0x2e9 Jump
	
Label_746:
	rand(var_179_float); // 0x2ea Func
	var_339_bool = 0; // 0x2ec PushV
	var_339_bool = 1; // 0x2ed MovB
	var_340_float = 0.6; // 0x2ee PushF
	var_341_bool = var_179_float < var_340_float; // 0x2ef LT
	if(var_341_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_342_bool = 0; // 0x2f1 PushV
	func_1218(var_339_bool, var_342_bool); // 0x2f2 NEW_2
	if(var_342_bool == 0) goto Label_758; // 0x2f4 JumpB
	var_339_bool = 0; // 0x2f5 MovB
	
Label_758:
	if(var_339_bool == 0) goto Label_775; // 0x2f6 JumpB
	Face(var_0_bool); // 0x2f7 Func
	func_1268(); // 0x2fa NEW_2
	var_377_string = "all"; // 0x2fc PushS
	var_378_string = "attack_stay"; // 0x2fd PushS
	PlayAnimation(var_377_string, var_378_string); // 0x2fe Func
	var_379_bool = 0; var_380_float = 0; // 0x300 PushV
	var_380_float = var_157_float; // 0x301 Mov
	func_1086(var_179_float, var_379_bool, var_380_float); // 0x302 NEW_2
	StopAsync(); // 0x304 Func
	goto Label_821; // 0x306 Jump
	
Label_821:
	goto Label_830; // 0x335 Jump
	
Label_775:
	Face(var_0_bool); // 0x307 Func
	var_594_string = "all"; // 0x309 PushS
	var_595_string = "fjump"; // 0x30a PushS
	PlayAnimation(var_594_string, var_595_string); // 0x30b Func
	WaitForAnimEnd(); // 0x30d Func
	func_1261(var_179_float); // 0x310 NEW_2
	var_596_cvector = CVector(0.0, 0.0, 0.0); // 0x312 PushVec
	SetSpeed(var_596_cvector); // 0x313 Func
	Stop(); // 0x315 Func
	StopAsync(); // 0x317 Func
	var_597_bool = 0; // 0x319 PushV
	func_1218(var_179_float, var_597_bool); // 0x31a NEW_2
	var_598_bool = var_597_bool == 0; // 0x31c Not
	if(var_598_bool == 0) goto Label_821; // 0x31d JumpB
	var_599_bool = 0; var_600_object = Obj(); // 0x31e PushV
	var_600_object = var_0_bool; // 0x31f MovT
	func_1609(var_599_bool, var_600_object); // 0x320 NEW_2
	var_601_bool = var_599_bool == 0; // 0x322 Not
	if(var_601_bool == 0) goto Label_805; // 0x323 JumpB
	goto Label_831; // 0x324 Jump
	
Label_805:
	GetPFPosition(var_170_cvector); // 0x325 TObjFunc
	GetPFPosition(var_171_cvector); // 0x327 Func
	var_175_cvector = var_170_cvector - var_171_cvector; // 0x329 Sub2
	var_176_float = var_175_cvector | var_175_cvector; // 0x32a Or2
	var_602_float = var_157_float * var_157_float; // 0x32b Mult
	var_603_bool = var_176_float < var_602_float; // 0x32c LT
	if(var_603_bool == 0) goto Label_821; // 0x32d JumpB
	var_604_bool = 0; var_605_float = 0; // 0x32e PushV
	var_605_float = var_157_float; // 0x32f Mov
	func_922(var_179_float, var_604_bool, var_605_float); // 0x330 NEW_2
	var_606_bool = var_604_bool == 0; // 0x332 Not
	if(var_606_bool == 0) goto Label_821; // 0x333 JumpB
	goto Label_831; // 0x334 Jump
	
Label_822:
	var_607_bool = 0; var_608_float = 0; // 0x336 PushV
	var_608_float = var_157_float; // 0x337 Mov
	func_922(var_179_float, var_607_bool, var_608_float); // 0x338 NEW_2
	var_609_bool = var_607_bool == 0; // 0x33a Not
	if(var_609_bool == 0) goto Label_829; // 0x33b JumpB
	goto Label_831; // 0x33c Jump
	
Label_829:
	var_173_bool = 1; // 0x33d MovB
	
Label_656:
	var_173_bool = 1; // 0x290 MovB
	
Label_633:
	var_169_float = var_157_float; // 0x279 Mov
}


func_2179()
{
	var_241_int = 0; var_242_bool = 0; var_243_int = 0; var_244_int = 0; var_245_bool = 0; var_246_int = 0; // 0x883 PushV
	var_247_int = 0; // 0x884 PushI
	ClearSubContainer(var_247_int); // 0x885 Func
	var_248_int = 0; // 0x887 PushV
	func_1908(var_248_int); // 0x888 NEW_2
	var_246_int = var_248_int; // 0x889 Mov
	var_249_int = 0; var_250_int = 0; // 0x88b PushV
	var_249_int = 0; // 0x88c MovI
	var_251_int = 10; // 0x88d PushI
	var_252_int = 5; // 0x88e PushI
	var_253_float = var_246_int * var_252_int; // 0x88f Mult
	var_250_int = var_251_int + var_253_float; // 0x890 Add2
	func_1980(var_249_int, var_250_int); // 0x891 NEW_2
	var_254_string = ""; var_255_int = 0; var_256_int = 0; // 0x893 PushV
	var_254_string = "bottle_water"; // 0x894 MovS
	var_255_int = 1; // 0x895 MovI
	var_256_int = 3; // 0x896 MovI
	func_1786(var_254_string, var_255_int, var_256_int); // 0x897 NEW_2
	var_257_string = ""; var_258_int = 0; var_259_int = 0; // 0x899 PushV
	var_257_string = "rusk"; // 0x89a MovS
	var_258_int = 1; // 0x89b MovI
	var_259_int = 20; // 0x89c MovI
	func_1786(var_257_string, var_258_int, var_259_int); // 0x89d NEW_2
	var_260_string = ""; var_261_int = 0; var_262_int = 0; // 0x89f PushV
	var_260_string = "hook"; // 0x8a0 MovS
	var_261_int = 1; // 0x8a1 MovI
	var_262_int = 30; // 0x8a2 MovI
	func_1786(var_260_string, var_261_int, var_262_int); // 0x8a3 NEW_2
	var_263_string = ""; var_264_int = 0; var_265_int = 0; // 0x8a5 PushV
	var_263_string = "watch"; // 0x8a6 MovS
	var_264_int = 1; // 0x8a7 MovI
	var_265_int = 30; // 0x8a8 MovI
	func_1786(var_263_string, var_264_int, var_265_int); // 0x8a9 NEW_2
	var_266_int = 3; // 0x8ab PushI
	var_267_bool = var_246_int >= var_266_int; // 0x8ac GE
	if(var_267_bool == 0) goto Label_2229; // 0x8ad JumpB
	var_268_string = ""; var_269_int = 0; var_270_int = 0; var_271_int = 0; // 0x8ae PushV
	var_268_string = "alpha_pills"; // 0x8af MovS
	var_269_int = 1; // 0x8b0 MovI
	var_270_int = 4; // 0x8b1 MovI
	var_271_int = 3; // 0x8b2 MovI
	func_1797(var_268_string, var_269_int, var_270_int, var_271_int); // 0x8b3 NEW_2
	
Label_2229:
	var_272_int = 4; // 0x8b5 PushI
	var_273_bool = var_246_int >= var_272_int; // 0x8b6 GE
	if(var_273_bool == 0) goto Label_2239; // 0x8b7 JumpB
	var_274_string = ""; var_275_int = 0; var_276_int = 0; var_277_int = 0; // 0x8b8 PushV
	var_274_string = "beta_pills"; // 0x8b9 MovS
	var_275_int = 1; // 0x8ba MovI
	var_276_int = 8; // 0x8bb MovI
	var_277_int = 3; // 0x8bc MovI
	func_1797(var_274_string, var_275_int, var_276_int, var_277_int); // 0x8bd NEW_2
	
Label_2239:
	var_278_int = 6; // 0x8bf PushI
	var_279_bool = var_246_int >= var_278_int; // 0x8c0 GE
	if(var_279_bool == 0) goto Label_2249; // 0x8c1 JumpB
	var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0; // 0x8c2 PushV
	var_280_string = "gamma_pills"; // 0x8c3 MovS
	var_281_int = 1; // 0x8c4 MovI
	var_282_int = 16; // 0x8c5 MovI
	var_283_int = 3; // 0x8c6 MovI
	func_1797(var_280_string, var_281_int, var_282_int, var_283_int); // 0x8c7 NEW_2
	
Label_2249:
	return 6; // 0x8c9 Return
}


func_133(var_88_float)
{
	var_89_float = 0; var_90_float = 0; // 0x85 PushV
	GetCameraFarDistance(var_90_float); // 0x86 Func
	var_88_float = var_90_float; // 0x88 Mov
	return 2; // 0x89 Return
}


func_1157(var_392_bool)
{
	var_393_bool = 0; // 0x485 PushV
	var_393_bool = 0; // 0x486 MovB
	var_394_bool = 0; // 0x487 PushV
	func_1129(var_393_bool, var_394_bool); // 0x488 NEW_2
	if(var_394_bool == 0) goto Label_1168; // 0x48a JumpB
	var_411_bool = 0; // 0x48b PushV
	func_1173(var_392_bool, var_393_bool, var_411_bool); // 0x48c NEW_2
	if(var_411_bool == 0) goto Label_1168; // 0x48e JumpB
	var_393_bool = 1; // 0x48f MovB
	
Label_1168:
	if(var_393_bool == 0) goto Label_1171; // 0x490 JumpB
	var_392_bool = 1; // 0x491 MovB
	return 0; // 0x492 Return
	
Label_1171:
	var_392_bool = 0; // 0x493 MovB
	return 0; // 0x494 Return
}


func_1677(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x68d PushV
	var_36_bool = 0; // 0x68e PushV
	var_36_bool = 0; // 0x68f MovB
	var_37_bool = 0; // 0x690 PushV
	var_37_bool = 0; // 0x691 MovB
	var_38_object = var_15_object; // 0x692 Push
	if(var_38_object == 0) goto Label_1688; // 0x693 JumpB
	var_39_int = 4; // 0x694 PushI
	var_40_bool = var_16_int != var_39_int; // 0x695 Neq
	if(var_40_bool == 0) goto Label_1688; // 0x696 JumpB
	var_37_bool = 1; // 0x697 MovB
	
Label_1688:
	if(var_37_bool == 0) goto Label_1693; // 0x698 JumpB
	var_41_int = 5; // 0x699 PushI
	var_42_bool = var_16_int != var_41_int; // 0x69a Neq
	if(var_42_bool == 0) goto Label_1693; // 0x69b JumpB
	var_36_bool = 1; // 0x69c MovB
	
Label_1693:
	if(var_36_bool == 0) goto Label_1740; // 0x69d JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x69e PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x69f PushV
	var_46_object = var_15_object; // 0x6a0 Mov
	func_1463(var_46_object); // 0x6a1 NEW_2
	var_44_cvector = var_45_cvector; // 0x6a2 Mov
	func_1859(var_43_cvector, var_44_cvector); // 0x6a4 NEW_2
	var_27_cvector = var_43_cvector; // 0x6a5 Mov
	CreateVectorVector(var_28_object); // 0x6a7 Func
	var_29_int = 1; // 0x6a9 MovI
	
Label_1706:
	var_56_string = "hit"; // 0x6aa PushS
	var_57_int = var_56_string + var_29_int; // 0x6ab Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x6ac Func
	var_58_bool = var_30_bool == 0; // 0x6ae Not
	if(var_58_bool == 0) goto Label_1713; // 0x6af JumpB
	goto Label_1722; // 0x6b0 Jump
	
Label_1722:
	size(var_33_int); // 0x6ba ObjFunc
	var_59_int = var_33_int; // 0x6bc Push
	if(var_59_int == 0) goto Label_1739; // 0x6bd JumpB
	irand(var_34_int, var_33_int); // 0x6be Func
	get(var_35_cvector, var_34_int); // 0x6c0 ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x6c2 PushV
	var_60_object = var_15_object; // 0x6c3 Mov
	var_61_int = var_16_int; // 0x6c4 Mov
	var_62_float = var_17_float; // 0x6c5 Mov
	var_63_cvector = var_35_cvector; // 0x6c6 Mov
	var_64_cvector = -var_27_cvector; // 0x6c7 Neg2
	func_1745(var_62_float, var_63_cvector, var_64_cvector); // 0x6c8 NEW_2
	return 18; // 0x6ca Return
	
Label_1739:
	var_28_object = 0; // 0x6cb SetNull
	
Label_1740:
	var_105_object = Obj(); // 0x6cc PushV
	var_105_object = var_15_object; // 0x6cd Mov
	func_1633(var_105_object); // 0x6ce NEW_2
	return 18; // 0x6d0 Return
	
Label_1713:
	var_106_int = var_32_cvector | var_27_cvector; // 0x6b1 Or
	var_107_float = 0.70711; // 0x6b2 PushF
	var_108_bool = var_106_int >= var_107_float; // 0x6b3 GE
	if(var_108_bool == 0) goto Label_1719; // 0x6b4 JumpB
	add(var_31_cvector); // 0x6b5 ObjFunc
	
Label_1719:
	var_109_int = 1; // 0x6b7 PushI
	var_29_int = var_29_int + var_109_int; // 0x6b8 Add2
	goto Label_1706; // 0x6b9 Jump
}


func_145(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x91 TMovB
	var_1_bool = 0; // 0x92 TMovB
	Stop(); // 0x93 Func
	StopGroup0(); // 0x95 Func
	return 0; // 0x97 Return
}


func_1173(var_0_bool, var_4_bool, var_411_bool)
{
	var_412_object = Obj(); var_413_bool = 0; var_414_float = 0; var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_object = Obj(); var_418_bool = 0; var_419_float = 0; var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); // 0x495 PushV
	GetScene(var_417_object); // 0x496 Func
	var_418_bool = 0; // 0x498 MovB
	
Label_1177:
	var_422_cvector = CVector(0,0,0); var_423_object = Obj(); // 0x499 PushV
	var_423_object = var_0_bool; // 0x49a MovT
	func_1463(var_423_object); // 0x49b NEW_2
	var_428_int = -var_422_cvector; // 0x49d Neg
	FindDirLength(var_419_float, var_428_int, var_419_float); // 0x49e Func
	var_429_bool = var_419_float < var_4_bool; // 0x4a0 LT
	if(var_429_bool == 0) goto Label_1187; // 0x4a1 JumpB
	goto Label_1215; // 0x4a2 Jump
	
Label_1215:
	var_411_bool = var_418_bool; // 0x4bf Mov
	return 10; // 0x4c0 Return
	
Label_1187:
	Face(var_0_bool); // 0x4a3 Func
	var_430_string = "all"; // 0x4a5 PushS
	var_431_string = "bjump"; // 0x4a6 PushS
	PlayAnimation(var_430_string, var_431_string); // 0x4a7 Func
	GetPFPosition(var_420_cvector); // 0x4a9 TObjFunc
	GetPFPosition(var_421_cvector); // 0x4ab Func
	WaitForAnimEnd(); // 0x4ad Func
	func_1261(var_421_cvector); // 0x4b0 NEW_2
	StopAsync(); // 0x4b2 Func
	var_432_cvector = CVector(0.0, 0.0, 0.0); // 0x4b4 PushVec
	SetSpeed(var_432_cvector); // 0x4b5 Func
	var_418_bool = 1; // 0x4b7 MovB
	var_433_bool = 0; // 0x4b8 PushV
	func_1129(var_421_cvector, var_433_bool); // 0x4b9 NEW_2
	var_434_bool = var_433_bool == 0; // 0x4bb Not
	if(var_434_bool == 0) goto Label_1214; // 0x4bc JumpB
	goto Label_1215; // 0x4bd Jump
	
Label_1214:
	goto Label_1177; // 0x4be Jump
}


func_161(var_98_bool)
{
	var_98_bool = 0; // 0xa1 MovB
	return 0; // 0xa2 Return
}


func_163(var_92_object, var_93_cvector)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0xa3 PushV
	FindShiftedPathTo(var_95_object, var_93_cvector); // 0xa4 Func
	var_92_object = var_95_object; // 0xa6 Mov
	return 2; // 0xa7 Return
}


func_1218(var_0_bool, var_342_bool)
{
	var_343_bool = 0; var_344_bool = 0; // 0x4c2 PushV
	var_345_string = "IsAttacking"; // 0x4c3 PushS
	var_346_int = 1; // 0x4c4 PushI
	var_347_bool = IsFuncExist(var_0_bool, var_345_string, var_346_int); // 0x4c5 FuncExist
	if(var_347_bool == 0) goto Label_1227; // 0x4c6 JumpB
	IsAttacking(var_344_bool); // 0x4c7 TObjFunc
	var_342_bool = var_344_bool; // 0x4c9 Mov
	return 2; // 0x4ca Return
	
Label_1227:
	var_342_bool = 0; // 0x4cb MovB
	return 2; // 0x4cc Return
}


func_2250()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; // 0x8ca PushV
	var_21_int = 0; // 0x8cb PushI
	ClearSubContainer(var_21_int); // 0x8cc Func
	var_22_int = 0; // 0x8ce PushV
	func_1908(var_22_int); // 0x8cf NEW_2
	var_20_int = var_22_int; // 0x8d0 Mov
	var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0; // 0x8d2 PushV
	var_28_string = "fresh_meat"; // 0x8d3 MovS
	var_29_int = 1; // 0x8d4 MovI
	var_30_int = 4; // 0x8d5 MovI
	var_31_int = 3; // 0x8d6 MovI
	func_1797(var_28_string, var_29_int, var_30_int, var_31_int); // 0x8d7 NEW_2
	var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0; // 0x8d9 PushV
	var_44_string = "dried_meat"; // 0x8da MovS
	var_45_int = 1; // 0x8db MovI
	var_46_int = 4; // 0x8dc MovI
	var_47_int = 3; // 0x8dd MovI
	func_1797(var_44_string, var_45_int, var_46_int, var_47_int); // 0x8de NEW_2
	var_48_string = ""; var_49_int = 0; var_50_int = 0; var_51_int = 0; // 0x8e0 PushV
	var_48_string = "smoked_meat"; // 0x8e1 MovS
	var_49_int = 1; // 0x8e2 MovI
	var_50_int = 4; // 0x8e3 MovI
	var_51_int = 3; // 0x8e4 MovI
	func_1797(var_48_string, var_49_int, var_50_int, var_51_int); // 0x8e5 NEW_2
	var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0; // 0x8e7 PushV
	var_52_string = "vegetables"; // 0x8e8 MovS
	var_53_int = 1; // 0x8e9 MovI
	var_54_int = 3; // 0x8ea MovI
	var_55_int = 3; // 0x8eb MovI
	func_1797(var_52_string, var_53_int, var_54_int, var_55_int); // 0x8ec NEW_2
	var_56_int = 3; // 0x8ee PushI
	var_57_bool = var_20_int >= var_56_int; // 0x8ef GE
	if(var_57_bool == 0) goto Label_2307; // 0x8f0 JumpB
	var_58_string = ""; var_59_int = 0; var_60_int = 0; // 0x8f1 PushV
	var_58_string = "revolver_ammo"; // 0x8f2 MovS
	var_59_int = 1; // 0x8f3 MovI
	var_60_int = 5; // 0x8f4 MovI
	func_1786(var_58_string, var_59_int, var_60_int); // 0x8f5 NEW_2
	var_67_string = ""; var_68_int = 0; var_69_int = 0; // 0x8f7 PushV
	var_67_string = "rifle_ammo"; // 0x8f8 MovS
	var_68_int = 1; // 0x8f9 MovI
	var_69_int = 5; // 0x8fa MovI
	func_1786(var_67_string, var_68_int, var_69_int); // 0x8fb NEW_2
	var_70_string = ""; var_71_int = 0; var_72_int = 0; // 0x8fd PushV
	var_70_string = "samopal_ammo"; // 0x8fe MovS
	var_71_int = 1; // 0x8ff MovI
	var_72_int = 5; // 0x900 MovI
	func_1786(var_70_string, var_71_int, var_72_int); // 0x901 NEW_2
	
Label_2307:
	return 6; // 0x903 Return
}


func_1229(var_2_object, var_5_bool)
{
	var_459_float = 0; var_460_int = 0; var_461_float = 0; var_462_int = 0; // 0x4cd PushV
	var_463_bool = var_2_object == 0; // 0x4ce Not
	if(var_463_bool == 0) goto Label_1233; // 0x4cf JumpB
	return 4; // 0x4d0 Return
	
Label_1233:
	var_464_bool = var_5_bool; // 0x4d1 PushT
	if(var_464_bool == 0) goto Label_1241; // 0x4d2 JumpB
	var_465_int = -1; // 0x4d3 PushI
	var_5_bool = var_5_bool + var_465_int; // 0x4d4 Add2
	var_466_int = 0; // 0x4d5 PushI
	var_467_bool = var_5_bool > var_466_int; // 0x4d6 GT
	if(var_467_bool == 0) goto Label_1241; // 0x4d7 JumpB
	return 4; // 0x4d8 Return
	
Label_1241:
	rand(var_461_float); // 0x4d9 Func
	var_468_float = 0; // 0x4db PushV
	func_1279(var_468_float); // 0x4dc NEW_2
	var_469_bool = var_461_float < var_468_float; // 0x4de LT
	if(var_469_bool == 0) goto Label_1260; // 0x4df JumpB
	irand(var_462_int, var_461_float); // 0x4e0 Func
	var_470_int = 1; // 0x4e2 PushI
	var_462_int = var_462_int + var_470_int; // 0x4e3 Add2
	var_471_string = "attack"; // 0x4e4 PushS
	var_472_int = var_471_string + var_462_int; // 0x4e5 Add
	Speak(var_472_int); // 0x4e6 Func
	var_473_int = 0; // 0x4e8 PushV
	func_1277(var_473_int); // 0x4e9 NEW_2
	var_5_bool = var_473_int; // 0x4ea TMov
	
Label_1260:
	return 4; // 0x4ec Return
}


func_1745(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x6d1 PushV
	GetScene(var_24_object); // 0x6d2 Func
	var_26_string = "scripted"; // 0x6d4 PushS
	var_27_string = "blood_dir.xml"; // 0x6d5 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x6d6 Func
	var_28_object = Obj(); // 0x6d8 PushV
	var_28_object = var_17_object; // 0x6d9 Mov
	func_1633(var_28_object); // 0x6da NEW_2
	return 4; // 0x6dc Return
}


func_1759()
{
	var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); // 0x6df PushV
	GetPosition(var_329_cvector); // 0x6e0 ObjFunc
	GetPosition(var_330_cvector); // 0x6e2 Func
	var_331_cvector = var_329_cvector - var_330_cvector; // 0x6e4 Sub2
	var_332_float = GetByIndex(var_331_cvector, 0); // 0x6e5 PushE
	var_333_float = GetByIndex(var_331_cvector, 2); // 0x6e6 PushE
	RotateAsync(var_332_float, var_333_float); // 0x6e7 Func
	return 6; // 0x6e9 Return
}


func_1770(var_114_bool)
{
	var_115_bool = 0; var_116_bool = 0; // 0x6ea PushV
	IsLoaded(var_116_bool); // 0x6eb Func
	var_114_bool = var_116_bool; // 0x6ed Mov
	return 2; // 0x6ee Return
}


func_235()
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_bool = 0; var_105_float = 0; var_106_bool = 0; var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_bool = 0; var_112_float = 0; var_113_bool = 0; // 0xeb PushV
	WaitForAnimEnd(); // 0xec Func
	var_114_bool = 0; // 0xee PushV
	func_1770(var_114_bool); // 0xef NEW_2
	var_117_bool = var_114_bool == 0; // 0xf1 Not
	if(var_117_bool == 0) goto Label_244; // 0xf2 JumpB
	return 14; // 0xf3 Return
	
Label_244:
	var_118_int = 0; // 0xf4 PushV
	func_1944(var_118_int); // 0xf5 NEW_2
	var_107_int = var_118_int; // 0xf6 Mov
	var_108_int = 0; // 0xf8 MovI
	
Label_249:
	var_131_bool = 0; // 0xf9 PushV
	var_131_bool = 0; // 0xfa MovB
	var_132_int = 5; // 0xfb PushI
	var_133_bool = var_108_int < var_132_int; // 0xfc LT
	if(var_133_bool == 0) goto Label_259; // 0xfd JumpB
	var_134_bool = 0; // 0xfe PushV
	func_1770(var_134_bool); // 0xff NEW_2
	if(var_134_bool == 0) goto Label_259; // 0x101 JumpB
	var_131_bool = 1; // 0x102 MovB
	
Label_259:
	if(var_131_bool == 0) goto Label_311; // 0x103 JumpB
	var_135_int = 3; // 0x104 PushI
	irand(var_109_int, var_135_int); // 0x105 Func
	var_136_int = 0; // 0x107 PushI
	var_137_bool = var_109_int == var_136_int; // 0x108 Eq
	if(var_137_bool == 0) goto Label_283; // 0x109 JumpB
	var_138_int = var_107_int; // 0x10a Push
	if(var_138_int == 0) goto Label_282; // 0x10b JumpB
	irand(var_110_int, var_107_int); // 0x10c Func
	var_139_string = "all"; // 0x10e PushS
	var_140_string = ""; var_141_int = 0; // 0x10f PushV
	var_141_int = var_110_int; // 0x110 Mov
	func_1937(var_140_string, var_141_int); // 0x111 NEW_2
	PlayAnimation(var_139_string, var_140_string); // 0x113 Func
	WaitForAnimEnd(var_111_bool); // 0x115 Func
	var_142_bool = var_111_bool == 0; // 0x117 Not
	if(var_142_bool == 0) goto Label_282; // 0x118 JumpB
	goto Label_311; // 0x119 Jump
	
Label_311:
	ResetAAS(); // 0x137 Func
	return 14; // 0x139 Return
	
Label_282:
	goto Label_300; // 0x11a Jump
	
Label_300:
	var_143_bool = 0; // 0x12c PushV
	func_314(var_143_bool); // 0x12d NEW_2
	var_144_bool = var_143_bool == 0; // 0x12f Not
	if(var_144_bool == 0) goto Label_306; // 0x130 JumpB
	goto Label_311; // 0x131 Jump
	
Label_306:
	ResetAAS(); // 0x132 Func
	var_145_int = 1; // 0x134 PushI
	var_108_int = var_108_int + var_145_int; // 0x135 Add2
	goto Label_249; // 0x136 Jump
	
Label_283:
	var_146_int = 1; // 0x11b PushI
	var_147_bool = var_109_int == var_146_int; // 0x11c Eq
	if(var_147_bool == 0) goto Label_297; // 0x11d JumpB
	var_148_int = 4; // 0x11e PushI
	rand(var_112_float, var_148_int); // 0x11f Func
	var_149_int = 1; // 0x121 PushI
	var_150_int = var_112_float + var_149_int; // 0x122 Add
	Sleep(var_150_int, var_113_bool); // 0x123 Func
	var_151_bool = var_113_bool == 0; // 0x125 Not
	if(var_151_bool == 0) goto Label_296; // 0x126 JumpB
	goto Label_311; // 0x127 Jump
	
Label_296:
	goto Label_300; // 0x128 Jump
	
Label_297:
	var_152_int = var_108_int; // 0x129 Push
	if(var_152_int == 0) goto Label_300; // 0x12a JumpB
	goto Label_311; // 0x12b Jump
}


func_1261(var_0_bool)
{
	var_217_object = Obj(); // 0x4ed PushV
	var_217_object = var_0_bool; // 0x4ee MovT
	func_1917(var_217_object); // 0x4ef NEW_2
	return 0; // 0x4f1 Return
}


func_1775(var_15_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); // 0x6ef PushV
	GetEyesHeight(var_18_float); // 0x6f0 ObjFunc
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x6f2 MovV
	var_20_float = GetByIndex(var_19_cvector, 1); // 0x6f3 PushE
	var_20_float = var_18_float; // 0x6f4 Mov
	SetByIndex(var_19_cvector, 1) = var_20_float; // 0x6f5 PopE
	var_21_string = "head"; // 0x6f6 PushS
	LookAsync(var_15_object, var_21_string, var_19_cvector); // 0x6f7 Func
	return 4; // 0x6f9 Return
}


func_1266(var_552_int)
{
	var_552_int = 0; // 0x4f2 MovI
	return 0; // 0x4f3 Return
}


func_1268()
{
	var_348_string = ""; // 0x4f4 PushV
	var_348_string = "attack_stay"; // 0x4f5 MovS
	func_1812(var_348_string); // 0x4f6 NEW_2
	return 0; // 0x4f8 Return
}


func_1273()
{
	return 0; // 0x4fa Return
}


func_1786(var_58_string, var_59_int, var_60_int)
{
	var_61_bool = 0; var_62_bool = 0; // 0x6fa PushV
	var_63_bool = 0; var_64_int = 0; var_65_int = 0; // 0x6fb PushV
	var_64_int = var_59_int; // 0x6fc Mov
	var_65_int = var_60_int; // 0x6fd Mov
	func_1887(var_63_bool, var_64_int, var_65_int); // 0x6fe NEW_2
	if(var_63_bool == 0) goto Label_1796; // 0x700 JumpB
	var_66_int = 0; // 0x701 PushI
	AddItem(var_62_bool, var_58_string, var_66_int); // 0x702 Func
	
Label_1796:
	return 2; // 0x704 Return
}


func_1275(var_577_bool)
{
	var_577_bool = 1; // 0x4fb MovB
	return 0; // 0x4fc Return
}


func_1277(var_473_int)
{
	var_473_int = 1; // 0x4fd MovI
	return 0; // 0x4fe Return
}


func_1279(var_468_float)
{
	var_468_float = 0.5; // 0x4ff MovF
	return 0; // 0x500 Return
}


func_1281(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x501 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x502 Func
	var_25_bool = var_24_bool; // 0x504 Push
	if(var_25_bool == 0) goto Label_1290; // 0x505 JumpB
	func_2052(); // 0x507 NEW_2
	goto Label_1293; // 0x509 Jump
	
Label_1293:
	func_2028(); // 0x50e NEW_2
	var_158_object = Obj(); // 0x510 PushV
	var_158_object = var_22_object; // 0x511 Mov
	func_1301(var_158_object); // 0x512 NEW_2
	return 2; // 0x514 Return
	
Label_1290:
	func_2179(); // 0x50b NEW_2
}


func_2308(var_54_int, var_55_string)
{
	var_56_int = 0; var_57_int = 0; // 0x904 PushV
	GetInvItemByName(var_57_int, var_55_string); // 0x905 Func
	var_54_int = var_57_int; // 0x907 Mov
	return 2; // 0x908 Return
}


func_1797(var_28_string, var_29_int, var_30_int, var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x705 PushV
	var_36_bool = 0; var_37_int = 0; var_38_int = 0; // 0x706 PushV
	var_37_int = var_29_int; // 0x707 Mov
	var_38_int = var_30_int; // 0x708 Mov
	func_1887(var_36_bool, var_37_int, var_38_int); // 0x709 NEW_2
	if(var_36_bool == 0) goto Label_1811; // 0x70b JumpB
	irand(var_34_int, var_31_int); // 0x70c Func
	var_41_int = 0; // 0x70e PushI
	var_42_int = 1; // 0x70f PushI
	var_43_int = var_34_int + var_42_int; // 0x710 Add
	AddItem(var_35_bool, var_28_string, var_41_int, var_43_int); // 0x711 Func
	
Label_1811:
	return 4; // 0x713 Return
}


func_2313(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = ""; // 0x909 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x90a PushV
	var_26_object = var_21_object; // 0x90b Mov
	var_27_string = "class"; // 0x90c MovS
	func_1483(var_25_bool, var_26_object, var_27_string); // 0x90d NEW_2
	var_34_bool = var_25_bool == 0; // 0x90f Not
	if(var_34_bool == 0) goto Label_2323; // 0x910 JumpB
	var_20_bool = 0; // 0x911 MovB
	return 2; // 0x912 Return
	
Label_2323:
	var_35_string = "class"; // 0x913 PushS
	GetProperty(var_35_string, var_24_string); // 0x914 ObjFunc
	var_36_bool = 0; // 0x916 PushV
	var_36_bool = 1; // 0x917 MovB
	var_37_bool = 0; // 0x918 PushV
	var_37_bool = 1; // 0x919 MovB
	var_38_bool = 0; // 0x91a PushV
	var_38_bool = 1; // 0x91b MovB
	var_39_bool = 0; // 0x91c PushV
	var_39_bool = 1; // 0x91d MovB
	var_40_bool = 0; // 0x91e PushV
	var_40_bool = 1; // 0x91f MovB
	var_41_bool = 0; // 0x920 PushV
	var_41_bool = 1; // 0x921 MovB
	var_42_bool = 0; // 0x922 PushV
	var_42_bool = 1; // 0x923 MovB
	var_43_bool = 0; // 0x924 PushV
	var_43_bool = 1; // 0x925 MovB
	var_44_bool = 0; // 0x926 PushV
	var_44_bool = 1; // 0x927 MovB
	var_45_bool = 0; // 0x928 PushV
	var_45_bool = 1; // 0x929 MovB
	var_46_string = "patrol"; // 0x92a PushS
	var_47_bool = var_24_string == var_46_string; // 0x92b Eq
	if(var_47_bool == 0) goto Label_2353; // 0x92c JumpB
	var_48_string = "sanitar"; // 0x92d PushS
	var_49_bool = var_24_string == var_48_string; // 0x92e Eq
	if(var_49_bool == 0) goto Label_2353; // 0x92f JumpB
	var_45_bool = 0; // 0x930 MovB
	
Label_2353:
	if(var_45_bool == 0) goto Label_2358; // 0x931 JumpB
	var_50_string = "soldier"; // 0x932 PushS
	var_51_bool = var_24_string == var_50_string; // 0x933 Eq
	if(var_51_bool == 0) goto Label_2358; // 0x934 JumpB
	var_44_bool = 0; // 0x935 MovB
	
Label_2358:
	if(var_44_bool == 0) goto Label_2363; // 0x936 JumpB
	var_52_string = "woman"; // 0x937 PushS
	var_53_bool = var_24_string == var_52_string; // 0x938 Eq
	if(var_53_bool == 0) goto Label_2363; // 0x939 JumpB
	var_43_bool = 0; // 0x93a MovB
	
Label_2363:
	if(var_43_bool == 0) goto Label_2368; // 0x93b JumpB
	var_54_string = "wasted_girl"; // 0x93c PushS
	var_55_bool = var_24_string == var_54_string; // 0x93d Eq
	if(var_55_bool == 0) goto Label_2368; // 0x93e JumpB
	var_42_bool = 0; // 0x93f MovB
	
Label_2368:
	if(var_42_bool == 0) goto Label_2373; // 0x940 JumpB
	var_56_string = "vaxxabitka"; // 0x941 PushS
	var_57_bool = var_24_string == var_56_string; // 0x942 Eq
	if(var_57_bool == 0) goto Label_2373; // 0x943 JumpB
	var_41_bool = 0; // 0x944 MovB
	
Label_2373:
	if(var_41_bool == 0) goto Label_2378; // 0x945 JumpB
	var_58_string = "vaxxabit"; // 0x946 PushS
	var_59_bool = var_24_string == var_58_string; // 0x947 Eq
	if(var_59_bool == 0) goto Label_2378; // 0x948 JumpB
	var_40_bool = 0; // 0x949 MovB
	
Label_2378:
	if(var_40_bool == 0) goto Label_2383; // 0x94a JumpB
	var_60_string = "little_girl"; // 0x94b PushS
	var_61_bool = var_24_string == var_60_string; // 0x94c Eq
	if(var_61_bool == 0) goto Label_2383; // 0x94d JumpB
	var_39_bool = 0; // 0x94e MovB
	
Label_2383:
	if(var_39_bool == 0) goto Label_2388; // 0x94f JumpB
	var_62_string = "girl"; // 0x950 PushS
	var_63_bool = var_24_string == var_62_string; // 0x951 Eq
	if(var_63_bool == 0) goto Label_2388; // 0x952 JumpB
	var_38_bool = 0; // 0x953 MovB
	
Label_2388:
	if(var_38_bool == 0) goto Label_2393; // 0x954 JumpB
	var_64_string = "dohodyaga"; // 0x955 PushS
	var_65_bool = var_24_string == var_64_string; // 0x956 Eq
	if(var_65_bool == 0) goto Label_2393; // 0x957 JumpB
	var_37_bool = 0; // 0x958 MovB
	
Label_2393:
	if(var_37_bool == 0) goto Label_2398; // 0x959 JumpB
	var_66_string = "nudegirl"; // 0x95a PushS
	var_67_bool = var_24_string == var_66_string; // 0x95b Eq
	if(var_67_bool == 0) goto Label_2398; // 0x95c JumpB
	var_36_bool = 0; // 0x95d MovB
	
Label_2398:
	if(var_36_bool == 0) goto Label_2401; // 0x95e JumpB
	var_20_bool = 1; // 0x95f MovB
	return 2; // 0x960 Return
	
Label_2401:
	var_68_bool = var_22_bool; // 0x961 Push
	if(var_68_bool == 0) goto Label_2405; // 0x962 JumpB
	var_20_bool = 0; // 0x963 MovB
	return 2; // 0x964 Return
	
Label_2405:
	var_20_bool = 1; // 0x965 MovB
	var_69_bool = 0; // 0x966 PushV
	var_69_bool = 1; // 0x967 MovB
	var_70_bool = 0; // 0x968 PushV
	var_70_bool = 1; // 0x969 MovB
	var_71_bool = 0; // 0x96a PushV
	var_71_bool = 1; // 0x96b MovB
	var_72_bool = 0; // 0x96c PushV
	var_72_bool = 1; // 0x96d MovB
	var_73_bool = 0; // 0x96e PushV
	var_73_bool = 1; // 0x96f MovB
	var_74_string = "worker"; // 0x970 PushS
	var_75_bool = var_24_string == var_74_string; // 0x971 Eq
	if(var_75_bool == 0) goto Label_2423; // 0x972 JumpB
	var_76_string = "butcher"; // 0x973 PushS
	var_77_bool = var_24_string == var_76_string; // 0x974 Eq
	if(var_77_bool == 0) goto Label_2423; // 0x975 JumpB
	var_73_bool = 0; // 0x976 MovB
	
Label_2423:
	if(var_73_bool == 0) goto Label_2428; // 0x977 JumpB
	var_78_string = "boy"; // 0x978 PushS
	var_79_bool = var_24_string == var_78_string; // 0x979 Eq
	if(var_79_bool == 0) goto Label_2428; // 0x97a JumpB
	var_72_bool = 0; // 0x97b MovB
	
Label_2428:
	if(var_72_bool == 0) goto Label_2433; // 0x97c JumpB
	var_80_string = "unosha"; // 0x97d PushS
	var_81_bool = var_24_string == var_80_string; // 0x97e Eq
	if(var_81_bool == 0) goto Label_2433; // 0x97f JumpB
	var_71_bool = 0; // 0x980 MovB
	
Label_2433:
	if(var_71_bool == 0) goto Label_2438; // 0x981 JumpB
	var_82_string = "wasted_male"; // 0x982 PushS
	var_83_bool = var_24_string == var_82_string; // 0x983 Eq
	if(var_83_bool == 0) goto Label_2438; // 0x984 JumpB
	var_70_bool = 0; // 0x985 MovB
	
Label_2438:
	if(var_70_bool == 0) goto Label_2443; // 0x986 JumpB
	var_84_string = "alkash"; // 0x987 PushS
	var_85_bool = var_24_string == var_84_string; // 0x988 Eq
	if(var_85_bool == 0) goto Label_2443; // 0x989 JumpB
	var_69_bool = 0; // 0x98a MovB
	
Label_2443:
	if(var_69_bool == 0) goto Label_2448; // 0x98b JumpB
	var_86_string = "morlok"; // 0x98c PushS
	var_87_bool = var_24_string == var_86_string; // 0x98d Eq
	if(var_87_bool == 0) goto Label_2448; // 0x98e JumpB
	var_20_bool = 0; // 0x98f MovB
	
Label_2448:
	return 2; // 0x990 Return
}


func_1812(var_182_string)
{
	var_183_bool = 0; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_bool = 0; var_188_float = 0; var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_bool = 0; var_192_int = 0; var_193_bool = 0; var_194_int = 0; var_195_bool = 0; var_196_float = 0; var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); // 0x714 PushV
	IsExisting3DSound(var_191_bool, var_182_string); // 0x715 Func
	var_199_bool = var_191_bool == 0; // 0x717 Not
	if(var_199_bool == 0) goto Label_1837; // 0x718 JumpB
	var_192_int = 0; // 0x719 MovI
	
Label_1818:
	var_200_int = 1; // 0x71a PushI
	var_201_int = var_192_int + var_200_int; // 0x71b Add
	var_202_int = var_182_string + var_201_int; // 0x71c Add
	IsExisting3DSound(var_193_bool, var_202_int); // 0x71d Func
	var_203_bool = var_193_bool == 0; // 0x71f Not
	if(var_203_bool == 0) goto Label_1826; // 0x720 JumpB
	goto Label_1829; // 0x721 Jump
	
Label_1829:
	var_204_bool = var_192_int == 0; // 0x725 Not
	if(var_204_bool == 0) goto Label_1832; // 0x726 JumpB
	return 16; // 0x727 Return
	
Label_1832:
	irand(var_194_int, var_192_int); // 0x728 Func
	var_205_int = 1; // 0x72a PushI
	var_206_int = var_194_int + var_205_int; // 0x72b Add
	var_182_string = var_182_string + var_206_int; // 0x72c Add2
	
Label_1837:
	Is3DSoundLoaded(var_195_bool, var_182_string); // 0x72d Func
	var_207_bool = var_195_bool; // 0x72f Push
	if(var_207_bool == 0) goto Label_1852; // 0x730 JumpB
	GetEyesHeight(var_196_float); // 0x731 Func
	GetDirection(var_197_cvector); // 0x733 Func
	var_208_int = 50; // 0x735 PushI
	var_198_cvector = var_197_cvector * var_208_int; // 0x736 Mult2
	var_209_float = GetByIndex(var_198_cvector, 1); // 0x737 PushE
	var_209_float = var_209_float + var_196_float; // 0x738 Add2
	SetByIndex(var_198_cvector, 1) = var_209_float; // 0x739 PopE
	PlayGlobalSound(var_182_string, var_198_cvector); // 0x73a Func
	
Label_1852:
	return 16; // 0x73c Return
	
Label_1826:
	var_210_int = 1; // 0x722 PushI
	var_192_int = var_192_int + var_210_int; // 0x723 Add2
	goto Label_1818; // 0x724 Jump
}


func_1301(var_158_object)
{
	EventDisable(0); // 0x516 EventDisable
	var_159_object = Obj(); // 0x517 PushV
	var_159_object = var_158_object; // 0x518 Mov
	func_1326(var_159_object); // 0x519 NEW_2
	var_239_int = 50; // 0x51b PushI
	var_240_int = 40; // 0x51c PushI
	SetRTEnvelope(var_239_int, var_240_int); // 0x51d Func
	EventEnable(0); // 0x51f EventEnable
	
Label_1312:
	Hold(); // 0x520 Func
	goto Label_1312; // 0x522 Jump
}


func_1326(var_159_object)
{
	var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_string = ""; var_165_object = Obj(); var_166_bool = 0; var_167_bool = 0; var_168_float = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_string = ""; var_175_object = Obj(); var_176_bool = 0; var_177_bool = 0; var_178_float = 0; var_179_cvector = CVector(0,0,0); // 0x52e PushV
	var_180_bool = var_159_object == 0; // 0x52f NullEq
	if(var_180_bool == 0) goto Label_1334; // 0x530 JumpB
	var_181_string = ""; // 0x531 PushV
	var_181_string = "fdie"; // 0x532 MovS
	func_1417(var_181_string); // 0x533 NEW_2
	goto Label_1416; // 0x535 Jump
	
Label_1416:
	return 20; // 0x588 Return
	
Label_1334:
	GetPosition(var_170_cvector); // 0x536 ObjFunc
	GetPosition(var_171_cvector); // 0x538 Func
	GetDirection(var_172_cvector); // 0x53a Func
	var_173_cvector = var_171_cvector - var_170_cvector; // 0x53c Sub2
	var_213_float = GetByIndex(var_173_cvector, 0); // 0x53d PushE
	var_214_float = GetByIndex(var_172_cvector, 0); // 0x53e PushE
	var_215_float = var_213_float * var_214_float; // 0x53f Mult
	var_216_float = GetByIndex(var_173_cvector, 2); // 0x540 PushE
	var_217_float = GetByIndex(var_172_cvector, 2); // 0x541 PushE
	var_218_float = var_216_float * var_217_float; // 0x542 Mult
	var_219_int = var_215_float + var_218_float; // 0x543 Add
	var_220_int = 0; // 0x544 PushI
	var_221_bool = var_219_int >= var_220_int; // 0x545 GE
	if(var_221_bool == 0) goto Label_1353; // 0x546 JumpB
	var_174_string = "fdie"; // 0x547 MovS
	goto Label_1354; // 0x548 Jump
	
Label_1354:
	RemoveRTEnvelope(); // 0x54a Func
	SetDeathState(); // 0x54c Func
	Stop(); // 0x54e Func
	StopAsync(); // 0x550 Func
	var_175_object = var_159_object; // 0x552 Mov
	var_222_string = "GetScriptProperty"; // 0x553 PushS
	var_223_int = 2; // 0x554 PushI
	var_224_bool = IsFuncExist(var_159_object, var_222_string, var_223_int); // 0x555 FuncExist
	if(var_224_bool == 0) goto Label_1378; // 0x556 JumpB
	var_225_string = "Owner"; // 0x557 PushS
	HasScriptProperty(var_176_bool, var_225_string); // 0x558 ObjFunc
	var_226_bool = var_176_bool; // 0x55a Push
	if(var_226_bool == 0) goto Label_1378; // 0x55b JumpB
	var_227_string = "Owner"; // 0x55c PushS
	GetScriptProperty(var_175_object, var_227_string); // 0x55d ObjFunc
	var_228_bool = var_175_object == 0; // 0x55f NullEq
	if(var_228_bool == 0) goto Label_1378; // 0x560 JumpB
	var_175_object = var_159_object; // 0x561 Mov
	
Label_1378:
	var_229_string = "@GetEyesHeight"; // 0x562 PushS
	var_230_int = 1; // 0x563 PushI
	var_231_bool = IsFuncExist(var_175_object, var_229_string, var_230_int); // 0x564 FuncExist
	if(var_231_bool == 0) goto Label_1393; // 0x565 JumpB
	GetEyesHeight(var_178_float); // 0x566 ObjFunc
	var_179_cvector = CVector(0.0, 0.0, 0.0); // 0x568 MovV
	var_232_float = GetByIndex(var_179_cvector, 1); // 0x569 PushE
	var_232_float = var_178_float; // 0x56a Mov
	SetByIndex(var_179_cvector, 1) = var_232_float; // 0x56b PopE
	var_233_string = "head"; // 0x56c PushS
	LookAsync(var_159_object, var_233_string, var_179_cvector); // 0x56d Func
	var_177_bool = 1; // 0x56f MovB
	goto Label_1394; // 0x570 Jump
	
Label_1394:
	var_234_string = ""; // 0x572 PushV
	var_234_string = var_174_string; // 0x573 Mov
	func_1812(var_234_string); // 0x574 NEW_2
	var_235_string = "all"; // 0x576 PushS
	PlayAnimation(var_235_string, var_174_string); // 0x577 Func
	WaitForAnimEnd(); // 0x579 Func
	var_236_bool = var_177_bool; // 0x57b Push
	if(var_236_bool == 0) goto Label_1410; // 0x57c JumpB
	StopAsync(); // 0x57d Func
	var_237_string = "head"; // 0x57f PushS
	UnlookAsync(var_237_string); // 0x580 Func
	
Label_1410:
	var_238_string = "all"; // 0x582 PushS
	LockAnimationEnd(var_238_string, var_174_string); // 0x583 Func
	RemoveEnvelope(); // 0x585 Func
	var_175_object = 0; // 0x587 SetNull
	
Label_1393:
	var_177_bool = 0; // 0x571 MovB
	
Label_1353:
	var_174_string = "bdie"; // 0x549 MovS
}


func_314(var_143_bool)
{
	var_143_bool = 1; // 0x13a MovB
	return 0; // 0x13b Return
}


func_316()
{
	StopAnimation(); // 0x13c Func
	StopGroup0(); // 0x13e Func
	return 0; // 0x140 Return
}


func_1853(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x73d PushV
	self(var_19_object); // 0x73e Func
	var_17_object = var_19_object; // 0x740 Mov
	return 2; // 0x741 Return
}


func_1859(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x743 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x744 Or
	var_52_float = sqrt(var_53_int); // 0x745 Sqrt2
	var_54_float = 0.0; // 0x746 PushF
	var_55_bool = var_52_float < var_54_float; // 0x747 LT
	if(var_55_bool == 0) goto Label_1867; // 0x748 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x749 MovV
	return 2; // 0x74a Return
	
Label_1867:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x74b Div2
	return 2; // 0x74c Return
}


func_1869(var_529_float, var_530_float, var_531_float)
{
	var_534_bool = var_530_float < var_531_float; // 0x74e LT
	if(var_534_bool == 0) goto Label_1874; // 0x74f JumpB
	var_529_float = var_530_float; // 0x750 Mov
	goto Label_1875; // 0x751 Jump
	
Label_1875:
	return 0; // 0x753 Return
	
Label_1874:
	var_529_float = var_531_float; // 0x752 Mov
}


func_335(var_2_object, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool)
{
	var_233_bool = 0; var_234_bool = 0; var_235_bool = 0; var_236_bool = 0; // 0x14f PushV
	var_237_object = Obj(); // 0x150 PushV
	var_237_object = var_225_object; // 0x151 Mov
	func_1917(var_237_object); // 0x152 NEW_2
	var_238_int = 1; // 0x154 PushI
	var_239_int = 5; // 0x155 PushI
	SetTimer(var_238_int, var_239_int); // 0x156 Func
	CanSee(var_235_bool, var_225_object); // 0x158 Func
	var_240_bool = var_235_bool; // 0x15a Push
	if(var_240_bool == 0) goto Label_354; // 0x15b JumpB
	var_2_object = 1; // 0x15c TMovB
	var_241_object = Obj(); // 0x15d PushV
	var_241_object = var_225_object; // 0x15e Mov
	func_1775(var_241_object); // 0x15f NEW_2
	goto Label_355; // 0x161 Jump
	
Label_355:
	var_248_bool = 0; var_249_object = Obj(); // 0x163 PushV
	var_249_object = var_225_object; // 0x164 Mov
	func_1478(var_248_bool, var_249_object); // 0x165 NEW_2
	if(var_248_bool == 0) goto Label_365; // 0x167 JumpB
	var_250_object = Obj(); // 0x168 PushV
	func_1853(var_250_object); // 0x169 NEW_2
	SendPlayerEnemy(var_225_object, var_250_object); // 0x16b Func
	
Label_365:
	var_251_bool = 0; var_252_object = Obj(); var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_bool = 0; // 0x16d PushV
	var_252_object = var_225_object; // 0x16e Mov
	var_253_float = var_226_float; // 0x16f Mov
	var_254_float = var_227_float; // 0x170 Mov
	var_255_bool = var_228_bool; // 0x171 Mov
	var_256_bool = var_229_bool; // 0x172 Mov
	func_440(var_235_bool, var_236_bool, var_251_bool, var_252_object, var_253_float, var_254_float, var_255_bool, var_256_bool); // 0x173 NEW_2
	var_236_bool = var_251_bool; // 0x174 Mov
	var_302_object = var_2_object; // 0x176 PushT
	if(var_302_object == 0) goto Label_379; // 0x177 JumpB
	var_303_string = "head"; // 0x178 PushS
	UnlookAsync(var_303_string); // 0x179 Func
	
Label_379:
	var_304_int = 1; // 0x17b PushI
	KillTimer(var_304_int); // 0x17c Func
	var_224_bool = var_236_bool; // 0x17e Mov
	return 4; // 0x17f Return
	
Label_354:
	var_2_object = 0; // 0x162 TMovB
}


func_848(var_1_bool, var_2_object, var_4_bool)
{
	var_180_bool = 0; var_181_bool = 0; var_182_cvector = CVector(0,0,0); var_183_bool = 0; var_184_bool = 0; var_185_cvector = CVector(0,0,0); // 0x350 PushV
	var_1_bool = 0; // 0x351 TMovI
	
Label_850:
	var_186_string = "all"; // 0x352 PushS
	var_187_string = "attack_begin"; // 0x353 PushS
	var_188_int = 1; // 0x354 PushI
	var_189_int = var_1_bool + var_188_int; // 0x355 Add
	var_190_int = var_187_string + var_189_int; // 0x356 Add
	HasAnimation(var_183_bool, var_186_string, var_190_int); // 0x357 Func
	var_191_bool = var_183_bool == 0; // 0x359 Not
	if(var_191_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_863; // 0x35b Jump
	
Label_863:
	var_2_object = 0; // 0x35f TMovI
	
Label_864:
	var_192_string = "attack"; // 0x360 PushS
	var_193_int = 1; // 0x361 PushI
	var_194_int = var_2_object + var_193_int; // 0x362 Add
	var_195_int = var_192_string + var_194_int; // 0x363 Add
	IsExisting3DSound(var_184_bool, var_195_int); // 0x364 Func
	var_196_bool = var_184_bool == 0; // 0x366 Not
	if(var_196_bool == 0) goto Label_873; // 0x367 JumpB
	goto Label_876; // 0x368 Jump
	
Label_876:
	var_197_string = "all"; // 0x36c PushS
	var_198_string = "bjump"; // 0x36d PushS
	GetAnimationOffset(var_185_cvector, var_197_string, var_198_string); // 0x36e Func
	var_199_float = GetByIndex(var_185_cvector, 2); // 0x370 PushE
	var_4_bool = -var_199_float; // 0x371 Neg2
	return 6; // 0x372 Return
	
Label_873:
	var_200_int = 1; // 0x369 PushI
	var_2_object = var_2_object + var_200_int; // 0x36a Add2
	goto Label_864; // 0x36b Jump
	
Label_860:
	var_201_int = 1; // 0x35c PushI
	var_1_bool = var_1_bool + var_201_int; // 0x35d Add2
	goto Label_850; // 0x35e Jump
}


func_1876(var_539_float, var_540_float, var_541_float, var_542_float)
{
	var_543_bool = var_540_float < var_541_float; // 0x755 LT
	if(var_543_bool == 0) goto Label_1881; // 0x756 JumpB
	var_539_float = var_541_float; // 0x757 Mov
	return 0; // 0x758 Return
	
Label_1881:
	var_544_bool = var_540_float > var_542_float; // 0x759 GT
	if(var_544_bool == 0) goto Label_1885; // 0x75a JumpB
	var_539_float = var_542_float; // 0x75b Mov
	return 0; // 0x75c Return
	
Label_1885:
	var_539_float = var_540_float; // 0x75d Mov
	return 0; // 0x75e Return
}


func_1887(var_36_bool, var_37_int, var_38_int)
{
	var_39_int = 0; var_40_int = 0; // 0x75f PushV
	irand(var_40_int, var_38_int); // 0x760 Func
	var_36_bool = var_40_int < var_37_int; // 0x762 LT2
	return 2; // 0x763 Return
}


func_1892(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x764 PushV
	CreateObjectSet(var_14_object); // 0x765 Func
	var_12_object = var_14_object; // 0x767 Mov
	return 2; // 0x768 Return
}


func_1898(var_547_float)
{
	var_548_object = Obj(); var_549_object = Obj(); // 0x76a PushV
	CreateFloatVector(var_549_object); // 0x76b Func
	add(var_547_float); // 0x76d ObjFunc
	var_550_int = 15; // 0x76f PushI
	SendWorldWndMessage(var_550_int, var_549_object); // 0x770 Func
	return 2; // 0x772 Return
}


func_883(var_0_bool, var_477_float, var_478_int)
{
	var_479_object = Obj(); var_480_float = 0; var_481_float = 0; var_482_object = Obj(); var_483_float = 0; var_484_float = 0; // 0x373 PushV
	var_485_float = 0.9; // 0x374 PushF
	var_486_float = var_477_float * var_485_float; // 0x375 Mult
	GetVictim(var_486_float, var_482_object); // 0x376 Func
	ReportAttack(var_0_bool); // 0x378 Func
	var_487_bool = var_482_object == var_0_bool; // 0x37a Eq
	if(var_487_bool == 0) goto Label_920; // 0x37b JumpB
	var_488_float = 0; var_489_object = Obj(); var_490_int = 0; // 0x37c PushV
	var_489_object = var_482_object; // 0x37d Mov
	var_490_int = var_478_int; // 0x37e Mov
	func_599(var_490_int); // 0x37f NEW_2
	var_483_float = var_488_float; // 0x380 Mov
	var_491_float = 0; var_492_object = Obj(); var_493_float = 0; var_494_int = 0; // 0x382 PushV
	var_492_object = var_482_object; // 0x383 Mov
	var_493_float = var_483_float; // 0x384 Mov
	var_495_int = 0; var_496_object = Obj(); var_497_int = 0; // 0x385 PushV
	var_496_object = var_482_object; // 0x386 Mov
	var_497_int = var_478_int; // 0x387 Mov
	func_602(var_497_int); // 0x388 NEW_2
	var_494_int = var_495_int; // 0x389 Mov
	func_1495(var_491_float, var_492_object, var_493_float, var_494_int); // 0x38b NEW_2
	var_484_float = var_491_float; // 0x38c Mov
	var_552_int = 0; // 0x38e PushV
	func_1266(var_552_int); // 0x38f NEW_2
	ReportHit(var_0_bool, var_552_int, var_484_float, var_483_float); // 0x391 Func
	var_553_object = Obj(); var_554_float = 0; // 0x393 PushV
	var_553_object = var_482_object; // 0x394 Mov
	var_554_float = var_484_float; // 0x395 Mov
	func_1273(); // 0x396 NEW_2
	
Label_920:
	return 6; // 0x398 Return
}


func_1908(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x774 PushV
	GetGameTime(var_24_float); // 0x775 Func
	var_25_int = 1; // 0x777 PushI
	var_26_int = 0; // 0x778 PushV
	var_27_int = 24; // 0x779 PushI
	var_26_int = var_24_float / var_24_float; // 0x77a Div2
	var_22_int = var_25_int + var_26_int; // 0x77b Add2
	return 2; // 0x77c Return
}


func_1917(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x77d PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x77e Func
	var_17_bool = var_16_bool; // 0x780 Push
	if(var_17_bool == 0) goto Label_1925; // 0x781 JumpB
	var_18_string = "attack"; // 0x782 PushS
	PlayGlobalMusic(var_18_string); // 0x783 Func
	
Label_1925:
	return 2; // 0x785 Return
}


func_1926()
{
	var_452_object = Obj(); var_453_object = Obj(); // 0x786 PushV
	GetScene(var_453_object); // 0x787 Func
	var_454_string = "battle"; // 0x789 PushS
	var_455_object = Obj(); // 0x78a PushV
	func_1853(var_455_object); // 0x78b NEW_2
	BroadcastMessage(var_454_string, var_455_object, var_453_object); // 0x78d Func
	return 2; // 0x78f Return
}


func_1417(var_181_string)
{
	RemoveRTEnvelope(); // 0x58a Func
	SetDeathState(); // 0x58c Func
	Stop(); // 0x58e Func
	StopAsync(); // 0x590 Func
	StopSecondaryAnimation(); // 0x592 Func
	var_182_string = ""; // 0x594 PushV
	var_182_string = var_181_string; // 0x595 Mov
	func_1812(var_182_string); // 0x596 NEW_2
	var_211_string = "all"; // 0x598 PushS
	PlayAnimation(var_211_string, var_181_string); // 0x599 Func
	WaitForAnimEnd(); // 0x59b Func
	var_212_string = "all"; // 0x59d PushS
	LockAnimationEnd(var_212_string, var_181_string); // 0x59e Func
	RemoveEnvelope(); // 0x5a0 Func
	return 0; // 0x5a2 Return
}


func_398(var_2_bool)
{
	var_12_int = 1; // 0x18e PushI
	KillTimer(var_12_int); // 0x18f Func
	var_13_bool = var_2_bool; // 0x191 PushT
	if(var_13_bool == 0) goto Label_407; // 0x192 JumpB
	var_2_bool = 0; // 0x193 TMovB
	var_14_string = "head"; // 0x194 PushS
	UnlookAsync(var_14_string); // 0x195 Func
	
Label_407:
	func_564(var_11_int); // 0x198 NEW_2
	return 0; // 0x19a Return
}


func_2449()
{
	var_11_object = GlobalVars[0]; // 0x991 PushGE
	var_12_object = Obj(); // 0x992 PushV
	func_1892(var_12_object); // 0x993 NEW_2
	var_11_object = var_12_object; // 0x994 Mov
	GlobalVars[0] = var_11_object; // 0x996 PopGE
	return 0; // 0x997 Return
}


func_1937(var_124_string, var_125_int)
{
	var_126_string = ""; var_127_string = ""; // 0x791 PushV
	var_127_string = "idle"; // 0x792 MovS
	var_128_int = var_125_int; // 0x793 Push
	if(var_128_int == 0) goto Label_1942; // 0x794 JumpB
	var_127_string = var_127_string + var_125_int; // 0x795 Add2
	
Label_1942:
	var_124_string = var_127_string; // 0x796 Mov
	return 2; // 0x797 Return
}


func_2456(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x999 PushV
	var_15_object = var_13_object; // 0x99a Mov
	func_2622(var_14_bool, var_15_object); // 0x99b NEW_2
	var_12_bool = var_14_bool; // 0x99c Mov
	return 0; // 0x99e Return
}


func_1944(var_118_int)
{
	var_119_int = 0; var_120_bool = 0; var_121_int = 0; var_122_bool = 0; // 0x798 PushV
	var_121_int = 0; // 0x799 MovI
	
Label_1946:
	var_123_string = "all"; // 0x79a PushS
	var_124_string = ""; var_125_int = 0; // 0x79b PushV
	var_125_int = var_121_int; // 0x79c Mov
	func_1937(var_124_string, var_125_int); // 0x79d NEW_2
	HasAnimation(var_122_bool, var_123_string, var_124_string); // 0x79f Func
	var_129_bool = var_122_bool == 0; // 0x7a1 Not
	if(var_129_bool == 0) goto Label_1956; // 0x7a2 JumpB
	goto Label_1959; // 0x7a3 Jump
	
Label_1959:
	var_118_int = var_121_int; // 0x7a7 Mov
	return 4; // 0x7a8 Return
	
Label_1956:
	var_130_int = 1; // 0x7a4 PushI
	var_121_int = var_121_int + var_130_int; // 0x7a5 Add2
	goto Label_1946; // 0x7a6 Jump
}


func_922(var_0_bool, var_440_bool, var_441_float)
{
	var_442_int = 0; var_443_bool = 0; var_444_int = 0; var_445_string = ""; var_446_int = 0; var_447_bool = 0; var_448_int = 0; var_449_string = ""; // 0x39a PushV
	func_1261(var_449_string); // 0x39c NEW_2
	irand(var_446_int, var_449_string); // 0x39e Func
	var_450_int = 1; // 0x3a0 PushI
	var_446_int = var_446_int + var_450_int; // 0x3a1 Add2
	Face(var_0_bool); // 0x3a2 Func
	var_451_bool = 1; // 0x3a4 PushB
	SetAttackState(var_451_bool); // 0x3a5 Func
	func_1926(); // 0x3a8 NEW_2
	var_456_string = "all"; // 0x3aa PushS
	var_457_string = "attack_begin"; // 0x3ab PushS
	var_458_int = var_457_string + var_446_int; // 0x3ac Add
	PlayAnimation(var_456_string, var_458_int); // 0x3ad Func
	WaitForAnimEnd(); // 0x3af Func
	func_1229(var_448_int, var_449_string); // 0x3b2 NEW_2
	var_474_bool = 0; var_475_object = Obj(); // 0x3b4 PushV
	var_475_object = var_0_bool; // 0x3b5 MovT
	func_1609(var_474_bool, var_475_object); // 0x3b6 NEW_2
	var_476_bool = var_474_bool == 0; // 0x3b8 Not
	if(var_476_bool == 0) goto Label_958; // 0x3b9 JumpB
	StopAsync(); // 0x3ba Func
	var_440_bool = 0; // 0x3bc MovB
	return 8; // 0x3bd Return
	
Label_958:
	var_477_float = 0; var_478_int = 0; // 0x3be PushV
	var_477_float = var_441_float; // 0x3bf Mov
	var_478_int = var_446_int; // 0x3c0 Mov
	func_883(var_449_string, var_477_float, var_478_int); // 0x3c1 NEW_2
	var_555_string = "all"; // 0x3c3 PushS
	var_556_string = "attack_middle"; // 0x3c4 PushS
	var_557_int = var_556_string + var_446_int; // 0x3c5 Add
	HasAnimation(var_447_bool, var_555_string, var_557_int); // 0x3c6 Func
	var_558_bool = var_447_bool; // 0x3c8 Push
	if(var_558_bool == 0) goto Label_1039; // 0x3c9 JumpB
	func_1926(); // 0x3cb NEW_2
	var_559_string = "all"; // 0x3cd PushS
	var_560_string = "attack_middle"; // 0x3ce PushS
	var_561_int = var_560_string + var_446_int; // 0x3cf Add
	PlayAnimation(var_559_string, var_561_int); // 0x3d0 Func
	WaitForAnimEnd(); // 0x3d2 Func
	func_1261(var_449_string); // 0x3d5 NEW_2
	var_562_bool = 0; var_563_object = Obj(); // 0x3d7 PushV
	var_563_object = var_0_bool; // 0x3d8 MovT
	func_1609(var_562_bool, var_563_object); // 0x3d9 NEW_2
	var_564_bool = var_562_bool == 0; // 0x3db Not
	if(var_564_bool == 0) goto Label_993; // 0x3dc JumpB
	StopAsync(); // 0x3dd Func
	var_440_bool = 0; // 0x3df MovB
	return 8; // 0x3e0 Return
	
Label_993:
	var_565_float = 0; var_566_int = 0; // 0x3e1 PushV
	var_565_float = var_441_float; // 0x3e2 Mov
	var_566_int = var_446_int; // 0x3e3 Mov
	func_883(var_449_string, var_565_float, var_566_int); // 0x3e4 NEW_2
	var_448_int = 1; // 0x3e6 MovI
	
Label_999:
	var_567_string = "attack_middle"; // 0x3e7 PushS
	var_568_int = var_567_string + var_446_int; // 0x3e8 Add
	var_569_string = "_"; // 0x3e9 PushS
	var_570_int = var_568_int + var_569_string; // 0x3ea Add
	var_449_string = var_570_int + var_448_int; // 0x3eb Add2
	var_571_string = "all"; // 0x3ec PushS
	HasAnimation(var_447_bool, var_571_string, var_449_string); // 0x3ed Func
	var_572_bool = var_447_bool == 0; // 0x3ef Not
	if(var_572_bool == 0) goto Label_1010; // 0x3f0 JumpB
	goto Label_1039; // 0x3f1 Jump
	
Label_1039:
	var_573_bool = 0; // 0x40f PushB
	SetAttackState(var_573_bool); // 0x410 Func
	var_574_string = "all"; // 0x412 PushS
	var_575_string = "attack_end"; // 0x413 PushS
	var_576_int = var_575_string + var_446_int; // 0x414 Add
	PlayAnimation(var_574_string, var_576_int); // 0x415 Func
	var_577_bool = 0; // 0x417 PushV
	func_1275(var_577_bool); // 0x418 NEW_2
	if(var_577_bool == 0) goto Label_1057; // 0x41a JumpB
	var_578_bool = 0; var_579_float = 0; // 0x41b PushV
	var_579_float = 0.75; // 0x41c MovF
	func_1059(var_578_bool, var_579_float); // 0x41d NEW_2
	StopAsync(); // 0x41f Func
	
Label_1057:
	var_440_bool = 1; // 0x421 MovB
	return 8; // 0x422 Return
	
Label_1010:
	func_1926(); // 0x3f3 NEW_2
	var_587_string = "all"; // 0x3f5 PushS
	PlayAnimation(var_587_string, var_449_string); // 0x3f6 Func
	WaitForAnimEnd(); // 0x3f8 Func
	func_1261(var_449_string); // 0x3fb NEW_2
	var_588_bool = 0; var_589_object = Obj(); // 0x3fd PushV
	var_589_object = var_0_bool; // 0x3fe MovT
	func_1609(var_588_bool, var_589_object); // 0x3ff NEW_2
	var_590_bool = var_588_bool == 0; // 0x401 Not
	if(var_590_bool == 0) goto Label_1031; // 0x402 JumpB
	StopAsync(); // 0x403 Func
	var_440_bool = 0; // 0x405 MovB
	return 8; // 0x406 Return
	
Label_1031:
	var_591_float = 0; var_592_int = 0; // 0x407 PushV
	var_591_float = var_441_float; // 0x408 Mov
	var_592_int = var_446_int; // 0x409 Mov
	func_883(var_449_string, var_591_float, var_592_int); // 0x40a NEW_2
	var_593_int = 1; // 0x40c PushI
	var_448_int = var_448_int + var_593_int; // 0x40d Add2
	goto Label_999; // 0x40e Jump
}


func_2463(var_76_object)
{
	var_77_object = Obj(); // 0x9a0 PushV
	var_77_object = var_76_object; // 0x9a1 Mov
	func_2482(var_77_object); // 0x9a2 NEW_2
	return 0; // 0x9a4 Return
}


func_2469(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x9a6 PushV
	var_15_object = var_13_object; // 0x9a7 Mov
	func_2622(var_14_bool, var_15_object); // 0x9a8 NEW_2
	var_12_bool = var_14_bool; // 0x9a9 Mov
	return 0; // 0x9ab Return
}


func_1449(var_519_string, var_520_int)
{
	var_521_int = 2; // 0x5aa PushI
	var_522_bool = var_520_int == var_521_int; // 0x5ab Eq
	if(var_522_bool == 0) goto Label_1456; // 0x5ac JumpB
	var_519_string = "fire"; // 0x5ad MovS
	return 0; // 0x5ae Return
	
Label_1456:
	var_523_int = 1; // 0x5b0 PushI
	var_524_bool = var_520_int == var_523_int; // 0x5b1 Eq
	if(var_524_bool == 0) goto Label_1461; // 0x5b2 JumpB
	var_519_string = "bullet"; // 0x5b3 MovS
	return 0; // 0x5b4 Return
	
Label_1461:
	var_519_string = "phys"; // 0x5b5 MovS
	return 0; // 0x5b6 Return
}


func_1961(var_138_int)
{
	var_139_int = 0; var_140_int = 0; // 0x7a9 PushV
	var_141_string = "branch"; // 0x7aa PushS
	GetVariable(var_141_string, var_140_int); // 0x7ab Func
	var_138_int = var_140_int; // 0x7ad Mov
	return 2; // 0x7ae Return
}


func_2476(var_76_object)
{
	var_77_object = Obj(); // 0x9ad PushV
	var_77_object = var_76_object; // 0x9ae Mov
	func_2482(var_77_object); // 0x9af NEW_2
	return 0; // 0x9b1 Return
}


func_1967(var_15_object)
{
	var_16_int = 0; // 0x7b0 PushV
	func_1961(var_16_int); // 0x7b1 NEW_2
	var_20_int = 1; // 0x7b3 PushI
	var_21_bool = var_16_int == var_20_int; // 0x7b4 Eq
	if(var_21_bool == 0) goto Label_1977; // 0x7b5 JumpB
	WorkWithCorpse(var_15_object); // 0x7b6 Func
	goto Label_1979; // 0x7b8 Jump
	
Label_1979:
	return 0; // 0x7bb Return
	
Label_1977:
	Barter(var_15_object); // 0x7b9 Func
}


func_2482(var_77_object)
{
	var_78_object = Obj(); var_79_bool = 0; // 0x9b3 PushV
	var_78_object = var_77_object; // 0x9b4 Mov
	var_79_bool = 1; // 0x9b5 MovB
	TaskCall(3); // 0x9b6 TaskCall
	func_591(var_78_object, var_79_bool); // 0x9b7 NEW_2
	TaskReturn(); // 0x9b8 TaskReturn
	ResetAAS(); // 0x9ba Func
	return 0; // 0x9bc Return
}


func_1463(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x5b7 PushV
	GetPosition(var_49_cvector); // 0x5b8 Func
	GetPosition(var_50_cvector); // 0x5ba ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x5bc Sub2
	return 4; // 0x5bd Return
}


func_440(var_0_bool, var_1_bool, var_251_bool, var_252_object, var_253_float, var_254_float, var_255_bool, var_256_bool)
{
	var_257_bool = 0; var_258_bool = 0; var_259_object = Obj(); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_float = 0; var_264_object = Obj(); var_265_bool = 0; var_266_bool = 0; var_267_object = Obj(); var_268_cvector = CVector(0,0,0); var_269_cvector = CVector(0,0,0); var_270_cvector = CVector(0,0,0); var_271_float = 0; var_272_object = Obj(); // 0x1b8 PushV
	var_0_bool = 0; // 0x1b9 TMovB
	var_1_bool = var_252_object; // 0x1ba TMov
	var_266_bool = var_256_bool; // 0x1bb Mov
	
Label_444:
	var_273_bool = 0; var_274_object = Obj(); // 0x1bc PushV
	var_274_object = var_252_object; // 0x1bd Mov
	func_580(var_273_bool, var_274_object); // 0x1be NEW_2
	var_277_bool = var_273_bool == 0; // 0x1c0 Not
	if(var_277_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_251_bool = 0; // 0x1c2 MovB
	return 16; // 0x1c3 Return
	
Label_452:
	GetPosition(var_268_cvector); // 0x1c4 ObjFunc
	GetPosition(var_269_cvector); // 0x1c6 Func
	var_270_cvector = var_268_cvector - var_269_cvector; // 0x1c8 Sub2
	var_271_float = var_270_cvector | var_270_cvector; // 0x1c9 Or2
	var_278_bool = 0; // 0x1ca PushV
	var_278_bool = 0; // 0x1cb MovB
	var_279_int = 0; // 0x1cc PushI
	var_280_bool = var_254_float > var_279_int; // 0x1cd GT
	if(var_280_bool == 0) goto Label_467; // 0x1ce JumpB
	var_281_float = var_254_float * var_254_float; // 0x1cf Mult
	var_282_bool = var_271_float > var_281_float; // 0x1d0 GT
	if(var_282_bool == 0) goto Label_467; // 0x1d1 JumpB
	var_278_bool = 1; // 0x1d2 MovB
	
Label_467:
	if(var_278_bool == 0) goto Label_472; // 0x1d3 JumpB
	Stop(); // 0x1d4 Func
	var_251_bool = 0; // 0x1d6 MovB
	return 16; // 0x1d7 Return
	
Label_472:
	var_283_float = var_253_float * var_253_float; // 0x1d8 Mult
	var_284_bool = var_271_float > var_283_float; // 0x1d9 GT
	if(var_284_bool == 0) goto Label_534; // 0x1da JumpB
	GetPFPosition(var_268_cvector); // 0x1db ObjFunc
	FindPathTo(var_272_object, var_268_cvector); // 0x1dd Func
	var_285_bool = var_272_object != 0; // 0x1df NullNeq
	if(var_285_bool == 0) goto Label_483; // 0x1e0 JumpB
	var_267_object = var_272_object; // 0x1e1 Mov
	var_272_object = 0; // 0x1e2 SetNull
	
Label_483:
	var_286_bool = var_267_object != 0; // 0x1e3 NullNeq
	if(var_286_bool == 0) goto Label_516; // 0x1e4 JumpB
	var_287_bool = var_266_bool; // 0x1e5 Push
	if(var_287_bool == 0) goto Label_493; // 0x1e6 JumpB
	var_266_bool = 0; // 0x1e7 MovB
	RotatePath(var_267_object, var_265_bool); // 0x1e8 Func
	var_288_bool = var_265_bool == 0; // 0x1ea Not
	if(var_288_bool == 0) goto Label_493; // 0x1eb JumpB
	goto Label_540; // 0x1ec Jump
	
Label_540:
	var_251_bool = !var_0_bool; // 0x21c Not2
	return 16; // 0x21d Return
	
Label_493:
	var_289_int = 0; // 0x1ed PushI
	var_290_float = 0.3; // 0x1ee PushF
	SetTimer(var_289_int, var_290_float); // 0x1ef Func
	var_291_string = ""; // 0x1f1 PushV
	func_587(var_291_string); // 0x1f2 NEW_2
	var_292_string = ""; // 0x1f4 PushV
	func_589(var_292_string); // 0x1f5 NEW_2
	FollowPath(var_267_object, var_255_bool, var_265_bool, var_291_string, var_292_string); // 0x1f7 Func
	var_293_bool = var_265_bool == 0; // 0x1f9 Not
	if(var_293_bool == 0) goto Label_514; // 0x1fa JumpB
	var_294_bool = var_0_bool; // 0x1fb PushT
	if(var_294_bool == 0) goto Label_512; // 0x1fc JumpB
	var_267_object = 0; // 0x1fd SetNull
	goto Label_540; // 0x1fe Jump
	
Label_512:
	goto Label_539; // 0x200 Jump
	
Label_539:
	goto Label_444; // 0x21b Jump
	
Label_514:
	var_267_object = 0; // 0x202 SetNull
	goto Label_532; // 0x203 Jump
	
Label_532:
	var_272_object = 0; // 0x214 SetNull
	goto Label_538; // 0x215 Jump
	
Label_538:
	var_267_object = 0; // 0x21a SetNull
	
Label_516:
	var_295_int = 0; // 0x204 PushI
	KillTimer(var_295_int); // 0x205 Func
	var_296_float = 0.5; // 0x207 PushF
	Sleep(var_296_float, var_265_bool); // 0x208 Func
	var_297_bool = var_265_bool == 0; // 0x20a Not
	if(var_297_bool == 0) goto Label_528; // 0x20b JumpB
	var_298_bool = var_0_bool; // 0x20c PushT
	if(var_298_bool == 0) goto Label_528; // 0x20d JumpB
	var_267_object = 0; // 0x20e SetNull
	goto Label_540; // 0x20f Jump
	
Label_528:
	var_299_int = 0; // 0x210 PushI
	var_300_float = 0.3; // 0x211 PushF
	SetTimer(var_299_int, var_300_float); // 0x212 Func
	
Label_534:
	var_301_int = 0; // 0x216 PushI
	KillTimer(var_301_int); // 0x217 Func
	goto Label_540; // 0x219 Jump
}


func_1980(var_39_int, var_40_int)
{
	var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; // 0x7bc PushV
	var_48_bool = var_39_int > var_40_int; // 0x7bd GT
	if(var_48_bool == 0) goto Label_1987; // 0x7be JumpB
	var_49_string = "GenerateMoney: iMin > iMax"; // 0x7bf PushS
	Trace(var_49_string); // 0x7c0 Func
	return 4; // 0x7c2 Return
	
Label_1987:
	var_46_int = 0; // 0x7c3 MovI
	var_50_bool = var_39_int != var_40_int; // 0x7c4 Neq
	if(var_50_bool == 0) goto Label_1994; // 0x7c5 JumpB
	var_51_int = var_40_int - var_39_int; // 0x7c6 Sub
	irand(var_46_int, var_51_int); // 0x7c7 Func
	goto Label_1998; // 0x7c9 Jump
	
Label_1998:
	var_46_int = var_46_int + var_39_int; // 0x7ce Add2
	var_52_int = 0; // 0x7cf PushI
	var_53_bool = var_46_int == var_52_int; // 0x7d0 Eq
	if(var_53_bool == 0) goto Label_2003; // 0x7d1 JumpB
	return 4; // 0x7d2 Return
	
Label_2003:
	var_54_int = 0; var_55_string = ""; // 0x7d3 PushV
	var_55_string = "Money"; // 0x7d4 MovS
	func_2308(var_54_int, var_55_string); // 0x7d5 NEW_2
	var_58_int = 0; // 0x7d7 PushI
	AddItem(var_47_bool, var_54_int, var_58_int, var_46_int); // 0x7d8 Func
	return 4; // 0x7da Return
	
Label_1994:
	var_59_int = 0; // 0x7ca PushI
	var_60_bool = var_39_int == var_59_int; // 0x7cb Eq
	if(var_60_bool == 0) goto Label_1998; // 0x7cc JumpB
	return 4; // 0x7cd Return
}


func_2493(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x9bd PushV
	var_15_bool = var_12_object == 0; // 0x9be NullEq
	if(var_15_bool == 0) goto Label_2497; // 0x9bf JumpB
	return 2; // 0x9c0 Return
	
Label_2497:
	var_16_object = GlobalVars[0]; // 0x9c1 PushGE
	in(var_14_bool, var_12_object); // 0x9c2 ObjFunc
	var_17_bool = var_14_bool == 0; // 0x9c4 Not
	if(var_17_bool == 0) goto Label_2505; // 0x9c5 JumpB
	var_18_object = GlobalVars[0]; // 0x9c6 PushGE
	add(var_12_object); // 0x9c7 ObjFunc
	
Label_2505:
	var_19_bool = 0; var_20_object = Obj(); // 0x9c9 PushV
	var_20_object = var_12_object; // 0x9ca Mov
	func_1478(var_19_bool, var_20_object); // 0x9cb NEW_2
	if(var_19_bool == 0) goto Label_2516; // 0x9cd JumpB
	var_23_object = Obj(); // 0x9ce PushV
	func_1853(var_23_object); // 0x9cf NEW_2
	var_26_float = -0.07; // 0x9d1 PushF
	ReportReputationChange(var_12_object, var_23_object, var_26_float); // 0x9d2 Func
	
Label_2516:
	return 2; // 0x9d4 Return
}


func_1470(var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x5be PushV
	GetPosition(var_95_cvector); // 0x5bf Func
	GetPosition(var_96_cvector); // 0x5c1 ObjFunc
	var_97_cvector = var_96_cvector - var_95_cvector; // 0x5c3 Sub2
	var_90_float = var_97_cvector | var_97_cvector; // 0x5c4 Or2
	return 6; // 0x5c5 Return
}


func_1478(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x5c6 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x5c7 Func
	var_13_bool = var_16_bool; // 0x5c9 Mov
	return 2; // 0x5ca Return
}


func_1483(var_25_bool, var_26_object, var_27_string)
{
	var_28_bool = 0; var_29_bool = 0; // 0x5cb PushV
	var_30_string = "HasProperty"; // 0x5cc PushS
	var_31_int = 2; // 0x5cd PushI
	var_32_bool = IsFuncExist(var_26_object, var_30_string, var_31_int); // 0x5ce FuncExist
	var_33_bool = var_32_bool == 0; // 0x5cf Not
	if(var_33_bool == 0) goto Label_1491; // 0x5d0 JumpB
	var_25_bool = 0; // 0x5d1 MovB
	return 2; // 0x5d2 Return
	
Label_1491:
	HasProperty(var_27_string, var_29_bool); // 0x5d3 ObjFunc
	var_25_bool = var_29_bool; // 0x5d5 Mov
	return 2; // 0x5d6 Return
}


func_2517(var_145_object)
{
	var_146_object = Obj(); // 0x9d6 PushV
	var_146_object = var_145_object; // 0x9d7 Mov
	func_2493(var_146_object); // 0x9d8 NEW_2
	var_147_object = Obj(); var_148_bool = 0; // 0x9da PushV
	var_147_object = var_145_object; // 0x9db Mov
	var_148_bool = 1; // 0x9dc MovB
	TaskCall(3); // 0x9dd TaskCall
	func_591(var_147_object, var_148_bool); // 0x9de NEW_2
	TaskReturn(); // 0x9df TaskReturn
	ResetAAS(); // 0x9e1 Func
	return 0; // 0x9e3 Return
}


func_1495(var_491_float, var_492_object, var_493_float, var_494_int)
{
	var_498_int = 0; var_499_string = ""; var_500_int = 0; var_501_float = 0; var_502_float = 0; var_503_float = 0; var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_float = 0; var_508_float = 0; var_509_float = 0; // 0x5d7 PushV
	var_510_bool = 0; var_511_object = Obj(); var_512_string = ""; // 0x5d8 PushV
	var_511_object = var_492_object; // 0x5d9 Mov
	var_512_string = "health"; // 0x5da MovS
	func_1483(var_510_bool, var_511_object, var_512_string); // 0x5db NEW_2
	var_513_bool = var_510_bool == 0; // 0x5dd Not
	if(var_513_bool == 0) goto Label_1505; // 0x5de JumpB
	var_491_float = 0.0; // 0x5df MovF
	return 12; // 0x5e0 Return
	
Label_1505:
	var_514_bool = 0; var_515_object = Obj(); var_516_string = ""; // 0x5e1 PushV
	var_515_object = var_492_object; // 0x5e2 Mov
	var_516_string = "armor"; // 0x5e3 MovS
	func_1483(var_514_bool, var_515_object, var_516_string); // 0x5e4 NEW_2
	var_517_bool = var_514_bool == 0; // 0x5e6 Not
	if(var_517_bool == 0) goto Label_1514; // 0x5e7 JumpB
	var_504_int = 0; // 0x5e8 MovI
	goto Label_1517; // 0x5e9 Jump
	
Label_1517:
	var_518_string = "armor_"; // 0x5ed PushS
	var_519_string = ""; var_520_int = 0; // 0x5ee PushV
	var_520_int = var_494_int; // 0x5ef Mov
	func_1449(var_519_string, var_520_int); // 0x5f0 NEW_2
	var_505_string = var_518_string + var_519_string; // 0x5f2 Add2
	var_525_bool = 0; var_526_object = Obj(); var_527_string = ""; // 0x5f3 PushV
	var_526_object = var_492_object; // 0x5f4 Mov
	var_527_string = var_505_string; // 0x5f5 Mov
	func_1483(var_525_bool, var_526_object, var_527_string); // 0x5f6 NEW_2
	var_528_bool = var_525_bool == 0; // 0x5f8 Not
	if(var_528_bool == 0) goto Label_1532; // 0x5f9 JumpB
	var_506_int = 0; // 0x5fa MovI
	goto Label_1534; // 0x5fb Jump
	
Label_1534:
	var_529_float = 0; var_530_float = 0; var_531_float = 0; // 0x5fe PushV
	var_532_int = var_504_int + var_506_int; // 0x5ff Add
	var_533_float = 100.0; // 0x600 PushF
	var_530_float = var_532_int / var_532_int; // 0x601 Div2
	var_531_float = 1; // 0x602 MovI
	func_1869(var_529_float, var_530_float, var_531_float); // 0x603 NEW_2
	var_507_float = var_529_float; // 0x604 Mov
	var_535_string = "health"; // 0x606 PushS
	GetProperty(var_535_string, var_508_float); // 0x607 ObjFunc
	var_536_int = 1; // 0x609 PushI
	var_537_int = var_536_int - var_507_float; // 0x60a Sub
	var_509_float = var_493_float * var_537_int; // 0x60b Mult2
	var_538_string = "health"; // 0x60c PushS
	var_539_float = 0; var_540_float = 0; var_541_float = 0; var_542_float = 0; // 0x60d PushV
	var_540_float = var_508_float - var_509_float; // 0x60e Sub2
	var_541_float = 0; // 0x60f MovI
	var_542_float = 1; // 0x610 MovI
	func_1876(var_539_float, var_540_float, var_541_float, var_542_float); // 0x611 NEW_2
	SetProperty(var_538_string, var_539_float); // 0x613 ObjFunc
	var_545_bool = 0; var_546_object = Obj(); // 0x615 PushV
	var_546_object = var_492_object; // 0x616 Mov
	func_1478(var_545_bool, var_546_object); // 0x617 NEW_2
	if(var_545_bool == 0) goto Label_1566; // 0x619 JumpB
	var_547_float = 0; // 0x61a PushV
	var_547_float = -var_509_float; // 0x61b Neg2
	func_1898(var_547_float); // 0x61c NEW_2
	
Label_1566:
	var_491_float = var_509_float; // 0x61e Mov
	return 12; // 0x61f Return
	
Label_1532:
	GetProperty(var_505_string, var_506_int); // 0x5fc ObjFunc
	
Label_1514:
	var_551_string = "armor"; // 0x5ea PushS
	GetProperty(var_551_string, var_504_int); // 0x5eb ObjFunc
}


func_2011(var_144_string)
{
	var_145_object = Obj(); var_146_int = 0; var_147_bool = 0; var_148_object = Obj(); var_149_int = 0; var_150_bool = 0; // 0x7db PushV
	CreateInvItem(var_148_object); // 0x7dc Func
	SetItemName(var_144_string); // 0x7de ObjFunc
	var_151_string = "Organ"; // 0x7e0 PushS
	var_152_int = 1; // 0x7e1 PushI
	SetProperty(var_151_string, var_152_int); // 0x7e2 ObjFunc
	GetItemID(var_149_int); // 0x7e4 ObjFunc
	var_153_int = 0; // 0x7e6 PushI
	var_154_int = 1; // 0x7e7 PushI
	AddItem(var_150_bool, var_148_object, var_153_int, var_154_int); // 0x7e8 Func
	return 6; // 0x7ea Return
}


func_2532(var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x9e5 PushV
	var_14_object = var_12_object; // 0x9e6 Mov
	func_1478(var_13_bool, var_14_object); // 0x9e7 NEW_2
	if(var_13_bool == 0) goto Label_2545; // 0x9e9 JumpB
	var_17_object = Obj(); // 0x9ea PushV
	func_1853(var_17_object); // 0x9eb NEW_2
	var_20_float = -0.13; // 0x9ed PushF
	var_21_bool = 1; // 0x9ee PushB
	ReportReputationChange(var_12_object, var_17_object, var_20_float, var_21_bool); // 0x9ef Func
	
Label_2545:
	var_22_object = Obj(); // 0x9f1 PushV
	var_22_object = var_12_object; // 0x9f2 Mov
	TaskCall(4); // 0x9f3 TaskCall
	func_1281(var_22_object); // 0x9f4 NEW_2
	TaskReturn(); // 0x9f5 TaskReturn
	return 0; // 0x9f7 Return
}


func_2028()
{
	var_138_int = 0; // 0x7ec PushV
	func_1961(var_138_int); // 0x7ed NEW_2
	var_142_int = 1; // 0x7ef PushI
	var_143_bool = var_138_int != var_142_int; // 0x7f0 Neq
	if(var_143_bool == 0) goto Label_2035; // 0x7f1 JumpB
	return 0; // 0x7f2 Return
	
Label_2035:
	var_144_string = ""; // 0x7f3 PushV
	var_144_string = "liver"; // 0x7f4 MovS
	func_2011(var_144_string); // 0x7f5 NEW_2
	var_155_string = ""; // 0x7f7 PushV
	var_155_string = "kidney"; // 0x7f8 MovS
	func_2011(var_155_string); // 0x7f9 NEW_2
	var_156_string = ""; // 0x7fb PushV
	var_156_string = "heart"; // 0x7fc MovS
	func_2011(var_156_string); // 0x7fd NEW_2
	var_157_string = ""; // 0x7ff PushV
	var_157_string = "blood"; // 0x800 MovS
	func_2011(var_157_string); // 0x801 NEW_2
	return 0; // 0x803 Return
}


