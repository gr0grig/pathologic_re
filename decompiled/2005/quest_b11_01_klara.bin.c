task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xca PushI
	if(var_9_int == 0) goto Label_506; // 0xcb JumpB
	func_1109(); // 0xcd NEW_2
	var_11_int = 23179; // 0xcf PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xd0 Eq
	if(var_12_bool == 0) goto Label_270; // 0xd1 JumpB
	var_13_bool = 0; // 0xd2 PushV
	var_13_bool = 0; // 0xd3 MovB
	var_14_bool = 0; var_15_object = Obj(); // 0xd4 PushV
	var_15_object = var_1_object; // 0xd5 MovT
	func_1186(var_15_object); // 0xd6 NEW_2
	var_22_bool = var_14_bool == 0; // 0xd8 Not
	if(var_22_bool == 0) goto Label_224; // 0xd9 JumpB
	var_23_bool = 0; var_24_object = Obj(); // 0xda PushV
	var_24_object = var_1_object; // 0xdb MovT
	func_1198(var_24_object); // 0xdc NEW_2
	if(var_23_bool == 0) goto Label_224; // 0xde JumpB
	var_13_bool = 1; // 0xdf MovB
	
Label_224:
	if(var_13_bool == 0) goto Label_255; // 0xe0 JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0xe1 PushV
	var_29_object = var_1_object; // 0xe2 MovT
	var_30_object = var_0_object; // 0xe3 MovT
	func_1180(); // 0xe4 NEW_2
	var_33_string = ""; // 0xe6 PushV
	var_33_string = "Neutral"; // 0xe7 MovS
	func_179(var_8_bool, var_33_string); // 0xe8 NEW_2
	var_50_int = 522009; // 0xea PushI
	SetMessage(var_50_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_51_int = 523279; // 0xef PushI
	var_52_int = 24484; // 0xf0 PushI
	var_53_int = 24483; // 0xf1 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xf2 TObjFunc
	var_54_int = 522010; // 0xf4 PushI
	var_55_int = 24503; // 0xf5 PushI
	var_56_int = 23180; // 0xf6 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xf7 TObjFunc
	var_57_int = 523286; // 0xf9 PushI
	var_58_int = 24492; // 0xfa PushI
	var_59_int = 24491; // 0xfb PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_60_string = ""; // 0xff PushV
	var_60_string = "Fear"; // 0x100 MovS
	func_179(var_8_bool, var_60_string); // 0x101 NEW_2
	var_61_int = 522096; // 0x103 PushI
	SetMessage(var_61_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_62_int = 522097; // 0x108 PushI
	var_63_int = -1; // 0x109 PushI
	var_64_int = 23266; // 0x10a PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_65_int = 24533; // 0x10e PushI
	var_66_bool = var_7_cvector == var_65_int; // 0x10f Eq
	if(var_66_bool == 0) goto Label_273; // 0x110 JumpB
	
Label_273:
	var_67_int = 24514; // 0x111 PushI
	var_68_bool = var_7_cvector == var_67_int; // 0x112 Eq
	if(var_68_bool == 0) goto Label_276; // 0x113 JumpB
	
Label_276:
	var_69_int = 24518; // 0x114 PushI
	var_70_bool = var_7_cvector == var_69_int; // 0x115 Eq
	if(var_70_bool == 0) goto Label_299; // 0x116 JumpB
	var_71_string = ""; // 0x117 PushV
	var_71_string = "Fear"; // 0x118 MovS
	func_179(var_8_bool, var_71_string); // 0x119 NEW_2
	var_72_int = 523310; // 0x11b PushI
	SetMessage(var_72_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_73_int = 523312; // 0x120 PushI
	var_74_int = 24508; // 0x121 PushI
	var_75_int = 24521; // 0x122 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x123 TObjFunc
	var_76_int = 523314; // 0x125 PushI
	var_77_int = 24484; // 0x126 PushI
	var_78_int = 24524; // 0x127 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_79_int = 24516; // 0x12b PushI
	var_80_bool = var_7_cvector == var_79_int; // 0x12c Eq
	if(var_80_bool == 0) goto Label_322; // 0x12d JumpB
	var_81_string = ""; // 0x12e PushV
	var_81_string = "Fear"; // 0x12f MovS
	func_179(var_8_bool, var_81_string); // 0x130 NEW_2
	var_82_int = 523308; // 0x132 PushI
	SetMessage(var_82_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_83_int = 523311; // 0x137 PushI
	var_84_int = 24508; // 0x138 PushI
	var_85_int = 24519; // 0x139 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x13a TObjFunc
	var_86_int = 523313; // 0x13c PushI
	var_87_int = 24484; // 0x13d PushI
	var_88_int = 24523; // 0x13e PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_89_int = 24492; // 0x142 PushI
	var_90_bool = var_7_cvector == var_89_int; // 0x143 Eq
	if(var_90_bool == 0) goto Label_340; // 0x144 JumpB
	var_91_string = ""; // 0x145 PushV
	var_91_string = "Fear"; // 0x146 MovS
	func_179(var_8_bool, var_91_string); // 0x147 NEW_2
	var_92_int = 523287; // 0x149 PushI
	SetMessage(var_92_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_93_int = 523300; // 0x14e PushI
	var_94_int = 24508; // 0x14f PushI
	var_95_int = 24506; // 0x150 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_96_int = 24490; // 0x154 PushI
	var_97_bool = var_7_cvector == var_96_int; // 0x155 Eq
	if(var_97_bool == 0) goto Label_343; // 0x156 JumpB
	
Label_343:
	var_98_int = 24503; // 0x157 PushI
	var_99_bool = var_7_cvector == var_98_int; // 0x158 Eq
	if(var_99_bool == 0) goto Label_361; // 0x159 JumpB
	var_100_string = ""; // 0x15a PushV
	var_100_string = "Fear"; // 0x15b MovS
	func_179(var_8_bool, var_100_string); // 0x15c NEW_2
	var_101_int = 523298; // 0x15e PushI
	SetMessage(var_101_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_102_int = 523299; // 0x163 PushI
	var_103_int = 24494; // 0x164 PushI
	var_104_int = 24504; // 0x165 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_105_int = 24484; // 0x169 PushI
	var_106_bool = var_7_cvector == var_105_int; // 0x16a Eq
	if(var_106_bool == 0) goto Label_384; // 0x16b JumpB
	var_107_string = ""; // 0x16c PushV
	var_107_string = "Neutral"; // 0x16d MovS
	func_179(var_8_bool, var_107_string); // 0x16e NEW_2
	var_108_int = 523280; // 0x170 PushI
	SetMessage(var_108_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_109_int = 523281; // 0x175 PushI
	var_110_int = 24486; // 0x176 PushI
	var_111_int = 24485; // 0x177 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x178 TObjFunc
	var_112_int = 523315; // 0x17a PushI
	var_113_int = 24494; // 0x17b PushI
	var_114_int = 24527; // 0x17c PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_115_int = 24486; // 0x180 PushI
	var_116_bool = var_7_cvector == var_115_int; // 0x181 Eq
	if(var_116_bool == 0) goto Label_407; // 0x182 JumpB
	var_117_string = ""; // 0x183 PushV
	var_117_string = "Fear"; // 0x184 MovS
	func_179(var_8_bool, var_117_string); // 0x185 NEW_2
	var_118_int = 523282; // 0x187 PushI
	SetMessage(var_118_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_119_int = 523288; // 0x18c PushI
	var_120_int = 24494; // 0x18d PushI
	var_121_int = 24493; // 0x18e PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x18f TObjFunc
	var_122_int = 523316; // 0x191 PushI
	var_123_int = 24498; // 0x192 PushI
	var_124_int = 24529; // 0x193 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_125_int = 24494; // 0x197 PushI
	var_126_bool = var_7_cvector == var_125_int; // 0x198 Eq
	if(var_126_bool == 0) goto Label_425; // 0x199 JumpB
	var_127_string = ""; // 0x19a PushV
	var_127_string = "Neutral"; // 0x19b MovS
	func_179(var_8_bool, var_127_string); // 0x19c NEW_2
	var_128_int = 523289; // 0x19e PushI
	SetMessage(var_128_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_129_int = 523292; // 0x1a3 PushI
	var_130_int = 24498; // 0x1a4 PushI
	var_131_int = 24497; // 0x1a5 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_132_int = 24498; // 0x1a9 PushI
	var_133_bool = var_7_cvector == var_132_int; // 0x1aa Eq
	if(var_133_bool == 0) goto Label_448; // 0x1ab JumpB
	var_134_string = ""; // 0x1ac PushV
	var_134_string = "Neutral"; // 0x1ad MovS
	func_179(var_8_bool, var_134_string); // 0x1ae NEW_2
	var_135_int = 523293; // 0x1b0 PushI
	SetMessage(var_135_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_136_int = 523294; // 0x1b5 PushI
	var_137_int = 24508; // 0x1b6 PushI
	var_138_int = 24499; // 0x1b7 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x1b8 TObjFunc
	var_139_int = 523295; // 0x1ba PushI
	var_140_int = 24501; // 0x1bb PushI
	var_141_int = 24500; // 0x1bc PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_142_int = 24501; // 0x1c0 PushI
	var_143_bool = var_7_cvector == var_142_int; // 0x1c1 Eq
	if(var_143_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_144_string = ""; // 0x1c3 PushV
	var_144_string = "Neutral"; // 0x1c4 MovS
	func_179(var_8_bool, var_144_string); // 0x1c5 NEW_2
	var_145_int = 523296; // 0x1c7 PushI
	SetMessage(var_145_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_146_int = 523301; // 0x1cc PushI
	var_147_int = 24508; // 0x1cd PushI
	var_148_int = 24507; // 0x1ce PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1cf TObjFunc
	var_149_int = 523297; // 0x1d1 PushI
	var_150_int = -1; // 0x1d2 PushI
	var_151_int = 24502; // 0x1d3 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_152_int = 24508; // 0x1d7 PushI
	var_153_bool = var_7_cvector == var_152_int; // 0x1d8 Eq
	if(var_153_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_154_string = ""; // 0x1da PushV
	var_154_string = "Neutral"; // 0x1db MovS
	func_179(var_8_bool, var_154_string); // 0x1dc NEW_2
	var_155_int = 523302; // 0x1de PushI
	SetMessage(var_155_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_156_int = 523303; // 0x1e3 PushI
	var_157_int = -1; // 0x1e4 PushI
	var_158_int = 24509; // 0x1e5 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1e6 TObjFunc
	var_159_int = 523317; // 0x1e8 PushI
	var_160_int = -1; // 0x1e9 PushI
	var_161_int = 24531; // 0x1ea PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_3_string = 1; // 0x1ee TMovB
	var_162_bool = 0; // 0x1ef PushV
	func_1178(var_162_bool); // 0x1f0 NEW_2
	if(var_162_bool == 0) goto Label_502; // 0x1f2 JumpB
	lshStopAnimation(); // 0x1f3 Func
	goto Label_504; // 0x1f5 Jump
	
Label_504:
	return 0; // 0x1f8 Return
	
Label_502:
	StopAnimation(); // 0x1f6 Func
	
Label_506:
	return 0; // 0x1fa Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x207 PushV
	var_10_string = "cleanup"; // 0x208 PushS
	var_11_bool = var_7_string == var_10_string; // 0x209 Eq
	if(var_11_bool == 0) goto Label_534; // 0x20a JumpB
	var_1_object = 1; // 0x20b TMovB
	IsLoaded(var_9_bool); // 0x20c Func
	var_12_bool = var_9_bool == 0; // 0x20e Not
	if(var_12_bool == 0) goto Label_533; // 0x20f JumpB
	var_13_object = Obj(); // 0x210 PushV
	func_1116(var_13_object); // 0x211 NEW_2
	RemoveActor(var_13_object); // 0x213 Func
	
Label_533:
	goto Label_538; // 0x215 Jump
	
Label_538:
	return 2; // 0x21a Return
	
Label_534:
	var_16_string = "restore"; // 0x216 PushS
	var_17_bool = var_7_string == var_16_string; // 0x217 Eq
	if(var_17_bool == 0) goto Label_538; // 0x218 JumpB
	var_1_object = 0; // 0x219 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x21b PushT
	if(var_7_object == 0) goto Label_548; // 0x21c JumpB
	var_8_object = Obj(); // 0x21d PushV
	func_1116(var_8_object); // 0x21e NEW_2
	RemoveActor(var_8_object); // 0x220 Func
	Hold(); // 0x222 Func
	
Label_548:
	func_663(); // 0x225 NEW_2
	return 0; // 0x227 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_678(); // 0x229 NEW_2
	return 0; // 0x22b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x272 PushI
	var_9_bool = var_7_int == var_8_int; // 0x273 Eq
	if(var_9_bool == 0) goto Label_662; // 0x274 JumpB
	func_621(); // 0x276 NEW_2
	var_11_bool = 0; // 0x278 PushV
	var_11_bool = 0; // 0x279 MovB
	var_12_bool = 0; // 0x27a PushV
	func_835(var_12_bool); // 0x27b NEW_2
	if(var_12_bool == 0) goto Label_643; // 0x27d JumpB
	var_15_bool = 0; // 0x27e PushV
	func_590(var_15_bool); // 0x27f NEW_2
	if(var_15_bool == 0) goto Label_643; // 0x281 JumpB
	var_11_bool = 1; // 0x282 MovB
	
Label_643:
	if(var_11_bool == 0) goto Label_656; // 0x283 JumpB
	var_32_bool = 0; // 0x284 PushV
	func_570(var_32_bool); // 0x285 NEW_2
	if(var_32_bool == 0) goto Label_655; // 0x287 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x288 PushV
	var_53_object = Obj(); // 0x289 PushV
	func_1116(var_53_object); // 0x28a NEW_2
	var_52_object = var_53_object; // 0x28b Mov
	func_983(var_52_object); // 0x28d NEW_2
	
Label_655:
	goto Label_662; // 0x28f Jump
	
Label_662:
	return 0; // 0x296 Return
	
Label_656:
	func_585(var_7_int); // 0x291 NEW_2
	func_612(); // 0x294 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2b4 Push
	if(var_8_bool == 0) goto Label_698; // 0x2b5 JumpB
	func_612(); // 0x2b7 NEW_2
	goto Label_702; // 0x2b9 Jump
	
Label_702:
	return 0; // 0x2be Return
	
Label_698:
	var_14_string = ""; // 0x2ba PushV
	var_14_string = "Neutral"; // 0x2bb MovS
	func_1063(var_14_string); // 0x2bc NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2bf PushV
	IsOverrideActive(var_9_bool); // 0x2c0 Func
	var_10_bool = var_9_bool == 0; // 0x2c2 Not
	if(var_10_bool == 0) goto Label_731; // 0x2c3 JumpB
	EventDisable(0); // 0x2c4 EventDisable
	func_803(); // 0x2c6 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2c8 PushV
	var_12_object = var_7_object; // 0x2c9 Mov
	func_826(var_12_object); // 0x2ca NEW_2
	EventEnable(0); // 0x2cc EventEnable
	var_25_object = Obj(); // 0x2cd PushV
	var_25_object = var_7_object; // 0x2ce Mov
	func_507(var_25_object); // 0x2cf NEW_2
	var_277_string = ""; // 0x2d1 PushV
	var_277_string = "Neutral"; // 0x2d2 MovS
	func_1063(var_277_string); // 0x2d3 NEW_2
	func_621(); // 0x2d6 NEW_2
	func_612(); // 0x2d9 NEW_2
	
Label_731:
	return 2; // 0x2db Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_556(var_6_bool); // 0x204 NEW_2
	return 0; // 0x206 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_840(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1172(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1170(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1174(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1176(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1210(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1116(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_925(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_269_bool = var_36_bool == 0; // 0x3f Not
	if(var_269_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_270_object = Obj(); // 0x46 PushV
	var_270_object = var_27_object; // 0x47 Mov
	func_908(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1153(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x481 PushV
	var_28_int = 0; // 0x482 MovI
	
Label_1155:
	var_30_string = "all"; // 0x483 PushS
	var_31_string = ""; var_32_int = 0; // 0x484 PushV
	var_32_int = var_28_int; // 0x485 Mov
	func_1146(var_31_string, var_32_int); // 0x486 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x488 Func
	var_36_bool = var_29_bool == 0; // 0x48a Not
	if(var_36_bool == 0) goto Label_1165; // 0x48b JumpB
	goto Label_1168; // 0x48c Jump
	
Label_1168:
	var_25_int = var_28_int; // 0x490 Mov
	return 4; // 0x491 Return
	
Label_1165:
	var_37_int = 1; // 0x48d PushI
	var_28_int = var_28_int + var_37_int; // 0x48e Add2
	goto Label_1155; // 0x48f Jump
}


func_908()
{
	var_271_bool = 0; var_272_bool = 0; // 0x38c PushV
	CameraSwitchToNormal(); // 0x38d Func
	var_273_bool = 0; // 0x38f PushV
	func_1178(var_273_bool); // 0x390 NEW_2
	if(var_273_bool == 0) goto Label_916; // 0x392 JumpB
	goto Label_924; // 0x393 Jump
	
Label_924:
	return 2; // 0x39c Return
	
Label_916:
	var_274_string = "head"; // 0x394 PushS
	HasAnimationTrack(var_272_bool, var_274_string); // 0x395 Func
	var_275_bool = var_272_bool; // 0x397 Push
	if(var_275_bool == 0) goto Label_924; // 0x398 JumpB
	var_276_string = "head"; // 0x399 PushS
	UnlookAsync(var_276_string); // 0x39a Func
}


func_1170(var_85_int)
{
	var_85_int = 515540; // 0x492 MovI
	return 0; // 0x493 Return
}


func_1172(var_84_int)
{
	var_84_int = 502865; // 0x494 MovI
	return 0; // 0x495 Return
}


func_1174(var_86_string)
{
	var_86_string = "ui/NPC_Klara.png"; // 0x496 MovS
	return 0; // 0x497 Return
}


func_663()
{
	func_803(); // 0x298 NEW_2
	func_621(); // 0x29b NEW_2
	lshStopSpeech(); // 0x29d Func
	lshStopAnimation(); // 0x29f Func
	StopAsync(); // 0x2a1 Func
	Hold(); // 0x2a3 Func
	return 0; // 0x2a5 Return
}


func_1176(var_87_string)
{
	var_87_string = "ui/NPC_Klara_b.png"; // 0x498 MovS
	return 0; // 0x499 Return
}


func_1178(var_79_bool)
{
	var_79_bool = 1; // 0x49a MovB
	return 0; // 0x49b Return
}


func_1180()
{
	var_217_string = "oob11KlaraD1"; // 0x49d PushS
	var_218_int = 1; // 0x49e PushI
	SetVariable(var_217_string, var_218_int); // 0x49f Func
	return 0; // 0x4a1 Return
}


func_925(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x39d PushV
	var_106_string = "voice_common"; // 0x39e PushS
	GetVariable(var_106_string, var_104_int); // 0x39f Func
	var_107_int = var_104_int; // 0x3a1 Push
	if(var_107_int == 0) goto Label_963; // 0x3a2 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3a3 PushV
	var_109_object = var_98_object; // 0x3a4 Mov
	func_983(var_109_object); // 0x3a5 NEW_2
	var_138_bool = var_108_bool == 0; // 0x3a7 Not
	if(var_138_bool == 0) goto Label_945; // 0x3a8 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3a9 PushV
	var_140_object = var_98_object; // 0x3aa Mov
	func_1020(var_140_object); // 0x3ab NEW_2
	var_174_bool = var_139_bool == 0; // 0x3ad Not
	if(var_174_bool == 0) goto Label_945; // 0x3ae JumpB
	var_97_bool = 0; // 0x3af MovB
	return 4; // 0x3b0 Return
	
Label_945:
	var_175_int = 2; // 0x3b1 PushI
	irand(var_105_int, var_175_int); // 0x3b2 Func
	var_176_int = var_105_int; // 0x3b4 Push
	if(var_176_int == 0) goto Label_958; // 0x3b5 JumpB
	var_177_string = "voice_common"; // 0x3b6 PushS
	var_178_int = 1; // 0x3b7 PushI
	var_179_int = var_104_int + var_178_int; // 0x3b8 Add
	var_180_int = 3; // 0x3b9 PushI
	var_181_int = var_179_int / var_180_int; // 0x3ba Mod
	SetVariable(var_177_string, var_181_int); // 0x3bb Func
	goto Label_962; // 0x3bd Jump
	
Label_962:
	goto Label_981; // 0x3c2 Jump
	
Label_981:
	var_97_bool = 1; // 0x3d5 MovB
	return 4; // 0x3d6 Return
	
Label_958:
	var_182_string = "voice_common"; // 0x3be PushS
	var_183_int = 0; // 0x3bf PushI
	SetVariable(var_182_string, var_183_int); // 0x3c0 Func
	
Label_963:
	var_184_bool = 0; var_185_object = Obj(); // 0x3c3 PushV
	var_185_object = var_98_object; // 0x3c4 Mov
	func_1020(var_185_object); // 0x3c5 NEW_2
	var_186_bool = var_184_bool == 0; // 0x3c7 Not
	if(var_186_bool == 0) goto Label_977; // 0x3c8 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3c9 PushV
	var_188_object = var_98_object; // 0x3ca Mov
	func_983(var_188_object); // 0x3cb NEW_2
	var_189_bool = var_187_bool == 0; // 0x3cd Not
	if(var_189_bool == 0) goto Label_977; // 0x3ce JumpB
	var_97_bool = 0; // 0x3cf MovB
	return 4; // 0x3d0 Return
	
Label_977:
	var_190_string = "voice_common"; // 0x3d1 PushS
	var_191_int = 1; // 0x3d2 PushI
	SetVariable(var_190_string, var_191_int); // 0x3d3 Func
}


func_801(var_45_bool)
{
	var_45_bool = 1; // 0x321 MovB
	return 0; // 0x322 Return
}


func_1186(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x4a3 PushV
	var_203_string = "b11q01VictimChoosed"; // 0x4a4 MovS
	func_1132(var_202_int, var_203_string); // 0x4a5 NEW_2
	var_206_int = 0; // 0x4a7 PushI
	var_207_bool = var_202_int != var_206_int; // 0x4a8 Neq
	if(var_207_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_200_bool = 1; // 0x4aa MovB
	return 0; // 0x4ab Return
	
Label_1196:
	var_200_bool = 0; // 0x4ac MovB
	return 0; // 0x4ad Return
}


func_803()
{
	StopAnimation(); // 0x323 Func
	StopGroup0(); // 0x325 Func
	return 0; // 0x327 Return
}


func_678()
{
	StopGroup0(); // 0x2a6 Func
	func_621(); // 0x2a9 NEW_2
	var_8_string = ""; // 0x2ab PushV
	var_8_string = "Neutral"; // 0x2ac MovS
	func_1063(var_8_string); // 0x2ad NEW_2
	func_612(); // 0x2b0 NEW_2
	return 0; // 0x2b2 Return
}


func_1063(var_248_string)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0x427 PushV
	lshHasAnimation(var_252_bool, var_248_string); // 0x428 Func
	var_255_bool = var_252_bool; // 0x42a Push
	if(var_255_bool == 0) goto Label_1074; // 0x42b JumpB
	lshGetAnimTimes(var_248_string, var_253_float, var_254_float); // 0x42c Func
	var_256_bool = 0; // 0x42e PushB
	lshPlayAnimation(var_253_float, var_254_float, var_256_bool); // 0x42f Func
	goto Label_1078; // 0x431 Jump
	
Label_1078:
	return 6; // 0x436 Return
	
Label_1074:
	var_257_string = "Can't find lsh animation : "; // 0x432 PushS
	var_258_int = var_257_string + var_248_string; // 0x433 Add
	Trace(var_258_int); // 0x434 Func
}


func_808(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x328 PushV
	GetPosition(var_27_cvector); // 0x329 Func
	GetPosition(var_28_cvector); // 0x32b ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x32d Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x32e Or2
	return 6; // 0x32f Return
}


func_556(var_0_object)
{
	var_7_bool = 0; // 0x22c PushV
	func_835(var_7_bool); // 0x22d NEW_2
	var_10_bool = var_7_bool == 0; // 0x22f Not
	if(var_10_bool == 0) goto Label_563; // 0x230 JumpB
	Hold(); // 0x231 Func
	
Label_563:
	GetDirection(var_0_object); // 0x233 Func
	
Label_565:
	func_732(); // 0x236 NEW_2
	goto Label_565; // 0x238 Jump
}


func_1198(var_209_bool)
{
	var_211_int = 0; var_212_string = ""; // 0x4af PushV
	var_212_string = "oob11KlaraD1"; // 0x4b0 MovS
	func_1132(var_211_int, var_212_string); // 0x4b1 NEW_2
	var_213_int = 0; // 0x4b3 PushI
	var_214_bool = var_211_int == var_213_int; // 0x4b4 Eq
	if(var_214_bool == 0) goto Label_1208; // 0x4b5 JumpB
	var_209_bool = 1; // 0x4b6 MovB
	return 0; // 0x4b7 Return
	
Label_1208:
	var_209_bool = 0; // 0x4b8 MovB
	return 0; // 0x4b9 Return
}


func_816(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x330 PushV
	GetPosition(var_20_cvector); // 0x331 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x333 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x334 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x335 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x336 Func
	var_15_bool = var_22_bool; // 0x338 Mov
	return 6; // 0x339 Return
}


func_179(var_2_object, var_219_string)
{
	var_220_bool = 0; // 0xb4 PushV
	func_1178(var_220_bool); // 0xb5 NEW_2
	var_221_bool = var_220_bool == 0; // 0xb7 Not
	if(var_221_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_222_bool = var_219_string == var_2_object; // 0xba Eq
	if(var_222_bool == 0) goto Label_189; // 0xbb JumpB
	return 0; // 0xbc Return
	
Label_189:
	var_223_string = ""; var_224_bool = 0; // 0xbd PushV
	var_223_string = var_219_string; // 0xbe Mov
	var_225_string = ""; // 0xbf PushS
	var_226_bool = var_219_string == var_225_string; // 0xc0 Eq
	if(var_226_bool == 0) goto Label_196; // 0xc1 JumpB
	var_224_bool = 0; // 0xc2 MovB
	goto Label_197; // 0xc3 Jump
	
Label_197:
	func_1079(var_223_string, var_224_bool); // 0xc5 NEW_2
	var_2_object = var_219_string; // 0xc7 TMov
	return 0; // 0xc8 Return
	
Label_196:
	var_224_bool = 1; // 0xc4 MovB
}


func_1079(var_223_string, var_224_bool)
{
	var_227_bool = 0; var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_float = 0; var_232_float = 0; // 0x437 PushV
	lshHasAnimation(var_230_bool, var_223_string); // 0x438 Func
	var_233_bool = var_230_bool; // 0x43a Push
	if(var_233_bool == 0) goto Label_1089; // 0x43b JumpB
	lshGetAnimTimes(var_223_string, var_231_float, var_232_float); // 0x43c Func
	lshPlayAnimation(var_231_float, var_232_float, var_224_bool); // 0x43e Func
	goto Label_1093; // 0x440 Jump
	
Label_1093:
	return 6; // 0x445 Return
	
Label_1089:
	var_234_string = "Can't find lsh animation : "; // 0x441 PushS
	var_235_int = var_234_string + var_223_string; // 0x442 Add
	Trace(var_235_int); // 0x443 Func
}


func_1210(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4ba PushV
	var_91_string = "branch"; // 0x4bb PushS
	GetVariable(var_91_string, var_90_int); // 0x4bc Func
	var_92_int = 0; // 0x4be PushI
	var_93_bool = var_90_int == var_92_int; // 0x4bf Eq
	if(var_93_bool == 0) goto Label_1220; // 0x4c0 JumpB
	var_88_int = 1; // 0x4c1 MovI
	return 2; // 0x4c2 Return
	
Label_1220:
	var_94_int = 1; // 0x4c4 PushI
	var_95_bool = var_90_int == var_94_int; // 0x4c5 Eq
	if(var_95_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_88_int = 2; // 0x4c7 MovI
	return 2; // 0x4c8 Return
	
Label_1225:
	var_88_int = 3; // 0x4c9 MovI
	return 2; // 0x4ca Return
}


func_826(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x33a PushV
	GetPosition(var_14_cvector); // 0x33b ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x33d PushV
	var_16_cvector = var_14_cvector; // 0x33e Mov
	func_816(var_15_bool, var_16_cvector); // 0x33f NEW_2
	var_11_bool = var_15_bool; // 0x340 Mov
	return 2; // 0x342 Return
}


func_570(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x23a PushV
	var_35_string = "player"; // 0x23b PushS
	FindActor(var_34_object, var_35_string); // 0x23c Func
	var_36_bool = var_34_object == 0; // 0x23e Not
	if(var_36_bool == 0) goto Label_578; // 0x23f JumpB
	var_32_bool = 0; // 0x240 MovB
	return 2; // 0x241 Return
	
Label_578:
	var_37_bool = 0; var_38_object = Obj(); // 0x242 PushV
	var_38_object = var_34_object; // 0x243 Mov
	func_826(var_38_object); // 0x244 NEW_2
	var_32_bool = var_37_bool; // 0x245 Mov
	return 2; // 0x247 Return
}


func_835(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x343 PushV
	IsLoaded(var_9_bool); // 0x344 Func
	var_7_bool = var_9_bool; // 0x346 Mov
	return 2; // 0x347 Return
}


func_1094(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x446 PushV
	var_135_bool = 0; // 0x447 PushV
	func_1178(var_135_bool); // 0x448 NEW_2
	if(var_135_bool == 0) goto Label_1107; // 0x44a JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x44b Func
	var_136_bool = var_134_bool; // 0x44d Push
	if(var_136_bool == 0) goto Label_1107; // 0x44e JumpB
	lshPlaySpeech(var_132_string); // 0x44f Func
	var_131_bool = 1; // 0x451 MovB
	return 2; // 0x452 Return
	
Label_1107:
	var_131_bool = 0; // 0x453 MovB
	return 2; // 0x454 Return
}


func_840(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x348 PushV
	GetPosition(var_50_cvector); // 0x349 ObjFunc
	GetEyesHeight(var_49_float); // 0x34b ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x34d PushE
	var_58_float = var_58_float + var_49_float; // 0x34e Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x34f PopE
	GetPosition(var_51_cvector); // 0x350 Func
	GetEyesHeight(var_49_float); // 0x352 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x354 PushE
	var_59_float = var_59_float + var_49_float; // 0x355 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x356 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x357 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x358 PushE
	var_60_float = 0; // 0x359 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x35a PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x35b Or
	var_62_float = sqrt(var_61_int); // 0x35c Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x35d Div2
	var_53_cvector = -var_52_cvector; // 0x35e Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x35f Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x360 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x361 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x362 Xor2
	func_1122(var_64_cvector, var_65_cvector); // 0x363 NEW_2
	var_72_int = 25; // 0x365 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x366 Mult
	var_74_int = var_63_float + var_73_float; // 0x367 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x368 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x369 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x36a Add2
	IsOverrideActive(var_56_bool); // 0x36b Func
	var_76_bool = var_56_bool; // 0x36d Push
	if(var_76_bool == 0) goto Label_881; // 0x36e JumpB
	var_37_bool = 0; // 0x36f MovB
	return 18; // 0x370 Return
	
Label_881:
	StopWorld(); // 0x371 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x373 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x375 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x376 PushE
	Rotate(var_77_float, var_78_float); // 0x377 Func
	var_79_bool = 0; // 0x379 PushV
	func_1178(var_79_bool); // 0x37a NEW_2
	if(var_79_bool == 0) goto Label_894; // 0x37c JumpB
	goto Label_902; // 0x37d Jump
	
Label_902:
	CameraWaitForPlayFinish(); // 0x386 Func
	ResumeWorld(); // 0x388 Func
	var_37_bool = 1; // 0x38a MovB
	return 18; // 0x38b Return
	
Label_894:
	var_80_string = "head"; // 0x37e PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x37f Func
	var_81_bool = var_57_bool; // 0x381 Push
	if(var_81_bool == 0) goto Label_902; // 0x382 JumpB
	var_82_string = "head"; // 0x383 PushS
	LookAsyncCamera(var_82_string); // 0x384 Func
}


func_585(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x249 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x24a PushE
	RotateAsync(var_84_float, var_85_float); // 0x24b Func
	return 0; // 0x24d Return
}


func_590(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x24e PushV
	var_20_string = "player"; // 0x24f PushS
	FindActor(var_18_object, var_20_string); // 0x250 Func
	var_21_bool = var_18_object == 0; // 0x252 Not
	if(var_21_bool == 0) goto Label_598; // 0x253 JumpB
	var_15_bool = 0; // 0x254 MovB
	return 4; // 0x255 Return
	
Label_598:
	var_22_float = 0; var_23_object = Obj(); // 0x256 PushV
	var_23_object = var_18_object; // 0x257 Mov
	func_808(var_23_object); // 0x258 NEW_2
	var_30_float = 90000.0; // 0x25a PushF
	var_31_bool = var_22_float > var_30_float; // 0x25b GT
	if(var_31_bool == 0) goto Label_607; // 0x25c JumpB
	var_15_bool = 0; // 0x25d MovB
	return 4; // 0x25e Return
	
Label_607:
	CanSee(var_19_bool, var_18_object); // 0x25f Func
	var_15_bool = var_19_bool; // 0x261 Mov
	return 4; // 0x262 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_149; // 0x56 JumpB
	var_199_bool = 0; // 0x57 PushV
	var_199_bool = 0; // 0x58 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x59 PushV
	var_201_object = var_1_object; // 0x5a MovT
	func_1186(var_201_object); // 0x5b NEW_2
	var_208_bool = var_200_bool == 0; // 0x5d Not
	if(var_208_bool == 0) goto Label_101; // 0x5e JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x5f PushV
	var_210_object = var_1_object; // 0x60 MovT
	func_1198(var_210_object); // 0x61 NEW_2
	if(var_209_bool == 0) goto Label_101; // 0x63 JumpB
	var_199_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_199_bool == 0) goto Label_132; // 0x65 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x66 PushV
	var_215_object = var_1_object; // 0x67 MovT
	var_216_object = var_0_object; // 0x68 MovT
	func_1180(); // 0x69 NEW_2
	var_219_string = ""; // 0x6b PushV
	var_219_string = "Neutral"; // 0x6c MovS
	func_179(var_193_object, var_219_string); // 0x6d NEW_2
	var_236_int = 522009; // 0x6f PushI
	SetMessage(var_236_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_237_int = 523279; // 0x74 PushI
	var_238_int = 24484; // 0x75 PushI
	var_239_int = 24483; // 0x76 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x77 TObjFunc
	var_240_int = 522010; // 0x79 PushI
	var_241_int = 24503; // 0x7a PushI
	var_242_int = 23180; // 0x7b PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x7c TObjFunc
	var_243_int = 523286; // 0x7e PushI
	var_244_int = 24492; // 0x7f PushI
	var_245_int = 24491; // 0x80 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x81 TObjFunc
	goto Label_149; // 0x83 Jump
	
Label_149:
	var_246_bool = 0; // 0x95 PushV
	func_1178(var_246_bool); // 0x96 NEW_2
	if(var_246_bool == 0) goto Label_164; // 0x98 JumpB
	
Label_153:
	lshWaitForAnimEnd(); // 0x99 Func
	var_247_string = var_3_string; // 0x9b PushT
	if(var_247_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_163:
	goto Label_178; // 0xa3 Jump
	
Label_178:
	return 0; // 0xb2 Return
	
Label_158:
	var_248_string = ""; // 0x9e PushV
	var_248_string = var_2_object; // 0x9f MovT
	func_1063(var_248_string); // 0xa0 NEW_2
	goto Label_153; // 0xa2 Jump
	
Label_164:
	var_259_string = "all"; // 0xa4 PushS
	var_260_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_259_string, var_260_string); // 0xa6 Func
	
Label_168:
	WaitForAnimEnd(); // 0xa8 Func
	var_261_string = var_3_string; // 0xaa PushT
	if(var_261_string == 0) goto Label_173; // 0xab JumpB
	goto Label_178; // 0xac Jump
	
Label_173:
	var_262_string = "all"; // 0xad PushS
	var_263_string = "idle"; // 0xae PushS
	PlayAnimation(var_262_string, var_263_string); // 0xaf Func
	goto Label_168; // 0xb1 Jump
	
Label_132:
	var_264_string = ""; // 0x84 PushV
	var_264_string = "Fear"; // 0x85 MovS
	func_179(var_193_object, var_264_string); // 0x86 NEW_2
	var_265_int = 522096; // 0x88 PushI
	SetMessage(var_265_int); // 0x89 TObjFunc
	ClearReplies(); // 0x8b TObjFunc
	var_266_int = 522097; // 0x8d PushI
	var_267_int = -1; // 0x8e PushI
	var_268_int = 23266; // 0x8f PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x90 TObjFunc
	goto Label_149; // 0x92 Jump
}


func_1109()
{
	var_10_bool = 0; // 0x455 PushV
	func_1178(var_10_bool); // 0x456 NEW_2
	if(var_10_bool == 0) goto Label_1115; // 0x458 JumpB
	lshStopSpeech(); // 0x459 Func
	
Label_1115:
	return 0; // 0x45b Return
}


func_983(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3d7 PushV
	var_115_string = "c"; // 0x3d8 MovS
	var_116_int = 0; // 0x3d9 MovI
	
Label_986:
	var_120_int = 1; // 0x3da PushI
	if(var_120_int == 0) goto Label_999; // 0x3db JumpB
	var_121_int = 1; // 0x3dc PushI
	var_122_int = var_116_int + var_121_int; // 0x3dd Add
	var_123_int = var_115_string + var_122_int; // 0x3de Add
	HasProperty(var_123_int, var_117_bool); // 0x3df ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3e1 Not
	if(var_124_bool == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_999; // 0x3e3 Jump
	
Label_999:
	var_125_bool = var_116_int == 0; // 0x3e7 Not
	if(var_125_bool == 0) goto Label_1003; // 0x3e8 JumpB
	var_108_bool = 0; // 0x3e9 MovB
	return 10; // 0x3ea Return
	
Label_1003:
	var_118_int = 0; // 0x3eb MovI
	var_126_int = 1; // 0x3ec PushI
	var_127_bool = var_116_int > var_126_int; // 0x3ed GT
	if(var_127_bool == 0) goto Label_1009; // 0x3ee JumpB
	irand(var_118_int, var_116_int); // 0x3ef Func
	
Label_1009:
	var_128_int = 1; // 0x3f1 PushI
	var_129_int = var_118_int + var_128_int; // 0x3f2 Add
	var_130_int = var_115_string + var_129_int; // 0x3f3 Add
	GetProperty(var_130_int, var_119_string); // 0x3f4 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x3f6 PushV
	var_132_string = var_119_string; // 0x3f7 Mov
	func_1094(var_131_bool, var_132_string); // 0x3f8 NEW_2
	var_108_bool = var_131_bool; // 0x3f9 Mov
	return 10; // 0x3fb Return
	
Label_996:
	var_137_int = 1; // 0x3e4 PushI
	var_116_int = var_116_int + var_137_int; // 0x3e5 Add2
	goto Label_986; // 0x3e6 Jump
}


func_1116(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x45c PushV
	self(var_101_object); // 0x45d Func
	var_99_object = var_101_object; // 0x45f Mov
	return 2; // 0x460 Return
}


func_732()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2dc PushV
	WaitForAnimEnd(); // 0x2dd Func
	var_23_bool = 0; // 0x2df PushV
	func_835(var_23_bool); // 0x2e0 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2e2 Not
	if(var_24_bool == 0) goto Label_741; // 0x2e3 JumpB
	return 12; // 0x2e4 Return
	
Label_741:
	var_25_int = 0; // 0x2e5 PushV
	func_1153(var_25_int); // 0x2e6 NEW_2
	var_17_int = var_25_int; // 0x2e7 Mov
	var_18_int = 0; // 0x2e9 MovI
	
Label_746:
	var_38_bool = 0; // 0x2ea PushV
	var_38_bool = 0; // 0x2eb MovB
	var_39_int = 5; // 0x2ec PushI
	var_40_bool = var_18_int < var_39_int; // 0x2ed LT
	if(var_40_bool == 0) goto Label_756; // 0x2ee JumpB
	var_41_bool = 0; // 0x2ef PushV
	func_835(var_41_bool); // 0x2f0 NEW_2
	if(var_41_bool == 0) goto Label_756; // 0x2f2 JumpB
	var_38_bool = 1; // 0x2f3 MovB
	
Label_756:
	if(var_38_bool == 0) goto Label_798; // 0x2f4 JumpB
	var_42_bool = var_17_int == 0; // 0x2f5 Not
	if(var_42_bool == 0) goto Label_766; // 0x2f6 JumpB
	var_43_int = 3; // 0x2f7 PushI
	Sleep(var_43_int, var_19_bool); // 0x2f8 Func
	var_44_bool = var_19_bool == 0; // 0x2fa Not
	if(var_44_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_798; // 0x2fc Jump
	
Label_798:
	ResetAAS(); // 0x31e Func
	return 12; // 0x320 Return
	
Label_765:
	goto Label_787; // 0x2fd Jump
	
Label_787:
	var_45_bool = 0; // 0x313 PushV
	func_801(var_45_bool); // 0x314 NEW_2
	var_46_bool = var_45_bool == 0; // 0x316 Not
	if(var_46_bool == 0) goto Label_793; // 0x317 JumpB
	goto Label_798; // 0x318 Jump
	
Label_793:
	ResetAAS(); // 0x319 Func
	var_47_int = 1; // 0x31b PushI
	var_18_int = var_18_int + var_47_int; // 0x31c Add2
	goto Label_746; // 0x31d Jump
	
Label_766:
	irand(var_20_int, var_17_int); // 0x2fe Func
	var_48_int = 5; // 0x300 PushI
	irand(var_21_int, var_48_int); // 0x301 Func
	var_49_int = 0; // 0x303 PushI
	var_50_bool = var_21_int != var_49_int; // 0x304 Neq
	if(var_50_bool == 0) goto Label_775; // 0x305 JumpB
	var_20_int = 0; // 0x306 MovI
	
Label_775:
	var_51_string = "all"; // 0x307 PushS
	var_52_string = ""; var_53_int = 0; // 0x308 PushV
	var_53_int = var_20_int; // 0x309 Mov
	func_1146(var_52_string, var_53_int); // 0x30a NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x30c Func
	WaitForAnimEnd(var_22_bool); // 0x30e Func
	var_54_bool = var_22_bool == 0; // 0x310 Not
	if(var_54_bool == 0) goto Label_787; // 0x311 JumpB
	goto Label_798; // 0x312 Jump
}


func_1122(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x462 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x463 Or
	var_68_float = sqrt(var_69_int); // 0x464 Sqrt2
	var_70_float = 0.0; // 0x465 PushF
	var_71_bool = var_68_float < var_70_float; // 0x466 LT
	if(var_71_bool == 0) goto Label_1130; // 0x467 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x468 MovV
	return 2; // 0x469 Return
	
Label_1130:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x46a Div2
	return 2; // 0x46b Return
}


func_612()
{
	var_279_float = 0; var_280_float = 0; // 0x264 PushV
	var_281_int = 8; // 0x265 PushI
	var_282_int = 16; // 0x266 PushI
	rand(var_280_float, var_281_int, var_282_int); // 0x267 Func
	var_283_int = 10; // 0x269 PushI
	SetTimer(var_283_int, var_280_float); // 0x26a Func
	return 2; // 0x26c Return
}


func_1132(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x46c PushV
	GetVariable(var_203_string, var_205_int); // 0x46d Func
	var_202_int = var_205_int; // 0x46f Mov
	return 2; // 0x470 Return
}


func_621()
{
	var_278_int = 10; // 0x26d PushI
	KillTimer(var_278_int); // 0x26e Func
	return 0; // 0x270 Return
}


func_1137(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x471 PushV
	GetGameTime(var_154_float); // 0x472 Func
	var_155_int = 1; // 0x474 PushI
	var_156_int = 0; // 0x475 PushV
	var_157_int = 24; // 0x476 PushI
	var_156_int = var_154_float / var_154_float; // 0x477 Div2
	var_152_int = var_155_int + var_156_int; // 0x478 Add2
	return 2; // 0x479 Return
}


func_1146(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x47a PushV
	var_34_string = "idle"; // 0x47b MovS
	var_35_int = var_32_int; // 0x47c Push
	if(var_35_int == 0) goto Label_1151; // 0x47d JumpB
	var_34_string = var_34_string + var_32_int; // 0x47e Add2
	
Label_1151:
	var_31_string = var_34_string; // 0x47f Mov
	return 2; // 0x480 Return
}


func_507(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1fc PushV
	var_27_object = var_25_object; // 0x1fd Mov
	TaskCall(0); // 0x1fe TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1ff NEW_2
	TaskReturn(); // 0x200 TaskReturn
	return 0; // 0x202 Return
}


func_1020(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3fc PushV
	var_151_string = "d"; // 0x3fd PushS
	var_152_int = 0; // 0x3fe PushV
	func_1137(var_152_int); // 0x3ff NEW_2
	var_158_int = var_151_string + var_152_int; // 0x401 Add
	var_159_string = "m"; // 0x402 PushS
	var_146_string = var_158_int + var_159_string; // 0x403 Add2
	var_147_int = 0; // 0x404 MovI
	
Label_1029:
	var_160_int = 1; // 0x405 PushI
	if(var_160_int == 0) goto Label_1042; // 0x406 JumpB
	var_161_int = 1; // 0x407 PushI
	var_162_int = var_147_int + var_161_int; // 0x408 Add
	var_163_int = var_146_string + var_162_int; // 0x409 Add
	HasProperty(var_163_int, var_148_bool); // 0x40a ObjFunc
	var_164_bool = var_148_bool == 0; // 0x40c Not
	if(var_164_bool == 0) goto Label_1039; // 0x40d JumpB
	goto Label_1042; // 0x40e Jump
	
Label_1042:
	var_165_bool = var_147_int == 0; // 0x412 Not
	if(var_165_bool == 0) goto Label_1046; // 0x413 JumpB
	var_139_bool = 0; // 0x414 MovB
	return 10; // 0x415 Return
	
Label_1046:
	var_149_int = 0; // 0x416 MovI
	var_166_int = 1; // 0x417 PushI
	var_167_bool = var_147_int > var_166_int; // 0x418 GT
	if(var_167_bool == 0) goto Label_1052; // 0x419 JumpB
	irand(var_149_int, var_147_int); // 0x41a Func
	
Label_1052:
	var_168_int = 1; // 0x41c PushI
	var_169_int = var_149_int + var_168_int; // 0x41d Add
	var_170_int = var_146_string + var_169_int; // 0x41e Add
	GetProperty(var_170_int, var_150_string); // 0x41f ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x421 PushV
	var_172_string = var_150_string; // 0x422 Mov
	func_1094(var_171_bool, var_172_string); // 0x423 NEW_2
	var_139_bool = var_171_bool; // 0x424 Mov
	return 10; // 0x426 Return
	
Label_1039:
	var_173_int = 1; // 0x40f PushI
	var_147_int = var_147_int + var_173_int; // 0x410 Add2
	goto Label_1029; // 0x411 Jump
}


