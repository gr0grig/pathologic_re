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
	func_5634(var_35_bool, var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_4658(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xca PushI
	if(var_37_int == 0) goto Label_344; // 0xcb JumpB
	func_4753(); // 0xcd Call
	var_39_int = 84; // 0xcf PushI
	var_40_bool = var_35_string == var_39_int; // 0xd0 Eq
	if(var_40_bool == 0) goto Label_245; // 0xd1 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xd2 PushV
	var_41_object = var_1_object; // 0xd3 MovT
	var_42_object = var_0_object; // 0xd4 MovT
	func_4916(); // 0xd5 Call
	var_45_string = ""; // 0xd7 PushV
	var_45_string = "Neutral"; // 0xd8 MovS
	func_185(var_36_bool, var_45_string); // 0xd9 Call
	var_60_int = 72; // 0xdb PushI
	SetMessage(var_60_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_61_int = 73; // 0xe0 PushI
	var_62_int = 87; // 0xe1 PushI
	var_63_int = 85; // 0xe2 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xe3 TObjFunc
	var_64_int = 74; // 0xe5 PushI
	var_65_int = 88; // 0xe6 PushI
	var_66_int = 86; // 0xe7 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe8 TObjFunc
	var_67_int = 86; // 0xea PushI
	var_68_int = 87; // 0xeb PushI
	var_69_int = 98; // 0xec PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xed TObjFunc
	var_70_int = 87; // 0xef PushI
	var_71_int = 87; // 0xf0 PushI
	var_72_int = 99; // 0xf1 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_73_int = 88; // 0xf5 PushI
	var_74_bool = var_35_string == var_73_int; // 0xf6 Eq
	if(var_74_bool == 0) goto Label_268; // 0xf7 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xf8 PushV
	var_75_object = var_1_object; // 0xf9 MovT
	var_76_object = var_0_object; // 0xfa MovT
	func_4892(); // 0xfb Call
	var_79_string = ""; // 0xfd PushV
	var_79_string = "Neutral"; // 0xfe MovS
	func_185(var_36_bool, var_79_string); // 0xff Call
	var_80_int = 76; // 0x101 PushI
	SetMessage(var_80_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_81_int = 85; // 0x106 PushI
	var_82_int = 87; // 0x107 PushI
	var_83_int = 97; // 0x108 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_84_int = 87; // 0x10c PushI
	var_85_bool = var_35_string == var_84_int; // 0x10d Eq
	if(var_85_bool == 0) goto Label_291; // 0x10e JumpB
	var_86_string = ""; // 0x10f PushV
	var_86_string = "Neutral"; // 0x110 MovS
	func_185(var_36_bool, var_86_string); // 0x111 Call
	var_87_int = 75; // 0x113 PushI
	SetMessage(var_87_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_88_int = 77; // 0x118 PushI
	var_89_int = 93; // 0x119 PushI
	var_90_int = 89; // 0x11a PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x11b TObjFunc
	var_91_int = 78; // 0x11d PushI
	var_92_int = 91; // 0x11e PushI
	var_93_int = 90; // 0x11f PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_94_int = 91; // 0x123 PushI
	var_95_bool = var_35_string == var_94_int; // 0x124 Eq
	if(var_95_bool == 0) goto Label_309; // 0x125 JumpB
	var_96_string = ""; // 0x126 PushV
	var_96_string = "Neutral"; // 0x127 MovS
	func_185(var_36_bool, var_96_string); // 0x128 Call
	var_97_int = 79; // 0x12a PushI
	SetMessage(var_97_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_98_int = 80; // 0x12f PushI
	var_99_int = -1; // 0x130 PushI
	var_100_int = 92; // 0x131 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_101_int = 93; // 0x135 PushI
	var_102_bool = var_35_string == var_101_int; // 0x136 Eq
	if(var_102_bool == 0) goto Label_332; // 0x137 JumpB
	var_103_string = ""; // 0x138 PushV
	var_103_string = "Neutral"; // 0x139 MovS
	func_185(var_36_bool, var_103_string); // 0x13a Call
	var_104_int = 81; // 0x13c PushI
	SetMessage(var_104_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_105_int = 83; // 0x141 PushI
	var_106_int = -1; // 0x142 PushI
	var_107_int = 95; // 0x143 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x144 TObjFunc
	var_108_int = 84; // 0x146 PushI
	var_109_int = -1; // 0x147 PushI
	var_110_int = 96; // 0x148 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_3_string = 1; // 0x14c TMovB
	var_111_bool = 0; // 0x14d PushV
	func_4808(var_111_bool); // 0x14e Call
	if(var_111_bool == 0) goto Label_340; // 0x150 JumpB
	lshStopAnimation(); // 0x151 Func
	goto Label_342; // 0x153 Jump
	
Label_342:
	return 0; // 0x156 Return
	
Label_340:
	StopAnimation(); // 0x154 Func
	
Label_344:
	return 0; // 0x158 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x219 PushI
	if(var_37_int == 0) goto Label_785; // 0x21a JumpB
	func_4753(); // 0x21c Call
	var_39_int = 13313; // 0x21e PushI
	var_40_bool = var_36_bool == var_39_int; // 0x21f Eq
	if(var_40_bool == 0) goto Label_550; // 0x220 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x221 PushV
	var_41_object = var_1_object; // 0x222 MovT
	var_42_object = var_0_object; // 0x223 MovT
	func_4904(); // 0x224 Call
	
Label_550:
	var_45_int = 3539; // 0x226 PushI
	var_46_bool = var_35_string == var_45_int; // 0x227 Eq
	if(var_46_bool == 0) goto Label_627; // 0x228 JumpB
	var_47_bool = 0; // 0x229 PushV
	var_47_bool = 0; // 0x22a MovB
	var_48_bool = 0; var_49_object = Obj(); // 0x22b PushV
	var_49_object = var_1_object; // 0x22c MovT
	func_5144(var_49_object); // 0x22d Call
	if(var_48_bool == 0) goto Label_566; // 0x22f JumpB
	var_56_bool = 0; var_57_object = Obj(); // 0x230 PushV
	var_57_object = var_1_object; // 0x231 MovT
	func_5156(var_57_object); // 0x232 Call
	if(var_56_bool == 0) goto Label_566; // 0x234 JumpB
	var_47_bool = 1; // 0x235 MovB
	
Label_566:
	if(var_47_bool == 0) goto Label_597; // 0x236 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x237 PushV
	var_62_object = var_1_object; // 0x238 MovT
	var_63_object = var_0_object; // 0x239 MovT
	func_4898(); // 0x23a Call
	var_66_object = Obj(); var_67_object = Obj(); // 0x23c PushV
	var_66_object = var_1_object; // 0x23d MovT
	var_67_object = var_0_object; // 0x23e MovT
	func_4984(); // 0x23f Call
	var_70_string = ""; // 0x241 PushV
	var_70_string = "Neutral"; // 0x242 MovS
	func_520(var_36_bool, var_70_string); // 0x243 Call
	var_85_int = 3206; // 0x245 PushI
	SetMessage(var_85_int); // 0x246 TObjFunc
	ClearReplies(); // 0x248 TObjFunc
	var_86_int = 3207; // 0x24a PushI
	var_87_int = 3543; // 0x24b PushI
	var_88_int = 3540; // 0x24c PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x24d TObjFunc
	var_89_int = 3208; // 0x24f PushI
	var_90_int = 3542; // 0x250 PushI
	var_91_int = 3541; // 0x251 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x252 TObjFunc
	return 0; // 0x254 Return
	
Label_597:
	var_92_object = Obj(); var_93_object = Obj(); // 0x255 PushV
	var_92_object = var_1_object; // 0x256 MovT
	var_93_object = var_0_object; // 0x257 MovT
	func_4984(); // 0x258 Call
	var_94_string = ""; // 0x25a PushV
	var_94_string = "Neutral"; // 0x25b MovS
	func_520(var_36_bool, var_94_string); // 0x25c Call
	var_95_int = 12086; // 0x25e PushI
	SetMessage(var_95_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_96_bool = 0; var_97_object = Obj(); // 0x263 PushV
	var_97_object = var_1_object; // 0x264 MovT
	func_5168(var_97_object); // 0x265 Call
	if(var_96_bool == 0) goto Label_621; // 0x267 JumpB
	var_102_int = 12087; // 0x268 PushI
	var_103_int = 13314; // 0x269 PushI
	var_104_int = 13313; // 0x26a PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x26b TObjFunc
	
Label_621:
	var_105_int = 12094; // 0x26d PushI
	var_106_int = -1; // 0x26e PushI
	var_107_int = 13320; // 0x26f PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x270 TObjFunc
	return 0; // 0x272 Return
	
Label_627:
	var_108_int = 13314; // 0x273 PushI
	var_109_bool = var_35_string == var_108_int; // 0x274 Eq
	if(var_109_bool == 0) goto Label_645; // 0x275 JumpB
	var_110_string = ""; // 0x276 PushV
	var_110_string = "Neutral"; // 0x277 MovS
	func_520(var_36_bool, var_110_string); // 0x278 Call
	var_111_int = 12088; // 0x27a PushI
	SetMessage(var_111_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_112_int = 12089; // 0x27f PushI
	var_113_int = 13316; // 0x280 PushI
	var_114_int = 13315; // 0x281 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_115_int = 13316; // 0x285 PushI
	var_116_bool = var_35_string == var_115_int; // 0x286 Eq
	if(var_116_bool == 0) goto Label_663; // 0x287 JumpB
	var_117_string = ""; // 0x288 PushV
	var_117_string = "Neutral"; // 0x289 MovS
	func_520(var_36_bool, var_117_string); // 0x28a Call
	var_118_int = 12090; // 0x28c PushI
	SetMessage(var_118_int); // 0x28d TObjFunc
	ClearReplies(); // 0x28f TObjFunc
	var_119_int = 12091; // 0x291 PushI
	var_120_int = 13318; // 0x292 PushI
	var_121_int = 13317; // 0x293 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_122_int = 13318; // 0x297 PushI
	var_123_bool = var_35_string == var_122_int; // 0x298 Eq
	if(var_123_bool == 0) goto Label_681; // 0x299 JumpB
	var_124_string = ""; // 0x29a PushV
	var_124_string = "Neutral"; // 0x29b MovS
	func_520(var_36_bool, var_124_string); // 0x29c Call
	var_125_int = 12092; // 0x29e PushI
	SetMessage(var_125_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_126_int = 12093; // 0x2a3 PushI
	var_127_int = -1; // 0x2a4 PushI
	var_128_int = 13319; // 0x2a5 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x2a6 TObjFunc
	return 0; // 0x2a8 Return
	
Label_681:
	var_129_int = 3542; // 0x2a9 PushI
	var_130_bool = var_35_string == var_129_int; // 0x2aa Eq
	if(var_130_bool == 0) goto Label_704; // 0x2ab JumpB
	var_131_string = ""; // 0x2ac PushV
	var_131_string = "Neutral"; // 0x2ad MovS
	func_520(var_36_bool, var_131_string); // 0x2ae Call
	var_132_int = 3209; // 0x2b0 PushI
	SetMessage(var_132_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_133_int = 3215; // 0x2b5 PushI
	var_134_int = 3543; // 0x2b6 PushI
	var_135_int = 3549; // 0x2b7 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x2b8 TObjFunc
	var_136_int = 3216; // 0x2ba PushI
	var_137_int = 3543; // 0x2bb PushI
	var_138_int = 3551; // 0x2bc PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x2bd TObjFunc
	return 0; // 0x2bf Return
	
Label_704:
	var_139_int = 3543; // 0x2c0 PushI
	var_140_bool = var_35_string == var_139_int; // 0x2c1 Eq
	if(var_140_bool == 0) goto Label_727; // 0x2c2 JumpB
	var_141_string = ""; // 0x2c3 PushV
	var_141_string = "Neutral"; // 0x2c4 MovS
	func_520(var_36_bool, var_141_string); // 0x2c5 Call
	var_142_int = 3210; // 0x2c7 PushI
	SetMessage(var_142_int); // 0x2c8 TObjFunc
	ClearReplies(); // 0x2ca TObjFunc
	var_143_int = 3211; // 0x2cc PushI
	var_144_int = 3545; // 0x2cd PushI
	var_145_int = 3544; // 0x2ce PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x2cf TObjFunc
	var_146_int = 3214; // 0x2d1 PushI
	var_147_int = 3545; // 0x2d2 PushI
	var_148_int = 3547; // 0x2d3 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_149_int = 3545; // 0x2d7 PushI
	var_150_bool = var_35_string == var_149_int; // 0x2d8 Eq
	if(var_150_bool == 0) goto Label_750; // 0x2d9 JumpB
	var_151_string = ""; // 0x2da PushV
	var_151_string = "Neutral"; // 0x2db MovS
	func_520(var_36_bool, var_151_string); // 0x2dc Call
	var_152_int = 3212; // 0x2de PushI
	SetMessage(var_152_int); // 0x2df TObjFunc
	ClearReplies(); // 0x2e1 TObjFunc
	var_153_int = 3213; // 0x2e3 PushI
	var_154_int = -1; // 0x2e4 PushI
	var_155_int = 3546; // 0x2e5 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x2e6 TObjFunc
	var_156_int = 3217; // 0x2e8 PushI
	var_157_int = 3554; // 0x2e9 PushI
	var_158_int = 3553; // 0x2ea PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x2eb TObjFunc
	return 0; // 0x2ed Return
	
Label_750:
	var_159_int = 3554; // 0x2ee PushI
	var_160_bool = var_35_string == var_159_int; // 0x2ef Eq
	if(var_160_bool == 0) goto Label_773; // 0x2f0 JumpB
	var_161_string = ""; // 0x2f1 PushV
	var_161_string = "Neutral"; // 0x2f2 MovS
	func_520(var_36_bool, var_161_string); // 0x2f3 Call
	var_162_int = 3218; // 0x2f5 PushI
	SetMessage(var_162_int); // 0x2f6 TObjFunc
	ClearReplies(); // 0x2f8 TObjFunc
	var_163_int = 3219; // 0x2fa PushI
	var_164_int = -1; // 0x2fb PushI
	var_165_int = 3555; // 0x2fc PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x2fd TObjFunc
	var_166_int = 3220; // 0x2ff PushI
	var_167_int = -1; // 0x300 PushI
	var_168_int = 3556; // 0x301 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x302 TObjFunc
	return 0; // 0x304 Return
	
Label_773:
	var_3_string = 1; // 0x305 TMovB
	var_169_bool = 0; // 0x306 PushV
	func_4808(var_169_bool); // 0x307 Call
	if(var_169_bool == 0) goto Label_781; // 0x309 JumpB
	lshStopAnimation(); // 0x30a Func
	goto Label_783; // 0x30c Jump
	
Label_783:
	return 0; // 0x30f Return
	
Label_781:
	StopAnimation(); // 0x30d Func
	
Label_785:
	return 0; // 0x311 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x482 PushI
	if(var_37_int == 0) goto Label_2358; // 0x483 JumpB
	func_4753(); // 0x485 Call
	var_39_int = 6112; // 0x487 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x488 Eq
	if(var_40_bool == 0) goto Label_1167; // 0x489 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x48a PushV
	var_41_object = var_1_object; // 0x48b MovT
	var_42_object = var_0_object; // 0x48c MovT
	func_4816(); // 0x48d Call
	
Label_1167:
	var_45_int = 6113; // 0x48f PushI
	var_46_bool = var_36_bool == var_45_int; // 0x490 Eq
	if(var_46_bool == 0) goto Label_1175; // 0x491 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x492 PushV
	var_47_object = var_1_object; // 0x493 MovT
	var_48_object = var_0_object; // 0x494 MovT
	func_4816(); // 0x495 Call
	
Label_1175:
	var_49_int = 6122; // 0x497 PushI
	var_50_bool = var_36_bool == var_49_int; // 0x498 Eq
	if(var_50_bool == 0) goto Label_1183; // 0x499 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x49a PushV
	var_51_object = var_1_object; // 0x49b MovT
	var_52_object = var_0_object; // 0x49c MovT
	func_4816(); // 0x49d Call
	
Label_1183:
	var_53_int = 6123; // 0x49f PushI
	var_54_bool = var_36_bool == var_53_int; // 0x4a0 Eq
	if(var_54_bool == 0) goto Label_1191; // 0x4a1 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x4a2 PushV
	var_55_object = var_1_object; // 0x4a3 MovT
	var_56_object = var_0_object; // 0x4a4 MovT
	func_4816(); // 0x4a5 Call
	
Label_1191:
	var_57_int = 6127; // 0x4a7 PushI
	var_58_bool = var_36_bool == var_57_int; // 0x4a8 Eq
	if(var_58_bool == 0) goto Label_1199; // 0x4a9 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x4aa PushV
	var_59_object = var_1_object; // 0x4ab MovT
	var_60_object = var_0_object; // 0x4ac MovT
	func_4816(); // 0x4ad Call
	
Label_1199:
	var_61_int = 6128; // 0x4af PushI
	var_62_bool = var_36_bool == var_61_int; // 0x4b0 Eq
	if(var_62_bool == 0) goto Label_1207; // 0x4b1 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x4b2 PushV
	var_63_object = var_1_object; // 0x4b3 MovT
	var_64_object = var_0_object; // 0x4b4 MovT
	func_4816(); // 0x4b5 Call
	
Label_1207:
	var_65_int = 6154; // 0x4b7 PushI
	var_66_bool = var_36_bool == var_65_int; // 0x4b8 Eq
	if(var_66_bool == 0) goto Label_1215; // 0x4b9 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x4ba PushV
	var_67_object = var_1_object; // 0x4bb MovT
	var_68_object = var_0_object; // 0x4bc MovT
	func_4822(); // 0x4bd Call
	
Label_1215:
	var_71_int = 6155; // 0x4bf PushI
	var_72_bool = var_36_bool == var_71_int; // 0x4c0 Eq
	if(var_72_bool == 0) goto Label_1223; // 0x4c1 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x4c2 PushV
	var_73_object = var_1_object; // 0x4c3 MovT
	var_74_object = var_0_object; // 0x4c4 MovT
	func_4822(); // 0x4c5 Call
	
Label_1223:
	var_75_int = 6158; // 0x4c7 PushI
	var_76_bool = var_36_bool == var_75_int; // 0x4c8 Eq
	if(var_76_bool == 0) goto Label_1231; // 0x4c9 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x4ca PushV
	var_77_object = var_1_object; // 0x4cb MovT
	var_78_object = var_0_object; // 0x4cc MovT
	func_4822(); // 0x4cd Call
	
Label_1231:
	var_79_int = 6159; // 0x4cf PushI
	var_80_bool = var_36_bool == var_79_int; // 0x4d0 Eq
	if(var_80_bool == 0) goto Label_1239; // 0x4d1 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x4d2 PushV
	var_81_object = var_1_object; // 0x4d3 MovT
	var_82_object = var_0_object; // 0x4d4 MovT
	func_4822(); // 0x4d5 Call
	
Label_1239:
	var_83_int = 6164; // 0x4d7 PushI
	var_84_bool = var_36_bool == var_83_int; // 0x4d8 Eq
	if(var_84_bool == 0) goto Label_1247; // 0x4d9 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x4da PushV
	var_85_object = var_1_object; // 0x4db MovT
	var_86_object = var_0_object; // 0x4dc MovT
	func_4822(); // 0x4dd Call
	
Label_1247:
	var_87_int = 6173; // 0x4df PushI
	var_88_bool = var_36_bool == var_87_int; // 0x4e0 Eq
	if(var_88_bool == 0) goto Label_1255; // 0x4e1 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x4e2 PushV
	var_89_object = var_1_object; // 0x4e3 MovT
	var_90_object = var_0_object; // 0x4e4 MovT
	func_4822(); // 0x4e5 Call
	
Label_1255:
	var_91_int = 6902; // 0x4e7 PushI
	var_92_bool = var_36_bool == var_91_int; // 0x4e8 Eq
	if(var_92_bool == 0) goto Label_1263; // 0x4e9 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x4ea PushV
	var_93_object = var_1_object; // 0x4eb MovT
	var_94_object = var_0_object; // 0x4ec MovT
	func_4828(); // 0x4ed Call
	
Label_1263:
	var_97_int = 6903; // 0x4ef PushI
	var_98_bool = var_36_bool == var_97_int; // 0x4f0 Eq
	if(var_98_bool == 0) goto Label_1271; // 0x4f1 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x4f2 PushV
	var_99_object = var_1_object; // 0x4f3 MovT
	var_100_object = var_0_object; // 0x4f4 MovT
	func_4828(); // 0x4f5 Call
	
Label_1271:
	var_101_int = 6904; // 0x4f7 PushI
	var_102_bool = var_36_bool == var_101_int; // 0x4f8 Eq
	if(var_102_bool == 0) goto Label_1279; // 0x4f9 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x4fa PushV
	var_103_object = var_1_object; // 0x4fb MovT
	var_104_object = var_0_object; // 0x4fc MovT
	func_4828(); // 0x4fd Call
	
Label_1279:
	var_105_int = 6188; // 0x4ff PushI
	var_106_bool = var_36_bool == var_105_int; // 0x500 Eq
	if(var_106_bool == 0) goto Label_1287; // 0x501 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x502 PushV
	var_107_object = var_1_object; // 0x503 MovT
	var_108_object = var_0_object; // 0x504 MovT
	func_4828(); // 0x505 Call
	
Label_1287:
	var_109_int = 6183; // 0x507 PushI
	var_110_bool = var_36_bool == var_109_int; // 0x508 Eq
	if(var_110_bool == 0) goto Label_1295; // 0x509 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x50a PushV
	var_111_object = var_1_object; // 0x50b MovT
	var_112_object = var_0_object; // 0x50c MovT
	func_4810(); // 0x50d Call
	
Label_1295:
	var_115_int = 6184; // 0x50f PushI
	var_116_bool = var_36_bool == var_115_int; // 0x510 Eq
	if(var_116_bool == 0) goto Label_1303; // 0x511 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x512 PushV
	var_117_object = var_1_object; // 0x513 MovT
	var_118_object = var_0_object; // 0x514 MovT
	func_4810(); // 0x515 Call
	
Label_1303:
	var_119_int = 8932; // 0x517 PushI
	var_120_bool = var_36_bool == var_119_int; // 0x518 Eq
	if(var_120_bool == 0) goto Label_1311; // 0x519 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x51a PushV
	var_121_object = var_1_object; // 0x51b MovT
	var_122_object = var_0_object; // 0x51c MovT
	func_4828(); // 0x51d Call
	
Label_1311:
	var_123_int = 8934; // 0x51f PushI
	var_124_bool = var_36_bool == var_123_int; // 0x520 Eq
	if(var_124_bool == 0) goto Label_1319; // 0x521 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x522 PushV
	var_125_object = var_1_object; // 0x523 MovT
	var_126_object = var_0_object; // 0x524 MovT
	func_4960(); // 0x525 Call
	
Label_1319:
	var_129_int = 8938; // 0x527 PushI
	var_130_bool = var_36_bool == var_129_int; // 0x528 Eq
	if(var_130_bool == 0) goto Label_1327; // 0x529 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x52a PushV
	var_131_object = var_1_object; // 0x52b MovT
	var_132_object = var_0_object; // 0x52c MovT
	func_4966(); // 0x52d Call
	
Label_1327:
	var_135_int = 8940; // 0x52f PushI
	var_136_bool = var_36_bool == var_135_int; // 0x530 Eq
	if(var_136_bool == 0) goto Label_1335; // 0x531 JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x532 PushV
	var_137_object = var_1_object; // 0x533 MovT
	var_138_object = var_0_object; // 0x534 MovT
	func_4972(); // 0x535 Call
	
Label_1335:
	var_141_int = 8942; // 0x537 PushI
	var_142_bool = var_36_bool == var_141_int; // 0x538 Eq
	if(var_142_bool == 0) goto Label_1343; // 0x539 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x53a PushV
	var_143_object = var_1_object; // 0x53b MovT
	var_144_object = var_0_object; // 0x53c MovT
	func_4978(); // 0x53d Call
	
Label_1343:
	var_147_int = 6919; // 0x53f PushI
	var_148_bool = var_35_string == var_147_int; // 0x540 Eq
	if(var_148_bool == 0) goto Label_1596; // 0x541 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x542 PushV
	var_150_object = var_1_object; // 0x543 MovT
	func_5050(var_150_object); // 0x544 Call
	var_157_bool = var_149_bool == 0; // 0x546 Not
	if(var_157_bool == 0) goto Label_1372; // 0x547 JumpB
	var_158_string = ""; // 0x548 PushV
	var_158_string = "Neutral"; // 0x549 MovS
	func_1137(var_36_bool, var_158_string); // 0x54a Call
	var_173_int = 6253; // 0x54c PushI
	SetMessage(var_173_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_174_int = 6254; // 0x551 PushI
	var_175_int = 6921; // 0x552 PushI
	var_176_int = 6920; // 0x553 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x554 TObjFunc
	var_177_int = 6259; // 0x556 PushI
	var_178_int = 6926; // 0x557 PushI
	var_179_int = 6925; // 0x558 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x559 TObjFunc
	return 0; // 0x55b Return
	
Label_1372:
	var_180_bool = 0; var_181_object = Obj(); // 0x55c PushV
	var_181_object = var_1_object; // 0x55d MovT
	func_5014(var_181_object); // 0x55e Call
	if(var_180_bool == 0) goto Label_1397; // 0x560 JumpB
	var_186_string = ""; // 0x561 PushV
	var_186_string = "Neutral"; // 0x562 MovS
	func_1137(var_36_bool, var_186_string); // 0x563 Call
	var_187_int = 5533; // 0x565 PushI
	SetMessage(var_187_int); // 0x566 TObjFunc
	ClearReplies(); // 0x568 TObjFunc
	var_188_int = 5534; // 0x56a PushI
	var_189_int = 6099; // 0x56b PushI
	var_190_int = 6098; // 0x56c PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x56d TObjFunc
	var_191_int = 5571; // 0x56f PushI
	var_192_int = 6140; // 0x570 PushI
	var_193_int = 6139; // 0x571 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x572 TObjFunc
	return 0; // 0x574 Return
	
Label_1397:
	var_194_bool = 0; var_195_object = Obj(); // 0x575 PushV
	var_195_object = var_1_object; // 0x576 MovT
	func_5026(var_195_object); // 0x577 Call
	if(var_194_bool == 0) goto Label_1417; // 0x579 JumpB
	var_200_string = ""; // 0x57a PushV
	var_200_string = "Neutral"; // 0x57b MovS
	func_1137(var_36_bool, var_200_string); // 0x57c Call
	var_201_int = 5574; // 0x57e PushI
	SetMessage(var_201_int); // 0x57f TObjFunc
	ClearReplies(); // 0x581 TObjFunc
	var_202_int = 5575; // 0x583 PushI
	var_203_int = 6145; // 0x584 PushI
	var_204_int = 6144; // 0x585 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x586 TObjFunc
	return 0; // 0x588 Return
	
Label_1417:
	var_205_bool = 0; // 0x589 PushV
	var_205_bool = 0; // 0x58a MovB
	var_206_bool = 0; var_207_object = Obj(); // 0x58b PushV
	var_207_object = var_1_object; // 0x58c MovT
	func_5038(var_207_object); // 0x58d Call
	if(var_206_bool == 0) goto Label_1430; // 0x58f JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x590 PushV
	var_213_object = var_1_object; // 0x591 MovT
	func_5098(var_212_bool, var_213_object); // 0x592 Call
	if(var_212_bool == 0) goto Label_1430; // 0x594 JumpB
	var_205_bool = 1; // 0x595 MovB
	
Label_1430:
	if(var_205_bool == 0) goto Label_1451; // 0x596 JumpB
	var_216_string = ""; // 0x597 PushV
	var_216_string = "Neutral"; // 0x598 MovS
	func_1137(var_36_bool, var_216_string); // 0x599 Call
	var_217_int = 5527; // 0x59b PushI
	SetMessage(var_217_int); // 0x59c TObjFunc
	ClearReplies(); // 0x59e TObjFunc
	var_218_int = 5528; // 0x5a0 PushI
	var_219_int = 6901; // 0x5a1 PushI
	var_220_int = 6092; // 0x5a2 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x5a3 TObjFunc
	var_221_int = 5529; // 0x5a5 PushI
	var_222_int = 6187; // 0x5a6 PushI
	var_223_int = 6093; // 0x5a7 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x5a8 TObjFunc
	return 0; // 0x5aa Return
	
Label_1451:
	var_224_bool = 0; var_225_object = Obj(); // 0x5ab PushV
	var_225_object = var_1_object; // 0x5ac MovT
	func_5002(var_225_object); // 0x5ad Call
	if(var_224_bool == 0) goto Label_1476; // 0x5af JumpB
	var_230_string = ""; // 0x5b0 PushV
	var_230_string = "Neutral"; // 0x5b1 MovS
	func_1137(var_36_bool, var_230_string); // 0x5b2 Call
	var_231_int = 5604; // 0x5b4 PushI
	SetMessage(var_231_int); // 0x5b5 TObjFunc
	ClearReplies(); // 0x5b7 TObjFunc
	var_232_int = 5605; // 0x5b9 PushI
	var_233_int = 6180; // 0x5ba PushI
	var_234_int = 6179; // 0x5bb PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x5bc TObjFunc
	var_235_int = 5611; // 0x5be PushI
	var_236_int = 6180; // 0x5bf PushI
	var_237_int = 6185; // 0x5c0 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x5c1 TObjFunc
	return 0; // 0x5c3 Return
	
Label_1476:
	var_238_string = ""; // 0x5c4 PushV
	var_238_string = "Neutral"; // 0x5c5 MovS
	func_1137(var_36_bool, var_238_string); // 0x5c6 Call
	var_239_int = 8097; // 0x5c8 PushI
	SetMessage(var_239_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_240_bool = 0; var_241_object = Obj(); // 0x5cd PushV
	var_241_object = var_1_object; // 0x5ce MovT
	func_5098(var_240_bool, var_241_object); // 0x5cf Call
	if(var_240_bool == 0) goto Label_1495; // 0x5d1 JumpB
	var_242_int = 8098; // 0x5d2 PushI
	var_243_int = -1; // 0x5d3 PushI
	var_244_int = 8921; // 0x5d4 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x5d5 TObjFunc
	
Label_1495:
	var_245_bool = 0; // 0x5d7 PushV
	var_245_bool = 0; // 0x5d8 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x5d9 PushV
	var_247_object = var_1_object; // 0x5da MovT
	func_5288(var_247_object); // 0x5db Call
	if(var_246_bool == 0) goto Label_1508; // 0x5dd JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x5de PushV
	var_253_object = var_1_object; // 0x5df MovT
	func_5038(var_253_object); // 0x5e0 Call
	if(var_252_bool == 0) goto Label_1508; // 0x5e2 JumpB
	var_245_bool = 1; // 0x5e3 MovB
	
Label_1508:
	if(var_245_bool == 0) goto Label_1514; // 0x5e4 JumpB
	var_254_int = 8109; // 0x5e5 PushI
	var_255_int = 8947; // 0x5e6 PushI
	var_256_int = 8932; // 0x5e7 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x5e8 TObjFunc
	
Label_1514:
	var_257_bool = 0; // 0x5ea PushV
	var_257_bool = 0; // 0x5eb MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x5ec PushV
	var_259_object = var_1_object; // 0x5ed MovT
	func_5192(var_259_object); // 0x5ee Call
	if(var_258_bool == 0) goto Label_1527; // 0x5f0 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x5f1 PushV
	var_265_object = var_1_object; // 0x5f2 MovT
	func_5300(var_265_object); // 0x5f3 Call
	if(var_264_bool == 0) goto Label_1527; // 0x5f5 JumpB
	var_257_bool = 1; // 0x5f6 MovB
	
Label_1527:
	if(var_257_bool == 0) goto Label_1533; // 0x5f7 JumpB
	var_270_int = 8111; // 0x5f8 PushI
	var_271_int = 8948; // 0x5f9 PushI
	var_272_int = 8934; // 0x5fa PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x5fb TObjFunc
	
Label_1533:
	var_273_bool = 0; // 0x5fd PushV
	var_273_bool = 0; // 0x5fe MovB
	var_274_bool = 0; var_275_object = Obj(); // 0x5ff PushV
	var_275_object = var_1_object; // 0x600 MovT
	func_5132(var_275_object); // 0x601 Call
	if(var_274_bool == 0) goto Label_1546; // 0x603 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x604 PushV
	var_281_object = var_1_object; // 0x605 MovT
	func_5312(var_281_object); // 0x606 Call
	if(var_280_bool == 0) goto Label_1546; // 0x608 JumpB
	var_273_bool = 1; // 0x609 MovB
	
Label_1546:
	if(var_273_bool == 0) goto Label_1552; // 0x60a JumpB
	var_286_int = 8115; // 0x60b PushI
	var_287_int = 8949; // 0x60c PushI
	var_288_int = 8938; // 0x60d PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x60e TObjFunc
	
Label_1552:
	var_289_bool = 0; // 0x610 PushV
	var_289_bool = 0; // 0x611 MovB
	var_290_bool = 0; var_291_object = Obj(); // 0x612 PushV
	var_291_object = var_1_object; // 0x613 MovT
	func_5396(var_291_object); // 0x614 Call
	if(var_290_bool == 0) goto Label_1565; // 0x616 JumpB
	var_296_bool = 0; var_297_object = Obj(); // 0x617 PushV
	var_297_object = var_1_object; // 0x618 MovT
	func_5324(var_297_object); // 0x619 Call
	if(var_296_bool == 0) goto Label_1565; // 0x61b JumpB
	var_289_bool = 1; // 0x61c MovB
	
Label_1565:
	if(var_289_bool == 0) goto Label_1571; // 0x61d JumpB
	var_302_int = 8117; // 0x61e PushI
	var_303_int = 8950; // 0x61f PushI
	var_304_int = 8940; // 0x620 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x621 TObjFunc
	
Label_1571:
	var_305_bool = 0; // 0x623 PushV
	var_305_bool = 0; // 0x624 MovB
	var_306_bool = 0; var_307_object = Obj(); // 0x625 PushV
	var_307_object = var_1_object; // 0x626 MovT
	func_5384(var_307_object); // 0x627 Call
	if(var_306_bool == 0) goto Label_1584; // 0x629 JumpB
	var_312_bool = 0; var_313_object = Obj(); // 0x62a PushV
	var_313_object = var_1_object; // 0x62b MovT
	func_5336(var_313_object); // 0x62c Call
	if(var_312_bool == 0) goto Label_1584; // 0x62e JumpB
	var_305_bool = 1; // 0x62f MovB
	
Label_1584:
	if(var_305_bool == 0) goto Label_1590; // 0x630 JumpB
	var_318_int = 8119; // 0x631 PushI
	var_319_int = 8951; // 0x632 PushI
	var_320_int = 8942; // 0x633 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x634 TObjFunc
	
Label_1590:
	var_321_int = 15220; // 0x636 PushI
	var_322_int = -1; // 0x637 PushI
	var_323_int = 16497; // 0x638 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x639 TObjFunc
	return 0; // 0x63b Return
	
Label_1596:
	var_324_int = 8951; // 0x63c PushI
	var_325_bool = var_35_string == var_324_int; // 0x63d Eq
	if(var_325_bool == 0) goto Label_1614; // 0x63e JumpB
	var_326_string = ""; // 0x63f PushV
	var_326_string = "Neutral"; // 0x640 MovS
	func_1137(var_36_bool, var_326_string); // 0x641 Call
	var_327_int = 8128; // 0x643 PushI
	SetMessage(var_327_int); // 0x644 TObjFunc
	ClearReplies(); // 0x646 TObjFunc
	var_328_int = 8688; // 0x648 PushI
	var_329_int = -1; // 0x649 PushI
	var_330_int = 9526; // 0x64a PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x64b TObjFunc
	return 0; // 0x64d Return
	
Label_1614:
	var_331_int = 8950; // 0x64e PushI
	var_332_bool = var_35_string == var_331_int; // 0x64f Eq
	if(var_332_bool == 0) goto Label_1632; // 0x650 JumpB
	var_333_string = ""; // 0x651 PushV
	var_333_string = "Neutral"; // 0x652 MovS
	func_1137(var_36_bool, var_333_string); // 0x653 Call
	var_334_int = 8127; // 0x655 PushI
	SetMessage(var_334_int); // 0x656 TObjFunc
	ClearReplies(); // 0x658 TObjFunc
	var_335_int = 8687; // 0x65a PushI
	var_336_int = -1; // 0x65b PushI
	var_337_int = 9525; // 0x65c PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x65d TObjFunc
	return 0; // 0x65f Return
	
Label_1632:
	var_338_int = 8949; // 0x660 PushI
	var_339_bool = var_35_string == var_338_int; // 0x661 Eq
	if(var_339_bool == 0) goto Label_1650; // 0x662 JumpB
	var_340_string = ""; // 0x663 PushV
	var_340_string = "Neutral"; // 0x664 MovS
	func_1137(var_36_bool, var_340_string); // 0x665 Call
	var_341_int = 8126; // 0x667 PushI
	SetMessage(var_341_int); // 0x668 TObjFunc
	ClearReplies(); // 0x66a TObjFunc
	var_342_int = 8686; // 0x66c PushI
	var_343_int = -1; // 0x66d PushI
	var_344_int = 9524; // 0x66e PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x66f TObjFunc
	return 0; // 0x671 Return
	
Label_1650:
	var_345_int = 8948; // 0x672 PushI
	var_346_bool = var_35_string == var_345_int; // 0x673 Eq
	if(var_346_bool == 0) goto Label_1668; // 0x674 JumpB
	var_347_string = ""; // 0x675 PushV
	var_347_string = "Neutral"; // 0x676 MovS
	func_1137(var_36_bool, var_347_string); // 0x677 Call
	var_348_int = 8125; // 0x679 PushI
	SetMessage(var_348_int); // 0x67a TObjFunc
	ClearReplies(); // 0x67c TObjFunc
	var_349_int = 8685; // 0x67e PushI
	var_350_int = -1; // 0x67f PushI
	var_351_int = 9523; // 0x680 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x681 TObjFunc
	return 0; // 0x683 Return
	
Label_1668:
	var_352_int = 8947; // 0x684 PushI
	var_353_bool = var_35_string == var_352_int; // 0x685 Eq
	if(var_353_bool == 0) goto Label_1686; // 0x686 JumpB
	var_354_string = ""; // 0x687 PushV
	var_354_string = "Neutral"; // 0x688 MovS
	func_1137(var_36_bool, var_354_string); // 0x689 Call
	var_355_int = 8124; // 0x68b PushI
	SetMessage(var_355_int); // 0x68c TObjFunc
	ClearReplies(); // 0x68e TObjFunc
	var_356_int = 8684; // 0x690 PushI
	var_357_int = -1; // 0x691 PushI
	var_358_int = 9522; // 0x692 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x693 TObjFunc
	return 0; // 0x695 Return
	
Label_1686:
	var_359_int = 6180; // 0x696 PushI
	var_360_bool = var_35_string == var_359_int; // 0x697 Eq
	if(var_360_bool == 0) goto Label_1704; // 0x698 JumpB
	var_361_string = ""; // 0x699 PushV
	var_361_string = "Neutral"; // 0x69a MovS
	func_1137(var_36_bool, var_361_string); // 0x69b Call
	var_362_int = 5606; // 0x69d PushI
	SetMessage(var_362_int); // 0x69e TObjFunc
	ClearReplies(); // 0x6a0 TObjFunc
	var_363_int = 5607; // 0x6a2 PushI
	var_364_int = 6182; // 0x6a3 PushI
	var_365_int = 6181; // 0x6a4 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x6a5 TObjFunc
	return 0; // 0x6a7 Return
	
Label_1704:
	var_366_int = 6182; // 0x6a8 PushI
	var_367_bool = var_35_string == var_366_int; // 0x6a9 Eq
	if(var_367_bool == 0) goto Label_1727; // 0x6aa JumpB
	var_368_string = ""; // 0x6ab PushV
	var_368_string = "Neutral"; // 0x6ac MovS
	func_1137(var_36_bool, var_368_string); // 0x6ad Call
	var_369_int = 5608; // 0x6af PushI
	SetMessage(var_369_int); // 0x6b0 TObjFunc
	ClearReplies(); // 0x6b2 TObjFunc
	var_370_int = 5609; // 0x6b4 PushI
	var_371_int = -1; // 0x6b5 PushI
	var_372_int = 6183; // 0x6b6 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x6b7 TObjFunc
	var_373_int = 5610; // 0x6b9 PushI
	var_374_int = -1; // 0x6ba PushI
	var_375_int = 6184; // 0x6bb PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x6bc TObjFunc
	return 0; // 0x6be Return
	
Label_1727:
	var_376_int = 6187; // 0x6bf PushI
	var_377_bool = var_35_string == var_376_int; // 0x6c0 Eq
	if(var_377_bool == 0) goto Label_1745; // 0x6c1 JumpB
	var_378_string = ""; // 0x6c2 PushV
	var_378_string = "Neutral"; // 0x6c3 MovS
	func_1137(var_36_bool, var_378_string); // 0x6c4 Call
	var_379_int = 5612; // 0x6c6 PushI
	SetMessage(var_379_int); // 0x6c7 TObjFunc
	ClearReplies(); // 0x6c9 TObjFunc
	var_380_int = 5613; // 0x6cb PushI
	var_381_int = -1; // 0x6cc PushI
	var_382_int = 6188; // 0x6cd PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x6ce TObjFunc
	return 0; // 0x6d0 Return
	
Label_1745:
	var_383_int = 6901; // 0x6d1 PushI
	var_384_bool = var_35_string == var_383_int; // 0x6d2 Eq
	if(var_384_bool == 0) goto Label_1773; // 0x6d3 JumpB
	var_385_string = ""; // 0x6d4 PushV
	var_385_string = "Neutral"; // 0x6d5 MovS
	func_1137(var_36_bool, var_385_string); // 0x6d6 Call
	var_386_int = 6238; // 0x6d8 PushI
	SetMessage(var_386_int); // 0x6d9 TObjFunc
	ClearReplies(); // 0x6db TObjFunc
	var_387_int = 6239; // 0x6dd PushI
	var_388_int = -1; // 0x6de PushI
	var_389_int = 6902; // 0x6df PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x6e0 TObjFunc
	var_390_int = 6240; // 0x6e2 PushI
	var_391_int = -1; // 0x6e3 PushI
	var_392_int = 6903; // 0x6e4 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x6e5 TObjFunc
	var_393_int = 6241; // 0x6e7 PushI
	var_394_int = -1; // 0x6e8 PushI
	var_395_int = 6904; // 0x6e9 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x6ea TObjFunc
	return 0; // 0x6ec Return
	
Label_1773:
	var_396_int = 6145; // 0x6ed PushI
	var_397_bool = var_35_string == var_396_int; // 0x6ee Eq
	if(var_397_bool == 0) goto Label_1796; // 0x6ef JumpB
	var_398_string = ""; // 0x6f0 PushV
	var_398_string = "Neutral"; // 0x6f1 MovS
	func_1137(var_36_bool, var_398_string); // 0x6f2 Call
	var_399_int = 5576; // 0x6f4 PushI
	SetMessage(var_399_int); // 0x6f5 TObjFunc
	ClearReplies(); // 0x6f7 TObjFunc
	var_400_int = 5577; // 0x6f9 PushI
	var_401_int = 6147; // 0x6fa PushI
	var_402_int = 6146; // 0x6fb PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x6fc TObjFunc
	var_403_int = 5603; // 0x6fe PushI
	var_404_int = 6149; // 0x6ff PushI
	var_405_int = 6176; // 0x700 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x701 TObjFunc
	return 0; // 0x703 Return
	
Label_1796:
	var_406_int = 6147; // 0x704 PushI
	var_407_bool = var_35_string == var_406_int; // 0x705 Eq
	if(var_407_bool == 0) goto Label_1824; // 0x706 JumpB
	var_408_string = ""; // 0x707 PushV
	var_408_string = "Neutral"; // 0x708 MovS
	func_1137(var_36_bool, var_408_string); // 0x709 Call
	var_409_int = 5578; // 0x70b PushI
	SetMessage(var_409_int); // 0x70c TObjFunc
	ClearReplies(); // 0x70e TObjFunc
	var_410_int = 5579; // 0x710 PushI
	var_411_int = 6149; // 0x711 PushI
	var_412_int = 6148; // 0x712 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x713 TObjFunc
	var_413_int = 5595; // 0x715 PushI
	var_414_int = 6149; // 0x716 PushI
	var_415_int = 6165; // 0x717 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x718 TObjFunc
	var_416_int = 5596; // 0x71a PushI
	var_417_int = 6168; // 0x71b PushI
	var_418_int = 6167; // 0x71c PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x71d TObjFunc
	return 0; // 0x71f Return
	
Label_1824:
	var_419_int = 6168; // 0x720 PushI
	var_420_bool = var_35_string == var_419_int; // 0x721 Eq
	if(var_420_bool == 0) goto Label_1847; // 0x722 JumpB
	var_421_string = ""; // 0x723 PushV
	var_421_string = "Neutral"; // 0x724 MovS
	func_1137(var_36_bool, var_421_string); // 0x725 Call
	var_422_int = 5597; // 0x727 PushI
	SetMessage(var_422_int); // 0x728 TObjFunc
	ClearReplies(); // 0x72a TObjFunc
	var_423_int = 5598; // 0x72c PushI
	var_424_int = 6151; // 0x72d PushI
	var_425_int = 6169; // 0x72e PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x72f TObjFunc
	var_426_int = 5599; // 0x731 PushI
	var_427_int = 6172; // 0x732 PushI
	var_428_int = 6171; // 0x733 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x734 TObjFunc
	return 0; // 0x736 Return
	
Label_1847:
	var_429_int = 6172; // 0x737 PushI
	var_430_bool = var_35_string == var_429_int; // 0x738 Eq
	if(var_430_bool == 0) goto Label_1870; // 0x739 JumpB
	var_431_string = ""; // 0x73a PushV
	var_431_string = "Neutral"; // 0x73b MovS
	func_1137(var_36_bool, var_431_string); // 0x73c Call
	var_432_int = 5600; // 0x73e PushI
	SetMessage(var_432_int); // 0x73f TObjFunc
	ClearReplies(); // 0x741 TObjFunc
	var_433_int = 5601; // 0x743 PushI
	var_434_int = -1; // 0x744 PushI
	var_435_int = 6173; // 0x745 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x746 TObjFunc
	var_436_int = 5602; // 0x748 PushI
	var_437_int = 6151; // 0x749 PushI
	var_438_int = 6174; // 0x74a PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x74b TObjFunc
	return 0; // 0x74d Return
	
Label_1870:
	var_439_int = 6149; // 0x74e PushI
	var_440_bool = var_35_string == var_439_int; // 0x74f Eq
	if(var_440_bool == 0) goto Label_1893; // 0x750 JumpB
	var_441_string = ""; // 0x751 PushV
	var_441_string = "Neutral"; // 0x752 MovS
	func_1137(var_36_bool, var_441_string); // 0x753 Call
	var_442_int = 5580; // 0x755 PushI
	SetMessage(var_442_int); // 0x756 TObjFunc
	ClearReplies(); // 0x758 TObjFunc
	var_443_int = 5581; // 0x75a PushI
	var_444_int = 6151; // 0x75b PushI
	var_445_int = 6150; // 0x75c PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x75d TObjFunc
	var_446_int = 5591; // 0x75f PushI
	var_447_int = 6161; // 0x760 PushI
	var_448_int = 6160; // 0x761 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x762 TObjFunc
	return 0; // 0x764 Return
	
Label_1893:
	var_449_int = 6161; // 0x765 PushI
	var_450_bool = var_35_string == var_449_int; // 0x766 Eq
	if(var_450_bool == 0) goto Label_1916; // 0x767 JumpB
	var_451_string = ""; // 0x768 PushV
	var_451_string = "Neutral"; // 0x769 MovS
	func_1137(var_36_bool, var_451_string); // 0x76a Call
	var_452_int = 5592; // 0x76c PushI
	SetMessage(var_452_int); // 0x76d TObjFunc
	ClearReplies(); // 0x76f TObjFunc
	var_453_int = 5593; // 0x771 PushI
	var_454_int = 6157; // 0x772 PushI
	var_455_int = 6162; // 0x773 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x774 TObjFunc
	var_456_int = 5594; // 0x776 PushI
	var_457_int = -1; // 0x777 PushI
	var_458_int = 6164; // 0x778 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x779 TObjFunc
	return 0; // 0x77b Return
	
Label_1916:
	var_459_int = 6151; // 0x77c PushI
	var_460_bool = var_35_string == var_459_int; // 0x77d Eq
	if(var_460_bool == 0) goto Label_1939; // 0x77e JumpB
	var_461_string = ""; // 0x77f PushV
	var_461_string = "Neutral"; // 0x780 MovS
	func_1137(var_36_bool, var_461_string); // 0x781 Call
	var_462_int = 5582; // 0x783 PushI
	SetMessage(var_462_int); // 0x784 TObjFunc
	ClearReplies(); // 0x786 TObjFunc
	var_463_int = 5583; // 0x788 PushI
	var_464_int = 6153; // 0x789 PushI
	var_465_int = 6152; // 0x78a PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x78b TObjFunc
	var_466_int = 5587; // 0x78d PushI
	var_467_int = 6157; // 0x78e PushI
	var_468_int = 6156; // 0x78f PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x790 TObjFunc
	return 0; // 0x792 Return
	
Label_1939:
	var_469_int = 6157; // 0x793 PushI
	var_470_bool = var_35_string == var_469_int; // 0x794 Eq
	if(var_470_bool == 0) goto Label_1962; // 0x795 JumpB
	var_471_string = ""; // 0x796 PushV
	var_471_string = "Neutral"; // 0x797 MovS
	func_1137(var_36_bool, var_471_string); // 0x798 Call
	var_472_int = 5588; // 0x79a PushI
	SetMessage(var_472_int); // 0x79b TObjFunc
	ClearReplies(); // 0x79d TObjFunc
	var_473_int = 5589; // 0x79f PushI
	var_474_int = -1; // 0x7a0 PushI
	var_475_int = 6158; // 0x7a1 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x7a2 TObjFunc
	var_476_int = 5590; // 0x7a4 PushI
	var_477_int = -1; // 0x7a5 PushI
	var_478_int = 6159; // 0x7a6 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x7a7 TObjFunc
	return 0; // 0x7a9 Return
	
Label_1962:
	var_479_int = 6153; // 0x7aa PushI
	var_480_bool = var_35_string == var_479_int; // 0x7ab Eq
	if(var_480_bool == 0) goto Label_1985; // 0x7ac JumpB
	var_481_string = ""; // 0x7ad PushV
	var_481_string = "Neutral"; // 0x7ae MovS
	func_1137(var_36_bool, var_481_string); // 0x7af Call
	var_482_int = 5584; // 0x7b1 PushI
	SetMessage(var_482_int); // 0x7b2 TObjFunc
	ClearReplies(); // 0x7b4 TObjFunc
	var_483_int = 5585; // 0x7b6 PushI
	var_484_int = -1; // 0x7b7 PushI
	var_485_int = 6154; // 0x7b8 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x7b9 TObjFunc
	var_486_int = 5586; // 0x7bb PushI
	var_487_int = -1; // 0x7bc PushI
	var_488_int = 6155; // 0x7bd PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x7be TObjFunc
	return 0; // 0x7c0 Return
	
Label_1985:
	var_489_int = 6140; // 0x7c1 PushI
	var_490_bool = var_35_string == var_489_int; // 0x7c2 Eq
	if(var_490_bool == 0) goto Label_2003; // 0x7c3 JumpB
	var_491_string = ""; // 0x7c4 PushV
	var_491_string = "Neutral"; // 0x7c5 MovS
	func_1137(var_36_bool, var_491_string); // 0x7c6 Call
	var_492_int = 5572; // 0x7c8 PushI
	SetMessage(var_492_int); // 0x7c9 TObjFunc
	ClearReplies(); // 0x7cb TObjFunc
	var_493_int = 5573; // 0x7cd PushI
	var_494_int = 6099; // 0x7ce PushI
	var_495_int = 6141; // 0x7cf PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x7d0 TObjFunc
	return 0; // 0x7d2 Return
	
Label_2003:
	var_496_int = 6099; // 0x7d3 PushI
	var_497_bool = var_35_string == var_496_int; // 0x7d4 Eq
	if(var_497_bool == 0) goto Label_2021; // 0x7d5 JumpB
	var_498_string = ""; // 0x7d6 PushV
	var_498_string = "Neutral"; // 0x7d7 MovS
	func_1137(var_36_bool, var_498_string); // 0x7d8 Call
	var_499_int = 5535; // 0x7da PushI
	SetMessage(var_499_int); // 0x7db TObjFunc
	ClearReplies(); // 0x7dd TObjFunc
	var_500_int = 5536; // 0x7df PushI
	var_501_int = 6101; // 0x7e0 PushI
	var_502_int = 6100; // 0x7e1 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x7e2 TObjFunc
	return 0; // 0x7e4 Return
	
Label_2021:
	var_503_int = 6101; // 0x7e5 PushI
	var_504_bool = var_35_string == var_503_int; // 0x7e6 Eq
	if(var_504_bool == 0) goto Label_2044; // 0x7e7 JumpB
	var_505_string = ""; // 0x7e8 PushV
	var_505_string = "Neutral"; // 0x7e9 MovS
	func_1137(var_36_bool, var_505_string); // 0x7ea Call
	var_506_int = 5537; // 0x7ec PushI
	SetMessage(var_506_int); // 0x7ed TObjFunc
	ClearReplies(); // 0x7ef TObjFunc
	var_507_int = 5538; // 0x7f1 PushI
	var_508_int = 6103; // 0x7f2 PushI
	var_509_int = 6102; // 0x7f3 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x7f4 TObjFunc
	var_510_int = 5565; // 0x7f6 PushI
	var_511_int = 6132; // 0x7f7 PushI
	var_512_int = 6131; // 0x7f8 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x7f9 TObjFunc
	return 0; // 0x7fb Return
	
Label_2044:
	var_513_int = 6132; // 0x7fc PushI
	var_514_bool = var_35_string == var_513_int; // 0x7fd Eq
	if(var_514_bool == 0) goto Label_2067; // 0x7fe JumpB
	var_515_string = ""; // 0x7ff PushV
	var_515_string = "Neutral"; // 0x800 MovS
	func_1137(var_36_bool, var_515_string); // 0x801 Call
	var_516_int = 5566; // 0x803 PushI
	SetMessage(var_516_int); // 0x804 TObjFunc
	ClearReplies(); // 0x806 TObjFunc
	var_517_int = 5567; // 0x808 PushI
	var_518_int = 6103; // 0x809 PushI
	var_519_int = 6133; // 0x80a PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x80b TObjFunc
	var_520_int = 5568; // 0x80d PushI
	var_521_int = 6136; // 0x80e PushI
	var_522_int = 6135; // 0x80f PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x810 TObjFunc
	return 0; // 0x812 Return
	
Label_2067:
	var_523_int = 6136; // 0x813 PushI
	var_524_bool = var_35_string == var_523_int; // 0x814 Eq
	if(var_524_bool == 0) goto Label_2085; // 0x815 JumpB
	var_525_string = ""; // 0x816 PushV
	var_525_string = "Neutral"; // 0x817 MovS
	func_1137(var_36_bool, var_525_string); // 0x818 Call
	var_526_int = 5569; // 0x81a PushI
	SetMessage(var_526_int); // 0x81b TObjFunc
	ClearReplies(); // 0x81d TObjFunc
	var_527_int = 5570; // 0x81f PushI
	var_528_int = 6103; // 0x820 PushI
	var_529_int = 6137; // 0x821 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x822 TObjFunc
	return 0; // 0x824 Return
	
Label_2085:
	var_530_int = 6103; // 0x825 PushI
	var_531_bool = var_35_string == var_530_int; // 0x826 Eq
	if(var_531_bool == 0) goto Label_2103; // 0x827 JumpB
	var_532_string = ""; // 0x828 PushV
	var_532_string = "Neutral"; // 0x829 MovS
	func_1137(var_36_bool, var_532_string); // 0x82a Call
	var_533_int = 5539; // 0x82c PushI
	SetMessage(var_533_int); // 0x82d TObjFunc
	ClearReplies(); // 0x82f TObjFunc
	var_534_int = 5540; // 0x831 PushI
	var_535_int = 6105; // 0x832 PushI
	var_536_int = 6104; // 0x833 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x834 TObjFunc
	return 0; // 0x836 Return
	
Label_2103:
	var_537_int = 6105; // 0x837 PushI
	var_538_bool = var_35_string == var_537_int; // 0x838 Eq
	if(var_538_bool == 0) goto Label_2126; // 0x839 JumpB
	var_539_string = ""; // 0x83a PushV
	var_539_string = "Neutral"; // 0x83b MovS
	func_1137(var_36_bool, var_539_string); // 0x83c Call
	var_540_int = 5541; // 0x83e PushI
	SetMessage(var_540_int); // 0x83f TObjFunc
	ClearReplies(); // 0x841 TObjFunc
	var_541_int = 5542; // 0x843 PushI
	var_542_int = 6107; // 0x844 PushI
	var_543_int = 6106; // 0x845 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x846 TObjFunc
	var_544_int = 5551; // 0x848 PushI
	var_545_int = 6117; // 0x849 PushI
	var_546_int = 6116; // 0x84a PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x84b TObjFunc
	return 0; // 0x84d Return
	
Label_2126:
	var_547_int = 6117; // 0x84e PushI
	var_548_bool = var_35_string == var_547_int; // 0x84f Eq
	if(var_548_bool == 0) goto Label_2149; // 0x850 JumpB
	var_549_string = ""; // 0x851 PushV
	var_549_string = "Neutral"; // 0x852 MovS
	func_1137(var_36_bool, var_549_string); // 0x853 Call
	var_550_int = 5552; // 0x855 PushI
	SetMessage(var_550_int); // 0x856 TObjFunc
	ClearReplies(); // 0x858 TObjFunc
	var_551_int = 5553; // 0x85a PushI
	var_552_int = 6119; // 0x85b PushI
	var_553_int = 6118; // 0x85c PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x85d TObjFunc
	var_554_int = 5564; // 0x85f PushI
	var_555_int = 6111; // 0x860 PushI
	var_556_int = 6129; // 0x861 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x862 TObjFunc
	return 0; // 0x864 Return
	
Label_2149:
	var_557_int = 6119; // 0x865 PushI
	var_558_bool = var_35_string == var_557_int; // 0x866 Eq
	if(var_558_bool == 0) goto Label_2177; // 0x867 JumpB
	var_559_string = ""; // 0x868 PushV
	var_559_string = "Neutral"; // 0x869 MovS
	func_1137(var_36_bool, var_559_string); // 0x86a Call
	var_560_int = 5554; // 0x86c PushI
	SetMessage(var_560_int); // 0x86d TObjFunc
	ClearReplies(); // 0x86f TObjFunc
	var_561_int = 5555; // 0x871 PushI
	var_562_int = 6121; // 0x872 PushI
	var_563_int = 6120; // 0x873 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x874 TObjFunc
	var_564_int = 5559; // 0x876 PushI
	var_565_int = -1; // 0x877 PushI
	var_566_int = 6124; // 0x878 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x879 TObjFunc
	var_567_int = 5560; // 0x87b PushI
	var_568_int = 6126; // 0x87c PushI
	var_569_int = 6125; // 0x87d PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x87e TObjFunc
	return 0; // 0x880 Return
	
Label_2177:
	var_570_int = 6126; // 0x881 PushI
	var_571_bool = var_35_string == var_570_int; // 0x882 Eq
	if(var_571_bool == 0) goto Label_2200; // 0x883 JumpB
	var_572_string = ""; // 0x884 PushV
	var_572_string = "Neutral"; // 0x885 MovS
	func_1137(var_36_bool, var_572_string); // 0x886 Call
	var_573_int = 5561; // 0x888 PushI
	SetMessage(var_573_int); // 0x889 TObjFunc
	ClearReplies(); // 0x88b TObjFunc
	var_574_int = 5562; // 0x88d PushI
	var_575_int = -1; // 0x88e PushI
	var_576_int = 6127; // 0x88f PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x890 TObjFunc
	var_577_int = 5563; // 0x892 PushI
	var_578_int = -1; // 0x893 PushI
	var_579_int = 6128; // 0x894 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x895 TObjFunc
	return 0; // 0x897 Return
	
Label_2200:
	var_580_int = 6121; // 0x898 PushI
	var_581_bool = var_35_string == var_580_int; // 0x899 Eq
	if(var_581_bool == 0) goto Label_2223; // 0x89a JumpB
	var_582_string = ""; // 0x89b PushV
	var_582_string = "Neutral"; // 0x89c MovS
	func_1137(var_36_bool, var_582_string); // 0x89d Call
	var_583_int = 5556; // 0x89f PushI
	SetMessage(var_583_int); // 0x8a0 TObjFunc
	ClearReplies(); // 0x8a2 TObjFunc
	var_584_int = 5557; // 0x8a4 PushI
	var_585_int = -1; // 0x8a5 PushI
	var_586_int = 6122; // 0x8a6 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x8a7 TObjFunc
	var_587_int = 5558; // 0x8a9 PushI
	var_588_int = -1; // 0x8aa PushI
	var_589_int = 6123; // 0x8ab PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x8ac TObjFunc
	return 0; // 0x8ae Return
	
Label_2223:
	var_590_int = 6107; // 0x8af PushI
	var_591_bool = var_35_string == var_590_int; // 0x8b0 Eq
	if(var_591_bool == 0) goto Label_2246; // 0x8b1 JumpB
	var_592_string = ""; // 0x8b2 PushV
	var_592_string = "Neutral"; // 0x8b3 MovS
	func_1137(var_36_bool, var_592_string); // 0x8b4 Call
	var_593_int = 5543; // 0x8b6 PushI
	SetMessage(var_593_int); // 0x8b7 TObjFunc
	ClearReplies(); // 0x8b9 TObjFunc
	var_594_int = 5544; // 0x8bb PushI
	var_595_int = 6109; // 0x8bc PushI
	var_596_int = 6108; // 0x8bd PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x8be TObjFunc
	var_597_int = 5550; // 0x8c0 PushI
	var_598_int = 6111; // 0x8c1 PushI
	var_599_int = 6114; // 0x8c2 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x8c3 TObjFunc
	return 0; // 0x8c5 Return
	
Label_2246:
	var_600_int = 6109; // 0x8c6 PushI
	var_601_bool = var_35_string == var_600_int; // 0x8c7 Eq
	if(var_601_bool == 0) goto Label_2264; // 0x8c8 JumpB
	var_602_string = ""; // 0x8c9 PushV
	var_602_string = "Neutral"; // 0x8ca MovS
	func_1137(var_36_bool, var_602_string); // 0x8cb Call
	var_603_int = 5545; // 0x8cd PushI
	SetMessage(var_603_int); // 0x8ce TObjFunc
	ClearReplies(); // 0x8d0 TObjFunc
	var_604_int = 5546; // 0x8d2 PushI
	var_605_int = 6111; // 0x8d3 PushI
	var_606_int = 6110; // 0x8d4 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x8d5 TObjFunc
	return 0; // 0x8d7 Return
	
Label_2264:
	var_607_int = 6111; // 0x8d8 PushI
	var_608_bool = var_35_string == var_607_int; // 0x8d9 Eq
	if(var_608_bool == 0) goto Label_2287; // 0x8da JumpB
	var_609_string = ""; // 0x8db PushV
	var_609_string = "Neutral"; // 0x8dc MovS
	func_1137(var_36_bool, var_609_string); // 0x8dd Call
	var_610_int = 5547; // 0x8df PushI
	SetMessage(var_610_int); // 0x8e0 TObjFunc
	ClearReplies(); // 0x8e2 TObjFunc
	var_611_int = 5548; // 0x8e4 PushI
	var_612_int = -1; // 0x8e5 PushI
	var_613_int = 6112; // 0x8e6 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x8e7 TObjFunc
	var_614_int = 5549; // 0x8e9 PushI
	var_615_int = -1; // 0x8ea PushI
	var_616_int = 6113; // 0x8eb PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x8ec TObjFunc
	return 0; // 0x8ee Return
	
Label_2287:
	var_617_int = 6926; // 0x8ef PushI
	var_618_bool = var_35_string == var_617_int; // 0x8f0 Eq
	if(var_618_bool == 0) goto Label_2305; // 0x8f1 JumpB
	var_619_string = ""; // 0x8f2 PushV
	var_619_string = "Neutral"; // 0x8f3 MovS
	func_1137(var_36_bool, var_619_string); // 0x8f4 Call
	var_620_int = 6260; // 0x8f6 PushI
	SetMessage(var_620_int); // 0x8f7 TObjFunc
	ClearReplies(); // 0x8f9 TObjFunc
	var_621_int = 6261; // 0x8fb PushI
	var_622_int = 6924; // 0x8fc PushI
	var_623_int = 6927; // 0x8fd PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x8fe TObjFunc
	return 0; // 0x900 Return
	
Label_2305:
	var_624_int = 6921; // 0x901 PushI
	var_625_bool = var_35_string == var_624_int; // 0x902 Eq
	if(var_625_bool == 0) goto Label_2328; // 0x903 JumpB
	var_626_string = ""; // 0x904 PushV
	var_626_string = "Neutral"; // 0x905 MovS
	func_1137(var_36_bool, var_626_string); // 0x906 Call
	var_627_int = 6255; // 0x908 PushI
	SetMessage(var_627_int); // 0x909 TObjFunc
	ClearReplies(); // 0x90b TObjFunc
	var_628_int = 6256; // 0x90d PushI
	var_629_int = -1; // 0x90e PushI
	var_630_int = 6922; // 0x90f PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x910 TObjFunc
	var_631_int = 6257; // 0x912 PushI
	var_632_int = 6924; // 0x913 PushI
	var_633_int = 6923; // 0x914 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x915 TObjFunc
	return 0; // 0x917 Return
	
Label_2328:
	var_634_int = 6924; // 0x918 PushI
	var_635_bool = var_35_string == var_634_int; // 0x919 Eq
	if(var_635_bool == 0) goto Label_2346; // 0x91a JumpB
	var_636_string = ""; // 0x91b PushV
	var_636_string = "Neutral"; // 0x91c MovS
	func_1137(var_36_bool, var_636_string); // 0x91d Call
	var_637_int = 6258; // 0x91f PushI
	SetMessage(var_637_int); // 0x920 TObjFunc
	ClearReplies(); // 0x922 TObjFunc
	var_638_int = 6262; // 0x924 PushI
	var_639_int = -1; // 0x925 PushI
	var_640_int = 6929; // 0x926 PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x927 TObjFunc
	return 0; // 0x929 Return
	
Label_2346:
	var_3_string = 1; // 0x92a TMovB
	var_641_bool = 0; // 0x92b PushV
	func_4808(var_641_bool); // 0x92c Call
	if(var_641_bool == 0) goto Label_2354; // 0x92e JumpB
	lshStopAnimation(); // 0x92f Func
	goto Label_2356; // 0x931 Jump
	
Label_2356:
	return 0; // 0x934 Return
	
Label_2354:
	StopAnimation(); // 0x932 Func
	
Label_2358:
	return 0; // 0x936 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xa23 PushI
	if(var_37_int == 0) goto Label_3210; // 0xa24 JumpB
	func_4753(); // 0xa26 Call
	var_39_int = 15761; // 0xa28 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xa29 Eq
	if(var_40_bool == 0) goto Label_2613; // 0xa2a JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xa2b PushV
	var_41_object = var_1_object; // 0xa2c MovT
	var_42_object = var_0_object; // 0xa2d MovT
	func_4946(); // 0xa2e Call
	var_100_object = Obj(); var_101_object = Obj(); // 0xa30 PushV
	var_100_object = var_1_object; // 0xa31 MovT
	var_101_object = var_0_object; // 0xa32 MovT
	func_4955(); // 0xa33 Call
	
Label_2613:
	var_103_int = 15762; // 0xa35 PushI
	var_104_bool = var_36_bool == var_103_int; // 0xa36 Eq
	if(var_104_bool == 0) goto Label_2626; // 0xa37 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0xa38 PushV
	var_105_object = var_1_object; // 0xa39 MovT
	var_106_object = var_0_object; // 0xa3a MovT
	func_4946(); // 0xa3b Call
	var_107_object = Obj(); var_108_object = Obj(); // 0xa3d PushV
	var_107_object = var_1_object; // 0xa3e MovT
	var_108_object = var_0_object; // 0xa3f MovT
	func_4955(); // 0xa40 Call
	
Label_2626:
	var_109_int = 8183; // 0xa42 PushI
	var_110_bool = var_36_bool == var_109_int; // 0xa43 Eq
	if(var_110_bool == 0) goto Label_2639; // 0xa44 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0xa45 PushV
	var_111_object = var_1_object; // 0xa46 MovT
	var_112_object = var_0_object; // 0xa47 MovT
	func_4851(); // 0xa48 Call
	var_115_object = Obj(); var_116_object = Obj(); // 0xa4a PushV
	var_115_object = var_1_object; // 0xa4b MovT
	var_116_object = var_0_object; // 0xa4c MovT
	func_4863(); // 0xa4d Call
	
Label_2639:
	var_160_int = 8187; // 0xa4f PushI
	var_161_bool = var_36_bool == var_160_int; // 0xa50 Eq
	if(var_161_bool == 0) goto Label_2647; // 0xa51 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0xa52 PushV
	var_162_object = var_1_object; // 0xa53 MovT
	var_163_object = var_0_object; // 0xa54 MovT
	func_4851(); // 0xa55 Call
	
Label_2647:
	var_164_int = 8171; // 0xa57 PushI
	var_165_bool = var_36_bool == var_164_int; // 0xa58 Eq
	if(var_165_bool == 0) goto Label_2670; // 0xa59 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0xa5a PushV
	var_166_object = var_1_object; // 0xa5b MovT
	var_167_object = var_0_object; // 0xa5c MovT
	func_4857(); // 0xa5d Call
	var_170_object = Obj(); var_171_object = Obj(); // 0xa5f PushV
	var_170_object = var_1_object; // 0xa60 MovT
	var_171_object = var_0_object; // 0xa61 MovT
	func_4886(); // 0xa62 Call
	var_174_object = Obj(); var_175_object = Obj(); // 0xa64 PushV
	var_174_object = var_1_object; // 0xa65 MovT
	var_175_object = var_0_object; // 0xa66 MovT
	func_4845(); // 0xa67 Call
	var_178_object = Obj(); var_179_object = Obj(); // 0xa69 PushV
	var_178_object = var_1_object; // 0xa6a MovT
	var_179_object = var_0_object; // 0xa6b MovT
	func_4834(var_179_object); // 0xa6c Call
	
Label_2670:
	var_187_int = 8170; // 0xa6e PushI
	var_188_bool = var_36_bool == var_187_int; // 0xa6f Eq
	if(var_188_bool == 0) goto Label_2688; // 0xa70 JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0xa71 PushV
	var_189_object = var_1_object; // 0xa72 MovT
	var_190_object = var_0_object; // 0xa73 MovT
	func_4857(); // 0xa74 Call
	var_191_object = Obj(); var_192_object = Obj(); // 0xa76 PushV
	var_191_object = var_1_object; // 0xa77 MovT
	var_192_object = var_0_object; // 0xa78 MovT
	func_4845(); // 0xa79 Call
	var_193_object = Obj(); var_194_object = Obj(); // 0xa7b PushV
	var_193_object = var_1_object; // 0xa7c MovT
	var_194_object = var_0_object; // 0xa7d MovT
	func_4834(var_194_object); // 0xa7e Call
	
Label_2688:
	var_195_int = 15758; // 0xa80 PushI
	var_196_bool = var_35_string == var_195_int; // 0xa81 Eq
	if(var_196_bool == 0) goto Label_2809; // 0xa82 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0xa83 PushV
	var_198_object = var_1_object; // 0xa84 MovT
	func_5276(var_198_object); // 0xa85 Call
	if(var_197_bool == 0) goto Label_2716; // 0xa87 JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0xa88 PushV
	var_205_object = var_1_object; // 0xa89 MovT
	var_206_object = var_0_object; // 0xa8a MovT
	func_4940(); // 0xa8b Call
	var_209_string = ""; // 0xa8d PushV
	var_209_string = "Neutral"; // 0xa8e MovS
	func_2578(var_36_bool, var_209_string); // 0xa8f Call
	var_224_int = 14519; // 0xa91 PushI
	SetMessage(var_224_int); // 0xa92 TObjFunc
	ClearReplies(); // 0xa94 TObjFunc
	var_225_int = 14520; // 0xa96 PushI
	var_226_int = 15760; // 0xa97 PushI
	var_227_int = 15759; // 0xa98 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xa99 TObjFunc
	return 0; // 0xa9b Return
	
Label_2716:
	var_228_string = ""; // 0xa9c PushV
	var_228_string = "Neutral"; // 0xa9d MovS
	func_2578(var_36_bool, var_228_string); // 0xa9e Call
	var_229_int = 6887; // 0xaa0 PushI
	SetMessage(var_229_int); // 0xaa1 TObjFunc
	ClearReplies(); // 0xaa3 TObjFunc
	var_230_bool = 0; // 0xaa5 PushV
	var_230_bool = 0; // 0xaa6 MovB
	var_231_bool = 0; var_232_object = Obj(); // 0xaa7 PushV
	var_232_object = var_1_object; // 0xaa8 MovT
	func_5062(var_232_object); // 0xaa9 Call
	if(var_231_bool == 0) goto Label_2738; // 0xaab JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xaac PushV
	var_238_object = var_1_object; // 0xaad MovT
	func_5086(var_238_object); // 0xaae Call
	if(var_237_bool == 0) goto Label_2738; // 0xab0 JumpB
	var_230_bool = 1; // 0xab1 MovB
	
Label_2738:
	if(var_230_bool == 0) goto Label_2744; // 0xab2 JumpB
	var_243_int = 6888; // 0xab3 PushI
	var_244_int = 7595; // 0xab4 PushI
	var_245_int = 7594; // 0xab5 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xab6 TObjFunc
	
Label_2744:
	var_246_bool = 0; // 0xab8 PushV
	var_246_bool = 0; // 0xab9 MovB
	var_247_bool = 0; var_248_object = Obj(); // 0xaba PushV
	var_248_object = var_1_object; // 0xabb MovT
	func_5074(var_248_object); // 0xabc Call
	if(var_247_bool == 0) goto Label_2757; // 0xabe JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0xabf PushV
	var_254_object = var_1_object; // 0xac0 MovT
	func_5120(var_254_object); // 0xac1 Call
	if(var_253_bool == 0) goto Label_2757; // 0xac3 JumpB
	var_246_bool = 1; // 0xac4 MovB
	
Label_2757:
	if(var_246_bool == 0) goto Label_2763; // 0xac5 JumpB
	var_259_int = 6918; // 0xac6 PushI
	var_260_int = 7625; // 0xac7 PushI
	var_261_int = 7624; // 0xac8 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xac9 TObjFunc
	
Label_2763:
	var_262_int = 7400; // 0xacb PushI
	var_263_int = -1; // 0xacc PushI
	var_264_int = 8166; // 0xacd PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xace TObjFunc
	return 0; // 0xad0 Return
	
Label_2809:
	var_265_int = 10296; // 0xaf9 PushI
	var_266_bool = var_35_string == var_265_int; // 0xafa Eq
	if(var_266_bool == 0) goto Label_2832; // 0xafb JumpB
	var_267_string = ""; // 0xafc PushV
	var_267_string = "Neutral"; // 0xafd MovS
	func_2578(var_36_bool, var_267_string); // 0xafe Call
	var_268_int = 9372; // 0xb00 PushI
	SetMessage(var_268_int); // 0xb01 TObjFunc
	ClearReplies(); // 0xb03 TObjFunc
	var_269_int = 9373; // 0xb05 PushI
	var_270_int = 10298; // 0xb06 PushI
	var_271_int = 10297; // 0xb07 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xb08 TObjFunc
	var_272_int = 9376; // 0xb0a PushI
	var_273_int = 10288; // 0xb0b PushI
	var_274_int = 10300; // 0xb0c PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xb0d TObjFunc
	return 0; // 0xb0f Return
	
Label_2832:
	var_275_int = 10298; // 0xb10 PushI
	var_276_bool = var_35_string == var_275_int; // 0xb11 Eq
	if(var_276_bool == 0) goto Label_2850; // 0xb12 JumpB
	var_277_string = ""; // 0xb13 PushV
	var_277_string = "Neutral"; // 0xb14 MovS
	func_2578(var_36_bool, var_277_string); // 0xb15 Call
	var_278_int = 9374; // 0xb17 PushI
	SetMessage(var_278_int); // 0xb18 TObjFunc
	ClearReplies(); // 0xb1a TObjFunc
	var_279_int = 9375; // 0xb1c PushI
	var_280_int = -1; // 0xb1d PushI
	var_281_int = 10299; // 0xb1e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xb1f TObjFunc
	return 0; // 0xb21 Return
	
Label_2850:
	var_282_int = 10288; // 0xb22 PushI
	var_283_bool = var_35_string == var_282_int; // 0xb23 Eq
	if(var_283_bool == 0) goto Label_2873; // 0xb24 JumpB
	var_284_string = ""; // 0xb25 PushV
	var_284_string = "Neutral"; // 0xb26 MovS
	func_2578(var_36_bool, var_284_string); // 0xb27 Call
	var_285_int = 9364; // 0xb29 PushI
	SetMessage(var_285_int); // 0xb2a TObjFunc
	ClearReplies(); // 0xb2c TObjFunc
	var_286_int = 9365; // 0xb2e PushI
	var_287_int = 10290; // 0xb2f PushI
	var_288_int = 10289; // 0xb30 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xb31 TObjFunc
	var_289_int = 9368; // 0xb33 PushI
	var_290_int = 10293; // 0xb34 PushI
	var_291_int = 10292; // 0xb35 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xb36 TObjFunc
	return 0; // 0xb38 Return
	
Label_2873:
	var_292_int = 10293; // 0xb39 PushI
	var_293_bool = var_35_string == var_292_int; // 0xb3a Eq
	if(var_293_bool == 0) goto Label_2891; // 0xb3b JumpB
	var_294_string = ""; // 0xb3c PushV
	var_294_string = "Neutral"; // 0xb3d MovS
	func_2578(var_36_bool, var_294_string); // 0xb3e Call
	var_295_int = 9369; // 0xb40 PushI
	SetMessage(var_295_int); // 0xb41 TObjFunc
	ClearReplies(); // 0xb43 TObjFunc
	var_296_int = 9370; // 0xb45 PushI
	var_297_int = -1; // 0xb46 PushI
	var_298_int = 10294; // 0xb47 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xb48 TObjFunc
	return 0; // 0xb4a Return
	
Label_2891:
	var_299_int = 10290; // 0xb4b PushI
	var_300_bool = var_35_string == var_299_int; // 0xb4c Eq
	if(var_300_bool == 0) goto Label_2909; // 0xb4d JumpB
	var_301_string = ""; // 0xb4e PushV
	var_301_string = "Neutral"; // 0xb4f MovS
	func_2578(var_36_bool, var_301_string); // 0xb50 Call
	var_302_int = 9366; // 0xb52 PushI
	SetMessage(var_302_int); // 0xb53 TObjFunc
	ClearReplies(); // 0xb55 TObjFunc
	var_303_int = 9367; // 0xb57 PushI
	var_304_int = -1; // 0xb58 PushI
	var_305_int = 10291; // 0xb59 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0xb5a TObjFunc
	return 0; // 0xb5c Return
	
Label_2909:
	var_306_int = 10275; // 0xb5d PushI
	var_307_bool = var_35_string == var_306_int; // 0xb5e Eq
	if(var_307_bool == 0) goto Label_2937; // 0xb5f JumpB
	var_308_string = ""; // 0xb60 PushV
	var_308_string = "Neutral"; // 0xb61 MovS
	func_2578(var_36_bool, var_308_string); // 0xb62 Call
	var_309_int = 9353; // 0xb64 PushI
	SetMessage(var_309_int); // 0xb65 TObjFunc
	ClearReplies(); // 0xb67 TObjFunc
	var_310_int = 9354; // 0xb69 PushI
	var_311_int = 10277; // 0xb6a PushI
	var_312_int = 10276; // 0xb6b PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xb6c TObjFunc
	var_313_int = 9359; // 0xb6e PushI
	var_314_int = 10277; // 0xb6f PushI
	var_315_int = 10281; // 0xb70 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xb71 TObjFunc
	var_316_int = 9360; // 0xb73 PushI
	var_317_int = -1; // 0xb74 PushI
	var_318_int = 10283; // 0xb75 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xb76 TObjFunc
	return 0; // 0xb78 Return
	
Label_2937:
	var_319_int = 10277; // 0xb79 PushI
	var_320_bool = var_35_string == var_319_int; // 0xb7a Eq
	if(var_320_bool == 0) goto Label_2965; // 0xb7b JumpB
	var_321_string = ""; // 0xb7c PushV
	var_321_string = "Neutral"; // 0xb7d MovS
	func_2578(var_36_bool, var_321_string); // 0xb7e Call
	var_322_int = 9355; // 0xb80 PushI
	SetMessage(var_322_int); // 0xb81 TObjFunc
	ClearReplies(); // 0xb83 TObjFunc
	var_323_int = 9356; // 0xb85 PushI
	var_324_int = -1; // 0xb86 PushI
	var_325_int = 10278; // 0xb87 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xb88 TObjFunc
	var_326_int = 9357; // 0xb8a PushI
	var_327_int = -1; // 0xb8b PushI
	var_328_int = 10279; // 0xb8c PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xb8d TObjFunc
	var_329_int = 9358; // 0xb8f PushI
	var_330_int = -1; // 0xb90 PushI
	var_331_int = 10280; // 0xb91 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0xb92 TObjFunc
	return 0; // 0xb94 Return
	
Label_2965:
	var_332_int = 7625; // 0xb95 PushI
	var_333_bool = var_35_string == var_332_int; // 0xb96 Eq
	if(var_333_bool == 0) goto Label_2983; // 0xb97 JumpB
	var_334_string = ""; // 0xb98 PushV
	var_334_string = "Neutral"; // 0xb99 MovS
	func_2578(var_36_bool, var_334_string); // 0xb9a Call
	var_335_int = 6919; // 0xb9c PushI
	SetMessage(var_335_int); // 0xb9d TObjFunc
	ClearReplies(); // 0xb9f TObjFunc
	var_336_int = 7401; // 0xba1 PushI
	var_337_int = 8168; // 0xba2 PushI
	var_338_int = 8167; // 0xba3 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xba4 TObjFunc
	return 0; // 0xba6 Return
	
Label_2983:
	var_339_int = 8168; // 0xba7 PushI
	var_340_bool = var_35_string == var_339_int; // 0xba8 Eq
	if(var_340_bool == 0) goto Label_3011; // 0xba9 JumpB
	var_341_string = ""; // 0xbaa PushV
	var_341_string = "Neutral"; // 0xbab MovS
	func_2578(var_36_bool, var_341_string); // 0xbac Call
	var_342_int = 7402; // 0xbae PushI
	SetMessage(var_342_int); // 0xbaf TObjFunc
	ClearReplies(); // 0xbb1 TObjFunc
	var_343_bool = 0; var_344_object = Obj(); // 0xbb3 PushV
	var_344_object = var_1_object; // 0xbb4 MovT
	func_5108(var_344_object); // 0xbb5 Call
	if(var_343_bool == 0) goto Label_3005; // 0xbb7 JumpB
	var_349_int = 6920; // 0xbb8 PushI
	var_350_int = 7628; // 0xbb9 PushI
	var_351_int = 7626; // 0xbba PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xbbb TObjFunc
	
Label_3005:
	var_352_int = 6921; // 0xbbd PushI
	var_353_int = 8169; // 0xbbe PushI
	var_354_int = 7627; // 0xbbf PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xbc0 TObjFunc
	return 0; // 0xbc2 Return
	
Label_3011:
	var_355_int = 8169; // 0xbc3 PushI
	var_356_bool = var_35_string == var_355_int; // 0xbc4 Eq
	if(var_356_bool == 0) goto Label_3029; // 0xbc5 JumpB
	var_357_string = ""; // 0xbc6 PushV
	var_357_string = "Neutral"; // 0xbc7 MovS
	func_2578(var_36_bool, var_357_string); // 0xbc8 Call
	var_358_int = 7403; // 0xbca PushI
	SetMessage(var_358_int); // 0xbcb TObjFunc
	ClearReplies(); // 0xbcd TObjFunc
	var_359_int = 7404; // 0xbcf PushI
	var_360_int = -1; // 0xbd0 PushI
	var_361_int = 8170; // 0xbd1 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0xbd2 TObjFunc
	return 0; // 0xbd4 Return
	
Label_3029:
	var_362_int = 7628; // 0xbd5 PushI
	var_363_bool = var_35_string == var_362_int; // 0xbd6 Eq
	if(var_363_bool == 0) goto Label_3047; // 0xbd7 JumpB
	var_364_string = ""; // 0xbd8 PushV
	var_364_string = "Neutral"; // 0xbd9 MovS
	func_2578(var_36_bool, var_364_string); // 0xbda Call
	var_365_int = 6922; // 0xbdc PushI
	SetMessage(var_365_int); // 0xbdd TObjFunc
	ClearReplies(); // 0xbdf TObjFunc
	var_366_int = 7405; // 0xbe1 PushI
	var_367_int = -1; // 0xbe2 PushI
	var_368_int = 8171; // 0xbe3 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xbe4 TObjFunc
	return 0; // 0xbe6 Return
	
Label_3047:
	var_369_int = 7595; // 0xbe7 PushI
	var_370_bool = var_35_string == var_369_int; // 0xbe8 Eq
	if(var_370_bool == 0) goto Label_3070; // 0xbe9 JumpB
	var_371_string = ""; // 0xbea PushV
	var_371_string = "Neutral"; // 0xbeb MovS
	func_2578(var_36_bool, var_371_string); // 0xbec Call
	var_372_int = 6889; // 0xbee PushI
	SetMessage(var_372_int); // 0xbef TObjFunc
	ClearReplies(); // 0xbf1 TObjFunc
	var_373_int = 7406; // 0xbf3 PushI
	var_374_int = 8174; // 0xbf4 PushI
	var_375_int = 8172; // 0xbf5 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0xbf6 TObjFunc
	var_376_int = 6890; // 0xbf8 PushI
	var_377_int = 7597; // 0xbf9 PushI
	var_378_int = 7596; // 0xbfa PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0xbfb TObjFunc
	return 0; // 0xbfd Return
	
Label_3070:
	var_379_int = 7597; // 0xbfe PushI
	var_380_bool = var_35_string == var_379_int; // 0xbff Eq
	if(var_380_bool == 0) goto Label_3093; // 0xc00 JumpB
	var_381_string = ""; // 0xc01 PushV
	var_381_string = "Neutral"; // 0xc02 MovS
	func_2578(var_36_bool, var_381_string); // 0xc03 Call
	var_382_int = 6891; // 0xc05 PushI
	SetMessage(var_382_int); // 0xc06 TObjFunc
	ClearReplies(); // 0xc08 TObjFunc
	var_383_int = 7407; // 0xc0a PushI
	var_384_int = 8184; // 0xc0b PushI
	var_385_int = 8173; // 0xc0c PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xc0d TObjFunc
	var_386_int = 7417; // 0xc0f PushI
	var_387_int = 8184; // 0xc10 PushI
	var_388_int = 8185; // 0xc11 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xc12 TObjFunc
	return 0; // 0xc14 Return
	
Label_3093:
	var_389_int = 8184; // 0xc15 PushI
	var_390_bool = var_35_string == var_389_int; // 0xc16 Eq
	if(var_390_bool == 0) goto Label_3111; // 0xc17 JumpB
	var_391_string = ""; // 0xc18 PushV
	var_391_string = "Neutral"; // 0xc19 MovS
	func_2578(var_36_bool, var_391_string); // 0xc1a Call
	var_392_int = 7416; // 0xc1c PushI
	SetMessage(var_392_int); // 0xc1d TObjFunc
	ClearReplies(); // 0xc1f TObjFunc
	var_393_int = 7418; // 0xc21 PushI
	var_394_int = -1; // 0xc22 PushI
	var_395_int = 8187; // 0xc23 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xc24 TObjFunc
	return 0; // 0xc26 Return
	
Label_3111:
	var_396_int = 8174; // 0xc27 PushI
	var_397_bool = var_35_string == var_396_int; // 0xc28 Eq
	if(var_397_bool == 0) goto Label_3139; // 0xc29 JumpB
	var_398_string = ""; // 0xc2a PushV
	var_398_string = "Neutral"; // 0xc2b MovS
	func_2578(var_36_bool, var_398_string); // 0xc2c Call
	var_399_int = 7408; // 0xc2e PushI
	SetMessage(var_399_int); // 0xc2f TObjFunc
	ClearReplies(); // 0xc31 TObjFunc
	var_400_int = 7409; // 0xc33 PushI
	var_401_int = 8178; // 0xc34 PushI
	var_402_int = 8175; // 0xc35 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0xc36 TObjFunc
	var_403_int = 7410; // 0xc38 PushI
	var_404_int = 8178; // 0xc39 PushI
	var_405_int = 8176; // 0xc3a PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xc3b TObjFunc
	var_406_int = 7411; // 0xc3d PushI
	var_407_int = 8178; // 0xc3e PushI
	var_408_int = 8177; // 0xc3f PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0xc40 TObjFunc
	return 0; // 0xc42 Return
	
Label_3139:
	var_409_int = 8178; // 0xc43 PushI
	var_410_bool = var_35_string == var_409_int; // 0xc44 Eq
	if(var_410_bool == 0) goto Label_3157; // 0xc45 JumpB
	var_411_string = ""; // 0xc46 PushV
	var_411_string = "Neutral"; // 0xc47 MovS
	func_2578(var_36_bool, var_411_string); // 0xc48 Call
	var_412_int = 7412; // 0xc4a PushI
	SetMessage(var_412_int); // 0xc4b TObjFunc
	ClearReplies(); // 0xc4d TObjFunc
	var_413_int = 7413; // 0xc4f PushI
	var_414_int = 8182; // 0xc50 PushI
	var_415_int = 8181; // 0xc51 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0xc52 TObjFunc
	return 0; // 0xc54 Return
	
Label_3157:
	var_416_int = 8182; // 0xc55 PushI
	var_417_bool = var_35_string == var_416_int; // 0xc56 Eq
	if(var_417_bool == 0) goto Label_3175; // 0xc57 JumpB
	var_418_string = ""; // 0xc58 PushV
	var_418_string = "Neutral"; // 0xc59 MovS
	func_2578(var_36_bool, var_418_string); // 0xc5a Call
	var_419_int = 7414; // 0xc5c PushI
	SetMessage(var_419_int); // 0xc5d TObjFunc
	ClearReplies(); // 0xc5f TObjFunc
	var_420_int = 7415; // 0xc61 PushI
	var_421_int = -1; // 0xc62 PushI
	var_422_int = 8183; // 0xc63 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xc64 TObjFunc
	return 0; // 0xc66 Return
	
Label_3175:
	var_423_int = 15760; // 0xc67 PushI
	var_424_bool = var_35_string == var_423_int; // 0xc68 Eq
	if(var_424_bool == 0) goto Label_3198; // 0xc69 JumpB
	var_425_string = ""; // 0xc6a PushV
	var_425_string = "Neutral"; // 0xc6b MovS
	func_2578(var_36_bool, var_425_string); // 0xc6c Call
	var_426_int = 14521; // 0xc6e PushI
	SetMessage(var_426_int); // 0xc6f TObjFunc
	ClearReplies(); // 0xc71 TObjFunc
	var_427_int = 14522; // 0xc73 PushI
	var_428_int = -1; // 0xc74 PushI
	var_429_int = 15761; // 0xc75 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0xc76 TObjFunc
	var_430_int = 14523; // 0xc78 PushI
	var_431_int = -1; // 0xc79 PushI
	var_432_int = 15762; // 0xc7a PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0xc7b TObjFunc
	return 0; // 0xc7d Return
	
Label_3198:
	var_3_string = 1; // 0xc7e TMovB
	var_433_bool = 0; // 0xc7f PushV
	func_4808(var_433_bool); // 0xc80 Call
	if(var_433_bool == 0) goto Label_3206; // 0xc82 JumpB
	lshStopAnimation(); // 0xc83 Func
	goto Label_3208; // 0xc85 Jump
	
Label_3208:
	return 0; // 0xc88 Return
	
Label_3206:
	StopAnimation(); // 0xc86 Func
	
Label_3210:
	return 0; // 0xc8a Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xd2e PushI
	if(var_37_int == 0) goto Label_3583; // 0xd2f JumpB
	func_4753(); // 0xd31 Call
	var_39_int = 13469; // 0xd33 PushI
	var_40_bool = var_35_string == var_39_int; // 0xd34 Eq
	if(var_40_bool == 0) goto Label_3427; // 0xd35 JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0xd36 PushV
	var_42_object = var_1_object; // 0xd37 MovT
	func_5180(var_42_object); // 0xd38 Call
	if(var_41_bool == 0) goto Label_3412; // 0xd3a JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xd3b PushV
	var_49_object = var_1_object; // 0xd3c MovT
	var_50_object = var_0_object; // 0xd3d MovT
	func_4910(); // 0xd3e Call
	var_53_string = ""; // 0xd40 PushV
	var_53_string = "Neutral"; // 0xd41 MovS
	func_3357(var_36_bool, var_53_string); // 0xd42 Call
	var_68_int = 12310; // 0xd44 PushI
	SetMessage(var_68_int); // 0xd45 TObjFunc
	ClearReplies(); // 0xd47 TObjFunc
	var_69_int = 12311; // 0xd49 PushI
	var_70_int = 13471; // 0xd4a PushI
	var_71_int = 13470; // 0xd4b PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xd4c TObjFunc
	var_72_int = 12313; // 0xd4e PushI
	var_73_int = 13473; // 0xd4f PushI
	var_74_int = 13472; // 0xd50 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xd51 TObjFunc
	return 0; // 0xd53 Return
	
Label_3412:
	var_75_string = ""; // 0xd54 PushV
	var_75_string = "Neutral"; // 0xd55 MovS
	func_3357(var_36_bool, var_75_string); // 0xd56 Call
	var_76_int = 13777; // 0xd58 PushI
	SetMessage(var_76_int); // 0xd59 TObjFunc
	ClearReplies(); // 0xd5b TObjFunc
	var_77_int = 13778; // 0xd5d PushI
	var_78_int = -1; // 0xd5e PushI
	var_79_int = 15014; // 0xd5f PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xd60 TObjFunc
	return 0; // 0xd62 Return
	
Label_3427:
	var_80_int = 13473; // 0xd63 PushI
	var_81_bool = var_35_string == var_80_int; // 0xd64 Eq
	if(var_81_bool == 0) goto Label_3445; // 0xd65 JumpB
	var_82_string = ""; // 0xd66 PushV
	var_82_string = "Neutral"; // 0xd67 MovS
	func_3357(var_36_bool, var_82_string); // 0xd68 Call
	var_83_int = 12314; // 0xd6a PushI
	SetMessage(var_83_int); // 0xd6b TObjFunc
	ClearReplies(); // 0xd6d TObjFunc
	var_84_int = 12315; // 0xd6f PushI
	var_85_int = 13475; // 0xd70 PushI
	var_86_int = 13474; // 0xd71 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xd72 TObjFunc
	return 0; // 0xd74 Return
	
Label_3445:
	var_87_int = 13475; // 0xd75 PushI
	var_88_bool = var_35_string == var_87_int; // 0xd76 Eq
	if(var_88_bool == 0) goto Label_3463; // 0xd77 JumpB
	var_89_string = ""; // 0xd78 PushV
	var_89_string = "Neutral"; // 0xd79 MovS
	func_3357(var_36_bool, var_89_string); // 0xd7a Call
	var_90_int = 12316; // 0xd7c PushI
	SetMessage(var_90_int); // 0xd7d TObjFunc
	ClearReplies(); // 0xd7f TObjFunc
	var_91_int = 12317; // 0xd81 PushI
	var_92_int = 13477; // 0xd82 PushI
	var_93_int = 13476; // 0xd83 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xd84 TObjFunc
	return 0; // 0xd86 Return
	
Label_3463:
	var_94_int = 13477; // 0xd87 PushI
	var_95_bool = var_35_string == var_94_int; // 0xd88 Eq
	if(var_95_bool == 0) goto Label_3481; // 0xd89 JumpB
	var_96_string = ""; // 0xd8a PushV
	var_96_string = "Neutral"; // 0xd8b MovS
	func_3357(var_36_bool, var_96_string); // 0xd8c Call
	var_97_int = 12318; // 0xd8e PushI
	SetMessage(var_97_int); // 0xd8f TObjFunc
	ClearReplies(); // 0xd91 TObjFunc
	var_98_int = 12319; // 0xd93 PushI
	var_99_int = 13482; // 0xd94 PushI
	var_100_int = 13478; // 0xd95 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xd96 TObjFunc
	return 0; // 0xd98 Return
	
Label_3481:
	var_101_int = 13482; // 0xd99 PushI
	var_102_bool = var_35_string == var_101_int; // 0xd9a Eq
	if(var_102_bool == 0) goto Label_3499; // 0xd9b JumpB
	var_103_string = ""; // 0xd9c PushV
	var_103_string = "Neutral"; // 0xd9d MovS
	func_3357(var_36_bool, var_103_string); // 0xd9e Call
	var_104_int = 12323; // 0xda0 PushI
	SetMessage(var_104_int); // 0xda1 TObjFunc
	ClearReplies(); // 0xda3 TObjFunc
	var_105_int = 12324; // 0xda5 PushI
	var_106_int = 13484; // 0xda6 PushI
	var_107_int = 13483; // 0xda7 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xda8 TObjFunc
	return 0; // 0xdaa Return
	
Label_3499:
	var_108_int = 13484; // 0xdab PushI
	var_109_bool = var_35_string == var_108_int; // 0xdac Eq
	if(var_109_bool == 0) goto Label_3517; // 0xdad JumpB
	var_110_string = ""; // 0xdae PushV
	var_110_string = "Neutral"; // 0xdaf MovS
	func_3357(var_36_bool, var_110_string); // 0xdb0 Call
	var_111_int = 12325; // 0xdb2 PushI
	SetMessage(var_111_int); // 0xdb3 TObjFunc
	ClearReplies(); // 0xdb5 TObjFunc
	var_112_int = 12326; // 0xdb7 PushI
	var_113_int = 13486; // 0xdb8 PushI
	var_114_int = 13485; // 0xdb9 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xdba TObjFunc
	return 0; // 0xdbc Return
	
Label_3517:
	var_115_int = 13486; // 0xdbd PushI
	var_116_bool = var_35_string == var_115_int; // 0xdbe Eq
	if(var_116_bool == 0) goto Label_3535; // 0xdbf JumpB
	var_117_string = ""; // 0xdc0 PushV
	var_117_string = "Neutral"; // 0xdc1 MovS
	func_3357(var_36_bool, var_117_string); // 0xdc2 Call
	var_118_int = 12327; // 0xdc4 PushI
	SetMessage(var_118_int); // 0xdc5 TObjFunc
	ClearReplies(); // 0xdc7 TObjFunc
	var_119_int = 12328; // 0xdc9 PushI
	var_120_int = -1; // 0xdca PushI
	var_121_int = 13487; // 0xdcb PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xdcc TObjFunc
	return 0; // 0xdce Return
	
Label_3535:
	var_122_int = 13471; // 0xdcf PushI
	var_123_bool = var_35_string == var_122_int; // 0xdd0 Eq
	if(var_123_bool == 0) goto Label_3553; // 0xdd1 JumpB
	var_124_string = ""; // 0xdd2 PushV
	var_124_string = "Neutral"; // 0xdd3 MovS
	func_3357(var_36_bool, var_124_string); // 0xdd4 Call
	var_125_int = 12312; // 0xdd6 PushI
	SetMessage(var_125_int); // 0xdd7 TObjFunc
	ClearReplies(); // 0xdd9 TObjFunc
	var_126_int = 12320; // 0xddb PushI
	var_127_int = 13480; // 0xddc PushI
	var_128_int = 13479; // 0xddd PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xdde TObjFunc
	return 0; // 0xde0 Return
	
Label_3553:
	var_129_int = 13480; // 0xde1 PushI
	var_130_bool = var_35_string == var_129_int; // 0xde2 Eq
	if(var_130_bool == 0) goto Label_3571; // 0xde3 JumpB
	var_131_string = ""; // 0xde4 PushV
	var_131_string = "Neutral"; // 0xde5 MovS
	func_3357(var_36_bool, var_131_string); // 0xde6 Call
	var_132_int = 12321; // 0xde8 PushI
	SetMessage(var_132_int); // 0xde9 TObjFunc
	ClearReplies(); // 0xdeb TObjFunc
	var_133_int = 12322; // 0xded PushI
	var_134_int = -1; // 0xdee PushI
	var_135_int = 13481; // 0xdef PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xdf0 TObjFunc
	return 0; // 0xdf2 Return
	
Label_3571:
	var_3_string = 1; // 0xdf3 TMovB
	var_136_bool = 0; // 0xdf4 PushV
	func_4808(var_136_bool); // 0xdf5 Call
	if(var_136_bool == 0) goto Label_3579; // 0xdf7 JumpB
	lshStopAnimation(); // 0xdf8 Func
	goto Label_3581; // 0xdfa Jump
	
Label_3581:
	return 0; // 0xdfd Return
	
Label_3579:
	StopAnimation(); // 0xdfb Func
	
Label_3583:
	return 0; // 0xdff Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xeb7 PushI
	if(var_37_int == 0) goto Label_3932; // 0xeb8 JumpB
	func_4753(); // 0xeba Call
	var_39_int = 14178; // 0xebc PushI
	var_40_bool = var_36_bool == var_39_int; // 0xebd Eq
	if(var_40_bool == 0) goto Label_3780; // 0xebe JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xebf PushV
	var_41_object = var_1_object; // 0xec0 MovT
	var_42_object = var_0_object; // 0xec1 MovT
	func_4996(); // 0xec2 Call
	
Label_3780:
	var_45_int = 14094; // 0xec4 PushI
	var_46_bool = var_35_string == var_45_int; // 0xec5 Eq
	if(var_46_bool == 0) goto Label_3848; // 0xec6 JumpB
	var_47_bool = 0; // 0xec7 PushV
	var_47_bool = 0; // 0xec8 MovB
	var_48_bool = 0; // 0xec9 PushV
	var_48_bool = 0; // 0xeca MovB
	var_49_bool = 0; var_50_object = Obj(); // 0xecb PushV
	var_50_object = var_1_object; // 0xecc MovT
	func_5372(var_50_object); // 0xecd Call
	if(var_49_bool == 0) goto Label_3799; // 0xecf JumpB
	var_57_bool = 0; var_58_object = Obj(); // 0xed0 PushV
	var_58_object = var_1_object; // 0xed1 MovT
	func_5360(var_58_object); // 0xed2 Call
	var_63_bool = var_57_bool == 0; // 0xed4 Not
	if(var_63_bool == 0) goto Label_3799; // 0xed5 JumpB
	var_48_bool = 1; // 0xed6 MovB
	
Label_3799:
	if(var_48_bool == 0) goto Label_3807; // 0xed7 JumpB
	var_64_bool = 0; var_65_object = Obj(); // 0xed8 PushV
	var_65_object = var_1_object; // 0xed9 MovT
	func_5348(var_65_object); // 0xeda Call
	var_70_bool = var_64_bool == 0; // 0xedc Not
	if(var_70_bool == 0) goto Label_3807; // 0xedd JumpB
	var_47_bool = 1; // 0xede MovB
	
Label_3807:
	if(var_47_bool == 0) goto Label_3833; // 0xedf JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0xee0 PushV
	var_71_object = var_1_object; // 0xee1 MovT
	var_72_object = var_0_object; // 0xee2 MovT
	func_4990(); // 0xee3 Call
	var_75_string = ""; // 0xee5 PushV
	var_75_string = "Neutral"; // 0xee6 MovS
	func_3750(var_36_bool, var_75_string); // 0xee7 Call
	var_90_int = 12892; // 0xee9 PushI
	SetMessage(var_90_int); // 0xeea TObjFunc
	ClearReplies(); // 0xeec TObjFunc
	var_91_int = 12893; // 0xeee PushI
	var_92_int = 14096; // 0xeef PushI
	var_93_int = 14095; // 0xef0 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xef1 TObjFunc
	var_94_int = 12969; // 0xef3 PushI
	var_95_int = 14175; // 0xef4 PushI
	var_96_int = 14174; // 0xef5 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xef6 TObjFunc
	return 0; // 0xef8 Return
	
Label_3833:
	var_97_string = ""; // 0xef9 PushV
	var_97_string = "Neutral"; // 0xefa MovS
	func_3750(var_36_bool, var_97_string); // 0xefb Call
	var_98_int = 12974; // 0xefd PushI
	SetMessage(var_98_int); // 0xefe TObjFunc
	ClearReplies(); // 0xf00 TObjFunc
	var_99_int = 12975; // 0xf02 PushI
	var_100_int = -1; // 0xf03 PushI
	var_101_int = 14180; // 0xf04 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xf05 TObjFunc
	return 0; // 0xf07 Return
	
Label_3848:
	var_102_int = 14175; // 0xf08 PushI
	var_103_bool = var_35_string == var_102_int; // 0xf09 Eq
	if(var_103_bool == 0) goto Label_3866; // 0xf0a JumpB
	var_104_string = ""; // 0xf0b PushV
	var_104_string = "Neutral"; // 0xf0c MovS
	func_3750(var_36_bool, var_104_string); // 0xf0d Call
	var_105_int = 12970; // 0xf0f PushI
	SetMessage(var_105_int); // 0xf10 TObjFunc
	ClearReplies(); // 0xf12 TObjFunc
	var_106_int = 12971; // 0xf14 PushI
	var_107_int = 14177; // 0xf15 PushI
	var_108_int = 14176; // 0xf16 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0xf17 TObjFunc
	return 0; // 0xf19 Return
	
Label_3866:
	var_109_int = 14177; // 0xf1a PushI
	var_110_bool = var_35_string == var_109_int; // 0xf1b Eq
	if(var_110_bool == 0) goto Label_3884; // 0xf1c JumpB
	var_111_string = ""; // 0xf1d PushV
	var_111_string = "Neutral"; // 0xf1e MovS
	func_3750(var_36_bool, var_111_string); // 0xf1f Call
	var_112_int = 12972; // 0xf21 PushI
	SetMessage(var_112_int); // 0xf22 TObjFunc
	ClearReplies(); // 0xf24 TObjFunc
	var_113_int = 12973; // 0xf26 PushI
	var_114_int = -1; // 0xf27 PushI
	var_115_int = 14178; // 0xf28 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xf29 TObjFunc
	return 0; // 0xf2b Return
	
Label_3884:
	var_116_int = 14096; // 0xf2c PushI
	var_117_bool = var_35_string == var_116_int; // 0xf2d Eq
	if(var_117_bool == 0) goto Label_3902; // 0xf2e JumpB
	var_118_string = ""; // 0xf2f PushV
	var_118_string = "Neutral"; // 0xf30 MovS
	func_3750(var_36_bool, var_118_string); // 0xf31 Call
	var_119_int = 12894; // 0xf33 PushI
	SetMessage(var_119_int); // 0xf34 TObjFunc
	ClearReplies(); // 0xf36 TObjFunc
	var_120_int = 12895; // 0xf38 PushI
	var_121_int = 14098; // 0xf39 PushI
	var_122_int = 14097; // 0xf3a PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xf3b TObjFunc
	return 0; // 0xf3d Return
	
Label_3902:
	var_123_int = 14098; // 0xf3e PushI
	var_124_bool = var_35_string == var_123_int; // 0xf3f Eq
	if(var_124_bool == 0) goto Label_3920; // 0xf40 JumpB
	var_125_string = ""; // 0xf41 PushV
	var_125_string = "Neutral"; // 0xf42 MovS
	func_3750(var_36_bool, var_125_string); // 0xf43 Call
	var_126_int = 12896; // 0xf45 PushI
	SetMessage(var_126_int); // 0xf46 TObjFunc
	ClearReplies(); // 0xf48 TObjFunc
	var_127_int = 12897; // 0xf4a PushI
	var_128_int = 14175; // 0xf4b PushI
	var_129_int = 14099; // 0xf4c PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xf4d TObjFunc
	return 0; // 0xf4f Return
	
Label_3920:
	var_3_string = 1; // 0xf50 TMovB
	var_130_bool = 0; // 0xf51 PushV
	func_4808(var_130_bool); // 0xf52 Call
	if(var_130_bool == 0) goto Label_3928; // 0xf54 JumpB
	lshStopAnimation(); // 0xf55 Func
	goto Label_3930; // 0xf57 Jump
	
Label_3930:
	return 0; // 0xf5a Return
	
Label_3928:
	StopAnimation(); // 0xf58 Func
	
Label_3932:
	return 0; // 0xf5c Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0x1030 PushI
	if(var_37_int == 0) goto Label_4650; // 0x1031 JumpB
	func_4753(); // 0x1033 Call
	var_39_int = 15601; // 0x1035 PushI
	var_40_bool = var_36_int == var_39_int; // 0x1036 Eq
	if(var_40_bool == 0) goto Label_4157; // 0x1037 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x1038 PushV
	var_41_object = var_1_object; // 0x1039 MovT
	var_42_object = var_0_object; // 0x103a MovT
	func_4928(); // 0x103b Call
	
Label_4157:
	var_45_int = 15625; // 0x103d PushI
	var_46_bool = var_36_int == var_45_int; // 0x103e Eq
	if(var_46_bool == 0) goto Label_4165; // 0x103f JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x1040 PushV
	var_47_object = var_1_object; // 0x1041 MovT
	var_48_object = var_0_object; // 0x1042 MovT
	func_4934(); // 0x1043 Call
	
Label_4165:
	var_51_int = 15592; // 0x1045 PushI
	var_52_bool = var_35_int == var_51_int; // 0x1046 Eq
	if(var_52_bool == 0) goto Label_4261; // 0x1047 JumpB
	var_53_bool = 0; // 0x1048 PushV
	var_53_bool = 0; // 0x1049 MovB
	var_54_bool = 0; var_55_object = Obj(); // 0x104a PushV
	var_55_object = var_1_object; // 0x104b MovT
	func_5204(var_55_object); // 0x104c Call
	if(var_54_bool == 0) goto Label_4181; // 0x104e JumpB
	var_62_bool = 0; var_63_object = Obj(); // 0x104f PushV
	var_63_object = var_1_object; // 0x1050 MovT
	func_5216(var_63_object); // 0x1051 Call
	if(var_62_bool == 0) goto Label_4181; // 0x1053 JumpB
	var_53_bool = 1; // 0x1054 MovB
	
Label_4181:
	if(var_53_bool == 0) goto Label_4207; // 0x1055 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x1056 PushV
	var_68_object = var_1_object; // 0x1057 MovT
	var_69_object = var_0_object; // 0x1058 MovT
	func_4922(); // 0x1059 Call
	var_72_string = ""; // 0x105b PushV
	var_72_string = "Neutral"; // 0x105c MovS
	func_4127(var_36_int, var_72_string); // 0x105d Call
	var_87_int = 14369; // 0x105f PushI
	SetMessage(var_87_int); // 0x1060 TObjFunc
	ClearReplies(); // 0x1062 TObjFunc
	var_88_int = 14370; // 0x1064 PushI
	var_89_int = 15594; // 0x1065 PushI
	var_90_int = 15593; // 0x1066 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x1067 TObjFunc
	var_91_int = 14376; // 0x1069 PushI
	var_92_int = -1; // 0x106a PushI
	var_93_int = 15599; // 0x106b PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x106c TObjFunc
	return 0; // 0x106e Return
	
Label_4207:
	var_94_string = ""; // 0x106f PushV
	var_94_string = "Neutral"; // 0x1070 MovS
	func_4127(var_36_int, var_94_string); // 0x1071 Call
	var_95_int = 14377; // 0x1073 PushI
	SetMessage(var_95_int); // 0x1074 TObjFunc
	ClearReplies(); // 0x1076 TObjFunc
	var_96_bool = 0; // 0x1078 PushV
	var_96_bool = 0; // 0x1079 MovB
	var_97_bool = 0; // 0x107a PushV
	var_97_bool = 0; // 0x107b MovB
	var_98_bool = 0; var_99_object = Obj(); // 0x107c PushV
	var_99_object = var_1_object; // 0x107d MovT
	func_5216(var_99_object); // 0x107e Call
	var_100_bool = var_98_bool == 0; // 0x1080 Not
	if(var_100_bool == 0) goto Label_4232; // 0x1081 JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x1082 PushV
	var_102_object = var_1_object; // 0x1083 MovT
	func_5228(var_102_object); // 0x1084 Call
	if(var_101_bool == 0) goto Label_4232; // 0x1086 JumpB
	var_97_bool = 1; // 0x1087 MovB
	
Label_4232:
	if(var_97_bool == 0) goto Label_4239; // 0x1088 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x1089 PushV
	var_108_object = var_1_object; // 0x108a MovT
	func_5240(var_108_object); // 0x108b Call
	if(var_107_bool == 0) goto Label_4239; // 0x108d JumpB
	var_96_bool = 1; // 0x108e MovB
	
Label_4239:
	if(var_96_bool == 0) goto Label_4245; // 0x108f JumpB
	var_113_int = 14378; // 0x1090 PushI
	var_114_int = 15602; // 0x1091 PushI
	var_115_int = 15601; // 0x1092 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x1093 TObjFunc
	
Label_4245:
	var_116_bool = 0; var_117_object = Obj(); // 0x1095 PushV
	var_117_object = var_1_object; // 0x1096 MovT
	func_5264(var_117_object); // 0x1097 Call
	if(var_116_bool == 0) goto Label_4255; // 0x1099 JumpB
	var_122_int = 14400; // 0x109a PushI
	var_123_int = 15626; // 0x109b PushI
	var_124_int = 15625; // 0x109c PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x109d TObjFunc
	
Label_4255:
	var_125_int = 14419; // 0x109f PushI
	var_126_int = -1; // 0x10a0 PushI
	var_127_int = 15644; // 0x10a1 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x10a2 TObjFunc
	return 0; // 0x10a4 Return
	
Label_4261:
	var_128_int = 15626; // 0x10a5 PushI
	var_129_bool = var_35_int == var_128_int; // 0x10a6 Eq
	if(var_129_bool == 0) goto Label_4279; // 0x10a7 JumpB
	var_130_string = ""; // 0x10a8 PushV
	var_130_string = "Neutral"; // 0x10a9 MovS
	func_4127(var_36_int, var_130_string); // 0x10aa Call
	var_131_int = 14401; // 0x10ac PushI
	SetMessage(var_131_int); // 0x10ad TObjFunc
	ClearReplies(); // 0x10af TObjFunc
	var_132_int = 14402; // 0x10b1 PushI
	var_133_int = 15628; // 0x10b2 PushI
	var_134_int = 15627; // 0x10b3 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x10b4 TObjFunc
	return 0; // 0x10b6 Return
	
Label_4279:
	var_135_int = 15628; // 0x10b7 PushI
	var_136_bool = var_35_int == var_135_int; // 0x10b8 Eq
	if(var_136_bool == 0) goto Label_4297; // 0x10b9 JumpB
	var_137_string = ""; // 0x10ba PushV
	var_137_string = "Neutral"; // 0x10bb MovS
	func_4127(var_36_int, var_137_string); // 0x10bc Call
	var_138_int = 14403; // 0x10be PushI
	SetMessage(var_138_int); // 0x10bf TObjFunc
	ClearReplies(); // 0x10c1 TObjFunc
	var_139_int = 14404; // 0x10c3 PushI
	var_140_int = 15630; // 0x10c4 PushI
	var_141_int = 15629; // 0x10c5 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x10c6 TObjFunc
	return 0; // 0x10c8 Return
	
Label_4297:
	var_142_int = 15630; // 0x10c9 PushI
	var_143_bool = var_35_int == var_142_int; // 0x10ca Eq
	if(var_143_bool == 0) goto Label_4315; // 0x10cb JumpB
	var_144_string = ""; // 0x10cc PushV
	var_144_string = "Neutral"; // 0x10cd MovS
	func_4127(var_36_int, var_144_string); // 0x10ce Call
	var_145_int = 14405; // 0x10d0 PushI
	SetMessage(var_145_int); // 0x10d1 TObjFunc
	ClearReplies(); // 0x10d3 TObjFunc
	var_146_int = 14406; // 0x10d5 PushI
	var_147_int = 15632; // 0x10d6 PushI
	var_148_int = 15631; // 0x10d7 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x10d8 TObjFunc
	return 0; // 0x10da Return
	
Label_4315:
	var_149_int = 15632; // 0x10db PushI
	var_150_bool = var_35_int == var_149_int; // 0x10dc Eq
	if(var_150_bool == 0) goto Label_4333; // 0x10dd JumpB
	var_151_string = ""; // 0x10de PushV
	var_151_string = "Neutral"; // 0x10df MovS
	func_4127(var_36_int, var_151_string); // 0x10e0 Call
	var_152_int = 14407; // 0x10e2 PushI
	SetMessage(var_152_int); // 0x10e3 TObjFunc
	ClearReplies(); // 0x10e5 TObjFunc
	var_153_int = 14408; // 0x10e7 PushI
	var_154_int = 15634; // 0x10e8 PushI
	var_155_int = 15633; // 0x10e9 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x10ea TObjFunc
	return 0; // 0x10ec Return
	
Label_4333:
	var_156_int = 15634; // 0x10ed PushI
	var_157_bool = var_35_int == var_156_int; // 0x10ee Eq
	if(var_157_bool == 0) goto Label_4351; // 0x10ef JumpB
	var_158_string = ""; // 0x10f0 PushV
	var_158_string = "Neutral"; // 0x10f1 MovS
	func_4127(var_36_int, var_158_string); // 0x10f2 Call
	var_159_int = 14409; // 0x10f4 PushI
	SetMessage(var_159_int); // 0x10f5 TObjFunc
	ClearReplies(); // 0x10f7 TObjFunc
	var_160_int = 14410; // 0x10f9 PushI
	var_161_int = 15636; // 0x10fa PushI
	var_162_int = 15635; // 0x10fb PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x10fc TObjFunc
	return 0; // 0x10fe Return
	
Label_4351:
	var_163_int = 15636; // 0x10ff PushI
	var_164_bool = var_35_int == var_163_int; // 0x1100 Eq
	if(var_164_bool == 0) goto Label_4369; // 0x1101 JumpB
	var_165_string = ""; // 0x1102 PushV
	var_165_string = "Neutral"; // 0x1103 MovS
	func_4127(var_36_int, var_165_string); // 0x1104 Call
	var_166_int = 14411; // 0x1106 PushI
	SetMessage(var_166_int); // 0x1107 TObjFunc
	ClearReplies(); // 0x1109 TObjFunc
	var_167_int = 14412; // 0x110b PushI
	var_168_int = 15638; // 0x110c PushI
	var_169_int = 15637; // 0x110d PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x110e TObjFunc
	return 0; // 0x1110 Return
	
Label_4369:
	var_170_int = 15638; // 0x1111 PushI
	var_171_bool = var_35_int == var_170_int; // 0x1112 Eq
	if(var_171_bool == 0) goto Label_4387; // 0x1113 JumpB
	var_172_string = ""; // 0x1114 PushV
	var_172_string = "Neutral"; // 0x1115 MovS
	func_4127(var_36_int, var_172_string); // 0x1116 Call
	var_173_int = 14413; // 0x1118 PushI
	SetMessage(var_173_int); // 0x1119 TObjFunc
	ClearReplies(); // 0x111b TObjFunc
	var_174_int = 14414; // 0x111d PushI
	var_175_int = 15640; // 0x111e PushI
	var_176_int = 15639; // 0x111f PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1120 TObjFunc
	return 0; // 0x1122 Return
	
Label_4387:
	var_177_int = 15640; // 0x1123 PushI
	var_178_bool = var_35_int == var_177_int; // 0x1124 Eq
	if(var_178_bool == 0) goto Label_4415; // 0x1125 JumpB
	var_179_string = ""; // 0x1126 PushV
	var_179_string = "Neutral"; // 0x1127 MovS
	func_4127(var_36_int, var_179_string); // 0x1128 Call
	var_180_int = 14415; // 0x112a PushI
	SetMessage(var_180_int); // 0x112b TObjFunc
	ClearReplies(); // 0x112d TObjFunc
	var_181_int = 14416; // 0x112f PushI
	var_182_int = -1; // 0x1130 PushI
	var_183_int = 15641; // 0x1131 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1132 TObjFunc
	var_184_int = 14417; // 0x1134 PushI
	var_185_int = -1; // 0x1135 PushI
	var_186_int = 15642; // 0x1136 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1137 TObjFunc
	var_187_int = 14418; // 0x1139 PushI
	var_188_int = -1; // 0x113a PushI
	var_189_int = 15643; // 0x113b PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x113c TObjFunc
	return 0; // 0x113e Return
	
Label_4415:
	var_190_int = 15602; // 0x113f PushI
	var_191_bool = var_35_int == var_190_int; // 0x1140 Eq
	if(var_191_bool == 0) goto Label_4438; // 0x1141 JumpB
	var_192_string = ""; // 0x1142 PushV
	var_192_string = "Neutral"; // 0x1143 MovS
	func_4127(var_36_int, var_192_string); // 0x1144 Call
	var_193_int = 14379; // 0x1146 PushI
	SetMessage(var_193_int); // 0x1147 TObjFunc
	ClearReplies(); // 0x1149 TObjFunc
	var_194_int = 14380; // 0x114b PushI
	var_195_int = 15604; // 0x114c PushI
	var_196_int = 15603; // 0x114d PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x114e TObjFunc
	var_197_int = 14399; // 0x1150 PushI
	var_198_int = 15604; // 0x1151 PushI
	var_199_int = 15623; // 0x1152 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1153 TObjFunc
	return 0; // 0x1155 Return
	
Label_4438:
	var_200_int = 15604; // 0x1156 PushI
	var_201_bool = var_35_int == var_200_int; // 0x1157 Eq
	if(var_201_bool == 0) goto Label_4456; // 0x1158 JumpB
	var_202_string = ""; // 0x1159 PushV
	var_202_string = "Neutral"; // 0x115a MovS
	func_4127(var_36_int, var_202_string); // 0x115b Call
	var_203_int = 14381; // 0x115d PushI
	SetMessage(var_203_int); // 0x115e TObjFunc
	ClearReplies(); // 0x1160 TObjFunc
	var_204_int = 14382; // 0x1162 PushI
	var_205_int = 15606; // 0x1163 PushI
	var_206_int = 15605; // 0x1164 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1165 TObjFunc
	return 0; // 0x1167 Return
	
Label_4456:
	var_207_int = 15606; // 0x1168 PushI
	var_208_bool = var_35_int == var_207_int; // 0x1169 Eq
	if(var_208_bool == 0) goto Label_4474; // 0x116a JumpB
	var_209_string = ""; // 0x116b PushV
	var_209_string = "Neutral"; // 0x116c MovS
	func_4127(var_36_int, var_209_string); // 0x116d Call
	var_210_int = 14383; // 0x116f PushI
	SetMessage(var_210_int); // 0x1170 TObjFunc
	ClearReplies(); // 0x1172 TObjFunc
	var_211_int = 14384; // 0x1174 PushI
	var_212_int = 15608; // 0x1175 PushI
	var_213_int = 15607; // 0x1176 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1177 TObjFunc
	return 0; // 0x1179 Return
	
Label_4474:
	var_214_int = 15608; // 0x117a PushI
	var_215_bool = var_35_int == var_214_int; // 0x117b Eq
	if(var_215_bool == 0) goto Label_4502; // 0x117c JumpB
	var_216_string = ""; // 0x117d PushV
	var_216_string = "Neutral"; // 0x117e MovS
	func_4127(var_36_int, var_216_string); // 0x117f Call
	var_217_int = 14385; // 0x1181 PushI
	SetMessage(var_217_int); // 0x1182 TObjFunc
	ClearReplies(); // 0x1184 TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x1186 PushV
	var_219_object = var_1_object; // 0x1187 MovT
	func_5252(var_219_object); // 0x1188 Call
	if(var_218_bool == 0) goto Label_4496; // 0x118a JumpB
	var_224_int = 14386; // 0x118b PushI
	var_225_int = 15610; // 0x118c PushI
	var_226_int = 15609; // 0x118d PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x118e TObjFunc
	
Label_4496:
	var_227_int = 14398; // 0x1190 PushI
	var_228_int = -1; // 0x1191 PushI
	var_229_int = 15622; // 0x1192 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1193 TObjFunc
	return 0; // 0x1195 Return
	
Label_4502:
	var_230_int = 15610; // 0x1196 PushI
	var_231_bool = var_35_int == var_230_int; // 0x1197 Eq
	if(var_231_bool == 0) goto Label_4520; // 0x1198 JumpB
	var_232_string = ""; // 0x1199 PushV
	var_232_string = "Neutral"; // 0x119a MovS
	func_4127(var_36_int, var_232_string); // 0x119b Call
	var_233_int = 14387; // 0x119d PushI
	SetMessage(var_233_int); // 0x119e TObjFunc
	ClearReplies(); // 0x11a0 TObjFunc
	var_234_int = 14388; // 0x11a2 PushI
	var_235_int = 15612; // 0x11a3 PushI
	var_236_int = 15611; // 0x11a4 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x11a5 TObjFunc
	return 0; // 0x11a7 Return
	
Label_4520:
	var_237_int = 15612; // 0x11a8 PushI
	var_238_bool = var_35_int == var_237_int; // 0x11a9 Eq
	if(var_238_bool == 0) goto Label_4538; // 0x11aa JumpB
	var_239_string = ""; // 0x11ab PushV
	var_239_string = "Neutral"; // 0x11ac MovS
	func_4127(var_36_int, var_239_string); // 0x11ad Call
	var_240_int = 14389; // 0x11af PushI
	SetMessage(var_240_int); // 0x11b0 TObjFunc
	ClearReplies(); // 0x11b2 TObjFunc
	var_241_int = 14390; // 0x11b4 PushI
	var_242_int = 15614; // 0x11b5 PushI
	var_243_int = 15613; // 0x11b6 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x11b7 TObjFunc
	return 0; // 0x11b9 Return
	
Label_4538:
	var_244_int = 15614; // 0x11ba PushI
	var_245_bool = var_35_int == var_244_int; // 0x11bb Eq
	if(var_245_bool == 0) goto Label_4561; // 0x11bc JumpB
	var_246_string = ""; // 0x11bd PushV
	var_246_string = "Neutral"; // 0x11be MovS
	func_4127(var_36_int, var_246_string); // 0x11bf Call
	var_247_int = 14391; // 0x11c1 PushI
	SetMessage(var_247_int); // 0x11c2 TObjFunc
	ClearReplies(); // 0x11c4 TObjFunc
	var_248_int = 14392; // 0x11c6 PushI
	var_249_int = 15616; // 0x11c7 PushI
	var_250_int = 15615; // 0x11c8 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x11c9 TObjFunc
	var_251_int = 14397; // 0x11cb PushI
	var_252_int = 15616; // 0x11cc PushI
	var_253_int = 15620; // 0x11cd PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x11ce TObjFunc
	return 0; // 0x11d0 Return
	
Label_4561:
	var_254_int = 15616; // 0x11d1 PushI
	var_255_bool = var_35_int == var_254_int; // 0x11d2 Eq
	if(var_255_bool == 0) goto Label_4579; // 0x11d3 JumpB
	var_256_string = ""; // 0x11d4 PushV
	var_256_string = "Neutral"; // 0x11d5 MovS
	func_4127(var_36_int, var_256_string); // 0x11d6 Call
	var_257_int = 14393; // 0x11d8 PushI
	SetMessage(var_257_int); // 0x11d9 TObjFunc
	ClearReplies(); // 0x11db TObjFunc
	var_258_int = 14394; // 0x11dd PushI
	var_259_int = 15618; // 0x11de PushI
	var_260_int = 15617; // 0x11df PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x11e0 TObjFunc
	return 0; // 0x11e2 Return
	
Label_4579:
	var_261_int = 15618; // 0x11e3 PushI
	var_262_bool = var_35_int == var_261_int; // 0x11e4 Eq
	if(var_262_bool == 0) goto Label_4597; // 0x11e5 JumpB
	var_263_string = ""; // 0x11e6 PushV
	var_263_string = "Neutral"; // 0x11e7 MovS
	func_4127(var_36_int, var_263_string); // 0x11e8 Call
	var_264_int = 14395; // 0x11ea PushI
	SetMessage(var_264_int); // 0x11eb TObjFunc
	ClearReplies(); // 0x11ed TObjFunc
	var_265_int = 14396; // 0x11ef PushI
	var_266_int = -1; // 0x11f0 PushI
	var_267_int = 15619; // 0x11f1 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x11f2 TObjFunc
	return 0; // 0x11f4 Return
	
Label_4597:
	var_268_int = 15594; // 0x11f5 PushI
	var_269_bool = var_35_int == var_268_int; // 0x11f6 Eq
	if(var_269_bool == 0) goto Label_4615; // 0x11f7 JumpB
	var_270_string = ""; // 0x11f8 PushV
	var_270_string = "Neutral"; // 0x11f9 MovS
	func_4127(var_36_int, var_270_string); // 0x11fa Call
	var_271_int = 14371; // 0x11fc PushI
	SetMessage(var_271_int); // 0x11fd TObjFunc
	ClearReplies(); // 0x11ff TObjFunc
	var_272_int = 14372; // 0x1201 PushI
	var_273_int = 15596; // 0x1202 PushI
	var_274_int = 15595; // 0x1203 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x1204 TObjFunc
	return 0; // 0x1206 Return
	
Label_4615:
	var_275_int = 15596; // 0x1207 PushI
	var_276_bool = var_35_int == var_275_int; // 0x1208 Eq
	if(var_276_bool == 0) goto Label_4638; // 0x1209 JumpB
	var_277_string = ""; // 0x120a PushV
	var_277_string = "Neutral"; // 0x120b MovS
	func_4127(var_36_int, var_277_string); // 0x120c Call
	var_278_int = 14373; // 0x120e PushI
	SetMessage(var_278_int); // 0x120f TObjFunc
	ClearReplies(); // 0x1211 TObjFunc
	var_279_int = 14374; // 0x1213 PushI
	var_280_int = -1; // 0x1214 PushI
	var_281_int = 15597; // 0x1215 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x1216 TObjFunc
	var_282_int = 14375; // 0x1218 PushI
	var_283_int = -1; // 0x1219 PushI
	var_284_int = 15598; // 0x121a PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x121b TObjFunc
	return 0; // 0x121d Return
	
Label_4638:
	var_3_string = 1; // 0x121e TMovB
	var_285_bool = 0; // 0x121f PushV
	func_4808(var_285_bool); // 0x1220 Call
	if(var_285_bool == 0) goto Label_4646; // 0x1222 JumpB
	lshStopAnimation(); // 0x1223 Func
	goto Label_4648; // 0x1225 Jump
	
Label_4648:
	return 0; // 0x1228 Return
	
Label_4646:
	StopAnimation(); // 0x1226 Func
	
Label_4650:
	return 0; // 0x122a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_5630(); // 0x7 Call
	var_36_bool = 0; // 0x9 PushV
	func_4670(var_36_bool); // 0xa Call
	var_39_bool = var_36_bool == 0; // 0xc Not
	if(var_39_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_40_string = ""; // 0x13 PushV
	var_40_string = "Neutral"; // 0x14 MovS
	func_4735(var_40_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5120(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0x1401 PushV
	var_256_string = "d2q03"; // 0x1402 MovS
	func_4770(var_255_int, var_256_string); // 0x1403 Call
	var_257_int = 1; // 0x1405 PushI
	var_258_bool = var_255_int == var_257_int; // 0x1406 Eq
	if(var_258_bool == 0) goto Label_5130; // 0x1407 JumpB
	var_253_bool = 1; // 0x1408 MovB
	return 0; // 0x1409 Return
	
Label_5130:
	var_253_bool = 0; // 0x140a MovB
	return 0; // 0x140b Return
}


func_5634(var_36_object, var_365_object)
{
	var_37_bool = GlobalVars[1]; // 0x1603 PushGE
	var_38_bool = var_37_bool == 0; // 0x1604 Not
	if(var_38_bool == 0) goto Label_5647; // 0x1605 JumpB
	var_39_int = 0; var_40_object = Obj(); // 0x1606 PushV
	var_40_object = var_36_object; // 0x1607 Mov
	TaskCall(2); // 0x1608 TaskCall
	func_49(var_41_object, var_39_int, var_40_object); // 0x1609 Call
	TaskReturn(); // 0x160a TaskReturn
	var_151_bool = GlobalVars[1]; // 0x160c PushGE
	var_151_bool = 1; // 0x160d MovB
	GlobalVars[1] = var_151_bool; // 0x160e PopGE
	
Label_5647:
	var_152_bool = 0; var_153_int = 0; // 0x160f PushV
	var_153_int = 1; // 0x1610 MovI
	func_4789(var_152_bool, var_153_int); // 0x1611 Call
	if(var_152_bool == 0) goto Label_5659; // 0x1613 JumpB
	var_160_int = 0; var_161_object = Obj(); // 0x1614 PushV
	var_161_object = var_36_object; // 0x1615 Mov
	TaskCall(6); // 0x1616 TaskCall
	func_786(var_162_object, var_160_int, var_161_object); // 0x1617 Call
	TaskReturn(); // 0x1618 TaskReturn
	return 0; // 0x161a Return
	
Label_5659:
	var_360_bool = 0; var_361_int = 0; // 0x161b PushV
	var_361_int = 2; // 0x161c MovI
	func_4789(var_360_bool, var_361_int); // 0x161d Call
	if(var_360_bool == 0) goto Label_5678; // 0x161f JumpB
	var_362_int = 2000; // 0x1620 PushI
	var_363_int = 0; var_364_object = Obj(); // 0x1621 PushV
	var_364_object = var_36_object; // 0x1622 Mov
	TaskCall(8); // 0x1623 TaskCall
	func_2359(var_365_object, var_363_int, var_364_object); // 0x1624 Call
	TaskReturn(); // 0x1625 TaskReturn
	var_454_bool = var_362_int == var_365_object; // 0x1627 Eq
	if(var_454_bool == 0) goto Label_5677; // 0x1628 JumpB
	var_455_string = "people.xml"; // 0x1629 PushS
	var_456_bool = 1; // 0x162a PushB
	ShowWindow(var_455_string, var_456_bool); // 0x162b Func
	
Label_5677:
	return 0; // 0x162d Return
	
Label_5678:
	var_457_bool = 0; var_458_int = 0; // 0x162e PushV
	var_458_int = 6; // 0x162f MovI
	func_4789(var_457_bool, var_458_int); // 0x1630 Call
	if(var_457_bool == 0) goto Label_5690; // 0x1632 JumpB
	var_459_int = 0; var_460_object = Obj(); // 0x1633 PushV
	var_460_object = var_36_object; // 0x1634 Mov
	TaskCall(4); // 0x1635 TaskCall
	func_345(var_461_object, var_459_int, var_460_object); // 0x1636 Call
	TaskReturn(); // 0x1637 TaskReturn
	return 0; // 0x1639 Return
	
Label_5690:
	var_543_bool = 0; var_544_int = 0; // 0x163a PushV
	var_544_int = 8; // 0x163b MovI
	func_4789(var_543_bool, var_544_int); // 0x163c Call
	if(var_543_bool == 0) goto Label_5702; // 0x163e JumpB
	var_545_int = 0; var_546_object = Obj(); // 0x163f PushV
	var_546_object = var_36_object; // 0x1640 Mov
	TaskCall(10); // 0x1641 TaskCall
	func_3211(var_547_object, var_545_int, var_546_object); // 0x1642 Call
	TaskReturn(); // 0x1643 TaskReturn
	return 0; // 0x1645 Return
	
Label_5702:
	var_607_bool = 0; var_608_int = 0; // 0x1646 PushV
	var_608_int = 10; // 0x1647 MovI
	func_4789(var_607_bool, var_608_int); // 0x1648 Call
	if(var_607_bool == 0) goto Label_5714; // 0x164a JumpB
	var_609_int = 0; var_610_object = Obj(); // 0x164b PushV
	var_610_object = var_36_object; // 0x164c Mov
	TaskCall(12); // 0x164d TaskCall
	func_3584(var_611_object, var_609_int, var_610_object); // 0x164e Call
	TaskReturn(); // 0x164f TaskReturn
	return 0; // 0x1651 Return
	
Label_5714:
	var_687_bool = 0; var_688_int = 0; // 0x1652 PushV
	var_688_int = 11; // 0x1653 MovI
	func_4789(var_687_bool, var_688_int); // 0x1654 Call
	if(var_687_bool == 0) goto Label_5726; // 0x1656 JumpB
	var_689_int = 0; var_690_object = Obj(); // 0x1657 PushV
	var_690_object = var_36_object; // 0x1658 Mov
	TaskCall(14); // 0x1659 TaskCall
	func_3933(var_691_object, var_689_int, var_690_object); // 0x165a Call
	TaskReturn(); // 0x165b TaskReturn
	return 0; // 0x165d Return
	
Label_5726:
	var_787_bool = 0; // 0x165e PushV
	func_4795(var_787_bool); // 0x165f Call
	return 0; // 0x1661 Return
}


func_3584(var_0_object, var_609_int, var_610_object)
{
	var_612_object = Obj(); var_613_bool = 0; var_614_int = 0; var_615_bool = 0; var_616_object = Obj(); var_617_bool = 0; var_618_int = 0; var_619_bool = 0; // 0xe00 PushV
	var_0_object = var_610_object; // 0xe01 TMov
	var_620_bool = 0; var_621_object = Obj(); // 0xe02 PushV
	var_621_object = var_610_object; // 0xe03 Mov
	func_4675(var_621_object); // 0xe04 Call
	var_622_bool = var_620_bool == 0; // 0xe06 Not
	if(var_622_bool == 0) goto Label_3594; // 0xe07 JumpB
	var_609_int = -2; // 0xe08 MovI
	return 8; // 0xe09 Return
	
Label_3594:
	CreateDialog(var_616_object); // 0xe0a Func
	var_623_int = 0; // 0xe0c PushV
	func_4804(var_623_int); // 0xe0d Call
	SetNPCName(var_623_int); // 0xe0f ObjFunc
	var_624_string = ""; // 0xe11 PushV
	func_4806(var_624_string); // 0xe12 Call
	SetPhoto(var_624_string); // 0xe14 ObjFunc
	var_625_int = 0; // 0xe16 PushV
	func_5470(var_625_int); // 0xe17 Call
	SetPlayerName(var_625_int); // 0xe19 ObjFunc
	var_618_int = -1; // 0xe1b MovI
	IsOverrideActive(var_617_bool); // 0xe1c Func
	var_626_bool = var_617_bool; // 0xe1e Push
	if(var_626_bool == 0) goto Label_3618; // 0xe1f JumpB
	var_609_int = -2; // 0xe20 MovI
	return 8; // 0xe21 Return
	
Label_3618:
	DoDialog(var_616_object); // 0xe22 Func
	var_627_object = Obj(); var_628_object = Obj(); // 0xe24 PushV
	var_627_object = var_610_object; // 0xe25 Mov
	var_628_object = var_616_object; // 0xe26 Mov
	TaskCall(13); // 0xe27 TaskCall
	func_3647(var_629_object, var_630_object, var_631_string, var_632_bool, var_627_object, var_628_object); // 0xe28 Call
	TaskReturn(); // 0xe29 TaskReturn
	IsDialogEnd(var_619_bool); // 0xe2b ObjFunc
	
Label_3629:
	var_685_bool = var_619_bool == 0; // 0xe2d Not
	if(var_685_bool == 0) goto Label_3636; // 0xe2e JumpB
	sync(); // 0xe2f Func
	IsDialogEnd(var_619_bool); // 0xe31 ObjFunc
	goto Label_3629; // 0xe33 Jump
	
Label_3636:
	var_686_object = Obj(); // 0xe34 PushV
	var_686_object = var_610_object; // 0xe35 Mov
	func_4731(); // 0xe36 Call
	StopDialog(var_616_object); // 0xe38 Func
	GetReturnValue(var_618_int); // 0xe3a ObjFunc
	var_609_int = var_618_int; // 0xe3c Mov
	return 8; // 0xe3d Return
}


func_520(var_2_object, var_70_string)
{
	var_71_bool = 0; // 0x209 PushV
	func_4808(var_71_bool); // 0x20a Call
	var_72_bool = var_71_bool == 0; // 0x20c Not
	if(var_72_bool == 0) goto Label_527; // 0x20d JumpB
	return 0; // 0x20e Return
	
Label_527:
	var_73_bool = var_70_string == var_2_object; // 0x20f Eq
	if(var_73_bool == 0) goto Label_530; // 0x210 JumpB
	return 0; // 0x211 Return
	
Label_530:
	var_74_string = ""; // 0x212 PushV
	var_74_string = var_70_string; // 0x213 Mov
	func_4735(var_74_string); // 0x214 Call
	var_2_object = var_70_string; // 0x216 TMov
	return 0; // 0x217 Return
}


func_5384(var_306_bool)
{
	var_308_int = 0; var_309_string = ""; // 0x1509 PushV
	var_309_string = "KnowKapella"; // 0x150a MovS
	func_4770(var_308_int, var_309_string); // 0x150b Call
	var_310_int = 1; // 0x150d PushI
	var_311_bool = var_308_int == var_310_int; // 0x150e Eq
	if(var_311_bool == 0) goto Label_5394; // 0x150f JumpB
	var_306_bool = 1; // 0x1510 MovB
	return 0; // 0x1511 Return
	
Label_5394:
	var_306_bool = 0; // 0x1512 MovB
	return 0; // 0x1513 Return
}


func_5132(var_274_bool)
{
	var_276_int = 0; var_277_string = ""; // 0x140d PushV
	var_277_string = "KnowMark"; // 0x140e MovS
	func_4770(var_276_int, var_277_string); // 0x140f Call
	var_278_int = 1; // 0x1411 PushI
	var_279_bool = var_276_int == var_278_int; // 0x1412 Eq
	if(var_279_bool == 0) goto Label_5142; // 0x1413 JumpB
	var_274_bool = 1; // 0x1414 MovB
	return 0; // 0x1415 Return
	
Label_5142:
	var_274_bool = 0; // 0x1416 MovB
	return 0; // 0x1417 Return
}


func_2578(var_2_object, var_209_string)
{
	var_210_bool = 0; // 0xa13 PushV
	func_4808(var_210_bool); // 0xa14 Call
	var_211_bool = var_210_bool == 0; // 0xa16 Not
	if(var_211_bool == 0) goto Label_2585; // 0xa17 JumpB
	return 0; // 0xa18 Return
	
Label_2585:
	var_212_bool = var_209_string == var_2_object; // 0xa19 Eq
	if(var_212_bool == 0) goto Label_2588; // 0xa1a JumpB
	return 0; // 0xa1b Return
	
Label_2588:
	var_213_string = ""; // 0xa1c PushV
	var_213_string = var_209_string; // 0xa1d Mov
	func_4735(var_213_string); // 0xa1e Call
	var_2_object = var_209_string; // 0xa20 TMov
	return 0; // 0xa21 Return
}


func_786(var_0_object, var_160_int, var_161_object)
{
	var_163_object = Obj(); var_164_bool = 0; var_165_int = 0; var_166_bool = 0; var_167_object = Obj(); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; // 0x312 PushV
	var_0_object = var_161_object; // 0x313 TMov
	var_171_bool = 0; var_172_object = Obj(); // 0x314 PushV
	var_172_object = var_161_object; // 0x315 Mov
	func_4675(var_172_object); // 0x316 Call
	var_173_bool = var_171_bool == 0; // 0x318 Not
	if(var_173_bool == 0) goto Label_796; // 0x319 JumpB
	var_160_int = -2; // 0x31a MovI
	return 8; // 0x31b Return
	
Label_796:
	CreateDialog(var_167_object); // 0x31c Func
	var_174_int = 0; // 0x31e PushV
	func_4804(var_174_int); // 0x31f Call
	SetNPCName(var_174_int); // 0x321 ObjFunc
	var_175_string = ""; // 0x323 PushV
	func_4806(var_175_string); // 0x324 Call
	SetPhoto(var_175_string); // 0x326 ObjFunc
	var_176_int = 0; // 0x328 PushV
	func_5470(var_176_int); // 0x329 Call
	SetPlayerName(var_176_int); // 0x32b ObjFunc
	var_169_int = -1; // 0x32d MovI
	IsOverrideActive(var_168_bool); // 0x32e Func
	var_177_bool = var_168_bool; // 0x330 Push
	if(var_177_bool == 0) goto Label_820; // 0x331 JumpB
	var_160_int = -2; // 0x332 MovI
	return 8; // 0x333 Return
	
Label_820:
	DoDialog(var_167_object); // 0x334 Func
	var_178_object = Obj(); var_179_object = Obj(); // 0x336 PushV
	var_178_object = var_161_object; // 0x337 Mov
	var_179_object = var_167_object; // 0x338 Mov
	TaskCall(7); // 0x339 TaskCall
	func_849(var_180_object, var_181_object, var_182_string, var_183_bool, var_178_object, var_179_object); // 0x33a Call
	TaskReturn(); // 0x33b TaskReturn
	IsDialogEnd(var_170_bool); // 0x33d ObjFunc
	
Label_831:
	var_358_bool = var_170_bool == 0; // 0x33f Not
	if(var_358_bool == 0) goto Label_838; // 0x340 JumpB
	sync(); // 0x341 Func
	IsDialogEnd(var_170_bool); // 0x343 ObjFunc
	goto Label_831; // 0x345 Jump
	
Label_838:
	var_359_object = Obj(); // 0x346 PushV
	var_359_object = var_161_object; // 0x347 Mov
	func_4731(); // 0x348 Call
	StopDialog(var_167_object); // 0x34a Func
	GetReturnValue(var_169_int); // 0x34c ObjFunc
	var_160_int = var_169_int; // 0x34e Mov
	return 8; // 0x34f Return
}


func_5396(var_290_bool)
{
	var_292_int = 0; var_293_string = ""; // 0x1515 PushV
	var_293_string = "KnowStamatins"; // 0x1516 MovS
	func_4770(var_292_int, var_293_string); // 0x1517 Call
	var_294_int = 1; // 0x1519 PushI
	var_295_bool = var_292_int == var_294_int; // 0x151a Eq
	if(var_295_bool == 0) goto Label_5406; // 0x151b JumpB
	var_290_bool = 1; // 0x151c MovB
	return 0; // 0x151d Return
	
Label_5406:
	var_290_bool = 0; // 0x151e MovB
	return 0; // 0x151f Return
}


func_4886()
{
	var_172_string = "d2q03MariaGotoViktor"; // 0x1317 PushS
	var_173_int = 1; // 0x1318 PushI
	SetVariable(var_172_string, var_173_int); // 0x1319 Func
	return 0; // 0x131b Return
}


func_5144(var_48_bool)
{
	var_50_int = 0; var_51_string = ""; // 0x1419 PushV
	var_51_string = "d6q01"; // 0x141a MovS
	func_4770(var_50_int, var_51_string); // 0x141b Call
	var_54_int = 0; // 0x141d PushI
	var_55_bool = var_50_int == var_54_int; // 0x141e Eq
	if(var_55_bool == 0) goto Label_5154; // 0x141f JumpB
	var_48_bool = 1; // 0x1420 MovB
	return 0; // 0x1421 Return
	
Label_5154:
	var_48_bool = 0; // 0x1422 MovB
	return 0; // 0x1423 Return
}


func_4892()
{
	var_77_string = "KnowViktor"; // 0x131d PushS
	var_78_int = 1; // 0x131e PushI
	SetVariable(var_77_string, var_78_int); // 0x131f Func
	return 0; // 0x1321 Return
}


func_3357(var_2_object, var_53_string)
{
	var_54_bool = 0; // 0xd1e PushV
	func_4808(var_54_bool); // 0xd1f Call
	var_55_bool = var_54_bool == 0; // 0xd21 Not
	if(var_55_bool == 0) goto Label_3364; // 0xd22 JumpB
	return 0; // 0xd23 Return
	
Label_3364:
	var_56_bool = var_53_string == var_2_object; // 0xd24 Eq
	if(var_56_bool == 0) goto Label_3367; // 0xd25 JumpB
	return 0; // 0xd26 Return
	
Label_3367:
	var_57_string = ""; // 0xd27 PushV
	var_57_string = var_53_string; // 0xd28 Mov
	func_4735(var_57_string); // 0xd29 Call
	var_2_object = var_53_string; // 0xd2b TMov
	return 0; // 0xd2c Return
}


func_4127(var_2_object, var_72_string)
{
	var_73_bool = 0; // 0x1020 PushV
	func_4808(var_73_bool); // 0x1021 Call
	var_74_bool = var_73_bool == 0; // 0x1023 Not
	if(var_74_bool == 0) goto Label_4134; // 0x1024 JumpB
	return 0; // 0x1025 Return
	
Label_4134:
	var_75_bool = var_72_string == var_2_object; // 0x1026 Eq
	if(var_75_bool == 0) goto Label_4137; // 0x1027 JumpB
	return 0; // 0x1028 Return
	
Label_4137:
	var_76_string = ""; // 0x1029 PushV
	var_76_string = var_72_string; // 0x102a Mov
	func_4735(var_76_string); // 0x102b Call
	var_2_object = var_72_string; // 0x102d TMov
	return 0; // 0x102e Return
}


func_5408(var_214_bool)
{
	var_214_bool = 0; // 0x1521 MovB
	return 0; // 0x1522 Return
}


func_4898()
{
	var_64_string = "ood6Maria1"; // 0x1323 PushS
	var_65_int = 1; // 0x1324 PushI
	SetVariable(var_64_string, var_65_int); // 0x1325 Func
	return 0; // 0x1327 Return
}


func_5411(var_150_object)
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x1523 PushV
	GetDiaryRoot(var_152_object); // 0x1524 Func
	var_153_bool = var_152_object == 0; // 0x1526 Not
	if(var_153_bool == 0) goto Label_5421; // 0x1527 JumpB
	var_154_string = "Can't retrieve diary root"; // 0x1528 PushS
	Trace(var_154_string); // 0x1529 Func
	var_150_object = 0; // 0x152b MovB
	return 2; // 0x152c Return
	
Label_5421:
	var_150_object = var_152_object; // 0x152d Mov
	return 2; // 0x152e Return
}


func_5156(var_56_bool)
{
	var_58_int = 0; var_59_string = ""; // 0x1425 PushV
	var_59_string = "ood6Maria1"; // 0x1426 MovS
	func_4770(var_58_int, var_59_string); // 0x1427 Call
	var_60_int = 0; // 0x1429 PushI
	var_61_bool = var_58_int == var_60_int; // 0x142a Eq
	if(var_61_bool == 0) goto Label_5166; // 0x142b JumpB
	var_56_bool = 1; // 0x142c MovB
	return 0; // 0x142d Return
	
Label_5166:
	var_56_bool = 0; // 0x142e MovB
	return 0; // 0x142f Return
}


func_4904()
{
	var_43_string = "ood6Maria2"; // 0x1329 PushS
	var_44_int = 1; // 0x132a PushI
	SetVariable(var_43_string, var_44_int); // 0x132b Func
	return 0; // 0x132d Return
}


func_4651(var_182_string, var_183_int)
{
	var_184_int = 0; var_185_int = 0; // 0x122b PushV
	GetProperty(var_182_string, var_185_int); // 0x122c ObjFunc
	var_186_int = var_185_int + var_183_int; // 0x122e Add
	SetProperty(var_182_string, var_186_int); // 0x122f ObjFunc
	return 2; // 0x1231 Return
}


func_4910()
{
	var_51_string = "ood8Maria1"; // 0x132f PushS
	var_52_int = 1; // 0x1330 PushI
	SetVariable(var_51_string, var_52_int); // 0x1331 Func
	return 0; // 0x1333 Return
}


func_5168(var_96_bool)
{
	var_98_int = 0; var_99_string = ""; // 0x1431 PushV
	var_99_string = "ood6Maria2"; // 0x1432 MovS
	func_4770(var_98_int, var_99_string); // 0x1433 Call
	var_100_int = 0; // 0x1435 PushI
	var_101_bool = var_98_int == var_100_int; // 0x1436 Eq
	if(var_101_bool == 0) goto Label_5178; // 0x1437 JumpB
	var_96_bool = 1; // 0x1438 MovB
	return 0; // 0x1439 Return
	
Label_5178:
	var_96_bool = 0; // 0x143a MovB
	return 0; // 0x143b Return
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x31 PushV
	var_0_object = var_40_object; // 0x32 TMov
	var_50_bool = 0; var_51_object = Obj(); // 0x33 PushV
	var_51_object = var_40_object; // 0x34 Mov
	func_4675(var_51_object); // 0x35 Call
	var_90_bool = var_50_bool == 0; // 0x37 Not
	if(var_90_bool == 0) goto Label_59; // 0x38 JumpB
	var_39_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_46_object); // 0x3b Func
	var_91_int = 0; // 0x3d PushV
	func_4804(var_91_int); // 0x3e Call
	SetNPCName(var_91_int); // 0x40 ObjFunc
	var_92_string = ""; // 0x42 PushV
	func_4806(var_92_string); // 0x43 Call
	SetPhoto(var_92_string); // 0x45 ObjFunc
	var_93_int = 0; // 0x47 PushV
	func_5470(var_93_int); // 0x48 Call
	SetPlayerName(var_93_int); // 0x4a ObjFunc
	var_48_int = -1; // 0x4c MovI
	IsOverrideActive(var_47_bool); // 0x4d Func
	var_101_bool = var_47_bool; // 0x4f Push
	if(var_101_bool == 0) goto Label_83; // 0x50 JumpB
	var_39_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_46_object); // 0x53 Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_40_object; // 0x56 Mov
	var_103_object = var_46_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_49_bool); // 0x5c ObjFunc
	
Label_94:
	var_149_bool = var_49_bool == 0; // 0x5e Not
	if(var_149_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_49_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_150_object = Obj(); // 0x65 PushV
	var_150_object = var_40_object; // 0x66 Mov
	func_4731(); // 0x67 Call
	StopDialog(var_46_object); // 0x69 Func
	GetReturnValue(var_48_int); // 0x6b ObjFunc
	var_39_int = var_48_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_4658(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x1232 PushV
	GetPosition(var_42_cvector); // 0x1233 ObjFunc
	GetPosition(var_43_cvector); // 0x1235 Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x1237 Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0x1238 PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0x1239 PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0x123a Func
	var_36_bool = var_45_bool; // 0x123c Mov
	return 8; // 0x123d Return
}


func_5424(var_141_bool, var_142_object, var_143_int)
{
	var_144_object = Obj(); var_145_object = Obj(); var_146_int = 0; var_147_object = Obj(); var_148_object = Obj(); var_149_int = 0; // 0x1530 PushV
	var_150_object = Obj(); // 0x1531 PushV
	func_5411(var_150_object); // 0x1532 Call
	var_147_object = var_150_object; // 0x1533 Mov
	Find(var_143_int, var_148_object); // 0x1535 ObjFunc
	var_155_bool = var_148_object == 0; // 0x1537 Not
	if(var_155_bool == 0) goto Label_5439; // 0x1538 JumpB
	var_156_string = "Can't find diary parent with id: "; // 0x1539 PushS
	var_157_int = var_156_string + var_143_int; // 0x153a Add
	Trace(var_157_int); // 0x153b Func
	var_141_bool = 0; // 0x153d MovB
	return 6; // 0x153e Return
	
Label_5439:
	AddChild(var_142_object); // 0x153f ObjFunc
	var_158_string = "player_diary"; // 0x1541 PushS
	var_159_int = 1; // 0x1542 PushI
	SetVariable(var_158_string, var_159_int); // 0x1543 Func
	GetCategory(var_149_int); // 0x1545 ObjFunc
	SetDiarySection(var_149_int); // 0x1547 Func
	var_141_bool = 0; // 0x1549 MovB
	return 6; // 0x154a Return
}


func_4916()
{
	var_43_string = "KnowMaria"; // 0x1335 PushS
	var_44_int = 1; // 0x1336 PushI
	SetVariable(var_43_string, var_44_int); // 0x1337 Func
	return 0; // 0x1339 Return
}


func_2359(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0; // 0x937 PushV
	var_0_object = var_364_object; // 0x938 TMov
	var_374_bool = 0; var_375_object = Obj(); // 0x939 PushV
	var_375_object = var_364_object; // 0x93a Mov
	func_4675(var_375_object); // 0x93b Call
	var_376_bool = var_374_bool == 0; // 0x93d Not
	if(var_376_bool == 0) goto Label_2369; // 0x93e JumpB
	var_363_int = -2; // 0x93f MovI
	return 8; // 0x940 Return
	
Label_2369:
	CreateDialog(var_370_object); // 0x941 Func
	var_377_int = 0; // 0x943 PushV
	func_4804(var_377_int); // 0x944 Call
	SetNPCName(var_377_int); // 0x946 ObjFunc
	var_378_string = ""; // 0x948 PushV
	func_4806(var_378_string); // 0x949 Call
	SetPhoto(var_378_string); // 0x94b ObjFunc
	var_379_int = 0; // 0x94d PushV
	func_5470(var_379_int); // 0x94e Call
	SetPlayerName(var_379_int); // 0x950 ObjFunc
	var_372_int = -1; // 0x952 MovI
	IsOverrideActive(var_371_bool); // 0x953 Func
	var_380_bool = var_371_bool; // 0x955 Push
	if(var_380_bool == 0) goto Label_2393; // 0x956 JumpB
	var_363_int = -2; // 0x957 MovI
	return 8; // 0x958 Return
	
Label_2393:
	DoDialog(var_370_object); // 0x959 Func
	var_381_object = Obj(); var_382_object = Obj(); // 0x95b PushV
	var_381_object = var_364_object; // 0x95c Mov
	var_382_object = var_370_object; // 0x95d Mov
	TaskCall(9); // 0x95e TaskCall
	func_2422(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object); // 0x95f Call
	TaskReturn(); // 0x960 TaskReturn
	IsDialogEnd(var_373_bool); // 0x962 ObjFunc
	
Label_2404:
	var_452_bool = var_373_bool == 0; // 0x964 Not
	if(var_452_bool == 0) goto Label_2411; // 0x965 JumpB
	sync(); // 0x966 Func
	IsDialogEnd(var_373_bool); // 0x968 ObjFunc
	goto Label_2404; // 0x96a Jump
	
Label_2411:
	var_453_object = Obj(); // 0x96b PushV
	var_453_object = var_364_object; // 0x96c Mov
	func_4731(); // 0x96d Call
	StopDialog(var_370_object); // 0x96f Func
	GetReturnValue(var_372_int); // 0x971 ObjFunc
	var_363_int = var_372_int; // 0x973 Mov
	return 8; // 0x974 Return
}


func_4922()
{
	var_70_string = "ood11Maria1"; // 0x133b PushS
	var_71_int = 1; // 0x133c PushI
	SetVariable(var_70_string, var_71_int); // 0x133d Func
	return 0; // 0x133f Return
}


func_5180(var_41_bool)
{
	var_43_int = 0; var_44_string = ""; // 0x143d PushV
	var_44_string = "ood8Maria1"; // 0x143e MovS
	func_4770(var_43_int, var_44_string); // 0x143f Call
	var_47_int = 0; // 0x1441 PushI
	var_48_bool = var_43_int == var_47_int; // 0x1442 Eq
	if(var_48_bool == 0) goto Label_5190; // 0x1443 JumpB
	var_41_bool = 1; // 0x1444 MovB
	return 0; // 0x1445 Return
	
Label_5190:
	var_41_bool = 0; // 0x1446 MovB
	return 0; // 0x1447 Return
}


func_4670(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x123e PushV
	IsLoaded(var_38_bool); // 0x123f Func
	var_36_bool = var_38_bool; // 0x1241 Mov
	return 2; // 0x1242 Return
}


func_3647(var_0_object, var_1_object, var_2_object, var_3_object, var_627_object, var_628_object)
{
	var_0_object = var_628_object; // 0xe40 TMov
	var_1_object = var_627_object; // 0xe41 TMov
	var_3_object = 0; // 0xe42 TMovB
	var_633_int = 1; // 0xe43 PushI
	if(var_633_int == 0) goto Label_3720; // 0xe44 JumpB
	var_634_bool = 0; // 0xe45 PushV
	var_634_bool = 0; // 0xe46 MovB
	var_635_bool = 0; // 0xe47 PushV
	var_635_bool = 0; // 0xe48 MovB
	var_636_bool = 0; var_637_object = Obj(); // 0xe49 PushV
	var_637_object = var_1_object; // 0xe4a MovT
	func_5372(var_637_object); // 0xe4b Call
	if(var_636_bool == 0) goto Label_3669; // 0xe4d JumpB
	var_642_bool = 0; var_643_object = Obj(); // 0xe4e PushV
	var_643_object = var_1_object; // 0xe4f MovT
	func_5360(var_643_object); // 0xe50 Call
	var_648_bool = var_642_bool == 0; // 0xe52 Not
	if(var_648_bool == 0) goto Label_3669; // 0xe53 JumpB
	var_635_bool = 1; // 0xe54 MovB
	
Label_3669:
	if(var_635_bool == 0) goto Label_3677; // 0xe55 JumpB
	var_649_bool = 0; var_650_object = Obj(); // 0xe56 PushV
	var_650_object = var_1_object; // 0xe57 MovT
	func_5348(var_650_object); // 0xe58 Call
	var_655_bool = var_649_bool == 0; // 0xe5a Not
	if(var_655_bool == 0) goto Label_3677; // 0xe5b JumpB
	var_634_bool = 1; // 0xe5c MovB
	
Label_3677:
	if(var_634_bool == 0) goto Label_3703; // 0xe5d JumpB
	var_656_object = Obj(); var_657_object = Obj(); // 0xe5e PushV
	var_656_object = var_1_object; // 0xe5f MovT
	var_657_object = var_0_object; // 0xe60 MovT
	func_4990(); // 0xe61 Call
	var_660_string = ""; // 0xe63 PushV
	var_660_string = "Neutral"; // 0xe64 MovS
	func_3750(var_628_object, var_660_string); // 0xe65 Call
	var_665_int = 12892; // 0xe67 PushI
	SetMessage(var_665_int); // 0xe68 TObjFunc
	ClearReplies(); // 0xe6a TObjFunc
	var_666_int = 12893; // 0xe6c PushI
	var_667_int = 14096; // 0xe6d PushI
	var_668_int = 14095; // 0xe6e PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0xe6f TObjFunc
	var_669_int = 12969; // 0xe71 PushI
	var_670_int = 14175; // 0xe72 PushI
	var_671_int = 14174; // 0xe73 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0xe74 TObjFunc
	goto Label_3720; // 0xe76 Jump
	
Label_3720:
	var_672_bool = 0; // 0xe88 PushV
	func_4808(var_672_bool); // 0xe89 Call
	if(var_672_bool == 0) goto Label_3735; // 0xe8b JumpB
	
Label_3724:
	lshWaitForAnimEnd(); // 0xe8c Func
	var_673_object = var_3_object; // 0xe8e PushT
	if(var_673_object == 0) goto Label_3729; // 0xe8f JumpB
	goto Label_3734; // 0xe90 Jump
	
Label_3734:
	goto Label_3749; // 0xe96 Jump
	
Label_3749:
	return 0; // 0xea5 Return
	
Label_3729:
	var_674_string = ""; // 0xe91 PushV
	var_674_string = var_2_object; // 0xe92 MovT
	func_4735(var_674_string); // 0xe93 Call
	goto Label_3724; // 0xe95 Jump
	
Label_3735:
	var_675_string = "all"; // 0xe97 PushS
	var_676_string = "idle"; // 0xe98 PushS
	PlayAnimation(var_675_string, var_676_string); // 0xe99 Func
	
Label_3739:
	WaitForAnimEnd(); // 0xe9b Func
	var_677_object = var_3_object; // 0xe9d PushT
	if(var_677_object == 0) goto Label_3744; // 0xe9e JumpB
	goto Label_3749; // 0xe9f Jump
	
Label_3744:
	var_678_string = "all"; // 0xea0 PushS
	var_679_string = "idle"; // 0xea1 PushS
	PlayAnimation(var_678_string, var_679_string); // 0xea2 Func
	goto Label_3739; // 0xea4 Jump
	
Label_3703:
	var_680_string = ""; // 0xe77 PushV
	var_680_string = "Neutral"; // 0xe78 MovS
	func_3750(var_628_object, var_680_string); // 0xe79 Call
	var_681_int = 12974; // 0xe7b PushI
	SetMessage(var_681_int); // 0xe7c TObjFunc
	ClearReplies(); // 0xe7e TObjFunc
	var_682_int = 12975; // 0xe80 PushI
	var_683_int = -1; // 0xe81 PushI
	var_684_int = 14180; // 0xe82 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0xe83 TObjFunc
	goto Label_3720; // 0xe85 Jump
}


func_4928()
{
	var_43_string = "ood11Maria2"; // 0x1341 PushS
	var_44_int = 1; // 0x1342 PushI
	SetVariable(var_43_string, var_44_int); // 0x1343 Func
	return 0; // 0x1345 Return
}


func_4675(var_50_bool)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x1243 PushV
	GetPosition(var_61_cvector); // 0x1244 ObjFunc
	GetEyesHeight(var_60_float); // 0x1246 ObjFunc
	var_68_float = GetByIndex(var_61_cvector, 1); // 0x1248 PushE
	var_68_float = var_68_float + var_60_float; // 0x1249 Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0x124a PopE
	GetPosition(var_62_cvector); // 0x124b Func
	GetEyesHeight(var_60_float); // 0x124d Func
	var_69_float = GetByIndex(var_62_cvector, 1); // 0x124f PushE
	var_69_float = var_69_float + var_60_float; // 0x1250 Add2
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0x1251 PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0x1252 Sub2
	var_70_float = GetByIndex(var_63_cvector, 1); // 0x1253 PushE
	var_70_float = 0; // 0x1254 MovI
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0x1255 PopE
	var_71_int = var_63_cvector | var_63_cvector; // 0x1256 Or
	var_72_float = sqrt(var_71_int); // 0x1257 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0x1258 Div2
	var_64_cvector = -var_63_cvector; // 0x1259 Neg2
	var_73_int = 70; // 0x125a PushI
	var_74_float = var_63_cvector * var_73_int; // 0x125b Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x125c PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0x125d PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0x125e Xor2
	func_4760(var_75_cvector, var_76_cvector); // 0x125f Call
	var_83_int = 25; // 0x1261 PushI
	var_84_float = var_75_cvector * var_83_int; // 0x1262 Mult
	var_85_int = var_74_float + var_84_float; // 0x1263 Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0x1264 PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0x1265 Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0x1266 Add2
	IsOverrideActive(var_67_bool); // 0x1267 Func
	var_87_bool = var_67_bool; // 0x1269 Push
	if(var_87_bool == 0) goto Label_4717; // 0x126a JumpB
	var_50_bool = 0; // 0x126b MovB
	return 16; // 0x126c Return
	
Label_4717:
	StopWorld(); // 0x126d Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0x126f Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0x1271 PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0x1272 PushE
	Rotate(var_88_float, var_89_float); // 0x1273 Func
	CameraWaitForPlayFinish(); // 0x1275 Func
	ResumeWorld(); // 0x1277 Func
	var_50_bool = 1; // 0x1279 MovB
	return 16; // 0x127a Return
}


func_4934()
{
	var_49_string = "ood11Maria3"; // 0x1347 PushS
	var_50_int = 1; // 0x1348 PushI
	SetVariable(var_49_string, var_50_int); // 0x1349 Func
	return 0; // 0x134b Return
}


func_5192(var_258_bool)
{
	var_260_int = 0; var_261_string = ""; // 0x1449 PushV
	var_261_string = "KnowGeorg"; // 0x144a MovS
	func_4770(var_260_int, var_261_string); // 0x144b Call
	var_262_int = 1; // 0x144d PushI
	var_263_bool = var_260_int == var_262_int; // 0x144e Eq
	if(var_263_bool == 0) goto Label_5202; // 0x144f JumpB
	var_258_bool = 1; // 0x1450 MovB
	return 0; // 0x1451 Return
	
Label_5202:
	var_258_bool = 0; // 0x1452 MovB
	return 0; // 0x1453 Return
}


func_4940()
{
	var_207_string = "ood2Maria3"; // 0x134d PushS
	var_208_int = 1; // 0x134e PushI
	SetVariable(var_207_string, var_208_int); // 0x134f Func
	return 0; // 0x1351 Return
}


func_5453(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj(); // 0x154d PushV
	GetMainOutdoorScene(var_124_object); // 0x154e Func
	var_126_bool = var_124_object == 0; // 0x1550 NullEq
	if(var_126_bool == 0) goto Label_5464; // 0x1551 JumpB
	var_127_string = "Can't find main outdoor scene"; // 0x1552 PushS
	Trace(var_127_string); // 0x1553 Func
	var_125_object = 0; // 0x1555 SetNull
	var_121_object = var_125_object; // 0x1556 Mov
	return 4; // 0x1557 Return
	
Label_5464:
	GetMap(var_125_object); // 0x1558 ObjFunc
	var_121_object = var_125_object; // 0x155a Mov
	return 4; // 0x155b Return
}


func_849(var_0_object, var_1_object, var_2_object, var_3_object, var_178_object, var_179_object)
{
	var_0_object = var_179_object; // 0x352 TMov
	var_1_object = var_178_object; // 0x353 TMov
	var_3_object = 0; // 0x354 TMovB
	var_184_int = 1; // 0x355 PushI
	if(var_184_int == 0) goto Label_1107; // 0x356 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x357 PushV
	var_186_object = var_1_object; // 0x358 MovT
	func_5050(var_186_object); // 0x359 Call
	var_193_bool = var_185_bool == 0; // 0x35b Not
	if(var_193_bool == 0) goto Label_881; // 0x35c JumpB
	var_194_string = ""; // 0x35d PushV
	var_194_string = "Neutral"; // 0x35e MovS
	func_1137(var_179_object, var_194_string); // 0x35f Call
	var_199_int = 6253; // 0x361 PushI
	SetMessage(var_199_int); // 0x362 TObjFunc
	ClearReplies(); // 0x364 TObjFunc
	var_200_int = 6254; // 0x366 PushI
	var_201_int = 6921; // 0x367 PushI
	var_202_int = 6920; // 0x368 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x369 TObjFunc
	var_203_int = 6259; // 0x36b PushI
	var_204_int = 6926; // 0x36c PushI
	var_205_int = 6925; // 0x36d PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x36e TObjFunc
	goto Label_1107; // 0x370 Jump
	
Label_1107:
	var_206_bool = 0; // 0x453 PushV
	func_4808(var_206_bool); // 0x454 Call
	if(var_206_bool == 0) goto Label_1122; // 0x456 JumpB
	
Label_1111:
	lshWaitForAnimEnd(); // 0x457 Func
	var_207_object = var_3_object; // 0x459 PushT
	if(var_207_object == 0) goto Label_1116; // 0x45a JumpB
	goto Label_1121; // 0x45b Jump
	
Label_1121:
	goto Label_1136; // 0x461 Jump
	
Label_1136:
	return 0; // 0x470 Return
	
Label_1116:
	var_208_string = ""; // 0x45c PushV
	var_208_string = var_2_object; // 0x45d MovT
	func_4735(var_208_string); // 0x45e Call
	goto Label_1111; // 0x460 Jump
	
Label_1122:
	var_209_string = "all"; // 0x462 PushS
	var_210_string = "idle"; // 0x463 PushS
	PlayAnimation(var_209_string, var_210_string); // 0x464 Func
	
Label_1126:
	WaitForAnimEnd(); // 0x466 Func
	var_211_object = var_3_object; // 0x468 PushT
	if(var_211_object == 0) goto Label_1131; // 0x469 JumpB
	goto Label_1136; // 0x46a Jump
	
Label_1131:
	var_212_string = "all"; // 0x46b PushS
	var_213_string = "idle"; // 0x46c PushS
	PlayAnimation(var_212_string, var_213_string); // 0x46d Func
	goto Label_1126; // 0x46f Jump
	
Label_881:
	var_214_bool = 0; var_215_object = Obj(); // 0x371 PushV
	var_215_object = var_1_object; // 0x372 MovT
	func_5014(var_215_object); // 0x373 Call
	if(var_214_bool == 0) goto Label_906; // 0x375 JumpB
	var_220_string = ""; // 0x376 PushV
	var_220_string = "Neutral"; // 0x377 MovS
	func_1137(var_179_object, var_220_string); // 0x378 Call
	var_221_int = 5533; // 0x37a PushI
	SetMessage(var_221_int); // 0x37b TObjFunc
	ClearReplies(); // 0x37d TObjFunc
	var_222_int = 5534; // 0x37f PushI
	var_223_int = 6099; // 0x380 PushI
	var_224_int = 6098; // 0x381 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x382 TObjFunc
	var_225_int = 5571; // 0x384 PushI
	var_226_int = 6140; // 0x385 PushI
	var_227_int = 6139; // 0x386 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x387 TObjFunc
	goto Label_1107; // 0x389 Jump
	
Label_906:
	var_228_bool = 0; var_229_object = Obj(); // 0x38a PushV
	var_229_object = var_1_object; // 0x38b MovT
	func_5026(var_229_object); // 0x38c Call
	if(var_228_bool == 0) goto Label_926; // 0x38e JumpB
	var_234_string = ""; // 0x38f PushV
	var_234_string = "Neutral"; // 0x390 MovS
	func_1137(var_179_object, var_234_string); // 0x391 Call
	var_235_int = 5574; // 0x393 PushI
	SetMessage(var_235_int); // 0x394 TObjFunc
	ClearReplies(); // 0x396 TObjFunc
	var_236_int = 5575; // 0x398 PushI
	var_237_int = 6145; // 0x399 PushI
	var_238_int = 6144; // 0x39a PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x39b TObjFunc
	goto Label_1107; // 0x39d Jump
	
Label_926:
	var_239_bool = 0; // 0x39e PushV
	var_239_bool = 0; // 0x39f MovB
	var_240_bool = 0; var_241_object = Obj(); // 0x3a0 PushV
	var_241_object = var_1_object; // 0x3a1 MovT
	func_5038(var_241_object); // 0x3a2 Call
	if(var_240_bool == 0) goto Label_939; // 0x3a4 JumpB
	var_246_bool = 0; var_247_object = Obj(); // 0x3a5 PushV
	var_247_object = var_1_object; // 0x3a6 MovT
	func_5098(var_246_bool, var_247_object); // 0x3a7 Call
	if(var_246_bool == 0) goto Label_939; // 0x3a9 JumpB
	var_239_bool = 1; // 0x3aa MovB
	
Label_939:
	if(var_239_bool == 0) goto Label_960; // 0x3ab JumpB
	var_250_string = ""; // 0x3ac PushV
	var_250_string = "Neutral"; // 0x3ad MovS
	func_1137(var_179_object, var_250_string); // 0x3ae Call
	var_251_int = 5527; // 0x3b0 PushI
	SetMessage(var_251_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_252_int = 5528; // 0x3b5 PushI
	var_253_int = 6901; // 0x3b6 PushI
	var_254_int = 6092; // 0x3b7 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x3b8 TObjFunc
	var_255_int = 5529; // 0x3ba PushI
	var_256_int = 6187; // 0x3bb PushI
	var_257_int = 6093; // 0x3bc PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x3bd TObjFunc
	goto Label_1107; // 0x3bf Jump
	
Label_960:
	var_258_bool = 0; var_259_object = Obj(); // 0x3c0 PushV
	var_259_object = var_1_object; // 0x3c1 MovT
	func_5002(var_259_object); // 0x3c2 Call
	if(var_258_bool == 0) goto Label_985; // 0x3c4 JumpB
	var_264_string = ""; // 0x3c5 PushV
	var_264_string = "Neutral"; // 0x3c6 MovS
	func_1137(var_179_object, var_264_string); // 0x3c7 Call
	var_265_int = 5604; // 0x3c9 PushI
	SetMessage(var_265_int); // 0x3ca TObjFunc
	ClearReplies(); // 0x3cc TObjFunc
	var_266_int = 5605; // 0x3ce PushI
	var_267_int = 6180; // 0x3cf PushI
	var_268_int = 6179; // 0x3d0 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x3d1 TObjFunc
	var_269_int = 5611; // 0x3d3 PushI
	var_270_int = 6180; // 0x3d4 PushI
	var_271_int = 6185; // 0x3d5 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x3d6 TObjFunc
	goto Label_1107; // 0x3d8 Jump
	
Label_985:
	var_272_string = ""; // 0x3d9 PushV
	var_272_string = "Neutral"; // 0x3da MovS
	func_1137(var_179_object, var_272_string); // 0x3db Call
	var_273_int = 8097; // 0x3dd PushI
	SetMessage(var_273_int); // 0x3de TObjFunc
	ClearReplies(); // 0x3e0 TObjFunc
	var_274_bool = 0; var_275_object = Obj(); // 0x3e2 PushV
	var_275_object = var_1_object; // 0x3e3 MovT
	func_5098(var_274_bool, var_275_object); // 0x3e4 Call
	if(var_274_bool == 0) goto Label_1004; // 0x3e6 JumpB
	var_276_int = 8098; // 0x3e7 PushI
	var_277_int = -1; // 0x3e8 PushI
	var_278_int = 8921; // 0x3e9 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x3ea TObjFunc
	
Label_1004:
	var_279_bool = 0; // 0x3ec PushV
	var_279_bool = 0; // 0x3ed MovB
	var_280_bool = 0; var_281_object = Obj(); // 0x3ee PushV
	var_281_object = var_1_object; // 0x3ef MovT
	func_5288(var_281_object); // 0x3f0 Call
	if(var_280_bool == 0) goto Label_1017; // 0x3f2 JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x3f3 PushV
	var_287_object = var_1_object; // 0x3f4 MovT
	func_5038(var_287_object); // 0x3f5 Call
	if(var_286_bool == 0) goto Label_1017; // 0x3f7 JumpB
	var_279_bool = 1; // 0x3f8 MovB
	
Label_1017:
	if(var_279_bool == 0) goto Label_1023; // 0x3f9 JumpB
	var_288_int = 8109; // 0x3fa PushI
	var_289_int = 8947; // 0x3fb PushI
	var_290_int = 8932; // 0x3fc PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3fd TObjFunc
	
Label_1023:
	var_291_bool = 0; // 0x3ff PushV
	var_291_bool = 0; // 0x400 MovB
	var_292_bool = 0; var_293_object = Obj(); // 0x401 PushV
	var_293_object = var_1_object; // 0x402 MovT
	func_5192(var_293_object); // 0x403 Call
	if(var_292_bool == 0) goto Label_1036; // 0x405 JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x406 PushV
	var_299_object = var_1_object; // 0x407 MovT
	func_5300(var_299_object); // 0x408 Call
	if(var_298_bool == 0) goto Label_1036; // 0x40a JumpB
	var_291_bool = 1; // 0x40b MovB
	
Label_1036:
	if(var_291_bool == 0) goto Label_1042; // 0x40c JumpB
	var_304_int = 8111; // 0x40d PushI
	var_305_int = 8948; // 0x40e PushI
	var_306_int = 8934; // 0x40f PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x410 TObjFunc
	
Label_1042:
	var_307_bool = 0; // 0x412 PushV
	var_307_bool = 0; // 0x413 MovB
	var_308_bool = 0; var_309_object = Obj(); // 0x414 PushV
	var_309_object = var_1_object; // 0x415 MovT
	func_5132(var_309_object); // 0x416 Call
	if(var_308_bool == 0) goto Label_1055; // 0x418 JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x419 PushV
	var_315_object = var_1_object; // 0x41a MovT
	func_5312(var_315_object); // 0x41b Call
	if(var_314_bool == 0) goto Label_1055; // 0x41d JumpB
	var_307_bool = 1; // 0x41e MovB
	
Label_1055:
	if(var_307_bool == 0) goto Label_1061; // 0x41f JumpB
	var_320_int = 8115; // 0x420 PushI
	var_321_int = 8949; // 0x421 PushI
	var_322_int = 8938; // 0x422 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x423 TObjFunc
	
Label_1061:
	var_323_bool = 0; // 0x425 PushV
	var_323_bool = 0; // 0x426 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x427 PushV
	var_325_object = var_1_object; // 0x428 MovT
	func_5396(var_325_object); // 0x429 Call
	if(var_324_bool == 0) goto Label_1074; // 0x42b JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x42c PushV
	var_331_object = var_1_object; // 0x42d MovT
	func_5324(var_331_object); // 0x42e Call
	if(var_330_bool == 0) goto Label_1074; // 0x430 JumpB
	var_323_bool = 1; // 0x431 MovB
	
Label_1074:
	if(var_323_bool == 0) goto Label_1080; // 0x432 JumpB
	var_336_int = 8117; // 0x433 PushI
	var_337_int = 8950; // 0x434 PushI
	var_338_int = 8940; // 0x435 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x436 TObjFunc
	
Label_1080:
	var_339_bool = 0; // 0x438 PushV
	var_339_bool = 0; // 0x439 MovB
	var_340_bool = 0; var_341_object = Obj(); // 0x43a PushV
	var_341_object = var_1_object; // 0x43b MovT
	func_5384(var_341_object); // 0x43c Call
	if(var_340_bool == 0) goto Label_1093; // 0x43e JumpB
	var_346_bool = 0; var_347_object = Obj(); // 0x43f PushV
	var_347_object = var_1_object; // 0x440 MovT
	func_5336(var_347_object); // 0x441 Call
	if(var_346_bool == 0) goto Label_1093; // 0x443 JumpB
	var_339_bool = 1; // 0x444 MovB
	
Label_1093:
	if(var_339_bool == 0) goto Label_1099; // 0x445 JumpB
	var_352_int = 8119; // 0x446 PushI
	var_353_int = 8951; // 0x447 PushI
	var_354_int = 8942; // 0x448 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x449 TObjFunc
	
Label_1099:
	var_355_int = 15220; // 0x44b PushI
	var_356_int = -1; // 0x44c PushI
	var_357_int = 16497; // 0x44d PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x44e TObjFunc
	goto Label_1107; // 0x450 Jump
}


func_4946()
{
	var_43_string = "resque_list"; // 0x1353 PushS
	var_44_int = 1; // 0x1354 PushI
	SetVariable(var_43_string, var_44_int); // 0x1355 Func
	func_5515(); // 0x1358 Call
	return 0; // 0x135a Return
}


func_5204(var_54_bool)
{
	var_56_int = 0; var_57_string = ""; // 0x1455 PushV
	var_57_string = "d11q01"; // 0x1456 MovS
	func_4770(var_56_int, var_57_string); // 0x1457 Call
	var_60_int = 1; // 0x1459 PushI
	var_61_bool = var_56_int == var_60_int; // 0x145a Eq
	if(var_61_bool == 0) goto Label_5214; // 0x145b JumpB
	var_54_bool = 1; // 0x145c MovB
	return 0; // 0x145d Return
	
Label_5214:
	var_54_bool = 0; // 0x145e MovB
	return 0; // 0x145f Return
}


func_345(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; // 0x159 PushV
	var_0_object = var_460_object; // 0x15a TMov
	var_470_bool = 0; var_471_object = Obj(); // 0x15b PushV
	var_471_object = var_460_object; // 0x15c Mov
	func_4675(var_471_object); // 0x15d Call
	var_472_bool = var_470_bool == 0; // 0x15f Not
	if(var_472_bool == 0) goto Label_355; // 0x160 JumpB
	var_459_int = -2; // 0x161 MovI
	return 8; // 0x162 Return
	
Label_355:
	CreateDialog(var_466_object); // 0x163 Func
	var_473_int = 0; // 0x165 PushV
	func_4804(var_473_int); // 0x166 Call
	SetNPCName(var_473_int); // 0x168 ObjFunc
	var_474_string = ""; // 0x16a PushV
	func_4806(var_474_string); // 0x16b Call
	SetPhoto(var_474_string); // 0x16d ObjFunc
	var_475_int = 0; // 0x16f PushV
	func_5470(var_475_int); // 0x170 Call
	SetPlayerName(var_475_int); // 0x172 ObjFunc
	var_468_int = -1; // 0x174 MovI
	IsOverrideActive(var_467_bool); // 0x175 Func
	var_476_bool = var_467_bool; // 0x177 Push
	if(var_476_bool == 0) goto Label_379; // 0x178 JumpB
	var_459_int = -2; // 0x179 MovI
	return 8; // 0x17a Return
	
Label_379:
	DoDialog(var_466_object); // 0x17b Func
	var_477_object = Obj(); var_478_object = Obj(); // 0x17d PushV
	var_477_object = var_460_object; // 0x17e Mov
	var_478_object = var_466_object; // 0x17f Mov
	TaskCall(5); // 0x180 TaskCall
	func_408(var_479_object, var_480_object, var_481_string, var_482_bool, var_477_object, var_478_object); // 0x181 Call
	TaskReturn(); // 0x182 TaskReturn
	IsDialogEnd(var_469_bool); // 0x184 ObjFunc
	
Label_390:
	var_541_bool = var_469_bool == 0; // 0x186 Not
	if(var_541_bool == 0) goto Label_397; // 0x187 JumpB
	sync(); // 0x188 Func
	IsDialogEnd(var_469_bool); // 0x18a ObjFunc
	goto Label_390; // 0x18c Jump
	
Label_397:
	var_542_object = Obj(); // 0x18d PushV
	var_542_object = var_460_object; // 0x18e Mov
	func_4731(); // 0x18f Call
	StopDialog(var_466_object); // 0x191 Func
	GetReturnValue(var_468_int); // 0x193 ObjFunc
	var_459_int = var_468_int; // 0x195 Mov
	return 8; // 0x196 Return
}


func_4955()
{
	var_102_int = 2000; // 0x135c PushI
	SetReturnValue(var_102_int); // 0x135d ObjFunc
	return 0; // 0x135f Return
}


func_3933(var_0_object, var_689_int, var_690_object)
{
	var_692_object = Obj(); var_693_bool = 0; var_694_int = 0; var_695_bool = 0; var_696_object = Obj(); var_697_bool = 0; var_698_int = 0; var_699_bool = 0; // 0xf5d PushV
	var_0_object = var_690_object; // 0xf5e TMov
	var_700_bool = 0; var_701_object = Obj(); // 0xf5f PushV
	var_701_object = var_690_object; // 0xf60 Mov
	func_4675(var_701_object); // 0xf61 Call
	var_702_bool = var_700_bool == 0; // 0xf63 Not
	if(var_702_bool == 0) goto Label_3943; // 0xf64 JumpB
	var_689_int = -2; // 0xf65 MovI
	return 8; // 0xf66 Return
	
Label_3943:
	CreateDialog(var_696_object); // 0xf67 Func
	var_703_int = 0; // 0xf69 PushV
	func_4804(var_703_int); // 0xf6a Call
	SetNPCName(var_703_int); // 0xf6c ObjFunc
	var_704_string = ""; // 0xf6e PushV
	func_4806(var_704_string); // 0xf6f Call
	SetPhoto(var_704_string); // 0xf71 ObjFunc
	var_705_int = 0; // 0xf73 PushV
	func_5470(var_705_int); // 0xf74 Call
	SetPlayerName(var_705_int); // 0xf76 ObjFunc
	var_698_int = -1; // 0xf78 MovI
	IsOverrideActive(var_697_bool); // 0xf79 Func
	var_706_bool = var_697_bool; // 0xf7b Push
	if(var_706_bool == 0) goto Label_3967; // 0xf7c JumpB
	var_689_int = -2; // 0xf7d MovI
	return 8; // 0xf7e Return
	
Label_3967:
	DoDialog(var_696_object); // 0xf7f Func
	var_707_object = Obj(); var_708_object = Obj(); // 0xf81 PushV
	var_707_object = var_690_object; // 0xf82 Mov
	var_708_object = var_696_object; // 0xf83 Mov
	TaskCall(15); // 0xf84 TaskCall
	func_3996(var_709_object, var_710_object, var_711_string, var_712_bool, var_707_object, var_708_object); // 0xf85 Call
	TaskReturn(); // 0xf86 TaskReturn
	IsDialogEnd(var_699_bool); // 0xf88 ObjFunc
	
Label_3978:
	var_785_bool = var_699_bool == 0; // 0xf8a Not
	if(var_785_bool == 0) goto Label_3985; // 0xf8b JumpB
	sync(); // 0xf8c Func
	IsDialogEnd(var_699_bool); // 0xf8e ObjFunc
	goto Label_3978; // 0xf90 Jump
	
Label_3985:
	var_786_object = Obj(); // 0xf91 PushV
	var_786_object = var_690_object; // 0xf92 Mov
	func_4731(); // 0xf93 Call
	StopDialog(var_696_object); // 0xf95 Func
	GetReturnValue(var_698_int); // 0xf97 ObjFunc
	var_689_int = var_698_int; // 0xf99 Mov
	return 8; // 0xf9a Return
}


func_5470(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x155e PushV
	var_96_string = "player"; // 0x155f PushS
	GetVariable(var_96_string, var_95_int); // 0x1560 Func
	var_97_int = 0; // 0x1562 PushI
	var_98_bool = var_95_int == var_97_int; // 0x1563 Eq
	if(var_98_bool == 0) goto Label_5480; // 0x1564 JumpB
	var_93_int = 200001; // 0x1565 MovI
	return 2; // 0x1566 Return
	
Label_5480:
	var_99_int = 1; // 0x1568 PushI
	var_100_bool = var_95_int == var_99_int; // 0x1569 Eq
	if(var_100_bool == 0) goto Label_5485; // 0x156a JumpB
	var_93_int = 200002; // 0x156b MovI
	return 2; // 0x156c Return
	
Label_5485:
	var_93_int = 200003; // 0x156d MovI
	return 2; // 0x156e Return
}


func_5216(var_62_bool)
{
	var_64_int = 0; var_65_string = ""; // 0x1461 PushV
	var_65_string = "ood11Maria1"; // 0x1462 MovS
	func_4770(var_64_int, var_65_string); // 0x1463 Call
	var_66_int = 0; // 0x1465 PushI
	var_67_bool = var_64_int == var_66_int; // 0x1466 Eq
	if(var_67_bool == 0) goto Label_5226; // 0x1467 JumpB
	var_62_bool = 1; // 0x1468 MovB
	return 0; // 0x1469 Return
	
Label_5226:
	var_62_bool = 0; // 0x146a MovB
	return 0; // 0x146b Return
}


func_4960()
{
	var_127_string = "ood1Maria5"; // 0x1361 PushS
	var_128_int = 1; // 0x1362 PushI
	SetVariable(var_127_string, var_128_int); // 0x1363 Func
	return 0; // 0x1365 Return
}


func_4966()
{
	var_133_string = "ood1Maria6"; // 0x1367 PushS
	var_134_int = 1; // 0x1368 PushI
	SetVariable(var_133_string, var_134_int); // 0x1369 Func
	return 0; // 0x136b Return
}


func_5228(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x146d PushV
	var_104_string = "ood11Maria2"; // 0x146e MovS
	func_4770(var_103_int, var_104_string); // 0x146f Call
	var_105_int = 0; // 0x1471 PushI
	var_106_bool = var_103_int == var_105_int; // 0x1472 Eq
	if(var_106_bool == 0) goto Label_5238; // 0x1473 JumpB
	var_101_bool = 1; // 0x1474 MovB
	return 0; // 0x1475 Return
	
Label_5238:
	var_101_bool = 0; // 0x1476 MovB
	return 0; // 0x1477 Return
}


func_4972()
{
	var_139_string = "ood1Maria7"; // 0x136d PushS
	var_140_int = 1; // 0x136e PushI
	SetVariable(var_139_string, var_140_int); // 0x136f Func
	return 0; // 0x1371 Return
}


func_5487()
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x156f PushV
	var_137_string = "Adding diary entry"; // 0x1570 PushS
	Trace(var_137_string); // 0x1571 Func
	var_138_int = 134; // 0x1573 PushI
	var_139_int = 2; // 0x1574 PushI
	var_140_int = 15285; // 0x1575 PushI
	CreateDiaryEntry(var_136_object, var_138_int, var_139_int, var_140_int); // 0x1576 Func
	var_141_bool = 0; var_142_object = Obj(); var_143_int = 0; // 0x1578 PushV
	var_142_object = var_136_object; // 0x1579 Mov
	var_143_int = 11; // 0x157a MovI
	func_5424(var_141_bool, var_142_object, var_143_int); // 0x157b Call
	return 2; // 0x157d Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x71 TMov
	var_1_object = var_102_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_108_int = 1; // 0x74 PushI
	if(var_108_int == 0) goto Label_155; // 0x75 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x76 PushV
	var_109_object = var_1_object; // 0x77 MovT
	var_110_object = var_0_object; // 0x78 MovT
	func_4916(); // 0x79 Call
	var_113_string = ""; // 0x7b PushV
	var_113_string = "Neutral"; // 0x7c MovS
	func_185(var_103_object, var_113_string); // 0x7d Call
	var_128_int = 72; // 0x7f PushI
	SetMessage(var_128_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_129_int = 73; // 0x84 PushI
	var_130_int = 87; // 0x85 PushI
	var_131_int = 85; // 0x86 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x87 TObjFunc
	var_132_int = 74; // 0x89 PushI
	var_133_int = 88; // 0x8a PushI
	var_134_int = 86; // 0x8b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x8c TObjFunc
	var_135_int = 86; // 0x8e PushI
	var_136_int = 87; // 0x8f PushI
	var_137_int = 98; // 0x90 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x91 TObjFunc
	var_138_int = 87; // 0x93 PushI
	var_139_int = 87; // 0x94 PushI
	var_140_int = 99; // 0x95 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x96 TObjFunc
	goto Label_155; // 0x98 Jump
	
Label_155:
	var_141_bool = 0; // 0x9b PushV
	func_4808(var_141_bool); // 0x9c Call
	if(var_141_bool == 0) goto Label_170; // 0x9e JumpB
	
Label_159:
	lshWaitForAnimEnd(); // 0x9f Func
	var_142_object = var_3_object; // 0xa1 PushT
	if(var_142_object == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_169:
	goto Label_184; // 0xa9 Jump
	
Label_184:
	return 0; // 0xb8 Return
	
Label_164:
	var_143_string = ""; // 0xa4 PushV
	var_143_string = var_2_object; // 0xa5 MovT
	func_4735(var_143_string); // 0xa6 Call
	goto Label_159; // 0xa8 Jump
	
Label_170:
	var_144_string = "all"; // 0xaa PushS
	var_145_string = "idle"; // 0xab PushS
	PlayAnimation(var_144_string, var_145_string); // 0xac Func
	
Label_174:
	WaitForAnimEnd(); // 0xae Func
	var_146_object = var_3_object; // 0xb0 PushT
	if(var_146_object == 0) goto Label_179; // 0xb1 JumpB
	goto Label_184; // 0xb2 Jump
	
Label_179:
	var_147_string = "all"; // 0xb3 PushS
	var_148_string = "idle"; // 0xb4 PushS
	PlayAnimation(var_147_string, var_148_string); // 0xb5 Func
	goto Label_174; // 0xb7 Jump
}


func_1137(var_2_object, var_158_string)
{
	var_159_bool = 0; // 0x472 PushV
	func_4808(var_159_bool); // 0x473 Call
	var_160_bool = var_159_bool == 0; // 0x475 Not
	if(var_160_bool == 0) goto Label_1144; // 0x476 JumpB
	return 0; // 0x477 Return
	
Label_1144:
	var_161_bool = var_158_string == var_2_object; // 0x478 Eq
	if(var_161_bool == 0) goto Label_1147; // 0x479 JumpB
	return 0; // 0x47a Return
	
Label_1147:
	var_162_string = ""; // 0x47b PushV
	var_162_string = var_158_string; // 0x47c Mov
	func_4735(var_162_string); // 0x47d Call
	var_2_object = var_158_string; // 0x47f TMov
	return 0; // 0x480 Return
}


func_4978()
{
	var_145_string = "ood1Maria8"; // 0x1373 PushS
	var_146_int = 1; // 0x1374 PushI
	SetVariable(var_145_string, var_146_int); // 0x1375 Func
	return 0; // 0x1377 Return
}


func_2422(var_0_object, var_1_object, var_2_object, var_3_object, var_381_object, var_382_object)
{
	var_0_object = var_382_object; // 0x977 TMov
	var_1_object = var_381_object; // 0x978 TMov
	var_3_object = 0; // 0x979 TMovB
	var_387_int = 1; // 0x97a PushI
	if(var_387_int == 0) goto Label_2548; // 0x97b JumpB
	var_388_bool = 0; var_389_object = Obj(); // 0x97c PushV
	var_389_object = var_1_object; // 0x97d MovT
	func_5276(var_389_object); // 0x97e Call
	if(var_388_bool == 0) goto Label_2453; // 0x980 JumpB
	var_394_object = Obj(); var_395_object = Obj(); // 0x981 PushV
	var_394_object = var_1_object; // 0x982 MovT
	var_395_object = var_0_object; // 0x983 MovT
	func_4940(); // 0x984 Call
	var_398_string = ""; // 0x986 PushV
	var_398_string = "Neutral"; // 0x987 MovS
	func_2578(var_382_object, var_398_string); // 0x988 Call
	var_403_int = 14519; // 0x98a PushI
	SetMessage(var_403_int); // 0x98b TObjFunc
	ClearReplies(); // 0x98d TObjFunc
	var_404_int = 14520; // 0x98f PushI
	var_405_int = 15760; // 0x990 PushI
	var_406_int = 15759; // 0x991 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x992 TObjFunc
	goto Label_2548; // 0x994 Jump
	
Label_2548:
	var_407_bool = 0; // 0x9f4 PushV
	func_4808(var_407_bool); // 0x9f5 Call
	if(var_407_bool == 0) goto Label_2563; // 0x9f7 JumpB
	
Label_2552:
	lshWaitForAnimEnd(); // 0x9f8 Func
	var_408_object = var_3_object; // 0x9fa PushT
	if(var_408_object == 0) goto Label_2557; // 0x9fb JumpB
	goto Label_2562; // 0x9fc Jump
	
Label_2562:
	goto Label_2577; // 0xa02 Jump
	
Label_2577:
	return 0; // 0xa11 Return
	
Label_2557:
	var_409_string = ""; // 0x9fd PushV
	var_409_string = var_2_object; // 0x9fe MovT
	func_4735(var_409_string); // 0x9ff Call
	goto Label_2552; // 0xa01 Jump
	
Label_2563:
	var_410_string = "all"; // 0xa03 PushS
	var_411_string = "idle"; // 0xa04 PushS
	PlayAnimation(var_410_string, var_411_string); // 0xa05 Func
	
Label_2567:
	WaitForAnimEnd(); // 0xa07 Func
	var_412_object = var_3_object; // 0xa09 PushT
	if(var_412_object == 0) goto Label_2572; // 0xa0a JumpB
	goto Label_2577; // 0xa0b Jump
	
Label_2572:
	var_413_string = "all"; // 0xa0c PushS
	var_414_string = "idle"; // 0xa0d PushS
	PlayAnimation(var_413_string, var_414_string); // 0xa0e Func
	goto Label_2567; // 0xa10 Jump
	
Label_2453:
	var_415_string = ""; // 0x995 PushV
	var_415_string = "Neutral"; // 0x996 MovS
	func_2578(var_382_object, var_415_string); // 0x997 Call
	var_416_int = 6887; // 0x999 PushI
	SetMessage(var_416_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_417_bool = 0; // 0x99e PushV
	var_417_bool = 0; // 0x99f MovB
	var_418_bool = 0; var_419_object = Obj(); // 0x9a0 PushV
	var_419_object = var_1_object; // 0x9a1 MovT
	func_5062(var_419_object); // 0x9a2 Call
	if(var_418_bool == 0) goto Label_2475; // 0x9a4 JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x9a5 PushV
	var_425_object = var_1_object; // 0x9a6 MovT
	func_5086(var_425_object); // 0x9a7 Call
	if(var_424_bool == 0) goto Label_2475; // 0x9a9 JumpB
	var_417_bool = 1; // 0x9aa MovB
	
Label_2475:
	if(var_417_bool == 0) goto Label_2481; // 0x9ab JumpB
	var_430_int = 6888; // 0x9ac PushI
	var_431_int = 7595; // 0x9ad PushI
	var_432_int = 7594; // 0x9ae PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x9af TObjFunc
	
Label_2481:
	var_433_bool = 0; // 0x9b1 PushV
	var_433_bool = 0; // 0x9b2 MovB
	var_434_bool = 0; var_435_object = Obj(); // 0x9b3 PushV
	var_435_object = var_1_object; // 0x9b4 MovT
	func_5074(var_435_object); // 0x9b5 Call
	if(var_434_bool == 0) goto Label_2494; // 0x9b7 JumpB
	var_440_bool = 0; var_441_object = Obj(); // 0x9b8 PushV
	var_441_object = var_1_object; // 0x9b9 MovT
	func_5120(var_441_object); // 0x9ba Call
	if(var_440_bool == 0) goto Label_2494; // 0x9bc JumpB
	var_433_bool = 1; // 0x9bd MovB
	
Label_2494:
	if(var_433_bool == 0) goto Label_2500; // 0x9be JumpB
	var_446_int = 6918; // 0x9bf PushI
	var_447_int = 7625; // 0x9c0 PushI
	var_448_int = 7624; // 0x9c1 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x9c2 TObjFunc
	
Label_2500:
	var_449_int = 7400; // 0x9c4 PushI
	var_450_int = -1; // 0x9c5 PushI
	var_451_int = 8166; // 0x9c6 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x9c7 TObjFunc
	goto Label_2548; // 0x9c9 Jump
}


func_5240(var_107_bool)
{
	var_109_int = 0; var_110_string = ""; // 0x1479 PushV
	var_110_string = "d11q01"; // 0x147a MovS
	func_4770(var_109_int, var_110_string); // 0x147b Call
	var_111_int = 4; // 0x147d PushI
	var_112_bool = var_109_int >= var_111_int; // 0x147e GE
	if(var_112_bool == 0) goto Label_5250; // 0x147f JumpB
	var_107_bool = 1; // 0x1480 MovB
	return 0; // 0x1481 Return
	
Label_5250:
	var_107_bool = 0; // 0x1482 MovB
	return 0; // 0x1483 Return
}


func_4984()
{
	var_68_string = "d6MariaVisit"; // 0x1379 PushS
	var_69_int = 1; // 0x137a PushI
	SetVariable(var_68_string, var_69_int); // 0x137b Func
	return 0; // 0x137d Return
}


func_4731()
{
	CameraSwitchToNormal(); // 0x127c Func
	return 0; // 0x127e Return
}


func_4990()
{
	var_73_string = "ood10Maria1"; // 0x137f PushS
	var_74_int = 1; // 0x1380 PushI
	SetVariable(var_73_string, var_74_int); // 0x1381 Func
	return 0; // 0x1383 Return
}


func_4735(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0x127f PushV
	var_45_string = "playing "; // 0x1280 PushS
	var_46_int = var_45_string + var_40_string; // 0x1281 Add
	Trace(var_46_int); // 0x1282 Func
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float); // 0x1284 Func
	lshPlayAnimation(var_43_float, var_44_float); // 0x1286 Func
	var_47_string = "start: "; // 0x1288 PushS
	var_48_int = var_47_string + var_43_float; // 0x1289 Add
	Trace(var_48_int); // 0x128a Func
	var_49_string = "end: "; // 0x128c PushS
	var_50_int = var_49_string + var_44_float; // 0x128d Add
	Trace(var_50_int); // 0x128e Func
	return 4; // 0x1290 Return
}


func_5503(var_54_int)
{
	var_55_int = 0; var_56_int = 0; // 0x157f PushV
	var_57_string = "vol_"; // 0x1580 PushS
	var_58_int = var_57_string + var_54_int; // 0x1581 Add
	GetVariable(var_58_int, var_56_int); // 0x1582 Func
	var_59_string = "vol_"; // 0x1584 PushS
	var_60_int = var_59_string + var_54_int; // 0x1585 Add
	var_61_int = 8; // 0x1586 PushI
	var_62_int = var_56_int | var_61_int; // 0x1587 Or
	SetVariable(var_60_int, var_62_int); // 0x1588 Func
	return 2; // 0x158a Return
}


func_5252(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x1485 PushV
	var_221_string = "d11q01"; // 0x1486 MovS
	func_4770(var_220_int, var_221_string); // 0x1487 Call
	var_222_int = 1000; // 0x1489 PushI
	var_223_bool = var_220_int == var_222_int; // 0x148a Eq
	if(var_223_bool == 0) goto Label_5262; // 0x148b JumpB
	var_218_bool = 1; // 0x148c MovB
	return 0; // 0x148d Return
	
Label_5262:
	var_218_bool = 0; // 0x148e MovB
	return 0; // 0x148f Return
}


func_4996()
{
	var_43_string = "d10q01MariaSavePetr"; // 0x1385 PushS
	var_44_int = 1; // 0x1386 PushI
	SetVariable(var_43_string, var_44_int); // 0x1387 Func
	return 0; // 0x1389 Return
}


func_5002(var_224_bool)
{
	var_226_int = 0; var_227_string = ""; // 0x138b PushV
	var_227_string = "ood1Maria1"; // 0x138c MovS
	func_4770(var_226_int, var_227_string); // 0x138d Call
	var_228_int = 0; // 0x138f PushI
	var_229_bool = var_226_int == var_228_int; // 0x1390 Eq
	if(var_229_bool == 0) goto Label_5012; // 0x1391 JumpB
	var_224_bool = 1; // 0x1392 MovB
	return 0; // 0x1393 Return
	
Label_5012:
	var_224_bool = 0; // 0x1394 MovB
	return 0; // 0x1395 Return
}


func_3211(var_0_object, var_545_int, var_546_object)
{
	var_548_object = Obj(); var_549_bool = 0; var_550_int = 0; var_551_bool = 0; var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; // 0xc8b PushV
	var_0_object = var_546_object; // 0xc8c TMov
	var_556_bool = 0; var_557_object = Obj(); // 0xc8d PushV
	var_557_object = var_546_object; // 0xc8e Mov
	func_4675(var_557_object); // 0xc8f Call
	var_558_bool = var_556_bool == 0; // 0xc91 Not
	if(var_558_bool == 0) goto Label_3221; // 0xc92 JumpB
	var_545_int = -2; // 0xc93 MovI
	return 8; // 0xc94 Return
	
Label_3221:
	CreateDialog(var_552_object); // 0xc95 Func
	var_559_int = 0; // 0xc97 PushV
	func_4804(var_559_int); // 0xc98 Call
	SetNPCName(var_559_int); // 0xc9a ObjFunc
	var_560_string = ""; // 0xc9c PushV
	func_4806(var_560_string); // 0xc9d Call
	SetPhoto(var_560_string); // 0xc9f ObjFunc
	var_561_int = 0; // 0xca1 PushV
	func_5470(var_561_int); // 0xca2 Call
	SetPlayerName(var_561_int); // 0xca4 ObjFunc
	var_554_int = -1; // 0xca6 MovI
	IsOverrideActive(var_553_bool); // 0xca7 Func
	var_562_bool = var_553_bool; // 0xca9 Push
	if(var_562_bool == 0) goto Label_3245; // 0xcaa JumpB
	var_545_int = -2; // 0xcab MovI
	return 8; // 0xcac Return
	
Label_3245:
	DoDialog(var_552_object); // 0xcad Func
	var_563_object = Obj(); var_564_object = Obj(); // 0xcaf PushV
	var_563_object = var_546_object; // 0xcb0 Mov
	var_564_object = var_552_object; // 0xcb1 Mov
	TaskCall(11); // 0xcb2 TaskCall
	func_3274(var_565_object, var_566_object, var_567_string, var_568_bool, var_563_object, var_564_object); // 0xcb3 Call
	TaskReturn(); // 0xcb4 TaskReturn
	IsDialogEnd(var_555_bool); // 0xcb6 ObjFunc
	
Label_3256:
	var_605_bool = var_555_bool == 0; // 0xcb8 Not
	if(var_605_bool == 0) goto Label_3263; // 0xcb9 JumpB
	sync(); // 0xcba Func
	IsDialogEnd(var_555_bool); // 0xcbc ObjFunc
	goto Label_3256; // 0xcbe Jump
	
Label_3263:
	var_606_object = Obj(); // 0xcbf PushV
	var_606_object = var_546_object; // 0xcc0 Mov
	func_4731(); // 0xcc1 Call
	StopDialog(var_552_object); // 0xcc3 Func
	GetReturnValue(var_554_int); // 0xcc5 ObjFunc
	var_545_int = var_554_int; // 0xcc7 Mov
	return 8; // 0xcc8 Return
}


func_5515()
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x158b PushV
	var_47_int = 0; // 0x158c MovI
	
Label_5517:
	var_49_int = 3; // 0x158d PushI
	var_50_bool = var_47_int < var_49_int; // 0x158e LT
	if(var_50_bool == 0) goto Label_5629; // 0x158f JumpB
	var_51_int = 13; // 0x1590 PushI
	irand(var_48_int, var_51_int); // 0x1591 Func
	var_52_int = 0; // 0x1593 PushI
	var_53_bool = var_48_int == var_52_int; // 0x1594 Eq
	if(var_53_bool == 0) goto Label_5531; // 0x1595 JumpB
	var_54_int = 0; // 0x1596 PushV
	var_54_int = 11; // 0x1597 MovI
	func_5503(var_54_int); // 0x1598 Call
	goto Label_5626; // 0x159a Jump
	
Label_5626:
	var_63_int = 1; // 0x15fa PushI
	var_47_int = var_47_int + var_63_int; // 0x15fb Add2
	goto Label_5517; // 0x15fc Jump
	
Label_5531:
	var_64_int = 1; // 0x159b PushI
	var_65_bool = var_48_int == var_64_int; // 0x159c Eq
	if(var_65_bool == 0) goto Label_5539; // 0x159d JumpB
	var_66_int = 0; // 0x159e PushV
	var_66_int = 18; // 0x159f MovI
	func_5503(var_66_int); // 0x15a0 Call
	goto Label_5626; // 0x15a2 Jump
	
Label_5539:
	var_67_int = 2; // 0x15a3 PushI
	var_68_bool = var_48_int == var_67_int; // 0x15a4 Eq
	if(var_68_bool == 0) goto Label_5547; // 0x15a5 JumpB
	var_69_int = 0; // 0x15a6 PushV
	var_69_int = 21; // 0x15a7 MovI
	func_5503(var_69_int); // 0x15a8 Call
	goto Label_5626; // 0x15aa Jump
	
Label_5547:
	var_70_int = 3; // 0x15ab PushI
	var_71_bool = var_48_int == var_70_int; // 0x15ac Eq
	if(var_71_bool == 0) goto Label_5555; // 0x15ad JumpB
	var_72_int = 0; // 0x15ae PushV
	var_72_int = 2; // 0x15af MovI
	func_5503(var_72_int); // 0x15b0 Call
	goto Label_5626; // 0x15b2 Jump
	
Label_5555:
	var_73_int = 4; // 0x15b3 PushI
	var_74_bool = var_48_int == var_73_int; // 0x15b4 Eq
	if(var_74_bool == 0) goto Label_5563; // 0x15b5 JumpB
	var_75_int = 0; // 0x15b6 PushV
	var_75_int = 9; // 0x15b7 MovI
	func_5503(var_75_int); // 0x15b8 Call
	goto Label_5626; // 0x15ba Jump
	
Label_5563:
	var_76_int = 5; // 0x15bb PushI
	var_77_bool = var_48_int == var_76_int; // 0x15bc Eq
	if(var_77_bool == 0) goto Label_5571; // 0x15bd JumpB
	var_78_int = 0; // 0x15be PushV
	var_78_int = 13; // 0x15bf MovI
	func_5503(var_78_int); // 0x15c0 Call
	goto Label_5626; // 0x15c2 Jump
	
Label_5571:
	var_79_int = 6; // 0x15c3 PushI
	var_80_bool = var_48_int == var_79_int; // 0x15c4 Eq
	if(var_80_bool == 0) goto Label_5579; // 0x15c5 JumpB
	var_81_int = 0; // 0x15c6 PushV
	var_81_int = 24; // 0x15c7 MovI
	func_5503(var_81_int); // 0x15c8 Call
	goto Label_5626; // 0x15ca Jump
	
Label_5579:
	var_82_int = 7; // 0x15cb PushI
	var_83_bool = var_48_int == var_82_int; // 0x15cc Eq
	if(var_83_bool == 0) goto Label_5587; // 0x15cd JumpB
	var_84_int = 0; // 0x15ce PushV
	var_84_int = 10; // 0x15cf MovI
	func_5503(var_84_int); // 0x15d0 Call
	goto Label_5626; // 0x15d2 Jump
	
Label_5587:
	var_85_int = 8; // 0x15d3 PushI
	var_86_bool = var_48_int == var_85_int; // 0x15d4 Eq
	if(var_86_bool == 0) goto Label_5595; // 0x15d5 JumpB
	var_87_int = 0; // 0x15d6 PushV
	var_87_int = 20; // 0x15d7 MovI
	func_5503(var_87_int); // 0x15d8 Call
	goto Label_5626; // 0x15da Jump
	
Label_5595:
	var_88_int = 9; // 0x15db PushI
	var_89_bool = var_48_int == var_88_int; // 0x15dc Eq
	if(var_89_bool == 0) goto Label_5603; // 0x15dd JumpB
	var_90_int = 0; // 0x15de PushV
	var_90_int = 21; // 0x15df MovI
	func_5503(var_90_int); // 0x15e0 Call
	goto Label_5626; // 0x15e2 Jump
	
Label_5603:
	var_91_int = 10; // 0x15e3 PushI
	var_92_bool = var_48_int == var_91_int; // 0x15e4 Eq
	if(var_92_bool == 0) goto Label_5611; // 0x15e5 JumpB
	var_93_int = 0; // 0x15e6 PushV
	var_93_int = 3; // 0x15e7 MovI
	func_5503(var_93_int); // 0x15e8 Call
	goto Label_5626; // 0x15ea Jump
	
Label_5611:
	var_94_int = 11; // 0x15eb PushI
	var_95_bool = var_48_int == var_94_int; // 0x15ec Eq
	if(var_95_bool == 0) goto Label_5619; // 0x15ed JumpB
	var_96_int = 0; // 0x15ee PushV
	var_96_int = 19; // 0x15ef MovI
	func_5503(var_96_int); // 0x15f0 Call
	goto Label_5626; // 0x15f2 Jump
	
Label_5619:
	var_97_int = 12; // 0x15f3 PushI
	var_98_bool = var_48_int == var_97_int; // 0x15f4 Eq
	if(var_98_bool == 0) goto Label_5626; // 0x15f5 JumpB
	var_99_int = 0; // 0x15f6 PushV
	var_99_int = 26; // 0x15f7 MovI
	func_5503(var_99_int); // 0x15f8 Call
	
Label_5629:
	return 4; // 0x15fd Return
}


func_5264(var_116_bool)
{
	var_118_int = 0; var_119_string = ""; // 0x1491 PushV
	var_119_string = "ood11Maria3"; // 0x1492 MovS
	func_4770(var_118_int, var_119_string); // 0x1493 Call
	var_120_int = 0; // 0x1495 PushI
	var_121_bool = var_118_int == var_120_int; // 0x1496 Eq
	if(var_121_bool == 0) goto Label_5274; // 0x1497 JumpB
	var_116_bool = 1; // 0x1498 MovB
	return 0; // 0x1499 Return
	
Label_5274:
	var_116_bool = 0; // 0x149a MovB
	return 0; // 0x149b Return
}


func_4753()
{
	var_38_bool = 0; // 0x1291 PushV
	func_4808(var_38_bool); // 0x1292 Call
	if(var_38_bool == 0) goto Label_4759; // 0x1294 JumpB
	lshStopSpeech(); // 0x1295 Func
	
Label_4759:
	return 0; // 0x1297 Return
}


func_5014(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x1397 PushV
	var_183_string = "ood1Maria2"; // 0x1398 MovS
	func_4770(var_182_int, var_183_string); // 0x1399 Call
	var_184_int = 0; // 0x139b PushI
	var_185_bool = var_182_int == var_184_int; // 0x139c Eq
	if(var_185_bool == 0) goto Label_5024; // 0x139d JumpB
	var_180_bool = 1; // 0x139e MovB
	return 0; // 0x139f Return
	
Label_5024:
	var_180_bool = 0; // 0x13a0 MovB
	return 0; // 0x13a1 Return
}


func_4760(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x1298 PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x1299 Or
	var_79_float = sqrt(var_80_int); // 0x129a Sqrt2
	var_81_float = 0.0; // 0x129b PushF
	var_82_bool = var_79_float < var_81_float; // 0x129c LT
	if(var_82_bool == 0) goto Label_4768; // 0x129d JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x129e MovV
	return 2; // 0x129f Return
	
Label_4768:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x12a0 Div2
	return 2; // 0x12a1 Return
}


func_408(var_0_object, var_1_object, var_2_object, var_3_object, var_477_object, var_478_object)
{
	var_0_object = var_478_object; // 0x199 TMov
	var_1_object = var_477_object; // 0x19a TMov
	var_3_object = 0; // 0x19b TMovB
	var_483_int = 1; // 0x19c PushI
	if(var_483_int == 0) goto Label_490; // 0x19d JumpB
	var_484_bool = 0; // 0x19e PushV
	var_484_bool = 0; // 0x19f MovB
	var_485_bool = 0; var_486_object = Obj(); // 0x1a0 PushV
	var_486_object = var_1_object; // 0x1a1 MovT
	func_5144(var_486_object); // 0x1a2 Call
	if(var_485_bool == 0) goto Label_427; // 0x1a4 JumpB
	var_491_bool = 0; var_492_object = Obj(); // 0x1a5 PushV
	var_492_object = var_1_object; // 0x1a6 MovT
	func_5156(var_492_object); // 0x1a7 Call
	if(var_491_bool == 0) goto Label_427; // 0x1a9 JumpB
	var_484_bool = 1; // 0x1aa MovB
	
Label_427:
	if(var_484_bool == 0) goto Label_458; // 0x1ab JumpB
	var_497_object = Obj(); var_498_object = Obj(); // 0x1ac PushV
	var_497_object = var_1_object; // 0x1ad MovT
	var_498_object = var_0_object; // 0x1ae MovT
	func_4898(); // 0x1af Call
	var_501_object = Obj(); var_502_object = Obj(); // 0x1b1 PushV
	var_501_object = var_1_object; // 0x1b2 MovT
	var_502_object = var_0_object; // 0x1b3 MovT
	func_4984(); // 0x1b4 Call
	var_505_string = ""; // 0x1b6 PushV
	var_505_string = "Neutral"; // 0x1b7 MovS
	func_520(var_478_object, var_505_string); // 0x1b8 Call
	var_510_int = 3206; // 0x1ba PushI
	SetMessage(var_510_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_511_int = 3207; // 0x1bf PushI
	var_512_int = 3543; // 0x1c0 PushI
	var_513_int = 3540; // 0x1c1 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x1c2 TObjFunc
	var_514_int = 3208; // 0x1c4 PushI
	var_515_int = 3542; // 0x1c5 PushI
	var_516_int = 3541; // 0x1c6 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x1c7 TObjFunc
	goto Label_490; // 0x1c9 Jump
	
Label_490:
	var_517_bool = 0; // 0x1ea PushV
	func_4808(var_517_bool); // 0x1eb Call
	if(var_517_bool == 0) goto Label_505; // 0x1ed JumpB
	
Label_494:
	lshWaitForAnimEnd(); // 0x1ee Func
	var_518_object = var_3_object; // 0x1f0 PushT
	if(var_518_object == 0) goto Label_499; // 0x1f1 JumpB
	goto Label_504; // 0x1f2 Jump
	
Label_504:
	goto Label_519; // 0x1f8 Jump
	
Label_519:
	return 0; // 0x207 Return
	
Label_499:
	var_519_string = ""; // 0x1f3 PushV
	var_519_string = var_2_object; // 0x1f4 MovT
	func_4735(var_519_string); // 0x1f5 Call
	goto Label_494; // 0x1f7 Jump
	
Label_505:
	var_520_string = "all"; // 0x1f9 PushS
	var_521_string = "idle"; // 0x1fa PushS
	PlayAnimation(var_520_string, var_521_string); // 0x1fb Func
	
Label_509:
	WaitForAnimEnd(); // 0x1fd Func
	var_522_object = var_3_object; // 0x1ff PushT
	if(var_522_object == 0) goto Label_514; // 0x200 JumpB
	goto Label_519; // 0x201 Jump
	
Label_514:
	var_523_string = "all"; // 0x202 PushS
	var_524_string = "idle"; // 0x203 PushS
	PlayAnimation(var_523_string, var_524_string); // 0x204 Func
	goto Label_509; // 0x206 Jump
	
Label_458:
	var_525_object = Obj(); var_526_object = Obj(); // 0x1ca PushV
	var_525_object = var_1_object; // 0x1cb MovT
	var_526_object = var_0_object; // 0x1cc MovT
	func_4984(); // 0x1cd Call
	var_527_string = ""; // 0x1cf PushV
	var_527_string = "Neutral"; // 0x1d0 MovS
	func_520(var_478_object, var_527_string); // 0x1d1 Call
	var_528_int = 12086; // 0x1d3 PushI
	SetMessage(var_528_int); // 0x1d4 TObjFunc
	ClearReplies(); // 0x1d6 TObjFunc
	var_529_bool = 0; var_530_object = Obj(); // 0x1d8 PushV
	var_530_object = var_1_object; // 0x1d9 MovT
	func_5168(var_530_object); // 0x1da Call
	if(var_529_bool == 0) goto Label_482; // 0x1dc JumpB
	var_535_int = 12087; // 0x1dd PushI
	var_536_int = 13314; // 0x1de PushI
	var_537_int = 13313; // 0x1df PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x1e0 TObjFunc
	
Label_482:
	var_538_int = 12094; // 0x1e2 PushI
	var_539_int = -1; // 0x1e3 PushI
	var_540_int = 13320; // 0x1e4 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x1e5 TObjFunc
	goto Label_490; // 0x1e7 Jump
}


func_5276(var_197_bool)
{
	var_199_int = 0; var_200_string = ""; // 0x149d PushV
	var_200_string = "ood2Maria3"; // 0x149e MovS
	func_4770(var_199_int, var_200_string); // 0x149f Call
	var_203_int = 0; // 0x14a1 PushI
	var_204_bool = var_199_int == var_203_int; // 0x14a2 Eq
	if(var_204_bool == 0) goto Label_5286; // 0x14a3 JumpB
	var_197_bool = 1; // 0x14a4 MovB
	return 0; // 0x14a5 Return
	
Label_5286:
	var_197_bool = 0; // 0x14a6 MovB
	return 0; // 0x14a7 Return
}


func_3996(var_0_object, var_1_object, var_2_object, var_3_object, var_707_object, var_708_object)
{
	var_0_object = var_708_object; // 0xf9d TMov
	var_1_object = var_707_object; // 0xf9e TMov
	var_3_object = 0; // 0xf9f TMovB
	var_713_int = 1; // 0xfa0 PushI
	if(var_713_int == 0) goto Label_4097; // 0xfa1 JumpB
	var_714_bool = 0; // 0xfa2 PushV
	var_714_bool = 0; // 0xfa3 MovB
	var_715_bool = 0; var_716_object = Obj(); // 0xfa4 PushV
	var_716_object = var_1_object; // 0xfa5 MovT
	func_5204(var_716_object); // 0xfa6 Call
	if(var_715_bool == 0) goto Label_4015; // 0xfa8 JumpB
	var_721_bool = 0; var_722_object = Obj(); // 0xfa9 PushV
	var_722_object = var_1_object; // 0xfaa MovT
	func_5216(var_722_object); // 0xfab Call
	if(var_721_bool == 0) goto Label_4015; // 0xfad JumpB
	var_714_bool = 1; // 0xfae MovB
	
Label_4015:
	if(var_714_bool == 0) goto Label_4041; // 0xfaf JumpB
	var_727_object = Obj(); var_728_object = Obj(); // 0xfb0 PushV
	var_727_object = var_1_object; // 0xfb1 MovT
	var_728_object = var_0_object; // 0xfb2 MovT
	func_4922(); // 0xfb3 Call
	var_731_string = ""; // 0xfb5 PushV
	var_731_string = "Neutral"; // 0xfb6 MovS
	func_4127(var_708_object, var_731_string); // 0xfb7 Call
	var_736_int = 14369; // 0xfb9 PushI
	SetMessage(var_736_int); // 0xfba TObjFunc
	ClearReplies(); // 0xfbc TObjFunc
	var_737_int = 14370; // 0xfbe PushI
	var_738_int = 15594; // 0xfbf PushI
	var_739_int = 15593; // 0xfc0 PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0xfc1 TObjFunc
	var_740_int = 14376; // 0xfc3 PushI
	var_741_int = -1; // 0xfc4 PushI
	var_742_int = 15599; // 0xfc5 PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0xfc6 TObjFunc
	goto Label_4097; // 0xfc8 Jump
	
Label_4097:
	var_743_bool = 0; // 0x1001 PushV
	func_4808(var_743_bool); // 0x1002 Call
	if(var_743_bool == 0) goto Label_4112; // 0x1004 JumpB
	
Label_4101:
	lshWaitForAnimEnd(); // 0x1005 Func
	var_744_object = var_3_object; // 0x1007 PushT
	if(var_744_object == 0) goto Label_4106; // 0x1008 JumpB
	goto Label_4111; // 0x1009 Jump
	
Label_4111:
	goto Label_4126; // 0x100f Jump
	
Label_4126:
	return 0; // 0x101e Return
	
Label_4106:
	var_745_string = ""; // 0x100a PushV
	var_745_string = var_2_object; // 0x100b MovT
	func_4735(var_745_string); // 0x100c Call
	goto Label_4101; // 0x100e Jump
	
Label_4112:
	var_746_string = "all"; // 0x1010 PushS
	var_747_string = "idle"; // 0x1011 PushS
	PlayAnimation(var_746_string, var_747_string); // 0x1012 Func
	
Label_4116:
	WaitForAnimEnd(); // 0x1014 Func
	var_748_object = var_3_object; // 0x1016 PushT
	if(var_748_object == 0) goto Label_4121; // 0x1017 JumpB
	goto Label_4126; // 0x1018 Jump
	
Label_4121:
	var_749_string = "all"; // 0x1019 PushS
	var_750_string = "idle"; // 0x101a PushS
	PlayAnimation(var_749_string, var_750_string); // 0x101b Func
	goto Label_4116; // 0x101d Jump
	
Label_4041:
	var_751_string = ""; // 0xfc9 PushV
	var_751_string = "Neutral"; // 0xfca MovS
	func_4127(var_708_object, var_751_string); // 0xfcb Call
	var_752_int = 14377; // 0xfcd PushI
	SetMessage(var_752_int); // 0xfce TObjFunc
	ClearReplies(); // 0xfd0 TObjFunc
	var_753_bool = 0; // 0xfd2 PushV
	var_753_bool = 0; // 0xfd3 MovB
	var_754_bool = 0; // 0xfd4 PushV
	var_754_bool = 0; // 0xfd5 MovB
	var_755_bool = 0; var_756_object = Obj(); // 0xfd6 PushV
	var_756_object = var_1_object; // 0xfd7 MovT
	func_5216(var_756_object); // 0xfd8 Call
	var_757_bool = var_755_bool == 0; // 0xfda Not
	if(var_757_bool == 0) goto Label_4066; // 0xfdb JumpB
	var_758_bool = 0; var_759_object = Obj(); // 0xfdc PushV
	var_759_object = var_1_object; // 0xfdd MovT
	func_5228(var_759_object); // 0xfde Call
	if(var_758_bool == 0) goto Label_4066; // 0xfe0 JumpB
	var_754_bool = 1; // 0xfe1 MovB
	
Label_4066:
	if(var_754_bool == 0) goto Label_4073; // 0xfe2 JumpB
	var_764_bool = 0; var_765_object = Obj(); // 0xfe3 PushV
	var_765_object = var_1_object; // 0xfe4 MovT
	func_5240(var_765_object); // 0xfe5 Call
	if(var_764_bool == 0) goto Label_4073; // 0xfe7 JumpB
	var_753_bool = 1; // 0xfe8 MovB
	
Label_4073:
	if(var_753_bool == 0) goto Label_4079; // 0xfe9 JumpB
	var_770_int = 14378; // 0xfea PushI
	var_771_int = 15602; // 0xfeb PushI
	var_772_int = 15601; // 0xfec PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0xfed TObjFunc
	
Label_4079:
	var_773_bool = 0; var_774_object = Obj(); // 0xfef PushV
	var_774_object = var_1_object; // 0xff0 MovT
	func_5264(var_774_object); // 0xff1 Call
	if(var_773_bool == 0) goto Label_4089; // 0xff3 JumpB
	var_779_int = 14400; // 0xff4 PushI
	var_780_int = 15626; // 0xff5 PushI
	var_781_int = 15625; // 0xff6 PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0xff7 TObjFunc
	
Label_4089:
	var_782_int = 14419; // 0xff9 PushI
	var_783_int = -1; // 0xffa PushI
	var_784_int = 15644; // 0xffb PushI
	AddReply(var_782_int, var_783_int, var_784_int); // 0xffc TObjFunc
	goto Label_4097; // 0xffe Jump
}


func_4770(var_56_int, var_57_string)
{
	var_58_int = 0; var_59_int = 0; // 0x12a2 PushV
	GetVariable(var_57_string, var_59_int); // 0x12a3 Func
	var_56_int = var_59_int; // 0x12a5 Mov
	return 2; // 0x12a6 Return
}


func_5026(var_194_bool)
{
	var_196_int = 0; var_197_string = ""; // 0x13a3 PushV
	var_197_string = "ood1Maria3"; // 0x13a4 MovS
	func_4770(var_196_int, var_197_string); // 0x13a5 Call
	var_198_int = 0; // 0x13a7 PushI
	var_199_bool = var_196_int == var_198_int; // 0x13a8 Eq
	if(var_199_bool == 0) goto Label_5036; // 0x13a9 JumpB
	var_194_bool = 1; // 0x13aa MovB
	return 0; // 0x13ab Return
	
Label_5036:
	var_194_bool = 0; // 0x13ac MovB
	return 0; // 0x13ad Return
}


func_3750(var_2_object, var_75_string)
{
	var_76_bool = 0; // 0xea7 PushV
	func_4808(var_76_bool); // 0xea8 Call
	var_77_bool = var_76_bool == 0; // 0xeaa Not
	if(var_77_bool == 0) goto Label_3757; // 0xeab JumpB
	return 0; // 0xeac Return
	
Label_3757:
	var_78_bool = var_75_string == var_2_object; // 0xead Eq
	if(var_78_bool == 0) goto Label_3760; // 0xeae JumpB
	return 0; // 0xeaf Return
	
Label_3760:
	var_79_string = ""; // 0xeb0 PushV
	var_79_string = var_75_string; // 0xeb1 Mov
	func_4735(var_79_string); // 0xeb2 Call
	var_2_object = var_75_string; // 0xeb4 TMov
	return 0; // 0xeb5 Return
}


func_4775(var_132_float)
{
	var_133_float = 0; var_134_float = 0; // 0x12a7 PushV
	GetGameTime(var_134_float); // 0x12a8 Func
	var_132_float = var_134_float; // 0x12aa Mov
	return 2; // 0x12ab Return
}


func_5288(var_246_bool)
{
	var_248_int = 0; var_249_string = ""; // 0x14a9 PushV
	var_249_string = "KnowKaterina"; // 0x14aa MovS
	func_4770(var_248_int, var_249_string); // 0x14ab Call
	var_250_int = 1; // 0x14ad PushI
	var_251_bool = var_248_int == var_250_int; // 0x14ae Eq
	if(var_251_bool == 0) goto Label_5298; // 0x14af JumpB
	var_246_bool = 1; // 0x14b0 MovB
	return 0; // 0x14b1 Return
	
Label_5298:
	var_246_bool = 0; // 0x14b2 MovB
	return 0; // 0x14b3 Return
}


func_4780(var_154_int)
{
	var_155_float = 0; var_156_float = 0; // 0x12ac PushV
	GetGameTime(var_156_float); // 0x12ad Func
	var_157_int = 1; // 0x12af PushI
	var_158_int = 0; // 0x12b0 PushV
	var_159_int = 24; // 0x12b1 PushI
	var_158_int = var_156_float / var_156_float; // 0x12b2 Div2
	var_154_int = var_157_int + var_158_int; // 0x12b3 Add2
	return 2; // 0x12b4 Return
}


func_5038(var_206_bool)
{
	var_208_int = 0; var_209_string = ""; // 0x13af PushV
	var_209_string = "ood1Maria4"; // 0x13b0 MovS
	func_4770(var_208_int, var_209_string); // 0x13b1 Call
	var_210_int = 0; // 0x13b3 PushI
	var_211_bool = var_208_int == var_210_int; // 0x13b4 Eq
	if(var_211_bool == 0) goto Label_5048; // 0x13b5 JumpB
	var_206_bool = 1; // 0x13b6 MovB
	return 0; // 0x13b7 Return
	
Label_5048:
	var_206_bool = 0; // 0x13b8 MovB
	return 0; // 0x13b9 Return
}


func_5300(var_264_bool)
{
	var_266_int = 0; var_267_string = ""; // 0x14b5 PushV
	var_267_string = "ood1Maria5"; // 0x14b6 MovS
	func_4770(var_266_int, var_267_string); // 0x14b7 Call
	var_268_int = 0; // 0x14b9 PushI
	var_269_bool = var_266_int == var_268_int; // 0x14ba Eq
	if(var_269_bool == 0) goto Label_5310; // 0x14bb JumpB
	var_264_bool = 1; // 0x14bc MovB
	return 0; // 0x14bd Return
	
Label_5310:
	var_264_bool = 0; // 0x14be MovB
	return 0; // 0x14bf Return
}


func_4789(var_152_bool, var_153_int)
{
	var_154_int = 0; // 0x12b6 PushV
	func_4780(var_154_int); // 0x12b7 Call
	var_152_bool = var_154_int == var_153_int; // 0x12b9 Eq2
	return 0; // 0x12ba Return
}


func_185(var_2_object, var_45_string)
{
	var_46_bool = 0; // 0xba PushV
	func_4808(var_46_bool); // 0xbb Call
	var_47_bool = var_46_bool == 0; // 0xbd Not
	if(var_47_bool == 0) goto Label_192; // 0xbe JumpB
	return 0; // 0xbf Return
	
Label_192:
	var_48_bool = var_45_string == var_2_object; // 0xc0 Eq
	if(var_48_bool == 0) goto Label_195; // 0xc1 JumpB
	return 0; // 0xc2 Return
	
Label_195:
	var_49_string = ""; // 0xc3 PushV
	var_49_string = var_45_string; // 0xc4 Mov
	func_4735(var_49_string); // 0xc5 Call
	var_2_object = var_45_string; // 0xc7 TMov
	return 0; // 0xc8 Return
}


func_5050(var_149_bool)
{
	var_151_int = 0; var_152_string = ""; // 0x13bb PushV
	var_152_string = "d1q01FirstGeorgVisit"; // 0x13bc MovS
	func_4770(var_151_int, var_152_string); // 0x13bd Call
	var_155_int = 1; // 0x13bf PushI
	var_156_bool = var_151_int == var_155_int; // 0x13c0 Eq
	if(var_156_bool == 0) goto Label_5060; // 0x13c1 JumpB
	var_149_bool = 1; // 0x13c2 MovB
	return 0; // 0x13c3 Return
	
Label_5060:
	var_149_bool = 0; // 0x13c4 MovB
	return 0; // 0x13c5 Return
}


func_4795(var_787_bool)
{
	var_788_bool = 0; var_789_bool = 0; // 0x12bb PushV
	var_790_string = ""; // 0x12bc PushV
	var_790_string = "No"; // 0x12bd MovS
	func_4735(var_790_string); // 0x12be Call
	lshWaitForAnimEnd(var_789_bool); // 0x12c0 Func
	var_787_bool = var_789_bool; // 0x12c2 Mov
	return 2; // 0x12c3 Return
}


func_5312(var_280_bool)
{
	var_282_int = 0; var_283_string = ""; // 0x14c1 PushV
	var_283_string = "ood1Maria6"; // 0x14c2 MovS
	func_4770(var_282_int, var_283_string); // 0x14c3 Call
	var_284_int = 0; // 0x14c5 PushI
	var_285_bool = var_282_int == var_284_int; // 0x14c6 Eq
	if(var_285_bool == 0) goto Label_5322; // 0x14c7 JumpB
	var_280_bool = 1; // 0x14c8 MovB
	return 0; // 0x14c9 Return
	
Label_5322:
	var_280_bool = 0; // 0x14ca MovB
	return 0; // 0x14cb Return
}


func_4804(var_91_int)
{
	var_91_int = 2868; // 0x12c4 MovI
	return 0; // 0x12c5 Return
}


func_4806(var_92_string)
{
	var_92_string = "ui/NPC_Maria.png"; // 0x12c6 MovS
	return 0; // 0x12c7 Return
}


func_5062(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x13c7 PushV
	var_234_string = "ood2Maria1"; // 0x13c8 MovS
	func_4770(var_233_int, var_234_string); // 0x13c9 Call
	var_235_int = 0; // 0x13cb PushI
	var_236_bool = var_233_int == var_235_int; // 0x13cc Eq
	if(var_236_bool == 0) goto Label_5072; // 0x13cd JumpB
	var_231_bool = 1; // 0x13ce MovB
	return 0; // 0x13cf Return
	
Label_5072:
	var_231_bool = 0; // 0x13d0 MovB
	return 0; // 0x13d1 Return
}


func_4808(var_38_bool)
{
	var_38_bool = 1; // 0x12c8 MovB
	return 0; // 0x12c9 Return
}


func_4810()
{
	var_113_string = "ood1Maria1"; // 0x12cb PushS
	var_114_int = 1; // 0x12cc PushI
	SetVariable(var_113_string, var_114_int); // 0x12cd Func
	return 0; // 0x12cf Return
}


func_3274(var_0_object, var_1_object, var_2_object, var_3_object, var_563_object, var_564_object)
{
	var_0_object = var_564_object; // 0xccb TMov
	var_1_object = var_563_object; // 0xccc TMov
	var_3_object = 0; // 0xccd TMovB
	var_569_int = 1; // 0xcce PushI
	if(var_569_int == 0) goto Label_3327; // 0xccf JumpB
	var_570_bool = 0; var_571_object = Obj(); // 0xcd0 PushV
	var_571_object = var_1_object; // 0xcd1 MovT
	func_5180(var_571_object); // 0xcd2 Call
	if(var_570_bool == 0) goto Label_3310; // 0xcd4 JumpB
	var_576_object = Obj(); var_577_object = Obj(); // 0xcd5 PushV
	var_576_object = var_1_object; // 0xcd6 MovT
	var_577_object = var_0_object; // 0xcd7 MovT
	func_4910(); // 0xcd8 Call
	var_580_string = ""; // 0xcda PushV
	var_580_string = "Neutral"; // 0xcdb MovS
	func_3357(var_564_object, var_580_string); // 0xcdc Call
	var_585_int = 12310; // 0xcde PushI
	SetMessage(var_585_int); // 0xcdf TObjFunc
	ClearReplies(); // 0xce1 TObjFunc
	var_586_int = 12311; // 0xce3 PushI
	var_587_int = 13471; // 0xce4 PushI
	var_588_int = 13470; // 0xce5 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0xce6 TObjFunc
	var_589_int = 12313; // 0xce8 PushI
	var_590_int = 13473; // 0xce9 PushI
	var_591_int = 13472; // 0xcea PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0xceb TObjFunc
	goto Label_3327; // 0xced Jump
	
Label_3327:
	var_592_bool = 0; // 0xcff PushV
	func_4808(var_592_bool); // 0xd00 Call
	if(var_592_bool == 0) goto Label_3342; // 0xd02 JumpB
	
Label_3331:
	lshWaitForAnimEnd(); // 0xd03 Func
	var_593_object = var_3_object; // 0xd05 PushT
	if(var_593_object == 0) goto Label_3336; // 0xd06 JumpB
	goto Label_3341; // 0xd07 Jump
	
Label_3341:
	goto Label_3356; // 0xd0d Jump
	
Label_3356:
	return 0; // 0xd1c Return
	
Label_3336:
	var_594_string = ""; // 0xd08 PushV
	var_594_string = var_2_object; // 0xd09 MovT
	func_4735(var_594_string); // 0xd0a Call
	goto Label_3331; // 0xd0c Jump
	
Label_3342:
	var_595_string = "all"; // 0xd0e PushS
	var_596_string = "idle"; // 0xd0f PushS
	PlayAnimation(var_595_string, var_596_string); // 0xd10 Func
	
Label_3346:
	WaitForAnimEnd(); // 0xd12 Func
	var_597_object = var_3_object; // 0xd14 PushT
	if(var_597_object == 0) goto Label_3351; // 0xd15 JumpB
	goto Label_3356; // 0xd16 Jump
	
Label_3351:
	var_598_string = "all"; // 0xd17 PushS
	var_599_string = "idle"; // 0xd18 PushS
	PlayAnimation(var_598_string, var_599_string); // 0xd19 Func
	goto Label_3346; // 0xd1b Jump
	
Label_3310:
	var_600_string = ""; // 0xcee PushV
	var_600_string = "Neutral"; // 0xcef MovS
	func_3357(var_564_object, var_600_string); // 0xcf0 Call
	var_601_int = 13777; // 0xcf2 PushI
	SetMessage(var_601_int); // 0xcf3 TObjFunc
	ClearReplies(); // 0xcf5 TObjFunc
	var_602_int = 13778; // 0xcf7 PushI
	var_603_int = -1; // 0xcf8 PushI
	var_604_int = 15014; // 0xcf9 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xcfa TObjFunc
	goto Label_3327; // 0xcfc Jump
}


func_5324(var_296_bool)
{
	var_298_int = 0; var_299_string = ""; // 0x14cd PushV
	var_299_string = "ood1Maria7"; // 0x14ce MovS
	func_4770(var_298_int, var_299_string); // 0x14cf Call
	var_300_int = 0; // 0x14d1 PushI
	var_301_bool = var_298_int == var_300_int; // 0x14d2 Eq
	if(var_301_bool == 0) goto Label_5334; // 0x14d3 JumpB
	var_296_bool = 1; // 0x14d4 MovB
	return 0; // 0x14d5 Return
	
Label_5334:
	var_296_bool = 0; // 0x14d6 MovB
	return 0; // 0x14d7 Return
}


func_4816()
{
	var_43_string = "ood1Maria2"; // 0x12d1 PushS
	var_44_int = 1; // 0x12d2 PushI
	SetVariable(var_43_string, var_44_int); // 0x12d3 Func
	return 0; // 0x12d5 Return
}


func_5074(var_247_bool)
{
	var_249_int = 0; var_250_string = ""; // 0x13d3 PushV
	var_250_string = "ood2Maria2"; // 0x13d4 MovS
	func_4770(var_249_int, var_250_string); // 0x13d5 Call
	var_251_int = 0; // 0x13d7 PushI
	var_252_bool = var_249_int == var_251_int; // 0x13d8 Eq
	if(var_252_bool == 0) goto Label_5084; // 0x13d9 JumpB
	var_247_bool = 1; // 0x13da MovB
	return 0; // 0x13db Return
	
Label_5084:
	var_247_bool = 0; // 0x13dc MovB
	return 0; // 0x13dd Return
}


func_4822()
{
	var_69_string = "ood1Maria3"; // 0x12d7 PushS
	var_70_int = 1; // 0x12d8 PushI
	SetVariable(var_69_string, var_70_int); // 0x12d9 Func
	return 0; // 0x12db Return
}


func_5336(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x14d9 PushV
	var_315_string = "ood1Maria8"; // 0x14da MovS
	func_4770(var_314_int, var_315_string); // 0x14db Call
	var_316_int = 0; // 0x14dd PushI
	var_317_bool = var_314_int == var_316_int; // 0x14de Eq
	if(var_317_bool == 0) goto Label_5346; // 0x14df JumpB
	var_312_bool = 1; // 0x14e0 MovB
	return 0; // 0x14e1 Return
	
Label_5346:
	var_312_bool = 0; // 0x14e2 MovB
	return 0; // 0x14e3 Return
}


func_4828()
{
	var_95_string = "ood1Maria4"; // 0x12dd PushS
	var_96_int = 1; // 0x12de PushI
	SetVariable(var_95_string, var_96_int); // 0x12df Func
	return 0; // 0x12e1 Return
}


func_5086(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x13df PushV
	var_240_string = "d2q02"; // 0x13e0 MovS
	func_4770(var_239_int, var_240_string); // 0x13e1 Call
	var_241_int = 3; // 0x13e3 PushI
	var_242_bool = var_239_int == var_241_int; // 0x13e4 Eq
	if(var_242_bool == 0) goto Label_5096; // 0x13e5 JumpB
	var_237_bool = 1; // 0x13e6 MovB
	return 0; // 0x13e7 Return
	
Label_5096:
	var_237_bool = 0; // 0x13e8 MovB
	return 0; // 0x13e9 Return
}


func_4834(var_178_object)
{
	var_180_string = "money500 is given"; // 0x12e3 PushS
	Trace(var_180_string); // 0x12e4 Func
	var_181_object = Obj(); var_182_string = ""; var_183_int = 0; // 0x12e6 PushV
	var_181_object = var_178_object; // 0x12e7 Mov
	var_182_string = "money"; // 0x12e8 MovS
	var_183_int = 500; // 0x12e9 MovI
	func_4651(var_182_string, var_183_int); // 0x12ea Call
	return 0; // 0x12ec Return
}


func_5348(var_64_bool)
{
	var_66_int = 0; var_67_string = ""; // 0x14e5 PushV
	var_67_string = "d10q01"; // 0x14e6 MovS
	func_4770(var_66_int, var_67_string); // 0x14e7 Call
	var_68_int = 0; // 0x14e9 PushI
	var_69_bool = var_66_int == var_68_int; // 0x14ea Eq
	if(var_69_bool == 0) goto Label_5358; // 0x14eb JumpB
	var_64_bool = 1; // 0x14ec MovB
	return 0; // 0x14ed Return
	
Label_5358:
	var_64_bool = 0; // 0x14ee MovB
	return 0; // 0x14ef Return
}


func_5098(var_212_bool, var_213_object)
{
	var_214_bool = 0; var_215_object = Obj(); // 0x13eb PushV
	var_215_object = var_213_object; // 0x13ec Mov
	func_5408(var_215_object); // 0x13ed Call
	if(var_214_bool == 0) goto Label_5106; // 0x13ef JumpB
	var_212_bool = 1; // 0x13f0 MovB
	return 0; // 0x13f1 Return
	
Label_5106:
	var_212_bool = 0; // 0x13f2 MovB
	return 0; // 0x13f3 Return
}


func_4845()
{
	var_176_string = "playsound"; // 0x12ee PushS
	var_177_string = "givemoney"; // 0x12ef PushS
	TriggerWorld(var_176_string, var_177_string); // 0x12f0 Func
	return 0; // 0x12f2 Return
}


func_5360(var_57_bool)
{
	var_59_int = 0; var_60_string = ""; // 0x14f1 PushV
	var_60_string = "d10q01"; // 0x14f2 MovS
	func_4770(var_59_int, var_60_string); // 0x14f3 Call
	var_61_int = 1000; // 0x14f5 PushI
	var_62_bool = var_59_int == var_61_int; // 0x14f6 Eq
	if(var_62_bool == 0) goto Label_5370; // 0x14f7 JumpB
	var_57_bool = 1; // 0x14f8 MovB
	return 0; // 0x14f9 Return
	
Label_5370:
	var_57_bool = 0; // 0x14fa MovB
	return 0; // 0x14fb Return
}


func_4851()
{
	var_113_string = "ood2Maria1"; // 0x12f4 PushS
	var_114_int = 1; // 0x12f5 PushI
	SetVariable(var_113_string, var_114_int); // 0x12f6 Func
	return 0; // 0x12f8 Return
}


func_5108(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x13f5 PushV
	var_346_string = "d2q01"; // 0x13f6 MovS
	func_4770(var_345_int, var_346_string); // 0x13f7 Call
	var_347_int = 1000; // 0x13f9 PushI
	var_348_bool = var_345_int == var_347_int; // 0x13fa Eq
	if(var_348_bool == 0) goto Label_5118; // 0x13fb JumpB
	var_343_bool = 1; // 0x13fc MovB
	return 0; // 0x13fd Return
	
Label_5118:
	var_343_bool = 0; // 0x13fe MovB
	return 0; // 0x13ff Return
}


func_4857()
{
	var_168_string = "ood2Maria2"; // 0x12fa PushS
	var_169_int = 1; // 0x12fb PushI
	SetVariable(var_168_string, var_169_int); // 0x12fc Func
	return 0; // 0x12fe Return
}


func_5372(var_49_bool)
{
	var_51_int = 0; var_52_string = ""; // 0x14fd PushV
	var_52_string = "ood10Maria1"; // 0x14fe MovS
	func_4770(var_51_int, var_52_string); // 0x14ff Call
	var_55_int = 0; // 0x1501 PushI
	var_56_bool = var_51_int == var_55_int; // 0x1502 Eq
	if(var_56_bool == 0) goto Label_5382; // 0x1503 JumpB
	var_49_bool = 1; // 0x1504 MovB
	return 0; // 0x1505 Return
	
Label_5382:
	var_49_bool = 0; // 0x1506 MovB
	return 0; // 0x1507 Return
}


func_5630()
{
	var_35_bool = GlobalVars[1]; // 0x15fe PushGE
	var_35_bool = 0; // 0x15ff MovB
	GlobalVars[1] = var_35_bool; // 0x1600 PopGE
	return 0; // 0x1601 Return
}


func_4863()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x12ff PushV
	var_119_string = "d2q02"; // 0x1300 PushS
	var_120_int = 4; // 0x1301 PushI
	SetVariable(var_119_string, var_120_int); // 0x1302 Func
	var_121_object = Obj(); // 0x1304 PushV
	func_5453(var_121_object); // 0x1305 Call
	var_118_object = var_121_object; // 0x1306 Mov
	var_128_string = "d2q02MariaGotoPetr"; // 0x1308 PushS
	var_129_string = "pt_map_petr"; // 0x1309 PushS
	var_130_int = 0; // 0x130a PushI
	var_131_int = 15275; // 0x130b PushI
	var_132_float = 0; // 0x130c PushV
	func_4775(var_132_float); // 0x130d Call
	AddMark(var_128_string, var_129_string, var_130_int, var_131_int, var_132_float); // 0x130f ObjFunc
	func_5487(); // 0x1312 Call
	return 2; // 0x1314 Return
}


