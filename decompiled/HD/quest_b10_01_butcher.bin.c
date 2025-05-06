task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_cvector, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 1; // 0x9b PushI
	if(var_18_int == 0) goto Label_264; // 0x9c JumpB
	func_1903(); // 0x9e NEW_2
	var_20_int = 23053; // 0xa0 PushI
	var_21_bool = var_16_object == var_20_int; // 0xa1 Eq
	if(var_21_bool == 0) goto Label_183; // 0xa2 JumpB
	var_22_string = ""; // 0xa3 PushV
	var_22_string = "Neutral"; // 0xa4 MovS
	func_132(var_17_bool, var_22_string); // 0xa5 NEW_2
	var_39_int = 521881; // 0xa7 PushI
	SetMessage(var_39_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_40_int = 522417; // 0xac PushI
	var_41_int = 23585; // 0xad PushI
	var_42_int = 23584; // 0xae PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xaf TObjFunc
	var_43_int = 521882; // 0xb1 PushI
	var_44_int = -1; // 0xb2 PushI
	var_45_int = 23054; // 0xb3 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_46_int = 23585; // 0xb7 PushI
	var_47_bool = var_16_object == var_46_int; // 0xb8 Eq
	if(var_47_bool == 0) goto Label_206; // 0xb9 JumpB
	var_48_string = ""; // 0xba PushV
	var_48_string = "Neutral"; // 0xbb MovS
	func_132(var_17_bool, var_48_string); // 0xbc NEW_2
	var_49_int = 522418; // 0xbe PushI
	SetMessage(var_49_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_50_int = 522419; // 0xc3 PushI
	var_51_int = -1; // 0xc4 PushI
	var_52_int = 23586; // 0xc5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xc6 TObjFunc
	var_53_int = 522420; // 0xc8 PushI
	var_54_int = 23589; // 0xc9 PushI
	var_55_int = 23587; // 0xca PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_56_int = 23589; // 0xce PushI
	var_57_bool = var_16_object == var_56_int; // 0xcf Eq
	if(var_57_bool == 0) goto Label_229; // 0xd0 JumpB
	var_58_string = ""; // 0xd1 PushV
	var_58_string = "Neutral"; // 0xd2 MovS
	func_132(var_17_bool, var_58_string); // 0xd3 NEW_2
	var_59_int = 522422; // 0xd5 PushI
	SetMessage(var_59_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_60_int = 522423; // 0xda PushI
	var_61_int = 23588; // 0xdb PushI
	var_62_int = 23590; // 0xdc PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xdd TObjFunc
	var_63_int = 522424; // 0xdf PushI
	var_64_int = -1; // 0xe0 PushI
	var_65_int = 23591; // 0xe1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_66_int = 23588; // 0xe5 PushI
	var_67_bool = var_16_object == var_66_int; // 0xe6 Eq
	if(var_67_bool == 0) goto Label_252; // 0xe7 JumpB
	var_68_string = ""; // 0xe8 PushV
	var_68_string = "Neutral"; // 0xe9 MovS
	func_132(var_17_bool, var_68_string); // 0xea NEW_2
	var_69_int = 522421; // 0xec PushI
	SetMessage(var_69_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_70_int = 522426; // 0xf1 PushI
	var_71_int = -1; // 0xf2 PushI
	var_72_int = 23593; // 0xf3 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xf4 TObjFunc
	var_73_int = 522425; // 0xf6 PushI
	var_74_int = -1; // 0xf7 PushI
	var_75_int = 23592; // 0xf8 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_3_string = 1; // 0xfc TMovB
	var_76_bool = 0; // 0xfd PushV
	func_2123(var_76_bool); // 0xfe NEW_2
	if(var_76_bool == 0) goto Label_260; // 0x100 JumpB
	lshStopAnimation(); // 0x101 Func
	goto Label_262; // 0x103 Jump
	
Label_262:
	return 0; // 0x106 Return
	
Label_260:
	StopAnimation(); // 0x104 Func
	
Label_264:
	return 0; // 0x108 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x10a PushV
	var_19_int = 0; var_20_object = Obj(); // 0x10b PushV
	var_20_object = var_16_bool; // 0x10c Mov
	TaskCall(0); // 0x10d TaskCall
	func_0(var_21_object, var_19_int, var_20_object); // 0x10e NEW_2
	TaskReturn(); // 0x10f TaskReturn
	IsPlayerActor(var_16_bool, var_18_bool); // 0x111 Func
	var_149_bool = var_18_bool; // 0x113 Push
	if(var_149_bool == 0) goto Label_283; // 0x114 JumpB
	var_150_object = Obj(); // 0x115 PushV
	var_150_object = var_16_bool; // 0x116 Mov
	TaskCall(3); // 0x117 TaskCall
	func_381(var_150_object); // 0x118 NEW_2
	TaskReturn(); // 0x119 TaskReturn
	
Label_283:
	return 2; // 0x11b Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x11c PushV
	IsPlayerActor(var_16_bool, var_18_bool); // 0x11d Func
	var_19_bool = var_18_bool; // 0x11f Push
	if(var_19_bool == 0) goto Label_295; // 0x120 JumpB
	var_20_object = Obj(); // 0x121 PushV
	var_20_object = var_16_bool; // 0x122 Mov
	TaskCall(3); // 0x123 TaskCall
	func_381(var_20_object); // 0x124 NEW_2
	TaskReturn(); // 0x125 TaskReturn
	
Label_295:
	return 2; // 0x127 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_17_int = 1; // 0x453 PushI
	var_18_bool = var_16_int == var_17_int; // 0x454 Eq
	if(var_18_bool == 0) goto Label_1115; // 0x455 JumpB
	var_19_object = Obj(); // 0x456 PushV
	var_19_object = var_1_object; // 0x457 MovT
	func_2018(var_19_object); // 0x458 NEW_2
	goto Label_1119; // 0x45a Jump
	
Label_1119:
	return 0; // 0x45f Return
	
Label_1115:
	var_24_int = 0; // 0x45b PushV
	var_24_int = var_16_int; // 0x45c Mov
	func_1264(var_15_bool, var_16_int, var_24_int); // 0x45d NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x46e PushV
	var_17_bool = 0; // 0x46f MovB
	var_18_bool = var_1_object == var_16_object; // 0x470 Eq
	if(var_18_bool == 0) goto Label_1141; // 0x471 JumpB
	var_19_bool = var_2_object == 0; // 0x472 Not
	if(var_19_bool == 0) goto Label_1141; // 0x473 JumpB
	var_17_bool = 1; // 0x474 MovB
	
Label_1141:
	if(var_17_bool == 0) goto Label_1147; // 0x475 JumpB
	var_2_object = 1; // 0x476 TMovB
	var_20_object = Obj(); // 0x477 PushV
	var_20_object = var_16_object; // 0x478 Mov
	func_1892(var_20_object); // 0x479 NEW_2
	
Label_1147:
	return 0; // 0x47b Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x47d PushV
	var_17_bool = 0; // 0x47e MovB
	var_18_bool = var_1_object == var_16_object; // 0x47f Eq
	if(var_18_bool == 0) goto Label_1156; // 0x480 JumpB
	var_19_object = var_2_object; // 0x481 PushT
	if(var_19_object == 0) goto Label_1156; // 0x482 JumpB
	var_17_bool = 1; // 0x483 MovB
	
Label_1156:
	if(var_17_bool == 0) goto Label_1161; // 0x484 JumpB
	var_2_object = 0; // 0x485 TMovB
	var_20_string = "head"; // 0x486 PushS
	UnlookAsync(var_20_string); // 0x487 Func
	
Label_1161:
	return 0; // 0x489 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object); // 0x503 Func
	return 0; // 0x505 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1120(var_16_object); // 0x50f NEW_2
	var_21_object = Obj(); // 0x511 PushV
	var_21_object = var_16_object; // 0x512 Mov
	func_2180(); // 0x513 NEW_2
	return 0; // 0x515 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x530 PushV
	IsOverrideActive(var_18_bool); // 0x531 Func
	var_19_bool = var_18_bool == 0; // 0x533 Not
	if(var_19_bool == 0) goto Label_1337; // 0x534 JumpB
	var_20_object = Obj(); // 0x535 PushV
	var_20_object = var_16_object; // 0x536 Mov
	func_2061(var_20_object); // 0x537 NEW_2
	
Label_1337:
	return 2; // 0x539 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0; // 0x5b0 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0; // 0x5b2 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0; // 0x5b4 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x866 PushV
	var_20_object = var_16_object; // 0x867 Mov
	var_21_int = var_17_int; // 0x868 Mov
	var_22_float = var_18_float; // 0x869 Mov
	func_1681(var_20_object, var_21_int, var_22_float); // 0x86a NEW_2
	return 0; // 0x86c Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x86e PushV
	var_22_object = var_16_object; // 0x86f Mov
	var_23_int = var_17_int; // 0x870 Mov
	var_24_float = var_18_float; // 0x871 Mov
	var_25_cvector = var_20_cvector; // 0x872 Mov
	var_26_cvector = var_21_cvector; // 0x873 Mov
	func_1749(var_24_float, var_25_cvector, var_26_cvector); // 0x874 NEW_2
	return 0; // 0x876 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x877 PushV
	var_20_string = "health"; // 0x878 PushS
	var_21_bool = var_17_string == var_20_string; // 0x879 Eq
	if(var_21_bool == 0) goto Label_2179; // 0x87a JumpB
	var_22_string = "health"; // 0x87b PushS
	GetProperty(var_22_string, var_19_float); // 0x87c Func
	var_23_int = 0; // 0x87e PushI
	var_24_bool = var_19_float <= var_23_int; // 0x87f LE
	if(var_24_bool == 0) goto Label_2179; // 0x880 JumpB
	SignalDeath(var_16_object); // 0x881 Func
	
Label_2179:
	return 2; // 0x883 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0x885 PushV
	var_17_object = var_16_object; // 0x886 Mov
	func_2125(var_17_object); // 0x887 NEW_2
	return 0; // 0x889 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0x128 PushV
	GetPFPosition(var_23_object); // 0x129 Func
	GetDirection(var_0_object); // 0x12b Func
	
Label_301:
	func_380(); // 0x12e NEW_2
	var_24_int = 10; // 0x130 PushI
	irand(var_20_int, var_24_int); // 0x131 Func
	var_25_int = 5; // 0x133 PushI
	var_26_int = var_20_int + var_25_int; // 0x134 Add
	Sleep(var_26_int, var_21_bool); // 0x135 Func
	var_27_bool = var_21_bool; // 0x137 Push
	if(var_27_bool == 0) goto Label_317; // 0x138 JumpB
	func_265(); // 0x13a NEW_2
	goto Label_378; // 0x13c Jump
	
Label_378:
	goto Label_301; // 0x17a Jump
	
Label_317:
	func_380(); // 0x13e NEW_2
	GetPFPosition(var_22_cvector); // 0x140 Func
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x142 PushV
	var_29_cvector = var_1_object; // 0x143 MovT
	var_30_cvector = var_22_cvector; // 0x144 Mov
	func_1967(var_28_float, var_29_cvector, var_30_cvector); // 0x145 NEW_2
	var_33_int = 40000; // 0x147 PushI
	var_34_bool = var_28_float > var_33_int; // 0x148 GT
	if(var_34_bool == 0) goto Label_364; // 0x149 JumpB
	FindPathTo(var_23_object, var_23_object); // 0x14a Func
	var_35_bool = var_23_object != 0; // 0x14c NullNeq
	if(var_35_bool == 0) goto Label_359; // 0x14d JumpB
	RotatePath(var_23_object, var_21_bool); // 0x14e Func
	var_36_bool = var_21_bool == 0; // 0x150 Not
	if(var_36_bool == 0) goto Label_339; // 0x151 JumpB
	goto Label_377; // 0x152 Jump
	
Label_377:
	goto Label_317; // 0x179 Jump
	
Label_339:
	var_37_bool = 0; // 0x153 PushB
	FollowPath(var_23_object, var_37_bool, var_21_bool); // 0x154 Func
	var_38_bool = var_21_bool == 0; // 0x156 Not
	if(var_38_bool == 0) goto Label_345; // 0x157 JumpB
	goto Label_377; // 0x158 Jump
	
Label_345:
	var_39_float = GetByIndex(var_0_object, 0); // 0x159 PushE
	var_40_float = GetByIndex(var_0_object, 2); // 0x15a PushE
	Rotate(var_39_float, var_40_float, var_21_bool); // 0x15b Func
	var_41_bool = var_21_bool == 0; // 0x15d Not
	if(var_41_bool == 0) goto Label_352; // 0x15e JumpB
	goto Label_377; // 0x15f Jump
	
Label_352:
	WaitForAnimEnd(var_21_bool); // 0x160 Func
	var_42_bool = var_21_bool == 0; // 0x162 Not
	if(var_42_bool == 0) goto Label_357; // 0x163 JumpB
	goto Label_377; // 0x164 Jump
	
Label_357:
	goto Label_378; // 0x165 Jump
	
Label_359:
	var_43_int = 1; // 0x167 PushI
	Sleep(var_43_int); // 0x168 Func
	var_23_object = 0; // 0x16a SetNull
	goto Label_377; // 0x16b Jump
	
Label_364:
	var_44_float = GetByIndex(var_0_object, 0); // 0x16c PushE
	var_45_float = GetByIndex(var_0_object, 2); // 0x16d PushE
	Rotate(var_44_float, var_45_float, var_21_bool); // 0x16e Func
	var_46_bool = var_21_bool == 0; // 0x170 Not
	if(var_46_bool == 0) goto Label_371; // 0x171 JumpB
	goto Label_377; // 0x172 Jump
	
Label_371:
	WaitForAnimEnd(var_21_bool); // 0x173 Func
	var_47_bool = var_21_bool == 0; // 0x175 Not
	if(var_47_bool == 0) goto Label_376; // 0x176 JumpB
	goto Label_377; // 0x177 Jump
	
Label_376:
	goto Label_378; // 0x178 Jump
}


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x0 PushV
	var_0_object = var_20_object; // 0x1 TMov
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x2 PushV
	var_31_object = var_20_object; // 0x3 Mov
	var_32_float = 70.0; // 0x4 MovF
	func_1774(var_31_object, var_32_float); // 0x5 NEW_2
	var_77_bool = var_30_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_19_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_26_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_2117(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_2115(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_2119(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_2121(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_2038(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_28_int = -1; // 0x26 MovI
	IsOverrideActive(var_27_bool); // 0x27 Func
	var_90_bool = var_27_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_19_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_26_object); // 0x2d Func
	var_91_object = Obj(); var_92_object = Obj(); // 0x2f PushV
	var_91_object = var_20_object; // 0x30 Mov
	var_92_object = var_26_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_29_bool); // 0x36 ObjFunc
	
Label_56:
	var_140_bool = var_29_bool == 0; // 0x38 Not
	if(var_140_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_29_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_141_object = Obj(); // 0x3f PushV
	var_141_object = var_20_object; // 0x40 Mov
	func_1843(); // 0x41 NEW_2
	StopDialog(var_26_object); // 0x43 Func
	GetReturnValue(var_28_int); // 0x45 ObjFunc
	var_19_int = var_28_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1286(var_0_object)
{
	var_0_object = 1; // 0x506 TMovB
	var_20_int = 0; // 0x507 PushI
	KillTimer(var_20_int); // 0x508 Func
	Stop(); // 0x50a Func
	return 0; // 0x50c Return
}


func_2055(var_26_int)
{
	var_27_int = 0; var_28_int = 0; // 0x807 PushV
	var_29_string = "branch"; // 0x808 PushS
	GetVariable(var_29_string, var_28_int); // 0x809 Func
	var_26_int = var_28_int; // 0x80b Mov
	return 2; // 0x80c Return
}


func_265()
{
	return 0; // 0x109 Return
}


func_2061(var_20_object)
{
	var_21_int = 0; // 0x80e PushV
	func_2055(var_21_int); // 0x80f NEW_2
	var_25_int = 1; // 0x811 PushI
	var_26_bool = var_21_int == var_25_int; // 0x812 Eq
	if(var_26_bool == 0) goto Label_2071; // 0x813 JumpB
	WorkWithCorpse(var_20_object); // 0x814 Func
	goto Label_2073; // 0x816 Jump
	
Label_2073:
	return 0; // 0x819 Return
	
Label_2071:
	Barter(var_20_object); // 0x817 Func
}


func_1037(var_0_object)
{
	var_123_object = Obj(); // 0x40d PushV
	var_123_object = var_0_object; // 0x40e MovT
	func_2018(var_123_object); // 0x40f NEW_2
	return 0; // 0x411 Return
}


func_1042(var_464_int)
{
	var_464_int = 0; // 0x412 MovI
	return 0; // 0x413 Return
}


func_1044()
{
	var_256_string = ""; // 0x414 PushV
	var_256_string = "attack_stay"; // 0x415 MovS
	func_1910(var_256_string); // 0x416 NEW_2
	return 0; // 0x418 Return
}


func_1302(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x517 PushV
	var_30_object = var_28_object; // 0x518 Mov
	func_1613(var_29_bool, var_30_object); // 0x519 NEW_2
	var_27_bool = var_29_bool; // 0x51a Mov
	return 0; // 0x51c Return
}


func_1049()
{
	return 0; // 0x41a Return
}


func_2074(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; // 0x81a PushV
	CreateInvItem(var_36_object); // 0x81b Func
	SetItemName(var_32_string); // 0x81d ObjFunc
	var_39_string = "Organ"; // 0x81f PushS
	var_40_int = 1; // 0x820 PushI
	SetProperty(var_39_string, var_40_int); // 0x821 ObjFunc
	GetItemID(var_37_int); // 0x823 ObjFunc
	var_41_int = 0; // 0x825 PushI
	var_42_int = 1; // 0x826 PushI
	AddItem(var_38_bool, var_36_object, var_41_int, var_42_int); // 0x827 Func
	return 6; // 0x829 Return
}


func_1051(var_489_bool)
{
	var_489_bool = 1; // 0x41b MovB
	return 0; // 0x41c Return
}


func_1053(var_381_int)
{
	var_381_int = 1; // 0x41d MovI
	return 0; // 0x41e Return
}


func_1309(var_199_string)
{
	var_199_string = "walk"; // 0x51d MovS
	return 0; // 0x51e Return
}


func_1055(var_376_float)
{
	var_376_float = 0.5; // 0x41f MovF
	return 0; // 0x420 Return
}


func_1311(var_200_string)
{
	var_200_string = "run"; // 0x51f MovS
	return 0; // 0x520 Return
}


func_1057(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x421 PushV
	var_143_object = Obj(); // 0x422 PushV
	var_143_object = var_131_object; // 0x423 Mov
	func_2018(var_143_object); // 0x424 NEW_2
	var_144_int = 1; // 0x426 PushI
	var_145_int = 5; // 0x427 PushI
	SetTimer(var_144_int, var_145_int); // 0x428 Func
	CanSee(var_141_bool, var_131_object); // 0x42a Func
	var_146_bool = var_141_bool; // 0x42c Push
	if(var_146_bool == 0) goto Label_1076; // 0x42d JumpB
	var_2_object = 1; // 0x42e TMovB
	var_147_object = Obj(); // 0x42f PushV
	var_147_object = var_131_object; // 0x430 Mov
	func_1892(var_147_object); // 0x431 NEW_2
	goto Label_1077; // 0x433 Jump
	
Label_1077:
	var_154_bool = 0; var_155_object = Obj(); // 0x435 PushV
	var_155_object = var_131_object; // 0x436 Mov
	func_1482(var_154_bool, var_155_object); // 0x437 NEW_2
	if(var_154_bool == 0) goto Label_1087; // 0x439 JumpB
	var_158_object = Obj(); // 0x43a PushV
	func_1951(var_158_object); // 0x43b NEW_2
	SendPlayerEnemy(var_131_object, var_158_object); // 0x43d Func
	
Label_1087:
	var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0; // 0x43f PushV
	var_160_object = var_131_object; // 0x440 Mov
	var_161_float = var_132_float; // 0x441 Mov
	var_162_float = var_133_float; // 0x442 Mov
	var_163_bool = var_134_bool; // 0x443 Mov
	var_164_bool = var_135_bool; // 0x444 Mov
	func_1162(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool); // 0x445 NEW_2
	var_142_bool = var_159_bool; // 0x446 Mov
	var_210_object = var_2_object; // 0x448 PushT
	if(var_210_object == 0) goto Label_1101; // 0x449 JumpB
	var_211_string = "head"; // 0x44a PushS
	UnlookAsync(var_211_string); // 0x44b Func
	
Label_1101:
	var_212_int = 1; // 0x44d PushI
	KillTimer(var_212_int); // 0x44e Func
	var_130_bool = var_142_bool; // 0x450 Mov
	return 4; // 0x451 Return
	
Label_1076:
	var_2_object = 0; // 0x434 TMovB
}


func_1313(var_49_object)
{
	EventDisable(0); // 0x522 EventDisable
	var_50_object = Obj(); // 0x523 PushV
	var_50_object = var_49_object; // 0x524 Mov
	func_1338(var_50_object); // 0x525 NEW_2
	var_130_int = 50; // 0x527 PushI
	var_131_int = 40; // 0x528 PushI
	SetRTEnvelope(var_130_int, var_131_int); // 0x529 Func
	EventEnable(0); // 0x52b EventEnable
	
Label_1324:
	Hold(); // 0x52c Func
	goto Label_1324; // 0x52e Jump
}


func_1572(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x624 PushV
	IsDead(var_47_bool); // 0x625 ObjFunc
	var_44_bool = var_47_bool; // 0x627 Mov
	return 2; // 0x628 Return
}


func_1577(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x629 PushV
	var_39_bool = var_34_object == 0; // 0x62a NullEq
	if(var_39_bool == 0) goto Label_1582; // 0x62b JumpB
	var_33_bool = 0; // 0x62c MovB
	return 4; // 0x62d Return
	
Label_1582:
	var_40_bool = 0; // 0x62e PushV
	var_40_bool = 0; // 0x62f MovB
	var_41_string = "IsDead"; // 0x630 PushS
	var_42_int = 1; // 0x631 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x632 FuncExist
	if(var_43_bool == 0) goto Label_1594; // 0x633 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x634 PushV
	var_45_object = var_34_object; // 0x635 Mov
	func_1572(var_45_object); // 0x636 NEW_2
	if(var_44_bool == 0) goto Label_1594; // 0x638 JumpB
	var_40_bool = 1; // 0x639 MovB
	
Label_1594:
	if(var_40_bool == 0) goto Label_1597; // 0x63a JumpB
	var_33_bool = 0; // 0x63b MovB
	return 4; // 0x63c Return
	
Label_1597:
	GetScene(var_37_object); // 0x63d Func
	var_48_bool = var_37_object == 0; // 0x63f NullEq
	if(var_48_bool == 0) goto Label_1603; // 0x640 JumpB
	var_33_bool = 0; // 0x641 MovB
	return 4; // 0x642 Return
	
Label_1603:
	GetScene(var_38_object); // 0x643 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x645 Neq
	if(var_49_bool == 0) goto Label_1609; // 0x646 JumpB
	var_33_bool = 0; // 0x647 MovB
	return 4; // 0x648 Return
	
Label_1609:
	var_33_bool = 1; // 0x649 MovB
	return 4; // 0x64a Return
}


func_2091()
{
	var_26_int = 0; // 0x82b PushV
	func_2055(var_26_int); // 0x82c NEW_2
	var_30_int = 1; // 0x82e PushI
	var_31_bool = var_26_int != var_30_int; // 0x82f Neq
	if(var_31_bool == 0) goto Label_2098; // 0x830 JumpB
	return 0; // 0x831 Return
	
Label_2098:
	var_32_string = ""; // 0x832 PushV
	var_32_string = "liver"; // 0x833 MovS
	func_2074(var_32_string); // 0x834 NEW_2
	var_43_string = ""; // 0x836 PushV
	var_43_string = "kidney"; // 0x837 MovS
	func_2074(var_43_string); // 0x838 NEW_2
	var_44_string = ""; // 0x83a PushV
	var_44_string = "heart"; // 0x83b MovS
	func_2074(var_44_string); // 0x83c NEW_2
	var_45_string = ""; // 0x83e PushV
	var_45_string = "blood"; // 0x83f MovS
	func_2074(var_45_string); // 0x840 NEW_2
	return 0; // 0x842 Return
}


func_1843()
{
	var_142_bool = 0; var_143_bool = 0; // 0x733 PushV
	var_144_bool = 1; // 0x734 PushB
	CameraSwitchToNormal(var_144_bool); // 0x735 Func
	var_145_bool = 0; // 0x737 PushV
	func_2123(var_145_bool); // 0x738 NEW_2
	if(var_145_bool == 0) goto Label_1852; // 0x73a JumpB
	goto Label_1860; // 0x73b Jump
	
Label_1860:
	return 2; // 0x744 Return
	
Label_1852:
	var_146_string = "head"; // 0x73c PushS
	HasAnimationTrack(var_143_bool, var_146_string); // 0x73d Func
	var_147_bool = var_143_bool; // 0x73f Push
	if(var_147_bool == 0) goto Label_1860; // 0x740 JumpB
	var_148_string = "head"; // 0x741 PushS
	UnlookAsync(var_148_string); // 0x742 Func
}


func_1338(var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_string = ""; var_56_object = Obj(); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); // 0x53a PushV
	var_71_bool = var_50_object == 0; // 0x53b NullEq
	if(var_71_bool == 0) goto Label_1346; // 0x53c JumpB
	var_72_string = ""; // 0x53d PushV
	var_72_string = "fdie"; // 0x53e MovS
	func_1429(var_72_string); // 0x53f NEW_2
	goto Label_1428; // 0x541 Jump
	
Label_1428:
	return 20; // 0x594 Return
	
Label_1346:
	GetPosition(var_61_cvector); // 0x542 ObjFunc
	GetPosition(var_62_cvector); // 0x544 Func
	GetDirection(var_63_cvector); // 0x546 Func
	var_64_cvector = var_62_cvector - var_61_cvector; // 0x548 Sub2
	var_104_float = GetByIndex(var_64_cvector, 0); // 0x549 PushE
	var_105_float = GetByIndex(var_63_cvector, 0); // 0x54a PushE
	var_106_float = var_104_float * var_105_float; // 0x54b Mult
	var_107_float = GetByIndex(var_64_cvector, 2); // 0x54c PushE
	var_108_float = GetByIndex(var_63_cvector, 2); // 0x54d PushE
	var_109_float = var_107_float * var_108_float; // 0x54e Mult
	var_110_int = var_106_float + var_109_float; // 0x54f Add
	var_111_int = 0; // 0x550 PushI
	var_112_bool = var_110_int >= var_111_int; // 0x551 GE
	if(var_112_bool == 0) goto Label_1365; // 0x552 JumpB
	var_65_string = "fdie"; // 0x553 MovS
	goto Label_1366; // 0x554 Jump
	
Label_1366:
	RemoveRTEnvelope(); // 0x556 Func
	SetDeathState(); // 0x558 Func
	Stop(); // 0x55a Func
	StopAsync(); // 0x55c Func
	var_66_object = var_50_object; // 0x55e Mov
	var_113_string = "GetScriptProperty"; // 0x55f PushS
	var_114_int = 2; // 0x560 PushI
	var_115_bool = IsFuncExist(var_50_object, var_113_string, var_114_int); // 0x561 FuncExist
	if(var_115_bool == 0) goto Label_1390; // 0x562 JumpB
	var_116_string = "Owner"; // 0x563 PushS
	HasScriptProperty(var_67_bool, var_116_string); // 0x564 ObjFunc
	var_117_bool = var_67_bool; // 0x566 Push
	if(var_117_bool == 0) goto Label_1390; // 0x567 JumpB
	var_118_string = "Owner"; // 0x568 PushS
	GetScriptProperty(var_66_object, var_118_string); // 0x569 ObjFunc
	var_119_bool = var_66_object == 0; // 0x56b NullEq
	if(var_119_bool == 0) goto Label_1390; // 0x56c JumpB
	var_66_object = var_50_object; // 0x56d Mov
	
Label_1390:
	var_120_string = "@GetEyesHeight"; // 0x56e PushS
	var_121_int = 1; // 0x56f PushI
	var_122_bool = IsFuncExist(var_66_object, var_120_string, var_121_int); // 0x570 FuncExist
	if(var_122_bool == 0) goto Label_1405; // 0x571 JumpB
	GetEyesHeight(var_69_float); // 0x572 ObjFunc
	var_70_cvector = CVector(0.0, 0.0, 0.0); // 0x574 MovV
	var_123_float = GetByIndex(var_70_cvector, 1); // 0x575 PushE
	var_123_float = var_69_float; // 0x576 Mov
	SetByIndex(var_70_cvector, 1) = var_123_float; // 0x577 PopE
	var_124_string = "head"; // 0x578 PushS
	LookAsync(var_50_object, var_124_string, var_70_cvector); // 0x579 Func
	var_68_bool = 1; // 0x57b MovB
	goto Label_1406; // 0x57c Jump
	
Label_1406:
	var_125_string = ""; // 0x57e PushV
	var_125_string = var_65_string; // 0x57f Mov
	func_1910(var_125_string); // 0x580 NEW_2
	var_126_string = "all"; // 0x582 PushS
	PlayAnimation(var_126_string, var_65_string); // 0x583 Func
	WaitForAnimEnd(); // 0x585 Func
	var_127_bool = var_68_bool; // 0x587 Push
	if(var_127_bool == 0) goto Label_1422; // 0x588 JumpB
	StopAsync(); // 0x589 Func
	var_128_string = "head"; // 0x58b PushS
	UnlookAsync(var_128_string); // 0x58c Func
	
Label_1422:
	var_129_string = "all"; // 0x58e PushS
	LockAnimationEnd(var_129_string, var_65_string); // 0x58f Func
	RemoveEnvelope(); // 0x591 Func
	var_66_object = 0; // 0x593 SetNull
	
Label_1405:
	var_68_bool = 0; // 0x57d MovB
	
Label_1365:
	var_65_string = "bdie"; // 0x555 MovS
}


func_2115(var_79_int)
{
	var_79_int = 515562; // 0x843 MovI
	return 0; // 0x844 Return
}


func_835(var_490_bool, var_491_float)
{
	var_492_float = 0; var_493_bool = 0; var_494_float = 0; var_495_bool = 0; // 0x343 PushV
	rand(var_494_float); // 0x344 Func
	var_496_bool = var_494_float < var_491_float; // 0x346 LT
	if(var_496_bool == 0) goto Label_855; // 0x347 JumpB
	
Label_840:
	IsAnimationPlaying(var_495_bool); // 0x348 Func
	var_497_bool = var_495_bool == 0; // 0x34a Not
	if(var_497_bool == 0) goto Label_845; // 0x34b JumpB
	goto Label_854; // 0x34c Jump
	
Label_854:
	goto Label_860; // 0x356 Jump
	
Label_860:
	var_490_bool = 0; // 0x35c MovB
	return 4; // 0x35d Return
	
Label_845:
	var_498_bool = 0; // 0x34d PushV
	func_933(var_498_bool); // 0x34e NEW_2
	if(var_498_bool == 0) goto Label_851; // 0x350 JumpB
	var_490_bool = 1; // 0x351 MovB
	return 4; // 0x352 Return
	
Label_851:
	sync(); // 0x353 Func
	goto Label_840; // 0x355 Jump
	
Label_855:
	WaitForAnimEnd(); // 0x357 Func
	func_1037(var_495_bool); // 0x35a NEW_2
}


func_2117(var_78_int)
{
	var_78_int = 503347; // 0x845 MovI
	return 0; // 0x846 Return
}


func_1861(var_124_string)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0; // 0x745 PushV
	lshHasAnimation(var_128_bool, var_124_string); // 0x746 Func
	var_131_bool = var_128_bool; // 0x748 Push
	if(var_131_bool == 0) goto Label_1872; // 0x749 JumpB
	lshGetAnimTimes(var_124_string, var_129_float, var_130_float); // 0x74a Func
	var_132_bool = 0; // 0x74c PushB
	lshPlayAnimation(var_129_float, var_130_float, var_132_bool); // 0x74d Func
	goto Label_1876; // 0x74f Jump
	
Label_1876:
	return 6; // 0x754 Return
	
Label_1872:
	var_133_string = "Can't find lsh animation : "; // 0x750 PushS
	var_134_int = var_133_string + var_124_string; // 0x751 Add
	Trace(var_134_int); // 0x752 Func
}


func_2119(var_80_string)
{
	var_80_string = "ui/NPC_Citizen1.png"; // 0x847 MovS
	return 0; // 0x848 Return
}


func_2121(var_81_string)
{
	var_81_string = "ui/NPC_Citizen1_b.png"; // 0x849 MovS
	return 0; // 0x84a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_102; // 0x4f JumpB
	var_98_string = ""; // 0x50 PushV
	var_98_string = "Neutral"; // 0x51 MovS
	func_132(var_92_object, var_98_string); // 0x52 NEW_2
	var_115_int = 521881; // 0x54 PushI
	SetMessage(var_115_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_116_int = 522417; // 0x59 PushI
	var_117_int = 23585; // 0x5a PushI
	var_118_int = 23584; // 0x5b PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x5c TObjFunc
	var_119_int = 521882; // 0x5e PushI
	var_120_int = -1; // 0x5f PushI
	var_121_int = 23054; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_122_bool = 0; // 0x66 PushV
	func_2123(var_122_bool); // 0x67 NEW_2
	if(var_122_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_123_string = var_3_string; // 0x6c PushT
	if(var_123_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_124_string = ""; // 0x6f PushV
	var_124_string = var_2_object; // 0x70 MovT
	func_1861(var_124_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_135_string = "all"; // 0x75 PushS
	var_136_string = "idle"; // 0x76 PushS
	PlayAnimation(var_135_string, var_136_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_137_string = var_3_string; // 0x7b PushT
	if(var_137_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_138_string = "all"; // 0x7e PushS
	var_139_string = "idle"; // 0x7f PushS
	PlayAnimation(var_138_string, var_139_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_2123(var_73_bool)
{
	var_73_bool = 0; // 0x84b MovB
	return 0; // 0x84c Return
}


func_1613(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x64d PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x64e PushV
	var_34_object = var_30_object; // 0x64f Mov
	func_1577(var_33_bool, var_34_object); // 0x650 NEW_2
	var_50_bool = var_33_bool == 0; // 0x652 Not
	if(var_50_bool == 0) goto Label_1622; // 0x653 JumpB
	var_29_bool = 0; // 0x654 MovB
	return 2; // 0x655 Return
	
Label_1622:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x656 PushV
	var_52_object = var_30_object; // 0x657 Mov
	var_53_string = "noaccess"; // 0x658 MovS
	func_1487(var_51_bool, var_52_object, var_53_string); // 0x659 NEW_2
	var_60_bool = var_51_bool == 0; // 0x65b Not
	if(var_60_bool == 0) goto Label_1631; // 0x65c JumpB
	var_29_bool = 1; // 0x65d MovB
	return 2; // 0x65e Return
	
Label_1631:
	var_61_string = "noaccess"; // 0x65f PushS
	GetProperty(var_61_string, var_32_int); // 0x660 ObjFunc
	var_62_int = 0; // 0x662 PushI
	var_29_bool = var_32_int == var_62_int; // 0x663 Eq2
	return 2; // 0x664 Return
}


func_2125(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x84d PushV
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x84e PushV
	var_21_string = "quest_b10_01"; // 0x84f MovS
	var_22_string = "butcher_dead"; // 0x850 MovS
	func_2006(var_20_bool, var_21_string, var_22_string); // 0x851 NEW_2
	func_2091(); // 0x854 NEW_2
	GetScene(var_19_object); // 0x856 Func
	var_46_object = Obj(); // 0x858 PushV
	func_1951(var_46_object); // 0x859 NEW_2
	RemoveStationaryActor(var_46_object); // 0x85b ObjFunc
	var_49_object = Obj(); // 0x85d PushV
	var_49_object = var_17_object; // 0x85e Mov
	TaskCall(5); // 0x85f TaskCall
	func_1313(var_49_object); // 0x860 NEW_2
	TaskReturn(); // 0x861 TaskReturn
	return 2; // 0x863 Return
}


func_1877(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0; // 0x755 PushV
	lshHasAnimation(var_109_bool, var_102_string); // 0x756 Func
	var_112_bool = var_109_bool; // 0x758 Push
	if(var_112_bool == 0) goto Label_1887; // 0x759 JumpB
	lshGetAnimTimes(var_102_string, var_110_float, var_111_float); // 0x75a Func
	lshPlayAnimation(var_110_float, var_111_float, var_103_bool); // 0x75c Func
	goto Label_1891; // 0x75e Jump
	
Label_1891:
	return 6; // 0x763 Return
	
Label_1887:
	var_113_string = "Can't find lsh animation : "; // 0x75f PushS
	var_114_int = var_113_string + var_102_string; // 0x760 Add
	Trace(var_114_int); // 0x761 Func
}


func_862(var_0_object, var_287_bool, var_288_float)
{
	var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; // 0x35e PushV
	
Label_863:
	IsAnimationPlaying(var_294_bool); // 0x35f Func
	var_299_bool = var_294_bool == 0; // 0x361 Not
	if(var_299_bool == 0) goto Label_868; // 0x362 JumpB
	goto Label_900; // 0x363 Jump
	
Label_900:
	func_1037(var_298_float); // 0x385 NEW_2
	var_287_bool = 0; // 0x387 MovB
	return 10; // 0x388 Return
	
Label_868:
	var_300_bool = 0; // 0x364 PushV
	func_933(var_300_bool); // 0x365 NEW_2
	if(var_300_bool == 0) goto Label_874; // 0x367 JumpB
	var_287_bool = 1; // 0x368 MovB
	return 10; // 0x369 Return
	
Label_874:
	var_343_bool = 0; var_344_object = Obj(); // 0x36a PushV
	var_344_object = var_0_object; // 0x36b MovT
	func_1613(var_343_bool, var_344_object); // 0x36c NEW_2
	var_345_bool = var_343_bool == 0; // 0x36e Not
	if(var_345_bool == 0) goto Label_882; // 0x36f JumpB
	var_287_bool = 0; // 0x370 MovB
	return 10; // 0x371 Return
	
Label_882:
	GetPFPosition(var_295_cvector); // 0x372 TObjFunc
	GetPFPosition(var_296_cvector); // 0x374 Func
	var_297_cvector = var_295_cvector - var_296_cvector; // 0x376 Sub2
	var_298_float = var_297_cvector | var_297_cvector; // 0x377 Or2
	var_346_float = var_288_float * var_288_float; // 0x378 Mult
	var_347_bool = var_298_float < var_346_float; // 0x379 LT
	if(var_347_bool == 0) goto Label_897; // 0x37a JumpB
	var_348_bool = 0; var_349_float = 0; // 0x37b PushV
	var_349_float = var_288_float; // 0x37c Mov
	func_698(var_298_float, var_348_bool, var_349_float); // 0x37d NEW_2
	var_287_bool = 1; // 0x37f MovB
	return 10; // 0x380 Return
	
Label_897:
	sync(); // 0x381 Func
	goto Label_863; // 0x383 Jump
}


func_1120(var_2_object)
{
	var_17_int = 1; // 0x460 PushI
	KillTimer(var_17_int); // 0x461 Func
	var_18_object = var_2_object; // 0x463 PushT
	if(var_18_object == 0) goto Label_1129; // 0x464 JumpB
	var_2_object = 0; // 0x465 TMovB
	var_19_string = "head"; // 0x466 PushS
	UnlookAsync(var_19_string); // 0x467 Func
	
Label_1129:
	func_1286(var_16_object); // 0x46a NEW_2
	return 0; // 0x46c Return
}


func_1892(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); // 0x764 PushV
	GetEyesHeight(var_23_float); // 0x765 ObjFunc
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x767 MovV
	var_25_float = GetByIndex(var_24_cvector, 1); // 0x768 PushE
	var_25_float = var_23_float; // 0x769 Mov
	SetByIndex(var_24_cvector, 1) = var_25_float; // 0x76a PopE
	var_26_string = "head"; // 0x76b PushS
	LookAsync(var_20_object, var_26_string, var_24_cvector); // 0x76c Func
	return 4; // 0x76e Return
}


func_1637(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x665 PushV
	var_48_bool = var_33_object == 0; // 0x666 NullEq
	if(var_48_bool == 0) goto Label_1641; // 0x667 JumpB
	return 14; // 0x668 Return
	
Label_1641:
	IsDead(var_41_bool); // 0x669 Func
	var_49_bool = var_41_bool; // 0x66b Push
	if(var_49_bool == 0) goto Label_1646; // 0x66c JumpB
	return 14; // 0x66d Return
	
Label_1646:
	GetSecondaryAnimationType(var_42_int); // 0x66e Func
	var_50_int = 0; // 0x670 PushI
	var_51_bool = var_42_int < var_50_int; // 0x671 LT
	if(var_51_bool == 0) goto Label_1652; // 0x672 JumpB
	return 14; // 0x673 Return
	
Label_1652:
	GetPosition(var_43_cvector); // 0x674 ObjFunc
	GetPosition(var_44_cvector); // 0x676 Func
	GetDirection(var_45_cvector); // 0x678 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x67a Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x67b PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x67c PushE
	var_54_float = var_52_float * var_53_float; // 0x67d Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x67e PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x67f PushE
	var_57_float = var_55_float * var_56_float; // 0x680 Mult
	var_58_int = var_54_float + var_57_float; // 0x681 Add
	var_59_int = 0; // 0x682 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x683 GE
	if(var_60_bool == 0) goto Label_1671; // 0x684 JumpB
	var_47_string = "fhit"; // 0x685 MovS
	goto Label_1672; // 0x686 Jump
	
Label_1672:
	var_61_string = "hit_react"; // 0x688 PushS
	var_62_string = "1"; // 0x689 PushS
	var_63_int = var_47_string + var_62_string; // 0x68a Add
	var_64_string = "2"; // 0x68b PushS
	var_65_int = var_47_string + var_64_string; // 0x68c Add
	var_66_int = -10; // 0x68d PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x68e Func
	return 14; // 0x690 Return
	
Label_1671:
	var_47_string = "bhit"; // 0x687 MovS
}


func_1903()
{
	var_19_bool = 0; // 0x76f PushV
	func_2123(var_19_bool); // 0x770 NEW_2
	if(var_19_bool == 0) goto Label_1909; // 0x772 JumpB
	lshStopSpeech(); // 0x773 Func
	
Label_1909:
	return 0; // 0x775 Return
}


func_624(var_1_object, var_2_object, var_4_bool)
{
	var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; var_57_cvector = CVector(0,0,0); // 0x270 PushV
	var_1_object = 0; // 0x271 TMovI
	
Label_626:
	var_58_string = "all"; // 0x272 PushS
	var_59_string = "attack_begin"; // 0x273 PushS
	var_60_int = 1; // 0x274 PushI
	var_61_int = var_1_object + var_60_int; // 0x275 Add
	var_62_int = var_59_string + var_61_int; // 0x276 Add
	HasAnimation(var_55_bool, var_58_string, var_62_int); // 0x277 Func
	var_63_bool = var_55_bool == 0; // 0x279 Not
	if(var_63_bool == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
	
Label_639:
	var_2_object = 0; // 0x27f TMovI
	
Label_640:
	var_64_string = "attack"; // 0x280 PushS
	var_65_int = 1; // 0x281 PushI
	var_66_int = var_2_object + var_65_int; // 0x282 Add
	var_67_int = var_64_string + var_66_int; // 0x283 Add
	IsExisting3DSound(var_56_bool, var_67_int); // 0x284 Func
	var_68_bool = var_56_bool == 0; // 0x286 Not
	if(var_68_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_652; // 0x288 Jump
	
Label_652:
	var_69_string = "all"; // 0x28c PushS
	var_70_string = "bjump"; // 0x28d PushS
	GetAnimationOffset(var_57_cvector, var_69_string, var_70_string); // 0x28e Func
	var_71_float = GetByIndex(var_57_cvector, 2); // 0x290 PushE
	var_4_bool = -var_71_float; // 0x291 Neg2
	return 6; // 0x292 Return
	
Label_649:
	var_72_int = 1; // 0x289 PushI
	var_2_object = var_2_object + var_72_int; // 0x28a Add2
	goto Label_640; // 0x28b Jump
	
Label_636:
	var_73_int = 1; // 0x27c PushI
	var_1_object = var_1_object + var_73_int; // 0x27d Add2
	goto Label_626; // 0x27e Jump
}


func_1910(var_73_string)
{
	var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x776 PushV
	IsExisting3DSound(var_82_bool, var_73_string); // 0x777 Func
	var_90_bool = var_82_bool == 0; // 0x779 Not
	if(var_90_bool == 0) goto Label_1935; // 0x77a JumpB
	var_83_int = 0; // 0x77b MovI
	
Label_1916:
	var_91_int = 1; // 0x77c PushI
	var_92_int = var_83_int + var_91_int; // 0x77d Add
	var_93_int = var_73_string + var_92_int; // 0x77e Add
	IsExisting3DSound(var_84_bool, var_93_int); // 0x77f Func
	var_94_bool = var_84_bool == 0; // 0x781 Not
	if(var_94_bool == 0) goto Label_1924; // 0x782 JumpB
	goto Label_1927; // 0x783 Jump
	
Label_1927:
	var_95_bool = var_83_int == 0; // 0x787 Not
	if(var_95_bool == 0) goto Label_1930; // 0x788 JumpB
	return 16; // 0x789 Return
	
Label_1930:
	irand(var_85_int, var_83_int); // 0x78a Func
	var_96_int = 1; // 0x78c PushI
	var_97_int = var_85_int + var_96_int; // 0x78d Add
	var_73_string = var_73_string + var_97_int; // 0x78e Add2
	
Label_1935:
	Is3DSoundLoaded(var_86_bool, var_73_string); // 0x78f Func
	var_98_bool = var_86_bool; // 0x791 Push
	if(var_98_bool == 0) goto Label_1950; // 0x792 JumpB
	GetEyesHeight(var_87_float); // 0x793 Func
	GetDirection(var_88_cvector); // 0x795 Func
	var_99_int = 50; // 0x797 PushI
	var_89_cvector = var_88_cvector * var_99_int; // 0x798 Mult2
	var_100_float = GetByIndex(var_89_cvector, 1); // 0x799 PushE
	var_100_float = var_100_float + var_87_float; // 0x79a Add2
	SetByIndex(var_89_cvector, 1) = var_100_float; // 0x79b PopE
	PlayGlobalSound(var_73_string, var_89_cvector); // 0x79c Func
	
Label_1950:
	return 16; // 0x79e Return
	
Label_1924:
	var_101_int = 1; // 0x784 PushI
	var_83_int = var_83_int + var_101_int; // 0x785 Add2
	goto Label_1916; // 0x786 Jump
}


func_380()
{
	return 0; // 0x17c Return
}


func_381(var_20_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; // 0x17e PushV
	var_27_object = var_20_object; // 0x17f Mov
	var_28_bool = 1; // 0x180 MovB
	var_29_float = 180.0; // 0x181 MovF
	func_395(var_23_int, var_24_bool, var_25_float, var_26_int, var_20_object, var_27_object, var_28_bool, var_29_float); // 0x182 NEW_2
	return 0; // 0x184 Return
}


func_132(var_2_object, var_98_string)
{
	var_99_bool = 0; // 0x85 PushV
	func_2123(var_99_bool); // 0x86 NEW_2
	var_100_bool = var_99_bool == 0; // 0x88 Not
	if(var_100_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_101_bool = var_98_string == var_2_object; // 0x8b Eq
	if(var_101_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_102_string = ""; var_103_bool = 0; // 0x8e PushV
	var_102_string = var_98_string; // 0x8f Mov
	var_104_string = ""; // 0x90 PushS
	var_105_bool = var_98_string == var_104_string; // 0x91 Eq
	if(var_105_bool == 0) goto Label_149; // 0x92 JumpB
	var_103_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1877(var_102_string, var_103_bool); // 0x96 NEW_2
	var_2_object = var_98_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_103_bool = 1; // 0x95 MovB
}


func_389(var_396_float)
{
	var_396_float = 0.1; // 0x186 MovF
	return 0; // 0x187 Return
}


func_392(var_403_int)
{
	var_403_int = 0; // 0x189 MovI
	return 0; // 0x18a Return
}


func_905(var_0_object, var_302_bool)
{
	var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; // 0x389 PushV
	var_313_bool = 0; var_314_object = Obj(); // 0x38a PushV
	var_314_object = var_0_object; // 0x38b MovT
	func_1613(var_313_bool, var_314_object); // 0x38c NEW_2
	var_315_bool = var_313_bool == 0; // 0x38e Not
	if(var_315_bool == 0) goto Label_914; // 0x38f JumpB
	var_302_bool = 0; // 0x390 MovB
	return 10; // 0x391 Return
	
Label_914:
	var_316_bool = 0; // 0x392 PushV
	func_994(var_312_float, var_316_bool); // 0x393 NEW_2
	if(var_316_bool == 0) goto Label_931; // 0x395 JumpB
	GetPFPosition(var_308_cvector); // 0x396 TObjFunc
	GetPFPosition(var_309_cvector); // 0x398 Func
	var_310_cvector = var_308_cvector - var_309_cvector; // 0x39a Sub2
	var_311_float = var_310_cvector | var_310_cvector; // 0x39b Or2
	GetAttackDistance(var_312_float); // 0x39c TObjFunc
	var_317_int = 50; // 0x39e PushI
	var_312_float = var_312_float + var_317_int; // 0x39f Add2
	var_318_float = var_312_float * var_312_float; // 0x3a0 Mult
	var_302_bool = var_311_float <= var_318_float; // 0x3a1 LE2
	return 10; // 0x3a2 Return
	
Label_931:
	var_302_bool = 0; // 0x3a3 MovB
	return 10; // 0x3a4 Return
}


func_1162(var_0_object, var_1_object, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); // 0x48a PushV
	var_0_object = 0; // 0x48b TMovB
	var_1_object = var_160_object; // 0x48c TMov
	var_174_bool = var_164_bool; // 0x48d Mov
	
Label_1166:
	var_181_bool = 0; var_182_object = Obj(); // 0x48e PushV
	var_182_object = var_160_object; // 0x48f Mov
	func_1302(var_181_bool, var_182_object); // 0x490 NEW_2
	var_185_bool = var_181_bool == 0; // 0x492 Not
	if(var_185_bool == 0) goto Label_1174; // 0x493 JumpB
	var_159_bool = 0; // 0x494 MovB
	return 16; // 0x495 Return
	
Label_1174:
	GetPosition(var_176_cvector); // 0x496 ObjFunc
	GetPosition(var_177_cvector); // 0x498 Func
	var_178_cvector = var_176_cvector - var_177_cvector; // 0x49a Sub2
	var_179_float = var_178_cvector | var_178_cvector; // 0x49b Or2
	var_186_bool = 0; // 0x49c PushV
	var_186_bool = 0; // 0x49d MovB
	var_187_int = 0; // 0x49e PushI
	var_188_bool = var_162_float > var_187_int; // 0x49f GT
	if(var_188_bool == 0) goto Label_1189; // 0x4a0 JumpB
	var_189_float = var_162_float * var_162_float; // 0x4a1 Mult
	var_190_bool = var_179_float > var_189_float; // 0x4a2 GT
	if(var_190_bool == 0) goto Label_1189; // 0x4a3 JumpB
	var_186_bool = 1; // 0x4a4 MovB
	
Label_1189:
	if(var_186_bool == 0) goto Label_1194; // 0x4a5 JumpB
	Stop(); // 0x4a6 Func
	var_159_bool = 0; // 0x4a8 MovB
	return 16; // 0x4a9 Return
	
Label_1194:
	var_191_float = var_161_float * var_161_float; // 0x4aa Mult
	var_192_bool = var_179_float > var_191_float; // 0x4ab GT
	if(var_192_bool == 0) goto Label_1256; // 0x4ac JumpB
	GetPFPosition(var_176_cvector); // 0x4ad ObjFunc
	FindPathTo(var_180_object, var_176_cvector); // 0x4af Func
	var_193_bool = var_180_object != 0; // 0x4b1 NullNeq
	if(var_193_bool == 0) goto Label_1205; // 0x4b2 JumpB
	var_175_object = var_180_object; // 0x4b3 Mov
	var_180_object = 0; // 0x4b4 SetNull
	
Label_1205:
	var_194_bool = var_175_object != 0; // 0x4b5 NullNeq
	if(var_194_bool == 0) goto Label_1238; // 0x4b6 JumpB
	var_195_bool = var_174_bool; // 0x4b7 Push
	if(var_195_bool == 0) goto Label_1215; // 0x4b8 JumpB
	var_174_bool = 0; // 0x4b9 MovB
	RotatePath(var_175_object, var_173_bool); // 0x4ba Func
	var_196_bool = var_173_bool == 0; // 0x4bc Not
	if(var_196_bool == 0) goto Label_1215; // 0x4bd JumpB
	goto Label_1262; // 0x4be Jump
	
Label_1262:
	var_159_bool = !var_0_object; // 0x4ee Not2
	return 16; // 0x4ef Return
	
Label_1215:
	var_197_int = 0; // 0x4bf PushI
	var_198_float = 0.3; // 0x4c0 PushF
	SetTimer(var_197_int, var_198_float); // 0x4c1 Func
	var_199_string = ""; // 0x4c3 PushV
	func_1309(var_199_string); // 0x4c4 NEW_2
	var_200_string = ""; // 0x4c6 PushV
	func_1311(var_200_string); // 0x4c7 NEW_2
	FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string); // 0x4c9 Func
	var_201_bool = var_173_bool == 0; // 0x4cb Not
	if(var_201_bool == 0) goto Label_1236; // 0x4cc JumpB
	var_202_object = var_0_object; // 0x4cd PushT
	if(var_202_object == 0) goto Label_1234; // 0x4ce JumpB
	var_175_object = 0; // 0x4cf SetNull
	goto Label_1262; // 0x4d0 Jump
	
Label_1234:
	goto Label_1261; // 0x4d2 Jump
	
Label_1261:
	goto Label_1166; // 0x4ed Jump
	
Label_1236:
	var_175_object = 0; // 0x4d4 SetNull
	goto Label_1254; // 0x4d5 Jump
	
Label_1254:
	var_180_object = 0; // 0x4e6 SetNull
	goto Label_1260; // 0x4e7 Jump
	
Label_1260:
	var_175_object = 0; // 0x4ec SetNull
	
Label_1238:
	var_203_int = 0; // 0x4d6 PushI
	KillTimer(var_203_int); // 0x4d7 Func
	var_204_float = 0.5; // 0x4d9 PushF
	Sleep(var_204_float, var_173_bool); // 0x4da Func
	var_205_bool = var_173_bool == 0; // 0x4dc Not
	if(var_205_bool == 0) goto Label_1250; // 0x4dd JumpB
	var_206_object = var_0_object; // 0x4de PushT
	if(var_206_object == 0) goto Label_1250; // 0x4df JumpB
	var_175_object = 0; // 0x4e0 SetNull
	goto Label_1262; // 0x4e1 Jump
	
Label_1250:
	var_207_int = 0; // 0x4e2 PushI
	var_208_float = 0.3; // 0x4e3 PushF
	SetTimer(var_207_int, var_208_float); // 0x4e4 Func
	
Label_1256:
	var_209_int = 0; // 0x4e8 PushI
	KillTimer(var_209_int); // 0x4e9 Func
	goto Label_1262; // 0x4eb Jump
}


func_395(var_0_object, var_3_string, var_5_cvector, var_27_object, var_28_bool, var_29_float, var_136_bool, var_228_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0; // 0x18b PushV
	func_624(var_49_cvector, var_50_bool, var_51_float); // 0x18d NEW_2
	var_5_cvector = 0; // 0x18f TMovI
	var_74_string = "@GetAttackDistance"; // 0x190 PushS
	var_75_int = 1; // 0x191 PushI
	var_76_bool = IsFuncExist(var_27_object, var_74_string, var_75_int); // 0x192 FuncExist
	if(var_76_bool == 0) goto Label_409; // 0x193 JumpB
	GetAttackDistance(var_41_float); // 0x194 ObjFunc
	var_77_int = 50; // 0x196 PushI
	var_41_float = var_41_float + var_77_int; // 0x197 Add2
	goto Label_410; // 0x198 Jump
	
Label_410:
	var_78_int = 150; // 0x19a PushI
	var_79_bool = var_41_float >= var_78_int; // 0x19b GE
	if(var_79_bool == 0) goto Label_414; // 0x19c JumpB
	var_41_float = 150; // 0x19d MovI
	
Label_414:
	var_3_string = 0; // 0x19e TMovB
	var_0_object = var_27_object; // 0x19f TMov
	IsPlayerActor(var_0_object, var_44_bool); // 0x1a0 Func
	var_80_bool = var_44_bool; // 0x1a2 Push
	if(var_80_bool == 0) goto Label_428; // 0x1a3 JumpB
	var_81_string = "attack"; // 0x1a4 PushS
	PlayGlobalMusic(var_81_string); // 0x1a5 Func
	var_82_object = Obj(); // 0x1a7 PushV
	func_1951(var_82_object); // 0x1a8 NEW_2
	SendPlayerEnemy(var_27_object, var_82_object); // 0x1aa Func
	
Label_428:
	var_85_bool = var_28_bool; // 0x1ac Push
	if(var_85_bool == 0) goto Label_432; // 0x1ad JumpB
	var_45_bool = 0; // 0x1ae MovB
	goto Label_433; // 0x1af Jump
	
Label_433:
	var_86_float = 400.0; // 0x1b1 PushF
	var_46_float = var_86_float + var_41_float; // 0x1b2 Add2
	
Label_435:
	var_87_bool = 0; // 0x1b3 PushV
	var_87_bool = 0; // 0x1b4 MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x1b5 PushV
	var_89_object = var_0_object; // 0x1b6 MovT
	func_1613(var_88_bool, var_89_object); // 0x1b7 NEW_2
	if(var_88_bool == 0) goto Label_445; // 0x1b9 JumpB
	var_122_bool = var_3_string == 0; // 0x1ba Not
	if(var_122_bool == 0) goto Label_445; // 0x1bb JumpB
	var_87_bool = 1; // 0x1bc MovB
	
Label_445:
	if(var_87_bool == 0) goto Label_607; // 0x1bd JumpB
	func_1037(var_51_float); // 0x1bf NEW_2
	GetPFPosition(var_42_cvector); // 0x1c1 TObjFunc
	GetPFPosition(var_43_cvector); // 0x1c3 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x1c5 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x1c6 Or2
	var_128_float = var_46_float * var_46_float; // 0x1c7 Mult
	var_129_bool = var_48_float >= var_128_float; // 0x1c8 GE
	if(var_129_bool == 0) goto Label_473; // 0x1c9 JumpB
	var_130_bool = 0; var_131_object = Obj(); var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_bool = 0; // 0x1ca PushV
	var_131_object = var_0_object; // 0x1cb MovT
	var_132_float = var_41_float; // 0x1cc Mov
	var_133_float = 3000.0; // 0x1cd MovF
	var_134_bool = 1; // 0x1ce MovB
	var_135_bool = 0; // 0x1cf MovB
	TaskCall(4); // 0x1d0 TaskCall
	func_1057(var_138_bool, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool); // 0x1d1 NEW_2
	TaskReturn(); // 0x1d2 TaskReturn
	var_213_bool = var_136_bool == 0; // 0x1d4 Not
	if(var_213_bool == 0) goto Label_471; // 0x1d5 JumpB
	goto Label_607; // 0x1d6 Jump
	
Label_607:
	WaitForAnimEnd(); // 0x25f Func
	var_214_string = var_3_string; // 0x261 PushT
	if(var_214_string == 0) goto Label_612; // 0x262 JumpB
	return 22; // 0x263 Return
	
Label_612:
	var_215_string = "all"; // 0x264 PushS
	var_216_string = "attack_off"; // 0x265 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x266 Func
	WaitForAnimEnd(); // 0x268 Func
	var_217_bool = var_44_bool; // 0x26a Push
	if(var_217_bool == 0) goto Label_623; // 0x26b JumpB
	var_218_float = 2.0; // 0x26c PushF
	Sleep(var_218_float); // 0x26d Func
	
Label_623:
	return 22; // 0x26f Return
	
Label_471:
	var_45_bool = 0; // 0x1d7 MovB
	goto Label_606; // 0x1d8 Jump
	
Label_606:
	goto Label_435; // 0x25e Jump
	
Label_473:
	var_219_float = var_29_float * var_29_float; // 0x1d9 Mult
	var_220_bool = var_48_float >= var_219_float; // 0x1da GE
	if(var_220_bool == 0) goto Label_598; // 0x1db JumpB
	GetPFPosition(var_49_cvector); // 0x1dc TObjFunc
	CanReachByPF(var_50_bool, var_49_cvector); // 0x1de Func
	var_221_bool = var_50_bool == 0; // 0x1e0 Not
	if(var_221_bool == 0) goto Label_497; // 0x1e1 JumpB
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_bool = 0; // 0x1e2 PushV
	var_223_object = var_0_object; // 0x1e3 MovT
	var_224_float = var_41_float; // 0x1e4 Mov
	var_225_float = 3000.0; // 0x1e5 MovF
	var_226_bool = 1; // 0x1e6 MovB
	var_227_bool = 0; // 0x1e7 MovB
	TaskCall(4); // 0x1e8 TaskCall
	func_1057(var_230_bool, var_222_bool, var_223_object, var_224_float, var_225_float, var_226_bool, var_227_bool); // 0x1e9 NEW_2
	TaskReturn(); // 0x1ea TaskReturn
	var_231_bool = var_228_bool == 0; // 0x1ec Not
	if(var_231_bool == 0) goto Label_495; // 0x1ed JumpB
	goto Label_607; // 0x1ee Jump
	
Label_495:
	var_45_bool = 0; // 0x1ef MovB
	goto Label_435; // 0x1f0 Jump
	
Label_497:
	var_232_bool = var_45_bool == 0; // 0x1f1 Not
	if(var_232_bool == 0) goto Label_522; // 0x1f2 JumpB
	var_233_object = Obj(); // 0x1f3 PushV
	var_233_object = var_0_object; // 0x1f4 MovT
	func_1763(); // 0x1f5 NEW_2
	var_242_string = "all"; // 0x1f7 PushS
	var_243_string = "attack_on"; // 0x1f8 PushS
	PlayAnimation(var_242_string, var_243_string); // 0x1f9 Func
	WaitForAnimEnd(); // 0x1fb Func
	func_1037(var_51_float); // 0x1fe NEW_2
	StopAsync(); // 0x200 Func
	var_45_bool = 1; // 0x202 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x203 PushV
	var_245_object = var_0_object; // 0x204 MovT
	func_1613(var_244_bool, var_245_object); // 0x205 NEW_2
	var_246_bool = var_244_bool == 0; // 0x207 Not
	if(var_246_bool == 0) goto Label_522; // 0x208 JumpB
	goto Label_607; // 0x209 Jump
	
Label_522:
	rand(var_51_float); // 0x20a Func
	var_247_bool = 0; // 0x20c PushV
	var_247_bool = 1; // 0x20d MovB
	var_248_float = 0.25; // 0x20e PushF
	var_249_bool = var_51_float < var_248_float; // 0x20f LT
	if(var_249_bool == 0) goto Label_534; // 0x210 JumpB
	var_250_bool = 0; // 0x211 PushV
	func_994(var_247_bool, var_250_bool); // 0x212 NEW_2
	if(var_250_bool == 0) goto Label_534; // 0x214 JumpB
	var_247_bool = 0; // 0x215 MovB
	
Label_534:
	if(var_247_bool == 0) goto Label_551; // 0x216 JumpB
	Face(var_0_object); // 0x217 Func
	func_1044(); // 0x21a NEW_2
	var_285_string = "all"; // 0x21c PushS
	var_286_string = "attack_stay"; // 0x21d PushS
	PlayAnimation(var_285_string, var_286_string); // 0x21e Func
	var_287_bool = 0; var_288_float = 0; // 0x220 PushV
	var_288_float = var_29_float; // 0x221 Mov
	func_862(var_51_float, var_287_bool, var_288_float); // 0x222 NEW_2
	StopAsync(); // 0x224 Func
	goto Label_597; // 0x226 Jump
	
Label_597:
	goto Label_606; // 0x255 Jump
	
Label_551:
	Face(var_0_object); // 0x227 Func
	var_506_string = "all"; // 0x229 PushS
	var_507_string = "fjump"; // 0x22a PushS
	PlayAnimation(var_506_string, var_507_string); // 0x22b Func
	WaitForAnimEnd(); // 0x22d Func
	func_1037(var_51_float); // 0x230 NEW_2
	var_508_cvector = CVector(0.0, 0.0, 0.0); // 0x232 PushVec
	SetSpeed(var_508_cvector); // 0x233 Func
	Stop(); // 0x235 Func
	StopAsync(); // 0x237 Func
	var_509_bool = 0; // 0x239 PushV
	func_994(var_51_float, var_509_bool); // 0x23a NEW_2
	var_510_bool = var_509_bool == 0; // 0x23c Not
	if(var_510_bool == 0) goto Label_597; // 0x23d JumpB
	var_511_bool = 0; var_512_object = Obj(); // 0x23e PushV
	var_512_object = var_0_object; // 0x23f MovT
	func_1613(var_511_bool, var_512_object); // 0x240 NEW_2
	var_513_bool = var_511_bool == 0; // 0x242 Not
	if(var_513_bool == 0) goto Label_581; // 0x243 JumpB
	goto Label_607; // 0x244 Jump
	
Label_581:
	GetPFPosition(var_42_cvector); // 0x245 TObjFunc
	GetPFPosition(var_43_cvector); // 0x247 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x249 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x24a Or2
	var_514_float = var_29_float * var_29_float; // 0x24b Mult
	var_515_bool = var_48_float < var_514_float; // 0x24c LT
	if(var_515_bool == 0) goto Label_597; // 0x24d JumpB
	var_516_bool = 0; var_517_float = 0; // 0x24e PushV
	var_517_float = var_29_float; // 0x24f Mov
	func_698(var_51_float, var_516_bool, var_517_float); // 0x250 NEW_2
	var_518_bool = var_516_bool == 0; // 0x252 Not
	if(var_518_bool == 0) goto Label_597; // 0x253 JumpB
	goto Label_607; // 0x254 Jump
	
Label_598:
	var_519_bool = 0; var_520_float = 0; // 0x256 PushV
	var_520_float = var_29_float; // 0x257 Mov
	func_698(var_51_float, var_519_bool, var_520_float); // 0x258 NEW_2
	var_521_bool = var_519_bool == 0; // 0x25a Not
	if(var_521_bool == 0) goto Label_605; // 0x25b JumpB
	goto Label_607; // 0x25c Jump
	
Label_605:
	var_45_bool = 1; // 0x25d MovB
	
Label_432:
	var_45_bool = 1; // 0x1b0 MovB
	
Label_409:
	var_41_float = var_29_float; // 0x199 Mov
}


func_1681(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x691 PushV
	var_41_bool = 0; // 0x692 PushV
	var_41_bool = 0; // 0x693 MovB
	var_42_bool = 0; // 0x694 PushV
	var_42_bool = 0; // 0x695 MovB
	var_43_object = var_20_object; // 0x696 Push
	if(var_43_object == 0) goto Label_1692; // 0x697 JumpB
	var_44_int = 4; // 0x698 PushI
	var_45_bool = var_21_int != var_44_int; // 0x699 Neq
	if(var_45_bool == 0) goto Label_1692; // 0x69a JumpB
	var_42_bool = 1; // 0x69b MovB
	
Label_1692:
	if(var_42_bool == 0) goto Label_1697; // 0x69c JumpB
	var_46_int = 5; // 0x69d PushI
	var_47_bool = var_21_int != var_46_int; // 0x69e Neq
	if(var_47_bool == 0) goto Label_1697; // 0x69f JumpB
	var_41_bool = 1; // 0x6a0 MovB
	
Label_1697:
	if(var_41_bool == 0) goto Label_1744; // 0x6a1 JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x6a2 PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x6a3 PushV
	var_51_object = var_20_object; // 0x6a4 Mov
	func_1475(var_51_object); // 0x6a5 NEW_2
	var_49_cvector = var_50_cvector; // 0x6a6 Mov
	func_1957(var_48_cvector, var_49_cvector); // 0x6a8 NEW_2
	var_32_cvector = var_48_cvector; // 0x6a9 Mov
	CreateVectorVector(var_33_object); // 0x6ab Func
	var_34_int = 1; // 0x6ad MovI
	
Label_1710:
	var_61_string = "hit"; // 0x6ae PushS
	var_62_int = var_61_string + var_34_int; // 0x6af Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x6b0 Func
	var_63_bool = var_35_bool == 0; // 0x6b2 Not
	if(var_63_bool == 0) goto Label_1717; // 0x6b3 JumpB
	goto Label_1726; // 0x6b4 Jump
	
Label_1726:
	size(var_38_int); // 0x6be ObjFunc
	var_64_int = var_38_int; // 0x6c0 Push
	if(var_64_int == 0) goto Label_1743; // 0x6c1 JumpB
	irand(var_39_int, var_38_int); // 0x6c2 Func
	get(var_40_cvector, var_39_int); // 0x6c4 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x6c6 PushV
	var_65_object = var_20_object; // 0x6c7 Mov
	var_66_int = var_21_int; // 0x6c8 Mov
	var_67_float = var_22_float; // 0x6c9 Mov
	var_68_cvector = var_40_cvector; // 0x6ca Mov
	var_69_cvector = -var_32_cvector; // 0x6cb Neg2
	func_1749(var_67_float, var_68_cvector, var_69_cvector); // 0x6cc NEW_2
	return 18; // 0x6ce Return
	
Label_1743:
	var_33_object = 0; // 0x6cf SetNull
	
Label_1744:
	var_110_object = Obj(); // 0x6d0 PushV
	var_110_object = var_20_object; // 0x6d1 Mov
	func_1637(var_110_object); // 0x6d2 NEW_2
	return 18; // 0x6d4 Return
	
Label_1717:
	var_111_int = var_37_cvector | var_32_cvector; // 0x6b5 Or
	var_112_float = 0.70711; // 0x6b6 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x6b7 GE
	if(var_113_bool == 0) goto Label_1723; // 0x6b8 JumpB
	add(var_36_cvector); // 0x6b9 ObjFunc
	
Label_1723:
	var_114_int = 1; // 0x6bb PushI
	var_34_int = var_34_int + var_114_int; // 0x6bc Add2
	goto Label_1710; // 0x6bd Jump
}


func_659(var_0_object, var_385_float, var_386_int)
{
	var_387_object = Obj(); var_388_float = 0; var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_float = 0; // 0x293 PushV
	var_393_float = 0.9; // 0x294 PushF
	var_394_float = var_385_float * var_393_float; // 0x295 Mult
	GetVictim(var_394_float, var_390_object); // 0x296 Func
	ReportAttack(var_0_object); // 0x298 Func
	var_395_bool = var_390_object == var_0_object; // 0x29a Eq
	if(var_395_bool == 0) goto Label_696; // 0x29b JumpB
	var_396_float = 0; var_397_object = Obj(); var_398_int = 0; // 0x29c PushV
	var_397_object = var_390_object; // 0x29d Mov
	var_398_int = var_386_int; // 0x29e Mov
	func_389(var_398_int); // 0x29f NEW_2
	var_391_float = var_396_float; // 0x2a0 Mov
	var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_int = 0; // 0x2a2 PushV
	var_400_object = var_390_object; // 0x2a3 Mov
	var_401_float = var_391_float; // 0x2a4 Mov
	var_403_int = 0; var_404_object = Obj(); var_405_int = 0; // 0x2a5 PushV
	var_404_object = var_390_object; // 0x2a6 Mov
	var_405_int = var_386_int; // 0x2a7 Mov
	func_392(var_405_int); // 0x2a8 NEW_2
	var_402_int = var_403_int; // 0x2a9 Mov
	func_1499(var_399_float, var_400_object, var_401_float, var_402_int); // 0x2ab NEW_2
	var_392_float = var_399_float; // 0x2ac Mov
	var_464_int = 0; // 0x2ae PushV
	func_1042(var_464_int); // 0x2af NEW_2
	ReportHit(var_0_object, var_464_int, var_392_float, var_391_float); // 0x2b1 Func
	var_465_object = Obj(); var_466_float = 0; // 0x2b3 PushV
	var_465_object = var_390_object; // 0x2b4 Mov
	var_466_float = var_392_float; // 0x2b5 Mov
	func_1049(); // 0x2b6 NEW_2
	
Label_696:
	return 6; // 0x2b8 Return
}


func_1429(var_72_string)
{
	RemoveRTEnvelope(); // 0x596 Func
	SetDeathState(); // 0x598 Func
	Stop(); // 0x59a Func
	StopAsync(); // 0x59c Func
	StopSecondaryAnimation(); // 0x59e Func
	var_73_string = ""; // 0x5a0 PushV
	var_73_string = var_72_string; // 0x5a1 Mov
	func_1910(var_73_string); // 0x5a2 NEW_2
	var_102_string = "all"; // 0x5a4 PushS
	PlayAnimation(var_102_string, var_72_string); // 0x5a5 Func
	WaitForAnimEnd(); // 0x5a7 Func
	var_103_string = "all"; // 0x5a9 PushS
	LockAnimationEnd(var_103_string, var_72_string); // 0x5aa Func
	RemoveEnvelope(); // 0x5ac Func
	return 0; // 0x5ae Return
}


func_1951(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x79f PushV
	self(var_48_object); // 0x7a0 Func
	var_46_object = var_48_object; // 0x7a2 Mov
	return 2; // 0x7a3 Return
}


func_933(var_300_bool)
{
	var_301_bool = 0; // 0x3a5 PushV
	var_301_bool = 0; // 0x3a6 MovB
	var_302_bool = 0; // 0x3a7 PushV
	func_905(var_301_bool, var_302_bool); // 0x3a8 NEW_2
	if(var_302_bool == 0) goto Label_944; // 0x3aa JumpB
	var_319_bool = 0; // 0x3ab PushV
	func_949(var_300_bool, var_301_bool, var_319_bool); // 0x3ac NEW_2
	if(var_319_bool == 0) goto Label_944; // 0x3ae JumpB
	var_301_bool = 1; // 0x3af MovB
	
Label_944:
	if(var_301_bool == 0) goto Label_947; // 0x3b0 JumpB
	var_300_bool = 1; // 0x3b1 MovB
	return 0; // 0x3b2 Return
	
Label_947:
	var_300_bool = 0; // 0x3b3 MovB
	return 0; // 0x3b4 Return
}


func_1957(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x7a5 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x7a6 Or
	var_57_float = sqrt(var_58_int); // 0x7a7 Sqrt2
	var_59_float = 0.0; // 0x7a8 PushF
	var_60_bool = var_57_float < var_59_float; // 0x7a9 LT
	if(var_60_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x7ab MovV
	return 2; // 0x7ac Return
	
Label_1965:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x7ad Div2
	return 2; // 0x7ae Return
}


func_1967(var_28_float, var_29_cvector, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x7af PushV
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x7b0 Sub2
	var_28_float = var_32_cvector | var_32_cvector; // 0x7b1 Or2
	return 2; // 0x7b2 Return
}


func_1971(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float; // 0x7b4 LT
	if(var_442_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_437_float = var_438_float; // 0x7b6 Mov
	goto Label_1977; // 0x7b7 Jump
	
Label_1977:
	return 0; // 0x7b9 Return
	
Label_1976:
	var_437_float = var_439_float; // 0x7b8 Mov
}


func_949(var_0_object, var_4_bool, var_319_bool)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); // 0x3b5 PushV
	GetScene(var_325_object); // 0x3b6 Func
	var_326_bool = 0; // 0x3b8 MovB
	
Label_953:
	var_330_cvector = CVector(0,0,0); var_331_object = Obj(); // 0x3b9 PushV
	var_331_object = var_0_object; // 0x3ba MovT
	func_1475(var_331_object); // 0x3bb NEW_2
	var_336_int = -var_330_cvector; // 0x3bd Neg
	FindDirLength(var_327_float, var_336_int, var_327_float); // 0x3be Func
	var_337_bool = var_327_float < var_4_bool; // 0x3c0 LT
	if(var_337_bool == 0) goto Label_963; // 0x3c1 JumpB
	goto Label_991; // 0x3c2 Jump
	
Label_991:
	var_319_bool = var_326_bool; // 0x3df Mov
	return 10; // 0x3e0 Return
	
Label_963:
	Face(var_0_object); // 0x3c3 Func
	var_338_string = "all"; // 0x3c5 PushS
	var_339_string = "bjump"; // 0x3c6 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x3c7 Func
	GetPFPosition(var_328_cvector); // 0x3c9 TObjFunc
	GetPFPosition(var_329_cvector); // 0x3cb Func
	WaitForAnimEnd(); // 0x3cd Func
	func_1037(var_329_cvector); // 0x3d0 NEW_2
	StopAsync(); // 0x3d2 Func
	var_340_cvector = CVector(0.0, 0.0, 0.0); // 0x3d4 PushVec
	SetSpeed(var_340_cvector); // 0x3d5 Func
	var_326_bool = 1; // 0x3d7 MovB
	var_341_bool = 0; // 0x3d8 PushV
	func_905(var_329_cvector, var_341_bool); // 0x3d9 NEW_2
	var_342_bool = var_341_bool == 0; // 0x3db Not
	if(var_342_bool == 0) goto Label_990; // 0x3dc JumpB
	goto Label_991; // 0x3dd Jump
	
Label_990:
	goto Label_953; // 0x3de Jump
}


func_1461(var_427_string, var_428_int)
{
	var_429_int = 2; // 0x5b6 PushI
	var_430_bool = var_428_int == var_429_int; // 0x5b7 Eq
	if(var_430_bool == 0) goto Label_1468; // 0x5b8 JumpB
	var_427_string = "fire"; // 0x5b9 MovS
	return 0; // 0x5ba Return
	
Label_1468:
	var_431_int = 1; // 0x5bc PushI
	var_432_bool = var_428_int == var_431_int; // 0x5bd Eq
	if(var_432_bool == 0) goto Label_1473; // 0x5be JumpB
	var_427_string = "bullet"; // 0x5bf MovS
	return 0; // 0x5c0 Return
	
Label_1473:
	var_427_string = "phys"; // 0x5c1 MovS
	return 0; // 0x5c2 Return
}


func_698(var_0_object, var_348_bool, var_349_float)
{
	var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = ""; // 0x2ba PushV
	func_1037(var_357_string); // 0x2bc NEW_2
	irand(var_354_int, var_357_string); // 0x2be Func
	var_358_int = 1; // 0x2c0 PushI
	var_354_int = var_354_int + var_358_int; // 0x2c1 Add2
	Face(var_0_object); // 0x2c2 Func
	var_359_bool = 1; // 0x2c4 PushB
	SetAttackState(var_359_bool); // 0x2c5 Func
	func_2027(); // 0x2c8 NEW_2
	var_364_string = "all"; // 0x2ca PushS
	var_365_string = "attack_begin"; // 0x2cb PushS
	var_366_int = var_365_string + var_354_int; // 0x2cc Add
	PlayAnimation(var_364_string, var_366_int); // 0x2cd Func
	WaitForAnimEnd(); // 0x2cf Func
	func_1005(var_356_int, var_357_string); // 0x2d2 NEW_2
	var_382_bool = 0; var_383_object = Obj(); // 0x2d4 PushV
	var_383_object = var_0_object; // 0x2d5 MovT
	func_1613(var_382_bool, var_383_object); // 0x2d6 NEW_2
	var_384_bool = var_382_bool == 0; // 0x2d8 Not
	if(var_384_bool == 0) goto Label_734; // 0x2d9 JumpB
	StopAsync(); // 0x2da Func
	var_348_bool = 0; // 0x2dc MovB
	return 8; // 0x2dd Return
	
Label_734:
	var_385_float = 0; var_386_int = 0; // 0x2de PushV
	var_385_float = var_349_float; // 0x2df Mov
	var_386_int = var_354_int; // 0x2e0 Mov
	func_659(var_357_string, var_385_float, var_386_int); // 0x2e1 NEW_2
	var_467_string = "all"; // 0x2e3 PushS
	var_468_string = "attack_middle"; // 0x2e4 PushS
	var_469_int = var_468_string + var_354_int; // 0x2e5 Add
	HasAnimation(var_355_bool, var_467_string, var_469_int); // 0x2e6 Func
	var_470_bool = var_355_bool; // 0x2e8 Push
	if(var_470_bool == 0) goto Label_815; // 0x2e9 JumpB
	func_2027(); // 0x2eb NEW_2
	var_471_string = "all"; // 0x2ed PushS
	var_472_string = "attack_middle"; // 0x2ee PushS
	var_473_int = var_472_string + var_354_int; // 0x2ef Add
	PlayAnimation(var_471_string, var_473_int); // 0x2f0 Func
	WaitForAnimEnd(); // 0x2f2 Func
	func_1037(var_357_string); // 0x2f5 NEW_2
	var_474_bool = 0; var_475_object = Obj(); // 0x2f7 PushV
	var_475_object = var_0_object; // 0x2f8 MovT
	func_1613(var_474_bool, var_475_object); // 0x2f9 NEW_2
	var_476_bool = var_474_bool == 0; // 0x2fb Not
	if(var_476_bool == 0) goto Label_769; // 0x2fc JumpB
	StopAsync(); // 0x2fd Func
	var_348_bool = 0; // 0x2ff MovB
	return 8; // 0x300 Return
	
Label_769:
	var_477_float = 0; var_478_int = 0; // 0x301 PushV
	var_477_float = var_349_float; // 0x302 Mov
	var_478_int = var_354_int; // 0x303 Mov
	func_659(var_357_string, var_477_float, var_478_int); // 0x304 NEW_2
	var_356_int = 1; // 0x306 MovI
	
Label_775:
	var_479_string = "attack_middle"; // 0x307 PushS
	var_480_int = var_479_string + var_354_int; // 0x308 Add
	var_481_string = "_"; // 0x309 PushS
	var_482_int = var_480_int + var_481_string; // 0x30a Add
	var_357_string = var_482_int + var_356_int; // 0x30b Add2
	var_483_string = "all"; // 0x30c PushS
	HasAnimation(var_355_bool, var_483_string, var_357_string); // 0x30d Func
	var_484_bool = var_355_bool == 0; // 0x30f Not
	if(var_484_bool == 0) goto Label_786; // 0x310 JumpB
	goto Label_815; // 0x311 Jump
	
Label_815:
	var_485_bool = 0; // 0x32f PushB
	SetAttackState(var_485_bool); // 0x330 Func
	var_486_string = "all"; // 0x332 PushS
	var_487_string = "attack_end"; // 0x333 PushS
	var_488_int = var_487_string + var_354_int; // 0x334 Add
	PlayAnimation(var_486_string, var_488_int); // 0x335 Func
	var_489_bool = 0; // 0x337 PushV
	func_1051(var_489_bool); // 0x338 NEW_2
	if(var_489_bool == 0) goto Label_833; // 0x33a JumpB
	var_490_bool = 0; var_491_float = 0; // 0x33b PushV
	var_491_float = 0.75; // 0x33c MovF
	func_835(var_490_bool, var_491_float); // 0x33d NEW_2
	StopAsync(); // 0x33f Func
	
Label_833:
	var_348_bool = 1; // 0x341 MovB
	return 8; // 0x342 Return
	
Label_786:
	func_2027(); // 0x313 NEW_2
	var_499_string = "all"; // 0x315 PushS
	PlayAnimation(var_499_string, var_357_string); // 0x316 Func
	WaitForAnimEnd(); // 0x318 Func
	func_1037(var_357_string); // 0x31b NEW_2
	var_500_bool = 0; var_501_object = Obj(); // 0x31d PushV
	var_501_object = var_0_object; // 0x31e MovT
	func_1613(var_500_bool, var_501_object); // 0x31f NEW_2
	var_502_bool = var_500_bool == 0; // 0x321 Not
	if(var_502_bool == 0) goto Label_807; // 0x322 JumpB
	StopAsync(); // 0x323 Func
	var_348_bool = 0; // 0x325 MovB
	return 8; // 0x326 Return
	
Label_807:
	var_503_float = 0; var_504_int = 0; // 0x327 PushV
	var_503_float = var_349_float; // 0x328 Mov
	var_504_int = var_354_int; // 0x329 Mov
	func_659(var_357_string, var_503_float, var_504_int); // 0x32a NEW_2
	var_505_int = 1; // 0x32c PushI
	var_356_int = var_356_int + var_505_int; // 0x32d Add2
	goto Label_775; // 0x32e Jump
}


func_1978(var_447_float, var_448_float, var_449_float, var_450_float)
{
	var_451_bool = var_448_float < var_449_float; // 0x7bb LT
	if(var_451_bool == 0) goto Label_1983; // 0x7bc JumpB
	var_447_float = var_449_float; // 0x7bd Mov
	return 0; // 0x7be Return
	
Label_1983:
	var_452_bool = var_448_float > var_450_float; // 0x7bf GT
	if(var_452_bool == 0) goto Label_1987; // 0x7c0 JumpB
	var_447_float = var_450_float; // 0x7c1 Mov
	return 0; // 0x7c2 Return
	
Label_1987:
	var_447_float = var_448_float; // 0x7c3 Mov
	return 0; // 0x7c4 Return
}


func_1475(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x5c3 PushV
	GetPosition(var_54_cvector); // 0x5c4 Func
	GetPosition(var_55_cvector); // 0x5c6 ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x5c8 Sub2
	return 4; // 0x5c9 Return
}


func_1989(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj(); // 0x7c5 PushV
	CreateFloatVector(var_457_object); // 0x7c6 Func
	add(var_455_float); // 0x7c8 ObjFunc
	var_458_int = 0; // 0x7ca PushI
	var_459_bool = var_455_float < var_458_int; // 0x7cb LT
	if(var_459_bool == 0) goto Label_2001; // 0x7cc JumpB
	var_460_float = 0.7; // 0x7cd PushF
	var_461_int = 500; // 0x7ce PushI
	RumblePlay(var_460_float, var_461_int); // 0x7cf Func
	
Label_2001:
	var_462_int = 15; // 0x7d1 PushI
	SendWorldWndMessage(var_462_int, var_457_object); // 0x7d2 Func
	return 2; // 0x7d4 Return
}


func_1482(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_bool = 0; // 0x5ca PushV
	IsPlayerActor(var_155_object, var_157_bool); // 0x5cb Func
	var_154_bool = var_157_bool; // 0x5cd Mov
	return 2; // 0x5ce Return
}


func_1487(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x5cf PushV
	var_56_string = "HasProperty"; // 0x5d0 PushS
	var_57_int = 2; // 0x5d1 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x5d2 FuncExist
	var_59_bool = var_58_bool == 0; // 0x5d3 Not
	if(var_59_bool == 0) goto Label_1495; // 0x5d4 JumpB
	var_51_bool = 0; // 0x5d5 MovB
	return 2; // 0x5d6 Return
	
Label_1495:
	HasProperty(var_53_string, var_55_bool); // 0x5d7 ObjFunc
	var_51_bool = var_55_bool; // 0x5d9 Mov
	return 2; // 0x5da Return
}


func_1749(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x6d5 PushV
	GetScene(var_29_object); // 0x6d6 Func
	var_31_string = "scripted"; // 0x6d8 PushS
	var_32_string = "blood_dir.xml"; // 0x6d9 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x6da Func
	var_33_object = Obj(); // 0x6dc PushV
	var_33_object = var_22_object; // 0x6dd Mov
	func_1637(var_33_object); // 0x6de NEW_2
	return 4; // 0x6e0 Return
}


func_2006(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x7d6 PushV
	FindActor(var_24_object, var_21_string); // 0x7d7 Func
	var_25_bool = var_24_object == 0; // 0x7d9 NullEq
	if(var_25_bool == 0) goto Label_2013; // 0x7da JumpB
	var_20_bool = 0; // 0x7db MovB
	return 2; // 0x7dc Return
	
Label_2013:
	Trigger(var_24_object, var_22_string); // 0x7dd Func
	var_20_bool = 1; // 0x7df MovB
	return 2; // 0x7e0 Return
}


func_1499(var_399_float, var_400_object, var_401_float, var_402_int)
{
	var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_float = 0; var_410_float = 0; var_411_float = 0; var_412_int = 0; var_413_string = ""; var_414_int = 0; var_415_float = 0; var_416_float = 0; var_417_float = 0; // 0x5db PushV
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x5dc PushV
	var_419_object = var_400_object; // 0x5dd Mov
	var_420_string = "health"; // 0x5de MovS
	func_1487(var_418_bool, var_419_object, var_420_string); // 0x5df NEW_2
	var_421_bool = var_418_bool == 0; // 0x5e1 Not
	if(var_421_bool == 0) goto Label_1509; // 0x5e2 JumpB
	var_399_float = 0.0; // 0x5e3 MovF
	return 12; // 0x5e4 Return
	
Label_1509:
	var_422_bool = 0; var_423_object = Obj(); var_424_string = ""; // 0x5e5 PushV
	var_423_object = var_400_object; // 0x5e6 Mov
	var_424_string = "armor"; // 0x5e7 MovS
	func_1487(var_422_bool, var_423_object, var_424_string); // 0x5e8 NEW_2
	var_425_bool = var_422_bool == 0; // 0x5ea Not
	if(var_425_bool == 0) goto Label_1518; // 0x5eb JumpB
	var_412_int = 0; // 0x5ec MovI
	goto Label_1521; // 0x5ed Jump
	
Label_1521:
	var_426_string = "armor_"; // 0x5f1 PushS
	var_427_string = ""; var_428_int = 0; // 0x5f2 PushV
	var_428_int = var_402_int; // 0x5f3 Mov
	func_1461(var_427_string, var_428_int); // 0x5f4 NEW_2
	var_413_string = var_426_string + var_427_string; // 0x5f6 Add2
	var_433_bool = 0; var_434_object = Obj(); var_435_string = ""; // 0x5f7 PushV
	var_434_object = var_400_object; // 0x5f8 Mov
	var_435_string = var_413_string; // 0x5f9 Mov
	func_1487(var_433_bool, var_434_object, var_435_string); // 0x5fa NEW_2
	var_436_bool = var_433_bool == 0; // 0x5fc Not
	if(var_436_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_414_int = 0; // 0x5fe MovI
	goto Label_1538; // 0x5ff Jump
	
Label_1538:
	var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x602 PushV
	var_440_int = var_412_int + var_414_int; // 0x603 Add
	var_441_float = 100.0; // 0x604 PushF
	var_438_float = var_440_int / var_440_int; // 0x605 Div2
	var_439_float = 1; // 0x606 MovI
	func_1971(var_437_float, var_438_float, var_439_float); // 0x607 NEW_2
	var_415_float = var_437_float; // 0x608 Mov
	var_443_string = "health"; // 0x60a PushS
	GetProperty(var_443_string, var_416_float); // 0x60b ObjFunc
	var_444_int = 1; // 0x60d PushI
	var_445_int = var_444_int - var_415_float; // 0x60e Sub
	var_417_float = var_401_float * var_445_int; // 0x60f Mult2
	var_446_string = "health"; // 0x610 PushS
	var_447_float = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0; // 0x611 PushV
	var_448_float = var_416_float - var_417_float; // 0x612 Sub2
	var_449_float = 0; // 0x613 MovI
	var_450_float = 1; // 0x614 MovI
	func_1978(var_447_float, var_448_float, var_449_float, var_450_float); // 0x615 NEW_2
	SetProperty(var_446_string, var_447_float); // 0x617 ObjFunc
	var_453_bool = 0; var_454_object = Obj(); // 0x619 PushV
	var_454_object = var_400_object; // 0x61a Mov
	func_1482(var_453_bool, var_454_object); // 0x61b NEW_2
	if(var_453_bool == 0) goto Label_1570; // 0x61d JumpB
	var_455_float = 0; // 0x61e PushV
	var_455_float = -var_417_float; // 0x61f Neg2
	func_1989(var_455_float); // 0x620 NEW_2
	
Label_1570:
	var_399_float = var_417_float; // 0x622 Mov
	return 12; // 0x623 Return
	
Label_1536:
	GetProperty(var_413_string, var_414_int); // 0x600 ObjFunc
	
Label_1518:
	var_463_string = "armor"; // 0x5ee PushS
	GetProperty(var_463_string, var_412_int); // 0x5ef ObjFunc
}


func_994(var_0_object, var_250_bool)
{
	var_251_bool = 0; var_252_bool = 0; // 0x3e2 PushV
	var_253_string = "IsAttacking"; // 0x3e3 PushS
	var_254_int = 1; // 0x3e4 PushI
	var_255_bool = IsFuncExist(var_0_object, var_253_string, var_254_int); // 0x3e5 FuncExist
	if(var_255_bool == 0) goto Label_1003; // 0x3e6 JumpB
	IsAttacking(var_252_bool); // 0x3e7 TObjFunc
	var_250_bool = var_252_bool; // 0x3e9 Mov
	return 2; // 0x3ea Return
	
Label_1003:
	var_250_bool = 0; // 0x3eb MovB
	return 2; // 0x3ec Return
}


func_1763()
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); // 0x6e3 PushV
	GetPosition(var_237_cvector); // 0x6e4 ObjFunc
	GetPosition(var_238_cvector); // 0x6e6 Func
	var_239_cvector = var_237_cvector - var_238_cvector; // 0x6e8 Sub2
	var_240_float = GetByIndex(var_239_cvector, 0); // 0x6e9 PushE
	var_241_float = GetByIndex(var_239_cvector, 2); // 0x6ea PushE
	RotateAsync(var_240_float, var_241_float); // 0x6eb Func
	return 6; // 0x6ed Return
}


func_2018(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x7e2 PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0x7e3 Func
	var_22_bool = var_21_bool; // 0x7e5 Push
	if(var_22_bool == 0) goto Label_2026; // 0x7e6 JumpB
	var_23_string = "attack"; // 0x7e7 PushS
	PlayGlobalMusic(var_23_string); // 0x7e8 Func
	
Label_2026:
	return 2; // 0x7ea Return
}


func_2027()
{
	var_360_object = Obj(); var_361_object = Obj(); // 0x7eb PushV
	GetScene(var_361_object); // 0x7ec Func
	var_362_string = "battle"; // 0x7ee PushS
	var_363_object = Obj(); // 0x7ef PushV
	func_1951(var_363_object); // 0x7f0 NEW_2
	BroadcastMessage(var_362_string, var_363_object, var_361_object); // 0x7f2 Func
	return 2; // 0x7f4 Return
}


func_1005(var_2_object, var_5_cvector)
{
	var_367_float = 0; var_368_int = 0; var_369_float = 0; var_370_int = 0; // 0x3ed PushV
	var_371_bool = var_2_object == 0; // 0x3ee Not
	if(var_371_bool == 0) goto Label_1009; // 0x3ef JumpB
	return 4; // 0x3f0 Return
	
Label_1009:
	var_372_cvector = var_5_cvector; // 0x3f1 PushT
	if(var_372_cvector == 0) goto Label_1017; // 0x3f2 JumpB
	var_373_int = -1; // 0x3f3 PushI
	var_5_cvector = var_5_cvector + var_373_int; // 0x3f4 Add2
	var_374_int = 0; // 0x3f5 PushI
	var_375_bool = var_5_cvector > var_374_int; // 0x3f6 GT
	if(var_375_bool == 0) goto Label_1017; // 0x3f7 JumpB
	return 4; // 0x3f8 Return
	
Label_1017:
	rand(var_369_float); // 0x3f9 Func
	var_376_float = 0; // 0x3fb PushV
	func_1055(var_376_float); // 0x3fc NEW_2
	var_377_bool = var_369_float < var_376_float; // 0x3fe LT
	if(var_377_bool == 0) goto Label_1036; // 0x3ff JumpB
	irand(var_370_int, var_369_float); // 0x400 Func
	var_378_int = 1; // 0x402 PushI
	var_370_int = var_370_int + var_378_int; // 0x403 Add2
	var_379_string = "attack"; // 0x404 PushS
	var_380_int = var_379_string + var_370_int; // 0x405 Add
	Speak(var_380_int); // 0x406 Func
	var_381_int = 0; // 0x408 PushV
	func_1053(var_381_int); // 0x409 NEW_2
	var_5_cvector = var_381_int; // 0x40a TMov
	
Label_1036:
	return 4; // 0x40c Return
}


func_1774(var_30_bool, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; // 0x6ee PushV
	GetPosition(var_43_cvector); // 0x6ef ObjFunc
	GetEyesHeight(var_42_float); // 0x6f1 ObjFunc
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x6f3 PushE
	var_51_float = var_51_float + var_42_float; // 0x6f4 Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x6f5 PopE
	GetPosition(var_44_cvector); // 0x6f6 Func
	GetEyesHeight(var_42_float); // 0x6f8 Func
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x6fa PushE
	var_52_float = var_52_float + var_42_float; // 0x6fb Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x6fc PopE
	var_45_cvector = var_43_cvector - var_44_cvector; // 0x6fd Sub2
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x6fe PushE
	var_53_float = 0; // 0x6ff MovI
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x700 PopE
	var_54_int = var_45_cvector | var_45_cvector; // 0x701 Or
	var_55_float = sqrt(var_54_int); // 0x702 Sqrt
	var_45_cvector = var_45_cvector / var_45_cvector; // 0x703 Div2
	var_46_cvector = -var_45_cvector; // 0x704 Neg2
	var_56_float = var_45_cvector * var_32_float; // 0x705 Mult
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x706 PushV
	var_59_cvector = CVector(0.0, 1.0, 0.0); // 0x707 PushVec
	var_58_cvector = var_46_cvector ^ var_59_cvector; // 0x708 Xor2
	func_1957(var_57_cvector, var_58_cvector); // 0x709 NEW_2
	var_65_int = 25; // 0x70b PushI
	var_66_float = var_57_cvector * var_65_int; // 0x70c Mult
	var_67_int = var_56_float + var_66_float; // 0x70d Add
	var_68_cvector = CVector(0.0, 10.0, 0.0); // 0x70e PushVec
	var_47_cvector = var_67_int - var_68_cvector; // 0x70f Sub2
	var_48_cvector = var_44_cvector + var_47_cvector; // 0x710 Add2
	IsOverrideActive(var_49_bool); // 0x711 Func
	var_69_bool = var_49_bool; // 0x713 Push
	if(var_69_bool == 0) goto Label_1815; // 0x714 JumpB
	var_30_bool = 0; // 0x715 MovB
	return 18; // 0x716 Return
	
Label_1815:
	StopWorld(); // 0x717 Func
	var_70_bool = 1; // 0x719 PushB
	CameraTransit(var_48_cvector, var_46_cvector, var_70_bool); // 0x71a Func
	var_71_float = GetByIndex(var_47_cvector, 0); // 0x71c PushE
	var_72_float = GetByIndex(var_47_cvector, 2); // 0x71d PushE
	Rotate(var_71_float, var_72_float); // 0x71e Func
	var_73_bool = 0; // 0x720 PushV
	func_2123(var_73_bool); // 0x721 NEW_2
	if(var_73_bool == 0) goto Label_1829; // 0x723 JumpB
	goto Label_1837; // 0x724 Jump
	
Label_1837:
	CameraWaitForPlayFinish(); // 0x72d Func
	ResumeWorld(); // 0x72f Func
	var_30_bool = 1; // 0x731 MovB
	return 18; // 0x732 Return
	
Label_1829:
	var_74_string = "head"; // 0x725 PushS
	HasAnimationTrack(var_50_bool, var_74_string); // 0x726 Func
	var_75_bool = var_50_bool; // 0x728 Push
	if(var_75_bool == 0) goto Label_1837; // 0x729 JumpB
	var_76_string = "head"; // 0x72a PushS
	LookAsyncCamera(var_76_string); // 0x72b Func
}


func_1264(var_0_object, var_1_object, var_24_int)
{
	var_25_int = 0; // 0x4f1 PushI
	var_26_bool = var_24_int != var_25_int; // 0x4f2 Neq
	if(var_26_bool == 0) goto Label_1269; // 0x4f3 JumpB
	return 0; // 0x4f4 Return
	
Label_1269:
	var_27_bool = 0; var_28_object = Obj(); // 0x4f5 PushV
	var_28_object = var_1_object; // 0x4f6 MovT
	func_1302(var_27_bool, var_28_object); // 0x4f7 NEW_2
	var_63_bool = var_27_bool == 0; // 0x4f9 Not
	if(var_63_bool == 0) goto Label_1276; // 0x4fa JumpB
	var_0_object = 1; // 0x4fb TMovB
	
Label_1276:
	var_64_int = 0; // 0x4fc PushI
	KillTimer(var_64_int); // 0x4fd Func
	Stop(); // 0x4ff Func
	return 0; // 0x501 Return
}


func_2038(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x7f6 PushV
	var_85_string = "branch"; // 0x7f7 PushS
	GetVariable(var_85_string, var_84_int); // 0x7f8 Func
	var_86_int = 0; // 0x7fa PushI
	var_87_bool = var_84_int == var_86_int; // 0x7fb Eq
	if(var_87_bool == 0) goto Label_2048; // 0x7fc JumpB
	var_82_int = 1; // 0x7fd MovI
	return 2; // 0x7fe Return
	
Label_2048:
	var_88_int = 1; // 0x800 PushI
	var_89_bool = var_84_int == var_88_int; // 0x801 Eq
	if(var_89_bool == 0) goto Label_2053; // 0x802 JumpB
	var_82_int = 2; // 0x803 MovI
	return 2; // 0x804 Return
	
Label_2053:
	var_82_int = 3; // 0x805 MovI
	return 2; // 0x806 Return
}


