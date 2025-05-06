task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_402; // 0xa6 JumpB
	func_796(); // 0xa8 NEW_2
	var_16_int = 45191; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_178; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_824(); // 0xb0 NEW_2
	
Label_178:
	var_22_int = 45190; // 0xb2 PushI
	var_23_bool = var_12_bool == var_22_int; // 0xb3 Eq
	if(var_23_bool == 0) goto Label_211; // 0xb4 JumpB
	var_24_string = ""; // 0xb5 PushV
	var_24_string = "Neutral"; // 0xb6 MovS
	func_142(var_13_bool, var_24_string); // 0xb7 NEW_2
	var_41_int = 542769; // 0xb9 PushI
	SetMessage(var_41_int); // 0xba TObjFunc
	ClearReplies(); // 0xbc TObjFunc
	var_42_bool = 0; var_43_object = Obj(); // 0xbe PushV
	var_43_object = var_1_object; // 0xbf MovT
	func_830(var_43_object); // 0xc0 NEW_2
	if(var_42_bool == 0) goto Label_200; // 0xc2 JumpB
	var_50_int = 542770; // 0xc3 PushI
	var_51_int = 45193; // 0xc4 PushI
	var_52_int = 45191; // 0xc5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xc6 TObjFunc
	
Label_200:
	var_53_int = 542771; // 0xc8 PushI
	var_54_int = -1; // 0xc9 PushI
	var_55_int = 45192; // 0xca PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xcb TObjFunc
	var_56_int = 542790; // 0xcd PushI
	var_57_int = -1; // 0xce PushI
	var_58_int = 45212; // 0xcf PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_59_int = 45193; // 0xd3 PushI
	var_60_bool = var_12_bool == var_59_int; // 0xd4 Eq
	if(var_60_bool == 0) goto Label_234; // 0xd5 JumpB
	var_61_string = ""; // 0xd6 PushV
	var_61_string = "Neutral"; // 0xd7 MovS
	func_142(var_13_bool, var_61_string); // 0xd8 NEW_2
	var_62_int = 542772; // 0xda PushI
	SetMessage(var_62_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_63_int = 542773; // 0xdf PushI
	var_64_int = 45195; // 0xe0 PushI
	var_65_int = 45194; // 0xe1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe2 TObjFunc
	var_66_int = 542775; // 0xe4 PushI
	var_67_int = 45197; // 0xe5 PushI
	var_68_int = 45196; // 0xe6 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_69_int = 45197; // 0xea PushI
	var_70_bool = var_12_bool == var_69_int; // 0xeb Eq
	if(var_70_bool == 0) goto Label_252; // 0xec JumpB
	var_71_string = ""; // 0xed PushV
	var_71_string = "Neutral"; // 0xee MovS
	func_142(var_13_bool, var_71_string); // 0xef NEW_2
	var_72_int = 542776; // 0xf1 PushI
	SetMessage(var_72_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_73_int = 542777; // 0xf6 PushI
	var_74_int = 45199; // 0xf7 PushI
	var_75_int = 45198; // 0xf8 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_76_int = 45199; // 0xfc PushI
	var_77_bool = var_12_bool == var_76_int; // 0xfd Eq
	if(var_77_bool == 0) goto Label_270; // 0xfe JumpB
	var_78_string = ""; // 0xff PushV
	var_78_string = "Neutral"; // 0x100 MovS
	func_142(var_13_bool, var_78_string); // 0x101 NEW_2
	var_79_int = 542778; // 0x103 PushI
	SetMessage(var_79_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_80_int = 542787; // 0x108 PushI
	var_81_int = 45209; // 0x109 PushI
	var_82_int = 45208; // 0x10a PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_83_int = 45209; // 0x10e PushI
	var_84_bool = var_12_bool == var_83_int; // 0x10f Eq
	if(var_84_bool == 0) goto Label_288; // 0x110 JumpB
	var_85_string = ""; // 0x111 PushV
	var_85_string = "Neutral"; // 0x112 MovS
	func_142(var_13_bool, var_85_string); // 0x113 NEW_2
	var_86_int = 542788; // 0x115 PushI
	SetMessage(var_86_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_87_int = 542789; // 0x11a PushI
	var_88_int = 45203; // 0x11b PushI
	var_89_int = 45210; // 0x11c PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_90_int = 45195; // 0x120 PushI
	var_91_bool = var_12_bool == var_90_int; // 0x121 Eq
	if(var_91_bool == 0) goto Label_316; // 0x122 JumpB
	var_92_string = ""; // 0x123 PushV
	var_92_string = "Neutral"; // 0x124 MovS
	func_142(var_13_bool, var_92_string); // 0x125 NEW_2
	var_93_int = 542774; // 0x127 PushI
	SetMessage(var_93_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_94_int = 542779; // 0x12c PushI
	var_95_int = 45201; // 0x12d PushI
	var_96_int = 45200; // 0x12e PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x12f TObjFunc
	var_97_int = 542785; // 0x131 PushI
	var_98_int = 45284; // 0x132 PushI
	var_99_int = 45206; // 0x133 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x134 TObjFunc
	var_100_int = 542862; // 0x136 PushI
	var_101_int = -1; // 0x137 PushI
	var_102_int = 45288; // 0x138 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_103_int = 45284; // 0x13c PushI
	var_104_bool = var_12_bool == var_103_int; // 0x13d Eq
	if(var_104_bool == 0) goto Label_344; // 0x13e JumpB
	var_105_string = ""; // 0x13f PushV
	var_105_string = "Neutral"; // 0x140 MovS
	func_142(var_13_bool, var_105_string); // 0x141 NEW_2
	var_106_int = 542858; // 0x143 PushI
	SetMessage(var_106_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_107_int = 542859; // 0x148 PushI
	var_108_int = -1; // 0x149 PushI
	var_109_int = 45285; // 0x14a PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x14b TObjFunc
	var_110_int = 542860; // 0x14d PushI
	var_111_int = -1; // 0x14e PushI
	var_112_int = 45286; // 0x14f PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x150 TObjFunc
	var_113_int = 542861; // 0x152 PushI
	var_114_int = -1; // 0x153 PushI
	var_115_int = 45287; // 0x154 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_116_int = 45201; // 0x158 PushI
	var_117_bool = var_12_bool == var_116_int; // 0x159 Eq
	if(var_117_bool == 0) goto Label_367; // 0x15a JumpB
	var_118_string = ""; // 0x15b PushV
	var_118_string = "Neutral"; // 0x15c MovS
	func_142(var_13_bool, var_118_string); // 0x15d NEW_2
	var_119_int = 542780; // 0x15f PushI
	SetMessage(var_119_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_120_int = 542781; // 0x164 PushI
	var_121_int = 45203; // 0x165 PushI
	var_122_int = 45202; // 0x166 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x167 TObjFunc
	var_123_int = 542786; // 0x169 PushI
	var_124_int = -1; // 0x16a PushI
	var_125_int = 45207; // 0x16b PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_126_int = 45203; // 0x16f PushI
	var_127_bool = var_12_bool == var_126_int; // 0x170 Eq
	if(var_127_bool == 0) goto Label_390; // 0x171 JumpB
	var_128_string = ""; // 0x172 PushV
	var_128_string = "Neutral"; // 0x173 MovS
	func_142(var_13_bool, var_128_string); // 0x174 NEW_2
	var_129_int = 542782; // 0x176 PushI
	SetMessage(var_129_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_130_int = 542783; // 0x17b PushI
	var_131_int = -1; // 0x17c PushI
	var_132_int = 45204; // 0x17d PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x17e TObjFunc
	var_133_int = 542784; // 0x180 PushI
	var_134_int = -1; // 0x181 PushI
	var_135_int = 45205; // 0x182 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_3_string = 1; // 0x186 TMovB
	var_136_bool = 0; // 0x187 PushV
	func_867(var_136_bool); // 0x188 NEW_2
	if(var_136_bool == 0) goto Label_398; // 0x18a JumpB
	lshStopAnimation(); // 0x18b Func
	goto Label_400; // 0x18d Jump
	
Label_400:
	return 0; // 0x190 Return
	
Label_398:
	StopAnimation(); // 0x18e Func
	
Label_402:
	return 0; // 0x192 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_554(var_11_bool, var_12_object); // 0x19b NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x19d PushV
	var_17_object = var_12_object; // 0x19e Mov
	TaskCall(0); // 0x19f TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1a0 NEW_2
	TaskReturn(); // 0x1a1 TaskReturn
	return 0; // 0x1a3 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1cb PushS
	var_14_bool = var_12_string == var_13_string; // 0x1cc Eq
	if(var_14_bool == 0) goto Label_465; // 0x1cd JumpB
	func_438(var_12_string); // 0x1cf NEW_2
	
Label_465:
	return 0; // 0x1d1 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1d2 PushT
	if(var_12_int == 0) goto Label_471; // 0x1d3 JumpB
	func_554(var_10_bool, var_11_bool); // 0x1d5 NEW_2
	
Label_471:
	var_16_bool = 0; // 0x1d7 PushV
	var_16_bool = 0; // 0x1d8 MovB
	var_17_int = var_5_int; // 0x1d9 PushT
	if(var_17_int == 0) goto Label_480; // 0x1da JumpB
	var_18_bool = 0; // 0x1db PushV
	func_487(var_18_bool); // 0x1dc NEW_2
	if(var_18_bool == 0) goto Label_480; // 0x1de JumpB
	var_16_bool = 1; // 0x1df MovB
	
Label_480:
	if(var_16_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_19_object = Obj(); // 0x1e1 PushV
	func_803(var_19_object); // 0x1e2 NEW_2
	RemoveActor(var_19_object); // 0x1e4 Func
	
Label_486:
	return 0; // 0x1e6 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x214 PushI
	var_14_bool = var_12_int == var_13_int; // 0x215 Eq
	if(var_14_bool == 0) goto Label_553; // 0x216 JumpB
	var_15_bool = 0; // 0x217 PushV
	func_516(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x218 NEW_2
	if(var_15_bool == 0) goto Label_547; // 0x21a JumpB
	var_28_bool = var_2_object == 0; // 0x21b Not
	if(var_28_bool == 0) goto Label_546; // 0x21c JumpB
	var_29_object = Obj(); // 0x21d PushV
	var_29_object = var_4_bool; // 0x21e MovT
	func_785(var_29_object); // 0x21f NEW_2
	var_2_object = 1; // 0x221 TMovB
	
Label_546:
	goto Label_553; // 0x222 Jump
	
Label_553:
	return 0; // 0x229 Return
	
Label_547:
	var_36_object = var_2_object; // 0x223 PushT
	if(var_36_object == 0) goto Label_553; // 0x224 JumpB
	var_37_string = "head"; // 0x225 PushS
	UnlookAsync(var_37_string); // 0x226 Func
	var_2_object = 0; // 0x228 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x193 PushV
	var_12_float = 300; // 0x194 MovI
	var_13_float = 100; // 0x195 MovI
	func_420(var_11_bool, var_12_float, var_13_float); // 0x196 NEW_2
	return 0; // 0x198 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_667(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_861(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_859(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_863(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_865(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_842(var_79_int); // 0x22 NEW_2
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
	var_148_bool = var_26_bool == 0; // 0x38 Not
	if(var_148_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_149_object = Obj(); // 0x3f PushV
	var_149_object = var_17_object; // 0x40 Mov
	func_736(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_770(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x302 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x303 Func
	var_109_bool = var_106_bool; // 0x305 Push
	if(var_109_bool == 0) goto Label_780; // 0x306 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x307 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x309 Func
	goto Label_784; // 0x30b Jump
	
Label_784:
	return 6; // 0x310 Return
	
Label_780:
	var_110_string = "Can't find lsh animation : "; // 0x30c PushS
	var_111_int = var_110_string + var_99_string; // 0x30d Add
	Trace(var_111_int); // 0x30e Func
}


func_516(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x204 PushV
	var_18_bool = var_4_bool == 0; // 0x205 NullEq
	if(var_18_bool == 0) goto Label_521; // 0x206 JumpB
	var_15_bool = 0; // 0x207 MovB
	return 2; // 0x208 Return
	
Label_521:
	var_19_float = 0; var_20_object = Obj(); // 0x209 PushV
	var_20_object = var_4_bool; // 0x20a MovT
	func_654(var_20_object); // 0x20b NEW_2
	var_17_float = sqrt(var_19_float); // 0x20d Sqrt2
	var_27_object = var_2_object; // 0x20e PushT
	if(var_27_object == 0) goto Label_529; // 0x20f JumpB
	var_17_float = var_17_float - var_1_object; // 0x210 Sub2
	
Label_529:
	var_15_bool = var_17_float < var_0_object; // 0x211 LT2
	return 2; // 0x212 Return
}


func_647(var_71_bool)
{
	var_71_bool = 1; // 0x287 MovB
	return 0; // 0x288 Return
}


func_649()
{
	StopAnimation(); // 0x289 Func
	StopGroup0(); // 0x28b Func
	return 0; // 0x28d Return
}


func_142(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x8f PushV
	func_867(var_96_bool); // 0x90 NEW_2
	var_97_bool = var_96_bool == 0; // 0x92 Not
	if(var_97_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_98_bool = var_95_string == var_2_object; // 0x95 Eq
	if(var_98_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_99_string = ""; var_100_bool = 0; // 0x98 PushV
	var_99_string = var_95_string; // 0x99 Mov
	var_101_string = ""; // 0x9a PushS
	var_102_bool = var_95_string == var_101_string; // 0x9b Eq
	if(var_102_bool == 0) goto Label_159; // 0x9c JumpB
	var_100_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_770(var_99_string, var_100_bool); // 0xa0 NEW_2
	var_2_object = var_95_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_100_bool = 1; // 0x9f MovB
}


func_654(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x28e PushV
	GetPosition(var_24_cvector); // 0x28f Func
	GetPosition(var_25_cvector); // 0x291 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x293 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x294 Or2
	return 6; // 0x295 Return
}


func_785(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x311 PushV
	GetEyesHeight(var_32_float); // 0x312 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x314 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x315 PushE
	var_34_float = var_32_float; // 0x316 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x317 PopE
	var_35_string = "head"; // 0x318 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x319 Func
	return 4; // 0x31b Return
}


func_662(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x296 PushV
	IsLoaded(var_25_bool); // 0x297 Func
	var_23_bool = var_25_bool; // 0x299 Mov
	return 2; // 0x29a Return
}


func_667(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x29b PushV
	GetPosition(var_40_cvector); // 0x29c ObjFunc
	GetEyesHeight(var_39_float); // 0x29e ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2a0 PushE
	var_48_float = var_48_float + var_39_float; // 0x2a1 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2a2 PopE
	GetPosition(var_41_cvector); // 0x2a3 Func
	GetEyesHeight(var_39_float); // 0x2a5 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2a7 PushE
	var_49_float = var_49_float + var_39_float; // 0x2a8 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2a9 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2aa Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2ab PushE
	var_50_float = 0; // 0x2ac MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2ad PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2ae Or
	var_52_float = sqrt(var_51_int); // 0x2af Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2b0 Div2
	var_43_cvector = -var_42_cvector; // 0x2b1 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2b2 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2b3 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2b4 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2b5 Xor2
	func_809(var_54_cvector, var_55_cvector); // 0x2b6 NEW_2
	var_62_int = 25; // 0x2b8 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2b9 Mult
	var_64_int = var_53_float + var_63_float; // 0x2ba Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2bb PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2bc Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2bd Add2
	IsOverrideActive(var_46_bool); // 0x2be Func
	var_66_bool = var_46_bool; // 0x2c0 Push
	if(var_66_bool == 0) goto Label_708; // 0x2c1 JumpB
	var_27_bool = 0; // 0x2c2 MovB
	return 18; // 0x2c3 Return
	
Label_708:
	StopWorld(); // 0x2c4 Func
	var_67_bool = 1; // 0x2c6 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2c7 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2c9 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2ca PushE
	Rotate(var_68_float, var_69_float); // 0x2cb Func
	var_70_bool = 0; // 0x2cd PushV
	func_867(var_70_bool); // 0x2ce NEW_2
	if(var_70_bool == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_730; // 0x2d1 Jump
	
Label_730:
	CameraWaitForPlayFinish(); // 0x2da Func
	ResumeWorld(); // 0x2dc Func
	var_27_bool = 1; // 0x2de MovB
	return 18; // 0x2df Return
	
Label_722:
	var_71_string = "head"; // 0x2d2 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2d3 Func
	var_72_bool = var_47_bool; // 0x2d5 Push
	if(var_72_bool == 0) goto Label_730; // 0x2d6 JumpB
	var_73_string = "head"; // 0x2d7 PushS
	LookAsyncCamera(var_73_string); // 0x2d8 Func
}


func_796()
{
	var_15_bool = 0; // 0x31c PushV
	func_867(var_15_bool); // 0x31d NEW_2
	if(var_15_bool == 0) goto Label_802; // 0x31f JumpB
	lshStopSpeech(); // 0x320 Func
	
Label_802:
	return 0; // 0x322 Return
}


func_803(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x323 PushV
	self(var_21_object); // 0x324 Func
	var_19_object = var_21_object; // 0x326 Mov
	return 2; // 0x327 Return
}


func_420(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1a4 PushV
	var_6_int = 0; // 0x1a5 TMovB
	
Label_422:
	var_18_int = 3; // 0x1a6 PushI
	rand(var_16_float, var_18_int); // 0x1a7 Func
	var_19_int = 3; // 0x1a9 PushI
	var_20_int = var_16_float + var_19_int; // 0x1aa Add
	Sleep(var_20_int, var_17_bool); // 0x1ab Func
	var_6_int = 1; // 0x1ad TMovB
	var_21_float = 0; var_22_float = 0; // 0x1ae PushV
	var_21_float = var_12_float; // 0x1af Mov
	var_22_float = var_13_float; // 0x1b0 Mov
	func_489(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1b1 NEW_2
	var_6_int = 0; // 0x1b3 TMovB
	goto Label_422; // 0x1b4 Jump
}


func_809(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x329 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x32a Or
	var_58_float = sqrt(var_59_int); // 0x32b Sqrt2
	var_60_float = 0.0; // 0x32c PushF
	var_61_bool = var_58_float < var_60_float; // 0x32d LT
	if(var_61_bool == 0) goto Label_817; // 0x32e JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x32f MovV
	return 2; // 0x330 Return
	
Label_817:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x331 Div2
	return 2; // 0x332 Return
}


func_554(var_2_object, var_3_string)
{
	func_649(); // 0x22b NEW_2
	var_13_int = 10; // 0x22d PushI
	KillTimer(var_13_int); // 0x22e Func
	var_14_object = var_2_object; // 0x230 PushT
	if(var_14_object == 0) goto Label_566; // 0x231 JumpB
	var_15_string = "head"; // 0x232 PushS
	UnlookAsync(var_15_string); // 0x233 Func
	var_2_object = 0; // 0x235 TMovB
	
Label_566:
	var_3_string = 1; // 0x236 TMovB
	return 0; // 0x237 Return
}


func_819(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x333 PushV
	GetVariable(var_116_string, var_118_int); // 0x334 Func
	var_115_int = var_118_int; // 0x336 Mov
	return 2; // 0x337 Return
}


func_438(var_5_int)
{
	var_5_int = 1; // 0x1b6 TMovB
	var_15_bool = 0; // 0x1b7 PushV
	var_15_bool = 0; // 0x1b8 MovB
	var_16_bool = 0; // 0x1b9 PushV
	func_662(var_16_bool); // 0x1ba NEW_2
	var_19_bool = var_16_bool == 0; // 0x1bc Not
	if(var_19_bool == 0) goto Label_451; // 0x1bd JumpB
	var_20_bool = 0; // 0x1be PushV
	func_487(var_20_bool); // 0x1bf NEW_2
	if(var_20_bool == 0) goto Label_451; // 0x1c1 JumpB
	var_15_bool = 1; // 0x1c2 MovB
	
Label_451:
	if(var_15_bool == 0) goto Label_457; // 0x1c3 JumpB
	var_21_object = Obj(); // 0x1c4 PushV
	func_803(var_21_object); // 0x1c5 NEW_2
	RemoveActor(var_21_object); // 0x1c7 Func
	
Label_457:
	return 0; // 0x1c9 Return
}


func_568()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x238 PushV
	WaitForAnimEnd(); // 0x239 Func
	var_44_bool = 0; // 0x23b PushV
	func_662(var_44_bool); // 0x23c NEW_2
	var_45_bool = var_44_bool == 0; // 0x23e Not
	if(var_45_bool == 0) goto Label_577; // 0x23f JumpB
	return 14; // 0x240 Return
	
Label_577:
	var_46_int = 0; // 0x241 PushV
	func_876(var_46_int); // 0x242 NEW_2
	var_37_int = var_46_int; // 0x243 Mov
	var_38_int = 0; // 0x245 MovI
	
Label_582:
	var_59_bool = 0; // 0x246 PushV
	var_59_bool = 0; // 0x247 MovB
	var_60_int = 5; // 0x248 PushI
	var_61_bool = var_38_int < var_60_int; // 0x249 LT
	if(var_61_bool == 0) goto Label_592; // 0x24a JumpB
	var_62_bool = 0; // 0x24b PushV
	func_662(var_62_bool); // 0x24c NEW_2
	if(var_62_bool == 0) goto Label_592; // 0x24e JumpB
	var_59_bool = 1; // 0x24f MovB
	
Label_592:
	if(var_59_bool == 0) goto Label_644; // 0x250 JumpB
	var_63_int = 3; // 0x251 PushI
	irand(var_39_int, var_63_int); // 0x252 Func
	var_64_int = 0; // 0x254 PushI
	var_65_bool = var_39_int == var_64_int; // 0x255 Eq
	if(var_65_bool == 0) goto Label_616; // 0x256 JumpB
	var_66_int = var_37_int; // 0x257 Push
	if(var_66_int == 0) goto Label_615; // 0x258 JumpB
	irand(var_40_int, var_37_int); // 0x259 Func
	var_67_string = "all"; // 0x25b PushS
	var_68_string = ""; var_69_int = 0; // 0x25c PushV
	var_69_int = var_40_int; // 0x25d Mov
	func_869(var_68_string, var_69_int); // 0x25e NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x260 Func
	WaitForAnimEnd(var_41_bool); // 0x262 Func
	var_70_bool = var_41_bool == 0; // 0x264 Not
	if(var_70_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_644; // 0x266 Jump
	
Label_644:
	ResetAAS(); // 0x284 Func
	return 14; // 0x286 Return
	
Label_615:
	goto Label_633; // 0x267 Jump
	
Label_633:
	var_71_bool = 0; // 0x279 PushV
	func_647(var_71_bool); // 0x27a NEW_2
	var_72_bool = var_71_bool == 0; // 0x27c Not
	if(var_72_bool == 0) goto Label_639; // 0x27d JumpB
	goto Label_644; // 0x27e Jump
	
Label_639:
	ResetAAS(); // 0x27f Func
	var_73_int = 1; // 0x281 PushI
	var_38_int = var_38_int + var_73_int; // 0x282 Add2
	goto Label_582; // 0x283 Jump
	
Label_616:
	var_74_int = 1; // 0x268 PushI
	var_75_bool = var_39_int == var_74_int; // 0x269 Eq
	if(var_75_bool == 0) goto Label_630; // 0x26a JumpB
	var_76_int = 4; // 0x26b PushI
	rand(var_42_float, var_76_int); // 0x26c Func
	var_77_int = 1; // 0x26e PushI
	var_78_int = var_42_float + var_77_int; // 0x26f Add
	Sleep(var_78_int, var_43_bool); // 0x270 Func
	var_79_bool = var_43_bool == 0; // 0x272 Not
	if(var_79_bool == 0) goto Label_629; // 0x273 JumpB
	goto Label_644; // 0x274 Jump
	
Label_629:
	goto Label_633; // 0x275 Jump
	
Label_630:
	var_80_int = var_38_int; // 0x276 Push
	if(var_80_int == 0) goto Label_633; // 0x277 JumpB
	goto Label_644; // 0x278 Jump
}


func_824()
{
	var_20_string = "ook12Littlegirl1"; // 0x339 PushS
	var_21_int = 1; // 0x33a PushI
	SetVariable(var_20_string, var_21_int); // 0x33b Func
	return 0; // 0x33d Return
}


func_830(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x33f PushV
	var_116_string = "ook12Littlegirl1"; // 0x340 MovS
	func_819(var_115_int, var_116_string); // 0x341 NEW_2
	var_119_int = 0; // 0x343 PushI
	var_120_bool = var_115_int == var_119_int; // 0x344 Eq
	if(var_120_bool == 0) goto Label_840; // 0x345 JumpB
	var_113_bool = 1; // 0x346 MovB
	return 0; // 0x347 Return
	
Label_840:
	var_113_bool = 0; // 0x348 MovB
	return 0; // 0x349 Return
}


func_842(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x34a PushV
	var_82_string = "branch"; // 0x34b PushS
	GetVariable(var_82_string, var_81_int); // 0x34c Func
	var_83_int = 0; // 0x34e PushI
	var_84_bool = var_81_int == var_83_int; // 0x34f Eq
	if(var_84_bool == 0) goto Label_852; // 0x350 JumpB
	var_79_int = 1; // 0x351 MovI
	return 2; // 0x352 Return
	
Label_852:
	var_85_int = 1; // 0x354 PushI
	var_86_bool = var_81_int == var_85_int; // 0x355 Eq
	if(var_86_bool == 0) goto Label_857; // 0x356 JumpB
	var_79_int = 2; // 0x357 MovI
	return 2; // 0x358 Return
	
Label_857:
	var_79_int = 3; // 0x359 MovI
	return 2; // 0x35a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_112; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_142(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 542769; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; var_114_object = Obj(); // 0x59 PushV
	var_114_object = var_1_object; // 0x5a MovT
	func_830(var_114_object); // 0x5b NEW_2
	if(var_113_bool == 0) goto Label_99; // 0x5d JumpB
	var_121_int = 542770; // 0x5e PushI
	var_122_int = 45193; // 0x5f PushI
	var_123_int = 45191; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	
Label_99:
	var_124_int = 542771; // 0x63 PushI
	var_125_int = -1; // 0x64 PushI
	var_126_int = 45192; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	var_127_int = 542790; // 0x68 PushI
	var_128_int = -1; // 0x69 PushI
	var_129_int = 45212; // 0x6a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_130_bool = 0; // 0x70 PushV
	func_867(var_130_bool); // 0x71 NEW_2
	if(var_130_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_131_string = var_3_string; // 0x76 PushT
	if(var_131_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_132_string = ""; // 0x79 PushV
	var_132_string = var_2_object; // 0x7a MovT
	func_754(var_132_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_143_string = "all"; // 0x7f PushS
	var_144_string = "idle"; // 0x80 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_145_string = var_3_string; // 0x85 PushT
	if(var_145_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_146_string = "all"; // 0x88 PushS
	var_147_string = "idle"; // 0x89 PushS
	PlayAnimation(var_146_string, var_147_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_859(var_76_int)
{
	var_76_int = 515561; // 0x35b MovI
	return 0; // 0x35c Return
}


func_861(var_75_int)
{
	var_75_int = 503346; // 0x35d MovI
	return 0; // 0x35e Return
}


func_863(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x35f MovS
	return 0; // 0x360 Return
}


func_736()
{
	var_150_bool = 0; var_151_bool = 0; // 0x2e0 PushV
	var_152_bool = 1; // 0x2e1 PushB
	CameraSwitchToNormal(var_152_bool); // 0x2e2 Func
	var_153_bool = 0; // 0x2e4 PushV
	func_867(var_153_bool); // 0x2e5 NEW_2
	if(var_153_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_753; // 0x2e8 Jump
	
Label_753:
	return 2; // 0x2f1 Return
	
Label_745:
	var_154_string = "head"; // 0x2e9 PushS
	HasAnimationTrack(var_151_bool, var_154_string); // 0x2ea Func
	var_155_bool = var_151_bool; // 0x2ec Push
	if(var_155_bool == 0) goto Label_753; // 0x2ed JumpB
	var_156_string = "head"; // 0x2ee PushS
	UnlookAsync(var_156_string); // 0x2ef Func
}


func_865(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x361 MovS
	return 0; // 0x362 Return
}


func_867(var_70_bool)
{
	var_70_bool = 0; // 0x363 MovB
	return 0; // 0x364 Return
}


func_869(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x365 PushV
	var_55_string = "idle"; // 0x366 MovS
	var_56_int = var_53_int; // 0x367 Push
	if(var_56_int == 0) goto Label_874; // 0x368 JumpB
	var_55_string = var_55_string + var_53_int; // 0x369 Add2
	
Label_874:
	var_52_string = var_55_string; // 0x36a Mov
	return 2; // 0x36b Return
}


func_487(var_18_bool)
{
	var_18_bool = 1; // 0x1e7 MovB
	return 0; // 0x1e8 Return
}


func_489(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1ea PushV
	func_662(var_23_bool); // 0x1eb NEW_2
	var_26_bool = var_23_bool == 0; // 0x1ed Not
	if(var_26_bool == 0) goto Label_496; // 0x1ee JumpB
	return 0; // 0x1ef Return
	
Label_496:
	var_27_string = "player"; // 0x1f0 PushS
	FindActor(var_17_bool, var_27_string); // 0x1f1 Func
	var_2_object = 0; // 0x1f3 TMovB
	var_3_string = 0; // 0x1f4 TMovB
	var_0_object = var_21_float; // 0x1f5 TMov
	var_1_object = var_22_float; // 0x1f6 TMov
	var_28_int = 10; // 0x1f7 PushI
	var_29_float = 1.0; // 0x1f8 PushF
	SetTimer(var_28_int, var_29_float); // 0x1f9 Func
	func_568(); // 0x1fc NEW_2
	var_81_bool = var_3_string == 0; // 0x1fe Not
	if(var_81_bool == 0) goto Label_515; // 0x1ff JumpB
	var_82_int = 10; // 0x200 PushI
	KillTimer(var_82_int); // 0x201 Func
	
Label_515:
	return 0; // 0x203 Return
}


func_876(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x36c PushV
	var_49_int = 0; // 0x36d MovI
	
Label_878:
	var_51_string = "all"; // 0x36e PushS
	var_52_string = ""; var_53_int = 0; // 0x36f PushV
	var_53_int = var_49_int; // 0x370 Mov
	func_869(var_52_string, var_53_int); // 0x371 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x373 Func
	var_57_bool = var_50_bool == 0; // 0x375 Not
	if(var_57_bool == 0) goto Label_888; // 0x376 JumpB
	goto Label_891; // 0x377 Jump
	
Label_891:
	var_46_int = var_49_int; // 0x37b Mov
	return 4; // 0x37c Return
	
Label_888:
	var_58_int = 1; // 0x378 PushI
	var_49_int = var_49_int + var_58_int; // 0x379 Add2
	goto Label_878; // 0x37a Jump
}


func_754(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x2f2 PushV
	lshHasAnimation(var_136_bool, var_132_string); // 0x2f3 Func
	var_139_bool = var_136_bool; // 0x2f5 Push
	if(var_139_bool == 0) goto Label_765; // 0x2f6 JumpB
	lshGetAnimTimes(var_132_string, var_137_float, var_138_float); // 0x2f7 Func
	var_140_bool = 0; // 0x2f9 PushB
	lshPlayAnimation(var_137_float, var_138_float, var_140_bool); // 0x2fa Func
	goto Label_769; // 0x2fc Jump
	
Label_769:
	return 6; // 0x301 Return
	
Label_765:
	var_141_string = "Can't find lsh animation : "; // 0x2fd PushS
	var_142_int = var_141_string + var_132_string; // 0x2fe Add
	Trace(var_142_int); // 0x2ff Func
}


