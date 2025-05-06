task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_object = Obj(); // 0x6c PushV
	var_17_object = var_16_bool; // 0x6d Mov
	func_2905(var_17_object); // 0x6e NEW_2
	return 0; // 0x70 Return
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x72 PushV
	var_20_object = var_16_bool; // 0x73 Mov
	var_21_object = var_17_object; // 0x74 Mov
	func_2946(var_19_bool, var_20_object, var_21_object); // 0x75 NEW_2
	return 0; // 0x77 Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_string = "kill"; // 0x79 PushS
	var_18_bool = var_16_bool == var_17_string; // 0x7a Eq
	if(var_18_bool == 0) goto Label_125; // 0x7b JumpB
	var_0_bool = 1; // 0x7c TMovB
	
Label_125:
	return 0; // 0x7d Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_object = Obj(); // 0xb7 PushV
	var_17_object = var_16_bool; // 0xb8 Mov
	func_2905(var_17_object); // 0xb9 NEW_2
	return 0; // 0xbb Return
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); // 0xbd PushV
	var_20_object = var_16_bool; // 0xbe Mov
	var_21_object = var_17_object; // 0xbf Mov
	func_2946(var_19_bool, var_20_object, var_21_object); // 0xc0 NEW_2
	return 0; // 0xc2 Return
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_string = "kill"; // 0xc4 PushS
	var_18_bool = var_16_bool == var_17_string; // 0xc5 Eq
	if(var_18_bool == 0) goto Label_202; // 0xc6 JumpB
	var_19_bool = GlobalVars[0]; // 0xc7 PushGE
	var_19_bool = 1; // 0xc8 MovB
	GlobalVars[0] = var_19_bool; // 0xc9 PopGE
	
Label_202:
	return 0; // 0xca Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_object = Obj(); // 0x360 PushV
	var_17_object = var_16_bool; // 0x361 Mov
	func_2905(var_17_object); // 0x362 NEW_2
	return 0; // 0x364 Return
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x366 PushV
	var_20_object = var_16_bool; // 0x367 Mov
	var_21_object = var_17_object; // 0x368 Mov
	func_2946(var_19_bool, var_20_object, var_21_object); // 0x369 NEW_2
	return 0; // 0x36b Return
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_string = "kill"; // 0x36d PushS
	var_18_bool = var_16_bool == var_17_string; // 0x36e Eq
	if(var_18_bool == 0) goto Label_886; // 0x36f JumpB
	var_19_bool = GlobalVars[0]; // 0x370 PushGE
	var_19_bool = 1; // 0x371 MovB
	GlobalVars[0] = var_19_bool; // 0x372 PopGE
	func_950(var_16_bool); // 0x374 NEW_2
	
Label_886:
	return 0; // 0x376 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 1; // 0x3a9 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x3aa Eq
	if(var_18_bool == 0) goto Label_945; // 0x3ab JumpB
	var_19_object = Obj(); // 0x3ac PushV
	var_19_object = var_1_object; // 0x3ad MovT
	func_2702(var_19_object); // 0x3ae NEW_2
	goto Label_949; // 0x3b0 Jump
	
Label_949:
	return 0; // 0x3b5 Return
	
Label_945:
	var_24_int = 0; // 0x3b1 PushV
	var_24_int = var_16_bool; // 0x3b2 Mov
	func_1094(var_15_object, var_16_bool, var_24_int); // 0x3b3 NEW_2
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; // 0x3c4 PushV
	var_17_bool = 0; // 0x3c5 MovB
	var_18_bool = var_1_object == var_16_bool; // 0x3c6 Eq
	if(var_18_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_19_bool = var_2_int == 0; // 0x3c8 Not
	if(var_19_bool == 0) goto Label_971; // 0x3c9 JumpB
	var_17_bool = 1; // 0x3ca MovB
	
Label_971:
	if(var_17_bool == 0) goto Label_977; // 0x3cb JumpB
	var_2_int = 1; // 0x3cc TMovB
	var_20_object = Obj(); // 0x3cd PushV
	var_20_object = var_16_bool; // 0x3ce Mov
	func_2420(var_20_object); // 0x3cf NEW_2
	
Label_977:
	return 0; // 0x3d1 Return
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; // 0x3d3 PushV
	var_17_bool = 0; // 0x3d4 MovB
	var_18_bool = var_1_object == var_16_bool; // 0x3d5 Eq
	if(var_18_bool == 0) goto Label_986; // 0x3d6 JumpB
	var_19_int = var_2_int; // 0x3d7 PushT
	if(var_19_int == 0) goto Label_986; // 0x3d8 JumpB
	var_17_bool = 1; // 0x3d9 MovB
	
Label_986:
	if(var_17_bool == 0) goto Label_991; // 0x3da JumpB
	var_2_int = 0; // 0x3db TMovB
	var_20_string = "head"; // 0x3dc PushS
	UnlookAsync(var_20_string); // 0x3dd Func
	
Label_991:
	return 0; // 0x3df Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x459 Func
	return 0; // 0x45b Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_object, var_16_bool)
{
	func_950(var_16_bool); // 0x465 NEW_2
	var_21_object = Obj(); // 0x467 PushV
	var_21_object = var_16_bool; // 0x468 Mov
	func_3028(); // 0x469 NEW_2
	return 0; // 0x46b Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	func_1156(); // 0x48d NEW_2
	var_18_object = Obj(); // 0x48f PushV
	var_18_object = var_16_bool; // 0x490 Mov
	func_3028(); // 0x491 NEW_2
	return 0; // 0x493 Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_float = 0; var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; // 0x494 PushV
	var_23_int = 130; // 0x495 PushI
	var_24_bool = var_16_bool != var_23_int; // 0x496 Neq
	if(var_24_bool == 0) goto Label_1177; // 0x497 JumpB
	return 6; // 0x498 Return
	
Label_1177:
	IsInWalkMode(var_20_bool); // 0x499 Func
	var_25_bool = var_20_bool; // 0x49b Push
	if(var_25_bool == 0) goto Label_1210; // 0x49c JumpB
	GetBrightness(var_21_float); // 0x49d Func
	var_26_float = 0.2; // 0x49f PushF
	var_22_bool = var_21_float <= var_26_float; // 0x4a0 LE2
	var_27_bool = var_22_bool != var_2_int; // 0x4a1 Neq
	if(var_27_bool == 0) goto Label_1210; // 0x4a2 JumpB
	var_2_int = var_22_bool; // 0x4a3 TMov
	var_28_bool = var_22_bool; // 0x4a4 Push
	if(var_28_bool == 0) goto Label_1210; // 0x4a5 JumpB
	func_1338(var_21_float, var_22_bool); // 0x4a7 NEW_2
	var_29_int = 130; // 0x4a9 PushI
	KillTimer(var_29_int); // 0x4aa Func
	var_30_bool = 0; // 0x4ac PushV
	TaskCall(5); // 0x4ad TaskCall
	func_1488(var_30_bool); // 0x4ae NEW_2
	TaskReturn(); // 0x4af TaskReturn
	if(var_30_bool == 0) goto Label_1206; // 0x4b1 JumpB
	func_1331(var_21_float, var_22_bool); // 0x4b3 NEW_2
	goto Label_1210; // 0x4b5 Jump
	
Label_1210:
	return 6; // 0x4ba Return
	
Label_1206:
	var_34_int = 130; // 0x4b6 PushI
	var_35_float = 0.3; // 0x4b7 PushF
	SetTimer(var_34_int, var_35_float); // 0x4b8 Func
}


task_3_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x4bc PushV
	var_18_object = var_16_bool; // 0x4bd Mov
	func_2881(var_17_bool, var_18_object); // 0x4be NEW_2
	if(var_17_bool == 0) goto Label_1224; // 0x4c0 JumpB
	func_1156(); // 0x4c2 NEW_2
	var_115_object = Obj(); // 0x4c4 PushV
	var_115_object = var_16_bool; // 0x4c5 Mov
	func_2888(var_115_object); // 0x4c6 NEW_2
	
Label_1224:
	return 0; // 0x4c8 Return
}


task_3_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x4ca PushV
	var_18_object = var_16_bool; // 0x4cb Mov
	func_2857(var_17_bool, var_18_object); // 0x4cc NEW_2
	if(var_17_bool == 0) goto Label_1238; // 0x4ce JumpB
	func_1156(); // 0x4d0 NEW_2
	var_115_object = Obj(); // 0x4d2 PushV
	var_115_object = var_16_bool; // 0x4d3 Mov
	func_2864(var_115_object); // 0x4d4 NEW_2
	
Label_1238:
	return 0; // 0x4d6 Return
}


	task_3_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_59_object)
	{
	func_1156(); // 0x4d9 NEW_2
	var_61_object = Obj(); // 0x4db PushV
	var_61_object = var_59_object; // 0x4dc Mov
	func_2918(var_61_object); // 0x4dd NEW_2
	return 0; // 0x4df Return
	}


task_3_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x4e1 PushV
	var_20_object = var_16_bool; // 0x4e2 Mov
	var_21_object = var_17_object; // 0x4e3 Mov
	func_2946(var_19_bool, var_20_object, var_21_object); // 0x4e4 NEW_2
	if(var_19_bool == 0) goto Label_1259; // 0x4e6 JumpB
	var_59_object = Obj(); // 0x4e7 PushV
	var_59_object = var_16_bool; // 0x4e8 Mov
	func_1239(); // 0x4e9 NEW_2
	
Label_1259:
	return 0; // 0x4eb Return
}


task_3_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x52d Func
	return 0; // 0x52f Return
}


task_3_event_28(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool)
{
	Stop(); // 0x530 Func
	return 0; // 0x532 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x54a PushV
	var_18_object = var_16_bool; // 0x54b Mov
	func_2881(var_17_bool, var_18_object); // 0x54c NEW_2
	if(var_17_bool == 0) goto Label_1366; // 0x54e JumpB
	func_1483(); // 0x550 NEW_2
	var_114_object = Obj(); // 0x552 PushV
	var_114_object = var_16_bool; // 0x553 Mov
	func_2888(var_114_object); // 0x554 NEW_2
	
Label_1366:
	return 0; // 0x556 Return
}


task_4_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x558 PushV
	var_18_object = var_16_bool; // 0x559 Mov
	func_2857(var_17_bool, var_18_object); // 0x55a NEW_2
	if(var_17_bool == 0) goto Label_1380; // 0x55c JumpB
	func_1483(); // 0x55e NEW_2
	var_114_object = Obj(); // 0x560 PushV
	var_114_object = var_16_bool; // 0x561 Mov
	func_2864(var_114_object); // 0x562 NEW_2
	
Label_1380:
	return 0; // 0x564 Return
}


	task_4_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_59_object)
	{
	func_1483(); // 0x567 NEW_2
	var_60_object = Obj(); // 0x569 PushV
	var_60_object = var_59_object; // 0x56a Mov
	func_2918(var_60_object); // 0x56b NEW_2
	return 0; // 0x56d Return
	}


task_4_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x56f PushV
	var_20_object = var_16_bool; // 0x570 Mov
	var_21_object = var_17_object; // 0x571 Mov
	func_2946(var_19_bool, var_20_object, var_21_object); // 0x572 NEW_2
	if(var_19_bool == 0) goto Label_1401; // 0x574 JumpB
	var_59_object = Obj(); // 0x575 PushV
	var_59_object = var_16_bool; // 0x576 Mov
	func_1381(); // 0x577 NEW_2
	
Label_1401:
	return 0; // 0x579 Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	func_1494(); // 0x5db NEW_2
	var_17_object = Obj(); // 0x5dd PushV
	var_17_object = var_16_bool; // 0x5de Mov
	func_3028(); // 0x5df NEW_2
	return 0; // 0x5e1 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x5e3 PushV
	var_18_object = var_16_bool; // 0x5e4 Mov
	func_2881(var_17_bool, var_18_object); // 0x5e5 NEW_2
	if(var_17_bool == 0) goto Label_1519; // 0x5e7 JumpB
	func_1494(); // 0x5e9 NEW_2
	var_114_object = Obj(); // 0x5eb PushV
	var_114_object = var_16_bool; // 0x5ec Mov
	func_2888(var_114_object); // 0x5ed NEW_2
	
Label_1519:
	return 0; // 0x5ef Return
}


task_5_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x5f1 PushV
	var_18_object = var_16_bool; // 0x5f2 Mov
	func_2857(var_17_bool, var_18_object); // 0x5f3 NEW_2
	if(var_17_bool == 0) goto Label_1533; // 0x5f5 JumpB
	func_1494(); // 0x5f7 NEW_2
	var_114_object = Obj(); // 0x5f9 PushV
	var_114_object = var_16_bool; // 0x5fa Mov
	func_2864(var_114_object); // 0x5fb NEW_2
	
Label_1533:
	return 0; // 0x5fd Return
}


	task_5_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_59_object)
	{
	func_1494(); // 0x600 NEW_2
	var_60_object = Obj(); // 0x602 PushV
	var_60_object = var_59_object; // 0x603 Mov
	func_2918(var_60_object); // 0x604 NEW_2
	return 0; // 0x606 Return
	}


task_5_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x608 PushV
	var_20_object = var_16_bool; // 0x609 Mov
	var_21_object = var_17_object; // 0x60a Mov
	func_2946(var_19_bool, var_20_object, var_21_object); // 0x60b NEW_2
	if(var_19_bool == 0) goto Label_1554; // 0x60d JumpB
	var_59_object = Obj(); // 0x60e PushV
	var_59_object = var_16_bool; // 0x60f Mov
	func_1534(); // 0x610 NEW_2
	
Label_1554:
	return 0; // 0x612 Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1604(); // 0x653 NEW_2
	var_19_object = Obj(); // 0x655 PushV
	var_19_object = var_16_object; // 0x656 Mov
	func_3028(); // 0x657 NEW_2
	return 0; // 0x659 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1604(); // 0x65c NEW_2
	var_19_object = Obj(); // 0x65e PushV
	var_19_object = var_16_object; // 0x65f Mov
	func_2918(var_19_object); // 0x660 NEW_2
	return 0; // 0x662 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_17_int = 0; // 0x6ca PushI
	var_18_bool = var_16_int != var_17_int; // 0x6cb Neq
	if(var_18_bool == 0) goto Label_1742; // 0x6cc JumpB
	return 0; // 0x6cd Return
	
Label_1742:
	var_19_bool = 0; var_20_object = Obj(); // 0x6ce PushV
	var_20_object = var_1_object; // 0x6cf MovT
	func_1597(var_19_bool, var_20_object); // 0x6d0 NEW_2
	var_44_bool = var_19_bool == 0; // 0x6d2 Not
	if(var_44_bool == 0) goto Label_1749; // 0x6d3 JumpB
	var_0_bool = 1; // 0x6d4 TMovB
	
Label_1749:
	var_45_int = 0; // 0x6d5 PushI
	KillTimer(var_45_int); // 0x6d6 Func
	Stop(); // 0x6d8 Func
	return 0; // 0x6da Return
}


task_6_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object); // 0x6dc Func
	return 0; // 0x6de Return
}


task_8_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x73f PushV
	IsOverrideActive(var_18_bool); // 0x740 Func
	var_19_bool = var_18_bool == 0; // 0x742 Not
	if(var_19_bool == 0) goto Label_1864; // 0x743 JumpB
	var_20_object = Obj(); // 0x744 PushV
	var_20_object = var_16_object; // 0x745 Mov
	func_3040(var_20_object); // 0x746 NEW_2
	
Label_1864:
	return 2; // 0x748 Return
}


task_8_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0; // 0x7bf Return
}


task_8_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0; // 0x7c1 Return
}


task_8_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0; // 0x7c3 Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0xbb6 PushV
	var_20_object = var_16_object; // 0xbb7 Mov
	var_21_int = var_17_int; // 0xbb8 Mov
	var_22_float = var_18_float; // 0xbb9 Mov
	func_2322(var_20_object, var_21_int, var_22_float); // 0xbba NEW_2
	return 0; // 0xbbc Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0xbbe PushV
	var_22_object = var_16_object; // 0xbbf Mov
	var_23_int = var_17_int; // 0xbc0 Mov
	var_24_float = var_18_float; // 0xbc1 Mov
	var_25_cvector = var_20_cvector; // 0xbc2 Mov
	var_26_cvector = var_21_cvector; // 0xbc3 Mov
	func_2390(var_24_float, var_25_cvector, var_26_cvector); // 0xbc4 NEW_2
	return 0; // 0xbc6 Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0xbc7 PushV
	var_20_string = "health"; // 0xbc8 PushS
	var_21_bool = var_17_string == var_20_string; // 0xbc9 Eq
	if(var_21_bool == 0) goto Label_3027; // 0xbca JumpB
	var_22_string = "health"; // 0xbcb PushS
	GetProperty(var_22_string, var_19_float); // 0xbcc Func
	var_23_int = 0; // 0xbce PushI
	var_24_bool = var_19_float <= var_23_int; // 0xbcf LE
	if(var_24_bool == 0) goto Label_3027; // 0xbd0 JumpB
	SignalDeath(var_16_object); // 0xbd1 Func
	
Label_3027:
	return 2; // 0xbd3 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0xbd5 PushV
	var_17_object = var_16_object; // 0xbd6 Mov
	func_2979(var_17_object); // 0xbd7 NEW_2
	return 0; // 0xbd9 Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool)
{
	func_2805(); // 0x478 NEW_2
	var_2_int = 0; // 0x47a TMovB
	
Label_1147:
	var_20_int = 130; // 0x47b PushI
	var_21_float = 0.3; // 0x47c PushF
	SetTimer(var_20_int, var_21_float); // 0x47d Func
	func_1260(var_14_object, var_15_bool); // 0x480 NEW_2
	goto Label_1147; // 0x482 Jump
}


func_0(var_0_bool, var_92_bool, var_93_object, var_210_object)
{
	var_95_object = Obj(); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_object = Obj(); var_99_cvector = CVector(0,0,0); var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_object = Obj(); var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_object = Obj(); var_106_cvector = CVector(0,0,0); var_107_float = 0; var_108_cvector = CVector(0,0,0); // 0x0 PushV
	var_109_object = Obj(); // 0x1 PushV
	var_109_object = var_93_object; // 0x2 Mov
	func_2702(var_109_object); // 0x3 NEW_2
	var_0_bool = 0; // 0x5 TMovB
	var_114_bool = 0; var_115_object = Obj(); // 0x6 PushV
	var_115_object = var_93_object; // 0x7 Mov
	func_2269(var_115_object); // 0x8 NEW_2
	var_128_bool = 0; var_129_object = Obj(); // 0xa PushV
	var_129_object = var_93_object; // 0xb Mov
	func_2201(var_128_bool, var_129_object); // 0xc NEW_2
	var_130_bool = var_128_bool == 0; // 0xe Not
	if(var_130_bool == 0) goto Label_18; // 0xf JumpB
	var_92_bool = 0; // 0x10 MovB
	return 14; // 0x11 Return
	
Label_18:
	func_2711(); // 0x13 NEW_2
	Face(var_93_object); // 0x15 Func
	var_135_string = "all"; // 0x17 PushS
	var_136_string = "aattack_begin1"; // 0x18 PushS
	PlayAnimation(var_135_string, var_136_string); // 0x19 Func
	WaitForAnimEnd(); // 0x1b Func
	var_137_bool = 0; var_138_object = Obj(); // 0x1d PushV
	var_138_object = var_93_object; // 0x1e Mov
	func_2201(var_137_bool, var_138_object); // 0x1f NEW_2
	var_139_bool = var_137_bool == 0; // 0x21 Not
	if(var_139_bool == 0) goto Label_39; // 0x22 JumpB
	StopAsync(); // 0x23 Func
	var_92_bool = 0; // 0x25 MovB
	return 14; // 0x26 Return
	
Label_39:
	var_140_string = "all"; // 0x27 PushS
	var_141_string = "aattack_end1"; // 0x28 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x29 Func
	GetScene(var_102_object); // 0x2b Func
	var_142_string = "knife"; // 0x2d PushS
	GetGeometryLocator(var_142_string, var_104_bool, var_103_cvector); // 0x2e Func
	var_143_string = "scripted"; // 0x30 PushS
	var_144_cvector = CVector(0.0, 0.0, 1.0); // 0x31 PushVec
	var_145_string = "grabitel_knife.xml"; // 0x32 PushS
	AddActorByType(var_105_object, var_143_string, var_102_object, var_103_cvector, var_144_cvector, var_145_string); // 0x33 Func
	var_146_string = "Owner"; // 0x35 PushS
	var_147_object = Obj(); // 0x36 PushV
	func_2570(var_147_object); // 0x37 NEW_2
	SetScriptProperty(var_146_string, var_147_object); // 0x39 ObjFunc
	var_148_string = "Target"; // 0x3b PushS
	SetScriptProperty(var_148_string, var_93_object); // 0x3c ObjFunc
	GetPosition(var_106_cvector); // 0x3e ObjFunc
	GetEyesHeight(var_107_float); // 0x40 ObjFunc
	var_149_float = GetByIndex(var_106_cvector, 1); // 0x42 PushE
	var_150_int = 10; // 0x43 PushI
	var_151_int = var_107_float - var_150_int; // 0x44 Sub
	var_149_float = var_149_float + var_151_int; // 0x45 Add2
	SetByIndex(var_106_cvector, 1) = var_149_float; // 0x46 PopE
	var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_float = 0; // 0x47 PushV
	var_153_cvector = var_103_cvector; // 0x48 Mov
	var_154_cvector = var_106_cvector; // 0x49 Mov
	var_155_float = 2000.0; // 0x4a MovF
	func_2752(var_152_cvector, var_153_cvector, var_154_cvector, var_155_float); // 0x4b NEW_2
	var_108_cvector = var_152_cvector; // 0x4c Mov
	var_203_string = "StartDirection"; // 0x4e PushS
	SetScriptProperty(var_203_string, var_108_cvector); // 0x4f ObjFunc
	WaitForAnimEnd(); // 0x51 Func
	StopAsync(); // 0x53 Func
	var_204_bool = var_0_bool; // 0x55 PushT
	if(var_204_bool == 0) goto Label_89; // 0x56 JumpB
	var_92_bool = 1; // 0x57 MovB
	return 14; // 0x58 Return
	
Label_89:
	var_205_bool = 0; var_206_object = Obj(); // 0x59 PushV
	var_206_object = var_93_object; // 0x5a Mov
	func_2201(var_205_bool, var_206_object); // 0x5b NEW_2
	var_207_bool = var_205_bool == 0; // 0x5d Not
	if(var_207_bool == 0) goto Label_97; // 0x5e JumpB
	var_92_bool = 0; // 0x5f MovB
	return 14; // 0x60 Return
	
Label_97:
	var_208_bool = 0; var_209_object = Obj(); // 0x61 PushV
	var_209_object = var_93_object; // 0x62 Mov
	TaskCall(1); // 0x63 TaskCall
	func_126(var_208_bool, var_209_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_92_bool = var_210_object; // 0x66 Mov
	return 14; // 0x68 Return
}


func_2056(var_545_float, var_546_object, var_547_float, var_548_int)
{
	var_552_int = 0; var_553_string = ""; var_554_int = 0; var_555_float = 0; var_556_float = 0; var_557_float = 0; var_558_int = 0; var_559_string = ""; var_560_int = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0; // 0x808 PushV
	var_564_bool = 0; var_565_object = Obj(); var_566_string = ""; // 0x809 PushV
	var_565_object = var_546_object; // 0x80a Mov
	var_566_string = "health"; // 0x80b MovS
	func_2022(var_564_bool, var_565_object, var_566_string); // 0x80c NEW_2
	var_567_bool = var_564_bool == 0; // 0x80e Not
	if(var_567_bool == 0) goto Label_2066; // 0x80f JumpB
	var_545_float = 0.0; // 0x810 MovF
	return 12; // 0x811 Return
	
Label_2066:
	var_568_bool = 0; var_569_object = Obj(); var_570_string = ""; // 0x812 PushV
	var_569_object = var_546_object; // 0x813 Mov
	var_570_string = "armor"; // 0x814 MovS
	func_2022(var_568_bool, var_569_object, var_570_string); // 0x815 NEW_2
	var_571_bool = var_568_bool == 0; // 0x817 Not
	if(var_571_bool == 0) goto Label_2075; // 0x818 JumpB
	var_558_int = 0; // 0x819 MovI
	goto Label_2078; // 0x81a Jump
	
Label_2078:
	var_572_string = "armor_"; // 0x81e PushS
	var_573_string = ""; var_574_int = 0; // 0x81f PushV
	var_574_int = var_548_int; // 0x820 Mov
	func_1988(var_573_string, var_574_int); // 0x821 NEW_2
	var_559_string = var_572_string + var_573_string; // 0x823 Add2
	var_579_bool = 0; var_580_object = Obj(); var_581_string = ""; // 0x824 PushV
	var_580_object = var_546_object; // 0x825 Mov
	var_581_string = var_559_string; // 0x826 Mov
	func_2022(var_579_bool, var_580_object, var_581_string); // 0x827 NEW_2
	var_582_bool = var_579_bool == 0; // 0x829 Not
	if(var_582_bool == 0) goto Label_2093; // 0x82a JumpB
	var_560_int = 0; // 0x82b MovI
	goto Label_2095; // 0x82c Jump
	
Label_2095:
	var_583_float = 0; var_584_float = 0; var_585_float = 0; // 0x82f PushV
	var_586_int = var_558_int + var_560_int; // 0x830 Add
	var_587_float = 100.0; // 0x831 PushF
	var_584_float = var_586_int / var_586_int; // 0x832 Div2
	var_585_float = 1; // 0x833 MovI
	func_2586(var_583_float, var_584_float, var_585_float); // 0x834 NEW_2
	var_561_float = var_583_float; // 0x835 Mov
	var_589_string = "health"; // 0x837 PushS
	GetProperty(var_589_string, var_562_float); // 0x838 ObjFunc
	var_590_int = 1; // 0x83a PushI
	var_591_int = var_590_int - var_561_float; // 0x83b Sub
	var_563_float = var_547_float * var_591_int; // 0x83c Mult2
	var_592_string = "health"; // 0x83d PushS
	var_593_float = 0; var_594_float = 0; var_595_float = 0; var_596_float = 0; // 0x83e PushV
	var_594_float = var_562_float - var_563_float; // 0x83f Sub2
	var_595_float = 0; // 0x840 MovI
	var_596_float = 1; // 0x841 MovI
	func_2617(var_593_float, var_594_float, var_595_float, var_596_float); // 0x842 NEW_2
	SetProperty(var_592_string, var_593_float); // 0x844 ObjFunc
	var_599_bool = 0; var_600_object = Obj(); // 0x846 PushV
	var_600_object = var_546_object; // 0x847 Mov
	func_2017(var_599_bool, var_600_object); // 0x848 NEW_2
	if(var_599_bool == 0) goto Label_2127; // 0x84a JumpB
	var_601_float = 0; // 0x84b PushV
	var_601_float = -var_563_float; // 0x84c Neg2
	func_2682(var_601_float); // 0x84d NEW_2
	
Label_2127:
	var_545_float = var_563_float; // 0x84f Mov
	return 12; // 0x850 Return
	
Label_2093:
	GetProperty(var_559_string, var_560_int); // 0x82d ObjFunc
	
Label_2075:
	var_605_string = "armor"; // 0x81b PushS
	GetProperty(var_605_string, var_558_int); // 0x81c ObjFunc
}


func_2570(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xa0a PushV
	self(var_70_object); // 0xa0b Func
	var_68_object = var_70_object; // 0xa0d Mov
	return 2; // 0xa0e Return
}


func_3084(var_112_string)
{
	var_113_object = Obj(); var_114_int = 0; var_115_bool = 0; var_116_object = Obj(); var_117_int = 0; var_118_bool = 0; // 0xc0c PushV
	CreateInvItem(var_116_object); // 0xc0d Func
	SetItemName(var_112_string); // 0xc0f ObjFunc
	var_119_string = "Organ"; // 0xc11 PushS
	var_120_int = 1; // 0xc12 PushI
	SetProperty(var_119_string, var_120_int); // 0xc13 ObjFunc
	GetItemID(var_117_int); // 0xc15 ObjFunc
	var_121_int = 0; // 0xc17 PushI
	var_122_int = 1; // 0xc18 PushI
	AddItem(var_118_bool, var_116_object, var_121_int, var_122_int); // 0xc19 Func
	return 6; // 0xc1b Return
}


func_2576(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0xa10 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0xa11 Or
	var_57_float = sqrt(var_58_int); // 0xa12 Sqrt2
	var_59_float = 0.0; // 0xa13 PushF
	var_60_bool = var_57_float < var_59_float; // 0xa14 LT
	if(var_60_bool == 0) goto Label_2584; // 0xa15 JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0xa16 MovV
	return 2; // 0xa17 Return
	
Label_2584:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0xa18 Div2
	return 2; // 0xa19 Return
}


func_1555(var_2_int, var_699_object)
{
	var_703_bool = 0; var_704_bool = 0; // 0x613 PushV
	var_2_int = 0; // 0x614 TMovB
	var_705_int = 1; // 0x615 PushI
	Sleep(var_705_int, var_704_bool); // 0x616 Func
	var_706_bool = var_704_bool == 0; // 0x618 Not
	if(var_706_bool == 0) goto Label_1563; // 0x619 JumpB
	return 2; // 0x61a Return
	
Label_1563:
	var_2_int = 1; // 0x61b TMovB
	var_707_bool = 0; var_708_object = Obj(); var_709_float = 0; var_710_float = 0; var_711_bool = 0; var_712_bool = 0; // 0x61c PushV
	var_708_object = var_699_object; // 0x61d Mov
	var_709_float = 200; // 0x61e MovI
	var_710_float = 2000; // 0x61f MovI
	var_711_bool = 1; // 0x620 MovB
	var_712_bool = 1; // 0x621 MovB
	func_1635(var_703_bool, var_704_bool, var_707_bool, var_708_object, var_709_float, var_710_float, var_711_bool, var_712_bool); // 0x622 NEW_2
	var_773_bool = var_707_bool == 0; // 0x624 Not
	if(var_773_bool == 0) goto Label_1575; // 0x625 JumpB
	return 2; // 0x626 Return
	
Label_1575:
	var_2_int = 0; // 0x627 TMovB
	Face(var_699_object); // 0x628 Func
	WaitForAnimEnd(var_704_bool); // 0x62a Func
	var_774_bool = var_704_bool == 0; // 0x62c Not
	if(var_774_bool == 0) goto Label_1585; // 0x62d JumpB
	StopAsync(); // 0x62e Func
	return 2; // 0x630 Return
	
Label_1585:
	var_775_string = "all"; // 0x631 PushS
	var_776_string = "hunt"; // 0x632 PushS
	PlayAnimation(var_775_string, var_776_string); // 0x633 Func
	WaitForAnimEnd(var_704_bool); // 0x635 Func
	StopAsync(); // 0x637 Func
	var_777_bool = var_704_bool == 0; // 0x639 Not
	if(var_777_bool == 0) goto Label_1596; // 0x63a JumpB
	return 2; // 0x63b Return
	
Label_1596:
	return 2; // 0x63c Return
}


func_2586(var_583_float, var_584_float, var_585_float)
{
	var_588_bool = var_584_float < var_585_float; // 0xa1b LT
	if(var_588_bool == 0) goto Label_2591; // 0xa1c JumpB
	var_583_float = var_584_float; // 0xa1d Mov
	goto Label_2592; // 0xa1e Jump
	
Label_2592:
	return 0; // 0xa20 Return
	
Label_2591:
	var_583_float = var_585_float; // 0xa1f Mov
}


func_3101()
{
	var_106_int = 0; // 0xc1d PushV
	func_3034(var_106_int); // 0xc1e NEW_2
	var_110_int = 1; // 0xc20 PushI
	var_111_bool = var_106_int != var_110_int; // 0xc21 Neq
	if(var_111_bool == 0) goto Label_3108; // 0xc22 JumpB
	return 0; // 0xc23 Return
	
Label_3108:
	var_112_string = ""; // 0xc24 PushV
	var_112_string = "liver"; // 0xc25 MovS
	func_3084(var_112_string); // 0xc26 NEW_2
	var_123_string = ""; // 0xc28 PushV
	var_123_string = "kidney"; // 0xc29 MovS
	func_3084(var_123_string); // 0xc2a NEW_2
	var_124_string = ""; // 0xc2c PushV
	var_124_string = "heart"; // 0xc2d MovS
	func_3084(var_124_string); // 0xc2e NEW_2
	var_125_string = ""; // 0xc30 PushV
	var_125_string = "blood"; // 0xc31 MovS
	func_3084(var_125_string); // 0xc32 NEW_2
	return 0; // 0xc34 Return
}


func_2593(var_172_float, var_173_float, var_174_float, var_175_float)
{
	var_176_float = var_174_float * var_174_float; // 0xa22 Mult
	var_177_int = 4; // 0xa23 PushI
	var_178_float = var_177_int * var_173_float; // 0xa24 Mult
	var_179_float = var_178_float * var_175_float; // 0xa25 Mult
	var_172_float = var_176_float - var_179_float; // 0xa26 Sub2
	return 0; // 0xa27 Return
}


func_2600(var_186_float, var_187_float, var_188_float, var_190_float)
{
	var_191_float = 0; var_192_float = 0; // 0xa28 PushV
	var_193_int = -var_188_float; // 0xa29 Neg
	var_194_int = var_193_int - var_190_float; // 0xa2a Sub
	var_195_int = 2; // 0xa2b PushI
	var_196_float = var_195_int * var_187_float; // 0xa2c Mult
	var_192_float = var_194_int / var_194_int; // 0xa2d Div2
	var_197_int = 0; // 0xa2e PushI
	var_198_bool = var_192_float > var_197_int; // 0xa2f GT
	if(var_198_bool == 0) goto Label_2611; // 0xa30 JumpB
	var_186_float = var_192_float; // 0xa31 Mov
	return 2; // 0xa32 Return
	
Label_2611:
	var_199_int = -var_188_float; // 0xa33 Neg
	var_200_int = var_199_int + var_190_float; // 0xa34 Add
	var_201_int = 2; // 0xa35 PushI
	var_202_float = var_201_int * var_187_float; // 0xa36 Mult
	var_186_float = var_200_int / var_200_int; // 0xa37 Div2
	return 2; // 0xa38 Return
}


func_3125()
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; // 0xc35 PushV
	var_68_int = 0; // 0xc36 PushI
	ClearSubContainer(var_68_int); // 0xc37 Func
	var_69_int = 0; var_70_int = 0; // 0xc39 PushV
	var_69_int = 300; // 0xc3a MovI
	var_70_int = 750; // 0xc3b MovI
	func_3053(var_69_int, var_70_int); // 0xc3c NEW_2
	var_88_string = ""; var_89_int = 0; var_90_int = 0; // 0xc3e PushV
	var_88_string = "Knife"; // 0xc3f MovS
	var_89_int = 1; // 0xc40 MovI
	var_90_int = 8; // 0xc41 MovI
	func_2431(var_88_string, var_89_int, var_90_int); // 0xc42 NEW_2
	var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0xc44 PushV
	var_99_string = "lockpick"; // 0xc45 MovS
	var_100_int = 1; // 0xc46 MovI
	var_101_int = 6; // 0xc47 MovI
	func_2431(var_99_string, var_100_int, var_101_int); // 0xc48 NEW_2
	var_102_int = 0; var_103_string = ""; // 0xc4a PushV
	var_103_string = "grabitel_mark"; // 0xc4b MovS
	func_3155(var_102_int, var_103_string); // 0xc4c NEW_2
	var_104_int = 0; // 0xc4e PushI
	var_105_int = 1; // 0xc4f PushI
	AddItem(var_67_bool, var_102_int, var_104_int, var_105_int); // 0xc50 Func
	return 4; // 0xc52 Return
}


func_2617(var_51_float, var_52_float, var_53_float, var_54_float)
{
	var_55_bool = var_52_float < var_53_float; // 0xa3a LT
	if(var_55_bool == 0) goto Label_2622; // 0xa3b JumpB
	var_51_float = var_53_float; // 0xa3c Mov
	return 0; // 0xa3d Return
	
Label_2622:
	var_56_bool = var_52_float > var_54_float; // 0xa3e GT
	if(var_56_bool == 0) goto Label_2626; // 0xa3f JumpB
	var_51_float = var_54_float; // 0xa40 Mov
	return 0; // 0xa41 Return
	
Label_2626:
	var_51_float = var_52_float; // 0xa42 Mov
	return 0; // 0xa43 Return
}


func_1597(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x63e PushV
	var_22_object = var_20_object; // 0x63f Mov
	func_2225(var_21_bool, var_22_object); // 0x640 NEW_2
	var_19_bool = var_21_bool; // 0x641 Mov
	return 0; // 0x643 Return
}


func_1604()
{
	var_17_int = var_2_int; // 0x644 PushT
	if(var_17_int == 0) goto Label_1610; // 0x645 JumpB
	func_1759(var_16_object); // 0x647 NEW_2
	goto Label_1616; // 0x649 Jump
	
Label_1616:
	return 0; // 0x650 Return
	
Label_1610:
	StopGroup0(); // 0x64a Func
	StopAnimation(); // 0x64c Func
	StopAsync(); // 0x64e Func
}


func_2628(var_86_bool, var_87_float, var_88_float, var_89_float)
{
	var_86_bool = 0; // 0xa45 MovB
	var_90_bool = var_87_float >= var_88_float; // 0xa46 GE
	if(var_90_bool == 0) goto Label_2635; // 0xa47 JumpB
	var_91_bool = var_87_float <= var_89_float; // 0xa48 LE
	if(var_91_bool == 0) goto Label_2635; // 0xa49 JumpB
	var_86_bool = 1; // 0xa4a MovB
	
Label_2635:
	return 0; // 0xa4b Return
}


func_1094(var_0_bool, var_1_object, var_24_int)
{
	var_25_int = 0; // 0x447 PushI
	var_26_bool = var_24_int != var_25_int; // 0x448 Neq
	if(var_26_bool == 0) goto Label_1099; // 0x449 JumpB
	return 0; // 0x44a Return
	
Label_1099:
	var_27_bool = 0; var_28_object = Obj(); // 0x44b PushV
	var_28_object = var_1_object; // 0x44c MovT
	func_1132(var_27_bool, var_28_object); // 0x44d NEW_2
	var_63_bool = var_27_bool == 0; // 0x44f Not
	if(var_63_bool == 0) goto Label_1106; // 0x450 JumpB
	var_0_bool = 1; // 0x451 TMovB
	
Label_1106:
	var_64_int = 0; // 0x452 PushI
	KillTimer(var_64_int); // 0x453 Func
	Stop(); // 0x455 Func
	return 0; // 0x457 Return
}


func_2636(var_93_bool, var_94_int, var_95_int)
{
	var_96_int = 0; var_97_int = 0; // 0xa4c PushV
	irand(var_97_int, var_95_int); // 0xa4d Func
	var_93_bool = var_97_int < var_94_int; // 0xa4f LT2
	return 2; // 0xa50 Return
}


func_2129(var_612_bool, var_613_object)
{
	var_614_float = 0; var_615_float = 0; // 0x851 PushV
	var_616_bool = 0; var_617_object = Obj(); var_618_string = ""; // 0x852 PushV
	var_617_object = var_613_object; // 0x853 Mov
	var_618_string = "health"; // 0x854 MovS
	func_2022(var_616_bool, var_617_object, var_618_string); // 0x855 NEW_2
	var_619_bool = var_616_bool == 0; // 0x857 Not
	if(var_619_bool == 0) goto Label_2139; // 0x858 JumpB
	var_612_bool = 0; // 0x859 MovB
	return 2; // 0x85a Return
	
Label_2139:
	var_620_bool = 0; // 0x85b PushV
	var_620_bool = 0; // 0x85c MovB
	var_621_bool = 0; var_622_object = Obj(); // 0x85d PushV
	var_622_object = var_613_object; // 0x85e Mov
	func_2017(var_621_bool, var_622_object); // 0x85f NEW_2
	if(var_621_bool == 0) goto Label_2151; // 0x861 JumpB
	var_623_bool = 0; // 0x862 PushV
	func_2722(var_623_bool); // 0x863 NEW_2
	if(var_623_bool == 0) goto Label_2151; // 0x865 JumpB
	var_620_bool = 1; // 0x866 MovB
	
Label_2151:
	if(var_620_bool == 0) goto Label_2154; // 0x867 JumpB
	var_612_bool = 0; // 0x868 MovB
	return 2; // 0x869 Return
	
Label_2154:
	var_627_string = "health"; // 0x86a PushS
	GetProperty(var_627_string, var_615_float); // 0x86b ObjFunc
	var_628_float = 0.0; // 0x86d PushF
	var_612_bool = var_615_float <= var_628_float; // 0x86e LE2
	return 2; // 0x86f Return
}


func_2641(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0xa51 PushV
	CreateObjectSet(var_19_object); // 0xa52 Func
	var_17_object = var_19_object; // 0xa54 Mov
	return 2; // 0xa55 Return
}


func_3155(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0; // 0xc53 PushV
	GetInvItemByName(var_84_int, var_82_string); // 0xc54 Func
	var_81_int = var_84_int; // 0xc56 Mov
	return 2; // 0xc57 Return
}


func_2647(var_22_bool, var_23_object, var_24_float)
{
	var_25_bool = var_23_object == 0; // 0xa58 Not
	if(var_25_bool == 0) goto Label_2652; // 0xa59 JumpB
	var_22_bool = 0; // 0xa5a MovB
	return 0; // 0xa5b Return
	
Label_2652:
	var_26_int = 0; // 0xa5c PushI
	var_27_bool = var_24_float > var_26_int; // 0xa5d GT
	if(var_27_bool == 0) goto Label_2659; // 0xa5e JumpB
	var_28_int = 8; // 0xa5f PushI
	SendWorldWndMessage(var_28_int); // 0xa60 Func
	goto Label_2668; // 0xa62 Jump
	
Label_2668:
	var_29_float = 0; // 0xa6c PushV
	var_29_float = var_24_float; // 0xa6d Mov
	func_2692(var_29_float); // 0xa6e NEW_2
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0xa70 PushV
	var_34_object = var_23_object; // 0xa71 Mov
	var_35_string = "reputation"; // 0xa72 MovS
	var_36_float = var_24_float; // 0xa73 Mov
	var_37_float = 0; // 0xa74 MovI
	var_38_float = 1; // 0xa75 MovI
	func_2034(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float); // 0xa76 NEW_2
	var_22_bool = 1; // 0xa78 MovB
	return 0; // 0xa79 Return
	
Label_2659:
	var_57_int = 0; // 0xa63 PushI
	var_58_bool = var_24_float < var_57_int; // 0xa64 LT
	if(var_58_bool == 0) goto Label_2666; // 0xa65 JumpB
	var_59_int = 9; // 0xa66 PushI
	SendWorldWndMessage(var_59_int); // 0xa67 Func
	goto Label_2668; // 0xa69 Jump
	
Label_2666:
	var_22_bool = 0; // 0xa6a MovB
	return 0; // 0xa6b Return
}


func_1116(var_0_bool)
{
	var_0_bool = 1; // 0x45c TMovB
	var_20_int = 0; // 0x45d PushI
	KillTimer(var_20_int); // 0x45e Func
	Stop(); // 0x460 Func
	return 0; // 0x462 Return
}


func_1635(var_0_bool, var_1_object, var_707_bool, var_708_object, var_709_float, var_710_float, var_711_bool, var_712_bool)
{
	var_713_bool = 0; var_714_bool = 0; var_715_object = Obj(); var_716_cvector = CVector(0,0,0); var_717_cvector = CVector(0,0,0); var_718_cvector = CVector(0,0,0); var_719_float = 0; var_720_object = Obj(); var_721_bool = 0; var_722_bool = 0; var_723_object = Obj(); var_724_cvector = CVector(0,0,0); var_725_cvector = CVector(0,0,0); var_726_cvector = CVector(0,0,0); var_727_float = 0; var_728_object = Obj(); // 0x663 PushV
	var_0_bool = 0; // 0x664 TMovB
	var_1_object = var_708_object; // 0x665 TMov
	var_722_bool = var_712_bool; // 0x666 Mov
	
Label_1639:
	var_729_bool = 0; var_730_object = Obj(); // 0x667 PushV
	var_730_object = var_708_object; // 0x668 Mov
	func_1597(var_729_bool, var_730_object); // 0x669 NEW_2
	var_748_bool = var_729_bool == 0; // 0x66b Not
	if(var_748_bool == 0) goto Label_1647; // 0x66c JumpB
	var_707_bool = 0; // 0x66d MovB
	return 16; // 0x66e Return
	
Label_1647:
	GetPosition(var_724_cvector); // 0x66f ObjFunc
	GetPosition(var_725_cvector); // 0x671 Func
	var_726_cvector = var_724_cvector - var_725_cvector; // 0x673 Sub2
	var_727_float = var_726_cvector | var_726_cvector; // 0x674 Or2
	var_749_bool = 0; // 0x675 PushV
	var_749_bool = 0; // 0x676 MovB
	var_750_int = 0; // 0x677 PushI
	var_751_bool = var_710_float > var_750_int; // 0x678 GT
	if(var_751_bool == 0) goto Label_1662; // 0x679 JumpB
	var_752_float = var_710_float * var_710_float; // 0x67a Mult
	var_753_bool = var_727_float > var_752_float; // 0x67b GT
	if(var_753_bool == 0) goto Label_1662; // 0x67c JumpB
	var_749_bool = 1; // 0x67d MovB
	
Label_1662:
	if(var_749_bool == 0) goto Label_1667; // 0x67e JumpB
	Stop(); // 0x67f Func
	var_707_bool = 0; // 0x681 MovB
	return 16; // 0x682 Return
	
Label_1667:
	var_754_float = var_709_float * var_709_float; // 0x683 Mult
	var_755_bool = var_727_float > var_754_float; // 0x684 GT
	if(var_755_bool == 0) goto Label_1729; // 0x685 JumpB
	GetPFPosition(var_724_cvector); // 0x686 ObjFunc
	FindPathTo(var_728_object, var_724_cvector); // 0x688 Func
	var_756_bool = var_728_object != 0; // 0x68a NullNeq
	if(var_756_bool == 0) goto Label_1678; // 0x68b JumpB
	var_723_object = var_728_object; // 0x68c Mov
	var_728_object = 0; // 0x68d SetNull
	
Label_1678:
	var_757_bool = var_723_object != 0; // 0x68e NullNeq
	if(var_757_bool == 0) goto Label_1711; // 0x68f JumpB
	var_758_bool = var_722_bool; // 0x690 Push
	if(var_758_bool == 0) goto Label_1688; // 0x691 JumpB
	var_722_bool = 0; // 0x692 MovB
	RotatePath(var_723_object, var_721_bool); // 0x693 Func
	var_759_bool = var_721_bool == 0; // 0x695 Not
	if(var_759_bool == 0) goto Label_1688; // 0x696 JumpB
	goto Label_1735; // 0x697 Jump
	
Label_1735:
	var_707_bool = !var_0_bool; // 0x6c7 Not2
	return 16; // 0x6c8 Return
	
Label_1688:
	var_760_int = 0; // 0x698 PushI
	var_761_float = 0.3; // 0x699 PushF
	SetTimer(var_760_int, var_761_float); // 0x69a Func
	var_762_string = ""; // 0x69c PushV
	func_1766(var_762_string); // 0x69d NEW_2
	var_763_string = ""; // 0x69f PushV
	func_1768(var_763_string); // 0x6a0 NEW_2
	FollowPath(var_723_object, var_711_bool, var_721_bool, var_762_string, var_763_string); // 0x6a2 Func
	var_764_bool = var_721_bool == 0; // 0x6a4 Not
	if(var_764_bool == 0) goto Label_1709; // 0x6a5 JumpB
	var_765_bool = var_0_bool; // 0x6a6 PushT
	if(var_765_bool == 0) goto Label_1707; // 0x6a7 JumpB
	var_723_object = 0; // 0x6a8 SetNull
	goto Label_1735; // 0x6a9 Jump
	
Label_1707:
	goto Label_1734; // 0x6ab Jump
	
Label_1734:
	goto Label_1639; // 0x6c6 Jump
	
Label_1709:
	var_723_object = 0; // 0x6ad SetNull
	goto Label_1727; // 0x6ae Jump
	
Label_1727:
	var_728_object = 0; // 0x6bf SetNull
	goto Label_1733; // 0x6c0 Jump
	
Label_1733:
	var_723_object = 0; // 0x6c5 SetNull
	
Label_1711:
	var_766_int = 0; // 0x6af PushI
	KillTimer(var_766_int); // 0x6b0 Func
	var_767_float = 0.5; // 0x6b2 PushF
	Sleep(var_767_float, var_721_bool); // 0x6b3 Func
	var_768_bool = var_721_bool == 0; // 0x6b5 Not
	if(var_768_bool == 0) goto Label_1723; // 0x6b6 JumpB
	var_769_bool = var_0_bool; // 0x6b7 PushT
	if(var_769_bool == 0) goto Label_1723; // 0x6b8 JumpB
	var_723_object = 0; // 0x6b9 SetNull
	goto Label_1735; // 0x6ba Jump
	
Label_1723:
	var_770_int = 0; // 0x6bb PushI
	var_771_float = 0.3; // 0x6bc PushF
	SetTimer(var_770_int, var_771_float); // 0x6bd Func
	
Label_1729:
	var_772_int = 0; // 0x6c1 PushI
	KillTimer(var_772_int); // 0x6c2 Func
	goto Label_1735; // 0x6c4 Jump
}


func_1132(var_331_bool, var_332_object)
{
	var_333_bool = 0; var_334_object = Obj(); // 0x46d PushV
	var_334_object = var_332_object; // 0x46e Mov
	func_2201(var_333_bool, var_334_object); // 0x46f NEW_2
	var_331_bool = var_333_bool; // 0x470 Mov
	return 0; // 0x472 Return
}


func_2160(var_42_bool)
{
	var_44_bool = 0; var_45_bool = 0; // 0x870 PushV
	IsDead(var_45_bool); // 0x871 ObjFunc
	var_42_bool = var_45_bool; // 0x873 Mov
	return 2; // 0x874 Return
}


func_1139(var_349_string)
{
	var_349_string = "walk"; // 0x473 MovS
	return 0; // 0x474 Return
}


func_1141(var_350_string)
{
	var_350_string = "run"; // 0x475 MovS
	return 0; // 0x476 Return
}


func_2165(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); // 0x875 PushV
	var_37_bool = var_32_object == 0; // 0x876 NullEq
	if(var_37_bool == 0) goto Label_2170; // 0x877 JumpB
	var_31_bool = 0; // 0x878 MovB
	return 4; // 0x879 Return
	
Label_2170:
	var_38_bool = 0; // 0x87a PushV
	var_38_bool = 0; // 0x87b MovB
	var_39_string = "IsDead"; // 0x87c PushS
	var_40_int = 1; // 0x87d PushI
	var_41_bool = IsFuncExist(var_32_object, var_39_string, var_40_int); // 0x87e FuncExist
	if(var_41_bool == 0) goto Label_2182; // 0x87f JumpB
	var_42_bool = 0; var_43_object = Obj(); // 0x880 PushV
	var_43_object = var_32_object; // 0x881 Mov
	func_2160(var_43_object); // 0x882 NEW_2
	if(var_42_bool == 0) goto Label_2182; // 0x884 JumpB
	var_38_bool = 1; // 0x885 MovB
	
Label_2182:
	if(var_38_bool == 0) goto Label_2185; // 0x886 JumpB
	var_31_bool = 0; // 0x887 MovB
	return 4; // 0x888 Return
	
Label_2185:
	GetScene(var_35_object); // 0x889 Func
	var_46_bool = var_35_object == 0; // 0x88b NullEq
	if(var_46_bool == 0) goto Label_2191; // 0x88c JumpB
	var_31_bool = 0; // 0x88d MovB
	return 4; // 0x88e Return
	
Label_2191:
	GetScene(var_36_object); // 0x88f ObjFunc
	var_47_bool = var_35_object != var_36_object; // 0x891 Neq
	if(var_47_bool == 0) goto Label_2197; // 0x892 JumpB
	var_31_bool = 0; // 0x893 MovB
	return 4; // 0x894 Return
	
Label_2197:
	var_31_bool = 1; // 0x895 MovB
	return 4; // 0x896 Return
}


func_2682(var_601_float)
{
	var_602_object = Obj(); var_603_object = Obj(); // 0xa7a PushV
	CreateFloatVector(var_603_object); // 0xa7b Func
	add(var_601_float); // 0xa7d ObjFunc
	var_604_int = 15; // 0xa7f PushI
	SendWorldWndMessage(var_604_int, var_603_object); // 0xa80 Func
	return 2; // 0xa82 Return
}


func_126(var_208_bool, var_209_object)
{
	var_216_bool = GlobalVars[0]; // 0x7f PushGE
	var_216_bool = 0; // 0x80 MovB
	GlobalVars[0] = var_216_bool; // 0x81 PopGE
	var_217_object = Obj(); var_218_bool = 0; var_219_float = 0; // 0x82 PushV
	var_217_object = var_209_object; // 0x83 Mov
	var_218_bool = 1; // 0x84 MovB
	var_219_float = 200.0; // 0x85 MovF
	func_203(var_213_bool, var_214_float, var_215_int, var_208_bool, var_209_object, var_217_object, var_218_bool, var_219_float); // 0x86 NEW_2
	var_685_bool = 0; // 0x88 PushV
	var_685_bool = 0; // 0x89 MovB
	var_686_bool = GlobalVars[0]; // 0x8a PushGE
	if(var_686_bool == 0) goto Label_143; // 0x8b JumpB
	var_687_int = var_3_int; // 0x8c PushT
	if(var_687_int == 0) goto Label_143; // 0x8d JumpB
	var_685_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_685_bool == 0) goto Label_150; // 0x8f JumpB
	var_688_string = "all"; // 0x90 PushS
	var_689_string = "attack_off"; // 0x91 PushS
	PlayAnimation(var_688_string, var_689_string); // 0x92 Func
	WaitForAnimEnd(); // 0x94 Func
	
Label_150:
	var_690_bool = GlobalVars[0]; // 0x96 PushGE
	var_208_bool = var_690_bool; // 0x97 Mov
	return 0; // 0x99 Return
}


func_643(var_3_int)
{
	var_3_int = 1; // 0x283 TMovB
	return 0; // 0x284 Return
}


func_1156()
{
	func_1331(var_18_bool, var_59_object); // 0x485 NEW_2
	var_60_int = 130; // 0x487 PushI
	KillTimer(var_60_int); // 0x488 Func
	return 0; // 0x48a Return
}


func_645(var_653_bool, var_654_float)
{
	var_655_float = 0; var_656_bool = 0; var_657_float = 0; var_658_bool = 0; // 0x285 PushV
	rand(var_657_float); // 0x286 Func
	var_659_bool = var_657_float < var_654_float; // 0x288 LT
	if(var_659_bool == 0) goto Label_665; // 0x289 JumpB
	
Label_650:
	IsAnimationPlaying(var_658_bool); // 0x28a Func
	var_660_bool = var_658_bool == 0; // 0x28c Not
	if(var_660_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_664; // 0x28e Jump
	
Label_664:
	goto Label_670; // 0x298 Jump
	
Label_670:
	var_653_bool = 0; // 0x29e MovB
	return 4; // 0x29f Return
	
Label_655:
	var_661_bool = 0; // 0x28f PushV
	func_743(var_661_bool); // 0x290 NEW_2
	if(var_661_bool == 0) goto Label_661; // 0x292 JumpB
	var_653_bool = 1; // 0x293 MovB
	return 4; // 0x294 Return
	
Label_661:
	sync(); // 0x295 Func
	goto Label_650; // 0x297 Jump
	
Label_665:
	WaitForAnimEnd(); // 0x299 Func
	func_847(var_658_bool); // 0x29c NEW_2
}


func_2692(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0xa84 PushV
	CreateFloatVector(var_31_object); // 0xa85 Func
	add(var_29_float); // 0xa87 ObjFunc
	var_32_int = 16; // 0xa89 PushI
	SendWorldWndMessage(var_32_int, var_31_object); // 0xa8a Func
	return 2; // 0xa8c Return
}


func_2702(var_109_object)
{
	var_110_bool = 0; var_111_bool = 0; // 0xa8e PushV
	IsPlayerActor(var_109_object, var_111_bool); // 0xa8f Func
	var_112_bool = var_111_bool; // 0xa91 Push
	if(var_112_bool == 0) goto Label_2710; // 0xa92 JumpB
	var_113_string = "attack"; // 0xa93 PushS
	PlayGlobalMusic(var_113_string); // 0xa94 Func
	
Label_2710:
	return 2; // 0xa96 Return
}


func_2711()
{
	var_131_object = Obj(); var_132_object = Obj(); // 0xa97 PushV
	GetScene(var_132_object); // 0xa98 Func
	var_133_string = "battle"; // 0xa9a PushS
	var_134_object = Obj(); // 0xa9b PushV
	func_2570(var_134_object); // 0xa9c NEW_2
	BroadcastMessage(var_133_string, var_134_object, var_132_object); // 0xa9e Func
	return 2; // 0xaa0 Return
}


func_2201(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0; // 0x899 PushV
	var_31_bool = 0; var_32_object = Obj(); // 0x89a PushV
	var_32_object = var_28_object; // 0x89b Mov
	func_2165(var_31_bool, var_32_object); // 0x89c NEW_2
	var_48_bool = var_31_bool == 0; // 0x89e Not
	if(var_48_bool == 0) goto Label_2210; // 0x89f JumpB
	var_27_bool = 0; // 0x8a0 MovB
	return 2; // 0x8a1 Return
	
Label_2210:
	var_49_bool = 0; var_50_object = Obj(); var_51_string = ""; // 0x8a2 PushV
	var_50_object = var_28_object; // 0x8a3 Mov
	var_51_string = "noaccess"; // 0x8a4 MovS
	func_2022(var_49_bool, var_50_object, var_51_string); // 0x8a5 NEW_2
	var_58_bool = var_49_bool == 0; // 0x8a7 Not
	if(var_58_bool == 0) goto Label_2219; // 0x8a8 JumpB
	var_27_bool = 1; // 0x8a9 MovB
	return 2; // 0x8aa Return
	
Label_2219:
	var_59_string = "noaccess"; // 0x8ab PushS
	GetProperty(var_59_string, var_30_int); // 0x8ac ObjFunc
	var_60_int = 0; // 0x8ae PushI
	var_27_bool = var_30_int == var_60_int; // 0x8af Eq2
	return 2; // 0x8b0 Return
}


func_154(var_542_float)
{
	var_542_float = 0.15; // 0x9b MovF
	return 0; // 0x9c Return
}


func_157(var_549_int)
{
	var_549_int = 0; // 0x9e MovI
	return 0; // 0x9f Return
}


func_672(var_0_bool, var_437_bool, var_438_float)
{
	var_439_bool = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); var_443_float = 0; var_444_bool = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; // 0x2a0 PushV
	
Label_673:
	IsAnimationPlaying(var_444_bool); // 0x2a1 Func
	var_449_bool = var_444_bool == 0; // 0x2a3 Not
	if(var_449_bool == 0) goto Label_678; // 0x2a4 JumpB
	goto Label_710; // 0x2a5 Jump
	
Label_710:
	func_847(var_448_float); // 0x2c7 NEW_2
	var_437_bool = 0; // 0x2c9 MovB
	return 10; // 0x2ca Return
	
Label_678:
	var_450_bool = 0; // 0x2a6 PushV
	func_743(var_450_bool); // 0x2a7 NEW_2
	if(var_450_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_437_bool = 1; // 0x2aa MovB
	return 10; // 0x2ab Return
	
Label_684:
	var_493_bool = 0; var_494_object = Obj(); // 0x2ac PushV
	var_494_object = var_0_bool; // 0x2ad MovT
	func_2201(var_493_bool, var_494_object); // 0x2ae NEW_2
	var_495_bool = var_493_bool == 0; // 0x2b0 Not
	if(var_495_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_437_bool = 0; // 0x2b2 MovB
	return 10; // 0x2b3 Return
	
Label_692:
	GetPFPosition(var_445_cvector); // 0x2b4 TObjFunc
	GetPFPosition(var_446_cvector); // 0x2b6 Func
	var_447_cvector = var_445_cvector - var_446_cvector; // 0x2b8 Sub2
	var_448_float = var_447_cvector | var_447_cvector; // 0x2b9 Or2
	var_496_float = var_438_float * var_438_float; // 0x2ba Mult
	var_497_bool = var_448_float < var_496_float; // 0x2bb LT
	if(var_497_bool == 0) goto Label_707; // 0x2bc JumpB
	var_498_bool = 0; var_499_float = 0; // 0x2bd PushV
	var_499_float = var_438_float; // 0x2be Mov
	func_506(var_448_float, var_498_bool, var_499_float); // 0x2bf NEW_2
	var_437_bool = 1; // 0x2c1 MovB
	return 10; // 0x2c2 Return
	
Label_707:
	sync(); // 0x2c3 Func
	goto Label_673; // 0x2c5 Jump
}


func_160(var_606_int)
{
	var_606_int = 1; // 0xa0 MovI
	return 0; // 0xa1 Return
}


func_162(var_607_object, var_608_float)
{
	var_609_bool = 0; // 0xa3 PushV
	var_609_bool = 0; // 0xa4 MovB
	var_610_int = 0; // 0xa5 PushI
	var_611_bool = var_608_float > var_610_int; // 0xa6 GT
	if(var_611_bool == 0) goto Label_174; // 0xa7 JumpB
	var_612_bool = 0; var_613_object = Obj(); // 0xa8 PushV
	var_613_object = var_607_object; // 0xa9 Mov
	func_2129(var_612_bool, var_613_object); // 0xaa NEW_2
	if(var_612_bool == 0) goto Label_174; // 0xac JumpB
	var_609_bool = 1; // 0xad MovB
	
Label_174:
	if(var_609_bool == 0) goto Label_181; // 0xae JumpB
	var_629_bool = GlobalVars[0]; // 0xaf PushGE
	var_629_bool = 1; // 0xb0 MovB
	GlobalVars[0] = var_629_bool; // 0xb1 PopGE
	func_643(var_608_float); // 0xb3 NEW_2
	
Label_181:
	return 0; // 0xb5 Return
}


func_2722(var_623_bool)
{
	var_624_bool = 0; var_625_bool = 0; // 0xaa2 PushV
	var_626_string = "god_mode"; // 0xaa3 PushS
	GetVariable(var_626_string, var_625_bool); // 0xaa4 Func
	var_623_bool = var_625_bool; // 0xaa6 Mov
	return 2; // 0xaa7 Return
}


func_2728(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0xaa8 PushV
	var_76_string = "idle"; // 0xaa9 MovS
	var_77_int = var_74_int; // 0xaaa Push
	if(var_77_int == 0) goto Label_2733; // 0xaab JumpB
	var_76_string = var_76_string + var_74_int; // 0xaac Add2
	
Label_2733:
	var_73_string = var_76_string; // 0xaad Mov
	return 2; // 0xaae Return
}


func_2735(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0xaaf PushV
	var_70_int = 0; // 0xab0 MovI
	
Label_2737:
	var_72_string = "all"; // 0xab1 PushS
	var_73_string = ""; var_74_int = 0; // 0xab2 PushV
	var_74_int = var_70_int; // 0xab3 Mov
	func_2728(var_73_string, var_74_int); // 0xab4 NEW_2
	HasAnimation(var_71_bool, var_72_string, var_73_string); // 0xab6 Func
	var_78_bool = var_71_bool == 0; // 0xab8 Not
	if(var_78_bool == 0) goto Label_2747; // 0xab9 JumpB
	goto Label_2750; // 0xaba Jump
	
Label_2750:
	var_67_int = var_70_int; // 0xabe Mov
	return 4; // 0xabf Return
	
Label_2747:
	var_79_int = 1; // 0xabb PushI
	var_70_int = var_70_int + var_79_int; // 0xabc Add2
	goto Label_2737; // 0xabd Jump
}


func_2225(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x8b1 PushV
	var_29_bool = var_22_object == 0; // 0x8b2 NullEq
	if(var_29_bool == 0) goto Label_2230; // 0x8b3 JumpB
	var_21_bool = 0; // 0x8b4 MovB
	return 6; // 0x8b5 Return
	
Label_2230:
	GetScene(var_26_object); // 0x8b6 Func
	var_30_bool = var_26_object == 0; // 0x8b8 NullEq
	if(var_30_bool == 0) goto Label_2236; // 0x8b9 JumpB
	var_21_bool = 0; // 0x8ba MovB
	return 6; // 0x8bb Return
	
Label_2236:
	GetScene(var_27_object); // 0x8bc ObjFunc
	var_31_bool = var_26_object != var_27_object; // 0x8be Neq
	if(var_31_bool == 0) goto Label_2242; // 0x8bf JumpB
	var_21_bool = 0; // 0x8c0 MovB
	return 6; // 0x8c1 Return
	
Label_2242:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0x8c2 PushV
	var_33_object = var_22_object; // 0x8c3 Mov
	var_34_string = "noaccess"; // 0x8c4 MovS
	func_2022(var_32_bool, var_33_object, var_34_string); // 0x8c5 NEW_2
	var_41_bool = var_32_bool == 0; // 0x8c7 Not
	if(var_41_bool == 0) goto Label_2251; // 0x8c8 JumpB
	var_21_bool = 1; // 0x8c9 MovB
	return 6; // 0x8ca Return
	
Label_2251:
	var_42_string = "noaccess"; // 0x8cb PushS
	GetProperty(var_42_string, var_28_int); // 0x8cc ObjFunc
	var_43_int = 0; // 0x8ce PushI
	var_21_bool = var_28_int == var_43_int; // 0x8cf Eq2
	return 6; // 0x8d0 Return
}


func_2752(var_152_cvector, var_153_cvector, var_154_cvector, var_155_float)
{
	var_156_cvector = CVector(0,0,0); var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0; // 0xac0 PushV
	var_162_cvector = var_154_cvector - var_153_cvector; // 0xac1 Sub2
	var_163_float = 250000; // 0xac2 MovI
	var_168_float = GetByIndex(var_162_cvector, 1); // 0xac3 PushE
	var_169_int = 1000; // 0xac4 PushI
	var_170_float = var_168_float * var_169_int; // 0xac5 Mult
	var_171_float = var_155_float * var_155_float; // 0xac6 Mult
	var_164_float = var_170_float - var_171_float; // 0xac7 Sub2
	var_165_float = var_162_cvector | var_162_cvector; // 0xac8 Or2
	var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0; // 0xac9 PushV
	var_173_float = var_163_float; // 0xaca Mov
	var_174_float = var_164_float; // 0xacb Mov
	var_175_float = var_165_float; // 0xacc Mov
	func_2593(var_172_float, var_173_float, var_174_float, var_175_float); // 0xacd NEW_2
	var_166_float = var_172_float; // 0xace Mov
	var_180_int = 0; // 0xad0 PushI
	var_181_bool = var_166_float < var_180_int; // 0xad1 LT
	if(var_181_bool == 0) goto Label_2773; // 0xad2 JumpB
	var_167_float = 1; // 0xad3 MovI
	goto Label_2781; // 0xad4 Jump
	
Label_2781:
	var_182_cvector = CVector(0.0, 500.0, 0.0); // 0xadd PushVec
	var_183_float = var_182_cvector * var_167_float; // 0xade Mult
	var_184_float = var_183_float * var_167_float; // 0xadf Mult
	var_185_int = var_162_cvector + var_184_float; // 0xae0 Add
	var_152_cvector = var_185_int / var_185_int; // 0xae1 Div2
	return 12; // 0xae2 Return
	
Label_2773:
	var_186_float = 0; var_187_float = 0; var_188_float = 0; var_189_float = 0; var_190_float = 0; // 0xad5 PushV
	var_187_float = var_163_float; // 0xad6 Mov
	var_188_float = var_164_float; // 0xad7 Mov
	var_189_float = var_165_float; // 0xad8 Mov
	var_190_float = sqrt(var_166_float); // 0xad9 Sqrt2
	func_2600(var_187_float, var_188_float, var_189_float, var_190_float); // 0xada NEW_2
	var_167_float = sqrt(var_186_float); // 0xadc Sqrt2
}


func_203(var_0_bool, var_3_int, var_5_float, var_217_object, var_218_bool, var_219_float, var_288_bool, var_378_bool)
{
	var_220_float = 0; var_221_cvector = CVector(0,0,0); var_222_cvector = CVector(0,0,0); var_223_bool = 0; var_224_bool = 0; var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_float = 0; var_228_cvector = CVector(0,0,0); var_229_bool = 0; var_230_float = 0; var_231_float = 0; var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_bool = 0; var_235_bool = 0; var_236_float = 0; var_237_cvector = CVector(0,0,0); var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_bool = 0; var_241_float = 0; // 0xcb PushV
	func_432(var_239_cvector, var_240_bool, var_241_float); // 0xcd NEW_2
	var_5_float = 0; // 0xcf TMovI
	var_264_string = "@GetAttackDistance"; // 0xd0 PushS
	var_265_int = 1; // 0xd1 PushI
	var_266_bool = IsFuncExist(var_217_object, var_264_string, var_265_int); // 0xd2 FuncExist
	if(var_266_bool == 0) goto Label_217; // 0xd3 JumpB
	GetAttackDistance(var_231_float); // 0xd4 ObjFunc
	var_267_int = 50; // 0xd6 PushI
	var_231_float = var_231_float + var_267_int; // 0xd7 Add2
	goto Label_218; // 0xd8 Jump
	
Label_218:
	var_268_int = 150; // 0xda PushI
	var_269_bool = var_231_float >= var_268_int; // 0xdb GE
	if(var_269_bool == 0) goto Label_222; // 0xdc JumpB
	var_231_float = 150; // 0xdd MovI
	
Label_222:
	var_3_int = 0; // 0xde TMovB
	var_0_bool = var_217_object; // 0xdf TMov
	IsPlayerActor(var_0_bool, var_234_bool); // 0xe0 Func
	var_270_bool = var_234_bool; // 0xe2 Push
	if(var_270_bool == 0) goto Label_236; // 0xe3 JumpB
	var_271_string = "attack"; // 0xe4 PushS
	PlayGlobalMusic(var_271_string); // 0xe5 Func
	var_272_object = Obj(); // 0xe7 PushV
	func_2570(var_272_object); // 0xe8 NEW_2
	SendPlayerEnemy(var_217_object, var_272_object); // 0xea Func
	
Label_236:
	var_273_bool = var_218_bool; // 0xec Push
	if(var_273_bool == 0) goto Label_240; // 0xed JumpB
	var_235_bool = 0; // 0xee MovB
	goto Label_241; // 0xef Jump
	
Label_241:
	var_274_float = 300.0; // 0xf1 PushF
	var_236_float = var_274_float + var_231_float; // 0xf2 Add2
	
Label_243:
	var_275_bool = 0; // 0xf3 PushV
	var_275_bool = 0; // 0xf4 MovB
	var_276_bool = 0; var_277_object = Obj(); // 0xf5 PushV
	var_277_object = var_0_bool; // 0xf6 MovT
	func_2201(var_276_bool, var_277_object); // 0xf7 NEW_2
	if(var_276_bool == 0) goto Label_253; // 0xf9 JumpB
	var_278_bool = var_3_int == 0; // 0xfa Not
	if(var_278_bool == 0) goto Label_253; // 0xfb JumpB
	var_275_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_275_bool == 0) goto Label_415; // 0xfd JumpB
	func_847(var_241_float); // 0xff NEW_2
	GetPFPosition(var_232_cvector); // 0x101 TObjFunc
	GetPFPosition(var_233_cvector); // 0x103 Func
	var_237_cvector = var_232_cvector - var_233_cvector; // 0x105 Sub2
	var_238_float = var_237_cvector | var_237_cvector; // 0x106 Or2
	var_280_float = var_236_float * var_236_float; // 0x107 Mult
	var_281_bool = var_238_float >= var_280_float; // 0x108 GE
	if(var_281_bool == 0) goto Label_281; // 0x109 JumpB
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; var_285_float = 0; var_286_bool = 0; var_287_bool = 0; // 0x10a PushV
	var_283_object = var_0_bool; // 0x10b MovT
	var_284_float = var_231_float; // 0x10c Mov
	var_285_float = 3000.0; // 0x10d MovF
	var_286_bool = 1; // 0x10e MovB
	var_287_bool = 0; // 0x10f MovB
	TaskCall(2); // 0x110 TaskCall
	func_887(var_290_bool, var_282_bool, var_283_object, var_284_float, var_285_float, var_286_bool, var_287_bool); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	var_363_bool = var_288_bool == 0; // 0x114 Not
	if(var_363_bool == 0) goto Label_279; // 0x115 JumpB
	goto Label_415; // 0x116 Jump
	
Label_415:
	WaitForAnimEnd(); // 0x19f Func
	var_364_int = var_3_int; // 0x1a1 PushT
	if(var_364_int == 0) goto Label_420; // 0x1a2 JumpB
	return 22; // 0x1a3 Return
	
Label_420:
	var_365_string = "all"; // 0x1a4 PushS
	var_366_string = "attack_off"; // 0x1a5 PushS
	PlayAnimation(var_365_string, var_366_string); // 0x1a6 Func
	WaitForAnimEnd(); // 0x1a8 Func
	var_367_bool = var_234_bool; // 0x1aa Push
	if(var_367_bool == 0) goto Label_431; // 0x1ab JumpB
	var_368_float = 2.0; // 0x1ac PushF
	Sleep(var_368_float); // 0x1ad Func
	
Label_431:
	return 22; // 0x1af Return
	
Label_279:
	var_235_bool = 0; // 0x117 MovB
	goto Label_414; // 0x118 Jump
	
Label_414:
	goto Label_243; // 0x19e Jump
	
Label_281:
	var_369_float = var_219_float * var_219_float; // 0x119 Mult
	var_370_bool = var_238_float >= var_369_float; // 0x11a GE
	if(var_370_bool == 0) goto Label_406; // 0x11b JumpB
	GetPFPosition(var_239_cvector); // 0x11c TObjFunc
	CanReachByPF(var_240_bool, var_239_cvector); // 0x11e Func
	var_371_bool = var_240_bool == 0; // 0x120 Not
	if(var_371_bool == 0) goto Label_305; // 0x121 JumpB
	var_372_bool = 0; var_373_object = Obj(); var_374_float = 0; var_375_float = 0; var_376_bool = 0; var_377_bool = 0; // 0x122 PushV
	var_373_object = var_0_bool; // 0x123 MovT
	var_374_float = var_231_float; // 0x124 Mov
	var_375_float = 3000.0; // 0x125 MovF
	var_376_bool = 1; // 0x126 MovB
	var_377_bool = 0; // 0x127 MovB
	TaskCall(2); // 0x128 TaskCall
	func_887(var_380_bool, var_372_bool, var_373_object, var_374_float, var_375_float, var_376_bool, var_377_bool); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	var_381_bool = var_378_bool == 0; // 0x12c Not
	if(var_381_bool == 0) goto Label_303; // 0x12d JumpB
	goto Label_415; // 0x12e Jump
	
Label_303:
	var_235_bool = 0; // 0x12f MovB
	goto Label_243; // 0x130 Jump
	
Label_305:
	var_382_bool = var_235_bool == 0; // 0x131 Not
	if(var_382_bool == 0) goto Label_330; // 0x132 JumpB
	var_383_object = Obj(); // 0x133 PushV
	var_383_object = var_0_bool; // 0x134 MovT
	func_2404(); // 0x135 NEW_2
	var_392_string = "all"; // 0x137 PushS
	var_393_string = "attack_on"; // 0x138 PushS
	PlayAnimation(var_392_string, var_393_string); // 0x139 Func
	WaitForAnimEnd(); // 0x13b Func
	func_847(var_241_float); // 0x13e NEW_2
	StopAsync(); // 0x140 Func
	var_235_bool = 1; // 0x142 MovB
	var_394_bool = 0; var_395_object = Obj(); // 0x143 PushV
	var_395_object = var_0_bool; // 0x144 MovT
	func_2201(var_394_bool, var_395_object); // 0x145 NEW_2
	var_396_bool = var_394_bool == 0; // 0x147 Not
	if(var_396_bool == 0) goto Label_330; // 0x148 JumpB
	goto Label_415; // 0x149 Jump
	
Label_330:
	rand(var_241_float); // 0x14a Func
	var_397_bool = 0; // 0x14c PushV
	var_397_bool = 1; // 0x14d MovB
	var_398_float = 0.2; // 0x14e PushF
	var_399_bool = var_241_float < var_398_float; // 0x14f LT
	if(var_399_bool == 0) goto Label_342; // 0x150 JumpB
	var_400_bool = 0; // 0x151 PushV
	func_804(var_397_bool, var_400_bool); // 0x152 NEW_2
	if(var_400_bool == 0) goto Label_342; // 0x154 JumpB
	var_397_bool = 0; // 0x155 MovB
	
Label_342:
	if(var_397_bool == 0) goto Label_359; // 0x156 JumpB
	Face(var_0_bool); // 0x157 Func
	func_852(); // 0x15a NEW_2
	var_435_string = "all"; // 0x15c PushS
	var_436_string = "attack_stay"; // 0x15d PushS
	PlayAnimation(var_435_string, var_436_string); // 0x15e Func
	var_437_bool = 0; var_438_float = 0; // 0x160 PushV
	var_438_float = var_219_float; // 0x161 Mov
	func_672(var_241_float, var_437_bool, var_438_float); // 0x162 NEW_2
	StopAsync(); // 0x164 Func
	goto Label_405; // 0x166 Jump
	
Label_405:
	goto Label_414; // 0x195 Jump
	
Label_359:
	Face(var_0_bool); // 0x167 Func
	var_669_string = "all"; // 0x169 PushS
	var_670_string = "fjump"; // 0x16a PushS
	PlayAnimation(var_669_string, var_670_string); // 0x16b Func
	WaitForAnimEnd(); // 0x16d Func
	func_847(var_241_float); // 0x170 NEW_2
	var_671_cvector = CVector(0.0, 0.0, 0.0); // 0x172 PushVec
	SetSpeed(var_671_cvector); // 0x173 Func
	Stop(); // 0x175 Func
	StopAsync(); // 0x177 Func
	var_672_bool = 0; // 0x179 PushV
	func_804(var_241_float, var_672_bool); // 0x17a NEW_2
	var_673_bool = var_672_bool == 0; // 0x17c Not
	if(var_673_bool == 0) goto Label_405; // 0x17d JumpB
	var_674_bool = 0; var_675_object = Obj(); // 0x17e PushV
	var_675_object = var_0_bool; // 0x17f MovT
	func_2201(var_674_bool, var_675_object); // 0x180 NEW_2
	var_676_bool = var_674_bool == 0; // 0x182 Not
	if(var_676_bool == 0) goto Label_389; // 0x183 JumpB
	goto Label_415; // 0x184 Jump
	
Label_389:
	GetPFPosition(var_232_cvector); // 0x185 TObjFunc
	GetPFPosition(var_233_cvector); // 0x187 Func
	var_237_cvector = var_232_cvector - var_233_cvector; // 0x189 Sub2
	var_238_float = var_237_cvector | var_237_cvector; // 0x18a Or2
	var_677_float = var_219_float * var_219_float; // 0x18b Mult
	var_678_bool = var_238_float < var_677_float; // 0x18c LT
	if(var_678_bool == 0) goto Label_405; // 0x18d JumpB
	var_679_bool = 0; var_680_float = 0; // 0x18e PushV
	var_680_float = var_219_float; // 0x18f Mov
	func_506(var_241_float, var_679_bool, var_680_float); // 0x190 NEW_2
	var_681_bool = var_679_bool == 0; // 0x192 Not
	if(var_681_bool == 0) goto Label_405; // 0x193 JumpB
	goto Label_415; // 0x194 Jump
	
Label_406:
	var_682_bool = 0; var_683_float = 0; // 0x196 PushV
	var_683_float = var_219_float; // 0x197 Mov
	func_506(var_241_float, var_682_bool, var_683_float); // 0x198 NEW_2
	var_684_bool = var_682_bool == 0; // 0x19a Not
	if(var_684_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_415; // 0x19c Jump
	
Label_413:
	var_235_bool = 1; // 0x19d MovB
	
Label_240:
	var_235_bool = 1; // 0xf0 MovB
	
Label_217:
	var_231_float = var_219_float; // 0xd9 Mov
}


func_715(var_0_bool, var_452_bool)
{
	var_453_cvector = CVector(0,0,0); var_454_cvector = CVector(0,0,0); var_455_cvector = CVector(0,0,0); var_456_float = 0; var_457_float = 0; var_458_cvector = CVector(0,0,0); var_459_cvector = CVector(0,0,0); var_460_cvector = CVector(0,0,0); var_461_float = 0; var_462_float = 0; // 0x2cb PushV
	var_463_bool = 0; var_464_object = Obj(); // 0x2cc PushV
	var_464_object = var_0_bool; // 0x2cd MovT
	func_2201(var_463_bool, var_464_object); // 0x2ce NEW_2
	var_465_bool = var_463_bool == 0; // 0x2d0 Not
	if(var_465_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_452_bool = 0; // 0x2d2 MovB
	return 10; // 0x2d3 Return
	
Label_724:
	var_466_bool = 0; // 0x2d4 PushV
	func_804(var_462_float, var_466_bool); // 0x2d5 NEW_2
	if(var_466_bool == 0) goto Label_741; // 0x2d7 JumpB
	GetPFPosition(var_458_cvector); // 0x2d8 TObjFunc
	GetPFPosition(var_459_cvector); // 0x2da Func
	var_460_cvector = var_458_cvector - var_459_cvector; // 0x2dc Sub2
	var_461_float = var_460_cvector | var_460_cvector; // 0x2dd Or2
	GetAttackDistance(var_462_float); // 0x2de TObjFunc
	var_467_int = 50; // 0x2e0 PushI
	var_462_float = var_462_float + var_467_int; // 0x2e1 Add2
	var_468_float = var_462_float * var_462_float; // 0x2e2 Mult
	var_452_bool = var_461_float <= var_468_float; // 0x2e3 LE2
	return 10; // 0x2e4 Return
	
Label_741:
	var_452_bool = 0; // 0x2e5 MovB
	return 10; // 0x2e6 Return
}


func_2259(var_118_bool, var_119_cvector)
{
	var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; // 0x8d3 PushV
	GetPosition(var_123_cvector); // 0x8d4 Func
	var_124_cvector = var_119_cvector - var_123_cvector; // 0x8d6 Sub2
	var_126_float = GetByIndex(var_124_cvector, 0); // 0x8d7 PushE
	var_127_float = GetByIndex(var_124_cvector, 2); // 0x8d8 PushE
	Rotate(var_126_float, var_127_float, var_125_bool); // 0x8d9 Func
	var_118_bool = var_125_bool; // 0x8db Mov
	return 6; // 0x8dc Return
}


func_2269(var_114_bool)
{
	var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); // 0x8dd PushV
	GetPosition(var_117_cvector); // 0x8de ObjFunc
	var_118_bool = 0; var_119_cvector = CVector(0,0,0); // 0x8e0 PushV
	var_119_cvector = var_117_cvector; // 0x8e1 Mov
	func_2259(var_118_bool, var_119_cvector); // 0x8e2 NEW_2
	var_114_bool = var_118_bool; // 0x8e3 Mov
	return 2; // 0x8e5 Return
}


func_1759(var_0_bool)
{
	var_0_bool = 1; // 0x6df TMovB
	var_18_int = 0; // 0x6e0 PushI
	KillTimer(var_18_int); // 0x6e1 Func
	Stop(); // 0x6e3 Func
	return 0; // 0x6e5 Return
}


func_2787(var_26_bool, var_27_object)
{
	var_28_string = ""; var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0xae3 PushV
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0xae4 PushV
	var_33_object = var_27_object; // 0xae5 Mov
	var_34_string = "class"; // 0xae6 MovS
	func_2022(var_32_bool, var_33_object, var_34_string); // 0xae7 NEW_2
	var_41_bool = var_32_bool == 0; // 0xae9 Not
	if(var_41_bool == 0) goto Label_2797; // 0xaea JumpB
	var_26_bool = 0; // 0xaeb MovB
	return 4; // 0xaec Return
	
Label_2797:
	var_42_string = "class"; // 0xaed PushS
	GetProperty(var_42_string, var_30_string); // 0xaee Func
	var_43_string = "class"; // 0xaf0 PushS
	GetProperty(var_43_string, var_31_string); // 0xaf1 ObjFunc
	var_26_bool = var_31_string == var_30_string; // 0xaf3 Eq2
	return 4; // 0xaf4 Return
}


func_1766(var_762_string)
{
	var_762_string = "walk"; // 0x6e6 MovS
	return 0; // 0x6e7 Return
}


func_743(var_450_bool)
{
	var_451_bool = 0; // 0x2e7 PushV
	var_451_bool = 0; // 0x2e8 MovB
	var_452_bool = 0; // 0x2e9 PushV
	func_715(var_451_bool, var_452_bool); // 0x2ea NEW_2
	if(var_452_bool == 0) goto Label_754; // 0x2ec JumpB
	var_469_bool = 0; // 0x2ed PushV
	func_759(var_450_bool, var_451_bool, var_469_bool); // 0x2ee NEW_2
	if(var_469_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_451_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_451_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_450_bool = 1; // 0x2f3 MovB
	return 0; // 0x2f4 Return
	
Label_757:
	var_450_bool = 0; // 0x2f5 MovB
	return 0; // 0x2f6 Return
}


func_1768(var_763_string)
{
	var_763_string = "run"; // 0x6e8 MovS
	return 0; // 0x6e9 Return
}


func_2278(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x8e6 PushV
	var_48_bool = var_33_object == 0; // 0x8e7 NullEq
	if(var_48_bool == 0) goto Label_2282; // 0x8e8 JumpB
	return 14; // 0x8e9 Return
	
Label_2282:
	IsDead(var_41_bool); // 0x8ea Func
	var_49_bool = var_41_bool; // 0x8ec Push
	if(var_49_bool == 0) goto Label_2287; // 0x8ed JumpB
	return 14; // 0x8ee Return
	
Label_2287:
	GetSecondaryAnimationType(var_42_int); // 0x8ef Func
	var_50_int = 0; // 0x8f1 PushI
	var_51_bool = var_42_int < var_50_int; // 0x8f2 LT
	if(var_51_bool == 0) goto Label_2293; // 0x8f3 JumpB
	return 14; // 0x8f4 Return
	
Label_2293:
	GetPosition(var_43_cvector); // 0x8f5 ObjFunc
	GetPosition(var_44_cvector); // 0x8f7 Func
	GetDirection(var_45_cvector); // 0x8f9 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x8fb Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x8fc PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x8fd PushE
	var_54_float = var_52_float * var_53_float; // 0x8fe Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x8ff PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x900 PushE
	var_57_float = var_55_float * var_56_float; // 0x901 Mult
	var_58_int = var_54_float + var_57_float; // 0x902 Add
	var_59_int = 0; // 0x903 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x904 GE
	if(var_60_bool == 0) goto Label_2312; // 0x905 JumpB
	var_47_string = "fhit"; // 0x906 MovS
	goto Label_2313; // 0x907 Jump
	
Label_2313:
	var_61_string = "hit_react"; // 0x909 PushS
	var_62_string = "1"; // 0x90a PushS
	var_63_int = var_47_string + var_62_string; // 0x90b Add
	var_64_string = "2"; // 0x90c PushS
	var_65_int = var_47_string + var_64_string; // 0x90d Add
	var_66_int = -10; // 0x90e PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x90f Func
	return 14; // 0x911 Return
	
Label_2312:
	var_47_string = "bhit"; // 0x908 MovS
}


func_1770(var_62_bool, var_63_object)
{
	var_64_bool = 0; var_65_object = Obj(); // 0x6eb PushV
	var_65_object = var_63_object; // 0x6ec Mov
	func_2017(var_64_bool, var_65_object); // 0x6ed NEW_2
	if(var_64_bool == 0) goto Label_1781; // 0x6ef JumpB
	var_68_object = Obj(); // 0x6f0 PushV
	func_2570(var_68_object); // 0x6f1 NEW_2
	SendPlayerEnemy(var_63_object, var_68_object); // 0x6f3 Func
	
Label_1781:
	var_71_bool = 0; var_72_object = Obj(); // 0x6f5 PushV
	var_72_object = var_63_object; // 0x6f6 Mov
	func_1787(var_62_bool, var_63_object, var_71_bool, var_72_object); // 0x6f7 NEW_2
	var_62_bool = var_71_bool; // 0x6f8 Mov
	return 0; // 0x6fa Return
}


func_1260(var_0_bool, var_1_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x4ec PushV
	var_0_bool = 0; // 0x4ed TMovB
	var_1_object = 0; // 0x4ee TMovB
	var_34_float = 0.5; // 0x4ef PushF
	rand(var_28_float, var_34_float); // 0x4f0 Func
	Sleep(var_28_float); // 0x4f2 Func
	
Label_1268:
	var_35_bool = var_0_bool == 0; // 0x4f4 Not
	if(var_35_bool == 0) goto Label_1318; // 0x4f5 JumpB
	var_36_bool = var_1_object == 0; // 0x4f6 Not
	if(var_36_bool == 0) goto Label_1287; // 0x4f7 JumpB
	
Label_1272:
	GetPosition(var_30_cvector); // 0x4f8 Func
	var_37_float = 0; // 0x4fa PushV
	func_1319(var_37_float); // 0x4fb NEW_2
	GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool); // 0x4fd Func
	var_40_bool = var_31_bool; // 0x4ff Push
	if(var_40_bool == 0) goto Label_1282; // 0x500 JumpB
	goto Label_1286; // 0x501 Jump
	
Label_1286:
	goto Label_1288; // 0x506 Jump
	
Label_1288:
	var_41_object = Obj(); var_42_cvector = CVector(0,0,0); // 0x508 PushV
	var_42_cvector = var_29_cvector; // 0x509 Mov
	func_1347(var_41_object, var_42_cvector); // 0x50a NEW_2
	var_32_object = var_41_object; // 0x50b Mov
	var_45_bool = var_32_object != 0; // 0x50d NullNeq
	if(var_45_bool == 0) goto Label_1313; // 0x50e JumpB
	RotatePath(var_32_object, var_33_bool); // 0x50f Func
	var_46_bool = var_33_bool; // 0x511 Push
	if(var_46_bool == 0) goto Label_1312; // 0x512 JumpB
	var_47_bool = 0; // 0x513 PushV
	func_1345(var_47_bool); // 0x514 NEW_2
	FollowPath(var_32_object, var_47_bool, var_33_bool); // 0x516 Func
	var_32_object = 0; // 0x518 SetNull
	var_48_bool = var_33_bool; // 0x519 Push
	if(var_48_bool == 0) goto Label_1312; // 0x51a JumpB
	TaskCall(4); // 0x51c TaskCall
	func_1402(); // 0x51d NEW_2
	TaskReturn(); // 0x51e TaskReturn
	
Label_1312:
	goto Label_1316; // 0x520 Jump
	
Label_1316:
	var_32_object = 0; // 0x524 SetNull
	goto Label_1268; // 0x525 Jump
	
Label_1313:
	var_102_int = 1; // 0x521 PushI
	Sleep(var_102_int); // 0x522 Func
	
Label_1282:
	var_103_int = 1; // 0x502 PushI
	Sleep(var_103_int); // 0x503 Func
	goto Label_1272; // 0x505 Jump
	
Label_1287:
	var_1_object = 0; // 0x507 TMovB
	
Label_1318:
	return 12; // 0x526 Return
}


func_2805()
{
	var_16_object = GlobalVars[1]; // 0xaf5 PushGE
	var_17_object = Obj(); // 0xaf6 PushV
	func_2641(var_17_object); // 0xaf7 NEW_2
	var_16_object = var_17_object; // 0xaf8 Mov
	GlobalVars[1] = var_16_object; // 0xafa PopGE
	return 0; // 0xafb Return
}


func_759(var_0_bool, var_4_bool, var_469_bool)
{
	var_470_object = Obj(); var_471_bool = 0; var_472_float = 0; var_473_cvector = CVector(0,0,0); var_474_cvector = CVector(0,0,0); var_475_object = Obj(); var_476_bool = 0; var_477_float = 0; var_478_cvector = CVector(0,0,0); var_479_cvector = CVector(0,0,0); // 0x2f7 PushV
	GetScene(var_475_object); // 0x2f8 Func
	var_476_bool = 0; // 0x2fa MovB
	
Label_763:
	var_480_cvector = CVector(0,0,0); var_481_object = Obj(); // 0x2fb PushV
	var_481_object = var_0_bool; // 0x2fc MovT
	func_2002(var_481_object); // 0x2fd NEW_2
	var_486_int = -var_480_cvector; // 0x2ff Neg
	FindDirLength(var_477_float, var_486_int, var_477_float); // 0x300 Func
	var_487_bool = var_477_float < var_4_bool; // 0x302 LT
	if(var_487_bool == 0) goto Label_773; // 0x303 JumpB
	goto Label_801; // 0x304 Jump
	
Label_801:
	var_469_bool = var_476_bool; // 0x321 Mov
	return 10; // 0x322 Return
	
Label_773:
	Face(var_0_bool); // 0x305 Func
	var_488_string = "all"; // 0x307 PushS
	var_489_string = "bjump"; // 0x308 PushS
	PlayAnimation(var_488_string, var_489_string); // 0x309 Func
	GetPFPosition(var_478_cvector); // 0x30b TObjFunc
	GetPFPosition(var_479_cvector); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	func_847(var_479_cvector); // 0x312 NEW_2
	StopAsync(); // 0x314 Func
	var_490_cvector = CVector(0.0, 0.0, 0.0); // 0x316 PushVec
	SetSpeed(var_490_cvector); // 0x317 Func
	var_476_bool = 1; // 0x319 MovB
	var_491_bool = 0; // 0x31a PushV
	func_715(var_479_cvector, var_491_bool); // 0x31b NEW_2
	var_492_bool = var_491_bool == 0; // 0x31d Not
	if(var_492_bool == 0) goto Label_800; // 0x31e JumpB
	goto Label_801; // 0x31f Jump
	
Label_800:
	goto Label_763; // 0x320 Jump
}


func_1787(var_71_bool, var_72_object, var_94_bool, var_693_object)
{
	var_73_float = 0; var_74_float = 0; // 0x6fb PushV
	var_75_bool = 0; var_76_object = Obj(); // 0x6fc PushV
	var_76_object = var_72_object; // 0x6fd Mov
	func_2201(var_75_bool, var_76_object); // 0x6fe NEW_2
	var_77_bool = var_75_bool == 0; // 0x700 Not
	if(var_77_bool == 0) goto Label_1796; // 0x701 JumpB
	var_71_bool = 0; // 0x702 MovB
	return 2; // 0x703 Return
	
Label_1796:
	var_78_float = 0; var_79_object = Obj(); // 0x704 PushV
	var_79_object = var_72_object; // 0x705 Mov
	func_2009(var_79_object); // 0x706 NEW_2
	var_74_float = var_78_float; // 0x707 Mov
	var_86_bool = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0; // 0x709 PushV
	var_87_float = var_74_float; // 0x70a Mov
	var_88_float = 250000.0; // 0x70b MovF
	var_89_float = 3240000.0; // 0x70c MovF
	func_2628(var_86_bool, var_87_float, var_88_float, var_89_float); // 0x70d NEW_2
	if(var_86_bool == 0) goto Label_1816; // 0x70f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x710 PushV
	var_93_object = var_72_object; // 0x711 Mov
	TaskCall(0); // 0x712 TaskCall
	func_0(var_74_float, var_94_bool, var_92_bool, var_93_object); // 0x713 NEW_2
	TaskReturn(); // 0x714 TaskReturn
	var_71_bool = var_94_bool; // 0x715 Mov
	return 2; // 0x717 Return
	
Label_1816:
	var_691_bool = 0; var_692_object = Obj(); // 0x718 PushV
	var_692_object = var_72_object; // 0x719 Mov
	TaskCall(1); // 0x71a TaskCall
	func_126(var_691_bool, var_692_object); // 0x71b NEW_2
	TaskReturn(); // 0x71c TaskReturn
	var_71_bool = var_693_object; // 0x71d Mov
	return 2; // 0x71f Return
}


func_2812(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_float = 0; var_23_string = ""; var_24_bool = 0; var_25_float = 0; var_26_string = ""; // 0xafc PushV
	var_27_bool = 0; var_28_object = Obj(); // 0xafd PushV
	var_28_object = var_20_object; // 0xafe Mov
	func_2201(var_27_bool, var_28_object); // 0xaff NEW_2
	var_61_bool = var_27_bool == 0; // 0xb01 Not
	if(var_61_bool == 0) goto Label_2821; // 0xb02 JumpB
	var_19_bool = 0; // 0xb03 MovB
	return 6; // 0xb04 Return
	
Label_2821:
	var_62_object = GlobalVars[1]; // 0xb05 PushGE
	in(var_24_bool, var_20_object); // 0xb06 ObjFunc
	var_63_bool = var_24_bool; // 0xb08 Push
	if(var_63_bool == 0) goto Label_2828; // 0xb09 JumpB
	var_19_bool = 1; // 0xb0a MovB
	return 6; // 0xb0b Return
	
Label_2828:
	var_64_bool = 0; var_65_object = Obj(); // 0xb0c PushV
	var_65_object = var_20_object; // 0xb0d Mov
	func_2017(var_64_bool, var_65_object); // 0xb0e NEW_2
	if(var_64_bool == 0) goto Label_2839; // 0xb10 JumpB
	var_68_string = "reputation"; // 0xb11 PushS
	GetProperty(var_68_string, var_25_float); // 0xb12 ObjFunc
	var_69_float = 0.33; // 0xb14 PushF
	var_19_bool = var_25_float >= var_69_float; // 0xb15 GE2
	return 6; // 0xb16 Return
	
Label_2839:
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0xb17 PushV
	var_71_object = var_20_object; // 0xb18 Mov
	var_72_string = "class"; // 0xb19 MovS
	func_2022(var_70_bool, var_71_object, var_72_string); // 0xb1a NEW_2
	var_73_bool = var_70_bool == 0; // 0xb1c Not
	if(var_73_bool == 0) goto Label_2848; // 0xb1d JumpB
	var_19_bool = 0; // 0xb1e MovB
	return 6; // 0xb1f Return
	
Label_2848:
	var_74_string = "class"; // 0xb20 PushS
	GetProperty(var_74_string, var_26_string); // 0xb21 ObjFunc
	var_75_bool = 0; var_76_string = ""; // 0xb23 PushV
	var_76_string = var_26_string; // 0xb24 Mov
	func_2483(var_75_bool, var_76_string); // 0xb25 NEW_2
	var_19_bool = var_75_bool; // 0xb26 Mov
	return 6; // 0xb28 Return
}


func_2322(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x912 PushV
	var_41_bool = 0; // 0x913 PushV
	var_41_bool = 0; // 0x914 MovB
	var_42_bool = 0; // 0x915 PushV
	var_42_bool = 0; // 0x916 MovB
	var_43_object = var_20_object; // 0x917 Push
	if(var_43_object == 0) goto Label_2333; // 0x918 JumpB
	var_44_int = 4; // 0x919 PushI
	var_45_bool = var_21_int != var_44_int; // 0x91a Neq
	if(var_45_bool == 0) goto Label_2333; // 0x91b JumpB
	var_42_bool = 1; // 0x91c MovB
	
Label_2333:
	if(var_42_bool == 0) goto Label_2338; // 0x91d JumpB
	var_46_int = 5; // 0x91e PushI
	var_47_bool = var_21_int != var_46_int; // 0x91f Neq
	if(var_47_bool == 0) goto Label_2338; // 0x920 JumpB
	var_41_bool = 1; // 0x921 MovB
	
Label_2338:
	if(var_41_bool == 0) goto Label_2385; // 0x922 JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x923 PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x924 PushV
	var_51_object = var_20_object; // 0x925 Mov
	func_2002(var_51_object); // 0x926 NEW_2
	var_49_cvector = var_50_cvector; // 0x927 Mov
	func_2576(var_48_cvector, var_49_cvector); // 0x929 NEW_2
	var_32_cvector = var_48_cvector; // 0x92a Mov
	CreateVectorVector(var_33_object); // 0x92c Func
	var_34_int = 1; // 0x92e MovI
	
Label_2351:
	var_61_string = "hit"; // 0x92f PushS
	var_62_int = var_61_string + var_34_int; // 0x930 Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x931 Func
	var_63_bool = var_35_bool == 0; // 0x933 Not
	if(var_63_bool == 0) goto Label_2358; // 0x934 JumpB
	goto Label_2367; // 0x935 Jump
	
Label_2367:
	size(var_38_int); // 0x93f ObjFunc
	var_64_int = var_38_int; // 0x941 Push
	if(var_64_int == 0) goto Label_2384; // 0x942 JumpB
	irand(var_39_int, var_38_int); // 0x943 Func
	get(var_40_cvector, var_39_int); // 0x945 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x947 PushV
	var_65_object = var_20_object; // 0x948 Mov
	var_66_int = var_21_int; // 0x949 Mov
	var_67_float = var_22_float; // 0x94a Mov
	var_68_cvector = var_40_cvector; // 0x94b Mov
	var_69_cvector = -var_32_cvector; // 0x94c Neg2
	func_2390(var_67_float, var_68_cvector, var_69_cvector); // 0x94d NEW_2
	return 18; // 0x94f Return
	
Label_2384:
	var_33_object = 0; // 0x950 SetNull
	
Label_2385:
	var_110_object = Obj(); // 0x951 PushV
	var_110_object = var_20_object; // 0x952 Mov
	func_2278(var_110_object); // 0x953 NEW_2
	return 18; // 0x955 Return
	
Label_2358:
	var_111_int = var_37_cvector | var_32_cvector; // 0x936 Or
	var_112_float = 0.70711; // 0x937 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x938 GE
	if(var_113_bool == 0) goto Label_2364; // 0x939 JumpB
	add(var_36_cvector); // 0x93a ObjFunc
	
Label_2364:
	var_114_int = 1; // 0x93c PushI
	var_34_int = var_34_int + var_114_int; // 0x93d Add2
	goto Label_2351; // 0x93e Jump
}


func_1824(var_60_object)
{
	var_61_bool = 0; var_62_bool = 0; // 0x720 PushV
	IsPlayerActor(var_60_object, var_62_bool); // 0x721 Func
	var_63_bool = var_62_bool; // 0x723 Push
	if(var_63_bool == 0) goto Label_1832; // 0x724 JumpB
	func_3125(); // 0x726 NEW_2
	
Label_1832:
	func_3101(); // 0x729 NEW_2
	var_126_object = Obj(); // 0x72b PushV
	var_126_object = var_60_object; // 0x72c Mov
	func_1840(var_126_object); // 0x72d NEW_2
	return 2; // 0x72f Return
}


func_804(var_0_bool, var_400_bool)
{
	var_401_bool = 0; var_402_bool = 0; // 0x324 PushV
	var_403_string = "IsAttacking"; // 0x325 PushS
	var_404_int = 1; // 0x326 PushI
	var_405_bool = IsFuncExist(var_0_bool, var_403_string, var_404_int); // 0x327 FuncExist
	if(var_405_bool == 0) goto Label_813; // 0x328 JumpB
	IsAttacking(var_402_bool); // 0x329 TObjFunc
	var_400_bool = var_402_bool; // 0x32b Mov
	return 2; // 0x32c Return
	
Label_813:
	var_400_bool = 0; // 0x32d MovB
	return 2; // 0x32e Return
}


func_1319(var_37_float)
{
	var_38_float = 0; var_39_float = 0; // 0x527 PushV
	GetCameraFarDistance(var_39_float); // 0x528 Func
	var_37_float = var_39_float; // 0x52a Mov
	return 2; // 0x52b Return
}


func_2857(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xb2a PushV
	var_20_object = var_18_object; // 0xb2b Mov
	func_2812(var_19_bool, var_20_object); // 0xb2c NEW_2
	var_17_bool = var_19_bool; // 0xb2d Mov
	return 0; // 0xb2f Return
}


func_815(var_2_int, var_5_float)
{
	var_513_float = 0; var_514_int = 0; var_515_float = 0; var_516_int = 0; // 0x32f PushV
	var_517_bool = var_2_int == 0; // 0x330 Not
	if(var_517_bool == 0) goto Label_819; // 0x331 JumpB
	return 4; // 0x332 Return
	
Label_819:
	var_518_float = var_5_float; // 0x333 PushT
	if(var_518_float == 0) goto Label_827; // 0x334 JumpB
	var_519_int = -1; // 0x335 PushI
	var_5_float = var_5_float + var_519_int; // 0x336 Add2
	var_520_int = 0; // 0x337 PushI
	var_521_bool = var_5_float > var_520_int; // 0x338 GT
	if(var_521_bool == 0) goto Label_827; // 0x339 JumpB
	return 4; // 0x33a Return
	
Label_827:
	rand(var_515_float); // 0x33b Func
	var_522_float = 0; // 0x33d PushV
	func_861(var_522_float); // 0x33e NEW_2
	var_523_bool = var_515_float < var_522_float; // 0x340 LT
	if(var_523_bool == 0) goto Label_846; // 0x341 JumpB
	irand(var_516_int, var_515_float); // 0x342 Func
	var_524_int = 1; // 0x344 PushI
	var_516_int = var_516_int + var_524_int; // 0x345 Add2
	var_525_string = "attack"; // 0x346 PushS
	var_526_int = var_525_string + var_516_int; // 0x347 Add
	Speak(var_526_int); // 0x348 Func
	var_527_int = 0; // 0x34a PushV
	func_859(var_527_int); // 0x34b NEW_2
	var_5_float = var_527_int; // 0x34c TMov
	
Label_846:
	return 4; // 0x34e Return
}


func_2864(var_114_object)
{
	var_115_bool = 0; var_116_object = Obj(); // 0xb31 PushV
	var_116_object = var_114_object; // 0xb32 Mov
	TaskCall(7); // 0xb33 TaskCall
	func_1770(var_115_bool, var_116_object); // 0xb34 NEW_2
	TaskReturn(); // 0xb35 TaskReturn
	if(var_115_bool == 0) goto Label_2878; // 0xb37 JumpB
	var_750_object = Obj(); // 0xb38 PushV
	var_750_object = var_114_object; // 0xb39 Mov
	TaskCall(6); // 0xb3a TaskCall
	func_1555(var_753_bool, var_750_object); // 0xb3b NEW_2
	TaskReturn(); // 0xb3c TaskReturn
	
Label_2878:
	ResetAAS(); // 0xb3e Func
	return 0; // 0xb40 Return
}


func_1840(var_126_object)
{
	EventDisable(0); // 0x731 EventDisable
	var_127_object = Obj(); // 0x732 PushV
	var_127_object = var_126_object; // 0x733 Mov
	func_1865(var_127_object); // 0x734 NEW_2
	var_207_int = 50; // 0x736 PushI
	var_208_int = 40; // 0x737 PushI
	SetRTEnvelope(var_207_int, var_208_int); // 0x738 Func
	EventEnable(0); // 0x73a EventEnable
	
Label_1851:
	Hold(); // 0x73b Func
	goto Label_1851; // 0x73d Jump
}


func_1331(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x533 TMovB
	var_1_object = 0; // 0x534 TMovB
	Stop(); // 0x535 Func
	StopGroup0(); // 0x537 Func
	return 0; // 0x539 Return
}


func_1338(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x53a TMovB
	var_1_object = 1; // 0x53b TMovB
	Stop(); // 0x53c Func
	StopGroup0(); // 0x53e Func
	return 0; // 0x540 Return
}


func_2881(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xb42 PushV
	var_20_object = var_18_object; // 0xb43 Mov
	func_2812(var_19_bool, var_20_object); // 0xb44 NEW_2
	var_17_bool = var_19_bool; // 0xb45 Mov
	return 0; // 0xb47 Return
}


func_1345(var_47_bool)
{
	var_47_bool = 0; // 0x541 MovB
	return 0; // 0x542 Return
}


func_1347(var_41_object, var_42_cvector)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x543 PushV
	FindShiftedPathTo(var_44_object, var_42_cvector); // 0x544 Func
	var_41_object = var_44_object; // 0x546 Mov
	return 2; // 0x547 Return
}


func_2888(var_114_object)
{
	var_115_bool = 0; var_116_object = Obj(); // 0xb49 PushV
	var_116_object = var_114_object; // 0xb4a Mov
	TaskCall(7); // 0xb4b TaskCall
	func_1770(var_115_bool, var_116_object); // 0xb4c NEW_2
	TaskReturn(); // 0xb4d TaskReturn
	if(var_115_bool == 0) goto Label_2902; // 0xb4f JumpB
	var_750_object = Obj(); // 0xb50 PushV
	var_750_object = var_114_object; // 0xb51 Mov
	TaskCall(6); // 0xb52 TaskCall
	func_1555(var_753_bool, var_750_object); // 0xb53 NEW_2
	TaskReturn(); // 0xb54 TaskReturn
	
Label_2902:
	ResetAAS(); // 0xb56 Func
	return 0; // 0xb58 Return
}


func_1865(var_127_object)
{
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_string = ""; var_133_object = Obj(); var_134_bool = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_string = ""; var_143_object = Obj(); var_144_bool = 0; var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); // 0x749 PushV
	var_148_bool = var_127_object == 0; // 0x74a NullEq
	if(var_148_bool == 0) goto Label_1873; // 0x74b JumpB
	var_149_string = ""; // 0x74c PushV
	var_149_string = "fdie"; // 0x74d MovS
	func_1956(var_149_string); // 0x74e NEW_2
	goto Label_1955; // 0x750 Jump
	
Label_1955:
	return 20; // 0x7a3 Return
	
Label_1873:
	GetPosition(var_138_cvector); // 0x751 ObjFunc
	GetPosition(var_139_cvector); // 0x753 Func
	GetDirection(var_140_cvector); // 0x755 Func
	var_141_cvector = var_139_cvector - var_138_cvector; // 0x757 Sub2
	var_181_float = GetByIndex(var_141_cvector, 0); // 0x758 PushE
	var_182_float = GetByIndex(var_140_cvector, 0); // 0x759 PushE
	var_183_float = var_181_float * var_182_float; // 0x75a Mult
	var_184_float = GetByIndex(var_141_cvector, 2); // 0x75b PushE
	var_185_float = GetByIndex(var_140_cvector, 2); // 0x75c PushE
	var_186_float = var_184_float * var_185_float; // 0x75d Mult
	var_187_int = var_183_float + var_186_float; // 0x75e Add
	var_188_int = 0; // 0x75f PushI
	var_189_bool = var_187_int >= var_188_int; // 0x760 GE
	if(var_189_bool == 0) goto Label_1892; // 0x761 JumpB
	var_142_string = "fdie"; // 0x762 MovS
	goto Label_1893; // 0x763 Jump
	
Label_1893:
	RemoveRTEnvelope(); // 0x765 Func
	SetDeathState(); // 0x767 Func
	Stop(); // 0x769 Func
	StopAsync(); // 0x76b Func
	var_143_object = var_127_object; // 0x76d Mov
	var_190_string = "GetScriptProperty"; // 0x76e PushS
	var_191_int = 2; // 0x76f PushI
	var_192_bool = IsFuncExist(var_127_object, var_190_string, var_191_int); // 0x770 FuncExist
	if(var_192_bool == 0) goto Label_1917; // 0x771 JumpB
	var_193_string = "Owner"; // 0x772 PushS
	HasScriptProperty(var_144_bool, var_193_string); // 0x773 ObjFunc
	var_194_bool = var_144_bool; // 0x775 Push
	if(var_194_bool == 0) goto Label_1917; // 0x776 JumpB
	var_195_string = "Owner"; // 0x777 PushS
	GetScriptProperty(var_143_object, var_195_string); // 0x778 ObjFunc
	var_196_bool = var_143_object == 0; // 0x77a NullEq
	if(var_196_bool == 0) goto Label_1917; // 0x77b JumpB
	var_143_object = var_127_object; // 0x77c Mov
	
Label_1917:
	var_197_string = "@GetEyesHeight"; // 0x77d PushS
	var_198_int = 1; // 0x77e PushI
	var_199_bool = IsFuncExist(var_143_object, var_197_string, var_198_int); // 0x77f FuncExist
	if(var_199_bool == 0) goto Label_1932; // 0x780 JumpB
	GetEyesHeight(var_146_float); // 0x781 ObjFunc
	var_147_cvector = CVector(0.0, 0.0, 0.0); // 0x783 MovV
	var_200_float = GetByIndex(var_147_cvector, 1); // 0x784 PushE
	var_200_float = var_146_float; // 0x785 Mov
	SetByIndex(var_147_cvector, 1) = var_200_float; // 0x786 PopE
	var_201_string = "head"; // 0x787 PushS
	LookAsync(var_127_object, var_201_string, var_147_cvector); // 0x788 Func
	var_145_bool = 1; // 0x78a MovB
	goto Label_1933; // 0x78b Jump
	
Label_1933:
	var_202_string = ""; // 0x78d PushV
	var_202_string = var_142_string; // 0x78e Mov
	func_2442(var_202_string); // 0x78f NEW_2
	var_203_string = "all"; // 0x791 PushS
	PlayAnimation(var_203_string, var_142_string); // 0x792 Func
	WaitForAnimEnd(); // 0x794 Func
	var_204_bool = var_145_bool; // 0x796 Push
	if(var_204_bool == 0) goto Label_1949; // 0x797 JumpB
	StopAsync(); // 0x798 Func
	var_205_string = "head"; // 0x79a PushS
	UnlookAsync(var_205_string); // 0x79b Func
	
Label_1949:
	var_206_string = "all"; // 0x79d PushS
	LockAnimationEnd(var_206_string, var_142_string); // 0x79e Func
	RemoveEnvelope(); // 0x7a0 Func
	var_143_object = 0; // 0x7a2 SetNull
	
Label_1932:
	var_145_bool = 0; // 0x78c MovB
	
Label_1892:
	var_142_string = "bdie"; // 0x764 MovS
}


func_847(var_0_bool)
{
	var_279_object = Obj(); // 0x34f PushV
	var_279_object = var_0_bool; // 0x350 MovT
	func_2702(var_279_object); // 0x351 NEW_2
	return 0; // 0x353 Return
}


func_852()
{
	var_406_string = ""; // 0x354 PushV
	var_406_string = "attack_stay"; // 0x355 MovS
	func_2442(var_406_string); // 0x356 NEW_2
	return 0; // 0x358 Return
}


func_2390(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x956 PushV
	GetScene(var_29_object); // 0x957 Func
	var_31_string = "scripted"; // 0x959 PushS
	var_32_string = "blood_dir.xml"; // 0x95a PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x95b Func
	var_33_object = Obj(); // 0x95d PushV
	var_33_object = var_22_object; // 0x95e Mov
	func_2278(var_33_object); // 0x95f NEW_2
	return 4; // 0x961 Return
}


func_2905(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xb59 PushV
	var_23_bool = var_20_object == 0; // 0xb5a NullEq
	if(var_23_bool == 0) goto Label_2909; // 0xb5b JumpB
	return 2; // 0xb5c Return
	
Label_2909:
	var_24_object = GlobalVars[1]; // 0xb5d PushGE
	in(var_22_bool, var_20_object); // 0xb5e ObjFunc
	var_25_bool = var_22_bool == 0; // 0xb60 Not
	if(var_25_bool == 0) goto Label_2917; // 0xb61 JumpB
	var_26_object = GlobalVars[1]; // 0xb62 PushGE
	add(var_20_object); // 0xb63 ObjFunc
	
Label_2917:
	return 2; // 0xb65 Return
}


func_857(var_652_bool)
{
	var_652_bool = 1; // 0x359 MovB
	return 0; // 0x35a Return
}


func_859(var_527_int)
{
	var_527_int = 1; // 0x35b MovI
	return 0; // 0x35c Return
}


func_861(var_522_float)
{
	var_522_float = 0.5; // 0x35d MovF
	return 0; // 0x35e Return
}


func_2404()
{
	var_384_cvector = CVector(0,0,0); var_385_cvector = CVector(0,0,0); var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0); var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); // 0x964 PushV
	GetPosition(var_387_cvector); // 0x965 ObjFunc
	GetPosition(var_388_cvector); // 0x967 Func
	var_389_cvector = var_387_cvector - var_388_cvector; // 0x969 Sub2
	var_390_float = GetByIndex(var_389_cvector, 0); // 0x96a PushE
	var_391_float = GetByIndex(var_389_cvector, 2); // 0x96b PushE
	RotateAsync(var_390_float, var_391_float); // 0x96c Func
	return 6; // 0x96e Return
}


func_2918(var_19_object)
{
	var_20_object = Obj(); // 0xb67 PushV
	var_20_object = var_19_object; // 0xb68 Mov
	func_2905(var_20_object); // 0xb69 NEW_2
	var_27_bool = 0; var_28_object = Obj(); // 0xb6b PushV
	var_28_object = var_19_object; // 0xb6c Mov
	func_2201(var_27_bool, var_28_object); // 0xb6d NEW_2
	var_61_bool = var_27_bool == 0; // 0xb6f Not
	if(var_61_bool == 0) goto Label_2930; // 0xb70 JumpB
	return 0; // 0xb71 Return
	
Label_2930:
	var_62_bool = 0; var_63_object = Obj(); // 0xb72 PushV
	var_63_object = var_19_object; // 0xb73 Mov
	TaskCall(7); // 0xb74 TaskCall
	func_1770(var_62_bool, var_63_object); // 0xb75 NEW_2
	TaskReturn(); // 0xb76 TaskReturn
	if(var_62_bool == 0) goto Label_2943; // 0xb78 JumpB
	var_699_object = Obj(); // 0xb79 PushV
	var_699_object = var_19_object; // 0xb7a Mov
	TaskCall(6); // 0xb7b TaskCall
	func_1555(var_702_bool, var_699_object); // 0xb7c NEW_2
	TaskReturn(); // 0xb7d TaskReturn
	
Label_2943:
	ResetAAS(); // 0xb7f Func
	return 0; // 0xb81 Return
}


func_2415(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0; // 0x96f PushV
	IsLoaded(var_65_bool); // 0x970 Func
	var_63_bool = var_65_bool; // 0x972 Mov
	return 2; // 0x973 Return
}


func_2420(var_299_object)
{
	var_300_float = 0; var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_cvector = CVector(0,0,0); // 0x974 PushV
	GetEyesHeight(var_302_float); // 0x975 ObjFunc
	var_303_cvector = CVector(0.0, 0.0, 0.0); // 0x977 MovV
	var_304_float = GetByIndex(var_303_cvector, 1); // 0x978 PushE
	var_304_float = var_302_float; // 0x979 Mov
	SetByIndex(var_303_cvector, 1) = var_304_float; // 0x97a PopE
	var_305_string = "head"; // 0x97b PushS
	LookAsync(var_299_object, var_305_string, var_303_cvector); // 0x97c Func
	return 4; // 0x97e Return
}


func_887(var_2_int, var_282_bool, var_283_object, var_284_float, var_285_float, var_286_bool, var_287_bool)
{
	var_291_bool = 0; var_292_bool = 0; var_293_bool = 0; var_294_bool = 0; // 0x377 PushV
	var_295_object = Obj(); // 0x378 PushV
	var_295_object = var_283_object; // 0x379 Mov
	func_2702(var_295_object); // 0x37a NEW_2
	var_296_int = 1; // 0x37c PushI
	var_297_int = 5; // 0x37d PushI
	SetTimer(var_296_int, var_297_int); // 0x37e Func
	CanSee(var_293_bool, var_283_object); // 0x380 Func
	var_298_bool = var_293_bool; // 0x382 Push
	if(var_298_bool == 0) goto Label_906; // 0x383 JumpB
	var_2_int = 1; // 0x384 TMovB
	var_299_object = Obj(); // 0x385 PushV
	var_299_object = var_283_object; // 0x386 Mov
	func_2420(var_299_object); // 0x387 NEW_2
	goto Label_907; // 0x389 Jump
	
Label_907:
	var_306_bool = 0; var_307_object = Obj(); // 0x38b PushV
	var_307_object = var_283_object; // 0x38c Mov
	func_2017(var_306_bool, var_307_object); // 0x38d NEW_2
	if(var_306_bool == 0) goto Label_917; // 0x38f JumpB
	var_308_object = Obj(); // 0x390 PushV
	func_2570(var_308_object); // 0x391 NEW_2
	SendPlayerEnemy(var_283_object, var_308_object); // 0x393 Func
	
Label_917:
	var_309_bool = 0; var_310_object = Obj(); var_311_float = 0; var_312_float = 0; var_313_bool = 0; var_314_bool = 0; // 0x395 PushV
	var_310_object = var_283_object; // 0x396 Mov
	var_311_float = var_284_float; // 0x397 Mov
	var_312_float = var_285_float; // 0x398 Mov
	var_313_bool = var_286_bool; // 0x399 Mov
	var_314_bool = var_287_bool; // 0x39a Mov
	func_992(var_293_bool, var_294_bool, var_309_bool, var_310_object, var_311_float, var_312_float, var_313_bool, var_314_bool); // 0x39b NEW_2
	var_294_bool = var_309_bool; // 0x39c Mov
	var_360_int = var_2_int; // 0x39e PushT
	if(var_360_int == 0) goto Label_931; // 0x39f JumpB
	var_361_string = "head"; // 0x3a0 PushS
	UnlookAsync(var_361_string); // 0x3a1 Func
	
Label_931:
	var_362_int = 1; // 0x3a3 PushI
	KillTimer(var_362_int); // 0x3a4 Func
	var_282_bool = var_294_bool; // 0x3a6 Mov
	return 4; // 0x3a7 Return
	
Label_906:
	var_2_int = 0; // 0x38a TMovB
}


func_1402()
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_bool = 0; // 0x57a PushV
	WaitForAnimEnd(); // 0x57b Func
	var_63_bool = 0; // 0x57d PushV
	func_2415(var_63_bool); // 0x57e NEW_2
	var_66_bool = var_63_bool == 0; // 0x580 Not
	if(var_66_bool == 0) goto Label_1411; // 0x581 JumpB
	return 14; // 0x582 Return
	
Label_1411:
	var_67_int = 0; // 0x583 PushV
	func_2735(var_67_int); // 0x584 NEW_2
	var_56_int = var_67_int; // 0x585 Mov
	var_57_int = 0; // 0x587 MovI
	
Label_1416:
	var_80_bool = 0; // 0x588 PushV
	var_80_bool = 0; // 0x589 MovB
	var_81_int = 5; // 0x58a PushI
	var_82_bool = var_57_int < var_81_int; // 0x58b LT
	if(var_82_bool == 0) goto Label_1426; // 0x58c JumpB
	var_83_bool = 0; // 0x58d PushV
	func_2415(var_83_bool); // 0x58e NEW_2
	if(var_83_bool == 0) goto Label_1426; // 0x590 JumpB
	var_80_bool = 1; // 0x591 MovB
	
Label_1426:
	if(var_80_bool == 0) goto Label_1478; // 0x592 JumpB
	var_84_int = 3; // 0x593 PushI
	irand(var_58_int, var_84_int); // 0x594 Func
	var_85_int = 0; // 0x596 PushI
	var_86_bool = var_58_int == var_85_int; // 0x597 Eq
	if(var_86_bool == 0) goto Label_1450; // 0x598 JumpB
	var_87_int = var_56_int; // 0x599 Push
	if(var_87_int == 0) goto Label_1449; // 0x59a JumpB
	irand(var_59_int, var_56_int); // 0x59b Func
	var_88_string = "all"; // 0x59d PushS
	var_89_string = ""; var_90_int = 0; // 0x59e PushV
	var_90_int = var_59_int; // 0x59f Mov
	func_2728(var_89_string, var_90_int); // 0x5a0 NEW_2
	PlayAnimation(var_88_string, var_89_string); // 0x5a2 Func
	WaitForAnimEnd(var_60_bool); // 0x5a4 Func
	var_91_bool = var_60_bool == 0; // 0x5a6 Not
	if(var_91_bool == 0) goto Label_1449; // 0x5a7 JumpB
	goto Label_1478; // 0x5a8 Jump
	
Label_1478:
	ResetAAS(); // 0x5c6 Func
	return 14; // 0x5c8 Return
	
Label_1449:
	goto Label_1467; // 0x5a9 Jump
	
Label_1467:
	var_92_bool = 0; // 0x5bb PushV
	func_1481(var_92_bool); // 0x5bc NEW_2
	var_93_bool = var_92_bool == 0; // 0x5be Not
	if(var_93_bool == 0) goto Label_1473; // 0x5bf JumpB
	goto Label_1478; // 0x5c0 Jump
	
Label_1473:
	ResetAAS(); // 0x5c1 Func
	var_94_int = 1; // 0x5c3 PushI
	var_57_int = var_57_int + var_94_int; // 0x5c4 Add2
	goto Label_1416; // 0x5c5 Jump
	
Label_1450:
	var_95_int = 1; // 0x5aa PushI
	var_96_bool = var_58_int == var_95_int; // 0x5ab Eq
	if(var_96_bool == 0) goto Label_1464; // 0x5ac JumpB
	var_97_int = 4; // 0x5ad PushI
	rand(var_61_float, var_97_int); // 0x5ae Func
	var_98_int = 1; // 0x5b0 PushI
	var_99_int = var_61_float + var_98_int; // 0x5b1 Add
	Sleep(var_99_int, var_62_bool); // 0x5b2 Func
	var_100_bool = var_62_bool == 0; // 0x5b4 Not
	if(var_100_bool == 0) goto Label_1463; // 0x5b5 JumpB
	goto Label_1478; // 0x5b6 Jump
	
Label_1463:
	goto Label_1467; // 0x5b7 Jump
	
Label_1464:
	var_101_int = var_57_int; // 0x5b8 Push
	if(var_101_int == 0) goto Label_1467; // 0x5b9 JumpB
	goto Label_1478; // 0x5ba Jump
}


func_2431(var_88_string, var_89_int, var_90_int)
{
	var_91_bool = 0; var_92_bool = 0; // 0x97f PushV
	var_93_bool = 0; var_94_int = 0; var_95_int = 0; // 0x980 PushV
	var_94_int = var_89_int; // 0x981 Mov
	var_95_int = var_90_int; // 0x982 Mov
	func_2636(var_93_bool, var_94_int, var_95_int); // 0x983 NEW_2
	if(var_93_bool == 0) goto Label_2441; // 0x985 JumpB
	var_98_int = 0; // 0x986 PushI
	AddItem(var_92_bool, var_88_string, var_98_int); // 0x987 Func
	
Label_2441:
	return 2; // 0x989 Return
}


func_2946(var_19_bool, var_20_object, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_bool = 0; var_25_float = 0; // 0xb82 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0xb83 PushV
	var_27_object = var_21_object; // 0xb84 Mov
	func_2787(var_26_bool, var_27_object); // 0xb85 NEW_2
	if(var_26_bool == 0) goto Label_2977; // 0xb87 JumpB
	CanSee(var_24_bool, var_20_object); // 0xb88 Func
	var_44_float = 0; var_45_object = Obj(); // 0xb8a PushV
	var_45_object = var_20_object; // 0xb8b Mov
	func_2009(var_45_object); // 0xb8c NEW_2
	var_25_float = var_44_float; // 0xb8d Mov
	var_52_bool = 0; // 0xb8f PushV
	var_52_bool = 0; // 0xb90 MovB
	var_53_float = 1000000.0; // 0xb91 PushF
	var_54_bool = var_25_float <= var_53_float; // 0xb92 LE
	if(var_54_bool == 0) goto Label_2974; // 0xb93 JumpB
	var_55_bool = 0; // 0xb94 PushV
	var_55_bool = 1; // 0xb95 MovB
	var_56_bool = var_24_bool; // 0xb96 Push
	if(var_56_bool == 0) goto Label_2972; // 0xb97 JumpB
	var_57_float = 490000.0; // 0xb98 PushF
	var_58_bool = var_25_float <= var_57_float; // 0xb99 LE
	if(var_58_bool == 0) goto Label_2972; // 0xb9a JumpB
	var_55_bool = 0; // 0xb9b MovB
	
Label_2972:
	if(var_55_bool == 0) goto Label_2974; // 0xb9c JumpB
	var_52_bool = 1; // 0xb9d MovB
	
Label_2974:
	if(var_52_bool == 0) goto Label_2977; // 0xb9e JumpB
	var_19_bool = 1; // 0xb9f MovB
	return 4; // 0xba0 Return
	
Label_2977:
	var_19_bool = 0; // 0xba1 MovB
	return 4; // 0xba2 Return
}


func_2442(var_150_string)
{
	var_151_bool = 0; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_float = 0; var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_bool = 0; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); // 0x98a PushV
	IsExisting3DSound(var_159_bool, var_150_string); // 0x98b Func
	var_167_bool = var_159_bool == 0; // 0x98d Not
	if(var_167_bool == 0) goto Label_2467; // 0x98e JumpB
	var_160_int = 0; // 0x98f MovI
	
Label_2448:
	var_168_int = 1; // 0x990 PushI
	var_169_int = var_160_int + var_168_int; // 0x991 Add
	var_170_int = var_150_string + var_169_int; // 0x992 Add
	IsExisting3DSound(var_161_bool, var_170_int); // 0x993 Func
	var_171_bool = var_161_bool == 0; // 0x995 Not
	if(var_171_bool == 0) goto Label_2456; // 0x996 JumpB
	goto Label_2459; // 0x997 Jump
	
Label_2459:
	var_172_bool = var_160_int == 0; // 0x99b Not
	if(var_172_bool == 0) goto Label_2462; // 0x99c JumpB
	return 16; // 0x99d Return
	
Label_2462:
	irand(var_162_int, var_160_int); // 0x99e Func
	var_173_int = 1; // 0x9a0 PushI
	var_174_int = var_162_int + var_173_int; // 0x9a1 Add
	var_150_string = var_150_string + var_174_int; // 0x9a2 Add2
	
Label_2467:
	Is3DSoundLoaded(var_163_bool, var_150_string); // 0x9a3 Func
	var_175_bool = var_163_bool; // 0x9a5 Push
	if(var_175_bool == 0) goto Label_2482; // 0x9a6 JumpB
	GetEyesHeight(var_164_float); // 0x9a7 Func
	GetDirection(var_165_cvector); // 0x9a9 Func
	var_176_int = 50; // 0x9ab PushI
	var_166_cvector = var_165_cvector * var_176_int; // 0x9ac Mult2
	var_177_float = GetByIndex(var_166_cvector, 1); // 0x9ad PushE
	var_177_float = var_177_float + var_164_float; // 0x9ae Add2
	SetByIndex(var_166_cvector, 1) = var_177_float; // 0x9af PopE
	PlayGlobalSound(var_150_string, var_166_cvector); // 0x9b0 Func
	
Label_2482:
	return 16; // 0x9b2 Return
	
Label_2456:
	var_178_int = 1; // 0x998 PushI
	var_160_int = var_160_int + var_178_int; // 0x999 Add2
	goto Label_2448; // 0x99a Jump
}


func_2979(var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0xba4 PushV
	var_19_object = var_17_object; // 0xba5 Mov
	func_2017(var_18_bool, var_19_object); // 0xba6 NEW_2
	if(var_18_bool == 0) goto Label_2990; // 0xba8 JumpB
	var_22_bool = 0; var_23_object = Obj(); var_24_float = 0; // 0xba9 PushV
	var_23_object = var_17_object; // 0xbaa Mov
	var_24_float = 0.05; // 0xbab MovF
	func_2647(var_22_bool, var_23_object, var_24_float); // 0xbac NEW_2
	
Label_2990:
	var_60_object = Obj(); // 0xbae PushV
	var_60_object = var_17_object; // 0xbaf Mov
	TaskCall(8); // 0xbb0 TaskCall
	func_1824(var_60_object); // 0xbb1 NEW_2
	TaskReturn(); // 0xbb2 TaskReturn
	return 0; // 0xbb4 Return
}


func_1956(var_149_string)
{
	RemoveRTEnvelope(); // 0x7a5 Func
	SetDeathState(); // 0x7a7 Func
	Stop(); // 0x7a9 Func
	StopAsync(); // 0x7ab Func
	StopSecondaryAnimation(); // 0x7ad Func
	var_150_string = ""; // 0x7af PushV
	var_150_string = var_149_string; // 0x7b0 Mov
	func_2442(var_150_string); // 0x7b1 NEW_2
	var_179_string = "all"; // 0x7b3 PushS
	PlayAnimation(var_179_string, var_149_string); // 0x7b4 Func
	WaitForAnimEnd(); // 0x7b6 Func
	var_180_string = "all"; // 0x7b8 PushS
	LockAnimationEnd(var_180_string, var_149_string); // 0x7b9 Func
	RemoveEnvelope(); // 0x7bb Func
	return 0; // 0x7bd Return
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_242_bool = 0; var_243_bool = 0; var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; var_247_cvector = CVector(0,0,0); // 0x1b0 PushV
	var_1_object = 0; // 0x1b1 TMovI
	
Label_434:
	var_248_string = "all"; // 0x1b2 PushS
	var_249_string = "attack_begin"; // 0x1b3 PushS
	var_250_int = 1; // 0x1b4 PushI
	var_251_int = var_1_object + var_250_int; // 0x1b5 Add
	var_252_int = var_249_string + var_251_int; // 0x1b6 Add
	HasAnimation(var_245_bool, var_248_string, var_252_int); // 0x1b7 Func
	var_253_bool = var_245_bool == 0; // 0x1b9 Not
	if(var_253_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_447; // 0x1bb Jump
	
Label_447:
	var_2_int = 0; // 0x1bf TMovI
	
Label_448:
	var_254_string = "attack"; // 0x1c0 PushS
	var_255_int = 1; // 0x1c1 PushI
	var_256_int = var_2_int + var_255_int; // 0x1c2 Add
	var_257_int = var_254_string + var_256_int; // 0x1c3 Add
	IsExisting3DSound(var_246_bool, var_257_int); // 0x1c4 Func
	var_258_bool = var_246_bool == 0; // 0x1c6 Not
	if(var_258_bool == 0) goto Label_457; // 0x1c7 JumpB
	goto Label_460; // 0x1c8 Jump
	
Label_460:
	var_259_string = "all"; // 0x1cc PushS
	var_260_string = "bjump"; // 0x1cd PushS
	GetAnimationOffset(var_247_cvector, var_259_string, var_260_string); // 0x1ce Func
	var_261_float = GetByIndex(var_247_cvector, 2); // 0x1d0 PushE
	var_4_bool = -var_261_float; // 0x1d1 Neg2
	return 6; // 0x1d2 Return
	
Label_457:
	var_262_int = 1; // 0x1c9 PushI
	var_2_int = var_2_int + var_262_int; // 0x1ca Add2
	goto Label_448; // 0x1cb Jump
	
Label_444:
	var_263_int = 1; // 0x1bc PushI
	var_1_object = var_1_object + var_263_int; // 0x1bd Add2
	goto Label_434; // 0x1be Jump
}


func_2483(var_75_bool, var_76_string)
{
	var_75_bool = 1; // 0x9b4 MovB
	var_77_bool = 0; // 0x9b5 PushV
	var_77_bool = 1; // 0x9b6 MovB
	var_78_bool = 0; // 0x9b7 PushV
	var_78_bool = 1; // 0x9b8 MovB
	var_79_bool = 0; // 0x9b9 PushV
	var_79_bool = 1; // 0x9ba MovB
	var_80_bool = 0; // 0x9bb PushV
	var_80_bool = 1; // 0x9bc MovB
	var_81_bool = 0; // 0x9bd PushV
	var_81_bool = 1; // 0x9be MovB
	var_82_bool = 0; // 0x9bf PushV
	var_82_bool = 1; // 0x9c0 MovB
	var_83_bool = 0; // 0x9c1 PushV
	var_83_bool = 1; // 0x9c2 MovB
	var_84_bool = 0; // 0x9c3 PushV
	var_84_bool = 1; // 0x9c4 MovB
	var_85_bool = 0; // 0x9c5 PushV
	var_85_bool = 1; // 0x9c6 MovB
	var_86_bool = 0; // 0x9c7 PushV
	var_86_bool = 1; // 0x9c8 MovB
	var_87_bool = 0; // 0x9c9 PushV
	var_87_bool = 1; // 0x9ca MovB
	var_88_string = "woman"; // 0x9cb PushS
	var_89_bool = var_76_string == var_88_string; // 0x9cc Eq
	if(var_89_bool == 0) goto Label_2514; // 0x9cd JumpB
	var_90_string = "worker"; // 0x9ce PushS
	var_91_bool = var_76_string == var_90_string; // 0x9cf Eq
	if(var_91_bool == 0) goto Label_2514; // 0x9d0 JumpB
	var_87_bool = 0; // 0x9d1 MovB
	
Label_2514:
	if(var_87_bool == 0) goto Label_2519; // 0x9d2 JumpB
	var_92_string = "butcher"; // 0x9d3 PushS
	var_93_bool = var_76_string == var_92_string; // 0x9d4 Eq
	if(var_93_bool == 0) goto Label_2519; // 0x9d5 JumpB
	var_86_bool = 0; // 0x9d6 MovB
	
Label_2519:
	if(var_86_bool == 0) goto Label_2524; // 0x9d7 JumpB
	var_94_string = "wasted_girl"; // 0x9d8 PushS
	var_95_bool = var_76_string == var_94_string; // 0x9d9 Eq
	if(var_95_bool == 0) goto Label_2524; // 0x9da JumpB
	var_85_bool = 0; // 0x9db MovB
	
Label_2524:
	if(var_85_bool == 0) goto Label_2529; // 0x9dc JumpB
	var_96_string = "boy"; // 0x9dd PushS
	var_97_bool = var_76_string == var_96_string; // 0x9de Eq
	if(var_97_bool == 0) goto Label_2529; // 0x9df JumpB
	var_84_bool = 0; // 0x9e0 MovB
	
Label_2529:
	if(var_84_bool == 0) goto Label_2534; // 0x9e1 JumpB
	var_98_string = "vaxxabitka"; // 0x9e2 PushS
	var_99_bool = var_76_string == var_98_string; // 0x9e3 Eq
	if(var_99_bool == 0) goto Label_2534; // 0x9e4 JumpB
	var_83_bool = 0; // 0x9e5 MovB
	
Label_2534:
	if(var_83_bool == 0) goto Label_2539; // 0x9e6 JumpB
	var_100_string = "unosha"; // 0x9e7 PushS
	var_101_bool = var_76_string == var_100_string; // 0x9e8 Eq
	if(var_101_bool == 0) goto Label_2539; // 0x9e9 JumpB
	var_82_bool = 0; // 0x9ea MovB
	
Label_2539:
	if(var_82_bool == 0) goto Label_2544; // 0x9eb JumpB
	var_102_string = "wasted_male"; // 0x9ec PushS
	var_103_bool = var_76_string == var_102_string; // 0x9ed Eq
	if(var_103_bool == 0) goto Label_2544; // 0x9ee JumpB
	var_81_bool = 0; // 0x9ef MovB
	
Label_2544:
	if(var_81_bool == 0) goto Label_2549; // 0x9f0 JumpB
	var_104_string = "alkash"; // 0x9f1 PushS
	var_105_bool = var_76_string == var_104_string; // 0x9f2 Eq
	if(var_105_bool == 0) goto Label_2549; // 0x9f3 JumpB
	var_80_bool = 0; // 0x9f4 MovB
	
Label_2549:
	if(var_80_bool == 0) goto Label_2554; // 0x9f5 JumpB
	var_106_string = "dohodyaga"; // 0x9f6 PushS
	var_107_bool = var_76_string == var_106_string; // 0x9f7 Eq
	if(var_107_bool == 0) goto Label_2554; // 0x9f8 JumpB
	var_79_bool = 0; // 0x9f9 MovB
	
Label_2554:
	if(var_79_bool == 0) goto Label_2559; // 0x9fa JumpB
	var_108_string = "vaxxabit"; // 0x9fb PushS
	var_109_bool = var_76_string == var_108_string; // 0x9fc Eq
	if(var_109_bool == 0) goto Label_2559; // 0x9fd JumpB
	var_78_bool = 0; // 0x9fe MovB
	
Label_2559:
	if(var_78_bool == 0) goto Label_2564; // 0x9ff JumpB
	var_110_string = "nudegirl"; // 0xa00 PushS
	var_111_bool = var_76_string == var_110_string; // 0xa01 Eq
	if(var_111_bool == 0) goto Label_2564; // 0xa02 JumpB
	var_77_bool = 0; // 0xa03 MovB
	
Label_2564:
	if(var_77_bool == 0) goto Label_2569; // 0xa04 JumpB
	var_112_string = "morlok"; // 0xa05 PushS
	var_113_bool = var_76_string == var_112_string; // 0xa06 Eq
	if(var_113_bool == 0) goto Label_2569; // 0xa07 JumpB
	var_75_bool = 0; // 0xa08 MovB
	
Label_2569:
	return 0; // 0xa09 Return
}


func_950(var_2_int)
{
	var_17_int = 1; // 0x3b6 PushI
	KillTimer(var_17_int); // 0x3b7 Func
	var_18_int = var_2_int; // 0x3b9 PushT
	if(var_18_int == 0) goto Label_959; // 0x3ba JumpB
	var_2_int = 0; // 0x3bb TMovB
	var_19_string = "head"; // 0x3bc PushS
	UnlookAsync(var_19_string); // 0x3bd Func
	
Label_959:
	func_1116(var_16_bool); // 0x3c0 NEW_2
	return 0; // 0x3c2 Return
}


func_1988(var_573_string, var_574_int)
{
	var_575_int = 2; // 0x7c5 PushI
	var_576_bool = var_574_int == var_575_int; // 0x7c6 Eq
	if(var_576_bool == 0) goto Label_1995; // 0x7c7 JumpB
	var_573_string = "fire"; // 0x7c8 MovS
	return 0; // 0x7c9 Return
	
Label_1995:
	var_577_int = 1; // 0x7cb PushI
	var_578_bool = var_574_int == var_577_int; // 0x7cc Eq
	if(var_578_bool == 0) goto Label_2000; // 0x7cd JumpB
	var_573_string = "bullet"; // 0x7ce MovS
	return 0; // 0x7cf Return
	
Label_2000:
	var_573_string = "phys"; // 0x7d0 MovS
	return 0; // 0x7d1 Return
}


func_1481(var_92_bool)
{
	var_92_bool = 1; // 0x5c9 MovB
	return 0; // 0x5ca Return
}


func_1483()
{
	StopAnimation(); // 0x5cb Func
	StopGroup0(); // 0x5cd Func
	return 0; // 0x5cf Return
}


func_1488(var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0; // 0x5d0 PushV
	var_33_int = 5; // 0x5d1 PushI
	Sleep(var_33_int, var_32_bool); // 0x5d2 Func
	var_30_bool = !var_32_bool; // 0x5d4 Not2
	return 2; // 0x5d5 Return
}


func_2002(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x7d2 PushV
	GetPosition(var_54_cvector); // 0x7d3 Func
	GetPosition(var_55_cvector); // 0x7d5 ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x7d7 Sub2
	return 4; // 0x7d8 Return
}


func_467(var_0_bool, var_531_float, var_532_int)
{
	var_533_object = Obj(); var_534_float = 0; var_535_float = 0; var_536_object = Obj(); var_537_float = 0; var_538_float = 0; // 0x1d3 PushV
	var_539_float = 0.9; // 0x1d4 PushF
	var_540_float = var_531_float * var_539_float; // 0x1d5 Mult
	GetVictim(var_540_float, var_536_object); // 0x1d6 Func
	ReportAttack(var_0_bool); // 0x1d8 Func
	var_541_bool = var_536_object == var_0_bool; // 0x1da Eq
	if(var_541_bool == 0) goto Label_504; // 0x1db JumpB
	var_542_float = 0; var_543_object = Obj(); var_544_int = 0; // 0x1dc PushV
	var_543_object = var_536_object; // 0x1dd Mov
	var_544_int = var_532_int; // 0x1de Mov
	func_154(var_544_int); // 0x1df NEW_2
	var_537_float = var_542_float; // 0x1e0 Mov
	var_545_float = 0; var_546_object = Obj(); var_547_float = 0; var_548_int = 0; // 0x1e2 PushV
	var_546_object = var_536_object; // 0x1e3 Mov
	var_547_float = var_537_float; // 0x1e4 Mov
	var_549_int = 0; var_550_object = Obj(); var_551_int = 0; // 0x1e5 PushV
	var_550_object = var_536_object; // 0x1e6 Mov
	var_551_int = var_532_int; // 0x1e7 Mov
	func_157(var_551_int); // 0x1e8 NEW_2
	var_548_int = var_549_int; // 0x1e9 Mov
	func_2056(var_545_float, var_546_object, var_547_float, var_548_int); // 0x1eb NEW_2
	var_538_float = var_545_float; // 0x1ec Mov
	var_606_int = 0; // 0x1ee PushV
	func_160(var_606_int); // 0x1ef NEW_2
	ReportHit(var_0_bool, var_606_int, var_538_float, var_537_float); // 0x1f1 Func
	var_607_object = Obj(); var_608_float = 0; // 0x1f3 PushV
	var_607_object = var_536_object; // 0x1f4 Mov
	var_608_float = var_538_float; // 0x1f5 Mov
	func_162(var_607_object, var_608_float); // 0x1f6 NEW_2
	
Label_504:
	return 6; // 0x1f8 Return
}


func_1494()
{
	StopGroup0(); // 0x5d6 Func
	return 0; // 0x5d8 Return
}


func_2009(var_78_float)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x7d9 PushV
	GetPosition(var_83_cvector); // 0x7da Func
	GetPosition(var_84_cvector); // 0x7dc ObjFunc
	var_85_cvector = var_84_cvector - var_83_cvector; // 0x7de Sub2
	var_78_float = var_85_cvector | var_85_cvector; // 0x7df Or2
	return 6; // 0x7e0 Return
}


func_3034(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0xbda PushV
	var_109_string = "branch"; // 0xbdb PushS
	GetVariable(var_109_string, var_108_int); // 0xbdc Func
	var_106_int = var_108_int; // 0xbde Mov
	return 2; // 0xbdf Return
}


func_992(var_0_bool, var_1_object, var_309_bool, var_310_object, var_311_float, var_312_float, var_313_bool, var_314_bool)
{
	var_315_bool = 0; var_316_bool = 0; var_317_object = Obj(); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_object = Obj(); var_323_bool = 0; var_324_bool = 0; var_325_object = Obj(); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_float = 0; var_330_object = Obj(); // 0x3e0 PushV
	var_0_bool = 0; // 0x3e1 TMovB
	var_1_object = var_310_object; // 0x3e2 TMov
	var_324_bool = var_314_bool; // 0x3e3 Mov
	
Label_996:
	var_331_bool = 0; var_332_object = Obj(); // 0x3e4 PushV
	var_332_object = var_310_object; // 0x3e5 Mov
	func_1132(var_331_bool, var_332_object); // 0x3e6 NEW_2
	var_335_bool = var_331_bool == 0; // 0x3e8 Not
	if(var_335_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_309_bool = 0; // 0x3ea MovB
	return 16; // 0x3eb Return
	
Label_1004:
	GetPosition(var_326_cvector); // 0x3ec ObjFunc
	GetPosition(var_327_cvector); // 0x3ee Func
	var_328_cvector = var_326_cvector - var_327_cvector; // 0x3f0 Sub2
	var_329_float = var_328_cvector | var_328_cvector; // 0x3f1 Or2
	var_336_bool = 0; // 0x3f2 PushV
	var_336_bool = 0; // 0x3f3 MovB
	var_337_int = 0; // 0x3f4 PushI
	var_338_bool = var_312_float > var_337_int; // 0x3f5 GT
	if(var_338_bool == 0) goto Label_1019; // 0x3f6 JumpB
	var_339_float = var_312_float * var_312_float; // 0x3f7 Mult
	var_340_bool = var_329_float > var_339_float; // 0x3f8 GT
	if(var_340_bool == 0) goto Label_1019; // 0x3f9 JumpB
	var_336_bool = 1; // 0x3fa MovB
	
Label_1019:
	if(var_336_bool == 0) goto Label_1024; // 0x3fb JumpB
	Stop(); // 0x3fc Func
	var_309_bool = 0; // 0x3fe MovB
	return 16; // 0x3ff Return
	
Label_1024:
	var_341_float = var_311_float * var_311_float; // 0x400 Mult
	var_342_bool = var_329_float > var_341_float; // 0x401 GT
	if(var_342_bool == 0) goto Label_1086; // 0x402 JumpB
	GetPFPosition(var_326_cvector); // 0x403 ObjFunc
	FindPathTo(var_330_object, var_326_cvector); // 0x405 Func
	var_343_bool = var_330_object != 0; // 0x407 NullNeq
	if(var_343_bool == 0) goto Label_1035; // 0x408 JumpB
	var_325_object = var_330_object; // 0x409 Mov
	var_330_object = 0; // 0x40a SetNull
	
Label_1035:
	var_344_bool = var_325_object != 0; // 0x40b NullNeq
	if(var_344_bool == 0) goto Label_1068; // 0x40c JumpB
	var_345_bool = var_324_bool; // 0x40d Push
	if(var_345_bool == 0) goto Label_1045; // 0x40e JumpB
	var_324_bool = 0; // 0x40f MovB
	RotatePath(var_325_object, var_323_bool); // 0x410 Func
	var_346_bool = var_323_bool == 0; // 0x412 Not
	if(var_346_bool == 0) goto Label_1045; // 0x413 JumpB
	goto Label_1092; // 0x414 Jump
	
Label_1092:
	var_309_bool = !var_0_bool; // 0x444 Not2
	return 16; // 0x445 Return
	
Label_1045:
	var_347_int = 0; // 0x415 PushI
	var_348_float = 0.3; // 0x416 PushF
	SetTimer(var_347_int, var_348_float); // 0x417 Func
	var_349_string = ""; // 0x419 PushV
	func_1139(var_349_string); // 0x41a NEW_2
	var_350_string = ""; // 0x41c PushV
	func_1141(var_350_string); // 0x41d NEW_2
	FollowPath(var_325_object, var_313_bool, var_323_bool, var_349_string, var_350_string); // 0x41f Func
	var_351_bool = var_323_bool == 0; // 0x421 Not
	if(var_351_bool == 0) goto Label_1066; // 0x422 JumpB
	var_352_bool = var_0_bool; // 0x423 PushT
	if(var_352_bool == 0) goto Label_1064; // 0x424 JumpB
	var_325_object = 0; // 0x425 SetNull
	goto Label_1092; // 0x426 Jump
	
Label_1064:
	goto Label_1091; // 0x428 Jump
	
Label_1091:
	goto Label_996; // 0x443 Jump
	
Label_1066:
	var_325_object = 0; // 0x42a SetNull
	goto Label_1084; // 0x42b Jump
	
Label_1084:
	var_330_object = 0; // 0x43c SetNull
	goto Label_1090; // 0x43d Jump
	
Label_1090:
	var_325_object = 0; // 0x442 SetNull
	
Label_1068:
	var_353_int = 0; // 0x42c PushI
	KillTimer(var_353_int); // 0x42d Func
	var_354_float = 0.5; // 0x42f PushF
	Sleep(var_354_float, var_323_bool); // 0x430 Func
	var_355_bool = var_323_bool == 0; // 0x432 Not
	if(var_355_bool == 0) goto Label_1080; // 0x433 JumpB
	var_356_bool = var_0_bool; // 0x434 PushT
	if(var_356_bool == 0) goto Label_1080; // 0x435 JumpB
	var_325_object = 0; // 0x436 SetNull
	goto Label_1092; // 0x437 Jump
	
Label_1080:
	var_357_int = 0; // 0x438 PushI
	var_358_float = 0.3; // 0x439 PushF
	SetTimer(var_357_int, var_358_float); // 0x43a Func
	
Label_1086:
	var_359_int = 0; // 0x43e PushI
	KillTimer(var_359_int); // 0x43f Func
	goto Label_1092; // 0x441 Jump
}


func_2017(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x7e1 PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0x7e2 Func
	var_18_bool = var_21_bool; // 0x7e4 Mov
	return 2; // 0x7e5 Return
}


func_3040(var_20_object)
{
	var_21_int = 0; // 0xbe1 PushV
	func_3034(var_21_int); // 0xbe2 NEW_2
	var_25_int = 1; // 0xbe4 PushI
	var_26_bool = var_21_int == var_25_int; // 0xbe5 Eq
	if(var_26_bool == 0) goto Label_3050; // 0xbe6 JumpB
	WorkWithCorpse(var_20_object); // 0xbe7 Func
	goto Label_3052; // 0xbe9 Jump
	
Label_3052:
	return 0; // 0xbec Return
	
Label_3050:
	Barter(var_20_object); // 0xbea Func
}


func_2022(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0; // 0x7e6 PushV
	var_46_string = "HasProperty"; // 0x7e7 PushS
	var_47_int = 2; // 0x7e8 PushI
	var_48_bool = IsFuncExist(var_42_object, var_46_string, var_47_int); // 0x7e9 FuncExist
	var_49_bool = var_48_bool == 0; // 0x7ea Not
	if(var_49_bool == 0) goto Label_2030; // 0x7eb JumpB
	var_41_bool = 0; // 0x7ec MovB
	return 2; // 0x7ed Return
	
Label_2030:
	HasProperty(var_43_string, var_45_bool); // 0x7ee ObjFunc
	var_41_bool = var_45_bool; // 0x7f0 Mov
	return 2; // 0x7f1 Return
}


func_3053(var_69_int, var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0xbed PushV
	var_75_bool = var_69_int > var_70_int; // 0xbee GT
	if(var_75_bool == 0) goto Label_3060; // 0xbef JumpB
	var_76_string = "GenerateMoney: iMin > iMax"; // 0xbf0 PushS
	Trace(var_76_string); // 0xbf1 Func
	return 4; // 0xbf3 Return
	
Label_3060:
	var_73_int = 0; // 0xbf4 MovI
	var_77_bool = var_69_int != var_70_int; // 0xbf5 Neq
	if(var_77_bool == 0) goto Label_3067; // 0xbf6 JumpB
	var_78_int = var_70_int - var_69_int; // 0xbf7 Sub
	irand(var_73_int, var_78_int); // 0xbf8 Func
	goto Label_3071; // 0xbfa Jump
	
Label_3071:
	var_73_int = var_73_int + var_69_int; // 0xbff Add2
	var_79_int = 0; // 0xc00 PushI
	var_80_bool = var_73_int == var_79_int; // 0xc01 Eq
	if(var_80_bool == 0) goto Label_3076; // 0xc02 JumpB
	return 4; // 0xc03 Return
	
Label_3076:
	var_81_int = 0; var_82_string = ""; // 0xc04 PushV
	var_82_string = "Money"; // 0xc05 MovS
	func_3155(var_81_int, var_82_string); // 0xc06 NEW_2
	var_85_int = 0; // 0xc08 PushI
	AddItem(var_74_bool, var_81_int, var_85_int, var_73_int); // 0xc09 Func
	return 4; // 0xc0b Return
	
Label_3067:
	var_86_int = 0; // 0xbfb PushI
	var_87_bool = var_69_int == var_86_int; // 0xbfc Eq
	if(var_87_bool == 0) goto Label_3071; // 0xbfd JumpB
	return 4; // 0xbfe Return
}


func_2034(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x7f2 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x7f3 PushV
	var_42_object = var_34_object; // 0x7f4 Mov
	var_43_string = var_35_string; // 0x7f5 Mov
	func_2022(var_41_bool, var_42_object, var_43_string); // 0x7f6 NEW_2
	var_50_bool = var_41_bool == 0; // 0x7f8 Not
	if(var_50_bool == 0) goto Label_2044; // 0x7f9 JumpB
	var_33_bool = 0; // 0x7fa MovB
	return 2; // 0x7fb Return
	
Label_2044:
	GetProperty(var_35_string, var_40_float); // 0x7fc ObjFunc
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0x7fe PushV
	var_52_float = var_40_float + var_36_float; // 0x7ff Add2
	var_53_float = var_37_float; // 0x800 Mov
	var_54_float = var_38_float; // 0x801 Mov
	func_2617(var_51_float, var_52_float, var_53_float, var_54_float); // 0x802 NEW_2
	SetProperty(var_35_string, var_51_float); // 0x804 ObjFunc
	var_33_bool = 1; // 0x806 MovB
	return 2; // 0x807 Return
}


func_506(var_0_bool, var_498_bool, var_499_float)
{
	var_500_int = 0; var_501_bool = 0; var_502_int = 0; var_503_string = ""; var_504_int = 0; var_505_bool = 0; var_506_int = 0; var_507_string = ""; // 0x1fa PushV
	func_847(var_507_string); // 0x1fc NEW_2
	irand(var_504_int, var_507_string); // 0x1fe Func
	var_508_int = 1; // 0x200 PushI
	var_504_int = var_504_int + var_508_int; // 0x201 Add2
	Face(var_0_bool); // 0x202 Func
	var_509_bool = 1; // 0x204 PushB
	SetAttackState(var_509_bool); // 0x205 Func
	func_2711(); // 0x208 NEW_2
	var_510_string = "all"; // 0x20a PushS
	var_511_string = "attack_begin"; // 0x20b PushS
	var_512_int = var_511_string + var_504_int; // 0x20c Add
	PlayAnimation(var_510_string, var_512_int); // 0x20d Func
	WaitForAnimEnd(); // 0x20f Func
	func_815(var_506_int, var_507_string); // 0x212 NEW_2
	var_528_bool = 0; var_529_object = Obj(); // 0x214 PushV
	var_529_object = var_0_bool; // 0x215 MovT
	func_2201(var_528_bool, var_529_object); // 0x216 NEW_2
	var_530_bool = var_528_bool == 0; // 0x218 Not
	if(var_530_bool == 0) goto Label_542; // 0x219 JumpB
	StopAsync(); // 0x21a Func
	var_498_bool = 0; // 0x21c MovB
	return 8; // 0x21d Return
	
Label_542:
	var_531_float = 0; var_532_int = 0; // 0x21e PushV
	var_531_float = var_499_float; // 0x21f Mov
	var_532_int = var_504_int; // 0x220 Mov
	func_467(var_507_string, var_531_float, var_532_int); // 0x221 NEW_2
	var_630_string = "all"; // 0x223 PushS
	var_631_string = "attack_middle"; // 0x224 PushS
	var_632_int = var_631_string + var_504_int; // 0x225 Add
	HasAnimation(var_505_bool, var_630_string, var_632_int); // 0x226 Func
	var_633_bool = var_505_bool; // 0x228 Push
	if(var_633_bool == 0) goto Label_623; // 0x229 JumpB
	func_2711(); // 0x22b NEW_2
	var_634_string = "all"; // 0x22d PushS
	var_635_string = "attack_middle"; // 0x22e PushS
	var_636_int = var_635_string + var_504_int; // 0x22f Add
	PlayAnimation(var_634_string, var_636_int); // 0x230 Func
	WaitForAnimEnd(); // 0x232 Func
	func_847(var_507_string); // 0x235 NEW_2
	var_637_bool = 0; var_638_object = Obj(); // 0x237 PushV
	var_638_object = var_0_bool; // 0x238 MovT
	func_2201(var_637_bool, var_638_object); // 0x239 NEW_2
	var_639_bool = var_637_bool == 0; // 0x23b Not
	if(var_639_bool == 0) goto Label_577; // 0x23c JumpB
	StopAsync(); // 0x23d Func
	var_498_bool = 0; // 0x23f MovB
	return 8; // 0x240 Return
	
Label_577:
	var_640_float = 0; var_641_int = 0; // 0x241 PushV
	var_640_float = var_499_float; // 0x242 Mov
	var_641_int = var_504_int; // 0x243 Mov
	func_467(var_507_string, var_640_float, var_641_int); // 0x244 NEW_2
	var_506_int = 1; // 0x246 MovI
	
Label_583:
	var_642_string = "attack_middle"; // 0x247 PushS
	var_643_int = var_642_string + var_504_int; // 0x248 Add
	var_644_string = "_"; // 0x249 PushS
	var_645_int = var_643_int + var_644_string; // 0x24a Add
	var_507_string = var_645_int + var_506_int; // 0x24b Add2
	var_646_string = "all"; // 0x24c PushS
	HasAnimation(var_505_bool, var_646_string, var_507_string); // 0x24d Func
	var_647_bool = var_505_bool == 0; // 0x24f Not
	if(var_647_bool == 0) goto Label_594; // 0x250 JumpB
	goto Label_623; // 0x251 Jump
	
Label_623:
	var_648_bool = 0; // 0x26f PushB
	SetAttackState(var_648_bool); // 0x270 Func
	var_649_string = "all"; // 0x272 PushS
	var_650_string = "attack_end"; // 0x273 PushS
	var_651_int = var_650_string + var_504_int; // 0x274 Add
	PlayAnimation(var_649_string, var_651_int); // 0x275 Func
	var_652_bool = 0; // 0x277 PushV
	func_857(var_652_bool); // 0x278 NEW_2
	if(var_652_bool == 0) goto Label_641; // 0x27a JumpB
	var_653_bool = 0; var_654_float = 0; // 0x27b PushV
	var_654_float = 0.45; // 0x27c MovF
	func_645(var_653_bool, var_654_float); // 0x27d NEW_2
	StopAsync(); // 0x27f Func
	
Label_641:
	var_498_bool = 1; // 0x281 MovB
	return 8; // 0x282 Return
	
Label_594:
	func_2711(); // 0x253 NEW_2
	var_662_string = "all"; // 0x255 PushS
	PlayAnimation(var_662_string, var_507_string); // 0x256 Func
	WaitForAnimEnd(); // 0x258 Func
	func_847(var_507_string); // 0x25b NEW_2
	var_663_bool = 0; var_664_object = Obj(); // 0x25d PushV
	var_664_object = var_0_bool; // 0x25e MovT
	func_2201(var_663_bool, var_664_object); // 0x25f NEW_2
	var_665_bool = var_663_bool == 0; // 0x261 Not
	if(var_665_bool == 0) goto Label_615; // 0x262 JumpB
	StopAsync(); // 0x263 Func
	var_498_bool = 0; // 0x265 MovB
	return 8; // 0x266 Return
	
Label_615:
	var_666_float = 0; var_667_int = 0; // 0x267 PushV
	var_666_float = var_499_float; // 0x268 Mov
	var_667_int = var_504_int; // 0x269 Mov
	func_467(var_507_string, var_666_float, var_667_int); // 0x26a NEW_2
	var_668_int = 1; // 0x26c PushI
	var_506_int = var_506_int + var_668_int; // 0x26d Add2
	goto Label_583; // 0x26e Jump
}


