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
	func_6963(var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_5547(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xc5 PushI
	if(var_37_int == 0) goto Label_349; // 0xc6 JumpB
	func_5642(); // 0xc8 Call
	var_39_int = 543; // 0xca PushI
	var_40_bool = var_35_string == var_39_int; // 0xcb Eq
	if(var_40_bool == 0) goto Label_235; // 0xcc JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xcd PushV
	var_41_object = var_1_object; // 0xce MovT
	var_42_object = var_0_object; // 0xcf MovT
	func_5778(); // 0xd0 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0xd2 PushV
	var_45_object = var_1_object; // 0xd3 MovT
	var_46_object = var_0_object; // 0xd4 MovT
	func_5784(); // 0xd5 Call
	var_49_string = ""; // 0xd7 PushV
	var_49_string = "Neutral"; // 0xd8 MovS
	func_180(var_36_bool, var_49_string); // 0xd9 Call
	var_64_int = 473; // 0xdb PushI
	SetMessage(var_64_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_65_int = 476; // 0xe0 PushI
	var_66_int = 547; // 0xe1 PushI
	var_67_int = 546; // 0xe2 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xe3 TObjFunc
	var_68_int = 474; // 0xe5 PushI
	var_69_int = 545; // 0xe6 PushI
	var_70_int = 544; // 0xe7 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_71_int = 545; // 0xeb PushI
	var_72_bool = var_35_string == var_71_int; // 0xec Eq
	if(var_72_bool == 0) goto Label_263; // 0xed JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xee PushV
	var_73_object = var_1_object; // 0xef MovT
	var_74_object = var_0_object; // 0xf0 MovT
	func_6060(); // 0xf1 Call
	var_77_string = ""; // 0xf3 PushV
	var_77_string = "Neutral"; // 0xf4 MovS
	func_180(var_36_bool, var_77_string); // 0xf5 Call
	var_78_int = 475; // 0xf7 PushI
	SetMessage(var_78_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_79_int = 480; // 0xfc PushI
	var_80_int = 547; // 0xfd PushI
	var_81_int = 550; // 0xfe PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xff TObjFunc
	var_82_int = 479; // 0x101 PushI
	var_83_int = -1; // 0x102 PushI
	var_84_int = 549; // 0x103 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_85_int = 547; // 0x107 PushI
	var_86_bool = var_35_string == var_85_int; // 0x108 Eq
	if(var_86_bool == 0) goto Label_291; // 0x109 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x10a PushV
	var_87_object = var_1_object; // 0x10b MovT
	var_88_object = var_0_object; // 0x10c MovT
	func_6104(); // 0x10d Call
	var_91_string = ""; // 0x10f PushV
	var_91_string = "Neutral"; // 0x110 MovS
	func_180(var_36_bool, var_91_string); // 0x111 Call
	var_92_int = 477; // 0x113 PushI
	SetMessage(var_92_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_93_int = 481; // 0x118 PushI
	var_94_int = 554; // 0x119 PushI
	var_95_int = 552; // 0x11a PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x11b TObjFunc
	var_96_int = 8439; // 0x11d PushI
	var_97_int = 9263; // 0x11e PushI
	var_98_int = 9262; // 0x11f PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_99_int = 9263; // 0x123 PushI
	var_100_bool = var_35_string == var_99_int; // 0x124 Eq
	if(var_100_bool == 0) goto Label_314; // 0x125 JumpB
	var_101_string = ""; // 0x126 PushV
	var_101_string = "Neutral"; // 0x127 MovS
	func_180(var_36_bool, var_101_string); // 0x128 Call
	var_102_int = 8440; // 0x12a PushI
	SetMessage(var_102_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_103_int = 8442; // 0x12f PushI
	var_104_int = -1; // 0x130 PushI
	var_105_int = 9265; // 0x131 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x132 TObjFunc
	var_106_int = 8441; // 0x134 PushI
	var_107_int = -1; // 0x135 PushI
	var_108_int = 9264; // 0x136 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_109_int = 554; // 0x13a PushI
	var_110_bool = var_35_string == var_109_int; // 0x13b Eq
	if(var_110_bool == 0) goto Label_337; // 0x13c JumpB
	var_111_string = ""; // 0x13d PushV
	var_111_string = "Neutral"; // 0x13e MovS
	func_180(var_36_bool, var_111_string); // 0x13f Call
	var_112_int = 483; // 0x141 PushI
	SetMessage(var_112_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_113_int = 484; // 0x146 PushI
	var_114_int = -1; // 0x147 PushI
	var_115_int = 555; // 0x148 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x149 TObjFunc
	var_116_int = 485; // 0x14b PushI
	var_117_int = -1; // 0x14c PushI
	var_118_int = 556; // 0x14d PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_3_string = 1; // 0x151 TMovB
	var_119_bool = 0; // 0x152 PushV
	func_5746(var_119_bool); // 0x153 Call
	if(var_119_bool == 0) goto Label_345; // 0x155 JumpB
	lshStopAnimation(); // 0x156 Func
	goto Label_347; // 0x158 Jump
	
Label_347:
	return 0; // 0x15b Return
	
Label_345:
	StopAnimation(); // 0x159 Func
	
Label_349:
	return 0; // 0x15d Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x23c PushI
	if(var_37_int == 0) goto Label_932; // 0x23d JumpB
	func_5642(); // 0x23f Call
	var_39_int = 13328; // 0x241 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x242 Eq
	if(var_40_bool == 0) goto Label_590; // 0x243 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x244 PushV
	var_41_object = var_1_object; // 0x245 MovT
	var_42_object = var_0_object; // 0x246 MovT
	func_6048(); // 0x247 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x249 PushV
	var_45_object = var_1_object; // 0x24a MovT
	var_46_object = var_0_object; // 0x24b MovT
	func_6110(); // 0x24c Call
	
Label_590:
	var_63_int = 13695; // 0x24e PushI
	var_64_bool = var_36_bool == var_63_int; // 0x24f Eq
	if(var_64_bool == 0) goto Label_598; // 0x250 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x251 PushV
	var_65_object = var_1_object; // 0x252 MovT
	var_66_object = var_0_object; // 0x253 MovT
	func_6048(); // 0x254 Call
	
Label_598:
	var_67_int = 3618; // 0x256 PushI
	var_68_bool = var_35_string == var_67_int; // 0x257 Eq
	if(var_68_bool == 0) goto Label_705; // 0x258 JumpB
	var_69_bool = 0; // 0x259 PushV
	var_69_bool = 0; // 0x25a MovB
	var_70_bool = 0; var_71_object = Obj(); // 0x25b PushV
	var_71_object = var_1_object; // 0x25c MovT
	func_6531(var_71_object); // 0x25d Call
	if(var_70_bool == 0) goto Label_614; // 0x25f JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x260 PushV
	var_79_object = var_1_object; // 0x261 MovT
	func_6687(var_79_object); // 0x262 Call
	if(var_78_bool == 0) goto Label_614; // 0x264 JumpB
	var_69_bool = 1; // 0x265 MovB
	
Label_614:
	if(var_69_bool == 0) goto Label_645; // 0x266 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x267 PushV
	var_84_object = var_1_object; // 0x268 MovT
	var_85_object = var_0_object; // 0x269 MovT
	func_6126(); // 0x26a Call
	var_88_object = Obj(); var_89_object = Obj(); // 0x26c PushV
	var_88_object = var_1_object; // 0x26d MovT
	var_89_object = var_0_object; // 0x26e MovT
	func_6132(); // 0x26f Call
	var_92_string = ""; // 0x271 PushV
	var_92_string = "Neutral"; // 0x272 MovS
	func_555(var_36_bool, var_92_string); // 0x273 Call
	var_107_int = 3371; // 0x275 PushI
	SetMessage(var_107_int); // 0x276 TObjFunc
	ClearReplies(); // 0x278 TObjFunc
	var_108_int = 3375; // 0x27a PushI
	var_109_int = 3621; // 0x27b PushI
	var_110_int = 3619; // 0x27c PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x27d TObjFunc
	var_111_int = 3376; // 0x27f PushI
	var_112_int = 3621; // 0x280 PushI
	var_113_int = 3620; // 0x281 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_114_bool = 0; // 0x285 PushV
	var_114_bool = 0; // 0x286 MovB
	var_115_bool = 0; // 0x287 PushV
	var_115_bool = 0; // 0x288 MovB
	var_116_bool = 0; var_117_object = Obj(); // 0x289 PushV
	var_117_object = var_1_object; // 0x28a MovT
	func_6519(var_117_object); // 0x28b Call
	if(var_116_bool == 0) goto Label_661; // 0x28d JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x28e PushV
	var_123_object = var_1_object; // 0x28f MovT
	func_6495(var_123_object); // 0x290 Call
	var_128_bool = var_122_bool == 0; // 0x292 Not
	if(var_128_bool == 0) goto Label_661; // 0x293 JumpB
	var_115_bool = 1; // 0x294 MovB
	
Label_661:
	if(var_115_bool == 0) goto Label_669; // 0x295 JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x296 PushV
	var_130_object = var_1_object; // 0x297 MovT
	func_6507(var_130_object); // 0x298 Call
	var_135_bool = var_129_bool == 0; // 0x29a Not
	if(var_135_bool == 0) goto Label_669; // 0x29b JumpB
	var_114_bool = 1; // 0x29c MovB
	
Label_669:
	if(var_114_bool == 0) goto Label_690; // 0x29d JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x29e PushV
	var_136_object = var_1_object; // 0x29f MovT
	var_137_object = var_0_object; // 0x2a0 MovT
	func_6126(); // 0x2a1 Call
	var_138_string = ""; // 0x2a3 PushV
	var_138_string = "Neutral"; // 0x2a4 MovS
	func_555(var_36_bool, var_138_string); // 0x2a5 Call
	var_139_int = 12095; // 0x2a7 PushI
	SetMessage(var_139_int); // 0x2a8 TObjFunc
	ClearReplies(); // 0x2aa TObjFunc
	var_140_int = 12096; // 0x2ac PushI
	var_141_int = 13323; // 0x2ad PushI
	var_142_int = 13322; // 0x2ae PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x2af TObjFunc
	return 0; // 0x2b1 Return
	
Label_690:
	var_143_string = ""; // 0x2b2 PushV
	var_143_string = "Neutral"; // 0x2b3 MovS
	func_555(var_36_bool, var_143_string); // 0x2b4 Call
	var_144_int = 12523; // 0x2b6 PushI
	SetMessage(var_144_int); // 0x2b7 TObjFunc
	ClearReplies(); // 0x2b9 TObjFunc
	var_145_int = 12524; // 0x2bb PushI
	var_146_int = -1; // 0x2bc PushI
	var_147_int = 13694; // 0x2bd PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x2be TObjFunc
	return 0; // 0x2c0 Return
	
Label_705:
	var_148_int = 13323; // 0x2c1 PushI
	var_149_bool = var_35_string == var_148_int; // 0x2c2 Eq
	if(var_149_bool == 0) goto Label_723; // 0x2c3 JumpB
	var_150_string = ""; // 0x2c4 PushV
	var_150_string = "Neutral"; // 0x2c5 MovS
	func_555(var_36_bool, var_150_string); // 0x2c6 Call
	var_151_int = 12097; // 0x2c8 PushI
	SetMessage(var_151_int); // 0x2c9 TObjFunc
	ClearReplies(); // 0x2cb TObjFunc
	var_152_int = 12098; // 0x2cd PushI
	var_153_int = 13325; // 0x2ce PushI
	var_154_int = 13324; // 0x2cf PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x2d0 TObjFunc
	return 0; // 0x2d2 Return
	
Label_723:
	var_155_int = 13325; // 0x2d3 PushI
	var_156_bool = var_35_string == var_155_int; // 0x2d4 Eq
	if(var_156_bool == 0) goto Label_741; // 0x2d5 JumpB
	var_157_string = ""; // 0x2d6 PushV
	var_157_string = "Neutral"; // 0x2d7 MovS
	func_555(var_36_bool, var_157_string); // 0x2d8 Call
	var_158_int = 12099; // 0x2da PushI
	SetMessage(var_158_int); // 0x2db TObjFunc
	ClearReplies(); // 0x2dd TObjFunc
	var_159_int = 12100; // 0x2df PushI
	var_160_int = 13327; // 0x2e0 PushI
	var_161_int = 13326; // 0x2e1 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x2e2 TObjFunc
	return 0; // 0x2e4 Return
	
Label_741:
	var_162_int = 13327; // 0x2e5 PushI
	var_163_bool = var_35_string == var_162_int; // 0x2e6 Eq
	if(var_163_bool == 0) goto Label_780; // 0x2e7 JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x2e8 PushV
	var_164_object = var_1_object; // 0x2e9 MovT
	var_165_object = var_0_object; // 0x2ea MovT
	func_6054(); // 0x2eb Call
	var_168_string = ""; // 0x2ed PushV
	var_168_string = "Neutral"; // 0x2ee MovS
	func_555(var_36_bool, var_168_string); // 0x2ef Call
	var_169_int = 12101; // 0x2f1 PushI
	SetMessage(var_169_int); // 0x2f2 TObjFunc
	ClearReplies(); // 0x2f4 TObjFunc
	var_170_bool = 0; var_171_object = Obj(); // 0x2f6 PushV
	var_171_object = var_1_object; // 0x2f7 MovT
	func_6483(var_171_object); // 0x2f8 Call
	if(var_170_bool == 0) goto Label_768; // 0x2fa JumpB
	var_176_int = 12102; // 0x2fb PushI
	var_177_int = -1; // 0x2fc PushI
	var_178_int = 13328; // 0x2fd PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x2fe TObjFunc
	
Label_768:
	var_179_bool = 0; var_180_object = Obj(); // 0x300 PushV
	var_180_object = var_1_object; // 0x301 MovT
	func_6483(var_180_object); // 0x302 Call
	var_181_bool = var_179_bool == 0; // 0x304 Not
	if(var_181_bool == 0) goto Label_779; // 0x305 JumpB
	var_182_int = 12525; // 0x306 PushI
	var_183_int = -1; // 0x307 PushI
	var_184_int = 13695; // 0x308 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x309 TObjFunc
	
Label_779:
	return 0; // 0x30b Return
	
Label_780:
	var_185_int = 3621; // 0x30c PushI
	var_186_bool = var_35_string == var_185_int; // 0x30d Eq
	if(var_186_bool == 0) goto Label_808; // 0x30e JumpB
	var_187_string = ""; // 0x30f PushV
	var_187_string = "Neutral"; // 0x310 MovS
	func_555(var_36_bool, var_187_string); // 0x311 Call
	var_188_int = 3377; // 0x313 PushI
	SetMessage(var_188_int); // 0x314 TObjFunc
	ClearReplies(); // 0x316 TObjFunc
	var_189_int = 3378; // 0x318 PushI
	var_190_int = 3626; // 0x319 PushI
	var_191_int = 3622; // 0x31a PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x31b TObjFunc
	var_192_int = 3379; // 0x31d PushI
	var_193_int = 3626; // 0x31e PushI
	var_194_int = 3624; // 0x31f PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x320 TObjFunc
	var_195_int = 3380; // 0x322 PushI
	var_196_int = 3626; // 0x323 PushI
	var_197_int = 3625; // 0x324 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_198_int = 3626; // 0x328 PushI
	var_199_bool = var_35_string == var_198_int; // 0x329 Eq
	if(var_199_bool == 0) goto Label_836; // 0x32a JumpB
	var_200_string = ""; // 0x32b PushV
	var_200_string = "Neutral"; // 0x32c MovS
	func_555(var_36_bool, var_200_string); // 0x32d Call
	var_201_int = 3381; // 0x32f PushI
	SetMessage(var_201_int); // 0x330 TObjFunc
	ClearReplies(); // 0x332 TObjFunc
	var_202_int = 3382; // 0x334 PushI
	var_203_int = 3631; // 0x335 PushI
	var_204_int = 3627; // 0x336 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x337 TObjFunc
	var_205_int = 3383; // 0x339 PushI
	var_206_int = -1; // 0x33a PushI
	var_207_int = 3630; // 0x33b PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x33c TObjFunc
	var_208_int = 3396; // 0x33e PushI
	var_209_int = -1; // 0x33f PushI
	var_210_int = 3643; // 0x340 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x341 TObjFunc
	return 0; // 0x343 Return
	
Label_836:
	var_211_int = 3631; // 0x344 PushI
	var_212_bool = var_35_string == var_211_int; // 0x345 Eq
	if(var_212_bool == 0) goto Label_869; // 0x346 JumpB
	var_213_string = ""; // 0x347 PushV
	var_213_string = "Neutral"; // 0x348 MovS
	func_555(var_36_bool, var_213_string); // 0x349 Call
	var_214_int = 3384; // 0x34b PushI
	SetMessage(var_214_int); // 0x34c TObjFunc
	ClearReplies(); // 0x34e TObjFunc
	var_215_int = 3385; // 0x350 PushI
	var_216_int = 3639; // 0x351 PushI
	var_217_int = 3632; // 0x352 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x353 TObjFunc
	var_218_int = 3386; // 0x355 PushI
	var_219_int = -1; // 0x356 PushI
	var_220_int = 3633; // 0x357 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x358 TObjFunc
	var_221_int = 3387; // 0x35a PushI
	var_222_int = -1; // 0x35b PushI
	var_223_int = 3634; // 0x35c PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x35d TObjFunc
	var_224_int = 3388; // 0x35f PushI
	var_225_int = 3636; // 0x360 PushI
	var_226_int = 3635; // 0x361 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x362 TObjFunc
	return 0; // 0x364 Return
	
Label_869:
	var_227_int = 3636; // 0x365 PushI
	var_228_bool = var_35_string == var_227_int; // 0x366 Eq
	if(var_228_bool == 0) goto Label_892; // 0x367 JumpB
	var_229_string = ""; // 0x368 PushV
	var_229_string = "Neutral"; // 0x369 MovS
	func_555(var_36_bool, var_229_string); // 0x36a Call
	var_230_int = 3389; // 0x36c PushI
	SetMessage(var_230_int); // 0x36d TObjFunc
	ClearReplies(); // 0x36f TObjFunc
	var_231_int = 3390; // 0x371 PushI
	var_232_int = -1; // 0x372 PushI
	var_233_int = 3637; // 0x373 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x374 TObjFunc
	var_234_int = 3391; // 0x376 PushI
	var_235_int = -1; // 0x377 PushI
	var_236_int = 3638; // 0x378 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x379 TObjFunc
	return 0; // 0x37b Return
	
Label_892:
	var_237_int = 3639; // 0x37c PushI
	var_238_bool = var_35_string == var_237_int; // 0x37d Eq
	if(var_238_bool == 0) goto Label_920; // 0x37e JumpB
	var_239_string = ""; // 0x37f PushV
	var_239_string = "Neutral"; // 0x380 MovS
	func_555(var_36_bool, var_239_string); // 0x381 Call
	var_240_int = 3392; // 0x383 PushI
	SetMessage(var_240_int); // 0x384 TObjFunc
	ClearReplies(); // 0x386 TObjFunc
	var_241_int = 3393; // 0x388 PushI
	var_242_int = -1; // 0x389 PushI
	var_243_int = 3640; // 0x38a PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x38b TObjFunc
	var_244_int = 3394; // 0x38d PushI
	var_245_int = -1; // 0x38e PushI
	var_246_int = 3641; // 0x38f PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x390 TObjFunc
	var_247_int = 3395; // 0x392 PushI
	var_248_int = -1; // 0x393 PushI
	var_249_int = 3642; // 0x394 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x395 TObjFunc
	return 0; // 0x397 Return
	
Label_920:
	var_3_string = 1; // 0x398 TMovB
	var_250_bool = 0; // 0x399 PushV
	func_5746(var_250_bool); // 0x39a Call
	if(var_250_bool == 0) goto Label_928; // 0x39c JumpB
	lshStopAnimation(); // 0x39d Func
	goto Label_930; // 0x39f Jump
	
Label_930:
	return 0; // 0x3a2 Return
	
Label_928:
	StopAnimation(); // 0x3a0 Func
	
Label_932:
	return 0; // 0x3a4 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x527 PushI
	if(var_37_int == 0) goto Label_3070; // 0x528 JumpB
	func_5642(); // 0x52a Call
	var_39_int = 6610; // 0x52c PushI
	var_40_bool = var_36_bool == var_39_int; // 0x52d Eq
	if(var_40_bool == 0) goto Label_1342; // 0x52e JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x52f PushV
	var_41_object = var_1_object; // 0x530 MovT
	var_42_object = var_0_object; // 0x531 MovT
	func_5754(); // 0x532 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x534 PushV
	var_45_object = var_1_object; // 0x535 MovT
	var_46_object = var_0_object; // 0x536 MovT
	func_5790(); // 0x537 Call
	var_98_object = Obj(); var_99_object = Obj(); // 0x539 PushV
	var_98_object = var_1_object; // 0x53a MovT
	var_99_object = var_0_object; // 0x53b MovT
	func_5875(); // 0x53c Call
	
Label_1342:
	var_124_int = 6606; // 0x53e PushI
	var_125_bool = var_36_bool == var_124_int; // 0x53f Eq
	if(var_125_bool == 0) goto Label_1350; // 0x540 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x541 PushV
	var_126_object = var_1_object; // 0x542 MovT
	var_127_object = var_0_object; // 0x543 MovT
	func_5754(); // 0x544 Call
	
Label_1350:
	var_128_int = 6611; // 0x546 PushI
	var_129_bool = var_36_bool == var_128_int; // 0x547 Eq
	if(var_129_bool == 0) goto Label_1368; // 0x548 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x549 PushV
	var_130_object = var_1_object; // 0x54a MovT
	var_131_object = var_0_object; // 0x54b MovT
	func_5754(); // 0x54c Call
	var_132_object = Obj(); var_133_object = Obj(); // 0x54e PushV
	var_132_object = var_1_object; // 0x54f MovT
	var_133_object = var_0_object; // 0x550 MovT
	func_5790(); // 0x551 Call
	var_134_object = Obj(); var_135_object = Obj(); // 0x553 PushV
	var_134_object = var_1_object; // 0x554 MovT
	var_135_object = var_0_object; // 0x555 MovT
	func_5875(); // 0x556 Call
	
Label_1368:
	var_136_int = 6612; // 0x558 PushI
	var_137_bool = var_36_bool == var_136_int; // 0x559 Eq
	if(var_137_bool == 0) goto Label_1376; // 0x55a JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x55b PushV
	var_138_object = var_1_object; // 0x55c MovT
	var_139_object = var_0_object; // 0x55d MovT
	func_5754(); // 0x55e Call
	
Label_1376:
	var_140_int = 6035; // 0x560 PushI
	var_141_bool = var_36_bool == var_140_int; // 0x561 Eq
	if(var_141_bool == 0) goto Label_1384; // 0x562 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x563 PushV
	var_142_object = var_1_object; // 0x564 MovT
	var_143_object = var_0_object; // 0x565 MovT
	func_5760(); // 0x566 Call
	
Label_1384:
	var_146_int = 6036; // 0x568 PushI
	var_147_bool = var_36_bool == var_146_int; // 0x569 Eq
	if(var_147_bool == 0) goto Label_1392; // 0x56a JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x56b PushV
	var_148_object = var_1_object; // 0x56c MovT
	var_149_object = var_0_object; // 0x56d MovT
	func_5760(); // 0x56e Call
	
Label_1392:
	var_150_int = 6037; // 0x570 PushI
	var_151_bool = var_36_bool == var_150_int; // 0x571 Eq
	if(var_151_bool == 0) goto Label_1400; // 0x572 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x573 PushV
	var_152_object = var_1_object; // 0x574 MovT
	var_153_object = var_0_object; // 0x575 MovT
	func_5760(); // 0x576 Call
	
Label_1400:
	var_154_int = 6038; // 0x578 PushI
	var_155_bool = var_36_bool == var_154_int; // 0x579 Eq
	if(var_155_bool == 0) goto Label_1408; // 0x57a JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0x57b PushV
	var_156_object = var_1_object; // 0x57c MovT
	var_157_object = var_0_object; // 0x57d MovT
	func_5760(); // 0x57e Call
	
Label_1408:
	var_158_int = 6041; // 0x580 PushI
	var_159_bool = var_36_bool == var_158_int; // 0x581 Eq
	if(var_159_bool == 0) goto Label_1416; // 0x582 JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x583 PushV
	var_160_object = var_1_object; // 0x584 MovT
	var_161_object = var_0_object; // 0x585 MovT
	func_5760(); // 0x586 Call
	
Label_1416:
	var_162_int = 6042; // 0x588 PushI
	var_163_bool = var_36_bool == var_162_int; // 0x589 Eq
	if(var_163_bool == 0) goto Label_1424; // 0x58a JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x58b PushV
	var_164_object = var_1_object; // 0x58c MovT
	var_165_object = var_0_object; // 0x58d MovT
	func_5760(); // 0x58e Call
	
Label_1424:
	var_166_int = 6015; // 0x590 PushI
	var_167_bool = var_36_bool == var_166_int; // 0x591 Eq
	if(var_167_bool == 0) goto Label_1432; // 0x592 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x593 PushV
	var_168_object = var_1_object; // 0x594 MovT
	var_169_object = var_0_object; // 0x595 MovT
	func_5766(); // 0x596 Call
	
Label_1432:
	var_172_int = 6016; // 0x598 PushI
	var_173_bool = var_36_bool == var_172_int; // 0x599 Eq
	if(var_173_bool == 0) goto Label_1440; // 0x59a JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x59b PushV
	var_174_object = var_1_object; // 0x59c MovT
	var_175_object = var_0_object; // 0x59d MovT
	func_5766(); // 0x59e Call
	
Label_1440:
	var_176_int = 6017; // 0x5a0 PushI
	var_177_bool = var_36_bool == var_176_int; // 0x5a1 Eq
	if(var_177_bool == 0) goto Label_1448; // 0x5a2 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x5a3 PushV
	var_178_object = var_1_object; // 0x5a4 MovT
	var_179_object = var_0_object; // 0x5a5 MovT
	func_5766(); // 0x5a6 Call
	
Label_1448:
	var_180_int = 6675; // 0x5a8 PushI
	var_181_bool = var_36_bool == var_180_int; // 0x5a9 Eq
	if(var_181_bool == 0) goto Label_1456; // 0x5aa JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x5ab PushV
	var_182_object = var_1_object; // 0x5ac MovT
	var_183_object = var_0_object; // 0x5ad MovT
	func_5772(); // 0x5ae Call
	
Label_1456:
	var_186_int = 6700; // 0x5b0 PushI
	var_187_bool = var_36_bool == var_186_int; // 0x5b1 Eq
	if(var_187_bool == 0) goto Label_1464; // 0x5b2 JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x5b3 PushV
	var_188_object = var_1_object; // 0x5b4 MovT
	var_189_object = var_0_object; // 0x5b5 MovT
	func_5772(); // 0x5b6 Call
	
Label_1464:
	var_190_int = 6701; // 0x5b8 PushI
	var_191_bool = var_36_bool == var_190_int; // 0x5b9 Eq
	if(var_191_bool == 0) goto Label_1472; // 0x5ba JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0x5bb PushV
	var_192_object = var_1_object; // 0x5bc MovT
	var_193_object = var_0_object; // 0x5bd MovT
	func_5772(); // 0x5be Call
	
Label_1472:
	var_194_int = 6006; // 0x5c0 PushI
	var_195_bool = var_36_bool == var_194_int; // 0x5c1 Eq
	if(var_195_bool == 0) goto Label_1480; // 0x5c2 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x5c3 PushV
	var_196_object = var_1_object; // 0x5c4 MovT
	var_197_object = var_0_object; // 0x5c5 MovT
	func_5790(); // 0x5c6 Call
	
Label_1480:
	var_198_int = 9564; // 0x5c8 PushI
	var_199_bool = var_36_bool == var_198_int; // 0x5c9 Eq
	if(var_199_bool == 0) goto Label_1493; // 0x5ca JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x5cb PushV
	var_200_object = var_1_object; // 0x5cc MovT
	var_201_object = var_0_object; // 0x5cd MovT
	func_5790(); // 0x5ce Call
	var_202_object = Obj(); var_203_object = Obj(); // 0x5d0 PushV
	var_202_object = var_1_object; // 0x5d1 MovT
	var_203_object = var_0_object; // 0x5d2 MovT
	func_5875(); // 0x5d3 Call
	
Label_1493:
	var_204_int = 6942; // 0x5d5 PushI
	var_205_bool = var_36_bool == var_204_int; // 0x5d6 Eq
	if(var_205_bool == 0) goto Label_1501; // 0x5d7 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0x5d8 PushV
	var_206_object = var_1_object; // 0x5d9 MovT
	var_207_object = var_0_object; // 0x5da MovT
	func_5817(); // 0x5db Call
	
Label_1501:
	var_210_int = 6943; // 0x5dd PushI
	var_211_bool = var_36_bool == var_210_int; // 0x5de Eq
	if(var_211_bool == 0) goto Label_1509; // 0x5df JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0x5e0 PushV
	var_212_object = var_1_object; // 0x5e1 MovT
	var_213_object = var_0_object; // 0x5e2 MovT
	func_5817(); // 0x5e3 Call
	
Label_1509:
	var_214_int = 8783; // 0x5e5 PushI
	var_215_bool = var_36_bool == var_214_int; // 0x5e6 Eq
	if(var_215_bool == 0) goto Label_1517; // 0x5e7 JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x5e8 PushV
	var_216_object = var_1_object; // 0x5e9 MovT
	var_217_object = var_0_object; // 0x5ea MovT
	func_5907(); // 0x5eb Call
	
Label_1517:
	var_220_int = 8794; // 0x5ed PushI
	var_221_bool = var_36_bool == var_220_int; // 0x5ee Eq
	if(var_221_bool == 0) goto Label_1525; // 0x5ef JumpB
	var_222_object = Obj(); var_223_object = Obj(); // 0x5f0 PushV
	var_222_object = var_1_object; // 0x5f1 MovT
	var_223_object = var_0_object; // 0x5f2 MovT
	func_5913(); // 0x5f3 Call
	
Label_1525:
	var_226_int = 8803; // 0x5f5 PushI
	var_227_bool = var_36_bool == var_226_int; // 0x5f6 Eq
	if(var_227_bool == 0) goto Label_1533; // 0x5f7 JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0x5f8 PushV
	var_228_object = var_1_object; // 0x5f9 MovT
	var_229_object = var_0_object; // 0x5fa MovT
	func_5919(); // 0x5fb Call
	
Label_1533:
	var_232_int = 8804; // 0x5fd PushI
	var_233_bool = var_36_bool == var_232_int; // 0x5fe Eq
	if(var_233_bool == 0) goto Label_1541; // 0x5ff JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0x600 PushV
	var_234_object = var_1_object; // 0x601 MovT
	var_235_object = var_0_object; // 0x602 MovT
	func_5919(); // 0x603 Call
	
Label_1541:
	var_236_int = 8811; // 0x605 PushI
	var_237_bool = var_36_bool == var_236_int; // 0x606 Eq
	if(var_237_bool == 0) goto Label_1549; // 0x607 JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0x608 PushV
	var_238_object = var_1_object; // 0x609 MovT
	var_239_object = var_0_object; // 0x60a MovT
	func_5925(); // 0x60b Call
	
Label_1549:
	var_242_int = 8812; // 0x60d PushI
	var_243_bool = var_36_bool == var_242_int; // 0x60e Eq
	if(var_243_bool == 0) goto Label_1557; // 0x60f JumpB
	var_244_object = Obj(); var_245_object = Obj(); // 0x610 PushV
	var_244_object = var_1_object; // 0x611 MovT
	var_245_object = var_0_object; // 0x612 MovT
	func_5925(); // 0x613 Call
	
Label_1557:
	var_246_int = 8817; // 0x615 PushI
	var_247_bool = var_36_bool == var_246_int; // 0x616 Eq
	if(var_247_bool == 0) goto Label_1565; // 0x617 JumpB
	var_248_object = Obj(); var_249_object = Obj(); // 0x618 PushV
	var_248_object = var_1_object; // 0x619 MovT
	var_249_object = var_0_object; // 0x61a MovT
	func_5925(); // 0x61b Call
	
Label_1565:
	var_250_int = 9568; // 0x61d PushI
	var_251_bool = var_36_bool == var_250_int; // 0x61e Eq
	if(var_251_bool == 0) goto Label_1573; // 0x61f JumpB
	var_252_object = Obj(); var_253_object = Obj(); // 0x620 PushV
	var_252_object = var_1_object; // 0x621 MovT
	var_253_object = var_0_object; // 0x622 MovT
	func_5931(); // 0x623 Call
	
Label_1573:
	var_256_int = 6003; // 0x625 PushI
	var_257_bool = var_35_string == var_256_int; // 0x626 Eq
	if(var_257_bool == 0) goto Label_1844; // 0x627 JumpB
	var_258_bool = 0; // 0x628 PushV
	var_258_bool = 0; // 0x629 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x62a PushV
	var_260_object = var_1_object; // 0x62b MovT
	func_6723(var_260_object); // 0x62c Call
	if(var_259_bool == 0) goto Label_1589; // 0x62e JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x62f PushV
	var_268_object = var_1_object; // 0x630 MovT
	func_6192(var_268_object); // 0x631 Call
	if(var_267_bool == 0) goto Label_1589; // 0x633 JumpB
	var_258_bool = 1; // 0x634 MovB
	
Label_1589:
	if(var_258_bool == 0) goto Label_1610; // 0x635 JumpB
	var_273_string = ""; // 0x636 PushV
	var_273_string = "Neutral"; // 0x637 MovS
	func_1302(var_36_bool, var_273_string); // 0x638 Call
	var_288_int = 5449; // 0x63a PushI
	SetMessage(var_288_int); // 0x63b TObjFunc
	ClearReplies(); // 0x63d TObjFunc
	var_289_int = 5453; // 0x63f PushI
	var_290_int = 6575; // 0x640 PushI
	var_291_int = 6007; // 0x641 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x642 TObjFunc
	var_292_int = 5974; // 0x644 PushI
	var_293_int = 6575; // 0x645 PushI
	var_294_int = 6579; // 0x646 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x647 TObjFunc
	return 0; // 0x649 Return
	
Label_1610:
	var_295_string = ""; // 0x64a PushV
	var_295_string = "Neutral"; // 0x64b MovS
	func_1302(var_36_bool, var_295_string); // 0x64c Call
	var_296_int = 5484; // 0x64e PushI
	SetMessage(var_296_int); // 0x64f TObjFunc
	ClearReplies(); // 0x651 TObjFunc
	var_297_bool = 0; var_298_object = Obj(); // 0x653 PushV
	var_298_object = var_1_object; // 0x654 MovT
	func_6735(var_298_object); // 0x655 Call
	if(var_297_bool == 0) goto Label_1629; // 0x657 JumpB
	var_303_int = 8729; // 0x658 PushI
	var_304_int = 6028; // 0x659 PushI
	var_305_int = 9566; // 0x65a PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x65b TObjFunc
	
Label_1629:
	var_306_bool = 0; // 0x65d PushV
	var_306_bool = 0; // 0x65e MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x65f PushV
	var_308_object = var_1_object; // 0x660 MovT
	func_6144(var_308_object); // 0x661 Call
	if(var_307_bool == 0) goto Label_1642; // 0x663 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x664 PushV
	var_314_object = var_1_object; // 0x665 MovT
	func_6168(var_314_object); // 0x666 Call
	if(var_313_bool == 0) goto Label_1642; // 0x668 JumpB
	var_306_bool = 1; // 0x669 MovB
	
Label_1642:
	if(var_306_bool == 0) goto Label_1648; // 0x66a JumpB
	var_319_int = 8728; // 0x66b PushI
	var_320_int = 6008; // 0x66c PushI
	var_321_int = 9565; // 0x66d PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x66e TObjFunc
	
Label_1648:
	var_322_bool = 0; // 0x670 PushV
	var_322_bool = 0; // 0x671 MovB
	var_323_bool = 0; // 0x672 PushV
	var_323_bool = 0; // 0x673 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x674 PushV
	var_325_object = var_1_object; // 0x675 MovT
	func_6156(var_325_object); // 0x676 Call
	if(var_324_bool == 0) goto Label_1663; // 0x678 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x679 PushV
	var_331_object = var_1_object; // 0x67a MovT
	func_6204(var_331_object); // 0x67b Call
	if(var_330_bool == 0) goto Label_1663; // 0x67d JumpB
	var_323_bool = 1; // 0x67e MovB
	
Label_1663:
	if(var_323_bool == 0) goto Label_1670; // 0x67f JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0x680 PushV
	var_337_object = var_1_object; // 0x681 MovT
	func_6216(var_337_object); // 0x682 Call
	if(var_336_bool == 0) goto Label_1670; // 0x684 JumpB
	var_322_bool = 1; // 0x685 MovB
	
Label_1670:
	if(var_322_bool == 0) goto Label_1676; // 0x686 JumpB
	var_342_int = 5451; // 0x687 PushI
	var_343_int = 6666; // 0x688 PushI
	var_344_int = 6005; // 0x689 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x68a TObjFunc
	
Label_1676:
	var_345_bool = 0; // 0x68c PushV
	var_345_bool = 0; // 0x68d MovB
	var_346_bool = 0; // 0x68e PushV
	var_346_bool = 0; // 0x68f MovB
	var_347_bool = 0; var_348_object = Obj(); // 0x690 PushV
	var_348_object = var_1_object; // 0x691 MovT
	func_6180(var_348_object); // 0x692 Call
	if(var_347_bool == 0) goto Label_1691; // 0x694 JumpB
	var_353_bool = 0; var_354_object = Obj(); // 0x695 PushV
	var_354_object = var_1_object; // 0x696 MovT
	func_6192(var_354_object); // 0x697 Call
	if(var_353_bool == 0) goto Label_1691; // 0x699 JumpB
	var_346_bool = 1; // 0x69a MovB
	
Label_1691:
	if(var_346_bool == 0) goto Label_1699; // 0x69b JumpB
	var_355_bool = 0; var_356_object = Obj(); // 0x69c PushV
	var_356_object = var_1_object; // 0x69d MovT
	func_6723(var_356_object); // 0x69e Call
	var_357_bool = var_355_bool == 0; // 0x6a0 Not
	if(var_357_bool == 0) goto Label_1699; // 0x6a1 JumpB
	var_345_bool = 1; // 0x6a2 MovB
	
Label_1699:
	if(var_345_bool == 0) goto Label_1705; // 0x6a3 JumpB
	var_358_int = 5452; // 0x6a4 PushI
	var_359_int = 9563; // 0x6a5 PushI
	var_360_int = 6006; // 0x6a6 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x6a7 TObjFunc
	
Label_1705:
	var_361_bool = 0; // 0x6a9 PushV
	var_361_bool = 0; // 0x6aa MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x6ab PushV
	var_363_object = var_1_object; // 0x6ac MovT
	func_6228(var_363_object); // 0x6ad Call
	if(var_362_bool == 0) goto Label_1718; // 0x6af JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x6b0 PushV
	var_369_object = var_1_object; // 0x6b1 MovT
	func_6240(var_369_object); // 0x6b2 Call
	if(var_368_bool == 0) goto Label_1718; // 0x6b4 JumpB
	var_361_bool = 1; // 0x6b5 MovB
	
Label_1718:
	if(var_361_bool == 0) goto Label_1724; // 0x6b6 JumpB
	var_374_int = 6288; // 0x6b7 PushI
	var_375_int = 6941; // 0x6b8 PushI
	var_376_int = 6940; // 0x6b9 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x6ba TObjFunc
	
Label_1724:
	var_377_bool = 0; // 0x6bc PushV
	var_377_bool = 0; // 0x6bd MovB
	var_378_bool = 0; var_379_object = Obj(); // 0x6be PushV
	var_379_object = var_1_object; // 0x6bf MovT
	func_6615(var_379_object); // 0x6c0 Call
	if(var_378_bool == 0) goto Label_1737; // 0x6c2 JumpB
	var_384_bool = 0; var_385_object = Obj(); // 0x6c3 PushV
	var_385_object = var_1_object; // 0x6c4 MovT
	func_6300(var_385_object); // 0x6c5 Call
	if(var_384_bool == 0) goto Label_1737; // 0x6c7 JumpB
	var_377_bool = 1; // 0x6c8 MovB
	
Label_1737:
	if(var_377_bool == 0) goto Label_1743; // 0x6c9 JumpB
	var_390_int = 7933; // 0x6ca PushI
	var_391_int = 8773; // 0x6cb PushI
	var_392_int = 8753; // 0x6cc PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x6cd TObjFunc
	
Label_1743:
	var_393_bool = 0; // 0x6cf PushV
	var_393_bool = 0; // 0x6d0 MovB
	var_394_bool = 0; var_395_object = Obj(); // 0x6d1 PushV
	var_395_object = var_1_object; // 0x6d2 MovT
	func_6603(var_395_object); // 0x6d3 Call
	if(var_394_bool == 0) goto Label_1756; // 0x6d5 JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x6d6 PushV
	var_401_object = var_1_object; // 0x6d7 MovT
	func_6312(var_401_object); // 0x6d8 Call
	if(var_400_bool == 0) goto Label_1756; // 0x6da JumpB
	var_393_bool = 1; // 0x6db MovB
	
Label_1756:
	if(var_393_bool == 0) goto Label_1762; // 0x6dc JumpB
	var_406_int = 7938; // 0x6dd PushI
	var_407_int = 8784; // 0x6de PushI
	var_408_int = 8758; // 0x6df PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x6e0 TObjFunc
	
Label_1762:
	var_409_bool = 0; // 0x6e2 PushV
	var_409_bool = 0; // 0x6e3 MovB
	var_410_bool = 0; var_411_object = Obj(); // 0x6e4 PushV
	var_411_object = var_1_object; // 0x6e5 MovT
	func_6639(var_411_object); // 0x6e6 Call
	if(var_410_bool == 0) goto Label_1775; // 0x6e8 JumpB
	var_416_bool = 0; var_417_object = Obj(); // 0x6e9 PushV
	var_417_object = var_1_object; // 0x6ea MovT
	func_6324(var_417_object); // 0x6eb Call
	if(var_416_bool == 0) goto Label_1775; // 0x6ed JumpB
	var_409_bool = 1; // 0x6ee MovB
	
Label_1775:
	if(var_409_bool == 0) goto Label_1781; // 0x6ef JumpB
	var_422_int = 7943; // 0x6f0 PushI
	var_423_int = 8775; // 0x6f1 PushI
	var_424_int = 8763; // 0x6f2 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x6f3 TObjFunc
	
Label_1781:
	var_425_bool = 0; // 0x6f5 PushV
	var_425_bool = 0; // 0x6f6 MovB
	var_426_bool = 0; var_427_object = Obj(); // 0x6f7 PushV
	var_427_object = var_1_object; // 0x6f8 MovT
	func_6627(var_427_object); // 0x6f9 Call
	if(var_426_bool == 0) goto Label_1794; // 0x6fb JumpB
	var_432_bool = 0; var_433_object = Obj(); // 0x6fc PushV
	var_433_object = var_1_object; // 0x6fd MovT
	func_6336(var_433_object); // 0x6fe Call
	if(var_432_bool == 0) goto Label_1794; // 0x700 JumpB
	var_425_bool = 1; // 0x701 MovB
	
Label_1794:
	if(var_425_bool == 0) goto Label_1800; // 0x702 JumpB
	var_438_int = 7950; // 0x703 PushI
	var_439_int = 8776; // 0x704 PushI
	var_440_int = 8770; // 0x705 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x706 TObjFunc
	
Label_1800:
	var_441_bool = 0; // 0x708 PushV
	var_441_bool = 0; // 0x709 MovB
	var_442_bool = 0; var_443_object = Obj(); // 0x70a PushV
	var_443_object = var_1_object; // 0x70b MovT
	func_6699(var_443_object); // 0x70c Call
	if(var_442_bool == 0) goto Label_1813; // 0x70e JumpB
	var_448_bool = 0; var_449_object = Obj(); // 0x70f PushV
	var_449_object = var_1_object; // 0x710 MovT
	func_6348(var_449_object); // 0x711 Call
	if(var_448_bool == 0) goto Label_1813; // 0x713 JumpB
	var_441_bool = 1; // 0x714 MovB
	
Label_1813:
	if(var_441_bool == 0) goto Label_1819; // 0x715 JumpB
	var_454_int = 7951; // 0x716 PushI
	var_455_int = 8777; // 0x717 PushI
	var_456_int = 8771; // 0x718 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x719 TObjFunc
	
Label_1819:
	var_457_bool = 0; // 0x71b PushV
	var_457_bool = 0; // 0x71c MovB
	var_458_bool = 0; var_459_object = Obj(); // 0x71d PushV
	var_459_object = var_1_object; // 0x71e MovT
	func_6675(var_459_object); // 0x71f Call
	if(var_458_bool == 0) goto Label_1832; // 0x721 JumpB
	var_464_bool = 0; var_465_object = Obj(); // 0x722 PushV
	var_465_object = var_1_object; // 0x723 MovT
	func_6360(var_465_object); // 0x724 Call
	if(var_464_bool == 0) goto Label_1832; // 0x726 JumpB
	var_457_bool = 1; // 0x727 MovB
	
Label_1832:
	if(var_457_bool == 0) goto Label_1838; // 0x728 JumpB
	var_470_int = 7952; // 0x729 PushI
	var_471_int = 8778; // 0x72a PushI
	var_472_int = 8772; // 0x72b PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x72c TObjFunc
	
Label_1838:
	var_473_int = 6264; // 0x72e PushI
	var_474_int = -1; // 0x72f PushI
	var_475_int = 6931; // 0x730 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x731 TObjFunc
	return 0; // 0x733 Return
	
Label_1844:
	var_476_int = 8778; // 0x734 PushI
	var_477_bool = var_35_string == var_476_int; // 0x735 Eq
	if(var_477_bool == 0) goto Label_1867; // 0x736 JumpB
	var_478_object = Obj(); var_479_object = Obj(); // 0x737 PushV
	var_478_object = var_1_object; // 0x738 MovT
	var_479_object = var_0_object; // 0x739 MovT
	func_6138(); // 0x73a Call
	var_482_string = ""; // 0x73c PushV
	var_482_string = "Neutral"; // 0x73d MovS
	func_1302(var_36_bool, var_482_string); // 0x73e Call
	var_483_int = 7958; // 0x740 PushI
	SetMessage(var_483_int); // 0x741 TObjFunc
	ClearReplies(); // 0x743 TObjFunc
	var_484_int = 8000; // 0x745 PushI
	var_485_int = 9567; // 0x746 PushI
	var_486_int = 8823; // 0x747 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x748 TObjFunc
	return 0; // 0x74a Return
	
Label_1867:
	var_487_int = 9567; // 0x74b PushI
	var_488_bool = var_35_string == var_487_int; // 0x74c Eq
	if(var_488_bool == 0) goto Label_1885; // 0x74d JumpB
	var_489_string = ""; // 0x74e PushV
	var_489_string = "Neutral"; // 0x74f MovS
	func_1302(var_36_bool, var_489_string); // 0x750 Call
	var_490_int = 8730; // 0x752 PushI
	SetMessage(var_490_int); // 0x753 TObjFunc
	ClearReplies(); // 0x755 TObjFunc
	var_491_int = 8731; // 0x757 PushI
	var_492_int = -1; // 0x758 PushI
	var_493_int = 9568; // 0x759 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x75a TObjFunc
	return 0; // 0x75c Return
	
Label_1885:
	var_494_int = 8777; // 0x75d PushI
	var_495_bool = var_35_string == var_494_int; // 0x75e Eq
	if(var_495_bool == 0) goto Label_1903; // 0x75f JumpB
	var_496_string = ""; // 0x760 PushV
	var_496_string = "Neutral"; // 0x761 MovS
	func_1302(var_36_bool, var_496_string); // 0x762 Call
	var_497_int = 7957; // 0x764 PushI
	SetMessage(var_497_int); // 0x765 TObjFunc
	ClearReplies(); // 0x767 TObjFunc
	var_498_int = 7995; // 0x769 PushI
	var_499_int = 8819; // 0x76a PushI
	var_500_int = 8818; // 0x76b PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x76c TObjFunc
	return 0; // 0x76e Return
	
Label_1903:
	var_501_int = 8819; // 0x76f PushI
	var_502_bool = var_35_string == var_501_int; // 0x770 Eq
	if(var_502_bool == 0) goto Label_1921; // 0x771 JumpB
	var_503_string = ""; // 0x772 PushV
	var_503_string = "Neutral"; // 0x773 MovS
	func_1302(var_36_bool, var_503_string); // 0x774 Call
	var_504_int = 7996; // 0x776 PushI
	SetMessage(var_504_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_505_int = 7997; // 0x77b PushI
	var_506_int = 9569; // 0x77c PushI
	var_507_int = 8820; // 0x77d PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x77e TObjFunc
	return 0; // 0x780 Return
	
Label_1921:
	var_508_int = 9569; // 0x781 PushI
	var_509_bool = var_35_string == var_508_int; // 0x782 Eq
	if(var_509_bool == 0) goto Label_1939; // 0x783 JumpB
	var_510_string = ""; // 0x784 PushV
	var_510_string = "Neutral"; // 0x785 MovS
	func_1302(var_36_bool, var_510_string); // 0x786 Call
	var_511_int = 8732; // 0x788 PushI
	SetMessage(var_511_int); // 0x789 TObjFunc
	ClearReplies(); // 0x78b TObjFunc
	var_512_int = 8733; // 0x78d PushI
	var_513_int = 9571; // 0x78e PushI
	var_514_int = 9570; // 0x78f PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x790 TObjFunc
	return 0; // 0x792 Return
	
Label_1939:
	var_515_int = 9571; // 0x793 PushI
	var_516_bool = var_35_string == var_515_int; // 0x794 Eq
	if(var_516_bool == 0) goto Label_1957; // 0x795 JumpB
	var_517_string = ""; // 0x796 PushV
	var_517_string = "Neutral"; // 0x797 MovS
	func_1302(var_36_bool, var_517_string); // 0x798 Call
	var_518_int = 8734; // 0x79a PushI
	SetMessage(var_518_int); // 0x79b TObjFunc
	ClearReplies(); // 0x79d TObjFunc
	var_519_int = 8735; // 0x79f PushI
	var_520_int = -1; // 0x7a0 PushI
	var_521_int = 9572; // 0x7a1 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x7a2 TObjFunc
	return 0; // 0x7a4 Return
	
Label_1957:
	var_522_int = 8776; // 0x7a5 PushI
	var_523_bool = var_35_string == var_522_int; // 0x7a6 Eq
	if(var_523_bool == 0) goto Label_1980; // 0x7a7 JumpB
	var_524_string = ""; // 0x7a8 PushV
	var_524_string = "Neutral"; // 0x7a9 MovS
	func_1302(var_36_bool, var_524_string); // 0x7aa Call
	var_525_int = 7956; // 0x7ac PushI
	SetMessage(var_525_int); // 0x7ad TObjFunc
	ClearReplies(); // 0x7af TObjFunc
	var_526_int = 7983; // 0x7b1 PushI
	var_527_int = 8807; // 0x7b2 PushI
	var_528_int = 8805; // 0x7b3 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x7b4 TObjFunc
	var_529_int = 7984; // 0x7b6 PushI
	var_530_int = 8807; // 0x7b7 PushI
	var_531_int = 8806; // 0x7b8 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x7b9 TObjFunc
	return 0; // 0x7bb Return
	
Label_1980:
	var_532_int = 8807; // 0x7bc PushI
	var_533_bool = var_35_string == var_532_int; // 0x7bd Eq
	if(var_533_bool == 0) goto Label_2003; // 0x7be JumpB
	var_534_string = ""; // 0x7bf PushV
	var_534_string = "Neutral"; // 0x7c0 MovS
	func_1302(var_36_bool, var_534_string); // 0x7c1 Call
	var_535_int = 7985; // 0x7c3 PushI
	SetMessage(var_535_int); // 0x7c4 TObjFunc
	ClearReplies(); // 0x7c6 TObjFunc
	var_536_int = 7986; // 0x7c8 PushI
	var_537_int = 8810; // 0x7c9 PushI
	var_538_int = 8809; // 0x7ca PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x7cb TObjFunc
	var_539_int = 7990; // 0x7cd PushI
	var_540_int = 8814; // 0x7ce PushI
	var_541_int = 8813; // 0x7cf PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x7d0 TObjFunc
	return 0; // 0x7d2 Return
	
Label_2003:
	var_542_int = 8814; // 0x7d3 PushI
	var_543_bool = var_35_string == var_542_int; // 0x7d4 Eq
	if(var_543_bool == 0) goto Label_2021; // 0x7d5 JumpB
	var_544_string = ""; // 0x7d6 PushV
	var_544_string = "Neutral"; // 0x7d7 MovS
	func_1302(var_36_bool, var_544_string); // 0x7d8 Call
	var_545_int = 7991; // 0x7da PushI
	SetMessage(var_545_int); // 0x7db TObjFunc
	ClearReplies(); // 0x7dd TObjFunc
	var_546_int = 7992; // 0x7df PushI
	var_547_int = 8816; // 0x7e0 PushI
	var_548_int = 8815; // 0x7e1 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x7e2 TObjFunc
	return 0; // 0x7e4 Return
	
Label_2021:
	var_549_int = 8816; // 0x7e5 PushI
	var_550_bool = var_35_string == var_549_int; // 0x7e6 Eq
	if(var_550_bool == 0) goto Label_2039; // 0x7e7 JumpB
	var_551_string = ""; // 0x7e8 PushV
	var_551_string = "Neutral"; // 0x7e9 MovS
	func_1302(var_36_bool, var_551_string); // 0x7ea Call
	var_552_int = 7993; // 0x7ec PushI
	SetMessage(var_552_int); // 0x7ed TObjFunc
	ClearReplies(); // 0x7ef TObjFunc
	var_553_int = 7994; // 0x7f1 PushI
	var_554_int = -1; // 0x7f2 PushI
	var_555_int = 8817; // 0x7f3 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x7f4 TObjFunc
	return 0; // 0x7f6 Return
	
Label_2039:
	var_556_int = 8810; // 0x7f7 PushI
	var_557_bool = var_35_string == var_556_int; // 0x7f8 Eq
	if(var_557_bool == 0) goto Label_2062; // 0x7f9 JumpB
	var_558_string = ""; // 0x7fa PushV
	var_558_string = "Neutral"; // 0x7fb MovS
	func_1302(var_36_bool, var_558_string); // 0x7fc Call
	var_559_int = 7987; // 0x7fe PushI
	SetMessage(var_559_int); // 0x7ff TObjFunc
	ClearReplies(); // 0x801 TObjFunc
	var_560_int = 7988; // 0x803 PushI
	var_561_int = -1; // 0x804 PushI
	var_562_int = 8811; // 0x805 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x806 TObjFunc
	var_563_int = 7989; // 0x808 PushI
	var_564_int = -1; // 0x809 PushI
	var_565_int = 8812; // 0x80a PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x80b TObjFunc
	return 0; // 0x80d Return
	
Label_2062:
	var_566_int = 8775; // 0x80e PushI
	var_567_bool = var_35_string == var_566_int; // 0x80f Eq
	if(var_567_bool == 0) goto Label_2080; // 0x810 JumpB
	var_568_string = ""; // 0x811 PushV
	var_568_string = "Neutral"; // 0x812 MovS
	func_1302(var_36_bool, var_568_string); // 0x813 Call
	var_569_int = 7955; // 0x815 PushI
	SetMessage(var_569_int); // 0x816 TObjFunc
	ClearReplies(); // 0x818 TObjFunc
	var_570_int = 7977; // 0x81a PushI
	var_571_int = 8800; // 0x81b PushI
	var_572_int = 8799; // 0x81c PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x81d TObjFunc
	return 0; // 0x81f Return
	
Label_2080:
	var_573_int = 8800; // 0x820 PushI
	var_574_bool = var_35_string == var_573_int; // 0x821 Eq
	if(var_574_bool == 0) goto Label_2098; // 0x822 JumpB
	var_575_string = ""; // 0x823 PushV
	var_575_string = "Neutral"; // 0x824 MovS
	func_1302(var_36_bool, var_575_string); // 0x825 Call
	var_576_int = 7978; // 0x827 PushI
	SetMessage(var_576_int); // 0x828 TObjFunc
	ClearReplies(); // 0x82a TObjFunc
	var_577_int = 7979; // 0x82c PushI
	var_578_int = 8802; // 0x82d PushI
	var_579_int = 8801; // 0x82e PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x82f TObjFunc
	return 0; // 0x831 Return
	
Label_2098:
	var_580_int = 8802; // 0x832 PushI
	var_581_bool = var_35_string == var_580_int; // 0x833 Eq
	if(var_581_bool == 0) goto Label_2121; // 0x834 JumpB
	var_582_string = ""; // 0x835 PushV
	var_582_string = "Neutral"; // 0x836 MovS
	func_1302(var_36_bool, var_582_string); // 0x837 Call
	var_583_int = 7980; // 0x839 PushI
	SetMessage(var_583_int); // 0x83a TObjFunc
	ClearReplies(); // 0x83c TObjFunc
	var_584_int = 7981; // 0x83e PushI
	var_585_int = -1; // 0x83f PushI
	var_586_int = 8803; // 0x840 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x841 TObjFunc
	var_587_int = 7982; // 0x843 PushI
	var_588_int = -1; // 0x844 PushI
	var_589_int = 8804; // 0x845 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x846 TObjFunc
	return 0; // 0x848 Return
	
Label_2121:
	var_590_int = 8784; // 0x849 PushI
	var_591_bool = var_35_string == var_590_int; // 0x84a Eq
	if(var_591_bool == 0) goto Label_2139; // 0x84b JumpB
	var_592_string = ""; // 0x84c PushV
	var_592_string = "Neutral"; // 0x84d MovS
	func_1302(var_36_bool, var_592_string); // 0x84e Call
	var_593_int = 7964; // 0x850 PushI
	SetMessage(var_593_int); // 0x851 TObjFunc
	ClearReplies(); // 0x853 TObjFunc
	var_594_int = 7965; // 0x855 PushI
	var_595_int = 8786; // 0x856 PushI
	var_596_int = 8785; // 0x857 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x858 TObjFunc
	return 0; // 0x85a Return
	
Label_2139:
	var_597_int = 8786; // 0x85b PushI
	var_598_bool = var_35_string == var_597_int; // 0x85c Eq
	if(var_598_bool == 0) goto Label_2162; // 0x85d JumpB
	var_599_string = ""; // 0x85e PushV
	var_599_string = "Neutral"; // 0x85f MovS
	func_1302(var_36_bool, var_599_string); // 0x860 Call
	var_600_int = 7966; // 0x862 PushI
	SetMessage(var_600_int); // 0x863 TObjFunc
	ClearReplies(); // 0x865 TObjFunc
	var_601_int = 7967; // 0x867 PushI
	var_602_int = 8774; // 0x868 PushI
	var_603_int = 8787; // 0x869 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x86a TObjFunc
	var_604_int = 7976; // 0x86c PushI
	var_605_int = 8774; // 0x86d PushI
	var_606_int = 8797; // 0x86e PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x86f TObjFunc
	return 0; // 0x871 Return
	
Label_2162:
	var_607_int = 8774; // 0x872 PushI
	var_608_bool = var_35_string == var_607_int; // 0x873 Eq
	if(var_608_bool == 0) goto Label_2185; // 0x874 JumpB
	var_609_string = ""; // 0x875 PushV
	var_609_string = "Neutral"; // 0x876 MovS
	func_1302(var_36_bool, var_609_string); // 0x877 Call
	var_610_int = 7954; // 0x879 PushI
	SetMessage(var_610_int); // 0x87a TObjFunc
	ClearReplies(); // 0x87c TObjFunc
	var_611_int = 7969; // 0x87e PushI
	var_612_int = 8790; // 0x87f PushI
	var_613_int = 8789; // 0x880 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x881 TObjFunc
	var_614_int = 7975; // 0x883 PushI
	var_615_int = 8790; // 0x884 PushI
	var_616_int = 8795; // 0x885 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x886 TObjFunc
	return 0; // 0x888 Return
	
Label_2185:
	var_617_int = 8790; // 0x889 PushI
	var_618_bool = var_35_string == var_617_int; // 0x88a Eq
	if(var_618_bool == 0) goto Label_2203; // 0x88b JumpB
	var_619_string = ""; // 0x88c PushV
	var_619_string = "Neutral"; // 0x88d MovS
	func_1302(var_36_bool, var_619_string); // 0x88e Call
	var_620_int = 7970; // 0x890 PushI
	SetMessage(var_620_int); // 0x891 TObjFunc
	ClearReplies(); // 0x893 TObjFunc
	var_621_int = 7971; // 0x895 PushI
	var_622_int = 8792; // 0x896 PushI
	var_623_int = 8791; // 0x897 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x898 TObjFunc
	return 0; // 0x89a Return
	
Label_2203:
	var_624_int = 8792; // 0x89b PushI
	var_625_bool = var_35_string == var_624_int; // 0x89c Eq
	if(var_625_bool == 0) goto Label_2221; // 0x89d JumpB
	var_626_string = ""; // 0x89e PushV
	var_626_string = "Neutral"; // 0x89f MovS
	func_1302(var_36_bool, var_626_string); // 0x8a0 Call
	var_627_int = 7972; // 0x8a2 PushI
	SetMessage(var_627_int); // 0x8a3 TObjFunc
	ClearReplies(); // 0x8a5 TObjFunc
	var_628_int = 7974; // 0x8a7 PushI
	var_629_int = -1; // 0x8a8 PushI
	var_630_int = 8794; // 0x8a9 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x8aa TObjFunc
	return 0; // 0x8ac Return
	
Label_2221:
	var_631_int = 8773; // 0x8ad PushI
	var_632_bool = var_35_string == var_631_int; // 0x8ae Eq
	if(var_632_bool == 0) goto Label_2239; // 0x8af JumpB
	var_633_string = ""; // 0x8b0 PushV
	var_633_string = "Neutral"; // 0x8b1 MovS
	func_1302(var_36_bool, var_633_string); // 0x8b2 Call
	var_634_int = 7953; // 0x8b4 PushI
	SetMessage(var_634_int); // 0x8b5 TObjFunc
	ClearReplies(); // 0x8b7 TObjFunc
	var_635_int = 7959; // 0x8b9 PushI
	var_636_int = 8780; // 0x8ba PushI
	var_637_int = 8779; // 0x8bb PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x8bc TObjFunc
	return 0; // 0x8be Return
	
Label_2239:
	var_638_int = 8780; // 0x8bf PushI
	var_639_bool = var_35_string == var_638_int; // 0x8c0 Eq
	if(var_639_bool == 0) goto Label_2257; // 0x8c1 JumpB
	var_640_string = ""; // 0x8c2 PushV
	var_640_string = "Neutral"; // 0x8c3 MovS
	func_1302(var_36_bool, var_640_string); // 0x8c4 Call
	var_641_int = 7960; // 0x8c6 PushI
	SetMessage(var_641_int); // 0x8c7 TObjFunc
	ClearReplies(); // 0x8c9 TObjFunc
	var_642_int = 7961; // 0x8cb PushI
	var_643_int = 8782; // 0x8cc PushI
	var_644_int = 8781; // 0x8cd PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x8ce TObjFunc
	return 0; // 0x8d0 Return
	
Label_2257:
	var_645_int = 8782; // 0x8d1 PushI
	var_646_bool = var_35_string == var_645_int; // 0x8d2 Eq
	if(var_646_bool == 0) goto Label_2275; // 0x8d3 JumpB
	var_647_string = ""; // 0x8d4 PushV
	var_647_string = "Neutral"; // 0x8d5 MovS
	func_1302(var_36_bool, var_647_string); // 0x8d6 Call
	var_648_int = 7962; // 0x8d8 PushI
	SetMessage(var_648_int); // 0x8d9 TObjFunc
	ClearReplies(); // 0x8db TObjFunc
	var_649_int = 7963; // 0x8dd PushI
	var_650_int = -1; // 0x8de PushI
	var_651_int = 8783; // 0x8df PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x8e0 TObjFunc
	return 0; // 0x8e2 Return
	
Label_2275:
	var_652_int = 6941; // 0x8e3 PushI
	var_653_bool = var_35_string == var_652_int; // 0x8e4 Eq
	if(var_653_bool == 0) goto Label_2298; // 0x8e5 JumpB
	var_654_string = ""; // 0x8e6 PushV
	var_654_string = "Neutral"; // 0x8e7 MovS
	func_1302(var_36_bool, var_654_string); // 0x8e8 Call
	var_655_int = 6289; // 0x8ea PushI
	SetMessage(var_655_int); // 0x8eb TObjFunc
	ClearReplies(); // 0x8ed TObjFunc
	var_656_int = 6290; // 0x8ef PushI
	var_657_int = -1; // 0x8f0 PushI
	var_658_int = 6942; // 0x8f1 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x8f2 TObjFunc
	var_659_int = 6291; // 0x8f4 PushI
	var_660_int = -1; // 0x8f5 PushI
	var_661_int = 6943; // 0x8f6 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x8f7 TObjFunc
	return 0; // 0x8f9 Return
	
Label_2298:
	var_662_int = 9563; // 0x8fa PushI
	var_663_bool = var_35_string == var_662_int; // 0x8fb Eq
	if(var_663_bool == 0) goto Label_2316; // 0x8fc JumpB
	var_664_string = ""; // 0x8fd PushV
	var_664_string = "Neutral"; // 0x8fe MovS
	func_1302(var_36_bool, var_664_string); // 0x8ff Call
	var_665_int = 8726; // 0x901 PushI
	SetMessage(var_665_int); // 0x902 TObjFunc
	ClearReplies(); // 0x904 TObjFunc
	var_666_int = 8727; // 0x906 PushI
	var_667_int = -1; // 0x907 PushI
	var_668_int = 9564; // 0x908 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x909 TObjFunc
	return 0; // 0x90b Return
	
Label_2316:
	var_669_int = 6666; // 0x90c PushI
	var_670_bool = var_35_string == var_669_int; // 0x90d Eq
	if(var_670_bool == 0) goto Label_2344; // 0x90e JumpB
	var_671_object = Obj(); var_672_object = Obj(); // 0x90f PushV
	var_671_object = var_1_object; // 0x910 MovT
	var_672_object = var_0_object; // 0x911 MovT
	func_5772(); // 0x912 Call
	var_673_string = ""; // 0x914 PushV
	var_673_string = "Neutral"; // 0x915 MovS
	func_1302(var_36_bool, var_673_string); // 0x916 Call
	var_674_int = 6043; // 0x918 PushI
	SetMessage(var_674_int); // 0x919 TObjFunc
	ClearReplies(); // 0x91b TObjFunc
	var_675_int = 6044; // 0x91d PushI
	var_676_int = 6670; // 0x91e PushI
	var_677_int = 6667; // 0x91f PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x920 TObjFunc
	var_678_int = 6045; // 0x922 PushI
	var_679_int = 6669; // 0x923 PushI
	var_680_int = 6668; // 0x924 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x925 TObjFunc
	return 0; // 0x927 Return
	
Label_2344:
	var_681_int = 6669; // 0x928 PushI
	var_682_bool = var_35_string == var_681_int; // 0x929 Eq
	if(var_682_bool == 0) goto Label_2367; // 0x92a JumpB
	var_683_string = ""; // 0x92b PushV
	var_683_string = "Neutral"; // 0x92c MovS
	func_1302(var_36_bool, var_683_string); // 0x92d Call
	var_684_int = 6046; // 0x92f PushI
	SetMessage(var_684_int); // 0x930 TObjFunc
	ClearReplies(); // 0x932 TObjFunc
	var_685_int = 6053; // 0x934 PushI
	var_686_int = 6679; // 0x935 PushI
	var_687_int = 6677; // 0x936 PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0x937 TObjFunc
	var_688_int = 6054; // 0x939 PushI
	var_689_int = 6681; // 0x93a PushI
	var_690_int = 6678; // 0x93b PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x93c TObjFunc
	return 0; // 0x93e Return
	
Label_2367:
	var_691_int = 6679; // 0x93f PushI
	var_692_bool = var_35_string == var_691_int; // 0x940 Eq
	if(var_692_bool == 0) goto Label_2396; // 0x941 JumpB
	var_693_string = ""; // 0x942 PushV
	var_693_string = "Neutral"; // 0x943 MovS
	func_1302(var_36_bool, var_693_string); // 0x944 Call
	var_694_int = 6055; // 0x946 PushI
	SetMessage(var_694_int); // 0x947 TObjFunc
	ClearReplies(); // 0x949 TObjFunc
	var_695_int = 6056; // 0x94b PushI
	var_696_int = 6681; // 0x94c PushI
	var_697_int = 6680; // 0x94d PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x94e TObjFunc
	var_698_bool = 0; var_699_object = Obj(); // 0x950 PushV
	var_699_object = var_1_object; // 0x951 MovT
	func_6711(var_699_object); // 0x952 Call
	var_704_bool = var_698_bool == 0; // 0x954 Not
	if(var_704_bool == 0) goto Label_2395; // 0x955 JumpB
	var_705_int = 6058; // 0x956 PushI
	var_706_int = 6702; // 0x957 PushI
	var_707_int = 6683; // 0x958 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x959 TObjFunc
	
Label_2395:
	return 0; // 0x95b Return
	
Label_2396:
	var_708_int = 6702; // 0x95c PushI
	var_709_bool = var_35_string == var_708_int; // 0x95d Eq
	if(var_709_bool == 0) goto Label_2419; // 0x95e JumpB
	var_710_object = Obj(); var_711_object = Obj(); // 0x95f PushV
	var_710_object = var_1_object; // 0x960 MovT
	var_711_object = var_0_object; // 0x961 MovT
	func_5748(); // 0x962 Call
	var_714_string = ""; // 0x964 PushV
	var_714_string = "Neutral"; // 0x965 MovS
	func_1302(var_36_bool, var_714_string); // 0x966 Call
	var_715_int = 6074; // 0x968 PushI
	SetMessage(var_715_int); // 0x969 TObjFunc
	ClearReplies(); // 0x96b TObjFunc
	var_716_int = 6075; // 0x96d PushI
	var_717_int = 6681; // 0x96e PushI
	var_718_int = 6703; // 0x96f PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x970 TObjFunc
	return 0; // 0x972 Return
	
Label_2419:
	var_719_int = 6681; // 0x973 PushI
	var_720_bool = var_35_string == var_719_int; // 0x974 Eq
	if(var_720_bool == 0) goto Label_2442; // 0x975 JumpB
	var_721_string = ""; // 0x976 PushV
	var_721_string = "Neutral"; // 0x977 MovS
	func_1302(var_36_bool, var_721_string); // 0x978 Call
	var_722_int = 6057; // 0x97a PushI
	SetMessage(var_722_int); // 0x97b TObjFunc
	ClearReplies(); // 0x97d TObjFunc
	var_723_int = 6059; // 0x97f PushI
	var_724_int = 6686; // 0x980 PushI
	var_725_int = 6684; // 0x981 PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0x982 TObjFunc
	var_726_int = 6060; // 0x984 PushI
	var_727_int = 6688; // 0x985 PushI
	var_728_int = 6685; // 0x986 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x987 TObjFunc
	return 0; // 0x989 Return
	
Label_2442:
	var_729_int = 6688; // 0x98a PushI
	var_730_bool = var_35_string == var_729_int; // 0x98b Eq
	if(var_730_bool == 0) goto Label_2460; // 0x98c JumpB
	var_731_string = ""; // 0x98d PushV
	var_731_string = "Neutral"; // 0x98e MovS
	func_1302(var_36_bool, var_731_string); // 0x98f Call
	var_732_int = 6063; // 0x991 PushI
	SetMessage(var_732_int); // 0x992 TObjFunc
	ClearReplies(); // 0x994 TObjFunc
	var_733_int = 6064; // 0x996 PushI
	var_734_int = 6686; // 0x997 PushI
	var_735_int = 6689; // 0x998 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0x999 TObjFunc
	return 0; // 0x99b Return
	
Label_2460:
	var_736_int = 6686; // 0x99c PushI
	var_737_bool = var_35_string == var_736_int; // 0x99d Eq
	if(var_737_bool == 0) goto Label_2478; // 0x99e JumpB
	var_738_string = ""; // 0x99f PushV
	var_738_string = "Neutral"; // 0x9a0 MovS
	func_1302(var_36_bool, var_738_string); // 0x9a1 Call
	var_739_int = 6061; // 0x9a3 PushI
	SetMessage(var_739_int); // 0x9a4 TObjFunc
	ClearReplies(); // 0x9a6 TObjFunc
	var_740_int = 6062; // 0x9a8 PushI
	var_741_int = 6691; // 0x9a9 PushI
	var_742_int = 6687; // 0x9aa PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x9ab TObjFunc
	return 0; // 0x9ad Return
	
Label_2478:
	var_743_int = 6691; // 0x9ae PushI
	var_744_bool = var_35_string == var_743_int; // 0x9af Eq
	if(var_744_bool == 0) goto Label_2501; // 0x9b0 JumpB
	var_745_string = ""; // 0x9b1 PushV
	var_745_string = "Neutral"; // 0x9b2 MovS
	func_1302(var_36_bool, var_745_string); // 0x9b3 Call
	var_746_int = 6065; // 0x9b5 PushI
	SetMessage(var_746_int); // 0x9b6 TObjFunc
	ClearReplies(); // 0x9b8 TObjFunc
	var_747_int = 6066; // 0x9ba PushI
	var_748_int = 6696; // 0x9bb PushI
	var_749_int = 6692; // 0x9bc PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0x9bd TObjFunc
	var_750_int = 6067; // 0x9bf PushI
	var_751_int = 6694; // 0x9c0 PushI
	var_752_int = 6693; // 0x9c1 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x9c2 TObjFunc
	return 0; // 0x9c4 Return
	
Label_2501:
	var_753_int = 6694; // 0x9c5 PushI
	var_754_bool = var_35_string == var_753_int; // 0x9c6 Eq
	if(var_754_bool == 0) goto Label_2524; // 0x9c7 JumpB
	var_755_string = ""; // 0x9c8 PushV
	var_755_string = "Neutral"; // 0x9c9 MovS
	func_1302(var_36_bool, var_755_string); // 0x9ca Call
	var_756_int = 6068; // 0x9cc PushI
	SetMessage(var_756_int); // 0x9cd TObjFunc
	ClearReplies(); // 0x9cf TObjFunc
	var_757_int = 6069; // 0x9d1 PushI
	var_758_int = 6696; // 0x9d2 PushI
	var_759_int = 6695; // 0x9d3 PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0x9d4 TObjFunc
	var_760_int = 6071; // 0x9d6 PushI
	var_761_int = 6696; // 0x9d7 PushI
	var_762_int = 6698; // 0x9d8 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x9d9 TObjFunc
	return 0; // 0x9db Return
	
Label_2524:
	var_763_int = 6696; // 0x9dc PushI
	var_764_bool = var_35_string == var_763_int; // 0x9dd Eq
	if(var_764_bool == 0) goto Label_2557; // 0x9de JumpB
	var_765_object = Obj(); var_766_object = Obj(); // 0x9df PushV
	var_765_object = var_1_object; // 0x9e0 MovT
	var_766_object = var_0_object; // 0x9e1 MovT
	func_5823(var_766_object); // 0x9e2 Call
	var_784_object = Obj(); var_785_object = Obj(); // 0x9e4 PushV
	var_784_object = var_1_object; // 0x9e5 MovT
	var_785_object = var_0_object; // 0x9e6 MovT
	func_5834(); // 0x9e7 Call
	var_788_string = ""; // 0x9e9 PushV
	var_788_string = "Neutral"; // 0x9ea MovS
	func_1302(var_36_bool, var_788_string); // 0x9eb Call
	var_789_int = 6070; // 0x9ed PushI
	SetMessage(var_789_int); // 0x9ee TObjFunc
	ClearReplies(); // 0x9f0 TObjFunc
	var_790_int = 6072; // 0x9f2 PushI
	var_791_int = -1; // 0x9f3 PushI
	var_792_int = 6700; // 0x9f4 PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x9f5 TObjFunc
	var_793_int = 6073; // 0x9f7 PushI
	var_794_int = -1; // 0x9f8 PushI
	var_795_int = 6701; // 0x9f9 PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x9fa TObjFunc
	return 0; // 0x9fc Return
	
Label_2557:
	var_796_int = 6670; // 0x9fd PushI
	var_797_bool = var_35_string == var_796_int; // 0x9fe Eq
	if(var_797_bool == 0) goto Label_2580; // 0x9ff JumpB
	var_798_string = ""; // 0xa00 PushV
	var_798_string = "Neutral"; // 0xa01 MovS
	func_1302(var_36_bool, var_798_string); // 0xa02 Call
	var_799_int = 6047; // 0xa04 PushI
	SetMessage(var_799_int); // 0xa05 TObjFunc
	ClearReplies(); // 0xa07 TObjFunc
	var_800_int = 6048; // 0xa09 PushI
	var_801_int = 6673; // 0xa0a PushI
	var_802_int = 6671; // 0xa0b PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0xa0c TObjFunc
	var_803_int = 6049; // 0xa0e PushI
	var_804_int = 6673; // 0xa0f PushI
	var_805_int = 6672; // 0xa10 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0xa11 TObjFunc
	return 0; // 0xa13 Return
	
Label_2580:
	var_806_int = 6673; // 0xa14 PushI
	var_807_bool = var_35_string == var_806_int; // 0xa15 Eq
	if(var_807_bool == 0) goto Label_2598; // 0xa16 JumpB
	var_808_string = ""; // 0xa17 PushV
	var_808_string = "Neutral"; // 0xa18 MovS
	func_1302(var_36_bool, var_808_string); // 0xa19 Call
	var_809_int = 6050; // 0xa1b PushI
	SetMessage(var_809_int); // 0xa1c TObjFunc
	ClearReplies(); // 0xa1e TObjFunc
	var_810_int = 6051; // 0xa20 PushI
	var_811_int = -1; // 0xa21 PushI
	var_812_int = 6675; // 0xa22 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0xa23 TObjFunc
	return 0; // 0xa25 Return
	
Label_2598:
	var_813_int = 6008; // 0xa26 PushI
	var_814_bool = var_35_string == var_813_int; // 0xa27 Eq
	if(var_814_bool == 0) goto Label_2621; // 0xa28 JumpB
	var_815_string = ""; // 0xa29 PushV
	var_815_string = "Neutral"; // 0xa2a MovS
	func_1302(var_36_bool, var_815_string); // 0xa2b Call
	var_816_int = 5454; // 0xa2d PushI
	SetMessage(var_816_int); // 0xa2e TObjFunc
	ClearReplies(); // 0xa30 TObjFunc
	var_817_int = 5455; // 0xa32 PushI
	var_818_int = 6010; // 0xa33 PushI
	var_819_int = 6009; // 0xa34 PushI
	AddReply(var_817_int, var_818_int, var_819_int); // 0xa35 TObjFunc
	var_820_int = 5467; // 0xa37 PushI
	var_821_int = 6010; // 0xa38 PushI
	var_822_int = 6024; // 0xa39 PushI
	AddReply(var_820_int, var_821_int, var_822_int); // 0xa3a TObjFunc
	return 0; // 0xa3c Return
	
Label_2621:
	var_823_int = 6010; // 0xa3d PushI
	var_824_bool = var_35_string == var_823_int; // 0xa3e Eq
	if(var_824_bool == 0) goto Label_2644; // 0xa3f JumpB
	var_825_string = ""; // 0xa40 PushV
	var_825_string = "Neutral"; // 0xa41 MovS
	func_1302(var_36_bool, var_825_string); // 0xa42 Call
	var_826_int = 5456; // 0xa44 PushI
	SetMessage(var_826_int); // 0xa45 TObjFunc
	ClearReplies(); // 0xa47 TObjFunc
	var_827_int = 5457; // 0xa49 PushI
	var_828_int = 6012; // 0xa4a PushI
	var_829_int = 6011; // 0xa4b PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0xa4c TObjFunc
	var_830_int = 5466; // 0xa4e PushI
	var_831_int = 6012; // 0xa4f PushI
	var_832_int = 6022; // 0xa50 PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0xa51 TObjFunc
	return 0; // 0xa53 Return
	
Label_2644:
	var_833_int = 6012; // 0xa54 PushI
	var_834_bool = var_35_string == var_833_int; // 0xa55 Eq
	if(var_834_bool == 0) goto Label_2672; // 0xa56 JumpB
	var_835_string = ""; // 0xa57 PushV
	var_835_string = "Neutral"; // 0xa58 MovS
	func_1302(var_36_bool, var_835_string); // 0xa59 Call
	var_836_int = 5458; // 0xa5b PushI
	SetMessage(var_836_int); // 0xa5c TObjFunc
	ClearReplies(); // 0xa5e TObjFunc
	var_837_int = 5459; // 0xa60 PushI
	var_838_int = 6014; // 0xa61 PushI
	var_839_int = 6013; // 0xa62 PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0xa63 TObjFunc
	var_840_int = 5465; // 0xa65 PushI
	var_841_int = 6014; // 0xa66 PushI
	var_842_int = 6020; // 0xa67 PushI
	AddReply(var_840_int, var_841_int, var_842_int); // 0xa68 TObjFunc
	var_843_int = 5464; // 0xa6a PushI
	var_844_int = 6014; // 0xa6b PushI
	var_845_int = 6018; // 0xa6c PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0xa6d TObjFunc
	return 0; // 0xa6f Return
	
Label_2672:
	var_846_int = 6014; // 0xa70 PushI
	var_847_bool = var_35_string == var_846_int; // 0xa71 Eq
	if(var_847_bool == 0) goto Label_2700; // 0xa72 JumpB
	var_848_string = ""; // 0xa73 PushV
	var_848_string = "Neutral"; // 0xa74 MovS
	func_1302(var_36_bool, var_848_string); // 0xa75 Call
	var_849_int = 5460; // 0xa77 PushI
	SetMessage(var_849_int); // 0xa78 TObjFunc
	ClearReplies(); // 0xa7a TObjFunc
	var_850_int = 5461; // 0xa7c PushI
	var_851_int = -1; // 0xa7d PushI
	var_852_int = 6015; // 0xa7e PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0xa7f TObjFunc
	var_853_int = 5462; // 0xa81 PushI
	var_854_int = -1; // 0xa82 PushI
	var_855_int = 6016; // 0xa83 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0xa84 TObjFunc
	var_856_int = 5463; // 0xa86 PushI
	var_857_int = -1; // 0xa87 PushI
	var_858_int = 6017; // 0xa88 PushI
	AddReply(var_856_int, var_857_int, var_858_int); // 0xa89 TObjFunc
	return 0; // 0xa8b Return
	
Label_2700:
	var_859_int = 6028; // 0xa8c PushI
	var_860_bool = var_35_string == var_859_int; // 0xa8d Eq
	if(var_860_bool == 0) goto Label_2723; // 0xa8e JumpB
	var_861_string = ""; // 0xa8f PushV
	var_861_string = "Neutral"; // 0xa90 MovS
	func_1302(var_36_bool, var_861_string); // 0xa91 Call
	var_862_int = 5469; // 0xa93 PushI
	SetMessage(var_862_int); // 0xa94 TObjFunc
	ClearReplies(); // 0xa96 TObjFunc
	var_863_int = 5470; // 0xa98 PushI
	var_864_int = 6030; // 0xa99 PushI
	var_865_int = 6029; // 0xa9a PushI
	AddReply(var_863_int, var_864_int, var_865_int); // 0xa9b TObjFunc
	var_866_int = 5480; // 0xa9d PushI
	var_867_int = 6040; // 0xa9e PushI
	var_868_int = 6039; // 0xa9f PushI
	AddReply(var_866_int, var_867_int, var_868_int); // 0xaa0 TObjFunc
	return 0; // 0xaa2 Return
	
Label_2723:
	var_869_int = 6040; // 0xaa3 PushI
	var_870_bool = var_35_string == var_869_int; // 0xaa4 Eq
	if(var_870_bool == 0) goto Label_2746; // 0xaa5 JumpB
	var_871_string = ""; // 0xaa6 PushV
	var_871_string = "Neutral"; // 0xaa7 MovS
	func_1302(var_36_bool, var_871_string); // 0xaa8 Call
	var_872_int = 5481; // 0xaaa PushI
	SetMessage(var_872_int); // 0xaab TObjFunc
	ClearReplies(); // 0xaad TObjFunc
	var_873_int = 5482; // 0xaaf PushI
	var_874_int = -1; // 0xab0 PushI
	var_875_int = 6041; // 0xab1 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0xab2 TObjFunc
	var_876_int = 5483; // 0xab4 PushI
	var_877_int = -1; // 0xab5 PushI
	var_878_int = 6042; // 0xab6 PushI
	AddReply(var_876_int, var_877_int, var_878_int); // 0xab7 TObjFunc
	return 0; // 0xab9 Return
	
Label_2746:
	var_879_int = 6030; // 0xaba PushI
	var_880_bool = var_35_string == var_879_int; // 0xabb Eq
	if(var_880_bool == 0) goto Label_2769; // 0xabc JumpB
	var_881_string = ""; // 0xabd PushV
	var_881_string = "Neutral"; // 0xabe MovS
	func_1302(var_36_bool, var_881_string); // 0xabf Call
	var_882_int = 5471; // 0xac1 PushI
	SetMessage(var_882_int); // 0xac2 TObjFunc
	ClearReplies(); // 0xac4 TObjFunc
	var_883_int = 5472; // 0xac6 PushI
	var_884_int = 6032; // 0xac7 PushI
	var_885_int = 6031; // 0xac8 PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0xac9 TObjFunc
	var_886_int = 5479; // 0xacb PushI
	var_887_int = -1; // 0xacc PushI
	var_888_int = 6038; // 0xacd PushI
	AddReply(var_886_int, var_887_int, var_888_int); // 0xace TObjFunc
	return 0; // 0xad0 Return
	
Label_2769:
	var_889_int = 6032; // 0xad1 PushI
	var_890_bool = var_35_string == var_889_int; // 0xad2 Eq
	if(var_890_bool == 0) goto Label_2792; // 0xad3 JumpB
	var_891_string = ""; // 0xad4 PushV
	var_891_string = "Neutral"; // 0xad5 MovS
	func_1302(var_36_bool, var_891_string); // 0xad6 Call
	var_892_int = 5473; // 0xad8 PushI
	SetMessage(var_892_int); // 0xad9 TObjFunc
	ClearReplies(); // 0xadb TObjFunc
	var_893_int = 5474; // 0xadd PushI
	var_894_int = 6034; // 0xade PushI
	var_895_int = 6033; // 0xadf PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0xae0 TObjFunc
	var_896_int = 5478; // 0xae2 PushI
	var_897_int = -1; // 0xae3 PushI
	var_898_int = 6037; // 0xae4 PushI
	AddReply(var_896_int, var_897_int, var_898_int); // 0xae5 TObjFunc
	return 0; // 0xae7 Return
	
Label_2792:
	var_899_int = 6034; // 0xae8 PushI
	var_900_bool = var_35_string == var_899_int; // 0xae9 Eq
	if(var_900_bool == 0) goto Label_2815; // 0xaea JumpB
	var_901_string = ""; // 0xaeb PushV
	var_901_string = "Neutral"; // 0xaec MovS
	func_1302(var_36_bool, var_901_string); // 0xaed Call
	var_902_int = 5475; // 0xaef PushI
	SetMessage(var_902_int); // 0xaf0 TObjFunc
	ClearReplies(); // 0xaf2 TObjFunc
	var_903_int = 5476; // 0xaf4 PushI
	var_904_int = -1; // 0xaf5 PushI
	var_905_int = 6035; // 0xaf6 PushI
	AddReply(var_903_int, var_904_int, var_905_int); // 0xaf7 TObjFunc
	var_906_int = 5477; // 0xaf9 PushI
	var_907_int = -1; // 0xafa PushI
	var_908_int = 6036; // 0xafb PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0xafc TObjFunc
	return 0; // 0xafe Return
	
Label_2815:
	var_909_int = 6575; // 0xaff PushI
	var_910_bool = var_35_string == var_909_int; // 0xb00 Eq
	if(var_910_bool == 0) goto Label_2838; // 0xb01 JumpB
	var_911_string = ""; // 0xb02 PushV
	var_911_string = "Neutral"; // 0xb03 MovS
	func_1302(var_36_bool, var_911_string); // 0xb04 Call
	var_912_int = 5970; // 0xb06 PushI
	SetMessage(var_912_int); // 0xb07 TObjFunc
	ClearReplies(); // 0xb09 TObjFunc
	var_913_int = 5971; // 0xb0b PushI
	var_914_int = 6580; // 0xb0c PushI
	var_915_int = 6576; // 0xb0d PushI
	AddReply(var_913_int, var_914_int, var_915_int); // 0xb0e TObjFunc
	var_916_int = 5973; // 0xb10 PushI
	var_917_int = 6580; // 0xb11 PushI
	var_918_int = 6578; // 0xb12 PushI
	AddReply(var_916_int, var_917_int, var_918_int); // 0xb13 TObjFunc
	return 0; // 0xb15 Return
	
Label_2838:
	var_919_int = 6580; // 0xb16 PushI
	var_920_bool = var_35_string == var_919_int; // 0xb17 Eq
	if(var_920_bool == 0) goto Label_2861; // 0xb18 JumpB
	var_921_string = ""; // 0xb19 PushV
	var_921_string = "Neutral"; // 0xb1a MovS
	func_1302(var_36_bool, var_921_string); // 0xb1b Call
	var_922_int = 5975; // 0xb1d PushI
	SetMessage(var_922_int); // 0xb1e TObjFunc
	ClearReplies(); // 0xb20 TObjFunc
	var_923_int = 5976; // 0xb22 PushI
	var_924_int = 6588; // 0xb23 PushI
	var_925_int = 6583; // 0xb24 PushI
	AddReply(var_923_int, var_924_int, var_925_int); // 0xb25 TObjFunc
	var_926_int = 5977; // 0xb27 PushI
	var_927_int = 6585; // 0xb28 PushI
	var_928_int = 6584; // 0xb29 PushI
	AddReply(var_926_int, var_927_int, var_928_int); // 0xb2a TObjFunc
	return 0; // 0xb2c Return
	
Label_2861:
	var_929_int = 6585; // 0xb2d PushI
	var_930_bool = var_35_string == var_929_int; // 0xb2e Eq
	if(var_930_bool == 0) goto Label_2884; // 0xb2f JumpB
	var_931_string = ""; // 0xb30 PushV
	var_931_string = "Neutral"; // 0xb31 MovS
	func_1302(var_36_bool, var_931_string); // 0xb32 Call
	var_932_int = 5978; // 0xb34 PushI
	SetMessage(var_932_int); // 0xb35 TObjFunc
	ClearReplies(); // 0xb37 TObjFunc
	var_933_int = 5979; // 0xb39 PushI
	var_934_int = -1; // 0xb3a PushI
	var_935_int = 6586; // 0xb3b PushI
	AddReply(var_933_int, var_934_int, var_935_int); // 0xb3c TObjFunc
	var_936_int = 5980; // 0xb3e PushI
	var_937_int = -1; // 0xb3f PushI
	var_938_int = 6587; // 0xb40 PushI
	AddReply(var_936_int, var_937_int, var_938_int); // 0xb41 TObjFunc
	return 0; // 0xb43 Return
	
Label_2884:
	var_939_int = 6588; // 0xb44 PushI
	var_940_bool = var_35_string == var_939_int; // 0xb45 Eq
	if(var_940_bool == 0) goto Label_2907; // 0xb46 JumpB
	var_941_string = ""; // 0xb47 PushV
	var_941_string = "Neutral"; // 0xb48 MovS
	func_1302(var_36_bool, var_941_string); // 0xb49 Call
	var_942_int = 5981; // 0xb4b PushI
	SetMessage(var_942_int); // 0xb4c TObjFunc
	ClearReplies(); // 0xb4e TObjFunc
	var_943_int = 5982; // 0xb50 PushI
	var_944_int = 6593; // 0xb51 PushI
	var_945_int = 6589; // 0xb52 PushI
	AddReply(var_943_int, var_944_int, var_945_int); // 0xb53 TObjFunc
	var_946_int = 5983; // 0xb55 PushI
	var_947_int = 6591; // 0xb56 PushI
	var_948_int = 6590; // 0xb57 PushI
	AddReply(var_946_int, var_947_int, var_948_int); // 0xb58 TObjFunc
	return 0; // 0xb5a Return
	
Label_2907:
	var_949_int = 6591; // 0xb5b PushI
	var_950_bool = var_35_string == var_949_int; // 0xb5c Eq
	if(var_950_bool == 0) goto Label_2925; // 0xb5d JumpB
	var_951_string = ""; // 0xb5e PushV
	var_951_string = "Neutral"; // 0xb5f MovS
	func_1302(var_36_bool, var_951_string); // 0xb60 Call
	var_952_int = 5984; // 0xb62 PushI
	SetMessage(var_952_int); // 0xb63 TObjFunc
	ClearReplies(); // 0xb65 TObjFunc
	var_953_int = 5985; // 0xb67 PushI
	var_954_int = 6593; // 0xb68 PushI
	var_955_int = 6592; // 0xb69 PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0xb6a TObjFunc
	return 0; // 0xb6c Return
	
Label_2925:
	var_956_int = 6593; // 0xb6d PushI
	var_957_bool = var_35_string == var_956_int; // 0xb6e Eq
	if(var_957_bool == 0) goto Label_2948; // 0xb6f JumpB
	var_958_string = ""; // 0xb70 PushV
	var_958_string = "Neutral"; // 0xb71 MovS
	func_1302(var_36_bool, var_958_string); // 0xb72 Call
	var_959_int = 5986; // 0xb74 PushI
	SetMessage(var_959_int); // 0xb75 TObjFunc
	ClearReplies(); // 0xb77 TObjFunc
	var_960_int = 5987; // 0xb79 PushI
	var_961_int = 6595; // 0xb7a PushI
	var_962_int = 6594; // 0xb7b PushI
	AddReply(var_960_int, var_961_int, var_962_int); // 0xb7c TObjFunc
	var_963_int = 5993; // 0xb7e PushI
	var_964_int = 6599; // 0xb7f PushI
	var_965_int = 6601; // 0xb80 PushI
	AddReply(var_963_int, var_964_int, var_965_int); // 0xb81 TObjFunc
	return 0; // 0xb83 Return
	
Label_2948:
	var_966_int = 6595; // 0xb84 PushI
	var_967_bool = var_35_string == var_966_int; // 0xb85 Eq
	if(var_967_bool == 0) goto Label_2971; // 0xb86 JumpB
	var_968_string = ""; // 0xb87 PushV
	var_968_string = "Neutral"; // 0xb88 MovS
	func_1302(var_36_bool, var_968_string); // 0xb89 Call
	var_969_int = 5988; // 0xb8b PushI
	SetMessage(var_969_int); // 0xb8c TObjFunc
	ClearReplies(); // 0xb8e TObjFunc
	var_970_int = 5989; // 0xb90 PushI
	var_971_int = 6597; // 0xb91 PushI
	var_972_int = 6596; // 0xb92 PushI
	AddReply(var_970_int, var_971_int, var_972_int); // 0xb93 TObjFunc
	var_973_int = 5994; // 0xb95 PushI
	var_974_int = 6597; // 0xb96 PushI
	var_975_int = 6603; // 0xb97 PushI
	AddReply(var_973_int, var_974_int, var_975_int); // 0xb98 TObjFunc
	return 0; // 0xb9a Return
	
Label_2971:
	var_976_int = 6597; // 0xb9b PushI
	var_977_bool = var_35_string == var_976_int; // 0xb9c Eq
	if(var_977_bool == 0) goto Label_2989; // 0xb9d JumpB
	var_978_string = ""; // 0xb9e PushV
	var_978_string = "Neutral"; // 0xb9f MovS
	func_1302(var_36_bool, var_978_string); // 0xba0 Call
	var_979_int = 5990; // 0xba2 PushI
	SetMessage(var_979_int); // 0xba3 TObjFunc
	ClearReplies(); // 0xba5 TObjFunc
	var_980_int = 5991; // 0xba7 PushI
	var_981_int = 6599; // 0xba8 PushI
	var_982_int = 6598; // 0xba9 PushI
	AddReply(var_980_int, var_981_int, var_982_int); // 0xbaa TObjFunc
	return 0; // 0xbac Return
	
Label_2989:
	var_983_int = 6599; // 0xbad PushI
	var_984_bool = var_35_string == var_983_int; // 0xbae Eq
	if(var_984_bool == 0) goto Label_3012; // 0xbaf JumpB
	var_985_string = ""; // 0xbb0 PushV
	var_985_string = "Neutral"; // 0xbb1 MovS
	func_1302(var_36_bool, var_985_string); // 0xbb2 Call
	var_986_int = 5992; // 0xbb4 PushI
	SetMessage(var_986_int); // 0xbb5 TObjFunc
	ClearReplies(); // 0xbb7 TObjFunc
	var_987_int = 5995; // 0xbb9 PushI
	var_988_int = 6609; // 0xbba PushI
	var_989_int = 6605; // 0xbbb PushI
	AddReply(var_987_int, var_988_int, var_989_int); // 0xbbc TObjFunc
	var_990_int = 5997; // 0xbbe PushI
	var_991_int = 6608; // 0xbbf PushI
	var_992_int = 6607; // 0xbc0 PushI
	AddReply(var_990_int, var_991_int, var_992_int); // 0xbc1 TObjFunc
	return 0; // 0xbc3 Return
	
Label_3012:
	var_993_int = 6608; // 0xbc4 PushI
	var_994_bool = var_35_string == var_993_int; // 0xbc5 Eq
	if(var_994_bool == 0) goto Label_3035; // 0xbc6 JumpB
	var_995_string = ""; // 0xbc7 PushV
	var_995_string = "Neutral"; // 0xbc8 MovS
	func_1302(var_36_bool, var_995_string); // 0xbc9 Call
	var_996_int = 5998; // 0xbcb PushI
	SetMessage(var_996_int); // 0xbcc TObjFunc
	ClearReplies(); // 0xbce TObjFunc
	var_997_int = 6001; // 0xbd0 PushI
	var_998_int = -1; // 0xbd1 PushI
	var_999_int = 6611; // 0xbd2 PushI
	AddReply(var_997_int, var_998_int, var_999_int); // 0xbd3 TObjFunc
	var_1000_int = 6002; // 0xbd5 PushI
	var_1001_int = -1; // 0xbd6 PushI
	var_1002_int = 6612; // 0xbd7 PushI
	AddReply(var_1000_int, var_1001_int, var_1002_int); // 0xbd8 TObjFunc
	return 0; // 0xbda Return
	
Label_3035:
	var_1003_int = 6609; // 0xbdb PushI
	var_1004_bool = var_35_string == var_1003_int; // 0xbdc Eq
	if(var_1004_bool == 0) goto Label_3058; // 0xbdd JumpB
	var_1005_string = ""; // 0xbde PushV
	var_1005_string = "Neutral"; // 0xbdf MovS
	func_1302(var_36_bool, var_1005_string); // 0xbe0 Call
	var_1006_int = 5999; // 0xbe2 PushI
	SetMessage(var_1006_int); // 0xbe3 TObjFunc
	ClearReplies(); // 0xbe5 TObjFunc
	var_1007_int = 6000; // 0xbe7 PushI
	var_1008_int = -1; // 0xbe8 PushI
	var_1009_int = 6610; // 0xbe9 PushI
	AddReply(var_1007_int, var_1008_int, var_1009_int); // 0xbea TObjFunc
	var_1010_int = 5996; // 0xbec PushI
	var_1011_int = -1; // 0xbed PushI
	var_1012_int = 6606; // 0xbee PushI
	AddReply(var_1010_int, var_1011_int, var_1012_int); // 0xbef TObjFunc
	return 0; // 0xbf1 Return
	
Label_3058:
	var_3_string = 1; // 0xbf2 TMovB
	var_1013_bool = 0; // 0xbf3 PushV
	func_5746(var_1013_bool); // 0xbf4 Call
	if(var_1013_bool == 0) goto Label_3066; // 0xbf6 JumpB
	lshStopAnimation(); // 0xbf7 Func
	goto Label_3068; // 0xbf9 Jump
	
Label_3068:
	return 0; // 0xbfc Return
	
Label_3066:
	StopAnimation(); // 0xbfa Func
	
Label_3070:
	return 0; // 0xbfe Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xcba PushI
	if(var_37_int == 0) goto Label_3632; // 0xcbb JumpB
	func_5642(); // 0xcbd Call
	var_39_int = 7322; // 0xcbf PushI
	var_40_bool = var_36_bool == var_39_int; // 0xcc0 Eq
	if(var_40_bool == 0) goto Label_3281; // 0xcc1 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xcc2 PushV
	var_41_object = var_1_object; // 0xcc3 MovT
	var_42_object = var_0_object; // 0xcc4 MovT
	func_5840(); // 0xcc5 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0xcc7 PushV
	var_45_object = var_1_object; // 0xcc8 MovT
	var_46_object = var_0_object; // 0xcc9 MovT
	func_5852(); // 0xcca Call
	var_90_object = Obj(); var_91_object = Obj(); // 0xccc PushV
	var_90_object = var_1_object; // 0xccd MovT
	var_91_object = var_0_object; // 0xcce MovT
	func_5891(); // 0xccf Call
	
Label_3281:
	var_116_int = 8137; // 0xcd1 PushI
	var_117_bool = var_36_bool == var_116_int; // 0xcd2 Eq
	if(var_117_bool == 0) goto Label_3299; // 0xcd3 JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0xcd4 PushV
	var_118_object = var_1_object; // 0xcd5 MovT
	var_119_object = var_0_object; // 0xcd6 MovT
	func_5840(); // 0xcd7 Call
	var_120_object = Obj(); var_121_object = Obj(); // 0xcd9 PushV
	var_120_object = var_1_object; // 0xcda MovT
	var_121_object = var_0_object; // 0xcdb MovT
	func_5852(); // 0xcdc Call
	var_122_object = Obj(); var_123_object = Obj(); // 0xcde PushV
	var_122_object = var_1_object; // 0xcdf MovT
	var_123_object = var_0_object; // 0xce0 MovT
	func_5891(); // 0xce1 Call
	
Label_3299:
	var_124_int = 7317; // 0xce3 PushI
	var_125_bool = var_36_bool == var_124_int; // 0xce4 Eq
	if(var_125_bool == 0) goto Label_3307; // 0xce5 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0xce6 PushV
	var_126_object = var_1_object; // 0xce7 MovT
	var_127_object = var_0_object; // 0xce8 MovT
	func_5846(); // 0xce9 Call
	
Label_3307:
	var_130_int = 7313; // 0xceb PushI
	var_131_bool = var_36_bool == var_130_int; // 0xcec Eq
	if(var_131_bool == 0) goto Label_3315; // 0xced JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0xcee PushV
	var_132_object = var_1_object; // 0xcef MovT
	var_133_object = var_0_object; // 0xcf0 MovT
	func_5846(); // 0xcf1 Call
	
Label_3315:
	var_134_int = 7320; // 0xcf3 PushI
	var_135_bool = var_35_string == var_134_int; // 0xcf4 Eq
	if(var_135_bool == 0) goto Label_3387; // 0xcf5 JumpB
	var_136_string = ""; // 0xcf6 PushV
	var_136_string = "Neutral"; // 0xcf7 MovS
	func_3241(var_36_bool, var_136_string); // 0xcf8 Call
	var_151_int = 6647; // 0xcfa PushI
	SetMessage(var_151_int); // 0xcfb TObjFunc
	ClearReplies(); // 0xcfd TObjFunc
	var_152_bool = 0; // 0xcff PushV
	var_152_bool = 0; // 0xd00 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0xd01 PushV
	var_154_object = var_1_object; // 0xd02 MovT
	func_6264(var_154_object); // 0xd03 Call
	if(var_153_bool == 0) goto Label_3340; // 0xd05 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0xd06 PushV
	var_162_object = var_1_object; // 0xd07 MovT
	func_6288(var_162_object); // 0xd08 Call
	if(var_161_bool == 0) goto Label_3340; // 0xd0a JumpB
	var_152_bool = 1; // 0xd0b MovB
	
Label_3340:
	if(var_152_bool == 0) goto Label_3346; // 0xd0c JumpB
	var_167_int = 7373; // 0xd0d PushI
	var_168_int = 8135; // 0xd0e PushI
	var_169_int = 8134; // 0xd0f PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xd10 TObjFunc
	
Label_3346:
	var_170_bool = 0; var_171_object = Obj(); // 0xd12 PushV
	var_171_object = var_1_object; // 0xd13 MovT
	func_6276(var_171_object); // 0xd14 Call
	if(var_170_bool == 0) goto Label_3356; // 0xd16 JumpB
	var_176_int = 6640; // 0xd17 PushI
	var_177_int = 7312; // 0xd18 PushI
	var_178_int = 7311; // 0xd19 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xd1a TObjFunc
	
Label_3356:
	var_179_int = 7533; // 0xd1c PushI
	var_180_int = -1; // 0xd1d PushI
	var_181_int = 8315; // 0xd1e PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xd1f TObjFunc
	return 0; // 0xd21 Return
	
Label_3387:
	var_182_int = 10375; // 0xd3b PushI
	var_183_bool = var_35_string == var_182_int; // 0xd3c Eq
	if(var_183_bool == 0) goto Label_3410; // 0xd3d JumpB
	var_184_string = ""; // 0xd3e PushV
	var_184_string = "Neutral"; // 0xd3f MovS
	func_3241(var_36_bool, var_184_string); // 0xd40 Call
	var_185_int = 9440; // 0xd42 PushI
	SetMessage(var_185_int); // 0xd43 TObjFunc
	ClearReplies(); // 0xd45 TObjFunc
	var_186_int = 9441; // 0xd47 PushI
	var_187_int = 10377; // 0xd48 PushI
	var_188_int = 10376; // 0xd49 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xd4a TObjFunc
	var_189_int = 9448; // 0xd4c PushI
	var_190_int = 10377; // 0xd4d PushI
	var_191_int = 10383; // 0xd4e PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xd4f TObjFunc
	return 0; // 0xd51 Return
	
Label_3410:
	var_192_int = 10377; // 0xd52 PushI
	var_193_bool = var_35_string == var_192_int; // 0xd53 Eq
	if(var_193_bool == 0) goto Label_3433; // 0xd54 JumpB
	var_194_string = ""; // 0xd55 PushV
	var_194_string = "Neutral"; // 0xd56 MovS
	func_3241(var_36_bool, var_194_string); // 0xd57 Call
	var_195_int = 9442; // 0xd59 PushI
	SetMessage(var_195_int); // 0xd5a TObjFunc
	ClearReplies(); // 0xd5c TObjFunc
	var_196_int = 9443; // 0xd5e PushI
	var_197_int = 10379; // 0xd5f PushI
	var_198_int = 10378; // 0xd60 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xd61 TObjFunc
	var_199_int = 9447; // 0xd63 PushI
	var_200_int = -1; // 0xd64 PushI
	var_201_int = 10382; // 0xd65 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xd66 TObjFunc
	return 0; // 0xd68 Return
	
Label_3433:
	var_202_int = 10379; // 0xd69 PushI
	var_203_bool = var_35_string == var_202_int; // 0xd6a Eq
	if(var_203_bool == 0) goto Label_3456; // 0xd6b JumpB
	var_204_string = ""; // 0xd6c PushV
	var_204_string = "Neutral"; // 0xd6d MovS
	func_3241(var_36_bool, var_204_string); // 0xd6e Call
	var_205_int = 9444; // 0xd70 PushI
	SetMessage(var_205_int); // 0xd71 TObjFunc
	ClearReplies(); // 0xd73 TObjFunc
	var_206_int = 9445; // 0xd75 PushI
	var_207_int = -1; // 0xd76 PushI
	var_208_int = 10380; // 0xd77 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xd78 TObjFunc
	var_209_int = 9446; // 0xd7a PushI
	var_210_int = -1; // 0xd7b PushI
	var_211_int = 10381; // 0xd7c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xd7d TObjFunc
	return 0; // 0xd7f Return
	
Label_3456:
	var_212_int = 7312; // 0xd80 PushI
	var_213_bool = var_35_string == var_212_int; // 0xd81 Eq
	if(var_213_bool == 0) goto Label_3479; // 0xd82 JumpB
	var_214_string = ""; // 0xd83 PushV
	var_214_string = "Neutral"; // 0xd84 MovS
	func_3241(var_36_bool, var_214_string); // 0xd85 Call
	var_215_int = 6641; // 0xd87 PushI
	SetMessage(var_215_int); // 0xd88 TObjFunc
	ClearReplies(); // 0xd8a TObjFunc
	var_216_int = 6643; // 0xd8c PushI
	var_217_int = 7316; // 0xd8d PushI
	var_218_int = 7315; // 0xd8e PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xd8f TObjFunc
	var_219_int = 6642; // 0xd91 PushI
	var_220_int = -1; // 0xd92 PushI
	var_221_int = 7313; // 0xd93 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xd94 TObjFunc
	return 0; // 0xd96 Return
	
Label_3479:
	var_222_int = 7316; // 0xd97 PushI
	var_223_bool = var_35_string == var_222_int; // 0xd98 Eq
	if(var_223_bool == 0) goto Label_3497; // 0xd99 JumpB
	var_224_string = ""; // 0xd9a PushV
	var_224_string = "Neutral"; // 0xd9b MovS
	func_3241(var_36_bool, var_224_string); // 0xd9c Call
	var_225_int = 6644; // 0xd9e PushI
	SetMessage(var_225_int); // 0xd9f TObjFunc
	ClearReplies(); // 0xda1 TObjFunc
	var_226_int = 6645; // 0xda3 PushI
	var_227_int = -1; // 0xda4 PushI
	var_228_int = 7317; // 0xda5 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xda6 TObjFunc
	return 0; // 0xda8 Return
	
Label_3497:
	var_229_int = 8135; // 0xda9 PushI
	var_230_bool = var_35_string == var_229_int; // 0xdaa Eq
	if(var_230_bool == 0) goto Label_3515; // 0xdab JumpB
	var_231_string = ""; // 0xdac PushV
	var_231_string = "Neutral"; // 0xdad MovS
	func_3241(var_36_bool, var_231_string); // 0xdae Call
	var_232_int = 7374; // 0xdb0 PushI
	SetMessage(var_232_int); // 0xdb1 TObjFunc
	ClearReplies(); // 0xdb3 TObjFunc
	var_233_int = 7375; // 0xdb5 PushI
	var_234_int = 7298; // 0xdb6 PushI
	var_235_int = 8136; // 0xdb7 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xdb8 TObjFunc
	return 0; // 0xdba Return
	
Label_3515:
	var_236_int = 7298; // 0xdbb PushI
	var_237_bool = var_35_string == var_236_int; // 0xdbc Eq
	if(var_237_bool == 0) goto Label_3533; // 0xdbd JumpB
	var_238_string = ""; // 0xdbe PushV
	var_238_string = "Neutral"; // 0xdbf MovS
	func_3241(var_36_bool, var_238_string); // 0xdc0 Call
	var_239_int = 6629; // 0xdc2 PushI
	SetMessage(var_239_int); // 0xdc3 TObjFunc
	ClearReplies(); // 0xdc5 TObjFunc
	var_240_int = 6630; // 0xdc7 PushI
	var_241_int = 7300; // 0xdc8 PushI
	var_242_int = 7299; // 0xdc9 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0xdca TObjFunc
	return 0; // 0xdcc Return
	
Label_3533:
	var_243_int = 7300; // 0xdcd PushI
	var_244_bool = var_35_string == var_243_int; // 0xdce Eq
	if(var_244_bool == 0) goto Label_3556; // 0xdcf JumpB
	var_245_string = ""; // 0xdd0 PushV
	var_245_string = "Neutral"; // 0xdd1 MovS
	func_3241(var_36_bool, var_245_string); // 0xdd2 Call
	var_246_int = 6631; // 0xdd4 PushI
	SetMessage(var_246_int); // 0xdd5 TObjFunc
	ClearReplies(); // 0xdd7 TObjFunc
	var_247_int = 6632; // 0xdd9 PushI
	var_248_int = 7302; // 0xdda PushI
	var_249_int = 7301; // 0xddb PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xddc TObjFunc
	var_250_int = 6636; // 0xdde PushI
	var_251_int = 7306; // 0xddf PushI
	var_252_int = 7305; // 0xde0 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xde1 TObjFunc
	return 0; // 0xde3 Return
	
Label_3556:
	var_253_int = 7306; // 0xde4 PushI
	var_254_bool = var_35_string == var_253_int; // 0xde5 Eq
	if(var_254_bool == 0) goto Label_3574; // 0xde6 JumpB
	var_255_string = ""; // 0xde7 PushV
	var_255_string = "Neutral"; // 0xde8 MovS
	func_3241(var_36_bool, var_255_string); // 0xde9 Call
	var_256_int = 6637; // 0xdeb PushI
	SetMessage(var_256_int); // 0xdec TObjFunc
	ClearReplies(); // 0xdee TObjFunc
	var_257_int = 6638; // 0xdf0 PushI
	var_258_int = 7302; // 0xdf1 PushI
	var_259_int = 7307; // 0xdf2 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xdf3 TObjFunc
	return 0; // 0xdf5 Return
	
Label_3574:
	var_260_int = 7302; // 0xdf6 PushI
	var_261_bool = var_35_string == var_260_int; // 0xdf7 Eq
	if(var_261_bool == 0) goto Label_3597; // 0xdf8 JumpB
	var_262_string = ""; // 0xdf9 PushV
	var_262_string = "Neutral"; // 0xdfa MovS
	func_3241(var_36_bool, var_262_string); // 0xdfb Call
	var_263_int = 6633; // 0xdfd PushI
	SetMessage(var_263_int); // 0xdfe TObjFunc
	ClearReplies(); // 0xe00 TObjFunc
	var_264_int = 6634; // 0xe02 PushI
	var_265_int = 7297; // 0xe03 PushI
	var_266_int = 7303; // 0xe04 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0xe05 TObjFunc
	var_267_int = 6635; // 0xe07 PushI
	var_268_int = 7297; // 0xe08 PushI
	var_269_int = 7304; // 0xe09 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0xe0a TObjFunc
	return 0; // 0xe0c Return
	
Label_3597:
	var_270_int = 7297; // 0xe0d PushI
	var_271_bool = var_35_string == var_270_int; // 0xe0e Eq
	if(var_271_bool == 0) goto Label_3620; // 0xe0f JumpB
	var_272_string = ""; // 0xe10 PushV
	var_272_string = "Neutral"; // 0xe11 MovS
	func_3241(var_36_bool, var_272_string); // 0xe12 Call
	var_273_int = 6628; // 0xe14 PushI
	SetMessage(var_273_int); // 0xe15 TObjFunc
	ClearReplies(); // 0xe17 TObjFunc
	var_274_int = 6648; // 0xe19 PushI
	var_275_int = -1; // 0xe1a PushI
	var_276_int = 7322; // 0xe1b PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xe1c TObjFunc
	var_277_int = 7376; // 0xe1e PushI
	var_278_int = -1; // 0xe1f PushI
	var_279_int = 8137; // 0xe20 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xe21 TObjFunc
	return 0; // 0xe23 Return
	
Label_3620:
	var_3_string = 1; // 0xe24 TMovB
	var_280_bool = 0; // 0xe25 PushV
	func_5746(var_280_bool); // 0xe26 Call
	if(var_280_bool == 0) goto Label_3628; // 0xe28 JumpB
	lshStopAnimation(); // 0xe29 Func
	goto Label_3630; // 0xe2b Jump
	
Label_3630:
	return 0; // 0xe2e Return
	
Label_3628:
	StopAnimation(); // 0xe2c Func
	
Label_3632:
	return 0; // 0xe30 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xf34 PushI
	if(var_37_int == 0) goto Label_4787; // 0xf35 JumpB
	func_5642(); // 0xf37 Call
	var_39_int = 12015; // 0xf39 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xf3a Eq
	if(var_40_bool == 0) goto Label_3915; // 0xf3b JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xf3c PushV
	var_41_object = var_1_object; // 0xf3d MovT
	var_42_object = var_0_object; // 0xf3e MovT
	func_5972(); // 0xf3f Call
	var_45_object = Obj(); var_46_object = Obj(); // 0xf41 PushV
	var_45_object = var_1_object; // 0xf42 MovT
	var_46_object = var_0_object; // 0xf43 MovT
	func_5937(); // 0xf44 Call
	var_113_object = Obj(); var_114_object = Obj(); // 0xf46 PushV
	var_113_object = var_1_object; // 0xf47 MovT
	var_114_object = var_0_object; // 0xf48 MovT
	func_5978(); // 0xf49 Call
	
Label_3915:
	var_139_int = 12018; // 0xf4b PushI
	var_140_bool = var_36_bool == var_139_int; // 0xf4c Eq
	if(var_140_bool == 0) goto Label_3933; // 0xf4d JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0xf4e PushV
	var_141_object = var_1_object; // 0xf4f MovT
	var_142_object = var_0_object; // 0xf50 MovT
	func_5972(); // 0xf51 Call
	var_143_object = Obj(); var_144_object = Obj(); // 0xf53 PushV
	var_143_object = var_1_object; // 0xf54 MovT
	var_144_object = var_0_object; // 0xf55 MovT
	func_5937(); // 0xf56 Call
	var_145_object = Obj(); var_146_object = Obj(); // 0xf58 PushV
	var_145_object = var_1_object; // 0xf59 MovT
	var_146_object = var_0_object; // 0xf5a MovT
	func_5978(); // 0xf5b Call
	
Label_3933:
	var_147_int = 12019; // 0xf5d PushI
	var_148_bool = var_36_bool == var_147_int; // 0xf5e Eq
	if(var_148_bool == 0) goto Label_3941; // 0xf5f JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0xf60 PushV
	var_149_object = var_1_object; // 0xf61 MovT
	var_150_object = var_0_object; // 0xf62 MovT
	func_5972(); // 0xf63 Call
	
Label_3941:
	var_151_int = 12023; // 0xf65 PushI
	var_152_bool = var_36_bool == var_151_int; // 0xf66 Eq
	if(var_152_bool == 0) goto Label_3954; // 0xf67 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0xf68 PushV
	var_153_object = var_1_object; // 0xf69 MovT
	var_154_object = var_0_object; // 0xf6a MovT
	func_5937(); // 0xf6b Call
	var_155_object = Obj(); var_156_object = Obj(); // 0xf6d PushV
	var_155_object = var_1_object; // 0xf6e MovT
	var_156_object = var_0_object; // 0xf6f MovT
	func_5978(); // 0xf70 Call
	
Label_3954:
	var_157_int = 12033; // 0xf72 PushI
	var_158_bool = var_36_bool == var_157_int; // 0xf73 Eq
	if(var_158_bool == 0) goto Label_3967; // 0xf74 JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0xf75 PushV
	var_159_object = var_1_object; // 0xf76 MovT
	var_160_object = var_0_object; // 0xf77 MovT
	func_5994(); // 0xf78 Call
	var_163_object = Obj(); var_164_object = Obj(); // 0xf7a PushV
	var_163_object = var_1_object; // 0xf7b MovT
	var_164_object = var_0_object; // 0xf7c MovT
	func_6000(); // 0xf7d Call
	
Label_3967:
	var_186_int = 12029; // 0xf7f PushI
	var_187_bool = var_36_bool == var_186_int; // 0xf80 Eq
	if(var_187_bool == 0) goto Label_3980; // 0xf81 JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0xf82 PushV
	var_188_object = var_1_object; // 0xf83 MovT
	var_189_object = var_0_object; // 0xf84 MovT
	func_5994(); // 0xf85 Call
	var_190_object = Obj(); var_191_object = Obj(); // 0xf87 PushV
	var_190_object = var_1_object; // 0xf88 MovT
	var_191_object = var_0_object; // 0xf89 MovT
	func_6000(); // 0xf8a Call
	
Label_3980:
	var_192_int = 10893; // 0xf8c PushI
	var_193_bool = var_36_bool == var_192_int; // 0xf8d Eq
	if(var_193_bool == 0) goto Label_3988; // 0xf8e JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0xf8f PushV
	var_194_object = var_1_object; // 0xf90 MovT
	var_195_object = var_0_object; // 0xf91 MovT
	func_6030(); // 0xf92 Call
	
Label_3988:
	var_198_int = 10894; // 0xf94 PushI
	var_199_bool = var_36_bool == var_198_int; // 0xf95 Eq
	if(var_199_bool == 0) goto Label_3996; // 0xf96 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0xf97 PushV
	var_200_object = var_1_object; // 0xf98 MovT
	var_201_object = var_0_object; // 0xf99 MovT
	func_6030(); // 0xf9a Call
	
Label_3996:
	var_202_int = 10895; // 0xf9c PushI
	var_203_bool = var_36_bool == var_202_int; // 0xf9d Eq
	if(var_203_bool == 0) goto Label_4004; // 0xf9e JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0xf9f PushV
	var_204_object = var_1_object; // 0xfa0 MovT
	var_205_object = var_0_object; // 0xfa1 MovT
	func_6030(); // 0xfa2 Call
	
Label_4004:
	var_206_int = 10888; // 0xfa4 PushI
	var_207_bool = var_36_bool == var_206_int; // 0xfa5 Eq
	if(var_207_bool == 0) goto Label_4012; // 0xfa6 JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0xfa7 PushV
	var_208_object = var_1_object; // 0xfa8 MovT
	var_209_object = var_0_object; // 0xfa9 MovT
	func_6030(); // 0xfaa Call
	
Label_4012:
	var_210_int = 10904; // 0xfac PushI
	var_211_bool = var_36_bool == var_210_int; // 0xfad Eq
	if(var_211_bool == 0) goto Label_4020; // 0xfae JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0xfaf PushV
	var_212_object = var_1_object; // 0xfb0 MovT
	var_213_object = var_0_object; // 0xfb1 MovT
	func_6036(); // 0xfb2 Call
	
Label_4020:
	var_216_int = 10914; // 0xfb4 PushI
	var_217_bool = var_36_bool == var_216_int; // 0xfb5 Eq
	if(var_217_bool == 0) goto Label_4028; // 0xfb6 JumpB
	var_218_object = Obj(); var_219_object = Obj(); // 0xfb7 PushV
	var_218_object = var_1_object; // 0xfb8 MovT
	var_219_object = var_0_object; // 0xfb9 MovT
	func_6042(); // 0xfba Call
	
Label_4028:
	var_222_int = 10915; // 0xfbc PushI
	var_223_bool = var_36_bool == var_222_int; // 0xfbd Eq
	if(var_223_bool == 0) goto Label_4036; // 0xfbe JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0xfbf PushV
	var_224_object = var_1_object; // 0xfc0 MovT
	var_225_object = var_0_object; // 0xfc1 MovT
	func_6042(); // 0xfc2 Call
	
Label_4036:
	var_226_int = 10916; // 0xfc4 PushI
	var_227_bool = var_36_bool == var_226_int; // 0xfc5 Eq
	if(var_227_bool == 0) goto Label_4044; // 0xfc6 JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0xfc7 PushV
	var_228_object = var_1_object; // 0xfc8 MovT
	var_229_object = var_0_object; // 0xfc9 MovT
	func_6042(); // 0xfca Call
	
Label_4044:
	var_230_int = 11988; // 0xfcc PushI
	var_231_bool = var_35_string == var_230_int; // 0xfcd Eq
	if(var_231_bool == 0) goto Label_4188; // 0xfce JumpB
	var_232_bool = 0; // 0xfcf PushV
	var_232_bool = 0; // 0xfd0 MovB
	var_233_bool = 0; var_234_object = Obj(); // 0xfd1 PushV
	var_234_object = var_1_object; // 0xfd2 MovT
	func_6372(var_234_object); // 0xfd3 Call
	if(var_233_bool == 0) goto Label_4060; // 0xfd5 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xfd6 PushV
	var_242_object = var_1_object; // 0xfd7 MovT
	func_6384(var_242_object); // 0xfd8 Call
	if(var_241_bool == 0) goto Label_4060; // 0xfda JumpB
	var_232_bool = 1; // 0xfdb MovB
	
Label_4060:
	if(var_232_bool == 0) goto Label_4076; // 0xfdc JumpB
	var_247_string = ""; // 0xfdd PushV
	var_247_string = "Neutral"; // 0xfde MovS
	func_3875(var_36_bool, var_247_string); // 0xfdf Call
	var_262_int = 10844; // 0xfe1 PushI
	SetMessage(var_262_int); // 0xfe2 TObjFunc
	ClearReplies(); // 0xfe4 TObjFunc
	var_263_int = 10845; // 0xfe6 PushI
	var_264_int = 11990; // 0xfe7 PushI
	var_265_int = 11989; // 0xfe8 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xfe9 TObjFunc
	return 0; // 0xfeb Return
	
Label_4076:
	var_266_string = ""; // 0xfec PushV
	var_266_string = "Neutral"; // 0xfed MovS
	func_3875(var_36_bool, var_266_string); // 0xfee Call
	var_267_int = 10841; // 0xff0 PushI
	SetMessage(var_267_int); // 0xff1 TObjFunc
	ClearReplies(); // 0xff3 TObjFunc
	var_268_bool = 0; var_269_object = Obj(); // 0xff5 PushV
	var_269_object = var_1_object; // 0xff6 MovT
	func_6372(var_269_object); // 0xff7 Call
	if(var_268_bool == 0) goto Label_4095; // 0xff9 JumpB
	var_270_int = 10873; // 0xffa PushI
	var_271_int = 12022; // 0xffb PushI
	var_272_int = 12021; // 0xffc PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xffd TObjFunc
	
Label_4095:
	var_273_bool = 0; // 0xfff PushV
	var_273_bool = 0; // 0x1000 MovB
	var_274_bool = 0; // 0x1001 PushV
	var_274_bool = 0; // 0x1002 MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x1003 PushV
	var_276_object = var_1_object; // 0x1004 MovT
	func_6396(var_276_object); // 0x1005 Call
	if(var_275_bool == 0) goto Label_4110; // 0x1007 JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x1008 PushV
	var_282_object = var_1_object; // 0x1009 MovT
	func_6408(var_282_object); // 0x100a Call
	if(var_281_bool == 0) goto Label_4110; // 0x100c JumpB
	var_274_bool = 1; // 0x100d MovB
	
Label_4110:
	if(var_274_bool == 0) goto Label_4117; // 0x100e JumpB
	var_287_bool = 0; var_288_object = Obj(); // 0x100f PushV
	var_288_object = var_1_object; // 0x1010 MovT
	func_6468(var_287_bool, var_288_object); // 0x1011 Call
	if(var_287_bool == 0) goto Label_4117; // 0x1013 JumpB
	var_273_bool = 1; // 0x1014 MovB
	
Label_4117:
	if(var_273_bool == 0) goto Label_4123; // 0x1015 JumpB
	var_295_int = 10876; // 0x1016 PushI
	var_296_int = 12025; // 0x1017 PushI
	var_297_int = 12024; // 0x1018 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x1019 TObjFunc
	
Label_4123:
	var_298_bool = 0; // 0x101b PushV
	var_298_bool = 0; // 0x101c MovB
	var_299_bool = 0; // 0x101d PushV
	var_299_bool = 0; // 0x101e MovB
	var_300_bool = 0; var_301_object = Obj(); // 0x101f PushV
	var_301_object = var_1_object; // 0x1020 MovT
	func_6396(var_301_object); // 0x1021 Call
	if(var_300_bool == 0) goto Label_4138; // 0x1023 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x1024 PushV
	var_303_object = var_1_object; // 0x1025 MovT
	func_6478(var_303_object); // 0x1026 Call
	if(var_302_bool == 0) goto Label_4138; // 0x1028 JumpB
	var_299_bool = 1; // 0x1029 MovB
	
Label_4138:
	if(var_299_bool == 0) goto Label_4146; // 0x102a JumpB
	var_304_bool = 0; var_305_object = Obj(); // 0x102b PushV
	var_305_object = var_1_object; // 0x102c MovT
	func_6468(var_304_bool, var_305_object); // 0x102d Call
	var_306_bool = var_304_bool == 0; // 0x102f Not
	if(var_306_bool == 0) goto Label_4146; // 0x1030 JumpB
	var_298_bool = 1; // 0x1031 MovB
	
Label_4146:
	if(var_298_bool == 0) goto Label_4152; // 0x1032 JumpB
	var_307_int = 11160; // 0x1033 PushI
	var_308_int = 12344; // 0x1034 PushI
	var_309_int = 12343; // 0x1035 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x1036 TObjFunc
	
Label_4152:
	var_310_bool = 0; var_311_object = Obj(); // 0x1038 PushV
	var_311_object = var_1_object; // 0x1039 MovT
	func_6420(var_311_object); // 0x103a Call
	if(var_310_bool == 0) goto Label_4162; // 0x103c JumpB
	var_316_int = 10842; // 0x103d PushI
	var_317_int = 10885; // 0x103e PushI
	var_318_int = 11986; // 0x103f PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x1040 TObjFunc
	
Label_4162:
	var_319_bool = 0; var_320_object = Obj(); // 0x1042 PushV
	var_320_object = var_1_object; // 0x1043 MovT
	func_6432(var_320_object); // 0x1044 Call
	if(var_319_bool == 0) goto Label_4172; // 0x1046 JumpB
	var_325_int = 9894; // 0x1047 PushI
	var_326_int = 10899; // 0x1048 PushI
	var_327_int = 10898; // 0x1049 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x104a TObjFunc
	
Label_4172:
	var_328_bool = 0; var_329_object = Obj(); // 0x104c PushV
	var_329_object = var_1_object; // 0x104d MovT
	func_6444(var_329_object); // 0x104e Call
	if(var_328_bool == 0) goto Label_4182; // 0x1050 JumpB
	var_334_int = 10843; // 0x1051 PushI
	var_335_int = 10909; // 0x1052 PushI
	var_336_int = 11987; // 0x1053 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x1054 TObjFunc
	
Label_4182:
	var_337_int = 11157; // 0x1056 PushI
	var_338_int = -1; // 0x1057 PushI
	var_339_int = 12342; // 0x1058 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x1059 TObjFunc
	return 0; // 0x105b Return
	
Label_4188:
	var_340_int = 10909; // 0x105c PushI
	var_341_bool = var_35_string == var_340_int; // 0x105d Eq
	if(var_341_bool == 0) goto Label_4216; // 0x105e JumpB
	var_342_string = ""; // 0x105f PushV
	var_342_string = "Neutral"; // 0x1060 MovS
	func_3875(var_36_bool, var_342_string); // 0x1061 Call
	var_343_int = 9904; // 0x1063 PushI
	SetMessage(var_343_int); // 0x1064 TObjFunc
	ClearReplies(); // 0x1066 TObjFunc
	var_344_int = 9905; // 0x1068 PushI
	var_345_int = 10911; // 0x1069 PushI
	var_346_int = 10910; // 0x106a PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x106b TObjFunc
	var_347_int = 9912; // 0x106d PushI
	var_348_int = 10911; // 0x106e PushI
	var_349_int = 10917; // 0x106f PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x1070 TObjFunc
	var_350_int = 9913; // 0x1072 PushI
	var_351_int = 10911; // 0x1073 PushI
	var_352_int = 10919; // 0x1074 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x1075 TObjFunc
	return 0; // 0x1077 Return
	
Label_4216:
	var_353_int = 10911; // 0x1078 PushI
	var_354_bool = var_35_string == var_353_int; // 0x1079 Eq
	if(var_354_bool == 0) goto Label_4239; // 0x107a JumpB
	var_355_string = ""; // 0x107b PushV
	var_355_string = "Neutral"; // 0x107c MovS
	func_3875(var_36_bool, var_355_string); // 0x107d Call
	var_356_int = 9906; // 0x107f PushI
	SetMessage(var_356_int); // 0x1080 TObjFunc
	ClearReplies(); // 0x1082 TObjFunc
	var_357_int = 9907; // 0x1084 PushI
	var_358_int = 10913; // 0x1085 PushI
	var_359_int = 10912; // 0x1086 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x1087 TObjFunc
	var_360_int = 9911; // 0x1089 PushI
	var_361_int = -1; // 0x108a PushI
	var_362_int = 10916; // 0x108b PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x108c TObjFunc
	return 0; // 0x108e Return
	
Label_4239:
	var_363_int = 10913; // 0x108f PushI
	var_364_bool = var_35_string == var_363_int; // 0x1090 Eq
	if(var_364_bool == 0) goto Label_4262; // 0x1091 JumpB
	var_365_string = ""; // 0x1092 PushV
	var_365_string = "Neutral"; // 0x1093 MovS
	func_3875(var_36_bool, var_365_string); // 0x1094 Call
	var_366_int = 9908; // 0x1096 PushI
	SetMessage(var_366_int); // 0x1097 TObjFunc
	ClearReplies(); // 0x1099 TObjFunc
	var_367_int = 9909; // 0x109b PushI
	var_368_int = -1; // 0x109c PushI
	var_369_int = 10914; // 0x109d PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x109e TObjFunc
	var_370_int = 9910; // 0x10a0 PushI
	var_371_int = -1; // 0x10a1 PushI
	var_372_int = 10915; // 0x10a2 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x10a3 TObjFunc
	return 0; // 0x10a5 Return
	
Label_4262:
	var_373_int = 10899; // 0x10a6 PushI
	var_374_bool = var_35_string == var_373_int; // 0x10a7 Eq
	if(var_374_bool == 0) goto Label_4285; // 0x10a8 JumpB
	var_375_string = ""; // 0x10a9 PushV
	var_375_string = "Neutral"; // 0x10aa MovS
	func_3875(var_36_bool, var_375_string); // 0x10ab Call
	var_376_int = 9895; // 0x10ad PushI
	SetMessage(var_376_int); // 0x10ae TObjFunc
	ClearReplies(); // 0x10b0 TObjFunc
	var_377_int = 9896; // 0x10b2 PushI
	var_378_int = 10901; // 0x10b3 PushI
	var_379_int = 10900; // 0x10b4 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x10b5 TObjFunc
	var_380_int = 9901; // 0x10b7 PushI
	var_381_int = 10906; // 0x10b8 PushI
	var_382_int = 10905; // 0x10b9 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x10ba TObjFunc
	return 0; // 0x10bc Return
	
Label_4285:
	var_383_int = 10906; // 0x10bd PushI
	var_384_bool = var_35_string == var_383_int; // 0x10be Eq
	if(var_384_bool == 0) goto Label_4303; // 0x10bf JumpB
	var_385_string = ""; // 0x10c0 PushV
	var_385_string = "Neutral"; // 0x10c1 MovS
	func_3875(var_36_bool, var_385_string); // 0x10c2 Call
	var_386_int = 9902; // 0x10c4 PushI
	SetMessage(var_386_int); // 0x10c5 TObjFunc
	ClearReplies(); // 0x10c7 TObjFunc
	var_387_int = 9903; // 0x10c9 PushI
	var_388_int = 10901; // 0x10ca PushI
	var_389_int = 10907; // 0x10cb PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x10cc TObjFunc
	return 0; // 0x10ce Return
	
Label_4303:
	var_390_int = 10901; // 0x10cf PushI
	var_391_bool = var_35_string == var_390_int; // 0x10d0 Eq
	if(var_391_bool == 0) goto Label_4321; // 0x10d1 JumpB
	var_392_string = ""; // 0x10d2 PushV
	var_392_string = "Neutral"; // 0x10d3 MovS
	func_3875(var_36_bool, var_392_string); // 0x10d4 Call
	var_393_int = 9897; // 0x10d6 PushI
	SetMessage(var_393_int); // 0x10d7 TObjFunc
	ClearReplies(); // 0x10d9 TObjFunc
	var_394_int = 9898; // 0x10db PushI
	var_395_int = 10903; // 0x10dc PushI
	var_396_int = 10902; // 0x10dd PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x10de TObjFunc
	return 0; // 0x10e0 Return
	
Label_4321:
	var_397_int = 10903; // 0x10e1 PushI
	var_398_bool = var_35_string == var_397_int; // 0x10e2 Eq
	if(var_398_bool == 0) goto Label_4339; // 0x10e3 JumpB
	var_399_string = ""; // 0x10e4 PushV
	var_399_string = "Neutral"; // 0x10e5 MovS
	func_3875(var_36_bool, var_399_string); // 0x10e6 Call
	var_400_int = 9899; // 0x10e8 PushI
	SetMessage(var_400_int); // 0x10e9 TObjFunc
	ClearReplies(); // 0x10eb TObjFunc
	var_401_int = 9900; // 0x10ed PushI
	var_402_int = -1; // 0x10ee PushI
	var_403_int = 10904; // 0x10ef PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x10f0 TObjFunc
	return 0; // 0x10f2 Return
	
Label_4339:
	var_404_int = 10885; // 0x10f3 PushI
	var_405_bool = var_35_string == var_404_int; // 0x10f4 Eq
	if(var_405_bool == 0) goto Label_4362; // 0x10f5 JumpB
	var_406_string = ""; // 0x10f6 PushV
	var_406_string = "Neutral"; // 0x10f7 MovS
	func_3875(var_36_bool, var_406_string); // 0x10f8 Call
	var_407_int = 9882; // 0x10fa PushI
	SetMessage(var_407_int); // 0x10fb TObjFunc
	ClearReplies(); // 0x10fd TObjFunc
	var_408_int = 9883; // 0x10ff PushI
	var_409_int = 10887; // 0x1100 PushI
	var_410_int = 10886; // 0x1101 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x1102 TObjFunc
	var_411_int = 9893; // 0x1104 PushI
	var_412_int = 10887; // 0x1105 PushI
	var_413_int = 10896; // 0x1106 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x1107 TObjFunc
	return 0; // 0x1109 Return
	
Label_4362:
	var_414_int = 10887; // 0x110a PushI
	var_415_bool = var_35_string == var_414_int; // 0x110b Eq
	if(var_415_bool == 0) goto Label_4385; // 0x110c JumpB
	var_416_string = ""; // 0x110d PushV
	var_416_string = "Neutral"; // 0x110e MovS
	func_3875(var_36_bool, var_416_string); // 0x110f Call
	var_417_int = 9884; // 0x1111 PushI
	SetMessage(var_417_int); // 0x1112 TObjFunc
	ClearReplies(); // 0x1114 TObjFunc
	var_418_int = 9886; // 0x1116 PushI
	var_419_int = 10890; // 0x1117 PushI
	var_420_int = 10889; // 0x1118 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x1119 TObjFunc
	var_421_int = 9885; // 0x111b PushI
	var_422_int = -1; // 0x111c PushI
	var_423_int = 10888; // 0x111d PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x111e TObjFunc
	return 0; // 0x1120 Return
	
Label_4385:
	var_424_int = 10890; // 0x1121 PushI
	var_425_bool = var_35_string == var_424_int; // 0x1122 Eq
	if(var_425_bool == 0) goto Label_4408; // 0x1123 JumpB
	var_426_string = ""; // 0x1124 PushV
	var_426_string = "Neutral"; // 0x1125 MovS
	func_3875(var_36_bool, var_426_string); // 0x1126 Call
	var_427_int = 9887; // 0x1128 PushI
	SetMessage(var_427_int); // 0x1129 TObjFunc
	ClearReplies(); // 0x112b TObjFunc
	var_428_int = 9888; // 0x112d PushI
	var_429_int = 10892; // 0x112e PushI
	var_430_int = 10891; // 0x112f PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x1130 TObjFunc
	var_431_int = 9892; // 0x1132 PushI
	var_432_int = -1; // 0x1133 PushI
	var_433_int = 10895; // 0x1134 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x1135 TObjFunc
	return 0; // 0x1137 Return
	
Label_4408:
	var_434_int = 10892; // 0x1138 PushI
	var_435_bool = var_35_string == var_434_int; // 0x1139 Eq
	if(var_435_bool == 0) goto Label_4431; // 0x113a JumpB
	var_436_string = ""; // 0x113b PushV
	var_436_string = "Neutral"; // 0x113c MovS
	func_3875(var_36_bool, var_436_string); // 0x113d Call
	var_437_int = 9889; // 0x113f PushI
	SetMessage(var_437_int); // 0x1140 TObjFunc
	ClearReplies(); // 0x1142 TObjFunc
	var_438_int = 9890; // 0x1144 PushI
	var_439_int = -1; // 0x1145 PushI
	var_440_int = 10893; // 0x1146 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x1147 TObjFunc
	var_441_int = 9891; // 0x1149 PushI
	var_442_int = -1; // 0x114a PushI
	var_443_int = 10894; // 0x114b PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x114c TObjFunc
	return 0; // 0x114e Return
	
Label_4431:
	var_444_int = 12344; // 0x114f PushI
	var_445_bool = var_35_string == var_444_int; // 0x1150 Eq
	if(var_445_bool == 0) goto Label_4454; // 0x1151 JumpB
	var_446_string = ""; // 0x1152 PushV
	var_446_string = "Neutral"; // 0x1153 MovS
	func_3875(var_36_bool, var_446_string); // 0x1154 Call
	var_447_int = 11161; // 0x1156 PushI
	SetMessage(var_447_int); // 0x1157 TObjFunc
	ClearReplies(); // 0x1159 TObjFunc
	var_448_bool = 0; var_449_object = Obj(); // 0x115b PushV
	var_449_object = var_1_object; // 0x115c MovT
	func_6456(var_449_object); // 0x115d Call
	if(var_448_bool == 0) goto Label_4453; // 0x115f JumpB
	var_454_int = 11162; // 0x1160 PushI
	var_455_int = -1; // 0x1161 PushI
	var_456_int = 12345; // 0x1162 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x1163 TObjFunc
	
Label_4453:
	return 0; // 0x1165 Return
	
Label_4454:
	var_457_int = 12025; // 0x1166 PushI
	var_458_bool = var_35_string == var_457_int; // 0x1167 Eq
	if(var_458_bool == 0) goto Label_4477; // 0x1168 JumpB
	var_459_string = ""; // 0x1169 PushV
	var_459_string = "Neutral"; // 0x116a MovS
	func_3875(var_36_bool, var_459_string); // 0x116b Call
	var_460_int = 10877; // 0x116d PushI
	SetMessage(var_460_int); // 0x116e TObjFunc
	ClearReplies(); // 0x1170 TObjFunc
	var_461_int = 10878; // 0x1172 PushI
	var_462_int = 12030; // 0x1173 PushI
	var_463_int = 12026; // 0x1174 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x1175 TObjFunc
	var_464_int = 10879; // 0x1177 PushI
	var_465_int = 12028; // 0x1178 PushI
	var_466_int = 12027; // 0x1179 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x117a TObjFunc
	return 0; // 0x117c Return
	
Label_4477:
	var_467_int = 12028; // 0x117d PushI
	var_468_bool = var_35_string == var_467_int; // 0x117e Eq
	if(var_468_bool == 0) goto Label_4495; // 0x117f JumpB
	var_469_string = ""; // 0x1180 PushV
	var_469_string = "Neutral"; // 0x1181 MovS
	func_3875(var_36_bool, var_469_string); // 0x1182 Call
	var_470_int = 10880; // 0x1184 PushI
	SetMessage(var_470_int); // 0x1185 TObjFunc
	ClearReplies(); // 0x1187 TObjFunc
	var_471_int = 10881; // 0x1189 PushI
	var_472_int = -1; // 0x118a PushI
	var_473_int = 12029; // 0x118b PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x118c TObjFunc
	return 0; // 0x118e Return
	
Label_4495:
	var_474_int = 12030; // 0x118f PushI
	var_475_bool = var_35_string == var_474_int; // 0x1190 Eq
	if(var_475_bool == 0) goto Label_4513; // 0x1191 JumpB
	var_476_string = ""; // 0x1192 PushV
	var_476_string = "Neutral"; // 0x1193 MovS
	func_3875(var_36_bool, var_476_string); // 0x1194 Call
	var_477_int = 10882; // 0x1196 PushI
	SetMessage(var_477_int); // 0x1197 TObjFunc
	ClearReplies(); // 0x1199 TObjFunc
	var_478_int = 10883; // 0x119b PushI
	var_479_int = 12032; // 0x119c PushI
	var_480_int = 12031; // 0x119d PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x119e TObjFunc
	return 0; // 0x11a0 Return
	
Label_4513:
	var_481_int = 12032; // 0x11a1 PushI
	var_482_bool = var_35_string == var_481_int; // 0x11a2 Eq
	if(var_482_bool == 0) goto Label_4531; // 0x11a3 JumpB
	var_483_string = ""; // 0x11a4 PushV
	var_483_string = "Neutral"; // 0x11a5 MovS
	func_3875(var_36_bool, var_483_string); // 0x11a6 Call
	var_484_int = 10884; // 0x11a8 PushI
	SetMessage(var_484_int); // 0x11a9 TObjFunc
	ClearReplies(); // 0x11ab TObjFunc
	var_485_int = 10885; // 0x11ad PushI
	var_486_int = -1; // 0x11ae PushI
	var_487_int = 12033; // 0x11af PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x11b0 TObjFunc
	return 0; // 0x11b2 Return
	
Label_4531:
	var_488_int = 12022; // 0x11b3 PushI
	var_489_bool = var_35_string == var_488_int; // 0x11b4 Eq
	if(var_489_bool == 0) goto Label_4549; // 0x11b5 JumpB
	var_490_string = ""; // 0x11b6 PushV
	var_490_string = "Neutral"; // 0x11b7 MovS
	func_3875(var_36_bool, var_490_string); // 0x11b8 Call
	var_491_int = 10874; // 0x11ba PushI
	SetMessage(var_491_int); // 0x11bb TObjFunc
	ClearReplies(); // 0x11bd TObjFunc
	var_492_int = 10875; // 0x11bf PushI
	var_493_int = -1; // 0x11c0 PushI
	var_494_int = 12023; // 0x11c1 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x11c2 TObjFunc
	return 0; // 0x11c4 Return
	
Label_4549:
	var_495_int = 11990; // 0x11c5 PushI
	var_496_bool = var_35_string == var_495_int; // 0x11c6 Eq
	if(var_496_bool == 0) goto Label_4577; // 0x11c7 JumpB
	var_497_string = ""; // 0x11c8 PushV
	var_497_string = "Neutral"; // 0x11c9 MovS
	func_3875(var_36_bool, var_497_string); // 0x11ca Call
	var_498_int = 10846; // 0x11cc PushI
	SetMessage(var_498_int); // 0x11cd TObjFunc
	ClearReplies(); // 0x11cf TObjFunc
	var_499_int = 10847; // 0x11d1 PushI
	var_500_int = 11994; // 0x11d2 PushI
	var_501_int = 11991; // 0x11d3 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x11d4 TObjFunc
	var_502_int = 10849; // 0x11d6 PushI
	var_503_int = 11994; // 0x11d7 PushI
	var_504_int = 11993; // 0x11d8 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x11d9 TObjFunc
	var_505_int = 10848; // 0x11db PushI
	var_506_int = 11994; // 0x11dc PushI
	var_507_int = 11992; // 0x11dd PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x11de TObjFunc
	return 0; // 0x11e0 Return
	
Label_4577:
	var_508_int = 11994; // 0x11e1 PushI
	var_509_bool = var_35_string == var_508_int; // 0x11e2 Eq
	if(var_509_bool == 0) goto Label_4616; // 0x11e3 JumpB
	var_510_string = ""; // 0x11e4 PushV
	var_510_string = "Neutral"; // 0x11e5 MovS
	func_3875(var_36_bool, var_510_string); // 0x11e6 Call
	var_511_int = 10850; // 0x11e8 PushI
	SetMessage(var_511_int); // 0x11e9 TObjFunc
	ClearReplies(); // 0x11eb TObjFunc
	var_512_int = 10852; // 0x11ed PushI
	var_513_int = 12003; // 0x11ee PushI
	var_514_int = 11997; // 0x11ef PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x11f0 TObjFunc
	var_515_bool = 0; var_516_object = Obj(); // 0x11f2 PushV
	var_516_object = var_1_object; // 0x11f3 MovT
	func_6252(var_516_object); // 0x11f4 Call
	var_521_bool = var_515_bool == 0; // 0x11f6 Not
	if(var_521_bool == 0) goto Label_4605; // 0x11f7 JumpB
	var_522_int = 10851; // 0x11f8 PushI
	var_523_int = 12001; // 0x11f9 PushI
	var_524_int = 11995; // 0x11fa PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x11fb TObjFunc
	
Label_4605:
	var_525_bool = 0; var_526_object = Obj(); // 0x11fd PushV
	var_526_object = var_1_object; // 0x11fe MovT
	func_6252(var_526_object); // 0x11ff Call
	if(var_525_bool == 0) goto Label_4615; // 0x1201 JumpB
	var_527_int = 10853; // 0x1202 PushI
	var_528_int = 11999; // 0x1203 PushI
	var_529_int = 11998; // 0x1204 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x1205 TObjFunc
	
Label_4615:
	return 0; // 0x1207 Return
	
Label_4616:
	var_530_int = 11999; // 0x1208 PushI
	var_531_bool = var_35_string == var_530_int; // 0x1209 Eq
	if(var_531_bool == 0) goto Label_4634; // 0x120a JumpB
	var_532_string = ""; // 0x120b PushV
	var_532_string = "Neutral"; // 0x120c MovS
	func_3875(var_36_bool, var_532_string); // 0x120d Call
	var_533_int = 10854; // 0x120f PushI
	SetMessage(var_533_int); // 0x1210 TObjFunc
	ClearReplies(); // 0x1212 TObjFunc
	var_534_int = 10855; // 0x1214 PushI
	var_535_int = 12003; // 0x1215 PushI
	var_536_int = 12000; // 0x1216 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x1217 TObjFunc
	return 0; // 0x1219 Return
	
Label_4634:
	var_537_int = 12001; // 0x121a PushI
	var_538_bool = var_35_string == var_537_int; // 0x121b Eq
	if(var_538_bool == 0) goto Label_4652; // 0x121c JumpB
	var_539_string = ""; // 0x121d PushV
	var_539_string = "Neutral"; // 0x121e MovS
	func_3875(var_36_bool, var_539_string); // 0x121f Call
	var_540_int = 10856; // 0x1221 PushI
	SetMessage(var_540_int); // 0x1222 TObjFunc
	ClearReplies(); // 0x1224 TObjFunc
	var_541_int = 10857; // 0x1226 PushI
	var_542_int = 12003; // 0x1227 PushI
	var_543_int = 12002; // 0x1228 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x1229 TObjFunc
	return 0; // 0x122b Return
	
Label_4652:
	var_544_int = 12003; // 0x122c PushI
	var_545_bool = var_35_string == var_544_int; // 0x122d Eq
	if(var_545_bool == 0) goto Label_4670; // 0x122e JumpB
	var_546_string = ""; // 0x122f PushV
	var_546_string = "Neutral"; // 0x1230 MovS
	func_3875(var_36_bool, var_546_string); // 0x1231 Call
	var_547_int = 10858; // 0x1233 PushI
	SetMessage(var_547_int); // 0x1234 TObjFunc
	ClearReplies(); // 0x1236 TObjFunc
	var_548_int = 10859; // 0x1238 PushI
	var_549_int = 12007; // 0x1239 PushI
	var_550_int = 12006; // 0x123a PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x123b TObjFunc
	return 0; // 0x123d Return
	
Label_4670:
	var_551_int = 12007; // 0x123e PushI
	var_552_bool = var_35_string == var_551_int; // 0x123f Eq
	if(var_552_bool == 0) goto Label_4693; // 0x1240 JumpB
	var_553_string = ""; // 0x1241 PushV
	var_553_string = "Neutral"; // 0x1242 MovS
	func_3875(var_36_bool, var_553_string); // 0x1243 Call
	var_554_int = 10860; // 0x1245 PushI
	SetMessage(var_554_int); // 0x1246 TObjFunc
	ClearReplies(); // 0x1248 TObjFunc
	var_555_int = 10861; // 0x124a PushI
	var_556_int = 12010; // 0x124b PushI
	var_557_int = 12008; // 0x124c PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x124d TObjFunc
	var_558_int = 10862; // 0x124f PushI
	var_559_int = 12014; // 0x1250 PushI
	var_560_int = 12009; // 0x1251 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x1252 TObjFunc
	return 0; // 0x1254 Return
	
Label_4693:
	var_561_int = 12010; // 0x1255 PushI
	var_562_bool = var_35_string == var_561_int; // 0x1256 Eq
	if(var_562_bool == 0) goto Label_4711; // 0x1257 JumpB
	var_563_string = ""; // 0x1258 PushV
	var_563_string = "Neutral"; // 0x1259 MovS
	func_3875(var_36_bool, var_563_string); // 0x125a Call
	var_564_int = 10863; // 0x125c PushI
	SetMessage(var_564_int); // 0x125d TObjFunc
	ClearReplies(); // 0x125f TObjFunc
	var_565_int = 10864; // 0x1261 PushI
	var_566_int = 12012; // 0x1262 PushI
	var_567_int = 12011; // 0x1263 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x1264 TObjFunc
	return 0; // 0x1266 Return
	
Label_4711:
	var_568_int = 12012; // 0x1267 PushI
	var_569_bool = var_35_string == var_568_int; // 0x1268 Eq
	if(var_569_bool == 0) goto Label_4729; // 0x1269 JumpB
	var_570_string = ""; // 0x126a PushV
	var_570_string = "Neutral"; // 0x126b MovS
	func_3875(var_36_bool, var_570_string); // 0x126c Call
	var_571_int = 10865; // 0x126e PushI
	SetMessage(var_571_int); // 0x126f TObjFunc
	ClearReplies(); // 0x1271 TObjFunc
	var_572_int = 10866; // 0x1273 PushI
	var_573_int = 12014; // 0x1274 PushI
	var_574_int = 12013; // 0x1275 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x1276 TObjFunc
	return 0; // 0x1278 Return
	
Label_4729:
	var_575_int = 12014; // 0x1279 PushI
	var_576_bool = var_35_string == var_575_int; // 0x127a Eq
	if(var_576_bool == 0) goto Label_4752; // 0x127b JumpB
	var_577_string = ""; // 0x127c PushV
	var_577_string = "Neutral"; // 0x127d MovS
	func_3875(var_36_bool, var_577_string); // 0x127e Call
	var_578_int = 10867; // 0x1280 PushI
	SetMessage(var_578_int); // 0x1281 TObjFunc
	ClearReplies(); // 0x1283 TObjFunc
	var_579_int = 10868; // 0x1285 PushI
	var_580_int = -1; // 0x1286 PushI
	var_581_int = 12015; // 0x1287 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x1288 TObjFunc
	var_582_int = 10869; // 0x128a PushI
	var_583_int = 12017; // 0x128b PushI
	var_584_int = 12016; // 0x128c PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x128d TObjFunc
	return 0; // 0x128f Return
	
Label_4752:
	var_585_int = 12017; // 0x1290 PushI
	var_586_bool = var_35_string == var_585_int; // 0x1291 Eq
	if(var_586_bool == 0) goto Label_4775; // 0x1292 JumpB
	var_587_string = ""; // 0x1293 PushV
	var_587_string = "Neutral"; // 0x1294 MovS
	func_3875(var_36_bool, var_587_string); // 0x1295 Call
	var_588_int = 10870; // 0x1297 PushI
	SetMessage(var_588_int); // 0x1298 TObjFunc
	ClearReplies(); // 0x129a TObjFunc
	var_589_int = 10871; // 0x129c PushI
	var_590_int = -1; // 0x129d PushI
	var_591_int = 12018; // 0x129e PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x129f TObjFunc
	var_592_int = 10872; // 0x12a1 PushI
	var_593_int = -1; // 0x12a2 PushI
	var_594_int = 12019; // 0x12a3 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x12a4 TObjFunc
	return 0; // 0x12a6 Return
	
Label_4775:
	var_3_string = 1; // 0x12a7 TMovB
	var_595_bool = 0; // 0x12a8 PushV
	func_5746(var_595_bool); // 0x12a9 Call
	if(var_595_bool == 0) goto Label_4783; // 0x12ab JumpB
	lshStopAnimation(); // 0x12ac Func
	goto Label_4785; // 0x12ae Jump
	
Label_4785:
	return 0; // 0x12b1 Return
	
Label_4783:
	StopAnimation(); // 0x12af Func
	
Label_4787:
	return 0; // 0x12b3 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x134c PushI
	if(var_37_int == 0) goto Label_5056; // 0x134d JumpB
	func_5642(); // 0x134f Call
	var_39_int = 12437; // 0x1351 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x1352 Eq
	if(var_40_bool == 0) goto Label_4953; // 0x1353 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x1354 PushV
	var_41_object = var_1_object; // 0x1355 MovT
	var_42_object = var_0_object; // 0x1356 MovT
	func_6098(); // 0x1357 Call
	
Label_4953:
	var_45_int = 12435; // 0x1359 PushI
	var_46_bool = var_35_string == var_45_int; // 0x135a Eq
	if(var_46_bool == 0) goto Label_4990; // 0x135b JumpB
	var_47_string = ""; // 0x135c PushV
	var_47_string = "Neutral"; // 0x135d MovS
	func_4923(var_36_bool, var_47_string); // 0x135e Call
	var_62_int = 11245; // 0x1360 PushI
	SetMessage(var_62_int); // 0x1361 TObjFunc
	ClearReplies(); // 0x1363 TObjFunc
	var_63_bool = 0; // 0x1365 PushV
	var_63_bool = 0; // 0x1366 MovB
	var_64_bool = 0; var_65_object = Obj(); // 0x1367 PushV
	var_65_object = var_1_object; // 0x1368 MovT
	func_6651(var_65_object); // 0x1369 Call
	if(var_64_bool == 0) goto Label_4978; // 0x136b JumpB
	var_72_bool = 0; var_73_object = Obj(); // 0x136c PushV
	var_73_object = var_1_object; // 0x136d MovT
	func_6663(var_73_object); // 0x136e Call
	if(var_72_bool == 0) goto Label_4978; // 0x1370 JumpB
	var_63_bool = 1; // 0x1371 MovB
	
Label_4978:
	if(var_63_bool == 0) goto Label_4984; // 0x1372 JumpB
	var_78_int = 11247; // 0x1373 PushI
	var_79_int = 12438; // 0x1374 PushI
	var_80_int = 12437; // 0x1375 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x1376 TObjFunc
	
Label_4984:
	var_81_int = 11246; // 0x1378 PushI
	var_82_int = -1; // 0x1379 PushI
	var_83_int = 12436; // 0x137a PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x137b TObjFunc
	return 0; // 0x137d Return
	
Label_4990:
	var_84_int = 12438; // 0x137e PushI
	var_85_bool = var_35_string == var_84_int; // 0x137f Eq
	if(var_85_bool == 0) goto Label_5008; // 0x1380 JumpB
	var_86_string = ""; // 0x1381 PushV
	var_86_string = "Neutral"; // 0x1382 MovS
	func_4923(var_36_bool, var_86_string); // 0x1383 Call
	var_87_int = 11248; // 0x1385 PushI
	SetMessage(var_87_int); // 0x1386 TObjFunc
	ClearReplies(); // 0x1388 TObjFunc
	var_88_int = 11249; // 0x138a PushI
	var_89_int = 12440; // 0x138b PushI
	var_90_int = 12439; // 0x138c PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x138d TObjFunc
	return 0; // 0x138f Return
	
Label_5008:
	var_91_int = 12440; // 0x1390 PushI
	var_92_bool = var_35_string == var_91_int; // 0x1391 Eq
	if(var_92_bool == 0) goto Label_5026; // 0x1392 JumpB
	var_93_string = ""; // 0x1393 PushV
	var_93_string = "Neutral"; // 0x1394 MovS
	func_4923(var_36_bool, var_93_string); // 0x1395 Call
	var_94_int = 11250; // 0x1397 PushI
	SetMessage(var_94_int); // 0x1398 TObjFunc
	ClearReplies(); // 0x139a TObjFunc
	var_95_int = 11251; // 0x139c PushI
	var_96_int = 12442; // 0x139d PushI
	var_97_int = 12441; // 0x139e PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x139f TObjFunc
	return 0; // 0x13a1 Return
	
Label_5026:
	var_98_int = 12442; // 0x13a2 PushI
	var_99_bool = var_35_string == var_98_int; // 0x13a3 Eq
	if(var_99_bool == 0) goto Label_5044; // 0x13a4 JumpB
	var_100_string = ""; // 0x13a5 PushV
	var_100_string = "Neutral"; // 0x13a6 MovS
	func_4923(var_36_bool, var_100_string); // 0x13a7 Call
	var_101_int = 11252; // 0x13a9 PushI
	SetMessage(var_101_int); // 0x13aa TObjFunc
	ClearReplies(); // 0x13ac TObjFunc
	var_102_int = 11253; // 0x13ae PushI
	var_103_int = -1; // 0x13af PushI
	var_104_int = 12443; // 0x13b0 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x13b1 TObjFunc
	return 0; // 0x13b3 Return
	
Label_5044:
	var_3_string = 1; // 0x13b4 TMovB
	var_105_bool = 0; // 0x13b5 PushV
	func_5746(var_105_bool); // 0x13b6 Call
	if(var_105_bool == 0) goto Label_5052; // 0x13b8 JumpB
	lshStopAnimation(); // 0x13b9 Func
	goto Label_5054; // 0x13bb Jump
	
Label_5054:
	return 0; // 0x13be Return
	
Label_5052:
	StopAnimation(); // 0x13bc Func
	
Label_5056:
	return 0; // 0x13c0 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0x147c PushI
	if(var_37_int == 0) goto Label_5546; // 0x147d JumpB
	func_5642(); // 0x147f Call
	var_39_int = 14724; // 0x1481 PushI
	var_40_bool = var_36_int == var_39_int; // 0x1482 Eq
	if(var_40_bool == 0) goto Label_5267; // 0x1483 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x1484 PushV
	var_41_object = var_1_object; // 0x1485 MovT
	var_42_object = var_0_object; // 0x1486 MovT
	func_6072(); // 0x1487 Call
	var_70_object = Obj(); var_71_object = Obj(); // 0x1489 PushV
	var_70_object = var_1_object; // 0x148a MovT
	var_71_object = var_0_object; // 0x148b MovT
	func_6081(var_71_object); // 0x148c Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x148e PushV
	var_89_object = var_1_object; // 0x148f MovT
	var_90_object = var_0_object; // 0x1490 MovT
	func_5834(); // 0x1491 Call
	
Label_5267:
	var_93_int = 14700; // 0x1493 PushI
	var_94_bool = var_36_int == var_93_int; // 0x1494 Eq
	if(var_94_bool == 0) goto Label_5275; // 0x1495 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x1496 PushV
	var_95_object = var_1_object; // 0x1497 MovT
	var_96_object = var_0_object; // 0x1498 MovT
	func_6092(); // 0x1499 Call
	
Label_5275:
	var_99_int = 14701; // 0x149b PushI
	var_100_bool = var_35_int == var_99_int; // 0x149c Eq
	if(var_100_bool == 0) goto Label_5347; // 0x149d JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x149e PushV
	var_102_object = var_1_object; // 0x149f MovT
	func_6555(var_102_object); // 0x14a0 Call
	if(var_101_bool == 0) goto Label_5313; // 0x14a2 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x14a3 PushV
	var_109_object = var_1_object; // 0x14a4 MovT
	var_110_object = var_0_object; // 0x14a5 MovT
	func_6066(); // 0x14a6 Call
	var_113_string = ""; // 0x14a8 PushV
	var_113_string = "Neutral"; // 0x14a9 MovS
	func_5227(var_36_int, var_113_string); // 0x14aa Call
	var_128_int = 13464; // 0x14ac PushI
	SetMessage(var_128_int); // 0x14ad TObjFunc
	ClearReplies(); // 0x14af TObjFunc
	var_129_int = 13465; // 0x14b1 PushI
	var_130_int = 14704; // 0x14b2 PushI
	var_131_int = 14702; // 0x14b3 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x14b4 TObjFunc
	var_132_bool = 0; var_133_object = Obj(); // 0x14b6 PushV
	var_133_object = var_1_object; // 0x14b7 MovT
	func_6591(var_133_object); // 0x14b8 Call
	if(var_132_bool == 0) goto Label_5312; // 0x14ba JumpB
	var_138_int = 13466; // 0x14bb PushI
	var_139_int = 14705; // 0x14bc PushI
	var_140_int = 14703; // 0x14bd PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x14be TObjFunc
	
Label_5312:
	return 0; // 0x14c0 Return
	
Label_5313:
	var_141_string = ""; // 0x14c1 PushV
	var_141_string = "Neutral"; // 0x14c2 MovS
	func_5227(var_36_int, var_141_string); // 0x14c3 Call
	var_142_int = 13462; // 0x14c5 PushI
	SetMessage(var_142_int); // 0x14c6 TObjFunc
	ClearReplies(); // 0x14c8 TObjFunc
	var_143_bool = 0; // 0x14ca PushV
	var_143_bool = 0; // 0x14cb MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x14cc PushV
	var_145_object = var_1_object; // 0x14cd MovT
	func_6567(var_145_object); // 0x14ce Call
	if(var_144_bool == 0) goto Label_5335; // 0x14d0 JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x14d1 PushV
	var_151_object = var_1_object; // 0x14d2 MovT
	func_6579(var_151_object); // 0x14d3 Call
	if(var_150_bool == 0) goto Label_5335; // 0x14d5 JumpB
	var_143_bool = 1; // 0x14d6 MovB
	
Label_5335:
	if(var_143_bool == 0) goto Label_5341; // 0x14d7 JumpB
	var_156_int = 13463; // 0x14d8 PushI
	var_157_int = 14713; // 0x14d9 PushI
	var_158_int = 14700; // 0x14da PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x14db TObjFunc
	
Label_5341:
	var_159_int = 13483; // 0x14dd PushI
	var_160_int = -1; // 0x14de PushI
	var_161_int = 14721; // 0x14df PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x14e0 TObjFunc
	return 0; // 0x14e2 Return
	
Label_5347:
	var_162_int = 14713; // 0x14e3 PushI
	var_163_bool = var_35_int == var_162_int; // 0x14e4 Eq
	if(var_163_bool == 0) goto Label_5365; // 0x14e5 JumpB
	var_164_string = ""; // 0x14e6 PushV
	var_164_string = "Neutral"; // 0x14e7 MovS
	func_5227(var_36_int, var_164_string); // 0x14e8 Call
	var_165_int = 13476; // 0x14ea PushI
	SetMessage(var_165_int); // 0x14eb TObjFunc
	ClearReplies(); // 0x14ed TObjFunc
	var_166_int = 13477; // 0x14ef PushI
	var_167_int = 14715; // 0x14f0 PushI
	var_168_int = 14714; // 0x14f1 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x14f2 TObjFunc
	return 0; // 0x14f4 Return
	
Label_5365:
	var_169_int = 14715; // 0x14f5 PushI
	var_170_bool = var_35_int == var_169_int; // 0x14f6 Eq
	if(var_170_bool == 0) goto Label_5388; // 0x14f7 JumpB
	var_171_string = ""; // 0x14f8 PushV
	var_171_string = "Neutral"; // 0x14f9 MovS
	func_5227(var_36_int, var_171_string); // 0x14fa Call
	var_172_int = 13478; // 0x14fc PushI
	SetMessage(var_172_int); // 0x14fd TObjFunc
	ClearReplies(); // 0x14ff TObjFunc
	var_173_int = 13480; // 0x1501 PushI
	var_174_int = 14718; // 0x1502 PushI
	var_175_int = 14717; // 0x1503 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1504 TObjFunc
	var_176_int = 13479; // 0x1506 PushI
	var_177_int = -1; // 0x1507 PushI
	var_178_int = 14716; // 0x1508 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1509 TObjFunc
	return 0; // 0x150b Return
	
Label_5388:
	var_179_int = 14718; // 0x150c PushI
	var_180_bool = var_35_int == var_179_int; // 0x150d Eq
	if(var_180_bool == 0) goto Label_5406; // 0x150e JumpB
	var_181_string = ""; // 0x150f PushV
	var_181_string = "Neutral"; // 0x1510 MovS
	func_5227(var_36_int, var_181_string); // 0x1511 Call
	var_182_int = 13481; // 0x1513 PushI
	SetMessage(var_182_int); // 0x1514 TObjFunc
	ClearReplies(); // 0x1516 TObjFunc
	var_183_int = 13482; // 0x1518 PushI
	var_184_int = -1; // 0x1519 PushI
	var_185_int = 14719; // 0x151a PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x151b TObjFunc
	return 0; // 0x151d Return
	
Label_5406:
	var_186_int = 14705; // 0x151e PushI
	var_187_bool = var_35_int == var_186_int; // 0x151f Eq
	if(var_187_bool == 0) goto Label_5434; // 0x1520 JumpB
	var_188_string = ""; // 0x1521 PushV
	var_188_string = "Neutral"; // 0x1522 MovS
	func_5227(var_36_int, var_188_string); // 0x1523 Call
	var_189_int = 13468; // 0x1525 PushI
	SetMessage(var_189_int); // 0x1526 TObjFunc
	ClearReplies(); // 0x1528 TObjFunc
	var_190_int = 13469; // 0x152a PushI
	var_191_int = 14704; // 0x152b PushI
	var_192_int = 14706; // 0x152c PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x152d TObjFunc
	var_193_bool = 0; var_194_object = Obj(); // 0x152f PushV
	var_194_object = var_1_object; // 0x1530 MovT
	func_6543(var_194_object); // 0x1531 Call
	if(var_193_bool == 0) goto Label_5433; // 0x1533 JumpB
	var_199_int = 13470; // 0x1534 PushI
	var_200_int = 14708; // 0x1535 PushI
	var_201_int = 14707; // 0x1536 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1537 TObjFunc
	
Label_5433:
	return 0; // 0x1539 Return
	
Label_5434:
	var_202_int = 14708; // 0x153a PushI
	var_203_bool = var_35_int == var_202_int; // 0x153b Eq
	if(var_203_bool == 0) goto Label_5457; // 0x153c JumpB
	var_204_string = ""; // 0x153d PushV
	var_204_string = "Neutral"; // 0x153e MovS
	func_5227(var_36_int, var_204_string); // 0x153f Call
	var_205_int = 13471; // 0x1541 PushI
	SetMessage(var_205_int); // 0x1542 TObjFunc
	ClearReplies(); // 0x1544 TObjFunc
	var_206_int = 13472; // 0x1546 PushI
	var_207_int = 14711; // 0x1547 PushI
	var_208_int = 14709; // 0x1548 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1549 TObjFunc
	var_209_int = 13473; // 0x154b PushI
	var_210_int = 14727; // 0x154c PushI
	var_211_int = 14710; // 0x154d PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x154e TObjFunc
	return 0; // 0x1550 Return
	
Label_5457:
	var_212_int = 14727; // 0x1551 PushI
	var_213_bool = var_35_int == var_212_int; // 0x1552 Eq
	if(var_213_bool == 0) goto Label_5475; // 0x1553 JumpB
	var_214_string = ""; // 0x1554 PushV
	var_214_string = "Neutral"; // 0x1555 MovS
	func_5227(var_36_int, var_214_string); // 0x1556 Call
	var_215_int = 13488; // 0x1558 PushI
	SetMessage(var_215_int); // 0x1559 TObjFunc
	ClearReplies(); // 0x155b TObjFunc
	var_216_int = 13489; // 0x155d PushI
	var_217_int = 14711; // 0x155e PushI
	var_218_int = 14728; // 0x155f PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1560 TObjFunc
	return 0; // 0x1562 Return
	
Label_5475:
	var_219_int = 14711; // 0x1563 PushI
	var_220_bool = var_35_int == var_219_int; // 0x1564 Eq
	if(var_220_bool == 0) goto Label_5493; // 0x1565 JumpB
	var_221_string = ""; // 0x1566 PushV
	var_221_string = "Neutral"; // 0x1567 MovS
	func_5227(var_36_int, var_221_string); // 0x1568 Call
	var_222_int = 13474; // 0x156a PushI
	SetMessage(var_222_int); // 0x156b TObjFunc
	ClearReplies(); // 0x156d TObjFunc
	var_223_int = 13490; // 0x156f PushI
	var_224_int = -1; // 0x1570 PushI
	var_225_int = 14730; // 0x1571 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1572 TObjFunc
	return 0; // 0x1574 Return
	
Label_5493:
	var_226_int = 14704; // 0x1575 PushI
	var_227_bool = var_35_int == var_226_int; // 0x1576 Eq
	if(var_227_bool == 0) goto Label_5516; // 0x1577 JumpB
	var_228_string = ""; // 0x1578 PushV
	var_228_string = "Neutral"; // 0x1579 MovS
	func_5227(var_36_int, var_228_string); // 0x157a Call
	var_229_int = 13467; // 0x157c PushI
	SetMessage(var_229_int); // 0x157d TObjFunc
	ClearReplies(); // 0x157f TObjFunc
	var_230_int = 13475; // 0x1581 PushI
	var_231_int = 14723; // 0x1582 PushI
	var_232_int = 14712; // 0x1583 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1584 TObjFunc
	var_233_int = 13484; // 0x1586 PushI
	var_234_int = -1; // 0x1587 PushI
	var_235_int = 14722; // 0x1588 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1589 TObjFunc
	return 0; // 0x158b Return
	
Label_5516:
	var_236_int = 14723; // 0x158c PushI
	var_237_bool = var_35_int == var_236_int; // 0x158d Eq
	if(var_237_bool == 0) goto Label_5534; // 0x158e JumpB
	var_238_string = ""; // 0x158f PushV
	var_238_string = "Neutral"; // 0x1590 MovS
	func_5227(var_36_int, var_238_string); // 0x1591 Call
	var_239_int = 13485; // 0x1593 PushI
	SetMessage(var_239_int); // 0x1594 TObjFunc
	ClearReplies(); // 0x1596 TObjFunc
	var_240_int = 13486; // 0x1598 PushI
	var_241_int = -1; // 0x1599 PushI
	var_242_int = 14724; // 0x159a PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x159b TObjFunc
	return 0; // 0x159d Return
	
Label_5534:
	var_3_string = 1; // 0x159e TMovB
	var_243_bool = 0; // 0x159f PushV
	func_5746(var_243_bool); // 0x15a0 Call
	if(var_243_bool == 0) goto Label_5542; // 0x15a2 JumpB
	lshStopAnimation(); // 0x15a3 Func
	goto Label_5544; // 0x15a5 Jump
	
Label_5544:
	return 0; // 0x15a8 Return
	
Label_5542:
	StopAnimation(); // 0x15a6 Func
	
Label_5546:
	return 0; // 0x15aa Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_6959(); // 0x7 Call
	var_36_bool = 0; // 0x9 PushV
	func_5559(var_36_bool); // 0xa Call
	var_39_bool = var_36_bool == 0; // 0xc Not
	if(var_39_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_40_string = ""; // 0x13 PushV
	var_40_string = "Neutral"; // 0x14 MovS
	func_5624(var_40_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_6144(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0x1801 PushV
	var_310_string = "ood1Kapella3"; // 0x1802 MovS
	func_5659(var_309_int, var_310_string); // 0x1803 Call
	var_311_int = 0; // 0x1805 PushI
	var_312_bool = var_309_int == var_311_int; // 0x1806 Eq
	if(var_312_bool == 0) goto Label_6154; // 0x1807 JumpB
	var_307_bool = 1; // 0x1808 MovB
	return 0; // 0x1809 Return
	
Label_6154:
	var_307_bool = 0; // 0x180a MovB
	return 0; // 0x180b Return
}


func_5120(var_0_object, var_1_object, var_2_object, var_3_object, var_791_object, var_792_object)
{
	var_0_object = var_792_object; // 0x1401 TMov
	var_1_object = var_791_object; // 0x1402 TMov
	var_3_object = 0; // 0x1403 TMovB
	var_797_int = 1; // 0x1404 PushI
	if(var_797_int == 0) goto Label_5197; // 0x1405 JumpB
	var_798_bool = 0; var_799_object = Obj(); // 0x1406 PushV
	var_799_object = var_1_object; // 0x1407 MovT
	func_6555(var_799_object); // 0x1408 Call
	if(var_798_bool == 0) goto Label_5161; // 0x140a JumpB
	var_804_object = Obj(); var_805_object = Obj(); // 0x140b PushV
	var_804_object = var_1_object; // 0x140c MovT
	var_805_object = var_0_object; // 0x140d MovT
	func_6066(); // 0x140e Call
	var_808_string = ""; // 0x1410 PushV
	var_808_string = "Neutral"; // 0x1411 MovS
	func_5227(var_792_object, var_808_string); // 0x1412 Call
	var_813_int = 13464; // 0x1414 PushI
	SetMessage(var_813_int); // 0x1415 TObjFunc
	ClearReplies(); // 0x1417 TObjFunc
	var_814_int = 13465; // 0x1419 PushI
	var_815_int = 14704; // 0x141a PushI
	var_816_int = 14702; // 0x141b PushI
	AddReply(var_814_int, var_815_int, var_816_int); // 0x141c TObjFunc
	var_817_bool = 0; var_818_object = Obj(); // 0x141e PushV
	var_818_object = var_1_object; // 0x141f MovT
	func_6591(var_818_object); // 0x1420 Call
	if(var_817_bool == 0) goto Label_5160; // 0x1422 JumpB
	var_823_int = 13466; // 0x1423 PushI
	var_824_int = 14705; // 0x1424 PushI
	var_825_int = 14703; // 0x1425 PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x1426 TObjFunc
	
Label_5160:
	goto Label_5197; // 0x1428 Jump
	
Label_5197:
	var_826_bool = 0; // 0x144d PushV
	func_5746(var_826_bool); // 0x144e Call
	if(var_826_bool == 0) goto Label_5212; // 0x1450 JumpB
	
Label_5201:
	lshWaitForAnimEnd(); // 0x1451 Func
	var_827_object = var_3_object; // 0x1453 PushT
	if(var_827_object == 0) goto Label_5206; // 0x1454 JumpB
	goto Label_5211; // 0x1455 Jump
	
Label_5211:
	goto Label_5226; // 0x145b Jump
	
Label_5226:
	return 0; // 0x146a Return
	
Label_5206:
	var_828_string = ""; // 0x1456 PushV
	var_828_string = var_2_object; // 0x1457 MovT
	func_5624(var_828_string); // 0x1458 Call
	goto Label_5201; // 0x145a Jump
	
Label_5212:
	var_829_string = "all"; // 0x145c PushS
	var_830_string = "idle"; // 0x145d PushS
	PlayAnimation(var_829_string, var_830_string); // 0x145e Func
	
Label_5216:
	WaitForAnimEnd(); // 0x1460 Func
	var_831_object = var_3_object; // 0x1462 PushT
	if(var_831_object == 0) goto Label_5221; // 0x1463 JumpB
	goto Label_5226; // 0x1464 Jump
	
Label_5221:
	var_832_string = "all"; // 0x1465 PushS
	var_833_string = "idle"; // 0x1466 PushS
	PlayAnimation(var_832_string, var_833_string); // 0x1467 Func
	goto Label_5216; // 0x1469 Jump
	
Label_5161:
	var_834_string = ""; // 0x1429 PushV
	var_834_string = "Neutral"; // 0x142a MovS
	func_5227(var_792_object, var_834_string); // 0x142b Call
	var_835_int = 13462; // 0x142d PushI
	SetMessage(var_835_int); // 0x142e TObjFunc
	ClearReplies(); // 0x1430 TObjFunc
	var_836_bool = 0; // 0x1432 PushV
	var_836_bool = 0; // 0x1433 MovB
	var_837_bool = 0; var_838_object = Obj(); // 0x1434 PushV
	var_838_object = var_1_object; // 0x1435 MovT
	func_6567(var_838_object); // 0x1436 Call
	if(var_837_bool == 0) goto Label_5183; // 0x1438 JumpB
	var_843_bool = 0; var_844_object = Obj(); // 0x1439 PushV
	var_844_object = var_1_object; // 0x143a MovT
	func_6579(var_844_object); // 0x143b Call
	if(var_843_bool == 0) goto Label_5183; // 0x143d JumpB
	var_836_bool = 1; // 0x143e MovB
	
Label_5183:
	if(var_836_bool == 0) goto Label_5189; // 0x143f JumpB
	var_849_int = 13463; // 0x1440 PushI
	var_850_int = 14713; // 0x1441 PushI
	var_851_int = 14700; // 0x1442 PushI
	AddReply(var_849_int, var_850_int, var_851_int); // 0x1443 TObjFunc
	
Label_5189:
	var_852_int = 13483; // 0x1445 PushI
	var_853_int = -1; // 0x1446 PushI
	var_854_int = 14721; // 0x1447 PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0x1448 TObjFunc
	goto Label_5197; // 0x144a Jump
}


func_6663(var_72_bool)
{
	var_74_int = 0; var_75_string = ""; // 0x1a08 PushV
	var_75_string = "d4q02"; // 0x1a09 MovS
	func_5659(var_74_int, var_75_string); // 0x1a0a Call
	var_76_int = 0; // 0x1a0c PushI
	var_77_bool = var_74_int == var_76_int; // 0x1a0d Eq
	if(var_77_bool == 0) goto Label_6673; // 0x1a0e JumpB
	var_72_bool = 1; // 0x1a0f MovB
	return 0; // 0x1a10 Return
	
Label_6673:
	var_72_bool = 0; // 0x1a11 MovB
	return 0; // 0x1a12 Return
}


func_5642()
{
	var_38_bool = 0; // 0x160a PushV
	func_5746(var_38_bool); // 0x160b Call
	if(var_38_bool == 0) goto Label_5648; // 0x160d JumpB
	lshStopSpeech(); // 0x160e Func
	
Label_5648:
	return 0; // 0x1610 Return
}


func_6156(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0x180d PushV
	var_327_string = "ood1Kapella4"; // 0x180e MovS
	func_5659(var_326_int, var_327_string); // 0x180f Call
	var_328_int = 0; // 0x1811 PushI
	var_329_bool = var_326_int == var_328_int; // 0x1812 Eq
	if(var_329_bool == 0) goto Label_6166; // 0x1813 JumpB
	var_324_bool = 1; // 0x1814 MovB
	return 0; // 0x1815 Return
	
Label_6166:
	var_324_bool = 0; // 0x1816 MovB
	return 0; // 0x1817 Return
}


func_5649(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x1611 PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x1612 Or
	var_79_float = sqrt(var_80_int); // 0x1613 Sqrt2
	var_81_float = 0.0; // 0x1614 PushF
	var_82_bool = var_79_float < var_81_float; // 0x1615 LT
	if(var_82_bool == 0) goto Label_5657; // 0x1616 JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x1617 MovV
	return 2; // 0x1618 Return
	
Label_5657:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x1619 Div2
	return 2; // 0x161a Return
}


func_6675(var_458_bool)
{
	var_460_int = 0; var_461_string = ""; // 0x1a14 PushV
	var_461_string = "KnowNotkin"; // 0x1a15 MovS
	func_5659(var_460_int, var_461_string); // 0x1a16 Call
	var_462_int = 1; // 0x1a18 PushI
	var_463_bool = var_460_int == var_462_int; // 0x1a19 Eq
	if(var_463_bool == 0) goto Label_6685; // 0x1a1a JumpB
	var_458_bool = 1; // 0x1a1b MovB
	return 0; // 0x1a1c Return
	
Label_6685:
	var_458_bool = 0; // 0x1a1d MovB
	return 0; // 0x1a1e Return
}


func_6168(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0x1819 PushV
	var_316_string = "d1q01FirstGeorgVisit"; // 0x181a MovS
	func_5659(var_315_int, var_316_string); // 0x181b Call
	var_317_int = 1; // 0x181d PushI
	var_318_bool = var_315_int == var_317_int; // 0x181e Eq
	if(var_318_bool == 0) goto Label_6178; // 0x181f JumpB
	var_313_bool = 1; // 0x1820 MovB
	return 0; // 0x1821 Return
	
Label_6178:
	var_313_bool = 0; // 0x1822 MovB
	return 0; // 0x1823 Return
}


func_5659(var_103_int, var_104_string)
{
	var_105_int = 0; var_106_int = 0; // 0x161b PushV
	GetVariable(var_104_string, var_106_int); // 0x161c Func
	var_103_int = var_106_int; // 0x161e Mov
	return 2; // 0x161f Return
}


func_6687(var_78_bool)
{
	var_80_int = 0; var_81_string = ""; // 0x1a20 PushV
	var_81_string = "ood6Kapella3"; // 0x1a21 MovS
	func_5659(var_80_int, var_81_string); // 0x1a22 Call
	var_82_int = 0; // 0x1a24 PushI
	var_83_bool = var_80_int == var_82_int; // 0x1a25 Eq
	if(var_83_bool == 0) goto Label_6697; // 0x1a26 JumpB
	var_78_bool = 1; // 0x1a27 MovB
	return 0; // 0x1a28 Return
	
Label_6697:
	var_78_bool = 0; // 0x1a29 MovB
	return 0; // 0x1a2a Return
}


func_5664(var_99_object, var_100_string)
{
	var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj(); // 0x1620 PushV
	GetMainOutdoorScene(var_103_object); // 0x1621 Func
	var_105_string = ".bin"; // 0x1623 PushS
	var_106_int = var_100_string + var_105_string; // 0x1624 Add
	AddBlankActor(var_104_object, var_103_object, var_100_string, var_106_int); // 0x1625 Func
	var_99_object = var_104_object; // 0x1627 Mov
	return 4; // 0x1628 Return
}


func_6180(var_347_bool)
{
	var_349_int = 0; var_350_string = ""; // 0x1825 PushV
	var_350_string = "ood1Kapella5"; // 0x1826 MovS
	func_5659(var_349_int, var_350_string); // 0x1827 Call
	var_351_int = 0; // 0x1829 PushI
	var_352_bool = var_349_int == var_351_int; // 0x182a Eq
	if(var_352_bool == 0) goto Label_6190; // 0x182b JumpB
	var_347_bool = 1; // 0x182c MovB
	return 0; // 0x182d Return
	
Label_6190:
	var_347_bool = 0; // 0x182e MovB
	return 0; // 0x182f Return
}


func_555(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x22c PushV
	func_5746(var_93_bool); // 0x22d Call
	var_94_bool = var_93_bool == 0; // 0x22f Not
	if(var_94_bool == 0) goto Label_562; // 0x230 JumpB
	return 0; // 0x231 Return
	
Label_562:
	var_95_bool = var_92_string == var_2_object; // 0x232 Eq
	if(var_95_bool == 0) goto Label_565; // 0x233 JumpB
	return 0; // 0x234 Return
	
Label_565:
	var_96_string = ""; // 0x235 PushV
	var_96_string = var_92_string; // 0x236 Mov
	func_5624(var_96_string); // 0x237 Call
	var_2_object = var_92_string; // 0x239 TMov
	return 0; // 0x23a Return
}


func_6699(var_442_bool)
{
	var_444_int = 0; var_445_string = ""; // 0x1a2c PushV
	var_445_string = "KnowSpi4ka"; // 0x1a2d MovS
	func_5659(var_444_int, var_445_string); // 0x1a2e Call
	var_446_int = 1; // 0x1a30 PushI
	var_447_bool = var_444_int == var_446_int; // 0x1a31 Eq
	if(var_447_bool == 0) goto Label_6709; // 0x1a32 JumpB
	var_442_bool = 1; // 0x1a33 MovB
	return 0; // 0x1a34 Return
	
Label_6709:
	var_442_bool = 0; // 0x1a35 MovB
	return 0; // 0x1a36 Return
}


func_5675(var_79_object, var_80_int)
{
	var_81_int = 0; var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_int = 0; var_86_bool = 0; // 0x162b PushV
	GetItemID(var_84_int); // 0x162c ObjFunc
	var_87_string = "Category"; // 0x162e PushS
	GetInvItemProperty(var_85_int, var_84_int, var_87_string); // 0x162f Func
	AddItem(var_86_bool, var_79_object, var_85_int, var_80_int); // 0x1631 ObjFunc
	var_88_bool = var_86_bool == 0; // 0x1633 Not
	if(var_88_bool == 0) goto Label_5687; // 0x1634 JumpB
	DropItems(var_79_object, var_80_int); // 0x1635 ObjFunc
	
Label_5687:
	return 6; // 0x1637 Return
}


func_6192(var_267_bool)
{
	var_269_int = 0; var_270_string = ""; // 0x1831 PushV
	var_270_string = "d1q03"; // 0x1832 MovS
	func_5659(var_269_int, var_270_string); // 0x1833 Call
	var_271_int = 0; // 0x1835 PushI
	var_272_bool = var_269_int == var_271_int; // 0x1836 Eq
	if(var_272_bool == 0) goto Label_6202; // 0x1837 JumpB
	var_267_bool = 1; // 0x1838 MovB
	return 0; // 0x1839 Return
	
Label_6202:
	var_267_bool = 0; // 0x183a MovB
	return 0; // 0x183b Return
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x31 PushV
	var_0_object = var_40_object; // 0x32 TMov
	var_50_bool = 0; var_51_object = Obj(); // 0x33 PushV
	var_51_object = var_40_object; // 0x34 Mov
	func_5564(var_51_object); // 0x35 Call
	var_90_bool = var_50_bool == 0; // 0x37 Not
	if(var_90_bool == 0) goto Label_59; // 0x38 JumpB
	var_39_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_46_object); // 0x3b Func
	var_91_int = 0; // 0x3d PushV
	func_5742(var_91_int); // 0x3e Call
	SetNPCName(var_91_int); // 0x40 ObjFunc
	var_92_string = ""; // 0x42 PushV
	func_5744(var_92_string); // 0x43 Call
	SetPhoto(var_92_string); // 0x45 ObjFunc
	var_93_int = 0; // 0x47 PushV
	func_6846(var_93_int); // 0x48 Call
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
	var_147_bool = var_49_bool == 0; // 0x5e Not
	if(var_147_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_49_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_148_object = Obj(); // 0x65 PushV
	var_148_object = var_40_object; // 0x66 Mov
	func_5620(); // 0x67 Call
	StopDialog(var_46_object); // 0x69 Func
	GetReturnValue(var_48_int); // 0x6b ObjFunc
	var_39_int = var_48_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_3633(var_0_object, var_474_int, var_475_object)
{
	var_477_object = Obj(); var_478_bool = 0; var_479_int = 0; var_480_bool = 0; var_481_object = Obj(); var_482_bool = 0; var_483_int = 0; var_484_bool = 0; // 0xe31 PushV
	var_0_object = var_475_object; // 0xe32 TMov
	var_485_bool = 0; var_486_object = Obj(); // 0xe33 PushV
	var_486_object = var_475_object; // 0xe34 Mov
	func_5564(var_486_object); // 0xe35 Call
	var_487_bool = var_485_bool == 0; // 0xe37 Not
	if(var_487_bool == 0) goto Label_3643; // 0xe38 JumpB
	var_474_int = -2; // 0xe39 MovI
	return 8; // 0xe3a Return
	
Label_3643:
	CreateDialog(var_481_object); // 0xe3b Func
	var_488_int = 0; // 0xe3d PushV
	func_5742(var_488_int); // 0xe3e Call
	SetNPCName(var_488_int); // 0xe40 ObjFunc
	var_489_string = ""; // 0xe42 PushV
	func_5744(var_489_string); // 0xe43 Call
	SetPhoto(var_489_string); // 0xe45 ObjFunc
	var_490_int = 0; // 0xe47 PushV
	func_6846(var_490_int); // 0xe48 Call
	SetPlayerName(var_490_int); // 0xe4a ObjFunc
	var_483_int = -1; // 0xe4c MovI
	IsOverrideActive(var_482_bool); // 0xe4d Func
	var_491_bool = var_482_bool; // 0xe4f Push
	if(var_491_bool == 0) goto Label_3667; // 0xe50 JumpB
	var_474_int = -2; // 0xe51 MovI
	return 8; // 0xe52 Return
	
Label_3667:
	DoDialog(var_481_object); // 0xe53 Func
	var_492_object = Obj(); var_493_object = Obj(); // 0xe55 PushV
	var_492_object = var_475_object; // 0xe56 Mov
	var_493_object = var_481_object; // 0xe57 Mov
	TaskCall(11); // 0xe58 TaskCall
	func_3696(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object); // 0xe59 Call
	TaskReturn(); // 0xe5a TaskReturn
	IsDialogEnd(var_484_bool); // 0xe5c ObjFunc
	
Label_3678:
	var_603_bool = var_484_bool == 0; // 0xe5e Not
	if(var_603_bool == 0) goto Label_3685; // 0xe5f JumpB
	sync(); // 0xe60 Func
	IsDialogEnd(var_484_bool); // 0xe62 ObjFunc
	goto Label_3678; // 0xe64 Jump
	
Label_3685:
	var_604_object = Obj(); // 0xe65 PushV
	var_604_object = var_475_object; // 0xe66 Mov
	func_5620(); // 0xe67 Call
	StopDialog(var_481_object); // 0xe69 Func
	GetReturnValue(var_483_int); // 0xe6b ObjFunc
	var_474_int = var_483_int; // 0xe6d Mov
	return 8; // 0xe6e Return
}


func_6711(var_698_bool)
{
	var_700_int = 0; var_701_string = ""; // 0x1a38 PushV
	var_701_string = "KnowUklad"; // 0x1a39 MovS
	func_5659(var_700_int, var_701_string); // 0x1a3a Call
	var_702_int = 1; // 0x1a3c PushI
	var_703_bool = var_700_int == var_702_int; // 0x1a3d Eq
	if(var_703_bool == 0) goto Label_6721; // 0x1a3e JumpB
	var_698_bool = 1; // 0x1a3f MovB
	return 0; // 0x1a40 Return
	
Label_6721:
	var_698_bool = 0; // 0x1a41 MovB
	return 0; // 0x1a42 Return
}


func_5688(var_73_object, var_74_string, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1638 PushV
	CreateInvItem(var_77_object); // 0x1639 Func
	SetItemName(var_74_string); // 0x163b ObjFunc
	var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0; // 0x163d PushV
	var_78_object = var_73_object; // 0x163e Mov
	var_79_object = var_77_object; // 0x163f Mov
	var_80_int = var_75_int; // 0x1640 Mov
	func_5675(var_79_object, var_80_int); // 0x1641 Call
	return 2; // 0x1643 Return
}


func_6204(var_330_bool)
{
	var_332_int = 0; var_333_string = ""; // 0x183d PushV
	var_333_string = "d1q03"; // 0x183e MovS
	func_5659(var_332_int, var_333_string); // 0x183f Call
	var_334_int = 1000; // 0x1841 PushI
	var_335_bool = var_332_int == var_334_int; // 0x1842 Eq
	if(var_335_bool == 0) goto Label_6214; // 0x1843 JumpB
	var_330_bool = 1; // 0x1844 MovB
	return 0; // 0x1845 Return
	
Label_6214:
	var_330_bool = 0; // 0x1846 MovB
	return 0; // 0x1847 Return
}


func_3134(var_0_object, var_1_object, var_2_object, var_3_object, var_421_object, var_422_object)
{
	var_0_object = var_422_object; // 0xc3f TMov
	var_1_object = var_421_object; // 0xc40 TMov
	var_3_object = 0; // 0xc41 TMovB
	var_427_int = 1; // 0xc42 PushI
	if(var_427_int == 0) goto Label_3211; // 0xc43 JumpB
	var_428_string = ""; // 0xc44 PushV
	var_428_string = "Neutral"; // 0xc45 MovS
	func_3241(var_422_object, var_428_string); // 0xc46 Call
	var_433_int = 6647; // 0xc48 PushI
	SetMessage(var_433_int); // 0xc49 TObjFunc
	ClearReplies(); // 0xc4b TObjFunc
	var_434_bool = 0; // 0xc4d PushV
	var_434_bool = 0; // 0xc4e MovB
	var_435_bool = 0; var_436_object = Obj(); // 0xc4f PushV
	var_436_object = var_1_object; // 0xc50 MovT
	func_6264(var_436_object); // 0xc51 Call
	if(var_435_bool == 0) goto Label_3162; // 0xc53 JumpB
	var_441_bool = 0; var_442_object = Obj(); // 0xc54 PushV
	var_442_object = var_1_object; // 0xc55 MovT
	func_6288(var_442_object); // 0xc56 Call
	if(var_441_bool == 0) goto Label_3162; // 0xc58 JumpB
	var_434_bool = 1; // 0xc59 MovB
	
Label_3162:
	if(var_434_bool == 0) goto Label_3168; // 0xc5a JumpB
	var_447_int = 7373; // 0xc5b PushI
	var_448_int = 8135; // 0xc5c PushI
	var_449_int = 8134; // 0xc5d PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0xc5e TObjFunc
	
Label_3168:
	var_450_bool = 0; var_451_object = Obj(); // 0xc60 PushV
	var_451_object = var_1_object; // 0xc61 MovT
	func_6276(var_451_object); // 0xc62 Call
	if(var_450_bool == 0) goto Label_3178; // 0xc64 JumpB
	var_456_int = 6640; // 0xc65 PushI
	var_457_int = 7312; // 0xc66 PushI
	var_458_int = 7311; // 0xc67 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0xc68 TObjFunc
	
Label_3178:
	var_459_int = 7533; // 0xc6a PushI
	var_460_int = -1; // 0xc6b PushI
	var_461_int = 8315; // 0xc6c PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xc6d TObjFunc
	goto Label_3211; // 0xc6f Jump
	
Label_3211:
	var_462_bool = 0; // 0xc8b PushV
	func_5746(var_462_bool); // 0xc8c Call
	if(var_462_bool == 0) goto Label_3226; // 0xc8e JumpB
	
Label_3215:
	lshWaitForAnimEnd(); // 0xc8f Func
	var_463_object = var_3_object; // 0xc91 PushT
	if(var_463_object == 0) goto Label_3220; // 0xc92 JumpB
	goto Label_3225; // 0xc93 Jump
	
Label_3225:
	goto Label_3240; // 0xc99 Jump
	
Label_3240:
	return 0; // 0xca8 Return
	
Label_3220:
	var_464_string = ""; // 0xc94 PushV
	var_464_string = var_2_object; // 0xc95 MovT
	func_5624(var_464_string); // 0xc96 Call
	goto Label_3215; // 0xc98 Jump
	
Label_3226:
	var_465_string = "all"; // 0xc9a PushS
	var_466_string = "idle"; // 0xc9b PushS
	PlayAnimation(var_465_string, var_466_string); // 0xc9c Func
	
Label_3230:
	WaitForAnimEnd(); // 0xc9e Func
	var_467_object = var_3_object; // 0xca0 PushT
	if(var_467_object == 0) goto Label_3235; // 0xca1 JumpB
	goto Label_3240; // 0xca2 Jump
	
Label_3235:
	var_468_string = "all"; // 0xca3 PushS
	var_469_string = "idle"; // 0xca4 PushS
	PlayAnimation(var_468_string, var_469_string); // 0xca5 Func
	goto Label_3230; // 0xca7 Jump
}


func_6723(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x1a44 PushV
	var_262_string = "ood1Kapella1"; // 0x1a45 MovS
	func_5659(var_261_int, var_262_string); // 0x1a46 Call
	var_265_int = 0; // 0x1a48 PushI
	var_266_bool = var_261_int == var_265_int; // 0x1a49 Eq
	if(var_266_bool == 0) goto Label_6733; // 0x1a4a JumpB
	var_259_bool = 1; // 0x1a4b MovB
	return 0; // 0x1a4c Return
	
Label_6733:
	var_259_bool = 0; // 0x1a4d MovB
	return 0; // 0x1a4e Return
}


func_5701(var_107_bool, var_108_string, var_109_string)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x1645 PushV
	FindActor(var_111_object, var_108_string); // 0x1646 Func
	var_112_bool = var_111_object == 0; // 0x1648 NullEq
	if(var_112_bool == 0) goto Label_5708; // 0x1649 JumpB
	var_107_bool = 0; // 0x164a MovB
	return 2; // 0x164b Return
	
Label_5708:
	Trigger(var_111_object, var_109_string); // 0x164c Func
	var_107_bool = 1; // 0x164e MovB
	return 2; // 0x164f Return
}


func_6216(var_336_bool)
{
	var_338_int = 0; var_339_string = ""; // 0x1849 PushV
	var_339_string = "d1q03IsKapella"; // 0x184a MovS
	func_5659(var_338_int, var_339_string); // 0x184b Call
	var_340_int = 1; // 0x184d PushI
	var_341_bool = var_338_int == var_340_int; // 0x184e Eq
	if(var_341_bool == 0) goto Label_6226; // 0x184f JumpB
	var_336_bool = 1; // 0x1850 MovB
	return 0; // 0x1851 Return
	
Label_6226:
	var_336_bool = 0; // 0x1852 MovB
	return 0; // 0x1853 Return
}


func_6735(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x1a50 PushV
	var_300_string = "ood1Kapella2"; // 0x1a51 MovS
	func_5659(var_299_int, var_300_string); // 0x1a52 Call
	var_301_int = 0; // 0x1a54 PushI
	var_302_bool = var_299_int == var_301_int; // 0x1a55 Eq
	if(var_302_bool == 0) goto Label_6745; // 0x1a56 JumpB
	var_297_bool = 1; // 0x1a57 MovB
	return 0; // 0x1a58 Return
	
Label_6745:
	var_297_bool = 0; // 0x1a59 MovB
	return 0; // 0x1a5a Return
}


func_5713(var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x1651 PushV
	GetGameTime(var_64_float); // 0x1652 Func
	var_62_float = var_64_float; // 0x1654 Mov
	return 2; // 0x1655 Return
}


func_6228(var_362_bool)
{
	var_364_int = 0; var_365_string = ""; // 0x1855 PushV
	var_365_string = "ood1Kapella6"; // 0x1856 MovS
	func_5659(var_364_int, var_365_string); // 0x1857 Call
	var_366_int = 0; // 0x1859 PushI
	var_367_bool = var_364_int == var_366_int; // 0x185a Eq
	if(var_367_bool == 0) goto Label_6238; // 0x185b JumpB
	var_362_bool = 1; // 0x185c MovB
	return 0; // 0x185d Return
	
Label_6238:
	var_362_bool = 0; // 0x185e MovB
	return 0; // 0x185f Return
}


func_5718(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x1656 PushV
	GetGameTime(var_154_float); // 0x1657 Func
	var_155_int = 1; // 0x1659 PushI
	var_156_int = 0; // 0x165a PushV
	var_157_int = 24; // 0x165b PushI
	var_156_int = var_154_float / var_154_float; // 0x165c Div2
	var_152_int = var_155_int + var_156_int; // 0x165d Add2
	return 2; // 0x165e Return
}


func_6747(var_289_bool)
{
	var_291_float = 0; var_292_float = 0; // 0x1a5b PushV
	var_293_string = "disease"; // 0x1a5c PushS
	GetProperty(var_293_string, var_292_float); // 0x1a5d ObjFunc
	var_294_int = 0; // 0x1a5f PushI
	var_289_bool = var_292_float == var_294_int; // 0x1a60 Eq2
	return 2; // 0x1a61 Return
}


func_5727(var_150_bool, var_151_int)
{
	var_152_int = 0; // 0x1660 PushV
	func_5718(var_152_int); // 0x1661 Call
	var_150_bool = var_152_int == var_151_int; // 0x1663 Eq2
	return 0; // 0x1664 Return
}


func_6240(var_368_bool)
{
	var_370_int = 0; var_371_string = ""; // 0x1861 PushV
	var_371_string = "d1q03"; // 0x1862 MovS
	func_5659(var_370_int, var_371_string); // 0x1863 Call
	var_372_int = -1; // 0x1865 PushI
	var_373_bool = var_370_int == var_372_int; // 0x1866 Eq
	if(var_373_bool == 0) goto Label_6250; // 0x1867 JumpB
	var_368_bool = 1; // 0x1868 MovB
	return 0; // 0x1869 Return
	
Label_6250:
	var_368_bool = 0; // 0x186a MovB
	return 0; // 0x186b Return
}


func_6754(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x1a62 PushV
	GetDiaryRoot(var_62_object); // 0x1a63 Func
	var_63_bool = var_62_object == 0; // 0x1a65 Not
	if(var_63_bool == 0) goto Label_6764; // 0x1a66 JumpB
	var_64_string = "Can't retrieve diary root"; // 0x1a67 PushS
	Trace(var_64_string); // 0x1a68 Func
	var_60_object = 0; // 0x1a6a MovB
	return 2; // 0x1a6b Return
	
Label_6764:
	var_60_object = var_62_object; // 0x1a6c Mov
	return 2; // 0x1a6d Return
}


func_5733(var_857_bool)
{
	var_858_bool = 0; var_859_bool = 0; // 0x1665 PushV
	var_860_string = ""; // 0x1666 PushV
	var_860_string = "No"; // 0x1667 MovS
	func_5624(var_860_string); // 0x1668 Call
	lshWaitForAnimEnd(var_859_bool); // 0x166a Func
	var_857_bool = var_859_bool; // 0x166c Mov
	return 2; // 0x166d Return
}


func_5227(var_2_object, var_113_string)
{
	var_114_bool = 0; // 0x146c PushV
	func_5746(var_114_bool); // 0x146d Call
	var_115_bool = var_114_bool == 0; // 0x146f Not
	if(var_115_bool == 0) goto Label_5234; // 0x1470 JumpB
	return 0; // 0x1471 Return
	
Label_5234:
	var_116_bool = var_113_string == var_2_object; // 0x1472 Eq
	if(var_116_bool == 0) goto Label_5237; // 0x1473 JumpB
	return 0; // 0x1474 Return
	
Label_5237:
	var_117_string = ""; // 0x1475 PushV
	var_117_string = var_113_string; // 0x1476 Mov
	func_5624(var_117_string); // 0x1477 Call
	var_2_object = var_113_string; // 0x1479 TMov
	return 0; // 0x147a Return
}


func_6252(var_515_bool)
{
	var_517_int = 0; var_518_string = ""; // 0x186d PushV
	var_518_string = "KnowAgo"; // 0x186e MovS
	func_5659(var_517_int, var_518_string); // 0x186f Call
	var_519_int = 1; // 0x1871 PushI
	var_520_bool = var_517_int == var_519_int; // 0x1872 Eq
	if(var_520_bool == 0) goto Label_6262; // 0x1873 JumpB
	var_515_bool = 1; // 0x1874 MovB
	return 0; // 0x1875 Return
	
Label_6262:
	var_515_bool = 0; // 0x1876 MovB
	return 0; // 0x1877 Return
}


func_5742(var_91_int)
{
	var_91_int = 2863; // 0x166e MovI
	return 0; // 0x166f Return
}


func_6767(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; // 0x1a6f PushV
	var_60_object = Obj(); // 0x1a70 PushV
	func_6754(var_60_object); // 0x1a71 Call
	var_57_object = var_60_object; // 0x1a72 Mov
	Find(var_53_int, var_58_object); // 0x1a74 ObjFunc
	var_65_bool = var_58_object == 0; // 0x1a76 Not
	if(var_65_bool == 0) goto Label_6782; // 0x1a77 JumpB
	var_66_string = "Can't find diary parent with id: "; // 0x1a78 PushS
	var_67_int = var_66_string + var_53_int; // 0x1a79 Add
	Trace(var_67_int); // 0x1a7a Func
	var_51_bool = 0; // 0x1a7c MovB
	return 6; // 0x1a7d Return
	
Label_6782:
	AddChild(var_52_object); // 0x1a7e ObjFunc
	var_68_string = "player_diary"; // 0x1a80 PushS
	var_69_int = 1; // 0x1a81 PushI
	SetVariable(var_68_string, var_69_int); // 0x1a82 Func
	GetCategory(var_59_int); // 0x1a84 ObjFunc
	SetDiarySection(var_59_int); // 0x1a86 Func
	var_51_bool = 0; // 0x1a88 MovB
	return 6; // 0x1a89 Return
}


func_5744(var_92_string)
{
	var_92_string = "ui/NPC_Kapella.png"; // 0x1670 MovS
	return 0; // 0x1671 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x71 TMov
	var_1_object = var_102_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_108_int = 1; // 0x74 PushI
	if(var_108_int == 0) goto Label_150; // 0x75 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x76 PushV
	var_109_object = var_1_object; // 0x77 MovT
	var_110_object = var_0_object; // 0x78 MovT
	func_5778(); // 0x79 Call
	var_113_object = Obj(); var_114_object = Obj(); // 0x7b PushV
	var_113_object = var_1_object; // 0x7c MovT
	var_114_object = var_0_object; // 0x7d MovT
	func_5784(); // 0x7e Call
	var_117_string = ""; // 0x80 PushV
	var_117_string = "Neutral"; // 0x81 MovS
	func_180(var_103_object, var_117_string); // 0x82 Call
	var_132_int = 473; // 0x84 PushI
	SetMessage(var_132_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_133_int = 476; // 0x89 PushI
	var_134_int = 547; // 0x8a PushI
	var_135_int = 546; // 0x8b PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x8c TObjFunc
	var_136_int = 474; // 0x8e PushI
	var_137_int = 545; // 0x8f PushI
	var_138_int = 544; // 0x90 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_139_bool = 0; // 0x96 PushV
	func_5746(var_139_bool); // 0x97 Call
	if(var_139_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_140_object = var_3_object; // 0x9c PushT
	if(var_140_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_141_string = ""; // 0x9f PushV
	var_141_string = var_2_object; // 0xa0 MovT
	func_5624(var_141_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_142_string = "all"; // 0xa5 PushS
	var_143_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_142_string, var_143_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_144_object = var_3_object; // 0xab PushT
	if(var_144_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_145_string = "all"; // 0xae PushS
	var_146_string = "idle"; // 0xaf PushS
	PlayAnimation(var_145_string, var_146_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_5746(var_38_bool)
{
	var_38_bool = 1; // 0x1672 MovB
	return 0; // 0x1673 Return
}


func_3696(var_0_object, var_1_object, var_2_object, var_3_object, var_492_object, var_493_object)
{
	var_0_object = var_493_object; // 0xe71 TMov
	var_1_object = var_492_object; // 0xe72 TMov
	var_3_object = 0; // 0xe73 TMovB
	var_498_int = 1; // 0xe74 PushI
	if(var_498_int == 0) goto Label_3845; // 0xe75 JumpB
	var_499_bool = 0; // 0xe76 PushV
	var_499_bool = 0; // 0xe77 MovB
	var_500_bool = 0; var_501_object = Obj(); // 0xe78 PushV
	var_501_object = var_1_object; // 0xe79 MovT
	func_6372(var_501_object); // 0xe7a Call
	if(var_500_bool == 0) goto Label_3715; // 0xe7c JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0xe7d PushV
	var_507_object = var_1_object; // 0xe7e MovT
	func_6384(var_507_object); // 0xe7f Call
	if(var_506_bool == 0) goto Label_3715; // 0xe81 JumpB
	var_499_bool = 1; // 0xe82 MovB
	
Label_3715:
	if(var_499_bool == 0) goto Label_3731; // 0xe83 JumpB
	var_512_string = ""; // 0xe84 PushV
	var_512_string = "Neutral"; // 0xe85 MovS
	func_3875(var_493_object, var_512_string); // 0xe86 Call
	var_517_int = 10844; // 0xe88 PushI
	SetMessage(var_517_int); // 0xe89 TObjFunc
	ClearReplies(); // 0xe8b TObjFunc
	var_518_int = 10845; // 0xe8d PushI
	var_519_int = 11990; // 0xe8e PushI
	var_520_int = 11989; // 0xe8f PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0xe90 TObjFunc
	goto Label_3845; // 0xe92 Jump
	
Label_3845:
	var_521_bool = 0; // 0xf05 PushV
	func_5746(var_521_bool); // 0xf06 Call
	if(var_521_bool == 0) goto Label_3860; // 0xf08 JumpB
	
Label_3849:
	lshWaitForAnimEnd(); // 0xf09 Func
	var_522_object = var_3_object; // 0xf0b PushT
	if(var_522_object == 0) goto Label_3854; // 0xf0c JumpB
	goto Label_3859; // 0xf0d Jump
	
Label_3859:
	goto Label_3874; // 0xf13 Jump
	
Label_3874:
	return 0; // 0xf22 Return
	
Label_3854:
	var_523_string = ""; // 0xf0e PushV
	var_523_string = var_2_object; // 0xf0f MovT
	func_5624(var_523_string); // 0xf10 Call
	goto Label_3849; // 0xf12 Jump
	
Label_3860:
	var_524_string = "all"; // 0xf14 PushS
	var_525_string = "idle"; // 0xf15 PushS
	PlayAnimation(var_524_string, var_525_string); // 0xf16 Func
	
Label_3864:
	WaitForAnimEnd(); // 0xf18 Func
	var_526_object = var_3_object; // 0xf1a PushT
	if(var_526_object == 0) goto Label_3869; // 0xf1b JumpB
	goto Label_3874; // 0xf1c Jump
	
Label_3869:
	var_527_string = "all"; // 0xf1d PushS
	var_528_string = "idle"; // 0xf1e PushS
	PlayAnimation(var_527_string, var_528_string); // 0xf1f Func
	goto Label_3864; // 0xf21 Jump
	
Label_3731:
	var_529_string = ""; // 0xe93 PushV
	var_529_string = "Neutral"; // 0xe94 MovS
	func_3875(var_493_object, var_529_string); // 0xe95 Call
	var_530_int = 10841; // 0xe97 PushI
	SetMessage(var_530_int); // 0xe98 TObjFunc
	ClearReplies(); // 0xe9a TObjFunc
	var_531_bool = 0; var_532_object = Obj(); // 0xe9c PushV
	var_532_object = var_1_object; // 0xe9d MovT
	func_6372(var_532_object); // 0xe9e Call
	if(var_531_bool == 0) goto Label_3750; // 0xea0 JumpB
	var_533_int = 10873; // 0xea1 PushI
	var_534_int = 12022; // 0xea2 PushI
	var_535_int = 12021; // 0xea3 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0xea4 TObjFunc
	
Label_3750:
	var_536_bool = 0; // 0xea6 PushV
	var_536_bool = 0; // 0xea7 MovB
	var_537_bool = 0; // 0xea8 PushV
	var_537_bool = 0; // 0xea9 MovB
	var_538_bool = 0; var_539_object = Obj(); // 0xeaa PushV
	var_539_object = var_1_object; // 0xeab MovT
	func_6396(var_539_object); // 0xeac Call
	if(var_538_bool == 0) goto Label_3765; // 0xeae JumpB
	var_544_bool = 0; var_545_object = Obj(); // 0xeaf PushV
	var_545_object = var_1_object; // 0xeb0 MovT
	func_6408(var_545_object); // 0xeb1 Call
	if(var_544_bool == 0) goto Label_3765; // 0xeb3 JumpB
	var_537_bool = 1; // 0xeb4 MovB
	
Label_3765:
	if(var_537_bool == 0) goto Label_3772; // 0xeb5 JumpB
	var_550_bool = 0; var_551_object = Obj(); // 0xeb6 PushV
	var_551_object = var_1_object; // 0xeb7 MovT
	func_6468(var_550_bool, var_551_object); // 0xeb8 Call
	if(var_550_bool == 0) goto Label_3772; // 0xeba JumpB
	var_536_bool = 1; // 0xebb MovB
	
Label_3772:
	if(var_536_bool == 0) goto Label_3778; // 0xebc JumpB
	var_558_int = 10876; // 0xebd PushI
	var_559_int = 12025; // 0xebe PushI
	var_560_int = 12024; // 0xebf PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0xec0 TObjFunc
	
Label_3778:
	var_561_bool = 0; // 0xec2 PushV
	var_561_bool = 0; // 0xec3 MovB
	var_562_bool = 0; // 0xec4 PushV
	var_562_bool = 0; // 0xec5 MovB
	var_563_bool = 0; var_564_object = Obj(); // 0xec6 PushV
	var_564_object = var_1_object; // 0xec7 MovT
	func_6396(var_564_object); // 0xec8 Call
	if(var_563_bool == 0) goto Label_3793; // 0xeca JumpB
	var_565_bool = 0; var_566_object = Obj(); // 0xecb PushV
	var_566_object = var_1_object; // 0xecc MovT
	func_6478(var_566_object); // 0xecd Call
	if(var_565_bool == 0) goto Label_3793; // 0xecf JumpB
	var_562_bool = 1; // 0xed0 MovB
	
Label_3793:
	if(var_562_bool == 0) goto Label_3801; // 0xed1 JumpB
	var_567_bool = 0; var_568_object = Obj(); // 0xed2 PushV
	var_568_object = var_1_object; // 0xed3 MovT
	func_6468(var_567_bool, var_568_object); // 0xed4 Call
	var_569_bool = var_567_bool == 0; // 0xed6 Not
	if(var_569_bool == 0) goto Label_3801; // 0xed7 JumpB
	var_561_bool = 1; // 0xed8 MovB
	
Label_3801:
	if(var_561_bool == 0) goto Label_3807; // 0xed9 JumpB
	var_570_int = 11160; // 0xeda PushI
	var_571_int = 12344; // 0xedb PushI
	var_572_int = 12343; // 0xedc PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0xedd TObjFunc
	
Label_3807:
	var_573_bool = 0; var_574_object = Obj(); // 0xedf PushV
	var_574_object = var_1_object; // 0xee0 MovT
	func_6420(var_574_object); // 0xee1 Call
	if(var_573_bool == 0) goto Label_3817; // 0xee3 JumpB
	var_579_int = 10842; // 0xee4 PushI
	var_580_int = 10885; // 0xee5 PushI
	var_581_int = 11986; // 0xee6 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0xee7 TObjFunc
	
Label_3817:
	var_582_bool = 0; var_583_object = Obj(); // 0xee9 PushV
	var_583_object = var_1_object; // 0xeea MovT
	func_6432(var_583_object); // 0xeeb Call
	if(var_582_bool == 0) goto Label_3827; // 0xeed JumpB
	var_588_int = 9894; // 0xeee PushI
	var_589_int = 10899; // 0xeef PushI
	var_590_int = 10898; // 0xef0 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0xef1 TObjFunc
	
Label_3827:
	var_591_bool = 0; var_592_object = Obj(); // 0xef3 PushV
	var_592_object = var_1_object; // 0xef4 MovT
	func_6444(var_592_object); // 0xef5 Call
	if(var_591_bool == 0) goto Label_3837; // 0xef7 JumpB
	var_597_int = 10843; // 0xef8 PushI
	var_598_int = 10909; // 0xef9 PushI
	var_599_int = 11987; // 0xefa PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0xefb TObjFunc
	
Label_3837:
	var_600_int = 11157; // 0xefd PushI
	var_601_int = -1; // 0xefe PushI
	var_602_int = 12342; // 0xeff PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0xf00 TObjFunc
	goto Label_3845; // 0xf02 Jump
}


func_5748()
{
	var_712_string = "KnowUklad"; // 0x1675 PushS
	var_713_int = 1; // 0x1676 PushI
	SetVariable(var_712_string, var_713_int); // 0x1677 Func
	return 0; // 0x1679 Return
}


func_6264(var_153_bool)
{
	var_155_int = 0; var_156_string = ""; // 0x1879 PushV
	var_156_string = "ood2Kapella1"; // 0x187a MovS
	func_5659(var_155_int, var_156_string); // 0x187b Call
	var_159_int = 0; // 0x187d PushI
	var_160_bool = var_155_int == var_159_int; // 0x187e Eq
	if(var_160_bool == 0) goto Label_6274; // 0x187f JumpB
	var_153_bool = 1; // 0x1880 MovB
	return 0; // 0x1881 Return
	
Label_6274:
	var_153_bool = 0; // 0x1882 MovB
	return 0; // 0x1883 Return
}


func_5754()
{
	var_43_string = "ood1Kapella1"; // 0x167b PushS
	var_44_int = 1; // 0x167c PushI
	SetVariable(var_43_string, var_44_int); // 0x167d Func
	return 0; // 0x167f Return
}


func_5760()
{
	var_144_string = "ood1Kapella2"; // 0x1681 PushS
	var_145_int = 1; // 0x1682 PushI
	SetVariable(var_144_string, var_145_int); // 0x1683 Func
	return 0; // 0x1685 Return
}


func_6276(var_170_bool)
{
	var_172_int = 0; var_173_string = ""; // 0x1885 PushV
	var_173_string = "ood2Kapella2"; // 0x1886 MovS
	func_5659(var_172_int, var_173_string); // 0x1887 Call
	var_174_int = 0; // 0x1889 PushI
	var_175_bool = var_172_int == var_174_int; // 0x188a Eq
	if(var_175_bool == 0) goto Label_6286; // 0x188b JumpB
	var_170_bool = 1; // 0x188c MovB
	return 0; // 0x188d Return
	
Label_6286:
	var_170_bool = 0; // 0x188e MovB
	return 0; // 0x188f Return
}


func_5766()
{
	var_170_string = "ood1Kapella3"; // 0x1687 PushS
	var_171_int = 1; // 0x1688 PushI
	SetVariable(var_170_string, var_171_int); // 0x1689 Func
	return 0; // 0x168b Return
}


func_5772()
{
	var_184_string = "ood1Kapella4"; // 0x168d PushS
	var_185_int = 1; // 0x168e PushI
	SetVariable(var_184_string, var_185_int); // 0x168f Func
	return 0; // 0x1691 Return
}


func_6796(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); // 0x1a8c PushV
	GetMainOutdoorScene(var_54_object); // 0x1a8d Func
	var_56_bool = var_54_object == 0; // 0x1a8f NullEq
	if(var_56_bool == 0) goto Label_6807; // 0x1a90 JumpB
	var_57_string = "Can't find main outdoor scene"; // 0x1a91 PushS
	Trace(var_57_string); // 0x1a92 Func
	var_55_object = 0; // 0x1a94 SetNull
	var_51_object = var_55_object; // 0x1a95 Mov
	return 4; // 0x1a96 Return
	
Label_6807:
	GetMap(var_55_object); // 0x1a97 ObjFunc
	var_51_object = var_55_object; // 0x1a99 Mov
	return 4; // 0x1a9a Return
}


func_6288(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0x1891 PushV
	var_164_string = "d2q01"; // 0x1892 MovS
	func_5659(var_163_int, var_164_string); // 0x1893 Call
	var_165_int = 2; // 0x1895 PushI
	var_166_bool = var_163_int == var_165_int; // 0x1896 Eq
	if(var_166_bool == 0) goto Label_6298; // 0x1897 JumpB
	var_161_bool = 1; // 0x1898 MovB
	return 0; // 0x1899 Return
	
Label_6298:
	var_161_bool = 0; // 0x189a MovB
	return 0; // 0x189b Return
}


func_5778()
{
	var_43_string = "KnowKaterina"; // 0x1693 PushS
	var_44_int = 1; // 0x1694 PushI
	SetVariable(var_43_string, var_44_int); // 0x1695 Func
	return 0; // 0x1697 Return
}


func_5784()
{
	var_47_string = "KnowKapella"; // 0x1699 PushS
	var_48_int = 1; // 0x169a PushI
	SetVariable(var_47_string, var_48_int); // 0x169b Func
	return 0; // 0x169d Return
}


func_6300(var_384_bool)
{
	var_386_int = 0; var_387_string = ""; // 0x189d PushV
	var_387_string = "ood1Kapella7"; // 0x189e MovS
	func_5659(var_386_int, var_387_string); // 0x189f Call
	var_388_int = 0; // 0x18a1 PushI
	var_389_bool = var_386_int == var_388_int; // 0x18a2 Eq
	if(var_389_bool == 0) goto Label_6310; // 0x18a3 JumpB
	var_384_bool = 1; // 0x18a4 MovB
	return 0; // 0x18a5 Return
	
Label_6310:
	var_384_bool = 0; // 0x18a6 MovB
	return 0; // 0x18a7 Return
}


func_6813(var_115_object, var_116_string, var_117_float)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_object = Obj(); var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_object = Obj(); var_126_bool = 0; // 0x1a9d PushV
	GetMainOutdoorScene(var_125_object); // 0x1a9e Func
	var_127_bool = var_125_object == 0; // 0x1aa0 NullEq
	if(var_127_bool == 0) goto Label_6822; // 0x1aa1 JumpB
	var_128_string = "Can't find main outdoor scene"; // 0x1aa2 PushS
	Trace(var_128_string); // 0x1aa3 Func
	return 8; // 0x1aa5 Return
	
Label_6822:
	GetLocator(var_116_string, var_126_bool, var_123_cvector, var_124_cvector); // 0x1aa6 ObjFunc
	var_129_bool = var_126_bool == 0; // 0x1aa8 Not
	if(var_129_bool == 0) goto Label_6832; // 0x1aa9 JumpB
	var_130_string = "Warning: outdoor scene locator "; // 0x1aaa PushS
	var_131_int = var_130_string + var_116_string; // 0x1aab Add
	var_132_string = " doesnt exist"; // 0x1aac PushS
	var_133_int = var_131_int + var_132_string; // 0x1aad Add
	Trace(var_133_int); // 0x1aae Func
	
Label_6832:
	GetMap(var_115_object); // 0x1ab0 ObjFunc
	var_134_bool = var_115_object == 0; // 0x1ab2 NullEq
	if(var_134_bool == 0) goto Label_6840; // 0x1ab3 JumpB
	var_135_string = "Can't find map"; // 0x1ab4 PushS
	Trace(var_135_string); // 0x1ab5 Func
	return 8; // 0x1ab7 Return
	
Label_6840:
	var_136_float = GetByIndex(var_123_cvector, 0); // 0x1ab8 PushE
	var_137_float = GetByIndex(var_123_cvector, 2); // 0x1ab9 PushE
	SetMapParams(var_136_float, var_137_float, var_117_float); // 0x1aba ObjFunc
	return 8; // 0x1abc Return
}


func_5790()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x169e PushV
	var_49_string = "d1q03IsKapella"; // 0x169f PushS
	var_50_int = 1; // 0x16a0 PushI
	SetVariable(var_49_string, var_50_int); // 0x16a1 Func
	var_51_object = Obj(); // 0x16a3 PushV
	func_6796(var_51_object); // 0x16a4 Call
	var_48_object = var_51_object; // 0x16a5 Mov
	var_58_string = "d1q03KapellaGotoOspina"; // 0x16a7 PushS
	var_59_string = "pt_map_ospina"; // 0x16a8 PushS
	var_60_int = 0; // 0x16a9 PushI
	var_61_int = 8641; // 0x16aa PushI
	var_62_float = 0; // 0x16ab PushV
	func_5713(var_62_float); // 0x16ac Call
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x16ae ObjFunc
	func_6863(); // 0x16b1 Call
	var_90_object = Obj(); var_91_string = ""; // 0x16b3 PushV
	var_91_string = "quest_d1_03"; // 0x16b4 MovS
	func_5664(var_90_object, var_91_string); // 0x16b5 Call
	return 2; // 0x16b7 Return
}


func_6312(var_400_bool)
{
	var_402_int = 0; var_403_string = ""; // 0x18a9 PushV
	var_403_string = "ood1Kapella8"; // 0x18aa MovS
	func_5659(var_402_int, var_403_string); // 0x18ab Call
	var_404_int = 0; // 0x18ad PushI
	var_405_bool = var_402_int == var_404_int; // 0x18ae Eq
	if(var_405_bool == 0) goto Label_6322; // 0x18af JumpB
	var_400_bool = 1; // 0x18b0 MovB
	return 0; // 0x18b1 Return
	
Label_6322:
	var_400_bool = 0; // 0x18b2 MovB
	return 0; // 0x18b3 Return
}


func_3241(var_2_object, var_136_string)
{
	var_137_bool = 0; // 0xcaa PushV
	func_5746(var_137_bool); // 0xcab Call
	var_138_bool = var_137_bool == 0; // 0xcad Not
	if(var_138_bool == 0) goto Label_3248; // 0xcae JumpB
	return 0; // 0xcaf Return
	
Label_3248:
	var_139_bool = var_136_string == var_2_object; // 0xcb0 Eq
	if(var_139_bool == 0) goto Label_3251; // 0xcb1 JumpB
	return 0; // 0xcb2 Return
	
Label_3251:
	var_140_string = ""; // 0xcb3 PushV
	var_140_string = var_136_string; // 0xcb4 Mov
	func_5624(var_140_string); // 0xcb5 Call
	var_2_object = var_136_string; // 0xcb7 TMov
	return 0; // 0xcb8 Return
}


func_180(var_2_object, var_49_string)
{
	var_50_bool = 0; // 0xb5 PushV
	func_5746(var_50_bool); // 0xb6 Call
	var_51_bool = var_50_bool == 0; // 0xb8 Not
	if(var_51_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_52_bool = var_49_string == var_2_object; // 0xbb Eq
	if(var_52_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_53_string = ""; // 0xbe PushV
	var_53_string = var_49_string; // 0xbf Mov
	func_5624(var_53_string); // 0xc0 Call
	var_2_object = var_49_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_6324(var_416_bool)
{
	var_418_int = 0; var_419_string = ""; // 0x18b5 PushV
	var_419_string = "ood1Kapella9"; // 0x18b6 MovS
	func_5659(var_418_int, var_419_string); // 0x18b7 Call
	var_420_int = 0; // 0x18b9 PushI
	var_421_bool = var_418_int == var_420_int; // 0x18ba Eq
	if(var_421_bool == 0) goto Label_6334; // 0x18bb JumpB
	var_416_bool = 1; // 0x18bc MovB
	return 0; // 0x18bd Return
	
Label_6334:
	var_416_bool = 0; // 0x18be MovB
	return 0; // 0x18bf Return
}


func_4788(var_0_object, var_607_int, var_608_object)
{
	var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; var_614_object = Obj(); var_615_bool = 0; var_616_int = 0; var_617_bool = 0; // 0x12b4 PushV
	var_0_object = var_608_object; // 0x12b5 TMov
	var_618_bool = 0; var_619_object = Obj(); // 0x12b6 PushV
	var_619_object = var_608_object; // 0x12b7 Mov
	func_5564(var_619_object); // 0x12b8 Call
	var_620_bool = var_618_bool == 0; // 0x12ba Not
	if(var_620_bool == 0) goto Label_4798; // 0x12bb JumpB
	var_607_int = -2; // 0x12bc MovI
	return 8; // 0x12bd Return
	
Label_4798:
	CreateDialog(var_614_object); // 0x12be Func
	var_621_int = 0; // 0x12c0 PushV
	func_5742(var_621_int); // 0x12c1 Call
	SetNPCName(var_621_int); // 0x12c3 ObjFunc
	var_622_string = ""; // 0x12c5 PushV
	func_5744(var_622_string); // 0x12c6 Call
	SetPhoto(var_622_string); // 0x12c8 ObjFunc
	var_623_int = 0; // 0x12ca PushV
	func_6846(var_623_int); // 0x12cb Call
	SetPlayerName(var_623_int); // 0x12cd ObjFunc
	var_616_int = -1; // 0x12cf MovI
	IsOverrideActive(var_615_bool); // 0x12d0 Func
	var_624_bool = var_615_bool; // 0x12d2 Push
	if(var_624_bool == 0) goto Label_4822; // 0x12d3 JumpB
	var_607_int = -2; // 0x12d4 MovI
	return 8; // 0x12d5 Return
	
Label_4822:
	DoDialog(var_614_object); // 0x12d6 Func
	var_625_object = Obj(); var_626_object = Obj(); // 0x12d8 PushV
	var_625_object = var_608_object; // 0x12d9 Mov
	var_626_object = var_614_object; // 0x12da Mov
	TaskCall(13); // 0x12db TaskCall
	func_4851(var_627_object, var_628_object, var_629_string, var_630_bool, var_625_object, var_626_object); // 0x12dc Call
	TaskReturn(); // 0x12dd TaskReturn
	IsDialogEnd(var_617_bool); // 0x12df ObjFunc
	
Label_4833:
	var_665_bool = var_617_bool == 0; // 0x12e1 Not
	if(var_665_bool == 0) goto Label_4840; // 0x12e2 JumpB
	sync(); // 0x12e3 Func
	IsDialogEnd(var_617_bool); // 0x12e5 ObjFunc
	goto Label_4833; // 0x12e7 Jump
	
Label_4840:
	var_666_object = Obj(); // 0x12e8 PushV
	var_666_object = var_608_object; // 0x12e9 Mov
	func_5620(); // 0x12ea Call
	StopDialog(var_614_object); // 0x12ec Func
	GetReturnValue(var_616_int); // 0x12ee ObjFunc
	var_607_int = var_616_int; // 0x12f0 Mov
	return 8; // 0x12f1 Return
}


func_5817()
{
	var_208_string = "ood1Kapella6"; // 0x16ba PushS
	var_209_int = 1; // 0x16bb PushI
	SetVariable(var_208_string, var_209_int); // 0x16bc Func
	return 0; // 0x16be Return
}


func_6846(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x1abe PushV
	var_96_string = "player"; // 0x1abf PushS
	GetVariable(var_96_string, var_95_int); // 0x1ac0 Func
	var_97_int = 0; // 0x1ac2 PushI
	var_98_bool = var_95_int == var_97_int; // 0x1ac3 Eq
	if(var_98_bool == 0) goto Label_6856; // 0x1ac4 JumpB
	var_93_int = 200001; // 0x1ac5 MovI
	return 2; // 0x1ac6 Return
	
Label_6856:
	var_99_int = 1; // 0x1ac8 PushI
	var_100_bool = var_95_int == var_99_int; // 0x1ac9 Eq
	if(var_100_bool == 0) goto Label_6861; // 0x1aca JumpB
	var_93_int = 200002; // 0x1acb MovI
	return 2; // 0x1acc Return
	
Label_6861:
	var_93_int = 200003; // 0x1acd MovI
	return 2; // 0x1ace Return
}


func_5823(var_765_object)
{
	var_767_string = "funduk3 is given"; // 0x16c0 PushS
	Trace(var_767_string); // 0x16c1 Func
	var_768_object = Obj(); var_769_string = ""; var_770_int = 0; // 0x16c3 PushV
	var_768_object = var_765_object; // 0x16c4 Mov
	var_769_string = "funduk"; // 0x16c5 MovS
	var_770_int = 3; // 0x16c6 MovI
	func_5688(var_768_object, var_769_string, var_770_int); // 0x16c7 Call
	return 0; // 0x16c9 Return
}


func_6336(var_432_bool)
{
	var_434_int = 0; var_435_string = ""; // 0x18c1 PushV
	var_435_string = "ood1Kapella10"; // 0x18c2 MovS
	func_5659(var_434_int, var_435_string); // 0x18c3 Call
	var_436_int = 0; // 0x18c5 PushI
	var_437_bool = var_434_int == var_436_int; // 0x18c6 Eq
	if(var_437_bool == 0) goto Label_6346; // 0x18c7 JumpB
	var_432_bool = 1; // 0x18c8 MovB
	return 0; // 0x18c9 Return
	
Label_6346:
	var_432_bool = 0; // 0x18ca MovB
	return 0; // 0x18cb Return
}


func_5834()
{
	var_91_string = "playsound"; // 0x16cb PushS
	var_92_string = "giveitem"; // 0x16cc PushS
	TriggerWorld(var_91_string, var_92_string); // 0x16cd Func
	return 0; // 0x16cf Return
}


func_6348(var_448_bool)
{
	var_450_int = 0; var_451_string = ""; // 0x18cd PushV
	var_451_string = "ood1Kapella11"; // 0x18ce MovS
	func_5659(var_450_int, var_451_string); // 0x18cf Call
	var_452_int = 0; // 0x18d1 PushI
	var_453_bool = var_450_int == var_452_int; // 0x18d2 Eq
	if(var_453_bool == 0) goto Label_6358; // 0x18d3 JumpB
	var_448_bool = 1; // 0x18d4 MovB
	return 0; // 0x18d5 Return
	
Label_6358:
	var_448_bool = 0; // 0x18d6 MovB
	return 0; // 0x18d7 Return
}


func_6863()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1acf PushV
	var_67_string = "Adding diary entry"; // 0x1ad0 PushS
	Trace(var_67_string); // 0x1ad1 Func
	var_68_int = 37; // 0x1ad3 PushI
	var_69_int = 2; // 0x1ad4 PushI
	var_70_int = 12119; // 0x1ad5 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x1ad6 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1ad8 PushV
	var_72_object = var_66_object; // 0x1ad9 Mov
	var_73_int = -1; // 0x1ada MovI
	func_6767(var_71_bool, var_72_object, var_73_int); // 0x1adb Call
	return 2; // 0x1add Return
}


func_5840()
{
	var_43_string = "ood2Kapella1"; // 0x16d1 PushS
	var_44_int = 1; // 0x16d2 PushI
	SetVariable(var_43_string, var_44_int); // 0x16d3 Func
	return 0; // 0x16d5 Return
}


func_5846()
{
	var_128_string = "ood2Kapella2"; // 0x16d7 PushS
	var_129_int = 1; // 0x16d8 PushI
	SetVariable(var_128_string, var_129_int); // 0x16d9 Func
	return 0; // 0x16db Return
}


func_6360(var_464_bool)
{
	var_466_int = 0; var_467_string = ""; // 0x18d9 PushV
	var_467_string = "ood1Kapella12"; // 0x18da MovS
	func_5659(var_466_int, var_467_string); // 0x18db Call
	var_468_int = 0; // 0x18dd PushI
	var_469_bool = var_466_int == var_468_int; // 0x18de Eq
	if(var_469_bool == 0) goto Label_6370; // 0x18df JumpB
	var_464_bool = 1; // 0x18e0 MovB
	return 0; // 0x18e1 Return
	
Label_6370:
	var_464_bool = 0; // 0x18e2 MovB
	return 0; // 0x18e3 Return
}


func_5852()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x16dc PushV
	var_49_string = "d2q01"; // 0x16dd PushS
	var_50_int = 3; // 0x16de PushI
	SetVariable(var_49_string, var_50_int); // 0x16df Func
	var_51_object = Obj(); // 0x16e1 PushV
	func_6796(var_51_object); // 0x16e2 Call
	var_48_object = var_51_object; // 0x16e3 Mov
	var_58_string = "d2q01KapellaGotoSpi4ka"; // 0x16e5 PushS
	var_59_string = "pt_map_spi4ka"; // 0x16e6 PushS
	var_60_int = 1; // 0x16e7 PushI
	var_61_int = 11389; // 0x16e8 PushI
	var_62_float = 0; // 0x16e9 PushV
	func_5713(var_62_float); // 0x16ea Call
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x16ec ObjFunc
	func_6879(); // 0x16ef Call
	return 2; // 0x16f1 Return
}


func_6879()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1adf PushV
	var_67_string = "Adding diary entry"; // 0x1ae0 PushS
	Trace(var_67_string); // 0x1ae1 Func
	var_68_int = 52; // 0x1ae3 PushI
	var_69_int = 1; // 0x1ae4 PushI
	var_70_int = 12134; // 0x1ae5 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x1ae6 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1ae8 PushV
	var_72_object = var_66_object; // 0x1ae9 Mov
	var_73_int = 10; // 0x1aea MovI
	func_6767(var_71_bool, var_72_object, var_73_int); // 0x1aeb Call
	return 2; // 0x1aed Return
}


func_6372(var_233_bool)
{
	var_235_int = 0; var_236_string = ""; // 0x18e5 PushV
	var_236_string = "d3q03"; // 0x18e6 MovS
	func_5659(var_235_int, var_236_string); // 0x18e7 Call
	var_239_int = 0; // 0x18e9 PushI
	var_240_bool = var_235_int == var_239_int; // 0x18ea Eq
	if(var_240_bool == 0) goto Label_6382; // 0x18eb JumpB
	var_233_bool = 1; // 0x18ec MovB
	return 0; // 0x18ed Return
	
Label_6382:
	var_233_bool = 0; // 0x18ee MovB
	return 0; // 0x18ef Return
}


func_6895()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1aef PushV
	var_67_string = "Adding diary entry"; // 0x1af0 PushS
	Trace(var_67_string); // 0x1af1 Func
	var_68_int = 27; // 0x1af3 PushI
	var_69_int = 2; // 0x1af4 PushI
	var_70_int = 3367; // 0x1af5 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x1af6 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1af8 PushV
	var_72_object = var_66_object; // 0x1af9 Mov
	var_73_int = -1; // 0x1afa MovI
	func_6767(var_71_bool, var_72_object, var_73_int); // 0x1afb Call
	return 2; // 0x1afd Return
}


func_6384(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x18f1 PushV
	var_244_string = "ood3Kapella1"; // 0x18f2 MovS
	func_5659(var_243_int, var_244_string); // 0x18f3 Call
	var_245_int = 0; // 0x18f5 PushI
	var_246_bool = var_243_int == var_245_int; // 0x18f6 Eq
	if(var_246_bool == 0) goto Label_6394; // 0x18f7 JumpB
	var_241_bool = 1; // 0x18f8 MovB
	return 0; // 0x18f9 Return
	
Label_6394:
	var_241_bool = 0; // 0x18fa MovB
	return 0; // 0x18fb Return
}


func_5875()
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0; // 0x16f4 PushV
	var_103_object = Obj(); // 0x16f5 PushV
	func_6796(var_103_object); // 0x16f6 Call
	var_100_object = var_103_object; // 0x16f7 Mov
	var_101_string = "pt_map_ospina"; // 0x16f9 MovS
	var_102_float = 2; // 0x16fa MovI
	func_6813(var_100_object, var_101_string, var_102_float); // 0x16fb Call
	var_123_object = Obj(); // 0x16fd PushV
	func_6796(var_123_object); // 0x16fe Call
	ShowMap(var_123_object); // 0x1700 ObjFunc
	return 0; // 0x1702 Return
}


func_4851(var_0_object, var_1_object, var_2_object, var_3_object, var_625_object, var_626_object)
{
	var_0_object = var_626_object; // 0x12f4 TMov
	var_1_object = var_625_object; // 0x12f5 TMov
	var_3_object = 0; // 0x12f6 TMovB
	var_631_int = 1; // 0x12f7 PushI
	if(var_631_int == 0) goto Label_4893; // 0x12f8 JumpB
	var_632_string = ""; // 0x12f9 PushV
	var_632_string = "Neutral"; // 0x12fa MovS
	func_4923(var_626_object, var_632_string); // 0x12fb Call
	var_637_int = 11245; // 0x12fd PushI
	SetMessage(var_637_int); // 0x12fe TObjFunc
	ClearReplies(); // 0x1300 TObjFunc
	var_638_bool = 0; // 0x1302 PushV
	var_638_bool = 0; // 0x1303 MovB
	var_639_bool = 0; var_640_object = Obj(); // 0x1304 PushV
	var_640_object = var_1_object; // 0x1305 MovT
	func_6651(var_640_object); // 0x1306 Call
	if(var_639_bool == 0) goto Label_4879; // 0x1308 JumpB
	var_645_bool = 0; var_646_object = Obj(); // 0x1309 PushV
	var_646_object = var_1_object; // 0x130a MovT
	func_6663(var_646_object); // 0x130b Call
	if(var_645_bool == 0) goto Label_4879; // 0x130d JumpB
	var_638_bool = 1; // 0x130e MovB
	
Label_4879:
	if(var_638_bool == 0) goto Label_4885; // 0x130f JumpB
	var_651_int = 11247; // 0x1310 PushI
	var_652_int = 12438; // 0x1311 PushI
	var_653_int = 12437; // 0x1312 PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x1313 TObjFunc
	
Label_4885:
	var_654_int = 11246; // 0x1315 PushI
	var_655_int = -1; // 0x1316 PushI
	var_656_int = 12436; // 0x1317 PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x1318 TObjFunc
	goto Label_4893; // 0x131a Jump
	
Label_4893:
	var_657_bool = 0; // 0x131d PushV
	func_5746(var_657_bool); // 0x131e Call
	if(var_657_bool == 0) goto Label_4908; // 0x1320 JumpB
	
Label_4897:
	lshWaitForAnimEnd(); // 0x1321 Func
	var_658_object = var_3_object; // 0x1323 PushT
	if(var_658_object == 0) goto Label_4902; // 0x1324 JumpB
	goto Label_4907; // 0x1325 Jump
	
Label_4907:
	goto Label_4922; // 0x132b Jump
	
Label_4922:
	return 0; // 0x133a Return
	
Label_4902:
	var_659_string = ""; // 0x1326 PushV
	var_659_string = var_2_object; // 0x1327 MovT
	func_5624(var_659_string); // 0x1328 Call
	goto Label_4897; // 0x132a Jump
	
Label_4908:
	var_660_string = "all"; // 0x132c PushS
	var_661_string = "idle"; // 0x132d PushS
	PlayAnimation(var_660_string, var_661_string); // 0x132e Func
	
Label_4912:
	WaitForAnimEnd(); // 0x1330 Func
	var_662_object = var_3_object; // 0x1332 PushT
	if(var_662_object == 0) goto Label_4917; // 0x1333 JumpB
	goto Label_4922; // 0x1334 Jump
	
Label_4917:
	var_663_string = "all"; // 0x1335 PushS
	var_664_string = "idle"; // 0x1336 PushS
	PlayAnimation(var_663_string, var_664_string); // 0x1337 Func
	goto Label_4912; // 0x1339 Jump
}


func_6396(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0x18fd PushV
	var_278_string = "d3q03"; // 0x18fe MovS
	func_5659(var_277_int, var_278_string); // 0x18ff Call
	var_279_int = 2; // 0x1901 PushI
	var_280_bool = var_277_int == var_279_int; // 0x1902 Eq
	if(var_280_bool == 0) goto Label_6406; // 0x1903 JumpB
	var_275_bool = 1; // 0x1904 MovB
	return 0; // 0x1905 Return
	
Label_6406:
	var_275_bool = 0; // 0x1906 MovB
	return 0; // 0x1907 Return
}


func_6911()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x1aff PushV
	var_92_string = "Adding diary entry"; // 0x1b00 PushS
	Trace(var_92_string); // 0x1b01 Func
	var_93_int = 83; // 0x1b03 PushI
	var_94_int = 2; // 0x1b04 PushI
	var_95_int = 12165; // 0x1b05 PushI
	CreateDiaryEntry(var_91_object, var_93_int, var_94_int, var_95_int); // 0x1b06 Func
	var_96_bool = 0; var_97_object = Obj(); var_98_int = 0; // 0x1b08 PushV
	var_97_object = var_91_object; // 0x1b09 Mov
	var_98_int = 27; // 0x1b0a MovI
	func_6767(var_96_bool, var_97_object, var_98_int); // 0x1b0b Call
	return 2; // 0x1b0d Return
}


func_5891()
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0; // 0x1704 PushV
	var_95_object = Obj(); // 0x1705 PushV
	func_6796(var_95_object); // 0x1706 Call
	var_92_object = var_95_object; // 0x1707 Mov
	var_93_string = "pt_map_spi4ka"; // 0x1709 MovS
	var_94_float = 2; // 0x170a MovI
	func_6813(var_92_object, var_93_string, var_94_float); // 0x170b Call
	var_115_object = Obj(); // 0x170d PushV
	func_6796(var_115_object); // 0x170e Call
	ShowMap(var_115_object); // 0x1710 ObjFunc
	return 0; // 0x1712 Return
}


func_6408(var_281_bool)
{
	var_283_int = 0; var_284_string = ""; // 0x1909 PushV
	var_284_string = "ood3Kapella2"; // 0x190a MovS
	func_5659(var_283_int, var_284_string); // 0x190b Call
	var_285_int = 0; // 0x190d PushI
	var_286_bool = var_283_int == var_285_int; // 0x190e Eq
	if(var_286_bool == 0) goto Label_6418; // 0x190f JumpB
	var_281_bool = 1; // 0x1910 MovB
	return 0; // 0x1911 Return
	
Label_6418:
	var_281_bool = 0; // 0x1912 MovB
	return 0; // 0x1913 Return
}


func_6927()
{
	var_174_object = Obj(); var_175_object = Obj(); // 0x1b0f PushV
	var_176_string = "Adding diary entry"; // 0x1b10 PushS
	Trace(var_176_string); // 0x1b11 Func
	var_177_int = 85; // 0x1b13 PushI
	var_178_int = 2; // 0x1b14 PushI
	var_179_int = 12167; // 0x1b15 PushI
	CreateDiaryEntry(var_175_object, var_177_int, var_178_int, var_179_int); // 0x1b16 Func
	var_180_bool = 0; var_181_object = Obj(); var_182_int = 0; // 0x1b18 PushV
	var_181_object = var_175_object; // 0x1b19 Mov
	var_182_int = 27; // 0x1b1a MovI
	func_6767(var_180_bool, var_181_object, var_182_int); // 0x1b1b Call
	return 2; // 0x1b1d Return
}


func_5907()
{
	var_218_string = "ood1Kapella7"; // 0x1714 PushS
	var_219_int = 1; // 0x1715 PushI
	SetVariable(var_218_string, var_219_int); // 0x1716 Func
	return 0; // 0x1718 Return
}


func_6420(var_310_bool)
{
	var_312_int = 0; var_313_string = ""; // 0x1915 PushV
	var_313_string = "ood3Kapella3"; // 0x1916 MovS
	func_5659(var_312_int, var_313_string); // 0x1917 Call
	var_314_int = 0; // 0x1919 PushI
	var_315_bool = var_312_int == var_314_int; // 0x191a Eq
	if(var_315_bool == 0) goto Label_6430; // 0x191b JumpB
	var_310_bool = 1; // 0x191c MovB
	return 0; // 0x191d Return
	
Label_6430:
	var_310_bool = 0; // 0x191e MovB
	return 0; // 0x191f Return
}


func_1302(var_2_object, var_273_string)
{
	var_274_bool = 0; // 0x517 PushV
	func_5746(var_274_bool); // 0x518 Call
	var_275_bool = var_274_bool == 0; // 0x51a Not
	if(var_275_bool == 0) goto Label_1309; // 0x51b JumpB
	return 0; // 0x51c Return
	
Label_1309:
	var_276_bool = var_273_string == var_2_object; // 0x51d Eq
	if(var_276_bool == 0) goto Label_1312; // 0x51e JumpB
	return 0; // 0x51f Return
	
Label_1312:
	var_277_string = ""; // 0x520 PushV
	var_277_string = var_273_string; // 0x521 Mov
	func_5624(var_277_string); // 0x522 Call
	var_2_object = var_273_string; // 0x524 TMov
	return 0; // 0x525 Return
}


func_5913()
{
	var_224_string = "ood1Kapella8"; // 0x171a PushS
	var_225_int = 1; // 0x171b PushI
	SetVariable(var_224_string, var_225_int); // 0x171c Func
	return 0; // 0x171e Return
}


func_5919()
{
	var_230_string = "ood1Kapella9"; // 0x1720 PushS
	var_231_int = 1; // 0x1721 PushI
	SetVariable(var_230_string, var_231_int); // 0x1722 Func
	return 0; // 0x1724 Return
}


func_6432(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0x1921 PushV
	var_322_string = "ood3Kapella4"; // 0x1922 MovS
	func_5659(var_321_int, var_322_string); // 0x1923 Call
	var_323_int = 0; // 0x1925 PushI
	var_324_bool = var_321_int == var_323_int; // 0x1926 Eq
	if(var_324_bool == 0) goto Label_6442; // 0x1927 JumpB
	var_319_bool = 1; // 0x1928 MovB
	return 0; // 0x1929 Return
	
Label_6442:
	var_319_bool = 0; // 0x192a MovB
	return 0; // 0x192b Return
}


func_6943()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x1b1f PushV
	var_47_string = "Adding diary entry"; // 0x1b20 PushS
	Trace(var_47_string); // 0x1b21 Func
	var_48_int = 127; // 0x1b23 PushI
	var_49_int = 2; // 0x1b24 PushI
	var_50_int = 13772; // 0x1b25 PushI
	CreateDiaryEntry(var_46_object, var_48_int, var_49_int, var_50_int); // 0x1b26 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x1b28 PushV
	var_52_object = var_46_object; // 0x1b29 Mov
	var_53_int = -1; // 0x1b2a MovI
	func_6767(var_51_bool, var_52_object, var_53_int); // 0x1b2b Call
	return 2; // 0x1b2d Return
}


func_3875(var_2_object, var_247_string)
{
	var_248_bool = 0; // 0xf24 PushV
	func_5746(var_248_bool); // 0xf25 Call
	var_249_bool = var_248_bool == 0; // 0xf27 Not
	if(var_249_bool == 0) goto Label_3882; // 0xf28 JumpB
	return 0; // 0xf29 Return
	
Label_3882:
	var_250_bool = var_247_string == var_2_object; // 0xf2a Eq
	if(var_250_bool == 0) goto Label_3885; // 0xf2b JumpB
	return 0; // 0xf2c Return
	
Label_3885:
	var_251_string = ""; // 0xf2d PushV
	var_251_string = var_247_string; // 0xf2e Mov
	func_5624(var_251_string); // 0xf2f Call
	var_2_object = var_247_string; // 0xf31 TMov
	return 0; // 0xf32 Return
}


func_5925()
{
	var_240_string = "ood1Kapella10"; // 0x1726 PushS
	var_241_int = 1; // 0x1727 PushI
	SetVariable(var_240_string, var_241_int); // 0x1728 Func
	return 0; // 0x172a Return
}


func_5931()
{
	var_254_string = "ood1Kapella12"; // 0x172c PushS
	var_255_int = 1; // 0x172d PushI
	SetVariable(var_254_string, var_255_int); // 0x172e Func
	return 0; // 0x1730 Return
}


func_6444(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x192d PushV
	var_331_string = "ood3Kapella5"; // 0x192e MovS
	func_5659(var_330_int, var_331_string); // 0x192f Call
	var_332_int = 0; // 0x1931 PushI
	var_333_bool = var_330_int == var_332_int; // 0x1932 Eq
	if(var_333_bool == 0) goto Label_6454; // 0x1933 JumpB
	var_328_bool = 1; // 0x1934 MovB
	return 0; // 0x1935 Return
	
Label_6454:
	var_328_bool = 0; // 0x1936 MovB
	return 0; // 0x1937 Return
}


func_6959()
{
	var_35_bool = GlobalVars[1]; // 0x1b2f PushGE
	var_35_bool = 0; // 0x1b30 MovB
	GlobalVars[1] = var_35_bool; // 0x1b31 PopGE
	return 0; // 0x1b32 Return
}


func_5937()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x1731 PushV
	var_49_string = "d3q03"; // 0x1732 PushS
	var_50_int = 1; // 0x1733 PushI
	SetVariable(var_49_string, var_50_int); // 0x1734 Func
	var_51_object = Obj(); // 0x1736 PushV
	func_6796(var_51_object); // 0x1737 Call
	var_48_object = var_51_object; // 0x1738 Mov
	var_58_string = "d3q03KapellaBoyLocation"; // 0x173a PushS
	var_59_string = "pt_d3q03_boy"; // 0x173b PushS
	var_60_int = 0; // 0x173c PushI
	var_61_int = 11156; // 0x173d PushI
	var_62_float = 0; // 0x173e PushV
	func_5713(var_62_float); // 0x173f Call
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x1741 ObjFunc
	func_6895(); // 0x1744 Call
	func_6911(); // 0x1747 Call
	var_99_object = Obj(); var_100_string = ""; // 0x1749 PushV
	var_100_string = "quest_d3_03"; // 0x174a MovS
	func_5664(var_99_object, var_100_string); // 0x174b Call
	var_107_bool = 0; var_108_string = ""; var_109_string = ""; // 0x174d PushV
	var_108_string = "quest_d3_03"; // 0x174e MovS
	var_109_string = "boy"; // 0x174f MovS
	func_5701(var_107_bool, var_108_string, var_109_string); // 0x1750 Call
	return 2; // 0x1752 Return
}


func_6963(var_36_object)
{
	var_37_bool = GlobalVars[1]; // 0x1b34 PushGE
	var_38_bool = var_37_bool == 0; // 0x1b35 Not
	if(var_38_bool == 0) goto Label_6976; // 0x1b36 JumpB
	var_39_int = 0; var_40_object = Obj(); // 0x1b37 PushV
	var_40_object = var_36_object; // 0x1b38 Mov
	TaskCall(2); // 0x1b39 TaskCall
	func_49(var_41_object, var_39_int, var_40_object); // 0x1b3a Call
	TaskReturn(); // 0x1b3b TaskReturn
	var_149_bool = GlobalVars[1]; // 0x1b3d PushGE
	var_149_bool = 1; // 0x1b3e MovB
	GlobalVars[1] = var_149_bool; // 0x1b3f PopGE
	
Label_6976:
	var_150_bool = 0; var_151_int = 0; // 0x1b40 PushV
	var_151_int = 1; // 0x1b41 MovI
	func_5727(var_150_bool, var_151_int); // 0x1b42 Call
	if(var_150_bool == 0) goto Label_6988; // 0x1b44 JumpB
	var_158_int = 0; var_159_object = Obj(); // 0x1b45 PushV
	var_159_object = var_36_object; // 0x1b46 Mov
	TaskCall(6); // 0x1b47 TaskCall
	func_933(var_160_object, var_158_int, var_159_object); // 0x1b48 Call
	TaskReturn(); // 0x1b49 TaskReturn
	return 0; // 0x1b4b Return
	
Label_6988:
	var_401_bool = 0; var_402_int = 0; // 0x1b4c PushV
	var_402_int = 2; // 0x1b4d MovI
	func_5727(var_401_bool, var_402_int); // 0x1b4e Call
	if(var_401_bool == 0) goto Label_7000; // 0x1b50 JumpB
	var_403_int = 0; var_404_object = Obj(); // 0x1b51 PushV
	var_404_object = var_36_object; // 0x1b52 Mov
	TaskCall(8); // 0x1b53 TaskCall
	func_3071(var_405_object, var_403_int, var_404_object); // 0x1b54 Call
	TaskReturn(); // 0x1b55 TaskReturn
	return 0; // 0x1b57 Return
	
Label_7000:
	var_472_bool = 0; var_473_int = 0; // 0x1b58 PushV
	var_473_int = 3; // 0x1b59 MovI
	func_5727(var_472_bool, var_473_int); // 0x1b5a Call
	if(var_472_bool == 0) goto Label_7012; // 0x1b5c JumpB
	var_474_int = 0; var_475_object = Obj(); // 0x1b5d PushV
	var_475_object = var_36_object; // 0x1b5e Mov
	TaskCall(10); // 0x1b5f TaskCall
	func_3633(var_476_object, var_474_int, var_475_object); // 0x1b60 Call
	TaskReturn(); // 0x1b61 TaskReturn
	return 0; // 0x1b63 Return
	
Label_7012:
	var_605_bool = 0; var_606_int = 0; // 0x1b64 PushV
	var_606_int = 4; // 0x1b65 MovI
	func_5727(var_605_bool, var_606_int); // 0x1b66 Call
	if(var_605_bool == 0) goto Label_7024; // 0x1b68 JumpB
	var_607_int = 0; var_608_object = Obj(); // 0x1b69 PushV
	var_608_object = var_36_object; // 0x1b6a Mov
	TaskCall(12); // 0x1b6b TaskCall
	func_4788(var_609_object, var_607_int, var_608_object); // 0x1b6c Call
	TaskReturn(); // 0x1b6d TaskReturn
	return 0; // 0x1b6f Return
	
Label_7024:
	var_667_bool = 0; var_668_int = 0; // 0x1b70 PushV
	var_668_int = 6; // 0x1b71 MovI
	func_5727(var_667_bool, var_668_int); // 0x1b72 Call
	if(var_667_bool == 0) goto Label_7036; // 0x1b74 JumpB
	var_669_int = 0; var_670_object = Obj(); // 0x1b75 PushV
	var_670_object = var_36_object; // 0x1b76 Mov
	TaskCall(4); // 0x1b77 TaskCall
	func_350(var_671_object, var_669_int, var_670_object); // 0x1b78 Call
	TaskReturn(); // 0x1b79 TaskReturn
	return 0; // 0x1b7b Return
	
Label_7036:
	var_771_bool = 0; var_772_int = 0; // 0x1b7c PushV
	var_772_int = 8; // 0x1b7d MovI
	func_5727(var_771_bool, var_772_int); // 0x1b7e Call
	if(var_771_bool == 0) goto Label_7048; // 0x1b80 JumpB
	var_773_int = 0; var_774_object = Obj(); // 0x1b81 PushV
	var_774_object = var_36_object; // 0x1b82 Mov
	TaskCall(14); // 0x1b83 TaskCall
	func_5057(var_775_object, var_773_int, var_774_object); // 0x1b84 Call
	TaskReturn(); // 0x1b85 TaskReturn
	return 0; // 0x1b87 Return
	
Label_7048:
	var_857_bool = 0; // 0x1b88 PushV
	func_5733(var_857_bool); // 0x1b89 Call
	return 0; // 0x1b8b Return
}


func_6456(var_448_bool)
{
	var_450_int = 0; var_451_string = ""; // 0x1939 PushV
	var_451_string = "d3q01"; // 0x193a MovS
	func_5659(var_450_int, var_451_string); // 0x193b Call
	var_452_int = -1; // 0x193d PushI
	var_453_bool = var_450_int == var_452_int; // 0x193e Eq
	if(var_453_bool == 0) goto Label_6466; // 0x193f JumpB
	var_448_bool = 1; // 0x1940 MovB
	return 0; // 0x1941 Return
	
Label_6466:
	var_448_bool = 0; // 0x1942 MovB
	return 0; // 0x1943 Return
}


func_4923(var_2_object, var_47_string)
{
	var_48_bool = 0; // 0x133c PushV
	func_5746(var_48_bool); // 0x133d Call
	var_49_bool = var_48_bool == 0; // 0x133f Not
	if(var_49_bool == 0) goto Label_4930; // 0x1340 JumpB
	return 0; // 0x1341 Return
	
Label_4930:
	var_50_bool = var_47_string == var_2_object; // 0x1342 Eq
	if(var_50_bool == 0) goto Label_4933; // 0x1343 JumpB
	return 0; // 0x1344 Return
	
Label_4933:
	var_51_string = ""; // 0x1345 PushV
	var_51_string = var_47_string; // 0x1346 Mov
	func_5624(var_51_string); // 0x1347 Call
	var_2_object = var_47_string; // 0x1349 TMov
	return 0; // 0x134a Return
}


func_6468(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj(); // 0x1945 PushV
	var_290_object = var_288_object; // 0x1946 Mov
	func_6747(var_290_object); // 0x1947 Call
	if(var_289_bool == 0) goto Label_6476; // 0x1949 JumpB
	var_287_bool = 1; // 0x194a MovB
	return 0; // 0x194b Return
	
Label_6476:
	var_287_bool = 0; // 0x194c MovB
	return 0; // 0x194d Return
}


func_6478(var_302_bool)
{
	var_302_bool = 1; // 0x194f MovB
	return 0; // 0x1950 Return
}


func_6483(var_170_bool)
{
	var_172_int = 0; var_173_string = ""; // 0x1954 PushV
	var_173_string = "d6q02"; // 0x1955 MovS
	func_5659(var_172_int, var_173_string); // 0x1956 Call
	var_174_int = 0; // 0x1958 PushI
	var_175_bool = var_172_int == var_174_int; // 0x1959 Eq
	if(var_175_bool == 0) goto Label_6493; // 0x195a JumpB
	var_170_bool = 1; // 0x195b MovB
	return 0; // 0x195c Return
	
Label_6493:
	var_170_bool = 0; // 0x195d MovB
	return 0; // 0x195e Return
}


func_5972()
{
	var_43_string = "ood3Kapella1"; // 0x1755 PushS
	var_44_int = 1; // 0x1756 PushI
	SetVariable(var_43_string, var_44_int); // 0x1757 Func
	return 0; // 0x1759 Return
}


func_5978()
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0; // 0x175b PushV
	var_118_object = Obj(); // 0x175c PushV
	func_6796(var_118_object); // 0x175d Call
	var_115_object = var_118_object; // 0x175e Mov
	var_116_string = "pt_d3q03_boy"; // 0x1760 MovS
	var_117_float = 2; // 0x1761 MovI
	func_6813(var_115_object, var_116_string, var_117_float); // 0x1762 Call
	var_138_object = Obj(); // 0x1764 PushV
	func_6796(var_138_object); // 0x1765 Call
	ShowMap(var_138_object); // 0x1767 ObjFunc
	return 0; // 0x1769 Return
}


func_350(var_0_object, var_669_int, var_670_object)
{
	var_672_object = Obj(); var_673_bool = 0; var_674_int = 0; var_675_bool = 0; var_676_object = Obj(); var_677_bool = 0; var_678_int = 0; var_679_bool = 0; // 0x15e PushV
	var_0_object = var_670_object; // 0x15f TMov
	var_680_bool = 0; var_681_object = Obj(); // 0x160 PushV
	var_681_object = var_670_object; // 0x161 Mov
	func_5564(var_681_object); // 0x162 Call
	var_682_bool = var_680_bool == 0; // 0x164 Not
	if(var_682_bool == 0) goto Label_360; // 0x165 JumpB
	var_669_int = -2; // 0x166 MovI
	return 8; // 0x167 Return
	
Label_360:
	CreateDialog(var_676_object); // 0x168 Func
	var_683_int = 0; // 0x16a PushV
	func_5742(var_683_int); // 0x16b Call
	SetNPCName(var_683_int); // 0x16d ObjFunc
	var_684_string = ""; // 0x16f PushV
	func_5744(var_684_string); // 0x170 Call
	SetPhoto(var_684_string); // 0x172 ObjFunc
	var_685_int = 0; // 0x174 PushV
	func_6846(var_685_int); // 0x175 Call
	SetPlayerName(var_685_int); // 0x177 ObjFunc
	var_678_int = -1; // 0x179 MovI
	IsOverrideActive(var_677_bool); // 0x17a Func
	var_686_bool = var_677_bool; // 0x17c Push
	if(var_686_bool == 0) goto Label_384; // 0x17d JumpB
	var_669_int = -2; // 0x17e MovI
	return 8; // 0x17f Return
	
Label_384:
	DoDialog(var_676_object); // 0x180 Func
	var_687_object = Obj(); var_688_object = Obj(); // 0x182 PushV
	var_687_object = var_670_object; // 0x183 Mov
	var_688_object = var_676_object; // 0x184 Mov
	TaskCall(5); // 0x185 TaskCall
	func_413(var_689_object, var_690_object, var_691_string, var_692_bool, var_687_object, var_688_object); // 0x186 Call
	TaskReturn(); // 0x187 TaskReturn
	IsDialogEnd(var_679_bool); // 0x189 ObjFunc
	
Label_395:
	var_769_bool = var_679_bool == 0; // 0x18b Not
	if(var_769_bool == 0) goto Label_402; // 0x18c JumpB
	sync(); // 0x18d Func
	IsDialogEnd(var_679_bool); // 0x18f ObjFunc
	goto Label_395; // 0x191 Jump
	
Label_402:
	var_770_object = Obj(); // 0x192 PushV
	var_770_object = var_670_object; // 0x193 Mov
	func_5620(); // 0x194 Call
	StopDialog(var_676_object); // 0x196 Func
	GetReturnValue(var_678_int); // 0x198 ObjFunc
	var_669_int = var_678_int; // 0x19a Mov
	return 8; // 0x19b Return
}


func_6495(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x1960 PushV
	var_125_string = "d6q02"; // 0x1961 MovS
	func_5659(var_124_int, var_125_string); // 0x1962 Call
	var_126_int = 1000; // 0x1964 PushI
	var_127_bool = var_124_int == var_126_int; // 0x1965 Eq
	if(var_127_bool == 0) goto Label_6505; // 0x1966 JumpB
	var_122_bool = 1; // 0x1967 MovB
	return 0; // 0x1968 Return
	
Label_6505:
	var_122_bool = 0; // 0x1969 MovB
	return 0; // 0x196a Return
}


func_5994()
{
	var_161_string = "ood3Kapella2"; // 0x176b PushS
	var_162_int = 1; // 0x176c PushI
	SetVariable(var_161_string, var_162_int); // 0x176d Func
	return 0; // 0x176f Return
}


func_6507(var_129_bool)
{
	var_131_int = 0; var_132_string = ""; // 0x196c PushV
	var_132_string = "d6q02"; // 0x196d MovS
	func_5659(var_131_int, var_132_string); // 0x196e Call
	var_133_int = -1; // 0x1970 PushI
	var_134_bool = var_131_int == var_133_int; // 0x1971 Eq
	if(var_134_bool == 0) goto Label_6517; // 0x1972 JumpB
	var_129_bool = 1; // 0x1973 MovB
	return 0; // 0x1974 Return
	
Label_6517:
	var_129_bool = 0; // 0x1975 MovB
	return 0; // 0x1976 Return
}


func_6000()
{
	var_165_object = Obj(); var_166_object = Obj(); var_167_object = Obj(); var_168_object = Obj(); // 0x1770 PushV
	var_169_object = Obj(); // 0x1771 PushV
	func_6796(var_169_object); // 0x1772 Call
	var_167_object = var_169_object; // 0x1773 Mov
	var_170_string = "d3q03KapellaBoyLocation"; // 0x1775 PushS
	FindMark(var_168_object, var_170_string); // 0x1776 ObjFunc
	var_171_object = var_168_object; // 0x1778 Push
	if(var_171_object == 0) goto Label_6012; // 0x1779 JumpB
	Remove(); // 0x177a ObjFunc
	
Label_6012:
	var_172_string = "d3q03KapellaBoyLocationSelf"; // 0x177c PushS
	FindMark(var_168_object, var_172_string); // 0x177d ObjFunc
	var_173_object = var_168_object; // 0x177f Push
	if(var_173_object == 0) goto Label_6019; // 0x1780 JumpB
	Remove(); // 0x1781 ObjFunc
	
Label_6019:
	func_6927(); // 0x1784 Call
	var_183_bool = 0; var_184_string = ""; var_185_string = ""; // 0x1786 PushV
	var_184_string = "quest_d3_03"; // 0x1787 MovS
	var_185_string = "completed"; // 0x1788 MovS
	func_5701(var_183_bool, var_184_string, var_185_string); // 0x1789 Call
	return 4; // 0x178b Return
}


func_6519(var_116_bool)
{
	var_118_int = 0; var_119_string = ""; // 0x1978 PushV
	var_119_string = "ood6Kapella1"; // 0x1979 MovS
	func_5659(var_118_int, var_119_string); // 0x197a Call
	var_120_int = 0; // 0x197c PushI
	var_121_bool = var_118_int == var_120_int; // 0x197d Eq
	if(var_121_bool == 0) goto Label_6529; // 0x197e JumpB
	var_116_bool = 1; // 0x197f MovB
	return 0; // 0x1980 Return
	
Label_6529:
	var_116_bool = 0; // 0x1981 MovB
	return 0; // 0x1982 Return
}


func_6531(var_70_bool)
{
	var_72_int = 0; var_73_string = ""; // 0x1984 PushV
	var_73_string = "d6q01"; // 0x1985 MovS
	func_5659(var_72_int, var_73_string); // 0x1986 Call
	var_76_int = 0; // 0x1988 PushI
	var_77_bool = var_72_int == var_76_int; // 0x1989 Eq
	if(var_77_bool == 0) goto Label_6541; // 0x198a JumpB
	var_70_bool = 1; // 0x198b MovB
	return 0; // 0x198c Return
	
Label_6541:
	var_70_bool = 0; // 0x198d MovB
	return 0; // 0x198e Return
}


func_6030()
{
	var_196_string = "ood3Kapella3"; // 0x178f PushS
	var_197_int = 1; // 0x1790 PushI
	SetVariable(var_196_string, var_197_int); // 0x1791 Func
	return 0; // 0x1793 Return
}


func_6543(var_193_bool)
{
	var_195_int = 0; var_196_string = ""; // 0x1990 PushV
	var_196_string = "d8TalkToMat"; // 0x1991 MovS
	func_5659(var_195_int, var_196_string); // 0x1992 Call
	var_197_int = 1; // 0x1994 PushI
	var_198_bool = var_195_int == var_197_int; // 0x1995 Eq
	if(var_198_bool == 0) goto Label_6553; // 0x1996 JumpB
	var_193_bool = 1; // 0x1997 MovB
	return 0; // 0x1998 Return
	
Label_6553:
	var_193_bool = 0; // 0x1999 MovB
	return 0; // 0x199a Return
}


func_6036()
{
	var_214_string = "ood3Kapella4"; // 0x1795 PushS
	var_215_int = 1; // 0x1796 PushI
	SetVariable(var_214_string, var_215_int); // 0x1797 Func
	return 0; // 0x1799 Return
}


func_6042()
{
	var_220_string = "ood3Kapella5"; // 0x179b PushS
	var_221_int = 1; // 0x179c PushI
	SetVariable(var_220_string, var_221_int); // 0x179d Func
	return 0; // 0x179f Return
}


func_6555(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x199c PushV
	var_104_string = "ood8Kapella1"; // 0x199d MovS
	func_5659(var_103_int, var_104_string); // 0x199e Call
	var_107_int = 0; // 0x19a0 PushI
	var_108_bool = var_103_int == var_107_int; // 0x19a1 Eq
	if(var_108_bool == 0) goto Label_6565; // 0x19a2 JumpB
	var_101_bool = 1; // 0x19a3 MovB
	return 0; // 0x19a4 Return
	
Label_6565:
	var_101_bool = 0; // 0x19a5 MovB
	return 0; // 0x19a6 Return
}


func_413(var_0_object, var_1_object, var_2_object, var_3_object, var_687_object, var_688_object)
{
	var_0_object = var_688_object; // 0x19e TMov
	var_1_object = var_687_object; // 0x19f TMov
	var_3_object = 0; // 0x1a0 TMovB
	var_693_int = 1; // 0x1a1 PushI
	if(var_693_int == 0) goto Label_525; // 0x1a2 JumpB
	var_694_bool = 0; // 0x1a3 PushV
	var_694_bool = 0; // 0x1a4 MovB
	var_695_bool = 0; var_696_object = Obj(); // 0x1a5 PushV
	var_696_object = var_1_object; // 0x1a6 MovT
	func_6531(var_696_object); // 0x1a7 Call
	if(var_695_bool == 0) goto Label_432; // 0x1a9 JumpB
	var_701_bool = 0; var_702_object = Obj(); // 0x1aa PushV
	var_702_object = var_1_object; // 0x1ab MovT
	func_6687(var_702_object); // 0x1ac Call
	if(var_701_bool == 0) goto Label_432; // 0x1ae JumpB
	var_694_bool = 1; // 0x1af MovB
	
Label_432:
	if(var_694_bool == 0) goto Label_463; // 0x1b0 JumpB
	var_707_object = Obj(); var_708_object = Obj(); // 0x1b1 PushV
	var_707_object = var_1_object; // 0x1b2 MovT
	var_708_object = var_0_object; // 0x1b3 MovT
	func_6126(); // 0x1b4 Call
	var_711_object = Obj(); var_712_object = Obj(); // 0x1b6 PushV
	var_711_object = var_1_object; // 0x1b7 MovT
	var_712_object = var_0_object; // 0x1b8 MovT
	func_6132(); // 0x1b9 Call
	var_715_string = ""; // 0x1bb PushV
	var_715_string = "Neutral"; // 0x1bc MovS
	func_555(var_688_object, var_715_string); // 0x1bd Call
	var_720_int = 3371; // 0x1bf PushI
	SetMessage(var_720_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_721_int = 3375; // 0x1c4 PushI
	var_722_int = 3621; // 0x1c5 PushI
	var_723_int = 3619; // 0x1c6 PushI
	AddReply(var_721_int, var_722_int, var_723_int); // 0x1c7 TObjFunc
	var_724_int = 3376; // 0x1c9 PushI
	var_725_int = 3621; // 0x1ca PushI
	var_726_int = 3620; // 0x1cb PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x1cc TObjFunc
	goto Label_525; // 0x1ce Jump
	
Label_525:
	var_727_bool = 0; // 0x20d PushV
	func_5746(var_727_bool); // 0x20e Call
	if(var_727_bool == 0) goto Label_540; // 0x210 JumpB
	
Label_529:
	lshWaitForAnimEnd(); // 0x211 Func
	var_728_object = var_3_object; // 0x213 PushT
	if(var_728_object == 0) goto Label_534; // 0x214 JumpB
	goto Label_539; // 0x215 Jump
	
Label_539:
	goto Label_554; // 0x21b Jump
	
Label_554:
	return 0; // 0x22a Return
	
Label_534:
	var_729_string = ""; // 0x216 PushV
	var_729_string = var_2_object; // 0x217 MovT
	func_5624(var_729_string); // 0x218 Call
	goto Label_529; // 0x21a Jump
	
Label_540:
	var_730_string = "all"; // 0x21c PushS
	var_731_string = "idle"; // 0x21d PushS
	PlayAnimation(var_730_string, var_731_string); // 0x21e Func
	
Label_544:
	WaitForAnimEnd(); // 0x220 Func
	var_732_object = var_3_object; // 0x222 PushT
	if(var_732_object == 0) goto Label_549; // 0x223 JumpB
	goto Label_554; // 0x224 Jump
	
Label_549:
	var_733_string = "all"; // 0x225 PushS
	var_734_string = "idle"; // 0x226 PushS
	PlayAnimation(var_733_string, var_734_string); // 0x227 Func
	goto Label_544; // 0x229 Jump
	
Label_463:
	var_735_bool = 0; // 0x1cf PushV
	var_735_bool = 0; // 0x1d0 MovB
	var_736_bool = 0; // 0x1d1 PushV
	var_736_bool = 0; // 0x1d2 MovB
	var_737_bool = 0; var_738_object = Obj(); // 0x1d3 PushV
	var_738_object = var_1_object; // 0x1d4 MovT
	func_6519(var_738_object); // 0x1d5 Call
	if(var_737_bool == 0) goto Label_479; // 0x1d7 JumpB
	var_743_bool = 0; var_744_object = Obj(); // 0x1d8 PushV
	var_744_object = var_1_object; // 0x1d9 MovT
	func_6495(var_744_object); // 0x1da Call
	var_749_bool = var_743_bool == 0; // 0x1dc Not
	if(var_749_bool == 0) goto Label_479; // 0x1dd JumpB
	var_736_bool = 1; // 0x1de MovB
	
Label_479:
	if(var_736_bool == 0) goto Label_487; // 0x1df JumpB
	var_750_bool = 0; var_751_object = Obj(); // 0x1e0 PushV
	var_751_object = var_1_object; // 0x1e1 MovT
	func_6507(var_751_object); // 0x1e2 Call
	var_756_bool = var_750_bool == 0; // 0x1e4 Not
	if(var_756_bool == 0) goto Label_487; // 0x1e5 JumpB
	var_735_bool = 1; // 0x1e6 MovB
	
Label_487:
	if(var_735_bool == 0) goto Label_508; // 0x1e7 JumpB
	var_757_object = Obj(); var_758_object = Obj(); // 0x1e8 PushV
	var_757_object = var_1_object; // 0x1e9 MovT
	var_758_object = var_0_object; // 0x1ea MovT
	func_6126(); // 0x1eb Call
	var_759_string = ""; // 0x1ed PushV
	var_759_string = "Neutral"; // 0x1ee MovS
	func_555(var_688_object, var_759_string); // 0x1ef Call
	var_760_int = 12095; // 0x1f1 PushI
	SetMessage(var_760_int); // 0x1f2 TObjFunc
	ClearReplies(); // 0x1f4 TObjFunc
	var_761_int = 12096; // 0x1f6 PushI
	var_762_int = 13323; // 0x1f7 PushI
	var_763_int = 13322; // 0x1f8 PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0x1f9 TObjFunc
	goto Label_525; // 0x1fb Jump
	
Label_508:
	var_764_string = ""; // 0x1fc PushV
	var_764_string = "Neutral"; // 0x1fd MovS
	func_555(var_688_object, var_764_string); // 0x1fe Call
	var_765_int = 12523; // 0x200 PushI
	SetMessage(var_765_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_766_int = 12524; // 0x205 PushI
	var_767_int = -1; // 0x206 PushI
	var_768_int = 13694; // 0x207 PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0x208 TObjFunc
	goto Label_525; // 0x20a Jump
}


func_6048()
{
	var_43_string = "ood6Kapella1"; // 0x17a1 PushS
	var_44_int = 1; // 0x17a2 PushI
	SetVariable(var_43_string, var_44_int); // 0x17a3 Func
	return 0; // 0x17a5 Return
}


func_933(var_0_object, var_158_int, var_159_object)
{
	var_161_object = Obj(); var_162_bool = 0; var_163_int = 0; var_164_bool = 0; var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; // 0x3a5 PushV
	var_0_object = var_159_object; // 0x3a6 TMov
	var_169_bool = 0; var_170_object = Obj(); // 0x3a7 PushV
	var_170_object = var_159_object; // 0x3a8 Mov
	func_5564(var_170_object); // 0x3a9 Call
	var_171_bool = var_169_bool == 0; // 0x3ab Not
	if(var_171_bool == 0) goto Label_943; // 0x3ac JumpB
	var_158_int = -2; // 0x3ad MovI
	return 8; // 0x3ae Return
	
Label_943:
	CreateDialog(var_165_object); // 0x3af Func
	var_172_int = 0; // 0x3b1 PushV
	func_5742(var_172_int); // 0x3b2 Call
	SetNPCName(var_172_int); // 0x3b4 ObjFunc
	var_173_string = ""; // 0x3b6 PushV
	func_5744(var_173_string); // 0x3b7 Call
	SetPhoto(var_173_string); // 0x3b9 ObjFunc
	var_174_int = 0; // 0x3bb PushV
	func_6846(var_174_int); // 0x3bc Call
	SetPlayerName(var_174_int); // 0x3be ObjFunc
	var_167_int = -1; // 0x3c0 MovI
	IsOverrideActive(var_166_bool); // 0x3c1 Func
	var_175_bool = var_166_bool; // 0x3c3 Push
	if(var_175_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_158_int = -2; // 0x3c5 MovI
	return 8; // 0x3c6 Return
	
Label_967:
	DoDialog(var_165_object); // 0x3c7 Func
	var_176_object = Obj(); var_177_object = Obj(); // 0x3c9 PushV
	var_176_object = var_159_object; // 0x3ca Mov
	var_177_object = var_165_object; // 0x3cb Mov
	TaskCall(7); // 0x3cc TaskCall
	func_996(var_178_object, var_179_object, var_180_string, var_181_bool, var_176_object, var_177_object); // 0x3cd Call
	TaskReturn(); // 0x3ce TaskReturn
	IsDialogEnd(var_168_bool); // 0x3d0 ObjFunc
	
Label_978:
	var_399_bool = var_168_bool == 0; // 0x3d2 Not
	if(var_399_bool == 0) goto Label_985; // 0x3d3 JumpB
	sync(); // 0x3d4 Func
	IsDialogEnd(var_168_bool); // 0x3d6 ObjFunc
	goto Label_978; // 0x3d8 Jump
	
Label_985:
	var_400_object = Obj(); // 0x3d9 PushV
	var_400_object = var_159_object; // 0x3da Mov
	func_5620(); // 0x3db Call
	StopDialog(var_165_object); // 0x3dd Func
	GetReturnValue(var_167_int); // 0x3df ObjFunc
	var_158_int = var_167_int; // 0x3e1 Mov
	return 8; // 0x3e2 Return
}


func_6054()
{
	var_166_string = "d6q02KnowAboutAttack"; // 0x17a7 PushS
	var_167_int = 1; // 0x17a8 PushI
	SetVariable(var_166_string, var_167_int); // 0x17a9 Func
	return 0; // 0x17ab Return
}


func_6567(var_144_bool)
{
	var_146_int = 0; var_147_string = ""; // 0x19a8 PushV
	var_147_string = "d8q02"; // 0x19a9 MovS
	func_5659(var_146_int, var_147_string); // 0x19aa Call
	var_148_int = 1000; // 0x19ac PushI
	var_149_bool = var_146_int == var_148_int; // 0x19ad Eq
	if(var_149_bool == 0) goto Label_6577; // 0x19ae JumpB
	var_144_bool = 1; // 0x19af MovB
	return 0; // 0x19b0 Return
	
Label_6577:
	var_144_bool = 0; // 0x19b1 MovB
	return 0; // 0x19b2 Return
}


func_5547(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x15ab PushV
	GetPosition(var_42_cvector); // 0x15ac ObjFunc
	GetPosition(var_43_cvector); // 0x15ae Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x15b0 Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0x15b1 PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0x15b2 PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0x15b3 Func
	var_36_bool = var_45_bool; // 0x15b5 Mov
	return 8; // 0x15b6 Return
}


func_6060()
{
	var_75_string = "KnowViktoria"; // 0x17ad PushS
	var_76_int = 1; // 0x17ae PushI
	SetVariable(var_75_string, var_76_int); // 0x17af Func
	return 0; // 0x17b1 Return
}


func_6066()
{
	var_111_string = "ood8Kapella1"; // 0x17b3 PushS
	var_112_int = 1; // 0x17b4 PushI
	SetVariable(var_111_string, var_112_int); // 0x17b5 Func
	return 0; // 0x17b7 Return
}


func_6579(var_150_bool)
{
	var_152_int = 0; var_153_string = ""; // 0x19b4 PushV
	var_153_string = "ood8Kapella2"; // 0x19b5 MovS
	func_5659(var_152_int, var_153_string); // 0x19b6 Call
	var_154_int = 0; // 0x19b8 PushI
	var_155_bool = var_152_int == var_154_int; // 0x19b9 Eq
	if(var_155_bool == 0) goto Label_6589; // 0x19ba JumpB
	var_150_bool = 1; // 0x19bb MovB
	return 0; // 0x19bc Return
	
Label_6589:
	var_150_bool = 0; // 0x19bd MovB
	return 0; // 0x19be Return
}


func_5559(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x15b7 PushV
	IsLoaded(var_38_bool); // 0x15b8 Func
	var_36_bool = var_38_bool; // 0x15ba Mov
	return 2; // 0x15bb Return
}


func_6072()
{
	var_43_string = "d8q02"; // 0x17b9 PushS
	var_44_int = 1; // 0x17ba PushI
	SetVariable(var_43_string, var_44_int); // 0x17bb Func
	func_6943(); // 0x17be Call
	return 0; // 0x17c0 Return
}


func_5564(var_50_bool)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x15bc PushV
	GetPosition(var_61_cvector); // 0x15bd ObjFunc
	GetEyesHeight(var_60_float); // 0x15bf ObjFunc
	var_68_float = GetByIndex(var_61_cvector, 1); // 0x15c1 PushE
	var_68_float = var_68_float + var_60_float; // 0x15c2 Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0x15c3 PopE
	GetPosition(var_62_cvector); // 0x15c4 Func
	GetEyesHeight(var_60_float); // 0x15c6 Func
	var_69_float = GetByIndex(var_62_cvector, 1); // 0x15c8 PushE
	var_69_float = var_69_float + var_60_float; // 0x15c9 Add2
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0x15ca PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0x15cb Sub2
	var_70_float = GetByIndex(var_63_cvector, 1); // 0x15cc PushE
	var_70_float = 0; // 0x15cd MovI
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0x15ce PopE
	var_71_int = var_63_cvector | var_63_cvector; // 0x15cf Or
	var_72_float = sqrt(var_71_int); // 0x15d0 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0x15d1 Div2
	var_64_cvector = -var_63_cvector; // 0x15d2 Neg2
	var_73_int = 70; // 0x15d3 PushI
	var_74_float = var_63_cvector * var_73_int; // 0x15d4 Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x15d5 PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0x15d6 PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0x15d7 Xor2
	func_5649(var_75_cvector, var_76_cvector); // 0x15d8 Call
	var_83_int = 25; // 0x15da PushI
	var_84_float = var_75_cvector * var_83_int; // 0x15db Mult
	var_85_int = var_74_float + var_84_float; // 0x15dc Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0x15dd PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0x15de Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0x15df Add2
	IsOverrideActive(var_67_bool); // 0x15e0 Func
	var_87_bool = var_67_bool; // 0x15e2 Push
	if(var_87_bool == 0) goto Label_5606; // 0x15e3 JumpB
	var_50_bool = 0; // 0x15e4 MovB
	return 16; // 0x15e5 Return
	
Label_5606:
	StopWorld(); // 0x15e6 Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0x15e8 Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0x15ea PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0x15eb PushE
	Rotate(var_88_float, var_89_float); // 0x15ec Func
	CameraWaitForPlayFinish(); // 0x15ee Func
	ResumeWorld(); // 0x15f0 Func
	var_50_bool = 1; // 0x15f2 MovB
	return 16; // 0x15f3 Return
}


func_6591(var_132_bool)
{
	var_134_int = 0; var_135_string = ""; // 0x19c0 PushV
	var_135_string = "d8TermitnikLoad"; // 0x19c1 MovS
	func_5659(var_134_int, var_135_string); // 0x19c2 Call
	var_136_int = 0; // 0x19c4 PushI
	var_137_bool = var_134_int != var_136_int; // 0x19c5 Neq
	if(var_137_bool == 0) goto Label_6601; // 0x19c6 JumpB
	var_132_bool = 1; // 0x19c7 MovB
	return 0; // 0x19c8 Return
	
Label_6601:
	var_132_bool = 0; // 0x19c9 MovB
	return 0; // 0x19ca Return
}


func_6081(var_70_object)
{
	var_72_string = "feromicin is given"; // 0x17c2 PushS
	Trace(var_72_string); // 0x17c3 Func
	var_73_object = Obj(); var_74_string = ""; var_75_int = 0; // 0x17c5 PushV
	var_73_object = var_70_object; // 0x17c6 Mov
	var_74_string = "feromicin"; // 0x17c7 MovS
	var_75_int = 1; // 0x17c8 MovI
	func_5688(var_73_object, var_74_string, var_75_int); // 0x17c9 Call
	return 0; // 0x17cb Return
}


func_5057(var_0_object, var_773_int, var_774_object)
{
	var_776_object = Obj(); var_777_bool = 0; var_778_int = 0; var_779_bool = 0; var_780_object = Obj(); var_781_bool = 0; var_782_int = 0; var_783_bool = 0; // 0x13c1 PushV
	var_0_object = var_774_object; // 0x13c2 TMov
	var_784_bool = 0; var_785_object = Obj(); // 0x13c3 PushV
	var_785_object = var_774_object; // 0x13c4 Mov
	func_5564(var_785_object); // 0x13c5 Call
	var_786_bool = var_784_bool == 0; // 0x13c7 Not
	if(var_786_bool == 0) goto Label_5067; // 0x13c8 JumpB
	var_773_int = -2; // 0x13c9 MovI
	return 8; // 0x13ca Return
	
Label_5067:
	CreateDialog(var_780_object); // 0x13cb Func
	var_787_int = 0; // 0x13cd PushV
	func_5742(var_787_int); // 0x13ce Call
	SetNPCName(var_787_int); // 0x13d0 ObjFunc
	var_788_string = ""; // 0x13d2 PushV
	func_5744(var_788_string); // 0x13d3 Call
	SetPhoto(var_788_string); // 0x13d5 ObjFunc
	var_789_int = 0; // 0x13d7 PushV
	func_6846(var_789_int); // 0x13d8 Call
	SetPlayerName(var_789_int); // 0x13da ObjFunc
	var_782_int = -1; // 0x13dc MovI
	IsOverrideActive(var_781_bool); // 0x13dd Func
	var_790_bool = var_781_bool; // 0x13df Push
	if(var_790_bool == 0) goto Label_5091; // 0x13e0 JumpB
	var_773_int = -2; // 0x13e1 MovI
	return 8; // 0x13e2 Return
	
Label_5091:
	DoDialog(var_780_object); // 0x13e3 Func
	var_791_object = Obj(); var_792_object = Obj(); // 0x13e5 PushV
	var_791_object = var_774_object; // 0x13e6 Mov
	var_792_object = var_780_object; // 0x13e7 Mov
	TaskCall(15); // 0x13e8 TaskCall
	func_5120(var_793_object, var_794_object, var_795_string, var_796_bool, var_791_object, var_792_object); // 0x13e9 Call
	TaskReturn(); // 0x13ea TaskReturn
	IsDialogEnd(var_783_bool); // 0x13ec ObjFunc
	
Label_5102:
	var_855_bool = var_783_bool == 0; // 0x13ee Not
	if(var_855_bool == 0) goto Label_5109; // 0x13ef JumpB
	sync(); // 0x13f0 Func
	IsDialogEnd(var_783_bool); // 0x13f2 ObjFunc
	goto Label_5102; // 0x13f4 Jump
	
Label_5109:
	var_856_object = Obj(); // 0x13f5 PushV
	var_856_object = var_774_object; // 0x13f6 Mov
	func_5620(); // 0x13f7 Call
	StopDialog(var_780_object); // 0x13f9 Func
	GetReturnValue(var_782_int); // 0x13fb ObjFunc
	var_773_int = var_782_int; // 0x13fd Mov
	return 8; // 0x13fe Return
}


func_6603(var_394_bool)
{
	var_396_int = 0; var_397_string = ""; // 0x19cc PushV
	var_397_string = "KnowKaterina"; // 0x19cd MovS
	func_5659(var_396_int, var_397_string); // 0x19ce Call
	var_398_int = 1; // 0x19d0 PushI
	var_399_bool = var_396_int == var_398_int; // 0x19d1 Eq
	if(var_399_bool == 0) goto Label_6613; // 0x19d2 JumpB
	var_394_bool = 1; // 0x19d3 MovB
	return 0; // 0x19d4 Return
	
Label_6613:
	var_394_bool = 0; // 0x19d5 MovB
	return 0; // 0x19d6 Return
}


func_6092()
{
	var_97_string = "ood8Kapella2"; // 0x17cd PushS
	var_98_int = 1; // 0x17ce PushI
	SetVariable(var_97_string, var_98_int); // 0x17cf Func
	return 0; // 0x17d1 Return
}


func_6098()
{
	var_43_string = "ood4Kapella1"; // 0x17d3 PushS
	var_44_int = 1; // 0x17d4 PushI
	SetVariable(var_43_string, var_44_int); // 0x17d5 Func
	return 0; // 0x17d7 Return
}


func_6615(var_378_bool)
{
	var_380_int = 0; var_381_string = ""; // 0x19d8 PushV
	var_381_string = "KnowLara"; // 0x19d9 MovS
	func_5659(var_380_int, var_381_string); // 0x19da Call
	var_382_int = 1; // 0x19dc PushI
	var_383_bool = var_380_int == var_382_int; // 0x19dd Eq
	if(var_383_bool == 0) goto Label_6625; // 0x19de JumpB
	var_378_bool = 1; // 0x19df MovB
	return 0; // 0x19e0 Return
	
Label_6625:
	var_378_bool = 0; // 0x19e1 MovB
	return 0; // 0x19e2 Return
}


func_6104()
{
	var_89_string = "KnowPredictions"; // 0x17d9 PushS
	var_90_int = 1; // 0x17da PushI
	SetVariable(var_89_string, var_90_int); // 0x17db Func
	return 0; // 0x17dd Return
}


func_6110()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x17de PushV
	var_49_object = Obj(); // 0x17df PushV
	func_6796(var_49_object); // 0x17e0 Call
	var_48_object = var_49_object; // 0x17e1 Mov
	var_56_string = "d6q02KapellaGotoMladVlad"; // 0x17e3 PushS
	var_57_string = "pt_map_mladvlad"; // 0x17e4 PushS
	var_58_int = 0; // 0x17e5 PushI
	var_59_int = 15377; // 0x17e6 PushI
	var_60_float = 0; // 0x17e7 PushV
	func_5713(var_60_float); // 0x17e8 Call
	AddMark(var_56_string, var_57_string, var_58_int, var_59_int, var_60_float); // 0x17ea ObjFunc
	return 2; // 0x17ec Return
}


func_6627(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0x19e4 PushV
	var_429_string = "KnowMishka"; // 0x19e5 MovS
	func_5659(var_428_int, var_429_string); // 0x19e6 Call
	var_430_int = 1; // 0x19e8 PushI
	var_431_bool = var_428_int == var_430_int; // 0x19e9 Eq
	if(var_431_bool == 0) goto Label_6637; // 0x19ea JumpB
	var_426_bool = 1; // 0x19eb MovB
	return 0; // 0x19ec Return
	
Label_6637:
	var_426_bool = 0; // 0x19ed MovB
	return 0; // 0x19ee Return
}


func_996(var_0_object, var_1_object, var_2_object, var_3_object, var_176_object, var_177_object)
{
	var_0_object = var_177_object; // 0x3e5 TMov
	var_1_object = var_176_object; // 0x3e6 TMov
	var_3_object = 0; // 0x3e7 TMovB
	var_182_int = 1; // 0x3e8 PushI
	if(var_182_int == 0) goto Label_1272; // 0x3e9 JumpB
	var_183_bool = 0; // 0x3ea PushV
	var_183_bool = 0; // 0x3eb MovB
	var_184_bool = 0; var_185_object = Obj(); // 0x3ec PushV
	var_185_object = var_1_object; // 0x3ed MovT
	func_6723(var_185_object); // 0x3ee Call
	if(var_184_bool == 0) goto Label_1015; // 0x3f0 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x3f1 PushV
	var_193_object = var_1_object; // 0x3f2 MovT
	func_6192(var_193_object); // 0x3f3 Call
	if(var_192_bool == 0) goto Label_1015; // 0x3f5 JumpB
	var_183_bool = 1; // 0x3f6 MovB
	
Label_1015:
	if(var_183_bool == 0) goto Label_1036; // 0x3f7 JumpB
	var_198_string = ""; // 0x3f8 PushV
	var_198_string = "Neutral"; // 0x3f9 MovS
	func_1302(var_177_object, var_198_string); // 0x3fa Call
	var_203_int = 5449; // 0x3fc PushI
	SetMessage(var_203_int); // 0x3fd TObjFunc
	ClearReplies(); // 0x3ff TObjFunc
	var_204_int = 5453; // 0x401 PushI
	var_205_int = 6575; // 0x402 PushI
	var_206_int = 6007; // 0x403 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x404 TObjFunc
	var_207_int = 5974; // 0x406 PushI
	var_208_int = 6575; // 0x407 PushI
	var_209_int = 6579; // 0x408 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x409 TObjFunc
	goto Label_1272; // 0x40b Jump
	
Label_1272:
	var_210_bool = 0; // 0x4f8 PushV
	func_5746(var_210_bool); // 0x4f9 Call
	if(var_210_bool == 0) goto Label_1287; // 0x4fb JumpB
	
Label_1276:
	lshWaitForAnimEnd(); // 0x4fc Func
	var_211_object = var_3_object; // 0x4fe PushT
	if(var_211_object == 0) goto Label_1281; // 0x4ff JumpB
	goto Label_1286; // 0x500 Jump
	
Label_1286:
	goto Label_1301; // 0x506 Jump
	
Label_1301:
	return 0; // 0x515 Return
	
Label_1281:
	var_212_string = ""; // 0x501 PushV
	var_212_string = var_2_object; // 0x502 MovT
	func_5624(var_212_string); // 0x503 Call
	goto Label_1276; // 0x505 Jump
	
Label_1287:
	var_213_string = "all"; // 0x507 PushS
	var_214_string = "idle"; // 0x508 PushS
	PlayAnimation(var_213_string, var_214_string); // 0x509 Func
	
Label_1291:
	WaitForAnimEnd(); // 0x50b Func
	var_215_object = var_3_object; // 0x50d PushT
	if(var_215_object == 0) goto Label_1296; // 0x50e JumpB
	goto Label_1301; // 0x50f Jump
	
Label_1296:
	var_216_string = "all"; // 0x510 PushS
	var_217_string = "idle"; // 0x511 PushS
	PlayAnimation(var_216_string, var_217_string); // 0x512 Func
	goto Label_1291; // 0x514 Jump
	
Label_1036:
	var_218_string = ""; // 0x40c PushV
	var_218_string = "Neutral"; // 0x40d MovS
	func_1302(var_177_object, var_218_string); // 0x40e Call
	var_219_int = 5484; // 0x410 PushI
	SetMessage(var_219_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_220_bool = 0; var_221_object = Obj(); // 0x415 PushV
	var_221_object = var_1_object; // 0x416 MovT
	func_6735(var_221_object); // 0x417 Call
	if(var_220_bool == 0) goto Label_1055; // 0x419 JumpB
	var_226_int = 8729; // 0x41a PushI
	var_227_int = 6028; // 0x41b PushI
	var_228_int = 9566; // 0x41c PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x41d TObjFunc
	
Label_1055:
	var_229_bool = 0; // 0x41f PushV
	var_229_bool = 0; // 0x420 MovB
	var_230_bool = 0; var_231_object = Obj(); // 0x421 PushV
	var_231_object = var_1_object; // 0x422 MovT
	func_6144(var_231_object); // 0x423 Call
	if(var_230_bool == 0) goto Label_1068; // 0x425 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x426 PushV
	var_237_object = var_1_object; // 0x427 MovT
	func_6168(var_237_object); // 0x428 Call
	if(var_236_bool == 0) goto Label_1068; // 0x42a JumpB
	var_229_bool = 1; // 0x42b MovB
	
Label_1068:
	if(var_229_bool == 0) goto Label_1074; // 0x42c JumpB
	var_242_int = 8728; // 0x42d PushI
	var_243_int = 6008; // 0x42e PushI
	var_244_int = 9565; // 0x42f PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x430 TObjFunc
	
Label_1074:
	var_245_bool = 0; // 0x432 PushV
	var_245_bool = 0; // 0x433 MovB
	var_246_bool = 0; // 0x434 PushV
	var_246_bool = 0; // 0x435 MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x436 PushV
	var_248_object = var_1_object; // 0x437 MovT
	func_6156(var_248_object); // 0x438 Call
	if(var_247_bool == 0) goto Label_1089; // 0x43a JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x43b PushV
	var_254_object = var_1_object; // 0x43c MovT
	func_6204(var_254_object); // 0x43d Call
	if(var_253_bool == 0) goto Label_1089; // 0x43f JumpB
	var_246_bool = 1; // 0x440 MovB
	
Label_1089:
	if(var_246_bool == 0) goto Label_1096; // 0x441 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x442 PushV
	var_260_object = var_1_object; // 0x443 MovT
	func_6216(var_260_object); // 0x444 Call
	if(var_259_bool == 0) goto Label_1096; // 0x446 JumpB
	var_245_bool = 1; // 0x447 MovB
	
Label_1096:
	if(var_245_bool == 0) goto Label_1102; // 0x448 JumpB
	var_265_int = 5451; // 0x449 PushI
	var_266_int = 6666; // 0x44a PushI
	var_267_int = 6005; // 0x44b PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x44c TObjFunc
	
Label_1102:
	var_268_bool = 0; // 0x44e PushV
	var_268_bool = 0; // 0x44f MovB
	var_269_bool = 0; // 0x450 PushV
	var_269_bool = 0; // 0x451 MovB
	var_270_bool = 0; var_271_object = Obj(); // 0x452 PushV
	var_271_object = var_1_object; // 0x453 MovT
	func_6180(var_271_object); // 0x454 Call
	if(var_270_bool == 0) goto Label_1117; // 0x456 JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x457 PushV
	var_277_object = var_1_object; // 0x458 MovT
	func_6192(var_277_object); // 0x459 Call
	if(var_276_bool == 0) goto Label_1117; // 0x45b JumpB
	var_269_bool = 1; // 0x45c MovB
	
Label_1117:
	if(var_269_bool == 0) goto Label_1125; // 0x45d JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x45e PushV
	var_279_object = var_1_object; // 0x45f MovT
	func_6723(var_279_object); // 0x460 Call
	var_280_bool = var_278_bool == 0; // 0x462 Not
	if(var_280_bool == 0) goto Label_1125; // 0x463 JumpB
	var_268_bool = 1; // 0x464 MovB
	
Label_1125:
	if(var_268_bool == 0) goto Label_1131; // 0x465 JumpB
	var_281_int = 5452; // 0x466 PushI
	var_282_int = 9563; // 0x467 PushI
	var_283_int = 6006; // 0x468 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x469 TObjFunc
	
Label_1131:
	var_284_bool = 0; // 0x46b PushV
	var_284_bool = 0; // 0x46c MovB
	var_285_bool = 0; var_286_object = Obj(); // 0x46d PushV
	var_286_object = var_1_object; // 0x46e MovT
	func_6228(var_286_object); // 0x46f Call
	if(var_285_bool == 0) goto Label_1144; // 0x471 JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0x472 PushV
	var_292_object = var_1_object; // 0x473 MovT
	func_6240(var_292_object); // 0x474 Call
	if(var_291_bool == 0) goto Label_1144; // 0x476 JumpB
	var_284_bool = 1; // 0x477 MovB
	
Label_1144:
	if(var_284_bool == 0) goto Label_1150; // 0x478 JumpB
	var_297_int = 6288; // 0x479 PushI
	var_298_int = 6941; // 0x47a PushI
	var_299_int = 6940; // 0x47b PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x47c TObjFunc
	
Label_1150:
	var_300_bool = 0; // 0x47e PushV
	var_300_bool = 0; // 0x47f MovB
	var_301_bool = 0; var_302_object = Obj(); // 0x480 PushV
	var_302_object = var_1_object; // 0x481 MovT
	func_6615(var_302_object); // 0x482 Call
	if(var_301_bool == 0) goto Label_1163; // 0x484 JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0x485 PushV
	var_308_object = var_1_object; // 0x486 MovT
	func_6300(var_308_object); // 0x487 Call
	if(var_307_bool == 0) goto Label_1163; // 0x489 JumpB
	var_300_bool = 1; // 0x48a MovB
	
Label_1163:
	if(var_300_bool == 0) goto Label_1169; // 0x48b JumpB
	var_313_int = 7933; // 0x48c PushI
	var_314_int = 8773; // 0x48d PushI
	var_315_int = 8753; // 0x48e PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x48f TObjFunc
	
Label_1169:
	var_316_bool = 0; // 0x491 PushV
	var_316_bool = 0; // 0x492 MovB
	var_317_bool = 0; var_318_object = Obj(); // 0x493 PushV
	var_318_object = var_1_object; // 0x494 MovT
	func_6603(var_318_object); // 0x495 Call
	if(var_317_bool == 0) goto Label_1182; // 0x497 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x498 PushV
	var_324_object = var_1_object; // 0x499 MovT
	func_6312(var_324_object); // 0x49a Call
	if(var_323_bool == 0) goto Label_1182; // 0x49c JumpB
	var_316_bool = 1; // 0x49d MovB
	
Label_1182:
	if(var_316_bool == 0) goto Label_1188; // 0x49e JumpB
	var_329_int = 7938; // 0x49f PushI
	var_330_int = 8784; // 0x4a0 PushI
	var_331_int = 8758; // 0x4a1 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x4a2 TObjFunc
	
Label_1188:
	var_332_bool = 0; // 0x4a4 PushV
	var_332_bool = 0; // 0x4a5 MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x4a6 PushV
	var_334_object = var_1_object; // 0x4a7 MovT
	func_6639(var_334_object); // 0x4a8 Call
	if(var_333_bool == 0) goto Label_1201; // 0x4aa JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x4ab PushV
	var_340_object = var_1_object; // 0x4ac MovT
	func_6324(var_340_object); // 0x4ad Call
	if(var_339_bool == 0) goto Label_1201; // 0x4af JumpB
	var_332_bool = 1; // 0x4b0 MovB
	
Label_1201:
	if(var_332_bool == 0) goto Label_1207; // 0x4b1 JumpB
	var_345_int = 7943; // 0x4b2 PushI
	var_346_int = 8775; // 0x4b3 PushI
	var_347_int = 8763; // 0x4b4 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x4b5 TObjFunc
	
Label_1207:
	var_348_bool = 0; // 0x4b7 PushV
	var_348_bool = 0; // 0x4b8 MovB
	var_349_bool = 0; var_350_object = Obj(); // 0x4b9 PushV
	var_350_object = var_1_object; // 0x4ba MovT
	func_6627(var_350_object); // 0x4bb Call
	if(var_349_bool == 0) goto Label_1220; // 0x4bd JumpB
	var_355_bool = 0; var_356_object = Obj(); // 0x4be PushV
	var_356_object = var_1_object; // 0x4bf MovT
	func_6336(var_356_object); // 0x4c0 Call
	if(var_355_bool == 0) goto Label_1220; // 0x4c2 JumpB
	var_348_bool = 1; // 0x4c3 MovB
	
Label_1220:
	if(var_348_bool == 0) goto Label_1226; // 0x4c4 JumpB
	var_361_int = 7950; // 0x4c5 PushI
	var_362_int = 8776; // 0x4c6 PushI
	var_363_int = 8770; // 0x4c7 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x4c8 TObjFunc
	
Label_1226:
	var_364_bool = 0; // 0x4ca PushV
	var_364_bool = 0; // 0x4cb MovB
	var_365_bool = 0; var_366_object = Obj(); // 0x4cc PushV
	var_366_object = var_1_object; // 0x4cd MovT
	func_6699(var_366_object); // 0x4ce Call
	if(var_365_bool == 0) goto Label_1239; // 0x4d0 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x4d1 PushV
	var_372_object = var_1_object; // 0x4d2 MovT
	func_6348(var_372_object); // 0x4d3 Call
	if(var_371_bool == 0) goto Label_1239; // 0x4d5 JumpB
	var_364_bool = 1; // 0x4d6 MovB
	
Label_1239:
	if(var_364_bool == 0) goto Label_1245; // 0x4d7 JumpB
	var_377_int = 7951; // 0x4d8 PushI
	var_378_int = 8777; // 0x4d9 PushI
	var_379_int = 8771; // 0x4da PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x4db TObjFunc
	
Label_1245:
	var_380_bool = 0; // 0x4dd PushV
	var_380_bool = 0; // 0x4de MovB
	var_381_bool = 0; var_382_object = Obj(); // 0x4df PushV
	var_382_object = var_1_object; // 0x4e0 MovT
	func_6675(var_382_object); // 0x4e1 Call
	if(var_381_bool == 0) goto Label_1258; // 0x4e3 JumpB
	var_387_bool = 0; var_388_object = Obj(); // 0x4e4 PushV
	var_388_object = var_1_object; // 0x4e5 MovT
	func_6360(var_388_object); // 0x4e6 Call
	if(var_387_bool == 0) goto Label_1258; // 0x4e8 JumpB
	var_380_bool = 1; // 0x4e9 MovB
	
Label_1258:
	if(var_380_bool == 0) goto Label_1264; // 0x4ea JumpB
	var_393_int = 7952; // 0x4eb PushI
	var_394_int = 8778; // 0x4ec PushI
	var_395_int = 8772; // 0x4ed PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x4ee TObjFunc
	
Label_1264:
	var_396_int = 6264; // 0x4f0 PushI
	var_397_int = -1; // 0x4f1 PushI
	var_398_int = 6931; // 0x4f2 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x4f3 TObjFunc
	goto Label_1272; // 0x4f5 Jump
}


func_6126()
{
	var_86_string = "d6KapellaVisit"; // 0x17ef PushS
	var_87_int = 1; // 0x17f0 PushI
	SetVariable(var_86_string, var_87_int); // 0x17f1 Func
	return 0; // 0x17f3 Return
}


func_6639(var_410_bool)
{
	var_412_int = 0; var_413_string = ""; // 0x19f0 PushV
	var_413_string = "KnowMladVlad"; // 0x19f1 MovS
	func_5659(var_412_int, var_413_string); // 0x19f2 Call
	var_414_int = 1; // 0x19f4 PushI
	var_415_bool = var_412_int == var_414_int; // 0x19f5 Eq
	if(var_415_bool == 0) goto Label_6649; // 0x19f6 JumpB
	var_410_bool = 1; // 0x19f7 MovB
	return 0; // 0x19f8 Return
	
Label_6649:
	var_410_bool = 0; // 0x19f9 MovB
	return 0; // 0x19fa Return
}


func_5620()
{
	CameraSwitchToNormal(); // 0x15f5 Func
	return 0; // 0x15f7 Return
}


func_6132()
{
	var_90_string = "ood6Kapella3"; // 0x17f5 PushS
	var_91_int = 1; // 0x17f6 PushI
	SetVariable(var_90_string, var_91_int); // 0x17f7 Func
	return 0; // 0x17f9 Return
}


func_5624(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0x15f8 PushV
	var_45_string = "playing "; // 0x15f9 PushS
	var_46_int = var_45_string + var_40_string; // 0x15fa Add
	Trace(var_46_int); // 0x15fb Func
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float); // 0x15fd Func
	lshPlayAnimation(var_43_float, var_44_float); // 0x15ff Func
	var_47_string = "start: "; // 0x1601 PushS
	var_48_int = var_47_string + var_43_float; // 0x1602 Add
	Trace(var_48_int); // 0x1603 Func
	var_49_string = "end: "; // 0x1605 PushS
	var_50_int = var_49_string + var_44_float; // 0x1606 Add
	Trace(var_50_int); // 0x1607 Func
	return 4; // 0x1609 Return
}


func_6138()
{
	var_480_string = "KnowTermitnik"; // 0x17fb PushS
	var_481_int = 1; // 0x17fc PushI
	SetVariable(var_480_string, var_481_int); // 0x17fd Func
	return 0; // 0x17ff Return
}


func_6651(var_64_bool)
{
	var_66_int = 0; var_67_string = ""; // 0x19fc PushV
	var_67_string = "ood4Kapella1"; // 0x19fd MovS
	func_5659(var_66_int, var_67_string); // 0x19fe Call
	var_70_int = 0; // 0x1a00 PushI
	var_71_bool = var_66_int == var_70_int; // 0x1a01 Eq
	if(var_71_bool == 0) goto Label_6661; // 0x1a02 JumpB
	var_64_bool = 1; // 0x1a03 MovB
	return 0; // 0x1a04 Return
	
Label_6661:
	var_64_bool = 0; // 0x1a05 MovB
	return 0; // 0x1a06 Return
}


func_3071(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0; // 0xbff PushV
	var_0_object = var_404_object; // 0xc00 TMov
	var_414_bool = 0; var_415_object = Obj(); // 0xc01 PushV
	var_415_object = var_404_object; // 0xc02 Mov
	func_5564(var_415_object); // 0xc03 Call
	var_416_bool = var_414_bool == 0; // 0xc05 Not
	if(var_416_bool == 0) goto Label_3081; // 0xc06 JumpB
	var_403_int = -2; // 0xc07 MovI
	return 8; // 0xc08 Return
	
Label_3081:
	CreateDialog(var_410_object); // 0xc09 Func
	var_417_int = 0; // 0xc0b PushV
	func_5742(var_417_int); // 0xc0c Call
	SetNPCName(var_417_int); // 0xc0e ObjFunc
	var_418_string = ""; // 0xc10 PushV
	func_5744(var_418_string); // 0xc11 Call
	SetPhoto(var_418_string); // 0xc13 ObjFunc
	var_419_int = 0; // 0xc15 PushV
	func_6846(var_419_int); // 0xc16 Call
	SetPlayerName(var_419_int); // 0xc18 ObjFunc
	var_412_int = -1; // 0xc1a MovI
	IsOverrideActive(var_411_bool); // 0xc1b Func
	var_420_bool = var_411_bool; // 0xc1d Push
	if(var_420_bool == 0) goto Label_3105; // 0xc1e JumpB
	var_403_int = -2; // 0xc1f MovI
	return 8; // 0xc20 Return
	
Label_3105:
	DoDialog(var_410_object); // 0xc21 Func
	var_421_object = Obj(); var_422_object = Obj(); // 0xc23 PushV
	var_421_object = var_404_object; // 0xc24 Mov
	var_422_object = var_410_object; // 0xc25 Mov
	TaskCall(9); // 0xc26 TaskCall
	func_3134(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object); // 0xc27 Call
	TaskReturn(); // 0xc28 TaskReturn
	IsDialogEnd(var_413_bool); // 0xc2a ObjFunc
	
Label_3116:
	var_470_bool = var_413_bool == 0; // 0xc2c Not
	if(var_470_bool == 0) goto Label_3123; // 0xc2d JumpB
	sync(); // 0xc2e Func
	IsDialogEnd(var_413_bool); // 0xc30 ObjFunc
	goto Label_3116; // 0xc32 Jump
	
Label_3123:
	var_471_object = Obj(); // 0xc33 PushV
	var_471_object = var_404_object; // 0xc34 Mov
	func_5620(); // 0xc35 Call
	StopDialog(var_410_object); // 0xc37 Func
	GetReturnValue(var_412_int); // 0xc39 ObjFunc
	var_403_int = var_412_int; // 0xc3b Mov
	return 8; // 0xc3c Return
}


