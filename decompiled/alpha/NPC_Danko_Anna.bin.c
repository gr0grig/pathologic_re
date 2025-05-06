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
	func_6995(var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_5446(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xc0 PushI
	if(var_37_int == 0) goto Label_406; // 0xc1 JumpB
	func_5541(); // 0xc3 Call
	var_39_int = 260; // 0xc5 PushI
	var_40_bool = var_35_string == var_39_int; // 0xc6 Eq
	if(var_40_bool == 0) goto Label_225; // 0xc7 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xc8 PushV
	var_41_object = var_1_object; // 0xc9 MovT
	var_42_object = var_0_object; // 0xca MovT
	func_6123(); // 0xcb Call
	var_45_string = ""; // 0xcd PushV
	var_45_string = "Neutral"; // 0xce MovS
	func_175(var_36_bool, var_45_string); // 0xcf Call
	var_60_int = 221; // 0xd1 PushI
	SetMessage(var_60_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_61_int = 222; // 0xd6 PushI
	var_62_int = 263; // 0xd7 PushI
	var_63_int = 261; // 0xd8 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xd9 TObjFunc
	var_64_int = 223; // 0xdb PushI
	var_65_int = 266; // 0xdc PushI
	var_66_int = 262; // 0xdd PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_67_int = 266; // 0xe1 PushI
	var_68_bool = var_35_string == var_67_int; // 0xe2 Eq
	if(var_68_bool == 0) goto Label_248; // 0xe3 JumpB
	var_69_string = ""; // 0xe4 PushV
	var_69_string = "Neutral"; // 0xe5 MovS
	func_175(var_36_bool, var_69_string); // 0xe6 Call
	var_70_int = 227; // 0xe8 PushI
	SetMessage(var_70_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_71_int = 244; // 0xed PushI
	var_72_int = 268; // 0xee PushI
	var_73_int = 284; // 0xef PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf0 TObjFunc
	var_74_int = 245; // 0xf2 PushI
	var_75_int = -1; // 0xf3 PushI
	var_76_int = 286; // 0xf4 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_77_int = 263; // 0xf8 PushI
	var_78_bool = var_35_string == var_77_int; // 0xf9 Eq
	if(var_78_bool == 0) goto Label_271; // 0xfa JumpB
	var_79_string = ""; // 0xfb PushV
	var_79_string = "Neutral"; // 0xfc MovS
	func_175(var_36_bool, var_79_string); // 0xfd Call
	var_80_int = 224; // 0xff PushI
	SetMessage(var_80_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_81_int = 228; // 0x104 PushI
	var_82_int = 268; // 0x105 PushI
	var_83_int = 267; // 0x106 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x107 TObjFunc
	var_84_int = 225; // 0x109 PushI
	var_85_int = 265; // 0x10a PushI
	var_86_int = 264; // 0x10b PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_87_int = 265; // 0x10f PushI
	var_88_bool = var_35_string == var_87_int; // 0x110 Eq
	if(var_88_bool == 0) goto Label_289; // 0x111 JumpB
	var_89_string = ""; // 0x112 PushV
	var_89_string = "Neutral"; // 0x113 MovS
	func_175(var_36_bool, var_89_string); // 0x114 Call
	var_90_int = 226; // 0x116 PushI
	SetMessage(var_90_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_91_int = 243; // 0x11b PushI
	var_92_int = 268; // 0x11c PushI
	var_93_int = 282; // 0x11d PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_94_int = 268; // 0x121 PushI
	var_95_bool = var_35_string == var_94_int; // 0x122 Eq
	if(var_95_bool == 0) goto Label_312; // 0x123 JumpB
	var_96_string = ""; // 0x124 PushV
	var_96_string = "Neutral"; // 0x125 MovS
	func_175(var_36_bool, var_96_string); // 0x126 Call
	var_97_int = 229; // 0x128 PushI
	SetMessage(var_97_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_98_int = 234; // 0x12d PushI
	var_99_int = 274; // 0x12e PushI
	var_100_int = 273; // 0x12f PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x130 TObjFunc
	var_101_int = 230; // 0x132 PushI
	var_102_int = 270; // 0x133 PushI
	var_103_int = 269; // 0x134 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_104_int = 270; // 0x138 PushI
	var_105_bool = var_35_string == var_104_int; // 0x139 Eq
	if(var_105_bool == 0) goto Label_330; // 0x13a JumpB
	var_106_string = ""; // 0x13b PushV
	var_106_string = "Neutral"; // 0x13c MovS
	func_175(var_36_bool, var_106_string); // 0x13d Call
	var_107_int = 231; // 0x13f PushI
	SetMessage(var_107_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_108_int = 233; // 0x144 PushI
	var_109_int = -1; // 0x145 PushI
	var_110_int = 272; // 0x146 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_111_int = 274; // 0x14a PushI
	var_112_bool = var_35_string == var_111_int; // 0x14b Eq
	if(var_112_bool == 0) goto Label_353; // 0x14c JumpB
	var_113_string = ""; // 0x14d PushV
	var_113_string = "Neutral"; // 0x14e MovS
	func_175(var_36_bool, var_113_string); // 0x14f Call
	var_114_int = 235; // 0x151 PushI
	SetMessage(var_114_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_115_int = 236; // 0x156 PushI
	var_116_int = 280; // 0x157 PushI
	var_117_int = 275; // 0x158 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x159 TObjFunc
	var_118_int = 237; // 0x15b PushI
	var_119_int = 277; // 0x15c PushI
	var_120_int = 276; // 0x15d PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_121_int = 277; // 0x161 PushI
	var_122_bool = var_35_string == var_121_int; // 0x162 Eq
	if(var_122_bool == 0) goto Label_376; // 0x163 JumpB
	var_123_string = ""; // 0x164 PushV
	var_123_string = "Neutral"; // 0x165 MovS
	func_175(var_36_bool, var_123_string); // 0x166 Call
	var_124_int = 238; // 0x168 PushI
	SetMessage(var_124_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_125_int = 239; // 0x16d PushI
	var_126_int = -1; // 0x16e PushI
	var_127_int = 278; // 0x16f PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x170 TObjFunc
	var_128_int = 240; // 0x172 PushI
	var_129_int = -1; // 0x173 PushI
	var_130_int = 279; // 0x174 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_131_int = 280; // 0x178 PushI
	var_132_bool = var_35_string == var_131_int; // 0x179 Eq
	if(var_132_bool == 0) goto Label_394; // 0x17a JumpB
	var_133_string = ""; // 0x17b PushV
	var_133_string = "Neutral"; // 0x17c MovS
	func_175(var_36_bool, var_133_string); // 0x17d Call
	var_134_int = 241; // 0x17f PushI
	SetMessage(var_134_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_135_int = 242; // 0x184 PushI
	var_136_int = -1; // 0x185 PushI
	var_137_int = 281; // 0x186 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_3_string = 1; // 0x18a TMovB
	var_138_bool = 0; // 0x18b PushV
	func_5645(var_138_bool); // 0x18c Call
	if(var_138_bool == 0) goto Label_402; // 0x18e JumpB
	lshStopAnimation(); // 0x18f Func
	goto Label_404; // 0x191 Jump
	
Label_404:
	return 0; // 0x194 Return
	
Label_402:
	StopAnimation(); // 0x192 Func
	
Label_406:
	return 0; // 0x196 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x269 PushI
	if(var_37_int == 0) goto Label_928; // 0x26a JumpB
	func_5541(); // 0x26c Call
	var_39_int = 4268; // 0x26e PushI
	var_40_bool = var_36_bool == var_39_int; // 0x26f Eq
	if(var_40_bool == 0) goto Label_630; // 0x270 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x271 PushV
	var_41_object = var_1_object; // 0x272 MovT
	var_42_object = var_0_object; // 0x273 MovT
	func_6064(); // 0x274 Call
	
Label_630:
	var_45_int = 4269; // 0x276 PushI
	var_46_bool = var_36_bool == var_45_int; // 0x277 Eq
	if(var_46_bool == 0) goto Label_638; // 0x278 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x279 PushV
	var_47_object = var_1_object; // 0x27a MovT
	var_48_object = var_0_object; // 0x27b MovT
	func_6064(); // 0x27c Call
	
Label_638:
	var_49_int = 4266; // 0x27e PushI
	var_50_bool = var_36_bool == var_49_int; // 0x27f Eq
	if(var_50_bool == 0) goto Label_646; // 0x280 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x281 PushV
	var_51_object = var_1_object; // 0x282 MovT
	var_52_object = var_0_object; // 0x283 MovT
	func_6064(); // 0x284 Call
	
Label_646:
	var_53_int = 13914; // 0x286 PushI
	var_54_bool = var_36_bool == var_53_int; // 0x287 Eq
	if(var_54_bool == 0) goto Label_654; // 0x288 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x289 PushV
	var_55_object = var_1_object; // 0x28a MovT
	var_56_object = var_0_object; // 0x28b MovT
	func_6070(); // 0x28c Call
	
Label_654:
	var_59_int = 13920; // 0x28e PushI
	var_60_bool = var_36_bool == var_59_int; // 0x28f Eq
	if(var_60_bool == 0) goto Label_672; // 0x290 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x291 PushV
	var_61_object = var_1_object; // 0x292 MovT
	var_62_object = var_0_object; // 0x293 MovT
	func_6076(); // 0x294 Call
	var_118_object = Obj(); var_119_object = Obj(); // 0x296 PushV
	var_118_object = var_1_object; // 0x297 MovT
	var_119_object = var_0_object; // 0x298 MovT
	func_6129(var_119_object); // 0x299 Call
	var_146_object = Obj(); var_147_object = Obj(); // 0x29b PushV
	var_146_object = var_1_object; // 0x29c MovT
	var_147_object = var_0_object; // 0x29d MovT
	func_6143(); // 0x29e Call
	
Label_672:
	var_150_int = 14992; // 0x2a0 PushI
	var_151_bool = var_36_bool == var_150_int; // 0x2a1 Eq
	if(var_151_bool == 0) goto Label_680; // 0x2a2 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x2a3 PushV
	var_152_object = var_1_object; // 0x2a4 MovT
	var_153_object = var_0_object; // 0x2a5 MovT
	func_6149(); // 0x2a6 Call
	
Label_680:
	var_156_int = 13912; // 0x2a8 PushI
	var_157_bool = var_35_string == var_156_int; // 0x2a9 Eq
	if(var_157_bool == 0) goto Label_775; // 0x2aa JumpB
	var_158_string = ""; // 0x2ab PushV
	var_158_string = "Neutral"; // 0x2ac MovS
	func_600(var_36_bool, var_158_string); // 0x2ad Call
	var_173_int = 12719; // 0x2af PushI
	SetMessage(var_173_int); // 0x2b0 TObjFunc
	ClearReplies(); // 0x2b2 TObjFunc
	var_174_bool = 0; // 0x2b4 PushV
	var_174_bool = 0; // 0x2b5 MovB
	var_175_bool = 0; var_176_object = Obj(); // 0x2b6 PushV
	var_176_object = var_1_object; // 0x2b7 MovT
	func_6554(var_176_object); // 0x2b8 Call
	if(var_175_bool == 0) goto Label_705; // 0x2ba JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x2bb PushV
	var_182_object = var_1_object; // 0x2bc MovT
	func_6518(var_182_object); // 0x2bd Call
	if(var_181_bool == 0) goto Label_705; // 0x2bf JumpB
	var_174_bool = 1; // 0x2c0 MovB
	
Label_705:
	if(var_174_bool == 0) goto Label_711; // 0x2c1 JumpB
	var_187_int = 12720; // 0x2c2 PushI
	var_188_int = 4261; // 0x2c3 PushI
	var_189_int = 13913; // 0x2c4 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x2c5 TObjFunc
	
Label_711:
	var_190_bool = 0; // 0x2c7 PushV
	var_190_bool = 0; // 0x2c8 MovB
	var_191_bool = 0; var_192_object = Obj(); // 0x2c9 PushV
	var_192_object = var_1_object; // 0x2ca MovT
	func_6530(var_192_object); // 0x2cb Call
	if(var_191_bool == 0) goto Label_724; // 0x2cd JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x2ce PushV
	var_198_object = var_1_object; // 0x2cf MovT
	func_6566(var_198_object); // 0x2d0 Call
	if(var_197_bool == 0) goto Label_724; // 0x2d2 JumpB
	var_190_bool = 1; // 0x2d3 MovB
	
Label_724:
	if(var_190_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_203_int = 12721; // 0x2d5 PushI
	var_204_int = 13915; // 0x2d6 PushI
	var_205_int = 13914; // 0x2d7 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x2d8 TObjFunc
	
Label_730:
	var_206_bool = 0; // 0x2da PushV
	var_206_bool = 0; // 0x2db MovB
	var_207_bool = 0; // 0x2dc PushV
	var_207_bool = 0; // 0x2dd MovB
	var_208_bool = 0; // 0x2de PushV
	var_208_bool = 0; // 0x2df MovB
	var_209_bool = 0; var_210_object = Obj(); // 0x2e0 PushV
	var_210_object = var_1_object; // 0x2e1 MovT
	func_6614(var_210_object); // 0x2e2 Call
	if(var_209_bool == 0) goto Label_748; // 0x2e4 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x2e5 PushV
	var_216_object = var_1_object; // 0x2e6 MovT
	func_6638(var_216_object); // 0x2e7 Call
	var_221_bool = var_215_bool == 0; // 0x2e9 Not
	if(var_221_bool == 0) goto Label_748; // 0x2ea JumpB
	var_208_bool = 1; // 0x2eb MovB
	
Label_748:
	if(var_208_bool == 0) goto Label_756; // 0x2ec JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x2ed PushV
	var_223_object = var_1_object; // 0x2ee MovT
	func_6650(var_223_object); // 0x2ef Call
	var_228_bool = var_222_bool == 0; // 0x2f1 Not
	if(var_228_bool == 0) goto Label_756; // 0x2f2 JumpB
	var_207_bool = 1; // 0x2f3 MovB
	
Label_756:
	if(var_207_bool == 0) goto Label_763; // 0x2f4 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x2f5 PushV
	var_230_object = var_1_object; // 0x2f6 MovT
	func_6662(var_230_object); // 0x2f7 Call
	if(var_229_bool == 0) goto Label_763; // 0x2f9 JumpB
	var_206_bool = 1; // 0x2fa MovB
	
Label_763:
	if(var_206_bool == 0) goto Label_769; // 0x2fb JumpB
	var_235_int = 13747; // 0x2fc PushI
	var_236_int = 14993; // 0x2fd PushI
	var_237_int = 14992; // 0x2fe PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x2ff TObjFunc
	
Label_769:
	var_238_int = 12728; // 0x301 PushI
	var_239_int = -1; // 0x302 PushI
	var_240_int = 13921; // 0x303 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x304 TObjFunc
	return 0; // 0x306 Return
	
Label_775:
	var_241_int = 14993; // 0x307 PushI
	var_242_bool = var_35_string == var_241_int; // 0x308 Eq
	if(var_242_bool == 0) goto Label_793; // 0x309 JumpB
	var_243_string = ""; // 0x30a PushV
	var_243_string = "Neutral"; // 0x30b MovS
	func_600(var_36_bool, var_243_string); // 0x30c Call
	var_244_int = 13748; // 0x30e PushI
	SetMessage(var_244_int); // 0x30f TObjFunc
	ClearReplies(); // 0x311 TObjFunc
	var_245_int = 13749; // 0x313 PushI
	var_246_int = -1; // 0x314 PushI
	var_247_int = 14994; // 0x315 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x316 TObjFunc
	return 0; // 0x318 Return
	
Label_793:
	var_248_int = 13915; // 0x319 PushI
	var_249_bool = var_35_string == var_248_int; // 0x31a Eq
	if(var_249_bool == 0) goto Label_811; // 0x31b JumpB
	var_250_string = ""; // 0x31c PushV
	var_250_string = "Neutral"; // 0x31d MovS
	func_600(var_36_bool, var_250_string); // 0x31e Call
	var_251_int = 12722; // 0x320 PushI
	SetMessage(var_251_int); // 0x321 TObjFunc
	ClearReplies(); // 0x323 TObjFunc
	var_252_int = 12723; // 0x325 PushI
	var_253_int = 13917; // 0x326 PushI
	var_254_int = 13916; // 0x327 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x328 TObjFunc
	return 0; // 0x32a Return
	
Label_811:
	var_255_int = 13917; // 0x32b PushI
	var_256_bool = var_35_string == var_255_int; // 0x32c Eq
	if(var_256_bool == 0) goto Label_829; // 0x32d JumpB
	var_257_string = ""; // 0x32e PushV
	var_257_string = "Neutral"; // 0x32f MovS
	func_600(var_36_bool, var_257_string); // 0x330 Call
	var_258_int = 12724; // 0x332 PushI
	SetMessage(var_258_int); // 0x333 TObjFunc
	ClearReplies(); // 0x335 TObjFunc
	var_259_int = 12725; // 0x337 PushI
	var_260_int = 13919; // 0x338 PushI
	var_261_int = 13918; // 0x339 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_262_int = 13919; // 0x33d PushI
	var_263_bool = var_35_string == var_262_int; // 0x33e Eq
	if(var_263_bool == 0) goto Label_847; // 0x33f JumpB
	var_264_string = ""; // 0x340 PushV
	var_264_string = "Neutral"; // 0x341 MovS
	func_600(var_36_bool, var_264_string); // 0x342 Call
	var_265_int = 12726; // 0x344 PushI
	SetMessage(var_265_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_266_int = 12727; // 0x349 PushI
	var_267_int = -1; // 0x34a PushI
	var_268_int = 13920; // 0x34b PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x34c TObjFunc
	return 0; // 0x34e Return
	
Label_847:
	var_269_int = 4261; // 0x34f PushI
	var_270_bool = var_35_string == var_269_int; // 0x350 Eq
	if(var_270_bool == 0) goto Label_870; // 0x351 JumpB
	var_271_string = ""; // 0x352 PushV
	var_271_string = "Neutral"; // 0x353 MovS
	func_600(var_36_bool, var_271_string); // 0x354 Call
	var_272_int = 3913; // 0x356 PushI
	SetMessage(var_272_int); // 0x357 TObjFunc
	ClearReplies(); // 0x359 TObjFunc
	var_273_int = 3914; // 0x35b PushI
	var_274_int = -1; // 0x35c PushI
	var_275_int = 4262; // 0x35d PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x35e TObjFunc
	var_276_int = 3915; // 0x360 PushI
	var_277_int = 4264; // 0x361 PushI
	var_278_int = 4263; // 0x362 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x363 TObjFunc
	return 0; // 0x365 Return
	
Label_870:
	var_279_int = 4264; // 0x366 PushI
	var_280_bool = var_35_string == var_279_int; // 0x367 Eq
	if(var_280_bool == 0) goto Label_893; // 0x368 JumpB
	var_281_string = ""; // 0x369 PushV
	var_281_string = "Neutral"; // 0x36a MovS
	func_600(var_36_bool, var_281_string); // 0x36b Call
	var_282_int = 3916; // 0x36d PushI
	SetMessage(var_282_int); // 0x36e TObjFunc
	ClearReplies(); // 0x370 TObjFunc
	var_283_int = 3917; // 0x372 PushI
	var_284_int = 4267; // 0x373 PushI
	var_285_int = 4265; // 0x374 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x375 TObjFunc
	var_286_int = 3918; // 0x377 PushI
	var_287_int = -1; // 0x378 PushI
	var_288_int = 4266; // 0x379 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x37a TObjFunc
	return 0; // 0x37c Return
	
Label_893:
	var_289_int = 4267; // 0x37d PushI
	var_290_bool = var_35_string == var_289_int; // 0x37e Eq
	if(var_290_bool == 0) goto Label_916; // 0x37f JumpB
	var_291_string = ""; // 0x380 PushV
	var_291_string = "Neutral"; // 0x381 MovS
	func_600(var_36_bool, var_291_string); // 0x382 Call
	var_292_int = 3919; // 0x384 PushI
	SetMessage(var_292_int); // 0x385 TObjFunc
	ClearReplies(); // 0x387 TObjFunc
	var_293_int = 3920; // 0x389 PushI
	var_294_int = -1; // 0x38a PushI
	var_295_int = 4268; // 0x38b PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x38c TObjFunc
	var_296_int = 3921; // 0x38e PushI
	var_297_int = -1; // 0x38f PushI
	var_298_int = 4269; // 0x390 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x391 TObjFunc
	return 0; // 0x393 Return
	
Label_916:
	var_3_string = 1; // 0x394 TMovB
	var_299_bool = 0; // 0x395 PushV
	func_5645(var_299_bool); // 0x396 Call
	if(var_299_bool == 0) goto Label_924; // 0x398 JumpB
	lshStopAnimation(); // 0x399 Func
	goto Label_926; // 0x39b Jump
	
Label_926:
	return 0; // 0x39e Return
	
Label_924:
	StopAnimation(); // 0x39c Func
	
Label_928:
	return 0; // 0x3a0 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x513 PushI
	if(var_37_int == 0) goto Label_2766; // 0x514 JumpB
	func_5541(); // 0x516 Call
	var_39_int = 5450; // 0x518 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x519 Eq
	if(var_40_bool == 0) goto Label_1327; // 0x51a JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x51b PushV
	var_41_object = var_1_object; // 0x51c MovT
	var_42_object = var_0_object; // 0x51d MovT
	func_6015(); // 0x51e Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x520 PushV
	var_45_object = var_1_object; // 0x521 MovT
	var_46_object = var_0_object; // 0x522 MovT
	func_5753(); // 0x523 Call
	var_63_object = Obj(); var_64_object = Obj(); // 0x525 PushV
	var_63_object = var_1_object; // 0x526 MovT
	var_64_object = var_0_object; // 0x527 MovT
	func_5769(); // 0x528 Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x52a PushV
	var_89_object = var_1_object; // 0x52b MovT
	var_90_object = var_0_object; // 0x52c MovT
	func_5785(); // 0x52d Call
	
Label_1327:
	var_118_int = 5453; // 0x52f PushI
	var_119_bool = var_36_bool == var_118_int; // 0x530 Eq
	if(var_119_bool == 0) goto Label_1335; // 0x531 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x532 PushV
	var_120_object = var_1_object; // 0x533 MovT
	var_121_object = var_0_object; // 0x534 MovT
	func_6015(); // 0x535 Call
	
Label_1335:
	var_122_int = 5454; // 0x537 PushI
	var_123_bool = var_36_bool == var_122_int; // 0x538 Eq
	if(var_123_bool == 0) goto Label_1343; // 0x539 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x53a PushV
	var_124_object = var_1_object; // 0x53b MovT
	var_125_object = var_0_object; // 0x53c MovT
	func_6015(); // 0x53d Call
	
Label_1343:
	var_126_int = 5481; // 0x53f PushI
	var_127_bool = var_36_bool == var_126_int; // 0x540 Eq
	if(var_127_bool == 0) goto Label_1351; // 0x541 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x542 PushV
	var_128_object = var_1_object; // 0x543 MovT
	var_129_object = var_0_object; // 0x544 MovT
	func_6021(); // 0x545 Call
	
Label_1351:
	var_132_int = 5482; // 0x547 PushI
	var_133_bool = var_36_bool == var_132_int; // 0x548 Eq
	if(var_133_bool == 0) goto Label_1359; // 0x549 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x54a PushV
	var_134_object = var_1_object; // 0x54b MovT
	var_135_object = var_0_object; // 0x54c MovT
	func_6021(); // 0x54d Call
	
Label_1359:
	var_136_int = 5483; // 0x54f PushI
	var_137_bool = var_36_bool == var_136_int; // 0x550 Eq
	if(var_137_bool == 0) goto Label_1367; // 0x551 JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x552 PushV
	var_138_object = var_1_object; // 0x553 MovT
	var_139_object = var_0_object; // 0x554 MovT
	func_6021(); // 0x555 Call
	
Label_1367:
	var_140_int = 5488; // 0x557 PushI
	var_141_bool = var_36_bool == var_140_int; // 0x558 Eq
	if(var_141_bool == 0) goto Label_1385; // 0x559 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x55a PushV
	var_142_object = var_1_object; // 0x55b MovT
	var_143_object = var_0_object; // 0x55c MovT
	func_6052(); // 0x55d Call
	var_146_object = Obj(); var_147_object = Obj(); // 0x55f PushV
	var_146_object = var_1_object; // 0x560 MovT
	var_147_object = var_0_object; // 0x561 MovT
	func_5653(var_147_object); // 0x562 Call
	var_155_object = Obj(); var_156_object = Obj(); // 0x564 PushV
	var_155_object = var_1_object; // 0x565 MovT
	var_156_object = var_0_object; // 0x566 MovT
	func_5664(); // 0x567 Call
	
Label_1385:
	var_159_int = 5494; // 0x569 PushI
	var_160_bool = var_36_bool == var_159_int; // 0x56a Eq
	if(var_160_bool == 0) goto Label_1403; // 0x56b JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x56c PushV
	var_161_object = var_1_object; // 0x56d MovT
	var_162_object = var_0_object; // 0x56e MovT
	func_6052(); // 0x56f Call
	var_163_object = Obj(); var_164_object = Obj(); // 0x571 PushV
	var_163_object = var_1_object; // 0x572 MovT
	var_164_object = var_0_object; // 0x573 MovT
	func_5653(var_164_object); // 0x574 Call
	var_165_object = Obj(); var_166_object = Obj(); // 0x576 PushV
	var_165_object = var_1_object; // 0x577 MovT
	var_166_object = var_0_object; // 0x578 MovT
	func_5664(); // 0x579 Call
	
Label_1403:
	var_167_int = 5501; // 0x57b PushI
	var_168_bool = var_36_bool == var_167_int; // 0x57c Eq
	if(var_168_bool == 0) goto Label_1421; // 0x57d JumpB
	var_169_object = Obj(); var_170_object = Obj(); // 0x57e PushV
	var_169_object = var_1_object; // 0x57f MovT
	var_170_object = var_0_object; // 0x580 MovT
	func_6052(); // 0x581 Call
	var_171_object = Obj(); var_172_object = Obj(); // 0x583 PushV
	var_171_object = var_1_object; // 0x584 MovT
	var_172_object = var_0_object; // 0x585 MovT
	func_5664(); // 0x586 Call
	var_173_object = Obj(); var_174_object = Obj(); // 0x588 PushV
	var_173_object = var_1_object; // 0x589 MovT
	var_174_object = var_0_object; // 0x58a MovT
	func_5653(var_174_object); // 0x58b Call
	
Label_1421:
	var_175_int = 9529; // 0x58d PushI
	var_176_bool = var_36_bool == var_175_int; // 0x58e Eq
	if(var_176_bool == 0) goto Label_1439; // 0x58f JumpB
	var_177_object = Obj(); var_178_object = Obj(); // 0x590 PushV
	var_177_object = var_1_object; // 0x591 MovT
	var_178_object = var_0_object; // 0x592 MovT
	func_5785(); // 0x593 Call
	var_179_object = Obj(); var_180_object = Obj(); // 0x595 PushV
	var_179_object = var_1_object; // 0x596 MovT
	var_180_object = var_0_object; // 0x597 MovT
	func_5753(); // 0x598 Call
	var_181_object = Obj(); var_182_object = Obj(); // 0x59a PushV
	var_181_object = var_1_object; // 0x59b MovT
	var_182_object = var_0_object; // 0x59c MovT
	func_5769(); // 0x59d Call
	
Label_1439:
	var_183_int = 5526; // 0x59f PushI
	var_184_bool = var_36_bool == var_183_int; // 0x5a0 Eq
	if(var_184_bool == 0) goto Label_1447; // 0x5a1 JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0x5a2 PushV
	var_185_object = var_1_object; // 0x5a3 MovT
	var_186_object = var_0_object; // 0x5a4 MovT
	func_6058(); // 0x5a5 Call
	
Label_1447:
	var_189_int = 5539; // 0x5a7 PushI
	var_190_bool = var_36_bool == var_189_int; // 0x5a8 Eq
	if(var_190_bool == 0) goto Label_1455; // 0x5a9 JumpB
	var_191_object = Obj(); var_192_object = Obj(); // 0x5aa PushV
	var_191_object = var_1_object; // 0x5ab MovT
	var_192_object = var_0_object; // 0x5ac MovT
	func_6111(); // 0x5ad Call
	
Label_1455:
	var_195_int = 5542; // 0x5af PushI
	var_196_bool = var_36_bool == var_195_int; // 0x5b0 Eq
	if(var_196_bool == 0) goto Label_1463; // 0x5b1 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x5b2 PushV
	var_197_object = var_1_object; // 0x5b3 MovT
	var_198_object = var_0_object; // 0x5b4 MovT
	func_6111(); // 0x5b5 Call
	
Label_1463:
	var_199_int = 5540; // 0x5b7 PushI
	var_200_bool = var_36_bool == var_199_int; // 0x5b8 Eq
	if(var_200_bool == 0) goto Label_1471; // 0x5b9 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0x5ba PushV
	var_201_object = var_1_object; // 0x5bb MovT
	var_202_object = var_0_object; // 0x5bc MovT
	func_6111(); // 0x5bd Call
	
Label_1471:
	var_203_int = 5541; // 0x5bf PushI
	var_204_bool = var_36_bool == var_203_int; // 0x5c0 Eq
	if(var_204_bool == 0) goto Label_1479; // 0x5c1 JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x5c2 PushV
	var_205_object = var_1_object; // 0x5c3 MovT
	var_206_object = var_0_object; // 0x5c4 MovT
	func_6111(); // 0x5c5 Call
	
Label_1479:
	var_207_int = 5508; // 0x5c7 PushI
	var_208_bool = var_36_bool == var_207_int; // 0x5c8 Eq
	if(var_208_bool == 0) goto Label_1487; // 0x5c9 JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x5ca PushV
	var_209_object = var_1_object; // 0x5cb MovT
	var_210_object = var_0_object; // 0x5cc MovT
	func_6117(); // 0x5cd Call
	
Label_1487:
	var_213_int = 5509; // 0x5cf PushI
	var_214_bool = var_36_bool == var_213_int; // 0x5d0 Eq
	if(var_214_bool == 0) goto Label_1495; // 0x5d1 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x5d2 PushV
	var_215_object = var_1_object; // 0x5d3 MovT
	var_216_object = var_0_object; // 0x5d4 MovT
	func_6117(); // 0x5d5 Call
	
Label_1495:
	var_217_int = 5512; // 0x5d7 PushI
	var_218_bool = var_36_bool == var_217_int; // 0x5d8 Eq
	if(var_218_bool == 0) goto Label_1503; // 0x5d9 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x5da PushV
	var_219_object = var_1_object; // 0x5db MovT
	var_220_object = var_0_object; // 0x5dc MovT
	func_6117(); // 0x5dd Call
	
Label_1503:
	var_221_int = 5520; // 0x5df PushI
	var_222_bool = var_36_bool == var_221_int; // 0x5e0 Eq
	if(var_222_bool == 0) goto Label_1511; // 0x5e1 JumpB
	var_223_object = Obj(); var_224_object = Obj(); // 0x5e2 PushV
	var_223_object = var_1_object; // 0x5e3 MovT
	var_224_object = var_0_object; // 0x5e4 MovT
	func_6117(); // 0x5e5 Call
	
Label_1511:
	var_225_int = 5517; // 0x5e7 PushI
	var_226_bool = var_36_bool == var_225_int; // 0x5e8 Eq
	if(var_226_bool == 0) goto Label_1519; // 0x5e9 JumpB
	var_227_object = Obj(); var_228_object = Obj(); // 0x5ea PushV
	var_227_object = var_1_object; // 0x5eb MovT
	var_228_object = var_0_object; // 0x5ec MovT
	func_6117(); // 0x5ed Call
	
Label_1519:
	var_229_int = 7687; // 0x5ef PushI
	var_230_bool = var_36_bool == var_229_int; // 0x5f0 Eq
	if(var_230_bool == 0) goto Label_1527; // 0x5f1 JumpB
	var_231_object = Obj(); var_232_object = Obj(); // 0x5f2 PushV
	var_231_object = var_1_object; // 0x5f3 MovT
	var_232_object = var_0_object; // 0x5f4 MovT
	func_5682(); // 0x5f5 Call
	
Label_1527:
	var_235_int = 7696; // 0x5f7 PushI
	var_236_bool = var_36_bool == var_235_int; // 0x5f8 Eq
	if(var_236_bool == 0) goto Label_1535; // 0x5f9 JumpB
	var_237_object = Obj(); var_238_object = Obj(); // 0x5fa PushV
	var_237_object = var_1_object; // 0x5fb MovT
	var_238_object = var_0_object; // 0x5fc MovT
	func_5688(); // 0x5fd Call
	
Label_1535:
	var_241_int = 7702; // 0x5ff PushI
	var_242_bool = var_36_bool == var_241_int; // 0x600 Eq
	if(var_242_bool == 0) goto Label_1543; // 0x601 JumpB
	var_243_object = Obj(); var_244_object = Obj(); // 0x602 PushV
	var_243_object = var_1_object; // 0x603 MovT
	var_244_object = var_0_object; // 0x604 MovT
	func_5694(); // 0x605 Call
	
Label_1543:
	var_247_int = 7708; // 0x607 PushI
	var_248_bool = var_36_bool == var_247_int; // 0x608 Eq
	if(var_248_bool == 0) goto Label_1551; // 0x609 JumpB
	var_249_object = Obj(); var_250_object = Obj(); // 0x60a PushV
	var_249_object = var_1_object; // 0x60b MovT
	var_250_object = var_0_object; // 0x60c MovT
	func_5700(); // 0x60d Call
	
Label_1551:
	var_253_int = 5427; // 0x60f PushI
	var_254_bool = var_35_string == var_253_int; // 0x610 Eq
	if(var_254_bool == 0) goto Label_1806; // 0x611 JumpB
	var_255_bool = 0; // 0x612 PushV
	var_255_bool = 0; // 0x613 MovB
	var_256_bool = 0; var_257_object = Obj(); // 0x614 PushV
	var_257_object = var_1_object; // 0x615 MovT
	func_6506(var_257_object); // 0x616 Call
	if(var_256_bool == 0) goto Label_1567; // 0x618 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x619 PushV
	var_265_object = var_1_object; // 0x61a MovT
	func_6230(var_265_object); // 0x61b Call
	if(var_264_bool == 0) goto Label_1567; // 0x61d JumpB
	var_255_bool = 1; // 0x61e MovB
	
Label_1567:
	if(var_255_bool == 0) goto Label_1593; // 0x61f JumpB
	var_270_string = ""; // 0x620 PushV
	var_270_string = "Neutral"; // 0x621 MovS
	func_1282(var_36_bool, var_270_string); // 0x622 Call
	var_285_int = 4938; // 0x624 PushI
	SetMessage(var_285_int); // 0x625 TObjFunc
	ClearReplies(); // 0x627 TObjFunc
	var_286_int = 4949; // 0x629 PushI
	var_287_int = 5439; // 0x62a PushI
	var_288_int = 5438; // 0x62b PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x62c TObjFunc
	var_289_int = 4978; // 0x62e PushI
	var_290_int = 5439; // 0x62f PushI
	var_291_int = 5475; // 0x630 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x631 TObjFunc
	var_292_int = 4979; // 0x633 PushI
	var_293_int = 5439; // 0x634 PushI
	var_294_int = 5477; // 0x635 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x636 TObjFunc
	return 0; // 0x638 Return
	
Label_1593:
	var_295_bool = 0; var_296_object = Obj(); // 0x639 PushV
	var_296_object = var_1_object; // 0x63a MovT
	func_6362(var_296_object); // 0x63b Call
	if(var_295_bool == 0) goto Label_1618; // 0x63d JumpB
	var_301_string = ""; // 0x63e PushV
	var_301_string = "Neutral"; // 0x63f MovS
	func_1282(var_36_bool, var_301_string); // 0x640 Call
	var_302_int = 4940; // 0x642 PushI
	SetMessage(var_302_int); // 0x643 TObjFunc
	ClearReplies(); // 0x645 TObjFunc
	var_303_int = 4981; // 0x647 PushI
	var_304_int = 5480; // 0x648 PushI
	var_305_int = 5479; // 0x649 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x64a TObjFunc
	var_306_int = 4985; // 0x64c PushI
	var_307_int = -1; // 0x64d PushI
	var_308_int = 5483; // 0x64e PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x64f TObjFunc
	return 0; // 0x651 Return
	
Label_1618:
	var_309_bool = 0; // 0x652 PushV
	var_309_bool = 0; // 0x653 MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x654 PushV
	var_311_object = var_1_object; // 0x655 MovT
	func_6542(var_311_object); // 0x656 Call
	if(var_310_bool == 0) goto Label_1631; // 0x658 JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x659 PushV
	var_317_object = var_1_object; // 0x65a MovT
	func_6218(var_317_object); // 0x65b Call
	if(var_316_bool == 0) goto Label_1631; // 0x65d JumpB
	var_309_bool = 1; // 0x65e MovB
	
Label_1631:
	if(var_309_bool == 0) goto Label_1657; // 0x65f JumpB
	var_322_string = ""; // 0x660 PushV
	var_322_string = "Neutral"; // 0x661 MovS
	func_1282(var_36_bool, var_322_string); // 0x662 Call
	var_323_int = 4943; // 0x664 PushI
	SetMessage(var_323_int); // 0x665 TObjFunc
	ClearReplies(); // 0x667 TObjFunc
	var_324_int = 4987; // 0x669 PushI
	var_325_int = 5486; // 0x66a PushI
	var_326_int = 5485; // 0x66b PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x66c TObjFunc
	var_327_int = 4991; // 0x66e PushI
	var_328_int = 5490; // 0x66f PushI
	var_329_int = 5489; // 0x670 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x671 TObjFunc
	var_330_int = 4998; // 0x673 PushI
	var_331_int = 5498; // 0x674 PushI
	var_332_int = 5497; // 0x675 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x676 TObjFunc
	return 0; // 0x678 Return
	
Label_1657:
	var_333_string = ""; // 0x679 PushV
	var_333_string = "Neutral"; // 0x67a MovS
	func_1282(var_36_bool, var_333_string); // 0x67b Call
	var_334_int = 6582; // 0x67d PushI
	SetMessage(var_334_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_335_bool = 0; var_336_object = Obj(); // 0x682 PushV
	var_336_object = var_1_object; // 0x683 MovT
	func_6230(var_336_object); // 0x684 Call
	if(var_335_bool == 0) goto Label_1676; // 0x686 JumpB
	var_337_int = 8690; // 0x687 PushI
	var_338_int = 9528; // 0x688 PushI
	var_339_int = 9527; // 0x689 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x68a TObjFunc
	
Label_1676:
	var_340_bool = 0; // 0x68c PushV
	var_340_bool = 0; // 0x68d MovB
	var_341_bool = 0; var_342_object = Obj(); // 0x68e PushV
	var_342_object = var_1_object; // 0x68f MovT
	func_6578(var_342_object); // 0x690 Call
	if(var_341_bool == 0) goto Label_1689; // 0x692 JumpB
	var_347_bool = 0; var_348_object = Obj(); // 0x693 PushV
	var_348_object = var_1_object; // 0x694 MovT
	func_6242(var_348_object); // 0x695 Call
	if(var_347_bool == 0) goto Label_1689; // 0x697 JumpB
	var_340_bool = 1; // 0x698 MovB
	
Label_1689:
	if(var_340_bool == 0) goto Label_1695; // 0x699 JumpB
	var_353_int = 6583; // 0x69a PushI
	var_354_int = 5521; // 0x69b PushI
	var_355_int = 7252; // 0x69c PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x69d TObjFunc
	
Label_1695:
	var_356_bool = 0; // 0x69f PushV
	var_356_bool = 0; // 0x6a0 MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x6a1 PushV
	var_358_object = var_1_object; // 0x6a2 MovT
	func_6674(var_358_object); // 0x6a3 Call
	if(var_357_bool == 0) goto Label_1708; // 0x6a5 JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x6a6 PushV
	var_364_object = var_1_object; // 0x6a7 MovT
	func_6590(var_364_object); // 0x6a8 Call
	if(var_363_bool == 0) goto Label_1708; // 0x6aa JumpB
	var_356_bool = 1; // 0x6ab MovB
	
Label_1708:
	if(var_356_bool == 0) goto Label_1714; // 0x6ac JumpB
	var_369_int = 6590; // 0x6ad PushI
	var_370_int = 5533; // 0x6ae PushI
	var_371_int = 7259; // 0x6af PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x6b0 TObjFunc
	
Label_1714:
	var_372_bool = 0; var_373_object = Obj(); // 0x6b2 PushV
	var_373_object = var_1_object; // 0x6b3 MovT
	func_6602(var_373_object); // 0x6b4 Call
	if(var_372_bool == 0) goto Label_1724; // 0x6b6 JumpB
	var_378_int = 6586; // 0x6b7 PushI
	var_379_int = 5503; // 0x6b8 PushI
	var_380_int = 7255; // 0x6b9 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x6ba TObjFunc
	
Label_1724:
	var_381_bool = 0; // 0x6bc PushV
	var_381_bool = 0; // 0x6bd MovB
	var_382_bool = 0; var_383_object = Obj(); // 0x6be PushV
	var_383_object = var_1_object; // 0x6bf MovT
	func_6746(var_383_object); // 0x6c0 Call
	if(var_382_bool == 0) goto Label_1737; // 0x6c2 JumpB
	var_388_bool = 0; var_389_object = Obj(); // 0x6c3 PushV
	var_389_object = var_1_object; // 0x6c4 MovT
	func_6254(var_389_object); // 0x6c5 Call
	if(var_388_bool == 0) goto Label_1737; // 0x6c7 JumpB
	var_381_bool = 1; // 0x6c8 MovB
	
Label_1737:
	if(var_381_bool == 0) goto Label_1743; // 0x6c9 JumpB
	var_394_int = 6592; // 0x6ca PushI
	var_395_int = 7679; // 0x6cb PushI
	var_396_int = 7261; // 0x6cc PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x6cd TObjFunc
	
Label_1743:
	var_397_bool = 0; // 0x6cf PushV
	var_397_bool = 0; // 0x6d0 MovB
	var_398_bool = 0; var_399_object = Obj(); // 0x6d1 PushV
	var_399_object = var_1_object; // 0x6d2 MovT
	func_6626(var_399_object); // 0x6d3 Call
	if(var_398_bool == 0) goto Label_1756; // 0x6d5 JumpB
	var_404_bool = 0; var_405_object = Obj(); // 0x6d6 PushV
	var_405_object = var_1_object; // 0x6d7 MovT
	func_6266(var_405_object); // 0x6d8 Call
	if(var_404_bool == 0) goto Label_1756; // 0x6da JumpB
	var_397_bool = 1; // 0x6db MovB
	
Label_1756:
	if(var_397_bool == 0) goto Label_1762; // 0x6dc JumpB
	var_410_int = 6595; // 0x6dd PushI
	var_411_int = 7689; // 0x6de PushI
	var_412_int = 7264; // 0x6df PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x6e0 TObjFunc
	
Label_1762:
	var_413_bool = 0; // 0x6e2 PushV
	var_413_bool = 0; // 0x6e3 MovB
	var_414_bool = 0; var_415_object = Obj(); // 0x6e4 PushV
	var_415_object = var_1_object; // 0x6e5 MovT
	func_6758(var_415_object); // 0x6e6 Call
	if(var_414_bool == 0) goto Label_1775; // 0x6e8 JumpB
	var_420_bool = 0; var_421_object = Obj(); // 0x6e9 PushV
	var_421_object = var_1_object; // 0x6ea MovT
	func_6278(var_421_object); // 0x6eb Call
	if(var_420_bool == 0) goto Label_1775; // 0x6ed JumpB
	var_413_bool = 1; // 0x6ee MovB
	
Label_1775:
	if(var_413_bool == 0) goto Label_1781; // 0x6ef JumpB
	var_426_int = 6602; // 0x6f0 PushI
	var_427_int = 7697; // 0x6f1 PushI
	var_428_int = 7271; // 0x6f2 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x6f3 TObjFunc
	
Label_1781:
	var_429_bool = 0; // 0x6f5 PushV
	var_429_bool = 0; // 0x6f6 MovB
	var_430_bool = 0; var_431_object = Obj(); // 0x6f7 PushV
	var_431_object = var_1_object; // 0x6f8 MovT
	func_6686(var_431_object); // 0x6f9 Call
	if(var_430_bool == 0) goto Label_1794; // 0x6fb JumpB
	var_436_bool = 0; var_437_object = Obj(); // 0x6fc PushV
	var_437_object = var_1_object; // 0x6fd MovT
	func_6290(var_437_object); // 0x6fe Call
	if(var_436_bool == 0) goto Label_1794; // 0x700 JumpB
	var_429_bool = 1; // 0x701 MovB
	
Label_1794:
	if(var_429_bool == 0) goto Label_1800; // 0x702 JumpB
	var_442_int = 6605; // 0x703 PushI
	var_443_int = 7703; // 0x704 PushI
	var_444_int = 7274; // 0x705 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x706 TObjFunc
	
Label_1800:
	var_445_int = 7538; // 0x708 PushI
	var_446_int = -1; // 0x709 PushI
	var_447_int = 8320; // 0x70a PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x70b TObjFunc
	return 0; // 0x70d Return
	
Label_1806:
	var_448_int = 7703; // 0x70e PushI
	var_449_bool = var_35_string == var_448_int; // 0x70f Eq
	if(var_449_bool == 0) goto Label_1824; // 0x710 JumpB
	var_450_string = ""; // 0x711 PushV
	var_450_string = "Neutral"; // 0x712 MovS
	func_1282(var_36_bool, var_450_string); // 0x713 Call
	var_451_int = 6995; // 0x715 PushI
	SetMessage(var_451_int); // 0x716 TObjFunc
	ClearReplies(); // 0x718 TObjFunc
	var_452_int = 6996; // 0x71a PushI
	var_453_int = 7705; // 0x71b PushI
	var_454_int = 7704; // 0x71c PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x71d TObjFunc
	return 0; // 0x71f Return
	
Label_1824:
	var_455_int = 7705; // 0x720 PushI
	var_456_bool = var_35_string == var_455_int; // 0x721 Eq
	if(var_456_bool == 0) goto Label_1842; // 0x722 JumpB
	var_457_string = ""; // 0x723 PushV
	var_457_string = "Neutral"; // 0x724 MovS
	func_1282(var_36_bool, var_457_string); // 0x725 Call
	var_458_int = 6997; // 0x727 PushI
	SetMessage(var_458_int); // 0x728 TObjFunc
	ClearReplies(); // 0x72a TObjFunc
	var_459_int = 6998; // 0x72c PushI
	var_460_int = 7707; // 0x72d PushI
	var_461_int = 7706; // 0x72e PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x72f TObjFunc
	return 0; // 0x731 Return
	
Label_1842:
	var_462_int = 7707; // 0x732 PushI
	var_463_bool = var_35_string == var_462_int; // 0x733 Eq
	if(var_463_bool == 0) goto Label_1860; // 0x734 JumpB
	var_464_string = ""; // 0x735 PushV
	var_464_string = "Neutral"; // 0x736 MovS
	func_1282(var_36_bool, var_464_string); // 0x737 Call
	var_465_int = 6999; // 0x739 PushI
	SetMessage(var_465_int); // 0x73a TObjFunc
	ClearReplies(); // 0x73c TObjFunc
	var_466_int = 7000; // 0x73e PushI
	var_467_int = -1; // 0x73f PushI
	var_468_int = 7708; // 0x740 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x741 TObjFunc
	return 0; // 0x743 Return
	
Label_1860:
	var_469_int = 7697; // 0x744 PushI
	var_470_bool = var_35_string == var_469_int; // 0x745 Eq
	if(var_470_bool == 0) goto Label_1878; // 0x746 JumpB
	var_471_string = ""; // 0x747 PushV
	var_471_string = "Neutral"; // 0x748 MovS
	func_1282(var_36_bool, var_471_string); // 0x749 Call
	var_472_int = 6989; // 0x74b PushI
	SetMessage(var_472_int); // 0x74c TObjFunc
	ClearReplies(); // 0x74e TObjFunc
	var_473_int = 6990; // 0x750 PushI
	var_474_int = 7699; // 0x751 PushI
	var_475_int = 7698; // 0x752 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x753 TObjFunc
	return 0; // 0x755 Return
	
Label_1878:
	var_476_int = 7699; // 0x756 PushI
	var_477_bool = var_35_string == var_476_int; // 0x757 Eq
	if(var_477_bool == 0) goto Label_1896; // 0x758 JumpB
	var_478_string = ""; // 0x759 PushV
	var_478_string = "Neutral"; // 0x75a MovS
	func_1282(var_36_bool, var_478_string); // 0x75b Call
	var_479_int = 6991; // 0x75d PushI
	SetMessage(var_479_int); // 0x75e TObjFunc
	ClearReplies(); // 0x760 TObjFunc
	var_480_int = 6992; // 0x762 PushI
	var_481_int = 7701; // 0x763 PushI
	var_482_int = 7700; // 0x764 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x765 TObjFunc
	return 0; // 0x767 Return
	
Label_1896:
	var_483_int = 7701; // 0x768 PushI
	var_484_bool = var_35_string == var_483_int; // 0x769 Eq
	if(var_484_bool == 0) goto Label_1914; // 0x76a JumpB
	var_485_string = ""; // 0x76b PushV
	var_485_string = "Neutral"; // 0x76c MovS
	func_1282(var_36_bool, var_485_string); // 0x76d Call
	var_486_int = 6993; // 0x76f PushI
	SetMessage(var_486_int); // 0x770 TObjFunc
	ClearReplies(); // 0x772 TObjFunc
	var_487_int = 6994; // 0x774 PushI
	var_488_int = -1; // 0x775 PushI
	var_489_int = 7702; // 0x776 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x777 TObjFunc
	return 0; // 0x779 Return
	
Label_1914:
	var_490_int = 7689; // 0x77a PushI
	var_491_bool = var_35_string == var_490_int; // 0x77b Eq
	if(var_491_bool == 0) goto Label_1932; // 0x77c JumpB
	var_492_string = ""; // 0x77d PushV
	var_492_string = "Neutral"; // 0x77e MovS
	func_1282(var_36_bool, var_492_string); // 0x77f Call
	var_493_int = 6981; // 0x781 PushI
	SetMessage(var_493_int); // 0x782 TObjFunc
	ClearReplies(); // 0x784 TObjFunc
	var_494_int = 6982; // 0x786 PushI
	var_495_int = 7691; // 0x787 PushI
	var_496_int = 7690; // 0x788 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x789 TObjFunc
	return 0; // 0x78b Return
	
Label_1932:
	var_497_int = 7691; // 0x78c PushI
	var_498_bool = var_35_string == var_497_int; // 0x78d Eq
	if(var_498_bool == 0) goto Label_1950; // 0x78e JumpB
	var_499_string = ""; // 0x78f PushV
	var_499_string = "Neutral"; // 0x790 MovS
	func_1282(var_36_bool, var_499_string); // 0x791 Call
	var_500_int = 6983; // 0x793 PushI
	SetMessage(var_500_int); // 0x794 TObjFunc
	ClearReplies(); // 0x796 TObjFunc
	var_501_int = 6984; // 0x798 PushI
	var_502_int = 7693; // 0x799 PushI
	var_503_int = 7692; // 0x79a PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x79b TObjFunc
	return 0; // 0x79d Return
	
Label_1950:
	var_504_int = 7693; // 0x79e PushI
	var_505_bool = var_35_string == var_504_int; // 0x79f Eq
	if(var_505_bool == 0) goto Label_1968; // 0x7a0 JumpB
	var_506_string = ""; // 0x7a1 PushV
	var_506_string = "Neutral"; // 0x7a2 MovS
	func_1282(var_36_bool, var_506_string); // 0x7a3 Call
	var_507_int = 6985; // 0x7a5 PushI
	SetMessage(var_507_int); // 0x7a6 TObjFunc
	ClearReplies(); // 0x7a8 TObjFunc
	var_508_int = 6986; // 0x7aa PushI
	var_509_int = 7695; // 0x7ab PushI
	var_510_int = 7694; // 0x7ac PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x7ad TObjFunc
	return 0; // 0x7af Return
	
Label_1968:
	var_511_int = 7695; // 0x7b0 PushI
	var_512_bool = var_35_string == var_511_int; // 0x7b1 Eq
	if(var_512_bool == 0) goto Label_1986; // 0x7b2 JumpB
	var_513_string = ""; // 0x7b3 PushV
	var_513_string = "Neutral"; // 0x7b4 MovS
	func_1282(var_36_bool, var_513_string); // 0x7b5 Call
	var_514_int = 6987; // 0x7b7 PushI
	SetMessage(var_514_int); // 0x7b8 TObjFunc
	ClearReplies(); // 0x7ba TObjFunc
	var_515_int = 6988; // 0x7bc PushI
	var_516_int = -1; // 0x7bd PushI
	var_517_int = 7696; // 0x7be PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x7bf TObjFunc
	return 0; // 0x7c1 Return
	
Label_1986:
	var_518_int = 7679; // 0x7c2 PushI
	var_519_bool = var_35_string == var_518_int; // 0x7c3 Eq
	if(var_519_bool == 0) goto Label_2004; // 0x7c4 JumpB
	var_520_string = ""; // 0x7c5 PushV
	var_520_string = "Neutral"; // 0x7c6 MovS
	func_1282(var_36_bool, var_520_string); // 0x7c7 Call
	var_521_int = 6972; // 0x7c9 PushI
	SetMessage(var_521_int); // 0x7ca TObjFunc
	ClearReplies(); // 0x7cc TObjFunc
	var_522_int = 6973; // 0x7ce PushI
	var_523_int = 7681; // 0x7cf PushI
	var_524_int = 7680; // 0x7d0 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x7d1 TObjFunc
	return 0; // 0x7d3 Return
	
Label_2004:
	var_525_int = 7681; // 0x7d4 PushI
	var_526_bool = var_35_string == var_525_int; // 0x7d5 Eq
	if(var_526_bool == 0) goto Label_2027; // 0x7d6 JumpB
	var_527_string = ""; // 0x7d7 PushV
	var_527_string = "Neutral"; // 0x7d8 MovS
	func_1282(var_36_bool, var_527_string); // 0x7d9 Call
	var_528_int = 6974; // 0x7db PushI
	SetMessage(var_528_int); // 0x7dc TObjFunc
	ClearReplies(); // 0x7de TObjFunc
	var_529_int = 6975; // 0x7e0 PushI
	var_530_int = 7684; // 0x7e1 PushI
	var_531_int = 7682; // 0x7e2 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x7e3 TObjFunc
	var_532_int = 6976; // 0x7e5 PushI
	var_533_int = 7684; // 0x7e6 PushI
	var_534_int = 7683; // 0x7e7 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x7e8 TObjFunc
	return 0; // 0x7ea Return
	
Label_2027:
	var_535_int = 7684; // 0x7eb PushI
	var_536_bool = var_35_string == var_535_int; // 0x7ec Eq
	if(var_536_bool == 0) goto Label_2045; // 0x7ed JumpB
	var_537_string = ""; // 0x7ee PushV
	var_537_string = "Neutral"; // 0x7ef MovS
	func_1282(var_36_bool, var_537_string); // 0x7f0 Call
	var_538_int = 6977; // 0x7f2 PushI
	SetMessage(var_538_int); // 0x7f3 TObjFunc
	ClearReplies(); // 0x7f5 TObjFunc
	var_539_int = 6978; // 0x7f7 PushI
	var_540_int = 7686; // 0x7f8 PushI
	var_541_int = 7685; // 0x7f9 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x7fa TObjFunc
	return 0; // 0x7fc Return
	
Label_2045:
	var_542_int = 7686; // 0x7fd PushI
	var_543_bool = var_35_string == var_542_int; // 0x7fe Eq
	if(var_543_bool == 0) goto Label_2063; // 0x7ff JumpB
	var_544_string = ""; // 0x800 PushV
	var_544_string = "Neutral"; // 0x801 MovS
	func_1282(var_36_bool, var_544_string); // 0x802 Call
	var_545_int = 6979; // 0x804 PushI
	SetMessage(var_545_int); // 0x805 TObjFunc
	ClearReplies(); // 0x807 TObjFunc
	var_546_int = 6980; // 0x809 PushI
	var_547_int = -1; // 0x80a PushI
	var_548_int = 7687; // 0x80b PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x80c TObjFunc
	return 0; // 0x80e Return
	
Label_2063:
	var_549_int = 5503; // 0x80f PushI
	var_550_bool = var_35_string == var_549_int; // 0x810 Eq
	if(var_550_bool == 0) goto Label_2091; // 0x811 JumpB
	var_551_object = Obj(); var_552_object = Obj(); // 0x812 PushV
	var_551_object = var_1_object; // 0x813 MovT
	var_552_object = var_0_object; // 0x814 MovT
	func_5747(); // 0x815 Call
	var_555_string = ""; // 0x817 PushV
	var_555_string = "Neutral"; // 0x818 MovS
	func_1282(var_36_bool, var_555_string); // 0x819 Call
	var_556_int = 5004; // 0x81b PushI
	SetMessage(var_556_int); // 0x81c TObjFunc
	ClearReplies(); // 0x81e TObjFunc
	var_557_int = 5005; // 0x820 PushI
	var_558_int = 5505; // 0x821 PushI
	var_559_int = 5504; // 0x822 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x823 TObjFunc
	var_560_int = 5015; // 0x825 PushI
	var_561_int = 5515; // 0x826 PushI
	var_562_int = 5514; // 0x827 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x828 TObjFunc
	return 0; // 0x82a Return
	
Label_2091:
	var_563_int = 5515; // 0x82b PushI
	var_564_bool = var_35_string == var_563_int; // 0x82c Eq
	if(var_564_bool == 0) goto Label_2114; // 0x82d JumpB
	var_565_string = ""; // 0x82e PushV
	var_565_string = "Neutral"; // 0x82f MovS
	func_1282(var_36_bool, var_565_string); // 0x830 Call
	var_566_int = 5016; // 0x832 PushI
	SetMessage(var_566_int); // 0x833 TObjFunc
	ClearReplies(); // 0x835 TObjFunc
	var_567_int = 5017; // 0x837 PushI
	var_568_int = 5519; // 0x838 PushI
	var_569_int = 5516; // 0x839 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x83a TObjFunc
	var_570_int = 5018; // 0x83c PushI
	var_571_int = -1; // 0x83d PushI
	var_572_int = 5517; // 0x83e PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x83f TObjFunc
	return 0; // 0x841 Return
	
Label_2114:
	var_573_int = 5519; // 0x842 PushI
	var_574_bool = var_35_string == var_573_int; // 0x843 Eq
	if(var_574_bool == 0) goto Label_2132; // 0x844 JumpB
	var_575_string = ""; // 0x845 PushV
	var_575_string = "Neutral"; // 0x846 MovS
	func_1282(var_36_bool, var_575_string); // 0x847 Call
	var_576_int = 5019; // 0x849 PushI
	SetMessage(var_576_int); // 0x84a TObjFunc
	ClearReplies(); // 0x84c TObjFunc
	var_577_int = 5020; // 0x84e PushI
	var_578_int = -1; // 0x84f PushI
	var_579_int = 5520; // 0x850 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x851 TObjFunc
	return 0; // 0x853 Return
	
Label_2132:
	var_580_int = 5505; // 0x854 PushI
	var_581_bool = var_35_string == var_580_int; // 0x855 Eq
	if(var_581_bool == 0) goto Label_2161; // 0x856 JumpB
	var_582_string = ""; // 0x857 PushV
	var_582_string = "Neutral"; // 0x858 MovS
	func_1282(var_36_bool, var_582_string); // 0x859 Call
	var_583_int = 5006; // 0x85b PushI
	SetMessage(var_583_int); // 0x85c TObjFunc
	ClearReplies(); // 0x85e TObjFunc
	var_584_bool = 0; var_585_object = Obj(); // 0x860 PushV
	var_585_object = var_1_object; // 0x861 MovT
	func_6482(var_585_object); // 0x862 Call
	var_590_bool = var_584_bool == 0; // 0x864 Not
	if(var_590_bool == 0) goto Label_2155; // 0x865 JumpB
	var_591_int = 5007; // 0x866 PushI
	var_592_int = 5507; // 0x867 PushI
	var_593_int = 5506; // 0x868 PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x869 TObjFunc
	
Label_2155:
	var_594_int = 5011; // 0x86b PushI
	var_595_int = 5511; // 0x86c PushI
	var_596_int = 5510; // 0x86d PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x86e TObjFunc
	return 0; // 0x870 Return
	
Label_2161:
	var_597_int = 5511; // 0x871 PushI
	var_598_bool = var_35_string == var_597_int; // 0x872 Eq
	if(var_598_bool == 0) goto Label_2179; // 0x873 JumpB
	var_599_string = ""; // 0x874 PushV
	var_599_string = "Neutral"; // 0x875 MovS
	func_1282(var_36_bool, var_599_string); // 0x876 Call
	var_600_int = 5012; // 0x878 PushI
	SetMessage(var_600_int); // 0x879 TObjFunc
	ClearReplies(); // 0x87b TObjFunc
	var_601_int = 5013; // 0x87d PushI
	var_602_int = -1; // 0x87e PushI
	var_603_int = 5512; // 0x87f PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x880 TObjFunc
	return 0; // 0x882 Return
	
Label_2179:
	var_604_int = 5507; // 0x883 PushI
	var_605_bool = var_35_string == var_604_int; // 0x884 Eq
	if(var_605_bool == 0) goto Label_2217; // 0x885 JumpB
	var_606_object = Obj(); var_607_object = Obj(); // 0x886 PushV
	var_606_object = var_1_object; // 0x887 MovT
	var_607_object = var_0_object; // 0x888 MovT
	func_5997(); // 0x889 Call
	var_610_object = Obj(); var_611_object = Obj(); // 0x88b PushV
	var_610_object = var_1_object; // 0x88c MovT
	var_611_object = var_0_object; // 0x88d MovT
	func_6003(); // 0x88e Call
	var_614_object = Obj(); var_615_object = Obj(); // 0x890 PushV
	var_614_object = var_1_object; // 0x891 MovT
	var_615_object = var_0_object; // 0x892 MovT
	func_6009(); // 0x893 Call
	var_618_string = ""; // 0x895 PushV
	var_618_string = "Neutral"; // 0x896 MovS
	func_1282(var_36_bool, var_618_string); // 0x897 Call
	var_619_int = 5008; // 0x899 PushI
	SetMessage(var_619_int); // 0x89a TObjFunc
	ClearReplies(); // 0x89c TObjFunc
	var_620_int = 5009; // 0x89e PushI
	var_621_int = -1; // 0x89f PushI
	var_622_int = 5508; // 0x8a0 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x8a1 TObjFunc
	var_623_int = 5010; // 0x8a3 PushI
	var_624_int = -1; // 0x8a4 PushI
	var_625_int = 5509; // 0x8a5 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x8a6 TObjFunc
	return 0; // 0x8a8 Return
	
Label_2217:
	var_626_int = 5533; // 0x8a9 PushI
	var_627_bool = var_35_string == var_626_int; // 0x8aa Eq
	if(var_627_bool == 0) goto Label_2240; // 0x8ab JumpB
	var_628_string = ""; // 0x8ac PushV
	var_628_string = "Neutral"; // 0x8ad MovS
	func_1282(var_36_bool, var_628_string); // 0x8ae Call
	var_629_int = 5031; // 0x8b0 PushI
	SetMessage(var_629_int); // 0x8b1 TObjFunc
	ClearReplies(); // 0x8b3 TObjFunc
	var_630_int = 5032; // 0x8b5 PushI
	var_631_int = 5535; // 0x8b6 PushI
	var_632_int = 5534; // 0x8b7 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x8b8 TObjFunc
	var_633_int = 5039; // 0x8ba PushI
	var_634_int = -1; // 0x8bb PushI
	var_635_int = 5541; // 0x8bc PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x8bd TObjFunc
	return 0; // 0x8bf Return
	
Label_2240:
	var_636_int = 5535; // 0x8c0 PushI
	var_637_bool = var_35_string == var_636_int; // 0x8c1 Eq
	if(var_637_bool == 0) goto Label_2268; // 0x8c2 JumpB
	var_638_object = Obj(); var_639_object = Obj(); // 0x8c3 PushV
	var_638_object = var_1_object; // 0x8c4 MovT
	var_639_object = var_0_object; // 0x8c5 MovT
	func_5794(); // 0x8c6 Call
	var_642_string = ""; // 0x8c8 PushV
	var_642_string = "Neutral"; // 0x8c9 MovS
	func_1282(var_36_bool, var_642_string); // 0x8ca Call
	var_643_int = 5033; // 0x8cc PushI
	SetMessage(var_643_int); // 0x8cd TObjFunc
	ClearReplies(); // 0x8cf TObjFunc
	var_644_int = 5034; // 0x8d1 PushI
	var_645_int = 5537; // 0x8d2 PushI
	var_646_int = 5536; // 0x8d3 PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x8d4 TObjFunc
	var_647_int = 5038; // 0x8d6 PushI
	var_648_int = -1; // 0x8d7 PushI
	var_649_int = 5540; // 0x8d8 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x8d9 TObjFunc
	return 0; // 0x8db Return
	
Label_2268:
	var_650_int = 5537; // 0x8dc PushI
	var_651_bool = var_35_string == var_650_int; // 0x8dd Eq
	if(var_651_bool == 0) goto Label_2291; // 0x8de JumpB
	var_652_string = ""; // 0x8df PushV
	var_652_string = "Neutral"; // 0x8e0 MovS
	func_1282(var_36_bool, var_652_string); // 0x8e1 Call
	var_653_int = 5035; // 0x8e3 PushI
	SetMessage(var_653_int); // 0x8e4 TObjFunc
	ClearReplies(); // 0x8e6 TObjFunc
	var_654_int = 5037; // 0x8e8 PushI
	var_655_int = -1; // 0x8e9 PushI
	var_656_int = 5539; // 0x8ea PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x8eb TObjFunc
	var_657_int = 5040; // 0x8ed PushI
	var_658_int = -1; // 0x8ee PushI
	var_659_int = 5542; // 0x8ef PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x8f0 TObjFunc
	return 0; // 0x8f2 Return
	
Label_2291:
	var_660_int = 5521; // 0x8f3 PushI
	var_661_bool = var_35_string == var_660_int; // 0x8f4 Eq
	if(var_661_bool == 0) goto Label_2319; // 0x8f5 JumpB
	var_662_string = ""; // 0x8f6 PushV
	var_662_string = "Neutral"; // 0x8f7 MovS
	func_1282(var_36_bool, var_662_string); // 0x8f8 Call
	var_663_int = 5021; // 0x8fa PushI
	SetMessage(var_663_int); // 0x8fb TObjFunc
	ClearReplies(); // 0x8fd TObjFunc
	var_664_int = 5022; // 0x8ff PushI
	var_665_int = 5523; // 0x900 PushI
	var_666_int = 5522; // 0x901 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x902 TObjFunc
	var_667_int = 5027; // 0x904 PushI
	var_668_int = 5528; // 0x905 PushI
	var_669_int = 5527; // 0x906 PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x907 TObjFunc
	var_670_int = 5030; // 0x909 PushI
	var_671_int = 5528; // 0x90a PushI
	var_672_int = 5531; // 0x90b PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x90c TObjFunc
	return 0; // 0x90e Return
	
Label_2319:
	var_673_int = 5528; // 0x90f PushI
	var_674_bool = var_35_string == var_673_int; // 0x910 Eq
	if(var_674_bool == 0) goto Label_2342; // 0x911 JumpB
	var_675_string = ""; // 0x912 PushV
	var_675_string = "Neutral"; // 0x913 MovS
	func_1282(var_36_bool, var_675_string); // 0x914 Call
	var_676_int = 5028; // 0x916 PushI
	SetMessage(var_676_int); // 0x917 TObjFunc
	ClearReplies(); // 0x919 TObjFunc
	var_677_int = 5029; // 0x91b PushI
	var_678_int = 5525; // 0x91c PushI
	var_679_int = 5529; // 0x91d PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x91e TObjFunc
	var_680_int = 5041; // 0x920 PushI
	var_681_int = 5544; // 0x921 PushI
	var_682_int = 5543; // 0x922 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x923 TObjFunc
	return 0; // 0x925 Return
	
Label_2342:
	var_683_int = 5544; // 0x926 PushI
	var_684_bool = var_35_string == var_683_int; // 0x927 Eq
	if(var_684_bool == 0) goto Label_2360; // 0x928 JumpB
	var_685_string = ""; // 0x929 PushV
	var_685_string = "Neutral"; // 0x92a MovS
	func_1282(var_36_bool, var_685_string); // 0x92b Call
	var_686_int = 5042; // 0x92d PushI
	SetMessage(var_686_int); // 0x92e TObjFunc
	ClearReplies(); // 0x930 TObjFunc
	var_687_int = 5043; // 0x932 PushI
	var_688_int = 5525; // 0x933 PushI
	var_689_int = 5545; // 0x934 PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x935 TObjFunc
	return 0; // 0x937 Return
	
Label_2360:
	var_690_int = 5523; // 0x938 PushI
	var_691_bool = var_35_string == var_690_int; // 0x939 Eq
	if(var_691_bool == 0) goto Label_2378; // 0x93a JumpB
	var_692_string = ""; // 0x93b PushV
	var_692_string = "Neutral"; // 0x93c MovS
	func_1282(var_36_bool, var_692_string); // 0x93d Call
	var_693_int = 5023; // 0x93f PushI
	SetMessage(var_693_int); // 0x940 TObjFunc
	ClearReplies(); // 0x942 TObjFunc
	var_694_int = 5024; // 0x944 PushI
	var_695_int = 5525; // 0x945 PushI
	var_696_int = 5524; // 0x946 PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0x947 TObjFunc
	return 0; // 0x949 Return
	
Label_2378:
	var_697_int = 5525; // 0x94a PushI
	var_698_bool = var_35_string == var_697_int; // 0x94b Eq
	if(var_698_bool == 0) goto Label_2396; // 0x94c JumpB
	var_699_string = ""; // 0x94d PushV
	var_699_string = "Neutral"; // 0x94e MovS
	func_1282(var_36_bool, var_699_string); // 0x94f Call
	var_700_int = 5025; // 0x951 PushI
	SetMessage(var_700_int); // 0x952 TObjFunc
	ClearReplies(); // 0x954 TObjFunc
	var_701_int = 5026; // 0x956 PushI
	var_702_int = -1; // 0x957 PushI
	var_703_int = 5526; // 0x958 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x959 TObjFunc
	return 0; // 0x95b Return
	
Label_2396:
	var_704_int = 9528; // 0x95c PushI
	var_705_bool = var_35_string == var_704_int; // 0x95d Eq
	if(var_705_bool == 0) goto Label_2414; // 0x95e JumpB
	var_706_string = ""; // 0x95f PushV
	var_706_string = "Neutral"; // 0x960 MovS
	func_1282(var_36_bool, var_706_string); // 0x961 Call
	var_707_int = 8691; // 0x963 PushI
	SetMessage(var_707_int); // 0x964 TObjFunc
	ClearReplies(); // 0x966 TObjFunc
	var_708_int = 8692; // 0x968 PushI
	var_709_int = -1; // 0x969 PushI
	var_710_int = 9529; // 0x96a PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0x96b TObjFunc
	return 0; // 0x96d Return
	
Label_2414:
	var_711_int = 5498; // 0x96e PushI
	var_712_bool = var_35_string == var_711_int; // 0x96f Eq
	if(var_712_bool == 0) goto Label_2432; // 0x970 JumpB
	var_713_string = ""; // 0x971 PushV
	var_713_string = "Neutral"; // 0x972 MovS
	func_1282(var_36_bool, var_713_string); // 0x973 Call
	var_714_int = 4999; // 0x975 PushI
	SetMessage(var_714_int); // 0x976 TObjFunc
	ClearReplies(); // 0x978 TObjFunc
	var_715_int = 5000; // 0x97a PushI
	var_716_int = 5500; // 0x97b PushI
	var_717_int = 5499; // 0x97c PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x97d TObjFunc
	return 0; // 0x97f Return
	
Label_2432:
	var_718_int = 5500; // 0x980 PushI
	var_719_bool = var_35_string == var_718_int; // 0x981 Eq
	if(var_719_bool == 0) goto Label_2450; // 0x982 JumpB
	var_720_string = ""; // 0x983 PushV
	var_720_string = "Neutral"; // 0x984 MovS
	func_1282(var_36_bool, var_720_string); // 0x985 Call
	var_721_int = 5001; // 0x987 PushI
	SetMessage(var_721_int); // 0x988 TObjFunc
	ClearReplies(); // 0x98a TObjFunc
	var_722_int = 5002; // 0x98c PushI
	var_723_int = -1; // 0x98d PushI
	var_724_int = 5501; // 0x98e PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_725_int = 5490; // 0x992 PushI
	var_726_bool = var_35_string == var_725_int; // 0x993 Eq
	if(var_726_bool == 0) goto Label_2473; // 0x994 JumpB
	var_727_string = ""; // 0x995 PushV
	var_727_string = "Neutral"; // 0x996 MovS
	func_1282(var_36_bool, var_727_string); // 0x997 Call
	var_728_int = 4992; // 0x999 PushI
	SetMessage(var_728_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_729_int = 4993; // 0x99e PushI
	var_730_int = 5492; // 0x99f PushI
	var_731_int = 5491; // 0x9a0 PushI
	AddReply(var_729_int, var_730_int, var_731_int); // 0x9a1 TObjFunc
	var_732_int = 4997; // 0x9a3 PushI
	var_733_int = 5492; // 0x9a4 PushI
	var_734_int = 5495; // 0x9a5 PushI
	AddReply(var_732_int, var_733_int, var_734_int); // 0x9a6 TObjFunc
	return 0; // 0x9a8 Return
	
Label_2473:
	var_735_int = 5492; // 0x9a9 PushI
	var_736_bool = var_35_string == var_735_int; // 0x9aa Eq
	if(var_736_bool == 0) goto Label_2491; // 0x9ab JumpB
	var_737_string = ""; // 0x9ac PushV
	var_737_string = "Crying"; // 0x9ad MovS
	func_1282(var_36_bool, var_737_string); // 0x9ae Call
	var_738_int = 4994; // 0x9b0 PushI
	SetMessage(var_738_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_739_int = 4996; // 0x9b5 PushI
	var_740_int = -1; // 0x9b6 PushI
	var_741_int = 5494; // 0x9b7 PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0x9b8 TObjFunc
	return 0; // 0x9ba Return
	
Label_2491:
	var_742_int = 5486; // 0x9bb PushI
	var_743_bool = var_35_string == var_742_int; // 0x9bc Eq
	if(var_743_bool == 0) goto Label_2509; // 0x9bd JumpB
	var_744_string = ""; // 0x9be PushV
	var_744_string = "Neutral"; // 0x9bf MovS
	func_1282(var_36_bool, var_744_string); // 0x9c0 Call
	var_745_int = 4988; // 0x9c2 PushI
	SetMessage(var_745_int); // 0x9c3 TObjFunc
	ClearReplies(); // 0x9c5 TObjFunc
	var_746_int = 4990; // 0x9c7 PushI
	var_747_int = -1; // 0x9c8 PushI
	var_748_int = 5488; // 0x9c9 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0x9ca TObjFunc
	return 0; // 0x9cc Return
	
Label_2509:
	var_749_int = 5480; // 0x9cd PushI
	var_750_bool = var_35_string == var_749_int; // 0x9ce Eq
	if(var_750_bool == 0) goto Label_2537; // 0x9cf JumpB
	var_751_object = Obj(); var_752_object = Obj(); // 0x9d0 PushV
	var_751_object = var_1_object; // 0x9d1 MovT
	var_752_object = var_0_object; // 0x9d2 MovT
	func_6155(); // 0x9d3 Call
	var_755_string = ""; // 0x9d5 PushV
	var_755_string = "Neutral"; // 0x9d6 MovS
	func_1282(var_36_bool, var_755_string); // 0x9d7 Call
	var_756_int = 4982; // 0x9d9 PushI
	SetMessage(var_756_int); // 0x9da TObjFunc
	ClearReplies(); // 0x9dc TObjFunc
	var_757_int = 4983; // 0x9de PushI
	var_758_int = -1; // 0x9df PushI
	var_759_int = 5481; // 0x9e0 PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0x9e1 TObjFunc
	var_760_int = 4984; // 0x9e3 PushI
	var_761_int = -1; // 0x9e4 PushI
	var_762_int = 5482; // 0x9e5 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x9e6 TObjFunc
	return 0; // 0x9e8 Return
	
Label_2537:
	var_763_int = 5439; // 0x9e9 PushI
	var_764_bool = var_35_string == var_763_int; // 0x9ea Eq
	if(var_764_bool == 0) goto Label_2565; // 0x9eb JumpB
	var_765_string = ""; // 0x9ec PushV
	var_765_string = "Neutral"; // 0x9ed MovS
	func_1282(var_36_bool, var_765_string); // 0x9ee Call
	var_766_int = 4950; // 0x9f0 PushI
	SetMessage(var_766_int); // 0x9f1 TObjFunc
	ClearReplies(); // 0x9f3 TObjFunc
	var_767_int = 4951; // 0x9f5 PushI
	var_768_int = 5441; // 0x9f6 PushI
	var_769_int = 5440; // 0x9f7 PushI
	AddReply(var_767_int, var_768_int, var_769_int); // 0x9f8 TObjFunc
	var_770_int = 4976; // 0x9fa PushI
	var_771_int = 5441; // 0x9fb PushI
	var_772_int = 5471; // 0x9fc PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0x9fd TObjFunc
	var_773_int = 4977; // 0x9ff PushI
	var_774_int = 5441; // 0xa00 PushI
	var_775_int = 5473; // 0xa01 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0xa02 TObjFunc
	return 0; // 0xa04 Return
	
Label_2565:
	var_776_int = 5441; // 0xa05 PushI
	var_777_bool = var_35_string == var_776_int; // 0xa06 Eq
	if(var_777_bool == 0) goto Label_2588; // 0xa07 JumpB
	var_778_string = ""; // 0xa08 PushV
	var_778_string = "Neutral"; // 0xa09 MovS
	func_1282(var_36_bool, var_778_string); // 0xa0a Call
	var_779_int = 4952; // 0xa0c PushI
	SetMessage(var_779_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_780_int = 4953; // 0xa11 PushI
	var_781_int = 5443; // 0xa12 PushI
	var_782_int = 5442; // 0xa13 PushI
	AddReply(var_780_int, var_781_int, var_782_int); // 0xa14 TObjFunc
	var_783_int = 4972; // 0xa16 PushI
	var_784_int = 5466; // 0xa17 PushI
	var_785_int = 5465; // 0xa18 PushI
	AddReply(var_783_int, var_784_int, var_785_int); // 0xa19 TObjFunc
	return 0; // 0xa1b Return
	
Label_2588:
	var_786_int = 5466; // 0xa1c PushI
	var_787_bool = var_35_string == var_786_int; // 0xa1d Eq
	if(var_787_bool == 0) goto Label_2611; // 0xa1e JumpB
	var_788_string = ""; // 0xa1f PushV
	var_788_string = "Neutral"; // 0xa20 MovS
	func_1282(var_36_bool, var_788_string); // 0xa21 Call
	var_789_int = 4973; // 0xa23 PushI
	SetMessage(var_789_int); // 0xa24 TObjFunc
	ClearReplies(); // 0xa26 TObjFunc
	var_790_int = 4974; // 0xa28 PushI
	var_791_int = 5445; // 0xa29 PushI
	var_792_int = 5467; // 0xa2a PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0xa2b TObjFunc
	var_793_int = 4975; // 0xa2d PushI
	var_794_int = 5445; // 0xa2e PushI
	var_795_int = 5469; // 0xa2f PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0xa30 TObjFunc
	return 0; // 0xa32 Return
	
Label_2611:
	var_796_int = 5443; // 0xa33 PushI
	var_797_bool = var_35_string == var_796_int; // 0xa34 Eq
	if(var_797_bool == 0) goto Label_2634; // 0xa35 JumpB
	var_798_string = ""; // 0xa36 PushV
	var_798_string = "Neutral"; // 0xa37 MovS
	func_1282(var_36_bool, var_798_string); // 0xa38 Call
	var_799_int = 4954; // 0xa3a PushI
	SetMessage(var_799_int); // 0xa3b TObjFunc
	ClearReplies(); // 0xa3d TObjFunc
	var_800_int = 4955; // 0xa3f PushI
	var_801_int = 5445; // 0xa40 PushI
	var_802_int = 5444; // 0xa41 PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0xa42 TObjFunc
	var_803_int = 4968; // 0xa44 PushI
	var_804_int = 5460; // 0xa45 PushI
	var_805_int = 5459; // 0xa46 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0xa47 TObjFunc
	return 0; // 0xa49 Return
	
Label_2634:
	var_806_int = 5460; // 0xa4a PushI
	var_807_bool = var_35_string == var_806_int; // 0xa4b Eq
	if(var_807_bool == 0) goto Label_2657; // 0xa4c JumpB
	var_808_string = ""; // 0xa4d PushV
	var_808_string = "Neutral"; // 0xa4e MovS
	func_1282(var_36_bool, var_808_string); // 0xa4f Call
	var_809_int = 4969; // 0xa51 PushI
	SetMessage(var_809_int); // 0xa52 TObjFunc
	ClearReplies(); // 0xa54 TObjFunc
	var_810_int = 4970; // 0xa56 PushI
	var_811_int = 5445; // 0xa57 PushI
	var_812_int = 5461; // 0xa58 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0xa59 TObjFunc
	var_813_int = 4971; // 0xa5b PushI
	var_814_int = 5445; // 0xa5c PushI
	var_815_int = 5463; // 0xa5d PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0xa5e TObjFunc
	return 0; // 0xa60 Return
	
Label_2657:
	var_816_int = 5445; // 0xa61 PushI
	var_817_bool = var_35_string == var_816_int; // 0xa62 Eq
	if(var_817_bool == 0) goto Label_2680; // 0xa63 JumpB
	var_818_string = ""; // 0xa64 PushV
	var_818_string = "Neutral"; // 0xa65 MovS
	func_1282(var_36_bool, var_818_string); // 0xa66 Call
	var_819_int = 4956; // 0xa68 PushI
	SetMessage(var_819_int); // 0xa69 TObjFunc
	ClearReplies(); // 0xa6b TObjFunc
	var_820_int = 4957; // 0xa6d PushI
	var_821_int = 5447; // 0xa6e PushI
	var_822_int = 5446; // 0xa6f PushI
	AddReply(var_820_int, var_821_int, var_822_int); // 0xa70 TObjFunc
	var_823_int = 4967; // 0xa72 PushI
	var_824_int = 5447; // 0xa73 PushI
	var_825_int = 5457; // 0xa74 PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0xa75 TObjFunc
	return 0; // 0xa77 Return
	
Label_2680:
	var_826_int = 5447; // 0xa78 PushI
	var_827_bool = var_35_string == var_826_int; // 0xa79 Eq
	if(var_827_bool == 0) goto Label_2703; // 0xa7a JumpB
	var_828_string = ""; // 0xa7b PushV
	var_828_string = "Neutral"; // 0xa7c MovS
	func_1282(var_36_bool, var_828_string); // 0xa7d Call
	var_829_int = 4958; // 0xa7f PushI
	SetMessage(var_829_int); // 0xa80 TObjFunc
	ClearReplies(); // 0xa82 TObjFunc
	var_830_int = 4959; // 0xa84 PushI
	var_831_int = 5449; // 0xa85 PushI
	var_832_int = 5448; // 0xa86 PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0xa87 TObjFunc
	var_833_int = 4966; // 0xa89 PushI
	var_834_int = 5449; // 0xa8a PushI
	var_835_int = 5455; // 0xa8b PushI
	AddReply(var_833_int, var_834_int, var_835_int); // 0xa8c TObjFunc
	return 0; // 0xa8e Return
	
Label_2703:
	var_836_int = 5449; // 0xa8f PushI
	var_837_bool = var_35_string == var_836_int; // 0xa90 Eq
	if(var_837_bool == 0) goto Label_2731; // 0xa91 JumpB
	var_838_object = Obj(); var_839_object = Obj(); // 0xa92 PushV
	var_838_object = var_1_object; // 0xa93 MovT
	var_839_object = var_0_object; // 0xa94 MovT
	func_6155(); // 0xa95 Call
	var_840_string = ""; // 0xa97 PushV
	var_840_string = "Neutral"; // 0xa98 MovS
	func_1282(var_36_bool, var_840_string); // 0xa99 Call
	var_841_int = 4960; // 0xa9b PushI
	SetMessage(var_841_int); // 0xa9c TObjFunc
	ClearReplies(); // 0xa9e TObjFunc
	var_842_int = 4961; // 0xaa0 PushI
	var_843_int = -1; // 0xaa1 PushI
	var_844_int = 5450; // 0xaa2 PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0xaa3 TObjFunc
	var_845_int = 4962; // 0xaa5 PushI
	var_846_int = 5452; // 0xaa6 PushI
	var_847_int = 5451; // 0xaa7 PushI
	AddReply(var_845_int, var_846_int, var_847_int); // 0xaa8 TObjFunc
	return 0; // 0xaaa Return
	
Label_2731:
	var_848_int = 5452; // 0xaab PushI
	var_849_bool = var_35_string == var_848_int; // 0xaac Eq
	if(var_849_bool == 0) goto Label_2754; // 0xaad JumpB
	var_850_string = ""; // 0xaae PushV
	var_850_string = "Neutral"; // 0xaaf MovS
	func_1282(var_36_bool, var_850_string); // 0xab0 Call
	var_851_int = 4963; // 0xab2 PushI
	SetMessage(var_851_int); // 0xab3 TObjFunc
	ClearReplies(); // 0xab5 TObjFunc
	var_852_int = 4964; // 0xab7 PushI
	var_853_int = -1; // 0xab8 PushI
	var_854_int = 5453; // 0xab9 PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0xaba TObjFunc
	var_855_int = 4965; // 0xabc PushI
	var_856_int = -1; // 0xabd PushI
	var_857_int = 5454; // 0xabe PushI
	AddReply(var_855_int, var_856_int, var_857_int); // 0xabf TObjFunc
	return 0; // 0xac1 Return
	
Label_2754:
	var_3_string = 1; // 0xac2 TMovB
	var_858_bool = 0; // 0xac3 PushV
	func_5645(var_858_bool); // 0xac4 Call
	if(var_858_bool == 0) goto Label_2762; // 0xac6 JumpB
	lshStopAnimation(); // 0xac7 Func
	goto Label_2764; // 0xac9 Jump
	
Label_2764:
	return 0; // 0xacc Return
	
Label_2762:
	StopAnimation(); // 0xaca Func
	
Label_2766:
	return 0; // 0xace Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xb9e PushI
	if(var_37_int == 0) goto Label_3704; // 0xb9f JumpB
	func_5541(); // 0xba1 Call
	var_39_int = 7333; // 0xba3 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xba4 Eq
	if(var_40_bool == 0) goto Label_2997; // 0xba5 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xba6 PushV
	var_41_object = var_1_object; // 0xba7 MovT
	var_42_object = var_0_object; // 0xba8 MovT
	func_5706(); // 0xba9 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0xbab PushV
	var_45_object = var_1_object; // 0xbac MovT
	var_46_object = var_0_object; // 0xbad MovT
	func_5724(); // 0xbae Call
	var_90_object = Obj(); var_91_object = Obj(); // 0xbb0 PushV
	var_90_object = var_1_object; // 0xbb1 MovT
	var_91_object = var_0_object; // 0xbb2 MovT
	func_5828(); // 0xbb3 Call
	
Label_2997:
	var_116_int = 7336; // 0xbb5 PushI
	var_117_bool = var_36_bool == var_116_int; // 0xbb6 Eq
	if(var_117_bool == 0) goto Label_3015; // 0xbb7 JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0xbb8 PushV
	var_118_object = var_1_object; // 0xbb9 MovT
	var_119_object = var_0_object; // 0xbba MovT
	func_5706(); // 0xbbb Call
	var_120_object = Obj(); var_121_object = Obj(); // 0xbbd PushV
	var_120_object = var_1_object; // 0xbbe MovT
	var_121_object = var_0_object; // 0xbbf MovT
	func_5724(); // 0xbc0 Call
	var_122_object = Obj(); var_123_object = Obj(); // 0xbc2 PushV
	var_122_object = var_1_object; // 0xbc3 MovT
	var_123_object = var_0_object; // 0xbc4 MovT
	func_5828(); // 0xbc5 Call
	
Label_3015:
	var_124_int = 7337; // 0xbc7 PushI
	var_125_bool = var_36_bool == var_124_int; // 0xbc8 Eq
	if(var_125_bool == 0) goto Label_3033; // 0xbc9 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0xbca PushV
	var_126_object = var_1_object; // 0xbcb MovT
	var_127_object = var_0_object; // 0xbcc MovT
	func_5706(); // 0xbcd Call
	var_128_object = Obj(); var_129_object = Obj(); // 0xbcf PushV
	var_128_object = var_1_object; // 0xbd0 MovT
	var_129_object = var_0_object; // 0xbd1 MovT
	func_5724(); // 0xbd2 Call
	var_130_object = Obj(); var_131_object = Obj(); // 0xbd4 PushV
	var_130_object = var_1_object; // 0xbd5 MovT
	var_131_object = var_0_object; // 0xbd6 MovT
	func_5828(); // 0xbd7 Call
	
Label_3033:
	var_132_int = 7976; // 0xbd9 PushI
	var_133_bool = var_36_bool == var_132_int; // 0xbda Eq
	if(var_133_bool == 0) goto Label_3041; // 0xbdb JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0xbdc PushV
	var_134_object = var_1_object; // 0xbdd MovT
	var_135_object = var_0_object; // 0xbde MovT
	func_5712(); // 0xbdf Call
	
Label_3041:
	var_138_int = 7981; // 0xbe1 PushI
	var_139_bool = var_36_bool == var_138_int; // 0xbe2 Eq
	if(var_139_bool == 0) goto Label_3049; // 0xbe3 JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0xbe4 PushV
	var_140_object = var_1_object; // 0xbe5 MovT
	var_141_object = var_0_object; // 0xbe6 MovT
	func_5712(); // 0xbe7 Call
	
Label_3049:
	var_142_int = 7969; // 0xbe9 PushI
	var_143_bool = var_36_bool == var_142_int; // 0xbea Eq
	if(var_143_bool == 0) goto Label_3057; // 0xbeb JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0xbec PushV
	var_144_object = var_1_object; // 0xbed MovT
	var_145_object = var_0_object; // 0xbee MovT
	func_5712(); // 0xbef Call
	
Label_3057:
	var_146_int = 7293; // 0xbf1 PushI
	var_147_bool = var_35_string == var_146_int; // 0xbf2 Eq
	if(var_147_bool == 0) goto Label_3149; // 0xbf3 JumpB
	var_148_string = ""; // 0xbf4 PushV
	var_148_string = "Neutral"; // 0xbf5 MovS
	func_2957(var_36_bool, var_148_string); // 0xbf6 Call
	var_163_int = 6624; // 0xbf8 PushI
	SetMessage(var_163_int); // 0xbf9 TObjFunc
	ClearReplies(); // 0xbfb TObjFunc
	var_164_bool = 0; // 0xbfd PushV
	var_164_bool = 0; // 0xbfe MovB
	var_165_bool = 0; var_166_object = Obj(); // 0xbff PushV
	var_166_object = var_1_object; // 0xc00 MovT
	func_6302(var_166_object); // 0xc01 Call
	if(var_165_bool == 0) goto Label_3082; // 0xc03 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0xc04 PushV
	var_174_object = var_1_object; // 0xc05 MovT
	func_6350(var_174_object); // 0xc06 Call
	if(var_173_bool == 0) goto Label_3082; // 0xc08 JumpB
	var_164_bool = 1; // 0xc09 MovB
	
Label_3082:
	if(var_164_bool == 0) goto Label_3088; // 0xc0a JumpB
	var_179_int = 7217; // 0xc0b PushI
	var_180_int = 7952; // 0xc0c PushI
	var_181_int = 7953; // 0xc0d PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xc0e TObjFunc
	
Label_3088:
	var_182_bool = 0; var_183_object = Obj(); // 0xc10 PushV
	var_183_object = var_1_object; // 0xc11 MovT
	func_6314(var_183_object); // 0xc12 Call
	if(var_182_bool == 0) goto Label_3098; // 0xc14 JumpB
	var_188_int = 6949; // 0xc15 PushI
	var_189_int = 7656; // 0xc16 PushI
	var_190_int = 7655; // 0xc17 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xc18 TObjFunc
	
Label_3098:
	var_191_int = 6626; // 0xc1a PushI
	var_192_int = -1; // 0xc1b PushI
	var_193_int = 7295; // 0xc1c PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xc1d TObjFunc
	return 0; // 0xc1f Return
	
Label_3149:
	var_194_int = 10190; // 0xc4d PushI
	var_195_bool = var_35_string == var_194_int; // 0xc4e Eq
	if(var_195_bool == 0) goto Label_3172; // 0xc4f JumpB
	var_196_string = ""; // 0xc50 PushV
	var_196_string = "Neutral"; // 0xc51 MovS
	func_2957(var_36_bool, var_196_string); // 0xc52 Call
	var_197_int = 9283; // 0xc54 PushI
	SetMessage(var_197_int); // 0xc55 TObjFunc
	ClearReplies(); // 0xc57 TObjFunc
	var_198_int = 9284; // 0xc59 PushI
	var_199_int = 10192; // 0xc5a PushI
	var_200_int = 10191; // 0xc5b PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xc5c TObjFunc
	var_201_int = 9288; // 0xc5e PushI
	var_202_int = 10196; // 0xc5f PushI
	var_203_int = 10195; // 0xc60 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xc61 TObjFunc
	return 0; // 0xc63 Return
	
Label_3172:
	var_204_int = 10196; // 0xc64 PushI
	var_205_bool = var_35_string == var_204_int; // 0xc65 Eq
	if(var_205_bool == 0) goto Label_3195; // 0xc66 JumpB
	var_206_string = ""; // 0xc67 PushV
	var_206_string = "Neutral"; // 0xc68 MovS
	func_2957(var_36_bool, var_206_string); // 0xc69 Call
	var_207_int = 9289; // 0xc6b PushI
	SetMessage(var_207_int); // 0xc6c TObjFunc
	ClearReplies(); // 0xc6e TObjFunc
	var_208_int = 9290; // 0xc70 PushI
	var_209_int = -1; // 0xc71 PushI
	var_210_int = 10197; // 0xc72 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xc73 TObjFunc
	var_211_int = 9291; // 0xc75 PushI
	var_212_int = -1; // 0xc76 PushI
	var_213_int = 10198; // 0xc77 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xc78 TObjFunc
	return 0; // 0xc7a Return
	
Label_3195:
	var_214_int = 10192; // 0xc7b PushI
	var_215_bool = var_35_string == var_214_int; // 0xc7c Eq
	if(var_215_bool == 0) goto Label_3218; // 0xc7d JumpB
	var_216_string = ""; // 0xc7e PushV
	var_216_string = "Neutral"; // 0xc7f MovS
	func_2957(var_36_bool, var_216_string); // 0xc80 Call
	var_217_int = 9285; // 0xc82 PushI
	SetMessage(var_217_int); // 0xc83 TObjFunc
	ClearReplies(); // 0xc85 TObjFunc
	var_218_int = 9286; // 0xc87 PushI
	var_219_int = -1; // 0xc88 PushI
	var_220_int = 10193; // 0xc89 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xc8a TObjFunc
	var_221_int = 9287; // 0xc8c PushI
	var_222_int = -1; // 0xc8d PushI
	var_223_int = 10194; // 0xc8e PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xc8f TObjFunc
	return 0; // 0xc91 Return
	
Label_3218:
	var_224_int = 10180; // 0xc92 PushI
	var_225_bool = var_35_string == var_224_int; // 0xc93 Eq
	if(var_225_bool == 0) goto Label_3241; // 0xc94 JumpB
	var_226_string = ""; // 0xc95 PushV
	var_226_string = "Neutral"; // 0xc96 MovS
	func_2957(var_36_bool, var_226_string); // 0xc97 Call
	var_227_int = 9274; // 0xc99 PushI
	SetMessage(var_227_int); // 0xc9a TObjFunc
	ClearReplies(); // 0xc9c TObjFunc
	var_228_int = 9275; // 0xc9e PushI
	var_229_int = 10182; // 0xc9f PushI
	var_230_int = 10181; // 0xca0 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xca1 TObjFunc
	var_231_int = 9279; // 0xca3 PushI
	var_232_int = -1; // 0xca4 PushI
	var_233_int = 10185; // 0xca5 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xca6 TObjFunc
	return 0; // 0xca8 Return
	
Label_3241:
	var_234_int = 10182; // 0xca9 PushI
	var_235_bool = var_35_string == var_234_int; // 0xcaa Eq
	if(var_235_bool == 0) goto Label_3264; // 0xcab JumpB
	var_236_string = ""; // 0xcac PushV
	var_236_string = "Neutral"; // 0xcad MovS
	func_2957(var_36_bool, var_236_string); // 0xcae Call
	var_237_int = 9276; // 0xcb0 PushI
	SetMessage(var_237_int); // 0xcb1 TObjFunc
	ClearReplies(); // 0xcb3 TObjFunc
	var_238_int = 9277; // 0xcb5 PushI
	var_239_int = -1; // 0xcb6 PushI
	var_240_int = 10183; // 0xcb7 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xcb8 TObjFunc
	var_241_int = 9278; // 0xcba PushI
	var_242_int = -1; // 0xcbb PushI
	var_243_int = 10184; // 0xcbc PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xcbd TObjFunc
	return 0; // 0xcbf Return
	
Label_3264:
	var_244_int = 7656; // 0xcc0 PushI
	var_245_bool = var_35_string == var_244_int; // 0xcc1 Eq
	if(var_245_bool == 0) goto Label_3282; // 0xcc2 JumpB
	var_246_string = ""; // 0xcc3 PushV
	var_246_string = "Neutral"; // 0xcc4 MovS
	func_2957(var_36_bool, var_246_string); // 0xcc5 Call
	var_247_int = 6950; // 0xcc7 PushI
	SetMessage(var_247_int); // 0xcc8 TObjFunc
	ClearReplies(); // 0xcca TObjFunc
	var_248_int = 6951; // 0xccc PushI
	var_249_int = 7957; // 0xccd PushI
	var_250_int = 7657; // 0xcce PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xccf TObjFunc
	return 0; // 0xcd1 Return
	
Label_3282:
	var_251_int = 7957; // 0xcd2 PushI
	var_252_bool = var_35_string == var_251_int; // 0xcd3 Eq
	if(var_252_bool == 0) goto Label_3305; // 0xcd4 JumpB
	var_253_string = ""; // 0xcd5 PushV
	var_253_string = "Neutral"; // 0xcd6 MovS
	func_2957(var_36_bool, var_253_string); // 0xcd7 Call
	var_254_int = 7220; // 0xcd9 PushI
	SetMessage(var_254_int); // 0xcda TObjFunc
	ClearReplies(); // 0xcdc TObjFunc
	var_255_int = 7221; // 0xcde PushI
	var_256_int = 7962; // 0xcdf PushI
	var_257_int = 7958; // 0xce0 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xce1 TObjFunc
	var_258_int = 7222; // 0xce3 PushI
	var_259_int = 7960; // 0xce4 PushI
	var_260_int = 7959; // 0xce5 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xce6 TObjFunc
	return 0; // 0xce8 Return
	
Label_3305:
	var_261_int = 7960; // 0xce9 PushI
	var_262_bool = var_35_string == var_261_int; // 0xcea Eq
	if(var_262_bool == 0) goto Label_3323; // 0xceb JumpB
	var_263_string = ""; // 0xcec PushV
	var_263_string = "Neutral"; // 0xced MovS
	func_2957(var_36_bool, var_263_string); // 0xcee Call
	var_264_int = 7223; // 0xcf0 PushI
	SetMessage(var_264_int); // 0xcf1 TObjFunc
	ClearReplies(); // 0xcf3 TObjFunc
	var_265_int = 7224; // 0xcf5 PushI
	var_266_int = 10153; // 0xcf6 PushI
	var_267_int = 7961; // 0xcf7 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xcf8 TObjFunc
	return 0; // 0xcfa Return
	
Label_3323:
	var_268_int = 7962; // 0xcfb PushI
	var_269_bool = var_35_string == var_268_int; // 0xcfc Eq
	if(var_269_bool == 0) goto Label_3351; // 0xcfd JumpB
	var_270_string = ""; // 0xcfe PushV
	var_270_string = "Neutral"; // 0xcff MovS
	func_2957(var_36_bool, var_270_string); // 0xd00 Call
	var_271_int = 7225; // 0xd02 PushI
	SetMessage(var_271_int); // 0xd03 TObjFunc
	ClearReplies(); // 0xd05 TObjFunc
	var_272_int = 7226; // 0xd07 PushI
	var_273_int = 7965; // 0xd08 PushI
	var_274_int = 7964; // 0xd09 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xd0a TObjFunc
	var_275_bool = 0; var_276_object = Obj(); // 0xd0c PushV
	var_276_object = var_1_object; // 0xd0d MovT
	func_6338(var_276_object); // 0xd0e Call
	if(var_275_bool == 0) goto Label_3350; // 0xd10 JumpB
	var_281_int = 7228; // 0xd11 PushI
	var_282_int = 7967; // 0xd12 PushI
	var_283_int = 7966; // 0xd13 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0xd14 TObjFunc
	
Label_3350:
	return 0; // 0xd16 Return
	
Label_3351:
	var_284_int = 7967; // 0xd17 PushI
	var_285_bool = var_35_string == var_284_int; // 0xd18 Eq
	if(var_285_bool == 0) goto Label_3374; // 0xd19 JumpB
	var_286_string = ""; // 0xd1a PushV
	var_286_string = "Neutral"; // 0xd1b MovS
	func_2957(var_36_bool, var_286_string); // 0xd1c Call
	var_287_int = 7229; // 0xd1e PushI
	SetMessage(var_287_int); // 0xd1f TObjFunc
	ClearReplies(); // 0xd21 TObjFunc
	var_288_int = 7230; // 0xd23 PushI
	var_289_int = 10155; // 0xd24 PushI
	var_290_int = 7968; // 0xd25 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xd26 TObjFunc
	var_291_int = 7231; // 0xd28 PushI
	var_292_int = -1; // 0xd29 PushI
	var_293_int = 7969; // 0xd2a PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xd2b TObjFunc
	return 0; // 0xd2d Return
	
Label_3374:
	var_294_int = 7965; // 0xd2e PushI
	var_295_bool = var_35_string == var_294_int; // 0xd2f Eq
	if(var_295_bool == 0) goto Label_3418; // 0xd30 JumpB
	var_296_object = Obj(); var_297_object = Obj(); // 0xd31 PushV
	var_296_object = var_1_object; // 0xd32 MovT
	var_297_object = var_0_object; // 0xd33 MovT
	func_6161(); // 0xd34 Call
	var_300_string = ""; // 0xd36 PushV
	var_300_string = "Neutral"; // 0xd37 MovS
	func_2957(var_36_bool, var_300_string); // 0xd38 Call
	var_301_int = 7227; // 0xd3a PushI
	SetMessage(var_301_int); // 0xd3b TObjFunc
	ClearReplies(); // 0xd3d TObjFunc
	var_302_int = 7232; // 0xd3f PushI
	var_303_int = 7973; // 0xd40 PushI
	var_304_int = 7970; // 0xd41 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xd42 TObjFunc
	var_305_bool = 0; var_306_object = Obj(); // 0xd44 PushV
	var_306_object = var_1_object; // 0xd45 MovT
	func_6698(var_306_object); // 0xd46 Call
	var_311_bool = var_305_bool == 0; // 0xd48 Not
	if(var_311_bool == 0) goto Label_3407; // 0xd49 JumpB
	var_312_int = 7233; // 0xd4a PushI
	var_313_int = 7972; // 0xd4b PushI
	var_314_int = 7971; // 0xd4c PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xd4d TObjFunc
	
Label_3407:
	var_315_bool = 0; var_316_object = Obj(); // 0xd4f PushV
	var_316_object = var_1_object; // 0xd50 MovT
	func_6338(var_316_object); // 0xd51 Call
	if(var_315_bool == 0) goto Label_3417; // 0xd53 JumpB
	var_317_int = 7236; // 0xd54 PushI
	var_318_int = 7975; // 0xd55 PushI
	var_319_int = 7974; // 0xd56 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xd57 TObjFunc
	
Label_3417:
	return 0; // 0xd59 Return
	
Label_3418:
	var_320_int = 7975; // 0xd5a PushI
	var_321_bool = var_35_string == var_320_int; // 0xd5b Eq
	if(var_321_bool == 0) goto Label_3441; // 0xd5c JumpB
	var_322_string = ""; // 0xd5d PushV
	var_322_string = "Neutral"; // 0xd5e MovS
	func_2957(var_36_bool, var_322_string); // 0xd5f Call
	var_323_int = 7237; // 0xd61 PushI
	SetMessage(var_323_int); // 0xd62 TObjFunc
	ClearReplies(); // 0xd64 TObjFunc
	var_324_int = 7240; // 0xd66 PushI
	var_325_int = 10157; // 0xd67 PushI
	var_326_int = 7979; // 0xd68 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xd69 TObjFunc
	var_327_int = 7241; // 0xd6b PushI
	var_328_int = -1; // 0xd6c PushI
	var_329_int = 7981; // 0xd6d PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xd6e TObjFunc
	return 0; // 0xd70 Return
	
Label_3441:
	var_330_int = 7972; // 0xd71 PushI
	var_331_bool = var_35_string == var_330_int; // 0xd72 Eq
	if(var_331_bool == 0) goto Label_3464; // 0xd73 JumpB
	var_332_object = Obj(); var_333_object = Obj(); // 0xd74 PushV
	var_332_object = var_1_object; // 0xd75 MovT
	var_333_object = var_0_object; // 0xd76 MovT
	func_5718(); // 0xd77 Call
	var_336_string = ""; // 0xd79 PushV
	var_336_string = "Neutral"; // 0xd7a MovS
	func_2957(var_36_bool, var_336_string); // 0xd7b Call
	var_337_int = 7234; // 0xd7d PushI
	SetMessage(var_337_int); // 0xd7e TObjFunc
	ClearReplies(); // 0xd80 TObjFunc
	var_338_int = 7239; // 0xd82 PushI
	var_339_int = 10157; // 0xd83 PushI
	var_340_int = 7977; // 0xd84 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xd85 TObjFunc
	return 0; // 0xd87 Return
	
Label_3464:
	var_341_int = 7973; // 0xd88 PushI
	var_342_bool = var_35_string == var_341_int; // 0xd89 Eq
	if(var_342_bool == 0) goto Label_3482; // 0xd8a JumpB
	var_343_string = ""; // 0xd8b PushV
	var_343_string = "Neutral"; // 0xd8c MovS
	func_2957(var_36_bool, var_343_string); // 0xd8d Call
	var_344_int = 7235; // 0xd8f PushI
	SetMessage(var_344_int); // 0xd90 TObjFunc
	ClearReplies(); // 0xd92 TObjFunc
	var_345_int = 7238; // 0xd94 PushI
	var_346_int = -1; // 0xd95 PushI
	var_347_int = 7976; // 0xd96 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xd97 TObjFunc
	return 0; // 0xd99 Return
	
Label_3482:
	var_348_int = 7952; // 0xd9a PushI
	var_349_bool = var_35_string == var_348_int; // 0xd9b Eq
	if(var_349_bool == 0) goto Label_3505; // 0xd9c JumpB
	var_350_string = ""; // 0xd9d PushV
	var_350_string = "Neutral"; // 0xd9e MovS
	func_2957(var_36_bool, var_350_string); // 0xd9f Call
	var_351_int = 7216; // 0xda1 PushI
	SetMessage(var_351_int); // 0xda2 TObjFunc
	ClearReplies(); // 0xda4 TObjFunc
	var_352_int = 6651; // 0xda6 PushI
	var_353_int = 7326; // 0xda7 PushI
	var_354_int = 7325; // 0xda8 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xda9 TObjFunc
	var_355_int = 6672; // 0xdab PushI
	var_356_int = 7954; // 0xdac PushI
	var_357_int = 7352; // 0xdad PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xdae TObjFunc
	return 0; // 0xdb0 Return
	
Label_3505:
	var_358_int = 7954; // 0xdb1 PushI
	var_359_bool = var_35_string == var_358_int; // 0xdb2 Eq
	if(var_359_bool == 0) goto Label_3523; // 0xdb3 JumpB
	var_360_string = ""; // 0xdb4 PushV
	var_360_string = "Neutral"; // 0xdb5 MovS
	func_2957(var_36_bool, var_360_string); // 0xdb6 Call
	var_361_int = 7218; // 0xdb8 PushI
	SetMessage(var_361_int); // 0xdb9 TObjFunc
	ClearReplies(); // 0xdbb TObjFunc
	var_362_int = 7219; // 0xdbd PushI
	var_363_int = 7326; // 0xdbe PushI
	var_364_int = 7955; // 0xdbf PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xdc0 TObjFunc
	return 0; // 0xdc2 Return
	
Label_3523:
	var_365_int = 7326; // 0xdc3 PushI
	var_366_bool = var_35_string == var_365_int; // 0xdc4 Eq
	if(var_366_bool == 0) goto Label_3546; // 0xdc5 JumpB
	var_367_string = ""; // 0xdc6 PushV
	var_367_string = "Neutral"; // 0xdc7 MovS
	func_2957(var_36_bool, var_367_string); // 0xdc8 Call
	var_368_int = 6652; // 0xdca PushI
	SetMessage(var_368_int); // 0xdcb TObjFunc
	ClearReplies(); // 0xdcd TObjFunc
	var_369_int = 6653; // 0xdcf PushI
	var_370_int = 7328; // 0xdd0 PushI
	var_371_int = 7327; // 0xdd1 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xdd2 TObjFunc
	var_372_int = 6668; // 0xdd4 PushI
	var_373_int = 7347; // 0xdd5 PushI
	var_374_int = 7346; // 0xdd6 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xdd7 TObjFunc
	return 0; // 0xdd9 Return
	
Label_3546:
	var_375_int = 7347; // 0xdda PushI
	var_376_bool = var_35_string == var_375_int; // 0xddb Eq
	if(var_376_bool == 0) goto Label_3574; // 0xddc JumpB
	var_377_object = Obj(); var_378_object = Obj(); // 0xddd PushV
	var_377_object = var_1_object; // 0xdde MovT
	var_378_object = var_0_object; // 0xddf MovT
	func_5676(); // 0xde0 Call
	var_381_string = ""; // 0xde2 PushV
	var_381_string = "Neutral"; // 0xde3 MovS
	func_2957(var_36_bool, var_381_string); // 0xde4 Call
	var_382_int = 6669; // 0xde6 PushI
	SetMessage(var_382_int); // 0xde7 TObjFunc
	ClearReplies(); // 0xde9 TObjFunc
	var_383_int = 6670; // 0xdeb PushI
	var_384_int = 7332; // 0xdec PushI
	var_385_int = 7348; // 0xded PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xdee TObjFunc
	var_386_int = 6671; // 0xdf0 PushI
	var_387_int = 7328; // 0xdf1 PushI
	var_388_int = 7350; // 0xdf2 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xdf3 TObjFunc
	return 0; // 0xdf5 Return
	
Label_3574:
	var_389_int = 7328; // 0xdf6 PushI
	var_390_bool = var_35_string == var_389_int; // 0xdf7 Eq
	if(var_390_bool == 0) goto Label_3602; // 0xdf8 JumpB
	var_391_string = ""; // 0xdf9 PushV
	var_391_string = "Neutral"; // 0xdfa MovS
	func_2957(var_36_bool, var_391_string); // 0xdfb Call
	var_392_int = 6654; // 0xdfd PushI
	SetMessage(var_392_int); // 0xdfe TObjFunc
	ClearReplies(); // 0xe00 TObjFunc
	var_393_int = 6655; // 0xe02 PushI
	var_394_int = 7330; // 0xe03 PushI
	var_395_int = 7329; // 0xe04 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xe05 TObjFunc
	var_396_int = 6666; // 0xe07 PushI
	var_397_int = 7332; // 0xe08 PushI
	var_398_int = 7342; // 0xe09 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0xe0a TObjFunc
	var_399_int = 6667; // 0xe0c PushI
	var_400_int = 7332; // 0xe0d PushI
	var_401_int = 7344; // 0xe0e PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xe0f TObjFunc
	return 0; // 0xe11 Return
	
Label_3602:
	var_402_int = 7330; // 0xe12 PushI
	var_403_bool = var_35_string == var_402_int; // 0xe13 Eq
	if(var_403_bool == 0) goto Label_3635; // 0xe14 JumpB
	var_404_object = Obj(); var_405_object = Obj(); // 0xe15 PushV
	var_404_object = var_1_object; // 0xe16 MovT
	var_405_object = var_0_object; // 0xe17 MovT
	func_5676(); // 0xe18 Call
	var_406_string = ""; // 0xe1a PushV
	var_406_string = "Neutral"; // 0xe1b MovS
	func_2957(var_36_bool, var_406_string); // 0xe1c Call
	var_407_int = 6656; // 0xe1e PushI
	SetMessage(var_407_int); // 0xe1f TObjFunc
	ClearReplies(); // 0xe21 TObjFunc
	var_408_int = 6657; // 0xe23 PushI
	var_409_int = 7332; // 0xe24 PushI
	var_410_int = 7331; // 0xe25 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xe26 TObjFunc
	var_411_int = 6664; // 0xe28 PushI
	var_412_int = 7332; // 0xe29 PushI
	var_413_int = 7338; // 0xe2a PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xe2b TObjFunc
	var_414_int = 6665; // 0xe2d PushI
	var_415_int = 7332; // 0xe2e PushI
	var_416_int = 7340; // 0xe2f PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xe30 TObjFunc
	return 0; // 0xe32 Return
	
Label_3635:
	var_417_int = 7332; // 0xe33 PushI
	var_418_bool = var_35_string == var_417_int; // 0xe34 Eq
	if(var_418_bool == 0) goto Label_3674; // 0xe35 JumpB
	var_419_object = Obj(); var_420_object = Obj(); // 0xe36 PushV
	var_419_object = var_1_object; // 0xe37 MovT
	var_420_object = var_0_object; // 0xe38 MovT
	func_5647(); // 0xe39 Call
	var_423_string = ""; // 0xe3b PushV
	var_423_string = "Neutral"; // 0xe3c MovS
	func_2957(var_36_bool, var_423_string); // 0xe3d Call
	var_424_int = 6658; // 0xe3f PushI
	SetMessage(var_424_int); // 0xe40 TObjFunc
	ClearReplies(); // 0xe42 TObjFunc
	var_425_int = 6659; // 0xe44 PushI
	var_426_int = -1; // 0xe45 PushI
	var_427_int = 7333; // 0xe46 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xe47 TObjFunc
	var_428_bool = 0; var_429_object = Obj(); // 0xe49 PushV
	var_429_object = var_1_object; // 0xe4a MovT
	func_6326(var_429_object); // 0xe4b Call
	var_434_bool = var_428_bool == 0; // 0xe4d Not
	if(var_434_bool == 0) goto Label_3668; // 0xe4e JumpB
	var_435_int = 6660; // 0xe4f PushI
	var_436_int = 7335; // 0xe50 PushI
	var_437_int = 7334; // 0xe51 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xe52 TObjFunc
	
Label_3668:
	var_438_int = 6663; // 0xe54 PushI
	var_439_int = -1; // 0xe55 PushI
	var_440_int = 7337; // 0xe56 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xe57 TObjFunc
	return 0; // 0xe59 Return
	
Label_3674:
	var_441_int = 7335; // 0xe5a PushI
	var_442_bool = var_35_string == var_441_int; // 0xe5b Eq
	if(var_442_bool == 0) goto Label_3692; // 0xe5c JumpB
	var_443_string = ""; // 0xe5d PushV
	var_443_string = "Neutral"; // 0xe5e MovS
	func_2957(var_36_bool, var_443_string); // 0xe5f Call
	var_444_int = 6661; // 0xe61 PushI
	SetMessage(var_444_int); // 0xe62 TObjFunc
	ClearReplies(); // 0xe64 TObjFunc
	var_445_int = 6662; // 0xe66 PushI
	var_446_int = -1; // 0xe67 PushI
	var_447_int = 7336; // 0xe68 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xe69 TObjFunc
	return 0; // 0xe6b Return
	
Label_3692:
	var_3_string = 1; // 0xe6c TMovB
	var_448_bool = 0; // 0xe6d PushV
	func_5645(var_448_bool); // 0xe6e Call
	if(var_448_bool == 0) goto Label_3700; // 0xe70 JumpB
	lshStopAnimation(); // 0xe71 Func
	goto Label_3702; // 0xe73 Jump
	
Label_3702:
	return 0; // 0xe76 Return
	
Label_3700:
	StopAnimation(); // 0xe74 Func
	
Label_3704:
	return 0; // 0xe78 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xf25 PushI
	if(var_37_int == 0) goto Label_4198; // 0xf26 JumpB
	func_5541(); // 0xf28 Call
	var_39_int = 11262; // 0xf2a PushI
	var_40_bool = var_36_bool == var_39_int; // 0xf2b Eq
	if(var_40_bool == 0) goto Label_3890; // 0xf2c JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xf2d PushV
	var_41_object = var_1_object; // 0xf2e MovT
	var_42_object = var_0_object; // 0xf2f MovT
	func_5816(); // 0xf30 Call
	
Label_3890:
	var_45_int = 11349; // 0xf32 PushI
	var_46_bool = var_36_bool == var_45_int; // 0xf33 Eq
	if(var_46_bool == 0) goto Label_3908; // 0xf34 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xf35 PushV
	var_47_object = var_1_object; // 0xf36 MovT
	var_48_object = var_0_object; // 0xf37 MovT
	func_5816(); // 0xf38 Call
	var_49_object = Obj(); var_50_object = Obj(); // 0xf3a PushV
	var_49_object = var_1_object; // 0xf3b MovT
	var_50_object = var_0_object; // 0xf3c MovT
	func_5822(); // 0xf3d Call
	var_53_object = Obj(); var_54_object = Obj(); // 0xf3f PushV
	var_53_object = var_1_object; // 0xf40 MovT
	var_54_object = var_0_object; // 0xf41 MovT
	func_5800(); // 0xf42 Call
	
Label_3908:
	var_85_int = 11345; // 0xf44 PushI
	var_86_bool = var_36_bool == var_85_int; // 0xf45 Eq
	if(var_86_bool == 0) goto Label_3916; // 0xf46 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0xf47 PushV
	var_87_object = var_1_object; // 0xf48 MovT
	var_88_object = var_0_object; // 0xf49 MovT
	func_5816(); // 0xf4a Call
	
Label_3916:
	var_89_int = 10775; // 0xf4c PushI
	var_90_bool = var_36_bool == var_89_int; // 0xf4d Eq
	if(var_90_bool == 0) goto Label_3924; // 0xf4e JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xf4f PushV
	var_91_object = var_1_object; // 0xf50 MovT
	var_92_object = var_0_object; // 0xf51 MovT
	func_6167(); // 0xf52 Call
	
Label_3924:
	var_95_int = 11237; // 0xf54 PushI
	var_96_bool = var_36_bool == var_95_int; // 0xf55 Eq
	if(var_96_bool == 0) goto Label_3932; // 0xf56 JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0xf57 PushV
	var_97_object = var_1_object; // 0xf58 MovT
	var_98_object = var_0_object; // 0xf59 MovT
	func_6173(); // 0xf5a Call
	
Label_3932:
	var_101_int = 10774; // 0xf5c PushI
	var_102_bool = var_35_string == var_101_int; // 0xf5d Eq
	if(var_102_bool == 0) goto Label_3989; // 0xf5e JumpB
	var_103_string = ""; // 0xf5f PushV
	var_103_string = "Neutral"; // 0xf60 MovS
	func_3860(var_36_bool, var_103_string); // 0xf61 Call
	var_118_int = 9781; // 0xf63 PushI
	SetMessage(var_118_int); // 0xf64 TObjFunc
	ClearReplies(); // 0xf66 TObjFunc
	var_119_bool = 0; // 0xf68 PushV
	var_119_bool = 0; // 0xf69 MovB
	var_120_bool = 0; var_121_object = Obj(); // 0xf6a PushV
	var_121_object = var_1_object; // 0xf6b MovT
	func_6374(var_121_object); // 0xf6c Call
	if(var_120_bool == 0) goto Label_3957; // 0xf6e JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0xf6f PushV
	var_129_object = var_1_object; // 0xf70 MovT
	func_6386(var_129_object); // 0xf71 Call
	if(var_128_bool == 0) goto Label_3957; // 0xf73 JumpB
	var_119_bool = 1; // 0xf74 MovB
	
Label_3957:
	if(var_119_bool == 0) goto Label_3963; // 0xf75 JumpB
	var_134_int = 10216; // 0xf76 PushI
	var_135_int = 11263; // 0xf77 PushI
	var_136_int = 11262; // 0xf78 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xf79 TObjFunc
	
Label_3963:
	var_137_bool = 0; var_138_object = Obj(); // 0xf7b PushV
	var_138_object = var_1_object; // 0xf7c MovT
	func_6710(var_138_object); // 0xf7d Call
	if(var_137_bool == 0) goto Label_3973; // 0xf7f JumpB
	var_143_int = 9782; // 0xf80 PushI
	var_144_int = 10764; // 0xf81 PushI
	var_145_int = 10775; // 0xf82 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xf83 TObjFunc
	
Label_3973:
	var_146_bool = 0; var_147_object = Obj(); // 0xf85 PushV
	var_147_object = var_1_object; // 0xf86 MovT
	func_6722(var_147_object); // 0xf87 Call
	if(var_146_bool == 0) goto Label_3983; // 0xf89 JumpB
	var_152_int = 10191; // 0xf8a PushI
	var_153_int = 11238; // 0xf8b PushI
	var_154_int = 11237; // 0xf8c PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xf8d TObjFunc
	
Label_3983:
	var_155_int = 15312; // 0xf8f PushI
	var_156_int = -1; // 0xf90 PushI
	var_157_int = 16550; // 0xf91 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xf92 TObjFunc
	return 0; // 0xf94 Return
	
Label_3989:
	var_158_int = 11238; // 0xf95 PushI
	var_159_bool = var_35_string == var_158_int; // 0xf96 Eq
	if(var_159_bool == 0) goto Label_4007; // 0xf97 JumpB
	var_160_string = ""; // 0xf98 PushV
	var_160_string = "Neutral"; // 0xf99 MovS
	func_3860(var_36_bool, var_160_string); // 0xf9a Call
	var_161_int = 10192; // 0xf9c PushI
	SetMessage(var_161_int); // 0xf9d TObjFunc
	ClearReplies(); // 0xf9f TObjFunc
	var_162_int = 10295; // 0xfa1 PushI
	var_163_int = 11351; // 0xfa2 PushI
	var_164_int = 11350; // 0xfa3 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0xfa4 TObjFunc
	return 0; // 0xfa6 Return
	
Label_4007:
	var_165_int = 11351; // 0xfa7 PushI
	var_166_bool = var_35_string == var_165_int; // 0xfa8 Eq
	if(var_166_bool == 0) goto Label_4030; // 0xfa9 JumpB
	var_167_string = ""; // 0xfaa PushV
	var_167_string = "Neutral"; // 0xfab MovS
	func_3860(var_36_bool, var_167_string); // 0xfac Call
	var_168_int = 10296; // 0xfae PushI
	SetMessage(var_168_int); // 0xfaf TObjFunc
	ClearReplies(); // 0xfb1 TObjFunc
	var_169_int = 10297; // 0xfb3 PushI
	var_170_int = 11353; // 0xfb4 PushI
	var_171_int = 11352; // 0xfb5 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xfb6 TObjFunc
	var_172_int = 10299; // 0xfb8 PushI
	var_173_int = 11353; // 0xfb9 PushI
	var_174_int = 11354; // 0xfba PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xfbb TObjFunc
	return 0; // 0xfbd Return
	
Label_4030:
	var_175_int = 11353; // 0xfbe PushI
	var_176_bool = var_35_string == var_175_int; // 0xfbf Eq
	if(var_176_bool == 0) goto Label_4053; // 0xfc0 JumpB
	var_177_string = ""; // 0xfc1 PushV
	var_177_string = "Neutral"; // 0xfc2 MovS
	func_3860(var_36_bool, var_177_string); // 0xfc3 Call
	var_178_int = 10298; // 0xfc5 PushI
	SetMessage(var_178_int); // 0xfc6 TObjFunc
	ClearReplies(); // 0xfc8 TObjFunc
	var_179_int = 10300; // 0xfca PushI
	var_180_int = -1; // 0xfcb PushI
	var_181_int = 11356; // 0xfcc PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xfcd TObjFunc
	var_182_int = 10301; // 0xfcf PushI
	var_183_int = -1; // 0xfd0 PushI
	var_184_int = 11357; // 0xfd1 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xfd2 TObjFunc
	return 0; // 0xfd4 Return
	
Label_4053:
	var_185_int = 10764; // 0xfd5 PushI
	var_186_bool = var_35_string == var_185_int; // 0xfd6 Eq
	if(var_186_bool == 0) goto Label_4086; // 0xfd7 JumpB
	var_187_string = ""; // 0xfd8 PushV
	var_187_string = "Neutral"; // 0xfd9 MovS
	func_3860(var_36_bool, var_187_string); // 0xfda Call
	var_188_int = 9773; // 0xfdc PushI
	SetMessage(var_188_int); // 0xfdd TObjFunc
	ClearReplies(); // 0xfdf TObjFunc
	var_189_int = 9774; // 0xfe1 PushI
	var_190_int = 10766; // 0xfe2 PushI
	var_191_int = 10765; // 0xfe3 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xfe4 TObjFunc
	var_192_int = 9778; // 0xfe6 PushI
	var_193_int = 10766; // 0xfe7 PushI
	var_194_int = 10769; // 0xfe8 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xfe9 TObjFunc
	var_195_int = 9779; // 0xfeb PushI
	var_196_int = 10766; // 0xfec PushI
	var_197_int = 10771; // 0xfed PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xfee TObjFunc
	var_198_int = 9780; // 0xff0 PushI
	var_199_int = -1; // 0xff1 PushI
	var_200_int = 10773; // 0xff2 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xff3 TObjFunc
	return 0; // 0xff5 Return
	
Label_4086:
	var_201_int = 10766; // 0xff6 PushI
	var_202_bool = var_35_string == var_201_int; // 0xff7 Eq
	if(var_202_bool == 0) goto Label_4109; // 0xff8 JumpB
	var_203_string = ""; // 0xff9 PushV
	var_203_string = "Neutral"; // 0xffa MovS
	func_3860(var_36_bool, var_203_string); // 0xffb Call
	var_204_int = 9775; // 0xffd PushI
	SetMessage(var_204_int); // 0xffe TObjFunc
	ClearReplies(); // 0x1000 TObjFunc
	var_205_int = 9776; // 0x1002 PushI
	var_206_int = -1; // 0x1003 PushI
	var_207_int = 10767; // 0x1004 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1005 TObjFunc
	var_208_int = 9777; // 0x1007 PushI
	var_209_int = -1; // 0x1008 PushI
	var_210_int = 10768; // 0x1009 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x100a TObjFunc
	return 0; // 0x100c Return
	
Label_4109:
	var_211_int = 11263; // 0x100d PushI
	var_212_bool = var_35_string == var_211_int; // 0x100e Eq
	if(var_212_bool == 0) goto Label_4127; // 0x100f JumpB
	var_213_string = ""; // 0x1010 PushV
	var_213_string = "Neutral"; // 0x1011 MovS
	func_3860(var_36_bool, var_213_string); // 0x1012 Call
	var_214_int = 10217; // 0x1014 PushI
	SetMessage(var_214_int); // 0x1015 TObjFunc
	ClearReplies(); // 0x1017 TObjFunc
	var_215_int = 10287; // 0x1019 PushI
	var_216_int = 11343; // 0x101a PushI
	var_217_int = 11342; // 0x101b PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x101c TObjFunc
	return 0; // 0x101e Return
	
Label_4127:
	var_218_int = 11343; // 0x101f PushI
	var_219_bool = var_35_string == var_218_int; // 0x1020 Eq
	if(var_219_bool == 0) goto Label_4150; // 0x1021 JumpB
	var_220_string = ""; // 0x1022 PushV
	var_220_string = "Neutral"; // 0x1023 MovS
	func_3860(var_36_bool, var_220_string); // 0x1024 Call
	var_221_int = 10288; // 0x1026 PushI
	SetMessage(var_221_int); // 0x1027 TObjFunc
	ClearReplies(); // 0x1029 TObjFunc
	var_222_int = 10289; // 0x102b PushI
	var_223_int = 11346; // 0x102c PushI
	var_224_int = 11344; // 0x102d PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x102e TObjFunc
	var_225_int = 10290; // 0x1030 PushI
	var_226_int = -1; // 0x1031 PushI
	var_227_int = 11345; // 0x1032 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1033 TObjFunc
	return 0; // 0x1035 Return
	
Label_4150:
	var_228_int = 11346; // 0x1036 PushI
	var_229_bool = var_35_string == var_228_int; // 0x1037 Eq
	if(var_229_bool == 0) goto Label_4168; // 0x1038 JumpB
	var_230_string = ""; // 0x1039 PushV
	var_230_string = "Neutral"; // 0x103a MovS
	func_3860(var_36_bool, var_230_string); // 0x103b Call
	var_231_int = 10291; // 0x103d PushI
	SetMessage(var_231_int); // 0x103e TObjFunc
	ClearReplies(); // 0x1040 TObjFunc
	var_232_int = 10292; // 0x1042 PushI
	var_233_int = 11348; // 0x1043 PushI
	var_234_int = 11347; // 0x1044 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1045 TObjFunc
	return 0; // 0x1047 Return
	
Label_4168:
	var_235_int = 11348; // 0x1048 PushI
	var_236_bool = var_35_string == var_235_int; // 0x1049 Eq
	if(var_236_bool == 0) goto Label_4186; // 0x104a JumpB
	var_237_string = ""; // 0x104b PushV
	var_237_string = "Neutral"; // 0x104c MovS
	func_3860(var_36_bool, var_237_string); // 0x104d Call
	var_238_int = 10293; // 0x104f PushI
	SetMessage(var_238_int); // 0x1050 TObjFunc
	ClearReplies(); // 0x1052 TObjFunc
	var_239_int = 10294; // 0x1054 PushI
	var_240_int = -1; // 0x1055 PushI
	var_241_int = 11349; // 0x1056 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1057 TObjFunc
	return 0; // 0x1059 Return
	
Label_4186:
	var_3_string = 1; // 0x105a TMovB
	var_242_bool = 0; // 0x105b PushV
	func_5645(var_242_bool); // 0x105c Call
	if(var_242_bool == 0) goto Label_4194; // 0x105e JumpB
	lshStopAnimation(); // 0x105f Func
	goto Label_4196; // 0x1061 Jump
	
Label_4196:
	return 0; // 0x1064 Return
	
Label_4194:
	StopAnimation(); // 0x1062 Func
	
Label_4198:
	return 0; // 0x1066 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x1126 PushI
	if(var_37_int == 0) goto Label_4811; // 0x1127 JumpB
	func_5541(); // 0x1129 Call
	var_39_int = 12557; // 0x112b PushI
	var_40_bool = var_36_bool == var_39_int; // 0x112c Eq
	if(var_40_bool == 0) goto Label_4433; // 0x112d JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x112e PushV
	var_41_object = var_1_object; // 0x112f MovT
	var_42_object = var_0_object; // 0x1130 MovT
	func_5844(); // 0x1131 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x1133 PushV
	var_45_object = var_1_object; // 0x1134 MovT
	var_46_object = var_0_object; // 0x1135 MovT
	func_5850(); // 0x1136 Call
	var_49_object = Obj(); var_50_object = Obj(); // 0x1138 PushV
	var_49_object = var_1_object; // 0x1139 MovT
	var_50_object = var_0_object; // 0x113a MovT
	func_5856(); // 0x113b Call
	var_115_object = Obj(); var_116_object = Obj(); // 0x113d PushV
	var_115_object = var_1_object; // 0x113e MovT
	var_116_object = var_0_object; // 0x113f MovT
	func_6179(var_116_object); // 0x1140 Call
	var_134_object = Obj(); var_135_object = Obj(); // 0x1142 PushV
	var_134_object = var_1_object; // 0x1143 MovT
	var_135_object = var_0_object; // 0x1144 MovT
	func_6201(var_135_object); // 0x1145 Call
	var_140_object = Obj(); var_141_object = Obj(); // 0x1147 PushV
	var_140_object = var_1_object; // 0x1148 MovT
	var_141_object = var_0_object; // 0x1149 MovT
	func_6190(var_141_object); // 0x114a Call
	var_146_object = Obj(); var_147_object = Obj(); // 0x114c PushV
	var_146_object = var_1_object; // 0x114d MovT
	var_147_object = var_0_object; // 0x114e MovT
	func_5670(); // 0x114f Call
	
Label_4433:
	var_150_int = 12559; // 0x1151 PushI
	var_151_bool = var_36_bool == var_150_int; // 0x1152 Eq
	if(var_151_bool == 0) goto Label_4441; // 0x1153 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x1154 PushV
	var_152_object = var_1_object; // 0x1155 MovT
	var_153_object = var_0_object; // 0x1156 MovT
	func_5844(); // 0x1157 Call
	
Label_4441:
	var_154_int = 12681; // 0x1159 PushI
	var_155_bool = var_36_bool == var_154_int; // 0x115a Eq
	if(var_155_bool == 0) goto Label_4474; // 0x115b JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0x115c PushV
	var_156_object = var_1_object; // 0x115d MovT
	var_157_object = var_0_object; // 0x115e MovT
	func_5850(); // 0x115f Call
	var_158_object = Obj(); var_159_object = Obj(); // 0x1161 PushV
	var_158_object = var_1_object; // 0x1162 MovT
	var_159_object = var_0_object; // 0x1163 MovT
	func_5856(); // 0x1164 Call
	var_160_object = Obj(); var_161_object = Obj(); // 0x1166 PushV
	var_160_object = var_1_object; // 0x1167 MovT
	var_161_object = var_0_object; // 0x1168 MovT
	func_5670(); // 0x1169 Call
	var_162_object = Obj(); var_163_object = Obj(); // 0x116b PushV
	var_162_object = var_1_object; // 0x116c MovT
	var_163_object = var_0_object; // 0x116d MovT
	func_6179(var_163_object); // 0x116e Call
	var_164_object = Obj(); var_165_object = Obj(); // 0x1170 PushV
	var_164_object = var_1_object; // 0x1171 MovT
	var_165_object = var_0_object; // 0x1172 MovT
	func_6190(var_165_object); // 0x1173 Call
	var_166_object = Obj(); var_167_object = Obj(); // 0x1175 PushV
	var_166_object = var_1_object; // 0x1176 MovT
	var_167_object = var_0_object; // 0x1177 MovT
	func_6201(var_167_object); // 0x1178 Call
	
Label_4474:
	var_168_int = 13068; // 0x117a PushI
	var_169_bool = var_36_bool == var_168_int; // 0x117b Eq
	if(var_169_bool == 0) goto Label_4482; // 0x117c JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x117d PushV
	var_170_object = var_1_object; // 0x117e MovT
	var_171_object = var_0_object; // 0x117f MovT
	func_5924(); // 0x1180 Call
	
Label_4482:
	var_174_int = 12541; // 0x1182 PushI
	var_175_bool = var_35_string == var_174_int; // 0x1183 Eq
	if(var_175_bool == 0) goto Label_4558; // 0x1184 JumpB
	var_176_string = ""; // 0x1185 PushV
	var_176_string = "Neutral"; // 0x1186 MovS
	func_4373(var_36_bool, var_176_string); // 0x1187 Call
	var_191_int = 11344; // 0x1189 PushI
	SetMessage(var_191_int); // 0x118a TObjFunc
	ClearReplies(); // 0x118c TObjFunc
	var_192_bool = 0; // 0x118e PushV
	var_192_bool = 0; // 0x118f MovB
	var_193_bool = 0; var_194_object = Obj(); // 0x1190 PushV
	var_194_object = var_1_object; // 0x1191 MovT
	func_6398(var_194_object); // 0x1192 Call
	if(var_193_bool == 0) goto Label_4507; // 0x1194 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x1195 PushV
	var_200_object = var_1_object; // 0x1196 MovT
	func_6410(var_200_object); // 0x1197 Call
	if(var_199_bool == 0) goto Label_4507; // 0x1199 JumpB
	var_192_bool = 1; // 0x119a MovB
	
Label_4507:
	if(var_192_bool == 0) goto Label_4513; // 0x119b JumpB
	var_205_int = 11346; // 0x119c PushI
	var_206_int = 12544; // 0x119d PushI
	var_207_int = 12543; // 0x119e PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x119f TObjFunc
	
Label_4513:
	var_208_bool = 0; // 0x11a1 PushV
	var_208_bool = 0; // 0x11a2 MovB
	var_209_bool = 0; var_210_object = Obj(); // 0x11a3 PushV
	var_210_object = var_1_object; // 0x11a4 MovT
	func_6410(var_210_object); // 0x11a5 Call
	if(var_209_bool == 0) goto Label_4527; // 0x11a7 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x11a8 PushV
	var_212_object = var_1_object; // 0x11a9 MovT
	func_6422(var_212_object); // 0x11aa Call
	var_217_bool = var_211_bool == 0; // 0x11ac Not
	if(var_217_bool == 0) goto Label_4527; // 0x11ad JumpB
	var_208_bool = 1; // 0x11ae MovB
	
Label_4527:
	if(var_208_bool == 0) goto Label_4533; // 0x11af JumpB
	var_218_int = 11473; // 0x11b0 PushI
	var_219_int = 12680; // 0x11b1 PushI
	var_220_int = 12679; // 0x11b2 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x11b3 TObjFunc
	
Label_4533:
	var_221_bool = 0; // 0x11b5 PushV
	var_221_bool = 0; // 0x11b6 MovB
	var_222_bool = 0; var_223_object = Obj(); // 0x11b7 PushV
	var_223_object = var_1_object; // 0x11b8 MovT
	func_6446(var_223_object); // 0x11b9 Call
	if(var_222_bool == 0) goto Label_4546; // 0x11bb JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x11bc PushV
	var_229_object = var_1_object; // 0x11bd MovT
	func_6434(var_229_object); // 0x11be Call
	if(var_228_bool == 0) goto Label_4546; // 0x11c0 JumpB
	var_221_bool = 1; // 0x11c1 MovB
	
Label_4546:
	if(var_221_bool == 0) goto Label_4552; // 0x11c2 JumpB
	var_234_int = 11853; // 0x11c3 PushI
	var_235_int = 13067; // 0x11c4 PushI
	var_236_int = 13066; // 0x11c5 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x11c6 TObjFunc
	
Label_4552:
	var_237_int = 11345; // 0x11c8 PushI
	var_238_int = -1; // 0x11c9 PushI
	var_239_int = 12542; // 0x11ca PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x11cb TObjFunc
	return 0; // 0x11cd Return
	
Label_4558:
	var_240_int = 13067; // 0x11ce PushI
	var_241_bool = var_35_string == var_240_int; // 0x11cf Eq
	if(var_241_bool == 0) goto Label_4576; // 0x11d0 JumpB
	var_242_string = ""; // 0x11d1 PushV
	var_242_string = "Neutral"; // 0x11d2 MovS
	func_4373(var_36_bool, var_242_string); // 0x11d3 Call
	var_243_int = 11854; // 0x11d5 PushI
	SetMessage(var_243_int); // 0x11d6 TObjFunc
	ClearReplies(); // 0x11d8 TObjFunc
	var_244_int = 11855; // 0x11da PushI
	var_245_int = -1; // 0x11db PushI
	var_246_int = 13068; // 0x11dc PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x11dd TObjFunc
	return 0; // 0x11df Return
	
Label_4576:
	var_247_int = 12680; // 0x11e0 PushI
	var_248_bool = var_35_string == var_247_int; // 0x11e1 Eq
	if(var_248_bool == 0) goto Label_4594; // 0x11e2 JumpB
	var_249_string = ""; // 0x11e3 PushV
	var_249_string = "Neutral"; // 0x11e4 MovS
	func_4373(var_36_bool, var_249_string); // 0x11e5 Call
	var_250_int = 11474; // 0x11e7 PushI
	SetMessage(var_250_int); // 0x11e8 TObjFunc
	ClearReplies(); // 0x11ea TObjFunc
	var_251_int = 11475; // 0x11ec PushI
	var_252_int = -1; // 0x11ed PushI
	var_253_int = 12681; // 0x11ee PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x11ef TObjFunc
	return 0; // 0x11f1 Return
	
Label_4594:
	var_254_int = 12544; // 0x11f2 PushI
	var_255_bool = var_35_string == var_254_int; // 0x11f3 Eq
	if(var_255_bool == 0) goto Label_4617; // 0x11f4 JumpB
	var_256_string = ""; // 0x11f5 PushV
	var_256_string = "Neutral"; // 0x11f6 MovS
	func_4373(var_36_bool, var_256_string); // 0x11f7 Call
	var_257_int = 11347; // 0x11f9 PushI
	SetMessage(var_257_int); // 0x11fa TObjFunc
	ClearReplies(); // 0x11fc TObjFunc
	var_258_int = 11348; // 0x11fe PushI
	var_259_int = 12550; // 0x11ff PushI
	var_260_int = 12545; // 0x1200 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1201 TObjFunc
	var_261_int = 11367; // 0x1203 PushI
	var_262_int = 12566; // 0x1204 PushI
	var_263_int = 12565; // 0x1205 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1206 TObjFunc
	return 0; // 0x1208 Return
	
Label_4617:
	var_264_int = 12566; // 0x1209 PushI
	var_265_bool = var_35_string == var_264_int; // 0x120a Eq
	if(var_265_bool == 0) goto Label_4640; // 0x120b JumpB
	var_266_string = ""; // 0x120c PushV
	var_266_string = "Neutral"; // 0x120d MovS
	func_4373(var_36_bool, var_266_string); // 0x120e Call
	var_267_int = 11368; // 0x1210 PushI
	SetMessage(var_267_int); // 0x1211 TObjFunc
	ClearReplies(); // 0x1213 TObjFunc
	var_268_int = 11369; // 0x1215 PushI
	var_269_int = 12614; // 0x1216 PushI
	var_270_int = 12567; // 0x1217 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1218 TObjFunc
	var_271_int = 11419; // 0x121a PushI
	var_272_int = 12554; // 0x121b PushI
	var_273_int = 12616; // 0x121c PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x121d TObjFunc
	return 0; // 0x121f Return
	
Label_4640:
	var_274_int = 12614; // 0x1220 PushI
	var_275_bool = var_35_string == var_274_int; // 0x1221 Eq
	if(var_275_bool == 0) goto Label_4653; // 0x1222 JumpB
	var_276_string = ""; // 0x1223 PushV
	var_276_string = "Neutral"; // 0x1224 MovS
	func_4373(var_36_bool, var_276_string); // 0x1225 Call
	var_277_int = 11417; // 0x1227 PushI
	SetMessage(var_277_int); // 0x1228 TObjFunc
	ClearReplies(); // 0x122a TObjFunc
	return 0; // 0x122c Return
	
Label_4653:
	var_278_int = 12550; // 0x122d PushI
	var_279_bool = var_35_string == var_278_int; // 0x122e Eq
	if(var_279_bool == 0) goto Label_4676; // 0x122f JumpB
	var_280_string = ""; // 0x1230 PushV
	var_280_string = "Neutral"; // 0x1231 MovS
	func_4373(var_36_bool, var_280_string); // 0x1232 Call
	var_281_int = 11353; // 0x1234 PushI
	SetMessage(var_281_int); // 0x1235 TObjFunc
	ClearReplies(); // 0x1237 TObjFunc
	var_282_int = 11354; // 0x1239 PushI
	var_283_int = 12552; // 0x123a PushI
	var_284_int = 12551; // 0x123b PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x123c TObjFunc
	var_285_int = 11365; // 0x123e PushI
	var_286_int = 12556; // 0x123f PushI
	var_287_int = 12562; // 0x1240 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x1241 TObjFunc
	return 0; // 0x1243 Return
	
Label_4676:
	var_288_int = 12552; // 0x1244 PushI
	var_289_bool = var_35_string == var_288_int; // 0x1245 Eq
	if(var_289_bool == 0) goto Label_4694; // 0x1246 JumpB
	var_290_string = ""; // 0x1247 PushV
	var_290_string = "Neutral"; // 0x1248 MovS
	func_4373(var_36_bool, var_290_string); // 0x1249 Call
	var_291_int = 11355; // 0x124b PushI
	SetMessage(var_291_int); // 0x124c TObjFunc
	ClearReplies(); // 0x124e TObjFunc
	var_292_int = 11356; // 0x1250 PushI
	var_293_int = 12554; // 0x1251 PushI
	var_294_int = 12553; // 0x1252 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x1253 TObjFunc
	return 0; // 0x1255 Return
	
Label_4694:
	var_295_int = 12554; // 0x1256 PushI
	var_296_bool = var_35_string == var_295_int; // 0x1257 Eq
	if(var_296_bool == 0) goto Label_4717; // 0x1258 JumpB
	var_297_string = ""; // 0x1259 PushV
	var_297_string = "Neutral"; // 0x125a MovS
	func_4373(var_36_bool, var_297_string); // 0x125b Call
	var_298_int = 11357; // 0x125d PushI
	SetMessage(var_298_int); // 0x125e TObjFunc
	ClearReplies(); // 0x1260 TObjFunc
	var_299_int = 11358; // 0x1262 PushI
	var_300_int = 12556; // 0x1263 PushI
	var_301_int = 12555; // 0x1264 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x1265 TObjFunc
	var_302_int = 11421; // 0x1267 PushI
	var_303_int = 12620; // 0x1268 PushI
	var_304_int = 12619; // 0x1269 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x126a TObjFunc
	return 0; // 0x126c Return
	
Label_4717:
	var_305_int = 12620; // 0x126d PushI
	var_306_bool = var_35_string == var_305_int; // 0x126e Eq
	if(var_306_bool == 0) goto Label_4740; // 0x126f JumpB
	var_307_string = ""; // 0x1270 PushV
	var_307_string = "Neutral"; // 0x1271 MovS
	func_4373(var_36_bool, var_307_string); // 0x1272 Call
	var_308_int = 11422; // 0x1274 PushI
	SetMessage(var_308_int); // 0x1275 TObjFunc
	ClearReplies(); // 0x1277 TObjFunc
	var_309_int = 11423; // 0x1279 PushI
	var_310_int = 12624; // 0x127a PushI
	var_311_int = 12621; // 0x127b PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x127c TObjFunc
	var_312_int = 11424; // 0x127e PushI
	var_313_int = 12556; // 0x127f PushI
	var_314_int = 12622; // 0x1280 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x1281 TObjFunc
	return 0; // 0x1283 Return
	
Label_4740:
	var_315_int = 12624; // 0x1284 PushI
	var_316_bool = var_35_string == var_315_int; // 0x1285 Eq
	if(var_316_bool == 0) goto Label_4758; // 0x1286 JumpB
	var_317_string = ""; // 0x1287 PushV
	var_317_string = "Neutral"; // 0x1288 MovS
	func_4373(var_36_bool, var_317_string); // 0x1289 Call
	var_318_int = 11425; // 0x128b PushI
	SetMessage(var_318_int); // 0x128c TObjFunc
	ClearReplies(); // 0x128e TObjFunc
	var_319_int = 11426; // 0x1290 PushI
	var_320_int = 12626; // 0x1291 PushI
	var_321_int = 12625; // 0x1292 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x1293 TObjFunc
	return 0; // 0x1295 Return
	
Label_4758:
	var_322_int = 12626; // 0x1296 PushI
	var_323_bool = var_35_string == var_322_int; // 0x1297 Eq
	if(var_323_bool == 0) goto Label_4776; // 0x1298 JumpB
	var_324_string = ""; // 0x1299 PushV
	var_324_string = "Neutral"; // 0x129a MovS
	func_4373(var_36_bool, var_324_string); // 0x129b Call
	var_325_int = 11427; // 0x129d PushI
	SetMessage(var_325_int); // 0x129e TObjFunc
	ClearReplies(); // 0x12a0 TObjFunc
	var_326_int = 11428; // 0x12a2 PushI
	var_327_int = 12556; // 0x12a3 PushI
	var_328_int = 12627; // 0x12a4 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x12a5 TObjFunc
	return 0; // 0x12a7 Return
	
Label_4776:
	var_329_int = 12556; // 0x12a8 PushI
	var_330_bool = var_35_string == var_329_int; // 0x12a9 Eq
	if(var_330_bool == 0) goto Label_4799; // 0x12aa JumpB
	var_331_string = ""; // 0x12ab PushV
	var_331_string = "Neutral"; // 0x12ac MovS
	func_4373(var_36_bool, var_331_string); // 0x12ad Call
	var_332_int = 11359; // 0x12af PushI
	SetMessage(var_332_int); // 0x12b0 TObjFunc
	ClearReplies(); // 0x12b2 TObjFunc
	var_333_int = 11360; // 0x12b4 PushI
	var_334_int = -1; // 0x12b5 PushI
	var_335_int = 12557; // 0x12b6 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x12b7 TObjFunc
	var_336_int = 11362; // 0x12b9 PushI
	var_337_int = -1; // 0x12ba PushI
	var_338_int = 12559; // 0x12bb PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x12bc TObjFunc
	return 0; // 0x12be Return
	
Label_4799:
	var_3_string = 1; // 0x12bf TMovB
	var_339_bool = 0; // 0x12c0 PushV
	func_5645(var_339_bool); // 0x12c1 Call
	if(var_339_bool == 0) goto Label_4807; // 0x12c3 JumpB
	lshStopAnimation(); // 0x12c4 Func
	goto Label_4809; // 0x12c6 Jump
	
Label_4809:
	return 0; // 0x12c9 Return
	
Label_4807:
	StopAnimation(); // 0x12c7 Func
	
Label_4811:
	return 0; // 0x12cb Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0x1382 PushI
	if(var_37_int == 0) goto Label_5438; // 0x1383 JumpB
	func_5541(); // 0x1385 Call
	var_39_int = 13112; // 0x1387 PushI
	var_40_bool = var_36_int == var_39_int; // 0x1388 Eq
	if(var_40_bool == 0) goto Label_5007; // 0x1389 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x138a PushV
	var_41_object = var_1_object; // 0x138b MovT
	var_42_object = var_0_object; // 0x138c MovT
	func_5930(); // 0x138d Call
	
Label_5007:
	var_114_int = 13122; // 0x138f PushI
	var_115_bool = var_36_int == var_114_int; // 0x1390 Eq
	if(var_115_bool == 0) goto Label_5020; // 0x1391 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x1392 PushV
	var_116_object = var_1_object; // 0x1393 MovT
	var_117_object = var_0_object; // 0x1394 MovT
	func_5974(); // 0x1395 Call
	var_137_object = Obj(); var_138_object = Obj(); // 0x1397 PushV
	var_137_object = var_1_object; // 0x1398 MovT
	var_138_object = var_0_object; // 0x1399 MovT
	func_6027(); // 0x139a Call
	
Label_5020:
	var_153_int = 13123; // 0x139c PushI
	var_154_bool = var_36_int == var_153_int; // 0x139d Eq
	if(var_154_bool == 0) goto Label_5028; // 0x139e JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0x139f PushV
	var_155_object = var_1_object; // 0x13a0 MovT
	var_156_object = var_0_object; // 0x13a1 MovT
	func_6212(); // 0x13a2 Call
	
Label_5028:
	var_159_int = 13085; // 0x13a4 PushI
	var_160_bool = var_35_int == var_159_int; // 0x13a5 Eq
	if(var_160_bool == 0) goto Label_5095; // 0x13a6 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x13a7 PushV
	var_162_object = var_1_object; // 0x13a8 MovT
	func_6458(var_162_object); // 0x13a9 Call
	if(var_161_bool == 0) goto Label_5051; // 0x13ab JumpB
	var_167_string = ""; // 0x13ac PushV
	var_167_string = "Neutral"; // 0x13ad MovS
	func_4977(var_36_int, var_167_string); // 0x13ae Call
	var_182_int = 11872; // 0x13b0 PushI
	SetMessage(var_182_int); // 0x13b1 TObjFunc
	ClearReplies(); // 0x13b3 TObjFunc
	var_183_int = 11873; // 0x13b5 PushI
	var_184_int = 13087; // 0x13b6 PushI
	var_185_int = 13086; // 0x13b7 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x13b8 TObjFunc
	return 0; // 0x13ba Return
	
Label_5051:
	var_186_string = ""; // 0x13bb PushV
	var_186_string = "Neutral"; // 0x13bc MovS
	func_4977(var_36_int, var_186_string); // 0x13bd Call
	var_187_int = 11897; // 0x13bf PushI
	SetMessage(var_187_int); // 0x13c0 TObjFunc
	ClearReplies(); // 0x13c2 TObjFunc
	var_188_bool = 0; var_189_object = Obj(); // 0x13c4 PushV
	var_189_object = var_1_object; // 0x13c5 MovT
	func_6470(var_189_object); // 0x13c6 Call
	if(var_188_bool == 0) goto Label_5070; // 0x13c8 JumpB
	var_194_int = 11898; // 0x13c9 PushI
	var_195_int = 13115; // 0x13ca PushI
	var_196_int = 13114; // 0x13cb PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x13cc TObjFunc
	
Label_5070:
	var_197_bool = 0; // 0x13ce PushV
	var_197_bool = 0; // 0x13cf MovB
	var_198_bool = 0; var_199_object = Obj(); // 0x13d0 PushV
	var_199_object = var_1_object; // 0x13d1 MovT
	func_6494(var_199_object); // 0x13d2 Call
	if(var_198_bool == 0) goto Label_5083; // 0x13d4 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x13d5 PushV
	var_205_object = var_1_object; // 0x13d6 MovT
	func_6734(var_205_object); // 0x13d7 Call
	if(var_204_bool == 0) goto Label_5083; // 0x13d9 JumpB
	var_197_bool = 1; // 0x13da MovB
	
Label_5083:
	if(var_197_bool == 0) goto Label_5089; // 0x13db JumpB
	var_210_int = 11907; // 0x13dc PushI
	var_211_int = 13124; // 0x13dd PushI
	var_212_int = 13123; // 0x13de PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x13df TObjFunc
	
Label_5089:
	var_213_int = 11915; // 0x13e1 PushI
	var_214_int = -1; // 0x13e2 PushI
	var_215_int = 13131; // 0x13e3 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x13e4 TObjFunc
	return 0; // 0x13e6 Return
	
Label_5095:
	var_216_int = 13124; // 0x13e7 PushI
	var_217_bool = var_35_int == var_216_int; // 0x13e8 Eq
	if(var_217_bool == 0) goto Label_5113; // 0x13e9 JumpB
	var_218_string = ""; // 0x13ea PushV
	var_218_string = "Neutral"; // 0x13eb MovS
	func_4977(var_36_int, var_218_string); // 0x13ec Call
	var_219_int = 11908; // 0x13ee PushI
	SetMessage(var_219_int); // 0x13ef TObjFunc
	ClearReplies(); // 0x13f1 TObjFunc
	var_220_int = 11909; // 0x13f3 PushI
	var_221_int = 13126; // 0x13f4 PushI
	var_222_int = 13125; // 0x13f5 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x13f6 TObjFunc
	return 0; // 0x13f8 Return
	
Label_5113:
	var_223_int = 13126; // 0x13f9 PushI
	var_224_bool = var_35_int == var_223_int; // 0x13fa Eq
	if(var_224_bool == 0) goto Label_5131; // 0x13fb JumpB
	var_225_string = ""; // 0x13fc PushV
	var_225_string = "Neutral"; // 0x13fd MovS
	func_4977(var_36_int, var_225_string); // 0x13fe Call
	var_226_int = 11910; // 0x1400 PushI
	SetMessage(var_226_int); // 0x1401 TObjFunc
	ClearReplies(); // 0x1403 TObjFunc
	var_227_int = 11911; // 0x1405 PushI
	var_228_int = 13128; // 0x1406 PushI
	var_229_int = 13127; // 0x1407 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1408 TObjFunc
	return 0; // 0x140a Return
	
Label_5131:
	var_230_int = 13128; // 0x140b PushI
	var_231_bool = var_35_int == var_230_int; // 0x140c Eq
	if(var_231_bool == 0) goto Label_5154; // 0x140d JumpB
	var_232_string = ""; // 0x140e PushV
	var_232_string = "Neutral"; // 0x140f MovS
	func_4977(var_36_int, var_232_string); // 0x1410 Call
	var_233_int = 11912; // 0x1412 PushI
	SetMessage(var_233_int); // 0x1413 TObjFunc
	ClearReplies(); // 0x1415 TObjFunc
	var_234_int = 11913; // 0x1417 PushI
	var_235_int = -1; // 0x1418 PushI
	var_236_int = 13129; // 0x1419 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x141a TObjFunc
	var_237_int = 11914; // 0x141c PushI
	var_238_int = -1; // 0x141d PushI
	var_239_int = 13130; // 0x141e PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x141f TObjFunc
	return 0; // 0x1421 Return
	
Label_5154:
	var_240_int = 13115; // 0x1422 PushI
	var_241_bool = var_35_int == var_240_int; // 0x1423 Eq
	if(var_241_bool == 0) goto Label_5172; // 0x1424 JumpB
	var_242_string = ""; // 0x1425 PushV
	var_242_string = "Neutral"; // 0x1426 MovS
	func_4977(var_36_int, var_242_string); // 0x1427 Call
	var_243_int = 11899; // 0x1429 PushI
	SetMessage(var_243_int); // 0x142a TObjFunc
	ClearReplies(); // 0x142c TObjFunc
	var_244_int = 11900; // 0x142e PushI
	var_245_int = 13117; // 0x142f PushI
	var_246_int = 13116; // 0x1430 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x1431 TObjFunc
	return 0; // 0x1433 Return
	
Label_5172:
	var_247_int = 13117; // 0x1434 PushI
	var_248_bool = var_35_int == var_247_int; // 0x1435 Eq
	if(var_248_bool == 0) goto Label_5190; // 0x1436 JumpB
	var_249_string = ""; // 0x1437 PushV
	var_249_string = "Neutral"; // 0x1438 MovS
	func_4977(var_36_int, var_249_string); // 0x1439 Call
	var_250_int = 11901; // 0x143b PushI
	SetMessage(var_250_int); // 0x143c TObjFunc
	ClearReplies(); // 0x143e TObjFunc
	var_251_int = 11902; // 0x1440 PushI
	var_252_int = 13119; // 0x1441 PushI
	var_253_int = 13118; // 0x1442 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x1443 TObjFunc
	return 0; // 0x1445 Return
	
Label_5190:
	var_254_int = 13119; // 0x1446 PushI
	var_255_bool = var_35_int == var_254_int; // 0x1447 Eq
	if(var_255_bool == 0) goto Label_5208; // 0x1448 JumpB
	var_256_string = ""; // 0x1449 PushV
	var_256_string = "Neutral"; // 0x144a MovS
	func_4977(var_36_int, var_256_string); // 0x144b Call
	var_257_int = 11903; // 0x144d PushI
	SetMessage(var_257_int); // 0x144e TObjFunc
	ClearReplies(); // 0x1450 TObjFunc
	var_258_int = 11904; // 0x1452 PushI
	var_259_int = 13121; // 0x1453 PushI
	var_260_int = 13120; // 0x1454 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1455 TObjFunc
	return 0; // 0x1457 Return
	
Label_5208:
	var_261_int = 13121; // 0x1458 PushI
	var_262_bool = var_35_int == var_261_int; // 0x1459 Eq
	if(var_262_bool == 0) goto Label_5226; // 0x145a JumpB
	var_263_string = ""; // 0x145b PushV
	var_263_string = "Neutral"; // 0x145c MovS
	func_4977(var_36_int, var_263_string); // 0x145d Call
	var_264_int = 11905; // 0x145f PushI
	SetMessage(var_264_int); // 0x1460 TObjFunc
	ClearReplies(); // 0x1462 TObjFunc
	var_265_int = 11906; // 0x1464 PushI
	var_266_int = -1; // 0x1465 PushI
	var_267_int = 13122; // 0x1466 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x1467 TObjFunc
	return 0; // 0x1469 Return
	
Label_5226:
	var_268_int = 13087; // 0x146a PushI
	var_269_bool = var_35_int == var_268_int; // 0x146b Eq
	if(var_269_bool == 0) goto Label_5244; // 0x146c JumpB
	var_270_string = ""; // 0x146d PushV
	var_270_string = "Neutral"; // 0x146e MovS
	func_4977(var_36_int, var_270_string); // 0x146f Call
	var_271_int = 11874; // 0x1471 PushI
	SetMessage(var_271_int); // 0x1472 TObjFunc
	ClearReplies(); // 0x1474 TObjFunc
	var_272_int = 11875; // 0x1476 PushI
	var_273_int = 13089; // 0x1477 PushI
	var_274_int = 13088; // 0x1478 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x1479 TObjFunc
	return 0; // 0x147b Return
	
Label_5244:
	var_275_int = 13089; // 0x147c PushI
	var_276_bool = var_35_int == var_275_int; // 0x147d Eq
	if(var_276_bool == 0) goto Label_5262; // 0x147e JumpB
	var_277_string = ""; // 0x147f PushV
	var_277_string = "Neutral"; // 0x1480 MovS
	func_4977(var_36_int, var_277_string); // 0x1481 Call
	var_278_int = 11876; // 0x1483 PushI
	SetMessage(var_278_int); // 0x1484 TObjFunc
	ClearReplies(); // 0x1486 TObjFunc
	var_279_int = 11877; // 0x1488 PushI
	var_280_int = 13091; // 0x1489 PushI
	var_281_int = 13090; // 0x148a PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x148b TObjFunc
	return 0; // 0x148d Return
	
Label_5262:
	var_282_int = 13091; // 0x148e PushI
	var_283_bool = var_35_int == var_282_int; // 0x148f Eq
	if(var_283_bool == 0) goto Label_5290; // 0x1490 JumpB
	var_284_string = ""; // 0x1491 PushV
	var_284_string = "Neutral"; // 0x1492 MovS
	func_4977(var_36_int, var_284_string); // 0x1493 Call
	var_285_int = 11878; // 0x1495 PushI
	SetMessage(var_285_int); // 0x1496 TObjFunc
	ClearReplies(); // 0x1498 TObjFunc
	var_286_bool = 0; var_287_object = Obj(); // 0x149a PushV
	var_287_object = var_1_object; // 0x149b MovT
	func_6338(var_287_object); // 0x149c Call
	if(var_286_bool == 0) goto Label_5284; // 0x149e JumpB
	var_292_int = 11879; // 0x149f PushI
	var_293_int = 13093; // 0x14a0 PushI
	var_294_int = 13092; // 0x14a1 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x14a2 TObjFunc
	
Label_5284:
	var_295_int = 11888; // 0x14a4 PushI
	var_296_int = 13093; // 0x14a5 PushI
	var_297_int = 13101; // 0x14a6 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x14a7 TObjFunc
	return 0; // 0x14a9 Return
	
Label_5290:
	var_298_int = 13093; // 0x14aa PushI
	var_299_bool = var_35_int == var_298_int; // 0x14ab Eq
	if(var_299_bool == 0) goto Label_5308; // 0x14ac JumpB
	var_300_string = ""; // 0x14ad PushV
	var_300_string = "Neutral"; // 0x14ae MovS
	func_4977(var_36_int, var_300_string); // 0x14af Call
	var_301_int = 11880; // 0x14b1 PushI
	SetMessage(var_301_int); // 0x14b2 TObjFunc
	ClearReplies(); // 0x14b4 TObjFunc
	var_302_int = 11881; // 0x14b6 PushI
	var_303_int = 13095; // 0x14b7 PushI
	var_304_int = 13094; // 0x14b8 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x14b9 TObjFunc
	return 0; // 0x14bb Return
	
Label_5308:
	var_305_int = 13095; // 0x14bc PushI
	var_306_bool = var_35_int == var_305_int; // 0x14bd Eq
	if(var_306_bool == 0) goto Label_5331; // 0x14be JumpB
	var_307_string = ""; // 0x14bf PushV
	var_307_string = "Neutral"; // 0x14c0 MovS
	func_4977(var_36_int, var_307_string); // 0x14c1 Call
	var_308_int = 11882; // 0x14c3 PushI
	SetMessage(var_308_int); // 0x14c4 TObjFunc
	ClearReplies(); // 0x14c6 TObjFunc
	var_309_int = 11883; // 0x14c8 PushI
	var_310_int = 13097; // 0x14c9 PushI
	var_311_int = 13096; // 0x14ca PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x14cb TObjFunc
	var_312_int = 11889; // 0x14cd PushI
	var_313_int = 13103; // 0x14ce PushI
	var_314_int = 13102; // 0x14cf PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x14d0 TObjFunc
	return 0; // 0x14d2 Return
	
Label_5331:
	var_315_int = 13103; // 0x14d3 PushI
	var_316_bool = var_35_int == var_315_int; // 0x14d4 Eq
	if(var_316_bool == 0) goto Label_5349; // 0x14d5 JumpB
	var_317_string = ""; // 0x14d6 PushV
	var_317_string = "Neutral"; // 0x14d7 MovS
	func_4977(var_36_int, var_317_string); // 0x14d8 Call
	var_318_int = 11890; // 0x14da PushI
	SetMessage(var_318_int); // 0x14db TObjFunc
	ClearReplies(); // 0x14dd TObjFunc
	var_319_int = 11891; // 0x14df PushI
	var_320_int = 13097; // 0x14e0 PushI
	var_321_int = 13104; // 0x14e1 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x14e2 TObjFunc
	return 0; // 0x14e4 Return
	
Label_5349:
	var_322_int = 13097; // 0x14e5 PushI
	var_323_bool = var_35_int == var_322_int; // 0x14e6 Eq
	if(var_323_bool == 0) goto Label_5367; // 0x14e7 JumpB
	var_324_string = ""; // 0x14e8 PushV
	var_324_string = "Neutral"; // 0x14e9 MovS
	func_4977(var_36_int, var_324_string); // 0x14ea Call
	var_325_int = 11884; // 0x14ec PushI
	SetMessage(var_325_int); // 0x14ed TObjFunc
	ClearReplies(); // 0x14ef TObjFunc
	var_326_int = 11885; // 0x14f1 PushI
	var_327_int = 13099; // 0x14f2 PushI
	var_328_int = 13098; // 0x14f3 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x14f4 TObjFunc
	return 0; // 0x14f6 Return
	
Label_5367:
	var_329_int = 13099; // 0x14f7 PushI
	var_330_bool = var_35_int == var_329_int; // 0x14f8 Eq
	if(var_330_bool == 0) goto Label_5390; // 0x14f9 JumpB
	var_331_string = ""; // 0x14fa PushV
	var_331_string = "Neutral"; // 0x14fb MovS
	func_4977(var_36_int, var_331_string); // 0x14fc Call
	var_332_int = 11886; // 0x14fe PushI
	SetMessage(var_332_int); // 0x14ff TObjFunc
	ClearReplies(); // 0x1501 TObjFunc
	var_333_int = 11887; // 0x1503 PushI
	var_334_int = 13110; // 0x1504 PushI
	var_335_int = 13100; // 0x1505 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x1506 TObjFunc
	var_336_int = 11892; // 0x1508 PushI
	var_337_int = 13108; // 0x1509 PushI
	var_338_int = 13107; // 0x150a PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x150b TObjFunc
	return 0; // 0x150d Return
	
Label_5390:
	var_339_int = 13108; // 0x150e PushI
	var_340_bool = var_35_int == var_339_int; // 0x150f Eq
	if(var_340_bool == 0) goto Label_5408; // 0x1510 JumpB
	var_341_string = ""; // 0x1511 PushV
	var_341_string = "Neutral"; // 0x1512 MovS
	func_4977(var_36_int, var_341_string); // 0x1513 Call
	var_342_int = 11893; // 0x1515 PushI
	SetMessage(var_342_int); // 0x1516 TObjFunc
	ClearReplies(); // 0x1518 TObjFunc
	var_343_int = 11894; // 0x151a PushI
	var_344_int = 13110; // 0x151b PushI
	var_345_int = 13109; // 0x151c PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x151d TObjFunc
	return 0; // 0x151f Return
	
Label_5408:
	var_346_int = 13110; // 0x1520 PushI
	var_347_bool = var_35_int == var_346_int; // 0x1521 Eq
	if(var_347_bool == 0) goto Label_5426; // 0x1522 JumpB
	var_348_string = ""; // 0x1523 PushV
	var_348_string = "Neutral"; // 0x1524 MovS
	func_4977(var_36_int, var_348_string); // 0x1525 Call
	var_349_int = 11895; // 0x1527 PushI
	SetMessage(var_349_int); // 0x1528 TObjFunc
	ClearReplies(); // 0x152a TObjFunc
	var_350_int = 11896; // 0x152c PushI
	var_351_int = -1; // 0x152d PushI
	var_352_int = 13112; // 0x152e PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x152f TObjFunc
	return 0; // 0x1531 Return
	
Label_5426:
	var_3_string = 1; // 0x1532 TMovB
	var_353_bool = 0; // 0x1533 PushV
	func_5645(var_353_bool); // 0x1534 Call
	if(var_353_bool == 0) goto Label_5434; // 0x1536 JumpB
	lshStopAnimation(); // 0x1537 Func
	goto Label_5436; // 0x1539 Jump
	
Label_5436:
	return 0; // 0x153c Return
	
Label_5434:
	StopAnimation(); // 0x153a Func
	
Label_5438:
	return 0; // 0x153e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_6991(); // 0x7 Call
	var_36_bool = 0; // 0x9 PushV
	func_5458(var_36_bool); // 0xa Call
	var_39_bool = var_36_bool == 0; // 0xc Not
	if(var_39_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_40_string = ""; // 0x13 PushV
	var_40_string = "Neutral"; // 0x14 MovS
	func_5523(var_40_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5632(var_806_bool)
{
	var_807_bool = 0; var_808_bool = 0; // 0x1600 PushV
	var_809_string = ""; // 0x1601 PushV
	var_809_string = "No"; // 0x1602 MovS
	func_5523(var_809_string); // 0x1603 Call
	lshWaitForAnimEnd(var_808_bool); // 0x1605 Func
	var_806_bool = var_808_bool; // 0x1607 Mov
	return 2; // 0x1608 Return
}


func_6149()
{
	var_154_string = "ood6Anna3"; // 0x1806 PushS
	var_155_int = 1; // 0x1807 PushI
	SetVariable(var_154_string, var_155_int); // 0x1808 Func
	return 0; // 0x180a Return
}


func_6662(var_229_bool)
{
	var_231_int = 0; var_232_string = ""; // 0x1a07 PushV
	var_232_string = "ood6Anna3"; // 0x1a08 MovS
	func_5558(var_231_int, var_232_string); // 0x1a09 Call
	var_233_int = 0; // 0x1a0b PushI
	var_234_bool = var_231_int == var_233_int; // 0x1a0c Eq
	if(var_234_bool == 0) goto Label_6672; // 0x1a0d JumpB
	var_229_bool = 1; // 0x1a0e MovB
	return 0; // 0x1a0f Return
	
Label_6672:
	var_229_bool = 0; // 0x1a10 MovB
	return 0; // 0x1a11 Return
}


func_5641(var_91_int)
{
	var_91_int = 2856; // 0x1609 MovI
	return 0; // 0x160a Return
}


func_5643(var_92_string)
{
	var_92_string = "ui/NPC_Anna.png"; // 0x160b MovS
	return 0; // 0x160c Return
}


func_6155()
{
	var_753_string = "KnowLaska"; // 0x180c PushS
	var_754_int = 1; // 0x180d PushI
	SetVariable(var_753_string, var_754_int); // 0x180e Func
	return 0; // 0x1810 Return
}


func_5645(var_38_bool)
{
	var_38_bool = 1; // 0x160d MovB
	return 0; // 0x160e Return
}


func_5647()
{
	var_421_string = "KnowKapella"; // 0x1610 PushS
	var_422_int = 1; // 0x1611 PushI
	SetVariable(var_421_string, var_422_int); // 0x1612 Func
	return 0; // 0x1614 Return
}


func_6161()
{
	var_298_string = "KnowMishka"; // 0x1812 PushS
	var_299_int = 1; // 0x1813 PushI
	SetVariable(var_298_string, var_299_int); // 0x1814 Func
	return 0; // 0x1816 Return
}


func_6674(var_357_bool)
{
	var_359_int = 0; var_360_string = ""; // 0x1a13 PushV
	var_360_string = "KnowJulia"; // 0x1a14 MovS
	func_5558(var_359_int, var_360_string); // 0x1a15 Call
	var_361_int = 1; // 0x1a17 PushI
	var_362_bool = var_359_int == var_361_int; // 0x1a18 Eq
	if(var_362_bool == 0) goto Label_6684; // 0x1a19 JumpB
	var_357_bool = 1; // 0x1a1a MovB
	return 0; // 0x1a1b Return
	
Label_6684:
	var_357_bool = 0; // 0x1a1c MovB
	return 0; // 0x1a1d Return
}


func_5653(var_146_object)
{
	var_148_string = "money100 is given"; // 0x1616 PushS
	Trace(var_148_string); // 0x1617 Func
	var_149_object = Obj(); var_150_string = ""; var_151_int = 0; // 0x1619 PushV
	var_149_object = var_146_object; // 0x161a Mov
	var_150_string = "money"; // 0x161b MovS
	var_151_int = 100; // 0x161c MovI
	func_5439(var_150_string, var_151_int); // 0x161d Call
	return 0; // 0x161f Return
}


func_6167()
{
	var_93_string = "ood3Anna2"; // 0x1818 PushS
	var_94_int = 1; // 0x1819 PushI
	SetVariable(var_93_string, var_94_int); // 0x181a Func
	return 0; // 0x181c Return
}


func_6173()
{
	var_99_string = "ood3Anna3"; // 0x181e PushS
	var_100_int = 1; // 0x181f PushI
	SetVariable(var_99_string, var_100_int); // 0x1820 Func
	return 0; // 0x1822 Return
}


func_6686(var_430_bool)
{
	var_432_int = 0; var_433_string = ""; // 0x1a1f PushV
	var_433_string = "KnowLaska"; // 0x1a20 MovS
	func_5558(var_432_int, var_433_string); // 0x1a21 Call
	var_434_int = 1; // 0x1a23 PushI
	var_435_bool = var_432_int == var_434_int; // 0x1a24 Eq
	if(var_435_bool == 0) goto Label_6696; // 0x1a25 JumpB
	var_430_bool = 1; // 0x1a26 MovB
	return 0; // 0x1a27 Return
	
Label_6696:
	var_430_bool = 0; // 0x1a28 MovB
	return 0; // 0x1a29 Return
}


func_5664()
{
	var_157_string = "playsound"; // 0x1621 PushS
	var_158_string = "givemoney"; // 0x1622 PushS
	TriggerWorld(var_157_string, var_158_string); // 0x1623 Func
	return 0; // 0x1625 Return
}


func_6179(var_115_object)
{
	var_117_string = "beta_pills is given"; // 0x1824 PushS
	Trace(var_117_string); // 0x1825 Func
	var_118_object = Obj(); var_119_string = ""; var_120_int = 0; // 0x1827 PushV
	var_118_object = var_115_object; // 0x1828 Mov
	var_119_string = "beta_pills"; // 0x1829 MovS
	var_120_int = 1; // 0x182a MovI
	func_5587(var_118_object, var_119_string, var_120_int); // 0x182b Call
	return 0; // 0x182d Return
}


func_5670()
{
	var_148_string = "playsound"; // 0x1627 PushS
	var_149_string = "giveitem"; // 0x1628 PushS
	TriggerWorld(var_148_string, var_149_string); // 0x1629 Func
	return 0; // 0x162b Return
}


func_6698(var_305_bool)
{
	var_307_int = 0; var_308_string = ""; // 0x1a2b PushV
	var_308_string = "KnowMishka"; // 0x1a2c MovS
	func_5558(var_307_int, var_308_string); // 0x1a2d Call
	var_309_int = 1; // 0x1a2f PushI
	var_310_bool = var_307_int == var_309_int; // 0x1a30 Eq
	if(var_310_bool == 0) goto Label_6708; // 0x1a31 JumpB
	var_305_bool = 1; // 0x1a32 MovB
	return 0; // 0x1a33 Return
	
Label_6708:
	var_305_bool = 0; // 0x1a34 MovB
	return 0; // 0x1a35 Return
}


func_5676()
{
	var_379_string = "KnowShabnak"; // 0x162d PushS
	var_380_int = 1; // 0x162e PushI
	SetVariable(var_379_string, var_380_int); // 0x162f Func
	return 0; // 0x1631 Return
}


func_6190(var_140_object)
{
	var_142_string = "gamma_pills is given"; // 0x182f PushS
	Trace(var_142_string); // 0x1830 Func
	var_143_object = Obj(); var_144_string = ""; var_145_int = 0; // 0x1832 PushV
	var_143_object = var_140_object; // 0x1833 Mov
	var_144_string = "gamma_pills"; // 0x1834 MovS
	var_145_int = 1; // 0x1835 MovI
	func_5587(var_143_object, var_144_string, var_145_int); // 0x1836 Call
	return 0; // 0x1838 Return
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x31 PushV
	var_0_object = var_40_object; // 0x32 TMov
	var_50_bool = 0; var_51_object = Obj(); // 0x33 PushV
	var_51_object = var_40_object; // 0x34 Mov
	func_5463(var_51_object); // 0x35 Call
	var_90_bool = var_50_bool == 0; // 0x37 Not
	if(var_90_bool == 0) goto Label_59; // 0x38 JumpB
	var_39_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_46_object); // 0x3b Func
	var_91_int = 0; // 0x3d PushV
	func_5641(var_91_int); // 0x3e Call
	SetNPCName(var_91_int); // 0x40 ObjFunc
	var_92_string = ""; // 0x42 PushV
	func_5643(var_92_string); // 0x43 Call
	SetPhoto(var_92_string); // 0x45 ObjFunc
	var_93_int = 0; // 0x47 PushV
	func_6862(var_93_int); // 0x48 Call
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
	var_143_bool = var_49_bool == 0; // 0x5e Not
	if(var_143_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_49_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_144_object = Obj(); // 0x65 PushV
	var_144_object = var_40_object; // 0x66 Mov
	func_5519(); // 0x67 Call
	StopDialog(var_46_object); // 0x69 Func
	GetReturnValue(var_48_int); // 0x6b ObjFunc
	var_39_int = var_48_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_5682()
{
	var_233_string = "ood1Anna7"; // 0x1633 PushS
	var_234_int = 1; // 0x1634 PushI
	SetVariable(var_233_string, var_234_int); // 0x1635 Func
	return 0; // 0x1637 Return
}


func_6710(var_137_bool)
{
	var_139_int = 0; var_140_string = ""; // 0x1a37 PushV
	var_140_string = "ood3Anna2"; // 0x1a38 MovS
	func_5558(var_139_int, var_140_string); // 0x1a39 Call
	var_141_int = 0; // 0x1a3b PushI
	var_142_bool = var_139_int == var_141_int; // 0x1a3c Eq
	if(var_142_bool == 0) goto Label_6720; // 0x1a3d JumpB
	var_137_bool = 1; // 0x1a3e MovB
	return 0; // 0x1a3f Return
	
Label_6720:
	var_137_bool = 0; // 0x1a40 MovB
	return 0; // 0x1a41 Return
}


func_5688()
{
	var_239_string = "ood1Anna8"; // 0x1639 PushS
	var_240_int = 1; // 0x163a PushI
	SetVariable(var_239_string, var_240_int); // 0x163b Func
	return 0; // 0x163d Return
}


func_6201(var_134_object)
{
	var_136_string = "delta_pills is given"; // 0x183a PushS
	Trace(var_136_string); // 0x183b Func
	var_137_object = Obj(); var_138_string = ""; var_139_int = 0; // 0x183d PushV
	var_137_object = var_134_object; // 0x183e Mov
	var_138_string = "delta_pills"; // 0x183f MovS
	var_139_int = 1; // 0x1840 MovI
	func_5587(var_137_object, var_138_string, var_139_int); // 0x1841 Call
	return 0; // 0x1843 Return
}


func_5694()
{
	var_245_string = "ood1Anna9"; // 0x163f PushS
	var_246_int = 1; // 0x1640 PushI
	SetVariable(var_245_string, var_246_int); // 0x1641 Func
	return 0; // 0x1643 Return
}


func_6722(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x1a43 PushV
	var_149_string = "ood3Anna3"; // 0x1a44 MovS
	func_5558(var_148_int, var_149_string); // 0x1a45 Call
	var_150_int = 0; // 0x1a47 PushI
	var_151_bool = var_148_int == var_150_int; // 0x1a48 Eq
	if(var_151_bool == 0) goto Label_6732; // 0x1a49 JumpB
	var_146_bool = 1; // 0x1a4a MovB
	return 0; // 0x1a4b Return
	
Label_6732:
	var_146_bool = 0; // 0x1a4c MovB
	return 0; // 0x1a4d Return
}


func_5700()
{
	var_251_string = "ood1Anna10"; // 0x1645 PushS
	var_252_int = 1; // 0x1646 PushI
	SetVariable(var_251_string, var_252_int); // 0x1647 Func
	return 0; // 0x1649 Return
}


func_6212()
{
	var_157_string = "ood5Anna1"; // 0x1845 PushS
	var_158_int = 1; // 0x1846 PushI
	SetVariable(var_157_string, var_158_int); // 0x1847 Func
	return 0; // 0x1849 Return
}


func_6218(var_316_bool)
{
	var_318_int = 0; var_319_string = ""; // 0x184b PushV
	var_319_string = "d1q02"; // 0x184c MovS
	func_5558(var_318_int, var_319_string); // 0x184d Call
	var_320_int = 1000; // 0x184f PushI
	var_321_bool = var_318_int == var_320_int; // 0x1850 Eq
	if(var_321_bool == 0) goto Label_6228; // 0x1851 JumpB
	var_316_bool = 1; // 0x1852 MovB
	return 0; // 0x1853 Return
	
Label_6228:
	var_316_bool = 0; // 0x1854 MovB
	return 0; // 0x1855 Return
}


func_5706()
{
	var_43_string = "ood2Anna1"; // 0x164b PushS
	var_44_int = 1; // 0x164c PushI
	SetVariable(var_43_string, var_44_int); // 0x164d Func
	return 0; // 0x164f Return
}


func_6734(var_204_bool)
{
	var_206_int = 0; var_207_string = ""; // 0x1a4f PushV
	var_207_string = "ood5Anna1"; // 0x1a50 MovS
	func_5558(var_206_int, var_207_string); // 0x1a51 Call
	var_208_int = 0; // 0x1a53 PushI
	var_209_bool = var_206_int == var_208_int; // 0x1a54 Eq
	if(var_209_bool == 0) goto Label_6744; // 0x1a55 JumpB
	var_204_bool = 1; // 0x1a56 MovB
	return 0; // 0x1a57 Return
	
Label_6744:
	var_204_bool = 0; // 0x1a58 MovB
	return 0; // 0x1a59 Return
}


func_5712()
{
	var_136_string = "ood2Anna2"; // 0x1651 PushS
	var_137_int = 1; // 0x1652 PushI
	SetVariable(var_136_string, var_137_int); // 0x1653 Func
	return 0; // 0x1655 Return
}


func_6230(var_264_bool)
{
	var_266_int = 0; var_267_string = ""; // 0x1857 PushV
	var_267_string = "d1q02"; // 0x1858 MovS
	func_5558(var_266_int, var_267_string); // 0x1859 Call
	var_268_int = 1; // 0x185b PushI
	var_269_bool = var_266_int == var_268_int; // 0x185c Eq
	if(var_269_bool == 0) goto Label_6240; // 0x185d JumpB
	var_264_bool = 1; // 0x185e MovB
	return 0; // 0x185f Return
	
Label_6240:
	var_264_bool = 0; // 0x1860 MovB
	return 0; // 0x1861 Return
}


func_5718()
{
	var_334_string = "KnowPochka"; // 0x1657 PushS
	var_335_int = 1; // 0x1658 PushI
	SetVariable(var_334_string, var_335_int); // 0x1659 Func
	return 0; // 0x165b Return
}


func_600(var_2_object, var_158_string)
{
	var_159_bool = 0; // 0x259 PushV
	func_5645(var_159_bool); // 0x25a Call
	var_160_bool = var_159_bool == 0; // 0x25c Not
	if(var_160_bool == 0) goto Label_607; // 0x25d JumpB
	return 0; // 0x25e Return
	
Label_607:
	var_161_bool = var_158_string == var_2_object; // 0x25f Eq
	if(var_161_bool == 0) goto Label_610; // 0x260 JumpB
	return 0; // 0x261 Return
	
Label_610:
	var_162_string = ""; // 0x262 PushV
	var_162_string = var_158_string; // 0x263 Mov
	func_5523(var_162_string); // 0x264 Call
	var_2_object = var_158_string; // 0x266 TMov
	return 0; // 0x267 Return
}


func_6746(var_382_bool)
{
	var_384_int = 0; var_385_string = ""; // 0x1a5b PushV
	var_385_string = "KnowOspina"; // 0x1a5c MovS
	func_5558(var_384_int, var_385_string); // 0x1a5d Call
	var_386_int = 1; // 0x1a5f PushI
	var_387_bool = var_384_int == var_386_int; // 0x1a60 Eq
	if(var_387_bool == 0) goto Label_6756; // 0x1a61 JumpB
	var_382_bool = 1; // 0x1a62 MovB
	return 0; // 0x1a63 Return
	
Label_6756:
	var_382_bool = 0; // 0x1a64 MovB
	return 0; // 0x1a65 Return
}


func_5724()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x165c PushV
	var_49_string = "d2q01"; // 0x165d PushS
	var_50_int = 2; // 0x165e PushI
	SetVariable(var_49_string, var_50_int); // 0x165f Func
	var_51_object = Obj(); // 0x1661 PushV
	func_6812(var_51_object); // 0x1662 Call
	var_48_object = var_51_object; // 0x1663 Mov
	var_58_string = "d2q01AnnaGotoKapella"; // 0x1665 PushS
	var_59_string = "pt_map_kapella"; // 0x1666 PushS
	var_60_int = 1; // 0x1667 PushI
	var_61_int = 11388; // 0x1668 PushI
	var_62_float = 0; // 0x1669 PushV
	func_5612(var_62_float); // 0x166a Call
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x166c ObjFunc
	func_6895(); // 0x166f Call
	return 2; // 0x1671 Return
}


func_6242(var_347_bool)
{
	var_349_int = 0; var_350_string = ""; // 0x1863 PushV
	var_350_string = "d1q01FirstGeorgVisit"; // 0x1864 MovS
	func_5558(var_349_int, var_350_string); // 0x1865 Call
	var_351_int = 1; // 0x1867 PushI
	var_352_bool = var_349_int == var_351_int; // 0x1868 Eq
	if(var_352_bool == 0) goto Label_6252; // 0x1869 JumpB
	var_347_bool = 1; // 0x186a MovB
	return 0; // 0x186b Return
	
Label_6252:
	var_347_bool = 0; // 0x186c MovB
	return 0; // 0x186d Return
}


func_6758(var_414_bool)
{
	var_416_int = 0; var_417_string = ""; // 0x1a67 PushV
	var_417_string = "KnowStamatins"; // 0x1a68 MovS
	func_5558(var_416_int, var_417_string); // 0x1a69 Call
	var_418_int = 1; // 0x1a6b PushI
	var_419_bool = var_416_int == var_418_int; // 0x1a6c Eq
	if(var_419_bool == 0) goto Label_6768; // 0x1a6d JumpB
	var_414_bool = 1; // 0x1a6e MovB
	return 0; // 0x1a6f Return
	
Label_6768:
	var_414_bool = 0; // 0x1a70 MovB
	return 0; // 0x1a71 Return
}


func_4199(var_0_object, var_525_int, var_526_object)
{
	var_528_object = Obj(); var_529_bool = 0; var_530_int = 0; var_531_bool = 0; var_532_object = Obj(); var_533_bool = 0; var_534_int = 0; var_535_bool = 0; // 0x1067 PushV
	var_0_object = var_526_object; // 0x1068 TMov
	var_536_bool = 0; var_537_object = Obj(); // 0x1069 PushV
	var_537_object = var_526_object; // 0x106a Mov
	func_5463(var_537_object); // 0x106b Call
	var_538_bool = var_536_bool == 0; // 0x106d Not
	if(var_538_bool == 0) goto Label_4209; // 0x106e JumpB
	var_525_int = -2; // 0x106f MovI
	return 8; // 0x1070 Return
	
Label_4209:
	CreateDialog(var_532_object); // 0x1071 Func
	var_539_int = 0; // 0x1073 PushV
	func_5641(var_539_int); // 0x1074 Call
	SetNPCName(var_539_int); // 0x1076 ObjFunc
	var_540_string = ""; // 0x1078 PushV
	func_5643(var_540_string); // 0x1079 Call
	SetPhoto(var_540_string); // 0x107b ObjFunc
	var_541_int = 0; // 0x107d PushV
	func_6862(var_541_int); // 0x107e Call
	SetPlayerName(var_541_int); // 0x1080 ObjFunc
	var_534_int = -1; // 0x1082 MovI
	IsOverrideActive(var_533_bool); // 0x1083 Func
	var_542_bool = var_533_bool; // 0x1085 Push
	if(var_542_bool == 0) goto Label_4233; // 0x1086 JumpB
	var_525_int = -2; // 0x1087 MovI
	return 8; // 0x1088 Return
	
Label_4233:
	DoDialog(var_532_object); // 0x1089 Func
	var_543_object = Obj(); var_544_object = Obj(); // 0x108b PushV
	var_543_object = var_526_object; // 0x108c Mov
	var_544_object = var_532_object; // 0x108d Mov
	TaskCall(13); // 0x108e TaskCall
	func_4262(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object); // 0x108f Call
	TaskReturn(); // 0x1090 TaskReturn
	IsDialogEnd(var_535_bool); // 0x1092 ObjFunc
	
Label_4244:
	var_612_bool = var_535_bool == 0; // 0x1094 Not
	if(var_612_bool == 0) goto Label_4251; // 0x1095 JumpB
	sync(); // 0x1096 Func
	IsDialogEnd(var_535_bool); // 0x1098 ObjFunc
	goto Label_4244; // 0x109a Jump
	
Label_4251:
	var_613_object = Obj(); // 0x109b PushV
	var_613_object = var_526_object; // 0x109c Mov
	func_5519(); // 0x109d Call
	StopDialog(var_532_object); // 0x109f Func
	GetReturnValue(var_534_int); // 0x10a1 ObjFunc
	var_525_int = var_534_int; // 0x10a3 Mov
	return 8; // 0x10a4 Return
}


func_6254(var_388_bool)
{
	var_390_int = 0; var_391_string = ""; // 0x186f PushV
	var_391_string = "ood1Anna7"; // 0x1870 MovS
	func_5558(var_390_int, var_391_string); // 0x1871 Call
	var_392_int = 0; // 0x1873 PushI
	var_393_bool = var_390_int == var_392_int; // 0x1874 Eq
	if(var_393_bool == 0) goto Label_6264; // 0x1875 JumpB
	var_388_bool = 1; // 0x1876 MovB
	return 0; // 0x1877 Return
	
Label_6264:
	var_388_bool = 0; // 0x1878 MovB
	return 0; // 0x1879 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x71 TMov
	var_1_object = var_102_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_108_int = 1; // 0x74 PushI
	if(var_108_int == 0) goto Label_145; // 0x75 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x76 PushV
	var_109_object = var_1_object; // 0x77 MovT
	var_110_object = var_0_object; // 0x78 MovT
	func_6123(); // 0x79 Call
	var_113_string = ""; // 0x7b PushV
	var_113_string = "Neutral"; // 0x7c MovS
	func_175(var_103_object, var_113_string); // 0x7d Call
	var_128_int = 221; // 0x7f PushI
	SetMessage(var_128_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_129_int = 222; // 0x84 PushI
	var_130_int = 263; // 0x85 PushI
	var_131_int = 261; // 0x86 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x87 TObjFunc
	var_132_int = 223; // 0x89 PushI
	var_133_int = 266; // 0x8a PushI
	var_134_int = 262; // 0x8b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_135_bool = 0; // 0x91 PushV
	func_5645(var_135_bool); // 0x92 Call
	if(var_135_bool == 0) goto Label_160; // 0x94 JumpB
	
Label_149:
	lshWaitForAnimEnd(); // 0x95 Func
	var_136_object = var_3_object; // 0x97 PushT
	if(var_136_object == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_159:
	goto Label_174; // 0x9f Jump
	
Label_174:
	return 0; // 0xae Return
	
Label_154:
	var_137_string = ""; // 0x9a PushV
	var_137_string = var_2_object; // 0x9b MovT
	func_5523(var_137_string); // 0x9c Call
	goto Label_149; // 0x9e Jump
	
Label_160:
	var_138_string = "all"; // 0xa0 PushS
	var_139_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_138_string, var_139_string); // 0xa2 Func
	
Label_164:
	WaitForAnimEnd(); // 0xa4 Func
	var_140_object = var_3_object; // 0xa6 PushT
	if(var_140_object == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_169:
	var_141_string = "all"; // 0xa9 PushS
	var_142_string = "idle"; // 0xaa PushS
	PlayAnimation(var_141_string, var_142_string); // 0xab Func
	goto Label_164; // 0xad Jump
}


func_6770(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1a72 PushV
	GetDiaryRoot(var_83_object); // 0x1a73 Func
	var_84_bool = var_83_object == 0; // 0x1a75 Not
	if(var_84_bool == 0) goto Label_6780; // 0x1a76 JumpB
	var_85_string = "Can't retrieve diary root"; // 0x1a77 PushS
	Trace(var_85_string); // 0x1a78 Func
	var_81_object = 0; // 0x1a7a MovB
	return 2; // 0x1a7b Return
	
Label_6780:
	var_81_object = var_83_object; // 0x1a7c Mov
	return 2; // 0x1a7d Return
}


func_5747()
{
	var_553_string = "KnowZemlja"; // 0x1674 PushS
	var_554_int = 1; // 0x1675 PushI
	SetVariable(var_553_string, var_554_int); // 0x1676 Func
	return 0; // 0x1678 Return
}


func_3705(var_0_object, var_445_int, var_446_object)
{
	var_448_object = Obj(); var_449_bool = 0; var_450_int = 0; var_451_bool = 0; var_452_object = Obj(); var_453_bool = 0; var_454_int = 0; var_455_bool = 0; // 0xe79 PushV
	var_0_object = var_446_object; // 0xe7a TMov
	var_456_bool = 0; var_457_object = Obj(); // 0xe7b PushV
	var_457_object = var_446_object; // 0xe7c Mov
	func_5463(var_457_object); // 0xe7d Call
	var_458_bool = var_456_bool == 0; // 0xe7f Not
	if(var_458_bool == 0) goto Label_3715; // 0xe80 JumpB
	var_445_int = -2; // 0xe81 MovI
	return 8; // 0xe82 Return
	
Label_3715:
	CreateDialog(var_452_object); // 0xe83 Func
	var_459_int = 0; // 0xe85 PushV
	func_5641(var_459_int); // 0xe86 Call
	SetNPCName(var_459_int); // 0xe88 ObjFunc
	var_460_string = ""; // 0xe8a PushV
	func_5643(var_460_string); // 0xe8b Call
	SetPhoto(var_460_string); // 0xe8d ObjFunc
	var_461_int = 0; // 0xe8f PushV
	func_6862(var_461_int); // 0xe90 Call
	SetPlayerName(var_461_int); // 0xe92 ObjFunc
	var_454_int = -1; // 0xe94 MovI
	IsOverrideActive(var_453_bool); // 0xe95 Func
	var_462_bool = var_453_bool; // 0xe97 Push
	if(var_462_bool == 0) goto Label_3739; // 0xe98 JumpB
	var_445_int = -2; // 0xe99 MovI
	return 8; // 0xe9a Return
	
Label_3739:
	DoDialog(var_452_object); // 0xe9b Func
	var_463_object = Obj(); var_464_object = Obj(); // 0xe9d PushV
	var_463_object = var_446_object; // 0xe9e Mov
	var_464_object = var_452_object; // 0xe9f Mov
	TaskCall(11); // 0xea0 TaskCall
	func_3768(var_465_object, var_466_object, var_467_string, var_468_bool, var_463_object, var_464_object); // 0xea1 Call
	TaskReturn(); // 0xea2 TaskReturn
	IsDialogEnd(var_455_bool); // 0xea4 ObjFunc
	
Label_3750:
	var_521_bool = var_455_bool == 0; // 0xea6 Not
	if(var_521_bool == 0) goto Label_3757; // 0xea7 JumpB
	sync(); // 0xea8 Func
	IsDialogEnd(var_455_bool); // 0xeaa ObjFunc
	goto Label_3750; // 0xeac Jump
	
Label_3757:
	var_522_object = Obj(); // 0xead PushV
	var_522_object = var_446_object; // 0xeae Mov
	func_5519(); // 0xeaf Call
	StopDialog(var_452_object); // 0xeb1 Func
	GetReturnValue(var_454_int); // 0xeb3 ObjFunc
	var_445_int = var_454_int; // 0xeb5 Mov
	return 8; // 0xeb6 Return
}


func_5753()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x1679 PushV
	var_49_object = Obj(); // 0x167a PushV
	func_6812(var_49_object); // 0x167b Call
	var_48_object = var_49_object; // 0x167c Mov
	var_56_string = "d1q02AnnaGotoLaska"; // 0x167e PushS
	var_57_string = "pt_map_laska"; // 0x167f PushS
	var_58_int = 0; // 0x1680 PushI
	var_59_int = 8635; // 0x1681 PushI
	var_60_float = 0; // 0x1682 PushV
	func_5612(var_60_float); // 0x1683 Call
	AddMark(var_56_string, var_57_string, var_58_int, var_59_int, var_60_float); // 0x1685 ObjFunc
	return 2; // 0x1687 Return
}


func_6266(var_404_bool)
{
	var_406_int = 0; var_407_string = ""; // 0x187b PushV
	var_407_string = "ood1Anna8"; // 0x187c MovS
	func_5558(var_406_int, var_407_string); // 0x187d Call
	var_408_int = 0; // 0x187f PushI
	var_409_bool = var_406_int == var_408_int; // 0x1880 Eq
	if(var_409_bool == 0) goto Label_6276; // 0x1881 JumpB
	var_404_bool = 1; // 0x1882 MovB
	return 0; // 0x1883 Return
	
Label_6276:
	var_404_bool = 0; // 0x1884 MovB
	return 0; // 0x1885 Return
}


func_6783(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0; // 0x1a7f PushV
	var_81_object = Obj(); // 0x1a80 PushV
	func_6770(var_81_object); // 0x1a81 Call
	var_78_object = var_81_object; // 0x1a82 Mov
	Find(var_74_int, var_79_object); // 0x1a84 ObjFunc
	var_86_bool = var_79_object == 0; // 0x1a86 Not
	if(var_86_bool == 0) goto Label_6798; // 0x1a87 JumpB
	var_87_string = "Can't find diary parent with id: "; // 0x1a88 PushS
	var_88_int = var_87_string + var_74_int; // 0x1a89 Add
	Trace(var_88_int); // 0x1a8a Func
	var_72_bool = 0; // 0x1a8c MovB
	return 6; // 0x1a8d Return
	
Label_6798:
	AddChild(var_73_object); // 0x1a8e ObjFunc
	var_89_string = "player_diary"; // 0x1a90 PushS
	var_90_int = 1; // 0x1a91 PushI
	SetVariable(var_89_string, var_90_int); // 0x1a92 Func
	GetCategory(var_80_int); // 0x1a94 ObjFunc
	SetDiarySection(var_80_int); // 0x1a96 Func
	var_72_bool = 0; // 0x1a98 MovB
	return 6; // 0x1a99 Return
}


func_6278(var_420_bool)
{
	var_422_int = 0; var_423_string = ""; // 0x1887 PushV
	var_423_string = "ood1Anna9"; // 0x1888 MovS
	func_5558(var_422_int, var_423_string); // 0x1889 Call
	var_424_int = 0; // 0x188b PushI
	var_425_bool = var_422_int == var_424_int; // 0x188c Eq
	if(var_425_bool == 0) goto Label_6288; // 0x188d JumpB
	var_420_bool = 1; // 0x188e MovB
	return 0; // 0x188f Return
	
Label_6288:
	var_420_bool = 0; // 0x1890 MovB
	return 0; // 0x1891 Return
}


func_5769()
{
	var_65_object = Obj(); var_66_string = ""; var_67_float = 0; // 0x168a PushV
	var_68_object = Obj(); // 0x168b PushV
	func_6812(var_68_object); // 0x168c Call
	var_65_object = var_68_object; // 0x168d Mov
	var_66_string = "pt_map_laska"; // 0x168f MovS
	var_67_float = 2; // 0x1690 MovI
	func_6829(var_65_object, var_66_string, var_67_float); // 0x1691 Call
	var_88_object = Obj(); // 0x1693 PushV
	func_6812(var_88_object); // 0x1694 Call
	ShowMap(var_88_object); // 0x1696 ObjFunc
	return 0; // 0x1698 Return
}


func_6290(var_436_bool)
{
	var_438_int = 0; var_439_string = ""; // 0x1893 PushV
	var_439_string = "ood1Anna10"; // 0x1894 MovS
	func_5558(var_438_int, var_439_string); // 0x1895 Call
	var_440_int = 0; // 0x1897 PushI
	var_441_bool = var_438_int == var_440_int; // 0x1898 Eq
	if(var_441_bool == 0) goto Label_6300; // 0x1899 JumpB
	var_436_bool = 1; // 0x189a MovB
	return 0; // 0x189b Return
	
Label_6300:
	var_436_bool = 0; // 0x189c MovB
	return 0; // 0x189d Return
}


func_5785()
{
	var_91_string = "d1q02"; // 0x169a PushS
	var_92_int = 2; // 0x169b PushI
	SetVariable(var_91_string, var_92_int); // 0x169c Func
	func_6879(); // 0x169f Call
	return 0; // 0x16a1 Return
}


func_6812(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); // 0x1a9c PushV
	GetMainOutdoorScene(var_50_object); // 0x1a9d Func
	var_52_bool = var_50_object == 0; // 0x1a9f NullEq
	if(var_52_bool == 0) goto Label_6823; // 0x1aa0 JumpB
	var_53_string = "Can't find main outdoor scene"; // 0x1aa1 PushS
	Trace(var_53_string); // 0x1aa2 Func
	var_51_object = 0; // 0x1aa4 SetNull
	var_47_object = var_51_object; // 0x1aa5 Mov
	return 4; // 0x1aa6 Return
	
Label_6823:
	GetMap(var_51_object); // 0x1aa7 ObjFunc
	var_47_object = var_51_object; // 0x1aa9 Mov
	return 4; // 0x1aaa Return
}


func_6302(var_165_bool)
{
	var_167_int = 0; var_168_string = ""; // 0x189f PushV
	var_168_string = "ood2Anna1"; // 0x18a0 MovS
	func_5558(var_167_int, var_168_string); // 0x18a1 Call
	var_171_int = 0; // 0x18a3 PushI
	var_172_bool = var_167_int == var_171_int; // 0x18a4 Eq
	if(var_172_bool == 0) goto Label_6312; // 0x18a5 JumpB
	var_165_bool = 1; // 0x18a6 MovB
	return 0; // 0x18a7 Return
	
Label_6312:
	var_165_bool = 0; // 0x18a8 MovB
	return 0; // 0x18a9 Return
}


func_5794()
{
	var_640_string = "KnowNevod"; // 0x16a3 PushS
	var_641_int = 1; // 0x16a4 PushI
	SetVariable(var_640_string, var_641_int); // 0x16a5 Func
	return 0; // 0x16a7 Return
}


func_4262(var_0_object, var_1_object, var_2_object, var_3_object, var_543_object, var_544_object)
{
	var_0_object = var_544_object; // 0x10a7 TMov
	var_1_object = var_543_object; // 0x10a8 TMov
	var_3_object = 0; // 0x10a9 TMovB
	var_549_int = 1; // 0x10aa PushI
	if(var_549_int == 0) goto Label_4343; // 0x10ab JumpB
	var_550_string = ""; // 0x10ac PushV
	var_550_string = "Neutral"; // 0x10ad MovS
	func_4373(var_544_object, var_550_string); // 0x10ae Call
	var_555_int = 11344; // 0x10b0 PushI
	SetMessage(var_555_int); // 0x10b1 TObjFunc
	ClearReplies(); // 0x10b3 TObjFunc
	var_556_bool = 0; // 0x10b5 PushV
	var_556_bool = 0; // 0x10b6 MovB
	var_557_bool = 0; var_558_object = Obj(); // 0x10b7 PushV
	var_558_object = var_1_object; // 0x10b8 MovT
	func_6398(var_558_object); // 0x10b9 Call
	if(var_557_bool == 0) goto Label_4290; // 0x10bb JumpB
	var_563_bool = 0; var_564_object = Obj(); // 0x10bc PushV
	var_564_object = var_1_object; // 0x10bd MovT
	func_6410(var_564_object); // 0x10be Call
	if(var_563_bool == 0) goto Label_4290; // 0x10c0 JumpB
	var_556_bool = 1; // 0x10c1 MovB
	
Label_4290:
	if(var_556_bool == 0) goto Label_4296; // 0x10c2 JumpB
	var_569_int = 11346; // 0x10c3 PushI
	var_570_int = 12544; // 0x10c4 PushI
	var_571_int = 12543; // 0x10c5 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x10c6 TObjFunc
	
Label_4296:
	var_572_bool = 0; // 0x10c8 PushV
	var_572_bool = 0; // 0x10c9 MovB
	var_573_bool = 0; var_574_object = Obj(); // 0x10ca PushV
	var_574_object = var_1_object; // 0x10cb MovT
	func_6410(var_574_object); // 0x10cc Call
	if(var_573_bool == 0) goto Label_4310; // 0x10ce JumpB
	var_575_bool = 0; var_576_object = Obj(); // 0x10cf PushV
	var_576_object = var_1_object; // 0x10d0 MovT
	func_6422(var_576_object); // 0x10d1 Call
	var_581_bool = var_575_bool == 0; // 0x10d3 Not
	if(var_581_bool == 0) goto Label_4310; // 0x10d4 JumpB
	var_572_bool = 1; // 0x10d5 MovB
	
Label_4310:
	if(var_572_bool == 0) goto Label_4316; // 0x10d6 JumpB
	var_582_int = 11473; // 0x10d7 PushI
	var_583_int = 12680; // 0x10d8 PushI
	var_584_int = 12679; // 0x10d9 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x10da TObjFunc
	
Label_4316:
	var_585_bool = 0; // 0x10dc PushV
	var_585_bool = 0; // 0x10dd MovB
	var_586_bool = 0; var_587_object = Obj(); // 0x10de PushV
	var_587_object = var_1_object; // 0x10df MovT
	func_6446(var_587_object); // 0x10e0 Call
	if(var_586_bool == 0) goto Label_4329; // 0x10e2 JumpB
	var_592_bool = 0; var_593_object = Obj(); // 0x10e3 PushV
	var_593_object = var_1_object; // 0x10e4 MovT
	func_6434(var_593_object); // 0x10e5 Call
	if(var_592_bool == 0) goto Label_4329; // 0x10e7 JumpB
	var_585_bool = 1; // 0x10e8 MovB
	
Label_4329:
	if(var_585_bool == 0) goto Label_4335; // 0x10e9 JumpB
	var_598_int = 11853; // 0x10ea PushI
	var_599_int = 13067; // 0x10eb PushI
	var_600_int = 13066; // 0x10ec PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x10ed TObjFunc
	
Label_4335:
	var_601_int = 11345; // 0x10ef PushI
	var_602_int = -1; // 0x10f0 PushI
	var_603_int = 12542; // 0x10f1 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x10f2 TObjFunc
	goto Label_4343; // 0x10f4 Jump
	
Label_4343:
	var_604_bool = 0; // 0x10f7 PushV
	func_5645(var_604_bool); // 0x10f8 Call
	if(var_604_bool == 0) goto Label_4358; // 0x10fa JumpB
	
Label_4347:
	lshWaitForAnimEnd(); // 0x10fb Func
	var_605_object = var_3_object; // 0x10fd PushT
	if(var_605_object == 0) goto Label_4352; // 0x10fe JumpB
	goto Label_4357; // 0x10ff Jump
	
Label_4357:
	goto Label_4372; // 0x1105 Jump
	
Label_4372:
	return 0; // 0x1114 Return
	
Label_4352:
	var_606_string = ""; // 0x1100 PushV
	var_606_string = var_2_object; // 0x1101 MovT
	func_5523(var_606_string); // 0x1102 Call
	goto Label_4347; // 0x1104 Jump
	
Label_4358:
	var_607_string = "all"; // 0x1106 PushS
	var_608_string = "idle"; // 0x1107 PushS
	PlayAnimation(var_607_string, var_608_string); // 0x1108 Func
	
Label_4362:
	WaitForAnimEnd(); // 0x110a Func
	var_609_object = var_3_object; // 0x110c PushT
	if(var_609_object == 0) goto Label_4367; // 0x110d JumpB
	goto Label_4372; // 0x110e Jump
	
Label_4367:
	var_610_string = "all"; // 0x110f PushS
	var_611_string = "idle"; // 0x1110 PushS
	PlayAnimation(var_610_string, var_611_string); // 0x1111 Func
	goto Label_4362; // 0x1113 Jump
}


func_5800()
{
	var_55_object = Obj(); var_56_string = ""; var_57_float = 0; // 0x16a9 PushV
	var_58_object = Obj(); // 0x16aa PushV
	func_6812(var_58_object); // 0x16ab Call
	var_55_object = var_58_object; // 0x16ac Mov
	var_56_string = "pt_map_bigvlad"; // 0x16ae MovS
	var_57_float = 2; // 0x16af MovI
	func_6829(var_55_object, var_56_string, var_57_float); // 0x16b0 Call
	var_84_object = Obj(); // 0x16b2 PushV
	func_6812(var_84_object); // 0x16b3 Call
	ShowMap(var_84_object); // 0x16b5 ObjFunc
	return 0; // 0x16b7 Return
}


func_6314(var_182_bool)
{
	var_184_int = 0; var_185_string = ""; // 0x18ab PushV
	var_185_string = "ood2Anna2"; // 0x18ac MovS
	func_5558(var_184_int, var_185_string); // 0x18ad Call
	var_186_int = 0; // 0x18af PushI
	var_187_bool = var_184_int == var_186_int; // 0x18b0 Eq
	if(var_187_bool == 0) goto Label_6324; // 0x18b1 JumpB
	var_182_bool = 1; // 0x18b2 MovB
	return 0; // 0x18b3 Return
	
Label_6324:
	var_182_bool = 0; // 0x18b4 MovB
	return 0; // 0x18b5 Return
}


func_6829(var_91_object, var_92_string, var_93_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0; // 0x1aad PushV
	GetMainOutdoorScene(var_101_object); // 0x1aae Func
	var_103_bool = var_101_object == 0; // 0x1ab0 NullEq
	if(var_103_bool == 0) goto Label_6838; // 0x1ab1 JumpB
	var_104_string = "Can't find main outdoor scene"; // 0x1ab2 PushS
	Trace(var_104_string); // 0x1ab3 Func
	return 8; // 0x1ab5 Return
	
Label_6838:
	GetLocator(var_92_string, var_102_bool, var_99_cvector, var_100_cvector); // 0x1ab6 ObjFunc
	var_105_bool = var_102_bool == 0; // 0x1ab8 Not
	if(var_105_bool == 0) goto Label_6848; // 0x1ab9 JumpB
	var_106_string = "Warning: outdoor scene locator "; // 0x1aba PushS
	var_107_int = var_106_string + var_92_string; // 0x1abb Add
	var_108_string = " doesnt exist"; // 0x1abc PushS
	var_109_int = var_107_int + var_108_string; // 0x1abd Add
	Trace(var_109_int); // 0x1abe Func
	
Label_6848:
	GetMap(var_91_object); // 0x1ac0 ObjFunc
	var_110_bool = var_91_object == 0; // 0x1ac2 NullEq
	if(var_110_bool == 0) goto Label_6856; // 0x1ac3 JumpB
	var_111_string = "Can't find map"; // 0x1ac4 PushS
	Trace(var_111_string); // 0x1ac5 Func
	return 8; // 0x1ac7 Return
	
Label_6856:
	var_112_float = GetByIndex(var_99_cvector, 0); // 0x1ac8 PushE
	var_113_float = GetByIndex(var_99_cvector, 2); // 0x1ac9 PushE
	SetMapParams(var_112_float, var_113_float, var_93_float); // 0x1aca ObjFunc
	return 8; // 0x1acc Return
}


func_175(var_2_object, var_45_string)
{
	var_46_bool = 0; // 0xb0 PushV
	func_5645(var_46_bool); // 0xb1 Call
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
	func_5523(var_49_string); // 0xbb Call
	var_2_object = var_45_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_6650(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x19fb PushV
	var_225_string = "d6q01"; // 0x19fc MovS
	func_5558(var_224_int, var_225_string); // 0x19fd Call
	var_226_int = -1; // 0x19ff PushI
	var_227_bool = var_224_int == var_226_int; // 0x1a00 Eq
	if(var_227_bool == 0) goto Label_6660; // 0x1a01 JumpB
	var_222_bool = 1; // 0x1a02 MovB
	return 0; // 0x1a03 Return
	
Label_6660:
	var_222_bool = 0; // 0x1a04 MovB
	return 0; // 0x1a05 Return
}


func_6326(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0x18b7 PushV
	var_431_string = "KnowSgustok"; // 0x18b8 MovS
	func_5558(var_430_int, var_431_string); // 0x18b9 Call
	var_432_int = 1; // 0x18bb PushI
	var_433_bool = var_430_int == var_432_int; // 0x18bc Eq
	if(var_433_bool == 0) goto Label_6336; // 0x18bd JumpB
	var_428_bool = 1; // 0x18be MovB
	return 0; // 0x18bf Return
	
Label_6336:
	var_428_bool = 0; // 0x18c0 MovB
	return 0; // 0x18c1 Return
}


func_3768(var_0_object, var_1_object, var_2_object, var_3_object, var_463_object, var_464_object)
{
	var_0_object = var_464_object; // 0xeb9 TMov
	var_1_object = var_463_object; // 0xeba TMov
	var_3_object = 0; // 0xebb TMovB
	var_469_int = 1; // 0xebc PushI
	if(var_469_int == 0) goto Label_3830; // 0xebd JumpB
	var_470_string = ""; // 0xebe PushV
	var_470_string = "Neutral"; // 0xebf MovS
	func_3860(var_464_object, var_470_string); // 0xec0 Call
	var_475_int = 9781; // 0xec2 PushI
	SetMessage(var_475_int); // 0xec3 TObjFunc
	ClearReplies(); // 0xec5 TObjFunc
	var_476_bool = 0; // 0xec7 PushV
	var_476_bool = 0; // 0xec8 MovB
	var_477_bool = 0; var_478_object = Obj(); // 0xec9 PushV
	var_478_object = var_1_object; // 0xeca MovT
	func_6374(var_478_object); // 0xecb Call
	if(var_477_bool == 0) goto Label_3796; // 0xecd JumpB
	var_483_bool = 0; var_484_object = Obj(); // 0xece PushV
	var_484_object = var_1_object; // 0xecf MovT
	func_6386(var_484_object); // 0xed0 Call
	if(var_483_bool == 0) goto Label_3796; // 0xed2 JumpB
	var_476_bool = 1; // 0xed3 MovB
	
Label_3796:
	if(var_476_bool == 0) goto Label_3802; // 0xed4 JumpB
	var_489_int = 10216; // 0xed5 PushI
	var_490_int = 11263; // 0xed6 PushI
	var_491_int = 11262; // 0xed7 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0xed8 TObjFunc
	
Label_3802:
	var_492_bool = 0; var_493_object = Obj(); // 0xeda PushV
	var_493_object = var_1_object; // 0xedb MovT
	func_6710(var_493_object); // 0xedc Call
	if(var_492_bool == 0) goto Label_3812; // 0xede JumpB
	var_498_int = 9782; // 0xedf PushI
	var_499_int = 10764; // 0xee0 PushI
	var_500_int = 10775; // 0xee1 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0xee2 TObjFunc
	
Label_3812:
	var_501_bool = 0; var_502_object = Obj(); // 0xee4 PushV
	var_502_object = var_1_object; // 0xee5 MovT
	func_6722(var_502_object); // 0xee6 Call
	if(var_501_bool == 0) goto Label_3822; // 0xee8 JumpB
	var_507_int = 10191; // 0xee9 PushI
	var_508_int = 11238; // 0xeea PushI
	var_509_int = 11237; // 0xeeb PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0xeec TObjFunc
	
Label_3822:
	var_510_int = 15312; // 0xeee PushI
	var_511_int = -1; // 0xeef PushI
	var_512_int = 16550; // 0xef0 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0xef1 TObjFunc
	goto Label_3830; // 0xef3 Jump
	
Label_3830:
	var_513_bool = 0; // 0xef6 PushV
	func_5645(var_513_bool); // 0xef7 Call
	if(var_513_bool == 0) goto Label_3845; // 0xef9 JumpB
	
Label_3834:
	lshWaitForAnimEnd(); // 0xefa Func
	var_514_object = var_3_object; // 0xefc PushT
	if(var_514_object == 0) goto Label_3839; // 0xefd JumpB
	goto Label_3844; // 0xefe Jump
	
Label_3844:
	goto Label_3859; // 0xf04 Jump
	
Label_3859:
	return 0; // 0xf13 Return
	
Label_3839:
	var_515_string = ""; // 0xeff PushV
	var_515_string = var_2_object; // 0xf00 MovT
	func_5523(var_515_string); // 0xf01 Call
	goto Label_3834; // 0xf03 Jump
	
Label_3845:
	var_516_string = "all"; // 0xf05 PushS
	var_517_string = "idle"; // 0xf06 PushS
	PlayAnimation(var_516_string, var_517_string); // 0xf07 Func
	
Label_3849:
	WaitForAnimEnd(); // 0xf09 Func
	var_518_object = var_3_object; // 0xf0b PushT
	if(var_518_object == 0) goto Label_3854; // 0xf0c JumpB
	goto Label_3859; // 0xf0d Jump
	
Label_3854:
	var_519_string = "all"; // 0xf0e PushS
	var_520_string = "idle"; // 0xf0f PushS
	PlayAnimation(var_519_string, var_520_string); // 0xf10 Func
	goto Label_3849; // 0xf12 Jump
}


func_5816()
{
	var_43_string = "ood3Anna1"; // 0x16b9 PushS
	var_44_int = 1; // 0x16ba PushI
	SetVariable(var_43_string, var_44_int); // 0x16bb Func
	return 0; // 0x16bd Return
}


func_5822()
{
	var_51_string = "d3q02"; // 0x16bf PushS
	var_52_int = 6; // 0x16c0 PushI
	SetVariable(var_51_string, var_52_int); // 0x16c1 Func
	return 0; // 0x16c3 Return
}


func_6338(var_286_bool)
{
	var_288_int = 0; var_289_string = ""; // 0x18c3 PushV
	var_289_string = "KnowDiamAce"; // 0x18c4 MovS
	func_5558(var_288_int, var_289_string); // 0x18c5 Call
	var_290_int = 1; // 0x18c7 PushI
	var_291_bool = var_288_int == var_290_int; // 0x18c8 Eq
	if(var_291_bool == 0) goto Label_6348; // 0x18c9 JumpB
	var_286_bool = 1; // 0x18ca MovB
	return 0; // 0x18cb Return
	
Label_6348:
	var_286_bool = 0; // 0x18cc MovB
	return 0; // 0x18cd Return
}


func_5828()
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0; // 0x16c5 PushV
	var_95_object = Obj(); // 0x16c6 PushV
	func_6812(var_95_object); // 0x16c7 Call
	var_92_object = var_95_object; // 0x16c8 Mov
	var_93_string = "pt_map_kapella"; // 0x16ca MovS
	var_94_float = 2; // 0x16cb MovI
	func_6829(var_92_object, var_93_string, var_94_float); // 0x16cc Call
	var_115_object = Obj(); // 0x16ce PushV
	func_6812(var_115_object); // 0x16cf Call
	ShowMap(var_115_object); // 0x16d1 ObjFunc
	return 0; // 0x16d3 Return
}


func_4812(var_0_object, var_616_int, var_617_object)
{
	var_619_object = Obj(); var_620_bool = 0; var_621_int = 0; var_622_bool = 0; var_623_object = Obj(); var_624_bool = 0; var_625_int = 0; var_626_bool = 0; // 0x12cc PushV
	var_0_object = var_617_object; // 0x12cd TMov
	var_627_bool = 0; var_628_object = Obj(); // 0x12ce PushV
	var_628_object = var_617_object; // 0x12cf Mov
	func_5463(var_628_object); // 0x12d0 Call
	var_629_bool = var_627_bool == 0; // 0x12d2 Not
	if(var_629_bool == 0) goto Label_4822; // 0x12d3 JumpB
	var_616_int = -2; // 0x12d4 MovI
	return 8; // 0x12d5 Return
	
Label_4822:
	CreateDialog(var_623_object); // 0x12d6 Func
	var_630_int = 0; // 0x12d8 PushV
	func_5641(var_630_int); // 0x12d9 Call
	SetNPCName(var_630_int); // 0x12db ObjFunc
	var_631_string = ""; // 0x12dd PushV
	func_5643(var_631_string); // 0x12de Call
	SetPhoto(var_631_string); // 0x12e0 ObjFunc
	var_632_int = 0; // 0x12e2 PushV
	func_6862(var_632_int); // 0x12e3 Call
	SetPlayerName(var_632_int); // 0x12e5 ObjFunc
	var_625_int = -1; // 0x12e7 MovI
	IsOverrideActive(var_624_bool); // 0x12e8 Func
	var_633_bool = var_624_bool; // 0x12ea Push
	if(var_633_bool == 0) goto Label_4846; // 0x12eb JumpB
	var_616_int = -2; // 0x12ec MovI
	return 8; // 0x12ed Return
	
Label_4846:
	DoDialog(var_623_object); // 0x12ee Func
	var_634_object = Obj(); var_635_object = Obj(); // 0x12f0 PushV
	var_634_object = var_617_object; // 0x12f1 Mov
	var_635_object = var_623_object; // 0x12f2 Mov
	TaskCall(15); // 0x12f3 TaskCall
	func_4875(var_636_object, var_637_object, var_638_string, var_639_bool, var_634_object, var_635_object); // 0x12f4 Call
	TaskReturn(); // 0x12f5 TaskReturn
	IsDialogEnd(var_626_bool); // 0x12f7 ObjFunc
	
Label_4857:
	var_694_bool = var_626_bool == 0; // 0x12f9 Not
	if(var_694_bool == 0) goto Label_4864; // 0x12fa JumpB
	sync(); // 0x12fb Func
	IsDialogEnd(var_626_bool); // 0x12fd ObjFunc
	goto Label_4857; // 0x12ff Jump
	
Label_4864:
	var_695_object = Obj(); // 0x1300 PushV
	var_695_object = var_617_object; // 0x1301 Mov
	func_5519(); // 0x1302 Call
	StopDialog(var_623_object); // 0x1304 Func
	GetReturnValue(var_625_int); // 0x1306 ObjFunc
	var_616_int = var_625_int; // 0x1308 Mov
	return 8; // 0x1309 Return
}


func_6862(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x1ace PushV
	var_96_string = "player"; // 0x1acf PushS
	GetVariable(var_96_string, var_95_int); // 0x1ad0 Func
	var_97_int = 0; // 0x1ad2 PushI
	var_98_bool = var_95_int == var_97_int; // 0x1ad3 Eq
	if(var_98_bool == 0) goto Label_6872; // 0x1ad4 JumpB
	var_93_int = 200001; // 0x1ad5 MovI
	return 2; // 0x1ad6 Return
	
Label_6872:
	var_99_int = 1; // 0x1ad8 PushI
	var_100_bool = var_95_int == var_99_int; // 0x1ad9 Eq
	if(var_100_bool == 0) goto Label_6877; // 0x1ada JumpB
	var_93_int = 200002; // 0x1adb MovI
	return 2; // 0x1adc Return
	
Label_6877:
	var_93_int = 200003; // 0x1add MovI
	return 2; // 0x1ade Return
}


func_6350(var_173_bool)
{
	var_175_int = 0; var_176_string = ""; // 0x18cf PushV
	var_176_string = "d2q01"; // 0x18d0 MovS
	func_5558(var_175_int, var_176_string); // 0x18d1 Call
	var_177_int = 1; // 0x18d3 PushI
	var_178_bool = var_175_int == var_177_int; // 0x18d4 Eq
	if(var_178_bool == 0) goto Label_6360; // 0x18d5 JumpB
	var_173_bool = 1; // 0x18d6 MovB
	return 0; // 0x18d7 Return
	
Label_6360:
	var_173_bool = 0; // 0x18d8 MovB
	return 0; // 0x18d9 Return
}


func_2767(var_0_object, var_374_int, var_375_object)
{
	var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0; var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0; // 0xacf PushV
	var_0_object = var_375_object; // 0xad0 TMov
	var_385_bool = 0; var_386_object = Obj(); // 0xad1 PushV
	var_386_object = var_375_object; // 0xad2 Mov
	func_5463(var_386_object); // 0xad3 Call
	var_387_bool = var_385_bool == 0; // 0xad5 Not
	if(var_387_bool == 0) goto Label_2777; // 0xad6 JumpB
	var_374_int = -2; // 0xad7 MovI
	return 8; // 0xad8 Return
	
Label_2777:
	CreateDialog(var_381_object); // 0xad9 Func
	var_388_int = 0; // 0xadb PushV
	func_5641(var_388_int); // 0xadc Call
	SetNPCName(var_388_int); // 0xade ObjFunc
	var_389_string = ""; // 0xae0 PushV
	func_5643(var_389_string); // 0xae1 Call
	SetPhoto(var_389_string); // 0xae3 ObjFunc
	var_390_int = 0; // 0xae5 PushV
	func_6862(var_390_int); // 0xae6 Call
	SetPlayerName(var_390_int); // 0xae8 ObjFunc
	var_383_int = -1; // 0xaea MovI
	IsOverrideActive(var_382_bool); // 0xaeb Func
	var_391_bool = var_382_bool; // 0xaed Push
	if(var_391_bool == 0) goto Label_2801; // 0xaee JumpB
	var_374_int = -2; // 0xaef MovI
	return 8; // 0xaf0 Return
	
Label_2801:
	DoDialog(var_381_object); // 0xaf1 Func
	var_392_object = Obj(); var_393_object = Obj(); // 0xaf3 PushV
	var_392_object = var_375_object; // 0xaf4 Mov
	var_393_object = var_381_object; // 0xaf5 Mov
	TaskCall(9); // 0xaf6 TaskCall
	func_2830(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object); // 0xaf7 Call
	TaskReturn(); // 0xaf8 TaskReturn
	IsDialogEnd(var_384_bool); // 0xafa ObjFunc
	
Label_2812:
	var_441_bool = var_384_bool == 0; // 0xafc Not
	if(var_441_bool == 0) goto Label_2819; // 0xafd JumpB
	sync(); // 0xafe Func
	IsDialogEnd(var_384_bool); // 0xb00 ObjFunc
	goto Label_2812; // 0xb02 Jump
	
Label_2819:
	var_442_object = Obj(); // 0xb03 PushV
	var_442_object = var_375_object; // 0xb04 Mov
	func_5519(); // 0xb05 Call
	StopDialog(var_381_object); // 0xb07 Func
	GetReturnValue(var_383_int); // 0xb09 ObjFunc
	var_374_int = var_383_int; // 0xb0b Mov
	return 8; // 0xb0c Return
}


func_5844()
{
	var_43_string = "ood4Anna1"; // 0x16d5 PushS
	var_44_int = 1; // 0x16d6 PushI
	SetVariable(var_43_string, var_44_int); // 0x16d7 Func
	return 0; // 0x16d9 Return
}


func_6362(var_295_bool)
{
	var_297_int = 0; var_298_string = ""; // 0x18db PushV
	var_298_string = "d1q02"; // 0x18dc MovS
	func_5558(var_297_int, var_298_string); // 0x18dd Call
	var_299_int = 2; // 0x18df PushI
	var_300_bool = var_297_int == var_299_int; // 0x18e0 Eq
	if(var_300_bool == 0) goto Label_6372; // 0x18e1 JumpB
	var_295_bool = 1; // 0x18e2 MovB
	return 0; // 0x18e3 Return
	
Label_6372:
	var_295_bool = 0; // 0x18e4 MovB
	return 0; // 0x18e5 Return
}


func_5850()
{
	var_47_string = "d4q02AnnaGivesMedcine"; // 0x16db PushS
	var_48_int = 1; // 0x16dc PushI
	SetVariable(var_47_string, var_48_int); // 0x16dd Func
	return 0; // 0x16df Return
}


func_6879()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x1adf PushV
	var_95_string = "Adding diary entry"; // 0x1ae0 PushS
	Trace(var_95_string); // 0x1ae1 Func
	var_96_int = 35; // 0x1ae3 PushI
	var_97_int = 2; // 0x1ae4 PushI
	var_98_int = 12117; // 0x1ae5 PushI
	CreateDiaryEntry(var_94_object, var_96_int, var_97_int, var_98_int); // 0x1ae6 Func
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0; // 0x1ae8 PushV
	var_100_object = var_94_object; // 0x1ae9 Mov
	var_101_int = 7; // 0x1aea MovI
	func_6783(var_99_bool, var_100_object, var_101_int); // 0x1aeb Call
	return 2; // 0x1aed Return
}


func_5856()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x16e0 PushV
	var_53_bool = 0; // 0x16e1 PushV
	var_53_bool = 0; // 0x16e2 MovB
	var_54_bool = 0; // 0x16e3 PushV
	var_54_bool = 0; // 0x16e4 MovB
	var_55_int = 0; var_56_string = ""; // 0x16e5 PushV
	var_56_string = "d4q02AnnaGivesMedcine"; // 0x16e6 MovS
	func_5558(var_55_int, var_56_string); // 0x16e7 Call
	var_59_int = 1; // 0x16e9 PushI
	var_60_bool = var_55_int == var_59_int; // 0x16ea Eq
	if(var_60_bool == 0) goto Label_5876; // 0x16eb JumpB
	var_61_int = 0; var_62_string = ""; // 0x16ec PushV
	var_62_string = "d4q02JuliaGivesMedcine"; // 0x16ed MovS
	func_5558(var_61_int, var_62_string); // 0x16ee Call
	var_63_int = 1; // 0x16f0 PushI
	var_64_bool = var_61_int == var_63_int; // 0x16f1 Eq
	if(var_64_bool == 0) goto Label_5876; // 0x16f2 JumpB
	var_54_bool = 1; // 0x16f3 MovB
	
Label_5876:
	if(var_54_bool == 0) goto Label_5885; // 0x16f4 JumpB
	var_65_int = 0; var_66_string = ""; // 0x16f5 PushV
	var_66_string = "d4q02LaraGivesMedcine"; // 0x16f6 MovS
	func_5558(var_65_int, var_66_string); // 0x16f7 Call
	var_67_int = 1; // 0x16f9 PushI
	var_68_bool = var_65_int == var_67_int; // 0x16fa Eq
	if(var_68_bool == 0) goto Label_5885; // 0x16fb JumpB
	var_53_bool = 1; // 0x16fc MovB
	
Label_5885:
	if(var_53_bool == 0) goto Label_5923; // 0x16fd JumpB
	var_69_string = "d4q02"; // 0x16fe PushS
	var_70_int = 2; // 0x16ff PushI
	SetVariable(var_69_string, var_70_int); // 0x1700 Func
	var_71_object = Obj(); // 0x1702 PushV
	func_6812(var_71_object); // 0x1703 Call
	var_52_object = var_71_object; // 0x1704 Mov
	var_78_string = "d4q02BirdmaskNearHome"; // 0x1706 PushS
	var_79_string = "pt_d4q02_birdmask"; // 0x1707 PushS
	var_80_int = 0; // 0x1708 PushI
	var_81_int = 11842; // 0x1709 PushI
	var_82_float = 0; // 0x170a PushV
	func_5612(var_82_float); // 0x170b Call
	AddMark(var_78_string, var_79_string, var_80_int, var_81_int, var_82_float); // 0x170d ObjFunc
	var_85_bool = 0; var_86_string = ""; var_87_string = ""; // 0x170f PushV
	var_86_string = "quest_d4_02"; // 0x1710 MovS
	var_87_string = "birdmask"; // 0x1711 MovS
	func_5600(var_85_bool, var_86_string, var_87_string); // 0x1712 Call
	var_91_object = Obj(); var_92_string = ""; var_93_float = 0; // 0x1714 PushV
	var_94_object = Obj(); // 0x1715 PushV
	func_6812(var_94_object); // 0x1716 Call
	var_91_object = var_94_object; // 0x1717 Mov
	var_92_string = "pt_d4q02_birdmask"; // 0x1719 MovS
	var_93_float = 2; // 0x171a MovI
	func_6829(var_91_object, var_92_string, var_93_float); // 0x171b Call
	var_114_object = Obj(); // 0x171d PushV
	func_6812(var_114_object); // 0x171e Call
	ShowMap(var_114_object); // 0x1720 ObjFunc
	var_52_object = 0; // 0x1722 SetNull
	
Label_5923:
	return 2; // 0x1723 Return
}


func_6374(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0x18e7 PushV
	var_123_string = "ood3Anna1"; // 0x18e8 MovS
	func_5558(var_122_int, var_123_string); // 0x18e9 Call
	var_126_int = 0; // 0x18eb PushI
	var_127_bool = var_122_int == var_126_int; // 0x18ec Eq
	if(var_127_bool == 0) goto Label_6384; // 0x18ed JumpB
	var_120_bool = 1; // 0x18ee MovB
	return 0; // 0x18ef Return
	
Label_6384:
	var_120_bool = 0; // 0x18f0 MovB
	return 0; // 0x18f1 Return
}


func_6895()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1aef PushV
	var_67_string = "Adding diary entry"; // 0x1af0 PushS
	Trace(var_67_string); // 0x1af1 Func
	var_68_int = 51; // 0x1af3 PushI
	var_69_int = 1; // 0x1af4 PushI
	var_70_int = 12133; // 0x1af5 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x1af6 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1af8 PushV
	var_72_object = var_66_object; // 0x1af9 Mov
	var_73_int = 10; // 0x1afa MovI
	func_6783(var_71_bool, var_72_object, var_73_int); // 0x1afb Call
	return 2; // 0x1afd Return
}


func_6386(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x18f3 PushV
	var_131_string = "d3q02"; // 0x18f4 MovS
	func_5558(var_130_int, var_131_string); // 0x18f5 Call
	var_132_int = 5; // 0x18f7 PushI
	var_133_bool = var_130_int == var_132_int; // 0x18f8 Eq
	if(var_133_bool == 0) goto Label_6396; // 0x18f9 JumpB
	var_128_bool = 1; // 0x18fa MovB
	return 0; // 0x18fb Return
	
Label_6396:
	var_128_bool = 0; // 0x18fc MovB
	return 0; // 0x18fd Return
}


func_6398(var_193_bool)
{
	var_195_int = 0; var_196_string = ""; // 0x18ff PushV
	var_196_string = "ood4Anna1"; // 0x1900 MovS
	func_5558(var_195_int, var_196_string); // 0x1901 Call
	var_197_int = 0; // 0x1903 PushI
	var_198_bool = var_195_int == var_197_int; // 0x1904 Eq
	if(var_198_bool == 0) goto Label_6408; // 0x1905 JumpB
	var_193_bool = 1; // 0x1906 MovB
	return 0; // 0x1907 Return
	
Label_6408:
	var_193_bool = 0; // 0x1908 MovB
	return 0; // 0x1909 Return
}


func_6911()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1aff PushV
	var_68_string = "Adding diary entry"; // 0x1b00 PushS
	Trace(var_68_string); // 0x1b01 Func
	var_69_int = 148; // 0x1b03 PushI
	var_70_int = 2; // 0x1b04 PushI
	var_71_int = 15354; // 0x1b05 PushI
	CreateDiaryEntry(var_67_object, var_69_int, var_70_int, var_71_int); // 0x1b06 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x1b08 PushV
	var_73_object = var_67_object; // 0x1b09 Mov
	var_74_int = -1; // 0x1b0a MovI
	func_6783(var_72_bool, var_73_object, var_74_int); // 0x1b0b Call
	return 2; // 0x1b0d Return
}


func_1282(var_2_object, var_270_string)
{
	var_271_bool = 0; // 0x503 PushV
	func_5645(var_271_bool); // 0x504 Call
	var_272_bool = var_271_bool == 0; // 0x506 Not
	if(var_272_bool == 0) goto Label_1289; // 0x507 JumpB
	return 0; // 0x508 Return
	
Label_1289:
	var_273_bool = var_270_string == var_2_object; // 0x509 Eq
	if(var_273_bool == 0) goto Label_1292; // 0x50a JumpB
	return 0; // 0x50b Return
	
Label_1292:
	var_274_string = ""; // 0x50c PushV
	var_274_string = var_270_string; // 0x50d Mov
	func_5523(var_274_string); // 0x50e Call
	var_2_object = var_270_string; // 0x510 TMov
	return 0; // 0x511 Return
}


func_6410(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x190b PushV
	var_202_string = "d4q02"; // 0x190c MovS
	func_5558(var_201_int, var_202_string); // 0x190d Call
	var_203_int = 1; // 0x190f PushI
	var_204_bool = var_201_int == var_203_int; // 0x1910 Eq
	if(var_204_bool == 0) goto Label_6420; // 0x1911 JumpB
	var_199_bool = 1; // 0x1912 MovB
	return 0; // 0x1913 Return
	
Label_6420:
	var_199_bool = 0; // 0x1914 MovB
	return 0; // 0x1915 Return
}


func_4875(var_0_object, var_1_object, var_2_object, var_3_object, var_634_object, var_635_object)
{
	var_0_object = var_635_object; // 0x130c TMov
	var_1_object = var_634_object; // 0x130d TMov
	var_3_object = 0; // 0x130e TMovB
	var_640_int = 1; // 0x130f PushI
	if(var_640_int == 0) goto Label_4947; // 0x1310 JumpB
	var_641_bool = 0; var_642_object = Obj(); // 0x1311 PushV
	var_642_object = var_1_object; // 0x1312 MovT
	func_6458(var_642_object); // 0x1313 Call
	if(var_641_bool == 0) goto Label_4901; // 0x1315 JumpB
	var_647_string = ""; // 0x1316 PushV
	var_647_string = "Neutral"; // 0x1317 MovS
	func_4977(var_635_object, var_647_string); // 0x1318 Call
	var_652_int = 11872; // 0x131a PushI
	SetMessage(var_652_int); // 0x131b TObjFunc
	ClearReplies(); // 0x131d TObjFunc
	var_653_int = 11873; // 0x131f PushI
	var_654_int = 13087; // 0x1320 PushI
	var_655_int = 13086; // 0x1321 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x1322 TObjFunc
	goto Label_4947; // 0x1324 Jump
	
Label_4947:
	var_656_bool = 0; // 0x1353 PushV
	func_5645(var_656_bool); // 0x1354 Call
	if(var_656_bool == 0) goto Label_4962; // 0x1356 JumpB
	
Label_4951:
	lshWaitForAnimEnd(); // 0x1357 Func
	var_657_object = var_3_object; // 0x1359 PushT
	if(var_657_object == 0) goto Label_4956; // 0x135a JumpB
	goto Label_4961; // 0x135b Jump
	
Label_4961:
	goto Label_4976; // 0x1361 Jump
	
Label_4976:
	return 0; // 0x1370 Return
	
Label_4956:
	var_658_string = ""; // 0x135c PushV
	var_658_string = var_2_object; // 0x135d MovT
	func_5523(var_658_string); // 0x135e Call
	goto Label_4951; // 0x1360 Jump
	
Label_4962:
	var_659_string = "all"; // 0x1362 PushS
	var_660_string = "idle"; // 0x1363 PushS
	PlayAnimation(var_659_string, var_660_string); // 0x1364 Func
	
Label_4966:
	WaitForAnimEnd(); // 0x1366 Func
	var_661_object = var_3_object; // 0x1368 PushT
	if(var_661_object == 0) goto Label_4971; // 0x1369 JumpB
	goto Label_4976; // 0x136a Jump
	
Label_4971:
	var_662_string = "all"; // 0x136b PushS
	var_663_string = "idle"; // 0x136c PushS
	PlayAnimation(var_662_string, var_663_string); // 0x136d Func
	goto Label_4966; // 0x136f Jump
	
Label_4901:
	var_664_string = ""; // 0x1325 PushV
	var_664_string = "Neutral"; // 0x1326 MovS
	func_4977(var_635_object, var_664_string); // 0x1327 Call
	var_665_int = 11897; // 0x1329 PushI
	SetMessage(var_665_int); // 0x132a TObjFunc
	ClearReplies(); // 0x132c TObjFunc
	var_666_bool = 0; var_667_object = Obj(); // 0x132e PushV
	var_667_object = var_1_object; // 0x132f MovT
	func_6470(var_667_object); // 0x1330 Call
	if(var_666_bool == 0) goto Label_4920; // 0x1332 JumpB
	var_672_int = 11898; // 0x1333 PushI
	var_673_int = 13115; // 0x1334 PushI
	var_674_int = 13114; // 0x1335 PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0x1336 TObjFunc
	
Label_4920:
	var_675_bool = 0; // 0x1338 PushV
	var_675_bool = 0; // 0x1339 MovB
	var_676_bool = 0; var_677_object = Obj(); // 0x133a PushV
	var_677_object = var_1_object; // 0x133b MovT
	func_6494(var_677_object); // 0x133c Call
	if(var_676_bool == 0) goto Label_4933; // 0x133e JumpB
	var_682_bool = 0; var_683_object = Obj(); // 0x133f PushV
	var_683_object = var_1_object; // 0x1340 MovT
	func_6734(var_683_object); // 0x1341 Call
	if(var_682_bool == 0) goto Label_4933; // 0x1343 JumpB
	var_675_bool = 1; // 0x1344 MovB
	
Label_4933:
	if(var_675_bool == 0) goto Label_4939; // 0x1345 JumpB
	var_688_int = 11907; // 0x1346 PushI
	var_689_int = 13124; // 0x1347 PushI
	var_690_int = 13123; // 0x1348 PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x1349 TObjFunc
	
Label_4939:
	var_691_int = 11915; // 0x134b PushI
	var_692_int = -1; // 0x134c PushI
	var_693_int = 13131; // 0x134d PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0x134e TObjFunc
	goto Label_4947; // 0x1350 Jump
}


func_2830(var_0_object, var_1_object, var_2_object, var_3_object, var_392_object, var_393_object)
{
	var_0_object = var_393_object; // 0xb0f TMov
	var_1_object = var_392_object; // 0xb10 TMov
	var_3_object = 0; // 0xb11 TMovB
	var_398_int = 1; // 0xb12 PushI
	if(var_398_int == 0) goto Label_2927; // 0xb13 JumpB
	var_399_string = ""; // 0xb14 PushV
	var_399_string = "Neutral"; // 0xb15 MovS
	func_2957(var_393_object, var_399_string); // 0xb16 Call
	var_404_int = 6624; // 0xb18 PushI
	SetMessage(var_404_int); // 0xb19 TObjFunc
	ClearReplies(); // 0xb1b TObjFunc
	var_405_bool = 0; // 0xb1d PushV
	var_405_bool = 0; // 0xb1e MovB
	var_406_bool = 0; var_407_object = Obj(); // 0xb1f PushV
	var_407_object = var_1_object; // 0xb20 MovT
	func_6302(var_407_object); // 0xb21 Call
	if(var_406_bool == 0) goto Label_2858; // 0xb23 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0xb24 PushV
	var_413_object = var_1_object; // 0xb25 MovT
	func_6350(var_413_object); // 0xb26 Call
	if(var_412_bool == 0) goto Label_2858; // 0xb28 JumpB
	var_405_bool = 1; // 0xb29 MovB
	
Label_2858:
	if(var_405_bool == 0) goto Label_2864; // 0xb2a JumpB
	var_418_int = 7217; // 0xb2b PushI
	var_419_int = 7952; // 0xb2c PushI
	var_420_int = 7953; // 0xb2d PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xb2e TObjFunc
	
Label_2864:
	var_421_bool = 0; var_422_object = Obj(); // 0xb30 PushV
	var_422_object = var_1_object; // 0xb31 MovT
	func_6314(var_422_object); // 0xb32 Call
	if(var_421_bool == 0) goto Label_2874; // 0xb34 JumpB
	var_427_int = 6949; // 0xb35 PushI
	var_428_int = 7656; // 0xb36 PushI
	var_429_int = 7655; // 0xb37 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0xb38 TObjFunc
	
Label_2874:
	var_430_int = 6626; // 0xb3a PushI
	var_431_int = -1; // 0xb3b PushI
	var_432_int = 7295; // 0xb3c PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0xb3d TObjFunc
	goto Label_2927; // 0xb3f Jump
	
Label_2927:
	var_433_bool = 0; // 0xb6f PushV
	func_5645(var_433_bool); // 0xb70 Call
	if(var_433_bool == 0) goto Label_2942; // 0xb72 JumpB
	
Label_2931:
	lshWaitForAnimEnd(); // 0xb73 Func
	var_434_object = var_3_object; // 0xb75 PushT
	if(var_434_object == 0) goto Label_2936; // 0xb76 JumpB
	goto Label_2941; // 0xb77 Jump
	
Label_2941:
	goto Label_2956; // 0xb7d Jump
	
Label_2956:
	return 0; // 0xb8c Return
	
Label_2936:
	var_435_string = ""; // 0xb78 PushV
	var_435_string = var_2_object; // 0xb79 MovT
	func_5523(var_435_string); // 0xb7a Call
	goto Label_2931; // 0xb7c Jump
	
Label_2942:
	var_436_string = "all"; // 0xb7e PushS
	var_437_string = "idle"; // 0xb7f PushS
	PlayAnimation(var_436_string, var_437_string); // 0xb80 Func
	
Label_2946:
	WaitForAnimEnd(); // 0xb82 Func
	var_438_object = var_3_object; // 0xb84 PushT
	if(var_438_object == 0) goto Label_2951; // 0xb85 JumpB
	goto Label_2956; // 0xb86 Jump
	
Label_2951:
	var_439_string = "all"; // 0xb87 PushS
	var_440_string = "idle"; // 0xb88 PushS
	PlayAnimation(var_439_string, var_440_string); // 0xb89 Func
	goto Label_2946; // 0xb8b Jump
}


func_6927()
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x1b0f PushV
	var_93_string = "Adding diary entry"; // 0x1b10 PushS
	Trace(var_93_string); // 0x1b11 Func
	var_94_int = 149; // 0x1b13 PushI
	var_95_int = 2; // 0x1b14 PushI
	var_96_int = 15355; // 0x1b15 PushI
	CreateDiaryEntry(var_92_object, var_94_int, var_95_int, var_96_int); // 0x1b16 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0x1b18 PushV
	var_98_object = var_92_object; // 0x1b19 Mov
	var_99_int = 148; // 0x1b1a MovI
	func_6783(var_97_bool, var_98_object, var_99_int); // 0x1b1b Call
	return 2; // 0x1b1d Return
}


func_3860(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0xf15 PushV
	func_5645(var_104_bool); // 0xf16 Call
	var_105_bool = var_104_bool == 0; // 0xf18 Not
	if(var_105_bool == 0) goto Label_3867; // 0xf19 JumpB
	return 0; // 0xf1a Return
	
Label_3867:
	var_106_bool = var_103_string == var_2_object; // 0xf1b Eq
	if(var_106_bool == 0) goto Label_3870; // 0xf1c JumpB
	return 0; // 0xf1d Return
	
Label_3870:
	var_107_string = ""; // 0xf1e PushV
	var_107_string = var_103_string; // 0xf1f Mov
	func_5523(var_107_string); // 0xf20 Call
	var_2_object = var_103_string; // 0xf22 TMov
	return 0; // 0xf23 Return
}


func_4373(var_2_object, var_176_string)
{
	var_177_bool = 0; // 0x1116 PushV
	func_5645(var_177_bool); // 0x1117 Call
	var_178_bool = var_177_bool == 0; // 0x1119 Not
	if(var_178_bool == 0) goto Label_4380; // 0x111a JumpB
	return 0; // 0x111b Return
	
Label_4380:
	var_179_bool = var_176_string == var_2_object; // 0x111c Eq
	if(var_179_bool == 0) goto Label_4383; // 0x111d JumpB
	return 0; // 0x111e Return
	
Label_4383:
	var_180_string = ""; // 0x111f PushV
	var_180_string = var_176_string; // 0x1120 Mov
	func_5523(var_180_string); // 0x1121 Call
	var_2_object = var_176_string; // 0x1123 TMov
	return 0; // 0x1124 Return
}


func_6422(var_211_bool)
{
	var_213_int = 0; var_214_string = ""; // 0x1917 PushV
	var_214_string = "d4q02AnnaGivesMedcine"; // 0x1918 MovS
	func_5558(var_213_int, var_214_string); // 0x1919 Call
	var_215_int = 1; // 0x191b PushI
	var_216_bool = var_213_int == var_215_int; // 0x191c Eq
	if(var_216_bool == 0) goto Label_6432; // 0x191d JumpB
	var_211_bool = 1; // 0x191e MovB
	return 0; // 0x191f Return
	
Label_6432:
	var_211_bool = 0; // 0x1920 MovB
	return 0; // 0x1921 Return
}


func_6943()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x1b1f PushV
	var_130_string = "Adding diary entry"; // 0x1b20 PushS
	Trace(var_130_string); // 0x1b21 Func
	var_131_int = 151; // 0x1b23 PushI
	var_132_int = 2; // 0x1b24 PushI
	var_133_int = 15357; // 0x1b25 PushI
	CreateDiaryEntry(var_129_object, var_131_int, var_132_int, var_133_int); // 0x1b26 Func
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0; // 0x1b28 PushV
	var_135_object = var_129_object; // 0x1b29 Mov
	var_136_int = 148; // 0x1b2a MovI
	func_6783(var_134_bool, var_135_object, var_136_int); // 0x1b2b Call
	return 2; // 0x1b2d Return
}


func_6434(var_228_bool)
{
	var_230_int = 0; var_231_string = ""; // 0x1923 PushV
	var_231_string = "d4q02"; // 0x1924 MovS
	func_5558(var_230_int, var_231_string); // 0x1925 Call
	var_232_int = 1000; // 0x1927 PushI
	var_233_bool = var_230_int == var_232_int; // 0x1928 Eq
	if(var_233_bool == 0) goto Label_6444; // 0x1929 JumpB
	var_228_bool = 1; // 0x192a MovB
	return 0; // 0x192b Return
	
Label_6444:
	var_228_bool = 0; // 0x192c MovB
	return 0; // 0x192d Return
}


func_5924()
{
	var_172_string = "ood4Anna2"; // 0x1725 PushS
	var_173_int = 1; // 0x1726 PushI
	SetVariable(var_172_string, var_173_int); // 0x1727 Func
	return 0; // 0x1729 Return
}


func_5930()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x172a PushV
	var_45_string = "d5q02"; // 0x172b PushS
	var_46_int = 1; // 0x172c PushI
	SetVariable(var_45_string, var_46_int); // 0x172d Func
	var_47_object = Obj(); // 0x172f PushV
	func_6812(var_47_object); // 0x1730 Call
	var_44_object = var_47_object; // 0x1731 Mov
	var_54_string = "d5q02AnnaGotoGorbun"; // 0x1733 PushS
	var_55_string = "pt_map_gorbun"; // 0x1734 PushS
	var_56_int = 0; // 0x1735 PushI
	var_57_int = 15360; // 0x1736 PushI
	var_58_float = 0; // 0x1737 PushV
	func_5612(var_58_float); // 0x1738 Call
	AddMark(var_54_string, var_55_string, var_56_int, var_57_int, var_58_float); // 0x173a ObjFunc
	var_61_string = "d5q02AnnaGotoGorbunSelf"; // 0x173c PushS
	var_62_string = "pt_map_anna"; // 0x173d PushS
	var_63_int = 0; // 0x173e PushI
	var_64_int = 15361; // 0x173f PushI
	var_65_float = 0; // 0x1740 PushV
	func_5612(var_65_float); // 0x1741 Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1743 ObjFunc
	func_6911(); // 0x1746 Call
	func_6927(); // 0x1749 Call
	var_100_object = Obj(); var_101_string = ""; // 0x174b PushV
	var_101_string = "quest_d5_02"; // 0x174c MovS
	func_5563(var_100_object, var_101_string); // 0x174d Call
	var_108_bool = 0; var_109_string = ""; var_110_string = ""; // 0x174f PushV
	var_109_string = "quest_d5_02"; // 0x1750 MovS
	var_110_string = "place_gorbun"; // 0x1751 MovS
	func_5600(var_108_bool, var_109_string, var_110_string); // 0x1752 Call
	return 2; // 0x1754 Return
}


func_6446(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x192f PushV
	var_225_string = "ood4Anna2"; // 0x1930 MovS
	func_5558(var_224_int, var_225_string); // 0x1931 Call
	var_226_int = 0; // 0x1933 PushI
	var_227_bool = var_224_int == var_226_int; // 0x1934 Eq
	if(var_227_bool == 0) goto Label_6456; // 0x1935 JumpB
	var_222_bool = 1; // 0x1936 MovB
	return 0; // 0x1937 Return
	
Label_6456:
	var_222_bool = 0; // 0x1938 MovB
	return 0; // 0x1939 Return
}


func_6959()
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x1b2f PushV
	var_122_string = "Adding diary entry"; // 0x1b30 PushS
	Trace(var_122_string); // 0x1b31 Func
	var_123_int = 159; // 0x1b33 PushI
	var_124_int = 1; // 0x1b34 PushI
	var_125_int = 15392; // 0x1b35 PushI
	CreateDiaryEntry(var_121_object, var_123_int, var_124_int, var_125_int); // 0x1b36 Func
	var_126_bool = 0; var_127_object = Obj(); var_128_int = 0; // 0x1b38 PushV
	var_127_object = var_121_object; // 0x1b39 Mov
	var_128_int = 111; // 0x1b3a MovI
	func_6783(var_126_bool, var_127_object, var_128_int); // 0x1b3b Call
	return 2; // 0x1b3d Return
}


func_6458(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0x193b PushV
	var_164_string = "d5q02"; // 0x193c MovS
	func_5558(var_163_int, var_164_string); // 0x193d Call
	var_165_int = 0; // 0x193f PushI
	var_166_bool = var_163_int == var_165_int; // 0x1940 Eq
	if(var_166_bool == 0) goto Label_6468; // 0x1941 JumpB
	var_161_bool = 1; // 0x1942 MovB
	return 0; // 0x1943 Return
	
Label_6468:
	var_161_bool = 0; // 0x1944 MovB
	return 0; // 0x1945 Return
}


func_5439(var_150_string, var_151_int)
{
	var_152_int = 0; var_153_int = 0; // 0x153f PushV
	GetProperty(var_150_string, var_153_int); // 0x1540 ObjFunc
	var_154_int = var_153_int + var_151_int; // 0x1542 Add
	SetProperty(var_150_string, var_154_int); // 0x1543 ObjFunc
	return 2; // 0x1545 Return
}


func_6975()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1b3f PushV
	var_89_string = "Adding diary entry"; // 0x1b40 PushS
	Trace(var_89_string); // 0x1b41 Func
	var_90_int = 116; // 0x1b43 PushI
	var_91_int = 1; // 0x1b44 PushI
	var_92_int = 13739; // 0x1b45 PushI
	CreateDiaryEntry(var_88_object, var_90_int, var_91_int, var_92_int); // 0x1b46 Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x1b48 PushV
	var_94_object = var_88_object; // 0x1b49 Mov
	var_95_int = 111; // 0x1b4a MovI
	func_6783(var_93_bool, var_94_object, var_95_int); // 0x1b4b Call
	return 2; // 0x1b4d Return
}


func_5446(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x1546 PushV
	GetPosition(var_42_cvector); // 0x1547 ObjFunc
	GetPosition(var_43_cvector); // 0x1549 Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x154b Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0x154c PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0x154d PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0x154e Func
	var_36_bool = var_45_bool; // 0x1550 Mov
	return 8; // 0x1551 Return
}


func_6470(var_188_bool)
{
	var_190_int = 0; var_191_string = ""; // 0x1947 PushV
	var_191_string = "d5q02"; // 0x1948 MovS
	func_5558(var_190_int, var_191_string); // 0x1949 Call
	var_192_int = 2; // 0x194b PushI
	var_193_bool = var_190_int == var_192_int; // 0x194c Eq
	if(var_193_bool == 0) goto Label_6480; // 0x194d JumpB
	var_188_bool = 1; // 0x194e MovB
	return 0; // 0x194f Return
	
Label_6480:
	var_188_bool = 0; // 0x1950 MovB
	return 0; // 0x1951 Return
}


func_6991()
{
	var_35_bool = GlobalVars[1]; // 0x1b4f PushGE
	var_35_bool = 0; // 0x1b50 MovB
	GlobalVars[1] = var_35_bool; // 0x1b51 PopGE
	return 0; // 0x1b52 Return
}


func_5458(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x1552 PushV
	IsLoaded(var_38_bool); // 0x1553 Func
	var_36_bool = var_38_bool; // 0x1555 Mov
	return 2; // 0x1556 Return
}


func_6995(var_36_object)
{
	var_37_bool = GlobalVars[1]; // 0x1b54 PushGE
	var_38_bool = var_37_bool == 0; // 0x1b55 Not
	if(var_38_bool == 0) goto Label_7008; // 0x1b56 JumpB
	var_39_int = 0; var_40_object = Obj(); // 0x1b57 PushV
	var_40_object = var_36_object; // 0x1b58 Mov
	TaskCall(2); // 0x1b59 TaskCall
	func_49(var_41_object, var_39_int, var_40_object); // 0x1b5a Call
	TaskReturn(); // 0x1b5b TaskReturn
	var_145_bool = GlobalVars[1]; // 0x1b5d PushGE
	var_145_bool = 1; // 0x1b5e MovB
	GlobalVars[1] = var_145_bool; // 0x1b5f PopGE
	
Label_7008:
	var_146_bool = 0; var_147_int = 0; // 0x1b60 PushV
	var_147_int = 1; // 0x1b61 MovI
	func_5626(var_146_bool, var_147_int); // 0x1b62 Call
	if(var_146_bool == 0) goto Label_7020; // 0x1b64 JumpB
	var_154_int = 0; var_155_object = Obj(); // 0x1b65 PushV
	var_155_object = var_36_object; // 0x1b66 Mov
	TaskCall(6); // 0x1b67 TaskCall
	func_929(var_156_object, var_154_int, var_155_object); // 0x1b68 Call
	TaskReturn(); // 0x1b69 TaskReturn
	return 0; // 0x1b6b Return
	
Label_7020:
	var_372_bool = 0; var_373_int = 0; // 0x1b6c PushV
	var_373_int = 2; // 0x1b6d MovI
	func_5626(var_372_bool, var_373_int); // 0x1b6e Call
	if(var_372_bool == 0) goto Label_7032; // 0x1b70 JumpB
	var_374_int = 0; var_375_object = Obj(); // 0x1b71 PushV
	var_375_object = var_36_object; // 0x1b72 Mov
	TaskCall(8); // 0x1b73 TaskCall
	func_2767(var_376_object, var_374_int, var_375_object); // 0x1b74 Call
	TaskReturn(); // 0x1b75 TaskReturn
	return 0; // 0x1b77 Return
	
Label_7032:
	var_443_bool = 0; var_444_int = 0; // 0x1b78 PushV
	var_444_int = 3; // 0x1b79 MovI
	func_5626(var_443_bool, var_444_int); // 0x1b7a Call
	if(var_443_bool == 0) goto Label_7044; // 0x1b7c JumpB
	var_445_int = 0; var_446_object = Obj(); // 0x1b7d PushV
	var_446_object = var_36_object; // 0x1b7e Mov
	TaskCall(10); // 0x1b7f TaskCall
	func_3705(var_447_object, var_445_int, var_446_object); // 0x1b80 Call
	TaskReturn(); // 0x1b81 TaskReturn
	return 0; // 0x1b83 Return
	
Label_7044:
	var_523_bool = 0; var_524_int = 0; // 0x1b84 PushV
	var_524_int = 4; // 0x1b85 MovI
	func_5626(var_523_bool, var_524_int); // 0x1b86 Call
	if(var_523_bool == 0) goto Label_7056; // 0x1b88 JumpB
	var_525_int = 0; var_526_object = Obj(); // 0x1b89 PushV
	var_526_object = var_36_object; // 0x1b8a Mov
	TaskCall(12); // 0x1b8b TaskCall
	func_4199(var_527_object, var_525_int, var_526_object); // 0x1b8c Call
	TaskReturn(); // 0x1b8d TaskReturn
	return 0; // 0x1b8f Return
	
Label_7056:
	var_614_bool = 0; var_615_int = 0; // 0x1b90 PushV
	var_615_int = 5; // 0x1b91 MovI
	func_5626(var_614_bool, var_615_int); // 0x1b92 Call
	if(var_614_bool == 0) goto Label_7068; // 0x1b94 JumpB
	var_616_int = 0; var_617_object = Obj(); // 0x1b95 PushV
	var_617_object = var_36_object; // 0x1b96 Mov
	TaskCall(14); // 0x1b97 TaskCall
	func_4812(var_618_object, var_616_int, var_617_object); // 0x1b98 Call
	TaskReturn(); // 0x1b99 TaskReturn
	return 0; // 0x1b9b Return
	
Label_7068:
	var_696_bool = 0; var_697_int = 0; // 0x1b9c PushV
	var_697_int = 6; // 0x1b9d MovI
	func_5626(var_696_bool, var_697_int); // 0x1b9e Call
	if(var_696_bool == 0) goto Label_7080; // 0x1ba0 JumpB
	var_698_int = 0; var_699_object = Obj(); // 0x1ba1 PushV
	var_699_object = var_36_object; // 0x1ba2 Mov
	TaskCall(4); // 0x1ba3 TaskCall
	func_407(var_700_object, var_698_int, var_699_object); // 0x1ba4 Call
	TaskReturn(); // 0x1ba5 TaskReturn
	return 0; // 0x1ba7 Return
	
Label_7080:
	var_806_bool = 0; // 0x1ba8 PushV
	func_5632(var_806_bool); // 0x1ba9 Call
	return 0; // 0x1bab Return
}


func_6482(var_584_bool)
{
	var_586_int = 0; var_587_string = ""; // 0x1953 PushV
	var_587_string = "KnowMistresses"; // 0x1954 MovS
	func_5558(var_586_int, var_587_string); // 0x1955 Call
	var_588_int = 1; // 0x1957 PushI
	var_589_bool = var_586_int == var_588_int; // 0x1958 Eq
	if(var_589_bool == 0) goto Label_6492; // 0x1959 JumpB
	var_584_bool = 1; // 0x195a MovB
	return 0; // 0x195b Return
	
Label_6492:
	var_584_bool = 0; // 0x195c MovB
	return 0; // 0x195d Return
}


func_5974()
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x1756 PushV
	var_120_string = "d5q02"; // 0x1757 PushS
	var_121_int = 3; // 0x1758 PushI
	SetVariable(var_120_string, var_121_int); // 0x1759 Func
	var_122_object = Obj(); // 0x175b PushV
	func_6812(var_122_object); // 0x175c Call
	var_119_object = var_122_object; // 0x175d Mov
	var_123_string = "d5q02AnnaGotoKabak"; // 0x175f PushS
	var_124_string = "pt_map_andrei"; // 0x1760 PushS
	var_125_int = 0; // 0x1761 PushI
	var_126_int = 15363; // 0x1762 PushI
	var_127_float = 0; // 0x1763 PushV
	func_5612(var_127_float); // 0x1764 Call
	AddMark(var_123_string, var_124_string, var_125_int, var_126_int, var_127_float); // 0x1766 ObjFunc
	func_6943(); // 0x1769 Call
	return 2; // 0x176b Return
}


func_5463(var_50_bool)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x1557 PushV
	GetPosition(var_61_cvector); // 0x1558 ObjFunc
	GetEyesHeight(var_60_float); // 0x155a ObjFunc
	var_68_float = GetByIndex(var_61_cvector, 1); // 0x155c PushE
	var_68_float = var_68_float + var_60_float; // 0x155d Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0x155e PopE
	GetPosition(var_62_cvector); // 0x155f Func
	GetEyesHeight(var_60_float); // 0x1561 Func
	var_69_float = GetByIndex(var_62_cvector, 1); // 0x1563 PushE
	var_69_float = var_69_float + var_60_float; // 0x1564 Add2
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0x1565 PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0x1566 Sub2
	var_70_float = GetByIndex(var_63_cvector, 1); // 0x1567 PushE
	var_70_float = 0; // 0x1568 MovI
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0x1569 PopE
	var_71_int = var_63_cvector | var_63_cvector; // 0x156a Or
	var_72_float = sqrt(var_71_int); // 0x156b Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0x156c Div2
	var_64_cvector = -var_63_cvector; // 0x156d Neg2
	var_73_int = 70; // 0x156e PushI
	var_74_float = var_63_cvector * var_73_int; // 0x156f Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x1570 PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0x1571 PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0x1572 Xor2
	func_5548(var_75_cvector, var_76_cvector); // 0x1573 Call
	var_83_int = 25; // 0x1575 PushI
	var_84_float = var_75_cvector * var_83_int; // 0x1576 Mult
	var_85_int = var_74_float + var_84_float; // 0x1577 Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0x1578 PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0x1579 Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0x157a Add2
	IsOverrideActive(var_67_bool); // 0x157b Func
	var_87_bool = var_67_bool; // 0x157d Push
	if(var_87_bool == 0) goto Label_5505; // 0x157e JumpB
	var_50_bool = 0; // 0x157f MovB
	return 16; // 0x1580 Return
	
Label_5505:
	StopWorld(); // 0x1581 Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0x1583 Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0x1585 PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0x1586 PushE
	Rotate(var_88_float, var_89_float); // 0x1587 Func
	CameraWaitForPlayFinish(); // 0x1589 Func
	ResumeWorld(); // 0x158b Func
	var_50_bool = 1; // 0x158d MovB
	return 16; // 0x158e Return
}


func_6494(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x195f PushV
	var_201_string = "d5q02KnowNudeIsDead"; // 0x1960 MovS
	func_5558(var_200_int, var_201_string); // 0x1961 Call
	var_202_int = 1; // 0x1963 PushI
	var_203_bool = var_200_int == var_202_int; // 0x1964 Eq
	if(var_203_bool == 0) goto Label_6504; // 0x1965 JumpB
	var_198_bool = 1; // 0x1966 MovB
	return 0; // 0x1967 Return
	
Label_6504:
	var_198_bool = 0; // 0x1968 MovB
	return 0; // 0x1969 Return
}


func_6506(var_256_bool)
{
	var_258_int = 0; var_259_string = ""; // 0x196b PushV
	var_259_string = "ood1Anna1"; // 0x196c MovS
	func_5558(var_258_int, var_259_string); // 0x196d Call
	var_262_int = 0; // 0x196f PushI
	var_263_bool = var_258_int == var_262_int; // 0x1970 Eq
	if(var_263_bool == 0) goto Label_6516; // 0x1971 JumpB
	var_256_bool = 1; // 0x1972 MovB
	return 0; // 0x1973 Return
	
Label_6516:
	var_256_bool = 0; // 0x1974 MovB
	return 0; // 0x1975 Return
}


func_5997()
{
	var_608_string = "KnowMistresses"; // 0x176e PushS
	var_609_int = 1; // 0x176f PushI
	SetVariable(var_608_string, var_609_int); // 0x1770 Func
	return 0; // 0x1772 Return
}


func_4977(var_2_object, var_167_string)
{
	var_168_bool = 0; // 0x1372 PushV
	func_5645(var_168_bool); // 0x1373 Call
	var_169_bool = var_168_bool == 0; // 0x1375 Not
	if(var_169_bool == 0) goto Label_4984; // 0x1376 JumpB
	return 0; // 0x1377 Return
	
Label_4984:
	var_170_bool = var_167_string == var_2_object; // 0x1378 Eq
	if(var_170_bool == 0) goto Label_4987; // 0x1379 JumpB
	return 0; // 0x137a Return
	
Label_4987:
	var_171_string = ""; // 0x137b PushV
	var_171_string = var_167_string; // 0x137c Mov
	func_5523(var_171_string); // 0x137d Call
	var_2_object = var_167_string; // 0x137f TMov
	return 0; // 0x1380 Return
}


func_6003()
{
	var_612_string = "KnowNina"; // 0x1774 PushS
	var_613_int = 1; // 0x1775 PushI
	SetVariable(var_612_string, var_613_int); // 0x1776 Func
	return 0; // 0x1778 Return
}


func_6518(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x1977 PushV
	var_184_string = "d6q01"; // 0x1978 MovS
	func_5558(var_183_int, var_184_string); // 0x1979 Call
	var_185_int = 0; // 0x197b PushI
	var_186_bool = var_183_int == var_185_int; // 0x197c Eq
	if(var_186_bool == 0) goto Label_6528; // 0x197d JumpB
	var_181_bool = 1; // 0x197e MovB
	return 0; // 0x197f Return
	
Label_6528:
	var_181_bool = 0; // 0x1980 MovB
	return 0; // 0x1981 Return
}


func_6009()
{
	var_616_string = "KnowViktoria"; // 0x177a PushS
	var_617_int = 1; // 0x177b PushI
	SetVariable(var_616_string, var_617_int); // 0x177c Func
	return 0; // 0x177e Return
}


func_6015()
{
	var_43_string = "ood1Anna1"; // 0x1780 PushS
	var_44_int = 1; // 0x1781 PushI
	SetVariable(var_43_string, var_44_int); // 0x1782 Func
	return 0; // 0x1784 Return
}


func_6530(var_191_bool)
{
	var_193_int = 0; var_194_string = ""; // 0x1983 PushV
	var_194_string = "d6q01"; // 0x1984 MovS
	func_5558(var_193_int, var_194_string); // 0x1985 Call
	var_195_int = 1; // 0x1987 PushI
	var_196_bool = var_193_int == var_195_int; // 0x1988 Eq
	if(var_196_bool == 0) goto Label_6540; // 0x1989 JumpB
	var_191_bool = 1; // 0x198a MovB
	return 0; // 0x198b Return
	
Label_6540:
	var_191_bool = 0; // 0x198c MovB
	return 0; // 0x198d Return
}


func_6021()
{
	var_130_string = "ood1Anna2"; // 0x1786 PushS
	var_131_int = 1; // 0x1787 PushI
	SetVariable(var_130_string, var_131_int); // 0x1788 Func
	return 0; // 0x178a Return
}


func_6027()
{
	var_139_bool = 0; // 0x178c PushV
	var_139_bool = 0; // 0x178d MovB
	var_140_int = 0; var_141_string = ""; // 0x178e PushV
	var_141_string = "d5q01"; // 0x178f MovS
	func_5558(var_140_int, var_141_string); // 0x1790 Call
	var_144_int = 7; // 0x1792 PushI
	var_145_bool = var_140_int < var_144_int; // 0x1793 LT
	if(var_145_bool == 0) goto Label_6045; // 0x1794 JumpB
	var_146_int = 0; var_147_string = ""; // 0x1795 PushV
	var_147_string = "d5q01"; // 0x1796 MovS
	func_5558(var_146_int, var_147_string); // 0x1797 Call
	var_148_int = -1; // 0x1799 PushI
	var_149_bool = var_146_int != var_148_int; // 0x179a Neq
	if(var_149_bool == 0) goto Label_6045; // 0x179b JumpB
	var_139_bool = 1; // 0x179c MovB
	
Label_6045:
	if(var_139_bool == 0) goto Label_6051; // 0x179d JumpB
	var_150_bool = 0; var_151_string = ""; var_152_string = ""; // 0x179e PushV
	var_151_string = "quest_d5_02"; // 0x179f MovS
	var_152_string = "place_girl"; // 0x17a0 MovS
	func_5600(var_150_bool, var_151_string, var_152_string); // 0x17a1 Call
	
Label_6051:
	return 0; // 0x17a3 Return
}


func_2957(var_2_object, var_148_string)
{
	var_149_bool = 0; // 0xb8e PushV
	func_5645(var_149_bool); // 0xb8f Call
	var_150_bool = var_149_bool == 0; // 0xb91 Not
	if(var_150_bool == 0) goto Label_2964; // 0xb92 JumpB
	return 0; // 0xb93 Return
	
Label_2964:
	var_151_bool = var_148_string == var_2_object; // 0xb94 Eq
	if(var_151_bool == 0) goto Label_2967; // 0xb95 JumpB
	return 0; // 0xb96 Return
	
Label_2967:
	var_152_string = ""; // 0xb97 PushV
	var_152_string = var_148_string; // 0xb98 Mov
	func_5523(var_152_string); // 0xb99 Call
	var_2_object = var_148_string; // 0xb9b TMov
	return 0; // 0xb9c Return
}


func_6542(var_310_bool)
{
	var_312_int = 0; var_313_string = ""; // 0x198f PushV
	var_313_string = "ood1Anna3"; // 0x1990 MovS
	func_5558(var_312_int, var_313_string); // 0x1991 Call
	var_314_int = 0; // 0x1993 PushI
	var_315_bool = var_312_int == var_314_int; // 0x1994 Eq
	if(var_315_bool == 0) goto Label_6552; // 0x1995 JumpB
	var_310_bool = 1; // 0x1996 MovB
	return 0; // 0x1997 Return
	
Label_6552:
	var_310_bool = 0; // 0x1998 MovB
	return 0; // 0x1999 Return
}


func_5519()
{
	CameraSwitchToNormal(); // 0x1590 Func
	return 0; // 0x1592 Return
}


func_5523(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0x1593 PushV
	var_45_string = "playing "; // 0x1594 PushS
	var_46_int = var_45_string + var_40_string; // 0x1595 Add
	Trace(var_46_int); // 0x1596 Func
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float); // 0x1598 Func
	lshPlayAnimation(var_43_float, var_44_float); // 0x159a Func
	var_47_string = "start: "; // 0x159c PushS
	var_48_int = var_47_string + var_43_float; // 0x159d Add
	Trace(var_48_int); // 0x159e Func
	var_49_string = "end: "; // 0x15a0 PushS
	var_50_int = var_49_string + var_44_float; // 0x15a1 Add
	Trace(var_50_int); // 0x15a2 Func
	return 4; // 0x15a4 Return
}


func_407(var_0_object, var_698_int, var_699_object)
{
	var_701_object = Obj(); var_702_bool = 0; var_703_int = 0; var_704_bool = 0; var_705_object = Obj(); var_706_bool = 0; var_707_int = 0; var_708_bool = 0; // 0x197 PushV
	var_0_object = var_699_object; // 0x198 TMov
	var_709_bool = 0; var_710_object = Obj(); // 0x199 PushV
	var_710_object = var_699_object; // 0x19a Mov
	func_5463(var_710_object); // 0x19b Call
	var_711_bool = var_709_bool == 0; // 0x19d Not
	if(var_711_bool == 0) goto Label_417; // 0x19e JumpB
	var_698_int = -2; // 0x19f MovI
	return 8; // 0x1a0 Return
	
Label_417:
	CreateDialog(var_705_object); // 0x1a1 Func
	var_712_int = 0; // 0x1a3 PushV
	func_5641(var_712_int); // 0x1a4 Call
	SetNPCName(var_712_int); // 0x1a6 ObjFunc
	var_713_string = ""; // 0x1a8 PushV
	func_5643(var_713_string); // 0x1a9 Call
	SetPhoto(var_713_string); // 0x1ab ObjFunc
	var_714_int = 0; // 0x1ad PushV
	func_6862(var_714_int); // 0x1ae Call
	SetPlayerName(var_714_int); // 0x1b0 ObjFunc
	var_707_int = -1; // 0x1b2 MovI
	IsOverrideActive(var_706_bool); // 0x1b3 Func
	var_715_bool = var_706_bool; // 0x1b5 Push
	if(var_715_bool == 0) goto Label_441; // 0x1b6 JumpB
	var_698_int = -2; // 0x1b7 MovI
	return 8; // 0x1b8 Return
	
Label_441:
	DoDialog(var_705_object); // 0x1b9 Func
	var_716_object = Obj(); var_717_object = Obj(); // 0x1bb PushV
	var_716_object = var_699_object; // 0x1bc Mov
	var_717_object = var_705_object; // 0x1bd Mov
	TaskCall(5); // 0x1be TaskCall
	func_470(var_718_object, var_719_object, var_720_string, var_721_bool, var_716_object, var_717_object); // 0x1bf Call
	TaskReturn(); // 0x1c0 TaskReturn
	IsDialogEnd(var_708_bool); // 0x1c2 ObjFunc
	
Label_452:
	var_804_bool = var_708_bool == 0; // 0x1c4 Not
	if(var_804_bool == 0) goto Label_459; // 0x1c5 JumpB
	sync(); // 0x1c6 Func
	IsDialogEnd(var_708_bool); // 0x1c8 ObjFunc
	goto Label_452; // 0x1ca Jump
	
Label_459:
	var_805_object = Obj(); // 0x1cb PushV
	var_805_object = var_699_object; // 0x1cc Mov
	func_5519(); // 0x1cd Call
	StopDialog(var_705_object); // 0x1cf Func
	GetReturnValue(var_707_int); // 0x1d1 ObjFunc
	var_698_int = var_707_int; // 0x1d3 Mov
	return 8; // 0x1d4 Return
}


func_6554(var_175_bool)
{
	var_177_int = 0; var_178_string = ""; // 0x199b PushV
	var_178_string = "ood6Anna1"; // 0x199c MovS
	func_5558(var_177_int, var_178_string); // 0x199d Call
	var_179_int = 0; // 0x199f PushI
	var_180_bool = var_177_int == var_179_int; // 0x19a0 Eq
	if(var_180_bool == 0) goto Label_6564; // 0x19a1 JumpB
	var_175_bool = 1; // 0x19a2 MovB
	return 0; // 0x19a3 Return
	
Label_6564:
	var_175_bool = 0; // 0x19a4 MovB
	return 0; // 0x19a5 Return
}


func_929(var_0_object, var_154_int, var_155_object)
{
	var_157_object = Obj(); var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_object = Obj(); var_162_bool = 0; var_163_int = 0; var_164_bool = 0; // 0x3a1 PushV
	var_0_object = var_155_object; // 0x3a2 TMov
	var_165_bool = 0; var_166_object = Obj(); // 0x3a3 PushV
	var_166_object = var_155_object; // 0x3a4 Mov
	func_5463(var_166_object); // 0x3a5 Call
	var_167_bool = var_165_bool == 0; // 0x3a7 Not
	if(var_167_bool == 0) goto Label_939; // 0x3a8 JumpB
	var_154_int = -2; // 0x3a9 MovI
	return 8; // 0x3aa Return
	
Label_939:
	CreateDialog(var_161_object); // 0x3ab Func
	var_168_int = 0; // 0x3ad PushV
	func_5641(var_168_int); // 0x3ae Call
	SetNPCName(var_168_int); // 0x3b0 ObjFunc
	var_169_string = ""; // 0x3b2 PushV
	func_5643(var_169_string); // 0x3b3 Call
	SetPhoto(var_169_string); // 0x3b5 ObjFunc
	var_170_int = 0; // 0x3b7 PushV
	func_6862(var_170_int); // 0x3b8 Call
	SetPlayerName(var_170_int); // 0x3ba ObjFunc
	var_163_int = -1; // 0x3bc MovI
	IsOverrideActive(var_162_bool); // 0x3bd Func
	var_171_bool = var_162_bool; // 0x3bf Push
	if(var_171_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_154_int = -2; // 0x3c1 MovI
	return 8; // 0x3c2 Return
	
Label_963:
	DoDialog(var_161_object); // 0x3c3 Func
	var_172_object = Obj(); var_173_object = Obj(); // 0x3c5 PushV
	var_172_object = var_155_object; // 0x3c6 Mov
	var_173_object = var_161_object; // 0x3c7 Mov
	TaskCall(7); // 0x3c8 TaskCall
	func_992(var_174_object, var_175_object, var_176_string, var_177_bool, var_172_object, var_173_object); // 0x3c9 Call
	TaskReturn(); // 0x3ca TaskReturn
	IsDialogEnd(var_164_bool); // 0x3cc ObjFunc
	
Label_974:
	var_370_bool = var_164_bool == 0; // 0x3ce Not
	if(var_370_bool == 0) goto Label_981; // 0x3cf JumpB
	sync(); // 0x3d0 Func
	IsDialogEnd(var_164_bool); // 0x3d2 ObjFunc
	goto Label_974; // 0x3d4 Jump
	
Label_981:
	var_371_object = Obj(); // 0x3d5 PushV
	var_371_object = var_155_object; // 0x3d6 Mov
	func_5519(); // 0x3d7 Call
	StopDialog(var_161_object); // 0x3d9 Func
	GetReturnValue(var_163_int); // 0x3db ObjFunc
	var_154_int = var_163_int; // 0x3dd Mov
	return 8; // 0x3de Return
}


func_6052()
{
	var_144_string = "ood1Anna3"; // 0x17a5 PushS
	var_145_int = 1; // 0x17a6 PushI
	SetVariable(var_144_string, var_145_int); // 0x17a7 Func
	return 0; // 0x17a9 Return
}


func_5541()
{
	var_38_bool = 0; // 0x15a5 PushV
	func_5645(var_38_bool); // 0x15a6 Call
	if(var_38_bool == 0) goto Label_5547; // 0x15a8 JumpB
	lshStopSpeech(); // 0x15a9 Func
	
Label_5547:
	return 0; // 0x15ab Return
}


func_6566(var_197_bool)
{
	var_199_int = 0; var_200_string = ""; // 0x19a7 PushV
	var_200_string = "ood6Anna2"; // 0x19a8 MovS
	func_5558(var_199_int, var_200_string); // 0x19a9 Call
	var_201_int = 0; // 0x19ab PushI
	var_202_bool = var_199_int == var_201_int; // 0x19ac Eq
	if(var_202_bool == 0) goto Label_6576; // 0x19ad JumpB
	var_197_bool = 1; // 0x19ae MovB
	return 0; // 0x19af Return
	
Label_6576:
	var_197_bool = 0; // 0x19b0 MovB
	return 0; // 0x19b1 Return
}


func_6058()
{
	var_187_string = "ood1Anna4"; // 0x17ab PushS
	var_188_int = 1; // 0x17ac PushI
	SetVariable(var_187_string, var_188_int); // 0x17ad Func
	return 0; // 0x17af Return
}


func_5548(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x15ac PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x15ad Or
	var_79_float = sqrt(var_80_int); // 0x15ae Sqrt2
	var_81_float = 0.0; // 0x15af PushF
	var_82_bool = var_79_float < var_81_float; // 0x15b0 LT
	if(var_82_bool == 0) goto Label_5556; // 0x15b1 JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x15b2 MovV
	return 2; // 0x15b3 Return
	
Label_5556:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x15b4 Div2
	return 2; // 0x15b5 Return
}


func_6064()
{
	var_43_string = "ood6Anna1"; // 0x17b1 PushS
	var_44_int = 1; // 0x17b2 PushI
	SetVariable(var_43_string, var_44_int); // 0x17b3 Func
	return 0; // 0x17b5 Return
}


func_6578(var_341_bool)
{
	var_343_int = 0; var_344_string = ""; // 0x19b3 PushV
	var_344_string = "ood1Anna4"; // 0x19b4 MovS
	func_5558(var_343_int, var_344_string); // 0x19b5 Call
	var_345_int = 0; // 0x19b7 PushI
	var_346_bool = var_343_int == var_345_int; // 0x19b8 Eq
	if(var_346_bool == 0) goto Label_6588; // 0x19b9 JumpB
	var_341_bool = 1; // 0x19ba MovB
	return 0; // 0x19bb Return
	
Label_6588:
	var_341_bool = 0; // 0x19bc MovB
	return 0; // 0x19bd Return
}


func_6070()
{
	var_57_string = "ood6Anna2"; // 0x17b7 PushS
	var_58_int = 1; // 0x17b8 PushI
	SetVariable(var_57_string, var_58_int); // 0x17b9 Func
	return 0; // 0x17bb Return
}


func_5558(var_140_int, var_141_string)
{
	var_142_int = 0; var_143_int = 0; // 0x15b6 PushV
	GetVariable(var_141_string, var_143_int); // 0x15b7 Func
	var_140_int = var_143_int; // 0x15b9 Mov
	return 2; // 0x15ba Return
}


func_5563(var_100_object, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj(); var_105_object = Obj(); // 0x15bb PushV
	GetMainOutdoorScene(var_104_object); // 0x15bc Func
	var_106_string = ".bin"; // 0x15be PushS
	var_107_int = var_101_string + var_106_string; // 0x15bf Add
	AddBlankActor(var_105_object, var_104_object, var_101_string, var_107_int); // 0x15c0 Func
	var_100_object = var_105_object; // 0x15c2 Mov
	return 4; // 0x15c3 Return
}


func_6076()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x17bc PushV
	var_65_int = 0; var_66_string = ""; // 0x17bd PushV
	var_66_string = "d6q01KnowKillerIsKlara"; // 0x17be MovS
	func_5558(var_65_int, var_66_string); // 0x17bf Call
	var_69_int = 0; // 0x17c1 PushI
	var_70_bool = var_65_int == var_69_int; // 0x17c2 Eq
	if(var_70_bool == 0) goto Label_6110; // 0x17c3 JumpB
	var_71_string = "d6q01KnowKillerIsKlara"; // 0x17c4 PushS
	var_72_int = 1; // 0x17c5 PushI
	SetVariable(var_71_string, var_72_int); // 0x17c6 Func
	var_73_object = Obj(); // 0x17c8 PushV
	func_6812(var_73_object); // 0x17c9 Call
	var_64_object = var_73_object; // 0x17ca Mov
	var_80_string = "d6q01KillerIsKlara"; // 0x17cc PushS
	var_81_string = "pt_map_alexandr"; // 0x17cd PushS
	var_82_int = 1; // 0x17ce PushI
	var_83_int = 15396; // 0x17cf PushI
	var_84_float = 0; // 0x17d0 PushV
	func_5612(var_84_float); // 0x17d1 Call
	AddMark(var_80_string, var_81_string, var_82_int, var_83_int, var_84_float); // 0x17d3 ObjFunc
	func_6975(); // 0x17d6 Call
	var_112_bool = 0; var_113_string = ""; var_114_string = ""; // 0x17d8 PushV
	var_113_string = "quest_d6_01"; // 0x17d9 MovS
	var_114_string = "saburov_klara"; // 0x17da MovS
	func_5600(var_112_bool, var_113_string, var_114_string); // 0x17db Call
	var_64_object = 0; // 0x17dd SetNull
	
Label_6110:
	return 2; // 0x17de Return
}


func_6590(var_363_bool)
{
	var_365_int = 0; var_366_string = ""; // 0x19bf PushV
	var_366_string = "ood1Anna5"; // 0x19c0 MovS
	func_5558(var_365_int, var_366_string); // 0x19c1 Call
	var_367_int = 0; // 0x19c3 PushI
	var_368_bool = var_365_int == var_367_int; // 0x19c4 Eq
	if(var_368_bool == 0) goto Label_6600; // 0x19c5 JumpB
	var_363_bool = 1; // 0x19c6 MovB
	return 0; // 0x19c7 Return
	
Label_6600:
	var_363_bool = 0; // 0x19c8 MovB
	return 0; // 0x19c9 Return
}


func_5574(var_124_object, var_125_int)
{
	var_126_int = 0; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0; // 0x15c6 PushV
	GetItemID(var_129_int); // 0x15c7 ObjFunc
	var_132_string = "Category"; // 0x15c9 PushS
	GetInvItemProperty(var_130_int, var_129_int, var_132_string); // 0x15ca Func
	AddItem(var_131_bool, var_124_object, var_130_int, var_125_int); // 0x15cc ObjFunc
	var_133_bool = var_131_bool == 0; // 0x15ce Not
	if(var_133_bool == 0) goto Label_5586; // 0x15cf JumpB
	DropItems(var_124_object, var_125_int); // 0x15d0 ObjFunc
	
Label_5586:
	return 6; // 0x15d2 Return
}


func_6602(var_372_bool)
{
	var_374_int = 0; var_375_string = ""; // 0x19cb PushV
	var_375_string = "ood1Anna6"; // 0x19cc MovS
	func_5558(var_374_int, var_375_string); // 0x19cd Call
	var_376_int = 0; // 0x19cf PushI
	var_377_bool = var_374_int == var_376_int; // 0x19d0 Eq
	if(var_377_bool == 0) goto Label_6612; // 0x19d1 JumpB
	var_372_bool = 1; // 0x19d2 MovB
	return 0; // 0x19d3 Return
	
Label_6612:
	var_372_bool = 0; // 0x19d4 MovB
	return 0; // 0x19d5 Return
}


func_5587(var_118_object, var_119_string, var_120_int)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x15d3 PushV
	CreateInvItem(var_122_object); // 0x15d4 Func
	SetItemName(var_119_string); // 0x15d6 ObjFunc
	var_123_object = Obj(); var_124_object = Obj(); var_125_int = 0; // 0x15d8 PushV
	var_123_object = var_118_object; // 0x15d9 Mov
	var_124_object = var_122_object; // 0x15da Mov
	var_125_int = var_120_int; // 0x15db Mov
	func_5574(var_124_object, var_125_int); // 0x15dc Call
	return 2; // 0x15de Return
}


func_470(var_0_object, var_1_object, var_2_object, var_3_object, var_716_object, var_717_object)
{
	var_0_object = var_717_object; // 0x1d7 TMov
	var_1_object = var_716_object; // 0x1d8 TMov
	var_3_object = 0; // 0x1d9 TMovB
	var_722_int = 1; // 0x1da PushI
	if(var_722_int == 0) goto Label_570; // 0x1db JumpB
	var_723_string = ""; // 0x1dc PushV
	var_723_string = "Neutral"; // 0x1dd MovS
	func_600(var_717_object, var_723_string); // 0x1de Call
	var_728_int = 12719; // 0x1e0 PushI
	SetMessage(var_728_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_729_bool = 0; // 0x1e5 PushV
	var_729_bool = 0; // 0x1e6 MovB
	var_730_bool = 0; var_731_object = Obj(); // 0x1e7 PushV
	var_731_object = var_1_object; // 0x1e8 MovT
	func_6554(var_731_object); // 0x1e9 Call
	if(var_730_bool == 0) goto Label_498; // 0x1eb JumpB
	var_736_bool = 0; var_737_object = Obj(); // 0x1ec PushV
	var_737_object = var_1_object; // 0x1ed MovT
	func_6518(var_737_object); // 0x1ee Call
	if(var_736_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_729_bool = 1; // 0x1f1 MovB
	
Label_498:
	if(var_729_bool == 0) goto Label_504; // 0x1f2 JumpB
	var_742_int = 12720; // 0x1f3 PushI
	var_743_int = 4261; // 0x1f4 PushI
	var_744_int = 13913; // 0x1f5 PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x1f6 TObjFunc
	
Label_504:
	var_745_bool = 0; // 0x1f8 PushV
	var_745_bool = 0; // 0x1f9 MovB
	var_746_bool = 0; var_747_object = Obj(); // 0x1fa PushV
	var_747_object = var_1_object; // 0x1fb MovT
	func_6530(var_747_object); // 0x1fc Call
	if(var_746_bool == 0) goto Label_517; // 0x1fe JumpB
	var_752_bool = 0; var_753_object = Obj(); // 0x1ff PushV
	var_753_object = var_1_object; // 0x200 MovT
	func_6566(var_753_object); // 0x201 Call
	if(var_752_bool == 0) goto Label_517; // 0x203 JumpB
	var_745_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_745_bool == 0) goto Label_523; // 0x205 JumpB
	var_758_int = 12721; // 0x206 PushI
	var_759_int = 13915; // 0x207 PushI
	var_760_int = 13914; // 0x208 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x209 TObjFunc
	
Label_523:
	var_761_bool = 0; // 0x20b PushV
	var_761_bool = 0; // 0x20c MovB
	var_762_bool = 0; // 0x20d PushV
	var_762_bool = 0; // 0x20e MovB
	var_763_bool = 0; // 0x20f PushV
	var_763_bool = 0; // 0x210 MovB
	var_764_bool = 0; var_765_object = Obj(); // 0x211 PushV
	var_765_object = var_1_object; // 0x212 MovT
	func_6614(var_765_object); // 0x213 Call
	if(var_764_bool == 0) goto Label_541; // 0x215 JumpB
	var_770_bool = 0; var_771_object = Obj(); // 0x216 PushV
	var_771_object = var_1_object; // 0x217 MovT
	func_6638(var_771_object); // 0x218 Call
	var_776_bool = var_770_bool == 0; // 0x21a Not
	if(var_776_bool == 0) goto Label_541; // 0x21b JumpB
	var_763_bool = 1; // 0x21c MovB
	
Label_541:
	if(var_763_bool == 0) goto Label_549; // 0x21d JumpB
	var_777_bool = 0; var_778_object = Obj(); // 0x21e PushV
	var_778_object = var_1_object; // 0x21f MovT
	func_6650(var_778_object); // 0x220 Call
	var_783_bool = var_777_bool == 0; // 0x222 Not
	if(var_783_bool == 0) goto Label_549; // 0x223 JumpB
	var_762_bool = 1; // 0x224 MovB
	
Label_549:
	if(var_762_bool == 0) goto Label_556; // 0x225 JumpB
	var_784_bool = 0; var_785_object = Obj(); // 0x226 PushV
	var_785_object = var_1_object; // 0x227 MovT
	func_6662(var_785_object); // 0x228 Call
	if(var_784_bool == 0) goto Label_556; // 0x22a JumpB
	var_761_bool = 1; // 0x22b MovB
	
Label_556:
	if(var_761_bool == 0) goto Label_562; // 0x22c JumpB
	var_790_int = 13747; // 0x22d PushI
	var_791_int = 14993; // 0x22e PushI
	var_792_int = 14992; // 0x22f PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x230 TObjFunc
	
Label_562:
	var_793_int = 12728; // 0x232 PushI
	var_794_int = -1; // 0x233 PushI
	var_795_int = 13921; // 0x234 PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x235 TObjFunc
	goto Label_570; // 0x237 Jump
	
Label_570:
	var_796_bool = 0; // 0x23a PushV
	func_5645(var_796_bool); // 0x23b Call
	if(var_796_bool == 0) goto Label_585; // 0x23d JumpB
	
Label_574:
	lshWaitForAnimEnd(); // 0x23e Func
	var_797_object = var_3_object; // 0x240 PushT
	if(var_797_object == 0) goto Label_579; // 0x241 JumpB
	goto Label_584; // 0x242 Jump
	
Label_584:
	goto Label_599; // 0x248 Jump
	
Label_599:
	return 0; // 0x257 Return
	
Label_579:
	var_798_string = ""; // 0x243 PushV
	var_798_string = var_2_object; // 0x244 MovT
	func_5523(var_798_string); // 0x245 Call
	goto Label_574; // 0x247 Jump
	
Label_585:
	var_799_string = "all"; // 0x249 PushS
	var_800_string = "idle"; // 0x24a PushS
	PlayAnimation(var_799_string, var_800_string); // 0x24b Func
	
Label_589:
	WaitForAnimEnd(); // 0x24d Func
	var_801_object = var_3_object; // 0x24f PushT
	if(var_801_object == 0) goto Label_594; // 0x250 JumpB
	goto Label_599; // 0x251 Jump
	
Label_594:
	var_802_string = "all"; // 0x252 PushS
	var_803_string = "idle"; // 0x253 PushS
	PlayAnimation(var_802_string, var_803_string); // 0x254 Func
	goto Label_589; // 0x256 Jump
}


func_6614(var_209_bool)
{
	var_211_int = 0; var_212_string = ""; // 0x19d7 PushV
	var_212_string = "microscope_d6q01_anna_blood"; // 0x19d8 MovS
	func_5558(var_211_int, var_212_string); // 0x19d9 Call
	var_213_int = 0; // 0x19db PushI
	var_214_bool = var_211_int != var_213_int; // 0x19dc Neq
	if(var_214_bool == 0) goto Label_6624; // 0x19dd JumpB
	var_209_bool = 1; // 0x19de MovB
	return 0; // 0x19df Return
	
Label_6624:
	var_209_bool = 0; // 0x19e0 MovB
	return 0; // 0x19e1 Return
}


func_6111()
{
	var_193_string = "ood1Anna5"; // 0x17e0 PushS
	var_194_int = 1; // 0x17e1 PushI
	SetVariable(var_193_string, var_194_int); // 0x17e2 Func
	return 0; // 0x17e4 Return
}


func_992(var_0_object, var_1_object, var_2_object, var_3_object, var_172_object, var_173_object)
{
	var_0_object = var_173_object; // 0x3e1 TMov
	var_1_object = var_172_object; // 0x3e2 TMov
	var_3_object = 0; // 0x3e3 TMovB
	var_178_int = 1; // 0x3e4 PushI
	if(var_178_int == 0) goto Label_1252; // 0x3e5 JumpB
	var_179_bool = 0; // 0x3e6 PushV
	var_179_bool = 0; // 0x3e7 MovB
	var_180_bool = 0; var_181_object = Obj(); // 0x3e8 PushV
	var_181_object = var_1_object; // 0x3e9 MovT
	func_6506(var_181_object); // 0x3ea Call
	if(var_180_bool == 0) goto Label_1011; // 0x3ec JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3ed PushV
	var_189_object = var_1_object; // 0x3ee MovT
	func_6230(var_189_object); // 0x3ef Call
	if(var_188_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_179_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_179_bool == 0) goto Label_1037; // 0x3f3 JumpB
	var_194_string = ""; // 0x3f4 PushV
	var_194_string = "Neutral"; // 0x3f5 MovS
	func_1282(var_173_object, var_194_string); // 0x3f6 Call
	var_199_int = 4938; // 0x3f8 PushI
	SetMessage(var_199_int); // 0x3f9 TObjFunc
	ClearReplies(); // 0x3fb TObjFunc
	var_200_int = 4949; // 0x3fd PushI
	var_201_int = 5439; // 0x3fe PushI
	var_202_int = 5438; // 0x3ff PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x400 TObjFunc
	var_203_int = 4978; // 0x402 PushI
	var_204_int = 5439; // 0x403 PushI
	var_205_int = 5475; // 0x404 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x405 TObjFunc
	var_206_int = 4979; // 0x407 PushI
	var_207_int = 5439; // 0x408 PushI
	var_208_int = 5477; // 0x409 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x40a TObjFunc
	goto Label_1252; // 0x40c Jump
	
Label_1252:
	var_209_bool = 0; // 0x4e4 PushV
	func_5645(var_209_bool); // 0x4e5 Call
	if(var_209_bool == 0) goto Label_1267; // 0x4e7 JumpB
	
Label_1256:
	lshWaitForAnimEnd(); // 0x4e8 Func
	var_210_object = var_3_object; // 0x4ea PushT
	if(var_210_object == 0) goto Label_1261; // 0x4eb JumpB
	goto Label_1266; // 0x4ec Jump
	
Label_1266:
	goto Label_1281; // 0x4f2 Jump
	
Label_1281:
	return 0; // 0x501 Return
	
Label_1261:
	var_211_string = ""; // 0x4ed PushV
	var_211_string = var_2_object; // 0x4ee MovT
	func_5523(var_211_string); // 0x4ef Call
	goto Label_1256; // 0x4f1 Jump
	
Label_1267:
	var_212_string = "all"; // 0x4f3 PushS
	var_213_string = "idle"; // 0x4f4 PushS
	PlayAnimation(var_212_string, var_213_string); // 0x4f5 Func
	
Label_1271:
	WaitForAnimEnd(); // 0x4f7 Func
	var_214_object = var_3_object; // 0x4f9 PushT
	if(var_214_object == 0) goto Label_1276; // 0x4fa JumpB
	goto Label_1281; // 0x4fb Jump
	
Label_1276:
	var_215_string = "all"; // 0x4fc PushS
	var_216_string = "idle"; // 0x4fd PushS
	PlayAnimation(var_215_string, var_216_string); // 0x4fe Func
	goto Label_1271; // 0x500 Jump
	
Label_1037:
	var_217_bool = 0; var_218_object = Obj(); // 0x40d PushV
	var_218_object = var_1_object; // 0x40e MovT
	func_6362(var_218_object); // 0x40f Call
	if(var_217_bool == 0) goto Label_1062; // 0x411 JumpB
	var_223_string = ""; // 0x412 PushV
	var_223_string = "Neutral"; // 0x413 MovS
	func_1282(var_173_object, var_223_string); // 0x414 Call
	var_224_int = 4940; // 0x416 PushI
	SetMessage(var_224_int); // 0x417 TObjFunc
	ClearReplies(); // 0x419 TObjFunc
	var_225_int = 4981; // 0x41b PushI
	var_226_int = 5480; // 0x41c PushI
	var_227_int = 5479; // 0x41d PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x41e TObjFunc
	var_228_int = 4985; // 0x420 PushI
	var_229_int = -1; // 0x421 PushI
	var_230_int = 5483; // 0x422 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x423 TObjFunc
	goto Label_1252; // 0x425 Jump
	
Label_1062:
	var_231_bool = 0; // 0x426 PushV
	var_231_bool = 0; // 0x427 MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x428 PushV
	var_233_object = var_1_object; // 0x429 MovT
	func_6542(var_233_object); // 0x42a Call
	if(var_232_bool == 0) goto Label_1075; // 0x42c JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x42d PushV
	var_239_object = var_1_object; // 0x42e MovT
	func_6218(var_239_object); // 0x42f Call
	if(var_238_bool == 0) goto Label_1075; // 0x431 JumpB
	var_231_bool = 1; // 0x432 MovB
	
Label_1075:
	if(var_231_bool == 0) goto Label_1101; // 0x433 JumpB
	var_244_string = ""; // 0x434 PushV
	var_244_string = "Neutral"; // 0x435 MovS
	func_1282(var_173_object, var_244_string); // 0x436 Call
	var_245_int = 4943; // 0x438 PushI
	SetMessage(var_245_int); // 0x439 TObjFunc
	ClearReplies(); // 0x43b TObjFunc
	var_246_int = 4987; // 0x43d PushI
	var_247_int = 5486; // 0x43e PushI
	var_248_int = 5485; // 0x43f PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x440 TObjFunc
	var_249_int = 4991; // 0x442 PushI
	var_250_int = 5490; // 0x443 PushI
	var_251_int = 5489; // 0x444 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x445 TObjFunc
	var_252_int = 4998; // 0x447 PushI
	var_253_int = 5498; // 0x448 PushI
	var_254_int = 5497; // 0x449 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x44a TObjFunc
	goto Label_1252; // 0x44c Jump
	
Label_1101:
	var_255_string = ""; // 0x44d PushV
	var_255_string = "Neutral"; // 0x44e MovS
	func_1282(var_173_object, var_255_string); // 0x44f Call
	var_256_int = 6582; // 0x451 PushI
	SetMessage(var_256_int); // 0x452 TObjFunc
	ClearReplies(); // 0x454 TObjFunc
	var_257_bool = 0; var_258_object = Obj(); // 0x456 PushV
	var_258_object = var_1_object; // 0x457 MovT
	func_6230(var_258_object); // 0x458 Call
	if(var_257_bool == 0) goto Label_1120; // 0x45a JumpB
	var_259_int = 8690; // 0x45b PushI
	var_260_int = 9528; // 0x45c PushI
	var_261_int = 9527; // 0x45d PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x45e TObjFunc
	
Label_1120:
	var_262_bool = 0; // 0x460 PushV
	var_262_bool = 0; // 0x461 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x462 PushV
	var_264_object = var_1_object; // 0x463 MovT
	func_6578(var_264_object); // 0x464 Call
	if(var_263_bool == 0) goto Label_1133; // 0x466 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x467 PushV
	var_270_object = var_1_object; // 0x468 MovT
	func_6242(var_270_object); // 0x469 Call
	if(var_269_bool == 0) goto Label_1133; // 0x46b JumpB
	var_262_bool = 1; // 0x46c MovB
	
Label_1133:
	if(var_262_bool == 0) goto Label_1139; // 0x46d JumpB
	var_275_int = 6583; // 0x46e PushI
	var_276_int = 5521; // 0x46f PushI
	var_277_int = 7252; // 0x470 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x471 TObjFunc
	
Label_1139:
	var_278_bool = 0; // 0x473 PushV
	var_278_bool = 0; // 0x474 MovB
	var_279_bool = 0; var_280_object = Obj(); // 0x475 PushV
	var_280_object = var_1_object; // 0x476 MovT
	func_6674(var_280_object); // 0x477 Call
	if(var_279_bool == 0) goto Label_1152; // 0x479 JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x47a PushV
	var_286_object = var_1_object; // 0x47b MovT
	func_6590(var_286_object); // 0x47c Call
	if(var_285_bool == 0) goto Label_1152; // 0x47e JumpB
	var_278_bool = 1; // 0x47f MovB
	
Label_1152:
	if(var_278_bool == 0) goto Label_1158; // 0x480 JumpB
	var_291_int = 6590; // 0x481 PushI
	var_292_int = 5533; // 0x482 PushI
	var_293_int = 7259; // 0x483 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x484 TObjFunc
	
Label_1158:
	var_294_bool = 0; var_295_object = Obj(); // 0x486 PushV
	var_295_object = var_1_object; // 0x487 MovT
	func_6602(var_295_object); // 0x488 Call
	if(var_294_bool == 0) goto Label_1168; // 0x48a JumpB
	var_300_int = 6586; // 0x48b PushI
	var_301_int = 5503; // 0x48c PushI
	var_302_int = 7255; // 0x48d PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x48e TObjFunc
	
Label_1168:
	var_303_bool = 0; // 0x490 PushV
	var_303_bool = 0; // 0x491 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x492 PushV
	var_305_object = var_1_object; // 0x493 MovT
	func_6746(var_305_object); // 0x494 Call
	if(var_304_bool == 0) goto Label_1181; // 0x496 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x497 PushV
	var_311_object = var_1_object; // 0x498 MovT
	func_6254(var_311_object); // 0x499 Call
	if(var_310_bool == 0) goto Label_1181; // 0x49b JumpB
	var_303_bool = 1; // 0x49c MovB
	
Label_1181:
	if(var_303_bool == 0) goto Label_1187; // 0x49d JumpB
	var_316_int = 6592; // 0x49e PushI
	var_317_int = 7679; // 0x49f PushI
	var_318_int = 7261; // 0x4a0 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x4a1 TObjFunc
	
Label_1187:
	var_319_bool = 0; // 0x4a3 PushV
	var_319_bool = 0; // 0x4a4 MovB
	var_320_bool = 0; var_321_object = Obj(); // 0x4a5 PushV
	var_321_object = var_1_object; // 0x4a6 MovT
	func_6626(var_321_object); // 0x4a7 Call
	if(var_320_bool == 0) goto Label_1200; // 0x4a9 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x4aa PushV
	var_327_object = var_1_object; // 0x4ab MovT
	func_6266(var_327_object); // 0x4ac Call
	if(var_326_bool == 0) goto Label_1200; // 0x4ae JumpB
	var_319_bool = 1; // 0x4af MovB
	
Label_1200:
	if(var_319_bool == 0) goto Label_1206; // 0x4b0 JumpB
	var_332_int = 6595; // 0x4b1 PushI
	var_333_int = 7689; // 0x4b2 PushI
	var_334_int = 7264; // 0x4b3 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x4b4 TObjFunc
	
Label_1206:
	var_335_bool = 0; // 0x4b6 PushV
	var_335_bool = 0; // 0x4b7 MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x4b8 PushV
	var_337_object = var_1_object; // 0x4b9 MovT
	func_6758(var_337_object); // 0x4ba Call
	if(var_336_bool == 0) goto Label_1219; // 0x4bc JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x4bd PushV
	var_343_object = var_1_object; // 0x4be MovT
	func_6278(var_343_object); // 0x4bf Call
	if(var_342_bool == 0) goto Label_1219; // 0x4c1 JumpB
	var_335_bool = 1; // 0x4c2 MovB
	
Label_1219:
	if(var_335_bool == 0) goto Label_1225; // 0x4c3 JumpB
	var_348_int = 6602; // 0x4c4 PushI
	var_349_int = 7697; // 0x4c5 PushI
	var_350_int = 7271; // 0x4c6 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x4c7 TObjFunc
	
Label_1225:
	var_351_bool = 0; // 0x4c9 PushV
	var_351_bool = 0; // 0x4ca MovB
	var_352_bool = 0; var_353_object = Obj(); // 0x4cb PushV
	var_353_object = var_1_object; // 0x4cc MovT
	func_6686(var_353_object); // 0x4cd Call
	if(var_352_bool == 0) goto Label_1238; // 0x4cf JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x4d0 PushV
	var_359_object = var_1_object; // 0x4d1 MovT
	func_6290(var_359_object); // 0x4d2 Call
	if(var_358_bool == 0) goto Label_1238; // 0x4d4 JumpB
	var_351_bool = 1; // 0x4d5 MovB
	
Label_1238:
	if(var_351_bool == 0) goto Label_1244; // 0x4d6 JumpB
	var_364_int = 6605; // 0x4d7 PushI
	var_365_int = 7703; // 0x4d8 PushI
	var_366_int = 7274; // 0x4d9 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x4da TObjFunc
	
Label_1244:
	var_367_int = 7538; // 0x4dc PushI
	var_368_int = -1; // 0x4dd PushI
	var_369_int = 8320; // 0x4de PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x4df TObjFunc
	goto Label_1252; // 0x4e1 Jump
}


func_5600(var_108_bool, var_109_string, var_110_string)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x15e0 PushV
	FindActor(var_112_object, var_109_string); // 0x15e1 Func
	var_113_bool = var_112_object == 0; // 0x15e3 NullEq
	if(var_113_bool == 0) goto Label_5607; // 0x15e4 JumpB
	var_108_bool = 0; // 0x15e5 MovB
	return 2; // 0x15e6 Return
	
Label_5607:
	Trigger(var_112_object, var_110_string); // 0x15e7 Func
	var_108_bool = 1; // 0x15e9 MovB
	return 2; // 0x15ea Return
}


func_6626(var_398_bool)
{
	var_400_int = 0; var_401_string = ""; // 0x19e3 PushV
	var_401_string = "KnowAlexandr"; // 0x19e4 MovS
	func_5558(var_400_int, var_401_string); // 0x19e5 Call
	var_402_int = 1; // 0x19e7 PushI
	var_403_bool = var_400_int == var_402_int; // 0x19e8 Eq
	if(var_403_bool == 0) goto Label_6636; // 0x19e9 JumpB
	var_398_bool = 1; // 0x19ea MovB
	return 0; // 0x19eb Return
	
Label_6636:
	var_398_bool = 0; // 0x19ec MovB
	return 0; // 0x19ed Return
}


func_6117()
{
	var_211_string = "ood1Anna6"; // 0x17e6 PushS
	var_212_int = 1; // 0x17e7 PushI
	SetVariable(var_211_string, var_212_int); // 0x17e8 Func
	return 0; // 0x17ea Return
}


func_6123()
{
	var_43_string = "KnowAnna"; // 0x17ec PushS
	var_44_int = 1; // 0x17ed PushI
	SetVariable(var_43_string, var_44_int); // 0x17ee Func
	return 0; // 0x17f0 Return
}


func_5612(var_58_float)
{
	var_59_float = 0; var_60_float = 0; // 0x15ec PushV
	GetGameTime(var_60_float); // 0x15ed Func
	var_58_float = var_60_float; // 0x15ef Mov
	return 2; // 0x15f0 Return
}


func_6638(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x19ef PushV
	var_218_string = "d6q01"; // 0x19f0 MovS
	func_5558(var_217_int, var_218_string); // 0x19f1 Call
	var_219_int = 1000; // 0x19f3 PushI
	var_220_bool = var_217_int == var_219_int; // 0x19f4 Eq
	if(var_220_bool == 0) goto Label_6648; // 0x19f5 JumpB
	var_215_bool = 1; // 0x19f6 MovB
	return 0; // 0x19f7 Return
	
Label_6648:
	var_215_bool = 0; // 0x19f8 MovB
	return 0; // 0x19f9 Return
}


func_6129(var_118_object)
{
	func_6959(); // 0x17f3 Call
	var_129_string = "anna blood is given"; // 0x17f5 PushS
	Trace(var_129_string); // 0x17f6 Func
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0; // 0x17f8 PushV
	var_130_object = var_118_object; // 0x17f9 Mov
	var_131_string = "d6q01_anna_blood"; // 0x17fa MovS
	var_132_int = 1; // 0x17fb MovI
	func_5587(var_130_object, var_131_string, var_132_int); // 0x17fc Call
	return 0; // 0x17fe Return
}


func_5617(var_148_int)
{
	var_149_float = 0; var_150_float = 0; // 0x15f1 PushV
	GetGameTime(var_150_float); // 0x15f2 Func
	var_151_int = 1; // 0x15f4 PushI
	var_152_int = 0; // 0x15f5 PushV
	var_153_int = 24; // 0x15f6 PushI
	var_152_int = var_150_float / var_150_float; // 0x15f7 Div2
	var_148_int = var_151_int + var_152_int; // 0x15f8 Add2
	return 2; // 0x15f9 Return
}


func_5626(var_146_bool, var_147_int)
{
	var_148_int = 0; // 0x15fb PushV
	func_5617(var_148_int); // 0x15fc Call
	var_146_bool = var_148_int == var_147_int; // 0x15fe Eq2
	return 0; // 0x15ff Return
}


func_6143()
{
	var_148_string = "playsound"; // 0x1800 PushS
	var_149_string = "giveitem"; // 0x1801 PushS
	TriggerWorld(var_148_string, var_149_string); // 0x1802 Func
	return 0; // 0x1804 Return
}


