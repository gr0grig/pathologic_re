task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9e PushI
	if(var_8_int == 0) goto Label_403; // 0x9f JumpB
	func_540(); // 0xa1 Call
	var_10_int = 15548; // 0xa3 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa4 Eq
	if(var_11_bool == 0) goto Label_206; // 0xa5 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xa6 PushV
	var_13_object = var_1_object; // 0xa7 MovT
	func_574(var_13_object); // 0xa8 Call
	if(var_12_bool == 0) goto Label_191; // 0xaa JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0xab PushV
	var_20_object = var_1_object; // 0xac MovT
	var_21_object = var_0_object; // 0xad MovT
	func_568(); // 0xae Call
	var_24_string = ""; // 0xb0 PushV
	var_24_string = "Neutral"; // 0xb1 MovS
	func_141(var_7_bool, var_24_string); // 0xb2 Call
	var_39_int = 14326; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_int = 14327; // 0xb9 PushI
	var_41_int = 15550; // 0xba PushI
	var_42_int = 15549; // 0xbb PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_43_string = ""; // 0xbf PushV
	var_43_string = "Neutral"; // 0xc0 MovS
	func_141(var_7_bool, var_43_string); // 0xc1 Call
	var_44_int = 14532; // 0xc3 PushI
	SetMessage(var_44_int); // 0xc4 TObjFunc
	ClearReplies(); // 0xc6 TObjFunc
	var_45_int = 14533; // 0xc8 PushI
	var_46_int = -1; // 0xc9 PushI
	var_47_int = 15764; // 0xca PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_48_int = 15550; // 0xce PushI
	var_49_bool = var_6_int == var_48_int; // 0xcf Eq
	if(var_49_bool == 0) goto Label_224; // 0xd0 JumpB
	var_50_string = ""; // 0xd1 PushV
	var_50_string = "Neutral"; // 0xd2 MovS
	func_141(var_7_bool, var_50_string); // 0xd3 Call
	var_51_int = 14328; // 0xd5 PushI
	SetMessage(var_51_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_52_int = 14329; // 0xda PushI
	var_53_int = 15552; // 0xdb PushI
	var_54_int = 15551; // 0xdc PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_55_int = 15552; // 0xe0 PushI
	var_56_bool = var_6_int == var_55_int; // 0xe1 Eq
	if(var_56_bool == 0) goto Label_247; // 0xe2 JumpB
	var_57_string = ""; // 0xe3 PushV
	var_57_string = "Neutral"; // 0xe4 MovS
	func_141(var_7_bool, var_57_string); // 0xe5 Call
	var_58_int = 14330; // 0xe7 PushI
	SetMessage(var_58_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_59_int = 14331; // 0xec PushI
	var_60_int = 15554; // 0xed PushI
	var_61_int = 15553; // 0xee PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xef TObjFunc
	var_62_int = 14344; // 0xf1 PushI
	var_63_int = 15567; // 0xf2 PushI
	var_64_int = 15566; // 0xf3 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_65_int = 15567; // 0xf7 PushI
	var_66_bool = var_6_int == var_65_int; // 0xf8 Eq
	if(var_66_bool == 0) goto Label_265; // 0xf9 JumpB
	var_67_string = ""; // 0xfa PushV
	var_67_string = "Neutral"; // 0xfb MovS
	func_141(var_7_bool, var_67_string); // 0xfc Call
	var_68_int = 14345; // 0xfe PushI
	SetMessage(var_68_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_69_int = 14346; // 0x103 PushI
	var_70_int = 15569; // 0x104 PushI
	var_71_int = 15568; // 0x105 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_72_int = 15569; // 0x109 PushI
	var_73_bool = var_6_int == var_72_int; // 0x10a Eq
	if(var_73_bool == 0) goto Label_283; // 0x10b JumpB
	var_74_string = ""; // 0x10c PushV
	var_74_string = "Neutral"; // 0x10d MovS
	func_141(var_7_bool, var_74_string); // 0x10e Call
	var_75_int = 14347; // 0x110 PushI
	SetMessage(var_75_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_76_int = 14348; // 0x115 PushI
	var_77_int = 15554; // 0x116 PushI
	var_78_int = 15570; // 0x117 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x118 TObjFunc
	return 0; // 0x11a Return
	
Label_283:
	var_79_int = 15554; // 0x11b PushI
	var_80_bool = var_6_int == var_79_int; // 0x11c Eq
	if(var_80_bool == 0) goto Label_301; // 0x11d JumpB
	var_81_string = ""; // 0x11e PushV
	var_81_string = "Neutral"; // 0x11f MovS
	func_141(var_7_bool, var_81_string); // 0x120 Call
	var_82_int = 14332; // 0x122 PushI
	SetMessage(var_82_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_83_int = 14333; // 0x127 PushI
	var_84_int = 15556; // 0x128 PushI
	var_85_int = 15555; // 0x129 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_86_int = 15556; // 0x12d PushI
	var_87_bool = var_6_int == var_86_int; // 0x12e Eq
	if(var_87_bool == 0) goto Label_319; // 0x12f JumpB
	var_88_string = ""; // 0x130 PushV
	var_88_string = "Neutral"; // 0x131 MovS
	func_141(var_7_bool, var_88_string); // 0x132 Call
	var_89_int = 14334; // 0x134 PushI
	SetMessage(var_89_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_90_int = 14335; // 0x139 PushI
	var_91_int = 15558; // 0x13a PushI
	var_92_int = 15557; // 0x13b PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_93_int = 15558; // 0x13f PushI
	var_94_bool = var_6_int == var_93_int; // 0x140 Eq
	if(var_94_bool == 0) goto Label_337; // 0x141 JumpB
	var_95_string = ""; // 0x142 PushV
	var_95_string = "Neutral"; // 0x143 MovS
	func_141(var_7_bool, var_95_string); // 0x144 Call
	var_96_int = 14336; // 0x146 PushI
	SetMessage(var_96_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_97_int = 14337; // 0x14b PushI
	var_98_int = 15560; // 0x14c PushI
	var_99_int = 15559; // 0x14d PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_100_int = 15560; // 0x151 PushI
	var_101_bool = var_6_int == var_100_int; // 0x152 Eq
	if(var_101_bool == 0) goto Label_355; // 0x153 JumpB
	var_102_string = ""; // 0x154 PushV
	var_102_string = "Neutral"; // 0x155 MovS
	func_141(var_7_bool, var_102_string); // 0x156 Call
	var_103_int = 14338; // 0x158 PushI
	SetMessage(var_103_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_104_int = 14339; // 0x15d PushI
	var_105_int = 15562; // 0x15e PushI
	var_106_int = 15561; // 0x15f PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_107_int = 15562; // 0x163 PushI
	var_108_bool = var_6_int == var_107_int; // 0x164 Eq
	if(var_108_bool == 0) goto Label_373; // 0x165 JumpB
	var_109_string = ""; // 0x166 PushV
	var_109_string = "Neutral"; // 0x167 MovS
	func_141(var_7_bool, var_109_string); // 0x168 Call
	var_110_int = 14340; // 0x16a PushI
	SetMessage(var_110_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_111_int = 14341; // 0x16f PushI
	var_112_int = 15564; // 0x170 PushI
	var_113_int = 15563; // 0x171 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_114_int = 15564; // 0x175 PushI
	var_115_bool = var_6_int == var_114_int; // 0x176 Eq
	if(var_115_bool == 0) goto Label_391; // 0x177 JumpB
	var_116_string = ""; // 0x178 PushV
	var_116_string = "Neutral"; // 0x179 MovS
	func_141(var_7_bool, var_116_string); // 0x17a Call
	var_117_int = 14342; // 0x17c PushI
	SetMessage(var_117_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_118_int = 14343; // 0x181 PushI
	var_119_int = -1; // 0x182 PushI
	var_120_int = 15565; // 0x183 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_3_string = 1; // 0x187 TMovB
	var_121_bool = 0; // 0x188 PushV
	func_607(var_121_bool); // 0x189 Call
	if(var_121_bool == 0) goto Label_399; // 0x18b JumpB
	lshStopAnimation(); // 0x18c Func
	goto Label_401; // 0x18e Jump
	
Label_401:
	return 0; // 0x191 Return
	
Label_399:
	StopAnimation(); // 0x18f Func
	
Label_403:
	return 0; // 0x193 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x195 PushV
	var_8_object = var_6_object; // 0x196 Mov
	TaskCall(0); // 0x197 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x198 Call
	TaskReturn(); // 0x199 TaskReturn
	return 0; // 0x19b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1a0 PushV
	var_9_string = "cleanup"; // 0x1a1 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1a2 Eq
	if(var_10_bool == 0) goto Label_439; // 0x1a3 JumpB
	var_0_object = 1; // 0x1a4 TMovB
	IsLoaded(var_8_bool); // 0x1a5 Func
	var_11_bool = 0; // 0x1a7 PushV
	var_11_bool = 0; // 0x1a8 MovB
	var_12_bool = var_8_bool == 0; // 0x1a9 Not
	if(var_12_bool == 0) goto Label_432; // 0x1aa JumpB
	var_13_bool = 0; // 0x1ab PushV
	func_460(var_13_bool); // 0x1ac Call
	if(var_13_bool == 0) goto Label_432; // 0x1ae JumpB
	var_11_bool = 1; // 0x1af MovB
	
Label_432:
	if(var_11_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_14_object = Obj(); // 0x1b1 PushV
	func_547(var_14_object); // 0x1b2 Call
	RemoveActor(var_14_object); // 0x1b4 Func
	
Label_438:
	goto Label_443; // 0x1b6 Jump
	
Label_443:
	return 2; // 0x1bb Return
	
Label_439:
	var_17_string = "restore"; // 0x1b7 PushS
	var_18_bool = var_6_string == var_17_string; // 0x1b8 Eq
	if(var_18_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_0_object = 0; // 0x1ba TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1bc PushV
	var_6_bool = 0; // 0x1bd MovB
	var_7_object = var_0_object; // 0x1be PushT
	if(var_7_object == 0) goto Label_453; // 0x1bf JumpB
	var_8_bool = 0; // 0x1c0 PushV
	func_460(var_8_bool); // 0x1c1 Call
	if(var_8_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_6_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_6_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_9_object = Obj(); // 0x1c6 PushV
	func_547(var_9_object); // 0x1c7 Call
	RemoveActor(var_9_object); // 0x1c9 Func
	
Label_459:
	return 0; // 0x1cb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_412:
	Hold(); // 0x19c Func
	goto Label_412; // 0x19e Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_462(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_603(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_605(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_586(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_121_bool = var_17_bool == 0; // 0x2d Not
	if(var_121_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_122_object = Obj(); // 0x34 PushV
	var_122_object = var_8_object; // 0x35 Mov
	func_518(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_547(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x223 PushV
	self(var_11_object); // 0x224 Func
	var_9_object = var_11_object; // 0x226 Mov
	return 2; // 0x227 Return
}


func_518()
{
	CameraSwitchToNormal(); // 0x207 Func
	return 0; // 0x209 Return
}


func_553(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x229 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x22a Or
	var_47_float = sqrt(var_48_int); // 0x22b Sqrt2
	var_49_float = 0.0; // 0x22c PushF
	var_50_bool = var_47_float < var_49_float; // 0x22d LT
	if(var_50_bool == 0) goto Label_561; // 0x22e JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x22f MovV
	return 2; // 0x230 Return
	
Label_561:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x231 Div2
	return 2; // 0x232 Return
}


func_586(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x24a PushV
	var_64_string = "player"; // 0x24b PushS
	GetVariable(var_64_string, var_63_int); // 0x24c Func
	var_65_int = 0; // 0x24e PushI
	var_66_bool = var_63_int == var_65_int; // 0x24f Eq
	if(var_66_bool == 0) goto Label_596; // 0x250 JumpB
	var_61_int = 200001; // 0x251 MovI
	return 2; // 0x252 Return
	
Label_596:
	var_67_int = 1; // 0x254 PushI
	var_68_bool = var_63_int == var_67_int; // 0x255 Eq
	if(var_68_bool == 0) goto Label_601; // 0x256 JumpB
	var_61_int = 200002; // 0x257 MovI
	return 2; // 0x258 Return
	
Label_601:
	var_61_int = 200003; // 0x259 MovI
	return 2; // 0x25a Return
}


func_522(var_93_string)
{
	var_94_float = 0; var_95_float = 0; var_96_float = 0; var_97_float = 0; // 0x20a PushV
	var_98_string = "playing "; // 0x20b PushS
	var_99_int = var_98_string + var_93_string; // 0x20c Add
	Trace(var_99_int); // 0x20d Func
	lshGetAnimTimes(var_93_string, var_96_float, var_97_float); // 0x20f Func
	lshPlayAnimation(var_96_float, var_97_float); // 0x211 Func
	var_100_string = "start: "; // 0x213 PushS
	var_101_int = var_100_string + var_96_float; // 0x214 Add
	Trace(var_101_int); // 0x215 Func
	var_102_string = "end: "; // 0x217 PushS
	var_103_int = var_102_string + var_97_float; // 0x218 Add
	Trace(var_103_int); // 0x219 Func
	return 4; // 0x21b Return
}


func_460(var_8_bool)
{
	var_8_bool = 1; // 0x1cc MovB
	return 0; // 0x1cd Return
}


func_141(var_2_object, var_89_string)
{
	var_90_bool = 0; // 0x8e PushV
	func_607(var_90_bool); // 0x8f Call
	var_91_bool = var_90_bool == 0; // 0x91 Not
	if(var_91_bool == 0) goto Label_148; // 0x92 JumpB
	return 0; // 0x93 Return
	
Label_148:
	var_92_bool = var_89_string == var_2_object; // 0x94 Eq
	if(var_92_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_93_string = ""; // 0x97 PushV
	var_93_string = var_89_string; // 0x98 Mov
	func_522(var_93_string); // 0x99 Call
	var_2_object = var_89_string; // 0x9b TMov
	return 0; // 0x9c Return
}


func_462(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x1ce PushV
	GetPosition(var_29_cvector); // 0x1cf ObjFunc
	GetEyesHeight(var_28_float); // 0x1d1 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1d3 PushE
	var_36_float = var_36_float + var_28_float; // 0x1d4 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1d5 PopE
	GetPosition(var_30_cvector); // 0x1d6 Func
	GetEyesHeight(var_28_float); // 0x1d8 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1da PushE
	var_37_float = var_37_float + var_28_float; // 0x1db Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1dc PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x1dd Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1de PushE
	var_38_float = 0; // 0x1df MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1e0 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x1e1 Or
	var_40_float = sqrt(var_39_int); // 0x1e2 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x1e3 Div2
	var_32_cvector = -var_31_cvector; // 0x1e4 Neg2
	var_41_int = 70; // 0x1e5 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x1e6 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1e7 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x1e8 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x1e9 Xor2
	func_553(var_43_cvector, var_44_cvector); // 0x1ea Call
	var_51_int = 25; // 0x1ec PushI
	var_52_float = var_43_cvector * var_51_int; // 0x1ed Mult
	var_53_int = var_42_float + var_52_float; // 0x1ee Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x1ef PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x1f0 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x1f1 Add2
	IsOverrideActive(var_35_bool); // 0x1f2 Func
	var_55_bool = var_35_bool; // 0x1f4 Push
	if(var_55_bool == 0) goto Label_504; // 0x1f5 JumpB
	var_18_bool = 0; // 0x1f6 MovB
	return 16; // 0x1f7 Return
	
Label_504:
	StopWorld(); // 0x1f8 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x1fa Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x1fc PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x1fd PushE
	Rotate(var_56_float, var_57_float); // 0x1fe Func
	CameraWaitForPlayFinish(); // 0x200 Func
	ResumeWorld(); // 0x202 Func
	var_18_bool = 1; // 0x204 MovB
	return 16; // 0x205 Return
}


func_607(var_90_bool)
{
	var_90_bool = 1; // 0x25f MovB
	return 0; // 0x260 Return
}


func_563(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x233 PushV
	GetVariable(var_80_string, var_82_int); // 0x234 Func
	var_79_int = var_82_int; // 0x236 Mov
	return 2; // 0x237 Return
}


func_568()
{
	var_87_string = "ood11Burah1"; // 0x239 PushS
	var_88_int = 1; // 0x23a PushI
	SetVariable(var_87_string, var_88_int); // 0x23b Func
	return 0; // 0x23d Return
}


func_603(var_59_int)
{
	var_59_int = 11961; // 0x25b MovI
	return 0; // 0x25c Return
}


func_540()
{
	var_9_bool = 0; // 0x21c PushV
	func_607(var_9_bool); // 0x21d Call
	if(var_9_bool == 0) goto Label_546; // 0x21f JumpB
	lshStopSpeech(); // 0x220 Func
	
Label_546:
	return 0; // 0x222 Return
}


func_605(var_60_string)
{
	var_60_string = "ui/NPC_Burah.png"; // 0x25d MovS
	return 0; // 0x25e Return
}


func_574(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x23f PushV
	var_80_string = "ood11Burah1"; // 0x240 MovS
	func_563(var_79_int, var_80_string); // 0x241 Call
	var_83_int = 0; // 0x243 PushI
	var_84_bool = var_79_int == var_83_int; // 0x244 Eq
	if(var_84_bool == 0) goto Label_584; // 0x245 JumpB
	var_77_bool = 1; // 0x246 MovB
	return 0; // 0x247 Return
	
Label_584:
	var_77_bool = 0; // 0x248 MovB
	return 0; // 0x249 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_111; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_574(var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_94; // 0x49 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x4a PushV
	var_85_object = var_1_object; // 0x4b MovT
	var_86_object = var_0_object; // 0x4c MovT
	func_568(); // 0x4d Call
	var_89_string = ""; // 0x4f PushV
	var_89_string = "Neutral"; // 0x50 MovS
	func_141(var_71_object, var_89_string); // 0x51 Call
	var_104_int = 14326; // 0x53 PushI
	SetMessage(var_104_int); // 0x54 TObjFunc
	ClearReplies(); // 0x56 TObjFunc
	var_105_int = 14327; // 0x58 PushI
	var_106_int = 15550; // 0x59 PushI
	var_107_int = 15549; // 0x5a PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x5b TObjFunc
	goto Label_111; // 0x5d Jump
	
Label_111:
	var_108_bool = 0; // 0x6f PushV
	func_607(var_108_bool); // 0x70 Call
	if(var_108_bool == 0) goto Label_126; // 0x72 JumpB
	
Label_115:
	lshWaitForAnimEnd(); // 0x73 Func
	var_109_string = var_3_string; // 0x75 PushT
	if(var_109_string == 0) goto Label_120; // 0x76 JumpB
	goto Label_125; // 0x77 Jump
	
Label_125:
	goto Label_140; // 0x7d Jump
	
Label_140:
	return 0; // 0x8c Return
	
Label_120:
	var_110_string = ""; // 0x78 PushV
	var_110_string = var_2_object; // 0x79 MovT
	func_522(var_110_string); // 0x7a Call
	goto Label_115; // 0x7c Jump
	
Label_126:
	var_111_string = "all"; // 0x7e PushS
	var_112_string = "idle"; // 0x7f PushS
	PlayAnimation(var_111_string, var_112_string); // 0x80 Func
	
Label_130:
	WaitForAnimEnd(); // 0x82 Func
	var_113_string = var_3_string; // 0x84 PushT
	if(var_113_string == 0) goto Label_135; // 0x85 JumpB
	goto Label_140; // 0x86 Jump
	
Label_135:
	var_114_string = "all"; // 0x87 PushS
	var_115_string = "idle"; // 0x88 PushS
	PlayAnimation(var_114_string, var_115_string); // 0x89 Func
	goto Label_130; // 0x8b Jump
	
Label_94:
	var_116_string = ""; // 0x5e PushV
	var_116_string = "Neutral"; // 0x5f MovS
	func_141(var_71_object, var_116_string); // 0x60 Call
	var_117_int = 14532; // 0x62 PushI
	SetMessage(var_117_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_118_int = 14533; // 0x67 PushI
	var_119_int = -1; // 0x68 PushI
	var_120_int = 15764; // 0x69 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6a TObjFunc
	goto Label_111; // 0x6c Jump
}


