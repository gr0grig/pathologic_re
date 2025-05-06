task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj(); // 0x24 PushV
	var_36_object = var_35_bool; // 0x25 Mov
	func_6068(var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_4844(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xc0 PushI
	if(var_37_int == 0) goto Label_337; // 0xc1 JumpB
	func_4939(); // 0xc3 Call
	var_39_int = 224; // 0xc5 PushI
	var_40_bool = var_35_string == var_39_int; // 0xc6 Eq
	if(var_40_bool == 0) goto Label_225; // 0xc7 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xc8 PushV
	var_41_object = var_1_object; // 0xc9 MovT
	var_42_object = var_0_object; // 0xca MovT
	func_5280(); // 0xcb Call
	var_45_string = ""; // 0xcd PushV
	var_45_string = "Neutral"; // 0xce MovS
	func_175(var_36_bool, var_45_string); // 0xcf Call
	var_60_int = 187; // 0xd1 PushI
	SetMessage(var_60_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_61_int = 190; // 0xd6 PushI
	var_62_int = 228; // 0xd7 PushI
	var_63_int = 227; // 0xd8 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xd9 TObjFunc
	var_64_int = 188; // 0xdb PushI
	var_65_int = 226; // 0xdc PushI
	var_66_int = 225; // 0xdd PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_67_int = 226; // 0xe1 PushI
	var_68_bool = var_35_string == var_67_int; // 0xe2 Eq
	if(var_68_bool == 0) goto Label_248; // 0xe3 JumpB
	var_69_string = ""; // 0xe4 PushV
	var_69_string = "Neutral"; // 0xe5 MovS
	func_175(var_36_bool, var_69_string); // 0xe6 Call
	var_70_int = 189; // 0xe8 PushI
	SetMessage(var_70_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_71_int = 192; // 0xed PushI
	var_72_int = 233; // 0xee PushI
	var_73_int = 229; // 0xef PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf0 TObjFunc
	var_74_int = 193; // 0xf2 PushI
	var_75_int = -1; // 0xf3 PushI
	var_76_int = 230; // 0xf4 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_77_int = 233; // 0xf8 PushI
	var_78_bool = var_35_string == var_77_int; // 0xf9 Eq
	if(var_78_bool == 0) goto Label_266; // 0xfa JumpB
	var_79_string = ""; // 0xfb PushV
	var_79_string = "Neutral"; // 0xfc MovS
	func_175(var_36_bool, var_79_string); // 0xfd Call
	var_80_int = 196; // 0xff PushI
	SetMessage(var_80_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_81_int = 203; // 0x104 PushI
	var_82_int = -1; // 0x105 PushI
	var_83_int = 241; // 0x106 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_84_int = 228; // 0x10a PushI
	var_85_bool = var_35_string == var_84_int; // 0x10b Eq
	if(var_85_bool == 0) goto Label_289; // 0x10c JumpB
	var_86_string = ""; // 0x10d PushV
	var_86_string = "Neutral"; // 0x10e MovS
	func_175(var_36_bool, var_86_string); // 0x10f Call
	var_87_int = 191; // 0x111 PushI
	SetMessage(var_87_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_88_int = 197; // 0x116 PushI
	var_89_int = 236; // 0x117 PushI
	var_90_int = 234; // 0x118 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x119 TObjFunc
	var_91_int = 198; // 0x11b PushI
	var_92_int = 9260; // 0x11c PushI
	var_93_int = 235; // 0x11d PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_94_int = 9260; // 0x121 PushI
	var_95_bool = var_35_string == var_94_int; // 0x122 Eq
	if(var_95_bool == 0) goto Label_307; // 0x123 JumpB
	var_96_string = ""; // 0x124 PushV
	var_96_string = "Neutral"; // 0x125 MovS
	func_175(var_36_bool, var_96_string); // 0x126 Call
	var_97_int = 8437; // 0x128 PushI
	SetMessage(var_97_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_98_int = 8438; // 0x12d PushI
	var_99_int = -1; // 0x12e PushI
	var_100_int = 9261; // 0x12f PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_101_int = 236; // 0x133 PushI
	var_102_bool = var_35_string == var_101_int; // 0x134 Eq
	if(var_102_bool == 0) goto Label_325; // 0x135 JumpB
	var_103_string = ""; // 0x136 PushV
	var_103_string = "Neutral"; // 0x137 MovS
	func_175(var_36_bool, var_103_string); // 0x138 Call
	var_104_int = 199; // 0x13a PushI
	SetMessage(var_104_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_105_int = 200; // 0x13f PushI
	var_106_int = 233; // 0x140 PushI
	var_107_int = 237; // 0x141 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_3_string = 1; // 0x145 TMovB
	var_108_bool = 0; // 0x146 PushV
	func_5040(var_108_bool); // 0x147 Call
	if(var_108_bool == 0) goto Label_333; // 0x149 JumpB
	lshStopAnimation(); // 0x14a Func
	goto Label_335; // 0x14c Jump
	
Label_335:
	return 0; // 0x14f Return
	
Label_333:
	StopAnimation(); // 0x14d Func
	
Label_337:
	return 0; // 0x151 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x26f PushI
	if(var_37_int == 0) goto Label_1955; // 0x270 JumpB
	func_4939(); // 0x272 Call
	var_39_int = 6349; // 0x274 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x275 Eq
	if(var_40_bool == 0) goto Label_636; // 0x276 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x277 PushV
	var_41_object = var_1_object; // 0x278 MovT
	var_42_object = var_0_object; // 0x279 MovT
	func_5042(); // 0x27a Call
	
Label_636:
	var_45_int = 7165; // 0x27c PushI
	var_46_bool = var_36_bool == var_45_int; // 0x27d Eq
	if(var_46_bool == 0) goto Label_644; // 0x27e JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x27f PushV
	var_47_object = var_1_object; // 0x280 MovT
	var_48_object = var_0_object; // 0x281 MovT
	func_5042(); // 0x282 Call
	
Label_644:
	var_49_int = 6353; // 0x284 PushI
	var_50_bool = var_36_bool == var_49_int; // 0x285 Eq
	if(var_50_bool == 0) goto Label_652; // 0x286 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x287 PushV
	var_51_object = var_1_object; // 0x288 MovT
	var_52_object = var_0_object; // 0x289 MovT
	func_5042(); // 0x28a Call
	
Label_652:
	var_53_int = 7159; // 0x28c PushI
	var_54_bool = var_36_bool == var_53_int; // 0x28d Eq
	if(var_54_bool == 0) goto Label_660; // 0x28e JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x28f PushV
	var_55_object = var_1_object; // 0x290 MovT
	var_56_object = var_0_object; // 0x291 MovT
	func_5048(); // 0x292 Call
	
Label_660:
	var_59_int = 7160; // 0x294 PushI
	var_60_bool = var_36_bool == var_59_int; // 0x295 Eq
	if(var_60_bool == 0) goto Label_668; // 0x296 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x297 PushV
	var_61_object = var_1_object; // 0x298 MovT
	var_62_object = var_0_object; // 0x299 MovT
	func_5048(); // 0x29a Call
	
Label_668:
	var_63_int = 7156; // 0x29c PushI
	var_64_bool = var_36_bool == var_63_int; // 0x29d Eq
	if(var_64_bool == 0) goto Label_676; // 0x29e JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x29f PushV
	var_65_object = var_1_object; // 0x2a0 MovT
	var_66_object = var_0_object; // 0x2a1 MovT
	func_5048(); // 0x2a2 Call
	
Label_676:
	var_67_int = 7157; // 0x2a4 PushI
	var_68_bool = var_36_bool == var_67_int; // 0x2a5 Eq
	if(var_68_bool == 0) goto Label_684; // 0x2a6 JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0x2a7 PushV
	var_69_object = var_1_object; // 0x2a8 MovT
	var_70_object = var_0_object; // 0x2a9 MovT
	func_5048(); // 0x2aa Call
	
Label_684:
	var_71_int = 6343; // 0x2ac PushI
	var_72_bool = var_36_bool == var_71_int; // 0x2ad Eq
	if(var_72_bool == 0) goto Label_692; // 0x2ae JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x2af PushV
	var_73_object = var_1_object; // 0x2b0 MovT
	var_74_object = var_0_object; // 0x2b1 MovT
	func_5048(); // 0x2b2 Call
	
Label_692:
	var_75_int = 7171; // 0x2b4 PushI
	var_76_bool = var_36_bool == var_75_int; // 0x2b5 Eq
	if(var_76_bool == 0) goto Label_700; // 0x2b6 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x2b7 PushV
	var_77_object = var_1_object; // 0x2b8 MovT
	var_78_object = var_0_object; // 0x2b9 MovT
	func_5077(); // 0x2ba Call
	
Label_700:
	var_81_int = 7180; // 0x2bc PushI
	var_82_bool = var_36_bool == var_81_int; // 0x2bd Eq
	if(var_82_bool == 0) goto Label_708; // 0x2be JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x2bf PushV
	var_83_object = var_1_object; // 0x2c0 MovT
	var_84_object = var_0_object; // 0x2c1 MovT
	func_5077(); // 0x2c2 Call
	
Label_708:
	var_85_int = 7178; // 0x2c4 PushI
	var_86_bool = var_36_bool == var_85_int; // 0x2c5 Eq
	if(var_86_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x2c7 PushV
	var_87_object = var_1_object; // 0x2c8 MovT
	var_88_object = var_0_object; // 0x2c9 MovT
	func_5077(); // 0x2ca Call
	
Label_716:
	var_89_int = 7190; // 0x2cc PushI
	var_90_bool = var_36_bool == var_89_int; // 0x2cd Eq
	if(var_90_bool == 0) goto Label_724; // 0x2ce JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x2cf PushV
	var_91_object = var_1_object; // 0x2d0 MovT
	var_92_object = var_0_object; // 0x2d1 MovT
	func_5083(); // 0x2d2 Call
	
Label_724:
	var_95_int = 7205; // 0x2d4 PushI
	var_96_bool = var_36_bool == var_95_int; // 0x2d5 Eq
	if(var_96_bool == 0) goto Label_732; // 0x2d6 JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0x2d7 PushV
	var_97_object = var_1_object; // 0x2d8 MovT
	var_98_object = var_0_object; // 0x2d9 MovT
	func_5089(); // 0x2da Call
	
Label_732:
	var_101_int = 7203; // 0x2dc PushI
	var_102_bool = var_36_bool == var_101_int; // 0x2dd Eq
	if(var_102_bool == 0) goto Label_740; // 0x2de JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x2df PushV
	var_103_object = var_1_object; // 0x2e0 MovT
	var_104_object = var_0_object; // 0x2e1 MovT
	func_5089(); // 0x2e2 Call
	
Label_740:
	var_105_int = 7200; // 0x2e4 PushI
	var_106_bool = var_36_bool == var_105_int; // 0x2e5 Eq
	if(var_106_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x2e7 PushV
	var_107_object = var_1_object; // 0x2e8 MovT
	var_108_object = var_0_object; // 0x2e9 MovT
	func_5325(); // 0x2ea Call
	
Label_748:
	var_111_int = 7198; // 0x2ec PushI
	var_112_bool = var_36_bool == var_111_int; // 0x2ed Eq
	if(var_112_bool == 0) goto Label_756; // 0x2ee JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x2ef PushV
	var_113_object = var_1_object; // 0x2f0 MovT
	var_114_object = var_0_object; // 0x2f1 MovT
	func_5089(); // 0x2f2 Call
	
Label_756:
	var_115_int = 7213; // 0x2f4 PushI
	var_116_bool = var_36_bool == var_115_int; // 0x2f5 Eq
	if(var_116_bool == 0) goto Label_764; // 0x2f6 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x2f7 PushV
	var_117_object = var_1_object; // 0x2f8 MovT
	var_118_object = var_0_object; // 0x2f9 MovT
	func_5095(); // 0x2fa Call
	
Label_764:
	var_121_int = 7214; // 0x2fc PushI
	var_122_bool = var_36_bool == var_121_int; // 0x2fd Eq
	if(var_122_bool == 0) goto Label_772; // 0x2fe JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x2ff PushV
	var_123_object = var_1_object; // 0x300 MovT
	var_124_object = var_0_object; // 0x301 MovT
	func_5095(); // 0x302 Call
	
Label_772:
	var_125_int = 7237; // 0x304 PushI
	var_126_bool = var_36_bool == var_125_int; // 0x305 Eq
	if(var_126_bool == 0) goto Label_780; // 0x306 JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x307 PushV
	var_127_object = var_1_object; // 0x308 MovT
	var_128_object = var_0_object; // 0x309 MovT
	func_5101(); // 0x30a Call
	
Label_780:
	var_131_int = 7238; // 0x30c PushI
	var_132_bool = var_36_bool == var_131_int; // 0x30d Eq
	if(var_132_bool == 0) goto Label_788; // 0x30e JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x30f PushV
	var_133_object = var_1_object; // 0x310 MovT
	var_134_object = var_0_object; // 0x311 MovT
	func_5101(); // 0x312 Call
	
Label_788:
	var_135_int = 7229; // 0x314 PushI
	var_136_bool = var_36_bool == var_135_int; // 0x315 Eq
	if(var_136_bool == 0) goto Label_796; // 0x316 JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x317 PushV
	var_137_object = var_1_object; // 0x318 MovT
	var_138_object = var_0_object; // 0x319 MovT
	func_5101(); // 0x31a Call
	
Label_796:
	var_139_int = 7230; // 0x31c PushI
	var_140_bool = var_36_bool == var_139_int; // 0x31d Eq
	if(var_140_bool == 0) goto Label_804; // 0x31e JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x31f PushV
	var_141_object = var_1_object; // 0x320 MovT
	var_142_object = var_0_object; // 0x321 MovT
	func_5101(); // 0x322 Call
	
Label_804:
	var_143_int = 7244; // 0x324 PushI
	var_144_bool = var_36_bool == var_143_int; // 0x325 Eq
	if(var_144_bool == 0) goto Label_822; // 0x326 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x327 PushV
	var_145_object = var_1_object; // 0x328 MovT
	var_146_object = var_0_object; // 0x329 MovT
	func_5359(); // 0x32a Call
	var_149_object = Obj(); var_150_object = Obj(); // 0x32c PushV
	var_149_object = var_1_object; // 0x32d MovT
	var_150_object = var_0_object; // 0x32e MovT
	func_5119(); // 0x32f Call
	var_153_object = Obj(); var_154_object = Obj(); // 0x331 PushV
	var_153_object = var_1_object; // 0x332 MovT
	var_154_object = var_0_object; // 0x333 MovT
	func_5113(); // 0x334 Call
	
Label_822:
	var_157_int = 7249; // 0x336 PushI
	var_158_bool = var_36_bool == var_157_int; // 0x337 Eq
	if(var_158_bool == 0) goto Label_840; // 0x338 JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0x339 PushV
	var_159_object = var_1_object; // 0x33a MovT
	var_160_object = var_0_object; // 0x33b MovT
	func_5113(); // 0x33c Call
	var_161_object = Obj(); var_162_object = Obj(); // 0x33e PushV
	var_161_object = var_1_object; // 0x33f MovT
	var_162_object = var_0_object; // 0x340 MovT
	func_5119(); // 0x341 Call
	var_163_object = Obj(); var_164_object = Obj(); // 0x343 PushV
	var_163_object = var_1_object; // 0x344 MovT
	var_164_object = var_0_object; // 0x345 MovT
	func_5359(); // 0x346 Call
	
Label_840:
	var_165_int = 7250; // 0x348 PushI
	var_166_bool = var_36_bool == var_165_int; // 0x349 Eq
	if(var_166_bool == 0) goto Label_858; // 0x34a JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x34b PushV
	var_167_object = var_1_object; // 0x34c MovT
	var_168_object = var_0_object; // 0x34d MovT
	func_5113(); // 0x34e Call
	var_169_object = Obj(); var_170_object = Obj(); // 0x350 PushV
	var_169_object = var_1_object; // 0x351 MovT
	var_170_object = var_0_object; // 0x352 MovT
	func_5359(); // 0x353 Call
	var_171_object = Obj(); var_172_object = Obj(); // 0x355 PushV
	var_171_object = var_1_object; // 0x356 MovT
	var_172_object = var_0_object; // 0x357 MovT
	func_5119(); // 0x358 Call
	
Label_858:
	var_173_int = 7128; // 0x35a PushI
	var_174_bool = var_35_string == var_173_int; // 0x35b Eq
	if(var_174_bool == 0) goto Label_1028; // 0x35c JumpB
	var_175_string = ""; // 0x35d PushV
	var_175_string = "Neutral"; // 0x35e MovS
	func_606(var_36_bool, var_175_string); // 0x35f Call
	var_190_int = 6465; // 0x361 PushI
	SetMessage(var_190_int); // 0x362 TObjFunc
	ClearReplies(); // 0x364 TObjFunc
	var_191_bool = 0; // 0x366 PushV
	var_191_bool = 0; // 0x367 MovB
	var_192_bool = 0; var_193_object = Obj(); // 0x368 PushV
	var_193_object = var_1_object; // 0x369 MovT
	func_5377(var_193_object); // 0x36a Call
	if(var_192_bool == 0) goto Label_883; // 0x36c JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x36d PushV
	var_201_object = var_1_object; // 0x36e MovT
	func_5401(var_201_object); // 0x36f Call
	if(var_200_bool == 0) goto Label_883; // 0x371 JumpB
	var_191_bool = 1; // 0x372 MovB
	
Label_883:
	if(var_191_bool == 0) goto Label_889; // 0x373 JumpB
	var_206_int = 6466; // 0x374 PushI
	var_207_int = 6344; // 0x375 PushI
	var_208_int = 7129; // 0x376 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x377 TObjFunc
	
Label_889:
	var_209_bool = 0; // 0x379 PushV
	var_209_bool = 0; // 0x37a MovB
	var_210_bool = 0; var_211_object = Obj(); // 0x37b PushV
	var_211_object = var_1_object; // 0x37c MovT
	func_5641(var_210_bool, var_211_object); // 0x37d Call
	if(var_210_bool == 0) goto Label_902; // 0x37f JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x380 PushV
	var_222_object = var_1_object; // 0x381 MovT
	func_5389(var_222_object); // 0x382 Call
	if(var_221_bool == 0) goto Label_902; // 0x384 JumpB
	var_209_bool = 1; // 0x385 MovB
	
Label_902:
	if(var_209_bool == 0) goto Label_908; // 0x386 JumpB
	var_227_int = 6467; // 0x387 PushI
	var_228_int = 6336; // 0x388 PushI
	var_229_int = 7130; // 0x389 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x38a TObjFunc
	
Label_908:
	var_230_bool = 0; // 0x38c PushV
	var_230_bool = 0; // 0x38d MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x38e PushV
	var_232_object = var_1_object; // 0x38f MovT
	func_5855(var_232_object); // 0x390 Call
	if(var_231_bool == 0) goto Label_921; // 0x392 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x393 PushV
	var_238_object = var_1_object; // 0x394 MovT
	func_5413(var_238_object); // 0x395 Call
	if(var_237_bool == 0) goto Label_921; // 0x397 JumpB
	var_230_bool = 1; // 0x398 MovB
	
Label_921:
	if(var_230_bool == 0) goto Label_927; // 0x399 JumpB
	var_243_int = 6470; // 0x39a PushI
	var_244_int = 7167; // 0x39b PushI
	var_245_int = 7133; // 0x39c PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x39d TObjFunc
	
Label_927:
	var_246_bool = 0; // 0x39f PushV
	var_246_bool = 0; // 0x3a0 MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x3a1 PushV
	var_248_object = var_1_object; // 0x3a2 MovT
	func_5699(var_248_object); // 0x3a3 Call
	if(var_247_bool == 0) goto Label_940; // 0x3a5 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x3a6 PushV
	var_254_object = var_1_object; // 0x3a7 MovT
	func_5425(var_254_object); // 0x3a8 Call
	if(var_253_bool == 0) goto Label_940; // 0x3aa JumpB
	var_246_bool = 1; // 0x3ab MovB
	
Label_940:
	if(var_246_bool == 0) goto Label_946; // 0x3ac JumpB
	var_259_int = 6471; // 0x3ad PushI
	var_260_int = 7181; // 0x3ae PushI
	var_261_int = 7134; // 0x3af PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x3b0 TObjFunc
	
Label_946:
	var_262_bool = 0; // 0x3b2 PushV
	var_262_bool = 0; // 0x3b3 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x3b4 PushV
	var_264_object = var_1_object; // 0x3b5 MovT
	func_5687(var_264_object); // 0x3b6 Call
	if(var_263_bool == 0) goto Label_959; // 0x3b8 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x3b9 PushV
	var_270_object = var_1_object; // 0x3ba MovT
	func_5437(var_270_object); // 0x3bb Call
	if(var_269_bool == 0) goto Label_959; // 0x3bd JumpB
	var_262_bool = 1; // 0x3be MovB
	
Label_959:
	if(var_262_bool == 0) goto Label_965; // 0x3bf JumpB
	var_275_int = 6474; // 0x3c0 PushI
	var_276_int = 7191; // 0x3c1 PushI
	var_277_int = 7137; // 0x3c2 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x3c3 TObjFunc
	
Label_965:
	var_278_bool = 0; // 0x3c5 PushV
	var_278_bool = 0; // 0x3c6 MovB
	var_279_bool = 0; var_280_object = Obj(); // 0x3c7 PushV
	var_280_object = var_1_object; // 0x3c8 MovT
	func_5795(var_280_object); // 0x3c9 Call
	if(var_279_bool == 0) goto Label_978; // 0x3cb JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x3cc PushV
	var_286_object = var_1_object; // 0x3cd MovT
	func_5449(var_286_object); // 0x3ce Call
	if(var_285_bool == 0) goto Label_978; // 0x3d0 JumpB
	var_278_bool = 1; // 0x3d1 MovB
	
Label_978:
	if(var_278_bool == 0) goto Label_984; // 0x3d2 JumpB
	var_291_int = 6476; // 0x3d3 PushI
	var_292_int = 7206; // 0x3d4 PushI
	var_293_int = 7139; // 0x3d5 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x3d6 TObjFunc
	
Label_984:
	var_294_bool = 0; // 0x3d8 PushV
	var_294_bool = 0; // 0x3d9 MovB
	var_295_bool = 0; var_296_object = Obj(); // 0x3da PushV
	var_296_object = var_1_object; // 0x3db MovT
	func_5617(var_296_object); // 0x3dc Call
	if(var_295_bool == 0) goto Label_997; // 0x3de JumpB
	var_301_bool = 0; var_302_object = Obj(); // 0x3df PushV
	var_302_object = var_1_object; // 0x3e0 MovT
	func_5461(var_302_object); // 0x3e1 Call
	if(var_301_bool == 0) goto Label_997; // 0x3e3 JumpB
	var_294_bool = 1; // 0x3e4 MovB
	
Label_997:
	if(var_294_bool == 0) goto Label_1003; // 0x3e5 JumpB
	var_307_int = 6481; // 0x3e6 PushI
	var_308_int = 7220; // 0x3e7 PushI
	var_309_int = 7144; // 0x3e8 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x3e9 TObjFunc
	
Label_1003:
	var_310_bool = 0; // 0x3eb PushV
	var_310_bool = 0; // 0x3ec MovB
	var_311_bool = 0; var_312_object = Obj(); // 0x3ed PushV
	var_312_object = var_1_object; // 0x3ee MovT
	func_5783(var_312_object); // 0x3ef Call
	if(var_311_bool == 0) goto Label_1016; // 0x3f1 JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x3f2 PushV
	var_318_object = var_1_object; // 0x3f3 MovT
	func_5473(var_318_object); // 0x3f4 Call
	if(var_317_bool == 0) goto Label_1016; // 0x3f6 JumpB
	var_310_bool = 1; // 0x3f7 MovB
	
Label_1016:
	if(var_310_bool == 0) goto Label_1022; // 0x3f8 JumpB
	var_323_int = 6488; // 0x3f9 PushI
	var_324_int = 7241; // 0x3fa PushI
	var_325_int = 7151; // 0x3fb PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x3fc TObjFunc
	
Label_1022:
	var_326_int = 6502; // 0x3fe PushI
	var_327_int = -1; // 0x3ff PushI
	var_328_int = 7166; // 0x400 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_329_int = 7241; // 0x404 PushI
	var_330_bool = var_35_string == var_329_int; // 0x405 Eq
	if(var_330_bool == 0) goto Label_1046; // 0x406 JumpB
	var_331_string = ""; // 0x407 PushV
	var_331_string = "Neutral"; // 0x408 MovS
	func_606(var_36_bool, var_331_string); // 0x409 Call
	var_332_int = 6572; // 0x40b PushI
	SetMessage(var_332_int); // 0x40c TObjFunc
	ClearReplies(); // 0x40e TObjFunc
	var_333_int = 6573; // 0x410 PushI
	var_334_int = 7243; // 0x411 PushI
	var_335_int = 7242; // 0x412 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x413 TObjFunc
	return 0; // 0x415 Return
	
Label_1046:
	var_336_int = 7243; // 0x416 PushI
	var_337_bool = var_35_string == var_336_int; // 0x417 Eq
	if(var_337_bool == 0) goto Label_1086; // 0x418 JumpB
	var_338_string = ""; // 0x419 PushV
	var_338_string = "Neutral"; // 0x41a MovS
	func_606(var_36_bool, var_338_string); // 0x41b Call
	var_339_int = 6574; // 0x41d PushI
	SetMessage(var_339_int); // 0x41e TObjFunc
	ClearReplies(); // 0x420 TObjFunc
	var_340_int = 6575; // 0x422 PushI
	var_341_int = -1; // 0x423 PushI
	var_342_int = 7244; // 0x424 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x425 TObjFunc
	var_343_bool = 0; var_344_object = Obj(); // 0x427 PushV
	var_344_object = var_1_object; // 0x428 MovT
	func_5485(var_344_object); // 0x429 Call
	var_349_bool = var_343_bool == 0; // 0x42b Not
	if(var_349_bool == 0) goto Label_1074; // 0x42c JumpB
	var_350_int = 6576; // 0x42d PushI
	var_351_int = 7248; // 0x42e PushI
	var_352_int = 7245; // 0x42f PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x430 TObjFunc
	
Label_1074:
	var_353_bool = 0; var_354_object = Obj(); // 0x432 PushV
	var_354_object = var_1_object; // 0x433 MovT
	func_5867(var_354_object); // 0x434 Call
	var_359_bool = var_353_bool == 0; // 0x436 Not
	if(var_359_bool == 0) goto Label_1085; // 0x437 JumpB
	var_360_int = 6577; // 0x438 PushI
	var_361_int = 7247; // 0x439 PushI
	var_362_int = 7246; // 0x43a PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x43b TObjFunc
	
Label_1085:
	return 0; // 0x43d Return
	
Label_1086:
	var_363_int = 7247; // 0x43e PushI
	var_364_bool = var_35_string == var_363_int; // 0x43f Eq
	if(var_364_bool == 0) goto Label_1104; // 0x440 JumpB
	var_365_string = ""; // 0x441 PushV
	var_365_string = "Neutral"; // 0x442 MovS
	func_606(var_36_bool, var_365_string); // 0x443 Call
	var_366_int = 6578; // 0x445 PushI
	SetMessage(var_366_int); // 0x446 TObjFunc
	ClearReplies(); // 0x448 TObjFunc
	var_367_int = 6581; // 0x44a PushI
	var_368_int = -1; // 0x44b PushI
	var_369_int = 7250; // 0x44c PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x44d TObjFunc
	return 0; // 0x44f Return
	
Label_1104:
	var_370_int = 7248; // 0x450 PushI
	var_371_bool = var_35_string == var_370_int; // 0x451 Eq
	if(var_371_bool == 0) goto Label_1122; // 0x452 JumpB
	var_372_string = ""; // 0x453 PushV
	var_372_string = "Neutral"; // 0x454 MovS
	func_606(var_36_bool, var_372_string); // 0x455 Call
	var_373_int = 6579; // 0x457 PushI
	SetMessage(var_373_int); // 0x458 TObjFunc
	ClearReplies(); // 0x45a TObjFunc
	var_374_int = 6580; // 0x45c PushI
	var_375_int = -1; // 0x45d PushI
	var_376_int = 7249; // 0x45e PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x45f TObjFunc
	return 0; // 0x461 Return
	
Label_1122:
	var_377_int = 7220; // 0x462 PushI
	var_378_bool = var_35_string == var_377_int; // 0x463 Eq
	if(var_378_bool == 0) goto Label_1145; // 0x464 JumpB
	var_379_string = ""; // 0x465 PushV
	var_379_string = "Neutral"; // 0x466 MovS
	func_606(var_36_bool, var_379_string); // 0x467 Call
	var_380_int = 6553; // 0x469 PushI
	SetMessage(var_380_int); // 0x46a TObjFunc
	ClearReplies(); // 0x46c TObjFunc
	var_381_int = 6554; // 0x46e PushI
	var_382_int = 7222; // 0x46f PushI
	var_383_int = 7221; // 0x470 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x471 TObjFunc
	var_384_int = 6557; // 0x473 PushI
	var_385_int = 7225; // 0x474 PushI
	var_386_int = 7224; // 0x475 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x476 TObjFunc
	return 0; // 0x478 Return
	
Label_1145:
	var_387_int = 7225; // 0x479 PushI
	var_388_bool = var_35_string == var_387_int; // 0x47a Eq
	if(var_388_bool == 0) goto Label_1168; // 0x47b JumpB
	var_389_string = ""; // 0x47c PushV
	var_389_string = "Neutral"; // 0x47d MovS
	func_606(var_36_bool, var_389_string); // 0x47e Call
	var_390_int = 6558; // 0x480 PushI
	SetMessage(var_390_int); // 0x481 TObjFunc
	ClearReplies(); // 0x483 TObjFunc
	var_391_int = 6559; // 0x485 PushI
	var_392_int = 7231; // 0x486 PushI
	var_393_int = 7226; // 0x487 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x488 TObjFunc
	var_394_int = 6560; // 0x48a PushI
	var_395_int = 7228; // 0x48b PushI
	var_396_int = 7227; // 0x48c PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x48d TObjFunc
	return 0; // 0x48f Return
	
Label_1168:
	var_397_int = 7228; // 0x490 PushI
	var_398_bool = var_35_string == var_397_int; // 0x491 Eq
	if(var_398_bool == 0) goto Label_1191; // 0x492 JumpB
	var_399_string = ""; // 0x493 PushV
	var_399_string = "Neutral"; // 0x494 MovS
	func_606(var_36_bool, var_399_string); // 0x495 Call
	var_400_int = 6561; // 0x497 PushI
	SetMessage(var_400_int); // 0x498 TObjFunc
	ClearReplies(); // 0x49a TObjFunc
	var_401_int = 6562; // 0x49c PushI
	var_402_int = -1; // 0x49d PushI
	var_403_int = 7229; // 0x49e PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x49f TObjFunc
	var_404_int = 6563; // 0x4a1 PushI
	var_405_int = -1; // 0x4a2 PushI
	var_406_int = 7230; // 0x4a3 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x4a4 TObjFunc
	return 0; // 0x4a6 Return
	
Label_1191:
	var_407_int = 7231; // 0x4a7 PushI
	var_408_bool = var_35_string == var_407_int; // 0x4a8 Eq
	if(var_408_bool == 0) goto Label_1214; // 0x4a9 JumpB
	var_409_string = ""; // 0x4aa PushV
	var_409_string = "Neutral"; // 0x4ab MovS
	func_606(var_36_bool, var_409_string); // 0x4ac Call
	var_410_int = 6564; // 0x4ae PushI
	SetMessage(var_410_int); // 0x4af TObjFunc
	ClearReplies(); // 0x4b1 TObjFunc
	var_411_int = 6565; // 0x4b3 PushI
	var_412_int = 7234; // 0x4b4 PushI
	var_413_int = 7232; // 0x4b5 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x4b6 TObjFunc
	var_414_int = 6566; // 0x4b8 PushI
	var_415_int = 7234; // 0x4b9 PushI
	var_416_int = 7233; // 0x4ba PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x4bb TObjFunc
	return 0; // 0x4bd Return
	
Label_1214:
	var_417_int = 7222; // 0x4be PushI
	var_418_bool = var_35_string == var_417_int; // 0x4bf Eq
	if(var_418_bool == 0) goto Label_1232; // 0x4c0 JumpB
	var_419_string = ""; // 0x4c1 PushV
	var_419_string = "Neutral"; // 0x4c2 MovS
	func_606(var_36_bool, var_419_string); // 0x4c3 Call
	var_420_int = 6555; // 0x4c5 PushI
	SetMessage(var_420_int); // 0x4c6 TObjFunc
	ClearReplies(); // 0x4c8 TObjFunc
	var_421_int = 6556; // 0x4ca PushI
	var_422_int = 7234; // 0x4cb PushI
	var_423_int = 7223; // 0x4cc PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x4cd TObjFunc
	return 0; // 0x4cf Return
	
Label_1232:
	var_424_int = 7234; // 0x4d0 PushI
	var_425_bool = var_35_string == var_424_int; // 0x4d1 Eq
	if(var_425_bool == 0) goto Label_1250; // 0x4d2 JumpB
	var_426_string = ""; // 0x4d3 PushV
	var_426_string = "Neutral"; // 0x4d4 MovS
	func_606(var_36_bool, var_426_string); // 0x4d5 Call
	var_427_int = 6567; // 0x4d7 PushI
	SetMessage(var_427_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_428_int = 6568; // 0x4dc PushI
	var_429_int = 7236; // 0x4dd PushI
	var_430_int = 7235; // 0x4de PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_431_int = 7236; // 0x4e2 PushI
	var_432_bool = var_35_string == var_431_int; // 0x4e3 Eq
	if(var_432_bool == 0) goto Label_1273; // 0x4e4 JumpB
	var_433_string = ""; // 0x4e5 PushV
	var_433_string = "Neutral"; // 0x4e6 MovS
	func_606(var_36_bool, var_433_string); // 0x4e7 Call
	var_434_int = 6569; // 0x4e9 PushI
	SetMessage(var_434_int); // 0x4ea TObjFunc
	ClearReplies(); // 0x4ec TObjFunc
	var_435_int = 6570; // 0x4ee PushI
	var_436_int = -1; // 0x4ef PushI
	var_437_int = 7237; // 0x4f0 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x4f1 TObjFunc
	var_438_int = 6571; // 0x4f3 PushI
	var_439_int = -1; // 0x4f4 PushI
	var_440_int = 7238; // 0x4f5 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x4f6 TObjFunc
	return 0; // 0x4f8 Return
	
Label_1273:
	var_441_int = 7206; // 0x4f9 PushI
	var_442_bool = var_35_string == var_441_int; // 0x4fa Eq
	if(var_442_bool == 0) goto Label_1296; // 0x4fb JumpB
	var_443_string = ""; // 0x4fc PushV
	var_443_string = "Neutral"; // 0x4fd MovS
	func_606(var_36_bool, var_443_string); // 0x4fe Call
	var_444_int = 6541; // 0x500 PushI
	SetMessage(var_444_int); // 0x501 TObjFunc
	ClearReplies(); // 0x503 TObjFunc
	var_445_int = 6542; // 0x505 PushI
	var_446_int = 7208; // 0x506 PushI
	var_447_int = 7207; // 0x507 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x508 TObjFunc
	var_448_int = 6551; // 0x50a PushI
	var_449_int = 7208; // 0x50b PushI
	var_450_int = 7216; // 0x50c PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x50d TObjFunc
	return 0; // 0x50f Return
	
Label_1296:
	var_451_int = 7208; // 0x510 PushI
	var_452_bool = var_35_string == var_451_int; // 0x511 Eq
	if(var_452_bool == 0) goto Label_1319; // 0x512 JumpB
	var_453_string = ""; // 0x513 PushV
	var_453_string = "Neutral"; // 0x514 MovS
	func_606(var_36_bool, var_453_string); // 0x515 Call
	var_454_int = 6543; // 0x517 PushI
	SetMessage(var_454_int); // 0x518 TObjFunc
	ClearReplies(); // 0x51a TObjFunc
	var_455_int = 6544; // 0x51c PushI
	var_456_int = 7210; // 0x51d PushI
	var_457_int = 7209; // 0x51e PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x51f TObjFunc
	var_458_int = 6552; // 0x521 PushI
	var_459_int = 7212; // 0x522 PushI
	var_460_int = 7218; // 0x523 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x524 TObjFunc
	return 0; // 0x526 Return
	
Label_1319:
	var_461_int = 7210; // 0x527 PushI
	var_462_bool = var_35_string == var_461_int; // 0x528 Eq
	if(var_462_bool == 0) goto Label_1337; // 0x529 JumpB
	var_463_string = ""; // 0x52a PushV
	var_463_string = "Neutral"; // 0x52b MovS
	func_606(var_36_bool, var_463_string); // 0x52c Call
	var_464_int = 6545; // 0x52e PushI
	SetMessage(var_464_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_465_int = 6546; // 0x533 PushI
	var_466_int = 7212; // 0x534 PushI
	var_467_int = 7211; // 0x535 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x536 TObjFunc
	return 0; // 0x538 Return
	
Label_1337:
	var_468_int = 7212; // 0x539 PushI
	var_469_bool = var_35_string == var_468_int; // 0x53a Eq
	if(var_469_bool == 0) goto Label_1360; // 0x53b JumpB
	var_470_string = ""; // 0x53c PushV
	var_470_string = "Neutral"; // 0x53d MovS
	func_606(var_36_bool, var_470_string); // 0x53e Call
	var_471_int = 6547; // 0x540 PushI
	SetMessage(var_471_int); // 0x541 TObjFunc
	ClearReplies(); // 0x543 TObjFunc
	var_472_int = 6548; // 0x545 PushI
	var_473_int = -1; // 0x546 PushI
	var_474_int = 7213; // 0x547 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x548 TObjFunc
	var_475_int = 6549; // 0x54a PushI
	var_476_int = -1; // 0x54b PushI
	var_477_int = 7214; // 0x54c PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x54d TObjFunc
	return 0; // 0x54f Return
	
Label_1360:
	var_478_int = 7191; // 0x550 PushI
	var_479_bool = var_35_string == var_478_int; // 0x551 Eq
	if(var_479_bool == 0) goto Label_1378; // 0x552 JumpB
	var_480_string = ""; // 0x553 PushV
	var_480_string = "Neutral"; // 0x554 MovS
	func_606(var_36_bool, var_480_string); // 0x555 Call
	var_481_int = 6526; // 0x557 PushI
	SetMessage(var_481_int); // 0x558 TObjFunc
	ClearReplies(); // 0x55a TObjFunc
	var_482_int = 6527; // 0x55c PushI
	var_483_int = 7193; // 0x55d PushI
	var_484_int = 7192; // 0x55e PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x55f TObjFunc
	return 0; // 0x561 Return
	
Label_1378:
	var_485_int = 7193; // 0x562 PushI
	var_486_bool = var_35_string == var_485_int; // 0x563 Eq
	if(var_486_bool == 0) goto Label_1401; // 0x564 JumpB
	var_487_string = ""; // 0x565 PushV
	var_487_string = "Neutral"; // 0x566 MovS
	func_606(var_36_bool, var_487_string); // 0x567 Call
	var_488_int = 6528; // 0x569 PushI
	SetMessage(var_488_int); // 0x56a TObjFunc
	ClearReplies(); // 0x56c TObjFunc
	var_489_int = 6529; // 0x56e PushI
	var_490_int = 7195; // 0x56f PushI
	var_491_int = 7194; // 0x570 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x571 TObjFunc
	var_492_int = 6531; // 0x573 PushI
	var_493_int = 7197; // 0x574 PushI
	var_494_int = 7196; // 0x575 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x576 TObjFunc
	return 0; // 0x578 Return
	
Label_1401:
	var_495_int = 7197; // 0x579 PushI
	var_496_bool = var_35_string == var_495_int; // 0x57a Eq
	if(var_496_bool == 0) goto Label_1419; // 0x57b JumpB
	var_497_string = ""; // 0x57c PushV
	var_497_string = "Neutral"; // 0x57d MovS
	func_606(var_36_bool, var_497_string); // 0x57e Call
	var_498_int = 6532; // 0x580 PushI
	SetMessage(var_498_int); // 0x581 TObjFunc
	ClearReplies(); // 0x583 TObjFunc
	var_499_int = 6533; // 0x585 PushI
	var_500_int = -1; // 0x586 PushI
	var_501_int = 7198; // 0x587 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x588 TObjFunc
	return 0; // 0x58a Return
	
Label_1419:
	var_502_int = 7195; // 0x58b PushI
	var_503_bool = var_35_string == var_502_int; // 0x58c Eq
	if(var_503_bool == 0) goto Label_1453; // 0x58d JumpB
	var_504_object = Obj(); var_505_object = Obj(); // 0x58e PushV
	var_504_object = var_1_object; // 0x58f MovT
	var_505_object = var_0_object; // 0x590 MovT
	func_5325(); // 0x591 Call
	var_506_string = ""; // 0x593 PushV
	var_506_string = "Neutral"; // 0x594 MovS
	func_606(var_36_bool, var_506_string); // 0x595 Call
	var_507_int = 6530; // 0x597 PushI
	SetMessage(var_507_int); // 0x598 TObjFunc
	ClearReplies(); // 0x59a TObjFunc
	var_508_bool = 0; var_509_object = Obj(); // 0x59c PushV
	var_509_object = var_1_object; // 0x59d MovT
	func_5651(var_509_object); // 0x59e Call
	var_514_bool = var_508_bool == 0; // 0x5a0 Not
	if(var_514_bool == 0) goto Label_1447; // 0x5a1 JumpB
	var_515_int = 6534; // 0x5a2 PushI
	var_516_int = 7201; // 0x5a3 PushI
	var_517_int = 7199; // 0x5a4 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x5a5 TObjFunc
	
Label_1447:
	var_518_int = 6535; // 0x5a7 PushI
	var_519_int = -1; // 0x5a8 PushI
	var_520_int = 7200; // 0x5a9 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x5aa TObjFunc
	return 0; // 0x5ac Return
	
Label_1453:
	var_521_int = 7201; // 0x5ad PushI
	var_522_bool = var_35_string == var_521_int; // 0x5ae Eq
	if(var_522_bool == 0) goto Label_1482; // 0x5af JumpB
	var_523_string = ""; // 0x5b0 PushV
	var_523_string = "Neutral"; // 0x5b1 MovS
	func_606(var_36_bool, var_523_string); // 0x5b2 Call
	var_524_int = 6536; // 0x5b4 PushI
	SetMessage(var_524_int); // 0x5b5 TObjFunc
	ClearReplies(); // 0x5b7 TObjFunc
	var_525_bool = 0; var_526_object = Obj(); // 0x5b9 PushV
	var_526_object = var_1_object; // 0x5ba MovT
	func_5365(var_526_object); // 0x5bb Call
	var_531_bool = var_525_bool == 0; // 0x5bd Not
	if(var_531_bool == 0) goto Label_1476; // 0x5be JumpB
	var_532_int = 6537; // 0x5bf PushI
	var_533_int = 7204; // 0x5c0 PushI
	var_534_int = 7202; // 0x5c1 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x5c2 TObjFunc
	
Label_1476:
	var_535_int = 6538; // 0x5c4 PushI
	var_536_int = -1; // 0x5c5 PushI
	var_537_int = 7203; // 0x5c6 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x5c7 TObjFunc
	return 0; // 0x5c9 Return
	
Label_1482:
	var_538_int = 7204; // 0x5ca PushI
	var_539_bool = var_35_string == var_538_int; // 0x5cb Eq
	if(var_539_bool == 0) goto Label_1500; // 0x5cc JumpB
	var_540_string = ""; // 0x5cd PushV
	var_540_string = "Neutral"; // 0x5ce MovS
	func_606(var_36_bool, var_540_string); // 0x5cf Call
	var_541_int = 6539; // 0x5d1 PushI
	SetMessage(var_541_int); // 0x5d2 TObjFunc
	ClearReplies(); // 0x5d4 TObjFunc
	var_542_int = 6540; // 0x5d6 PushI
	var_543_int = -1; // 0x5d7 PushI
	var_544_int = 7205; // 0x5d8 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x5d9 TObjFunc
	return 0; // 0x5db Return
	
Label_1500:
	var_545_int = 7181; // 0x5dc PushI
	var_546_bool = var_35_string == var_545_int; // 0x5dd Eq
	if(var_546_bool == 0) goto Label_1518; // 0x5de JumpB
	var_547_string = ""; // 0x5df PushV
	var_547_string = "Neutral"; // 0x5e0 MovS
	func_606(var_36_bool, var_547_string); // 0x5e1 Call
	var_548_int = 6517; // 0x5e3 PushI
	SetMessage(var_548_int); // 0x5e4 TObjFunc
	ClearReplies(); // 0x5e6 TObjFunc
	var_549_int = 6518; // 0x5e8 PushI
	var_550_int = 7183; // 0x5e9 PushI
	var_551_int = 7182; // 0x5ea PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x5eb TObjFunc
	return 0; // 0x5ed Return
	
Label_1518:
	var_552_int = 7183; // 0x5ee PushI
	var_553_bool = var_35_string == var_552_int; // 0x5ef Eq
	if(var_553_bool == 0) goto Label_1541; // 0x5f0 JumpB
	var_554_string = ""; // 0x5f1 PushV
	var_554_string = "Neutral"; // 0x5f2 MovS
	func_606(var_36_bool, var_554_string); // 0x5f3 Call
	var_555_int = 6519; // 0x5f5 PushI
	SetMessage(var_555_int); // 0x5f6 TObjFunc
	ClearReplies(); // 0x5f8 TObjFunc
	var_556_int = 6520; // 0x5fa PushI
	var_557_int = 7185; // 0x5fb PushI
	var_558_int = 7184; // 0x5fc PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x5fd TObjFunc
	var_559_int = 6522; // 0x5ff PushI
	var_560_int = 7187; // 0x600 PushI
	var_561_int = 7186; // 0x601 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x602 TObjFunc
	return 0; // 0x604 Return
	
Label_1541:
	var_562_int = 7187; // 0x605 PushI
	var_563_bool = var_35_string == var_562_int; // 0x606 Eq
	if(var_563_bool == 0) goto Label_1559; // 0x607 JumpB
	var_564_string = ""; // 0x608 PushV
	var_564_string = "Neutral"; // 0x609 MovS
	func_606(var_36_bool, var_564_string); // 0x60a Call
	var_565_int = 6523; // 0x60c PushI
	SetMessage(var_565_int); // 0x60d TObjFunc
	ClearReplies(); // 0x60f TObjFunc
	var_566_int = 6525; // 0x611 PushI
	var_567_int = -1; // 0x612 PushI
	var_568_int = 7190; // 0x613 PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x614 TObjFunc
	return 0; // 0x616 Return
	
Label_1559:
	var_569_int = 7185; // 0x617 PushI
	var_570_bool = var_35_string == var_569_int; // 0x618 Eq
	if(var_570_bool == 0) goto Label_1577; // 0x619 JumpB
	var_571_string = ""; // 0x61a PushV
	var_571_string = "Neutral"; // 0x61b MovS
	func_606(var_36_bool, var_571_string); // 0x61c Call
	var_572_int = 6521; // 0x61e PushI
	SetMessage(var_572_int); // 0x61f TObjFunc
	ClearReplies(); // 0x621 TObjFunc
	var_573_int = 6524; // 0x623 PushI
	var_574_int = 7187; // 0x624 PushI
	var_575_int = 7188; // 0x625 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x626 TObjFunc
	return 0; // 0x628 Return
	
Label_1577:
	var_576_int = 7167; // 0x629 PushI
	var_577_bool = var_35_string == var_576_int; // 0x62a Eq
	if(var_577_bool == 0) goto Label_1600; // 0x62b JumpB
	var_578_string = ""; // 0x62c PushV
	var_578_string = "Neutral"; // 0x62d MovS
	func_606(var_36_bool, var_578_string); // 0x62e Call
	var_579_int = 6503; // 0x630 PushI
	SetMessage(var_579_int); // 0x631 TObjFunc
	ClearReplies(); // 0x633 TObjFunc
	var_580_int = 6504; // 0x635 PushI
	var_581_int = 7170; // 0x636 PushI
	var_582_int = 7168; // 0x637 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x638 TObjFunc
	var_583_int = 6505; // 0x63a PushI
	var_584_int = 7173; // 0x63b PushI
	var_585_int = 7169; // 0x63c PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x63d TObjFunc
	return 0; // 0x63f Return
	
Label_1600:
	var_586_int = 7173; // 0x640 PushI
	var_587_bool = var_35_string == var_586_int; // 0x641 Eq
	if(var_587_bool == 0) goto Label_1618; // 0x642 JumpB
	var_588_string = ""; // 0x643 PushV
	var_588_string = "Neutral"; // 0x644 MovS
	func_606(var_36_bool, var_588_string); // 0x645 Call
	var_589_int = 6509; // 0x647 PushI
	SetMessage(var_589_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_590_int = 6510; // 0x64c PushI
	var_591_int = 7175; // 0x64d PushI
	var_592_int = 7174; // 0x64e PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x64f TObjFunc
	return 0; // 0x651 Return
	
Label_1618:
	var_593_int = 7175; // 0x652 PushI
	var_594_bool = var_35_string == var_593_int; // 0x653 Eq
	if(var_594_bool == 0) goto Label_1636; // 0x654 JumpB
	var_595_string = ""; // 0x655 PushV
	var_595_string = "Neutral"; // 0x656 MovS
	func_606(var_36_bool, var_595_string); // 0x657 Call
	var_596_int = 6511; // 0x659 PushI
	SetMessage(var_596_int); // 0x65a TObjFunc
	ClearReplies(); // 0x65c TObjFunc
	var_597_int = 6512; // 0x65e PushI
	var_598_int = 7177; // 0x65f PushI
	var_599_int = 7176; // 0x660 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x661 TObjFunc
	return 0; // 0x663 Return
	
Label_1636:
	var_600_int = 7177; // 0x664 PushI
	var_601_bool = var_35_string == var_600_int; // 0x665 Eq
	if(var_601_bool == 0) goto Label_1654; // 0x666 JumpB
	var_602_string = ""; // 0x667 PushV
	var_602_string = "Neutral"; // 0x668 MovS
	func_606(var_36_bool, var_602_string); // 0x669 Call
	var_603_int = 6513; // 0x66b PushI
	SetMessage(var_603_int); // 0x66c TObjFunc
	ClearReplies(); // 0x66e TObjFunc
	var_604_int = 6514; // 0x670 PushI
	var_605_int = -1; // 0x671 PushI
	var_606_int = 7178; // 0x672 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x673 TObjFunc
	return 0; // 0x675 Return
	
Label_1654:
	var_607_int = 7170; // 0x676 PushI
	var_608_bool = var_35_string == var_607_int; // 0x677 Eq
	if(var_608_bool == 0) goto Label_1677; // 0x678 JumpB
	var_609_string = ""; // 0x679 PushV
	var_609_string = "Neutral"; // 0x67a MovS
	func_606(var_36_bool, var_609_string); // 0x67b Call
	var_610_int = 6506; // 0x67d PushI
	SetMessage(var_610_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_611_int = 6507; // 0x682 PushI
	var_612_int = -1; // 0x683 PushI
	var_613_int = 7171; // 0x684 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x685 TObjFunc
	var_614_int = 6508; // 0x687 PushI
	var_615_int = 7179; // 0x688 PushI
	var_616_int = 7172; // 0x689 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x68a TObjFunc
	return 0; // 0x68c Return
	
Label_1677:
	var_617_int = 7179; // 0x68d PushI
	var_618_bool = var_35_string == var_617_int; // 0x68e Eq
	if(var_618_bool == 0) goto Label_1695; // 0x68f JumpB
	var_619_string = ""; // 0x690 PushV
	var_619_string = "Neutral"; // 0x691 MovS
	func_606(var_36_bool, var_619_string); // 0x692 Call
	var_620_int = 6515; // 0x694 PushI
	SetMessage(var_620_int); // 0x695 TObjFunc
	ClearReplies(); // 0x697 TObjFunc
	var_621_int = 6516; // 0x699 PushI
	var_622_int = -1; // 0x69a PushI
	var_623_int = 7180; // 0x69b PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x69c TObjFunc
	return 0; // 0x69e Return
	
Label_1695:
	var_624_int = 6336; // 0x69f PushI
	var_625_bool = var_35_string == var_624_int; // 0x6a0 Eq
	if(var_625_bool == 0) goto Label_1723; // 0x6a1 JumpB
	var_626_object = Obj(); var_627_object = Obj(); // 0x6a2 PushV
	var_626_object = var_1_object; // 0x6a3 MovT
	var_627_object = var_0_object; // 0x6a4 MovT
	func_5286(); // 0x6a5 Call
	var_630_string = ""; // 0x6a7 PushV
	var_630_string = "Neutral"; // 0x6a8 MovS
	func_606(var_36_bool, var_630_string); // 0x6a9 Call
	var_631_int = 5751; // 0x6ab PushI
	SetMessage(var_631_int); // 0x6ac TObjFunc
	ClearReplies(); // 0x6ae TObjFunc
	var_632_int = 5752; // 0x6b0 PushI
	var_633_int = 6338; // 0x6b1 PushI
	var_634_int = 6337; // 0x6b2 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x6b3 TObjFunc
	var_635_int = 5756; // 0x6b5 PushI
	var_636_int = 6342; // 0x6b6 PushI
	var_637_int = 6341; // 0x6b7 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x6b8 TObjFunc
	return 0; // 0x6ba Return
	
Label_1723:
	var_638_int = 6342; // 0x6bb PushI
	var_639_bool = var_35_string == var_638_int; // 0x6bc Eq
	if(var_639_bool == 0) goto Label_1741; // 0x6bd JumpB
	var_640_string = ""; // 0x6be PushV
	var_640_string = "Neutral"; // 0x6bf MovS
	func_606(var_36_bool, var_640_string); // 0x6c0 Call
	var_641_int = 5757; // 0x6c2 PushI
	SetMessage(var_641_int); // 0x6c3 TObjFunc
	ClearReplies(); // 0x6c5 TObjFunc
	var_642_int = 5758; // 0x6c7 PushI
	var_643_int = -1; // 0x6c8 PushI
	var_644_int = 6343; // 0x6c9 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x6ca TObjFunc
	return 0; // 0x6cc Return
	
Label_1741:
	var_645_int = 6338; // 0x6cd PushI
	var_646_bool = var_35_string == var_645_int; // 0x6ce Eq
	if(var_646_bool == 0) goto Label_1764; // 0x6cf JumpB
	var_647_string = ""; // 0x6d0 PushV
	var_647_string = "Neutral"; // 0x6d1 MovS
	func_606(var_36_bool, var_647_string); // 0x6d2 Call
	var_648_int = 5753; // 0x6d4 PushI
	SetMessage(var_648_int); // 0x6d5 TObjFunc
	ClearReplies(); // 0x6d7 TObjFunc
	var_649_int = 5754; // 0x6d9 PushI
	var_650_int = 7158; // 0x6da PushI
	var_651_int = 6339; // 0x6db PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x6dc TObjFunc
	var_652_int = 5755; // 0x6de PushI
	var_653_int = 7155; // 0x6df PushI
	var_654_int = 6340; // 0x6e0 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x6e1 TObjFunc
	return 0; // 0x6e3 Return
	
Label_1764:
	var_655_int = 7155; // 0x6e4 PushI
	var_656_bool = var_35_string == var_655_int; // 0x6e5 Eq
	if(var_656_bool == 0) goto Label_1787; // 0x6e6 JumpB
	var_657_string = ""; // 0x6e7 PushV
	var_657_string = "Neutral"; // 0x6e8 MovS
	func_606(var_36_bool, var_657_string); // 0x6e9 Call
	var_658_int = 6492; // 0x6eb PushI
	SetMessage(var_658_int); // 0x6ec TObjFunc
	ClearReplies(); // 0x6ee TObjFunc
	var_659_int = 6493; // 0x6f0 PushI
	var_660_int = -1; // 0x6f1 PushI
	var_661_int = 7156; // 0x6f2 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x6f3 TObjFunc
	var_662_int = 6494; // 0x6f5 PushI
	var_663_int = -1; // 0x6f6 PushI
	var_664_int = 7157; // 0x6f7 PushI
	AddReply(var_662_int, var_663_int, var_664_int); // 0x6f8 TObjFunc
	return 0; // 0x6fa Return
	
Label_1787:
	var_665_int = 7158; // 0x6fb PushI
	var_666_bool = var_35_string == var_665_int; // 0x6fc Eq
	if(var_666_bool == 0) goto Label_1810; // 0x6fd JumpB
	var_667_string = ""; // 0x6fe PushV
	var_667_string = "Neutral"; // 0x6ff MovS
	func_606(var_36_bool, var_667_string); // 0x700 Call
	var_668_int = 6495; // 0x702 PushI
	SetMessage(var_668_int); // 0x703 TObjFunc
	ClearReplies(); // 0x705 TObjFunc
	var_669_int = 6496; // 0x707 PushI
	var_670_int = -1; // 0x708 PushI
	var_671_int = 7159; // 0x709 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x70a TObjFunc
	var_672_int = 6497; // 0x70c PushI
	var_673_int = -1; // 0x70d PushI
	var_674_int = 7160; // 0x70e PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0x70f TObjFunc
	return 0; // 0x711 Return
	
Label_1810:
	var_675_int = 6344; // 0x712 PushI
	var_676_bool = var_35_string == var_675_int; // 0x713 Eq
	if(var_676_bool == 0) goto Label_1843; // 0x714 JumpB
	var_677_bool = 0; var_678_object = Obj(); // 0x715 PushV
	var_678_object = var_1_object; // 0x716 MovT
	func_5389(var_678_object); // 0x717 Call
	if(var_677_bool == 0) goto Label_1843; // 0x719 JumpB
	var_679_object = Obj(); var_680_object = Obj(); // 0x71a PushV
	var_679_object = var_1_object; // 0x71b MovT
	var_680_object = var_0_object; // 0x71c MovT
	func_5107(); // 0x71d Call
	var_683_string = ""; // 0x71f PushV
	var_683_string = "Neutral"; // 0x720 MovS
	func_606(var_36_bool, var_683_string); // 0x721 Call
	var_684_int = 5759; // 0x723 PushI
	SetMessage(var_684_int); // 0x724 TObjFunc
	ClearReplies(); // 0x726 TObjFunc
	var_685_int = 5760; // 0x728 PushI
	var_686_int = 6346; // 0x729 PushI
	var_687_int = 6345; // 0x72a PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0x72b TObjFunc
	var_688_int = 5769; // 0x72d PushI
	var_689_int = 7161; // 0x72e PushI
	var_690_int = 6354; // 0x72f PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x730 TObjFunc
	return 0; // 0x732 Return
	
Label_1843:
	var_691_int = 7161; // 0x733 PushI
	var_692_bool = var_35_string == var_691_int; // 0x734 Eq
	if(var_692_bool == 0) goto Label_1861; // 0x735 JumpB
	var_693_string = ""; // 0x736 PushV
	var_693_string = "Neutral"; // 0x737 MovS
	func_606(var_36_bool, var_693_string); // 0x738 Call
	var_694_int = 6498; // 0x73a PushI
	SetMessage(var_694_int); // 0x73b TObjFunc
	ClearReplies(); // 0x73d TObjFunc
	var_695_int = 6499; // 0x73f PushI
	var_696_int = 6346; // 0x740 PushI
	var_697_int = 7162; // 0x741 PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x742 TObjFunc
	return 0; // 0x744 Return
	
Label_1861:
	var_698_int = 6346; // 0x745 PushI
	var_699_bool = var_35_string == var_698_int; // 0x746 Eq
	if(var_699_bool == 0) goto Label_1884; // 0x747 JumpB
	var_700_string = ""; // 0x748 PushV
	var_700_string = "Neutral"; // 0x749 MovS
	func_606(var_36_bool, var_700_string); // 0x74a Call
	var_701_int = 5761; // 0x74c PushI
	SetMessage(var_701_int); // 0x74d TObjFunc
	ClearReplies(); // 0x74f TObjFunc
	var_702_int = 5762; // 0x751 PushI
	var_703_int = 6348; // 0x752 PushI
	var_704_int = 6347; // 0x753 PushI
	AddReply(var_702_int, var_703_int, var_704_int); // 0x754 TObjFunc
	var_705_int = 5765; // 0x756 PushI
	var_706_int = 6351; // 0x757 PushI
	var_707_int = 6350; // 0x758 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x759 TObjFunc
	return 0; // 0x75b Return
	
Label_1884:
	var_708_int = 6351; // 0x75c PushI
	var_709_bool = var_35_string == var_708_int; // 0x75d Eq
	if(var_709_bool == 0) goto Label_1907; // 0x75e JumpB
	var_710_string = ""; // 0x75f PushV
	var_710_string = "Neutral"; // 0x760 MovS
	func_606(var_36_bool, var_710_string); // 0x761 Call
	var_711_int = 5766; // 0x763 PushI
	SetMessage(var_711_int); // 0x764 TObjFunc
	ClearReplies(); // 0x766 TObjFunc
	var_712_int = 5767; // 0x768 PushI
	var_713_int = 7164; // 0x769 PushI
	var_714_int = 6352; // 0x76a PushI
	AddReply(var_712_int, var_713_int, var_714_int); // 0x76b TObjFunc
	var_715_int = 5768; // 0x76d PushI
	var_716_int = -1; // 0x76e PushI
	var_717_int = 6353; // 0x76f PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x770 TObjFunc
	return 0; // 0x772 Return
	
Label_1907:
	var_718_int = 7164; // 0x773 PushI
	var_719_bool = var_35_string == var_718_int; // 0x774 Eq
	if(var_719_bool == 0) goto Label_1925; // 0x775 JumpB
	var_720_string = ""; // 0x776 PushV
	var_720_string = "Neutral"; // 0x777 MovS
	func_606(var_36_bool, var_720_string); // 0x778 Call
	var_721_int = 6500; // 0x77a PushI
	SetMessage(var_721_int); // 0x77b TObjFunc
	ClearReplies(); // 0x77d TObjFunc
	var_722_int = 6501; // 0x77f PushI
	var_723_int = -1; // 0x780 PushI
	var_724_int = 7165; // 0x781 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x782 TObjFunc
	return 0; // 0x784 Return
	
Label_1925:
	var_725_int = 6348; // 0x785 PushI
	var_726_bool = var_35_string == var_725_int; // 0x786 Eq
	if(var_726_bool == 0) goto Label_1943; // 0x787 JumpB
	var_727_string = ""; // 0x788 PushV
	var_727_string = "Neutral"; // 0x789 MovS
	func_606(var_36_bool, var_727_string); // 0x78a Call
	var_728_int = 5763; // 0x78c PushI
	SetMessage(var_728_int); // 0x78d TObjFunc
	ClearReplies(); // 0x78f TObjFunc
	var_729_int = 5764; // 0x791 PushI
	var_730_int = -1; // 0x792 PushI
	var_731_int = 6349; // 0x793 PushI
	AddReply(var_729_int, var_730_int, var_731_int); // 0x794 TObjFunc
	return 0; // 0x796 Return
	
Label_1943:
	var_3_string = 1; // 0x797 TMovB
	var_732_bool = 0; // 0x798 PushV
	func_5040(var_732_bool); // 0x799 Call
	if(var_732_bool == 0) goto Label_1951; // 0x79b JumpB
	lshStopAnimation(); // 0x79c Func
	goto Label_1953; // 0x79e Jump
	
Label_1953:
	return 0; // 0x7a1 Return
	
Label_1951:
	StopAnimation(); // 0x79f Func
	
Label_1955:
	return 0; // 0x7a3 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x89c PushI
	if(var_37_int == 0) goto Label_3094; // 0x89d JumpB
	func_4939(); // 0x89f Call
	var_39_int = 7899; // 0x8a1 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x8a2 Eq
	if(var_40_bool == 0) goto Label_2227; // 0x8a3 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x8a4 PushV
	var_41_object = var_1_object; // 0x8a5 MovT
	var_42_object = var_0_object; // 0x8a6 MovT
	func_5125(); // 0x8a7 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x8a9 PushV
	var_45_object = var_1_object; // 0x8aa MovT
	var_46_object = var_0_object; // 0x8ab MovT
	func_5161(); // 0x8ac Call
	var_95_object = Obj(); var_96_object = Obj(); // 0x8ae PushV
	var_95_object = var_1_object; // 0x8af MovT
	var_96_object = var_0_object; // 0x8b0 MovT
	func_5331(); // 0x8b1 Call
	
Label_2227:
	var_121_int = 7900; // 0x8b3 PushI
	var_122_bool = var_36_bool == var_121_int; // 0x8b4 Eq
	if(var_122_bool == 0) goto Label_2240; // 0x8b5 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x8b6 PushV
	var_123_object = var_1_object; // 0x8b7 MovT
	var_124_object = var_0_object; // 0x8b8 MovT
	func_5125(); // 0x8b9 Call
	var_125_object = Obj(); var_126_object = Obj(); // 0x8bb PushV
	var_125_object = var_1_object; // 0x8bc MovT
	var_126_object = var_0_object; // 0x8bd MovT
	func_5161(); // 0x8be Call
	
Label_2240:
	var_127_int = 7913; // 0x8c0 PushI
	var_128_bool = var_36_bool == var_127_int; // 0x8c1 Eq
	if(var_128_bool == 0) goto Label_2248; // 0x8c2 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x8c3 PushV
	var_129_object = var_1_object; // 0x8c4 MovT
	var_130_object = var_0_object; // 0x8c5 MovT
	func_5125(); // 0x8c6 Call
	
Label_2248:
	var_131_int = 7909; // 0x8c8 PushI
	var_132_bool = var_36_bool == var_131_int; // 0x8c9 Eq
	if(var_132_bool == 0) goto Label_2256; // 0x8ca JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x8cb PushV
	var_133_object = var_1_object; // 0x8cc MovT
	var_134_object = var_0_object; // 0x8cd MovT
	func_5125(); // 0x8ce Call
	
Label_2256:
	var_135_int = 7918; // 0x8d0 PushI
	var_136_bool = var_36_bool == var_135_int; // 0x8d1 Eq
	if(var_136_bool == 0) goto Label_2264; // 0x8d2 JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x8d3 PushV
	var_137_object = var_1_object; // 0x8d4 MovT
	var_138_object = var_0_object; // 0x8d5 MovT
	func_5131(); // 0x8d6 Call
	
Label_2264:
	var_141_int = 7919; // 0x8d8 PushI
	var_142_bool = var_36_bool == var_141_int; // 0x8d9 Eq
	if(var_142_bool == 0) goto Label_2272; // 0x8da JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x8db PushV
	var_143_object = var_1_object; // 0x8dc MovT
	var_144_object = var_0_object; // 0x8dd MovT
	func_5131(); // 0x8de Call
	
Label_2272:
	var_145_int = 7942; // 0x8e0 PushI
	var_146_bool = var_36_bool == var_145_int; // 0x8e1 Eq
	if(var_146_bool == 0) goto Label_2300; // 0x8e2 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x8e3 PushV
	var_147_object = var_1_object; // 0x8e4 MovT
	var_148_object = var_0_object; // 0x8e5 MovT
	func_5137(); // 0x8e6 Call
	var_151_object = Obj(); var_152_object = Obj(); // 0x8e8 PushV
	var_151_object = var_1_object; // 0x8e9 MovT
	var_152_object = var_0_object; // 0x8ea MovT
	func_5193(); // 0x8eb Call
	var_177_object = Obj(); var_178_object = Obj(); // 0x8ed PushV
	var_177_object = var_1_object; // 0x8ee MovT
	var_178_object = var_0_object; // 0x8ef MovT
	func_5253(); // 0x8f0 Call
	var_184_object = Obj(); var_185_object = Obj(); // 0x8f2 PushV
	var_184_object = var_1_object; // 0x8f3 MovT
	var_185_object = var_0_object; // 0x8f4 MovT
	func_5054(var_185_object); // 0x8f5 Call
	var_193_object = Obj(); var_194_object = Obj(); // 0x8f7 PushV
	var_193_object = var_1_object; // 0x8f8 MovT
	var_194_object = var_0_object; // 0x8f9 MovT
	func_5065(); // 0x8fa Call
	
Label_2300:
	var_197_int = 7947; // 0x8fc PushI
	var_198_bool = var_36_bool == var_197_int; // 0x8fd Eq
	if(var_198_bool == 0) goto Label_2328; // 0x8fe JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x8ff PushV
	var_199_object = var_1_object; // 0x900 MovT
	var_200_object = var_0_object; // 0x901 MovT
	func_5137(); // 0x902 Call
	var_201_object = Obj(); var_202_object = Obj(); // 0x904 PushV
	var_201_object = var_1_object; // 0x905 MovT
	var_202_object = var_0_object; // 0x906 MovT
	func_5193(); // 0x907 Call
	var_203_object = Obj(); var_204_object = Obj(); // 0x909 PushV
	var_203_object = var_1_object; // 0x90a MovT
	var_204_object = var_0_object; // 0x90b MovT
	func_5253(); // 0x90c Call
	var_205_object = Obj(); var_206_object = Obj(); // 0x90e PushV
	var_205_object = var_1_object; // 0x90f MovT
	var_206_object = var_0_object; // 0x910 MovT
	func_5054(var_206_object); // 0x911 Call
	var_207_object = Obj(); var_208_object = Obj(); // 0x913 PushV
	var_207_object = var_1_object; // 0x914 MovT
	var_208_object = var_0_object; // 0x915 MovT
	func_5065(); // 0x916 Call
	
Label_2328:
	var_209_int = 7948; // 0x918 PushI
	var_210_bool = var_36_bool == var_209_int; // 0x919 Eq
	if(var_210_bool == 0) goto Label_2341; // 0x91a JumpB
	var_211_object = Obj(); var_212_object = Obj(); // 0x91b PushV
	var_211_object = var_1_object; // 0x91c MovT
	var_212_object = var_0_object; // 0x91d MovT
	func_5143(); // 0x91e Call
	var_215_object = Obj(); var_216_object = Obj(); // 0x920 PushV
	var_215_object = var_1_object; // 0x921 MovT
	var_216_object = var_0_object; // 0x922 MovT
	func_5225(); // 0x923 Call
	
Label_2341:
	var_242_int = 7949; // 0x925 PushI
	var_243_bool = var_36_bool == var_242_int; // 0x926 Eq
	if(var_243_bool == 0) goto Label_2354; // 0x927 JumpB
	var_244_object = Obj(); var_245_object = Obj(); // 0x928 PushV
	var_244_object = var_1_object; // 0x929 MovT
	var_245_object = var_0_object; // 0x92a MovT
	func_5143(); // 0x92b Call
	var_246_object = Obj(); var_247_object = Obj(); // 0x92d PushV
	var_246_object = var_1_object; // 0x92e MovT
	var_247_object = var_0_object; // 0x92f MovT
	func_5225(); // 0x930 Call
	
Label_2354:
	var_248_int = 7950; // 0x932 PushI
	var_249_bool = var_36_bool == var_248_int; // 0x933 Eq
	if(var_249_bool == 0) goto Label_2362; // 0x934 JumpB
	var_250_object = Obj(); var_251_object = Obj(); // 0x935 PushV
	var_250_object = var_1_object; // 0x936 MovT
	var_251_object = var_0_object; // 0x937 MovT
	func_5149(); // 0x938 Call
	
Label_2362:
	var_254_int = 7570; // 0x93a PushI
	var_255_bool = var_35_string == var_254_int; // 0x93b Eq
	if(var_255_bool == 0) goto Label_2495; // 0x93c JumpB
	var_256_string = ""; // 0x93d PushV
	var_256_string = "Neutral"; // 0x93e MovS
	func_2187(var_36_bool, var_256_string); // 0x93f Call
	var_271_int = 6864; // 0x941 PushI
	SetMessage(var_271_int); // 0x942 TObjFunc
	ClearReplies(); // 0x944 TObjFunc
	var_272_bool = 0; // 0x946 PushV
	var_272_bool = 0; // 0x947 MovB
	var_273_bool = 0; var_274_object = Obj(); // 0x948 PushV
	var_274_object = var_1_object; // 0x949 MovT
	func_5497(var_274_object); // 0x94a Call
	if(var_273_bool == 0) goto Label_2387; // 0x94c JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x94d PushV
	var_282_object = var_1_object; // 0x94e MovT
	func_5569(var_282_object); // 0x94f Call
	if(var_281_bool == 0) goto Label_2387; // 0x951 JumpB
	var_272_bool = 1; // 0x952 MovB
	
Label_2387:
	if(var_272_bool == 0) goto Label_2393; // 0x953 JumpB
	var_287_int = 6865; // 0x954 PushI
	var_288_int = 7572; // 0x955 PushI
	var_289_int = 7571; // 0x956 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x957 TObjFunc
	
Label_2393:
	var_290_bool = 0; // 0x959 PushV
	var_290_bool = 0; // 0x95a MovB
	var_291_bool = 0; var_292_object = Obj(); // 0x95b PushV
	var_292_object = var_1_object; // 0x95c MovT
	func_5509(var_292_object); // 0x95d Call
	if(var_291_bool == 0) goto Label_2406; // 0x95f JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x960 PushV
	var_298_object = var_1_object; // 0x961 MovT
	func_5581(var_298_object); // 0x962 Call
	if(var_297_bool == 0) goto Label_2406; // 0x964 JumpB
	var_290_bool = 1; // 0x965 MovB
	
Label_2406:
	if(var_290_bool == 0) goto Label_2412; // 0x966 JumpB
	var_303_int = 6868; // 0x967 PushI
	var_304_int = 7575; // 0x968 PushI
	var_305_int = 7574; // 0x969 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x96a TObjFunc
	
Label_2412:
	var_306_bool = 0; // 0x96c PushV
	var_306_bool = 0; // 0x96d MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x96e PushV
	var_308_object = var_1_object; // 0x96f MovT
	func_5521(var_308_object); // 0x970 Call
	if(var_307_bool == 0) goto Label_2425; // 0x972 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x973 PushV
	var_314_object = var_1_object; // 0x974 MovT
	func_5593(var_314_object); // 0x975 Call
	if(var_313_bool == 0) goto Label_2425; // 0x977 JumpB
	var_306_bool = 1; // 0x978 MovB
	
Label_2425:
	if(var_306_bool == 0) goto Label_2431; // 0x979 JumpB
	var_319_int = 6870; // 0x97a PushI
	var_320_int = 7577; // 0x97b PushI
	var_321_int = 7576; // 0x97c PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x97d TObjFunc
	
Label_2431:
	var_322_bool = 0; // 0x97f PushV
	var_322_bool = 0; // 0x980 MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x981 PushV
	var_324_object = var_1_object; // 0x982 MovT
	func_5533(var_324_object); // 0x983 Call
	if(var_323_bool == 0) goto Label_2444; // 0x985 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x986 PushV
	var_330_object = var_1_object; // 0x987 MovT
	func_5605(var_330_object); // 0x988 Call
	if(var_329_bool == 0) goto Label_2444; // 0x98a JumpB
	var_322_bool = 1; // 0x98b MovB
	
Label_2444:
	if(var_322_bool == 0) goto Label_2450; // 0x98c JumpB
	var_335_int = 6874; // 0x98d PushI
	var_336_int = 7581; // 0x98e PushI
	var_337_int = 7580; // 0x98f PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x990 TObjFunc
	
Label_2450:
	var_338_bool = 0; // 0x992 PushV
	var_338_bool = 0; // 0x993 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x994 PushV
	var_340_object = var_1_object; // 0x995 MovT
	func_5545(var_340_object); // 0x996 Call
	if(var_339_bool == 0) goto Label_2463; // 0x998 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x999 PushV
	var_346_object = var_1_object; // 0x99a MovT
	func_5557(var_346_object); // 0x99b Call
	if(var_345_bool == 0) goto Label_2463; // 0x99d JumpB
	var_338_bool = 1; // 0x99e MovB
	
Label_2463:
	if(var_338_bool == 0) goto Label_2469; // 0x99f JumpB
	var_351_int = 6872; // 0x9a0 PushI
	var_352_int = 7579; // 0x9a1 PushI
	var_353_int = 7578; // 0x9a2 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x9a3 TObjFunc
	
Label_2469:
	var_354_int = 7531; // 0x9a5 PushI
	var_355_int = -1; // 0x9a6 PushI
	var_356_int = 8313; // 0x9a7 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x9a8 TObjFunc
	return 0; // 0x9aa Return
	
Label_2495:
	var_357_int = 10111; // 0x9bf PushI
	var_358_bool = var_35_string == var_357_int; // 0x9c0 Eq
	if(var_358_bool == 0) goto Label_2513; // 0x9c1 JumpB
	var_359_string = ""; // 0x9c2 PushV
	var_359_string = "Neutral"; // 0x9c3 MovS
	func_2187(var_36_bool, var_359_string); // 0x9c4 Call
	var_360_int = 9217; // 0x9c6 PushI
	SetMessage(var_360_int); // 0x9c7 TObjFunc
	ClearReplies(); // 0x9c9 TObjFunc
	var_361_int = 9218; // 0x9cb PushI
	var_362_int = 10097; // 0x9cc PushI
	var_363_int = 10112; // 0x9cd PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x9ce TObjFunc
	return 0; // 0x9d0 Return
	
Label_2513:
	var_364_int = 10097; // 0x9d1 PushI
	var_365_bool = var_35_string == var_364_int; // 0x9d2 Eq
	if(var_365_bool == 0) goto Label_2536; // 0x9d3 JumpB
	var_366_string = ""; // 0x9d4 PushV
	var_366_string = "Neutral"; // 0x9d5 MovS
	func_2187(var_36_bool, var_366_string); // 0x9d6 Call
	var_367_int = 9205; // 0x9d8 PushI
	SetMessage(var_367_int); // 0x9d9 TObjFunc
	ClearReplies(); // 0x9db TObjFunc
	var_368_int = 9206; // 0x9dd PushI
	var_369_int = 10099; // 0x9de PushI
	var_370_int = 10098; // 0x9df PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x9e0 TObjFunc
	var_371_int = 9210; // 0x9e2 PushI
	var_372_int = 10103; // 0x9e3 PushI
	var_373_int = 10102; // 0x9e4 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x9e5 TObjFunc
	return 0; // 0x9e7 Return
	
Label_2536:
	var_374_int = 10103; // 0x9e8 PushI
	var_375_bool = var_35_string == var_374_int; // 0x9e9 Eq
	if(var_375_bool == 0) goto Label_2559; // 0x9ea JumpB
	var_376_string = ""; // 0x9eb PushV
	var_376_string = "Neutral"; // 0x9ec MovS
	func_2187(var_36_bool, var_376_string); // 0x9ed Call
	var_377_int = 9211; // 0x9ef PushI
	SetMessage(var_377_int); // 0x9f0 TObjFunc
	ClearReplies(); // 0x9f2 TObjFunc
	var_378_int = 9212; // 0x9f4 PushI
	var_379_int = 10105; // 0x9f5 PushI
	var_380_int = 10104; // 0x9f6 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x9f7 TObjFunc
	var_381_int = 9215; // 0x9f9 PushI
	var_382_int = 10099; // 0x9fa PushI
	var_383_int = 10108; // 0x9fb PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x9fc TObjFunc
	return 0; // 0x9fe Return
	
Label_2559:
	var_384_int = 10105; // 0x9ff PushI
	var_385_bool = var_35_string == var_384_int; // 0xa00 Eq
	if(var_385_bool == 0) goto Label_2577; // 0xa01 JumpB
	var_386_string = ""; // 0xa02 PushV
	var_386_string = "Neutral"; // 0xa03 MovS
	func_2187(var_36_bool, var_386_string); // 0xa04 Call
	var_387_int = 9213; // 0xa06 PushI
	SetMessage(var_387_int); // 0xa07 TObjFunc
	ClearReplies(); // 0xa09 TObjFunc
	var_388_int = 9214; // 0xa0b PushI
	var_389_int = 10099; // 0xa0c PushI
	var_390_int = 10106; // 0xa0d PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xa0e TObjFunc
	return 0; // 0xa10 Return
	
Label_2577:
	var_391_int = 10099; // 0xa11 PushI
	var_392_bool = var_35_string == var_391_int; // 0xa12 Eq
	if(var_392_bool == 0) goto Label_2600; // 0xa13 JumpB
	var_393_string = ""; // 0xa14 PushV
	var_393_string = "Neutral"; // 0xa15 MovS
	func_2187(var_36_bool, var_393_string); // 0xa16 Call
	var_394_int = 9207; // 0xa18 PushI
	SetMessage(var_394_int); // 0xa19 TObjFunc
	ClearReplies(); // 0xa1b TObjFunc
	var_395_int = 9208; // 0xa1d PushI
	var_396_int = -1; // 0xa1e PushI
	var_397_int = 10100; // 0xa1f PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xa20 TObjFunc
	var_398_int = 9209; // 0xa22 PushI
	var_399_int = -1; // 0xa23 PushI
	var_400_int = 10101; // 0xa24 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xa25 TObjFunc
	return 0; // 0xa27 Return
	
Label_2600:
	var_401_int = 7579; // 0xa28 PushI
	var_402_bool = var_35_string == var_401_int; // 0xa29 Eq
	if(var_402_bool == 0) goto Label_2618; // 0xa2a JumpB
	var_403_string = ""; // 0xa2b PushV
	var_403_string = "Neutral"; // 0xa2c MovS
	func_2187(var_36_bool, var_403_string); // 0xa2d Call
	var_404_int = 6873; // 0xa2f PushI
	SetMessage(var_404_int); // 0xa30 TObjFunc
	ClearReplies(); // 0xa32 TObjFunc
	var_405_int = 7214; // 0xa34 PushI
	var_406_int = -1; // 0xa35 PushI
	var_407_int = 7950; // 0xa36 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xa37 TObjFunc
	return 0; // 0xa39 Return
	
Label_2618:
	var_408_int = 7581; // 0xa3a PushI
	var_409_bool = var_35_string == var_408_int; // 0xa3b Eq
	if(var_409_bool == 0) goto Label_2641; // 0xa3c JumpB
	var_410_string = ""; // 0xa3d PushV
	var_410_string = "Neutral"; // 0xa3e MovS
	func_2187(var_36_bool, var_410_string); // 0xa3f Call
	var_411_int = 6875; // 0xa41 PushI
	SetMessage(var_411_int); // 0xa42 TObjFunc
	ClearReplies(); // 0xa44 TObjFunc
	var_412_int = 7212; // 0xa46 PushI
	var_413_int = -1; // 0xa47 PushI
	var_414_int = 7948; // 0xa48 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0xa49 TObjFunc
	var_415_int = 7213; // 0xa4b PushI
	var_416_int = -1; // 0xa4c PushI
	var_417_int = 7949; // 0xa4d PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0xa4e TObjFunc
	return 0; // 0xa50 Return
	
Label_2641:
	var_418_int = 7577; // 0xa51 PushI
	var_419_bool = var_35_string == var_418_int; // 0xa52 Eq
	if(var_419_bool == 0) goto Label_2669; // 0xa53 JumpB
	var_420_string = ""; // 0xa54 PushV
	var_420_string = "Neutral"; // 0xa55 MovS
	func_2187(var_36_bool, var_420_string); // 0xa56 Call
	var_421_int = 6871; // 0xa58 PushI
	SetMessage(var_421_int); // 0xa59 TObjFunc
	ClearReplies(); // 0xa5b TObjFunc
	var_422_int = 7192; // 0xa5d PushI
	var_423_int = 7926; // 0xa5e PushI
	var_424_int = 7924; // 0xa5f PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0xa60 TObjFunc
	var_425_int = 7193; // 0xa62 PushI
	var_426_int = 7926; // 0xa63 PushI
	var_427_int = 7925; // 0xa64 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xa65 TObjFunc
	var_428_int = 7195; // 0xa67 PushI
	var_429_int = 7928; // 0xa68 PushI
	var_430_int = 7927; // 0xa69 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xa6a TObjFunc
	return 0; // 0xa6c Return
	
Label_2669:
	var_431_int = 7928; // 0xa6d PushI
	var_432_bool = var_35_string == var_431_int; // 0xa6e Eq
	if(var_432_bool == 0) goto Label_2687; // 0xa6f JumpB
	var_433_string = ""; // 0xa70 PushV
	var_433_string = "Neutral"; // 0xa71 MovS
	func_2187(var_36_bool, var_433_string); // 0xa72 Call
	var_434_int = 7196; // 0xa74 PushI
	SetMessage(var_434_int); // 0xa75 TObjFunc
	ClearReplies(); // 0xa77 TObjFunc
	var_435_int = 7197; // 0xa79 PushI
	var_436_int = 7926; // 0xa7a PushI
	var_437_int = 7929; // 0xa7b PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xa7c TObjFunc
	return 0; // 0xa7e Return
	
Label_2687:
	var_438_int = 7926; // 0xa7f PushI
	var_439_bool = var_35_string == var_438_int; // 0xa80 Eq
	if(var_439_bool == 0) goto Label_2721; // 0xa81 JumpB
	var_440_string = ""; // 0xa82 PushV
	var_440_string = "Neutral"; // 0xa83 MovS
	func_2187(var_36_bool, var_440_string); // 0xa84 Call
	var_441_int = 7194; // 0xa86 PushI
	SetMessage(var_441_int); // 0xa87 TObjFunc
	ClearReplies(); // 0xa89 TObjFunc
	var_442_bool = 0; var_443_object = Obj(); // 0xa8b PushV
	var_443_object = var_1_object; // 0xa8c MovT
	func_5711(var_443_object); // 0xa8d Call
	if(var_442_bool == 0) goto Label_2709; // 0xa8f JumpB
	var_448_int = 7198; // 0xa90 PushI
	var_449_int = 7932; // 0xa91 PushI
	var_450_int = 7931; // 0xa92 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xa93 TObjFunc
	
Label_2709:
	var_451_bool = 0; var_452_object = Obj(); // 0xa95 PushV
	var_452_object = var_1_object; // 0xa96 MovT
	func_5711(var_452_object); // 0xa97 Call
	var_453_bool = var_451_bool == 0; // 0xa99 Not
	if(var_453_bool == 0) goto Label_2720; // 0xa9a JumpB
	var_454_int = 7200; // 0xa9b PushI
	var_455_int = 7935; // 0xa9c PushI
	var_456_int = 7934; // 0xa9d PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0xa9e TObjFunc
	
Label_2720:
	return 0; // 0xaa0 Return
	
Label_2721:
	var_457_int = 7935; // 0xaa1 PushI
	var_458_bool = var_35_string == var_457_int; // 0xaa2 Eq
	if(var_458_bool == 0) goto Label_2739; // 0xaa3 JumpB
	var_459_string = ""; // 0xaa4 PushV
	var_459_string = "Neutral"; // 0xaa5 MovS
	func_2187(var_36_bool, var_459_string); // 0xaa6 Call
	var_460_int = 7201; // 0xaa8 PushI
	SetMessage(var_460_int); // 0xaa9 TObjFunc
	ClearReplies(); // 0xaab TObjFunc
	var_461_int = 7202; // 0xaad PushI
	var_462_int = 7932; // 0xaae PushI
	var_463_int = 7936; // 0xaaf PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0xab0 TObjFunc
	return 0; // 0xab2 Return
	
Label_2739:
	var_464_int = 7932; // 0xab3 PushI
	var_465_bool = var_35_string == var_464_int; // 0xab4 Eq
	if(var_465_bool == 0) goto Label_2762; // 0xab5 JumpB
	var_466_string = ""; // 0xab6 PushV
	var_466_string = "Neutral"; // 0xab7 MovS
	func_2187(var_36_bool, var_466_string); // 0xab8 Call
	var_467_int = 7199; // 0xaba PushI
	SetMessage(var_467_int); // 0xabb TObjFunc
	ClearReplies(); // 0xabd TObjFunc
	var_468_int = 7203; // 0xabf PushI
	var_469_int = 7939; // 0xac0 PushI
	var_470_int = 7938; // 0xac1 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xac2 TObjFunc
	var_471_int = 7208; // 0xac4 PushI
	var_472_int = 7944; // 0xac5 PushI
	var_473_int = 7943; // 0xac6 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0xac7 TObjFunc
	return 0; // 0xac9 Return
	
Label_2762:
	var_474_int = 7944; // 0xaca PushI
	var_475_bool = var_35_string == var_474_int; // 0xacb Eq
	if(var_475_bool == 0) goto Label_2780; // 0xacc JumpB
	var_476_string = ""; // 0xacd PushV
	var_476_string = "Neutral"; // 0xace MovS
	func_2187(var_36_bool, var_476_string); // 0xacf Call
	var_477_int = 7209; // 0xad1 PushI
	SetMessage(var_477_int); // 0xad2 TObjFunc
	ClearReplies(); // 0xad4 TObjFunc
	var_478_int = 7210; // 0xad6 PushI
	var_479_int = 7939; // 0xad7 PushI
	var_480_int = 7945; // 0xad8 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xad9 TObjFunc
	return 0; // 0xadb Return
	
Label_2780:
	var_481_int = 7939; // 0xadc PushI
	var_482_bool = var_35_string == var_481_int; // 0xadd Eq
	if(var_482_bool == 0) goto Label_2803; // 0xade JumpB
	var_483_string = ""; // 0xadf PushV
	var_483_string = "Neutral"; // 0xae0 MovS
	func_2187(var_36_bool, var_483_string); // 0xae1 Call
	var_484_int = 7204; // 0xae3 PushI
	SetMessage(var_484_int); // 0xae4 TObjFunc
	ClearReplies(); // 0xae6 TObjFunc
	var_485_int = 7205; // 0xae8 PushI
	var_486_int = 7941; // 0xae9 PushI
	var_487_int = 7940; // 0xaea PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xaeb TObjFunc
	var_488_int = 7211; // 0xaed PushI
	var_489_int = -1; // 0xaee PushI
	var_490_int = 7947; // 0xaef PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0xaf0 TObjFunc
	return 0; // 0xaf2 Return
	
Label_2803:
	var_491_int = 7941; // 0xaf3 PushI
	var_492_bool = var_35_string == var_491_int; // 0xaf4 Eq
	if(var_492_bool == 0) goto Label_2821; // 0xaf5 JumpB
	var_493_string = ""; // 0xaf6 PushV
	var_493_string = "Neutral"; // 0xaf7 MovS
	func_2187(var_36_bool, var_493_string); // 0xaf8 Call
	var_494_int = 7206; // 0xafa PushI
	SetMessage(var_494_int); // 0xafb TObjFunc
	ClearReplies(); // 0xafd TObjFunc
	var_495_int = 7207; // 0xaff PushI
	var_496_int = -1; // 0xb00 PushI
	var_497_int = 7942; // 0xb01 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0xb02 TObjFunc
	return 0; // 0xb04 Return
	
Label_2821:
	var_498_int = 7575; // 0xb05 PushI
	var_499_bool = var_35_string == var_498_int; // 0xb06 Eq
	if(var_499_bool == 0) goto Label_2844; // 0xb07 JumpB
	var_500_object = Obj(); var_501_object = Obj(); // 0xb08 PushV
	var_500_object = var_1_object; // 0xb09 MovT
	var_501_object = var_0_object; // 0xb0a MovT
	func_5155(); // 0xb0b Call
	var_504_string = ""; // 0xb0d PushV
	var_504_string = "Neutral"; // 0xb0e MovS
	func_2187(var_36_bool, var_504_string); // 0xb0f Call
	var_505_int = 6869; // 0xb11 PushI
	SetMessage(var_505_int); // 0xb12 TObjFunc
	ClearReplies(); // 0xb14 TObjFunc
	var_506_int = 7183; // 0xb16 PushI
	var_507_int = 7915; // 0xb17 PushI
	var_508_int = 7914; // 0xb18 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0xb19 TObjFunc
	return 0; // 0xb1b Return
	
Label_2844:
	var_509_int = 7915; // 0xb1c PushI
	var_510_bool = var_35_string == var_509_int; // 0xb1d Eq
	if(var_510_bool == 0) goto Label_2867; // 0xb1e JumpB
	var_511_string = ""; // 0xb1f PushV
	var_511_string = "Neutral"; // 0xb20 MovS
	func_2187(var_36_bool, var_511_string); // 0xb21 Call
	var_512_int = 7184; // 0xb23 PushI
	SetMessage(var_512_int); // 0xb24 TObjFunc
	ClearReplies(); // 0xb26 TObjFunc
	var_513_int = 7185; // 0xb28 PushI
	var_514_int = 7917; // 0xb29 PushI
	var_515_int = 7916; // 0xb2a PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xb2b TObjFunc
	var_516_int = 7189; // 0xb2d PushI
	var_517_int = 7921; // 0xb2e PushI
	var_518_int = 7920; // 0xb2f PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0xb30 TObjFunc
	return 0; // 0xb32 Return
	
Label_2867:
	var_519_int = 7921; // 0xb33 PushI
	var_520_bool = var_35_string == var_519_int; // 0xb34 Eq
	if(var_520_bool == 0) goto Label_2885; // 0xb35 JumpB
	var_521_string = ""; // 0xb36 PushV
	var_521_string = "Neutral"; // 0xb37 MovS
	func_2187(var_36_bool, var_521_string); // 0xb38 Call
	var_522_int = 7190; // 0xb3a PushI
	SetMessage(var_522_int); // 0xb3b TObjFunc
	ClearReplies(); // 0xb3d TObjFunc
	var_523_int = 7191; // 0xb3f PushI
	var_524_int = 7917; // 0xb40 PushI
	var_525_int = 7922; // 0xb41 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0xb42 TObjFunc
	return 0; // 0xb44 Return
	
Label_2885:
	var_526_int = 7917; // 0xb45 PushI
	var_527_bool = var_35_string == var_526_int; // 0xb46 Eq
	if(var_527_bool == 0) goto Label_2908; // 0xb47 JumpB
	var_528_string = ""; // 0xb48 PushV
	var_528_string = "Neutral"; // 0xb49 MovS
	func_2187(var_36_bool, var_528_string); // 0xb4a Call
	var_529_int = 7186; // 0xb4c PushI
	SetMessage(var_529_int); // 0xb4d TObjFunc
	ClearReplies(); // 0xb4f TObjFunc
	var_530_int = 7187; // 0xb51 PushI
	var_531_int = -1; // 0xb52 PushI
	var_532_int = 7918; // 0xb53 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0xb54 TObjFunc
	var_533_int = 7188; // 0xb56 PushI
	var_534_int = -1; // 0xb57 PushI
	var_535_int = 7919; // 0xb58 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0xb59 TObjFunc
	return 0; // 0xb5b Return
	
Label_2908:
	var_536_int = 7572; // 0xb5c PushI
	var_537_bool = var_35_string == var_536_int; // 0xb5d Eq
	if(var_537_bool == 0) goto Label_2931; // 0xb5e JumpB
	var_538_string = ""; // 0xb5f PushV
	var_538_string = "Neutral"; // 0xb60 MovS
	func_2187(var_36_bool, var_538_string); // 0xb61 Call
	var_539_int = 6866; // 0xb63 PushI
	SetMessage(var_539_int); // 0xb64 TObjFunc
	ClearReplies(); // 0xb66 TObjFunc
	var_540_int = 6867; // 0xb68 PushI
	var_541_int = 7894; // 0xb69 PushI
	var_542_int = 7573; // 0xb6a PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0xb6b TObjFunc
	var_543_int = 7164; // 0xb6d PushI
	var_544_int = 7901; // 0xb6e PushI
	var_545_int = 7893; // 0xb6f PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0xb70 TObjFunc
	return 0; // 0xb72 Return
	
Label_2931:
	var_546_int = 7901; // 0xb73 PushI
	var_547_bool = var_35_string == var_546_int; // 0xb74 Eq
	if(var_547_bool == 0) goto Label_2949; // 0xb75 JumpB
	var_548_string = ""; // 0xb76 PushV
	var_548_string = "Neutral"; // 0xb77 MovS
	func_2187(var_36_bool, var_548_string); // 0xb78 Call
	var_549_int = 7172; // 0xb7a PushI
	SetMessage(var_549_int); // 0xb7b TObjFunc
	ClearReplies(); // 0xb7d TObjFunc
	var_550_int = 7173; // 0xb7f PushI
	var_551_int = 7903; // 0xb80 PushI
	var_552_int = 7902; // 0xb81 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0xb82 TObjFunc
	return 0; // 0xb84 Return
	
Label_2949:
	var_553_int = 7903; // 0xb85 PushI
	var_554_bool = var_35_string == var_553_int; // 0xb86 Eq
	if(var_554_bool == 0) goto Label_2967; // 0xb87 JumpB
	var_555_string = ""; // 0xb88 PushV
	var_555_string = "Neutral"; // 0xb89 MovS
	func_2187(var_36_bool, var_555_string); // 0xb8a Call
	var_556_int = 7174; // 0xb8c PushI
	SetMessage(var_556_int); // 0xb8d TObjFunc
	ClearReplies(); // 0xb8f TObjFunc
	var_557_int = 7175; // 0xb91 PushI
	var_558_int = 7896; // 0xb92 PushI
	var_559_int = 7904; // 0xb93 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0xb94 TObjFunc
	return 0; // 0xb96 Return
	
Label_2967:
	var_560_int = 7894; // 0xb97 PushI
	var_561_bool = var_35_string == var_560_int; // 0xb98 Eq
	if(var_561_bool == 0) goto Label_2995; // 0xb99 JumpB
	var_562_object = Obj(); var_563_object = Obj(); // 0xb9a PushV
	var_562_object = var_1_object; // 0xb9b MovT
	var_563_object = var_0_object; // 0xb9c MovT
	func_5155(); // 0xb9d Call
	var_564_string = ""; // 0xb9f PushV
	var_564_string = "Neutral"; // 0xba0 MovS
	func_2187(var_36_bool, var_564_string); // 0xba1 Call
	var_565_int = 7165; // 0xba3 PushI
	SetMessage(var_565_int); // 0xba4 TObjFunc
	ClearReplies(); // 0xba6 TObjFunc
	var_566_int = 7166; // 0xba8 PushI
	var_567_int = 7896; // 0xba9 PushI
	var_568_int = 7895; // 0xbaa PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0xbab TObjFunc
	var_569_int = 7176; // 0xbad PushI
	var_570_int = 7907; // 0xbae PushI
	var_571_int = 7906; // 0xbaf PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0xbb0 TObjFunc
	return 0; // 0xbb2 Return
	
Label_2995:
	var_572_int = 7907; // 0xbb3 PushI
	var_573_bool = var_35_string == var_572_int; // 0xbb4 Eq
	if(var_573_bool == 0) goto Label_3018; // 0xbb5 JumpB
	var_574_string = ""; // 0xbb6 PushV
	var_574_string = "Neutral"; // 0xbb7 MovS
	func_2187(var_36_bool, var_574_string); // 0xbb8 Call
	var_575_int = 7177; // 0xbba PushI
	SetMessage(var_575_int); // 0xbbb TObjFunc
	ClearReplies(); // 0xbbd TObjFunc
	var_576_int = 7178; // 0xbbf PushI
	var_577_int = 7910; // 0xbc0 PushI
	var_578_int = 7908; // 0xbc1 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0xbc2 TObjFunc
	var_579_int = 7179; // 0xbc4 PushI
	var_580_int = -1; // 0xbc5 PushI
	var_581_int = 7909; // 0xbc6 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0xbc7 TObjFunc
	return 0; // 0xbc9 Return
	
Label_3018:
	var_582_int = 7910; // 0xbca PushI
	var_583_bool = var_35_string == var_582_int; // 0xbcb Eq
	if(var_583_bool == 0) goto Label_3041; // 0xbcc JumpB
	var_584_string = ""; // 0xbcd PushV
	var_584_string = "Neutral"; // 0xbce MovS
	func_2187(var_36_bool, var_584_string); // 0xbcf Call
	var_585_int = 7180; // 0xbd1 PushI
	SetMessage(var_585_int); // 0xbd2 TObjFunc
	ClearReplies(); // 0xbd4 TObjFunc
	var_586_int = 7181; // 0xbd6 PushI
	var_587_int = 7896; // 0xbd7 PushI
	var_588_int = 7911; // 0xbd8 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0xbd9 TObjFunc
	var_589_int = 7182; // 0xbdb PushI
	var_590_int = -1; // 0xbdc PushI
	var_591_int = 7913; // 0xbdd PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0xbde TObjFunc
	return 0; // 0xbe0 Return
	
Label_3041:
	var_592_int = 7896; // 0xbe1 PushI
	var_593_bool = var_35_string == var_592_int; // 0xbe2 Eq
	if(var_593_bool == 0) goto Label_3059; // 0xbe3 JumpB
	var_594_string = ""; // 0xbe4 PushV
	var_594_string = "Neutral"; // 0xbe5 MovS
	func_2187(var_36_bool, var_594_string); // 0xbe6 Call
	var_595_int = 7167; // 0xbe8 PushI
	SetMessage(var_595_int); // 0xbe9 TObjFunc
	ClearReplies(); // 0xbeb TObjFunc
	var_596_int = 7168; // 0xbed PushI
	var_597_int = 7898; // 0xbee PushI
	var_598_int = 7897; // 0xbef PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0xbf0 TObjFunc
	return 0; // 0xbf2 Return
	
Label_3059:
	var_599_int = 7898; // 0xbf3 PushI
	var_600_bool = var_35_string == var_599_int; // 0xbf4 Eq
	if(var_600_bool == 0) goto Label_3082; // 0xbf5 JumpB
	var_601_string = ""; // 0xbf6 PushV
	var_601_string = "Neutral"; // 0xbf7 MovS
	func_2187(var_36_bool, var_601_string); // 0xbf8 Call
	var_602_int = 7169; // 0xbfa PushI
	SetMessage(var_602_int); // 0xbfb TObjFunc
	ClearReplies(); // 0xbfd TObjFunc
	var_603_int = 7170; // 0xbff PushI
	var_604_int = -1; // 0xc00 PushI
	var_605_int = 7899; // 0xc01 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0xc02 TObjFunc
	var_606_int = 7171; // 0xc04 PushI
	var_607_int = -1; // 0xc05 PushI
	var_608_int = 7900; // 0xc06 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0xc07 TObjFunc
	return 0; // 0xc09 Return
	
Label_3082:
	var_3_string = 1; // 0xc0a TMovB
	var_609_bool = 0; // 0xc0b PushV
	func_5040(var_609_bool); // 0xc0c Call
	if(var_609_bool == 0) goto Label_3090; // 0xc0e JumpB
	lshStopAnimation(); // 0xc0f Func
	goto Label_3092; // 0xc11 Jump
	
Label_3092:
	return 0; // 0xc14 Return
	
Label_3090:
	StopAnimation(); // 0xc12 Func
	
Label_3094:
	return 0; // 0xc16 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xcc4 PushI
	if(var_37_int == 0) goto Label_3522; // 0xcc5 JumpB
	func_4939(); // 0xcc7 Call
	var_39_int = 10740; // 0xcc9 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xcca Eq
	if(var_40_bool == 0) goto Label_3286; // 0xccb JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xccc PushV
	var_41_object = var_1_object; // 0xccd MovT
	var_42_object = var_0_object; // 0xcce MovT
	func_5269(var_42_object); // 0xccf Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xcd1 PushV
	var_60_object = var_1_object; // 0xcd2 MovT
	var_61_object = var_0_object; // 0xcd3 MovT
	func_5071(); // 0xcd4 Call
	
Label_3286:
	var_64_int = 10752; // 0xcd6 PushI
	var_65_bool = var_35_string == var_64_int; // 0xcd7 Eq
	if(var_65_bool == 0) goto Label_3344; // 0xcd8 JumpB
	var_66_bool = 0; // 0xcd9 PushV
	var_66_bool = 0; // 0xcda MovB
	var_67_bool = 0; var_68_object = Obj(); // 0xcdb PushV
	var_68_object = var_1_object; // 0xcdc MovT
	func_5807(var_68_object); // 0xcdd Call
	if(var_67_bool == 0) goto Label_3303; // 0xcdf JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xce0 PushV
	var_76_object = var_1_object; // 0xce1 MovT
	func_5629(var_76_object); // 0xce2 Call
	var_81_bool = var_75_bool == 0; // 0xce4 Not
	if(var_81_bool == 0) goto Label_3303; // 0xce5 JumpB
	var_66_bool = 1; // 0xce6 MovB
	
Label_3303:
	if(var_66_bool == 0) goto Label_3329; // 0xce7 JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0xce8 PushV
	var_82_object = var_1_object; // 0xce9 MovT
	var_83_object = var_0_object; // 0xcea MovT
	func_5347(); // 0xceb Call
	var_86_string = ""; // 0xced PushV
	var_86_string = "Neutral"; // 0xcee MovS
	func_3251(var_36_bool, var_86_string); // 0xcef Call
	var_101_int = 9762; // 0xcf1 PushI
	SetMessage(var_101_int); // 0xcf2 TObjFunc
	ClearReplies(); // 0xcf4 TObjFunc
	var_102_int = 9763; // 0xcf6 PushI
	var_103_int = 10732; // 0xcf7 PushI
	var_104_int = 10753; // 0xcf8 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xcf9 TObjFunc
	var_105_int = 9770; // 0xcfb PushI
	var_106_int = 10754; // 0xcfc PushI
	var_107_int = 10761; // 0xcfd PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xcfe TObjFunc
	return 0; // 0xd00 Return
	
Label_3329:
	var_108_string = ""; // 0xd01 PushV
	var_108_string = "Neutral"; // 0xd02 MovS
	func_3251(var_36_bool, var_108_string); // 0xd03 Call
	var_109_int = 15310; // 0xd05 PushI
	SetMessage(var_109_int); // 0xd06 TObjFunc
	ClearReplies(); // 0xd08 TObjFunc
	var_110_int = 15311; // 0xd0a PushI
	var_111_int = -1; // 0xd0b PushI
	var_112_int = 16549; // 0xd0c PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xd0d TObjFunc
	return 0; // 0xd0f Return
	
Label_3344:
	var_113_int = 10754; // 0xd10 PushI
	var_114_bool = var_35_string == var_113_int; // 0xd11 Eq
	if(var_114_bool == 0) goto Label_3367; // 0xd12 JumpB
	var_115_string = ""; // 0xd13 PushV
	var_115_string = "Neutral"; // 0xd14 MovS
	func_3251(var_36_bool, var_115_string); // 0xd15 Call
	var_116_int = 9764; // 0xd17 PushI
	SetMessage(var_116_int); // 0xd18 TObjFunc
	ClearReplies(); // 0xd1a TObjFunc
	var_117_int = 9765; // 0xd1c PushI
	var_118_int = 10756; // 0xd1d PushI
	var_119_int = 10755; // 0xd1e PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xd1f TObjFunc
	var_120_int = 9769; // 0xd21 PushI
	var_121_int = 10756; // 0xd22 PushI
	var_122_int = 10759; // 0xd23 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xd24 TObjFunc
	return 0; // 0xd26 Return
	
Label_3367:
	var_123_int = 10756; // 0xd27 PushI
	var_124_bool = var_35_string == var_123_int; // 0xd28 Eq
	if(var_124_bool == 0) goto Label_3390; // 0xd29 JumpB
	var_125_string = ""; // 0xd2a PushV
	var_125_string = "Neutral"; // 0xd2b MovS
	func_3251(var_36_bool, var_125_string); // 0xd2c Call
	var_126_int = 9766; // 0xd2e PushI
	SetMessage(var_126_int); // 0xd2f TObjFunc
	ClearReplies(); // 0xd31 TObjFunc
	var_127_int = 9767; // 0xd33 PushI
	var_128_int = -1; // 0xd34 PushI
	var_129_int = 10757; // 0xd35 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xd36 TObjFunc
	var_130_int = 9768; // 0xd38 PushI
	var_131_int = -1; // 0xd39 PushI
	var_132_int = 10758; // 0xd3a PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xd3b TObjFunc
	return 0; // 0xd3d Return
	
Label_3390:
	var_133_int = 10732; // 0xd3e PushI
	var_134_bool = var_35_string == var_133_int; // 0xd3f Eq
	if(var_134_bool == 0) goto Label_3418; // 0xd40 JumpB
	var_135_string = ""; // 0xd41 PushV
	var_135_string = "Neutral"; // 0xd42 MovS
	func_3251(var_36_bool, var_135_string); // 0xd43 Call
	var_136_int = 9746; // 0xd45 PushI
	SetMessage(var_136_int); // 0xd46 TObjFunc
	ClearReplies(); // 0xd48 TObjFunc
	var_137_int = 9747; // 0xd4a PushI
	var_138_int = 10734; // 0xd4b PushI
	var_139_int = 10733; // 0xd4c PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xd4d TObjFunc
	var_140_int = 9757; // 0xd4f PushI
	var_141_int = 10734; // 0xd50 PushI
	var_142_int = 10744; // 0xd51 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xd52 TObjFunc
	var_143_int = 9758; // 0xd54 PushI
	var_144_int = 10747; // 0xd55 PushI
	var_145_int = 10746; // 0xd56 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xd57 TObjFunc
	return 0; // 0xd59 Return
	
Label_3418:
	var_146_int = 10747; // 0xd5a PushI
	var_147_bool = var_35_string == var_146_int; // 0xd5b Eq
	if(var_147_bool == 0) goto Label_3441; // 0xd5c JumpB
	var_148_string = ""; // 0xd5d PushV
	var_148_string = "Neutral"; // 0xd5e MovS
	func_3251(var_36_bool, var_148_string); // 0xd5f Call
	var_149_int = 9759; // 0xd61 PushI
	SetMessage(var_149_int); // 0xd62 TObjFunc
	ClearReplies(); // 0xd64 TObjFunc
	var_150_int = 9760; // 0xd66 PushI
	var_151_int = 10734; // 0xd67 PushI
	var_152_int = 10748; // 0xd68 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xd69 TObjFunc
	var_153_int = 9761; // 0xd6b PushI
	var_154_int = 10734; // 0xd6c PushI
	var_155_int = 10750; // 0xd6d PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0xd6e TObjFunc
	return 0; // 0xd70 Return
	
Label_3441:
	var_156_int = 10734; // 0xd71 PushI
	var_157_bool = var_35_string == var_156_int; // 0xd72 Eq
	if(var_157_bool == 0) goto Label_3464; // 0xd73 JumpB
	var_158_string = ""; // 0xd74 PushV
	var_158_string = "Neutral"; // 0xd75 MovS
	func_3251(var_36_bool, var_158_string); // 0xd76 Call
	var_159_int = 9748; // 0xd78 PushI
	SetMessage(var_159_int); // 0xd79 TObjFunc
	ClearReplies(); // 0xd7b TObjFunc
	var_160_int = 9749; // 0xd7d PushI
	var_161_int = 10736; // 0xd7e PushI
	var_162_int = 10735; // 0xd7f PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xd80 TObjFunc
	var_163_int = 9756; // 0xd82 PushI
	var_164_int = -1; // 0xd83 PushI
	var_165_int = 10743; // 0xd84 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0xd85 TObjFunc
	return 0; // 0xd87 Return
	
Label_3464:
	var_166_int = 10736; // 0xd88 PushI
	var_167_bool = var_35_string == var_166_int; // 0xd89 Eq
	if(var_167_bool == 0) goto Label_3487; // 0xd8a JumpB
	var_168_string = ""; // 0xd8b PushV
	var_168_string = "Neutral"; // 0xd8c MovS
	func_3251(var_36_bool, var_168_string); // 0xd8d Call
	var_169_int = 9750; // 0xd8f PushI
	SetMessage(var_169_int); // 0xd90 TObjFunc
	ClearReplies(); // 0xd92 TObjFunc
	var_170_int = 9751; // 0xd94 PushI
	var_171_int = 10738; // 0xd95 PushI
	var_172_int = 10737; // 0xd96 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xd97 TObjFunc
	var_173_int = 9755; // 0xd99 PushI
	var_174_int = 10738; // 0xd9a PushI
	var_175_int = 10741; // 0xd9b PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xd9c TObjFunc
	return 0; // 0xd9e Return
	
Label_3487:
	var_176_int = 10738; // 0xd9f PushI
	var_177_bool = var_35_string == var_176_int; // 0xda0 Eq
	if(var_177_bool == 0) goto Label_3510; // 0xda1 JumpB
	var_178_string = ""; // 0xda2 PushV
	var_178_string = "Neutral"; // 0xda3 MovS
	func_3251(var_36_bool, var_178_string); // 0xda4 Call
	var_179_int = 9752; // 0xda6 PushI
	SetMessage(var_179_int); // 0xda7 TObjFunc
	ClearReplies(); // 0xda9 TObjFunc
	var_180_int = 9753; // 0xdab PushI
	var_181_int = -1; // 0xdac PushI
	var_182_int = 10739; // 0xdad PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xdae TObjFunc
	var_183_int = 9754; // 0xdb0 PushI
	var_184_int = -1; // 0xdb1 PushI
	var_185_int = 10740; // 0xdb2 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xdb3 TObjFunc
	return 0; // 0xdb5 Return
	
Label_3510:
	var_3_string = 1; // 0xdb6 TMovB
	var_186_bool = 0; // 0xdb7 PushV
	func_5040(var_186_bool); // 0xdb8 Call
	if(var_186_bool == 0) goto Label_3518; // 0xdba JumpB
	lshStopAnimation(); // 0xdbb Func
	goto Label_3520; // 0xdbd Jump
	
Label_3520:
	return 0; // 0xdc0 Return
	
Label_3518:
	StopAnimation(); // 0xdbe Func
	
Label_3522:
	return 0; // 0xdc2 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xe52 PushI
	if(var_37_int == 0) goto Label_3891; // 0xe53 JumpB
	func_4939(); // 0xe55 Call
	var_39_int = 14987; // 0xe57 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xe58 Eq
	if(var_40_bool == 0) goto Label_3679; // 0xe59 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xe5a PushV
	var_41_object = var_1_object; // 0xe5b MovT
	var_42_object = var_0_object; // 0xe5c MovT
	func_5292(); // 0xe5d Call
	
Label_3679:
	var_45_int = 14986; // 0xe5f PushI
	var_46_bool = var_35_string == var_45_int; // 0xe60 Eq
	if(var_46_bool == 0) goto Label_3707; // 0xe61 JumpB
	var_47_string = ""; // 0xe62 PushV
	var_47_string = "Neutral"; // 0xe63 MovS
	func_3649(var_36_bool, var_47_string); // 0xe64 Call
	var_62_int = 13720; // 0xe66 PushI
	SetMessage(var_62_int); // 0xe67 TObjFunc
	ClearReplies(); // 0xe69 TObjFunc
	var_63_bool = 0; var_64_object = Obj(); // 0xe6b PushV
	var_64_object = var_1_object; // 0xe6c MovT
	func_5675(var_64_object); // 0xe6d Call
	if(var_63_bool == 0) goto Label_3701; // 0xe6f JumpB
	var_71_int = 13721; // 0xe70 PushI
	var_72_int = 13787; // 0xe71 PushI
	var_73_int = 14987; // 0xe72 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xe73 TObjFunc
	
Label_3701:
	var_74_int = 13722; // 0xe75 PushI
	var_75_int = -1; // 0xe76 PushI
	var_76_int = 14988; // 0xe77 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xe78 TObjFunc
	return 0; // 0xe7a Return
	
Label_3707:
	var_77_int = 13787; // 0xe7b PushI
	var_78_bool = var_35_string == var_77_int; // 0xe7c Eq
	if(var_78_bool == 0) goto Label_3746; // 0xe7d JumpB
	var_79_string = ""; // 0xe7e PushV
	var_79_string = "Neutral"; // 0xe7f MovS
	func_3649(var_36_bool, var_79_string); // 0xe80 Call
	var_80_int = 12613; // 0xe82 PushI
	SetMessage(var_80_int); // 0xe83 TObjFunc
	ClearReplies(); // 0xe85 TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0xe87 PushV
	var_82_object = var_1_object; // 0xe88 MovT
	func_5663(var_82_object); // 0xe89 Call
	if(var_81_bool == 0) goto Label_3729; // 0xe8b JumpB
	var_87_int = 12614; // 0xe8c PushI
	var_88_int = 13789; // 0xe8d PushI
	var_89_int = 13788; // 0xe8e PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xe8f TObjFunc
	
Label_3729:
	var_90_int = 12632; // 0xe91 PushI
	var_91_int = 13812; // 0xe92 PushI
	var_92_int = 13811; // 0xe93 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xe94 TObjFunc
	var_93_bool = 0; var_94_object = Obj(); // 0xe96 PushV
	var_94_object = var_1_object; // 0xe97 MovT
	func_5663(var_94_object); // 0xe98 Call
	var_95_bool = var_93_bool == 0; // 0xe9a Not
	if(var_95_bool == 0) goto Label_3745; // 0xe9b JumpB
	var_96_int = 12631; // 0xe9c PushI
	var_97_int = 13789; // 0xe9d PushI
	var_98_int = 13809; // 0xe9e PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xe9f TObjFunc
	
Label_3745:
	return 0; // 0xea1 Return
	
Label_3746:
	var_99_int = 13812; // 0xea2 PushI
	var_100_bool = var_35_string == var_99_int; // 0xea3 Eq
	if(var_100_bool == 0) goto Label_3764; // 0xea4 JumpB
	var_101_string = ""; // 0xea5 PushV
	var_101_string = "Neutral"; // 0xea6 MovS
	func_3649(var_36_bool, var_101_string); // 0xea7 Call
	var_102_int = 12633; // 0xea9 PushI
	SetMessage(var_102_int); // 0xeaa TObjFunc
	ClearReplies(); // 0xeac TObjFunc
	var_103_int = 12634; // 0xeae PushI
	var_104_int = 13791; // 0xeaf PushI
	var_105_int = 13813; // 0xeb0 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xeb1 TObjFunc
	return 0; // 0xeb3 Return
	
Label_3764:
	var_106_int = 13789; // 0xeb4 PushI
	var_107_bool = var_35_string == var_106_int; // 0xeb5 Eq
	if(var_107_bool == 0) goto Label_3787; // 0xeb6 JumpB
	var_108_string = ""; // 0xeb7 PushV
	var_108_string = "Neutral"; // 0xeb8 MovS
	func_3649(var_36_bool, var_108_string); // 0xeb9 Call
	var_109_int = 12615; // 0xebb PushI
	SetMessage(var_109_int); // 0xebc TObjFunc
	ClearReplies(); // 0xebe TObjFunc
	var_110_int = 12616; // 0xec0 PushI
	var_111_int = 13791; // 0xec1 PushI
	var_112_int = 13790; // 0xec2 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xec3 TObjFunc
	var_113_int = 12623; // 0xec5 PushI
	var_114_int = 13800; // 0xec6 PushI
	var_115_int = 13799; // 0xec7 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xec8 TObjFunc
	return 0; // 0xeca Return
	
Label_3787:
	var_116_int = 13800; // 0xecb PushI
	var_117_bool = var_35_string == var_116_int; // 0xecc Eq
	if(var_117_bool == 0) goto Label_3810; // 0xecd JumpB
	var_118_string = ""; // 0xece PushV
	var_118_string = "Neutral"; // 0xecf MovS
	func_3649(var_36_bool, var_118_string); // 0xed0 Call
	var_119_int = 12624; // 0xed2 PushI
	SetMessage(var_119_int); // 0xed3 TObjFunc
	ClearReplies(); // 0xed5 TObjFunc
	var_120_int = 12625; // 0xed7 PushI
	var_121_int = 13802; // 0xed8 PushI
	var_122_int = 13801; // 0xed9 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xeda TObjFunc
	var_123_int = 12629; // 0xedc PushI
	var_124_int = 13802; // 0xedd PushI
	var_125_int = 13805; // 0xede PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xedf TObjFunc
	return 0; // 0xee1 Return
	
Label_3810:
	var_126_int = 13802; // 0xee2 PushI
	var_127_bool = var_35_string == var_126_int; // 0xee3 Eq
	if(var_127_bool == 0) goto Label_3833; // 0xee4 JumpB
	var_128_string = ""; // 0xee5 PushV
	var_128_string = "Neutral"; // 0xee6 MovS
	func_3649(var_36_bool, var_128_string); // 0xee7 Call
	var_129_int = 12626; // 0xee9 PushI
	SetMessage(var_129_int); // 0xeea TObjFunc
	ClearReplies(); // 0xeec TObjFunc
	var_130_int = 12627; // 0xeee PushI
	var_131_int = -1; // 0xeef PushI
	var_132_int = 13803; // 0xef0 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xef1 TObjFunc
	var_133_int = 12628; // 0xef3 PushI
	var_134_int = -1; // 0xef4 PushI
	var_135_int = 13804; // 0xef5 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xef6 TObjFunc
	return 0; // 0xef8 Return
	
Label_3833:
	var_136_int = 13791; // 0xef9 PushI
	var_137_bool = var_35_string == var_136_int; // 0xefa Eq
	if(var_137_bool == 0) goto Label_3856; // 0xefb JumpB
	var_138_string = ""; // 0xefc PushV
	var_138_string = "Neutral"; // 0xefd MovS
	func_3649(var_36_bool, var_138_string); // 0xefe Call
	var_139_int = 12617; // 0xf00 PushI
	SetMessage(var_139_int); // 0xf01 TObjFunc
	ClearReplies(); // 0xf03 TObjFunc
	var_140_int = 12618; // 0xf05 PushI
	var_141_int = 13793; // 0xf06 PushI
	var_142_int = 13792; // 0xf07 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xf08 TObjFunc
	var_143_int = 12622; // 0xf0a PushI
	var_144_int = 13802; // 0xf0b PushI
	var_145_int = 13797; // 0xf0c PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xf0d TObjFunc
	return 0; // 0xf0f Return
	
Label_3856:
	var_146_int = 13793; // 0xf10 PushI
	var_147_bool = var_35_string == var_146_int; // 0xf11 Eq
	if(var_147_bool == 0) goto Label_3879; // 0xf12 JumpB
	var_148_string = ""; // 0xf13 PushV
	var_148_string = "Neutral"; // 0xf14 MovS
	func_3649(var_36_bool, var_148_string); // 0xf15 Call
	var_149_int = 12619; // 0xf17 PushI
	SetMessage(var_149_int); // 0xf18 TObjFunc
	ClearReplies(); // 0xf1a TObjFunc
	var_150_int = 12621; // 0xf1c PushI
	var_151_int = 13802; // 0xf1d PushI
	var_152_int = 13795; // 0xf1e PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xf1f TObjFunc
	var_153_int = 12620; // 0xf21 PushI
	var_154_int = -1; // 0xf22 PushI
	var_155_int = 13794; // 0xf23 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0xf24 TObjFunc
	return 0; // 0xf26 Return
	
Label_3879:
	var_3_string = 1; // 0xf27 TMovB
	var_156_bool = 0; // 0xf28 PushV
	func_5040(var_156_bool); // 0xf29 Call
	if(var_156_bool == 0) goto Label_3887; // 0xf2b JumpB
	lshStopAnimation(); // 0xf2c Func
	goto Label_3889; // 0xf2e Jump
	
Label_3889:
	return 0; // 0xf31 Return
	
Label_3887:
	StopAnimation(); // 0xf2f Func
	
Label_3891:
	return 0; // 0xf33 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xfe6 PushI
	if(var_37_int == 0) goto Label_4186; // 0xfe7 JumpB
	func_4939(); // 0xfe9 Call
	var_39_int = 14165; // 0xfeb PushI
	var_40_bool = var_35_string == var_39_int; // 0xfec Eq
	if(var_40_bool == 0) goto Label_4138; // 0xfed JumpB
	var_41_bool = 0; // 0xfee PushV
	var_41_bool = 0; // 0xfef MovB
	var_42_bool = 0; // 0xff0 PushV
	var_42_bool = 0; // 0xff1 MovB
	var_43_bool = 0; var_44_object = Obj(); // 0xff2 PushV
	var_44_object = var_1_object; // 0xff3 MovT
	func_5819(var_44_object); // 0xff4 Call
	var_51_bool = var_43_bool == 0; // 0xff6 Not
	if(var_51_bool == 0) goto Label_4095; // 0xff7 JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0xff8 PushV
	var_53_object = var_1_object; // 0xff9 MovT
	func_5831(var_53_object); // 0xffa Call
	var_58_bool = var_52_bool == 0; // 0xffc Not
	if(var_58_bool == 0) goto Label_4095; // 0xffd JumpB
	var_42_bool = 1; // 0xffe MovB
	
Label_4095:
	if(var_42_bool == 0) goto Label_4102; // 0xfff JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x1000 PushV
	var_60_object = var_1_object; // 0x1001 MovT
	func_5843(var_60_object); // 0x1002 Call
	if(var_59_bool == 0) goto Label_4102; // 0x1004 JumpB
	var_41_bool = 1; // 0x1005 MovB
	
Label_4102:
	if(var_41_bool == 0) goto Label_4123; // 0x1006 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x1007 PushV
	var_65_object = var_1_object; // 0x1008 MovT
	var_66_object = var_0_object; // 0x1009 MovT
	func_5353(); // 0x100a Call
	var_69_string = ""; // 0x100c PushV
	var_69_string = "Neutral"; // 0x100d MovS
	func_4053(var_36_bool, var_69_string); // 0x100e Call
	var_84_int = 12960; // 0x1010 PushI
	SetMessage(var_84_int); // 0x1011 TObjFunc
	ClearReplies(); // 0x1013 TObjFunc
	var_85_int = 12961; // 0x1015 PushI
	var_86_int = 14167; // 0x1016 PushI
	var_87_int = 14166; // 0x1017 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x1018 TObjFunc
	return 0; // 0x101a Return
	
Label_4123:
	var_88_string = ""; // 0x101b PushV
	var_88_string = "Neutral"; // 0x101c MovS
	func_4053(var_36_bool, var_88_string); // 0x101d Call
	var_89_int = 12966; // 0x101f PushI
	SetMessage(var_89_int); // 0x1020 TObjFunc
	ClearReplies(); // 0x1022 TObjFunc
	var_90_int = 12967; // 0x1024 PushI
	var_91_int = -1; // 0x1025 PushI
	var_92_int = 14172; // 0x1026 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x1027 TObjFunc
	return 0; // 0x1029 Return
	
Label_4138:
	var_93_int = 14167; // 0x102a PushI
	var_94_bool = var_35_string == var_93_int; // 0x102b Eq
	if(var_94_bool == 0) goto Label_4156; // 0x102c JumpB
	var_95_string = ""; // 0x102d PushV
	var_95_string = "Neutral"; // 0x102e MovS
	func_4053(var_36_bool, var_95_string); // 0x102f Call
	var_96_int = 12962; // 0x1031 PushI
	SetMessage(var_96_int); // 0x1032 TObjFunc
	ClearReplies(); // 0x1034 TObjFunc
	var_97_int = 12963; // 0x1036 PushI
	var_98_int = 14169; // 0x1037 PushI
	var_99_int = 14168; // 0x1038 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1039 TObjFunc
	return 0; // 0x103b Return
	
Label_4156:
	var_100_int = 14169; // 0x103c PushI
	var_101_bool = var_35_string == var_100_int; // 0x103d Eq
	if(var_101_bool == 0) goto Label_4174; // 0x103e JumpB
	var_102_string = ""; // 0x103f PushV
	var_102_string = "Neutral"; // 0x1040 MovS
	func_4053(var_36_bool, var_102_string); // 0x1041 Call
	var_103_int = 12964; // 0x1043 PushI
	SetMessage(var_103_int); // 0x1044 TObjFunc
	ClearReplies(); // 0x1046 TObjFunc
	var_104_int = 12965; // 0x1048 PushI
	var_105_int = -1; // 0x1049 PushI
	var_106_int = 14170; // 0x104a PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x104b TObjFunc
	return 0; // 0x104d Return
	
Label_4174:
	var_3_string = 1; // 0x104e TMovB
	var_107_bool = 0; // 0x104f PushV
	func_5040(var_107_bool); // 0x1050 Call
	if(var_107_bool == 0) goto Label_4182; // 0x1052 JumpB
	lshStopAnimation(); // 0x1053 Func
	goto Label_4184; // 0x1055 Jump
	
Label_4184:
	return 0; // 0x1058 Return
	
Label_4182:
	StopAnimation(); // 0x1056 Func
	
Label_4186:
	return 0; // 0x105a Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0x111f PushI
	if(var_37_int == 0) goto Label_4836; // 0x1120 JumpB
	func_4939(); // 0x1122 Call
	var_39_int = 15743; // 0x1124 PushI
	var_40_bool = var_36_int == var_39_int; // 0x1125 Eq
	if(var_40_bool == 0) goto Label_4396; // 0x1126 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x1127 PushV
	var_41_object = var_1_object; // 0x1128 MovT
	var_42_object = var_0_object; // 0x1129 MovT
	func_5304(); // 0x112a Call
	
Label_4396:
	var_70_int = 15478; // 0x112c PushI
	var_71_bool = var_36_int == var_70_int; // 0x112d Eq
	if(var_71_bool == 0) goto Label_4404; // 0x112e JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x112f PushV
	var_72_object = var_1_object; // 0x1130 MovT
	var_73_object = var_0_object; // 0x1131 MovT
	func_5313(); // 0x1132 Call
	
Label_4404:
	var_76_int = 15490; // 0x1134 PushI
	var_77_bool = var_36_int == var_76_int; // 0x1135 Eq
	if(var_77_bool == 0) goto Label_4412; // 0x1136 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1137 PushV
	var_78_object = var_1_object; // 0x1138 MovT
	var_79_object = var_0_object; // 0x1139 MovT
	func_5319(); // 0x113a Call
	
Label_4412:
	var_82_int = 15459; // 0x113c PushI
	var_83_bool = var_35_int == var_82_int; // 0x113d Eq
	if(var_83_bool == 0) goto Label_4493; // 0x113e JumpB
	var_84_bool = 0; // 0x113f PushV
	var_84_bool = 0; // 0x1140 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0x1141 PushV
	var_86_object = var_1_object; // 0x1142 MovT
	func_5723(var_86_object); // 0x1143 Call
	if(var_85_bool == 0) goto Label_4428; // 0x1145 JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x1146 PushV
	var_94_object = var_1_object; // 0x1147 MovT
	func_5735(var_94_object); // 0x1148 Call
	if(var_93_bool == 0) goto Label_4428; // 0x114a JumpB
	var_84_bool = 1; // 0x114b MovB
	
Label_4428:
	if(var_84_bool == 0) goto Label_4449; // 0x114c JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x114d PushV
	var_99_object = var_1_object; // 0x114e MovT
	var_100_object = var_0_object; // 0x114f MovT
	func_5298(); // 0x1150 Call
	var_103_string = ""; // 0x1152 PushV
	var_103_string = "Neutral"; // 0x1153 MovS
	func_4366(var_36_int, var_103_string); // 0x1154 Call
	var_118_int = 14241; // 0x1156 PushI
	SetMessage(var_118_int); // 0x1157 TObjFunc
	ClearReplies(); // 0x1159 TObjFunc
	var_119_int = 14242; // 0x115b PushI
	var_120_int = 15461; // 0x115c PushI
	var_121_int = 15460; // 0x115d PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x115e TObjFunc
	return 0; // 0x1160 Return
	
Label_4449:
	var_122_string = ""; // 0x1161 PushV
	var_122_string = "Neutral"; // 0x1162 MovS
	func_4366(var_36_int, var_122_string); // 0x1163 Call
	var_123_int = 14258; // 0x1165 PushI
	SetMessage(var_123_int); // 0x1166 TObjFunc
	ClearReplies(); // 0x1168 TObjFunc
	var_124_bool = 0; // 0x116a PushV
	var_124_bool = 0; // 0x116b MovB
	var_125_bool = 0; var_126_object = Obj(); // 0x116c PushV
	var_126_object = var_1_object; // 0x116d MovT
	func_5747(var_126_object); // 0x116e Call
	if(var_125_bool == 0) goto Label_4471; // 0x1170 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x1171 PushV
	var_132_object = var_1_object; // 0x1172 MovT
	func_5759(var_132_object); // 0x1173 Call
	if(var_131_bool == 0) goto Label_4471; // 0x1175 JumpB
	var_124_bool = 1; // 0x1176 MovB
	
Label_4471:
	if(var_124_bool == 0) goto Label_4477; // 0x1177 JumpB
	var_137_int = 14259; // 0x1178 PushI
	var_138_int = 15479; // 0x1179 PushI
	var_139_int = 15478; // 0x117a PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x117b TObjFunc
	
Label_4477:
	var_140_bool = 0; var_141_object = Obj(); // 0x117d PushV
	var_141_object = var_1_object; // 0x117e MovT
	func_5771(var_141_object); // 0x117f Call
	if(var_140_bool == 0) goto Label_4487; // 0x1181 JumpB
	var_146_int = 14271; // 0x1182 PushI
	var_147_int = 15491; // 0x1183 PushI
	var_148_int = 15490; // 0x1184 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1185 TObjFunc
	
Label_4487:
	var_149_int = 14278; // 0x1187 PushI
	var_150_int = -1; // 0x1188 PushI
	var_151_int = 15498; // 0x1189 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x118a TObjFunc
	return 0; // 0x118c Return
	
Label_4493:
	var_152_int = 15491; // 0x118d PushI
	var_153_bool = var_35_int == var_152_int; // 0x118e Eq
	if(var_153_bool == 0) goto Label_4511; // 0x118f JumpB
	var_154_string = ""; // 0x1190 PushV
	var_154_string = "Neutral"; // 0x1191 MovS
	func_4366(var_36_int, var_154_string); // 0x1192 Call
	var_155_int = 14272; // 0x1194 PushI
	SetMessage(var_155_int); // 0x1195 TObjFunc
	ClearReplies(); // 0x1197 TObjFunc
	var_156_int = 14273; // 0x1199 PushI
	var_157_int = 15493; // 0x119a PushI
	var_158_int = 15492; // 0x119b PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x119c TObjFunc
	return 0; // 0x119e Return
	
Label_4511:
	var_159_int = 15493; // 0x119f PushI
	var_160_bool = var_35_int == var_159_int; // 0x11a0 Eq
	if(var_160_bool == 0) goto Label_4529; // 0x11a1 JumpB
	var_161_string = ""; // 0x11a2 PushV
	var_161_string = "Neutral"; // 0x11a3 MovS
	func_4366(var_36_int, var_161_string); // 0x11a4 Call
	var_162_int = 14274; // 0x11a6 PushI
	SetMessage(var_162_int); // 0x11a7 TObjFunc
	ClearReplies(); // 0x11a9 TObjFunc
	var_163_int = 14275; // 0x11ab PushI
	var_164_int = 15495; // 0x11ac PushI
	var_165_int = 15494; // 0x11ad PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x11ae TObjFunc
	return 0; // 0x11b0 Return
	
Label_4529:
	var_166_int = 15495; // 0x11b1 PushI
	var_167_bool = var_35_int == var_166_int; // 0x11b2 Eq
	if(var_167_bool == 0) goto Label_4547; // 0x11b3 JumpB
	var_168_string = ""; // 0x11b4 PushV
	var_168_string = "Neutral"; // 0x11b5 MovS
	func_4366(var_36_int, var_168_string); // 0x11b6 Call
	var_169_int = 14276; // 0x11b8 PushI
	SetMessage(var_169_int); // 0x11b9 TObjFunc
	ClearReplies(); // 0x11bb TObjFunc
	var_170_int = 14277; // 0x11bd PushI
	var_171_int = -1; // 0x11be PushI
	var_172_int = 15496; // 0x11bf PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x11c0 TObjFunc
	return 0; // 0x11c2 Return
	
Label_4547:
	var_173_int = 15479; // 0x11c3 PushI
	var_174_bool = var_35_int == var_173_int; // 0x11c4 Eq
	if(var_174_bool == 0) goto Label_4565; // 0x11c5 JumpB
	var_175_string = ""; // 0x11c6 PushV
	var_175_string = "Neutral"; // 0x11c7 MovS
	func_4366(var_36_int, var_175_string); // 0x11c8 Call
	var_176_int = 14260; // 0x11ca PushI
	SetMessage(var_176_int); // 0x11cb TObjFunc
	ClearReplies(); // 0x11cd TObjFunc
	var_177_int = 14261; // 0x11cf PushI
	var_178_int = 15481; // 0x11d0 PushI
	var_179_int = 15480; // 0x11d1 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x11d2 TObjFunc
	return 0; // 0x11d4 Return
	
Label_4565:
	var_180_int = 15481; // 0x11d5 PushI
	var_181_bool = var_35_int == var_180_int; // 0x11d6 Eq
	if(var_181_bool == 0) goto Label_4588; // 0x11d7 JumpB
	var_182_string = ""; // 0x11d8 PushV
	var_182_string = "Neutral"; // 0x11d9 MovS
	func_4366(var_36_int, var_182_string); // 0x11da Call
	var_183_int = 14262; // 0x11dc PushI
	SetMessage(var_183_int); // 0x11dd TObjFunc
	ClearReplies(); // 0x11df TObjFunc
	var_184_int = 14263; // 0x11e1 PushI
	var_185_int = 15483; // 0x11e2 PushI
	var_186_int = 15482; // 0x11e3 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x11e4 TObjFunc
	var_187_int = 14268; // 0x11e6 PushI
	var_188_int = 15488; // 0x11e7 PushI
	var_189_int = 15487; // 0x11e8 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x11e9 TObjFunc
	return 0; // 0x11eb Return
	
Label_4588:
	var_190_int = 15488; // 0x11ec PushI
	var_191_bool = var_35_int == var_190_int; // 0x11ed Eq
	if(var_191_bool == 0) goto Label_4606; // 0x11ee JumpB
	var_192_string = ""; // 0x11ef PushV
	var_192_string = "Neutral"; // 0x11f0 MovS
	func_4366(var_36_int, var_192_string); // 0x11f1 Call
	var_193_int = 14269; // 0x11f3 PushI
	SetMessage(var_193_int); // 0x11f4 TObjFunc
	ClearReplies(); // 0x11f6 TObjFunc
	var_194_int = 14270; // 0x11f8 PushI
	var_195_int = -1; // 0x11f9 PushI
	var_196_int = 15489; // 0x11fa PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x11fb TObjFunc
	return 0; // 0x11fd Return
	
Label_4606:
	var_197_int = 15483; // 0x11fe PushI
	var_198_bool = var_35_int == var_197_int; // 0x11ff Eq
	if(var_198_bool == 0) goto Label_4624; // 0x1200 JumpB
	var_199_string = ""; // 0x1201 PushV
	var_199_string = "Neutral"; // 0x1202 MovS
	func_4366(var_36_int, var_199_string); // 0x1203 Call
	var_200_int = 14264; // 0x1205 PushI
	SetMessage(var_200_int); // 0x1206 TObjFunc
	ClearReplies(); // 0x1208 TObjFunc
	var_201_int = 14265; // 0x120a PushI
	var_202_int = 15485; // 0x120b PushI
	var_203_int = 15484; // 0x120c PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x120d TObjFunc
	return 0; // 0x120f Return
	
Label_4624:
	var_204_int = 15485; // 0x1210 PushI
	var_205_bool = var_35_int == var_204_int; // 0x1211 Eq
	if(var_205_bool == 0) goto Label_4642; // 0x1212 JumpB
	var_206_string = ""; // 0x1213 PushV
	var_206_string = "Neutral"; // 0x1214 MovS
	func_4366(var_36_int, var_206_string); // 0x1215 Call
	var_207_int = 14266; // 0x1217 PushI
	SetMessage(var_207_int); // 0x1218 TObjFunc
	ClearReplies(); // 0x121a TObjFunc
	var_208_int = 14267; // 0x121c PushI
	var_209_int = -1; // 0x121d PushI
	var_210_int = 15486; // 0x121e PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x121f TObjFunc
	return 0; // 0x1221 Return
	
Label_4642:
	var_211_int = 15461; // 0x1222 PushI
	var_212_bool = var_35_int == var_211_int; // 0x1223 Eq
	if(var_212_bool == 0) goto Label_4660; // 0x1224 JumpB
	var_213_string = ""; // 0x1225 PushV
	var_213_string = "Neutral"; // 0x1226 MovS
	func_4366(var_36_int, var_213_string); // 0x1227 Call
	var_214_int = 14243; // 0x1229 PushI
	SetMessage(var_214_int); // 0x122a TObjFunc
	ClearReplies(); // 0x122c TObjFunc
	var_215_int = 14244; // 0x122e PushI
	var_216_int = 15463; // 0x122f PushI
	var_217_int = 15462; // 0x1230 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1231 TObjFunc
	return 0; // 0x1233 Return
	
Label_4660:
	var_218_int = 15463; // 0x1234 PushI
	var_219_bool = var_35_int == var_218_int; // 0x1235 Eq
	if(var_219_bool == 0) goto Label_4683; // 0x1236 JumpB
	var_220_string = ""; // 0x1237 PushV
	var_220_string = "Neutral"; // 0x1238 MovS
	func_4366(var_36_int, var_220_string); // 0x1239 Call
	var_221_int = 14245; // 0x123b PushI
	SetMessage(var_221_int); // 0x123c TObjFunc
	ClearReplies(); // 0x123e TObjFunc
	var_222_int = 14246; // 0x1240 PushI
	var_223_int = 15465; // 0x1241 PushI
	var_224_int = 15464; // 0x1242 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1243 TObjFunc
	var_225_int = 14257; // 0x1245 PushI
	var_226_int = 15465; // 0x1246 PushI
	var_227_int = 15475; // 0x1247 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1248 TObjFunc
	return 0; // 0x124a Return
	
Label_4683:
	var_228_int = 15465; // 0x124b PushI
	var_229_bool = var_35_int == var_228_int; // 0x124c Eq
	if(var_229_bool == 0) goto Label_4701; // 0x124d JumpB
	var_230_string = ""; // 0x124e PushV
	var_230_string = "Neutral"; // 0x124f MovS
	func_4366(var_36_int, var_230_string); // 0x1250 Call
	var_231_int = 14247; // 0x1252 PushI
	SetMessage(var_231_int); // 0x1253 TObjFunc
	ClearReplies(); // 0x1255 TObjFunc
	var_232_int = 14248; // 0x1257 PushI
	var_233_int = 15467; // 0x1258 PushI
	var_234_int = 15466; // 0x1259 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x125a TObjFunc
	return 0; // 0x125c Return
	
Label_4701:
	var_235_int = 15467; // 0x125d PushI
	var_236_bool = var_35_int == var_235_int; // 0x125e Eq
	if(var_236_bool == 0) goto Label_4724; // 0x125f JumpB
	var_237_string = ""; // 0x1260 PushV
	var_237_string = "Neutral"; // 0x1261 MovS
	func_4366(var_36_int, var_237_string); // 0x1262 Call
	var_238_int = 14249; // 0x1264 PushI
	SetMessage(var_238_int); // 0x1265 TObjFunc
	ClearReplies(); // 0x1267 TObjFunc
	var_239_int = 14250; // 0x1269 PushI
	var_240_int = 15469; // 0x126a PushI
	var_241_int = 15468; // 0x126b PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x126c TObjFunc
	var_242_int = 14508; // 0x126e PushI
	var_243_int = 15742; // 0x126f PushI
	var_244_int = 15746; // 0x1270 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x1271 TObjFunc
	return 0; // 0x1273 Return
	
Label_4724:
	var_245_int = 15469; // 0x1274 PushI
	var_246_bool = var_35_int == var_245_int; // 0x1275 Eq
	if(var_246_bool == 0) goto Label_4747; // 0x1276 JumpB
	var_247_string = ""; // 0x1277 PushV
	var_247_string = "Neutral"; // 0x1278 MovS
	func_4366(var_36_int, var_247_string); // 0x1279 Call
	var_248_int = 14251; // 0x127b PushI
	SetMessage(var_248_int); // 0x127c TObjFunc
	ClearReplies(); // 0x127e TObjFunc
	var_249_int = 14252; // 0x1280 PushI
	var_250_int = 15471; // 0x1281 PushI
	var_251_int = 15470; // 0x1282 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1283 TObjFunc
	var_252_int = 14506; // 0x1285 PushI
	var_253_int = 15748; // 0x1286 PushI
	var_254_int = 15744; // 0x1287 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x1288 TObjFunc
	return 0; // 0x128a Return
	
Label_4747:
	var_255_int = 15748; // 0x128b PushI
	var_256_bool = var_35_int == var_255_int; // 0x128c Eq
	if(var_256_bool == 0) goto Label_4770; // 0x128d JumpB
	var_257_string = ""; // 0x128e PushV
	var_257_string = "Neutral"; // 0x128f MovS
	func_4366(var_36_int, var_257_string); // 0x1290 Call
	var_258_int = 14509; // 0x1292 PushI
	SetMessage(var_258_int); // 0x1293 TObjFunc
	ClearReplies(); // 0x1295 TObjFunc
	var_259_int = 14511; // 0x1297 PushI
	var_260_int = 15751; // 0x1298 PushI
	var_261_int = 15750; // 0x1299 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x129a TObjFunc
	var_262_int = 14510; // 0x129c PushI
	var_263_int = -1; // 0x129d PushI
	var_264_int = 15749; // 0x129e PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x129f TObjFunc
	return 0; // 0x12a1 Return
	
Label_4770:
	var_265_int = 15751; // 0x12a2 PushI
	var_266_bool = var_35_int == var_265_int; // 0x12a3 Eq
	if(var_266_bool == 0) goto Label_4788; // 0x12a4 JumpB
	var_267_string = ""; // 0x12a5 PushV
	var_267_string = "Neutral"; // 0x12a6 MovS
	func_4366(var_36_int, var_267_string); // 0x12a7 Call
	var_268_int = 14512; // 0x12a9 PushI
	SetMessage(var_268_int); // 0x12aa TObjFunc
	ClearReplies(); // 0x12ac TObjFunc
	var_269_int = 14513; // 0x12ae PushI
	var_270_int = -1; // 0x12af PushI
	var_271_int = 15752; // 0x12b0 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x12b1 TObjFunc
	return 0; // 0x12b3 Return
	
Label_4788:
	var_272_int = 15471; // 0x12b4 PushI
	var_273_bool = var_35_int == var_272_int; // 0x12b5 Eq
	if(var_273_bool == 0) goto Label_4806; // 0x12b6 JumpB
	var_274_string = ""; // 0x12b7 PushV
	var_274_string = "Neutral"; // 0x12b8 MovS
	func_4366(var_36_int, var_274_string); // 0x12b9 Call
	var_275_int = 14253; // 0x12bb PushI
	SetMessage(var_275_int); // 0x12bc TObjFunc
	ClearReplies(); // 0x12be TObjFunc
	var_276_int = 14254; // 0x12c0 PushI
	var_277_int = 15742; // 0x12c1 PushI
	var_278_int = 15472; // 0x12c2 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x12c3 TObjFunc
	return 0; // 0x12c5 Return
	
Label_4806:
	var_279_int = 15742; // 0x12c6 PushI
	var_280_bool = var_35_int == var_279_int; // 0x12c7 Eq
	if(var_280_bool == 0) goto Label_4824; // 0x12c8 JumpB
	var_281_string = ""; // 0x12c9 PushV
	var_281_string = "Neutral"; // 0x12ca MovS
	func_4366(var_36_int, var_281_string); // 0x12cb Call
	var_282_int = 14504; // 0x12cd PushI
	SetMessage(var_282_int); // 0x12ce TObjFunc
	ClearReplies(); // 0x12d0 TObjFunc
	var_283_int = 14505; // 0x12d2 PushI
	var_284_int = -1; // 0x12d3 PushI
	var_285_int = 15743; // 0x12d4 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x12d5 TObjFunc
	return 0; // 0x12d7 Return
	
Label_4824:
	var_3_string = 1; // 0x12d8 TMovB
	var_286_bool = 0; // 0x12d9 PushV
	func_5040(var_286_bool); // 0x12da Call
	if(var_286_bool == 0) goto Label_4832; // 0x12dc JumpB
	lshStopAnimation(); // 0x12dd Func
	goto Label_4834; // 0x12df Jump
	
Label_4834:
	return 0; // 0x12e2 Return
	
Label_4832:
	StopAnimation(); // 0x12e0 Func
	
Label_4836:
	return 0; // 0x12e4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_6063(); // 0x7 Call
	var_37_bool = 0; // 0x9 PushV
	func_4856(var_37_bool); // 0xa Call
	var_40_bool = var_37_bool == 0; // 0xc Not
	if(var_40_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_41_string = ""; // 0x13 PushV
	var_41_string = "Neutral"; // 0x14 MovS
	func_4921(var_41_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_3586(var_0_object, var_1_object, var_2_object, var_3_object, var_554_object, var_555_object)
{
	var_0_object = var_555_object; // 0xe03 TMov
	var_1_object = var_554_object; // 0xe04 TMov
	var_3_object = 0; // 0xe05 TMovB
	var_560_int = 1; // 0xe06 PushI
	if(var_560_int == 0) goto Label_3619; // 0xe07 JumpB
	var_561_string = ""; // 0xe08 PushV
	var_561_string = "Neutral"; // 0xe09 MovS
	func_3649(var_555_object, var_561_string); // 0xe0a Call
	var_566_int = 13720; // 0xe0c PushI
	SetMessage(var_566_int); // 0xe0d TObjFunc
	ClearReplies(); // 0xe0f TObjFunc
	var_567_bool = 0; var_568_object = Obj(); // 0xe11 PushV
	var_568_object = var_1_object; // 0xe12 MovT
	func_5675(var_568_object); // 0xe13 Call
	if(var_567_bool == 0) goto Label_3611; // 0xe15 JumpB
	var_573_int = 13721; // 0xe16 PushI
	var_574_int = 13787; // 0xe17 PushI
	var_575_int = 14987; // 0xe18 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0xe19 TObjFunc
	
Label_3611:
	var_576_int = 13722; // 0xe1b PushI
	var_577_int = -1; // 0xe1c PushI
	var_578_int = 14988; // 0xe1d PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0xe1e TObjFunc
	goto Label_3619; // 0xe20 Jump
	
Label_3619:
	var_579_bool = 0; // 0xe23 PushV
	func_5040(var_579_bool); // 0xe24 Call
	if(var_579_bool == 0) goto Label_3634; // 0xe26 JumpB
	
Label_3623:
	lshWaitForAnimEnd(); // 0xe27 Func
	var_580_object = var_3_object; // 0xe29 PushT
	if(var_580_object == 0) goto Label_3628; // 0xe2a JumpB
	goto Label_3633; // 0xe2b Jump
	
Label_3633:
	goto Label_3648; // 0xe31 Jump
	
Label_3648:
	return 0; // 0xe40 Return
	
Label_3628:
	var_581_string = ""; // 0xe2c PushV
	var_581_string = var_2_object; // 0xe2d MovT
	func_4921(var_581_string); // 0xe2e Call
	goto Label_3623; // 0xe30 Jump
	
Label_3634:
	var_582_string = "all"; // 0xe32 PushS
	var_583_string = "idle"; // 0xe33 PushS
	PlayAnimation(var_582_string, var_583_string); // 0xe34 Func
	
Label_3638:
	WaitForAnimEnd(); // 0xe36 Func
	var_584_object = var_3_object; // 0xe38 PushT
	if(var_584_object == 0) goto Label_3643; // 0xe39 JumpB
	goto Label_3648; // 0xe3a Jump
	
Label_3643:
	var_585_string = "all"; // 0xe3b PushS
	var_586_string = "idle"; // 0xe3c PushS
	PlayAnimation(var_585_string, var_586_string); // 0xe3d Func
	goto Label_3638; // 0xe3f Jump
}


func_5125()
{
	var_43_string = "ood2Andrei1"; // 0x1406 PushS
	var_44_int = 1; // 0x1407 PushI
	SetVariable(var_43_string, var_44_int); // 0x1408 Func
	return 0; // 0x140a Return
}


func_5641(var_210_bool, var_211_object)
{
	var_212_bool = 0; var_213_object = Obj(); // 0x160a PushV
	var_213_object = var_211_object; // 0x160b Mov
	func_5879(var_213_object); // 0x160c Call
	if(var_212_bool == 0) goto Label_5649; // 0x160e JumpB
	var_210_bool = 1; // 0x160f MovB
	return 0; // 0x1610 Return
	
Label_5649:
	var_210_bool = 0; // 0x1611 MovB
	return 0; // 0x1612 Return
}


func_5131()
{
	var_139_string = "ood2Andrei2"; // 0x140c PushS
	var_140_int = 1; // 0x140d PushI
	SetVariable(var_139_string, var_140_int); // 0x140e Func
	return 0; // 0x1410 Return
}


func_5137()
{
	var_149_string = "ood2Andrei3"; // 0x1412 PushS
	var_150_int = 1; // 0x1413 PushI
	SetVariable(var_149_string, var_150_int); // 0x1414 Func
	return 0; // 0x1416 Return
}


func_5651(var_508_bool)
{
	var_510_int = 0; var_511_string = ""; // 0x1614 PushV
	var_511_string = "KnowMark"; // 0x1615 MovS
	func_4956(var_510_int, var_511_string); // 0x1616 Call
	var_512_int = 1; // 0x1618 PushI
	var_513_bool = var_510_int == var_512_int; // 0x1619 Eq
	if(var_513_bool == 0) goto Label_5661; // 0x161a JumpB
	var_508_bool = 1; // 0x161b MovB
	return 0; // 0x161c Return
	
Label_5661:
	var_508_bool = 0; // 0x161d MovB
	return 0; // 0x161e Return
}


func_3095(var_0_object, var_464_int, var_465_object)
{
	var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0; var_471_object = Obj(); var_472_bool = 0; var_473_int = 0; var_474_bool = 0; // 0xc17 PushV
	var_0_object = var_465_object; // 0xc18 TMov
	var_475_bool = 0; var_476_object = Obj(); // 0xc19 PushV
	var_476_object = var_465_object; // 0xc1a Mov
	func_4861(var_476_object); // 0xc1b Call
	var_477_bool = var_475_bool == 0; // 0xc1d Not
	if(var_477_bool == 0) goto Label_3105; // 0xc1e JumpB
	var_464_int = -2; // 0xc1f MovI
	return 8; // 0xc20 Return
	
Label_3105:
	CreateDialog(var_471_object); // 0xc21 Func
	var_478_int = 0; // 0xc23 PushV
	func_5036(var_478_int); // 0xc24 Call
	SetNPCName(var_478_int); // 0xc26 ObjFunc
	var_479_string = ""; // 0xc28 PushV
	func_5038(var_479_string); // 0xc29 Call
	SetPhoto(var_479_string); // 0xc2b ObjFunc
	var_480_int = 0; // 0xc2d PushV
	func_5982(var_480_int); // 0xc2e Call
	SetPlayerName(var_480_int); // 0xc30 ObjFunc
	var_473_int = -1; // 0xc32 MovI
	IsOverrideActive(var_472_bool); // 0xc33 Func
	var_481_bool = var_472_bool; // 0xc35 Push
	if(var_481_bool == 0) goto Label_3129; // 0xc36 JumpB
	var_464_int = -2; // 0xc37 MovI
	return 8; // 0xc38 Return
	
Label_3129:
	DoDialog(var_471_object); // 0xc39 Func
	var_482_object = Obj(); var_483_object = Obj(); // 0xc3b PushV
	var_482_object = var_465_object; // 0xc3c Mov
	var_483_object = var_471_object; // 0xc3d Mov
	TaskCall(9); // 0xc3e TaskCall
	func_3158(var_484_object, var_485_object, var_486_string, var_487_bool, var_482_object, var_483_object); // 0xc3f Call
	TaskReturn(); // 0xc40 TaskReturn
	IsDialogEnd(var_474_bool); // 0xc42 ObjFunc
	
Label_3140:
	var_532_bool = var_474_bool == 0; // 0xc44 Not
	if(var_532_bool == 0) goto Label_3147; // 0xc45 JumpB
	sync(); // 0xc46 Func
	IsDialogEnd(var_474_bool); // 0xc48 ObjFunc
	goto Label_3140; // 0xc4a Jump
	
Label_3147:
	var_533_object = Obj(); // 0xc4b PushV
	var_533_object = var_465_object; // 0xc4c Mov
	func_4917(); // 0xc4d Call
	StopDialog(var_471_object); // 0xc4f Func
	GetReturnValue(var_473_int); // 0xc51 ObjFunc
	var_464_int = var_473_int; // 0xc53 Mov
	return 8; // 0xc54 Return
}


func_5143()
{
	var_213_string = "ood2Andrei4"; // 0x1418 PushS
	var_214_int = 1; // 0x1419 PushI
	SetVariable(var_213_string, var_214_int); // 0x141a Func
	return 0; // 0x141c Return
}


func_5149()
{
	var_252_string = "ood2Andrei5"; // 0x141e PushS
	var_253_int = 1; // 0x141f PushI
	SetVariable(var_252_string, var_253_int); // 0x1420 Func
	return 0; // 0x1422 Return
}


func_5663(var_81_bool)
{
	var_83_int = 0; var_84_string = ""; // 0x1620 PushV
	var_84_string = "d5q01"; // 0x1621 MovS
	func_4956(var_83_int, var_84_string); // 0x1622 Call
	var_85_int = 1000; // 0x1624 PushI
	var_86_bool = var_83_int == var_85_int; // 0x1625 Eq
	if(var_86_bool == 0) goto Label_5673; // 0x1626 JumpB
	var_81_bool = 1; // 0x1627 MovB
	return 0; // 0x1628 Return
	
Label_5673:
	var_81_bool = 0; // 0x1629 MovB
	return 0; // 0x162a Return
}


func_5155()
{
	var_502_string = "KnowAgo"; // 0x1424 PushS
	var_503_int = 1; // 0x1425 PushI
	SetVariable(var_502_string, var_503_int); // 0x1426 Func
	return 0; // 0x1428 Return
}


func_5161()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x1429 PushV
	var_49_string = "d2q02"; // 0x142a PushS
	var_50_int = 2; // 0x142b PushI
	SetVariable(var_49_string, var_50_int); // 0x142c Func
	var_51_object = Obj(); // 0x142e PushV
	func_5932(var_51_object); // 0x142f Call
	var_48_object = var_51_object; // 0x1430 Mov
	var_58_string = "d2q02AndreiGotoPetr"; // 0x1432 PushS
	var_59_string = "pt_map_petr"; // 0x1433 PushS
	var_60_int = 0; // 0x1434 PushI
	var_61_int = 15273; // 0x1435 PushI
	var_62_float = 0; // 0x1436 PushV
	func_4999(var_62_float); // 0x1437 Call
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x1439 ObjFunc
	var_65_string = "d2q02AndreiGotoPetrSelf"; // 0x143b PushS
	var_66_string = "pt_map_andrei"; // 0x143c PushS
	var_67_int = 0; // 0x143d PushI
	var_68_int = 15279; // 0x143e PushI
	var_69_float = 0; // 0x143f PushV
	func_4999(var_69_float); // 0x1440 Call
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1442 ObjFunc
	func_6031(); // 0x1445 Call
	return 2; // 0x1447 Return
}


func_5675(var_63_bool)
{
	var_65_int = 0; var_66_string = ""; // 0x162c PushV
	var_66_string = "ood6Andrei1"; // 0x162d MovS
	func_4956(var_65_int, var_66_string); // 0x162e Call
	var_69_int = 0; // 0x1630 PushI
	var_70_bool = var_65_int == var_69_int; // 0x1631 Eq
	if(var_70_bool == 0) goto Label_5685; // 0x1632 JumpB
	var_63_bool = 1; // 0x1633 MovB
	return 0; // 0x1634 Return
	
Label_5685:
	var_63_bool = 0; // 0x1635 MovB
	return 0; // 0x1636 Return
}


func_49(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0x31 PushV
	var_0_object = var_42_object; // 0x32 TMov
	var_52_bool = 0; var_53_object = Obj(); // 0x33 PushV
	var_53_object = var_42_object; // 0x34 Mov
	func_4861(var_53_object); // 0x35 Call
	var_92_bool = var_52_bool == 0; // 0x37 Not
	if(var_92_bool == 0) goto Label_59; // 0x38 JumpB
	var_41_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_48_object); // 0x3b Func
	var_93_int = 0; // 0x3d PushV
	func_5036(var_93_int); // 0x3e Call
	SetNPCName(var_93_int); // 0x40 ObjFunc
	var_94_string = ""; // 0x42 PushV
	func_5038(var_94_string); // 0x43 Call
	SetPhoto(var_94_string); // 0x45 ObjFunc
	var_95_int = 0; // 0x47 PushV
	func_5982(var_95_int); // 0x48 Call
	SetPlayerName(var_95_int); // 0x4a ObjFunc
	var_50_int = -1; // 0x4c MovI
	IsOverrideActive(var_49_bool); // 0x4d Func
	var_103_bool = var_49_bool; // 0x4f Push
	if(var_103_bool == 0) goto Label_83; // 0x50 JumpB
	var_41_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_48_object); // 0x53 Func
	var_104_object = Obj(); var_105_object = Obj(); // 0x55 PushV
	var_104_object = var_42_object; // 0x56 Mov
	var_105_object = var_48_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_106_object, var_107_object, var_108_string, var_109_bool, var_104_object, var_105_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_51_bool); // 0x5c ObjFunc
	
Label_94:
	var_145_bool = var_51_bool == 0; // 0x5e Not
	if(var_145_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_51_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_146_object = Obj(); // 0x65 PushV
	var_146_object = var_42_object; // 0x66 Mov
	func_4917(); // 0x67 Call
	StopDialog(var_48_object); // 0x69 Func
	GetReturnValue(var_50_int); // 0x6b ObjFunc
	var_41_int = var_50_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_5687(var_263_bool)
{
	var_265_int = 0; var_266_string = ""; // 0x1638 PushV
	var_266_string = "KnowAnna"; // 0x1639 MovS
	func_4956(var_265_int, var_266_string); // 0x163a Call
	var_267_int = 1; // 0x163c PushI
	var_268_bool = var_265_int == var_267_int; // 0x163d Eq
	if(var_268_bool == 0) goto Label_5697; // 0x163e JumpB
	var_263_bool = 1; // 0x163f MovB
	return 0; // 0x1640 Return
	
Label_5697:
	var_263_bool = 0; // 0x1641 MovB
	return 0; // 0x1642 Return
}


func_3649(var_2_object, var_47_string)
{
	var_48_bool = 0; // 0xe42 PushV
	func_5040(var_48_bool); // 0xe43 Call
	var_49_bool = var_48_bool == 0; // 0xe45 Not
	if(var_49_bool == 0) goto Label_3656; // 0xe46 JumpB
	return 0; // 0xe47 Return
	
Label_3656:
	var_50_bool = var_47_string == var_2_object; // 0xe48 Eq
	if(var_50_bool == 0) goto Label_3659; // 0xe49 JumpB
	return 0; // 0xe4a Return
	
Label_3659:
	var_51_string = ""; // 0xe4b PushV
	var_51_string = var_47_string; // 0xe4c Mov
	func_4921(var_51_string); // 0xe4d Call
	var_2_object = var_47_string; // 0xe4f TMov
	return 0; // 0xe50 Return
}


func_5699(var_247_bool)
{
	var_249_int = 0; var_250_string = ""; // 0x1644 PushV
	var_250_string = "KnowEva"; // 0x1645 MovS
	func_4956(var_249_int, var_250_string); // 0x1646 Call
	var_251_int = 1; // 0x1648 PushI
	var_252_bool = var_249_int == var_251_int; // 0x1649 Eq
	if(var_252_bool == 0) goto Label_5709; // 0x164a JumpB
	var_247_bool = 1; // 0x164b MovB
	return 0; // 0x164c Return
	
Label_5709:
	var_247_bool = 0; // 0x164d MovB
	return 0; // 0x164e Return
}


func_5193()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x1449 PushV
	var_155_string = "d2q02"; // 0x144a PushS
	var_156_int = 6; // 0x144b PushI
	SetVariable(var_155_string, var_156_int); // 0x144c Func
	var_157_object = Obj(); // 0x144e PushV
	func_5932(var_157_object); // 0x144f Call
	var_154_object = var_157_object; // 0x1450 Mov
	var_158_string = "d2q02AndreiGotoGrif"; // 0x1452 PushS
	var_159_string = "pt_map_grif"; // 0x1453 PushS
	var_160_int = 0; // 0x1454 PushI
	var_161_int = 15277; // 0x1455 PushI
	var_162_float = 0; // 0x1456 PushV
	func_4999(var_162_float); // 0x1457 Call
	AddMark(var_158_string, var_159_string, var_160_int, var_161_int, var_162_float); // 0x1459 ObjFunc
	var_163_string = "d2q02AndreiGotoGrifSelf"; // 0x145b PushS
	var_164_string = "pt_map_andrei"; // 0x145c PushS
	var_165_int = 0; // 0x145d PushI
	var_166_int = 15282; // 0x145e PushI
	var_167_float = 0; // 0x145f PushV
	func_4999(var_167_float); // 0x1460 Call
	AddMark(var_163_string, var_164_string, var_165_int, var_166_int, var_167_float); // 0x1462 ObjFunc
	func_6015(); // 0x1465 Call
	return 2; // 0x1467 Return
}


func_5711(var_442_bool)
{
	var_444_int = 0; var_445_string = ""; // 0x1650 PushV
	var_445_string = "KnowGrif"; // 0x1651 MovS
	func_4956(var_444_int, var_445_string); // 0x1652 Call
	var_446_int = 1; // 0x1654 PushI
	var_447_bool = var_444_int == var_446_int; // 0x1655 Eq
	if(var_447_bool == 0) goto Label_5721; // 0x1656 JumpB
	var_442_bool = 1; // 0x1657 MovB
	return 0; // 0x1658 Return
	
Label_5721:
	var_442_bool = 0; // 0x1659 MovB
	return 0; // 0x165a Return
}


func_3158(var_0_object, var_1_object, var_2_object, var_3_object, var_482_object, var_483_object)
{
	var_0_object = var_483_object; // 0xc57 TMov
	var_1_object = var_482_object; // 0xc58 TMov
	var_3_object = 0; // 0xc59 TMovB
	var_488_int = 1; // 0xc5a PushI
	if(var_488_int == 0) goto Label_3221; // 0xc5b JumpB
	var_489_bool = 0; // 0xc5c PushV
	var_489_bool = 0; // 0xc5d MovB
	var_490_bool = 0; var_491_object = Obj(); // 0xc5e PushV
	var_491_object = var_1_object; // 0xc5f MovT
	func_5807(var_491_object); // 0xc60 Call
	if(var_490_bool == 0) goto Label_3178; // 0xc62 JumpB
	var_496_bool = 0; var_497_object = Obj(); // 0xc63 PushV
	var_497_object = var_1_object; // 0xc64 MovT
	func_5629(var_497_object); // 0xc65 Call
	var_502_bool = var_496_bool == 0; // 0xc67 Not
	if(var_502_bool == 0) goto Label_3178; // 0xc68 JumpB
	var_489_bool = 1; // 0xc69 MovB
	
Label_3178:
	if(var_489_bool == 0) goto Label_3204; // 0xc6a JumpB
	var_503_object = Obj(); var_504_object = Obj(); // 0xc6b PushV
	var_503_object = var_1_object; // 0xc6c MovT
	var_504_object = var_0_object; // 0xc6d MovT
	func_5347(); // 0xc6e Call
	var_507_string = ""; // 0xc70 PushV
	var_507_string = "Neutral"; // 0xc71 MovS
	func_3251(var_483_object, var_507_string); // 0xc72 Call
	var_512_int = 9762; // 0xc74 PushI
	SetMessage(var_512_int); // 0xc75 TObjFunc
	ClearReplies(); // 0xc77 TObjFunc
	var_513_int = 9763; // 0xc79 PushI
	var_514_int = 10732; // 0xc7a PushI
	var_515_int = 10753; // 0xc7b PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xc7c TObjFunc
	var_516_int = 9770; // 0xc7e PushI
	var_517_int = 10754; // 0xc7f PushI
	var_518_int = 10761; // 0xc80 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0xc81 TObjFunc
	goto Label_3221; // 0xc83 Jump
	
Label_3221:
	var_519_bool = 0; // 0xc95 PushV
	func_5040(var_519_bool); // 0xc96 Call
	if(var_519_bool == 0) goto Label_3236; // 0xc98 JumpB
	
Label_3225:
	lshWaitForAnimEnd(); // 0xc99 Func
	var_520_object = var_3_object; // 0xc9b PushT
	if(var_520_object == 0) goto Label_3230; // 0xc9c JumpB
	goto Label_3235; // 0xc9d Jump
	
Label_3235:
	goto Label_3250; // 0xca3 Jump
	
Label_3250:
	return 0; // 0xcb2 Return
	
Label_3230:
	var_521_string = ""; // 0xc9e PushV
	var_521_string = var_2_object; // 0xc9f MovT
	func_4921(var_521_string); // 0xca0 Call
	goto Label_3225; // 0xca2 Jump
	
Label_3236:
	var_522_string = "all"; // 0xca4 PushS
	var_523_string = "idle"; // 0xca5 PushS
	PlayAnimation(var_522_string, var_523_string); // 0xca6 Func
	
Label_3240:
	WaitForAnimEnd(); // 0xca8 Func
	var_524_object = var_3_object; // 0xcaa PushT
	if(var_524_object == 0) goto Label_3245; // 0xcab JumpB
	goto Label_3250; // 0xcac Jump
	
Label_3245:
	var_525_string = "all"; // 0xcad PushS
	var_526_string = "idle"; // 0xcae PushS
	PlayAnimation(var_525_string, var_526_string); // 0xcaf Func
	goto Label_3240; // 0xcb1 Jump
	
Label_3204:
	var_527_string = ""; // 0xc84 PushV
	var_527_string = "Neutral"; // 0xc85 MovS
	func_3251(var_483_object, var_527_string); // 0xc86 Call
	var_528_int = 15310; // 0xc88 PushI
	SetMessage(var_528_int); // 0xc89 TObjFunc
	ClearReplies(); // 0xc8b TObjFunc
	var_529_int = 15311; // 0xc8d PushI
	var_530_int = -1; // 0xc8e PushI
	var_531_int = 16549; // 0xc8f PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0xc90 TObjFunc
	goto Label_3221; // 0xc92 Jump
}


func_5723(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x165c PushV
	var_88_string = "d11q01"; // 0x165d MovS
	func_4956(var_87_int, var_88_string); // 0x165e Call
	var_91_int = 3; // 0x1660 PushI
	var_92_bool = var_87_int == var_91_int; // 0x1661 Eq
	if(var_92_bool == 0) goto Label_5733; // 0x1662 JumpB
	var_85_bool = 1; // 0x1663 MovB
	return 0; // 0x1664 Return
	
Label_5733:
	var_85_bool = 0; // 0x1665 MovB
	return 0; // 0x1666 Return
}


func_4187(var_0_object, var_668_int, var_669_object)
{
	var_671_object = Obj(); var_672_bool = 0; var_673_int = 0; var_674_bool = 0; var_675_object = Obj(); var_676_bool = 0; var_677_int = 0; var_678_bool = 0; // 0x105b PushV
	var_0_object = var_669_object; // 0x105c TMov
	var_679_bool = 0; var_680_object = Obj(); // 0x105d PushV
	var_680_object = var_669_object; // 0x105e Mov
	func_4861(var_680_object); // 0x105f Call
	var_681_bool = var_679_bool == 0; // 0x1061 Not
	if(var_681_bool == 0) goto Label_4197; // 0x1062 JumpB
	var_668_int = -2; // 0x1063 MovI
	return 8; // 0x1064 Return
	
Label_4197:
	CreateDialog(var_675_object); // 0x1065 Func
	var_682_int = 0; // 0x1067 PushV
	func_5036(var_682_int); // 0x1068 Call
	SetNPCName(var_682_int); // 0x106a ObjFunc
	var_683_string = ""; // 0x106c PushV
	func_5038(var_683_string); // 0x106d Call
	SetPhoto(var_683_string); // 0x106f ObjFunc
	var_684_int = 0; // 0x1071 PushV
	func_5982(var_684_int); // 0x1072 Call
	SetPlayerName(var_684_int); // 0x1074 ObjFunc
	var_677_int = -1; // 0x1076 MovI
	IsOverrideActive(var_676_bool); // 0x1077 Func
	var_685_bool = var_676_bool; // 0x1079 Push
	if(var_685_bool == 0) goto Label_4221; // 0x107a JumpB
	var_668_int = -2; // 0x107b MovI
	return 8; // 0x107c Return
	
Label_4221:
	DoDialog(var_675_object); // 0x107d Func
	var_686_object = Obj(); var_687_object = Obj(); // 0x107f PushV
	var_686_object = var_669_object; // 0x1080 Mov
	var_687_object = var_675_object; // 0x1081 Mov
	TaskCall(15); // 0x1082 TaskCall
	func_4250(var_688_object, var_689_object, var_690_string, var_691_bool, var_686_object, var_687_object); // 0x1083 Call
	TaskReturn(); // 0x1084 TaskReturn
	IsDialogEnd(var_678_bool); // 0x1086 ObjFunc
	
Label_4232:
	var_757_bool = var_678_bool == 0; // 0x1088 Not
	if(var_757_bool == 0) goto Label_4239; // 0x1089 JumpB
	sync(); // 0x108a Func
	IsDialogEnd(var_678_bool); // 0x108c ObjFunc
	goto Label_4232; // 0x108e Jump
	
Label_4239:
	var_758_object = Obj(); // 0x108f PushV
	var_758_object = var_669_object; // 0x1090 Mov
	func_4917(); // 0x1091 Call
	StopDialog(var_675_object); // 0x1093 Func
	GetReturnValue(var_677_int); // 0x1095 ObjFunc
	var_668_int = var_677_int; // 0x1097 Mov
	return 8; // 0x1098 Return
}


func_606(var_2_object, var_175_string)
{
	var_176_bool = 0; // 0x25f PushV
	func_5040(var_176_bool); // 0x260 Call
	var_177_bool = var_176_bool == 0; // 0x262 Not
	if(var_177_bool == 0) goto Label_613; // 0x263 JumpB
	return 0; // 0x264 Return
	
Label_613:
	var_178_bool = var_175_string == var_2_object; // 0x265 Eq
	if(var_178_bool == 0) goto Label_616; // 0x266 JumpB
	return 0; // 0x267 Return
	
Label_616:
	var_179_string = ""; // 0x268 PushV
	var_179_string = var_175_string; // 0x269 Mov
	func_4921(var_179_string); // 0x26a Call
	var_2_object = var_175_string; // 0x26c TMov
	return 0; // 0x26d Return
}


func_5735(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x1668 PushV
	var_96_string = "ood11Andrei1"; // 0x1669 MovS
	func_4956(var_95_int, var_96_string); // 0x166a Call
	var_97_int = 0; // 0x166c PushI
	var_98_bool = var_95_int == var_97_int; // 0x166d Eq
	if(var_98_bool == 0) goto Label_5745; // 0x166e JumpB
	var_93_bool = 1; // 0x166f MovB
	return 0; // 0x1670 Return
	
Label_5745:
	var_93_bool = 0; // 0x1671 MovB
	return 0; // 0x1672 Return
}


func_5225()
{
	var_217_object = Obj(); var_218_object = Obj(); // 0x1469 PushV
	var_219_string = "d2q02"; // 0x146a PushS
	var_220_int = 8; // 0x146b PushI
	SetVariable(var_219_string, var_220_int); // 0x146c Func
	var_221_object = Obj(); // 0x146e PushV
	func_5932(var_221_object); // 0x146f Call
	var_218_object = var_221_object; // 0x1470 Mov
	var_222_string = "d2q02ReadyAndrei"; // 0x1472 PushS
	var_223_string = "pt_map_andrei"; // 0x1473 PushS
	var_224_int = 0; // 0x1474 PushI
	var_225_int = 15284; // 0x1475 PushI
	var_226_float = 0; // 0x1476 PushV
	func_4999(var_226_float); // 0x1477 Call
	AddMark(var_222_string, var_223_string, var_224_int, var_225_int, var_226_float); // 0x1479 ObjFunc
	func_6047(); // 0x147c Call
	var_236_bool = 0; var_237_string = ""; var_238_string = ""; // 0x147e PushV
	var_237_string = "quest_d2_02"; // 0x147f MovS
	var_238_string = "put_patrol"; // 0x1480 MovS
	func_4987(var_236_bool, var_237_string, var_238_string); // 0x1481 Call
	return 2; // 0x1483 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_104_object, var_105_object)
{
	var_0_object = var_105_object; // 0x71 TMov
	var_1_object = var_104_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_110_int = 1; // 0x74 PushI
	if(var_110_int == 0) goto Label_145; // 0x75 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x76 PushV
	var_111_object = var_1_object; // 0x77 MovT
	var_112_object = var_0_object; // 0x78 MovT
	func_5280(); // 0x79 Call
	var_115_string = ""; // 0x7b PushV
	var_115_string = "Neutral"; // 0x7c MovS
	func_175(var_105_object, var_115_string); // 0x7d Call
	var_130_int = 187; // 0x7f PushI
	SetMessage(var_130_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_131_int = 190; // 0x84 PushI
	var_132_int = 228; // 0x85 PushI
	var_133_int = 227; // 0x86 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x87 TObjFunc
	var_134_int = 188; // 0x89 PushI
	var_135_int = 226; // 0x8a PushI
	var_136_int = 225; // 0x8b PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_137_bool = 0; // 0x91 PushV
	func_5040(var_137_bool); // 0x92 Call
	if(var_137_bool == 0) goto Label_160; // 0x94 JumpB
	
Label_149:
	lshWaitForAnimEnd(); // 0x95 Func
	var_138_object = var_3_object; // 0x97 PushT
	if(var_138_object == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_159:
	goto Label_174; // 0x9f Jump
	
Label_174:
	return 0; // 0xae Return
	
Label_154:
	var_139_string = ""; // 0x9a PushV
	var_139_string = var_2_object; // 0x9b MovT
	func_4921(var_139_string); // 0x9c Call
	goto Label_149; // 0x9e Jump
	
Label_160:
	var_140_string = "all"; // 0xa0 PushS
	var_141_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_140_string, var_141_string); // 0xa2 Func
	
Label_164:
	WaitForAnimEnd(); // 0xa4 Func
	var_142_object = var_3_object; // 0xa6 PushT
	if(var_142_object == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_169:
	var_143_string = "all"; // 0xa9 PushS
	var_144_string = "idle"; // 0xaa PushS
	PlayAnimation(var_143_string, var_144_string); // 0xab Func
	goto Label_164; // 0xad Jump
}


func_5747(var_125_bool)
{
	var_127_int = 0; var_128_string = ""; // 0x1674 PushV
	var_128_string = "d11q01"; // 0x1675 MovS
	func_4956(var_127_int, var_128_string); // 0x1676 Call
	var_129_int = 4; // 0x1678 PushI
	var_130_bool = var_127_int == var_129_int; // 0x1679 Eq
	if(var_130_bool == 0) goto Label_5757; // 0x167a JumpB
	var_125_bool = 1; // 0x167b MovB
	return 0; // 0x167c Return
	
Label_5757:
	var_125_bool = 0; // 0x167d MovB
	return 0; // 0x167e Return
}


func_5759(var_131_bool)
{
	var_133_int = 0; var_134_string = ""; // 0x1680 PushV
	var_134_string = "ood11Andrei2"; // 0x1681 MovS
	func_4956(var_133_int, var_134_string); // 0x1682 Call
	var_135_int = 0; // 0x1684 PushI
	var_136_bool = var_133_int == var_135_int; // 0x1685 Eq
	if(var_136_bool == 0) goto Label_5769; // 0x1686 JumpB
	var_131_bool = 1; // 0x1687 MovB
	return 0; // 0x1688 Return
	
Label_5769:
	var_131_bool = 0; // 0x1689 MovB
	return 0; // 0x168a Return
}


func_5253()
{
	var_179_object = Obj(); var_180_string = ""; var_181_float = 0; // 0x1486 PushV
	var_182_object = Obj(); // 0x1487 PushV
	func_5932(var_182_object); // 0x1488 Call
	var_179_object = var_182_object; // 0x1489 Mov
	var_180_string = "pt_map_grif"; // 0x148b MovS
	var_181_float = 2; // 0x148c MovI
	func_5949(var_179_object, var_180_string, var_181_float); // 0x148d Call
	var_183_object = Obj(); // 0x148f PushV
	func_5932(var_183_object); // 0x1490 Call
	ShowMap(var_183_object); // 0x1492 ObjFunc
	return 0; // 0x1494 Return
}


func_2187(var_2_object, var_256_string)
{
	var_257_bool = 0; // 0x88c PushV
	func_5040(var_257_bool); // 0x88d Call
	var_258_bool = var_257_bool == 0; // 0x88f Not
	if(var_258_bool == 0) goto Label_2194; // 0x890 JumpB
	return 0; // 0x891 Return
	
Label_2194:
	var_259_bool = var_256_string == var_2_object; // 0x892 Eq
	if(var_259_bool == 0) goto Label_2197; // 0x893 JumpB
	return 0; // 0x894 Return
	
Label_2197:
	var_260_string = ""; // 0x895 PushV
	var_260_string = var_256_string; // 0x896 Mov
	func_4921(var_260_string); // 0x897 Call
	var_2_object = var_256_string; // 0x899 TMov
	return 0; // 0x89a Return
}


func_5771(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x168c PushV
	var_143_string = "ood11Andrei3"; // 0x168d MovS
	func_4956(var_142_int, var_143_string); // 0x168e Call
	var_144_int = 0; // 0x1690 PushI
	var_145_bool = var_142_int == var_144_int; // 0x1691 Eq
	if(var_145_bool == 0) goto Label_5781; // 0x1692 JumpB
	var_140_bool = 1; // 0x1693 MovB
	return 0; // 0x1694 Return
	
Label_5781:
	var_140_bool = 0; // 0x1695 MovB
	return 0; // 0x1696 Return
}


func_5269(var_41_object)
{
	var_43_string = "tvirin is given"; // 0x1496 PushS
	Trace(var_43_string); // 0x1497 Func
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0; // 0x1499 PushV
	var_44_object = var_41_object; // 0x149a Mov
	var_45_string = "tvirin"; // 0x149b MovS
	var_46_int = 1; // 0x149c MovI
	func_4974(var_44_object, var_45_string, var_46_int); // 0x149d Call
	return 0; // 0x149f Return
}


func_5783(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x1698 PushV
	var_314_string = "KnowLaska"; // 0x1699 MovS
	func_4956(var_313_int, var_314_string); // 0x169a Call
	var_315_int = 1; // 0x169c PushI
	var_316_bool = var_313_int == var_315_int; // 0x169d Eq
	if(var_316_bool == 0) goto Label_5793; // 0x169e JumpB
	var_311_bool = 1; // 0x169f MovB
	return 0; // 0x16a0 Return
	
Label_5793:
	var_311_bool = 0; // 0x16a1 MovB
	return 0; // 0x16a2 Return
}


func_4250(var_0_object, var_1_object, var_2_object, var_3_object, var_686_object, var_687_object)
{
	var_0_object = var_687_object; // 0x109b TMov
	var_1_object = var_686_object; // 0x109c TMov
	var_3_object = 0; // 0x109d TMovB
	var_692_int = 1; // 0x109e PushI
	if(var_692_int == 0) goto Label_4336; // 0x109f JumpB
	var_693_bool = 0; // 0x10a0 PushV
	var_693_bool = 0; // 0x10a1 MovB
	var_694_bool = 0; var_695_object = Obj(); // 0x10a2 PushV
	var_695_object = var_1_object; // 0x10a3 MovT
	func_5723(var_695_object); // 0x10a4 Call
	if(var_694_bool == 0) goto Label_4269; // 0x10a6 JumpB
	var_700_bool = 0; var_701_object = Obj(); // 0x10a7 PushV
	var_701_object = var_1_object; // 0x10a8 MovT
	func_5735(var_701_object); // 0x10a9 Call
	if(var_700_bool == 0) goto Label_4269; // 0x10ab JumpB
	var_693_bool = 1; // 0x10ac MovB
	
Label_4269:
	if(var_693_bool == 0) goto Label_4290; // 0x10ad JumpB
	var_706_object = Obj(); var_707_object = Obj(); // 0x10ae PushV
	var_706_object = var_1_object; // 0x10af MovT
	var_707_object = var_0_object; // 0x10b0 MovT
	func_5298(); // 0x10b1 Call
	var_710_string = ""; // 0x10b3 PushV
	var_710_string = "Neutral"; // 0x10b4 MovS
	func_4366(var_687_object, var_710_string); // 0x10b5 Call
	var_715_int = 14241; // 0x10b7 PushI
	SetMessage(var_715_int); // 0x10b8 TObjFunc
	ClearReplies(); // 0x10ba TObjFunc
	var_716_int = 14242; // 0x10bc PushI
	var_717_int = 15461; // 0x10bd PushI
	var_718_int = 15460; // 0x10be PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x10bf TObjFunc
	goto Label_4336; // 0x10c1 Jump
	
Label_4336:
	var_719_bool = 0; // 0x10f0 PushV
	func_5040(var_719_bool); // 0x10f1 Call
	if(var_719_bool == 0) goto Label_4351; // 0x10f3 JumpB
	
Label_4340:
	lshWaitForAnimEnd(); // 0x10f4 Func
	var_720_object = var_3_object; // 0x10f6 PushT
	if(var_720_object == 0) goto Label_4345; // 0x10f7 JumpB
	goto Label_4350; // 0x10f8 Jump
	
Label_4350:
	goto Label_4365; // 0x10fe Jump
	
Label_4365:
	return 0; // 0x110d Return
	
Label_4345:
	var_721_string = ""; // 0x10f9 PushV
	var_721_string = var_2_object; // 0x10fa MovT
	func_4921(var_721_string); // 0x10fb Call
	goto Label_4340; // 0x10fd Jump
	
Label_4351:
	var_722_string = "all"; // 0x10ff PushS
	var_723_string = "idle"; // 0x1100 PushS
	PlayAnimation(var_722_string, var_723_string); // 0x1101 Func
	
Label_4355:
	WaitForAnimEnd(); // 0x1103 Func
	var_724_object = var_3_object; // 0x1105 PushT
	if(var_724_object == 0) goto Label_4360; // 0x1106 JumpB
	goto Label_4365; // 0x1107 Jump
	
Label_4360:
	var_725_string = "all"; // 0x1108 PushS
	var_726_string = "idle"; // 0x1109 PushS
	PlayAnimation(var_725_string, var_726_string); // 0x110a Func
	goto Label_4355; // 0x110c Jump
	
Label_4290:
	var_727_string = ""; // 0x10c2 PushV
	var_727_string = "Neutral"; // 0x10c3 MovS
	func_4366(var_687_object, var_727_string); // 0x10c4 Call
	var_728_int = 14258; // 0x10c6 PushI
	SetMessage(var_728_int); // 0x10c7 TObjFunc
	ClearReplies(); // 0x10c9 TObjFunc
	var_729_bool = 0; // 0x10cb PushV
	var_729_bool = 0; // 0x10cc MovB
	var_730_bool = 0; var_731_object = Obj(); // 0x10cd PushV
	var_731_object = var_1_object; // 0x10ce MovT
	func_5747(var_731_object); // 0x10cf Call
	if(var_730_bool == 0) goto Label_4312; // 0x10d1 JumpB
	var_736_bool = 0; var_737_object = Obj(); // 0x10d2 PushV
	var_737_object = var_1_object; // 0x10d3 MovT
	func_5759(var_737_object); // 0x10d4 Call
	if(var_736_bool == 0) goto Label_4312; // 0x10d6 JumpB
	var_729_bool = 1; // 0x10d7 MovB
	
Label_4312:
	if(var_729_bool == 0) goto Label_4318; // 0x10d8 JumpB
	var_742_int = 14259; // 0x10d9 PushI
	var_743_int = 15479; // 0x10da PushI
	var_744_int = 15478; // 0x10db PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x10dc TObjFunc
	
Label_4318:
	var_745_bool = 0; var_746_object = Obj(); // 0x10de PushV
	var_746_object = var_1_object; // 0x10df MovT
	func_5771(var_746_object); // 0x10e0 Call
	if(var_745_bool == 0) goto Label_4328; // 0x10e2 JumpB
	var_751_int = 14271; // 0x10e3 PushI
	var_752_int = 15491; // 0x10e4 PushI
	var_753_int = 15490; // 0x10e5 PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0x10e6 TObjFunc
	
Label_4328:
	var_754_int = 14278; // 0x10e8 PushI
	var_755_int = -1; // 0x10e9 PushI
	var_756_int = 15498; // 0x10ea PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0x10eb TObjFunc
	goto Label_4336; // 0x10ed Jump
}


func_5280()
{
	var_43_string = "KnowAndrei"; // 0x14a1 PushS
	var_44_int = 1; // 0x14a2 PushI
	SetVariable(var_43_string, var_44_int); // 0x14a3 Func
	return 0; // 0x14a5 Return
}


func_5795(var_279_bool)
{
	var_281_int = 0; var_282_string = ""; // 0x16a4 PushV
	var_282_string = "KnowMaria"; // 0x16a5 MovS
	func_4956(var_281_int, var_282_string); // 0x16a6 Call
	var_283_int = 1; // 0x16a8 PushI
	var_284_bool = var_281_int == var_283_int; // 0x16a9 Eq
	if(var_284_bool == 0) goto Label_5805; // 0x16aa JumpB
	var_279_bool = 1; // 0x16ab MovB
	return 0; // 0x16ac Return
	
Label_5805:
	var_279_bool = 0; // 0x16ad MovB
	return 0; // 0x16ae Return
}


func_5286()
{
	var_628_string = "KnowNina"; // 0x14a7 PushS
	var_629_int = 1; // 0x14a8 PushI
	SetVariable(var_628_string, var_629_int); // 0x14a9 Func
	return 0; // 0x14ab Return
}


func_5292()
{
	var_43_string = "ood6Andrei1"; // 0x14ad PushS
	var_44_int = 1; // 0x14ae PushI
	SetVariable(var_43_string, var_44_int); // 0x14af Func
	return 0; // 0x14b1 Return
}


func_175(var_2_object, var_45_string)
{
	var_46_bool = 0; // 0xb0 PushV
	func_5040(var_46_bool); // 0xb1 Call
	var_47_bool = var_46_bool == 0; // 0xb3 Not
	if(var_47_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_48_bool = var_45_string == var_2_object; // 0xb6 Eq
	if(var_48_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_49_string = ""; // 0xb9 PushV
	var_49_string = var_45_string; // 0xba Mov
	func_4921(var_49_string); // 0xbb Call
	var_2_object = var_45_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_5807(var_67_bool)
{
	var_69_int = 0; var_70_string = ""; // 0x16b0 PushV
	var_70_string = "ood3Andrei1"; // 0x16b1 MovS
	func_4956(var_69_int, var_70_string); // 0x16b2 Call
	var_73_int = 0; // 0x16b4 PushI
	var_74_bool = var_69_int == var_73_int; // 0x16b5 Eq
	if(var_74_bool == 0) goto Label_5817; // 0x16b6 JumpB
	var_67_bool = 1; // 0x16b7 MovB
	return 0; // 0x16b8 Return
	
Label_5817:
	var_67_bool = 0; // 0x16b9 MovB
	return 0; // 0x16ba Return
}


func_5298()
{
	var_101_string = "ood11Andrei1"; // 0x14b3 PushS
	var_102_int = 1; // 0x14b4 PushI
	SetVariable(var_101_string, var_102_int); // 0x14b5 Func
	return 0; // 0x14b7 Return
}


func_3251(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0xcb4 PushV
	func_5040(var_87_bool); // 0xcb5 Call
	var_88_bool = var_87_bool == 0; // 0xcb7 Not
	if(var_88_bool == 0) goto Label_3258; // 0xcb8 JumpB
	return 0; // 0xcb9 Return
	
Label_3258:
	var_89_bool = var_86_string == var_2_object; // 0xcba Eq
	if(var_89_bool == 0) goto Label_3261; // 0xcbb JumpB
	return 0; // 0xcbc Return
	
Label_3261:
	var_90_string = ""; // 0xcbd PushV
	var_90_string = var_86_string; // 0xcbe Mov
	func_4921(var_90_string); // 0xcbf Call
	var_2_object = var_86_string; // 0xcc1 TMov
	return 0; // 0xcc2 Return
}


func_5304()
{
	var_43_string = "d11q01"; // 0x14b9 PushS
	var_44_int = 4; // 0x14ba PushI
	SetVariable(var_43_string, var_44_int); // 0x14bb Func
	func_5999(); // 0x14be Call
	return 0; // 0x14c0 Return
}


func_5819(var_43_bool)
{
	var_45_int = 0; var_46_string = ""; // 0x16bc PushV
	var_46_string = "d10q01"; // 0x16bd MovS
	func_4956(var_45_int, var_46_string); // 0x16be Call
	var_49_int = 0; // 0x16c0 PushI
	var_50_bool = var_45_int == var_49_int; // 0x16c1 Eq
	if(var_50_bool == 0) goto Label_5829; // 0x16c2 JumpB
	var_43_bool = 1; // 0x16c3 MovB
	return 0; // 0x16c4 Return
	
Label_5829:
	var_43_bool = 0; // 0x16c5 MovB
	return 0; // 0x16c6 Return
}


func_5313()
{
	var_74_string = "ood11Andrei2"; // 0x14c2 PushS
	var_75_int = 1; // 0x14c3 PushI
	SetVariable(var_74_string, var_75_int); // 0x14c4 Func
	return 0; // 0x14c6 Return
}


func_5831(var_52_bool)
{
	var_54_int = 0; var_55_string = ""; // 0x16c8 PushV
	var_55_string = "d10q01"; // 0x16c9 MovS
	func_4956(var_54_int, var_55_string); // 0x16ca Call
	var_56_int = 1000; // 0x16cc PushI
	var_57_bool = var_54_int == var_56_int; // 0x16cd Eq
	if(var_57_bool == 0) goto Label_5841; // 0x16ce JumpB
	var_52_bool = 1; // 0x16cf MovB
	return 0; // 0x16d0 Return
	
Label_5841:
	var_52_bool = 0; // 0x16d1 MovB
	return 0; // 0x16d2 Return
}


func_5319()
{
	var_80_string = "ood11Andrei3"; // 0x14c8 PushS
	var_81_int = 1; // 0x14c9 PushI
	SetVariable(var_80_string, var_81_int); // 0x14ca Func
	return 0; // 0x14cc Return
}


func_5325()
{
	var_109_string = "KnowMark"; // 0x14ce PushS
	var_110_int = 1; // 0x14cf PushI
	SetVariable(var_109_string, var_110_int); // 0x14d0 Func
	return 0; // 0x14d2 Return
}


func_5331()
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0; // 0x14d4 PushV
	var_100_object = Obj(); // 0x14d5 PushV
	func_5932(var_100_object); // 0x14d6 Call
	var_97_object = var_100_object; // 0x14d7 Mov
	var_98_string = "pt_map_petr"; // 0x14d9 MovS
	var_99_float = 2; // 0x14da MovI
	func_5949(var_97_object, var_98_string, var_99_float); // 0x14db Call
	var_120_object = Obj(); // 0x14dd PushV
	func_5932(var_120_object); // 0x14de Call
	ShowMap(var_120_object); // 0x14e0 ObjFunc
	return 0; // 0x14e2 Return
}


func_5843(var_59_bool)
{
	var_61_int = 0; var_62_string = ""; // 0x16d4 PushV
	var_62_string = "ood10Andrei1"; // 0x16d5 MovS
	func_4956(var_61_int, var_62_string); // 0x16d6 Call
	var_63_int = 0; // 0x16d8 PushI
	var_64_bool = var_61_int == var_63_int; // 0x16d9 Eq
	if(var_64_bool == 0) goto Label_5853; // 0x16da JumpB
	var_59_bool = 1; // 0x16db MovB
	return 0; // 0x16dc Return
	
Label_5853:
	var_59_bool = 0; // 0x16dd MovB
	return 0; // 0x16de Return
}


func_5855(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x16e0 PushV
	var_234_string = "KnowPredictions"; // 0x16e1 MovS
	func_4956(var_233_int, var_234_string); // 0x16e2 Call
	var_235_int = 1; // 0x16e4 PushI
	var_236_bool = var_233_int == var_235_int; // 0x16e5 Eq
	if(var_236_bool == 0) goto Label_5865; // 0x16e6 JumpB
	var_231_bool = 1; // 0x16e7 MovB
	return 0; // 0x16e8 Return
	
Label_5865:
	var_231_bool = 0; // 0x16e9 MovB
	return 0; // 0x16ea Return
}


func_5347()
{
	var_84_string = "ood3Andrei1"; // 0x14e4 PushS
	var_85_int = 1; // 0x14e5 PushI
	SetVariable(var_84_string, var_85_int); // 0x14e6 Func
	return 0; // 0x14e8 Return
}


func_4837(var_188_string, var_189_int)
{
	var_190_int = 0; var_191_int = 0; // 0x12e5 PushV
	GetProperty(var_188_string, var_191_int); // 0x12e6 ObjFunc
	var_192_int = var_191_int + var_189_int; // 0x12e8 Add
	SetProperty(var_188_string, var_192_int); // 0x12e9 ObjFunc
	return 2; // 0x12eb Return
}


func_5353()
{
	var_67_string = "ood10Andrei1"; // 0x14ea PushS
	var_68_int = 1; // 0x14eb PushI
	SetVariable(var_67_string, var_68_int); // 0x14ec Func
	return 0; // 0x14ee Return
}


func_5867(var_353_bool)
{
	var_355_int = 0; var_356_string = ""; // 0x16ec PushV
	var_356_string = "KnowTermitnik"; // 0x16ed MovS
	func_4956(var_355_int, var_356_string); // 0x16ee Call
	var_357_int = 1; // 0x16f0 PushI
	var_358_bool = var_355_int == var_357_int; // 0x16f1 Eq
	if(var_358_bool == 0) goto Label_5877; // 0x16f2 JumpB
	var_353_bool = 1; // 0x16f3 MovB
	return 0; // 0x16f4 Return
	
Label_5877:
	var_353_bool = 0; // 0x16f5 MovB
	return 0; // 0x16f6 Return
}


func_4844(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x12ec PushV
	GetPosition(var_42_cvector); // 0x12ed ObjFunc
	GetPosition(var_43_cvector); // 0x12ef Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x12f1 Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0x12f2 PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0x12f3 PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0x12f4 Func
	var_36_bool = var_45_bool; // 0x12f6 Mov
	return 8; // 0x12f7 Return
}


func_5359()
{
	var_147_string = "KnowTermitnik"; // 0x14f0 PushS
	var_148_int = 1; // 0x14f1 PushI
	SetVariable(var_147_string, var_148_int); // 0x14f2 Func
	return 0; // 0x14f4 Return
}


func_5365(var_525_bool)
{
	var_527_int = 0; var_528_string = ""; // 0x14f6 PushV
	var_528_string = "KnowTheater"; // 0x14f7 MovS
	func_4956(var_527_int, var_528_string); // 0x14f8 Call
	var_529_int = 1; // 0x14fa PushI
	var_530_bool = var_527_int == var_529_int; // 0x14fb Eq
	if(var_530_bool == 0) goto Label_5375; // 0x14fc JumpB
	var_525_bool = 1; // 0x14fd MovB
	return 0; // 0x14fe Return
	
Label_5375:
	var_525_bool = 0; // 0x14ff MovB
	return 0; // 0x1500 Return
}


func_5879(var_212_bool)
{
	var_214_int = 0; // 0x16f8 PushV
	func_5013(var_214_int); // 0x16f9 Call
	var_219_int = 18; // 0x16fb PushI
	var_220_bool = var_214_int >= var_219_int; // 0x16fc GE
	if(var_220_bool == 0) goto Label_5888; // 0x16fd JumpB
	var_212_bool = 1; // 0x16fe MovB
	return 0; // 0x16ff Return
	
Label_5888:
	var_212_bool = 0; // 0x1700 MovB
	return 0; // 0x1701 Return
}


func_4856(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0; // 0x12f8 PushV
	IsLoaded(var_39_bool); // 0x12f9 Func
	var_37_bool = var_39_bool; // 0x12fb Mov
	return 2; // 0x12fc Return
}


func_4861(var_52_bool)
{
	var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0x12fd PushV
	GetPosition(var_63_cvector); // 0x12fe ObjFunc
	GetEyesHeight(var_62_float); // 0x1300 ObjFunc
	var_70_float = GetByIndex(var_63_cvector, 1); // 0x1302 PushE
	var_70_float = var_70_float + var_62_float; // 0x1303 Add2
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0x1304 PopE
	GetPosition(var_64_cvector); // 0x1305 Func
	GetEyesHeight(var_62_float); // 0x1307 Func
	var_71_float = GetByIndex(var_64_cvector, 1); // 0x1309 PushE
	var_71_float = var_71_float + var_62_float; // 0x130a Add2
	SetByIndex(var_64_cvector, 1) = var_71_float; // 0x130b PopE
	var_65_cvector = var_63_cvector - var_64_cvector; // 0x130c Sub2
	var_72_float = GetByIndex(var_65_cvector, 1); // 0x130d PushE
	var_72_float = 0; // 0x130e MovI
	SetByIndex(var_65_cvector, 1) = var_72_float; // 0x130f PopE
	var_73_int = var_65_cvector | var_65_cvector; // 0x1310 Or
	var_74_float = sqrt(var_73_int); // 0x1311 Sqrt
	var_65_cvector = var_65_cvector / var_65_cvector; // 0x1312 Div2
	var_66_cvector = -var_65_cvector; // 0x1313 Neg2
	var_75_int = 70; // 0x1314 PushI
	var_76_float = var_65_cvector * var_75_int; // 0x1315 Mult
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x1316 PushV
	var_79_cvector = CVector(0.0, 1.0, 0.0); // 0x1317 PushVec
	var_78_cvector = var_66_cvector ^ var_79_cvector; // 0x1318 Xor2
	func_4946(var_77_cvector, var_78_cvector); // 0x1319 Call
	var_85_int = 25; // 0x131b PushI
	var_86_float = var_77_cvector * var_85_int; // 0x131c Mult
	var_87_int = var_76_float + var_86_float; // 0x131d Add
	var_88_cvector = CVector(0.0, 10.0, 0.0); // 0x131e PushVec
	var_67_cvector = var_87_int - var_88_cvector; // 0x131f Sub2
	var_68_cvector = var_64_cvector + var_67_cvector; // 0x1320 Add2
	IsOverrideActive(var_69_bool); // 0x1321 Func
	var_89_bool = var_69_bool; // 0x1323 Push
	if(var_89_bool == 0) goto Label_4903; // 0x1324 JumpB
	var_52_bool = 0; // 0x1325 MovB
	return 16; // 0x1326 Return
	
Label_4903:
	StopWorld(); // 0x1327 Func
	CameraTransit(var_68_cvector, var_66_cvector); // 0x1329 Func
	var_90_float = GetByIndex(var_67_cvector, 0); // 0x132b PushE
	var_91_float = GetByIndex(var_67_cvector, 2); // 0x132c PushE
	Rotate(var_90_float, var_91_float); // 0x132d Func
	CameraWaitForPlayFinish(); // 0x132f Func
	ResumeWorld(); // 0x1331 Func
	var_52_bool = 1; // 0x1333 MovB
	return 16; // 0x1334 Return
}


func_5377(var_192_bool)
{
	var_194_int = 0; var_195_string = ""; // 0x1502 PushV
	var_195_string = "ood1Andrei1"; // 0x1503 MovS
	func_4956(var_194_int, var_195_string); // 0x1504 Call
	var_198_int = 0; // 0x1506 PushI
	var_199_bool = var_194_int == var_198_int; // 0x1507 Eq
	if(var_199_bool == 0) goto Label_5387; // 0x1508 JumpB
	var_192_bool = 1; // 0x1509 MovB
	return 0; // 0x150a Return
	
Label_5387:
	var_192_bool = 0; // 0x150b MovB
	return 0; // 0x150c Return
}


func_5890(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x1702 PushV
	GetDiaryRoot(var_62_object); // 0x1703 Func
	var_63_bool = var_62_object == 0; // 0x1705 Not
	if(var_63_bool == 0) goto Label_5900; // 0x1706 JumpB
	var_64_string = "Can't retrieve diary root"; // 0x1707 PushS
	Trace(var_64_string); // 0x1708 Func
	var_60_object = 0; // 0x170a MovB
	return 2; // 0x170b Return
	
Label_5900:
	var_60_object = var_62_object; // 0x170c Mov
	return 2; // 0x170d Return
}


func_5389(var_221_bool)
{
	var_223_int = 0; var_224_string = ""; // 0x150e PushV
	var_224_string = "ood1Andrei2"; // 0x150f MovS
	func_4956(var_223_int, var_224_string); // 0x1510 Call
	var_225_int = 0; // 0x1512 PushI
	var_226_bool = var_223_int == var_225_int; // 0x1513 Eq
	if(var_226_bool == 0) goto Label_5399; // 0x1514 JumpB
	var_221_bool = 1; // 0x1515 MovB
	return 0; // 0x1516 Return
	
Label_5399:
	var_221_bool = 0; // 0x1517 MovB
	return 0; // 0x1518 Return
}


func_4366(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x110f PushV
	func_5040(var_104_bool); // 0x1110 Call
	var_105_bool = var_104_bool == 0; // 0x1112 Not
	if(var_105_bool == 0) goto Label_4373; // 0x1113 JumpB
	return 0; // 0x1114 Return
	
Label_4373:
	var_106_bool = var_103_string == var_2_object; // 0x1115 Eq
	if(var_106_bool == 0) goto Label_4376; // 0x1116 JumpB
	return 0; // 0x1117 Return
	
Label_4376:
	var_107_string = ""; // 0x1118 PushV
	var_107_string = var_103_string; // 0x1119 Mov
	func_4921(var_107_string); // 0x111a Call
	var_2_object = var_103_string; // 0x111c TMov
	return 0; // 0x111d Return
}


func_5903(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; // 0x170f PushV
	var_60_object = Obj(); // 0x1710 PushV
	func_5890(var_60_object); // 0x1711 Call
	var_57_object = var_60_object; // 0x1712 Mov
	Find(var_53_int, var_58_object); // 0x1714 ObjFunc
	var_65_bool = var_58_object == 0; // 0x1716 Not
	if(var_65_bool == 0) goto Label_5918; // 0x1717 JumpB
	var_66_string = "Can't find diary parent with id: "; // 0x1718 PushS
	var_67_int = var_66_string + var_53_int; // 0x1719 Add
	Trace(var_67_int); // 0x171a Func
	var_51_bool = 0; // 0x171c MovB
	return 6; // 0x171d Return
	
Label_5918:
	AddChild(var_52_object); // 0x171e ObjFunc
	var_68_string = "player_diary"; // 0x1720 PushS
	var_69_int = 1; // 0x1721 PushI
	SetVariable(var_68_string, var_69_int); // 0x1722 Func
	GetCategory(var_59_int); // 0x1724 ObjFunc
	SetDiarySection(var_59_int); // 0x1726 Func
	var_51_bool = 0; // 0x1728 MovB
	return 6; // 0x1729 Return
}


func_5401(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x151a PushV
	var_203_string = "d1q01FirstGeorgVisit"; // 0x151b MovS
	func_4956(var_202_int, var_203_string); // 0x151c Call
	var_204_int = 1; // 0x151e PushI
	var_205_bool = var_202_int == var_204_int; // 0x151f Eq
	if(var_205_bool == 0) goto Label_5411; // 0x1520 JumpB
	var_200_bool = 1; // 0x1521 MovB
	return 0; // 0x1522 Return
	
Label_5411:
	var_200_bool = 0; // 0x1523 MovB
	return 0; // 0x1524 Return
}


func_5413(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x1526 PushV
	var_240_string = "ood1Andrei3"; // 0x1527 MovS
	func_4956(var_239_int, var_240_string); // 0x1528 Call
	var_241_int = 0; // 0x152a PushI
	var_242_bool = var_239_int == var_241_int; // 0x152b Eq
	if(var_242_bool == 0) goto Label_5423; // 0x152c JumpB
	var_237_bool = 1; // 0x152d MovB
	return 0; // 0x152e Return
	
Label_5423:
	var_237_bool = 0; // 0x152f MovB
	return 0; // 0x1530 Return
}


func_5932(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); // 0x172c PushV
	GetMainOutdoorScene(var_54_object); // 0x172d Func
	var_56_bool = var_54_object == 0; // 0x172f NullEq
	if(var_56_bool == 0) goto Label_5943; // 0x1730 JumpB
	var_57_string = "Can't find main outdoor scene"; // 0x1731 PushS
	Trace(var_57_string); // 0x1732 Func
	var_55_object = 0; // 0x1734 SetNull
	var_51_object = var_55_object; // 0x1735 Mov
	return 4; // 0x1736 Return
	
Label_5943:
	GetMap(var_55_object); // 0x1737 ObjFunc
	var_51_object = var_55_object; // 0x1739 Mov
	return 4; // 0x173a Return
}


func_5425(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0x1532 PushV
	var_256_string = "ood1Andrei4"; // 0x1533 MovS
	func_4956(var_255_int, var_256_string); // 0x1534 Call
	var_257_int = 0; // 0x1536 PushI
	var_258_bool = var_255_int == var_257_int; // 0x1537 Eq
	if(var_258_bool == 0) goto Label_5435; // 0x1538 JumpB
	var_253_bool = 1; // 0x1539 MovB
	return 0; // 0x153a Return
	
Label_5435:
	var_253_bool = 0; // 0x153b MovB
	return 0; // 0x153c Return
}


func_3892(var_0_object, var_591_int, var_592_object)
{
	var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; var_598_object = Obj(); var_599_bool = 0; var_600_int = 0; var_601_bool = 0; // 0xf34 PushV
	var_0_object = var_592_object; // 0xf35 TMov
	var_602_bool = 0; var_603_object = Obj(); // 0xf36 PushV
	var_603_object = var_592_object; // 0xf37 Mov
	func_4861(var_603_object); // 0xf38 Call
	var_604_bool = var_602_bool == 0; // 0xf3a Not
	if(var_604_bool == 0) goto Label_3902; // 0xf3b JumpB
	var_591_int = -2; // 0xf3c MovI
	return 8; // 0xf3d Return
	
Label_3902:
	CreateDialog(var_598_object); // 0xf3e Func
	var_605_int = 0; // 0xf40 PushV
	func_5036(var_605_int); // 0xf41 Call
	SetNPCName(var_605_int); // 0xf43 ObjFunc
	var_606_string = ""; // 0xf45 PushV
	func_5038(var_606_string); // 0xf46 Call
	SetPhoto(var_606_string); // 0xf48 ObjFunc
	var_607_int = 0; // 0xf4a PushV
	func_5982(var_607_int); // 0xf4b Call
	SetPlayerName(var_607_int); // 0xf4d ObjFunc
	var_600_int = -1; // 0xf4f MovI
	IsOverrideActive(var_599_bool); // 0xf50 Func
	var_608_bool = var_599_bool; // 0xf52 Push
	if(var_608_bool == 0) goto Label_3926; // 0xf53 JumpB
	var_591_int = -2; // 0xf54 MovI
	return 8; // 0xf55 Return
	
Label_3926:
	DoDialog(var_598_object); // 0xf56 Func
	var_609_object = Obj(); var_610_object = Obj(); // 0xf58 PushV
	var_609_object = var_592_object; // 0xf59 Mov
	var_610_object = var_598_object; // 0xf5a Mov
	TaskCall(13); // 0xf5b TaskCall
	func_3955(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object); // 0xf5c Call
	TaskReturn(); // 0xf5d TaskReturn
	IsDialogEnd(var_601_bool); // 0xf5f ObjFunc
	
Label_3937:
	var_664_bool = var_601_bool == 0; // 0xf61 Not
	if(var_664_bool == 0) goto Label_3944; // 0xf62 JumpB
	sync(); // 0xf63 Func
	IsDialogEnd(var_601_bool); // 0xf65 ObjFunc
	goto Label_3937; // 0xf67 Jump
	
Label_3944:
	var_665_object = Obj(); // 0xf68 PushV
	var_665_object = var_592_object; // 0xf69 Mov
	func_4917(); // 0xf6a Call
	StopDialog(var_598_object); // 0xf6c Func
	GetReturnValue(var_600_int); // 0xf6e ObjFunc
	var_591_int = var_600_int; // 0xf70 Mov
	return 8; // 0xf71 Return
}


func_4917()
{
	CameraSwitchToNormal(); // 0x1336 Func
	return 0; // 0x1338 Return
}


func_4921(var_41_string)
{
	var_42_float = 0; var_43_float = 0; var_44_float = 0; var_45_float = 0; // 0x1339 PushV
	var_46_string = "playing "; // 0x133a PushS
	var_47_int = var_46_string + var_41_string; // 0x133b Add
	Trace(var_47_int); // 0x133c Func
	lshGetAnimTimes(var_41_string, var_44_float, var_45_float); // 0x133e Func
	lshPlayAnimation(var_44_float, var_45_float); // 0x1340 Func
	var_48_string = "start: "; // 0x1342 PushS
	var_49_int = var_48_string + var_44_float; // 0x1343 Add
	Trace(var_49_int); // 0x1344 Func
	var_50_string = "end: "; // 0x1346 PushS
	var_51_int = var_50_string + var_45_float; // 0x1347 Add
	Trace(var_51_int); // 0x1348 Func
	return 4; // 0x134a Return
}


func_5437(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0x153e PushV
	var_272_string = "ood1Andrei5"; // 0x153f MovS
	func_4956(var_271_int, var_272_string); // 0x1540 Call
	var_273_int = 0; // 0x1542 PushI
	var_274_bool = var_271_int == var_273_int; // 0x1543 Eq
	if(var_274_bool == 0) goto Label_5447; // 0x1544 JumpB
	var_269_bool = 1; // 0x1545 MovB
	return 0; // 0x1546 Return
	
Label_5447:
	var_269_bool = 0; // 0x1547 MovB
	return 0; // 0x1548 Return
}


func_5949(var_97_object, var_98_string, var_99_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_object = Obj(); var_108_bool = 0; // 0x173d PushV
	GetMainOutdoorScene(var_107_object); // 0x173e Func
	var_109_bool = var_107_object == 0; // 0x1740 NullEq
	if(var_109_bool == 0) goto Label_5958; // 0x1741 JumpB
	var_110_string = "Can't find main outdoor scene"; // 0x1742 PushS
	Trace(var_110_string); // 0x1743 Func
	return 8; // 0x1745 Return
	
Label_5958:
	GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector); // 0x1746 ObjFunc
	var_111_bool = var_108_bool == 0; // 0x1748 Not
	if(var_111_bool == 0) goto Label_5968; // 0x1749 JumpB
	var_112_string = "Warning: outdoor scene locator "; // 0x174a PushS
	var_113_int = var_112_string + var_98_string; // 0x174b Add
	var_114_string = " doesnt exist"; // 0x174c PushS
	var_115_int = var_113_int + var_114_string; // 0x174d Add
	Trace(var_115_int); // 0x174e Func
	
Label_5968:
	GetMap(var_97_object); // 0x1750 ObjFunc
	var_116_bool = var_97_object == 0; // 0x1752 NullEq
	if(var_116_bool == 0) goto Label_5976; // 0x1753 JumpB
	var_117_string = "Can't find map"; // 0x1754 PushS
	Trace(var_117_string); // 0x1755 Func
	return 8; // 0x1757 Return
	
Label_5976:
	var_118_float = GetByIndex(var_105_cvector, 0); // 0x1758 PushE
	var_119_float = GetByIndex(var_105_cvector, 2); // 0x1759 PushE
	SetMapParams(var_118_float, var_119_float, var_99_float); // 0x175a ObjFunc
	return 8; // 0x175c Return
}


func_5449(var_285_bool)
{
	var_287_int = 0; var_288_string = ""; // 0x154a PushV
	var_288_string = "ood1Andrei6"; // 0x154b MovS
	func_4956(var_287_int, var_288_string); // 0x154c Call
	var_289_int = 0; // 0x154e PushI
	var_290_bool = var_287_int == var_289_int; // 0x154f Eq
	if(var_290_bool == 0) goto Label_5459; // 0x1550 JumpB
	var_285_bool = 1; // 0x1551 MovB
	return 0; // 0x1552 Return
	
Label_5459:
	var_285_bool = 0; // 0x1553 MovB
	return 0; // 0x1554 Return
}


func_4939()
{
	var_38_bool = 0; // 0x134b PushV
	func_5040(var_38_bool); // 0x134c Call
	if(var_38_bool == 0) goto Label_4945; // 0x134e JumpB
	lshStopSpeech(); // 0x134f Func
	
Label_4945:
	return 0; // 0x1351 Return
}


func_4946(var_77_cvector, var_78_cvector)
{
	var_80_float = 0; var_81_float = 0; // 0x1352 PushV
	var_82_int = var_78_cvector | var_78_cvector; // 0x1353 Or
	var_81_float = sqrt(var_82_int); // 0x1354 Sqrt2
	var_83_float = 0.0; // 0x1355 PushF
	var_84_bool = var_81_float < var_83_float; // 0x1356 LT
	if(var_84_bool == 0) goto Label_4954; // 0x1357 JumpB
	var_77_cvector = CVector(0.0, 0.0, 0.0); // 0x1358 MovV
	return 2; // 0x1359 Return
	
Label_4954:
	var_77_cvector = var_78_cvector / var_78_cvector; // 0x135a Div2
	return 2; // 0x135b Return
}


func_338(var_0_object, var_157_int, var_158_object)
{
	var_160_object = Obj(); var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; var_166_int = 0; var_167_bool = 0; // 0x152 PushV
	var_0_object = var_158_object; // 0x153 TMov
	var_168_bool = 0; var_169_object = Obj(); // 0x154 PushV
	var_169_object = var_158_object; // 0x155 Mov
	func_4861(var_169_object); // 0x156 Call
	var_170_bool = var_168_bool == 0; // 0x158 Not
	if(var_170_bool == 0) goto Label_348; // 0x159 JumpB
	var_157_int = -2; // 0x15a MovI
	return 8; // 0x15b Return
	
Label_348:
	CreateDialog(var_164_object); // 0x15c Func
	var_171_int = 0; // 0x15e PushV
	func_5036(var_171_int); // 0x15f Call
	SetNPCName(var_171_int); // 0x161 ObjFunc
	var_172_string = ""; // 0x163 PushV
	func_5038(var_172_string); // 0x164 Call
	SetPhoto(var_172_string); // 0x166 ObjFunc
	var_173_int = 0; // 0x168 PushV
	func_5982(var_173_int); // 0x169 Call
	SetPlayerName(var_173_int); // 0x16b ObjFunc
	var_166_int = -1; // 0x16d MovI
	IsOverrideActive(var_165_bool); // 0x16e Func
	var_174_bool = var_165_bool; // 0x170 Push
	if(var_174_bool == 0) goto Label_372; // 0x171 JumpB
	var_157_int = -2; // 0x172 MovI
	return 8; // 0x173 Return
	
Label_372:
	DoDialog(var_164_object); // 0x174 Func
	var_175_object = Obj(); var_176_object = Obj(); // 0x176 PushV
	var_175_object = var_158_object; // 0x177 Mov
	var_176_object = var_164_object; // 0x178 Mov
	TaskCall(5); // 0x179 TaskCall
	func_401(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object); // 0x17a Call
	TaskReturn(); // 0x17b TaskReturn
	IsDialogEnd(var_167_bool); // 0x17d ObjFunc
	
Label_383:
	var_334_bool = var_167_bool == 0; // 0x17f Not
	if(var_334_bool == 0) goto Label_390; // 0x180 JumpB
	sync(); // 0x181 Func
	IsDialogEnd(var_167_bool); // 0x183 ObjFunc
	goto Label_383; // 0x185 Jump
	
Label_390:
	var_335_object = Obj(); // 0x186 PushV
	var_335_object = var_158_object; // 0x187 Mov
	func_4917(); // 0x188 Call
	StopDialog(var_164_object); // 0x18a Func
	GetReturnValue(var_166_int); // 0x18c ObjFunc
	var_157_int = var_166_int; // 0x18e Mov
	return 8; // 0x18f Return
}


func_5461(var_301_bool)
{
	var_303_int = 0; var_304_string = ""; // 0x1556 PushV
	var_304_string = "ood1Andrei7"; // 0x1557 MovS
	func_4956(var_303_int, var_304_string); // 0x1558 Call
	var_305_int = 0; // 0x155a PushI
	var_306_bool = var_303_int == var_305_int; // 0x155b Eq
	if(var_306_bool == 0) goto Label_5471; // 0x155c JumpB
	var_301_bool = 1; // 0x155d MovB
	return 0; // 0x155e Return
	
Label_5471:
	var_301_bool = 0; // 0x155f MovB
	return 0; // 0x1560 Return
}


func_4956(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x135c PushV
	GetVariable(var_88_string, var_90_int); // 0x135d Func
	var_87_int = var_90_int; // 0x135f Mov
	return 2; // 0x1360 Return
}


func_5982(var_95_int)
{
	var_96_int = 0; var_97_int = 0; // 0x175e PushV
	var_98_string = "player"; // 0x175f PushS
	GetVariable(var_98_string, var_97_int); // 0x1760 Func
	var_99_int = 0; // 0x1762 PushI
	var_100_bool = var_97_int == var_99_int; // 0x1763 Eq
	if(var_100_bool == 0) goto Label_5992; // 0x1764 JumpB
	var_95_int = 200001; // 0x1765 MovI
	return 2; // 0x1766 Return
	
Label_5992:
	var_101_int = 1; // 0x1768 PushI
	var_102_bool = var_97_int == var_101_int; // 0x1769 Eq
	if(var_102_bool == 0) goto Label_5997; // 0x176a JumpB
	var_95_int = 200002; // 0x176b MovI
	return 2; // 0x176c Return
	
Label_5997:
	var_95_int = 200003; // 0x176d MovI
	return 2; // 0x176e Return
}


func_5473(var_317_bool)
{
	var_319_int = 0; var_320_string = ""; // 0x1562 PushV
	var_320_string = "ood1Andrei8"; // 0x1563 MovS
	func_4956(var_319_int, var_320_string); // 0x1564 Call
	var_321_int = 0; // 0x1566 PushI
	var_322_bool = var_319_int == var_321_int; // 0x1567 Eq
	if(var_322_bool == 0) goto Label_5483; // 0x1568 JumpB
	var_317_bool = 1; // 0x1569 MovB
	return 0; // 0x156a Return
	
Label_5483:
	var_317_bool = 0; // 0x156b MovB
	return 0; // 0x156c Return
}


func_4961(var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; // 0x1361 PushV
	GetItemID(var_55_int); // 0x1362 ObjFunc
	var_58_string = "Category"; // 0x1364 PushS
	GetInvItemProperty(var_56_int, var_55_int, var_58_string); // 0x1365 Func
	AddItem(var_57_bool, var_50_object, var_56_int, var_51_int); // 0x1367 ObjFunc
	var_59_bool = var_57_bool == 0; // 0x1369 Not
	if(var_59_bool == 0) goto Label_4973; // 0x136a JumpB
	DropItems(var_50_object, var_51_int); // 0x136b ObjFunc
	
Label_4973:
	return 6; // 0x136d Return
}


func_5485(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x156e PushV
	var_346_string = "KnowMat"; // 0x156f MovS
	func_4956(var_345_int, var_346_string); // 0x1570 Call
	var_347_int = 1; // 0x1572 PushI
	var_348_bool = var_345_int == var_347_int; // 0x1573 Eq
	if(var_348_bool == 0) goto Label_5495; // 0x1574 JumpB
	var_343_bool = 1; // 0x1575 MovB
	return 0; // 0x1576 Return
	
Label_5495:
	var_343_bool = 0; // 0x1577 MovB
	return 0; // 0x1578 Return
}


func_4974(var_44_object, var_45_string, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x136e PushV
	CreateInvItem(var_48_object); // 0x136f Func
	SetItemName(var_45_string); // 0x1371 ObjFunc
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x1373 PushV
	var_49_object = var_44_object; // 0x1374 Mov
	var_50_object = var_48_object; // 0x1375 Mov
	var_51_int = var_46_int; // 0x1376 Mov
	func_4961(var_50_object, var_51_int); // 0x1377 Call
	return 2; // 0x1379 Return
}


func_5999()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x176f PushV
	var_47_string = "Adding diary entry"; // 0x1770 PushS
	Trace(var_47_string); // 0x1771 Func
	var_48_int = 195; // 0x1773 PushI
	var_49_int = 1; // 0x1774 PushI
	var_50_int = 15480; // 0x1775 PushI
	CreateDiaryEntry(var_46_object, var_48_int, var_49_int, var_50_int); // 0x1776 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x1778 PushV
	var_52_object = var_46_object; // 0x1779 Mov
	var_53_int = 192; // 0x177a MovI
	func_5903(var_51_bool, var_52_object, var_53_int); // 0x177b Call
	return 2; // 0x177d Return
}


func_3955(var_0_object, var_1_object, var_2_object, var_3_object, var_609_object, var_610_object)
{
	var_0_object = var_610_object; // 0xf74 TMov
	var_1_object = var_609_object; // 0xf75 TMov
	var_3_object = 0; // 0xf76 TMovB
	var_615_int = 1; // 0xf77 PushI
	if(var_615_int == 0) goto Label_4023; // 0xf78 JumpB
	var_616_bool = 0; // 0xf79 PushV
	var_616_bool = 0; // 0xf7a MovB
	var_617_bool = 0; // 0xf7b PushV
	var_617_bool = 0; // 0xf7c MovB
	var_618_bool = 0; var_619_object = Obj(); // 0xf7d PushV
	var_619_object = var_1_object; // 0xf7e MovT
	func_5819(var_619_object); // 0xf7f Call
	var_624_bool = var_618_bool == 0; // 0xf81 Not
	if(var_624_bool == 0) goto Label_3978; // 0xf82 JumpB
	var_625_bool = 0; var_626_object = Obj(); // 0xf83 PushV
	var_626_object = var_1_object; // 0xf84 MovT
	func_5831(var_626_object); // 0xf85 Call
	var_631_bool = var_625_bool == 0; // 0xf87 Not
	if(var_631_bool == 0) goto Label_3978; // 0xf88 JumpB
	var_617_bool = 1; // 0xf89 MovB
	
Label_3978:
	if(var_617_bool == 0) goto Label_3985; // 0xf8a JumpB
	var_632_bool = 0; var_633_object = Obj(); // 0xf8b PushV
	var_633_object = var_1_object; // 0xf8c MovT
	func_5843(var_633_object); // 0xf8d Call
	if(var_632_bool == 0) goto Label_3985; // 0xf8f JumpB
	var_616_bool = 1; // 0xf90 MovB
	
Label_3985:
	if(var_616_bool == 0) goto Label_4006; // 0xf91 JumpB
	var_638_object = Obj(); var_639_object = Obj(); // 0xf92 PushV
	var_638_object = var_1_object; // 0xf93 MovT
	var_639_object = var_0_object; // 0xf94 MovT
	func_5353(); // 0xf95 Call
	var_642_string = ""; // 0xf97 PushV
	var_642_string = "Neutral"; // 0xf98 MovS
	func_4053(var_610_object, var_642_string); // 0xf99 Call
	var_647_int = 12960; // 0xf9b PushI
	SetMessage(var_647_int); // 0xf9c TObjFunc
	ClearReplies(); // 0xf9e TObjFunc
	var_648_int = 12961; // 0xfa0 PushI
	var_649_int = 14167; // 0xfa1 PushI
	var_650_int = 14166; // 0xfa2 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0xfa3 TObjFunc
	goto Label_4023; // 0xfa5 Jump
	
Label_4023:
	var_651_bool = 0; // 0xfb7 PushV
	func_5040(var_651_bool); // 0xfb8 Call
	if(var_651_bool == 0) goto Label_4038; // 0xfba JumpB
	
Label_4027:
	lshWaitForAnimEnd(); // 0xfbb Func
	var_652_object = var_3_object; // 0xfbd PushT
	if(var_652_object == 0) goto Label_4032; // 0xfbe JumpB
	goto Label_4037; // 0xfbf Jump
	
Label_4037:
	goto Label_4052; // 0xfc5 Jump
	
Label_4052:
	return 0; // 0xfd4 Return
	
Label_4032:
	var_653_string = ""; // 0xfc0 PushV
	var_653_string = var_2_object; // 0xfc1 MovT
	func_4921(var_653_string); // 0xfc2 Call
	goto Label_4027; // 0xfc4 Jump
	
Label_4038:
	var_654_string = "all"; // 0xfc6 PushS
	var_655_string = "idle"; // 0xfc7 PushS
	PlayAnimation(var_654_string, var_655_string); // 0xfc8 Func
	
Label_4042:
	WaitForAnimEnd(); // 0xfca Func
	var_656_object = var_3_object; // 0xfcc PushT
	if(var_656_object == 0) goto Label_4047; // 0xfcd JumpB
	goto Label_4052; // 0xfce Jump
	
Label_4047:
	var_657_string = "all"; // 0xfcf PushS
	var_658_string = "idle"; // 0xfd0 PushS
	PlayAnimation(var_657_string, var_658_string); // 0xfd1 Func
	goto Label_4042; // 0xfd3 Jump
	
Label_4006:
	var_659_string = ""; // 0xfa6 PushV
	var_659_string = "Neutral"; // 0xfa7 MovS
	func_4053(var_610_object, var_659_string); // 0xfa8 Call
	var_660_int = 12966; // 0xfaa PushI
	SetMessage(var_660_int); // 0xfab TObjFunc
	ClearReplies(); // 0xfad TObjFunc
	var_661_int = 12967; // 0xfaf PushI
	var_662_int = -1; // 0xfb0 PushI
	var_663_int = 14172; // 0xfb1 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0xfb2 TObjFunc
	goto Label_4023; // 0xfb4 Jump
}


func_5497(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x157a PushV
	var_276_string = "ood2Andrei1"; // 0x157b MovS
	func_4956(var_275_int, var_276_string); // 0x157c Call
	var_279_int = 0; // 0x157e PushI
	var_280_bool = var_275_int == var_279_int; // 0x157f Eq
	if(var_280_bool == 0) goto Label_5507; // 0x1580 JumpB
	var_273_bool = 1; // 0x1581 MovB
	return 0; // 0x1582 Return
	
Label_5507:
	var_273_bool = 0; // 0x1583 MovB
	return 0; // 0x1584 Return
}


func_4987(var_236_bool, var_237_string, var_238_string)
{
	var_239_object = Obj(); var_240_object = Obj(); // 0x137b PushV
	FindActor(var_240_object, var_237_string); // 0x137c Func
	var_241_bool = var_240_object == 0; // 0x137e NullEq
	if(var_241_bool == 0) goto Label_4994; // 0x137f JumpB
	var_236_bool = 0; // 0x1380 MovB
	return 2; // 0x1381 Return
	
Label_4994:
	Trigger(var_240_object, var_238_string); // 0x1382 Func
	var_236_bool = 1; // 0x1384 MovB
	return 2; // 0x1385 Return
}


func_6015()
{
	var_168_object = Obj(); var_169_object = Obj(); // 0x177f PushV
	var_170_string = "Adding diary entry"; // 0x1780 PushS
	Trace(var_170_string); // 0x1781 Func
	var_171_int = 59; // 0x1783 PushI
	var_172_int = 2; // 0x1784 PushI
	var_173_int = 12141; // 0x1785 PushI
	CreateDiaryEntry(var_169_object, var_171_int, var_172_int, var_173_int); // 0x1786 Func
	var_174_bool = 0; var_175_object = Obj(); var_176_int = 0; // 0x1788 PushV
	var_175_object = var_169_object; // 0x1789 Mov
	var_176_int = 11; // 0x178a MovI
	func_5903(var_174_bool, var_175_object, var_176_int); // 0x178b Call
	return 2; // 0x178d Return
}


func_5509(var_291_bool)
{
	var_293_int = 0; var_294_string = ""; // 0x1586 PushV
	var_294_string = "ood2Andrei2"; // 0x1587 MovS
	func_4956(var_293_int, var_294_string); // 0x1588 Call
	var_295_int = 0; // 0x158a PushI
	var_296_bool = var_293_int == var_295_int; // 0x158b Eq
	if(var_296_bool == 0) goto Label_5519; // 0x158c JumpB
	var_291_bool = 1; // 0x158d MovB
	return 0; // 0x158e Return
	
Label_5519:
	var_291_bool = 0; // 0x158f MovB
	return 0; // 0x1590 Return
}


func_4999(var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x1387 PushV
	GetGameTime(var_64_float); // 0x1388 Func
	var_62_float = var_64_float; // 0x138a Mov
	return 2; // 0x138b Return
}


func_5004(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x138c PushV
	GetGameTime(var_153_float); // 0x138d Func
	var_154_int = 1; // 0x138f PushI
	var_155_int = 0; // 0x1390 PushV
	var_156_int = 24; // 0x1391 PushI
	var_155_int = var_153_float / var_153_float; // 0x1392 Div2
	var_151_int = var_154_int + var_155_int; // 0x1393 Add2
	return 2; // 0x1394 Return
}


func_6031()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x178f PushV
	var_72_string = "Adding diary entry"; // 0x1790 PushS
	Trace(var_72_string); // 0x1791 Func
	var_73_int = 58; // 0x1793 PushI
	var_74_int = 2; // 0x1794 PushI
	var_75_int = 12140; // 0x1795 PushI
	CreateDiaryEntry(var_71_object, var_73_int, var_74_int, var_75_int); // 0x1796 Func
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; // 0x1798 PushV
	var_77_object = var_71_object; // 0x1799 Mov
	var_78_int = 11; // 0x179a MovI
	func_5903(var_76_bool, var_77_object, var_78_int); // 0x179b Call
	return 2; // 0x179d Return
}


func_401(var_0_object, var_1_object, var_2_object, var_3_object, var_175_object, var_176_object)
{
	var_0_object = var_176_object; // 0x192 TMov
	var_1_object = var_175_object; // 0x193 TMov
	var_3_object = 0; // 0x194 TMovB
	var_181_int = 1; // 0x195 PushI
	if(var_181_int == 0) goto Label_576; // 0x196 JumpB
	var_182_string = ""; // 0x197 PushV
	var_182_string = "Neutral"; // 0x198 MovS
	func_606(var_176_object, var_182_string); // 0x199 Call
	var_187_int = 6465; // 0x19b PushI
	SetMessage(var_187_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_188_bool = 0; // 0x1a0 PushV
	var_188_bool = 0; // 0x1a1 MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x1a2 PushV
	var_190_object = var_1_object; // 0x1a3 MovT
	func_5377(var_190_object); // 0x1a4 Call
	if(var_189_bool == 0) goto Label_429; // 0x1a6 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x1a7 PushV
	var_198_object = var_1_object; // 0x1a8 MovT
	func_5401(var_198_object); // 0x1a9 Call
	if(var_197_bool == 0) goto Label_429; // 0x1ab JumpB
	var_188_bool = 1; // 0x1ac MovB
	
Label_429:
	if(var_188_bool == 0) goto Label_435; // 0x1ad JumpB
	var_203_int = 6466; // 0x1ae PushI
	var_204_int = 6344; // 0x1af PushI
	var_205_int = 7129; // 0x1b0 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1b1 TObjFunc
	
Label_435:
	var_206_bool = 0; // 0x1b3 PushV
	var_206_bool = 0; // 0x1b4 MovB
	var_207_bool = 0; var_208_object = Obj(); // 0x1b5 PushV
	var_208_object = var_1_object; // 0x1b6 MovT
	func_5641(var_207_bool, var_208_object); // 0x1b7 Call
	if(var_207_bool == 0) goto Label_448; // 0x1b9 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x1ba PushV
	var_219_object = var_1_object; // 0x1bb MovT
	func_5389(var_219_object); // 0x1bc Call
	if(var_218_bool == 0) goto Label_448; // 0x1be JumpB
	var_206_bool = 1; // 0x1bf MovB
	
Label_448:
	if(var_206_bool == 0) goto Label_454; // 0x1c0 JumpB
	var_224_int = 6467; // 0x1c1 PushI
	var_225_int = 6336; // 0x1c2 PushI
	var_226_int = 7130; // 0x1c3 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1c4 TObjFunc
	
Label_454:
	var_227_bool = 0; // 0x1c6 PushV
	var_227_bool = 0; // 0x1c7 MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x1c8 PushV
	var_229_object = var_1_object; // 0x1c9 MovT
	func_5855(var_229_object); // 0x1ca Call
	if(var_228_bool == 0) goto Label_467; // 0x1cc JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x1cd PushV
	var_235_object = var_1_object; // 0x1ce MovT
	func_5413(var_235_object); // 0x1cf Call
	if(var_234_bool == 0) goto Label_467; // 0x1d1 JumpB
	var_227_bool = 1; // 0x1d2 MovB
	
Label_467:
	if(var_227_bool == 0) goto Label_473; // 0x1d3 JumpB
	var_240_int = 6470; // 0x1d4 PushI
	var_241_int = 7167; // 0x1d5 PushI
	var_242_int = 7133; // 0x1d6 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1d7 TObjFunc
	
Label_473:
	var_243_bool = 0; // 0x1d9 PushV
	var_243_bool = 0; // 0x1da MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x1db PushV
	var_245_object = var_1_object; // 0x1dc MovT
	func_5699(var_245_object); // 0x1dd Call
	if(var_244_bool == 0) goto Label_486; // 0x1df JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x1e0 PushV
	var_251_object = var_1_object; // 0x1e1 MovT
	func_5425(var_251_object); // 0x1e2 Call
	if(var_250_bool == 0) goto Label_486; // 0x1e4 JumpB
	var_243_bool = 1; // 0x1e5 MovB
	
Label_486:
	if(var_243_bool == 0) goto Label_492; // 0x1e6 JumpB
	var_256_int = 6471; // 0x1e7 PushI
	var_257_int = 7181; // 0x1e8 PushI
	var_258_int = 7134; // 0x1e9 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1ea TObjFunc
	
Label_492:
	var_259_bool = 0; // 0x1ec PushV
	var_259_bool = 0; // 0x1ed MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x1ee PushV
	var_261_object = var_1_object; // 0x1ef MovT
	func_5687(var_261_object); // 0x1f0 Call
	if(var_260_bool == 0) goto Label_505; // 0x1f2 JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x1f3 PushV
	var_267_object = var_1_object; // 0x1f4 MovT
	func_5437(var_267_object); // 0x1f5 Call
	if(var_266_bool == 0) goto Label_505; // 0x1f7 JumpB
	var_259_bool = 1; // 0x1f8 MovB
	
Label_505:
	if(var_259_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_272_int = 6474; // 0x1fa PushI
	var_273_int = 7191; // 0x1fb PushI
	var_274_int = 7137; // 0x1fc PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x1fd TObjFunc
	
Label_511:
	var_275_bool = 0; // 0x1ff PushV
	var_275_bool = 0; // 0x200 MovB
	var_276_bool = 0; var_277_object = Obj(); // 0x201 PushV
	var_277_object = var_1_object; // 0x202 MovT
	func_5795(var_277_object); // 0x203 Call
	if(var_276_bool == 0) goto Label_524; // 0x205 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x206 PushV
	var_283_object = var_1_object; // 0x207 MovT
	func_5449(var_283_object); // 0x208 Call
	if(var_282_bool == 0) goto Label_524; // 0x20a JumpB
	var_275_bool = 1; // 0x20b MovB
	
Label_524:
	if(var_275_bool == 0) goto Label_530; // 0x20c JumpB
	var_288_int = 6476; // 0x20d PushI
	var_289_int = 7206; // 0x20e PushI
	var_290_int = 7139; // 0x20f PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x210 TObjFunc
	
Label_530:
	var_291_bool = 0; // 0x212 PushV
	var_291_bool = 0; // 0x213 MovB
	var_292_bool = 0; var_293_object = Obj(); // 0x214 PushV
	var_293_object = var_1_object; // 0x215 MovT
	func_5617(var_293_object); // 0x216 Call
	if(var_292_bool == 0) goto Label_543; // 0x218 JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x219 PushV
	var_299_object = var_1_object; // 0x21a MovT
	func_5461(var_299_object); // 0x21b Call
	if(var_298_bool == 0) goto Label_543; // 0x21d JumpB
	var_291_bool = 1; // 0x21e MovB
	
Label_543:
	if(var_291_bool == 0) goto Label_549; // 0x21f JumpB
	var_304_int = 6481; // 0x220 PushI
	var_305_int = 7220; // 0x221 PushI
	var_306_int = 7144; // 0x222 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x223 TObjFunc
	
Label_549:
	var_307_bool = 0; // 0x225 PushV
	var_307_bool = 0; // 0x226 MovB
	var_308_bool = 0; var_309_object = Obj(); // 0x227 PushV
	var_309_object = var_1_object; // 0x228 MovT
	func_5783(var_309_object); // 0x229 Call
	if(var_308_bool == 0) goto Label_562; // 0x22b JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x22c PushV
	var_315_object = var_1_object; // 0x22d MovT
	func_5473(var_315_object); // 0x22e Call
	if(var_314_bool == 0) goto Label_562; // 0x230 JumpB
	var_307_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_307_bool == 0) goto Label_568; // 0x232 JumpB
	var_320_int = 6488; // 0x233 PushI
	var_321_int = 7241; // 0x234 PushI
	var_322_int = 7151; // 0x235 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x236 TObjFunc
	
Label_568:
	var_323_int = 6502; // 0x238 PushI
	var_324_int = -1; // 0x239 PushI
	var_325_int = 7166; // 0x23a PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x23b TObjFunc
	goto Label_576; // 0x23d Jump
	
Label_576:
	var_326_bool = 0; // 0x240 PushV
	func_5040(var_326_bool); // 0x241 Call
	if(var_326_bool == 0) goto Label_591; // 0x243 JumpB
	
Label_580:
	lshWaitForAnimEnd(); // 0x244 Func
	var_327_object = var_3_object; // 0x246 PushT
	if(var_327_object == 0) goto Label_585; // 0x247 JumpB
	goto Label_590; // 0x248 Jump
	
Label_590:
	goto Label_605; // 0x24e Jump
	
Label_605:
	return 0; // 0x25d Return
	
Label_585:
	var_328_string = ""; // 0x249 PushV
	var_328_string = var_2_object; // 0x24a MovT
	func_4921(var_328_string); // 0x24b Call
	goto Label_580; // 0x24d Jump
	
Label_591:
	var_329_string = "all"; // 0x24f PushS
	var_330_string = "idle"; // 0x250 PushS
	PlayAnimation(var_329_string, var_330_string); // 0x251 Func
	
Label_595:
	WaitForAnimEnd(); // 0x253 Func
	var_331_object = var_3_object; // 0x255 PushT
	if(var_331_object == 0) goto Label_600; // 0x256 JumpB
	goto Label_605; // 0x257 Jump
	
Label_600:
	var_332_string = "all"; // 0x258 PushS
	var_333_string = "idle"; // 0x259 PushS
	PlayAnimation(var_332_string, var_333_string); // 0x25a Func
	goto Label_595; // 0x25c Jump
}


func_5521(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0x1592 PushV
	var_310_string = "ood2Andrei3"; // 0x1593 MovS
	func_4956(var_309_int, var_310_string); // 0x1594 Call
	var_311_int = 0; // 0x1596 PushI
	var_312_bool = var_309_int == var_311_int; // 0x1597 Eq
	if(var_312_bool == 0) goto Label_5531; // 0x1598 JumpB
	var_307_bool = 1; // 0x1599 MovB
	return 0; // 0x159a Return
	
Label_5531:
	var_307_bool = 0; // 0x159b MovB
	return 0; // 0x159c Return
}


func_5013(var_214_int)
{
	var_215_float = 0; var_216_float = 0; // 0x1395 PushV
	GetGameTime(var_216_float); // 0x1396 Func
	var_217_int = 0; // 0x1398 PushV
	var_217_int = var_216_float; // 0x1399 Mov
	var_218_int = 24; // 0x139a PushI
	var_214_int = var_217_int % var_218_int; // 0x139b Mod2
	return 2; // 0x139c Return
}


func_5533(var_323_bool)
{
	var_325_int = 0; var_326_string = ""; // 0x159e PushV
	var_326_string = "ood2Andrei4"; // 0x159f MovS
	func_4956(var_325_int, var_326_string); // 0x15a0 Call
	var_327_int = 0; // 0x15a2 PushI
	var_328_bool = var_325_int == var_327_int; // 0x15a3 Eq
	if(var_328_bool == 0) goto Label_5543; // 0x15a4 JumpB
	var_323_bool = 1; // 0x15a5 MovB
	return 0; // 0x15a6 Return
	
Label_5543:
	var_323_bool = 0; // 0x15a7 MovB
	return 0; // 0x15a8 Return
}


func_5021(var_149_bool, var_150_int)
{
	var_151_int = 0; // 0x139e PushV
	func_5004(var_151_int); // 0x139f Call
	var_149_bool = var_151_int == var_150_int; // 0x13a1 Eq2
	return 0; // 0x13a2 Return
}


func_6047()
{
	var_227_object = Obj(); var_228_object = Obj(); // 0x179f PushV
	var_229_string = "Adding diary entry"; // 0x17a0 PushS
	Trace(var_229_string); // 0x17a1 Func
	var_230_int = 60; // 0x17a3 PushI
	var_231_int = 2; // 0x17a4 PushI
	var_232_int = 12142; // 0x17a5 PushI
	CreateDiaryEntry(var_228_object, var_230_int, var_231_int, var_232_int); // 0x17a6 Func
	var_233_bool = 0; var_234_object = Obj(); var_235_int = 0; // 0x17a8 PushV
	var_234_object = var_228_object; // 0x17a9 Mov
	var_235_int = 11; // 0x17aa MovI
	func_5903(var_233_bool, var_234_object, var_235_int); // 0x17ab Call
	return 2; // 0x17ad Return
}


func_5027(var_759_bool)
{
	var_760_bool = 0; var_761_bool = 0; // 0x13a3 PushV
	var_762_string = ""; // 0x13a4 PushV
	var_762_string = "No"; // 0x13a5 MovS
	func_4921(var_762_string); // 0x13a6 Call
	lshWaitForAnimEnd(var_761_bool); // 0x13a8 Func
	var_759_bool = var_761_bool; // 0x13aa Mov
	return 2; // 0x13ab Return
}


func_1956(var_0_object, var_338_int, var_339_object)
{
	var_341_object = Obj(); var_342_bool = 0; var_343_int = 0; var_344_bool = 0; var_345_object = Obj(); var_346_bool = 0; var_347_int = 0; var_348_bool = 0; // 0x7a4 PushV
	var_0_object = var_339_object; // 0x7a5 TMov
	var_349_bool = 0; var_350_object = Obj(); // 0x7a6 PushV
	var_350_object = var_339_object; // 0x7a7 Mov
	func_4861(var_350_object); // 0x7a8 Call
	var_351_bool = var_349_bool == 0; // 0x7aa Not
	if(var_351_bool == 0) goto Label_1966; // 0x7ab JumpB
	var_338_int = -2; // 0x7ac MovI
	return 8; // 0x7ad Return
	
Label_1966:
	CreateDialog(var_345_object); // 0x7ae Func
	var_352_int = 0; // 0x7b0 PushV
	func_5036(var_352_int); // 0x7b1 Call
	SetNPCName(var_352_int); // 0x7b3 ObjFunc
	var_353_string = ""; // 0x7b5 PushV
	func_5038(var_353_string); // 0x7b6 Call
	SetPhoto(var_353_string); // 0x7b8 ObjFunc
	var_354_int = 0; // 0x7ba PushV
	func_5982(var_354_int); // 0x7bb Call
	SetPlayerName(var_354_int); // 0x7bd ObjFunc
	var_347_int = -1; // 0x7bf MovI
	IsOverrideActive(var_346_bool); // 0x7c0 Func
	var_355_bool = var_346_bool; // 0x7c2 Push
	if(var_355_bool == 0) goto Label_1990; // 0x7c3 JumpB
	var_338_int = -2; // 0x7c4 MovI
	return 8; // 0x7c5 Return
	
Label_1990:
	DoDialog(var_345_object); // 0x7c6 Func
	var_356_object = Obj(); var_357_object = Obj(); // 0x7c8 PushV
	var_356_object = var_339_object; // 0x7c9 Mov
	var_357_object = var_345_object; // 0x7ca Mov
	TaskCall(7); // 0x7cb TaskCall
	func_2019(var_358_object, var_359_object, var_360_string, var_361_bool, var_356_object, var_357_object); // 0x7cc Call
	TaskReturn(); // 0x7cd TaskReturn
	IsDialogEnd(var_348_bool); // 0x7cf ObjFunc
	
Label_2001:
	var_460_bool = var_348_bool == 0; // 0x7d1 Not
	if(var_460_bool == 0) goto Label_2008; // 0x7d2 JumpB
	sync(); // 0x7d3 Func
	IsDialogEnd(var_348_bool); // 0x7d5 ObjFunc
	goto Label_2001; // 0x7d7 Jump
	
Label_2008:
	var_461_object = Obj(); // 0x7d8 PushV
	var_461_object = var_339_object; // 0x7d9 Mov
	func_4917(); // 0x7da Call
	StopDialog(var_345_object); // 0x7dc Func
	GetReturnValue(var_347_int); // 0x7de ObjFunc
	var_338_int = var_347_int; // 0x7e0 Mov
	return 8; // 0x7e1 Return
}


func_5545(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0x15aa PushV
	var_342_string = "ood2Andrei5"; // 0x15ab MovS
	func_4956(var_341_int, var_342_string); // 0x15ac Call
	var_343_int = 0; // 0x15ae PushI
	var_344_bool = var_341_int == var_343_int; // 0x15af Eq
	if(var_344_bool == 0) goto Label_5555; // 0x15b0 JumpB
	var_339_bool = 1; // 0x15b1 MovB
	return 0; // 0x15b2 Return
	
Label_5555:
	var_339_bool = 0; // 0x15b3 MovB
	return 0; // 0x15b4 Return
}


func_5036(var_93_int)
{
	var_93_int = 2855; // 0x13ac MovI
	return 0; // 0x13ad Return
}


func_5038(var_94_string)
{
	var_94_string = "ui/NPC_Andrei.png"; // 0x13ae MovS
	return 0; // 0x13af Return
}


func_6063()
{
	var_35_string = "mt_andrei"; // 0x17af PushS
	var_36_int = 0; // 0x17b0 PushI
	SetVariable(var_35_string, var_36_int); // 0x17b1 Func
	return 0; // 0x17b3 Return
}


func_5040(var_38_bool)
{
	var_38_bool = 1; // 0x13b0 MovB
	return 0; // 0x13b1 Return
}


func_5042()
{
	var_43_string = "ood1Andrei1"; // 0x13b3 PushS
	var_44_int = 1; // 0x13b4 PushI
	SetVariable(var_43_string, var_44_int); // 0x13b5 Func
	return 0; // 0x13b7 Return
}


func_6068(var_36_object)
{
	var_37_int = 0; var_38_int = 0; // 0x17b4 PushV
	var_39_string = "mt_andrei"; // 0x17b5 PushS
	GetVariable(var_39_string, var_38_int); // 0x17b6 Func
	var_40_bool = var_38_int == 0; // 0x17b8 Not
	if(var_40_bool == 0) goto Label_6084; // 0x17b9 JumpB
	var_41_int = 0; var_42_object = Obj(); // 0x17ba PushV
	var_42_object = var_36_object; // 0x17bb Mov
	TaskCall(2); // 0x17bc TaskCall
	func_49(var_43_object, var_41_int, var_42_object); // 0x17bd Call
	TaskReturn(); // 0x17be TaskReturn
	var_147_string = "mt_andrei"; // 0x17c0 PushS
	var_148_int = 1; // 0x17c1 PushI
	SetVariable(var_147_string, var_148_int); // 0x17c2 Func
	
Label_6084:
	var_149_bool = 0; var_150_int = 0; // 0x17c4 PushV
	var_150_int = 1; // 0x17c5 MovI
	func_5021(var_149_bool, var_150_int); // 0x17c6 Call
	if(var_149_bool == 0) goto Label_6096; // 0x17c8 JumpB
	var_157_int = 0; var_158_object = Obj(); // 0x17c9 PushV
	var_158_object = var_36_object; // 0x17ca Mov
	TaskCall(4); // 0x17cb TaskCall
	func_338(var_159_object, var_157_int, var_158_object); // 0x17cc Call
	TaskReturn(); // 0x17cd TaskReturn
	return 2; // 0x17cf Return
	
Label_6096:
	var_336_bool = 0; var_337_int = 0; // 0x17d0 PushV
	var_337_int = 2; // 0x17d1 MovI
	func_5021(var_336_bool, var_337_int); // 0x17d2 Call
	if(var_336_bool == 0) goto Label_6108; // 0x17d4 JumpB
	var_338_int = 0; var_339_object = Obj(); // 0x17d5 PushV
	var_339_object = var_36_object; // 0x17d6 Mov
	TaskCall(6); // 0x17d7 TaskCall
	func_1956(var_340_object, var_338_int, var_339_object); // 0x17d8 Call
	TaskReturn(); // 0x17d9 TaskReturn
	return 2; // 0x17db Return
	
Label_6108:
	var_462_bool = 0; var_463_int = 0; // 0x17dc PushV
	var_463_int = 3; // 0x17dd MovI
	func_5021(var_462_bool, var_463_int); // 0x17de Call
	if(var_462_bool == 0) goto Label_6120; // 0x17e0 JumpB
	var_464_int = 0; var_465_object = Obj(); // 0x17e1 PushV
	var_465_object = var_36_object; // 0x17e2 Mov
	TaskCall(8); // 0x17e3 TaskCall
	func_3095(var_466_object, var_464_int, var_465_object); // 0x17e4 Call
	TaskReturn(); // 0x17e5 TaskReturn
	return 2; // 0x17e7 Return
	
Label_6120:
	var_534_bool = 0; var_535_int = 0; // 0x17e8 PushV
	var_535_int = 6; // 0x17e9 MovI
	func_5021(var_534_bool, var_535_int); // 0x17ea Call
	if(var_534_bool == 0) goto Label_6132; // 0x17ec JumpB
	var_536_int = 0; var_537_object = Obj(); // 0x17ed PushV
	var_537_object = var_36_object; // 0x17ee Mov
	TaskCall(10); // 0x17ef TaskCall
	func_3523(var_538_object, var_536_int, var_537_object); // 0x17f0 Call
	TaskReturn(); // 0x17f1 TaskReturn
	return 2; // 0x17f3 Return
	
Label_6132:
	var_589_bool = 0; var_590_int = 0; // 0x17f4 PushV
	var_590_int = 10; // 0x17f5 MovI
	func_5021(var_589_bool, var_590_int); // 0x17f6 Call
	if(var_589_bool == 0) goto Label_6144; // 0x17f8 JumpB
	var_591_int = 0; var_592_object = Obj(); // 0x17f9 PushV
	var_592_object = var_36_object; // 0x17fa Mov
	TaskCall(12); // 0x17fb TaskCall
	func_3892(var_593_object, var_591_int, var_592_object); // 0x17fc Call
	TaskReturn(); // 0x17fd TaskReturn
	return 2; // 0x17ff Return
	
Label_6144:
	var_666_bool = 0; var_667_int = 0; // 0x1800 PushV
	var_667_int = 11; // 0x1801 MovI
	func_5021(var_666_bool, var_667_int); // 0x1802 Call
	if(var_666_bool == 0) goto Label_6156; // 0x1804 JumpB
	var_668_int = 0; var_669_object = Obj(); // 0x1805 PushV
	var_669_object = var_36_object; // 0x1806 Mov
	TaskCall(14); // 0x1807 TaskCall
	func_4187(var_670_object, var_668_int, var_669_object); // 0x1808 Call
	TaskReturn(); // 0x1809 TaskReturn
	return 2; // 0x180b Return
	
Label_6156:
	var_759_bool = 0; // 0x180c PushV
	func_5027(var_759_bool); // 0x180d Call
	return 2; // 0x180f Return
}


func_5557(var_345_bool)
{
	var_347_int = 0; var_348_string = ""; // 0x15b6 PushV
	var_348_string = "d2q02"; // 0x15b7 MovS
	func_4956(var_347_int, var_348_string); // 0x15b8 Call
	var_349_int = 1000; // 0x15ba PushI
	var_350_bool = var_347_int == var_349_int; // 0x15bb Eq
	if(var_350_bool == 0) goto Label_5567; // 0x15bc JumpB
	var_345_bool = 1; // 0x15bd MovB
	return 0; // 0x15be Return
	
Label_5567:
	var_345_bool = 0; // 0x15bf MovB
	return 0; // 0x15c0 Return
}


func_5048()
{
	var_57_string = "ood1Andrei2"; // 0x13b9 PushS
	var_58_int = 1; // 0x13ba PushI
	SetVariable(var_57_string, var_58_int); // 0x13bb Func
	return 0; // 0x13bd Return
}


func_5054(var_184_object)
{
	var_186_string = "money1000 is given"; // 0x13bf PushS
	Trace(var_186_string); // 0x13c0 Func
	var_187_object = Obj(); var_188_string = ""; var_189_int = 0; // 0x13c2 PushV
	var_187_object = var_184_object; // 0x13c3 Mov
	var_188_string = "money"; // 0x13c4 MovS
	var_189_int = 1000; // 0x13c5 MovI
	func_4837(var_188_string, var_189_int); // 0x13c6 Call
	return 0; // 0x13c8 Return
}


func_5569(var_281_bool)
{
	var_283_int = 0; var_284_string = ""; // 0x15c2 PushV
	var_284_string = "d2q02"; // 0x15c3 MovS
	func_4956(var_283_int, var_284_string); // 0x15c4 Call
	var_285_int = 1; // 0x15c6 PushI
	var_286_bool = var_283_int == var_285_int; // 0x15c7 Eq
	if(var_286_bool == 0) goto Label_5579; // 0x15c8 JumpB
	var_281_bool = 1; // 0x15c9 MovB
	return 0; // 0x15ca Return
	
Label_5579:
	var_281_bool = 0; // 0x15cb MovB
	return 0; // 0x15cc Return
}


func_3523(var_0_object, var_536_int, var_537_object)
{
	var_539_object = Obj(); var_540_bool = 0; var_541_int = 0; var_542_bool = 0; var_543_object = Obj(); var_544_bool = 0; var_545_int = 0; var_546_bool = 0; // 0xdc3 PushV
	var_0_object = var_537_object; // 0xdc4 TMov
	var_547_bool = 0; var_548_object = Obj(); // 0xdc5 PushV
	var_548_object = var_537_object; // 0xdc6 Mov
	func_4861(var_548_object); // 0xdc7 Call
	var_549_bool = var_547_bool == 0; // 0xdc9 Not
	if(var_549_bool == 0) goto Label_3533; // 0xdca JumpB
	var_536_int = -2; // 0xdcb MovI
	return 8; // 0xdcc Return
	
Label_3533:
	CreateDialog(var_543_object); // 0xdcd Func
	var_550_int = 0; // 0xdcf PushV
	func_5036(var_550_int); // 0xdd0 Call
	SetNPCName(var_550_int); // 0xdd2 ObjFunc
	var_551_string = ""; // 0xdd4 PushV
	func_5038(var_551_string); // 0xdd5 Call
	SetPhoto(var_551_string); // 0xdd7 ObjFunc
	var_552_int = 0; // 0xdd9 PushV
	func_5982(var_552_int); // 0xdda Call
	SetPlayerName(var_552_int); // 0xddc ObjFunc
	var_545_int = -1; // 0xdde MovI
	IsOverrideActive(var_544_bool); // 0xddf Func
	var_553_bool = var_544_bool; // 0xde1 Push
	if(var_553_bool == 0) goto Label_3557; // 0xde2 JumpB
	var_536_int = -2; // 0xde3 MovI
	return 8; // 0xde4 Return
	
Label_3557:
	DoDialog(var_543_object); // 0xde5 Func
	var_554_object = Obj(); var_555_object = Obj(); // 0xde7 PushV
	var_554_object = var_537_object; // 0xde8 Mov
	var_555_object = var_543_object; // 0xde9 Mov
	TaskCall(11); // 0xdea TaskCall
	func_3586(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object); // 0xdeb Call
	TaskReturn(); // 0xdec TaskReturn
	IsDialogEnd(var_546_bool); // 0xdee ObjFunc
	
Label_3568:
	var_587_bool = var_546_bool == 0; // 0xdf0 Not
	if(var_587_bool == 0) goto Label_3575; // 0xdf1 JumpB
	sync(); // 0xdf2 Func
	IsDialogEnd(var_546_bool); // 0xdf4 ObjFunc
	goto Label_3568; // 0xdf6 Jump
	
Label_3575:
	var_588_object = Obj(); // 0xdf7 PushV
	var_588_object = var_537_object; // 0xdf8 Mov
	func_4917(); // 0xdf9 Call
	StopDialog(var_543_object); // 0xdfb Func
	GetReturnValue(var_545_int); // 0xdfd ObjFunc
	var_536_int = var_545_int; // 0xdff Mov
	return 8; // 0xe00 Return
}


func_5065()
{
	var_195_string = "playsound"; // 0x13ca PushS
	var_196_string = "givemoney"; // 0x13cb PushS
	TriggerWorld(var_195_string, var_196_string); // 0x13cc Func
	return 0; // 0x13ce Return
}


func_5581(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x15ce PushV
	var_300_string = "d2q02"; // 0x15cf MovS
	func_4956(var_299_int, var_300_string); // 0x15d0 Call
	var_301_int = 3; // 0x15d2 PushI
	var_302_bool = var_299_int == var_301_int; // 0x15d3 Eq
	if(var_302_bool == 0) goto Label_5591; // 0x15d4 JumpB
	var_297_bool = 1; // 0x15d5 MovB
	return 0; // 0x15d6 Return
	
Label_5591:
	var_297_bool = 0; // 0x15d7 MovB
	return 0; // 0x15d8 Return
}


func_5071()
{
	var_62_string = "playsound"; // 0x13d0 PushS
	var_63_string = "giveitem"; // 0x13d1 PushS
	TriggerWorld(var_62_string, var_63_string); // 0x13d2 Func
	return 0; // 0x13d4 Return
}


func_5077()
{
	var_79_string = "ood1Andrei3"; // 0x13d6 PushS
	var_80_int = 1; // 0x13d7 PushI
	SetVariable(var_79_string, var_80_int); // 0x13d8 Func
	return 0; // 0x13da Return
}


func_4053(var_2_object, var_69_string)
{
	var_70_bool = 0; // 0xfd6 PushV
	func_5040(var_70_bool); // 0xfd7 Call
	var_71_bool = var_70_bool == 0; // 0xfd9 Not
	if(var_71_bool == 0) goto Label_4060; // 0xfda JumpB
	return 0; // 0xfdb Return
	
Label_4060:
	var_72_bool = var_69_string == var_2_object; // 0xfdc Eq
	if(var_72_bool == 0) goto Label_4063; // 0xfdd JumpB
	return 0; // 0xfde Return
	
Label_4063:
	var_73_string = ""; // 0xfdf PushV
	var_73_string = var_69_string; // 0xfe0 Mov
	func_4921(var_73_string); // 0xfe1 Call
	var_2_object = var_69_string; // 0xfe3 TMov
	return 0; // 0xfe4 Return
}


func_5593(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0x15da PushV
	var_316_string = "d2q02"; // 0x15db MovS
	func_4956(var_315_int, var_316_string); // 0x15dc Call
	var_317_int = 5; // 0x15de PushI
	var_318_bool = var_315_int == var_317_int; // 0x15df Eq
	if(var_318_bool == 0) goto Label_5603; // 0x15e0 JumpB
	var_313_bool = 1; // 0x15e1 MovB
	return 0; // 0x15e2 Return
	
Label_5603:
	var_313_bool = 0; // 0x15e3 MovB
	return 0; // 0x15e4 Return
}


func_5083()
{
	var_93_string = "ood1Andrei4"; // 0x13dc PushS
	var_94_int = 1; // 0x13dd PushI
	SetVariable(var_93_string, var_94_int); // 0x13de Func
	return 0; // 0x13e0 Return
}


func_5089()
{
	var_99_string = "ood1Andrei5"; // 0x13e2 PushS
	var_100_int = 1; // 0x13e3 PushI
	SetVariable(var_99_string, var_100_int); // 0x13e4 Func
	return 0; // 0x13e6 Return
}


func_2019(var_0_object, var_1_object, var_2_object, var_3_object, var_356_object, var_357_object)
{
	var_0_object = var_357_object; // 0x7e4 TMov
	var_1_object = var_356_object; // 0x7e5 TMov
	var_3_object = 0; // 0x7e6 TMovB
	var_362_int = 1; // 0x7e7 PushI
	if(var_362_int == 0) goto Label_2157; // 0x7e8 JumpB
	var_363_string = ""; // 0x7e9 PushV
	var_363_string = "Neutral"; // 0x7ea MovS
	func_2187(var_357_object, var_363_string); // 0x7eb Call
	var_368_int = 6864; // 0x7ed PushI
	SetMessage(var_368_int); // 0x7ee TObjFunc
	ClearReplies(); // 0x7f0 TObjFunc
	var_369_bool = 0; // 0x7f2 PushV
	var_369_bool = 0; // 0x7f3 MovB
	var_370_bool = 0; var_371_object = Obj(); // 0x7f4 PushV
	var_371_object = var_1_object; // 0x7f5 MovT
	func_5497(var_371_object); // 0x7f6 Call
	if(var_370_bool == 0) goto Label_2047; // 0x7f8 JumpB
	var_376_bool = 0; var_377_object = Obj(); // 0x7f9 PushV
	var_377_object = var_1_object; // 0x7fa MovT
	func_5569(var_377_object); // 0x7fb Call
	if(var_376_bool == 0) goto Label_2047; // 0x7fd JumpB
	var_369_bool = 1; // 0x7fe MovB
	
Label_2047:
	if(var_369_bool == 0) goto Label_2053; // 0x7ff JumpB
	var_382_int = 6865; // 0x800 PushI
	var_383_int = 7572; // 0x801 PushI
	var_384_int = 7571; // 0x802 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x803 TObjFunc
	
Label_2053:
	var_385_bool = 0; // 0x805 PushV
	var_385_bool = 0; // 0x806 MovB
	var_386_bool = 0; var_387_object = Obj(); // 0x807 PushV
	var_387_object = var_1_object; // 0x808 MovT
	func_5509(var_387_object); // 0x809 Call
	if(var_386_bool == 0) goto Label_2066; // 0x80b JumpB
	var_392_bool = 0; var_393_object = Obj(); // 0x80c PushV
	var_393_object = var_1_object; // 0x80d MovT
	func_5581(var_393_object); // 0x80e Call
	if(var_392_bool == 0) goto Label_2066; // 0x810 JumpB
	var_385_bool = 1; // 0x811 MovB
	
Label_2066:
	if(var_385_bool == 0) goto Label_2072; // 0x812 JumpB
	var_398_int = 6868; // 0x813 PushI
	var_399_int = 7575; // 0x814 PushI
	var_400_int = 7574; // 0x815 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x816 TObjFunc
	
Label_2072:
	var_401_bool = 0; // 0x818 PushV
	var_401_bool = 0; // 0x819 MovB
	var_402_bool = 0; var_403_object = Obj(); // 0x81a PushV
	var_403_object = var_1_object; // 0x81b MovT
	func_5521(var_403_object); // 0x81c Call
	if(var_402_bool == 0) goto Label_2085; // 0x81e JumpB
	var_408_bool = 0; var_409_object = Obj(); // 0x81f PushV
	var_409_object = var_1_object; // 0x820 MovT
	func_5593(var_409_object); // 0x821 Call
	if(var_408_bool == 0) goto Label_2085; // 0x823 JumpB
	var_401_bool = 1; // 0x824 MovB
	
Label_2085:
	if(var_401_bool == 0) goto Label_2091; // 0x825 JumpB
	var_414_int = 6870; // 0x826 PushI
	var_415_int = 7577; // 0x827 PushI
	var_416_int = 7576; // 0x828 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x829 TObjFunc
	
Label_2091:
	var_417_bool = 0; // 0x82b PushV
	var_417_bool = 0; // 0x82c MovB
	var_418_bool = 0; var_419_object = Obj(); // 0x82d PushV
	var_419_object = var_1_object; // 0x82e MovT
	func_5533(var_419_object); // 0x82f Call
	if(var_418_bool == 0) goto Label_2104; // 0x831 JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x832 PushV
	var_425_object = var_1_object; // 0x833 MovT
	func_5605(var_425_object); // 0x834 Call
	if(var_424_bool == 0) goto Label_2104; // 0x836 JumpB
	var_417_bool = 1; // 0x837 MovB
	
Label_2104:
	if(var_417_bool == 0) goto Label_2110; // 0x838 JumpB
	var_430_int = 6874; // 0x839 PushI
	var_431_int = 7581; // 0x83a PushI
	var_432_int = 7580; // 0x83b PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x83c TObjFunc
	
Label_2110:
	var_433_bool = 0; // 0x83e PushV
	var_433_bool = 0; // 0x83f MovB
	var_434_bool = 0; var_435_object = Obj(); // 0x840 PushV
	var_435_object = var_1_object; // 0x841 MovT
	func_5545(var_435_object); // 0x842 Call
	if(var_434_bool == 0) goto Label_2123; // 0x844 JumpB
	var_440_bool = 0; var_441_object = Obj(); // 0x845 PushV
	var_441_object = var_1_object; // 0x846 MovT
	func_5557(var_441_object); // 0x847 Call
	if(var_440_bool == 0) goto Label_2123; // 0x849 JumpB
	var_433_bool = 1; // 0x84a MovB
	
Label_2123:
	if(var_433_bool == 0) goto Label_2129; // 0x84b JumpB
	var_446_int = 6872; // 0x84c PushI
	var_447_int = 7579; // 0x84d PushI
	var_448_int = 7578; // 0x84e PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x84f TObjFunc
	
Label_2129:
	var_449_int = 7531; // 0x851 PushI
	var_450_int = -1; // 0x852 PushI
	var_451_int = 8313; // 0x853 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x854 TObjFunc
	goto Label_2157; // 0x856 Jump
	
Label_2157:
	var_452_bool = 0; // 0x86d PushV
	func_5040(var_452_bool); // 0x86e Call
	if(var_452_bool == 0) goto Label_2172; // 0x870 JumpB
	
Label_2161:
	lshWaitForAnimEnd(); // 0x871 Func
	var_453_object = var_3_object; // 0x873 PushT
	if(var_453_object == 0) goto Label_2166; // 0x874 JumpB
	goto Label_2171; // 0x875 Jump
	
Label_2171:
	goto Label_2186; // 0x87b Jump
	
Label_2186:
	return 0; // 0x88a Return
	
Label_2166:
	var_454_string = ""; // 0x876 PushV
	var_454_string = var_2_object; // 0x877 MovT
	func_4921(var_454_string); // 0x878 Call
	goto Label_2161; // 0x87a Jump
	
Label_2172:
	var_455_string = "all"; // 0x87c PushS
	var_456_string = "idle"; // 0x87d PushS
	PlayAnimation(var_455_string, var_456_string); // 0x87e Func
	
Label_2176:
	WaitForAnimEnd(); // 0x880 Func
	var_457_object = var_3_object; // 0x882 PushT
	if(var_457_object == 0) goto Label_2181; // 0x883 JumpB
	goto Label_2186; // 0x884 Jump
	
Label_2181:
	var_458_string = "all"; // 0x885 PushS
	var_459_string = "idle"; // 0x886 PushS
	PlayAnimation(var_458_string, var_459_string); // 0x887 Func
	goto Label_2176; // 0x889 Jump
}


func_5605(var_329_bool)
{
	var_331_int = 0; var_332_string = ""; // 0x15e6 PushV
	var_332_string = "d2q02"; // 0x15e7 MovS
	func_4956(var_331_int, var_332_string); // 0x15e8 Call
	var_333_int = 7; // 0x15ea PushI
	var_334_bool = var_331_int == var_333_int; // 0x15eb Eq
	if(var_334_bool == 0) goto Label_5615; // 0x15ec JumpB
	var_329_bool = 1; // 0x15ed MovB
	return 0; // 0x15ee Return
	
Label_5615:
	var_329_bool = 0; // 0x15ef MovB
	return 0; // 0x15f0 Return
}


func_5095()
{
	var_119_string = "ood1Andrei6"; // 0x13e8 PushS
	var_120_int = 1; // 0x13e9 PushI
	SetVariable(var_119_string, var_120_int); // 0x13ea Func
	return 0; // 0x13ec Return
}


func_5101()
{
	var_129_string = "ood1Andrei7"; // 0x13ee PushS
	var_130_int = 1; // 0x13ef PushI
	SetVariable(var_129_string, var_130_int); // 0x13f0 Func
	return 0; // 0x13f2 Return
}


func_5617(var_295_bool)
{
	var_297_int = 0; var_298_string = ""; // 0x15f2 PushV
	var_298_string = "KnowViktor"; // 0x15f3 MovS
	func_4956(var_297_int, var_298_string); // 0x15f4 Call
	var_299_int = 1; // 0x15f6 PushI
	var_300_bool = var_297_int == var_299_int; // 0x15f7 Eq
	if(var_300_bool == 0) goto Label_5627; // 0x15f8 JumpB
	var_295_bool = 1; // 0x15f9 MovB
	return 0; // 0x15fa Return
	
Label_5627:
	var_295_bool = 0; // 0x15fb MovB
	return 0; // 0x15fc Return
}


func_5107()
{
	var_681_string = "KnowShabnak"; // 0x13f4 PushS
	var_682_int = 1; // 0x13f5 PushI
	SetVariable(var_681_string, var_682_int); // 0x13f6 Func
	return 0; // 0x13f8 Return
}


func_5113()
{
	var_155_string = "ood1Andrei8"; // 0x13fa PushS
	var_156_int = 1; // 0x13fb PushI
	SetVariable(var_155_string, var_156_int); // 0x13fc Func
	return 0; // 0x13fe Return
}


func_5629(var_75_bool)
{
	var_77_int = 0; var_78_string = ""; // 0x15fe PushV
	var_78_string = "d3q01"; // 0x15ff MovS
	func_4956(var_77_int, var_78_string); // 0x1600 Call
	var_79_int = 0; // 0x1602 PushI
	var_80_bool = var_77_int == var_79_int; // 0x1603 Eq
	if(var_80_bool == 0) goto Label_5639; // 0x1604 JumpB
	var_75_bool = 1; // 0x1605 MovB
	return 0; // 0x1606 Return
	
Label_5639:
	var_75_bool = 0; // 0x1607 MovB
	return 0; // 0x1608 Return
}


func_5119()
{
	var_151_string = "KnowMat"; // 0x1400 PushS
	var_152_int = 1; // 0x1401 PushI
	SetVariable(var_151_string, var_152_int); // 0x1402 Func
	return 0; // 0x1404 Return
}


