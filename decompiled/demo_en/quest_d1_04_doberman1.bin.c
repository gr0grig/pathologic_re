task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0xb9 PushI
	if(var_20_int == 0) goto Label_475; // 0xba JumpB
	func_2918(); // 0xbc NEW_2
	var_22_int = 34216; // 0xbe PushI
	var_23_bool = var_18_object == var_22_int; // 0xbf Eq
	if(var_23_bool == 0) goto Label_243; // 0xc0 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xc1 PushV
	var_25_object = var_1_object; // 0xc2 MovT
	func_3117(var_25_object); // 0xc3 NEW_2
	if(var_24_bool == 0) goto Label_223; // 0xc5 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xc6 PushV
	var_32_object = var_1_object; // 0xc7 MovT
	var_33_object = var_0_object; // 0xc8 MovT
	func_3111(); // 0xc9 NEW_2
	var_36_string = ""; // 0xcb PushV
	var_36_string = "Neutral"; // 0xcc MovS
	func_162(var_19_bool, var_36_string); // 0xcd NEW_2
	var_53_int = 532742; // 0xcf PushI
	SetMessage(var_53_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_54_int = 532995; // 0xd4 PushI
	var_55_int = 34793; // 0xd5 PushI
	var_56_int = 34495; // 0xd6 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd7 TObjFunc
	var_57_int = 533000; // 0xd9 PushI
	var_58_int = 34496; // 0xda PushI
	var_59_int = 34500; // 0xdb PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_60_string = ""; // 0xdf PushV
	var_60_string = "Neutral"; // 0xe0 MovS
	func_162(var_19_bool, var_60_string); // 0xe1 NEW_2
	var_61_int = 532746; // 0xe3 PushI
	SetMessage(var_61_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_62_int = 532747; // 0xe8 PushI
	var_63_int = -1; // 0xe9 PushI
	var_64_int = 34221; // 0xea PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xeb TObjFunc
	var_65_int = 532997; // 0xed PushI
	var_66_int = -1; // 0xee PushI
	var_67_int = 34497; // 0xef PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_68_int = 34793; // 0xf3 PushI
	var_69_bool = var_18_object == var_68_int; // 0xf4 Eq
	if(var_69_bool == 0) goto Label_266; // 0xf5 JumpB
	var_70_string = ""; // 0xf6 PushV
	var_70_string = "Neutral"; // 0xf7 MovS
	func_162(var_19_bool, var_70_string); // 0xf8 NEW_2
	var_71_int = 533285; // 0xfa PushI
	SetMessage(var_71_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_72_int = 533286; // 0xff PushI
	var_73_int = 34496; // 0x100 PushI
	var_74_int = 34794; // 0x101 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x102 TObjFunc
	var_75_int = 533287; // 0x104 PushI
	var_76_int = 34796; // 0x105 PushI
	var_77_int = 34795; // 0x106 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_78_int = 34796; // 0x10a PushI
	var_79_bool = var_18_object == var_78_int; // 0x10b Eq
	if(var_79_bool == 0) goto Label_289; // 0x10c JumpB
	var_80_string = ""; // 0x10d PushV
	var_80_string = "Neutral"; // 0x10e MovS
	func_162(var_19_bool, var_80_string); // 0x10f NEW_2
	var_81_int = 533288; // 0x111 PushI
	SetMessage(var_81_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_82_int = 533293; // 0x116 PushI
	var_83_int = 34798; // 0x117 PushI
	var_84_int = 34802; // 0x118 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x119 TObjFunc
	var_85_int = 533294; // 0x11b PushI
	var_86_int = 34496; // 0x11c PushI
	var_87_int = 34803; // 0x11d PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_88_int = 34496; // 0x121 PushI
	var_89_bool = var_18_object == var_88_int; // 0x122 Eq
	if(var_89_bool == 0) goto Label_312; // 0x123 JumpB
	var_90_string = ""; // 0x124 PushV
	var_90_string = "Neutral"; // 0x125 MovS
	func_162(var_19_bool, var_90_string); // 0x126 NEW_2
	var_91_int = 532996; // 0x128 PushI
	SetMessage(var_91_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_92_int = 533001; // 0x12d PushI
	var_93_int = 34503; // 0x12e PushI
	var_94_int = 34502; // 0x12f PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x130 TObjFunc
	var_95_int = 533003; // 0x132 PushI
	var_96_int = 34503; // 0x133 PushI
	var_97_int = 34504; // 0x134 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_98_int = 34503; // 0x138 PushI
	var_99_bool = var_18_object == var_98_int; // 0x139 Eq
	if(var_99_bool == 0) goto Label_335; // 0x13a JumpB
	var_100_string = ""; // 0x13b PushV
	var_100_string = "Neutral"; // 0x13c MovS
	func_162(var_19_bool, var_100_string); // 0x13d NEW_2
	var_101_int = 533002; // 0x13f PushI
	SetMessage(var_101_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_102_int = 532998; // 0x144 PushI
	var_103_int = 34499; // 0x145 PushI
	var_104_int = 34498; // 0x146 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x147 TObjFunc
	var_105_int = 533005; // 0x149 PushI
	var_106_int = 34508; // 0x14a PushI
	var_107_int = 34507; // 0x14b PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_108_int = 34508; // 0x14f PushI
	var_109_bool = var_18_object == var_108_int; // 0x150 Eq
	if(var_109_bool == 0) goto Label_353; // 0x151 JumpB
	var_110_string = ""; // 0x152 PushV
	var_110_string = "Neutral"; // 0x153 MovS
	func_162(var_19_bool, var_110_string); // 0x154 NEW_2
	var_111_int = 533006; // 0x156 PushI
	SetMessage(var_111_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_112_int = 533007; // 0x15b PushI
	var_113_int = 34499; // 0x15c PushI
	var_114_int = 34509; // 0x15d PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_115_int = 34499; // 0x161 PushI
	var_116_bool = var_18_object == var_115_int; // 0x162 Eq
	if(var_116_bool == 0) goto Label_376; // 0x163 JumpB
	var_117_string = ""; // 0x164 PushV
	var_117_string = "Neutral"; // 0x165 MovS
	func_162(var_19_bool, var_117_string); // 0x166 NEW_2
	var_118_int = 532999; // 0x168 PushI
	SetMessage(var_118_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_119_int = 533295; // 0x16d PushI
	var_120_int = 34807; // 0x16e PushI
	var_121_int = 34806; // 0x16f PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x170 TObjFunc
	var_122_int = 533369; // 0x172 PushI
	var_123_int = 34869; // 0x173 PushI
	var_124_int = 34868; // 0x174 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_125_int = 34869; // 0x178 PushI
	var_126_bool = var_18_object == var_125_int; // 0x179 Eq
	if(var_126_bool == 0) goto Label_399; // 0x17a JumpB
	var_127_string = ""; // 0x17b PushV
	var_127_string = "Neutral"; // 0x17c MovS
	func_162(var_19_bool, var_127_string); // 0x17d NEW_2
	var_128_int = 533370; // 0x17f PushI
	SetMessage(var_128_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_129_int = 533371; // 0x184 PushI
	var_130_int = 34807; // 0x185 PushI
	var_131_int = 34870; // 0x186 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x187 TObjFunc
	var_132_int = 533372; // 0x189 PushI
	var_133_int = -1; // 0x18a PushI
	var_134_int = 34871; // 0x18b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x18c TObjFunc
	return 0; // 0x18e Return
	
Label_399:
	var_135_int = 34807; // 0x18f PushI
	var_136_bool = var_18_object == var_135_int; // 0x190 Eq
	if(var_136_bool == 0) goto Label_417; // 0x191 JumpB
	var_137_string = ""; // 0x192 PushV
	var_137_string = "Neutral"; // 0x193 MovS
	func_162(var_19_bool, var_137_string); // 0x194 NEW_2
	var_138_int = 533296; // 0x196 PushI
	SetMessage(var_138_int); // 0x197 TObjFunc
	ClearReplies(); // 0x199 TObjFunc
	var_139_int = 532743; // 0x19b PushI
	var_140_int = 34218; // 0x19c PushI
	var_141_int = 34217; // 0x19d PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x19e TObjFunc
	return 0; // 0x1a0 Return
	
Label_417:
	var_142_int = 34218; // 0x1a1 PushI
	var_143_bool = var_18_object == var_142_int; // 0x1a2 Eq
	if(var_143_bool == 0) goto Label_440; // 0x1a3 JumpB
	var_144_string = ""; // 0x1a4 PushV
	var_144_string = "Neutral"; // 0x1a5 MovS
	func_162(var_19_bool, var_144_string); // 0x1a6 NEW_2
	var_145_int = 532744; // 0x1a8 PushI
	SetMessage(var_145_int); // 0x1a9 TObjFunc
	ClearReplies(); // 0x1ab TObjFunc
	var_146_int = 533289; // 0x1ad PushI
	var_147_int = 34798; // 0x1ae PushI
	var_148_int = 34797; // 0x1af PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1b0 TObjFunc
	var_149_int = 533291; // 0x1b2 PushI
	var_150_int = 34798; // 0x1b3 PushI
	var_151_int = 34799; // 0x1b4 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1b5 TObjFunc
	return 0; // 0x1b7 Return
	
Label_440:
	var_152_int = 34798; // 0x1b8 PushI
	var_153_bool = var_18_object == var_152_int; // 0x1b9 Eq
	if(var_153_bool == 0) goto Label_463; // 0x1ba JumpB
	var_154_string = ""; // 0x1bb PushV
	var_154_string = "Neutral"; // 0x1bc MovS
	func_162(var_19_bool, var_154_string); // 0x1bd NEW_2
	var_155_int = 533290; // 0x1bf PushI
	SetMessage(var_155_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_156_int = 532745; // 0x1c4 PushI
	var_157_int = -1; // 0x1c5 PushI
	var_158_int = 34219; // 0x1c6 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1c7 TObjFunc
	var_159_int = 533292; // 0x1c9 PushI
	var_160_int = -1; // 0x1ca PushI
	var_161_int = 34801; // 0x1cb PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_3_string = 1; // 0x1cf TMovB
	var_162_bool = 0; // 0x1d0 PushV
	func_3679(var_162_bool); // 0x1d1 NEW_2
	if(var_162_bool == 0) goto Label_471; // 0x1d3 JumpB
	lshStopAnimation(); // 0x1d4 Func
	goto Label_473; // 0x1d6 Jump
	
Label_473:
	return 0; // 0x1d9 Return
	
Label_471:
	StopAnimation(); // 0x1d7 Func
	
Label_475:
	return 0; // 0x1db Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x1eb PushV
	var_21_int = 0; var_22_object = Obj(); // 0x1ec PushV
	var_22_object = var_18_bool; // 0x1ed Mov
	func_3615(var_22_object); // 0x1ee NEW_2
	var_20_int = var_21_int; // 0x1ef Mov
	var_23_int = 0; // 0x1f1 PushI
	var_24_bool = var_20_int > var_23_int; // 0x1f2 GT
	if(var_24_bool == 0) goto Label_504; // 0x1f3 JumpB
	var_25_object = Obj(); // 0x1f4 PushV
	var_25_object = var_18_bool; // 0x1f5 Mov
	func_3618(var_25_object); // 0x1f6 NEW_2
	
Label_504:
	return 2; // 0x1f8 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3624(); // 0x1fa NEW_2
	return 0; // 0x1fc Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x273 Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x275 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x277 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x290 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x291 PushV
	var_22_object = var_18_bool; // 0x292 Mov
	func_3615(var_22_object); // 0x293 NEW_2
	var_20_int = var_21_int; // 0x294 Mov
	var_23_int = 0; // 0x296 PushI
	var_24_bool = var_20_int > var_23_int; // 0x297 GT
	if(var_24_bool == 0) goto Label_675; // 0x298 JumpB
	var_25_int = 1; // 0x299 PushI
	var_26_bool = var_20_int > var_25_int; // 0x29a GT
	if(var_26_bool == 0) goto Label_671; // 0x29b JumpB
	func_843(var_20_int); // 0x29d NEW_2
	
Label_671:
	var_28_object = Obj(); // 0x29f PushV
	var_28_object = var_18_bool; // 0x2a0 Mov
	func_3618(var_28_object); // 0x2a1 NEW_2
	
Label_675:
	return 2; // 0x2a3 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2a4 PushV
	var_21_object = Obj(); // 0x2a5 PushV
	var_21_object = var_18_bool; // 0x2a6 Mov
	func_3501(var_21_object); // 0x2a7 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x2a9 PushV
	var_31_object = var_18_bool; // 0x2aa Mov
	func_3584(var_30_int, var_31_object); // 0x2ab NEW_2
	var_20_int = var_30_int; // 0x2ac Mov
	var_66_int = 0; // 0x2ae PushI
	var_67_bool = var_20_int > var_66_int; // 0x2af GT
	if(var_67_bool == 0) goto Label_699; // 0x2b0 JumpB
	var_68_int = 1; // 0x2b1 PushI
	var_69_bool = var_20_int > var_68_int; // 0x2b2 GT
	if(var_69_bool == 0) goto Label_695; // 0x2b3 JumpB
	func_843(var_20_int); // 0x2b5 NEW_2
	
Label_695:
	var_71_object = Obj(); // 0x2b7 PushV
	var_71_object = var_18_bool; // 0x2b8 Mov
	func_3594(var_71_object); // 0x2b9 NEW_2
	
Label_699:
	return 2; // 0x2bb Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x2bc PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x2bd PushV
	var_24_object = var_18_bool; // 0x2be Mov
	var_25_object = var_19_object; // 0x2bf Mov
	var_26_bool = var_20_bool; // 0x2c0 Mov
	func_3709(var_26_bool); // 0x2c1 NEW_2
	if(var_23_bool == 0) goto Label_727; // 0x2c3 JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x2c4 PushV
	var_28_object = var_18_bool; // 0x2c5 Mov
	var_29_bool = var_20_bool; // 0x2c6 Mov
	func_3602(var_28_object, var_29_bool); // 0x2c7 NEW_2
	var_22_int = var_27_int; // 0x2c8 Mov
	var_66_int = 0; // 0x2ca PushI
	var_67_bool = var_22_int > var_66_int; // 0x2cb GT
	if(var_67_bool == 0) goto Label_727; // 0x2cc JumpB
	var_68_int = 1; // 0x2cd PushI
	var_69_bool = var_22_int > var_68_int; // 0x2ce GT
	if(var_69_bool == 0) goto Label_723; // 0x2cf JumpB
	func_843(var_22_int); // 0x2d1 NEW_2
	
Label_723:
	var_71_object = Obj(); // 0x2d3 PushV
	var_71_object = var_18_bool; // 0x2d4 Mov
	func_3609(var_71_object); // 0x2d5 NEW_2
	
Label_727:
	return 2; // 0x2d7 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2d8 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x2d9 PushV
	var_22_object = var_18_bool; // 0x2da Mov
	func_3661(var_22_object); // 0x2db NEW_2
	var_20_int = var_21_int; // 0x2dc Mov
	var_23_int = 0; // 0x2de PushI
	var_24_bool = var_20_int > var_23_int; // 0x2df GT
	if(var_24_bool == 0) goto Label_747; // 0x2e0 JumpB
	var_25_int = 1; // 0x2e1 PushI
	var_26_bool = var_20_int > var_25_int; // 0x2e2 GT
	if(var_26_bool == 0) goto Label_743; // 0x2e3 JumpB
	func_843(var_20_int); // 0x2e5 NEW_2
	
Label_743:
	var_28_object = Obj(); // 0x2e7 PushV
	var_28_object = var_18_bool; // 0x2e8 Mov
	func_3664(); // 0x2e9 NEW_2
	
Label_747:
	return 2; // 0x2eb Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x2ec PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x2ed PushV
	var_23_object = var_18_object; // 0x2ee Mov
	var_24_string = var_19_bool; // 0x2ef Mov
	func_3415(var_22_bool, var_23_object, var_24_string); // 0x2f0 NEW_2
	if(var_22_bool == 0) goto Label_764; // 0x2f2 JumpB
	func_843(var_21_int); // 0x2f4 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x2f6 PushV
	var_51_object = var_18_object; // 0x2f7 Mov
	var_52_string = var_19_bool; // 0x2f8 Mov
	func_3447(var_51_object, var_52_string); // 0x2f9 NEW_2
	goto Label_784; // 0x2fb Jump
	
Label_784:
	return 2; // 0x310 Return
	
Label_764:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x2fc PushV
	var_128_string = var_19_bool; // 0x2fd Mov
	var_129_object = var_18_object; // 0x2fe Mov
	func_3625(var_129_object); // 0x2ff NEW_2
	var_21_int = var_127_int; // 0x300 Mov
	var_130_int = 0; // 0x302 PushI
	var_131_bool = var_21_int > var_130_int; // 0x303 GT
	if(var_131_bool == 0) goto Label_784; // 0x304 JumpB
	var_132_int = 1; // 0x305 PushI
	var_133_bool = var_21_int > var_132_int; // 0x306 GT
	if(var_133_bool == 0) goto Label_779; // 0x307 JumpB
	func_843(var_21_int); // 0x309 NEW_2
	
Label_779:
	var_134_string = ""; var_135_object = Obj(); // 0x30b PushV
	var_134_string = var_19_bool; // 0x30c Mov
	var_135_object = var_18_object; // 0x30d Mov
	func_3628(); // 0x30e NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x312 PushV
	var_20_string = var_18_bool; // 0x313 Mov
	func_3514(var_19_bool, var_20_string); // 0x314 NEW_2
	if(var_19_bool == 0) goto Label_798; // 0x316 JumpB
	func_843(var_18_bool); // 0x318 NEW_2
	var_29_string = ""; // 0x31a PushV
	var_29_string = var_18_bool; // 0x31b Mov
	func_3530(var_29_string); // 0x31c NEW_2
	
Label_798:
	return 0; // 0x31e Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x320 PushV
	var_20_object = var_18_bool; // 0x321 Mov
	func_3472(var_19_bool, var_20_object); // 0x322 NEW_2
	if(var_19_bool == 0) goto Label_813; // 0x324 JumpB
	func_843(var_18_bool); // 0x326 NEW_2
	var_32_object = Obj(); // 0x328 PushV
	var_32_object = var_18_bool; // 0x329 Mov
	func_3495(var_32_object); // 0x32a NEW_2
	goto Label_817; // 0x32c Jump
	
Label_817:
	return 0; // 0x331 Return
	
Label_813:
	var_34_object = Obj(); // 0x32d PushV
	var_34_object = var_18_bool; // 0x32e Mov
	func_868(var_18_bool, var_34_object); // 0x32f NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x333 PushV
	var_19_object = var_18_bool; // 0x334 Mov
	func_868(var_18_bool, var_19_object); // 0x335 NEW_2
	return 0; // 0x337 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x339 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x33a Neq
	if(var_20_bool == 0) goto Label_829; // 0x33b JumpB
	return 0; // 0x33c Return
	
Label_829:
	var_2_object = 0; // 0x33d TMovB
	var_21_int = 110; // 0x33e PushI
	KillTimer(var_21_int); // 0x33f Func
	ResetAAS(); // 0x341 Func
	return 0; // 0x343 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_843(var_17_bool); // 0x345 NEW_2
	func_3624(); // 0x348 NEW_2
	return 0; // 0x34a Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_843(var_18_bool); // 0x35d NEW_2
	var_20_object = Obj(); // 0x35f PushV
	var_20_object = var_18_bool; // 0x360 Mov
	func_3391(); // 0x361 NEW_2
	return 0; // 0x363 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x3cd Func
	return 0; // 0x3cf Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x3d0 Func
	return 0; // 0x3d2 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3e9 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x3ea PushV
	var_22_object = var_18_bool; // 0x3eb Mov
	func_3615(var_22_object); // 0x3ec NEW_2
	var_20_int = var_21_int; // 0x3ed Mov
	var_23_int = 0; // 0x3ef PushI
	var_24_bool = var_20_int > var_23_int; // 0x3f0 GT
	if(var_24_bool == 0) goto Label_1020; // 0x3f1 JumpB
	var_25_int = 1; // 0x3f2 PushI
	var_26_bool = var_20_int > var_25_int; // 0x3f3 GT
	if(var_26_bool == 0) goto Label_1016; // 0x3f4 JumpB
	func_1246(); // 0x3f6 NEW_2
	
Label_1016:
	var_27_object = Obj(); // 0x3f8 PushV
	var_27_object = var_18_bool; // 0x3f9 Mov
	func_3618(var_27_object); // 0x3fa NEW_2
	
Label_1020:
	return 2; // 0x3fc Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3fd PushV
	var_21_object = Obj(); // 0x3fe PushV
	var_21_object = var_18_bool; // 0x3ff Mov
	func_3501(var_21_object); // 0x400 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x402 PushV
	var_31_object = var_18_bool; // 0x403 Mov
	func_3584(var_30_int, var_31_object); // 0x404 NEW_2
	var_20_int = var_30_int; // 0x405 Mov
	var_66_int = 0; // 0x407 PushI
	var_67_bool = var_20_int > var_66_int; // 0x408 GT
	if(var_67_bool == 0) goto Label_1044; // 0x409 JumpB
	var_68_int = 1; // 0x40a PushI
	var_69_bool = var_20_int > var_68_int; // 0x40b GT
	if(var_69_bool == 0) goto Label_1040; // 0x40c JumpB
	func_1246(); // 0x40e NEW_2
	
Label_1040:
	var_70_object = Obj(); // 0x410 PushV
	var_70_object = var_18_bool; // 0x411 Mov
	func_3594(var_70_object); // 0x412 NEW_2
	
Label_1044:
	return 2; // 0x414 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x415 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x416 PushV
	var_24_object = var_18_bool; // 0x417 Mov
	var_25_object = var_19_object; // 0x418 Mov
	var_26_bool = var_20_bool; // 0x419 Mov
	func_3709(var_26_bool); // 0x41a NEW_2
	if(var_23_bool == 0) goto Label_1072; // 0x41c JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x41d PushV
	var_28_object = var_18_bool; // 0x41e Mov
	var_29_bool = var_20_bool; // 0x41f Mov
	func_3602(var_28_object, var_29_bool); // 0x420 NEW_2
	var_22_int = var_27_int; // 0x421 Mov
	var_66_int = 0; // 0x423 PushI
	var_67_bool = var_22_int > var_66_int; // 0x424 GT
	if(var_67_bool == 0) goto Label_1072; // 0x425 JumpB
	var_68_int = 1; // 0x426 PushI
	var_69_bool = var_22_int > var_68_int; // 0x427 GT
	if(var_69_bool == 0) goto Label_1068; // 0x428 JumpB
	func_1246(); // 0x42a NEW_2
	
Label_1068:
	var_70_object = Obj(); // 0x42c PushV
	var_70_object = var_18_bool; // 0x42d Mov
	func_3609(var_70_object); // 0x42e NEW_2
	
Label_1072:
	return 2; // 0x430 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x431 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x432 PushV
	var_22_object = var_18_bool; // 0x433 Mov
	func_3661(var_22_object); // 0x434 NEW_2
	var_20_int = var_21_int; // 0x435 Mov
	var_23_int = 0; // 0x437 PushI
	var_24_bool = var_20_int > var_23_int; // 0x438 GT
	if(var_24_bool == 0) goto Label_1092; // 0x439 JumpB
	var_25_int = 1; // 0x43a PushI
	var_26_bool = var_20_int > var_25_int; // 0x43b GT
	if(var_26_bool == 0) goto Label_1088; // 0x43c JumpB
	func_1246(); // 0x43e NEW_2
	
Label_1088:
	var_27_object = Obj(); // 0x440 PushV
	var_27_object = var_18_bool; // 0x441 Mov
	func_3664(); // 0x442 NEW_2
	
Label_1092:
	return 2; // 0x444 Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x445 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x446 PushV
	var_23_object = var_18_object; // 0x447 Mov
	var_24_string = var_19_bool; // 0x448 Mov
	func_3415(var_22_bool, var_23_object, var_24_string); // 0x449 NEW_2
	if(var_22_bool == 0) goto Label_1109; // 0x44b JumpB
	func_1246(); // 0x44d NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x44f PushV
	var_50_object = var_18_object; // 0x450 Mov
	var_51_string = var_19_bool; // 0x451 Mov
	func_3447(var_50_object, var_51_string); // 0x452 NEW_2
	goto Label_1129; // 0x454 Jump
	
Label_1129:
	return 2; // 0x469 Return
	
Label_1109:
	var_126_int = 0; var_127_string = ""; var_128_object = Obj(); // 0x455 PushV
	var_127_string = var_19_bool; // 0x456 Mov
	var_128_object = var_18_object; // 0x457 Mov
	func_3625(var_128_object); // 0x458 NEW_2
	var_21_int = var_126_int; // 0x459 Mov
	var_129_int = 0; // 0x45b PushI
	var_130_bool = var_21_int > var_129_int; // 0x45c GT
	if(var_130_bool == 0) goto Label_1129; // 0x45d JumpB
	var_131_int = 1; // 0x45e PushI
	var_132_bool = var_21_int > var_131_int; // 0x45f GT
	if(var_132_bool == 0) goto Label_1124; // 0x460 JumpB
	func_1246(); // 0x462 NEW_2
	
Label_1124:
	var_133_string = ""; var_134_object = Obj(); // 0x464 PushV
	var_133_string = var_19_bool; // 0x465 Mov
	var_134_object = var_18_object; // 0x466 Mov
	func_3628(); // 0x467 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x46b PushV
	var_20_string = var_18_bool; // 0x46c Mov
	func_3514(var_19_bool, var_20_string); // 0x46d NEW_2
	if(var_19_bool == 0) goto Label_1143; // 0x46f JumpB
	func_1246(); // 0x471 NEW_2
	var_28_string = ""; // 0x473 PushV
	var_28_string = var_18_bool; // 0x474 Mov
	func_3530(var_28_string); // 0x475 NEW_2
	
Label_1143:
	return 0; // 0x477 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1246(); // 0x479 NEW_2
	func_3624(); // 0x47c NEW_2
	return 0; // 0x47e Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x480 PushV
	var_20_object = var_18_bool; // 0x481 Mov
	func_3472(var_19_bool, var_20_object); // 0x482 NEW_2
	if(var_19_bool == 0) goto Label_1164; // 0x484 JumpB
	func_1246(); // 0x486 NEW_2
	var_31_object = Obj(); // 0x488 PushV
	var_31_object = var_18_bool; // 0x489 Mov
	func_3495(var_31_object); // 0x48a NEW_2
	
Label_1164:
	return 0; // 0x48c Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x51b PushV
	var_21_int = 0; var_22_object = Obj(); // 0x51c PushV
	var_22_object = var_18_bool; // 0x51d Mov
	func_3615(var_22_object); // 0x51e NEW_2
	var_20_int = var_21_int; // 0x51f Mov
	var_23_int = 0; // 0x521 PushI
	var_24_bool = var_20_int > var_23_int; // 0x522 GT
	if(var_24_bool == 0) goto Label_1326; // 0x523 JumpB
	var_25_int = 1; // 0x524 PushI
	var_26_bool = var_20_int > var_25_int; // 0x525 GT
	if(var_26_bool == 0) goto Label_1322; // 0x526 JumpB
	func_1450(); // 0x528 NEW_2
	
Label_1322:
	var_29_object = Obj(); // 0x52a PushV
	var_29_object = var_18_bool; // 0x52b Mov
	func_3618(var_29_object); // 0x52c NEW_2
	
Label_1326:
	return 2; // 0x52e Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x52f PushV
	var_21_object = Obj(); // 0x530 PushV
	var_21_object = var_18_bool; // 0x531 Mov
	func_3501(var_21_object); // 0x532 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x534 PushV
	var_31_object = var_18_bool; // 0x535 Mov
	func_3584(var_30_int, var_31_object); // 0x536 NEW_2
	var_20_int = var_30_int; // 0x537 Mov
	var_66_int = 0; // 0x539 PushI
	var_67_bool = var_20_int > var_66_int; // 0x53a GT
	if(var_67_bool == 0) goto Label_1350; // 0x53b JumpB
	var_68_int = 1; // 0x53c PushI
	var_69_bool = var_20_int > var_68_int; // 0x53d GT
	if(var_69_bool == 0) goto Label_1346; // 0x53e JumpB
	func_1450(); // 0x540 NEW_2
	
Label_1346:
	var_72_object = Obj(); // 0x542 PushV
	var_72_object = var_18_bool; // 0x543 Mov
	func_3594(var_72_object); // 0x544 NEW_2
	
Label_1350:
	return 2; // 0x546 Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x547 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x548 PushV
	var_24_object = var_18_bool; // 0x549 Mov
	var_25_object = var_19_object; // 0x54a Mov
	var_26_bool = var_20_bool; // 0x54b Mov
	func_3709(var_26_bool); // 0x54c NEW_2
	if(var_23_bool == 0) goto Label_1378; // 0x54e JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x54f PushV
	var_28_object = var_18_bool; // 0x550 Mov
	var_29_bool = var_20_bool; // 0x551 Mov
	func_3602(var_28_object, var_29_bool); // 0x552 NEW_2
	var_22_int = var_27_int; // 0x553 Mov
	var_66_int = 0; // 0x555 PushI
	var_67_bool = var_22_int > var_66_int; // 0x556 GT
	if(var_67_bool == 0) goto Label_1378; // 0x557 JumpB
	var_68_int = 1; // 0x558 PushI
	var_69_bool = var_22_int > var_68_int; // 0x559 GT
	if(var_69_bool == 0) goto Label_1374; // 0x55a JumpB
	func_1450(); // 0x55c NEW_2
	
Label_1374:
	var_72_object = Obj(); // 0x55e PushV
	var_72_object = var_18_bool; // 0x55f Mov
	func_3609(var_72_object); // 0x560 NEW_2
	
Label_1378:
	return 2; // 0x562 Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x563 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x564 PushV
	var_22_object = var_18_bool; // 0x565 Mov
	func_3661(var_22_object); // 0x566 NEW_2
	var_20_int = var_21_int; // 0x567 Mov
	var_23_int = 0; // 0x569 PushI
	var_24_bool = var_20_int > var_23_int; // 0x56a GT
	if(var_24_bool == 0) goto Label_1398; // 0x56b JumpB
	var_25_int = 1; // 0x56c PushI
	var_26_bool = var_20_int > var_25_int; // 0x56d GT
	if(var_26_bool == 0) goto Label_1394; // 0x56e JumpB
	func_1450(); // 0x570 NEW_2
	
Label_1394:
	var_29_object = Obj(); // 0x572 PushV
	var_29_object = var_18_bool; // 0x573 Mov
	func_3664(); // 0x574 NEW_2
	
Label_1398:
	return 2; // 0x576 Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x577 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x578 PushV
	var_23_object = var_18_object; // 0x579 Mov
	var_24_string = var_19_bool; // 0x57a Mov
	func_3415(var_22_bool, var_23_object, var_24_string); // 0x57b NEW_2
	if(var_22_bool == 0) goto Label_1415; // 0x57d JumpB
	func_1450(); // 0x57f NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x581 PushV
	var_52_object = var_18_object; // 0x582 Mov
	var_53_string = var_19_bool; // 0x583 Mov
	func_3447(var_52_object, var_53_string); // 0x584 NEW_2
	goto Label_1435; // 0x586 Jump
	
Label_1435:
	return 2; // 0x59b Return
	
Label_1415:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x587 PushV
	var_129_string = var_19_bool; // 0x588 Mov
	var_130_object = var_18_object; // 0x589 Mov
	func_3625(var_130_object); // 0x58a NEW_2
	var_21_int = var_128_int; // 0x58b Mov
	var_131_int = 0; // 0x58d PushI
	var_132_bool = var_21_int > var_131_int; // 0x58e GT
	if(var_132_bool == 0) goto Label_1435; // 0x58f JumpB
	var_133_int = 1; // 0x590 PushI
	var_134_bool = var_21_int > var_133_int; // 0x591 GT
	if(var_134_bool == 0) goto Label_1430; // 0x592 JumpB
	func_1450(); // 0x594 NEW_2
	
Label_1430:
	var_135_string = ""; var_136_object = Obj(); // 0x596 PushV
	var_135_string = var_19_bool; // 0x597 Mov
	var_136_object = var_18_object; // 0x598 Mov
	func_3628(); // 0x599 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x59d PushV
	var_20_string = var_18_bool; // 0x59e Mov
	func_3514(var_19_bool, var_20_string); // 0x59f NEW_2
	if(var_19_bool == 0) goto Label_1449; // 0x5a1 JumpB
	func_1450(); // 0x5a3 NEW_2
	var_30_string = ""; // 0x5a5 PushV
	var_30_string = var_18_bool; // 0x5a6 Mov
	func_3530(var_30_string); // 0x5a7 NEW_2
	
Label_1449:
	return 0; // 0x5a9 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1450(); // 0x5b7 NEW_2
	var_21_object = Obj(); // 0x5b9 PushV
	var_21_object = var_18_bool; // 0x5ba Mov
	func_3391(); // 0x5bb NEW_2
	return 0; // 0x5bd Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x5be PushV
	var_23_int = 111; // 0x5bf PushI
	var_24_bool = var_18_bool != var_23_int; // 0x5c0 Neq
	if(var_24_bool == 0) goto Label_1475; // 0x5c1 JumpB
	return 4; // 0x5c2 Return
	
Label_1475:
	var_25_bool = 0; var_26_object = Obj(); // 0x5c3 PushV
	var_26_object = var_0_object; // 0x5c4 MovT
	func_2625(var_25_bool, var_26_object); // 0x5c5 NEW_2
	var_59_bool = var_25_bool == 0; // 0x5c7 Not
	if(var_59_bool == 0) goto Label_1485; // 0x5c8 JumpB
	func_1450(); // 0x5ca NEW_2
	return 4; // 0x5cc Return
	
Label_1485:
	GetDirection(var_21_cvector); // 0x5cd Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x5cf PushV
	var_63_object = var_0_object; // 0x5d0 MovT
	func_2479(var_63_object); // 0x5d1 NEW_2
	var_22_cvector = var_62_cvector; // 0x5d2 Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x5d4 PushV
	var_69_cvector = var_21_cvector; // 0x5d5 Mov
	var_70_cvector = var_22_cvector; // 0x5d6 Mov
	func_3050(var_68_float, var_69_cvector, var_70_cvector); // 0x5d7 NEW_2
	var_92_float = 0.5; // 0x5d9 PushF
	var_93_bool = var_68_float < var_92_float; // 0x5da LT
	if(var_93_bool == 0) goto Label_1504; // 0x5db JumpB
	var_94_object = Obj(); // 0x5dc PushV
	var_94_object = var_0_object; // 0x5dd MovT
	func_2775(); // 0x5de NEW_2
	
Label_1504:
	return 4; // 0x5e0 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1450(); // 0x5e2 NEW_2
	func_3624(); // 0x5e5 NEW_2
	return 0; // 0x5e7 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x5e9 PushV
	var_20_object = var_18_bool; // 0x5ea Mov
	func_3472(var_19_bool, var_20_object); // 0x5eb NEW_2
	if(var_19_bool == 0) goto Label_1525; // 0x5ed JumpB
	func_1450(); // 0x5ef NEW_2
	var_33_object = Obj(); // 0x5f1 PushV
	var_33_object = var_18_bool; // 0x5f2 Mov
	func_3495(var_33_object); // 0x5f3 NEW_2
	
Label_1525:
	return 0; // 0x5f5 Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2272(var_17_bool); // 0x89b NEW_2
	func_3624(); // 0x89e NEW_2
	return 0; // 0x8a0 Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0x8d3 PushI
	var_20_bool = var_18_int == var_19_int; // 0x8d4 Eq
	if(var_20_bool == 0) goto Label_2267; // 0x8d5 JumpB
	var_21_object = Obj(); // 0x8d6 PushV
	var_21_object = var_1_object; // 0x8d7 MovT
	func_3091(var_21_object); // 0x8d8 NEW_2
	goto Label_2271; // 0x8da Jump
	
Label_2271:
	return 0; // 0x8df Return
	
Label_2267:
	var_26_int = 0; // 0x8db PushV
	var_26_int = var_18_int; // 0x8dc Mov
	func_2416(var_17_bool, var_18_int, var_26_int); // 0x8dd NEW_2
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x8ee PushV
	var_19_bool = 0; // 0x8ef MovB
	var_20_bool = var_1_object == var_18_object; // 0x8f0 Eq
	if(var_20_bool == 0) goto Label_2293; // 0x8f1 JumpB
	var_21_bool = var_2_object == 0; // 0x8f2 Not
	if(var_21_bool == 0) goto Label_2293; // 0x8f3 JumpB
	var_19_bool = 1; // 0x8f4 MovB
	
Label_2293:
	if(var_19_bool == 0) goto Label_2299; // 0x8f5 JumpB
	var_2_object = 1; // 0x8f6 TMovB
	var_22_object = Obj(); // 0x8f7 PushV
	var_22_object = var_18_object; // 0x8f8 Mov
	func_2907(var_22_object); // 0x8f9 NEW_2
	
Label_2299:
	return 0; // 0x8fb Return
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x8fd PushV
	var_19_bool = 0; // 0x8fe MovB
	var_20_bool = var_1_object == var_18_object; // 0x8ff Eq
	if(var_20_bool == 0) goto Label_2308; // 0x900 JumpB
	var_21_object = var_2_object; // 0x901 PushT
	if(var_21_object == 0) goto Label_2308; // 0x902 JumpB
	var_19_bool = 1; // 0x903 MovB
	
Label_2308:
	if(var_19_bool == 0) goto Label_2313; // 0x904 JumpB
	var_2_object = 0; // 0x905 TMovB
	var_22_string = "head"; // 0x906 PushS
	UnlookAsync(var_22_string); // 0x907 Func
	
Label_2313:
	return 0; // 0x909 Return
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0x983 Func
	return 0; // 0x985 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_2272(var_18_object); // 0x98f NEW_2
	var_23_object = Obj(); // 0x991 PushV
	var_23_object = var_18_object; // 0x992 Mov
	func_3391(); // 0x993 NEW_2
	return 0; // 0x995 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0xd32 PushV
	var_22_string = "health"; // 0xd33 PushS
	var_23_bool = var_19_string == var_22_string; // 0xd34 Eq
	if(var_23_bool == 0) goto Label_3390; // 0xd35 JumpB
	var_24_string = "health"; // 0xd36 PushS
	GetProperty(var_24_string, var_21_float); // 0xd37 Func
	var_25_int = 0; // 0xd39 PushI
	var_26_bool = var_21_float <= var_25_int; // 0xd3a LE
	if(var_26_bool == 0) goto Label_3390; // 0xd3b JumpB
	SignalDeath(var_18_object); // 0xd3c Func
	
Label_3390:
	return 2; // 0xd3e Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0xd40 PushV
	var_19_object = var_18_object; // 0xd41 Mov
	func_3370(var_19_object); // 0xd42 NEW_2
	return 0; // 0xd44 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0xd46 PushV
	var_22_object = var_18_object; // 0xd47 Mov
	var_23_int = var_19_int; // 0xd48 Mov
	var_24_float = var_20_float; // 0xd49 Mov
	func_2693(var_22_object, var_23_int, var_24_float); // 0xd4a NEW_2
	return 0; // 0xd4c Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0xd4e PushV
	var_24_object = var_18_object; // 0xd4f Mov
	var_25_int = var_19_int; // 0xd50 Mov
	var_26_float = var_20_float; // 0xd51 Mov
	var_27_cvector = var_22_cvector; // 0xd52 Mov
	var_28_cvector = var_23_cvector; // 0xd53 Mov
	func_2761(var_26_float, var_27_cvector, var_28_cvector); // 0xd54 NEW_2
	return 0; // 0xd56 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x278 PushB
	SensePlayerOnly(var_18_bool); // 0x279 Func
	func_3681(); // 0x27c NEW_2
	func_647(); // 0x27f NEW_2
	
Label_641:
	var_2_object = 0; // 0x281 TMovB
	func_908(var_16_object, var_17_bool); // 0x283 NEW_2
	goto Label_641; // 0x285 Jump
}


func_3584(var_30_int, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xe01 PushV
	var_33_object = var_31_object; // 0xe02 Mov
	func_2625(var_32_bool, var_33_object); // 0xe03 NEW_2
	if(var_32_bool == 0) goto Label_3592; // 0xe05 JumpB
	var_30_int = 2; // 0xe06 MovI
	goto Label_3593; // 0xe07 Jump
	
Label_3593:
	return 0; // 0xe09 Return
	
Label_3592:
	var_30_int = 0; // 0xe08 MovI
}


func_1537(var_425_int)
{
	var_425_int = 0; // 0x602 MovI
	return 0; // 0x603 Return
}


func_2050(var_0_object, var_324_bool)
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_float = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_float = 0; var_334_float = 0; // 0x802 PushV
	var_335_bool = 0; var_336_object = Obj(); // 0x803 PushV
	var_336_object = var_0_object; // 0x804 MovT
	func_2625(var_335_bool, var_336_object); // 0x805 NEW_2
	var_337_bool = var_335_bool == 0; // 0x807 Not
	if(var_337_bool == 0) goto Label_2059; // 0x808 JumpB
	var_324_bool = 0; // 0x809 MovB
	return 10; // 0x80a Return
	
Label_2059:
	var_338_bool = 0; // 0x80b PushV
	func_2139(var_334_float, var_338_bool); // 0x80c NEW_2
	if(var_338_bool == 0) goto Label_2076; // 0x80e JumpB
	GetPFPosition(var_330_cvector); // 0x80f TObjFunc
	GetPFPosition(var_331_cvector); // 0x811 Func
	var_332_cvector = var_330_cvector - var_331_cvector; // 0x813 Sub2
	var_333_float = var_332_cvector | var_332_cvector; // 0x814 Or2
	GetAttackDistance(var_334_float); // 0x815 TObjFunc
	var_339_int = 50; // 0x817 PushI
	var_334_float = var_334_float + var_339_int; // 0x818 Add2
	var_340_float = var_334_float * var_334_float; // 0x819 Mult
	var_324_bool = var_333_float <= var_340_float; // 0x81a LE2
	return 10; // 0x81b Return
	
Label_2076:
	var_324_bool = 0; // 0x81c MovB
	return 10; // 0x81d Return
}


func_3072(var_477_float)
{
	var_478_object = Obj(); var_479_object = Obj(); // 0xc00 PushV
	CreateFloatVector(var_479_object); // 0xc01 Func
	add(var_477_float); // 0xc03 ObjFunc
	var_480_int = 15; // 0xc05 PushI
	SendWorldWndMessage(var_480_int, var_479_object); // 0xc06 Func
	return 2; // 0xc08 Return
}


func_1540(var_0_object, var_3_string, var_5_bool, var_81_object, var_82_bool, var_83_float, var_158_bool, var_250_bool)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_float = 0; // 0x604 PushV
	func_1769(var_103_cvector, var_104_bool, var_105_float); // 0x606 NEW_2
	var_5_bool = 0; // 0x608 TMovI
	var_128_string = "@GetAttackDistance"; // 0x609 PushS
	var_129_int = 1; // 0x60a PushI
	var_130_bool = IsFuncExist(var_81_object, var_128_string, var_129_int); // 0x60b FuncExist
	if(var_130_bool == 0) goto Label_1554; // 0x60c JumpB
	GetAttackDistance(var_95_float); // 0x60d ObjFunc
	var_131_int = 50; // 0x60f PushI
	var_95_float = var_95_float + var_131_int; // 0x610 Add2
	goto Label_1555; // 0x611 Jump
	
Label_1555:
	var_132_int = 150; // 0x613 PushI
	var_133_bool = var_95_float >= var_132_int; // 0x614 GE
	if(var_133_bool == 0) goto Label_1559; // 0x615 JumpB
	var_95_float = 150; // 0x616 MovI
	
Label_1559:
	var_3_string = 0; // 0x617 TMovB
	var_0_object = var_81_object; // 0x618 TMov
	IsPlayerActor(var_0_object, var_98_bool); // 0x619 Func
	var_134_bool = var_98_bool; // 0x61b Push
	if(var_134_bool == 0) goto Label_1573; // 0x61c JumpB
	var_135_string = "attack"; // 0x61d PushS
	PlayGlobalMusic(var_135_string); // 0x61e Func
	var_136_object = Obj(); // 0x620 PushV
	func_2992(var_136_object); // 0x621 NEW_2
	SendPlayerEnemy(var_81_object, var_136_object); // 0x623 Func
	
Label_1573:
	var_139_bool = var_82_bool; // 0x625 Push
	if(var_139_bool == 0) goto Label_1577; // 0x626 JumpB
	var_99_bool = 0; // 0x627 MovB
	goto Label_1578; // 0x628 Jump
	
Label_1578:
	var_140_float = 400.0; // 0x62a PushF
	var_100_float = var_140_float + var_95_float; // 0x62b Add2
	
Label_1580:
	var_141_bool = 0; // 0x62c PushV
	var_141_bool = 0; // 0x62d MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x62e PushV
	var_143_object = var_0_object; // 0x62f MovT
	func_2625(var_142_bool, var_143_object); // 0x630 NEW_2
	if(var_142_bool == 0) goto Label_1590; // 0x632 JumpB
	var_144_bool = var_3_string == 0; // 0x633 Not
	if(var_144_bool == 0) goto Label_1590; // 0x634 JumpB
	var_141_bool = 1; // 0x635 MovB
	
Label_1590:
	if(var_141_bool == 0) goto Label_1752; // 0x636 JumpB
	func_2182(var_105_float); // 0x638 NEW_2
	GetPFPosition(var_96_cvector); // 0x63a TObjFunc
	GetPFPosition(var_97_cvector); // 0x63c Func
	var_101_cvector = var_96_cvector - var_97_cvector; // 0x63e Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x63f Or2
	var_150_float = var_100_float * var_100_float; // 0x640 Mult
	var_151_bool = var_102_float >= var_150_float; // 0x641 GE
	if(var_151_bool == 0) goto Label_1618; // 0x642 JumpB
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0; // 0x643 PushV
	var_153_object = var_0_object; // 0x644 MovT
	var_154_float = var_95_float; // 0x645 Mov
	var_155_float = 3000.0; // 0x646 MovF
	var_156_bool = 1; // 0x647 MovB
	var_157_bool = 0; // 0x648 MovB
	TaskCall(7); // 0x649 TaskCall
	func_2209(var_160_bool, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool); // 0x64a NEW_2
	TaskReturn(); // 0x64b TaskReturn
	var_235_bool = var_158_bool == 0; // 0x64d Not
	if(var_235_bool == 0) goto Label_1616; // 0x64e JumpB
	goto Label_1752; // 0x64f Jump
	
Label_1752:
	WaitForAnimEnd(); // 0x6d8 Func
	var_236_string = var_3_string; // 0x6da PushT
	if(var_236_string == 0) goto Label_1757; // 0x6db JumpB
	return 22; // 0x6dc Return
	
Label_1757:
	var_237_string = "all"; // 0x6dd PushS
	var_238_string = "attack_off"; // 0x6de PushS
	PlayAnimation(var_237_string, var_238_string); // 0x6df Func
	WaitForAnimEnd(); // 0x6e1 Func
	var_239_bool = var_98_bool; // 0x6e3 Push
	if(var_239_bool == 0) goto Label_1768; // 0x6e4 JumpB
	var_240_float = 2.0; // 0x6e5 PushF
	Sleep(var_240_float); // 0x6e6 Func
	
Label_1768:
	return 22; // 0x6e8 Return
	
Label_1616:
	var_99_bool = 0; // 0x650 MovB
	goto Label_1751; // 0x651 Jump
	
Label_1751:
	goto Label_1580; // 0x6d7 Jump
	
Label_1618:
	var_241_float = var_83_float * var_83_float; // 0x652 Mult
	var_242_bool = var_102_float >= var_241_float; // 0x653 GE
	if(var_242_bool == 0) goto Label_1743; // 0x654 JumpB
	GetPFPosition(var_103_cvector); // 0x655 TObjFunc
	CanReachByPF(var_104_bool, var_103_cvector); // 0x657 Func
	var_243_bool = var_104_bool == 0; // 0x659 Not
	if(var_243_bool == 0) goto Label_1642; // 0x65a JumpB
	var_244_bool = 0; var_245_object = Obj(); var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_bool = 0; // 0x65b PushV
	var_245_object = var_0_object; // 0x65c MovT
	var_246_float = var_95_float; // 0x65d Mov
	var_247_float = 3000.0; // 0x65e MovF
	var_248_bool = 1; // 0x65f MovB
	var_249_bool = 0; // 0x660 MovB
	TaskCall(7); // 0x661 TaskCall
	func_2209(var_252_bool, var_244_bool, var_245_object, var_246_float, var_247_float, var_248_bool, var_249_bool); // 0x662 NEW_2
	TaskReturn(); // 0x663 TaskReturn
	var_253_bool = var_250_bool == 0; // 0x665 Not
	if(var_253_bool == 0) goto Label_1640; // 0x666 JumpB
	goto Label_1752; // 0x667 Jump
	
Label_1640:
	var_99_bool = 0; // 0x668 MovB
	goto Label_1580; // 0x669 Jump
	
Label_1642:
	var_254_bool = var_99_bool == 0; // 0x66a Not
	if(var_254_bool == 0) goto Label_1667; // 0x66b JumpB
	var_255_object = Obj(); // 0x66c PushV
	var_255_object = var_0_object; // 0x66d MovT
	func_2775(); // 0x66e NEW_2
	var_264_string = "all"; // 0x670 PushS
	var_265_string = "attack_on"; // 0x671 PushS
	PlayAnimation(var_264_string, var_265_string); // 0x672 Func
	WaitForAnimEnd(); // 0x674 Func
	func_2182(var_105_float); // 0x677 NEW_2
	StopAsync(); // 0x679 Func
	var_99_bool = 1; // 0x67b MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x67c PushV
	var_267_object = var_0_object; // 0x67d MovT
	func_2625(var_266_bool, var_267_object); // 0x67e NEW_2
	var_268_bool = var_266_bool == 0; // 0x680 Not
	if(var_268_bool == 0) goto Label_1667; // 0x681 JumpB
	goto Label_1752; // 0x682 Jump
	
Label_1667:
	rand(var_105_float); // 0x683 Func
	var_269_bool = 0; // 0x685 PushV
	var_269_bool = 1; // 0x686 MovB
	var_270_float = 0.25; // 0x687 PushF
	var_271_bool = var_105_float < var_270_float; // 0x688 LT
	if(var_271_bool == 0) goto Label_1679; // 0x689 JumpB
	var_272_bool = 0; // 0x68a PushV
	func_2139(var_269_bool, var_272_bool); // 0x68b NEW_2
	if(var_272_bool == 0) goto Label_1679; // 0x68d JumpB
	var_269_bool = 0; // 0x68e MovB
	
Label_1679:
	if(var_269_bool == 0) goto Label_1696; // 0x68f JumpB
	Face(var_0_object); // 0x690 Func
	func_2189(); // 0x693 NEW_2
	var_307_string = "all"; // 0x695 PushS
	var_308_string = "attack_stay"; // 0x696 PushS
	PlayAnimation(var_307_string, var_308_string); // 0x697 Func
	var_309_bool = 0; var_310_float = 0; // 0x699 PushV
	var_310_float = var_83_float; // 0x69a Mov
	func_2007(var_105_float, var_309_bool, var_310_float); // 0x69b NEW_2
	StopAsync(); // 0x69d Func
	goto Label_1742; // 0x69f Jump
	
Label_1742:
	goto Label_1751; // 0x6ce Jump
	
Label_1696:
	Face(var_0_object); // 0x6a0 Func
	var_524_string = "all"; // 0x6a2 PushS
	var_525_string = "fjump"; // 0x6a3 PushS
	PlayAnimation(var_524_string, var_525_string); // 0x6a4 Func
	WaitForAnimEnd(); // 0x6a6 Func
	func_2182(var_105_float); // 0x6a9 NEW_2
	var_526_cvector = CVector(0.0, 0.0, 0.0); // 0x6ab PushVec
	SetSpeed(var_526_cvector); // 0x6ac Func
	Stop(); // 0x6ae Func
	StopAsync(); // 0x6b0 Func
	var_527_bool = 0; // 0x6b2 PushV
	func_2139(var_105_float, var_527_bool); // 0x6b3 NEW_2
	var_528_bool = var_527_bool == 0; // 0x6b5 Not
	if(var_528_bool == 0) goto Label_1742; // 0x6b6 JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0x6b7 PushV
	var_530_object = var_0_object; // 0x6b8 MovT
	func_2625(var_529_bool, var_530_object); // 0x6b9 NEW_2
	var_531_bool = var_529_bool == 0; // 0x6bb Not
	if(var_531_bool == 0) goto Label_1726; // 0x6bc JumpB
	goto Label_1752; // 0x6bd Jump
	
Label_1726:
	GetPFPosition(var_96_cvector); // 0x6be TObjFunc
	GetPFPosition(var_97_cvector); // 0x6c0 Func
	var_101_cvector = var_96_cvector - var_97_cvector; // 0x6c2 Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x6c3 Or2
	var_532_float = var_83_float * var_83_float; // 0x6c4 Mult
	var_533_bool = var_102_float < var_532_float; // 0x6c5 LT
	if(var_533_bool == 0) goto Label_1742; // 0x6c6 JumpB
	var_534_bool = 0; var_535_float = 0; // 0x6c7 PushV
	var_535_float = var_83_float; // 0x6c8 Mov
	func_1843(var_105_float, var_534_bool, var_535_float); // 0x6c9 NEW_2
	var_536_bool = var_534_bool == 0; // 0x6cb Not
	if(var_536_bool == 0) goto Label_1742; // 0x6cc JumpB
	goto Label_1752; // 0x6cd Jump
	
Label_1743:
	var_537_bool = 0; var_538_float = 0; // 0x6cf PushV
	var_538_float = var_83_float; // 0x6d0 Mov
	func_1843(var_105_float, var_537_bool, var_538_float); // 0x6d1 NEW_2
	var_539_bool = var_537_bool == 0; // 0x6d3 Not
	if(var_539_bool == 0) goto Label_1750; // 0x6d4 JumpB
	goto Label_1752; // 0x6d5 Jump
	
Label_1750:
	var_99_bool = 1; // 0x6d6 MovB
	
Label_1577:
	var_99_bool = 1; // 0x629 MovB
	
Label_1554:
	var_95_float = var_83_float; // 0x612 Mov
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x0 PushV
	var_0_object = var_44_object; // 0x1 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x2 PushV
	var_55_object = var_44_object; // 0x3 Mov
	var_56_float = 70.0; // 0x4 MovF
	func_2791(var_55_object, var_56_float); // 0x5 NEW_2
	var_100_bool = var_54_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_3673(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_3671(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_3675(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_3677(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_3129(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_52_int = -1; // 0x26 MovI
	IsOverrideActive(var_51_bool); // 0x27 Func
	var_113_bool = var_51_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_43_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_50_object); // 0x2d Func
	var_114_object = Obj(); var_115_object = Obj(); // 0x2f PushV
	var_114_object = var_44_object; // 0x30 Mov
	var_115_object = var_50_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_53_bool); // 0x36 ObjFunc
	
Label_56:
	var_183_bool = var_53_bool == 0; // 0x38 Not
	if(var_183_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_53_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_184_object = Obj(); // 0x3f PushV
	var_184_object = var_44_object; // 0x40 Mov
	func_2859(); // 0x41 NEW_2
	StopDialog(var_50_object); // 0x43 Func
	GetReturnValue(var_52_int); // 0x45 ObjFunc
	var_43_int = var_52_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_3594(var_73_object)
{
	var_74_object = Obj(); // 0xe0b PushV
	var_74_object = var_73_object; // 0xe0c Mov
	TaskCall(6); // 0xe0d TaskCall
	func_1526(var_74_object); // 0xe0e NEW_2
	TaskReturn(); // 0xe0f TaskReturn
	return 0; // 0xe11 Return
}


func_3082(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0xc0a PushV
	GetGameTime(var_30_float); // 0xc0b Func
	var_31_int = 1; // 0xc0d PushI
	var_32_int = 0; // 0xc0e PushV
	var_33_int = 24; // 0xc0f PushI
	var_32_int = var_30_float / var_30_float; // 0xc10 Div2
	var_28_int = var_31_int + var_32_int; // 0xc11 Add2
	return 2; // 0xc12 Return
}


func_3602(var_27_int, var_28_object)
{
	var_30_int = 0; var_31_object = Obj(); // 0xe13 PushV
	var_31_object = var_28_object; // 0xe14 Mov
	func_3584(var_30_int, var_31_object); // 0xe15 NEW_2
	var_27_int = var_30_int; // 0xe16 Mov
	return 0; // 0xe18 Return
}


func_3091(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0xc13 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0xc14 Func
	var_24_bool = var_23_bool; // 0xc16 Push
	if(var_24_bool == 0) goto Label_3099; // 0xc17 JumpB
	var_25_string = "attack"; // 0xc18 PushS
	PlayGlobalMusic(var_25_string); // 0xc19 Func
	
Label_3099:
	return 2; // 0xc1b Return
}


func_2584(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0xa18 PushV
	IsDead(var_49_bool); // 0xa19 ObjFunc
	var_46_bool = var_49_bool; // 0xa1b Mov
	return 2; // 0xa1c Return
}


func_3609(var_72_object)
{
	var_73_object = Obj(); // 0xe1a PushV
	var_73_object = var_72_object; // 0xe1b Mov
	func_3594(var_73_object); // 0xe1c NEW_2
	return 0; // 0xe1e Return
}


func_3100()
{
	var_382_object = Obj(); var_383_object = Obj(); // 0xc1c PushV
	GetScene(var_383_object); // 0xc1d Func
	var_384_string = "battle"; // 0xc1f PushS
	var_385_object = Obj(); // 0xc20 PushV
	func_2992(var_385_object); // 0xc21 NEW_2
	BroadcastMessage(var_384_string, var_385_object, var_383_object); // 0xc23 Func
	return 2; // 0xc25 Return
}


func_2589(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0xa1d PushV
	var_41_bool = var_36_object == 0; // 0xa1e NullEq
	if(var_41_bool == 0) goto Label_2594; // 0xa1f JumpB
	var_35_bool = 0; // 0xa20 MovB
	return 4; // 0xa21 Return
	
Label_2594:
	var_42_bool = 0; // 0xa22 PushV
	var_42_bool = 0; // 0xa23 MovB
	var_43_string = "IsDead"; // 0xa24 PushS
	var_44_int = 1; // 0xa25 PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0xa26 FuncExist
	if(var_45_bool == 0) goto Label_2606; // 0xa27 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xa28 PushV
	var_47_object = var_36_object; // 0xa29 Mov
	func_2584(var_47_object); // 0xa2a NEW_2
	if(var_46_bool == 0) goto Label_2606; // 0xa2c JumpB
	var_42_bool = 1; // 0xa2d MovB
	
Label_2606:
	if(var_42_bool == 0) goto Label_2609; // 0xa2e JumpB
	var_35_bool = 0; // 0xa2f MovB
	return 4; // 0xa30 Return
	
Label_2609:
	GetScene(var_39_object); // 0xa31 Func
	var_50_bool = var_39_object == 0; // 0xa33 NullEq
	if(var_50_bool == 0) goto Label_2615; // 0xa34 JumpB
	var_35_bool = 0; // 0xa35 MovB
	return 4; // 0xa36 Return
	
Label_2615:
	GetScene(var_40_object); // 0xa37 ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0xa39 Neq
	if(var_51_bool == 0) goto Label_2621; // 0xa3a JumpB
	var_35_bool = 0; // 0xa3b MovB
	return 4; // 0xa3c Return
	
Label_2621:
	var_35_bool = 1; // 0xa3d MovB
	return 4; // 0xa3e Return
}


func_2078(var_322_bool)
{
	var_323_bool = 0; // 0x81e PushV
	var_323_bool = 0; // 0x81f MovB
	var_324_bool = 0; // 0x820 PushV
	func_2050(var_323_bool, var_324_bool); // 0x821 NEW_2
	if(var_324_bool == 0) goto Label_2089; // 0x823 JumpB
	var_341_bool = 0; // 0x824 PushV
	func_2094(var_322_bool, var_323_bool, var_341_bool); // 0x825 NEW_2
	if(var_341_bool == 0) goto Label_2089; // 0x827 JumpB
	var_323_bool = 1; // 0x828 MovB
	
Label_2089:
	if(var_323_bool == 0) goto Label_2092; // 0x829 JumpB
	var_322_bool = 1; // 0x82a MovB
	return 0; // 0x82b Return
	
Label_2092:
	var_322_bool = 0; // 0x82c MovB
	return 0; // 0x82d Return
}


func_3615(var_21_int)
{
	var_21_int = 2; // 0xe20 MovI
	return 0; // 0xe21 Return
}


func_3618(var_29_object)
{
	var_30_object = Obj(); // 0xe23 PushV
	var_30_object = var_29_object; // 0xe24 Mov
	func_3689(var_30_object); // 0xe25 NEW_2
	return 0; // 0xe27 Return
}


func_3111()
{
	var_131_string = "ood1Doberman1_1"; // 0xc28 PushS
	var_132_int = 1; // 0xc29 PushI
	SetVariable(var_131_string, var_132_int); // 0xc2a Func
	return 0; // 0xc2c Return
}


func_3624()
{
	return 0; // 0xe28 Return
}


func_3625(var_128_int)
{
	var_128_int = 0; // 0xe2a MovI
	return 0; // 0xe2b Return
}


func_3628()
{
	return 0; // 0xe2d Return
}


func_3117(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0xc2e PushV
	var_124_string = "ood1Doberman1_1"; // 0xc2f MovS
	func_3067(var_123_int, var_124_string); // 0xc30 NEW_2
	var_127_int = 0; // 0xc32 PushI
	var_128_bool = var_123_int == var_127_int; // 0xc33 Eq
	if(var_128_bool == 0) goto Label_3127; // 0xc34 JumpB
	var_121_bool = 1; // 0xc35 MovB
	return 0; // 0xc36 Return
	
Label_3127:
	var_121_bool = 0; // 0xc37 MovB
	return 0; // 0xc38 Return
}


func_2094(var_0_object, var_4_bool, var_341_bool)
{
	var_342_object = Obj(); var_343_bool = 0; var_344_float = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_object = Obj(); var_348_bool = 0; var_349_float = 0; var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); // 0x82e PushV
	GetScene(var_347_object); // 0x82f Func
	var_348_bool = 0; // 0x831 MovB
	
Label_2098:
	var_352_cvector = CVector(0,0,0); var_353_object = Obj(); // 0x832 PushV
	var_353_object = var_0_object; // 0x833 MovT
	func_2479(var_353_object); // 0x834 NEW_2
	var_358_int = -var_352_cvector; // 0x836 Neg
	FindDirLength(var_349_float, var_358_int, var_349_float); // 0x837 Func
	var_359_bool = var_349_float < var_4_bool; // 0x839 LT
	if(var_359_bool == 0) goto Label_2108; // 0x83a JumpB
	goto Label_2136; // 0x83b Jump
	
Label_2136:
	var_341_bool = var_348_bool; // 0x858 Mov
	return 10; // 0x859 Return
	
Label_2108:
	Face(var_0_object); // 0x83c Func
	var_360_string = "all"; // 0x83e PushS
	var_361_string = "bjump"; // 0x83f PushS
	PlayAnimation(var_360_string, var_361_string); // 0x840 Func
	GetPFPosition(var_350_cvector); // 0x842 TObjFunc
	GetPFPosition(var_351_cvector); // 0x844 Func
	WaitForAnimEnd(); // 0x846 Func
	func_2182(var_351_cvector); // 0x849 NEW_2
	StopAsync(); // 0x84b Func
	var_362_cvector = CVector(0.0, 0.0, 0.0); // 0x84d PushVec
	SetSpeed(var_362_cvector); // 0x84e Func
	var_348_bool = 1; // 0x850 MovB
	var_363_bool = 0; // 0x851 PushV
	func_2050(var_351_cvector, var_363_bool); // 0x852 NEW_2
	var_364_bool = var_363_bool == 0; // 0x854 Not
	if(var_364_bool == 0) goto Label_2135; // 0x855 JumpB
	goto Label_2136; // 0x856 Jump
	
Label_2135:
	goto Label_2098; // 0x857 Jump
}


func_3630(var_24_bool)
{
	var_24_bool = 0; // 0xe2f MovB
	return 0; // 0xe30 Return
}


func_3633()
{
	return 0; // 0xe32 Return
}


func_3635(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0xe33 PushV
	CanSee(var_34_bool, var_32_object); // 0xe34 Func
	var_31_bool = 1; // 0xe36 MovB
	var_35_bool = var_34_bool; // 0xe37 Push
	if(var_35_bool == 0) goto Label_3649; // 0xe38 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0xe39 PushV
	var_37_object = var_32_object; // 0xe3a Mov
	func_2486(var_37_object); // 0xe3b NEW_2
	var_44_int = 2250000; // 0xe3d PushI
	var_45_bool = var_36_float <= var_44_int; // 0xe3e LE
	if(var_45_bool == 0) goto Label_3649; // 0xe3f JumpB
	var_31_bool = 0; // 0xe40 MovB
	
Label_3649:
	return 2; // 0xe41 Return
}


func_3129(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0xc39 PushV
	var_108_string = "branch"; // 0xc3a PushS
	GetVariable(var_108_string, var_107_int); // 0xc3b Func
	var_109_int = 0; // 0xc3d PushI
	var_110_bool = var_107_int == var_109_int; // 0xc3e Eq
	if(var_110_bool == 0) goto Label_3139; // 0xc3f JumpB
	var_105_int = 1; // 0xc40 MovI
	return 2; // 0xc41 Return
	
Label_3139:
	var_111_int = 1; // 0xc43 PushI
	var_112_bool = var_107_int == var_111_int; // 0xc44 Eq
	if(var_112_bool == 0) goto Label_3144; // 0xc45 JumpB
	var_105_int = 2; // 0xc46 MovI
	return 2; // 0xc47 Return
	
Label_3144:
	var_105_int = 3; // 0xc48 MovI
	return 2; // 0xc49 Return
}


func_2625(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0xa41 PushV
	var_35_bool = 0; var_36_object = Obj(); // 0xa42 PushV
	var_36_object = var_32_object; // 0xa43 Mov
	func_2589(var_35_bool, var_36_object); // 0xa44 NEW_2
	var_52_bool = var_35_bool == 0; // 0xa46 Not
	if(var_52_bool == 0) goto Label_2634; // 0xa47 JumpB
	var_31_bool = 0; // 0xa48 MovB
	return 2; // 0xa49 Return
	
Label_2634:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0xa4a PushV
	var_54_object = var_32_object; // 0xa4b Mov
	var_55_string = "noaccess"; // 0xa4c MovS
	func_2499(var_53_bool, var_54_object, var_55_string); // 0xa4d NEW_2
	var_62_bool = var_53_bool == 0; // 0xa4f Not
	if(var_62_bool == 0) goto Label_2643; // 0xa50 JumpB
	var_31_bool = 1; // 0xa51 MovB
	return 2; // 0xa52 Return
	
Label_2643:
	var_63_string = "noaccess"; // 0xa53 PushS
	GetProperty(var_63_string, var_34_int); // 0xa54 ObjFunc
	var_64_int = 0; // 0xa56 PushI
	var_31_bool = var_34_int == var_64_int; // 0xa57 Eq2
	return 2; // 0xa58 Return
}


func_3650(var_59_object)
{
	var_60_object = Obj(); // 0xe43 PushV
	var_60_object = var_59_object; // 0xe44 Mov
	func_3576(var_60_object); // 0xe45 NEW_2
	return 0; // 0xe47 Return
}


func_3656(var_48_bool)
{
	var_48_bool = 0; // 0xe49 MovB
	return 0; // 0xe4a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_114_object, var_115_object)
{
	var_0_object = var_115_object; // 0x4b TMov
	var_1_object = var_114_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_120_int = 1; // 0x4e PushI
	if(var_120_int == 0) goto Label_132; // 0x4f JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x50 PushV
	var_122_object = var_1_object; // 0x51 MovT
	func_3117(var_122_object); // 0x52 NEW_2
	if(var_121_bool == 0) goto Label_110; // 0x54 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x55 PushV
	var_129_object = var_1_object; // 0x56 MovT
	var_130_object = var_0_object; // 0x57 MovT
	func_3111(); // 0x58 NEW_2
	var_133_string = ""; // 0x5a PushV
	var_133_string = "Neutral"; // 0x5b MovS
	func_162(var_115_object, var_133_string); // 0x5c NEW_2
	var_150_int = 532742; // 0x5e PushI
	SetMessage(var_150_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_151_int = 532995; // 0x63 PushI
	var_152_int = 34793; // 0x64 PushI
	var_153_int = 34495; // 0x65 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x66 TObjFunc
	var_154_int = 533000; // 0x68 PushI
	var_155_int = 34496; // 0x69 PushI
	var_156_int = 34500; // 0x6a PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_157_bool = 0; // 0x84 PushV
	func_3679(var_157_bool); // 0x85 NEW_2
	if(var_157_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_158_string = var_3_string; // 0x8a PushT
	if(var_158_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_159_string = ""; // 0x8d PushV
	var_159_string = var_2_object; // 0x8e MovT
	func_2876(var_159_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_170_string = "all"; // 0x93 PushS
	var_171_string = "idle"; // 0x94 PushS
	PlayAnimation(var_170_string, var_171_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_172_string = var_3_string; // 0x99 PushT
	if(var_172_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_173_string = "all"; // 0x9c PushS
	var_174_string = "idle"; // 0x9d PushS
	PlayAnimation(var_173_string, var_174_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_175_string = ""; // 0x6e PushV
	var_175_string = "Neutral"; // 0x6f MovS
	func_162(var_115_object, var_175_string); // 0x70 NEW_2
	var_176_int = 532746; // 0x72 PushI
	SetMessage(var_176_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_177_int = 532747; // 0x77 PushI
	var_178_int = -1; // 0x78 PushI
	var_179_int = 34221; // 0x79 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x7a TObjFunc
	var_180_int = 532997; // 0x7c PushI
	var_181_int = -1; // 0x7d PushI
	var_182_int = 34497; // 0x7e PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_3146(var_157_int)
{
	var_158_int = 0; var_159_int = 0; // 0xc4a PushV
	var_160_string = "branch"; // 0xc4b PushS
	GetVariable(var_160_string, var_159_int); // 0xc4c Func
	var_157_int = var_159_int; // 0xc4e Mov
	return 2; // 0xc4f Return
}


func_3659()
{
	return 0; // 0xe4c Return
}


func_3661(var_21_int)
{
	var_21_int = 0; // 0xe4e MovI
	return 0; // 0xe4f Return
}


func_3664()
{
	return 0; // 0xe51 Return
}


func_3152(var_35_object)
{
	var_36_int = 0; // 0xc51 PushV
	func_3146(var_36_int); // 0xc52 NEW_2
	var_40_int = 1; // 0xc54 PushI
	var_41_bool = var_36_int == var_40_int; // 0xc55 Eq
	if(var_41_bool == 0) goto Label_3162; // 0xc56 JumpB
	WorkWithCorpse(var_35_object); // 0xc57 Func
	goto Label_3164; // 0xc59 Jump
	
Label_3164:
	return 0; // 0xc5c Return
	
Label_3162:
	Barter(var_35_object); // 0xc5a Func
}


func_3666(var_26_bool)
{
	var_26_bool = 0; // 0xe53 MovB
	return 0; // 0xe54 Return
}


func_3669()
{
	return 0; // 0xe56 Return
}


func_3671(var_102_int)
{
	var_102_int = 518097; // 0xe57 MovI
	return 0; // 0xe58 Return
}


func_600(var_43_string)
{
	RemoveRTEnvelope(); // 0x259 Func
	SetDeathState(); // 0x25b Func
	Stop(); // 0x25d Func
	StopAsync(); // 0x25f Func
	StopSecondaryAnimation(); // 0x261 Func
	var_44_string = ""; // 0x263 PushV
	var_44_string = var_43_string; // 0x264 Mov
	func_2951(var_44_string); // 0x265 NEW_2
	var_73_string = "all"; // 0x267 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x268 Func
	WaitForAnimEnd(); // 0x26a Func
	var_74_string = "all"; // 0x26c PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x26d Func
	RemoveEnvelope(); // 0x26f Func
	return 0; // 0x271 Return
}


func_3673(var_101_int)
{
	var_101_int = 518096; // 0xe59 MovI
	return 0; // 0xe5a Return
}


func_2649(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0xa59 PushV
	var_50_bool = var_35_object == 0; // 0xa5a NullEq
	if(var_50_bool == 0) goto Label_2653; // 0xa5b JumpB
	return 14; // 0xa5c Return
	
Label_2653:
	IsDead(var_43_bool); // 0xa5d Func
	var_51_bool = var_43_bool; // 0xa5f Push
	if(var_51_bool == 0) goto Label_2658; // 0xa60 JumpB
	return 14; // 0xa61 Return
	
Label_2658:
	GetSecondaryAnimationType(var_44_int); // 0xa62 Func
	var_52_int = 0; // 0xa64 PushI
	var_53_bool = var_44_int < var_52_int; // 0xa65 LT
	if(var_53_bool == 0) goto Label_2664; // 0xa66 JumpB
	return 14; // 0xa67 Return
	
Label_2664:
	GetPosition(var_45_cvector); // 0xa68 ObjFunc
	GetPosition(var_46_cvector); // 0xa6a Func
	GetDirection(var_47_cvector); // 0xa6c Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0xa6e Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0xa6f PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0xa70 PushE
	var_56_float = var_54_float * var_55_float; // 0xa71 Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0xa72 PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0xa73 PushE
	var_59_float = var_57_float * var_58_float; // 0xa74 Mult
	var_60_int = var_56_float + var_59_float; // 0xa75 Add
	var_61_int = 0; // 0xa76 PushI
	var_62_bool = var_60_int >= var_61_int; // 0xa77 GE
	if(var_62_bool == 0) goto Label_2683; // 0xa78 JumpB
	var_49_string = "fhit"; // 0xa79 MovS
	goto Label_2684; // 0xa7a Jump
	
Label_2684:
	var_63_string = "hit_react"; // 0xa7c PushS
	var_64_string = "1"; // 0xa7d PushS
	var_65_int = var_49_string + var_64_string; // 0xa7e Add
	var_66_string = "2"; // 0xa7f PushS
	var_67_int = var_49_string + var_66_string; // 0xa80 Add
	var_68_int = -10; // 0xa81 PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0xa82 Func
	return 14; // 0xa84 Return
	
Label_2683:
	var_49_string = "bhit"; // 0xa7b MovS
}


func_2139(var_0_object, var_272_bool)
{
	var_273_bool = 0; var_274_bool = 0; // 0x85b PushV
	var_275_string = "IsAttacking"; // 0x85c PushS
	var_276_int = 1; // 0x85d PushI
	var_277_bool = IsFuncExist(var_0_object, var_275_string, var_276_int); // 0x85e FuncExist
	if(var_277_bool == 0) goto Label_2148; // 0x85f JumpB
	IsAttacking(var_274_bool); // 0x860 TObjFunc
	var_272_bool = var_274_bool; // 0x862 Mov
	return 2; // 0x863 Return
	
Label_2148:
	var_272_bool = 0; // 0x864 MovB
	return 2; // 0x865 Return
}


func_3675(var_103_string)
{
	var_103_string = "ui/NPC_Citizen2.png"; // 0xe5b MovS
	return 0; // 0xe5c Return
}


func_3677(var_104_string)
{
	var_104_string = "ui/NPC_Citizen2_b.png"; // 0xe5d MovS
	return 0; // 0xe5e Return
}


func_3165(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0; // 0xc5d PushV
	var_130_bool = var_115_int > var_116_int; // 0xc5e GT
	if(var_130_bool == 0) goto Label_3172; // 0xc5f JumpB
	var_131_string = "GenerateMoney: iMin > iMax"; // 0xc60 PushS
	Trace(var_131_string); // 0xc61 Func
	return 4; // 0xc63 Return
	
Label_3172:
	var_128_int = 0; // 0xc64 MovI
	var_132_bool = var_115_int != var_116_int; // 0xc65 Neq
	if(var_132_bool == 0) goto Label_3179; // 0xc66 JumpB
	var_133_int = var_116_int - var_115_int; // 0xc67 Sub
	irand(var_128_int, var_133_int); // 0xc68 Func
	goto Label_3183; // 0xc6a Jump
	
Label_3183:
	var_128_int = var_128_int + var_115_int; // 0xc6f Add2
	var_134_int = 0; // 0xc70 PushI
	var_135_bool = var_128_int == var_134_int; // 0xc71 Eq
	if(var_135_bool == 0) goto Label_3188; // 0xc72 JumpB
	return 4; // 0xc73 Return
	
Label_3188:
	var_136_int = 0; var_137_string = ""; // 0xc74 PushV
	var_137_string = "Money"; // 0xc75 MovS
	func_3365(var_136_int, var_137_string); // 0xc76 NEW_2
	var_140_int = 0; // 0xc78 PushI
	AddItem(var_129_bool, var_136_int, var_140_int, var_128_int); // 0xc79 Func
	return 4; // 0xc7b Return
	
Label_3179:
	var_141_int = 0; // 0xc6b PushI
	var_142_bool = var_115_int == var_141_int; // 0xc6c Eq
	if(var_142_bool == 0) goto Label_3183; // 0xc6d JumpB
	return 4; // 0xc6e Return
}


func_3679(var_96_bool)
{
	var_96_bool = 0; // 0xe5f MovB
	return 0; // 0xe60 Return
}


func_3681()
{
	var_19_bool = GlobalVars[0]; // 0xe61 PushGE
	var_19_bool = 0; // 0xe62 MovB
	GlobalVars[0] = var_19_bool; // 0xe63 PopGE
	var_20_bool = 0; // 0xe64 PushV
	var_20_bool = 1; // 0xe65 MovB
	func_3265(var_20_bool); // 0xe66 NEW_2
	return 0; // 0xe68 Return
}


func_2150(var_2_object, var_5_bool)
{
	var_389_float = 0; var_390_int = 0; var_391_float = 0; var_392_int = 0; // 0x866 PushV
	var_393_bool = var_2_object == 0; // 0x867 Not
	if(var_393_bool == 0) goto Label_2154; // 0x868 JumpB
	return 4; // 0x869 Return
	
Label_2154:
	var_394_bool = var_5_bool; // 0x86a PushT
	if(var_394_bool == 0) goto Label_2162; // 0x86b JumpB
	var_395_int = -1; // 0x86c PushI
	var_5_bool = var_5_bool + var_395_int; // 0x86d Add2
	var_396_int = 0; // 0x86e PushI
	var_397_bool = var_5_bool > var_396_int; // 0x86f GT
	if(var_397_bool == 0) goto Label_2162; // 0x870 JumpB
	return 4; // 0x871 Return
	
Label_2162:
	rand(var_391_float); // 0x872 Func
	var_398_float = 0; // 0x874 PushV
	func_2200(var_398_float); // 0x875 NEW_2
	var_399_bool = var_391_float < var_398_float; // 0x877 LT
	if(var_399_bool == 0) goto Label_2181; // 0x878 JumpB
	irand(var_392_int, var_391_float); // 0x879 Func
	var_400_int = 1; // 0x87b PushI
	var_392_int = var_392_int + var_400_int; // 0x87c Add2
	var_401_string = "attack"; // 0x87d PushS
	var_402_int = var_401_string + var_392_int; // 0x87e Add
	Speak(var_402_int); // 0x87f Func
	var_403_int = 0; // 0x881 PushV
	func_2198(var_403_int); // 0x882 NEW_2
	var_5_bool = var_403_int; // 0x883 TMov
	
Label_2181:
	return 4; // 0x885 Return
}


func_3689(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0xe69 PushV
	var_33_bool = GlobalVars[0]; // 0xe6a PushGE
	if(var_33_bool == 0) goto Label_3702; // 0xe6b JumpB
	IsOverrideActive(var_32_bool); // 0xe6c Func
	var_34_bool = var_32_bool == 0; // 0xe6e Not
	if(var_34_bool == 0) goto Label_3700; // 0xe6f JumpB
	var_35_object = Obj(); // 0xe70 PushV
	var_35_object = var_30_object; // 0xe71 Mov
	func_3152(var_35_object); // 0xe72 NEW_2
	
Label_3700:
	return 2; // 0xe74 Return
	
Label_3702:
	var_42_object = Obj(); // 0xe76 PushV
	var_42_object = var_30_object; // 0xe77 Mov
	func_3740(var_42_object); // 0xe78 NEW_2
	return 2; // 0xe7a Return
}


func_3707(var_63_bool)
{
	var_63_bool = 0; // 0xe7b MovB
	return 0; // 0xe7c Return
}


func_3196(var_163_string)
{
	var_164_object = Obj(); var_165_int = 0; var_166_bool = 0; var_167_object = Obj(); var_168_int = 0; var_169_bool = 0; // 0xc7c PushV
	CreateInvItem(var_167_object); // 0xc7d Func
	SetItemName(var_163_string); // 0xc7f ObjFunc
	var_170_string = "Organ"; // 0xc81 PushS
	var_171_int = 1; // 0xc82 PushI
	SetProperty(var_170_string, var_171_int); // 0xc83 ObjFunc
	GetItemID(var_168_int); // 0xc85 ObjFunc
	var_172_int = 0; // 0xc87 PushI
	var_173_int = 1; // 0xc88 PushI
	AddItem(var_169_bool, var_167_object, var_172_int, var_173_int); // 0xc89 Func
	return 6; // 0xc8b Return
}


func_3709(var_23_bool)
{
	var_23_bool = 1; // 0xe7e MovB
	return 0; // 0xe7f Return
}


func_3712(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0xe81 PushV
	var_103_object = var_101_object; // 0xe82 Mov
	func_2494(var_102_bool, var_103_object); // 0xe83 NEW_2
	if(var_102_bool == 0) goto Label_3729; // 0xe85 JumpB
	var_106_object = Obj(); // 0xe86 PushV
	func_2992(var_106_object); // 0xe87 NEW_2
	var_109_float = -0.1; // 0xe89 PushF
	var_110_bool = 1; // 0xe8a PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0xe8b Func
	var_111_bool = 0; // 0xe8d PushV
	var_111_bool = 1; // 0xe8e MovB
	func_3237(); // 0xe8f NEW_2
	
Label_3729:
	func_3213(); // 0xe92 NEW_2
	var_177_bool = GlobalVars[0]; // 0xe94 PushGE
	var_177_bool = 1; // 0xe95 MovB
	GlobalVars[0] = var_177_bool; // 0xe96 PopGE
	var_178_int = 50; // 0xe97 PushI
	var_179_int = 40; // 0xe98 PushI
	SetRTEnvelope(var_178_int, var_179_int); // 0xe99 Func
	return 0; // 0xe9b Return
}


func_2693(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0xa85 PushV
	var_43_bool = 0; // 0xa86 PushV
	var_43_bool = 0; // 0xa87 MovB
	var_44_bool = 0; // 0xa88 PushV
	var_44_bool = 0; // 0xa89 MovB
	var_45_object = var_22_object; // 0xa8a Push
	if(var_45_object == 0) goto Label_2704; // 0xa8b JumpB
	var_46_int = 4; // 0xa8c PushI
	var_47_bool = var_23_int != var_46_int; // 0xa8d Neq
	if(var_47_bool == 0) goto Label_2704; // 0xa8e JumpB
	var_44_bool = 1; // 0xa8f MovB
	
Label_2704:
	if(var_44_bool == 0) goto Label_2709; // 0xa90 JumpB
	var_48_int = 5; // 0xa91 PushI
	var_49_bool = var_23_int != var_48_int; // 0xa92 Neq
	if(var_49_bool == 0) goto Label_2709; // 0xa93 JumpB
	var_43_bool = 1; // 0xa94 MovB
	
Label_2709:
	if(var_43_bool == 0) goto Label_2756; // 0xa95 JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa96 PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xa97 PushV
	var_53_object = var_22_object; // 0xa98 Mov
	func_2479(var_53_object); // 0xa99 NEW_2
	var_51_cvector = var_52_cvector; // 0xa9a Mov
	func_2998(var_50_cvector, var_51_cvector); // 0xa9c NEW_2
	var_34_cvector = var_50_cvector; // 0xa9d Mov
	CreateVectorVector(var_35_object); // 0xa9f Func
	var_36_int = 1; // 0xaa1 MovI
	
Label_2722:
	var_63_string = "hit"; // 0xaa2 PushS
	var_64_int = var_63_string + var_36_int; // 0xaa3 Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xaa4 Func
	var_65_bool = var_37_bool == 0; // 0xaa6 Not
	if(var_65_bool == 0) goto Label_2729; // 0xaa7 JumpB
	goto Label_2738; // 0xaa8 Jump
	
Label_2738:
	size(var_40_int); // 0xab2 ObjFunc
	var_66_int = var_40_int; // 0xab4 Push
	if(var_66_int == 0) goto Label_2755; // 0xab5 JumpB
	irand(var_41_int, var_40_int); // 0xab6 Func
	get(var_42_cvector, var_41_int); // 0xab8 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xaba PushV
	var_67_object = var_22_object; // 0xabb Mov
	var_68_int = var_23_int; // 0xabc Mov
	var_69_float = var_24_float; // 0xabd Mov
	var_70_cvector = var_42_cvector; // 0xabe Mov
	var_71_cvector = -var_34_cvector; // 0xabf Neg2
	func_2761(var_69_float, var_70_cvector, var_71_cvector); // 0xac0 NEW_2
	return 18; // 0xac2 Return
	
Label_2755:
	var_35_object = 0; // 0xac3 SetNull
	
Label_2756:
	var_112_object = Obj(); // 0xac4 PushV
	var_112_object = var_22_object; // 0xac5 Mov
	func_2649(var_112_object); // 0xac6 NEW_2
	return 18; // 0xac8 Return
	
Label_2729:
	var_113_int = var_39_cvector | var_34_cvector; // 0xaa9 Or
	var_114_float = 0.70711; // 0xaaa PushF
	var_115_bool = var_113_int >= var_114_float; // 0xaab GE
	if(var_115_bool == 0) goto Label_2735; // 0xaac JumpB
	add(var_38_cvector); // 0xaad ObjFunc
	
Label_2735:
	var_116_int = 1; // 0xaaf PushI
	var_36_int = var_36_int + var_116_int; // 0xab0 Add2
	goto Label_2722; // 0xab1 Jump
}


func_2182(var_0_object)
{
	var_145_object = Obj(); // 0x886 PushV
	var_145_object = var_0_object; // 0x887 MovT
	func_3091(var_145_object); // 0x888 NEW_2
	return 0; // 0x88a Return
}


func_647()
{
	var_101_bool = 0; // 0x287 PushV
	func_2786(var_101_bool); // 0x288 NEW_2
	var_104_bool = var_101_bool == 0; // 0x28a Not
	if(var_104_bool == 0) goto Label_655; // 0x28b JumpB
	func_3624(); // 0x28d NEW_2
	
Label_655:
	return 0; // 0x28f Return
}


func_2187(var_482_int)
{
	var_482_int = 0; // 0x88b MovI
	return 0; // 0x88c Return
}


func_1165()
{
	var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_float = 0; var_138_bool = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_float = 0; var_145_bool = 0; // 0x48d PushV
	WaitForAnimEnd(); // 0x48e Func
	var_146_bool = 0; // 0x490 PushV
	func_2786(var_146_bool); // 0x491 NEW_2
	var_147_bool = var_146_bool == 0; // 0x493 Not
	if(var_147_bool == 0) goto Label_1174; // 0x494 JumpB
	return 14; // 0x495 Return
	
Label_1174:
	var_148_int = 0; // 0x496 PushV
	func_3550(var_148_int); // 0x497 NEW_2
	var_139_int = var_148_int; // 0x498 Mov
	var_140_int = 0; // 0x49a MovI
	
Label_1179:
	var_161_bool = 0; // 0x49b PushV
	var_161_bool = 0; // 0x49c MovB
	var_162_int = 5; // 0x49d PushI
	var_163_bool = var_140_int < var_162_int; // 0x49e LT
	if(var_163_bool == 0) goto Label_1189; // 0x49f JumpB
	var_164_bool = 0; // 0x4a0 PushV
	func_2786(var_164_bool); // 0x4a1 NEW_2
	if(var_164_bool == 0) goto Label_1189; // 0x4a3 JumpB
	var_161_bool = 1; // 0x4a4 MovB
	
Label_1189:
	if(var_161_bool == 0) goto Label_1241; // 0x4a5 JumpB
	var_165_int = 3; // 0x4a6 PushI
	irand(var_141_int, var_165_int); // 0x4a7 Func
	var_166_int = 0; // 0x4a9 PushI
	var_167_bool = var_141_int == var_166_int; // 0x4aa Eq
	if(var_167_bool == 0) goto Label_1213; // 0x4ab JumpB
	var_168_int = var_139_int; // 0x4ac Push
	if(var_168_int == 0) goto Label_1212; // 0x4ad JumpB
	irand(var_142_int, var_139_int); // 0x4ae Func
	var_169_string = "all"; // 0x4b0 PushS
	var_170_string = ""; var_171_int = 0; // 0x4b1 PushV
	var_171_int = var_142_int; // 0x4b2 Mov
	func_3543(var_170_string, var_171_int); // 0x4b3 NEW_2
	PlayAnimation(var_169_string, var_170_string); // 0x4b5 Func
	WaitForAnimEnd(var_143_bool); // 0x4b7 Func
	var_172_bool = var_143_bool == 0; // 0x4b9 Not
	if(var_172_bool == 0) goto Label_1212; // 0x4ba JumpB
	goto Label_1241; // 0x4bb Jump
	
Label_1241:
	ResetAAS(); // 0x4d9 Func
	return 14; // 0x4db Return
	
Label_1212:
	goto Label_1230; // 0x4bc Jump
	
Label_1230:
	var_173_bool = 0; // 0x4ce PushV
	func_1244(var_173_bool); // 0x4cf NEW_2
	var_174_bool = var_173_bool == 0; // 0x4d1 Not
	if(var_174_bool == 0) goto Label_1236; // 0x4d2 JumpB
	goto Label_1241; // 0x4d3 Jump
	
Label_1236:
	ResetAAS(); // 0x4d4 Func
	var_175_int = 1; // 0x4d6 PushI
	var_140_int = var_140_int + var_175_int; // 0x4d7 Add2
	goto Label_1179; // 0x4d8 Jump
	
Label_1213:
	var_176_int = 1; // 0x4bd PushI
	var_177_bool = var_141_int == var_176_int; // 0x4be Eq
	if(var_177_bool == 0) goto Label_1227; // 0x4bf JumpB
	var_178_int = 4; // 0x4c0 PushI
	rand(var_144_float, var_178_int); // 0x4c1 Func
	var_179_int = 1; // 0x4c3 PushI
	var_180_int = var_144_float + var_179_int; // 0x4c4 Add
	Sleep(var_180_int, var_145_bool); // 0x4c5 Func
	var_181_bool = var_145_bool == 0; // 0x4c7 Not
	if(var_181_bool == 0) goto Label_1226; // 0x4c8 JumpB
	goto Label_1241; // 0x4c9 Jump
	
Label_1226:
	goto Label_1230; // 0x4ca Jump
	
Label_1227:
	var_182_int = var_140_int; // 0x4cb Push
	if(var_182_int == 0) goto Label_1230; // 0x4cc JumpB
	goto Label_1241; // 0x4cd Jump
}


func_2189()
{
	var_278_string = ""; // 0x88d PushV
	var_278_string = "attack_stay"; // 0x88e MovS
	func_2951(var_278_string); // 0x88f NEW_2
	return 0; // 0x891 Return
}


func_3213()
{
	var_157_int = 0; // 0xc8d PushV
	func_3146(var_157_int); // 0xc8e NEW_2
	var_161_int = 1; // 0xc90 PushI
	var_162_bool = var_157_int != var_161_int; // 0xc91 Neq
	if(var_162_bool == 0) goto Label_3220; // 0xc92 JumpB
	return 0; // 0xc93 Return
	
Label_3220:
	var_163_string = ""; // 0xc94 PushV
	var_163_string = "liver"; // 0xc95 MovS
	func_3196(var_163_string); // 0xc96 NEW_2
	var_174_string = ""; // 0xc98 PushV
	var_174_string = "kidney"; // 0xc99 MovS
	func_3196(var_174_string); // 0xc9a NEW_2
	var_175_string = ""; // 0xc9c PushV
	var_175_string = "heart"; // 0xc9d MovS
	func_3196(var_175_string); // 0xc9e NEW_2
	var_176_string = ""; // 0xca0 PushV
	var_176_string = "blood"; // 0xca1 MovS
	func_3196(var_176_string); // 0xca2 NEW_2
	return 0; // 0xca4 Return
}


func_2194()
{
	return 0; // 0x893 Return
}


func_2196(var_507_bool)
{
	var_507_bool = 1; // 0x894 MovB
	return 0; // 0x895 Return
}


func_2198(var_403_int)
{
	var_403_int = 1; // 0x896 MovI
	return 0; // 0x897 Return
}


func_2200(var_398_float)
{
	var_398_float = 0.5; // 0x898 MovF
	return 0; // 0x899 Return
}


func_3740(var_42_object)
{
	var_43_int = 0; var_44_object = Obj(); // 0xe9d PushV
	var_44_object = var_42_object; // 0xe9e Mov
	TaskCall(0); // 0xe9f TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0xea0 NEW_2
	TaskReturn(); // 0xea1 TaskReturn
	return 0; // 0xea3 Return
}


func_2209(var_2_object, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_bool = 0; var_164_bool = 0; // 0x8a1 PushV
	var_165_object = Obj(); // 0x8a2 PushV
	var_165_object = var_153_object; // 0x8a3 Mov
	func_3091(var_165_object); // 0x8a4 NEW_2
	var_166_int = 1; // 0x8a6 PushI
	var_167_int = 5; // 0x8a7 PushI
	SetTimer(var_166_int, var_167_int); // 0x8a8 Func
	CanSee(var_163_bool, var_153_object); // 0x8aa Func
	var_168_bool = var_163_bool; // 0x8ac Push
	if(var_168_bool == 0) goto Label_2228; // 0x8ad JumpB
	var_2_object = 1; // 0x8ae TMovB
	var_169_object = Obj(); // 0x8af PushV
	var_169_object = var_153_object; // 0x8b0 Mov
	func_2907(var_169_object); // 0x8b1 NEW_2
	goto Label_2229; // 0x8b3 Jump
	
Label_2229:
	var_176_bool = 0; var_177_object = Obj(); // 0x8b5 PushV
	var_177_object = var_153_object; // 0x8b6 Mov
	func_2494(var_176_bool, var_177_object); // 0x8b7 NEW_2
	if(var_176_bool == 0) goto Label_2239; // 0x8b9 JumpB
	var_180_object = Obj(); // 0x8ba PushV
	func_2992(var_180_object); // 0x8bb NEW_2
	SendPlayerEnemy(var_153_object, var_180_object); // 0x8bd Func
	
Label_2239:
	var_181_bool = 0; var_182_object = Obj(); var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_bool = 0; // 0x8bf PushV
	var_182_object = var_153_object; // 0x8c0 Mov
	var_183_float = var_154_float; // 0x8c1 Mov
	var_184_float = var_155_float; // 0x8c2 Mov
	var_185_bool = var_156_bool; // 0x8c3 Mov
	var_186_bool = var_157_bool; // 0x8c4 Mov
	func_2314(var_163_bool, var_164_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool); // 0x8c5 NEW_2
	var_164_bool = var_181_bool; // 0x8c6 Mov
	var_232_object = var_2_object; // 0x8c8 PushT
	if(var_232_object == 0) goto Label_2253; // 0x8c9 JumpB
	var_233_string = "head"; // 0x8ca PushS
	UnlookAsync(var_233_string); // 0x8cb Func
	
Label_2253:
	var_234_int = 1; // 0x8cd PushI
	KillTimer(var_234_int); // 0x8ce Func
	var_152_bool = var_164_bool; // 0x8d0 Mov
	return 4; // 0x8d1 Return
	
Label_2228:
	var_2_object = 0; // 0x8b4 TMovB
}


func_162(var_2_object, var_133_string)
{
	var_134_bool = 0; // 0xa3 PushV
	func_3679(var_134_bool); // 0xa4 NEW_2
	var_135_bool = var_134_bool == 0; // 0xa6 Not
	if(var_135_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_136_bool = var_133_string == var_2_object; // 0xa9 Eq
	if(var_136_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_137_string = ""; var_138_bool = 0; // 0xac PushV
	var_137_string = var_133_string; // 0xad Mov
	var_139_string = ""; // 0xae PushS
	var_140_bool = var_133_string == var_139_string; // 0xaf Eq
	if(var_140_bool == 0) goto Label_179; // 0xb0 JumpB
	var_138_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_2892(var_137_string, var_138_bool); // 0xb4 NEW_2
	var_2_object = var_133_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_138_bool = 1; // 0xb3 MovB
}


func_3237()
{
	var_112_bool = 0; var_113_bool = 0; // 0xca5 PushV
	var_114_int = 0; // 0xca6 PushI
	ClearSubContainer(var_114_int); // 0xca7 Func
	var_115_int = 0; var_116_int = 0; // 0xca9 PushV
	var_115_int = 0; // 0xcaa MovI
	var_117_int = 10; // 0xcab PushI
	var_118_int = 0; // 0xcac PushV
	func_3082(var_118_int); // 0xcad NEW_2
	var_124_int = 10; // 0xcaf PushI
	var_125_float = var_118_int * var_124_int; // 0xcb0 Mult
	var_116_int = var_117_int + var_125_float; // 0xcb1 Add2
	func_3165(var_115_int, var_116_int); // 0xcb2 NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0xcb4 PushV
	var_143_string = "hook"; // 0xcb5 MovS
	var_144_int = 1; // 0xcb6 MovI
	var_145_int = 4; // 0xcb7 MovI
	func_2925(var_143_string, var_144_int, var_145_int); // 0xcb8 NEW_2
	var_154_string = ""; var_155_int = 0; var_156_int = 0; // 0xcba PushV
	var_154_string = "watch"; // 0xcbb MovS
	var_155_int = 1; // 0xcbc MovI
	var_156_int = 10; // 0xcbd MovI
	func_2925(var_154_string, var_155_int, var_156_int); // 0xcbe NEW_2
	return 2; // 0xcc0 Return
}


func_3265(var_20_bool)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0xcc1 PushV
	var_27_int = 0; // 0xcc2 PushI
	ClearSubContainer(var_27_int); // 0xcc3 Func
	var_28_int = 0; // 0xcc5 PushV
	func_3082(var_28_int); // 0xcc6 NEW_2
	var_26_int = var_28_int; // 0xcc7 Mov
	var_34_bool = var_20_bool; // 0xcc9 Push
	if(var_34_bool == 0) goto Label_3319; // 0xcca JumpB
	var_35_string = ""; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0xccb PushV
	var_35_string = "alpha_pills"; // 0xccc MovS
	var_36_int = 1; // 0xccd MovI
	var_37_int = 2; // 0xcce MovI
	var_38_int = 4; // 0xccf MovI
	func_2936(var_35_string, var_36_int, var_37_int, var_38_int); // 0xcd0 NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0xcd2 PushV
	var_51_string = "meradorm"; // 0xcd3 MovS
	var_52_int = 2; // 0xcd4 MovI
	var_53_int = 3; // 0xcd5 MovI
	var_54_int = 3; // 0xcd6 MovI
	func_2936(var_51_string, var_52_int, var_53_int, var_54_int); // 0xcd7 NEW_2
	var_55_int = 3; // 0xcd9 PushI
	var_56_bool = var_26_int >= var_55_int; // 0xcda GE
	if(var_56_bool == 0) goto Label_3298; // 0xcdb JumpB
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0xcdc PushV
	var_57_string = "beta_pills"; // 0xcdd MovS
	var_58_int = 1; // 0xcde MovI
	var_59_int = 4; // 0xcdf MovI
	func_2925(var_57_string, var_58_int, var_59_int); // 0xce0 NEW_2
	
Label_3298:
	var_66_int = 8; // 0xce2 PushI
	var_67_bool = var_26_int >= var_66_int; // 0xce3 GE
	if(var_67_bool == 0) goto Label_3309; // 0xce4 JumpB
	var_68_string = ""; var_69_int = 0; var_70_int = 0; var_71_int = 0; // 0xce5 PushV
	var_68_string = "monomicin"; // 0xce6 MovS
	var_69_int = 1; // 0xce7 MovI
	var_70_int = 2; // 0xce8 MovI
	var_71_int = 2; // 0xce9 MovI
	func_2936(var_68_string, var_69_int, var_70_int, var_71_int); // 0xcea NEW_2
	goto Label_3318; // 0xcec Jump
	
Label_3318:
	goto Label_3364; // 0xcf6 Jump
	
Label_3364:
	return 6; // 0xd24 Return
	
Label_3309:
	var_72_int = 4; // 0xced PushI
	var_73_bool = var_26_int >= var_72_int; // 0xcee GE
	if(var_73_bool == 0) goto Label_3318; // 0xcef JumpB
	var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0xcf0 PushV
	var_74_string = "monomicin"; // 0xcf1 MovS
	var_75_int = 1; // 0xcf2 MovI
	var_76_int = 2; // 0xcf3 MovI
	func_2925(var_74_string, var_75_int, var_76_int); // 0xcf4 NEW_2
	
Label_3319:
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0xcf7 PushV
	var_77_string = "lockpick"; // 0xcf8 MovS
	var_78_int = 1; // 0xcf9 MovI
	var_79_int = 4; // 0xcfa MovI
	func_2925(var_77_string, var_78_int, var_79_int); // 0xcfb NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0xcfd PushV
	var_80_string = "rifle_ammo"; // 0xcfe MovS
	var_81_int = 1; // 0xcff MovI
	var_82_int = 2; // 0xd00 MovI
	func_2925(var_80_string, var_81_int, var_82_int); // 0xd01 NEW_2
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0xd03 PushV
	var_83_string = "revolver_ammo"; // 0xd04 MovS
	var_84_int = 1; // 0xd05 MovI
	var_85_int = 2; // 0xd06 MovI
	func_2925(var_83_string, var_84_int, var_85_int); // 0xd07 NEW_2
	var_86_string = ""; var_87_int = 0; var_88_int = 0; var_89_int = 0; // 0xd09 PushV
	var_86_string = "samopal_ammo"; // 0xd0a MovS
	var_87_int = 1; // 0xd0b MovI
	var_88_int = 2; // 0xd0c MovI
	var_89_int = 2; // 0xd0d MovI
	func_2936(var_86_string, var_87_int, var_88_int, var_89_int); // 0xd0e NEW_2
	var_90_int = 8; // 0xd10 PushI
	var_91_bool = var_26_int >= var_90_int; // 0xd11 GE
	if(var_91_bool == 0) goto Label_3355; // 0xd12 JumpB
	var_92_string = ""; var_93_int = 0; var_94_int = 0; var_95_int = 0; // 0xd13 PushV
	var_92_string = "monomicin"; // 0xd14 MovS
	var_93_int = 1; // 0xd15 MovI
	var_94_int = 2; // 0xd16 MovI
	var_95_int = 2; // 0xd17 MovI
	func_2936(var_92_string, var_93_int, var_94_int, var_95_int); // 0xd18 NEW_2
	goto Label_3364; // 0xd1a Jump
	
Label_3355:
	var_96_int = 4; // 0xd1b PushI
	var_97_bool = var_26_int >= var_96_int; // 0xd1c GE
	if(var_97_bool == 0) goto Label_3364; // 0xd1d JumpB
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0xd1e PushV
	var_98_string = "monomicin"; // 0xd1f MovS
	var_99_int = 1; // 0xd20 MovI
	var_100_int = 2; // 0xd21 MovI
	func_2925(var_98_string, var_99_int, var_100_int); // 0xd22 NEW_2
}


func_2761(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xac9 PushV
	GetScene(var_31_object); // 0xaca Func
	var_33_string = "scripted"; // 0xacc PushS
	var_34_string = "blood_dir.xml"; // 0xacd PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xace Func
	var_35_object = Obj(); // 0xad0 PushV
	var_35_object = var_24_object; // 0xad1 Mov
	func_2649(var_35_object); // 0xad2 NEW_2
	return 4; // 0xad4 Return
}


func_2775()
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0xad7 PushV
	GetPosition(var_98_cvector); // 0xad8 ObjFunc
	GetPosition(var_99_cvector); // 0xada Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0xadc Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0xadd PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0xade PushE
	RotateAsync(var_101_float, var_102_float); // 0xadf Func
	return 6; // 0xae1 Return
}


func_1244(var_173_bool)
{
	var_173_bool = 1; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_1246()
{
	StopAnimation(); // 0x4de Func
	StopGroup0(); // 0x4e0 Func
	return 0; // 0x4e2 Return
}


func_2272(var_2_object)
{
	var_19_int = 1; // 0x8e0 PushI
	KillTimer(var_19_int); // 0x8e1 Func
	var_20_object = var_2_object; // 0x8e3 PushT
	if(var_20_object == 0) goto Label_2281; // 0x8e4 JumpB
	var_2_object = 0; // 0x8e5 TMovB
	var_21_string = "head"; // 0x8e6 PushS
	UnlookAsync(var_21_string); // 0x8e7 Func
	
Label_2281:
	func_2438(var_18_object); // 0x8ea NEW_2
	return 0; // 0x8ec Return
}


func_2786(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0; // 0xae2 PushV
	IsLoaded(var_103_bool); // 0xae3 Func
	var_101_bool = var_103_bool; // 0xae5 Mov
	return 2; // 0xae6 Return
}


func_1251(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0x4e3 PushV
	var_0_object = var_61_object; // 0x4e4 TMov
	func_1302(var_68_bool); // 0x4e6 NEW_2
	GetDirection(var_66_cvector); // 0x4e8 Func
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0x4ea PushV
	var_77_object = var_0_object; // 0x4eb MovT
	func_2479(var_77_object); // 0x4ec NEW_2
	var_67_cvector = var_76_cvector; // 0x4ed Mov
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x4ef PushV
	var_83_cvector = var_66_cvector; // 0x4f0 Mov
	var_84_cvector = var_67_cvector; // 0x4f1 Mov
	func_3050(var_82_float, var_83_cvector, var_84_cvector); // 0x4f2 NEW_2
	var_106_int = 0; // 0x4f4 PushI
	var_107_bool = var_82_float < var_106_int; // 0x4f5 LT
	if(var_107_bool == 0) goto Label_1277; // 0x4f6 JumpB
	var_108_object = Obj(); // 0x4f7 PushV
	var_108_object = var_0_object; // 0x4f8 MovT
	func_2775(); // 0x4f9 NEW_2
	var_68_bool = 1; // 0x4fb MovB
	goto Label_1280; // 0x4fc Jump
	
Label_1280:
	var_117_bool = var_68_bool; // 0x500 Push
	if(var_117_bool == 0) goto Label_1296; // 0x501 JumpB
	var_118_object = Obj(); // 0x502 PushV
	var_118_object = var_0_object; // 0x503 MovT
	func_2775(); // 0x504 NEW_2
	var_119_int = 111; // 0x506 PushI
	var_120_float = 0.5; // 0x507 PushF
	SetTimer(var_119_int, var_120_float); // 0x508 Func
	var_121_float = 5.0; // 0x50a PushF
	Sleep(var_121_float); // 0x50b Func
	var_122_int = 111; // 0x50d PushI
	KillTimer(var_122_int); // 0x50e Func
	
Label_1296:
	StopAsync(); // 0x510 Func
	var_123_string = "head"; // 0x512 PushS
	UnlookAsync(var_123_string); // 0x513 Func
	return 6; // 0x515 Return
	
Label_1277:
	var_124_float = 1.5; // 0x4fd PushF
	Sleep(var_124_float, var_68_bool); // 0x4fe Func
}


func_2791(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0xae7 PushV
	GetPosition(var_67_cvector); // 0xae8 ObjFunc
	GetEyesHeight(var_66_float); // 0xaea ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0xaec PushE
	var_75_float = var_75_float + var_66_float; // 0xaed Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0xaee PopE
	GetPosition(var_68_cvector); // 0xaef Func
	GetEyesHeight(var_66_float); // 0xaf1 Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0xaf3 PushE
	var_76_float = var_76_float + var_66_float; // 0xaf4 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0xaf5 PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0xaf6 Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0xaf7 PushE
	var_77_float = 0; // 0xaf8 MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0xaf9 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0xafa Or
	var_79_float = sqrt(var_78_int); // 0xafb Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0xafc Div2
	var_70_cvector = -var_69_cvector; // 0xafd Neg2
	var_80_float = var_69_cvector * var_56_float; // 0xafe Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0xaff PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0xb00 PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0xb01 Xor2
	func_2998(var_81_cvector, var_82_cvector); // 0xb02 NEW_2
	var_89_int = 25; // 0xb04 PushI
	var_90_float = var_81_cvector * var_89_int; // 0xb05 Mult
	var_91_int = var_80_float + var_90_float; // 0xb06 Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0xb07 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0xb08 Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0xb09 Add2
	IsOverrideActive(var_73_bool); // 0xb0a Func
	var_93_bool = var_73_bool; // 0xb0c Push
	if(var_93_bool == 0) goto Label_2832; // 0xb0d JumpB
	var_54_bool = 0; // 0xb0e MovB
	return 18; // 0xb0f Return
	
Label_2832:
	StopWorld(); // 0xb10 Func
	CameraTransit(var_72_cvector, var_70_cvector); // 0xb12 Func
	var_94_float = GetByIndex(var_71_cvector, 0); // 0xb14 PushE
	var_95_float = GetByIndex(var_71_cvector, 2); // 0xb15 PushE
	Rotate(var_94_float, var_95_float); // 0xb16 Func
	var_96_bool = 0; // 0xb18 PushV
	func_3679(var_96_bool); // 0xb19 NEW_2
	if(var_96_bool == 0) goto Label_2845; // 0xb1b JumpB
	goto Label_2853; // 0xb1c Jump
	
Label_2853:
	CameraWaitForPlayFinish(); // 0xb25 Func
	ResumeWorld(); // 0xb27 Func
	var_54_bool = 1; // 0xb29 MovB
	return 18; // 0xb2a Return
	
Label_2845:
	var_97_string = "head"; // 0xb1d PushS
	HasAnimationTrack(var_74_bool, var_97_string); // 0xb1e Func
	var_98_bool = var_74_bool; // 0xb20 Push
	if(var_98_bool == 0) goto Label_2853; // 0xb21 JumpB
	var_99_string = "head"; // 0xb22 PushS
	LookAsyncCamera(var_99_string); // 0xb23 Func
}


func_1769(var_1_object, var_2_object, var_4_bool)
{
	var_106_bool = 0; var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_bool = 0; var_111_cvector = CVector(0,0,0); // 0x6e9 PushV
	var_1_object = 0; // 0x6ea TMovI
	
Label_1771:
	var_112_string = "all"; // 0x6eb PushS
	var_113_string = "attack_begin"; // 0x6ec PushS
	var_114_int = 1; // 0x6ed PushI
	var_115_int = var_1_object + var_114_int; // 0x6ee Add
	var_116_int = var_113_string + var_115_int; // 0x6ef Add
	HasAnimation(var_109_bool, var_112_string, var_116_int); // 0x6f0 Func
	var_117_bool = var_109_bool == 0; // 0x6f2 Not
	if(var_117_bool == 0) goto Label_1781; // 0x6f3 JumpB
	goto Label_1784; // 0x6f4 Jump
	
Label_1784:
	var_2_object = 0; // 0x6f8 TMovI
	
Label_1785:
	var_118_string = "attack"; // 0x6f9 PushS
	var_119_int = 1; // 0x6fa PushI
	var_120_int = var_2_object + var_119_int; // 0x6fb Add
	var_121_int = var_118_string + var_120_int; // 0x6fc Add
	IsExisting3DSound(var_110_bool, var_121_int); // 0x6fd Func
	var_122_bool = var_110_bool == 0; // 0x6ff Not
	if(var_122_bool == 0) goto Label_1794; // 0x700 JumpB
	goto Label_1797; // 0x701 Jump
	
Label_1797:
	var_123_string = "all"; // 0x705 PushS
	var_124_string = "bjump"; // 0x706 PushS
	GetAnimationOffset(var_111_cvector, var_123_string, var_124_string); // 0x707 Func
	var_125_float = GetByIndex(var_111_cvector, 2); // 0x709 PushE
	var_4_bool = -var_125_float; // 0x70a Neg2
	return 6; // 0x70b Return
	
Label_1794:
	var_126_int = 1; // 0x702 PushI
	var_2_object = var_2_object + var_126_int; // 0x703 Add2
	goto Label_1785; // 0x704 Jump
	
Label_1781:
	var_127_int = 1; // 0x6f5 PushI
	var_1_object = var_1_object + var_127_int; // 0x6f6 Add2
	goto Label_1771; // 0x6f7 Jump
}


func_2314(var_0_object, var_1_object, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool)
{
	var_187_bool = 0; var_188_bool = 0; var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_bool = 0; var_196_bool = 0; var_197_object = Obj(); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_object = Obj(); // 0x90a PushV
	var_0_object = 0; // 0x90b TMovB
	var_1_object = var_182_object; // 0x90c TMov
	var_196_bool = var_186_bool; // 0x90d Mov
	
Label_2318:
	var_203_bool = 0; var_204_object = Obj(); // 0x90e PushV
	var_204_object = var_182_object; // 0x90f Mov
	func_2454(var_203_bool, var_204_object); // 0x910 NEW_2
	var_207_bool = var_203_bool == 0; // 0x912 Not
	if(var_207_bool == 0) goto Label_2326; // 0x913 JumpB
	var_181_bool = 0; // 0x914 MovB
	return 16; // 0x915 Return
	
Label_2326:
	GetPosition(var_198_cvector); // 0x916 ObjFunc
	GetPosition(var_199_cvector); // 0x918 Func
	var_200_cvector = var_198_cvector - var_199_cvector; // 0x91a Sub2
	var_201_float = var_200_cvector | var_200_cvector; // 0x91b Or2
	var_208_bool = 0; // 0x91c PushV
	var_208_bool = 0; // 0x91d MovB
	var_209_int = 0; // 0x91e PushI
	var_210_bool = var_184_float > var_209_int; // 0x91f GT
	if(var_210_bool == 0) goto Label_2341; // 0x920 JumpB
	var_211_float = var_184_float * var_184_float; // 0x921 Mult
	var_212_bool = var_201_float > var_211_float; // 0x922 GT
	if(var_212_bool == 0) goto Label_2341; // 0x923 JumpB
	var_208_bool = 1; // 0x924 MovB
	
Label_2341:
	if(var_208_bool == 0) goto Label_2346; // 0x925 JumpB
	Stop(); // 0x926 Func
	var_181_bool = 0; // 0x928 MovB
	return 16; // 0x929 Return
	
Label_2346:
	var_213_float = var_183_float * var_183_float; // 0x92a Mult
	var_214_bool = var_201_float > var_213_float; // 0x92b GT
	if(var_214_bool == 0) goto Label_2408; // 0x92c JumpB
	GetPFPosition(var_198_cvector); // 0x92d ObjFunc
	FindPathTo(var_202_object, var_198_cvector); // 0x92f Func
	var_215_bool = var_202_object != 0; // 0x931 NullNeq
	if(var_215_bool == 0) goto Label_2357; // 0x932 JumpB
	var_197_object = var_202_object; // 0x933 Mov
	var_202_object = 0; // 0x934 SetNull
	
Label_2357:
	var_216_bool = var_197_object != 0; // 0x935 NullNeq
	if(var_216_bool == 0) goto Label_2390; // 0x936 JumpB
	var_217_bool = var_196_bool; // 0x937 Push
	if(var_217_bool == 0) goto Label_2367; // 0x938 JumpB
	var_196_bool = 0; // 0x939 MovB
	RotatePath(var_197_object, var_195_bool); // 0x93a Func
	var_218_bool = var_195_bool == 0; // 0x93c Not
	if(var_218_bool == 0) goto Label_2367; // 0x93d JumpB
	goto Label_2414; // 0x93e Jump
	
Label_2414:
	var_181_bool = !var_0_object; // 0x96e Not2
	return 16; // 0x96f Return
	
Label_2367:
	var_219_int = 0; // 0x93f PushI
	var_220_float = 0.3; // 0x940 PushF
	SetTimer(var_219_int, var_220_float); // 0x941 Func
	var_221_string = ""; // 0x943 PushV
	func_2461(var_221_string); // 0x944 NEW_2
	var_222_string = ""; // 0x946 PushV
	func_2463(var_222_string); // 0x947 NEW_2
	FollowPath(var_197_object, var_185_bool, var_195_bool, var_221_string, var_222_string); // 0x949 Func
	var_223_bool = var_195_bool == 0; // 0x94b Not
	if(var_223_bool == 0) goto Label_2388; // 0x94c JumpB
	var_224_object = var_0_object; // 0x94d PushT
	if(var_224_object == 0) goto Label_2386; // 0x94e JumpB
	var_197_object = 0; // 0x94f SetNull
	goto Label_2414; // 0x950 Jump
	
Label_2386:
	goto Label_2413; // 0x952 Jump
	
Label_2413:
	goto Label_2318; // 0x96d Jump
	
Label_2388:
	var_197_object = 0; // 0x954 SetNull
	goto Label_2406; // 0x955 Jump
	
Label_2406:
	var_202_object = 0; // 0x966 SetNull
	goto Label_2412; // 0x967 Jump
	
Label_2412:
	var_197_object = 0; // 0x96c SetNull
	
Label_2390:
	var_225_int = 0; // 0x956 PushI
	KillTimer(var_225_int); // 0x957 Func
	var_226_float = 0.5; // 0x959 PushF
	Sleep(var_226_float, var_195_bool); // 0x95a Func
	var_227_bool = var_195_bool == 0; // 0x95c Not
	if(var_227_bool == 0) goto Label_2402; // 0x95d JumpB
	var_228_object = var_0_object; // 0x95e PushT
	if(var_228_object == 0) goto Label_2402; // 0x95f JumpB
	var_197_object = 0; // 0x960 SetNull
	goto Label_2414; // 0x961 Jump
	
Label_2402:
	var_229_int = 0; // 0x962 PushI
	var_230_float = 0.3; // 0x963 PushF
	SetTimer(var_229_int, var_230_float); // 0x964 Func
	
Label_2408:
	var_231_int = 0; // 0x968 PushI
	KillTimer(var_231_int); // 0x969 Func
	goto Label_2414; // 0x96b Jump
}


func_1804(var_0_object, var_407_float, var_408_int)
{
	var_409_object = Obj(); var_410_float = 0; var_411_float = 0; var_412_object = Obj(); var_413_float = 0; var_414_float = 0; // 0x70c PushV
	var_415_float = 0.9; // 0x70d PushF
	var_416_float = var_407_float * var_415_float; // 0x70e Mult
	GetVictim(var_416_float, var_412_object); // 0x70f Func
	ReportAttack(var_0_object); // 0x711 Func
	var_417_bool = var_412_object == var_0_object; // 0x713 Eq
	if(var_417_bool == 0) goto Label_1841; // 0x714 JumpB
	var_418_float = 0; var_419_object = Obj(); var_420_int = 0; // 0x715 PushV
	var_419_object = var_412_object; // 0x716 Mov
	var_420_int = var_408_int; // 0x717 Mov
	func_1534(var_420_int); // 0x718 NEW_2
	var_413_float = var_418_float; // 0x719 Mov
	var_421_float = 0; var_422_object = Obj(); var_423_float = 0; var_424_int = 0; // 0x71b PushV
	var_422_object = var_412_object; // 0x71c Mov
	var_423_float = var_413_float; // 0x71d Mov
	var_425_int = 0; var_426_object = Obj(); var_427_int = 0; // 0x71e PushV
	var_426_object = var_412_object; // 0x71f Mov
	var_427_int = var_408_int; // 0x720 Mov
	func_1537(var_427_int); // 0x721 NEW_2
	var_424_int = var_425_int; // 0x722 Mov
	func_2511(var_421_float, var_422_object, var_423_float, var_424_int); // 0x724 NEW_2
	var_414_float = var_421_float; // 0x725 Mov
	var_482_int = 0; // 0x727 PushV
	func_2187(var_482_int); // 0x728 NEW_2
	ReportHit(var_0_object, var_482_int, var_414_float, var_413_float); // 0x72a Func
	var_483_object = Obj(); var_484_float = 0; // 0x72c PushV
	var_483_object = var_412_object; // 0x72d Mov
	var_484_float = var_414_float; // 0x72e Mov
	func_2194(); // 0x72f NEW_2
	
Label_1841:
	return 6; // 0x731 Return
}


func_1302(var_0_object)
{
	var_69_object = Obj(); // 0x516 PushV
	var_69_object = var_0_object; // 0x517 MovT
	func_2907(var_69_object); // 0x518 NEW_2
	return 0; // 0x51a Return
}


func_3365(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0; // 0xd25 PushV
	GetInvItemByName(var_139_int, var_137_string); // 0xd26 Func
	var_136_int = var_139_int; // 0xd28 Mov
	return 2; // 0xd29 Return
}


func_3370(var_19_object)
{
	var_20_object = Obj(); // 0xd2b PushV
	var_20_object = var_19_object; // 0xd2c Mov
	TaskCall(2); // 0xd2d TaskCall
	func_476(var_20_object); // 0xd2e NEW_2
	TaskReturn(); // 0xd2f TaskReturn
	return 0; // 0xd31 Return
}


func_2859()
{
	var_185_bool = 0; var_186_bool = 0; // 0xb2b PushV
	CameraSwitchToNormal(); // 0xb2c Func
	var_187_bool = 0; // 0xb2e PushV
	func_3679(var_187_bool); // 0xb2f NEW_2
	if(var_187_bool == 0) goto Label_2867; // 0xb31 JumpB
	goto Label_2875; // 0xb32 Jump
	
Label_2875:
	return 2; // 0xb3b Return
	
Label_2867:
	var_188_string = "head"; // 0xb33 PushS
	HasAnimationTrack(var_186_bool, var_188_string); // 0xb34 Func
	var_189_bool = var_186_bool; // 0xb36 Push
	if(var_189_bool == 0) goto Label_2875; // 0xb37 JumpB
	var_190_string = "head"; // 0xb38 PushS
	UnlookAsync(var_190_string); // 0xb39 Func
}


func_1843(var_0_object, var_370_bool, var_371_float)
{
	var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = ""; var_376_int = 0; var_377_bool = 0; var_378_int = 0; var_379_string = ""; // 0x733 PushV
	func_2182(var_379_string); // 0x735 NEW_2
	irand(var_376_int, var_379_string); // 0x737 Func
	var_380_int = 1; // 0x739 PushI
	var_376_int = var_376_int + var_380_int; // 0x73a Add2
	Face(var_0_object); // 0x73b Func
	var_381_bool = 1; // 0x73d PushB
	SetAttackState(var_381_bool); // 0x73e Func
	func_3100(); // 0x741 NEW_2
	var_386_string = "all"; // 0x743 PushS
	var_387_string = "attack_begin"; // 0x744 PushS
	var_388_int = var_387_string + var_376_int; // 0x745 Add
	PlayAnimation(var_386_string, var_388_int); // 0x746 Func
	WaitForAnimEnd(); // 0x748 Func
	func_2150(var_378_int, var_379_string); // 0x74b NEW_2
	var_404_bool = 0; var_405_object = Obj(); // 0x74d PushV
	var_405_object = var_0_object; // 0x74e MovT
	func_2625(var_404_bool, var_405_object); // 0x74f NEW_2
	var_406_bool = var_404_bool == 0; // 0x751 Not
	if(var_406_bool == 0) goto Label_1879; // 0x752 JumpB
	StopAsync(); // 0x753 Func
	var_370_bool = 0; // 0x755 MovB
	return 8; // 0x756 Return
	
Label_1879:
	var_407_float = 0; var_408_int = 0; // 0x757 PushV
	var_407_float = var_371_float; // 0x758 Mov
	var_408_int = var_376_int; // 0x759 Mov
	func_1804(var_379_string, var_407_float, var_408_int); // 0x75a NEW_2
	var_485_string = "all"; // 0x75c PushS
	var_486_string = "attack_middle"; // 0x75d PushS
	var_487_int = var_486_string + var_376_int; // 0x75e Add
	HasAnimation(var_377_bool, var_485_string, var_487_int); // 0x75f Func
	var_488_bool = var_377_bool; // 0x761 Push
	if(var_488_bool == 0) goto Label_1960; // 0x762 JumpB
	func_3100(); // 0x764 NEW_2
	var_489_string = "all"; // 0x766 PushS
	var_490_string = "attack_middle"; // 0x767 PushS
	var_491_int = var_490_string + var_376_int; // 0x768 Add
	PlayAnimation(var_489_string, var_491_int); // 0x769 Func
	WaitForAnimEnd(); // 0x76b Func
	func_2182(var_379_string); // 0x76e NEW_2
	var_492_bool = 0; var_493_object = Obj(); // 0x770 PushV
	var_493_object = var_0_object; // 0x771 MovT
	func_2625(var_492_bool, var_493_object); // 0x772 NEW_2
	var_494_bool = var_492_bool == 0; // 0x774 Not
	if(var_494_bool == 0) goto Label_1914; // 0x775 JumpB
	StopAsync(); // 0x776 Func
	var_370_bool = 0; // 0x778 MovB
	return 8; // 0x779 Return
	
Label_1914:
	var_495_float = 0; var_496_int = 0; // 0x77a PushV
	var_495_float = var_371_float; // 0x77b Mov
	var_496_int = var_376_int; // 0x77c Mov
	func_1804(var_379_string, var_495_float, var_496_int); // 0x77d NEW_2
	var_378_int = 1; // 0x77f MovI
	
Label_1920:
	var_497_string = "attack_middle"; // 0x780 PushS
	var_498_int = var_497_string + var_376_int; // 0x781 Add
	var_499_string = "_"; // 0x782 PushS
	var_500_int = var_498_int + var_499_string; // 0x783 Add
	var_379_string = var_500_int + var_378_int; // 0x784 Add2
	var_501_string = "all"; // 0x785 PushS
	HasAnimation(var_377_bool, var_501_string, var_379_string); // 0x786 Func
	var_502_bool = var_377_bool == 0; // 0x788 Not
	if(var_502_bool == 0) goto Label_1931; // 0x789 JumpB
	goto Label_1960; // 0x78a Jump
	
Label_1960:
	var_503_bool = 0; // 0x7a8 PushB
	SetAttackState(var_503_bool); // 0x7a9 Func
	var_504_string = "all"; // 0x7ab PushS
	var_505_string = "attack_end"; // 0x7ac PushS
	var_506_int = var_505_string + var_376_int; // 0x7ad Add
	PlayAnimation(var_504_string, var_506_int); // 0x7ae Func
	var_507_bool = 0; // 0x7b0 PushV
	func_2196(var_507_bool); // 0x7b1 NEW_2
	if(var_507_bool == 0) goto Label_1978; // 0x7b3 JumpB
	var_508_bool = 0; var_509_float = 0; // 0x7b4 PushV
	var_509_float = 0.75; // 0x7b5 MovF
	func_1980(var_508_bool, var_509_float); // 0x7b6 NEW_2
	StopAsync(); // 0x7b8 Func
	
Label_1978:
	var_370_bool = 1; // 0x7ba MovB
	return 8; // 0x7bb Return
	
Label_1931:
	func_3100(); // 0x78c NEW_2
	var_517_string = "all"; // 0x78e PushS
	PlayAnimation(var_517_string, var_379_string); // 0x78f Func
	WaitForAnimEnd(); // 0x791 Func
	func_2182(var_379_string); // 0x794 NEW_2
	var_518_bool = 0; var_519_object = Obj(); // 0x796 PushV
	var_519_object = var_0_object; // 0x797 MovT
	func_2625(var_518_bool, var_519_object); // 0x798 NEW_2
	var_520_bool = var_518_bool == 0; // 0x79a Not
	if(var_520_bool == 0) goto Label_1952; // 0x79b JumpB
	StopAsync(); // 0x79c Func
	var_370_bool = 0; // 0x79e MovB
	return 8; // 0x79f Return
	
Label_1952:
	var_521_float = 0; var_522_int = 0; // 0x7a0 PushV
	var_521_float = var_371_float; // 0x7a1 Mov
	var_522_int = var_376_int; // 0x7a2 Mov
	func_1804(var_379_string, var_521_float, var_522_int); // 0x7a3 NEW_2
	var_523_int = 1; // 0x7a5 PushI
	var_378_int = var_378_int + var_523_int; // 0x7a6 Add2
	goto Label_1920; // 0x7a7 Jump
}


func_2876(var_159_string)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0; // 0xb3c PushV
	lshHasAnimation(var_163_bool, var_159_string); // 0xb3d Func
	var_166_bool = var_163_bool; // 0xb3f Push
	if(var_166_bool == 0) goto Label_2887; // 0xb40 JumpB
	lshGetAnimTimes(var_159_string, var_164_float, var_165_float); // 0xb41 Func
	var_167_bool = 0; // 0xb43 PushB
	lshPlayAnimation(var_164_float, var_165_float, var_167_bool); // 0xb44 Func
	goto Label_2891; // 0xb46 Jump
	
Label_2891:
	return 6; // 0xb4b Return
	
Label_2887:
	var_168_string = "Can't find lsh animation : "; // 0xb47 PushS
	var_169_int = var_168_string + var_159_string; // 0xb48 Add
	Trace(var_169_int); // 0xb49 Func
}


func_843(var_2_object)
{
	var_19_int = 110; // 0x34b PushI
	KillTimer(var_19_int); // 0x34c Func
	var_2_object = 0; // 0x34e TMovB
	func_979(var_17_object, var_18_bool); // 0x350 NEW_2
	return 0; // 0x352 Return
}


func_2892(var_137_string, var_138_bool)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0xb4c PushV
	lshHasAnimation(var_144_bool, var_137_string); // 0xb4d Func
	var_147_bool = var_144_bool; // 0xb4f Push
	if(var_147_bool == 0) goto Label_2902; // 0xb50 JumpB
	lshGetAnimTimes(var_137_string, var_145_float, var_146_float); // 0xb51 Func
	lshPlayAnimation(var_145_float, var_146_float, var_138_bool); // 0xb53 Func
	goto Label_2906; // 0xb55 Jump
	
Label_2906:
	return 6; // 0xb5a Return
	
Label_2902:
	var_148_string = "Can't find lsh animation : "; // 0xb56 PushS
	var_149_int = var_148_string + var_137_string; // 0xb57 Add
	Trace(var_149_int); // 0xb58 Func
}


func_851(var_2_object)
{
	var_68_int = 110; // 0x353 PushI
	KillTimer(var_68_int); // 0x354 Func
	var_2_object = 0; // 0x356 TMovB
	func_986(var_22_bool, var_23_int); // 0x358 NEW_2
	return 0; // 0x35a Return
}


func_3415(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0xd58 PushS
	var_26_bool = var_24_string == var_25_string; // 0xd59 Eq
	if(var_26_bool == 0) goto Label_3426; // 0xd5a JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd5b PushV
	var_28_object = var_23_object; // 0xd5c Mov
	func_3630(var_28_object); // 0xd5d NEW_2
	var_22_bool = var_27_bool; // 0xd5e Mov
	return 0; // 0xd60 Return
	
Label_3426:
	var_29_string = "player_shot"; // 0xd62 PushS
	var_30_bool = var_24_string == var_29_string; // 0xd63 Eq
	if(var_30_bool == 0) goto Label_3436; // 0xd64 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xd65 PushV
	var_32_object = var_23_object; // 0xd66 Mov
	func_3635(var_31_bool, var_32_object); // 0xd67 NEW_2
	var_22_bool = var_31_bool; // 0xd68 Mov
	return 0; // 0xd6a Return
	
Label_3436:
	var_46_string = "battle"; // 0xd6c PushS
	var_47_bool = var_24_string == var_46_string; // 0xd6d Eq
	if(var_47_bool == 0) goto Label_3445; // 0xd6e JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0xd6f PushV
	var_49_object = var_23_object; // 0xd70 Mov
	func_3656(var_49_object); // 0xd71 NEW_2
	var_22_bool = var_48_bool; // 0xd72 Mov
	return 0; // 0xd74 Return
	
Label_3445:
	var_22_bool = 0; // 0xd75 MovB
	return 0; // 0xd76 Return
}


func_2907(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xb5b PushV
	GetEyesHeight(var_25_float); // 0xb5c ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xb5e MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xb5f PushE
	var_27_float = var_25_float; // 0xb60 Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xb61 PopE
	var_28_string = "head"; // 0xb62 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xb63 Func
	return 4; // 0xb65 Return
}


func_868(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x364 PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x365 PushV
	var_25_object = var_19_object; // 0x366 Mov
	func_2625(var_24_bool, var_25_object); // 0x367 NEW_2
	var_58_bool = var_24_bool == 0; // 0x369 Not
	if(var_58_bool == 0) goto Label_876; // 0x36a JumpB
	return 4; // 0x36b Return
	
Label_876:
	var_59_object = var_2_object; // 0x36c PushT
	if(var_59_object == 0) goto Label_879; // 0x36d JumpB
	return 4; // 0x36e Return
	
Label_879:
	IsPlayerActor(var_19_object, var_22_bool); // 0x36f Func
	var_60_bool = var_22_bool == 0; // 0x371 Not
	if(var_60_bool == 0) goto Label_884; // 0x372 JumpB
	return 4; // 0x373 Return
	
Label_884:
	var_61_int = 0; var_62_object = Obj(); // 0x374 PushV
	var_62_object = var_19_object; // 0x375 Mov
	func_3567(var_62_object); // 0x376 NEW_2
	var_23_int = var_61_int; // 0x377 Mov
	var_64_int = 0; // 0x379 PushI
	var_65_bool = var_23_int > var_64_int; // 0x37a GT
	if(var_65_bool == 0) goto Label_907; // 0x37b JumpB
	var_66_int = 1; // 0x37c PushI
	var_67_bool = var_23_int > var_66_int; // 0x37d GT
	if(var_67_bool == 0) goto Label_898; // 0x37e JumpB
	func_851(var_23_int); // 0x380 NEW_2
	
Label_898:
	var_69_object = Obj(); // 0x382 PushV
	var_69_object = var_19_object; // 0x383 Mov
	func_3576(var_69_object); // 0x384 NEW_2
	var_2_object = 1; // 0x386 TMovB
	var_134_int = 110; // 0x387 PushI
	var_135_float = 10.0; // 0x388 PushF
	SetTimer(var_134_int, var_135_float); // 0x389 Func
	
Label_907:
	return 4; // 0x38b Return
}


func_2918()
{
	var_21_bool = 0; // 0xb66 PushV
	func_3679(var_21_bool); // 0xb67 NEW_2
	if(var_21_bool == 0) goto Label_2924; // 0xb69 JumpB
	lshStopSpeech(); // 0xb6a Func
	
Label_2924:
	return 0; // 0xb6c Return
}


func_2925(var_57_string, var_58_int, var_59_int)
{
	var_60_bool = 0; var_61_bool = 0; // 0xb6d PushV
	var_62_bool = 0; var_63_int = 0; var_64_int = 0; // 0xb6e PushV
	var_63_int = var_58_int; // 0xb6f Mov
	var_64_int = var_59_int; // 0xb70 Mov
	func_3026(var_62_bool, var_63_int, var_64_int); // 0xb71 NEW_2
	if(var_62_bool == 0) goto Label_2935; // 0xb73 JumpB
	var_65_int = 0; // 0xb74 PushI
	AddItem(var_61_bool, var_57_string, var_65_int); // 0xb75 Func
	
Label_2935:
	return 2; // 0xb77 Return
}


func_2416(var_0_object, var_1_object, var_26_int)
{
	var_27_int = 0; // 0x971 PushI
	var_28_bool = var_26_int != var_27_int; // 0x972 Neq
	if(var_28_bool == 0) goto Label_2421; // 0x973 JumpB
	return 0; // 0x974 Return
	
Label_2421:
	var_29_bool = 0; var_30_object = Obj(); // 0x975 PushV
	var_30_object = var_1_object; // 0x976 MovT
	func_2454(var_29_bool, var_30_object); // 0x977 NEW_2
	var_65_bool = var_29_bool == 0; // 0x979 Not
	if(var_65_bool == 0) goto Label_2428; // 0x97a JumpB
	var_0_object = 1; // 0x97b TMovB
	
Label_2428:
	var_66_int = 0; // 0x97c PushI
	KillTimer(var_66_int); // 0x97d Func
	Stop(); // 0x97f Func
	return 0; // 0x981 Return
}


func_3447(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0xd78 PushS
	var_55_bool = var_53_string == var_54_string; // 0xd79 Eq
	if(var_55_bool == 0) goto Label_3456; // 0xd7a JumpB
	var_56_object = Obj(); // 0xd7b PushV
	var_56_object = var_52_object; // 0xd7c Mov
	func_3633(); // 0xd7d NEW_2
	goto Label_3471; // 0xd7f Jump
	
Label_3471:
	return 0; // 0xd8f Return
	
Label_3456:
	var_57_string = "player_shot"; // 0xd80 PushS
	var_58_bool = var_53_string == var_57_string; // 0xd81 Eq
	if(var_58_bool == 0) goto Label_3464; // 0xd82 JumpB
	var_59_object = Obj(); // 0xd83 PushV
	var_59_object = var_52_object; // 0xd84 Mov
	func_3650(var_59_object); // 0xd85 NEW_2
	goto Label_3471; // 0xd87 Jump
	
Label_3464:
	var_125_string = "battle"; // 0xd88 PushS
	var_126_bool = var_53_string == var_125_string; // 0xd89 Eq
	if(var_126_bool == 0) goto Label_3471; // 0xd8a JumpB
	var_127_object = Obj(); // 0xd8b PushV
	var_127_object = var_52_object; // 0xd8c Mov
	func_3659(); // 0xd8d NEW_2
}


func_2936(var_35_string, var_36_int, var_37_int, var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0xb78 PushV
	var_43_bool = 0; var_44_int = 0; var_45_int = 0; // 0xb79 PushV
	var_44_int = var_36_int; // 0xb7a Mov
	var_45_int = var_37_int; // 0xb7b Mov
	func_3026(var_43_bool, var_44_int, var_45_int); // 0xb7c NEW_2
	if(var_43_bool == 0) goto Label_2950; // 0xb7e JumpB
	irand(var_41_int, var_38_int); // 0xb7f Func
	var_48_int = 0; // 0xb81 PushI
	var_49_int = 1; // 0xb82 PushI
	var_50_int = var_41_int + var_49_int; // 0xb83 Add
	AddItem(var_42_bool, var_35_string, var_48_int, var_50_int); // 0xb84 Func
	
Label_2950:
	return 4; // 0xb86 Return
}


func_2438(var_0_object)
{
	var_0_object = 1; // 0x986 TMovB
	var_22_int = 0; // 0x987 PushI
	KillTimer(var_22_int); // 0x988 Func
	Stop(); // 0x98a Func
	return 0; // 0x98c Return
}


func_2951(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xb87 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0xb88 Func
	var_61_bool = var_53_bool == 0; // 0xb8a Not
	if(var_61_bool == 0) goto Label_2976; // 0xb8b JumpB
	var_54_int = 0; // 0xb8c MovI
	
Label_2957:
	var_62_int = 1; // 0xb8d PushI
	var_63_int = var_54_int + var_62_int; // 0xb8e Add
	var_64_int = var_44_string + var_63_int; // 0xb8f Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0xb90 Func
	var_65_bool = var_55_bool == 0; // 0xb92 Not
	if(var_65_bool == 0) goto Label_2965; // 0xb93 JumpB
	goto Label_2968; // 0xb94 Jump
	
Label_2968:
	var_66_bool = var_54_int == 0; // 0xb98 Not
	if(var_66_bool == 0) goto Label_2971; // 0xb99 JumpB
	return 16; // 0xb9a Return
	
Label_2971:
	irand(var_56_int, var_54_int); // 0xb9b Func
	var_67_int = 1; // 0xb9d PushI
	var_68_int = var_56_int + var_67_int; // 0xb9e Add
	var_44_string = var_44_string + var_68_int; // 0xb9f Add2
	
Label_2976:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0xba0 Func
	var_69_bool = var_57_bool; // 0xba2 Push
	if(var_69_bool == 0) goto Label_2991; // 0xba3 JumpB
	GetEyesHeight(var_58_float); // 0xba4 Func
	GetDirection(var_59_cvector); // 0xba6 Func
	var_70_int = 50; // 0xba8 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0xba9 Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0xbaa PushE
	var_71_float = var_71_float + var_58_float; // 0xbab Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0xbac PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0xbad Func
	
Label_2991:
	return 16; // 0xbaf Return
	
Label_2965:
	var_72_int = 1; // 0xb95 PushI
	var_54_int = var_54_int + var_72_int; // 0xb96 Add2
	goto Label_2957; // 0xb97 Jump
}


func_908(var_0_object, var_1_object)
{
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; var_109_object = Obj(); var_110_bool = 0; var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_object = Obj(); var_116_bool = 0; // 0x38c PushV
	var_0_object = 0; // 0x38d TMovB
	var_1_object = 0; // 0x38e TMovB
	var_117_float = 0.5; // 0x38f PushF
	rand(var_111_float, var_117_float); // 0x390 Func
	Sleep(var_111_float); // 0x392 Func
	
Label_916:
	var_118_bool = var_0_object == 0; // 0x394 Not
	if(var_118_bool == 0) goto Label_966; // 0x395 JumpB
	var_119_bool = var_1_object == 0; // 0x396 Not
	if(var_119_bool == 0) goto Label_935; // 0x397 JumpB
	
Label_920:
	GetPosition(var_113_cvector); // 0x398 Func
	var_120_float = 0; // 0x39a PushV
	func_967(var_120_float); // 0x39b NEW_2
	GetRandomPFPointInCircle(var_112_cvector, var_113_cvector, var_120_float, var_114_bool); // 0x39d Func
	var_123_bool = var_114_bool; // 0x39f Push
	if(var_123_bool == 0) goto Label_930; // 0x3a0 JumpB
	goto Label_934; // 0x3a1 Jump
	
Label_934:
	goto Label_936; // 0x3a6 Jump
	
Label_936:
	var_124_object = Obj(); var_125_cvector = CVector(0,0,0); // 0x3a8 PushV
	var_125_cvector = var_112_cvector; // 0x3a9 Mov
	func_995(var_124_object, var_125_cvector); // 0x3aa NEW_2
	var_115_object = var_124_object; // 0x3ab Mov
	var_128_bool = var_115_object != 0; // 0x3ad NullNeq
	if(var_128_bool == 0) goto Label_961; // 0x3ae JumpB
	RotatePath(var_115_object, var_116_bool); // 0x3af Func
	var_129_bool = var_116_bool; // 0x3b1 Push
	if(var_129_bool == 0) goto Label_960; // 0x3b2 JumpB
	var_130_bool = 0; // 0x3b3 PushV
	func_993(var_130_bool); // 0x3b4 NEW_2
	FollowPath(var_115_object, var_130_bool, var_116_bool); // 0x3b6 Func
	var_115_object = 0; // 0x3b8 SetNull
	var_131_bool = var_116_bool; // 0x3b9 Push
	if(var_131_bool == 0) goto Label_960; // 0x3ba JumpB
	TaskCall(4); // 0x3bc TaskCall
	func_1165(); // 0x3bd NEW_2
	TaskReturn(); // 0x3be TaskReturn
	
Label_960:
	goto Label_964; // 0x3c0 Jump
	
Label_964:
	var_115_object = 0; // 0x3c4 SetNull
	goto Label_916; // 0x3c5 Jump
	
Label_961:
	var_183_int = 1; // 0x3c1 PushI
	Sleep(var_183_int); // 0x3c2 Func
	
Label_930:
	var_184_int = 1; // 0x3a2 PushI
	Sleep(var_184_int); // 0x3a3 Func
	goto Label_920; // 0x3a5 Jump
	
Label_935:
	var_1_object = 0; // 0x3a7 TMovB
	
Label_966:
	return 12; // 0x3c6 Return
}


func_3472(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xd90 PushV
	var_23_bool = 0; // 0xd91 PushV
	var_23_bool = 0; // 0xd92 MovB
	var_24_bool = 0; var_25_object = Obj(); // 0xd93 PushV
	var_25_object = var_20_object; // 0xd94 Mov
	func_3630(var_25_object); // 0xd95 NEW_2
	if(var_24_bool == 0) goto Label_3486; // 0xd97 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0xd98 PushV
	var_27_object = var_20_object; // 0xd99 Mov
	func_2494(var_26_bool, var_27_object); // 0xd9a NEW_2
	if(var_26_bool == 0) goto Label_3486; // 0xd9c JumpB
	var_23_bool = 1; // 0xd9d MovB
	
Label_3486:
	if(var_23_bool == 0) goto Label_3493; // 0xd9e JumpB
	IsWeaponHolstered(var_22_bool); // 0xd9f ObjFunc
	var_30_bool = var_22_bool == 0; // 0xda1 Not
	if(var_30_bool == 0) goto Label_3493; // 0xda2 JumpB
	var_19_bool = 1; // 0xda3 MovB
	return 2; // 0xda4 Return
	
Label_3493:
	var_19_bool = 0; // 0xda5 MovB
	return 2; // 0xda6 Return
}


func_2454(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x997 PushV
	var_32_object = var_30_object; // 0x998 Mov
	func_2625(var_31_bool, var_32_object); // 0x999 NEW_2
	var_29_bool = var_31_bool; // 0x99a Mov
	return 0; // 0x99c Return
}


func_2461(var_221_string)
{
	var_221_string = "walk"; // 0x99d MovS
	return 0; // 0x99e Return
}


func_2463(var_222_string)
{
	var_222_string = "run"; // 0x99f MovS
	return 0; // 0x9a0 Return
}


func_2465(var_449_string, var_450_int)
{
	var_451_int = 2; // 0x9a2 PushI
	var_452_bool = var_450_int == var_451_int; // 0x9a3 Eq
	if(var_452_bool == 0) goto Label_2472; // 0x9a4 JumpB
	var_449_string = "fire"; // 0x9a5 MovS
	return 0; // 0x9a6 Return
	
Label_2472:
	var_453_int = 1; // 0x9a8 PushI
	var_454_bool = var_450_int == var_453_int; // 0x9a9 Eq
	if(var_454_bool == 0) goto Label_2477; // 0x9aa JumpB
	var_449_string = "bullet"; // 0x9ab MovS
	return 0; // 0x9ac Return
	
Label_2477:
	var_449_string = "phys"; // 0x9ad MovS
	return 0; // 0x9ae Return
}


func_3495(var_33_object)
{
	var_34_object = Obj(); // 0xda8 PushV
	var_34_object = var_33_object; // 0xda9 Mov
	func_3633(); // 0xdaa NEW_2
	return 0; // 0xdac Return
}


func_1450()
{
	StopGroup0(); // 0x5aa Func
	StopAsync(); // 0x5ac Func
	var_31_string = "head"; // 0x5ae PushS
	UnlookAsync(var_31_string); // 0x5af Func
	var_32_int = 111; // 0x5b1 PushI
	KillTimer(var_32_int); // 0x5b2 Func
	return 0; // 0x5b4 Return
}


func_3501(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0xdae PushV
	var_23_object = var_21_object; // 0xdaf Mov
	func_2494(var_22_bool, var_23_object); // 0xdb0 NEW_2
	if(var_22_bool == 0) goto Label_3513; // 0xdb2 JumpB
	var_26_object = Obj(); // 0xdb3 PushV
	func_2992(var_26_object); // 0xdb4 NEW_2
	var_29_float = -0.05; // 0xdb6 PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0xdb7 Func
	
Label_3513:
	return 0; // 0xdb9 Return
}


func_2479(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x9af PushV
	GetPosition(var_56_cvector); // 0x9b0 Func
	GetPosition(var_57_cvector); // 0x9b2 ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0x9b4 Sub2
	return 4; // 0x9b5 Return
}


func_2992(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0xbb0 PushV
	self(var_108_object); // 0xbb1 Func
	var_106_object = var_108_object; // 0xbb3 Mov
	return 2; // 0xbb4 Return
}


func_2998(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0xbb6 PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0xbb7 Or
	var_59_float = sqrt(var_60_int); // 0xbb8 Sqrt2
	var_61_float = 0.0; // 0xbb9 PushF
	var_62_bool = var_59_float < var_61_float; // 0xbba LT
	if(var_62_bool == 0) goto Label_3006; // 0xbbb JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0xbbc MovV
	return 2; // 0xbbd Return
	
Label_3006:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0xbbe Div2
	return 2; // 0xbbf Return
}


func_2486(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x9b6 PushV
	GetPosition(var_41_cvector); // 0x9b7 Func
	GetPosition(var_42_cvector); // 0x9b9 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x9bb Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x9bc Or2
	return 6; // 0x9bd Return
}


func_3514(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xdba PushV
	var_23_string = "heal"; // 0xdbb PushS
	var_24_bool = var_20_string == var_23_string; // 0xdbc Eq
	if(var_24_bool == 0) goto Label_3528; // 0xdbd JumpB
	var_25_string = "player"; // 0xdbe PushS
	FindActor(var_22_object, var_25_string); // 0xdbf Func
	var_26_bool = 0; var_27_object = Obj(); // 0xdc1 PushV
	var_27_object = var_22_object; // 0xdc2 Mov
	func_3666(var_27_object); // 0xdc3 NEW_2
	var_19_bool = var_26_bool; // 0xdc4 Mov
	return 2; // 0xdc6 Return
	
Label_3528:
	var_19_bool = 0; // 0xdc8 MovB
	return 2; // 0xdc9 Return
}


func_1980(var_508_bool, var_509_float)
{
	var_510_float = 0; var_511_bool = 0; var_512_float = 0; var_513_bool = 0; // 0x7bc PushV
	rand(var_512_float); // 0x7bd Func
	var_514_bool = var_512_float < var_509_float; // 0x7bf LT
	if(var_514_bool == 0) goto Label_2000; // 0x7c0 JumpB
	
Label_1985:
	IsAnimationPlaying(var_513_bool); // 0x7c1 Func
	var_515_bool = var_513_bool == 0; // 0x7c3 Not
	if(var_515_bool == 0) goto Label_1990; // 0x7c4 JumpB
	goto Label_1999; // 0x7c5 Jump
	
Label_1999:
	goto Label_2005; // 0x7cf Jump
	
Label_2005:
	var_508_bool = 0; // 0x7d5 MovB
	return 4; // 0x7d6 Return
	
Label_1990:
	var_516_bool = 0; // 0x7c6 PushV
	func_2078(var_516_bool); // 0x7c7 NEW_2
	if(var_516_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_508_bool = 1; // 0x7ca MovB
	return 4; // 0x7cb Return
	
Label_1996:
	sync(); // 0x7cc Func
	goto Label_1985; // 0x7ce Jump
	
Label_2000:
	WaitForAnimEnd(); // 0x7d0 Func
	func_2182(var_513_bool); // 0x7d3 NEW_2
}


func_2494(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0x9be PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0x9bf Func
	var_102_bool = var_105_bool; // 0x9c1 Mov
	return 2; // 0x9c2 Return
}


func_3008(var_459_float, var_460_float, var_461_float)
{
	var_464_bool = var_460_float < var_461_float; // 0xbc1 LT
	if(var_464_bool == 0) goto Label_3013; // 0xbc2 JumpB
	var_459_float = var_460_float; // 0xbc3 Mov
	goto Label_3014; // 0xbc4 Jump
	
Label_3014:
	return 0; // 0xbc6 Return
	
Label_3013:
	var_459_float = var_461_float; // 0xbc5 Mov
}


func_2499(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0x9c3 PushV
	var_58_string = "HasProperty"; // 0x9c4 PushS
	var_59_int = 2; // 0x9c5 PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0x9c6 FuncExist
	var_61_bool = var_60_bool == 0; // 0x9c7 Not
	if(var_61_bool == 0) goto Label_2507; // 0x9c8 JumpB
	var_53_bool = 0; // 0x9c9 MovB
	return 2; // 0x9ca Return
	
Label_2507:
	HasProperty(var_55_string, var_57_bool); // 0x9cb ObjFunc
	var_53_bool = var_57_bool; // 0x9cd Mov
	return 2; // 0x9ce Return
}


func_967(var_120_float)
{
	var_121_float = 0; var_122_float = 0; // 0x3c7 PushV
	GetCameraFarDistance(var_122_float); // 0x3c8 Func
	var_120_float = var_122_float; // 0x3ca Mov
	return 2; // 0x3cb Return
}


func_3015(var_469_float, var_470_float, var_471_float, var_472_float)
{
	var_473_bool = var_470_float < var_471_float; // 0xbc8 LT
	if(var_473_bool == 0) goto Label_3020; // 0xbc9 JumpB
	var_469_float = var_471_float; // 0xbca Mov
	return 0; // 0xbcb Return
	
Label_3020:
	var_474_bool = var_470_float > var_472_float; // 0xbcc GT
	if(var_474_bool == 0) goto Label_3024; // 0xbcd JumpB
	var_469_float = var_472_float; // 0xbce Mov
	return 0; // 0xbcf Return
	
Label_3024:
	var_469_float = var_470_float; // 0xbd0 Mov
	return 0; // 0xbd1 Return
}


func_3530(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xdca PushV
	var_33_string = "heal"; // 0xdcb PushS
	var_34_bool = var_30_string == var_33_string; // 0xdcc Eq
	if(var_34_bool == 0) goto Label_3542; // 0xdcd JumpB
	var_35_string = "player"; // 0xdce PushS
	FindActor(var_32_object, var_35_string); // 0xdcf Func
	var_36_object = Obj(); // 0xdd1 PushV
	var_36_object = var_32_object; // 0xdd2 Mov
	func_3669(); // 0xdd3 NEW_2
	var_32_object = 0; // 0xdd5 SetNull
	
Label_3542:
	return 2; // 0xdd6 Return
}


func_2511(var_421_float, var_422_object, var_423_float, var_424_int)
{
	var_428_int = 0; var_429_string = ""; var_430_int = 0; var_431_float = 0; var_432_float = 0; var_433_float = 0; var_434_int = 0; var_435_string = ""; var_436_int = 0; var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x9cf PushV
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x9d0 PushV
	var_441_object = var_422_object; // 0x9d1 Mov
	var_442_string = "health"; // 0x9d2 MovS
	func_2499(var_440_bool, var_441_object, var_442_string); // 0x9d3 NEW_2
	var_443_bool = var_440_bool == 0; // 0x9d5 Not
	if(var_443_bool == 0) goto Label_2521; // 0x9d6 JumpB
	var_421_float = 0.0; // 0x9d7 MovF
	return 12; // 0x9d8 Return
	
Label_2521:
	var_444_bool = 0; var_445_object = Obj(); var_446_string = ""; // 0x9d9 PushV
	var_445_object = var_422_object; // 0x9da Mov
	var_446_string = "armor"; // 0x9db MovS
	func_2499(var_444_bool, var_445_object, var_446_string); // 0x9dc NEW_2
	var_447_bool = var_444_bool == 0; // 0x9de Not
	if(var_447_bool == 0) goto Label_2530; // 0x9df JumpB
	var_434_int = 0; // 0x9e0 MovI
	goto Label_2533; // 0x9e1 Jump
	
Label_2533:
	var_448_string = "armor_"; // 0x9e5 PushS
	var_449_string = ""; var_450_int = 0; // 0x9e6 PushV
	var_450_int = var_424_int; // 0x9e7 Mov
	func_2465(var_449_string, var_450_int); // 0x9e8 NEW_2
	var_435_string = var_448_string + var_449_string; // 0x9ea Add2
	var_455_bool = 0; var_456_object = Obj(); var_457_string = ""; // 0x9eb PushV
	var_456_object = var_422_object; // 0x9ec Mov
	var_457_string = var_435_string; // 0x9ed Mov
	func_2499(var_455_bool, var_456_object, var_457_string); // 0x9ee NEW_2
	var_458_bool = var_455_bool == 0; // 0x9f0 Not
	if(var_458_bool == 0) goto Label_2548; // 0x9f1 JumpB
	var_436_int = 0; // 0x9f2 MovI
	goto Label_2550; // 0x9f3 Jump
	
Label_2550:
	var_459_float = 0; var_460_float = 0; var_461_float = 0; // 0x9f6 PushV
	var_462_int = var_434_int + var_436_int; // 0x9f7 Add
	var_463_float = 100.0; // 0x9f8 PushF
	var_460_float = var_462_int / var_462_int; // 0x9f9 Div2
	var_461_float = 1; // 0x9fa MovI
	func_3008(var_459_float, var_460_float, var_461_float); // 0x9fb NEW_2
	var_437_float = var_459_float; // 0x9fc Mov
	var_465_string = "health"; // 0x9fe PushS
	GetProperty(var_465_string, var_438_float); // 0x9ff ObjFunc
	var_466_int = 1; // 0xa01 PushI
	var_467_int = var_466_int - var_437_float; // 0xa02 Sub
	var_439_float = var_423_float * var_467_int; // 0xa03 Mult2
	var_468_string = "health"; // 0xa04 PushS
	var_469_float = 0; var_470_float = 0; var_471_float = 0; var_472_float = 0; // 0xa05 PushV
	var_470_float = var_438_float - var_439_float; // 0xa06 Sub2
	var_471_float = 0; // 0xa07 MovI
	var_472_float = 1; // 0xa08 MovI
	func_3015(var_469_float, var_470_float, var_471_float, var_472_float); // 0xa09 NEW_2
	SetProperty(var_468_string, var_469_float); // 0xa0b ObjFunc
	var_475_bool = 0; var_476_object = Obj(); // 0xa0d PushV
	var_476_object = var_422_object; // 0xa0e Mov
	func_2494(var_475_bool, var_476_object); // 0xa0f NEW_2
	if(var_475_bool == 0) goto Label_2582; // 0xa11 JumpB
	var_477_float = 0; // 0xa12 PushV
	var_477_float = -var_439_float; // 0xa13 Neg2
	func_3072(var_477_float); // 0xa14 NEW_2
	
Label_2582:
	var_421_float = var_439_float; // 0xa16 Mov
	return 12; // 0xa17 Return
	
Label_2548:
	GetProperty(var_435_string, var_436_int); // 0x9f4 ObjFunc
	
Label_2530:
	var_481_string = "armor"; // 0x9e2 PushS
	GetProperty(var_481_string, var_434_int); // 0x9e3 ObjFunc
}


func_3026(var_43_bool, var_44_int, var_45_int)
{
	var_46_int = 0; var_47_int = 0; // 0xbd2 PushV
	irand(var_47_int, var_45_int); // 0xbd3 Func
	var_43_bool = var_47_int < var_44_int; // 0xbd5 LT2
	return 2; // 0xbd6 Return
}


func_979(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x3d3 TMovB
	var_1_object = 0; // 0x3d4 TMovB
	Stop(); // 0x3d5 Func
	StopGroup0(); // 0x3d7 Func
	return 0; // 0x3d9 Return
}


func_3543(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = ""; // 0xdd7 PushV
	var_157_string = "idle"; // 0xdd8 MovS
	var_158_int = var_155_int; // 0xdd9 Push
	if(var_158_int == 0) goto Label_3548; // 0xdda JumpB
	var_157_string = var_157_string + var_155_int; // 0xddb Add2
	
Label_3548:
	var_154_string = var_157_string; // 0xddc Mov
	return 2; // 0xddd Return
}


func_2007(var_0_object, var_309_bool, var_310_float)
{
	var_311_bool = 0; var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_bool = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_float = 0; // 0x7d7 PushV
	
Label_2008:
	IsAnimationPlaying(var_316_bool); // 0x7d8 Func
	var_321_bool = var_316_bool == 0; // 0x7da Not
	if(var_321_bool == 0) goto Label_2013; // 0x7db JumpB
	goto Label_2045; // 0x7dc Jump
	
Label_2045:
	func_2182(var_320_float); // 0x7fe NEW_2
	var_309_bool = 0; // 0x800 MovB
	return 10; // 0x801 Return
	
Label_2013:
	var_322_bool = 0; // 0x7dd PushV
	func_2078(var_322_bool); // 0x7de NEW_2
	if(var_322_bool == 0) goto Label_2019; // 0x7e0 JumpB
	var_309_bool = 1; // 0x7e1 MovB
	return 10; // 0x7e2 Return
	
Label_2019:
	var_365_bool = 0; var_366_object = Obj(); // 0x7e3 PushV
	var_366_object = var_0_object; // 0x7e4 MovT
	func_2625(var_365_bool, var_366_object); // 0x7e5 NEW_2
	var_367_bool = var_365_bool == 0; // 0x7e7 Not
	if(var_367_bool == 0) goto Label_2027; // 0x7e8 JumpB
	var_309_bool = 0; // 0x7e9 MovB
	return 10; // 0x7ea Return
	
Label_2027:
	GetPFPosition(var_317_cvector); // 0x7eb TObjFunc
	GetPFPosition(var_318_cvector); // 0x7ed Func
	var_319_cvector = var_317_cvector - var_318_cvector; // 0x7ef Sub2
	var_320_float = var_319_cvector | var_319_cvector; // 0x7f0 Or2
	var_368_float = var_310_float * var_310_float; // 0x7f1 Mult
	var_369_bool = var_320_float < var_368_float; // 0x7f2 LT
	if(var_369_bool == 0) goto Label_2042; // 0x7f3 JumpB
	var_370_bool = 0; var_371_float = 0; // 0x7f4 PushV
	var_371_float = var_310_float; // 0x7f5 Mov
	func_1843(var_320_float, var_370_bool, var_371_float); // 0x7f6 NEW_2
	var_309_bool = 1; // 0x7f8 MovB
	return 10; // 0x7f9 Return
	
Label_2042:
	sync(); // 0x7fa Func
	goto Label_2008; // 0x7fc Jump
}


func_3031(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0); // 0xbd8 PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0xbd9 PushE
	var_76_float = var_74_float * var_75_float; // 0xbda Mult
	var_77_float = GetByIndex(var_72_cvector, 2); // 0xbdb PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0xbdc PushE
	var_79_float = var_77_float * var_78_float; // 0xbdd Mult
	var_71_float = var_76_float + var_79_float; // 0xbde Add2
	return 0; // 0xbdf Return
}


func_986(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x3da TMovB
	var_1_object = 1; // 0x3db TMovB
	Stop(); // 0x3dc Func
	StopGroup0(); // 0x3de Func
	return 0; // 0x3e0 Return
}


func_476(var_20_object)
{
	EventDisable(0); // 0x1dd EventDisable
	var_21_object = Obj(); // 0x1de PushV
	var_21_object = var_20_object; // 0x1df Mov
	func_509(var_21_object); // 0x1e0 NEW_2
	var_101_object = Obj(); // 0x1e2 PushV
	var_101_object = var_20_object; // 0x1e3 Mov
	func_3712(var_101_object); // 0x1e4 NEW_2
	EventEnable(0); // 0x1e6 EventEnable
	
Label_487:
	Hold(); // 0x1e7 Func
	goto Label_487; // 0x1e9 Jump
}


func_3550(var_148_int)
{
	var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_bool = 0; // 0xdde PushV
	var_151_int = 0; // 0xddf MovI
	
Label_3552:
	var_153_string = "all"; // 0xde0 PushS
	var_154_string = ""; var_155_int = 0; // 0xde1 PushV
	var_155_int = var_151_int; // 0xde2 Mov
	func_3543(var_154_string, var_155_int); // 0xde3 NEW_2
	HasAnimation(var_152_bool, var_153_string, var_154_string); // 0xde5 Func
	var_159_bool = var_152_bool == 0; // 0xde7 Not
	if(var_159_bool == 0) goto Label_3562; // 0xde8 JumpB
	goto Label_3565; // 0xde9 Jump
	
Label_3565:
	var_148_int = var_151_int; // 0xded Mov
	return 4; // 0xdee Return
	
Label_3562:
	var_160_int = 1; // 0xdea PushI
	var_151_int = var_151_int + var_160_int; // 0xdeb Add2
	goto Label_3552; // 0xdec Jump
}


func_3040(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0); // 0xbe1 PushE
	var_83_float = GetByIndex(var_81_cvector, 0); // 0xbe2 PushE
	var_84_float = var_82_float * var_83_float; // 0xbe3 Mult
	var_85_float = GetByIndex(var_81_cvector, 2); // 0xbe4 PushE
	var_86_float = GetByIndex(var_81_cvector, 2); // 0xbe5 PushE
	var_87_float = var_85_float * var_86_float; // 0xbe6 Mult
	var_88_int = var_84_float + var_87_float; // 0xbe7 Add
	var_80_float = sqrt(var_88_int); // 0xbe8 Sqrt2
	return 0; // 0xbe9 Return
}


func_993(var_130_bool)
{
	var_130_bool = 0; // 0x3e1 MovB
	return 0; // 0x3e2 Return
}


func_995(var_124_object, var_125_cvector)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x3e3 PushV
	FindShiftedPathTo(var_127_object, var_125_cvector); // 0x3e4 Func
	var_124_object = var_127_object; // 0x3e6 Mov
	return 2; // 0x3e7 Return
}


func_3050(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xbeb PushV
	var_72_cvector = var_69_cvector; // 0xbec Mov
	var_73_cvector = var_70_cvector; // 0xbed Mov
	func_3031(var_71_float, var_72_cvector, var_73_cvector); // 0xbee NEW_2
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0xbf0 PushV
	var_81_cvector = var_69_cvector; // 0xbf1 Mov
	func_3040(var_80_float, var_81_cvector); // 0xbf2 NEW_2
	var_89_float = 0; var_90_cvector = CVector(0,0,0); // 0xbf4 PushV
	var_90_cvector = var_70_cvector; // 0xbf5 Mov
	func_3040(var_89_float, var_90_cvector); // 0xbf6 NEW_2
	var_91_float = var_80_float * var_89_float; // 0xbf8 Mult
	var_68_float = var_71_float / var_71_float; // 0xbf9 Div2
	return 0; // 0xbfa Return
}


func_3567(var_61_int)
{
	var_63_bool = 0; // 0xdf0 PushV
	func_3707(var_63_bool); // 0xdf1 NEW_2
	if(var_63_bool == 0) goto Label_3574; // 0xdf3 JumpB
	var_61_int = 2; // 0xdf4 MovI
	goto Label_3575; // 0xdf5 Jump
	
Label_3575:
	return 0; // 0xdf7 Return
	
Label_3574:
	var_61_int = 0; // 0xdf6 MovI
}


func_1526(var_74_object)
{
	var_81_object = Obj(); var_82_bool = 0; var_83_float = 0; // 0x5f7 PushV
	var_81_object = var_74_object; // 0x5f8 Mov
	var_82_bool = 1; // 0x5f9 MovB
	var_83_float = 180.0; // 0x5fa MovF
	func_1540(var_77_int, var_78_bool, var_79_float, var_80_int, var_74_object, var_81_object, var_82_bool, var_83_float); // 0x5fb NEW_2
	return 0; // 0x5fd Return
}


func_3576(var_60_object)
{
	var_61_object = Obj(); // 0xdf9 PushV
	var_61_object = var_60_object; // 0xdfa Mov
	TaskCall(5); // 0xdfb TaskCall
	func_1251(var_62_object, var_61_object); // 0xdfc NEW_2
	TaskReturn(); // 0xdfd TaskReturn
	return 0; // 0xdff Return
}


func_3067(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0; // 0xbfb PushV
	GetVariable(var_124_string, var_126_int); // 0xbfc Func
	var_123_int = var_126_int; // 0xbfe Mov
	return 2; // 0xbff Return
}


func_509(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x1fd PushV
	var_42_bool = var_21_object == 0; // 0x1fe NullEq
	if(var_42_bool == 0) goto Label_517; // 0x1ff JumpB
	var_43_string = ""; // 0x200 PushV
	var_43_string = "fdie"; // 0x201 MovS
	func_600(var_43_string); // 0x202 NEW_2
	goto Label_599; // 0x204 Jump
	
Label_599:
	return 20; // 0x257 Return
	
Label_517:
	GetPosition(var_32_cvector); // 0x205 ObjFunc
	GetPosition(var_33_cvector); // 0x207 Func
	GetDirection(var_34_cvector); // 0x209 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x20b Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x20c PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x20d PushE
	var_77_float = var_75_float * var_76_float; // 0x20e Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x20f PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x210 PushE
	var_80_float = var_78_float * var_79_float; // 0x211 Mult
	var_81_int = var_77_float + var_80_float; // 0x212 Add
	var_82_int = 0; // 0x213 PushI
	var_83_bool = var_81_int >= var_82_int; // 0x214 GE
	if(var_83_bool == 0) goto Label_536; // 0x215 JumpB
	var_36_string = "fdie"; // 0x216 MovS
	goto Label_537; // 0x217 Jump
	
Label_537:
	RemoveRTEnvelope(); // 0x219 Func
	SetDeathState(); // 0x21b Func
	Stop(); // 0x21d Func
	StopAsync(); // 0x21f Func
	var_37_object = var_21_object; // 0x221 Mov
	var_84_string = "GetScriptProperty"; // 0x222 PushS
	var_85_int = 2; // 0x223 PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x224 FuncExist
	if(var_86_bool == 0) goto Label_561; // 0x225 JumpB
	var_87_string = "Owner"; // 0x226 PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x227 ObjFunc
	var_88_bool = var_38_bool; // 0x229 Push
	if(var_88_bool == 0) goto Label_561; // 0x22a JumpB
	var_89_string = "Owner"; // 0x22b PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x22c ObjFunc
	var_90_bool = var_37_object == 0; // 0x22e NullEq
	if(var_90_bool == 0) goto Label_561; // 0x22f JumpB
	var_37_object = var_21_object; // 0x230 Mov
	
Label_561:
	var_91_string = "@GetEyesHeight"; // 0x231 PushS
	var_92_int = 1; // 0x232 PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x233 FuncExist
	if(var_93_bool == 0) goto Label_576; // 0x234 JumpB
	GetEyesHeight(var_40_float); // 0x235 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x237 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x238 PushE
	var_94_float = var_40_float; // 0x239 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x23a PopE
	var_95_string = "head"; // 0x23b PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x23c Func
	var_39_bool = 1; // 0x23e MovB
	goto Label_577; // 0x23f Jump
	
Label_577:
	var_96_string = ""; // 0x241 PushV
	var_96_string = var_36_string; // 0x242 Mov
	func_2951(var_96_string); // 0x243 NEW_2
	var_97_string = "all"; // 0x245 PushS
	PlayAnimation(var_97_string, var_36_string); // 0x246 Func
	WaitForAnimEnd(); // 0x248 Func
	var_98_bool = var_39_bool; // 0x24a Push
	if(var_98_bool == 0) goto Label_593; // 0x24b JumpB
	StopAsync(); // 0x24c Func
	var_99_string = "head"; // 0x24e PushS
	UnlookAsync(var_99_string); // 0x24f Func
	
Label_593:
	var_100_string = "all"; // 0x251 PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x252 Func
	RemoveEnvelope(); // 0x254 Func
	var_37_object = 0; // 0x256 SetNull
	
Label_576:
	var_39_bool = 0; // 0x240 MovB
	
Label_536:
	var_36_string = "bdie"; // 0x218 MovS
}


func_1534(var_418_float)
{
	var_418_float = 0.03; // 0x5ff MovF
	return 0; // 0x600 Return
}


