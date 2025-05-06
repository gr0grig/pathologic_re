task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb4 PushI
	if(var_8_int == 0) goto Label_366; // 0xb5 JumpB
	func_659(); // 0xb7 NEW_2
	var_10_int = 22397; // 0xb9 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xba Eq
	if(var_11_bool == 0) goto Label_193; // 0xbb JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xbc PushV
	var_12_object = var_1_object; // 0xbd MovT
	var_13_object = var_0_object; // 0xbe MovT
	func_711(); // 0xbf NEW_2
	
Label_193:
	var_39_int = 22383; // 0xc1 PushI
	var_40_bool = var_6_int == var_39_int; // 0xc2 Eq
	if(var_40_bool == 0) goto Label_241; // 0xc3 JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0xc4 PushV
	var_42_object = var_1_object; // 0xc5 MovT
	func_726(var_42_object); // 0xc6 NEW_2
	if(var_41_bool == 0) goto Label_226; // 0xc8 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xc9 PushV
	var_49_object = var_1_object; // 0xca MovT
	var_50_object = var_0_object; // 0xcb MovT
	func_720(); // 0xcc NEW_2
	var_53_string = ""; // 0xce PushV
	var_53_string = "Neutral"; // 0xcf MovS
	func_157(var_7_bool, var_53_string); // 0xd0 NEW_2
	var_70_int = 521181; // 0xd2 PushI
	SetMessage(var_70_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_71_int = 528428; // 0xd7 PushI
	var_72_int = 29813; // 0xd8 PushI
	var_73_int = 29812; // 0xd9 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xda TObjFunc
	var_74_int = 528434; // 0xdc PushI
	var_75_int = 29819; // 0xdd PushI
	var_76_int = 29818; // 0xde PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_77_string = ""; // 0xe2 PushV
	var_77_string = "Neutral"; // 0xe3 MovS
	func_157(var_7_bool, var_77_string); // 0xe4 NEW_2
	var_78_int = 521197; // 0xe6 PushI
	SetMessage(var_78_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_79_int = 521198; // 0xeb PushI
	var_80_int = -1; // 0xec PushI
	var_81_int = 22395; // 0xed PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_82_int = 29819; // 0xf1 PushI
	var_83_bool = var_6_int == var_82_int; // 0xf2 Eq
	if(var_83_bool == 0) goto Label_259; // 0xf3 JumpB
	var_84_string = ""; // 0xf4 PushV
	var_84_string = "Neutral"; // 0xf5 MovS
	func_157(var_7_bool, var_84_string); // 0xf6 NEW_2
	var_85_int = 528435; // 0xf8 PushI
	SetMessage(var_85_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_86_int = 528436; // 0xfd PushI
	var_87_int = 29821; // 0xfe PushI
	var_88_int = 29820; // 0xff PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_89_int = 29821; // 0x103 PushI
	var_90_bool = var_6_int == var_89_int; // 0x104 Eq
	if(var_90_bool == 0) goto Label_277; // 0x105 JumpB
	var_91_string = ""; // 0x106 PushV
	var_91_string = "Neutral"; // 0x107 MovS
	func_157(var_7_bool, var_91_string); // 0x108 NEW_2
	var_92_int = 528437; // 0x10a PushI
	SetMessage(var_92_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_93_int = 528438; // 0x10f PushI
	var_94_int = 29815; // 0x110 PushI
	var_95_int = 29822; // 0x111 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_96_int = 29813; // 0x115 PushI
	var_97_bool = var_6_int == var_96_int; // 0x116 Eq
	if(var_97_bool == 0) goto Label_295; // 0x117 JumpB
	var_98_string = ""; // 0x118 PushV
	var_98_string = "Neutral"; // 0x119 MovS
	func_157(var_7_bool, var_98_string); // 0x11a NEW_2
	var_99_int = 528429; // 0x11c PushI
	SetMessage(var_99_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_100_int = 528430; // 0x121 PushI
	var_101_int = 29815; // 0x122 PushI
	var_102_int = 29814; // 0x123 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x124 TObjFunc
	return 0; // 0x126 Return
	
Label_295:
	var_103_int = 29815; // 0x127 PushI
	var_104_bool = var_6_int == var_103_int; // 0x128 Eq
	if(var_104_bool == 0) goto Label_318; // 0x129 JumpB
	var_105_string = ""; // 0x12a PushV
	var_105_string = "Neutral"; // 0x12b MovS
	func_157(var_7_bool, var_105_string); // 0x12c NEW_2
	var_106_int = 528431; // 0x12e PushI
	SetMessage(var_106_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_107_int = 528432; // 0x133 PushI
	var_108_int = 29817; // 0x134 PushI
	var_109_int = 29816; // 0x135 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x136 TObjFunc
	var_110_int = 528439; // 0x138 PushI
	var_111_int = 29817; // 0x139 PushI
	var_112_int = 29824; // 0x13a PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_113_int = 29817; // 0x13e PushI
	var_114_bool = var_6_int == var_113_int; // 0x13f Eq
	if(var_114_bool == 0) goto Label_336; // 0x140 JumpB
	var_115_string = ""; // 0x141 PushV
	var_115_string = "Neutral"; // 0x142 MovS
	func_157(var_7_bool, var_115_string); // 0x143 NEW_2
	var_116_int = 528433; // 0x145 PushI
	SetMessage(var_116_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_117_int = 521182; // 0x14a PushI
	var_118_int = 22396; // 0x14b PushI
	var_119_int = 22384; // 0x14c PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_120_int = 22396; // 0x150 PushI
	var_121_bool = var_6_int == var_120_int; // 0x151 Eq
	if(var_121_bool == 0) goto Label_354; // 0x152 JumpB
	var_122_string = ""; // 0x153 PushV
	var_122_string = "Neutral"; // 0x154 MovS
	func_157(var_7_bool, var_122_string); // 0x155 NEW_2
	var_123_int = 521199; // 0x157 PushI
	SetMessage(var_123_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_124_int = 521200; // 0x15c PushI
	var_125_int = -1; // 0x15d PushI
	var_126_int = 22397; // 0x15e PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_3_string = 1; // 0x162 TMovB
	var_127_bool = 0; // 0x163 PushV
	func_817(var_127_bool); // 0x164 NEW_2
	if(var_127_bool == 0) goto Label_362; // 0x166 JumpB
	lshStopAnimation(); // 0x167 Func
	goto Label_364; // 0x169 Jump
	
Label_364:
	return 0; // 0x16c Return
	
Label_362:
	StopAnimation(); // 0x16a Func
	
Label_366:
	return 0; // 0x16e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_531(); // 0x171 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x173 PushV
	var_8_object = var_6_object; // 0x174 Mov
	TaskCall(0); // 0x175 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x176 NEW_2
	TaskReturn(); // 0x177 TaskReturn
	return 0; // 0x179 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x1a4 PushS
	var_8_bool = var_6_string == var_7_string; // 0x1a5 Eq
	if(var_8_bool == 0) goto Label_426; // 0x1a6 JumpB
	func_399(var_6_string); // 0x1a8 NEW_2
	
Label_426:
	return 0; // 0x1aa Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1ab Func
	sync(); // 0x1ad Func
	return 0; // 0x1af Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1b0 PushV
	var_6_bool = 0; // 0x1b1 MovB
	var_7_object = var_0_object; // 0x1b2 PushT
	if(var_7_object == 0) goto Label_441; // 0x1b3 JumpB
	var_8_bool = 0; // 0x1b4 PushV
	func_448(var_8_bool); // 0x1b5 NEW_2
	if(var_8_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_6_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_6_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_9_object = Obj(); // 0x1ba PushV
	func_666(var_9_object); // 0x1bb NEW_2
	RemoveActor(var_9_object); // 0x1bd Func
	
Label_447:
	return 0; // 0x1bf Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x17a PushV
	
Label_379:
	var_8_bool = 0; // 0x17b PushV
	func_536(var_8_bool); // 0x17c NEW_2
	var_11_bool = var_8_bool == 0; // 0x17e Not
	if(var_11_bool == 0) goto Label_387; // 0x17f JumpB
	Hold(); // 0x180 Func
	goto Label_379; // 0x182 Jump
	
Label_387:
	var_12_int = 3; // 0x183 PushI
	rand(var_7_float, var_12_int); // 0x184 Func
	var_13_int = 3; // 0x186 PushI
	var_14_int = var_7_float + var_13_int; // 0x187 Add
	Sleep(var_14_int); // 0x188 Func
	func_450(); // 0x18b NEW_2
	goto Label_379; // 0x18d Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_541(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_811(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_809(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_813(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_815(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_792(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_145_bool = var_17_bool == 0; // 0x38 Not
	if(var_145_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_146_object = Obj(); // 0x3f PushV
	var_146_object = var_8_object; // 0x40 Mov
	func_610(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_448(var_8_bool)
{
	var_8_bool = 1; // 0x1c0 MovB
	return 0; // 0x1c1 Return
}


func_450()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1c2 PushV
	WaitForAnimEnd(); // 0x1c3 Func
	var_29_bool = 0; // 0x1c5 PushV
	func_536(var_29_bool); // 0x1c6 NEW_2
	var_30_bool = var_29_bool == 0; // 0x1c8 Not
	if(var_30_bool == 0) goto Label_459; // 0x1c9 JumpB
	return 14; // 0x1ca Return
	
Label_459:
	var_31_int = 0; // 0x1cb PushV
	func_694(var_31_int); // 0x1cc NEW_2
	var_22_int = var_31_int; // 0x1cd Mov
	var_23_int = 0; // 0x1cf MovI
	
Label_464:
	var_44_bool = 0; // 0x1d0 PushV
	var_44_bool = 0; // 0x1d1 MovB
	var_45_int = 5; // 0x1d2 PushI
	var_46_bool = var_23_int < var_45_int; // 0x1d3 LT
	if(var_46_bool == 0) goto Label_474; // 0x1d4 JumpB
	var_47_bool = 0; // 0x1d5 PushV
	func_536(var_47_bool); // 0x1d6 NEW_2
	if(var_47_bool == 0) goto Label_474; // 0x1d8 JumpB
	var_44_bool = 1; // 0x1d9 MovB
	
Label_474:
	if(var_44_bool == 0) goto Label_526; // 0x1da JumpB
	var_48_int = 3; // 0x1db PushI
	irand(var_24_int, var_48_int); // 0x1dc Func
	var_49_int = 0; // 0x1de PushI
	var_50_bool = var_24_int == var_49_int; // 0x1df Eq
	if(var_50_bool == 0) goto Label_498; // 0x1e0 JumpB
	var_51_int = var_22_int; // 0x1e1 Push
	if(var_51_int == 0) goto Label_497; // 0x1e2 JumpB
	irand(var_25_int, var_22_int); // 0x1e3 Func
	var_52_string = "all"; // 0x1e5 PushS
	var_53_string = ""; var_54_int = 0; // 0x1e6 PushV
	var_54_int = var_25_int; // 0x1e7 Mov
	func_687(var_53_string, var_54_int); // 0x1e8 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1ea Func
	WaitForAnimEnd(var_26_bool); // 0x1ec Func
	var_55_bool = var_26_bool == 0; // 0x1ee Not
	if(var_55_bool == 0) goto Label_497; // 0x1ef JumpB
	goto Label_526; // 0x1f0 Jump
	
Label_526:
	ResetAAS(); // 0x20e Func
	return 14; // 0x210 Return
	
Label_497:
	goto Label_515; // 0x1f1 Jump
	
Label_515:
	var_56_bool = 0; // 0x203 PushV
	func_529(var_56_bool); // 0x204 NEW_2
	var_57_bool = var_56_bool == 0; // 0x206 Not
	if(var_57_bool == 0) goto Label_521; // 0x207 JumpB
	goto Label_526; // 0x208 Jump
	
Label_521:
	ResetAAS(); // 0x209 Func
	var_58_int = 1; // 0x20b PushI
	var_23_int = var_23_int + var_58_int; // 0x20c Add2
	goto Label_464; // 0x20d Jump
	
Label_498:
	var_59_int = 1; // 0x1f2 PushI
	var_60_bool = var_24_int == var_59_int; // 0x1f3 Eq
	if(var_60_bool == 0) goto Label_512; // 0x1f4 JumpB
	var_61_int = 4; // 0x1f5 PushI
	rand(var_27_float, var_61_int); // 0x1f6 Func
	var_62_int = 1; // 0x1f8 PushI
	var_63_int = var_27_float + var_62_int; // 0x1f9 Add
	Sleep(var_63_int, var_28_bool); // 0x1fa Func
	var_64_bool = var_28_bool == 0; // 0x1fc Not
	if(var_64_bool == 0) goto Label_511; // 0x1fd JumpB
	goto Label_526; // 0x1fe Jump
	
Label_511:
	goto Label_515; // 0x1ff Jump
	
Label_512:
	var_65_int = var_23_int; // 0x200 Push
	if(var_65_int == 0) goto Label_515; // 0x201 JumpB
	goto Label_526; // 0x202 Jump
}


func_644(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0; // 0x284 PushV
	lshHasAnimation(var_109_bool, var_102_string); // 0x285 Func
	var_112_bool = var_109_bool; // 0x287 Push
	if(var_112_bool == 0) goto Label_654; // 0x288 JumpB
	lshGetAnimTimes(var_102_string, var_110_float, var_111_float); // 0x289 Func
	lshPlayAnimation(var_110_float, var_111_float, var_103_bool); // 0x28b Func
	goto Label_658; // 0x28d Jump
	
Label_658:
	return 6; // 0x292 Return
	
Label_654:
	var_113_string = "Can't find lsh animation : "; // 0x28e PushS
	var_114_int = var_113_string + var_102_string; // 0x28f Add
	Trace(var_114_int); // 0x290 Func
}


func_711()
{
	var_14_string = "b6q02"; // 0x2c8 PushS
	var_15_int = 2; // 0x2c9 PushI
	SetVariable(var_14_string, var_15_int); // 0x2ca Func
	func_738(); // 0x2cd NEW_2
	return 0; // 0x2cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_127; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_726(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_110; // 0x54 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x55 PushV
	var_94_object = var_1_object; // 0x56 MovT
	var_95_object = var_0_object; // 0x57 MovT
	func_720(); // 0x58 NEW_2
	var_98_string = ""; // 0x5a PushV
	var_98_string = "Neutral"; // 0x5b MovS
	func_157(var_80_object, var_98_string); // 0x5c NEW_2
	var_115_int = 521181; // 0x5e PushI
	SetMessage(var_115_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_116_int = 528428; // 0x63 PushI
	var_117_int = 29813; // 0x64 PushI
	var_118_int = 29812; // 0x65 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x66 TObjFunc
	var_119_int = 528434; // 0x68 PushI
	var_120_int = 29819; // 0x69 PushI
	var_121_int = 29818; // 0x6a PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_122_bool = 0; // 0x7f PushV
	func_817(var_122_bool); // 0x80 NEW_2
	if(var_122_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_123_string = var_3_string; // 0x85 PushT
	if(var_123_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_124_string = ""; // 0x88 PushV
	var_124_string = var_2_object; // 0x89 MovT
	func_628(var_124_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_135_string = "all"; // 0x8e PushS
	var_136_string = "idle"; // 0x8f PushS
	PlayAnimation(var_135_string, var_136_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_137_string = var_3_string; // 0x94 PushT
	if(var_137_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_138_string = "all"; // 0x97 PushS
	var_139_string = "idle"; // 0x98 PushS
	PlayAnimation(var_138_string, var_139_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_140_string = ""; // 0x6e PushV
	var_140_string = "Neutral"; // 0x6f MovS
	func_157(var_80_object, var_140_string); // 0x70 NEW_2
	var_141_int = 521197; // 0x72 PushI
	SetMessage(var_141_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_142_int = 521198; // 0x77 PushI
	var_143_int = -1; // 0x78 PushI
	var_144_int = 22395; // 0x79 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_399(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x18f PushV
	var_0_object = 1; // 0x190 TMovB
	IsLoaded(var_10_bool); // 0x191 Func
	var_11_bool = 0; // 0x193 PushV
	var_11_bool = 0; // 0x194 MovB
	var_12_bool = var_10_bool == 0; // 0x195 Not
	if(var_12_bool == 0) goto Label_412; // 0x196 JumpB
	var_13_bool = 0; // 0x197 PushV
	func_448(var_13_bool); // 0x198 NEW_2
	if(var_13_bool == 0) goto Label_412; // 0x19a JumpB
	var_11_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_11_bool == 0) goto Label_418; // 0x19c JumpB
	var_14_object = Obj(); // 0x19d PushV
	func_666(var_14_object); // 0x19e NEW_2
	RemoveActor(var_14_object); // 0x1a0 Func
	
Label_418:
	return 2; // 0x1a2 Return
}


func_720()
{
	var_96_string = "oob6Prophet1"; // 0x2d1 PushS
	var_97_int = 1; // 0x2d2 PushI
	SetVariable(var_96_string, var_97_int); // 0x2d3 Func
	return 0; // 0x2d5 Return
}


func_529(var_56_bool)
{
	var_56_bool = 1; // 0x211 MovB
	return 0; // 0x212 Return
}


func_659()
{
	var_9_bool = 0; // 0x293 PushV
	func_817(var_9_bool); // 0x294 NEW_2
	if(var_9_bool == 0) goto Label_665; // 0x296 JumpB
	lshStopSpeech(); // 0x297 Func
	
Label_665:
	return 0; // 0x299 Return
}


func_531()
{
	StopAnimation(); // 0x213 Func
	StopGroup0(); // 0x215 Func
	return 0; // 0x217 Return
}


func_726(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x2d7 PushV
	var_89_string = "oob6Prophet1"; // 0x2d8 MovS
	func_682(var_88_int, var_89_string); // 0x2d9 NEW_2
	var_92_int = 0; // 0x2db PushI
	var_93_bool = var_88_int == var_92_int; // 0x2dc Eq
	if(var_93_bool == 0) goto Label_736; // 0x2dd JumpB
	var_86_bool = 1; // 0x2de MovB
	return 0; // 0x2df Return
	
Label_736:
	var_86_bool = 0; // 0x2e0 MovB
	return 0; // 0x2e1 Return
}


func_792(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x318 PushV
	var_73_string = "branch"; // 0x319 PushS
	GetVariable(var_73_string, var_72_int); // 0x31a Func
	var_74_int = 0; // 0x31c PushI
	var_75_bool = var_72_int == var_74_int; // 0x31d Eq
	if(var_75_bool == 0) goto Label_802; // 0x31e JumpB
	var_70_int = 1; // 0x31f MovI
	return 2; // 0x320 Return
	
Label_802:
	var_76_int = 1; // 0x322 PushI
	var_77_bool = var_72_int == var_76_int; // 0x323 Eq
	if(var_77_bool == 0) goto Label_807; // 0x324 JumpB
	var_70_int = 2; // 0x325 MovI
	return 2; // 0x326 Return
	
Label_807:
	var_70_int = 3; // 0x327 MovI
	return 2; // 0x328 Return
}


func_536(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x218 PushV
	IsLoaded(var_10_bool); // 0x219 Func
	var_8_bool = var_10_bool; // 0x21b Mov
	return 2; // 0x21c Return
}


func_666(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x29a PushV
	self(var_11_object); // 0x29b Func
	var_9_object = var_11_object; // 0x29d Mov
	return 2; // 0x29e Return
}


func_541(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x21d PushV
	GetPosition(var_31_cvector); // 0x21e ObjFunc
	GetEyesHeight(var_30_float); // 0x220 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x222 PushE
	var_39_float = var_39_float + var_30_float; // 0x223 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x224 PopE
	GetPosition(var_32_cvector); // 0x225 Func
	GetEyesHeight(var_30_float); // 0x227 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x229 PushE
	var_40_float = var_40_float + var_30_float; // 0x22a Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x22b PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x22c Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x22d PushE
	var_41_float = 0; // 0x22e MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x22f PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x230 Or
	var_43_float = sqrt(var_42_int); // 0x231 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x232 Div2
	var_34_cvector = -var_33_cvector; // 0x233 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x234 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x235 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x236 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x237 Xor2
	func_672(var_45_cvector, var_46_cvector); // 0x238 NEW_2
	var_53_int = 25; // 0x23a PushI
	var_54_float = var_45_cvector * var_53_int; // 0x23b Mult
	var_55_int = var_44_float + var_54_float; // 0x23c Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x23d PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x23e Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x23f Add2
	IsOverrideActive(var_37_bool); // 0x240 Func
	var_57_bool = var_37_bool; // 0x242 Push
	if(var_57_bool == 0) goto Label_582; // 0x243 JumpB
	var_18_bool = 0; // 0x244 MovB
	return 18; // 0x245 Return
	
Label_582:
	StopWorld(); // 0x246 Func
	var_58_bool = 1; // 0x248 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x249 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x24b PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x24c PushE
	Rotate(var_59_float, var_60_float); // 0x24d Func
	var_61_bool = 0; // 0x24f PushV
	func_817(var_61_bool); // 0x250 NEW_2
	if(var_61_bool == 0) goto Label_596; // 0x252 JumpB
	goto Label_604; // 0x253 Jump
	
Label_604:
	CameraWaitForPlayFinish(); // 0x25c Func
	ResumeWorld(); // 0x25e Func
	var_18_bool = 1; // 0x260 MovB
	return 18; // 0x261 Return
	
Label_596:
	var_62_string = "head"; // 0x254 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x255 Func
	var_63_bool = var_38_bool; // 0x257 Push
	if(var_63_bool == 0) goto Label_604; // 0x258 JumpB
	var_64_string = "head"; // 0x259 PushS
	LookAsyncCamera(var_64_string); // 0x25a Func
}


func_157(var_2_object, var_98_string)
{
	var_99_bool = 0; // 0x9e PushV
	func_817(var_99_bool); // 0x9f NEW_2
	var_100_bool = var_99_bool == 0; // 0xa1 Not
	if(var_100_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_101_bool = var_98_string == var_2_object; // 0xa4 Eq
	if(var_101_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_102_string = ""; var_103_bool = 0; // 0xa7 PushV
	var_102_string = var_98_string; // 0xa8 Mov
	var_104_string = ""; // 0xa9 PushS
	var_105_bool = var_98_string == var_104_string; // 0xaa Eq
	if(var_105_bool == 0) goto Label_174; // 0xab JumpB
	var_103_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_644(var_102_string, var_103_bool); // 0xaf NEW_2
	var_2_object = var_98_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_103_bool = 1; // 0xae MovB
}


func_672(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2a0 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2a1 Or
	var_49_float = sqrt(var_50_int); // 0x2a2 Sqrt2
	var_51_float = 0.0; // 0x2a3 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2a4 LT
	if(var_52_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2a6 MovV
	return 2; // 0x2a7 Return
	
Label_680:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2a8 Div2
	return 2; // 0x2a9 Return
}


func_610()
{
	var_147_bool = 0; var_148_bool = 0; // 0x262 PushV
	var_149_bool = 1; // 0x263 PushB
	CameraSwitchToNormal(var_149_bool); // 0x264 Func
	var_150_bool = 0; // 0x266 PushV
	func_817(var_150_bool); // 0x267 NEW_2
	if(var_150_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_627; // 0x26a Jump
	
Label_627:
	return 2; // 0x273 Return
	
Label_619:
	var_151_string = "head"; // 0x26b PushS
	HasAnimationTrack(var_148_bool, var_151_string); // 0x26c Func
	var_152_bool = var_148_bool; // 0x26e Push
	if(var_152_bool == 0) goto Label_627; // 0x26f JumpB
	var_153_string = "head"; // 0x270 PushS
	UnlookAsync(var_153_string); // 0x271 Func
}


func_738()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x2e2 PushV
	var_18_int = 268; // 0x2e3 PushI
	var_19_int = 2; // 0x2e4 PushI
	var_20_int = 521195; // 0x2e5 PushI
	CreateDiaryEntry(var_17_object, var_18_int, var_19_int, var_20_int); // 0x2e6 Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x2e8 PushV
	var_22_object = var_17_object; // 0x2e9 Mov
	var_23_int = 266; // 0x2ea MovI
	func_764(var_21_bool, var_22_object, var_23_int); // 0x2eb NEW_2
	return 2; // 0x2ed Return
}


func_809(var_67_int)
{
	var_67_int = 518716; // 0x329 MovI
	return 0; // 0x32a Return
}


func_682(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x2aa PushV
	GetVariable(var_89_string, var_91_int); // 0x2ab Func
	var_88_int = var_91_int; // 0x2ad Mov
	return 2; // 0x2ae Return
}


func_811(var_66_int)
{
	var_66_int = 518715; // 0x32b MovI
	return 0; // 0x32c Return
}


func_813(var_68_string)
{
	var_68_string = "ui/NPC_Prophet.png"; // 0x32d MovS
	return 0; // 0x32e Return
}


func_815(var_69_string)
{
	var_69_string = "ui/NPC_Prophet_b.png"; // 0x32f MovS
	return 0; // 0x330 Return
}


func_687(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2af PushV
	var_40_string = "idle"; // 0x2b0 MovS
	var_41_int = var_38_int; // 0x2b1 Push
	if(var_41_int == 0) goto Label_692; // 0x2b2 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2b3 Add2
	
Label_692:
	var_37_string = var_40_string; // 0x2b4 Mov
	return 2; // 0x2b5 Return
}


func_817(var_61_bool)
{
	var_61_bool = 0; // 0x331 MovB
	return 0; // 0x332 Return
}


func_751(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x2ef PushV
	GetDiaryRoot(var_32_object); // 0x2f0 Func
	var_33_bool = var_32_object == 0; // 0x2f2 Not
	if(var_33_bool == 0) goto Label_761; // 0x2f3 JumpB
	var_34_string = "Can't retrieve diary root"; // 0x2f4 PushS
	Trace(var_34_string); // 0x2f5 Func
	var_30_object = 0; // 0x2f7 MovB
	return 2; // 0x2f8 Return
	
Label_761:
	var_30_object = var_32_object; // 0x2f9 Mov
	return 2; // 0x2fa Return
}


func_628(var_124_string)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0; // 0x274 PushV
	lshHasAnimation(var_128_bool, var_124_string); // 0x275 Func
	var_131_bool = var_128_bool; // 0x277 Push
	if(var_131_bool == 0) goto Label_639; // 0x278 JumpB
	lshGetAnimTimes(var_124_string, var_129_float, var_130_float); // 0x279 Func
	var_132_bool = 0; // 0x27b PushB
	lshPlayAnimation(var_129_float, var_130_float, var_132_bool); // 0x27c Func
	goto Label_643; // 0x27e Jump
	
Label_643:
	return 6; // 0x283 Return
	
Label_639:
	var_133_string = "Can't find lsh animation : "; // 0x27f PushS
	var_134_int = var_133_string + var_124_string; // 0x280 Add
	Trace(var_134_int); // 0x281 Func
}


func_694(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2b6 PushV
	var_34_int = 0; // 0x2b7 MovI
	
Label_696:
	var_36_string = "all"; // 0x2b8 PushS
	var_37_string = ""; var_38_int = 0; // 0x2b9 PushV
	var_38_int = var_34_int; // 0x2ba Mov
	func_687(var_37_string, var_38_int); // 0x2bb NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2bd Func
	var_42_bool = var_35_bool == 0; // 0x2bf Not
	if(var_42_bool == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_709; // 0x2c1 Jump
	
Label_709:
	var_31_int = var_34_int; // 0x2c5 Mov
	return 4; // 0x2c6 Return
	
Label_706:
	var_43_int = 1; // 0x2c2 PushI
	var_34_int = var_34_int + var_43_int; // 0x2c3 Add2
	goto Label_696; // 0x2c4 Jump
}


func_764(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x2fc PushV
	var_30_object = Obj(); // 0x2fd PushV
	func_751(var_30_object); // 0x2fe NEW_2
	var_27_object = var_30_object; // 0x2ff Mov
	Find(var_23_int, var_28_object); // 0x301 ObjFunc
	var_35_bool = var_28_object == 0; // 0x303 Not
	if(var_35_bool == 0) goto Label_779; // 0x304 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x305 PushS
	var_37_int = var_36_string + var_23_int; // 0x306 Add
	Trace(var_37_int); // 0x307 Func
	var_21_bool = 0; // 0x309 MovB
	return 6; // 0x30a Return
	
Label_779:
	AddChild(var_22_object); // 0x30b ObjFunc
	var_38_int = 7; // 0x30d PushI
	SendWorldWndMessage(var_38_int); // 0x30e Func
	GetCategory(var_29_int); // 0x310 ObjFunc
	SetDiarySection(var_29_int); // 0x312 Func
	var_21_bool = 0; // 0x314 MovB
	return 6; // 0x315 Return
}


