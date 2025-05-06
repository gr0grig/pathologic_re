task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb4 PushI
	if(var_14_int == 0) goto Label_315; // 0xb5 JumpB
	func_1038(); // 0xb7 NEW_2
	var_16_int = 31699; // 0xb9 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_193; // 0xbb JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbc PushV
	var_18_object = var_1_object; // 0xbd MovT
	var_19_object = var_0_object; // 0xbe MovT
	func_1144(); // 0xbf NEW_2
	
Label_193:
	var_89_int = 31700; // 0xc1 PushI
	var_90_bool = var_13_bool == var_89_int; // 0xc2 Eq
	if(var_90_bool == 0) goto Label_201; // 0xc3 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xc4 PushV
	var_91_object = var_1_object; // 0xc5 MovT
	var_92_object = var_0_object; // 0xc6 MovT
	func_1188(); // 0xc7 NEW_2
	
Label_201:
	var_112_int = 32356; // 0xc9 PushI
	var_113_bool = var_13_bool == var_112_int; // 0xca Eq
	if(var_113_bool == 0) goto Label_209; // 0xcb JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0xcc PushV
	var_114_object = var_1_object; // 0xcd MovT
	var_115_object = var_0_object; // 0xce MovT
	func_1144(); // 0xcf NEW_2
	
Label_209:
	var_116_int = 31696; // 0xd1 PushI
	var_117_bool = var_12_bool == var_116_int; // 0xd2 Eq
	if(var_117_bool == 0) goto Label_257; // 0xd3 JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0xd4 PushV
	var_119_object = var_1_object; // 0xd5 MovT
	func_1231(var_119_object); // 0xd6 NEW_2
	if(var_118_bool == 0) goto Label_242; // 0xd8 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0xd9 PushV
	var_126_object = var_1_object; // 0xda MovT
	var_127_object = var_0_object; // 0xdb MovT
	func_1182(); // 0xdc NEW_2
	var_130_string = ""; // 0xde PushV
	var_130_string = "Neutral"; // 0xdf MovS
	func_157(var_13_bool, var_130_string); // 0xe0 NEW_2
	var_147_int = 530309; // 0xe2 PushI
	SetMessage(var_147_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_148_int = 530310; // 0xe7 PushI
	var_149_int = 31698; // 0xe8 PushI
	var_150_int = 31697; // 0xe9 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xea TObjFunc
	var_151_int = 531024; // 0xec PushI
	var_152_int = 31698; // 0xed PushI
	var_153_int = 32353; // 0xee PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_154_string = ""; // 0xf2 PushV
	var_154_string = "Neutral"; // 0xf3 MovS
	func_157(var_13_bool, var_154_string); // 0xf4 NEW_2
	var_155_int = 530314; // 0xf6 PushI
	SetMessage(var_155_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_156_int = 530315; // 0xfb PushI
	var_157_int = -1; // 0xfc PushI
	var_158_int = 31702; // 0xfd PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_159_int = 31698; // 0x101 PushI
	var_160_bool = var_12_bool == var_159_int; // 0x102 Eq
	if(var_160_bool == 0) goto Label_280; // 0x103 JumpB
	var_161_string = ""; // 0x104 PushV
	var_161_string = "Neutral"; // 0x105 MovS
	func_157(var_13_bool, var_161_string); // 0x106 NEW_2
	var_162_int = 530311; // 0x108 PushI
	SetMessage(var_162_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_163_int = 531025; // 0x10d PushI
	var_164_int = 32355; // 0x10e PushI
	var_165_int = 32354; // 0x10f PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x110 TObjFunc
	var_166_int = 531027; // 0x112 PushI
	var_167_int = -1; // 0x113 PushI
	var_168_int = 32356; // 0x114 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_169_int = 32355; // 0x118 PushI
	var_170_bool = var_12_bool == var_169_int; // 0x119 Eq
	if(var_170_bool == 0) goto Label_303; // 0x11a JumpB
	var_171_string = ""; // 0x11b PushV
	var_171_string = "Neutral"; // 0x11c MovS
	func_157(var_13_bool, var_171_string); // 0x11d NEW_2
	var_172_int = 531026; // 0x11f PushI
	SetMessage(var_172_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_173_int = 530312; // 0x124 PushI
	var_174_int = -1; // 0x125 PushI
	var_175_int = 31699; // 0x126 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x127 TObjFunc
	var_176_int = 530313; // 0x129 PushI
	var_177_int = -1; // 0x12a PushI
	var_178_int = 31700; // 0x12b PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_3_string = 1; // 0x12f TMovB
	var_179_bool = 0; // 0x130 PushV
	func_1456(var_179_bool); // 0x131 NEW_2
	if(var_179_bool == 0) goto Label_311; // 0x133 JumpB
	lshStopAnimation(); // 0x134 Func
	goto Label_313; // 0x136 Jump
	
Label_313:
	return 0; // 0x139 Return
	
Label_311:
	StopAnimation(); // 0x137 Func
	
Label_315:
	return 0; // 0x13b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_490(var_11_bool, var_12_object); // 0x147 NEW_2
	var_16_object = Obj(); // 0x149 PushV
	var_16_object = var_12_object; // 0x14a Mov
	func_1508(var_16_object); // 0x14b NEW_2
	return 0; // 0x14d Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x14f PushV
	var_14_object = var_12_object; // 0x150 Mov
	func_775(var_13_bool, var_14_object); // 0x151 NEW_2
	if(var_13_bool == 0) goto Label_345; // 0x153 JumpB
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; // 0x154 PushV
	var_18_string = "quest_b9_03"; // 0x155 MovS
	var_19_string = "doberman_attack"; // 0x156 MovS
	func_1127(var_17_bool, var_18_string, var_19_string); // 0x157 NEW_2
	
Label_345:
	return 0; // 0x159 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "attack"; // 0x15b PushS
	var_14_bool = var_12_string == var_13_string; // 0x15c Eq
	if(var_14_bool == 0) goto Label_351; // 0x15d JumpB
	goto Label_355; // 0x15e Jump
	
Label_355:
	return 0; // 0x163 Return
	
Label_351:
	var_15_string = ""; // 0x15f PushV
	var_15_string = var_12_string; // 0x160 Mov
	func_394(var_15_string); // 0x161 NEW_2
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x192 PushT
	if(var_12_int == 0) goto Label_407; // 0x193 JumpB
	func_490(var_10_bool, var_11_bool); // 0x195 NEW_2
	
Label_407:
	var_16_bool = 0; // 0x197 PushV
	var_16_bool = 0; // 0x198 MovB
	var_17_int = var_5_int; // 0x199 PushT
	if(var_17_int == 0) goto Label_416; // 0x19a JumpB
	var_18_bool = 0; // 0x19b PushV
	func_423(var_18_bool); // 0x19c NEW_2
	if(var_18_bool == 0) goto Label_416; // 0x19e JumpB
	var_16_bool = 1; // 0x19f MovB
	
Label_416:
	if(var_16_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_19_object = Obj(); // 0x1a1 PushV
	func_1101(var_19_object); // 0x1a2 NEW_2
	RemoveActor(var_19_object); // 0x1a4 Func
	
Label_422:
	return 0; // 0x1a6 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1d4 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1d5 Eq
	if(var_14_bool == 0) goto Label_489; // 0x1d6 JumpB
	var_15_bool = 0; // 0x1d7 PushV
	func_452(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1d8 NEW_2
	if(var_15_bool == 0) goto Label_483; // 0x1da JumpB
	var_28_bool = var_2_object == 0; // 0x1db Not
	if(var_28_bool == 0) goto Label_482; // 0x1dc JumpB
	var_29_object = Obj(); // 0x1dd PushV
	var_29_object = var_4_bool; // 0x1de MovT
	func_1027(var_29_object); // 0x1df NEW_2
	var_2_object = 1; // 0x1e1 TMovB
	
Label_482:
	goto Label_489; // 0x1e2 Jump
	
Label_489:
	return 0; // 0x1e9 Return
	
Label_483:
	var_36_object = var_2_object; // 0x1e3 PushT
	if(var_36_object == 0) goto Label_489; // 0x1e4 JumpB
	var_37_string = "head"; // 0x1e5 PushS
	UnlookAsync(var_37_string); // 0x1e6 Func
	var_2_object = 0; // 0x1e8 TMovB
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_object = Obj(); // 0x25e PushV
	func_1101(var_12_object); // 0x25f NEW_2
	RemoveActor(var_12_object); // 0x261 Func
	return 0; // 0x263 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x273 PushV
	IsOverrideActive(var_14_bool); // 0x274 Func
	var_15_bool = var_14_bool == 0; // 0x276 Not
	if(var_15_bool == 0) goto Label_636; // 0x277 JumpB
	var_16_object = Obj(); // 0x278 PushV
	var_16_object = var_12_object; // 0x279 Mov
	func_1347(var_16_object); // 0x27a NEW_2
	
Label_636:
	return 2; // 0x27c Return
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	return 0; // 0x2f3 Return
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	return 0; // 0x2f5 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	return 0; // 0x2f7 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x5c0 PushV
	var_16_object = var_12_object; // 0x5c1 Mov
	var_17_int = var_13_int; // 0x5c2 Mov
	var_18_float = var_14_float; // 0x5c3 Mov
	func_824(var_16_object, var_17_int, var_18_float); // 0x5c4 NEW_2
	return 0; // 0x5c6 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x5c8 PushV
	var_18_object = var_12_object; // 0x5c9 Mov
	var_19_int = var_13_int; // 0x5ca Mov
	var_20_float = var_14_float; // 0x5cb Mov
	var_21_cvector = var_16_cvector; // 0x5cc Mov
	var_22_cvector = var_17_cvector; // 0x5cd Mov
	func_892(var_20_float, var_21_cvector, var_22_cvector); // 0x5ce NEW_2
	return 0; // 0x5d0 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x5d1 PushV
	var_16_string = "health"; // 0x5d2 PushS
	var_17_bool = var_13_string == var_16_string; // 0x5d3 Eq
	if(var_17_bool == 0) goto Label_1501; // 0x5d4 JumpB
	var_18_string = "health"; // 0x5d5 PushS
	GetProperty(var_18_string, var_15_float); // 0x5d6 Func
	var_19_int = 0; // 0x5d8 PushI
	var_20_bool = var_15_float <= var_19_int; // 0x5d9 LE
	if(var_20_bool == 0) goto Label_1501; // 0x5da JumpB
	SignalDeath(var_12_object); // 0x5db Func
	
Label_1501:
	return 2; // 0x5dd Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_object = Obj(); // 0x5df PushV
	var_13_object = var_12_object; // 0x5e0 Mov
	func_1458(var_13_object); // 0x5e1 NEW_2
	return 0; // 0x5e3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_bool = 1; // 0x13c PushB
	SensePlayerOnly(var_12_bool); // 0x13d Func
	var_13_float = 0; var_14_float = 0; // 0x13f PushV
	var_13_float = 300; // 0x140 MovI
	var_14_float = 100; // 0x141 MovI
	func_356(var_11_bool, var_13_float, var_14_float); // 0x142 NEW_2
	return 0; // 0x144 Return
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_911(var_29_object, var_30_float); // 0x5 NEW_2
	var_74_bool = var_28_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1450(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1448(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1452(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1454(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1401(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_87_bool = var_25_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_18_object; // 0x30 Mov
	var_89_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_154_bool = var_27_bool == 0; // 0x38 Not
	if(var_154_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_155_object = Obj(); // 0x3f PushV
	var_155_object = var_18_object; // 0x40 Mov
	func_979(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1027(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x403 PushV
	GetEyesHeight(var_32_float); // 0x404 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x406 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x407 PushE
	var_34_float = var_32_float; // 0x408 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x409 PopE
	var_35_string = "head"; // 0x40a PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x40b Func
	return 4; // 0x40d Return
}


func_775(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x307 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x308 Func
	var_13_bool = var_16_bool; // 0x30a Mov
	return 2; // 0x30b Return
}


func_394(var_15_string)
{
	var_16_string = "cleanup"; // 0x18b PushS
	var_17_bool = var_15_string == var_16_string; // 0x18c Eq
	if(var_17_bool == 0) goto Label_401; // 0x18d JumpB
	func_374(var_15_string); // 0x18f NEW_2
	
Label_401:
	return 0; // 0x191 Return
}


func_906(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0x38a PushV
	IsLoaded(var_26_bool); // 0x38b Func
	var_24_bool = var_26_bool; // 0x38d Mov
	return 2; // 0x38e Return
}


func_780(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x30c PushV
	var_44_bool = var_29_object == 0; // 0x30d NullEq
	if(var_44_bool == 0) goto Label_784; // 0x30e JumpB
	return 14; // 0x30f Return
	
Label_784:
	IsDead(var_37_bool); // 0x310 Func
	var_45_bool = var_37_bool; // 0x312 Push
	if(var_45_bool == 0) goto Label_789; // 0x313 JumpB
	return 14; // 0x314 Return
	
Label_789:
	GetSecondaryAnimationType(var_38_int); // 0x315 Func
	var_46_int = 0; // 0x317 PushI
	var_47_bool = var_38_int < var_46_int; // 0x318 LT
	if(var_47_bool == 0) goto Label_795; // 0x319 JumpB
	return 14; // 0x31a Return
	
Label_795:
	GetPosition(var_39_cvector); // 0x31b ObjFunc
	GetPosition(var_40_cvector); // 0x31d Func
	GetDirection(var_41_cvector); // 0x31f Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x321 Sub2
	var_48_float = GetByIndex(var_42_cvector, 0); // 0x322 PushE
	var_49_float = GetByIndex(var_41_cvector, 0); // 0x323 PushE
	var_50_float = var_48_float * var_49_float; // 0x324 Mult
	var_51_float = GetByIndex(var_42_cvector, 2); // 0x325 PushE
	var_52_float = GetByIndex(var_41_cvector, 2); // 0x326 PushE
	var_53_float = var_51_float * var_52_float; // 0x327 Mult
	var_54_int = var_50_float + var_53_float; // 0x328 Add
	var_55_int = 0; // 0x329 PushI
	var_56_bool = var_54_int >= var_55_int; // 0x32a GE
	if(var_56_bool == 0) goto Label_814; // 0x32b JumpB
	var_43_string = "fhit"; // 0x32c MovS
	goto Label_815; // 0x32d Jump
	
Label_815:
	var_57_string = "hit_react"; // 0x32f PushS
	var_58_string = "1"; // 0x330 PushS
	var_59_int = var_43_string + var_58_string; // 0x331 Add
	var_60_string = "2"; // 0x332 PushS
	var_61_int = var_43_string + var_60_string; // 0x333 Add
	var_62_int = -10; // 0x334 PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x335 Func
	return 14; // 0x337 Return
	
Label_814:
	var_43_string = "bhit"; // 0x32e MovS
}


func_1418(var_37_int)
{
	var_38_int = 0; var_39_int = 0; // 0x58a PushV
	var_40_string = "branch"; // 0x58b PushS
	GetVariable(var_40_string, var_39_int); // 0x58c Func
	var_37_int = var_39_int; // 0x58e Mov
	return 2; // 0x58f Return
}


func_1038()
{
	var_15_bool = 0; // 0x40e PushV
	func_1456(var_15_bool); // 0x40f NEW_2
	if(var_15_bool == 0) goto Label_1044; // 0x411 JumpB
	lshStopSpeech(); // 0x412 Func
	
Label_1044:
	return 0; // 0x414 Return
}


func_911(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x38f PushV
	GetPosition(var_41_cvector); // 0x390 ObjFunc
	GetEyesHeight(var_40_float); // 0x392 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x394 PushE
	var_49_float = var_49_float + var_40_float; // 0x395 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x396 PopE
	GetPosition(var_42_cvector); // 0x397 Func
	GetEyesHeight(var_40_float); // 0x399 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x39b PushE
	var_50_float = var_50_float + var_40_float; // 0x39c Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x39d PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x39e Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x39f PushE
	var_51_float = 0; // 0x3a0 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x3a1 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x3a2 Or
	var_53_float = sqrt(var_52_int); // 0x3a3 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x3a4 Div2
	var_44_cvector = -var_43_cvector; // 0x3a5 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x3a6 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x3a7 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x3a8 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x3a9 Xor2
	func_1107(var_55_cvector, var_56_cvector); // 0x3aa NEW_2
	var_63_int = 25; // 0x3ac PushI
	var_64_float = var_55_cvector * var_63_int; // 0x3ad Mult
	var_65_int = var_54_float + var_64_float; // 0x3ae Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x3af PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x3b0 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x3b1 Add2
	IsOverrideActive(var_47_bool); // 0x3b2 Func
	var_67_bool = var_47_bool; // 0x3b4 Push
	if(var_67_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_28_bool = 0; // 0x3b6 MovB
	return 18; // 0x3b7 Return
	
Label_952:
	StopWorld(); // 0x3b8 Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x3ba Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x3bc PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x3bd PushE
	Rotate(var_68_float, var_69_float); // 0x3be Func
	var_70_bool = 0; // 0x3c0 PushV
	func_1456(var_70_bool); // 0x3c1 NEW_2
	if(var_70_bool == 0) goto Label_965; // 0x3c3 JumpB
	goto Label_973; // 0x3c4 Jump
	
Label_973:
	CameraWaitForPlayFinish(); // 0x3cd Func
	ResumeWorld(); // 0x3cf Func
	var_28_bool = 1; // 0x3d1 MovB
	return 18; // 0x3d2 Return
	
Label_965:
	var_71_string = "head"; // 0x3c5 PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x3c6 Func
	var_72_bool = var_48_bool; // 0x3c8 Push
	if(var_72_bool == 0) goto Label_973; // 0x3c9 JumpB
	var_73_string = "head"; // 0x3ca PushS
	LookAsyncCamera(var_73_string); // 0x3cb Func
}


func_1424(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = ""; // 0x590 PushV
	var_56_string = "idle"; // 0x591 MovS
	var_57_int = var_54_int; // 0x592 Push
	if(var_57_int == 0) goto Label_1429; // 0x593 JumpB
	var_56_string = var_56_string + var_54_int; // 0x594 Add2
	
Label_1429:
	var_53_string = var_56_string; // 0x595 Mov
	return 2; // 0x596 Return
}


func_1297(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x511 PushV
	GetMainOutdoorScene(var_25_object); // 0x512 Func
	var_27_bool = var_25_object == 0; // 0x514 NullEq
	if(var_27_bool == 0) goto Label_1308; // 0x515 JumpB
	var_28_string = "Can't find main outdoor scene"; // 0x516 PushS
	Trace(var_28_string); // 0x517 Func
	var_26_object = 0; // 0x519 SetNull
	var_22_object = var_26_object; // 0x51a Mov
	return 4; // 0x51b Return
	
Label_1308:
	GetMap(var_26_object); // 0x51c ObjFunc
	var_22_object = var_26_object; // 0x51e Mov
	return 4; // 0x51f Return
}


func_1045(var_21_string, var_22_int, var_23_int, var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x415 PushV
	var_29_bool = 0; var_30_int = 0; var_31_int = 0; // 0x416 PushV
	var_30_int = var_22_int; // 0x417 Mov
	var_31_int = var_23_int; // 0x418 Mov
	func_1117(var_29_bool, var_30_int, var_31_int); // 0x419 NEW_2
	if(var_29_bool == 0) goto Label_1059; // 0x41b JumpB
	irand(var_27_int, var_24_int); // 0x41c Func
	var_34_int = 0; // 0x41e PushI
	var_35_int = 1; // 0x41f PushI
	var_36_int = var_27_int + var_35_int; // 0x420 Add
	AddItem(var_28_bool, var_21_string, var_34_int, var_36_int); // 0x421 Func
	
Label_1059:
	return 4; // 0x423 Return
}


func_1431(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0x597 PushV
	var_50_int = 0; // 0x598 MovI
	
Label_1433:
	var_52_string = "all"; // 0x599 PushS
	var_53_string = ""; var_54_int = 0; // 0x59a PushV
	var_54_int = var_50_int; // 0x59b Mov
	func_1424(var_53_string, var_54_int); // 0x59c NEW_2
	HasAnimation(var_51_bool, var_52_string, var_53_string); // 0x59e Func
	var_58_bool = var_51_bool == 0; // 0x5a0 Not
	if(var_58_bool == 0) goto Label_1443; // 0x5a1 JumpB
	goto Label_1446; // 0x5a2 Jump
	
Label_1446:
	var_47_int = var_50_int; // 0x5a6 Mov
	return 4; // 0x5a7 Return
	
Label_1443:
	var_59_int = 1; // 0x5a3 PushI
	var_50_int = var_50_int + var_59_int; // 0x5a4 Add2
	goto Label_1433; // 0x5a5 Jump
}


func_157(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0x9e PushV
	func_1456(var_108_bool); // 0x9f NEW_2
	var_109_bool = var_108_bool == 0; // 0xa1 Not
	if(var_109_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_110_bool = var_107_string == var_2_object; // 0xa4 Eq
	if(var_110_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_111_string = ""; var_112_bool = 0; // 0xa7 PushV
	var_111_string = var_107_string; // 0xa8 Mov
	var_113_string = ""; // 0xa9 PushS
	var_114_bool = var_107_string == var_113_string; // 0xaa Eq
	if(var_114_bool == 0) goto Label_174; // 0xab JumpB
	var_112_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_1012(var_111_string, var_112_bool); // 0xaf NEW_2
	var_2_object = var_107_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_112_bool = 1; // 0xae MovB
}


func_1182()
{
	var_105_string = "oob9DobermanSpi4ka1_1"; // 0x49f PushS
	var_106_int = 1; // 0x4a0 PushI
	SetVariable(var_105_string, var_106_int); // 0x4a1 Func
	return 0; // 0x4a3 Return
}


func_1314(var_65_object, var_66_string, var_67_float)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_object = Obj(); var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; // 0x522 PushV
	GetMainOutdoorScene(var_75_object); // 0x523 Func
	var_77_bool = var_75_object == 0; // 0x525 NullEq
	if(var_77_bool == 0) goto Label_1323; // 0x526 JumpB
	var_78_string = "Can't find main outdoor scene"; // 0x527 PushS
	Trace(var_78_string); // 0x528 Func
	return 8; // 0x52a Return
	
Label_1323:
	GetLocator(var_66_string, var_76_bool, var_73_cvector, var_74_cvector); // 0x52b ObjFunc
	var_79_bool = var_76_bool == 0; // 0x52d Not
	if(var_79_bool == 0) goto Label_1333; // 0x52e JumpB
	var_80_string = "Warning: outdoor scene locator "; // 0x52f PushS
	var_81_int = var_80_string + var_66_string; // 0x530 Add
	var_82_string = " doesnt exist"; // 0x531 PushS
	var_83_int = var_81_int + var_82_string; // 0x532 Add
	Trace(var_83_int); // 0x533 Func
	
Label_1333:
	GetMap(var_65_object); // 0x535 ObjFunc
	var_84_bool = var_65_object == 0; // 0x537 NullEq
	if(var_84_bool == 0) goto Label_1341; // 0x538 JumpB
	var_85_string = "Can't find map"; // 0x539 PushS
	Trace(var_85_string); // 0x53a Func
	return 8; // 0x53c Return
	
Label_1341:
	var_86_float = GetByIndex(var_73_cvector, 0); // 0x53d PushE
	var_87_float = GetByIndex(var_73_cvector, 2); // 0x53e PushE
	SetMapParams(var_86_float, var_87_float, var_67_float); // 0x53f ObjFunc
	return 8; // 0x541 Return
}


func_1188()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x4a4 PushV
	var_95_object = Obj(); // 0x4a5 PushV
	func_1297(var_95_object); // 0x4a6 NEW_2
	var_94_object = var_95_object; // 0x4a7 Mov
	var_96_string = "b9q03DobermanGotoFollower"; // 0x4a9 PushS
	var_97_string = "pt_b9q03_follower"; // 0x4aa PushS
	var_98_int = 0; // 0x4ab PushI
	var_99_int = 530343; // 0x4ac PushI
	var_100_float = 0; // 0x4ad PushV
	func_1139(var_100_float); // 0x4ae NEW_2
	AddMark(var_96_string, var_97_string, var_98_int, var_99_int, var_100_float); // 0x4b0 ObjFunc
	func_1243(); // 0x4b3 NEW_2
	var_101_bool = 0; var_102_string = ""; var_103_string = ""; // 0x4b5 PushV
	var_102_string = "quest_b9_03"; // 0x4b6 MovS
	var_103_string = "place_follower"; // 0x4b7 MovS
	func_1127(var_101_bool, var_102_string, var_103_string); // 0x4b8 NEW_2
	var_104_bool = 0; var_105_string = ""; var_106_string = ""; // 0x4ba PushV
	var_105_string = "quest_b9_03"; // 0x4bb MovS
	var_106_string = "init_bonefires"; // 0x4bc MovS
	func_1127(var_104_bool, var_105_string, var_106_string); // 0x4bd NEW_2
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x4bf PushV
	var_110_object = Obj(); // 0x4c0 PushV
	func_1297(var_110_object); // 0x4c1 NEW_2
	var_107_object = var_110_object; // 0x4c2 Mov
	var_108_string = "pt_b9q03_follower"; // 0x4c4 MovS
	var_109_float = 2; // 0x4c5 MovI
	func_1314(var_107_object, var_108_string, var_109_float); // 0x4c6 NEW_2
	var_111_object = Obj(); // 0x4c8 PushV
	func_1297(var_111_object); // 0x4c9 NEW_2
	ShowMap(var_111_object); // 0x4cb ObjFunc
	return 2; // 0x4cd Return
}


func_1060(var_81_string)
{
	var_82_bool = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_int = 0; var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x424 PushV
	IsExisting3DSound(var_90_bool, var_81_string); // 0x425 Func
	var_98_bool = var_90_bool == 0; // 0x427 Not
	if(var_98_bool == 0) goto Label_1085; // 0x428 JumpB
	var_91_int = 0; // 0x429 MovI
	
Label_1066:
	var_99_int = 1; // 0x42a PushI
	var_100_int = var_91_int + var_99_int; // 0x42b Add
	var_101_int = var_81_string + var_100_int; // 0x42c Add
	IsExisting3DSound(var_92_bool, var_101_int); // 0x42d Func
	var_102_bool = var_92_bool == 0; // 0x42f Not
	if(var_102_bool == 0) goto Label_1074; // 0x430 JumpB
	goto Label_1077; // 0x431 Jump
	
Label_1077:
	var_103_bool = var_91_int == 0; // 0x435 Not
	if(var_103_bool == 0) goto Label_1080; // 0x436 JumpB
	return 16; // 0x437 Return
	
Label_1080:
	irand(var_93_int, var_91_int); // 0x438 Func
	var_104_int = 1; // 0x43a PushI
	var_105_int = var_93_int + var_104_int; // 0x43b Add
	var_81_string = var_81_string + var_105_int; // 0x43c Add2
	
Label_1085:
	Is3DSoundLoaded(var_94_bool, var_81_string); // 0x43d Func
	var_106_bool = var_94_bool; // 0x43f Push
	if(var_106_bool == 0) goto Label_1100; // 0x440 JumpB
	GetEyesHeight(var_95_float); // 0x441 Func
	GetDirection(var_96_cvector); // 0x443 Func
	var_107_int = 50; // 0x445 PushI
	var_97_cvector = var_96_cvector * var_107_int; // 0x446 Mult2
	var_108_float = GetByIndex(var_97_cvector, 1); // 0x447 PushE
	var_108_float = var_108_float + var_95_float; // 0x448 Add2
	SetByIndex(var_97_cvector, 1) = var_108_float; // 0x449 PopE
	PlayGlobalSound(var_81_string, var_97_cvector); // 0x44a Func
	
Label_1100:
	return 16; // 0x44c Return
	
Label_1074:
	var_109_int = 1; // 0x432 PushI
	var_91_int = var_91_int + var_109_int; // 0x433 Add2
	goto Label_1066; // 0x434 Jump
}


func_423(var_18_bool)
{
	var_18_bool = 1; // 0x1a7 MovB
	return 0; // 0x1a8 Return
}


func_1448(var_76_int)
{
	var_76_int = 518097; // 0x5a8 MovI
	return 0; // 0x5a9 Return
}


func_425(var_0_object, var_1_object, var_2_object, var_3_string, var_18_bool, var_22_float, var_23_float)
{
	var_24_bool = 0; // 0x1aa PushV
	func_906(var_24_bool); // 0x1ab NEW_2
	var_27_bool = var_24_bool == 0; // 0x1ad Not
	if(var_27_bool == 0) goto Label_432; // 0x1ae JumpB
	return 0; // 0x1af Return
	
Label_432:
	var_28_string = "player"; // 0x1b0 PushS
	FindActor(var_18_bool, var_28_string); // 0x1b1 Func
	var_2_object = 0; // 0x1b3 TMovB
	var_3_string = 0; // 0x1b4 TMovB
	var_0_object = var_22_float; // 0x1b5 TMov
	var_1_object = var_23_float; // 0x1b6 TMov
	var_29_int = 10; // 0x1b7 PushI
	var_30_float = 1.0; // 0x1b8 PushF
	SetTimer(var_29_int, var_30_float); // 0x1b9 Func
	func_504(); // 0x1bc NEW_2
	var_82_bool = var_3_string == 0; // 0x1be Not
	if(var_82_bool == 0) goto Label_451; // 0x1bf JumpB
	var_83_int = 10; // 0x1c0 PushI
	KillTimer(var_83_int); // 0x1c1 Func
	
Label_451:
	return 0; // 0x1c3 Return
}


func_1450(var_75_int)
{
	var_75_int = 518096; // 0x5aa MovI
	return 0; // 0x5ab Return
}


func_1452(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x5ac MovS
	return 0; // 0x5ad Return
}


func_1454(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x5ae MovS
	return 0; // 0x5af Return
}


func_1456(var_70_bool)
{
	var_70_bool = 0; // 0x5b0 MovB
	return 0; // 0x5b1 Return
}


func_1458(var_13_object)
{
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x5b3 PushV
	var_15_string = "quest_b9_03"; // 0x5b4 MovS
	var_16_string = "doberman_dead"; // 0x5b5 MovS
	func_1127(var_14_bool, var_15_string, var_16_string); // 0x5b6 NEW_2
	var_20_object = Obj(); // 0x5b8 PushV
	var_20_object = var_13_object; // 0x5b9 Mov
	TaskCall(3); // 0x5ba TaskCall
	func_590(var_20_object); // 0x5bb NEW_2
	TaskReturn(); // 0x5bc TaskReturn
	return 0; // 0x5be Return
}


func_824(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); // 0x338 PushV
	var_37_bool = 0; // 0x339 PushV
	var_37_bool = 0; // 0x33a MovB
	var_38_bool = 0; // 0x33b PushV
	var_38_bool = 0; // 0x33c MovB
	var_39_object = var_16_object; // 0x33d Push
	if(var_39_object == 0) goto Label_835; // 0x33e JumpB
	var_40_int = 4; // 0x33f PushI
	var_41_bool = var_17_int != var_40_int; // 0x340 Neq
	if(var_41_bool == 0) goto Label_835; // 0x341 JumpB
	var_38_bool = 1; // 0x342 MovB
	
Label_835:
	if(var_38_bool == 0) goto Label_840; // 0x343 JumpB
	var_42_int = 5; // 0x344 PushI
	var_43_bool = var_17_int != var_42_int; // 0x345 Neq
	if(var_43_bool == 0) goto Label_840; // 0x346 JumpB
	var_37_bool = 1; // 0x347 MovB
	
Label_840:
	if(var_37_bool == 0) goto Label_887; // 0x348 JumpB
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x349 PushV
	var_46_cvector = CVector(0,0,0); var_47_object = Obj(); // 0x34a PushV
	var_47_object = var_16_object; // 0x34b Mov
	func_760(var_47_object); // 0x34c NEW_2
	var_45_cvector = var_46_cvector; // 0x34d Mov
	func_1107(var_44_cvector, var_45_cvector); // 0x34f NEW_2
	var_28_cvector = var_44_cvector; // 0x350 Mov
	CreateVectorVector(var_29_object); // 0x352 Func
	var_30_int = 1; // 0x354 MovI
	
Label_853:
	var_57_string = "hit"; // 0x355 PushS
	var_58_int = var_57_string + var_30_int; // 0x356 Add
	GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x357 Func
	var_59_bool = var_31_bool == 0; // 0x359 Not
	if(var_59_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_869; // 0x35b Jump
	
Label_869:
	size(var_34_int); // 0x365 ObjFunc
	var_60_int = var_34_int; // 0x367 Push
	if(var_60_int == 0) goto Label_886; // 0x368 JumpB
	irand(var_35_int, var_34_int); // 0x369 Func
	get(var_36_cvector, var_35_int); // 0x36b ObjFunc
	var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x36d PushV
	var_61_object = var_16_object; // 0x36e Mov
	var_62_int = var_17_int; // 0x36f Mov
	var_63_float = var_18_float; // 0x370 Mov
	var_64_cvector = var_36_cvector; // 0x371 Mov
	var_65_cvector = -var_28_cvector; // 0x372 Neg2
	func_892(var_63_float, var_64_cvector, var_65_cvector); // 0x373 NEW_2
	return 18; // 0x375 Return
	
Label_886:
	var_29_object = 0; // 0x376 SetNull
	
Label_887:
	var_106_object = Obj(); // 0x377 PushV
	var_106_object = var_16_object; // 0x378 Mov
	func_780(var_106_object); // 0x379 NEW_2
	return 18; // 0x37b Return
	
Label_860:
	var_107_int = var_33_cvector | var_28_cvector; // 0x35c Or
	var_108_float = 0.70711; // 0x35d PushF
	var_109_bool = var_107_int >= var_108_float; // 0x35e GE
	if(var_109_bool == 0) goto Label_866; // 0x35f JumpB
	add(var_32_cvector); // 0x360 ObjFunc
	
Label_866:
	var_110_int = 1; // 0x362 PushI
	var_30_int = var_30_int + var_110_int; // 0x363 Add2
	goto Label_853; // 0x364 Jump
}


func_1347(var_16_object)
{
	var_17_int = 0; // 0x544 PushV
	func_1418(var_17_int); // 0x545 NEW_2
	var_21_int = 1; // 0x547 PushI
	var_22_bool = var_17_int == var_21_int; // 0x548 Eq
	if(var_22_bool == 0) goto Label_1357; // 0x549 JumpB
	WorkWithCorpse(var_16_object); // 0x54a Func
	goto Label_1359; // 0x54c Jump
	
Label_1359:
	return 0; // 0x54f Return
	
Label_1357:
	Barter(var_16_object); // 0x54d Func
}


func_452(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1c4 PushV
	var_18_bool = var_4_bool == 0; // 0x1c5 NullEq
	if(var_18_bool == 0) goto Label_457; // 0x1c6 JumpB
	var_15_bool = 0; // 0x1c7 MovB
	return 2; // 0x1c8 Return
	
Label_457:
	var_19_float = 0; var_20_object = Obj(); // 0x1c9 PushV
	var_20_object = var_4_bool; // 0x1ca MovT
	func_767(var_20_object); // 0x1cb NEW_2
	var_17_float = sqrt(var_19_float); // 0x1cd Sqrt2
	var_27_object = var_2_object; // 0x1ce PushT
	if(var_27_object == 0) goto Label_465; // 0x1cf JumpB
	var_17_float = var_17_float - var_1_object; // 0x1d0 Sub2
	
Label_465:
	var_15_bool = var_17_float < var_0_object; // 0x1d1 LT2
	return 2; // 0x1d2 Return
}


func_583(var_72_bool)
{
	var_72_bool = 1; // 0x247 MovB
	return 0; // 0x248 Return
}


func_585()
{
	StopAnimation(); // 0x249 Func
	StopGroup0(); // 0x24b Func
	return 0; // 0x24d Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_127; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_1231(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_110; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_1182(); // 0x58 NEW_2
	var_107_string = ""; // 0x5a PushV
	var_107_string = "Neutral"; // 0x5b MovS
	func_157(var_89_object, var_107_string); // 0x5c NEW_2
	var_124_int = 530309; // 0x5e PushI
	SetMessage(var_124_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_125_int = 530310; // 0x63 PushI
	var_126_int = 31698; // 0x64 PushI
	var_127_int = 31697; // 0x65 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x66 TObjFunc
	var_128_int = 531024; // 0x68 PushI
	var_129_int = 31698; // 0x69 PushI
	var_130_int = 32353; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_131_bool = 0; // 0x7f PushV
	func_1456(var_131_bool); // 0x80 NEW_2
	if(var_131_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_132_string = var_3_string; // 0x85 PushT
	if(var_132_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_133_string = ""; // 0x88 PushV
	var_133_string = var_2_object; // 0x89 MovT
	func_996(var_133_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_144_string = "all"; // 0x8e PushS
	var_145_string = "idle"; // 0x8f PushS
	PlayAnimation(var_144_string, var_145_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_146_string = var_3_string; // 0x94 PushT
	if(var_146_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_147_string = "all"; // 0x97 PushS
	var_148_string = "idle"; // 0x98 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_149_string = ""; // 0x6e PushV
	var_149_string = "Neutral"; // 0x6f MovS
	func_157(var_89_object, var_149_string); // 0x70 NEW_2
	var_150_int = 530314; // 0x72 PushI
	SetMessage(var_150_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_151_int = 530315; // 0x77 PushI
	var_152_int = -1; // 0x78 PushI
	var_153_int = 31702; // 0x79 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_1101(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x44d PushV
	self(var_14_object); // 0x44e Func
	var_12_object = var_14_object; // 0x450 Mov
	return 2; // 0x451 Return
}


func_590(var_20_object)
{
	var_21_string = ""; var_22_int = 0; var_23_int = 0; var_24_int = 0; // 0x24f PushV
	var_21_string = "samopal_ammo"; // 0x250 MovS
	var_22_int = 1; // 0x251 MovI
	var_23_int = 1; // 0x252 MovI
	var_24_int = 4; // 0x253 MovI
	func_1045(var_21_string, var_22_int, var_23_int, var_24_int); // 0x254 NEW_2
	func_1377(); // 0x257 NEW_2
	var_57_object = Obj(); // 0x259 PushV
	var_57_object = var_20_object; // 0x25a Mov
	func_612(var_57_object); // 0x25b NEW_2
	return 0; // 0x25d Return
}


func_1231(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x4d0 PushV
	var_98_string = "oob9DobermanSpi4ka1_1"; // 0x4d1 MovS
	func_1122(var_97_int, var_98_string); // 0x4d2 NEW_2
	var_101_int = 0; // 0x4d4 PushI
	var_102_bool = var_97_int == var_101_int; // 0x4d5 Eq
	if(var_102_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_95_bool = 1; // 0x4d7 MovB
	return 0; // 0x4d8 Return
	
Label_1241:
	var_95_bool = 0; // 0x4d9 MovB
	return 0; // 0x4da Return
}


func_1360(var_43_string)
{
	var_44_object = Obj(); var_45_int = 0; var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; var_49_bool = 0; // 0x550 PushV
	CreateInvItem(var_47_object); // 0x551 Func
	SetItemName(var_43_string); // 0x553 ObjFunc
	var_50_string = "Organ"; // 0x555 PushS
	var_51_int = 1; // 0x556 PushI
	SetProperty(var_50_string, var_51_int); // 0x557 ObjFunc
	GetItemID(var_48_int); // 0x559 ObjFunc
	var_52_int = 0; // 0x55b PushI
	var_53_int = 1; // 0x55c PushI
	AddItem(var_49_bool, var_47_object, var_52_int, var_53_int); // 0x55d Func
	return 6; // 0x55f Return
}


func_979()
{
	var_156_bool = 0; var_157_bool = 0; // 0x3d3 PushV
	CameraSwitchToNormal(); // 0x3d4 Func
	var_158_bool = 0; // 0x3d6 PushV
	func_1456(var_158_bool); // 0x3d7 NEW_2
	if(var_158_bool == 0) goto Label_987; // 0x3d9 JumpB
	goto Label_995; // 0x3da Jump
	
Label_995:
	return 2; // 0x3e3 Return
	
Label_987:
	var_159_string = "head"; // 0x3db PushS
	HasAnimationTrack(var_157_bool, var_159_string); // 0x3dc Func
	var_160_bool = var_157_bool; // 0x3de Push
	if(var_160_bool == 0) goto Label_995; // 0x3df JumpB
	var_161_string = "head"; // 0x3e0 PushS
	UnlookAsync(var_161_string); // 0x3e1 Func
}


func_1107(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0; // 0x453 PushV
	var_54_int = var_45_cvector | var_45_cvector; // 0x454 Or
	var_53_float = sqrt(var_54_int); // 0x455 Sqrt2
	var_55_float = 0.0; // 0x456 PushF
	var_56_bool = var_53_float < var_55_float; // 0x457 LT
	if(var_56_bool == 0) goto Label_1115; // 0x458 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x459 MovV
	return 2; // 0x45a Return
	
Label_1115:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x45b Div2
	return 2; // 0x45c Return
}


func_728(var_80_string)
{
	RemoveRTEnvelope(); // 0x2d9 Func
	SetDeathState(); // 0x2db Func
	Stop(); // 0x2dd Func
	StopAsync(); // 0x2df Func
	StopSecondaryAnimation(); // 0x2e1 Func
	var_81_string = ""; // 0x2e3 PushV
	var_81_string = var_80_string; // 0x2e4 Mov
	func_1060(var_81_string); // 0x2e5 NEW_2
	var_110_string = "all"; // 0x2e7 PushS
	PlayAnimation(var_110_string, var_80_string); // 0x2e8 Func
	WaitForAnimEnd(); // 0x2ea Func
	var_111_string = "all"; // 0x2ec PushS
	LockAnimationEnd(var_111_string, var_80_string); // 0x2ed Func
	RemoveEnvelope(); // 0x2ef Func
	return 0; // 0x2f1 Return
}


func_1243()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x4db PushV
	var_38_int = 542; // 0x4dc PushI
	var_39_int = 2; // 0x4dd PushI
	var_40_int = 530354; // 0x4de PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x4df Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x4e1 PushV
	var_42_object = var_37_object; // 0x4e2 Mov
	var_43_int = 532; // 0x4e3 MovI
	func_1269(var_41_bool, var_42_object, var_43_int); // 0x4e4 NEW_2
	return 2; // 0x4e6 Return
}


func_1117(var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 0; var_33_int = 0; // 0x45d PushV
	irand(var_33_int, var_31_int); // 0x45e Func
	var_29_bool = var_33_int < var_30_int; // 0x460 LT2
	return 2; // 0x461 Return
}


func_1377()
{
	var_37_int = 0; // 0x561 PushV
	func_1418(var_37_int); // 0x562 NEW_2
	var_41_int = 1; // 0x564 PushI
	var_42_bool = var_37_int != var_41_int; // 0x565 Neq
	if(var_42_bool == 0) goto Label_1384; // 0x566 JumpB
	return 0; // 0x567 Return
	
Label_1384:
	var_43_string = ""; // 0x568 PushV
	var_43_string = "liver"; // 0x569 MovS
	func_1360(var_43_string); // 0x56a NEW_2
	var_54_string = ""; // 0x56c PushV
	var_54_string = "kidney"; // 0x56d MovS
	func_1360(var_54_string); // 0x56e NEW_2
	var_55_string = ""; // 0x570 PushV
	var_55_string = "heart"; // 0x571 MovS
	func_1360(var_55_string); // 0x572 NEW_2
	var_56_string = ""; // 0x574 PushV
	var_56_string = "blood"; // 0x575 MovS
	func_1360(var_56_string); // 0x576 NEW_2
	return 0; // 0x578 Return
}


func_1122(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x462 PushV
	GetVariable(var_98_string, var_100_int); // 0x463 Func
	var_97_int = var_100_int; // 0x465 Mov
	return 2; // 0x466 Return
}


func_996(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x3e4 PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x3e5 Func
	var_140_bool = var_137_bool; // 0x3e7 Push
	if(var_140_bool == 0) goto Label_1007; // 0x3e8 JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x3e9 Func
	var_141_bool = 0; // 0x3eb PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x3ec Func
	goto Label_1011; // 0x3ee Jump
	
Label_1011:
	return 6; // 0x3f3 Return
	
Label_1007:
	var_142_string = "Can't find lsh animation : "; // 0x3ef PushS
	var_143_int = var_142_string + var_133_string; // 0x3f0 Add
	Trace(var_143_int); // 0x3f1 Func
}


func_356(var_6_int, var_13_float, var_14_float)
{
	var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_bool = 0; // 0x164 PushV
	var_6_int = 0; // 0x165 TMovB
	
Label_358:
	var_19_int = 3; // 0x166 PushI
	rand(var_17_float, var_19_int); // 0x167 Func
	var_20_int = 3; // 0x169 PushI
	var_21_int = var_17_float + var_20_int; // 0x16a Add
	Sleep(var_21_int, var_18_bool); // 0x16b Func
	var_6_int = 1; // 0x16d TMovB
	var_22_float = 0; var_23_float = 0; // 0x16e PushV
	var_22_float = var_13_float; // 0x16f Mov
	var_23_float = var_14_float; // 0x170 Mov
	func_425(var_14_float, var_15_float, var_16_bool, var_17_float, var_18_bool, var_22_float, var_23_float); // 0x171 NEW_2
	var_6_int = 0; // 0x173 TMovB
	goto Label_358; // 0x174 Jump
}


func_1508(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x5e5 PushV
	var_18_object = var_16_object; // 0x5e6 Mov
	TaskCall(0); // 0x5e7 TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x5e8 NEW_2
	TaskReturn(); // 0x5e9 TaskReturn
	return 0; // 0x5eb Return
}


func_1127(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x467 PushV
	FindActor(var_18_object, var_15_string); // 0x468 Func
	var_19_bool = var_18_object == 0; // 0x46a NullEq
	if(var_19_bool == 0) goto Label_1134; // 0x46b JumpB
	var_14_bool = 0; // 0x46c MovB
	return 2; // 0x46d Return
	
Label_1134:
	Trigger(var_18_object, var_16_string); // 0x46e Func
	var_14_bool = 1; // 0x470 MovB
	return 2; // 0x471 Return
}


func_612(var_57_object)
{
	EventDisable(0); // 0x265 EventDisable
	var_58_object = Obj(); // 0x266 PushV
	var_58_object = var_57_object; // 0x267 Mov
	func_637(var_58_object); // 0x268 NEW_2
	var_138_int = 50; // 0x26a PushI
	var_139_int = 40; // 0x26b PushI
	SetRTEnvelope(var_138_int, var_139_int); // 0x26c Func
	EventEnable(0); // 0x26e EventEnable
	
Label_623:
	Hold(); // 0x26f Func
	goto Label_623; // 0x271 Jump
}


func_1256(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x4e8 PushV
	GetDiaryRoot(var_52_object); // 0x4e9 Func
	var_53_bool = var_52_object == 0; // 0x4eb Not
	if(var_53_bool == 0) goto Label_1266; // 0x4ec JumpB
	var_54_string = "Can't retrieve diary root"; // 0x4ed PushS
	Trace(var_54_string); // 0x4ee Func
	var_50_object = 0; // 0x4f0 MovB
	return 2; // 0x4f1 Return
	
Label_1266:
	var_50_object = var_52_object; // 0x4f2 Mov
	return 2; // 0x4f3 Return
}


func_490(var_2_object, var_3_string)
{
	func_585(); // 0x1eb NEW_2
	var_13_int = 10; // 0x1ed PushI
	KillTimer(var_13_int); // 0x1ee Func
	var_14_object = var_2_object; // 0x1f0 PushT
	if(var_14_object == 0) goto Label_502; // 0x1f1 JumpB
	var_15_string = "head"; // 0x1f2 PushS
	UnlookAsync(var_15_string); // 0x1f3 Func
	var_2_object = 0; // 0x1f5 TMovB
	
Label_502:
	var_3_string = 1; // 0x1f6 TMovB
	return 0; // 0x1f7 Return
}


func_504()
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_bool = 0; // 0x1f8 PushV
	WaitForAnimEnd(); // 0x1f9 Func
	var_45_bool = 0; // 0x1fb PushV
	func_906(var_45_bool); // 0x1fc NEW_2
	var_46_bool = var_45_bool == 0; // 0x1fe Not
	if(var_46_bool == 0) goto Label_513; // 0x1ff JumpB
	return 14; // 0x200 Return
	
Label_513:
	var_47_int = 0; // 0x201 PushV
	func_1431(var_47_int); // 0x202 NEW_2
	var_38_int = var_47_int; // 0x203 Mov
	var_39_int = 0; // 0x205 MovI
	
Label_518:
	var_60_bool = 0; // 0x206 PushV
	var_60_bool = 0; // 0x207 MovB
	var_61_int = 5; // 0x208 PushI
	var_62_bool = var_39_int < var_61_int; // 0x209 LT
	if(var_62_bool == 0) goto Label_528; // 0x20a JumpB
	var_63_bool = 0; // 0x20b PushV
	func_906(var_63_bool); // 0x20c NEW_2
	if(var_63_bool == 0) goto Label_528; // 0x20e JumpB
	var_60_bool = 1; // 0x20f MovB
	
Label_528:
	if(var_60_bool == 0) goto Label_580; // 0x210 JumpB
	var_64_int = 3; // 0x211 PushI
	irand(var_40_int, var_64_int); // 0x212 Func
	var_65_int = 0; // 0x214 PushI
	var_66_bool = var_40_int == var_65_int; // 0x215 Eq
	if(var_66_bool == 0) goto Label_552; // 0x216 JumpB
	var_67_int = var_38_int; // 0x217 Push
	if(var_67_int == 0) goto Label_551; // 0x218 JumpB
	irand(var_41_int, var_38_int); // 0x219 Func
	var_68_string = "all"; // 0x21b PushS
	var_69_string = ""; var_70_int = 0; // 0x21c PushV
	var_70_int = var_41_int; // 0x21d Mov
	func_1424(var_69_string, var_70_int); // 0x21e NEW_2
	PlayAnimation(var_68_string, var_69_string); // 0x220 Func
	WaitForAnimEnd(var_42_bool); // 0x222 Func
	var_71_bool = var_42_bool == 0; // 0x224 Not
	if(var_71_bool == 0) goto Label_551; // 0x225 JumpB
	goto Label_580; // 0x226 Jump
	
Label_580:
	ResetAAS(); // 0x244 Func
	return 14; // 0x246 Return
	
Label_551:
	goto Label_569; // 0x227 Jump
	
Label_569:
	var_72_bool = 0; // 0x239 PushV
	func_583(var_72_bool); // 0x23a NEW_2
	var_73_bool = var_72_bool == 0; // 0x23c Not
	if(var_73_bool == 0) goto Label_575; // 0x23d JumpB
	goto Label_580; // 0x23e Jump
	
Label_575:
	ResetAAS(); // 0x23f Func
	var_74_int = 1; // 0x241 PushI
	var_39_int = var_39_int + var_74_int; // 0x242 Add2
	goto Label_518; // 0x243 Jump
	
Label_552:
	var_75_int = 1; // 0x228 PushI
	var_76_bool = var_40_int == var_75_int; // 0x229 Eq
	if(var_76_bool == 0) goto Label_566; // 0x22a JumpB
	var_77_int = 4; // 0x22b PushI
	rand(var_43_float, var_77_int); // 0x22c Func
	var_78_int = 1; // 0x22e PushI
	var_79_int = var_43_float + var_78_int; // 0x22f Add
	Sleep(var_79_int, var_44_bool); // 0x230 Func
	var_80_bool = var_44_bool == 0; // 0x232 Not
	if(var_80_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_580; // 0x234 Jump
	
Label_565:
	goto Label_569; // 0x235 Jump
	
Label_566:
	var_81_int = var_39_int; // 0x236 Push
	if(var_81_int == 0) goto Label_569; // 0x237 JumpB
	goto Label_580; // 0x238 Jump
}


func_1144()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x478 PushV
	var_22_object = Obj(); // 0x479 PushV
	func_1297(var_22_object); // 0x47a NEW_2
	var_21_object = var_22_object; // 0x47b Mov
	var_29_string = "b9q03DobermanGotoFollower"; // 0x47d PushS
	var_30_string = "pt_b9q03_follower"; // 0x47e PushS
	var_31_int = 0; // 0x47f PushI
	var_32_int = 530343; // 0x480 PushI
	var_33_float = 0; // 0x481 PushV
	func_1139(var_33_float); // 0x482 NEW_2
	AddMark(var_29_string, var_30_string, var_31_int, var_32_int, var_33_float); // 0x484 ObjFunc
	func_1243(); // 0x487 NEW_2
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0x489 PushV
	var_60_string = "quest_b9_03"; // 0x48a MovS
	var_61_string = "doberman_attack"; // 0x48b MovS
	func_1127(var_59_bool, var_60_string, var_61_string); // 0x48c NEW_2
	var_65_object = Obj(); var_66_string = ""; var_67_float = 0; // 0x48e PushV
	var_68_object = Obj(); // 0x48f PushV
	func_1297(var_68_object); // 0x490 NEW_2
	var_65_object = var_68_object; // 0x491 Mov
	var_66_string = "pt_b9q03_follower"; // 0x493 MovS
	var_67_float = 2; // 0x494 MovI
	func_1314(var_65_object, var_66_string, var_67_float); // 0x495 NEW_2
	var_88_object = Obj(); // 0x497 PushV
	func_1297(var_88_object); // 0x498 NEW_2
	ShowMap(var_88_object); // 0x49a ObjFunc
	return 2; // 0x49c Return
}


func_1139(var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x473 PushV
	GetGameTime(var_35_float); // 0x474 Func
	var_33_float = var_35_float; // 0x476 Mov
	return 2; // 0x477 Return
}


func_1012(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x3f4 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x3f5 Func
	var_121_bool = var_118_bool; // 0x3f7 Push
	if(var_121_bool == 0) goto Label_1022; // 0x3f8 JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x3f9 Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x3fb Func
	goto Label_1026; // 0x3fd Jump
	
Label_1026:
	return 6; // 0x402 Return
	
Label_1022:
	var_122_string = "Can't find lsh animation : "; // 0x3fe PushS
	var_123_int = var_122_string + var_111_string; // 0x3ff Add
	Trace(var_123_int); // 0x400 Func
}


func_1269(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x4f5 PushV
	var_50_object = Obj(); // 0x4f6 PushV
	func_1256(var_50_object); // 0x4f7 NEW_2
	var_47_object = var_50_object; // 0x4f8 Mov
	Find(var_43_int, var_48_object); // 0x4fa ObjFunc
	var_55_bool = var_48_object == 0; // 0x4fc Not
	if(var_55_bool == 0) goto Label_1284; // 0x4fd JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x4fe PushS
	var_57_int = var_56_string + var_43_int; // 0x4ff Add
	Trace(var_57_int); // 0x500 Func
	var_41_bool = 0; // 0x502 MovB
	return 6; // 0x503 Return
	
Label_1284:
	AddChild(var_42_object); // 0x504 ObjFunc
	var_58_int = 7; // 0x506 PushI
	SendWorldWndMessage(var_58_int); // 0x507 Func
	GetCategory(var_49_int); // 0x509 ObjFunc
	SetDiarySection(var_49_int); // 0x50b Func
	var_41_bool = 0; // 0x50d MovB
	return 6; // 0x50e Return
}


func_374(var_5_int)
{
	var_5_int = 1; // 0x176 TMovB
	var_18_bool = 0; // 0x177 PushV
	var_18_bool = 0; // 0x178 MovB
	var_19_bool = 0; // 0x179 PushV
	func_906(var_19_bool); // 0x17a NEW_2
	var_22_bool = var_19_bool == 0; // 0x17c Not
	if(var_22_bool == 0) goto Label_387; // 0x17d JumpB
	var_23_bool = 0; // 0x17e PushV
	func_423(var_23_bool); // 0x17f NEW_2
	if(var_23_bool == 0) goto Label_387; // 0x181 JumpB
	var_18_bool = 1; // 0x182 MovB
	
Label_387:
	if(var_18_bool == 0) goto Label_393; // 0x183 JumpB
	var_24_object = Obj(); // 0x184 PushV
	func_1101(var_24_object); // 0x185 NEW_2
	RemoveActor(var_24_object); // 0x187 Func
	
Label_393:
	return 0; // 0x189 Return
}


func_760(var_46_cvector)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x2f8 PushV
	GetPosition(var_50_cvector); // 0x2f9 Func
	GetPosition(var_51_cvector); // 0x2fb ObjFunc
	var_46_cvector = var_51_cvector - var_50_cvector; // 0x2fd Sub2
	return 4; // 0x2fe Return
}


func_1401(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x579 PushV
	var_82_string = "branch"; // 0x57a PushS
	GetVariable(var_82_string, var_81_int); // 0x57b Func
	var_83_int = 0; // 0x57d PushI
	var_84_bool = var_81_int == var_83_int; // 0x57e Eq
	if(var_84_bool == 0) goto Label_1411; // 0x57f JumpB
	var_79_int = 1; // 0x580 MovI
	return 2; // 0x581 Return
	
Label_1411:
	var_85_int = 1; // 0x583 PushI
	var_86_bool = var_81_int == var_85_int; // 0x584 Eq
	if(var_86_bool == 0) goto Label_1416; // 0x585 JumpB
	var_79_int = 2; // 0x586 MovI
	return 2; // 0x587 Return
	
Label_1416:
	var_79_int = 3; // 0x588 MovI
	return 2; // 0x589 Return
}


func_892(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x37c PushV
	GetScene(var_25_object); // 0x37d Func
	var_27_string = "scripted"; // 0x37f PushS
	var_28_string = "blood_dir.xml"; // 0x380 PushS
	AddActorByType(var_26_object, var_27_string, var_25_object, var_21_cvector, var_22_cvector, var_28_string); // 0x381 Func
	var_29_object = Obj(); // 0x383 PushV
	var_29_object = var_18_object; // 0x384 Mov
	func_780(var_29_object); // 0x385 NEW_2
	return 4; // 0x387 Return
}


func_637(var_58_object)
{
	var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_string = ""; var_64_object = Obj(); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); // 0x27d PushV
	var_79_bool = var_58_object == 0; // 0x27e NullEq
	if(var_79_bool == 0) goto Label_645; // 0x27f JumpB
	var_80_string = ""; // 0x280 PushV
	var_80_string = "fdie"; // 0x281 MovS
	func_728(var_80_string); // 0x282 NEW_2
	goto Label_727; // 0x284 Jump
	
Label_727:
	return 20; // 0x2d7 Return
	
Label_645:
	GetPosition(var_69_cvector); // 0x285 ObjFunc
	GetPosition(var_70_cvector); // 0x287 Func
	GetDirection(var_71_cvector); // 0x289 Func
	var_72_cvector = var_70_cvector - var_69_cvector; // 0x28b Sub2
	var_112_float = GetByIndex(var_72_cvector, 0); // 0x28c PushE
	var_113_float = GetByIndex(var_71_cvector, 0); // 0x28d PushE
	var_114_float = var_112_float * var_113_float; // 0x28e Mult
	var_115_float = GetByIndex(var_72_cvector, 2); // 0x28f PushE
	var_116_float = GetByIndex(var_71_cvector, 2); // 0x290 PushE
	var_117_float = var_115_float * var_116_float; // 0x291 Mult
	var_118_int = var_114_float + var_117_float; // 0x292 Add
	var_119_int = 0; // 0x293 PushI
	var_120_bool = var_118_int >= var_119_int; // 0x294 GE
	if(var_120_bool == 0) goto Label_664; // 0x295 JumpB
	var_73_string = "fdie"; // 0x296 MovS
	goto Label_665; // 0x297 Jump
	
Label_665:
	RemoveRTEnvelope(); // 0x299 Func
	SetDeathState(); // 0x29b Func
	Stop(); // 0x29d Func
	StopAsync(); // 0x29f Func
	var_74_object = var_58_object; // 0x2a1 Mov
	var_121_string = "GetScriptProperty"; // 0x2a2 PushS
	var_122_int = 2; // 0x2a3 PushI
	var_123_bool = IsFuncExist(var_58_object, var_121_string, var_122_int); // 0x2a4 FuncExist
	if(var_123_bool == 0) goto Label_689; // 0x2a5 JumpB
	var_124_string = "Owner"; // 0x2a6 PushS
	HasScriptProperty(var_75_bool, var_124_string); // 0x2a7 ObjFunc
	var_125_bool = var_75_bool; // 0x2a9 Push
	if(var_125_bool == 0) goto Label_689; // 0x2aa JumpB
	var_126_string = "Owner"; // 0x2ab PushS
	GetScriptProperty(var_74_object, var_126_string); // 0x2ac ObjFunc
	var_127_bool = var_74_object == 0; // 0x2ae NullEq
	if(var_127_bool == 0) goto Label_689; // 0x2af JumpB
	var_74_object = var_58_object; // 0x2b0 Mov
	
Label_689:
	var_128_string = "@GetEyesHeight"; // 0x2b1 PushS
	var_129_int = 1; // 0x2b2 PushI
	var_130_bool = IsFuncExist(var_74_object, var_128_string, var_129_int); // 0x2b3 FuncExist
	if(var_130_bool == 0) goto Label_704; // 0x2b4 JumpB
	GetEyesHeight(var_77_float); // 0x2b5 ObjFunc
	var_78_cvector = CVector(0.0, 0.0, 0.0); // 0x2b7 MovV
	var_131_float = GetByIndex(var_78_cvector, 1); // 0x2b8 PushE
	var_131_float = var_77_float; // 0x2b9 Mov
	SetByIndex(var_78_cvector, 1) = var_131_float; // 0x2ba PopE
	var_132_string = "head"; // 0x2bb PushS
	LookAsync(var_58_object, var_132_string, var_78_cvector); // 0x2bc Func
	var_76_bool = 1; // 0x2be MovB
	goto Label_705; // 0x2bf Jump
	
Label_705:
	var_133_string = ""; // 0x2c1 PushV
	var_133_string = var_73_string; // 0x2c2 Mov
	func_1060(var_133_string); // 0x2c3 NEW_2
	var_134_string = "all"; // 0x2c5 PushS
	PlayAnimation(var_134_string, var_73_string); // 0x2c6 Func
	WaitForAnimEnd(); // 0x2c8 Func
	var_135_bool = var_76_bool; // 0x2ca Push
	if(var_135_bool == 0) goto Label_721; // 0x2cb JumpB
	StopAsync(); // 0x2cc Func
	var_136_string = "head"; // 0x2ce PushS
	UnlookAsync(var_136_string); // 0x2cf Func
	
Label_721:
	var_137_string = "all"; // 0x2d1 PushS
	LockAnimationEnd(var_137_string, var_73_string); // 0x2d2 Func
	RemoveEnvelope(); // 0x2d4 Func
	var_74_object = 0; // 0x2d6 SetNull
	
Label_704:
	var_76_bool = 0; // 0x2c0 MovB
	
Label_664:
	var_73_string = "bdie"; // 0x298 MovS
}


func_767(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2ff PushV
	GetPosition(var_24_cvector); // 0x300 Func
	GetPosition(var_25_cvector); // 0x302 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x304 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x305 Or2
	return 6; // 0x306 Return
}


