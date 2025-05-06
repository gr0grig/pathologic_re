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
	func_4772(var_31_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2a PushV
	var_32_object = var_30_bool; // 0x2b Mov
	func_3755(var_32_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xc0 PushI
	if(var_32_int == 0) goto Label_337; // 0xc1 JumpB
	func_3850(); // 0xc3 Call
	var_34_int = 205; // 0xc5 PushI
	var_35_bool = var_30_string == var_34_int; // 0xc6 Eq
	if(var_35_bool == 0) goto Label_225; // 0xc7 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xc8 PushV
	var_36_object = var_1_object; // 0xc9 MovT
	var_37_object = var_0_object; // 0xca MovT
	func_4086(); // 0xcb Call
	var_40_string = ""; // 0xcd PushV
	var_40_string = "Neutral"; // 0xce MovS
	func_175(var_31_bool, var_40_string); // 0xcf Call
	var_55_int = 170; // 0xd1 PushI
	SetMessage(var_55_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_56_int = 171; // 0xd6 PushI
	var_57_int = 210; // 0xd7 PushI
	var_58_int = 206; // 0xd8 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd9 TObjFunc
	var_59_int = 172; // 0xdb PushI
	var_60_int = 209; // 0xdc PushI
	var_61_int = 207; // 0xdd PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_62_int = 209; // 0xe1 PushI
	var_63_bool = var_30_string == var_62_int; // 0xe2 Eq
	if(var_63_bool == 0) goto Label_243; // 0xe3 JumpB
	var_64_string = ""; // 0xe4 PushV
	var_64_string = "Neutral"; // 0xe5 MovS
	func_175(var_31_bool, var_64_string); // 0xe6 Call
	var_65_int = 174; // 0xe8 PushI
	SetMessage(var_65_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_66_int = 178; // 0xed PushI
	var_67_int = 218; // 0xee PushI
	var_68_int = 213; // 0xef PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_69_int = 210; // 0xf3 PushI
	var_70_bool = var_30_string == var_69_int; // 0xf4 Eq
	if(var_70_bool == 0) goto Label_266; // 0xf5 JumpB
	var_71_string = ""; // 0xf6 PushV
	var_71_string = "Neutral"; // 0xf7 MovS
	func_175(var_31_bool, var_71_string); // 0xf8 Call
	var_72_int = 175; // 0xfa PushI
	SetMessage(var_72_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_73_int = 176; // 0xff PushI
	var_74_int = 215; // 0x100 PushI
	var_75_int = 211; // 0x101 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x102 TObjFunc
	var_76_int = 177; // 0x104 PushI
	var_77_int = 214; // 0x105 PushI
	var_78_int = 212; // 0x106 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_79_int = 214; // 0x10a PushI
	var_80_bool = var_30_string == var_79_int; // 0x10b Eq
	if(var_80_bool == 0) goto Label_284; // 0x10c JumpB
	var_81_string = ""; // 0x10d PushV
	var_81_string = "Neutral"; // 0x10e MovS
	func_175(var_31_bool, var_81_string); // 0x10f Call
	var_82_int = 179; // 0x111 PushI
	SetMessage(var_82_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_83_int = 181; // 0x116 PushI
	var_84_int = 218; // 0x117 PushI
	var_85_int = 216; // 0x118 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_86_int = 215; // 0x11c PushI
	var_87_bool = var_30_string == var_86_int; // 0x11d Eq
	if(var_87_bool == 0) goto Label_302; // 0x11e JumpB
	var_88_string = ""; // 0x11f PushV
	var_88_string = "Neutral"; // 0x120 MovS
	func_175(var_31_bool, var_88_string); // 0x121 Call
	var_89_int = 180; // 0x123 PushI
	SetMessage(var_89_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_90_int = 182; // 0x128 PushI
	var_91_int = 218; // 0x129 PushI
	var_92_int = 217; // 0x12a PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_93_int = 218; // 0x12e PushI
	var_94_bool = var_30_string == var_93_int; // 0x12f Eq
	if(var_94_bool == 0) goto Label_325; // 0x130 JumpB
	var_95_string = ""; // 0x131 PushV
	var_95_string = "Neutral"; // 0x132 MovS
	func_175(var_31_bool, var_95_string); // 0x133 Call
	var_96_int = 183; // 0x135 PushI
	SetMessage(var_96_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_97_int = 184; // 0x13a PushI
	var_98_int = -1; // 0x13b PushI
	var_99_int = 221; // 0x13c PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x13d TObjFunc
	var_100_int = 185; // 0x13f PushI
	var_101_int = -1; // 0x140 PushI
	var_102_int = 222; // 0x141 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_3_string = 1; // 0x145 TMovB
	var_103_bool = 0; // 0x146 PushV
	func_3951(var_103_bool); // 0x147 Call
	if(var_103_bool == 0) goto Label_333; // 0x149 JumpB
	lshStopAnimation(); // 0x14a Func
	goto Label_335; // 0x14c Jump
	
Label_335:
	return 0; // 0x14f Return
	
Label_333:
	StopAnimation(); // 0x14d Func
	
Label_337:
	return 0; // 0x151 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x281 PushI
	if(var_32_int == 0) goto Label_1512; // 0x282 JumpB
	func_3850(); // 0x284 Call
	var_34_int = 6364; // 0x286 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x287 Eq
	if(var_35_bool == 0) goto Label_654; // 0x288 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x289 PushV
	var_36_object = var_1_object; // 0x28a MovT
	var_37_object = var_0_object; // 0x28b MovT
	func_4038(); // 0x28c Call
	
Label_654:
	var_40_int = 6361; // 0x28e PushI
	var_41_bool = var_31_bool == var_40_int; // 0x28f Eq
	if(var_41_bool == 0) goto Label_662; // 0x290 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x291 PushV
	var_42_object = var_1_object; // 0x292 MovT
	var_43_object = var_0_object; // 0x293 MovT
	func_4038(); // 0x294 Call
	
Label_662:
	var_44_int = 6365; // 0x296 PushI
	var_45_bool = var_31_bool == var_44_int; // 0x297 Eq
	if(var_45_bool == 0) goto Label_670; // 0x298 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x299 PushV
	var_46_object = var_1_object; // 0x29a MovT
	var_47_object = var_0_object; // 0x29b MovT
	func_4038(); // 0x29c Call
	
Label_670:
	var_48_int = 6372; // 0x29e PushI
	var_49_bool = var_31_bool == var_48_int; // 0x29f Eq
	if(var_49_bool == 0) goto Label_678; // 0x2a0 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0x2a1 PushV
	var_50_object = var_1_object; // 0x2a2 MovT
	var_51_object = var_0_object; // 0x2a3 MovT
	func_4044(); // 0x2a4 Call
	
Label_678:
	var_54_int = 6373; // 0x2a6 PushI
	var_55_bool = var_31_bool == var_54_int; // 0x2a7 Eq
	if(var_55_bool == 0) goto Label_686; // 0x2a8 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x2a9 PushV
	var_56_object = var_1_object; // 0x2aa MovT
	var_57_object = var_0_object; // 0x2ab MovT
	func_4044(); // 0x2ac Call
	
Label_686:
	var_58_int = 6383; // 0x2ae PushI
	var_59_bool = var_31_bool == var_58_int; // 0x2af Eq
	if(var_59_bool == 0) goto Label_694; // 0x2b0 JumpB
	var_60_object = Obj(); var_61_object = Obj(); // 0x2b1 PushV
	var_60_object = var_1_object; // 0x2b2 MovT
	var_61_object = var_0_object; // 0x2b3 MovT
	func_4050(); // 0x2b4 Call
	
Label_694:
	var_64_int = 6384; // 0x2b6 PushI
	var_65_bool = var_31_bool == var_64_int; // 0x2b7 Eq
	if(var_65_bool == 0) goto Label_702; // 0x2b8 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x2b9 PushV
	var_66_object = var_1_object; // 0x2ba MovT
	var_67_object = var_0_object; // 0x2bb MovT
	func_4050(); // 0x2bc Call
	
Label_702:
	var_68_int = 6385; // 0x2be PushI
	var_69_bool = var_31_bool == var_68_int; // 0x2bf Eq
	if(var_69_bool == 0) goto Label_710; // 0x2c0 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x2c1 PushV
	var_70_object = var_1_object; // 0x2c2 MovT
	var_71_object = var_0_object; // 0x2c3 MovT
	func_4050(); // 0x2c4 Call
	
Label_710:
	var_72_int = 9428; // 0x2c6 PushI
	var_73_bool = var_31_bool == var_72_int; // 0x2c7 Eq
	if(var_73_bool == 0) goto Label_718; // 0x2c8 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x2c9 PushV
	var_74_object = var_1_object; // 0x2ca MovT
	var_75_object = var_0_object; // 0x2cb MovT
	func_4056(); // 0x2cc Call
	
Label_718:
	var_78_int = 9429; // 0x2ce PushI
	var_79_bool = var_31_bool == var_78_int; // 0x2cf Eq
	if(var_79_bool == 0) goto Label_726; // 0x2d0 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x2d1 PushV
	var_80_object = var_1_object; // 0x2d2 MovT
	var_81_object = var_0_object; // 0x2d3 MovT
	func_4056(); // 0x2d4 Call
	
Label_726:
	var_82_int = 9434; // 0x2d6 PushI
	var_83_bool = var_31_bool == var_82_int; // 0x2d7 Eq
	if(var_83_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x2d9 PushV
	var_84_object = var_1_object; // 0x2da MovT
	var_85_object = var_0_object; // 0x2db MovT
	func_4062(); // 0x2dc Call
	
Label_734:
	var_88_int = 9435; // 0x2de PushI
	var_89_bool = var_31_bool == var_88_int; // 0x2df Eq
	if(var_89_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x2e1 PushV
	var_90_object = var_1_object; // 0x2e2 MovT
	var_91_object = var_0_object; // 0x2e3 MovT
	func_4062(); // 0x2e4 Call
	
Label_742:
	var_92_int = 9440; // 0x2e6 PushI
	var_93_bool = var_31_bool == var_92_int; // 0x2e7 Eq
	if(var_93_bool == 0) goto Label_750; // 0x2e8 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x2e9 PushV
	var_94_object = var_1_object; // 0x2ea MovT
	var_95_object = var_0_object; // 0x2eb MovT
	func_4068(); // 0x2ec Call
	
Label_750:
	var_98_int = 9447; // 0x2ee PushI
	var_99_bool = var_31_bool == var_98_int; // 0x2ef Eq
	if(var_99_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x2f1 PushV
	var_100_object = var_1_object; // 0x2f2 MovT
	var_101_object = var_0_object; // 0x2f3 MovT
	func_4074(); // 0x2f4 Call
	
Label_758:
	var_104_int = 9450; // 0x2f6 PushI
	var_105_bool = var_31_bool == var_104_int; // 0x2f7 Eq
	if(var_105_bool == 0) goto Label_766; // 0x2f8 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0x2f9 PushV
	var_106_object = var_1_object; // 0x2fa MovT
	var_107_object = var_0_object; // 0x2fb MovT
	func_4080(); // 0x2fc Call
	
Label_766:
	var_110_int = 9141; // 0x2fe PushI
	var_111_bool = var_30_string == var_110_int; // 0x2ff Eq
	if(var_111_bool == 0) goto Label_954; // 0x300 JumpB
	var_112_string = ""; // 0x301 PushV
	var_112_string = "Neutral"; // 0x302 MovS
	func_624(var_31_bool, var_112_string); // 0x303 Call
	var_127_int = 8318; // 0x305 PushI
	SetMessage(var_127_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_128_bool = 0; // 0x30a PushV
	var_128_bool = 0; // 0x30b MovB
	var_129_bool = 0; var_130_object = Obj(); // 0x30c PushV
	var_130_object = var_1_object; // 0x30d MovT
	func_4300(var_130_object); // 0x30e Call
	if(var_129_bool == 0) goto Label_791; // 0x310 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x311 PushV
	var_138_object = var_1_object; // 0x312 MovT
	func_4204(var_138_object); // 0x313 Call
	if(var_137_bool == 0) goto Label_791; // 0x315 JumpB
	var_128_bool = 1; // 0x316 MovB
	
Label_791:
	if(var_128_bool == 0) goto Label_797; // 0x317 JumpB
	var_143_int = 8319; // 0x318 PushI
	var_144_int = 6356; // 0x319 PushI
	var_145_int = 9142; // 0x31a PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x31b TObjFunc
	
Label_797:
	var_146_bool = 0; // 0x31d PushV
	var_146_bool = 1; // 0x31e MovB
	var_147_bool = 0; // 0x31f PushV
	var_147_bool = 0; // 0x320 MovB
	var_148_bool = 0; var_149_object = Obj(); // 0x321 PushV
	var_149_object = var_1_object; // 0x322 MovT
	func_4408(var_148_bool, var_149_object); // 0x323 Call
	if(var_148_bool == 0) goto Label_812; // 0x325 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x326 PushV
	var_160_object = var_1_object; // 0x327 MovT
	func_4312(var_160_object); // 0x328 Call
	if(var_159_bool == 0) goto Label_812; // 0x32a JumpB
	var_147_bool = 1; // 0x32b MovB
	
Label_812:
	if(var_147_bool == 0) goto Label_828; // 0x32c JumpB
	var_165_bool = 0; // 0x32d PushV
	var_165_bool = 0; // 0x32e MovB
	var_166_bool = 0; var_167_object = Obj(); // 0x32f PushV
	var_167_object = var_1_object; // 0x330 MovT
	func_4418(var_166_bool, var_167_object); // 0x331 Call
	if(var_166_bool == 0) goto Label_826; // 0x333 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x334 PushV
	var_178_object = var_1_object; // 0x335 MovT
	func_4312(var_178_object); // 0x336 Call
	if(var_177_bool == 0) goto Label_826; // 0x338 JumpB
	var_165_bool = 1; // 0x339 MovB
	
Label_826:
	if(var_165_bool == 0) goto Label_828; // 0x33a JumpB
	var_146_bool = 0; // 0x33b MovB
	
Label_828:
	if(var_146_bool == 0) goto Label_834; // 0x33c JumpB
	var_179_int = 8320; // 0x33d PushI
	var_180_int = 6369; // 0x33e PushI
	var_181_int = 9143; // 0x33f PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x340 TObjFunc
	
Label_834:
	var_182_bool = 0; // 0x342 PushV
	var_182_bool = 0; // 0x343 MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x344 PushV
	var_184_object = var_1_object; // 0x345 MovT
	func_4572(var_184_object); // 0x346 Call
	if(var_183_bool == 0) goto Label_847; // 0x348 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x349 PushV
	var_190_object = var_1_object; // 0x34a MovT
	func_4324(var_190_object); // 0x34b Call
	if(var_189_bool == 0) goto Label_847; // 0x34d JumpB
	var_182_bool = 1; // 0x34e MovB
	
Label_847:
	if(var_182_bool == 0) goto Label_853; // 0x34f JumpB
	var_195_int = 8322; // 0x350 PushI
	var_196_int = 6376; // 0x351 PushI
	var_197_int = 9145; // 0x352 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x353 TObjFunc
	
Label_853:
	var_198_bool = 0; // 0x355 PushV
	var_198_bool = 0; // 0x356 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x357 PushV
	var_200_object = var_1_object; // 0x358 MovT
	func_4476(var_200_object); // 0x359 Call
	if(var_199_bool == 0) goto Label_866; // 0x35b JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x35c PushV
	var_206_object = var_1_object; // 0x35d MovT
	func_4336(var_206_object); // 0x35e Call
	if(var_205_bool == 0) goto Label_866; // 0x360 JumpB
	var_198_bool = 1; // 0x361 MovB
	
Label_866:
	if(var_198_bool == 0) goto Label_872; // 0x362 JumpB
	var_211_int = 8324; // 0x363 PushI
	var_212_int = 9417; // 0x364 PushI
	var_213_int = 9147; // 0x365 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x366 TObjFunc
	
Label_872:
	var_214_bool = 0; // 0x368 PushV
	var_214_bool = 0; // 0x369 MovB
	var_215_bool = 0; var_216_object = Obj(); // 0x36a PushV
	var_216_object = var_1_object; // 0x36b MovT
	func_4464(var_216_object); // 0x36c Call
	if(var_215_bool == 0) goto Label_885; // 0x36e JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x36f PushV
	var_222_object = var_1_object; // 0x370 MovT
	func_4348(var_222_object); // 0x371 Call
	if(var_221_bool == 0) goto Label_885; // 0x373 JumpB
	var_214_bool = 1; // 0x374 MovB
	
Label_885:
	if(var_214_bool == 0) goto Label_891; // 0x375 JumpB
	var_227_int = 8327; // 0x376 PushI
	var_228_int = 9169; // 0x377 PushI
	var_229_int = 9150; // 0x378 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x379 TObjFunc
	
Label_891:
	var_230_bool = 0; // 0x37b PushV
	var_230_bool = 0; // 0x37c MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x37d PushV
	var_232_object = var_1_object; // 0x37e MovT
	func_4548(var_232_object); // 0x37f Call
	if(var_231_bool == 0) goto Label_904; // 0x381 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x382 PushV
	var_238_object = var_1_object; // 0x383 MovT
	func_4360(var_238_object); // 0x384 Call
	if(var_237_bool == 0) goto Label_904; // 0x386 JumpB
	var_230_bool = 1; // 0x387 MovB
	
Label_904:
	if(var_230_bool == 0) goto Label_910; // 0x388 JumpB
	var_243_int = 8329; // 0x389 PushI
	var_244_int = 9170; // 0x38a PushI
	var_245_int = 9152; // 0x38b PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x38c TObjFunc
	
Label_910:
	var_246_bool = 0; // 0x38e PushV
	var_246_bool = 0; // 0x38f MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x390 PushV
	var_248_object = var_1_object; // 0x391 MovT
	func_4396(var_248_object); // 0x392 Call
	if(var_247_bool == 0) goto Label_923; // 0x394 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x395 PushV
	var_254_object = var_1_object; // 0x396 MovT
	func_4372(var_254_object); // 0x397 Call
	if(var_253_bool == 0) goto Label_923; // 0x399 JumpB
	var_246_bool = 1; // 0x39a MovB
	
Label_923:
	if(var_246_bool == 0) goto Label_929; // 0x39b JumpB
	var_259_int = 8334; // 0x39c PushI
	var_260_int = 9171; // 0x39d PushI
	var_261_int = 9157; // 0x39e PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x39f TObjFunc
	
Label_929:
	var_262_bool = 0; // 0x3a1 PushV
	var_262_bool = 0; // 0x3a2 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x3a3 PushV
	var_264_object = var_1_object; // 0x3a4 MovT
	func_4488(var_264_object); // 0x3a5 Call
	if(var_263_bool == 0) goto Label_942; // 0x3a7 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x3a8 PushV
	var_270_object = var_1_object; // 0x3a9 MovT
	func_4384(var_270_object); // 0x3aa Call
	if(var_269_bool == 0) goto Label_942; // 0x3ac JumpB
	var_262_bool = 1; // 0x3ad MovB
	
Label_942:
	if(var_262_bool == 0) goto Label_948; // 0x3ae JumpB
	var_275_int = 8337; // 0x3af PushI
	var_276_int = 9172; // 0x3b0 PushI
	var_277_int = 9160; // 0x3b1 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x3b2 TObjFunc
	
Label_948:
	var_278_int = 8724; // 0x3b4 PushI
	var_279_int = -1; // 0x3b5 PushI
	var_280_int = 9561; // 0x3b6 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x3b7 TObjFunc
	return 0; // 0x3b9 Return
	
Label_954:
	var_281_int = 9172; // 0x3ba PushI
	var_282_bool = var_30_string == var_281_int; // 0x3bb Eq
	if(var_282_bool == 0) goto Label_972; // 0x3bc JumpB
	var_283_string = ""; // 0x3bd PushV
	var_283_string = "Neutral"; // 0x3be MovS
	func_624(var_31_bool, var_283_string); // 0x3bf Call
	var_284_int = 8349; // 0x3c1 PushI
	SetMessage(var_284_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_285_int = 8601; // 0x3c6 PushI
	var_286_int = 9449; // 0x3c7 PushI
	var_287_int = 9448; // 0x3c8 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x3c9 TObjFunc
	return 0; // 0x3cb Return
	
Label_972:
	var_288_int = 9449; // 0x3cc PushI
	var_289_bool = var_30_string == var_288_int; // 0x3cd Eq
	if(var_289_bool == 0) goto Label_995; // 0x3ce JumpB
	var_290_object = Obj(); var_291_object = Obj(); // 0x3cf PushV
	var_290_object = var_1_object; // 0x3d0 MovT
	var_291_object = var_0_object; // 0x3d1 MovT
	func_3959(); // 0x3d2 Call
	var_294_string = ""; // 0x3d4 PushV
	var_294_string = "Neutral"; // 0x3d5 MovS
	func_624(var_31_bool, var_294_string); // 0x3d6 Call
	var_295_int = 8602; // 0x3d8 PushI
	SetMessage(var_295_int); // 0x3d9 TObjFunc
	ClearReplies(); // 0x3db TObjFunc
	var_296_int = 8603; // 0x3dd PushI
	var_297_int = -1; // 0x3de PushI
	var_298_int = 9450; // 0x3df PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x3e0 TObjFunc
	return 0; // 0x3e2 Return
	
Label_995:
	var_299_int = 9171; // 0x3e3 PushI
	var_300_bool = var_30_string == var_299_int; // 0x3e4 Eq
	if(var_300_bool == 0) goto Label_1023; // 0x3e5 JumpB
	var_301_object = Obj(); var_302_object = Obj(); // 0x3e6 PushV
	var_301_object = var_1_object; // 0x3e7 MovT
	var_302_object = var_0_object; // 0x3e8 MovT
	func_4098(); // 0x3e9 Call
	var_305_string = ""; // 0x3eb PushV
	var_305_string = "Neutral"; // 0x3ec MovS
	func_624(var_31_bool, var_305_string); // 0x3ed Call
	var_306_int = 8348; // 0x3ef PushI
	SetMessage(var_306_int); // 0x3f0 TObjFunc
	ClearReplies(); // 0x3f2 TObjFunc
	var_307_int = 8595; // 0x3f4 PushI
	var_308_int = 9443; // 0x3f5 PushI
	var_309_int = 9441; // 0x3f6 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x3f7 TObjFunc
	var_310_int = 8596; // 0x3f9 PushI
	var_311_int = 9444; // 0x3fa PushI
	var_312_int = 9442; // 0x3fb PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x3fc TObjFunc
	return 0; // 0x3fe Return
	
Label_1023:
	var_313_int = 9444; // 0x3ff PushI
	var_314_bool = var_30_string == var_313_int; // 0x400 Eq
	if(var_314_bool == 0) goto Label_1041; // 0x401 JumpB
	var_315_string = ""; // 0x402 PushV
	var_315_string = "Neutral"; // 0x403 MovS
	func_624(var_31_bool, var_315_string); // 0x404 Call
	var_316_int = 8598; // 0x406 PushI
	SetMessage(var_316_int); // 0x407 TObjFunc
	ClearReplies(); // 0x409 TObjFunc
	var_317_int = 8599; // 0x40b PushI
	var_318_int = 9443; // 0x40c PushI
	var_319_int = 9445; // 0x40d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x40e TObjFunc
	return 0; // 0x410 Return
	
Label_1041:
	var_320_int = 9443; // 0x411 PushI
	var_321_bool = var_30_string == var_320_int; // 0x412 Eq
	if(var_321_bool == 0) goto Label_1059; // 0x413 JumpB
	var_322_string = ""; // 0x414 PushV
	var_322_string = "Neutral"; // 0x415 MovS
	func_624(var_31_bool, var_322_string); // 0x416 Call
	var_323_int = 8597; // 0x418 PushI
	SetMessage(var_323_int); // 0x419 TObjFunc
	ClearReplies(); // 0x41b TObjFunc
	var_324_int = 8600; // 0x41d PushI
	var_325_int = -1; // 0x41e PushI
	var_326_int = 9447; // 0x41f PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x420 TObjFunc
	return 0; // 0x422 Return
	
Label_1059:
	var_327_int = 9170; // 0x423 PushI
	var_328_bool = var_30_string == var_327_int; // 0x424 Eq
	if(var_328_bool == 0) goto Label_1087; // 0x425 JumpB
	var_329_object = Obj(); var_330_object = Obj(); // 0x426 PushV
	var_329_object = var_1_object; // 0x427 MovT
	var_330_object = var_0_object; // 0x428 MovT
	func_4098(); // 0x429 Call
	var_331_string = ""; // 0x42b PushV
	var_331_string = "Neutral"; // 0x42c MovS
	func_624(var_31_bool, var_331_string); // 0x42d Call
	var_332_int = 8347; // 0x42f PushI
	SetMessage(var_332_int); // 0x430 TObjFunc
	ClearReplies(); // 0x432 TObjFunc
	var_333_int = 8591; // 0x434 PushI
	var_334_int = 9437; // 0x435 PushI
	var_335_int = 9436; // 0x436 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x437 TObjFunc
	var_336_int = 8593; // 0x439 PushI
	var_337_int = 9437; // 0x43a PushI
	var_338_int = 9438; // 0x43b PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x43c TObjFunc
	return 0; // 0x43e Return
	
Label_1087:
	var_339_int = 9437; // 0x43f PushI
	var_340_bool = var_30_string == var_339_int; // 0x440 Eq
	if(var_340_bool == 0) goto Label_1105; // 0x441 JumpB
	var_341_string = ""; // 0x442 PushV
	var_341_string = "Neutral"; // 0x443 MovS
	func_624(var_31_bool, var_341_string); // 0x444 Call
	var_342_int = 8592; // 0x446 PushI
	SetMessage(var_342_int); // 0x447 TObjFunc
	ClearReplies(); // 0x449 TObjFunc
	var_343_int = 8594; // 0x44b PushI
	var_344_int = -1; // 0x44c PushI
	var_345_int = 9440; // 0x44d PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x44e TObjFunc
	return 0; // 0x450 Return
	
Label_1105:
	var_346_int = 9169; // 0x451 PushI
	var_347_bool = var_30_string == var_346_int; // 0x452 Eq
	if(var_347_bool == 0) goto Label_1123; // 0x453 JumpB
	var_348_string = ""; // 0x454 PushV
	var_348_string = "Neutral"; // 0x455 MovS
	func_624(var_31_bool, var_348_string); // 0x456 Call
	var_349_int = 8346; // 0x458 PushI
	SetMessage(var_349_int); // 0x459 TObjFunc
	ClearReplies(); // 0x45b TObjFunc
	var_350_int = 8585; // 0x45d PushI
	var_351_int = 9431; // 0x45e PushI
	var_352_int = 9430; // 0x45f PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x460 TObjFunc
	return 0; // 0x462 Return
	
Label_1123:
	var_353_int = 9431; // 0x463 PushI
	var_354_bool = var_30_string == var_353_int; // 0x464 Eq
	if(var_354_bool == 0) goto Label_1141; // 0x465 JumpB
	var_355_string = ""; // 0x466 PushV
	var_355_string = "Neutral"; // 0x467 MovS
	func_624(var_31_bool, var_355_string); // 0x468 Call
	var_356_int = 8586; // 0x46a PushI
	SetMessage(var_356_int); // 0x46b TObjFunc
	ClearReplies(); // 0x46d TObjFunc
	var_357_int = 8587; // 0x46f PushI
	var_358_int = 9433; // 0x470 PushI
	var_359_int = 9432; // 0x471 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x472 TObjFunc
	return 0; // 0x474 Return
	
Label_1141:
	var_360_int = 9433; // 0x475 PushI
	var_361_bool = var_30_string == var_360_int; // 0x476 Eq
	if(var_361_bool == 0) goto Label_1164; // 0x477 JumpB
	var_362_string = ""; // 0x478 PushV
	var_362_string = "Neutral"; // 0x479 MovS
	func_624(var_31_bool, var_362_string); // 0x47a Call
	var_363_int = 8588; // 0x47c PushI
	SetMessage(var_363_int); // 0x47d TObjFunc
	ClearReplies(); // 0x47f TObjFunc
	var_364_int = 8589; // 0x481 PushI
	var_365_int = -1; // 0x482 PushI
	var_366_int = 9434; // 0x483 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x484 TObjFunc
	var_367_int = 8590; // 0x486 PushI
	var_368_int = -1; // 0x487 PushI
	var_369_int = 9435; // 0x488 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x489 TObjFunc
	return 0; // 0x48b Return
	
Label_1164:
	var_370_int = 9417; // 0x48c PushI
	var_371_bool = var_30_string == var_370_int; // 0x48d Eq
	if(var_371_bool == 0) goto Label_1193; // 0x48e JumpB
	var_372_string = ""; // 0x48f PushV
	var_372_string = "Neutral"; // 0x490 MovS
	func_624(var_31_bool, var_372_string); // 0x491 Call
	var_373_int = 8573; // 0x493 PushI
	SetMessage(var_373_int); // 0x494 TObjFunc
	ClearReplies(); // 0x496 TObjFunc
	var_374_bool = 0; var_375_object = Obj(); // 0x498 PushV
	var_375_object = var_1_object; // 0x499 MovT
	func_4584(var_375_object); // 0x49a Call
	var_380_bool = var_374_bool == 0; // 0x49c Not
	if(var_380_bool == 0) goto Label_1187; // 0x49d JumpB
	var_381_int = 8574; // 0x49e PushI
	var_382_int = 9419; // 0x49f PushI
	var_383_int = 9418; // 0x4a0 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x4a1 TObjFunc
	
Label_1187:
	var_384_int = 8576; // 0x4a3 PushI
	var_385_int = 9421; // 0x4a4 PushI
	var_386_int = 9420; // 0x4a5 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x4a6 TObjFunc
	return 0; // 0x4a8 Return
	
Label_1193:
	var_387_int = 9421; // 0x4a9 PushI
	var_388_bool = var_30_string == var_387_int; // 0x4aa Eq
	if(var_388_bool == 0) goto Label_1211; // 0x4ab JumpB
	var_389_string = ""; // 0x4ac PushV
	var_389_string = "Neutral"; // 0x4ad MovS
	func_624(var_31_bool, var_389_string); // 0x4ae Call
	var_390_int = 8577; // 0x4b0 PushI
	SetMessage(var_390_int); // 0x4b1 TObjFunc
	ClearReplies(); // 0x4b3 TObjFunc
	var_391_int = 8578; // 0x4b5 PushI
	var_392_int = 9424; // 0x4b6 PushI
	var_393_int = 9422; // 0x4b7 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x4b8 TObjFunc
	return 0; // 0x4ba Return
	
Label_1211:
	var_394_int = 9419; // 0x4bb PushI
	var_395_bool = var_30_string == var_394_int; // 0x4bc Eq
	if(var_395_bool == 0) goto Label_1229; // 0x4bd JumpB
	var_396_string = ""; // 0x4be PushV
	var_396_string = "Neutral"; // 0x4bf MovS
	func_624(var_31_bool, var_396_string); // 0x4c0 Call
	var_397_int = 8575; // 0x4c2 PushI
	SetMessage(var_397_int); // 0x4c3 TObjFunc
	ClearReplies(); // 0x4c5 TObjFunc
	var_398_int = 8579; // 0x4c7 PushI
	var_399_int = 9424; // 0x4c8 PushI
	var_400_int = 9423; // 0x4c9 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x4ca TObjFunc
	return 0; // 0x4cc Return
	
Label_1229:
	var_401_int = 9424; // 0x4cd PushI
	var_402_bool = var_30_string == var_401_int; // 0x4ce Eq
	if(var_402_bool == 0) goto Label_1247; // 0x4cf JumpB
	var_403_string = ""; // 0x4d0 PushV
	var_403_string = "Neutral"; // 0x4d1 MovS
	func_624(var_31_bool, var_403_string); // 0x4d2 Call
	var_404_int = 8580; // 0x4d4 PushI
	SetMessage(var_404_int); // 0x4d5 TObjFunc
	ClearReplies(); // 0x4d7 TObjFunc
	var_405_int = 8581; // 0x4d9 PushI
	var_406_int = 9427; // 0x4da PushI
	var_407_int = 9426; // 0x4db PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x4dc TObjFunc
	return 0; // 0x4de Return
	
Label_1247:
	var_408_int = 9427; // 0x4df PushI
	var_409_bool = var_30_string == var_408_int; // 0x4e0 Eq
	if(var_409_bool == 0) goto Label_1270; // 0x4e1 JumpB
	var_410_string = ""; // 0x4e2 PushV
	var_410_string = "Neutral"; // 0x4e3 MovS
	func_624(var_31_bool, var_410_string); // 0x4e4 Call
	var_411_int = 8582; // 0x4e6 PushI
	SetMessage(var_411_int); // 0x4e7 TObjFunc
	ClearReplies(); // 0x4e9 TObjFunc
	var_412_int = 8583; // 0x4eb PushI
	var_413_int = -1; // 0x4ec PushI
	var_414_int = 9428; // 0x4ed PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x4ee TObjFunc
	var_415_int = 8584; // 0x4f0 PushI
	var_416_int = -1; // 0x4f1 PushI
	var_417_int = 9429; // 0x4f2 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x4f3 TObjFunc
	return 0; // 0x4f5 Return
	
Label_1270:
	var_418_int = 6376; // 0x4f6 PushI
	var_419_bool = var_30_string == var_418_int; // 0x4f7 Eq
	if(var_419_bool == 0) goto Label_1303; // 0x4f8 JumpB
	var_420_object = Obj(); var_421_object = Obj(); // 0x4f9 PushV
	var_420_object = var_1_object; // 0x4fa MovT
	var_421_object = var_0_object; // 0x4fb MovT
	func_4198(); // 0x4fc Call
	var_424_object = Obj(); var_425_object = Obj(); // 0x4fe PushV
	var_424_object = var_1_object; // 0x4ff MovT
	var_425_object = var_0_object; // 0x500 MovT
	func_4092(); // 0x501 Call
	var_428_string = ""; // 0x503 PushV
	var_428_string = "Neutral"; // 0x504 MovS
	func_624(var_31_bool, var_428_string); // 0x505 Call
	var_429_int = 5788; // 0x507 PushI
	SetMessage(var_429_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_430_int = 5789; // 0x50c PushI
	var_431_int = 6378; // 0x50d PushI
	var_432_int = 6377; // 0x50e PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x50f TObjFunc
	var_433_int = 5798; // 0x511 PushI
	var_434_int = 6378; // 0x512 PushI
	var_435_int = 6386; // 0x513 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x514 TObjFunc
	return 0; // 0x516 Return
	
Label_1303:
	var_436_int = 6378; // 0x517 PushI
	var_437_bool = var_30_string == var_436_int; // 0x518 Eq
	if(var_437_bool == 0) goto Label_1326; // 0x519 JumpB
	var_438_string = ""; // 0x51a PushV
	var_438_string = "Neutral"; // 0x51b MovS
	func_624(var_31_bool, var_438_string); // 0x51c Call
	var_439_int = 5790; // 0x51e PushI
	SetMessage(var_439_int); // 0x51f TObjFunc
	ClearReplies(); // 0x521 TObjFunc
	var_440_int = 5791; // 0x523 PushI
	var_441_int = 6380; // 0x524 PushI
	var_442_int = 6379; // 0x525 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x526 TObjFunc
	var_443_int = 5797; // 0x528 PushI
	var_444_int = -1; // 0x529 PushI
	var_445_int = 6385; // 0x52a PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x52b TObjFunc
	return 0; // 0x52d Return
	
Label_1326:
	var_446_int = 6380; // 0x52e PushI
	var_447_bool = var_30_string == var_446_int; // 0x52f Eq
	if(var_447_bool == 0) goto Label_1349; // 0x530 JumpB
	var_448_string = ""; // 0x531 PushV
	var_448_string = "Neutral"; // 0x532 MovS
	func_624(var_31_bool, var_448_string); // 0x533 Call
	var_449_int = 5792; // 0x535 PushI
	SetMessage(var_449_int); // 0x536 TObjFunc
	ClearReplies(); // 0x538 TObjFunc
	var_450_int = 5793; // 0x53a PushI
	var_451_int = 6382; // 0x53b PushI
	var_452_int = 6381; // 0x53c PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x53d TObjFunc
	var_453_int = 5796; // 0x53f PushI
	var_454_int = -1; // 0x540 PushI
	var_455_int = 6384; // 0x541 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x542 TObjFunc
	return 0; // 0x544 Return
	
Label_1349:
	var_456_int = 6382; // 0x545 PushI
	var_457_bool = var_30_string == var_456_int; // 0x546 Eq
	if(var_457_bool == 0) goto Label_1367; // 0x547 JumpB
	var_458_string = ""; // 0x548 PushV
	var_458_string = "Neutral"; // 0x549 MovS
	func_624(var_31_bool, var_458_string); // 0x54a Call
	var_459_int = 5794; // 0x54c PushI
	SetMessage(var_459_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_460_int = 5795; // 0x551 PushI
	var_461_int = -1; // 0x552 PushI
	var_462_int = 6383; // 0x553 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x554 TObjFunc
	return 0; // 0x556 Return
	
Label_1367:
	var_463_int = 6369; // 0x557 PushI
	var_464_bool = var_30_string == var_463_int; // 0x558 Eq
	if(var_464_bool == 0) goto Label_1390; // 0x559 JumpB
	var_465_string = ""; // 0x55a PushV
	var_465_string = "Neutral"; // 0x55b MovS
	func_624(var_31_bool, var_465_string); // 0x55c Call
	var_466_int = 5782; // 0x55e PushI
	SetMessage(var_466_int); // 0x55f TObjFunc
	ClearReplies(); // 0x561 TObjFunc
	var_467_int = 5783; // 0x563 PushI
	var_468_int = 6371; // 0x564 PushI
	var_469_int = 6370; // 0x565 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x566 TObjFunc
	var_470_int = 5787; // 0x568 PushI
	var_471_int = 6371; // 0x569 PushI
	var_472_int = 6374; // 0x56a PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x56b TObjFunc
	return 0; // 0x56d Return
	
Label_1390:
	var_473_int = 6371; // 0x56e PushI
	var_474_bool = var_30_string == var_473_int; // 0x56f Eq
	if(var_474_bool == 0) goto Label_1413; // 0x570 JumpB
	var_475_string = ""; // 0x571 PushV
	var_475_string = "Neutral"; // 0x572 MovS
	func_624(var_31_bool, var_475_string); // 0x573 Call
	var_476_int = 5784; // 0x575 PushI
	SetMessage(var_476_int); // 0x576 TObjFunc
	ClearReplies(); // 0x578 TObjFunc
	var_477_int = 5785; // 0x57a PushI
	var_478_int = -1; // 0x57b PushI
	var_479_int = 6372; // 0x57c PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x57d TObjFunc
	var_480_int = 5786; // 0x57f PushI
	var_481_int = -1; // 0x580 PushI
	var_482_int = 6373; // 0x581 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x582 TObjFunc
	return 0; // 0x584 Return
	
Label_1413:
	var_483_int = 6356; // 0x585 PushI
	var_484_bool = var_30_string == var_483_int; // 0x586 Eq
	if(var_484_bool == 0) goto Label_1436; // 0x587 JumpB
	var_485_string = ""; // 0x588 PushV
	var_485_string = "Neutral"; // 0x589 MovS
	func_624(var_31_bool, var_485_string); // 0x58a Call
	var_486_int = 5771; // 0x58c PushI
	SetMessage(var_486_int); // 0x58d TObjFunc
	ClearReplies(); // 0x58f TObjFunc
	var_487_int = 5772; // 0x591 PushI
	var_488_int = 6358; // 0x592 PushI
	var_489_int = 6357; // 0x593 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x594 TObjFunc
	var_490_int = 5781; // 0x596 PushI
	var_491_int = 6358; // 0x597 PushI
	var_492_int = 6367; // 0x598 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x599 TObjFunc
	return 0; // 0x59b Return
	
Label_1436:
	var_493_int = 6358; // 0x59c PushI
	var_494_bool = var_30_string == var_493_int; // 0x59d Eq
	if(var_494_bool == 0) goto Label_1459; // 0x59e JumpB
	var_495_string = ""; // 0x59f PushV
	var_495_string = "Neutral"; // 0x5a0 MovS
	func_624(var_31_bool, var_495_string); // 0x5a1 Call
	var_496_int = 5773; // 0x5a3 PushI
	SetMessage(var_496_int); // 0x5a4 TObjFunc
	ClearReplies(); // 0x5a6 TObjFunc
	var_497_int = 5774; // 0x5a8 PushI
	var_498_int = 6360; // 0x5a9 PushI
	var_499_int = 6359; // 0x5aa PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x5ab TObjFunc
	var_500_int = 5780; // 0x5ad PushI
	var_501_int = 6360; // 0x5ae PushI
	var_502_int = 6365; // 0x5af PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x5b0 TObjFunc
	return 0; // 0x5b2 Return
	
Label_1459:
	var_503_int = 6360; // 0x5b3 PushI
	var_504_bool = var_30_string == var_503_int; // 0x5b4 Eq
	if(var_504_bool == 0) goto Label_1482; // 0x5b5 JumpB
	var_505_string = ""; // 0x5b6 PushV
	var_505_string = "Neutral"; // 0x5b7 MovS
	func_624(var_31_bool, var_505_string); // 0x5b8 Call
	var_506_int = 5775; // 0x5ba PushI
	SetMessage(var_506_int); // 0x5bb TObjFunc
	ClearReplies(); // 0x5bd TObjFunc
	var_507_int = 5777; // 0x5bf PushI
	var_508_int = 6363; // 0x5c0 PushI
	var_509_int = 6362; // 0x5c1 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x5c2 TObjFunc
	var_510_int = 5776; // 0x5c4 PushI
	var_511_int = -1; // 0x5c5 PushI
	var_512_int = 6361; // 0x5c6 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x5c7 TObjFunc
	return 0; // 0x5c9 Return
	
Label_1482:
	var_513_int = 6363; // 0x5ca PushI
	var_514_bool = var_30_string == var_513_int; // 0x5cb Eq
	if(var_514_bool == 0) goto Label_1500; // 0x5cc JumpB
	var_515_string = ""; // 0x5cd PushV
	var_515_string = "Neutral"; // 0x5ce MovS
	func_624(var_31_bool, var_515_string); // 0x5cf Call
	var_516_int = 5778; // 0x5d1 PushI
	SetMessage(var_516_int); // 0x5d2 TObjFunc
	ClearReplies(); // 0x5d4 TObjFunc
	var_517_int = 5779; // 0x5d6 PushI
	var_518_int = -1; // 0x5d7 PushI
	var_519_int = 6364; // 0x5d8 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x5d9 TObjFunc
	return 0; // 0x5db Return
	
Label_1500:
	var_3_string = 1; // 0x5dc TMovB
	var_520_bool = 0; // 0x5dd PushV
	func_3951(var_520_bool); // 0x5de Call
	if(var_520_bool == 0) goto Label_1508; // 0x5e0 JumpB
	lshStopAnimation(); // 0x5e1 Func
	goto Label_1510; // 0x5e3 Jump
	
Label_1510:
	return 0; // 0x5e6 Return
	
Label_1508:
	StopAnimation(); // 0x5e4 Func
	
Label_1512:
	return 0; // 0x5e8 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x6d9 PushI
	if(var_32_int == 0) goto Label_2370; // 0x6da JumpB
	func_3850(); // 0x6dc Call
	var_34_int = 8221; // 0x6de PushI
	var_35_bool = var_31_bool == var_34_int; // 0x6df Eq
	if(var_35_bool == 0) goto Label_1771; // 0x6e0 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x6e1 PushV
	var_36_object = var_1_object; // 0x6e2 MovT
	var_37_object = var_0_object; // 0x6e3 MovT
	func_3965(); // 0x6e4 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0x6e6 PushV
	var_40_object = var_1_object; // 0x6e7 MovT
	var_41_object = var_0_object; // 0x6e8 MovT
	func_3983(); // 0x6e9 Call
	
Label_1771:
	var_85_int = 8222; // 0x6eb PushI
	var_86_bool = var_31_bool == var_85_int; // 0x6ec Eq
	if(var_86_bool == 0) goto Label_1779; // 0x6ed JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x6ee PushV
	var_87_object = var_1_object; // 0x6ef MovT
	var_88_object = var_0_object; // 0x6f0 MovT
	func_3965(); // 0x6f1 Call
	
Label_1779:
	var_89_int = 8210; // 0x6f3 PushI
	var_90_bool = var_31_bool == var_89_int; // 0x6f4 Eq
	if(var_90_bool == 0) goto Label_1792; // 0x6f5 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x6f6 PushV
	var_91_object = var_1_object; // 0x6f7 MovT
	var_92_object = var_0_object; // 0x6f8 MovT
	func_3971(); // 0x6f9 Call
	var_95_object = Obj(); var_96_object = Obj(); // 0x6fb PushV
	var_95_object = var_1_object; // 0x6fc MovT
	var_96_object = var_0_object; // 0x6fd MovT
	func_4006(); // 0x6fe Call
	
Label_1792:
	var_121_int = 8201; // 0x700 PushI
	var_122_bool = var_31_bool == var_121_int; // 0x701 Eq
	if(var_122_bool == 0) goto Label_1800; // 0x702 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x703 PushV
	var_123_object = var_1_object; // 0x704 MovT
	var_124_object = var_0_object; // 0x705 MovT
	func_3977(); // 0x706 Call
	
Label_1800:
	var_127_int = 7583; // 0x708 PushI
	var_128_bool = var_30_string == var_127_int; // 0x709 Eq
	if(var_128_bool == 0) goto Label_1925; // 0x70a JumpB
	var_129_string = ""; // 0x70b PushV
	var_129_string = "Neutral"; // 0x70c MovS
	func_1736(var_31_bool, var_129_string); // 0x70d Call
	var_144_int = 6877; // 0x70f PushI
	SetMessage(var_144_int); // 0x710 TObjFunc
	ClearReplies(); // 0x712 TObjFunc
	var_145_bool = 0; // 0x714 PushV
	var_145_bool = 0; // 0x715 MovB
	var_146_bool = 0; var_147_object = Obj(); // 0x716 PushV
	var_147_object = var_1_object; // 0x717 MovT
	func_4216(var_147_object); // 0x718 Call
	if(var_146_bool == 0) goto Label_1825; // 0x71a JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x71b PushV
	var_155_object = var_1_object; // 0x71c MovT
	func_4264(var_155_object); // 0x71d Call
	if(var_154_bool == 0) goto Label_1825; // 0x71f JumpB
	var_145_bool = 1; // 0x720 MovB
	
Label_1825:
	if(var_145_bool == 0) goto Label_1831; // 0x721 JumpB
	var_160_int = 6878; // 0x722 PushI
	var_161_int = 7585; // 0x723 PushI
	var_162_int = 7584; // 0x724 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x725 TObjFunc
	
Label_1831:
	var_163_bool = 0; // 0x727 PushV
	var_163_bool = 0; // 0x728 MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x729 PushV
	var_165_object = var_1_object; // 0x72a MovT
	func_4228(var_165_object); // 0x72b Call
	if(var_164_bool == 0) goto Label_1844; // 0x72d JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x72e PushV
	var_171_object = var_1_object; // 0x72f MovT
	func_4288(var_171_object); // 0x730 Call
	if(var_170_bool == 0) goto Label_1844; // 0x732 JumpB
	var_163_bool = 1; // 0x733 MovB
	
Label_1844:
	if(var_163_bool == 0) goto Label_1850; // 0x734 JumpB
	var_176_int = 7431; // 0x735 PushI
	var_177_int = 8203; // 0x736 PushI
	var_178_int = 8202; // 0x737 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x738 TObjFunc
	
Label_1850:
	var_179_bool = 0; // 0x73a PushV
	var_179_bool = 0; // 0x73b MovB
	var_180_bool = 0; var_181_object = Obj(); // 0x73c PushV
	var_181_object = var_1_object; // 0x73d MovT
	func_4240(var_181_object); // 0x73e Call
	if(var_180_bool == 0) goto Label_1863; // 0x740 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x741 PushV
	var_187_object = var_1_object; // 0x742 MovT
	func_4252(var_187_object); // 0x743 Call
	if(var_186_bool == 0) goto Label_1863; // 0x745 JumpB
	var_179_bool = 1; // 0x746 MovB
	
Label_1863:
	if(var_179_bool == 0) goto Label_1869; // 0x747 JumpB
	var_192_int = 6884; // 0x748 PushI
	var_193_int = 7591; // 0x749 PushI
	var_194_int = 7590; // 0x74a PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x74b TObjFunc
	
Label_1869:
	var_195_int = 7529; // 0x74d PushI
	var_196_int = -1; // 0x74e PushI
	var_197_int = 8311; // 0x74f PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x750 TObjFunc
	return 0; // 0x752 Return
	
Label_1925:
	var_198_int = 10370; // 0x785 PushI
	var_199_bool = var_30_string == var_198_int; // 0x786 Eq
	if(var_199_bool == 0) goto Label_1943; // 0x787 JumpB
	var_200_string = ""; // 0x788 PushV
	var_200_string = "Neutral"; // 0x789 MovS
	func_1736(var_31_bool, var_200_string); // 0x78a Call
	var_201_int = 9436; // 0x78c PushI
	SetMessage(var_201_int); // 0x78d TObjFunc
	ClearReplies(); // 0x78f TObjFunc
	var_202_int = 9437; // 0x791 PushI
	var_203_int = 10356; // 0x792 PushI
	var_204_int = 10371; // 0x793 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x794 TObjFunc
	return 0; // 0x796 Return
	
Label_1943:
	var_205_int = 10366; // 0x797 PushI
	var_206_bool = var_30_string == var_205_int; // 0x798 Eq
	if(var_206_bool == 0) goto Label_1961; // 0x799 JumpB
	var_207_string = ""; // 0x79a PushV
	var_207_string = "Neutral"; // 0x79b MovS
	func_1736(var_31_bool, var_207_string); // 0x79c Call
	var_208_int = 9433; // 0x79e PushI
	SetMessage(var_208_int); // 0x79f TObjFunc
	ClearReplies(); // 0x7a1 TObjFunc
	var_209_int = 9434; // 0x7a3 PushI
	var_210_int = 10356; // 0x7a4 PushI
	var_211_int = 10367; // 0x7a5 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x7a6 TObjFunc
	return 0; // 0x7a8 Return
	
Label_1961:
	var_212_int = 10356; // 0x7a9 PushI
	var_213_bool = var_30_string == var_212_int; // 0x7aa Eq
	if(var_213_bool == 0) goto Label_1984; // 0x7ab JumpB
	var_214_string = ""; // 0x7ac PushV
	var_214_string = "Neutral"; // 0x7ad MovS
	func_1736(var_31_bool, var_214_string); // 0x7ae Call
	var_215_int = 9424; // 0x7b0 PushI
	SetMessage(var_215_int); // 0x7b1 TObjFunc
	ClearReplies(); // 0x7b3 TObjFunc
	var_216_int = 9425; // 0x7b5 PushI
	var_217_int = 10358; // 0x7b6 PushI
	var_218_int = 10357; // 0x7b7 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x7b8 TObjFunc
	var_219_int = 9429; // 0x7ba PushI
	var_220_int = 10362; // 0x7bb PushI
	var_221_int = 10361; // 0x7bc PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x7bd TObjFunc
	return 0; // 0x7bf Return
	
Label_1984:
	var_222_int = 10362; // 0x7c0 PushI
	var_223_bool = var_30_string == var_222_int; // 0x7c1 Eq
	if(var_223_bool == 0) goto Label_2002; // 0x7c2 JumpB
	var_224_string = ""; // 0x7c3 PushV
	var_224_string = "Neutral"; // 0x7c4 MovS
	func_1736(var_31_bool, var_224_string); // 0x7c5 Call
	var_225_int = 9430; // 0x7c7 PushI
	SetMessage(var_225_int); // 0x7c8 TObjFunc
	ClearReplies(); // 0x7ca TObjFunc
	var_226_int = 9431; // 0x7cc PushI
	var_227_int = 10358; // 0x7cd PushI
	var_228_int = 10363; // 0x7ce PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x7cf TObjFunc
	return 0; // 0x7d1 Return
	
Label_2002:
	var_229_int = 10358; // 0x7d2 PushI
	var_230_bool = var_30_string == var_229_int; // 0x7d3 Eq
	if(var_230_bool == 0) goto Label_2025; // 0x7d4 JumpB
	var_231_string = ""; // 0x7d5 PushV
	var_231_string = "Neutral"; // 0x7d6 MovS
	func_1736(var_31_bool, var_231_string); // 0x7d7 Call
	var_232_int = 9426; // 0x7d9 PushI
	SetMessage(var_232_int); // 0x7da TObjFunc
	ClearReplies(); // 0x7dc TObjFunc
	var_233_int = 9427; // 0x7de PushI
	var_234_int = -1; // 0x7df PushI
	var_235_int = 10359; // 0x7e0 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x7e1 TObjFunc
	var_236_int = 9428; // 0x7e3 PushI
	var_237_int = -1; // 0x7e4 PushI
	var_238_int = 10360; // 0x7e5 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x7e6 TObjFunc
	return 0; // 0x7e8 Return
	
Label_2025:
	var_239_int = 10351; // 0x7e9 PushI
	var_240_bool = var_30_string == var_239_int; // 0x7ea Eq
	if(var_240_bool == 0) goto Label_2043; // 0x7eb JumpB
	var_241_string = ""; // 0x7ec PushV
	var_241_string = "Neutral"; // 0x7ed MovS
	func_1736(var_31_bool, var_241_string); // 0x7ee Call
	var_242_int = 9420; // 0x7f0 PushI
	SetMessage(var_242_int); // 0x7f1 TObjFunc
	ClearReplies(); // 0x7f3 TObjFunc
	var_243_int = 9421; // 0x7f5 PushI
	var_244_int = 10339; // 0x7f6 PushI
	var_245_int = 10352; // 0x7f7 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x7f8 TObjFunc
	return 0; // 0x7fa Return
	
Label_2043:
	var_246_int = 10339; // 0x7fb PushI
	var_247_bool = var_30_string == var_246_int; // 0x7fc Eq
	if(var_247_bool == 0) goto Label_2066; // 0x7fd JumpB
	var_248_string = ""; // 0x7fe PushV
	var_248_string = "Neutral"; // 0x7ff MovS
	func_1736(var_31_bool, var_248_string); // 0x800 Call
	var_249_int = 9410; // 0x802 PushI
	SetMessage(var_249_int); // 0x803 TObjFunc
	ClearReplies(); // 0x805 TObjFunc
	var_250_int = 9411; // 0x807 PushI
	var_251_int = 10341; // 0x808 PushI
	var_252_int = 10340; // 0x809 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x80a TObjFunc
	var_253_int = 9417; // 0x80c PushI
	var_254_int = -1; // 0x80d PushI
	var_255_int = 10347; // 0x80e PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x80f TObjFunc
	return 0; // 0x811 Return
	
Label_2066:
	var_256_int = 10341; // 0x812 PushI
	var_257_bool = var_30_string == var_256_int; // 0x813 Eq
	if(var_257_bool == 0) goto Label_2089; // 0x814 JumpB
	var_258_string = ""; // 0x815 PushV
	var_258_string = "Neutral"; // 0x816 MovS
	func_1736(var_31_bool, var_258_string); // 0x817 Call
	var_259_int = 9412; // 0x819 PushI
	SetMessage(var_259_int); // 0x81a TObjFunc
	ClearReplies(); // 0x81c TObjFunc
	var_260_int = 9413; // 0x81e PushI
	var_261_int = 10343; // 0x81f PushI
	var_262_int = 10342; // 0x820 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x821 TObjFunc
	var_263_int = 9416; // 0x823 PushI
	var_264_int = 10343; // 0x824 PushI
	var_265_int = 10345; // 0x825 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x826 TObjFunc
	return 0; // 0x828 Return
	
Label_2089:
	var_266_int = 10343; // 0x829 PushI
	var_267_bool = var_30_string == var_266_int; // 0x82a Eq
	if(var_267_bool == 0) goto Label_2107; // 0x82b JumpB
	var_268_string = ""; // 0x82c PushV
	var_268_string = "Neutral"; // 0x82d MovS
	func_1736(var_31_bool, var_268_string); // 0x82e Call
	var_269_int = 9414; // 0x830 PushI
	SetMessage(var_269_int); // 0x831 TObjFunc
	ClearReplies(); // 0x833 TObjFunc
	var_270_int = 9415; // 0x835 PushI
	var_271_int = -1; // 0x836 PushI
	var_272_int = 10344; // 0x837 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x838 TObjFunc
	return 0; // 0x83a Return
	
Label_2107:
	var_273_int = 7591; // 0x83b PushI
	var_274_bool = var_30_string == var_273_int; // 0x83c Eq
	if(var_274_bool == 0) goto Label_2125; // 0x83d JumpB
	var_275_string = ""; // 0x83e PushV
	var_275_string = "Neutral"; // 0x83f MovS
	func_1736(var_31_bool, var_275_string); // 0x840 Call
	var_276_int = 6885; // 0x842 PushI
	SetMessage(var_276_int); // 0x843 TObjFunc
	ClearReplies(); // 0x845 TObjFunc
	var_277_int = 7430; // 0x847 PushI
	var_278_int = -1; // 0x848 PushI
	var_279_int = 8201; // 0x849 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x84a TObjFunc
	return 0; // 0x84c Return
	
Label_2125:
	var_280_int = 8203; // 0x84d PushI
	var_281_bool = var_30_string == var_280_int; // 0x84e Eq
	if(var_281_bool == 0) goto Label_2143; // 0x84f JumpB
	var_282_string = ""; // 0x850 PushV
	var_282_string = "Neutral"; // 0x851 MovS
	func_1736(var_31_bool, var_282_string); // 0x852 Call
	var_283_int = 7432; // 0x854 PushI
	SetMessage(var_283_int); // 0x855 TObjFunc
	ClearReplies(); // 0x857 TObjFunc
	var_284_int = 7433; // 0x859 PushI
	var_285_int = 8205; // 0x85a PushI
	var_286_int = 8204; // 0x85b PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x85c TObjFunc
	return 0; // 0x85e Return
	
Label_2143:
	var_287_int = 8205; // 0x85f PushI
	var_288_bool = var_30_string == var_287_int; // 0x860 Eq
	if(var_288_bool == 0) goto Label_2161; // 0x861 JumpB
	var_289_string = ""; // 0x862 PushV
	var_289_string = "Neutral"; // 0x863 MovS
	func_1736(var_31_bool, var_289_string); // 0x864 Call
	var_290_int = 7434; // 0x866 PushI
	SetMessage(var_290_int); // 0x867 TObjFunc
	ClearReplies(); // 0x869 TObjFunc
	var_291_int = 6882; // 0x86b PushI
	var_292_int = 7589; // 0x86c PushI
	var_293_int = 7588; // 0x86d PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x86e TObjFunc
	return 0; // 0x870 Return
	
Label_2161:
	var_294_int = 7589; // 0x871 PushI
	var_295_bool = var_30_string == var_294_int; // 0x872 Eq
	if(var_295_bool == 0) goto Label_2184; // 0x873 JumpB
	var_296_string = ""; // 0x874 PushV
	var_296_string = "Neutral"; // 0x875 MovS
	func_1736(var_31_bool, var_296_string); // 0x876 Call
	var_297_int = 6883; // 0x878 PushI
	SetMessage(var_297_int); // 0x879 TObjFunc
	ClearReplies(); // 0x87b TObjFunc
	var_298_int = 7435; // 0x87d PushI
	var_299_int = 8207; // 0x87e PushI
	var_300_int = 8206; // 0x87f PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x880 TObjFunc
	var_301_int = 7440; // 0x882 PushI
	var_302_int = 8207; // 0x883 PushI
	var_303_int = 8211; // 0x884 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x885 TObjFunc
	return 0; // 0x887 Return
	
Label_2184:
	var_304_int = 8207; // 0x888 PushI
	var_305_bool = var_30_string == var_304_int; // 0x889 Eq
	if(var_305_bool == 0) goto Label_2207; // 0x88a JumpB
	var_306_string = ""; // 0x88b PushV
	var_306_string = "Neutral"; // 0x88c MovS
	func_1736(var_31_bool, var_306_string); // 0x88d Call
	var_307_int = 7436; // 0x88f PushI
	SetMessage(var_307_int); // 0x890 TObjFunc
	ClearReplies(); // 0x892 TObjFunc
	var_308_int = 7437; // 0x894 PushI
	var_309_int = 8209; // 0x895 PushI
	var_310_int = 8208; // 0x896 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x897 TObjFunc
	var_311_int = 7441; // 0x899 PushI
	var_312_int = 8209; // 0x89a PushI
	var_313_int = 8213; // 0x89b PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x89c TObjFunc
	return 0; // 0x89e Return
	
Label_2207:
	var_314_int = 8209; // 0x89f PushI
	var_315_bool = var_30_string == var_314_int; // 0x8a0 Eq
	if(var_315_bool == 0) goto Label_2225; // 0x8a1 JumpB
	var_316_string = ""; // 0x8a2 PushV
	var_316_string = "Neutral"; // 0x8a3 MovS
	func_1736(var_31_bool, var_316_string); // 0x8a4 Call
	var_317_int = 7438; // 0x8a6 PushI
	SetMessage(var_317_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_318_int = 7439; // 0x8ab PushI
	var_319_int = -1; // 0x8ac PushI
	var_320_int = 8210; // 0x8ad PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x8ae TObjFunc
	return 0; // 0x8b0 Return
	
Label_2225:
	var_321_int = 7585; // 0x8b1 PushI
	var_322_bool = var_30_string == var_321_int; // 0x8b2 Eq
	if(var_322_bool == 0) goto Label_2248; // 0x8b3 JumpB
	var_323_string = ""; // 0x8b4 PushV
	var_323_string = "Neutral"; // 0x8b5 MovS
	func_1736(var_31_bool, var_323_string); // 0x8b6 Call
	var_324_int = 6879; // 0x8b8 PushI
	SetMessage(var_324_int); // 0x8b9 TObjFunc
	ClearReplies(); // 0x8bb TObjFunc
	var_325_int = 6880; // 0x8bd PushI
	var_326_int = 7587; // 0x8be PushI
	var_327_int = 7586; // 0x8bf PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x8c0 TObjFunc
	var_328_int = 7450; // 0x8c2 PushI
	var_329_int = 8216; // 0x8c3 PushI
	var_330_int = 8223; // 0x8c4 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x8c5 TObjFunc
	return 0; // 0x8c7 Return
	
Label_2248:
	var_331_int = 7587; // 0x8c8 PushI
	var_332_bool = var_30_string == var_331_int; // 0x8c9 Eq
	if(var_332_bool == 0) goto Label_2276; // 0x8ca JumpB
	var_333_object = Obj(); var_334_object = Obj(); // 0x8cb PushV
	var_333_object = var_1_object; // 0x8cc MovT
	var_334_object = var_0_object; // 0x8cd MovT
	func_3959(); // 0x8ce Call
	var_337_string = ""; // 0x8d0 PushV
	var_337_string = "Neutral"; // 0x8d1 MovS
	func_1736(var_31_bool, var_337_string); // 0x8d2 Call
	var_338_int = 6881; // 0x8d4 PushI
	SetMessage(var_338_int); // 0x8d5 TObjFunc
	ClearReplies(); // 0x8d7 TObjFunc
	var_339_int = 7442; // 0x8d9 PushI
	var_340_int = 8216; // 0x8da PushI
	var_341_int = 8215; // 0x8db PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x8dc TObjFunc
	var_342_int = 7451; // 0x8de PushI
	var_343_int = 8226; // 0x8df PushI
	var_344_int = 8225; // 0x8e0 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x8e1 TObjFunc
	return 0; // 0x8e3 Return
	
Label_2276:
	var_345_int = 8226; // 0x8e4 PushI
	var_346_bool = var_30_string == var_345_int; // 0x8e5 Eq
	if(var_346_bool == 0) goto Label_2294; // 0x8e6 JumpB
	var_347_string = ""; // 0x8e7 PushV
	var_347_string = "Neutral"; // 0x8e8 MovS
	func_1736(var_31_bool, var_347_string); // 0x8e9 Call
	var_348_int = 7452; // 0x8eb PushI
	SetMessage(var_348_int); // 0x8ec TObjFunc
	ClearReplies(); // 0x8ee TObjFunc
	var_349_int = 7453; // 0x8f0 PushI
	var_350_int = 8216; // 0x8f1 PushI
	var_351_int = 8227; // 0x8f2 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x8f3 TObjFunc
	return 0; // 0x8f5 Return
	
Label_2294:
	var_352_int = 8216; // 0x8f6 PushI
	var_353_bool = var_30_string == var_352_int; // 0x8f7 Eq
	if(var_353_bool == 0) goto Label_2312; // 0x8f8 JumpB
	var_354_string = ""; // 0x8f9 PushV
	var_354_string = "Neutral"; // 0x8fa MovS
	func_1736(var_31_bool, var_354_string); // 0x8fb Call
	var_355_int = 7443; // 0x8fd PushI
	SetMessage(var_355_int); // 0x8fe TObjFunc
	ClearReplies(); // 0x900 TObjFunc
	var_356_int = 7444; // 0x902 PushI
	var_357_int = 8218; // 0x903 PushI
	var_358_int = 8217; // 0x904 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x905 TObjFunc
	return 0; // 0x907 Return
	
Label_2312:
	var_359_int = 8218; // 0x908 PushI
	var_360_bool = var_30_string == var_359_int; // 0x909 Eq
	if(var_360_bool == 0) goto Label_2340; // 0x90a JumpB
	var_361_string = ""; // 0x90b PushV
	var_361_string = "Neutral"; // 0x90c MovS
	func_1736(var_31_bool, var_361_string); // 0x90d Call
	var_362_int = 7445; // 0x90f PushI
	SetMessage(var_362_int); // 0x910 TObjFunc
	ClearReplies(); // 0x912 TObjFunc
	var_363_int = 7446; // 0x914 PushI
	var_364_int = 8220; // 0x915 PushI
	var_365_int = 8219; // 0x916 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x917 TObjFunc
	var_366_bool = 0; var_367_object = Obj(); // 0x919 PushV
	var_367_object = var_1_object; // 0x91a MovT
	func_4276(var_367_object); // 0x91b Call
	if(var_366_bool == 0) goto Label_2339; // 0x91d JumpB
	var_372_int = 7449; // 0x91e PushI
	var_373_int = -1; // 0x91f PushI
	var_374_int = 8222; // 0x920 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x921 TObjFunc
	
Label_2339:
	return 0; // 0x923 Return
	
Label_2340:
	var_375_int = 8220; // 0x924 PushI
	var_376_bool = var_30_string == var_375_int; // 0x925 Eq
	if(var_376_bool == 0) goto Label_2358; // 0x926 JumpB
	var_377_string = ""; // 0x927 PushV
	var_377_string = "Neutral"; // 0x928 MovS
	func_1736(var_31_bool, var_377_string); // 0x929 Call
	var_378_int = 7447; // 0x92b PushI
	SetMessage(var_378_int); // 0x92c TObjFunc
	ClearReplies(); // 0x92e TObjFunc
	var_379_int = 7448; // 0x930 PushI
	var_380_int = -1; // 0x931 PushI
	var_381_int = 8221; // 0x932 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x933 TObjFunc
	return 0; // 0x935 Return
	
Label_2358:
	var_3_string = 1; // 0x936 TMovB
	var_382_bool = 0; // 0x937 PushV
	func_3951(var_382_bool); // 0x938 Call
	if(var_382_bool == 0) goto Label_2366; // 0x93a JumpB
	lshStopAnimation(); // 0x93b Func
	goto Label_2368; // 0x93d Jump
	
Label_2368:
	return 0; // 0x940 Return
	
Label_2366:
	StopAnimation(); // 0x93e Func
	
Label_2370:
	return 0; // 0x942 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x9e6 PushI
	if(var_32_int == 0) goto Label_2673; // 0x9e7 JumpB
	func_3850(); // 0x9e9 Call
	var_34_int = 11052; // 0x9eb PushI
	var_35_bool = var_30_string == var_34_int; // 0x9ec Eq
	if(var_35_bool == 0) goto Label_2587; // 0x9ed JumpB
	var_36_bool = 0; var_37_object = Obj(); // 0x9ee PushV
	var_37_object = var_1_object; // 0x9ef MovT
	func_4560(var_37_object); // 0x9f0 Call
	if(var_36_bool == 0) goto Label_2572; // 0x9f2 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x9f3 PushV
	var_44_object = var_1_object; // 0x9f4 MovT
	var_45_object = var_0_object; // 0x9f5 MovT
	func_4192(); // 0x9f6 Call
	var_48_string = ""; // 0x9f8 PushV
	var_48_string = "Neutral"; // 0x9f9 MovS
	func_2517(var_31_bool, var_48_string); // 0x9fa Call
	var_63_int = 10030; // 0x9fc PushI
	SetMessage(var_63_int); // 0x9fd TObjFunc
	ClearReplies(); // 0x9ff TObjFunc
	var_64_int = 10031; // 0xa01 PushI
	var_65_int = 11054; // 0xa02 PushI
	var_66_int = 11053; // 0xa03 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xa04 TObjFunc
	var_67_int = 10039; // 0xa06 PushI
	var_68_int = 11063; // 0xa07 PushI
	var_69_int = 11062; // 0xa08 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xa09 TObjFunc
	return 0; // 0xa0b Return
	
Label_2572:
	var_70_string = ""; // 0xa0c PushV
	var_70_string = "Neutral"; // 0xa0d MovS
	func_2517(var_31_bool, var_70_string); // 0xa0e Call
	var_71_int = 15308; // 0xa10 PushI
	SetMessage(var_71_int); // 0xa11 TObjFunc
	ClearReplies(); // 0xa13 TObjFunc
	var_72_int = 15309; // 0xa15 PushI
	var_73_int = -1; // 0xa16 PushI
	var_74_int = 16547; // 0xa17 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xa18 TObjFunc
	return 0; // 0xa1a Return
	
Label_2587:
	var_75_int = 11063; // 0xa1b PushI
	var_76_bool = var_30_string == var_75_int; // 0xa1c Eq
	if(var_76_bool == 0) goto Label_2610; // 0xa1d JumpB
	var_77_string = ""; // 0xa1e PushV
	var_77_string = "Neutral"; // 0xa1f MovS
	func_2517(var_31_bool, var_77_string); // 0xa20 Call
	var_78_int = 10040; // 0xa22 PushI
	SetMessage(var_78_int); // 0xa23 TObjFunc
	ClearReplies(); // 0xa25 TObjFunc
	var_79_int = 10041; // 0xa27 PushI
	var_80_int = -1; // 0xa28 PushI
	var_81_int = 11064; // 0xa29 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xa2a TObjFunc
	var_82_int = 10042; // 0xa2c PushI
	var_83_int = 11056; // 0xa2d PushI
	var_84_int = 11065; // 0xa2e PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xa2f TObjFunc
	return 0; // 0xa31 Return
	
Label_2610:
	var_85_int = 11054; // 0xa32 PushI
	var_86_bool = var_30_string == var_85_int; // 0xa33 Eq
	if(var_86_bool == 0) goto Label_2633; // 0xa34 JumpB
	var_87_string = ""; // 0xa35 PushV
	var_87_string = "Neutral"; // 0xa36 MovS
	func_2517(var_31_bool, var_87_string); // 0xa37 Call
	var_88_int = 10032; // 0xa39 PushI
	SetMessage(var_88_int); // 0xa3a TObjFunc
	ClearReplies(); // 0xa3c TObjFunc
	var_89_int = 10033; // 0xa3e PushI
	var_90_int = 11056; // 0xa3f PushI
	var_91_int = 11055; // 0xa40 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xa41 TObjFunc
	var_92_int = 10038; // 0xa43 PushI
	var_93_int = 11056; // 0xa44 PushI
	var_94_int = 11060; // 0xa45 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xa46 TObjFunc
	return 0; // 0xa48 Return
	
Label_2633:
	var_95_int = 11056; // 0xa49 PushI
	var_96_bool = var_30_string == var_95_int; // 0xa4a Eq
	if(var_96_bool == 0) goto Label_2661; // 0xa4b JumpB
	var_97_string = ""; // 0xa4c PushV
	var_97_string = "Neutral"; // 0xa4d MovS
	func_2517(var_31_bool, var_97_string); // 0xa4e Call
	var_98_int = 10034; // 0xa50 PushI
	SetMessage(var_98_int); // 0xa51 TObjFunc
	ClearReplies(); // 0xa53 TObjFunc
	var_99_int = 10035; // 0xa55 PushI
	var_100_int = -1; // 0xa56 PushI
	var_101_int = 11057; // 0xa57 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xa58 TObjFunc
	var_102_int = 10036; // 0xa5a PushI
	var_103_int = -1; // 0xa5b PushI
	var_104_int = 11058; // 0xa5c PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xa5d TObjFunc
	var_105_int = 10037; // 0xa5f PushI
	var_106_int = -1; // 0xa60 PushI
	var_107_int = 11059; // 0xa61 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xa62 TObjFunc
	return 0; // 0xa64 Return
	
Label_2661:
	var_3_string = 1; // 0xa65 TMovB
	var_108_bool = 0; // 0xa66 PushV
	func_3951(var_108_bool); // 0xa67 Call
	if(var_108_bool == 0) goto Label_2669; // 0xa69 JumpB
	lshStopAnimation(); // 0xa6a Func
	goto Label_2671; // 0xa6c Jump
	
Label_2671:
	return 0; // 0xa6f Return
	
Label_2669:
	StopAnimation(); // 0xa6d Func
	
Label_2673:
	return 0; // 0xa71 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xb28 PushI
	if(var_32_int == 0) goto Label_3182; // 0xb29 JumpB
	func_3850(); // 0xb2b Call
	var_34_int = 14602; // 0xb2d PushI
	var_35_bool = var_31_bool == var_34_int; // 0xb2e Eq
	if(var_35_bool == 0) goto Label_2874; // 0xb2f JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xb30 PushV
	var_36_object = var_1_object; // 0xb31 MovT
	var_37_object = var_0_object; // 0xb32 MovT
	func_4163(); // 0xb33 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xb35 PushV
	var_40_object = var_1_object; // 0xb36 MovT
	var_41_object = var_0_object; // 0xb37 MovT
	func_4104(); // 0xb38 Call
	
Label_2874:
	var_69_int = 14605; // 0xb3a PushI
	var_70_bool = var_31_bool == var_69_int; // 0xb3b Eq
	if(var_70_bool == 0) goto Label_2882; // 0xb3c JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0xb3d PushV
	var_71_object = var_1_object; // 0xb3e MovT
	var_72_object = var_0_object; // 0xb3f MovT
	func_4163(); // 0xb40 Call
	
Label_2882:
	var_73_int = 14608; // 0xb42 PushI
	var_74_bool = var_31_bool == var_73_int; // 0xb43 Eq
	if(var_74_bool == 0) goto Label_2890; // 0xb44 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xb45 PushV
	var_75_object = var_1_object; // 0xb46 MovT
	var_76_object = var_0_object; // 0xb47 MovT
	func_4104(); // 0xb48 Call
	
Label_2890:
	var_77_int = 14626; // 0xb4a PushI
	var_78_bool = var_31_bool == var_77_int; // 0xb4b Eq
	if(var_78_bool == 0) goto Label_2913; // 0xb4c JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xb4d PushV
	var_79_object = var_1_object; // 0xb4e MovT
	var_80_object = var_0_object; // 0xb4f MovT
	func_4113(); // 0xb50 Call
	var_83_object = Obj(); var_84_object = Obj(); // 0xb52 PushV
	var_83_object = var_1_object; // 0xb53 MovT
	var_84_object = var_0_object; // 0xb54 MovT
	func_4119(); // 0xb55 Call
	var_123_object = Obj(); var_124_object = Obj(); // 0xb57 PushV
	var_123_object = var_1_object; // 0xb58 MovT
	var_124_object = var_0_object; // 0xb59 MovT
	func_4169(var_124_object); // 0xb5a Call
	var_142_object = Obj(); var_143_object = Obj(); // 0xb5c PushV
	var_142_object = var_1_object; // 0xb5d MovT
	var_143_object = var_0_object; // 0xb5e MovT
	func_3953(); // 0xb5f Call
	
Label_2913:
	var_146_int = 14585; // 0xb61 PushI
	var_147_bool = var_30_string == var_146_int; // 0xb62 Eq
	if(var_147_bool == 0) goto Label_2980; // 0xb63 JumpB
	var_148_string = ""; // 0xb64 PushV
	var_148_string = "Neutral"; // 0xb65 MovS
	func_2839(var_31_bool, var_148_string); // 0xb66 Call
	var_163_int = 13353; // 0xb68 PushI
	SetMessage(var_163_int); // 0xb69 TObjFunc
	ClearReplies(); // 0xb6b TObjFunc
	var_164_bool = 0; // 0xb6d PushV
	var_164_bool = 0; // 0xb6e MovB
	var_165_bool = 0; var_166_object = Obj(); // 0xb6f PushV
	var_166_object = var_1_object; // 0xb70 MovT
	func_4440(var_166_object); // 0xb71 Call
	if(var_165_bool == 0) goto Label_2938; // 0xb73 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0xb74 PushV
	var_172_object = var_1_object; // 0xb75 MovT
	func_4428(var_172_object); // 0xb76 Call
	if(var_171_bool == 0) goto Label_2938; // 0xb78 JumpB
	var_164_bool = 1; // 0xb79 MovB
	
Label_2938:
	if(var_164_bool == 0) goto Label_2944; // 0xb7a JumpB
	var_177_int = 13355; // 0xb7b PushI
	var_178_int = 14598; // 0xb7c PushI
	var_179_int = 14587; // 0xb7d PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xb7e TObjFunc
	
Label_2944:
	var_180_bool = 0; // 0xb80 PushV
	var_180_bool = 0; // 0xb81 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0xb82 PushV
	var_182_object = var_1_object; // 0xb83 MovT
	func_4440(var_182_object); // 0xb84 Call
	var_183_bool = var_181_bool == 0; // 0xb86 Not
	if(var_183_bool == 0) goto Label_2958; // 0xb87 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0xb88 PushV
	var_185_object = var_1_object; // 0xb89 MovT
	func_4428(var_185_object); // 0xb8a Call
	if(var_184_bool == 0) goto Label_2958; // 0xb8c JumpB
	var_180_bool = 1; // 0xb8d MovB
	
Label_2958:
	if(var_180_bool == 0) goto Label_2964; // 0xb8e JumpB
	var_186_int = 13374; // 0xb8f PushI
	var_187_int = 14607; // 0xb90 PushI
	var_188_int = 14606; // 0xb91 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xb92 TObjFunc
	
Label_2964:
	var_189_bool = 0; var_190_object = Obj(); // 0xb94 PushV
	var_190_object = var_1_object; // 0xb95 MovT
	func_4452(var_190_object); // 0xb96 Call
	if(var_189_bool == 0) goto Label_2974; // 0xb98 JumpB
	var_195_int = 13390; // 0xb99 PushI
	var_196_int = 14625; // 0xb9a PushI
	var_197_int = 14624; // 0xb9b PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xb9c TObjFunc
	
Label_2974:
	var_198_int = 13354; // 0xb9e PushI
	var_199_int = -1; // 0xb9f PushI
	var_200_int = 14586; // 0xba0 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xba1 TObjFunc
	return 0; // 0xba3 Return
	
Label_2980:
	var_201_int = 14625; // 0xba4 PushI
	var_202_bool = var_30_string == var_201_int; // 0xba5 Eq
	if(var_202_bool == 0) goto Label_2998; // 0xba6 JumpB
	var_203_string = ""; // 0xba7 PushV
	var_203_string = "Neutral"; // 0xba8 MovS
	func_2839(var_31_bool, var_203_string); // 0xba9 Call
	var_204_int = 13391; // 0xbab PushI
	SetMessage(var_204_int); // 0xbac TObjFunc
	ClearReplies(); // 0xbae TObjFunc
	var_205_int = 13392; // 0xbb0 PushI
	var_206_int = -1; // 0xbb1 PushI
	var_207_int = 14626; // 0xbb2 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xbb3 TObjFunc
	return 0; // 0xbb5 Return
	
Label_2998:
	var_208_int = 14607; // 0xbb6 PushI
	var_209_bool = var_30_string == var_208_int; // 0xbb7 Eq
	if(var_209_bool == 0) goto Label_3016; // 0xbb8 JumpB
	var_210_string = ""; // 0xbb9 PushV
	var_210_string = "Neutral"; // 0xbba MovS
	func_2839(var_31_bool, var_210_string); // 0xbbb Call
	var_211_int = 13375; // 0xbbd PushI
	SetMessage(var_211_int); // 0xbbe TObjFunc
	ClearReplies(); // 0xbc0 TObjFunc
	var_212_int = 13376; // 0xbc2 PushI
	var_213_int = -1; // 0xbc3 PushI
	var_214_int = 14608; // 0xbc4 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xbc5 TObjFunc
	return 0; // 0xbc7 Return
	
Label_3016:
	var_215_int = 14598; // 0xbc8 PushI
	var_216_bool = var_30_string == var_215_int; // 0xbc9 Eq
	if(var_216_bool == 0) goto Label_3034; // 0xbca JumpB
	var_217_string = ""; // 0xbcb PushV
	var_217_string = "Neutral"; // 0xbcc MovS
	func_2839(var_31_bool, var_217_string); // 0xbcd Call
	var_218_int = 13366; // 0xbcf PushI
	SetMessage(var_218_int); // 0xbd0 TObjFunc
	ClearReplies(); // 0xbd2 TObjFunc
	var_219_int = 13367; // 0xbd4 PushI
	var_220_int = 14588; // 0xbd5 PushI
	var_221_int = 14599; // 0xbd6 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xbd7 TObjFunc
	return 0; // 0xbd9 Return
	
Label_3034:
	var_222_int = 14588; // 0xbda PushI
	var_223_bool = var_30_string == var_222_int; // 0xbdb Eq
	if(var_223_bool == 0) goto Label_3052; // 0xbdc JumpB
	var_224_string = ""; // 0xbdd PushV
	var_224_string = "Neutral"; // 0xbde MovS
	func_2839(var_31_bool, var_224_string); // 0xbdf Call
	var_225_int = 13356; // 0xbe1 PushI
	SetMessage(var_225_int); // 0xbe2 TObjFunc
	ClearReplies(); // 0xbe4 TObjFunc
	var_226_int = 13357; // 0xbe6 PushI
	var_227_int = 14590; // 0xbe7 PushI
	var_228_int = 14589; // 0xbe8 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xbe9 TObjFunc
	return 0; // 0xbeb Return
	
Label_3052:
	var_229_int = 14590; // 0xbec PushI
	var_230_bool = var_30_string == var_229_int; // 0xbed Eq
	if(var_230_bool == 0) goto Label_3070; // 0xbee JumpB
	var_231_string = ""; // 0xbef PushV
	var_231_string = "Neutral"; // 0xbf0 MovS
	func_2839(var_31_bool, var_231_string); // 0xbf1 Call
	var_232_int = 13358; // 0xbf3 PushI
	SetMessage(var_232_int); // 0xbf4 TObjFunc
	ClearReplies(); // 0xbf6 TObjFunc
	var_233_int = 13359; // 0xbf8 PushI
	var_234_int = 14592; // 0xbf9 PushI
	var_235_int = 14591; // 0xbfa PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xbfb TObjFunc
	return 0; // 0xbfd Return
	
Label_3070:
	var_236_int = 14592; // 0xbfe PushI
	var_237_bool = var_30_string == var_236_int; // 0xbff Eq
	if(var_237_bool == 0) goto Label_3088; // 0xc00 JumpB
	var_238_string = ""; // 0xc01 PushV
	var_238_string = "Neutral"; // 0xc02 MovS
	func_2839(var_31_bool, var_238_string); // 0xc03 Call
	var_239_int = 13360; // 0xc05 PushI
	SetMessage(var_239_int); // 0xc06 TObjFunc
	ClearReplies(); // 0xc08 TObjFunc
	var_240_int = 13361; // 0xc0a PushI
	var_241_int = 14594; // 0xc0b PushI
	var_242_int = 14593; // 0xc0c PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0xc0d TObjFunc
	return 0; // 0xc0f Return
	
Label_3088:
	var_243_int = 14594; // 0xc10 PushI
	var_244_bool = var_30_string == var_243_int; // 0xc11 Eq
	if(var_244_bool == 0) goto Label_3111; // 0xc12 JumpB
	var_245_string = ""; // 0xc13 PushV
	var_245_string = "Neutral"; // 0xc14 MovS
	func_2839(var_31_bool, var_245_string); // 0xc15 Call
	var_246_int = 13362; // 0xc17 PushI
	SetMessage(var_246_int); // 0xc18 TObjFunc
	ClearReplies(); // 0xc1a TObjFunc
	var_247_int = 13364; // 0xc1c PushI
	var_248_int = 14597; // 0xc1d PushI
	var_249_int = 14596; // 0xc1e PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xc1f TObjFunc
	var_250_int = 13363; // 0xc21 PushI
	var_251_int = -1; // 0xc22 PushI
	var_252_int = 14595; // 0xc23 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xc24 TObjFunc
	return 0; // 0xc26 Return
	
Label_3111:
	var_253_int = 14597; // 0xc27 PushI
	var_254_bool = var_30_string == var_253_int; // 0xc28 Eq
	if(var_254_bool == 0) goto Label_3134; // 0xc29 JumpB
	var_255_string = ""; // 0xc2a PushV
	var_255_string = "Neutral"; // 0xc2b MovS
	func_2839(var_31_bool, var_255_string); // 0xc2c Call
	var_256_int = 13365; // 0xc2e PushI
	SetMessage(var_256_int); // 0xc2f TObjFunc
	ClearReplies(); // 0xc31 TObjFunc
	var_257_int = 13368; // 0xc33 PushI
	var_258_int = 14601; // 0xc34 PushI
	var_259_int = 14600; // 0xc35 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xc36 TObjFunc
	var_260_int = 13371; // 0xc38 PushI
	var_261_int = 14604; // 0xc39 PushI
	var_262_int = 14603; // 0xc3a PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xc3b TObjFunc
	return 0; // 0xc3d Return
	
Label_3134:
	var_263_int = 14604; // 0xc3e PushI
	var_264_bool = var_30_string == var_263_int; // 0xc3f Eq
	if(var_264_bool == 0) goto Label_3152; // 0xc40 JumpB
	var_265_string = ""; // 0xc41 PushV
	var_265_string = "Neutral"; // 0xc42 MovS
	func_2839(var_31_bool, var_265_string); // 0xc43 Call
	var_266_int = 13372; // 0xc45 PushI
	SetMessage(var_266_int); // 0xc46 TObjFunc
	ClearReplies(); // 0xc48 TObjFunc
	var_267_int = 13373; // 0xc4a PushI
	var_268_int = -1; // 0xc4b PushI
	var_269_int = 14605; // 0xc4c PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0xc4d TObjFunc
	return 0; // 0xc4f Return
	
Label_3152:
	var_270_int = 14601; // 0xc50 PushI
	var_271_bool = var_30_string == var_270_int; // 0xc51 Eq
	if(var_271_bool == 0) goto Label_3170; // 0xc52 JumpB
	var_272_string = ""; // 0xc53 PushV
	var_272_string = "Neutral"; // 0xc54 MovS
	func_2839(var_31_bool, var_272_string); // 0xc55 Call
	var_273_int = 13369; // 0xc57 PushI
	SetMessage(var_273_int); // 0xc58 TObjFunc
	ClearReplies(); // 0xc5a TObjFunc
	var_274_int = 13370; // 0xc5c PushI
	var_275_int = -1; // 0xc5d PushI
	var_276_int = 14602; // 0xc5e PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xc5f TObjFunc
	return 0; // 0xc61 Return
	
Label_3170:
	var_3_string = 1; // 0xc62 TMovB
	var_277_bool = 0; // 0xc63 PushV
	func_3951(var_277_bool); // 0xc64 Call
	if(var_277_bool == 0) goto Label_3178; // 0xc66 JumpB
	lshStopAnimation(); // 0xc67 Func
	goto Label_3180; // 0xc69 Jump
	
Label_3180:
	return 0; // 0xc6c Return
	
Label_3178:
	StopAnimation(); // 0xc6a Func
	
Label_3182:
	return 0; // 0xc6e Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 1; // 0xd2f PushI
	if(var_32_int == 0) goto Label_3754; // 0xd30 JumpB
	func_3850(); // 0xd32 Call
	var_34_int = 15708; // 0xd34 PushI
	var_35_bool = var_31_int == var_34_int; // 0xd35 Eq
	if(var_35_bool == 0) goto Label_3388; // 0xd36 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xd37 PushV
	var_36_object = var_1_object; // 0xd38 MovT
	var_37_object = var_0_object; // 0xd39 MovT
	func_4186(); // 0xd3a Call
	
Label_3388:
	var_40_int = 15693; // 0xd3c PushI
	var_41_bool = var_30_int == var_40_int; // 0xd3d Eq
	if(var_41_bool == 0) goto Label_3465; // 0xd3e JumpB
	var_42_bool = 0; // 0xd3f PushV
	var_42_bool = 0; // 0xd40 MovB
	var_43_bool = 0; var_44_object = Obj(); // 0xd41 PushV
	var_44_object = var_1_object; // 0xd42 MovT
	func_4500(var_44_object); // 0xd43 Call
	if(var_43_bool == 0) goto Label_3404; // 0xd45 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xd46 PushV
	var_52_object = var_1_object; // 0xd47 MovT
	func_4512(var_52_object); // 0xd48 Call
	if(var_51_bool == 0) goto Label_3404; // 0xd4a JumpB
	var_42_bool = 1; // 0xd4b MovB
	
Label_3404:
	if(var_42_bool == 0) goto Label_3430; // 0xd4c JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xd4d PushV
	var_57_object = var_1_object; // 0xd4e MovT
	var_58_object = var_0_object; // 0xd4f MovT
	func_4180(); // 0xd50 Call
	var_61_string = ""; // 0xd52 PushV
	var_61_string = "Neutral"; // 0xd53 MovS
	func_3358(var_31_int, var_61_string); // 0xd54 Call
	var_76_int = 14462; // 0xd56 PushI
	SetMessage(var_76_int); // 0xd57 TObjFunc
	ClearReplies(); // 0xd59 TObjFunc
	var_77_int = 14463; // 0xd5b PushI
	var_78_int = 15695; // 0xd5c PushI
	var_79_int = 15694; // 0xd5d PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xd5e TObjFunc
	var_80_int = 14473; // 0xd60 PushI
	var_81_int = 15695; // 0xd61 PushI
	var_82_int = 15705; // 0xd62 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xd63 TObjFunc
	return 0; // 0xd65 Return
	
Label_3430:
	var_83_string = ""; // 0xd66 PushV
	var_83_string = "Neutral"; // 0xd67 MovS
	func_3358(var_31_int, var_83_string); // 0xd68 Call
	var_84_int = 14474; // 0xd6a PushI
	SetMessage(var_84_int); // 0xd6b TObjFunc
	ClearReplies(); // 0xd6d TObjFunc
	var_85_bool = 0; var_86_object = Obj(); // 0xd6f PushV
	var_86_object = var_1_object; // 0xd70 MovT
	func_4536(var_86_object); // 0xd71 Call
	if(var_85_bool == 0) goto Label_3449; // 0xd73 JumpB
	var_91_int = 14475; // 0xd74 PushI
	var_92_int = 15709; // 0xd75 PushI
	var_93_int = 15708; // 0xd76 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xd77 TObjFunc
	
Label_3449:
	var_94_int = 14500; // 0xd79 PushI
	var_95_int = -1; // 0xd7a PushI
	var_96_int = 15736; // 0xd7b PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xd7c TObjFunc
	var_97_bool = 0; var_98_object = Obj(); // 0xd7e PushV
	var_98_object = var_1_object; // 0xd7f MovT
	func_4524(var_98_object); // 0xd80 Call
	if(var_97_bool == 0) goto Label_3464; // 0xd82 JumpB
	var_103_int = 14501; // 0xd83 PushI
	var_104_int = -1; // 0xd84 PushI
	var_105_int = 15737; // 0xd85 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xd86 TObjFunc
	
Label_3464:
	return 0; // 0xd88 Return
	
Label_3465:
	var_106_int = 15709; // 0xd89 PushI
	var_107_bool = var_30_int == var_106_int; // 0xd8a Eq
	if(var_107_bool == 0) goto Label_3488; // 0xd8b JumpB
	var_108_string = ""; // 0xd8c PushV
	var_108_string = "Neutral"; // 0xd8d MovS
	func_3358(var_31_int, var_108_string); // 0xd8e Call
	var_109_int = 14476; // 0xd90 PushI
	SetMessage(var_109_int); // 0xd91 TObjFunc
	ClearReplies(); // 0xd93 TObjFunc
	var_110_int = 14477; // 0xd95 PushI
	var_111_int = 15711; // 0xd96 PushI
	var_112_int = 15710; // 0xd97 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xd98 TObjFunc
	var_113_int = 14499; // 0xd9a PushI
	var_114_int = 15711; // 0xd9b PushI
	var_115_int = 15734; // 0xd9c PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xd9d TObjFunc
	return 0; // 0xd9f Return
	
Label_3488:
	var_116_int = 15711; // 0xda0 PushI
	var_117_bool = var_30_int == var_116_int; // 0xda1 Eq
	if(var_117_bool == 0) goto Label_3511; // 0xda2 JumpB
	var_118_string = ""; // 0xda3 PushV
	var_118_string = "Neutral"; // 0xda4 MovS
	func_3358(var_31_int, var_118_string); // 0xda5 Call
	var_119_int = 14478; // 0xda7 PushI
	SetMessage(var_119_int); // 0xda8 TObjFunc
	ClearReplies(); // 0xdaa TObjFunc
	var_120_int = 14479; // 0xdac PushI
	var_121_int = 15713; // 0xdad PushI
	var_122_int = 15712; // 0xdae PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xdaf TObjFunc
	var_123_int = 14494; // 0xdb1 PushI
	var_124_int = 15729; // 0xdb2 PushI
	var_125_int = 15728; // 0xdb3 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xdb4 TObjFunc
	return 0; // 0xdb6 Return
	
Label_3511:
	var_126_int = 15729; // 0xdb7 PushI
	var_127_bool = var_30_int == var_126_int; // 0xdb8 Eq
	if(var_127_bool == 0) goto Label_3529; // 0xdb9 JumpB
	var_128_string = ""; // 0xdba PushV
	var_128_string = "Neutral"; // 0xdbb MovS
	func_3358(var_31_int, var_128_string); // 0xdbc Call
	var_129_int = 14495; // 0xdbe PushI
	SetMessage(var_129_int); // 0xdbf TObjFunc
	ClearReplies(); // 0xdc1 TObjFunc
	var_130_int = 14496; // 0xdc3 PushI
	var_131_int = 15731; // 0xdc4 PushI
	var_132_int = 15730; // 0xdc5 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xdc6 TObjFunc
	return 0; // 0xdc8 Return
	
Label_3529:
	var_133_int = 15731; // 0xdc9 PushI
	var_134_bool = var_30_int == var_133_int; // 0xdca Eq
	if(var_134_bool == 0) goto Label_3547; // 0xdcb JumpB
	var_135_string = ""; // 0xdcc PushV
	var_135_string = "Neutral"; // 0xdcd MovS
	func_3358(var_31_int, var_135_string); // 0xdce Call
	var_136_int = 14497; // 0xdd0 PushI
	SetMessage(var_136_int); // 0xdd1 TObjFunc
	ClearReplies(); // 0xdd3 TObjFunc
	var_137_int = 14498; // 0xdd5 PushI
	var_138_int = 15713; // 0xdd6 PushI
	var_139_int = 15732; // 0xdd7 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xdd8 TObjFunc
	return 0; // 0xdda Return
	
Label_3547:
	var_140_int = 15713; // 0xddb PushI
	var_141_bool = var_30_int == var_140_int; // 0xddc Eq
	if(var_141_bool == 0) goto Label_3565; // 0xddd JumpB
	var_142_string = ""; // 0xdde PushV
	var_142_string = "Neutral"; // 0xddf MovS
	func_3358(var_31_int, var_142_string); // 0xde0 Call
	var_143_int = 14480; // 0xde2 PushI
	SetMessage(var_143_int); // 0xde3 TObjFunc
	ClearReplies(); // 0xde5 TObjFunc
	var_144_int = 14481; // 0xde7 PushI
	var_145_int = 15715; // 0xde8 PushI
	var_146_int = 15714; // 0xde9 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xdea TObjFunc
	return 0; // 0xdec Return
	
Label_3565:
	var_147_int = 15715; // 0xded PushI
	var_148_bool = var_30_int == var_147_int; // 0xdee Eq
	if(var_148_bool == 0) goto Label_3583; // 0xdef JumpB
	var_149_string = ""; // 0xdf0 PushV
	var_149_string = "Neutral"; // 0xdf1 MovS
	func_3358(var_31_int, var_149_string); // 0xdf2 Call
	var_150_int = 14482; // 0xdf4 PushI
	SetMessage(var_150_int); // 0xdf5 TObjFunc
	ClearReplies(); // 0xdf7 TObjFunc
	var_151_int = 14483; // 0xdf9 PushI
	var_152_int = 15717; // 0xdfa PushI
	var_153_int = 15716; // 0xdfb PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xdfc TObjFunc
	return 0; // 0xdfe Return
	
Label_3583:
	var_154_int = 15717; // 0xdff PushI
	var_155_bool = var_30_int == var_154_int; // 0xe00 Eq
	if(var_155_bool == 0) goto Label_3601; // 0xe01 JumpB
	var_156_string = ""; // 0xe02 PushV
	var_156_string = "Neutral"; // 0xe03 MovS
	func_3358(var_31_int, var_156_string); // 0xe04 Call
	var_157_int = 14484; // 0xe06 PushI
	SetMessage(var_157_int); // 0xe07 TObjFunc
	ClearReplies(); // 0xe09 TObjFunc
	var_158_int = 14485; // 0xe0b PushI
	var_159_int = 15719; // 0xe0c PushI
	var_160_int = 15718; // 0xe0d PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xe0e TObjFunc
	return 0; // 0xe10 Return
	
Label_3601:
	var_161_int = 15719; // 0xe11 PushI
	var_162_bool = var_30_int == var_161_int; // 0xe12 Eq
	if(var_162_bool == 0) goto Label_3624; // 0xe13 JumpB
	var_163_string = ""; // 0xe14 PushV
	var_163_string = "Neutral"; // 0xe15 MovS
	func_3358(var_31_int, var_163_string); // 0xe16 Call
	var_164_int = 14486; // 0xe18 PushI
	SetMessage(var_164_int); // 0xe19 TObjFunc
	ClearReplies(); // 0xe1b TObjFunc
	var_165_int = 14487; // 0xe1d PushI
	var_166_int = 15721; // 0xe1e PushI
	var_167_int = 15720; // 0xe1f PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xe20 TObjFunc
	var_168_int = 14491; // 0xe22 PushI
	var_169_int = 15725; // 0xe23 PushI
	var_170_int = 15724; // 0xe24 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xe25 TObjFunc
	return 0; // 0xe27 Return
	
Label_3624:
	var_171_int = 15725; // 0xe28 PushI
	var_172_bool = var_30_int == var_171_int; // 0xe29 Eq
	if(var_172_bool == 0) goto Label_3642; // 0xe2a JumpB
	var_173_string = ""; // 0xe2b PushV
	var_173_string = "Neutral"; // 0xe2c MovS
	func_3358(var_31_int, var_173_string); // 0xe2d Call
	var_174_int = 14492; // 0xe2f PushI
	SetMessage(var_174_int); // 0xe30 TObjFunc
	ClearReplies(); // 0xe32 TObjFunc
	var_175_int = 14493; // 0xe34 PushI
	var_176_int = 15721; // 0xe35 PushI
	var_177_int = 15726; // 0xe36 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0xe37 TObjFunc
	return 0; // 0xe39 Return
	
Label_3642:
	var_178_int = 15721; // 0xe3a PushI
	var_179_bool = var_30_int == var_178_int; // 0xe3b Eq
	if(var_179_bool == 0) goto Label_3665; // 0xe3c JumpB
	var_180_string = ""; // 0xe3d PushV
	var_180_string = "Neutral"; // 0xe3e MovS
	func_3358(var_31_int, var_180_string); // 0xe3f Call
	var_181_int = 14488; // 0xe41 PushI
	SetMessage(var_181_int); // 0xe42 TObjFunc
	ClearReplies(); // 0xe44 TObjFunc
	var_182_int = 14489; // 0xe46 PushI
	var_183_int = -1; // 0xe47 PushI
	var_184_int = 15722; // 0xe48 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xe49 TObjFunc
	var_185_int = 14490; // 0xe4b PushI
	var_186_int = -1; // 0xe4c PushI
	var_187_int = 15723; // 0xe4d PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xe4e TObjFunc
	return 0; // 0xe50 Return
	
Label_3665:
	var_188_int = 15695; // 0xe51 PushI
	var_189_bool = var_30_int == var_188_int; // 0xe52 Eq
	if(var_189_bool == 0) goto Label_3683; // 0xe53 JumpB
	var_190_string = ""; // 0xe54 PushV
	var_190_string = "Neutral"; // 0xe55 MovS
	func_3358(var_31_int, var_190_string); // 0xe56 Call
	var_191_int = 14464; // 0xe58 PushI
	SetMessage(var_191_int); // 0xe59 TObjFunc
	ClearReplies(); // 0xe5b TObjFunc
	var_192_int = 14465; // 0xe5d PushI
	var_193_int = 15697; // 0xe5e PushI
	var_194_int = 15696; // 0xe5f PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xe60 TObjFunc
	return 0; // 0xe62 Return
	
Label_3683:
	var_195_int = 15697; // 0xe63 PushI
	var_196_bool = var_30_int == var_195_int; // 0xe64 Eq
	if(var_196_bool == 0) goto Label_3701; // 0xe65 JumpB
	var_197_string = ""; // 0xe66 PushV
	var_197_string = "Neutral"; // 0xe67 MovS
	func_3358(var_31_int, var_197_string); // 0xe68 Call
	var_198_int = 14466; // 0xe6a PushI
	SetMessage(var_198_int); // 0xe6b TObjFunc
	ClearReplies(); // 0xe6d TObjFunc
	var_199_int = 14467; // 0xe6f PushI
	var_200_int = 15699; // 0xe70 PushI
	var_201_int = 15698; // 0xe71 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xe72 TObjFunc
	return 0; // 0xe74 Return
	
Label_3701:
	var_202_int = 15699; // 0xe75 PushI
	var_203_bool = var_30_int == var_202_int; // 0xe76 Eq
	if(var_203_bool == 0) goto Label_3724; // 0xe77 JumpB
	var_204_string = ""; // 0xe78 PushV
	var_204_string = "Neutral"; // 0xe79 MovS
	func_3358(var_31_int, var_204_string); // 0xe7a Call
	var_205_int = 14468; // 0xe7c PushI
	SetMessage(var_205_int); // 0xe7d TObjFunc
	ClearReplies(); // 0xe7f TObjFunc
	var_206_int = 14469; // 0xe81 PushI
	var_207_int = 15701; // 0xe82 PushI
	var_208_int = 15700; // 0xe83 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xe84 TObjFunc
	var_209_int = 14472; // 0xe86 PushI
	var_210_int = 15701; // 0xe87 PushI
	var_211_int = 15703; // 0xe88 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xe89 TObjFunc
	return 0; // 0xe8b Return
	
Label_3724:
	var_212_int = 15701; // 0xe8c PushI
	var_213_bool = var_30_int == var_212_int; // 0xe8d Eq
	if(var_213_bool == 0) goto Label_3742; // 0xe8e JumpB
	var_214_string = ""; // 0xe8f PushV
	var_214_string = "Neutral"; // 0xe90 MovS
	func_3358(var_31_int, var_214_string); // 0xe91 Call
	var_215_int = 14470; // 0xe93 PushI
	SetMessage(var_215_int); // 0xe94 TObjFunc
	ClearReplies(); // 0xe96 TObjFunc
	var_216_int = 14471; // 0xe98 PushI
	var_217_int = -1; // 0xe99 PushI
	var_218_int = 15702; // 0xe9a PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xe9b TObjFunc
	return 0; // 0xe9d Return
	
Label_3742:
	var_3_string = 1; // 0xe9e TMovB
	var_219_bool = 0; // 0xe9f PushV
	func_3951(var_219_bool); // 0xea0 Call
	if(var_219_bool == 0) goto Label_3750; // 0xea2 JumpB
	lshStopAnimation(); // 0xea3 Func
	goto Label_3752; // 0xea5 Jump
	
Label_3752:
	return 0; // 0xea8 Return
	
Label_3750:
	StopAnimation(); // 0xea6 Func
	
Label_3754:
	return 0; // 0xeaa Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_4768(); // 0x7 Call
	var_31_bool = 0; // 0x9 PushV
	func_3767(var_31_bool); // 0xa Call
	var_34_bool = var_31_bool == 0; // 0xc Not
	if(var_34_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_35_string = ""; // 0x13 PushV
	var_35_string = "Neutral"; // 0x14 MovS
	func_3832(var_35_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_4098()
{
	var_303_string = "KnowNina"; // 0x1003 PushS
	var_304_int = 1; // 0x1004 PushI
	SetVariable(var_303_string, var_304_int); // 0x1005 Func
	return 0; // 0x1007 Return
}


func_4104()
{
	var_42_string = "d7q02"; // 0x1009 PushS
	var_43_int = 2; // 0x100a PushI
	SetVariable(var_42_string, var_43_int); // 0x100b Func
	func_4736(); // 0x100e Call
	return 0; // 0x1010 Return
}


func_4360(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x1109 PushV
	var_240_string = "ood1Petr6"; // 0x110a MovS
	func_3867(var_239_int, var_240_string); // 0x110b Call
	var_241_int = 0; // 0x110d PushI
	var_242_bool = var_239_int == var_241_int; // 0x110e Eq
	if(var_242_bool == 0) goto Label_4370; // 0x110f JumpB
	var_237_bool = 1; // 0x1110 MovB
	return 0; // 0x1111 Return
	
Label_4370:
	var_237_bool = 0; // 0x1112 MovB
	return 0; // 0x1113 Return
}


func_3850()
{
	var_33_bool = 0; // 0xf0a PushV
	func_3951(var_33_bool); // 0xf0b Call
	if(var_33_bool == 0) goto Label_3856; // 0xf0d JumpB
	lshStopSpeech(); // 0xf0e Func
	
Label_3856:
	return 0; // 0xf10 Return
}


func_4113()
{
	var_81_string = "d7q02"; // 0x1012 PushS
	var_82_int = 4; // 0x1013 PushI
	SetVariable(var_81_string, var_82_int); // 0x1014 Func
	return 0; // 0x1016 Return
}


func_3857(var_70_cvector, var_71_cvector)
{
	var_73_float = 0; var_74_float = 0; // 0xf11 PushV
	var_75_int = var_71_cvector | var_71_cvector; // 0xf12 Or
	var_74_float = sqrt(var_75_int); // 0xf13 Sqrt2
	var_76_float = 0.0; // 0xf14 PushF
	var_77_bool = var_74_float < var_76_float; // 0xf15 LT
	if(var_77_bool == 0) goto Label_3865; // 0xf16 JumpB
	var_70_cvector = CVector(0.0, 0.0, 0.0); // 0xf17 MovV
	return 2; // 0xf18 Return
	
Label_3865:
	var_70_cvector = var_71_cvector / var_71_cvector; // 0xf19 Div2
	return 2; // 0xf1a Return
}


func_4628(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1214 PushV
	GetDiaryRoot(var_61_object); // 0x1215 Func
	var_62_bool = var_61_object == 0; // 0x1217 Not
	if(var_62_bool == 0) goto Label_4638; // 0x1218 JumpB
	var_63_string = "Can't retrieve diary root"; // 0x1219 PushS
	Trace(var_63_string); // 0x121a Func
	var_59_object = 0; // 0x121c MovB
	return 2; // 0x121d Return
	
Label_4638:
	var_59_object = var_61_object; // 0x121e Mov
	return 2; // 0x121f Return
}


func_4372(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0x1115 PushV
	var_256_string = "ood1Petr7"; // 0x1116 MovS
	func_3867(var_255_int, var_256_string); // 0x1117 Call
	var_257_int = 0; // 0x1119 PushI
	var_258_bool = var_255_int == var_257_int; // 0x111a Eq
	if(var_258_bool == 0) goto Label_4382; // 0x111b JumpB
	var_253_bool = 1; // 0x111c MovB
	return 0; // 0x111d Return
	
Label_4382:
	var_253_bool = 0; // 0x111e MovB
	return 0; // 0x111f Return
}


func_4119()
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); // 0x1017 PushV
	var_89_int = 0; var_90_string = ""; // 0x1018 PushV
	var_90_string = "d7q02BirdBalahon"; // 0x1019 MovS
	func_3867(var_89_int, var_90_string); // 0x101a Call
	var_93_int = 0; // 0x101c PushI
	var_94_bool = var_89_int != var_93_int; // 0x101d Neq
	if(var_94_bool == 0) goto Label_4162; // 0x101e JumpB
	var_95_object = Obj(); // 0x101f PushV
	func_4670(var_95_object); // 0x1020 Call
	var_87_object = var_95_object; // 0x1021 Mov
	var_102_string = "d7q02AlexandrGotoPetr"; // 0x1023 PushS
	FindMark(var_88_object, var_102_string); // 0x1024 ObjFunc
	var_103_object = var_88_object; // 0x1026 Push
	if(var_103_object == 0) goto Label_4138; // 0x1027 JumpB
	Remove(); // 0x1028 ObjFunc
	
Label_4138:
	var_104_string = "d7q02MarkGotoAlexandr"; // 0x102a PushS
	FindMark(var_88_object, var_104_string); // 0x102b ObjFunc
	var_105_object = var_88_object; // 0x102d Push
	if(var_105_object == 0) goto Label_4145; // 0x102e JumpB
	Remove(); // 0x102f ObjFunc
	
Label_4145:
	var_106_string = "d7q02MarkGotoCemetery"; // 0x1031 PushS
	FindMark(var_88_object, var_106_string); // 0x1032 ObjFunc
	var_107_object = var_88_object; // 0x1034 Push
	if(var_107_object == 0) goto Label_4152; // 0x1035 JumpB
	Remove(); // 0x1036 ObjFunc
	
Label_4152:
	func_4752(); // 0x1039 Call
	var_117_bool = 0; var_118_string = ""; var_119_string = ""; // 0x103b PushV
	var_118_string = "quest_d7_02"; // 0x103c MovS
	var_119_string = "completed"; // 0x103d MovS
	func_3898(var_117_bool, var_118_string, var_119_string); // 0x103e Call
	var_88_object = 0; // 0x1040 SetNull
	var_87_object = 0; // 0x1041 SetNull
	
Label_4162:
	return 4; // 0x1042 Return
}


func_2839(var_2_object, var_148_string)
{
	var_149_bool = 0; // 0xb18 PushV
	func_3951(var_149_bool); // 0xb19 Call
	var_150_bool = var_149_bool == 0; // 0xb1b Not
	if(var_150_bool == 0) goto Label_2846; // 0xb1c JumpB
	return 0; // 0xb1d Return
	
Label_2846:
	var_151_bool = var_148_string == var_2_object; // 0xb1e Eq
	if(var_151_bool == 0) goto Label_2849; // 0xb1f JumpB
	return 0; // 0xb20 Return
	
Label_2849:
	var_152_string = ""; // 0xb21 PushV
	var_152_string = var_148_string; // 0xb22 Mov
	func_3832(var_152_string); // 0xb23 Call
	var_2_object = var_148_string; // 0xb25 TMov
	return 0; // 0xb26 Return
}


func_3867(var_45_int, var_46_string)
{
	var_47_int = 0; var_48_int = 0; // 0xf1b PushV
	GetVariable(var_46_string, var_48_int); // 0xf1c Func
	var_45_int = var_48_int; // 0xf1e Mov
	return 2; // 0xf1f Return
}


func_3358(var_2_object, var_61_string)
{
	var_62_bool = 0; // 0xd1f PushV
	func_3951(var_62_bool); // 0xd20 Call
	var_63_bool = var_62_bool == 0; // 0xd22 Not
	if(var_63_bool == 0) goto Label_3365; // 0xd23 JumpB
	return 0; // 0xd24 Return
	
Label_3365:
	var_64_bool = var_61_string == var_2_object; // 0xd25 Eq
	if(var_64_bool == 0) goto Label_3368; // 0xd26 JumpB
	return 0; // 0xd27 Return
	
Label_3368:
	var_65_string = ""; // 0xd28 PushV
	var_65_string = var_61_string; // 0xd29 Mov
	func_3832(var_65_string); // 0xd2a Call
	var_2_object = var_61_string; // 0xd2c TMov
	return 0; // 0xd2d Return
}


func_4384(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0x1121 PushV
	var_272_string = "ood1Petr8"; // 0x1122 MovS
	func_3867(var_271_int, var_272_string); // 0x1123 Call
	var_273_int = 0; // 0x1125 PushI
	var_274_bool = var_271_int == var_273_int; // 0x1126 Eq
	if(var_274_bool == 0) goto Label_4394; // 0x1127 JumpB
	var_269_bool = 1; // 0x1128 MovB
	return 0; // 0x1129 Return
	
Label_4394:
	var_269_bool = 0; // 0x112a MovB
	return 0; // 0x112b Return
}


func_4641(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x1221 PushV
	var_59_object = Obj(); // 0x1222 PushV
	func_4628(var_59_object); // 0x1223 Call
	var_56_object = var_59_object; // 0x1224 Mov
	Find(var_52_int, var_57_object); // 0x1226 ObjFunc
	var_64_bool = var_57_object == 0; // 0x1228 Not
	if(var_64_bool == 0) goto Label_4656; // 0x1229 JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x122a PushS
	var_66_int = var_65_string + var_52_int; // 0x122b Add
	Trace(var_66_int); // 0x122c Func
	var_50_bool = 0; // 0x122e MovB
	return 6; // 0x122f Return
	
Label_4656:
	AddChild(var_51_object); // 0x1230 ObjFunc
	var_67_string = "player_diary"; // 0x1232 PushS
	var_68_int = 1; // 0x1233 PushI
	SetVariable(var_67_string, var_68_int); // 0x1234 Func
	GetCategory(var_58_int); // 0x1236 ObjFunc
	SetDiarySection(var_58_int); // 0x1238 Func
	var_50_bool = 0; // 0x123a MovB
	return 6; // 0x123b Return
}


func_3872(var_132_object, var_133_int)
{
	var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_int = 0; var_139_bool = 0; // 0xf20 PushV
	GetItemID(var_137_int); // 0xf21 ObjFunc
	var_140_string = "Category"; // 0xf23 PushS
	GetInvItemProperty(var_138_int, var_137_int, var_140_string); // 0xf24 Func
	AddItem(var_139_bool, var_132_object, var_138_int, var_133_int); // 0xf26 ObjFunc
	var_141_bool = var_139_bool == 0; // 0xf28 Not
	if(var_141_bool == 0) goto Label_3884; // 0xf29 JumpB
	DropItems(var_132_object, var_133_int); // 0xf2a ObjFunc
	
Label_3884:
	return 6; // 0xf2c Return
}


func_1576(var_0_object, var_1_object, var_2_object, var_3_object, var_363_object, var_364_object)
{
	var_0_object = var_364_object; // 0x629 TMov
	var_1_object = var_363_object; // 0x62a TMov
	var_3_object = 0; // 0x62b TMovB
	var_369_int = 1; // 0x62c PushI
	if(var_369_int == 0) goto Label_1706; // 0x62d JumpB
	var_370_string = ""; // 0x62e PushV
	var_370_string = "Neutral"; // 0x62f MovS
	func_1736(var_364_object, var_370_string); // 0x630 Call
	var_375_int = 6877; // 0x632 PushI
	SetMessage(var_375_int); // 0x633 TObjFunc
	ClearReplies(); // 0x635 TObjFunc
	var_376_bool = 0; // 0x637 PushV
	var_376_bool = 0; // 0x638 MovB
	var_377_bool = 0; var_378_object = Obj(); // 0x639 PushV
	var_378_object = var_1_object; // 0x63a MovT
	func_4216(var_378_object); // 0x63b Call
	if(var_377_bool == 0) goto Label_1604; // 0x63d JumpB
	var_383_bool = 0; var_384_object = Obj(); // 0x63e PushV
	var_384_object = var_1_object; // 0x63f MovT
	func_4264(var_384_object); // 0x640 Call
	if(var_383_bool == 0) goto Label_1604; // 0x642 JumpB
	var_376_bool = 1; // 0x643 MovB
	
Label_1604:
	if(var_376_bool == 0) goto Label_1610; // 0x644 JumpB
	var_389_int = 6878; // 0x645 PushI
	var_390_int = 7585; // 0x646 PushI
	var_391_int = 7584; // 0x647 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x648 TObjFunc
	
Label_1610:
	var_392_bool = 0; // 0x64a PushV
	var_392_bool = 0; // 0x64b MovB
	var_393_bool = 0; var_394_object = Obj(); // 0x64c PushV
	var_394_object = var_1_object; // 0x64d MovT
	func_4228(var_394_object); // 0x64e Call
	if(var_393_bool == 0) goto Label_1623; // 0x650 JumpB
	var_399_bool = 0; var_400_object = Obj(); // 0x651 PushV
	var_400_object = var_1_object; // 0x652 MovT
	func_4288(var_400_object); // 0x653 Call
	if(var_399_bool == 0) goto Label_1623; // 0x655 JumpB
	var_392_bool = 1; // 0x656 MovB
	
Label_1623:
	if(var_392_bool == 0) goto Label_1629; // 0x657 JumpB
	var_405_int = 7431; // 0x658 PushI
	var_406_int = 8203; // 0x659 PushI
	var_407_int = 8202; // 0x65a PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x65b TObjFunc
	
Label_1629:
	var_408_bool = 0; // 0x65d PushV
	var_408_bool = 0; // 0x65e MovB
	var_409_bool = 0; var_410_object = Obj(); // 0x65f PushV
	var_410_object = var_1_object; // 0x660 MovT
	func_4240(var_410_object); // 0x661 Call
	if(var_409_bool == 0) goto Label_1642; // 0x663 JumpB
	var_415_bool = 0; var_416_object = Obj(); // 0x664 PushV
	var_416_object = var_1_object; // 0x665 MovT
	func_4252(var_416_object); // 0x666 Call
	if(var_415_bool == 0) goto Label_1642; // 0x668 JumpB
	var_408_bool = 1; // 0x669 MovB
	
Label_1642:
	if(var_408_bool == 0) goto Label_1648; // 0x66a JumpB
	var_421_int = 6884; // 0x66b PushI
	var_422_int = 7591; // 0x66c PushI
	var_423_int = 7590; // 0x66d PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x66e TObjFunc
	
Label_1648:
	var_424_int = 7529; // 0x670 PushI
	var_425_int = -1; // 0x671 PushI
	var_426_int = 8311; // 0x672 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x673 TObjFunc
	goto Label_1706; // 0x675 Jump
	
Label_1706:
	var_427_bool = 0; // 0x6aa PushV
	func_3951(var_427_bool); // 0x6ab Call
	if(var_427_bool == 0) goto Label_1721; // 0x6ad JumpB
	
Label_1710:
	lshWaitForAnimEnd(); // 0x6ae Func
	var_428_object = var_3_object; // 0x6b0 PushT
	if(var_428_object == 0) goto Label_1715; // 0x6b1 JumpB
	goto Label_1720; // 0x6b2 Jump
	
Label_1720:
	goto Label_1735; // 0x6b8 Jump
	
Label_1735:
	return 0; // 0x6c7 Return
	
Label_1715:
	var_429_string = ""; // 0x6b3 PushV
	var_429_string = var_2_object; // 0x6b4 MovT
	func_3832(var_429_string); // 0x6b5 Call
	goto Label_1710; // 0x6b7 Jump
	
Label_1721:
	var_430_string = "all"; // 0x6b9 PushS
	var_431_string = "idle"; // 0x6ba PushS
	PlayAnimation(var_430_string, var_431_string); // 0x6bb Func
	
Label_1725:
	WaitForAnimEnd(); // 0x6bd Func
	var_432_object = var_3_object; // 0x6bf PushT
	if(var_432_object == 0) goto Label_1730; // 0x6c0 JumpB
	goto Label_1735; // 0x6c1 Jump
	
Label_1730:
	var_433_string = "all"; // 0x6c2 PushS
	var_434_string = "idle"; // 0x6c3 PushS
	PlayAnimation(var_433_string, var_434_string); // 0x6c4 Func
	goto Label_1725; // 0x6c6 Jump
}


func_4396(var_247_bool)
{
	var_249_int = 0; var_250_string = ""; // 0x112d PushV
	var_250_string = "KnowViktor"; // 0x112e MovS
	func_3867(var_249_int, var_250_string); // 0x112f Call
	var_251_int = 1; // 0x1131 PushI
	var_252_bool = var_249_int == var_251_int; // 0x1132 Eq
	if(var_252_bool == 0) goto Label_4406; // 0x1133 JumpB
	var_247_bool = 1; // 0x1134 MovB
	return 0; // 0x1135 Return
	
Label_4406:
	var_247_bool = 0; // 0x1136 MovB
	return 0; // 0x1137 Return
}


func_3885(var_126_object, var_127_string, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xf2d PushV
	CreateInvItem(var_130_object); // 0xf2e Func
	SetItemName(var_127_string); // 0xf30 ObjFunc
	var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0; // 0xf32 PushV
	var_131_object = var_126_object; // 0xf33 Mov
	var_132_object = var_130_object; // 0xf34 Mov
	var_133_int = var_128_int; // 0xf35 Mov
	func_3872(var_132_object, var_133_int); // 0xf36 Call
	return 2; // 0xf38 Return
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x31 PushV
	var_0_object = var_35_object; // 0x32 TMov
	var_45_bool = 0; var_46_object = Obj(); // 0x33 PushV
	var_46_object = var_35_object; // 0x34 Mov
	func_3772(var_46_object); // 0x35 Call
	var_85_bool = var_45_bool == 0; // 0x37 Not
	if(var_85_bool == 0) goto Label_59; // 0x38 JumpB
	var_34_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_41_object); // 0x3b Func
	var_86_int = 0; // 0x3d PushV
	func_3947(var_86_int); // 0x3e Call
	SetNPCName(var_86_int); // 0x40 ObjFunc
	var_87_string = ""; // 0x42 PushV
	func_3949(var_87_string); // 0x43 Call
	SetPhoto(var_87_string); // 0x45 ObjFunc
	var_88_int = 0; // 0x47 PushV
	func_4687(var_88_int); // 0x48 Call
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
	func_3828(); // 0x67 Call
	StopDialog(var_41_object); // 0x69 Func
	GetReturnValue(var_43_int); // 0x6b ObjFunc
	var_34_int = var_43_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_4408(var_148_bool, var_149_object)
{
	var_150_bool = 0; var_151_object = Obj(); // 0x1139 PushV
	var_151_object = var_149_object; // 0x113a Mov
	func_4596(var_151_object); // 0x113b Call
	if(var_150_bool == 0) goto Label_4416; // 0x113d JumpB
	var_148_bool = 1; // 0x113e MovB
	return 0; // 0x113f Return
	
Label_4416:
	var_148_bool = 0; // 0x1140 MovB
	return 0; // 0x1141 Return
}


func_3898(var_117_bool, var_118_string, var_119_string)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0xf3a PushV
	FindActor(var_121_object, var_118_string); // 0xf3b Func
	var_122_bool = var_121_object == 0; // 0xf3d NullEq
	if(var_122_bool == 0) goto Label_3905; // 0xf3e JumpB
	var_117_bool = 0; // 0xf3f MovB
	return 2; // 0xf40 Return
	
Label_3905:
	Trigger(var_121_object, var_119_string); // 0xf41 Func
	var_117_bool = 1; // 0xf43 MovB
	return 2; // 0xf44 Return
}


func_4670(var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj(); var_99_object = Obj(); // 0x123e PushV
	GetMainOutdoorScene(var_98_object); // 0x123f Func
	var_100_bool = var_98_object == 0; // 0x1241 NullEq
	if(var_100_bool == 0) goto Label_4681; // 0x1242 JumpB
	var_101_string = "Can't find main outdoor scene"; // 0x1243 PushS
	Trace(var_101_string); // 0x1244 Func
	var_99_object = 0; // 0x1246 SetNull
	var_95_object = var_99_object; // 0x1247 Mov
	return 4; // 0x1248 Return
	
Label_4681:
	GetMap(var_99_object); // 0x1249 ObjFunc
	var_95_object = var_99_object; // 0x124b Mov
	return 4; // 0x124c Return
}


func_4418(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_object = Obj(); // 0x1143 PushV
	var_169_object = var_167_object; // 0x1144 Mov
	func_4607(var_169_object); // 0x1145 Call
	if(var_168_bool == 0) goto Label_4426; // 0x1147 JumpB
	var_166_bool = 1; // 0x1148 MovB
	return 0; // 0x1149 Return
	
Label_4426:
	var_166_bool = 0; // 0x114a MovB
	return 0; // 0x114b Return
}


func_4163()
{
	var_38_string = "ood7Petr1"; // 0x1044 PushS
	var_39_int = 1; // 0x1045 PushI
	SetVariable(var_38_string, var_39_int); // 0x1046 Func
	return 0; // 0x1048 Return
}


func_2371(var_0_object, var_439_int, var_440_object)
{
	var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; var_446_object = Obj(); var_447_bool = 0; var_448_int = 0; var_449_bool = 0; // 0x943 PushV
	var_0_object = var_440_object; // 0x944 TMov
	var_450_bool = 0; var_451_object = Obj(); // 0x945 PushV
	var_451_object = var_440_object; // 0x946 Mov
	func_3772(var_451_object); // 0x947 Call
	var_452_bool = var_450_bool == 0; // 0x949 Not
	if(var_452_bool == 0) goto Label_2381; // 0x94a JumpB
	var_439_int = -2; // 0x94b MovI
	return 8; // 0x94c Return
	
Label_2381:
	CreateDialog(var_446_object); // 0x94d Func
	var_453_int = 0; // 0x94f PushV
	func_3947(var_453_int); // 0x950 Call
	SetNPCName(var_453_int); // 0x952 ObjFunc
	var_454_string = ""; // 0x954 PushV
	func_3949(var_454_string); // 0x955 Call
	SetPhoto(var_454_string); // 0x957 ObjFunc
	var_455_int = 0; // 0x959 PushV
	func_4687(var_455_int); // 0x95a Call
	SetPlayerName(var_455_int); // 0x95c ObjFunc
	var_448_int = -1; // 0x95e MovI
	IsOverrideActive(var_447_bool); // 0x95f Func
	var_456_bool = var_447_bool; // 0x961 Push
	if(var_456_bool == 0) goto Label_2405; // 0x962 JumpB
	var_439_int = -2; // 0x963 MovI
	return 8; // 0x964 Return
	
Label_2405:
	DoDialog(var_446_object); // 0x965 Func
	var_457_object = Obj(); var_458_object = Obj(); // 0x967 PushV
	var_457_object = var_440_object; // 0x968 Mov
	var_458_object = var_446_object; // 0x969 Mov
	TaskCall(9); // 0x96a TaskCall
	func_2434(var_459_object, var_460_object, var_461_string, var_462_bool, var_457_object, var_458_object); // 0x96b Call
	TaskReturn(); // 0x96c TaskReturn
	IsDialogEnd(var_449_bool); // 0x96e ObjFunc
	
Label_2416:
	var_499_bool = var_449_bool == 0; // 0x970 Not
	if(var_499_bool == 0) goto Label_2423; // 0x971 JumpB
	sync(); // 0x972 Func
	IsDialogEnd(var_449_bool); // 0x974 ObjFunc
	goto Label_2416; // 0x976 Jump
	
Label_2423:
	var_500_object = Obj(); // 0x977 PushV
	var_500_object = var_440_object; // 0x978 Mov
	func_3828(); // 0x979 Call
	StopDialog(var_446_object); // 0x97b Func
	GetReturnValue(var_448_int); // 0x97d ObjFunc
	var_439_int = var_448_int; // 0x97f Mov
	return 8; // 0x980 Return
}


func_3910(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0xf46 PushV
	GetGameTime(var_59_float); // 0xf47 Func
	var_57_float = var_59_float; // 0xf49 Mov
	return 2; // 0xf4a Return
}


func_4169(var_123_object)
{
	var_125_string = "birdmask is given"; // 0x104a PushS
	Trace(var_125_string); // 0x104b Func
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0; // 0x104d PushV
	var_126_object = var_123_object; // 0x104e Mov
	var_127_string = "bird_mask"; // 0x104f MovS
	var_128_int = 1; // 0x1050 MovI
	func_3885(var_126_object, var_127_string, var_128_int); // 0x1051 Call
	return 0; // 0x1053 Return
}


func_3915(var_143_int)
{
	var_144_float = 0; var_145_float = 0; // 0xf4b PushV
	GetGameTime(var_145_float); // 0xf4c Func
	var_146_int = 1; // 0xf4e PushI
	var_147_int = 0; // 0xf4f PushV
	var_148_int = 24; // 0xf50 PushI
	var_147_int = var_145_float / var_145_float; // 0xf51 Div2
	var_143_int = var_146_int + var_147_int; // 0xf52 Add2
	return 2; // 0xf53 Return
}


func_4428(var_171_bool)
{
	var_173_int = 0; var_174_string = ""; // 0x114d PushV
	var_174_string = "d7q02"; // 0x114e MovS
	func_3867(var_173_int, var_174_string); // 0x114f Call
	var_175_int = 1; // 0x1151 PushI
	var_176_bool = var_173_int == var_175_int; // 0x1152 Eq
	if(var_176_bool == 0) goto Label_4438; // 0x1153 JumpB
	var_171_bool = 1; // 0x1154 MovB
	return 0; // 0x1155 Return
	
Label_4438:
	var_171_bool = 0; // 0x1156 MovB
	return 0; // 0x1157 Return
}


func_4687(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x124f PushV
	var_91_string = "player"; // 0x1250 PushS
	GetVariable(var_91_string, var_90_int); // 0x1251 Func
	var_92_int = 0; // 0x1253 PushI
	var_93_bool = var_90_int == var_92_int; // 0x1254 Eq
	if(var_93_bool == 0) goto Label_4697; // 0x1255 JumpB
	var_88_int = 200001; // 0x1256 MovI
	return 2; // 0x1257 Return
	
Label_4697:
	var_94_int = 1; // 0x1259 PushI
	var_95_bool = var_90_int == var_94_int; // 0x125a Eq
	if(var_95_bool == 0) goto Label_4702; // 0x125b JumpB
	var_88_int = 200002; // 0x125c MovI
	return 2; // 0x125d Return
	
Label_4702:
	var_88_int = 200003; // 0x125e MovI
	return 2; // 0x125f Return
}


func_338(var_0_object, var_149_int, var_150_object)
{
	var_152_object = Obj(); var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_object = Obj(); var_157_bool = 0; var_158_int = 0; var_159_bool = 0; // 0x152 PushV
	var_0_object = var_150_object; // 0x153 TMov
	var_160_bool = 0; var_161_object = Obj(); // 0x154 PushV
	var_161_object = var_150_object; // 0x155 Mov
	func_3772(var_161_object); // 0x156 Call
	var_162_bool = var_160_bool == 0; // 0x158 Not
	if(var_162_bool == 0) goto Label_348; // 0x159 JumpB
	var_149_int = -2; // 0x15a MovI
	return 8; // 0x15b Return
	
Label_348:
	CreateDialog(var_156_object); // 0x15c Func
	var_163_int = 0; // 0x15e PushV
	func_3947(var_163_int); // 0x15f Call
	SetNPCName(var_163_int); // 0x161 ObjFunc
	var_164_string = ""; // 0x163 PushV
	func_3949(var_164_string); // 0x164 Call
	SetPhoto(var_164_string); // 0x166 ObjFunc
	var_165_int = 0; // 0x168 PushV
	func_4687(var_165_int); // 0x169 Call
	SetPlayerName(var_165_int); // 0x16b ObjFunc
	var_158_int = -1; // 0x16d MovI
	IsOverrideActive(var_157_bool); // 0x16e Func
	var_166_bool = var_157_bool; // 0x170 Push
	if(var_166_bool == 0) goto Label_372; // 0x171 JumpB
	var_149_int = -2; // 0x172 MovI
	return 8; // 0x173 Return
	
Label_372:
	DoDialog(var_156_object); // 0x174 Func
	var_167_object = Obj(); var_168_object = Obj(); // 0x176 PushV
	var_167_object = var_150_object; // 0x177 Mov
	var_168_object = var_156_object; // 0x178 Mov
	TaskCall(5); // 0x179 TaskCall
	func_401(var_169_object, var_170_object, var_171_string, var_172_bool, var_167_object, var_168_object); // 0x17a Call
	TaskReturn(); // 0x17b TaskReturn
	IsDialogEnd(var_159_bool); // 0x17d ObjFunc
	
Label_383:
	var_341_bool = var_159_bool == 0; // 0x17f Not
	if(var_341_bool == 0) goto Label_390; // 0x180 JumpB
	sync(); // 0x181 Func
	IsDialogEnd(var_159_bool); // 0x183 ObjFunc
	goto Label_383; // 0x185 Jump
	
Label_390:
	var_342_object = Obj(); // 0x186 PushV
	var_342_object = var_150_object; // 0x187 Mov
	func_3828(); // 0x188 Call
	StopDialog(var_156_object); // 0x18a Func
	GetReturnValue(var_158_int); // 0x18c ObjFunc
	var_149_int = var_158_int; // 0x18e Mov
	return 8; // 0x18f Return
}


func_4180()
{
	var_59_string = "ood11Petr1"; // 0x1055 PushS
	var_60_int = 1; // 0x1056 PushI
	SetVariable(var_59_string, var_60_int); // 0x1057 Func
	return 0; // 0x1059 Return
}


func_3924(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0xf54 PushV
	GetGameTime(var_154_float); // 0xf55 Func
	var_155_int = 0; // 0xf57 PushV
	var_155_int = var_154_float; // 0xf58 Mov
	var_156_int = 24; // 0xf59 PushI
	var_152_int = var_155_int % var_156_int; // 0xf5a Mod2
	return 2; // 0xf5b Return
}


func_4440(var_165_bool)
{
	var_167_int = 0; var_168_string = ""; // 0x1159 PushV
	var_168_string = "ood7Petr1"; // 0x115a MovS
	func_3867(var_167_int, var_168_string); // 0x115b Call
	var_169_int = 0; // 0x115d PushI
	var_170_bool = var_167_int == var_169_int; // 0x115e Eq
	if(var_170_bool == 0) goto Label_4450; // 0x115f JumpB
	var_165_bool = 1; // 0x1160 MovB
	return 0; // 0x1161 Return
	
Label_4450:
	var_165_bool = 0; // 0x1162 MovB
	return 0; // 0x1163 Return
}


func_4186()
{
	var_38_string = "ood11Petr2"; // 0x105b PushS
	var_39_int = 1; // 0x105c PushI
	SetVariable(var_38_string, var_39_int); // 0x105d Func
	return 0; // 0x105f Return
}


func_3932(var_141_bool, var_142_int)
{
	var_143_int = 0; // 0xf5d PushV
	func_3915(var_143_int); // 0xf5e Call
	var_141_bool = var_143_int == var_142_int; // 0xf60 Eq2
	return 0; // 0xf61 Return
}


func_4192()
{
	var_46_string = "ood3Petr1"; // 0x1061 PushS
	var_47_int = 1; // 0x1062 PushI
	SetVariable(var_46_string, var_47_int); // 0x1063 Func
	return 0; // 0x1065 Return
}


func_4704()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1260 PushV
	var_62_string = "Adding diary entry"; // 0x1261 PushS
	Trace(var_62_string); // 0x1262 Func
	var_63_int = 130; // 0x1264 PushI
	var_64_int = 2; // 0x1265 PushI
	var_65_int = 15267; // 0x1266 PushI
	CreateDiaryEntry(var_61_object, var_63_int, var_64_int, var_65_int); // 0x1267 Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x1269 PushV
	var_67_object = var_61_object; // 0x126a Mov
	var_68_int = 11; // 0x126b MovI
	func_4641(var_66_bool, var_67_object, var_68_int); // 0x126c Call
	return 2; // 0x126e Return
}


func_3938(var_670_bool)
{
	var_671_bool = 0; var_672_bool = 0; // 0xf62 PushV
	var_673_string = ""; // 0xf63 PushV
	var_673_string = "No"; // 0xf64 MovS
	func_3832(var_673_string); // 0xf65 Call
	lshWaitForAnimEnd(var_672_bool); // 0xf67 Func
	var_670_bool = var_672_bool; // 0xf69 Mov
	return 2; // 0xf6a Return
}


func_4452(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x1165 PushV
	var_192_string = "d7q02"; // 0x1166 MovS
	func_3867(var_191_int, var_192_string); // 0x1167 Call
	var_193_int = 3; // 0x1169 PushI
	var_194_bool = var_191_int == var_193_int; // 0x116a Eq
	if(var_194_bool == 0) goto Label_4462; // 0x116b JumpB
	var_189_bool = 1; // 0x116c MovB
	return 0; // 0x116d Return
	
Label_4462:
	var_189_bool = 0; // 0x116e MovB
	return 0; // 0x116f Return
}


func_4198()
{
	var_422_string = "KnowMyth"; // 0x1067 PushS
	var_423_int = 1; // 0x1068 PushI
	SetVariable(var_422_string, var_423_int); // 0x1069 Func
	return 0; // 0x106b Return
}


func_3947(var_86_int)
{
	var_86_int = 2875; // 0xf6b MovI
	return 0; // 0xf6c Return
}


func_4204(var_137_bool)
{
	var_139_int = 0; var_140_string = ""; // 0x106d PushV
	var_140_string = "d1q01FirstGeorgVisit"; // 0x106e MovS
	func_3867(var_139_int, var_140_string); // 0x106f Call
	var_141_int = 1; // 0x1071 PushI
	var_142_bool = var_139_int == var_141_int; // 0x1072 Eq
	if(var_142_bool == 0) goto Label_4214; // 0x1073 JumpB
	var_137_bool = 1; // 0x1074 MovB
	return 0; // 0x1075 Return
	
Label_4214:
	var_137_bool = 0; // 0x1076 MovB
	return 0; // 0x1077 Return
}


func_3949(var_87_string)
{
	var_87_string = "ui/NPC_Petr.png"; // 0xf6d MovS
	return 0; // 0xf6e Return
}


func_4092()
{
	var_426_string = "KnowMistresses"; // 0xffd PushS
	var_427_int = 1; // 0xffe PushI
	SetVariable(var_426_string, var_427_int); // 0xfff Func
	return 0; // 0x1001 Return
}


func_3183(var_0_object, var_583_int, var_584_object)
{
	var_586_object = Obj(); var_587_bool = 0; var_588_int = 0; var_589_bool = 0; var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0; // 0xc6f PushV
	var_0_object = var_584_object; // 0xc70 TMov
	var_594_bool = 0; var_595_object = Obj(); // 0xc71 PushV
	var_595_object = var_584_object; // 0xc72 Mov
	func_3772(var_595_object); // 0xc73 Call
	var_596_bool = var_594_bool == 0; // 0xc75 Not
	if(var_596_bool == 0) goto Label_3193; // 0xc76 JumpB
	var_583_int = -2; // 0xc77 MovI
	return 8; // 0xc78 Return
	
Label_3193:
	CreateDialog(var_590_object); // 0xc79 Func
	var_597_int = 0; // 0xc7b PushV
	func_3947(var_597_int); // 0xc7c Call
	SetNPCName(var_597_int); // 0xc7e ObjFunc
	var_598_string = ""; // 0xc80 PushV
	func_3949(var_598_string); // 0xc81 Call
	SetPhoto(var_598_string); // 0xc83 ObjFunc
	var_599_int = 0; // 0xc85 PushV
	func_4687(var_599_int); // 0xc86 Call
	SetPlayerName(var_599_int); // 0xc88 ObjFunc
	var_592_int = -1; // 0xc8a MovI
	IsOverrideActive(var_591_bool); // 0xc8b Func
	var_600_bool = var_591_bool; // 0xc8d Push
	if(var_600_bool == 0) goto Label_3217; // 0xc8e JumpB
	var_583_int = -2; // 0xc8f MovI
	return 8; // 0xc90 Return
	
Label_3217:
	DoDialog(var_590_object); // 0xc91 Func
	var_601_object = Obj(); var_602_object = Obj(); // 0xc93 PushV
	var_601_object = var_584_object; // 0xc94 Mov
	var_602_object = var_590_object; // 0xc95 Mov
	TaskCall(13); // 0xc96 TaskCall
	func_3246(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object); // 0xc97 Call
	TaskReturn(); // 0xc98 TaskReturn
	IsDialogEnd(var_593_bool); // 0xc9a ObjFunc
	
Label_3228:
	var_668_bool = var_593_bool == 0; // 0xc9c Not
	if(var_668_bool == 0) goto Label_3235; // 0xc9d JumpB
	sync(); // 0xc9e Func
	IsDialogEnd(var_593_bool); // 0xca0 ObjFunc
	goto Label_3228; // 0xca2 Jump
	
Label_3235:
	var_669_object = Obj(); // 0xca3 PushV
	var_669_object = var_584_object; // 0xca4 Mov
	func_3828(); // 0xca5 Call
	StopDialog(var_590_object); // 0xca7 Func
	GetReturnValue(var_592_int); // 0xca9 ObjFunc
	var_583_int = var_592_int; // 0xcab Mov
	return 8; // 0xcac Return
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
	func_4086(); // 0x79 Call
	var_108_string = ""; // 0x7b PushV
	var_108_string = "Neutral"; // 0x7c MovS
	func_175(var_98_object, var_108_string); // 0x7d Call
	var_123_int = 170; // 0x7f PushI
	SetMessage(var_123_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_124_int = 171; // 0x84 PushI
	var_125_int = 210; // 0x85 PushI
	var_126_int = 206; // 0x86 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x87 TObjFunc
	var_127_int = 172; // 0x89 PushI
	var_128_int = 209; // 0x8a PushI
	var_129_int = 207; // 0x8b PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_130_bool = 0; // 0x91 PushV
	func_3951(var_130_bool); // 0x92 Call
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
	func_3832(var_132_string); // 0x9c Call
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


func_624(var_2_object, var_112_string)
{
	var_113_bool = 0; // 0x271 PushV
	func_3951(var_113_bool); // 0x272 Call
	var_114_bool = var_113_bool == 0; // 0x274 Not
	if(var_114_bool == 0) goto Label_631; // 0x275 JumpB
	return 0; // 0x276 Return
	
Label_631:
	var_115_bool = var_112_string == var_2_object; // 0x277 Eq
	if(var_115_bool == 0) goto Label_634; // 0x278 JumpB
	return 0; // 0x279 Return
	
Label_634:
	var_116_string = ""; // 0x27a PushV
	var_116_string = var_112_string; // 0x27b Mov
	func_3832(var_116_string); // 0x27c Call
	var_2_object = var_112_string; // 0x27e TMov
	return 0; // 0x27f Return
}


func_4720()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x1270 PushV
	var_114_string = "Adding diary entry"; // 0x1271 PushS
	Trace(var_114_string); // 0x1272 Func
	var_115_int = 131; // 0x1274 PushI
	var_116_int = 2; // 0x1275 PushI
	var_117_int = 15268; // 0x1276 PushI
	CreateDiaryEntry(var_113_object, var_115_int, var_116_int, var_117_int); // 0x1277 Func
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0; // 0x1279 PushV
	var_119_object = var_113_object; // 0x127a Mov
	var_120_int = 11; // 0x127b MovI
	func_4641(var_118_bool, var_119_object, var_120_int); // 0x127c Call
	return 2; // 0x127e Return
}


func_2674(var_0_object, var_503_int, var_504_object)
{
	var_506_object = Obj(); var_507_bool = 0; var_508_int = 0; var_509_bool = 0; var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0; // 0xa72 PushV
	var_0_object = var_504_object; // 0xa73 TMov
	var_514_bool = 0; var_515_object = Obj(); // 0xa74 PushV
	var_515_object = var_504_object; // 0xa75 Mov
	func_3772(var_515_object); // 0xa76 Call
	var_516_bool = var_514_bool == 0; // 0xa78 Not
	if(var_516_bool == 0) goto Label_2684; // 0xa79 JumpB
	var_503_int = -2; // 0xa7a MovI
	return 8; // 0xa7b Return
	
Label_2684:
	CreateDialog(var_510_object); // 0xa7c Func
	var_517_int = 0; // 0xa7e PushV
	func_3947(var_517_int); // 0xa7f Call
	SetNPCName(var_517_int); // 0xa81 ObjFunc
	var_518_string = ""; // 0xa83 PushV
	func_3949(var_518_string); // 0xa84 Call
	SetPhoto(var_518_string); // 0xa86 ObjFunc
	var_519_int = 0; // 0xa88 PushV
	func_4687(var_519_int); // 0xa89 Call
	SetPlayerName(var_519_int); // 0xa8b ObjFunc
	var_512_int = -1; // 0xa8d MovI
	IsOverrideActive(var_511_bool); // 0xa8e Func
	var_520_bool = var_511_bool; // 0xa90 Push
	if(var_520_bool == 0) goto Label_2708; // 0xa91 JumpB
	var_503_int = -2; // 0xa92 MovI
	return 8; // 0xa93 Return
	
Label_2708:
	DoDialog(var_510_object); // 0xa94 Func
	var_521_object = Obj(); var_522_object = Obj(); // 0xa96 PushV
	var_521_object = var_504_object; // 0xa97 Mov
	var_522_object = var_510_object; // 0xa98 Mov
	TaskCall(11); // 0xa99 TaskCall
	func_2737(var_523_object, var_524_object, var_525_string, var_526_bool, var_521_object, var_522_object); // 0xa9a Call
	TaskReturn(); // 0xa9b TaskReturn
	IsDialogEnd(var_513_bool); // 0xa9d ObjFunc
	
Label_2719:
	var_579_bool = var_513_bool == 0; // 0xa9f Not
	if(var_579_bool == 0) goto Label_2726; // 0xaa0 JumpB
	sync(); // 0xaa1 Func
	IsDialogEnd(var_513_bool); // 0xaa3 ObjFunc
	goto Label_2719; // 0xaa5 Jump
	
Label_2726:
	var_580_object = Obj(); // 0xaa6 PushV
	var_580_object = var_504_object; // 0xaa7 Mov
	func_3828(); // 0xaa8 Call
	StopDialog(var_510_object); // 0xaaa Func
	GetReturnValue(var_512_int); // 0xaac ObjFunc
	var_503_int = var_512_int; // 0xaae Mov
	return 8; // 0xaaf Return
}


func_3951(var_33_bool)
{
	var_33_bool = 1; // 0xf6f MovB
	return 0; // 0xf70 Return
}


func_4464(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x1171 PushV
	var_218_string = "KnowAnna"; // 0x1172 MovS
	func_3867(var_217_int, var_218_string); // 0x1173 Call
	var_219_int = 1; // 0x1175 PushI
	var_220_bool = var_217_int == var_219_int; // 0x1176 Eq
	if(var_220_bool == 0) goto Label_4474; // 0x1177 JumpB
	var_215_bool = 1; // 0x1178 MovB
	return 0; // 0x1179 Return
	
Label_4474:
	var_215_bool = 0; // 0x117a MovB
	return 0; // 0x117b Return
}


func_3953()
{
	var_144_string = "playsound"; // 0xf72 PushS
	var_145_string = "giveitem"; // 0xf73 PushS
	TriggerWorld(var_144_string, var_145_string); // 0xf74 Func
	return 0; // 0xf76 Return
}


func_3959()
{
	var_335_string = "KnowTvirin"; // 0xf78 PushS
	var_336_int = 1; // 0xf79 PushI
	SetVariable(var_335_string, var_336_int); // 0xf7a Func
	return 0; // 0xf7c Return
}


func_4216(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x1079 PushV
	var_149_string = "ood2Petr1"; // 0x107a MovS
	func_3867(var_148_int, var_149_string); // 0x107b Call
	var_152_int = 0; // 0x107d PushI
	var_153_bool = var_148_int == var_152_int; // 0x107e Eq
	if(var_153_bool == 0) goto Label_4226; // 0x107f JumpB
	var_146_bool = 1; // 0x1080 MovB
	return 0; // 0x1081 Return
	
Label_4226:
	var_146_bool = 0; // 0x1082 MovB
	return 0; // 0x1083 Return
}


func_4476(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x117d PushV
	var_202_string = "KnowEva"; // 0x117e MovS
	func_3867(var_201_int, var_202_string); // 0x117f Call
	var_203_int = 1; // 0x1181 PushI
	var_204_bool = var_201_int == var_203_int; // 0x1182 Eq
	if(var_204_bool == 0) goto Label_4486; // 0x1183 JumpB
	var_199_bool = 1; // 0x1184 MovB
	return 0; // 0x1185 Return
	
Label_4486:
	var_199_bool = 0; // 0x1186 MovB
	return 0; // 0x1187 Return
}


func_3965()
{
	var_38_string = "ood2Petr1"; // 0xf7e PushS
	var_39_int = 1; // 0xf7f PushI
	SetVariable(var_38_string, var_39_int); // 0xf80 Func
	return 0; // 0xf82 Return
}


func_4736()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x1280 PushV
	var_46_string = "Adding diary entry"; // 0x1281 PushS
	Trace(var_46_string); // 0x1282 Func
	var_47_int = 173; // 0x1284 PushI
	var_48_int = 0; // 0x1285 PushI
	var_49_int = 15425; // 0x1286 PushI
	CreateDiaryEntry(var_45_object, var_47_int, var_48_int, var_49_int); // 0x1287 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x1289 PushV
	var_51_object = var_45_object; // 0x128a Mov
	var_52_int = 170; // 0x128b MovI
	func_4641(var_50_bool, var_51_object, var_52_int); // 0x128c Call
	return 2; // 0x128e Return
}


func_2434(var_0_object, var_1_object, var_2_object, var_3_object, var_457_object, var_458_object)
{
	var_0_object = var_458_object; // 0x983 TMov
	var_1_object = var_457_object; // 0x984 TMov
	var_3_object = 0; // 0x985 TMovB
	var_463_int = 1; // 0x986 PushI
	if(var_463_int == 0) goto Label_2487; // 0x987 JumpB
	var_464_bool = 0; var_465_object = Obj(); // 0x988 PushV
	var_465_object = var_1_object; // 0x989 MovT
	func_4560(var_465_object); // 0x98a Call
	if(var_464_bool == 0) goto Label_2470; // 0x98c JumpB
	var_470_object = Obj(); var_471_object = Obj(); // 0x98d PushV
	var_470_object = var_1_object; // 0x98e MovT
	var_471_object = var_0_object; // 0x98f MovT
	func_4192(); // 0x990 Call
	var_474_string = ""; // 0x992 PushV
	var_474_string = "Neutral"; // 0x993 MovS
	func_2517(var_458_object, var_474_string); // 0x994 Call
	var_479_int = 10030; // 0x996 PushI
	SetMessage(var_479_int); // 0x997 TObjFunc
	ClearReplies(); // 0x999 TObjFunc
	var_480_int = 10031; // 0x99b PushI
	var_481_int = 11054; // 0x99c PushI
	var_482_int = 11053; // 0x99d PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x99e TObjFunc
	var_483_int = 10039; // 0x9a0 PushI
	var_484_int = 11063; // 0x9a1 PushI
	var_485_int = 11062; // 0x9a2 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x9a3 TObjFunc
	goto Label_2487; // 0x9a5 Jump
	
Label_2487:
	var_486_bool = 0; // 0x9b7 PushV
	func_3951(var_486_bool); // 0x9b8 Call
	if(var_486_bool == 0) goto Label_2502; // 0x9ba JumpB
	
Label_2491:
	lshWaitForAnimEnd(); // 0x9bb Func
	var_487_object = var_3_object; // 0x9bd PushT
	if(var_487_object == 0) goto Label_2496; // 0x9be JumpB
	goto Label_2501; // 0x9bf Jump
	
Label_2501:
	goto Label_2516; // 0x9c5 Jump
	
Label_2516:
	return 0; // 0x9d4 Return
	
Label_2496:
	var_488_string = ""; // 0x9c0 PushV
	var_488_string = var_2_object; // 0x9c1 MovT
	func_3832(var_488_string); // 0x9c2 Call
	goto Label_2491; // 0x9c4 Jump
	
Label_2502:
	var_489_string = "all"; // 0x9c6 PushS
	var_490_string = "idle"; // 0x9c7 PushS
	PlayAnimation(var_489_string, var_490_string); // 0x9c8 Func
	
Label_2506:
	WaitForAnimEnd(); // 0x9ca Func
	var_491_object = var_3_object; // 0x9cc PushT
	if(var_491_object == 0) goto Label_2511; // 0x9cd JumpB
	goto Label_2516; // 0x9ce Jump
	
Label_2511:
	var_492_string = "all"; // 0x9cf PushS
	var_493_string = "idle"; // 0x9d0 PushS
	PlayAnimation(var_492_string, var_493_string); // 0x9d1 Func
	goto Label_2506; // 0x9d3 Jump
	
Label_2470:
	var_494_string = ""; // 0x9a6 PushV
	var_494_string = "Neutral"; // 0x9a7 MovS
	func_2517(var_458_object, var_494_string); // 0x9a8 Call
	var_495_int = 15308; // 0x9aa PushI
	SetMessage(var_495_int); // 0x9ab TObjFunc
	ClearReplies(); // 0x9ad TObjFunc
	var_496_int = 15309; // 0x9af PushI
	var_497_int = -1; // 0x9b0 PushI
	var_498_int = 16547; // 0x9b1 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x9b2 TObjFunc
	goto Label_2487; // 0x9b4 Jump
}


func_3971()
{
	var_93_string = "ood2Petr2"; // 0xf84 PushS
	var_94_int = 1; // 0xf85 PushI
	SetVariable(var_93_string, var_94_int); // 0xf86 Func
	return 0; // 0xf88 Return
}


func_4228(var_164_bool)
{
	var_166_int = 0; var_167_string = ""; // 0x1085 PushV
	var_167_string = "ood2Petr2"; // 0x1086 MovS
	func_3867(var_166_int, var_167_string); // 0x1087 Call
	var_168_int = 0; // 0x1089 PushI
	var_169_bool = var_166_int == var_168_int; // 0x108a Eq
	if(var_169_bool == 0) goto Label_4238; // 0x108b JumpB
	var_164_bool = 1; // 0x108c MovB
	return 0; // 0x108d Return
	
Label_4238:
	var_164_bool = 0; // 0x108e MovB
	return 0; // 0x108f Return
}


func_4488(var_263_bool)
{
	var_265_int = 0; var_266_string = ""; // 0x1189 PushV
	var_266_string = "KnowGrif"; // 0x118a MovS
	func_3867(var_265_int, var_266_string); // 0x118b Call
	var_267_int = 1; // 0x118d PushI
	var_268_bool = var_265_int == var_267_int; // 0x118e Eq
	if(var_268_bool == 0) goto Label_4498; // 0x118f JumpB
	var_263_bool = 1; // 0x1190 MovB
	return 0; // 0x1191 Return
	
Label_4498:
	var_263_bool = 0; // 0x1192 MovB
	return 0; // 0x1193 Return
}


func_3977()
{
	var_125_string = "ood2Petr3"; // 0xf8a PushS
	var_126_int = 1; // 0xf8b PushI
	SetVariable(var_125_string, var_126_int); // 0xf8c Func
	return 0; // 0xf8e Return
}


func_3983()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xf8f PushV
	var_44_string = "d2q02"; // 0xf90 PushS
	var_45_int = 3; // 0xf91 PushI
	SetVariable(var_44_string, var_45_int); // 0xf92 Func
	var_46_object = Obj(); // 0xf94 PushV
	func_4670(var_46_object); // 0xf95 Call
	var_43_object = var_46_object; // 0xf96 Mov
	var_53_string = "d2q02PetrRefusedSelf"; // 0xf98 PushS
	var_54_string = "pt_map_petr"; // 0xf99 PushS
	var_55_int = 0; // 0xf9a PushI
	var_56_int = 15280; // 0xf9b PushI
	var_57_float = 0; // 0xf9c PushV
	func_3910(var_57_float); // 0xf9d Call
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xf9f ObjFunc
	func_4704(); // 0xfa2 Call
	return 2; // 0xfa4 Return
}


func_4240(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x1091 PushV
	var_183_string = "ood2Petr3"; // 0x1092 MovS
	func_3867(var_182_int, var_183_string); // 0x1093 Call
	var_184_int = 0; // 0x1095 PushI
	var_185_bool = var_182_int == var_184_int; // 0x1096 Eq
	if(var_185_bool == 0) goto Label_4250; // 0x1097 JumpB
	var_180_bool = 1; // 0x1098 MovB
	return 0; // 0x1099 Return
	
Label_4250:
	var_180_bool = 0; // 0x109a MovB
	return 0; // 0x109b Return
}


func_4752()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x1290 PushV
	var_110_string = "Adding diary entry"; // 0x1291 PushS
	Trace(var_110_string); // 0x1292 Func
	var_111_int = 174; // 0x1294 PushI
	var_112_int = 0; // 0x1295 PushI
	var_113_int = 15426; // 0x1296 PushI
	CreateDiaryEntry(var_109_object, var_111_int, var_112_int, var_113_int); // 0x1297 Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x1299 PushV
	var_115_object = var_109_object; // 0x129a Mov
	var_116_int = 170; // 0x129b MovI
	func_4641(var_114_bool, var_115_object, var_116_int); // 0x129c Call
	return 2; // 0x129e Return
}


func_401(var_0_object, var_1_object, var_2_object, var_3_object, var_167_object, var_168_object)
{
	var_0_object = var_168_object; // 0x192 TMov
	var_1_object = var_167_object; // 0x193 TMov
	var_3_object = 0; // 0x194 TMovB
	var_173_int = 1; // 0x195 PushI
	if(var_173_int == 0) goto Label_594; // 0x196 JumpB
	var_174_string = ""; // 0x197 PushV
	var_174_string = "Neutral"; // 0x198 MovS
	func_624(var_168_object, var_174_string); // 0x199 Call
	var_179_int = 8318; // 0x19b PushI
	SetMessage(var_179_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_180_bool = 0; // 0x1a0 PushV
	var_180_bool = 0; // 0x1a1 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x1a2 PushV
	var_182_object = var_1_object; // 0x1a3 MovT
	func_4300(var_182_object); // 0x1a4 Call
	if(var_181_bool == 0) goto Label_429; // 0x1a6 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x1a7 PushV
	var_190_object = var_1_object; // 0x1a8 MovT
	func_4204(var_190_object); // 0x1a9 Call
	if(var_189_bool == 0) goto Label_429; // 0x1ab JumpB
	var_180_bool = 1; // 0x1ac MovB
	
Label_429:
	if(var_180_bool == 0) goto Label_435; // 0x1ad JumpB
	var_195_int = 8319; // 0x1ae PushI
	var_196_int = 6356; // 0x1af PushI
	var_197_int = 9142; // 0x1b0 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1b1 TObjFunc
	
Label_435:
	var_198_bool = 0; // 0x1b3 PushV
	var_198_bool = 1; // 0x1b4 MovB
	var_199_bool = 0; // 0x1b5 PushV
	var_199_bool = 0; // 0x1b6 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x1b7 PushV
	var_201_object = var_1_object; // 0x1b8 MovT
	func_4408(var_200_bool, var_201_object); // 0x1b9 Call
	if(var_200_bool == 0) goto Label_450; // 0x1bb JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x1bc PushV
	var_212_object = var_1_object; // 0x1bd MovT
	func_4312(var_212_object); // 0x1be Call
	if(var_211_bool == 0) goto Label_450; // 0x1c0 JumpB
	var_199_bool = 1; // 0x1c1 MovB
	
Label_450:
	if(var_199_bool == 0) goto Label_466; // 0x1c2 JumpB
	var_217_bool = 0; // 0x1c3 PushV
	var_217_bool = 0; // 0x1c4 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0x1c5 PushV
	var_219_object = var_1_object; // 0x1c6 MovT
	func_4418(var_218_bool, var_219_object); // 0x1c7 Call
	if(var_218_bool == 0) goto Label_464; // 0x1c9 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x1ca PushV
	var_230_object = var_1_object; // 0x1cb MovT
	func_4312(var_230_object); // 0x1cc Call
	if(var_229_bool == 0) goto Label_464; // 0x1ce JumpB
	var_217_bool = 1; // 0x1cf MovB
	
Label_464:
	if(var_217_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_198_bool = 0; // 0x1d1 MovB
	
Label_466:
	if(var_198_bool == 0) goto Label_472; // 0x1d2 JumpB
	var_231_int = 8320; // 0x1d3 PushI
	var_232_int = 6369; // 0x1d4 PushI
	var_233_int = 9143; // 0x1d5 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1d6 TObjFunc
	
Label_472:
	var_234_bool = 0; // 0x1d8 PushV
	var_234_bool = 0; // 0x1d9 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0x1da PushV
	var_236_object = var_1_object; // 0x1db MovT
	func_4572(var_236_object); // 0x1dc Call
	if(var_235_bool == 0) goto Label_485; // 0x1de JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x1df PushV
	var_242_object = var_1_object; // 0x1e0 MovT
	func_4324(var_242_object); // 0x1e1 Call
	if(var_241_bool == 0) goto Label_485; // 0x1e3 JumpB
	var_234_bool = 1; // 0x1e4 MovB
	
Label_485:
	if(var_234_bool == 0) goto Label_491; // 0x1e5 JumpB
	var_247_int = 8322; // 0x1e6 PushI
	var_248_int = 6376; // 0x1e7 PushI
	var_249_int = 9145; // 0x1e8 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x1e9 TObjFunc
	
Label_491:
	var_250_bool = 0; // 0x1eb PushV
	var_250_bool = 0; // 0x1ec MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x1ed PushV
	var_252_object = var_1_object; // 0x1ee MovT
	func_4476(var_252_object); // 0x1ef Call
	if(var_251_bool == 0) goto Label_504; // 0x1f1 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x1f2 PushV
	var_258_object = var_1_object; // 0x1f3 MovT
	func_4336(var_258_object); // 0x1f4 Call
	if(var_257_bool == 0) goto Label_504; // 0x1f6 JumpB
	var_250_bool = 1; // 0x1f7 MovB
	
Label_504:
	if(var_250_bool == 0) goto Label_510; // 0x1f8 JumpB
	var_263_int = 8324; // 0x1f9 PushI
	var_264_int = 9417; // 0x1fa PushI
	var_265_int = 9147; // 0x1fb PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x1fc TObjFunc
	
Label_510:
	var_266_bool = 0; // 0x1fe PushV
	var_266_bool = 0; // 0x1ff MovB
	var_267_bool = 0; var_268_object = Obj(); // 0x200 PushV
	var_268_object = var_1_object; // 0x201 MovT
	func_4464(var_268_object); // 0x202 Call
	if(var_267_bool == 0) goto Label_523; // 0x204 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x205 PushV
	var_274_object = var_1_object; // 0x206 MovT
	func_4348(var_274_object); // 0x207 Call
	if(var_273_bool == 0) goto Label_523; // 0x209 JumpB
	var_266_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_266_bool == 0) goto Label_529; // 0x20b JumpB
	var_279_int = 8327; // 0x20c PushI
	var_280_int = 9169; // 0x20d PushI
	var_281_int = 9150; // 0x20e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x20f TObjFunc
	
Label_529:
	var_282_bool = 0; // 0x211 PushV
	var_282_bool = 0; // 0x212 MovB
	var_283_bool = 0; var_284_object = Obj(); // 0x213 PushV
	var_284_object = var_1_object; // 0x214 MovT
	func_4548(var_284_object); // 0x215 Call
	if(var_283_bool == 0) goto Label_542; // 0x217 JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x218 PushV
	var_290_object = var_1_object; // 0x219 MovT
	func_4360(var_290_object); // 0x21a Call
	if(var_289_bool == 0) goto Label_542; // 0x21c JumpB
	var_282_bool = 1; // 0x21d MovB
	
Label_542:
	if(var_282_bool == 0) goto Label_548; // 0x21e JumpB
	var_295_int = 8329; // 0x21f PushI
	var_296_int = 9170; // 0x220 PushI
	var_297_int = 9152; // 0x221 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x222 TObjFunc
	
Label_548:
	var_298_bool = 0; // 0x224 PushV
	var_298_bool = 0; // 0x225 MovB
	var_299_bool = 0; var_300_object = Obj(); // 0x226 PushV
	var_300_object = var_1_object; // 0x227 MovT
	func_4396(var_300_object); // 0x228 Call
	if(var_299_bool == 0) goto Label_561; // 0x22a JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x22b PushV
	var_306_object = var_1_object; // 0x22c MovT
	func_4372(var_306_object); // 0x22d Call
	if(var_305_bool == 0) goto Label_561; // 0x22f JumpB
	var_298_bool = 1; // 0x230 MovB
	
Label_561:
	if(var_298_bool == 0) goto Label_567; // 0x231 JumpB
	var_311_int = 8334; // 0x232 PushI
	var_312_int = 9171; // 0x233 PushI
	var_313_int = 9157; // 0x234 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x235 TObjFunc
	
Label_567:
	var_314_bool = 0; // 0x237 PushV
	var_314_bool = 0; // 0x238 MovB
	var_315_bool = 0; var_316_object = Obj(); // 0x239 PushV
	var_316_object = var_1_object; // 0x23a MovT
	func_4488(var_316_object); // 0x23b Call
	if(var_315_bool == 0) goto Label_580; // 0x23d JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0x23e PushV
	var_322_object = var_1_object; // 0x23f MovT
	func_4384(var_322_object); // 0x240 Call
	if(var_321_bool == 0) goto Label_580; // 0x242 JumpB
	var_314_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_314_bool == 0) goto Label_586; // 0x244 JumpB
	var_327_int = 8337; // 0x245 PushI
	var_328_int = 9172; // 0x246 PushI
	var_329_int = 9160; // 0x247 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x248 TObjFunc
	
Label_586:
	var_330_int = 8724; // 0x24a PushI
	var_331_int = -1; // 0x24b PushI
	var_332_int = 9561; // 0x24c PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x24d TObjFunc
	goto Label_594; // 0x24f Jump
	
Label_594:
	var_333_bool = 0; // 0x252 PushV
	func_3951(var_333_bool); // 0x253 Call
	if(var_333_bool == 0) goto Label_609; // 0x255 JumpB
	
Label_598:
	lshWaitForAnimEnd(); // 0x256 Func
	var_334_object = var_3_object; // 0x258 PushT
	if(var_334_object == 0) goto Label_603; // 0x259 JumpB
	goto Label_608; // 0x25a Jump
	
Label_608:
	goto Label_623; // 0x260 Jump
	
Label_623:
	return 0; // 0x26f Return
	
Label_603:
	var_335_string = ""; // 0x25b PushV
	var_335_string = var_2_object; // 0x25c MovT
	func_3832(var_335_string); // 0x25d Call
	goto Label_598; // 0x25f Jump
	
Label_609:
	var_336_string = "all"; // 0x261 PushS
	var_337_string = "idle"; // 0x262 PushS
	PlayAnimation(var_336_string, var_337_string); // 0x263 Func
	
Label_613:
	WaitForAnimEnd(); // 0x265 Func
	var_338_object = var_3_object; // 0x267 PushT
	if(var_338_object == 0) goto Label_618; // 0x268 JumpB
	goto Label_623; // 0x269 Jump
	
Label_618:
	var_339_string = "all"; // 0x26a PushS
	var_340_string = "idle"; // 0x26b PushS
	PlayAnimation(var_339_string, var_340_string); // 0x26c Func
	goto Label_613; // 0x26e Jump
}


func_4500(var_43_bool)
{
	var_45_int = 0; var_46_string = ""; // 0x1195 PushV
	var_46_string = "d11q01"; // 0x1196 MovS
	func_3867(var_45_int, var_46_string); // 0x1197 Call
	var_49_int = 1; // 0x1199 PushI
	var_50_bool = var_45_int == var_49_int; // 0x119a Eq
	if(var_50_bool == 0) goto Label_4510; // 0x119b JumpB
	var_43_bool = 1; // 0x119c MovB
	return 0; // 0x119d Return
	
Label_4510:
	var_43_bool = 0; // 0x119e MovB
	return 0; // 0x119f Return
}


func_4252(var_186_bool)
{
	var_188_int = 0; var_189_string = ""; // 0x109d PushV
	var_189_string = "d2q02"; // 0x109e MovS
	func_3867(var_188_int, var_189_string); // 0x109f Call
	var_190_int = 1000; // 0x10a1 PushI
	var_191_bool = var_188_int == var_190_int; // 0x10a2 Eq
	if(var_191_bool == 0) goto Label_4262; // 0x10a3 JumpB
	var_186_bool = 1; // 0x10a4 MovB
	return 0; // 0x10a5 Return
	
Label_4262:
	var_186_bool = 0; // 0x10a6 MovB
	return 0; // 0x10a7 Return
}


func_4768()
{
	var_30_bool = GlobalVars[1]; // 0x12a0 PushGE
	var_30_bool = 0; // 0x12a1 MovB
	GlobalVars[1] = var_30_bool; // 0x12a2 PopGE
	return 0; // 0x12a3 Return
}


func_4512(var_51_bool)
{
	var_53_int = 0; var_54_string = ""; // 0x11a1 PushV
	var_54_string = "ood11Petr1"; // 0x11a2 MovS
	func_3867(var_53_int, var_54_string); // 0x11a3 Call
	var_55_int = 0; // 0x11a5 PushI
	var_56_bool = var_53_int == var_55_int; // 0x11a6 Eq
	if(var_56_bool == 0) goto Label_4522; // 0x11a7 JumpB
	var_51_bool = 1; // 0x11a8 MovB
	return 0; // 0x11a9 Return
	
Label_4522:
	var_51_bool = 0; // 0x11aa MovB
	return 0; // 0x11ab Return
}


func_4772(var_31_object)
{
	var_32_bool = GlobalVars[1]; // 0x12a5 PushGE
	var_33_bool = var_32_bool == 0; // 0x12a6 Not
	if(var_33_bool == 0) goto Label_4785; // 0x12a7 JumpB
	var_34_int = 0; var_35_object = Obj(); // 0x12a8 PushV
	var_35_object = var_31_object; // 0x12a9 Mov
	TaskCall(2); // 0x12aa TaskCall
	func_49(var_36_object, var_34_int, var_35_object); // 0x12ab Call
	TaskReturn(); // 0x12ac TaskReturn
	var_140_bool = GlobalVars[1]; // 0x12ae PushGE
	var_140_bool = 1; // 0x12af MovB
	GlobalVars[1] = var_140_bool; // 0x12b0 PopGE
	
Label_4785:
	var_141_bool = 0; var_142_int = 0; // 0x12b1 PushV
	var_142_int = 1; // 0x12b2 MovI
	func_3932(var_141_bool, var_142_int); // 0x12b3 Call
	if(var_141_bool == 0) goto Label_4796; // 0x12b5 JumpB
	var_149_int = 0; var_150_object = Obj(); // 0x12b6 PushV
	var_150_object = var_31_object; // 0x12b7 Mov
	TaskCall(4); // 0x12b8 TaskCall
	func_338(var_151_object, var_149_int, var_150_object); // 0x12b9 Call
	TaskReturn(); // 0x12ba TaskReturn
	
Label_4796:
	var_343_bool = 0; var_344_int = 0; // 0x12bc PushV
	var_344_int = 2; // 0x12bd MovI
	func_3932(var_343_bool, var_344_int); // 0x12be Call
	if(var_343_bool == 0) goto Label_4808; // 0x12c0 JumpB
	var_345_int = 0; var_346_object = Obj(); // 0x12c1 PushV
	var_346_object = var_31_object; // 0x12c2 Mov
	TaskCall(6); // 0x12c3 TaskCall
	func_1513(var_347_object, var_345_int, var_346_object); // 0x12c4 Call
	TaskReturn(); // 0x12c5 TaskReturn
	return 0; // 0x12c7 Return
	
Label_4808:
	var_437_bool = 0; var_438_int = 0; // 0x12c8 PushV
	var_438_int = 3; // 0x12c9 MovI
	func_3932(var_437_bool, var_438_int); // 0x12ca Call
	if(var_437_bool == 0) goto Label_4820; // 0x12cc JumpB
	var_439_int = 0; var_440_object = Obj(); // 0x12cd PushV
	var_440_object = var_31_object; // 0x12ce Mov
	TaskCall(8); // 0x12cf TaskCall
	func_2371(var_441_object, var_439_int, var_440_object); // 0x12d0 Call
	TaskReturn(); // 0x12d1 TaskReturn
	return 0; // 0x12d3 Return
	
Label_4820:
	var_501_bool = 0; var_502_int = 0; // 0x12d4 PushV
	var_502_int = 7; // 0x12d5 MovI
	func_3932(var_501_bool, var_502_int); // 0x12d6 Call
	if(var_501_bool == 0) goto Label_4832; // 0x12d8 JumpB
	var_503_int = 0; var_504_object = Obj(); // 0x12d9 PushV
	var_504_object = var_31_object; // 0x12da Mov
	TaskCall(10); // 0x12db TaskCall
	func_2674(var_505_object, var_503_int, var_504_object); // 0x12dc Call
	TaskReturn(); // 0x12dd TaskReturn
	return 0; // 0x12df Return
	
Label_4832:
	var_581_bool = 0; var_582_int = 0; // 0x12e0 PushV
	var_582_int = 11; // 0x12e1 MovI
	func_3932(var_581_bool, var_582_int); // 0x12e2 Call
	if(var_581_bool == 0) goto Label_4844; // 0x12e4 JumpB
	var_583_int = 0; var_584_object = Obj(); // 0x12e5 PushV
	var_584_object = var_31_object; // 0x12e6 Mov
	TaskCall(12); // 0x12e7 TaskCall
	func_3183(var_585_object, var_583_int, var_584_object); // 0x12e8 Call
	TaskReturn(); // 0x12e9 TaskReturn
	return 0; // 0x12eb Return
	
Label_4844:
	var_670_bool = 0; // 0x12ec PushV
	func_3938(var_670_bool); // 0x12ed Call
	return 0; // 0x12ef Return
}


func_4006()
{
	var_97_object = Obj(); var_98_object = Obj(); // 0xfa6 PushV
	var_99_string = "d2q02"; // 0xfa7 PushS
	var_100_int = 5; // 0xfa8 PushI
	SetVariable(var_99_string, var_100_int); // 0xfa9 Func
	var_101_object = Obj(); // 0xfab PushV
	func_4670(var_101_object); // 0xfac Call
	var_98_object = var_101_object; // 0xfad Mov
	var_102_string = "d2q02PetrGotoAndrei"; // 0xfaf PushS
	var_103_string = "pt_map_andrei"; // 0xfb0 PushS
	var_104_int = 0; // 0xfb1 PushI
	var_105_int = 15276; // 0xfb2 PushI
	var_106_float = 0; // 0xfb3 PushV
	func_3910(var_106_float); // 0xfb4 Call
	AddMark(var_102_string, var_103_string, var_104_int, var_105_int, var_106_float); // 0xfb6 ObjFunc
	var_107_string = "d2q02PetrGotoAndreiSelf"; // 0xfb8 PushS
	var_108_string = "pt_map_petr"; // 0xfb9 PushS
	var_109_int = 0; // 0xfba PushI
	var_110_int = 15281; // 0xfbb PushI
	var_111_float = 0; // 0xfbc PushV
	func_3910(var_111_float); // 0xfbd Call
	AddMark(var_107_string, var_108_string, var_109_int, var_110_int, var_111_float); // 0xfbf ObjFunc
	func_4720(); // 0xfc2 Call
	return 2; // 0xfc4 Return
}


func_4264(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x10a9 PushV
	var_157_string = "d2q02"; // 0x10aa MovS
	func_3867(var_156_int, var_157_string); // 0x10ab Call
	var_158_int = 2; // 0x10ad PushI
	var_159_bool = var_156_int == var_158_int; // 0x10ae Eq
	if(var_159_bool == 0) goto Label_4274; // 0x10af JumpB
	var_154_bool = 1; // 0x10b0 MovB
	return 0; // 0x10b1 Return
	
Label_4274:
	var_154_bool = 0; // 0x10b2 MovB
	return 0; // 0x10b3 Return
}


func_3755(var_31_bool)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0xeab PushV
	GetPosition(var_37_cvector); // 0xeac ObjFunc
	GetPosition(var_38_cvector); // 0xeae Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0xeb0 Sub2
	var_41_float = GetByIndex(var_39_cvector, 0); // 0xeb1 PushE
	var_42_float = GetByIndex(var_39_cvector, 2); // 0xeb2 PushE
	Rotate(var_41_float, var_42_float, var_40_bool); // 0xeb3 Func
	var_31_bool = var_40_bool; // 0xeb5 Mov
	return 8; // 0xeb6 Return
}


func_4524(var_97_bool)
{
	var_99_int = 0; var_100_string = ""; // 0x11ad PushV
	var_100_string = "d11q01"; // 0x11ae MovS
	func_3867(var_99_int, var_100_string); // 0x11af Call
	var_101_int = 1000; // 0x11b1 PushI
	var_102_bool = var_99_int == var_101_int; // 0x11b2 Eq
	if(var_102_bool == 0) goto Label_4534; // 0x11b3 JumpB
	var_97_bool = 1; // 0x11b4 MovB
	return 0; // 0x11b5 Return
	
Label_4534:
	var_97_bool = 0; // 0x11b6 MovB
	return 0; // 0x11b7 Return
}


func_3246(var_0_object, var_1_object, var_2_object, var_3_object, var_601_object, var_602_object)
{
	var_0_object = var_602_object; // 0xcaf TMov
	var_1_object = var_601_object; // 0xcb0 TMov
	var_3_object = 0; // 0xcb1 TMovB
	var_607_int = 1; // 0xcb2 PushI
	if(var_607_int == 0) goto Label_3328; // 0xcb3 JumpB
	var_608_bool = 0; // 0xcb4 PushV
	var_608_bool = 0; // 0xcb5 MovB
	var_609_bool = 0; var_610_object = Obj(); // 0xcb6 PushV
	var_610_object = var_1_object; // 0xcb7 MovT
	func_4500(var_610_object); // 0xcb8 Call
	if(var_609_bool == 0) goto Label_3265; // 0xcba JumpB
	var_615_bool = 0; var_616_object = Obj(); // 0xcbb PushV
	var_616_object = var_1_object; // 0xcbc MovT
	func_4512(var_616_object); // 0xcbd Call
	if(var_615_bool == 0) goto Label_3265; // 0xcbf JumpB
	var_608_bool = 1; // 0xcc0 MovB
	
Label_3265:
	if(var_608_bool == 0) goto Label_3291; // 0xcc1 JumpB
	var_621_object = Obj(); var_622_object = Obj(); // 0xcc2 PushV
	var_621_object = var_1_object; // 0xcc3 MovT
	var_622_object = var_0_object; // 0xcc4 MovT
	func_4180(); // 0xcc5 Call
	var_625_string = ""; // 0xcc7 PushV
	var_625_string = "Neutral"; // 0xcc8 MovS
	func_3358(var_602_object, var_625_string); // 0xcc9 Call
	var_630_int = 14462; // 0xccb PushI
	SetMessage(var_630_int); // 0xccc TObjFunc
	ClearReplies(); // 0xcce TObjFunc
	var_631_int = 14463; // 0xcd0 PushI
	var_632_int = 15695; // 0xcd1 PushI
	var_633_int = 15694; // 0xcd2 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0xcd3 TObjFunc
	var_634_int = 14473; // 0xcd5 PushI
	var_635_int = 15695; // 0xcd6 PushI
	var_636_int = 15705; // 0xcd7 PushI
	AddReply(var_634_int, var_635_int, var_636_int); // 0xcd8 TObjFunc
	goto Label_3328; // 0xcda Jump
	
Label_3328:
	var_637_bool = 0; // 0xd00 PushV
	func_3951(var_637_bool); // 0xd01 Call
	if(var_637_bool == 0) goto Label_3343; // 0xd03 JumpB
	
Label_3332:
	lshWaitForAnimEnd(); // 0xd04 Func
	var_638_object = var_3_object; // 0xd06 PushT
	if(var_638_object == 0) goto Label_3337; // 0xd07 JumpB
	goto Label_3342; // 0xd08 Jump
	
Label_3342:
	goto Label_3357; // 0xd0e Jump
	
Label_3357:
	return 0; // 0xd1d Return
	
Label_3337:
	var_639_string = ""; // 0xd09 PushV
	var_639_string = var_2_object; // 0xd0a MovT
	func_3832(var_639_string); // 0xd0b Call
	goto Label_3332; // 0xd0d Jump
	
Label_3343:
	var_640_string = "all"; // 0xd0f PushS
	var_641_string = "idle"; // 0xd10 PushS
	PlayAnimation(var_640_string, var_641_string); // 0xd11 Func
	
Label_3347:
	WaitForAnimEnd(); // 0xd13 Func
	var_642_object = var_3_object; // 0xd15 PushT
	if(var_642_object == 0) goto Label_3352; // 0xd16 JumpB
	goto Label_3357; // 0xd17 Jump
	
Label_3352:
	var_643_string = "all"; // 0xd18 PushS
	var_644_string = "idle"; // 0xd19 PushS
	PlayAnimation(var_643_string, var_644_string); // 0xd1a Func
	goto Label_3347; // 0xd1c Jump
	
Label_3291:
	var_645_string = ""; // 0xcdb PushV
	var_645_string = "Neutral"; // 0xcdc MovS
	func_3358(var_602_object, var_645_string); // 0xcdd Call
	var_646_int = 14474; // 0xcdf PushI
	SetMessage(var_646_int); // 0xce0 TObjFunc
	ClearReplies(); // 0xce2 TObjFunc
	var_647_bool = 0; var_648_object = Obj(); // 0xce4 PushV
	var_648_object = var_1_object; // 0xce5 MovT
	func_4536(var_648_object); // 0xce6 Call
	if(var_647_bool == 0) goto Label_3310; // 0xce8 JumpB
	var_653_int = 14475; // 0xce9 PushI
	var_654_int = 15709; // 0xcea PushI
	var_655_int = 15708; // 0xceb PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xcec TObjFunc
	
Label_3310:
	var_656_int = 14500; // 0xcee PushI
	var_657_int = -1; // 0xcef PushI
	var_658_int = 15736; // 0xcf0 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0xcf1 TObjFunc
	var_659_bool = 0; var_660_object = Obj(); // 0xcf3 PushV
	var_660_object = var_1_object; // 0xcf4 MovT
	func_4524(var_660_object); // 0xcf5 Call
	if(var_659_bool == 0) goto Label_3325; // 0xcf7 JumpB
	var_665_int = 14501; // 0xcf8 PushI
	var_666_int = -1; // 0xcf9 PushI
	var_667_int = 15737; // 0xcfa PushI
	AddReply(var_665_int, var_666_int, var_667_int); // 0xcfb TObjFunc
	
Label_3325:
	goto Label_3328; // 0xcfd Jump
}


func_175(var_2_object, var_40_string)
{
	var_41_bool = 0; // 0xb0 PushV
	func_3951(var_41_bool); // 0xb1 Call
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
	func_3832(var_44_string); // 0xbb Call
	var_2_object = var_40_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_2737(var_0_object, var_1_object, var_2_object, var_3_object, var_521_object, var_522_object)
{
	var_0_object = var_522_object; // 0xab2 TMov
	var_1_object = var_521_object; // 0xab3 TMov
	var_3_object = 0; // 0xab4 TMovB
	var_527_int = 1; // 0xab5 PushI
	if(var_527_int == 0) goto Label_2809; // 0xab6 JumpB
	var_528_string = ""; // 0xab7 PushV
	var_528_string = "Neutral"; // 0xab8 MovS
	func_2839(var_522_object, var_528_string); // 0xab9 Call
	var_533_int = 13353; // 0xabb PushI
	SetMessage(var_533_int); // 0xabc TObjFunc
	ClearReplies(); // 0xabe TObjFunc
	var_534_bool = 0; // 0xac0 PushV
	var_534_bool = 0; // 0xac1 MovB
	var_535_bool = 0; var_536_object = Obj(); // 0xac2 PushV
	var_536_object = var_1_object; // 0xac3 MovT
	func_4440(var_536_object); // 0xac4 Call
	if(var_535_bool == 0) goto Label_2765; // 0xac6 JumpB
	var_541_bool = 0; var_542_object = Obj(); // 0xac7 PushV
	var_542_object = var_1_object; // 0xac8 MovT
	func_4428(var_542_object); // 0xac9 Call
	if(var_541_bool == 0) goto Label_2765; // 0xacb JumpB
	var_534_bool = 1; // 0xacc MovB
	
Label_2765:
	if(var_534_bool == 0) goto Label_2771; // 0xacd JumpB
	var_547_int = 13355; // 0xace PushI
	var_548_int = 14598; // 0xacf PushI
	var_549_int = 14587; // 0xad0 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0xad1 TObjFunc
	
Label_2771:
	var_550_bool = 0; // 0xad3 PushV
	var_550_bool = 0; // 0xad4 MovB
	var_551_bool = 0; var_552_object = Obj(); // 0xad5 PushV
	var_552_object = var_1_object; // 0xad6 MovT
	func_4440(var_552_object); // 0xad7 Call
	var_553_bool = var_551_bool == 0; // 0xad9 Not
	if(var_553_bool == 0) goto Label_2785; // 0xada JumpB
	var_554_bool = 0; var_555_object = Obj(); // 0xadb PushV
	var_555_object = var_1_object; // 0xadc MovT
	func_4428(var_555_object); // 0xadd Call
	if(var_554_bool == 0) goto Label_2785; // 0xadf JumpB
	var_550_bool = 1; // 0xae0 MovB
	
Label_2785:
	if(var_550_bool == 0) goto Label_2791; // 0xae1 JumpB
	var_556_int = 13374; // 0xae2 PushI
	var_557_int = 14607; // 0xae3 PushI
	var_558_int = 14606; // 0xae4 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0xae5 TObjFunc
	
Label_2791:
	var_559_bool = 0; var_560_object = Obj(); // 0xae7 PushV
	var_560_object = var_1_object; // 0xae8 MovT
	func_4452(var_560_object); // 0xae9 Call
	if(var_559_bool == 0) goto Label_2801; // 0xaeb JumpB
	var_565_int = 13390; // 0xaec PushI
	var_566_int = 14625; // 0xaed PushI
	var_567_int = 14624; // 0xaee PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xaef TObjFunc
	
Label_2801:
	var_568_int = 13354; // 0xaf1 PushI
	var_569_int = -1; // 0xaf2 PushI
	var_570_int = 14586; // 0xaf3 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0xaf4 TObjFunc
	goto Label_2809; // 0xaf6 Jump
	
Label_2809:
	var_571_bool = 0; // 0xaf9 PushV
	func_3951(var_571_bool); // 0xafa Call
	if(var_571_bool == 0) goto Label_2824; // 0xafc JumpB
	
Label_2813:
	lshWaitForAnimEnd(); // 0xafd Func
	var_572_object = var_3_object; // 0xaff PushT
	if(var_572_object == 0) goto Label_2818; // 0xb00 JumpB
	goto Label_2823; // 0xb01 Jump
	
Label_2823:
	goto Label_2838; // 0xb07 Jump
	
Label_2838:
	return 0; // 0xb16 Return
	
Label_2818:
	var_573_string = ""; // 0xb02 PushV
	var_573_string = var_2_object; // 0xb03 MovT
	func_3832(var_573_string); // 0xb04 Call
	goto Label_2813; // 0xb06 Jump
	
Label_2824:
	var_574_string = "all"; // 0xb08 PushS
	var_575_string = "idle"; // 0xb09 PushS
	PlayAnimation(var_574_string, var_575_string); // 0xb0a Func
	
Label_2828:
	WaitForAnimEnd(); // 0xb0c Func
	var_576_object = var_3_object; // 0xb0e PushT
	if(var_576_object == 0) goto Label_2833; // 0xb0f JumpB
	goto Label_2838; // 0xb10 Jump
	
Label_2833:
	var_577_string = "all"; // 0xb11 PushS
	var_578_string = "idle"; // 0xb12 PushS
	PlayAnimation(var_577_string, var_578_string); // 0xb13 Func
	goto Label_2828; // 0xb15 Jump
}


func_4276(var_366_bool)
{
	var_368_int = 0; var_369_string = ""; // 0x10b5 PushV
	var_369_string = "d2q02"; // 0x10b6 MovS
	func_3867(var_368_int, var_369_string); // 0x10b7 Call
	var_370_int = 3; // 0x10b9 PushI
	var_371_bool = var_368_int == var_370_int; // 0x10ba Eq
	if(var_371_bool == 0) goto Label_4286; // 0x10bb JumpB
	var_366_bool = 1; // 0x10bc MovB
	return 0; // 0x10bd Return
	
Label_4286:
	var_366_bool = 0; // 0x10be MovB
	return 0; // 0x10bf Return
}


func_3767(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xeb7 PushV
	IsLoaded(var_33_bool); // 0xeb8 Func
	var_31_bool = var_33_bool; // 0xeba Mov
	return 2; // 0xebb Return
}


func_4536(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x11b9 PushV
	var_88_string = "ood11Petr2"; // 0x11ba MovS
	func_3867(var_87_int, var_88_string); // 0x11bb Call
	var_89_int = 0; // 0x11bd PushI
	var_90_bool = var_87_int == var_89_int; // 0x11be Eq
	if(var_90_bool == 0) goto Label_4546; // 0x11bf JumpB
	var_85_bool = 1; // 0x11c0 MovB
	return 0; // 0x11c1 Return
	
Label_4546:
	var_85_bool = 0; // 0x11c2 MovB
	return 0; // 0x11c3 Return
}


func_3772(var_45_bool)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; // 0xebc PushV
	GetPosition(var_56_cvector); // 0xebd ObjFunc
	GetEyesHeight(var_55_float); // 0xebf ObjFunc
	var_63_float = GetByIndex(var_56_cvector, 1); // 0xec1 PushE
	var_63_float = var_63_float + var_55_float; // 0xec2 Add2
	SetByIndex(var_56_cvector, 1) = var_63_float; // 0xec3 PopE
	GetPosition(var_57_cvector); // 0xec4 Func
	GetEyesHeight(var_55_float); // 0xec6 Func
	var_64_float = GetByIndex(var_57_cvector, 1); // 0xec8 PushE
	var_64_float = var_64_float + var_55_float; // 0xec9 Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0xeca PopE
	var_58_cvector = var_56_cvector - var_57_cvector; // 0xecb Sub2
	var_65_float = GetByIndex(var_58_cvector, 1); // 0xecc PushE
	var_65_float = 0; // 0xecd MovI
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0xece PopE
	var_66_int = var_58_cvector | var_58_cvector; // 0xecf Or
	var_67_float = sqrt(var_66_int); // 0xed0 Sqrt
	var_58_cvector = var_58_cvector / var_58_cvector; // 0xed1 Div2
	var_59_cvector = -var_58_cvector; // 0xed2 Neg2
	var_68_int = 70; // 0xed3 PushI
	var_69_float = var_58_cvector * var_68_int; // 0xed4 Mult
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xed5 PushV
	var_72_cvector = CVector(0.0, 1.0, 0.0); // 0xed6 PushVec
	var_71_cvector = var_59_cvector ^ var_72_cvector; // 0xed7 Xor2
	func_3857(var_70_cvector, var_71_cvector); // 0xed8 Call
	var_78_int = 25; // 0xeda PushI
	var_79_float = var_70_cvector * var_78_int; // 0xedb Mult
	var_80_int = var_69_float + var_79_float; // 0xedc Add
	var_81_cvector = CVector(0.0, 10.0, 0.0); // 0xedd PushVec
	var_60_cvector = var_80_int - var_81_cvector; // 0xede Sub2
	var_61_cvector = var_57_cvector + var_60_cvector; // 0xedf Add2
	IsOverrideActive(var_62_bool); // 0xee0 Func
	var_82_bool = var_62_bool; // 0xee2 Push
	if(var_82_bool == 0) goto Label_3814; // 0xee3 JumpB
	var_45_bool = 0; // 0xee4 MovB
	return 16; // 0xee5 Return
	
Label_3814:
	StopWorld(); // 0xee6 Func
	CameraTransit(var_61_cvector, var_59_cvector); // 0xee8 Func
	var_83_float = GetByIndex(var_60_cvector, 0); // 0xeea PushE
	var_84_float = GetByIndex(var_60_cvector, 2); // 0xeeb PushE
	Rotate(var_83_float, var_84_float); // 0xeec Func
	CameraWaitForPlayFinish(); // 0xeee Func
	ResumeWorld(); // 0xef0 Func
	var_45_bool = 1; // 0xef2 MovB
	return 16; // 0xef3 Return
}


func_4288(var_170_bool)
{
	var_172_int = 0; var_173_string = ""; // 0x10c1 PushV
	var_173_string = "d2q02"; // 0x10c2 MovS
	func_3867(var_172_int, var_173_string); // 0x10c3 Call
	var_174_int = 4; // 0x10c5 PushI
	var_175_bool = var_172_int == var_174_int; // 0x10c6 Eq
	if(var_175_bool == 0) goto Label_4298; // 0x10c7 JumpB
	var_170_bool = 1; // 0x10c8 MovB
	return 0; // 0x10c9 Return
	
Label_4298:
	var_170_bool = 0; // 0x10ca MovB
	return 0; // 0x10cb Return
}


func_4548(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x11c5 PushV
	var_234_string = "KnowMaria"; // 0x11c6 MovS
	func_3867(var_233_int, var_234_string); // 0x11c7 Call
	var_235_int = 1; // 0x11c9 PushI
	var_236_bool = var_233_int == var_235_int; // 0x11ca Eq
	if(var_236_bool == 0) goto Label_4558; // 0x11cb JumpB
	var_231_bool = 1; // 0x11cc MovB
	return 0; // 0x11cd Return
	
Label_4558:
	var_231_bool = 0; // 0x11ce MovB
	return 0; // 0x11cf Return
}


func_4038()
{
	var_38_string = "ood1Petr1"; // 0xfc7 PushS
	var_39_int = 1; // 0xfc8 PushI
	SetVariable(var_38_string, var_39_int); // 0xfc9 Func
	return 0; // 0xfcb Return
}


func_1736(var_2_object, var_129_string)
{
	var_130_bool = 0; // 0x6c9 PushV
	func_3951(var_130_bool); // 0x6ca Call
	var_131_bool = var_130_bool == 0; // 0x6cc Not
	if(var_131_bool == 0) goto Label_1743; // 0x6cd JumpB
	return 0; // 0x6ce Return
	
Label_1743:
	var_132_bool = var_129_string == var_2_object; // 0x6cf Eq
	if(var_132_bool == 0) goto Label_1746; // 0x6d0 JumpB
	return 0; // 0x6d1 Return
	
Label_1746:
	var_133_string = ""; // 0x6d2 PushV
	var_133_string = var_129_string; // 0x6d3 Mov
	func_3832(var_133_string); // 0x6d4 Call
	var_2_object = var_129_string; // 0x6d6 TMov
	return 0; // 0x6d7 Return
}


func_4300(var_129_bool)
{
	var_131_int = 0; var_132_string = ""; // 0x10cd PushV
	var_132_string = "ood1Petr1"; // 0x10ce MovS
	func_3867(var_131_int, var_132_string); // 0x10cf Call
	var_135_int = 0; // 0x10d1 PushI
	var_136_bool = var_131_int == var_135_int; // 0x10d2 Eq
	if(var_136_bool == 0) goto Label_4310; // 0x10d3 JumpB
	var_129_bool = 1; // 0x10d4 MovB
	return 0; // 0x10d5 Return
	
Label_4310:
	var_129_bool = 0; // 0x10d6 MovB
	return 0; // 0x10d7 Return
}


func_4044()
{
	var_52_string = "ood1Petr2"; // 0xfcd PushS
	var_53_int = 1; // 0xfce PushI
	SetVariable(var_52_string, var_53_int); // 0xfcf Func
	return 0; // 0xfd1 Return
}


func_4560(var_36_bool)
{
	var_38_int = 0; var_39_string = ""; // 0x11d1 PushV
	var_39_string = "ood3Petr1"; // 0x11d2 MovS
	func_3867(var_38_int, var_39_string); // 0x11d3 Call
	var_42_int = 0; // 0x11d5 PushI
	var_43_bool = var_38_int == var_42_int; // 0x11d6 Eq
	if(var_43_bool == 0) goto Label_4570; // 0x11d7 JumpB
	var_36_bool = 1; // 0x11d8 MovB
	return 0; // 0x11d9 Return
	
Label_4570:
	var_36_bool = 0; // 0x11da MovB
	return 0; // 0x11db Return
}


func_4050()
{
	var_62_string = "ood1Petr3"; // 0xfd3 PushS
	var_63_int = 1; // 0xfd4 PushI
	SetVariable(var_62_string, var_63_int); // 0xfd5 Func
	return 0; // 0xfd7 Return
}


func_2517(var_2_object, var_48_string)
{
	var_49_bool = 0; // 0x9d6 PushV
	func_3951(var_49_bool); // 0x9d7 Call
	var_50_bool = var_49_bool == 0; // 0x9d9 Not
	if(var_50_bool == 0) goto Label_2524; // 0x9da JumpB
	return 0; // 0x9db Return
	
Label_2524:
	var_51_bool = var_48_string == var_2_object; // 0x9dc Eq
	if(var_51_bool == 0) goto Label_2527; // 0x9dd JumpB
	return 0; // 0x9de Return
	
Label_2527:
	var_52_string = ""; // 0x9df PushV
	var_52_string = var_48_string; // 0x9e0 Mov
	func_3832(var_52_string); // 0x9e1 Call
	var_2_object = var_48_string; // 0x9e3 TMov
	return 0; // 0x9e4 Return
}


func_4312(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x10d9 PushV
	var_162_string = "ood1Petr2"; // 0x10da MovS
	func_3867(var_161_int, var_162_string); // 0x10db Call
	var_163_int = 0; // 0x10dd PushI
	var_164_bool = var_161_int == var_163_int; // 0x10de Eq
	if(var_164_bool == 0) goto Label_4322; // 0x10df JumpB
	var_159_bool = 1; // 0x10e0 MovB
	return 0; // 0x10e1 Return
	
Label_4322:
	var_159_bool = 0; // 0x10e2 MovB
	return 0; // 0x10e3 Return
}


func_4056()
{
	var_76_string = "ood1Petr4"; // 0xfd9 PushS
	var_77_int = 1; // 0xfda PushI
	SetVariable(var_76_string, var_77_int); // 0xfdb Func
	return 0; // 0xfdd Return
}


func_4572(var_183_bool)
{
	var_185_int = 0; var_186_string = ""; // 0x11dd PushV
	var_186_string = "KnowPredictions"; // 0x11de MovS
	func_3867(var_185_int, var_186_string); // 0x11df Call
	var_187_int = 1; // 0x11e1 PushI
	var_188_bool = var_185_int == var_187_int; // 0x11e2 Eq
	if(var_188_bool == 0) goto Label_4582; // 0x11e3 JumpB
	var_183_bool = 1; // 0x11e4 MovB
	return 0; // 0x11e5 Return
	
Label_4582:
	var_183_bool = 0; // 0x11e6 MovB
	return 0; // 0x11e7 Return
}


func_4062()
{
	var_86_string = "ood1Petr5"; // 0xfdf PushS
	var_87_int = 1; // 0xfe0 PushI
	SetVariable(var_86_string, var_87_int); // 0xfe1 Func
	return 0; // 0xfe3 Return
}


func_4324(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x10e5 PushV
	var_192_string = "ood1Petr3"; // 0x10e6 MovS
	func_3867(var_191_int, var_192_string); // 0x10e7 Call
	var_193_int = 0; // 0x10e9 PushI
	var_194_bool = var_191_int == var_193_int; // 0x10ea Eq
	if(var_194_bool == 0) goto Label_4334; // 0x10eb JumpB
	var_189_bool = 1; // 0x10ec MovB
	return 0; // 0x10ed Return
	
Label_4334:
	var_189_bool = 0; // 0x10ee MovB
	return 0; // 0x10ef Return
}


func_4068()
{
	var_96_string = "ood1Petr6"; // 0xfe5 PushS
	var_97_int = 1; // 0xfe6 PushI
	SetVariable(var_96_string, var_97_int); // 0xfe7 Func
	return 0; // 0xfe9 Return
}


func_4584(var_374_bool)
{
	var_376_int = 0; var_377_string = ""; // 0x11e9 PushV
	var_377_string = "KnowMnogogrannik"; // 0x11ea MovS
	func_3867(var_376_int, var_377_string); // 0x11eb Call
	var_378_int = 1; // 0x11ed PushI
	var_379_bool = var_376_int == var_378_int; // 0x11ee Eq
	if(var_379_bool == 0) goto Label_4594; // 0x11ef JumpB
	var_374_bool = 1; // 0x11f0 MovB
	return 0; // 0x11f1 Return
	
Label_4594:
	var_374_bool = 0; // 0x11f2 MovB
	return 0; // 0x11f3 Return
}


func_1513(var_0_object, var_345_int, var_346_object)
{
	var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; var_355_bool = 0; // 0x5e9 PushV
	var_0_object = var_346_object; // 0x5ea TMov
	var_356_bool = 0; var_357_object = Obj(); // 0x5eb PushV
	var_357_object = var_346_object; // 0x5ec Mov
	func_3772(var_357_object); // 0x5ed Call
	var_358_bool = var_356_bool == 0; // 0x5ef Not
	if(var_358_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_345_int = -2; // 0x5f1 MovI
	return 8; // 0x5f2 Return
	
Label_1523:
	CreateDialog(var_352_object); // 0x5f3 Func
	var_359_int = 0; // 0x5f5 PushV
	func_3947(var_359_int); // 0x5f6 Call
	SetNPCName(var_359_int); // 0x5f8 ObjFunc
	var_360_string = ""; // 0x5fa PushV
	func_3949(var_360_string); // 0x5fb Call
	SetPhoto(var_360_string); // 0x5fd ObjFunc
	var_361_int = 0; // 0x5ff PushV
	func_4687(var_361_int); // 0x600 Call
	SetPlayerName(var_361_int); // 0x602 ObjFunc
	var_354_int = -1; // 0x604 MovI
	IsOverrideActive(var_353_bool); // 0x605 Func
	var_362_bool = var_353_bool; // 0x607 Push
	if(var_362_bool == 0) goto Label_1547; // 0x608 JumpB
	var_345_int = -2; // 0x609 MovI
	return 8; // 0x60a Return
	
Label_1547:
	DoDialog(var_352_object); // 0x60b Func
	var_363_object = Obj(); var_364_object = Obj(); // 0x60d PushV
	var_363_object = var_346_object; // 0x60e Mov
	var_364_object = var_352_object; // 0x60f Mov
	TaskCall(7); // 0x610 TaskCall
	func_1576(var_365_object, var_366_object, var_367_string, var_368_bool, var_363_object, var_364_object); // 0x611 Call
	TaskReturn(); // 0x612 TaskReturn
	IsDialogEnd(var_355_bool); // 0x614 ObjFunc
	
Label_1558:
	var_435_bool = var_355_bool == 0; // 0x616 Not
	if(var_435_bool == 0) goto Label_1565; // 0x617 JumpB
	sync(); // 0x618 Func
	IsDialogEnd(var_355_bool); // 0x61a ObjFunc
	goto Label_1558; // 0x61c Jump
	
Label_1565:
	var_436_object = Obj(); // 0x61d PushV
	var_436_object = var_346_object; // 0x61e Mov
	func_3828(); // 0x61f Call
	StopDialog(var_352_object); // 0x621 Func
	GetReturnValue(var_354_int); // 0x623 ObjFunc
	var_345_int = var_354_int; // 0x625 Mov
	return 8; // 0x626 Return
}


func_4074()
{
	var_102_string = "ood1Petr7"; // 0xfeb PushS
	var_103_int = 1; // 0xfec PushI
	SetVariable(var_102_string, var_103_int); // 0xfed Func
	return 0; // 0xfef Return
}


func_4336(var_205_bool)
{
	var_207_int = 0; var_208_string = ""; // 0x10f1 PushV
	var_208_string = "ood1Petr4"; // 0x10f2 MovS
	func_3867(var_207_int, var_208_string); // 0x10f3 Call
	var_209_int = 0; // 0x10f5 PushI
	var_210_bool = var_207_int == var_209_int; // 0x10f6 Eq
	if(var_210_bool == 0) goto Label_4346; // 0x10f7 JumpB
	var_205_bool = 1; // 0x10f8 MovB
	return 0; // 0x10f9 Return
	
Label_4346:
	var_205_bool = 0; // 0x10fa MovB
	return 0; // 0x10fb Return
}


func_4080()
{
	var_108_string = "ood1Petr8"; // 0xff1 PushS
	var_109_int = 1; // 0xff2 PushI
	SetVariable(var_108_string, var_109_int); // 0xff3 Func
	return 0; // 0xff5 Return
}


func_3828()
{
	CameraSwitchToNormal(); // 0xef5 Func
	return 0; // 0xef7 Return
}


func_4596(var_150_bool)
{
	var_152_int = 0; // 0x11f5 PushV
	func_3924(var_152_int); // 0x11f6 Call
	var_157_int = 18; // 0x11f8 PushI
	var_158_bool = var_152_int >= var_157_int; // 0x11f9 GE
	if(var_158_bool == 0) goto Label_4605; // 0x11fa JumpB
	var_150_bool = 1; // 0x11fb MovB
	return 0; // 0x11fc Return
	
Label_4605:
	var_150_bool = 0; // 0x11fd MovB
	return 0; // 0x11fe Return
}


func_4086()
{
	var_38_string = "KnowPetr"; // 0xff7 PushS
	var_39_int = 1; // 0xff8 PushI
	SetVariable(var_38_string, var_39_int); // 0xff9 Func
	return 0; // 0xffb Return
}


func_3832(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0xef8 PushV
	var_40_string = "playing "; // 0xef9 PushS
	var_41_int = var_40_string + var_35_string; // 0xefa Add
	Trace(var_41_int); // 0xefb Func
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float); // 0xefd Func
	lshPlayAnimation(var_38_float, var_39_float); // 0xeff Func
	var_42_string = "start: "; // 0xf01 PushS
	var_43_int = var_42_string + var_38_float; // 0xf02 Add
	Trace(var_43_int); // 0xf03 Func
	var_44_string = "end: "; // 0xf05 PushS
	var_45_int = var_44_string + var_39_float; // 0xf06 Add
	Trace(var_45_int); // 0xf07 Func
	return 4; // 0xf09 Return
}


func_4348(var_221_bool)
{
	var_223_int = 0; var_224_string = ""; // 0x10fd PushV
	var_224_string = "ood1Petr5"; // 0x10fe MovS
	func_3867(var_223_int, var_224_string); // 0x10ff Call
	var_225_int = 0; // 0x1101 PushI
	var_226_bool = var_223_int == var_225_int; // 0x1102 Eq
	if(var_226_bool == 0) goto Label_4358; // 0x1103 JumpB
	var_221_bool = 1; // 0x1104 MovB
	return 0; // 0x1105 Return
	
Label_4358:
	var_221_bool = 0; // 0x1106 MovB
	return 0; // 0x1107 Return
}


func_4607(var_168_bool)
{
	var_170_bool = 0; // 0x1200 PushV
	var_170_bool = 0; // 0x1201 MovB
	var_171_int = 0; // 0x1202 PushV
	func_3924(var_171_int); // 0x1203 Call
	var_172_int = 12; // 0x1205 PushI
	var_173_bool = var_171_int >= var_172_int; // 0x1206 GE
	if(var_173_bool == 0) goto Label_4623; // 0x1207 JumpB
	var_174_int = 0; // 0x1208 PushV
	func_3924(var_174_int); // 0x1209 Call
	var_175_int = 18; // 0x120b PushI
	var_176_bool = var_174_int < var_175_int; // 0x120c LT
	if(var_176_bool == 0) goto Label_4623; // 0x120d JumpB
	var_170_bool = 1; // 0x120e MovB
	
Label_4623:
	if(var_170_bool == 0) goto Label_4626; // 0x120f JumpB
	var_168_bool = 1; // 0x1210 MovB
	return 0; // 0x1211 Return
	
Label_4626:
	var_168_bool = 0; // 0x1212 MovB
	return 0; // 0x1213 Return
}


