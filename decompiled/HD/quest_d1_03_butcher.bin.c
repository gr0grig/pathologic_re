task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 1; // 0x9b PushI
	if(var_17_int == 0) goto Label_195; // 0x9c JumpB
	func_1787(); // 0x9e NEW_2
	var_19_int = 5801; // 0xa0 PushI
	var_20_bool = var_15_object == var_19_int; // 0xa1 Eq
	if(var_20_bool == 0) goto Label_183; // 0xa2 JumpB
	var_21_string = ""; // 0xa3 PushV
	var_21_string = "Neutral"; // 0xa4 MovS
	func_132(var_16_bool, var_21_string); // 0xa5 NEW_2
	var_38_int = 505264; // 0xa7 PushI
	SetMessage(var_38_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_39_int = 505265; // 0xac PushI
	var_40_int = -1; // 0xad PushI
	var_41_int = 5802; // 0xae PushI
	AddReply(var_39_int, var_40_int, var_41_int); // 0xaf TObjFunc
	var_42_int = 506042; // 0xb1 PushI
	var_43_int = -1; // 0xb2 PushI
	var_44_int = 6665; // 0xb3 PushI
	AddReply(var_42_int, var_43_int, var_44_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_45_bool = 0; // 0xb8 PushV
	func_1943(var_45_bool); // 0xb9 NEW_2
	if(var_45_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_object = Obj(); // 0xcd PushV
	var_17_object = var_15_bool; // 0xce Mov
	TaskCall(0); // 0xcf TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xd0 NEW_2
	TaskReturn(); // 0xd1 TaskReturn
	TaskCall(3); // 0xd4 TaskCall
	func_251(); // 0xd5 NEW_2
	TaskReturn(); // 0xd6 TaskReturn
	return 0; // 0xd8 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0xd9 PushV
	IsPlayerActor(var_15_bool, var_17_bool); // 0xda Func
	var_18_bool = var_17_bool; // 0xdc Push
	if(var_18_bool == 0) goto Label_227; // 0xdd JumpB
	TaskCall(3); // 0xdf TaskCall
	func_251(); // 0xe0 NEW_2
	TaskReturn(); // 0xe1 TaskReturn
	
Label_227:
	return 2; // 0xe3 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0xe4 PushV
	var_18_string = "cleanup"; // 0xe5 PushS
	var_19_bool = var_15_bool == var_18_string; // 0xe6 Eq
	if(var_19_bool == 0) goto Label_242; // 0xe7 JumpB
	var_0_object = 1; // 0xe8 TMovB
	IsLoaded(var_17_bool); // 0xe9 Func
	var_20_bool = var_17_bool == 0; // 0xeb Not
	if(var_20_bool == 0) goto Label_242; // 0xec JumpB
	var_21_object = Obj(); // 0xed PushV
	func_1835(var_21_object); // 0xee NEW_2
	RemoveActor(var_21_object); // 0xf0 Func
	
Label_242:
	return 2; // 0xf2 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = var_0_object; // 0xf3 PushT
	if(var_15_object == 0) goto Label_250; // 0xf4 JumpB
	var_16_object = Obj(); // 0xf5 PushV
	func_1835(var_16_object); // 0xf6 NEW_2
	RemoveActor(var_16_object); // 0xf8 Func
	
Label_250:
	return 0; // 0xfa Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	func_1945(); // 0x116 NEW_2
	Hold(); // 0x118 Func
	return 0; // 0x11a Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	func_1945(); // 0x3b2 NEW_2
	Hold(); // 0x3b4 Func
	return 0; // 0x3b6 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_16_int = 1; // 0x3e9 PushI
	var_17_bool = var_15_int == var_16_int; // 0x3ea Eq
	if(var_17_bool == 0) goto Label_1009; // 0x3eb JumpB
	var_18_object = Obj(); // 0x3ec PushV
	var_18_object = var_1_object; // 0x3ed MovT
	func_1898(var_18_object); // 0x3ee NEW_2
	goto Label_1013; // 0x3f0 Jump
	
Label_1013:
	return 0; // 0x3f5 Return
	
Label_1009:
	var_23_int = 0; // 0x3f1 PushV
	var_23_int = var_15_int; // 0x3f2 Mov
	func_1158(var_14_bool, var_15_int, var_23_int); // 0x3f3 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x404 PushV
	var_16_bool = 0; // 0x405 MovB
	var_17_bool = var_1_object == var_15_object; // 0x406 Eq
	if(var_17_bool == 0) goto Label_1035; // 0x407 JumpB
	var_18_bool = var_2_object == 0; // 0x408 Not
	if(var_18_bool == 0) goto Label_1035; // 0x409 JumpB
	var_16_bool = 1; // 0x40a MovB
	
Label_1035:
	if(var_16_bool == 0) goto Label_1041; // 0x40b JumpB
	var_2_object = 1; // 0x40c TMovB
	var_19_object = Obj(); // 0x40d PushV
	var_19_object = var_15_object; // 0x40e Mov
	func_1776(var_19_object); // 0x40f NEW_2
	
Label_1041:
	return 0; // 0x411 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x413 PushV
	var_16_bool = 0; // 0x414 MovB
	var_17_bool = var_1_object == var_15_object; // 0x415 Eq
	if(var_17_bool == 0) goto Label_1050; // 0x416 JumpB
	var_18_object = var_2_object; // 0x417 PushT
	if(var_18_object == 0) goto Label_1050; // 0x418 JumpB
	var_16_bool = 1; // 0x419 MovB
	
Label_1050:
	if(var_16_bool == 0) goto Label_1055; // 0x41a JumpB
	var_2_object = 0; // 0x41b TMovB
	var_19_string = "head"; // 0x41c PushS
	UnlookAsync(var_19_string); // 0x41d Func
	
Label_1055:
	return 0; // 0x41f Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object); // 0x499 Func
	return 0; // 0x49b Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1014(var_15_object); // 0x4a5 NEW_2
	var_20_object = Obj(); // 0x4a7 PushV
	var_20_object = var_15_object; // 0x4a8 Mov
	func_2000(); // 0x4a9 NEW_2
	return 0; // 0x4ab Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x4b7 PushV
	func_1835(var_15_object); // 0x4b8 NEW_2
	RemoveActor(var_15_object); // 0x4ba Func
	return 0; // 0x4bc Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x53c Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x53e Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0; // 0x540 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x7b2 PushV
	var_19_object = var_15_object; // 0x7b3 Mov
	var_20_int = var_16_int; // 0x7b4 Mov
	var_21_float = var_17_float; // 0x7b5 Mov
	func_1565(var_19_object, var_20_int, var_21_float); // 0x7b6 NEW_2
	return 0; // 0x7b8 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x7ba PushV
	var_21_object = var_15_object; // 0x7bb Mov
	var_22_int = var_16_int; // 0x7bc Mov
	var_23_float = var_17_float; // 0x7bd Mov
	var_24_cvector = var_19_cvector; // 0x7be Mov
	var_25_cvector = var_20_cvector; // 0x7bf Mov
	func_1633(var_23_float, var_24_cvector, var_25_cvector); // 0x7c0 NEW_2
	return 0; // 0x7c2 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x7c3 PushV
	var_19_string = "health"; // 0x7c4 PushS
	var_20_bool = var_16_string == var_19_string; // 0x7c5 Eq
	if(var_20_bool == 0) goto Label_1999; // 0x7c6 JumpB
	var_21_string = "health"; // 0x7c7 PushS
	GetProperty(var_21_string, var_18_float); // 0x7c8 Func
	var_22_int = 0; // 0x7ca PushI
	var_23_bool = var_18_float <= var_22_int; // 0x7cb LE
	if(var_23_bool == 0) goto Label_1999; // 0x7cc JumpB
	SignalDeath(var_15_object); // 0x7cd Func
	
Label_1999:
	return 2; // 0x7cf Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_object = Obj(); // 0x7d1 PushV
	var_16_object = var_15_object; // 0x7d2 Mov
	func_1956(var_16_object); // 0x7d3 NEW_2
	return 0; // 0x7d5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_0_object = 0; // 0xc4 TMovB
	var_15_bool = 1; // 0xc5 PushB
	SensePlayerOnly(var_15_bool); // 0xc6 Func
	
Label_200:
	Hold(); // 0xc8 Func
	goto Label_200; // 0xca Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_1658(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1937(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1935(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1939(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1941(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1918(var_79_int); // 0x22 NEW_2
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
	func_1727(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_512(var_1_object, var_2_object, var_4_bool)
{
	var_59_bool = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); // 0x200 PushV
	var_1_object = 0; // 0x201 TMovI
	
Label_514:
	var_65_string = "all"; // 0x202 PushS
	var_66_string = "attack_begin"; // 0x203 PushS
	var_67_int = 1; // 0x204 PushI
	var_68_int = var_1_object + var_67_int; // 0x205 Add
	var_69_int = var_66_string + var_68_int; // 0x206 Add
	HasAnimation(var_62_bool, var_65_string, var_69_int); // 0x207 Func
	var_70_bool = var_62_bool == 0; // 0x209 Not
	if(var_70_bool == 0) goto Label_524; // 0x20a JumpB
	goto Label_527; // 0x20b Jump
	
Label_527:
	var_2_object = 0; // 0x20f TMovI
	
Label_528:
	var_71_string = "attack"; // 0x210 PushS
	var_72_int = 1; // 0x211 PushI
	var_73_int = var_2_object + var_72_int; // 0x212 Add
	var_74_int = var_71_string + var_73_int; // 0x213 Add
	IsExisting3DSound(var_63_bool, var_74_int); // 0x214 Func
	var_75_bool = var_63_bool == 0; // 0x216 Not
	if(var_75_bool == 0) goto Label_537; // 0x217 JumpB
	goto Label_540; // 0x218 Jump
	
Label_540:
	var_76_string = "all"; // 0x21c PushS
	var_77_string = "bjump"; // 0x21d PushS
	GetAnimationOffset(var_64_cvector, var_76_string, var_77_string); // 0x21e Func
	var_78_float = GetByIndex(var_64_cvector, 2); // 0x220 PushE
	var_4_bool = -var_78_float; // 0x221 Neg2
	return 6; // 0x222 Return
	
Label_537:
	var_79_int = 1; // 0x219 PushI
	var_2_object = var_2_object + var_79_int; // 0x21a Add2
	goto Label_528; // 0x21b Jump
	
Label_524:
	var_80_int = 1; // 0x20c PushI
	var_1_object = var_1_object + var_80_int; // 0x20d Add2
	goto Label_514; // 0x20e Jump
}


func_1794(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x702 PushV
	IsExisting3DSound(var_56_bool, var_47_string); // 0x703 Func
	var_64_bool = var_56_bool == 0; // 0x705 Not
	if(var_64_bool == 0) goto Label_1819; // 0x706 JumpB
	var_57_int = 0; // 0x707 MovI
	
Label_1800:
	var_65_int = 1; // 0x708 PushI
	var_66_int = var_57_int + var_65_int; // 0x709 Add
	var_67_int = var_47_string + var_66_int; // 0x70a Add
	IsExisting3DSound(var_58_bool, var_67_int); // 0x70b Func
	var_68_bool = var_58_bool == 0; // 0x70d Not
	if(var_68_bool == 0) goto Label_1808; // 0x70e JumpB
	goto Label_1811; // 0x70f Jump
	
Label_1811:
	var_69_bool = var_57_int == 0; // 0x713 Not
	if(var_69_bool == 0) goto Label_1814; // 0x714 JumpB
	return 16; // 0x715 Return
	
Label_1814:
	irand(var_59_int, var_57_int); // 0x716 Func
	var_70_int = 1; // 0x718 PushI
	var_71_int = var_59_int + var_70_int; // 0x719 Add
	var_47_string = var_47_string + var_71_int; // 0x71a Add2
	
Label_1819:
	Is3DSoundLoaded(var_60_bool, var_47_string); // 0x71b Func
	var_72_bool = var_60_bool; // 0x71d Push
	if(var_72_bool == 0) goto Label_1834; // 0x71e JumpB
	GetEyesHeight(var_61_float); // 0x71f Func
	GetDirection(var_62_cvector); // 0x721 Func
	var_73_int = 50; // 0x723 PushI
	var_63_cvector = var_62_cvector * var_73_int; // 0x724 Mult2
	var_74_float = GetByIndex(var_63_cvector, 1); // 0x725 PushE
	var_74_float = var_74_float + var_61_float; // 0x726 Add2
	SetByIndex(var_63_cvector, 1) = var_74_float; // 0x727 PopE
	PlayGlobalSound(var_47_string, var_63_cvector); // 0x728 Func
	
Label_1834:
	return 16; // 0x72a Return
	
Label_1808:
	var_75_int = 1; // 0x710 PushI
	var_57_int = var_57_int + var_75_int; // 0x711 Add2
	goto Label_1800; // 0x712 Jump
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x85 PushV
	func_1943(var_96_bool); // 0x86 NEW_2
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
	func_1761(var_99_string, var_100_bool); // 0x96 NEW_2
	var_2_object = var_95_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_100_bool = 1; // 0x95 MovB
}


func_1158(var_0_object, var_1_object, var_23_int)
{
	var_24_int = 0; // 0x487 PushI
	var_25_bool = var_23_int != var_24_int; // 0x488 Neq
	if(var_25_bool == 0) goto Label_1163; // 0x489 JumpB
	return 0; // 0x48a Return
	
Label_1163:
	var_26_bool = 0; var_27_object = Obj(); // 0x48b PushV
	var_27_object = var_1_object; // 0x48c MovT
	func_1196(var_26_bool, var_27_object); // 0x48d NEW_2
	var_62_bool = var_26_bool == 0; // 0x48f Not
	if(var_62_bool == 0) goto Label_1170; // 0x490 JumpB
	var_0_object = 1; // 0x491 TMovB
	
Label_1170:
	var_63_int = 0; // 0x492 PushI
	KillTimer(var_63_int); // 0x493 Func
	Stop(); // 0x495 Func
	return 0; // 0x497 Return
}


func_1935(var_76_int)
{
	var_76_int = 515562; // 0x78f MovI
	return 0; // 0x790 Return
}


func_271(var_403_float)
{
	var_403_float = 0.1; // 0x110 MovF
	return 0; // 0x111 Return
}


func_1937(var_75_int)
{
	var_75_int = 503347; // 0x791 MovI
	return 0; // 0x792 Return
}


func_274(var_410_int)
{
	var_410_int = 0; // 0x113 MovI
	return 0; // 0x114 Return
}


func_1939(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x793 MovS
	return 0; // 0x794 Return
}


func_1941(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x795 MovS
	return 0; // 0x796 Return
}


func_1943(var_70_bool)
{
	var_70_bool = 0; // 0x797 MovB
	return 0; // 0x798 Return
}


func_793(var_0_object, var_309_bool)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0; // 0x319 PushV
	var_320_bool = 0; var_321_object = Obj(); // 0x31a PushV
	var_321_object = var_0_object; // 0x31b MovT
	func_1497(var_320_bool, var_321_object); // 0x31c NEW_2
	var_322_bool = var_320_bool == 0; // 0x31e Not
	if(var_322_bool == 0) goto Label_802; // 0x31f JumpB
	var_309_bool = 0; // 0x320 MovB
	return 10; // 0x321 Return
	
Label_802:
	var_323_bool = 0; // 0x322 PushV
	func_882(var_319_float, var_323_bool); // 0x323 NEW_2
	if(var_323_bool == 0) goto Label_819; // 0x325 JumpB
	GetPFPosition(var_315_cvector); // 0x326 TObjFunc
	GetPFPosition(var_316_cvector); // 0x328 Func
	var_317_cvector = var_315_cvector - var_316_cvector; // 0x32a Sub2
	var_318_float = var_317_cvector | var_317_cvector; // 0x32b Or2
	GetAttackDistance(var_319_float); // 0x32c TObjFunc
	var_324_int = 50; // 0x32e PushI
	var_319_float = var_319_float + var_324_int; // 0x32f Add2
	var_325_float = var_319_float * var_319_float; // 0x330 Mult
	var_309_bool = var_318_float <= var_325_float; // 0x331 LE2
	return 10; // 0x332 Return
	
Label_819:
	var_309_bool = 0; // 0x333 MovB
	return 10; // 0x334 Return
}


func_1945()
{
	var_15_object = Obj(); // 0x799 PushV
	func_1835(var_15_object); // 0x79a NEW_2
	RemoveActor(var_15_object); // 0x79c Func
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x79e PushV
	var_19_string = "quest_d1_03"; // 0x79f MovS
	var_20_string = "butcher_fail"; // 0x7a0 MovS
	func_1886(var_18_bool, var_19_string, var_20_string); // 0x7a1 NEW_2
	return 0; // 0x7a3 Return
}


func_283(var_0_object, var_3_string, var_5_bool, var_34_object, var_35_bool, var_36_float, var_143_bool, var_235_bool)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_float = 0; // 0x11b PushV
	func_512(var_56_cvector, var_57_bool, var_58_float); // 0x11d NEW_2
	var_5_bool = 0; // 0x11f TMovI
	var_81_string = "@GetAttackDistance"; // 0x120 PushS
	var_82_int = 1; // 0x121 PushI
	var_83_bool = IsFuncExist(var_34_object, var_81_string, var_82_int); // 0x122 FuncExist
	if(var_83_bool == 0) goto Label_297; // 0x123 JumpB
	GetAttackDistance(var_48_float); // 0x124 ObjFunc
	var_84_int = 50; // 0x126 PushI
	var_48_float = var_48_float + var_84_int; // 0x127 Add2
	goto Label_298; // 0x128 Jump
	
Label_298:
	var_85_int = 150; // 0x12a PushI
	var_86_bool = var_48_float >= var_85_int; // 0x12b GE
	if(var_86_bool == 0) goto Label_302; // 0x12c JumpB
	var_48_float = 150; // 0x12d MovI
	
Label_302:
	var_3_string = 0; // 0x12e TMovB
	var_0_object = var_34_object; // 0x12f TMov
	IsPlayerActor(var_0_object, var_51_bool); // 0x130 Func
	var_87_bool = var_51_bool; // 0x132 Push
	if(var_87_bool == 0) goto Label_316; // 0x133 JumpB
	var_88_string = "attack"; // 0x134 PushS
	PlayGlobalMusic(var_88_string); // 0x135 Func
	var_89_object = Obj(); // 0x137 PushV
	func_1835(var_89_object); // 0x138 NEW_2
	SendPlayerEnemy(var_34_object, var_89_object); // 0x13a Func
	
Label_316:
	var_92_bool = var_35_bool; // 0x13c Push
	if(var_92_bool == 0) goto Label_320; // 0x13d JumpB
	var_52_bool = 0; // 0x13e MovB
	goto Label_321; // 0x13f Jump
	
Label_321:
	var_93_float = 400.0; // 0x141 PushF
	var_53_float = var_93_float + var_48_float; // 0x142 Add2
	
Label_323:
	var_94_bool = 0; // 0x143 PushV
	var_94_bool = 0; // 0x144 MovB
	var_95_bool = 0; var_96_object = Obj(); // 0x145 PushV
	var_96_object = var_0_object; // 0x146 MovT
	func_1497(var_95_bool, var_96_object); // 0x147 NEW_2
	if(var_95_bool == 0) goto Label_333; // 0x149 JumpB
	var_129_bool = var_3_string == 0; // 0x14a Not
	if(var_129_bool == 0) goto Label_333; // 0x14b JumpB
	var_94_bool = 1; // 0x14c MovB
	
Label_333:
	if(var_94_bool == 0) goto Label_495; // 0x14d JumpB
	func_925(var_58_float); // 0x14f NEW_2
	GetPFPosition(var_49_cvector); // 0x151 TObjFunc
	GetPFPosition(var_50_cvector); // 0x153 Func
	var_54_cvector = var_49_cvector - var_50_cvector; // 0x155 Sub2
	var_55_float = var_54_cvector | var_54_cvector; // 0x156 Or2
	var_135_float = var_53_float * var_53_float; // 0x157 Mult
	var_136_bool = var_55_float >= var_135_float; // 0x158 GE
	if(var_136_bool == 0) goto Label_361; // 0x159 JumpB
	var_137_bool = 0; var_138_object = Obj(); var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_bool = 0; // 0x15a PushV
	var_138_object = var_0_object; // 0x15b MovT
	var_139_float = var_48_float; // 0x15c Mov
	var_140_float = 3000.0; // 0x15d MovF
	var_141_bool = 1; // 0x15e MovB
	var_142_bool = 0; // 0x15f MovB
	TaskCall(4); // 0x160 TaskCall
	func_951(var_145_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool); // 0x161 NEW_2
	TaskReturn(); // 0x162 TaskReturn
	var_220_bool = var_143_bool == 0; // 0x164 Not
	if(var_220_bool == 0) goto Label_359; // 0x165 JumpB
	goto Label_495; // 0x166 Jump
	
Label_495:
	WaitForAnimEnd(); // 0x1ef Func
	var_221_string = var_3_string; // 0x1f1 PushT
	if(var_221_string == 0) goto Label_500; // 0x1f2 JumpB
	return 22; // 0x1f3 Return
	
Label_500:
	var_222_string = "all"; // 0x1f4 PushS
	var_223_string = "attack_off"; // 0x1f5 PushS
	PlayAnimation(var_222_string, var_223_string); // 0x1f6 Func
	WaitForAnimEnd(); // 0x1f8 Func
	var_224_bool = var_51_bool; // 0x1fa Push
	if(var_224_bool == 0) goto Label_511; // 0x1fb JumpB
	var_225_float = 2.0; // 0x1fc PushF
	Sleep(var_225_float); // 0x1fd Func
	
Label_511:
	return 22; // 0x1ff Return
	
Label_359:
	var_52_bool = 0; // 0x167 MovB
	goto Label_494; // 0x168 Jump
	
Label_494:
	goto Label_323; // 0x1ee Jump
	
Label_361:
	var_226_float = var_36_float * var_36_float; // 0x169 Mult
	var_227_bool = var_55_float >= var_226_float; // 0x16a GE
	if(var_227_bool == 0) goto Label_486; // 0x16b JumpB
	GetPFPosition(var_56_cvector); // 0x16c TObjFunc
	CanReachByPF(var_57_bool, var_56_cvector); // 0x16e Func
	var_228_bool = var_57_bool == 0; // 0x170 Not
	if(var_228_bool == 0) goto Label_385; // 0x171 JumpB
	var_229_bool = 0; var_230_object = Obj(); var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_bool = 0; // 0x172 PushV
	var_230_object = var_0_object; // 0x173 MovT
	var_231_float = var_48_float; // 0x174 Mov
	var_232_float = 3000.0; // 0x175 MovF
	var_233_bool = 1; // 0x176 MovB
	var_234_bool = 0; // 0x177 MovB
	TaskCall(4); // 0x178 TaskCall
	func_951(var_237_bool, var_229_bool, var_230_object, var_231_float, var_232_float, var_233_bool, var_234_bool); // 0x179 NEW_2
	TaskReturn(); // 0x17a TaskReturn
	var_238_bool = var_235_bool == 0; // 0x17c Not
	if(var_238_bool == 0) goto Label_383; // 0x17d JumpB
	goto Label_495; // 0x17e Jump
	
Label_383:
	var_52_bool = 0; // 0x17f MovB
	goto Label_323; // 0x180 Jump
	
Label_385:
	var_239_bool = var_52_bool == 0; // 0x181 Not
	if(var_239_bool == 0) goto Label_410; // 0x182 JumpB
	var_240_object = Obj(); // 0x183 PushV
	var_240_object = var_0_object; // 0x184 MovT
	func_1647(); // 0x185 NEW_2
	var_249_string = "all"; // 0x187 PushS
	var_250_string = "attack_on"; // 0x188 PushS
	PlayAnimation(var_249_string, var_250_string); // 0x189 Func
	WaitForAnimEnd(); // 0x18b Func
	func_925(var_58_float); // 0x18e NEW_2
	StopAsync(); // 0x190 Func
	var_52_bool = 1; // 0x192 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x193 PushV
	var_252_object = var_0_object; // 0x194 MovT
	func_1497(var_251_bool, var_252_object); // 0x195 NEW_2
	var_253_bool = var_251_bool == 0; // 0x197 Not
	if(var_253_bool == 0) goto Label_410; // 0x198 JumpB
	goto Label_495; // 0x199 Jump
	
Label_410:
	rand(var_58_float); // 0x19a Func
	var_254_bool = 0; // 0x19c PushV
	var_254_bool = 1; // 0x19d MovB
	var_255_float = 0.25; // 0x19e PushF
	var_256_bool = var_58_float < var_255_float; // 0x19f LT
	if(var_256_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_257_bool = 0; // 0x1a1 PushV
	func_882(var_254_bool, var_257_bool); // 0x1a2 NEW_2
	if(var_257_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_254_bool = 0; // 0x1a5 MovB
	
Label_422:
	if(var_254_bool == 0) goto Label_439; // 0x1a6 JumpB
	Face(var_0_object); // 0x1a7 Func
	func_932(); // 0x1aa NEW_2
	var_292_string = "all"; // 0x1ac PushS
	var_293_string = "attack_stay"; // 0x1ad PushS
	PlayAnimation(var_292_string, var_293_string); // 0x1ae Func
	var_294_bool = 0; var_295_float = 0; // 0x1b0 PushV
	var_295_float = var_36_float; // 0x1b1 Mov
	func_750(var_58_float, var_294_bool, var_295_float); // 0x1b2 NEW_2
	StopAsync(); // 0x1b4 Func
	goto Label_485; // 0x1b6 Jump
	
Label_485:
	goto Label_494; // 0x1e5 Jump
	
Label_439:
	Face(var_0_object); // 0x1b7 Func
	var_513_string = "all"; // 0x1b9 PushS
	var_514_string = "fjump"; // 0x1ba PushS
	PlayAnimation(var_513_string, var_514_string); // 0x1bb Func
	WaitForAnimEnd(); // 0x1bd Func
	func_925(var_58_float); // 0x1c0 NEW_2
	var_515_cvector = CVector(0.0, 0.0, 0.0); // 0x1c2 PushVec
	SetSpeed(var_515_cvector); // 0x1c3 Func
	Stop(); // 0x1c5 Func
	StopAsync(); // 0x1c7 Func
	var_516_bool = 0; // 0x1c9 PushV
	func_882(var_58_float, var_516_bool); // 0x1ca NEW_2
	var_517_bool = var_516_bool == 0; // 0x1cc Not
	if(var_517_bool == 0) goto Label_485; // 0x1cd JumpB
	var_518_bool = 0; var_519_object = Obj(); // 0x1ce PushV
	var_519_object = var_0_object; // 0x1cf MovT
	func_1497(var_518_bool, var_519_object); // 0x1d0 NEW_2
	var_520_bool = var_518_bool == 0; // 0x1d2 Not
	if(var_520_bool == 0) goto Label_469; // 0x1d3 JumpB
	goto Label_495; // 0x1d4 Jump
	
Label_469:
	GetPFPosition(var_49_cvector); // 0x1d5 TObjFunc
	GetPFPosition(var_50_cvector); // 0x1d7 Func
	var_54_cvector = var_49_cvector - var_50_cvector; // 0x1d9 Sub2
	var_55_float = var_54_cvector | var_54_cvector; // 0x1da Or2
	var_521_float = var_36_float * var_36_float; // 0x1db Mult
	var_522_bool = var_55_float < var_521_float; // 0x1dc LT
	if(var_522_bool == 0) goto Label_485; // 0x1dd JumpB
	var_523_bool = 0; var_524_float = 0; // 0x1de PushV
	var_524_float = var_36_float; // 0x1df Mov
	func_586(var_58_float, var_523_bool, var_524_float); // 0x1e0 NEW_2
	var_525_bool = var_523_bool == 0; // 0x1e2 Not
	if(var_525_bool == 0) goto Label_485; // 0x1e3 JumpB
	goto Label_495; // 0x1e4 Jump
	
Label_486:
	var_526_bool = 0; var_527_float = 0; // 0x1e6 PushV
	var_527_float = var_36_float; // 0x1e7 Mov
	func_586(var_58_float, var_526_bool, var_527_float); // 0x1e8 NEW_2
	var_528_bool = var_526_bool == 0; // 0x1ea Not
	if(var_528_bool == 0) goto Label_493; // 0x1eb JumpB
	goto Label_495; // 0x1ec Jump
	
Label_493:
	var_52_bool = 1; // 0x1ed MovB
	
Label_320:
	var_52_bool = 1; // 0x140 MovB
	
Label_297:
	var_48_float = var_36_float; // 0x129 Mov
}


func_1180(var_0_object)
{
	var_0_object = 1; // 0x49c TMovB
	var_19_int = 0; // 0x49d PushI
	KillTimer(var_19_int); // 0x49e Func
	Stop(); // 0x4a0 Func
	return 0; // 0x4a2 Return
}


func_925(var_0_object)
{
	var_130_object = Obj(); // 0x39d PushV
	var_130_object = var_0_object; // 0x39e MovT
	func_1898(var_130_object); // 0x39f NEW_2
	return 0; // 0x3a1 Return
}


func_1565(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x61d PushV
	var_40_bool = 0; // 0x61e PushV
	var_40_bool = 0; // 0x61f MovB
	var_41_bool = 0; // 0x620 PushV
	var_41_bool = 0; // 0x621 MovB
	var_42_object = var_19_object; // 0x622 Push
	if(var_42_object == 0) goto Label_1576; // 0x623 JumpB
	var_43_int = 4; // 0x624 PushI
	var_44_bool = var_20_int != var_43_int; // 0x625 Neq
	if(var_44_bool == 0) goto Label_1576; // 0x626 JumpB
	var_41_bool = 1; // 0x627 MovB
	
Label_1576:
	if(var_41_bool == 0) goto Label_1581; // 0x628 JumpB
	var_45_int = 5; // 0x629 PushI
	var_46_bool = var_20_int != var_45_int; // 0x62a Neq
	if(var_46_bool == 0) goto Label_1581; // 0x62b JumpB
	var_40_bool = 1; // 0x62c MovB
	
Label_1581:
	if(var_40_bool == 0) goto Label_1628; // 0x62d JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x62e PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x62f PushV
	var_50_object = var_19_object; // 0x630 Mov
	func_1359(var_50_object); // 0x631 NEW_2
	var_48_cvector = var_49_cvector; // 0x632 Mov
	func_1841(var_47_cvector, var_48_cvector); // 0x634 NEW_2
	var_31_cvector = var_47_cvector; // 0x635 Mov
	CreateVectorVector(var_32_object); // 0x637 Func
	var_33_int = 1; // 0x639 MovI
	
Label_1594:
	var_60_string = "hit"; // 0x63a PushS
	var_61_int = var_60_string + var_33_int; // 0x63b Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x63c Func
	var_62_bool = var_34_bool == 0; // 0x63e Not
	if(var_62_bool == 0) goto Label_1601; // 0x63f JumpB
	goto Label_1610; // 0x640 Jump
	
Label_1610:
	size(var_37_int); // 0x64a ObjFunc
	var_63_int = var_37_int; // 0x64c Push
	if(var_63_int == 0) goto Label_1627; // 0x64d JumpB
	irand(var_38_int, var_37_int); // 0x64e Func
	get(var_39_cvector, var_38_int); // 0x650 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x652 PushV
	var_64_object = var_19_object; // 0x653 Mov
	var_65_int = var_20_int; // 0x654 Mov
	var_66_float = var_21_float; // 0x655 Mov
	var_67_cvector = var_39_cvector; // 0x656 Mov
	var_68_cvector = -var_31_cvector; // 0x657 Neg2
	func_1633(var_66_float, var_67_cvector, var_68_cvector); // 0x658 NEW_2
	return 18; // 0x65a Return
	
Label_1627:
	var_32_object = 0; // 0x65b SetNull
	
Label_1628:
	var_109_object = Obj(); // 0x65c PushV
	var_109_object = var_19_object; // 0x65d Mov
	func_1521(var_109_object); // 0x65e NEW_2
	return 18; // 0x660 Return
	
Label_1601:
	var_110_int = var_36_cvector | var_31_cvector; // 0x641 Or
	var_111_float = 0.70711; // 0x642 PushF
	var_112_bool = var_110_int >= var_111_float; // 0x643 GE
	if(var_112_bool == 0) goto Label_1607; // 0x644 JumpB
	add(var_35_cvector); // 0x645 ObjFunc
	
Label_1607:
	var_113_int = 1; // 0x647 PushI
	var_33_int = var_33_int + var_113_int; // 0x648 Add2
	goto Label_1594; // 0x649 Jump
}


func_1787()
{
	var_18_bool = 0; // 0x6fb PushV
	func_1943(var_18_bool); // 0x6fc NEW_2
	if(var_18_bool == 0) goto Label_1793; // 0x6fe JumpB
	lshStopSpeech(); // 0x6ff Func
	
Label_1793:
	return 0; // 0x701 Return
}


func_1056(var_0_object, var_1_object, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool)
{
	var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); var_180_bool = 0; var_181_bool = 0; var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_object = Obj(); // 0x420 PushV
	var_0_object = 0; // 0x421 TMovB
	var_1_object = var_167_object; // 0x422 TMov
	var_181_bool = var_171_bool; // 0x423 Mov
	
Label_1060:
	var_188_bool = 0; var_189_object = Obj(); // 0x424 PushV
	var_189_object = var_167_object; // 0x425 Mov
	func_1196(var_188_bool, var_189_object); // 0x426 NEW_2
	var_192_bool = var_188_bool == 0; // 0x428 Not
	if(var_192_bool == 0) goto Label_1068; // 0x429 JumpB
	var_166_bool = 0; // 0x42a MovB
	return 16; // 0x42b Return
	
Label_1068:
	GetPosition(var_183_cvector); // 0x42c ObjFunc
	GetPosition(var_184_cvector); // 0x42e Func
	var_185_cvector = var_183_cvector - var_184_cvector; // 0x430 Sub2
	var_186_float = var_185_cvector | var_185_cvector; // 0x431 Or2
	var_193_bool = 0; // 0x432 PushV
	var_193_bool = 0; // 0x433 MovB
	var_194_int = 0; // 0x434 PushI
	var_195_bool = var_169_float > var_194_int; // 0x435 GT
	if(var_195_bool == 0) goto Label_1083; // 0x436 JumpB
	var_196_float = var_169_float * var_169_float; // 0x437 Mult
	var_197_bool = var_186_float > var_196_float; // 0x438 GT
	if(var_197_bool == 0) goto Label_1083; // 0x439 JumpB
	var_193_bool = 1; // 0x43a MovB
	
Label_1083:
	if(var_193_bool == 0) goto Label_1088; // 0x43b JumpB
	Stop(); // 0x43c Func
	var_166_bool = 0; // 0x43e MovB
	return 16; // 0x43f Return
	
Label_1088:
	var_198_float = var_168_float * var_168_float; // 0x440 Mult
	var_199_bool = var_186_float > var_198_float; // 0x441 GT
	if(var_199_bool == 0) goto Label_1150; // 0x442 JumpB
	GetPFPosition(var_183_cvector); // 0x443 ObjFunc
	FindPathTo(var_187_object, var_183_cvector); // 0x445 Func
	var_200_bool = var_187_object != 0; // 0x447 NullNeq
	if(var_200_bool == 0) goto Label_1099; // 0x448 JumpB
	var_182_object = var_187_object; // 0x449 Mov
	var_187_object = 0; // 0x44a SetNull
	
Label_1099:
	var_201_bool = var_182_object != 0; // 0x44b NullNeq
	if(var_201_bool == 0) goto Label_1132; // 0x44c JumpB
	var_202_bool = var_181_bool; // 0x44d Push
	if(var_202_bool == 0) goto Label_1109; // 0x44e JumpB
	var_181_bool = 0; // 0x44f MovB
	RotatePath(var_182_object, var_180_bool); // 0x450 Func
	var_203_bool = var_180_bool == 0; // 0x452 Not
	if(var_203_bool == 0) goto Label_1109; // 0x453 JumpB
	goto Label_1156; // 0x454 Jump
	
Label_1156:
	var_166_bool = !var_0_object; // 0x484 Not2
	return 16; // 0x485 Return
	
Label_1109:
	var_204_int = 0; // 0x455 PushI
	var_205_float = 0.3; // 0x456 PushF
	SetTimer(var_204_int, var_205_float); // 0x457 Func
	var_206_string = ""; // 0x459 PushV
	func_1203(var_206_string); // 0x45a NEW_2
	var_207_string = ""; // 0x45c PushV
	func_1205(var_207_string); // 0x45d NEW_2
	FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string); // 0x45f Func
	var_208_bool = var_180_bool == 0; // 0x461 Not
	if(var_208_bool == 0) goto Label_1130; // 0x462 JumpB
	var_209_object = var_0_object; // 0x463 PushT
	if(var_209_object == 0) goto Label_1128; // 0x464 JumpB
	var_182_object = 0; // 0x465 SetNull
	goto Label_1156; // 0x466 Jump
	
Label_1128:
	goto Label_1155; // 0x468 Jump
	
Label_1155:
	goto Label_1060; // 0x483 Jump
	
Label_1130:
	var_182_object = 0; // 0x46a SetNull
	goto Label_1148; // 0x46b Jump
	
Label_1148:
	var_187_object = 0; // 0x47c SetNull
	goto Label_1154; // 0x47d Jump
	
Label_1154:
	var_182_object = 0; // 0x482 SetNull
	
Label_1132:
	var_210_int = 0; // 0x46c PushI
	KillTimer(var_210_int); // 0x46d Func
	var_211_float = 0.5; // 0x46f PushF
	Sleep(var_211_float, var_180_bool); // 0x470 Func
	var_212_bool = var_180_bool == 0; // 0x472 Not
	if(var_212_bool == 0) goto Label_1144; // 0x473 JumpB
	var_213_object = var_0_object; // 0x474 PushT
	if(var_213_object == 0) goto Label_1144; // 0x475 JumpB
	var_182_object = 0; // 0x476 SetNull
	goto Label_1156; // 0x477 Jump
	
Label_1144:
	var_214_int = 0; // 0x478 PushI
	var_215_float = 0.3; // 0x479 PushF
	SetTimer(var_214_int, var_215_float); // 0x47a Func
	
Label_1150:
	var_216_int = 0; // 0x47e PushI
	KillTimer(var_216_int); // 0x47f Func
	goto Label_1156; // 0x481 Jump
}


func_1313(var_46_string)
{
	RemoveRTEnvelope(); // 0x522 Func
	SetDeathState(); // 0x524 Func
	Stop(); // 0x526 Func
	StopAsync(); // 0x528 Func
	StopSecondaryAnimation(); // 0x52a Func
	var_47_string = ""; // 0x52c PushV
	var_47_string = var_46_string; // 0x52d Mov
	func_1794(var_47_string); // 0x52e NEW_2
	var_76_string = "all"; // 0x530 PushS
	PlayAnimation(var_76_string, var_46_string); // 0x531 Func
	WaitForAnimEnd(); // 0x533 Func
	var_77_string = "all"; // 0x535 PushS
	LockAnimationEnd(var_77_string, var_46_string); // 0x536 Func
	RemoveEnvelope(); // 0x538 Func
	return 0; // 0x53a Return
}


func_930(var_471_int)
{
	var_471_int = 0; // 0x3a2 MovI
	return 0; // 0x3a3 Return
}


func_547(var_0_object, var_392_float, var_393_int)
{
	var_394_object = Obj(); var_395_float = 0; var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_float = 0; // 0x223 PushV
	var_400_float = 0.9; // 0x224 PushF
	var_401_float = var_392_float * var_400_float; // 0x225 Mult
	GetVictim(var_401_float, var_397_object); // 0x226 Func
	ReportAttack(var_0_object); // 0x228 Func
	var_402_bool = var_397_object == var_0_object; // 0x22a Eq
	if(var_402_bool == 0) goto Label_584; // 0x22b JumpB
	var_403_float = 0; var_404_object = Obj(); var_405_int = 0; // 0x22c PushV
	var_404_object = var_397_object; // 0x22d Mov
	var_405_int = var_393_int; // 0x22e Mov
	func_271(var_405_int); // 0x22f NEW_2
	var_398_float = var_403_float; // 0x230 Mov
	var_406_float = 0; var_407_object = Obj(); var_408_float = 0; var_409_int = 0; // 0x232 PushV
	var_407_object = var_397_object; // 0x233 Mov
	var_408_float = var_398_float; // 0x234 Mov
	var_410_int = 0; var_411_object = Obj(); var_412_int = 0; // 0x235 PushV
	var_411_object = var_397_object; // 0x236 Mov
	var_412_int = var_393_int; // 0x237 Mov
	func_274(var_412_int); // 0x238 NEW_2
	var_409_int = var_410_int; // 0x239 Mov
	func_1383(var_406_float, var_407_object, var_408_float, var_409_int); // 0x23b NEW_2
	var_399_float = var_406_float; // 0x23c Mov
	var_471_int = 0; // 0x23e PushV
	func_930(var_471_int); // 0x23f NEW_2
	ReportHit(var_0_object, var_471_int, var_399_float, var_398_float); // 0x241 Func
	var_472_object = Obj(); var_473_float = 0; // 0x243 PushV
	var_472_object = var_397_object; // 0x244 Mov
	var_473_float = var_399_float; // 0x245 Mov
	func_937(); // 0x246 NEW_2
	
Label_584:
	return 6; // 0x248 Return
}


func_932()
{
	var_263_string = ""; // 0x3a4 PushV
	var_263_string = "attack_stay"; // 0x3a5 MovS
	func_1794(var_263_string); // 0x3a6 NEW_2
	return 0; // 0x3a8 Return
}


func_1956(var_16_object)
{
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; // 0x7a5 PushV
	var_18_string = "quest_d1_03"; // 0x7a6 MovS
	var_19_string = "butcher_death"; // 0x7a7 MovS
	func_1886(var_17_bool, var_18_string, var_19_string); // 0x7a8 NEW_2
	var_23_object = Obj(); // 0x7aa PushV
	var_23_object = var_16_object; // 0x7ab Mov
	TaskCall(5); // 0x7ac TaskCall
	func_1213(var_23_object); // 0x7ad NEW_2
	TaskReturn(); // 0x7ae TaskReturn
	return 0; // 0x7b0 Return
}


func_937()
{
	return 0; // 0x3aa Return
}


func_1835(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x72b PushV
	self(var_17_object); // 0x72c Func
	var_15_object = var_17_object; // 0x72e Mov
	return 2; // 0x72f Return
}


func_939(var_496_bool)
{
	var_496_bool = 1; // 0x3ab MovB
	return 0; // 0x3ac Return
}


func_941(var_388_int)
{
	var_388_int = 1; // 0x3ad MovI
	return 0; // 0x3ae Return
}


func_1196(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x4ad PushV
	var_29_object = var_27_object; // 0x4ae Mov
	func_1497(var_28_bool, var_29_object); // 0x4af NEW_2
	var_26_bool = var_28_bool; // 0x4b0 Mov
	return 0; // 0x4b2 Return
}


func_943(var_383_float)
{
	var_383_float = 0.5; // 0x3af MovF
	return 0; // 0x3b0 Return
}


func_1456(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x5b0 PushV
	IsDead(var_46_bool); // 0x5b1 ObjFunc
	var_43_bool = var_46_bool; // 0x5b3 Mov
	return 2; // 0x5b4 Return
}


func_1841(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x731 PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x732 Or
	var_56_float = sqrt(var_57_int); // 0x733 Sqrt2
	var_58_float = 0.0; // 0x734 PushF
	var_59_bool = var_56_float < var_58_float; // 0x735 LT
	if(var_59_bool == 0) goto Label_1849; // 0x736 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x737 MovV
	return 2; // 0x738 Return
	
Label_1849:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x739 Div2
	return 2; // 0x73a Return
}


func_1203(var_206_string)
{
	var_206_string = "walk"; // 0x4b3 MovS
	return 0; // 0x4b4 Return
}


func_821(var_307_bool)
{
	var_308_bool = 0; // 0x335 PushV
	var_308_bool = 0; // 0x336 MovB
	var_309_bool = 0; // 0x337 PushV
	func_793(var_308_bool, var_309_bool); // 0x338 NEW_2
	if(var_309_bool == 0) goto Label_832; // 0x33a JumpB
	var_326_bool = 0; // 0x33b PushV
	func_837(var_307_bool, var_308_bool, var_326_bool); // 0x33c NEW_2
	if(var_326_bool == 0) goto Label_832; // 0x33e JumpB
	var_308_bool = 1; // 0x33f MovB
	
Label_832:
	if(var_308_bool == 0) goto Label_835; // 0x340 JumpB
	var_307_bool = 1; // 0x341 MovB
	return 0; // 0x342 Return
	
Label_835:
	var_307_bool = 0; // 0x343 MovB
	return 0; // 0x344 Return
}


func_1205(var_207_string)
{
	var_207_string = "run"; // 0x4b5 MovS
	return 0; // 0x4b6 Return
}


func_951(var_2_object, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; // 0x3b7 PushV
	var_150_object = Obj(); // 0x3b8 PushV
	var_150_object = var_138_object; // 0x3b9 Mov
	func_1898(var_150_object); // 0x3ba NEW_2
	var_151_int = 1; // 0x3bc PushI
	var_152_int = 5; // 0x3bd PushI
	SetTimer(var_151_int, var_152_int); // 0x3be Func
	CanSee(var_148_bool, var_138_object); // 0x3c0 Func
	var_153_bool = var_148_bool; // 0x3c2 Push
	if(var_153_bool == 0) goto Label_970; // 0x3c3 JumpB
	var_2_object = 1; // 0x3c4 TMovB
	var_154_object = Obj(); // 0x3c5 PushV
	var_154_object = var_138_object; // 0x3c6 Mov
	func_1776(var_154_object); // 0x3c7 NEW_2
	goto Label_971; // 0x3c9 Jump
	
Label_971:
	var_161_bool = 0; var_162_object = Obj(); // 0x3cb PushV
	var_162_object = var_138_object; // 0x3cc Mov
	func_1366(var_161_bool, var_162_object); // 0x3cd NEW_2
	if(var_161_bool == 0) goto Label_981; // 0x3cf JumpB
	var_165_object = Obj(); // 0x3d0 PushV
	func_1835(var_165_object); // 0x3d1 NEW_2
	SendPlayerEnemy(var_138_object, var_165_object); // 0x3d3 Func
	
Label_981:
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; var_169_float = 0; var_170_bool = 0; var_171_bool = 0; // 0x3d5 PushV
	var_167_object = var_138_object; // 0x3d6 Mov
	var_168_float = var_139_float; // 0x3d7 Mov
	var_169_float = var_140_float; // 0x3d8 Mov
	var_170_bool = var_141_bool; // 0x3d9 Mov
	var_171_bool = var_142_bool; // 0x3da Mov
	func_1056(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool); // 0x3db NEW_2
	var_149_bool = var_166_bool; // 0x3dc Mov
	var_217_object = var_2_object; // 0x3de PushT
	if(var_217_object == 0) goto Label_995; // 0x3df JumpB
	var_218_string = "head"; // 0x3e0 PushS
	UnlookAsync(var_218_string); // 0x3e1 Func
	
Label_995:
	var_219_int = 1; // 0x3e3 PushI
	KillTimer(var_219_int); // 0x3e4 Func
	var_137_bool = var_149_bool; // 0x3e6 Mov
	return 4; // 0x3e7 Return
	
Label_970:
	var_2_object = 0; // 0x3ca TMovB
}


func_1461(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x5b5 PushV
	var_38_bool = var_33_object == 0; // 0x5b6 NullEq
	if(var_38_bool == 0) goto Label_1466; // 0x5b7 JumpB
	var_32_bool = 0; // 0x5b8 MovB
	return 4; // 0x5b9 Return
	
Label_1466:
	var_39_bool = 0; // 0x5ba PushV
	var_39_bool = 0; // 0x5bb MovB
	var_40_string = "IsDead"; // 0x5bc PushS
	var_41_int = 1; // 0x5bd PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0x5be FuncExist
	if(var_42_bool == 0) goto Label_1478; // 0x5bf JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x5c0 PushV
	var_44_object = var_33_object; // 0x5c1 Mov
	func_1456(var_44_object); // 0x5c2 NEW_2
	if(var_43_bool == 0) goto Label_1478; // 0x5c4 JumpB
	var_39_bool = 1; // 0x5c5 MovB
	
Label_1478:
	if(var_39_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_32_bool = 0; // 0x5c7 MovB
	return 4; // 0x5c8 Return
	
Label_1481:
	GetScene(var_36_object); // 0x5c9 Func
	var_47_bool = var_36_object == 0; // 0x5cb NullEq
	if(var_47_bool == 0) goto Label_1487; // 0x5cc JumpB
	var_32_bool = 0; // 0x5cd MovB
	return 4; // 0x5ce Return
	
Label_1487:
	GetScene(var_37_object); // 0x5cf ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0x5d1 Neq
	if(var_48_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_32_bool = 0; // 0x5d3 MovB
	return 4; // 0x5d4 Return
	
Label_1493:
	var_32_bool = 1; // 0x5d5 MovB
	return 4; // 0x5d6 Return
}


func_1851(var_444_float, var_445_float, var_446_float)
{
	var_449_bool = var_445_float < var_446_float; // 0x73c LT
	if(var_449_bool == 0) goto Label_1856; // 0x73d JumpB
	var_444_float = var_445_float; // 0x73e Mov
	goto Label_1857; // 0x73f Jump
	
Label_1857:
	return 0; // 0x741 Return
	
Label_1856:
	var_444_float = var_446_float; // 0x740 Mov
}


func_1213(var_23_object)
{
	var_24_object = Obj(); // 0x4be PushV
	var_24_object = var_23_object; // 0x4bf Mov
	func_1222(var_24_object); // 0x4c0 NEW_2
	
Label_1218:
	Hold(); // 0x4c2 Func
	goto Label_1218; // 0x4c4 Jump
}


func_1727()
{
	var_139_bool = 0; var_140_bool = 0; // 0x6bf PushV
	var_141_bool = 1; // 0x6c0 PushB
	CameraSwitchToNormal(var_141_bool); // 0x6c1 Func
	var_142_bool = 0; // 0x6c3 PushV
	func_1943(var_142_bool); // 0x6c4 NEW_2
	if(var_142_bool == 0) goto Label_1736; // 0x6c6 JumpB
	goto Label_1744; // 0x6c7 Jump
	
Label_1744:
	return 2; // 0x6d0 Return
	
Label_1736:
	var_143_string = "head"; // 0x6c8 PushS
	HasAnimationTrack(var_140_bool, var_143_string); // 0x6c9 Func
	var_144_bool = var_140_bool; // 0x6cb Push
	if(var_144_bool == 0) goto Label_1744; // 0x6cc JumpB
	var_145_string = "head"; // 0x6cd PushS
	UnlookAsync(var_145_string); // 0x6ce Func
}


func_1345(var_434_string, var_435_int)
{
	var_436_int = 2; // 0x542 PushI
	var_437_bool = var_435_int == var_436_int; // 0x543 Eq
	if(var_437_bool == 0) goto Label_1352; // 0x544 JumpB
	var_434_string = "fire"; // 0x545 MovS
	return 0; // 0x546 Return
	
Label_1352:
	var_438_int = 1; // 0x548 PushI
	var_439_bool = var_435_int == var_438_int; // 0x549 Eq
	if(var_439_bool == 0) goto Label_1357; // 0x54a JumpB
	var_434_string = "bullet"; // 0x54b MovS
	return 0; // 0x54c Return
	
Label_1357:
	var_434_string = "phys"; // 0x54d MovS
	return 0; // 0x54e Return
}


func_1858(var_454_float, var_455_float, var_456_float, var_457_float)
{
	var_458_bool = var_455_float < var_456_float; // 0x743 LT
	if(var_458_bool == 0) goto Label_1863; // 0x744 JumpB
	var_454_float = var_456_float; // 0x745 Mov
	return 0; // 0x746 Return
	
Label_1863:
	var_459_bool = var_455_float > var_457_float; // 0x747 GT
	if(var_459_bool == 0) goto Label_1867; // 0x748 JumpB
	var_454_float = var_457_float; // 0x749 Mov
	return 0; // 0x74a Return
	
Label_1867:
	var_454_float = var_455_float; // 0x74b Mov
	return 0; // 0x74c Return
}


func_837(var_0_object, var_4_bool, var_326_bool)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); // 0x345 PushV
	GetScene(var_332_object); // 0x346 Func
	var_333_bool = 0; // 0x348 MovB
	
Label_841:
	var_337_cvector = CVector(0,0,0); var_338_object = Obj(); // 0x349 PushV
	var_338_object = var_0_object; // 0x34a MovT
	func_1359(var_338_object); // 0x34b NEW_2
	var_343_int = -var_337_cvector; // 0x34d Neg
	FindDirLength(var_334_float, var_343_int, var_334_float); // 0x34e Func
	var_344_bool = var_334_float < var_4_bool; // 0x350 LT
	if(var_344_bool == 0) goto Label_851; // 0x351 JumpB
	goto Label_879; // 0x352 Jump
	
Label_879:
	var_326_bool = var_333_bool; // 0x36f Mov
	return 10; // 0x370 Return
	
Label_851:
	Face(var_0_object); // 0x353 Func
	var_345_string = "all"; // 0x355 PushS
	var_346_string = "bjump"; // 0x356 PushS
	PlayAnimation(var_345_string, var_346_string); // 0x357 Func
	GetPFPosition(var_335_cvector); // 0x359 TObjFunc
	GetPFPosition(var_336_cvector); // 0x35b Func
	WaitForAnimEnd(); // 0x35d Func
	func_925(var_336_cvector); // 0x360 NEW_2
	StopAsync(); // 0x362 Func
	var_347_cvector = CVector(0.0, 0.0, 0.0); // 0x364 PushVec
	SetSpeed(var_347_cvector); // 0x365 Func
	var_333_bool = 1; // 0x367 MovB
	var_348_bool = 0; // 0x368 PushV
	func_793(var_336_cvector, var_348_bool); // 0x369 NEW_2
	var_349_bool = var_348_bool == 0; // 0x36b Not
	if(var_349_bool == 0) goto Label_878; // 0x36c JumpB
	goto Label_879; // 0x36d Jump
	
Label_878:
	goto Label_841; // 0x36e Jump
}


func_1222(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); // 0x4c6 PushV
	var_45_bool = var_24_object == 0; // 0x4c7 NullEq
	if(var_45_bool == 0) goto Label_1230; // 0x4c8 JumpB
	var_46_string = ""; // 0x4c9 PushV
	var_46_string = "fdie"; // 0x4ca MovS
	func_1313(var_46_string); // 0x4cb NEW_2
	goto Label_1312; // 0x4cd Jump
	
Label_1312:
	return 20; // 0x520 Return
	
Label_1230:
	GetPosition(var_35_cvector); // 0x4ce ObjFunc
	GetPosition(var_36_cvector); // 0x4d0 Func
	GetDirection(var_37_cvector); // 0x4d2 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x4d4 Sub2
	var_78_float = GetByIndex(var_38_cvector, 0); // 0x4d5 PushE
	var_79_float = GetByIndex(var_37_cvector, 0); // 0x4d6 PushE
	var_80_float = var_78_float * var_79_float; // 0x4d7 Mult
	var_81_float = GetByIndex(var_38_cvector, 2); // 0x4d8 PushE
	var_82_float = GetByIndex(var_37_cvector, 2); // 0x4d9 PushE
	var_83_float = var_81_float * var_82_float; // 0x4da Mult
	var_84_int = var_80_float + var_83_float; // 0x4db Add
	var_85_int = 0; // 0x4dc PushI
	var_86_bool = var_84_int >= var_85_int; // 0x4dd GE
	if(var_86_bool == 0) goto Label_1249; // 0x4de JumpB
	var_39_string = "fdie"; // 0x4df MovS
	goto Label_1250; // 0x4e0 Jump
	
Label_1250:
	RemoveRTEnvelope(); // 0x4e2 Func
	SetDeathState(); // 0x4e4 Func
	Stop(); // 0x4e6 Func
	StopAsync(); // 0x4e8 Func
	var_40_object = var_24_object; // 0x4ea Mov
	var_87_string = "GetScriptProperty"; // 0x4eb PushS
	var_88_int = 2; // 0x4ec PushI
	var_89_bool = IsFuncExist(var_24_object, var_87_string, var_88_int); // 0x4ed FuncExist
	if(var_89_bool == 0) goto Label_1274; // 0x4ee JumpB
	var_90_string = "Owner"; // 0x4ef PushS
	HasScriptProperty(var_41_bool, var_90_string); // 0x4f0 ObjFunc
	var_91_bool = var_41_bool; // 0x4f2 Push
	if(var_91_bool == 0) goto Label_1274; // 0x4f3 JumpB
	var_92_string = "Owner"; // 0x4f4 PushS
	GetScriptProperty(var_40_object, var_92_string); // 0x4f5 ObjFunc
	var_93_bool = var_40_object == 0; // 0x4f7 NullEq
	if(var_93_bool == 0) goto Label_1274; // 0x4f8 JumpB
	var_40_object = var_24_object; // 0x4f9 Mov
	
Label_1274:
	var_94_string = "@GetEyesHeight"; // 0x4fa PushS
	var_95_int = 1; // 0x4fb PushI
	var_96_bool = IsFuncExist(var_40_object, var_94_string, var_95_int); // 0x4fc FuncExist
	if(var_96_bool == 0) goto Label_1289; // 0x4fd JumpB
	GetEyesHeight(var_43_float); // 0x4fe ObjFunc
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x500 MovV
	var_97_float = GetByIndex(var_44_cvector, 1); // 0x501 PushE
	var_97_float = var_43_float; // 0x502 Mov
	SetByIndex(var_44_cvector, 1) = var_97_float; // 0x503 PopE
	var_98_string = "head"; // 0x504 PushS
	LookAsync(var_24_object, var_98_string, var_44_cvector); // 0x505 Func
	var_42_bool = 1; // 0x507 MovB
	goto Label_1290; // 0x508 Jump
	
Label_1290:
	var_99_string = ""; // 0x50a PushV
	var_99_string = var_39_string; // 0x50b Mov
	func_1794(var_99_string); // 0x50c NEW_2
	var_100_string = "all"; // 0x50e PushS
	PlayAnimation(var_100_string, var_39_string); // 0x50f Func
	WaitForAnimEnd(); // 0x511 Func
	var_101_bool = var_42_bool; // 0x513 Push
	if(var_101_bool == 0) goto Label_1306; // 0x514 JumpB
	StopAsync(); // 0x515 Func
	var_102_string = "head"; // 0x517 PushS
	UnlookAsync(var_102_string); // 0x518 Func
	
Label_1306:
	var_103_string = "all"; // 0x51a PushS
	LockAnimationEnd(var_103_string, var_39_string); // 0x51b Func
	RemoveEnvelope(); // 0x51d Func
	var_40_object = 0; // 0x51f SetNull
	
Label_1289:
	var_42_bool = 0; // 0x509 MovB
	
Label_1249:
	var_39_string = "bdie"; // 0x4e1 MovS
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
	var_112_int = 505264; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_int = 505265; // 0x59 PushI
	var_114_int = -1; // 0x5a PushI
	var_115_int = 5802; // 0x5b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5c TObjFunc
	var_116_int = 506042; // 0x5e PushI
	var_117_int = -1; // 0x5f PushI
	var_118_int = 6665; // 0x60 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_119_bool = 0; // 0x66 PushV
	func_1943(var_119_bool); // 0x67 NEW_2
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
	func_1745(var_121_string); // 0x71 NEW_2
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


func_586(var_0_object, var_355_bool, var_356_float)
{
	var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_string = ""; // 0x24a PushV
	func_925(var_364_string); // 0x24c NEW_2
	irand(var_361_int, var_364_string); // 0x24e Func
	var_365_int = 1; // 0x250 PushI
	var_361_int = var_361_int + var_365_int; // 0x251 Add2
	Face(var_0_object); // 0x252 Func
	var_366_bool = 1; // 0x254 PushB
	SetAttackState(var_366_bool); // 0x255 Func
	func_1907(); // 0x258 NEW_2
	var_371_string = "all"; // 0x25a PushS
	var_372_string = "attack_begin"; // 0x25b PushS
	var_373_int = var_372_string + var_361_int; // 0x25c Add
	PlayAnimation(var_371_string, var_373_int); // 0x25d Func
	WaitForAnimEnd(); // 0x25f Func
	func_893(var_363_int, var_364_string); // 0x262 NEW_2
	var_389_bool = 0; var_390_object = Obj(); // 0x264 PushV
	var_390_object = var_0_object; // 0x265 MovT
	func_1497(var_389_bool, var_390_object); // 0x266 NEW_2
	var_391_bool = var_389_bool == 0; // 0x268 Not
	if(var_391_bool == 0) goto Label_622; // 0x269 JumpB
	StopAsync(); // 0x26a Func
	var_355_bool = 0; // 0x26c MovB
	return 8; // 0x26d Return
	
Label_622:
	var_392_float = 0; var_393_int = 0; // 0x26e PushV
	var_392_float = var_356_float; // 0x26f Mov
	var_393_int = var_361_int; // 0x270 Mov
	func_547(var_364_string, var_392_float, var_393_int); // 0x271 NEW_2
	var_474_string = "all"; // 0x273 PushS
	var_475_string = "attack_middle"; // 0x274 PushS
	var_476_int = var_475_string + var_361_int; // 0x275 Add
	HasAnimation(var_362_bool, var_474_string, var_476_int); // 0x276 Func
	var_477_bool = var_362_bool; // 0x278 Push
	if(var_477_bool == 0) goto Label_703; // 0x279 JumpB
	func_1907(); // 0x27b NEW_2
	var_478_string = "all"; // 0x27d PushS
	var_479_string = "attack_middle"; // 0x27e PushS
	var_480_int = var_479_string + var_361_int; // 0x27f Add
	PlayAnimation(var_478_string, var_480_int); // 0x280 Func
	WaitForAnimEnd(); // 0x282 Func
	func_925(var_364_string); // 0x285 NEW_2
	var_481_bool = 0; var_482_object = Obj(); // 0x287 PushV
	var_482_object = var_0_object; // 0x288 MovT
	func_1497(var_481_bool, var_482_object); // 0x289 NEW_2
	var_483_bool = var_481_bool == 0; // 0x28b Not
	if(var_483_bool == 0) goto Label_657; // 0x28c JumpB
	StopAsync(); // 0x28d Func
	var_355_bool = 0; // 0x28f MovB
	return 8; // 0x290 Return
	
Label_657:
	var_484_float = 0; var_485_int = 0; // 0x291 PushV
	var_484_float = var_356_float; // 0x292 Mov
	var_485_int = var_361_int; // 0x293 Mov
	func_547(var_364_string, var_484_float, var_485_int); // 0x294 NEW_2
	var_363_int = 1; // 0x296 MovI
	
Label_663:
	var_486_string = "attack_middle"; // 0x297 PushS
	var_487_int = var_486_string + var_361_int; // 0x298 Add
	var_488_string = "_"; // 0x299 PushS
	var_489_int = var_487_int + var_488_string; // 0x29a Add
	var_364_string = var_489_int + var_363_int; // 0x29b Add2
	var_490_string = "all"; // 0x29c PushS
	HasAnimation(var_362_bool, var_490_string, var_364_string); // 0x29d Func
	var_491_bool = var_362_bool == 0; // 0x29f Not
	if(var_491_bool == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_703; // 0x2a1 Jump
	
Label_703:
	var_492_bool = 0; // 0x2bf PushB
	SetAttackState(var_492_bool); // 0x2c0 Func
	var_493_string = "all"; // 0x2c2 PushS
	var_494_string = "attack_end"; // 0x2c3 PushS
	var_495_int = var_494_string + var_361_int; // 0x2c4 Add
	PlayAnimation(var_493_string, var_495_int); // 0x2c5 Func
	var_496_bool = 0; // 0x2c7 PushV
	func_939(var_496_bool); // 0x2c8 NEW_2
	if(var_496_bool == 0) goto Label_721; // 0x2ca JumpB
	var_497_bool = 0; var_498_float = 0; // 0x2cb PushV
	var_498_float = 0.75; // 0x2cc MovF
	func_723(var_497_bool, var_498_float); // 0x2cd NEW_2
	StopAsync(); // 0x2cf Func
	
Label_721:
	var_355_bool = 1; // 0x2d1 MovB
	return 8; // 0x2d2 Return
	
Label_674:
	func_1907(); // 0x2a3 NEW_2
	var_506_string = "all"; // 0x2a5 PushS
	PlayAnimation(var_506_string, var_364_string); // 0x2a6 Func
	WaitForAnimEnd(); // 0x2a8 Func
	func_925(var_364_string); // 0x2ab NEW_2
	var_507_bool = 0; var_508_object = Obj(); // 0x2ad PushV
	var_508_object = var_0_object; // 0x2ae MovT
	func_1497(var_507_bool, var_508_object); // 0x2af NEW_2
	var_509_bool = var_507_bool == 0; // 0x2b1 Not
	if(var_509_bool == 0) goto Label_695; // 0x2b2 JumpB
	StopAsync(); // 0x2b3 Func
	var_355_bool = 0; // 0x2b5 MovB
	return 8; // 0x2b6 Return
	
Label_695:
	var_510_float = 0; var_511_int = 0; // 0x2b7 PushV
	var_510_float = var_356_float; // 0x2b8 Mov
	var_511_int = var_361_int; // 0x2b9 Mov
	func_547(var_364_string, var_510_float, var_511_int); // 0x2ba NEW_2
	var_512_int = 1; // 0x2bc PushI
	var_363_int = var_363_int + var_512_int; // 0x2bd Add2
	goto Label_663; // 0x2be Jump
}


func_1869(var_462_float)
{
	var_463_object = Obj(); var_464_object = Obj(); // 0x74d PushV
	CreateFloatVector(var_464_object); // 0x74e Func
	add(var_462_float); // 0x750 ObjFunc
	var_465_int = 0; // 0x752 PushI
	var_466_bool = var_462_float < var_465_int; // 0x753 LT
	if(var_466_bool == 0) goto Label_1881; // 0x754 JumpB
	var_467_float = 0.7; // 0x755 PushF
	var_468_int = 500; // 0x756 PushI
	RumblePlay(var_467_float, var_468_int); // 0x757 Func
	
Label_1881:
	var_469_int = 15; // 0x759 PushI
	SendWorldWndMessage(var_469_int, var_464_object); // 0x75a Func
	return 2; // 0x75c Return
}


func_1359(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x54f PushV
	GetPosition(var_53_cvector); // 0x550 Func
	GetPosition(var_54_cvector); // 0x552 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x554 Sub2
	return 4; // 0x555 Return
}


func_1745(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x6d1 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x6d2 Func
	var_128_bool = var_125_bool; // 0x6d4 Push
	if(var_128_bool == 0) goto Label_1756; // 0x6d5 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x6d6 Func
	var_129_bool = 0; // 0x6d8 PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x6d9 Func
	goto Label_1760; // 0x6db Jump
	
Label_1760:
	return 6; // 0x6e0 Return
	
Label_1756:
	var_130_string = "Can't find lsh animation : "; // 0x6dc PushS
	var_131_int = var_130_string + var_121_string; // 0x6dd Add
	Trace(var_131_int); // 0x6de Func
}


func_723(var_497_bool, var_498_float)
{
	var_499_float = 0; var_500_bool = 0; var_501_float = 0; var_502_bool = 0; // 0x2d3 PushV
	rand(var_501_float); // 0x2d4 Func
	var_503_bool = var_501_float < var_498_float; // 0x2d6 LT
	if(var_503_bool == 0) goto Label_743; // 0x2d7 JumpB
	
Label_728:
	IsAnimationPlaying(var_502_bool); // 0x2d8 Func
	var_504_bool = var_502_bool == 0; // 0x2da Not
	if(var_504_bool == 0) goto Label_733; // 0x2db JumpB
	goto Label_742; // 0x2dc Jump
	
Label_742:
	goto Label_748; // 0x2e6 Jump
	
Label_748:
	var_497_bool = 0; // 0x2ec MovB
	return 4; // 0x2ed Return
	
Label_733:
	var_505_bool = 0; // 0x2dd PushV
	func_821(var_505_bool); // 0x2de NEW_2
	if(var_505_bool == 0) goto Label_739; // 0x2e0 JumpB
	var_497_bool = 1; // 0x2e1 MovB
	return 4; // 0x2e2 Return
	
Label_739:
	sync(); // 0x2e3 Func
	goto Label_728; // 0x2e5 Jump
	
Label_743:
	WaitForAnimEnd(); // 0x2e7 Func
	func_925(var_502_bool); // 0x2ea NEW_2
}


func_1366(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_bool = 0; // 0x556 PushV
	IsPlayerActor(var_162_object, var_164_bool); // 0x557 Func
	var_161_bool = var_164_bool; // 0x559 Mov
	return 2; // 0x55a Return
}


func_1497(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x5d9 PushV
	var_32_bool = 0; var_33_object = Obj(); // 0x5da PushV
	var_33_object = var_29_object; // 0x5db Mov
	func_1461(var_32_bool, var_33_object); // 0x5dc NEW_2
	var_49_bool = var_32_bool == 0; // 0x5de Not
	if(var_49_bool == 0) goto Label_1506; // 0x5df JumpB
	var_28_bool = 0; // 0x5e0 MovB
	return 2; // 0x5e1 Return
	
Label_1506:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x5e2 PushV
	var_51_object = var_29_object; // 0x5e3 Mov
	var_52_string = "noaccess"; // 0x5e4 MovS
	func_1371(var_50_bool, var_51_object, var_52_string); // 0x5e5 NEW_2
	var_59_bool = var_50_bool == 0; // 0x5e7 Not
	if(var_59_bool == 0) goto Label_1515; // 0x5e8 JumpB
	var_28_bool = 1; // 0x5e9 MovB
	return 2; // 0x5ea Return
	
Label_1515:
	var_60_string = "noaccess"; // 0x5eb PushS
	GetProperty(var_60_string, var_31_int); // 0x5ec ObjFunc
	var_61_int = 0; // 0x5ee PushI
	var_28_bool = var_31_int == var_61_int; // 0x5ef Eq2
	return 2; // 0x5f0 Return
}


func_1371(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x55b PushV
	var_55_string = "HasProperty"; // 0x55c PushS
	var_56_int = 2; // 0x55d PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x55e FuncExist
	var_58_bool = var_57_bool == 0; // 0x55f Not
	if(var_58_bool == 0) goto Label_1379; // 0x560 JumpB
	var_50_bool = 0; // 0x561 MovB
	return 2; // 0x562 Return
	
Label_1379:
	HasProperty(var_52_string, var_54_bool); // 0x563 ObjFunc
	var_50_bool = var_54_bool; // 0x565 Mov
	return 2; // 0x566 Return
}


func_1886(var_17_bool, var_18_string, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x75e PushV
	FindActor(var_21_object, var_18_string); // 0x75f Func
	var_22_bool = var_21_object == 0; // 0x761 NullEq
	if(var_22_bool == 0) goto Label_1893; // 0x762 JumpB
	var_17_bool = 0; // 0x763 MovB
	return 2; // 0x764 Return
	
Label_1893:
	Trigger(var_21_object, var_19_string); // 0x765 Func
	var_17_bool = 1; // 0x767 MovB
	return 2; // 0x768 Return
}


func_1761(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x6e1 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x6e2 Func
	var_109_bool = var_106_bool; // 0x6e4 Push
	if(var_109_bool == 0) goto Label_1771; // 0x6e5 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x6e6 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x6e8 Func
	goto Label_1775; // 0x6ea Jump
	
Label_1775:
	return 6; // 0x6ef Return
	
Label_1771:
	var_110_string = "Can't find lsh animation : "; // 0x6eb PushS
	var_111_int = var_110_string + var_99_string; // 0x6ec Add
	Trace(var_111_int); // 0x6ed Func
}


func_1633(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x661 PushV
	GetScene(var_28_object); // 0x662 Func
	var_30_string = "scripted"; // 0x664 PushS
	var_31_string = "blood_dir.xml"; // 0x665 PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x666 Func
	var_32_object = Obj(); // 0x668 PushV
	var_32_object = var_21_object; // 0x669 Mov
	func_1521(var_32_object); // 0x66a NEW_2
	return 4; // 0x66c Return
}


func_1383(var_406_float, var_407_object, var_408_float, var_409_int)
{
	var_413_int = 0; var_414_string = ""; var_415_int = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0; // 0x567 PushV
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x568 PushV
	var_426_object = var_407_object; // 0x569 Mov
	var_427_string = "health"; // 0x56a MovS
	func_1371(var_425_bool, var_426_object, var_427_string); // 0x56b NEW_2
	var_428_bool = var_425_bool == 0; // 0x56d Not
	if(var_428_bool == 0) goto Label_1393; // 0x56e JumpB
	var_406_float = 0.0; // 0x56f MovF
	return 12; // 0x570 Return
	
Label_1393:
	var_429_bool = 0; var_430_object = Obj(); var_431_string = ""; // 0x571 PushV
	var_430_object = var_407_object; // 0x572 Mov
	var_431_string = "armor"; // 0x573 MovS
	func_1371(var_429_bool, var_430_object, var_431_string); // 0x574 NEW_2
	var_432_bool = var_429_bool == 0; // 0x576 Not
	if(var_432_bool == 0) goto Label_1402; // 0x577 JumpB
	var_419_int = 0; // 0x578 MovI
	goto Label_1405; // 0x579 Jump
	
Label_1405:
	var_433_string = "armor_"; // 0x57d PushS
	var_434_string = ""; var_435_int = 0; // 0x57e PushV
	var_435_int = var_409_int; // 0x57f Mov
	func_1345(var_434_string, var_435_int); // 0x580 NEW_2
	var_420_string = var_433_string + var_434_string; // 0x582 Add2
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x583 PushV
	var_441_object = var_407_object; // 0x584 Mov
	var_442_string = var_420_string; // 0x585 Mov
	func_1371(var_440_bool, var_441_object, var_442_string); // 0x586 NEW_2
	var_443_bool = var_440_bool == 0; // 0x588 Not
	if(var_443_bool == 0) goto Label_1420; // 0x589 JumpB
	var_421_int = 0; // 0x58a MovI
	goto Label_1422; // 0x58b Jump
	
Label_1422:
	var_444_float = 0; var_445_float = 0; var_446_float = 0; // 0x58e PushV
	var_447_int = var_419_int + var_421_int; // 0x58f Add
	var_448_float = 100.0; // 0x590 PushF
	var_445_float = var_447_int / var_447_int; // 0x591 Div2
	var_446_float = 1; // 0x592 MovI
	func_1851(var_444_float, var_445_float, var_446_float); // 0x593 NEW_2
	var_422_float = var_444_float; // 0x594 Mov
	var_450_string = "health"; // 0x596 PushS
	GetProperty(var_450_string, var_423_float); // 0x597 ObjFunc
	var_451_int = 1; // 0x599 PushI
	var_452_int = var_451_int - var_422_float; // 0x59a Sub
	var_424_float = var_408_float * var_452_int; // 0x59b Mult2
	var_453_string = "health"; // 0x59c PushS
	var_454_float = 0; var_455_float = 0; var_456_float = 0; var_457_float = 0; // 0x59d PushV
	var_455_float = var_423_float - var_424_float; // 0x59e Sub2
	var_456_float = 0; // 0x59f MovI
	var_457_float = 1; // 0x5a0 MovI
	func_1858(var_454_float, var_455_float, var_456_float, var_457_float); // 0x5a1 NEW_2
	SetProperty(var_453_string, var_454_float); // 0x5a3 ObjFunc
	var_460_bool = 0; var_461_object = Obj(); // 0x5a5 PushV
	var_461_object = var_407_object; // 0x5a6 Mov
	func_1366(var_460_bool, var_461_object); // 0x5a7 NEW_2
	if(var_460_bool == 0) goto Label_1454; // 0x5a9 JumpB
	var_462_float = 0; // 0x5aa PushV
	var_462_float = -var_424_float; // 0x5ab Neg2
	func_1869(var_462_float); // 0x5ac NEW_2
	
Label_1454:
	var_406_float = var_424_float; // 0x5ae Mov
	return 12; // 0x5af Return
	
Label_1420:
	GetProperty(var_420_string, var_421_int); // 0x58c ObjFunc
	
Label_1402:
	var_470_string = "armor"; // 0x57a PushS
	GetProperty(var_470_string, var_419_int); // 0x57b ObjFunc
}


func_1898(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x76a PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x76b Func
	var_21_bool = var_20_bool; // 0x76d Push
	if(var_21_bool == 0) goto Label_1906; // 0x76e JumpB
	var_22_string = "attack"; // 0x76f PushS
	PlayGlobalMusic(var_22_string); // 0x770 Func
	
Label_1906:
	return 2; // 0x772 Return
}


func_750(var_0_object, var_294_bool, var_295_float)
{
	var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; // 0x2ee PushV
	
Label_751:
	IsAnimationPlaying(var_301_bool); // 0x2ef Func
	var_306_bool = var_301_bool == 0; // 0x2f1 Not
	if(var_306_bool == 0) goto Label_756; // 0x2f2 JumpB
	goto Label_788; // 0x2f3 Jump
	
Label_788:
	func_925(var_305_float); // 0x315 NEW_2
	var_294_bool = 0; // 0x317 MovB
	return 10; // 0x318 Return
	
Label_756:
	var_307_bool = 0; // 0x2f4 PushV
	func_821(var_307_bool); // 0x2f5 NEW_2
	if(var_307_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_294_bool = 1; // 0x2f8 MovB
	return 10; // 0x2f9 Return
	
Label_762:
	var_350_bool = 0; var_351_object = Obj(); // 0x2fa PushV
	var_351_object = var_0_object; // 0x2fb MovT
	func_1497(var_350_bool, var_351_object); // 0x2fc NEW_2
	var_352_bool = var_350_bool == 0; // 0x2fe Not
	if(var_352_bool == 0) goto Label_770; // 0x2ff JumpB
	var_294_bool = 0; // 0x300 MovB
	return 10; // 0x301 Return
	
Label_770:
	GetPFPosition(var_302_cvector); // 0x302 TObjFunc
	GetPFPosition(var_303_cvector); // 0x304 Func
	var_304_cvector = var_302_cvector - var_303_cvector; // 0x306 Sub2
	var_305_float = var_304_cvector | var_304_cvector; // 0x307 Or2
	var_353_float = var_295_float * var_295_float; // 0x308 Mult
	var_354_bool = var_305_float < var_353_float; // 0x309 LT
	if(var_354_bool == 0) goto Label_785; // 0x30a JumpB
	var_355_bool = 0; var_356_float = 0; // 0x30b PushV
	var_356_float = var_295_float; // 0x30c Mov
	func_586(var_305_float, var_355_bool, var_356_float); // 0x30d NEW_2
	var_294_bool = 1; // 0x30f MovB
	return 10; // 0x310 Return
	
Label_785:
	sync(); // 0x311 Func
	goto Label_751; // 0x313 Jump
}


func_1647()
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); // 0x66f PushV
	GetPosition(var_244_cvector); // 0x670 ObjFunc
	GetPosition(var_245_cvector); // 0x672 Func
	var_246_cvector = var_244_cvector - var_245_cvector; // 0x674 Sub2
	var_247_float = GetByIndex(var_246_cvector, 0); // 0x675 PushE
	var_248_float = GetByIndex(var_246_cvector, 2); // 0x676 PushE
	RotateAsync(var_247_float, var_248_float); // 0x677 Func
	return 6; // 0x679 Return
}


func_1776(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); // 0x6f0 PushV
	GetEyesHeight(var_22_float); // 0x6f1 ObjFunc
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x6f3 MovV
	var_24_float = GetByIndex(var_23_cvector, 1); // 0x6f4 PushE
	var_24_float = var_22_float; // 0x6f5 Mov
	SetByIndex(var_23_cvector, 1) = var_24_float; // 0x6f6 PopE
	var_25_string = "head"; // 0x6f7 PushS
	LookAsync(var_19_object, var_25_string, var_23_cvector); // 0x6f8 Func
	return 4; // 0x6fa Return
}


func_1521(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x5f1 PushV
	var_47_bool = var_32_object == 0; // 0x5f2 NullEq
	if(var_47_bool == 0) goto Label_1525; // 0x5f3 JumpB
	return 14; // 0x5f4 Return
	
Label_1525:
	IsDead(var_40_bool); // 0x5f5 Func
	var_48_bool = var_40_bool; // 0x5f7 Push
	if(var_48_bool == 0) goto Label_1530; // 0x5f8 JumpB
	return 14; // 0x5f9 Return
	
Label_1530:
	GetSecondaryAnimationType(var_41_int); // 0x5fa Func
	var_49_int = 0; // 0x5fc PushI
	var_50_bool = var_41_int < var_49_int; // 0x5fd LT
	if(var_50_bool == 0) goto Label_1536; // 0x5fe JumpB
	return 14; // 0x5ff Return
	
Label_1536:
	GetPosition(var_42_cvector); // 0x600 ObjFunc
	GetPosition(var_43_cvector); // 0x602 Func
	GetDirection(var_44_cvector); // 0x604 Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x606 Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x607 PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x608 PushE
	var_53_float = var_51_float * var_52_float; // 0x609 Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x60a PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x60b PushE
	var_56_float = var_54_float * var_55_float; // 0x60c Mult
	var_57_int = var_53_float + var_56_float; // 0x60d Add
	var_58_int = 0; // 0x60e PushI
	var_59_bool = var_57_int >= var_58_int; // 0x60f GE
	if(var_59_bool == 0) goto Label_1555; // 0x610 JumpB
	var_46_string = "fhit"; // 0x611 MovS
	goto Label_1556; // 0x612 Jump
	
Label_1556:
	var_60_string = "hit_react"; // 0x614 PushS
	var_61_string = "1"; // 0x615 PushS
	var_62_int = var_46_string + var_61_string; // 0x616 Add
	var_63_string = "2"; // 0x617 PushS
	var_64_int = var_46_string + var_63_string; // 0x618 Add
	var_65_int = -10; // 0x619 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x61a Func
	return 14; // 0x61c Return
	
Label_1555:
	var_46_string = "bhit"; // 0x613 MovS
}


func_882(var_0_object, var_257_bool)
{
	var_258_bool = 0; var_259_bool = 0; // 0x372 PushV
	var_260_string = "IsAttacking"; // 0x373 PushS
	var_261_int = 1; // 0x374 PushI
	var_262_bool = IsFuncExist(var_0_object, var_260_string, var_261_int); // 0x375 FuncExist
	if(var_262_bool == 0) goto Label_891; // 0x376 JumpB
	IsAttacking(var_259_bool); // 0x377 TObjFunc
	var_257_bool = var_259_bool; // 0x379 Mov
	return 2; // 0x37a Return
	
Label_891:
	var_257_bool = 0; // 0x37b MovB
	return 2; // 0x37c Return
}


func_1907()
{
	var_367_object = Obj(); var_368_object = Obj(); // 0x773 PushV
	GetScene(var_368_object); // 0x774 Func
	var_369_string = "battle"; // 0x776 PushS
	var_370_object = Obj(); // 0x777 PushV
	func_1835(var_370_object); // 0x778 NEW_2
	BroadcastMessage(var_369_string, var_370_object, var_368_object); // 0x77a Func
	return 2; // 0x77c Return
}


func_1014(var_2_object)
{
	var_16_int = 1; // 0x3f6 PushI
	KillTimer(var_16_int); // 0x3f7 Func
	var_17_object = var_2_object; // 0x3f9 PushT
	if(var_17_object == 0) goto Label_1023; // 0x3fa JumpB
	var_2_object = 0; // 0x3fb TMovB
	var_18_string = "head"; // 0x3fc PushS
	UnlookAsync(var_18_string); // 0x3fd Func
	
Label_1023:
	func_1180(var_15_object); // 0x400 NEW_2
	return 0; // 0x402 Return
}


func_1658(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x67a PushV
	GetPosition(var_40_cvector); // 0x67b ObjFunc
	GetEyesHeight(var_39_float); // 0x67d ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x67f PushE
	var_48_float = var_48_float + var_39_float; // 0x680 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x681 PopE
	GetPosition(var_41_cvector); // 0x682 Func
	GetEyesHeight(var_39_float); // 0x684 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x686 PushE
	var_49_float = var_49_float + var_39_float; // 0x687 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x688 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x689 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x68a PushE
	var_50_float = 0; // 0x68b MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x68c PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x68d Or
	var_52_float = sqrt(var_51_int); // 0x68e Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x68f Div2
	var_43_cvector = -var_42_cvector; // 0x690 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x691 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x692 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x693 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x694 Xor2
	func_1841(var_54_cvector, var_55_cvector); // 0x695 NEW_2
	var_62_int = 25; // 0x697 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x698 Mult
	var_64_int = var_53_float + var_63_float; // 0x699 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x69a PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x69b Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x69c Add2
	IsOverrideActive(var_46_bool); // 0x69d Func
	var_66_bool = var_46_bool; // 0x69f Push
	if(var_66_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_27_bool = 0; // 0x6a1 MovB
	return 18; // 0x6a2 Return
	
Label_1699:
	StopWorld(); // 0x6a3 Func
	var_67_bool = 1; // 0x6a5 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x6a6 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x6a8 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x6a9 PushE
	Rotate(var_68_float, var_69_float); // 0x6aa Func
	var_70_bool = 0; // 0x6ac PushV
	func_1943(var_70_bool); // 0x6ad NEW_2
	if(var_70_bool == 0) goto Label_1713; // 0x6af JumpB
	goto Label_1721; // 0x6b0 Jump
	
Label_1721:
	CameraWaitForPlayFinish(); // 0x6b9 Func
	ResumeWorld(); // 0x6bb Func
	var_27_bool = 1; // 0x6bd MovB
	return 18; // 0x6be Return
	
Label_1713:
	var_71_string = "head"; // 0x6b1 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x6b2 Func
	var_72_bool = var_47_bool; // 0x6b4 Push
	if(var_72_bool == 0) goto Label_1721; // 0x6b5 JumpB
	var_73_string = "head"; // 0x6b6 PushS
	LookAsyncCamera(var_73_string); // 0x6b7 Func
}


func_251()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xfb PushV
	var_27_bool = 0; var_28_string = ""; var_29_string = ""; // 0xfc PushV
	var_28_string = "quest_d1_03"; // 0xfd MovS
	var_29_string = "butcher_battle"; // 0xfe MovS
	func_1886(var_27_bool, var_28_string, var_29_string); // 0xff NEW_2
	var_33_string = "player"; // 0x101 PushS
	FindActor(var_26_object, var_33_string); // 0x102 Func
	var_34_object = Obj(); var_35_bool = 0; var_36_float = 0; // 0x104 PushV
	var_34_object = var_26_object; // 0x105 Mov
	var_35_bool = 1; // 0x106 MovB
	var_36_float = 180.0; // 0x107 MovF
	func_283(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_34_object, var_35_bool, var_36_float); // 0x108 NEW_2
	func_1945(); // 0x10b NEW_2
	return 2; // 0x10d Return
}


func_893(var_2_object, var_5_bool)
{
	var_374_float = 0; var_375_int = 0; var_376_float = 0; var_377_int = 0; // 0x37d PushV
	var_378_bool = var_2_object == 0; // 0x37e Not
	if(var_378_bool == 0) goto Label_897; // 0x37f JumpB
	return 4; // 0x380 Return
	
Label_897:
	var_379_bool = var_5_bool; // 0x381 PushT
	if(var_379_bool == 0) goto Label_905; // 0x382 JumpB
	var_380_int = -1; // 0x383 PushI
	var_5_bool = var_5_bool + var_380_int; // 0x384 Add2
	var_381_int = 0; // 0x385 PushI
	var_382_bool = var_5_bool > var_381_int; // 0x386 GT
	if(var_382_bool == 0) goto Label_905; // 0x387 JumpB
	return 4; // 0x388 Return
	
Label_905:
	rand(var_376_float); // 0x389 Func
	var_383_float = 0; // 0x38b PushV
	func_943(var_383_float); // 0x38c NEW_2
	var_384_bool = var_376_float < var_383_float; // 0x38e LT
	if(var_384_bool == 0) goto Label_924; // 0x38f JumpB
	irand(var_377_int, var_376_float); // 0x390 Func
	var_385_int = 1; // 0x392 PushI
	var_377_int = var_377_int + var_385_int; // 0x393 Add2
	var_386_string = "attack"; // 0x394 PushS
	var_387_int = var_386_string + var_377_int; // 0x395 Add
	Speak(var_387_int); // 0x396 Func
	var_388_int = 0; // 0x398 PushV
	func_941(var_388_int); // 0x399 NEW_2
	var_5_bool = var_388_int; // 0x39a TMov
	
Label_924:
	return 4; // 0x39c Return
}


func_1918(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x77e PushV
	var_82_string = "branch"; // 0x77f PushS
	GetVariable(var_82_string, var_81_int); // 0x780 Func
	var_83_int = 0; // 0x782 PushI
	var_84_bool = var_81_int == var_83_int; // 0x783 Eq
	if(var_84_bool == 0) goto Label_1928; // 0x784 JumpB
	var_79_int = 1; // 0x785 MovI
	return 2; // 0x786 Return
	
Label_1928:
	var_85_int = 1; // 0x788 PushI
	var_86_bool = var_81_int == var_85_int; // 0x789 Eq
	if(var_86_bool == 0) goto Label_1933; // 0x78a JumpB
	var_79_int = 2; // 0x78b MovI
	return 2; // 0x78c Return
	
Label_1933:
	var_79_int = 3; // 0x78d MovI
	return 2; // 0x78e Return
}


