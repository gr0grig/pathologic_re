task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 1; // 0x9b PushI
	if(var_17_int == 0) goto Label_203; // 0x9c JumpB
	func_1942(); // 0x9e NEW_2
	var_19_int = 22774; // 0xa0 PushI
	var_20_bool = var_16_bool == var_19_int; // 0xa1 Eq
	if(var_20_bool == 0) goto Label_168; // 0xa2 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xa3 PushV
	var_21_object = var_1_object; // 0xa4 MovT
	var_22_object = var_0_object; // 0xa5 MovT
	func_2090(); // 0xa6 NEW_2
	
Label_168:
	var_29_int = 22660; // 0xa8 PushI
	var_30_bool = var_15_object == var_29_int; // 0xa9 Eq
	if(var_30_bool == 0) goto Label_191; // 0xaa JumpB
	var_31_string = ""; // 0xab PushV
	var_31_string = "Neutral"; // 0xac MovS
	func_132(var_16_bool, var_31_string); // 0xad NEW_2
	var_48_int = 521499; // 0xaf PushI
	SetMessage(var_48_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_49_int = 521607; // 0xb4 PushI
	var_50_int = -1; // 0xb5 PushI
	var_51_int = 22774; // 0xb6 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xb7 TObjFunc
	var_52_int = 521500; // 0xb9 PushI
	var_53_int = -1; // 0xba PushI
	var_54_int = 22661; // 0xbb PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_3_string = 1; // 0xbf TMovB
	var_55_bool = 0; // 0xc0 PushV
	func_2141(var_55_bool); // 0xc1 NEW_2
	if(var_55_bool == 0) goto Label_199; // 0xc3 JumpB
	lshStopAnimation(); // 0xc4 Func
	goto Label_201; // 0xc6 Jump
	
Label_201:
	return 0; // 0xc9 Return
	
Label_199:
	StopAnimation(); // 0xc7 Func
	
Label_203:
	return 0; // 0xcb Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_401(); // 0xce NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0xd0 PushV
	var_17_object = var_15_bool; // 0xd1 Mov
	TaskCall(0); // 0xd2 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xd3 NEW_2
	TaskReturn(); // 0xd4 TaskReturn
	return 0; // 0xd6 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0xd7 PushV
	IsPlayerActor(var_15_bool, var_17_bool); // 0xd8 Func
	var_18_bool = var_17_bool; // 0xda Push
	if(var_18_bool == 0) goto Label_225; // 0xdb JumpB
	var_19_bool = 0; var_20_string = ""; var_21_string = ""; // 0xdc PushV
	var_20_string = "quest_d1_01"; // 0xdd MovS
	var_21_string = "attack"; // 0xde MovS
	func_2034(var_19_bool, var_20_string, var_21_string); // 0xdf NEW_2
	
Label_225:
	return 2; // 0xe1 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_string = "attack"; // 0xe3 PushS
	var_17_bool = var_15_bool == var_16_string; // 0xe4 Eq
	if(var_17_bool == 0) goto Label_243; // 0xe5 JumpB
	func_401(); // 0xe7 NEW_2
	var_18_object = Obj(); // 0xe9 PushV
	var_19_object = Obj(); // 0xea PushV
	func_1511(var_19_object); // 0xeb NEW_2
	var_18_object = var_19_object; // 0xec Mov
	TaskCall(3); // 0xee TaskCall
	func_406(var_18_object); // 0xef NEW_2
	TaskReturn(); // 0xf0 TaskReturn
	goto Label_247; // 0xf2 Jump
	
Label_247:
	return 0; // 0xf7 Return
	
Label_243:
	var_521_string = ""; // 0xf3 PushV
	var_521_string = var_15_bool; // 0xf4 Mov
	func_289(var_521_string); // 0xf5 NEW_2
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	StopGroup0(); // 0x129 Func
	sync(); // 0x12b Func
	return 0; // 0x12d Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; // 0x12e PushV
	var_15_bool = 0; // 0x12f MovB
	var_16_object = var_0_object; // 0x130 PushT
	if(var_16_object == 0) goto Label_311; // 0x131 JumpB
	var_17_bool = 0; // 0x132 PushV
	func_318(var_17_bool); // 0x133 NEW_2
	if(var_17_bool == 0) goto Label_311; // 0x135 JumpB
	var_15_bool = 1; // 0x136 MovB
	
Label_311:
	if(var_15_bool == 0) goto Label_317; // 0x137 JumpB
	var_18_object = Obj(); // 0x138 PushV
	func_1990(var_18_object); // 0x139 NEW_2
	RemoveActor(var_18_object); // 0x13b Func
	
Label_317:
	return 0; // 0x13d Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_16_int = 1; // 0x470 PushI
	var_17_bool = var_15_int == var_16_int; // 0x471 Eq
	if(var_17_bool == 0) goto Label_1144; // 0x472 JumpB
	var_18_object = Obj(); // 0x473 PushV
	var_18_object = var_1_object; // 0x474 MovT
	func_2046(var_18_object); // 0x475 NEW_2
	goto Label_1148; // 0x477 Jump
	
Label_1148:
	return 0; // 0x47c Return
	
Label_1144:
	var_23_int = 0; // 0x478 PushV
	var_23_int = var_15_int; // 0x479 Mov
	func_1293(var_14_bool, var_15_int, var_23_int); // 0x47a NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x48b PushV
	var_16_bool = 0; // 0x48c MovB
	var_17_bool = var_1_object == var_15_object; // 0x48d Eq
	if(var_17_bool == 0) goto Label_1170; // 0x48e JumpB
	var_18_bool = var_2_object == 0; // 0x48f Not
	if(var_18_bool == 0) goto Label_1170; // 0x490 JumpB
	var_16_bool = 1; // 0x491 MovB
	
Label_1170:
	if(var_16_bool == 0) goto Label_1176; // 0x492 JumpB
	var_2_object = 1; // 0x493 TMovB
	var_19_object = Obj(); // 0x494 PushV
	var_19_object = var_15_object; // 0x495 Mov
	func_1931(var_19_object); // 0x496 NEW_2
	
Label_1176:
	return 0; // 0x498 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x49a PushV
	var_16_bool = 0; // 0x49b MovB
	var_17_bool = var_1_object == var_15_object; // 0x49c Eq
	if(var_17_bool == 0) goto Label_1185; // 0x49d JumpB
	var_18_object = var_2_object; // 0x49e PushT
	if(var_18_object == 0) goto Label_1185; // 0x49f JumpB
	var_16_bool = 1; // 0x4a0 MovB
	
Label_1185:
	if(var_16_bool == 0) goto Label_1190; // 0x4a1 JumpB
	var_2_object = 0; // 0x4a2 TMovB
	var_19_string = "head"; // 0x4a3 PushS
	UnlookAsync(var_19_string); // 0x4a4 Func
	
Label_1190:
	return 0; // 0x4a6 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object); // 0x520 Func
	return 0; // 0x522 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1149(var_15_object); // 0x52c NEW_2
	var_20_object = Obj(); // 0x52e PushV
	var_20_object = var_15_object; // 0x52f Mov
	func_2182(); // 0x530 NEW_2
	return 0; // 0x532 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x54d PushV
	IsOverrideActive(var_17_bool); // 0x54e Func
	var_18_bool = var_17_bool == 0; // 0x550 Not
	if(var_18_bool == 0) goto Label_1366; // 0x551 JumpB
	var_19_object = Obj(); // 0x552 PushV
	var_19_object = var_15_object; // 0x553 Mov
	func_2120(var_19_object); // 0x554 NEW_2
	
Label_1366:
	return 2; // 0x556 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x5cd Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x5cf Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0; // 0x5d1 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x868 PushV
	var_19_object = var_15_object; // 0x869 Mov
	var_20_int = var_16_int; // 0x86a Mov
	var_21_float = var_17_float; // 0x86b Mov
	func_1717(var_19_object, var_20_int, var_21_float); // 0x86c NEW_2
	return 0; // 0x86e Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x870 PushV
	var_21_object = var_15_object; // 0x871 Mov
	var_22_int = var_16_int; // 0x872 Mov
	var_23_float = var_17_float; // 0x873 Mov
	var_24_cvector = var_19_cvector; // 0x874 Mov
	var_25_cvector = var_20_cvector; // 0x875 Mov
	func_1785(var_23_float, var_24_cvector, var_25_cvector); // 0x876 NEW_2
	return 0; // 0x878 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x879 PushV
	var_19_string = "health"; // 0x87a PushS
	var_20_bool = var_16_string == var_19_string; // 0x87b Eq
	if(var_20_bool == 0) goto Label_2181; // 0x87c JumpB
	var_21_string = "health"; // 0x87d PushS
	GetProperty(var_21_string, var_18_float); // 0x87e Func
	var_22_int = 0; // 0x880 PushI
	var_23_bool = var_18_float <= var_22_int; // 0x881 LE
	if(var_23_bool == 0) goto Label_2181; // 0x882 JumpB
	SignalDeath(var_15_object); // 0x883 Func
	
Label_2181:
	return 2; // 0x885 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_object = Obj(); // 0x887 PushV
	var_16_object = var_15_object; // 0x888 Mov
	func_2143(var_16_object); // 0x889 NEW_2
	return 0; // 0x88b Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x88c PushV
	func_1990(var_15_object); // 0x88d NEW_2
	RemoveActor(var_15_object); // 0x88f Func
	Hold(); // 0x891 Func
	return 0; // 0x893 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_float = 0; var_16_float = 0; // 0xf8 PushV
	
Label_249:
	var_17_bool = 0; // 0xf9 PushV
	func_1810(var_17_bool); // 0xfa NEW_2
	var_20_bool = var_17_bool == 0; // 0xfc Not
	if(var_20_bool == 0) goto Label_257; // 0xfd JumpB
	Hold(); // 0xfe Func
	goto Label_249; // 0x100 Jump
	
Label_257:
	var_21_int = 3; // 0x101 PushI
	rand(var_16_float, var_21_int); // 0x102 Func
	var_22_int = 3; // 0x104 PushI
	var_23_int = var_16_float + var_22_int; // 0x105 Add
	Sleep(var_23_int); // 0x106 Func
	func_320(); // 0x109 NEW_2
	goto Label_249; // 0x10b Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 110.0; // 0x4 MovF
	func_1815(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_2135(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_2133(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_2137(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_2139(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_2097(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_136_bool = var_26_bool == 0; // 0x38 Not
	if(var_136_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_137_object = Obj(); // 0x3f PushV
	var_137_object = var_17_object; // 0x40 Mov
	func_1883(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2055()
{
	var_362_object = Obj(); var_363_object = Obj(); // 0x807 PushV
	GetScene(var_363_object); // 0x808 Func
	var_364_string = "battle"; // 0x80a PushS
	var_365_object = Obj(); // 0x80b PushV
	func_1990(var_365_object); // 0x80c NEW_2
	BroadcastMessage(var_364_string, var_365_object, var_363_object); // 0x80e Func
	return 2; // 0x810 Return
}


func_1034(var_2_object, var_5_bool)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0; // 0x40a PushV
	var_373_bool = var_2_object == 0; // 0x40b Not
	if(var_373_bool == 0) goto Label_1038; // 0x40c JumpB
	return 4; // 0x40d Return
	
Label_1038:
	var_374_bool = var_5_bool; // 0x40e PushT
	if(var_374_bool == 0) goto Label_1046; // 0x40f JumpB
	var_375_int = -1; // 0x410 PushI
	var_5_bool = var_5_bool + var_375_int; // 0x411 Add2
	var_376_int = 0; // 0x412 PushI
	var_377_bool = var_5_bool > var_376_int; // 0x413 GT
	if(var_377_bool == 0) goto Label_1046; // 0x414 JumpB
	return 4; // 0x415 Return
	
Label_1046:
	rand(var_371_float); // 0x416 Func
	var_378_float = 0; // 0x418 PushV
	func_1084(var_378_float); // 0x419 NEW_2
	var_379_bool = var_371_float < var_378_float; // 0x41b LT
	if(var_379_bool == 0) goto Label_1065; // 0x41c JumpB
	irand(var_372_int, var_371_float); // 0x41d Func
	var_380_int = 1; // 0x41f PushI
	var_372_int = var_372_int + var_380_int; // 0x420 Add2
	var_381_string = "attack"; // 0x421 PushS
	var_382_int = var_381_string + var_372_int; // 0x422 Add
	Speak(var_382_int); // 0x423 Func
	var_383_int = 0; // 0x425 PushV
	func_1082(var_383_int); // 0x426 NEW_2
	var_5_bool = var_383_int; // 0x427 TMov
	
Label_1065:
	return 4; // 0x429 Return
}


func_2066(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x812 PushV
	var_49_string = "idle"; // 0x813 MovS
	var_50_int = var_47_int; // 0x814 Push
	if(var_50_int == 0) goto Label_2071; // 0x815 JumpB
	var_49_string = var_49_string + var_47_int; // 0x816 Add2
	
Label_2071:
	var_46_string = var_49_string; // 0x817 Mov
	return 2; // 0x818 Return
}


func_2073(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x819 PushV
	var_43_int = 0; // 0x81a MovI
	
Label_2075:
	var_45_string = "all"; // 0x81b PushS
	var_46_string = ""; var_47_int = 0; // 0x81c PushV
	var_47_int = var_43_int; // 0x81d Mov
	func_2066(var_46_string, var_47_int); // 0x81e NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x820 Func
	var_51_bool = var_44_bool == 0; // 0x822 Not
	if(var_51_bool == 0) goto Label_2085; // 0x823 JumpB
	goto Label_2088; // 0x824 Jump
	
Label_2088:
	var_40_int = var_43_int; // 0x828 Mov
	return 4; // 0x829 Return
	
Label_2085:
	var_52_int = 1; // 0x825 PushI
	var_43_int = var_43_int + var_52_int; // 0x826 Add2
	goto Label_2075; // 0x827 Jump
}


func_1023(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0; // 0x3ff PushV
	var_255_string = "IsAttacking"; // 0x400 PushS
	var_256_int = 1; // 0x401 PushI
	var_257_bool = IsFuncExist(var_0_object, var_255_string, var_256_int); // 0x402 FuncExist
	if(var_257_bool == 0) goto Label_1032; // 0x403 JumpB
	IsAttacking(var_254_bool); // 0x404 TObjFunc
	var_252_bool = var_254_bool; // 0x406 Mov
	return 2; // 0x407 Return
	
Label_1032:
	var_252_bool = 0; // 0x408 MovB
	return 2; // 0x409 Return
}


func_2090()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x82b PushV
	var_24_string = "quest_d1_01"; // 0x82c MovS
	var_25_string = "attack"; // 0x82d MovS
	func_2034(var_23_bool, var_24_string, var_25_string); // 0x82e NEW_2
	return 0; // 0x830 Return
}


func_1066(var_0_object)
{
	var_125_object = Obj(); // 0x42a PushV
	var_125_object = var_0_object; // 0x42b MovT
	func_2046(var_125_object); // 0x42c NEW_2
	return 0; // 0x42e Return
}


func_1071(var_462_int)
{
	var_462_int = 0; // 0x42f MovI
	return 0; // 0x430 Return
}


func_2097(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x831 PushV
	var_81_string = "branch"; // 0x832 PushS
	GetVariable(var_81_string, var_80_int); // 0x833 Func
	var_82_int = 0; // 0x835 PushI
	var_83_bool = var_80_int == var_82_int; // 0x836 Eq
	if(var_83_bool == 0) goto Label_2107; // 0x837 JumpB
	var_78_int = 1; // 0x838 MovI
	return 2; // 0x839 Return
	
Label_2107:
	var_84_int = 1; // 0x83b PushI
	var_85_bool = var_80_int == var_84_int; // 0x83c Eq
	if(var_85_bool == 0) goto Label_2112; // 0x83d JumpB
	var_78_int = 2; // 0x83e MovI
	return 2; // 0x83f Return
	
Label_2112:
	var_78_int = 3; // 0x840 MovI
	return 2; // 0x841 Return
}


func_1073()
{
	var_258_string = ""; // 0x431 PushV
	var_258_string = "attack_stay"; // 0x432 MovS
	func_1949(var_258_string); // 0x433 NEW_2
	return 0; // 0x435 Return
}


func_1078()
{
	return 0; // 0x437 Return
}


func_1080(var_487_bool)
{
	var_487_bool = 1; // 0x438 MovB
	return 0; // 0x439 Return
}


func_1082(var_383_int)
{
	var_383_int = 1; // 0x43a MovI
	return 0; // 0x43b Return
}


func_1084(var_378_float)
{
	var_378_float = 0.5; // 0x43c MovF
	return 0; // 0x43d Return
}


func_1086(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x43e PushV
	var_145_object = Obj(); // 0x43f PushV
	var_145_object = var_133_object; // 0x440 Mov
	func_2046(var_145_object); // 0x441 NEW_2
	var_146_int = 1; // 0x443 PushI
	var_147_int = 5; // 0x444 PushI
	SetTimer(var_146_int, var_147_int); // 0x445 Func
	CanSee(var_143_bool, var_133_object); // 0x447 Func
	var_148_bool = var_143_bool; // 0x449 Push
	if(var_148_bool == 0) goto Label_1105; // 0x44a JumpB
	var_2_object = 1; // 0x44b TMovB
	var_149_object = Obj(); // 0x44c PushV
	var_149_object = var_133_object; // 0x44d Mov
	func_1931(var_149_object); // 0x44e NEW_2
	goto Label_1106; // 0x450 Jump
	
Label_1106:
	var_156_bool = 0; var_157_object = Obj(); // 0x452 PushV
	var_157_object = var_133_object; // 0x453 Mov
	func_1518(var_156_bool, var_157_object); // 0x454 NEW_2
	if(var_156_bool == 0) goto Label_1116; // 0x456 JumpB
	var_160_object = Obj(); // 0x457 PushV
	func_1990(var_160_object); // 0x458 NEW_2
	SendPlayerEnemy(var_133_object, var_160_object); // 0x45a Func
	
Label_1116:
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0; // 0x45c PushV
	var_162_object = var_133_object; // 0x45d Mov
	var_163_float = var_134_float; // 0x45e Mov
	var_164_float = var_135_float; // 0x45f Mov
	var_165_bool = var_136_bool; // 0x460 Mov
	var_166_bool = var_137_bool; // 0x461 Mov
	func_1191(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool); // 0x462 NEW_2
	var_144_bool = var_161_bool; // 0x463 Mov
	var_212_object = var_2_object; // 0x465 PushT
	if(var_212_object == 0) goto Label_1130; // 0x466 JumpB
	var_213_string = "head"; // 0x467 PushS
	UnlookAsync(var_213_string); // 0x468 Func
	
Label_1130:
	var_214_int = 1; // 0x46a PushI
	KillTimer(var_214_int); // 0x46b Func
	var_132_bool = var_144_bool; // 0x46d Mov
	return 4; // 0x46e Return
	
Label_1105:
	var_2_object = 0; // 0x451 TMovB
}


func_2114(var_20_int)
{
	var_21_int = 0; var_22_int = 0; // 0x842 PushV
	var_23_string = "branch"; // 0x843 PushS
	GetVariable(var_23_string, var_22_int); // 0x844 Func
	var_20_int = var_22_int; // 0x846 Mov
	return 2; // 0x847 Return
}


func_2120(var_19_object)
{
	var_20_int = 0; // 0x849 PushV
	func_2114(var_20_int); // 0x84a NEW_2
	var_24_int = 1; // 0x84c PushI
	var_25_bool = var_20_int == var_24_int; // 0x84d Eq
	if(var_25_bool == 0) goto Label_2130; // 0x84e JumpB
	WorkWithCorpse(var_19_object); // 0x84f Func
	goto Label_2132; // 0x851 Jump
	
Label_2132:
	return 0; // 0x854 Return
	
Label_2130:
	Barter(var_19_object); // 0x852 Func
}


func_1608(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x648 PushV
	IsDead(var_46_bool); // 0x649 ObjFunc
	var_43_bool = var_46_bool; // 0x64b Mov
	return 2; // 0x64c Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_102; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_132(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 521499; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_int = 521607; // 0x59 PushI
	var_113_int = -1; // 0x5a PushI
	var_114_int = 22774; // 0x5b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5c TObjFunc
	var_115_int = 521500; // 0x5e PushI
	var_116_int = -1; // 0x5f PushI
	var_117_int = 22661; // 0x60 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_118_bool = 0; // 0x66 PushV
	func_2141(var_118_bool); // 0x67 NEW_2
	if(var_118_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_119_string = var_3_string; // 0x6c PushT
	if(var_119_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_120_string = ""; // 0x6f PushV
	var_120_string = var_2_object; // 0x70 MovT
	func_1900(var_120_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_131_string = "all"; // 0x75 PushS
	var_132_string = "idle"; // 0x76 PushS
	PlayAnimation(var_131_string, var_132_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_133_string = var_3_string; // 0x7b PushT
	if(var_133_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_134_string = "all"; // 0x7e PushS
	var_135_string = "idle"; // 0x7f PushS
	PlayAnimation(var_134_string, var_135_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1613(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x64d PushV
	var_38_bool = var_33_object == 0; // 0x64e NullEq
	if(var_38_bool == 0) goto Label_1618; // 0x64f JumpB
	var_32_bool = 0; // 0x650 MovB
	return 4; // 0x651 Return
	
Label_1618:
	var_39_bool = 0; // 0x652 PushV
	var_39_bool = 0; // 0x653 MovB
	var_40_string = "IsDead"; // 0x654 PushS
	var_41_int = 1; // 0x655 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0x656 FuncExist
	if(var_42_bool == 0) goto Label_1630; // 0x657 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x658 PushV
	var_44_object = var_33_object; // 0x659 Mov
	func_1608(var_44_object); // 0x65a NEW_2
	if(var_43_bool == 0) goto Label_1630; // 0x65c JumpB
	var_39_bool = 1; // 0x65d MovB
	
Label_1630:
	if(var_39_bool == 0) goto Label_1633; // 0x65e JumpB
	var_32_bool = 0; // 0x65f MovB
	return 4; // 0x660 Return
	
Label_1633:
	GetScene(var_36_object); // 0x661 Func
	var_47_bool = var_36_object == 0; // 0x663 NullEq
	if(var_47_bool == 0) goto Label_1639; // 0x664 JumpB
	var_32_bool = 0; // 0x665 MovB
	return 4; // 0x666 Return
	
Label_1639:
	GetScene(var_37_object); // 0x667 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0x669 Neq
	if(var_48_bool == 0) goto Label_1645; // 0x66a JumpB
	var_32_bool = 0; // 0x66b MovB
	return 4; // 0x66c Return
	
Label_1645:
	var_32_bool = 1; // 0x66d MovB
	return 4; // 0x66e Return
}


func_2133(var_75_int)
{
	var_75_int = 521048; // 0x855 MovI
	return 0; // 0x856 Return
}


func_2135(var_74_int)
{
	var_74_int = 521047; // 0x857 MovI
	return 0; // 0x858 Return
}


func_2137(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png"; // 0x859 MovS
	return 0; // 0x85a Return
}


func_2139(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png"; // 0x85b MovS
	return 0; // 0x85c Return
}


func_2141(var_69_bool)
{
	var_69_bool = 0; // 0x85d MovB
	return 0; // 0x85e Return
}


func_2143(var_16_object)
{
	var_17_object = Obj(); // 0x860 PushV
	var_17_object = var_16_object; // 0x861 Mov
	TaskCall(5); // 0x862 TaskCall
	func_1342(var_17_object); // 0x863 NEW_2
	TaskReturn(); // 0x864 TaskReturn
	return 0; // 0x866 Return
}


func_1649(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x671 PushV
	var_32_bool = 0; var_33_object = Obj(); // 0x672 PushV
	var_33_object = var_29_object; // 0x673 Mov
	func_1613(var_32_bool, var_33_object); // 0x674 NEW_2
	var_49_bool = var_32_bool == 0; // 0x676 Not
	if(var_49_bool == 0) goto Label_1658; // 0x677 JumpB
	var_28_bool = 0; // 0x678 MovB
	return 2; // 0x679 Return
	
Label_1658:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x67a PushV
	var_51_object = var_29_object; // 0x67b Mov
	var_52_string = "noaccess"; // 0x67c MovS
	func_1523(var_50_bool, var_51_object, var_52_string); // 0x67d NEW_2
	var_59_bool = var_50_bool == 0; // 0x67f Not
	if(var_59_bool == 0) goto Label_1667; // 0x680 JumpB
	var_28_bool = 1; // 0x681 MovB
	return 2; // 0x682 Return
	
Label_1667:
	var_60_string = "noaccess"; // 0x683 PushS
	GetProperty(var_60_string, var_31_int); // 0x684 ObjFunc
	var_61_int = 0; // 0x686 PushI
	var_28_bool = var_31_int == var_61_int; // 0x687 Eq2
	return 2; // 0x688 Return
}


func_1149(var_2_object)
{
	var_16_int = 1; // 0x47d PushI
	KillTimer(var_16_int); // 0x47e Func
	var_17_object = var_2_object; // 0x480 PushT
	if(var_17_object == 0) goto Label_1158; // 0x481 JumpB
	var_2_object = 0; // 0x482 TMovB
	var_18_string = "head"; // 0x483 PushS
	UnlookAsync(var_18_string); // 0x484 Func
	
Label_1158:
	func_1315(var_15_object); // 0x487 NEW_2
	return 0; // 0x489 Return
}


func_132(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x85 PushV
	func_2141(var_95_bool); // 0x86 NEW_2
	var_96_bool = var_95_bool == 0; // 0x88 Not
	if(var_96_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_97_bool = var_94_string == var_2_object; // 0x8b Eq
	if(var_97_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_98_string = ""; var_99_bool = 0; // 0x8e PushV
	var_98_string = var_94_string; // 0x8f Mov
	var_100_string = ""; // 0x90 PushS
	var_101_bool = var_94_string == var_100_string; // 0x91 Eq
	if(var_101_bool == 0) goto Label_149; // 0x92 JumpB
	var_99_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1916(var_98_string, var_99_bool); // 0x96 NEW_2
	var_2_object = var_94_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_99_bool = 1; // 0x95 MovB
}


func_1673(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x689 PushV
	var_47_bool = var_32_object == 0; // 0x68a NullEq
	if(var_47_bool == 0) goto Label_1677; // 0x68b JumpB
	return 14; // 0x68c Return
	
Label_1677:
	IsDead(var_40_bool); // 0x68d Func
	var_48_bool = var_40_bool; // 0x68f Push
	if(var_48_bool == 0) goto Label_1682; // 0x690 JumpB
	return 14; // 0x691 Return
	
Label_1682:
	GetSecondaryAnimationType(var_41_int); // 0x692 Func
	var_49_int = 0; // 0x694 PushI
	var_50_bool = var_41_int < var_49_int; // 0x695 LT
	if(var_50_bool == 0) goto Label_1688; // 0x696 JumpB
	return 14; // 0x697 Return
	
Label_1688:
	GetPosition(var_42_cvector); // 0x698 ObjFunc
	GetPosition(var_43_cvector); // 0x69a Func
	GetDirection(var_44_cvector); // 0x69c Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x69e Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x69f PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x6a0 PushE
	var_53_float = var_51_float * var_52_float; // 0x6a1 Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x6a2 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x6a3 PushE
	var_56_float = var_54_float * var_55_float; // 0x6a4 Mult
	var_57_int = var_53_float + var_56_float; // 0x6a5 Add
	var_58_int = 0; // 0x6a6 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x6a7 GE
	if(var_59_bool == 0) goto Label_1707; // 0x6a8 JumpB
	var_46_string = "fhit"; // 0x6a9 MovS
	goto Label_1708; // 0x6aa Jump
	
Label_1708:
	var_60_string = "hit_react"; // 0x6ac PushS
	var_61_string = "1"; // 0x6ad PushS
	var_62_int = var_46_string + var_61_string; // 0x6ae Add
	var_63_string = "2"; // 0x6af PushS
	var_64_int = var_46_string + var_63_string; // 0x6b0 Add
	var_65_int = -10; // 0x6b1 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x6b2 Func
	return 14; // 0x6b4 Return
	
Label_1707:
	var_46_string = "bhit"; // 0x6ab MovS
}


func_653(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); // 0x28d PushV
	var_1_object = 0; // 0x28e TMovI
	
Label_655:
	var_60_string = "all"; // 0x28f PushS
	var_61_string = "attack_begin"; // 0x290 PushS
	var_62_int = 1; // 0x291 PushI
	var_63_int = var_1_object + var_62_int; // 0x292 Add
	var_64_int = var_61_string + var_63_int; // 0x293 Add
	HasAnimation(var_57_bool, var_60_string, var_64_int); // 0x294 Func
	var_65_bool = var_57_bool == 0; // 0x296 Not
	if(var_65_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_668; // 0x298 Jump
	
Label_668:
	var_2_object = 0; // 0x29c TMovI
	
Label_669:
	var_66_string = "attack"; // 0x29d PushS
	var_67_int = 1; // 0x29e PushI
	var_68_int = var_2_object + var_67_int; // 0x29f Add
	var_69_int = var_66_string + var_68_int; // 0x2a0 Add
	IsExisting3DSound(var_58_bool, var_69_int); // 0x2a1 Func
	var_70_bool = var_58_bool == 0; // 0x2a3 Not
	if(var_70_bool == 0) goto Label_678; // 0x2a4 JumpB
	goto Label_681; // 0x2a5 Jump
	
Label_681:
	var_71_string = "all"; // 0x2a9 PushS
	var_72_string = "bjump"; // 0x2aa PushS
	GetAnimationOffset(var_59_cvector, var_71_string, var_72_string); // 0x2ab Func
	var_73_float = GetByIndex(var_59_cvector, 2); // 0x2ad PushE
	var_4_bool = -var_73_float; // 0x2ae Neg2
	return 6; // 0x2af Return
	
Label_678:
	var_74_int = 1; // 0x2a6 PushI
	var_2_object = var_2_object + var_74_int; // 0x2a7 Add2
	goto Label_669; // 0x2a8 Jump
	
Label_665:
	var_75_int = 1; // 0x299 PushI
	var_1_object = var_1_object + var_75_int; // 0x29a Add2
	goto Label_655; // 0x29b Jump
}


func_1191(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); // 0x4a7 PushV
	var_0_object = 0; // 0x4a8 TMovB
	var_1_object = var_162_object; // 0x4a9 TMov
	var_176_bool = var_166_bool; // 0x4aa Mov
	
Label_1195:
	var_183_bool = 0; var_184_object = Obj(); // 0x4ab PushV
	var_184_object = var_162_object; // 0x4ac Mov
	func_1331(var_183_bool, var_184_object); // 0x4ad NEW_2
	var_187_bool = var_183_bool == 0; // 0x4af Not
	if(var_187_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_161_bool = 0; // 0x4b1 MovB
	return 16; // 0x4b2 Return
	
Label_1203:
	GetPosition(var_178_cvector); // 0x4b3 ObjFunc
	GetPosition(var_179_cvector); // 0x4b5 Func
	var_180_cvector = var_178_cvector - var_179_cvector; // 0x4b7 Sub2
	var_181_float = var_180_cvector | var_180_cvector; // 0x4b8 Or2
	var_188_bool = 0; // 0x4b9 PushV
	var_188_bool = 0; // 0x4ba MovB
	var_189_int = 0; // 0x4bb PushI
	var_190_bool = var_164_float > var_189_int; // 0x4bc GT
	if(var_190_bool == 0) goto Label_1218; // 0x4bd JumpB
	var_191_float = var_164_float * var_164_float; // 0x4be Mult
	var_192_bool = var_181_float > var_191_float; // 0x4bf GT
	if(var_192_bool == 0) goto Label_1218; // 0x4c0 JumpB
	var_188_bool = 1; // 0x4c1 MovB
	
Label_1218:
	if(var_188_bool == 0) goto Label_1223; // 0x4c2 JumpB
	Stop(); // 0x4c3 Func
	var_161_bool = 0; // 0x4c5 MovB
	return 16; // 0x4c6 Return
	
Label_1223:
	var_193_float = var_163_float * var_163_float; // 0x4c7 Mult
	var_194_bool = var_181_float > var_193_float; // 0x4c8 GT
	if(var_194_bool == 0) goto Label_1285; // 0x4c9 JumpB
	GetPFPosition(var_178_cvector); // 0x4ca ObjFunc
	FindPathTo(var_182_object, var_178_cvector); // 0x4cc Func
	var_195_bool = var_182_object != 0; // 0x4ce NullNeq
	if(var_195_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_177_object = var_182_object; // 0x4d0 Mov
	var_182_object = 0; // 0x4d1 SetNull
	
Label_1234:
	var_196_bool = var_177_object != 0; // 0x4d2 NullNeq
	if(var_196_bool == 0) goto Label_1267; // 0x4d3 JumpB
	var_197_bool = var_176_bool; // 0x4d4 Push
	if(var_197_bool == 0) goto Label_1244; // 0x4d5 JumpB
	var_176_bool = 0; // 0x4d6 MovB
	RotatePath(var_177_object, var_175_bool); // 0x4d7 Func
	var_198_bool = var_175_bool == 0; // 0x4d9 Not
	if(var_198_bool == 0) goto Label_1244; // 0x4da JumpB
	goto Label_1291; // 0x4db Jump
	
Label_1291:
	var_161_bool = !var_0_object; // 0x50b Not2
	return 16; // 0x50c Return
	
Label_1244:
	var_199_int = 0; // 0x4dc PushI
	var_200_float = 0.3; // 0x4dd PushF
	SetTimer(var_199_int, var_200_float); // 0x4de Func
	var_201_string = ""; // 0x4e0 PushV
	func_1338(var_201_string); // 0x4e1 NEW_2
	var_202_string = ""; // 0x4e3 PushV
	func_1340(var_202_string); // 0x4e4 NEW_2
	FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string); // 0x4e6 Func
	var_203_bool = var_175_bool == 0; // 0x4e8 Not
	if(var_203_bool == 0) goto Label_1265; // 0x4e9 JumpB
	var_204_object = var_0_object; // 0x4ea PushT
	if(var_204_object == 0) goto Label_1263; // 0x4eb JumpB
	var_177_object = 0; // 0x4ec SetNull
	goto Label_1291; // 0x4ed Jump
	
Label_1263:
	goto Label_1290; // 0x4ef Jump
	
Label_1290:
	goto Label_1195; // 0x50a Jump
	
Label_1265:
	var_177_object = 0; // 0x4f1 SetNull
	goto Label_1283; // 0x4f2 Jump
	
Label_1283:
	var_182_object = 0; // 0x503 SetNull
	goto Label_1289; // 0x504 Jump
	
Label_1289:
	var_177_object = 0; // 0x509 SetNull
	
Label_1267:
	var_205_int = 0; // 0x4f3 PushI
	KillTimer(var_205_int); // 0x4f4 Func
	var_206_float = 0.5; // 0x4f6 PushF
	Sleep(var_206_float, var_175_bool); // 0x4f7 Func
	var_207_bool = var_175_bool == 0; // 0x4f9 Not
	if(var_207_bool == 0) goto Label_1279; // 0x4fa JumpB
	var_208_object = var_0_object; // 0x4fb PushT
	if(var_208_object == 0) goto Label_1279; // 0x4fc JumpB
	var_177_object = 0; // 0x4fd SetNull
	goto Label_1291; // 0x4fe Jump
	
Label_1279:
	var_209_int = 0; // 0x4ff PushI
	var_210_float = 0.3; // 0x500 PushF
	SetTimer(var_209_int, var_210_float); // 0x501 Func
	
Label_1285:
	var_211_int = 0; // 0x505 PushI
	KillTimer(var_211_int); // 0x506 Func
	goto Label_1291; // 0x508 Jump
}


func_688(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0; // 0x2b0 PushV
	var_395_float = 0.9; // 0x2b1 PushF
	var_396_float = var_387_float * var_395_float; // 0x2b2 Mult
	GetVictim(var_396_float, var_392_object); // 0x2b3 Func
	ReportAttack(var_0_object); // 0x2b5 Func
	var_397_bool = var_392_object == var_0_object; // 0x2b7 Eq
	if(var_397_bool == 0) goto Label_725; // 0x2b8 JumpB
	var_398_float = 0; var_399_object = Obj(); var_400_int = 0; // 0x2b9 PushV
	var_399_object = var_392_object; // 0x2ba Mov
	var_400_int = var_388_int; // 0x2bb Mov
	func_418(var_400_int); // 0x2bc NEW_2
	var_393_float = var_398_float; // 0x2bd Mov
	var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0; // 0x2bf PushV
	var_402_object = var_392_object; // 0x2c0 Mov
	var_403_float = var_393_float; // 0x2c1 Mov
	var_405_int = 0; var_406_object = Obj(); var_407_int = 0; // 0x2c2 PushV
	var_406_object = var_392_object; // 0x2c3 Mov
	var_407_int = var_388_int; // 0x2c4 Mov
	func_421(var_407_int); // 0x2c5 NEW_2
	var_404_int = var_405_int; // 0x2c6 Mov
	func_1535(var_401_float, var_402_object, var_403_float, var_404_int); // 0x2c8 NEW_2
	var_394_float = var_401_float; // 0x2c9 Mov
	var_462_int = 0; // 0x2cb PushV
	func_1071(var_462_int); // 0x2cc NEW_2
	ReportHit(var_0_object, var_462_int, var_394_float, var_393_float); // 0x2ce Func
	var_463_object = Obj(); var_464_float = 0; // 0x2d0 PushV
	var_463_object = var_392_object; // 0x2d1 Mov
	var_464_float = var_394_float; // 0x2d2 Mov
	func_1078(); // 0x2d3 NEW_2
	
Label_725:
	return 6; // 0x2d5 Return
}


func_1717(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x6b5 PushV
	var_40_bool = 0; // 0x6b6 PushV
	var_40_bool = 0; // 0x6b7 MovB
	var_41_bool = 0; // 0x6b8 PushV
	var_41_bool = 0; // 0x6b9 MovB
	var_42_object = var_19_object; // 0x6ba Push
	if(var_42_object == 0) goto Label_1728; // 0x6bb JumpB
	var_43_int = 4; // 0x6bc PushI
	var_44_bool = var_20_int != var_43_int; // 0x6bd Neq
	if(var_44_bool == 0) goto Label_1728; // 0x6be JumpB
	var_41_bool = 1; // 0x6bf MovB
	
Label_1728:
	if(var_41_bool == 0) goto Label_1733; // 0x6c0 JumpB
	var_45_int = 5; // 0x6c1 PushI
	var_46_bool = var_20_int != var_45_int; // 0x6c2 Neq
	if(var_46_bool == 0) goto Label_1733; // 0x6c3 JumpB
	var_40_bool = 1; // 0x6c4 MovB
	
Label_1733:
	if(var_40_bool == 0) goto Label_1780; // 0x6c5 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x6c6 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x6c7 PushV
	var_50_object = var_19_object; // 0x6c8 Mov
	func_1504(var_50_object); // 0x6c9 NEW_2
	var_48_cvector = var_49_cvector; // 0x6ca Mov
	func_1996(var_47_cvector, var_48_cvector); // 0x6cc NEW_2
	var_31_cvector = var_47_cvector; // 0x6cd Mov
	CreateVectorVector(var_32_object); // 0x6cf Func
	var_33_int = 1; // 0x6d1 MovI
	
Label_1746:
	var_60_string = "hit"; // 0x6d2 PushS
	var_61_int = var_60_string + var_33_int; // 0x6d3 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x6d4 Func
	var_62_bool = var_34_bool == 0; // 0x6d6 Not
	if(var_62_bool == 0) goto Label_1753; // 0x6d7 JumpB
	goto Label_1762; // 0x6d8 Jump
	
Label_1762:
	size(var_37_int); // 0x6e2 ObjFunc
	var_63_int = var_37_int; // 0x6e4 Push
	if(var_63_int == 0) goto Label_1779; // 0x6e5 JumpB
	irand(var_38_int, var_37_int); // 0x6e6 Func
	get(var_39_cvector, var_38_int); // 0x6e8 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x6ea PushV
	var_64_object = var_19_object; // 0x6eb Mov
	var_65_int = var_20_int; // 0x6ec Mov
	var_66_float = var_21_float; // 0x6ed Mov
	var_67_cvector = var_39_cvector; // 0x6ee Mov
	var_68_cvector = -var_31_cvector; // 0x6ef Neg2
	func_1785(var_66_float, var_67_cvector, var_68_cvector); // 0x6f0 NEW_2
	return 18; // 0x6f2 Return
	
Label_1779:
	var_32_object = 0; // 0x6f3 SetNull
	
Label_1780:
	var_109_object = Obj(); // 0x6f4 PushV
	var_109_object = var_19_object; // 0x6f5 Mov
	func_1673(var_109_object); // 0x6f6 NEW_2
	return 18; // 0x6f8 Return
	
Label_1753:
	var_110_int = var_36_cvector | var_31_cvector; // 0x6d9 Or
	var_111_float = 0.70711; // 0x6da PushF
	var_112_bool = var_110_int >= var_111_float; // 0x6db GE
	if(var_112_bool == 0) goto Label_1759; // 0x6dc JumpB
	add(var_35_cvector); // 0x6dd ObjFunc
	
Label_1759:
	var_113_int = 1; // 0x6df PushI
	var_33_int = var_33_int + var_113_int; // 0x6e0 Add2
	goto Label_1746; // 0x6e1 Jump
}


func_727(var_0_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = ""; // 0x2d7 PushV
	func_1066(var_359_string); // 0x2d9 NEW_2
	irand(var_356_int, var_359_string); // 0x2db Func
	var_360_int = 1; // 0x2dd PushI
	var_356_int = var_356_int + var_360_int; // 0x2de Add2
	Face(var_0_object); // 0x2df Func
	var_361_bool = 1; // 0x2e1 PushB
	SetAttackState(var_361_bool); // 0x2e2 Func
	func_2055(); // 0x2e5 NEW_2
	var_366_string = "all"; // 0x2e7 PushS
	var_367_string = "attack_begin"; // 0x2e8 PushS
	var_368_int = var_367_string + var_356_int; // 0x2e9 Add
	PlayAnimation(var_366_string, var_368_int); // 0x2ea Func
	WaitForAnimEnd(); // 0x2ec Func
	func_1034(var_358_int, var_359_string); // 0x2ef NEW_2
	var_384_bool = 0; var_385_object = Obj(); // 0x2f1 PushV
	var_385_object = var_0_object; // 0x2f2 MovT
	func_1649(var_384_bool, var_385_object); // 0x2f3 NEW_2
	var_386_bool = var_384_bool == 0; // 0x2f5 Not
	if(var_386_bool == 0) goto Label_763; // 0x2f6 JumpB
	StopAsync(); // 0x2f7 Func
	var_350_bool = 0; // 0x2f9 MovB
	return 8; // 0x2fa Return
	
Label_763:
	var_387_float = 0; var_388_int = 0; // 0x2fb PushV
	var_387_float = var_351_float; // 0x2fc Mov
	var_388_int = var_356_int; // 0x2fd Mov
	func_688(var_359_string, var_387_float, var_388_int); // 0x2fe NEW_2
	var_465_string = "all"; // 0x300 PushS
	var_466_string = "attack_middle"; // 0x301 PushS
	var_467_int = var_466_string + var_356_int; // 0x302 Add
	HasAnimation(var_357_bool, var_465_string, var_467_int); // 0x303 Func
	var_468_bool = var_357_bool; // 0x305 Push
	if(var_468_bool == 0) goto Label_844; // 0x306 JumpB
	func_2055(); // 0x308 NEW_2
	var_469_string = "all"; // 0x30a PushS
	var_470_string = "attack_middle"; // 0x30b PushS
	var_471_int = var_470_string + var_356_int; // 0x30c Add
	PlayAnimation(var_469_string, var_471_int); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	func_1066(var_359_string); // 0x312 NEW_2
	var_472_bool = 0; var_473_object = Obj(); // 0x314 PushV
	var_473_object = var_0_object; // 0x315 MovT
	func_1649(var_472_bool, var_473_object); // 0x316 NEW_2
	var_474_bool = var_472_bool == 0; // 0x318 Not
	if(var_474_bool == 0) goto Label_798; // 0x319 JumpB
	StopAsync(); // 0x31a Func
	var_350_bool = 0; // 0x31c MovB
	return 8; // 0x31d Return
	
Label_798:
	var_475_float = 0; var_476_int = 0; // 0x31e PushV
	var_475_float = var_351_float; // 0x31f Mov
	var_476_int = var_356_int; // 0x320 Mov
	func_688(var_359_string, var_475_float, var_476_int); // 0x321 NEW_2
	var_358_int = 1; // 0x323 MovI
	
Label_804:
	var_477_string = "attack_middle"; // 0x324 PushS
	var_478_int = var_477_string + var_356_int; // 0x325 Add
	var_479_string = "_"; // 0x326 PushS
	var_480_int = var_478_int + var_479_string; // 0x327 Add
	var_359_string = var_480_int + var_358_int; // 0x328 Add2
	var_481_string = "all"; // 0x329 PushS
	HasAnimation(var_357_bool, var_481_string, var_359_string); // 0x32a Func
	var_482_bool = var_357_bool == 0; // 0x32c Not
	if(var_482_bool == 0) goto Label_815; // 0x32d JumpB
	goto Label_844; // 0x32e Jump
	
Label_844:
	var_483_bool = 0; // 0x34c PushB
	SetAttackState(var_483_bool); // 0x34d Func
	var_484_string = "all"; // 0x34f PushS
	var_485_string = "attack_end"; // 0x350 PushS
	var_486_int = var_485_string + var_356_int; // 0x351 Add
	PlayAnimation(var_484_string, var_486_int); // 0x352 Func
	var_487_bool = 0; // 0x354 PushV
	func_1080(var_487_bool); // 0x355 NEW_2
	if(var_487_bool == 0) goto Label_862; // 0x357 JumpB
	var_488_bool = 0; var_489_float = 0; // 0x358 PushV
	var_489_float = 0.75; // 0x359 MovF
	func_864(var_488_bool, var_489_float); // 0x35a NEW_2
	StopAsync(); // 0x35c Func
	
Label_862:
	var_350_bool = 1; // 0x35e MovB
	return 8; // 0x35f Return
	
Label_815:
	func_2055(); // 0x330 NEW_2
	var_497_string = "all"; // 0x332 PushS
	PlayAnimation(var_497_string, var_359_string); // 0x333 Func
	WaitForAnimEnd(); // 0x335 Func
	func_1066(var_359_string); // 0x338 NEW_2
	var_498_bool = 0; var_499_object = Obj(); // 0x33a PushV
	var_499_object = var_0_object; // 0x33b MovT
	func_1649(var_498_bool, var_499_object); // 0x33c NEW_2
	var_500_bool = var_498_bool == 0; // 0x33e Not
	if(var_500_bool == 0) goto Label_836; // 0x33f JumpB
	StopAsync(); // 0x340 Func
	var_350_bool = 0; // 0x342 MovB
	return 8; // 0x343 Return
	
Label_836:
	var_501_float = 0; var_502_int = 0; // 0x344 PushV
	var_501_float = var_351_float; // 0x345 Mov
	var_502_int = var_356_int; // 0x346 Mov
	func_688(var_359_string, var_501_float, var_502_int); // 0x347 NEW_2
	var_503_int = 1; // 0x349 PushI
	var_358_int = var_358_int + var_503_int; // 0x34a Add2
	goto Label_804; // 0x34b Jump
}


func_1785(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x6f9 PushV
	GetScene(var_28_object); // 0x6fa Func
	var_30_string = "scripted"; // 0x6fc PushS
	var_31_string = "blood_dir.xml"; // 0x6fd PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x6fe Func
	var_32_object = Obj(); // 0x700 PushV
	var_32_object = var_21_object; // 0x701 Mov
	func_1673(var_32_object); // 0x702 NEW_2
	return 4; // 0x704 Return
}


func_1799()
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); // 0x707 PushV
	GetPosition(var_239_cvector); // 0x708 ObjFunc
	GetPosition(var_240_cvector); // 0x70a Func
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x70c Sub2
	var_242_float = GetByIndex(var_241_cvector, 0); // 0x70d PushE
	var_243_float = GetByIndex(var_241_cvector, 2); // 0x70e PushE
	RotateAsync(var_242_float, var_243_float); // 0x70f Func
	return 6; // 0x711 Return
}


func_269(var_0_object)
{
	var_524_bool = 0; var_525_bool = 0; // 0x10d PushV
	var_0_object = 1; // 0x10e TMovB
	IsLoaded(var_525_bool); // 0x10f Func
	var_526_bool = 0; // 0x111 PushV
	var_526_bool = 0; // 0x112 MovB
	var_527_bool = var_525_bool == 0; // 0x113 Not
	if(var_527_bool == 0) goto Label_282; // 0x114 JumpB
	var_528_bool = 0; // 0x115 PushV
	func_318(var_528_bool); // 0x116 NEW_2
	if(var_528_bool == 0) goto Label_282; // 0x118 JumpB
	var_526_bool = 1; // 0x119 MovB
	
Label_282:
	if(var_526_bool == 0) goto Label_288; // 0x11a JumpB
	var_529_object = Obj(); // 0x11b PushV
	func_1990(var_529_object); // 0x11c NEW_2
	RemoveActor(var_529_object); // 0x11e Func
	
Label_288:
	return 2; // 0x120 Return
}


func_1293(var_0_object, var_1_object, var_23_int)
{
	var_24_int = 0; // 0x50e PushI
	var_25_bool = var_23_int != var_24_int; // 0x50f Neq
	if(var_25_bool == 0) goto Label_1298; // 0x510 JumpB
	return 0; // 0x511 Return
	
Label_1298:
	var_26_bool = 0; var_27_object = Obj(); // 0x512 PushV
	var_27_object = var_1_object; // 0x513 MovT
	func_1331(var_26_bool, var_27_object); // 0x514 NEW_2
	var_62_bool = var_26_bool == 0; // 0x516 Not
	if(var_62_bool == 0) goto Label_1305; // 0x517 JumpB
	var_0_object = 1; // 0x518 TMovB
	
Label_1305:
	var_63_int = 0; // 0x519 PushI
	KillTimer(var_63_int); // 0x51a Func
	Stop(); // 0x51c Func
	return 0; // 0x51e Return
}


func_1810(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x712 PushV
	IsLoaded(var_19_bool); // 0x713 Func
	var_17_bool = var_19_bool; // 0x715 Mov
	return 2; // 0x716 Return
}


func_1815(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x717 PushV
	GetPosition(var_40_cvector); // 0x718 ObjFunc
	GetEyesHeight(var_39_float); // 0x71a ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x71c PushE
	var_48_float = var_48_float + var_39_float; // 0x71d Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x71e PopE
	GetPosition(var_41_cvector); // 0x71f Func
	GetEyesHeight(var_39_float); // 0x721 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x723 PushE
	var_49_float = var_49_float + var_39_float; // 0x724 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x725 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x726 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x727 PushE
	var_50_float = 0; // 0x728 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x729 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x72a Or
	var_52_float = sqrt(var_51_int); // 0x72b Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x72c Div2
	var_43_cvector = -var_42_cvector; // 0x72d Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x72e Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x72f PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x730 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x731 Xor2
	func_1996(var_54_cvector, var_55_cvector); // 0x732 NEW_2
	var_62_int = 25; // 0x734 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x735 Mult
	var_64_int = var_53_float + var_63_float; // 0x736 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x737 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x738 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x739 Add2
	IsOverrideActive(var_46_bool); // 0x73a Func
	var_66_bool = var_46_bool; // 0x73c Push
	if(var_66_bool == 0) goto Label_1856; // 0x73d JumpB
	var_27_bool = 0; // 0x73e MovB
	return 18; // 0x73f Return
	
Label_1856:
	StopWorld(); // 0x740 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x742 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x744 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x745 PushE
	Rotate(var_67_float, var_68_float); // 0x746 Func
	var_69_bool = 0; // 0x748 PushV
	func_2141(var_69_bool); // 0x749 NEW_2
	if(var_69_bool == 0) goto Label_1869; // 0x74b JumpB
	goto Label_1877; // 0x74c Jump
	
Label_1877:
	CameraWaitForPlayFinish(); // 0x755 Func
	ResumeWorld(); // 0x757 Func
	var_27_bool = 1; // 0x759 MovB
	return 18; // 0x75a Return
	
Label_1869:
	var_70_string = "head"; // 0x74d PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x74e Func
	var_71_bool = var_47_bool; // 0x750 Push
	if(var_71_bool == 0) goto Label_1877; // 0x751 JumpB
	var_72_string = "head"; // 0x752 PushS
	LookAsyncCamera(var_72_string); // 0x753 Func
}


func_289(var_521_string)
{
	var_522_string = "cleanup"; // 0x122 PushS
	var_523_bool = var_521_string == var_522_string; // 0x123 Eq
	if(var_523_bool == 0) goto Label_296; // 0x124 JumpB
	func_269(var_521_string); // 0x126 NEW_2
	
Label_296:
	return 0; // 0x128 Return
}


func_1315(var_0_object)
{
	var_0_object = 1; // 0x523 TMovB
	var_19_int = 0; // 0x524 PushI
	KillTimer(var_19_int); // 0x525 Func
	Stop(); // 0x527 Func
	return 0; // 0x529 Return
}


func_1331(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x534 PushV
	var_29_object = var_27_object; // 0x535 Mov
	func_1649(var_28_bool, var_29_object); // 0x536 NEW_2
	var_26_bool = var_28_bool; // 0x537 Mov
	return 0; // 0x539 Return
}


func_1338(var_201_string)
{
	var_201_string = "walk"; // 0x53a MovS
	return 0; // 0x53b Return
}


func_1340(var_202_string)
{
	var_202_string = "run"; // 0x53c MovS
	return 0; // 0x53d Return
}


func_318(var_17_bool)
{
	var_17_bool = 1; // 0x13e MovB
	return 0; // 0x13f Return
}


func_1342(var_17_object)
{
	EventDisable(0); // 0x53f EventDisable
	var_18_object = Obj(); // 0x540 PushV
	var_18_object = var_17_object; // 0x541 Mov
	func_1367(var_18_object); // 0x542 NEW_2
	var_98_int = 50; // 0x544 PushI
	var_99_int = 40; // 0x545 PushI
	SetRTEnvelope(var_98_int, var_99_int); // 0x546 Func
	EventEnable(0); // 0x548 EventEnable
	
Label_1353:
	Hold(); // 0x549 Func
	goto Label_1353; // 0x54b Jump
}


func_320()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; // 0x140 PushV
	WaitForAnimEnd(); // 0x141 Func
	var_38_bool = 0; // 0x143 PushV
	func_1810(var_38_bool); // 0x144 NEW_2
	var_39_bool = var_38_bool == 0; // 0x146 Not
	if(var_39_bool == 0) goto Label_329; // 0x147 JumpB
	return 14; // 0x148 Return
	
Label_329:
	var_40_int = 0; // 0x149 PushV
	func_2073(var_40_int); // 0x14a NEW_2
	var_31_int = var_40_int; // 0x14b Mov
	var_32_int = 0; // 0x14d MovI
	
Label_334:
	var_53_bool = 0; // 0x14e PushV
	var_53_bool = 0; // 0x14f MovB
	var_54_int = 5; // 0x150 PushI
	var_55_bool = var_32_int < var_54_int; // 0x151 LT
	if(var_55_bool == 0) goto Label_344; // 0x152 JumpB
	var_56_bool = 0; // 0x153 PushV
	func_1810(var_56_bool); // 0x154 NEW_2
	if(var_56_bool == 0) goto Label_344; // 0x156 JumpB
	var_53_bool = 1; // 0x157 MovB
	
Label_344:
	if(var_53_bool == 0) goto Label_396; // 0x158 JumpB
	var_57_int = 3; // 0x159 PushI
	irand(var_33_int, var_57_int); // 0x15a Func
	var_58_int = 0; // 0x15c PushI
	var_59_bool = var_33_int == var_58_int; // 0x15d Eq
	if(var_59_bool == 0) goto Label_368; // 0x15e JumpB
	var_60_int = var_31_int; // 0x15f Push
	if(var_60_int == 0) goto Label_367; // 0x160 JumpB
	irand(var_34_int, var_31_int); // 0x161 Func
	var_61_string = "all"; // 0x163 PushS
	var_62_string = ""; var_63_int = 0; // 0x164 PushV
	var_63_int = var_34_int; // 0x165 Mov
	func_2066(var_62_string, var_63_int); // 0x166 NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x168 Func
	WaitForAnimEnd(var_35_bool); // 0x16a Func
	var_64_bool = var_35_bool == 0; // 0x16c Not
	if(var_64_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_396; // 0x16e Jump
	
Label_396:
	ResetAAS(); // 0x18c Func
	return 14; // 0x18e Return
	
Label_367:
	goto Label_385; // 0x16f Jump
	
Label_385:
	var_65_bool = 0; // 0x181 PushV
	func_399(var_65_bool); // 0x182 NEW_2
	var_66_bool = var_65_bool == 0; // 0x184 Not
	if(var_66_bool == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_391:
	ResetAAS(); // 0x187 Func
	var_67_int = 1; // 0x189 PushI
	var_32_int = var_32_int + var_67_int; // 0x18a Add2
	goto Label_334; // 0x18b Jump
	
Label_368:
	var_68_int = 1; // 0x170 PushI
	var_69_bool = var_33_int == var_68_int; // 0x171 Eq
	if(var_69_bool == 0) goto Label_382; // 0x172 JumpB
	var_70_int = 4; // 0x173 PushI
	rand(var_36_float, var_70_int); // 0x174 Func
	var_71_int = 1; // 0x176 PushI
	var_72_int = var_36_float + var_71_int; // 0x177 Add
	Sleep(var_72_int, var_37_bool); // 0x178 Func
	var_73_bool = var_37_bool == 0; // 0x17a Not
	if(var_73_bool == 0) goto Label_381; // 0x17b JumpB
	goto Label_396; // 0x17c Jump
	
Label_381:
	goto Label_385; // 0x17d Jump
	
Label_382:
	var_74_int = var_32_int; // 0x17e Push
	if(var_74_int == 0) goto Label_385; // 0x17f JumpB
	goto Label_396; // 0x180 Jump
}


func_1367(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x557 PushV
	var_39_bool = var_18_object == 0; // 0x558 NullEq
	if(var_39_bool == 0) goto Label_1375; // 0x559 JumpB
	var_40_string = ""; // 0x55a PushV
	var_40_string = "fdie"; // 0x55b MovS
	func_1458(var_40_string); // 0x55c NEW_2
	goto Label_1457; // 0x55e Jump
	
Label_1457:
	return 20; // 0x5b1 Return
	
Label_1375:
	GetPosition(var_29_cvector); // 0x55f ObjFunc
	GetPosition(var_30_cvector); // 0x561 Func
	GetDirection(var_31_cvector); // 0x563 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x565 Sub2
	var_72_float = GetByIndex(var_32_cvector, 0); // 0x566 PushE
	var_73_float = GetByIndex(var_31_cvector, 0); // 0x567 PushE
	var_74_float = var_72_float * var_73_float; // 0x568 Mult
	var_75_float = GetByIndex(var_32_cvector, 2); // 0x569 PushE
	var_76_float = GetByIndex(var_31_cvector, 2); // 0x56a PushE
	var_77_float = var_75_float * var_76_float; // 0x56b Mult
	var_78_int = var_74_float + var_77_float; // 0x56c Add
	var_79_int = 0; // 0x56d PushI
	var_80_bool = var_78_int >= var_79_int; // 0x56e GE
	if(var_80_bool == 0) goto Label_1394; // 0x56f JumpB
	var_33_string = "fdie"; // 0x570 MovS
	goto Label_1395; // 0x571 Jump
	
Label_1395:
	RemoveRTEnvelope(); // 0x573 Func
	SetDeathState(); // 0x575 Func
	Stop(); // 0x577 Func
	StopAsync(); // 0x579 Func
	var_34_object = var_18_object; // 0x57b Mov
	var_81_string = "GetScriptProperty"; // 0x57c PushS
	var_82_int = 2; // 0x57d PushI
	var_83_bool = IsFuncExist(var_18_object, var_81_string, var_82_int); // 0x57e FuncExist
	if(var_83_bool == 0) goto Label_1419; // 0x57f JumpB
	var_84_string = "Owner"; // 0x580 PushS
	HasScriptProperty(var_35_bool, var_84_string); // 0x581 ObjFunc
	var_85_bool = var_35_bool; // 0x583 Push
	if(var_85_bool == 0) goto Label_1419; // 0x584 JumpB
	var_86_string = "Owner"; // 0x585 PushS
	GetScriptProperty(var_34_object, var_86_string); // 0x586 ObjFunc
	var_87_bool = var_34_object == 0; // 0x588 NullEq
	if(var_87_bool == 0) goto Label_1419; // 0x589 JumpB
	var_34_object = var_18_object; // 0x58a Mov
	
Label_1419:
	var_88_string = "@GetEyesHeight"; // 0x58b PushS
	var_89_int = 1; // 0x58c PushI
	var_90_bool = IsFuncExist(var_34_object, var_88_string, var_89_int); // 0x58d FuncExist
	if(var_90_bool == 0) goto Label_1434; // 0x58e JumpB
	GetEyesHeight(var_37_float); // 0x58f ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x591 MovV
	var_91_float = GetByIndex(var_38_cvector, 1); // 0x592 PushE
	var_91_float = var_37_float; // 0x593 Mov
	SetByIndex(var_38_cvector, 1) = var_91_float; // 0x594 PopE
	var_92_string = "head"; // 0x595 PushS
	LookAsync(var_18_object, var_92_string, var_38_cvector); // 0x596 Func
	var_36_bool = 1; // 0x598 MovB
	goto Label_1435; // 0x599 Jump
	
Label_1435:
	var_93_string = ""; // 0x59b PushV
	var_93_string = var_33_string; // 0x59c Mov
	func_1949(var_93_string); // 0x59d NEW_2
	var_94_string = "all"; // 0x59f PushS
	PlayAnimation(var_94_string, var_33_string); // 0x5a0 Func
	WaitForAnimEnd(); // 0x5a2 Func
	var_95_bool = var_36_bool; // 0x5a4 Push
	if(var_95_bool == 0) goto Label_1451; // 0x5a5 JumpB
	StopAsync(); // 0x5a6 Func
	var_96_string = "head"; // 0x5a8 PushS
	UnlookAsync(var_96_string); // 0x5a9 Func
	
Label_1451:
	var_97_string = "all"; // 0x5ab PushS
	LockAnimationEnd(var_97_string, var_33_string); // 0x5ac Func
	RemoveEnvelope(); // 0x5ae Func
	var_34_object = 0; // 0x5b0 SetNull
	
Label_1434:
	var_36_bool = 0; // 0x59a MovB
	
Label_1394:
	var_33_string = "bdie"; // 0x572 MovS
}


func_1883()
{
	var_138_bool = 0; var_139_bool = 0; // 0x75b PushV
	CameraSwitchToNormal(); // 0x75c Func
	var_140_bool = 0; // 0x75e PushV
	func_2141(var_140_bool); // 0x75f NEW_2
	if(var_140_bool == 0) goto Label_1891; // 0x761 JumpB
	goto Label_1899; // 0x762 Jump
	
Label_1899:
	return 2; // 0x76b Return
	
Label_1891:
	var_141_string = "head"; // 0x763 PushS
	HasAnimationTrack(var_139_bool, var_141_string); // 0x764 Func
	var_142_bool = var_139_bool; // 0x766 Push
	if(var_142_bool == 0) goto Label_1899; // 0x767 JumpB
	var_143_string = "head"; // 0x768 PushS
	UnlookAsync(var_143_string); // 0x769 Func
}


func_864(var_488_bool, var_489_float)
{
	var_490_float = 0; var_491_bool = 0; var_492_float = 0; var_493_bool = 0; // 0x360 PushV
	rand(var_492_float); // 0x361 Func
	var_494_bool = var_492_float < var_489_float; // 0x363 LT
	if(var_494_bool == 0) goto Label_884; // 0x364 JumpB
	
Label_869:
	IsAnimationPlaying(var_493_bool); // 0x365 Func
	var_495_bool = var_493_bool == 0; // 0x367 Not
	if(var_495_bool == 0) goto Label_874; // 0x368 JumpB
	goto Label_883; // 0x369 Jump
	
Label_883:
	goto Label_889; // 0x373 Jump
	
Label_889:
	var_488_bool = 0; // 0x379 MovB
	return 4; // 0x37a Return
	
Label_874:
	var_496_bool = 0; // 0x36a PushV
	func_962(var_496_bool); // 0x36b NEW_2
	if(var_496_bool == 0) goto Label_880; // 0x36d JumpB
	var_488_bool = 1; // 0x36e MovB
	return 4; // 0x36f Return
	
Label_880:
	sync(); // 0x370 Func
	goto Label_869; // 0x372 Jump
	
Label_884:
	WaitForAnimEnd(); // 0x374 Func
	func_1066(var_493_bool); // 0x377 NEW_2
}


func_1900(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x76c PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x76d Func
	var_127_bool = var_124_bool; // 0x76f Push
	if(var_127_bool == 0) goto Label_1911; // 0x770 JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x771 Func
	var_128_bool = 0; // 0x773 PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x774 Func
	goto Label_1915; // 0x776 Jump
	
Label_1915:
	return 6; // 0x77b Return
	
Label_1911:
	var_129_string = "Can't find lsh animation : "; // 0x777 PushS
	var_130_int = var_129_string + var_120_string; // 0x778 Add
	Trace(var_130_int); // 0x779 Func
}


func_891(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; // 0x37b PushV
	
Label_892:
	IsAnimationPlaying(var_296_bool); // 0x37c Func
	var_301_bool = var_296_bool == 0; // 0x37e Not
	if(var_301_bool == 0) goto Label_897; // 0x37f JumpB
	goto Label_929; // 0x380 Jump
	
Label_929:
	func_1066(var_300_float); // 0x3a2 NEW_2
	var_289_bool = 0; // 0x3a4 MovB
	return 10; // 0x3a5 Return
	
Label_897:
	var_302_bool = 0; // 0x381 PushV
	func_962(var_302_bool); // 0x382 NEW_2
	if(var_302_bool == 0) goto Label_903; // 0x384 JumpB
	var_289_bool = 1; // 0x385 MovB
	return 10; // 0x386 Return
	
Label_903:
	var_345_bool = 0; var_346_object = Obj(); // 0x387 PushV
	var_346_object = var_0_object; // 0x388 MovT
	func_1649(var_345_bool, var_346_object); // 0x389 NEW_2
	var_347_bool = var_345_bool == 0; // 0x38b Not
	if(var_347_bool == 0) goto Label_911; // 0x38c JumpB
	var_289_bool = 0; // 0x38d MovB
	return 10; // 0x38e Return
	
Label_911:
	GetPFPosition(var_297_cvector); // 0x38f TObjFunc
	GetPFPosition(var_298_cvector); // 0x391 Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0x393 Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0x394 Or2
	var_348_float = var_290_float * var_290_float; // 0x395 Mult
	var_349_bool = var_300_float < var_348_float; // 0x396 LT
	if(var_349_bool == 0) goto Label_926; // 0x397 JumpB
	var_350_bool = 0; var_351_float = 0; // 0x398 PushV
	var_351_float = var_290_float; // 0x399 Mov
	func_727(var_300_float, var_350_bool, var_351_float); // 0x39a NEW_2
	var_289_bool = 1; // 0x39c MovB
	return 10; // 0x39d Return
	
Label_926:
	sync(); // 0x39e Func
	goto Label_892; // 0x3a0 Jump
}


func_1916(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x77c PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x77d Func
	var_108_bool = var_105_bool; // 0x77f Push
	if(var_108_bool == 0) goto Label_1926; // 0x780 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x781 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x783 Func
	goto Label_1930; // 0x785 Jump
	
Label_1930:
	return 6; // 0x78a Return
	
Label_1926:
	var_109_string = "Can't find lsh animation : "; // 0x786 PushS
	var_110_int = var_109_string + var_98_string; // 0x787 Add
	Trace(var_110_int); // 0x788 Func
}


func_1931(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); // 0x78b PushV
	GetEyesHeight(var_22_float); // 0x78c ObjFunc
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x78e MovV
	var_24_float = GetByIndex(var_23_cvector, 1); // 0x78f PushE
	var_24_float = var_22_float; // 0x790 Mov
	SetByIndex(var_23_cvector, 1) = var_24_float; // 0x791 PopE
	var_25_string = "head"; // 0x792 PushS
	LookAsync(var_19_object, var_25_string, var_23_cvector); // 0x793 Func
	return 4; // 0x795 Return
}


func_399(var_65_bool)
{
	var_65_bool = 1; // 0x18f MovB
	return 0; // 0x190 Return
}


func_401()
{
	StopAnimation(); // 0x191 Func
	StopGroup0(); // 0x193 Func
	return 0; // 0x195 Return
}


func_1942()
{
	var_18_bool = 0; // 0x796 PushV
	func_2141(var_18_bool); // 0x797 NEW_2
	if(var_18_bool == 0) goto Label_1948; // 0x799 JumpB
	lshStopSpeech(); // 0x79a Func
	
Label_1948:
	return 0; // 0x79c Return
}


func_406(var_18_object)
{
	
Label_407:
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; // 0x197 PushV
	var_29_object = var_18_object; // 0x198 Mov
	var_30_bool = 1; // 0x199 MovB
	var_31_float = 180.0; // 0x19a MovF
	func_424(var_25_int, var_26_bool, var_27_float, var_28_int, var_18_object, var_29_object, var_30_bool, var_31_float); // 0x19b NEW_2
	var_520_int = 1; // 0x19d PushI
	Sleep(var_520_int); // 0x19e Func
	goto Label_407; // 0x1a0 Jump
}


func_1949(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x79d PushV
	IsExisting3DSound(var_50_bool, var_41_string); // 0x79e Func
	var_58_bool = var_50_bool == 0; // 0x7a0 Not
	if(var_58_bool == 0) goto Label_1974; // 0x7a1 JumpB
	var_51_int = 0; // 0x7a2 MovI
	
Label_1955:
	var_59_int = 1; // 0x7a3 PushI
	var_60_int = var_51_int + var_59_int; // 0x7a4 Add
	var_61_int = var_41_string + var_60_int; // 0x7a5 Add
	IsExisting3DSound(var_52_bool, var_61_int); // 0x7a6 Func
	var_62_bool = var_52_bool == 0; // 0x7a8 Not
	if(var_62_bool == 0) goto Label_1963; // 0x7a9 JumpB
	goto Label_1966; // 0x7aa Jump
	
Label_1966:
	var_63_bool = var_51_int == 0; // 0x7ae Not
	if(var_63_bool == 0) goto Label_1969; // 0x7af JumpB
	return 16; // 0x7b0 Return
	
Label_1969:
	irand(var_53_int, var_51_int); // 0x7b1 Func
	var_64_int = 1; // 0x7b3 PushI
	var_65_int = var_53_int + var_64_int; // 0x7b4 Add
	var_41_string = var_41_string + var_65_int; // 0x7b5 Add2
	
Label_1974:
	Is3DSoundLoaded(var_54_bool, var_41_string); // 0x7b6 Func
	var_66_bool = var_54_bool; // 0x7b8 Push
	if(var_66_bool == 0) goto Label_1989; // 0x7b9 JumpB
	GetEyesHeight(var_55_float); // 0x7ba Func
	GetDirection(var_56_cvector); // 0x7bc Func
	var_67_int = 50; // 0x7be PushI
	var_57_cvector = var_56_cvector * var_67_int; // 0x7bf Mult2
	var_68_float = GetByIndex(var_57_cvector, 1); // 0x7c0 PushE
	var_68_float = var_68_float + var_55_float; // 0x7c1 Add2
	SetByIndex(var_57_cvector, 1) = var_68_float; // 0x7c2 PopE
	PlayGlobalSound(var_41_string, var_57_cvector); // 0x7c3 Func
	
Label_1989:
	return 16; // 0x7c5 Return
	
Label_1963:
	var_69_int = 1; // 0x7ab PushI
	var_51_int = var_51_int + var_69_int; // 0x7ac Add2
	goto Label_1955; // 0x7ad Jump
}


func_418(var_398_float)
{
	var_398_float = 0.1; // 0x1a3 MovF
	return 0; // 0x1a4 Return
}


func_421(var_405_int)
{
	var_405_int = 0; // 0x1a6 MovI
	return 0; // 0x1a7 Return
}


func_934(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; // 0x3a6 PushV
	var_315_bool = 0; var_316_object = Obj(); // 0x3a7 PushV
	var_316_object = var_0_object; // 0x3a8 MovT
	func_1649(var_315_bool, var_316_object); // 0x3a9 NEW_2
	var_317_bool = var_315_bool == 0; // 0x3ab Not
	if(var_317_bool == 0) goto Label_943; // 0x3ac JumpB
	var_304_bool = 0; // 0x3ad MovB
	return 10; // 0x3ae Return
	
Label_943:
	var_318_bool = 0; // 0x3af PushV
	func_1023(var_314_float, var_318_bool); // 0x3b0 NEW_2
	if(var_318_bool == 0) goto Label_960; // 0x3b2 JumpB
	GetPFPosition(var_310_cvector); // 0x3b3 TObjFunc
	GetPFPosition(var_311_cvector); // 0x3b5 Func
	var_312_cvector = var_310_cvector - var_311_cvector; // 0x3b7 Sub2
	var_313_float = var_312_cvector | var_312_cvector; // 0x3b8 Or2
	GetAttackDistance(var_314_float); // 0x3b9 TObjFunc
	var_319_int = 50; // 0x3bb PushI
	var_314_float = var_314_float + var_319_int; // 0x3bc Add2
	var_320_float = var_314_float * var_314_float; // 0x3bd Mult
	var_304_bool = var_313_float <= var_320_float; // 0x3be LE2
	return 10; // 0x3bf Return
	
Label_960:
	var_304_bool = 0; // 0x3c0 MovB
	return 10; // 0x3c1 Return
}


func_424(var_0_object, var_3_string, var_5_bool, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0; // 0x1a8 PushV
	func_653(var_51_cvector, var_52_bool, var_53_float); // 0x1aa NEW_2
	var_5_bool = 0; // 0x1ac TMovI
	var_76_string = "@GetAttackDistance"; // 0x1ad PushS
	var_77_int = 1; // 0x1ae PushI
	var_78_bool = IsFuncExist(var_29_object, var_76_string, var_77_int); // 0x1af FuncExist
	if(var_78_bool == 0) goto Label_438; // 0x1b0 JumpB
	GetAttackDistance(var_43_float); // 0x1b1 ObjFunc
	var_79_int = 50; // 0x1b3 PushI
	var_43_float = var_43_float + var_79_int; // 0x1b4 Add2
	goto Label_439; // 0x1b5 Jump
	
Label_439:
	var_80_int = 150; // 0x1b7 PushI
	var_81_bool = var_43_float >= var_80_int; // 0x1b8 GE
	if(var_81_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_43_float = 150; // 0x1ba MovI
	
Label_443:
	var_3_string = 0; // 0x1bb TMovB
	var_0_object = var_29_object; // 0x1bc TMov
	IsPlayerActor(var_0_object, var_46_bool); // 0x1bd Func
	var_82_bool = var_46_bool; // 0x1bf Push
	if(var_82_bool == 0) goto Label_457; // 0x1c0 JumpB
	var_83_string = "attack"; // 0x1c1 PushS
	PlayGlobalMusic(var_83_string); // 0x1c2 Func
	var_84_object = Obj(); // 0x1c4 PushV
	func_1990(var_84_object); // 0x1c5 NEW_2
	SendPlayerEnemy(var_29_object, var_84_object); // 0x1c7 Func
	
Label_457:
	var_87_bool = var_30_bool; // 0x1c9 Push
	if(var_87_bool == 0) goto Label_461; // 0x1ca JumpB
	var_47_bool = 0; // 0x1cb MovB
	goto Label_462; // 0x1cc Jump
	
Label_462:
	var_88_float = 400.0; // 0x1ce PushF
	var_48_float = var_88_float + var_43_float; // 0x1cf Add2
	
Label_464:
	var_89_bool = 0; // 0x1d0 PushV
	var_89_bool = 0; // 0x1d1 MovB
	var_90_bool = 0; var_91_object = Obj(); // 0x1d2 PushV
	var_91_object = var_0_object; // 0x1d3 MovT
	func_1649(var_90_bool, var_91_object); // 0x1d4 NEW_2
	if(var_90_bool == 0) goto Label_474; // 0x1d6 JumpB
	var_124_bool = var_3_string == 0; // 0x1d7 Not
	if(var_124_bool == 0) goto Label_474; // 0x1d8 JumpB
	var_89_bool = 1; // 0x1d9 MovB
	
Label_474:
	if(var_89_bool == 0) goto Label_636; // 0x1da JumpB
	func_1066(var_53_float); // 0x1dc NEW_2
	GetPFPosition(var_44_cvector); // 0x1de TObjFunc
	GetPFPosition(var_45_cvector); // 0x1e0 Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x1e2 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x1e3 Or2
	var_130_float = var_48_float * var_48_float; // 0x1e4 Mult
	var_131_bool = var_50_float >= var_130_float; // 0x1e5 GE
	if(var_131_bool == 0) goto Label_502; // 0x1e6 JumpB
	var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0; // 0x1e7 PushV
	var_133_object = var_0_object; // 0x1e8 MovT
	var_134_float = var_43_float; // 0x1e9 Mov
	var_135_float = 10000.0; // 0x1ea MovF
	var_136_bool = 1; // 0x1eb MovB
	var_137_bool = 0; // 0x1ec MovB
	TaskCall(4); // 0x1ed TaskCall
	func_1086(var_140_bool, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool); // 0x1ee NEW_2
	TaskReturn(); // 0x1ef TaskReturn
	var_215_bool = var_138_bool == 0; // 0x1f1 Not
	if(var_215_bool == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_636; // 0x1f3 Jump
	
Label_636:
	WaitForAnimEnd(); // 0x27c Func
	var_216_string = var_3_string; // 0x27e PushT
	if(var_216_string == 0) goto Label_641; // 0x27f JumpB
	return 22; // 0x280 Return
	
Label_641:
	var_217_string = "all"; // 0x281 PushS
	var_218_string = "attack_off"; // 0x282 PushS
	PlayAnimation(var_217_string, var_218_string); // 0x283 Func
	WaitForAnimEnd(); // 0x285 Func
	var_219_bool = var_46_bool; // 0x287 Push
	if(var_219_bool == 0) goto Label_652; // 0x288 JumpB
	var_220_float = 2.0; // 0x289 PushF
	Sleep(var_220_float); // 0x28a Func
	
Label_652:
	return 22; // 0x28c Return
	
Label_500:
	var_47_bool = 0; // 0x1f4 MovB
	goto Label_635; // 0x1f5 Jump
	
Label_635:
	goto Label_464; // 0x27b Jump
	
Label_502:
	var_221_float = var_31_float * var_31_float; // 0x1f6 Mult
	var_222_bool = var_50_float >= var_221_float; // 0x1f7 GE
	if(var_222_bool == 0) goto Label_627; // 0x1f8 JumpB
	GetPFPosition(var_51_cvector); // 0x1f9 TObjFunc
	CanReachByPF(var_52_bool, var_51_cvector); // 0x1fb Func
	var_223_bool = var_52_bool == 0; // 0x1fd Not
	if(var_223_bool == 0) goto Label_526; // 0x1fe JumpB
	var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0; // 0x1ff PushV
	var_225_object = var_0_object; // 0x200 MovT
	var_226_float = var_43_float; // 0x201 Mov
	var_227_float = 10000.0; // 0x202 MovF
	var_228_bool = 1; // 0x203 MovB
	var_229_bool = 0; // 0x204 MovB
	TaskCall(4); // 0x205 TaskCall
	func_1086(var_232_bool, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool); // 0x206 NEW_2
	TaskReturn(); // 0x207 TaskReturn
	var_233_bool = var_230_bool == 0; // 0x209 Not
	if(var_233_bool == 0) goto Label_524; // 0x20a JumpB
	goto Label_636; // 0x20b Jump
	
Label_524:
	var_47_bool = 0; // 0x20c MovB
	goto Label_464; // 0x20d Jump
	
Label_526:
	var_234_bool = var_47_bool == 0; // 0x20e Not
	if(var_234_bool == 0) goto Label_551; // 0x20f JumpB
	var_235_object = Obj(); // 0x210 PushV
	var_235_object = var_0_object; // 0x211 MovT
	func_1799(); // 0x212 NEW_2
	var_244_string = "all"; // 0x214 PushS
	var_245_string = "attack_on"; // 0x215 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x216 Func
	WaitForAnimEnd(); // 0x218 Func
	func_1066(var_53_float); // 0x21b NEW_2
	StopAsync(); // 0x21d Func
	var_47_bool = 1; // 0x21f MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x220 PushV
	var_247_object = var_0_object; // 0x221 MovT
	func_1649(var_246_bool, var_247_object); // 0x222 NEW_2
	var_248_bool = var_246_bool == 0; // 0x224 Not
	if(var_248_bool == 0) goto Label_551; // 0x225 JumpB
	goto Label_636; // 0x226 Jump
	
Label_551:
	rand(var_53_float); // 0x227 Func
	var_249_bool = 0; // 0x229 PushV
	var_249_bool = 1; // 0x22a MovB
	var_250_float = 0.25; // 0x22b PushF
	var_251_bool = var_53_float < var_250_float; // 0x22c LT
	if(var_251_bool == 0) goto Label_563; // 0x22d JumpB
	var_252_bool = 0; // 0x22e PushV
	func_1023(var_249_bool, var_252_bool); // 0x22f NEW_2
	if(var_252_bool == 0) goto Label_563; // 0x231 JumpB
	var_249_bool = 0; // 0x232 MovB
	
Label_563:
	if(var_249_bool == 0) goto Label_580; // 0x233 JumpB
	Face(var_0_object); // 0x234 Func
	func_1073(); // 0x237 NEW_2
	var_287_string = "all"; // 0x239 PushS
	var_288_string = "attack_stay"; // 0x23a PushS
	PlayAnimation(var_287_string, var_288_string); // 0x23b Func
	var_289_bool = 0; var_290_float = 0; // 0x23d PushV
	var_290_float = var_31_float; // 0x23e Mov
	func_891(var_53_float, var_289_bool, var_290_float); // 0x23f NEW_2
	StopAsync(); // 0x241 Func
	goto Label_626; // 0x243 Jump
	
Label_626:
	goto Label_635; // 0x272 Jump
	
Label_580:
	Face(var_0_object); // 0x244 Func
	var_504_string = "all"; // 0x246 PushS
	var_505_string = "fjump"; // 0x247 PushS
	PlayAnimation(var_504_string, var_505_string); // 0x248 Func
	WaitForAnimEnd(); // 0x24a Func
	func_1066(var_53_float); // 0x24d NEW_2
	var_506_cvector = CVector(0.0, 0.0, 0.0); // 0x24f PushVec
	SetSpeed(var_506_cvector); // 0x250 Func
	Stop(); // 0x252 Func
	StopAsync(); // 0x254 Func
	var_507_bool = 0; // 0x256 PushV
	func_1023(var_53_float, var_507_bool); // 0x257 NEW_2
	var_508_bool = var_507_bool == 0; // 0x259 Not
	if(var_508_bool == 0) goto Label_626; // 0x25a JumpB
	var_509_bool = 0; var_510_object = Obj(); // 0x25b PushV
	var_510_object = var_0_object; // 0x25c MovT
	func_1649(var_509_bool, var_510_object); // 0x25d NEW_2
	var_511_bool = var_509_bool == 0; // 0x25f Not
	if(var_511_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_636; // 0x261 Jump
	
Label_610:
	GetPFPosition(var_44_cvector); // 0x262 TObjFunc
	GetPFPosition(var_45_cvector); // 0x264 Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x266 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x267 Or2
	var_512_float = var_31_float * var_31_float; // 0x268 Mult
	var_513_bool = var_50_float < var_512_float; // 0x269 LT
	if(var_513_bool == 0) goto Label_626; // 0x26a JumpB
	var_514_bool = 0; var_515_float = 0; // 0x26b PushV
	var_515_float = var_31_float; // 0x26c Mov
	func_727(var_53_float, var_514_bool, var_515_float); // 0x26d NEW_2
	var_516_bool = var_514_bool == 0; // 0x26f Not
	if(var_516_bool == 0) goto Label_626; // 0x270 JumpB
	goto Label_636; // 0x271 Jump
	
Label_627:
	var_517_bool = 0; var_518_float = 0; // 0x273 PushV
	var_518_float = var_31_float; // 0x274 Mov
	func_727(var_53_float, var_517_bool, var_518_float); // 0x275 NEW_2
	var_519_bool = var_517_bool == 0; // 0x277 Not
	if(var_519_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_636; // 0x279 Jump
	
Label_634:
	var_47_bool = 1; // 0x27a MovB
	
Label_461:
	var_47_bool = 1; // 0x1cd MovB
	
Label_438:
	var_43_float = var_31_float; // 0x1b6 Mov
}


func_1458(var_40_string)
{
	RemoveRTEnvelope(); // 0x5b3 Func
	SetDeathState(); // 0x5b5 Func
	Stop(); // 0x5b7 Func
	StopAsync(); // 0x5b9 Func
	StopSecondaryAnimation(); // 0x5bb Func
	var_41_string = ""; // 0x5bd PushV
	var_41_string = var_40_string; // 0x5be Mov
	func_1949(var_41_string); // 0x5bf NEW_2
	var_70_string = "all"; // 0x5c1 PushS
	PlayAnimation(var_70_string, var_40_string); // 0x5c2 Func
	WaitForAnimEnd(); // 0x5c4 Func
	var_71_string = "all"; // 0x5c6 PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x5c7 Func
	RemoveEnvelope(); // 0x5c9 Func
	return 0; // 0x5cb Return
}


func_962(var_302_bool)
{
	var_303_bool = 0; // 0x3c2 PushV
	var_303_bool = 0; // 0x3c3 MovB
	var_304_bool = 0; // 0x3c4 PushV
	func_934(var_303_bool, var_304_bool); // 0x3c5 NEW_2
	if(var_304_bool == 0) goto Label_973; // 0x3c7 JumpB
	var_321_bool = 0; // 0x3c8 PushV
	func_978(var_302_bool, var_303_bool, var_321_bool); // 0x3c9 NEW_2
	if(var_321_bool == 0) goto Label_973; // 0x3cb JumpB
	var_303_bool = 1; // 0x3cc MovB
	
Label_973:
	if(var_303_bool == 0) goto Label_976; // 0x3cd JumpB
	var_302_bool = 1; // 0x3ce MovB
	return 0; // 0x3cf Return
	
Label_976:
	var_302_bool = 0; // 0x3d0 MovB
	return 0; // 0x3d1 Return
}


func_1990(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x7c6 PushV
	self(var_17_object); // 0x7c7 Func
	var_15_object = var_17_object; // 0x7c9 Mov
	return 2; // 0x7ca Return
}


func_1996(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x7cc PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x7cd Or
	var_56_float = sqrt(var_57_int); // 0x7ce Sqrt2
	var_58_float = 0.0; // 0x7cf PushF
	var_59_bool = var_56_float < var_58_float; // 0x7d0 LT
	if(var_59_bool == 0) goto Label_2004; // 0x7d1 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x7d2 MovV
	return 2; // 0x7d3 Return
	
Label_2004:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x7d4 Div2
	return 2; // 0x7d5 Return
}


func_978(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); // 0x3d2 PushV
	GetScene(var_327_object); // 0x3d3 Func
	var_328_bool = 0; // 0x3d5 MovB
	
Label_982:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj(); // 0x3d6 PushV
	var_333_object = var_0_object; // 0x3d7 MovT
	func_1504(var_333_object); // 0x3d8 NEW_2
	var_338_int = -var_332_cvector; // 0x3da Neg
	FindDirLength(var_329_float, var_338_int, var_329_float); // 0x3db Func
	var_339_bool = var_329_float < var_4_bool; // 0x3dd LT
	if(var_339_bool == 0) goto Label_992; // 0x3de JumpB
	goto Label_1020; // 0x3df Jump
	
Label_1020:
	var_321_bool = var_328_bool; // 0x3fc Mov
	return 10; // 0x3fd Return
	
Label_992:
	Face(var_0_object); // 0x3e0 Func
	var_340_string = "all"; // 0x3e2 PushS
	var_341_string = "bjump"; // 0x3e3 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x3e4 Func
	GetPFPosition(var_330_cvector); // 0x3e6 TObjFunc
	GetPFPosition(var_331_cvector); // 0x3e8 Func
	WaitForAnimEnd(); // 0x3ea Func
	func_1066(var_331_cvector); // 0x3ed NEW_2
	StopAsync(); // 0x3ef Func
	var_342_cvector = CVector(0.0, 0.0, 0.0); // 0x3f1 PushVec
	SetSpeed(var_342_cvector); // 0x3f2 Func
	var_328_bool = 1; // 0x3f4 MovB
	var_343_bool = 0; // 0x3f5 PushV
	func_934(var_331_cvector, var_343_bool); // 0x3f6 NEW_2
	var_344_bool = var_343_bool == 0; // 0x3f8 Not
	if(var_344_bool == 0) goto Label_1019; // 0x3f9 JumpB
	goto Label_1020; // 0x3fa Jump
	
Label_1019:
	goto Label_982; // 0x3fb Jump
}


func_1490(var_429_string, var_430_int)
{
	var_431_int = 2; // 0x5d3 PushI
	var_432_bool = var_430_int == var_431_int; // 0x5d4 Eq
	if(var_432_bool == 0) goto Label_1497; // 0x5d5 JumpB
	var_429_string = "fire"; // 0x5d6 MovS
	return 0; // 0x5d7 Return
	
Label_1497:
	var_433_int = 1; // 0x5d9 PushI
	var_434_bool = var_430_int == var_433_int; // 0x5da Eq
	if(var_434_bool == 0) goto Label_1502; // 0x5db JumpB
	var_429_string = "bullet"; // 0x5dc MovS
	return 0; // 0x5dd Return
	
Label_1502:
	var_429_string = "phys"; // 0x5de MovS
	return 0; // 0x5df Return
}


func_2006(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float; // 0x7d7 LT
	if(var_444_bool == 0) goto Label_2011; // 0x7d8 JumpB
	var_439_float = var_440_float; // 0x7d9 Mov
	goto Label_2012; // 0x7da Jump
	
Label_2012:
	return 0; // 0x7dc Return
	
Label_2011:
	var_439_float = var_441_float; // 0x7db Mov
}


func_2013(var_449_float, var_450_float, var_451_float, var_452_float)
{
	var_453_bool = var_450_float < var_451_float; // 0x7de LT
	if(var_453_bool == 0) goto Label_2018; // 0x7df JumpB
	var_449_float = var_451_float; // 0x7e0 Mov
	return 0; // 0x7e1 Return
	
Label_2018:
	var_454_bool = var_450_float > var_452_float; // 0x7e2 GT
	if(var_454_bool == 0) goto Label_2022; // 0x7e3 JumpB
	var_449_float = var_452_float; // 0x7e4 Mov
	return 0; // 0x7e5 Return
	
Label_2022:
	var_449_float = var_450_float; // 0x7e6 Mov
	return 0; // 0x7e7 Return
}


func_1504(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x5e0 PushV
	GetPosition(var_53_cvector); // 0x5e1 Func
	GetPosition(var_54_cvector); // 0x5e3 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x5e5 Sub2
	return 4; // 0x5e6 Return
}


func_1511(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x5e7 PushV
	var_22_string = "player"; // 0x5e8 PushS
	FindActor(var_21_object, var_22_string); // 0x5e9 Func
	var_19_object = var_21_object; // 0x5eb Mov
	return 2; // 0x5ec Return
}


func_2024(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj(); // 0x7e8 PushV
	CreateFloatVector(var_459_object); // 0x7e9 Func
	add(var_457_float); // 0x7eb ObjFunc
	var_460_int = 15; // 0x7ed PushI
	SendWorldWndMessage(var_460_int, var_459_object); // 0x7ee Func
	return 2; // 0x7f0 Return
}


func_1518(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_bool = 0; // 0x5ee PushV
	IsPlayerActor(var_157_object, var_159_bool); // 0x5ef Func
	var_156_bool = var_159_bool; // 0x5f1 Mov
	return 2; // 0x5f2 Return
}


func_2034(var_19_bool, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x7f2 PushV
	FindActor(var_23_object, var_20_string); // 0x7f3 Func
	var_24_bool = var_23_object == 0; // 0x7f5 NullEq
	if(var_24_bool == 0) goto Label_2041; // 0x7f6 JumpB
	var_19_bool = 0; // 0x7f7 MovB
	return 2; // 0x7f8 Return
	
Label_2041:
	Trigger(var_23_object, var_21_string); // 0x7f9 Func
	var_19_bool = 1; // 0x7fb MovB
	return 2; // 0x7fc Return
}


func_1523(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x5f3 PushV
	var_55_string = "HasProperty"; // 0x5f4 PushS
	var_56_int = 2; // 0x5f5 PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x5f6 FuncExist
	var_58_bool = var_57_bool == 0; // 0x5f7 Not
	if(var_58_bool == 0) goto Label_1531; // 0x5f8 JumpB
	var_50_bool = 0; // 0x5f9 MovB
	return 2; // 0x5fa Return
	
Label_1531:
	HasProperty(var_52_string, var_54_bool); // 0x5fb ObjFunc
	var_50_bool = var_54_bool; // 0x5fd Mov
	return 2; // 0x5fe Return
}


func_2046(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x7fe PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x7ff Func
	var_21_bool = var_20_bool; // 0x801 Push
	if(var_21_bool == 0) goto Label_2054; // 0x802 JumpB
	var_22_string = "attack"; // 0x803 PushS
	PlayGlobalMusic(var_22_string); // 0x804 Func
	
Label_2054:
	return 2; // 0x806 Return
}


func_1535(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; // 0x5ff PushV
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x600 PushV
	var_421_object = var_402_object; // 0x601 Mov
	var_422_string = "health"; // 0x602 MovS
	func_1523(var_420_bool, var_421_object, var_422_string); // 0x603 NEW_2
	var_423_bool = var_420_bool == 0; // 0x605 Not
	if(var_423_bool == 0) goto Label_1545; // 0x606 JumpB
	var_401_float = 0.0; // 0x607 MovF
	return 12; // 0x608 Return
	
Label_1545:
	var_424_bool = 0; var_425_object = Obj(); var_426_string = ""; // 0x609 PushV
	var_425_object = var_402_object; // 0x60a Mov
	var_426_string = "armor"; // 0x60b MovS
	func_1523(var_424_bool, var_425_object, var_426_string); // 0x60c NEW_2
	var_427_bool = var_424_bool == 0; // 0x60e Not
	if(var_427_bool == 0) goto Label_1554; // 0x60f JumpB
	var_414_int = 0; // 0x610 MovI
	goto Label_1557; // 0x611 Jump
	
Label_1557:
	var_428_string = "armor_"; // 0x615 PushS
	var_429_string = ""; var_430_int = 0; // 0x616 PushV
	var_430_int = var_404_int; // 0x617 Mov
	func_1490(var_429_string, var_430_int); // 0x618 NEW_2
	var_415_string = var_428_string + var_429_string; // 0x61a Add2
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0x61b PushV
	var_436_object = var_402_object; // 0x61c Mov
	var_437_string = var_415_string; // 0x61d Mov
	func_1523(var_435_bool, var_436_object, var_437_string); // 0x61e NEW_2
	var_438_bool = var_435_bool == 0; // 0x620 Not
	if(var_438_bool == 0) goto Label_1572; // 0x621 JumpB
	var_416_int = 0; // 0x622 MovI
	goto Label_1574; // 0x623 Jump
	
Label_1574:
	var_439_float = 0; var_440_float = 0; var_441_float = 0; // 0x626 PushV
	var_442_int = var_414_int + var_416_int; // 0x627 Add
	var_443_float = 100.0; // 0x628 PushF
	var_440_float = var_442_int / var_442_int; // 0x629 Div2
	var_441_float = 1; // 0x62a MovI
	func_2006(var_439_float, var_440_float, var_441_float); // 0x62b NEW_2
	var_417_float = var_439_float; // 0x62c Mov
	var_445_string = "health"; // 0x62e PushS
	GetProperty(var_445_string, var_418_float); // 0x62f ObjFunc
	var_446_int = 1; // 0x631 PushI
	var_447_int = var_446_int - var_417_float; // 0x632 Sub
	var_419_float = var_403_float * var_447_int; // 0x633 Mult2
	var_448_string = "health"; // 0x634 PushS
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0; // 0x635 PushV
	var_450_float = var_418_float - var_419_float; // 0x636 Sub2
	var_451_float = 0; // 0x637 MovI
	var_452_float = 1; // 0x638 MovI
	func_2013(var_449_float, var_450_float, var_451_float, var_452_float); // 0x639 NEW_2
	SetProperty(var_448_string, var_449_float); // 0x63b ObjFunc
	var_455_bool = 0; var_456_object = Obj(); // 0x63d PushV
	var_456_object = var_402_object; // 0x63e Mov
	func_1518(var_455_bool, var_456_object); // 0x63f NEW_2
	if(var_455_bool == 0) goto Label_1606; // 0x641 JumpB
	var_457_float = 0; // 0x642 PushV
	var_457_float = -var_419_float; // 0x643 Neg2
	func_2024(var_457_float); // 0x644 NEW_2
	
Label_1606:
	var_401_float = var_419_float; // 0x646 Mov
	return 12; // 0x647 Return
	
Label_1572:
	GetProperty(var_415_string, var_416_int); // 0x624 ObjFunc
	
Label_1554:
	var_461_string = "armor"; // 0x612 PushS
	GetProperty(var_461_string, var_414_int); // 0x613 ObjFunc
}


