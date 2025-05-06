task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0x9b PushI
	if(var_21_int == 0) goto Label_195; // 0x9c JumpB
	func_2008(); // 0x9e NEW_2
	var_23_int = 32266; // 0xa0 PushI
	var_24_bool = var_19_object == var_23_int; // 0xa1 Eq
	if(var_24_bool == 0) goto Label_183; // 0xa2 JumpB
	var_25_string = ""; // 0xa3 PushV
	var_25_string = "Neutral"; // 0xa4 MovS
	func_132(var_20_bool, var_25_string); // 0xa5 NEW_2
	var_42_int = 530939; // 0xa7 PushI
	SetMessage(var_42_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_43_int = 530940; // 0xac PushI
	var_44_int = -1; // 0xad PushI
	var_45_int = 32267; // 0xae PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xaf TObjFunc
	var_46_int = 530966; // 0xb1 PushI
	var_47_int = -1; // 0xb2 PushI
	var_48_int = 32287; // 0xb3 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_49_bool = 0; // 0xb8 PushV
	func_2248(var_49_bool); // 0xb9 NEW_2
	if(var_49_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_369(var_18_object, var_19_bool); // 0xcf NEW_2
	var_23_bool = 0; // 0xd1 PushV
	func_2250(var_23_bool); // 0xd2 NEW_2
	if(var_23_bool == 0) goto Label_219; // 0xd4 JumpB
	var_28_object = Obj(); // 0xd5 PushV
	var_28_object = var_19_bool; // 0xd6 Mov
	TaskCall(3); // 0xd7 TaskCall
	func_469(var_28_object); // 0xd8 NEW_2
	TaskReturn(); // 0xd9 TaskReturn
	
Label_219:
	var_531_int = 0; var_532_object = Obj(); // 0xdb PushV
	var_532_object = var_19_bool; // 0xdc Mov
	TaskCall(0); // 0xdd TaskCall
	func_0(var_533_object, var_531_int, var_532_object); // 0xde NEW_2
	TaskReturn(); // 0xdf TaskReturn
	var_661_bool = 0; var_662_string = ""; var_663_string = ""; // 0xe1 PushV
	var_662_string = "quest_b1_05"; // 0xe2 MovS
	var_663_string = "attack"; // 0xe3 MovS
	func_2107(var_661_bool, var_662_string, var_663_string); // 0xe4 NEW_2
	return 0; // 0xe6 Return
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0xe8 PushV
	var_20_bool = 0; // 0xe9 MovB
	var_21_bool = 0; // 0xea PushV
	func_2250(var_21_bool); // 0xeb NEW_2
	if(var_21_bool == 0) goto Label_244; // 0xed JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0xee PushV
	var_27_object = var_19_bool; // 0xef Mov
	func_1582(var_26_bool, var_27_object); // 0xf0 NEW_2
	if(var_26_bool == 0) goto Label_244; // 0xf2 JumpB
	var_20_bool = 1; // 0xf3 MovB
	
Label_244:
	if(var_20_bool == 0) goto Label_250; // 0xf4 JumpB
	var_30_bool = 0; var_31_string = ""; var_32_string = ""; // 0xf5 PushV
	var_31_string = "quest_b1_05"; // 0xf6 MovS
	var_32_string = "attack"; // 0xf7 MovS
	func_2107(var_30_bool, var_31_string, var_32_string); // 0xf8 NEW_2
	
Label_250:
	return 0; // 0xfa Return
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0xfc PushV
	var_20_bool = 0; // 0xfd MovB
	var_21_bool = 0; // 0xfe PushV
	func_2250(var_21_bool); // 0xff NEW_2
	if(var_21_bool == 0) goto Label_264; // 0x101 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x102 PushV
	var_27_object = var_19_bool; // 0x103 Mov
	func_1582(var_26_bool, var_27_object); // 0x104 NEW_2
	if(var_26_bool == 0) goto Label_264; // 0x106 JumpB
	var_20_bool = 1; // 0x107 MovB
	
Label_264:
	if(var_20_bool == 0) goto Label_270; // 0x108 JumpB
	var_30_bool = 0; var_31_string = ""; var_32_string = ""; // 0x109 PushV
	var_31_string = "quest_b1_05"; // 0x10a MovS
	var_32_string = "attack"; // 0x10b MovS
	func_2107(var_30_bool, var_31_string, var_32_string); // 0x10c NEW_2
	
Label_270:
	return 0; // 0x10e Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x110 PushV
	var_21_string = "quest_b1_05"; // 0x111 MovS
	var_22_string = "attack"; // 0x112 MovS
	func_2107(var_20_bool, var_21_string, var_22_string); // 0x113 NEW_2
	return 0; // 0x115 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x116 PushV
	var_22_string = "attack"; // 0x117 PushS
	var_23_bool = var_19_bool == var_22_string; // 0x118 Eq
	if(var_23_bool == 0) goto Label_303; // 0x119 JumpB
	func_369(var_20_object, var_21_object); // 0x11b NEW_2
	func_2257(); // 0x11e NEW_2
	var_29_string = "player"; // 0x120 PushS
	FindActor(var_21_object, var_29_string); // 0x121 Func
	var_30_bool = 0; var_31_object = Obj(); // 0x123 PushV
	var_31_object = var_21_object; // 0x124 Mov
	func_1713(var_30_bool, var_31_object); // 0x125 NEW_2
	if(var_30_bool == 0) goto Label_302; // 0x127 JumpB
	var_64_object = Obj(); // 0x128 PushV
	var_64_object = var_21_object; // 0x129 Mov
	TaskCall(3); // 0x12a TaskCall
	func_469(var_64_object); // 0x12b NEW_2
	TaskReturn(); // 0x12c TaskReturn
	
Label_302:
	var_21_object = 0; // 0x12e SetNull
	
Label_303:
	return 2; // 0x12f Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 10; // 0x15b PushI
	var_21_bool = var_19_bool == var_20_int; // 0x15c Eq
	if(var_21_bool == 0) goto Label_368; // 0x15d JumpB
	var_22_bool = 0; // 0x15e PushV
	func_331(var_17_bool, var_18_object, var_19_bool, var_22_bool); // 0x15f NEW_2
	if(var_22_bool == 0) goto Label_362; // 0x161 JumpB
	var_35_bool = var_2_object == 0; // 0x162 Not
	if(var_35_bool == 0) goto Label_361; // 0x163 JumpB
	var_36_object = Obj(); // 0x164 PushV
	var_36_object = var_4_bool; // 0x165 MovT
	func_1997(var_36_object); // 0x166 NEW_2
	var_2_object = 1; // 0x168 TMovB
	
Label_361:
	goto Label_368; // 0x169 Jump
	
Label_368:
	return 0; // 0x170 Return
	
Label_362:
	var_43_object = var_2_object; // 0x16a PushT
	if(var_43_object == 0) goto Label_368; // 0x16b JumpB
	var_44_string = "head"; // 0x16c PushS
	UnlookAsync(var_44_string); // 0x16d Func
	var_2_object = 0; // 0x16f TMovB
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0x4af PushI
	var_21_bool = var_19_int == var_20_int; // 0x4b0 Eq
	if(var_21_bool == 0) goto Label_1207; // 0x4b1 JumpB
	var_22_object = Obj(); // 0x4b2 PushV
	var_22_object = var_1_object; // 0x4b3 MovT
	func_2119(var_22_object); // 0x4b4 NEW_2
	goto Label_1211; // 0x4b6 Jump
	
Label_1211:
	return 0; // 0x4bb Return
	
Label_1207:
	var_27_int = 0; // 0x4b7 PushV
	var_27_int = var_19_int; // 0x4b8 Mov
	func_1356(var_18_bool, var_19_int, var_27_int); // 0x4b9 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x4ca PushV
	var_20_bool = 0; // 0x4cb MovB
	var_21_bool = var_1_object == var_19_object; // 0x4cc Eq
	if(var_21_bool == 0) goto Label_1233; // 0x4cd JumpB
	var_22_bool = var_2_object == 0; // 0x4ce Not
	if(var_22_bool == 0) goto Label_1233; // 0x4cf JumpB
	var_20_bool = 1; // 0x4d0 MovB
	
Label_1233:
	if(var_20_bool == 0) goto Label_1239; // 0x4d1 JumpB
	var_2_object = 1; // 0x4d2 TMovB
	var_23_object = Obj(); // 0x4d3 PushV
	var_23_object = var_19_object; // 0x4d4 Mov
	func_1997(var_23_object); // 0x4d5 NEW_2
	
Label_1239:
	return 0; // 0x4d7 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x4d9 PushV
	var_20_bool = 0; // 0x4da MovB
	var_21_bool = var_1_object == var_19_object; // 0x4db Eq
	if(var_21_bool == 0) goto Label_1248; // 0x4dc JumpB
	var_22_object = var_2_object; // 0x4dd PushT
	if(var_22_object == 0) goto Label_1248; // 0x4de JumpB
	var_20_bool = 1; // 0x4df MovB
	
Label_1248:
	if(var_20_bool == 0) goto Label_1253; // 0x4e0 JumpB
	var_2_object = 0; // 0x4e1 TMovB
	var_23_string = "head"; // 0x4e2 PushS
	UnlookAsync(var_23_string); // 0x4e3 Func
	
Label_1253:
	return 0; // 0x4e5 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0x55f Func
	return 0; // 0x561 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_1212(var_19_object); // 0x56b NEW_2
	var_24_object = Obj(); // 0x56d PushV
	var_24_object = var_19_object; // 0x56e Mov
	func_2312(); // 0x56f NEW_2
	return 0; // 0x571 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x58c PushV
	IsOverrideActive(var_21_bool); // 0x58d Func
	var_22_bool = var_21_bool == 0; // 0x58f Not
	if(var_22_bool == 0) goto Label_1429; // 0x590 JumpB
	var_23_object = Obj(); // 0x591 PushV
	var_23_object = var_19_object; // 0x592 Mov
	func_2186(var_23_object); // 0x593 NEW_2
	
Label_1429:
	return 2; // 0x595 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	return 0; // 0x60c Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	return 0; // 0x60e Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	return 0; // 0x610 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x8ea PushV
	var_23_object = var_19_object; // 0x8eb Mov
	var_24_int = var_20_int; // 0x8ec Mov
	var_25_float = var_21_float; // 0x8ed Mov
	func_1781(var_23_object, var_24_int, var_25_float); // 0x8ee NEW_2
	return 0; // 0x8f0 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x8f2 PushV
	var_25_object = var_19_object; // 0x8f3 Mov
	var_26_int = var_20_int; // 0x8f4 Mov
	var_27_float = var_21_float; // 0x8f5 Mov
	var_28_cvector = var_23_cvector; // 0x8f6 Mov
	var_29_cvector = var_24_cvector; // 0x8f7 Mov
	func_1849(var_27_float, var_28_cvector, var_29_cvector); // 0x8f8 NEW_2
	return 0; // 0x8fa Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x8fb PushV
	var_23_string = "health"; // 0x8fc PushS
	var_24_bool = var_20_string == var_23_string; // 0x8fd Eq
	if(var_24_bool == 0) goto Label_2311; // 0x8fe JumpB
	var_25_string = "health"; // 0x8ff PushS
	GetProperty(var_25_string, var_22_float); // 0x900 Func
	var_26_int = 0; // 0x902 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x903 LE
	if(var_27_bool == 0) goto Label_2311; // 0x904 JumpB
	SignalDeath(var_19_object); // 0x905 Func
	
Label_2311:
	return 2; // 0x907 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x909 PushV
	var_20_object = var_19_object; // 0x90a Mov
	func_2262(var_20_object); // 0x90b NEW_2
	return 0; // 0x90d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_196:
	var_19_bool = 1; // 0xc4 PushB
	if(var_19_bool == 0) goto Label_204; // 0xc5 JumpB
	var_20_float = 0; var_21_float = 0; // 0xc6 PushV
	var_20_float = 300; // 0xc7 MovI
	var_21_float = 100; // 0xc8 MovI
	func_304(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_20_float, var_21_float); // 0xc9 NEW_2
	goto Label_196; // 0xcb Jump
	
Label_204:
	return 0; // 0xcc Return
}


func_0(var_0_object, var_531_int, var_532_object)
{
	var_534_object = Obj(); var_535_bool = 0; var_536_int = 0; var_537_bool = 0; var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0; // 0x0 PushV
	var_0_object = var_532_object; // 0x1 TMov
	var_542_bool = 0; var_543_object = Obj(); var_544_float = 0; // 0x2 PushV
	var_543_object = var_532_object; // 0x3 Mov
	var_544_float = 70.0; // 0x4 MovF
	func_1879(var_543_object, var_544_float); // 0x5 NEW_2
	var_589_bool = var_542_bool == 0; // 0x7 Not
	if(var_589_bool == 0) goto Label_11; // 0x8 JumpB
	var_531_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_538_object); // 0xb Func
	var_590_int = 0; // 0xd PushV
	func_2242(var_590_int); // 0xe NEW_2
	SetNPCName(var_590_int); // 0x10 ObjFunc
	var_591_int = 0; // 0x12 PushV
	func_2240(var_591_int); // 0x13 NEW_2
	SetNPCDescription(var_591_int); // 0x15 ObjFunc
	var_592_string = ""; // 0x17 PushV
	func_2244(var_592_string); // 0x18 NEW_2
	SetPhoto(var_592_string); // 0x1a ObjFunc
	var_593_string = ""; // 0x1c PushV
	func_2246(var_593_string); // 0x1d NEW_2
	SetPhoto2(var_593_string); // 0x1f ObjFunc
	var_594_int = 0; // 0x21 PushV
	func_2163(var_594_int); // 0x22 NEW_2
	SetPlayerName(var_594_int); // 0x24 ObjFunc
	var_540_int = -1; // 0x26 MovI
	IsOverrideActive(var_539_bool); // 0x27 Func
	var_602_bool = var_539_bool; // 0x29 Push
	if(var_602_bool == 0) goto Label_45; // 0x2a JumpB
	var_531_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_538_object); // 0x2d Func
	var_603_object = Obj(); var_604_object = Obj(); // 0x2f PushV
	var_603_object = var_532_object; // 0x30 Mov
	var_604_object = var_538_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_541_bool); // 0x36 ObjFunc
	
Label_56:
	var_652_bool = var_541_bool == 0; // 0x38 Not
	if(var_652_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_541_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_653_object = Obj(); // 0x3f PushV
	var_653_object = var_532_object; // 0x40 Mov
	func_1948(); // 0x41 NEW_2
	StopDialog(var_538_object); // 0x43 Func
	GetReturnValue(var_540_int); // 0x45 ObjFunc
	var_531_int = var_540_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1025(var_312_bool)
{
	var_313_bool = 0; // 0x401 PushV
	var_313_bool = 0; // 0x402 MovB
	var_314_bool = 0; // 0x403 PushV
	func_997(var_313_bool, var_314_bool); // 0x404 NEW_2
	if(var_314_bool == 0) goto Label_1036; // 0x406 JumpB
	var_331_bool = 0; // 0x407 PushV
	func_1041(var_312_bool, var_313_bool, var_331_bool); // 0x408 NEW_2
	if(var_331_bool == 0) goto Label_1036; // 0x40a JumpB
	var_313_bool = 1; // 0x40b MovB
	
Label_1036:
	if(var_313_bool == 0) goto Label_1039; // 0x40c JumpB
	var_312_bool = 1; // 0x40d MovB
	return 0; // 0x40e Return
	
Label_1039:
	var_312_bool = 0; // 0x40f MovB
	return 0; // 0x410 Return
}


func_2056(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x808 PushV
	self(var_25_object); // 0x809 Func
	var_23_object = var_25_object; // 0x80b Mov
	return 2; // 0x80c Return
}


func_2062(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x80e PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x80f Or
	var_60_float = sqrt(var_61_int); // 0x810 Sqrt2
	var_62_float = 0.0; // 0x811 PushF
	var_63_bool = var_60_float < var_62_float; // 0x812 LT
	if(var_63_bool == 0) goto Label_2070; // 0x813 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x814 MovV
	return 2; // 0x815 Return
	
Label_2070:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x816 Div2
	return 2; // 0x817 Return
}


func_1041(var_0_object, var_4_bool, var_331_bool)
{
	var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_object = Obj(); var_338_bool = 0; var_339_float = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); // 0x411 PushV
	GetScene(var_337_object); // 0x412 Func
	var_338_bool = 0; // 0x414 MovB
	
Label_1045:
	var_342_cvector = CVector(0,0,0); var_343_object = Obj(); // 0x415 PushV
	var_343_object = var_0_object; // 0x416 MovT
	func_1567(var_343_object); // 0x417 NEW_2
	var_348_int = -var_342_cvector; // 0x419 Neg
	FindDirLength(var_339_float, var_348_int, var_339_float); // 0x41a Func
	var_349_bool = var_339_float < var_4_bool; // 0x41c LT
	if(var_349_bool == 0) goto Label_1055; // 0x41d JumpB
	goto Label_1083; // 0x41e Jump
	
Label_1083:
	var_331_bool = var_338_bool; // 0x43b Mov
	return 10; // 0x43c Return
	
Label_1055:
	Face(var_0_object); // 0x41f Func
	var_350_string = "all"; // 0x421 PushS
	var_351_string = "bjump"; // 0x422 PushS
	PlayAnimation(var_350_string, var_351_string); // 0x423 Func
	GetPFPosition(var_340_cvector); // 0x425 TObjFunc
	GetPFPosition(var_341_cvector); // 0x427 Func
	WaitForAnimEnd(); // 0x429 Func
	func_1129(var_341_cvector); // 0x42c NEW_2
	StopAsync(); // 0x42e Func
	var_352_cvector = CVector(0.0, 0.0, 0.0); // 0x430 PushVec
	SetSpeed(var_352_cvector); // 0x431 Func
	var_338_bool = 1; // 0x433 MovB
	var_353_bool = 0; // 0x434 PushV
	func_997(var_341_cvector, var_353_bool); // 0x435 NEW_2
	var_354_bool = var_353_bool == 0; // 0x437 Not
	if(var_354_bool == 0) goto Label_1082; // 0x438 JumpB
	goto Label_1083; // 0x439 Jump
	
Label_1082:
	goto Label_1045; // 0x43a Jump
}


func_1553(var_439_string, var_440_int)
{
	var_441_int = 2; // 0x612 PushI
	var_442_bool = var_440_int == var_441_int; // 0x613 Eq
	if(var_442_bool == 0) goto Label_1560; // 0x614 JumpB
	var_439_string = "fire"; // 0x615 MovS
	return 0; // 0x616 Return
	
Label_1560:
	var_443_int = 1; // 0x618 PushI
	var_444_bool = var_440_int == var_443_int; // 0x619 Eq
	if(var_444_bool == 0) goto Label_1565; // 0x61a JumpB
	var_439_string = "bullet"; // 0x61b MovS
	return 0; // 0x61c Return
	
Label_1565:
	var_439_string = "phys"; // 0x61d MovS
	return 0; // 0x61e Return
}


func_2072(var_449_float, var_450_float, var_451_float)
{
	var_454_bool = var_450_float < var_451_float; // 0x819 LT
	if(var_454_bool == 0) goto Label_2077; // 0x81a JumpB
	var_449_float = var_450_float; // 0x81b Mov
	goto Label_2078; // 0x81c Jump
	
Label_2078:
	return 0; // 0x81e Return
	
Label_2077:
	var_449_float = var_451_float; // 0x81d Mov
}


func_1567(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x61f PushV
	GetPosition(var_57_cvector); // 0x620 Func
	GetPosition(var_58_cvector); // 0x622 ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0x624 Sub2
	return 4; // 0x625 Return
}


func_2079(var_459_float, var_460_float, var_461_float, var_462_float)
{
	var_463_bool = var_460_float < var_461_float; // 0x820 LT
	if(var_463_bool == 0) goto Label_2084; // 0x821 JumpB
	var_459_float = var_461_float; // 0x822 Mov
	return 0; // 0x823 Return
	
Label_2084:
	var_464_bool = var_460_float > var_462_float; // 0x824 GT
	if(var_464_bool == 0) goto Label_2088; // 0x825 JumpB
	var_459_float = var_462_float; // 0x826 Mov
	return 0; // 0x827 Return
	
Label_2088:
	var_459_float = var_460_float; // 0x828 Mov
	return 0; // 0x829 Return
}


func_1574(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x626 PushV
	GetPosition(var_31_cvector); // 0x627 Func
	GetPosition(var_32_cvector); // 0x629 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x62b Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x62c Or2
	return 6; // 0x62d Return
}


func_2090(var_467_float)
{
	var_468_object = Obj(); var_469_object = Obj(); // 0x82a PushV
	CreateFloatVector(var_469_object); // 0x82b Func
	add(var_467_float); // 0x82d ObjFunc
	var_470_int = 0; // 0x82f PushI
	var_471_bool = var_467_float < var_470_int; // 0x830 LT
	if(var_471_bool == 0) goto Label_2102; // 0x831 JumpB
	var_472_float = 0.7; // 0x832 PushF
	var_473_int = 500; // 0x833 PushI
	RumblePlay(var_472_float, var_473_int); // 0x834 Func
	
Label_2102:
	var_474_int = 15; // 0x836 PushI
	SendWorldWndMessage(var_474_int, var_469_object); // 0x837 Func
	return 2; // 0x839 Return
}


func_1582(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_bool = 0; // 0x62e PushV
	IsPlayerActor(var_167_object, var_169_bool); // 0x62f Func
	var_166_bool = var_169_bool; // 0x631 Mov
	return 2; // 0x632 Return
}


func_1587(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x633 PushV
	var_59_string = "HasProperty"; // 0x634 PushS
	var_60_int = 2; // 0x635 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x636 FuncExist
	var_62_bool = var_61_bool == 0; // 0x637 Not
	if(var_62_bool == 0) goto Label_1595; // 0x638 JumpB
	var_54_bool = 0; // 0x639 MovB
	return 2; // 0x63a Return
	
Label_1595:
	HasProperty(var_56_string, var_58_bool); // 0x63b ObjFunc
	var_54_bool = var_58_bool; // 0x63d Mov
	return 2; // 0x63e Return
}


func_2107(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x83b PushV
	FindActor(var_24_object, var_21_string); // 0x83c Func
	var_25_bool = var_24_object == 0; // 0x83e NullEq
	if(var_25_bool == 0) goto Label_2114; // 0x83f JumpB
	var_20_bool = 0; // 0x840 MovB
	return 2; // 0x841 Return
	
Label_2114:
	Trigger(var_24_object, var_22_string); // 0x842 Func
	var_20_bool = 1; // 0x844 MovB
	return 2; // 0x845 Return
}


func_1086(var_0_object, var_262_bool)
{
	var_263_bool = 0; var_264_bool = 0; // 0x43e PushV
	var_265_string = "IsAttacking"; // 0x43f PushS
	var_266_int = 1; // 0x440 PushI
	var_267_bool = IsFuncExist(var_0_object, var_265_string, var_266_int); // 0x441 FuncExist
	if(var_267_bool == 0) goto Label_1095; // 0x442 JumpB
	IsAttacking(var_264_bool); // 0x443 TObjFunc
	var_262_bool = var_264_bool; // 0x445 Mov
	return 2; // 0x446 Return
	
Label_1095:
	var_262_bool = 0; // 0x447 MovB
	return 2; // 0x448 Return
}


func_1599(var_411_float, var_412_object, var_413_float, var_414_int)
{
	var_418_int = 0; var_419_string = ""; var_420_int = 0; var_421_float = 0; var_422_float = 0; var_423_float = 0; var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_float = 0; var_428_float = 0; var_429_float = 0; // 0x63f PushV
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x640 PushV
	var_431_object = var_412_object; // 0x641 Mov
	var_432_string = "health"; // 0x642 MovS
	func_1587(var_430_bool, var_431_object, var_432_string); // 0x643 NEW_2
	var_433_bool = var_430_bool == 0; // 0x645 Not
	if(var_433_bool == 0) goto Label_1609; // 0x646 JumpB
	var_411_float = 0.0; // 0x647 MovF
	return 12; // 0x648 Return
	
Label_1609:
	var_434_bool = 0; var_435_object = Obj(); var_436_string = ""; // 0x649 PushV
	var_435_object = var_412_object; // 0x64a Mov
	var_436_string = "armor"; // 0x64b MovS
	func_1587(var_434_bool, var_435_object, var_436_string); // 0x64c NEW_2
	var_437_bool = var_434_bool == 0; // 0x64e Not
	if(var_437_bool == 0) goto Label_1618; // 0x64f JumpB
	var_424_int = 0; // 0x650 MovI
	goto Label_1621; // 0x651 Jump
	
Label_1621:
	var_438_string = "armor_"; // 0x655 PushS
	var_439_string = ""; var_440_int = 0; // 0x656 PushV
	var_440_int = var_414_int; // 0x657 Mov
	func_1553(var_439_string, var_440_int); // 0x658 NEW_2
	var_425_string = var_438_string + var_439_string; // 0x65a Add2
	var_445_bool = 0; var_446_object = Obj(); var_447_string = ""; // 0x65b PushV
	var_446_object = var_412_object; // 0x65c Mov
	var_447_string = var_425_string; // 0x65d Mov
	func_1587(var_445_bool, var_446_object, var_447_string); // 0x65e NEW_2
	var_448_bool = var_445_bool == 0; // 0x660 Not
	if(var_448_bool == 0) goto Label_1636; // 0x661 JumpB
	var_426_int = 0; // 0x662 MovI
	goto Label_1638; // 0x663 Jump
	
Label_1638:
	var_449_float = 0; var_450_float = 0; var_451_float = 0; // 0x666 PushV
	var_452_int = var_424_int + var_426_int; // 0x667 Add
	var_453_float = 100.0; // 0x668 PushF
	var_450_float = var_452_int / var_452_int; // 0x669 Div2
	var_451_float = 1; // 0x66a MovI
	func_2072(var_449_float, var_450_float, var_451_float); // 0x66b NEW_2
	var_427_float = var_449_float; // 0x66c Mov
	var_455_string = "health"; // 0x66e PushS
	GetProperty(var_455_string, var_428_float); // 0x66f ObjFunc
	var_456_int = 1; // 0x671 PushI
	var_457_int = var_456_int - var_427_float; // 0x672 Sub
	var_429_float = var_413_float * var_457_int; // 0x673 Mult2
	var_458_string = "health"; // 0x674 PushS
	var_459_float = 0; var_460_float = 0; var_461_float = 0; var_462_float = 0; // 0x675 PushV
	var_460_float = var_428_float - var_429_float; // 0x676 Sub2
	var_461_float = 0; // 0x677 MovI
	var_462_float = 1; // 0x678 MovI
	func_2079(var_459_float, var_460_float, var_461_float, var_462_float); // 0x679 NEW_2
	SetProperty(var_458_string, var_459_float); // 0x67b ObjFunc
	var_465_bool = 0; var_466_object = Obj(); // 0x67d PushV
	var_466_object = var_412_object; // 0x67e Mov
	func_1582(var_465_bool, var_466_object); // 0x67f NEW_2
	if(var_465_bool == 0) goto Label_1670; // 0x681 JumpB
	var_467_float = 0; // 0x682 PushV
	var_467_float = -var_429_float; // 0x683 Neg2
	func_2090(var_467_float); // 0x684 NEW_2
	
Label_1670:
	var_411_float = var_429_float; // 0x686 Mov
	return 12; // 0x687 Return
	
Label_1636:
	GetProperty(var_425_string, var_426_int); // 0x664 ObjFunc
	
Label_1618:
	var_475_string = "armor"; // 0x652 PushS
	GetProperty(var_475_string, var_424_int); // 0x653 ObjFunc
}


func_2119(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x847 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x848 Func
	var_25_bool = var_24_bool; // 0x84a Push
	if(var_25_bool == 0) goto Label_2127; // 0x84b JumpB
	var_26_string = "attack"; // 0x84c PushS
	PlayGlobalMusic(var_26_string); // 0x84d Func
	
Label_2127:
	return 2; // 0x84f Return
}


func_1097(var_2_object, var_5_int)
{
	var_379_float = 0; var_380_int = 0; var_381_float = 0; var_382_int = 0; // 0x449 PushV
	var_383_bool = var_2_object == 0; // 0x44a Not
	if(var_383_bool == 0) goto Label_1101; // 0x44b JumpB
	return 4; // 0x44c Return
	
Label_1101:
	var_384_int = var_5_int; // 0x44d PushT
	if(var_384_int == 0) goto Label_1109; // 0x44e JumpB
	var_385_int = -1; // 0x44f PushI
	var_5_int = var_5_int + var_385_int; // 0x450 Add2
	var_386_int = 0; // 0x451 PushI
	var_387_bool = var_5_int > var_386_int; // 0x452 GT
	if(var_387_bool == 0) goto Label_1109; // 0x453 JumpB
	return 4; // 0x454 Return
	
Label_1109:
	rand(var_381_float); // 0x455 Func
	var_388_float = 0; // 0x457 PushV
	func_1147(var_388_float); // 0x458 NEW_2
	var_389_bool = var_381_float < var_388_float; // 0x45a LT
	if(var_389_bool == 0) goto Label_1128; // 0x45b JumpB
	irand(var_382_int, var_381_float); // 0x45c Func
	var_390_int = 1; // 0x45e PushI
	var_382_int = var_382_int + var_390_int; // 0x45f Add2
	var_391_string = "attack"; // 0x460 PushS
	var_392_int = var_391_string + var_382_int; // 0x461 Add
	Speak(var_392_int); // 0x462 Func
	var_393_int = 0; // 0x464 PushV
	func_1145(var_393_int); // 0x465 NEW_2
	var_5_int = var_393_int; // 0x466 TMov
	
Label_1128:
	return 4; // 0x468 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_603_object, var_604_object)
{
	var_0_object = var_604_object; // 0x4b TMov
	var_1_object = var_603_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_609_int = 1; // 0x4e PushI
	if(var_609_int == 0) goto Label_102; // 0x4f JumpB
	var_610_string = ""; // 0x50 PushV
	var_610_string = "Neutral"; // 0x51 MovS
	func_132(var_604_object, var_610_string); // 0x52 NEW_2
	var_627_int = 530939; // 0x54 PushI
	SetMessage(var_627_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_628_int = 530940; // 0x59 PushI
	var_629_int = -1; // 0x5a PushI
	var_630_int = 32267; // 0x5b PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x5c TObjFunc
	var_631_int = 530966; // 0x5e PushI
	var_632_int = -1; // 0x5f PushI
	var_633_int = 32287; // 0x60 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_634_bool = 0; // 0x66 PushV
	func_2248(var_634_bool); // 0x67 NEW_2
	if(var_634_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_635_string = var_3_string; // 0x6c PushT
	if(var_635_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_636_string = ""; // 0x6f PushV
	var_636_string = var_2_object; // 0x70 MovT
	func_1966(var_636_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_647_string = "all"; // 0x75 PushS
	var_648_string = "idle"; // 0x76 PushS
	PlayAnimation(var_647_string, var_648_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_649_string = var_3_string; // 0x7b PushT
	if(var_649_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_650_string = "all"; // 0x7e PushS
	var_651_string = "idle"; // 0x7f PushS
	PlayAnimation(var_650_string, var_651_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_2128()
{
	var_372_object = Obj(); var_373_object = Obj(); // 0x850 PushV
	GetScene(var_373_object); // 0x851 Func
	var_374_string = "battle"; // 0x853 PushS
	var_375_object = Obj(); // 0x854 PushV
	func_2056(var_375_object); // 0x855 NEW_2
	BroadcastMessage(var_374_string, var_375_object, var_373_object); // 0x857 Func
	return 2; // 0x859 Return
}


func_2139(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x85b PushV
	var_54_string = "idle"; // 0x85c MovS
	var_55_int = var_52_int; // 0x85d Push
	if(var_55_int == 0) goto Label_2144; // 0x85e JumpB
	var_54_string = var_54_string + var_52_int; // 0x85f Add2
	
Label_2144:
	var_51_string = var_54_string; // 0x860 Mov
	return 2; // 0x861 Return
}


func_2146(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x862 PushV
	var_48_int = 0; // 0x863 MovI
	
Label_2148:
	var_50_string = "all"; // 0x864 PushS
	var_51_string = ""; var_52_int = 0; // 0x865 PushV
	var_52_int = var_48_int; // 0x866 Mov
	func_2139(var_51_string, var_52_int); // 0x867 NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x869 Func
	var_56_bool = var_49_bool == 0; // 0x86b Not
	if(var_56_bool == 0) goto Label_2158; // 0x86c JumpB
	goto Label_2161; // 0x86d Jump
	
Label_2161:
	var_45_int = var_48_int; // 0x871 Mov
	return 4; // 0x872 Return
	
Label_2158:
	var_57_int = 1; // 0x86e PushI
	var_48_int = var_48_int + var_57_int; // 0x86f Add2
	goto Label_2148; // 0x870 Jump
}


func_1129(var_0_object)
{
	var_135_object = Obj(); // 0x469 PushV
	var_135_object = var_0_object; // 0x46a MovT
	func_2119(var_135_object); // 0x46b NEW_2
	return 0; // 0x46d Return
}


func_1134(var_476_int)
{
	var_476_int = 0; // 0x46e MovI
	return 0; // 0x46f Return
}


func_1136()
{
	var_268_string = ""; // 0x470 PushV
	var_268_string = "attack_stay"; // 0x471 MovS
	func_2015(var_268_string); // 0x472 NEW_2
	return 0; // 0x474 Return
}


func_2163(var_594_int)
{
	var_595_int = 0; var_596_int = 0; // 0x873 PushV
	var_597_string = "branch"; // 0x874 PushS
	GetVariable(var_597_string, var_596_int); // 0x875 Func
	var_598_int = 0; // 0x877 PushI
	var_599_bool = var_596_int == var_598_int; // 0x878 Eq
	if(var_599_bool == 0) goto Label_2173; // 0x879 JumpB
	var_594_int = 1; // 0x87a MovI
	return 2; // 0x87b Return
	
Label_2173:
	var_600_int = 1; // 0x87d PushI
	var_601_bool = var_596_int == var_600_int; // 0x87e Eq
	if(var_601_bool == 0) goto Label_2178; // 0x87f JumpB
	var_594_int = 2; // 0x880 MovI
	return 2; // 0x881 Return
	
Label_2178:
	var_594_int = 3; // 0x882 MovI
	return 2; // 0x883 Return
}


func_1141()
{
	return 0; // 0x476 Return
}


func_1143(var_501_bool)
{
	var_501_bool = 1; // 0x477 MovB
	return 0; // 0x478 Return
}


func_1145(var_393_int)
{
	var_393_int = 1; // 0x479 MovI
	return 0; // 0x47a Return
}


func_1147(var_388_float)
{
	var_388_float = 0.5; // 0x47b MovF
	return 0; // 0x47c Return
}


func_1149(var_2_object, var_142_bool, var_143_object, var_144_float, var_145_float, var_146_bool, var_147_bool)
{
	var_151_bool = 0; var_152_bool = 0; var_153_bool = 0; var_154_bool = 0; // 0x47d PushV
	var_155_object = Obj(); // 0x47e PushV
	var_155_object = var_143_object; // 0x47f Mov
	func_2119(var_155_object); // 0x480 NEW_2
	var_156_int = 1; // 0x482 PushI
	var_157_int = 5; // 0x483 PushI
	SetTimer(var_156_int, var_157_int); // 0x484 Func
	CanSee(var_153_bool, var_143_object); // 0x486 Func
	var_158_bool = var_153_bool; // 0x488 Push
	if(var_158_bool == 0) goto Label_1168; // 0x489 JumpB
	var_2_object = 1; // 0x48a TMovB
	var_159_object = Obj(); // 0x48b PushV
	var_159_object = var_143_object; // 0x48c Mov
	func_1997(var_159_object); // 0x48d NEW_2
	goto Label_1169; // 0x48f Jump
	
Label_1169:
	var_166_bool = 0; var_167_object = Obj(); // 0x491 PushV
	var_167_object = var_143_object; // 0x492 Mov
	func_1582(var_166_bool, var_167_object); // 0x493 NEW_2
	if(var_166_bool == 0) goto Label_1179; // 0x495 JumpB
	var_170_object = Obj(); // 0x496 PushV
	func_2056(var_170_object); // 0x497 NEW_2
	SendPlayerEnemy(var_143_object, var_170_object); // 0x499 Func
	
Label_1179:
	var_171_bool = 0; var_172_object = Obj(); var_173_float = 0; var_174_float = 0; var_175_bool = 0; var_176_bool = 0; // 0x49b PushV
	var_172_object = var_143_object; // 0x49c Mov
	var_173_float = var_144_float; // 0x49d Mov
	var_174_float = var_145_float; // 0x49e Mov
	var_175_bool = var_146_bool; // 0x49f Mov
	var_176_bool = var_147_bool; // 0x4a0 Mov
	func_1254(var_153_bool, var_154_bool, var_171_bool, var_172_object, var_173_float, var_174_float, var_175_bool, var_176_bool); // 0x4a1 NEW_2
	var_154_bool = var_171_bool; // 0x4a2 Mov
	var_222_object = var_2_object; // 0x4a4 PushT
	if(var_222_object == 0) goto Label_1193; // 0x4a5 JumpB
	var_223_string = "head"; // 0x4a6 PushS
	UnlookAsync(var_223_string); // 0x4a7 Func
	
Label_1193:
	var_224_int = 1; // 0x4a9 PushI
	KillTimer(var_224_int); // 0x4aa Func
	var_142_bool = var_154_bool; // 0x4ac Mov
	return 4; // 0x4ad Return
	
Label_1168:
	var_2_object = 0; // 0x490 TMovB
}


func_132(var_2_object, var_610_string)
{
	var_611_bool = 0; // 0x85 PushV
	func_2248(var_611_bool); // 0x86 NEW_2
	var_612_bool = var_611_bool == 0; // 0x88 Not
	if(var_612_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_613_bool = var_610_string == var_2_object; // 0x8b Eq
	if(var_613_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_614_string = ""; var_615_bool = 0; // 0x8e PushV
	var_614_string = var_610_string; // 0x8f Mov
	var_616_string = ""; // 0x90 PushS
	var_617_bool = var_610_string == var_616_string; // 0x91 Eq
	if(var_617_bool == 0) goto Label_149; // 0x92 JumpB
	var_615_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1982(var_614_string, var_615_bool); // 0x96 NEW_2
	var_2_object = var_610_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_615_bool = 1; // 0x95 MovB
}


func_2180(var_26_int)
{
	var_27_int = 0; var_28_int = 0; // 0x884 PushV
	var_29_string = "branch"; // 0x885 PushS
	GetVariable(var_29_string, var_28_int); // 0x886 Func
	var_26_int = var_28_int; // 0x888 Mov
	return 2; // 0x889 Return
}


func_1672(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0x688 PushV
	IsDead(var_50_bool); // 0x689 ObjFunc
	var_47_bool = var_50_bool; // 0x68b Mov
	return 2; // 0x68c Return
}


func_2186(var_23_object)
{
	var_24_int = 0; // 0x88b PushV
	func_2180(var_24_int); // 0x88c NEW_2
	var_28_int = 1; // 0x88e PushI
	var_29_bool = var_24_int == var_28_int; // 0x88f Eq
	if(var_29_bool == 0) goto Label_2196; // 0x890 JumpB
	WorkWithCorpse(var_23_object); // 0x891 Func
	goto Label_2198; // 0x893 Jump
	
Label_2198:
	return 0; // 0x896 Return
	
Label_2196:
	Barter(var_23_object); // 0x894 Func
}


func_1677(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x68d PushV
	var_42_bool = var_37_object == 0; // 0x68e NullEq
	if(var_42_bool == 0) goto Label_1682; // 0x68f JumpB
	var_36_bool = 0; // 0x690 MovB
	return 4; // 0x691 Return
	
Label_1682:
	var_43_bool = 0; // 0x692 PushV
	var_43_bool = 0; // 0x693 MovB
	var_44_string = "IsDead"; // 0x694 PushS
	var_45_int = 1; // 0x695 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0x696 FuncExist
	if(var_46_bool == 0) goto Label_1694; // 0x697 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x698 PushV
	var_48_object = var_37_object; // 0x699 Mov
	func_1672(var_48_object); // 0x69a NEW_2
	if(var_47_bool == 0) goto Label_1694; // 0x69c JumpB
	var_43_bool = 1; // 0x69d MovB
	
Label_1694:
	if(var_43_bool == 0) goto Label_1697; // 0x69e JumpB
	var_36_bool = 0; // 0x69f MovB
	return 4; // 0x6a0 Return
	
Label_1697:
	GetScene(var_40_object); // 0x6a1 Func
	var_51_bool = var_40_object == 0; // 0x6a3 NullEq
	if(var_51_bool == 0) goto Label_1703; // 0x6a4 JumpB
	var_36_bool = 0; // 0x6a5 MovB
	return 4; // 0x6a6 Return
	
Label_1703:
	GetScene(var_41_object); // 0x6a7 ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0x6a9 Neq
	if(var_52_bool == 0) goto Label_1709; // 0x6aa JumpB
	var_36_bool = 0; // 0x6ab MovB
	return 4; // 0x6ac Return
	
Label_1709:
	var_36_bool = 1; // 0x6ad MovB
	return 4; // 0x6ae Return
}


func_2199(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; // 0x897 PushV
	CreateInvItem(var_36_object); // 0x898 Func
	SetItemName(var_32_string); // 0x89a ObjFunc
	var_39_string = "Organ"; // 0x89c PushS
	var_40_int = 1; // 0x89d PushI
	SetProperty(var_39_string, var_40_int); // 0x89e ObjFunc
	GetItemID(var_37_int); // 0x8a0 ObjFunc
	var_41_int = 0; // 0x8a2 PushI
	var_42_int = 1; // 0x8a3 PushI
	AddItem(var_38_bool, var_36_object, var_41_int, var_42_int); // 0x8a4 Func
	return 6; // 0x8a6 Return
}


func_2216()
{
	var_26_int = 0; // 0x8a8 PushV
	func_2180(var_26_int); // 0x8a9 NEW_2
	var_30_int = 1; // 0x8ab PushI
	var_31_bool = var_26_int != var_30_int; // 0x8ac Neq
	if(var_31_bool == 0) goto Label_2223; // 0x8ad JumpB
	return 0; // 0x8ae Return
	
Label_2223:
	var_32_string = ""; // 0x8af PushV
	var_32_string = "liver"; // 0x8b0 MovS
	func_2199(var_32_string); // 0x8b1 NEW_2
	var_43_string = ""; // 0x8b3 PushV
	var_43_string = "kidney"; // 0x8b4 MovS
	func_2199(var_43_string); // 0x8b5 NEW_2
	var_44_string = ""; // 0x8b7 PushV
	var_44_string = "heart"; // 0x8b8 MovS
	func_2199(var_44_string); // 0x8b9 NEW_2
	var_45_string = ""; // 0x8bb PushV
	var_45_string = "blood"; // 0x8bc MovS
	func_2199(var_45_string); // 0x8bd NEW_2
	return 0; // 0x8bf Return
}


func_1713(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x6b1 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0x6b2 PushV
	var_37_object = var_33_object; // 0x6b3 Mov
	func_1677(var_36_bool, var_37_object); // 0x6b4 NEW_2
	var_53_bool = var_36_bool == 0; // 0x6b6 Not
	if(var_53_bool == 0) goto Label_1722; // 0x6b7 JumpB
	var_32_bool = 0; // 0x6b8 MovB
	return 2; // 0x6b9 Return
	
Label_1722:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x6ba PushV
	var_55_object = var_33_object; // 0x6bb Mov
	var_56_string = "noaccess"; // 0x6bc MovS
	func_1587(var_54_bool, var_55_object, var_56_string); // 0x6bd NEW_2
	var_63_bool = var_54_bool == 0; // 0x6bf Not
	if(var_63_bool == 0) goto Label_1731; // 0x6c0 JumpB
	var_32_bool = 1; // 0x6c1 MovB
	return 2; // 0x6c2 Return
	
Label_1731:
	var_64_string = "noaccess"; // 0x6c3 PushS
	GetProperty(var_64_string, var_35_int); // 0x6c4 ObjFunc
	var_65_int = 0; // 0x6c6 PushI
	var_32_bool = var_35_int == var_65_int; // 0x6c7 Eq2
	return 2; // 0x6c8 Return
}


func_1212(var_2_object)
{
	var_20_int = 1; // 0x4bc PushI
	KillTimer(var_20_int); // 0x4bd Func
	var_21_object = var_2_object; // 0x4bf PushT
	if(var_21_object == 0) goto Label_1221; // 0x4c0 JumpB
	var_2_object = 0; // 0x4c1 TMovB
	var_22_string = "head"; // 0x4c2 PushS
	UnlookAsync(var_22_string); // 0x4c3 Func
	
Label_1221:
	func_1378(var_19_object); // 0x4c6 NEW_2
	return 0; // 0x4c8 Return
}


func_2240(var_591_int)
{
	var_591_int = 515572; // 0x8c0 MovI
	return 0; // 0x8c1 Return
}


func_2242(var_590_int)
{
	var_590_int = 504031; // 0x8c2 MovI
	return 0; // 0x8c3 Return
}


func_2244(var_592_string)
{
	var_592_string = "ui/NPC_Citizen2.png"; // 0x8c4 MovS
	return 0; // 0x8c5 Return
}


func_2246(var_593_string)
{
	var_593_string = "ui/NPC_Citizen2_b.png"; // 0x8c6 MovS
	return 0; // 0x8c7 Return
}


func_2248(var_585_bool)
{
	var_585_bool = 0; // 0x8c8 MovB
	return 0; // 0x8c9 Return
}


func_1737(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x6c9 PushV
	var_51_bool = var_36_object == 0; // 0x6ca NullEq
	if(var_51_bool == 0) goto Label_1741; // 0x6cb JumpB
	return 14; // 0x6cc Return
	
Label_1741:
	IsDead(var_44_bool); // 0x6cd Func
	var_52_bool = var_44_bool; // 0x6cf Push
	if(var_52_bool == 0) goto Label_1746; // 0x6d0 JumpB
	return 14; // 0x6d1 Return
	
Label_1746:
	GetSecondaryAnimationType(var_45_int); // 0x6d2 Func
	var_53_int = 0; // 0x6d4 PushI
	var_54_bool = var_45_int < var_53_int; // 0x6d5 LT
	if(var_54_bool == 0) goto Label_1752; // 0x6d6 JumpB
	return 14; // 0x6d7 Return
	
Label_1752:
	GetPosition(var_46_cvector); // 0x6d8 ObjFunc
	GetPosition(var_47_cvector); // 0x6da Func
	GetDirection(var_48_cvector); // 0x6dc Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x6de Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x6df PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x6e0 PushE
	var_57_float = var_55_float * var_56_float; // 0x6e1 Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x6e2 PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x6e3 PushE
	var_60_float = var_58_float * var_59_float; // 0x6e4 Mult
	var_61_int = var_57_float + var_60_float; // 0x6e5 Add
	var_62_int = 0; // 0x6e6 PushI
	var_63_bool = var_61_int >= var_62_int; // 0x6e7 GE
	if(var_63_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_50_string = "fhit"; // 0x6e9 MovS
	goto Label_1772; // 0x6ea Jump
	
Label_1772:
	var_64_string = "hit_react"; // 0x6ec PushS
	var_65_string = "1"; // 0x6ed PushS
	var_66_int = var_50_string + var_65_string; // 0x6ee Add
	var_67_string = "2"; // 0x6ef PushS
	var_68_int = var_50_string + var_67_string; // 0x6f0 Add
	var_69_int = -10; // 0x6f1 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x6f2 Func
	return 14; // 0x6f4 Return
	
Label_1771:
	var_50_string = "bhit"; // 0x6eb MovS
}


func_2250(var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x8ca PushV
	var_24_string = "b1q05ToAttack1"; // 0x8cb PushS
	GetVariable(var_24_string, var_23_int); // 0x8cc Func
	var_25_int = 0; // 0x8ce PushI
	var_21_bool = var_23_int != var_25_int; // 0x8cf Neq2
	return 2; // 0x8d0 Return
}


func_716(var_1_object, var_2_object, var_4_bool)
{
	var_96_bool = 0; var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; var_101_cvector = CVector(0,0,0); // 0x2cc PushV
	var_1_object = 0; // 0x2cd TMovI
	
Label_718:
	var_102_string = "all"; // 0x2ce PushS
	var_103_string = "attack_begin"; // 0x2cf PushS
	var_104_int = 1; // 0x2d0 PushI
	var_105_int = var_1_object + var_104_int; // 0x2d1 Add
	var_106_int = var_103_string + var_105_int; // 0x2d2 Add
	HasAnimation(var_99_bool, var_102_string, var_106_int); // 0x2d3 Func
	var_107_bool = var_99_bool == 0; // 0x2d5 Not
	if(var_107_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_731; // 0x2d7 Jump
	
Label_731:
	var_2_object = 0; // 0x2db TMovI
	
Label_732:
	var_108_string = "attack"; // 0x2dc PushS
	var_109_int = 1; // 0x2dd PushI
	var_110_int = var_2_object + var_109_int; // 0x2de Add
	var_111_int = var_108_string + var_110_int; // 0x2df Add
	IsExisting3DSound(var_100_bool, var_111_int); // 0x2e0 Func
	var_112_bool = var_100_bool == 0; // 0x2e2 Not
	if(var_112_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_744; // 0x2e4 Jump
	
Label_744:
	var_113_string = "all"; // 0x2e8 PushS
	var_114_string = "bjump"; // 0x2e9 PushS
	GetAnimationOffset(var_101_cvector, var_113_string, var_114_string); // 0x2ea Func
	var_115_float = GetByIndex(var_101_cvector, 2); // 0x2ec PushE
	var_4_bool = -var_115_float; // 0x2ed Neg2
	return 6; // 0x2ee Return
	
Label_741:
	var_116_int = 1; // 0x2e5 PushI
	var_2_object = var_2_object + var_116_int; // 0x2e6 Add2
	goto Label_732; // 0x2e7 Jump
	
Label_728:
	var_117_int = 1; // 0x2d8 PushI
	var_1_object = var_1_object + var_117_int; // 0x2d9 Add2
	goto Label_718; // 0x2da Jump
}


func_2257()
{
	var_27_string = "b1q05ToAttack1"; // 0x8d1 PushS
	var_28_int = 1; // 0x8d2 PushI
	SetVariable(var_27_string, var_28_int); // 0x8d3 Func
	return 0; // 0x8d5 Return
}


func_2262(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x8d6 PushV
	GetScene(var_22_object); // 0x8d7 Func
	var_23_object = Obj(); // 0x8d9 PushV
	func_2056(var_23_object); // 0x8da NEW_2
	RemoveStationaryActor(var_23_object); // 0x8dc ObjFunc
	func_2216(); // 0x8df NEW_2
	var_46_object = Obj(); // 0x8e1 PushV
	var_46_object = var_20_object; // 0x8e2 Mov
	TaskCall(5); // 0x8e3 TaskCall
	func_1405(var_46_object); // 0x8e4 NEW_2
	TaskReturn(); // 0x8e5 TaskReturn
	return 2; // 0x8e7 Return
}


func_1254(var_0_object, var_1_object, var_171_bool, var_172_object, var_173_float, var_174_float, var_175_bool, var_176_bool)
{
	var_177_bool = 0; var_178_bool = 0; var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_object = Obj(); var_185_bool = 0; var_186_bool = 0; var_187_object = Obj(); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); // 0x4e6 PushV
	var_0_object = 0; // 0x4e7 TMovB
	var_1_object = var_172_object; // 0x4e8 TMov
	var_186_bool = var_176_bool; // 0x4e9 Mov
	
Label_1258:
	var_193_bool = 0; var_194_object = Obj(); // 0x4ea PushV
	var_194_object = var_172_object; // 0x4eb Mov
	func_1394(var_193_bool, var_194_object); // 0x4ec NEW_2
	var_197_bool = var_193_bool == 0; // 0x4ee Not
	if(var_197_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_171_bool = 0; // 0x4f0 MovB
	return 16; // 0x4f1 Return
	
Label_1266:
	GetPosition(var_188_cvector); // 0x4f2 ObjFunc
	GetPosition(var_189_cvector); // 0x4f4 Func
	var_190_cvector = var_188_cvector - var_189_cvector; // 0x4f6 Sub2
	var_191_float = var_190_cvector | var_190_cvector; // 0x4f7 Or2
	var_198_bool = 0; // 0x4f8 PushV
	var_198_bool = 0; // 0x4f9 MovB
	var_199_int = 0; // 0x4fa PushI
	var_200_bool = var_174_float > var_199_int; // 0x4fb GT
	if(var_200_bool == 0) goto Label_1281; // 0x4fc JumpB
	var_201_float = var_174_float * var_174_float; // 0x4fd Mult
	var_202_bool = var_191_float > var_201_float; // 0x4fe GT
	if(var_202_bool == 0) goto Label_1281; // 0x4ff JumpB
	var_198_bool = 1; // 0x500 MovB
	
Label_1281:
	if(var_198_bool == 0) goto Label_1286; // 0x501 JumpB
	Stop(); // 0x502 Func
	var_171_bool = 0; // 0x504 MovB
	return 16; // 0x505 Return
	
Label_1286:
	var_203_float = var_173_float * var_173_float; // 0x506 Mult
	var_204_bool = var_191_float > var_203_float; // 0x507 GT
	if(var_204_bool == 0) goto Label_1348; // 0x508 JumpB
	GetPFPosition(var_188_cvector); // 0x509 ObjFunc
	FindPathTo(var_192_object, var_188_cvector); // 0x50b Func
	var_205_bool = var_192_object != 0; // 0x50d NullNeq
	if(var_205_bool == 0) goto Label_1297; // 0x50e JumpB
	var_187_object = var_192_object; // 0x50f Mov
	var_192_object = 0; // 0x510 SetNull
	
Label_1297:
	var_206_bool = var_187_object != 0; // 0x511 NullNeq
	if(var_206_bool == 0) goto Label_1330; // 0x512 JumpB
	var_207_bool = var_186_bool; // 0x513 Push
	if(var_207_bool == 0) goto Label_1307; // 0x514 JumpB
	var_186_bool = 0; // 0x515 MovB
	RotatePath(var_187_object, var_185_bool); // 0x516 Func
	var_208_bool = var_185_bool == 0; // 0x518 Not
	if(var_208_bool == 0) goto Label_1307; // 0x519 JumpB
	goto Label_1354; // 0x51a Jump
	
Label_1354:
	var_171_bool = !var_0_object; // 0x54a Not2
	return 16; // 0x54b Return
	
Label_1307:
	var_209_int = 0; // 0x51b PushI
	var_210_float = 0.3; // 0x51c PushF
	SetTimer(var_209_int, var_210_float); // 0x51d Func
	var_211_string = ""; // 0x51f PushV
	func_1401(var_211_string); // 0x520 NEW_2
	var_212_string = ""; // 0x522 PushV
	func_1403(var_212_string); // 0x523 NEW_2
	FollowPath(var_187_object, var_175_bool, var_185_bool, var_211_string, var_212_string); // 0x525 Func
	var_213_bool = var_185_bool == 0; // 0x527 Not
	if(var_213_bool == 0) goto Label_1328; // 0x528 JumpB
	var_214_object = var_0_object; // 0x529 PushT
	if(var_214_object == 0) goto Label_1326; // 0x52a JumpB
	var_187_object = 0; // 0x52b SetNull
	goto Label_1354; // 0x52c Jump
	
Label_1326:
	goto Label_1353; // 0x52e Jump
	
Label_1353:
	goto Label_1258; // 0x549 Jump
	
Label_1328:
	var_187_object = 0; // 0x530 SetNull
	goto Label_1346; // 0x531 Jump
	
Label_1346:
	var_192_object = 0; // 0x542 SetNull
	goto Label_1352; // 0x543 Jump
	
Label_1352:
	var_187_object = 0; // 0x548 SetNull
	
Label_1330:
	var_215_int = 0; // 0x532 PushI
	KillTimer(var_215_int); // 0x533 Func
	var_216_float = 0.5; // 0x535 PushF
	Sleep(var_216_float, var_185_bool); // 0x536 Func
	var_217_bool = var_185_bool == 0; // 0x538 Not
	if(var_217_bool == 0) goto Label_1342; // 0x539 JumpB
	var_218_object = var_0_object; // 0x53a PushT
	if(var_218_object == 0) goto Label_1342; // 0x53b JumpB
	var_187_object = 0; // 0x53c SetNull
	goto Label_1354; // 0x53d Jump
	
Label_1342:
	var_219_int = 0; // 0x53e PushI
	var_220_float = 0.3; // 0x53f PushF
	SetTimer(var_219_int, var_220_float); // 0x540 Func
	
Label_1348:
	var_221_int = 0; // 0x544 PushI
	KillTimer(var_221_int); // 0x545 Func
	goto Label_1354; // 0x547 Jump
}


func_751(var_0_object, var_397_float, var_398_int)
{
	var_399_object = Obj(); var_400_float = 0; var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_float = 0; // 0x2ef PushV
	var_405_float = 0.9; // 0x2f0 PushF
	var_406_float = var_397_float * var_405_float; // 0x2f1 Mult
	GetVictim(var_406_float, var_402_object); // 0x2f2 Func
	ReportAttack(var_0_object); // 0x2f4 Func
	var_407_bool = var_402_object == var_0_object; // 0x2f6 Eq
	if(var_407_bool == 0) goto Label_788; // 0x2f7 JumpB
	var_408_float = 0; var_409_object = Obj(); var_410_int = 0; // 0x2f8 PushV
	var_409_object = var_402_object; // 0x2f9 Mov
	var_410_int = var_398_int; // 0x2fa Mov
	func_481(var_410_int); // 0x2fb NEW_2
	var_403_float = var_408_float; // 0x2fc Mov
	var_411_float = 0; var_412_object = Obj(); var_413_float = 0; var_414_int = 0; // 0x2fe PushV
	var_412_object = var_402_object; // 0x2ff Mov
	var_413_float = var_403_float; // 0x300 Mov
	var_415_int = 0; var_416_object = Obj(); var_417_int = 0; // 0x301 PushV
	var_416_object = var_402_object; // 0x302 Mov
	var_417_int = var_398_int; // 0x303 Mov
	func_484(var_417_int); // 0x304 NEW_2
	var_414_int = var_415_int; // 0x305 Mov
	func_1599(var_411_float, var_412_object, var_413_float, var_414_int); // 0x307 NEW_2
	var_404_float = var_411_float; // 0x308 Mov
	var_476_int = 0; // 0x30a PushV
	func_1134(var_476_int); // 0x30b NEW_2
	ReportHit(var_0_object, var_476_int, var_404_float, var_403_float); // 0x30d Func
	var_477_object = Obj(); var_478_float = 0; // 0x30f PushV
	var_477_object = var_402_object; // 0x310 Mov
	var_478_float = var_404_float; // 0x311 Mov
	func_1141(); // 0x312 NEW_2
	
Label_788:
	return 6; // 0x314 Return
}


func_1781(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x6f5 PushV
	var_44_bool = 0; // 0x6f6 PushV
	var_44_bool = 0; // 0x6f7 MovB
	var_45_bool = 0; // 0x6f8 PushV
	var_45_bool = 0; // 0x6f9 MovB
	var_46_object = var_23_object; // 0x6fa Push
	if(var_46_object == 0) goto Label_1792; // 0x6fb JumpB
	var_47_int = 4; // 0x6fc PushI
	var_48_bool = var_24_int != var_47_int; // 0x6fd Neq
	if(var_48_bool == 0) goto Label_1792; // 0x6fe JumpB
	var_45_bool = 1; // 0x6ff MovB
	
Label_1792:
	if(var_45_bool == 0) goto Label_1797; // 0x700 JumpB
	var_49_int = 5; // 0x701 PushI
	var_50_bool = var_24_int != var_49_int; // 0x702 Neq
	if(var_50_bool == 0) goto Label_1797; // 0x703 JumpB
	var_44_bool = 1; // 0x704 MovB
	
Label_1797:
	if(var_44_bool == 0) goto Label_1844; // 0x705 JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x706 PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x707 PushV
	var_54_object = var_23_object; // 0x708 Mov
	func_1567(var_54_object); // 0x709 NEW_2
	var_52_cvector = var_53_cvector; // 0x70a Mov
	func_2062(var_51_cvector, var_52_cvector); // 0x70c NEW_2
	var_35_cvector = var_51_cvector; // 0x70d Mov
	CreateVectorVector(var_36_object); // 0x70f Func
	var_37_int = 1; // 0x711 MovI
	
Label_1810:
	var_64_string = "hit"; // 0x712 PushS
	var_65_int = var_64_string + var_37_int; // 0x713 Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x714 Func
	var_66_bool = var_38_bool == 0; // 0x716 Not
	if(var_66_bool == 0) goto Label_1817; // 0x717 JumpB
	goto Label_1826; // 0x718 Jump
	
Label_1826:
	size(var_41_int); // 0x722 ObjFunc
	var_67_int = var_41_int; // 0x724 Push
	if(var_67_int == 0) goto Label_1843; // 0x725 JumpB
	irand(var_42_int, var_41_int); // 0x726 Func
	get(var_43_cvector, var_42_int); // 0x728 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x72a PushV
	var_68_object = var_23_object; // 0x72b Mov
	var_69_int = var_24_int; // 0x72c Mov
	var_70_float = var_25_float; // 0x72d Mov
	var_71_cvector = var_43_cvector; // 0x72e Mov
	var_72_cvector = -var_35_cvector; // 0x72f Neg2
	func_1849(var_70_float, var_71_cvector, var_72_cvector); // 0x730 NEW_2
	return 18; // 0x732 Return
	
Label_1843:
	var_36_object = 0; // 0x733 SetNull
	
Label_1844:
	var_113_object = Obj(); // 0x734 PushV
	var_113_object = var_23_object; // 0x735 Mov
	func_1737(var_113_object); // 0x736 NEW_2
	return 18; // 0x738 Return
	
Label_1817:
	var_114_int = var_40_cvector | var_35_cvector; // 0x719 Or
	var_115_float = 0.70711; // 0x71a PushF
	var_116_bool = var_114_int >= var_115_float; // 0x71b GE
	if(var_116_bool == 0) goto Label_1823; // 0x71c JumpB
	add(var_39_cvector); // 0x71d ObjFunc
	
Label_1823:
	var_117_int = 1; // 0x71f PushI
	var_37_int = var_37_int + var_117_int; // 0x720 Add2
	goto Label_1810; // 0x721 Jump
}


func_790(var_0_object, var_360_bool, var_361_float)
{
	var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = ""; var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_string = ""; // 0x316 PushV
	func_1129(var_369_string); // 0x318 NEW_2
	irand(var_366_int, var_369_string); // 0x31a Func
	var_370_int = 1; // 0x31c PushI
	var_366_int = var_366_int + var_370_int; // 0x31d Add2
	Face(var_0_object); // 0x31e Func
	var_371_bool = 1; // 0x320 PushB
	SetAttackState(var_371_bool); // 0x321 Func
	func_2128(); // 0x324 NEW_2
	var_376_string = "all"; // 0x326 PushS
	var_377_string = "attack_begin"; // 0x327 PushS
	var_378_int = var_377_string + var_366_int; // 0x328 Add
	PlayAnimation(var_376_string, var_378_int); // 0x329 Func
	WaitForAnimEnd(); // 0x32b Func
	func_1097(var_368_int, var_369_string); // 0x32e NEW_2
	var_394_bool = 0; var_395_object = Obj(); // 0x330 PushV
	var_395_object = var_0_object; // 0x331 MovT
	func_1713(var_394_bool, var_395_object); // 0x332 NEW_2
	var_396_bool = var_394_bool == 0; // 0x334 Not
	if(var_396_bool == 0) goto Label_826; // 0x335 JumpB
	StopAsync(); // 0x336 Func
	var_360_bool = 0; // 0x338 MovB
	return 8; // 0x339 Return
	
Label_826:
	var_397_float = 0; var_398_int = 0; // 0x33a PushV
	var_397_float = var_361_float; // 0x33b Mov
	var_398_int = var_366_int; // 0x33c Mov
	func_751(var_369_string, var_397_float, var_398_int); // 0x33d NEW_2
	var_479_string = "all"; // 0x33f PushS
	var_480_string = "attack_middle"; // 0x340 PushS
	var_481_int = var_480_string + var_366_int; // 0x341 Add
	HasAnimation(var_367_bool, var_479_string, var_481_int); // 0x342 Func
	var_482_bool = var_367_bool; // 0x344 Push
	if(var_482_bool == 0) goto Label_907; // 0x345 JumpB
	func_2128(); // 0x347 NEW_2
	var_483_string = "all"; // 0x349 PushS
	var_484_string = "attack_middle"; // 0x34a PushS
	var_485_int = var_484_string + var_366_int; // 0x34b Add
	PlayAnimation(var_483_string, var_485_int); // 0x34c Func
	WaitForAnimEnd(); // 0x34e Func
	func_1129(var_369_string); // 0x351 NEW_2
	var_486_bool = 0; var_487_object = Obj(); // 0x353 PushV
	var_487_object = var_0_object; // 0x354 MovT
	func_1713(var_486_bool, var_487_object); // 0x355 NEW_2
	var_488_bool = var_486_bool == 0; // 0x357 Not
	if(var_488_bool == 0) goto Label_861; // 0x358 JumpB
	StopAsync(); // 0x359 Func
	var_360_bool = 0; // 0x35b MovB
	return 8; // 0x35c Return
	
Label_861:
	var_489_float = 0; var_490_int = 0; // 0x35d PushV
	var_489_float = var_361_float; // 0x35e Mov
	var_490_int = var_366_int; // 0x35f Mov
	func_751(var_369_string, var_489_float, var_490_int); // 0x360 NEW_2
	var_368_int = 1; // 0x362 MovI
	
Label_867:
	var_491_string = "attack_middle"; // 0x363 PushS
	var_492_int = var_491_string + var_366_int; // 0x364 Add
	var_493_string = "_"; // 0x365 PushS
	var_494_int = var_492_int + var_493_string; // 0x366 Add
	var_369_string = var_494_int + var_368_int; // 0x367 Add2
	var_495_string = "all"; // 0x368 PushS
	HasAnimation(var_367_bool, var_495_string, var_369_string); // 0x369 Func
	var_496_bool = var_367_bool == 0; // 0x36b Not
	if(var_496_bool == 0) goto Label_878; // 0x36c JumpB
	goto Label_907; // 0x36d Jump
	
Label_907:
	var_497_bool = 0; // 0x38b PushB
	SetAttackState(var_497_bool); // 0x38c Func
	var_498_string = "all"; // 0x38e PushS
	var_499_string = "attack_end"; // 0x38f PushS
	var_500_int = var_499_string + var_366_int; // 0x390 Add
	PlayAnimation(var_498_string, var_500_int); // 0x391 Func
	var_501_bool = 0; // 0x393 PushV
	func_1143(var_501_bool); // 0x394 NEW_2
	if(var_501_bool == 0) goto Label_925; // 0x396 JumpB
	var_502_bool = 0; var_503_float = 0; // 0x397 PushV
	var_503_float = 0.75; // 0x398 MovF
	func_927(var_502_bool, var_503_float); // 0x399 NEW_2
	StopAsync(); // 0x39b Func
	
Label_925:
	var_360_bool = 1; // 0x39d MovB
	return 8; // 0x39e Return
	
Label_878:
	func_2128(); // 0x36f NEW_2
	var_511_string = "all"; // 0x371 PushS
	PlayAnimation(var_511_string, var_369_string); // 0x372 Func
	WaitForAnimEnd(); // 0x374 Func
	func_1129(var_369_string); // 0x377 NEW_2
	var_512_bool = 0; var_513_object = Obj(); // 0x379 PushV
	var_513_object = var_0_object; // 0x37a MovT
	func_1713(var_512_bool, var_513_object); // 0x37b NEW_2
	var_514_bool = var_512_bool == 0; // 0x37d Not
	if(var_514_bool == 0) goto Label_899; // 0x37e JumpB
	StopAsync(); // 0x37f Func
	var_360_bool = 0; // 0x381 MovB
	return 8; // 0x382 Return
	
Label_899:
	var_515_float = 0; var_516_int = 0; // 0x383 PushV
	var_515_float = var_361_float; // 0x384 Mov
	var_516_int = var_366_int; // 0x385 Mov
	func_751(var_369_string, var_515_float, var_516_int); // 0x386 NEW_2
	var_517_int = 1; // 0x388 PushI
	var_368_int = var_368_int + var_517_int; // 0x389 Add2
	goto Label_867; // 0x38a Jump
}


func_304(var_0_object, var_1_object, var_2_object, var_3_string, var_18_bool, var_20_float, var_21_float)
{
	var_22_bool = 0; // 0x131 PushV
	func_1874(var_22_bool); // 0x132 NEW_2
	var_25_bool = var_22_bool == 0; // 0x134 Not
	if(var_25_bool == 0) goto Label_311; // 0x135 JumpB
	return 0; // 0x136 Return
	
Label_311:
	var_26_string = "player"; // 0x137 PushS
	FindActor(var_18_bool, var_26_string); // 0x138 Func
	var_2_object = 0; // 0x13a TMovB
	var_3_string = 0; // 0x13b TMovB
	var_0_object = var_20_float; // 0x13c TMov
	var_1_object = var_21_float; // 0x13d TMov
	var_27_int = 10; // 0x13e PushI
	var_28_float = 1.0; // 0x13f PushF
	SetTimer(var_27_int, var_28_float); // 0x140 Func
	func_383(); // 0x143 NEW_2
	var_80_bool = var_3_string == 0; // 0x145 Not
	if(var_80_bool == 0) goto Label_330; // 0x146 JumpB
	var_81_int = 10; // 0x147 PushI
	KillTimer(var_81_int); // 0x148 Func
	
Label_330:
	return 0; // 0x14a Return
}


func_1849(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x739 PushV
	GetScene(var_32_object); // 0x73a Func
	var_34_string = "scripted"; // 0x73c PushS
	var_35_string = "blood_dir.xml"; // 0x73d PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x73e Func
	var_36_object = Obj(); // 0x740 PushV
	var_36_object = var_25_object; // 0x741 Mov
	func_1737(var_36_object); // 0x742 NEW_2
	return 4; // 0x744 Return
}


func_1863()
{
	var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); // 0x747 PushV
	GetPosition(var_249_cvector); // 0x748 ObjFunc
	GetPosition(var_250_cvector); // 0x74a Func
	var_251_cvector = var_249_cvector - var_250_cvector; // 0x74c Sub2
	var_252_float = GetByIndex(var_251_cvector, 0); // 0x74d PushE
	var_253_float = GetByIndex(var_251_cvector, 2); // 0x74e PushE
	RotateAsync(var_252_float, var_253_float); // 0x74f Func
	return 6; // 0x751 Return
}


func_331(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0; // 0x14b PushV
	var_25_bool = var_4_bool == 0; // 0x14c NullEq
	if(var_25_bool == 0) goto Label_336; // 0x14d JumpB
	var_22_bool = 0; // 0x14e MovB
	return 2; // 0x14f Return
	
Label_336:
	var_26_float = 0; var_27_object = Obj(); // 0x150 PushV
	var_27_object = var_4_bool; // 0x151 MovT
	func_1574(var_27_object); // 0x152 NEW_2
	var_24_float = sqrt(var_26_float); // 0x154 Sqrt2
	var_34_object = var_2_object; // 0x155 PushT
	if(var_34_object == 0) goto Label_344; // 0x156 JumpB
	var_24_float = var_24_float - var_1_object; // 0x157 Sub2
	
Label_344:
	var_22_bool = var_24_float < var_0_object; // 0x158 LT2
	return 2; // 0x159 Return
}


func_1356(var_0_object, var_1_object, var_27_int)
{
	var_28_int = 0; // 0x54d PushI
	var_29_bool = var_27_int != var_28_int; // 0x54e Neq
	if(var_29_bool == 0) goto Label_1361; // 0x54f JumpB
	return 0; // 0x550 Return
	
Label_1361:
	var_30_bool = 0; var_31_object = Obj(); // 0x551 PushV
	var_31_object = var_1_object; // 0x552 MovT
	func_1394(var_30_bool, var_31_object); // 0x553 NEW_2
	var_66_bool = var_30_bool == 0; // 0x555 Not
	if(var_66_bool == 0) goto Label_1368; // 0x556 JumpB
	var_0_object = 1; // 0x557 TMovB
	
Label_1368:
	var_67_int = 0; // 0x558 PushI
	KillTimer(var_67_int); // 0x559 Func
	Stop(); // 0x55b Func
	return 0; // 0x55d Return
}


func_1874(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x752 PushV
	IsLoaded(var_24_bool); // 0x753 Func
	var_22_bool = var_24_bool; // 0x755 Mov
	return 2; // 0x756 Return
}


func_1879(var_542_bool, var_544_float)
{
	var_545_float = 0; var_546_cvector = CVector(0,0,0); var_547_cvector = CVector(0,0,0); var_548_cvector = CVector(0,0,0); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_bool = 0; var_553_bool = 0; var_554_float = 0; var_555_cvector = CVector(0,0,0); var_556_cvector = CVector(0,0,0); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_bool = 0; var_562_bool = 0; // 0x757 PushV
	GetPosition(var_555_cvector); // 0x758 ObjFunc
	GetEyesHeight(var_554_float); // 0x75a ObjFunc
	var_563_float = GetByIndex(var_555_cvector, 1); // 0x75c PushE
	var_563_float = var_563_float + var_554_float; // 0x75d Add2
	SetByIndex(var_555_cvector, 1) = var_563_float; // 0x75e PopE
	GetPosition(var_556_cvector); // 0x75f Func
	GetEyesHeight(var_554_float); // 0x761 Func
	var_564_float = GetByIndex(var_556_cvector, 1); // 0x763 PushE
	var_564_float = var_564_float + var_554_float; // 0x764 Add2
	SetByIndex(var_556_cvector, 1) = var_564_float; // 0x765 PopE
	var_557_cvector = var_555_cvector - var_556_cvector; // 0x766 Sub2
	var_565_float = GetByIndex(var_557_cvector, 1); // 0x767 PushE
	var_565_float = 0; // 0x768 MovI
	SetByIndex(var_557_cvector, 1) = var_565_float; // 0x769 PopE
	var_566_int = var_557_cvector | var_557_cvector; // 0x76a Or
	var_567_float = sqrt(var_566_int); // 0x76b Sqrt
	var_557_cvector = var_557_cvector / var_557_cvector; // 0x76c Div2
	var_558_cvector = -var_557_cvector; // 0x76d Neg2
	var_568_float = var_557_cvector * var_544_float; // 0x76e Mult
	var_569_cvector = CVector(0,0,0); var_570_cvector = CVector(0,0,0); // 0x76f PushV
	var_571_cvector = CVector(0.0, 1.0, 0.0); // 0x770 PushVec
	var_570_cvector = var_558_cvector ^ var_571_cvector; // 0x771 Xor2
	func_2062(var_569_cvector, var_570_cvector); // 0x772 NEW_2
	var_577_int = 25; // 0x774 PushI
	var_578_float = var_569_cvector * var_577_int; // 0x775 Mult
	var_579_int = var_568_float + var_578_float; // 0x776 Add
	var_580_cvector = CVector(0.0, 10.0, 0.0); // 0x777 PushVec
	var_559_cvector = var_579_int - var_580_cvector; // 0x778 Sub2
	var_560_cvector = var_556_cvector + var_559_cvector; // 0x779 Add2
	IsOverrideActive(var_561_bool); // 0x77a Func
	var_581_bool = var_561_bool; // 0x77c Push
	if(var_581_bool == 0) goto Label_1920; // 0x77d JumpB
	var_542_bool = 0; // 0x77e MovB
	return 18; // 0x77f Return
	
Label_1920:
	StopWorld(); // 0x780 Func
	var_582_bool = 1; // 0x782 PushB
	CameraTransit(var_560_cvector, var_558_cvector, var_582_bool); // 0x783 Func
	var_583_float = GetByIndex(var_559_cvector, 0); // 0x785 PushE
	var_584_float = GetByIndex(var_559_cvector, 2); // 0x786 PushE
	Rotate(var_583_float, var_584_float); // 0x787 Func
	var_585_bool = 0; // 0x789 PushV
	func_2248(var_585_bool); // 0x78a NEW_2
	if(var_585_bool == 0) goto Label_1934; // 0x78c JumpB
	goto Label_1942; // 0x78d Jump
	
Label_1942:
	CameraWaitForPlayFinish(); // 0x796 Func
	ResumeWorld(); // 0x798 Func
	var_542_bool = 1; // 0x79a MovB
	return 18; // 0x79b Return
	
Label_1934:
	var_586_string = "head"; // 0x78e PushS
	HasAnimationTrack(var_562_bool, var_586_string); // 0x78f Func
	var_587_bool = var_562_bool; // 0x791 Push
	if(var_587_bool == 0) goto Label_1942; // 0x792 JumpB
	var_588_string = "head"; // 0x793 PushS
	LookAsyncCamera(var_588_string); // 0x794 Func
}


func_1378(var_0_object)
{
	var_0_object = 1; // 0x562 TMovB
	var_23_int = 0; // 0x563 PushI
	KillTimer(var_23_int); // 0x564 Func
	Stop(); // 0x566 Func
	return 0; // 0x568 Return
}


func_369(var_2_object, var_3_string)
{
	func_464(); // 0x172 NEW_2
	var_24_int = 10; // 0x174 PushI
	KillTimer(var_24_int); // 0x175 Func
	var_25_object = var_2_object; // 0x177 PushT
	if(var_25_object == 0) goto Label_381; // 0x178 JumpB
	var_26_string = "head"; // 0x179 PushS
	UnlookAsync(var_26_string); // 0x17a Func
	var_2_object = 0; // 0x17c TMovB
	
Label_381:
	var_3_string = 1; // 0x17d TMovB
	return 0; // 0x17e Return
}


func_1394(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0x573 PushV
	var_33_object = var_31_object; // 0x574 Mov
	func_1713(var_32_bool, var_33_object); // 0x575 NEW_2
	var_30_bool = var_32_bool; // 0x576 Mov
	return 0; // 0x578 Return
}


func_1401(var_211_string)
{
	var_211_string = "walk"; // 0x579 MovS
	return 0; // 0x57a Return
}


func_1403(var_212_string)
{
	var_212_string = "run"; // 0x57b MovS
	return 0; // 0x57c Return
}


func_1405(var_46_object)
{
	EventDisable(0); // 0x57e EventDisable
	var_47_object = Obj(); // 0x57f PushV
	var_47_object = var_46_object; // 0x580 Mov
	func_1430(var_47_object); // 0x581 NEW_2
	var_127_int = 50; // 0x583 PushI
	var_128_int = 40; // 0x584 PushI
	SetRTEnvelope(var_127_int, var_128_int); // 0x585 Func
	EventEnable(0); // 0x587 EventEnable
	
Label_1416:
	Hold(); // 0x588 Func
	goto Label_1416; // 0x58a Jump
}


func_383()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; // 0x17f PushV
	WaitForAnimEnd(); // 0x180 Func
	var_43_bool = 0; // 0x182 PushV
	func_1874(var_43_bool); // 0x183 NEW_2
	var_44_bool = var_43_bool == 0; // 0x185 Not
	if(var_44_bool == 0) goto Label_392; // 0x186 JumpB
	return 14; // 0x187 Return
	
Label_392:
	var_45_int = 0; // 0x188 PushV
	func_2146(var_45_int); // 0x189 NEW_2
	var_36_int = var_45_int; // 0x18a Mov
	var_37_int = 0; // 0x18c MovI
	
Label_397:
	var_58_bool = 0; // 0x18d PushV
	var_58_bool = 0; // 0x18e MovB
	var_59_int = 5; // 0x18f PushI
	var_60_bool = var_37_int < var_59_int; // 0x190 LT
	if(var_60_bool == 0) goto Label_407; // 0x191 JumpB
	var_61_bool = 0; // 0x192 PushV
	func_1874(var_61_bool); // 0x193 NEW_2
	if(var_61_bool == 0) goto Label_407; // 0x195 JumpB
	var_58_bool = 1; // 0x196 MovB
	
Label_407:
	if(var_58_bool == 0) goto Label_459; // 0x197 JumpB
	var_62_int = 3; // 0x198 PushI
	irand(var_38_int, var_62_int); // 0x199 Func
	var_63_int = 0; // 0x19b PushI
	var_64_bool = var_38_int == var_63_int; // 0x19c Eq
	if(var_64_bool == 0) goto Label_431; // 0x19d JumpB
	var_65_int = var_36_int; // 0x19e Push
	if(var_65_int == 0) goto Label_430; // 0x19f JumpB
	irand(var_39_int, var_36_int); // 0x1a0 Func
	var_66_string = "all"; // 0x1a2 PushS
	var_67_string = ""; var_68_int = 0; // 0x1a3 PushV
	var_68_int = var_39_int; // 0x1a4 Mov
	func_2139(var_67_string, var_68_int); // 0x1a5 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x1a7 Func
	WaitForAnimEnd(var_40_bool); // 0x1a9 Func
	var_69_bool = var_40_bool == 0; // 0x1ab Not
	if(var_69_bool == 0) goto Label_430; // 0x1ac JumpB
	goto Label_459; // 0x1ad Jump
	
Label_459:
	ResetAAS(); // 0x1cb Func
	return 14; // 0x1cd Return
	
Label_430:
	goto Label_448; // 0x1ae Jump
	
Label_448:
	var_70_bool = 0; // 0x1c0 PushV
	func_462(var_70_bool); // 0x1c1 NEW_2
	var_71_bool = var_70_bool == 0; // 0x1c3 Not
	if(var_71_bool == 0) goto Label_454; // 0x1c4 JumpB
	goto Label_459; // 0x1c5 Jump
	
Label_454:
	ResetAAS(); // 0x1c6 Func
	var_72_int = 1; // 0x1c8 PushI
	var_37_int = var_37_int + var_72_int; // 0x1c9 Add2
	goto Label_397; // 0x1ca Jump
	
Label_431:
	var_73_int = 1; // 0x1af PushI
	var_74_bool = var_38_int == var_73_int; // 0x1b0 Eq
	if(var_74_bool == 0) goto Label_445; // 0x1b1 JumpB
	var_75_int = 4; // 0x1b2 PushI
	rand(var_41_float, var_75_int); // 0x1b3 Func
	var_76_int = 1; // 0x1b5 PushI
	var_77_int = var_41_float + var_76_int; // 0x1b6 Add
	Sleep(var_77_int, var_42_bool); // 0x1b7 Func
	var_78_bool = var_42_bool == 0; // 0x1b9 Not
	if(var_78_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_459; // 0x1bb Jump
	
Label_444:
	goto Label_448; // 0x1bc Jump
	
Label_445:
	var_79_int = var_37_int; // 0x1bd Push
	if(var_79_int == 0) goto Label_448; // 0x1be JumpB
	goto Label_459; // 0x1bf Jump
}


func_1430(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); // 0x596 PushV
	var_68_bool = var_47_object == 0; // 0x597 NullEq
	if(var_68_bool == 0) goto Label_1438; // 0x598 JumpB
	var_69_string = ""; // 0x599 PushV
	var_69_string = "fdie"; // 0x59a MovS
	func_1521(var_69_string); // 0x59b NEW_2
	goto Label_1520; // 0x59d Jump
	
Label_1520:
	return 20; // 0x5f0 Return
	
Label_1438:
	GetPosition(var_58_cvector); // 0x59e ObjFunc
	GetPosition(var_59_cvector); // 0x5a0 Func
	GetDirection(var_60_cvector); // 0x5a2 Func
	var_61_cvector = var_59_cvector - var_58_cvector; // 0x5a4 Sub2
	var_101_float = GetByIndex(var_61_cvector, 0); // 0x5a5 PushE
	var_102_float = GetByIndex(var_60_cvector, 0); // 0x5a6 PushE
	var_103_float = var_101_float * var_102_float; // 0x5a7 Mult
	var_104_float = GetByIndex(var_61_cvector, 2); // 0x5a8 PushE
	var_105_float = GetByIndex(var_60_cvector, 2); // 0x5a9 PushE
	var_106_float = var_104_float * var_105_float; // 0x5aa Mult
	var_107_int = var_103_float + var_106_float; // 0x5ab Add
	var_108_int = 0; // 0x5ac PushI
	var_109_bool = var_107_int >= var_108_int; // 0x5ad GE
	if(var_109_bool == 0) goto Label_1457; // 0x5ae JumpB
	var_62_string = "fdie"; // 0x5af MovS
	goto Label_1458; // 0x5b0 Jump
	
Label_1458:
	RemoveRTEnvelope(); // 0x5b2 Func
	SetDeathState(); // 0x5b4 Func
	Stop(); // 0x5b6 Func
	StopAsync(); // 0x5b8 Func
	var_63_object = var_47_object; // 0x5ba Mov
	var_110_string = "GetScriptProperty"; // 0x5bb PushS
	var_111_int = 2; // 0x5bc PushI
	var_112_bool = IsFuncExist(var_47_object, var_110_string, var_111_int); // 0x5bd FuncExist
	if(var_112_bool == 0) goto Label_1482; // 0x5be JumpB
	var_113_string = "Owner"; // 0x5bf PushS
	HasScriptProperty(var_64_bool, var_113_string); // 0x5c0 ObjFunc
	var_114_bool = var_64_bool; // 0x5c2 Push
	if(var_114_bool == 0) goto Label_1482; // 0x5c3 JumpB
	var_115_string = "Owner"; // 0x5c4 PushS
	GetScriptProperty(var_63_object, var_115_string); // 0x5c5 ObjFunc
	var_116_bool = var_63_object == 0; // 0x5c7 NullEq
	if(var_116_bool == 0) goto Label_1482; // 0x5c8 JumpB
	var_63_object = var_47_object; // 0x5c9 Mov
	
Label_1482:
	var_117_string = "@GetEyesHeight"; // 0x5ca PushS
	var_118_int = 1; // 0x5cb PushI
	var_119_bool = IsFuncExist(var_63_object, var_117_string, var_118_int); // 0x5cc FuncExist
	if(var_119_bool == 0) goto Label_1497; // 0x5cd JumpB
	GetEyesHeight(var_66_float); // 0x5ce ObjFunc
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x5d0 MovV
	var_120_float = GetByIndex(var_67_cvector, 1); // 0x5d1 PushE
	var_120_float = var_66_float; // 0x5d2 Mov
	SetByIndex(var_67_cvector, 1) = var_120_float; // 0x5d3 PopE
	var_121_string = "head"; // 0x5d4 PushS
	LookAsync(var_47_object, var_121_string, var_67_cvector); // 0x5d5 Func
	var_65_bool = 1; // 0x5d7 MovB
	goto Label_1498; // 0x5d8 Jump
	
Label_1498:
	var_122_string = ""; // 0x5da PushV
	var_122_string = var_62_string; // 0x5db Mov
	func_2015(var_122_string); // 0x5dc NEW_2
	var_123_string = "all"; // 0x5de PushS
	PlayAnimation(var_123_string, var_62_string); // 0x5df Func
	WaitForAnimEnd(); // 0x5e1 Func
	var_124_bool = var_65_bool; // 0x5e3 Push
	if(var_124_bool == 0) goto Label_1514; // 0x5e4 JumpB
	StopAsync(); // 0x5e5 Func
	var_125_string = "head"; // 0x5e7 PushS
	UnlookAsync(var_125_string); // 0x5e8 Func
	
Label_1514:
	var_126_string = "all"; // 0x5ea PushS
	LockAnimationEnd(var_126_string, var_62_string); // 0x5eb Func
	RemoveEnvelope(); // 0x5ed Func
	var_63_object = 0; // 0x5ef SetNull
	
Label_1497:
	var_65_bool = 0; // 0x5d9 MovB
	
Label_1457:
	var_62_string = "bdie"; // 0x5b1 MovS
}


func_1948()
{
	var_654_bool = 0; var_655_bool = 0; // 0x79c PushV
	var_656_bool = 1; // 0x79d PushB
	CameraSwitchToNormal(var_656_bool); // 0x79e Func
	var_657_bool = 0; // 0x7a0 PushV
	func_2248(var_657_bool); // 0x7a1 NEW_2
	if(var_657_bool == 0) goto Label_1957; // 0x7a3 JumpB
	goto Label_1965; // 0x7a4 Jump
	
Label_1965:
	return 2; // 0x7ad Return
	
Label_1957:
	var_658_string = "head"; // 0x7a5 PushS
	HasAnimationTrack(var_655_bool, var_658_string); // 0x7a6 Func
	var_659_bool = var_655_bool; // 0x7a8 Push
	if(var_659_bool == 0) goto Label_1965; // 0x7a9 JumpB
	var_660_string = "head"; // 0x7aa PushS
	UnlookAsync(var_660_string); // 0x7ab Func
}


func_927(var_502_bool, var_503_float)
{
	var_504_float = 0; var_505_bool = 0; var_506_float = 0; var_507_bool = 0; // 0x39f PushV
	rand(var_506_float); // 0x3a0 Func
	var_508_bool = var_506_float < var_503_float; // 0x3a2 LT
	if(var_508_bool == 0) goto Label_947; // 0x3a3 JumpB
	
Label_932:
	IsAnimationPlaying(var_507_bool); // 0x3a4 Func
	var_509_bool = var_507_bool == 0; // 0x3a6 Not
	if(var_509_bool == 0) goto Label_937; // 0x3a7 JumpB
	goto Label_946; // 0x3a8 Jump
	
Label_946:
	goto Label_952; // 0x3b2 Jump
	
Label_952:
	var_502_bool = 0; // 0x3b8 MovB
	return 4; // 0x3b9 Return
	
Label_937:
	var_510_bool = 0; // 0x3a9 PushV
	func_1025(var_510_bool); // 0x3aa NEW_2
	if(var_510_bool == 0) goto Label_943; // 0x3ac JumpB
	var_502_bool = 1; // 0x3ad MovB
	return 4; // 0x3ae Return
	
Label_943:
	sync(); // 0x3af Func
	goto Label_932; // 0x3b1 Jump
	
Label_947:
	WaitForAnimEnd(); // 0x3b3 Func
	func_1129(var_507_bool); // 0x3b6 NEW_2
}


func_1966(var_636_string)
{
	var_637_bool = 0; var_638_float = 0; var_639_float = 0; var_640_bool = 0; var_641_float = 0; var_642_float = 0; // 0x7ae PushV
	lshHasAnimation(var_640_bool, var_636_string); // 0x7af Func
	var_643_bool = var_640_bool; // 0x7b1 Push
	if(var_643_bool == 0) goto Label_1977; // 0x7b2 JumpB
	lshGetAnimTimes(var_636_string, var_641_float, var_642_float); // 0x7b3 Func
	var_644_bool = 0; // 0x7b5 PushB
	lshPlayAnimation(var_641_float, var_642_float, var_644_bool); // 0x7b6 Func
	goto Label_1981; // 0x7b8 Jump
	
Label_1981:
	return 6; // 0x7bd Return
	
Label_1977:
	var_645_string = "Can't find lsh animation : "; // 0x7b9 PushS
	var_646_int = var_645_string + var_636_string; // 0x7ba Add
	Trace(var_646_int); // 0x7bb Func
}


func_954(var_0_object, var_299_bool, var_300_float)
{
	var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_bool = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; // 0x3ba PushV
	
Label_955:
	IsAnimationPlaying(var_306_bool); // 0x3bb Func
	var_311_bool = var_306_bool == 0; // 0x3bd Not
	if(var_311_bool == 0) goto Label_960; // 0x3be JumpB
	goto Label_992; // 0x3bf Jump
	
Label_992:
	func_1129(var_310_float); // 0x3e1 NEW_2
	var_299_bool = 0; // 0x3e3 MovB
	return 10; // 0x3e4 Return
	
Label_960:
	var_312_bool = 0; // 0x3c0 PushV
	func_1025(var_312_bool); // 0x3c1 NEW_2
	if(var_312_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_299_bool = 1; // 0x3c4 MovB
	return 10; // 0x3c5 Return
	
Label_966:
	var_355_bool = 0; var_356_object = Obj(); // 0x3c6 PushV
	var_356_object = var_0_object; // 0x3c7 MovT
	func_1713(var_355_bool, var_356_object); // 0x3c8 NEW_2
	var_357_bool = var_355_bool == 0; // 0x3ca Not
	if(var_357_bool == 0) goto Label_974; // 0x3cb JumpB
	var_299_bool = 0; // 0x3cc MovB
	return 10; // 0x3cd Return
	
Label_974:
	GetPFPosition(var_307_cvector); // 0x3ce TObjFunc
	GetPFPosition(var_308_cvector); // 0x3d0 Func
	var_309_cvector = var_307_cvector - var_308_cvector; // 0x3d2 Sub2
	var_310_float = var_309_cvector | var_309_cvector; // 0x3d3 Or2
	var_358_float = var_300_float * var_300_float; // 0x3d4 Mult
	var_359_bool = var_310_float < var_358_float; // 0x3d5 LT
	if(var_359_bool == 0) goto Label_989; // 0x3d6 JumpB
	var_360_bool = 0; var_361_float = 0; // 0x3d7 PushV
	var_361_float = var_300_float; // 0x3d8 Mov
	func_790(var_310_float, var_360_bool, var_361_float); // 0x3d9 NEW_2
	var_299_bool = 1; // 0x3db MovB
	return 10; // 0x3dc Return
	
Label_989:
	sync(); // 0x3dd Func
	goto Label_955; // 0x3df Jump
}


func_1982(var_614_string, var_615_bool)
{
	var_618_bool = 0; var_619_float = 0; var_620_float = 0; var_621_bool = 0; var_622_float = 0; var_623_float = 0; // 0x7be PushV
	lshHasAnimation(var_621_bool, var_614_string); // 0x7bf Func
	var_624_bool = var_621_bool; // 0x7c1 Push
	if(var_624_bool == 0) goto Label_1992; // 0x7c2 JumpB
	lshGetAnimTimes(var_614_string, var_622_float, var_623_float); // 0x7c3 Func
	lshPlayAnimation(var_622_float, var_623_float, var_615_bool); // 0x7c5 Func
	goto Label_1996; // 0x7c7 Jump
	
Label_1996:
	return 6; // 0x7cc Return
	
Label_1992:
	var_625_string = "Can't find lsh animation : "; // 0x7c8 PushS
	var_626_int = var_625_string + var_614_string; // 0x7c9 Add
	Trace(var_626_int); // 0x7ca Func
}


func_1997(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x7cd PushV
	GetEyesHeight(var_26_float); // 0x7ce ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x7d0 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x7d1 PushE
	var_28_float = var_26_float; // 0x7d2 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x7d3 PopE
	var_29_string = "head"; // 0x7d4 PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x7d5 Func
	return 4; // 0x7d7 Return
}


func_462(var_70_bool)
{
	var_70_bool = 1; // 0x1ce MovB
	return 0; // 0x1cf Return
}


func_464()
{
	StopAnimation(); // 0x1d0 Func
	StopGroup0(); // 0x1d2 Func
	return 0; // 0x1d4 Return
}


func_469(var_64_object)
{
	
Label_470:
	var_71_object = Obj(); var_72_bool = 0; var_73_float = 0; // 0x1d6 PushV
	var_71_object = var_64_object; // 0x1d7 Mov
	var_72_bool = 1; // 0x1d8 MovB
	var_73_float = 180.0; // 0x1d9 MovF
	func_487(var_67_int, var_68_bool, var_69_float, var_70_int, var_64_object, var_71_object, var_72_bool, var_73_float); // 0x1da NEW_2
	var_534_int = 1; // 0x1dc PushI
	Sleep(var_534_int); // 0x1dd Func
	goto Label_470; // 0x1df Jump
}


func_2008()
{
	var_22_bool = 0; // 0x7d8 PushV
	func_2248(var_22_bool); // 0x7d9 NEW_2
	if(var_22_bool == 0) goto Label_2014; // 0x7db JumpB
	lshStopSpeech(); // 0x7dc Func
	
Label_2014:
	return 0; // 0x7de Return
}


func_2015(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x7df PushV
	IsExisting3DSound(var_79_bool, var_70_string); // 0x7e0 Func
	var_87_bool = var_79_bool == 0; // 0x7e2 Not
	if(var_87_bool == 0) goto Label_2040; // 0x7e3 JumpB
	var_80_int = 0; // 0x7e4 MovI
	
Label_2021:
	var_88_int = 1; // 0x7e5 PushI
	var_89_int = var_80_int + var_88_int; // 0x7e6 Add
	var_90_int = var_70_string + var_89_int; // 0x7e7 Add
	IsExisting3DSound(var_81_bool, var_90_int); // 0x7e8 Func
	var_91_bool = var_81_bool == 0; // 0x7ea Not
	if(var_91_bool == 0) goto Label_2029; // 0x7eb JumpB
	goto Label_2032; // 0x7ec Jump
	
Label_2032:
	var_92_bool = var_80_int == 0; // 0x7f0 Not
	if(var_92_bool == 0) goto Label_2035; // 0x7f1 JumpB
	return 16; // 0x7f2 Return
	
Label_2035:
	irand(var_82_int, var_80_int); // 0x7f3 Func
	var_93_int = 1; // 0x7f5 PushI
	var_94_int = var_82_int + var_93_int; // 0x7f6 Add
	var_70_string = var_70_string + var_94_int; // 0x7f7 Add2
	
Label_2040:
	Is3DSoundLoaded(var_83_bool, var_70_string); // 0x7f8 Func
	var_95_bool = var_83_bool; // 0x7fa Push
	if(var_95_bool == 0) goto Label_2055; // 0x7fb JumpB
	GetEyesHeight(var_84_float); // 0x7fc Func
	GetDirection(var_85_cvector); // 0x7fe Func
	var_96_int = 50; // 0x800 PushI
	var_86_cvector = var_85_cvector * var_96_int; // 0x801 Mult2
	var_97_float = GetByIndex(var_86_cvector, 1); // 0x802 PushE
	var_97_float = var_97_float + var_84_float; // 0x803 Add2
	SetByIndex(var_86_cvector, 1) = var_97_float; // 0x804 PopE
	PlayGlobalSound(var_70_string, var_86_cvector); // 0x805 Func
	
Label_2055:
	return 16; // 0x807 Return
	
Label_2029:
	var_98_int = 1; // 0x7ed PushI
	var_80_int = var_80_int + var_98_int; // 0x7ee Add2
	goto Label_2021; // 0x7ef Jump
}


func_481(var_408_float)
{
	var_408_float = 0.1; // 0x1e2 MovF
	return 0; // 0x1e3 Return
}


func_484(var_415_int)
{
	var_415_int = 0; // 0x1e5 MovI
	return 0; // 0x1e6 Return
}


func_997(var_0_object, var_314_bool)
{
	var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_float = 0; var_324_float = 0; // 0x3e5 PushV
	var_325_bool = 0; var_326_object = Obj(); // 0x3e6 PushV
	var_326_object = var_0_object; // 0x3e7 MovT
	func_1713(var_325_bool, var_326_object); // 0x3e8 NEW_2
	var_327_bool = var_325_bool == 0; // 0x3ea Not
	if(var_327_bool == 0) goto Label_1006; // 0x3eb JumpB
	var_314_bool = 0; // 0x3ec MovB
	return 10; // 0x3ed Return
	
Label_1006:
	var_328_bool = 0; // 0x3ee PushV
	func_1086(var_324_float, var_328_bool); // 0x3ef NEW_2
	if(var_328_bool == 0) goto Label_1023; // 0x3f1 JumpB
	GetPFPosition(var_320_cvector); // 0x3f2 TObjFunc
	GetPFPosition(var_321_cvector); // 0x3f4 Func
	var_322_cvector = var_320_cvector - var_321_cvector; // 0x3f6 Sub2
	var_323_float = var_322_cvector | var_322_cvector; // 0x3f7 Or2
	GetAttackDistance(var_324_float); // 0x3f8 TObjFunc
	var_329_int = 50; // 0x3fa PushI
	var_324_float = var_324_float + var_329_int; // 0x3fb Add2
	var_330_float = var_324_float * var_324_float; // 0x3fc Mult
	var_314_bool = var_323_float <= var_330_float; // 0x3fd LE2
	return 10; // 0x3fe Return
	
Label_1023:
	var_314_bool = 0; // 0x3ff MovB
	return 10; // 0x400 Return
}


func_487(var_0_object, var_3_string, var_5_int, var_71_object, var_72_bool, var_73_float, var_148_bool, var_240_bool)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_float = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_float = 0; // 0x1e7 PushV
	func_716(var_93_cvector, var_94_bool, var_95_float); // 0x1e9 NEW_2
	var_5_int = 0; // 0x1eb TMovI
	var_118_string = "@GetAttackDistance"; // 0x1ec PushS
	var_119_int = 1; // 0x1ed PushI
	var_120_bool = IsFuncExist(var_71_object, var_118_string, var_119_int); // 0x1ee FuncExist
	if(var_120_bool == 0) goto Label_501; // 0x1ef JumpB
	GetAttackDistance(var_85_float); // 0x1f0 ObjFunc
	var_121_int = 50; // 0x1f2 PushI
	var_85_float = var_85_float + var_121_int; // 0x1f3 Add2
	goto Label_502; // 0x1f4 Jump
	
Label_502:
	var_122_int = 150; // 0x1f6 PushI
	var_123_bool = var_85_float >= var_122_int; // 0x1f7 GE
	if(var_123_bool == 0) goto Label_506; // 0x1f8 JumpB
	var_85_float = 150; // 0x1f9 MovI
	
Label_506:
	var_3_string = 0; // 0x1fa TMovB
	var_0_object = var_71_object; // 0x1fb TMov
	IsPlayerActor(var_0_object, var_88_bool); // 0x1fc Func
	var_124_bool = var_88_bool; // 0x1fe Push
	if(var_124_bool == 0) goto Label_520; // 0x1ff JumpB
	var_125_string = "attack"; // 0x200 PushS
	PlayGlobalMusic(var_125_string); // 0x201 Func
	var_126_object = Obj(); // 0x203 PushV
	func_2056(var_126_object); // 0x204 NEW_2
	SendPlayerEnemy(var_71_object, var_126_object); // 0x206 Func
	
Label_520:
	var_129_bool = var_72_bool; // 0x208 Push
	if(var_129_bool == 0) goto Label_524; // 0x209 JumpB
	var_89_bool = 0; // 0x20a MovB
	goto Label_525; // 0x20b Jump
	
Label_525:
	var_130_float = 400.0; // 0x20d PushF
	var_90_float = var_130_float + var_85_float; // 0x20e Add2
	
Label_527:
	var_131_bool = 0; // 0x20f PushV
	var_131_bool = 0; // 0x210 MovB
	var_132_bool = 0; var_133_object = Obj(); // 0x211 PushV
	var_133_object = var_0_object; // 0x212 MovT
	func_1713(var_132_bool, var_133_object); // 0x213 NEW_2
	if(var_132_bool == 0) goto Label_537; // 0x215 JumpB
	var_134_bool = var_3_string == 0; // 0x216 Not
	if(var_134_bool == 0) goto Label_537; // 0x217 JumpB
	var_131_bool = 1; // 0x218 MovB
	
Label_537:
	if(var_131_bool == 0) goto Label_699; // 0x219 JumpB
	func_1129(var_95_float); // 0x21b NEW_2
	GetPFPosition(var_86_cvector); // 0x21d TObjFunc
	GetPFPosition(var_87_cvector); // 0x21f Func
	var_91_cvector = var_86_cvector - var_87_cvector; // 0x221 Sub2
	var_92_float = var_91_cvector | var_91_cvector; // 0x222 Or2
	var_140_float = var_90_float * var_90_float; // 0x223 Mult
	var_141_bool = var_92_float >= var_140_float; // 0x224 GE
	if(var_141_bool == 0) goto Label_565; // 0x225 JumpB
	var_142_bool = 0; var_143_object = Obj(); var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_bool = 0; // 0x226 PushV
	var_143_object = var_0_object; // 0x227 MovT
	var_144_float = var_85_float; // 0x228 Mov
	var_145_float = 10000.0; // 0x229 MovF
	var_146_bool = 1; // 0x22a MovB
	var_147_bool = 0; // 0x22b MovB
	TaskCall(4); // 0x22c TaskCall
	func_1149(var_150_bool, var_142_bool, var_143_object, var_144_float, var_145_float, var_146_bool, var_147_bool); // 0x22d NEW_2
	TaskReturn(); // 0x22e TaskReturn
	var_225_bool = var_148_bool == 0; // 0x230 Not
	if(var_225_bool == 0) goto Label_563; // 0x231 JumpB
	goto Label_699; // 0x232 Jump
	
Label_699:
	WaitForAnimEnd(); // 0x2bb Func
	var_226_string = var_3_string; // 0x2bd PushT
	if(var_226_string == 0) goto Label_704; // 0x2be JumpB
	return 22; // 0x2bf Return
	
Label_704:
	var_227_string = "all"; // 0x2c0 PushS
	var_228_string = "attack_off"; // 0x2c1 PushS
	PlayAnimation(var_227_string, var_228_string); // 0x2c2 Func
	WaitForAnimEnd(); // 0x2c4 Func
	var_229_bool = var_88_bool; // 0x2c6 Push
	if(var_229_bool == 0) goto Label_715; // 0x2c7 JumpB
	var_230_float = 2.0; // 0x2c8 PushF
	Sleep(var_230_float); // 0x2c9 Func
	
Label_715:
	return 22; // 0x2cb Return
	
Label_563:
	var_89_bool = 0; // 0x233 MovB
	goto Label_698; // 0x234 Jump
	
Label_698:
	goto Label_527; // 0x2ba Jump
	
Label_565:
	var_231_float = var_73_float * var_73_float; // 0x235 Mult
	var_232_bool = var_92_float >= var_231_float; // 0x236 GE
	if(var_232_bool == 0) goto Label_690; // 0x237 JumpB
	GetPFPosition(var_93_cvector); // 0x238 TObjFunc
	CanReachByPF(var_94_bool, var_93_cvector); // 0x23a Func
	var_233_bool = var_94_bool == 0; // 0x23c Not
	if(var_233_bool == 0) goto Label_589; // 0x23d JumpB
	var_234_bool = 0; var_235_object = Obj(); var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_bool = 0; // 0x23e PushV
	var_235_object = var_0_object; // 0x23f MovT
	var_236_float = var_85_float; // 0x240 Mov
	var_237_float = 10000.0; // 0x241 MovF
	var_238_bool = 1; // 0x242 MovB
	var_239_bool = 0; // 0x243 MovB
	TaskCall(4); // 0x244 TaskCall
	func_1149(var_242_bool, var_234_bool, var_235_object, var_236_float, var_237_float, var_238_bool, var_239_bool); // 0x245 NEW_2
	TaskReturn(); // 0x246 TaskReturn
	var_243_bool = var_240_bool == 0; // 0x248 Not
	if(var_243_bool == 0) goto Label_587; // 0x249 JumpB
	goto Label_699; // 0x24a Jump
	
Label_587:
	var_89_bool = 0; // 0x24b MovB
	goto Label_527; // 0x24c Jump
	
Label_589:
	var_244_bool = var_89_bool == 0; // 0x24d Not
	if(var_244_bool == 0) goto Label_614; // 0x24e JumpB
	var_245_object = Obj(); // 0x24f PushV
	var_245_object = var_0_object; // 0x250 MovT
	func_1863(); // 0x251 NEW_2
	var_254_string = "all"; // 0x253 PushS
	var_255_string = "attack_on"; // 0x254 PushS
	PlayAnimation(var_254_string, var_255_string); // 0x255 Func
	WaitForAnimEnd(); // 0x257 Func
	func_1129(var_95_float); // 0x25a NEW_2
	StopAsync(); // 0x25c Func
	var_89_bool = 1; // 0x25e MovB
	var_256_bool = 0; var_257_object = Obj(); // 0x25f PushV
	var_257_object = var_0_object; // 0x260 MovT
	func_1713(var_256_bool, var_257_object); // 0x261 NEW_2
	var_258_bool = var_256_bool == 0; // 0x263 Not
	if(var_258_bool == 0) goto Label_614; // 0x264 JumpB
	goto Label_699; // 0x265 Jump
	
Label_614:
	rand(var_95_float); // 0x266 Func
	var_259_bool = 0; // 0x268 PushV
	var_259_bool = 1; // 0x269 MovB
	var_260_float = 0.25; // 0x26a PushF
	var_261_bool = var_95_float < var_260_float; // 0x26b LT
	if(var_261_bool == 0) goto Label_626; // 0x26c JumpB
	var_262_bool = 0; // 0x26d PushV
	func_1086(var_259_bool, var_262_bool); // 0x26e NEW_2
	if(var_262_bool == 0) goto Label_626; // 0x270 JumpB
	var_259_bool = 0; // 0x271 MovB
	
Label_626:
	if(var_259_bool == 0) goto Label_643; // 0x272 JumpB
	Face(var_0_object); // 0x273 Func
	func_1136(); // 0x276 NEW_2
	var_297_string = "all"; // 0x278 PushS
	var_298_string = "attack_stay"; // 0x279 PushS
	PlayAnimation(var_297_string, var_298_string); // 0x27a Func
	var_299_bool = 0; var_300_float = 0; // 0x27c PushV
	var_300_float = var_73_float; // 0x27d Mov
	func_954(var_95_float, var_299_bool, var_300_float); // 0x27e NEW_2
	StopAsync(); // 0x280 Func
	goto Label_689; // 0x282 Jump
	
Label_689:
	goto Label_698; // 0x2b1 Jump
	
Label_643:
	Face(var_0_object); // 0x283 Func
	var_518_string = "all"; // 0x285 PushS
	var_519_string = "fjump"; // 0x286 PushS
	PlayAnimation(var_518_string, var_519_string); // 0x287 Func
	WaitForAnimEnd(); // 0x289 Func
	func_1129(var_95_float); // 0x28c NEW_2
	var_520_cvector = CVector(0.0, 0.0, 0.0); // 0x28e PushVec
	SetSpeed(var_520_cvector); // 0x28f Func
	Stop(); // 0x291 Func
	StopAsync(); // 0x293 Func
	var_521_bool = 0; // 0x295 PushV
	func_1086(var_95_float, var_521_bool); // 0x296 NEW_2
	var_522_bool = var_521_bool == 0; // 0x298 Not
	if(var_522_bool == 0) goto Label_689; // 0x299 JumpB
	var_523_bool = 0; var_524_object = Obj(); // 0x29a PushV
	var_524_object = var_0_object; // 0x29b MovT
	func_1713(var_523_bool, var_524_object); // 0x29c NEW_2
	var_525_bool = var_523_bool == 0; // 0x29e Not
	if(var_525_bool == 0) goto Label_673; // 0x29f JumpB
	goto Label_699; // 0x2a0 Jump
	
Label_673:
	GetPFPosition(var_86_cvector); // 0x2a1 TObjFunc
	GetPFPosition(var_87_cvector); // 0x2a3 Func
	var_91_cvector = var_86_cvector - var_87_cvector; // 0x2a5 Sub2
	var_92_float = var_91_cvector | var_91_cvector; // 0x2a6 Or2
	var_526_float = var_73_float * var_73_float; // 0x2a7 Mult
	var_527_bool = var_92_float < var_526_float; // 0x2a8 LT
	if(var_527_bool == 0) goto Label_689; // 0x2a9 JumpB
	var_528_bool = 0; var_529_float = 0; // 0x2aa PushV
	var_529_float = var_73_float; // 0x2ab Mov
	func_790(var_95_float, var_528_bool, var_529_float); // 0x2ac NEW_2
	var_530_bool = var_528_bool == 0; // 0x2ae Not
	if(var_530_bool == 0) goto Label_689; // 0x2af JumpB
	goto Label_699; // 0x2b0 Jump
	
Label_690:
	var_531_bool = 0; var_532_float = 0; // 0x2b2 PushV
	var_532_float = var_73_float; // 0x2b3 Mov
	func_790(var_95_float, var_531_bool, var_532_float); // 0x2b4 NEW_2
	var_533_bool = var_531_bool == 0; // 0x2b6 Not
	if(var_533_bool == 0) goto Label_697; // 0x2b7 JumpB
	goto Label_699; // 0x2b8 Jump
	
Label_697:
	var_89_bool = 1; // 0x2b9 MovB
	
Label_524:
	var_89_bool = 1; // 0x20c MovB
	
Label_501:
	var_85_float = var_73_float; // 0x1f5 Mov
}


func_1521(var_69_string)
{
	RemoveRTEnvelope(); // 0x5f2 Func
	SetDeathState(); // 0x5f4 Func
	Stop(); // 0x5f6 Func
	StopAsync(); // 0x5f8 Func
	StopSecondaryAnimation(); // 0x5fa Func
	var_70_string = ""; // 0x5fc PushV
	var_70_string = var_69_string; // 0x5fd Mov
	func_2015(var_70_string); // 0x5fe NEW_2
	var_99_string = "all"; // 0x600 PushS
	PlayAnimation(var_99_string, var_69_string); // 0x601 Func
	WaitForAnimEnd(); // 0x603 Func
	var_100_string = "all"; // 0x605 PushS
	LockAnimationEnd(var_100_string, var_69_string); // 0x606 Func
	RemoveEnvelope(); // 0x608 Func
	return 0; // 0x60a Return
}


