task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_int = 1; // 0x94 PushI
	if(var_15_int == 0) goto Label_319; // 0x95 JumpB
	func_1579(); // 0x97 Call
	var_17_int = 15678; // 0x99 PushI
	var_18_bool = var_14_cvector == var_17_int; // 0x9a Eq
	if(var_18_bool == 0) goto Label_161; // 0x9b JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0x9c PushV
	var_19_object = var_1_object; // 0x9d MovT
	var_20_object = var_0_object; // 0x9e MovT
	func_1683(); // 0x9f Call
	
Label_161:
	var_32_int = 15679; // 0xa1 PushI
	var_33_bool = var_14_cvector == var_32_int; // 0xa2 Eq
	if(var_33_bool == 0) goto Label_169; // 0xa3 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0xa4 PushV
	var_34_object = var_1_object; // 0xa5 MovT
	var_35_object = var_0_object; // 0xa6 MovT
	func_1683(); // 0xa7 Call
	
Label_169:
	var_36_int = 15673; // 0xa9 PushI
	var_37_bool = var_13_cvector == var_36_int; // 0xaa Eq
	if(var_37_bool == 0) goto Label_202; // 0xab JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0xac PushV
	var_39_object = var_1_object; // 0xad MovT
	func_1705(var_39_object); // 0xae Call
	if(var_38_bool == 0) goto Label_202; // 0xb0 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xb1 PushV
	var_46_object = var_1_object; // 0xb2 MovT
	var_47_object = var_0_object; // 0xb3 MovT
	func_1699(); // 0xb4 Call
	var_50_string = ""; // 0xb6 PushV
	var_50_string = "Neutral"; // 0xb7 MovS
	func_131(var_14_cvector, var_50_string); // 0xb8 Call
	var_65_int = 14445; // 0xba PushI
	SetMessage(var_65_int); // 0xbb TObjFunc
	ClearReplies(); // 0xbd TObjFunc
	var_66_int = 14446; // 0xbf PushI
	var_67_int = 15675; // 0xc0 PushI
	var_68_int = 15674; // 0xc1 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xc2 TObjFunc
	var_69_int = 14456; // 0xc4 PushI
	var_70_int = 15687; // 0xc5 PushI
	var_71_int = 15686; // 0xc6 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xc7 TObjFunc
	return 0; // 0xc9 Return
	
Label_202:
	var_72_int = 15687; // 0xca PushI
	var_73_bool = var_13_cvector == var_72_int; // 0xcb Eq
	if(var_73_bool == 0) goto Label_220; // 0xcc JumpB
	var_74_string = ""; // 0xcd PushV
	var_74_string = "Neutral"; // 0xce MovS
	func_131(var_14_cvector, var_74_string); // 0xcf Call
	var_75_int = 14457; // 0xd1 PushI
	SetMessage(var_75_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_76_int = 14458; // 0xd6 PushI
	var_77_int = 15689; // 0xd7 PushI
	var_78_int = 15688; // 0xd8 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xd9 TObjFunc
	return 0; // 0xdb Return
	
Label_220:
	var_79_int = 15689; // 0xdc PushI
	var_80_bool = var_13_cvector == var_79_int; // 0xdd Eq
	if(var_80_bool == 0) goto Label_238; // 0xde JumpB
	var_81_string = ""; // 0xdf PushV
	var_81_string = "Neutral"; // 0xe0 MovS
	func_131(var_14_cvector, var_81_string); // 0xe1 Call
	var_82_int = 14459; // 0xe3 PushI
	SetMessage(var_82_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_83_int = 14460; // 0xe8 PushI
	var_84_int = 15681; // 0xe9 PushI
	var_85_int = 15690; // 0xea PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_86_int = 15675; // 0xee PushI
	var_87_bool = var_13_cvector == var_86_int; // 0xef Eq
	if(var_87_bool == 0) goto Label_261; // 0xf0 JumpB
	var_88_string = ""; // 0xf1 PushV
	var_88_string = "Neutral"; // 0xf2 MovS
	func_131(var_14_cvector, var_88_string); // 0xf3 Call
	var_89_int = 14447; // 0xf5 PushI
	SetMessage(var_89_int); // 0xf6 TObjFunc
	ClearReplies(); // 0xf8 TObjFunc
	var_90_int = 14448; // 0xfa PushI
	var_91_int = 15677; // 0xfb PushI
	var_92_int = 15676; // 0xfc PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xfd TObjFunc
	var_93_int = 14452; // 0xff PushI
	var_94_int = 15681; // 0x100 PushI
	var_95_int = 15680; // 0x101 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x102 TObjFunc
	return 0; // 0x104 Return
	
Label_261:
	var_96_int = 15681; // 0x105 PushI
	var_97_bool = var_13_cvector == var_96_int; // 0x106 Eq
	if(var_97_bool == 0) goto Label_284; // 0x107 JumpB
	var_98_string = ""; // 0x108 PushV
	var_98_string = "Neutral"; // 0x109 MovS
	func_131(var_14_cvector, var_98_string); // 0x10a Call
	var_99_int = 14453; // 0x10c PushI
	SetMessage(var_99_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_100_int = 14454; // 0x111 PushI
	var_101_int = 15677; // 0x112 PushI
	var_102_int = 15682; // 0x113 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x114 TObjFunc
	var_103_int = 14455; // 0x116 PushI
	var_104_int = 15677; // 0x117 PushI
	var_105_int = 15684; // 0x118 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_106_int = 15677; // 0x11c PushI
	var_107_bool = var_13_cvector == var_106_int; // 0x11d Eq
	if(var_107_bool == 0) goto Label_307; // 0x11e JumpB
	var_108_string = ""; // 0x11f PushV
	var_108_string = "Neutral"; // 0x120 MovS
	func_131(var_14_cvector, var_108_string); // 0x121 Call
	var_109_int = 14449; // 0x123 PushI
	SetMessage(var_109_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_110_int = 14450; // 0x128 PushI
	var_111_int = -1; // 0x129 PushI
	var_112_int = 15678; // 0x12a PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x12b TObjFunc
	var_113_int = 14451; // 0x12d PushI
	var_114_int = -1; // 0x12e PushI
	var_115_int = 15679; // 0x12f PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_3_string = 1; // 0x133 TMovB
	var_116_bool = 0; // 0x134 PushV
	func_1989(var_116_bool); // 0x135 Call
	if(var_116_bool == 0) goto Label_315; // 0x137 JumpB
	lshStopAnimation(); // 0x138 Func
	goto Label_317; // 0x13a Jump
	
Label_317:
	return 0; // 0x13d Return
	
Label_315:
	StopAnimation(); // 0x13b Func
	
Label_319:
	return 0; // 0x13f Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_bool = 0; // 0x158 PushV
	IsOverrideActive(var_15_bool); // 0x159 Func
	var_16_bool = var_15_bool == 0; // 0x15b Not
	if(var_16_bool == 0) goto Label_351; // 0x15c JumpB
	WorkWithCorpse(var_13_cvector); // 0x15d Func
	
Label_351:
	return 2; // 0x15f Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_bool, var_15_cvector, var_16_cvector)
{
	return 0; // 0x1ce Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	return 0; // 0x1d0 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	return 0; // 0x1d2 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	func_491(); // 0x1f5 Call
	var_15_object = Obj(); // 0x1f7 PushV
	var_15_object = var_13_cvector; // 0x1f8 Mov
	func_1835(); // 0x1f9 Call
	return 0; // 0x1fb Return
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = var_13_cvector == var_0_object; // 0x1fd Eq
	if(var_14_bool == 0) goto Label_516; // 0x1fe JumpB
	var_15_int = 100; // 0x1ff PushI
	KillTimer(var_15_int); // 0x200 Func
	Face(var_0_object); // 0x202 Func
	
Label_516:
	return 0; // 0x204 Return
}


task_3_event_4(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = var_13_cvector == var_0_object; // 0x206 Eq
	if(var_14_bool == 0) goto Label_528; // 0x207 JumpB
	var_15_int = 100; // 0x208 PushI
	var_16_float = 3.0; // 0x209 PushF
	SetTimer(var_15_int, var_16_float); // 0x20a Func
	var_17_object = Obj(); // 0x20c PushV
	var_17_object = var_0_object; // 0x20d MovT
	func_1483(); // 0x20e Call
	
Label_528:
	return 0; // 0x210 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj(); // 0x212 PushV
	var_50_object = var_48_object; // 0x213 Mov
	func_1392(var_49_bool, var_50_object); // 0x214 Call
	var_77_bool = var_49_bool == 0; // 0x216 Not
	if(var_77_bool == 0) goto Label_541; // 0x217 JumpB
	var_78_object = Obj(); // 0x218 PushV
	var_78_object = var_48_object; // 0x219 Mov
	func_1859(var_78_object); // 0x21a Call
	return 0; // 0x21c Return
	
Label_541:
	func_491(); // 0x21e Call
	var_86_object = Obj(); // 0x220 PushV
	var_86_object = var_48_object; // 0x221 Mov
	func_1872(var_86_object); // 0x222 Call
	return 0; // 0x224 Return
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x226 PushV
	var_16_object = var_13_cvector; // 0x227 Mov
	var_17_object = var_14_cvector; // 0x228 Mov
	func_1945(var_15_bool, var_16_object, var_17_object); // 0x229 Call
	if(var_15_bool == 0) goto Label_560; // 0x22b JumpB
	var_48_object = Obj(); // 0x22c PushV
	var_48_object = var_13_cvector; // 0x22d Mov
	func_529(); // 0x22e Call
	
Label_560:
	return 0; // 0x230 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x232 PushV
	var_15_object = var_13_cvector; // 0x233 Mov
	func_1917(var_14_bool, var_15_object); // 0x234 Call
	if(var_14_bool == 0) goto Label_574; // 0x236 JumpB
	func_491(); // 0x238 Call
	var_60_object = Obj(); // 0x23a PushV
	var_60_object = var_13_cvector; // 0x23b Mov
	func_1939(var_60_object); // 0x23c Call
	
Label_574:
	return 0; // 0x23e Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_int = 100; // 0x240 PushI
	var_15_bool = var_13_cvector != var_14_int; // 0x241 Neq
	if(var_15_bool == 0) goto Label_580; // 0x242 JumpB
	return 0; // 0x243 Return
	
Label_580:
	var_16_int = 100; // 0x244 PushI
	KillTimer(var_16_int); // 0x245 Func
	StopGroup0(); // 0x247 Func
	return 0; // 0x249 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj(); // 0x2b6 PushV
	var_50_object = var_48_object; // 0x2b7 Mov
	func_1392(var_49_bool, var_50_object); // 0x2b8 Call
	var_77_bool = var_49_bool == 0; // 0x2ba Not
	if(var_77_bool == 0) goto Label_705; // 0x2bb JumpB
	var_78_object = Obj(); // 0x2bc PushV
	var_78_object = var_48_object; // 0x2bd Mov
	func_1859(var_78_object); // 0x2be Call
	return 0; // 0x2c0 Return
	
Label_705:
	func_725(); // 0x2c2 Call
	var_85_object = Obj(); // 0x2c4 PushV
	var_85_object = var_48_object; // 0x2c5 Mov
	func_1872(var_85_object); // 0x2c6 Call
	return 0; // 0x2c8 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x2ca PushV
	var_16_object = var_13_cvector; // 0x2cb Mov
	var_17_object = var_14_cvector; // 0x2cc Mov
	func_1945(var_15_bool, var_16_object, var_17_object); // 0x2cd Call
	if(var_15_bool == 0) goto Label_724; // 0x2cf JumpB
	var_48_object = Obj(); // 0x2d0 PushV
	var_48_object = var_13_cvector; // 0x2d1 Mov
	func_693(); // 0x2d2 Call
	
Label_724:
	return 0; // 0x2d4 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector)
{
	func_725(); // 0x2de Call
	var_14_object = Obj(); // 0x2e0 PushV
	var_14_object = var_13_cvector; // 0x2e1 Mov
	func_1835(); // 0x2e2 Call
	return 0; // 0x2e4 Return
}


task_5_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; // 0x36b PushV
	var_14_bool = 0; // 0x36c MovB
	var_15_object = var_2_object; // 0x36d PushT
	if(var_15_object == 0) goto Label_882; // 0x36e JumpB
	var_16_bool = var_13_cvector == var_0_object; // 0x36f Eq
	if(var_16_bool == 0) goto Label_882; // 0x370 JumpB
	var_14_bool = 1; // 0x371 MovB
	
Label_882:
	if(var_14_bool == 0) goto Label_887; // 0x372 JumpB
	var_17_object = Obj(); // 0x373 PushV
	var_17_object = var_0_object; // 0x374 MovT
	func_1483(); // 0x375 Call
	
Label_887:
	return 0; // 0x377 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; // 0x379 PushV
	var_14_bool = 0; // 0x37a MovB
	var_15_object = var_2_object; // 0x37b PushT
	if(var_15_object == 0) goto Label_896; // 0x37c JumpB
	var_16_bool = var_13_cvector == var_0_object; // 0x37d Eq
	if(var_16_bool == 0) goto Label_896; // 0x37e JumpB
	var_14_bool = 1; // 0x37f MovB
	
Label_896:
	if(var_14_bool == 0) goto Label_904; // 0x380 JumpB
	var_17_string = "@Stop hunt"; // 0x381 PushS
	Trace(var_17_string); // 0x382 Func
	StopAnimation(); // 0x384 Func
	StopGroup0(); // 0x386 Func
	
Label_904:
	return 0; // 0x388 Return
}


	task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_cvector, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj(); // 0x3e9 PushV
	var_50_object = var_48_object; // 0x3ea Mov
	func_1392(var_49_bool, var_50_object); // 0x3eb Call
	var_77_bool = var_49_bool == 0; // 0x3ed Not
	if(var_77_bool == 0) goto Label_1008; // 0x3ee JumpB
	return 0; // 0x3ef Return
	
Label_1008:
	var_78_object = Obj(); // 0x3f0 PushV
	var_78_object = var_48_object; // 0x3f1 Mov
	func_1859(var_78_object); // 0x3f2 Call
	var_85_bool = var_48_object == var_0_object; // 0x3f4 Eq
	if(var_85_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_1_object = 0; // 0x3f6 SetNullT
	goto Label_1023; // 0x3f7 Jump
	
Label_1023:
	return 0; // 0x3ff Return
	
Label_1016:
	var_1_object = var_48_object; // 0x3f8 TMov
	var_86_object = var_2_object; // 0x3f9 PushT
	if(var_86_object == 0) goto Label_1023; // 0x3fa JumpB
	StopAnimation(); // 0x3fb Func
	StopGroup0(); // 0x3fd Func
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x401 PushV
	var_16_object = var_13_cvector; // 0x402 Mov
	var_17_object = var_14_cvector; // 0x403 Mov
	func_1945(var_15_bool, var_16_object, var_17_object); // 0x404 Call
	if(var_15_bool == 0) goto Label_1035; // 0x406 JumpB
	var_48_object = Obj(); // 0x407 PushV
	var_48_object = var_13_cvector; // 0x408 Mov
	func_1000(); // 0x409 Call
	
Label_1035:
	return 0; // 0x40b Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_int = 0; var_15_object = Obj(); // 0x411 PushV
	var_15_object = var_13_cvector; // 0x412 Mov
	TaskCall(0); // 0x413 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x414 Call
	TaskReturn(); // 0x415 TaskReturn
	return 0; // 0x417 Return
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x419 PushV
	var_15_string = "quest_d11_01"; // 0x41a MovS
	var_16_string = "soldier_attack"; // 0x41b MovS
	func_1671(var_14_bool, var_15_string, var_16_string); // 0x41c Call
	var_20_object = Obj(); // 0x41e PushV
	var_21_object = Obj(); // 0x41f PushV
	func_1268(var_21_object); // 0x420 Call
	var_20_object = var_21_object; // 0x421 Mov
	TaskCall(7); // 0x423 TaskCall
	func_1064(var_20_object); // 0x424 Call
	TaskReturn(); // 0x425 TaskReturn
	return 0; // 0x427 Return
}


task_7_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x43e PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x43f PushV
	var_17_object = var_13_object; // 0x440 Mov
	func_1392(var_16_bool, var_17_object); // 0x441 Call
	var_50_bool = var_16_bool == 0; // 0x443 Not
	if(var_50_bool == 0) goto Label_1094; // 0x444 JumpB
	return 2; // 0x445 Return
	
Label_1094:
	var_51_bool = 0; var_52_object = Obj(); // 0x446 PushV
	var_52_object = var_13_object; // 0x447 Mov
	func_1912(var_51_bool, var_52_object); // 0x448 Call
	var_55_bool = var_51_bool == 0; // 0x44a Not
	if(var_55_bool == 0) goto Label_1106; // 0x44b JumpB
	var_56_object = GlobalVars[0]; // 0x44c PushGE
	in(var_15_bool, var_13_object); // 0x44d ObjFunc
	var_57_bool = var_15_bool == 0; // 0x44f Not
	if(var_57_bool == 0) goto Label_1106; // 0x450 JumpB
	return 2; // 0x451 Return
	
Label_1106:
	func_1240(); // 0x453 Call
	var_58_object = Obj(); // 0x455 PushV
	var_58_object = var_13_object; // 0x456 Mov
	TaskCall(3); // 0x457 TaskCall
	func_467(var_59_object, var_58_object); // 0x458 Call
	TaskReturn(); // 0x459 TaskReturn
	return 2; // 0x45b Return
}


	task_7_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_object, var_48_object)
	{
	var_49_bool = 0; var_50_object = Obj(); // 0x45d PushV
	var_50_object = var_48_object; // 0x45e Mov
	func_1392(var_49_bool, var_50_object); // 0x45f Call
	var_77_bool = var_49_bool == 0; // 0x461 Not
	if(var_77_bool == 0) goto Label_1128; // 0x462 JumpB
	var_78_object = Obj(); // 0x463 PushV
	var_78_object = var_48_object; // 0x464 Mov
	func_1859(var_78_object); // 0x465 Call
	return 0; // 0x467 Return
	
Label_1128:
	func_1240(); // 0x469 Call
	var_85_object = Obj(); // 0x46b PushV
	var_85_object = var_48_object; // 0x46c Mov
	func_1872(var_85_object); // 0x46d Call
	return 0; // 0x46f Return
	}


task_7_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x471 PushV
	var_16_object = var_13_object; // 0x472 Mov
	var_17_object = var_14_object; // 0x473 Mov
	func_1945(var_15_bool, var_16_object, var_17_object); // 0x474 Call
	if(var_15_bool == 0) goto Label_1147; // 0x476 JumpB
	var_48_object = Obj(); // 0x477 PushV
	var_48_object = var_13_object; // 0x478 Mov
	func_1116(); // 0x479 Call
	
Label_1147:
	return 0; // 0x47b Return
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x47d PushV
	var_15_object = var_13_object; // 0x47e Mov
	func_1917(var_14_bool, var_15_object); // 0x47f Call
	if(var_14_bool == 0) goto Label_1161; // 0x481 JumpB
	func_1240(); // 0x483 Call
	var_59_object = Obj(); // 0x485 PushV
	var_59_object = var_13_object; // 0x486 Mov
	func_1991(var_59_object); // 0x487 Call
	
Label_1161:
	return 0; // 0x489 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; // 0x717 PushV
	var_17_object = var_13_object; // 0x718 Mov
	var_18_int = var_14_int; // 0x719 Mov
	var_19_float = var_15_float; // 0x71a Mov
	func_1416(var_18_int, var_19_float); // 0x71b Call
	return 0; // 0x71d Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object, var_14_string)
{
	var_15_float = 0; var_16_float = 0; // 0x71e PushV
	var_17_string = "health"; // 0x71f PushS
	var_18_bool = var_14_string == var_17_string; // 0x720 Eq
	if(var_18_bool == 0) goto Label_1834; // 0x721 JumpB
	var_19_string = "health"; // 0x722 PushS
	GetProperty(var_19_string, var_16_float); // 0x723 Func
	var_20_int = 0; // 0x725 PushI
	var_21_bool = var_16_float <= var_20_int; // 0x726 LE
	if(var_21_bool == 0) goto Label_1834; // 0x727 JumpB
	SignalDeath(var_13_object); // 0x728 Func
	
Label_1834:
	return 2; // 0x72a Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_object)
{
	var_14_object = Obj(); // 0x72c PushV
	var_14_object = var_13_object; // 0x72d Mov
	func_1997(var_14_object); // 0x72e Call
	return 0; // 0x730 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	
Label_1036:
	Hold(); // 0x40c Func
	goto Label_1036; // 0x40e Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	func_1501(var_26_object); // 0x4 Call
	var_65_bool = var_25_bool == 0; // 0x6 Not
	if(var_65_bool == 0) goto Label_10; // 0x7 JumpB
	var_14_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_21_object); // 0xa Func
	var_66_int = 0; // 0xc PushV
	func_1985(var_66_int); // 0xd Call
	SetNPCName(var_66_int); // 0xf ObjFunc
	var_67_string = ""; // 0x11 PushV
	func_1987(var_67_string); // 0x12 Call
	SetPhoto(var_67_string); // 0x14 ObjFunc
	var_68_int = 0; // 0x16 PushV
	func_1717(var_68_int); // 0x17 Call
	SetPlayerName(var_68_int); // 0x19 ObjFunc
	var_23_int = -1; // 0x1b MovI
	IsOverrideActive(var_22_bool); // 0x1c Func
	var_76_bool = var_22_bool; // 0x1e Push
	if(var_76_bool == 0) goto Label_34; // 0x1f JumpB
	var_14_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_21_object); // 0x22 Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x24 PushV
	var_77_object = var_15_object; // 0x25 Mov
	var_78_object = var_21_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_24_bool); // 0x2b ObjFunc
	
Label_45:
	var_126_bool = var_24_bool == 0; // 0x2d Not
	if(var_126_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_24_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_127_object = Obj(); // 0x34 PushV
	var_127_object = var_15_object; // 0x35 Mov
	func_1557(); // 0x36 Call
	StopDialog(var_21_object); // 0x38 Func
	GetReturnValue(var_23_int); // 0x3a ObjFunc
	var_14_int = var_23_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1666(var_86_int, var_87_string)
{
	var_88_int = 0; var_89_int = 0; // 0x682 PushV
	GetVariable(var_87_string, var_89_int); // 0x683 Func
	var_86_int = var_89_int; // 0x685 Mov
	return 2; // 0x686 Return
}


func_131(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x84 PushV
	func_1989(var_97_bool); // 0x85 Call
	var_98_bool = var_97_bool == 0; // 0x87 Not
	if(var_98_bool == 0) goto Label_138; // 0x88 JumpB
	return 0; // 0x89 Return
	
Label_138:
	var_99_bool = var_96_string == var_2_object; // 0x8a Eq
	if(var_99_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_100_string = ""; // 0x8d PushV
	var_100_string = var_96_string; // 0x8e Mov
	func_1561(var_100_string); // 0x8f Call
	var_2_object = var_96_string; // 0x91 TMov
	return 0; // 0x92 Return
}


func_1287(var_150_float, var_151_object, var_152_float, var_153_int)
{
	var_154_int = 0; var_155_string = ""; var_156_int = 0; var_157_float = 0; var_158_float = 0; var_159_float = 0; var_160_int = 0; var_161_string = ""; var_162_int = 0; var_163_float = 0; var_164_float = 0; var_165_float = 0; // 0x507 PushV
	var_166_bool = 0; var_167_object = Obj(); var_168_string = ""; // 0x508 PushV
	var_167_object = var_151_object; // 0x509 Mov
	var_168_string = "health"; // 0x50a MovS
	func_1275(var_166_bool, var_167_object, var_168_string); // 0x50b Call
	var_169_bool = var_166_bool == 0; // 0x50d Not
	if(var_169_bool == 0) goto Label_1297; // 0x50e JumpB
	var_150_float = 0.0; // 0x50f MovF
	return 12; // 0x510 Return
	
Label_1297:
	var_170_bool = 0; var_171_object = Obj(); var_172_string = ""; // 0x511 PushV
	var_171_object = var_151_object; // 0x512 Mov
	var_172_string = "armor"; // 0x513 MovS
	func_1275(var_170_bool, var_171_object, var_172_string); // 0x514 Call
	var_173_bool = var_170_bool == 0; // 0x516 Not
	if(var_173_bool == 0) goto Label_1306; // 0x517 JumpB
	var_160_int = 0; // 0x518 MovI
	goto Label_1309; // 0x519 Jump
	
Label_1309:
	var_174_string = "armor_"; // 0x51d PushS
	var_175_string = ""; var_176_int = 0; // 0x51e PushV
	var_176_int = var_153_int; // 0x51f Mov
	func_1245(var_175_string, var_176_int); // 0x520 Call
	var_161_string = var_174_string + var_175_string; // 0x522 Add2
	var_179_bool = 0; var_180_object = Obj(); var_181_string = ""; // 0x523 PushV
	var_180_object = var_151_object; // 0x524 Mov
	var_181_string = var_161_string; // 0x525 Mov
	func_1275(var_179_bool, var_180_object, var_181_string); // 0x526 Call
	var_182_bool = var_179_bool == 0; // 0x528 Not
	if(var_182_bool == 0) goto Label_1324; // 0x529 JumpB
	var_162_int = 0; // 0x52a MovI
	goto Label_1326; // 0x52b Jump
	
Label_1326:
	var_183_float = 0; var_184_float = 0; var_185_float = 0; // 0x52e PushV
	var_186_int = var_160_int + var_162_int; // 0x52f Add
	var_187_float = 100.0; // 0x530 PushF
	var_184_float = var_186_int / var_186_int; // 0x531 Div2
	var_185_float = 1; // 0x532 MovI
	func_1606(var_183_float, var_184_float, var_185_float); // 0x533 Call
	var_163_float = var_183_float; // 0x534 Mov
	var_189_string = "health"; // 0x536 PushS
	GetProperty(var_189_string, var_164_float); // 0x537 ObjFunc
	var_190_int = 1; // 0x539 PushI
	var_191_int = var_190_int - var_163_float; // 0x53a Sub
	var_165_float = var_152_float * var_191_int; // 0x53b Mult2
	var_192_string = "health"; // 0x53c PushS
	var_193_float = 0; var_194_float = 0; var_195_float = 0; var_196_float = 0; // 0x53d PushV
	var_194_float = var_164_float - var_165_float; // 0x53e Sub2
	var_195_float = 0; // 0x53f MovI
	var_196_float = 1; // 0x540 MovI
	func_1613(var_193_float, var_194_float, var_195_float, var_196_float); // 0x541 Call
	SetProperty(var_192_string, var_193_float); // 0x543 ObjFunc
	var_150_float = var_165_float; // 0x545 Mov
	return 12; // 0x546 Return
	
Label_1324:
	GetProperty(var_161_string, var_162_int); // 0x52c ObjFunc
	
Label_1306:
	var_199_string = "armor"; // 0x51a PushS
	GetProperty(var_199_string, var_160_int); // 0x51b ObjFunc
}


func_1671(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x687 PushV
	FindActor(var_18_object, var_15_string); // 0x688 Func
	var_19_bool = var_18_object == 0; // 0x68a NullEq
	if(var_19_bool == 0) goto Label_1678; // 0x68b JumpB
	var_14_bool = 0; // 0x68c MovB
	return 2; // 0x68d Return
	
Label_1678:
	Trigger(var_18_object, var_16_string); // 0x68e Func
	var_14_bool = 1; // 0x690 MovB
	return 2; // 0x691 Return
}


func_905(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x389 TMovT
	var_1_object = 0; // 0x38a SetNullT
	Face(var_0_object); // 0x38b Func
	return 0; // 0x38d Return
}


func_1162(var_0_object, var_1_object)
{
	var_258_int = 0; var_259_bool = 0; var_260_cvector = CVector(0,0,0); var_261_object = Obj(); var_262_int = 0; var_263_bool = 0; var_264_cvector = CVector(0,0,0); var_265_object = Obj(); // 0x48a PushV
	GetPFPosition(var_265_object); // 0x48b Func
	GetDirection(var_0_object); // 0x48d Func
	
Label_1167:
	var_266_int = 60; // 0x48f PushI
	irand(var_262_int, var_266_int); // 0x490 Func
	var_267_int = 30; // 0x492 PushI
	var_268_int = var_262_int + var_267_int; // 0x493 Add
	Sleep(var_268_int, var_263_bool); // 0x494 Func
	var_269_bool = var_263_bool; // 0x496 Push
	if(var_269_bool == 0) goto Label_1180; // 0x497 JumpB
	func_1085(); // 0x499 Call
	goto Label_1238; // 0x49b Jump
	
Label_1238:
	goto Label_1167; // 0x4d6 Jump
	
Label_1180:
	GetPFPosition(var_264_cvector); // 0x49c Func
	var_270_float = 0; var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); // 0x49e PushV
	var_271_cvector = var_1_object; // 0x49f MovT
	var_272_cvector = var_264_cvector; // 0x4a0 Mov
	func_1602(var_270_float, var_271_cvector, var_272_cvector); // 0x4a1 Call
	var_275_int = 40000; // 0x4a3 PushI
	var_276_bool = var_270_float > var_275_int; // 0x4a4 GT
	if(var_276_bool == 0) goto Label_1224; // 0x4a5 JumpB
	FindPathTo(var_265_object, var_265_object); // 0x4a6 Func
	var_277_bool = var_265_object != 0; // 0x4a8 NullNeq
	if(var_277_bool == 0) goto Label_1219; // 0x4a9 JumpB
	RotatePath(var_265_object, var_263_bool); // 0x4aa Func
	var_278_bool = var_263_bool == 0; // 0x4ac Not
	if(var_278_bool == 0) goto Label_1199; // 0x4ad JumpB
	goto Label_1237; // 0x4ae Jump
	
Label_1237:
	goto Label_1180; // 0x4d5 Jump
	
Label_1199:
	var_279_bool = 0; // 0x4af PushB
	FollowPath(var_265_object, var_279_bool, var_263_bool); // 0x4b0 Func
	var_280_bool = var_263_bool == 0; // 0x4b2 Not
	if(var_280_bool == 0) goto Label_1205; // 0x4b3 JumpB
	goto Label_1237; // 0x4b4 Jump
	
Label_1205:
	var_281_float = GetByIndex(var_0_object, 0); // 0x4b5 PushE
	var_282_float = GetByIndex(var_0_object, 2); // 0x4b6 PushE
	Rotate(var_281_float, var_282_float, var_263_bool); // 0x4b7 Func
	var_283_bool = var_263_bool == 0; // 0x4b9 Not
	if(var_283_bool == 0) goto Label_1212; // 0x4ba JumpB
	goto Label_1237; // 0x4bb Jump
	
Label_1212:
	WaitForAnimEnd(var_263_bool); // 0x4bc Func
	var_284_bool = var_263_bool == 0; // 0x4be Not
	if(var_284_bool == 0) goto Label_1217; // 0x4bf JumpB
	goto Label_1237; // 0x4c0 Jump
	
Label_1217:
	goto Label_1238; // 0x4c1 Jump
	
Label_1219:
	var_285_int = 1; // 0x4c3 PushI
	Sleep(var_285_int); // 0x4c4 Func
	var_265_object = 0; // 0x4c6 SetNull
	goto Label_1237; // 0x4c7 Jump
	
Label_1224:
	var_286_float = GetByIndex(var_0_object, 0); // 0x4c8 PushE
	var_287_float = GetByIndex(var_0_object, 2); // 0x4c9 PushE
	Rotate(var_286_float, var_287_float, var_263_bool); // 0x4ca Func
	var_288_bool = var_263_bool == 0; // 0x4cc Not
	if(var_288_bool == 0) goto Label_1231; // 0x4cd JumpB
	goto Label_1237; // 0x4ce Jump
	
Label_1231:
	WaitForAnimEnd(var_263_bool); // 0x4cf Func
	var_289_bool = var_263_bool == 0; // 0x4d1 Not
	if(var_289_bool == 0) goto Label_1236; // 0x4d2 JumpB
	goto Label_1237; // 0x4d3 Jump
	
Label_1236:
	goto Label_1238; // 0x4d4 Jump
}


func_1801(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0; // 0x709 PushV
	GetInvItemByName(var_53_int, var_51_string); // 0x70a Func
	var_50_int = var_53_int; // 0x70c Mov
	return 2; // 0x70d Return
}


func_1416(var_17_object, var_18_int)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x588 PushV
	var_40_bool = 0; // 0x589 PushV
	var_40_bool = 0; // 0x58a MovB
	var_41_int = 4; // 0x58b PushI
	var_42_bool = var_18_int != var_41_int; // 0x58c Neq
	if(var_42_bool == 0) goto Label_1426; // 0x58d JumpB
	var_43_int = 5; // 0x58e PushI
	var_44_bool = var_18_int != var_43_int; // 0x58f Neq
	if(var_44_bool == 0) goto Label_1426; // 0x590 JumpB
	var_40_bool = 1; // 0x591 MovB
	
Label_1426:
	if(var_40_bool == 0) goto Label_1445; // 0x592 JumpB
	GetScene(var_30_object); // 0x593 Func
	GetPosition(var_32_cvector); // 0x595 Func
	GetEyesHeight(var_33_float); // 0x597 Func
	var_45_float = GetByIndex(var_32_cvector, 1); // 0x599 PushE
	var_46_int = 2; // 0x59a PushI
	var_47_float = var_33_float / var_46_int; // 0x59b Div
	var_45_float = var_45_float + var_47_float; // 0x59c Add2
	SetByIndex(var_32_cvector, 1) = var_45_float; // 0x59d PopE
	var_48_string = "scripted"; // 0x59e PushS
	var_49_cvector = CVector(0.0, 0.0, 1.0); // 0x59f PushVec
	var_50_string = "blood.xml"; // 0x5a0 PushS
	AddActorByType(var_31_object, var_48_string, var_30_object, var_32_cvector, var_49_cvector, var_50_string); // 0x5a1 Func
	var_31_object = 0; // 0x5a3 SetNull
	var_30_object = 0; // 0x5a4 SetNull
	
Label_1445:
	var_51_bool = var_17_object == 0; // 0x5a5 NullEq
	if(var_51_bool == 0) goto Label_1448; // 0x5a6 JumpB
	return 20; // 0x5a7 Return
	
Label_1448:
	GetSecondaryAnimationType(var_34_int); // 0x5a8 Func
	var_52_int = 0; // 0x5aa PushI
	var_53_bool = var_34_int < var_52_int; // 0x5ab LT
	if(var_53_bool == 0) goto Label_1454; // 0x5ac JumpB
	return 20; // 0x5ad Return
	
Label_1454:
	GetPosition(var_35_cvector); // 0x5ae ObjFunc
	GetPosition(var_36_cvector); // 0x5b0 Func
	GetDirection(var_37_cvector); // 0x5b2 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x5b4 Sub2
	var_54_float = GetByIndex(var_38_cvector, 0); // 0x5b5 PushE
	var_55_float = GetByIndex(var_37_cvector, 0); // 0x5b6 PushE
	var_56_float = var_54_float * var_55_float; // 0x5b7 Mult
	var_57_float = GetByIndex(var_38_cvector, 2); // 0x5b8 PushE
	var_58_float = GetByIndex(var_37_cvector, 2); // 0x5b9 PushE
	var_59_float = var_57_float * var_58_float; // 0x5ba Mult
	var_60_int = var_56_float + var_59_float; // 0x5bb Add
	var_61_int = 0; // 0x5bc PushI
	var_62_bool = var_60_int >= var_61_int; // 0x5bd GE
	if(var_62_bool == 0) goto Label_1473; // 0x5be JumpB
	var_39_string = "fhit"; // 0x5bf MovS
	goto Label_1474; // 0x5c0 Jump
	
Label_1474:
	var_63_string = "hit_react"; // 0x5c2 PushS
	var_64_string = "1"; // 0x5c3 PushS
	var_65_int = var_39_string + var_64_string; // 0x5c4 Add
	var_66_string = "2"; // 0x5c5 PushS
	var_67_int = var_39_string + var_66_string; // 0x5c6 Add
	var_68_int = -10; // 0x5c7 PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0x5c8 Func
	return 20; // 0x5ca Return
	
Label_1473:
	var_39_string = "bhit"; // 0x5c1 MovS
}


func_910(var_0_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_object = Obj(); var_89_int = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_object = Obj(); var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_int = 0; var_99_cvector = CVector(0,0,0); var_100_float = 0; var_101_object = Obj(); var_102_object = Obj(); // 0x38e PushV
	ReportAttack(var_0_object); // 0x38f Func
	GetDirection(var_94_cvector); // 0x391 Func
	var_103_cvector = CVector(0,0,0); var_104_object = Obj(); // 0x393 PushV
	var_104_object = var_0_object; // 0x394 MovT
	func_1253(var_104_object); // 0x395 Call
	var_95_cvector = var_103_cvector; // 0x396 Mov
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x398 PushV
	var_110_cvector = var_94_cvector; // 0x399 Mov
	var_111_cvector = var_95_cvector; // 0x39a Mov
	func_1649(var_109_float, var_110_cvector, var_111_cvector); // 0x39b Call
	var_133_float = 0.96593; // 0x39d PushF
	var_134_bool = var_109_float < var_133_float; // 0x39e LT
	if(var_134_bool == 0) goto Label_929; // 0x39f JumpB
	return 18; // 0x3a0 Return
	
Label_929:
	var_135_string = "all"; // 0x3a1 PushS
	var_136_string = "attack_begin1"; // 0x3a2 PushS
	PlayAnimation(var_135_string, var_136_string); // 0x3a3 Func
	WaitForAnimEnd(); // 0x3a5 Func
	var_137_string = "shot"; // 0x3a7 PushS
	Speak(var_137_string); // 0x3a8 Func
	GetDirection(var_94_cvector); // 0x3aa Func
	var_138_cvector = CVector(0,0,0); var_139_object = Obj(); // 0x3ac PushV
	var_139_object = var_0_object; // 0x3ad MovT
	func_1253(var_139_object); // 0x3ae Call
	var_95_cvector = var_138_cvector; // 0x3af Mov
	var_140_float = GetByIndex(var_95_cvector, 1); // 0x3b1 PushE
	var_141_float = 0; var_142_object = Obj(); // 0x3b2 PushV
	var_142_object = var_0_object; // 0x3b3 MovT
	func_1494(var_142_object); // 0x3b4 Call
	var_140_float = var_140_float + var_141_float; // 0x3b6 Add2
	SetByIndex(var_95_cvector, 1) = var_140_float; // 0x3b7 PopE
	var_147_float = 0.2618; // 0x3b8 PushF
	RandVecCone3D(var_96_cvector, var_95_cvector, var_147_float); // 0x3b9 Func
	GetVictimMaterial(var_96_cvector, var_97_object, var_98_int, var_99_cvector); // 0x3bb Func
	var_148_bool = var_97_object != 0; // 0x3bd NullNeq
	if(var_148_bool == 0) goto Label_988; // 0x3be JumpB
	var_149_bool = var_97_object == var_0_object; // 0x3bf Eq
	if(var_149_bool == 0) goto Label_973; // 0x3c0 JumpB
	var_150_float = 0; var_151_object = Obj(); var_152_float = 0; var_153_int = 0; // 0x3c1 PushV
	var_151_object = var_0_object; // 0x3c2 MovT
	var_152_float = 1.5; // 0x3c3 MovF
	var_153_int = 0; // 0x3c4 MovI
	func_1287(var_150_float, var_151_object, var_152_float, var_153_int); // 0x3c5 Call
	var_100_float = var_150_float; // 0x3c6 Mov
	var_200_int = 2; // 0x3c8 PushI
	var_201_float = 1.5; // 0x3c9 PushF
	ReportHit(var_0_object, var_200_int, var_100_float, var_201_float); // 0x3ca Func
	goto Label_988; // 0x3cc Jump
	
Label_988:
	var_202_string = "all"; // 0x3dc PushS
	var_203_string = "attack_end1"; // 0x3dd PushS
	PlayAnimation(var_202_string, var_203_string); // 0x3de Func
	WaitForAnimEnd(); // 0x3e0 Func
	var_204_string = "all"; // 0x3e2 PushS
	var_205_string = "attack_on"; // 0x3e3 PushS
	LockAnimationEnd(var_204_string, var_205_string); // 0x3e4 Func
	return 18; // 0x3e6 Return
	
Label_973:
	var_206_int = -1; // 0x3cd PushI
	var_207_bool = var_98_int != var_206_int; // 0x3ce Neq
	if(var_207_bool == 0) goto Label_988; // 0x3cf JumpB
	GetScene(var_101_object); // 0x3d0 Func
	var_208_string = "scripted"; // 0x3d2 PushS
	var_209_cvector = CVector(0.0, 0.0, 1.0); // 0x3d3 PushVec
	var_210_string = "richochet.xml"; // 0x3d4 PushS
	AddActorByType(var_102_object, var_208_string, var_101_object, var_99_cvector, var_209_cvector, var_210_string); // 0x3d5 Func
	var_211_string = "Material"; // 0x3d7 PushS
	SetScriptProperty(var_211_string, var_98_int); // 0x3d8 ObjFunc
	var_102_object = 0; // 0x3da SetNull
	var_101_object = 0; // 0x3db SetNull
}


func_1806(var_20_object)
{
	var_21_object = Obj(); // 0x70f PushV
	var_21_object = var_20_object; // 0x710 Mov
	TaskCall(2); // 0x711 TaskCall
	func_320(var_21_object); // 0x712 Call
	TaskReturn(); // 0x713 TaskReturn
	return 0; // 0x715 Return
}


func_1683()
{
	var_21_string = "d11q01"; // 0x694 PushS
	var_22_int = 3; // 0x695 PushI
	SetVariable(var_21_string, var_22_int); // 0x696 Func
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x698 PushV
	var_24_string = "quest_d11_01"; // 0x699 MovS
	var_25_string = "soldier_attack"; // 0x69a MovS
	func_1671(var_23_bool, var_24_string, var_25_string); // 0x69b Call
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0x69d PushV
	var_30_string = "quest_d11_01"; // 0x69e MovS
	var_31_string = "restore_andrei"; // 0x69f MovS
	func_1671(var_29_bool, var_30_string, var_31_string); // 0x6a0 Call
	return 0; // 0x6a2 Return
}


func_1939(var_60_object)
{
	var_61_object = Obj(); // 0x794 PushV
	var_61_object = var_60_object; // 0x795 Mov
	func_1991(var_61_object); // 0x796 Call
	return 0; // 0x798 Return
}


func_1557()
{
	CameraSwitchToNormal(); // 0x616 Func
	return 0; // 0x618 Return
}


func_1561(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x619 PushV
	var_105_string = "playing "; // 0x61a PushS
	var_106_int = var_105_string + var_100_string; // 0x61b Add
	Trace(var_106_int); // 0x61c Func
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float); // 0x61e Func
	lshPlayAnimation(var_103_float, var_104_float); // 0x620 Func
	var_107_string = "start: "; // 0x622 PushS
	var_108_int = var_107_string + var_103_float; // 0x623 Add
	Trace(var_108_int); // 0x624 Func
	var_109_string = "end: "; // 0x626 PushS
	var_110_int = var_109_string + var_104_float; // 0x627 Add
	Trace(var_110_int); // 0x628 Func
	return 4; // 0x62a Return
}


func_1945(var_15_bool, var_16_object, var_17_object)
{
	var_18_float = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; // 0x799 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x79a PushV
	var_23_object = var_17_object; // 0x79b Mov
	var_24_string = "reputation"; // 0x79c MovS
	func_1275(var_22_bool, var_23_object, var_24_string); // 0x79d Call
	var_31_bool = var_22_bool == 0; // 0x79f Not
	if(var_31_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_15_bool = 0; // 0x7a1 MovB
	return 4; // 0x7a2 Return
	
Label_1955:
	var_32_string = "reputation"; // 0x7a3 PushS
	GetProperty(var_32_string, var_20_float); // 0x7a4 ObjFunc
	var_33_float = 0.5; // 0x7a6 PushF
	var_34_bool = var_20_float < var_33_float; // 0x7a7 LT
	if(var_34_bool == 0) goto Label_1963; // 0x7a8 JumpB
	var_15_bool = 0; // 0x7a9 MovB
	return 4; // 0x7aa Return
	
Label_1963:
	CanSee(var_21_bool, var_16_object); // 0x7ab Func
	var_35_bool = 0; // 0x7ad PushV
	var_35_bool = 1; // 0x7ae MovB
	var_36_bool = var_21_bool; // 0x7af Push
	if(var_36_bool == 0) goto Label_1977; // 0x7b0 JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x7b1 PushV
	var_38_object = var_16_object; // 0x7b2 Mov
	func_1260(var_38_object); // 0x7b3 Call
	var_45_float = 160000.0; // 0x7b5 PushF
	var_46_bool = var_37_float <= var_45_float; // 0x7b6 LE
	if(var_46_bool == 0) goto Label_1977; // 0x7b7 JumpB
	var_35_bool = 0; // 0x7b8 MovB
	
Label_1977:
	if(var_35_bool == 0) goto Label_1983; // 0x7b9 JumpB
	var_47_float = -0.2; // 0x7ba PushF
	ReportReputationChange(var_16_object, var_17_object, var_47_float); // 0x7bb Func
	var_15_bool = 1; // 0x7bd MovB
	return 4; // 0x7be Return
	
Label_1983:
	var_15_bool = 0; // 0x7bf MovB
	return 4; // 0x7c0 Return
}


func_1699()
{
	var_94_string = "ood11Officer1"; // 0x6a4 PushS
	var_95_int = 1; // 0x6a5 PushI
	SetVariable(var_94_string, var_95_int); // 0x6a6 Func
	return 0; // 0x6a8 Return
}


func_1064(var_20_object)
{
	func_1841(); // 0x42a Call
	var_31_object = Obj(); // 0x42c PushV
	var_31_object = var_20_object; // 0x42d Mov
	func_1116(); // 0x42e Call
	
Label_1072:
	func_1077(); // 0x431 Call
	goto Label_1072; // 0x433 Jump
}


func_1705(var_84_bool)
{
	var_86_int = 0; var_87_string = ""; // 0x6aa PushV
	var_87_string = "ood11Officer1"; // 0x6ab MovS
	func_1666(var_86_int, var_87_string); // 0x6ac Call
	var_90_int = 0; // 0x6ae PushI
	var_91_bool = var_86_int == var_90_int; // 0x6af Eq
	if(var_91_bool == 0) goto Label_1715; // 0x6b0 JumpB
	var_84_bool = 1; // 0x6b1 MovB
	return 0; // 0x6b2 Return
	
Label_1715:
	var_84_bool = 0; // 0x6b3 MovB
	return 0; // 0x6b4 Return
}


func_1579()
{
	var_16_bool = 0; // 0x62b PushV
	func_1989(var_16_bool); // 0x62c Call
	if(var_16_bool == 0) goto Label_1585; // 0x62e JumpB
	lshStopSpeech(); // 0x62f Func
	
Label_1585:
	return 0; // 0x631 Return
}


func_1841()
{
	var_27_object = GlobalVars[0]; // 0x731 PushGE
	var_28_object = Obj(); // 0x732 PushV
	func_1624(var_28_object); // 0x733 Call
	var_27_object = var_28_object; // 0x734 Mov
	GlobalVars[0] = var_27_object; // 0x736 PopGE
	return 0; // 0x737 Return
}


func_1586(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x632 PushV
	self(var_19_object); // 0x633 Func
	var_17_object = var_19_object; // 0x635 Mov
	return 2; // 0x636 Return
}


func_1717(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x6b5 PushV
	var_71_string = "player"; // 0x6b6 PushS
	GetVariable(var_71_string, var_70_int); // 0x6b7 Func
	var_72_int = 0; // 0x6b9 PushI
	var_73_bool = var_70_int == var_72_int; // 0x6ba Eq
	if(var_73_bool == 0) goto Label_1727; // 0x6bb JumpB
	var_68_int = 200001; // 0x6bc MovI
	return 2; // 0x6bd Return
	
Label_1727:
	var_74_int = 1; // 0x6bf PushI
	var_75_bool = var_70_int == var_74_int; // 0x6c0 Eq
	if(var_75_bool == 0) goto Label_1732; // 0x6c1 JumpB
	var_68_int = 200002; // 0x6c2 MovI
	return 2; // 0x6c3 Return
	
Label_1732:
	var_68_int = 200003; // 0x6c4 MovI
	return 2; // 0x6c5 Return
}


func_1077()
{
	func_1841(); // 0x436 Call
	
Label_1080:
	func_1162(var_26_cvector, var_20_object); // 0x439 Call
	goto Label_1080; // 0x43b Jump
}


func_439(var_85_string)
{
	RemoveRTEnvelope(); // 0x1b8 Func
	SetDeathState(); // 0x1ba Func
	Stop(); // 0x1bc Func
	StopAsync(); // 0x1be Func
	StopSecondaryAnimation(); // 0x1c0 Func
	var_86_string = "all"; // 0x1c2 PushS
	PlayAnimation(var_86_string, var_85_string); // 0x1c3 Func
	WaitForAnimEnd(); // 0x1c5 Func
	var_87_string = "all"; // 0x1c7 PushS
	LockAnimationEnd(var_87_string, var_85_string); // 0x1c8 Func
	RemoveEnvelope(); // 0x1ca Func
	return 0; // 0x1cc Return
}


func_1848(var_65_object, var_66_bool)
{
	var_67_object = Obj(); var_68_bool = 0; // 0x739 PushV
	var_67_object = var_65_object; // 0x73a Mov
	var_68_bool = var_66_bool; // 0x73b Mov
	TaskCall(5); // 0x73c TaskCall
	func_741(var_69_object, var_70_object, var_71_bool, var_67_object, var_68_bool); // 0x73d Call
	TaskReturn(); // 0x73e TaskReturn
	ResetAAS(); // 0x740 Func
	return 0; // 0x742 Return
}


func_1592(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x638 PushV
	var_55_int = var_51_cvector | var_51_cvector; // 0x639 Or
	var_54_float = sqrt(var_55_int); // 0x63a Sqrt2
	var_56_float = 0.0; // 0x63b PushF
	var_57_bool = var_54_float < var_56_float; // 0x63c LT
	if(var_57_bool == 0) goto Label_1600; // 0x63d JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x63e MovV
	return 2; // 0x63f Return
	
Label_1600:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x640 Div2
	return 2; // 0x641 Return
}


func_1085()
{
	return 0; // 0x43d Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x40 TMov
	var_1_object = var_77_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_83_int = 1; // 0x43 PushI
	if(var_83_int == 0) goto Label_101; // 0x44 JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x45 PushV
	var_85_object = var_1_object; // 0x46 MovT
	func_1705(var_85_object); // 0x47 Call
	if(var_84_bool == 0) goto Label_99; // 0x49 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x4a PushV
	var_92_object = var_1_object; // 0x4b MovT
	var_93_object = var_0_object; // 0x4c MovT
	func_1699(); // 0x4d Call
	var_96_string = ""; // 0x4f PushV
	var_96_string = "Neutral"; // 0x50 MovS
	func_131(var_78_object, var_96_string); // 0x51 Call
	var_111_int = 14445; // 0x53 PushI
	SetMessage(var_111_int); // 0x54 TObjFunc
	ClearReplies(); // 0x56 TObjFunc
	var_112_int = 14446; // 0x58 PushI
	var_113_int = 15675; // 0x59 PushI
	var_114_int = 15674; // 0x5a PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5b TObjFunc
	var_115_int = 14456; // 0x5d PushI
	var_116_int = 15687; // 0x5e PushI
	var_117_int = 15686; // 0x5f PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x60 TObjFunc
	goto Label_101; // 0x62 Jump
	
Label_101:
	var_118_bool = 0; // 0x65 PushV
	func_1989(var_118_bool); // 0x66 Call
	if(var_118_bool == 0) goto Label_116; // 0x68 JumpB
	
Label_105:
	lshWaitForAnimEnd(); // 0x69 Func
	var_119_string = var_3_string; // 0x6b PushT
	if(var_119_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_115:
	goto Label_130; // 0x73 Jump
	
Label_130:
	return 0; // 0x82 Return
	
Label_110:
	var_120_string = ""; // 0x6e PushV
	var_120_string = var_2_object; // 0x6f MovT
	func_1561(var_120_string); // 0x70 Call
	goto Label_105; // 0x72 Jump
	
Label_116:
	var_121_string = "all"; // 0x74 PushS
	var_122_string = "idle"; // 0x75 PushS
	PlayAnimation(var_121_string, var_122_string); // 0x76 Func
	
Label_120:
	WaitForAnimEnd(); // 0x78 Func
	var_123_string = var_3_string; // 0x7a PushT
	if(var_123_string == 0) goto Label_125; // 0x7b JumpB
	goto Label_130; // 0x7c Jump
	
Label_125:
	var_124_string = "all"; // 0x7d PushS
	var_125_string = "idle"; // 0x7e PushS
	PlayAnimation(var_124_string, var_125_string); // 0x7f Func
	goto Label_120; // 0x81 Jump
	
Label_99:
	return 0; // 0x63 Return
}


func_320(var_21_object)
{
	func_1764(); // 0x142 Call
	var_62_object = Obj(); // 0x144 PushV
	var_62_object = var_21_object; // 0x145 Mov
	func_329(var_62_object); // 0x146 Call
	return 0; // 0x148 Return
}


func_1985(var_66_int)
{
	var_66_int = 14841; // 0x7c1 MovI
	return 0; // 0x7c2 Return
}


func_1602(var_270_float, var_271_cvector, var_272_cvector)
{
	var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); // 0x642 PushV
	var_274_cvector = var_272_cvector - var_271_cvector; // 0x643 Sub2
	var_270_float = var_274_cvector | var_274_cvector; // 0x644 Or2
	return 2; // 0x645 Return
}


func_1987(var_67_string)
{
	var_67_string = "ui/NPC_Black.png"; // 0x7c3 MovS
	return 0; // 0x7c4 Return
}


func_1859(var_78_object)
{
	var_79_bool = 0; var_80_bool = 0; // 0x743 PushV
	var_81_bool = var_78_object == 0; // 0x744 NullEq
	if(var_81_bool == 0) goto Label_1863; // 0x745 JumpB
	return 2; // 0x746 Return
	
Label_1863:
	var_82_object = GlobalVars[0]; // 0x747 PushGE
	in(var_80_bool, var_78_object); // 0x748 ObjFunc
	var_83_bool = var_80_bool == 0; // 0x74a Not
	if(var_83_bool == 0) goto Label_1871; // 0x74b JumpB
	var_84_object = GlobalVars[0]; // 0x74c PushGE
	add(var_78_object); // 0x74d ObjFunc
	
Label_1871:
	return 2; // 0x74f Return
}


func_1989(var_97_bool)
{
	var_97_bool = 0; // 0x7c5 MovB
	return 0; // 0x7c6 Return
}


func_1606(var_183_float, var_184_float, var_185_float)
{
	var_188_bool = var_184_float < var_185_float; // 0x647 LT
	if(var_188_bool == 0) goto Label_1611; // 0x648 JumpB
	var_183_float = var_184_float; // 0x649 Mov
	goto Label_1612; // 0x64a Jump
	
Label_1612:
	return 0; // 0x64c Return
	
Label_1611:
	var_183_float = var_185_float; // 0x64b Mov
}


func_1991(var_59_object)
{
	var_60_object = Obj(); // 0x7c8 PushV
	var_60_object = var_59_object; // 0x7c9 Mov
	func_1883(var_60_object); // 0x7ca Call
	return 0; // 0x7cc Return
}


func_1351(var_33_bool)
{
	var_35_bool = 0; var_36_bool = 0; // 0x547 PushV
	IsDead(var_36_bool); // 0x548 ObjFunc
	var_33_bool = var_36_bool; // 0x54a Mov
	return 2; // 0x54b Return
}


func_329(var_62_object)
{
	EventDisable(0); // 0x14a EventDisable
	var_63_object = Obj(); // 0x14b PushV
	var_63_object = var_62_object; // 0x14c Mov
	func_352(var_63_object); // 0x14d Call
	var_113_int = 50; // 0x14f PushI
	var_114_int = 40; // 0x150 PushI
	SetRTEnvelope(var_113_int, var_114_int); // 0x151 Func
	EventEnable(0); // 0x153 EventEnable
	
Label_340:
	Hold(); // 0x154 Func
	goto Label_340; // 0x156 Jump
}


func_1734(var_27_int, var_28_int)
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x6c6 PushV
	var_37_bool = var_27_int > var_28_int; // 0x6c7 GT
	if(var_37_bool == 0) goto Label_1741; // 0x6c8 JumpB
	var_38_string = "GenerateMoney: iMin > iMax"; // 0x6c9 PushS
	Trace(var_38_string); // 0x6ca Func
	return 8; // 0x6cc Return
	
Label_1741:
	var_33_int = 0; // 0x6cd MovI
	var_39_bool = var_27_int != var_28_int; // 0x6ce Neq
	if(var_39_bool == 0) goto Label_1748; // 0x6cf JumpB
	var_40_int = var_28_int - var_27_int; // 0x6d0 Sub
	irand(var_34_int, var_40_int); // 0x6d1 Func
	goto Label_1752; // 0x6d3 Jump
	
Label_1752:
	var_33_int = var_33_int + var_27_int; // 0x6d8 Add2
	var_41_int = 0; // 0x6d9 PushI
	var_42_bool = var_33_int == var_41_int; // 0x6da Eq
	if(var_42_bool == 0) goto Label_1757; // 0x6db JumpB
	return 8; // 0x6dc Return
	
Label_1757:
	var_43_string = "Money"; // 0x6dd PushS
	GetInvItemByName(var_35_int, var_43_string); // 0x6de Func
	var_44_int = 0; // 0x6e0 PushI
	AddItem(var_36_bool, var_35_int, var_44_int, var_33_int); // 0x6e1 Func
	return 8; // 0x6e3 Return
	
Label_1748:
	var_45_int = 0; // 0x6d4 PushI
	var_46_bool = var_27_int == var_45_int; // 0x6d5 Eq
	if(var_46_bool == 0) goto Label_1752; // 0x6d6 JumpB
	return 8; // 0x6d7 Return
}


func_1483()
{
	var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); // 0x5cb PushV
	GetPosition(var_218_cvector); // 0x5cc ObjFunc
	GetPosition(var_219_cvector); // 0x5ce Func
	var_220_cvector = var_218_cvector - var_219_cvector; // 0x5d0 Sub2
	var_221_float = GetByIndex(var_220_cvector, 0); // 0x5d1 PushE
	var_222_float = GetByIndex(var_220_cvector, 2); // 0x5d2 PushE
	RotateAsync(var_221_float, var_222_float); // 0x5d3 Func
	return 6; // 0x5d5 Return
}


func_1356(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x54c PushV
	var_28_bool = var_23_object == 0; // 0x54d NullEq
	if(var_28_bool == 0) goto Label_1361; // 0x54e JumpB
	var_22_bool = 0; // 0x54f MovB
	return 4; // 0x550 Return
	
Label_1361:
	var_29_bool = 0; // 0x551 PushV
	var_29_bool = 0; // 0x552 MovB
	var_30_string = "IsDead"; // 0x553 PushS
	var_31_int = 1; // 0x554 PushI
	var_32_bool = IsFuncExist(var_23_object, var_30_string, var_31_int); // 0x555 FuncExist
	if(var_32_bool == 0) goto Label_1373; // 0x556 JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0x557 PushV
	var_34_object = var_23_object; // 0x558 Mov
	func_1351(var_34_object); // 0x559 Call
	if(var_33_bool == 0) goto Label_1373; // 0x55b JumpB
	var_29_bool = 1; // 0x55c MovB
	
Label_1373:
	if(var_29_bool == 0) goto Label_1376; // 0x55d JumpB
	var_22_bool = 0; // 0x55e MovB
	return 4; // 0x55f Return
	
Label_1376:
	GetScene(var_26_object); // 0x560 Func
	var_37_bool = var_26_object == 0; // 0x562 NullEq
	if(var_37_bool == 0) goto Label_1382; // 0x563 JumpB
	var_22_bool = 0; // 0x564 MovB
	return 4; // 0x565 Return
	
Label_1382:
	GetScene(var_27_object); // 0x566 ObjFunc
	var_38_bool = var_26_object != var_27_object; // 0x568 Neq
	if(var_38_bool == 0) goto Label_1388; // 0x569 JumpB
	var_22_bool = 0; // 0x56a MovB
	return 4; // 0x56b Return
	
Label_1388:
	var_22_bool = 1; // 0x56c MovB
	return 4; // 0x56d Return
}


func_1613(var_193_float, var_194_float, var_195_float, var_196_float)
{
	var_197_bool = var_194_float < var_195_float; // 0x64e LT
	if(var_197_bool == 0) goto Label_1618; // 0x64f JumpB
	var_193_float = var_195_float; // 0x650 Mov
	return 0; // 0x651 Return
	
Label_1618:
	var_198_bool = var_194_float > var_196_float; // 0x652 GT
	if(var_198_bool == 0) goto Label_1622; // 0x653 JumpB
	var_193_float = var_196_float; // 0x654 Mov
	return 0; // 0x655 Return
	
Label_1622:
	var_193_float = var_194_float; // 0x656 Mov
	return 0; // 0x657 Return
}


func_1997(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x7cd PushV
	GetScene(var_16_object); // 0x7ce Func
	var_17_object = Obj(); // 0x7d0 PushV
	func_1586(var_17_object); // 0x7d1 Call
	RemoveStationaryActor(var_17_object); // 0x7d3 ObjFunc
	var_20_object = Obj(); // 0x7d5 PushV
	var_20_object = var_14_object; // 0x7d6 Mov
	func_1806(var_20_object); // 0x7d7 Call
	return 2; // 0x7d9 Return
}


func_586(var_0_object, var_247_object)
{
	var_250_bool = 0; var_251_int = 0; var_252_int = 0; var_253_bool = 0; var_254_int = 0; var_255_int = 0; // 0x24a PushV
	var_0_object = var_247_object; // 0x24b TMov
	CanSee(var_255_int, var_0_object); // 0x24c Func
	var_256_object = var_1_object; // 0x24e PushT
	if(var_256_object == 0) goto Label_605; // 0x24f JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x250 PushV
	var_258_object = var_0_object; // 0x251 MovT
	func_1904(var_257_bool, var_258_object); // 0x252 Call
	if(var_257_bool == 0) goto Label_603; // 0x254 JumpB
	var_268_object = Obj(); var_269_bool = 0; // 0x255 PushV
	var_268_object = var_0_object; // 0x256 MovT
	var_269_bool = 1; // 0x257 MovB
	func_1848(var_268_object, var_269_bool); // 0x258 Call
	return 6; // 0x25a Return
	
Label_603:
	Face(var_0_object); // 0x25b Func
	
Label_605:
	var_270_string = "all"; // 0x25d PushS
	var_271_string = "shoot_begin"; // 0x25e PushS
	PlayAnimation(var_270_string, var_271_string); // 0x25f Func
	WaitForAnimEnd(var_253_bool); // 0x261 Func
	var_272_bool = var_253_bool == 0; // 0x263 Not
	if(var_272_bool == 0) goto Label_616; // 0x264 JumpB
	StopAsync(); // 0x265 Func
	return 6; // 0x267 Return
	
Label_616:
	var_273_string = "shot"; // 0x268 PushS
	Speak(var_273_string); // 0x269 Func
	var_274_string = "all"; // 0x26b PushS
	var_275_string = "shoot_end"; // 0x26c PushS
	PlayAnimation(var_274_string, var_275_string); // 0x26d Func
	WaitForAnimEnd(var_253_bool); // 0x26f Func
	var_276_bool = var_253_bool == 0; // 0x271 Not
	if(var_276_bool == 0) goto Label_630; // 0x272 JumpB
	StopAsync(); // 0x273 Func
	return 6; // 0x275 Return
	
Label_630:
	var_277_string = "all"; // 0x276 PushS
	var_278_string = "attack_on"; // 0x277 PushS
	LockAnimationEnd(var_277_string, var_278_string); // 0x278 Func
	var_254_int = 0; // 0x27a MovI
	var_255_int = 0; // 0x27b MovI
	
Label_636:
	var_279_int = 20; // 0x27c PushI
	var_280_bool = var_255_int < var_279_int; // 0x27d LT
	if(var_280_bool == 0) goto Label_684; // 0x27e JumpB
	var_281_float = 0.5; // 0x27f PushF
	Sleep(var_281_float, var_253_bool); // 0x280 Func
	var_282_bool = var_253_bool == 0; // 0x282 Not
	if(var_282_bool == 0) goto Label_645; // 0x283 JumpB
	return 6; // 0x284 Return
	
Label_645:
	CanSee(var_255_int, var_0_object); // 0x285 Func
	var_283_object = var_1_object; // 0x287 PushT
	if(var_283_object == 0) goto Label_667; // 0x288 JumpB
	var_254_int = 0; // 0x289 MovI
	var_284_bool = 0; var_285_object = Obj(); // 0x28a PushV
	var_285_object = var_0_object; // 0x28b MovT
	func_1904(var_284_bool, var_285_object); // 0x28c Call
	if(var_284_bool == 0) goto Label_664; // 0x28e JumpB
	func_725(); // 0x290 Call
	var_286_object = Obj(); var_287_bool = 0; // 0x292 PushV
	var_286_object = var_0_object; // 0x293 MovT
	var_287_bool = 0; // 0x294 MovB
	func_1848(var_286_object, var_287_bool); // 0x295 Call
	return 6; // 0x297 Return
	
Label_664:
	Face(var_0_object); // 0x298 Func
	goto Label_681; // 0x29a Jump
	
Label_681:
	var_288_int = 1; // 0x2a9 PushI
	var_255_int = var_255_int + var_288_int; // 0x2aa Add2
	goto Label_636; // 0x2ab Jump
	
Label_667:
	StopAsync(); // 0x29b Func
	var_289_int = 1; // 0x29d PushI
	var_254_int = var_254_int + var_289_int; // 0x29e Add2
	var_290_int = 4; // 0x29f PushI
	var_291_bool = var_254_int == var_290_int; // 0x2a0 Eq
	if(var_291_bool == 0) goto Label_681; // 0x2a1 JumpB
	var_292_string = "all"; // 0x2a2 PushS
	var_293_string = "attack_off"; // 0x2a3 PushS
	PlayAnimation(var_292_string, var_293_string); // 0x2a4 Func
	WaitForAnimEnd(); // 0x2a6 Func
	return 6; // 0x2a8 Return
	
Label_684:
	func_725(); // 0x2ad Call
	var_294_object = Obj(); var_295_bool = 0; // 0x2af PushV
	var_294_object = var_247_object; // 0x2b0 Mov
	var_295_bool = 0; // 0x2b1 MovB
	func_1848(var_294_object, var_295_bool); // 0x2b2 Call
	return 6; // 0x2b4 Return
}


func_1872(var_85_object)
{
	var_86_object = Obj(); // 0x751 PushV
	var_86_object = var_85_object; // 0x752 Mov
	func_1859(var_86_object); // 0x753 Call
	var_87_object = Obj(); var_88_bool = 0; // 0x755 PushV
	var_87_object = var_85_object; // 0x756 Mov
	var_88_bool = 1; // 0x757 MovB
	func_1848(var_87_object, var_88_bool); // 0x758 Call
	return 0; // 0x75a Return
}


func_467(var_0_object, var_58_object)
{
	var_60_bool = 0; var_61_bool = 0; // 0x1d3 PushV
	var_0_object = var_58_object; // 0x1d4 TMov
	Face(var_58_object); // 0x1d5 Func
	
Label_471:
	var_62_float = 0.5; // 0x1d7 PushF
	Sleep(var_62_float, var_61_bool); // 0x1d8 Func
	var_63_bool = 0; // 0x1da PushV
	var_63_bool = 1; // 0x1db MovB
	var_64_bool = var_61_bool == 0; // 0x1dc Not
	if(var_64_bool == 0) goto Label_485; // 0x1dd JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x1de PushV
	var_66_object = var_0_object; // 0x1df MovT
	func_1392(var_65_bool, var_66_object); // 0x1e0 Call
	var_67_bool = var_65_bool == 0; // 0x1e2 Not
	if(var_67_bool == 0) goto Label_485; // 0x1e3 JumpB
	var_63_bool = 0; // 0x1e4 MovB
	
Label_485:
	if(var_63_bool == 0) goto Label_487; // 0x1e5 JumpB
	goto Label_488; // 0x1e6 Jump
	
Label_488:
	StopAsync(); // 0x1e8 Func
	return 2; // 0x1ea Return
	
Label_487:
	goto Label_471; // 0x1e7 Jump
}


func_725()
{
	StopAsync(); // 0x2d5 Func
	StopGroup0(); // 0x2d7 Func
	Stop(); // 0x2d9 Func
	return 0; // 0x2db Return
}


func_1494(var_141_float)
{
	var_143_float = 0; var_144_float = 0; var_145_float = 0; var_146_float = 0; // 0x5d6 PushV
	GetEyesHeight(var_145_float); // 0x5d7 Func
	GetEyesHeight(var_146_float); // 0x5d9 ObjFunc
	var_141_float = var_146_float - var_145_float; // 0x5db Sub2
	return 4; // 0x5dc Return
}


func_1240()
{
	StopGroup0(); // 0x4d8 Func
	Stop(); // 0x4da Func
	return 0; // 0x4dc Return
}


func_1624(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x658 PushV
	CreateObjectSet(var_30_object); // 0x659 Func
	var_28_object = var_30_object; // 0x65b Mov
	return 2; // 0x65c Return
}


func_1883(var_60_object)
{
	var_61_bool = 0; var_62_bool = 0; // 0x75b PushV
	var_63_object = GlobalVars[0]; // 0x75c PushGE
	in(var_62_bool, var_60_object); // 0x75d ObjFunc
	var_64_bool = var_62_bool; // 0x75f Push
	if(var_64_bool == 0) goto Label_1895; // 0x760 JumpB
	var_65_object = Obj(); var_66_bool = 0; // 0x761 PushV
	var_65_object = var_60_object; // 0x762 Mov
	var_66_bool = 1; // 0x763 MovB
	func_1848(var_65_object, var_66_bool); // 0x764 Call
	goto Label_1903; // 0x766 Jump
	
Label_1903:
	return 2; // 0x76f Return
	
Label_1895:
	var_247_object = Obj(); // 0x767 PushV
	var_247_object = var_60_object; // 0x768 Mov
	TaskCall(4); // 0x769 TaskCall
	func_586(var_249_bool, var_247_object); // 0x76a Call
	TaskReturn(); // 0x76b TaskReturn
	ResetAAS(); // 0x76d Func
}


func_1501(var_25_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; // 0x5dd PushV
	GetPosition(var_36_cvector); // 0x5de ObjFunc
	GetEyesHeight(var_35_float); // 0x5e0 ObjFunc
	var_43_float = GetByIndex(var_36_cvector, 1); // 0x5e2 PushE
	var_43_float = var_43_float + var_35_float; // 0x5e3 Add2
	SetByIndex(var_36_cvector, 1) = var_43_float; // 0x5e4 PopE
	GetPosition(var_37_cvector); // 0x5e5 Func
	GetEyesHeight(var_35_float); // 0x5e7 Func
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x5e9 PushE
	var_44_float = var_44_float + var_35_float; // 0x5ea Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x5eb PopE
	var_38_cvector = var_36_cvector - var_37_cvector; // 0x5ec Sub2
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x5ed PushE
	var_45_float = 0; // 0x5ee MovI
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x5ef PopE
	var_46_int = var_38_cvector | var_38_cvector; // 0x5f0 Or
	var_47_float = sqrt(var_46_int); // 0x5f1 Sqrt
	var_38_cvector = var_38_cvector / var_38_cvector; // 0x5f2 Div2
	var_39_cvector = -var_38_cvector; // 0x5f3 Neg2
	var_48_int = 70; // 0x5f4 PushI
	var_49_float = var_38_cvector * var_48_int; // 0x5f5 Mult
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x5f6 PushV
	var_52_cvector = CVector(0.0, 1.0, 0.0); // 0x5f7 PushVec
	var_51_cvector = var_39_cvector ^ var_52_cvector; // 0x5f8 Xor2
	func_1592(var_50_cvector, var_51_cvector); // 0x5f9 Call
	var_58_int = 25; // 0x5fb PushI
	var_59_float = var_50_cvector * var_58_int; // 0x5fc Mult
	var_60_int = var_49_float + var_59_float; // 0x5fd Add
	var_61_cvector = CVector(0.0, 10.0, 0.0); // 0x5fe PushVec
	var_40_cvector = var_60_int - var_61_cvector; // 0x5ff Sub2
	var_41_cvector = var_37_cvector + var_40_cvector; // 0x600 Add2
	IsOverrideActive(var_42_bool); // 0x601 Func
	var_62_bool = var_42_bool; // 0x603 Push
	if(var_62_bool == 0) goto Label_1543; // 0x604 JumpB
	var_25_bool = 0; // 0x605 MovB
	return 16; // 0x606 Return
	
Label_1543:
	StopWorld(); // 0x607 Func
	CameraTransit(var_41_cvector, var_39_cvector); // 0x609 Func
	var_63_float = GetByIndex(var_40_cvector, 0); // 0x60b PushE
	var_64_float = GetByIndex(var_40_cvector, 2); // 0x60c PushE
	Rotate(var_63_float, var_64_float); // 0x60d Func
	CameraWaitForPlayFinish(); // 0x60f Func
	ResumeWorld(); // 0x611 Func
	var_25_bool = 1; // 0x613 MovB
	return 16; // 0x614 Return
}


func_1245(var_175_string, var_176_int)
{
	var_177_int = 1; // 0x4de PushI
	var_178_bool = var_176_int == var_177_int; // 0x4df Eq
	if(var_178_bool == 0) goto Label_1251; // 0x4e0 JumpB
	var_175_string = "fire"; // 0x4e1 MovS
	return 0; // 0x4e2 Return
	
Label_1251:
	var_175_string = "phys"; // 0x4e3 MovS
	return 0; // 0x4e4 Return
}


func_1630(var_112_float, var_113_cvector, var_114_cvector)
{
	var_115_float = GetByIndex(var_113_cvector, 0); // 0x65f PushE
	var_116_float = GetByIndex(var_114_cvector, 0); // 0x660 PushE
	var_117_float = var_115_float * var_116_float; // 0x661 Mult
	var_118_float = GetByIndex(var_113_cvector, 2); // 0x662 PushE
	var_119_float = GetByIndex(var_114_cvector, 2); // 0x663 PushE
	var_120_float = var_118_float * var_119_float; // 0x664 Mult
	var_112_float = var_117_float + var_120_float; // 0x665 Add2
	return 0; // 0x666 Return
}


func_352(var_63_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_string = ""; var_69_object = Obj(); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_string = ""; var_79_object = Obj(); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); // 0x160 PushV
	var_84_bool = var_63_object == 0; // 0x161 NullEq
	if(var_84_bool == 0) goto Label_360; // 0x162 JumpB
	var_85_string = ""; // 0x163 PushV
	var_85_string = "fdie"; // 0x164 MovS
	func_439(var_85_string); // 0x165 Call
	goto Label_438; // 0x167 Jump
	
Label_438:
	return 20; // 0x1b6 Return
	
Label_360:
	GetPosition(var_74_cvector); // 0x168 ObjFunc
	GetPosition(var_75_cvector); // 0x16a Func
	GetDirection(var_76_cvector); // 0x16c Func
	var_77_cvector = var_75_cvector - var_74_cvector; // 0x16e Sub2
	var_88_float = GetByIndex(var_77_cvector, 0); // 0x16f PushE
	var_89_float = GetByIndex(var_76_cvector, 0); // 0x170 PushE
	var_90_float = var_88_float * var_89_float; // 0x171 Mult
	var_91_float = GetByIndex(var_77_cvector, 2); // 0x172 PushE
	var_92_float = GetByIndex(var_76_cvector, 2); // 0x173 PushE
	var_93_float = var_91_float * var_92_float; // 0x174 Mult
	var_94_int = var_90_float + var_93_float; // 0x175 Add
	var_95_int = 0; // 0x176 PushI
	var_96_bool = var_94_int >= var_95_int; // 0x177 GE
	if(var_96_bool == 0) goto Label_379; // 0x178 JumpB
	var_78_string = "fdie"; // 0x179 MovS
	goto Label_380; // 0x17a Jump
	
Label_380:
	RemoveRTEnvelope(); // 0x17c Func
	SetDeathState(); // 0x17e Func
	Stop(); // 0x180 Func
	StopAsync(); // 0x182 Func
	var_79_object = var_63_object; // 0x184 Mov
	var_97_string = "GetScriptProperty"; // 0x185 PushS
	var_98_int = 2; // 0x186 PushI
	var_99_bool = IsFuncExist(var_63_object, var_97_string, var_98_int); // 0x187 FuncExist
	if(var_99_bool == 0) goto Label_404; // 0x188 JumpB
	var_100_string = "Owner"; // 0x189 PushS
	HasScriptProperty(var_80_bool, var_100_string); // 0x18a ObjFunc
	var_101_bool = var_80_bool; // 0x18c Push
	if(var_101_bool == 0) goto Label_404; // 0x18d JumpB
	var_102_string = "Owner"; // 0x18e PushS
	GetScriptProperty(var_79_object, var_102_string); // 0x18f ObjFunc
	var_103_bool = var_79_object == 0; // 0x191 NullEq
	if(var_103_bool == 0) goto Label_404; // 0x192 JumpB
	var_79_object = var_63_object; // 0x193 Mov
	
Label_404:
	var_104_string = "@GetEyesHeight"; // 0x194 PushS
	var_105_int = 1; // 0x195 PushI
	var_106_bool = IsFuncExist(var_79_object, var_104_string, var_105_int); // 0x196 FuncExist
	if(var_106_bool == 0) goto Label_419; // 0x197 JumpB
	GetEyesHeight(var_82_float); // 0x198 ObjFunc
	var_83_cvector = CVector(0.0, 0.0, 0.0); // 0x19a MovV
	var_107_float = GetByIndex(var_83_cvector, 1); // 0x19b PushE
	var_107_float = var_82_float; // 0x19c Mov
	SetByIndex(var_83_cvector, 1) = var_107_float; // 0x19d PopE
	var_108_string = "head"; // 0x19e PushS
	LookAsync(var_63_object, var_108_string, var_83_cvector); // 0x19f Func
	var_81_bool = 1; // 0x1a1 MovB
	goto Label_420; // 0x1a2 Jump
	
Label_420:
	var_109_string = "all"; // 0x1a4 PushS
	PlayAnimation(var_109_string, var_78_string); // 0x1a5 Func
	WaitForAnimEnd(); // 0x1a7 Func
	var_110_bool = var_81_bool; // 0x1a9 Push
	if(var_110_bool == 0) goto Label_432; // 0x1aa JumpB
	StopAsync(); // 0x1ab Func
	var_111_string = "head"; // 0x1ad PushS
	UnlookAsync(var_111_string); // 0x1ae Func
	
Label_432:
	var_112_string = "all"; // 0x1b0 PushS
	LockAnimationEnd(var_112_string, var_78_string); // 0x1b1 Func
	RemoveEnvelope(); // 0x1b3 Func
	var_79_object = 0; // 0x1b5 SetNull
	
Label_419:
	var_81_bool = 0; // 0x1a3 MovB
	
Label_379:
	var_78_string = "bdie"; // 0x17b MovS
}


func_1764()
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x6e4 PushV
	var_26_int = 0; // 0x6e5 PushI
	ClearSubContainer(var_26_int); // 0x6e6 Func
	var_27_int = 0; var_28_int = 0; // 0x6e8 PushV
	var_27_int = 500; // 0x6e9 MovI
	var_28_int = 1000; // 0x6ea MovI
	func_1734(var_27_int, var_28_int); // 0x6eb Call
	var_47_int = 4; // 0x6ed PushI
	irand(var_24_int, var_47_int); // 0x6ee Func
	var_48_int = 0; // 0x6f0 PushI
	var_49_bool = var_24_int != var_48_int; // 0x6f1 Neq
	if(var_49_bool == 0) goto Label_1786; // 0x6f2 JumpB
	var_50_int = 0; var_51_string = ""; // 0x6f3 PushV
	var_51_string = "rifle_ammo"; // 0x6f4 MovS
	func_1801(var_50_int, var_51_string); // 0x6f5 Call
	var_54_int = 0; // 0x6f7 PushI
	AddItem(var_25_bool, var_50_int, var_54_int, var_24_int); // 0x6f8 Func
	
Label_1786:
	var_55_int = 3; // 0x6fa PushI
	irand(var_24_int, var_55_int); // 0x6fb Func
	var_56_int = 0; // 0x6fd PushI
	var_57_bool = var_24_int == var_56_int; // 0x6fe Eq
	if(var_57_bool == 0) goto Label_1800; // 0x6ff JumpB
	var_58_int = 0; var_59_string = ""; // 0x700 PushV
	var_59_string = "rusk"; // 0x701 MovS
	func_1801(var_58_int, var_59_string); // 0x702 Call
	var_60_int = 0; // 0x704 PushI
	var_61_int = 1; // 0x705 PushI
	AddItem(var_25_bool, var_58_int, var_60_int, var_61_int); // 0x706 Func
	
Label_1800:
	return 4; // 0x708 Return
}


func_1253(var_103_cvector)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); // 0x4e5 PushV
	GetPosition(var_107_cvector); // 0x4e6 Func
	GetPosition(var_108_cvector); // 0x4e8 ObjFunc
	var_103_cvector = var_108_cvector - var_107_cvector; // 0x4ea Sub2
	return 4; // 0x4eb Return
}


func_741(var_0_object, var_1_object, var_2_object, var_67_object, var_68_bool)
{
	var_72_bool = 0; var_73_bool = 0; var_74_bool = 0; var_75_bool = 0; // 0x2e5 PushV
	var_0_object = var_67_object; // 0x2e6 TMov
	Face(var_0_object); // 0x2e7 Func
	var_76_bool = var_68_bool; // 0x2e9 Push
	if(var_76_bool == 0) goto Label_753; // 0x2ea JumpB
	var_77_string = "all"; // 0x2eb PushS
	var_78_string = "attack_on"; // 0x2ec PushS
	PlayAnimation(var_77_string, var_78_string); // 0x2ed Func
	WaitForAnimEnd(); // 0x2ef Func
	
Label_753:
	var_79_string = "all"; // 0x2f1 PushS
	var_80_string = "attack_on"; // 0x2f2 PushS
	LockAnimationEnd(var_79_string, var_80_string); // 0x2f3 Func
	var_81_bool = 1; // 0x2f5 PushB
	SetAttackState(var_81_bool); // 0x2f6 Func
	
Label_760:
	var_82_bool = 0; var_83_object = Obj(); // 0x2f8 PushV
	var_83_object = var_0_object; // 0x2f9 MovT
	func_1392(var_82_bool, var_83_object); // 0x2fa Call
	if(var_82_bool == 0) goto Label_862; // 0x2fc JumpB
	CanSee(var_75_bool, var_0_object); // 0x2fd Func
	var_84_bool = var_75_bool; // 0x2ff Push
	if(var_84_bool == 0) goto Label_773; // 0x300 JumpB
	func_910(var_75_bool); // 0x302 Call
	goto Label_852; // 0x304 Jump
	
Label_852:
	var_212_bool = var_1_object != 0; // 0x354 NullNeq
	if(var_212_bool == 0) goto Label_858; // 0x355 JumpB
	func_905(var_74_bool, var_75_bool); // 0x357 Call
	goto Label_861; // 0x359 Jump
	
Label_861:
	goto Label_760; // 0x35d Jump
	
Label_858:
	var_213_int = 2; // 0x35a PushI
	Sleep(var_213_int); // 0x35b Func
	
Label_773:
	var_214_object = Obj(); // 0x305 PushV
	var_214_object = var_0_object; // 0x306 MovT
	func_1483(); // 0x307 Call
	var_2_object = 1; // 0x309 TMovB
	var_223_string = "all"; // 0x30a PushS
	var_224_string = "hunt"; // 0x30b PushS
	PlayAnimation(var_223_string, var_224_string); // 0x30c Func
	WaitForAnimEnd(var_74_bool); // 0x30e Func
	var_225_bool = var_74_bool == 0; // 0x310 Not
	if(var_225_bool == 0) goto Label_796; // 0x311 JumpB
	var_226_bool = var_1_object != 0; // 0x312 NullNeq
	if(var_226_bool == 0) goto Label_791; // 0x313 JumpB
	func_905(var_74_bool, var_75_bool); // 0x315 Call
	
Label_791:
	var_227_string = "all"; // 0x317 PushS
	var_228_string = "attack_on"; // 0x318 PushS
	LockAnimationEnd(var_227_string, var_228_string); // 0x319 Func
	goto Label_760; // 0x31b Jump
	
Label_796:
	var_229_bool = 0; var_230_object = Obj(); // 0x31c PushV
	var_230_object = var_0_object; // 0x31d MovT
	func_1392(var_229_bool, var_230_object); // 0x31e Call
	var_231_bool = var_229_bool == 0; // 0x320 Not
	if(var_231_bool == 0) goto Label_803; // 0x321 JumpB
	goto Label_862; // 0x322 Jump
	
Label_862:
	var_232_bool = 0; // 0x35e PushB
	SetAttackState(var_232_bool); // 0x35f Func
	StopAsync(); // 0x361 Func
	var_233_string = "all"; // 0x363 PushS
	var_234_string = "attack_off"; // 0x364 PushS
	PlayAnimation(var_233_string, var_234_string); // 0x365 Func
	WaitForAnimEnd(); // 0x367 Func
	return 4; // 0x369 Return
	
Label_803:
	CanSee(var_75_bool, var_0_object); // 0x323 Func
	var_235_bool = var_75_bool; // 0x325 Push
	if(var_235_bool == 0) goto Label_814; // 0x326 JumpB
	var_2_object = 0; // 0x327 TMovB
	Face(var_0_object); // 0x328 Func
	func_910(var_75_bool); // 0x32b Call
	goto Label_852; // 0x32d Jump
	
Label_814:
	var_236_string = "all"; // 0x32e PushS
	var_237_string = "attack_on"; // 0x32f PushS
	LockAnimationEnd(var_236_string, var_237_string); // 0x330 Func
	var_238_int = 3; // 0x332 PushI
	Sleep(var_238_int, var_74_bool); // 0x333 Func
	var_239_bool = var_74_bool == 0; // 0x335 Not
	if(var_239_bool == 0) goto Label_833; // 0x336 JumpB
	var_240_bool = var_1_object != 0; // 0x337 NullNeq
	if(var_240_bool == 0) goto Label_828; // 0x338 JumpB
	func_905(var_74_bool, var_75_bool); // 0x33a Call
	
Label_828:
	var_241_string = "all"; // 0x33c PushS
	var_242_string = "attack_on"; // 0x33d PushS
	LockAnimationEnd(var_241_string, var_242_string); // 0x33e Func
	goto Label_760; // 0x340 Jump
	
Label_833:
	var_243_bool = 0; var_244_object = Obj(); // 0x341 PushV
	var_244_object = var_0_object; // 0x342 MovT
	func_1392(var_243_bool, var_244_object); // 0x343 Call
	var_245_bool = var_243_bool == 0; // 0x345 Not
	if(var_245_bool == 0) goto Label_840; // 0x346 JumpB
	goto Label_862; // 0x347 Jump
	
Label_840:
	var_2_object = 0; // 0x348 TMovB
	CanSee(var_75_bool, var_0_object); // 0x349 Func
	var_246_bool = var_75_bool; // 0x34b Push
	if(var_246_bool == 0) goto Label_851; // 0x34c JumpB
	Face(var_0_object); // 0x34d Func
	func_910(var_75_bool); // 0x350 Call
	goto Label_852; // 0x352 Jump
	
Label_851:
	goto Label_862; // 0x353 Jump
}


func_1639(var_121_float, var_122_cvector)
{
	var_123_float = GetByIndex(var_122_cvector, 0); // 0x668 PushE
	var_124_float = GetByIndex(var_122_cvector, 0); // 0x669 PushE
	var_125_float = var_123_float * var_124_float; // 0x66a Mult
	var_126_float = GetByIndex(var_122_cvector, 2); // 0x66b PushE
	var_127_float = GetByIndex(var_122_cvector, 2); // 0x66c PushE
	var_128_float = var_126_float * var_127_float; // 0x66d Mult
	var_129_int = var_125_float + var_128_float; // 0x66e Add
	var_121_float = sqrt(var_129_int); // 0x66f Sqrt2
	return 0; // 0x670 Return
}


func_491()
{
	StopAsync(); // 0x1eb Func
	var_59_int = 100; // 0x1ed PushI
	KillTimer(var_59_int); // 0x1ee Func
	StopGroup0(); // 0x1f0 Func
	return 0; // 0x1f2 Return
}


func_1260(var_259_float)
{
	var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); // 0x4ec PushV
	GetPosition(var_264_cvector); // 0x4ed Func
	GetPosition(var_265_cvector); // 0x4ef ObjFunc
	var_266_cvector = var_265_cvector - var_264_cvector; // 0x4f1 Sub2
	var_259_float = var_266_cvector | var_266_cvector; // 0x4f2 Or2
	return 6; // 0x4f3 Return
}


func_1392(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x570 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x571 PushV
	var_23_object = var_19_object; // 0x572 Mov
	func_1356(var_22_bool, var_23_object); // 0x573 Call
	var_39_bool = var_22_bool == 0; // 0x575 Not
	if(var_39_bool == 0) goto Label_1401; // 0x576 JumpB
	var_18_bool = 0; // 0x577 MovB
	return 2; // 0x578 Return
	
Label_1401:
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x579 PushV
	var_41_object = var_19_object; // 0x57a Mov
	var_42_string = "noaccess"; // 0x57b MovS
	func_1275(var_40_bool, var_41_object, var_42_string); // 0x57c Call
	var_49_bool = var_40_bool == 0; // 0x57e Not
	if(var_49_bool == 0) goto Label_1410; // 0x57f JumpB
	var_18_bool = 1; // 0x580 MovB
	return 2; // 0x581 Return
	
Label_1410:
	var_50_string = "noaccess"; // 0x582 PushS
	GetProperty(var_50_string, var_21_int); // 0x583 ObjFunc
	var_51_int = 0; // 0x585 PushI
	var_18_bool = var_21_int == var_51_int; // 0x586 Eq2
	return 2; // 0x587 Return
}


func_1904(var_257_bool, var_258_object)
{
	var_259_float = 0; var_260_object = Obj(); // 0x771 PushV
	var_260_object = var_258_object; // 0x772 Mov
	func_1260(var_260_object); // 0x773 Call
	var_267_float = 40000.0; // 0x775 PushF
	var_257_bool = var_259_float <= var_267_float; // 0x776 LE2
	return 0; // 0x777 Return
}


func_1649(var_109_float, var_110_cvector, var_111_cvector)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); // 0x672 PushV
	var_113_cvector = var_110_cvector; // 0x673 Mov
	var_114_cvector = var_111_cvector; // 0x674 Mov
	func_1630(var_112_float, var_113_cvector, var_114_cvector); // 0x675 Call
	var_121_float = 0; var_122_cvector = CVector(0,0,0); // 0x677 PushV
	var_122_cvector = var_110_cvector; // 0x678 Mov
	func_1639(var_121_float, var_122_cvector); // 0x679 Call
	var_130_float = 0; var_131_cvector = CVector(0,0,0); // 0x67b PushV
	var_131_cvector = var_111_cvector; // 0x67c Mov
	func_1639(var_130_float, var_131_cvector); // 0x67d Call
	var_132_float = var_121_float * var_130_float; // 0x67f Mult
	var_109_float = var_112_float / var_112_float; // 0x680 Div2
	return 0; // 0x681 Return
}


func_1268(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x4f4 PushV
	var_24_string = "player"; // 0x4f5 PushS
	FindActor(var_23_object, var_24_string); // 0x4f6 Func
	var_21_object = var_23_object; // 0x4f8 Mov
	return 2; // 0x4f9 Return
}


func_1912(var_55_bool, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0x778 PushV
	IsPlayerActor(var_56_object, var_58_bool); // 0x779 Func
	var_55_bool = var_58_bool; // 0x77b Mov
	return 2; // 0x77c Return
}


func_1275(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0; // 0x4fb PushV
	var_45_string = "HasProperty"; // 0x4fc PushS
	var_46_int = 2; // 0x4fd PushI
	var_47_bool = IsFuncExist(var_41_object, var_45_string, var_46_int); // 0x4fe FuncExist
	var_48_bool = var_47_bool == 0; // 0x4ff Not
	if(var_48_bool == 0) goto Label_1283; // 0x500 JumpB
	var_40_bool = 0; // 0x501 MovB
	return 2; // 0x502 Return
	
Label_1283:
	HasProperty(var_42_string, var_44_bool); // 0x503 ObjFunc
	var_40_bool = var_44_bool; // 0x505 Mov
	return 2; // 0x506 Return
}


func_1917(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x77d PushV
	var_18_bool = 0; var_19_object = Obj(); // 0x77e PushV
	var_19_object = var_15_object; // 0x77f Mov
	func_1392(var_18_bool, var_19_object); // 0x780 Call
	var_52_bool = var_18_bool == 0; // 0x782 Not
	if(var_52_bool == 0) goto Label_1926; // 0x783 JumpB
	var_14_bool = 0; // 0x784 MovB
	return 2; // 0x785 Return
	
Label_1926:
	var_53_object = GlobalVars[0]; // 0x786 PushGE
	in(var_17_bool, var_15_object); // 0x787 ObjFunc
	var_54_bool = var_17_bool; // 0x789 Push
	if(var_54_bool == 0) goto Label_1933; // 0x78a JumpB
	var_14_bool = 1; // 0x78b MovB
	return 2; // 0x78c Return
	
Label_1933:
	var_55_bool = 0; var_56_object = Obj(); // 0x78d PushV
	var_56_object = var_15_object; // 0x78e Mov
	func_1912(var_55_bool, var_56_object); // 0x78f Call
	var_14_bool = var_55_bool; // 0x790 Mov
	return 2; // 0x792 Return
}


