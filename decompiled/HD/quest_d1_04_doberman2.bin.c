task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0xb9 PushI
	if(var_20_int == 0) goto Label_470; // 0xba JumpB
	func_2915(); // 0xbc NEW_2
	var_22_int = 34223; // 0xbe PushI
	var_23_bool = var_18_object == var_22_int; // 0xbf Eq
	if(var_23_bool == 0) goto Label_243; // 0xc0 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xc1 PushV
	var_25_object = var_1_object; // 0xc2 MovT
	func_3121(var_25_object); // 0xc3 NEW_2
	if(var_24_bool == 0) goto Label_223; // 0xc5 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xc6 PushV
	var_32_object = var_1_object; // 0xc7 MovT
	var_33_object = var_0_object; // 0xc8 MovT
	func_3115(); // 0xc9 NEW_2
	var_36_string = ""; // 0xcb PushV
	var_36_string = "Neutral"; // 0xcc MovS
	func_162(var_19_bool, var_36_string); // 0xcd NEW_2
	var_53_int = 532749; // 0xcf PushI
	SetMessage(var_53_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_54_int = 533297; // 0xd4 PushI
	var_55_int = 34809; // 0xd5 PushI
	var_56_int = 34808; // 0xd6 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd7 TObjFunc
	var_57_int = 533299; // 0xd9 PushI
	var_58_int = 34811; // 0xda PushI
	var_59_int = 34810; // 0xdb PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_60_string = ""; // 0xdf PushV
	var_60_string = "Neutral"; // 0xe0 MovS
	func_162(var_19_bool, var_60_string); // 0xe1 NEW_2
	var_61_int = 532753; // 0xe3 PushI
	SetMessage(var_61_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_62_int = 532754; // 0xe8 PushI
	var_63_int = -1; // 0xe9 PushI
	var_64_int = 34228; // 0xea PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xeb TObjFunc
	var_65_int = 532977; // 0xed PushI
	var_66_int = -1; // 0xee PushI
	var_67_int = 34475; // 0xef PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_68_int = 34811; // 0xf3 PushI
	var_69_bool = var_18_object == var_68_int; // 0xf4 Eq
	if(var_69_bool == 0) goto Label_261; // 0xf5 JumpB
	var_70_string = ""; // 0xf6 PushV
	var_70_string = "Neutral"; // 0xf7 MovS
	func_162(var_19_bool, var_70_string); // 0xf8 NEW_2
	var_71_int = 533300; // 0xfa PushI
	SetMessage(var_71_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_72_int = 533301; // 0xff PushI
	var_73_int = 34809; // 0x100 PushI
	var_74_int = 34812; // 0x101 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x102 TObjFunc
	return 0; // 0x104 Return
	
Label_261:
	var_75_int = 34809; // 0x105 PushI
	var_76_bool = var_18_object == var_75_int; // 0x106 Eq
	if(var_76_bool == 0) goto Label_284; // 0x107 JumpB
	var_77_string = ""; // 0x108 PushV
	var_77_string = "Neutral"; // 0x109 MovS
	func_162(var_19_bool, var_77_string); // 0x10a NEW_2
	var_78_int = 533298; // 0x10c PushI
	SetMessage(var_78_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_79_int = 532975; // 0x111 PushI
	var_80_int = 34474; // 0x112 PushI
	var_81_int = 34473; // 0x113 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x114 TObjFunc
	var_82_int = 532978; // 0x116 PushI
	var_83_int = 34477; // 0x117 PushI
	var_84_int = 34476; // 0x118 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_85_int = 34477; // 0x11c PushI
	var_86_bool = var_18_object == var_85_int; // 0x11d Eq
	if(var_86_bool == 0) goto Label_307; // 0x11e JumpB
	var_87_string = ""; // 0x11f PushV
	var_87_string = "Neutral"; // 0x120 MovS
	func_162(var_19_bool, var_87_string); // 0x121 NEW_2
	var_88_int = 532979; // 0x123 PushI
	SetMessage(var_88_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_89_int = 532980; // 0x128 PushI
	var_90_int = 34480; // 0x129 PushI
	var_91_int = 34478; // 0x12a PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x12b TObjFunc
	var_92_int = 532981; // 0x12d PushI
	var_93_int = -1; // 0x12e PushI
	var_94_int = 34479; // 0x12f PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_95_int = 34480; // 0x133 PushI
	var_96_bool = var_18_object == var_95_int; // 0x134 Eq
	if(var_96_bool == 0) goto Label_330; // 0x135 JumpB
	var_97_string = ""; // 0x136 PushV
	var_97_string = "Neutral"; // 0x137 MovS
	func_162(var_19_bool, var_97_string); // 0x138 NEW_2
	var_98_int = 532982; // 0x13a PushI
	SetMessage(var_98_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_99_int = 532983; // 0x13f PushI
	var_100_int = -1; // 0x140 PushI
	var_101_int = 34481; // 0x141 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x142 TObjFunc
	var_102_int = 532984; // 0x144 PushI
	var_103_int = -1; // 0x145 PushI
	var_104_int = 34482; // 0x146 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_105_int = 34474; // 0x14a PushI
	var_106_bool = var_18_object == var_105_int; // 0x14b Eq
	if(var_106_bool == 0) goto Label_353; // 0x14c JumpB
	var_107_string = ""; // 0x14d PushV
	var_107_string = "Neutral"; // 0x14e MovS
	func_162(var_19_bool, var_107_string); // 0x14f NEW_2
	var_108_int = 532976; // 0x151 PushI
	SetMessage(var_108_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_109_int = 532750; // 0x156 PushI
	var_110_int = 34225; // 0x157 PushI
	var_111_int = 34224; // 0x158 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x159 TObjFunc
	var_112_int = 532985; // 0x15b PushI
	var_113_int = 34484; // 0x15c PushI
	var_114_int = 34483; // 0x15d PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_115_int = 34484; // 0x161 PushI
	var_116_bool = var_18_object == var_115_int; // 0x162 Eq
	if(var_116_bool == 0) goto Label_376; // 0x163 JumpB
	var_117_string = ""; // 0x164 PushV
	var_117_string = "Neutral"; // 0x165 MovS
	func_162(var_19_bool, var_117_string); // 0x166 NEW_2
	var_118_int = 532986; // 0x168 PushI
	SetMessage(var_118_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_119_int = 532987; // 0x16d PushI
	var_120_int = 34225; // 0x16e PushI
	var_121_int = 34485; // 0x16f PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x170 TObjFunc
	var_122_int = 532988; // 0x172 PushI
	var_123_int = -1; // 0x173 PushI
	var_124_int = 34486; // 0x174 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_125_int = 34225; // 0x178 PushI
	var_126_bool = var_18_object == var_125_int; // 0x179 Eq
	if(var_126_bool == 0) goto Label_394; // 0x17a JumpB
	var_127_string = ""; // 0x17b PushV
	var_127_string = "Neutral"; // 0x17c MovS
	func_162(var_19_bool, var_127_string); // 0x17d NEW_2
	var_128_int = 532751; // 0x17f PushI
	SetMessage(var_128_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_129_int = 532752; // 0x184 PushI
	var_130_int = 34471; // 0x185 PushI
	var_131_int = 34226; // 0x186 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_132_int = 34471; // 0x18a PushI
	var_133_bool = var_18_object == var_132_int; // 0x18b Eq
	if(var_133_bool == 0) goto Label_417; // 0x18c JumpB
	var_134_string = ""; // 0x18d PushV
	var_134_string = "Neutral"; // 0x18e MovS
	func_162(var_19_bool, var_134_string); // 0x18f NEW_2
	var_135_int = 532973; // 0x191 PushI
	SetMessage(var_135_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_136_int = 532974; // 0x196 PushI
	var_137_int = 34488; // 0x197 PushI
	var_138_int = 34472; // 0x198 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x199 TObjFunc
	var_139_int = 532991; // 0x19b PushI
	var_140_int = 34491; // 0x19c PushI
	var_141_int = 34490; // 0x19d PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x19e TObjFunc
	return 0; // 0x1a0 Return
	
Label_417:
	var_142_int = 34491; // 0x1a1 PushI
	var_143_bool = var_18_object == var_142_int; // 0x1a2 Eq
	if(var_143_bool == 0) goto Label_435; // 0x1a3 JumpB
	var_144_string = ""; // 0x1a4 PushV
	var_144_string = "Neutral"; // 0x1a5 MovS
	func_162(var_19_bool, var_144_string); // 0x1a6 NEW_2
	var_145_int = 532992; // 0x1a8 PushI
	SetMessage(var_145_int); // 0x1a9 TObjFunc
	ClearReplies(); // 0x1ab TObjFunc
	var_146_int = 532993; // 0x1ad PushI
	var_147_int = 34488; // 0x1ae PushI
	var_148_int = 34492; // 0x1af PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_149_int = 34488; // 0x1b3 PushI
	var_150_bool = var_18_object == var_149_int; // 0x1b4 Eq
	if(var_150_bool == 0) goto Label_458; // 0x1b5 JumpB
	var_151_string = ""; // 0x1b6 PushV
	var_151_string = "Neutral"; // 0x1b7 MovS
	func_162(var_19_bool, var_151_string); // 0x1b8 NEW_2
	var_152_int = 532989; // 0x1ba PushI
	SetMessage(var_152_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_153_int = 532990; // 0x1bf PushI
	var_154_int = -1; // 0x1c0 PushI
	var_155_int = 34489; // 0x1c1 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1c2 TObjFunc
	var_156_int = 532994; // 0x1c4 PushI
	var_157_int = -1; // 0x1c5 PushI
	var_158_int = 34494; // 0x1c6 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_3_string = 1; // 0x1ca TMovB
	var_159_bool = 0; // 0x1cb PushV
	func_3683(var_159_bool); // 0x1cc NEW_2
	if(var_159_bool == 0) goto Label_466; // 0x1ce JumpB
	lshStopAnimation(); // 0x1cf Func
	goto Label_468; // 0x1d1 Jump
	
Label_468:
	return 0; // 0x1d4 Return
	
Label_466:
	StopAnimation(); // 0x1d2 Func
	
Label_470:
	return 0; // 0x1d6 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x1e6 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x1e7 PushV
	var_22_object = var_18_bool; // 0x1e8 Mov
	func_3619(var_22_object); // 0x1e9 NEW_2
	var_20_int = var_21_int; // 0x1ea Mov
	var_23_int = 0; // 0x1ec PushI
	var_24_bool = var_20_int > var_23_int; // 0x1ed GT
	if(var_24_bool == 0) goto Label_499; // 0x1ee JumpB
	var_25_object = Obj(); // 0x1ef PushV
	var_25_object = var_18_bool; // 0x1f0 Mov
	func_3622(var_25_object); // 0x1f1 NEW_2
	
Label_499:
	return 2; // 0x1f3 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3628(); // 0x1f5 NEW_2
	return 0; // 0x1f7 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x26e Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x270 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x272 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x28b PushV
	var_21_int = 0; var_22_object = Obj(); // 0x28c PushV
	var_22_object = var_18_bool; // 0x28d Mov
	func_3619(var_22_object); // 0x28e NEW_2
	var_20_int = var_21_int; // 0x28f Mov
	var_23_int = 0; // 0x291 PushI
	var_24_bool = var_20_int > var_23_int; // 0x292 GT
	if(var_24_bool == 0) goto Label_670; // 0x293 JumpB
	var_25_int = 1; // 0x294 PushI
	var_26_bool = var_20_int > var_25_int; // 0x295 GT
	if(var_26_bool == 0) goto Label_666; // 0x296 JumpB
	func_838(var_20_int); // 0x298 NEW_2
	
Label_666:
	var_28_object = Obj(); // 0x29a PushV
	var_28_object = var_18_bool; // 0x29b Mov
	func_3622(var_28_object); // 0x29c NEW_2
	
Label_670:
	return 2; // 0x29e Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x29f PushV
	var_21_object = Obj(); // 0x2a0 PushV
	var_21_object = var_18_bool; // 0x2a1 Mov
	func_3505(var_21_object); // 0x2a2 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x2a4 PushV
	var_31_object = var_18_bool; // 0x2a5 Mov
	func_3588(var_30_int, var_31_object); // 0x2a6 NEW_2
	var_20_int = var_30_int; // 0x2a7 Mov
	var_66_int = 0; // 0x2a9 PushI
	var_67_bool = var_20_int > var_66_int; // 0x2aa GT
	if(var_67_bool == 0) goto Label_694; // 0x2ab JumpB
	var_68_int = 1; // 0x2ac PushI
	var_69_bool = var_20_int > var_68_int; // 0x2ad GT
	if(var_69_bool == 0) goto Label_690; // 0x2ae JumpB
	func_838(var_20_int); // 0x2b0 NEW_2
	
Label_690:
	var_71_object = Obj(); // 0x2b2 PushV
	var_71_object = var_18_bool; // 0x2b3 Mov
	func_3598(var_71_object); // 0x2b4 NEW_2
	
Label_694:
	return 2; // 0x2b6 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x2b7 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x2b8 PushV
	var_24_object = var_18_bool; // 0x2b9 Mov
	var_25_object = var_19_object; // 0x2ba Mov
	var_26_bool = var_20_bool; // 0x2bb Mov
	func_3713(var_26_bool); // 0x2bc NEW_2
	if(var_23_bool == 0) goto Label_722; // 0x2be JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x2bf PushV
	var_28_object = var_18_bool; // 0x2c0 Mov
	var_29_bool = var_20_bool; // 0x2c1 Mov
	func_3606(var_28_object, var_29_bool); // 0x2c2 NEW_2
	var_22_int = var_27_int; // 0x2c3 Mov
	var_66_int = 0; // 0x2c5 PushI
	var_67_bool = var_22_int > var_66_int; // 0x2c6 GT
	if(var_67_bool == 0) goto Label_722; // 0x2c7 JumpB
	var_68_int = 1; // 0x2c8 PushI
	var_69_bool = var_22_int > var_68_int; // 0x2c9 GT
	if(var_69_bool == 0) goto Label_718; // 0x2ca JumpB
	func_838(var_22_int); // 0x2cc NEW_2
	
Label_718:
	var_71_object = Obj(); // 0x2ce PushV
	var_71_object = var_18_bool; // 0x2cf Mov
	func_3613(var_71_object); // 0x2d0 NEW_2
	
Label_722:
	return 2; // 0x2d2 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2d3 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x2d4 PushV
	var_22_object = var_18_bool; // 0x2d5 Mov
	func_3665(var_22_object); // 0x2d6 NEW_2
	var_20_int = var_21_int; // 0x2d7 Mov
	var_23_int = 0; // 0x2d9 PushI
	var_24_bool = var_20_int > var_23_int; // 0x2da GT
	if(var_24_bool == 0) goto Label_742; // 0x2db JumpB
	var_25_int = 1; // 0x2dc PushI
	var_26_bool = var_20_int > var_25_int; // 0x2dd GT
	if(var_26_bool == 0) goto Label_738; // 0x2de JumpB
	func_838(var_20_int); // 0x2e0 NEW_2
	
Label_738:
	var_28_object = Obj(); // 0x2e2 PushV
	var_28_object = var_18_bool; // 0x2e3 Mov
	func_3668(); // 0x2e4 NEW_2
	
Label_742:
	return 2; // 0x2e6 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x2e7 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x2e8 PushV
	var_23_object = var_18_object; // 0x2e9 Mov
	var_24_string = var_19_bool; // 0x2ea Mov
	func_3419(var_22_bool, var_23_object, var_24_string); // 0x2eb NEW_2
	if(var_22_bool == 0) goto Label_759; // 0x2ed JumpB
	func_838(var_21_int); // 0x2ef NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x2f1 PushV
	var_51_object = var_18_object; // 0x2f2 Mov
	var_52_string = var_19_bool; // 0x2f3 Mov
	func_3451(var_51_object, var_52_string); // 0x2f4 NEW_2
	goto Label_779; // 0x2f6 Jump
	
Label_779:
	return 2; // 0x30b Return
	
Label_759:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x2f7 PushV
	var_128_string = var_19_bool; // 0x2f8 Mov
	var_129_object = var_18_object; // 0x2f9 Mov
	func_3629(var_129_object); // 0x2fa NEW_2
	var_21_int = var_127_int; // 0x2fb Mov
	var_130_int = 0; // 0x2fd PushI
	var_131_bool = var_21_int > var_130_int; // 0x2fe GT
	if(var_131_bool == 0) goto Label_779; // 0x2ff JumpB
	var_132_int = 1; // 0x300 PushI
	var_133_bool = var_21_int > var_132_int; // 0x301 GT
	if(var_133_bool == 0) goto Label_774; // 0x302 JumpB
	func_838(var_21_int); // 0x304 NEW_2
	
Label_774:
	var_134_string = ""; var_135_object = Obj(); // 0x306 PushV
	var_134_string = var_19_bool; // 0x307 Mov
	var_135_object = var_18_object; // 0x308 Mov
	func_3632(); // 0x309 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x30d PushV
	var_20_string = var_18_bool; // 0x30e Mov
	func_3518(var_19_bool, var_20_string); // 0x30f NEW_2
	if(var_19_bool == 0) goto Label_793; // 0x311 JumpB
	func_838(var_18_bool); // 0x313 NEW_2
	var_29_string = ""; // 0x315 PushV
	var_29_string = var_18_bool; // 0x316 Mov
	func_3534(var_29_string); // 0x317 NEW_2
	
Label_793:
	return 0; // 0x319 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x31b PushV
	var_20_object = var_18_bool; // 0x31c Mov
	func_3476(var_19_bool, var_20_object); // 0x31d NEW_2
	if(var_19_bool == 0) goto Label_808; // 0x31f JumpB
	func_838(var_18_bool); // 0x321 NEW_2
	var_32_object = Obj(); // 0x323 PushV
	var_32_object = var_18_bool; // 0x324 Mov
	func_3499(var_32_object); // 0x325 NEW_2
	goto Label_812; // 0x327 Jump
	
Label_812:
	return 0; // 0x32c Return
	
Label_808:
	var_34_object = Obj(); // 0x328 PushV
	var_34_object = var_18_bool; // 0x329 Mov
	func_863(var_18_bool, var_34_object); // 0x32a NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x32e PushV
	var_19_object = var_18_bool; // 0x32f Mov
	func_863(var_18_bool, var_19_object); // 0x330 NEW_2
	return 0; // 0x332 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x334 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x335 Neq
	if(var_20_bool == 0) goto Label_824; // 0x336 JumpB
	return 0; // 0x337 Return
	
Label_824:
	var_2_object = 0; // 0x338 TMovB
	var_21_int = 110; // 0x339 PushI
	KillTimer(var_21_int); // 0x33a Func
	ResetAAS(); // 0x33c Func
	return 0; // 0x33e Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_838(var_17_bool); // 0x340 NEW_2
	func_3628(); // 0x343 NEW_2
	return 0; // 0x345 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_838(var_18_bool); // 0x358 NEW_2
	var_20_object = Obj(); // 0x35a PushV
	var_20_object = var_18_bool; // 0x35b Mov
	func_3395(); // 0x35c NEW_2
	return 0; // 0x35e Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x3c8 Func
	return 0; // 0x3ca Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x3cb Func
	return 0; // 0x3cd Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3e4 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x3e5 PushV
	var_22_object = var_18_bool; // 0x3e6 Mov
	func_3619(var_22_object); // 0x3e7 NEW_2
	var_20_int = var_21_int; // 0x3e8 Mov
	var_23_int = 0; // 0x3ea PushI
	var_24_bool = var_20_int > var_23_int; // 0x3eb GT
	if(var_24_bool == 0) goto Label_1015; // 0x3ec JumpB
	var_25_int = 1; // 0x3ed PushI
	var_26_bool = var_20_int > var_25_int; // 0x3ee GT
	if(var_26_bool == 0) goto Label_1011; // 0x3ef JumpB
	func_1241(); // 0x3f1 NEW_2
	
Label_1011:
	var_27_object = Obj(); // 0x3f3 PushV
	var_27_object = var_18_bool; // 0x3f4 Mov
	func_3622(var_27_object); // 0x3f5 NEW_2
	
Label_1015:
	return 2; // 0x3f7 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3f8 PushV
	var_21_object = Obj(); // 0x3f9 PushV
	var_21_object = var_18_bool; // 0x3fa Mov
	func_3505(var_21_object); // 0x3fb NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x3fd PushV
	var_31_object = var_18_bool; // 0x3fe Mov
	func_3588(var_30_int, var_31_object); // 0x3ff NEW_2
	var_20_int = var_30_int; // 0x400 Mov
	var_66_int = 0; // 0x402 PushI
	var_67_bool = var_20_int > var_66_int; // 0x403 GT
	if(var_67_bool == 0) goto Label_1039; // 0x404 JumpB
	var_68_int = 1; // 0x405 PushI
	var_69_bool = var_20_int > var_68_int; // 0x406 GT
	if(var_69_bool == 0) goto Label_1035; // 0x407 JumpB
	func_1241(); // 0x409 NEW_2
	
Label_1035:
	var_70_object = Obj(); // 0x40b PushV
	var_70_object = var_18_bool; // 0x40c Mov
	func_3598(var_70_object); // 0x40d NEW_2
	
Label_1039:
	return 2; // 0x40f Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x410 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x411 PushV
	var_24_object = var_18_bool; // 0x412 Mov
	var_25_object = var_19_object; // 0x413 Mov
	var_26_bool = var_20_bool; // 0x414 Mov
	func_3713(var_26_bool); // 0x415 NEW_2
	if(var_23_bool == 0) goto Label_1067; // 0x417 JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x418 PushV
	var_28_object = var_18_bool; // 0x419 Mov
	var_29_bool = var_20_bool; // 0x41a Mov
	func_3606(var_28_object, var_29_bool); // 0x41b NEW_2
	var_22_int = var_27_int; // 0x41c Mov
	var_66_int = 0; // 0x41e PushI
	var_67_bool = var_22_int > var_66_int; // 0x41f GT
	if(var_67_bool == 0) goto Label_1067; // 0x420 JumpB
	var_68_int = 1; // 0x421 PushI
	var_69_bool = var_22_int > var_68_int; // 0x422 GT
	if(var_69_bool == 0) goto Label_1063; // 0x423 JumpB
	func_1241(); // 0x425 NEW_2
	
Label_1063:
	var_70_object = Obj(); // 0x427 PushV
	var_70_object = var_18_bool; // 0x428 Mov
	func_3613(var_70_object); // 0x429 NEW_2
	
Label_1067:
	return 2; // 0x42b Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x42c PushV
	var_21_int = 0; var_22_object = Obj(); // 0x42d PushV
	var_22_object = var_18_bool; // 0x42e Mov
	func_3665(var_22_object); // 0x42f NEW_2
	var_20_int = var_21_int; // 0x430 Mov
	var_23_int = 0; // 0x432 PushI
	var_24_bool = var_20_int > var_23_int; // 0x433 GT
	if(var_24_bool == 0) goto Label_1087; // 0x434 JumpB
	var_25_int = 1; // 0x435 PushI
	var_26_bool = var_20_int > var_25_int; // 0x436 GT
	if(var_26_bool == 0) goto Label_1083; // 0x437 JumpB
	func_1241(); // 0x439 NEW_2
	
Label_1083:
	var_27_object = Obj(); // 0x43b PushV
	var_27_object = var_18_bool; // 0x43c Mov
	func_3668(); // 0x43d NEW_2
	
Label_1087:
	return 2; // 0x43f Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x440 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x441 PushV
	var_23_object = var_18_object; // 0x442 Mov
	var_24_string = var_19_bool; // 0x443 Mov
	func_3419(var_22_bool, var_23_object, var_24_string); // 0x444 NEW_2
	if(var_22_bool == 0) goto Label_1104; // 0x446 JumpB
	func_1241(); // 0x448 NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x44a PushV
	var_50_object = var_18_object; // 0x44b Mov
	var_51_string = var_19_bool; // 0x44c Mov
	func_3451(var_50_object, var_51_string); // 0x44d NEW_2
	goto Label_1124; // 0x44f Jump
	
Label_1124:
	return 2; // 0x464 Return
	
Label_1104:
	var_126_int = 0; var_127_string = ""; var_128_object = Obj(); // 0x450 PushV
	var_127_string = var_19_bool; // 0x451 Mov
	var_128_object = var_18_object; // 0x452 Mov
	func_3629(var_128_object); // 0x453 NEW_2
	var_21_int = var_126_int; // 0x454 Mov
	var_129_int = 0; // 0x456 PushI
	var_130_bool = var_21_int > var_129_int; // 0x457 GT
	if(var_130_bool == 0) goto Label_1124; // 0x458 JumpB
	var_131_int = 1; // 0x459 PushI
	var_132_bool = var_21_int > var_131_int; // 0x45a GT
	if(var_132_bool == 0) goto Label_1119; // 0x45b JumpB
	func_1241(); // 0x45d NEW_2
	
Label_1119:
	var_133_string = ""; var_134_object = Obj(); // 0x45f PushV
	var_133_string = var_19_bool; // 0x460 Mov
	var_134_object = var_18_object; // 0x461 Mov
	func_3632(); // 0x462 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x466 PushV
	var_20_string = var_18_bool; // 0x467 Mov
	func_3518(var_19_bool, var_20_string); // 0x468 NEW_2
	if(var_19_bool == 0) goto Label_1138; // 0x46a JumpB
	func_1241(); // 0x46c NEW_2
	var_28_string = ""; // 0x46e PushV
	var_28_string = var_18_bool; // 0x46f Mov
	func_3534(var_28_string); // 0x470 NEW_2
	
Label_1138:
	return 0; // 0x472 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1241(); // 0x474 NEW_2
	func_3628(); // 0x477 NEW_2
	return 0; // 0x479 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x47b PushV
	var_20_object = var_18_bool; // 0x47c Mov
	func_3476(var_19_bool, var_20_object); // 0x47d NEW_2
	if(var_19_bool == 0) goto Label_1159; // 0x47f JumpB
	func_1241(); // 0x481 NEW_2
	var_31_object = Obj(); // 0x483 PushV
	var_31_object = var_18_bool; // 0x484 Mov
	func_3499(var_31_object); // 0x485 NEW_2
	
Label_1159:
	return 0; // 0x487 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x516 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x517 PushV
	var_22_object = var_18_bool; // 0x518 Mov
	func_3619(var_22_object); // 0x519 NEW_2
	var_20_int = var_21_int; // 0x51a Mov
	var_23_int = 0; // 0x51c PushI
	var_24_bool = var_20_int > var_23_int; // 0x51d GT
	if(var_24_bool == 0) goto Label_1321; // 0x51e JumpB
	var_25_int = 1; // 0x51f PushI
	var_26_bool = var_20_int > var_25_int; // 0x520 GT
	if(var_26_bool == 0) goto Label_1317; // 0x521 JumpB
	func_1445(); // 0x523 NEW_2
	
Label_1317:
	var_29_object = Obj(); // 0x525 PushV
	var_29_object = var_18_bool; // 0x526 Mov
	func_3622(var_29_object); // 0x527 NEW_2
	
Label_1321:
	return 2; // 0x529 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x52a PushV
	var_21_object = Obj(); // 0x52b PushV
	var_21_object = var_18_bool; // 0x52c Mov
	func_3505(var_21_object); // 0x52d NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x52f PushV
	var_31_object = var_18_bool; // 0x530 Mov
	func_3588(var_30_int, var_31_object); // 0x531 NEW_2
	var_20_int = var_30_int; // 0x532 Mov
	var_66_int = 0; // 0x534 PushI
	var_67_bool = var_20_int > var_66_int; // 0x535 GT
	if(var_67_bool == 0) goto Label_1345; // 0x536 JumpB
	var_68_int = 1; // 0x537 PushI
	var_69_bool = var_20_int > var_68_int; // 0x538 GT
	if(var_69_bool == 0) goto Label_1341; // 0x539 JumpB
	func_1445(); // 0x53b NEW_2
	
Label_1341:
	var_72_object = Obj(); // 0x53d PushV
	var_72_object = var_18_bool; // 0x53e Mov
	func_3598(var_72_object); // 0x53f NEW_2
	
Label_1345:
	return 2; // 0x541 Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x542 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x543 PushV
	var_24_object = var_18_bool; // 0x544 Mov
	var_25_object = var_19_object; // 0x545 Mov
	var_26_bool = var_20_bool; // 0x546 Mov
	func_3713(var_26_bool); // 0x547 NEW_2
	if(var_23_bool == 0) goto Label_1373; // 0x549 JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x54a PushV
	var_28_object = var_18_bool; // 0x54b Mov
	var_29_bool = var_20_bool; // 0x54c Mov
	func_3606(var_28_object, var_29_bool); // 0x54d NEW_2
	var_22_int = var_27_int; // 0x54e Mov
	var_66_int = 0; // 0x550 PushI
	var_67_bool = var_22_int > var_66_int; // 0x551 GT
	if(var_67_bool == 0) goto Label_1373; // 0x552 JumpB
	var_68_int = 1; // 0x553 PushI
	var_69_bool = var_22_int > var_68_int; // 0x554 GT
	if(var_69_bool == 0) goto Label_1369; // 0x555 JumpB
	func_1445(); // 0x557 NEW_2
	
Label_1369:
	var_72_object = Obj(); // 0x559 PushV
	var_72_object = var_18_bool; // 0x55a Mov
	func_3613(var_72_object); // 0x55b NEW_2
	
Label_1373:
	return 2; // 0x55d Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x55e PushV
	var_21_int = 0; var_22_object = Obj(); // 0x55f PushV
	var_22_object = var_18_bool; // 0x560 Mov
	func_3665(var_22_object); // 0x561 NEW_2
	var_20_int = var_21_int; // 0x562 Mov
	var_23_int = 0; // 0x564 PushI
	var_24_bool = var_20_int > var_23_int; // 0x565 GT
	if(var_24_bool == 0) goto Label_1393; // 0x566 JumpB
	var_25_int = 1; // 0x567 PushI
	var_26_bool = var_20_int > var_25_int; // 0x568 GT
	if(var_26_bool == 0) goto Label_1389; // 0x569 JumpB
	func_1445(); // 0x56b NEW_2
	
Label_1389:
	var_29_object = Obj(); // 0x56d PushV
	var_29_object = var_18_bool; // 0x56e Mov
	func_3668(); // 0x56f NEW_2
	
Label_1393:
	return 2; // 0x571 Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x572 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x573 PushV
	var_23_object = var_18_object; // 0x574 Mov
	var_24_string = var_19_bool; // 0x575 Mov
	func_3419(var_22_bool, var_23_object, var_24_string); // 0x576 NEW_2
	if(var_22_bool == 0) goto Label_1410; // 0x578 JumpB
	func_1445(); // 0x57a NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x57c PushV
	var_52_object = var_18_object; // 0x57d Mov
	var_53_string = var_19_bool; // 0x57e Mov
	func_3451(var_52_object, var_53_string); // 0x57f NEW_2
	goto Label_1430; // 0x581 Jump
	
Label_1430:
	return 2; // 0x596 Return
	
Label_1410:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x582 PushV
	var_129_string = var_19_bool; // 0x583 Mov
	var_130_object = var_18_object; // 0x584 Mov
	func_3629(var_130_object); // 0x585 NEW_2
	var_21_int = var_128_int; // 0x586 Mov
	var_131_int = 0; // 0x588 PushI
	var_132_bool = var_21_int > var_131_int; // 0x589 GT
	if(var_132_bool == 0) goto Label_1430; // 0x58a JumpB
	var_133_int = 1; // 0x58b PushI
	var_134_bool = var_21_int > var_133_int; // 0x58c GT
	if(var_134_bool == 0) goto Label_1425; // 0x58d JumpB
	func_1445(); // 0x58f NEW_2
	
Label_1425:
	var_135_string = ""; var_136_object = Obj(); // 0x591 PushV
	var_135_string = var_19_bool; // 0x592 Mov
	var_136_object = var_18_object; // 0x593 Mov
	func_3632(); // 0x594 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x598 PushV
	var_20_string = var_18_bool; // 0x599 Mov
	func_3518(var_19_bool, var_20_string); // 0x59a NEW_2
	if(var_19_bool == 0) goto Label_1444; // 0x59c JumpB
	func_1445(); // 0x59e NEW_2
	var_30_string = ""; // 0x5a0 PushV
	var_30_string = var_18_bool; // 0x5a1 Mov
	func_3534(var_30_string); // 0x5a2 NEW_2
	
Label_1444:
	return 0; // 0x5a4 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1445(); // 0x5b2 NEW_2
	var_21_object = Obj(); // 0x5b4 PushV
	var_21_object = var_18_bool; // 0x5b5 Mov
	func_3395(); // 0x5b6 NEW_2
	return 0; // 0x5b8 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x5b9 PushV
	var_23_int = 111; // 0x5ba PushI
	var_24_bool = var_18_bool != var_23_int; // 0x5bb Neq
	if(var_24_bool == 0) goto Label_1470; // 0x5bc JumpB
	return 4; // 0x5bd Return
	
Label_1470:
	var_25_bool = 0; var_26_object = Obj(); // 0x5be PushV
	var_26_object = var_0_object; // 0x5bf MovT
	func_2620(var_25_bool, var_26_object); // 0x5c0 NEW_2
	var_59_bool = var_25_bool == 0; // 0x5c2 Not
	if(var_59_bool == 0) goto Label_1480; // 0x5c3 JumpB
	func_1445(); // 0x5c5 NEW_2
	return 4; // 0x5c7 Return
	
Label_1480:
	GetDirection(var_21_cvector); // 0x5c8 Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x5ca PushV
	var_63_object = var_0_object; // 0x5cb MovT
	func_2474(var_63_object); // 0x5cc NEW_2
	var_22_cvector = var_62_cvector; // 0x5cd Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x5cf PushV
	var_69_cvector = var_21_cvector; // 0x5d0 Mov
	var_70_cvector = var_22_cvector; // 0x5d1 Mov
	func_3047(var_68_float, var_69_cvector, var_70_cvector); // 0x5d2 NEW_2
	var_92_float = 0.5; // 0x5d4 PushF
	var_93_bool = var_68_float < var_92_float; // 0x5d5 LT
	if(var_93_bool == 0) goto Label_1499; // 0x5d6 JumpB
	var_94_object = Obj(); // 0x5d7 PushV
	var_94_object = var_0_object; // 0x5d8 MovT
	func_2770(); // 0x5d9 NEW_2
	
Label_1499:
	return 4; // 0x5db Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1445(); // 0x5dd NEW_2
	func_3628(); // 0x5e0 NEW_2
	return 0; // 0x5e2 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x5e4 PushV
	var_20_object = var_18_bool; // 0x5e5 Mov
	func_3476(var_19_bool, var_20_object); // 0x5e6 NEW_2
	if(var_19_bool == 0) goto Label_1520; // 0x5e8 JumpB
	func_1445(); // 0x5ea NEW_2
	var_33_object = Obj(); // 0x5ec PushV
	var_33_object = var_18_bool; // 0x5ed Mov
	func_3499(var_33_object); // 0x5ee NEW_2
	
Label_1520:
	return 0; // 0x5f0 Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2267(var_17_bool); // 0x896 NEW_2
	func_3628(); // 0x899 NEW_2
	return 0; // 0x89b Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0x8ce PushI
	var_20_bool = var_18_int == var_19_int; // 0x8cf Eq
	if(var_20_bool == 0) goto Label_2262; // 0x8d0 JumpB
	var_21_object = Obj(); // 0x8d1 PushV
	var_21_object = var_1_object; // 0x8d2 MovT
	func_3095(var_21_object); // 0x8d3 NEW_2
	goto Label_2266; // 0x8d5 Jump
	
Label_2266:
	return 0; // 0x8da Return
	
Label_2262:
	var_26_int = 0; // 0x8d6 PushV
	var_26_int = var_18_int; // 0x8d7 Mov
	func_2411(var_17_bool, var_18_int, var_26_int); // 0x8d8 NEW_2
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x8e9 PushV
	var_19_bool = 0; // 0x8ea MovB
	var_20_bool = var_1_object == var_18_object; // 0x8eb Eq
	if(var_20_bool == 0) goto Label_2288; // 0x8ec JumpB
	var_21_bool = var_2_object == 0; // 0x8ed Not
	if(var_21_bool == 0) goto Label_2288; // 0x8ee JumpB
	var_19_bool = 1; // 0x8ef MovB
	
Label_2288:
	if(var_19_bool == 0) goto Label_2294; // 0x8f0 JumpB
	var_2_object = 1; // 0x8f1 TMovB
	var_22_object = Obj(); // 0x8f2 PushV
	var_22_object = var_18_object; // 0x8f3 Mov
	func_2904(var_22_object); // 0x8f4 NEW_2
	
Label_2294:
	return 0; // 0x8f6 Return
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x8f8 PushV
	var_19_bool = 0; // 0x8f9 MovB
	var_20_bool = var_1_object == var_18_object; // 0x8fa Eq
	if(var_20_bool == 0) goto Label_2303; // 0x8fb JumpB
	var_21_object = var_2_object; // 0x8fc PushT
	if(var_21_object == 0) goto Label_2303; // 0x8fd JumpB
	var_19_bool = 1; // 0x8fe MovB
	
Label_2303:
	if(var_19_bool == 0) goto Label_2308; // 0x8ff JumpB
	var_2_object = 0; // 0x900 TMovB
	var_22_string = "head"; // 0x901 PushS
	UnlookAsync(var_22_string); // 0x902 Func
	
Label_2308:
	return 0; // 0x904 Return
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0x97e Func
	return 0; // 0x980 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_2267(var_18_object); // 0x98a NEW_2
	var_23_object = Obj(); // 0x98c PushV
	var_23_object = var_18_object; // 0x98d Mov
	func_3395(); // 0x98e NEW_2
	return 0; // 0x990 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0xd36 PushV
	var_22_string = "health"; // 0xd37 PushS
	var_23_bool = var_19_string == var_22_string; // 0xd38 Eq
	if(var_23_bool == 0) goto Label_3394; // 0xd39 JumpB
	var_24_string = "health"; // 0xd3a PushS
	GetProperty(var_24_string, var_21_float); // 0xd3b Func
	var_25_int = 0; // 0xd3d PushI
	var_26_bool = var_21_float <= var_25_int; // 0xd3e LE
	if(var_26_bool == 0) goto Label_3394; // 0xd3f JumpB
	SignalDeath(var_18_object); // 0xd40 Func
	
Label_3394:
	return 2; // 0xd42 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0xd44 PushV
	var_19_object = var_18_object; // 0xd45 Mov
	func_3374(var_19_object); // 0xd46 NEW_2
	return 0; // 0xd48 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0xd4a PushV
	var_22_object = var_18_object; // 0xd4b Mov
	var_23_int = var_19_int; // 0xd4c Mov
	var_24_float = var_20_float; // 0xd4d Mov
	func_2688(var_22_object, var_23_int, var_24_float); // 0xd4e NEW_2
	return 0; // 0xd50 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0xd52 PushV
	var_24_object = var_18_object; // 0xd53 Mov
	var_25_int = var_19_int; // 0xd54 Mov
	var_26_float = var_20_float; // 0xd55 Mov
	var_27_cvector = var_22_cvector; // 0xd56 Mov
	var_28_cvector = var_23_cvector; // 0xd57 Mov
	func_2756(var_26_float, var_27_cvector, var_28_cvector); // 0xd58 NEW_2
	return 0; // 0xd5a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x273 PushB
	SensePlayerOnly(var_18_bool); // 0x274 Func
	func_3685(); // 0x277 NEW_2
	func_642(); // 0x27a NEW_2
	
Label_636:
	var_2_object = 0; // 0x27c TMovB
	func_903(var_16_object, var_17_bool); // 0x27e NEW_2
	goto Label_636; // 0x280 Jump
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x0 PushV
	var_0_object = var_44_object; // 0x1 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x2 PushV
	var_55_object = var_44_object; // 0x3 Mov
	var_56_float = 70.0; // 0x4 MovF
	func_2786(var_55_object, var_56_float); // 0x5 NEW_2
	var_101_bool = var_54_bool == 0; // 0x7 Not
	if(var_101_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_102_int = 0; // 0xd PushV
	func_3677(var_102_int); // 0xe NEW_2
	SetNPCName(var_102_int); // 0x10 ObjFunc
	var_103_int = 0; // 0x12 PushV
	func_3675(var_103_int); // 0x13 NEW_2
	SetNPCDescription(var_103_int); // 0x15 ObjFunc
	var_104_string = ""; // 0x17 PushV
	func_3679(var_104_string); // 0x18 NEW_2
	SetPhoto(var_104_string); // 0x1a ObjFunc
	var_105_string = ""; // 0x1c PushV
	func_3681(var_105_string); // 0x1d NEW_2
	SetPhoto2(var_105_string); // 0x1f ObjFunc
	var_106_int = 0; // 0x21 PushV
	func_3133(var_106_int); // 0x22 NEW_2
	SetPlayerName(var_106_int); // 0x24 ObjFunc
	var_52_int = -1; // 0x26 MovI
	IsOverrideActive(var_51_bool); // 0x27 Func
	var_114_bool = var_51_bool; // 0x29 Push
	if(var_114_bool == 0) goto Label_45; // 0x2a JumpB
	var_43_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_50_object); // 0x2d Func
	var_115_object = Obj(); var_116_object = Obj(); // 0x2f PushV
	var_115_object = var_44_object; // 0x30 Mov
	var_116_object = var_50_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_53_bool); // 0x36 ObjFunc
	
Label_56:
	var_184_bool = var_53_bool == 0; // 0x38 Not
	if(var_184_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_53_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_185_object = Obj(); // 0x3f PushV
	var_185_object = var_44_object; // 0x40 Mov
	func_2855(); // 0x41 NEW_2
	StopDialog(var_50_object); // 0x43 Func
	GetReturnValue(var_52_int); // 0x45 ObjFunc
	var_43_int = var_52_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_3588(var_30_int, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xe05 PushV
	var_33_object = var_31_object; // 0xe06 Mov
	func_2620(var_32_bool, var_33_object); // 0xe07 NEW_2
	if(var_32_bool == 0) goto Label_3596; // 0xe09 JumpB
	var_30_int = 2; // 0xe0a MovI
	goto Label_3597; // 0xe0b Jump
	
Label_3597:
	return 0; // 0xe0d Return
	
Label_3596:
	var_30_int = 0; // 0xe0c MovI
}


func_3598(var_73_object)
{
	var_74_object = Obj(); // 0xe0f PushV
	var_74_object = var_73_object; // 0xe10 Mov
	TaskCall(6); // 0xe11 TaskCall
	func_1521(var_74_object); // 0xe12 NEW_2
	TaskReturn(); // 0xe13 TaskReturn
	return 0; // 0xe15 Return
}


func_3086(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0xc0e PushV
	GetGameTime(var_30_float); // 0xc0f Func
	var_31_int = 1; // 0xc11 PushI
	var_32_int = 0; // 0xc12 PushV
	var_33_int = 24; // 0xc13 PushI
	var_32_int = var_30_float / var_30_float; // 0xc14 Div2
	var_28_int = var_31_int + var_32_int; // 0xc15 Add2
	return 2; // 0xc16 Return
}


func_2579(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0xa13 PushV
	IsDead(var_49_bool); // 0xa14 ObjFunc
	var_46_bool = var_49_bool; // 0xa16 Mov
	return 2; // 0xa17 Return
}


func_3606(var_27_int, var_28_object)
{
	var_30_int = 0; var_31_object = Obj(); // 0xe17 PushV
	var_31_object = var_28_object; // 0xe18 Mov
	func_3588(var_30_int, var_31_object); // 0xe19 NEW_2
	var_27_int = var_30_int; // 0xe1a Mov
	return 0; // 0xe1c Return
}


func_3095(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0xc17 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0xc18 Func
	var_24_bool = var_23_bool; // 0xc1a Push
	if(var_24_bool == 0) goto Label_3103; // 0xc1b JumpB
	var_25_string = "attack"; // 0xc1c PushS
	PlayGlobalMusic(var_25_string); // 0xc1d Func
	
Label_3103:
	return 2; // 0xc1f Return
}


func_2584(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0xa18 PushV
	var_41_bool = var_36_object == 0; // 0xa19 NullEq
	if(var_41_bool == 0) goto Label_2589; // 0xa1a JumpB
	var_35_bool = 0; // 0xa1b MovB
	return 4; // 0xa1c Return
	
Label_2589:
	var_42_bool = 0; // 0xa1d PushV
	var_42_bool = 0; // 0xa1e MovB
	var_43_string = "IsDead"; // 0xa1f PushS
	var_44_int = 1; // 0xa20 PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0xa21 FuncExist
	if(var_45_bool == 0) goto Label_2601; // 0xa22 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xa23 PushV
	var_47_object = var_36_object; // 0xa24 Mov
	func_2579(var_47_object); // 0xa25 NEW_2
	if(var_46_bool == 0) goto Label_2601; // 0xa27 JumpB
	var_42_bool = 1; // 0xa28 MovB
	
Label_2601:
	if(var_42_bool == 0) goto Label_2604; // 0xa29 JumpB
	var_35_bool = 0; // 0xa2a MovB
	return 4; // 0xa2b Return
	
Label_2604:
	GetScene(var_39_object); // 0xa2c Func
	var_50_bool = var_39_object == 0; // 0xa2e NullEq
	if(var_50_bool == 0) goto Label_2610; // 0xa2f JumpB
	var_35_bool = 0; // 0xa30 MovB
	return 4; // 0xa31 Return
	
Label_2610:
	GetScene(var_40_object); // 0xa32 ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0xa34 Neq
	if(var_51_bool == 0) goto Label_2616; // 0xa35 JumpB
	var_35_bool = 0; // 0xa36 MovB
	return 4; // 0xa37 Return
	
Label_2616:
	var_35_bool = 1; // 0xa38 MovB
	return 4; // 0xa39 Return
}


func_2073(var_322_bool)
{
	var_323_bool = 0; // 0x819 PushV
	var_323_bool = 0; // 0x81a MovB
	var_324_bool = 0; // 0x81b PushV
	func_2045(var_323_bool, var_324_bool); // 0x81c NEW_2
	if(var_324_bool == 0) goto Label_2084; // 0x81e JumpB
	var_341_bool = 0; // 0x81f PushV
	func_2089(var_322_bool, var_323_bool, var_341_bool); // 0x820 NEW_2
	if(var_341_bool == 0) goto Label_2084; // 0x822 JumpB
	var_323_bool = 1; // 0x823 MovB
	
Label_2084:
	if(var_323_bool == 0) goto Label_2087; // 0x824 JumpB
	var_322_bool = 1; // 0x825 MovB
	return 0; // 0x826 Return
	
Label_2087:
	var_322_bool = 0; // 0x827 MovB
	return 0; // 0x828 Return
}


func_3613(var_72_object)
{
	var_73_object = Obj(); // 0xe1e PushV
	var_73_object = var_72_object; // 0xe1f Mov
	func_3598(var_73_object); // 0xe20 NEW_2
	return 0; // 0xe22 Return
}


func_3104()
{
	var_382_object = Obj(); var_383_object = Obj(); // 0xc20 PushV
	GetScene(var_383_object); // 0xc21 Func
	var_384_string = "battle"; // 0xc23 PushS
	var_385_object = Obj(); // 0xc24 PushV
	func_2989(var_385_object); // 0xc25 NEW_2
	BroadcastMessage(var_384_string, var_385_object, var_383_object); // 0xc27 Func
	return 2; // 0xc29 Return
}


func_3619(var_21_int)
{
	var_21_int = 2; // 0xe24 MovI
	return 0; // 0xe25 Return
}


func_3622(var_29_object)
{
	var_30_object = Obj(); // 0xe27 PushV
	var_30_object = var_29_object; // 0xe28 Mov
	func_3693(var_30_object); // 0xe29 NEW_2
	return 0; // 0xe2b Return
}


func_2089(var_0_object, var_4_bool, var_341_bool)
{
	var_342_object = Obj(); var_343_bool = 0; var_344_float = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_object = Obj(); var_348_bool = 0; var_349_float = 0; var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); // 0x829 PushV
	GetScene(var_347_object); // 0x82a Func
	var_348_bool = 0; // 0x82c MovB
	
Label_2093:
	var_352_cvector = CVector(0,0,0); var_353_object = Obj(); // 0x82d PushV
	var_353_object = var_0_object; // 0x82e MovT
	func_2474(var_353_object); // 0x82f NEW_2
	var_358_int = -var_352_cvector; // 0x831 Neg
	FindDirLength(var_349_float, var_358_int, var_349_float); // 0x832 Func
	var_359_bool = var_349_float < var_4_bool; // 0x834 LT
	if(var_359_bool == 0) goto Label_2103; // 0x835 JumpB
	goto Label_2131; // 0x836 Jump
	
Label_2131:
	var_341_bool = var_348_bool; // 0x853 Mov
	return 10; // 0x854 Return
	
Label_2103:
	Face(var_0_object); // 0x837 Func
	var_360_string = "all"; // 0x839 PushS
	var_361_string = "bjump"; // 0x83a PushS
	PlayAnimation(var_360_string, var_361_string); // 0x83b Func
	GetPFPosition(var_350_cvector); // 0x83d TObjFunc
	GetPFPosition(var_351_cvector); // 0x83f Func
	WaitForAnimEnd(); // 0x841 Func
	func_2177(var_351_cvector); // 0x844 NEW_2
	StopAsync(); // 0x846 Func
	var_362_cvector = CVector(0.0, 0.0, 0.0); // 0x848 PushVec
	SetSpeed(var_362_cvector); // 0x849 Func
	var_348_bool = 1; // 0x84b MovB
	var_363_bool = 0; // 0x84c PushV
	func_2045(var_351_cvector, var_363_bool); // 0x84d NEW_2
	var_364_bool = var_363_bool == 0; // 0x84f Not
	if(var_364_bool == 0) goto Label_2130; // 0x850 JumpB
	goto Label_2131; // 0x851 Jump
	
Label_2130:
	goto Label_2093; // 0x852 Jump
}


func_3115()
{
	var_132_string = "ood1Doberman2_1"; // 0xc2c PushS
	var_133_int = 1; // 0xc2d PushI
	SetVariable(var_132_string, var_133_int); // 0xc2e Func
	return 0; // 0xc30 Return
}


func_3628()
{
	return 0; // 0xe2c Return
}


func_3629(var_128_int)
{
	var_128_int = 0; // 0xe2e MovI
	return 0; // 0xe2f Return
}


func_3632()
{
	return 0; // 0xe31 Return
}


func_3121(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0xc32 PushV
	var_125_string = "ood1Doberman2_1"; // 0xc33 MovS
	func_3064(var_124_int, var_125_string); // 0xc34 NEW_2
	var_128_int = 0; // 0xc36 PushI
	var_129_bool = var_124_int == var_128_int; // 0xc37 Eq
	if(var_129_bool == 0) goto Label_3131; // 0xc38 JumpB
	var_122_bool = 1; // 0xc39 MovB
	return 0; // 0xc3a Return
	
Label_3131:
	var_122_bool = 0; // 0xc3b MovB
	return 0; // 0xc3c Return
}


func_3634(var_24_bool)
{
	var_24_bool = 0; // 0xe33 MovB
	return 0; // 0xe34 Return
}


func_3637()
{
	return 0; // 0xe36 Return
}


func_3639(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0xe37 PushV
	CanSee(var_34_bool, var_32_object); // 0xe38 Func
	var_31_bool = 1; // 0xe3a MovB
	var_35_bool = var_34_bool; // 0xe3b Push
	if(var_35_bool == 0) goto Label_3653; // 0xe3c JumpB
	var_36_float = 0; var_37_object = Obj(); // 0xe3d PushV
	var_37_object = var_32_object; // 0xe3e Mov
	func_2481(var_37_object); // 0xe3f NEW_2
	var_44_int = 2250000; // 0xe41 PushI
	var_45_bool = var_36_float <= var_44_int; // 0xe42 LE
	if(var_45_bool == 0) goto Label_3653; // 0xe43 JumpB
	var_31_bool = 0; // 0xe44 MovB
	
Label_3653:
	return 2; // 0xe45 Return
}


func_3064(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0xbf8 PushV
	GetVariable(var_125_string, var_127_int); // 0xbf9 Func
	var_124_int = var_127_int; // 0xbfb Mov
	return 2; // 0xbfc Return
}


func_2620(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0xa3c PushV
	var_35_bool = 0; var_36_object = Obj(); // 0xa3d PushV
	var_36_object = var_32_object; // 0xa3e Mov
	func_2584(var_35_bool, var_36_object); // 0xa3f NEW_2
	var_52_bool = var_35_bool == 0; // 0xa41 Not
	if(var_52_bool == 0) goto Label_2629; // 0xa42 JumpB
	var_31_bool = 0; // 0xa43 MovB
	return 2; // 0xa44 Return
	
Label_2629:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0xa45 PushV
	var_54_object = var_32_object; // 0xa46 Mov
	var_55_string = "noaccess"; // 0xa47 MovS
	func_2494(var_53_bool, var_54_object, var_55_string); // 0xa48 NEW_2
	var_62_bool = var_53_bool == 0; // 0xa4a Not
	if(var_62_bool == 0) goto Label_2638; // 0xa4b JumpB
	var_31_bool = 1; // 0xa4c MovB
	return 2; // 0xa4d Return
	
Label_2638:
	var_63_string = "noaccess"; // 0xa4e PushS
	GetProperty(var_63_string, var_34_int); // 0xa4f ObjFunc
	var_64_int = 0; // 0xa51 PushI
	var_31_bool = var_34_int == var_64_int; // 0xa52 Eq2
	return 2; // 0xa53 Return
}


func_3133(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0xc3d PushV
	var_109_string = "branch"; // 0xc3e PushS
	GetVariable(var_109_string, var_108_int); // 0xc3f Func
	var_110_int = 0; // 0xc41 PushI
	var_111_bool = var_108_int == var_110_int; // 0xc42 Eq
	if(var_111_bool == 0) goto Label_3143; // 0xc43 JumpB
	var_106_int = 1; // 0xc44 MovI
	return 2; // 0xc45 Return
	
Label_3143:
	var_112_int = 1; // 0xc47 PushI
	var_113_bool = var_108_int == var_112_int; // 0xc48 Eq
	if(var_113_bool == 0) goto Label_3148; // 0xc49 JumpB
	var_106_int = 2; // 0xc4a MovI
	return 2; // 0xc4b Return
	
Label_3148:
	var_106_int = 3; // 0xc4c MovI
	return 2; // 0xc4d Return
}


func_3654(var_59_object)
{
	var_60_object = Obj(); // 0xe47 PushV
	var_60_object = var_59_object; // 0xe48 Mov
	func_3580(var_60_object); // 0xe49 NEW_2
	return 0; // 0xe4b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_115_object, var_116_object)
{
	var_0_object = var_116_object; // 0x4b TMov
	var_1_object = var_115_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_121_int = 1; // 0x4e PushI
	if(var_121_int == 0) goto Label_132; // 0x4f JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x50 PushV
	var_123_object = var_1_object; // 0x51 MovT
	func_3121(var_123_object); // 0x52 NEW_2
	if(var_122_bool == 0) goto Label_110; // 0x54 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x55 PushV
	var_130_object = var_1_object; // 0x56 MovT
	var_131_object = var_0_object; // 0x57 MovT
	func_3115(); // 0x58 NEW_2
	var_134_string = ""; // 0x5a PushV
	var_134_string = "Neutral"; // 0x5b MovS
	func_162(var_116_object, var_134_string); // 0x5c NEW_2
	var_151_int = 532749; // 0x5e PushI
	SetMessage(var_151_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_152_int = 533297; // 0x63 PushI
	var_153_int = 34809; // 0x64 PushI
	var_154_int = 34808; // 0x65 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x66 TObjFunc
	var_155_int = 533299; // 0x68 PushI
	var_156_int = 34811; // 0x69 PushI
	var_157_int = 34810; // 0x6a PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_158_bool = 0; // 0x84 PushV
	func_3683(var_158_bool); // 0x85 NEW_2
	if(var_158_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_159_string = var_3_string; // 0x8a PushT
	if(var_159_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_160_string = ""; // 0x8d PushV
	var_160_string = var_2_object; // 0x8e MovT
	func_2873(var_160_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_171_string = "all"; // 0x93 PushS
	var_172_string = "idle"; // 0x94 PushS
	PlayAnimation(var_171_string, var_172_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_173_string = var_3_string; // 0x99 PushT
	if(var_173_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_174_string = "all"; // 0x9c PushS
	var_175_string = "idle"; // 0x9d PushS
	PlayAnimation(var_174_string, var_175_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_176_string = ""; // 0x6e PushV
	var_176_string = "Neutral"; // 0x6f MovS
	func_162(var_116_object, var_176_string); // 0x70 NEW_2
	var_177_int = 532753; // 0x72 PushI
	SetMessage(var_177_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_178_int = 532754; // 0x77 PushI
	var_179_int = -1; // 0x78 PushI
	var_180_int = 34228; // 0x79 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x7a TObjFunc
	var_181_int = 532977; // 0x7c PushI
	var_182_int = -1; // 0x7d PushI
	var_183_int = 34475; // 0x7e PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_3660(var_48_bool)
{
	var_48_bool = 0; // 0xe4d MovB
	return 0; // 0xe4e Return
}


func_3150(var_157_int)
{
	var_158_int = 0; var_159_int = 0; // 0xc4e PushV
	var_160_string = "branch"; // 0xc4f PushS
	GetVariable(var_160_string, var_159_int); // 0xc50 Func
	var_157_int = var_159_int; // 0xc52 Mov
	return 2; // 0xc53 Return
}


func_3663()
{
	return 0; // 0xe50 Return
}


func_3665(var_21_int)
{
	var_21_int = 0; // 0xe52 MovI
	return 0; // 0xe53 Return
}


func_3069(var_477_float)
{
	var_478_object = Obj(); var_479_object = Obj(); // 0xbfd PushV
	CreateFloatVector(var_479_object); // 0xbfe Func
	add(var_477_float); // 0xc00 ObjFunc
	var_480_int = 0; // 0xc02 PushI
	var_481_bool = var_477_float < var_480_int; // 0xc03 LT
	if(var_481_bool == 0) goto Label_3081; // 0xc04 JumpB
	var_482_float = 0.7; // 0xc05 PushF
	var_483_int = 500; // 0xc06 PushI
	RumblePlay(var_482_float, var_483_int); // 0xc07 Func
	
Label_3081:
	var_484_int = 15; // 0xc09 PushI
	SendWorldWndMessage(var_484_int, var_479_object); // 0xc0a Func
	return 2; // 0xc0c Return
}


func_595(var_43_string)
{
	RemoveRTEnvelope(); // 0x254 Func
	SetDeathState(); // 0x256 Func
	Stop(); // 0x258 Func
	StopAsync(); // 0x25a Func
	StopSecondaryAnimation(); // 0x25c Func
	var_44_string = ""; // 0x25e PushV
	var_44_string = var_43_string; // 0x25f Mov
	func_2948(var_44_string); // 0x260 NEW_2
	var_73_string = "all"; // 0x262 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x263 Func
	WaitForAnimEnd(); // 0x265 Func
	var_74_string = "all"; // 0x267 PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x268 Func
	RemoveEnvelope(); // 0x26a Func
	return 0; // 0x26c Return
}


func_3668()
{
	return 0; // 0xe55 Return
}


func_2644(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0xa54 PushV
	var_50_bool = var_35_object == 0; // 0xa55 NullEq
	if(var_50_bool == 0) goto Label_2648; // 0xa56 JumpB
	return 14; // 0xa57 Return
	
Label_2648:
	IsDead(var_43_bool); // 0xa58 Func
	var_51_bool = var_43_bool; // 0xa5a Push
	if(var_51_bool == 0) goto Label_2653; // 0xa5b JumpB
	return 14; // 0xa5c Return
	
Label_2653:
	GetSecondaryAnimationType(var_44_int); // 0xa5d Func
	var_52_int = 0; // 0xa5f PushI
	var_53_bool = var_44_int < var_52_int; // 0xa60 LT
	if(var_53_bool == 0) goto Label_2659; // 0xa61 JumpB
	return 14; // 0xa62 Return
	
Label_2659:
	GetPosition(var_45_cvector); // 0xa63 ObjFunc
	GetPosition(var_46_cvector); // 0xa65 Func
	GetDirection(var_47_cvector); // 0xa67 Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0xa69 Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0xa6a PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0xa6b PushE
	var_56_float = var_54_float * var_55_float; // 0xa6c Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0xa6d PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0xa6e PushE
	var_59_float = var_57_float * var_58_float; // 0xa6f Mult
	var_60_int = var_56_float + var_59_float; // 0xa70 Add
	var_61_int = 0; // 0xa71 PushI
	var_62_bool = var_60_int >= var_61_int; // 0xa72 GE
	if(var_62_bool == 0) goto Label_2678; // 0xa73 JumpB
	var_49_string = "fhit"; // 0xa74 MovS
	goto Label_2679; // 0xa75 Jump
	
Label_2679:
	var_63_string = "hit_react"; // 0xa77 PushS
	var_64_string = "1"; // 0xa78 PushS
	var_65_int = var_49_string + var_64_string; // 0xa79 Add
	var_66_string = "2"; // 0xa7a PushS
	var_67_int = var_49_string + var_66_string; // 0xa7b Add
	var_68_int = -10; // 0xa7c PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0xa7d Func
	return 14; // 0xa7f Return
	
Label_2678:
	var_49_string = "bhit"; // 0xa76 MovS
}


func_2134(var_0_object, var_272_bool)
{
	var_273_bool = 0; var_274_bool = 0; // 0x856 PushV
	var_275_string = "IsAttacking"; // 0x857 PushS
	var_276_int = 1; // 0x858 PushI
	var_277_bool = IsFuncExist(var_0_object, var_275_string, var_276_int); // 0x859 FuncExist
	if(var_277_bool == 0) goto Label_2143; // 0x85a JumpB
	IsAttacking(var_274_bool); // 0x85b TObjFunc
	var_272_bool = var_274_bool; // 0x85d Mov
	return 2; // 0x85e Return
	
Label_2143:
	var_272_bool = 0; // 0x85f MovB
	return 2; // 0x860 Return
}


func_3670(var_26_bool)
{
	var_26_bool = 0; // 0xe57 MovB
	return 0; // 0xe58 Return
}


func_3156(var_35_object)
{
	var_36_int = 0; // 0xc55 PushV
	func_3150(var_36_int); // 0xc56 NEW_2
	var_40_int = 1; // 0xc58 PushI
	var_41_bool = var_36_int == var_40_int; // 0xc59 Eq
	if(var_41_bool == 0) goto Label_3166; // 0xc5a JumpB
	WorkWithCorpse(var_35_object); // 0xc5b Func
	goto Label_3168; // 0xc5d Jump
	
Label_3168:
	return 0; // 0xc60 Return
	
Label_3166:
	Barter(var_35_object); // 0xc5e Func
}


func_3673()
{
	return 0; // 0xe5a Return
}


func_3675(var_103_int)
{
	var_103_int = 518097; // 0xe5b MovI
	return 0; // 0xe5c Return
}


func_3580(var_60_object)
{
	var_61_object = Obj(); // 0xdfd PushV
	var_61_object = var_60_object; // 0xdfe Mov
	TaskCall(5); // 0xdff TaskCall
	func_1246(var_62_object, var_61_object); // 0xe00 NEW_2
	TaskReturn(); // 0xe01 TaskReturn
	return 0; // 0xe03 Return
}


func_3677(var_102_int)
{
	var_102_int = 518096; // 0xe5d MovI
	return 0; // 0xe5e Return
}


func_3679(var_104_string)
{
	var_104_string = "ui/NPC_Citizen2.png"; // 0xe5f MovS
	return 0; // 0xe60 Return
}


func_3681(var_105_string)
{
	var_105_string = "ui/NPC_Citizen2_b.png"; // 0xe61 MovS
	return 0; // 0xe62 Return
}


func_2145(var_2_object, var_5_bool)
{
	var_389_float = 0; var_390_int = 0; var_391_float = 0; var_392_int = 0; // 0x861 PushV
	var_393_bool = var_2_object == 0; // 0x862 Not
	if(var_393_bool == 0) goto Label_2149; // 0x863 JumpB
	return 4; // 0x864 Return
	
Label_2149:
	var_394_bool = var_5_bool; // 0x865 PushT
	if(var_394_bool == 0) goto Label_2157; // 0x866 JumpB
	var_395_int = -1; // 0x867 PushI
	var_5_bool = var_5_bool + var_395_int; // 0x868 Add2
	var_396_int = 0; // 0x869 PushI
	var_397_bool = var_5_bool > var_396_int; // 0x86a GT
	if(var_397_bool == 0) goto Label_2157; // 0x86b JumpB
	return 4; // 0x86c Return
	
Label_2157:
	rand(var_391_float); // 0x86d Func
	var_398_float = 0; // 0x86f PushV
	func_2195(var_398_float); // 0x870 NEW_2
	var_399_bool = var_391_float < var_398_float; // 0x872 LT
	if(var_399_bool == 0) goto Label_2176; // 0x873 JumpB
	irand(var_392_int, var_391_float); // 0x874 Func
	var_400_int = 1; // 0x876 PushI
	var_392_int = var_392_int + var_400_int; // 0x877 Add2
	var_401_string = "attack"; // 0x878 PushS
	var_402_int = var_401_string + var_392_int; // 0x879 Add
	Speak(var_402_int); // 0x87a Func
	var_403_int = 0; // 0x87c PushV
	func_2193(var_403_int); // 0x87d NEW_2
	var_5_bool = var_403_int; // 0x87e TMov
	
Label_2176:
	return 4; // 0x880 Return
}


func_3683(var_97_bool)
{
	var_97_bool = 0; // 0xe63 MovB
	return 0; // 0xe64 Return
}


func_3169(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0; // 0xc61 PushV
	var_130_bool = var_115_int > var_116_int; // 0xc62 GT
	if(var_130_bool == 0) goto Label_3176; // 0xc63 JumpB
	var_131_string = "GenerateMoney: iMin > iMax"; // 0xc64 PushS
	Trace(var_131_string); // 0xc65 Func
	return 4; // 0xc67 Return
	
Label_3176:
	var_128_int = 0; // 0xc68 MovI
	var_132_bool = var_115_int != var_116_int; // 0xc69 Neq
	if(var_132_bool == 0) goto Label_3183; // 0xc6a JumpB
	var_133_int = var_116_int - var_115_int; // 0xc6b Sub
	irand(var_128_int, var_133_int); // 0xc6c Func
	goto Label_3187; // 0xc6e Jump
	
Label_3187:
	var_128_int = var_128_int + var_115_int; // 0xc73 Add2
	var_134_int = 0; // 0xc74 PushI
	var_135_bool = var_128_int == var_134_int; // 0xc75 Eq
	if(var_135_bool == 0) goto Label_3192; // 0xc76 JumpB
	return 4; // 0xc77 Return
	
Label_3192:
	var_136_int = 0; var_137_string = ""; // 0xc78 PushV
	var_137_string = "Money"; // 0xc79 MovS
	func_3369(var_136_int, var_137_string); // 0xc7a NEW_2
	var_140_int = 0; // 0xc7c PushI
	AddItem(var_129_bool, var_136_int, var_140_int, var_128_int); // 0xc7d Func
	return 4; // 0xc7f Return
	
Label_3183:
	var_141_int = 0; // 0xc6f PushI
	var_142_bool = var_115_int == var_141_int; // 0xc70 Eq
	if(var_142_bool == 0) goto Label_3187; // 0xc71 JumpB
	return 4; // 0xc72 Return
}


func_3685()
{
	var_19_bool = GlobalVars[0]; // 0xe65 PushGE
	var_19_bool = 0; // 0xe66 MovB
	GlobalVars[0] = var_19_bool; // 0xe67 PopGE
	var_20_bool = 0; // 0xe68 PushV
	var_20_bool = 1; // 0xe69 MovB
	func_3269(var_20_bool); // 0xe6a NEW_2
	return 0; // 0xe6c Return
}


func_3693(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0xe6d PushV
	var_33_bool = GlobalVars[0]; // 0xe6e PushGE
	if(var_33_bool == 0) goto Label_3706; // 0xe6f JumpB
	IsOverrideActive(var_32_bool); // 0xe70 Func
	var_34_bool = var_32_bool == 0; // 0xe72 Not
	if(var_34_bool == 0) goto Label_3704; // 0xe73 JumpB
	var_35_object = Obj(); // 0xe74 PushV
	var_35_object = var_30_object; // 0xe75 Mov
	func_3156(var_35_object); // 0xe76 NEW_2
	
Label_3704:
	return 2; // 0xe78 Return
	
Label_3706:
	var_42_object = Obj(); // 0xe7a PushV
	var_42_object = var_30_object; // 0xe7b Mov
	func_3744(var_42_object); // 0xe7c NEW_2
	return 2; // 0xe7e Return
}


func_3711(var_63_bool)
{
	var_63_bool = 0; // 0xe7f MovB
	return 0; // 0xe80 Return
}


func_3200(var_163_string)
{
	var_164_object = Obj(); var_165_int = 0; var_166_bool = 0; var_167_object = Obj(); var_168_int = 0; var_169_bool = 0; // 0xc80 PushV
	CreateInvItem(var_167_object); // 0xc81 Func
	SetItemName(var_163_string); // 0xc83 ObjFunc
	var_170_string = "Organ"; // 0xc85 PushS
	var_171_int = 1; // 0xc86 PushI
	SetProperty(var_170_string, var_171_int); // 0xc87 ObjFunc
	GetItemID(var_168_int); // 0xc89 ObjFunc
	var_172_int = 0; // 0xc8b PushI
	var_173_int = 1; // 0xc8c PushI
	AddItem(var_169_bool, var_167_object, var_172_int, var_173_int); // 0xc8d Func
	return 6; // 0xc8f Return
}


func_3713(var_23_bool)
{
	var_23_bool = 1; // 0xe82 MovB
	return 0; // 0xe83 Return
}


func_642()
{
	var_101_bool = 0; // 0x282 PushV
	func_2781(var_101_bool); // 0x283 NEW_2
	var_104_bool = var_101_bool == 0; // 0x285 Not
	if(var_104_bool == 0) goto Label_650; // 0x286 JumpB
	func_3628(); // 0x288 NEW_2
	
Label_650:
	return 0; // 0x28a Return
}


func_2177(var_0_object)
{
	var_145_object = Obj(); // 0x881 PushV
	var_145_object = var_0_object; // 0x882 MovT
	func_3095(var_145_object); // 0x883 NEW_2
	return 0; // 0x885 Return
}


func_3716(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0xe85 PushV
	var_103_object = var_101_object; // 0xe86 Mov
	func_2489(var_102_bool, var_103_object); // 0xe87 NEW_2
	if(var_102_bool == 0) goto Label_3733; // 0xe89 JumpB
	var_106_object = Obj(); // 0xe8a PushV
	func_2989(var_106_object); // 0xe8b NEW_2
	var_109_float = -0.1; // 0xe8d PushF
	var_110_bool = 1; // 0xe8e PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0xe8f Func
	var_111_bool = 0; // 0xe91 PushV
	var_111_bool = 1; // 0xe92 MovB
	func_3241(); // 0xe93 NEW_2
	
Label_3733:
	func_3217(); // 0xe96 NEW_2
	var_177_bool = GlobalVars[0]; // 0xe98 PushGE
	var_177_bool = 1; // 0xe99 MovB
	GlobalVars[0] = var_177_bool; // 0xe9a PopGE
	var_178_int = 50; // 0xe9b PushI
	var_179_int = 40; // 0xe9c PushI
	SetRTEnvelope(var_178_int, var_179_int); // 0xe9d Func
	return 0; // 0xe9f Return
}


func_2688(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0xa80 PushV
	var_43_bool = 0; // 0xa81 PushV
	var_43_bool = 0; // 0xa82 MovB
	var_44_bool = 0; // 0xa83 PushV
	var_44_bool = 0; // 0xa84 MovB
	var_45_object = var_22_object; // 0xa85 Push
	if(var_45_object == 0) goto Label_2699; // 0xa86 JumpB
	var_46_int = 4; // 0xa87 PushI
	var_47_bool = var_23_int != var_46_int; // 0xa88 Neq
	if(var_47_bool == 0) goto Label_2699; // 0xa89 JumpB
	var_44_bool = 1; // 0xa8a MovB
	
Label_2699:
	if(var_44_bool == 0) goto Label_2704; // 0xa8b JumpB
	var_48_int = 5; // 0xa8c PushI
	var_49_bool = var_23_int != var_48_int; // 0xa8d Neq
	if(var_49_bool == 0) goto Label_2704; // 0xa8e JumpB
	var_43_bool = 1; // 0xa8f MovB
	
Label_2704:
	if(var_43_bool == 0) goto Label_2751; // 0xa90 JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa91 PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xa92 PushV
	var_53_object = var_22_object; // 0xa93 Mov
	func_2474(var_53_object); // 0xa94 NEW_2
	var_51_cvector = var_52_cvector; // 0xa95 Mov
	func_2995(var_50_cvector, var_51_cvector); // 0xa97 NEW_2
	var_34_cvector = var_50_cvector; // 0xa98 Mov
	CreateVectorVector(var_35_object); // 0xa9a Func
	var_36_int = 1; // 0xa9c MovI
	
Label_2717:
	var_63_string = "hit"; // 0xa9d PushS
	var_64_int = var_63_string + var_36_int; // 0xa9e Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xa9f Func
	var_65_bool = var_37_bool == 0; // 0xaa1 Not
	if(var_65_bool == 0) goto Label_2724; // 0xaa2 JumpB
	goto Label_2733; // 0xaa3 Jump
	
Label_2733:
	size(var_40_int); // 0xaad ObjFunc
	var_66_int = var_40_int; // 0xaaf Push
	if(var_66_int == 0) goto Label_2750; // 0xab0 JumpB
	irand(var_41_int, var_40_int); // 0xab1 Func
	get(var_42_cvector, var_41_int); // 0xab3 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xab5 PushV
	var_67_object = var_22_object; // 0xab6 Mov
	var_68_int = var_23_int; // 0xab7 Mov
	var_69_float = var_24_float; // 0xab8 Mov
	var_70_cvector = var_42_cvector; // 0xab9 Mov
	var_71_cvector = -var_34_cvector; // 0xaba Neg2
	func_2756(var_69_float, var_70_cvector, var_71_cvector); // 0xabb NEW_2
	return 18; // 0xabd Return
	
Label_2750:
	var_35_object = 0; // 0xabe SetNull
	
Label_2751:
	var_112_object = Obj(); // 0xabf PushV
	var_112_object = var_22_object; // 0xac0 Mov
	func_2644(var_112_object); // 0xac1 NEW_2
	return 18; // 0xac3 Return
	
Label_2724:
	var_113_int = var_39_cvector | var_34_cvector; // 0xaa4 Or
	var_114_float = 0.70711; // 0xaa5 PushF
	var_115_bool = var_113_int >= var_114_float; // 0xaa6 GE
	if(var_115_bool == 0) goto Label_2730; // 0xaa7 JumpB
	add(var_38_cvector); // 0xaa8 ObjFunc
	
Label_2730:
	var_116_int = 1; // 0xaaa PushI
	var_36_int = var_36_int + var_116_int; // 0xaab Add2
	goto Label_2717; // 0xaac Jump
}


func_2182(var_486_int)
{
	var_486_int = 0; // 0x886 MovI
	return 0; // 0x887 Return
}


func_1160()
{
	var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_float = 0; var_138_bool = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_float = 0; var_145_bool = 0; // 0x488 PushV
	WaitForAnimEnd(); // 0x489 Func
	var_146_bool = 0; // 0x48b PushV
	func_2781(var_146_bool); // 0x48c NEW_2
	var_147_bool = var_146_bool == 0; // 0x48e Not
	if(var_147_bool == 0) goto Label_1169; // 0x48f JumpB
	return 14; // 0x490 Return
	
Label_1169:
	var_148_int = 0; // 0x491 PushV
	func_3554(var_148_int); // 0x492 NEW_2
	var_139_int = var_148_int; // 0x493 Mov
	var_140_int = 0; // 0x495 MovI
	
Label_1174:
	var_161_bool = 0; // 0x496 PushV
	var_161_bool = 0; // 0x497 MovB
	var_162_int = 5; // 0x498 PushI
	var_163_bool = var_140_int < var_162_int; // 0x499 LT
	if(var_163_bool == 0) goto Label_1184; // 0x49a JumpB
	var_164_bool = 0; // 0x49b PushV
	func_2781(var_164_bool); // 0x49c NEW_2
	if(var_164_bool == 0) goto Label_1184; // 0x49e JumpB
	var_161_bool = 1; // 0x49f MovB
	
Label_1184:
	if(var_161_bool == 0) goto Label_1236; // 0x4a0 JumpB
	var_165_int = 3; // 0x4a1 PushI
	irand(var_141_int, var_165_int); // 0x4a2 Func
	var_166_int = 0; // 0x4a4 PushI
	var_167_bool = var_141_int == var_166_int; // 0x4a5 Eq
	if(var_167_bool == 0) goto Label_1208; // 0x4a6 JumpB
	var_168_int = var_139_int; // 0x4a7 Push
	if(var_168_int == 0) goto Label_1207; // 0x4a8 JumpB
	irand(var_142_int, var_139_int); // 0x4a9 Func
	var_169_string = "all"; // 0x4ab PushS
	var_170_string = ""; var_171_int = 0; // 0x4ac PushV
	var_171_int = var_142_int; // 0x4ad Mov
	func_3547(var_170_string, var_171_int); // 0x4ae NEW_2
	PlayAnimation(var_169_string, var_170_string); // 0x4b0 Func
	WaitForAnimEnd(var_143_bool); // 0x4b2 Func
	var_172_bool = var_143_bool == 0; // 0x4b4 Not
	if(var_172_bool == 0) goto Label_1207; // 0x4b5 JumpB
	goto Label_1236; // 0x4b6 Jump
	
Label_1236:
	ResetAAS(); // 0x4d4 Func
	return 14; // 0x4d6 Return
	
Label_1207:
	goto Label_1225; // 0x4b7 Jump
	
Label_1225:
	var_173_bool = 0; // 0x4c9 PushV
	func_1239(var_173_bool); // 0x4ca NEW_2
	var_174_bool = var_173_bool == 0; // 0x4cc Not
	if(var_174_bool == 0) goto Label_1231; // 0x4cd JumpB
	goto Label_1236; // 0x4ce Jump
	
Label_1231:
	ResetAAS(); // 0x4cf Func
	var_175_int = 1; // 0x4d1 PushI
	var_140_int = var_140_int + var_175_int; // 0x4d2 Add2
	goto Label_1174; // 0x4d3 Jump
	
Label_1208:
	var_176_int = 1; // 0x4b8 PushI
	var_177_bool = var_141_int == var_176_int; // 0x4b9 Eq
	if(var_177_bool == 0) goto Label_1222; // 0x4ba JumpB
	var_178_int = 4; // 0x4bb PushI
	rand(var_144_float, var_178_int); // 0x4bc Func
	var_179_int = 1; // 0x4be PushI
	var_180_int = var_144_float + var_179_int; // 0x4bf Add
	Sleep(var_180_int, var_145_bool); // 0x4c0 Func
	var_181_bool = var_145_bool == 0; // 0x4c2 Not
	if(var_181_bool == 0) goto Label_1221; // 0x4c3 JumpB
	goto Label_1236; // 0x4c4 Jump
	
Label_1221:
	goto Label_1225; // 0x4c5 Jump
	
Label_1222:
	var_182_int = var_140_int; // 0x4c6 Push
	if(var_182_int == 0) goto Label_1225; // 0x4c7 JumpB
	goto Label_1236; // 0x4c8 Jump
}


func_2184()
{
	var_278_string = ""; // 0x888 PushV
	var_278_string = "attack_stay"; // 0x889 MovS
	func_2948(var_278_string); // 0x88a NEW_2
	return 0; // 0x88c Return
}


func_2189()
{
	return 0; // 0x88e Return
}


func_2191(var_511_bool)
{
	var_511_bool = 1; // 0x88f MovB
	return 0; // 0x890 Return
}


func_2193(var_403_int)
{
	var_403_int = 1; // 0x891 MovI
	return 0; // 0x892 Return
}


func_3217()
{
	var_157_int = 0; // 0xc91 PushV
	func_3150(var_157_int); // 0xc92 NEW_2
	var_161_int = 1; // 0xc94 PushI
	var_162_bool = var_157_int != var_161_int; // 0xc95 Neq
	if(var_162_bool == 0) goto Label_3224; // 0xc96 JumpB
	return 0; // 0xc97 Return
	
Label_3224:
	var_163_string = ""; // 0xc98 PushV
	var_163_string = "liver"; // 0xc99 MovS
	func_3200(var_163_string); // 0xc9a NEW_2
	var_174_string = ""; // 0xc9c PushV
	var_174_string = "kidney"; // 0xc9d MovS
	func_3200(var_174_string); // 0xc9e NEW_2
	var_175_string = ""; // 0xca0 PushV
	var_175_string = "heart"; // 0xca1 MovS
	func_3200(var_175_string); // 0xca2 NEW_2
	var_176_string = ""; // 0xca4 PushV
	var_176_string = "blood"; // 0xca5 MovS
	func_3200(var_176_string); // 0xca6 NEW_2
	return 0; // 0xca8 Return
}


func_2195(var_398_float)
{
	var_398_float = 0.5; // 0x893 MovF
	return 0; // 0x894 Return
}


func_2204(var_2_object, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_bool = 0; var_164_bool = 0; // 0x89c PushV
	var_165_object = Obj(); // 0x89d PushV
	var_165_object = var_153_object; // 0x89e Mov
	func_3095(var_165_object); // 0x89f NEW_2
	var_166_int = 1; // 0x8a1 PushI
	var_167_int = 5; // 0x8a2 PushI
	SetTimer(var_166_int, var_167_int); // 0x8a3 Func
	CanSee(var_163_bool, var_153_object); // 0x8a5 Func
	var_168_bool = var_163_bool; // 0x8a7 Push
	if(var_168_bool == 0) goto Label_2223; // 0x8a8 JumpB
	var_2_object = 1; // 0x8a9 TMovB
	var_169_object = Obj(); // 0x8aa PushV
	var_169_object = var_153_object; // 0x8ab Mov
	func_2904(var_169_object); // 0x8ac NEW_2
	goto Label_2224; // 0x8ae Jump
	
Label_2224:
	var_176_bool = 0; var_177_object = Obj(); // 0x8b0 PushV
	var_177_object = var_153_object; // 0x8b1 Mov
	func_2489(var_176_bool, var_177_object); // 0x8b2 NEW_2
	if(var_176_bool == 0) goto Label_2234; // 0x8b4 JumpB
	var_180_object = Obj(); // 0x8b5 PushV
	func_2989(var_180_object); // 0x8b6 NEW_2
	SendPlayerEnemy(var_153_object, var_180_object); // 0x8b8 Func
	
Label_2234:
	var_181_bool = 0; var_182_object = Obj(); var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_bool = 0; // 0x8ba PushV
	var_182_object = var_153_object; // 0x8bb Mov
	var_183_float = var_154_float; // 0x8bc Mov
	var_184_float = var_155_float; // 0x8bd Mov
	var_185_bool = var_156_bool; // 0x8be Mov
	var_186_bool = var_157_bool; // 0x8bf Mov
	func_2309(var_163_bool, var_164_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool); // 0x8c0 NEW_2
	var_164_bool = var_181_bool; // 0x8c1 Mov
	var_232_object = var_2_object; // 0x8c3 PushT
	if(var_232_object == 0) goto Label_2248; // 0x8c4 JumpB
	var_233_string = "head"; // 0x8c5 PushS
	UnlookAsync(var_233_string); // 0x8c6 Func
	
Label_2248:
	var_234_int = 1; // 0x8c8 PushI
	KillTimer(var_234_int); // 0x8c9 Func
	var_152_bool = var_164_bool; // 0x8cb Mov
	return 4; // 0x8cc Return
	
Label_2223:
	var_2_object = 0; // 0x8af TMovB
}


func_3744(var_42_object)
{
	var_43_int = 0; var_44_object = Obj(); // 0xea1 PushV
	var_44_object = var_42_object; // 0xea2 Mov
	TaskCall(0); // 0xea3 TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0xea4 NEW_2
	TaskReturn(); // 0xea5 TaskReturn
	return 0; // 0xea7 Return
}


func_162(var_2_object, var_134_string)
{
	var_135_bool = 0; // 0xa3 PushV
	func_3683(var_135_bool); // 0xa4 NEW_2
	var_136_bool = var_135_bool == 0; // 0xa6 Not
	if(var_136_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_137_bool = var_134_string == var_2_object; // 0xa9 Eq
	if(var_137_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_138_string = ""; var_139_bool = 0; // 0xac PushV
	var_138_string = var_134_string; // 0xad Mov
	var_140_string = ""; // 0xae PushS
	var_141_bool = var_134_string == var_140_string; // 0xaf Eq
	if(var_141_bool == 0) goto Label_179; // 0xb0 JumpB
	var_139_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_2889(var_138_string, var_139_bool); // 0xb4 NEW_2
	var_2_object = var_134_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_139_bool = 1; // 0xb3 MovB
}


func_3241()
{
	var_112_bool = 0; var_113_bool = 0; // 0xca9 PushV
	var_114_int = 0; // 0xcaa PushI
	ClearSubContainer(var_114_int); // 0xcab Func
	var_115_int = 0; var_116_int = 0; // 0xcad PushV
	var_115_int = 0; // 0xcae MovI
	var_117_int = 10; // 0xcaf PushI
	var_118_int = 0; // 0xcb0 PushV
	func_3086(var_118_int); // 0xcb1 NEW_2
	var_124_int = 10; // 0xcb3 PushI
	var_125_float = var_118_int * var_124_int; // 0xcb4 Mult
	var_116_int = var_117_int + var_125_float; // 0xcb5 Add2
	func_3169(var_115_int, var_116_int); // 0xcb6 NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0xcb8 PushV
	var_143_string = "hook"; // 0xcb9 MovS
	var_144_int = 1; // 0xcba MovI
	var_145_int = 4; // 0xcbb MovI
	func_2922(var_143_string, var_144_int, var_145_int); // 0xcbc NEW_2
	var_154_string = ""; var_155_int = 0; var_156_int = 0; // 0xcbe PushV
	var_154_string = "watch"; // 0xcbf MovS
	var_155_int = 1; // 0xcc0 MovI
	var_156_int = 10; // 0xcc1 MovI
	func_2922(var_154_string, var_155_int, var_156_int); // 0xcc2 NEW_2
	return 2; // 0xcc4 Return
}


func_2756(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xac4 PushV
	GetScene(var_31_object); // 0xac5 Func
	var_33_string = "scripted"; // 0xac7 PushS
	var_34_string = "blood_dir.xml"; // 0xac8 PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xac9 Func
	var_35_object = Obj(); // 0xacb PushV
	var_35_object = var_24_object; // 0xacc Mov
	func_2644(var_35_object); // 0xacd NEW_2
	return 4; // 0xacf Return
}


func_3269(var_20_bool)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0xcc5 PushV
	var_27_int = 0; // 0xcc6 PushI
	ClearSubContainer(var_27_int); // 0xcc7 Func
	var_28_int = 0; // 0xcc9 PushV
	func_3086(var_28_int); // 0xcca NEW_2
	var_26_int = var_28_int; // 0xccb Mov
	var_34_bool = var_20_bool; // 0xccd Push
	if(var_34_bool == 0) goto Label_3323; // 0xcce JumpB
	var_35_string = ""; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0xccf PushV
	var_35_string = "alpha_pills"; // 0xcd0 MovS
	var_36_int = 1; // 0xcd1 MovI
	var_37_int = 2; // 0xcd2 MovI
	var_38_int = 4; // 0xcd3 MovI
	func_2933(var_35_string, var_36_int, var_37_int, var_38_int); // 0xcd4 NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0xcd6 PushV
	var_51_string = "meradorm"; // 0xcd7 MovS
	var_52_int = 2; // 0xcd8 MovI
	var_53_int = 3; // 0xcd9 MovI
	var_54_int = 3; // 0xcda MovI
	func_2933(var_51_string, var_52_int, var_53_int, var_54_int); // 0xcdb NEW_2
	var_55_int = 3; // 0xcdd PushI
	var_56_bool = var_26_int >= var_55_int; // 0xcde GE
	if(var_56_bool == 0) goto Label_3302; // 0xcdf JumpB
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0xce0 PushV
	var_57_string = "beta_pills"; // 0xce1 MovS
	var_58_int = 1; // 0xce2 MovI
	var_59_int = 4; // 0xce3 MovI
	func_2922(var_57_string, var_58_int, var_59_int); // 0xce4 NEW_2
	
Label_3302:
	var_66_int = 8; // 0xce6 PushI
	var_67_bool = var_26_int >= var_66_int; // 0xce7 GE
	if(var_67_bool == 0) goto Label_3313; // 0xce8 JumpB
	var_68_string = ""; var_69_int = 0; var_70_int = 0; var_71_int = 0; // 0xce9 PushV
	var_68_string = "monomicin"; // 0xcea MovS
	var_69_int = 1; // 0xceb MovI
	var_70_int = 2; // 0xcec MovI
	var_71_int = 2; // 0xced MovI
	func_2933(var_68_string, var_69_int, var_70_int, var_71_int); // 0xcee NEW_2
	goto Label_3322; // 0xcf0 Jump
	
Label_3322:
	goto Label_3368; // 0xcfa Jump
	
Label_3368:
	return 6; // 0xd28 Return
	
Label_3313:
	var_72_int = 4; // 0xcf1 PushI
	var_73_bool = var_26_int >= var_72_int; // 0xcf2 GE
	if(var_73_bool == 0) goto Label_3322; // 0xcf3 JumpB
	var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0xcf4 PushV
	var_74_string = "monomicin"; // 0xcf5 MovS
	var_75_int = 1; // 0xcf6 MovI
	var_76_int = 2; // 0xcf7 MovI
	func_2922(var_74_string, var_75_int, var_76_int); // 0xcf8 NEW_2
	
Label_3323:
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0xcfb PushV
	var_77_string = "lockpick"; // 0xcfc MovS
	var_78_int = 1; // 0xcfd MovI
	var_79_int = 4; // 0xcfe MovI
	func_2922(var_77_string, var_78_int, var_79_int); // 0xcff NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0xd01 PushV
	var_80_string = "rifle_ammo"; // 0xd02 MovS
	var_81_int = 1; // 0xd03 MovI
	var_82_int = 2; // 0xd04 MovI
	func_2922(var_80_string, var_81_int, var_82_int); // 0xd05 NEW_2
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0xd07 PushV
	var_83_string = "revolver_ammo"; // 0xd08 MovS
	var_84_int = 1; // 0xd09 MovI
	var_85_int = 2; // 0xd0a MovI
	func_2922(var_83_string, var_84_int, var_85_int); // 0xd0b NEW_2
	var_86_string = ""; var_87_int = 0; var_88_int = 0; var_89_int = 0; // 0xd0d PushV
	var_86_string = "samopal_ammo"; // 0xd0e MovS
	var_87_int = 1; // 0xd0f MovI
	var_88_int = 2; // 0xd10 MovI
	var_89_int = 2; // 0xd11 MovI
	func_2933(var_86_string, var_87_int, var_88_int, var_89_int); // 0xd12 NEW_2
	var_90_int = 8; // 0xd14 PushI
	var_91_bool = var_26_int >= var_90_int; // 0xd15 GE
	if(var_91_bool == 0) goto Label_3359; // 0xd16 JumpB
	var_92_string = ""; var_93_int = 0; var_94_int = 0; var_95_int = 0; // 0xd17 PushV
	var_92_string = "monomicin"; // 0xd18 MovS
	var_93_int = 1; // 0xd19 MovI
	var_94_int = 2; // 0xd1a MovI
	var_95_int = 2; // 0xd1b MovI
	func_2933(var_92_string, var_93_int, var_94_int, var_95_int); // 0xd1c NEW_2
	goto Label_3368; // 0xd1e Jump
	
Label_3359:
	var_96_int = 4; // 0xd1f PushI
	var_97_bool = var_26_int >= var_96_int; // 0xd20 GE
	if(var_97_bool == 0) goto Label_3368; // 0xd21 JumpB
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0xd22 PushV
	var_98_string = "monomicin"; // 0xd23 MovS
	var_99_int = 1; // 0xd24 MovI
	var_100_int = 2; // 0xd25 MovI
	func_2922(var_98_string, var_99_int, var_100_int); // 0xd26 NEW_2
}


func_2770()
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0xad2 PushV
	GetPosition(var_98_cvector); // 0xad3 ObjFunc
	GetPosition(var_99_cvector); // 0xad5 Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0xad7 Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0xad8 PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0xad9 PushE
	RotateAsync(var_101_float, var_102_float); // 0xada Func
	return 6; // 0xadc Return
}


func_1239(var_173_bool)
{
	var_173_bool = 1; // 0x4d7 MovB
	return 0; // 0x4d8 Return
}


func_1241()
{
	StopAnimation(); // 0x4d9 Func
	StopGroup0(); // 0x4db Func
	return 0; // 0x4dd Return
}


func_2267(var_2_object)
{
	var_19_int = 1; // 0x8db PushI
	KillTimer(var_19_int); // 0x8dc Func
	var_20_object = var_2_object; // 0x8de PushT
	if(var_20_object == 0) goto Label_2276; // 0x8df JumpB
	var_2_object = 0; // 0x8e0 TMovB
	var_21_string = "head"; // 0x8e1 PushS
	UnlookAsync(var_21_string); // 0x8e2 Func
	
Label_2276:
	func_2433(var_18_object); // 0x8e5 NEW_2
	return 0; // 0x8e7 Return
}


func_2781(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0; // 0xadd PushV
	IsLoaded(var_103_bool); // 0xade Func
	var_101_bool = var_103_bool; // 0xae0 Mov
	return 2; // 0xae1 Return
}


func_1246(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0x4de PushV
	var_0_object = var_61_object; // 0x4df TMov
	func_1297(var_68_bool); // 0x4e1 NEW_2
	GetDirection(var_66_cvector); // 0x4e3 Func
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0x4e5 PushV
	var_77_object = var_0_object; // 0x4e6 MovT
	func_2474(var_77_object); // 0x4e7 NEW_2
	var_67_cvector = var_76_cvector; // 0x4e8 Mov
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x4ea PushV
	var_83_cvector = var_66_cvector; // 0x4eb Mov
	var_84_cvector = var_67_cvector; // 0x4ec Mov
	func_3047(var_82_float, var_83_cvector, var_84_cvector); // 0x4ed NEW_2
	var_106_int = 0; // 0x4ef PushI
	var_107_bool = var_82_float < var_106_int; // 0x4f0 LT
	if(var_107_bool == 0) goto Label_1272; // 0x4f1 JumpB
	var_108_object = Obj(); // 0x4f2 PushV
	var_108_object = var_0_object; // 0x4f3 MovT
	func_2770(); // 0x4f4 NEW_2
	var_68_bool = 1; // 0x4f6 MovB
	goto Label_1275; // 0x4f7 Jump
	
Label_1275:
	var_117_bool = var_68_bool; // 0x4fb Push
	if(var_117_bool == 0) goto Label_1291; // 0x4fc JumpB
	var_118_object = Obj(); // 0x4fd PushV
	var_118_object = var_0_object; // 0x4fe MovT
	func_2770(); // 0x4ff NEW_2
	var_119_int = 111; // 0x501 PushI
	var_120_float = 0.5; // 0x502 PushF
	SetTimer(var_119_int, var_120_float); // 0x503 Func
	var_121_float = 5.0; // 0x505 PushF
	Sleep(var_121_float); // 0x506 Func
	var_122_int = 111; // 0x508 PushI
	KillTimer(var_122_int); // 0x509 Func
	
Label_1291:
	StopAsync(); // 0x50b Func
	var_123_string = "head"; // 0x50d PushS
	UnlookAsync(var_123_string); // 0x50e Func
	return 6; // 0x510 Return
	
Label_1272:
	var_124_float = 1.5; // 0x4f8 PushF
	Sleep(var_124_float, var_68_bool); // 0x4f9 Func
}


func_2786(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0xae2 PushV
	GetPosition(var_67_cvector); // 0xae3 ObjFunc
	GetEyesHeight(var_66_float); // 0xae5 ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0xae7 PushE
	var_75_float = var_75_float + var_66_float; // 0xae8 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0xae9 PopE
	GetPosition(var_68_cvector); // 0xaea Func
	GetEyesHeight(var_66_float); // 0xaec Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0xaee PushE
	var_76_float = var_76_float + var_66_float; // 0xaef Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0xaf0 PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0xaf1 Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0xaf2 PushE
	var_77_float = 0; // 0xaf3 MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0xaf4 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0xaf5 Or
	var_79_float = sqrt(var_78_int); // 0xaf6 Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0xaf7 Div2
	var_70_cvector = -var_69_cvector; // 0xaf8 Neg2
	var_80_float = var_69_cvector * var_56_float; // 0xaf9 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0xafa PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0xafb PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0xafc Xor2
	func_2995(var_81_cvector, var_82_cvector); // 0xafd NEW_2
	var_89_int = 25; // 0xaff PushI
	var_90_float = var_81_cvector * var_89_int; // 0xb00 Mult
	var_91_int = var_80_float + var_90_float; // 0xb01 Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0xb02 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0xb03 Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0xb04 Add2
	IsOverrideActive(var_73_bool); // 0xb05 Func
	var_93_bool = var_73_bool; // 0xb07 Push
	if(var_93_bool == 0) goto Label_2827; // 0xb08 JumpB
	var_54_bool = 0; // 0xb09 MovB
	return 18; // 0xb0a Return
	
Label_2827:
	StopWorld(); // 0xb0b Func
	var_94_bool = 1; // 0xb0d PushB
	CameraTransit(var_72_cvector, var_70_cvector, var_94_bool); // 0xb0e Func
	var_95_float = GetByIndex(var_71_cvector, 0); // 0xb10 PushE
	var_96_float = GetByIndex(var_71_cvector, 2); // 0xb11 PushE
	Rotate(var_95_float, var_96_float); // 0xb12 Func
	var_97_bool = 0; // 0xb14 PushV
	func_3683(var_97_bool); // 0xb15 NEW_2
	if(var_97_bool == 0) goto Label_2841; // 0xb17 JumpB
	goto Label_2849; // 0xb18 Jump
	
Label_2849:
	CameraWaitForPlayFinish(); // 0xb21 Func
	ResumeWorld(); // 0xb23 Func
	var_54_bool = 1; // 0xb25 MovB
	return 18; // 0xb26 Return
	
Label_2841:
	var_98_string = "head"; // 0xb19 PushS
	HasAnimationTrack(var_74_bool, var_98_string); // 0xb1a Func
	var_99_bool = var_74_bool; // 0xb1c Push
	if(var_99_bool == 0) goto Label_2849; // 0xb1d JumpB
	var_100_string = "head"; // 0xb1e PushS
	LookAsyncCamera(var_100_string); // 0xb1f Func
}


func_1764(var_1_object, var_2_object, var_4_bool)
{
	var_106_bool = 0; var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_bool = 0; var_111_cvector = CVector(0,0,0); // 0x6e4 PushV
	var_1_object = 0; // 0x6e5 TMovI
	
Label_1766:
	var_112_string = "all"; // 0x6e6 PushS
	var_113_string = "attack_begin"; // 0x6e7 PushS
	var_114_int = 1; // 0x6e8 PushI
	var_115_int = var_1_object + var_114_int; // 0x6e9 Add
	var_116_int = var_113_string + var_115_int; // 0x6ea Add
	HasAnimation(var_109_bool, var_112_string, var_116_int); // 0x6eb Func
	var_117_bool = var_109_bool == 0; // 0x6ed Not
	if(var_117_bool == 0) goto Label_1776; // 0x6ee JumpB
	goto Label_1779; // 0x6ef Jump
	
Label_1779:
	var_2_object = 0; // 0x6f3 TMovI
	
Label_1780:
	var_118_string = "attack"; // 0x6f4 PushS
	var_119_int = 1; // 0x6f5 PushI
	var_120_int = var_2_object + var_119_int; // 0x6f6 Add
	var_121_int = var_118_string + var_120_int; // 0x6f7 Add
	IsExisting3DSound(var_110_bool, var_121_int); // 0x6f8 Func
	var_122_bool = var_110_bool == 0; // 0x6fa Not
	if(var_122_bool == 0) goto Label_1789; // 0x6fb JumpB
	goto Label_1792; // 0x6fc Jump
	
Label_1792:
	var_123_string = "all"; // 0x700 PushS
	var_124_string = "bjump"; // 0x701 PushS
	GetAnimationOffset(var_111_cvector, var_123_string, var_124_string); // 0x702 Func
	var_125_float = GetByIndex(var_111_cvector, 2); // 0x704 PushE
	var_4_bool = -var_125_float; // 0x705 Neg2
	return 6; // 0x706 Return
	
Label_1789:
	var_126_int = 1; // 0x6fd PushI
	var_2_object = var_2_object + var_126_int; // 0x6fe Add2
	goto Label_1780; // 0x6ff Jump
	
Label_1776:
	var_127_int = 1; // 0x6f0 PushI
	var_1_object = var_1_object + var_127_int; // 0x6f1 Add2
	goto Label_1766; // 0x6f2 Jump
}


func_2309(var_0_object, var_1_object, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool)
{
	var_187_bool = 0; var_188_bool = 0; var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_bool = 0; var_196_bool = 0; var_197_object = Obj(); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_object = Obj(); // 0x905 PushV
	var_0_object = 0; // 0x906 TMovB
	var_1_object = var_182_object; // 0x907 TMov
	var_196_bool = var_186_bool; // 0x908 Mov
	
Label_2313:
	var_203_bool = 0; var_204_object = Obj(); // 0x909 PushV
	var_204_object = var_182_object; // 0x90a Mov
	func_2449(var_203_bool, var_204_object); // 0x90b NEW_2
	var_207_bool = var_203_bool == 0; // 0x90d Not
	if(var_207_bool == 0) goto Label_2321; // 0x90e JumpB
	var_181_bool = 0; // 0x90f MovB
	return 16; // 0x910 Return
	
Label_2321:
	GetPosition(var_198_cvector); // 0x911 ObjFunc
	GetPosition(var_199_cvector); // 0x913 Func
	var_200_cvector = var_198_cvector - var_199_cvector; // 0x915 Sub2
	var_201_float = var_200_cvector | var_200_cvector; // 0x916 Or2
	var_208_bool = 0; // 0x917 PushV
	var_208_bool = 0; // 0x918 MovB
	var_209_int = 0; // 0x919 PushI
	var_210_bool = var_184_float > var_209_int; // 0x91a GT
	if(var_210_bool == 0) goto Label_2336; // 0x91b JumpB
	var_211_float = var_184_float * var_184_float; // 0x91c Mult
	var_212_bool = var_201_float > var_211_float; // 0x91d GT
	if(var_212_bool == 0) goto Label_2336; // 0x91e JumpB
	var_208_bool = 1; // 0x91f MovB
	
Label_2336:
	if(var_208_bool == 0) goto Label_2341; // 0x920 JumpB
	Stop(); // 0x921 Func
	var_181_bool = 0; // 0x923 MovB
	return 16; // 0x924 Return
	
Label_2341:
	var_213_float = var_183_float * var_183_float; // 0x925 Mult
	var_214_bool = var_201_float > var_213_float; // 0x926 GT
	if(var_214_bool == 0) goto Label_2403; // 0x927 JumpB
	GetPFPosition(var_198_cvector); // 0x928 ObjFunc
	FindPathTo(var_202_object, var_198_cvector); // 0x92a Func
	var_215_bool = var_202_object != 0; // 0x92c NullNeq
	if(var_215_bool == 0) goto Label_2352; // 0x92d JumpB
	var_197_object = var_202_object; // 0x92e Mov
	var_202_object = 0; // 0x92f SetNull
	
Label_2352:
	var_216_bool = var_197_object != 0; // 0x930 NullNeq
	if(var_216_bool == 0) goto Label_2385; // 0x931 JumpB
	var_217_bool = var_196_bool; // 0x932 Push
	if(var_217_bool == 0) goto Label_2362; // 0x933 JumpB
	var_196_bool = 0; // 0x934 MovB
	RotatePath(var_197_object, var_195_bool); // 0x935 Func
	var_218_bool = var_195_bool == 0; // 0x937 Not
	if(var_218_bool == 0) goto Label_2362; // 0x938 JumpB
	goto Label_2409; // 0x939 Jump
	
Label_2409:
	var_181_bool = !var_0_object; // 0x969 Not2
	return 16; // 0x96a Return
	
Label_2362:
	var_219_int = 0; // 0x93a PushI
	var_220_float = 0.3; // 0x93b PushF
	SetTimer(var_219_int, var_220_float); // 0x93c Func
	var_221_string = ""; // 0x93e PushV
	func_2456(var_221_string); // 0x93f NEW_2
	var_222_string = ""; // 0x941 PushV
	func_2458(var_222_string); // 0x942 NEW_2
	FollowPath(var_197_object, var_185_bool, var_195_bool, var_221_string, var_222_string); // 0x944 Func
	var_223_bool = var_195_bool == 0; // 0x946 Not
	if(var_223_bool == 0) goto Label_2383; // 0x947 JumpB
	var_224_object = var_0_object; // 0x948 PushT
	if(var_224_object == 0) goto Label_2381; // 0x949 JumpB
	var_197_object = 0; // 0x94a SetNull
	goto Label_2409; // 0x94b Jump
	
Label_2381:
	goto Label_2408; // 0x94d Jump
	
Label_2408:
	goto Label_2313; // 0x968 Jump
	
Label_2383:
	var_197_object = 0; // 0x94f SetNull
	goto Label_2401; // 0x950 Jump
	
Label_2401:
	var_202_object = 0; // 0x961 SetNull
	goto Label_2407; // 0x962 Jump
	
Label_2407:
	var_197_object = 0; // 0x967 SetNull
	
Label_2385:
	var_225_int = 0; // 0x951 PushI
	KillTimer(var_225_int); // 0x952 Func
	var_226_float = 0.5; // 0x954 PushF
	Sleep(var_226_float, var_195_bool); // 0x955 Func
	var_227_bool = var_195_bool == 0; // 0x957 Not
	if(var_227_bool == 0) goto Label_2397; // 0x958 JumpB
	var_228_object = var_0_object; // 0x959 PushT
	if(var_228_object == 0) goto Label_2397; // 0x95a JumpB
	var_197_object = 0; // 0x95b SetNull
	goto Label_2409; // 0x95c Jump
	
Label_2397:
	var_229_int = 0; // 0x95d PushI
	var_230_float = 0.3; // 0x95e PushF
	SetTimer(var_229_int, var_230_float); // 0x95f Func
	
Label_2403:
	var_231_int = 0; // 0x963 PushI
	KillTimer(var_231_int); // 0x964 Func
	goto Label_2409; // 0x966 Jump
}


func_1799(var_0_object, var_407_float, var_408_int)
{
	var_409_object = Obj(); var_410_float = 0; var_411_float = 0; var_412_object = Obj(); var_413_float = 0; var_414_float = 0; // 0x707 PushV
	var_415_float = 0.9; // 0x708 PushF
	var_416_float = var_407_float * var_415_float; // 0x709 Mult
	GetVictim(var_416_float, var_412_object); // 0x70a Func
	ReportAttack(var_0_object); // 0x70c Func
	var_417_bool = var_412_object == var_0_object; // 0x70e Eq
	if(var_417_bool == 0) goto Label_1836; // 0x70f JumpB
	var_418_float = 0; var_419_object = Obj(); var_420_int = 0; // 0x710 PushV
	var_419_object = var_412_object; // 0x711 Mov
	var_420_int = var_408_int; // 0x712 Mov
	func_1529(var_420_int); // 0x713 NEW_2
	var_413_float = var_418_float; // 0x714 Mov
	var_421_float = 0; var_422_object = Obj(); var_423_float = 0; var_424_int = 0; // 0x716 PushV
	var_422_object = var_412_object; // 0x717 Mov
	var_423_float = var_413_float; // 0x718 Mov
	var_425_int = 0; var_426_object = Obj(); var_427_int = 0; // 0x719 PushV
	var_426_object = var_412_object; // 0x71a Mov
	var_427_int = var_408_int; // 0x71b Mov
	func_1532(var_427_int); // 0x71c NEW_2
	var_424_int = var_425_int; // 0x71d Mov
	func_2506(var_421_float, var_422_object, var_423_float, var_424_int); // 0x71f NEW_2
	var_414_float = var_421_float; // 0x720 Mov
	var_486_int = 0; // 0x722 PushV
	func_2182(var_486_int); // 0x723 NEW_2
	ReportHit(var_0_object, var_486_int, var_414_float, var_413_float); // 0x725 Func
	var_487_object = Obj(); var_488_float = 0; // 0x727 PushV
	var_487_object = var_412_object; // 0x728 Mov
	var_488_float = var_414_float; // 0x729 Mov
	func_2189(); // 0x72a NEW_2
	
Label_1836:
	return 6; // 0x72c Return
}


func_1297(var_0_object)
{
	var_69_object = Obj(); // 0x511 PushV
	var_69_object = var_0_object; // 0x512 MovT
	func_2904(var_69_object); // 0x513 NEW_2
	return 0; // 0x515 Return
}


func_2855()
{
	var_186_bool = 0; var_187_bool = 0; // 0xb27 PushV
	var_188_bool = 1; // 0xb28 PushB
	CameraSwitchToNormal(var_188_bool); // 0xb29 Func
	var_189_bool = 0; // 0xb2b PushV
	func_3683(var_189_bool); // 0xb2c NEW_2
	if(var_189_bool == 0) goto Label_2864; // 0xb2e JumpB
	goto Label_2872; // 0xb2f Jump
	
Label_2872:
	return 2; // 0xb38 Return
	
Label_2864:
	var_190_string = "head"; // 0xb30 PushS
	HasAnimationTrack(var_187_bool, var_190_string); // 0xb31 Func
	var_191_bool = var_187_bool; // 0xb33 Push
	if(var_191_bool == 0) goto Label_2872; // 0xb34 JumpB
	var_192_string = "head"; // 0xb35 PushS
	UnlookAsync(var_192_string); // 0xb36 Func
}


func_3369(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0; // 0xd29 PushV
	GetInvItemByName(var_139_int, var_137_string); // 0xd2a Func
	var_136_int = var_139_int; // 0xd2c Mov
	return 2; // 0xd2d Return
}


func_1838(var_0_object, var_370_bool, var_371_float)
{
	var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = ""; var_376_int = 0; var_377_bool = 0; var_378_int = 0; var_379_string = ""; // 0x72e PushV
	func_2177(var_379_string); // 0x730 NEW_2
	irand(var_376_int, var_379_string); // 0x732 Func
	var_380_int = 1; // 0x734 PushI
	var_376_int = var_376_int + var_380_int; // 0x735 Add2
	Face(var_0_object); // 0x736 Func
	var_381_bool = 1; // 0x738 PushB
	SetAttackState(var_381_bool); // 0x739 Func
	func_3104(); // 0x73c NEW_2
	var_386_string = "all"; // 0x73e PushS
	var_387_string = "attack_begin"; // 0x73f PushS
	var_388_int = var_387_string + var_376_int; // 0x740 Add
	PlayAnimation(var_386_string, var_388_int); // 0x741 Func
	WaitForAnimEnd(); // 0x743 Func
	func_2145(var_378_int, var_379_string); // 0x746 NEW_2
	var_404_bool = 0; var_405_object = Obj(); // 0x748 PushV
	var_405_object = var_0_object; // 0x749 MovT
	func_2620(var_404_bool, var_405_object); // 0x74a NEW_2
	var_406_bool = var_404_bool == 0; // 0x74c Not
	if(var_406_bool == 0) goto Label_1874; // 0x74d JumpB
	StopAsync(); // 0x74e Func
	var_370_bool = 0; // 0x750 MovB
	return 8; // 0x751 Return
	
Label_1874:
	var_407_float = 0; var_408_int = 0; // 0x752 PushV
	var_407_float = var_371_float; // 0x753 Mov
	var_408_int = var_376_int; // 0x754 Mov
	func_1799(var_379_string, var_407_float, var_408_int); // 0x755 NEW_2
	var_489_string = "all"; // 0x757 PushS
	var_490_string = "attack_middle"; // 0x758 PushS
	var_491_int = var_490_string + var_376_int; // 0x759 Add
	HasAnimation(var_377_bool, var_489_string, var_491_int); // 0x75a Func
	var_492_bool = var_377_bool; // 0x75c Push
	if(var_492_bool == 0) goto Label_1955; // 0x75d JumpB
	func_3104(); // 0x75f NEW_2
	var_493_string = "all"; // 0x761 PushS
	var_494_string = "attack_middle"; // 0x762 PushS
	var_495_int = var_494_string + var_376_int; // 0x763 Add
	PlayAnimation(var_493_string, var_495_int); // 0x764 Func
	WaitForAnimEnd(); // 0x766 Func
	func_2177(var_379_string); // 0x769 NEW_2
	var_496_bool = 0; var_497_object = Obj(); // 0x76b PushV
	var_497_object = var_0_object; // 0x76c MovT
	func_2620(var_496_bool, var_497_object); // 0x76d NEW_2
	var_498_bool = var_496_bool == 0; // 0x76f Not
	if(var_498_bool == 0) goto Label_1909; // 0x770 JumpB
	StopAsync(); // 0x771 Func
	var_370_bool = 0; // 0x773 MovB
	return 8; // 0x774 Return
	
Label_1909:
	var_499_float = 0; var_500_int = 0; // 0x775 PushV
	var_499_float = var_371_float; // 0x776 Mov
	var_500_int = var_376_int; // 0x777 Mov
	func_1799(var_379_string, var_499_float, var_500_int); // 0x778 NEW_2
	var_378_int = 1; // 0x77a MovI
	
Label_1915:
	var_501_string = "attack_middle"; // 0x77b PushS
	var_502_int = var_501_string + var_376_int; // 0x77c Add
	var_503_string = "_"; // 0x77d PushS
	var_504_int = var_502_int + var_503_string; // 0x77e Add
	var_379_string = var_504_int + var_378_int; // 0x77f Add2
	var_505_string = "all"; // 0x780 PushS
	HasAnimation(var_377_bool, var_505_string, var_379_string); // 0x781 Func
	var_506_bool = var_377_bool == 0; // 0x783 Not
	if(var_506_bool == 0) goto Label_1926; // 0x784 JumpB
	goto Label_1955; // 0x785 Jump
	
Label_1955:
	var_507_bool = 0; // 0x7a3 PushB
	SetAttackState(var_507_bool); // 0x7a4 Func
	var_508_string = "all"; // 0x7a6 PushS
	var_509_string = "attack_end"; // 0x7a7 PushS
	var_510_int = var_509_string + var_376_int; // 0x7a8 Add
	PlayAnimation(var_508_string, var_510_int); // 0x7a9 Func
	var_511_bool = 0; // 0x7ab PushV
	func_2191(var_511_bool); // 0x7ac NEW_2
	if(var_511_bool == 0) goto Label_1973; // 0x7ae JumpB
	var_512_bool = 0; var_513_float = 0; // 0x7af PushV
	var_513_float = 0.75; // 0x7b0 MovF
	func_1975(var_512_bool, var_513_float); // 0x7b1 NEW_2
	StopAsync(); // 0x7b3 Func
	
Label_1973:
	var_370_bool = 1; // 0x7b5 MovB
	return 8; // 0x7b6 Return
	
Label_1926:
	func_3104(); // 0x787 NEW_2
	var_521_string = "all"; // 0x789 PushS
	PlayAnimation(var_521_string, var_379_string); // 0x78a Func
	WaitForAnimEnd(); // 0x78c Func
	func_2177(var_379_string); // 0x78f NEW_2
	var_522_bool = 0; var_523_object = Obj(); // 0x791 PushV
	var_523_object = var_0_object; // 0x792 MovT
	func_2620(var_522_bool, var_523_object); // 0x793 NEW_2
	var_524_bool = var_522_bool == 0; // 0x795 Not
	if(var_524_bool == 0) goto Label_1947; // 0x796 JumpB
	StopAsync(); // 0x797 Func
	var_370_bool = 0; // 0x799 MovB
	return 8; // 0x79a Return
	
Label_1947:
	var_525_float = 0; var_526_int = 0; // 0x79b PushV
	var_525_float = var_371_float; // 0x79c Mov
	var_526_int = var_376_int; // 0x79d Mov
	func_1799(var_379_string, var_525_float, var_526_int); // 0x79e NEW_2
	var_527_int = 1; // 0x7a0 PushI
	var_378_int = var_378_int + var_527_int; // 0x7a1 Add2
	goto Label_1915; // 0x7a2 Jump
}


func_3374(var_19_object)
{
	var_20_object = Obj(); // 0xd2f PushV
	var_20_object = var_19_object; // 0xd30 Mov
	TaskCall(2); // 0xd31 TaskCall
	func_471(var_20_object); // 0xd32 NEW_2
	TaskReturn(); // 0xd33 TaskReturn
	return 0; // 0xd35 Return
}


func_2873(var_160_string)
{
	var_161_bool = 0; var_162_float = 0; var_163_float = 0; var_164_bool = 0; var_165_float = 0; var_166_float = 0; // 0xb39 PushV
	lshHasAnimation(var_164_bool, var_160_string); // 0xb3a Func
	var_167_bool = var_164_bool; // 0xb3c Push
	if(var_167_bool == 0) goto Label_2884; // 0xb3d JumpB
	lshGetAnimTimes(var_160_string, var_165_float, var_166_float); // 0xb3e Func
	var_168_bool = 0; // 0xb40 PushB
	lshPlayAnimation(var_165_float, var_166_float, var_168_bool); // 0xb41 Func
	goto Label_2888; // 0xb43 Jump
	
Label_2888:
	return 6; // 0xb48 Return
	
Label_2884:
	var_169_string = "Can't find lsh animation : "; // 0xb44 PushS
	var_170_int = var_169_string + var_160_string; // 0xb45 Add
	Trace(var_170_int); // 0xb46 Func
}


func_838(var_2_object)
{
	var_19_int = 110; // 0x346 PushI
	KillTimer(var_19_int); // 0x347 Func
	var_2_object = 0; // 0x349 TMovB
	func_974(var_17_object, var_18_bool); // 0x34b NEW_2
	return 0; // 0x34d Return
}


func_2889(var_138_string, var_139_bool)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0; // 0xb49 PushV
	lshHasAnimation(var_145_bool, var_138_string); // 0xb4a Func
	var_148_bool = var_145_bool; // 0xb4c Push
	if(var_148_bool == 0) goto Label_2899; // 0xb4d JumpB
	lshGetAnimTimes(var_138_string, var_146_float, var_147_float); // 0xb4e Func
	lshPlayAnimation(var_146_float, var_147_float, var_139_bool); // 0xb50 Func
	goto Label_2903; // 0xb52 Jump
	
Label_2903:
	return 6; // 0xb57 Return
	
Label_2899:
	var_149_string = "Can't find lsh animation : "; // 0xb53 PushS
	var_150_int = var_149_string + var_138_string; // 0xb54 Add
	Trace(var_150_int); // 0xb55 Func
}


func_846(var_2_object)
{
	var_68_int = 110; // 0x34e PushI
	KillTimer(var_68_int); // 0x34f Func
	var_2_object = 0; // 0x351 TMovB
	func_981(var_22_bool, var_23_int); // 0x353 NEW_2
	return 0; // 0x355 Return
}


func_2904(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xb58 PushV
	GetEyesHeight(var_25_float); // 0xb59 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xb5b MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xb5c PushE
	var_27_float = var_25_float; // 0xb5d Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xb5e PopE
	var_28_string = "head"; // 0xb5f PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xb60 Func
	return 4; // 0xb62 Return
}


func_3419(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0xd5c PushS
	var_26_bool = var_24_string == var_25_string; // 0xd5d Eq
	if(var_26_bool == 0) goto Label_3430; // 0xd5e JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd5f PushV
	var_28_object = var_23_object; // 0xd60 Mov
	func_3634(var_28_object); // 0xd61 NEW_2
	var_22_bool = var_27_bool; // 0xd62 Mov
	return 0; // 0xd64 Return
	
Label_3430:
	var_29_string = "player_shot"; // 0xd66 PushS
	var_30_bool = var_24_string == var_29_string; // 0xd67 Eq
	if(var_30_bool == 0) goto Label_3440; // 0xd68 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xd69 PushV
	var_32_object = var_23_object; // 0xd6a Mov
	func_3639(var_31_bool, var_32_object); // 0xd6b NEW_2
	var_22_bool = var_31_bool; // 0xd6c Mov
	return 0; // 0xd6e Return
	
Label_3440:
	var_46_string = "battle"; // 0xd70 PushS
	var_47_bool = var_24_string == var_46_string; // 0xd71 Eq
	if(var_47_bool == 0) goto Label_3449; // 0xd72 JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0xd73 PushV
	var_49_object = var_23_object; // 0xd74 Mov
	func_3660(var_49_object); // 0xd75 NEW_2
	var_22_bool = var_48_bool; // 0xd76 Mov
	return 0; // 0xd78 Return
	
Label_3449:
	var_22_bool = 0; // 0xd79 MovB
	return 0; // 0xd7a Return
}


func_863(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x35f PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x360 PushV
	var_25_object = var_19_object; // 0x361 Mov
	func_2620(var_24_bool, var_25_object); // 0x362 NEW_2
	var_58_bool = var_24_bool == 0; // 0x364 Not
	if(var_58_bool == 0) goto Label_871; // 0x365 JumpB
	return 4; // 0x366 Return
	
Label_871:
	var_59_object = var_2_object; // 0x367 PushT
	if(var_59_object == 0) goto Label_874; // 0x368 JumpB
	return 4; // 0x369 Return
	
Label_874:
	IsPlayerActor(var_19_object, var_22_bool); // 0x36a Func
	var_60_bool = var_22_bool == 0; // 0x36c Not
	if(var_60_bool == 0) goto Label_879; // 0x36d JumpB
	return 4; // 0x36e Return
	
Label_879:
	var_61_int = 0; var_62_object = Obj(); // 0x36f PushV
	var_62_object = var_19_object; // 0x370 Mov
	func_3571(var_62_object); // 0x371 NEW_2
	var_23_int = var_61_int; // 0x372 Mov
	var_64_int = 0; // 0x374 PushI
	var_65_bool = var_23_int > var_64_int; // 0x375 GT
	if(var_65_bool == 0) goto Label_902; // 0x376 JumpB
	var_66_int = 1; // 0x377 PushI
	var_67_bool = var_23_int > var_66_int; // 0x378 GT
	if(var_67_bool == 0) goto Label_893; // 0x379 JumpB
	func_846(var_23_int); // 0x37b NEW_2
	
Label_893:
	var_69_object = Obj(); // 0x37d PushV
	var_69_object = var_19_object; // 0x37e Mov
	func_3580(var_69_object); // 0x37f NEW_2
	var_2_object = 1; // 0x381 TMovB
	var_134_int = 110; // 0x382 PushI
	var_135_float = 10.0; // 0x383 PushF
	SetTimer(var_134_int, var_135_float); // 0x384 Func
	
Label_902:
	return 4; // 0x386 Return
}


func_2915()
{
	var_21_bool = 0; // 0xb63 PushV
	func_3683(var_21_bool); // 0xb64 NEW_2
	if(var_21_bool == 0) goto Label_2921; // 0xb66 JumpB
	lshStopSpeech(); // 0xb67 Func
	
Label_2921:
	return 0; // 0xb69 Return
}


func_2922(var_57_string, var_58_int, var_59_int)
{
	var_60_bool = 0; var_61_bool = 0; // 0xb6a PushV
	var_62_bool = 0; var_63_int = 0; var_64_int = 0; // 0xb6b PushV
	var_63_int = var_58_int; // 0xb6c Mov
	var_64_int = var_59_int; // 0xb6d Mov
	func_3023(var_62_bool, var_63_int, var_64_int); // 0xb6e NEW_2
	if(var_62_bool == 0) goto Label_2932; // 0xb70 JumpB
	var_65_int = 0; // 0xb71 PushI
	AddItem(var_61_bool, var_57_string, var_65_int); // 0xb72 Func
	
Label_2932:
	return 2; // 0xb74 Return
}


func_2411(var_0_object, var_1_object, var_26_int)
{
	var_27_int = 0; // 0x96c PushI
	var_28_bool = var_26_int != var_27_int; // 0x96d Neq
	if(var_28_bool == 0) goto Label_2416; // 0x96e JumpB
	return 0; // 0x96f Return
	
Label_2416:
	var_29_bool = 0; var_30_object = Obj(); // 0x970 PushV
	var_30_object = var_1_object; // 0x971 MovT
	func_2449(var_29_bool, var_30_object); // 0x972 NEW_2
	var_65_bool = var_29_bool == 0; // 0x974 Not
	if(var_65_bool == 0) goto Label_2423; // 0x975 JumpB
	var_0_object = 1; // 0x976 TMovB
	
Label_2423:
	var_66_int = 0; // 0x977 PushI
	KillTimer(var_66_int); // 0x978 Func
	Stop(); // 0x97a Func
	return 0; // 0x97c Return
}


func_2933(var_35_string, var_36_int, var_37_int, var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0xb75 PushV
	var_43_bool = 0; var_44_int = 0; var_45_int = 0; // 0xb76 PushV
	var_44_int = var_36_int; // 0xb77 Mov
	var_45_int = var_37_int; // 0xb78 Mov
	func_3023(var_43_bool, var_44_int, var_45_int); // 0xb79 NEW_2
	if(var_43_bool == 0) goto Label_2947; // 0xb7b JumpB
	irand(var_41_int, var_38_int); // 0xb7c Func
	var_48_int = 0; // 0xb7e PushI
	var_49_int = 1; // 0xb7f PushI
	var_50_int = var_41_int + var_49_int; // 0xb80 Add
	AddItem(var_42_bool, var_35_string, var_48_int, var_50_int); // 0xb81 Func
	
Label_2947:
	return 4; // 0xb83 Return
}


func_3451(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0xd7c PushS
	var_55_bool = var_53_string == var_54_string; // 0xd7d Eq
	if(var_55_bool == 0) goto Label_3460; // 0xd7e JumpB
	var_56_object = Obj(); // 0xd7f PushV
	var_56_object = var_52_object; // 0xd80 Mov
	func_3637(); // 0xd81 NEW_2
	goto Label_3475; // 0xd83 Jump
	
Label_3475:
	return 0; // 0xd93 Return
	
Label_3460:
	var_57_string = "player_shot"; // 0xd84 PushS
	var_58_bool = var_53_string == var_57_string; // 0xd85 Eq
	if(var_58_bool == 0) goto Label_3468; // 0xd86 JumpB
	var_59_object = Obj(); // 0xd87 PushV
	var_59_object = var_52_object; // 0xd88 Mov
	func_3654(var_59_object); // 0xd89 NEW_2
	goto Label_3475; // 0xd8b Jump
	
Label_3468:
	var_125_string = "battle"; // 0xd8c PushS
	var_126_bool = var_53_string == var_125_string; // 0xd8d Eq
	if(var_126_bool == 0) goto Label_3475; // 0xd8e JumpB
	var_127_object = Obj(); // 0xd8f PushV
	var_127_object = var_52_object; // 0xd90 Mov
	func_3663(); // 0xd91 NEW_2
}


func_2433(var_0_object)
{
	var_0_object = 1; // 0x981 TMovB
	var_22_int = 0; // 0x982 PushI
	KillTimer(var_22_int); // 0x983 Func
	Stop(); // 0x985 Func
	return 0; // 0x987 Return
}


func_2948(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xb84 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0xb85 Func
	var_61_bool = var_53_bool == 0; // 0xb87 Not
	if(var_61_bool == 0) goto Label_2973; // 0xb88 JumpB
	var_54_int = 0; // 0xb89 MovI
	
Label_2954:
	var_62_int = 1; // 0xb8a PushI
	var_63_int = var_54_int + var_62_int; // 0xb8b Add
	var_64_int = var_44_string + var_63_int; // 0xb8c Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0xb8d Func
	var_65_bool = var_55_bool == 0; // 0xb8f Not
	if(var_65_bool == 0) goto Label_2962; // 0xb90 JumpB
	goto Label_2965; // 0xb91 Jump
	
Label_2965:
	var_66_bool = var_54_int == 0; // 0xb95 Not
	if(var_66_bool == 0) goto Label_2968; // 0xb96 JumpB
	return 16; // 0xb97 Return
	
Label_2968:
	irand(var_56_int, var_54_int); // 0xb98 Func
	var_67_int = 1; // 0xb9a PushI
	var_68_int = var_56_int + var_67_int; // 0xb9b Add
	var_44_string = var_44_string + var_68_int; // 0xb9c Add2
	
Label_2973:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0xb9d Func
	var_69_bool = var_57_bool; // 0xb9f Push
	if(var_69_bool == 0) goto Label_2988; // 0xba0 JumpB
	GetEyesHeight(var_58_float); // 0xba1 Func
	GetDirection(var_59_cvector); // 0xba3 Func
	var_70_int = 50; // 0xba5 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0xba6 Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0xba7 PushE
	var_71_float = var_71_float + var_58_float; // 0xba8 Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0xba9 PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0xbaa Func
	
Label_2988:
	return 16; // 0xbac Return
	
Label_2962:
	var_72_int = 1; // 0xb92 PushI
	var_54_int = var_54_int + var_72_int; // 0xb93 Add2
	goto Label_2954; // 0xb94 Jump
}


func_903(var_0_object, var_1_object)
{
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; var_109_object = Obj(); var_110_bool = 0; var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_object = Obj(); var_116_bool = 0; // 0x387 PushV
	var_0_object = 0; // 0x388 TMovB
	var_1_object = 0; // 0x389 TMovB
	var_117_float = 0.5; // 0x38a PushF
	rand(var_111_float, var_117_float); // 0x38b Func
	Sleep(var_111_float); // 0x38d Func
	
Label_911:
	var_118_bool = var_0_object == 0; // 0x38f Not
	if(var_118_bool == 0) goto Label_961; // 0x390 JumpB
	var_119_bool = var_1_object == 0; // 0x391 Not
	if(var_119_bool == 0) goto Label_930; // 0x392 JumpB
	
Label_915:
	GetPosition(var_113_cvector); // 0x393 Func
	var_120_float = 0; // 0x395 PushV
	func_962(var_120_float); // 0x396 NEW_2
	GetRandomPFPointInCircle(var_112_cvector, var_113_cvector, var_120_float, var_114_bool); // 0x398 Func
	var_123_bool = var_114_bool; // 0x39a Push
	if(var_123_bool == 0) goto Label_925; // 0x39b JumpB
	goto Label_929; // 0x39c Jump
	
Label_929:
	goto Label_931; // 0x3a1 Jump
	
Label_931:
	var_124_object = Obj(); var_125_cvector = CVector(0,0,0); // 0x3a3 PushV
	var_125_cvector = var_112_cvector; // 0x3a4 Mov
	func_990(var_124_object, var_125_cvector); // 0x3a5 NEW_2
	var_115_object = var_124_object; // 0x3a6 Mov
	var_128_bool = var_115_object != 0; // 0x3a8 NullNeq
	if(var_128_bool == 0) goto Label_956; // 0x3a9 JumpB
	RotatePath(var_115_object, var_116_bool); // 0x3aa Func
	var_129_bool = var_116_bool; // 0x3ac Push
	if(var_129_bool == 0) goto Label_955; // 0x3ad JumpB
	var_130_bool = 0; // 0x3ae PushV
	func_988(var_130_bool); // 0x3af NEW_2
	FollowPath(var_115_object, var_130_bool, var_116_bool); // 0x3b1 Func
	var_115_object = 0; // 0x3b3 SetNull
	var_131_bool = var_116_bool; // 0x3b4 Push
	if(var_131_bool == 0) goto Label_955; // 0x3b5 JumpB
	TaskCall(4); // 0x3b7 TaskCall
	func_1160(); // 0x3b8 NEW_2
	TaskReturn(); // 0x3b9 TaskReturn
	
Label_955:
	goto Label_959; // 0x3bb Jump
	
Label_959:
	var_115_object = 0; // 0x3bf SetNull
	goto Label_911; // 0x3c0 Jump
	
Label_956:
	var_183_int = 1; // 0x3bc PushI
	Sleep(var_183_int); // 0x3bd Func
	
Label_925:
	var_184_int = 1; // 0x39d PushI
	Sleep(var_184_int); // 0x39e Func
	goto Label_915; // 0x3a0 Jump
	
Label_930:
	var_1_object = 0; // 0x3a2 TMovB
	
Label_961:
	return 12; // 0x3c1 Return
}


func_2449(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x992 PushV
	var_32_object = var_30_object; // 0x993 Mov
	func_2620(var_31_bool, var_32_object); // 0x994 NEW_2
	var_29_bool = var_31_bool; // 0x995 Mov
	return 0; // 0x997 Return
}


func_3476(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xd94 PushV
	var_23_bool = 0; // 0xd95 PushV
	var_23_bool = 0; // 0xd96 MovB
	var_24_bool = 0; var_25_object = Obj(); // 0xd97 PushV
	var_25_object = var_20_object; // 0xd98 Mov
	func_3634(var_25_object); // 0xd99 NEW_2
	if(var_24_bool == 0) goto Label_3490; // 0xd9b JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0xd9c PushV
	var_27_object = var_20_object; // 0xd9d Mov
	func_2489(var_26_bool, var_27_object); // 0xd9e NEW_2
	if(var_26_bool == 0) goto Label_3490; // 0xda0 JumpB
	var_23_bool = 1; // 0xda1 MovB
	
Label_3490:
	if(var_23_bool == 0) goto Label_3497; // 0xda2 JumpB
	IsWeaponHolstered(var_22_bool); // 0xda3 ObjFunc
	var_30_bool = var_22_bool == 0; // 0xda5 Not
	if(var_30_bool == 0) goto Label_3497; // 0xda6 JumpB
	var_19_bool = 1; // 0xda7 MovB
	return 2; // 0xda8 Return
	
Label_3497:
	var_19_bool = 0; // 0xda9 MovB
	return 2; // 0xdaa Return
}


func_2456(var_221_string)
{
	var_221_string = "walk"; // 0x998 MovS
	return 0; // 0x999 Return
}


func_2458(var_222_string)
{
	var_222_string = "run"; // 0x99a MovS
	return 0; // 0x99b Return
}


func_2460(var_449_string, var_450_int)
{
	var_451_int = 2; // 0x99d PushI
	var_452_bool = var_450_int == var_451_int; // 0x99e Eq
	if(var_452_bool == 0) goto Label_2467; // 0x99f JumpB
	var_449_string = "fire"; // 0x9a0 MovS
	return 0; // 0x9a1 Return
	
Label_2467:
	var_453_int = 1; // 0x9a3 PushI
	var_454_bool = var_450_int == var_453_int; // 0x9a4 Eq
	if(var_454_bool == 0) goto Label_2472; // 0x9a5 JumpB
	var_449_string = "bullet"; // 0x9a6 MovS
	return 0; // 0x9a7 Return
	
Label_2472:
	var_449_string = "phys"; // 0x9a8 MovS
	return 0; // 0x9a9 Return
}


func_1445()
{
	StopGroup0(); // 0x5a5 Func
	StopAsync(); // 0x5a7 Func
	var_31_string = "head"; // 0x5a9 PushS
	UnlookAsync(var_31_string); // 0x5aa Func
	var_32_int = 111; // 0x5ac PushI
	KillTimer(var_32_int); // 0x5ad Func
	return 0; // 0x5af Return
}


func_2474(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x9aa PushV
	GetPosition(var_56_cvector); // 0x9ab Func
	GetPosition(var_57_cvector); // 0x9ad ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0x9af Sub2
	return 4; // 0x9b0 Return
}


func_3499(var_33_object)
{
	var_34_object = Obj(); // 0xdac PushV
	var_34_object = var_33_object; // 0xdad Mov
	func_3637(); // 0xdae NEW_2
	return 0; // 0xdb0 Return
}


func_2989(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0xbad PushV
	self(var_108_object); // 0xbae Func
	var_106_object = var_108_object; // 0xbb0 Mov
	return 2; // 0xbb1 Return
}


func_3505(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0xdb2 PushV
	var_23_object = var_21_object; // 0xdb3 Mov
	func_2489(var_22_bool, var_23_object); // 0xdb4 NEW_2
	if(var_22_bool == 0) goto Label_3517; // 0xdb6 JumpB
	var_26_object = Obj(); // 0xdb7 PushV
	func_2989(var_26_object); // 0xdb8 NEW_2
	var_29_float = -0.05; // 0xdba PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0xdbb Func
	
Label_3517:
	return 0; // 0xdbd Return
}


func_2481(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x9b1 PushV
	GetPosition(var_41_cvector); // 0x9b2 Func
	GetPosition(var_42_cvector); // 0x9b4 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x9b6 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x9b7 Or2
	return 6; // 0x9b8 Return
}


func_2995(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0xbb3 PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0xbb4 Or
	var_59_float = sqrt(var_60_int); // 0xbb5 Sqrt2
	var_61_float = 0.0; // 0xbb6 PushF
	var_62_bool = var_59_float < var_61_float; // 0xbb7 LT
	if(var_62_bool == 0) goto Label_3003; // 0xbb8 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0xbb9 MovV
	return 2; // 0xbba Return
	
Label_3003:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0xbbb Div2
	return 2; // 0xbbc Return
}


func_1975(var_512_bool, var_513_float)
{
	var_514_float = 0; var_515_bool = 0; var_516_float = 0; var_517_bool = 0; // 0x7b7 PushV
	rand(var_516_float); // 0x7b8 Func
	var_518_bool = var_516_float < var_513_float; // 0x7ba LT
	if(var_518_bool == 0) goto Label_1995; // 0x7bb JumpB
	
Label_1980:
	IsAnimationPlaying(var_517_bool); // 0x7bc Func
	var_519_bool = var_517_bool == 0; // 0x7be Not
	if(var_519_bool == 0) goto Label_1985; // 0x7bf JumpB
	goto Label_1994; // 0x7c0 Jump
	
Label_1994:
	goto Label_2000; // 0x7ca Jump
	
Label_2000:
	var_512_bool = 0; // 0x7d0 MovB
	return 4; // 0x7d1 Return
	
Label_1985:
	var_520_bool = 0; // 0x7c1 PushV
	func_2073(var_520_bool); // 0x7c2 NEW_2
	if(var_520_bool == 0) goto Label_1991; // 0x7c4 JumpB
	var_512_bool = 1; // 0x7c5 MovB
	return 4; // 0x7c6 Return
	
Label_1991:
	sync(); // 0x7c7 Func
	goto Label_1980; // 0x7c9 Jump
	
Label_1995:
	WaitForAnimEnd(); // 0x7cb Func
	func_2177(var_517_bool); // 0x7ce NEW_2
}


func_2489(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0x9b9 PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0x9ba Func
	var_102_bool = var_105_bool; // 0x9bc Mov
	return 2; // 0x9bd Return
}


func_3005(var_459_float, var_460_float, var_461_float)
{
	var_464_bool = var_460_float < var_461_float; // 0xbbe LT
	if(var_464_bool == 0) goto Label_3010; // 0xbbf JumpB
	var_459_float = var_460_float; // 0xbc0 Mov
	goto Label_3011; // 0xbc1 Jump
	
Label_3011:
	return 0; // 0xbc3 Return
	
Label_3010:
	var_459_float = var_461_float; // 0xbc2 Mov
}


func_3518(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xdbe PushV
	var_23_string = "heal"; // 0xdbf PushS
	var_24_bool = var_20_string == var_23_string; // 0xdc0 Eq
	if(var_24_bool == 0) goto Label_3532; // 0xdc1 JumpB
	var_25_string = "player"; // 0xdc2 PushS
	FindActor(var_22_object, var_25_string); // 0xdc3 Func
	var_26_bool = 0; var_27_object = Obj(); // 0xdc5 PushV
	var_27_object = var_22_object; // 0xdc6 Mov
	func_3670(var_27_object); // 0xdc7 NEW_2
	var_19_bool = var_26_bool; // 0xdc8 Mov
	return 2; // 0xdca Return
	
Label_3532:
	var_19_bool = 0; // 0xdcc MovB
	return 2; // 0xdcd Return
}


func_2494(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0x9be PushV
	var_58_string = "HasProperty"; // 0x9bf PushS
	var_59_int = 2; // 0x9c0 PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0x9c1 FuncExist
	var_61_bool = var_60_bool == 0; // 0x9c2 Not
	if(var_61_bool == 0) goto Label_2502; // 0x9c3 JumpB
	var_53_bool = 0; // 0x9c4 MovB
	return 2; // 0x9c5 Return
	
Label_2502:
	HasProperty(var_55_string, var_57_bool); // 0x9c6 ObjFunc
	var_53_bool = var_57_bool; // 0x9c8 Mov
	return 2; // 0x9c9 Return
}


func_962(var_120_float)
{
	var_121_float = 0; var_122_float = 0; // 0x3c2 PushV
	GetCameraFarDistance(var_122_float); // 0x3c3 Func
	var_120_float = var_122_float; // 0x3c5 Mov
	return 2; // 0x3c6 Return
}


func_3012(var_469_float, var_470_float, var_471_float, var_472_float)
{
	var_473_bool = var_470_float < var_471_float; // 0xbc5 LT
	if(var_473_bool == 0) goto Label_3017; // 0xbc6 JumpB
	var_469_float = var_471_float; // 0xbc7 Mov
	return 0; // 0xbc8 Return
	
Label_3017:
	var_474_bool = var_470_float > var_472_float; // 0xbc9 GT
	if(var_474_bool == 0) goto Label_3021; // 0xbca JumpB
	var_469_float = var_472_float; // 0xbcb Mov
	return 0; // 0xbcc Return
	
Label_3021:
	var_469_float = var_470_float; // 0xbcd Mov
	return 0; // 0xbce Return
}


func_2506(var_421_float, var_422_object, var_423_float, var_424_int)
{
	var_428_int = 0; var_429_string = ""; var_430_int = 0; var_431_float = 0; var_432_float = 0; var_433_float = 0; var_434_int = 0; var_435_string = ""; var_436_int = 0; var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x9ca PushV
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x9cb PushV
	var_441_object = var_422_object; // 0x9cc Mov
	var_442_string = "health"; // 0x9cd MovS
	func_2494(var_440_bool, var_441_object, var_442_string); // 0x9ce NEW_2
	var_443_bool = var_440_bool == 0; // 0x9d0 Not
	if(var_443_bool == 0) goto Label_2516; // 0x9d1 JumpB
	var_421_float = 0.0; // 0x9d2 MovF
	return 12; // 0x9d3 Return
	
Label_2516:
	var_444_bool = 0; var_445_object = Obj(); var_446_string = ""; // 0x9d4 PushV
	var_445_object = var_422_object; // 0x9d5 Mov
	var_446_string = "armor"; // 0x9d6 MovS
	func_2494(var_444_bool, var_445_object, var_446_string); // 0x9d7 NEW_2
	var_447_bool = var_444_bool == 0; // 0x9d9 Not
	if(var_447_bool == 0) goto Label_2525; // 0x9da JumpB
	var_434_int = 0; // 0x9db MovI
	goto Label_2528; // 0x9dc Jump
	
Label_2528:
	var_448_string = "armor_"; // 0x9e0 PushS
	var_449_string = ""; var_450_int = 0; // 0x9e1 PushV
	var_450_int = var_424_int; // 0x9e2 Mov
	func_2460(var_449_string, var_450_int); // 0x9e3 NEW_2
	var_435_string = var_448_string + var_449_string; // 0x9e5 Add2
	var_455_bool = 0; var_456_object = Obj(); var_457_string = ""; // 0x9e6 PushV
	var_456_object = var_422_object; // 0x9e7 Mov
	var_457_string = var_435_string; // 0x9e8 Mov
	func_2494(var_455_bool, var_456_object, var_457_string); // 0x9e9 NEW_2
	var_458_bool = var_455_bool == 0; // 0x9eb Not
	if(var_458_bool == 0) goto Label_2543; // 0x9ec JumpB
	var_436_int = 0; // 0x9ed MovI
	goto Label_2545; // 0x9ee Jump
	
Label_2545:
	var_459_float = 0; var_460_float = 0; var_461_float = 0; // 0x9f1 PushV
	var_462_int = var_434_int + var_436_int; // 0x9f2 Add
	var_463_float = 100.0; // 0x9f3 PushF
	var_460_float = var_462_int / var_462_int; // 0x9f4 Div2
	var_461_float = 1; // 0x9f5 MovI
	func_3005(var_459_float, var_460_float, var_461_float); // 0x9f6 NEW_2
	var_437_float = var_459_float; // 0x9f7 Mov
	var_465_string = "health"; // 0x9f9 PushS
	GetProperty(var_465_string, var_438_float); // 0x9fa ObjFunc
	var_466_int = 1; // 0x9fc PushI
	var_467_int = var_466_int - var_437_float; // 0x9fd Sub
	var_439_float = var_423_float * var_467_int; // 0x9fe Mult2
	var_468_string = "health"; // 0x9ff PushS
	var_469_float = 0; var_470_float = 0; var_471_float = 0; var_472_float = 0; // 0xa00 PushV
	var_470_float = var_438_float - var_439_float; // 0xa01 Sub2
	var_471_float = 0; // 0xa02 MovI
	var_472_float = 1; // 0xa03 MovI
	func_3012(var_469_float, var_470_float, var_471_float, var_472_float); // 0xa04 NEW_2
	SetProperty(var_468_string, var_469_float); // 0xa06 ObjFunc
	var_475_bool = 0; var_476_object = Obj(); // 0xa08 PushV
	var_476_object = var_422_object; // 0xa09 Mov
	func_2489(var_475_bool, var_476_object); // 0xa0a NEW_2
	if(var_475_bool == 0) goto Label_2577; // 0xa0c JumpB
	var_477_float = 0; // 0xa0d PushV
	var_477_float = -var_439_float; // 0xa0e Neg2
	func_3069(var_477_float); // 0xa0f NEW_2
	
Label_2577:
	var_421_float = var_439_float; // 0xa11 Mov
	return 12; // 0xa12 Return
	
Label_2543:
	GetProperty(var_435_string, var_436_int); // 0x9ef ObjFunc
	
Label_2525:
	var_485_string = "armor"; // 0x9dd PushS
	GetProperty(var_485_string, var_434_int); // 0x9de ObjFunc
}


func_3534(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xdce PushV
	var_33_string = "heal"; // 0xdcf PushS
	var_34_bool = var_30_string == var_33_string; // 0xdd0 Eq
	if(var_34_bool == 0) goto Label_3546; // 0xdd1 JumpB
	var_35_string = "player"; // 0xdd2 PushS
	FindActor(var_32_object, var_35_string); // 0xdd3 Func
	var_36_object = Obj(); // 0xdd5 PushV
	var_36_object = var_32_object; // 0xdd6 Mov
	func_3673(); // 0xdd7 NEW_2
	var_32_object = 0; // 0xdd9 SetNull
	
Label_3546:
	return 2; // 0xdda Return
}


func_974(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x3ce TMovB
	var_1_object = 0; // 0x3cf TMovB
	Stop(); // 0x3d0 Func
	StopGroup0(); // 0x3d2 Func
	return 0; // 0x3d4 Return
}


func_3023(var_43_bool, var_44_int, var_45_int)
{
	var_46_int = 0; var_47_int = 0; // 0xbcf PushV
	irand(var_47_int, var_45_int); // 0xbd0 Func
	var_43_bool = var_47_int < var_44_int; // 0xbd2 LT2
	return 2; // 0xbd3 Return
}


func_2002(var_0_object, var_309_bool, var_310_float)
{
	var_311_bool = 0; var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_bool = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_float = 0; // 0x7d2 PushV
	
Label_2003:
	IsAnimationPlaying(var_316_bool); // 0x7d3 Func
	var_321_bool = var_316_bool == 0; // 0x7d5 Not
	if(var_321_bool == 0) goto Label_2008; // 0x7d6 JumpB
	goto Label_2040; // 0x7d7 Jump
	
Label_2040:
	func_2177(var_320_float); // 0x7f9 NEW_2
	var_309_bool = 0; // 0x7fb MovB
	return 10; // 0x7fc Return
	
Label_2008:
	var_322_bool = 0; // 0x7d8 PushV
	func_2073(var_322_bool); // 0x7d9 NEW_2
	if(var_322_bool == 0) goto Label_2014; // 0x7db JumpB
	var_309_bool = 1; // 0x7dc MovB
	return 10; // 0x7dd Return
	
Label_2014:
	var_365_bool = 0; var_366_object = Obj(); // 0x7de PushV
	var_366_object = var_0_object; // 0x7df MovT
	func_2620(var_365_bool, var_366_object); // 0x7e0 NEW_2
	var_367_bool = var_365_bool == 0; // 0x7e2 Not
	if(var_367_bool == 0) goto Label_2022; // 0x7e3 JumpB
	var_309_bool = 0; // 0x7e4 MovB
	return 10; // 0x7e5 Return
	
Label_2022:
	GetPFPosition(var_317_cvector); // 0x7e6 TObjFunc
	GetPFPosition(var_318_cvector); // 0x7e8 Func
	var_319_cvector = var_317_cvector - var_318_cvector; // 0x7ea Sub2
	var_320_float = var_319_cvector | var_319_cvector; // 0x7eb Or2
	var_368_float = var_310_float * var_310_float; // 0x7ec Mult
	var_369_bool = var_320_float < var_368_float; // 0x7ed LT
	if(var_369_bool == 0) goto Label_2037; // 0x7ee JumpB
	var_370_bool = 0; var_371_float = 0; // 0x7ef PushV
	var_371_float = var_310_float; // 0x7f0 Mov
	func_1838(var_320_float, var_370_bool, var_371_float); // 0x7f1 NEW_2
	var_309_bool = 1; // 0x7f3 MovB
	return 10; // 0x7f4 Return
	
Label_2037:
	sync(); // 0x7f5 Func
	goto Label_2003; // 0x7f7 Jump
}


func_3028(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0); // 0xbd5 PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0xbd6 PushE
	var_76_float = var_74_float * var_75_float; // 0xbd7 Mult
	var_77_float = GetByIndex(var_72_cvector, 2); // 0xbd8 PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0xbd9 PushE
	var_79_float = var_77_float * var_78_float; // 0xbda Mult
	var_71_float = var_76_float + var_79_float; // 0xbdb Add2
	return 0; // 0xbdc Return
}


func_981(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x3d5 TMovB
	var_1_object = 1; // 0x3d6 TMovB
	Stop(); // 0x3d7 Func
	StopGroup0(); // 0x3d9 Func
	return 0; // 0x3db Return
}


func_471(var_20_object)
{
	EventDisable(0); // 0x1d8 EventDisable
	var_21_object = Obj(); // 0x1d9 PushV
	var_21_object = var_20_object; // 0x1da Mov
	func_504(var_21_object); // 0x1db NEW_2
	var_101_object = Obj(); // 0x1dd PushV
	var_101_object = var_20_object; // 0x1de Mov
	func_3716(var_101_object); // 0x1df NEW_2
	EventEnable(0); // 0x1e1 EventEnable
	
Label_482:
	Hold(); // 0x1e2 Func
	goto Label_482; // 0x1e4 Jump
}


func_3547(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = ""; // 0xddb PushV
	var_157_string = "idle"; // 0xddc MovS
	var_158_int = var_155_int; // 0xddd Push
	if(var_158_int == 0) goto Label_3552; // 0xdde JumpB
	var_157_string = var_157_string + var_155_int; // 0xddf Add2
	
Label_3552:
	var_154_string = var_157_string; // 0xde0 Mov
	return 2; // 0xde1 Return
}


func_988(var_130_bool)
{
	var_130_bool = 0; // 0x3dc MovB
	return 0; // 0x3dd Return
}


func_3037(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0); // 0xbde PushE
	var_83_float = GetByIndex(var_81_cvector, 0); // 0xbdf PushE
	var_84_float = var_82_float * var_83_float; // 0xbe0 Mult
	var_85_float = GetByIndex(var_81_cvector, 2); // 0xbe1 PushE
	var_86_float = GetByIndex(var_81_cvector, 2); // 0xbe2 PushE
	var_87_float = var_85_float * var_86_float; // 0xbe3 Mult
	var_88_int = var_84_float + var_87_float; // 0xbe4 Add
	var_80_float = sqrt(var_88_int); // 0xbe5 Sqrt2
	return 0; // 0xbe6 Return
}


func_990(var_124_object, var_125_cvector)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x3de PushV
	FindShiftedPathTo(var_127_object, var_125_cvector); // 0x3df Func
	var_124_object = var_127_object; // 0x3e1 Mov
	return 2; // 0x3e2 Return
}


func_3554(var_148_int)
{
	var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_bool = 0; // 0xde2 PushV
	var_151_int = 0; // 0xde3 MovI
	
Label_3556:
	var_153_string = "all"; // 0xde4 PushS
	var_154_string = ""; var_155_int = 0; // 0xde5 PushV
	var_155_int = var_151_int; // 0xde6 Mov
	func_3547(var_154_string, var_155_int); // 0xde7 NEW_2
	HasAnimation(var_152_bool, var_153_string, var_154_string); // 0xde9 Func
	var_159_bool = var_152_bool == 0; // 0xdeb Not
	if(var_159_bool == 0) goto Label_3566; // 0xdec JumpB
	goto Label_3569; // 0xded Jump
	
Label_3569:
	var_148_int = var_151_int; // 0xdf1 Mov
	return 4; // 0xdf2 Return
	
Label_3566:
	var_160_int = 1; // 0xdee PushI
	var_151_int = var_151_int + var_160_int; // 0xdef Add2
	goto Label_3556; // 0xdf0 Jump
}


func_3047(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xbe8 PushV
	var_72_cvector = var_69_cvector; // 0xbe9 Mov
	var_73_cvector = var_70_cvector; // 0xbea Mov
	func_3028(var_71_float, var_72_cvector, var_73_cvector); // 0xbeb NEW_2
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0xbed PushV
	var_81_cvector = var_69_cvector; // 0xbee Mov
	func_3037(var_80_float, var_81_cvector); // 0xbef NEW_2
	var_89_float = 0; var_90_cvector = CVector(0,0,0); // 0xbf1 PushV
	var_90_cvector = var_70_cvector; // 0xbf2 Mov
	func_3037(var_89_float, var_90_cvector); // 0xbf3 NEW_2
	var_91_float = var_80_float * var_89_float; // 0xbf5 Mult
	var_68_float = var_71_float / var_71_float; // 0xbf6 Div2
	return 0; // 0xbf7 Return
}


func_1521(var_74_object)
{
	var_81_object = Obj(); var_82_bool = 0; var_83_float = 0; // 0x5f2 PushV
	var_81_object = var_74_object; // 0x5f3 Mov
	var_82_bool = 1; // 0x5f4 MovB
	var_83_float = 180.0; // 0x5f5 MovF
	func_1535(var_77_int, var_78_bool, var_79_float, var_80_int, var_74_object, var_81_object, var_82_bool, var_83_float); // 0x5f6 NEW_2
	return 0; // 0x5f8 Return
}


func_3571(var_61_int)
{
	var_63_bool = 0; // 0xdf4 PushV
	func_3711(var_63_bool); // 0xdf5 NEW_2
	if(var_63_bool == 0) goto Label_3578; // 0xdf7 JumpB
	var_61_int = 2; // 0xdf8 MovI
	goto Label_3579; // 0xdf9 Jump
	
Label_3579:
	return 0; // 0xdfb Return
	
Label_3578:
	var_61_int = 0; // 0xdfa MovI
}


func_504(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x1f8 PushV
	var_42_bool = var_21_object == 0; // 0x1f9 NullEq
	if(var_42_bool == 0) goto Label_512; // 0x1fa JumpB
	var_43_string = ""; // 0x1fb PushV
	var_43_string = "fdie"; // 0x1fc MovS
	func_595(var_43_string); // 0x1fd NEW_2
	goto Label_594; // 0x1ff Jump
	
Label_594:
	return 20; // 0x252 Return
	
Label_512:
	GetPosition(var_32_cvector); // 0x200 ObjFunc
	GetPosition(var_33_cvector); // 0x202 Func
	GetDirection(var_34_cvector); // 0x204 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x206 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x207 PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x208 PushE
	var_77_float = var_75_float * var_76_float; // 0x209 Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x20a PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x20b PushE
	var_80_float = var_78_float * var_79_float; // 0x20c Mult
	var_81_int = var_77_float + var_80_float; // 0x20d Add
	var_82_int = 0; // 0x20e PushI
	var_83_bool = var_81_int >= var_82_int; // 0x20f GE
	if(var_83_bool == 0) goto Label_531; // 0x210 JumpB
	var_36_string = "fdie"; // 0x211 MovS
	goto Label_532; // 0x212 Jump
	
Label_532:
	RemoveRTEnvelope(); // 0x214 Func
	SetDeathState(); // 0x216 Func
	Stop(); // 0x218 Func
	StopAsync(); // 0x21a Func
	var_37_object = var_21_object; // 0x21c Mov
	var_84_string = "GetScriptProperty"; // 0x21d PushS
	var_85_int = 2; // 0x21e PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x21f FuncExist
	if(var_86_bool == 0) goto Label_556; // 0x220 JumpB
	var_87_string = "Owner"; // 0x221 PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x222 ObjFunc
	var_88_bool = var_38_bool; // 0x224 Push
	if(var_88_bool == 0) goto Label_556; // 0x225 JumpB
	var_89_string = "Owner"; // 0x226 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x227 ObjFunc
	var_90_bool = var_37_object == 0; // 0x229 NullEq
	if(var_90_bool == 0) goto Label_556; // 0x22a JumpB
	var_37_object = var_21_object; // 0x22b Mov
	
Label_556:
	var_91_string = "@GetEyesHeight"; // 0x22c PushS
	var_92_int = 1; // 0x22d PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x22e FuncExist
	if(var_93_bool == 0) goto Label_571; // 0x22f JumpB
	GetEyesHeight(var_40_float); // 0x230 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x232 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x233 PushE
	var_94_float = var_40_float; // 0x234 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x235 PopE
	var_95_string = "head"; // 0x236 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x237 Func
	var_39_bool = 1; // 0x239 MovB
	goto Label_572; // 0x23a Jump
	
Label_572:
	var_96_string = ""; // 0x23c PushV
	var_96_string = var_36_string; // 0x23d Mov
	func_2948(var_96_string); // 0x23e NEW_2
	var_97_string = "all"; // 0x240 PushS
	PlayAnimation(var_97_string, var_36_string); // 0x241 Func
	WaitForAnimEnd(); // 0x243 Func
	var_98_bool = var_39_bool; // 0x245 Push
	if(var_98_bool == 0) goto Label_588; // 0x246 JumpB
	StopAsync(); // 0x247 Func
	var_99_string = "head"; // 0x249 PushS
	UnlookAsync(var_99_string); // 0x24a Func
	
Label_588:
	var_100_string = "all"; // 0x24c PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x24d Func
	RemoveEnvelope(); // 0x24f Func
	var_37_object = 0; // 0x251 SetNull
	
Label_571:
	var_39_bool = 0; // 0x23b MovB
	
Label_531:
	var_36_string = "bdie"; // 0x213 MovS
}


func_1529(var_418_float)
{
	var_418_float = 0.03; // 0x5fa MovF
	return 0; // 0x5fb Return
}


func_1532(var_425_int)
{
	var_425_int = 0; // 0x5fd MovI
	return 0; // 0x5fe Return
}


func_2045(var_0_object, var_324_bool)
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_float = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_float = 0; var_334_float = 0; // 0x7fd PushV
	var_335_bool = 0; var_336_object = Obj(); // 0x7fe PushV
	var_336_object = var_0_object; // 0x7ff MovT
	func_2620(var_335_bool, var_336_object); // 0x800 NEW_2
	var_337_bool = var_335_bool == 0; // 0x802 Not
	if(var_337_bool == 0) goto Label_2054; // 0x803 JumpB
	var_324_bool = 0; // 0x804 MovB
	return 10; // 0x805 Return
	
Label_2054:
	var_338_bool = 0; // 0x806 PushV
	func_2134(var_334_float, var_338_bool); // 0x807 NEW_2
	if(var_338_bool == 0) goto Label_2071; // 0x809 JumpB
	GetPFPosition(var_330_cvector); // 0x80a TObjFunc
	GetPFPosition(var_331_cvector); // 0x80c Func
	var_332_cvector = var_330_cvector - var_331_cvector; // 0x80e Sub2
	var_333_float = var_332_cvector | var_332_cvector; // 0x80f Or2
	GetAttackDistance(var_334_float); // 0x810 TObjFunc
	var_339_int = 50; // 0x812 PushI
	var_334_float = var_334_float + var_339_int; // 0x813 Add2
	var_340_float = var_334_float * var_334_float; // 0x814 Mult
	var_324_bool = var_333_float <= var_340_float; // 0x815 LE2
	return 10; // 0x816 Return
	
Label_2071:
	var_324_bool = 0; // 0x817 MovB
	return 10; // 0x818 Return
}


func_1535(var_0_object, var_3_string, var_5_bool, var_81_object, var_82_bool, var_83_float, var_158_bool, var_250_bool)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_float = 0; // 0x5ff PushV
	func_1764(var_103_cvector, var_104_bool, var_105_float); // 0x601 NEW_2
	var_5_bool = 0; // 0x603 TMovI
	var_128_string = "@GetAttackDistance"; // 0x604 PushS
	var_129_int = 1; // 0x605 PushI
	var_130_bool = IsFuncExist(var_81_object, var_128_string, var_129_int); // 0x606 FuncExist
	if(var_130_bool == 0) goto Label_1549; // 0x607 JumpB
	GetAttackDistance(var_95_float); // 0x608 ObjFunc
	var_131_int = 50; // 0x60a PushI
	var_95_float = var_95_float + var_131_int; // 0x60b Add2
	goto Label_1550; // 0x60c Jump
	
Label_1550:
	var_132_int = 150; // 0x60e PushI
	var_133_bool = var_95_float >= var_132_int; // 0x60f GE
	if(var_133_bool == 0) goto Label_1554; // 0x610 JumpB
	var_95_float = 150; // 0x611 MovI
	
Label_1554:
	var_3_string = 0; // 0x612 TMovB
	var_0_object = var_81_object; // 0x613 TMov
	IsPlayerActor(var_0_object, var_98_bool); // 0x614 Func
	var_134_bool = var_98_bool; // 0x616 Push
	if(var_134_bool == 0) goto Label_1568; // 0x617 JumpB
	var_135_string = "attack"; // 0x618 PushS
	PlayGlobalMusic(var_135_string); // 0x619 Func
	var_136_object = Obj(); // 0x61b PushV
	func_2989(var_136_object); // 0x61c NEW_2
	SendPlayerEnemy(var_81_object, var_136_object); // 0x61e Func
	
Label_1568:
	var_139_bool = var_82_bool; // 0x620 Push
	if(var_139_bool == 0) goto Label_1572; // 0x621 JumpB
	var_99_bool = 0; // 0x622 MovB
	goto Label_1573; // 0x623 Jump
	
Label_1573:
	var_140_float = 400.0; // 0x625 PushF
	var_100_float = var_140_float + var_95_float; // 0x626 Add2
	
Label_1575:
	var_141_bool = 0; // 0x627 PushV
	var_141_bool = 0; // 0x628 MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x629 PushV
	var_143_object = var_0_object; // 0x62a MovT
	func_2620(var_142_bool, var_143_object); // 0x62b NEW_2
	if(var_142_bool == 0) goto Label_1585; // 0x62d JumpB
	var_144_bool = var_3_string == 0; // 0x62e Not
	if(var_144_bool == 0) goto Label_1585; // 0x62f JumpB
	var_141_bool = 1; // 0x630 MovB
	
Label_1585:
	if(var_141_bool == 0) goto Label_1747; // 0x631 JumpB
	func_2177(var_105_float); // 0x633 NEW_2
	GetPFPosition(var_96_cvector); // 0x635 TObjFunc
	GetPFPosition(var_97_cvector); // 0x637 Func
	var_101_cvector = var_96_cvector - var_97_cvector; // 0x639 Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x63a Or2
	var_150_float = var_100_float * var_100_float; // 0x63b Mult
	var_151_bool = var_102_float >= var_150_float; // 0x63c GE
	if(var_151_bool == 0) goto Label_1613; // 0x63d JumpB
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0; // 0x63e PushV
	var_153_object = var_0_object; // 0x63f MovT
	var_154_float = var_95_float; // 0x640 Mov
	var_155_float = 3000.0; // 0x641 MovF
	var_156_bool = 1; // 0x642 MovB
	var_157_bool = 0; // 0x643 MovB
	TaskCall(7); // 0x644 TaskCall
	func_2204(var_160_bool, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool); // 0x645 NEW_2
	TaskReturn(); // 0x646 TaskReturn
	var_235_bool = var_158_bool == 0; // 0x648 Not
	if(var_235_bool == 0) goto Label_1611; // 0x649 JumpB
	goto Label_1747; // 0x64a Jump
	
Label_1747:
	WaitForAnimEnd(); // 0x6d3 Func
	var_236_string = var_3_string; // 0x6d5 PushT
	if(var_236_string == 0) goto Label_1752; // 0x6d6 JumpB
	return 22; // 0x6d7 Return
	
Label_1752:
	var_237_string = "all"; // 0x6d8 PushS
	var_238_string = "attack_off"; // 0x6d9 PushS
	PlayAnimation(var_237_string, var_238_string); // 0x6da Func
	WaitForAnimEnd(); // 0x6dc Func
	var_239_bool = var_98_bool; // 0x6de Push
	if(var_239_bool == 0) goto Label_1763; // 0x6df JumpB
	var_240_float = 2.0; // 0x6e0 PushF
	Sleep(var_240_float); // 0x6e1 Func
	
Label_1763:
	return 22; // 0x6e3 Return
	
Label_1611:
	var_99_bool = 0; // 0x64b MovB
	goto Label_1746; // 0x64c Jump
	
Label_1746:
	goto Label_1575; // 0x6d2 Jump
	
Label_1613:
	var_241_float = var_83_float * var_83_float; // 0x64d Mult
	var_242_bool = var_102_float >= var_241_float; // 0x64e GE
	if(var_242_bool == 0) goto Label_1738; // 0x64f JumpB
	GetPFPosition(var_103_cvector); // 0x650 TObjFunc
	CanReachByPF(var_104_bool, var_103_cvector); // 0x652 Func
	var_243_bool = var_104_bool == 0; // 0x654 Not
	if(var_243_bool == 0) goto Label_1637; // 0x655 JumpB
	var_244_bool = 0; var_245_object = Obj(); var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_bool = 0; // 0x656 PushV
	var_245_object = var_0_object; // 0x657 MovT
	var_246_float = var_95_float; // 0x658 Mov
	var_247_float = 3000.0; // 0x659 MovF
	var_248_bool = 1; // 0x65a MovB
	var_249_bool = 0; // 0x65b MovB
	TaskCall(7); // 0x65c TaskCall
	func_2204(var_252_bool, var_244_bool, var_245_object, var_246_float, var_247_float, var_248_bool, var_249_bool); // 0x65d NEW_2
	TaskReturn(); // 0x65e TaskReturn
	var_253_bool = var_250_bool == 0; // 0x660 Not
	if(var_253_bool == 0) goto Label_1635; // 0x661 JumpB
	goto Label_1747; // 0x662 Jump
	
Label_1635:
	var_99_bool = 0; // 0x663 MovB
	goto Label_1575; // 0x664 Jump
	
Label_1637:
	var_254_bool = var_99_bool == 0; // 0x665 Not
	if(var_254_bool == 0) goto Label_1662; // 0x666 JumpB
	var_255_object = Obj(); // 0x667 PushV
	var_255_object = var_0_object; // 0x668 MovT
	func_2770(); // 0x669 NEW_2
	var_264_string = "all"; // 0x66b PushS
	var_265_string = "attack_on"; // 0x66c PushS
	PlayAnimation(var_264_string, var_265_string); // 0x66d Func
	WaitForAnimEnd(); // 0x66f Func
	func_2177(var_105_float); // 0x672 NEW_2
	StopAsync(); // 0x674 Func
	var_99_bool = 1; // 0x676 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x677 PushV
	var_267_object = var_0_object; // 0x678 MovT
	func_2620(var_266_bool, var_267_object); // 0x679 NEW_2
	var_268_bool = var_266_bool == 0; // 0x67b Not
	if(var_268_bool == 0) goto Label_1662; // 0x67c JumpB
	goto Label_1747; // 0x67d Jump
	
Label_1662:
	rand(var_105_float); // 0x67e Func
	var_269_bool = 0; // 0x680 PushV
	var_269_bool = 1; // 0x681 MovB
	var_270_float = 0.25; // 0x682 PushF
	var_271_bool = var_105_float < var_270_float; // 0x683 LT
	if(var_271_bool == 0) goto Label_1674; // 0x684 JumpB
	var_272_bool = 0; // 0x685 PushV
	func_2134(var_269_bool, var_272_bool); // 0x686 NEW_2
	if(var_272_bool == 0) goto Label_1674; // 0x688 JumpB
	var_269_bool = 0; // 0x689 MovB
	
Label_1674:
	if(var_269_bool == 0) goto Label_1691; // 0x68a JumpB
	Face(var_0_object); // 0x68b Func
	func_2184(); // 0x68e NEW_2
	var_307_string = "all"; // 0x690 PushS
	var_308_string = "attack_stay"; // 0x691 PushS
	PlayAnimation(var_307_string, var_308_string); // 0x692 Func
	var_309_bool = 0; var_310_float = 0; // 0x694 PushV
	var_310_float = var_83_float; // 0x695 Mov
	func_2002(var_105_float, var_309_bool, var_310_float); // 0x696 NEW_2
	StopAsync(); // 0x698 Func
	goto Label_1737; // 0x69a Jump
	
Label_1737:
	goto Label_1746; // 0x6c9 Jump
	
Label_1691:
	Face(var_0_object); // 0x69b Func
	var_528_string = "all"; // 0x69d PushS
	var_529_string = "fjump"; // 0x69e PushS
	PlayAnimation(var_528_string, var_529_string); // 0x69f Func
	WaitForAnimEnd(); // 0x6a1 Func
	func_2177(var_105_float); // 0x6a4 NEW_2
	var_530_cvector = CVector(0.0, 0.0, 0.0); // 0x6a6 PushVec
	SetSpeed(var_530_cvector); // 0x6a7 Func
	Stop(); // 0x6a9 Func
	StopAsync(); // 0x6ab Func
	var_531_bool = 0; // 0x6ad PushV
	func_2134(var_105_float, var_531_bool); // 0x6ae NEW_2
	var_532_bool = var_531_bool == 0; // 0x6b0 Not
	if(var_532_bool == 0) goto Label_1737; // 0x6b1 JumpB
	var_533_bool = 0; var_534_object = Obj(); // 0x6b2 PushV
	var_534_object = var_0_object; // 0x6b3 MovT
	func_2620(var_533_bool, var_534_object); // 0x6b4 NEW_2
	var_535_bool = var_533_bool == 0; // 0x6b6 Not
	if(var_535_bool == 0) goto Label_1721; // 0x6b7 JumpB
	goto Label_1747; // 0x6b8 Jump
	
Label_1721:
	GetPFPosition(var_96_cvector); // 0x6b9 TObjFunc
	GetPFPosition(var_97_cvector); // 0x6bb Func
	var_101_cvector = var_96_cvector - var_97_cvector; // 0x6bd Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x6be Or2
	var_536_float = var_83_float * var_83_float; // 0x6bf Mult
	var_537_bool = var_102_float < var_536_float; // 0x6c0 LT
	if(var_537_bool == 0) goto Label_1737; // 0x6c1 JumpB
	var_538_bool = 0; var_539_float = 0; // 0x6c2 PushV
	var_539_float = var_83_float; // 0x6c3 Mov
	func_1838(var_105_float, var_538_bool, var_539_float); // 0x6c4 NEW_2
	var_540_bool = var_538_bool == 0; // 0x6c6 Not
	if(var_540_bool == 0) goto Label_1737; // 0x6c7 JumpB
	goto Label_1747; // 0x6c8 Jump
	
Label_1738:
	var_541_bool = 0; var_542_float = 0; // 0x6ca PushV
	var_542_float = var_83_float; // 0x6cb Mov
	func_1838(var_105_float, var_541_bool, var_542_float); // 0x6cc NEW_2
	var_543_bool = var_541_bool == 0; // 0x6ce Not
	if(var_543_bool == 0) goto Label_1745; // 0x6cf JumpB
	goto Label_1747; // 0x6d0 Jump
	
Label_1745:
	var_99_bool = 1; // 0x6d1 MovB
	
Label_1572:
	var_99_bool = 1; // 0x624 MovB
	
Label_1549:
	var_95_float = var_83_float; // 0x60d Mov
}


