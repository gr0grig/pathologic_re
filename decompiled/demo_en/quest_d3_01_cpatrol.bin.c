task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_cvector, var_17_cvector, var_18_bool)
{
	var_19_int = 1; // 0x96 PushI
	if(var_19_int == 0) goto Label_255; // 0x97 JumpB
	func_1934(); // 0x99 NEW_2
	var_21_int = 10005; // 0x9b PushI
	var_22_bool = var_18_bool == var_21_int; // 0x9c Eq
	if(var_22_bool == 0) goto Label_163; // 0x9d JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x9e PushV
	var_23_object = var_1_object; // 0x9f MovT
	var_24_object = var_0_object; // 0xa0 MovT
	func_2107(); // 0xa1 NEW_2
	
Label_163:
	var_54_int = 10006; // 0xa3 PushI
	var_55_bool = var_18_bool == var_54_int; // 0xa4 Eq
	if(var_55_bool == 0) goto Label_171; // 0xa5 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xa6 PushV
	var_56_object = var_1_object; // 0xa7 MovT
	var_57_object = var_0_object; // 0xa8 MovT
	func_2107(); // 0xa9 NEW_2
	
Label_171:
	var_58_int = 10009; // 0xab PushI
	var_59_bool = var_18_bool == var_58_int; // 0xac Eq
	if(var_59_bool == 0) goto Label_179; // 0xad JumpB
	var_60_object = Obj(); var_61_object = Obj(); // 0xae PushV
	var_60_object = var_1_object; // 0xaf MovT
	var_61_object = var_0_object; // 0xb0 MovT
	func_2107(); // 0xb1 NEW_2
	
Label_179:
	var_62_int = 10002; // 0xb3 PushI
	var_63_bool = var_17_cvector == var_62_int; // 0xb4 Eq
	if(var_63_bool == 0) goto Label_197; // 0xb5 JumpB
	var_64_string = ""; // 0xb6 PushV
	var_64_string = "Neutral"; // 0xb7 MovS
	func_127(var_18_bool, var_64_string); // 0xb8 NEW_2
	var_81_int = 509122; // 0xba PushI
	SetMessage(var_81_int); // 0xbb TObjFunc
	ClearReplies(); // 0xbd TObjFunc
	var_82_int = 509123; // 0xbf PushI
	var_83_int = 10004; // 0xc0 PushI
	var_84_int = 10003; // 0xc1 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xc2 TObjFunc
	return 0; // 0xc4 Return
	
Label_197:
	var_85_int = 10004; // 0xc5 PushI
	var_86_bool = var_17_cvector == var_85_int; // 0xc6 Eq
	if(var_86_bool == 0) goto Label_225; // 0xc7 JumpB
	var_87_string = ""; // 0xc8 PushV
	var_87_string = "Neutral"; // 0xc9 MovS
	func_127(var_18_bool, var_87_string); // 0xca NEW_2
	var_88_int = 509124; // 0xcc PushI
	SetMessage(var_88_int); // 0xcd TObjFunc
	ClearReplies(); // 0xcf TObjFunc
	var_89_int = 509125; // 0xd1 PushI
	var_90_int = -1; // 0xd2 PushI
	var_91_int = 10005; // 0xd3 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xd4 TObjFunc
	var_92_int = 509126; // 0xd6 PushI
	var_93_int = -1; // 0xd7 PushI
	var_94_int = 10006; // 0xd8 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xd9 TObjFunc
	var_95_int = 509127; // 0xdb PushI
	var_96_int = 10008; // 0xdc PushI
	var_97_int = 10007; // 0xdd PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_98_int = 10008; // 0xe1 PushI
	var_99_bool = var_17_cvector == var_98_int; // 0xe2 Eq
	if(var_99_bool == 0) goto Label_243; // 0xe3 JumpB
	var_100_string = ""; // 0xe4 PushV
	var_100_string = "Neutral"; // 0xe5 MovS
	func_127(var_18_bool, var_100_string); // 0xe6 NEW_2
	var_101_int = 509128; // 0xe8 PushI
	SetMessage(var_101_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_102_int = 509129; // 0xed PushI
	var_103_int = -1; // 0xee PushI
	var_104_int = 10009; // 0xef PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_3_string = 1; // 0xf3 TMovB
	var_105_bool = 0; // 0xf4 PushV
	func_2324(var_105_bool); // 0xf5 NEW_2
	if(var_105_bool == 0) goto Label_251; // 0xf7 JumpB
	lshStopAnimation(); // 0xf8 Func
	goto Label_253; // 0xfa Jump
	
Label_253:
	return 0; // 0xfd Return
	
Label_251:
	StopAnimation(); // 0xfb Func
	
Label_255:
	return 0; // 0xff Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_int = 1; // 0x3dd PushI
	var_19_bool = var_17_bool == var_18_int; // 0x3de Eq
	if(var_19_bool == 0) goto Label_997; // 0x3df JumpB
	var_20_object = Obj(); // 0x3e0 PushV
	var_20_object = var_1_object; // 0x3e1 MovT
	func_2087(var_20_object); // 0x3e2 NEW_2
	goto Label_1001; // 0x3e4 Jump
	
Label_1001:
	return 0; // 0x3e9 Return
	
Label_997:
	var_25_int = 0; // 0x3e5 PushV
	var_25_int = var_17_bool; // 0x3e6 Mov
	func_1146(var_16_cvector, var_17_bool, var_25_int); // 0x3e7 NEW_2
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_bool = 0; // 0x3f8 PushV
	var_18_bool = 0; // 0x3f9 MovB
	var_19_bool = var_1_object == var_17_bool; // 0x3fa Eq
	if(var_19_bool == 0) goto Label_1023; // 0x3fb JumpB
	var_20_bool = var_2_object == 0; // 0x3fc Not
	if(var_20_bool == 0) goto Label_1023; // 0x3fd JumpB
	var_18_bool = 1; // 0x3fe MovB
	
Label_1023:
	if(var_18_bool == 0) goto Label_1029; // 0x3ff JumpB
	var_2_object = 1; // 0x400 TMovB
	var_21_object = Obj(); // 0x401 PushV
	var_21_object = var_17_bool; // 0x402 Mov
	func_1923(var_21_object); // 0x403 NEW_2
	
Label_1029:
	return 0; // 0x405 Return
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_bool = 0; // 0x407 PushV
	var_18_bool = 0; // 0x408 MovB
	var_19_bool = var_1_object == var_17_bool; // 0x409 Eq
	if(var_19_bool == 0) goto Label_1038; // 0x40a JumpB
	var_20_object = var_2_object; // 0x40b PushT
	if(var_20_object == 0) goto Label_1038; // 0x40c JumpB
	var_18_bool = 1; // 0x40d MovB
	
Label_1038:
	if(var_18_bool == 0) goto Label_1043; // 0x40e JumpB
	var_2_object = 0; // 0x40f TMovB
	var_21_string = "head"; // 0x410 PushS
	UnlookAsync(var_21_string); // 0x411 Func
	
Label_1043:
	return 0; // 0x413 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	RequestClearPath(var_17_bool); // 0x48d Func
	return 0; // 0x48f Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	func_1002(var_17_bool); // 0x499 NEW_2
	var_22_object = Obj(); // 0x49b PushV
	var_22_object = var_17_bool; // 0x49c Mov
	func_2310(); // 0x49d NEW_2
	return 0; // 0x49f Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x4b8 PushV
	IsOverrideActive(var_19_bool); // 0x4b9 Func
	var_20_bool = var_19_bool == 0; // 0x4bb Not
	if(var_20_bool == 0) goto Label_1217; // 0x4bc JumpB
	var_21_object = Obj(); // 0x4bd PushV
	var_21_object = var_17_bool; // 0x4be Mov
	func_2194(var_21_object); // 0x4bf NEW_2
	
Label_1217:
	return 2; // 0x4c1 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector, var_20_bool)
{
	return 0; // 0x538 Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string, var_16_cvector, var_17_cvector, var_18_bool)
{
	return 0; // 0x53a Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector, var_17_bool)
{
	return 0; // 0x53c Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x54f PushV
	func_1346(var_17_object, var_18_bool); // 0x550 NEW_2
	if(var_18_bool == 0) goto Label_1370; // 0x552 JumpB
	func_1466(); // 0x554 NEW_2
	var_19_object = Obj(); // 0x556 PushV
	var_19_object = var_17_object; // 0x557 Mov
	func_1348(var_17_object, var_19_object); // 0x558 NEW_2
	
Label_1370:
	return 0; // 0x55a Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x55b PushV
	IsPlayerActor(var_17_object, var_19_bool); // 0x55c Func
	var_20_bool = var_19_bool; // 0x55e Push
	if(var_20_bool == 0) goto Label_1381; // 0x55f JumpB
	TaskCall(2); // 0x561 TaskCall
	func_256(); // 0x562 NEW_2
	TaskReturn(); // 0x563 TaskReturn
	
Label_1381:
	return 2; // 0x565 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x8e8 PushV
	var_21_object = var_17_object; // 0x8e9 Mov
	var_22_int = var_18_int; // 0x8ea Mov
	var_23_float = var_19_float; // 0x8eb Mov
	func_1714(var_21_object, var_22_int, var_23_float); // 0x8ec NEW_2
	return 0; // 0x8ee Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x8f0 PushV
	var_23_object = var_17_object; // 0x8f1 Mov
	var_24_int = var_18_int; // 0x8f2 Mov
	var_25_float = var_19_float; // 0x8f3 Mov
	var_26_cvector = var_21_cvector; // 0x8f4 Mov
	var_27_cvector = var_22_cvector; // 0x8f5 Mov
	func_1782(var_25_float, var_26_cvector, var_27_cvector); // 0x8f6 NEW_2
	return 0; // 0x8f8 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x8f9 PushV
	var_21_string = "health"; // 0x8fa PushS
	var_22_bool = var_18_string == var_21_string; // 0x8fb Eq
	if(var_22_bool == 0) goto Label_2309; // 0x8fc JumpB
	var_23_string = "health"; // 0x8fd PushS
	GetProperty(var_23_string, var_20_float); // 0x8fe Func
	var_24_int = 0; // 0x900 PushI
	var_25_bool = var_20_float <= var_24_int; // 0x901 LE
	if(var_25_bool == 0) goto Label_2309; // 0x902 JumpB
	SignalDeath(var_17_object); // 0x903 Func
	
Label_2309:
	return 2; // 0x905 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x907 PushV
	var_18_object = var_17_object; // 0x908 Mov
	func_2248(var_18_object); // 0x909 NEW_2
	return 0; // 0x90b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool)
{
	var_2_object = 1; // 0x53d TMovB
	func_1382(var_15_cvector, var_16_bool); // 0x53f NEW_2
	return 0; // 0x541 Return
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 70.0; // 0x4 MovF
	func_1807(var_32_object, var_33_float); // 0x5 NEW_2
	var_77_bool = var_31_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_2318(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_2316(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_2320(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_2322(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_2171(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_29_int = -1; // 0x26 MovI
	IsOverrideActive(var_28_bool); // 0x27 Func
	var_90_bool = var_28_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_20_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_27_object); // 0x2d Func
	var_91_object = Obj(); var_92_object = Obj(); // 0x2f PushV
	var_91_object = var_21_object; // 0x30 Mov
	var_92_object = var_27_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_30_bool); // 0x36 ObjFunc
	
Label_56:
	var_137_bool = var_30_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_21_object; // 0x40 Mov
	func_1875(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_256()
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x100 PushV
	var_29_string = "player"; // 0x101 PushS
	FindActor(var_28_object, var_29_string); // 0x102 Func
	var_30_bool = var_28_object == 0; // 0x104 Not
	if(var_30_bool == 0) goto Label_263; // 0x105 JumpB
	return 2; // 0x106 Return
	
Label_263:
	var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; // 0x107 PushV
	var_31_object = var_28_object; // 0x108 Mov
	var_32_bool = 1; // 0x109 MovB
	var_33_float = 180.0; // 0x10a MovF
	func_277(var_24_bool, var_25_float, var_26_int, var_27_object, var_28_object, var_31_object, var_32_bool, var_33_float); // 0x10b NEW_2
	return 2; // 0x10d Return
}


func_1796()
{
	var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); // 0x704 PushV
	GetPosition(var_241_cvector); // 0x705 ObjFunc
	GetPosition(var_242_cvector); // 0x707 Func
	var_243_cvector = var_241_cvector - var_242_cvector; // 0x709 Sub2
	var_244_float = GetByIndex(var_243_cvector, 0); // 0x70a PushE
	var_245_float = GetByIndex(var_243_cvector, 2); // 0x70b PushE
	RotateAsync(var_244_float, var_245_float); // 0x70c Func
	return 6; // 0x70e Return
}


func_2055(var_459_float)
{
	var_460_object = Obj(); var_461_object = Obj(); // 0x807 PushV
	CreateFloatVector(var_461_object); // 0x808 Func
	add(var_459_float); // 0x80a ObjFunc
	var_462_int = 15; // 0x80c PushI
	SendWorldWndMessage(var_462_int, var_461_object); // 0x80d Func
	return 2; // 0x80f Return
}


func_2316(var_79_int)
{
	var_79_int = 515572; // 0x90c MovI
	return 0; // 0x90d Return
}


func_2318(var_78_int)
{
	var_78_int = 504031; // 0x90e MovI
	return 0; // 0x90f Return
}


func_1807(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x70f PushV
	GetPosition(var_44_cvector); // 0x710 ObjFunc
	GetEyesHeight(var_43_float); // 0x712 ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x714 PushE
	var_52_float = var_52_float + var_43_float; // 0x715 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x716 PopE
	GetPosition(var_45_cvector); // 0x717 Func
	GetEyesHeight(var_43_float); // 0x719 Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x71b PushE
	var_53_float = var_53_float + var_43_float; // 0x71c Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x71d PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x71e Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x71f PushE
	var_54_float = 0; // 0x720 MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x721 PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x722 Or
	var_56_float = sqrt(var_55_int); // 0x723 Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x724 Div2
	var_47_cvector = -var_46_cvector; // 0x725 Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x726 Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x727 PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x728 PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x729 Xor2
	func_1988(var_58_cvector, var_59_cvector); // 0x72a NEW_2
	var_66_int = 25; // 0x72c PushI
	var_67_float = var_58_cvector * var_66_int; // 0x72d Mult
	var_68_int = var_57_float + var_67_float; // 0x72e Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x72f PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x730 Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x731 Add2
	IsOverrideActive(var_50_bool); // 0x732 Func
	var_70_bool = var_50_bool; // 0x734 Push
	if(var_70_bool == 0) goto Label_1848; // 0x735 JumpB
	var_31_bool = 0; // 0x736 MovB
	return 18; // 0x737 Return
	
Label_1848:
	StopWorld(); // 0x738 Func
	CameraTransit(var_49_cvector, var_47_cvector); // 0x73a Func
	var_71_float = GetByIndex(var_48_cvector, 0); // 0x73c PushE
	var_72_float = GetByIndex(var_48_cvector, 2); // 0x73d PushE
	Rotate(var_71_float, var_72_float); // 0x73e Func
	var_73_bool = 0; // 0x740 PushV
	func_2324(var_73_bool); // 0x741 NEW_2
	if(var_73_bool == 0) goto Label_1861; // 0x743 JumpB
	goto Label_1869; // 0x744 Jump
	
Label_1869:
	CameraWaitForPlayFinish(); // 0x74d Func
	ResumeWorld(); // 0x74f Func
	var_31_bool = 1; // 0x751 MovB
	return 18; // 0x752 Return
	
Label_1861:
	var_74_string = "head"; // 0x745 PushS
	HasAnimationTrack(var_51_bool, var_74_string); // 0x746 Func
	var_75_bool = var_51_bool; // 0x748 Push
	if(var_75_bool == 0) goto Label_1869; // 0x749 JumpB
	var_76_string = "head"; // 0x74a PushS
	LookAsyncCamera(var_76_string); // 0x74b Func
}


func_2320(var_80_string)
{
	var_80_string = "ui/NPC_Citizen2.png"; // 0x910 MovS
	return 0; // 0x911 Return
}


func_2065(var_58_float)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x811 PushV
	CreateFloatVector(var_60_object); // 0x812 Func
	add(var_58_float); // 0x814 ObjFunc
	var_61_int = 16; // 0x816 PushI
	SendWorldWndMessage(var_61_int, var_60_object); // 0x817 Func
	return 2; // 0x819 Return
}


func_271(var_400_float)
{
	var_400_float = 0.3; // 0x110 MovF
	return 0; // 0x111 Return
}


func_2322(var_81_string)
{
	var_81_string = "ui/NPC_Citizen2_b.png"; // 0x912 MovS
	return 0; // 0x913 Return
}


func_1044(var_0_object, var_1_object, var_163_bool, var_164_object, var_165_float, var_166_float, var_167_bool, var_168_bool)
{
	var_169_bool = 0; var_170_bool = 0; var_171_object = Obj(); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); var_177_bool = 0; var_178_bool = 0; var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_object = Obj(); // 0x414 PushV
	var_0_object = 0; // 0x415 TMovB
	var_1_object = var_164_object; // 0x416 TMov
	var_178_bool = var_168_bool; // 0x417 Mov
	
Label_1048:
	var_185_bool = 0; var_186_object = Obj(); // 0x418 PushV
	var_186_object = var_164_object; // 0x419 Mov
	func_1184(var_185_bool, var_186_object); // 0x41a NEW_2
	var_189_bool = var_185_bool == 0; // 0x41c Not
	if(var_189_bool == 0) goto Label_1056; // 0x41d JumpB
	var_163_bool = 0; // 0x41e MovB
	return 16; // 0x41f Return
	
Label_1056:
	GetPosition(var_180_cvector); // 0x420 ObjFunc
	GetPosition(var_181_cvector); // 0x422 Func
	var_182_cvector = var_180_cvector - var_181_cvector; // 0x424 Sub2
	var_183_float = var_182_cvector | var_182_cvector; // 0x425 Or2
	var_190_bool = 0; // 0x426 PushV
	var_190_bool = 0; // 0x427 MovB
	var_191_int = 0; // 0x428 PushI
	var_192_bool = var_166_float > var_191_int; // 0x429 GT
	if(var_192_bool == 0) goto Label_1071; // 0x42a JumpB
	var_193_float = var_166_float * var_166_float; // 0x42b Mult
	var_194_bool = var_183_float > var_193_float; // 0x42c GT
	if(var_194_bool == 0) goto Label_1071; // 0x42d JumpB
	var_190_bool = 1; // 0x42e MovB
	
Label_1071:
	if(var_190_bool == 0) goto Label_1076; // 0x42f JumpB
	Stop(); // 0x430 Func
	var_163_bool = 0; // 0x432 MovB
	return 16; // 0x433 Return
	
Label_1076:
	var_195_float = var_165_float * var_165_float; // 0x434 Mult
	var_196_bool = var_183_float > var_195_float; // 0x435 GT
	if(var_196_bool == 0) goto Label_1138; // 0x436 JumpB
	GetPFPosition(var_180_cvector); // 0x437 ObjFunc
	FindPathTo(var_184_object, var_180_cvector); // 0x439 Func
	var_197_bool = var_184_object != 0; // 0x43b NullNeq
	if(var_197_bool == 0) goto Label_1087; // 0x43c JumpB
	var_179_object = var_184_object; // 0x43d Mov
	var_184_object = 0; // 0x43e SetNull
	
Label_1087:
	var_198_bool = var_179_object != 0; // 0x43f NullNeq
	if(var_198_bool == 0) goto Label_1120; // 0x440 JumpB
	var_199_bool = var_178_bool; // 0x441 Push
	if(var_199_bool == 0) goto Label_1097; // 0x442 JumpB
	var_178_bool = 0; // 0x443 MovB
	RotatePath(var_179_object, var_177_bool); // 0x444 Func
	var_200_bool = var_177_bool == 0; // 0x446 Not
	if(var_200_bool == 0) goto Label_1097; // 0x447 JumpB
	goto Label_1144; // 0x448 Jump
	
Label_1144:
	var_163_bool = !var_0_object; // 0x478 Not2
	return 16; // 0x479 Return
	
Label_1097:
	var_201_int = 0; // 0x449 PushI
	var_202_float = 0.3; // 0x44a PushF
	SetTimer(var_201_int, var_202_float); // 0x44b Func
	var_203_string = ""; // 0x44d PushV
	func_1191(var_203_string); // 0x44e NEW_2
	var_204_string = ""; // 0x450 PushV
	func_1193(var_204_string); // 0x451 NEW_2
	FollowPath(var_179_object, var_167_bool, var_177_bool, var_203_string, var_204_string); // 0x453 Func
	var_205_bool = var_177_bool == 0; // 0x455 Not
	if(var_205_bool == 0) goto Label_1118; // 0x456 JumpB
	var_206_object = var_0_object; // 0x457 PushT
	if(var_206_object == 0) goto Label_1116; // 0x458 JumpB
	var_179_object = 0; // 0x459 SetNull
	goto Label_1144; // 0x45a Jump
	
Label_1116:
	goto Label_1143; // 0x45c Jump
	
Label_1143:
	goto Label_1048; // 0x477 Jump
	
Label_1118:
	var_179_object = 0; // 0x45e SetNull
	goto Label_1136; // 0x45f Jump
	
Label_1136:
	var_184_object = 0; // 0x470 SetNull
	goto Label_1142; // 0x471 Jump
	
Label_1142:
	var_179_object = 0; // 0x476 SetNull
	
Label_1120:
	var_207_int = 0; // 0x460 PushI
	KillTimer(var_207_int); // 0x461 Func
	var_208_float = 0.5; // 0x463 PushF
	Sleep(var_208_float, var_177_bool); // 0x464 Func
	var_209_bool = var_177_bool == 0; // 0x466 Not
	if(var_209_bool == 0) goto Label_1132; // 0x467 JumpB
	var_210_object = var_0_object; // 0x468 PushT
	if(var_210_object == 0) goto Label_1132; // 0x469 JumpB
	var_179_object = 0; // 0x46a SetNull
	goto Label_1144; // 0x46b Jump
	
Label_1132:
	var_211_int = 0; // 0x46c PushI
	var_212_float = 0.3; // 0x46d PushF
	SetTimer(var_211_int, var_212_float); // 0x46e Func
	
Label_1138:
	var_213_int = 0; // 0x472 PushI
	KillTimer(var_213_int); // 0x473 Func
	goto Label_1144; // 0x475 Jump
}


func_274(var_407_int)
{
	var_407_int = 0; // 0x113 MovI
	return 0; // 0x114 Return
}


func_2324(var_73_bool)
{
	var_73_bool = 0; // 0x914 MovB
	return 0; // 0x915 Return
}


func_277(var_0_object, var_3_string, var_5_object, var_31_object, var_32_bool, var_33_float, var_140_bool, var_232_bool)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_float = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; // 0x115 PushV
	func_506(var_53_cvector, var_54_bool, var_55_float); // 0x117 NEW_2
	var_5_object = 0; // 0x119 TMovI
	var_78_string = "@GetAttackDistance"; // 0x11a PushS
	var_79_int = 1; // 0x11b PushI
	var_80_bool = IsFuncExist(var_31_object, var_78_string, var_79_int); // 0x11c FuncExist
	if(var_80_bool == 0) goto Label_291; // 0x11d JumpB
	GetAttackDistance(var_45_float); // 0x11e ObjFunc
	var_81_int = 50; // 0x120 PushI
	var_45_float = var_45_float + var_81_int; // 0x121 Add2
	goto Label_292; // 0x122 Jump
	
Label_292:
	var_82_int = 150; // 0x124 PushI
	var_83_bool = var_45_float >= var_82_int; // 0x125 GE
	if(var_83_bool == 0) goto Label_296; // 0x126 JumpB
	var_45_float = 150; // 0x127 MovI
	
Label_296:
	var_3_string = 0; // 0x128 TMovB
	var_0_object = var_31_object; // 0x129 TMov
	IsPlayerActor(var_0_object, var_48_bool); // 0x12a Func
	var_84_bool = var_48_bool; // 0x12c Push
	if(var_84_bool == 0) goto Label_310; // 0x12d JumpB
	var_85_string = "attack"; // 0x12e PushS
	PlayGlobalMusic(var_85_string); // 0x12f Func
	var_86_object = Obj(); // 0x131 PushV
	func_1982(var_86_object); // 0x132 NEW_2
	SendPlayerEnemy(var_31_object, var_86_object); // 0x134 Func
	
Label_310:
	var_89_bool = var_32_bool; // 0x136 Push
	if(var_89_bool == 0) goto Label_314; // 0x137 JumpB
	var_49_bool = 0; // 0x138 MovB
	goto Label_315; // 0x139 Jump
	
Label_315:
	var_90_float = 400.0; // 0x13b PushF
	var_50_float = var_90_float + var_45_float; // 0x13c Add2
	
Label_317:
	var_91_bool = 0; // 0x13d PushV
	var_91_bool = 0; // 0x13e MovB
	var_92_bool = 0; var_93_object = Obj(); // 0x13f PushV
	var_93_object = var_0_object; // 0x140 MovT
	func_1646(var_92_bool, var_93_object); // 0x141 NEW_2
	if(var_92_bool == 0) goto Label_327; // 0x143 JumpB
	var_126_bool = var_3_string == 0; // 0x144 Not
	if(var_126_bool == 0) goto Label_327; // 0x145 JumpB
	var_91_bool = 1; // 0x146 MovB
	
Label_327:
	if(var_91_bool == 0) goto Label_489; // 0x147 JumpB
	func_919(var_55_float); // 0x149 NEW_2
	GetPFPosition(var_46_cvector); // 0x14b TObjFunc
	GetPFPosition(var_47_cvector); // 0x14d Func
	var_51_cvector = var_46_cvector - var_47_cvector; // 0x14f Sub2
	var_52_float = var_51_cvector | var_51_cvector; // 0x150 Or2
	var_132_float = var_50_float * var_50_float; // 0x151 Mult
	var_133_bool = var_52_float >= var_132_float; // 0x152 GE
	if(var_133_bool == 0) goto Label_355; // 0x153 JumpB
	var_134_bool = 0; var_135_object = Obj(); var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_bool = 0; // 0x154 PushV
	var_135_object = var_0_object; // 0x155 MovT
	var_136_float = var_45_float; // 0x156 Mov
	var_137_float = 10000.0; // 0x157 MovF
	var_138_bool = 1; // 0x158 MovB
	var_139_bool = 0; // 0x159 MovB
	TaskCall(3); // 0x15a TaskCall
	func_939(var_142_bool, var_134_bool, var_135_object, var_136_float, var_137_float, var_138_bool, var_139_bool); // 0x15b NEW_2
	TaskReturn(); // 0x15c TaskReturn
	var_217_bool = var_140_bool == 0; // 0x15e Not
	if(var_217_bool == 0) goto Label_353; // 0x15f JumpB
	goto Label_489; // 0x160 Jump
	
Label_489:
	WaitForAnimEnd(); // 0x1e9 Func
	var_218_string = var_3_string; // 0x1eb PushT
	if(var_218_string == 0) goto Label_494; // 0x1ec JumpB
	return 22; // 0x1ed Return
	
Label_494:
	var_219_string = "all"; // 0x1ee PushS
	var_220_string = "attack_off"; // 0x1ef PushS
	PlayAnimation(var_219_string, var_220_string); // 0x1f0 Func
	WaitForAnimEnd(); // 0x1f2 Func
	var_221_bool = var_48_bool; // 0x1f4 Push
	if(var_221_bool == 0) goto Label_505; // 0x1f5 JumpB
	var_222_float = 2.0; // 0x1f6 PushF
	Sleep(var_222_float); // 0x1f7 Func
	
Label_505:
	return 22; // 0x1f9 Return
	
Label_353:
	var_49_bool = 0; // 0x161 MovB
	goto Label_488; // 0x162 Jump
	
Label_488:
	goto Label_317; // 0x1e8 Jump
	
Label_355:
	var_223_float = var_33_float * var_33_float; // 0x163 Mult
	var_224_bool = var_52_float >= var_223_float; // 0x164 GE
	if(var_224_bool == 0) goto Label_480; // 0x165 JumpB
	GetPFPosition(var_53_cvector); // 0x166 TObjFunc
	CanReachByPF(var_54_bool, var_53_cvector); // 0x168 Func
	var_225_bool = var_54_bool == 0; // 0x16a Not
	if(var_225_bool == 0) goto Label_379; // 0x16b JumpB
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_bool = 0; // 0x16c PushV
	var_227_object = var_0_object; // 0x16d MovT
	var_228_float = var_45_float; // 0x16e Mov
	var_229_float = 10000.0; // 0x16f MovF
	var_230_bool = 1; // 0x170 MovB
	var_231_bool = 0; // 0x171 MovB
	TaskCall(3); // 0x172 TaskCall
	func_939(var_234_bool, var_226_bool, var_227_object, var_228_float, var_229_float, var_230_bool, var_231_bool); // 0x173 NEW_2
	TaskReturn(); // 0x174 TaskReturn
	var_235_bool = var_232_bool == 0; // 0x176 Not
	if(var_235_bool == 0) goto Label_377; // 0x177 JumpB
	goto Label_489; // 0x178 Jump
	
Label_377:
	var_49_bool = 0; // 0x179 MovB
	goto Label_317; // 0x17a Jump
	
Label_379:
	var_236_bool = var_49_bool == 0; // 0x17b Not
	if(var_236_bool == 0) goto Label_404; // 0x17c JumpB
	var_237_object = Obj(); // 0x17d PushV
	var_237_object = var_0_object; // 0x17e MovT
	func_1796(); // 0x17f NEW_2
	var_246_string = "all"; // 0x181 PushS
	var_247_string = "attack_on"; // 0x182 PushS
	PlayAnimation(var_246_string, var_247_string); // 0x183 Func
	WaitForAnimEnd(); // 0x185 Func
	func_919(var_55_float); // 0x188 NEW_2
	StopAsync(); // 0x18a Func
	var_49_bool = 1; // 0x18c MovB
	var_248_bool = 0; var_249_object = Obj(); // 0x18d PushV
	var_249_object = var_0_object; // 0x18e MovT
	func_1646(var_248_bool, var_249_object); // 0x18f NEW_2
	var_250_bool = var_248_bool == 0; // 0x191 Not
	if(var_250_bool == 0) goto Label_404; // 0x192 JumpB
	goto Label_489; // 0x193 Jump
	
Label_404:
	rand(var_55_float); // 0x194 Func
	var_251_bool = 0; // 0x196 PushV
	var_251_bool = 1; // 0x197 MovB
	var_252_float = 0.25; // 0x198 PushF
	var_253_bool = var_55_float < var_252_float; // 0x199 LT
	if(var_253_bool == 0) goto Label_416; // 0x19a JumpB
	var_254_bool = 0; // 0x19b PushV
	func_876(var_251_bool, var_254_bool); // 0x19c NEW_2
	if(var_254_bool == 0) goto Label_416; // 0x19e JumpB
	var_251_bool = 0; // 0x19f MovB
	
Label_416:
	if(var_251_bool == 0) goto Label_433; // 0x1a0 JumpB
	Face(var_0_object); // 0x1a1 Func
	func_926(); // 0x1a4 NEW_2
	var_289_string = "all"; // 0x1a6 PushS
	var_290_string = "attack_stay"; // 0x1a7 PushS
	PlayAnimation(var_289_string, var_290_string); // 0x1a8 Func
	var_291_bool = 0; var_292_float = 0; // 0x1aa PushV
	var_292_float = var_33_float; // 0x1ab Mov
	func_744(var_55_float, var_291_bool, var_292_float); // 0x1ac NEW_2
	StopAsync(); // 0x1ae Func
	goto Label_479; // 0x1b0 Jump
	
Label_479:
	goto Label_488; // 0x1df Jump
	
Label_433:
	Face(var_0_object); // 0x1b1 Func
	var_506_string = "all"; // 0x1b3 PushS
	var_507_string = "fjump"; // 0x1b4 PushS
	PlayAnimation(var_506_string, var_507_string); // 0x1b5 Func
	WaitForAnimEnd(); // 0x1b7 Func
	func_919(var_55_float); // 0x1ba NEW_2
	var_508_cvector = CVector(0.0, 0.0, 0.0); // 0x1bc PushVec
	SetSpeed(var_508_cvector); // 0x1bd Func
	Stop(); // 0x1bf Func
	StopAsync(); // 0x1c1 Func
	var_509_bool = 0; // 0x1c3 PushV
	func_876(var_55_float, var_509_bool); // 0x1c4 NEW_2
	var_510_bool = var_509_bool == 0; // 0x1c6 Not
	if(var_510_bool == 0) goto Label_479; // 0x1c7 JumpB
	var_511_bool = 0; var_512_object = Obj(); // 0x1c8 PushV
	var_512_object = var_0_object; // 0x1c9 MovT
	func_1646(var_511_bool, var_512_object); // 0x1ca NEW_2
	var_513_bool = var_511_bool == 0; // 0x1cc Not
	if(var_513_bool == 0) goto Label_463; // 0x1cd JumpB
	goto Label_489; // 0x1ce Jump
	
Label_463:
	GetPFPosition(var_46_cvector); // 0x1cf TObjFunc
	GetPFPosition(var_47_cvector); // 0x1d1 Func
	var_51_cvector = var_46_cvector - var_47_cvector; // 0x1d3 Sub2
	var_52_float = var_51_cvector | var_51_cvector; // 0x1d4 Or2
	var_514_float = var_33_float * var_33_float; // 0x1d5 Mult
	var_515_bool = var_52_float < var_514_float; // 0x1d6 LT
	if(var_515_bool == 0) goto Label_479; // 0x1d7 JumpB
	var_516_bool = 0; var_517_float = 0; // 0x1d8 PushV
	var_517_float = var_33_float; // 0x1d9 Mov
	func_580(var_55_float, var_516_bool, var_517_float); // 0x1da NEW_2
	var_518_bool = var_516_bool == 0; // 0x1dc Not
	if(var_518_bool == 0) goto Label_479; // 0x1dd JumpB
	goto Label_489; // 0x1de Jump
	
Label_480:
	var_519_bool = 0; var_520_float = 0; // 0x1e0 PushV
	var_520_float = var_33_float; // 0x1e1 Mov
	func_580(var_55_float, var_519_bool, var_520_float); // 0x1e2 NEW_2
	var_521_bool = var_519_bool == 0; // 0x1e4 Not
	if(var_521_bool == 0) goto Label_487; // 0x1e5 JumpB
	goto Label_489; // 0x1e6 Jump
	
Label_487:
	var_49_bool = 1; // 0x1e7 MovB
	
Label_314:
	var_49_bool = 1; // 0x13a MovB
	
Label_291:
	var_45_float = var_33_float; // 0x123 Mov
}


func_787(var_0_object, var_306_bool)
{
	var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_float = 0; var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_float = 0; // 0x313 PushV
	var_317_bool = 0; var_318_object = Obj(); // 0x314 PushV
	var_318_object = var_0_object; // 0x315 MovT
	func_1646(var_317_bool, var_318_object); // 0x316 NEW_2
	var_319_bool = var_317_bool == 0; // 0x318 Not
	if(var_319_bool == 0) goto Label_796; // 0x319 JumpB
	var_306_bool = 0; // 0x31a MovB
	return 10; // 0x31b Return
	
Label_796:
	var_320_bool = 0; // 0x31c PushV
	func_876(var_316_float, var_320_bool); // 0x31d NEW_2
	if(var_320_bool == 0) goto Label_813; // 0x31f JumpB
	GetPFPosition(var_312_cvector); // 0x320 TObjFunc
	GetPFPosition(var_313_cvector); // 0x322 Func
	var_314_cvector = var_312_cvector - var_313_cvector; // 0x324 Sub2
	var_315_float = var_314_cvector | var_314_cvector; // 0x325 Or2
	GetAttackDistance(var_316_float); // 0x326 TObjFunc
	var_321_int = 50; // 0x328 PushI
	var_316_float = var_316_float + var_321_int; // 0x329 Add2
	var_322_float = var_316_float * var_316_float; // 0x32a Mult
	var_306_bool = var_315_float <= var_322_float; // 0x32b LE2
	return 10; // 0x32c Return
	
Label_813:
	var_306_bool = 0; // 0x32d MovB
	return 10; // 0x32e Return
}


func_2075(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x81b PushV
	FindActor(var_52_object, var_49_string); // 0x81c Func
	var_53_bool = var_52_object == 0; // 0x81e NullEq
	if(var_53_bool == 0) goto Label_2082; // 0x81f JumpB
	var_48_bool = 0; // 0x820 MovB
	return 2; // 0x821 Return
	
Label_2082:
	Trigger(var_52_object, var_50_string); // 0x822 Func
	var_48_bool = 1; // 0x824 MovB
	return 2; // 0x825 Return
}


func_541(var_0_object, var_389_float, var_390_int)
{
	var_391_object = Obj(); var_392_float = 0; var_393_float = 0; var_394_object = Obj(); var_395_float = 0; var_396_float = 0; // 0x21d PushV
	var_397_float = 0.9; // 0x21e PushF
	var_398_float = var_389_float * var_397_float; // 0x21f Mult
	GetVictim(var_398_float, var_394_object); // 0x220 Func
	ReportAttack(var_0_object); // 0x222 Func
	var_399_bool = var_394_object == var_0_object; // 0x224 Eq
	if(var_399_bool == 0) goto Label_578; // 0x225 JumpB
	var_400_float = 0; var_401_object = Obj(); var_402_int = 0; // 0x226 PushV
	var_401_object = var_394_object; // 0x227 Mov
	var_402_int = var_390_int; // 0x228 Mov
	func_271(var_402_int); // 0x229 NEW_2
	var_395_float = var_400_float; // 0x22a Mov
	var_403_float = 0; var_404_object = Obj(); var_405_float = 0; var_406_int = 0; // 0x22c PushV
	var_404_object = var_394_object; // 0x22d Mov
	var_405_float = var_395_float; // 0x22e Mov
	var_407_int = 0; var_408_object = Obj(); var_409_int = 0; // 0x22f PushV
	var_408_object = var_394_object; // 0x230 Mov
	var_409_int = var_390_int; // 0x231 Mov
	func_274(var_409_int); // 0x232 NEW_2
	var_406_int = var_407_int; // 0x233 Mov
	func_1532(var_403_float, var_404_object, var_405_float, var_406_int); // 0x235 NEW_2
	var_396_float = var_403_float; // 0x236 Mov
	var_464_int = 0; // 0x238 PushV
	func_924(var_464_int); // 0x239 NEW_2
	ReportHit(var_0_object, var_464_int, var_396_float, var_395_float); // 0x23b Func
	var_465_object = Obj(); var_466_float = 0; // 0x23d PushV
	var_465_object = var_394_object; // 0x23e Mov
	var_466_float = var_396_float; // 0x23f Mov
	func_931(); // 0x240 NEW_2
	
Label_578:
	return 6; // 0x242 Return
}


func_1309(var_112_string)
{
	RemoveRTEnvelope(); // 0x51e Func
	SetDeathState(); // 0x520 Func
	Stop(); // 0x522 Func
	StopAsync(); // 0x524 Func
	StopSecondaryAnimation(); // 0x526 Func
	var_113_string = ""; // 0x528 PushV
	var_113_string = var_112_string; // 0x529 Mov
	func_1941(var_113_string); // 0x52a NEW_2
	var_142_string = "all"; // 0x52c PushS
	PlayAnimation(var_142_string, var_112_string); // 0x52d Func
	WaitForAnimEnd(); // 0x52f Func
	var_143_string = "all"; // 0x531 PushS
	LockAnimationEnd(var_143_string, var_112_string); // 0x532 Func
	RemoveEnvelope(); // 0x534 Func
	return 0; // 0x536 Return
}


func_2087(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x827 PushV
	IsPlayerActor(var_127_object, var_129_bool); // 0x828 Func
	var_130_bool = var_129_bool; // 0x82a Push
	if(var_130_bool == 0) goto Label_2095; // 0x82b JumpB
	var_131_string = "attack"; // 0x82c PushS
	PlayGlobalMusic(var_131_string); // 0x82d Func
	
Label_2095:
	return 2; // 0x82f Return
}


func_815(var_304_bool)
{
	var_305_bool = 0; // 0x32f PushV
	var_305_bool = 0; // 0x330 MovB
	var_306_bool = 0; // 0x331 PushV
	func_787(var_305_bool, var_306_bool); // 0x332 NEW_2
	if(var_306_bool == 0) goto Label_826; // 0x334 JumpB
	var_323_bool = 0; // 0x335 PushV
	func_831(var_304_bool, var_305_bool, var_323_bool); // 0x336 NEW_2
	if(var_323_bool == 0) goto Label_826; // 0x338 JumpB
	var_305_bool = 1; // 0x339 MovB
	
Label_826:
	if(var_305_bool == 0) goto Label_829; // 0x33a JumpB
	var_304_bool = 1; // 0x33b MovB
	return 0; // 0x33c Return
	
Label_829:
	var_304_bool = 0; // 0x33d MovB
	return 0; // 0x33e Return
}


func_2096()
{
	var_364_object = Obj(); var_365_object = Obj(); // 0x830 PushV
	GetScene(var_365_object); // 0x831 Func
	var_366_string = "battle"; // 0x833 PushS
	var_367_object = Obj(); // 0x834 PushV
	func_1982(var_367_object); // 0x835 NEW_2
	BroadcastMessage(var_366_string, var_367_object, var_365_object); // 0x837 Func
	return 2; // 0x839 Return
}


func_2107()
{
	func_2117(); // 0x83d NEW_2
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x83f PushV
	var_49_string = "quest_d3_01"; // 0x840 MovS
	var_50_string = "patrol_talk"; // 0x841 MovS
	func_2075(var_48_bool, var_49_string, var_50_string); // 0x842 NEW_2
	return 0; // 0x844 Return
}


func_831(var_0_object, var_4_bool, var_323_bool)
{
	var_324_object = Obj(); var_325_bool = 0; var_326_float = 0; var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_object = Obj(); var_330_bool = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); // 0x33f PushV
	GetScene(var_329_object); // 0x340 Func
	var_330_bool = 0; // 0x342 MovB
	
Label_835:
	var_334_cvector = CVector(0,0,0); var_335_object = Obj(); // 0x343 PushV
	var_335_object = var_0_object; // 0x344 MovT
	func_1486(var_335_object); // 0x345 NEW_2
	var_340_int = -var_334_cvector; // 0x347 Neg
	FindDirLength(var_331_float, var_340_int, var_331_float); // 0x348 Func
	var_341_bool = var_331_float < var_4_bool; // 0x34a LT
	if(var_341_bool == 0) goto Label_845; // 0x34b JumpB
	goto Label_873; // 0x34c Jump
	
Label_873:
	var_323_bool = var_330_bool; // 0x369 Mov
	return 10; // 0x36a Return
	
Label_845:
	Face(var_0_object); // 0x34d Func
	var_342_string = "all"; // 0x34f PushS
	var_343_string = "bjump"; // 0x350 PushS
	PlayAnimation(var_342_string, var_343_string); // 0x351 Func
	GetPFPosition(var_332_cvector); // 0x353 TObjFunc
	GetPFPosition(var_333_cvector); // 0x355 Func
	WaitForAnimEnd(); // 0x357 Func
	func_919(var_333_cvector); // 0x35a NEW_2
	StopAsync(); // 0x35c Func
	var_344_cvector = CVector(0.0, 0.0, 0.0); // 0x35e PushVec
	SetSpeed(var_344_cvector); // 0x35f Func
	var_330_bool = 1; // 0x361 MovB
	var_345_bool = 0; // 0x362 PushV
	func_787(var_333_cvector, var_345_bool); // 0x363 NEW_2
	var_346_bool = var_345_bool == 0; // 0x365 Not
	if(var_346_bool == 0) goto Label_872; // 0x366 JumpB
	goto Label_873; // 0x367 Jump
	
Label_872:
	goto Label_835; // 0x368 Jump
}


func_1346(var_2_object, var_18_bool)
{
	var_18_bool = var_2_object; // 0x542 MovT
	return 0; // 0x543 Return
}


func_580(var_0_object, var_352_bool, var_353_float)
{
	var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = ""; var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; // 0x244 PushV
	func_919(var_361_string); // 0x246 NEW_2
	irand(var_358_int, var_361_string); // 0x248 Func
	var_362_int = 1; // 0x24a PushI
	var_358_int = var_358_int + var_362_int; // 0x24b Add2
	Face(var_0_object); // 0x24c Func
	var_363_bool = 1; // 0x24e PushB
	SetAttackState(var_363_bool); // 0x24f Func
	func_2096(); // 0x252 NEW_2
	var_368_string = "all"; // 0x254 PushS
	var_369_string = "attack_begin"; // 0x255 PushS
	var_370_int = var_369_string + var_358_int; // 0x256 Add
	PlayAnimation(var_368_string, var_370_int); // 0x257 Func
	WaitForAnimEnd(); // 0x259 Func
	func_887(var_360_int, var_361_string); // 0x25c NEW_2
	var_386_bool = 0; var_387_object = Obj(); // 0x25e PushV
	var_387_object = var_0_object; // 0x25f MovT
	func_1646(var_386_bool, var_387_object); // 0x260 NEW_2
	var_388_bool = var_386_bool == 0; // 0x262 Not
	if(var_388_bool == 0) goto Label_616; // 0x263 JumpB
	StopAsync(); // 0x264 Func
	var_352_bool = 0; // 0x266 MovB
	return 8; // 0x267 Return
	
Label_616:
	var_389_float = 0; var_390_int = 0; // 0x268 PushV
	var_389_float = var_353_float; // 0x269 Mov
	var_390_int = var_358_int; // 0x26a Mov
	func_541(var_361_string, var_389_float, var_390_int); // 0x26b NEW_2
	var_467_string = "all"; // 0x26d PushS
	var_468_string = "attack_middle"; // 0x26e PushS
	var_469_int = var_468_string + var_358_int; // 0x26f Add
	HasAnimation(var_359_bool, var_467_string, var_469_int); // 0x270 Func
	var_470_bool = var_359_bool; // 0x272 Push
	if(var_470_bool == 0) goto Label_697; // 0x273 JumpB
	func_2096(); // 0x275 NEW_2
	var_471_string = "all"; // 0x277 PushS
	var_472_string = "attack_middle"; // 0x278 PushS
	var_473_int = var_472_string + var_358_int; // 0x279 Add
	PlayAnimation(var_471_string, var_473_int); // 0x27a Func
	WaitForAnimEnd(); // 0x27c Func
	func_919(var_361_string); // 0x27f NEW_2
	var_474_bool = 0; var_475_object = Obj(); // 0x281 PushV
	var_475_object = var_0_object; // 0x282 MovT
	func_1646(var_474_bool, var_475_object); // 0x283 NEW_2
	var_476_bool = var_474_bool == 0; // 0x285 Not
	if(var_476_bool == 0) goto Label_651; // 0x286 JumpB
	StopAsync(); // 0x287 Func
	var_352_bool = 0; // 0x289 MovB
	return 8; // 0x28a Return
	
Label_651:
	var_477_float = 0; var_478_int = 0; // 0x28b PushV
	var_477_float = var_353_float; // 0x28c Mov
	var_478_int = var_358_int; // 0x28d Mov
	func_541(var_361_string, var_477_float, var_478_int); // 0x28e NEW_2
	var_360_int = 1; // 0x290 MovI
	
Label_657:
	var_479_string = "attack_middle"; // 0x291 PushS
	var_480_int = var_479_string + var_358_int; // 0x292 Add
	var_481_string = "_"; // 0x293 PushS
	var_482_int = var_480_int + var_481_string; // 0x294 Add
	var_361_string = var_482_int + var_360_int; // 0x295 Add2
	var_483_string = "all"; // 0x296 PushS
	HasAnimation(var_359_bool, var_483_string, var_361_string); // 0x297 Func
	var_484_bool = var_359_bool == 0; // 0x299 Not
	if(var_484_bool == 0) goto Label_668; // 0x29a JumpB
	goto Label_697; // 0x29b Jump
	
Label_697:
	var_485_bool = 0; // 0x2b9 PushB
	SetAttackState(var_485_bool); // 0x2ba Func
	var_486_string = "all"; // 0x2bc PushS
	var_487_string = "attack_end"; // 0x2bd PushS
	var_488_int = var_487_string + var_358_int; // 0x2be Add
	PlayAnimation(var_486_string, var_488_int); // 0x2bf Func
	var_489_bool = 0; // 0x2c1 PushV
	func_933(var_489_bool); // 0x2c2 NEW_2
	if(var_489_bool == 0) goto Label_715; // 0x2c4 JumpB
	var_490_bool = 0; var_491_float = 0; // 0x2c5 PushV
	var_491_float = 0.75; // 0x2c6 MovF
	func_717(var_490_bool, var_491_float); // 0x2c7 NEW_2
	StopAsync(); // 0x2c9 Func
	
Label_715:
	var_352_bool = 1; // 0x2cb MovB
	return 8; // 0x2cc Return
	
Label_668:
	func_2096(); // 0x29d NEW_2
	var_499_string = "all"; // 0x29f PushS
	PlayAnimation(var_499_string, var_361_string); // 0x2a0 Func
	WaitForAnimEnd(); // 0x2a2 Func
	func_919(var_361_string); // 0x2a5 NEW_2
	var_500_bool = 0; var_501_object = Obj(); // 0x2a7 PushV
	var_501_object = var_0_object; // 0x2a8 MovT
	func_1646(var_500_bool, var_501_object); // 0x2a9 NEW_2
	var_502_bool = var_500_bool == 0; // 0x2ab Not
	if(var_502_bool == 0) goto Label_689; // 0x2ac JumpB
	StopAsync(); // 0x2ad Func
	var_352_bool = 0; // 0x2af MovB
	return 8; // 0x2b0 Return
	
Label_689:
	var_503_float = 0; var_504_int = 0; // 0x2b1 PushV
	var_503_float = var_353_float; // 0x2b2 Mov
	var_504_int = var_358_int; // 0x2b3 Mov
	func_541(var_361_string, var_503_float, var_504_int); // 0x2b4 NEW_2
	var_505_int = 1; // 0x2b6 PushI
	var_360_int = var_360_int + var_505_int; // 0x2b7 Add2
	goto Label_657; // 0x2b8 Jump
}


func_1605(var_107_bool)
{
	var_109_bool = 0; var_110_bool = 0; // 0x645 PushV
	IsDead(var_110_bool); // 0x646 ObjFunc
	var_107_bool = var_110_bool; // 0x648 Mov
	return 2; // 0x649 Return
}


func_2117()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x845 PushV
	var_27_int = 72; // 0x846 PushI
	var_28_int = 1; // 0x847 PushI
	var_29_int = 512154; // 0x848 PushI
	CreateDiaryEntry(var_26_object, var_27_int, var_28_int, var_29_int); // 0x849 Func
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0; // 0x84b PushV
	var_31_object = var_26_object; // 0x84c Mov
	var_32_int = 25; // 0x84d MovI
	func_2143(var_30_bool, var_31_object, var_32_int); // 0x84e NEW_2
	return 2; // 0x850 Return
}


func_1348(var_2_object, var_19_object)
{
	var_20_int = 0; var_21_object = Obj(); // 0x545 PushV
	var_21_object = var_19_object; // 0x546 Mov
	TaskCall(0); // 0x547 TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x548 NEW_2
	TaskReturn(); // 0x549 TaskReturn
	var_2_object = 0; // 0x54b TMovB
	return 0; // 0x54c Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_97; // 0x4f JumpB
	var_98_string = ""; // 0x50 PushV
	var_98_string = "Neutral"; // 0x51 MovS
	func_127(var_92_object, var_98_string); // 0x52 NEW_2
	var_115_int = 509122; // 0x54 PushI
	SetMessage(var_115_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_116_int = 509123; // 0x59 PushI
	var_117_int = 10004; // 0x5a PushI
	var_118_int = 10003; // 0x5b PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x5c TObjFunc
	goto Label_97; // 0x5e Jump
	
Label_97:
	var_119_bool = 0; // 0x61 PushV
	func_2324(var_119_bool); // 0x62 NEW_2
	if(var_119_bool == 0) goto Label_112; // 0x64 JumpB
	
Label_101:
	lshWaitForAnimEnd(); // 0x65 Func
	var_120_string = var_3_string; // 0x67 PushT
	if(var_120_string == 0) goto Label_106; // 0x68 JumpB
	goto Label_111; // 0x69 Jump
	
Label_111:
	goto Label_126; // 0x6f Jump
	
Label_126:
	return 0; // 0x7e Return
	
Label_106:
	var_121_string = ""; // 0x6a PushV
	var_121_string = var_2_object; // 0x6b MovT
	func_1892(var_121_string); // 0x6c NEW_2
	goto Label_101; // 0x6e Jump
	
Label_112:
	var_132_string = "all"; // 0x70 PushS
	var_133_string = "idle"; // 0x71 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x72 Func
	
Label_116:
	WaitForAnimEnd(); // 0x74 Func
	var_134_string = var_3_string; // 0x76 PushT
	if(var_134_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_121:
	var_135_string = "all"; // 0x79 PushS
	var_136_string = "idle"; // 0x7a PushS
	PlayAnimation(var_135_string, var_136_string); // 0x7b Func
	goto Label_116; // 0x7d Jump
}


func_1610(var_96_bool, var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj(); // 0x64a PushV
	var_102_bool = var_97_object == 0; // 0x64b NullEq
	if(var_102_bool == 0) goto Label_1615; // 0x64c JumpB
	var_96_bool = 0; // 0x64d MovB
	return 4; // 0x64e Return
	
Label_1615:
	var_103_bool = 0; // 0x64f PushV
	var_103_bool = 0; // 0x650 MovB
	var_104_string = "IsDead"; // 0x651 PushS
	var_105_int = 1; // 0x652 PushI
	var_106_bool = IsFuncExist(var_97_object, var_104_string, var_105_int); // 0x653 FuncExist
	if(var_106_bool == 0) goto Label_1627; // 0x654 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x655 PushV
	var_108_object = var_97_object; // 0x656 Mov
	func_1605(var_108_object); // 0x657 NEW_2
	if(var_107_bool == 0) goto Label_1627; // 0x659 JumpB
	var_103_bool = 1; // 0x65a MovB
	
Label_1627:
	if(var_103_bool == 0) goto Label_1630; // 0x65b JumpB
	var_96_bool = 0; // 0x65c MovB
	return 4; // 0x65d Return
	
Label_1630:
	GetScene(var_100_object); // 0x65e Func
	var_111_bool = var_100_object == 0; // 0x660 NullEq
	if(var_111_bool == 0) goto Label_1636; // 0x661 JumpB
	var_96_bool = 0; // 0x662 MovB
	return 4; // 0x663 Return
	
Label_1636:
	GetScene(var_101_object); // 0x664 ObjFunc
	var_112_bool = var_100_object != var_101_object; // 0x666 Neq
	if(var_112_bool == 0) goto Label_1642; // 0x667 JumpB
	var_96_bool = 0; // 0x668 MovB
	return 4; // 0x669 Return
	
Label_1642:
	var_96_bool = 1; // 0x66a MovB
	return 4; // 0x66b Return
}


func_1357()
{
	return 0; // 0x54d Return
}


func_2130(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x852 PushV
	GetDiaryRoot(var_41_object); // 0x853 Func
	var_42_bool = var_41_object == 0; // 0x855 Not
	if(var_42_bool == 0) goto Label_2140; // 0x856 JumpB
	var_43_string = "Can't retrieve diary root"; // 0x857 PushS
	Trace(var_43_string); // 0x858 Func
	var_39_object = 0; // 0x85a MovB
	return 2; // 0x85b Return
	
Label_2140:
	var_39_object = var_41_object; // 0x85c Mov
	return 2; // 0x85d Return
}


func_1875()
{
	var_139_bool = 0; var_140_bool = 0; // 0x753 PushV
	CameraSwitchToNormal(); // 0x754 Func
	var_141_bool = 0; // 0x756 PushV
	func_2324(var_141_bool); // 0x757 NEW_2
	if(var_141_bool == 0) goto Label_1883; // 0x759 JumpB
	goto Label_1891; // 0x75a Jump
	
Label_1891:
	return 2; // 0x763 Return
	
Label_1883:
	var_142_string = "head"; // 0x75b PushS
	HasAnimationTrack(var_140_bool, var_142_string); // 0x75c Func
	var_143_bool = var_140_bool; // 0x75e Push
	if(var_143_bool == 0) goto Label_1891; // 0x75f JumpB
	var_144_string = "head"; // 0x760 PushS
	UnlookAsync(var_144_string); // 0x761 Func
}


func_2143(var_30_bool, var_31_object, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; // 0x85f PushV
	var_39_object = Obj(); // 0x860 PushV
	func_2130(var_39_object); // 0x861 NEW_2
	var_36_object = var_39_object; // 0x862 Mov
	Find(var_32_int, var_37_object); // 0x864 ObjFunc
	var_44_bool = var_37_object == 0; // 0x866 Not
	if(var_44_bool == 0) goto Label_2158; // 0x867 JumpB
	var_45_string = "Can't find diary parent with id: "; // 0x868 PushS
	var_46_int = var_45_string + var_32_int; // 0x869 Add
	Trace(var_46_int); // 0x86a Func
	var_30_bool = 0; // 0x86c MovB
	return 6; // 0x86d Return
	
Label_2158:
	AddChild(var_31_object); // 0x86e ObjFunc
	var_47_int = 7; // 0x870 PushI
	SendWorldWndMessage(var_47_int); // 0x871 Func
	GetCategory(var_38_int); // 0x873 ObjFunc
	SetDiarySection(var_38_int); // 0x875 Func
	var_30_bool = 0; // 0x877 MovB
	return 6; // 0x878 Return
}


func_1892(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x764 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x765 Func
	var_128_bool = var_125_bool; // 0x767 Push
	if(var_128_bool == 0) goto Label_1903; // 0x768 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x769 Func
	var_129_bool = 0; // 0x76b PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x76c Func
	goto Label_1907; // 0x76e Jump
	
Label_1907:
	return 6; // 0x773 Return
	
Label_1903:
	var_130_string = "Can't find lsh animation : "; // 0x76f PushS
	var_131_int = var_130_string + var_121_string; // 0x770 Add
	Trace(var_131_int); // 0x771 Func
}


func_1382(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj(); // 0x566 PushV
	GetPFPosition(var_24_object); // 0x567 Func
	GetDirection(var_0_object); // 0x569 Func
	
Label_1387:
	func_1471(); // 0x56c NEW_2
	var_25_int = 10; // 0x56e PushI
	irand(var_21_int, var_25_int); // 0x56f Func
	var_26_int = 5; // 0x571 PushI
	var_27_int = var_21_int + var_26_int; // 0x572 Add
	Sleep(var_27_int, var_22_bool); // 0x573 Func
	var_28_bool = var_22_bool; // 0x575 Push
	if(var_28_bool == 0) goto Label_1403; // 0x576 JumpB
	func_1357(); // 0x578 NEW_2
	goto Label_1464; // 0x57a Jump
	
Label_1464:
	goto Label_1387; // 0x5b8 Jump
	
Label_1403:
	func_1471(); // 0x57c NEW_2
	GetPFPosition(var_23_cvector); // 0x57e Func
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x580 PushV
	var_30_cvector = var_1_object; // 0x581 MovT
	var_31_cvector = var_23_cvector; // 0x582 Mov
	func_1998(var_29_float, var_30_cvector, var_31_cvector); // 0x583 NEW_2
	var_34_int = 40000; // 0x585 PushI
	var_35_bool = var_29_float > var_34_int; // 0x586 GT
	if(var_35_bool == 0) goto Label_1450; // 0x587 JumpB
	FindPathTo(var_24_object, var_24_object); // 0x588 Func
	var_36_bool = var_24_object != 0; // 0x58a NullNeq
	if(var_36_bool == 0) goto Label_1445; // 0x58b JumpB
	RotatePath(var_24_object, var_22_bool); // 0x58c Func
	var_37_bool = var_22_bool == 0; // 0x58e Not
	if(var_37_bool == 0) goto Label_1425; // 0x58f JumpB
	goto Label_1463; // 0x590 Jump
	
Label_1463:
	goto Label_1403; // 0x5b7 Jump
	
Label_1425:
	var_38_bool = 0; // 0x591 PushB
	FollowPath(var_24_object, var_38_bool, var_22_bool); // 0x592 Func
	var_39_bool = var_22_bool == 0; // 0x594 Not
	if(var_39_bool == 0) goto Label_1431; // 0x595 JumpB
	goto Label_1463; // 0x596 Jump
	
Label_1431:
	var_40_float = GetByIndex(var_0_object, 0); // 0x597 PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x598 PushE
	Rotate(var_40_float, var_41_float, var_22_bool); // 0x599 Func
	var_42_bool = var_22_bool == 0; // 0x59b Not
	if(var_42_bool == 0) goto Label_1438; // 0x59c JumpB
	goto Label_1463; // 0x59d Jump
	
Label_1438:
	WaitForAnimEnd(var_22_bool); // 0x59e Func
	var_43_bool = var_22_bool == 0; // 0x5a0 Not
	if(var_43_bool == 0) goto Label_1443; // 0x5a1 JumpB
	goto Label_1463; // 0x5a2 Jump
	
Label_1443:
	goto Label_1464; // 0x5a3 Jump
	
Label_1445:
	var_44_int = 1; // 0x5a5 PushI
	Sleep(var_44_int); // 0x5a6 Func
	var_24_object = 0; // 0x5a8 SetNull
	goto Label_1463; // 0x5a9 Jump
	
Label_1450:
	var_45_float = GetByIndex(var_0_object, 0); // 0x5aa PushE
	var_46_float = GetByIndex(var_0_object, 2); // 0x5ab PushE
	Rotate(var_45_float, var_46_float, var_22_bool); // 0x5ac Func
	var_47_bool = var_22_bool == 0; // 0x5ae Not
	if(var_47_bool == 0) goto Label_1457; // 0x5af JumpB
	goto Label_1463; // 0x5b0 Jump
	
Label_1457:
	WaitForAnimEnd(var_22_bool); // 0x5b1 Func
	var_48_bool = var_22_bool == 0; // 0x5b3 Not
	if(var_48_bool == 0) goto Label_1462; // 0x5b4 JumpB
	goto Label_1463; // 0x5b5 Jump
	
Label_1462:
	goto Label_1464; // 0x5b6 Jump
}


func_876(var_0_object, var_254_bool)
{
	var_255_bool = 0; var_256_bool = 0; // 0x36c PushV
	var_257_string = "IsAttacking"; // 0x36d PushS
	var_258_int = 1; // 0x36e PushI
	var_259_bool = IsFuncExist(var_0_object, var_257_string, var_258_int); // 0x36f FuncExist
	if(var_259_bool == 0) goto Label_885; // 0x370 JumpB
	IsAttacking(var_256_bool); // 0x371 TObjFunc
	var_254_bool = var_256_bool; // 0x373 Mov
	return 2; // 0x374 Return
	
Label_885:
	var_254_bool = 0; // 0x375 MovB
	return 2; // 0x376 Return
}


func_1646(var_92_bool, var_93_object)
{
	var_94_int = 0; var_95_int = 0; // 0x66e PushV
	var_96_bool = 0; var_97_object = Obj(); // 0x66f PushV
	var_97_object = var_93_object; // 0x670 Mov
	func_1610(var_96_bool, var_97_object); // 0x671 NEW_2
	var_113_bool = var_96_bool == 0; // 0x673 Not
	if(var_113_bool == 0) goto Label_1655; // 0x674 JumpB
	var_92_bool = 0; // 0x675 MovB
	return 2; // 0x676 Return
	
Label_1655:
	var_114_bool = 0; var_115_object = Obj(); var_116_string = ""; // 0x677 PushV
	var_115_object = var_93_object; // 0x678 Mov
	var_116_string = "noaccess"; // 0x679 MovS
	func_1498(var_114_bool, var_115_object, var_116_string); // 0x67a NEW_2
	var_123_bool = var_114_bool == 0; // 0x67c Not
	if(var_123_bool == 0) goto Label_1664; // 0x67d JumpB
	var_92_bool = 1; // 0x67e MovB
	return 2; // 0x67f Return
	
Label_1664:
	var_124_string = "noaccess"; // 0x680 PushS
	GetProperty(var_124_string, var_95_int); // 0x681 ObjFunc
	var_125_int = 0; // 0x683 PushI
	var_92_bool = var_95_int == var_125_int; // 0x684 Eq2
	return 2; // 0x685 Return
}


func_1908(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0; // 0x774 PushV
	lshHasAnimation(var_109_bool, var_102_string); // 0x775 Func
	var_112_bool = var_109_bool; // 0x777 Push
	if(var_112_bool == 0) goto Label_1918; // 0x778 JumpB
	lshGetAnimTimes(var_102_string, var_110_float, var_111_float); // 0x779 Func
	lshPlayAnimation(var_110_float, var_111_float, var_103_bool); // 0x77b Func
	goto Label_1922; // 0x77d Jump
	
Label_1922:
	return 6; // 0x782 Return
	
Label_1918:
	var_113_string = "Can't find lsh animation : "; // 0x77e PushS
	var_114_int = var_113_string + var_102_string; // 0x77f Add
	Trace(var_114_int); // 0x780 Func
}


func_887(var_2_object, var_5_object)
{
	var_371_float = 0; var_372_int = 0; var_373_float = 0; var_374_int = 0; // 0x377 PushV
	var_375_bool = var_2_object == 0; // 0x378 Not
	if(var_375_bool == 0) goto Label_891; // 0x379 JumpB
	return 4; // 0x37a Return
	
Label_891:
	var_376_object = var_5_object; // 0x37b PushT
	if(var_376_object == 0) goto Label_899; // 0x37c JumpB
	var_377_int = -1; // 0x37d PushI
	var_5_object = var_5_object + var_377_int; // 0x37e Add2
	var_378_int = 0; // 0x37f PushI
	var_379_bool = var_5_object > var_378_int; // 0x380 GT
	if(var_379_bool == 0) goto Label_899; // 0x381 JumpB
	return 4; // 0x382 Return
	
Label_899:
	rand(var_373_float); // 0x383 Func
	var_380_float = 0; // 0x385 PushV
	func_937(var_380_float); // 0x386 NEW_2
	var_381_bool = var_373_float < var_380_float; // 0x388 LT
	if(var_381_bool == 0) goto Label_918; // 0x389 JumpB
	irand(var_374_int, var_373_float); // 0x38a Func
	var_382_int = 1; // 0x38c PushI
	var_374_int = var_374_int + var_382_int; // 0x38d Add2
	var_383_string = "attack"; // 0x38e PushS
	var_384_int = var_383_string + var_374_int; // 0x38f Add
	Speak(var_384_int); // 0x390 Func
	var_385_int = 0; // 0x392 PushV
	func_935(var_385_int); // 0x393 NEW_2
	var_5_object = var_385_int; // 0x394 TMov
	
Label_918:
	return 4; // 0x396 Return
}


func_1146(var_0_object, var_1_object, var_25_int)
{
	var_26_int = 0; // 0x47b PushI
	var_27_bool = var_25_int != var_26_int; // 0x47c Neq
	if(var_27_bool == 0) goto Label_1151; // 0x47d JumpB
	return 0; // 0x47e Return
	
Label_1151:
	var_28_bool = 0; var_29_object = Obj(); // 0x47f PushV
	var_29_object = var_1_object; // 0x480 MovT
	func_1184(var_28_bool, var_29_object); // 0x481 NEW_2
	var_64_bool = var_28_bool == 0; // 0x483 Not
	if(var_64_bool == 0) goto Label_1158; // 0x484 JumpB
	var_0_object = 1; // 0x485 TMovB
	
Label_1158:
	var_65_int = 0; // 0x486 PushI
	KillTimer(var_65_int); // 0x487 Func
	Stop(); // 0x489 Func
	return 0; // 0x48b Return
}


func_2171(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x87b PushV
	var_85_string = "branch"; // 0x87c PushS
	GetVariable(var_85_string, var_84_int); // 0x87d Func
	var_86_int = 0; // 0x87f PushI
	var_87_bool = var_84_int == var_86_int; // 0x880 Eq
	if(var_87_bool == 0) goto Label_2181; // 0x881 JumpB
	var_82_int = 1; // 0x882 MovI
	return 2; // 0x883 Return
	
Label_2181:
	var_88_int = 1; // 0x885 PushI
	var_89_bool = var_84_int == var_88_int; // 0x886 Eq
	if(var_89_bool == 0) goto Label_2186; // 0x887 JumpB
	var_82_int = 2; // 0x888 MovI
	return 2; // 0x889 Return
	
Label_2186:
	var_82_int = 3; // 0x88a MovI
	return 2; // 0x88b Return
}


func_127(var_2_object, var_98_string)
{
	var_99_bool = 0; // 0x80 PushV
	func_2324(var_99_bool); // 0x81 NEW_2
	var_100_bool = var_99_bool == 0; // 0x83 Not
	if(var_100_bool == 0) goto Label_134; // 0x84 JumpB
	return 0; // 0x85 Return
	
Label_134:
	var_101_bool = var_98_string == var_2_object; // 0x86 Eq
	if(var_101_bool == 0) goto Label_137; // 0x87 JumpB
	return 0; // 0x88 Return
	
Label_137:
	var_102_string = ""; var_103_bool = 0; // 0x89 PushV
	var_102_string = var_98_string; // 0x8a Mov
	var_104_string = ""; // 0x8b PushS
	var_105_bool = var_98_string == var_104_string; // 0x8c Eq
	if(var_105_bool == 0) goto Label_144; // 0x8d JumpB
	var_103_bool = 0; // 0x8e MovB
	goto Label_145; // 0x8f Jump
	
Label_145:
	func_1908(var_102_string, var_103_bool); // 0x91 NEW_2
	var_2_object = var_98_string; // 0x93 TMov
	return 0; // 0x94 Return
	
Label_144:
	var_103_bool = 1; // 0x90 MovB
}


func_1923(var_151_object)
{
	var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_float = 0; var_155_cvector = CVector(0,0,0); // 0x783 PushV
	GetEyesHeight(var_154_float); // 0x784 ObjFunc
	var_155_cvector = CVector(0.0, 0.0, 0.0); // 0x786 MovV
	var_156_float = GetByIndex(var_155_cvector, 1); // 0x787 PushE
	var_156_float = var_154_float; // 0x788 Mov
	SetByIndex(var_155_cvector, 1) = var_156_float; // 0x789 PopE
	var_157_string = "head"; // 0x78a PushS
	LookAsync(var_151_object, var_157_string, var_155_cvector); // 0x78b Func
	return 4; // 0x78d Return
}


func_1670(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x686 PushV
	var_49_bool = var_34_object == 0; // 0x687 NullEq
	if(var_49_bool == 0) goto Label_1674; // 0x688 JumpB
	return 14; // 0x689 Return
	
Label_1674:
	IsDead(var_42_bool); // 0x68a Func
	var_50_bool = var_42_bool; // 0x68c Push
	if(var_50_bool == 0) goto Label_1679; // 0x68d JumpB
	return 14; // 0x68e Return
	
Label_1679:
	GetSecondaryAnimationType(var_43_int); // 0x68f Func
	var_51_int = 0; // 0x691 PushI
	var_52_bool = var_43_int < var_51_int; // 0x692 LT
	if(var_52_bool == 0) goto Label_1685; // 0x693 JumpB
	return 14; // 0x694 Return
	
Label_1685:
	GetPosition(var_44_cvector); // 0x695 ObjFunc
	GetPosition(var_45_cvector); // 0x697 Func
	GetDirection(var_46_cvector); // 0x699 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x69b Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x69c PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x69d PushE
	var_55_float = var_53_float * var_54_float; // 0x69e Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x69f PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x6a0 PushE
	var_58_float = var_56_float * var_57_float; // 0x6a1 Mult
	var_59_int = var_55_float + var_58_float; // 0x6a2 Add
	var_60_int = 0; // 0x6a3 PushI
	var_61_bool = var_59_int >= var_60_int; // 0x6a4 GE
	if(var_61_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_48_string = "fhit"; // 0x6a6 MovS
	goto Label_1705; // 0x6a7 Jump
	
Label_1705:
	var_62_string = "hit_react"; // 0x6a9 PushS
	var_63_string = "1"; // 0x6aa PushS
	var_64_int = var_48_string + var_63_string; // 0x6ab Add
	var_65_string = "2"; // 0x6ac PushS
	var_66_int = var_48_string + var_65_string; // 0x6ad Add
	var_67_int = -10; // 0x6ae PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x6af Func
	return 14; // 0x6b1 Return
	
Label_1704:
	var_48_string = "bhit"; // 0x6a8 MovS
}


func_2188(var_27_int)
{
	var_28_int = 0; var_29_int = 0; // 0x88c PushV
	var_30_string = "branch"; // 0x88d PushS
	GetVariable(var_30_string, var_29_int); // 0x88e Func
	var_27_int = var_29_int; // 0x890 Mov
	return 2; // 0x891 Return
}


func_1934()
{
	var_20_bool = 0; // 0x78e PushV
	func_2324(var_20_bool); // 0x78f NEW_2
	if(var_20_bool == 0) goto Label_1940; // 0x791 JumpB
	lshStopSpeech(); // 0x792 Func
	
Label_1940:
	return 0; // 0x794 Return
}


func_1168(var_0_object)
{
	var_0_object = 1; // 0x490 TMovB
	var_21_int = 0; // 0x491 PushI
	KillTimer(var_21_int); // 0x492 Func
	Stop(); // 0x494 Func
	return 0; // 0x496 Return
}


func_2194(var_21_object)
{
	var_22_int = 0; // 0x893 PushV
	func_2188(var_22_int); // 0x894 NEW_2
	var_26_int = 1; // 0x896 PushI
	var_27_bool = var_22_int == var_26_int; // 0x897 Eq
	if(var_27_bool == 0) goto Label_2204; // 0x898 JumpB
	WorkWithCorpse(var_21_object); // 0x899 Func
	goto Label_2206; // 0x89b Jump
	
Label_2206:
	return 0; // 0x89e Return
	
Label_2204:
	Barter(var_21_object); // 0x89c Func
}


func_1941(var_113_string)
{
	var_114_bool = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0; var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_bool = 0; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); // 0x795 PushV
	IsExisting3DSound(var_122_bool, var_113_string); // 0x796 Func
	var_130_bool = var_122_bool == 0; // 0x798 Not
	if(var_130_bool == 0) goto Label_1966; // 0x799 JumpB
	var_123_int = 0; // 0x79a MovI
	
Label_1947:
	var_131_int = 1; // 0x79b PushI
	var_132_int = var_123_int + var_131_int; // 0x79c Add
	var_133_int = var_113_string + var_132_int; // 0x79d Add
	IsExisting3DSound(var_124_bool, var_133_int); // 0x79e Func
	var_134_bool = var_124_bool == 0; // 0x7a0 Not
	if(var_134_bool == 0) goto Label_1955; // 0x7a1 JumpB
	goto Label_1958; // 0x7a2 Jump
	
Label_1958:
	var_135_bool = var_123_int == 0; // 0x7a6 Not
	if(var_135_bool == 0) goto Label_1961; // 0x7a7 JumpB
	return 16; // 0x7a8 Return
	
Label_1961:
	irand(var_125_int, var_123_int); // 0x7a9 Func
	var_136_int = 1; // 0x7ab PushI
	var_137_int = var_125_int + var_136_int; // 0x7ac Add
	var_113_string = var_113_string + var_137_int; // 0x7ad Add2
	
Label_1966:
	Is3DSoundLoaded(var_126_bool, var_113_string); // 0x7ae Func
	var_138_bool = var_126_bool; // 0x7b0 Push
	if(var_138_bool == 0) goto Label_1981; // 0x7b1 JumpB
	GetEyesHeight(var_127_float); // 0x7b2 Func
	GetDirection(var_128_cvector); // 0x7b4 Func
	var_139_int = 50; // 0x7b6 PushI
	var_129_cvector = var_128_cvector * var_139_int; // 0x7b7 Mult2
	var_140_float = GetByIndex(var_129_cvector, 1); // 0x7b8 PushE
	var_140_float = var_140_float + var_127_float; // 0x7b9 Add2
	SetByIndex(var_129_cvector, 1) = var_140_float; // 0x7ba PopE
	PlayGlobalSound(var_113_string, var_129_cvector); // 0x7bb Func
	
Label_1981:
	return 16; // 0x7bd Return
	
Label_1955:
	var_141_int = 1; // 0x7a3 PushI
	var_123_int = var_123_int + var_141_int; // 0x7a4 Add2
	goto Label_1947; // 0x7a5 Jump
}


func_919(var_0_object)
{
	var_127_object = Obj(); // 0x397 PushV
	var_127_object = var_0_object; // 0x398 MovT
	func_2087(var_127_object); // 0x399 NEW_2
	return 0; // 0x39b Return
}


func_924(var_464_int)
{
	var_464_int = 0; // 0x39c MovI
	return 0; // 0x39d Return
}


func_926()
{
	var_260_string = ""; // 0x39e PushV
	var_260_string = "attack_stay"; // 0x39f MovS
	func_1941(var_260_string); // 0x3a0 NEW_2
	return 0; // 0x3a2 Return
}


func_2207(var_33_string)
{
	var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; // 0x89f PushV
	CreateInvItem(var_37_object); // 0x8a0 Func
	SetItemName(var_33_string); // 0x8a2 ObjFunc
	var_40_string = "Organ"; // 0x8a4 PushS
	var_41_int = 1; // 0x8a5 PushI
	SetProperty(var_40_string, var_41_int); // 0x8a6 ObjFunc
	GetItemID(var_38_int); // 0x8a8 ObjFunc
	var_42_int = 0; // 0x8aa PushI
	var_43_int = 1; // 0x8ab PushI
	AddItem(var_39_bool, var_37_object, var_42_int, var_43_int); // 0x8ac Func
	return 6; // 0x8ae Return
}


func_1184(var_185_bool, var_186_object)
{
	var_187_bool = 0; var_188_object = Obj(); // 0x4a1 PushV
	var_188_object = var_186_object; // 0x4a2 Mov
	func_1646(var_187_bool, var_188_object); // 0x4a3 NEW_2
	var_185_bool = var_187_bool; // 0x4a4 Mov
	return 0; // 0x4a6 Return
}


func_931()
{
	return 0; // 0x3a4 Return
}


func_933(var_489_bool)
{
	var_489_bool = 1; // 0x3a5 MovB
	return 0; // 0x3a6 Return
}


func_1191(var_203_string)
{
	var_203_string = "walk"; // 0x4a7 MovS
	return 0; // 0x4a8 Return
}


func_935(var_385_int)
{
	var_385_int = 1; // 0x3a7 MovI
	return 0; // 0x3a8 Return
}


func_1193(var_204_string)
{
	var_204_string = "run"; // 0x4a9 MovS
	return 0; // 0x4aa Return
}


func_937(var_380_float)
{
	var_380_float = 0.5; // 0x3a9 MovF
	return 0; // 0x3aa Return
}


func_1195(var_89_object)
{
	var_90_object = Obj(); // 0x4ac PushV
	var_90_object = var_89_object; // 0x4ad Mov
	func_1218(var_90_object); // 0x4ae NEW_2
	var_170_int = 50; // 0x4b0 PushI
	var_171_int = 40; // 0x4b1 PushI
	SetRTEnvelope(var_170_int, var_171_int); // 0x4b2 Func
	
Label_1204:
	Hold(); // 0x4b4 Func
	goto Label_1204; // 0x4b6 Jump
}


func_939(var_2_object, var_134_bool, var_135_object, var_136_float, var_137_float, var_138_bool, var_139_bool)
{
	var_143_bool = 0; var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; // 0x3ab PushV
	var_147_object = Obj(); // 0x3ac PushV
	var_147_object = var_135_object; // 0x3ad Mov
	func_2087(var_147_object); // 0x3ae NEW_2
	var_148_int = 1; // 0x3b0 PushI
	var_149_int = 5; // 0x3b1 PushI
	SetTimer(var_148_int, var_149_int); // 0x3b2 Func
	CanSee(var_145_bool, var_135_object); // 0x3b4 Func
	var_150_bool = var_145_bool; // 0x3b6 Push
	if(var_150_bool == 0) goto Label_958; // 0x3b7 JumpB
	var_2_object = 1; // 0x3b8 TMovB
	var_151_object = Obj(); // 0x3b9 PushV
	var_151_object = var_135_object; // 0x3ba Mov
	func_1923(var_151_object); // 0x3bb NEW_2
	goto Label_959; // 0x3bd Jump
	
Label_959:
	var_158_bool = 0; var_159_object = Obj(); // 0x3bf PushV
	var_159_object = var_135_object; // 0x3c0 Mov
	func_1493(var_158_bool, var_159_object); // 0x3c1 NEW_2
	if(var_158_bool == 0) goto Label_969; // 0x3c3 JumpB
	var_162_object = Obj(); // 0x3c4 PushV
	func_1982(var_162_object); // 0x3c5 NEW_2
	SendPlayerEnemy(var_135_object, var_162_object); // 0x3c7 Func
	
Label_969:
	var_163_bool = 0; var_164_object = Obj(); var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_bool = 0; // 0x3c9 PushV
	var_164_object = var_135_object; // 0x3ca Mov
	var_165_float = var_136_float; // 0x3cb Mov
	var_166_float = var_137_float; // 0x3cc Mov
	var_167_bool = var_138_bool; // 0x3cd Mov
	var_168_bool = var_139_bool; // 0x3ce Mov
	func_1044(var_145_bool, var_146_bool, var_163_bool, var_164_object, var_165_float, var_166_float, var_167_bool, var_168_bool); // 0x3cf NEW_2
	var_146_bool = var_163_bool; // 0x3d0 Mov
	var_214_object = var_2_object; // 0x3d2 PushT
	if(var_214_object == 0) goto Label_983; // 0x3d3 JumpB
	var_215_string = "head"; // 0x3d4 PushS
	UnlookAsync(var_215_string); // 0x3d5 Func
	
Label_983:
	var_216_int = 1; // 0x3d7 PushI
	KillTimer(var_216_int); // 0x3d8 Func
	var_134_bool = var_146_bool; // 0x3da Mov
	return 4; // 0x3db Return
	
Label_958:
	var_2_object = 0; // 0x3be TMovB
}


func_2224()
{
	var_27_int = 0; // 0x8b0 PushV
	func_2188(var_27_int); // 0x8b1 NEW_2
	var_31_int = 1; // 0x8b3 PushI
	var_32_bool = var_27_int != var_31_int; // 0x8b4 Neq
	if(var_32_bool == 0) goto Label_2231; // 0x8b5 JumpB
	return 0; // 0x8b6 Return
	
Label_2231:
	var_33_string = ""; // 0x8b7 PushV
	var_33_string = "liver"; // 0x8b8 MovS
	func_2207(var_33_string); // 0x8b9 NEW_2
	var_44_string = ""; // 0x8bb PushV
	var_44_string = "kidney"; // 0x8bc MovS
	func_2207(var_44_string); // 0x8bd NEW_2
	var_45_string = ""; // 0x8bf PushV
	var_45_string = "heart"; // 0x8c0 MovS
	func_2207(var_45_string); // 0x8c1 NEW_2
	var_46_string = ""; // 0x8c3 PushV
	var_46_string = "blood"; // 0x8c4 MovS
	func_2207(var_46_string); // 0x8c5 NEW_2
	return 0; // 0x8c7 Return
}


func_1714(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x6b2 PushV
	var_42_bool = 0; // 0x6b3 PushV
	var_42_bool = 0; // 0x6b4 MovB
	var_43_bool = 0; // 0x6b5 PushV
	var_43_bool = 0; // 0x6b6 MovB
	var_44_object = var_21_object; // 0x6b7 Push
	if(var_44_object == 0) goto Label_1725; // 0x6b8 JumpB
	var_45_int = 4; // 0x6b9 PushI
	var_46_bool = var_22_int != var_45_int; // 0x6ba Neq
	if(var_46_bool == 0) goto Label_1725; // 0x6bb JumpB
	var_43_bool = 1; // 0x6bc MovB
	
Label_1725:
	if(var_43_bool == 0) goto Label_1730; // 0x6bd JumpB
	var_47_int = 5; // 0x6be PushI
	var_48_bool = var_22_int != var_47_int; // 0x6bf Neq
	if(var_48_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_42_bool = 1; // 0x6c1 MovB
	
Label_1730:
	if(var_42_bool == 0) goto Label_1777; // 0x6c2 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x6c3 PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x6c4 PushV
	var_52_object = var_21_object; // 0x6c5 Mov
	func_1486(var_52_object); // 0x6c6 NEW_2
	var_50_cvector = var_51_cvector; // 0x6c7 Mov
	func_1988(var_49_cvector, var_50_cvector); // 0x6c9 NEW_2
	var_33_cvector = var_49_cvector; // 0x6ca Mov
	CreateVectorVector(var_34_object); // 0x6cc Func
	var_35_int = 1; // 0x6ce MovI
	
Label_1743:
	var_62_string = "hit"; // 0x6cf PushS
	var_63_int = var_62_string + var_35_int; // 0x6d0 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x6d1 Func
	var_64_bool = var_36_bool == 0; // 0x6d3 Not
	if(var_64_bool == 0) goto Label_1750; // 0x6d4 JumpB
	goto Label_1759; // 0x6d5 Jump
	
Label_1759:
	size(var_39_int); // 0x6df ObjFunc
	var_65_int = var_39_int; // 0x6e1 Push
	if(var_65_int == 0) goto Label_1776; // 0x6e2 JumpB
	irand(var_40_int, var_39_int); // 0x6e3 Func
	get(var_41_cvector, var_40_int); // 0x6e5 ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x6e7 PushV
	var_66_object = var_21_object; // 0x6e8 Mov
	var_67_int = var_22_int; // 0x6e9 Mov
	var_68_float = var_23_float; // 0x6ea Mov
	var_69_cvector = var_41_cvector; // 0x6eb Mov
	var_70_cvector = -var_33_cvector; // 0x6ec Neg2
	func_1782(var_68_float, var_69_cvector, var_70_cvector); // 0x6ed NEW_2
	return 18; // 0x6ef Return
	
Label_1776:
	var_34_object = 0; // 0x6f0 SetNull
	
Label_1777:
	var_111_object = Obj(); // 0x6f1 PushV
	var_111_object = var_21_object; // 0x6f2 Mov
	func_1670(var_111_object); // 0x6f3 NEW_2
	return 18; // 0x6f5 Return
	
Label_1750:
	var_112_int = var_38_cvector | var_33_cvector; // 0x6d6 Or
	var_113_float = 0.70711; // 0x6d7 PushF
	var_114_bool = var_112_int >= var_113_float; // 0x6d8 GE
	if(var_114_bool == 0) goto Label_1756; // 0x6d9 JumpB
	add(var_37_cvector); // 0x6da ObjFunc
	
Label_1756:
	var_115_int = 1; // 0x6dc PushI
	var_35_int = var_35_int + var_115_int; // 0x6dd Add2
	goto Label_1743; // 0x6de Jump
}


func_1466()
{
	StopGroup0(); // 0x5ba Func
	Stop(); // 0x5bc Func
	return 0; // 0x5be Return
}


func_1982(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x7be PushV
	self(var_88_object); // 0x7bf Func
	var_86_object = var_88_object; // 0x7c1 Mov
	return 2; // 0x7c2 Return
}


func_1471()
{
	return 0; // 0x5bf Return
}


func_1472(var_431_string, var_432_int)
{
	var_433_int = 2; // 0x5c1 PushI
	var_434_bool = var_432_int == var_433_int; // 0x5c2 Eq
	if(var_434_bool == 0) goto Label_1479; // 0x5c3 JumpB
	var_431_string = "fire"; // 0x5c4 MovS
	return 0; // 0x5c5 Return
	
Label_1479:
	var_435_int = 1; // 0x5c7 PushI
	var_436_bool = var_432_int == var_435_int; // 0x5c8 Eq
	if(var_436_bool == 0) goto Label_1484; // 0x5c9 JumpB
	var_431_string = "bullet"; // 0x5ca MovS
	return 0; // 0x5cb Return
	
Label_1484:
	var_431_string = "phys"; // 0x5cc MovS
	return 0; // 0x5cd Return
}


func_1218(var_90_object)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_string = ""; var_96_object = Obj(); var_97_bool = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_string = ""; var_106_object = Obj(); var_107_bool = 0; var_108_bool = 0; var_109_float = 0; var_110_cvector = CVector(0,0,0); // 0x4c2 PushV
	var_111_bool = var_90_object == 0; // 0x4c3 NullEq
	if(var_111_bool == 0) goto Label_1226; // 0x4c4 JumpB
	var_112_string = ""; // 0x4c5 PushV
	var_112_string = "fdie"; // 0x4c6 MovS
	func_1309(var_112_string); // 0x4c7 NEW_2
	goto Label_1308; // 0x4c9 Jump
	
Label_1308:
	return 20; // 0x51c Return
	
Label_1226:
	GetPosition(var_101_cvector); // 0x4ca ObjFunc
	GetPosition(var_102_cvector); // 0x4cc Func
	GetDirection(var_103_cvector); // 0x4ce Func
	var_104_cvector = var_102_cvector - var_101_cvector; // 0x4d0 Sub2
	var_144_float = GetByIndex(var_104_cvector, 0); // 0x4d1 PushE
	var_145_float = GetByIndex(var_103_cvector, 0); // 0x4d2 PushE
	var_146_float = var_144_float * var_145_float; // 0x4d3 Mult
	var_147_float = GetByIndex(var_104_cvector, 2); // 0x4d4 PushE
	var_148_float = GetByIndex(var_103_cvector, 2); // 0x4d5 PushE
	var_149_float = var_147_float * var_148_float; // 0x4d6 Mult
	var_150_int = var_146_float + var_149_float; // 0x4d7 Add
	var_151_int = 0; // 0x4d8 PushI
	var_152_bool = var_150_int >= var_151_int; // 0x4d9 GE
	if(var_152_bool == 0) goto Label_1245; // 0x4da JumpB
	var_105_string = "fdie"; // 0x4db MovS
	goto Label_1246; // 0x4dc Jump
	
Label_1246:
	RemoveRTEnvelope(); // 0x4de Func
	SetDeathState(); // 0x4e0 Func
	Stop(); // 0x4e2 Func
	StopAsync(); // 0x4e4 Func
	var_106_object = var_90_object; // 0x4e6 Mov
	var_153_string = "GetScriptProperty"; // 0x4e7 PushS
	var_154_int = 2; // 0x4e8 PushI
	var_155_bool = IsFuncExist(var_90_object, var_153_string, var_154_int); // 0x4e9 FuncExist
	if(var_155_bool == 0) goto Label_1270; // 0x4ea JumpB
	var_156_string = "Owner"; // 0x4eb PushS
	HasScriptProperty(var_107_bool, var_156_string); // 0x4ec ObjFunc
	var_157_bool = var_107_bool; // 0x4ee Push
	if(var_157_bool == 0) goto Label_1270; // 0x4ef JumpB
	var_158_string = "Owner"; // 0x4f0 PushS
	GetScriptProperty(var_106_object, var_158_string); // 0x4f1 ObjFunc
	var_159_bool = var_106_object == 0; // 0x4f3 NullEq
	if(var_159_bool == 0) goto Label_1270; // 0x4f4 JumpB
	var_106_object = var_90_object; // 0x4f5 Mov
	
Label_1270:
	var_160_string = "@GetEyesHeight"; // 0x4f6 PushS
	var_161_int = 1; // 0x4f7 PushI
	var_162_bool = IsFuncExist(var_106_object, var_160_string, var_161_int); // 0x4f8 FuncExist
	if(var_162_bool == 0) goto Label_1285; // 0x4f9 JumpB
	GetEyesHeight(var_109_float); // 0x4fa ObjFunc
	var_110_cvector = CVector(0.0, 0.0, 0.0); // 0x4fc MovV
	var_163_float = GetByIndex(var_110_cvector, 1); // 0x4fd PushE
	var_163_float = var_109_float; // 0x4fe Mov
	SetByIndex(var_110_cvector, 1) = var_163_float; // 0x4ff PopE
	var_164_string = "head"; // 0x500 PushS
	LookAsync(var_90_object, var_164_string, var_110_cvector); // 0x501 Func
	var_108_bool = 1; // 0x503 MovB
	goto Label_1286; // 0x504 Jump
	
Label_1286:
	var_165_string = ""; // 0x506 PushV
	var_165_string = var_105_string; // 0x507 Mov
	func_1941(var_165_string); // 0x508 NEW_2
	var_166_string = "all"; // 0x50a PushS
	PlayAnimation(var_166_string, var_105_string); // 0x50b Func
	WaitForAnimEnd(); // 0x50d Func
	var_167_bool = var_108_bool; // 0x50f Push
	if(var_167_bool == 0) goto Label_1302; // 0x510 JumpB
	StopAsync(); // 0x511 Func
	var_168_string = "head"; // 0x513 PushS
	UnlookAsync(var_168_string); // 0x514 Func
	
Label_1302:
	var_169_string = "all"; // 0x516 PushS
	LockAnimationEnd(var_169_string, var_105_string); // 0x517 Func
	RemoveEnvelope(); // 0x519 Func
	var_106_object = 0; // 0x51b SetNull
	
Label_1285:
	var_108_bool = 0; // 0x505 MovB
	
Label_1245:
	var_105_string = "bdie"; // 0x4dd MovS
}


func_1988(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x7c4 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0x7c5 Or
	var_58_float = sqrt(var_59_int); // 0x7c6 Sqrt2
	var_60_float = 0.0; // 0x7c7 PushF
	var_61_bool = var_58_float < var_60_float; // 0x7c8 LT
	if(var_61_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x7ca MovV
	return 2; // 0x7cb Return
	
Label_1996:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0x7cc Div2
	return 2; // 0x7cd Return
}


func_2248(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x8c8 PushV
	var_21_string = "revolver_ammo"; // 0x8c9 PushS
	var_22_int = 0; // 0x8ca PushI
	var_23_int = 2; // 0x8cb PushI
	AddItem(var_20_bool, var_21_string, var_22_int, var_23_int); // 0x8cc Func
	var_24_string = "alpha_pills"; // 0x8ce PushS
	var_25_int = 0; // 0x8cf PushI
	var_26_int = 2; // 0x8d0 PushI
	AddItem(var_20_bool, var_24_string, var_25_int, var_26_int); // 0x8d1 Func
	func_2224(); // 0x8d4 NEW_2
	var_47_bool = 0; var_48_object = Obj(); // 0x8d6 PushV
	var_48_object = var_18_object; // 0x8d7 Mov
	func_1493(var_47_bool, var_48_object); // 0x8d8 NEW_2
	if(var_47_bool == 0) goto Label_2272; // 0x8da JumpB
	var_51_bool = 0; var_52_object = Obj(); var_53_float = 0; // 0x8db PushV
	var_52_object = var_18_object; // 0x8dc Mov
	var_53_float = -0.2; // 0x8dd MovF
	func_2020(var_51_bool, var_52_object, var_53_float); // 0x8de NEW_2
	
Label_2272:
	var_89_object = Obj(); // 0x8e0 PushV
	var_89_object = var_18_object; // 0x8e1 Mov
	TaskCall(4); // 0x8e2 TaskCall
	func_1195(var_89_object); // 0x8e3 NEW_2
	TaskReturn(); // 0x8e4 TaskReturn
	return 2; // 0x8e6 Return
}


func_717(var_490_bool, var_491_float)
{
	var_492_float = 0; var_493_bool = 0; var_494_float = 0; var_495_bool = 0; // 0x2cd PushV
	rand(var_494_float); // 0x2ce Func
	var_496_bool = var_494_float < var_491_float; // 0x2d0 LT
	if(var_496_bool == 0) goto Label_737; // 0x2d1 JumpB
	
Label_722:
	IsAnimationPlaying(var_495_bool); // 0x2d2 Func
	var_497_bool = var_495_bool == 0; // 0x2d4 Not
	if(var_497_bool == 0) goto Label_727; // 0x2d5 JumpB
	goto Label_736; // 0x2d6 Jump
	
Label_736:
	goto Label_742; // 0x2e0 Jump
	
Label_742:
	var_490_bool = 0; // 0x2e6 MovB
	return 4; // 0x2e7 Return
	
Label_727:
	var_498_bool = 0; // 0x2d7 PushV
	func_815(var_498_bool); // 0x2d8 NEW_2
	if(var_498_bool == 0) goto Label_733; // 0x2da JumpB
	var_490_bool = 1; // 0x2db MovB
	return 4; // 0x2dc Return
	
Label_733:
	sync(); // 0x2dd Func
	goto Label_722; // 0x2df Jump
	
Label_737:
	WaitForAnimEnd(); // 0x2e1 Func
	func_919(var_495_bool); // 0x2e4 NEW_2
}


func_1486(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x5ce PushV
	GetPosition(var_55_cvector); // 0x5cf Func
	GetPosition(var_56_cvector); // 0x5d1 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x5d3 Sub2
	return 4; // 0x5d4 Return
}


func_1998(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x7ce PushV
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x7cf Sub2
	var_29_float = var_33_cvector | var_33_cvector; // 0x7d0 Or2
	return 2; // 0x7d1 Return
}


func_2002(var_441_float, var_442_float, var_443_float)
{
	var_446_bool = var_442_float < var_443_float; // 0x7d3 LT
	if(var_446_bool == 0) goto Label_2007; // 0x7d4 JumpB
	var_441_float = var_442_float; // 0x7d5 Mov
	goto Label_2008; // 0x7d6 Jump
	
Label_2008:
	return 0; // 0x7d8 Return
	
Label_2007:
	var_441_float = var_443_float; // 0x7d7 Mov
}


func_1493(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_bool = 0; // 0x5d5 PushV
	IsPlayerActor(var_48_object, var_50_bool); // 0x5d6 Func
	var_47_bool = var_50_bool; // 0x5d8 Mov
	return 2; // 0x5d9 Return
}


func_2009(var_80_float, var_81_float, var_82_float, var_83_float)
{
	var_84_bool = var_81_float < var_82_float; // 0x7da LT
	if(var_84_bool == 0) goto Label_2014; // 0x7db JumpB
	var_80_float = var_82_float; // 0x7dc Mov
	return 0; // 0x7dd Return
	
Label_2014:
	var_85_bool = var_81_float > var_83_float; // 0x7de GT
	if(var_85_bool == 0) goto Label_2018; // 0x7df JumpB
	var_80_float = var_83_float; // 0x7e0 Mov
	return 0; // 0x7e1 Return
	
Label_2018:
	var_80_float = var_81_float; // 0x7e2 Mov
	return 0; // 0x7e3 Return
}


func_1498(var_70_bool, var_71_object, var_72_string)
{
	var_73_bool = 0; var_74_bool = 0; // 0x5da PushV
	var_75_string = "HasProperty"; // 0x5db PushS
	var_76_int = 2; // 0x5dc PushI
	var_77_bool = IsFuncExist(var_71_object, var_75_string, var_76_int); // 0x5dd FuncExist
	var_78_bool = var_77_bool == 0; // 0x5de Not
	if(var_78_bool == 0) goto Label_1506; // 0x5df JumpB
	var_70_bool = 0; // 0x5e0 MovB
	return 2; // 0x5e1 Return
	
Label_1506:
	HasProperty(var_72_string, var_74_bool); // 0x5e2 ObjFunc
	var_70_bool = var_74_bool; // 0x5e4 Mov
	return 2; // 0x5e5 Return
}


func_2020(var_51_bool, var_52_object, var_53_float)
{
	var_54_bool = var_52_object == 0; // 0x7e5 Not
	if(var_54_bool == 0) goto Label_2025; // 0x7e6 JumpB
	var_51_bool = 0; // 0x7e7 MovB
	return 0; // 0x7e8 Return
	
Label_2025:
	var_55_int = 0; // 0x7e9 PushI
	var_56_bool = var_53_float > var_55_int; // 0x7ea GT
	if(var_56_bool == 0) goto Label_2032; // 0x7eb JumpB
	var_57_int = 8; // 0x7ec PushI
	SendWorldWndMessage(var_57_int); // 0x7ed Func
	goto Label_2041; // 0x7ef Jump
	
Label_2041:
	var_58_float = 0; // 0x7f9 PushV
	var_58_float = var_53_float; // 0x7fa Mov
	func_2065(var_58_float); // 0x7fb NEW_2
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; var_65_float = 0; var_66_float = 0; var_67_float = 0; // 0x7fd PushV
	var_63_object = var_52_object; // 0x7fe Mov
	var_64_string = "reputation"; // 0x7ff MovS
	var_65_float = var_53_float; // 0x800 Mov
	var_66_float = 0; // 0x801 MovI
	var_67_float = 1; // 0x802 MovI
	func_1510(var_62_bool, var_63_object, var_64_string, var_65_float, var_66_float, var_67_float); // 0x803 NEW_2
	var_51_bool = 1; // 0x805 MovB
	return 0; // 0x806 Return
	
Label_2032:
	var_86_int = 0; // 0x7f0 PushI
	var_87_bool = var_53_float < var_86_int; // 0x7f1 LT
	if(var_87_bool == 0) goto Label_2039; // 0x7f2 JumpB
	var_88_int = 9; // 0x7f3 PushI
	SendWorldWndMessage(var_88_int); // 0x7f4 Func
	goto Label_2041; // 0x7f6 Jump
	
Label_2039:
	var_51_bool = 0; // 0x7f7 MovB
	return 0; // 0x7f8 Return
}


func_1510(var_62_bool, var_63_object, var_64_string, var_65_float, var_66_float, var_67_float)
{
	var_68_float = 0; var_69_float = 0; // 0x5e6 PushV
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0x5e7 PushV
	var_71_object = var_63_object; // 0x5e8 Mov
	var_72_string = var_64_string; // 0x5e9 Mov
	func_1498(var_70_bool, var_71_object, var_72_string); // 0x5ea NEW_2
	var_79_bool = var_70_bool == 0; // 0x5ec Not
	if(var_79_bool == 0) goto Label_1520; // 0x5ed JumpB
	var_62_bool = 0; // 0x5ee MovB
	return 2; // 0x5ef Return
	
Label_1520:
	GetProperty(var_64_string, var_69_float); // 0x5f0 ObjFunc
	var_80_float = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0; // 0x5f2 PushV
	var_81_float = var_69_float + var_65_float; // 0x5f3 Add2
	var_82_float = var_66_float; // 0x5f4 Mov
	var_83_float = var_67_float; // 0x5f5 Mov
	func_2009(var_80_float, var_81_float, var_82_float, var_83_float); // 0x5f6 NEW_2
	SetProperty(var_64_string, var_80_float); // 0x5f8 ObjFunc
	var_62_bool = 1; // 0x5fa MovB
	return 2; // 0x5fb Return
}


func_744(var_0_object, var_291_bool, var_292_float)
{
	var_293_bool = 0; var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_float = 0; var_298_bool = 0; var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; // 0x2e8 PushV
	
Label_745:
	IsAnimationPlaying(var_298_bool); // 0x2e9 Func
	var_303_bool = var_298_bool == 0; // 0x2eb Not
	if(var_303_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_782; // 0x2ed Jump
	
Label_782:
	func_919(var_302_float); // 0x30f NEW_2
	var_291_bool = 0; // 0x311 MovB
	return 10; // 0x312 Return
	
Label_750:
	var_304_bool = 0; // 0x2ee PushV
	func_815(var_304_bool); // 0x2ef NEW_2
	if(var_304_bool == 0) goto Label_756; // 0x2f1 JumpB
	var_291_bool = 1; // 0x2f2 MovB
	return 10; // 0x2f3 Return
	
Label_756:
	var_347_bool = 0; var_348_object = Obj(); // 0x2f4 PushV
	var_348_object = var_0_object; // 0x2f5 MovT
	func_1646(var_347_bool, var_348_object); // 0x2f6 NEW_2
	var_349_bool = var_347_bool == 0; // 0x2f8 Not
	if(var_349_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_291_bool = 0; // 0x2fa MovB
	return 10; // 0x2fb Return
	
Label_764:
	GetPFPosition(var_299_cvector); // 0x2fc TObjFunc
	GetPFPosition(var_300_cvector); // 0x2fe Func
	var_301_cvector = var_299_cvector - var_300_cvector; // 0x300 Sub2
	var_302_float = var_301_cvector | var_301_cvector; // 0x301 Or2
	var_350_float = var_292_float * var_292_float; // 0x302 Mult
	var_351_bool = var_302_float < var_350_float; // 0x303 LT
	if(var_351_bool == 0) goto Label_779; // 0x304 JumpB
	var_352_bool = 0; var_353_float = 0; // 0x305 PushV
	var_353_float = var_292_float; // 0x306 Mov
	func_580(var_302_float, var_352_bool, var_353_float); // 0x307 NEW_2
	var_291_bool = 1; // 0x309 MovB
	return 10; // 0x30a Return
	
Label_779:
	sync(); // 0x30b Func
	goto Label_745; // 0x30d Jump
}


func_1002(var_2_object)
{
	var_18_int = 1; // 0x3ea PushI
	KillTimer(var_18_int); // 0x3eb Func
	var_19_object = var_2_object; // 0x3ed PushT
	if(var_19_object == 0) goto Label_1011; // 0x3ee JumpB
	var_2_object = 0; // 0x3ef TMovB
	var_20_string = "head"; // 0x3f0 PushS
	UnlookAsync(var_20_string); // 0x3f1 Func
	
Label_1011:
	func_1168(var_17_bool); // 0x3f4 NEW_2
	return 0; // 0x3f6 Return
}


func_1782(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x6f6 PushV
	GetScene(var_30_object); // 0x6f7 Func
	var_32_string = "scripted"; // 0x6f9 PushS
	var_33_string = "blood_dir.xml"; // 0x6fa PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x6fb Func
	var_34_object = Obj(); // 0x6fd PushV
	var_34_object = var_23_object; // 0x6fe Mov
	func_1670(var_34_object); // 0x6ff NEW_2
	return 4; // 0x701 Return
}


func_506(var_1_object, var_2_object, var_4_bool)
{
	var_56_bool = 0; var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); // 0x1fa PushV
	var_1_object = 0; // 0x1fb TMovI
	
Label_508:
	var_62_string = "all"; // 0x1fc PushS
	var_63_string = "attack_begin"; // 0x1fd PushS
	var_64_int = 1; // 0x1fe PushI
	var_65_int = var_1_object + var_64_int; // 0x1ff Add
	var_66_int = var_63_string + var_65_int; // 0x200 Add
	HasAnimation(var_59_bool, var_62_string, var_66_int); // 0x201 Func
	var_67_bool = var_59_bool == 0; // 0x203 Not
	if(var_67_bool == 0) goto Label_518; // 0x204 JumpB
	goto Label_521; // 0x205 Jump
	
Label_521:
	var_2_object = 0; // 0x209 TMovI
	
Label_522:
	var_68_string = "attack"; // 0x20a PushS
	var_69_int = 1; // 0x20b PushI
	var_70_int = var_2_object + var_69_int; // 0x20c Add
	var_71_int = var_68_string + var_70_int; // 0x20d Add
	IsExisting3DSound(var_60_bool, var_71_int); // 0x20e Func
	var_72_bool = var_60_bool == 0; // 0x210 Not
	if(var_72_bool == 0) goto Label_531; // 0x211 JumpB
	goto Label_534; // 0x212 Jump
	
Label_534:
	var_73_string = "all"; // 0x216 PushS
	var_74_string = "bjump"; // 0x217 PushS
	GetAnimationOffset(var_61_cvector, var_73_string, var_74_string); // 0x218 Func
	var_75_float = GetByIndex(var_61_cvector, 2); // 0x21a PushE
	var_4_bool = -var_75_float; // 0x21b Neg2
	return 6; // 0x21c Return
	
Label_531:
	var_76_int = 1; // 0x213 PushI
	var_2_object = var_2_object + var_76_int; // 0x214 Add2
	goto Label_522; // 0x215 Jump
	
Label_518:
	var_77_int = 1; // 0x206 PushI
	var_1_object = var_1_object + var_77_int; // 0x207 Add2
	goto Label_508; // 0x208 Jump
}


func_1532(var_403_float, var_404_object, var_405_float, var_406_int)
{
	var_410_int = 0; var_411_string = ""; var_412_int = 0; var_413_float = 0; var_414_float = 0; var_415_float = 0; var_416_int = 0; var_417_string = ""; var_418_int = 0; var_419_float = 0; var_420_float = 0; var_421_float = 0; // 0x5fc PushV
	var_422_bool = 0; var_423_object = Obj(); var_424_string = ""; // 0x5fd PushV
	var_423_object = var_404_object; // 0x5fe Mov
	var_424_string = "health"; // 0x5ff MovS
	func_1498(var_422_bool, var_423_object, var_424_string); // 0x600 NEW_2
	var_425_bool = var_422_bool == 0; // 0x602 Not
	if(var_425_bool == 0) goto Label_1542; // 0x603 JumpB
	var_403_float = 0.0; // 0x604 MovF
	return 12; // 0x605 Return
	
Label_1542:
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x606 PushV
	var_427_object = var_404_object; // 0x607 Mov
	var_428_string = "armor"; // 0x608 MovS
	func_1498(var_426_bool, var_427_object, var_428_string); // 0x609 NEW_2
	var_429_bool = var_426_bool == 0; // 0x60b Not
	if(var_429_bool == 0) goto Label_1551; // 0x60c JumpB
	var_416_int = 0; // 0x60d MovI
	goto Label_1554; // 0x60e Jump
	
Label_1554:
	var_430_string = "armor_"; // 0x612 PushS
	var_431_string = ""; var_432_int = 0; // 0x613 PushV
	var_432_int = var_406_int; // 0x614 Mov
	func_1472(var_431_string, var_432_int); // 0x615 NEW_2
	var_417_string = var_430_string + var_431_string; // 0x617 Add2
	var_437_bool = 0; var_438_object = Obj(); var_439_string = ""; // 0x618 PushV
	var_438_object = var_404_object; // 0x619 Mov
	var_439_string = var_417_string; // 0x61a Mov
	func_1498(var_437_bool, var_438_object, var_439_string); // 0x61b NEW_2
	var_440_bool = var_437_bool == 0; // 0x61d Not
	if(var_440_bool == 0) goto Label_1569; // 0x61e JumpB
	var_418_int = 0; // 0x61f MovI
	goto Label_1571; // 0x620 Jump
	
Label_1571:
	var_441_float = 0; var_442_float = 0; var_443_float = 0; // 0x623 PushV
	var_444_int = var_416_int + var_418_int; // 0x624 Add
	var_445_float = 100.0; // 0x625 PushF
	var_442_float = var_444_int / var_444_int; // 0x626 Div2
	var_443_float = 1; // 0x627 MovI
	func_2002(var_441_float, var_442_float, var_443_float); // 0x628 NEW_2
	var_419_float = var_441_float; // 0x629 Mov
	var_447_string = "health"; // 0x62b PushS
	GetProperty(var_447_string, var_420_float); // 0x62c ObjFunc
	var_448_int = 1; // 0x62e PushI
	var_449_int = var_448_int - var_419_float; // 0x62f Sub
	var_421_float = var_405_float * var_449_int; // 0x630 Mult2
	var_450_string = "health"; // 0x631 PushS
	var_451_float = 0; var_452_float = 0; var_453_float = 0; var_454_float = 0; // 0x632 PushV
	var_452_float = var_420_float - var_421_float; // 0x633 Sub2
	var_453_float = 0; // 0x634 MovI
	var_454_float = 1; // 0x635 MovI
	func_2009(var_451_float, var_452_float, var_453_float, var_454_float); // 0x636 NEW_2
	SetProperty(var_450_string, var_451_float); // 0x638 ObjFunc
	var_457_bool = 0; var_458_object = Obj(); // 0x63a PushV
	var_458_object = var_404_object; // 0x63b Mov
	func_1493(var_457_bool, var_458_object); // 0x63c NEW_2
	if(var_457_bool == 0) goto Label_1603; // 0x63e JumpB
	var_459_float = 0; // 0x63f PushV
	var_459_float = -var_421_float; // 0x640 Neg2
	func_2055(var_459_float); // 0x641 NEW_2
	
Label_1603:
	var_403_float = var_421_float; // 0x643 Mov
	return 12; // 0x644 Return
	
Label_1569:
	GetProperty(var_417_string, var_418_int); // 0x621 ObjFunc
	
Label_1551:
	var_463_string = "armor"; // 0x60f PushS
	GetProperty(var_463_string, var_416_int); // 0x610 ObjFunc
}


