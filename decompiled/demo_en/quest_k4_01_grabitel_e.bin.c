task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_231; // 0xa1 JumpB
	func_848(); // 0xa3 NEW_2
	var_14_int = 27024; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_963(); // 0xab NEW_2
	
Label_173:
	var_20_int = 27023; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 525700; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_969(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 525701; // 0xbe PushI
	var_49_int = 27026; // 0xbf PushI
	var_50_int = 27024; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 525702; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 27025; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 27026; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_219; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 525703; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 525704; // 0xd5 PushI
	var_59_int = -1; // 0xd6 PushI
	var_60_int = 27027; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_3_string = 1; // 0xdb TMovB
	var_61_bool = 0; // 0xdc PushV
	func_1091(var_61_bool); // 0xdd NEW_2
	if(var_61_bool == 0) goto Label_227; // 0xdf JumpB
	lshStopAnimation(); // 0xe0 Func
	goto Label_229; // 0xe2 Jump
	
Label_229:
	return 0; // 0xe5 Return
	
Label_227:
	StopAnimation(); // 0xe3 Func
	
Label_231:
	return 0; // 0xe7 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_318(var_9_object, var_10_object); // 0xf4 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0xf6 PushV
	var_15_object = var_10_object; // 0xf7 Mov
	TaskCall(0); // 0xf8 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0xf9 NEW_2
	TaskReturn(); // 0xfa TaskReturn
	return 0; // 0xfc Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x128 PushI
	var_12_bool = var_10_int == var_11_int; // 0x129 Eq
	if(var_12_bool == 0) goto Label_317; // 0x12a JumpB
	var_13_bool = 0; // 0x12b PushV
	func_280(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x12c NEW_2
	if(var_13_bool == 0) goto Label_311; // 0x12e JumpB
	var_26_bool = var_2_object == 0; // 0x12f Not
	if(var_26_bool == 0) goto Label_310; // 0x130 JumpB
	var_27_object = Obj(); // 0x131 PushV
	var_27_object = var_4_bool; // 0x132 MovT
	func_837(var_27_object); // 0x133 NEW_2
	var_2_object = 1; // 0x135 TMovB
	
Label_310:
	goto Label_317; // 0x136 Jump
	
Label_317:
	return 0; // 0x13d Return
	
Label_311:
	var_34_object = var_2_object; // 0x137 PushT
	if(var_34_object == 0) goto Label_317; // 0x138 JumpB
	var_35_string = "head"; // 0x139 PushS
	UnlookAsync(var_35_string); // 0x13a Func
	var_2_object = 0; // 0x13c TMovB
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x1ba PushV
	IsOverrideActive(var_12_bool); // 0x1bb Func
	var_13_bool = var_12_bool == 0; // 0x1bd Not
	if(var_13_bool == 0) goto Label_451; // 0x1be JumpB
	var_14_object = Obj(); // 0x1bf PushV
	var_14_object = var_10_object; // 0x1c0 Mov
	func_1004(var_14_object); // 0x1c1 NEW_2
	
Label_451:
	return 2; // 0x1c3 Return
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x23a Return
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	return 0; // 0x23c Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	return 0; // 0x23e Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x44e PushV
	var_14_object = var_10_object; // 0x44f Mov
	var_15_int = var_11_int; // 0x450 Mov
	var_16_float = var_12_float; // 0x451 Mov
	func_634(var_14_object, var_15_int, var_16_float); // 0x452 NEW_2
	return 0; // 0x454 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x456 PushV
	var_16_object = var_10_object; // 0x457 Mov
	var_17_int = var_11_int; // 0x458 Mov
	var_18_float = var_12_float; // 0x459 Mov
	var_19_cvector = var_14_cvector; // 0x45a Mov
	var_20_cvector = var_15_cvector; // 0x45b Mov
	func_702(var_18_float, var_19_cvector, var_20_cvector); // 0x45c NEW_2
	return 0; // 0x45e Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x45f PushV
	var_14_string = "health"; // 0x460 PushS
	var_15_bool = var_11_string == var_14_string; // 0x461 Eq
	if(var_15_bool == 0) goto Label_1131; // 0x462 JumpB
	var_16_string = "health"; // 0x463 PushS
	GetProperty(var_16_string, var_13_float); // 0x464 Func
	var_17_int = 0; // 0x466 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x467 LE
	if(var_18_bool == 0) goto Label_1131; // 0x468 JumpB
	SignalDeath(var_10_object); // 0x469 Func
	
Label_1131:
	return 2; // 0x46b Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x46d PushV
	var_12_string = "quest_k4_01"; // 0x46e MovS
	var_13_string = "grabitel_entrance_dead"; // 0x46f MovS
	func_927(var_11_bool, var_12_string, var_13_string); // 0x470 NEW_2
	var_17_object = Obj(); // 0x472 PushV
	var_17_object = var_10_object; // 0x473 Mov
	func_1093(var_17_object); // 0x474 NEW_2
	return 0; // 0x476 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_232:
	var_10_int = 3; // 0xe8 PushI
	Sleep(var_10_int); // 0xe9 Func
	var_11_float = 0; var_12_float = 0; // 0xeb PushV
	var_11_float = 300; // 0xec MovI
	var_12_float = 100; // 0xed MovI
	func_253(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0xee NEW_2
	goto Label_232; // 0xf0 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_721(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_1085(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_1083(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_1087(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_1089(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_981(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_142_bool = var_24_bool == 0; // 0x38 Not
	if(var_142_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_143_object = Obj(); // 0x3f PushV
	var_143_object = var_15_object; // 0x40 Mov
	func_789(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_1091(var_93_bool); // 0x8b NEW_2
	var_94_bool = var_93_bool == 0; // 0x8d Not
	if(var_94_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_95_bool = var_92_string == var_2_object; // 0x90 Eq
	if(var_95_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_96_string = ""; var_97_bool = 0; // 0x93 PushV
	var_96_string = var_92_string; // 0x94 Mov
	var_98_string = ""; // 0x95 PushS
	var_99_bool = var_92_string == var_98_string; // 0x96 Eq
	if(var_99_bool == 0) goto Label_154; // 0x97 JumpB
	var_97_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_822(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_907(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x38b PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x38c Or
	var_51_float = sqrt(var_52_int); // 0x38d Sqrt2
	var_53_float = 0.0; // 0x38e PushF
	var_54_bool = var_51_float < var_53_float; // 0x38f LT
	if(var_54_bool == 0) goto Label_915; // 0x390 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x391 MovV
	return 2; // 0x392 Return
	
Label_915:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x393 Div2
	return 2; // 0x394 Return
}


func_789()
{
	var_144_bool = 0; var_145_bool = 0; // 0x315 PushV
	CameraSwitchToNormal(); // 0x316 Func
	var_146_bool = 0; // 0x318 PushV
	func_1091(var_146_bool); // 0x319 NEW_2
	if(var_146_bool == 0) goto Label_797; // 0x31b JumpB
	goto Label_805; // 0x31c Jump
	
Label_805:
	return 2; // 0x325 Return
	
Label_797:
	var_147_string = "head"; // 0x31d PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x31e Func
	var_148_bool = var_145_bool; // 0x320 Push
	if(var_148_bool == 0) goto Label_805; // 0x321 JumpB
	var_149_string = "head"; // 0x322 PushS
	UnlookAsync(var_149_string); // 0x323 Func
}


func_917(var_48_bool, var_49_int, var_50_int)
{
	var_51_int = 0; var_52_int = 0; // 0x395 PushV
	irand(var_52_int, var_50_int); // 0x396 Func
	var_48_bool = var_52_int < var_49_int; // 0x398 LT2
	return 2; // 0x399 Return
}


func_280(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x118 PushV
	var_16_bool = var_4_bool == 0; // 0x119 NullEq
	if(var_16_bool == 0) goto Label_285; // 0x11a JumpB
	var_13_bool = 0; // 0x11b MovB
	return 2; // 0x11c Return
	
Label_285:
	var_17_float = 0; var_18_object = Obj(); // 0x11d PushV
	var_18_object = var_4_bool; // 0x11e MovT
	func_582(var_18_object); // 0x11f NEW_2
	var_15_float = sqrt(var_17_float); // 0x121 Sqrt2
	var_25_object = var_2_object; // 0x122 PushT
	if(var_25_object == 0) goto Label_293; // 0x123 JumpB
	var_15_float = var_15_float - var_1_object; // 0x124 Sub2
	
Label_293:
	var_13_bool = var_15_float < var_0_object; // 0x125 LT2
	return 2; // 0x126 Return
}


func_1048()
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0; // 0x418 PushV
	var_23_int = 0; // 0x419 PushI
	ClearSubContainer(var_23_int); // 0x41a Func
	var_24_int = 0; var_25_int = 0; // 0x41c PushV
	var_24_int = 300; // 0x41d MovI
	var_25_int = 750; // 0x41e MovI
	func_1017(var_24_int, var_25_int); // 0x41f NEW_2
	var_43_string = ""; var_44_int = 0; var_45_int = 0; // 0x421 PushV
	var_43_string = "Knife"; // 0x422 MovS
	var_44_int = 1; // 0x423 MovI
	var_45_int = 8; // 0x424 MovI
	func_855(var_43_string, var_44_int, var_45_int); // 0x425 NEW_2
	var_54_string = ""; var_55_int = 0; var_56_int = 0; // 0x427 PushV
	var_54_string = "lockpick"; // 0x428 MovS
	var_55_int = 1; // 0x429 MovI
	var_56_int = 6; // 0x42a MovI
	func_855(var_54_string, var_55_int, var_56_int); // 0x42b NEW_2
	var_57_int = 0; var_58_string = ""; // 0x42d PushV
	var_58_string = "grabitel_mark"; // 0x42e MovS
	func_1078(var_57_int, var_58_string); // 0x42f NEW_2
	var_59_int = 0; // 0x431 PushI
	var_60_int = 1; // 0x432 PushI
	AddItem(var_22_bool, var_57_int, var_59_int, var_60_int); // 0x433 Func
	return 4; // 0x435 Return
}


func_922(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x39a PushV
	GetVariable(var_113_string, var_115_int); // 0x39b Func
	var_112_int = var_115_int; // 0x39d Mov
	return 2; // 0x39e Return
}


func_411(var_61_bool)
{
	var_61_bool = 1; // 0x19b MovB
	return 0; // 0x19c Return
}


func_413()
{
	StopAnimation(); // 0x19d Func
	StopGroup0(); // 0x19f Func
	return 0; // 0x1a1 Return
}


func_543(var_84_string)
{
	RemoveRTEnvelope(); // 0x220 Func
	SetDeathState(); // 0x222 Func
	Stop(); // 0x224 Func
	StopAsync(); // 0x226 Func
	StopSecondaryAnimation(); // 0x228 Func
	var_85_string = ""; // 0x22a PushV
	var_85_string = var_84_string; // 0x22b Mov
	func_866(var_85_string); // 0x22c NEW_2
	var_114_string = "all"; // 0x22e PushS
	PlayAnimation(var_114_string, var_84_string); // 0x22f Func
	WaitForAnimEnd(); // 0x231 Func
	var_115_string = "all"; // 0x233 PushS
	LockAnimationEnd(var_115_string, var_84_string); // 0x234 Func
	RemoveEnvelope(); // 0x236 Func
	return 0; // 0x238 Return
}


func_927(var_11_bool, var_12_string, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x39f PushV
	FindActor(var_15_object, var_12_string); // 0x3a0 Func
	var_16_bool = var_15_object == 0; // 0x3a2 NullEq
	if(var_16_bool == 0) goto Label_934; // 0x3a3 JumpB
	var_11_bool = 0; // 0x3a4 MovB
	return 2; // 0x3a5 Return
	
Label_934:
	Trigger(var_15_object, var_13_string); // 0x3a6 Func
	var_11_bool = 1; // 0x3a8 MovB
	return 2; // 0x3a9 Return
}


func_418(var_18_object)
{
	func_1048(); // 0x1a4 NEW_2
	var_61_object = Obj(); // 0x1a6 PushV
	var_61_object = var_18_object; // 0x1a7 Mov
	func_427(var_61_object); // 0x1a8 NEW_2
	return 0; // 0x1aa Return
}


func_806(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x326 PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x327 Func
	var_133_bool = var_130_bool; // 0x329 Push
	if(var_133_bool == 0) goto Label_817; // 0x32a JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x32b Func
	var_134_bool = 0; // 0x32d PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x32e Func
	goto Label_821; // 0x330 Jump
	
Label_821:
	return 6; // 0x335 Return
	
Label_817:
	var_135_string = "Can't find lsh animation : "; // 0x331 PushS
	var_136_int = var_135_string + var_126_string; // 0x332 Add
	Trace(var_136_int); // 0x333 Func
}


func_939(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x3ab PushV
	var_45_string = "idle"; // 0x3ac MovS
	var_46_int = var_43_int; // 0x3ad Push
	if(var_46_int == 0) goto Label_944; // 0x3ae JumpB
	var_45_string = var_45_string + var_43_int; // 0x3af Add2
	
Label_944:
	var_42_string = var_45_string; // 0x3b0 Mov
	return 2; // 0x3b1 Return
}


func_427(var_61_object)
{
	EventDisable(0); // 0x1ac EventDisable
	var_62_object = Obj(); // 0x1ad PushV
	var_62_object = var_61_object; // 0x1ae Mov
	func_452(var_62_object); // 0x1af NEW_2
	var_142_int = 50; // 0x1b1 PushI
	var_143_int = 40; // 0x1b2 PushI
	SetRTEnvelope(var_142_int, var_143_int); // 0x1b3 Func
	EventEnable(0); // 0x1b5 EventEnable
	
Label_438:
	Hold(); // 0x1b6 Func
	goto Label_438; // 0x1b8 Jump
}


func_946(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x3b2 PushV
	var_39_int = 0; // 0x3b3 MovI
	
Label_948:
	var_41_string = "all"; // 0x3b4 PushS
	var_42_string = ""; var_43_int = 0; // 0x3b5 PushV
	var_43_int = var_39_int; // 0x3b6 Mov
	func_939(var_42_string, var_43_int); // 0x3b7 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x3b9 Func
	var_47_bool = var_40_bool == 0; // 0x3bb Not
	if(var_47_bool == 0) goto Label_958; // 0x3bc JumpB
	goto Label_961; // 0x3bd Jump
	
Label_961:
	var_36_int = var_39_int; // 0x3c1 Mov
	return 4; // 0x3c2 Return
	
Label_958:
	var_48_int = 1; // 0x3be PushI
	var_39_int = var_39_int + var_48_int; // 0x3bf Add2
	goto Label_948; // 0x3c0 Jump
}


func_822(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x336 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x337 Func
	var_106_bool = var_103_bool; // 0x339 Push
	if(var_106_bool == 0) goto Label_832; // 0x33a JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x33b Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x33d Func
	goto Label_836; // 0x33f Jump
	
Label_836:
	return 6; // 0x344 Return
	
Label_832:
	var_107_string = "Can't find lsh animation : "; // 0x340 PushS
	var_108_int = var_107_string + var_96_string; // 0x341 Add
	Trace(var_108_int); // 0x342 Func
}


func_1078(var_36_int, var_37_string)
{
	var_38_int = 0; var_39_int = 0; // 0x436 PushV
	GetInvItemByName(var_39_int, var_37_string); // 0x437 Func
	var_36_int = var_39_int; // 0x439 Mov
	return 2; // 0x43a Return
}


func_1083(var_73_int)
{
	var_73_int = 518411; // 0x43b MovI
	return 0; // 0x43c Return
}


func_1085(var_72_int)
{
	var_72_int = 518410; // 0x43d MovI
	return 0; // 0x43e Return
}


func_318(var_2_object, var_3_string)
{
	func_413(); // 0x13f NEW_2
	var_11_int = 10; // 0x141 PushI
	KillTimer(var_11_int); // 0x142 Func
	var_12_object = var_2_object; // 0x144 PushT
	if(var_12_object == 0) goto Label_330; // 0x145 JumpB
	var_13_string = "head"; // 0x146 PushS
	UnlookAsync(var_13_string); // 0x147 Func
	var_2_object = 0; // 0x149 TMovB
	
Label_330:
	var_3_string = 1; // 0x14a TMovB
	return 0; // 0x14b Return
}


func_1087(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png"; // 0x43f MovS
	return 0; // 0x440 Return
}


func_575(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x23f PushV
	GetPosition(var_48_cvector); // 0x240 Func
	GetPosition(var_49_cvector); // 0x242 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x244 Sub2
	return 4; // 0x245 Return
}


func_1089(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png"; // 0x441 MovS
	return 0; // 0x442 Return
}


func_702(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x2be PushV
	GetScene(var_23_object); // 0x2bf Func
	var_25_string = "scripted"; // 0x2c1 PushS
	var_26_string = "blood_dir.xml"; // 0x2c2 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x2c3 Func
	var_27_object = Obj(); // 0x2c5 PushV
	var_27_object = var_16_object; // 0x2c6 Mov
	func_590(var_27_object); // 0x2c7 NEW_2
	return 4; // 0x2c9 Return
}


func_1091(var_67_bool)
{
	var_67_bool = 0; // 0x443 MovB
	return 0; // 0x444 Return
}


func_963()
{
	var_18_string = "ook4GrabitelEntrance1"; // 0x3c4 PushS
	var_19_int = 1; // 0x3c5 PushI
	SetVariable(var_18_string, var_19_int); // 0x3c6 Func
	return 0; // 0x3c8 Return
}


func_837(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x345 PushV
	GetEyesHeight(var_30_float); // 0x346 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x348 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x349 PushE
	var_32_float = var_30_float; // 0x34a Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x34b PopE
	var_33_string = "head"; // 0x34c PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x34d Func
	return 4; // 0x34f Return
}


func_582(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x246 PushV
	GetPosition(var_22_cvector); // 0x247 Func
	GetPosition(var_23_cvector); // 0x249 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x24b Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x24c Or2
	return 6; // 0x24d Return
}


func_452(var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_string = ""; var_68_object = Obj(); var_69_bool = 0; var_70_bool = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_string = ""; var_78_object = Obj(); var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x1c4 PushV
	var_83_bool = var_62_object == 0; // 0x1c5 NullEq
	if(var_83_bool == 0) goto Label_460; // 0x1c6 JumpB
	var_84_string = ""; // 0x1c7 PushV
	var_84_string = "fdie"; // 0x1c8 MovS
	func_543(var_84_string); // 0x1c9 NEW_2
	goto Label_542; // 0x1cb Jump
	
Label_542:
	return 20; // 0x21e Return
	
Label_460:
	GetPosition(var_73_cvector); // 0x1cc ObjFunc
	GetPosition(var_74_cvector); // 0x1ce Func
	GetDirection(var_75_cvector); // 0x1d0 Func
	var_76_cvector = var_74_cvector - var_73_cvector; // 0x1d2 Sub2
	var_116_float = GetByIndex(var_76_cvector, 0); // 0x1d3 PushE
	var_117_float = GetByIndex(var_75_cvector, 0); // 0x1d4 PushE
	var_118_float = var_116_float * var_117_float; // 0x1d5 Mult
	var_119_float = GetByIndex(var_76_cvector, 2); // 0x1d6 PushE
	var_120_float = GetByIndex(var_75_cvector, 2); // 0x1d7 PushE
	var_121_float = var_119_float * var_120_float; // 0x1d8 Mult
	var_122_int = var_118_float + var_121_float; // 0x1d9 Add
	var_123_int = 0; // 0x1da PushI
	var_124_bool = var_122_int >= var_123_int; // 0x1db GE
	if(var_124_bool == 0) goto Label_479; // 0x1dc JumpB
	var_77_string = "fdie"; // 0x1dd MovS
	goto Label_480; // 0x1de Jump
	
Label_480:
	RemoveRTEnvelope(); // 0x1e0 Func
	SetDeathState(); // 0x1e2 Func
	Stop(); // 0x1e4 Func
	StopAsync(); // 0x1e6 Func
	var_78_object = var_62_object; // 0x1e8 Mov
	var_125_string = "GetScriptProperty"; // 0x1e9 PushS
	var_126_int = 2; // 0x1ea PushI
	var_127_bool = IsFuncExist(var_62_object, var_125_string, var_126_int); // 0x1eb FuncExist
	if(var_127_bool == 0) goto Label_504; // 0x1ec JumpB
	var_128_string = "Owner"; // 0x1ed PushS
	HasScriptProperty(var_79_bool, var_128_string); // 0x1ee ObjFunc
	var_129_bool = var_79_bool; // 0x1f0 Push
	if(var_129_bool == 0) goto Label_504; // 0x1f1 JumpB
	var_130_string = "Owner"; // 0x1f2 PushS
	GetScriptProperty(var_78_object, var_130_string); // 0x1f3 ObjFunc
	var_131_bool = var_78_object == 0; // 0x1f5 NullEq
	if(var_131_bool == 0) goto Label_504; // 0x1f6 JumpB
	var_78_object = var_62_object; // 0x1f7 Mov
	
Label_504:
	var_132_string = "@GetEyesHeight"; // 0x1f8 PushS
	var_133_int = 1; // 0x1f9 PushI
	var_134_bool = IsFuncExist(var_78_object, var_132_string, var_133_int); // 0x1fa FuncExist
	if(var_134_bool == 0) goto Label_519; // 0x1fb JumpB
	GetEyesHeight(var_81_float); // 0x1fc ObjFunc
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x1fe MovV
	var_135_float = GetByIndex(var_82_cvector, 1); // 0x1ff PushE
	var_135_float = var_81_float; // 0x200 Mov
	SetByIndex(var_82_cvector, 1) = var_135_float; // 0x201 PopE
	var_136_string = "head"; // 0x202 PushS
	LookAsync(var_62_object, var_136_string, var_82_cvector); // 0x203 Func
	var_80_bool = 1; // 0x205 MovB
	goto Label_520; // 0x206 Jump
	
Label_520:
	var_137_string = ""; // 0x208 PushV
	var_137_string = var_77_string; // 0x209 Mov
	func_866(var_137_string); // 0x20a NEW_2
	var_138_string = "all"; // 0x20c PushS
	PlayAnimation(var_138_string, var_77_string); // 0x20d Func
	WaitForAnimEnd(); // 0x20f Func
	var_139_bool = var_80_bool; // 0x211 Push
	if(var_139_bool == 0) goto Label_536; // 0x212 JumpB
	StopAsync(); // 0x213 Func
	var_140_string = "head"; // 0x215 PushS
	UnlookAsync(var_140_string); // 0x216 Func
	
Label_536:
	var_141_string = "all"; // 0x218 PushS
	LockAnimationEnd(var_141_string, var_77_string); // 0x219 Func
	RemoveEnvelope(); // 0x21b Func
	var_78_object = 0; // 0x21d SetNull
	
Label_519:
	var_80_bool = 0; // 0x207 MovB
	
Label_479:
	var_77_string = "bdie"; // 0x1df MovS
}


func_1093(var_17_object)
{
	var_18_object = Obj(); // 0x446 PushV
	var_18_object = var_17_object; // 0x447 Mov
	TaskCall(3); // 0x448 TaskCall
	func_418(var_18_object); // 0x449 NEW_2
	TaskReturn(); // 0x44a TaskReturn
	return 0; // 0x44c Return
}


func_969(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x3ca PushV
	var_113_string = "ook4GrabitelEntrance1"; // 0x3cb MovS
	func_922(var_112_int, var_113_string); // 0x3cc NEW_2
	var_116_int = 0; // 0x3ce PushI
	var_117_bool = var_112_int == var_116_int; // 0x3cf Eq
	if(var_117_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_110_bool = 1; // 0x3d1 MovB
	return 0; // 0x3d2 Return
	
Label_979:
	var_110_bool = 0; // 0x3d3 MovB
	return 0; // 0x3d4 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_107; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_137(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 525700; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_969(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 525701; // 0x5e PushI
	var_119_int = 27026; // 0x5f PushI
	var_120_int = 27024; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 525702; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 27025; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_1091(var_124_bool); // 0x6c NEW_2
	if(var_124_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_125_string = var_3_string; // 0x71 PushT
	if(var_125_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_126_string = ""; // 0x74 PushV
	var_126_string = var_2_object; // 0x75 MovT
	func_806(var_126_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_137_string = "all"; // 0x7a PushS
	var_138_string = "idle"; // 0x7b PushS
	PlayAnimation(var_137_string, var_138_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_139_string = var_3_string; // 0x80 PushT
	if(var_139_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_140_string = "all"; // 0x83 PushS
	var_141_string = "idle"; // 0x84 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_716(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2cc PushV
	IsLoaded(var_15_bool); // 0x2cd Func
	var_13_bool = var_15_bool; // 0x2cf Mov
	return 2; // 0x2d0 Return
}


func_332()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x14c PushV
	WaitForAnimEnd(); // 0x14d Func
	var_34_bool = 0; // 0x14f PushV
	func_716(var_34_bool); // 0x150 NEW_2
	var_35_bool = var_34_bool == 0; // 0x152 Not
	if(var_35_bool == 0) goto Label_341; // 0x153 JumpB
	return 14; // 0x154 Return
	
Label_341:
	var_36_int = 0; // 0x155 PushV
	func_946(var_36_int); // 0x156 NEW_2
	var_27_int = var_36_int; // 0x157 Mov
	var_28_int = 0; // 0x159 MovI
	
Label_346:
	var_49_bool = 0; // 0x15a PushV
	var_49_bool = 0; // 0x15b MovB
	var_50_int = 5; // 0x15c PushI
	var_51_bool = var_28_int < var_50_int; // 0x15d LT
	if(var_51_bool == 0) goto Label_356; // 0x15e JumpB
	var_52_bool = 0; // 0x15f PushV
	func_716(var_52_bool); // 0x160 NEW_2
	if(var_52_bool == 0) goto Label_356; // 0x162 JumpB
	var_49_bool = 1; // 0x163 MovB
	
Label_356:
	if(var_49_bool == 0) goto Label_408; // 0x164 JumpB
	var_53_int = 3; // 0x165 PushI
	irand(var_29_int, var_53_int); // 0x166 Func
	var_54_int = 0; // 0x168 PushI
	var_55_bool = var_29_int == var_54_int; // 0x169 Eq
	if(var_55_bool == 0) goto Label_380; // 0x16a JumpB
	var_56_int = var_27_int; // 0x16b Push
	if(var_56_int == 0) goto Label_379; // 0x16c JumpB
	irand(var_30_int, var_27_int); // 0x16d Func
	var_57_string = "all"; // 0x16f PushS
	var_58_string = ""; var_59_int = 0; // 0x170 PushV
	var_59_int = var_30_int; // 0x171 Mov
	func_939(var_58_string, var_59_int); // 0x172 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x174 Func
	WaitForAnimEnd(var_31_bool); // 0x176 Func
	var_60_bool = var_31_bool == 0; // 0x178 Not
	if(var_60_bool == 0) goto Label_379; // 0x179 JumpB
	goto Label_408; // 0x17a Jump
	
Label_408:
	ResetAAS(); // 0x198 Func
	return 14; // 0x19a Return
	
Label_379:
	goto Label_397; // 0x17b Jump
	
Label_397:
	var_61_bool = 0; // 0x18d PushV
	func_411(var_61_bool); // 0x18e NEW_2
	var_62_bool = var_61_bool == 0; // 0x190 Not
	if(var_62_bool == 0) goto Label_403; // 0x191 JumpB
	goto Label_408; // 0x192 Jump
	
Label_403:
	ResetAAS(); // 0x193 Func
	var_63_int = 1; // 0x195 PushI
	var_28_int = var_28_int + var_63_int; // 0x196 Add2
	goto Label_346; // 0x197 Jump
	
Label_380:
	var_64_int = 1; // 0x17c PushI
	var_65_bool = var_29_int == var_64_int; // 0x17d Eq
	if(var_65_bool == 0) goto Label_394; // 0x17e JumpB
	var_66_int = 4; // 0x17f PushI
	rand(var_32_float, var_66_int); // 0x180 Func
	var_67_int = 1; // 0x182 PushI
	var_68_int = var_32_float + var_67_int; // 0x183 Add
	Sleep(var_68_int, var_33_bool); // 0x184 Func
	var_69_bool = var_33_bool == 0; // 0x186 Not
	if(var_69_bool == 0) goto Label_393; // 0x187 JumpB
	goto Label_408; // 0x188 Jump
	
Label_393:
	goto Label_397; // 0x189 Jump
	
Label_394:
	var_70_int = var_28_int; // 0x18a Push
	if(var_70_int == 0) goto Label_397; // 0x18b JumpB
	goto Label_408; // 0x18c Jump
}


func_590(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x24e PushV
	var_42_bool = var_27_object == 0; // 0x24f NullEq
	if(var_42_bool == 0) goto Label_594; // 0x250 JumpB
	return 14; // 0x251 Return
	
Label_594:
	IsDead(var_35_bool); // 0x252 Func
	var_43_bool = var_35_bool; // 0x254 Push
	if(var_43_bool == 0) goto Label_599; // 0x255 JumpB
	return 14; // 0x256 Return
	
Label_599:
	GetSecondaryAnimationType(var_36_int); // 0x257 Func
	var_44_int = 0; // 0x259 PushI
	var_45_bool = var_36_int < var_44_int; // 0x25a LT
	if(var_45_bool == 0) goto Label_605; // 0x25b JumpB
	return 14; // 0x25c Return
	
Label_605:
	GetPosition(var_37_cvector); // 0x25d ObjFunc
	GetPosition(var_38_cvector); // 0x25f Func
	GetDirection(var_39_cvector); // 0x261 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x263 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x264 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x265 PushE
	var_48_float = var_46_float * var_47_float; // 0x266 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x267 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x268 PushE
	var_51_float = var_49_float * var_50_float; // 0x269 Mult
	var_52_int = var_48_float + var_51_float; // 0x26a Add
	var_53_int = 0; // 0x26b PushI
	var_54_bool = var_52_int >= var_53_int; // 0x26c GE
	if(var_54_bool == 0) goto Label_624; // 0x26d JumpB
	var_41_string = "fhit"; // 0x26e MovS
	goto Label_625; // 0x26f Jump
	
Label_625:
	var_55_string = "hit_react"; // 0x271 PushS
	var_56_string = "1"; // 0x272 PushS
	var_57_int = var_41_string + var_56_string; // 0x273 Add
	var_58_string = "2"; // 0x274 PushS
	var_59_int = var_41_string + var_58_string; // 0x275 Add
	var_60_int = -10; // 0x276 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x277 Func
	return 14; // 0x279 Return
	
Label_624:
	var_41_string = "bhit"; // 0x270 MovS
}


func_848()
{
	var_13_bool = 0; // 0x350 PushV
	func_1091(var_13_bool); // 0x351 NEW_2
	if(var_13_bool == 0) goto Label_854; // 0x353 JumpB
	lshStopSpeech(); // 0x354 Func
	
Label_854:
	return 0; // 0x356 Return
}


func_721(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x2d1 PushV
	GetPosition(var_38_cvector); // 0x2d2 ObjFunc
	GetEyesHeight(var_37_float); // 0x2d4 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x2d6 PushE
	var_46_float = var_46_float + var_37_float; // 0x2d7 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x2d8 PopE
	GetPosition(var_39_cvector); // 0x2d9 Func
	GetEyesHeight(var_37_float); // 0x2db Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x2dd PushE
	var_47_float = var_47_float + var_37_float; // 0x2de Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x2df PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x2e0 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2e1 PushE
	var_48_float = 0; // 0x2e2 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2e3 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x2e4 Or
	var_50_float = sqrt(var_49_int); // 0x2e5 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x2e6 Div2
	var_41_cvector = -var_40_cvector; // 0x2e7 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x2e8 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x2e9 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x2ea PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x2eb Xor2
	func_907(var_52_cvector, var_53_cvector); // 0x2ec NEW_2
	var_60_int = 25; // 0x2ee PushI
	var_61_float = var_52_cvector * var_60_int; // 0x2ef Mult
	var_62_int = var_51_float + var_61_float; // 0x2f0 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x2f1 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x2f2 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x2f3 Add2
	IsOverrideActive(var_44_bool); // 0x2f4 Func
	var_64_bool = var_44_bool; // 0x2f6 Push
	if(var_64_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_25_bool = 0; // 0x2f8 MovB
	return 18; // 0x2f9 Return
	
Label_762:
	StopWorld(); // 0x2fa Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x2fc Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x2fe PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x2ff PushE
	Rotate(var_65_float, var_66_float); // 0x300 Func
	var_67_bool = 0; // 0x302 PushV
	func_1091(var_67_bool); // 0x303 NEW_2
	if(var_67_bool == 0) goto Label_775; // 0x305 JumpB
	goto Label_783; // 0x306 Jump
	
Label_783:
	CameraWaitForPlayFinish(); // 0x30f Func
	ResumeWorld(); // 0x311 Func
	var_25_bool = 1; // 0x313 MovB
	return 18; // 0x314 Return
	
Label_775:
	var_68_string = "head"; // 0x307 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x308 Func
	var_69_bool = var_45_bool; // 0x30a Push
	if(var_69_bool == 0) goto Label_783; // 0x30b JumpB
	var_70_string = "head"; // 0x30c PushS
	LookAsyncCamera(var_70_string); // 0x30d Func
}


func_981(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x3d5 PushV
	var_79_string = "branch"; // 0x3d6 PushS
	GetVariable(var_79_string, var_78_int); // 0x3d7 Func
	var_80_int = 0; // 0x3d9 PushI
	var_81_bool = var_78_int == var_80_int; // 0x3da Eq
	if(var_81_bool == 0) goto Label_991; // 0x3db JumpB
	var_76_int = 1; // 0x3dc MovI
	return 2; // 0x3dd Return
	
Label_991:
	var_82_int = 1; // 0x3df PushI
	var_83_bool = var_78_int == var_82_int; // 0x3e0 Eq
	if(var_83_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_76_int = 2; // 0x3e2 MovI
	return 2; // 0x3e3 Return
	
Label_996:
	var_76_int = 3; // 0x3e4 MovI
	return 2; // 0x3e5 Return
}


func_855(var_43_string, var_44_int, var_45_int)
{
	var_46_bool = 0; var_47_bool = 0; // 0x357 PushV
	var_48_bool = 0; var_49_int = 0; var_50_int = 0; // 0x358 PushV
	var_49_int = var_44_int; // 0x359 Mov
	var_50_int = var_45_int; // 0x35a Mov
	func_917(var_48_bool, var_49_int, var_50_int); // 0x35b NEW_2
	if(var_48_bool == 0) goto Label_865; // 0x35d JumpB
	var_53_int = 0; // 0x35e PushI
	AddItem(var_47_bool, var_43_string, var_53_int); // 0x35f Func
	
Label_865:
	return 2; // 0x361 Return
}


func_866(var_85_string)
{
	var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_int = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x362 PushV
	IsExisting3DSound(var_94_bool, var_85_string); // 0x363 Func
	var_102_bool = var_94_bool == 0; // 0x365 Not
	if(var_102_bool == 0) goto Label_891; // 0x366 JumpB
	var_95_int = 0; // 0x367 MovI
	
Label_872:
	var_103_int = 1; // 0x368 PushI
	var_104_int = var_95_int + var_103_int; // 0x369 Add
	var_105_int = var_85_string + var_104_int; // 0x36a Add
	IsExisting3DSound(var_96_bool, var_105_int); // 0x36b Func
	var_106_bool = var_96_bool == 0; // 0x36d Not
	if(var_106_bool == 0) goto Label_880; // 0x36e JumpB
	goto Label_883; // 0x36f Jump
	
Label_883:
	var_107_bool = var_95_int == 0; // 0x373 Not
	if(var_107_bool == 0) goto Label_886; // 0x374 JumpB
	return 16; // 0x375 Return
	
Label_886:
	irand(var_97_int, var_95_int); // 0x376 Func
	var_108_int = 1; // 0x378 PushI
	var_109_int = var_97_int + var_108_int; // 0x379 Add
	var_85_string = var_85_string + var_109_int; // 0x37a Add2
	
Label_891:
	Is3DSoundLoaded(var_98_bool, var_85_string); // 0x37b Func
	var_110_bool = var_98_bool; // 0x37d Push
	if(var_110_bool == 0) goto Label_906; // 0x37e JumpB
	GetEyesHeight(var_99_float); // 0x37f Func
	GetDirection(var_100_cvector); // 0x381 Func
	var_111_int = 50; // 0x383 PushI
	var_101_cvector = var_100_cvector * var_111_int; // 0x384 Mult2
	var_112_float = GetByIndex(var_101_cvector, 1); // 0x385 PushE
	var_112_float = var_112_float + var_99_float; // 0x386 Add2
	SetByIndex(var_101_cvector, 1) = var_112_float; // 0x387 PopE
	PlayGlobalSound(var_85_string, var_101_cvector); // 0x388 Func
	
Label_906:
	return 16; // 0x38a Return
	
Label_880:
	var_113_int = 1; // 0x370 PushI
	var_95_int = var_95_int + var_113_int; // 0x371 Add2
	goto Label_872; // 0x372 Jump
}


func_998(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x3e6 PushV
	var_18_string = "branch"; // 0x3e7 PushS
	GetVariable(var_18_string, var_17_int); // 0x3e8 Func
	var_15_int = var_17_int; // 0x3ea Mov
	return 2; // 0x3eb Return
}


func_1004(var_14_object)
{
	var_15_int = 0; // 0x3ed PushV
	func_998(var_15_int); // 0x3ee NEW_2
	var_19_int = 1; // 0x3f0 PushI
	var_20_bool = var_15_int == var_19_int; // 0x3f1 Eq
	if(var_20_bool == 0) goto Label_1014; // 0x3f2 JumpB
	WorkWithCorpse(var_14_object); // 0x3f3 Func
	goto Label_1016; // 0x3f5 Jump
	
Label_1016:
	return 0; // 0x3f8 Return
	
Label_1014:
	Barter(var_14_object); // 0x3f6 Func
}


func_1017(var_24_int, var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3f9 PushV
	var_30_bool = var_24_int > var_25_int; // 0x3fa GT
	if(var_30_bool == 0) goto Label_1024; // 0x3fb JumpB
	var_31_string = "GenerateMoney: iMin > iMax"; // 0x3fc PushS
	Trace(var_31_string); // 0x3fd Func
	return 4; // 0x3ff Return
	
Label_1024:
	var_28_int = 0; // 0x400 MovI
	var_32_bool = var_24_int != var_25_int; // 0x401 Neq
	if(var_32_bool == 0) goto Label_1031; // 0x402 JumpB
	var_33_int = var_25_int - var_24_int; // 0x403 Sub
	irand(var_28_int, var_33_int); // 0x404 Func
	goto Label_1035; // 0x406 Jump
	
Label_1035:
	var_28_int = var_28_int + var_24_int; // 0x40b Add2
	var_34_int = 0; // 0x40c PushI
	var_35_bool = var_28_int == var_34_int; // 0x40d Eq
	if(var_35_bool == 0) goto Label_1040; // 0x40e JumpB
	return 4; // 0x40f Return
	
Label_1040:
	var_36_int = 0; var_37_string = ""; // 0x410 PushV
	var_37_string = "Money"; // 0x411 MovS
	func_1078(var_36_int, var_37_string); // 0x412 NEW_2
	var_40_int = 0; // 0x414 PushI
	AddItem(var_29_bool, var_36_int, var_40_int, var_28_int); // 0x415 Func
	return 4; // 0x417 Return
	
Label_1031:
	var_41_int = 0; // 0x407 PushI
	var_42_bool = var_24_int == var_41_int; // 0x408 Eq
	if(var_42_bool == 0) goto Label_1035; // 0x409 JumpB
	return 4; // 0x40a Return
}


func_634(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x27a PushV
	var_35_bool = 0; // 0x27b PushV
	var_35_bool = 0; // 0x27c MovB
	var_36_bool = 0; // 0x27d PushV
	var_36_bool = 0; // 0x27e MovB
	var_37_object = var_14_object; // 0x27f Push
	if(var_37_object == 0) goto Label_645; // 0x280 JumpB
	var_38_int = 4; // 0x281 PushI
	var_39_bool = var_15_int != var_38_int; // 0x282 Neq
	if(var_39_bool == 0) goto Label_645; // 0x283 JumpB
	var_36_bool = 1; // 0x284 MovB
	
Label_645:
	if(var_36_bool == 0) goto Label_650; // 0x285 JumpB
	var_40_int = 5; // 0x286 PushI
	var_41_bool = var_15_int != var_40_int; // 0x287 Neq
	if(var_41_bool == 0) goto Label_650; // 0x288 JumpB
	var_35_bool = 1; // 0x289 MovB
	
Label_650:
	if(var_35_bool == 0) goto Label_697; // 0x28a JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x28b PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x28c PushV
	var_45_object = var_14_object; // 0x28d Mov
	func_575(var_45_object); // 0x28e NEW_2
	var_43_cvector = var_44_cvector; // 0x28f Mov
	func_907(var_42_cvector, var_43_cvector); // 0x291 NEW_2
	var_26_cvector = var_42_cvector; // 0x292 Mov
	CreateVectorVector(var_27_object); // 0x294 Func
	var_28_int = 1; // 0x296 MovI
	
Label_663:
	var_55_string = "hit"; // 0x297 PushS
	var_56_int = var_55_string + var_28_int; // 0x298 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x299 Func
	var_57_bool = var_29_bool == 0; // 0x29b Not
	if(var_57_bool == 0) goto Label_670; // 0x29c JumpB
	goto Label_679; // 0x29d Jump
	
Label_679:
	size(var_32_int); // 0x2a7 ObjFunc
	var_58_int = var_32_int; // 0x2a9 Push
	if(var_58_int == 0) goto Label_696; // 0x2aa JumpB
	irand(var_33_int, var_32_int); // 0x2ab Func
	get(var_34_cvector, var_33_int); // 0x2ad ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x2af PushV
	var_59_object = var_14_object; // 0x2b0 Mov
	var_60_int = var_15_int; // 0x2b1 Mov
	var_61_float = var_16_float; // 0x2b2 Mov
	var_62_cvector = var_34_cvector; // 0x2b3 Mov
	var_63_cvector = -var_26_cvector; // 0x2b4 Neg2
	func_702(var_61_float, var_62_cvector, var_63_cvector); // 0x2b5 NEW_2
	return 18; // 0x2b7 Return
	
Label_696:
	var_27_object = 0; // 0x2b8 SetNull
	
Label_697:
	var_104_object = Obj(); // 0x2b9 PushV
	var_104_object = var_14_object; // 0x2ba Mov
	func_590(var_104_object); // 0x2bb NEW_2
	return 18; // 0x2bd Return
	
Label_670:
	var_105_int = var_31_cvector | var_26_cvector; // 0x29e Or
	var_106_float = 0.70711; // 0x29f PushF
	var_107_bool = var_105_int >= var_106_float; // 0x2a0 GE
	if(var_107_bool == 0) goto Label_676; // 0x2a1 JumpB
	add(var_30_cvector); // 0x2a2 ObjFunc
	
Label_676:
	var_108_int = 1; // 0x2a4 PushI
	var_28_int = var_28_int + var_108_int; // 0x2a5 Add2
	goto Label_663; // 0x2a6 Jump
}


func_253(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0xfe PushV
	func_716(var_13_bool); // 0xff NEW_2
	var_16_bool = var_13_bool == 0; // 0x101 Not
	if(var_16_bool == 0) goto Label_260; // 0x102 JumpB
	return 0; // 0x103 Return
	
Label_260:
	var_17_string = "player"; // 0x104 PushS
	FindActor(var_9_object, var_17_string); // 0x105 Func
	var_2_object = 0; // 0x107 TMovB
	var_3_string = 0; // 0x108 TMovB
	var_0_object = var_11_float; // 0x109 TMov
	var_1_object = var_12_float; // 0x10a TMov
	var_18_int = 10; // 0x10b PushI
	var_19_float = 1.0; // 0x10c PushF
	SetTimer(var_18_int, var_19_float); // 0x10d Func
	func_332(); // 0x110 NEW_2
	var_71_bool = var_3_string == 0; // 0x112 Not
	if(var_71_bool == 0) goto Label_279; // 0x113 JumpB
	var_72_int = 10; // 0x114 PushI
	KillTimer(var_72_int); // 0x115 Func
	
Label_279:
	return 0; // 0x117 Return
}


