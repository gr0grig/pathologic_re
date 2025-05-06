task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj(); // 0x24 PushV
	var_31_object = var_30_bool; // 0x25 Mov
	func_3649(var_31_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2a PushV
	var_32_object = var_30_bool; // 0x2b Mov
	func_2973(var_32_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xc0 PushI
	if(var_32_int == 0) goto Label_342; // 0xc1 JumpB
	func_3068(); // 0xc3 Call
	var_34_int = 243; // 0xc5 PushI
	var_35_bool = var_30_string == var_34_int; // 0xc6 Eq
	if(var_35_bool == 0) goto Label_225; // 0xc7 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xc8 PushV
	var_36_object = var_1_object; // 0xc9 MovT
	var_37_object = var_0_object; // 0xca MovT
	func_3210(); // 0xcb Call
	var_40_string = ""; // 0xcd PushV
	var_40_string = "Neutral"; // 0xce MovS
	func_175(var_31_bool, var_40_string); // 0xcf Call
	var_55_int = 205; // 0xd1 PushI
	SetMessage(var_55_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_56_int = 207; // 0xd6 PushI
	var_57_int = 256; // 0xd7 PushI
	var_58_int = 245; // 0xd8 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd9 TObjFunc
	var_59_int = 206; // 0xdb PushI
	var_60_int = 246; // 0xdc PushI
	var_61_int = 244; // 0xdd PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_62_int = 246; // 0xe1 PushI
	var_63_bool = var_30_string == var_62_int; // 0xe2 Eq
	if(var_63_bool == 0) goto Label_248; // 0xe3 JumpB
	var_64_string = ""; // 0xe4 PushV
	var_64_string = "Neutral"; // 0xe5 MovS
	func_175(var_31_bool, var_64_string); // 0xe6 Call
	var_65_int = 208; // 0xe8 PushI
	SetMessage(var_65_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_66_int = 209; // 0xed PushI
	var_67_int = 249; // 0xee PushI
	var_68_int = 247; // 0xef PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xf0 TObjFunc
	var_69_int = 210; // 0xf2 PushI
	var_70_int = 250; // 0xf3 PushI
	var_71_int = 248; // 0xf4 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_72_int = 250; // 0xf8 PushI
	var_73_bool = var_30_string == var_72_int; // 0xf9 Eq
	if(var_73_bool == 0) goto Label_266; // 0xfa JumpB
	var_74_string = ""; // 0xfb PushV
	var_74_string = "Neutral"; // 0xfc MovS
	func_175(var_31_bool, var_74_string); // 0xfd Call
	var_75_int = 212; // 0xff PushI
	SetMessage(var_75_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_76_int = 215; // 0x104 PushI
	var_77_int = 249; // 0x105 PushI
	var_78_int = 253; // 0x106 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_79_int = 249; // 0x10a PushI
	var_80_bool = var_30_string == var_79_int; // 0x10b Eq
	if(var_80_bool == 0) goto Label_289; // 0x10c JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x10d PushV
	var_81_object = var_1_object; // 0x10e MovT
	var_82_object = var_0_object; // 0x10f MovT
	func_3172(); // 0x110 Call
	var_85_string = ""; // 0x112 PushV
	var_85_string = "Neutral"; // 0x113 MovS
	func_175(var_31_bool, var_85_string); // 0x114 Call
	var_86_int = 211; // 0x116 PushI
	SetMessage(var_86_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_87_int = 213; // 0x11b PushI
	var_88_int = 252; // 0x11c PushI
	var_89_int = 251; // 0x11d PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_90_int = 252; // 0x121 PushI
	var_91_bool = var_30_string == var_90_int; // 0x122 Eq
	if(var_91_bool == 0) goto Label_307; // 0x123 JumpB
	var_92_string = ""; // 0x124 PushV
	var_92_string = "Neutral"; // 0x125 MovS
	func_175(var_31_bool, var_92_string); // 0x126 Call
	var_93_int = 214; // 0x128 PushI
	SetMessage(var_93_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_94_int = 216; // 0x12d PushI
	var_95_int = -1; // 0x12e PushI
	var_96_int = 255; // 0x12f PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_97_int = 256; // 0x133 PushI
	var_98_bool = var_30_string == var_97_int; // 0x134 Eq
	if(var_98_bool == 0) goto Label_330; // 0x135 JumpB
	var_99_string = ""; // 0x136 PushV
	var_99_string = "Neutral"; // 0x137 MovS
	func_175(var_31_bool, var_99_string); // 0x138 Call
	var_100_int = 217; // 0x13a PushI
	SetMessage(var_100_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_101_int = 218; // 0x13f PushI
	var_102_int = -1; // 0x140 PushI
	var_103_int = 257; // 0x141 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x142 TObjFunc
	var_104_int = 219; // 0x144 PushI
	var_105_int = -1; // 0x145 PushI
	var_106_int = 258; // 0x146 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_3_string = 1; // 0x14a TMovB
	var_107_bool = 0; // 0x14b PushV
	func_3643(var_107_bool); // 0x14c Call
	if(var_107_bool == 0) goto Label_338; // 0x14e JumpB
	lshStopAnimation(); // 0x14f Func
	goto Label_340; // 0x151 Jump
	
Label_340:
	return 0; // 0x154 Return
	
Label_338:
	StopAnimation(); // 0x152 Func
	
Label_342:
	return 0; // 0x156 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x273 PushI
	if(var_32_int == 0) goto Label_1072; // 0x274 JumpB
	func_3068(); // 0x276 Call
	var_34_int = 9079; // 0x278 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x279 Eq
	if(var_35_bool == 0) goto Label_640; // 0x27a JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x27b PushV
	var_36_object = var_1_object; // 0x27c MovT
	var_37_object = var_0_object; // 0x27d MovT
	func_3150(); // 0x27e Call
	
Label_640:
	var_40_int = 9080; // 0x280 PushI
	var_41_bool = var_31_bool == var_40_int; // 0x281 Eq
	if(var_41_bool == 0) goto Label_648; // 0x282 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x283 PushV
	var_42_object = var_1_object; // 0x284 MovT
	var_43_object = var_0_object; // 0x285 MovT
	func_3156(); // 0x286 Call
	
Label_648:
	var_46_int = 6268; // 0x288 PushI
	var_47_bool = var_31_bool == var_46_int; // 0x289 Eq
	if(var_47_bool == 0) goto Label_656; // 0x28a JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x28b PushV
	var_48_object = var_1_object; // 0x28c MovT
	var_49_object = var_0_object; // 0x28d MovT
	func_3150(); // 0x28e Call
	
Label_656:
	var_50_int = 9096; // 0x290 PushI
	var_51_bool = var_31_bool == var_50_int; // 0x291 Eq
	if(var_51_bool == 0) goto Label_664; // 0x292 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x293 PushV
	var_52_object = var_1_object; // 0x294 MovT
	var_53_object = var_0_object; // 0x295 MovT
	func_3216(); // 0x296 Call
	
Label_664:
	var_56_int = 9097; // 0x298 PushI
	var_57_bool = var_31_bool == var_56_int; // 0x299 Eq
	if(var_57_bool == 0) goto Label_672; // 0x29a JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x29b PushV
	var_58_object = var_1_object; // 0x29c MovT
	var_59_object = var_0_object; // 0x29d MovT
	func_3222(); // 0x29e Call
	
Label_672:
	var_62_int = 9100; // 0x2a0 PushI
	var_63_bool = var_31_bool == var_62_int; // 0x2a1 Eq
	if(var_63_bool == 0) goto Label_680; // 0x2a2 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x2a3 PushV
	var_64_object = var_1_object; // 0x2a4 MovT
	var_65_object = var_0_object; // 0x2a5 MovT
	func_3228(); // 0x2a6 Call
	
Label_680:
	var_68_int = 9102; // 0x2a8 PushI
	var_69_bool = var_31_bool == var_68_int; // 0x2a9 Eq
	if(var_69_bool == 0) goto Label_688; // 0x2aa JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x2ab PushV
	var_70_object = var_1_object; // 0x2ac MovT
	var_71_object = var_0_object; // 0x2ad MovT
	func_3234(); // 0x2ae Call
	
Label_688:
	var_74_int = 9103; // 0x2b0 PushI
	var_75_bool = var_31_bool == var_74_int; // 0x2b1 Eq
	if(var_75_bool == 0) goto Label_696; // 0x2b2 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x2b3 PushV
	var_76_object = var_1_object; // 0x2b4 MovT
	var_77_object = var_0_object; // 0x2b5 MovT
	func_3240(); // 0x2b6 Call
	
Label_696:
	var_80_int = 9078; // 0x2b8 PushI
	var_81_bool = var_30_string == var_80_int; // 0x2b9 Eq
	if(var_81_bool == 0) goto Label_865; // 0x2ba JumpB
	var_82_string = ""; // 0x2bb PushV
	var_82_string = "Neutral"; // 0x2bc MovS
	func_610(var_31_bool, var_82_string); // 0x2bd Call
	var_97_int = 8255; // 0x2bf PushI
	SetMessage(var_97_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_98_bool = 0; // 0x2c4 PushV
	var_98_bool = 0; // 0x2c5 MovB
	var_99_bool = 0; var_100_object = Obj(); // 0x2c6 PushV
	var_100_object = var_1_object; // 0x2c7 MovT
	func_3330(var_100_object); // 0x2c8 Call
	if(var_99_bool == 0) goto Label_721; // 0x2ca JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x2cb PushV
	var_108_object = var_1_object; // 0x2cc MovT
	func_3270(var_108_object); // 0x2cd Call
	if(var_107_bool == 0) goto Label_721; // 0x2cf JumpB
	var_98_bool = 1; // 0x2d0 MovB
	
Label_721:
	if(var_98_bool == 0) goto Label_727; // 0x2d1 JumpB
	var_113_int = 8256; // 0x2d2 PushI
	var_114_int = 6255; // 0x2d3 PushI
	var_115_int = 9079; // 0x2d4 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x2d5 TObjFunc
	
Label_727:
	var_116_bool = 0; // 0x2d7 PushV
	var_116_bool = 1; // 0x2d8 MovB
	var_117_bool = 0; // 0x2d9 PushV
	var_117_bool = 0; // 0x2da MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x2db PushV
	var_119_object = var_1_object; // 0x2dc MovT
	func_3374(var_118_bool, var_119_object); // 0x2dd Call
	if(var_118_bool == 0) goto Label_742; // 0x2df JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x2e0 PushV
	var_134_object = var_1_object; // 0x2e1 MovT
	func_3282(var_134_object); // 0x2e2 Call
	if(var_133_bool == 0) goto Label_742; // 0x2e4 JumpB
	var_117_bool = 1; // 0x2e5 MovB
	
Label_742:
	if(var_117_bool == 0) goto Label_758; // 0x2e6 JumpB
	var_139_bool = 0; // 0x2e7 PushV
	var_139_bool = 0; // 0x2e8 MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x2e9 PushV
	var_141_object = var_1_object; // 0x2ea MovT
	func_3352(var_140_bool, var_141_object); // 0x2eb Call
	if(var_140_bool == 0) goto Label_756; // 0x2ed JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x2ee PushV
	var_148_object = var_1_object; // 0x2ef MovT
	func_3282(var_148_object); // 0x2f0 Call
	if(var_147_bool == 0) goto Label_756; // 0x2f2 JumpB
	var_139_bool = 1; // 0x2f3 MovB
	
Label_756:
	if(var_139_bool == 0) goto Label_758; // 0x2f4 JumpB
	var_116_bool = 0; // 0x2f5 MovB
	
Label_758:
	if(var_116_bool == 0) goto Label_764; // 0x2f6 JumpB
	var_149_int = 8257; // 0x2f7 PushI
	var_150_int = 6264; // 0x2f8 PushI
	var_151_int = 9080; // 0x2f9 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x2fa TObjFunc
	
Label_764:
	var_152_bool = 0; // 0x2fc PushV
	var_152_bool = 0; // 0x2fd MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x2fe PushV
	var_154_object = var_1_object; // 0x2ff MovT
	func_3384(var_154_object); // 0x300 Call
	if(var_153_bool == 0) goto Label_777; // 0x302 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x303 PushV
	var_160_object = var_1_object; // 0x304 MovT
	func_3408(var_160_object); // 0x305 Call
	if(var_159_bool == 0) goto Label_777; // 0x307 JumpB
	var_152_bool = 1; // 0x308 MovB
	
Label_777:
	if(var_152_bool == 0) goto Label_783; // 0x309 JumpB
	var_165_int = 8273; // 0x30a PushI
	var_166_int = 9105; // 0x30b PushI
	var_167_int = 9096; // 0x30c PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x30d TObjFunc
	
Label_783:
	var_168_bool = 0; // 0x30f PushV
	var_168_bool = 0; // 0x310 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0x311 PushV
	var_170_object = var_1_object; // 0x312 MovT
	func_3396(var_170_object); // 0x313 Call
	if(var_169_bool == 0) goto Label_796; // 0x315 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x316 PushV
	var_176_object = var_1_object; // 0x317 MovT
	func_3420(var_176_object); // 0x318 Call
	if(var_175_bool == 0) goto Label_796; // 0x31a JumpB
	var_168_bool = 1; // 0x31b MovB
	
Label_796:
	if(var_168_bool == 0) goto Label_802; // 0x31c JumpB
	var_181_int = 8274; // 0x31d PushI
	var_182_int = 9106; // 0x31e PushI
	var_183_int = 9097; // 0x31f PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x320 TObjFunc
	
Label_802:
	var_184_bool = 0; // 0x322 PushV
	var_184_bool = 0; // 0x323 MovB
	var_185_bool = 0; var_186_object = Obj(); // 0x324 PushV
	var_186_object = var_1_object; // 0x325 MovT
	func_3528(var_186_object); // 0x326 Call
	if(var_185_bool == 0) goto Label_815; // 0x328 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x329 PushV
	var_192_object = var_1_object; // 0x32a MovT
	func_3432(var_192_object); // 0x32b Call
	if(var_191_bool == 0) goto Label_815; // 0x32d JumpB
	var_184_bool = 1; // 0x32e MovB
	
Label_815:
	if(var_184_bool == 0) goto Label_821; // 0x32f JumpB
	var_197_int = 8277; // 0x330 PushI
	var_198_int = 9107; // 0x331 PushI
	var_199_int = 9100; // 0x332 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x333 TObjFunc
	
Label_821:
	var_200_bool = 0; // 0x335 PushV
	var_200_bool = 0; // 0x336 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x337 PushV
	var_202_object = var_1_object; // 0x338 MovT
	func_3468(var_202_object); // 0x339 Call
	if(var_201_bool == 0) goto Label_834; // 0x33b JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x33c PushV
	var_208_object = var_1_object; // 0x33d MovT
	func_3444(var_208_object); // 0x33e Call
	if(var_207_bool == 0) goto Label_834; // 0x340 JumpB
	var_200_bool = 1; // 0x341 MovB
	
Label_834:
	if(var_200_bool == 0) goto Label_840; // 0x342 JumpB
	var_213_int = 8279; // 0x343 PushI
	var_214_int = 9108; // 0x344 PushI
	var_215_int = 9102; // 0x345 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x346 TObjFunc
	
Label_840:
	var_216_bool = 0; // 0x348 PushV
	var_216_bool = 0; // 0x349 MovB
	var_217_bool = 0; var_218_object = Obj(); // 0x34a PushV
	var_218_object = var_1_object; // 0x34b MovT
	func_3516(var_218_object); // 0x34c Call
	if(var_217_bool == 0) goto Label_853; // 0x34e JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x34f PushV
	var_224_object = var_1_object; // 0x350 MovT
	func_3456(var_224_object); // 0x351 Call
	if(var_223_bool == 0) goto Label_853; // 0x353 JumpB
	var_216_bool = 1; // 0x354 MovB
	
Label_853:
	if(var_216_bool == 0) goto Label_859; // 0x355 JumpB
	var_229_int = 8280; // 0x356 PushI
	var_230_int = 9109; // 0x357 PushI
	var_231_int = 9103; // 0x358 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x359 TObjFunc
	
Label_859:
	var_232_int = 15221; // 0x35b PushI
	var_233_int = -1; // 0x35c PushI
	var_234_int = 16498; // 0x35d PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x35e TObjFunc
	return 0; // 0x360 Return
	
Label_865:
	var_235_int = 9109; // 0x361 PushI
	var_236_bool = var_30_string == var_235_int; // 0x362 Eq
	if(var_236_bool == 0) goto Label_883; // 0x363 JumpB
	var_237_string = ""; // 0x364 PushV
	var_237_string = "Neutral"; // 0x365 MovS
	func_610(var_31_bool, var_237_string); // 0x366 Call
	var_238_int = 8286; // 0x368 PushI
	SetMessage(var_238_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_239_int = 15222; // 0x36d PushI
	var_240_int = -1; // 0x36e PushI
	var_241_int = 16499; // 0x36f PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x370 TObjFunc
	return 0; // 0x372 Return
	
Label_883:
	var_242_int = 9108; // 0x373 PushI
	var_243_bool = var_30_string == var_242_int; // 0x374 Eq
	if(var_243_bool == 0) goto Label_901; // 0x375 JumpB
	var_244_string = ""; // 0x376 PushV
	var_244_string = "Neutral"; // 0x377 MovS
	func_610(var_31_bool, var_244_string); // 0x378 Call
	var_245_int = 8285; // 0x37a PushI
	SetMessage(var_245_int); // 0x37b TObjFunc
	ClearReplies(); // 0x37d TObjFunc
	var_246_int = 15223; // 0x37f PushI
	var_247_int = -1; // 0x380 PushI
	var_248_int = 16500; // 0x381 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x382 TObjFunc
	return 0; // 0x384 Return
	
Label_901:
	var_249_int = 9107; // 0x385 PushI
	var_250_bool = var_30_string == var_249_int; // 0x386 Eq
	if(var_250_bool == 0) goto Label_919; // 0x387 JumpB
	var_251_string = ""; // 0x388 PushV
	var_251_string = "Neutral"; // 0x389 MovS
	func_610(var_31_bool, var_251_string); // 0x38a Call
	var_252_int = 8284; // 0x38c PushI
	SetMessage(var_252_int); // 0x38d TObjFunc
	ClearReplies(); // 0x38f TObjFunc
	var_253_int = 15224; // 0x391 PushI
	var_254_int = -1; // 0x392 PushI
	var_255_int = 16501; // 0x393 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_256_int = 9106; // 0x397 PushI
	var_257_bool = var_30_string == var_256_int; // 0x398 Eq
	if(var_257_bool == 0) goto Label_937; // 0x399 JumpB
	var_258_string = ""; // 0x39a PushV
	var_258_string = "Neutral"; // 0x39b MovS
	func_610(var_31_bool, var_258_string); // 0x39c Call
	var_259_int = 8283; // 0x39e PushI
	SetMessage(var_259_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_260_int = 15225; // 0x3a3 PushI
	var_261_int = -1; // 0x3a4 PushI
	var_262_int = 16502; // 0x3a5 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_263_int = 9105; // 0x3a9 PushI
	var_264_bool = var_30_string == var_263_int; // 0x3aa Eq
	if(var_264_bool == 0) goto Label_955; // 0x3ab JumpB
	var_265_string = ""; // 0x3ac PushV
	var_265_string = "Neutral"; // 0x3ad MovS
	func_610(var_31_bool, var_265_string); // 0x3ae Call
	var_266_int = 8282; // 0x3b0 PushI
	SetMessage(var_266_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_267_int = 15226; // 0x3b5 PushI
	var_268_int = -1; // 0x3b6 PushI
	var_269_int = 16503; // 0x3b7 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_270_int = 6264; // 0x3bb PushI
	var_271_bool = var_30_string == var_270_int; // 0x3bc Eq
	if(var_271_bool == 0) goto Label_978; // 0x3bd JumpB
	var_272_string = ""; // 0x3be PushV
	var_272_string = "Neutral"; // 0x3bf MovS
	func_610(var_31_bool, var_272_string); // 0x3c0 Call
	var_273_int = 5682; // 0x3c2 PushI
	SetMessage(var_273_int); // 0x3c3 TObjFunc
	ClearReplies(); // 0x3c5 TObjFunc
	var_274_int = 5683; // 0x3c7 PushI
	var_275_int = 6266; // 0x3c8 PushI
	var_276_int = 6265; // 0x3c9 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x3ca TObjFunc
	var_277_int = 5686; // 0x3cc PushI
	var_278_int = -1; // 0x3cd PushI
	var_279_int = 6268; // 0x3ce PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x3cf TObjFunc
	return 0; // 0x3d1 Return
	
Label_978:
	var_280_int = 6266; // 0x3d2 PushI
	var_281_bool = var_30_string == var_280_int; // 0x3d3 Eq
	if(var_281_bool == 0) goto Label_996; // 0x3d4 JumpB
	var_282_string = ""; // 0x3d5 PushV
	var_282_string = "Neutral"; // 0x3d6 MovS
	func_610(var_31_bool, var_282_string); // 0x3d7 Call
	var_283_int = 5684; // 0x3d9 PushI
	SetMessage(var_283_int); // 0x3da TObjFunc
	ClearReplies(); // 0x3dc TObjFunc
	var_284_int = 5685; // 0x3de PushI
	var_285_int = -1; // 0x3df PushI
	var_286_int = 6267; // 0x3e0 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x3e1 TObjFunc
	return 0; // 0x3e3 Return
	
Label_996:
	var_287_int = 6255; // 0x3e4 PushI
	var_288_bool = var_30_string == var_287_int; // 0x3e5 Eq
	if(var_288_bool == 0) goto Label_1019; // 0x3e6 JumpB
	var_289_string = ""; // 0x3e7 PushV
	var_289_string = "Neutral"; // 0x3e8 MovS
	func_610(var_31_bool, var_289_string); // 0x3e9 Call
	var_290_int = 5674; // 0x3eb PushI
	SetMessage(var_290_int); // 0x3ec TObjFunc
	ClearReplies(); // 0x3ee TObjFunc
	var_291_int = 5675; // 0x3f0 PushI
	var_292_int = 6257; // 0x3f1 PushI
	var_293_int = 6256; // 0x3f2 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x3f3 TObjFunc
	var_294_int = 5681; // 0x3f5 PushI
	var_295_int = 6257; // 0x3f6 PushI
	var_296_int = 6262; // 0x3f7 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_297_int = 6257; // 0x3fb PushI
	var_298_bool = var_30_string == var_297_int; // 0x3fc Eq
	if(var_298_bool == 0) goto Label_1037; // 0x3fd JumpB
	var_299_string = ""; // 0x3fe PushV
	var_299_string = "Neutral"; // 0x3ff MovS
	func_610(var_31_bool, var_299_string); // 0x400 Call
	var_300_int = 5676; // 0x402 PushI
	SetMessage(var_300_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_301_int = 5677; // 0x407 PushI
	var_302_int = 6259; // 0x408 PushI
	var_303_int = 6258; // 0x409 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_304_int = 6259; // 0x40d PushI
	var_305_bool = var_30_string == var_304_int; // 0x40e Eq
	if(var_305_bool == 0) goto Label_1060; // 0x40f JumpB
	var_306_string = ""; // 0x410 PushV
	var_306_string = "Neutral"; // 0x411 MovS
	func_610(var_31_bool, var_306_string); // 0x412 Call
	var_307_int = 5678; // 0x414 PushI
	SetMessage(var_307_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_308_int = 5679; // 0x419 PushI
	var_309_int = -1; // 0x41a PushI
	var_310_int = 6260; // 0x41b PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x41c TObjFunc
	var_311_int = 5680; // 0x41e PushI
	var_312_int = -1; // 0x41f PushI
	var_313_int = 6261; // 0x420 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_3_string = 1; // 0x424 TMovB
	var_314_bool = 0; // 0x425 PushV
	func_3643(var_314_bool); // 0x426 Call
	if(var_314_bool == 0) goto Label_1068; // 0x428 JumpB
	lshStopAnimation(); // 0x429 Func
	goto Label_1070; // 0x42b Jump
	
Label_1070:
	return 0; // 0x42e Return
	
Label_1068:
	StopAnimation(); // 0x42c Func
	
Label_1072:
	return 0; // 0x430 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x4df PushI
	if(var_32_int == 0) goto Label_1464; // 0x4e0 JumpB
	func_3068(); // 0x4e2 Call
	var_34_int = 6858; // 0x4e4 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x4e5 Eq
	if(var_35_bool == 0) goto Label_1275; // 0x4e6 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x4e7 PushV
	var_36_object = var_1_object; // 0x4e8 MovT
	var_37_object = var_0_object; // 0x4e9 MovT
	func_3162(); // 0x4ea Call
	var_40_object = Obj(); var_41_object = Obj(); // 0x4ec PushV
	var_40_object = var_1_object; // 0x4ed MovT
	var_41_object = var_0_object; // 0x4ee MovT
	func_3143(); // 0x4ef Call
	var_52_object = Obj(); var_53_object = Obj(); // 0x4f1 PushV
	var_52_object = var_1_object; // 0x4f2 MovT
	var_53_object = var_0_object; // 0x4f3 MovT
	func_3194(); // 0x4f4 Call
	var_70_object = Obj(); var_71_object = Obj(); // 0x4f6 PushV
	var_70_object = var_1_object; // 0x4f7 MovT
	var_71_object = var_0_object; // 0x4f8 MovT
	func_3178(); // 0x4f9 Call
	
Label_1275:
	var_96_int = 6860; // 0x4fb PushI
	var_97_bool = var_31_bool == var_96_int; // 0x4fc Eq
	if(var_97_bool == 0) goto Label_1298; // 0x4fd JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x4fe PushV
	var_98_object = var_1_object; // 0x4ff MovT
	var_99_object = var_0_object; // 0x500 MovT
	func_3162(); // 0x501 Call
	var_100_object = Obj(); var_101_object = Obj(); // 0x503 PushV
	var_100_object = var_1_object; // 0x504 MovT
	var_101_object = var_0_object; // 0x505 MovT
	func_3143(); // 0x506 Call
	var_102_object = Obj(); var_103_object = Obj(); // 0x508 PushV
	var_102_object = var_1_object; // 0x509 MovT
	var_103_object = var_0_object; // 0x50a MovT
	func_3194(); // 0x50b Call
	var_104_object = Obj(); var_105_object = Obj(); // 0x50d PushV
	var_104_object = var_1_object; // 0x50e MovT
	var_105_object = var_0_object; // 0x50f MovT
	func_3178(); // 0x510 Call
	
Label_1298:
	var_106_int = 6270; // 0x512 PushI
	var_107_bool = var_30_string == var_106_int; // 0x513 Eq
	if(var_107_bool == 0) goto Label_1357; // 0x514 JumpB
	var_108_bool = 0; // 0x515 PushV
	var_108_bool = 0; // 0x516 MovB
	var_109_bool = 0; // 0x517 PushV
	var_109_bool = 0; // 0x518 MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x519 PushV
	var_111_object = var_1_object; // 0x51a MovT
	func_3294(var_111_object); // 0x51b Call
	if(var_110_bool == 0) goto Label_1317; // 0x51d JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0x51e PushV
	var_119_object = var_1_object; // 0x51f MovT
	func_3318(var_119_object); // 0x520 Call
	var_124_bool = var_118_bool == 0; // 0x522 Not
	if(var_124_bool == 0) goto Label_1317; // 0x523 JumpB
	var_109_bool = 1; // 0x524 MovB
	
Label_1317:
	if(var_109_bool == 0) goto Label_1325; // 0x525 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x526 PushV
	var_126_object = var_1_object; // 0x527 MovT
	func_3306(var_126_object); // 0x528 Call
	var_131_bool = var_125_bool == 0; // 0x52a Not
	if(var_131_bool == 0) goto Label_1325; // 0x52b JumpB
	var_108_bool = 1; // 0x52c MovB
	
Label_1325:
	if(var_108_bool == 0) goto Label_1357; // 0x52d JumpB
	var_132_string = ""; // 0x52e PushV
	var_132_string = "Neutral"; // 0x52f MovS
	func_1230(var_31_bool, var_132_string); // 0x530 Call
	var_147_int = 5688; // 0x532 PushI
	SetMessage(var_147_int); // 0x533 TObjFunc
	ClearReplies(); // 0x535 TObjFunc
	var_148_bool = 0; var_149_object = Obj(); // 0x537 PushV
	var_149_object = var_1_object; // 0x538 MovT
	func_3258(var_149_object); // 0x539 Call
	var_154_bool = var_148_bool == 0; // 0x53b Not
	if(var_154_bool == 0) goto Label_1346; // 0x53c JumpB
	var_155_int = 6198; // 0x53d PushI
	var_156_int = 6852; // 0x53e PushI
	var_157_int = 6851; // 0x53f PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x540 TObjFunc
	
Label_1346:
	var_158_bool = 0; var_159_object = Obj(); // 0x542 PushV
	var_159_object = var_1_object; // 0x543 MovT
	func_3258(var_159_object); // 0x544 Call
	if(var_158_bool == 0) goto Label_1356; // 0x546 JumpB
	var_160_int = 5689; // 0x547 PushI
	var_161_int = 6272; // 0x548 PushI
	var_162_int = 6271; // 0x549 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x54a TObjFunc
	
Label_1356:
	return 0; // 0x54c Return
	
Label_1357:
	var_163_int = 6272; // 0x54d PushI
	var_164_bool = var_30_string == var_163_int; // 0x54e Eq
	if(var_164_bool == 0) goto Label_1375; // 0x54f JumpB
	var_165_string = ""; // 0x550 PushV
	var_165_string = "Neutral"; // 0x551 MovS
	func_1230(var_31_bool, var_165_string); // 0x552 Call
	var_166_int = 5690; // 0x554 PushI
	SetMessage(var_166_int); // 0x555 TObjFunc
	ClearReplies(); // 0x557 TObjFunc
	var_167_int = 5691; // 0x559 PushI
	var_168_int = 6274; // 0x55a PushI
	var_169_int = 6273; // 0x55b PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x55c TObjFunc
	return 0; // 0x55e Return
	
Label_1375:
	var_170_int = 6274; // 0x55f PushI
	var_171_bool = var_30_string == var_170_int; // 0x560 Eq
	if(var_171_bool == 0) goto Label_1393; // 0x561 JumpB
	var_172_string = ""; // 0x562 PushV
	var_172_string = "Neutral"; // 0x563 MovS
	func_1230(var_31_bool, var_172_string); // 0x564 Call
	var_173_int = 5692; // 0x566 PushI
	SetMessage(var_173_int); // 0x567 TObjFunc
	ClearReplies(); // 0x569 TObjFunc
	var_174_int = 6203; // 0x56b PushI
	var_175_int = 6857; // 0x56c PushI
	var_176_int = 6856; // 0x56d PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x56e TObjFunc
	return 0; // 0x570 Return
	
Label_1393:
	var_177_int = 6852; // 0x571 PushI
	var_178_bool = var_30_string == var_177_int; // 0x572 Eq
	if(var_178_bool == 0) goto Label_1411; // 0x573 JumpB
	var_179_string = ""; // 0x574 PushV
	var_179_string = "Neutral"; // 0x575 MovS
	func_1230(var_31_bool, var_179_string); // 0x576 Call
	var_180_int = 6199; // 0x578 PushI
	SetMessage(var_180_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_181_int = 6200; // 0x57d PushI
	var_182_int = 6854; // 0x57e PushI
	var_183_int = 6853; // 0x57f PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x580 TObjFunc
	return 0; // 0x582 Return
	
Label_1411:
	var_184_int = 6854; // 0x583 PushI
	var_185_bool = var_30_string == var_184_int; // 0x584 Eq
	if(var_185_bool == 0) goto Label_1429; // 0x585 JumpB
	var_186_string = ""; // 0x586 PushV
	var_186_string = "Neutral"; // 0x587 MovS
	func_1230(var_31_bool, var_186_string); // 0x588 Call
	var_187_int = 6201; // 0x58a PushI
	SetMessage(var_187_int); // 0x58b TObjFunc
	ClearReplies(); // 0x58d TObjFunc
	var_188_int = 6202; // 0x58f PushI
	var_189_int = 6857; // 0x590 PushI
	var_190_int = 6855; // 0x591 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x592 TObjFunc
	return 0; // 0x594 Return
	
Label_1429:
	var_191_int = 6857; // 0x595 PushI
	var_192_bool = var_30_string == var_191_int; // 0x596 Eq
	if(var_192_bool == 0) goto Label_1452; // 0x597 JumpB
	var_193_string = ""; // 0x598 PushV
	var_193_string = "Neutral"; // 0x599 MovS
	func_1230(var_31_bool, var_193_string); // 0x59a Call
	var_194_int = 6204; // 0x59c PushI
	SetMessage(var_194_int); // 0x59d TObjFunc
	ClearReplies(); // 0x59f TObjFunc
	var_195_int = 6205; // 0x5a1 PushI
	var_196_int = -1; // 0x5a2 PushI
	var_197_int = 6858; // 0x5a3 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x5a4 TObjFunc
	var_198_int = 6206; // 0x5a6 PushI
	var_199_int = -1; // 0x5a7 PushI
	var_200_int = 6860; // 0x5a8 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x5a9 TObjFunc
	return 0; // 0x5ab Return
	
Label_1452:
	var_3_string = 1; // 0x5ac TMovB
	var_201_bool = 0; // 0x5ad PushV
	func_3643(var_201_bool); // 0x5ae Call
	if(var_201_bool == 0) goto Label_1460; // 0x5b0 JumpB
	lshStopAnimation(); // 0x5b1 Func
	goto Label_1462; // 0x5b3 Jump
	
Label_1462:
	return 0; // 0x5b6 Return
	
Label_1460:
	StopAnimation(); // 0x5b4 Func
	
Label_1464:
	return 0; // 0x5b8 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x67f PushI
	if(var_32_int == 0) goto Label_2303; // 0x680 JumpB
	func_3068(); // 0x682 Call
	var_34_int = 8255; // 0x684 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x685 Eq
	if(var_35_bool == 0) goto Label_1676; // 0x686 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x687 PushV
	var_36_object = var_1_object; // 0x688 MovT
	var_37_object = var_0_object; // 0x689 MovT
	func_3170(); // 0x68a Call
	
Label_1676:
	var_38_int = 8256; // 0x68c PushI
	var_39_bool = var_31_bool == var_38_int; // 0x68d Eq
	if(var_39_bool == 0) goto Label_1684; // 0x68e JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x68f PushV
	var_40_object = var_1_object; // 0x690 MovT
	var_41_object = var_0_object; // 0x691 MovT
	func_3170(); // 0x692 Call
	
Label_1684:
	var_42_int = 8263; // 0x694 PushI
	var_43_bool = var_31_bool == var_42_int; // 0x695 Eq
	if(var_43_bool == 0) goto Label_1692; // 0x696 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x697 PushV
	var_44_object = var_1_object; // 0x698 MovT
	var_45_object = var_0_object; // 0x699 MovT
	func_3170(); // 0x69a Call
	
Label_1692:
	var_46_int = 8264; // 0x69c PushI
	var_47_bool = var_31_bool == var_46_int; // 0x69d Eq
	if(var_47_bool == 0) goto Label_1700; // 0x69e JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x69f PushV
	var_48_object = var_1_object; // 0x6a0 MovT
	var_49_object = var_0_object; // 0x6a1 MovT
	func_3170(); // 0x6a2 Call
	
Label_1700:
	var_50_int = 8242; // 0x6a4 PushI
	var_51_bool = var_31_bool == var_50_int; // 0x6a5 Eq
	if(var_51_bool == 0) goto Label_1708; // 0x6a6 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x6a7 PushV
	var_52_object = var_1_object; // 0x6a8 MovT
	var_53_object = var_0_object; // 0x6a9 MovT
	func_3168(); // 0x6aa Call
	
Label_1708:
	var_54_int = 8243; // 0x6ac PushI
	var_55_bool = var_31_bool == var_54_int; // 0x6ad Eq
	if(var_55_bool == 0) goto Label_1716; // 0x6ae JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x6af PushV
	var_56_object = var_1_object; // 0x6b0 MovT
	var_57_object = var_0_object; // 0x6b1 MovT
	func_3168(); // 0x6b2 Call
	
Label_1716:
	var_58_int = 8234; // 0x6b4 PushI
	var_59_bool = var_31_bool == var_58_int; // 0x6b5 Eq
	if(var_59_bool == 0) goto Label_1724; // 0x6b6 JumpB
	var_60_object = Obj(); var_61_object = Obj(); // 0x6b7 PushV
	var_60_object = var_1_object; // 0x6b8 MovT
	var_61_object = var_0_object; // 0x6b9 MovT
	func_3168(); // 0x6ba Call
	
Label_1724:
	var_62_int = 8237; // 0x6bc PushI
	var_63_bool = var_31_bool == var_62_int; // 0x6bd Eq
	if(var_63_bool == 0) goto Label_1732; // 0x6be JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x6bf PushV
	var_64_object = var_1_object; // 0x6c0 MovT
	var_65_object = var_0_object; // 0x6c1 MovT
	func_3168(); // 0x6c2 Call
	
Label_1732:
	var_66_int = 8248; // 0x6c4 PushI
	var_67_bool = var_30_string == var_66_int; // 0x6c5 Eq
	if(var_67_bool == 0) goto Label_1815; // 0x6c6 JumpB
	var_68_bool = 0; var_69_object = Obj(); // 0x6c7 PushV
	var_69_object = var_1_object; // 0x6c8 MovT
	func_3347(var_69_object); // 0x6c9 Call
	if(var_68_bool == 0) goto Label_1760; // 0x6cb JumpB
	var_70_string = ""; // 0x6cc PushV
	var_70_string = "Neutral"; // 0x6cd MovS
	func_1646(var_31_bool, var_70_string); // 0x6ce Call
	var_85_int = 7472; // 0x6d0 PushI
	SetMessage(var_85_int); // 0x6d1 TObjFunc
	ClearReplies(); // 0x6d3 TObjFunc
	var_86_int = 7473; // 0x6d5 PushI
	var_87_int = 8250; // 0x6d6 PushI
	var_88_int = 8249; // 0x6d7 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x6d8 TObjFunc
	var_89_int = 7488; // 0x6da PushI
	var_90_int = 8252; // 0x6db PushI
	var_91_int = 8265; // 0x6dc PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x6dd TObjFunc
	return 0; // 0x6df Return
	
Label_1760:
	var_92_string = ""; // 0x6e0 PushV
	var_92_string = "Neutral"; // 0x6e1 MovS
	func_1646(var_31_bool, var_92_string); // 0x6e2 Call
	var_93_int = 6943; // 0x6e4 PushI
	SetMessage(var_93_int); // 0x6e5 TObjFunc
	ClearReplies(); // 0x6e7 TObjFunc
	var_94_bool = 0; var_95_object = Obj(); // 0x6e9 PushV
	var_95_object = var_1_object; // 0x6ea MovT
	func_3342(var_95_object); // 0x6eb Call
	if(var_94_bool == 0) goto Label_1779; // 0x6ed JumpB
	var_96_int = 6944; // 0x6ee PushI
	var_97_int = 7651; // 0x6ef PushI
	var_98_int = 7650; // 0x6f0 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x6f1 TObjFunc
	
Label_1779:
	var_99_int = 7464; // 0x6f3 PushI
	var_100_int = 8240; // 0x6f4 PushI
	var_101_int = 8239; // 0x6f5 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x6f6 TObjFunc
	var_102_int = 7504; // 0x6f8 PushI
	var_103_int = 8267; // 0x6f9 PushI
	var_104_int = 8285; // 0x6fa PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x6fb TObjFunc
	return 0; // 0x6fd Return
	
Label_1815:
	var_105_int = 10318; // 0x717 PushI
	var_106_bool = var_30_string == var_105_int; // 0x718 Eq
	if(var_106_bool == 0) goto Label_1833; // 0x719 JumpB
	var_107_string = ""; // 0x71a PushV
	var_107_string = "Neutral"; // 0x71b MovS
	func_1646(var_31_bool, var_107_string); // 0x71c Call
	var_108_int = 9390; // 0x71e PushI
	SetMessage(var_108_int); // 0x71f TObjFunc
	ClearReplies(); // 0x721 TObjFunc
	var_109_int = 9391; // 0x723 PushI
	var_110_int = -1; // 0x724 PushI
	var_111_int = 10319; // 0x725 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x726 TObjFunc
	return 0; // 0x728 Return
	
Label_1833:
	var_112_int = 10304; // 0x729 PushI
	var_113_bool = var_30_string == var_112_int; // 0x72a Eq
	if(var_113_bool == 0) goto Label_1856; // 0x72b JumpB
	var_114_string = ""; // 0x72c PushV
	var_114_string = "Neutral"; // 0x72d MovS
	func_1646(var_31_bool, var_114_string); // 0x72e Call
	var_115_int = 9379; // 0x730 PushI
	SetMessage(var_115_int); // 0x731 TObjFunc
	ClearReplies(); // 0x733 TObjFunc
	var_116_int = 9380; // 0x735 PushI
	var_117_int = 10306; // 0x736 PushI
	var_118_int = 10305; // 0x737 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x738 TObjFunc
	var_119_int = 9387; // 0x73a PushI
	var_120_int = 10306; // 0x73b PushI
	var_121_int = 10313; // 0x73c PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x73d TObjFunc
	return 0; // 0x73f Return
	
Label_1856:
	var_122_int = 10306; // 0x740 PushI
	var_123_bool = var_30_string == var_122_int; // 0x741 Eq
	if(var_123_bool == 0) goto Label_1879; // 0x742 JumpB
	var_124_string = ""; // 0x743 PushV
	var_124_string = "Neutral"; // 0x744 MovS
	func_1646(var_31_bool, var_124_string); // 0x745 Call
	var_125_int = 9381; // 0x747 PushI
	SetMessage(var_125_int); // 0x748 TObjFunc
	ClearReplies(); // 0x74a TObjFunc
	var_126_int = 9382; // 0x74c PushI
	var_127_int = 10308; // 0x74d PushI
	var_128_int = 10307; // 0x74e PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x74f TObjFunc
	var_129_int = 9386; // 0x751 PushI
	var_130_int = 10308; // 0x752 PushI
	var_131_int = 10311; // 0x753 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x754 TObjFunc
	return 0; // 0x756 Return
	
Label_1879:
	var_132_int = 10308; // 0x757 PushI
	var_133_bool = var_30_string == var_132_int; // 0x758 Eq
	if(var_133_bool == 0) goto Label_1902; // 0x759 JumpB
	var_134_string = ""; // 0x75a PushV
	var_134_string = "Neutral"; // 0x75b MovS
	func_1646(var_31_bool, var_134_string); // 0x75c Call
	var_135_int = 9383; // 0x75e PushI
	SetMessage(var_135_int); // 0x75f TObjFunc
	ClearReplies(); // 0x761 TObjFunc
	var_136_int = 9384; // 0x763 PushI
	var_137_int = -1; // 0x764 PushI
	var_138_int = 10309; // 0x765 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x766 TObjFunc
	var_139_int = 9385; // 0x768 PushI
	var_140_int = -1; // 0x769 PushI
	var_141_int = 10310; // 0x76a PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x76b TObjFunc
	return 0; // 0x76d Return
	
Label_1902:
	var_142_int = 8267; // 0x76e PushI
	var_143_bool = var_30_string == var_142_int; // 0x76f Eq
	if(var_143_bool == 0) goto Label_1930; // 0x770 JumpB
	var_144_string = ""; // 0x771 PushV
	var_144_string = "Neutral"; // 0x772 MovS
	func_1646(var_31_bool, var_144_string); // 0x773 Call
	var_145_int = 7489; // 0x775 PushI
	SetMessage(var_145_int); // 0x776 TObjFunc
	ClearReplies(); // 0x778 TObjFunc
	var_146_int = 7490; // 0x77a PushI
	var_147_int = 8269; // 0x77b PushI
	var_148_int = 8268; // 0x77c PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x77d TObjFunc
	var_149_int = 7500; // 0x77f PushI
	var_150_int = 8269; // 0x780 PushI
	var_151_int = 8280; // 0x781 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x782 TObjFunc
	var_152_int = 7501; // 0x784 PushI
	var_153_int = 8283; // 0x785 PushI
	var_154_int = 8282; // 0x786 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x787 TObjFunc
	return 0; // 0x789 Return
	
Label_1930:
	var_155_int = 8283; // 0x78a PushI
	var_156_bool = var_30_string == var_155_int; // 0x78b Eq
	if(var_156_bool == 0) goto Label_1948; // 0x78c JumpB
	var_157_string = ""; // 0x78d PushV
	var_157_string = "Neutral"; // 0x78e MovS
	func_1646(var_31_bool, var_157_string); // 0x78f Call
	var_158_int = 7502; // 0x791 PushI
	SetMessage(var_158_int); // 0x792 TObjFunc
	ClearReplies(); // 0x794 TObjFunc
	var_159_int = 7503; // 0x796 PushI
	var_160_int = -1; // 0x797 PushI
	var_161_int = 8284; // 0x798 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x799 TObjFunc
	return 0; // 0x79b Return
	
Label_1948:
	var_162_int = 8269; // 0x79c PushI
	var_163_bool = var_30_string == var_162_int; // 0x79d Eq
	if(var_163_bool == 0) goto Label_1971; // 0x79e JumpB
	var_164_string = ""; // 0x79f PushV
	var_164_string = "Neutral"; // 0x7a0 MovS
	func_1646(var_31_bool, var_164_string); // 0x7a1 Call
	var_165_int = 7491; // 0x7a3 PushI
	SetMessage(var_165_int); // 0x7a4 TObjFunc
	ClearReplies(); // 0x7a6 TObjFunc
	var_166_int = 7492; // 0x7a8 PushI
	var_167_int = 8271; // 0x7a9 PushI
	var_168_int = 8270; // 0x7aa PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x7ab TObjFunc
	var_169_int = 7499; // 0x7ad PushI
	var_170_int = 8271; // 0x7ae PushI
	var_171_int = 8278; // 0x7af PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x7b0 TObjFunc
	return 0; // 0x7b2 Return
	
Label_1971:
	var_172_int = 8271; // 0x7b3 PushI
	var_173_bool = var_30_string == var_172_int; // 0x7b4 Eq
	if(var_173_bool == 0) goto Label_1994; // 0x7b5 JumpB
	var_174_string = ""; // 0x7b6 PushV
	var_174_string = "Neutral"; // 0x7b7 MovS
	func_1646(var_31_bool, var_174_string); // 0x7b8 Call
	var_175_int = 7493; // 0x7ba PushI
	SetMessage(var_175_int); // 0x7bb TObjFunc
	ClearReplies(); // 0x7bd TObjFunc
	var_176_int = 7494; // 0x7bf PushI
	var_177_int = 8273; // 0x7c0 PushI
	var_178_int = 8272; // 0x7c1 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x7c2 TObjFunc
	var_179_int = 7498; // 0x7c4 PushI
	var_180_int = 8273; // 0x7c5 PushI
	var_181_int = 8276; // 0x7c6 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x7c7 TObjFunc
	return 0; // 0x7c9 Return
	
Label_1994:
	var_182_int = 8273; // 0x7ca PushI
	var_183_bool = var_30_string == var_182_int; // 0x7cb Eq
	if(var_183_bool == 0) goto Label_2017; // 0x7cc JumpB
	var_184_string = ""; // 0x7cd PushV
	var_184_string = "Neutral"; // 0x7ce MovS
	func_1646(var_31_bool, var_184_string); // 0x7cf Call
	var_185_int = 7495; // 0x7d1 PushI
	SetMessage(var_185_int); // 0x7d2 TObjFunc
	ClearReplies(); // 0x7d4 TObjFunc
	var_186_int = 7496; // 0x7d6 PushI
	var_187_int = -1; // 0x7d7 PushI
	var_188_int = 8274; // 0x7d8 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x7d9 TObjFunc
	var_189_int = 7497; // 0x7db PushI
	var_190_int = -1; // 0x7dc PushI
	var_191_int = 8275; // 0x7dd PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x7de TObjFunc
	return 0; // 0x7e0 Return
	
Label_2017:
	var_192_int = 8240; // 0x7e1 PushI
	var_193_bool = var_30_string == var_192_int; // 0x7e2 Eq
	if(var_193_bool == 0) goto Label_2035; // 0x7e3 JumpB
	var_194_string = ""; // 0x7e4 PushV
	var_194_string = "Neutral"; // 0x7e5 MovS
	func_1646(var_31_bool, var_194_string); // 0x7e6 Call
	var_195_int = 7465; // 0x7e8 PushI
	SetMessage(var_195_int); // 0x7e9 TObjFunc
	ClearReplies(); // 0x7eb TObjFunc
	var_196_int = 7466; // 0x7ed PushI
	var_197_int = -1; // 0x7ee PushI
	var_198_int = 8241; // 0x7ef PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x7f0 TObjFunc
	return 0; // 0x7f2 Return
	
Label_2035:
	var_199_int = 7651; // 0x7f3 PushI
	var_200_bool = var_30_string == var_199_int; // 0x7f4 Eq
	if(var_200_bool == 0) goto Label_2058; // 0x7f5 JumpB
	var_201_string = ""; // 0x7f6 PushV
	var_201_string = "Neutral"; // 0x7f7 MovS
	func_1646(var_31_bool, var_201_string); // 0x7f8 Call
	var_202_int = 6945; // 0x7fa PushI
	SetMessage(var_202_int); // 0x7fb TObjFunc
	ClearReplies(); // 0x7fd TObjFunc
	var_203_int = 6946; // 0x7ff PushI
	var_204_int = 7653; // 0x800 PushI
	var_205_int = 7652; // 0x801 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x802 TObjFunc
	var_206_int = 7455; // 0x804 PushI
	var_207_int = 8231; // 0x805 PushI
	var_208_int = 8230; // 0x806 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x807 TObjFunc
	return 0; // 0x809 Return
	
Label_2058:
	var_209_int = 8231; // 0x80a PushI
	var_210_bool = var_30_string == var_209_int; // 0x80b Eq
	if(var_210_bool == 0) goto Label_2076; // 0x80c JumpB
	var_211_string = ""; // 0x80d PushV
	var_211_string = "Neutral"; // 0x80e MovS
	func_1646(var_31_bool, var_211_string); // 0x80f Call
	var_212_int = 7456; // 0x811 PushI
	SetMessage(var_212_int); // 0x812 TObjFunc
	ClearReplies(); // 0x814 TObjFunc
	var_213_int = 7457; // 0x816 PushI
	var_214_int = 8233; // 0x817 PushI
	var_215_int = 8232; // 0x818 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x819 TObjFunc
	return 0; // 0x81b Return
	
Label_2076:
	var_216_int = 8233; // 0x81c PushI
	var_217_bool = var_30_string == var_216_int; // 0x81d Eq
	if(var_217_bool == 0) goto Label_2099; // 0x81e JumpB
	var_218_string = ""; // 0x81f PushV
	var_218_string = "Neutral"; // 0x820 MovS
	func_1646(var_31_bool, var_218_string); // 0x821 Call
	var_219_int = 7458; // 0x823 PushI
	SetMessage(var_219_int); // 0x824 TObjFunc
	ClearReplies(); // 0x826 TObjFunc
	var_220_int = 7459; // 0x828 PushI
	var_221_int = -1; // 0x829 PushI
	var_222_int = 8234; // 0x82a PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x82b TObjFunc
	var_223_int = 7460; // 0x82d PushI
	var_224_int = 8236; // 0x82e PushI
	var_225_int = 8235; // 0x82f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x830 TObjFunc
	return 0; // 0x832 Return
	
Label_2099:
	var_226_int = 8236; // 0x833 PushI
	var_227_bool = var_30_string == var_226_int; // 0x834 Eq
	if(var_227_bool == 0) goto Label_2117; // 0x835 JumpB
	var_228_string = ""; // 0x836 PushV
	var_228_string = "Neutral"; // 0x837 MovS
	func_1646(var_31_bool, var_228_string); // 0x838 Call
	var_229_int = 7461; // 0x83a PushI
	SetMessage(var_229_int); // 0x83b TObjFunc
	ClearReplies(); // 0x83d TObjFunc
	var_230_int = 7462; // 0x83f PushI
	var_231_int = -1; // 0x840 PushI
	var_232_int = 8237; // 0x841 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x842 TObjFunc
	return 0; // 0x844 Return
	
Label_2117:
	var_233_int = 7653; // 0x845 PushI
	var_234_bool = var_30_string == var_233_int; // 0x846 Eq
	if(var_234_bool == 0) goto Label_2140; // 0x847 JumpB
	var_235_string = ""; // 0x848 PushV
	var_235_string = "Neutral"; // 0x849 MovS
	func_1646(var_31_bool, var_235_string); // 0x84a Call
	var_236_int = 6947; // 0x84c PushI
	SetMessage(var_236_int); // 0x84d TObjFunc
	ClearReplies(); // 0x84f TObjFunc
	var_237_int = 7454; // 0x851 PushI
	var_238_int = 8238; // 0x852 PushI
	var_239_int = 8229; // 0x853 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x854 TObjFunc
	var_240_int = 7469; // 0x856 PushI
	var_241_int = 8245; // 0x857 PushI
	var_242_int = 8244; // 0x858 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x859 TObjFunc
	return 0; // 0x85b Return
	
Label_2140:
	var_243_int = 8245; // 0x85c PushI
	var_244_bool = var_30_string == var_243_int; // 0x85d Eq
	if(var_244_bool == 0) goto Label_2158; // 0x85e JumpB
	var_245_string = ""; // 0x85f PushV
	var_245_string = "Neutral"; // 0x860 MovS
	func_1646(var_31_bool, var_245_string); // 0x861 Call
	var_246_int = 7470; // 0x863 PushI
	SetMessage(var_246_int); // 0x864 TObjFunc
	ClearReplies(); // 0x866 TObjFunc
	var_247_int = 7471; // 0x868 PushI
	var_248_int = 8238; // 0x869 PushI
	var_249_int = 8246; // 0x86a PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x86b TObjFunc
	return 0; // 0x86d Return
	
Label_2158:
	var_250_int = 8238; // 0x86e PushI
	var_251_bool = var_30_string == var_250_int; // 0x86f Eq
	if(var_251_bool == 0) goto Label_2181; // 0x870 JumpB
	var_252_string = ""; // 0x871 PushV
	var_252_string = "Neutral"; // 0x872 MovS
	func_1646(var_31_bool, var_252_string); // 0x873 Call
	var_253_int = 7463; // 0x875 PushI
	SetMessage(var_253_int); // 0x876 TObjFunc
	ClearReplies(); // 0x878 TObjFunc
	var_254_int = 7467; // 0x87a PushI
	var_255_int = -1; // 0x87b PushI
	var_256_int = 8242; // 0x87c PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x87d TObjFunc
	var_257_int = 7468; // 0x87f PushI
	var_258_int = -1; // 0x880 PushI
	var_259_int = 8243; // 0x881 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x882 TObjFunc
	return 0; // 0x884 Return
	
Label_2181:
	var_260_int = 8250; // 0x885 PushI
	var_261_bool = var_30_string == var_260_int; // 0x886 Eq
	if(var_261_bool == 0) goto Label_2204; // 0x887 JumpB
	var_262_string = ""; // 0x888 PushV
	var_262_string = "Neutral"; // 0x889 MovS
	func_1646(var_31_bool, var_262_string); // 0x88a Call
	var_263_int = 7474; // 0x88c PushI
	SetMessage(var_263_int); // 0x88d TObjFunc
	ClearReplies(); // 0x88f TObjFunc
	var_264_int = 7475; // 0x891 PushI
	var_265_int = 8252; // 0x892 PushI
	var_266_int = 8251; // 0x893 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x894 TObjFunc
	var_267_int = 7487; // 0x896 PushI
	var_268_int = -1; // 0x897 PushI
	var_269_int = 8264; // 0x898 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x899 TObjFunc
	return 0; // 0x89b Return
	
Label_2204:
	var_270_int = 8252; // 0x89c PushI
	var_271_bool = var_30_string == var_270_int; // 0x89d Eq
	if(var_271_bool == 0) goto Label_2227; // 0x89e JumpB
	var_272_string = ""; // 0x89f PushV
	var_272_string = "Neutral"; // 0x8a0 MovS
	func_1646(var_31_bool, var_272_string); // 0x8a1 Call
	var_273_int = 7476; // 0x8a3 PushI
	SetMessage(var_273_int); // 0x8a4 TObjFunc
	ClearReplies(); // 0x8a6 TObjFunc
	var_274_int = 7477; // 0x8a8 PushI
	var_275_int = 8254; // 0x8a9 PushI
	var_276_int = 8253; // 0x8aa PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x8ab TObjFunc
	var_277_int = 7481; // 0x8ad PushI
	var_278_int = 8258; // 0x8ae PushI
	var_279_int = 8257; // 0x8af PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x8b0 TObjFunc
	return 0; // 0x8b2 Return
	
Label_2227:
	var_280_int = 8258; // 0x8b3 PushI
	var_281_bool = var_30_string == var_280_int; // 0x8b4 Eq
	if(var_281_bool == 0) goto Label_2250; // 0x8b5 JumpB
	var_282_string = ""; // 0x8b6 PushV
	var_282_string = "Neutral"; // 0x8b7 MovS
	func_1646(var_31_bool, var_282_string); // 0x8b8 Call
	var_283_int = 7482; // 0x8ba PushI
	SetMessage(var_283_int); // 0x8bb TObjFunc
	ClearReplies(); // 0x8bd TObjFunc
	var_284_int = 7483; // 0x8bf PushI
	var_285_int = 8260; // 0x8c0 PushI
	var_286_int = 8259; // 0x8c1 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x8c2 TObjFunc
	var_287_int = 7486; // 0x8c4 PushI
	var_288_int = -1; // 0x8c5 PushI
	var_289_int = 8263; // 0x8c6 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x8c7 TObjFunc
	return 0; // 0x8c9 Return
	
Label_2250:
	var_290_int = 8260; // 0x8ca PushI
	var_291_bool = var_30_string == var_290_int; // 0x8cb Eq
	if(var_291_bool == 0) goto Label_2268; // 0x8cc JumpB
	var_292_string = ""; // 0x8cd PushV
	var_292_string = "Neutral"; // 0x8ce MovS
	func_1646(var_31_bool, var_292_string); // 0x8cf Call
	var_293_int = 7484; // 0x8d1 PushI
	SetMessage(var_293_int); // 0x8d2 TObjFunc
	ClearReplies(); // 0x8d4 TObjFunc
	var_294_int = 7485; // 0x8d6 PushI
	var_295_int = 8254; // 0x8d7 PushI
	var_296_int = 8261; // 0x8d8 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x8d9 TObjFunc
	return 0; // 0x8db Return
	
Label_2268:
	var_297_int = 8254; // 0x8dc PushI
	var_298_bool = var_30_string == var_297_int; // 0x8dd Eq
	if(var_298_bool == 0) goto Label_2291; // 0x8de JumpB
	var_299_string = ""; // 0x8df PushV
	var_299_string = "Neutral"; // 0x8e0 MovS
	func_1646(var_31_bool, var_299_string); // 0x8e1 Call
	var_300_int = 7478; // 0x8e3 PushI
	SetMessage(var_300_int); // 0x8e4 TObjFunc
	ClearReplies(); // 0x8e6 TObjFunc
	var_301_int = 7479; // 0x8e8 PushI
	var_302_int = -1; // 0x8e9 PushI
	var_303_int = 8255; // 0x8ea PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x8eb TObjFunc
	var_304_int = 7480; // 0x8ed PushI
	var_305_int = -1; // 0x8ee PushI
	var_306_int = 8256; // 0x8ef PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x8f0 TObjFunc
	return 0; // 0x8f2 Return
	
Label_2291:
	var_3_string = 1; // 0x8f3 TMovB
	var_307_bool = 0; // 0x8f4 PushV
	func_3643(var_307_bool); // 0x8f5 Call
	if(var_307_bool == 0) goto Label_2299; // 0x8f7 JumpB
	lshStopAnimation(); // 0x8f8 Func
	goto Label_2301; // 0x8fa Jump
	
Label_2301:
	return 0; // 0x8fd Return
	
Label_2299:
	StopAnimation(); // 0x8fb Func
	
Label_2303:
	return 0; // 0x8ff Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x9a8 PushI
	if(var_32_int == 0) goto Label_2616; // 0x9a9 JumpB
	func_3068(); // 0x9ab Call
	var_34_int = 10996; // 0x9ad PushI
	var_35_bool = var_30_string == var_34_int; // 0x9ae Eq
	if(var_35_bool == 0) goto Label_2530; // 0x9af JumpB
	var_36_bool = 0; var_37_object = Obj(); // 0x9b0 PushV
	var_37_object = var_1_object; // 0x9b1 MovT
	func_3480(var_37_object); // 0x9b2 Call
	if(var_36_bool == 0) goto Label_2515; // 0x9b4 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x9b5 PushV
	var_44_object = var_1_object; // 0x9b6 MovT
	var_45_object = var_0_object; // 0x9b7 MovT
	func_3246(); // 0x9b8 Call
	var_48_string = ""; // 0x9ba PushV
	var_48_string = "Neutral"; // 0x9bb MovS
	func_2455(var_31_bool, var_48_string); // 0x9bc Call
	var_63_int = 9978; // 0x9be PushI
	SetMessage(var_63_int); // 0x9bf TObjFunc
	ClearReplies(); // 0x9c1 TObjFunc
	var_64_int = 9979; // 0x9c3 PushI
	var_65_int = 10998; // 0x9c4 PushI
	var_66_int = 10997; // 0x9c5 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x9c6 TObjFunc
	var_67_int = 9990; // 0x9c8 PushI
	var_68_int = 10998; // 0x9c9 PushI
	var_69_int = 11009; // 0x9ca PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x9cb TObjFunc
	var_70_int = 9991; // 0x9cd PushI
	var_71_int = 10998; // 0x9ce PushI
	var_72_int = 11011; // 0x9cf PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x9d0 TObjFunc
	return 0; // 0x9d2 Return
	
Label_2515:
	var_73_string = ""; // 0x9d3 PushV
	var_73_string = "Neutral"; // 0x9d4 MovS
	func_2455(var_31_bool, var_73_string); // 0x9d5 Call
	var_74_int = 15318; // 0x9d7 PushI
	SetMessage(var_74_int); // 0x9d8 TObjFunc
	ClearReplies(); // 0x9da TObjFunc
	var_75_int = 15319; // 0x9dc PushI
	var_76_int = -1; // 0x9dd PushI
	var_77_int = 16557; // 0x9de PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x9df TObjFunc
	return 0; // 0x9e1 Return
	
Label_2530:
	var_78_int = 10998; // 0x9e2 PushI
	var_79_bool = var_30_string == var_78_int; // 0x9e3 Eq
	if(var_79_bool == 0) goto Label_2558; // 0x9e4 JumpB
	var_80_string = ""; // 0x9e5 PushV
	var_80_string = "Neutral"; // 0x9e6 MovS
	func_2455(var_31_bool, var_80_string); // 0x9e7 Call
	var_81_int = 9980; // 0x9e9 PushI
	SetMessage(var_81_int); // 0x9ea TObjFunc
	ClearReplies(); // 0x9ec TObjFunc
	var_82_int = 9981; // 0x9ee PushI
	var_83_int = 11000; // 0x9ef PushI
	var_84_int = 10999; // 0x9f0 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x9f1 TObjFunc
	var_85_int = 9988; // 0x9f3 PushI
	var_86_int = 11000; // 0x9f4 PushI
	var_87_int = 11006; // 0x9f5 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x9f6 TObjFunc
	var_88_int = 9989; // 0x9f8 PushI
	var_89_int = -1; // 0x9f9 PushI
	var_90_int = 11008; // 0x9fa PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x9fb TObjFunc
	return 0; // 0x9fd Return
	
Label_2558:
	var_91_int = 11000; // 0x9fe PushI
	var_92_bool = var_30_string == var_91_int; // 0x9ff Eq
	if(var_92_bool == 0) goto Label_2581; // 0xa00 JumpB
	var_93_string = ""; // 0xa01 PushV
	var_93_string = "Neutral"; // 0xa02 MovS
	func_2455(var_31_bool, var_93_string); // 0xa03 Call
	var_94_int = 9982; // 0xa05 PushI
	SetMessage(var_94_int); // 0xa06 TObjFunc
	ClearReplies(); // 0xa08 TObjFunc
	var_95_int = 9983; // 0xa0a PushI
	var_96_int = -1; // 0xa0b PushI
	var_97_int = 11001; // 0xa0c PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xa0d TObjFunc
	var_98_int = 9984; // 0xa0f PushI
	var_99_int = 11003; // 0xa10 PushI
	var_100_int = 11002; // 0xa11 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xa12 TObjFunc
	return 0; // 0xa14 Return
	
Label_2581:
	var_101_int = 11003; // 0xa15 PushI
	var_102_bool = var_30_string == var_101_int; // 0xa16 Eq
	if(var_102_bool == 0) goto Label_2604; // 0xa17 JumpB
	var_103_string = ""; // 0xa18 PushV
	var_103_string = "Neutral"; // 0xa19 MovS
	func_2455(var_31_bool, var_103_string); // 0xa1a Call
	var_104_int = 9985; // 0xa1c PushI
	SetMessage(var_104_int); // 0xa1d TObjFunc
	ClearReplies(); // 0xa1f TObjFunc
	var_105_int = 9986; // 0xa21 PushI
	var_106_int = -1; // 0xa22 PushI
	var_107_int = 11004; // 0xa23 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xa24 TObjFunc
	var_108_int = 9987; // 0xa26 PushI
	var_109_int = -1; // 0xa27 PushI
	var_110_int = 11005; // 0xa28 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xa29 TObjFunc
	return 0; // 0xa2b Return
	
Label_2604:
	var_3_string = 1; // 0xa2c TMovB
	var_111_bool = 0; // 0xa2d PushV
	func_3643(var_111_bool); // 0xa2e Call
	if(var_111_bool == 0) goto Label_2612; // 0xa30 JumpB
	lshStopAnimation(); // 0xa31 Func
	goto Label_2614; // 0xa33 Jump
	
Label_2614:
	return 0; // 0xa36 Return
	
Label_2612:
	StopAnimation(); // 0xa34 Func
	
Label_2616:
	return 0; // 0xa38 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 1; // 0xae3 PushI
	if(var_32_int == 0) goto Label_2972; // 0xae4 JumpB
	func_3068(); // 0xae6 Call
	var_34_int = 12400; // 0xae8 PushI
	var_35_bool = var_31_int == var_34_int; // 0xae9 Eq
	if(var_35_bool == 0) goto Label_2800; // 0xaea JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xaeb PushV
	var_36_object = var_1_object; // 0xaec MovT
	var_37_object = var_0_object; // 0xaed MovT
	func_3252(); // 0xaee Call
	
Label_2800:
	var_40_int = 12399; // 0xaf0 PushI
	var_41_bool = var_30_int == var_40_int; // 0xaf1 Eq
	if(var_41_bool == 0) goto Label_2855; // 0xaf2 JumpB
	var_42_string = ""; // 0xaf3 PushV
	var_42_string = "Neutral"; // 0xaf4 MovS
	func_2770(var_31_int, var_42_string); // 0xaf5 Call
	var_57_int = 11211; // 0xaf7 PushI
	SetMessage(var_57_int); // 0xaf8 TObjFunc
	ClearReplies(); // 0xafa TObjFunc
	var_58_bool = 0; // 0xafc PushV
	var_58_bool = 1; // 0xafd MovB
	var_59_bool = 0; // 0xafe PushV
	var_59_bool = 0; // 0xaff MovB
	var_60_bool = 0; var_61_object = Obj(); // 0xb00 PushV
	var_61_object = var_1_object; // 0xb01 MovT
	func_3362(var_61_object); // 0xb02 Call
	if(var_60_bool == 0) goto Label_2827; // 0xb04 JumpB
	var_68_bool = 0; var_69_object = Obj(); // 0xb05 PushV
	var_69_object = var_1_object; // 0xb06 MovT
	func_3504(var_69_object); // 0xb07 Call
	if(var_68_bool == 0) goto Label_2827; // 0xb09 JumpB
	var_59_bool = 1; // 0xb0a MovB
	
Label_2827:
	if(var_59_bool == 0) goto Label_2843; // 0xb0b JumpB
	var_74_bool = 0; // 0xb0c PushV
	var_74_bool = 0; // 0xb0d MovB
	var_75_bool = 0; var_76_object = Obj(); // 0xb0e PushV
	var_76_object = var_1_object; // 0xb0f MovT
	func_3492(var_76_object); // 0xb10 Call
	if(var_75_bool == 0) goto Label_2841; // 0xb12 JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0xb13 PushV
	var_82_object = var_1_object; // 0xb14 MovT
	func_3504(var_82_object); // 0xb15 Call
	if(var_81_bool == 0) goto Label_2841; // 0xb17 JumpB
	var_74_bool = 1; // 0xb18 MovB
	
Label_2841:
	if(var_74_bool == 0) goto Label_2843; // 0xb19 JumpB
	var_58_bool = 0; // 0xb1a MovB
	
Label_2843:
	if(var_58_bool == 0) goto Label_2849; // 0xb1b JumpB
	var_83_int = 11212; // 0xb1c PushI
	var_84_int = 12401; // 0xb1d PushI
	var_85_int = 12400; // 0xb1e PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xb1f TObjFunc
	
Label_2849:
	var_86_int = 15335; // 0xb21 PushI
	var_87_int = -1; // 0xb22 PushI
	var_88_int = 16558; // 0xb23 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xb24 TObjFunc
	return 0; // 0xb26 Return
	
Label_2855:
	var_89_int = 12401; // 0xb27 PushI
	var_90_bool = var_30_int == var_89_int; // 0xb28 Eq
	if(var_90_bool == 0) goto Label_2878; // 0xb29 JumpB
	var_91_string = ""; // 0xb2a PushV
	var_91_string = "Neutral"; // 0xb2b MovS
	func_2770(var_31_int, var_91_string); // 0xb2c Call
	var_92_int = 11213; // 0xb2e PushI
	SetMessage(var_92_int); // 0xb2f TObjFunc
	ClearReplies(); // 0xb31 TObjFunc
	var_93_int = 11214; // 0xb33 PushI
	var_94_int = 12403; // 0xb34 PushI
	var_95_int = 12402; // 0xb35 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xb36 TObjFunc
	var_96_int = 11223; // 0xb38 PushI
	var_97_int = 12413; // 0xb39 PushI
	var_98_int = 12412; // 0xb3a PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xb3b TObjFunc
	return 0; // 0xb3d Return
	
Label_2878:
	var_99_int = 12413; // 0xb3e PushI
	var_100_bool = var_30_int == var_99_int; // 0xb3f Eq
	if(var_100_bool == 0) goto Label_2896; // 0xb40 JumpB
	var_101_string = ""; // 0xb41 PushV
	var_101_string = "Neutral"; // 0xb42 MovS
	func_2770(var_31_int, var_101_string); // 0xb43 Call
	var_102_int = 11224; // 0xb45 PushI
	SetMessage(var_102_int); // 0xb46 TObjFunc
	ClearReplies(); // 0xb48 TObjFunc
	var_103_int = 11225; // 0xb4a PushI
	var_104_int = 12405; // 0xb4b PushI
	var_105_int = 12414; // 0xb4c PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xb4d TObjFunc
	return 0; // 0xb4f Return
	
Label_2896:
	var_106_int = 12403; // 0xb50 PushI
	var_107_bool = var_30_int == var_106_int; // 0xb51 Eq
	if(var_107_bool == 0) goto Label_2919; // 0xb52 JumpB
	var_108_string = ""; // 0xb53 PushV
	var_108_string = "Neutral"; // 0xb54 MovS
	func_2770(var_31_int, var_108_string); // 0xb55 Call
	var_109_int = 11215; // 0xb57 PushI
	SetMessage(var_109_int); // 0xb58 TObjFunc
	ClearReplies(); // 0xb5a TObjFunc
	var_110_int = 11216; // 0xb5c PushI
	var_111_int = 12405; // 0xb5d PushI
	var_112_int = 12404; // 0xb5e PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xb5f TObjFunc
	var_113_int = 11220; // 0xb61 PushI
	var_114_int = 12409; // 0xb62 PushI
	var_115_int = 12408; // 0xb63 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xb64 TObjFunc
	return 0; // 0xb66 Return
	
Label_2919:
	var_116_int = 12409; // 0xb67 PushI
	var_117_bool = var_30_int == var_116_int; // 0xb68 Eq
	if(var_117_bool == 0) goto Label_2937; // 0xb69 JumpB
	var_118_string = ""; // 0xb6a PushV
	var_118_string = "Neutral"; // 0xb6b MovS
	func_2770(var_31_int, var_118_string); // 0xb6c Call
	var_119_int = 11221; // 0xb6e PushI
	SetMessage(var_119_int); // 0xb6f TObjFunc
	ClearReplies(); // 0xb71 TObjFunc
	var_120_int = 11222; // 0xb73 PushI
	var_121_int = 12405; // 0xb74 PushI
	var_122_int = 12410; // 0xb75 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xb76 TObjFunc
	return 0; // 0xb78 Return
	
Label_2937:
	var_123_int = 12405; // 0xb79 PushI
	var_124_bool = var_30_int == var_123_int; // 0xb7a Eq
	if(var_124_bool == 0) goto Label_2960; // 0xb7b JumpB
	var_125_string = ""; // 0xb7c PushV
	var_125_string = "Neutral"; // 0xb7d MovS
	func_2770(var_31_int, var_125_string); // 0xb7e Call
	var_126_int = 11217; // 0xb80 PushI
	SetMessage(var_126_int); // 0xb81 TObjFunc
	ClearReplies(); // 0xb83 TObjFunc
	var_127_int = 11218; // 0xb85 PushI
	var_128_int = -1; // 0xb86 PushI
	var_129_int = 12406; // 0xb87 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xb88 TObjFunc
	var_130_int = 11219; // 0xb8a PushI
	var_131_int = -1; // 0xb8b PushI
	var_132_int = 12407; // 0xb8c PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xb8d TObjFunc
	return 0; // 0xb8f Return
	
Label_2960:
	var_3_string = 1; // 0xb90 TMovB
	var_133_bool = 0; // 0xb91 PushV
	func_3643(var_133_bool); // 0xb92 Call
	if(var_133_bool == 0) goto Label_2968; // 0xb94 JumpB
	lshStopAnimation(); // 0xb95 Func
	goto Label_2970; // 0xb97 Jump
	
Label_2970:
	return 0; // 0xb9a Return
	
Label_2968:
	StopAnimation(); // 0xb98 Func
	
Label_2972:
	return 0; // 0xb9c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_3645(); // 0x7 Call
	var_31_bool = 0; // 0x9 PushV
	func_2985(var_31_bool); // 0xa Call
	var_34_bool = var_31_bool == 0; // 0xc Not
	if(var_34_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_35_string = ""; // 0x13 PushV
	var_35_string = "Neutral"; // 0x14 MovS
	func_3050(var_35_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_2304(var_0_object, var_475_int, var_476_object)
{
	var_478_object = Obj(); var_479_bool = 0; var_480_int = 0; var_481_bool = 0; var_482_object = Obj(); var_483_bool = 0; var_484_int = 0; var_485_bool = 0; // 0x900 PushV
	var_0_object = var_476_object; // 0x901 TMov
	var_486_bool = 0; var_487_object = Obj(); // 0x902 PushV
	var_487_object = var_476_object; // 0x903 Mov
	func_2990(var_487_object); // 0x904 Call
	var_488_bool = var_486_bool == 0; // 0x906 Not
	if(var_488_bool == 0) goto Label_2314; // 0x907 JumpB
	var_475_int = -2; // 0x908 MovI
	return 8; // 0x909 Return
	
Label_2314:
	CreateDialog(var_482_object); // 0x90a Func
	var_489_int = 0; // 0x90c PushV
	func_3639(var_489_int); // 0x90d Call
	SetNPCName(var_489_int); // 0x90f ObjFunc
	var_490_string = ""; // 0x911 PushV
	func_3641(var_490_string); // 0x912 Call
	SetPhoto(var_490_string); // 0x914 ObjFunc
	var_491_int = 0; // 0x916 PushV
	func_3622(var_491_int); // 0x917 Call
	SetPlayerName(var_491_int); // 0x919 ObjFunc
	var_484_int = -1; // 0x91b MovI
	IsOverrideActive(var_483_bool); // 0x91c Func
	var_492_bool = var_483_bool; // 0x91e Push
	if(var_492_bool == 0) goto Label_2338; // 0x91f JumpB
	var_475_int = -2; // 0x920 MovI
	return 8; // 0x921 Return
	
Label_2338:
	DoDialog(var_482_object); // 0x922 Func
	var_493_object = Obj(); var_494_object = Obj(); // 0x924 PushV
	var_493_object = var_476_object; // 0x925 Mov
	var_494_object = var_482_object; // 0x926 Mov
	TaskCall(11); // 0x927 TaskCall
	func_2367(var_495_object, var_496_object, var_497_string, var_498_bool, var_493_object, var_494_object); // 0x928 Call
	TaskReturn(); // 0x929 TaskReturn
	IsDialogEnd(var_485_bool); // 0x92b ObjFunc
	
Label_2349:
	var_538_bool = var_485_bool == 0; // 0x92d Not
	if(var_538_bool == 0) goto Label_2356; // 0x92e JumpB
	sync(); // 0x92f Func
	IsDialogEnd(var_485_bool); // 0x931 ObjFunc
	goto Label_2349; // 0x933 Jump
	
Label_2356:
	var_539_object = Obj(); // 0x934 PushV
	var_539_object = var_476_object; // 0x935 Mov
	func_3046(); // 0x936 Call
	StopDialog(var_482_object); // 0x938 Func
	GetReturnValue(var_484_int); // 0x93a ObjFunc
	var_475_int = var_484_int; // 0x93c Mov
	return 8; // 0x93d Return
}


func_3330(var_99_bool)
{
	var_101_int = 0; var_102_string = ""; // 0xd03 PushV
	var_102_string = "d1q01FirstGeorgVisit"; // 0xd04 MovS
	func_3085(var_101_int, var_102_string); // 0xd05 Call
	var_105_int = 1; // 0xd07 PushI
	var_106_bool = var_101_int == var_105_int; // 0xd08 Eq
	if(var_106_bool == 0) goto Label_3340; // 0xd09 JumpB
	var_99_bool = 1; // 0xd0a MovB
	return 0; // 0xd0b Return
	
Label_3340:
	var_99_bool = 0; // 0xd0c MovB
	return 0; // 0xd0d Return
}


func_3075(var_70_cvector, var_71_cvector)
{
	var_73_float = 0; var_74_float = 0; // 0xc03 PushV
	var_75_int = var_71_cvector | var_71_cvector; // 0xc04 Or
	var_74_float = sqrt(var_75_int); // 0xc05 Sqrt2
	var_76_float = 0.0; // 0xc06 PushF
	var_77_bool = var_74_float < var_76_float; // 0xc07 LT
	if(var_77_bool == 0) goto Label_3083; // 0xc08 JumpB
	var_70_cvector = CVector(0.0, 0.0, 0.0); // 0xc09 MovV
	return 2; // 0xc0a Return
	
Label_3083:
	var_70_cvector = var_71_cvector / var_71_cvector; // 0xc0b Div2
	return 2; // 0xc0c Return
}


func_3589(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; // 0xe05 PushV
	GetMainOutdoorScene(var_82_object); // 0xe06 Func
	var_84_bool = var_82_object == 0; // 0xe08 NullEq
	if(var_84_bool == 0) goto Label_3598; // 0xe09 JumpB
	var_85_string = "Can't find main outdoor scene"; // 0xe0a PushS
	Trace(var_85_string); // 0xe0b Func
	return 8; // 0xe0d Return
	
Label_3598:
	GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector); // 0xe0e ObjFunc
	var_86_bool = var_83_bool == 0; // 0xe10 Not
	if(var_86_bool == 0) goto Label_3608; // 0xe11 JumpB
	var_87_string = "Warning: outdoor scene locator "; // 0xe12 PushS
	var_88_int = var_87_string + var_73_string; // 0xe13 Add
	var_89_string = " doesnt exist"; // 0xe14 PushS
	var_90_int = var_88_int + var_89_string; // 0xe15 Add
	Trace(var_90_int); // 0xe16 Func
	
Label_3608:
	GetMap(var_72_object); // 0xe18 ObjFunc
	var_91_bool = var_72_object == 0; // 0xe1a NullEq
	if(var_91_bool == 0) goto Label_3616; // 0xe1b JumpB
	var_92_string = "Can't find map"; // 0xe1c PushS
	Trace(var_92_string); // 0xe1d Func
	return 8; // 0xe1f Return
	
Label_3616:
	var_93_float = GetByIndex(var_80_cvector, 0); // 0xe20 PushE
	var_94_float = GetByIndex(var_80_cvector, 2); // 0xe21 PushE
	SetMapParams(var_93_float, var_94_float, var_74_float); // 0xe22 ObjFunc
	return 8; // 0xe24 Return
}


func_3085(var_62_int, var_63_string)
{
	var_64_int = 0; var_65_int = 0; // 0xc0d PushV
	GetVariable(var_63_string, var_65_int); // 0xc0e Func
	var_62_int = var_65_int; // 0xc10 Mov
	return 2; // 0xc11 Return
}


func_3342(var_94_bool)
{
	var_94_bool = 1; // 0xd0f MovB
	return 0; // 0xd10 Return
}


func_3090(var_42_string, var_43_bool)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xc12 PushV
	FindActor(var_45_object, var_42_string); // 0xc13 Func
	var_46_bool = var_45_object == 0; // 0xc15 Not
	if(var_46_bool == 0) goto Label_3101; // 0xc16 JumpB
	var_47_string = "Door "; // 0xc17 PushS
	var_48_int = var_47_string + var_42_string; // 0xc18 Add
	var_49_string = " not found"; // 0xc19 PushS
	var_50_int = var_48_int + var_49_string; // 0xc1a Add
	Trace(var_50_int); // 0xc1b Func
	
Label_3101:
	var_51_string = "locked"; // 0xc1d PushS
	SetProperty(var_51_string, var_43_bool); // 0xc1e ObjFunc
	return 2; // 0xc20 Return
}


func_3347(var_68_bool)
{
	var_68_bool = 1; // 0xd14 MovB
	return 0; // 0xd15 Return
}


func_3352(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj(); // 0xd19 PushV
	var_143_object = var_141_object; // 0xd1a Mov
	func_3540(var_143_object); // 0xd1b Call
	if(var_142_bool == 0) goto Label_3360; // 0xd1d JumpB
	var_140_bool = 1; // 0xd1e MovB
	return 0; // 0xd1f Return
	
Label_3360:
	var_140_bool = 0; // 0xd20 MovB
	return 0; // 0xd21 Return
}


func_3106(var_67_float)
{
	var_68_float = 0; var_69_float = 0; // 0xc22 PushV
	GetGameTime(var_69_float); // 0xc23 Func
	var_67_float = var_69_float; // 0xc25 Mov
	return 2; // 0xc26 Return
}


func_3362(var_60_bool)
{
	var_62_int = 0; var_63_string = ""; // 0xd23 PushV
	var_63_string = "d4q03"; // 0xd24 MovS
	func_3085(var_62_int, var_63_string); // 0xd25 Call
	var_66_int = 2; // 0xd27 PushI
	var_67_bool = var_62_int == var_66_int; // 0xd28 Eq
	if(var_67_bool == 0) goto Label_3372; // 0xd29 JumpB
	var_60_bool = 1; // 0xd2a MovB
	return 0; // 0xd2b Return
	
Label_3372:
	var_60_bool = 0; // 0xd2c MovB
	return 0; // 0xd2d Return
}


func_3622(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0xe26 PushV
	var_91_string = "player"; // 0xe27 PushS
	GetVariable(var_91_string, var_90_int); // 0xe28 Func
	var_92_int = 0; // 0xe2a PushI
	var_93_bool = var_90_int == var_92_int; // 0xe2b Eq
	if(var_93_bool == 0) goto Label_3632; // 0xe2c JumpB
	var_88_int = 200001; // 0xe2d MovI
	return 2; // 0xe2e Return
	
Label_3632:
	var_94_int = 1; // 0xe30 PushI
	var_95_bool = var_90_int == var_94_int; // 0xe31 Eq
	if(var_95_bool == 0) goto Label_3637; // 0xe32 JumpB
	var_88_int = 200002; // 0xe33 MovI
	return 2; // 0xe34 Return
	
Label_3637:
	var_88_int = 200003; // 0xe35 MovI
	return 2; // 0xe36 Return
}


func_3111(var_143_int)
{
	var_144_float = 0; var_145_float = 0; // 0xc27 PushV
	GetGameTime(var_145_float); // 0xc28 Func
	var_146_int = 1; // 0xc2a PushI
	var_147_int = 0; // 0xc2b PushV
	var_148_int = 24; // 0xc2c PushI
	var_147_int = var_145_float / var_145_float; // 0xc2d Div2
	var_143_int = var_146_int + var_147_int; // 0xc2e Add2
	return 2; // 0xc2f Return
}


func_3374(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj(); // 0xd2f PushV
	var_121_object = var_119_object; // 0xd30 Mov
	func_3551(var_121_object); // 0xd31 Call
	if(var_120_bool == 0) goto Label_3382; // 0xd33 JumpB
	var_118_bool = 1; // 0xd34 MovB
	return 0; // 0xd35 Return
	
Label_3382:
	var_118_bool = 0; // 0xd36 MovB
	return 0; // 0xd37 Return
}


func_3120(var_123_int)
{
	var_124_float = 0; var_125_float = 0; // 0xc30 PushV
	GetGameTime(var_125_float); // 0xc31 Func
	var_126_int = 0; // 0xc33 PushV
	var_126_int = var_125_float; // 0xc34 Mov
	var_127_int = 24; // 0xc35 PushI
	var_123_int = var_126_int % var_127_int; // 0xc36 Mod2
	return 2; // 0xc37 Return
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x31 PushV
	var_0_object = var_35_object; // 0x32 TMov
	var_45_bool = 0; var_46_object = Obj(); // 0x33 PushV
	var_46_object = var_35_object; // 0x34 Mov
	func_2990(var_46_object); // 0x35 Call
	var_85_bool = var_45_bool == 0; // 0x37 Not
	if(var_85_bool == 0) goto Label_59; // 0x38 JumpB
	var_34_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_41_object); // 0x3b Func
	var_86_int = 0; // 0x3d PushV
	func_3639(var_86_int); // 0x3e Call
	SetNPCName(var_86_int); // 0x40 ObjFunc
	var_87_string = ""; // 0x42 PushV
	func_3641(var_87_string); // 0x43 Call
	SetPhoto(var_87_string); // 0x45 ObjFunc
	var_88_int = 0; // 0x47 PushV
	func_3622(var_88_int); // 0x48 Call
	SetPlayerName(var_88_int); // 0x4a ObjFunc
	var_43_int = -1; // 0x4c MovI
	IsOverrideActive(var_42_bool); // 0x4d Func
	var_96_bool = var_42_bool; // 0x4f Push
	if(var_96_bool == 0) goto Label_83; // 0x50 JumpB
	var_34_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_41_object); // 0x53 Func
	var_97_object = Obj(); var_98_object = Obj(); // 0x55 PushV
	var_97_object = var_35_object; // 0x56 Mov
	var_98_object = var_41_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_44_bool); // 0x5c ObjFunc
	
Label_94:
	var_138_bool = var_44_bool == 0; // 0x5e Not
	if(var_138_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_44_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_139_object = Obj(); // 0x65 PushV
	var_139_object = var_35_object; // 0x66 Mov
	func_3046(); // 0x67 Call
	StopDialog(var_41_object); // 0x69 Func
	GetReturnValue(var_43_int); // 0x6b ObjFunc
	var_34_int = var_43_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1073(var_0_object, var_155_int, var_156_object)
{
	var_158_object = Obj(); var_159_bool = 0; var_160_int = 0; var_161_bool = 0; var_162_object = Obj(); var_163_bool = 0; var_164_int = 0; var_165_bool = 0; // 0x431 PushV
	var_0_object = var_156_object; // 0x432 TMov
	var_166_bool = 0; var_167_object = Obj(); // 0x433 PushV
	var_167_object = var_156_object; // 0x434 Mov
	func_2990(var_167_object); // 0x435 Call
	var_168_bool = var_166_bool == 0; // 0x437 Not
	if(var_168_bool == 0) goto Label_1083; // 0x438 JumpB
	var_155_int = -2; // 0x439 MovI
	return 8; // 0x43a Return
	
Label_1083:
	CreateDialog(var_162_object); // 0x43b Func
	var_169_int = 0; // 0x43d PushV
	func_3639(var_169_int); // 0x43e Call
	SetNPCName(var_169_int); // 0x440 ObjFunc
	var_170_string = ""; // 0x442 PushV
	func_3641(var_170_string); // 0x443 Call
	SetPhoto(var_170_string); // 0x445 ObjFunc
	var_171_int = 0; // 0x447 PushV
	func_3622(var_171_int); // 0x448 Call
	SetPlayerName(var_171_int); // 0x44a ObjFunc
	var_164_int = -1; // 0x44c MovI
	IsOverrideActive(var_163_bool); // 0x44d Func
	var_172_bool = var_163_bool; // 0x44f Push
	if(var_172_bool == 0) goto Label_1107; // 0x450 JumpB
	var_155_int = -2; // 0x451 MovI
	return 8; // 0x452 Return
	
Label_1107:
	DoDialog(var_162_object); // 0x453 Func
	var_173_object = Obj(); var_174_object = Obj(); // 0x455 PushV
	var_173_object = var_156_object; // 0x456 Mov
	var_174_object = var_162_object; // 0x457 Mov
	TaskCall(7); // 0x458 TaskCall
	func_1136(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x459 Call
	TaskReturn(); // 0x45a TaskReturn
	IsDialogEnd(var_165_bool); // 0x45c ObjFunc
	
Label_1118:
	var_231_bool = var_165_bool == 0; // 0x45e Not
	if(var_231_bool == 0) goto Label_1125; // 0x45f JumpB
	sync(); // 0x460 Func
	IsDialogEnd(var_165_bool); // 0x462 ObjFunc
	goto Label_1118; // 0x464 Jump
	
Label_1125:
	var_232_object = Obj(); // 0x465 PushV
	var_232_object = var_156_object; // 0x466 Mov
	func_3046(); // 0x467 Call
	StopDialog(var_162_object); // 0x469 Func
	GetReturnValue(var_164_int); // 0x46b ObjFunc
	var_155_int = var_164_int; // 0x46d Mov
	return 8; // 0x46e Return
}


func_3639(var_86_int)
{
	var_86_int = 2873; // 0xe37 MovI
	return 0; // 0xe38 Return
}


func_3128(var_141_bool, var_142_int)
{
	var_143_int = 0; // 0xc39 PushV
	func_3111(var_143_int); // 0xc3a Call
	var_141_bool = var_143_int == var_142_int; // 0xc3c Eq2
	return 0; // 0xc3d Return
}


func_2617(var_0_object, var_542_int, var_543_object)
{
	var_545_object = Obj(); var_546_bool = 0; var_547_int = 0; var_548_bool = 0; var_549_object = Obj(); var_550_bool = 0; var_551_int = 0; var_552_bool = 0; // 0xa39 PushV
	var_0_object = var_543_object; // 0xa3a TMov
	var_553_bool = 0; var_554_object = Obj(); // 0xa3b PushV
	var_554_object = var_543_object; // 0xa3c Mov
	func_2990(var_554_object); // 0xa3d Call
	var_555_bool = var_553_bool == 0; // 0xa3f Not
	if(var_555_bool == 0) goto Label_2627; // 0xa40 JumpB
	var_542_int = -2; // 0xa41 MovI
	return 8; // 0xa42 Return
	
Label_2627:
	CreateDialog(var_549_object); // 0xa43 Func
	var_556_int = 0; // 0xa45 PushV
	func_3639(var_556_int); // 0xa46 Call
	SetNPCName(var_556_int); // 0xa48 ObjFunc
	var_557_string = ""; // 0xa4a PushV
	func_3641(var_557_string); // 0xa4b Call
	SetPhoto(var_557_string); // 0xa4d ObjFunc
	var_558_int = 0; // 0xa4f PushV
	func_3622(var_558_int); // 0xa50 Call
	SetPlayerName(var_558_int); // 0xa52 ObjFunc
	var_551_int = -1; // 0xa54 MovI
	IsOverrideActive(var_550_bool); // 0xa55 Func
	var_559_bool = var_550_bool; // 0xa57 Push
	if(var_559_bool == 0) goto Label_2651; // 0xa58 JumpB
	var_542_int = -2; // 0xa59 MovI
	return 8; // 0xa5a Return
	
Label_2651:
	DoDialog(var_549_object); // 0xa5b Func
	var_560_object = Obj(); var_561_object = Obj(); // 0xa5d PushV
	var_560_object = var_543_object; // 0xa5e Mov
	var_561_object = var_549_object; // 0xa5f Mov
	TaskCall(13); // 0xa60 TaskCall
	func_2680(var_562_object, var_563_object, var_564_string, var_565_bool, var_560_object, var_561_object); // 0xa61 Call
	TaskReturn(); // 0xa62 TaskReturn
	IsDialogEnd(var_552_bool); // 0xa64 ObjFunc
	
Label_2662:
	var_610_bool = var_552_bool == 0; // 0xa66 Not
	if(var_610_bool == 0) goto Label_2669; // 0xa67 JumpB
	sync(); // 0xa68 Func
	IsDialogEnd(var_552_bool); // 0xa6a ObjFunc
	goto Label_2662; // 0xa6c Jump
	
Label_2669:
	var_611_object = Obj(); // 0xa6d PushV
	var_611_object = var_543_object; // 0xa6e Mov
	func_3046(); // 0xa6f Call
	StopDialog(var_549_object); // 0xa71 Func
	GetReturnValue(var_551_int); // 0xa73 ObjFunc
	var_542_int = var_551_int; // 0xa75 Mov
	return 8; // 0xa76 Return
}


func_3641(var_87_string)
{
	var_87_string = "ui/NPC_Notkin.png"; // 0xe39 MovS
	return 0; // 0xe3a Return
}


func_3643(var_33_bool)
{
	var_33_bool = 1; // 0xe3b MovB
	return 0; // 0xe3c Return
}


func_3384(var_153_bool)
{
	var_155_int = 0; var_156_string = ""; // 0xd39 PushV
	var_156_string = "KnowMark"; // 0xd3a MovS
	func_3085(var_155_int, var_156_string); // 0xd3b Call
	var_157_int = 1; // 0xd3d PushI
	var_158_bool = var_155_int == var_157_int; // 0xd3e Eq
	if(var_158_bool == 0) goto Label_3394; // 0xd3f JumpB
	var_153_bool = 1; // 0xd40 MovB
	return 0; // 0xd41 Return
	
Label_3394:
	var_153_bool = 0; // 0xd42 MovB
	return 0; // 0xd43 Return
}


func_3645()
{
	var_30_bool = GlobalVars[1]; // 0xe3d PushGE
	var_30_bool = 0; // 0xe3e MovB
	GlobalVars[1] = var_30_bool; // 0xe3f PopGE
	return 0; // 0xe40 Return
}


func_3134(var_612_bool)
{
	var_613_bool = 0; var_614_bool = 0; // 0xc3e PushV
	var_615_string = ""; // 0xc3f PushV
	var_615_string = "No"; // 0xc40 MovS
	func_3050(var_615_string); // 0xc41 Call
	lshWaitForAnimEnd(var_614_bool); // 0xc43 Func
	var_612_bool = var_614_bool; // 0xc45 Mov
	return 2; // 0xc46 Return
}


func_2367(var_0_object, var_1_object, var_2_object, var_3_object, var_493_object, var_494_object)
{
	var_0_object = var_494_object; // 0x940 TMov
	var_1_object = var_493_object; // 0x941 TMov
	var_3_object = 0; // 0x942 TMovB
	var_499_int = 1; // 0x943 PushI
	if(var_499_int == 0) goto Label_2425; // 0x944 JumpB
	var_500_bool = 0; var_501_object = Obj(); // 0x945 PushV
	var_501_object = var_1_object; // 0x946 MovT
	func_3480(var_501_object); // 0x947 Call
	if(var_500_bool == 0) goto Label_2408; // 0x949 JumpB
	var_506_object = Obj(); var_507_object = Obj(); // 0x94a PushV
	var_506_object = var_1_object; // 0x94b MovT
	var_507_object = var_0_object; // 0x94c MovT
	func_3246(); // 0x94d Call
	var_510_string = ""; // 0x94f PushV
	var_510_string = "Neutral"; // 0x950 MovS
	func_2455(var_494_object, var_510_string); // 0x951 Call
	var_515_int = 9978; // 0x953 PushI
	SetMessage(var_515_int); // 0x954 TObjFunc
	ClearReplies(); // 0x956 TObjFunc
	var_516_int = 9979; // 0x958 PushI
	var_517_int = 10998; // 0x959 PushI
	var_518_int = 10997; // 0x95a PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x95b TObjFunc
	var_519_int = 9990; // 0x95d PushI
	var_520_int = 10998; // 0x95e PushI
	var_521_int = 11009; // 0x95f PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x960 TObjFunc
	var_522_int = 9991; // 0x962 PushI
	var_523_int = 10998; // 0x963 PushI
	var_524_int = 11011; // 0x964 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x965 TObjFunc
	goto Label_2425; // 0x967 Jump
	
Label_2425:
	var_525_bool = 0; // 0x979 PushV
	func_3643(var_525_bool); // 0x97a Call
	if(var_525_bool == 0) goto Label_2440; // 0x97c JumpB
	
Label_2429:
	lshWaitForAnimEnd(); // 0x97d Func
	var_526_object = var_3_object; // 0x97f PushT
	if(var_526_object == 0) goto Label_2434; // 0x980 JumpB
	goto Label_2439; // 0x981 Jump
	
Label_2439:
	goto Label_2454; // 0x987 Jump
	
Label_2454:
	return 0; // 0x996 Return
	
Label_2434:
	var_527_string = ""; // 0x982 PushV
	var_527_string = var_2_object; // 0x983 MovT
	func_3050(var_527_string); // 0x984 Call
	goto Label_2429; // 0x986 Jump
	
Label_2440:
	var_528_string = "all"; // 0x988 PushS
	var_529_string = "idle"; // 0x989 PushS
	PlayAnimation(var_528_string, var_529_string); // 0x98a Func
	
Label_2444:
	WaitForAnimEnd(); // 0x98c Func
	var_530_object = var_3_object; // 0x98e PushT
	if(var_530_object == 0) goto Label_2449; // 0x98f JumpB
	goto Label_2454; // 0x990 Jump
	
Label_2449:
	var_531_string = "all"; // 0x991 PushS
	var_532_string = "idle"; // 0x992 PushS
	PlayAnimation(var_531_string, var_532_string); // 0x993 Func
	goto Label_2444; // 0x995 Jump
	
Label_2408:
	var_533_string = ""; // 0x968 PushV
	var_533_string = "Neutral"; // 0x969 MovS
	func_2455(var_494_object, var_533_string); // 0x96a Call
	var_534_int = 15318; // 0x96c PushI
	SetMessage(var_534_int); // 0x96d TObjFunc
	ClearReplies(); // 0x96f TObjFunc
	var_535_int = 15319; // 0x971 PushI
	var_536_int = -1; // 0x972 PushI
	var_537_int = 16557; // 0x973 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x974 TObjFunc
	goto Label_2425; // 0x976 Jump
}


func_3649(var_31_object)
{
	var_32_bool = GlobalVars[1]; // 0xe42 PushGE
	var_33_bool = var_32_bool == 0; // 0xe43 Not
	if(var_33_bool == 0) goto Label_3662; // 0xe44 JumpB
	var_34_int = 0; var_35_object = Obj(); // 0xe45 PushV
	var_35_object = var_31_object; // 0xe46 Mov
	TaskCall(2); // 0xe47 TaskCall
	func_49(var_36_object, var_34_int, var_35_object); // 0xe48 Call
	TaskReturn(); // 0xe49 TaskReturn
	var_140_bool = GlobalVars[1]; // 0xe4b PushGE
	var_140_bool = 1; // 0xe4c MovB
	GlobalVars[1] = var_140_bool; // 0xe4d PopGE
	
Label_3662:
	var_141_bool = 0; var_142_int = 0; // 0xe4e PushV
	var_142_int = 1; // 0xe4f MovI
	func_3128(var_141_bool, var_142_int); // 0xe50 Call
	if(var_141_bool == 0) goto Label_3688; // 0xe52 JumpB
	var_149_int = 0; var_150_string = ""; // 0xe53 PushV
	var_150_string = "d1q01"; // 0xe54 MovS
	func_3085(var_149_int, var_150_string); // 0xe55 Call
	var_153_int = 1; // 0xe57 PushI
	var_154_bool = var_149_int == var_153_int; // 0xe58 Eq
	if(var_154_bool == 0) goto Label_3681; // 0xe59 JumpB
	var_155_int = 0; var_156_object = Obj(); // 0xe5a PushV
	var_156_object = var_31_object; // 0xe5b Mov
	TaskCall(6); // 0xe5c TaskCall
	func_1073(var_157_object, var_155_int, var_156_object); // 0xe5d Call
	TaskReturn(); // 0xe5e TaskReturn
	return 0; // 0xe60 Return
	
Label_3681:
	var_233_int = 0; var_234_object = Obj(); // 0xe61 PushV
	var_234_object = var_31_object; // 0xe62 Mov
	TaskCall(4); // 0xe63 TaskCall
	func_343(var_235_object, var_233_int, var_234_object); // 0xe64 Call
	TaskReturn(); // 0xe65 TaskReturn
	return 0; // 0xe67 Return
	
Label_3688:
	var_409_bool = 0; var_410_int = 0; // 0xe68 PushV
	var_410_int = 2; // 0xe69 MovI
	func_3128(var_409_bool, var_410_int); // 0xe6a Call
	if(var_409_bool == 0) goto Label_3700; // 0xe6c JumpB
	var_411_int = 0; var_412_object = Obj(); // 0xe6d PushV
	var_412_object = var_31_object; // 0xe6e Mov
	TaskCall(8); // 0xe6f TaskCall
	func_1465(var_413_object, var_411_int, var_412_object); // 0xe70 Call
	TaskReturn(); // 0xe71 TaskReturn
	return 0; // 0xe73 Return
	
Label_3700:
	var_473_bool = 0; var_474_int = 0; // 0xe74 PushV
	var_474_int = 3; // 0xe75 MovI
	func_3128(var_473_bool, var_474_int); // 0xe76 Call
	if(var_473_bool == 0) goto Label_3712; // 0xe78 JumpB
	var_475_int = 0; var_476_object = Obj(); // 0xe79 PushV
	var_476_object = var_31_object; // 0xe7a Mov
	TaskCall(10); // 0xe7b TaskCall
	func_2304(var_477_object, var_475_int, var_476_object); // 0xe7c Call
	TaskReturn(); // 0xe7d TaskReturn
	return 0; // 0xe7f Return
	
Label_3712:
	var_540_bool = 0; var_541_int = 0; // 0xe80 PushV
	var_541_int = 4; // 0xe81 MovI
	func_3128(var_540_bool, var_541_int); // 0xe82 Call
	if(var_540_bool == 0) goto Label_3724; // 0xe84 JumpB
	var_542_int = 0; var_543_object = Obj(); // 0xe85 PushV
	var_543_object = var_31_object; // 0xe86 Mov
	TaskCall(12); // 0xe87 TaskCall
	func_2617(var_544_object, var_542_int, var_543_object); // 0xe88 Call
	TaskReturn(); // 0xe89 TaskReturn
	return 0; // 0xe8b Return
	
Label_3724:
	var_612_bool = 0; // 0xe8c PushV
	func_3134(var_612_bool); // 0xe8d Call
	return 0; // 0xe8f Return
}


func_3396(var_169_bool)
{
	var_171_int = 0; var_172_string = ""; // 0xd45 PushV
	var_172_string = "KnowGrif"; // 0xd46 MovS
	func_3085(var_171_int, var_172_string); // 0xd47 Call
	var_173_int = 1; // 0xd49 PushI
	var_174_bool = var_171_int == var_173_int; // 0xd4a Eq
	if(var_174_bool == 0) goto Label_3406; // 0xd4b JumpB
	var_169_bool = 1; // 0xd4c MovB
	return 0; // 0xd4d Return
	
Label_3406:
	var_169_bool = 0; // 0xd4e MovB
	return 0; // 0xd4f Return
}


func_3143()
{
	var_42_string = ""; var_43_bool = 0; // 0xc48 PushV
	var_42_string = "warehouse_rubin@door1"; // 0xc49 MovS
	var_43_bool = 0; // 0xc4a MovB
	func_3090(var_42_string, var_43_bool); // 0xc4b Call
	return 0; // 0xc4d Return
}


func_3150()
{
	var_38_string = "ood1Notkin1"; // 0xc4f PushS
	var_39_int = 1; // 0xc50 PushI
	SetVariable(var_38_string, var_39_int); // 0xc51 Func
	return 0; // 0xc53 Return
}


func_3408(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0xd51 PushV
	var_162_string = "ood1Notkin3"; // 0xd52 MovS
	func_3085(var_161_int, var_162_string); // 0xd53 Call
	var_163_int = 0; // 0xd55 PushI
	var_164_bool = var_161_int == var_163_int; // 0xd56 Eq
	if(var_164_bool == 0) goto Label_3418; // 0xd57 JumpB
	var_159_bool = 1; // 0xd58 MovB
	return 0; // 0xd59 Return
	
Label_3418:
	var_159_bool = 0; // 0xd5a MovB
	return 0; // 0xd5b Return
}


func_3156()
{
	var_44_string = "ood1Notkin2"; // 0xc55 PushS
	var_45_int = 1; // 0xc56 PushI
	SetVariable(var_44_string, var_45_int); // 0xc57 Func
	return 0; // 0xc59 Return
}


func_343(var_0_object, var_233_int, var_234_object)
{
	var_236_object = Obj(); var_237_bool = 0; var_238_int = 0; var_239_bool = 0; var_240_object = Obj(); var_241_bool = 0; var_242_int = 0; var_243_bool = 0; // 0x157 PushV
	var_0_object = var_234_object; // 0x158 TMov
	var_244_bool = 0; var_245_object = Obj(); // 0x159 PushV
	var_245_object = var_234_object; // 0x15a Mov
	func_2990(var_245_object); // 0x15b Call
	var_246_bool = var_244_bool == 0; // 0x15d Not
	if(var_246_bool == 0) goto Label_353; // 0x15e JumpB
	var_233_int = -2; // 0x15f MovI
	return 8; // 0x160 Return
	
Label_353:
	CreateDialog(var_240_object); // 0x161 Func
	var_247_int = 0; // 0x163 PushV
	func_3639(var_247_int); // 0x164 Call
	SetNPCName(var_247_int); // 0x166 ObjFunc
	var_248_string = ""; // 0x168 PushV
	func_3641(var_248_string); // 0x169 Call
	SetPhoto(var_248_string); // 0x16b ObjFunc
	var_249_int = 0; // 0x16d PushV
	func_3622(var_249_int); // 0x16e Call
	SetPlayerName(var_249_int); // 0x170 ObjFunc
	var_242_int = -1; // 0x172 MovI
	IsOverrideActive(var_241_bool); // 0x173 Func
	var_250_bool = var_241_bool; // 0x175 Push
	if(var_250_bool == 0) goto Label_377; // 0x176 JumpB
	var_233_int = -2; // 0x177 MovI
	return 8; // 0x178 Return
	
Label_377:
	DoDialog(var_240_object); // 0x179 Func
	var_251_object = Obj(); var_252_object = Obj(); // 0x17b PushV
	var_251_object = var_234_object; // 0x17c Mov
	var_252_object = var_240_object; // 0x17d Mov
	TaskCall(5); // 0x17e TaskCall
	func_406(var_253_object, var_254_object, var_255_string, var_256_bool, var_251_object, var_252_object); // 0x17f Call
	TaskReturn(); // 0x180 TaskReturn
	IsDialogEnd(var_243_bool); // 0x182 ObjFunc
	
Label_388:
	var_407_bool = var_243_bool == 0; // 0x184 Not
	if(var_407_bool == 0) goto Label_395; // 0x185 JumpB
	sync(); // 0x186 Func
	IsDialogEnd(var_243_bool); // 0x188 ObjFunc
	goto Label_388; // 0x18a Jump
	
Label_395:
	var_408_object = Obj(); // 0x18b PushV
	var_408_object = var_234_object; // 0x18c Mov
	func_3046(); // 0x18d Call
	StopDialog(var_240_object); // 0x18f Func
	GetReturnValue(var_242_int); // 0x191 ObjFunc
	var_233_int = var_242_int; // 0x193 Mov
	return 8; // 0x194 Return
}


func_3162()
{
	var_38_string = "ood1NotkinMQ1"; // 0xc5b PushS
	var_39_int = 1; // 0xc5c PushI
	SetVariable(var_38_string, var_39_int); // 0xc5d Func
	return 0; // 0xc5f Return
}


func_3420(var_175_bool)
{
	var_177_int = 0; var_178_string = ""; // 0xd5d PushV
	var_178_string = "ood1Notkin4"; // 0xd5e MovS
	func_3085(var_177_int, var_178_string); // 0xd5f Call
	var_179_int = 0; // 0xd61 PushI
	var_180_bool = var_177_int == var_179_int; // 0xd62 Eq
	if(var_180_bool == 0) goto Label_3430; // 0xd63 JumpB
	var_175_bool = 1; // 0xd64 MovB
	return 0; // 0xd65 Return
	
Label_3430:
	var_175_bool = 0; // 0xd66 MovB
	return 0; // 0xd67 Return
}


func_3168()
{
	return 0; // 0xc61 Return
}


func_610(var_2_object, var_82_string)
{
	var_83_bool = 0; // 0x263 PushV
	func_3643(var_83_bool); // 0x264 Call
	var_84_bool = var_83_bool == 0; // 0x266 Not
	if(var_84_bool == 0) goto Label_617; // 0x267 JumpB
	return 0; // 0x268 Return
	
Label_617:
	var_85_bool = var_82_string == var_2_object; // 0x269 Eq
	if(var_85_bool == 0) goto Label_620; // 0x26a JumpB
	return 0; // 0x26b Return
	
Label_620:
	var_86_string = ""; // 0x26c PushV
	var_86_string = var_82_string; // 0x26d Mov
	func_3050(var_86_string); // 0x26e Call
	var_2_object = var_82_string; // 0x270 TMov
	return 0; // 0x271 Return
}


func_3170()
{
	return 0; // 0xc63 Return
}


func_3172()
{
	var_83_string = "KnowTwoSouls"; // 0xc65 PushS
	var_84_int = 1; // 0xc66 PushI
	SetVariable(var_83_string, var_84_int); // 0xc67 Func
	return 0; // 0xc69 Return
}


func_3432(var_191_bool)
{
	var_193_int = 0; var_194_string = ""; // 0xd69 PushV
	var_194_string = "ood1Notkin5"; // 0xd6a MovS
	func_3085(var_193_int, var_194_string); // 0xd6b Call
	var_195_int = 0; // 0xd6d PushI
	var_196_bool = var_193_int == var_195_int; // 0xd6e Eq
	if(var_196_bool == 0) goto Label_3442; // 0xd6f JumpB
	var_191_bool = 1; // 0xd70 MovB
	return 0; // 0xd71 Return
	
Label_3442:
	var_191_bool = 0; // 0xd72 MovB
	return 0; // 0xd73 Return
}


func_3178()
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0; // 0xc6b PushV
	var_75_object = Obj(); // 0xc6c PushV
	func_3572(var_75_object); // 0xc6d Call
	var_72_object = var_75_object; // 0xc6e Mov
	var_73_string = "pt_map_rubin"; // 0xc70 MovS
	var_74_float = 2; // 0xc71 MovI
	func_3589(var_72_object, var_73_string, var_74_float); // 0xc72 Call
	var_95_object = Obj(); // 0xc74 PushV
	func_3572(var_95_object); // 0xc75 Call
	ShowMap(var_95_object); // 0xc77 ObjFunc
	return 0; // 0xc79 Return
}


func_1646(var_2_object, var_70_string)
{
	var_71_bool = 0; // 0x66f PushV
	func_3643(var_71_bool); // 0x670 Call
	var_72_bool = var_71_bool == 0; // 0x672 Not
	if(var_72_bool == 0) goto Label_1653; // 0x673 JumpB
	return 0; // 0x674 Return
	
Label_1653:
	var_73_bool = var_70_string == var_2_object; // 0x675 Eq
	if(var_73_bool == 0) goto Label_1656; // 0x676 JumpB
	return 0; // 0x677 Return
	
Label_1656:
	var_74_string = ""; // 0x678 PushV
	var_74_string = var_70_string; // 0x679 Mov
	func_3050(var_74_string); // 0x67a Call
	var_2_object = var_70_string; // 0x67c TMov
	return 0; // 0x67d Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_object = var_98_object; // 0x71 TMov
	var_1_object = var_97_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_103_int = 1; // 0x74 PushI
	if(var_103_int == 0) goto Label_145; // 0x75 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x76 PushV
	var_104_object = var_1_object; // 0x77 MovT
	var_105_object = var_0_object; // 0x78 MovT
	func_3210(); // 0x79 Call
	var_108_string = ""; // 0x7b PushV
	var_108_string = "Neutral"; // 0x7c MovS
	func_175(var_98_object, var_108_string); // 0x7d Call
	var_123_int = 205; // 0x7f PushI
	SetMessage(var_123_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_124_int = 207; // 0x84 PushI
	var_125_int = 256; // 0x85 PushI
	var_126_int = 245; // 0x86 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x87 TObjFunc
	var_127_int = 206; // 0x89 PushI
	var_128_int = 246; // 0x8a PushI
	var_129_int = 244; // 0x8b PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_130_bool = 0; // 0x91 PushV
	func_3643(var_130_bool); // 0x92 Call
	if(var_130_bool == 0) goto Label_160; // 0x94 JumpB
	
Label_149:
	lshWaitForAnimEnd(); // 0x95 Func
	var_131_object = var_3_object; // 0x97 PushT
	if(var_131_object == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_159:
	goto Label_174; // 0x9f Jump
	
Label_174:
	return 0; // 0xae Return
	
Label_154:
	var_132_string = ""; // 0x9a PushV
	var_132_string = var_2_object; // 0x9b MovT
	func_3050(var_132_string); // 0x9c Call
	goto Label_149; // 0x9e Jump
	
Label_160:
	var_133_string = "all"; // 0xa0 PushS
	var_134_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xa2 Func
	
Label_164:
	WaitForAnimEnd(); // 0xa4 Func
	var_135_object = var_3_object; // 0xa6 PushT
	if(var_135_object == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_169:
	var_136_string = "all"; // 0xa9 PushS
	var_137_string = "idle"; // 0xaa PushS
	PlayAnimation(var_136_string, var_137_string); // 0xab Func
	goto Label_164; // 0xad Jump
}


func_1136(var_0_object, var_1_object, var_2_object, var_3_object, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x471 TMov
	var_1_object = var_173_object; // 0x472 TMov
	var_3_object = 0; // 0x473 TMovB
	var_179_int = 1; // 0x474 PushI
	if(var_179_int == 0) goto Label_1200; // 0x475 JumpB
	var_180_bool = 0; // 0x476 PushV
	var_180_bool = 0; // 0x477 MovB
	var_181_bool = 0; // 0x478 PushV
	var_181_bool = 0; // 0x479 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x47a PushV
	var_183_object = var_1_object; // 0x47b MovT
	func_3294(var_183_object); // 0x47c Call
	if(var_182_bool == 0) goto Label_1158; // 0x47e JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x47f PushV
	var_189_object = var_1_object; // 0x480 MovT
	func_3318(var_189_object); // 0x481 Call
	var_194_bool = var_188_bool == 0; // 0x483 Not
	if(var_194_bool == 0) goto Label_1158; // 0x484 JumpB
	var_181_bool = 1; // 0x485 MovB
	
Label_1158:
	if(var_181_bool == 0) goto Label_1166; // 0x486 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x487 PushV
	var_196_object = var_1_object; // 0x488 MovT
	func_3306(var_196_object); // 0x489 Call
	var_201_bool = var_195_bool == 0; // 0x48b Not
	if(var_201_bool == 0) goto Label_1166; // 0x48c JumpB
	var_180_bool = 1; // 0x48d MovB
	
Label_1166:
	if(var_180_bool == 0) goto Label_1198; // 0x48e JumpB
	var_202_string = ""; // 0x48f PushV
	var_202_string = "Neutral"; // 0x490 MovS
	func_1230(var_174_object, var_202_string); // 0x491 Call
	var_207_int = 5688; // 0x493 PushI
	SetMessage(var_207_int); // 0x494 TObjFunc
	ClearReplies(); // 0x496 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x498 PushV
	var_209_object = var_1_object; // 0x499 MovT
	func_3258(var_209_object); // 0x49a Call
	var_214_bool = var_208_bool == 0; // 0x49c Not
	if(var_214_bool == 0) goto Label_1187; // 0x49d JumpB
	var_215_int = 6198; // 0x49e PushI
	var_216_int = 6852; // 0x49f PushI
	var_217_int = 6851; // 0x4a0 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x4a1 TObjFunc
	
Label_1187:
	var_218_bool = 0; var_219_object = Obj(); // 0x4a3 PushV
	var_219_object = var_1_object; // 0x4a4 MovT
	func_3258(var_219_object); // 0x4a5 Call
	if(var_218_bool == 0) goto Label_1197; // 0x4a7 JumpB
	var_220_int = 5689; // 0x4a8 PushI
	var_221_int = 6272; // 0x4a9 PushI
	var_222_int = 6271; // 0x4aa PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x4ab TObjFunc
	
Label_1197:
	goto Label_1200; // 0x4ad Jump
	
Label_1200:
	var_223_bool = 0; // 0x4b0 PushV
	func_3643(var_223_bool); // 0x4b1 Call
	if(var_223_bool == 0) goto Label_1215; // 0x4b3 JumpB
	
Label_1204:
	lshWaitForAnimEnd(); // 0x4b4 Func
	var_224_object = var_3_object; // 0x4b6 PushT
	if(var_224_object == 0) goto Label_1209; // 0x4b7 JumpB
	goto Label_1214; // 0x4b8 Jump
	
Label_1214:
	goto Label_1229; // 0x4be Jump
	
Label_1229:
	return 0; // 0x4cd Return
	
Label_1209:
	var_225_string = ""; // 0x4b9 PushV
	var_225_string = var_2_object; // 0x4ba MovT
	func_3050(var_225_string); // 0x4bb Call
	goto Label_1204; // 0x4bd Jump
	
Label_1215:
	var_226_string = "all"; // 0x4bf PushS
	var_227_string = "idle"; // 0x4c0 PushS
	PlayAnimation(var_226_string, var_227_string); // 0x4c1 Func
	
Label_1219:
	WaitForAnimEnd(); // 0x4c3 Func
	var_228_object = var_3_object; // 0x4c5 PushT
	if(var_228_object == 0) goto Label_1224; // 0x4c6 JumpB
	goto Label_1229; // 0x4c7 Jump
	
Label_1224:
	var_229_string = "all"; // 0x4c8 PushS
	var_230_string = "idle"; // 0x4c9 PushS
	PlayAnimation(var_229_string, var_230_string); // 0x4ca Func
	goto Label_1219; // 0x4cc Jump
	
Label_1198:
	return 0; // 0x4ae Return
}


func_3444(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0xd75 PushV
	var_210_string = "ood1Notkin6"; // 0xd76 MovS
	func_3085(var_209_int, var_210_string); // 0xd77 Call
	var_211_int = 0; // 0xd79 PushI
	var_212_bool = var_209_int == var_211_int; // 0xd7a Eq
	if(var_212_bool == 0) goto Label_3454; // 0xd7b JumpB
	var_207_bool = 1; // 0xd7c MovB
	return 0; // 0xd7d Return
	
Label_3454:
	var_207_bool = 0; // 0xd7e MovB
	return 0; // 0xd7f Return
}


func_2680(var_0_object, var_1_object, var_2_object, var_3_object, var_560_object, var_561_object)
{
	var_0_object = var_561_object; // 0xa79 TMov
	var_1_object = var_560_object; // 0xa7a TMov
	var_3_object = 0; // 0xa7b TMovB
	var_566_int = 1; // 0xa7c PushI
	if(var_566_int == 0) goto Label_2740; // 0xa7d JumpB
	var_567_string = ""; // 0xa7e PushV
	var_567_string = "Neutral"; // 0xa7f MovS
	func_2770(var_561_object, var_567_string); // 0xa80 Call
	var_572_int = 11211; // 0xa82 PushI
	SetMessage(var_572_int); // 0xa83 TObjFunc
	ClearReplies(); // 0xa85 TObjFunc
	var_573_bool = 0; // 0xa87 PushV
	var_573_bool = 1; // 0xa88 MovB
	var_574_bool = 0; // 0xa89 PushV
	var_574_bool = 0; // 0xa8a MovB
	var_575_bool = 0; var_576_object = Obj(); // 0xa8b PushV
	var_576_object = var_1_object; // 0xa8c MovT
	func_3362(var_576_object); // 0xa8d Call
	if(var_575_bool == 0) goto Label_2710; // 0xa8f JumpB
	var_581_bool = 0; var_582_object = Obj(); // 0xa90 PushV
	var_582_object = var_1_object; // 0xa91 MovT
	func_3504(var_582_object); // 0xa92 Call
	if(var_581_bool == 0) goto Label_2710; // 0xa94 JumpB
	var_574_bool = 1; // 0xa95 MovB
	
Label_2710:
	if(var_574_bool == 0) goto Label_2726; // 0xa96 JumpB
	var_587_bool = 0; // 0xa97 PushV
	var_587_bool = 0; // 0xa98 MovB
	var_588_bool = 0; var_589_object = Obj(); // 0xa99 PushV
	var_589_object = var_1_object; // 0xa9a MovT
	func_3492(var_589_object); // 0xa9b Call
	if(var_588_bool == 0) goto Label_2724; // 0xa9d JumpB
	var_594_bool = 0; var_595_object = Obj(); // 0xa9e PushV
	var_595_object = var_1_object; // 0xa9f MovT
	func_3504(var_595_object); // 0xaa0 Call
	if(var_594_bool == 0) goto Label_2724; // 0xaa2 JumpB
	var_587_bool = 1; // 0xaa3 MovB
	
Label_2724:
	if(var_587_bool == 0) goto Label_2726; // 0xaa4 JumpB
	var_573_bool = 0; // 0xaa5 MovB
	
Label_2726:
	if(var_573_bool == 0) goto Label_2732; // 0xaa6 JumpB
	var_596_int = 11212; // 0xaa7 PushI
	var_597_int = 12401; // 0xaa8 PushI
	var_598_int = 12400; // 0xaa9 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0xaaa TObjFunc
	
Label_2732:
	var_599_int = 15335; // 0xaac PushI
	var_600_int = -1; // 0xaad PushI
	var_601_int = 16558; // 0xaae PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0xaaf TObjFunc
	goto Label_2740; // 0xab1 Jump
	
Label_2740:
	var_602_bool = 0; // 0xab4 PushV
	func_3643(var_602_bool); // 0xab5 Call
	if(var_602_bool == 0) goto Label_2755; // 0xab7 JumpB
	
Label_2744:
	lshWaitForAnimEnd(); // 0xab8 Func
	var_603_object = var_3_object; // 0xaba PushT
	if(var_603_object == 0) goto Label_2749; // 0xabb JumpB
	goto Label_2754; // 0xabc Jump
	
Label_2754:
	goto Label_2769; // 0xac2 Jump
	
Label_2769:
	return 0; // 0xad1 Return
	
Label_2749:
	var_604_string = ""; // 0xabd PushV
	var_604_string = var_2_object; // 0xabe MovT
	func_3050(var_604_string); // 0xabf Call
	goto Label_2744; // 0xac1 Jump
	
Label_2755:
	var_605_string = "all"; // 0xac3 PushS
	var_606_string = "idle"; // 0xac4 PushS
	PlayAnimation(var_605_string, var_606_string); // 0xac5 Func
	
Label_2759:
	WaitForAnimEnd(); // 0xac7 Func
	var_607_object = var_3_object; // 0xac9 PushT
	if(var_607_object == 0) goto Label_2764; // 0xaca JumpB
	goto Label_2769; // 0xacb Jump
	
Label_2764:
	var_608_string = "all"; // 0xacc PushS
	var_609_string = "idle"; // 0xacd PushS
	PlayAnimation(var_608_string, var_609_string); // 0xace Func
	goto Label_2759; // 0xad0 Jump
}


func_3194()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0xc7a PushV
	var_56_object = Obj(); // 0xc7b PushV
	func_3572(var_56_object); // 0xc7c Call
	var_55_object = var_56_object; // 0xc7d Mov
	var_63_string = "d1q01NotkinAboutRubin"; // 0xc7f PushS
	var_64_string = "pt_map_rubin"; // 0xc80 PushS
	var_65_int = 1; // 0xc81 PushI
	var_66_int = 8648; // 0xc82 PushI
	var_67_float = 0; // 0xc83 PushV
	func_3106(var_67_float); // 0xc84 Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0xc86 ObjFunc
	return 2; // 0xc88 Return
}


func_3456(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0xd81 PushV
	var_226_string = "ood1Notkin7"; // 0xd82 MovS
	func_3085(var_225_int, var_226_string); // 0xd83 Call
	var_227_int = 0; // 0xd85 PushI
	var_228_bool = var_225_int == var_227_int; // 0xd86 Eq
	if(var_228_bool == 0) goto Label_3466; // 0xd87 JumpB
	var_223_bool = 1; // 0xd88 MovB
	return 0; // 0xd89 Return
	
Label_3466:
	var_223_bool = 0; // 0xd8a MovB
	return 0; // 0xd8b Return
}


func_3210()
{
	var_38_string = "KnowNotkin"; // 0xc8b PushS
	var_39_int = 1; // 0xc8c PushI
	SetVariable(var_38_string, var_39_int); // 0xc8d Func
	return 0; // 0xc8f Return
}


func_3468(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0xd8d PushV
	var_204_string = "KnowMishka"; // 0xd8e MovS
	func_3085(var_203_int, var_204_string); // 0xd8f Call
	var_205_int = 1; // 0xd91 PushI
	var_206_bool = var_203_int == var_205_int; // 0xd92 Eq
	if(var_206_bool == 0) goto Label_3478; // 0xd93 JumpB
	var_201_bool = 1; // 0xd94 MovB
	return 0; // 0xd95 Return
	
Label_3478:
	var_201_bool = 0; // 0xd96 MovB
	return 0; // 0xd97 Return
}


func_3216()
{
	var_54_string = "ood1Notkin3"; // 0xc91 PushS
	var_55_int = 1; // 0xc92 PushI
	SetVariable(var_54_string, var_55_int); // 0xc93 Func
	return 0; // 0xc95 Return
}


func_3222()
{
	var_60_string = "ood1Notkin4"; // 0xc97 PushS
	var_61_int = 1; // 0xc98 PushI
	SetVariable(var_60_string, var_61_int); // 0xc99 Func
	return 0; // 0xc9b Return
}


func_406(var_0_object, var_1_object, var_2_object, var_3_object, var_251_object, var_252_object)
{
	var_0_object = var_252_object; // 0x197 TMov
	var_1_object = var_251_object; // 0x198 TMov
	var_3_object = 0; // 0x199 TMovB
	var_257_int = 1; // 0x19a PushI
	if(var_257_int == 0) goto Label_580; // 0x19b JumpB
	var_258_string = ""; // 0x19c PushV
	var_258_string = "Neutral"; // 0x19d MovS
	func_610(var_252_object, var_258_string); // 0x19e Call
	var_263_int = 8255; // 0x1a0 PushI
	SetMessage(var_263_int); // 0x1a1 TObjFunc
	ClearReplies(); // 0x1a3 TObjFunc
	var_264_bool = 0; // 0x1a5 PushV
	var_264_bool = 0; // 0x1a6 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x1a7 PushV
	var_266_object = var_1_object; // 0x1a8 MovT
	func_3330(var_266_object); // 0x1a9 Call
	if(var_265_bool == 0) goto Label_434; // 0x1ab JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x1ac PushV
	var_272_object = var_1_object; // 0x1ad MovT
	func_3270(var_272_object); // 0x1ae Call
	if(var_271_bool == 0) goto Label_434; // 0x1b0 JumpB
	var_264_bool = 1; // 0x1b1 MovB
	
Label_434:
	if(var_264_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_277_int = 8256; // 0x1b3 PushI
	var_278_int = 6255; // 0x1b4 PushI
	var_279_int = 9079; // 0x1b5 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x1b6 TObjFunc
	
Label_440:
	var_280_bool = 0; // 0x1b8 PushV
	var_280_bool = 1; // 0x1b9 MovB
	var_281_bool = 0; // 0x1ba PushV
	var_281_bool = 0; // 0x1bb MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x1bc PushV
	var_283_object = var_1_object; // 0x1bd MovT
	func_3374(var_282_bool, var_283_object); // 0x1be Call
	if(var_282_bool == 0) goto Label_455; // 0x1c0 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x1c1 PushV
	var_298_object = var_1_object; // 0x1c2 MovT
	func_3282(var_298_object); // 0x1c3 Call
	if(var_297_bool == 0) goto Label_455; // 0x1c5 JumpB
	var_281_bool = 1; // 0x1c6 MovB
	
Label_455:
	if(var_281_bool == 0) goto Label_471; // 0x1c7 JumpB
	var_303_bool = 0; // 0x1c8 PushV
	var_303_bool = 0; // 0x1c9 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x1ca PushV
	var_305_object = var_1_object; // 0x1cb MovT
	func_3352(var_304_bool, var_305_object); // 0x1cc Call
	if(var_304_bool == 0) goto Label_469; // 0x1ce JumpB
	var_311_bool = 0; var_312_object = Obj(); // 0x1cf PushV
	var_312_object = var_1_object; // 0x1d0 MovT
	func_3282(var_312_object); // 0x1d1 Call
	if(var_311_bool == 0) goto Label_469; // 0x1d3 JumpB
	var_303_bool = 1; // 0x1d4 MovB
	
Label_469:
	if(var_303_bool == 0) goto Label_471; // 0x1d5 JumpB
	var_280_bool = 0; // 0x1d6 MovB
	
Label_471:
	if(var_280_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_313_int = 8257; // 0x1d8 PushI
	var_314_int = 6264; // 0x1d9 PushI
	var_315_int = 9080; // 0x1da PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x1db TObjFunc
	
Label_477:
	var_316_bool = 0; // 0x1dd PushV
	var_316_bool = 0; // 0x1de MovB
	var_317_bool = 0; var_318_object = Obj(); // 0x1df PushV
	var_318_object = var_1_object; // 0x1e0 MovT
	func_3384(var_318_object); // 0x1e1 Call
	if(var_317_bool == 0) goto Label_490; // 0x1e3 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x1e4 PushV
	var_324_object = var_1_object; // 0x1e5 MovT
	func_3408(var_324_object); // 0x1e6 Call
	if(var_323_bool == 0) goto Label_490; // 0x1e8 JumpB
	var_316_bool = 1; // 0x1e9 MovB
	
Label_490:
	if(var_316_bool == 0) goto Label_496; // 0x1ea JumpB
	var_329_int = 8273; // 0x1eb PushI
	var_330_int = 9105; // 0x1ec PushI
	var_331_int = 9096; // 0x1ed PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x1ee TObjFunc
	
Label_496:
	var_332_bool = 0; // 0x1f0 PushV
	var_332_bool = 0; // 0x1f1 MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x1f2 PushV
	var_334_object = var_1_object; // 0x1f3 MovT
	func_3396(var_334_object); // 0x1f4 Call
	if(var_333_bool == 0) goto Label_509; // 0x1f6 JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x1f7 PushV
	var_340_object = var_1_object; // 0x1f8 MovT
	func_3420(var_340_object); // 0x1f9 Call
	if(var_339_bool == 0) goto Label_509; // 0x1fb JumpB
	var_332_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_332_bool == 0) goto Label_515; // 0x1fd JumpB
	var_345_int = 8274; // 0x1fe PushI
	var_346_int = 9106; // 0x1ff PushI
	var_347_int = 9097; // 0x200 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x201 TObjFunc
	
Label_515:
	var_348_bool = 0; // 0x203 PushV
	var_348_bool = 0; // 0x204 MovB
	var_349_bool = 0; var_350_object = Obj(); // 0x205 PushV
	var_350_object = var_1_object; // 0x206 MovT
	func_3528(var_350_object); // 0x207 Call
	if(var_349_bool == 0) goto Label_528; // 0x209 JumpB
	var_355_bool = 0; var_356_object = Obj(); // 0x20a PushV
	var_356_object = var_1_object; // 0x20b MovT
	func_3432(var_356_object); // 0x20c Call
	if(var_355_bool == 0) goto Label_528; // 0x20e JumpB
	var_348_bool = 1; // 0x20f MovB
	
Label_528:
	if(var_348_bool == 0) goto Label_534; // 0x210 JumpB
	var_361_int = 8277; // 0x211 PushI
	var_362_int = 9107; // 0x212 PushI
	var_363_int = 9100; // 0x213 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x214 TObjFunc
	
Label_534:
	var_364_bool = 0; // 0x216 PushV
	var_364_bool = 0; // 0x217 MovB
	var_365_bool = 0; var_366_object = Obj(); // 0x218 PushV
	var_366_object = var_1_object; // 0x219 MovT
	func_3468(var_366_object); // 0x21a Call
	if(var_365_bool == 0) goto Label_547; // 0x21c JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x21d PushV
	var_372_object = var_1_object; // 0x21e MovT
	func_3444(var_372_object); // 0x21f Call
	if(var_371_bool == 0) goto Label_547; // 0x221 JumpB
	var_364_bool = 1; // 0x222 MovB
	
Label_547:
	if(var_364_bool == 0) goto Label_553; // 0x223 JumpB
	var_377_int = 8279; // 0x224 PushI
	var_378_int = 9108; // 0x225 PushI
	var_379_int = 9102; // 0x226 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x227 TObjFunc
	
Label_553:
	var_380_bool = 0; // 0x229 PushV
	var_380_bool = 0; // 0x22a MovB
	var_381_bool = 0; var_382_object = Obj(); // 0x22b PushV
	var_382_object = var_1_object; // 0x22c MovT
	func_3516(var_382_object); // 0x22d Call
	if(var_381_bool == 0) goto Label_566; // 0x22f JumpB
	var_387_bool = 0; var_388_object = Obj(); // 0x230 PushV
	var_388_object = var_1_object; // 0x231 MovT
	func_3456(var_388_object); // 0x232 Call
	if(var_387_bool == 0) goto Label_566; // 0x234 JumpB
	var_380_bool = 1; // 0x235 MovB
	
Label_566:
	if(var_380_bool == 0) goto Label_572; // 0x236 JumpB
	var_393_int = 8280; // 0x237 PushI
	var_394_int = 9109; // 0x238 PushI
	var_395_int = 9103; // 0x239 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x23a TObjFunc
	
Label_572:
	var_396_int = 15221; // 0x23c PushI
	var_397_int = -1; // 0x23d PushI
	var_398_int = 16498; // 0x23e PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x23f TObjFunc
	goto Label_580; // 0x241 Jump
	
Label_580:
	var_399_bool = 0; // 0x244 PushV
	func_3643(var_399_bool); // 0x245 Call
	if(var_399_bool == 0) goto Label_595; // 0x247 JumpB
	
Label_584:
	lshWaitForAnimEnd(); // 0x248 Func
	var_400_object = var_3_object; // 0x24a PushT
	if(var_400_object == 0) goto Label_589; // 0x24b JumpB
	goto Label_594; // 0x24c Jump
	
Label_594:
	goto Label_609; // 0x252 Jump
	
Label_609:
	return 0; // 0x261 Return
	
Label_589:
	var_401_string = ""; // 0x24d PushV
	var_401_string = var_2_object; // 0x24e MovT
	func_3050(var_401_string); // 0x24f Call
	goto Label_584; // 0x251 Jump
	
Label_595:
	var_402_string = "all"; // 0x253 PushS
	var_403_string = "idle"; // 0x254 PushS
	PlayAnimation(var_402_string, var_403_string); // 0x255 Func
	
Label_599:
	WaitForAnimEnd(); // 0x257 Func
	var_404_object = var_3_object; // 0x259 PushT
	if(var_404_object == 0) goto Label_604; // 0x25a JumpB
	goto Label_609; // 0x25b Jump
	
Label_604:
	var_405_string = "all"; // 0x25c PushS
	var_406_string = "idle"; // 0x25d PushS
	PlayAnimation(var_405_string, var_406_string); // 0x25e Func
	goto Label_599; // 0x260 Jump
}


func_2455(var_2_object, var_48_string)
{
	var_49_bool = 0; // 0x998 PushV
	func_3643(var_49_bool); // 0x999 Call
	var_50_bool = var_49_bool == 0; // 0x99b Not
	if(var_50_bool == 0) goto Label_2462; // 0x99c JumpB
	return 0; // 0x99d Return
	
Label_2462:
	var_51_bool = var_48_string == var_2_object; // 0x99e Eq
	if(var_51_bool == 0) goto Label_2465; // 0x99f JumpB
	return 0; // 0x9a0 Return
	
Label_2465:
	var_52_string = ""; // 0x9a1 PushV
	var_52_string = var_48_string; // 0x9a2 Mov
	func_3050(var_52_string); // 0x9a3 Call
	var_2_object = var_48_string; // 0x9a5 TMov
	return 0; // 0x9a6 Return
}


func_3480(var_36_bool)
{
	var_38_int = 0; var_39_string = ""; // 0xd99 PushV
	var_39_string = "ood3Notkin1"; // 0xd9a MovS
	func_3085(var_38_int, var_39_string); // 0xd9b Call
	var_42_int = 0; // 0xd9d PushI
	var_43_bool = var_38_int == var_42_int; // 0xd9e Eq
	if(var_43_bool == 0) goto Label_3490; // 0xd9f JumpB
	var_36_bool = 1; // 0xda0 MovB
	return 0; // 0xda1 Return
	
Label_3490:
	var_36_bool = 0; // 0xda2 MovB
	return 0; // 0xda3 Return
}


func_3228()
{
	var_66_string = "ood1Notkin5"; // 0xc9d PushS
	var_67_int = 1; // 0xc9e PushI
	SetVariable(var_66_string, var_67_int); // 0xc9f Func
	return 0; // 0xca1 Return
}


func_2973(var_31_bool)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0xb9d PushV
	GetPosition(var_37_cvector); // 0xb9e ObjFunc
	GetPosition(var_38_cvector); // 0xba0 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0xba2 Sub2
	var_41_float = GetByIndex(var_39_cvector, 0); // 0xba3 PushE
	var_42_float = GetByIndex(var_39_cvector, 2); // 0xba4 PushE
	Rotate(var_41_float, var_42_float, var_40_bool); // 0xba5 Func
	var_31_bool = var_40_bool; // 0xba7 Mov
	return 8; // 0xba8 Return
}


func_3234()
{
	var_72_string = "ood1Notkin6"; // 0xca3 PushS
	var_73_int = 1; // 0xca4 PushI
	SetVariable(var_72_string, var_73_int); // 0xca5 Func
	return 0; // 0xca7 Return
}


func_3492(var_75_bool)
{
	var_77_int = 0; var_78_string = ""; // 0xda5 PushV
	var_78_string = "d4q03"; // 0xda6 MovS
	func_3085(var_77_int, var_78_string); // 0xda7 Call
	var_79_int = 3; // 0xda9 PushI
	var_80_bool = var_77_int == var_79_int; // 0xdaa Eq
	if(var_80_bool == 0) goto Label_3502; // 0xdab JumpB
	var_75_bool = 1; // 0xdac MovB
	return 0; // 0xdad Return
	
Label_3502:
	var_75_bool = 0; // 0xdae MovB
	return 0; // 0xdaf Return
}


func_3240()
{
	var_78_string = "ood1Notkin7"; // 0xca9 PushS
	var_79_int = 1; // 0xcaa PushI
	SetVariable(var_78_string, var_79_int); // 0xcab Func
	return 0; // 0xcad Return
}


func_2985(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xba9 PushV
	IsLoaded(var_33_bool); // 0xbaa Func
	var_31_bool = var_33_bool; // 0xbac Mov
	return 2; // 0xbad Return
}


func_3246()
{
	var_46_string = "ood3Notkin1"; // 0xcaf PushS
	var_47_int = 1; // 0xcb0 PushI
	SetVariable(var_46_string, var_47_int); // 0xcb1 Func
	return 0; // 0xcb3 Return
}


func_175(var_2_object, var_40_string)
{
	var_41_bool = 0; // 0xb0 PushV
	func_3643(var_41_bool); // 0xb1 Call
	var_42_bool = var_41_bool == 0; // 0xb3 Not
	if(var_42_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_43_bool = var_40_string == var_2_object; // 0xb6 Eq
	if(var_43_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_44_string = ""; // 0xb9 PushV
	var_44_string = var_40_string; // 0xba Mov
	func_3050(var_44_string); // 0xbb Call
	var_2_object = var_40_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_2990(var_45_bool)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; // 0xbae PushV
	GetPosition(var_56_cvector); // 0xbaf ObjFunc
	GetEyesHeight(var_55_float); // 0xbb1 ObjFunc
	var_63_float = GetByIndex(var_56_cvector, 1); // 0xbb3 PushE
	var_63_float = var_63_float + var_55_float; // 0xbb4 Add2
	SetByIndex(var_56_cvector, 1) = var_63_float; // 0xbb5 PopE
	GetPosition(var_57_cvector); // 0xbb6 Func
	GetEyesHeight(var_55_float); // 0xbb8 Func
	var_64_float = GetByIndex(var_57_cvector, 1); // 0xbba PushE
	var_64_float = var_64_float + var_55_float; // 0xbbb Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0xbbc PopE
	var_58_cvector = var_56_cvector - var_57_cvector; // 0xbbd Sub2
	var_65_float = GetByIndex(var_58_cvector, 1); // 0xbbe PushE
	var_65_float = 0; // 0xbbf MovI
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0xbc0 PopE
	var_66_int = var_58_cvector | var_58_cvector; // 0xbc1 Or
	var_67_float = sqrt(var_66_int); // 0xbc2 Sqrt
	var_58_cvector = var_58_cvector / var_58_cvector; // 0xbc3 Div2
	var_59_cvector = -var_58_cvector; // 0xbc4 Neg2
	var_68_int = 70; // 0xbc5 PushI
	var_69_float = var_58_cvector * var_68_int; // 0xbc6 Mult
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xbc7 PushV
	var_72_cvector = CVector(0.0, 1.0, 0.0); // 0xbc8 PushVec
	var_71_cvector = var_59_cvector ^ var_72_cvector; // 0xbc9 Xor2
	func_3075(var_70_cvector, var_71_cvector); // 0xbca Call
	var_78_int = 25; // 0xbcc PushI
	var_79_float = var_70_cvector * var_78_int; // 0xbcd Mult
	var_80_int = var_69_float + var_79_float; // 0xbce Add
	var_81_cvector = CVector(0.0, 10.0, 0.0); // 0xbcf PushVec
	var_60_cvector = var_80_int - var_81_cvector; // 0xbd0 Sub2
	var_61_cvector = var_57_cvector + var_60_cvector; // 0xbd1 Add2
	IsOverrideActive(var_62_bool); // 0xbd2 Func
	var_82_bool = var_62_bool; // 0xbd4 Push
	if(var_82_bool == 0) goto Label_3032; // 0xbd5 JumpB
	var_45_bool = 0; // 0xbd6 MovB
	return 16; // 0xbd7 Return
	
Label_3032:
	StopWorld(); // 0xbd8 Func
	CameraTransit(var_61_cvector, var_59_cvector); // 0xbda Func
	var_83_float = GetByIndex(var_60_cvector, 0); // 0xbdc PushE
	var_84_float = GetByIndex(var_60_cvector, 2); // 0xbdd PushE
	Rotate(var_83_float, var_84_float); // 0xbde Func
	CameraWaitForPlayFinish(); // 0xbe0 Func
	ResumeWorld(); // 0xbe2 Func
	var_45_bool = 1; // 0xbe4 MovB
	return 16; // 0xbe5 Return
}


func_3504(var_68_bool)
{
	var_70_int = 0; var_71_string = ""; // 0xdb1 PushV
	var_71_string = "ood4Notkin1"; // 0xdb2 MovS
	func_3085(var_70_int, var_71_string); // 0xdb3 Call
	var_72_int = 0; // 0xdb5 PushI
	var_73_bool = var_70_int == var_72_int; // 0xdb6 Eq
	if(var_73_bool == 0) goto Label_3514; // 0xdb7 JumpB
	var_68_bool = 1; // 0xdb8 MovB
	return 0; // 0xdb9 Return
	
Label_3514:
	var_68_bool = 0; // 0xdba MovB
	return 0; // 0xdbb Return
}


func_3252()
{
	var_38_string = "ood4Notkin1"; // 0xcb5 PushS
	var_39_int = 1; // 0xcb6 PushI
	SetVariable(var_38_string, var_39_int); // 0xcb7 Func
	return 0; // 0xcb9 Return
}


func_1465(var_0_object, var_411_int, var_412_object)
{
	var_414_object = Obj(); var_415_bool = 0; var_416_int = 0; var_417_bool = 0; var_418_object = Obj(); var_419_bool = 0; var_420_int = 0; var_421_bool = 0; // 0x5b9 PushV
	var_0_object = var_412_object; // 0x5ba TMov
	var_422_bool = 0; var_423_object = Obj(); // 0x5bb PushV
	var_423_object = var_412_object; // 0x5bc Mov
	func_2990(var_423_object); // 0x5bd Call
	var_424_bool = var_422_bool == 0; // 0x5bf Not
	if(var_424_bool == 0) goto Label_1475; // 0x5c0 JumpB
	var_411_int = -2; // 0x5c1 MovI
	return 8; // 0x5c2 Return
	
Label_1475:
	CreateDialog(var_418_object); // 0x5c3 Func
	var_425_int = 0; // 0x5c5 PushV
	func_3639(var_425_int); // 0x5c6 Call
	SetNPCName(var_425_int); // 0x5c8 ObjFunc
	var_426_string = ""; // 0x5ca PushV
	func_3641(var_426_string); // 0x5cb Call
	SetPhoto(var_426_string); // 0x5cd ObjFunc
	var_427_int = 0; // 0x5cf PushV
	func_3622(var_427_int); // 0x5d0 Call
	SetPlayerName(var_427_int); // 0x5d2 ObjFunc
	var_420_int = -1; // 0x5d4 MovI
	IsOverrideActive(var_419_bool); // 0x5d5 Func
	var_428_bool = var_419_bool; // 0x5d7 Push
	if(var_428_bool == 0) goto Label_1499; // 0x5d8 JumpB
	var_411_int = -2; // 0x5d9 MovI
	return 8; // 0x5da Return
	
Label_1499:
	DoDialog(var_418_object); // 0x5db Func
	var_429_object = Obj(); var_430_object = Obj(); // 0x5dd PushV
	var_429_object = var_412_object; // 0x5de Mov
	var_430_object = var_418_object; // 0x5df Mov
	TaskCall(9); // 0x5e0 TaskCall
	func_1528(var_431_object, var_432_object, var_433_string, var_434_bool, var_429_object, var_430_object); // 0x5e1 Call
	TaskReturn(); // 0x5e2 TaskReturn
	IsDialogEnd(var_421_bool); // 0x5e4 ObjFunc
	
Label_1510:
	var_471_bool = var_421_bool == 0; // 0x5e6 Not
	if(var_471_bool == 0) goto Label_1517; // 0x5e7 JumpB
	sync(); // 0x5e8 Func
	IsDialogEnd(var_421_bool); // 0x5ea ObjFunc
	goto Label_1510; // 0x5ec Jump
	
Label_1517:
	var_472_object = Obj(); // 0x5ed PushV
	var_472_object = var_412_object; // 0x5ee Mov
	func_3046(); // 0x5ef Call
	StopDialog(var_418_object); // 0x5f1 Func
	GetReturnValue(var_420_int); // 0x5f3 ObjFunc
	var_411_int = var_420_int; // 0x5f5 Mov
	return 8; // 0x5f6 Return
}


func_3258(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0xcbb PushV
	var_151_string = "KnowEpidemic"; // 0xcbc MovS
	func_3085(var_150_int, var_151_string); // 0xcbd Call
	var_152_int = 1; // 0xcbf PushI
	var_153_bool = var_150_int == var_152_int; // 0xcc0 Eq
	if(var_153_bool == 0) goto Label_3268; // 0xcc1 JumpB
	var_148_bool = 1; // 0xcc2 MovB
	return 0; // 0xcc3 Return
	
Label_3268:
	var_148_bool = 0; // 0xcc4 MovB
	return 0; // 0xcc5 Return
}


func_3516(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0xdbd PushV
	var_220_string = "KnowSpi4ka"; // 0xdbe MovS
	func_3085(var_219_int, var_220_string); // 0xdbf Call
	var_221_int = 1; // 0xdc1 PushI
	var_222_bool = var_219_int == var_221_int; // 0xdc2 Eq
	if(var_222_bool == 0) goto Label_3526; // 0xdc3 JumpB
	var_217_bool = 1; // 0xdc4 MovB
	return 0; // 0xdc5 Return
	
Label_3526:
	var_217_bool = 0; // 0xdc6 MovB
	return 0; // 0xdc7 Return
}


func_3270(var_107_bool)
{
	var_109_int = 0; var_110_string = ""; // 0xcc7 PushV
	var_110_string = "ood1Notkin1"; // 0xcc8 MovS
	func_3085(var_109_int, var_110_string); // 0xcc9 Call
	var_111_int = 0; // 0xccb PushI
	var_112_bool = var_109_int == var_111_int; // 0xccc Eq
	if(var_112_bool == 0) goto Label_3280; // 0xccd JumpB
	var_107_bool = 1; // 0xcce MovB
	return 0; // 0xccf Return
	
Label_3280:
	var_107_bool = 0; // 0xcd0 MovB
	return 0; // 0xcd1 Return
}


func_3528(var_185_bool)
{
	var_187_int = 0; var_188_string = ""; // 0xdc9 PushV
	var_188_string = "KnowKapella"; // 0xdca MovS
	func_3085(var_187_int, var_188_string); // 0xdcb Call
	var_189_int = 1; // 0xdcd PushI
	var_190_bool = var_187_int == var_189_int; // 0xdce Eq
	if(var_190_bool == 0) goto Label_3538; // 0xdcf JumpB
	var_185_bool = 1; // 0xdd0 MovB
	return 0; // 0xdd1 Return
	
Label_3538:
	var_185_bool = 0; // 0xdd2 MovB
	return 0; // 0xdd3 Return
}


func_1230(var_2_object, var_132_string)
{
	var_133_bool = 0; // 0x4cf PushV
	func_3643(var_133_bool); // 0x4d0 Call
	var_134_bool = var_133_bool == 0; // 0x4d2 Not
	if(var_134_bool == 0) goto Label_1237; // 0x4d3 JumpB
	return 0; // 0x4d4 Return
	
Label_1237:
	var_135_bool = var_132_string == var_2_object; // 0x4d5 Eq
	if(var_135_bool == 0) goto Label_1240; // 0x4d6 JumpB
	return 0; // 0x4d7 Return
	
Label_1240:
	var_136_string = ""; // 0x4d8 PushV
	var_136_string = var_132_string; // 0x4d9 Mov
	func_3050(var_136_string); // 0x4da Call
	var_2_object = var_132_string; // 0x4dc TMov
	return 0; // 0x4dd Return
}


func_3282(var_133_bool)
{
	var_135_int = 0; var_136_string = ""; // 0xcd3 PushV
	var_136_string = "ood1Notkin2"; // 0xcd4 MovS
	func_3085(var_135_int, var_136_string); // 0xcd5 Call
	var_137_int = 0; // 0xcd7 PushI
	var_138_bool = var_135_int == var_137_int; // 0xcd8 Eq
	if(var_138_bool == 0) goto Label_3292; // 0xcd9 JumpB
	var_133_bool = 1; // 0xcda MovB
	return 0; // 0xcdb Return
	
Label_3292:
	var_133_bool = 0; // 0xcdc MovB
	return 0; // 0xcdd Return
}


func_2770(var_2_object, var_42_string)
{
	var_43_bool = 0; // 0xad3 PushV
	func_3643(var_43_bool); // 0xad4 Call
	var_44_bool = var_43_bool == 0; // 0xad6 Not
	if(var_44_bool == 0) goto Label_2777; // 0xad7 JumpB
	return 0; // 0xad8 Return
	
Label_2777:
	var_45_bool = var_42_string == var_2_object; // 0xad9 Eq
	if(var_45_bool == 0) goto Label_2780; // 0xada JumpB
	return 0; // 0xadb Return
	
Label_2780:
	var_46_string = ""; // 0xadc PushV
	var_46_string = var_42_string; // 0xadd Mov
	func_3050(var_46_string); // 0xade Call
	var_2_object = var_42_string; // 0xae0 TMov
	return 0; // 0xae1 Return
}


func_3540(var_142_bool)
{
	var_144_int = 0; // 0xdd5 PushV
	func_3120(var_144_int); // 0xdd6 Call
	var_145_int = 18; // 0xdd8 PushI
	var_146_bool = var_144_int >= var_145_int; // 0xdd9 GE
	if(var_146_bool == 0) goto Label_3549; // 0xdda JumpB
	var_142_bool = 1; // 0xddb MovB
	return 0; // 0xddc Return
	
Label_3549:
	var_142_bool = 0; // 0xddd MovB
	return 0; // 0xdde Return
}


func_3294(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0xcdf PushV
	var_113_string = "ood1NotkinMQ1"; // 0xce0 MovS
	func_3085(var_112_int, var_113_string); // 0xce1 Call
	var_116_int = 0; // 0xce3 PushI
	var_117_bool = var_112_int == var_116_int; // 0xce4 Eq
	if(var_117_bool == 0) goto Label_3304; // 0xce5 JumpB
	var_110_bool = 1; // 0xce6 MovB
	return 0; // 0xce7 Return
	
Label_3304:
	var_110_bool = 0; // 0xce8 MovB
	return 0; // 0xce9 Return
}


func_3551(var_120_bool)
{
	var_122_bool = 0; // 0xde0 PushV
	var_122_bool = 0; // 0xde1 MovB
	var_123_int = 0; // 0xde2 PushV
	func_3120(var_123_int); // 0xde3 Call
	var_128_int = 12; // 0xde5 PushI
	var_129_bool = var_123_int >= var_128_int; // 0xde6 GE
	if(var_129_bool == 0) goto Label_3567; // 0xde7 JumpB
	var_130_int = 0; // 0xde8 PushV
	func_3120(var_130_int); // 0xde9 Call
	var_131_int = 18; // 0xdeb PushI
	var_132_bool = var_130_int < var_131_int; // 0xdec LT
	if(var_132_bool == 0) goto Label_3567; // 0xded JumpB
	var_122_bool = 1; // 0xdee MovB
	
Label_3567:
	if(var_122_bool == 0) goto Label_3570; // 0xdef JumpB
	var_120_bool = 1; // 0xdf0 MovB
	return 0; // 0xdf1 Return
	
Label_3570:
	var_120_bool = 0; // 0xdf2 MovB
	return 0; // 0xdf3 Return
}


func_3046()
{
	CameraSwitchToNormal(); // 0xbe7 Func
	return 0; // 0xbe9 Return
}


func_3306(var_125_bool)
{
	var_127_int = 0; var_128_string = ""; // 0xceb PushV
	var_128_string = "d1q01"; // 0xcec MovS
	func_3085(var_127_int, var_128_string); // 0xced Call
	var_129_int = 1000; // 0xcef PushI
	var_130_bool = var_127_int == var_129_int; // 0xcf0 Eq
	if(var_130_bool == 0) goto Label_3316; // 0xcf1 JumpB
	var_125_bool = 1; // 0xcf2 MovB
	return 0; // 0xcf3 Return
	
Label_3316:
	var_125_bool = 0; // 0xcf4 MovB
	return 0; // 0xcf5 Return
}


func_3050(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0xbea PushV
	var_40_string = "playing "; // 0xbeb PushS
	var_41_int = var_40_string + var_35_string; // 0xbec Add
	Trace(var_41_int); // 0xbed Func
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float); // 0xbef Func
	lshPlayAnimation(var_38_float, var_39_float); // 0xbf1 Func
	var_42_string = "start: "; // 0xbf3 PushS
	var_43_int = var_42_string + var_38_float; // 0xbf4 Add
	Trace(var_43_int); // 0xbf5 Func
	var_44_string = "end: "; // 0xbf7 PushS
	var_45_int = var_44_string + var_39_float; // 0xbf8 Add
	Trace(var_45_int); // 0xbf9 Func
	return 4; // 0xbfb Return
}


func_3572(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); // 0xdf4 PushV
	GetMainOutdoorScene(var_59_object); // 0xdf5 Func
	var_61_bool = var_59_object == 0; // 0xdf7 NullEq
	if(var_61_bool == 0) goto Label_3583; // 0xdf8 JumpB
	var_62_string = "Can't find main outdoor scene"; // 0xdf9 PushS
	Trace(var_62_string); // 0xdfa Func
	var_60_object = 0; // 0xdfc SetNull
	var_56_object = var_60_object; // 0xdfd Mov
	return 4; // 0xdfe Return
	
Label_3583:
	GetMap(var_60_object); // 0xdff ObjFunc
	var_56_object = var_60_object; // 0xe01 Mov
	return 4; // 0xe02 Return
}


func_3318(var_118_bool)
{
	var_120_int = 0; var_121_string = ""; // 0xcf7 PushV
	var_121_string = "d1q01"; // 0xcf8 MovS
	func_3085(var_120_int, var_121_string); // 0xcf9 Call
	var_122_int = 0; // 0xcfb PushI
	var_123_bool = var_120_int == var_122_int; // 0xcfc Eq
	if(var_123_bool == 0) goto Label_3328; // 0xcfd JumpB
	var_118_bool = 1; // 0xcfe MovB
	return 0; // 0xcff Return
	
Label_3328:
	var_118_bool = 0; // 0xd00 MovB
	return 0; // 0xd01 Return
}


func_1528(var_0_object, var_1_object, var_2_object, var_3_object, var_429_object, var_430_object)
{
	var_0_object = var_430_object; // 0x5f9 TMov
	var_1_object = var_429_object; // 0x5fa TMov
	var_3_object = 0; // 0x5fb TMovB
	var_435_int = 1; // 0x5fc PushI
	if(var_435_int == 0) goto Label_1616; // 0x5fd JumpB
	var_436_bool = 0; var_437_object = Obj(); // 0x5fe PushV
	var_437_object = var_1_object; // 0x5ff MovT
	func_3347(var_437_object); // 0x600 Call
	if(var_436_bool == 0) goto Label_1559; // 0x602 JumpB
	var_438_string = ""; // 0x603 PushV
	var_438_string = "Neutral"; // 0x604 MovS
	func_1646(var_430_object, var_438_string); // 0x605 Call
	var_443_int = 7472; // 0x607 PushI
	SetMessage(var_443_int); // 0x608 TObjFunc
	ClearReplies(); // 0x60a TObjFunc
	var_444_int = 7473; // 0x60c PushI
	var_445_int = 8250; // 0x60d PushI
	var_446_int = 8249; // 0x60e PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x60f TObjFunc
	var_447_int = 7488; // 0x611 PushI
	var_448_int = 8252; // 0x612 PushI
	var_449_int = 8265; // 0x613 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x614 TObjFunc
	goto Label_1616; // 0x616 Jump
	
Label_1616:
	var_450_bool = 0; // 0x650 PushV
	func_3643(var_450_bool); // 0x651 Call
	if(var_450_bool == 0) goto Label_1631; // 0x653 JumpB
	
Label_1620:
	lshWaitForAnimEnd(); // 0x654 Func
	var_451_object = var_3_object; // 0x656 PushT
	if(var_451_object == 0) goto Label_1625; // 0x657 JumpB
	goto Label_1630; // 0x658 Jump
	
Label_1630:
	goto Label_1645; // 0x65e Jump
	
Label_1645:
	return 0; // 0x66d Return
	
Label_1625:
	var_452_string = ""; // 0x659 PushV
	var_452_string = var_2_object; // 0x65a MovT
	func_3050(var_452_string); // 0x65b Call
	goto Label_1620; // 0x65d Jump
	
Label_1631:
	var_453_string = "all"; // 0x65f PushS
	var_454_string = "idle"; // 0x660 PushS
	PlayAnimation(var_453_string, var_454_string); // 0x661 Func
	
Label_1635:
	WaitForAnimEnd(); // 0x663 Func
	var_455_object = var_3_object; // 0x665 PushT
	if(var_455_object == 0) goto Label_1640; // 0x666 JumpB
	goto Label_1645; // 0x667 Jump
	
Label_1640:
	var_456_string = "all"; // 0x668 PushS
	var_457_string = "idle"; // 0x669 PushS
	PlayAnimation(var_456_string, var_457_string); // 0x66a Func
	goto Label_1635; // 0x66c Jump
	
Label_1559:
	var_458_string = ""; // 0x617 PushV
	var_458_string = "Neutral"; // 0x618 MovS
	func_1646(var_430_object, var_458_string); // 0x619 Call
	var_459_int = 6943; // 0x61b PushI
	SetMessage(var_459_int); // 0x61c TObjFunc
	ClearReplies(); // 0x61e TObjFunc
	var_460_bool = 0; var_461_object = Obj(); // 0x620 PushV
	var_461_object = var_1_object; // 0x621 MovT
	func_3342(var_461_object); // 0x622 Call
	if(var_460_bool == 0) goto Label_1578; // 0x624 JumpB
	var_462_int = 6944; // 0x625 PushI
	var_463_int = 7651; // 0x626 PushI
	var_464_int = 7650; // 0x627 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x628 TObjFunc
	
Label_1578:
	var_465_int = 7464; // 0x62a PushI
	var_466_int = 8240; // 0x62b PushI
	var_467_int = 8239; // 0x62c PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x62d TObjFunc
	var_468_int = 7504; // 0x62f PushI
	var_469_int = 8267; // 0x630 PushI
	var_470_int = 8285; // 0x631 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x632 TObjFunc
	goto Label_1616; // 0x634 Jump
}


func_3068()
{
	var_33_bool = 0; // 0xbfc PushV
	func_3643(var_33_bool); // 0xbfd Call
	if(var_33_bool == 0) goto Label_3074; // 0xbff JumpB
	lshStopSpeech(); // 0xc00 Func
	
Label_3074:
	return 0; // 0xc02 Return
}


