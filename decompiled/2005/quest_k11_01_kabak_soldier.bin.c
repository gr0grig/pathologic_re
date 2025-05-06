task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xae PushI
	if(var_14_int == 0) goto Label_333; // 0xaf JumpB
	func_725(); // 0xb1 NEW_2
	var_16_int = 29377; // 0xb3 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xb4 Eq
	if(var_17_bool == 0) goto Label_187; // 0xb5 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xb6 PushV
	var_18_object = var_1_object; // 0xb7 MovT
	var_19_object = var_0_object; // 0xb8 MovT
	func_777(); // 0xb9 NEW_2
	
Label_187:
	var_22_int = 29376; // 0xbb PushI
	var_23_bool = var_12_bool == var_22_int; // 0xbc Eq
	if(var_23_bool == 0) goto Label_229; // 0xbd JumpB
	var_24_string = ""; // 0xbe PushV
	var_24_string = "Neutral"; // 0xbf MovS
	func_151(var_13_bool, var_24_string); // 0xc0 NEW_2
	var_41_int = 528014; // 0xc2 PushI
	SetMessage(var_41_int); // 0xc3 TObjFunc
	ClearReplies(); // 0xc5 TObjFunc
	var_42_bool = 0; // 0xc7 PushV
	var_42_bool = 0; // 0xc8 MovB
	var_43_bool = 0; var_44_object = Obj(); // 0xc9 PushV
	var_44_object = var_1_object; // 0xca MovT
	func_795(var_44_object); // 0xcb NEW_2
	if(var_43_bool == 0) goto Label_212; // 0xcd JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xce PushV
	var_52_object = var_1_object; // 0xcf MovT
	func_783(var_52_object); // 0xd0 NEW_2
	if(var_51_bool == 0) goto Label_212; // 0xd2 JumpB
	var_42_bool = 1; // 0xd3 MovB
	
Label_212:
	if(var_42_bool == 0) goto Label_218; // 0xd4 JumpB
	var_57_int = 528015; // 0xd5 PushI
	var_58_int = 31621; // 0xd6 PushI
	var_59_int = 29377; // 0xd7 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xd8 TObjFunc
	
Label_218:
	var_60_int = 528016; // 0xda PushI
	var_61_int = -1; // 0xdb PushI
	var_62_int = 29378; // 0xdc PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xdd TObjFunc
	var_63_int = 530232; // 0xdf PushI
	var_64_int = -1; // 0xe0 PushI
	var_65_int = 31620; // 0xe1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_66_int = 31621; // 0xe5 PushI
	var_67_bool = var_12_bool == var_66_int; // 0xe6 Eq
	if(var_67_bool == 0) goto Label_252; // 0xe7 JumpB
	var_68_string = ""; // 0xe8 PushV
	var_68_string = "Neutral"; // 0xe9 MovS
	func_151(var_13_bool, var_68_string); // 0xea NEW_2
	var_69_int = 530233; // 0xec PushI
	SetMessage(var_69_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_70_int = 530234; // 0xf1 PushI
	var_71_int = 29379; // 0xf2 PushI
	var_72_int = 31622; // 0xf3 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xf4 TObjFunc
	var_73_int = 530235; // 0xf6 PushI
	var_74_int = -1; // 0xf7 PushI
	var_75_int = 31623; // 0xf8 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_76_int = 29379; // 0xfc PushI
	var_77_bool = var_12_bool == var_76_int; // 0xfd Eq
	if(var_77_bool == 0) goto Label_275; // 0xfe JumpB
	var_78_string = ""; // 0xff PushV
	var_78_string = "Neutral"; // 0x100 MovS
	func_151(var_13_bool, var_78_string); // 0x101 NEW_2
	var_79_int = 528017; // 0x103 PushI
	SetMessage(var_79_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_80_int = 528018; // 0x108 PushI
	var_81_int = 31625; // 0x109 PushI
	var_82_int = 29380; // 0x10a PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x10b TObjFunc
	var_83_int = 530236; // 0x10d PushI
	var_84_int = -1; // 0x10e PushI
	var_85_int = 31624; // 0x10f PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_86_int = 31625; // 0x113 PushI
	var_87_bool = var_12_bool == var_86_int; // 0x114 Eq
	if(var_87_bool == 0) goto Label_298; // 0x115 JumpB
	var_88_string = ""; // 0x116 PushV
	var_88_string = "Neutral"; // 0x117 MovS
	func_151(var_13_bool, var_88_string); // 0x118 NEW_2
	var_89_int = 530237; // 0x11a PushI
	SetMessage(var_89_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_90_int = 530238; // 0x11f PushI
	var_91_int = 31628; // 0x120 PushI
	var_92_int = 31626; // 0x121 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x122 TObjFunc
	var_93_int = 530239; // 0x124 PushI
	var_94_int = -1; // 0x125 PushI
	var_95_int = 31627; // 0x126 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_96_int = 31628; // 0x12a PushI
	var_97_bool = var_12_bool == var_96_int; // 0x12b Eq
	if(var_97_bool == 0) goto Label_321; // 0x12c JumpB
	var_98_string = ""; // 0x12d PushV
	var_98_string = "Neutral"; // 0x12e MovS
	func_151(var_13_bool, var_98_string); // 0x12f NEW_2
	var_99_int = 530240; // 0x131 PushI
	SetMessage(var_99_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_100_int = 530241; // 0x136 PushI
	var_101_int = -1; // 0x137 PushI
	var_102_int = 31629; // 0x138 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x139 TObjFunc
	var_103_int = 530242; // 0x13b PushI
	var_104_int = -1; // 0x13c PushI
	var_105_int = 31630; // 0x13d PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_3_string = 1; // 0x141 TMovB
	var_106_bool = 0; // 0x142 PushV
	func_832(var_106_bool); // 0x143 NEW_2
	if(var_106_bool == 0) goto Label_329; // 0x145 JumpB
	lshStopAnimation(); // 0x146 Func
	goto Label_331; // 0x148 Jump
	
Label_331:
	return 0; // 0x14b Return
	
Label_329:
	StopAnimation(); // 0x149 Func
	
Label_333:
	return 0; // 0x14d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_485(var_11_bool, var_12_object); // 0x156 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x158 PushV
	var_17_object = var_12_object; // 0x159 Mov
	TaskCall(0); // 0x15a TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x15b NEW_2
	TaskReturn(); // 0x15c TaskReturn
	return 0; // 0x15e Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x186 PushS
	var_14_bool = var_12_string == var_13_string; // 0x187 Eq
	if(var_14_bool == 0) goto Label_396; // 0x188 JumpB
	func_369(var_12_string); // 0x18a NEW_2
	
Label_396:
	return 0; // 0x18c Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x18d PushT
	if(var_12_int == 0) goto Label_402; // 0x18e JumpB
	func_485(var_10_bool, var_11_bool); // 0x190 NEW_2
	
Label_402:
	var_16_bool = 0; // 0x192 PushV
	var_16_bool = 0; // 0x193 MovB
	var_17_int = var_5_int; // 0x194 PushT
	if(var_17_int == 0) goto Label_411; // 0x195 JumpB
	var_18_bool = 0; // 0x196 PushV
	func_418(var_18_bool); // 0x197 NEW_2
	if(var_18_bool == 0) goto Label_411; // 0x199 JumpB
	var_16_bool = 1; // 0x19a MovB
	
Label_411:
	if(var_16_bool == 0) goto Label_417; // 0x19b JumpB
	var_19_object = Obj(); // 0x19c PushV
	func_732(var_19_object); // 0x19d NEW_2
	RemoveActor(var_19_object); // 0x19f Func
	
Label_417:
	return 0; // 0x1a1 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1cf PushI
	var_14_bool = var_12_int == var_13_int; // 0x1d0 Eq
	if(var_14_bool == 0) goto Label_484; // 0x1d1 JumpB
	var_15_bool = 0; // 0x1d2 PushV
	func_447(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1d3 NEW_2
	if(var_15_bool == 0) goto Label_478; // 0x1d5 JumpB
	var_28_bool = var_2_object == 0; // 0x1d6 Not
	if(var_28_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_29_object = Obj(); // 0x1d8 PushV
	var_29_object = var_4_bool; // 0x1d9 MovT
	func_714(var_29_object); // 0x1da NEW_2
	var_2_object = 1; // 0x1dc TMovB
	
Label_477:
	goto Label_484; // 0x1dd Jump
	
Label_484:
	return 0; // 0x1e4 Return
	
Label_478:
	var_36_object = var_2_object; // 0x1de PushT
	if(var_36_object == 0) goto Label_484; // 0x1df JumpB
	var_37_string = "head"; // 0x1e0 PushS
	UnlookAsync(var_37_string); // 0x1e1 Func
	var_2_object = 0; // 0x1e3 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x14e PushV
	var_12_float = 300; // 0x14f MovI
	var_13_float = 100; // 0x150 MovI
	func_351(var_11_bool, var_12_float, var_13_float); // 0x151 NEW_2
	return 0; // 0x153 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_598(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_826(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_824(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_828(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_830(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_807(var_78_int); // 0x22 NEW_2
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
	var_154_bool = var_26_bool == 0; // 0x38 Not
	if(var_154_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_155_object = Obj(); // 0x3f PushV
	var_155_object = var_17_object; // 0x40 Mov
	func_666(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_777()
{
	var_20_string = "ook11KabakSoldier1"; // 0x30a PushS
	var_21_int = 1; // 0x30b PushI
	SetVariable(var_20_string, var_21_int); // 0x30c Func
	return 0; // 0x30e Return
}


func_783(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x310 PushV
	var_124_string = "k11q01"; // 0x311 MovS
	func_748(var_123_int, var_124_string); // 0x312 NEW_2
	var_125_int = 2; // 0x314 PushI
	var_126_bool = var_123_int == var_125_int; // 0x315 Eq
	if(var_126_bool == 0) goto Label_793; // 0x316 JumpB
	var_121_bool = 1; // 0x317 MovB
	return 0; // 0x318 Return
	
Label_793:
	var_121_bool = 0; // 0x319 MovB
	return 0; // 0x31a Return
}


func_151(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x98 PushV
	func_832(var_95_bool); // 0x99 NEW_2
	var_96_bool = var_95_bool == 0; // 0x9b Not
	if(var_96_bool == 0) goto Label_158; // 0x9c JumpB
	return 0; // 0x9d Return
	
Label_158:
	var_97_bool = var_94_string == var_2_object; // 0x9e Eq
	if(var_97_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_98_string = ""; var_99_bool = 0; // 0xa1 PushV
	var_98_string = var_94_string; // 0xa2 Mov
	var_100_string = ""; // 0xa3 PushS
	var_101_bool = var_94_string == var_100_string; // 0xa4 Eq
	if(var_101_bool == 0) goto Label_168; // 0xa5 JumpB
	var_99_bool = 0; // 0xa6 MovB
	goto Label_169; // 0xa7 Jump
	
Label_169:
	func_699(var_98_string, var_99_bool); // 0xa9 NEW_2
	var_2_object = var_94_string; // 0xab TMov
	return 0; // 0xac Return
	
Label_168:
	var_99_bool = 1; // 0xa8 MovB
}


func_666()
{
	var_156_bool = 0; var_157_bool = 0; // 0x29a PushV
	CameraSwitchToNormal(); // 0x29b Func
	var_158_bool = 0; // 0x29d PushV
	func_832(var_158_bool); // 0x29e NEW_2
	if(var_158_bool == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_682; // 0x2a1 Jump
	
Label_682:
	return 2; // 0x2aa Return
	
Label_674:
	var_159_string = "head"; // 0x2a2 PushS
	HasAnimationTrack(var_157_bool, var_159_string); // 0x2a3 Func
	var_160_bool = var_157_bool; // 0x2a5 Push
	if(var_160_bool == 0) goto Label_682; // 0x2a6 JumpB
	var_161_string = "head"; // 0x2a7 PushS
	UnlookAsync(var_161_string); // 0x2a8 Func
}


func_795(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x31c PushV
	var_116_string = "ook11KabakSoldier1"; // 0x31d MovS
	func_748(var_115_int, var_116_string); // 0x31e NEW_2
	var_119_int = 0; // 0x320 PushI
	var_120_bool = var_115_int == var_119_int; // 0x321 Eq
	if(var_120_bool == 0) goto Label_805; // 0x322 JumpB
	var_113_bool = 1; // 0x323 MovB
	return 0; // 0x324 Return
	
Label_805:
	var_113_bool = 0; // 0x325 MovB
	return 0; // 0x326 Return
}


func_418(var_18_bool)
{
	var_18_bool = 1; // 0x1a2 MovB
	return 0; // 0x1a3 Return
}


func_420(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1a5 PushV
	func_593(var_23_bool); // 0x1a6 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1a8 Not
	if(var_26_bool == 0) goto Label_427; // 0x1a9 JumpB
	return 0; // 0x1aa Return
	
Label_427:
	var_27_string = "player"; // 0x1ab PushS
	FindActor(var_17_bool, var_27_string); // 0x1ac Func
	var_2_object = 0; // 0x1ae TMovB
	var_3_string = 0; // 0x1af TMovB
	var_0_object = var_21_float; // 0x1b0 TMov
	var_1_object = var_22_float; // 0x1b1 TMov
	var_28_int = 10; // 0x1b2 PushI
	var_29_float = 1.0; // 0x1b3 PushF
	SetTimer(var_28_int, var_29_float); // 0x1b4 Func
	func_499(); // 0x1b7 NEW_2
	var_81_bool = var_3_string == 0; // 0x1b9 Not
	if(var_81_bool == 0) goto Label_446; // 0x1ba JumpB
	var_82_int = 10; // 0x1bb PushI
	KillTimer(var_82_int); // 0x1bc Func
	
Label_446:
	return 0; // 0x1be Return
}


func_807(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x327 PushV
	var_81_string = "branch"; // 0x328 PushS
	GetVariable(var_81_string, var_80_int); // 0x329 Func
	var_82_int = 0; // 0x32b PushI
	var_83_bool = var_80_int == var_82_int; // 0x32c Eq
	if(var_83_bool == 0) goto Label_817; // 0x32d JumpB
	var_78_int = 1; // 0x32e MovI
	return 2; // 0x32f Return
	
Label_817:
	var_84_int = 1; // 0x331 PushI
	var_85_bool = var_80_int == var_84_int; // 0x332 Eq
	if(var_85_bool == 0) goto Label_822; // 0x333 JumpB
	var_78_int = 2; // 0x334 MovI
	return 2; // 0x335 Return
	
Label_822:
	var_78_int = 3; // 0x336 MovI
	return 2; // 0x337 Return
}


func_683(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x2ab PushV
	lshHasAnimation(var_142_bool, var_138_string); // 0x2ac Func
	var_145_bool = var_142_bool; // 0x2ae Push
	if(var_145_bool == 0) goto Label_694; // 0x2af JumpB
	lshGetAnimTimes(var_138_string, var_143_float, var_144_float); // 0x2b0 Func
	var_146_bool = 0; // 0x2b2 PushB
	lshPlayAnimation(var_143_float, var_144_float, var_146_bool); // 0x2b3 Func
	goto Label_698; // 0x2b5 Jump
	
Label_698:
	return 6; // 0x2ba Return
	
Label_694:
	var_147_string = "Can't find lsh animation : "; // 0x2b6 PushS
	var_148_int = var_147_string + var_138_string; // 0x2b7 Add
	Trace(var_148_int); // 0x2b8 Func
}


func_824(var_75_int)
{
	var_75_int = 527721; // 0x338 MovI
	return 0; // 0x339 Return
}


func_826(var_74_int)
{
	var_74_int = 527720; // 0x33a MovI
	return 0; // 0x33b Return
}


func_699(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x2bb PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x2bc Func
	var_108_bool = var_105_bool; // 0x2be Push
	if(var_108_bool == 0) goto Label_709; // 0x2bf JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x2c0 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x2c2 Func
	goto Label_713; // 0x2c4 Jump
	
Label_713:
	return 6; // 0x2c9 Return
	
Label_709:
	var_109_string = "Can't find lsh animation : "; // 0x2c5 PushS
	var_110_int = var_109_string + var_98_string; // 0x2c6 Add
	Trace(var_110_int); // 0x2c7 Func
}


func_828(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x33c MovS
	return 0; // 0x33d Return
}


func_830(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x33e MovS
	return 0; // 0x33f Return
}


func_447(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1bf PushV
	var_18_bool = var_4_bool == 0; // 0x1c0 NullEq
	if(var_18_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_15_bool = 0; // 0x1c2 MovB
	return 2; // 0x1c3 Return
	
Label_452:
	var_19_float = 0; var_20_object = Obj(); // 0x1c4 PushV
	var_20_object = var_4_bool; // 0x1c5 MovT
	func_585(var_20_object); // 0x1c6 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1c8 Sqrt2
	var_27_object = var_2_object; // 0x1c9 PushT
	if(var_27_object == 0) goto Label_460; // 0x1ca JumpB
	var_17_float = var_17_float - var_1_object; // 0x1cb Sub2
	
Label_460:
	var_15_bool = var_17_float < var_0_object; // 0x1cc LT2
	return 2; // 0x1cd Return
}


func_832(var_69_bool)
{
	var_69_bool = 0; // 0x340 MovB
	return 0; // 0x341 Return
}


func_578(var_71_bool)
{
	var_71_bool = 1; // 0x242 MovB
	return 0; // 0x243 Return
}


func_580()
{
	StopAnimation(); // 0x244 Func
	StopGroup0(); // 0x246 Func
	return 0; // 0x248 Return
}


func_585(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x249 PushV
	GetPosition(var_24_cvector); // 0x24a Func
	GetPosition(var_25_cvector); // 0x24c ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x24e Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x24f Or2
	return 6; // 0x250 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_121; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_151(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 528014; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_bool = 0; // 0x59 PushV
	var_112_bool = 0; // 0x5a MovB
	var_113_bool = 0; var_114_object = Obj(); // 0x5b PushV
	var_114_object = var_1_object; // 0x5c MovT
	func_795(var_114_object); // 0x5d NEW_2
	if(var_113_bool == 0) goto Label_102; // 0x5f JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x60 PushV
	var_122_object = var_1_object; // 0x61 MovT
	func_783(var_122_object); // 0x62 NEW_2
	if(var_121_bool == 0) goto Label_102; // 0x64 JumpB
	var_112_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_112_bool == 0) goto Label_108; // 0x66 JumpB
	var_127_int = 528015; // 0x67 PushI
	var_128_int = 31621; // 0x68 PushI
	var_129_int = 29377; // 0x69 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6a TObjFunc
	
Label_108:
	var_130_int = 528016; // 0x6c PushI
	var_131_int = -1; // 0x6d PushI
	var_132_int = 29378; // 0x6e PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x6f TObjFunc
	var_133_int = 530232; // 0x71 PushI
	var_134_int = -1; // 0x72 PushI
	var_135_int = 31620; // 0x73 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x74 TObjFunc
	goto Label_121; // 0x76 Jump
	
Label_121:
	var_136_bool = 0; // 0x79 PushV
	func_832(var_136_bool); // 0x7a NEW_2
	if(var_136_bool == 0) goto Label_136; // 0x7c JumpB
	
Label_125:
	lshWaitForAnimEnd(); // 0x7d Func
	var_137_string = var_3_string; // 0x7f PushT
	if(var_137_string == 0) goto Label_130; // 0x80 JumpB
	goto Label_135; // 0x81 Jump
	
Label_135:
	goto Label_150; // 0x87 Jump
	
Label_150:
	return 0; // 0x96 Return
	
Label_130:
	var_138_string = ""; // 0x82 PushV
	var_138_string = var_2_object; // 0x83 MovT
	func_683(var_138_string); // 0x84 NEW_2
	goto Label_125; // 0x86 Jump
	
Label_136:
	var_149_string = "all"; // 0x88 PushS
	var_150_string = "idle"; // 0x89 PushS
	PlayAnimation(var_149_string, var_150_string); // 0x8a Func
	
Label_140:
	WaitForAnimEnd(); // 0x8c Func
	var_151_string = var_3_string; // 0x8e PushT
	if(var_151_string == 0) goto Label_145; // 0x8f JumpB
	goto Label_150; // 0x90 Jump
	
Label_145:
	var_152_string = "all"; // 0x91 PushS
	var_153_string = "idle"; // 0x92 PushS
	PlayAnimation(var_152_string, var_153_string); // 0x93 Func
	goto Label_140; // 0x95 Jump
}


func_714(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2ca PushV
	GetEyesHeight(var_32_float); // 0x2cb ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2cd MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2ce PushE
	var_34_float = var_32_float; // 0x2cf Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2d0 PopE
	var_35_string = "head"; // 0x2d1 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2d2 Func
	return 4; // 0x2d4 Return
}


func_593(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x251 PushV
	IsLoaded(var_25_bool); // 0x252 Func
	var_23_bool = var_25_bool; // 0x254 Mov
	return 2; // 0x255 Return
}


func_725()
{
	var_15_bool = 0; // 0x2d5 PushV
	func_832(var_15_bool); // 0x2d6 NEW_2
	if(var_15_bool == 0) goto Label_731; // 0x2d8 JumpB
	lshStopSpeech(); // 0x2d9 Func
	
Label_731:
	return 0; // 0x2db Return
}


func_598(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x256 PushV
	GetPosition(var_40_cvector); // 0x257 ObjFunc
	GetEyesHeight(var_39_float); // 0x259 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x25b PushE
	var_48_float = var_48_float + var_39_float; // 0x25c Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x25d PopE
	GetPosition(var_41_cvector); // 0x25e Func
	GetEyesHeight(var_39_float); // 0x260 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x262 PushE
	var_49_float = var_49_float + var_39_float; // 0x263 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x264 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x265 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x266 PushE
	var_50_float = 0; // 0x267 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x268 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x269 Or
	var_52_float = sqrt(var_51_int); // 0x26a Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x26b Div2
	var_43_cvector = -var_42_cvector; // 0x26c Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x26d Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x26e PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x26f PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x270 Xor2
	func_738(var_54_cvector, var_55_cvector); // 0x271 NEW_2
	var_62_int = 25; // 0x273 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x274 Mult
	var_64_int = var_53_float + var_63_float; // 0x275 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x276 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x277 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x278 Add2
	IsOverrideActive(var_46_bool); // 0x279 Func
	var_66_bool = var_46_bool; // 0x27b Push
	if(var_66_bool == 0) goto Label_639; // 0x27c JumpB
	var_27_bool = 0; // 0x27d MovB
	return 18; // 0x27e Return
	
Label_639:
	StopWorld(); // 0x27f Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x281 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x283 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x284 PushE
	Rotate(var_67_float, var_68_float); // 0x285 Func
	var_69_bool = 0; // 0x287 PushV
	func_832(var_69_bool); // 0x288 NEW_2
	if(var_69_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_660; // 0x28b Jump
	
Label_660:
	CameraWaitForPlayFinish(); // 0x294 Func
	ResumeWorld(); // 0x296 Func
	var_27_bool = 1; // 0x298 MovB
	return 18; // 0x299 Return
	
Label_652:
	var_70_string = "head"; // 0x28c PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x28d Func
	var_71_bool = var_47_bool; // 0x28f Push
	if(var_71_bool == 0) goto Label_660; // 0x290 JumpB
	var_72_string = "head"; // 0x291 PushS
	LookAsyncCamera(var_72_string); // 0x292 Func
}


func_732(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2dc PushV
	self(var_21_object); // 0x2dd Func
	var_19_object = var_21_object; // 0x2df Mov
	return 2; // 0x2e0 Return
}


func_351(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x15f PushV
	var_6_int = 0; // 0x160 TMovB
	
Label_353:
	var_18_int = 3; // 0x161 PushI
	rand(var_16_float, var_18_int); // 0x162 Func
	var_19_int = 3; // 0x164 PushI
	var_20_int = var_16_float + var_19_int; // 0x165 Add
	Sleep(var_20_int, var_17_bool); // 0x166 Func
	var_6_int = 1; // 0x168 TMovB
	var_21_float = 0; var_22_float = 0; // 0x169 PushV
	var_21_float = var_12_float; // 0x16a Mov
	var_22_float = var_13_float; // 0x16b Mov
	func_420(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x16c NEW_2
	var_6_int = 0; // 0x16e TMovB
	goto Label_353; // 0x16f Jump
}


func_738(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2e2 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2e3 Or
	var_58_float = sqrt(var_59_int); // 0x2e4 Sqrt2
	var_60_float = 0.0; // 0x2e5 PushF
	var_61_bool = var_58_float < var_60_float; // 0x2e6 LT
	if(var_61_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2e8 MovV
	return 2; // 0x2e9 Return
	
Label_746:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2ea Div2
	return 2; // 0x2eb Return
}


func_485(var_2_object, var_3_string)
{
	func_580(); // 0x1e6 NEW_2
	var_13_int = 10; // 0x1e8 PushI
	KillTimer(var_13_int); // 0x1e9 Func
	var_14_object = var_2_object; // 0x1eb PushT
	if(var_14_object == 0) goto Label_497; // 0x1ec JumpB
	var_15_string = "head"; // 0x1ed PushS
	UnlookAsync(var_15_string); // 0x1ee Func
	var_2_object = 0; // 0x1f0 TMovB
	
Label_497:
	var_3_string = 1; // 0x1f1 TMovB
	return 0; // 0x1f2 Return
}


func_748(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x2ec PushV
	GetVariable(var_116_string, var_118_int); // 0x2ed Func
	var_115_int = var_118_int; // 0x2ef Mov
	return 2; // 0x2f0 Return
}


func_369(var_5_int)
{
	var_5_int = 1; // 0x171 TMovB
	var_15_bool = 0; // 0x172 PushV
	var_15_bool = 0; // 0x173 MovB
	var_16_bool = 0; // 0x174 PushV
	func_593(var_16_bool); // 0x175 NEW_2
	var_19_bool = var_16_bool == 0; // 0x177 Not
	if(var_19_bool == 0) goto Label_382; // 0x178 JumpB
	var_20_bool = 0; // 0x179 PushV
	func_418(var_20_bool); // 0x17a NEW_2
	if(var_20_bool == 0) goto Label_382; // 0x17c JumpB
	var_15_bool = 1; // 0x17d MovB
	
Label_382:
	if(var_15_bool == 0) goto Label_388; // 0x17e JumpB
	var_21_object = Obj(); // 0x17f PushV
	func_732(var_21_object); // 0x180 NEW_2
	RemoveActor(var_21_object); // 0x182 Func
	
Label_388:
	return 0; // 0x184 Return
}


func_753(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2f1 PushV
	var_55_string = "idle"; // 0x2f2 MovS
	var_56_int = var_53_int; // 0x2f3 Push
	if(var_56_int == 0) goto Label_758; // 0x2f4 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2f5 Add2
	
Label_758:
	var_52_string = var_55_string; // 0x2f6 Mov
	return 2; // 0x2f7 Return
}


func_499()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1f3 PushV
	WaitForAnimEnd(); // 0x1f4 Func
	var_44_bool = 0; // 0x1f6 PushV
	func_593(var_44_bool); // 0x1f7 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1f9 Not
	if(var_45_bool == 0) goto Label_508; // 0x1fa JumpB
	return 14; // 0x1fb Return
	
Label_508:
	var_46_int = 0; // 0x1fc PushV
	func_760(var_46_int); // 0x1fd NEW_2
	var_37_int = var_46_int; // 0x1fe Mov
	var_38_int = 0; // 0x200 MovI
	
Label_513:
	var_59_bool = 0; // 0x201 PushV
	var_59_bool = 0; // 0x202 MovB
	var_60_int = 5; // 0x203 PushI
	var_61_bool = var_38_int < var_60_int; // 0x204 LT
	if(var_61_bool == 0) goto Label_523; // 0x205 JumpB
	var_62_bool = 0; // 0x206 PushV
	func_593(var_62_bool); // 0x207 NEW_2
	if(var_62_bool == 0) goto Label_523; // 0x209 JumpB
	var_59_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_59_bool == 0) goto Label_575; // 0x20b JumpB
	var_63_int = 3; // 0x20c PushI
	irand(var_39_int, var_63_int); // 0x20d Func
	var_64_int = 0; // 0x20f PushI
	var_65_bool = var_39_int == var_64_int; // 0x210 Eq
	if(var_65_bool == 0) goto Label_547; // 0x211 JumpB
	var_66_int = var_37_int; // 0x212 Push
	if(var_66_int == 0) goto Label_546; // 0x213 JumpB
	irand(var_40_int, var_37_int); // 0x214 Func
	var_67_string = "all"; // 0x216 PushS
	var_68_string = ""; var_69_int = 0; // 0x217 PushV
	var_69_int = var_40_int; // 0x218 Mov
	func_753(var_68_string, var_69_int); // 0x219 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x21b Func
	WaitForAnimEnd(var_41_bool); // 0x21d Func
	var_70_bool = var_41_bool == 0; // 0x21f Not
	if(var_70_bool == 0) goto Label_546; // 0x220 JumpB
	goto Label_575; // 0x221 Jump
	
Label_575:
	ResetAAS(); // 0x23f Func
	return 14; // 0x241 Return
	
Label_546:
	goto Label_564; // 0x222 Jump
	
Label_564:
	var_71_bool = 0; // 0x234 PushV
	func_578(var_71_bool); // 0x235 NEW_2
	var_72_bool = var_71_bool == 0; // 0x237 Not
	if(var_72_bool == 0) goto Label_570; // 0x238 JumpB
	goto Label_575; // 0x239 Jump
	
Label_570:
	ResetAAS(); // 0x23a Func
	var_73_int = 1; // 0x23c PushI
	var_38_int = var_38_int + var_73_int; // 0x23d Add2
	goto Label_513; // 0x23e Jump
	
Label_547:
	var_74_int = 1; // 0x223 PushI
	var_75_bool = var_39_int == var_74_int; // 0x224 Eq
	if(var_75_bool == 0) goto Label_561; // 0x225 JumpB
	var_76_int = 4; // 0x226 PushI
	rand(var_42_float, var_76_int); // 0x227 Func
	var_77_int = 1; // 0x229 PushI
	var_78_int = var_42_float + var_77_int; // 0x22a Add
	Sleep(var_78_int, var_43_bool); // 0x22b Func
	var_79_bool = var_43_bool == 0; // 0x22d Not
	if(var_79_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_575; // 0x22f Jump
	
Label_560:
	goto Label_564; // 0x230 Jump
	
Label_561:
	var_80_int = var_38_int; // 0x231 Push
	if(var_80_int == 0) goto Label_564; // 0x232 JumpB
	goto Label_575; // 0x233 Jump
}


func_760(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2f8 PushV
	var_49_int = 0; // 0x2f9 MovI
	
Label_762:
	var_51_string = "all"; // 0x2fa PushS
	var_52_string = ""; var_53_int = 0; // 0x2fb PushV
	var_53_int = var_49_int; // 0x2fc Mov
	func_753(var_52_string, var_53_int); // 0x2fd NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2ff Func
	var_57_bool = var_50_bool == 0; // 0x301 Not
	if(var_57_bool == 0) goto Label_772; // 0x302 JumpB
	goto Label_775; // 0x303 Jump
	
Label_775:
	var_46_int = var_49_int; // 0x307 Mov
	return 4; // 0x308 Return
	
Label_772:
	var_58_int = 1; // 0x304 PushI
	var_49_int = var_49_int + var_58_int; // 0x305 Add2
	goto Label_762; // 0x306 Jump
}


