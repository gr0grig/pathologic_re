task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 1; // 0x9b PushI
	if(var_17_int == 0) goto Label_249; // 0x9c JumpB
	func_1993(); // 0x9e NEW_2
	var_19_int = 22775; // 0xa0 PushI
	var_20_bool = var_16_bool == var_19_int; // 0xa1 Eq
	if(var_20_bool == 0) goto Label_168; // 0xa2 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xa3 PushV
	var_21_object = var_1_object; // 0xa4 MovT
	var_22_object = var_0_object; // 0xa5 MovT
	func_2148(); // 0xa6 NEW_2
	
Label_168:
	var_29_int = 22657; // 0xa8 PushI
	var_30_bool = var_15_object == var_29_int; // 0xa9 Eq
	if(var_30_bool == 0) goto Label_191; // 0xaa JumpB
	var_31_string = ""; // 0xab PushV
	var_31_string = "Neutral"; // 0xac MovS
	func_132(var_16_bool, var_31_string); // 0xad NEW_2
	var_48_int = 521496; // 0xaf PushI
	SetMessage(var_48_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_49_int = 521497; // 0xb4 PushI
	var_50_int = 34596; // 0xb5 PushI
	var_51_int = 22658; // 0xb6 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xb7 TObjFunc
	var_52_int = 533084; // 0xb9 PushI
	var_53_int = -1; // 0xba PushI
	var_54_int = 34595; // 0xbb PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_55_int = 34596; // 0xbf PushI
	var_56_bool = var_15_object == var_55_int; // 0xc0 Eq
	if(var_56_bool == 0) goto Label_214; // 0xc1 JumpB
	var_57_string = ""; // 0xc2 PushV
	var_57_string = "Neutral"; // 0xc3 MovS
	func_132(var_16_bool, var_57_string); // 0xc4 NEW_2
	var_58_int = 533085; // 0xc6 PushI
	SetMessage(var_58_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_59_int = 533086; // 0xcb PushI
	var_60_int = 34598; // 0xcc PushI
	var_61_int = 34597; // 0xcd PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xce TObjFunc
	var_62_int = 533088; // 0xd0 PushI
	var_63_int = -1; // 0xd1 PushI
	var_64_int = 34599; // 0xd2 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xd3 TObjFunc
	return 0; // 0xd5 Return
	
Label_214:
	var_65_int = 34598; // 0xd6 PushI
	var_66_bool = var_15_object == var_65_int; // 0xd7 Eq
	if(var_66_bool == 0) goto Label_237; // 0xd8 JumpB
	var_67_string = ""; // 0xd9 PushV
	var_67_string = "Neutral"; // 0xda MovS
	func_132(var_16_bool, var_67_string); // 0xdb NEW_2
	var_68_int = 533087; // 0xdd PushI
	SetMessage(var_68_int); // 0xde TObjFunc
	ClearReplies(); // 0xe0 TObjFunc
	var_69_int = 521608; // 0xe2 PushI
	var_70_int = -1; // 0xe3 PushI
	var_71_int = 22775; // 0xe4 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xe5 TObjFunc
	var_72_int = 533089; // 0xe7 PushI
	var_73_int = -1; // 0xe8 PushI
	var_74_int = 34600; // 0xe9 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_3_string = 1; // 0xed TMovB
	var_75_bool = 0; // 0xee PushV
	func_2199(var_75_bool); // 0xef NEW_2
	if(var_75_bool == 0) goto Label_245; // 0xf1 JumpB
	lshStopAnimation(); // 0xf2 Func
	goto Label_247; // 0xf4 Jump
	
Label_247:
	return 0; // 0xf7 Return
	
Label_245:
	StopAnimation(); // 0xf5 Func
	
Label_249:
	return 0; // 0xf9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_450(); // 0xfc NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0xfe PushV
	var_17_object = var_15_bool; // 0xff Mov
	TaskCall(0); // 0x100 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x101 NEW_2
	TaskReturn(); // 0x102 TaskReturn
	return 0; // 0x104 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x105 PushV
	IsPlayerActor(var_15_bool, var_17_bool); // 0x106 Func
	var_18_bool = var_17_bool; // 0x108 Push
	if(var_18_bool == 0) goto Label_271; // 0x109 JumpB
	var_19_bool = 0; var_20_string = ""; var_21_string = ""; // 0x10a PushV
	var_20_string = "quest_d1_01"; // 0x10b MovS
	var_21_string = "attack"; // 0x10c MovS
	func_2092(var_19_bool, var_20_string, var_21_string); // 0x10d NEW_2
	
Label_271:
	return 2; // 0x10f Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_string = "attack"; // 0x111 PushS
	var_17_bool = var_15_bool == var_16_string; // 0x112 Eq
	if(var_17_bool == 0) goto Label_292; // 0x113 JumpB
	func_450(); // 0x115 NEW_2
	func_318(var_15_bool); // 0x118 NEW_2
	var_26_object = Obj(); // 0x11a PushV
	var_27_object = Obj(); // 0x11b PushV
	func_1560(var_27_object); // 0x11c NEW_2
	var_26_object = var_27_object; // 0x11d Mov
	TaskCall(3); // 0x11f TaskCall
	func_455(var_26_object); // 0x120 NEW_2
	TaskReturn(); // 0x121 TaskReturn
	goto Label_296; // 0x123 Jump
	
Label_296:
	return 0; // 0x128 Return
	
Label_292:
	var_531_string = ""; // 0x124 PushV
	var_531_string = var_15_bool; // 0x125 Mov
	func_338(var_531_string); // 0x126 NEW_2
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	StopGroup0(); // 0x15a Func
	sync(); // 0x15c Func
	return 0; // 0x15e Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; // 0x15f PushV
	var_15_bool = 0; // 0x160 MovB
	var_16_object = var_0_object; // 0x161 PushT
	if(var_16_object == 0) goto Label_360; // 0x162 JumpB
	var_17_bool = 0; // 0x163 PushV
	func_367(var_17_bool); // 0x164 NEW_2
	if(var_17_bool == 0) goto Label_360; // 0x166 JumpB
	var_15_bool = 1; // 0x167 MovB
	
Label_360:
	if(var_15_bool == 0) goto Label_366; // 0x168 JumpB
	var_18_object = Obj(); // 0x169 PushV
	func_2041(var_18_object); // 0x16a NEW_2
	RemoveActor(var_18_object); // 0x16c Func
	
Label_366:
	return 0; // 0x16e Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_16_int = 1; // 0x4a1 PushI
	var_17_bool = var_15_int == var_16_int; // 0x4a2 Eq
	if(var_17_bool == 0) goto Label_1193; // 0x4a3 JumpB
	var_18_object = Obj(); // 0x4a4 PushV
	var_18_object = var_1_object; // 0x4a5 MovT
	func_2104(var_18_object); // 0x4a6 NEW_2
	goto Label_1197; // 0x4a8 Jump
	
Label_1197:
	return 0; // 0x4ad Return
	
Label_1193:
	var_23_int = 0; // 0x4a9 PushV
	var_23_int = var_15_int; // 0x4aa Mov
	func_1342(var_14_bool, var_15_int, var_23_int); // 0x4ab NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x4bc PushV
	var_16_bool = 0; // 0x4bd MovB
	var_17_bool = var_1_object == var_15_object; // 0x4be Eq
	if(var_17_bool == 0) goto Label_1219; // 0x4bf JumpB
	var_18_bool = var_2_object == 0; // 0x4c0 Not
	if(var_18_bool == 0) goto Label_1219; // 0x4c1 JumpB
	var_16_bool = 1; // 0x4c2 MovB
	
Label_1219:
	if(var_16_bool == 0) goto Label_1225; // 0x4c3 JumpB
	var_2_object = 1; // 0x4c4 TMovB
	var_19_object = Obj(); // 0x4c5 PushV
	var_19_object = var_15_object; // 0x4c6 Mov
	func_1982(var_19_object); // 0x4c7 NEW_2
	
Label_1225:
	return 0; // 0x4c9 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x4cb PushV
	var_16_bool = 0; // 0x4cc MovB
	var_17_bool = var_1_object == var_15_object; // 0x4cd Eq
	if(var_17_bool == 0) goto Label_1234; // 0x4ce JumpB
	var_18_object = var_2_object; // 0x4cf PushT
	if(var_18_object == 0) goto Label_1234; // 0x4d0 JumpB
	var_16_bool = 1; // 0x4d1 MovB
	
Label_1234:
	if(var_16_bool == 0) goto Label_1239; // 0x4d2 JumpB
	var_2_object = 0; // 0x4d3 TMovB
	var_19_string = "head"; // 0x4d4 PushS
	UnlookAsync(var_19_string); // 0x4d5 Func
	
Label_1239:
	return 0; // 0x4d7 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object); // 0x551 Func
	return 0; // 0x553 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1198(var_15_object); // 0x55d NEW_2
	var_20_object = Obj(); // 0x55f PushV
	var_20_object = var_15_object; // 0x560 Mov
	func_2240(); // 0x561 NEW_2
	return 0; // 0x563 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x57e PushV
	IsOverrideActive(var_17_bool); // 0x57f Func
	var_18_bool = var_17_bool == 0; // 0x581 Not
	if(var_18_bool == 0) goto Label_1415; // 0x582 JumpB
	var_19_object = Obj(); // 0x583 PushV
	var_19_object = var_15_object; // 0x584 Mov
	func_2178(var_19_object); // 0x585 NEW_2
	
Label_1415:
	return 2; // 0x587 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x5fe Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x600 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0; // 0x602 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x8a2 PushV
	var_19_object = var_15_object; // 0x8a3 Mov
	var_20_int = var_16_int; // 0x8a4 Mov
	var_21_float = var_17_float; // 0x8a5 Mov
	func_1766(var_19_object, var_20_int, var_21_float); // 0x8a6 NEW_2
	return 0; // 0x8a8 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x8aa PushV
	var_21_object = var_15_object; // 0x8ab Mov
	var_22_int = var_16_int; // 0x8ac Mov
	var_23_float = var_17_float; // 0x8ad Mov
	var_24_cvector = var_19_cvector; // 0x8ae Mov
	var_25_cvector = var_20_cvector; // 0x8af Mov
	func_1834(var_23_float, var_24_cvector, var_25_cvector); // 0x8b0 NEW_2
	return 0; // 0x8b2 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x8b3 PushV
	var_19_string = "health"; // 0x8b4 PushS
	var_20_bool = var_16_string == var_19_string; // 0x8b5 Eq
	if(var_20_bool == 0) goto Label_2239; // 0x8b6 JumpB
	var_21_string = "health"; // 0x8b7 PushS
	GetProperty(var_21_string, var_18_float); // 0x8b8 Func
	var_22_int = 0; // 0x8ba PushI
	var_23_bool = var_18_float <= var_22_int; // 0x8bb LE
	if(var_23_bool == 0) goto Label_2239; // 0x8bc JumpB
	SignalDeath(var_15_object); // 0x8bd Func
	
Label_2239:
	return 2; // 0x8bf Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_object = Obj(); // 0x8c1 PushV
	var_16_object = var_15_object; // 0x8c2 Mov
	func_2201(var_16_object); // 0x8c3 NEW_2
	return 0; // 0x8c5 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x8c6 PushV
	func_2041(var_15_object); // 0x8c7 NEW_2
	RemoveActor(var_15_object); // 0x8c9 Func
	Hold(); // 0x8cb Func
	return 0; // 0x8cd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_float = 0; var_16_float = 0; // 0x129 PushV
	
Label_298:
	var_17_bool = 0; // 0x12a PushV
	func_1859(var_17_bool); // 0x12b NEW_2
	var_20_bool = var_17_bool == 0; // 0x12d Not
	if(var_20_bool == 0) goto Label_306; // 0x12e JumpB
	Hold(); // 0x12f Func
	goto Label_298; // 0x131 Jump
	
Label_306:
	var_21_int = 3; // 0x132 PushI
	rand(var_16_float, var_21_int); // 0x133 Func
	var_22_int = 3; // 0x135 PushI
	var_23_int = var_16_float + var_22_int; // 0x136 Add
	Sleep(var_23_int); // 0x137 Func
	func_369(); // 0x13a NEW_2
	goto Label_298; // 0x13c Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_1864(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_2193(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_2191(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_2195(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_2197(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_2155(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_137_bool = var_26_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_17_object; // 0x40 Mov
	func_1933(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1027(var_0_object, var_4_bool, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x403 PushV
	GetScene(var_333_object); // 0x404 Func
	var_334_bool = 0; // 0x406 MovB
	
Label_1031:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj(); // 0x407 PushV
	var_339_object = var_0_object; // 0x408 MovT
	func_1553(var_339_object); // 0x409 NEW_2
	var_344_int = -var_338_cvector; // 0x40b Neg
	FindDirLength(var_335_float, var_344_int, var_335_float); // 0x40c Func
	var_345_bool = var_335_float < var_4_bool; // 0x40e LT
	if(var_345_bool == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1069; // 0x410 Jump
	
Label_1069:
	var_327_bool = var_334_bool; // 0x42d Mov
	return 10; // 0x42e Return
	
Label_1041:
	Face(var_0_object); // 0x411 Func
	var_346_string = "all"; // 0x413 PushS
	var_347_string = "bjump"; // 0x414 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x415 Func
	GetPFPosition(var_336_cvector); // 0x417 TObjFunc
	GetPFPosition(var_337_cvector); // 0x419 Func
	WaitForAnimEnd(); // 0x41b Func
	func_1115(var_337_cvector); // 0x41e NEW_2
	StopAsync(); // 0x420 Func
	var_348_cvector = CVector(0.0, 0.0, 0.0); // 0x422 PushVec
	SetSpeed(var_348_cvector); // 0x423 Func
	var_334_bool = 1; // 0x425 MovB
	var_349_bool = 0; // 0x426 PushV
	func_983(var_337_cvector, var_349_bool); // 0x427 NEW_2
	var_350_bool = var_349_bool == 0; // 0x429 Not
	if(var_350_bool == 0) goto Label_1068; // 0x42a JumpB
	goto Label_1069; // 0x42b Jump
	
Label_1068:
	goto Label_1031; // 0x42c Jump
}


func_1539(var_435_string, var_436_int)
{
	var_437_int = 2; // 0x604 PushI
	var_438_bool = var_436_int == var_437_int; // 0x605 Eq
	if(var_438_bool == 0) goto Label_1546; // 0x606 JumpB
	var_435_string = "fire"; // 0x607 MovS
	return 0; // 0x608 Return
	
Label_1546:
	var_439_int = 1; // 0x60a PushI
	var_440_bool = var_436_int == var_439_int; // 0x60b Eq
	if(var_440_bool == 0) goto Label_1551; // 0x60c JumpB
	var_435_string = "bullet"; // 0x60d MovS
	return 0; // 0x60e Return
	
Label_1551:
	var_435_string = "phys"; // 0x60f MovS
	return 0; // 0x610 Return
}


func_2057(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float; // 0x80a LT
	if(var_450_bool == 0) goto Label_2062; // 0x80b JumpB
	var_445_float = var_446_float; // 0x80c Mov
	goto Label_2063; // 0x80d Jump
	
Label_2063:
	return 0; // 0x80f Return
	
Label_2062:
	var_445_float = var_447_float; // 0x80e Mov
}


func_2064(var_455_float, var_456_float, var_457_float, var_458_float)
{
	var_459_bool = var_456_float < var_457_float; // 0x811 LT
	if(var_459_bool == 0) goto Label_2069; // 0x812 JumpB
	var_455_float = var_457_float; // 0x813 Mov
	return 0; // 0x814 Return
	
Label_2069:
	var_460_bool = var_456_float > var_458_float; // 0x815 GT
	if(var_460_bool == 0) goto Label_2073; // 0x816 JumpB
	var_455_float = var_458_float; // 0x817 Mov
	return 0; // 0x818 Return
	
Label_2073:
	var_455_float = var_456_float; // 0x819 Mov
	return 0; // 0x81a Return
}


func_1553(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x611 PushV
	GetPosition(var_53_cvector); // 0x612 Func
	GetPosition(var_54_cvector); // 0x614 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x616 Sub2
	return 4; // 0x617 Return
}


func_1560(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x618 PushV
	var_30_string = "player"; // 0x619 PushS
	FindActor(var_29_object, var_30_string); // 0x61a Func
	var_27_object = var_29_object; // 0x61c Mov
	return 2; // 0x61d Return
}


func_2075(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj(); // 0x81b PushV
	CreateFloatVector(var_465_object); // 0x81c Func
	add(var_463_float); // 0x81e ObjFunc
	var_466_int = 0; // 0x820 PushI
	var_467_bool = var_463_float < var_466_int; // 0x821 LT
	if(var_467_bool == 0) goto Label_2087; // 0x822 JumpB
	var_468_float = 0.7; // 0x823 PushF
	var_469_int = 500; // 0x824 PushI
	RumblePlay(var_468_float, var_469_int); // 0x825 Func
	
Label_2087:
	var_470_int = 15; // 0x827 PushI
	SendWorldWndMessage(var_470_int, var_465_object); // 0x828 Func
	return 2; // 0x82a Return
}


func_1567(var_162_bool, var_163_object)
{
	var_164_bool = 0; var_165_bool = 0; // 0x61f PushV
	IsPlayerActor(var_163_object, var_165_bool); // 0x620 Func
	var_162_bool = var_165_bool; // 0x622 Mov
	return 2; // 0x623 Return
}


func_1572(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x624 PushV
	var_55_string = "HasProperty"; // 0x625 PushS
	var_56_int = 2; // 0x626 PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x627 FuncExist
	var_58_bool = var_57_bool == 0; // 0x628 Not
	if(var_58_bool == 0) goto Label_1580; // 0x629 JumpB
	var_50_bool = 0; // 0x62a MovB
	return 2; // 0x62b Return
	
Label_1580:
	HasProperty(var_52_string, var_54_bool); // 0x62c ObjFunc
	var_50_bool = var_54_bool; // 0x62e Mov
	return 2; // 0x62f Return
}


func_2092(var_19_bool, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x82c PushV
	FindActor(var_23_object, var_20_string); // 0x82d Func
	var_24_bool = var_23_object == 0; // 0x82f NullEq
	if(var_24_bool == 0) goto Label_2099; // 0x830 JumpB
	var_19_bool = 0; // 0x831 MovB
	return 2; // 0x832 Return
	
Label_2099:
	Trigger(var_23_object, var_21_string); // 0x833 Func
	var_19_bool = 1; // 0x835 MovB
	return 2; // 0x836 Return
}


func_1072(var_0_object, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0; // 0x430 PushV
	var_261_string = "IsAttacking"; // 0x431 PushS
	var_262_int = 1; // 0x432 PushI
	var_263_bool = IsFuncExist(var_0_object, var_261_string, var_262_int); // 0x433 FuncExist
	if(var_263_bool == 0) goto Label_1081; // 0x434 JumpB
	IsAttacking(var_260_bool); // 0x435 TObjFunc
	var_258_bool = var_260_bool; // 0x437 Mov
	return 2; // 0x438 Return
	
Label_1081:
	var_258_bool = 0; // 0x439 MovB
	return 2; // 0x43a Return
}


func_1584(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0; // 0x630 PushV
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x631 PushV
	var_427_object = var_408_object; // 0x632 Mov
	var_428_string = "health"; // 0x633 MovS
	func_1572(var_426_bool, var_427_object, var_428_string); // 0x634 NEW_2
	var_429_bool = var_426_bool == 0; // 0x636 Not
	if(var_429_bool == 0) goto Label_1594; // 0x637 JumpB
	var_407_float = 0.0; // 0x638 MovF
	return 12; // 0x639 Return
	
Label_1594:
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x63a PushV
	var_431_object = var_408_object; // 0x63b Mov
	var_432_string = "armor"; // 0x63c MovS
	func_1572(var_430_bool, var_431_object, var_432_string); // 0x63d NEW_2
	var_433_bool = var_430_bool == 0; // 0x63f Not
	if(var_433_bool == 0) goto Label_1603; // 0x640 JumpB
	var_420_int = 0; // 0x641 MovI
	goto Label_1606; // 0x642 Jump
	
Label_1606:
	var_434_string = "armor_"; // 0x646 PushS
	var_435_string = ""; var_436_int = 0; // 0x647 PushV
	var_436_int = var_410_int; // 0x648 Mov
	func_1539(var_435_string, var_436_int); // 0x649 NEW_2
	var_421_string = var_434_string + var_435_string; // 0x64b Add2
	var_441_bool = 0; var_442_object = Obj(); var_443_string = ""; // 0x64c PushV
	var_442_object = var_408_object; // 0x64d Mov
	var_443_string = var_421_string; // 0x64e Mov
	func_1572(var_441_bool, var_442_object, var_443_string); // 0x64f NEW_2
	var_444_bool = var_441_bool == 0; // 0x651 Not
	if(var_444_bool == 0) goto Label_1621; // 0x652 JumpB
	var_422_int = 0; // 0x653 MovI
	goto Label_1623; // 0x654 Jump
	
Label_1623:
	var_445_float = 0; var_446_float = 0; var_447_float = 0; // 0x657 PushV
	var_448_int = var_420_int + var_422_int; // 0x658 Add
	var_449_float = 100.0; // 0x659 PushF
	var_446_float = var_448_int / var_448_int; // 0x65a Div2
	var_447_float = 1; // 0x65b MovI
	func_2057(var_445_float, var_446_float, var_447_float); // 0x65c NEW_2
	var_423_float = var_445_float; // 0x65d Mov
	var_451_string = "health"; // 0x65f PushS
	GetProperty(var_451_string, var_424_float); // 0x660 ObjFunc
	var_452_int = 1; // 0x662 PushI
	var_453_int = var_452_int - var_423_float; // 0x663 Sub
	var_425_float = var_409_float * var_453_int; // 0x664 Mult2
	var_454_string = "health"; // 0x665 PushS
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0; // 0x666 PushV
	var_456_float = var_424_float - var_425_float; // 0x667 Sub2
	var_457_float = 0; // 0x668 MovI
	var_458_float = 1; // 0x669 MovI
	func_2064(var_455_float, var_456_float, var_457_float, var_458_float); // 0x66a NEW_2
	SetProperty(var_454_string, var_455_float); // 0x66c ObjFunc
	var_461_bool = 0; var_462_object = Obj(); // 0x66e PushV
	var_462_object = var_408_object; // 0x66f Mov
	func_1567(var_461_bool, var_462_object); // 0x670 NEW_2
	if(var_461_bool == 0) goto Label_1655; // 0x672 JumpB
	var_463_float = 0; // 0x673 PushV
	var_463_float = -var_425_float; // 0x674 Neg2
	func_2075(var_463_float); // 0x675 NEW_2
	
Label_1655:
	var_407_float = var_425_float; // 0x677 Mov
	return 12; // 0x678 Return
	
Label_1621:
	GetProperty(var_421_string, var_422_int); // 0x655 ObjFunc
	
Label_1603:
	var_471_string = "armor"; // 0x643 PushS
	GetProperty(var_471_string, var_420_int); // 0x644 ObjFunc
}


func_2104(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x838 PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x839 Func
	var_21_bool = var_20_bool; // 0x83b Push
	if(var_21_bool == 0) goto Label_2112; // 0x83c JumpB
	var_22_string = "attack"; // 0x83d PushS
	PlayGlobalMusic(var_22_string); // 0x83e Func
	
Label_2112:
	return 2; // 0x840 Return
}


func_1083(var_2_object, var_5_bool)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0; // 0x43b PushV
	var_379_bool = var_2_object == 0; // 0x43c Not
	if(var_379_bool == 0) goto Label_1087; // 0x43d JumpB
	return 4; // 0x43e Return
	
Label_1087:
	var_380_bool = var_5_bool; // 0x43f PushT
	if(var_380_bool == 0) goto Label_1095; // 0x440 JumpB
	var_381_int = -1; // 0x441 PushI
	var_5_bool = var_5_bool + var_381_int; // 0x442 Add2
	var_382_int = 0; // 0x443 PushI
	var_383_bool = var_5_bool > var_382_int; // 0x444 GT
	if(var_383_bool == 0) goto Label_1095; // 0x445 JumpB
	return 4; // 0x446 Return
	
Label_1095:
	rand(var_377_float); // 0x447 Func
	var_384_float = 0; // 0x449 PushV
	func_1133(var_384_float); // 0x44a NEW_2
	var_385_bool = var_377_float < var_384_float; // 0x44c LT
	if(var_385_bool == 0) goto Label_1114; // 0x44d JumpB
	irand(var_378_int, var_377_float); // 0x44e Func
	var_386_int = 1; // 0x450 PushI
	var_378_int = var_378_int + var_386_int; // 0x451 Add2
	var_387_string = "attack"; // 0x452 PushS
	var_388_int = var_387_string + var_378_int; // 0x453 Add
	Speak(var_388_int); // 0x454 Func
	var_389_int = 0; // 0x456 PushV
	func_1131(var_389_int); // 0x457 NEW_2
	var_5_bool = var_389_int; // 0x458 TMov
	
Label_1114:
	return 4; // 0x45a Return
}


func_2113()
{
	var_368_object = Obj(); var_369_object = Obj(); // 0x841 PushV
	GetScene(var_369_object); // 0x842 Func
	var_370_string = "battle"; // 0x844 PushS
	var_371_object = Obj(); // 0x845 PushV
	func_2041(var_371_object); // 0x846 NEW_2
	BroadcastMessage(var_370_string, var_371_object, var_369_object); // 0x848 Func
	return 2; // 0x84a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_102; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_132(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 521496; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_int = 521497; // 0x59 PushI
	var_114_int = 34596; // 0x5a PushI
	var_115_int = 22658; // 0x5b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5c TObjFunc
	var_116_int = 533084; // 0x5e PushI
	var_117_int = -1; // 0x5f PushI
	var_118_int = 34595; // 0x60 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_119_bool = 0; // 0x66 PushV
	func_2199(var_119_bool); // 0x67 NEW_2
	if(var_119_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_120_string = var_3_string; // 0x6c PushT
	if(var_120_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_121_string = ""; // 0x6f PushV
	var_121_string = var_2_object; // 0x70 MovT
	func_1951(var_121_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_132_string = "all"; // 0x75 PushS
	var_133_string = "idle"; // 0x76 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_134_string = var_3_string; // 0x7b PushT
	if(var_134_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_135_string = "all"; // 0x7e PushS
	var_136_string = "idle"; // 0x7f PushS
	PlayAnimation(var_135_string, var_136_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_2124(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x84c PushV
	var_49_string = "idle"; // 0x84d MovS
	var_50_int = var_47_int; // 0x84e Push
	if(var_50_int == 0) goto Label_2129; // 0x84f JumpB
	var_49_string = var_49_string + var_47_int; // 0x850 Add2
	
Label_2129:
	var_46_string = var_49_string; // 0x851 Mov
	return 2; // 0x852 Return
}


func_2131(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x853 PushV
	var_43_int = 0; // 0x854 MovI
	
Label_2133:
	var_45_string = "all"; // 0x855 PushS
	var_46_string = ""; var_47_int = 0; // 0x856 PushV
	var_47_int = var_43_int; // 0x857 Mov
	func_2124(var_46_string, var_47_int); // 0x858 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x85a Func
	var_51_bool = var_44_bool == 0; // 0x85c Not
	if(var_51_bool == 0) goto Label_2143; // 0x85d JumpB
	goto Label_2146; // 0x85e Jump
	
Label_2146:
	var_40_int = var_43_int; // 0x862 Mov
	return 4; // 0x863 Return
	
Label_2143:
	var_52_int = 1; // 0x85f PushI
	var_43_int = var_43_int + var_52_int; // 0x860 Add2
	goto Label_2133; // 0x861 Jump
}


func_1115(var_0_object)
{
	var_131_object = Obj(); // 0x45b PushV
	var_131_object = var_0_object; // 0x45c MovT
	func_2104(var_131_object); // 0x45d NEW_2
	return 0; // 0x45f Return
}


func_1120(var_472_int)
{
	var_472_int = 0; // 0x460 MovI
	return 0; // 0x461 Return
}


func_1122()
{
	var_264_string = ""; // 0x462 PushV
	var_264_string = "attack_stay"; // 0x463 MovS
	func_2000(var_264_string); // 0x464 NEW_2
	return 0; // 0x466 Return
}


func_2148()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x865 PushV
	var_24_string = "quest_d1_01"; // 0x866 MovS
	var_25_string = "attack"; // 0x867 MovS
	func_2092(var_23_bool, var_24_string, var_25_string); // 0x868 NEW_2
	return 0; // 0x86a Return
}


func_1127()
{
	return 0; // 0x468 Return
}


func_1129(var_497_bool)
{
	var_497_bool = 1; // 0x469 MovB
	return 0; // 0x46a Return
}


func_2155(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x86b PushV
	var_82_string = "branch"; // 0x86c PushS
	GetVariable(var_82_string, var_81_int); // 0x86d Func
	var_83_int = 0; // 0x86f PushI
	var_84_bool = var_81_int == var_83_int; // 0x870 Eq
	if(var_84_bool == 0) goto Label_2165; // 0x871 JumpB
	var_79_int = 1; // 0x872 MovI
	return 2; // 0x873 Return
	
Label_2165:
	var_85_int = 1; // 0x875 PushI
	var_86_bool = var_81_int == var_85_int; // 0x876 Eq
	if(var_86_bool == 0) goto Label_2170; // 0x877 JumpB
	var_79_int = 2; // 0x878 MovI
	return 2; // 0x879 Return
	
Label_2170:
	var_79_int = 3; // 0x87a MovI
	return 2; // 0x87b Return
}


func_1131(var_389_int)
{
	var_389_int = 1; // 0x46b MovI
	return 0; // 0x46c Return
}


func_1133(var_384_float)
{
	var_384_float = 0.5; // 0x46d MovF
	return 0; // 0x46e Return
}


func_1135(var_2_object, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool)
{
	var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; var_150_bool = 0; // 0x46f PushV
	var_151_object = Obj(); // 0x470 PushV
	var_151_object = var_139_object; // 0x471 Mov
	func_2104(var_151_object); // 0x472 NEW_2
	var_152_int = 1; // 0x474 PushI
	var_153_int = 5; // 0x475 PushI
	SetTimer(var_152_int, var_153_int); // 0x476 Func
	CanSee(var_149_bool, var_139_object); // 0x478 Func
	var_154_bool = var_149_bool; // 0x47a Push
	if(var_154_bool == 0) goto Label_1154; // 0x47b JumpB
	var_2_object = 1; // 0x47c TMovB
	var_155_object = Obj(); // 0x47d PushV
	var_155_object = var_139_object; // 0x47e Mov
	func_1982(var_155_object); // 0x47f NEW_2
	goto Label_1155; // 0x481 Jump
	
Label_1155:
	var_162_bool = 0; var_163_object = Obj(); // 0x483 PushV
	var_163_object = var_139_object; // 0x484 Mov
	func_1567(var_162_bool, var_163_object); // 0x485 NEW_2
	if(var_162_bool == 0) goto Label_1165; // 0x487 JumpB
	var_166_object = Obj(); // 0x488 PushV
	func_2041(var_166_object); // 0x489 NEW_2
	SendPlayerEnemy(var_139_object, var_166_object); // 0x48b Func
	
Label_1165:
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0; // 0x48d PushV
	var_168_object = var_139_object; // 0x48e Mov
	var_169_float = var_140_float; // 0x48f Mov
	var_170_float = var_141_float; // 0x490 Mov
	var_171_bool = var_142_bool; // 0x491 Mov
	var_172_bool = var_143_bool; // 0x492 Mov
	func_1240(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool); // 0x493 NEW_2
	var_150_bool = var_167_bool; // 0x494 Mov
	var_218_object = var_2_object; // 0x496 PushT
	if(var_218_object == 0) goto Label_1179; // 0x497 JumpB
	var_219_string = "head"; // 0x498 PushS
	UnlookAsync(var_219_string); // 0x499 Func
	
Label_1179:
	var_220_int = 1; // 0x49b PushI
	KillTimer(var_220_int); // 0x49c Func
	var_138_bool = var_150_bool; // 0x49e Mov
	return 4; // 0x49f Return
	
Label_1154:
	var_2_object = 0; // 0x482 TMovB
}


func_1657(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x679 PushV
	IsDead(var_46_bool); // 0x67a ObjFunc
	var_43_bool = var_46_bool; // 0x67c Mov
	return 2; // 0x67d Return
}


func_2172(var_20_int)
{
	var_21_int = 0; var_22_int = 0; // 0x87c PushV
	var_23_string = "branch"; // 0x87d PushS
	GetVariable(var_23_string, var_22_int); // 0x87e Func
	var_20_int = var_22_int; // 0x880 Mov
	return 2; // 0x881 Return
}


func_1662(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x67e PushV
	var_38_bool = var_33_object == 0; // 0x67f NullEq
	if(var_38_bool == 0) goto Label_1667; // 0x680 JumpB
	var_32_bool = 0; // 0x681 MovB
	return 4; // 0x682 Return
	
Label_1667:
	var_39_bool = 0; // 0x683 PushV
	var_39_bool = 0; // 0x684 MovB
	var_40_string = "IsDead"; // 0x685 PushS
	var_41_int = 1; // 0x686 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0x687 FuncExist
	if(var_42_bool == 0) goto Label_1679; // 0x688 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x689 PushV
	var_44_object = var_33_object; // 0x68a Mov
	func_1657(var_44_object); // 0x68b NEW_2
	if(var_43_bool == 0) goto Label_1679; // 0x68d JumpB
	var_39_bool = 1; // 0x68e MovB
	
Label_1679:
	if(var_39_bool == 0) goto Label_1682; // 0x68f JumpB
	var_32_bool = 0; // 0x690 MovB
	return 4; // 0x691 Return
	
Label_1682:
	GetScene(var_36_object); // 0x692 Func
	var_47_bool = var_36_object == 0; // 0x694 NullEq
	if(var_47_bool == 0) goto Label_1688; // 0x695 JumpB
	var_32_bool = 0; // 0x696 MovB
	return 4; // 0x697 Return
	
Label_1688:
	GetScene(var_37_object); // 0x698 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0x69a Neq
	if(var_48_bool == 0) goto Label_1694; // 0x69b JumpB
	var_32_bool = 0; // 0x69c MovB
	return 4; // 0x69d Return
	
Label_1694:
	var_32_bool = 1; // 0x69e MovB
	return 4; // 0x69f Return
}


func_2178(var_19_object)
{
	var_20_int = 0; // 0x883 PushV
	func_2172(var_20_int); // 0x884 NEW_2
	var_24_int = 1; // 0x886 PushI
	var_25_bool = var_20_int == var_24_int; // 0x887 Eq
	if(var_25_bool == 0) goto Label_2188; // 0x888 JumpB
	WorkWithCorpse(var_19_object); // 0x889 Func
	goto Label_2190; // 0x88b Jump
	
Label_2190:
	return 0; // 0x88e Return
	
Label_2188:
	Barter(var_19_object); // 0x88c Func
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x85 PushV
	func_2199(var_96_bool); // 0x86 NEW_2
	var_97_bool = var_96_bool == 0; // 0x88 Not
	if(var_97_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_98_bool = var_95_string == var_2_object; // 0x8b Eq
	if(var_98_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_99_string = ""; var_100_bool = 0; // 0x8e PushV
	var_99_string = var_95_string; // 0x8f Mov
	var_101_string = ""; // 0x90 PushS
	var_102_bool = var_95_string == var_101_string; // 0x91 Eq
	if(var_102_bool == 0) goto Label_149; // 0x92 JumpB
	var_100_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1967(var_99_string, var_100_bool); // 0x96 NEW_2
	var_2_object = var_95_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_100_bool = 1; // 0x95 MovB
}


func_2191(var_76_int)
{
	var_76_int = 515568; // 0x88f MovI
	return 0; // 0x890 Return
}


func_2193(var_75_int)
{
	var_75_int = 503353; // 0x891 MovI
	return 0; // 0x892 Return
}


func_2195(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x893 MovS
	return 0; // 0x894 Return
}


func_2197(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x895 MovS
	return 0; // 0x896 Return
}


func_2199(var_70_bool)
{
	var_70_bool = 0; // 0x897 MovB
	return 0; // 0x898 Return
}


func_2201(var_16_object)
{
	var_17_object = Obj(); // 0x89a PushV
	var_17_object = var_16_object; // 0x89b Mov
	TaskCall(5); // 0x89c TaskCall
	func_1391(var_17_object); // 0x89d NEW_2
	TaskReturn(); // 0x89e TaskReturn
	return 0; // 0x8a0 Return
}


func_1698(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x6a2 PushV
	var_32_bool = 0; var_33_object = Obj(); // 0x6a3 PushV
	var_33_object = var_29_object; // 0x6a4 Mov
	func_1662(var_32_bool, var_33_object); // 0x6a5 NEW_2
	var_49_bool = var_32_bool == 0; // 0x6a7 Not
	if(var_49_bool == 0) goto Label_1707; // 0x6a8 JumpB
	var_28_bool = 0; // 0x6a9 MovB
	return 2; // 0x6aa Return
	
Label_1707:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x6ab PushV
	var_51_object = var_29_object; // 0x6ac Mov
	var_52_string = "noaccess"; // 0x6ad MovS
	func_1572(var_50_bool, var_51_object, var_52_string); // 0x6ae NEW_2
	var_59_bool = var_50_bool == 0; // 0x6b0 Not
	if(var_59_bool == 0) goto Label_1716; // 0x6b1 JumpB
	var_28_bool = 1; // 0x6b2 MovB
	return 2; // 0x6b3 Return
	
Label_1716:
	var_60_string = "noaccess"; // 0x6b4 PushS
	GetProperty(var_60_string, var_31_int); // 0x6b5 ObjFunc
	var_61_int = 0; // 0x6b7 PushI
	var_28_bool = var_31_int == var_61_int; // 0x6b8 Eq2
	return 2; // 0x6b9 Return
}


func_1198(var_2_object)
{
	var_16_int = 1; // 0x4ae PushI
	KillTimer(var_16_int); // 0x4af Func
	var_17_object = var_2_object; // 0x4b1 PushT
	if(var_17_object == 0) goto Label_1207; // 0x4b2 JumpB
	var_2_object = 0; // 0x4b3 TMovB
	var_18_string = "head"; // 0x4b4 PushS
	UnlookAsync(var_18_string); // 0x4b5 Func
	
Label_1207:
	func_1364(var_15_object); // 0x4b8 NEW_2
	return 0; // 0x4ba Return
}


func_1722(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x6ba PushV
	var_47_bool = var_32_object == 0; // 0x6bb NullEq
	if(var_47_bool == 0) goto Label_1726; // 0x6bc JumpB
	return 14; // 0x6bd Return
	
Label_1726:
	IsDead(var_40_bool); // 0x6be Func
	var_48_bool = var_40_bool; // 0x6c0 Push
	if(var_48_bool == 0) goto Label_1731; // 0x6c1 JumpB
	return 14; // 0x6c2 Return
	
Label_1731:
	GetSecondaryAnimationType(var_41_int); // 0x6c3 Func
	var_49_int = 0; // 0x6c5 PushI
	var_50_bool = var_41_int < var_49_int; // 0x6c6 LT
	if(var_50_bool == 0) goto Label_1737; // 0x6c7 JumpB
	return 14; // 0x6c8 Return
	
Label_1737:
	GetPosition(var_42_cvector); // 0x6c9 ObjFunc
	GetPosition(var_43_cvector); // 0x6cb Func
	GetDirection(var_44_cvector); // 0x6cd Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x6cf Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x6d0 PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x6d1 PushE
	var_53_float = var_51_float * var_52_float; // 0x6d2 Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x6d3 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x6d4 PushE
	var_56_float = var_54_float * var_55_float; // 0x6d5 Mult
	var_57_int = var_53_float + var_56_float; // 0x6d6 Add
	var_58_int = 0; // 0x6d7 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x6d8 GE
	if(var_59_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_46_string = "fhit"; // 0x6da MovS
	goto Label_1757; // 0x6db Jump
	
Label_1757:
	var_60_string = "hit_react"; // 0x6dd PushS
	var_61_string = "1"; // 0x6de PushS
	var_62_int = var_46_string + var_61_string; // 0x6df Add
	var_63_string = "2"; // 0x6e0 PushS
	var_64_int = var_46_string + var_63_string; // 0x6e1 Add
	var_65_int = -10; // 0x6e2 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x6e3 Func
	return 14; // 0x6e5 Return
	
Label_1756:
	var_46_string = "bhit"; // 0x6dc MovS
}


func_702(var_1_object, var_2_object, var_4_bool)
{
	var_62_bool = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); // 0x2be PushV
	var_1_object = 0; // 0x2bf TMovI
	
Label_704:
	var_68_string = "all"; // 0x2c0 PushS
	var_69_string = "attack_begin"; // 0x2c1 PushS
	var_70_int = 1; // 0x2c2 PushI
	var_71_int = var_1_object + var_70_int; // 0x2c3 Add
	var_72_int = var_69_string + var_71_int; // 0x2c4 Add
	HasAnimation(var_65_bool, var_68_string, var_72_int); // 0x2c5 Func
	var_73_bool = var_65_bool == 0; // 0x2c7 Not
	if(var_73_bool == 0) goto Label_714; // 0x2c8 JumpB
	goto Label_717; // 0x2c9 Jump
	
Label_717:
	var_2_object = 0; // 0x2cd TMovI
	
Label_718:
	var_74_string = "attack"; // 0x2ce PushS
	var_75_int = 1; // 0x2cf PushI
	var_76_int = var_2_object + var_75_int; // 0x2d0 Add
	var_77_int = var_74_string + var_76_int; // 0x2d1 Add
	IsExisting3DSound(var_66_bool, var_77_int); // 0x2d2 Func
	var_78_bool = var_66_bool == 0; // 0x2d4 Not
	if(var_78_bool == 0) goto Label_727; // 0x2d5 JumpB
	goto Label_730; // 0x2d6 Jump
	
Label_730:
	var_79_string = "all"; // 0x2da PushS
	var_80_string = "bjump"; // 0x2db PushS
	GetAnimationOffset(var_67_cvector, var_79_string, var_80_string); // 0x2dc Func
	var_81_float = GetByIndex(var_67_cvector, 2); // 0x2de PushE
	var_4_bool = -var_81_float; // 0x2df Neg2
	return 6; // 0x2e0 Return
	
Label_727:
	var_82_int = 1; // 0x2d7 PushI
	var_2_object = var_2_object + var_82_int; // 0x2d8 Add2
	goto Label_718; // 0x2d9 Jump
	
Label_714:
	var_83_int = 1; // 0x2ca PushI
	var_1_object = var_1_object + var_83_int; // 0x2cb Add2
	goto Label_704; // 0x2cc Jump
}


func_1240(var_0_object, var_1_object, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj(); // 0x4d8 PushV
	var_0_object = 0; // 0x4d9 TMovB
	var_1_object = var_168_object; // 0x4da TMov
	var_182_bool = var_172_bool; // 0x4db Mov
	
Label_1244:
	var_189_bool = 0; var_190_object = Obj(); // 0x4dc PushV
	var_190_object = var_168_object; // 0x4dd Mov
	func_1380(var_189_bool, var_190_object); // 0x4de NEW_2
	var_193_bool = var_189_bool == 0; // 0x4e0 Not
	if(var_193_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_167_bool = 0; // 0x4e2 MovB
	return 16; // 0x4e3 Return
	
Label_1252:
	GetPosition(var_184_cvector); // 0x4e4 ObjFunc
	GetPosition(var_185_cvector); // 0x4e6 Func
	var_186_cvector = var_184_cvector - var_185_cvector; // 0x4e8 Sub2
	var_187_float = var_186_cvector | var_186_cvector; // 0x4e9 Or2
	var_194_bool = 0; // 0x4ea PushV
	var_194_bool = 0; // 0x4eb MovB
	var_195_int = 0; // 0x4ec PushI
	var_196_bool = var_170_float > var_195_int; // 0x4ed GT
	if(var_196_bool == 0) goto Label_1267; // 0x4ee JumpB
	var_197_float = var_170_float * var_170_float; // 0x4ef Mult
	var_198_bool = var_187_float > var_197_float; // 0x4f0 GT
	if(var_198_bool == 0) goto Label_1267; // 0x4f1 JumpB
	var_194_bool = 1; // 0x4f2 MovB
	
Label_1267:
	if(var_194_bool == 0) goto Label_1272; // 0x4f3 JumpB
	Stop(); // 0x4f4 Func
	var_167_bool = 0; // 0x4f6 MovB
	return 16; // 0x4f7 Return
	
Label_1272:
	var_199_float = var_169_float * var_169_float; // 0x4f8 Mult
	var_200_bool = var_187_float > var_199_float; // 0x4f9 GT
	if(var_200_bool == 0) goto Label_1334; // 0x4fa JumpB
	GetPFPosition(var_184_cvector); // 0x4fb ObjFunc
	FindPathTo(var_188_object, var_184_cvector); // 0x4fd Func
	var_201_bool = var_188_object != 0; // 0x4ff NullNeq
	if(var_201_bool == 0) goto Label_1283; // 0x500 JumpB
	var_183_object = var_188_object; // 0x501 Mov
	var_188_object = 0; // 0x502 SetNull
	
Label_1283:
	var_202_bool = var_183_object != 0; // 0x503 NullNeq
	if(var_202_bool == 0) goto Label_1316; // 0x504 JumpB
	var_203_bool = var_182_bool; // 0x505 Push
	if(var_203_bool == 0) goto Label_1293; // 0x506 JumpB
	var_182_bool = 0; // 0x507 MovB
	RotatePath(var_183_object, var_181_bool); // 0x508 Func
	var_204_bool = var_181_bool == 0; // 0x50a Not
	if(var_204_bool == 0) goto Label_1293; // 0x50b JumpB
	goto Label_1340; // 0x50c Jump
	
Label_1340:
	var_167_bool = !var_0_object; // 0x53c Not2
	return 16; // 0x53d Return
	
Label_1293:
	var_205_int = 0; // 0x50d PushI
	var_206_float = 0.3; // 0x50e PushF
	SetTimer(var_205_int, var_206_float); // 0x50f Func
	var_207_string = ""; // 0x511 PushV
	func_1387(var_207_string); // 0x512 NEW_2
	var_208_string = ""; // 0x514 PushV
	func_1389(var_208_string); // 0x515 NEW_2
	FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string); // 0x517 Func
	var_209_bool = var_181_bool == 0; // 0x519 Not
	if(var_209_bool == 0) goto Label_1314; // 0x51a JumpB
	var_210_object = var_0_object; // 0x51b PushT
	if(var_210_object == 0) goto Label_1312; // 0x51c JumpB
	var_183_object = 0; // 0x51d SetNull
	goto Label_1340; // 0x51e Jump
	
Label_1312:
	goto Label_1339; // 0x520 Jump
	
Label_1339:
	goto Label_1244; // 0x53b Jump
	
Label_1314:
	var_183_object = 0; // 0x522 SetNull
	goto Label_1332; // 0x523 Jump
	
Label_1332:
	var_188_object = 0; // 0x534 SetNull
	goto Label_1338; // 0x535 Jump
	
Label_1338:
	var_183_object = 0; // 0x53a SetNull
	
Label_1316:
	var_211_int = 0; // 0x524 PushI
	KillTimer(var_211_int); // 0x525 Func
	var_212_float = 0.5; // 0x527 PushF
	Sleep(var_212_float, var_181_bool); // 0x528 Func
	var_213_bool = var_181_bool == 0; // 0x52a Not
	if(var_213_bool == 0) goto Label_1328; // 0x52b JumpB
	var_214_object = var_0_object; // 0x52c PushT
	if(var_214_object == 0) goto Label_1328; // 0x52d JumpB
	var_183_object = 0; // 0x52e SetNull
	goto Label_1340; // 0x52f Jump
	
Label_1328:
	var_215_int = 0; // 0x530 PushI
	var_216_float = 0.3; // 0x531 PushF
	SetTimer(var_215_int, var_216_float); // 0x532 Func
	
Label_1334:
	var_217_int = 0; // 0x536 PushI
	KillTimer(var_217_int); // 0x537 Func
	goto Label_1340; // 0x539 Jump
}


func_737(var_0_object, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0; // 0x2e1 PushV
	var_401_float = 0.9; // 0x2e2 PushF
	var_402_float = var_393_float * var_401_float; // 0x2e3 Mult
	GetVictim(var_402_float, var_398_object); // 0x2e4 Func
	ReportAttack(var_0_object); // 0x2e6 Func
	var_403_bool = var_398_object == var_0_object; // 0x2e8 Eq
	if(var_403_bool == 0) goto Label_774; // 0x2e9 JumpB
	var_404_float = 0; var_405_object = Obj(); var_406_int = 0; // 0x2ea PushV
	var_405_object = var_398_object; // 0x2eb Mov
	var_406_int = var_394_int; // 0x2ec Mov
	func_467(var_406_int); // 0x2ed NEW_2
	var_399_float = var_404_float; // 0x2ee Mov
	var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0; // 0x2f0 PushV
	var_408_object = var_398_object; // 0x2f1 Mov
	var_409_float = var_399_float; // 0x2f2 Mov
	var_411_int = 0; var_412_object = Obj(); var_413_int = 0; // 0x2f3 PushV
	var_412_object = var_398_object; // 0x2f4 Mov
	var_413_int = var_394_int; // 0x2f5 Mov
	func_470(var_413_int); // 0x2f6 NEW_2
	var_410_int = var_411_int; // 0x2f7 Mov
	func_1584(var_407_float, var_408_object, var_409_float, var_410_int); // 0x2f9 NEW_2
	var_400_float = var_407_float; // 0x2fa Mov
	var_472_int = 0; // 0x2fc PushV
	func_1120(var_472_int); // 0x2fd NEW_2
	ReportHit(var_0_object, var_472_int, var_400_float, var_399_float); // 0x2ff Func
	var_473_object = Obj(); var_474_float = 0; // 0x301 PushV
	var_473_object = var_398_object; // 0x302 Mov
	var_474_float = var_400_float; // 0x303 Mov
	func_1127(); // 0x304 NEW_2
	
Label_774:
	return 6; // 0x306 Return
}


func_1766(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x6e6 PushV
	var_40_bool = 0; // 0x6e7 PushV
	var_40_bool = 0; // 0x6e8 MovB
	var_41_bool = 0; // 0x6e9 PushV
	var_41_bool = 0; // 0x6ea MovB
	var_42_object = var_19_object; // 0x6eb Push
	if(var_42_object == 0) goto Label_1777; // 0x6ec JumpB
	var_43_int = 4; // 0x6ed PushI
	var_44_bool = var_20_int != var_43_int; // 0x6ee Neq
	if(var_44_bool == 0) goto Label_1777; // 0x6ef JumpB
	var_41_bool = 1; // 0x6f0 MovB
	
Label_1777:
	if(var_41_bool == 0) goto Label_1782; // 0x6f1 JumpB
	var_45_int = 5; // 0x6f2 PushI
	var_46_bool = var_20_int != var_45_int; // 0x6f3 Neq
	if(var_46_bool == 0) goto Label_1782; // 0x6f4 JumpB
	var_40_bool = 1; // 0x6f5 MovB
	
Label_1782:
	if(var_40_bool == 0) goto Label_1829; // 0x6f6 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x6f7 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x6f8 PushV
	var_50_object = var_19_object; // 0x6f9 Mov
	func_1553(var_50_object); // 0x6fa NEW_2
	var_48_cvector = var_49_cvector; // 0x6fb Mov
	func_2047(var_47_cvector, var_48_cvector); // 0x6fd NEW_2
	var_31_cvector = var_47_cvector; // 0x6fe Mov
	CreateVectorVector(var_32_object); // 0x700 Func
	var_33_int = 1; // 0x702 MovI
	
Label_1795:
	var_60_string = "hit"; // 0x703 PushS
	var_61_int = var_60_string + var_33_int; // 0x704 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x705 Func
	var_62_bool = var_34_bool == 0; // 0x707 Not
	if(var_62_bool == 0) goto Label_1802; // 0x708 JumpB
	goto Label_1811; // 0x709 Jump
	
Label_1811:
	size(var_37_int); // 0x713 ObjFunc
	var_63_int = var_37_int; // 0x715 Push
	if(var_63_int == 0) goto Label_1828; // 0x716 JumpB
	irand(var_38_int, var_37_int); // 0x717 Func
	get(var_39_cvector, var_38_int); // 0x719 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x71b PushV
	var_64_object = var_19_object; // 0x71c Mov
	var_65_int = var_20_int; // 0x71d Mov
	var_66_float = var_21_float; // 0x71e Mov
	var_67_cvector = var_39_cvector; // 0x71f Mov
	var_68_cvector = -var_31_cvector; // 0x720 Neg2
	func_1834(var_66_float, var_67_cvector, var_68_cvector); // 0x721 NEW_2
	return 18; // 0x723 Return
	
Label_1828:
	var_32_object = 0; // 0x724 SetNull
	
Label_1829:
	var_109_object = Obj(); // 0x725 PushV
	var_109_object = var_19_object; // 0x726 Mov
	func_1722(var_109_object); // 0x727 NEW_2
	return 18; // 0x729 Return
	
Label_1802:
	var_110_int = var_36_cvector | var_31_cvector; // 0x70a Or
	var_111_float = 0.70711; // 0x70b PushF
	var_112_bool = var_110_int >= var_111_float; // 0x70c GE
	if(var_112_bool == 0) goto Label_1808; // 0x70d JumpB
	add(var_35_cvector); // 0x70e ObjFunc
	
Label_1808:
	var_113_int = 1; // 0x710 PushI
	var_33_int = var_33_int + var_113_int; // 0x711 Add2
	goto Label_1795; // 0x712 Jump
}


func_776(var_0_object, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = ""; // 0x308 PushV
	func_1115(var_365_string); // 0x30a NEW_2
	irand(var_362_int, var_365_string); // 0x30c Func
	var_366_int = 1; // 0x30e PushI
	var_362_int = var_362_int + var_366_int; // 0x30f Add2
	Face(var_0_object); // 0x310 Func
	var_367_bool = 1; // 0x312 PushB
	SetAttackState(var_367_bool); // 0x313 Func
	func_2113(); // 0x316 NEW_2
	var_372_string = "all"; // 0x318 PushS
	var_373_string = "attack_begin"; // 0x319 PushS
	var_374_int = var_373_string + var_362_int; // 0x31a Add
	PlayAnimation(var_372_string, var_374_int); // 0x31b Func
	WaitForAnimEnd(); // 0x31d Func
	func_1083(var_364_int, var_365_string); // 0x320 NEW_2
	var_390_bool = 0; var_391_object = Obj(); // 0x322 PushV
	var_391_object = var_0_object; // 0x323 MovT
	func_1698(var_390_bool, var_391_object); // 0x324 NEW_2
	var_392_bool = var_390_bool == 0; // 0x326 Not
	if(var_392_bool == 0) goto Label_812; // 0x327 JumpB
	StopAsync(); // 0x328 Func
	var_356_bool = 0; // 0x32a MovB
	return 8; // 0x32b Return
	
Label_812:
	var_393_float = 0; var_394_int = 0; // 0x32c PushV
	var_393_float = var_357_float; // 0x32d Mov
	var_394_int = var_362_int; // 0x32e Mov
	func_737(var_365_string, var_393_float, var_394_int); // 0x32f NEW_2
	var_475_string = "all"; // 0x331 PushS
	var_476_string = "attack_middle"; // 0x332 PushS
	var_477_int = var_476_string + var_362_int; // 0x333 Add
	HasAnimation(var_363_bool, var_475_string, var_477_int); // 0x334 Func
	var_478_bool = var_363_bool; // 0x336 Push
	if(var_478_bool == 0) goto Label_893; // 0x337 JumpB
	func_2113(); // 0x339 NEW_2
	var_479_string = "all"; // 0x33b PushS
	var_480_string = "attack_middle"; // 0x33c PushS
	var_481_int = var_480_string + var_362_int; // 0x33d Add
	PlayAnimation(var_479_string, var_481_int); // 0x33e Func
	WaitForAnimEnd(); // 0x340 Func
	func_1115(var_365_string); // 0x343 NEW_2
	var_482_bool = 0; var_483_object = Obj(); // 0x345 PushV
	var_483_object = var_0_object; // 0x346 MovT
	func_1698(var_482_bool, var_483_object); // 0x347 NEW_2
	var_484_bool = var_482_bool == 0; // 0x349 Not
	if(var_484_bool == 0) goto Label_847; // 0x34a JumpB
	StopAsync(); // 0x34b Func
	var_356_bool = 0; // 0x34d MovB
	return 8; // 0x34e Return
	
Label_847:
	var_485_float = 0; var_486_int = 0; // 0x34f PushV
	var_485_float = var_357_float; // 0x350 Mov
	var_486_int = var_362_int; // 0x351 Mov
	func_737(var_365_string, var_485_float, var_486_int); // 0x352 NEW_2
	var_364_int = 1; // 0x354 MovI
	
Label_853:
	var_487_string = "attack_middle"; // 0x355 PushS
	var_488_int = var_487_string + var_362_int; // 0x356 Add
	var_489_string = "_"; // 0x357 PushS
	var_490_int = var_488_int + var_489_string; // 0x358 Add
	var_365_string = var_490_int + var_364_int; // 0x359 Add2
	var_491_string = "all"; // 0x35a PushS
	HasAnimation(var_363_bool, var_491_string, var_365_string); // 0x35b Func
	var_492_bool = var_363_bool == 0; // 0x35d Not
	if(var_492_bool == 0) goto Label_864; // 0x35e JumpB
	goto Label_893; // 0x35f Jump
	
Label_893:
	var_493_bool = 0; // 0x37d PushB
	SetAttackState(var_493_bool); // 0x37e Func
	var_494_string = "all"; // 0x380 PushS
	var_495_string = "attack_end"; // 0x381 PushS
	var_496_int = var_495_string + var_362_int; // 0x382 Add
	PlayAnimation(var_494_string, var_496_int); // 0x383 Func
	var_497_bool = 0; // 0x385 PushV
	func_1129(var_497_bool); // 0x386 NEW_2
	if(var_497_bool == 0) goto Label_911; // 0x388 JumpB
	var_498_bool = 0; var_499_float = 0; // 0x389 PushV
	var_499_float = 0.75; // 0x38a MovF
	func_913(var_498_bool, var_499_float); // 0x38b NEW_2
	StopAsync(); // 0x38d Func
	
Label_911:
	var_356_bool = 1; // 0x38f MovB
	return 8; // 0x390 Return
	
Label_864:
	func_2113(); // 0x361 NEW_2
	var_507_string = "all"; // 0x363 PushS
	PlayAnimation(var_507_string, var_365_string); // 0x364 Func
	WaitForAnimEnd(); // 0x366 Func
	func_1115(var_365_string); // 0x369 NEW_2
	var_508_bool = 0; var_509_object = Obj(); // 0x36b PushV
	var_509_object = var_0_object; // 0x36c MovT
	func_1698(var_508_bool, var_509_object); // 0x36d NEW_2
	var_510_bool = var_508_bool == 0; // 0x36f Not
	if(var_510_bool == 0) goto Label_885; // 0x370 JumpB
	StopAsync(); // 0x371 Func
	var_356_bool = 0; // 0x373 MovB
	return 8; // 0x374 Return
	
Label_885:
	var_511_float = 0; var_512_int = 0; // 0x375 PushV
	var_511_float = var_357_float; // 0x376 Mov
	var_512_int = var_362_int; // 0x377 Mov
	func_737(var_365_string, var_511_float, var_512_int); // 0x378 NEW_2
	var_513_int = 1; // 0x37a PushI
	var_364_int = var_364_int + var_513_int; // 0x37b Add2
	goto Label_853; // 0x37c Jump
}


func_1834(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x72a PushV
	GetScene(var_28_object); // 0x72b Func
	var_30_string = "scripted"; // 0x72d PushS
	var_31_string = "blood_dir.xml"; // 0x72e PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x72f Func
	var_32_object = Obj(); // 0x731 PushV
	var_32_object = var_21_object; // 0x732 Mov
	func_1722(var_32_object); // 0x733 NEW_2
	return 4; // 0x735 Return
}


func_1848()
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); // 0x738 PushV
	GetPosition(var_245_cvector); // 0x739 ObjFunc
	GetPosition(var_246_cvector); // 0x73b Func
	var_247_cvector = var_245_cvector - var_246_cvector; // 0x73d Sub2
	var_248_float = GetByIndex(var_247_cvector, 0); // 0x73e PushE
	var_249_float = GetByIndex(var_247_cvector, 2); // 0x73f PushE
	RotateAsync(var_248_float, var_249_float); // 0x740 Func
	return 6; // 0x742 Return
}


func_318(var_0_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x13e PushV
	var_0_object = 1; // 0x13f TMovB
	IsLoaded(var_19_bool); // 0x140 Func
	var_20_bool = 0; // 0x142 PushV
	var_20_bool = 0; // 0x143 MovB
	var_21_bool = var_19_bool == 0; // 0x144 Not
	if(var_21_bool == 0) goto Label_331; // 0x145 JumpB
	var_22_bool = 0; // 0x146 PushV
	func_367(var_22_bool); // 0x147 NEW_2
	if(var_22_bool == 0) goto Label_331; // 0x149 JumpB
	var_20_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_20_bool == 0) goto Label_337; // 0x14b JumpB
	var_23_object = Obj(); // 0x14c PushV
	func_2041(var_23_object); // 0x14d NEW_2
	RemoveActor(var_23_object); // 0x14f Func
	
Label_337:
	return 2; // 0x151 Return
}


func_1342(var_0_object, var_1_object, var_23_int)
{
	var_24_int = 0; // 0x53f PushI
	var_25_bool = var_23_int != var_24_int; // 0x540 Neq
	if(var_25_bool == 0) goto Label_1347; // 0x541 JumpB
	return 0; // 0x542 Return
	
Label_1347:
	var_26_bool = 0; var_27_object = Obj(); // 0x543 PushV
	var_27_object = var_1_object; // 0x544 MovT
	func_1380(var_26_bool, var_27_object); // 0x545 NEW_2
	var_62_bool = var_26_bool == 0; // 0x547 Not
	if(var_62_bool == 0) goto Label_1354; // 0x548 JumpB
	var_0_object = 1; // 0x549 TMovB
	
Label_1354:
	var_63_int = 0; // 0x54a PushI
	KillTimer(var_63_int); // 0x54b Func
	Stop(); // 0x54d Func
	return 0; // 0x54f Return
}


func_1859(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x743 PushV
	IsLoaded(var_19_bool); // 0x744 Func
	var_17_bool = var_19_bool; // 0x746 Mov
	return 2; // 0x747 Return
}


func_1864(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x748 PushV
	GetPosition(var_40_cvector); // 0x749 ObjFunc
	GetEyesHeight(var_39_float); // 0x74b ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x74d PushE
	var_48_float = var_48_float + var_39_float; // 0x74e Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x74f PopE
	GetPosition(var_41_cvector); // 0x750 Func
	GetEyesHeight(var_39_float); // 0x752 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x754 PushE
	var_49_float = var_49_float + var_39_float; // 0x755 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x756 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x757 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x758 PushE
	var_50_float = 0; // 0x759 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x75a PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x75b Or
	var_52_float = sqrt(var_51_int); // 0x75c Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x75d Div2
	var_43_cvector = -var_42_cvector; // 0x75e Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x75f Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x760 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x761 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x762 Xor2
	func_2047(var_54_cvector, var_55_cvector); // 0x763 NEW_2
	var_62_int = 25; // 0x765 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x766 Mult
	var_64_int = var_53_float + var_63_float; // 0x767 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x768 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x769 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x76a Add2
	IsOverrideActive(var_46_bool); // 0x76b Func
	var_66_bool = var_46_bool; // 0x76d Push
	if(var_66_bool == 0) goto Label_1905; // 0x76e JumpB
	var_27_bool = 0; // 0x76f MovB
	return 18; // 0x770 Return
	
Label_1905:
	StopWorld(); // 0x771 Func
	var_67_bool = 1; // 0x773 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x774 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x776 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x777 PushE
	Rotate(var_68_float, var_69_float); // 0x778 Func
	var_70_bool = 0; // 0x77a PushV
	func_2199(var_70_bool); // 0x77b NEW_2
	if(var_70_bool == 0) goto Label_1919; // 0x77d JumpB
	goto Label_1927; // 0x77e Jump
	
Label_1927:
	CameraWaitForPlayFinish(); // 0x787 Func
	ResumeWorld(); // 0x789 Func
	var_27_bool = 1; // 0x78b MovB
	return 18; // 0x78c Return
	
Label_1919:
	var_71_string = "head"; // 0x77f PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x780 Func
	var_72_bool = var_47_bool; // 0x782 Push
	if(var_72_bool == 0) goto Label_1927; // 0x783 JumpB
	var_73_string = "head"; // 0x784 PushS
	LookAsyncCamera(var_73_string); // 0x785 Func
}


func_338(var_531_string)
{
	var_532_string = "cleanup"; // 0x153 PushS
	var_533_bool = var_531_string == var_532_string; // 0x154 Eq
	if(var_533_bool == 0) goto Label_345; // 0x155 JumpB
	func_318(var_531_string); // 0x157 NEW_2
	
Label_345:
	return 0; // 0x159 Return
}


func_1364(var_0_object)
{
	var_0_object = 1; // 0x554 TMovB
	var_19_int = 0; // 0x555 PushI
	KillTimer(var_19_int); // 0x556 Func
	Stop(); // 0x558 Func
	return 0; // 0x55a Return
}


func_1380(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x565 PushV
	var_29_object = var_27_object; // 0x566 Mov
	func_1698(var_28_bool, var_29_object); // 0x567 NEW_2
	var_26_bool = var_28_bool; // 0x568 Mov
	return 0; // 0x56a Return
}


func_1387(var_207_string)
{
	var_207_string = "walk"; // 0x56b MovS
	return 0; // 0x56c Return
}


func_1389(var_208_string)
{
	var_208_string = "run"; // 0x56d MovS
	return 0; // 0x56e Return
}


func_367(var_17_bool)
{
	var_17_bool = 1; // 0x16f MovB
	return 0; // 0x170 Return
}


func_1391(var_17_object)
{
	EventDisable(0); // 0x570 EventDisable
	var_18_object = Obj(); // 0x571 PushV
	var_18_object = var_17_object; // 0x572 Mov
	func_1416(var_18_object); // 0x573 NEW_2
	var_98_int = 50; // 0x575 PushI
	var_99_int = 40; // 0x576 PushI
	SetRTEnvelope(var_98_int, var_99_int); // 0x577 Func
	EventEnable(0); // 0x579 EventEnable
	
Label_1402:
	Hold(); // 0x57a Func
	goto Label_1402; // 0x57c Jump
}


func_369()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; // 0x171 PushV
	WaitForAnimEnd(); // 0x172 Func
	var_38_bool = 0; // 0x174 PushV
	func_1859(var_38_bool); // 0x175 NEW_2
	var_39_bool = var_38_bool == 0; // 0x177 Not
	if(var_39_bool == 0) goto Label_378; // 0x178 JumpB
	return 14; // 0x179 Return
	
Label_378:
	var_40_int = 0; // 0x17a PushV
	func_2131(var_40_int); // 0x17b NEW_2
	var_31_int = var_40_int; // 0x17c Mov
	var_32_int = 0; // 0x17e MovI
	
Label_383:
	var_53_bool = 0; // 0x17f PushV
	var_53_bool = 0; // 0x180 MovB
	var_54_int = 5; // 0x181 PushI
	var_55_bool = var_32_int < var_54_int; // 0x182 LT
	if(var_55_bool == 0) goto Label_393; // 0x183 JumpB
	var_56_bool = 0; // 0x184 PushV
	func_1859(var_56_bool); // 0x185 NEW_2
	if(var_56_bool == 0) goto Label_393; // 0x187 JumpB
	var_53_bool = 1; // 0x188 MovB
	
Label_393:
	if(var_53_bool == 0) goto Label_445; // 0x189 JumpB
	var_57_int = 3; // 0x18a PushI
	irand(var_33_int, var_57_int); // 0x18b Func
	var_58_int = 0; // 0x18d PushI
	var_59_bool = var_33_int == var_58_int; // 0x18e Eq
	if(var_59_bool == 0) goto Label_417; // 0x18f JumpB
	var_60_int = var_31_int; // 0x190 Push
	if(var_60_int == 0) goto Label_416; // 0x191 JumpB
	irand(var_34_int, var_31_int); // 0x192 Func
	var_61_string = "all"; // 0x194 PushS
	var_62_string = ""; var_63_int = 0; // 0x195 PushV
	var_63_int = var_34_int; // 0x196 Mov
	func_2124(var_62_string, var_63_int); // 0x197 NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x199 Func
	WaitForAnimEnd(var_35_bool); // 0x19b Func
	var_64_bool = var_35_bool == 0; // 0x19d Not
	if(var_64_bool == 0) goto Label_416; // 0x19e JumpB
	goto Label_445; // 0x19f Jump
	
Label_445:
	ResetAAS(); // 0x1bd Func
	return 14; // 0x1bf Return
	
Label_416:
	goto Label_434; // 0x1a0 Jump
	
Label_434:
	var_65_bool = 0; // 0x1b2 PushV
	func_448(var_65_bool); // 0x1b3 NEW_2
	var_66_bool = var_65_bool == 0; // 0x1b5 Not
	if(var_66_bool == 0) goto Label_440; // 0x1b6 JumpB
	goto Label_445; // 0x1b7 Jump
	
Label_440:
	ResetAAS(); // 0x1b8 Func
	var_67_int = 1; // 0x1ba PushI
	var_32_int = var_32_int + var_67_int; // 0x1bb Add2
	goto Label_383; // 0x1bc Jump
	
Label_417:
	var_68_int = 1; // 0x1a1 PushI
	var_69_bool = var_33_int == var_68_int; // 0x1a2 Eq
	if(var_69_bool == 0) goto Label_431; // 0x1a3 JumpB
	var_70_int = 4; // 0x1a4 PushI
	rand(var_36_float, var_70_int); // 0x1a5 Func
	var_71_int = 1; // 0x1a7 PushI
	var_72_int = var_36_float + var_71_int; // 0x1a8 Add
	Sleep(var_72_int, var_37_bool); // 0x1a9 Func
	var_73_bool = var_37_bool == 0; // 0x1ab Not
	if(var_73_bool == 0) goto Label_430; // 0x1ac JumpB
	goto Label_445; // 0x1ad Jump
	
Label_430:
	goto Label_434; // 0x1ae Jump
	
Label_431:
	var_74_int = var_32_int; // 0x1af Push
	if(var_74_int == 0) goto Label_434; // 0x1b0 JumpB
	goto Label_445; // 0x1b1 Jump
}


func_1416(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x588 PushV
	var_39_bool = var_18_object == 0; // 0x589 NullEq
	if(var_39_bool == 0) goto Label_1424; // 0x58a JumpB
	var_40_string = ""; // 0x58b PushV
	var_40_string = "fdie"; // 0x58c MovS
	func_1507(var_40_string); // 0x58d NEW_2
	goto Label_1506; // 0x58f Jump
	
Label_1506:
	return 20; // 0x5e2 Return
	
Label_1424:
	GetPosition(var_29_cvector); // 0x590 ObjFunc
	GetPosition(var_30_cvector); // 0x592 Func
	GetDirection(var_31_cvector); // 0x594 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x596 Sub2
	var_72_float = GetByIndex(var_32_cvector, 0); // 0x597 PushE
	var_73_float = GetByIndex(var_31_cvector, 0); // 0x598 PushE
	var_74_float = var_72_float * var_73_float; // 0x599 Mult
	var_75_float = GetByIndex(var_32_cvector, 2); // 0x59a PushE
	var_76_float = GetByIndex(var_31_cvector, 2); // 0x59b PushE
	var_77_float = var_75_float * var_76_float; // 0x59c Mult
	var_78_int = var_74_float + var_77_float; // 0x59d Add
	var_79_int = 0; // 0x59e PushI
	var_80_bool = var_78_int >= var_79_int; // 0x59f GE
	if(var_80_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_33_string = "fdie"; // 0x5a1 MovS
	goto Label_1444; // 0x5a2 Jump
	
Label_1444:
	RemoveRTEnvelope(); // 0x5a4 Func
	SetDeathState(); // 0x5a6 Func
	Stop(); // 0x5a8 Func
	StopAsync(); // 0x5aa Func
	var_34_object = var_18_object; // 0x5ac Mov
	var_81_string = "GetScriptProperty"; // 0x5ad PushS
	var_82_int = 2; // 0x5ae PushI
	var_83_bool = IsFuncExist(var_18_object, var_81_string, var_82_int); // 0x5af FuncExist
	if(var_83_bool == 0) goto Label_1468; // 0x5b0 JumpB
	var_84_string = "Owner"; // 0x5b1 PushS
	HasScriptProperty(var_35_bool, var_84_string); // 0x5b2 ObjFunc
	var_85_bool = var_35_bool; // 0x5b4 Push
	if(var_85_bool == 0) goto Label_1468; // 0x5b5 JumpB
	var_86_string = "Owner"; // 0x5b6 PushS
	GetScriptProperty(var_34_object, var_86_string); // 0x5b7 ObjFunc
	var_87_bool = var_34_object == 0; // 0x5b9 NullEq
	if(var_87_bool == 0) goto Label_1468; // 0x5ba JumpB
	var_34_object = var_18_object; // 0x5bb Mov
	
Label_1468:
	var_88_string = "@GetEyesHeight"; // 0x5bc PushS
	var_89_int = 1; // 0x5bd PushI
	var_90_bool = IsFuncExist(var_34_object, var_88_string, var_89_int); // 0x5be FuncExist
	if(var_90_bool == 0) goto Label_1483; // 0x5bf JumpB
	GetEyesHeight(var_37_float); // 0x5c0 ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x5c2 MovV
	var_91_float = GetByIndex(var_38_cvector, 1); // 0x5c3 PushE
	var_91_float = var_37_float; // 0x5c4 Mov
	SetByIndex(var_38_cvector, 1) = var_91_float; // 0x5c5 PopE
	var_92_string = "head"; // 0x5c6 PushS
	LookAsync(var_18_object, var_92_string, var_38_cvector); // 0x5c7 Func
	var_36_bool = 1; // 0x5c9 MovB
	goto Label_1484; // 0x5ca Jump
	
Label_1484:
	var_93_string = ""; // 0x5cc PushV
	var_93_string = var_33_string; // 0x5cd Mov
	func_2000(var_93_string); // 0x5ce NEW_2
	var_94_string = "all"; // 0x5d0 PushS
	PlayAnimation(var_94_string, var_33_string); // 0x5d1 Func
	WaitForAnimEnd(); // 0x5d3 Func
	var_95_bool = var_36_bool; // 0x5d5 Push
	if(var_95_bool == 0) goto Label_1500; // 0x5d6 JumpB
	StopAsync(); // 0x5d7 Func
	var_96_string = "head"; // 0x5d9 PushS
	UnlookAsync(var_96_string); // 0x5da Func
	
Label_1500:
	var_97_string = "all"; // 0x5dc PushS
	LockAnimationEnd(var_97_string, var_33_string); // 0x5dd Func
	RemoveEnvelope(); // 0x5df Func
	var_34_object = 0; // 0x5e1 SetNull
	
Label_1483:
	var_36_bool = 0; // 0x5cb MovB
	
Label_1443:
	var_33_string = "bdie"; // 0x5a3 MovS
}


func_1933()
{
	var_139_bool = 0; var_140_bool = 0; // 0x78d PushV
	var_141_bool = 1; // 0x78e PushB
	CameraSwitchToNormal(var_141_bool); // 0x78f Func
	var_142_bool = 0; // 0x791 PushV
	func_2199(var_142_bool); // 0x792 NEW_2
	if(var_142_bool == 0) goto Label_1942; // 0x794 JumpB
	goto Label_1950; // 0x795 Jump
	
Label_1950:
	return 2; // 0x79e Return
	
Label_1942:
	var_143_string = "head"; // 0x796 PushS
	HasAnimationTrack(var_140_bool, var_143_string); // 0x797 Func
	var_144_bool = var_140_bool; // 0x799 Push
	if(var_144_bool == 0) goto Label_1950; // 0x79a JumpB
	var_145_string = "head"; // 0x79b PushS
	UnlookAsync(var_145_string); // 0x79c Func
}


func_913(var_498_bool, var_499_float)
{
	var_500_float = 0; var_501_bool = 0; var_502_float = 0; var_503_bool = 0; // 0x391 PushV
	rand(var_502_float); // 0x392 Func
	var_504_bool = var_502_float < var_499_float; // 0x394 LT
	if(var_504_bool == 0) goto Label_933; // 0x395 JumpB
	
Label_918:
	IsAnimationPlaying(var_503_bool); // 0x396 Func
	var_505_bool = var_503_bool == 0; // 0x398 Not
	if(var_505_bool == 0) goto Label_923; // 0x399 JumpB
	goto Label_932; // 0x39a Jump
	
Label_932:
	goto Label_938; // 0x3a4 Jump
	
Label_938:
	var_498_bool = 0; // 0x3aa MovB
	return 4; // 0x3ab Return
	
Label_923:
	var_506_bool = 0; // 0x39b PushV
	func_1011(var_506_bool); // 0x39c NEW_2
	if(var_506_bool == 0) goto Label_929; // 0x39e JumpB
	var_498_bool = 1; // 0x39f MovB
	return 4; // 0x3a0 Return
	
Label_929:
	sync(); // 0x3a1 Func
	goto Label_918; // 0x3a3 Jump
	
Label_933:
	WaitForAnimEnd(); // 0x3a5 Func
	func_1115(var_503_bool); // 0x3a8 NEW_2
}


func_1951(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x79f PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x7a0 Func
	var_128_bool = var_125_bool; // 0x7a2 Push
	if(var_128_bool == 0) goto Label_1962; // 0x7a3 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x7a4 Func
	var_129_bool = 0; // 0x7a6 PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x7a7 Func
	goto Label_1966; // 0x7a9 Jump
	
Label_1966:
	return 6; // 0x7ae Return
	
Label_1962:
	var_130_string = "Can't find lsh animation : "; // 0x7aa PushS
	var_131_int = var_130_string + var_121_string; // 0x7ab Add
	Trace(var_131_int); // 0x7ac Func
}


func_940(var_0_object, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; // 0x3ac PushV
	
Label_941:
	IsAnimationPlaying(var_302_bool); // 0x3ad Func
	var_307_bool = var_302_bool == 0; // 0x3af Not
	if(var_307_bool == 0) goto Label_946; // 0x3b0 JumpB
	goto Label_978; // 0x3b1 Jump
	
Label_978:
	func_1115(var_306_float); // 0x3d3 NEW_2
	var_295_bool = 0; // 0x3d5 MovB
	return 10; // 0x3d6 Return
	
Label_946:
	var_308_bool = 0; // 0x3b2 PushV
	func_1011(var_308_bool); // 0x3b3 NEW_2
	if(var_308_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_295_bool = 1; // 0x3b6 MovB
	return 10; // 0x3b7 Return
	
Label_952:
	var_351_bool = 0; var_352_object = Obj(); // 0x3b8 PushV
	var_352_object = var_0_object; // 0x3b9 MovT
	func_1698(var_351_bool, var_352_object); // 0x3ba NEW_2
	var_353_bool = var_351_bool == 0; // 0x3bc Not
	if(var_353_bool == 0) goto Label_960; // 0x3bd JumpB
	var_295_bool = 0; // 0x3be MovB
	return 10; // 0x3bf Return
	
Label_960:
	GetPFPosition(var_303_cvector); // 0x3c0 TObjFunc
	GetPFPosition(var_304_cvector); // 0x3c2 Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x3c4 Sub2
	var_306_float = var_305_cvector | var_305_cvector; // 0x3c5 Or2
	var_354_float = var_296_float * var_296_float; // 0x3c6 Mult
	var_355_bool = var_306_float < var_354_float; // 0x3c7 LT
	if(var_355_bool == 0) goto Label_975; // 0x3c8 JumpB
	var_356_bool = 0; var_357_float = 0; // 0x3c9 PushV
	var_357_float = var_296_float; // 0x3ca Mov
	func_776(var_306_float, var_356_bool, var_357_float); // 0x3cb NEW_2
	var_295_bool = 1; // 0x3cd MovB
	return 10; // 0x3ce Return
	
Label_975:
	sync(); // 0x3cf Func
	goto Label_941; // 0x3d1 Jump
}


func_1967(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x7af PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x7b0 Func
	var_109_bool = var_106_bool; // 0x7b2 Push
	if(var_109_bool == 0) goto Label_1977; // 0x7b3 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x7b4 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x7b6 Func
	goto Label_1981; // 0x7b8 Jump
	
Label_1981:
	return 6; // 0x7bd Return
	
Label_1977:
	var_110_string = "Can't find lsh animation : "; // 0x7b9 PushS
	var_111_int = var_110_string + var_99_string; // 0x7ba Add
	Trace(var_111_int); // 0x7bb Func
}


func_1982(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); // 0x7be PushV
	GetEyesHeight(var_22_float); // 0x7bf ObjFunc
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x7c1 MovV
	var_24_float = GetByIndex(var_23_cvector, 1); // 0x7c2 PushE
	var_24_float = var_22_float; // 0x7c3 Mov
	SetByIndex(var_23_cvector, 1) = var_24_float; // 0x7c4 PopE
	var_25_string = "head"; // 0x7c5 PushS
	LookAsync(var_19_object, var_25_string, var_23_cvector); // 0x7c6 Func
	return 4; // 0x7c8 Return
}


func_448(var_65_bool)
{
	var_65_bool = 1; // 0x1c0 MovB
	return 0; // 0x1c1 Return
}


func_450()
{
	StopAnimation(); // 0x1c2 Func
	StopGroup0(); // 0x1c4 Func
	return 0; // 0x1c6 Return
}


func_455(var_26_object)
{
	
Label_456:
	var_37_object = Obj(); var_38_bool = 0; var_39_float = 0; // 0x1c8 PushV
	var_37_object = var_26_object; // 0x1c9 Mov
	var_38_bool = 1; // 0x1ca MovB
	var_39_float = 180.0; // 0x1cb MovF
	func_473(var_33_int, var_34_bool, var_35_float, var_36_int, var_26_object, var_37_object, var_38_bool, var_39_float); // 0x1cc NEW_2
	var_530_int = 1; // 0x1ce PushI
	Sleep(var_530_int); // 0x1cf Func
	goto Label_456; // 0x1d1 Jump
}


func_1993()
{
	var_18_bool = 0; // 0x7c9 PushV
	func_2199(var_18_bool); // 0x7ca NEW_2
	if(var_18_bool == 0) goto Label_1999; // 0x7cc JumpB
	lshStopSpeech(); // 0x7cd Func
	
Label_1999:
	return 0; // 0x7cf Return
}


func_2000(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x7d0 PushV
	IsExisting3DSound(var_50_bool, var_41_string); // 0x7d1 Func
	var_58_bool = var_50_bool == 0; // 0x7d3 Not
	if(var_58_bool == 0) goto Label_2025; // 0x7d4 JumpB
	var_51_int = 0; // 0x7d5 MovI
	
Label_2006:
	var_59_int = 1; // 0x7d6 PushI
	var_60_int = var_51_int + var_59_int; // 0x7d7 Add
	var_61_int = var_41_string + var_60_int; // 0x7d8 Add
	IsExisting3DSound(var_52_bool, var_61_int); // 0x7d9 Func
	var_62_bool = var_52_bool == 0; // 0x7db Not
	if(var_62_bool == 0) goto Label_2014; // 0x7dc JumpB
	goto Label_2017; // 0x7dd Jump
	
Label_2017:
	var_63_bool = var_51_int == 0; // 0x7e1 Not
	if(var_63_bool == 0) goto Label_2020; // 0x7e2 JumpB
	return 16; // 0x7e3 Return
	
Label_2020:
	irand(var_53_int, var_51_int); // 0x7e4 Func
	var_64_int = 1; // 0x7e6 PushI
	var_65_int = var_53_int + var_64_int; // 0x7e7 Add
	var_41_string = var_41_string + var_65_int; // 0x7e8 Add2
	
Label_2025:
	Is3DSoundLoaded(var_54_bool, var_41_string); // 0x7e9 Func
	var_66_bool = var_54_bool; // 0x7eb Push
	if(var_66_bool == 0) goto Label_2040; // 0x7ec JumpB
	GetEyesHeight(var_55_float); // 0x7ed Func
	GetDirection(var_56_cvector); // 0x7ef Func
	var_67_int = 50; // 0x7f1 PushI
	var_57_cvector = var_56_cvector * var_67_int; // 0x7f2 Mult2
	var_68_float = GetByIndex(var_57_cvector, 1); // 0x7f3 PushE
	var_68_float = var_68_float + var_55_float; // 0x7f4 Add2
	SetByIndex(var_57_cvector, 1) = var_68_float; // 0x7f5 PopE
	PlayGlobalSound(var_41_string, var_57_cvector); // 0x7f6 Func
	
Label_2040:
	return 16; // 0x7f8 Return
	
Label_2014:
	var_69_int = 1; // 0x7de PushI
	var_51_int = var_51_int + var_69_int; // 0x7df Add2
	goto Label_2006; // 0x7e0 Jump
}


func_467(var_404_float)
{
	var_404_float = 0.1; // 0x1d4 MovF
	return 0; // 0x1d5 Return
}


func_470(var_411_int)
{
	var_411_int = 0; // 0x1d7 MovI
	return 0; // 0x1d8 Return
}


func_983(var_0_object, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; // 0x3d7 PushV
	var_321_bool = 0; var_322_object = Obj(); // 0x3d8 PushV
	var_322_object = var_0_object; // 0x3d9 MovT
	func_1698(var_321_bool, var_322_object); // 0x3da NEW_2
	var_323_bool = var_321_bool == 0; // 0x3dc Not
	if(var_323_bool == 0) goto Label_992; // 0x3dd JumpB
	var_310_bool = 0; // 0x3de MovB
	return 10; // 0x3df Return
	
Label_992:
	var_324_bool = 0; // 0x3e0 PushV
	func_1072(var_320_float, var_324_bool); // 0x3e1 NEW_2
	if(var_324_bool == 0) goto Label_1009; // 0x3e3 JumpB
	GetPFPosition(var_316_cvector); // 0x3e4 TObjFunc
	GetPFPosition(var_317_cvector); // 0x3e6 Func
	var_318_cvector = var_316_cvector - var_317_cvector; // 0x3e8 Sub2
	var_319_float = var_318_cvector | var_318_cvector; // 0x3e9 Or2
	GetAttackDistance(var_320_float); // 0x3ea TObjFunc
	var_325_int = 50; // 0x3ec PushI
	var_320_float = var_320_float + var_325_int; // 0x3ed Add2
	var_326_float = var_320_float * var_320_float; // 0x3ee Mult
	var_310_bool = var_319_float <= var_326_float; // 0x3ef LE2
	return 10; // 0x3f0 Return
	
Label_1009:
	var_310_bool = 0; // 0x3f1 MovB
	return 10; // 0x3f2 Return
}


func_473(var_0_object, var_3_string, var_5_bool, var_37_object, var_38_bool, var_39_float, var_144_bool, var_236_bool)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_float = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_float = 0; // 0x1d9 PushV
	func_702(var_59_cvector, var_60_bool, var_61_float); // 0x1db NEW_2
	var_5_bool = 0; // 0x1dd TMovI
	var_84_string = "@GetAttackDistance"; // 0x1de PushS
	var_85_int = 1; // 0x1df PushI
	var_86_bool = IsFuncExist(var_37_object, var_84_string, var_85_int); // 0x1e0 FuncExist
	if(var_86_bool == 0) goto Label_487; // 0x1e1 JumpB
	GetAttackDistance(var_51_float); // 0x1e2 ObjFunc
	var_87_int = 50; // 0x1e4 PushI
	var_51_float = var_51_float + var_87_int; // 0x1e5 Add2
	goto Label_488; // 0x1e6 Jump
	
Label_488:
	var_88_int = 150; // 0x1e8 PushI
	var_89_bool = var_51_float >= var_88_int; // 0x1e9 GE
	if(var_89_bool == 0) goto Label_492; // 0x1ea JumpB
	var_51_float = 150; // 0x1eb MovI
	
Label_492:
	var_3_string = 0; // 0x1ec TMovB
	var_0_object = var_37_object; // 0x1ed TMov
	IsPlayerActor(var_0_object, var_54_bool); // 0x1ee Func
	var_90_bool = var_54_bool; // 0x1f0 Push
	if(var_90_bool == 0) goto Label_506; // 0x1f1 JumpB
	var_91_string = "attack"; // 0x1f2 PushS
	PlayGlobalMusic(var_91_string); // 0x1f3 Func
	var_92_object = Obj(); // 0x1f5 PushV
	func_2041(var_92_object); // 0x1f6 NEW_2
	SendPlayerEnemy(var_37_object, var_92_object); // 0x1f8 Func
	
Label_506:
	var_93_bool = var_38_bool; // 0x1fa Push
	if(var_93_bool == 0) goto Label_510; // 0x1fb JumpB
	var_55_bool = 0; // 0x1fc MovB
	goto Label_511; // 0x1fd Jump
	
Label_511:
	var_94_float = 400.0; // 0x1ff PushF
	var_56_float = var_94_float + var_51_float; // 0x200 Add2
	
Label_513:
	var_95_bool = 0; // 0x201 PushV
	var_95_bool = 0; // 0x202 MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x203 PushV
	var_97_object = var_0_object; // 0x204 MovT
	func_1698(var_96_bool, var_97_object); // 0x205 NEW_2
	if(var_96_bool == 0) goto Label_523; // 0x207 JumpB
	var_130_bool = var_3_string == 0; // 0x208 Not
	if(var_130_bool == 0) goto Label_523; // 0x209 JumpB
	var_95_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_95_bool == 0) goto Label_685; // 0x20b JumpB
	func_1115(var_61_float); // 0x20d NEW_2
	GetPFPosition(var_52_cvector); // 0x20f TObjFunc
	GetPFPosition(var_53_cvector); // 0x211 Func
	var_57_cvector = var_52_cvector - var_53_cvector; // 0x213 Sub2
	var_58_float = var_57_cvector | var_57_cvector; // 0x214 Or2
	var_136_float = var_56_float * var_56_float; // 0x215 Mult
	var_137_bool = var_58_float >= var_136_float; // 0x216 GE
	if(var_137_bool == 0) goto Label_551; // 0x217 JumpB
	var_138_bool = 0; var_139_object = Obj(); var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_bool = 0; // 0x218 PushV
	var_139_object = var_0_object; // 0x219 MovT
	var_140_float = var_51_float; // 0x21a Mov
	var_141_float = 10000.0; // 0x21b MovF
	var_142_bool = 1; // 0x21c MovB
	var_143_bool = 0; // 0x21d MovB
	TaskCall(4); // 0x21e TaskCall
	func_1135(var_146_bool, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool); // 0x21f NEW_2
	TaskReturn(); // 0x220 TaskReturn
	var_221_bool = var_144_bool == 0; // 0x222 Not
	if(var_221_bool == 0) goto Label_549; // 0x223 JumpB
	goto Label_685; // 0x224 Jump
	
Label_685:
	WaitForAnimEnd(); // 0x2ad Func
	var_222_string = var_3_string; // 0x2af PushT
	if(var_222_string == 0) goto Label_690; // 0x2b0 JumpB
	return 22; // 0x2b1 Return
	
Label_690:
	var_223_string = "all"; // 0x2b2 PushS
	var_224_string = "attack_off"; // 0x2b3 PushS
	PlayAnimation(var_223_string, var_224_string); // 0x2b4 Func
	WaitForAnimEnd(); // 0x2b6 Func
	var_225_bool = var_54_bool; // 0x2b8 Push
	if(var_225_bool == 0) goto Label_701; // 0x2b9 JumpB
	var_226_float = 2.0; // 0x2ba PushF
	Sleep(var_226_float); // 0x2bb Func
	
Label_701:
	return 22; // 0x2bd Return
	
Label_549:
	var_55_bool = 0; // 0x225 MovB
	goto Label_684; // 0x226 Jump
	
Label_684:
	goto Label_513; // 0x2ac Jump
	
Label_551:
	var_227_float = var_39_float * var_39_float; // 0x227 Mult
	var_228_bool = var_58_float >= var_227_float; // 0x228 GE
	if(var_228_bool == 0) goto Label_676; // 0x229 JumpB
	GetPFPosition(var_59_cvector); // 0x22a TObjFunc
	CanReachByPF(var_60_bool, var_59_cvector); // 0x22c Func
	var_229_bool = var_60_bool == 0; // 0x22e Not
	if(var_229_bool == 0) goto Label_575; // 0x22f JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0; // 0x230 PushV
	var_231_object = var_0_object; // 0x231 MovT
	var_232_float = var_51_float; // 0x232 Mov
	var_233_float = 10000.0; // 0x233 MovF
	var_234_bool = 1; // 0x234 MovB
	var_235_bool = 0; // 0x235 MovB
	TaskCall(4); // 0x236 TaskCall
	func_1135(var_238_bool, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool); // 0x237 NEW_2
	TaskReturn(); // 0x238 TaskReturn
	var_239_bool = var_236_bool == 0; // 0x23a Not
	if(var_239_bool == 0) goto Label_573; // 0x23b JumpB
	goto Label_685; // 0x23c Jump
	
Label_573:
	var_55_bool = 0; // 0x23d MovB
	goto Label_513; // 0x23e Jump
	
Label_575:
	var_240_bool = var_55_bool == 0; // 0x23f Not
	if(var_240_bool == 0) goto Label_600; // 0x240 JumpB
	var_241_object = Obj(); // 0x241 PushV
	var_241_object = var_0_object; // 0x242 MovT
	func_1848(); // 0x243 NEW_2
	var_250_string = "all"; // 0x245 PushS
	var_251_string = "attack_on"; // 0x246 PushS
	PlayAnimation(var_250_string, var_251_string); // 0x247 Func
	WaitForAnimEnd(); // 0x249 Func
	func_1115(var_61_float); // 0x24c NEW_2
	StopAsync(); // 0x24e Func
	var_55_bool = 1; // 0x250 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x251 PushV
	var_253_object = var_0_object; // 0x252 MovT
	func_1698(var_252_bool, var_253_object); // 0x253 NEW_2
	var_254_bool = var_252_bool == 0; // 0x255 Not
	if(var_254_bool == 0) goto Label_600; // 0x256 JumpB
	goto Label_685; // 0x257 Jump
	
Label_600:
	rand(var_61_float); // 0x258 Func
	var_255_bool = 0; // 0x25a PushV
	var_255_bool = 1; // 0x25b MovB
	var_256_float = 0.25; // 0x25c PushF
	var_257_bool = var_61_float < var_256_float; // 0x25d LT
	if(var_257_bool == 0) goto Label_612; // 0x25e JumpB
	var_258_bool = 0; // 0x25f PushV
	func_1072(var_255_bool, var_258_bool); // 0x260 NEW_2
	if(var_258_bool == 0) goto Label_612; // 0x262 JumpB
	var_255_bool = 0; // 0x263 MovB
	
Label_612:
	if(var_255_bool == 0) goto Label_629; // 0x264 JumpB
	Face(var_0_object); // 0x265 Func
	func_1122(); // 0x268 NEW_2
	var_293_string = "all"; // 0x26a PushS
	var_294_string = "attack_stay"; // 0x26b PushS
	PlayAnimation(var_293_string, var_294_string); // 0x26c Func
	var_295_bool = 0; var_296_float = 0; // 0x26e PushV
	var_296_float = var_39_float; // 0x26f Mov
	func_940(var_61_float, var_295_bool, var_296_float); // 0x270 NEW_2
	StopAsync(); // 0x272 Func
	goto Label_675; // 0x274 Jump
	
Label_675:
	goto Label_684; // 0x2a3 Jump
	
Label_629:
	Face(var_0_object); // 0x275 Func
	var_514_string = "all"; // 0x277 PushS
	var_515_string = "fjump"; // 0x278 PushS
	PlayAnimation(var_514_string, var_515_string); // 0x279 Func
	WaitForAnimEnd(); // 0x27b Func
	func_1115(var_61_float); // 0x27e NEW_2
	var_516_cvector = CVector(0.0, 0.0, 0.0); // 0x280 PushVec
	SetSpeed(var_516_cvector); // 0x281 Func
	Stop(); // 0x283 Func
	StopAsync(); // 0x285 Func
	var_517_bool = 0; // 0x287 PushV
	func_1072(var_61_float, var_517_bool); // 0x288 NEW_2
	var_518_bool = var_517_bool == 0; // 0x28a Not
	if(var_518_bool == 0) goto Label_675; // 0x28b JumpB
	var_519_bool = 0; var_520_object = Obj(); // 0x28c PushV
	var_520_object = var_0_object; // 0x28d MovT
	func_1698(var_519_bool, var_520_object); // 0x28e NEW_2
	var_521_bool = var_519_bool == 0; // 0x290 Not
	if(var_521_bool == 0) goto Label_659; // 0x291 JumpB
	goto Label_685; // 0x292 Jump
	
Label_659:
	GetPFPosition(var_52_cvector); // 0x293 TObjFunc
	GetPFPosition(var_53_cvector); // 0x295 Func
	var_57_cvector = var_52_cvector - var_53_cvector; // 0x297 Sub2
	var_58_float = var_57_cvector | var_57_cvector; // 0x298 Or2
	var_522_float = var_39_float * var_39_float; // 0x299 Mult
	var_523_bool = var_58_float < var_522_float; // 0x29a LT
	if(var_523_bool == 0) goto Label_675; // 0x29b JumpB
	var_524_bool = 0; var_525_float = 0; // 0x29c PushV
	var_525_float = var_39_float; // 0x29d Mov
	func_776(var_61_float, var_524_bool, var_525_float); // 0x29e NEW_2
	var_526_bool = var_524_bool == 0; // 0x2a0 Not
	if(var_526_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_685; // 0x2a2 Jump
	
Label_676:
	var_527_bool = 0; var_528_float = 0; // 0x2a4 PushV
	var_528_float = var_39_float; // 0x2a5 Mov
	func_776(var_61_float, var_527_bool, var_528_float); // 0x2a6 NEW_2
	var_529_bool = var_527_bool == 0; // 0x2a8 Not
	if(var_529_bool == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_685; // 0x2aa Jump
	
Label_683:
	var_55_bool = 1; // 0x2ab MovB
	
Label_510:
	var_55_bool = 1; // 0x1fe MovB
	
Label_487:
	var_51_float = var_39_float; // 0x1e7 Mov
}


func_1507(var_40_string)
{
	RemoveRTEnvelope(); // 0x5e4 Func
	SetDeathState(); // 0x5e6 Func
	Stop(); // 0x5e8 Func
	StopAsync(); // 0x5ea Func
	StopSecondaryAnimation(); // 0x5ec Func
	var_41_string = ""; // 0x5ee PushV
	var_41_string = var_40_string; // 0x5ef Mov
	func_2000(var_41_string); // 0x5f0 NEW_2
	var_70_string = "all"; // 0x5f2 PushS
	PlayAnimation(var_70_string, var_40_string); // 0x5f3 Func
	WaitForAnimEnd(); // 0x5f5 Func
	var_71_string = "all"; // 0x5f7 PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x5f8 Func
	RemoveEnvelope(); // 0x5fa Func
	return 0; // 0x5fc Return
}


func_1011(var_308_bool)
{
	var_309_bool = 0; // 0x3f3 PushV
	var_309_bool = 0; // 0x3f4 MovB
	var_310_bool = 0; // 0x3f5 PushV
	func_983(var_309_bool, var_310_bool); // 0x3f6 NEW_2
	if(var_310_bool == 0) goto Label_1022; // 0x3f8 JumpB
	var_327_bool = 0; // 0x3f9 PushV
	func_1027(var_308_bool, var_309_bool, var_327_bool); // 0x3fa NEW_2
	if(var_327_bool == 0) goto Label_1022; // 0x3fc JumpB
	var_309_bool = 1; // 0x3fd MovB
	
Label_1022:
	if(var_309_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_308_bool = 1; // 0x3ff MovB
	return 0; // 0x400 Return
	
Label_1025:
	var_308_bool = 0; // 0x401 MovB
	return 0; // 0x402 Return
}


func_2041(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x7f9 PushV
	self(var_17_object); // 0x7fa Func
	var_15_object = var_17_object; // 0x7fc Mov
	return 2; // 0x7fd Return
}


func_2047(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x7ff PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x800 Or
	var_56_float = sqrt(var_57_int); // 0x801 Sqrt2
	var_58_float = 0.0; // 0x802 PushF
	var_59_bool = var_56_float < var_58_float; // 0x803 LT
	if(var_59_bool == 0) goto Label_2055; // 0x804 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x805 MovV
	return 2; // 0x806 Return
	
Label_2055:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x807 Div2
	return 2; // 0x808 Return
}


