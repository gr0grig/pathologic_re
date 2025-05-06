task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 1; // 0xb4 PushI
	if(var_15_int == 0) goto Label_405; // 0xb5 JumpB
	func_1297(); // 0xb7 NEW_2
	var_17_int = 19925; // 0xb9 PushI
	var_18_bool = var_14_bool == var_17_int; // 0xba Eq
	if(var_18_bool == 0) goto Label_193; // 0xbb JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xbc PushV
	var_19_object = var_1_object; // 0xbd MovT
	var_20_object = var_0_object; // 0xbe MovT
	func_1466(); // 0xbf NEW_2
	
Label_193:
	var_27_int = 19761; // 0xc1 PushI
	var_28_bool = var_14_bool == var_27_int; // 0xc2 Eq
	if(var_28_bool == 0) goto Label_201; // 0xc3 JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0xc4 PushV
	var_29_object = var_1_object; // 0xc5 MovT
	var_30_object = var_0_object; // 0xc6 MovT
	func_1466(); // 0xc7 NEW_2
	
Label_201:
	var_31_int = 19931; // 0xc9 PushI
	var_32_bool = var_14_bool == var_31_int; // 0xca Eq
	if(var_32_bool == 0) goto Label_209; // 0xcb JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0xcc PushV
	var_33_object = var_1_object; // 0xcd MovT
	var_34_object = var_0_object; // 0xce MovT
	func_1466(); // 0xcf NEW_2
	
Label_209:
	var_35_int = 20903; // 0xd1 PushI
	var_36_bool = var_14_bool == var_35_int; // 0xd2 Eq
	if(var_36_bool == 0) goto Label_217; // 0xd3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xd4 PushV
	var_37_object = var_1_object; // 0xd5 MovT
	var_38_object = var_0_object; // 0xd6 MovT
	func_1466(); // 0xd7 NEW_2
	
Label_217:
	var_39_int = 19760; // 0xd9 PushI
	var_40_bool = var_13_cvector == var_39_int; // 0xda Eq
	if(var_40_bool == 0) goto Label_265; // 0xdb JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0xdc PushV
	var_42_object = var_1_object; // 0xdd MovT
	func_1479(var_42_object); // 0xde NEW_2
	if(var_41_bool == 0) goto Label_245; // 0xe0 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xe1 PushV
	var_49_object = var_1_object; // 0xe2 MovT
	var_50_object = var_0_object; // 0xe3 MovT
	func_1473(); // 0xe4 NEW_2
	var_53_string = ""; // 0xe6 PushV
	var_53_string = "Neutral"; // 0xe7 MovS
	func_157(var_14_bool, var_53_string); // 0xe8 NEW_2
	var_70_int = 518668; // 0xea PushI
	SetMessage(var_70_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_71_int = 518670; // 0xef PushI
	var_72_int = 19916; // 0xf0 PushI
	var_73_int = 19762; // 0xf1 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_74_string = ""; // 0xf5 PushV
	var_74_string = "Neutral"; // 0xf6 MovS
	func_157(var_14_bool, var_74_string); // 0xf7 NEW_2
	var_75_int = 519748; // 0xf9 PushI
	SetMessage(var_75_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_76_int = 519749; // 0xfe PushI
	var_77_int = -1; // 0xff PushI
	var_78_int = 20903; // 0x100 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x101 TObjFunc
	var_79_int = 519750; // 0x103 PushI
	var_80_int = -1; // 0x104 PushI
	var_81_int = 20904; // 0x105 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_82_int = 19916; // 0x109 PushI
	var_83_bool = var_13_cvector == var_82_int; // 0x10a Eq
	if(var_83_bool == 0) goto Label_288; // 0x10b JumpB
	var_84_string = ""; // 0x10c PushV
	var_84_string = "Neutral"; // 0x10d MovS
	func_157(var_14_bool, var_84_string); // 0x10e NEW_2
	var_85_int = 518811; // 0x110 PushI
	SetMessage(var_85_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_86_int = 518812; // 0x115 PushI
	var_87_int = 19918; // 0x116 PushI
	var_88_int = 19917; // 0x117 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x118 TObjFunc
	var_89_int = 518818; // 0x11a PushI
	var_90_int = 19926; // 0x11b PushI
	var_91_int = 19923; // 0x11c PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_92_int = 19926; // 0x120 PushI
	var_93_bool = var_13_cvector == var_92_int; // 0x121 Eq
	if(var_93_bool == 0) goto Label_306; // 0x122 JumpB
	var_94_string = ""; // 0x123 PushV
	var_94_string = "Neutral"; // 0x124 MovS
	func_157(var_14_bool, var_94_string); // 0x125 NEW_2
	var_95_int = 518821; // 0x127 PushI
	SetMessage(var_95_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_96_int = 518822; // 0x12c PushI
	var_97_int = 19928; // 0x12d PushI
	var_98_int = 19927; // 0x12e PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x12f TObjFunc
	return 0; // 0x131 Return
	
Label_306:
	var_99_int = 19928; // 0x132 PushI
	var_100_bool = var_13_cvector == var_99_int; // 0x133 Eq
	if(var_100_bool == 0) goto Label_324; // 0x134 JumpB
	var_101_string = ""; // 0x135 PushV
	var_101_string = "Neutral"; // 0x136 MovS
	func_157(var_14_bool, var_101_string); // 0x137 NEW_2
	var_102_int = 518823; // 0x139 PushI
	SetMessage(var_102_int); // 0x13a TObjFunc
	ClearReplies(); // 0x13c TObjFunc
	var_103_int = 518824; // 0x13e PushI
	var_104_int = 19930; // 0x13f PushI
	var_105_int = 19929; // 0x140 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_106_int = 19930; // 0x144 PushI
	var_107_bool = var_13_cvector == var_106_int; // 0x145 Eq
	if(var_107_bool == 0) goto Label_347; // 0x146 JumpB
	var_108_string = ""; // 0x147 PushV
	var_108_string = "Neutral"; // 0x148 MovS
	func_157(var_14_bool, var_108_string); // 0x149 NEW_2
	var_109_int = 518825; // 0x14b PushI
	SetMessage(var_109_int); // 0x14c TObjFunc
	ClearReplies(); // 0x14e TObjFunc
	var_110_int = 518826; // 0x150 PushI
	var_111_int = -1; // 0x151 PushI
	var_112_int = 19931; // 0x152 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x153 TObjFunc
	var_113_int = 518827; // 0x155 PushI
	var_114_int = -1; // 0x156 PushI
	var_115_int = 19932; // 0x157 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_116_int = 19918; // 0x15b PushI
	var_117_bool = var_13_cvector == var_116_int; // 0x15c Eq
	if(var_117_bool == 0) goto Label_370; // 0x15d JumpB
	var_118_string = ""; // 0x15e PushV
	var_118_string = "Neutral"; // 0x15f MovS
	func_157(var_14_bool, var_118_string); // 0x160 NEW_2
	var_119_int = 518813; // 0x162 PushI
	SetMessage(var_119_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_120_int = 518815; // 0x167 PushI
	var_121_int = 19921; // 0x168 PushI
	var_122_int = 19920; // 0x169 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x16a TObjFunc
	var_123_int = 518669; // 0x16c PushI
	var_124_int = -1; // 0x16d PushI
	var_125_int = 19761; // 0x16e PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_126_int = 19921; // 0x172 PushI
	var_127_bool = var_13_cvector == var_126_int; // 0x173 Eq
	if(var_127_bool == 0) goto Label_393; // 0x174 JumpB
	var_128_string = ""; // 0x175 PushV
	var_128_string = "Neutral"; // 0x176 MovS
	func_157(var_14_bool, var_128_string); // 0x177 NEW_2
	var_129_int = 518816; // 0x179 PushI
	SetMessage(var_129_int); // 0x17a TObjFunc
	ClearReplies(); // 0x17c TObjFunc
	var_130_int = 518819; // 0x17e PushI
	var_131_int = -1; // 0x17f PushI
	var_132_int = 19924; // 0x180 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x181 TObjFunc
	var_133_int = 518820; // 0x183 PushI
	var_134_int = -1; // 0x184 PushI
	var_135_int = 19925; // 0x185 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_3_string = 1; // 0x189 TMovB
	var_136_bool = 0; // 0x18a PushV
	func_1535(var_136_bool); // 0x18b NEW_2
	if(var_136_bool == 0) goto Label_401; // 0x18d JumpB
	lshStopAnimation(); // 0x18e Func
	goto Label_403; // 0x190 Jump
	
Label_403:
	return 0; // 0x193 Return
	
Label_401:
	StopAnimation(); // 0x191 Func
	
Label_405:
	return 0; // 0x195 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_515(var_12_cvector, var_13_bool); // 0x1a2 NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x1a4 PushV
	var_18_object = var_13_bool; // 0x1a5 Mov
	TaskCall(0); // 0x1a6 TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x1a7 NEW_2
	TaskReturn(); // 0x1a8 TaskReturn
	return 0; // 0x1aa Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_515(var_12_cvector, var_13_bool); // 0x1ad NEW_2
	TaskCall(3); // 0x1b0 TaskCall
	func_615(); // 0x1b1 NEW_2
	TaskReturn(); // 0x1b2 TaskReturn
	return 0; // 0x1b4 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_string = "retreat"; // 0x1b6 PushS
	var_15_bool = var_13_bool == var_14_string; // 0x1b7 Eq
	if(var_15_bool == 0) goto Label_449; // 0x1b8 JumpB
	func_515(var_12_cvector, var_13_bool); // 0x1ba NEW_2
	TaskCall(3); // 0x1bd TaskCall
	func_615(); // 0x1be NEW_2
	TaskReturn(); // 0x1bf TaskReturn
	
Label_449:
	return 0; // 0x1c1 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 10; // 0x1ed PushI
	var_15_bool = var_13_bool == var_14_int; // 0x1ee Eq
	if(var_15_bool == 0) goto Label_514; // 0x1ef JumpB
	var_16_bool = 0; // 0x1f0 PushV
	func_477(var_11_object, var_12_cvector, var_13_bool, var_16_bool); // 0x1f1 NEW_2
	if(var_16_bool == 0) goto Label_508; // 0x1f3 JumpB
	var_29_bool = var_2_object == 0; // 0x1f4 Not
	if(var_29_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_30_object = Obj(); // 0x1f6 PushV
	var_30_object = var_4_bool; // 0x1f7 MovT
	func_1286(var_30_object); // 0x1f8 NEW_2
	var_2_object = 1; // 0x1fa TMovB
	
Label_507:
	goto Label_514; // 0x1fb Jump
	
Label_514:
	return 0; // 0x202 Return
	
Label_508:
	var_37_object = var_2_object; // 0x1fc PushT
	if(var_37_object == 0) goto Label_514; // 0x1fd JumpB
	var_38_string = "head"; // 0x1fe PushS
	UnlookAsync(var_38_string); // 0x1ff Func
	var_2_object = 0; // 0x201 TMovB
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x2e3 PushV
	var_22_int = 120; // 0x2e4 PushI
	var_23_bool = var_13_int != var_22_int; // 0x2e5 Neq
	if(var_23_bool == 0) goto Label_744; // 0x2e6 JumpB
	return 8; // 0x2e7 Return
	
Label_744:
	var_24_bool = var_0_object == 0; // 0x2e8 NullEq
	if(var_24_bool == 0) goto Label_753; // 0x2e9 JumpB
	Stop(); // 0x2ea Func
	var_25_int = 1; // 0x2ec PushI
	KillTimer(var_25_int); // 0x2ed Func
	var_2_object = 1; // 0x2ef TMovB
	goto Label_790; // 0x2f0 Jump
	
Label_790:
	return 8; // 0x316 Return
	
Label_753:
	GetDirection(var_18_cvector); // 0x2f1 Func
	var_26_float = 7000.0; // 0x2f3 PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x2f4 Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x2f6 PushV
	var_28_float = 1.74533; // 0x2f7 MovF
	func_636(var_27_cvector, var_28_float); // 0x2f8 NEW_2
	var_20_cvector = var_27_cvector; // 0x2f9 Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x2fb Or2
	var_57_bool = 0; // 0x2fc PushV
	var_57_bool = 0; // 0x2fd MovB
	var_58_float = 2500.0; // 0x2fe PushF
	var_59_bool = var_21_float >= var_58_float; // 0x2ff GE
	if(var_59_bool == 0) goto Label_783; // 0x300 JumpB
	var_60_bool = 0; // 0x301 PushV
	var_60_bool = 1; // 0x302 MovB
	var_61_float = var_19_float * var_19_float; // 0x303 Mult
	var_62_float = 2.25; // 0x304 PushF
	var_63_float = var_61_float * var_62_float; // 0x305 Mult
	var_64_bool = var_21_float >= var_63_float; // 0x306 GE
	if(var_64_bool == 0) goto Label_781; // 0x307 JumpB
	var_65_bool = 0; // 0x308 PushV
	func_807(var_60_bool, var_65_bool); // 0x309 NEW_2
	if(var_65_bool == 0) goto Label_781; // 0x30b JumpB
	var_60_bool = 0; // 0x30c MovB
	
Label_781:
	if(var_60_bool == 0) goto Label_783; // 0x30d JumpB
	var_57_bool = 1; // 0x30e MovB
	
Label_783:
	if(var_57_bool == 0) goto Label_790; // 0x30f JumpB
	Stop(); // 0x310 Func
	var_85_cvector = CVector(0,0,0); // 0x312 PushV
	func_971(var_85_cvector); // 0x313 NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x315 Add2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_791(var_13_object); // 0x320 NEW_2
	var_15_object = Obj(); // 0x322 PushV
	var_15_object = var_13_object; // 0x323 Mov
	func_1598(); // 0x324 NEW_2
	return 0; // 0x326 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x346 PushV
	IsOverrideActive(var_15_bool); // 0x347 Func
	var_16_bool = var_15_bool == 0; // 0x349 Not
	if(var_16_bool == 0) goto Label_847; // 0x34a JumpB
	var_17_object = Obj(); // 0x34b PushV
	var_17_object = var_13_object; // 0x34c Mov
	func_1514(var_17_object); // 0x34d NEW_2
	
Label_847:
	return 2; // 0x34f Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0; // 0x3c6 Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	return 0; // 0x3c8 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0; // 0x3ca Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x620 PushV
	var_17_object = var_13_object; // 0x621 Mov
	var_18_int = var_14_int; // 0x622 Mov
	var_19_float = var_15_float; // 0x623 Mov
	func_1081(var_17_object, var_18_int, var_19_float); // 0x624 NEW_2
	return 0; // 0x626 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x628 PushV
	var_19_object = var_13_object; // 0x629 Mov
	var_20_int = var_14_int; // 0x62a Mov
	var_21_float = var_15_float; // 0x62b Mov
	var_22_cvector = var_17_cvector; // 0x62c Mov
	var_23_cvector = var_18_cvector; // 0x62d Mov
	func_1149(var_21_float, var_22_cvector, var_23_cvector); // 0x62e NEW_2
	return 0; // 0x630 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0; // 0x631 PushV
	var_17_string = "health"; // 0x632 PushS
	var_18_bool = var_14_string == var_17_string; // 0x633 Eq
	if(var_18_bool == 0) goto Label_1597; // 0x634 JumpB
	var_19_string = "health"; // 0x635 PushS
	GetProperty(var_19_string, var_16_float); // 0x636 Func
	var_20_int = 0; // 0x638 PushI
	var_21_bool = var_16_float <= var_20_int; // 0x639 LE
	if(var_21_bool == 0) goto Label_1597; // 0x63a JumpB
	SignalDeath(var_13_object); // 0x63b Func
	
Label_1597:
	return 2; // 0x63d Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj(); // 0x63f PushV
	var_14_object = var_13_object; // 0x640 Mov
	func_1537(var_14_object); // 0x641 NEW_2
	return 0; // 0x643 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_406:
	var_13_float = 0; var_14_float = 0; // 0x196 PushV
	var_13_float = 300; // 0x197 MovI
	var_14_float = 100; // 0x198 MovI
	func_450(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_float, var_14_float); // 0x199 NEW_2
	var_75_int = 3; // 0x19b PushI
	Sleep(var_75_int); // 0x19c Func
	goto Label_406; // 0x19e Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_1168(var_29_object, var_30_float); // 0x5 NEW_2
	var_75_bool = var_28_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_1529(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_1527(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_1531(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_1533(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_1491(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_88_bool = var_25_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_18_object; // 0x30 Mov
	var_90_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_155_bool = var_27_bool == 0; // 0x38 Not
	if(var_155_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_156_object = Obj(); // 0x3f PushV
	var_156_object = var_18_object; // 0x40 Mov
	func_1237(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1537(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x601 PushV
	GetScene(var_16_object); // 0x602 Func
	var_17_object = Obj(); // 0x604 PushV
	func_1345(var_17_object); // 0x605 NEW_2
	RemoveStationaryActor(var_17_object); // 0x607 ObjFunc
	var_20_bool = 0; var_21_object = Obj(); // 0x609 PushV
	var_21_object = var_14_object; // 0x60a Mov
	func_998(var_20_bool, var_21_object); // 0x60b NEW_2
	if(var_20_bool == 0) goto Label_1555; // 0x60d JumpB
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0; // 0x60e PushV
	var_25_object = var_14_object; // 0x60f Mov
	var_26_float = -0.1; // 0x610 MovF
	func_1385(var_24_bool, var_25_object, var_26_float); // 0x611 NEW_2
	
Label_1555:
	var_62_string = "b5q01VeraDead"; // 0x613 PushS
	var_63_bool = 1; // 0x614 PushB
	SetVariable(var_62_string, var_63_bool); // 0x615 Func
	var_64_object = Obj(); // 0x617 PushV
	var_64_object = var_14_object; // 0x618 Mov
	TaskCall(4); // 0x619 TaskCall
	func_823(var_64_object); // 0x61a NEW_2
	TaskReturn(); // 0x61b TaskReturn
	return 2; // 0x61d Return
}


func_515(var_2_object, var_3_string)
{
	func_610(); // 0x204 NEW_2
	var_16_int = 10; // 0x206 PushI
	KillTimer(var_16_int); // 0x207 Func
	var_17_object = var_2_object; // 0x209 PushT
	if(var_17_object == 0) goto Label_527; // 0x20a JumpB
	var_18_string = "head"; // 0x20b PushS
	UnlookAsync(var_18_string); // 0x20c Func
	var_2_object = 0; // 0x20e TMovB
	
Label_527:
	var_3_string = 1; // 0x20f TMovB
	return 0; // 0x210 Return
}


func_1527(var_77_int)
{
	var_77_int = 515593; // 0x5f7 MovI
	return 0; // 0x5f8 Return
}


func_1286(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x506 PushV
	GetEyesHeight(var_33_float); // 0x507 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x509 MovV
	var_35_float = GetByIndex(var_34_cvector, 1); // 0x50a PushE
	var_35_float = var_33_float; // 0x50b Mov
	SetByIndex(var_34_cvector, 1) = var_35_float; // 0x50c PopE
	var_36_string = "head"; // 0x50d PushS
	LookAsync(var_30_object, var_36_string, var_34_cvector); // 0x50e Func
	return 4; // 0x510 Return
}


func_1163(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x48b PushV
	IsLoaded(var_17_bool); // 0x48c Func
	var_15_bool = var_17_bool; // 0x48e Mov
	return 2; // 0x48f Return
}


func_1420(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x58c PushV
	CreateFloatVector(var_33_object); // 0x58d Func
	add(var_31_float); // 0x58f ObjFunc
	var_34_int = 16; // 0x591 PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x592 Func
	return 2; // 0x594 Return
}


func_1037(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; // 0x40d PushV
	var_45_bool = var_30_object == 0; // 0x40e NullEq
	if(var_45_bool == 0) goto Label_1041; // 0x40f JumpB
	return 14; // 0x410 Return
	
Label_1041:
	IsDead(var_38_bool); // 0x411 Func
	var_46_bool = var_38_bool; // 0x413 Push
	if(var_46_bool == 0) goto Label_1046; // 0x414 JumpB
	return 14; // 0x415 Return
	
Label_1046:
	GetSecondaryAnimationType(var_39_int); // 0x416 Func
	var_47_int = 0; // 0x418 PushI
	var_48_bool = var_39_int < var_47_int; // 0x419 LT
	if(var_48_bool == 0) goto Label_1052; // 0x41a JumpB
	return 14; // 0x41b Return
	
Label_1052:
	GetPosition(var_40_cvector); // 0x41c ObjFunc
	GetPosition(var_41_cvector); // 0x41e Func
	GetDirection(var_42_cvector); // 0x420 Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x422 Sub2
	var_49_float = GetByIndex(var_43_cvector, 0); // 0x423 PushE
	var_50_float = GetByIndex(var_42_cvector, 0); // 0x424 PushE
	var_51_float = var_49_float * var_50_float; // 0x425 Mult
	var_52_float = GetByIndex(var_43_cvector, 2); // 0x426 PushE
	var_53_float = GetByIndex(var_42_cvector, 2); // 0x427 PushE
	var_54_float = var_52_float * var_53_float; // 0x428 Mult
	var_55_int = var_51_float + var_54_float; // 0x429 Add
	var_56_int = 0; // 0x42a PushI
	var_57_bool = var_55_int >= var_56_int; // 0x42b GE
	if(var_57_bool == 0) goto Label_1071; // 0x42c JumpB
	var_44_string = "fhit"; // 0x42d MovS
	goto Label_1072; // 0x42e Jump
	
Label_1072:
	var_58_string = "hit_react"; // 0x430 PushS
	var_59_string = "1"; // 0x431 PushS
	var_60_int = var_44_string + var_59_string; // 0x432 Add
	var_61_string = "2"; // 0x433 PushS
	var_62_int = var_44_string + var_61_string; // 0x434 Add
	var_63_int = -10; // 0x435 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x436 Func
	return 14; // 0x438 Return
	
Label_1071:
	var_44_string = "bhit"; // 0x42f MovS
}


func_1168(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x490 PushV
	GetPosition(var_41_cvector); // 0x491 ObjFunc
	GetEyesHeight(var_40_float); // 0x493 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x495 PushE
	var_49_float = var_49_float + var_40_float; // 0x496 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x497 PopE
	GetPosition(var_42_cvector); // 0x498 Func
	GetEyesHeight(var_40_float); // 0x49a Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x49c PushE
	var_50_float = var_50_float + var_40_float; // 0x49d Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x49e PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x49f Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x4a0 PushE
	var_51_float = 0; // 0x4a1 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x4a2 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x4a3 Or
	var_53_float = sqrt(var_52_int); // 0x4a4 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x4a5 Div2
	var_44_cvector = -var_43_cvector; // 0x4a6 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x4a7 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x4a8 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x4a9 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x4aa Xor2
	func_1351(var_55_cvector, var_56_cvector); // 0x4ab NEW_2
	var_63_int = 25; // 0x4ad PushI
	var_64_float = var_55_cvector * var_63_int; // 0x4ae Mult
	var_65_int = var_54_float + var_64_float; // 0x4af Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x4b0 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x4b1 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x4b2 Add2
	IsOverrideActive(var_47_bool); // 0x4b3 Func
	var_67_bool = var_47_bool; // 0x4b5 Push
	if(var_67_bool == 0) goto Label_1209; // 0x4b6 JumpB
	var_28_bool = 0; // 0x4b7 MovB
	return 18; // 0x4b8 Return
	
Label_1209:
	StopWorld(); // 0x4b9 Func
	var_68_bool = 1; // 0x4bb PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x4bc Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x4be PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x4bf PushE
	Rotate(var_69_float, var_70_float); // 0x4c0 Func
	var_71_bool = 0; // 0x4c2 PushV
	func_1535(var_71_bool); // 0x4c3 NEW_2
	if(var_71_bool == 0) goto Label_1223; // 0x4c5 JumpB
	goto Label_1231; // 0x4c6 Jump
	
Label_1231:
	CameraWaitForPlayFinish(); // 0x4cf Func
	ResumeWorld(); // 0x4d1 Func
	var_28_bool = 1; // 0x4d3 MovB
	return 18; // 0x4d4 Return
	
Label_1223:
	var_72_string = "head"; // 0x4c7 PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x4c8 Func
	var_73_bool = var_48_bool; // 0x4ca Push
	if(var_73_bool == 0) goto Label_1231; // 0x4cb JumpB
	var_74_string = "head"; // 0x4cc PushS
	LookAsyncCamera(var_74_string); // 0x4cd Func
}


func_1297()
{
	var_16_bool = 0; // 0x511 PushV
	func_1535(var_16_bool); // 0x512 NEW_2
	if(var_16_bool == 0) goto Label_1303; // 0x514 JumpB
	lshStopSpeech(); // 0x515 Func
	
Label_1303:
	return 0; // 0x517 Return
}


func_529()
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; // 0x211 PushV
	WaitForAnimEnd(); // 0x212 Func
	var_36_bool = 0; // 0x214 PushV
	func_1163(var_36_bool); // 0x215 NEW_2
	var_37_bool = var_36_bool == 0; // 0x217 Not
	if(var_37_bool == 0) goto Label_538; // 0x218 JumpB
	return 14; // 0x219 Return
	
Label_538:
	var_38_int = 0; // 0x21a PushV
	func_1449(var_38_int); // 0x21b NEW_2
	var_29_int = var_38_int; // 0x21c Mov
	var_30_int = 0; // 0x21e MovI
	
Label_543:
	var_51_bool = 0; // 0x21f PushV
	var_51_bool = 0; // 0x220 MovB
	var_52_int = 5; // 0x221 PushI
	var_53_bool = var_30_int < var_52_int; // 0x222 LT
	if(var_53_bool == 0) goto Label_553; // 0x223 JumpB
	var_54_bool = 0; // 0x224 PushV
	func_1163(var_54_bool); // 0x225 NEW_2
	if(var_54_bool == 0) goto Label_553; // 0x227 JumpB
	var_51_bool = 1; // 0x228 MovB
	
Label_553:
	if(var_51_bool == 0) goto Label_605; // 0x229 JumpB
	var_55_int = 3; // 0x22a PushI
	irand(var_31_int, var_55_int); // 0x22b Func
	var_56_int = 0; // 0x22d PushI
	var_57_bool = var_31_int == var_56_int; // 0x22e Eq
	if(var_57_bool == 0) goto Label_577; // 0x22f JumpB
	var_58_int = var_29_int; // 0x230 Push
	if(var_58_int == 0) goto Label_576; // 0x231 JumpB
	irand(var_32_int, var_29_int); // 0x232 Func
	var_59_string = "all"; // 0x234 PushS
	var_60_string = ""; var_61_int = 0; // 0x235 PushV
	var_61_int = var_32_int; // 0x236 Mov
	func_1442(var_60_string, var_61_int); // 0x237 NEW_2
	PlayAnimation(var_59_string, var_60_string); // 0x239 Func
	WaitForAnimEnd(var_33_bool); // 0x23b Func
	var_62_bool = var_33_bool == 0; // 0x23d Not
	if(var_62_bool == 0) goto Label_576; // 0x23e JumpB
	goto Label_605; // 0x23f Jump
	
Label_605:
	ResetAAS(); // 0x25d Func
	return 14; // 0x25f Return
	
Label_576:
	goto Label_594; // 0x240 Jump
	
Label_594:
	var_63_bool = 0; // 0x252 PushV
	func_608(var_63_bool); // 0x253 NEW_2
	var_64_bool = var_63_bool == 0; // 0x255 Not
	if(var_64_bool == 0) goto Label_600; // 0x256 JumpB
	goto Label_605; // 0x257 Jump
	
Label_600:
	ResetAAS(); // 0x258 Func
	var_65_int = 1; // 0x25a PushI
	var_30_int = var_30_int + var_65_int; // 0x25b Add2
	goto Label_543; // 0x25c Jump
	
Label_577:
	var_66_int = 1; // 0x241 PushI
	var_67_bool = var_31_int == var_66_int; // 0x242 Eq
	if(var_67_bool == 0) goto Label_591; // 0x243 JumpB
	var_68_int = 4; // 0x244 PushI
	rand(var_34_float, var_68_int); // 0x245 Func
	var_69_int = 1; // 0x247 PushI
	var_70_int = var_34_float + var_69_int; // 0x248 Add
	Sleep(var_70_int, var_35_bool); // 0x249 Func
	var_71_bool = var_35_bool == 0; // 0x24b Not
	if(var_71_bool == 0) goto Label_590; // 0x24c JumpB
	goto Label_605; // 0x24d Jump
	
Label_590:
	goto Label_594; // 0x24e Jump
	
Label_591:
	var_72_int = var_30_int; // 0x24f Push
	if(var_72_int == 0) goto Label_594; // 0x250 JumpB
	goto Label_605; // 0x251 Jump
}


func_1149(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x47d PushV
	GetScene(var_26_object); // 0x47e Func
	var_28_string = "scripted"; // 0x480 PushS
	var_29_string = "blood_dir.xml"; // 0x481 PushS
	AddActorByType(var_27_object, var_28_string, var_26_object, var_22_cvector, var_23_cvector, var_29_string); // 0x482 Func
	var_30_object = Obj(); // 0x484 PushV
	var_30_object = var_19_object; // 0x485 Mov
	func_1037(var_30_object); // 0x486 NEW_2
	return 4; // 0x488 Return
}


func_1430(var_21_bool, var_22_string, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x596 PushV
	FindActor(var_25_object, var_22_string); // 0x597 Func
	var_26_bool = var_25_object == 0; // 0x599 NullEq
	if(var_26_bool == 0) goto Label_1437; // 0x59a JumpB
	var_21_bool = 0; // 0x59b MovB
	return 2; // 0x59c Return
	
Label_1437:
	Trigger(var_25_object, var_23_string); // 0x59d Func
	var_21_bool = 1; // 0x59f MovB
	return 2; // 0x5a0 Return
}


func_791(var_2_object)
{
	Stop(); // 0x317 Func
	var_14_int = 120; // 0x319 PushI
	KillTimer(var_14_int); // 0x31a Func
	var_2_object = 1; // 0x31c TMovB
	return 0; // 0x31d Return
}


func_1304(var_88_string)
{
	var_89_bool = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0x518 PushV
	IsExisting3DSound(var_97_bool, var_88_string); // 0x519 Func
	var_105_bool = var_97_bool == 0; // 0x51b Not
	if(var_105_bool == 0) goto Label_1329; // 0x51c JumpB
	var_98_int = 0; // 0x51d MovI
	
Label_1310:
	var_106_int = 1; // 0x51e PushI
	var_107_int = var_98_int + var_106_int; // 0x51f Add
	var_108_int = var_88_string + var_107_int; // 0x520 Add
	IsExisting3DSound(var_99_bool, var_108_int); // 0x521 Func
	var_109_bool = var_99_bool == 0; // 0x523 Not
	if(var_109_bool == 0) goto Label_1318; // 0x524 JumpB
	goto Label_1321; // 0x525 Jump
	
Label_1321:
	var_110_bool = var_98_int == 0; // 0x529 Not
	if(var_110_bool == 0) goto Label_1324; // 0x52a JumpB
	return 16; // 0x52b Return
	
Label_1324:
	irand(var_100_int, var_98_int); // 0x52c Func
	var_111_int = 1; // 0x52e PushI
	var_112_int = var_100_int + var_111_int; // 0x52f Add
	var_88_string = var_88_string + var_112_int; // 0x530 Add2
	
Label_1329:
	Is3DSoundLoaded(var_101_bool, var_88_string); // 0x531 Func
	var_113_bool = var_101_bool; // 0x533 Push
	if(var_113_bool == 0) goto Label_1344; // 0x534 JumpB
	GetEyesHeight(var_102_float); // 0x535 Func
	GetDirection(var_103_cvector); // 0x537 Func
	var_114_int = 50; // 0x539 PushI
	var_104_cvector = var_103_cvector * var_114_int; // 0x53a Mult2
	var_115_float = GetByIndex(var_104_cvector, 1); // 0x53b PushE
	var_115_float = var_115_float + var_102_float; // 0x53c Add2
	SetByIndex(var_104_cvector, 1) = var_115_float; // 0x53d PopE
	PlayGlobalSound(var_88_string, var_104_cvector); // 0x53e Func
	
Label_1344:
	return 16; // 0x540 Return
	
Label_1318:
	var_116_int = 1; // 0x526 PushI
	var_98_int = var_98_int + var_116_int; // 0x527 Add2
	goto Label_1310; // 0x528 Jump
}


func_666(var_0_object, var_1_object, var_2_object, var_27_object)
{
	var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; // 0x29a PushV
	var_0_object = var_27_object; // 0x29b TMov
	var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x29c PushV
	var_43_float = 1.74533; // 0x29d MovF
	func_636(var_42_cvector, var_43_float); // 0x29e NEW_2
	var_37_cvector = var_42_cvector; // 0x29f Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x2a1 Or2
	var_72_float = 2500.0; // 0x2a2 PushF
	var_73_bool = var_38_float < var_72_float; // 0x2a3 LT
	if(var_73_bool == 0) goto Label_695; // 0x2a4 JumpB
	var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x2a5 PushV
	var_75_float = 2.61799; // 0x2a6 MovF
	func_636(var_74_cvector, var_75_float); // 0x2a7 NEW_2
	var_37_cvector = var_74_cvector; // 0x2a8 Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x2aa Or2
	var_76_float = 2500.0; // 0x2ab PushF
	var_77_bool = var_38_float < var_76_float; // 0x2ac LT
	if(var_77_bool == 0) goto Label_695; // 0x2ad JumpB
	var_78_string = "Can't retreat, distance: "; // 0x2ae PushS
	var_79_float = sqrt(var_38_float); // 0x2af Sqrt
	var_80_int = var_78_string + var_79_float; // 0x2b0 Add
	Trace(var_80_int); // 0x2b1 Func
	var_81_float = 0.5; // 0x2b3 PushF
	Sleep(var_81_float); // 0x2b4 Func
	return 10; // 0x2b6 Return
	
Label_695:
	var_82_float = GetByIndex(var_37_cvector, 0); // 0x2b7 PushE
	var_83_float = GetByIndex(var_37_cvector, 2); // 0x2b8 PushE
	Rotate(var_82_float, var_83_float); // 0x2b9 Func
	var_84_cvector = CVector(0,0,0); // 0x2bb PushV
	func_971(var_84_cvector); // 0x2bc NEW_2
	var_1_object = var_84_cvector + var_37_cvector; // 0x2be Add2
	var_87_int = 120; // 0x2bf PushI
	var_88_float = 0.5; // 0x2c0 PushF
	SetTimer(var_87_int, var_88_float); // 0x2c1 Func
	var_2_object = 0; // 0x2c3 TMovB
	
Label_708:
	var_89_int = 1; // 0x2c4 PushI
	MovePoint(var_89_int, var_89_int, var_39_bool); // 0x2c5 Func
	var_90_bool = var_39_bool; // 0x2c7 Push
	if(var_90_bool == 0) goto Label_736; // 0x2c8 JumpB
	var_91_bool = var_0_object == 0; // 0x2c9 NullEq
	if(var_91_bool == 0) goto Label_717; // 0x2ca JumpB
	goto Label_738; // 0x2cb Jump
	
Label_738:
	return 10; // 0x2e2 Return
	
Label_717:
	var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x2cd PushV
	var_93_float = 2.61799; // 0x2ce MovF
	func_636(var_92_cvector, var_93_float); // 0x2cf NEW_2
	var_40_cvector = var_92_cvector; // 0x2d0 Mov
	var_41_float = var_40_cvector | var_40_cvector; // 0x2d2 Or2
	var_94_float = 2500.0; // 0x2d3 PushF
	var_95_bool = var_41_float >= var_94_float; // 0x2d4 GE
	if(var_95_bool == 0) goto Label_735; // 0x2d5 JumpB
	var_96_cvector = CVector(0,0,0); // 0x2d6 PushV
	func_971(var_96_cvector); // 0x2d7 NEW_2
	var_1_object = var_96_cvector + var_40_cvector; // 0x2d9 Add2
	var_97_int = 120; // 0x2da PushI
	var_98_float = 0.5; // 0x2db PushF
	SetTimer(var_97_int, var_98_float); // 0x2dc Func
	goto Label_736; // 0x2de Jump
	
Label_736:
	var_99_bool = var_2_object == 0; // 0x2e0 Not
	if(var_99_bool == 0) goto Label_708; // 0x2e1 JumpB
	
Label_735:
	goto Label_738; // 0x2df Jump
}


func_157(var_2_object, var_108_string)
{
	var_109_bool = 0; // 0x9e PushV
	func_1535(var_109_bool); // 0x9f NEW_2
	var_110_bool = var_109_bool == 0; // 0xa1 Not
	if(var_110_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_111_bool = var_108_string == var_2_object; // 0xa4 Eq
	if(var_111_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_112_string = ""; var_113_bool = 0; // 0xa7 PushV
	var_112_string = var_108_string; // 0xa8 Mov
	var_114_string = ""; // 0xa9 PushS
	var_115_bool = var_108_string == var_114_string; // 0xaa Eq
	if(var_115_bool == 0) goto Label_174; // 0xab JumpB
	var_113_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_1271(var_112_string, var_113_bool); // 0xaf NEW_2
	var_2_object = var_108_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_113_bool = 1; // 0xae MovB
}


func_1442(var_44_string, var_45_int)
{
	var_46_string = ""; var_47_string = ""; // 0x5a2 PushV
	var_47_string = "idle"; // 0x5a3 MovS
	var_48_int = var_45_int; // 0x5a4 Push
	if(var_48_int == 0) goto Label_1447; // 0x5a5 JumpB
	var_47_string = var_47_string + var_45_int; // 0x5a6 Add2
	
Label_1447:
	var_44_string = var_47_string; // 0x5a7 Mov
	return 2; // 0x5a8 Return
}


func_807(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x327 PushV
	GetDirection(var_68_cvector); // 0x328 Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x32a PushV
	var_71_object = var_0_object; // 0x32b MovT
	func_976(var_71_object); // 0x32c NEW_2
	var_69_cvector = var_70_cvector; // 0x32d Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x32f PushV
	var_77_cvector = var_68_cvector; // 0x330 Mov
	var_78_cvector = var_69_cvector; // 0x331 Mov
	func_1372(var_76_float, var_77_cvector, var_78_cvector); // 0x332 NEW_2
	var_84_float = -0.34202; // 0x334 PushF
	var_65_bool = var_76_float >= var_84_float; // 0x335 GE2
	return 4; // 0x336 Return
}


func_1449(var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0x5a9 PushV
	var_41_int = 0; // 0x5aa MovI
	
Label_1451:
	var_43_string = "all"; // 0x5ab PushS
	var_44_string = ""; var_45_int = 0; // 0x5ac PushV
	var_45_int = var_41_int; // 0x5ad Mov
	func_1442(var_44_string, var_45_int); // 0x5ae NEW_2
	HasAnimation(var_42_bool, var_43_string, var_44_string); // 0x5b0 Func
	var_49_bool = var_42_bool == 0; // 0x5b2 Not
	if(var_49_bool == 0) goto Label_1461; // 0x5b3 JumpB
	goto Label_1464; // 0x5b4 Jump
	
Label_1464:
	var_38_int = var_41_int; // 0x5b8 Mov
	return 4; // 0x5b9 Return
	
Label_1461:
	var_50_int = 1; // 0x5b5 PushI
	var_41_int = var_41_int + var_50_int; // 0x5b6 Add2
	goto Label_1451; // 0x5b7 Jump
}


func_939(var_87_string)
{
	RemoveRTEnvelope(); // 0x3ac Func
	SetDeathState(); // 0x3ae Func
	Stop(); // 0x3b0 Func
	StopAsync(); // 0x3b2 Func
	StopSecondaryAnimation(); // 0x3b4 Func
	var_88_string = ""; // 0x3b6 PushV
	var_88_string = var_87_string; // 0x3b7 Mov
	func_1304(var_88_string); // 0x3b8 NEW_2
	var_117_string = "all"; // 0x3ba PushS
	PlayAnimation(var_117_string, var_87_string); // 0x3bb Func
	WaitForAnimEnd(); // 0x3bd Func
	var_118_string = "all"; // 0x3bf PushS
	LockAnimationEnd(var_118_string, var_87_string); // 0x3c0 Func
	RemoveEnvelope(); // 0x3c2 Func
	return 0; // 0x3c4 Return
}


func_823(var_64_object)
{
	EventDisable(0); // 0x338 EventDisable
	var_65_object = Obj(); // 0x339 PushV
	var_65_object = var_64_object; // 0x33a Mov
	func_848(var_65_object); // 0x33b NEW_2
	var_145_int = 50; // 0x33d PushI
	var_146_int = 40; // 0x33e PushI
	SetRTEnvelope(var_145_int, var_146_int); // 0x33f Func
	EventEnable(0); // 0x341 EventEnable
	
Label_834:
	Hold(); // 0x342 Func
	goto Label_834; // 0x344 Jump
}


func_1081(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); // 0x439 PushV
	var_38_bool = 0; // 0x43a PushV
	var_38_bool = 0; // 0x43b MovB
	var_39_bool = 0; // 0x43c PushV
	var_39_bool = 0; // 0x43d MovB
	var_40_object = var_17_object; // 0x43e Push
	if(var_40_object == 0) goto Label_1092; // 0x43f JumpB
	var_41_int = 4; // 0x440 PushI
	var_42_bool = var_18_int != var_41_int; // 0x441 Neq
	if(var_42_bool == 0) goto Label_1092; // 0x442 JumpB
	var_39_bool = 1; // 0x443 MovB
	
Label_1092:
	if(var_39_bool == 0) goto Label_1097; // 0x444 JumpB
	var_43_int = 5; // 0x445 PushI
	var_44_bool = var_18_int != var_43_int; // 0x446 Neq
	if(var_44_bool == 0) goto Label_1097; // 0x447 JumpB
	var_38_bool = 1; // 0x448 MovB
	
Label_1097:
	if(var_38_bool == 0) goto Label_1144; // 0x449 JumpB
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x44a PushV
	var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x44b PushV
	var_48_object = var_17_object; // 0x44c Mov
	func_976(var_48_object); // 0x44d NEW_2
	var_46_cvector = var_47_cvector; // 0x44e Mov
	func_1351(var_45_cvector, var_46_cvector); // 0x450 NEW_2
	var_29_cvector = var_45_cvector; // 0x451 Mov
	CreateVectorVector(var_30_object); // 0x453 Func
	var_31_int = 1; // 0x455 MovI
	
Label_1110:
	var_58_string = "hit"; // 0x456 PushS
	var_59_int = var_58_string + var_31_int; // 0x457 Add
	GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector); // 0x458 Func
	var_60_bool = var_32_bool == 0; // 0x45a Not
	if(var_60_bool == 0) goto Label_1117; // 0x45b JumpB
	goto Label_1126; // 0x45c Jump
	
Label_1126:
	size(var_35_int); // 0x466 ObjFunc
	var_61_int = var_35_int; // 0x468 Push
	if(var_61_int == 0) goto Label_1143; // 0x469 JumpB
	irand(var_36_int, var_35_int); // 0x46a Func
	get(var_37_cvector, var_36_int); // 0x46c ObjFunc
	var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x46e PushV
	var_62_object = var_17_object; // 0x46f Mov
	var_63_int = var_18_int; // 0x470 Mov
	var_64_float = var_19_float; // 0x471 Mov
	var_65_cvector = var_37_cvector; // 0x472 Mov
	var_66_cvector = -var_29_cvector; // 0x473 Neg2
	func_1149(var_64_float, var_65_cvector, var_66_cvector); // 0x474 NEW_2
	return 18; // 0x476 Return
	
Label_1143:
	var_30_object = 0; // 0x477 SetNull
	
Label_1144:
	var_107_object = Obj(); // 0x478 PushV
	var_107_object = var_17_object; // 0x479 Mov
	func_1037(var_107_object); // 0x47a NEW_2
	return 18; // 0x47c Return
	
Label_1117:
	var_108_int = var_34_cvector | var_29_cvector; // 0x45d Or
	var_109_float = 0.70711; // 0x45e PushF
	var_110_bool = var_108_int >= var_109_float; // 0x45f GE
	if(var_110_bool == 0) goto Label_1123; // 0x460 JumpB
	add(var_33_cvector); // 0x461 ObjFunc
	
Label_1123:
	var_111_int = 1; // 0x463 PushI
	var_31_int = var_31_int + var_111_int; // 0x464 Add2
	goto Label_1110; // 0x465 Jump
}


func_1466()
{
	var_21_bool = 0; var_22_string = ""; var_23_string = ""; // 0x5bb PushV
	var_22_string = "quest_b5_01"; // 0x5bc MovS
	var_23_string = "vera_retreat"; // 0x5bd MovS
	func_1430(var_21_bool, var_22_string, var_23_string); // 0x5be NEW_2
	return 0; // 0x5c0 Return
}


func_1473()
{
	var_106_string = "oob5Vera2_1"; // 0x5c2 PushS
	var_107_int = 1; // 0x5c3 PushI
	SetVariable(var_106_string, var_107_int); // 0x5c4 Func
	return 0; // 0x5c6 Return
}


func_450(var_0_object, var_1_object, var_2_object, var_3_string, var_12_bool, var_13_float, var_14_float)
{
	var_15_bool = 0; // 0x1c3 PushV
	func_1163(var_15_bool); // 0x1c4 NEW_2
	var_18_bool = var_15_bool == 0; // 0x1c6 Not
	if(var_18_bool == 0) goto Label_457; // 0x1c7 JumpB
	return 0; // 0x1c8 Return
	
Label_457:
	var_19_string = "player"; // 0x1c9 PushS
	FindActor(var_12_bool, var_19_string); // 0x1ca Func
	var_2_object = 0; // 0x1cc TMovB
	var_3_string = 0; // 0x1cd TMovB
	var_0_object = var_13_float; // 0x1ce TMov
	var_1_object = var_14_float; // 0x1cf TMov
	var_20_int = 10; // 0x1d0 PushI
	var_21_float = 1.0; // 0x1d1 PushF
	SetTimer(var_20_int, var_21_float); // 0x1d2 Func
	func_529(); // 0x1d5 NEW_2
	var_73_bool = var_3_string == 0; // 0x1d7 Not
	if(var_73_bool == 0) goto Label_476; // 0x1d8 JumpB
	var_74_int = 10; // 0x1d9 PushI
	KillTimer(var_74_int); // 0x1da Func
	
Label_476:
	return 0; // 0x1dc Return
}


func_1345(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x541 PushV
	self(var_19_object); // 0x542 Func
	var_17_object = var_19_object; // 0x544 Mov
	return 2; // 0x545 Return
}


func_1479(var_96_bool)
{
	var_98_int = 0; var_99_string = ""; // 0x5c8 PushV
	var_99_string = "oob5Vera2_1"; // 0x5c9 MovS
	func_1380(var_98_int, var_99_string); // 0x5ca NEW_2
	var_102_int = 0; // 0x5cc PushI
	var_103_bool = var_98_int == var_102_int; // 0x5cd Eq
	if(var_103_bool == 0) goto Label_1489; // 0x5ce JumpB
	var_96_bool = 1; // 0x5cf MovB
	return 0; // 0x5d0 Return
	
Label_1489:
	var_96_bool = 0; // 0x5d1 MovB
	return 0; // 0x5d2 Return
}


func_1351(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x547 PushV
	var_55_int = var_46_cvector | var_46_cvector; // 0x548 Or
	var_54_float = sqrt(var_55_int); // 0x549 Sqrt2
	var_56_float = 0.0; // 0x54a PushF
	var_57_bool = var_54_float < var_56_float; // 0x54b LT
	if(var_57_bool == 0) goto Label_1359; // 0x54c JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x54d MovV
	return 2; // 0x54e Return
	
Label_1359:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x54f Div2
	return 2; // 0x550 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_127; // 0x4f JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x50 PushV
	var_97_object = var_1_object; // 0x51 MovT
	func_1479(var_97_object); // 0x52 NEW_2
	if(var_96_bool == 0) goto Label_105; // 0x54 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x55 PushV
	var_104_object = var_1_object; // 0x56 MovT
	var_105_object = var_0_object; // 0x57 MovT
	func_1473(); // 0x58 NEW_2
	var_108_string = ""; // 0x5a PushV
	var_108_string = "Neutral"; // 0x5b MovS
	func_157(var_90_object, var_108_string); // 0x5c NEW_2
	var_125_int = 518668; // 0x5e PushI
	SetMessage(var_125_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_126_int = 518670; // 0x63 PushI
	var_127_int = 19916; // 0x64 PushI
	var_128_int = 19762; // 0x65 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_129_bool = 0; // 0x7f PushV
	func_1535(var_129_bool); // 0x80 NEW_2
	if(var_129_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_130_string = var_3_string; // 0x85 PushT
	if(var_130_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_131_string = ""; // 0x88 PushV
	var_131_string = var_2_object; // 0x89 MovT
	func_1255(var_131_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_142_string = "all"; // 0x8e PushS
	var_143_string = "idle"; // 0x8f PushS
	PlayAnimation(var_142_string, var_143_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_144_string = var_3_string; // 0x94 PushT
	if(var_144_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_145_string = "all"; // 0x97 PushS
	var_146_string = "idle"; // 0x98 PushS
	PlayAnimation(var_145_string, var_146_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_147_string = ""; // 0x69 PushV
	var_147_string = "Neutral"; // 0x6a MovS
	func_157(var_90_object, var_147_string); // 0x6b NEW_2
	var_148_int = 519748; // 0x6d PushI
	SetMessage(var_148_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_149_int = 519749; // 0x72 PushI
	var_150_int = -1; // 0x73 PushI
	var_151_int = 20903; // 0x74 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x75 TObjFunc
	var_152_int = 519750; // 0x77 PushI
	var_153_int = -1; // 0x78 PushI
	var_154_int = 20904; // 0x79 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_971(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x3cb PushV
	GetPosition(var_87_cvector); // 0x3cc Func
	var_85_cvector = var_87_cvector; // 0x3ce Mov
	return 2; // 0x3cf Return
}


func_976(var_47_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x3d0 PushV
	GetPosition(var_51_cvector); // 0x3d1 Func
	GetPosition(var_52_cvector); // 0x3d3 ObjFunc
	var_47_cvector = var_52_cvector - var_51_cvector; // 0x3d5 Sub2
	return 4; // 0x3d6 Return
}


func_848(var_65_object)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_string = ""; var_71_object = Obj(); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_string = ""; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0x350 PushV
	var_86_bool = var_65_object == 0; // 0x351 NullEq
	if(var_86_bool == 0) goto Label_856; // 0x352 JumpB
	var_87_string = ""; // 0x353 PushV
	var_87_string = "fdie"; // 0x354 MovS
	func_939(var_87_string); // 0x355 NEW_2
	goto Label_938; // 0x357 Jump
	
Label_938:
	return 20; // 0x3aa Return
	
Label_856:
	GetPosition(var_76_cvector); // 0x358 ObjFunc
	GetPosition(var_77_cvector); // 0x35a Func
	GetDirection(var_78_cvector); // 0x35c Func
	var_79_cvector = var_77_cvector - var_76_cvector; // 0x35e Sub2
	var_119_float = GetByIndex(var_79_cvector, 0); // 0x35f PushE
	var_120_float = GetByIndex(var_78_cvector, 0); // 0x360 PushE
	var_121_float = var_119_float * var_120_float; // 0x361 Mult
	var_122_float = GetByIndex(var_79_cvector, 2); // 0x362 PushE
	var_123_float = GetByIndex(var_78_cvector, 2); // 0x363 PushE
	var_124_float = var_122_float * var_123_float; // 0x364 Mult
	var_125_int = var_121_float + var_124_float; // 0x365 Add
	var_126_int = 0; // 0x366 PushI
	var_127_bool = var_125_int >= var_126_int; // 0x367 GE
	if(var_127_bool == 0) goto Label_875; // 0x368 JumpB
	var_80_string = "fdie"; // 0x369 MovS
	goto Label_876; // 0x36a Jump
	
Label_876:
	RemoveRTEnvelope(); // 0x36c Func
	SetDeathState(); // 0x36e Func
	Stop(); // 0x370 Func
	StopAsync(); // 0x372 Func
	var_81_object = var_65_object; // 0x374 Mov
	var_128_string = "GetScriptProperty"; // 0x375 PushS
	var_129_int = 2; // 0x376 PushI
	var_130_bool = IsFuncExist(var_65_object, var_128_string, var_129_int); // 0x377 FuncExist
	if(var_130_bool == 0) goto Label_900; // 0x378 JumpB
	var_131_string = "Owner"; // 0x379 PushS
	HasScriptProperty(var_82_bool, var_131_string); // 0x37a ObjFunc
	var_132_bool = var_82_bool; // 0x37c Push
	if(var_132_bool == 0) goto Label_900; // 0x37d JumpB
	var_133_string = "Owner"; // 0x37e PushS
	GetScriptProperty(var_81_object, var_133_string); // 0x37f ObjFunc
	var_134_bool = var_81_object == 0; // 0x381 NullEq
	if(var_134_bool == 0) goto Label_900; // 0x382 JumpB
	var_81_object = var_65_object; // 0x383 Mov
	
Label_900:
	var_135_string = "@GetEyesHeight"; // 0x384 PushS
	var_136_int = 1; // 0x385 PushI
	var_137_bool = IsFuncExist(var_81_object, var_135_string, var_136_int); // 0x386 FuncExist
	if(var_137_bool == 0) goto Label_915; // 0x387 JumpB
	GetEyesHeight(var_84_float); // 0x388 ObjFunc
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x38a MovV
	var_138_float = GetByIndex(var_85_cvector, 1); // 0x38b PushE
	var_138_float = var_84_float; // 0x38c Mov
	SetByIndex(var_85_cvector, 1) = var_138_float; // 0x38d PopE
	var_139_string = "head"; // 0x38e PushS
	LookAsync(var_65_object, var_139_string, var_85_cvector); // 0x38f Func
	var_83_bool = 1; // 0x391 MovB
	goto Label_916; // 0x392 Jump
	
Label_916:
	var_140_string = ""; // 0x394 PushV
	var_140_string = var_80_string; // 0x395 Mov
	func_1304(var_140_string); // 0x396 NEW_2
	var_141_string = "all"; // 0x398 PushS
	PlayAnimation(var_141_string, var_80_string); // 0x399 Func
	WaitForAnimEnd(); // 0x39b Func
	var_142_bool = var_83_bool; // 0x39d Push
	if(var_142_bool == 0) goto Label_932; // 0x39e JumpB
	StopAsync(); // 0x39f Func
	var_143_string = "head"; // 0x3a1 PushS
	UnlookAsync(var_143_string); // 0x3a2 Func
	
Label_932:
	var_144_string = "all"; // 0x3a4 PushS
	LockAnimationEnd(var_144_string, var_80_string); // 0x3a5 Func
	RemoveEnvelope(); // 0x3a7 Func
	var_81_object = 0; // 0x3a9 SetNull
	
Label_915:
	var_83_bool = 0; // 0x393 MovB
	
Label_875:
	var_80_string = "bdie"; // 0x36b MovS
}


func_1361(var_53_float, var_54_float, var_55_float, var_56_float)
{
	var_57_bool = var_54_float < var_55_float; // 0x552 LT
	if(var_57_bool == 0) goto Label_1366; // 0x553 JumpB
	var_53_float = var_55_float; // 0x554 Mov
	return 0; // 0x555 Return
	
Label_1366:
	var_58_bool = var_54_float > var_56_float; // 0x556 GT
	if(var_58_bool == 0) goto Label_1370; // 0x557 JumpB
	var_53_float = var_56_float; // 0x558 Mov
	return 0; // 0x559 Return
	
Label_1370:
	var_53_float = var_54_float; // 0x55a Mov
	return 0; // 0x55b Return
}


func_1491(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x5d3 PushV
	var_83_string = "branch"; // 0x5d4 PushS
	GetVariable(var_83_string, var_82_int); // 0x5d5 Func
	var_84_int = 0; // 0x5d7 PushI
	var_85_bool = var_82_int == var_84_int; // 0x5d8 Eq
	if(var_85_bool == 0) goto Label_1501; // 0x5d9 JumpB
	var_80_int = 1; // 0x5da MovI
	return 2; // 0x5db Return
	
Label_1501:
	var_86_int = 1; // 0x5dd PushI
	var_87_bool = var_82_int == var_86_int; // 0x5de Eq
	if(var_87_bool == 0) goto Label_1506; // 0x5df JumpB
	var_80_int = 2; // 0x5e0 MovI
	return 2; // 0x5e1 Return
	
Label_1506:
	var_80_int = 3; // 0x5e2 MovI
	return 2; // 0x5e3 Return
}


func_1237()
{
	var_157_bool = 0; var_158_bool = 0; // 0x4d5 PushV
	var_159_bool = 1; // 0x4d6 PushB
	CameraSwitchToNormal(var_159_bool); // 0x4d7 Func
	var_160_bool = 0; // 0x4d9 PushV
	func_1535(var_160_bool); // 0x4da NEW_2
	if(var_160_bool == 0) goto Label_1246; // 0x4dc JumpB
	goto Label_1254; // 0x4dd Jump
	
Label_1254:
	return 2; // 0x4e6 Return
	
Label_1246:
	var_161_string = "head"; // 0x4de PushS
	HasAnimationTrack(var_158_bool, var_161_string); // 0x4df Func
	var_162_bool = var_158_bool; // 0x4e1 Push
	if(var_162_bool == 0) goto Label_1254; // 0x4e2 JumpB
	var_163_string = "head"; // 0x4e3 PushS
	UnlookAsync(var_163_string); // 0x4e4 Func
}


func_983(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x3d7 PushV
	GetPosition(var_25_cvector); // 0x3d8 Func
	GetPosition(var_26_cvector); // 0x3da ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x3dc Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x3dd Or2
	return 6; // 0x3de Return
}


func_1372(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector; // 0x55d Or
	var_80_int = var_77_cvector | var_77_cvector; // 0x55e Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x55f Or
	var_82_float = var_80_int * var_81_int; // 0x560 Mult
	var_83_float = sqrt(var_82_float); // 0x561 Sqrt
	var_76_float = var_79_int / var_79_int; // 0x562 Div2
	return 0; // 0x563 Return
}


func_477(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x1dd PushV
	var_19_bool = var_4_bool == 0; // 0x1de NullEq
	if(var_19_bool == 0) goto Label_482; // 0x1df JumpB
	var_16_bool = 0; // 0x1e0 MovB
	return 2; // 0x1e1 Return
	
Label_482:
	var_20_float = 0; var_21_object = Obj(); // 0x1e2 PushV
	var_21_object = var_4_bool; // 0x1e3 MovT
	func_983(var_21_object); // 0x1e4 NEW_2
	var_18_float = sqrt(var_20_float); // 0x1e6 Sqrt2
	var_28_object = var_2_object; // 0x1e7 PushT
	if(var_28_object == 0) goto Label_490; // 0x1e8 JumpB
	var_18_float = var_18_float - var_1_object; // 0x1e9 Sub2
	
Label_490:
	var_16_bool = var_18_float < var_0_object; // 0x1ea LT2
	return 2; // 0x1eb Return
}


func_991(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x3df PushV
	var_31_string = "player"; // 0x3e0 PushS
	FindActor(var_30_object, var_31_string); // 0x3e1 Func
	var_28_object = var_30_object; // 0x3e3 Mov
	return 2; // 0x3e4 Return
}


func_608(var_63_bool)
{
	var_63_bool = 1; // 0x260 MovB
	return 0; // 0x261 Return
}


func_610()
{
	StopAnimation(); // 0x262 Func
	StopGroup0(); // 0x264 Func
	return 0; // 0x266 Return
}


func_1380(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0; // 0x564 PushV
	GetVariable(var_99_string, var_101_int); // 0x565 Func
	var_98_int = var_101_int; // 0x567 Mov
	return 2; // 0x568 Return
}


func_1508(var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x5e4 PushV
	var_21_string = "branch"; // 0x5e5 PushS
	GetVariable(var_21_string, var_20_int); // 0x5e6 Func
	var_18_int = var_20_int; // 0x5e8 Mov
	return 2; // 0x5e9 Return
}


func_998(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x3e6 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0x3e7 Func
	var_20_bool = var_23_bool; // 0x3e9 Mov
	return 2; // 0x3ea Return
}


func_1255(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0; // 0x4e7 PushV
	lshHasAnimation(var_135_bool, var_131_string); // 0x4e8 Func
	var_138_bool = var_135_bool; // 0x4ea Push
	if(var_138_bool == 0) goto Label_1266; // 0x4eb JumpB
	lshGetAnimTimes(var_131_string, var_136_float, var_137_float); // 0x4ec Func
	var_139_bool = 0; // 0x4ee PushB
	lshPlayAnimation(var_136_float, var_137_float, var_139_bool); // 0x4ef Func
	goto Label_1270; // 0x4f1 Jump
	
Label_1270:
	return 6; // 0x4f6 Return
	
Label_1266:
	var_140_string = "Can't find lsh animation : "; // 0x4f2 PushS
	var_141_int = var_140_string + var_131_string; // 0x4f3 Add
	Trace(var_141_int); // 0x4f4 Func
}


func_615()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x267 PushV
	GetScene(var_23_object); // 0x268 Func
	var_24_object = Obj(); // 0x26a PushV
	func_1345(var_24_object); // 0x26b NEW_2
	RemoveStationaryActor(var_24_object); // 0x26d ObjFunc
	
Label_623:
	var_27_object = Obj(); // 0x26f PushV
	var_28_object = Obj(); // 0x270 PushV
	func_991(var_28_object); // 0x271 NEW_2
	var_27_object = var_28_object; // 0x272 Mov
	func_666(var_21_bool, var_22_object, var_23_object, var_27_object); // 0x274 NEW_2
	var_100_int = 1; // 0x276 PushI
	Sleep(var_100_int); // 0x277 Func
	goto Label_623; // 0x279 Jump
}


func_1385(var_24_bool, var_25_object, var_26_float)
{
	var_27_bool = var_25_object == 0; // 0x56a Not
	if(var_27_bool == 0) goto Label_1390; // 0x56b JumpB
	var_24_bool = 0; // 0x56c MovB
	return 0; // 0x56d Return
	
Label_1390:
	var_28_int = 0; // 0x56e PushI
	var_29_bool = var_26_float > var_28_int; // 0x56f GT
	if(var_29_bool == 0) goto Label_1397; // 0x570 JumpB
	var_30_int = 8; // 0x571 PushI
	SendWorldWndMessage(var_30_int); // 0x572 Func
	goto Label_1406; // 0x574 Jump
	
Label_1406:
	var_31_float = 0; // 0x57e PushV
	var_31_float = var_26_float; // 0x57f Mov
	func_1420(var_31_float); // 0x580 NEW_2
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0; // 0x582 PushV
	var_36_object = var_25_object; // 0x583 Mov
	var_37_string = "reputation"; // 0x584 MovS
	var_38_float = var_26_float; // 0x585 Mov
	var_39_float = 0; // 0x586 MovI
	var_40_float = 1; // 0x587 MovI
	func_1015(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float); // 0x588 NEW_2
	var_24_bool = 1; // 0x58a MovB
	return 0; // 0x58b Return
	
Label_1397:
	var_59_int = 0; // 0x575 PushI
	var_60_bool = var_26_float < var_59_int; // 0x576 LT
	if(var_60_bool == 0) goto Label_1404; // 0x577 JumpB
	var_61_int = 9; // 0x578 PushI
	SendWorldWndMessage(var_61_int); // 0x579 Func
	goto Label_1406; // 0x57b Jump
	
Label_1404:
	var_24_bool = 0; // 0x57c MovB
	return 0; // 0x57d Return
}


func_1514(var_17_object)
{
	var_18_int = 0; // 0x5eb PushV
	func_1508(var_18_int); // 0x5ec NEW_2
	var_22_int = 1; // 0x5ee PushI
	var_23_bool = var_18_int == var_22_int; // 0x5ef Eq
	if(var_23_bool == 0) goto Label_1524; // 0x5f0 JumpB
	WorkWithCorpse(var_17_object); // 0x5f1 Func
	goto Label_1526; // 0x5f3 Jump
	
Label_1526:
	return 0; // 0x5f6 Return
	
Label_1524:
	Barter(var_17_object); // 0x5f4 Func
}


func_1003(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0; // 0x3eb PushV
	var_48_string = "HasProperty"; // 0x3ec PushS
	var_49_int = 2; // 0x3ed PushI
	var_50_bool = IsFuncExist(var_44_object, var_48_string, var_49_int); // 0x3ee FuncExist
	var_51_bool = var_50_bool == 0; // 0x3ef Not
	if(var_51_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_43_bool = 0; // 0x3f1 MovB
	return 2; // 0x3f2 Return
	
Label_1011:
	HasProperty(var_45_string, var_47_bool); // 0x3f3 ObjFunc
	var_43_bool = var_47_bool; // 0x3f5 Mov
	return 2; // 0x3f6 Return
}


func_1271(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0; // 0x4f7 PushV
	lshHasAnimation(var_119_bool, var_112_string); // 0x4f8 Func
	var_122_bool = var_119_bool; // 0x4fa Push
	if(var_122_bool == 0) goto Label_1281; // 0x4fb JumpB
	lshGetAnimTimes(var_112_string, var_120_float, var_121_float); // 0x4fc Func
	lshPlayAnimation(var_120_float, var_121_float, var_113_bool); // 0x4fe Func
	goto Label_1285; // 0x500 Jump
	
Label_1285:
	return 6; // 0x505 Return
	
Label_1281:
	var_123_string = "Can't find lsh animation : "; // 0x501 PushS
	var_124_int = var_123_string + var_112_string; // 0x502 Add
	Trace(var_124_int); // 0x503 Func
}


func_1015(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x3f7 PushV
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x3f8 PushV
	var_44_object = var_36_object; // 0x3f9 Mov
	var_45_string = var_37_string; // 0x3fa Mov
	func_1003(var_43_bool, var_44_object, var_45_string); // 0x3fb NEW_2
	var_52_bool = var_43_bool == 0; // 0x3fd Not
	if(var_52_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_35_bool = 0; // 0x3ff MovB
	return 2; // 0x400 Return
	
Label_1025:
	GetProperty(var_37_string, var_42_float); // 0x401 ObjFunc
	var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0; // 0x403 PushV
	var_54_float = var_42_float + var_38_float; // 0x404 Add2
	var_55_float = var_39_float; // 0x405 Mov
	var_56_float = var_40_float; // 0x406 Mov
	func_1361(var_53_float, var_54_float, var_55_float, var_56_float); // 0x407 NEW_2
	SetProperty(var_37_string, var_53_float); // 0x409 ObjFunc
	var_35_bool = 1; // 0x40b MovB
	return 2; // 0x40c Return
}


func_1529(var_76_int)
{
	var_76_int = 512582; // 0x5f9 MovI
	return 0; // 0x5fa Return
}


func_1531(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1.png"; // 0x5fb MovS
	return 0; // 0x5fc Return
}


func_636(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x27c PushV
	GetPosition(var_35_cvector); // 0x27d Func
	GetPosition(var_36_cvector); // 0x27f TObjFunc
	GetDirection(var_37_cvector); // 0x281 Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x283 PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x284 PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x285 Sub2
	func_1351(var_43_cvector, var_44_cvector); // 0x286 NEW_2
	var_50_float = 0.75; // 0x288 PushF
	var_51_float = var_37_cvector * var_50_float; // 0x289 Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x28a Add2
	func_1351(var_41_cvector, var_42_cvector); // 0x28b NEW_2
	var_38_cvector = var_41_cvector; // 0x28c Mov
	var_52_int = 32; // 0x28e PushI
	var_53_float = 7000.0; // 0x28f PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x290 Func
	var_54_int = 100; // 0x292 PushI
	var_40_float = var_40_float - var_54_int; // 0x293 Sub2
	var_55_int = 0; // 0x294 PushI
	var_56_bool = var_40_float < var_55_int; // 0x295 LT
	if(var_56_bool == 0) goto Label_664; // 0x296 JumpB
	var_40_float = 0; // 0x297 MovI
	
Label_664:
	var_27_cvector = var_39_cvector * var_40_float; // 0x298 Mult2
	return 12; // 0x299 Return
}


func_1533(var_79_string)
{
	var_79_string = "ui/NPC_Citizen1_b.png"; // 0x5fd MovS
	return 0; // 0x5fe Return
}


func_1535(var_71_bool)
{
	var_71_bool = 0; // 0x5ff MovB
	return 0; // 0x600 Return
}


