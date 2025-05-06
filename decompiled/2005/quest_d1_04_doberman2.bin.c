task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0xb4 PushI
	if(var_20_int == 0) goto Label_420; // 0xb5 JumpB
	func_2863(); // 0xb7 NEW_2
	var_22_int = 34223; // 0xb9 PushI
	var_23_bool = var_18_object == var_22_int; // 0xba Eq
	if(var_23_bool == 0) goto Label_233; // 0xbb JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xbc PushV
	var_25_object = var_1_object; // 0xbd MovT
	func_3062(var_25_object); // 0xbe NEW_2
	if(var_24_bool == 0) goto Label_213; // 0xc0 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xc1 PushV
	var_32_object = var_1_object; // 0xc2 MovT
	var_33_object = var_0_object; // 0xc3 MovT
	func_3056(); // 0xc4 NEW_2
	var_36_string = ""; // 0xc6 PushV
	var_36_string = "Neutral"; // 0xc7 MovS
	func_157(var_19_bool, var_36_string); // 0xc8 NEW_2
	var_53_int = 532749; // 0xca PushI
	SetMessage(var_53_int); // 0xcb TObjFunc
	ClearReplies(); // 0xcd TObjFunc
	var_54_int = 533297; // 0xcf PushI
	var_55_int = 34809; // 0xd0 PushI
	var_56_int = 34808; // 0xd1 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_57_string = ""; // 0xd5 PushV
	var_57_string = "Neutral"; // 0xd6 MovS
	func_157(var_19_bool, var_57_string); // 0xd7 NEW_2
	var_58_int = 532753; // 0xd9 PushI
	SetMessage(var_58_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_59_int = 532754; // 0xde PushI
	var_60_int = -1; // 0xdf PushI
	var_61_int = 34228; // 0xe0 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xe1 TObjFunc
	var_62_int = 532977; // 0xe3 PushI
	var_63_int = -1; // 0xe4 PushI
	var_64_int = 34475; // 0xe5 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_65_int = 34811; // 0xe9 PushI
	var_66_bool = var_18_object == var_65_int; // 0xea Eq
	if(var_66_bool == 0) goto Label_236; // 0xeb JumpB
	
Label_236:
	var_67_int = 34809; // 0xec PushI
	var_68_bool = var_18_object == var_67_int; // 0xed Eq
	if(var_68_bool == 0) goto Label_259; // 0xee JumpB
	var_69_string = ""; // 0xef PushV
	var_69_string = "Neutral"; // 0xf0 MovS
	func_157(var_19_bool, var_69_string); // 0xf1 NEW_2
	var_70_int = 533298; // 0xf3 PushI
	SetMessage(var_70_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_71_int = 532975; // 0xf8 PushI
	var_72_int = 34474; // 0xf9 PushI
	var_73_int = 34473; // 0xfa PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xfb TObjFunc
	var_74_int = 532978; // 0xfd PushI
	var_75_int = 34477; // 0xfe PushI
	var_76_int = 34476; // 0xff PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_77_int = 34477; // 0x103 PushI
	var_78_bool = var_18_object == var_77_int; // 0x104 Eq
	if(var_78_bool == 0) goto Label_282; // 0x105 JumpB
	var_79_string = ""; // 0x106 PushV
	var_79_string = "Neutral"; // 0x107 MovS
	func_157(var_19_bool, var_79_string); // 0x108 NEW_2
	var_80_int = 532979; // 0x10a PushI
	SetMessage(var_80_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_81_int = 532980; // 0x10f PushI
	var_82_int = 34480; // 0x110 PushI
	var_83_int = 34478; // 0x111 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x112 TObjFunc
	var_84_int = 532981; // 0x114 PushI
	var_85_int = -1; // 0x115 PushI
	var_86_int = 34479; // 0x116 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_87_int = 34480; // 0x11a PushI
	var_88_bool = var_18_object == var_87_int; // 0x11b Eq
	if(var_88_bool == 0) goto Label_305; // 0x11c JumpB
	var_89_string = ""; // 0x11d PushV
	var_89_string = "Neutral"; // 0x11e MovS
	func_157(var_19_bool, var_89_string); // 0x11f NEW_2
	var_90_int = 532982; // 0x121 PushI
	SetMessage(var_90_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_91_int = 532983; // 0x126 PushI
	var_92_int = -1; // 0x127 PushI
	var_93_int = 34481; // 0x128 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x129 TObjFunc
	var_94_int = 532984; // 0x12b PushI
	var_95_int = -1; // 0x12c PushI
	var_96_int = 34482; // 0x12d PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_97_int = 34474; // 0x131 PushI
	var_98_bool = var_18_object == var_97_int; // 0x132 Eq
	if(var_98_bool == 0) goto Label_323; // 0x133 JumpB
	var_99_string = ""; // 0x134 PushV
	var_99_string = "Neutral"; // 0x135 MovS
	func_157(var_19_bool, var_99_string); // 0x136 NEW_2
	var_100_int = 532976; // 0x138 PushI
	SetMessage(var_100_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_101_int = 532750; // 0x13d PushI
	var_102_int = 34225; // 0x13e PushI
	var_103_int = 34224; // 0x13f PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_104_int = 34484; // 0x143 PushI
	var_105_bool = var_18_object == var_104_int; // 0x144 Eq
	if(var_105_bool == 0) goto Label_326; // 0x145 JumpB
	
Label_326:
	var_106_int = 34225; // 0x146 PushI
	var_107_bool = var_18_object == var_106_int; // 0x147 Eq
	if(var_107_bool == 0) goto Label_344; // 0x148 JumpB
	var_108_string = ""; // 0x149 PushV
	var_108_string = "Neutral"; // 0x14a MovS
	func_157(var_19_bool, var_108_string); // 0x14b NEW_2
	var_109_int = 532751; // 0x14d PushI
	SetMessage(var_109_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_110_int = 532752; // 0x152 PushI
	var_111_int = 34471; // 0x153 PushI
	var_112_int = 34226; // 0x154 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_113_int = 34471; // 0x158 PushI
	var_114_bool = var_18_object == var_113_int; // 0x159 Eq
	if(var_114_bool == 0) goto Label_367; // 0x15a JumpB
	var_115_string = ""; // 0x15b PushV
	var_115_string = "Neutral"; // 0x15c MovS
	func_157(var_19_bool, var_115_string); // 0x15d NEW_2
	var_116_int = 532973; // 0x15f PushI
	SetMessage(var_116_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_117_int = 532974; // 0x164 PushI
	var_118_int = 34488; // 0x165 PushI
	var_119_int = 34472; // 0x166 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x167 TObjFunc
	var_120_int = 532991; // 0x169 PushI
	var_121_int = 34491; // 0x16a PushI
	var_122_int = 34490; // 0x16b PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_123_int = 34491; // 0x16f PushI
	var_124_bool = var_18_object == var_123_int; // 0x170 Eq
	if(var_124_bool == 0) goto Label_385; // 0x171 JumpB
	var_125_string = ""; // 0x172 PushV
	var_125_string = "Neutral"; // 0x173 MovS
	func_157(var_19_bool, var_125_string); // 0x174 NEW_2
	var_126_int = 532992; // 0x176 PushI
	SetMessage(var_126_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_127_int = 532993; // 0x17b PushI
	var_128_int = 34488; // 0x17c PushI
	var_129_int = 34492; // 0x17d PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_130_int = 34488; // 0x181 PushI
	var_131_bool = var_18_object == var_130_int; // 0x182 Eq
	if(var_131_bool == 0) goto Label_408; // 0x183 JumpB
	var_132_string = ""; // 0x184 PushV
	var_132_string = "Neutral"; // 0x185 MovS
	func_157(var_19_bool, var_132_string); // 0x186 NEW_2
	var_133_int = 532989; // 0x188 PushI
	SetMessage(var_133_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_134_int = 532990; // 0x18d PushI
	var_135_int = -1; // 0x18e PushI
	var_136_int = 34489; // 0x18f PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x190 TObjFunc
	var_137_int = 532994; // 0x192 PushI
	var_138_int = -1; // 0x193 PushI
	var_139_int = 34494; // 0x194 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_3_string = 1; // 0x198 TMovB
	var_140_bool = 0; // 0x199 PushV
	func_3624(var_140_bool); // 0x19a NEW_2
	if(var_140_bool == 0) goto Label_416; // 0x19c JumpB
	lshStopAnimation(); // 0x19d Func
	goto Label_418; // 0x19f Jump
	
Label_418:
	return 0; // 0x1a2 Return
	
Label_416:
	StopAnimation(); // 0x1a0 Func
	
Label_420:
	return 0; // 0x1a4 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x1b4 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x1b5 PushV
	var_22_object = var_18_bool; // 0x1b6 Mov
	func_3560(var_22_object); // 0x1b7 NEW_2
	var_20_int = var_21_int; // 0x1b8 Mov
	var_23_int = 0; // 0x1ba PushI
	var_24_bool = var_20_int > var_23_int; // 0x1bb GT
	if(var_24_bool == 0) goto Label_449; // 0x1bc JumpB
	var_25_object = Obj(); // 0x1bd PushV
	var_25_object = var_18_bool; // 0x1be Mov
	func_3563(var_25_object); // 0x1bf NEW_2
	
Label_449:
	return 2; // 0x1c1 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3569(); // 0x1c3 NEW_2
	return 0; // 0x1c5 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x23c Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x23e Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x240 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x259 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x25a PushV
	var_22_object = var_18_bool; // 0x25b Mov
	func_3560(var_22_object); // 0x25c NEW_2
	var_20_int = var_21_int; // 0x25d Mov
	var_23_int = 0; // 0x25f PushI
	var_24_bool = var_20_int > var_23_int; // 0x260 GT
	if(var_24_bool == 0) goto Label_620; // 0x261 JumpB
	var_25_int = 1; // 0x262 PushI
	var_26_bool = var_20_int > var_25_int; // 0x263 GT
	if(var_26_bool == 0) goto Label_616; // 0x264 JumpB
	func_788(var_20_int); // 0x266 NEW_2
	
Label_616:
	var_28_object = Obj(); // 0x268 PushV
	var_28_object = var_18_bool; // 0x269 Mov
	func_3563(var_28_object); // 0x26a NEW_2
	
Label_620:
	return 2; // 0x26c Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x26d PushV
	var_21_object = Obj(); // 0x26e PushV
	var_21_object = var_18_bool; // 0x26f Mov
	func_3446(var_21_object); // 0x270 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x272 PushV
	var_31_object = var_18_bool; // 0x273 Mov
	func_3529(var_30_int, var_31_object); // 0x274 NEW_2
	var_20_int = var_30_int; // 0x275 Mov
	var_66_int = 0; // 0x277 PushI
	var_67_bool = var_20_int > var_66_int; // 0x278 GT
	if(var_67_bool == 0) goto Label_644; // 0x279 JumpB
	var_68_int = 1; // 0x27a PushI
	var_69_bool = var_20_int > var_68_int; // 0x27b GT
	if(var_69_bool == 0) goto Label_640; // 0x27c JumpB
	func_788(var_20_int); // 0x27e NEW_2
	
Label_640:
	var_71_object = Obj(); // 0x280 PushV
	var_71_object = var_18_bool; // 0x281 Mov
	func_3539(var_71_object); // 0x282 NEW_2
	
Label_644:
	return 2; // 0x284 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x285 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x286 PushV
	var_24_object = var_18_bool; // 0x287 Mov
	var_25_object = var_19_object; // 0x288 Mov
	var_26_bool = var_20_bool; // 0x289 Mov
	func_3654(var_26_bool); // 0x28a NEW_2
	if(var_23_bool == 0) goto Label_672; // 0x28c JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x28d PushV
	var_28_object = var_18_bool; // 0x28e Mov
	var_29_bool = var_20_bool; // 0x28f Mov
	func_3547(var_28_object, var_29_bool); // 0x290 NEW_2
	var_22_int = var_27_int; // 0x291 Mov
	var_66_int = 0; // 0x293 PushI
	var_67_bool = var_22_int > var_66_int; // 0x294 GT
	if(var_67_bool == 0) goto Label_672; // 0x295 JumpB
	var_68_int = 1; // 0x296 PushI
	var_69_bool = var_22_int > var_68_int; // 0x297 GT
	if(var_69_bool == 0) goto Label_668; // 0x298 JumpB
	func_788(var_22_int); // 0x29a NEW_2
	
Label_668:
	var_71_object = Obj(); // 0x29c PushV
	var_71_object = var_18_bool; // 0x29d Mov
	func_3554(var_71_object); // 0x29e NEW_2
	
Label_672:
	return 2; // 0x2a0 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2a1 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x2a2 PushV
	var_22_object = var_18_bool; // 0x2a3 Mov
	func_3606(var_22_object); // 0x2a4 NEW_2
	var_20_int = var_21_int; // 0x2a5 Mov
	var_23_int = 0; // 0x2a7 PushI
	var_24_bool = var_20_int > var_23_int; // 0x2a8 GT
	if(var_24_bool == 0) goto Label_692; // 0x2a9 JumpB
	var_25_int = 1; // 0x2aa PushI
	var_26_bool = var_20_int > var_25_int; // 0x2ab GT
	if(var_26_bool == 0) goto Label_688; // 0x2ac JumpB
	func_788(var_20_int); // 0x2ae NEW_2
	
Label_688:
	var_28_object = Obj(); // 0x2b0 PushV
	var_28_object = var_18_bool; // 0x2b1 Mov
	func_3609(); // 0x2b2 NEW_2
	
Label_692:
	return 2; // 0x2b4 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x2b5 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x2b6 PushV
	var_23_object = var_18_object; // 0x2b7 Mov
	var_24_string = var_19_bool; // 0x2b8 Mov
	func_3360(var_22_bool, var_23_object, var_24_string); // 0x2b9 NEW_2
	if(var_22_bool == 0) goto Label_709; // 0x2bb JumpB
	func_788(var_21_int); // 0x2bd NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x2bf PushV
	var_51_object = var_18_object; // 0x2c0 Mov
	var_52_string = var_19_bool; // 0x2c1 Mov
	func_3392(var_51_object, var_52_string); // 0x2c2 NEW_2
	goto Label_729; // 0x2c4 Jump
	
Label_729:
	return 2; // 0x2d9 Return
	
Label_709:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x2c5 PushV
	var_128_string = var_19_bool; // 0x2c6 Mov
	var_129_object = var_18_object; // 0x2c7 Mov
	func_3570(var_129_object); // 0x2c8 NEW_2
	var_21_int = var_127_int; // 0x2c9 Mov
	var_130_int = 0; // 0x2cb PushI
	var_131_bool = var_21_int > var_130_int; // 0x2cc GT
	if(var_131_bool == 0) goto Label_729; // 0x2cd JumpB
	var_132_int = 1; // 0x2ce PushI
	var_133_bool = var_21_int > var_132_int; // 0x2cf GT
	if(var_133_bool == 0) goto Label_724; // 0x2d0 JumpB
	func_788(var_21_int); // 0x2d2 NEW_2
	
Label_724:
	var_134_string = ""; var_135_object = Obj(); // 0x2d4 PushV
	var_134_string = var_19_bool; // 0x2d5 Mov
	var_135_object = var_18_object; // 0x2d6 Mov
	func_3573(); // 0x2d7 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x2db PushV
	var_20_string = var_18_bool; // 0x2dc Mov
	func_3459(var_19_bool, var_20_string); // 0x2dd NEW_2
	if(var_19_bool == 0) goto Label_743; // 0x2df JumpB
	func_788(var_18_bool); // 0x2e1 NEW_2
	var_29_string = ""; // 0x2e3 PushV
	var_29_string = var_18_bool; // 0x2e4 Mov
	func_3475(var_29_string); // 0x2e5 NEW_2
	
Label_743:
	return 0; // 0x2e7 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x2e9 PushV
	var_20_object = var_18_bool; // 0x2ea Mov
	func_3417(var_19_bool, var_20_object); // 0x2eb NEW_2
	if(var_19_bool == 0) goto Label_758; // 0x2ed JumpB
	func_788(var_18_bool); // 0x2ef NEW_2
	var_32_object = Obj(); // 0x2f1 PushV
	var_32_object = var_18_bool; // 0x2f2 Mov
	func_3440(var_32_object); // 0x2f3 NEW_2
	goto Label_762; // 0x2f5 Jump
	
Label_762:
	return 0; // 0x2fa Return
	
Label_758:
	var_34_object = Obj(); // 0x2f6 PushV
	var_34_object = var_18_bool; // 0x2f7 Mov
	func_813(var_18_bool, var_34_object); // 0x2f8 NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x2fc PushV
	var_19_object = var_18_bool; // 0x2fd Mov
	func_813(var_18_bool, var_19_object); // 0x2fe NEW_2
	return 0; // 0x300 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x302 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x303 Neq
	if(var_20_bool == 0) goto Label_774; // 0x304 JumpB
	return 0; // 0x305 Return
	
Label_774:
	var_2_object = 0; // 0x306 TMovB
	var_21_int = 110; // 0x307 PushI
	KillTimer(var_21_int); // 0x308 Func
	ResetAAS(); // 0x30a Func
	return 0; // 0x30c Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_788(var_17_bool); // 0x30e NEW_2
	func_3569(); // 0x311 NEW_2
	return 0; // 0x313 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_788(var_18_bool); // 0x326 NEW_2
	var_20_object = Obj(); // 0x328 PushV
	var_20_object = var_18_bool; // 0x329 Mov
	func_3336(); // 0x32a NEW_2
	return 0; // 0x32c Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x396 Func
	return 0; // 0x398 Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x399 Func
	return 0; // 0x39b Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3b2 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x3b3 PushV
	var_22_object = var_18_bool; // 0x3b4 Mov
	func_3560(var_22_object); // 0x3b5 NEW_2
	var_20_int = var_21_int; // 0x3b6 Mov
	var_23_int = 0; // 0x3b8 PushI
	var_24_bool = var_20_int > var_23_int; // 0x3b9 GT
	if(var_24_bool == 0) goto Label_965; // 0x3ba JumpB
	var_25_int = 1; // 0x3bb PushI
	var_26_bool = var_20_int > var_25_int; // 0x3bc GT
	if(var_26_bool == 0) goto Label_961; // 0x3bd JumpB
	func_1191(); // 0x3bf NEW_2
	
Label_961:
	var_27_object = Obj(); // 0x3c1 PushV
	var_27_object = var_18_bool; // 0x3c2 Mov
	func_3563(var_27_object); // 0x3c3 NEW_2
	
Label_965:
	return 2; // 0x3c5 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3c6 PushV
	var_21_object = Obj(); // 0x3c7 PushV
	var_21_object = var_18_bool; // 0x3c8 Mov
	func_3446(var_21_object); // 0x3c9 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x3cb PushV
	var_31_object = var_18_bool; // 0x3cc Mov
	func_3529(var_30_int, var_31_object); // 0x3cd NEW_2
	var_20_int = var_30_int; // 0x3ce Mov
	var_66_int = 0; // 0x3d0 PushI
	var_67_bool = var_20_int > var_66_int; // 0x3d1 GT
	if(var_67_bool == 0) goto Label_989; // 0x3d2 JumpB
	var_68_int = 1; // 0x3d3 PushI
	var_69_bool = var_20_int > var_68_int; // 0x3d4 GT
	if(var_69_bool == 0) goto Label_985; // 0x3d5 JumpB
	func_1191(); // 0x3d7 NEW_2
	
Label_985:
	var_70_object = Obj(); // 0x3d9 PushV
	var_70_object = var_18_bool; // 0x3da Mov
	func_3539(var_70_object); // 0x3db NEW_2
	
Label_989:
	return 2; // 0x3dd Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x3de PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x3df PushV
	var_24_object = var_18_bool; // 0x3e0 Mov
	var_25_object = var_19_object; // 0x3e1 Mov
	var_26_bool = var_20_bool; // 0x3e2 Mov
	func_3654(var_26_bool); // 0x3e3 NEW_2
	if(var_23_bool == 0) goto Label_1017; // 0x3e5 JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x3e6 PushV
	var_28_object = var_18_bool; // 0x3e7 Mov
	var_29_bool = var_20_bool; // 0x3e8 Mov
	func_3547(var_28_object, var_29_bool); // 0x3e9 NEW_2
	var_22_int = var_27_int; // 0x3ea Mov
	var_66_int = 0; // 0x3ec PushI
	var_67_bool = var_22_int > var_66_int; // 0x3ed GT
	if(var_67_bool == 0) goto Label_1017; // 0x3ee JumpB
	var_68_int = 1; // 0x3ef PushI
	var_69_bool = var_22_int > var_68_int; // 0x3f0 GT
	if(var_69_bool == 0) goto Label_1013; // 0x3f1 JumpB
	func_1191(); // 0x3f3 NEW_2
	
Label_1013:
	var_70_object = Obj(); // 0x3f5 PushV
	var_70_object = var_18_bool; // 0x3f6 Mov
	func_3554(var_70_object); // 0x3f7 NEW_2
	
Label_1017:
	return 2; // 0x3f9 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x3fa PushV
	var_21_int = 0; var_22_object = Obj(); // 0x3fb PushV
	var_22_object = var_18_bool; // 0x3fc Mov
	func_3606(var_22_object); // 0x3fd NEW_2
	var_20_int = var_21_int; // 0x3fe Mov
	var_23_int = 0; // 0x400 PushI
	var_24_bool = var_20_int > var_23_int; // 0x401 GT
	if(var_24_bool == 0) goto Label_1037; // 0x402 JumpB
	var_25_int = 1; // 0x403 PushI
	var_26_bool = var_20_int > var_25_int; // 0x404 GT
	if(var_26_bool == 0) goto Label_1033; // 0x405 JumpB
	func_1191(); // 0x407 NEW_2
	
Label_1033:
	var_27_object = Obj(); // 0x409 PushV
	var_27_object = var_18_bool; // 0x40a Mov
	func_3609(); // 0x40b NEW_2
	
Label_1037:
	return 2; // 0x40d Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x40e PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x40f PushV
	var_23_object = var_18_object; // 0x410 Mov
	var_24_string = var_19_bool; // 0x411 Mov
	func_3360(var_22_bool, var_23_object, var_24_string); // 0x412 NEW_2
	if(var_22_bool == 0) goto Label_1054; // 0x414 JumpB
	func_1191(); // 0x416 NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x418 PushV
	var_50_object = var_18_object; // 0x419 Mov
	var_51_string = var_19_bool; // 0x41a Mov
	func_3392(var_50_object, var_51_string); // 0x41b NEW_2
	goto Label_1074; // 0x41d Jump
	
Label_1074:
	return 2; // 0x432 Return
	
Label_1054:
	var_126_int = 0; var_127_string = ""; var_128_object = Obj(); // 0x41e PushV
	var_127_string = var_19_bool; // 0x41f Mov
	var_128_object = var_18_object; // 0x420 Mov
	func_3570(var_128_object); // 0x421 NEW_2
	var_21_int = var_126_int; // 0x422 Mov
	var_129_int = 0; // 0x424 PushI
	var_130_bool = var_21_int > var_129_int; // 0x425 GT
	if(var_130_bool == 0) goto Label_1074; // 0x426 JumpB
	var_131_int = 1; // 0x427 PushI
	var_132_bool = var_21_int > var_131_int; // 0x428 GT
	if(var_132_bool == 0) goto Label_1069; // 0x429 JumpB
	func_1191(); // 0x42b NEW_2
	
Label_1069:
	var_133_string = ""; var_134_object = Obj(); // 0x42d PushV
	var_133_string = var_19_bool; // 0x42e Mov
	var_134_object = var_18_object; // 0x42f Mov
	func_3573(); // 0x430 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x434 PushV
	var_20_string = var_18_bool; // 0x435 Mov
	func_3459(var_19_bool, var_20_string); // 0x436 NEW_2
	if(var_19_bool == 0) goto Label_1088; // 0x438 JumpB
	func_1191(); // 0x43a NEW_2
	var_28_string = ""; // 0x43c PushV
	var_28_string = var_18_bool; // 0x43d Mov
	func_3475(var_28_string); // 0x43e NEW_2
	
Label_1088:
	return 0; // 0x440 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1191(); // 0x442 NEW_2
	func_3569(); // 0x445 NEW_2
	return 0; // 0x447 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x449 PushV
	var_20_object = var_18_bool; // 0x44a Mov
	func_3417(var_19_bool, var_20_object); // 0x44b NEW_2
	if(var_19_bool == 0) goto Label_1109; // 0x44d JumpB
	func_1191(); // 0x44f NEW_2
	var_31_object = Obj(); // 0x451 PushV
	var_31_object = var_18_bool; // 0x452 Mov
	func_3440(var_31_object); // 0x453 NEW_2
	
Label_1109:
	return 0; // 0x455 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x4e4 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x4e5 PushV
	var_22_object = var_18_bool; // 0x4e6 Mov
	func_3560(var_22_object); // 0x4e7 NEW_2
	var_20_int = var_21_int; // 0x4e8 Mov
	var_23_int = 0; // 0x4ea PushI
	var_24_bool = var_20_int > var_23_int; // 0x4eb GT
	if(var_24_bool == 0) goto Label_1271; // 0x4ec JumpB
	var_25_int = 1; // 0x4ed PushI
	var_26_bool = var_20_int > var_25_int; // 0x4ee GT
	if(var_26_bool == 0) goto Label_1267; // 0x4ef JumpB
	func_1395(); // 0x4f1 NEW_2
	
Label_1267:
	var_29_object = Obj(); // 0x4f3 PushV
	var_29_object = var_18_bool; // 0x4f4 Mov
	func_3563(var_29_object); // 0x4f5 NEW_2
	
Label_1271:
	return 2; // 0x4f7 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x4f8 PushV
	var_21_object = Obj(); // 0x4f9 PushV
	var_21_object = var_18_bool; // 0x4fa Mov
	func_3446(var_21_object); // 0x4fb NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x4fd PushV
	var_31_object = var_18_bool; // 0x4fe Mov
	func_3529(var_30_int, var_31_object); // 0x4ff NEW_2
	var_20_int = var_30_int; // 0x500 Mov
	var_66_int = 0; // 0x502 PushI
	var_67_bool = var_20_int > var_66_int; // 0x503 GT
	if(var_67_bool == 0) goto Label_1295; // 0x504 JumpB
	var_68_int = 1; // 0x505 PushI
	var_69_bool = var_20_int > var_68_int; // 0x506 GT
	if(var_69_bool == 0) goto Label_1291; // 0x507 JumpB
	func_1395(); // 0x509 NEW_2
	
Label_1291:
	var_72_object = Obj(); // 0x50b PushV
	var_72_object = var_18_bool; // 0x50c Mov
	func_3539(var_72_object); // 0x50d NEW_2
	
Label_1295:
	return 2; // 0x50f Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x510 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x511 PushV
	var_24_object = var_18_bool; // 0x512 Mov
	var_25_object = var_19_object; // 0x513 Mov
	var_26_bool = var_20_bool; // 0x514 Mov
	func_3654(var_26_bool); // 0x515 NEW_2
	if(var_23_bool == 0) goto Label_1323; // 0x517 JumpB
	var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; // 0x518 PushV
	var_28_object = var_18_bool; // 0x519 Mov
	var_29_bool = var_20_bool; // 0x51a Mov
	func_3547(var_28_object, var_29_bool); // 0x51b NEW_2
	var_22_int = var_27_int; // 0x51c Mov
	var_66_int = 0; // 0x51e PushI
	var_67_bool = var_22_int > var_66_int; // 0x51f GT
	if(var_67_bool == 0) goto Label_1323; // 0x520 JumpB
	var_68_int = 1; // 0x521 PushI
	var_69_bool = var_22_int > var_68_int; // 0x522 GT
	if(var_69_bool == 0) goto Label_1319; // 0x523 JumpB
	func_1395(); // 0x525 NEW_2
	
Label_1319:
	var_72_object = Obj(); // 0x527 PushV
	var_72_object = var_18_bool; // 0x528 Mov
	func_3554(var_72_object); // 0x529 NEW_2
	
Label_1323:
	return 2; // 0x52b Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x52c PushV
	var_21_int = 0; var_22_object = Obj(); // 0x52d PushV
	var_22_object = var_18_bool; // 0x52e Mov
	func_3606(var_22_object); // 0x52f NEW_2
	var_20_int = var_21_int; // 0x530 Mov
	var_23_int = 0; // 0x532 PushI
	var_24_bool = var_20_int > var_23_int; // 0x533 GT
	if(var_24_bool == 0) goto Label_1343; // 0x534 JumpB
	var_25_int = 1; // 0x535 PushI
	var_26_bool = var_20_int > var_25_int; // 0x536 GT
	if(var_26_bool == 0) goto Label_1339; // 0x537 JumpB
	func_1395(); // 0x539 NEW_2
	
Label_1339:
	var_29_object = Obj(); // 0x53b PushV
	var_29_object = var_18_bool; // 0x53c Mov
	func_3609(); // 0x53d NEW_2
	
Label_1343:
	return 2; // 0x53f Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x540 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x541 PushV
	var_23_object = var_18_object; // 0x542 Mov
	var_24_string = var_19_bool; // 0x543 Mov
	func_3360(var_22_bool, var_23_object, var_24_string); // 0x544 NEW_2
	if(var_22_bool == 0) goto Label_1360; // 0x546 JumpB
	func_1395(); // 0x548 NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x54a PushV
	var_52_object = var_18_object; // 0x54b Mov
	var_53_string = var_19_bool; // 0x54c Mov
	func_3392(var_52_object, var_53_string); // 0x54d NEW_2
	goto Label_1380; // 0x54f Jump
	
Label_1380:
	return 2; // 0x564 Return
	
Label_1360:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x550 PushV
	var_129_string = var_19_bool; // 0x551 Mov
	var_130_object = var_18_object; // 0x552 Mov
	func_3570(var_130_object); // 0x553 NEW_2
	var_21_int = var_128_int; // 0x554 Mov
	var_131_int = 0; // 0x556 PushI
	var_132_bool = var_21_int > var_131_int; // 0x557 GT
	if(var_132_bool == 0) goto Label_1380; // 0x558 JumpB
	var_133_int = 1; // 0x559 PushI
	var_134_bool = var_21_int > var_133_int; // 0x55a GT
	if(var_134_bool == 0) goto Label_1375; // 0x55b JumpB
	func_1395(); // 0x55d NEW_2
	
Label_1375:
	var_135_string = ""; var_136_object = Obj(); // 0x55f PushV
	var_135_string = var_19_bool; // 0x560 Mov
	var_136_object = var_18_object; // 0x561 Mov
	func_3573(); // 0x562 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x566 PushV
	var_20_string = var_18_bool; // 0x567 Mov
	func_3459(var_19_bool, var_20_string); // 0x568 NEW_2
	if(var_19_bool == 0) goto Label_1394; // 0x56a JumpB
	func_1395(); // 0x56c NEW_2
	var_30_string = ""; // 0x56e PushV
	var_30_string = var_18_bool; // 0x56f Mov
	func_3475(var_30_string); // 0x570 NEW_2
	
Label_1394:
	return 0; // 0x572 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1395(); // 0x580 NEW_2
	var_21_object = Obj(); // 0x582 PushV
	var_21_object = var_18_bool; // 0x583 Mov
	func_3336(); // 0x584 NEW_2
	return 0; // 0x586 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x587 PushV
	var_23_int = 111; // 0x588 PushI
	var_24_bool = var_18_bool != var_23_int; // 0x589 Neq
	if(var_24_bool == 0) goto Label_1420; // 0x58a JumpB
	return 4; // 0x58b Return
	
Label_1420:
	var_25_bool = 0; var_26_object = Obj(); // 0x58c PushV
	var_26_object = var_0_object; // 0x58d MovT
	func_2570(var_25_bool, var_26_object); // 0x58e NEW_2
	var_59_bool = var_25_bool == 0; // 0x590 Not
	if(var_59_bool == 0) goto Label_1430; // 0x591 JumpB
	func_1395(); // 0x593 NEW_2
	return 4; // 0x595 Return
	
Label_1430:
	GetDirection(var_21_cvector); // 0x596 Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x598 PushV
	var_63_object = var_0_object; // 0x599 MovT
	func_2424(var_63_object); // 0x59a NEW_2
	var_22_cvector = var_62_cvector; // 0x59b Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x59d PushV
	var_69_cvector = var_21_cvector; // 0x59e Mov
	var_70_cvector = var_22_cvector; // 0x59f Mov
	func_2995(var_68_float, var_69_cvector, var_70_cvector); // 0x5a0 NEW_2
	var_92_float = 0.5; // 0x5a2 PushF
	var_93_bool = var_68_float < var_92_float; // 0x5a3 LT
	if(var_93_bool == 0) goto Label_1449; // 0x5a4 JumpB
	var_94_object = Obj(); // 0x5a5 PushV
	var_94_object = var_0_object; // 0x5a6 MovT
	func_2720(); // 0x5a7 NEW_2
	
Label_1449:
	return 4; // 0x5a9 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1395(); // 0x5ab NEW_2
	func_3569(); // 0x5ae NEW_2
	return 0; // 0x5b0 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x5b2 PushV
	var_20_object = var_18_bool; // 0x5b3 Mov
	func_3417(var_19_bool, var_20_object); // 0x5b4 NEW_2
	if(var_19_bool == 0) goto Label_1470; // 0x5b6 JumpB
	func_1395(); // 0x5b8 NEW_2
	var_33_object = Obj(); // 0x5ba PushV
	var_33_object = var_18_bool; // 0x5bb Mov
	func_3440(var_33_object); // 0x5bc NEW_2
	
Label_1470:
	return 0; // 0x5be Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2217(var_17_bool); // 0x864 NEW_2
	func_3569(); // 0x867 NEW_2
	return 0; // 0x869 Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0x89c PushI
	var_20_bool = var_18_int == var_19_int; // 0x89d Eq
	if(var_20_bool == 0) goto Label_2212; // 0x89e JumpB
	var_21_object = Obj(); // 0x89f PushV
	var_21_object = var_1_object; // 0x8a0 MovT
	func_3036(var_21_object); // 0x8a1 NEW_2
	goto Label_2216; // 0x8a3 Jump
	
Label_2216:
	return 0; // 0x8a8 Return
	
Label_2212:
	var_26_int = 0; // 0x8a4 PushV
	var_26_int = var_18_int; // 0x8a5 Mov
	func_2361(var_17_bool, var_18_int, var_26_int); // 0x8a6 NEW_2
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x8b7 PushV
	var_19_bool = 0; // 0x8b8 MovB
	var_20_bool = var_1_object == var_18_object; // 0x8b9 Eq
	if(var_20_bool == 0) goto Label_2238; // 0x8ba JumpB
	var_21_bool = var_2_object == 0; // 0x8bb Not
	if(var_21_bool == 0) goto Label_2238; // 0x8bc JumpB
	var_19_bool = 1; // 0x8bd MovB
	
Label_2238:
	if(var_19_bool == 0) goto Label_2244; // 0x8be JumpB
	var_2_object = 1; // 0x8bf TMovB
	var_22_object = Obj(); // 0x8c0 PushV
	var_22_object = var_18_object; // 0x8c1 Mov
	func_2852(var_22_object); // 0x8c2 NEW_2
	
Label_2244:
	return 0; // 0x8c4 Return
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x8c6 PushV
	var_19_bool = 0; // 0x8c7 MovB
	var_20_bool = var_1_object == var_18_object; // 0x8c8 Eq
	if(var_20_bool == 0) goto Label_2253; // 0x8c9 JumpB
	var_21_object = var_2_object; // 0x8ca PushT
	if(var_21_object == 0) goto Label_2253; // 0x8cb JumpB
	var_19_bool = 1; // 0x8cc MovB
	
Label_2253:
	if(var_19_bool == 0) goto Label_2258; // 0x8cd JumpB
	var_2_object = 0; // 0x8ce TMovB
	var_22_string = "head"; // 0x8cf PushS
	UnlookAsync(var_22_string); // 0x8d0 Func
	
Label_2258:
	return 0; // 0x8d2 Return
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0x94c Func
	return 0; // 0x94e Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_2217(var_18_object); // 0x958 NEW_2
	var_23_object = Obj(); // 0x95a PushV
	var_23_object = var_18_object; // 0x95b Mov
	func_3336(); // 0x95c NEW_2
	return 0; // 0x95e Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0xcfb PushV
	var_22_string = "health"; // 0xcfc PushS
	var_23_bool = var_19_string == var_22_string; // 0xcfd Eq
	if(var_23_bool == 0) goto Label_3335; // 0xcfe JumpB
	var_24_string = "health"; // 0xcff PushS
	GetProperty(var_24_string, var_21_float); // 0xd00 Func
	var_25_int = 0; // 0xd02 PushI
	var_26_bool = var_21_float <= var_25_int; // 0xd03 LE
	if(var_26_bool == 0) goto Label_3335; // 0xd04 JumpB
	SignalDeath(var_18_object); // 0xd05 Func
	
Label_3335:
	return 2; // 0xd07 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0xd09 PushV
	var_19_object = var_18_object; // 0xd0a Mov
	func_3315(var_19_object); // 0xd0b NEW_2
	return 0; // 0xd0d Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0xd0f PushV
	var_22_object = var_18_object; // 0xd10 Mov
	var_23_int = var_19_int; // 0xd11 Mov
	var_24_float = var_20_float; // 0xd12 Mov
	func_2638(var_22_object, var_23_int, var_24_float); // 0xd13 NEW_2
	return 0; // 0xd15 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0xd17 PushV
	var_24_object = var_18_object; // 0xd18 Mov
	var_25_int = var_19_int; // 0xd19 Mov
	var_26_float = var_20_float; // 0xd1a Mov
	var_27_cvector = var_22_cvector; // 0xd1b Mov
	var_28_cvector = var_23_cvector; // 0xd1c Mov
	func_2706(var_26_float, var_27_cvector, var_28_cvector); // 0xd1d NEW_2
	return 0; // 0xd1f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x241 PushB
	SensePlayerOnly(var_18_bool); // 0x242 Func
	func_3626(); // 0x245 NEW_2
	func_592(); // 0x248 NEW_2
	
Label_586:
	var_2_object = 0; // 0x24a TMovB
	func_853(var_16_object, var_17_bool); // 0x24c NEW_2
	goto Label_586; // 0x24e Jump
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x0 PushV
	var_0_object = var_44_object; // 0x1 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x2 PushV
	var_55_object = var_44_object; // 0x3 Mov
	var_56_float = 70.0; // 0x4 MovF
	func_2736(var_55_object, var_56_float); // 0x5 NEW_2
	var_100_bool = var_54_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_3618(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_3616(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_3620(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_3622(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_3074(var_105_int); // 0x22 NEW_2
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
	var_180_bool = var_53_bool == 0; // 0x38 Not
	if(var_180_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_53_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_181_object = Obj(); // 0x3f PushV
	var_181_object = var_44_object; // 0x40 Mov
	func_2804(); // 0x41 NEW_2
	StopDialog(var_50_object); // 0x43 Func
	GetReturnValue(var_52_int); // 0x45 ObjFunc
	var_43_int = var_52_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_3074(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0xc02 PushV
	var_108_string = "branch"; // 0xc03 PushS
	GetVariable(var_108_string, var_107_int); // 0xc04 Func
	var_109_int = 0; // 0xc06 PushI
	var_110_bool = var_107_int == var_109_int; // 0xc07 Eq
	if(var_110_bool == 0) goto Label_3084; // 0xc08 JumpB
	var_105_int = 1; // 0xc09 MovI
	return 2; // 0xc0a Return
	
Label_3084:
	var_111_int = 1; // 0xc0c PushI
	var_112_bool = var_107_int == var_111_int; // 0xc0d Eq
	if(var_112_bool == 0) goto Label_3089; // 0xc0e JumpB
	var_105_int = 2; // 0xc0f MovI
	return 2; // 0xc10 Return
	
Label_3089:
	var_105_int = 3; // 0xc11 MovI
	return 2; // 0xc12 Return
}


func_2570(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0xa0a PushV
	var_35_bool = 0; var_36_object = Obj(); // 0xa0b PushV
	var_36_object = var_32_object; // 0xa0c Mov
	func_2534(var_35_bool, var_36_object); // 0xa0d NEW_2
	var_52_bool = var_35_bool == 0; // 0xa0f Not
	if(var_52_bool == 0) goto Label_2579; // 0xa10 JumpB
	var_31_bool = 0; // 0xa11 MovB
	return 2; // 0xa12 Return
	
Label_2579:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0xa13 PushV
	var_54_object = var_32_object; // 0xa14 Mov
	var_55_string = "noaccess"; // 0xa15 MovS
	func_2444(var_53_bool, var_54_object, var_55_string); // 0xa16 NEW_2
	var_62_bool = var_53_bool == 0; // 0xa18 Not
	if(var_62_bool == 0) goto Label_2588; // 0xa19 JumpB
	var_31_bool = 1; // 0xa1a MovB
	return 2; // 0xa1b Return
	
Label_2588:
	var_63_string = "noaccess"; // 0xa1c PushS
	GetProperty(var_63_string, var_34_int); // 0xa1d ObjFunc
	var_64_int = 0; // 0xa1f PushI
	var_31_bool = var_34_int == var_64_int; // 0xa20 Eq2
	return 2; // 0xa21 Return
}


func_3595(var_59_object)
{
	var_60_object = Obj(); // 0xe0c PushV
	var_60_object = var_59_object; // 0xe0d Mov
	func_3521(var_60_object); // 0xe0e NEW_2
	return 0; // 0xe10 Return
}


func_3601(var_48_bool)
{
	var_48_bool = 0; // 0xe12 MovB
	return 0; // 0xe13 Return
}


func_3091(var_157_int)
{
	var_158_int = 0; var_159_int = 0; // 0xc13 PushV
	var_160_string = "branch"; // 0xc14 PushS
	GetVariable(var_160_string, var_159_int); // 0xc15 Func
	var_157_int = var_159_int; // 0xc17 Mov
	return 2; // 0xc18 Return
}


func_3604()
{
	return 0; // 0xe15 Return
}


func_3606(var_21_int)
{
	var_21_int = 0; // 0xe17 MovI
	return 0; // 0xe18 Return
}


func_3609()
{
	return 0; // 0xe1a Return
}


func_3097(var_35_object)
{
	var_36_int = 0; // 0xc1a PushV
	func_3091(var_36_int); // 0xc1b NEW_2
	var_40_int = 1; // 0xc1d PushI
	var_41_bool = var_36_int == var_40_int; // 0xc1e Eq
	if(var_41_bool == 0) goto Label_3107; // 0xc1f JumpB
	WorkWithCorpse(var_35_object); // 0xc20 Func
	goto Label_3109; // 0xc22 Jump
	
Label_3109:
	return 0; // 0xc25 Return
	
Label_3107:
	Barter(var_35_object); // 0xc23 Func
}


func_3611(var_26_bool)
{
	var_26_bool = 0; // 0xe1c MovB
	return 0; // 0xe1d Return
}


func_3614()
{
	return 0; // 0xe1f Return
}


func_3616(var_102_int)
{
	var_102_int = 518097; // 0xe20 MovI
	return 0; // 0xe21 Return
}


func_545(var_43_string)
{
	RemoveRTEnvelope(); // 0x222 Func
	SetDeathState(); // 0x224 Func
	Stop(); // 0x226 Func
	StopAsync(); // 0x228 Func
	StopSecondaryAnimation(); // 0x22a Func
	var_44_string = ""; // 0x22c PushV
	var_44_string = var_43_string; // 0x22d Mov
	func_2896(var_44_string); // 0x22e NEW_2
	var_73_string = "all"; // 0x230 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x231 Func
	WaitForAnimEnd(); // 0x233 Func
	var_74_string = "all"; // 0x235 PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x236 Func
	RemoveEnvelope(); // 0x238 Func
	return 0; // 0x23a Return
}


func_3618(var_101_int)
{
	var_101_int = 518096; // 0xe22 MovI
	return 0; // 0xe23 Return
}


func_2594(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0xa22 PushV
	var_50_bool = var_35_object == 0; // 0xa23 NullEq
	if(var_50_bool == 0) goto Label_2598; // 0xa24 JumpB
	return 14; // 0xa25 Return
	
Label_2598:
	IsDead(var_43_bool); // 0xa26 Func
	var_51_bool = var_43_bool; // 0xa28 Push
	if(var_51_bool == 0) goto Label_2603; // 0xa29 JumpB
	return 14; // 0xa2a Return
	
Label_2603:
	GetSecondaryAnimationType(var_44_int); // 0xa2b Func
	var_52_int = 0; // 0xa2d PushI
	var_53_bool = var_44_int < var_52_int; // 0xa2e LT
	if(var_53_bool == 0) goto Label_2609; // 0xa2f JumpB
	return 14; // 0xa30 Return
	
Label_2609:
	GetPosition(var_45_cvector); // 0xa31 ObjFunc
	GetPosition(var_46_cvector); // 0xa33 Func
	GetDirection(var_47_cvector); // 0xa35 Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0xa37 Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0xa38 PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0xa39 PushE
	var_56_float = var_54_float * var_55_float; // 0xa3a Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0xa3b PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0xa3c PushE
	var_59_float = var_57_float * var_58_float; // 0xa3d Mult
	var_60_int = var_56_float + var_59_float; // 0xa3e Add
	var_61_int = 0; // 0xa3f PushI
	var_62_bool = var_60_int >= var_61_int; // 0xa40 GE
	if(var_62_bool == 0) goto Label_2628; // 0xa41 JumpB
	var_49_string = "fhit"; // 0xa42 MovS
	goto Label_2629; // 0xa43 Jump
	
Label_2629:
	var_63_string = "hit_react"; // 0xa45 PushS
	var_64_string = "1"; // 0xa46 PushS
	var_65_int = var_49_string + var_64_string; // 0xa47 Add
	var_66_string = "2"; // 0xa48 PushS
	var_67_int = var_49_string + var_66_string; // 0xa49 Add
	var_68_int = -10; // 0xa4a PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0xa4b Func
	return 14; // 0xa4d Return
	
Label_2628:
	var_49_string = "bhit"; // 0xa44 MovS
}


func_3620(var_103_string)
{
	var_103_string = "ui/NPC_Citizen2.png"; // 0xe24 MovS
	return 0; // 0xe25 Return
}


func_2084(var_0_object, var_272_bool)
{
	var_273_bool = 0; var_274_bool = 0; // 0x824 PushV
	var_275_string = "IsAttacking"; // 0x825 PushS
	var_276_int = 1; // 0x826 PushI
	var_277_bool = IsFuncExist(var_0_object, var_275_string, var_276_int); // 0x827 FuncExist
	if(var_277_bool == 0) goto Label_2093; // 0x828 JumpB
	IsAttacking(var_274_bool); // 0x829 TObjFunc
	var_272_bool = var_274_bool; // 0x82b Mov
	return 2; // 0x82c Return
	
Label_2093:
	var_272_bool = 0; // 0x82d MovB
	return 2; // 0x82e Return
}


func_3622(var_104_string)
{
	var_104_string = "ui/NPC_Citizen2_b.png"; // 0xe26 MovS
	return 0; // 0xe27 Return
}


func_3110(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0; // 0xc26 PushV
	var_130_bool = var_115_int > var_116_int; // 0xc27 GT
	if(var_130_bool == 0) goto Label_3117; // 0xc28 JumpB
	var_131_string = "GenerateMoney: iMin > iMax"; // 0xc29 PushS
	Trace(var_131_string); // 0xc2a Func
	return 4; // 0xc2c Return
	
Label_3117:
	var_128_int = 0; // 0xc2d MovI
	var_132_bool = var_115_int != var_116_int; // 0xc2e Neq
	if(var_132_bool == 0) goto Label_3124; // 0xc2f JumpB
	var_133_int = var_116_int - var_115_int; // 0xc30 Sub
	irand(var_128_int, var_133_int); // 0xc31 Func
	goto Label_3128; // 0xc33 Jump
	
Label_3128:
	var_128_int = var_128_int + var_115_int; // 0xc38 Add2
	var_134_int = 0; // 0xc39 PushI
	var_135_bool = var_128_int == var_134_int; // 0xc3a Eq
	if(var_135_bool == 0) goto Label_3133; // 0xc3b JumpB
	return 4; // 0xc3c Return
	
Label_3133:
	var_136_int = 0; var_137_string = ""; // 0xc3d PushV
	var_137_string = "Money"; // 0xc3e MovS
	func_3310(var_136_int, var_137_string); // 0xc3f NEW_2
	var_140_int = 0; // 0xc41 PushI
	AddItem(var_129_bool, var_136_int, var_140_int, var_128_int); // 0xc42 Func
	return 4; // 0xc44 Return
	
Label_3124:
	var_141_int = 0; // 0xc34 PushI
	var_142_bool = var_115_int == var_141_int; // 0xc35 Eq
	if(var_142_bool == 0) goto Label_3128; // 0xc36 JumpB
	return 4; // 0xc37 Return
}


func_3624(var_96_bool)
{
	var_96_bool = 0; // 0xe28 MovB
	return 0; // 0xe29 Return
}


func_3626()
{
	var_19_bool = GlobalVars[0]; // 0xe2a PushGE
	var_19_bool = 0; // 0xe2b MovB
	GlobalVars[0] = var_19_bool; // 0xe2c PopGE
	var_20_bool = 0; // 0xe2d PushV
	var_20_bool = 1; // 0xe2e MovB
	func_3210(var_20_bool); // 0xe2f NEW_2
	return 0; // 0xe31 Return
}


func_2095(var_2_object, var_5_bool)
{
	var_389_float = 0; var_390_int = 0; var_391_float = 0; var_392_int = 0; // 0x82f PushV
	var_393_bool = var_2_object == 0; // 0x830 Not
	if(var_393_bool == 0) goto Label_2099; // 0x831 JumpB
	return 4; // 0x832 Return
	
Label_2099:
	var_394_bool = var_5_bool; // 0x833 PushT
	if(var_394_bool == 0) goto Label_2107; // 0x834 JumpB
	var_395_int = -1; // 0x835 PushI
	var_5_bool = var_5_bool + var_395_int; // 0x836 Add2
	var_396_int = 0; // 0x837 PushI
	var_397_bool = var_5_bool > var_396_int; // 0x838 GT
	if(var_397_bool == 0) goto Label_2107; // 0x839 JumpB
	return 4; // 0x83a Return
	
Label_2107:
	rand(var_391_float); // 0x83b Func
	var_398_float = 0; // 0x83d PushV
	func_2145(var_398_float); // 0x83e NEW_2
	var_399_bool = var_391_float < var_398_float; // 0x840 LT
	if(var_399_bool == 0) goto Label_2126; // 0x841 JumpB
	irand(var_392_int, var_391_float); // 0x842 Func
	var_400_int = 1; // 0x844 PushI
	var_392_int = var_392_int + var_400_int; // 0x845 Add2
	var_401_string = "attack"; // 0x846 PushS
	var_402_int = var_401_string + var_392_int; // 0x847 Add
	Speak(var_402_int); // 0x848 Func
	var_403_int = 0; // 0x84a PushV
	func_2143(var_403_int); // 0x84b NEW_2
	var_5_bool = var_403_int; // 0x84c TMov
	
Label_2126:
	return 4; // 0x84e Return
}


func_3634(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0xe32 PushV
	var_33_bool = GlobalVars[0]; // 0xe33 PushGE
	if(var_33_bool == 0) goto Label_3647; // 0xe34 JumpB
	IsOverrideActive(var_32_bool); // 0xe35 Func
	var_34_bool = var_32_bool == 0; // 0xe37 Not
	if(var_34_bool == 0) goto Label_3645; // 0xe38 JumpB
	var_35_object = Obj(); // 0xe39 PushV
	var_35_object = var_30_object; // 0xe3a Mov
	func_3097(var_35_object); // 0xe3b NEW_2
	
Label_3645:
	return 2; // 0xe3d Return
	
Label_3647:
	var_42_object = Obj(); // 0xe3f PushV
	var_42_object = var_30_object; // 0xe40 Mov
	func_3685(var_42_object); // 0xe41 NEW_2
	return 2; // 0xe43 Return
}


func_3575(var_24_bool)
{
	var_24_bool = 0; // 0xdf8 MovB
	return 0; // 0xdf9 Return
}


func_3652(var_63_bool)
{
	var_63_bool = 0; // 0xe44 MovB
	return 0; // 0xe45 Return
}


func_3141(var_163_string)
{
	var_164_object = Obj(); var_165_int = 0; var_166_bool = 0; var_167_object = Obj(); var_168_int = 0; var_169_bool = 0; // 0xc45 PushV
	CreateInvItem(var_167_object); // 0xc46 Func
	SetItemName(var_163_string); // 0xc48 ObjFunc
	var_170_string = "Organ"; // 0xc4a PushS
	var_171_int = 1; // 0xc4b PushI
	SetProperty(var_170_string, var_171_int); // 0xc4c ObjFunc
	GetItemID(var_168_int); // 0xc4e ObjFunc
	var_172_int = 0; // 0xc50 PushI
	var_173_int = 1; // 0xc51 PushI
	AddItem(var_169_bool, var_167_object, var_172_int, var_173_int); // 0xc52 Func
	return 6; // 0xc54 Return
}


func_3654(var_23_bool)
{
	var_23_bool = 1; // 0xe47 MovB
	return 0; // 0xe48 Return
}


func_3657(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0xe4a PushV
	var_103_object = var_101_object; // 0xe4b Mov
	func_2439(var_102_bool, var_103_object); // 0xe4c NEW_2
	if(var_102_bool == 0) goto Label_3674; // 0xe4e JumpB
	var_106_object = Obj(); // 0xe4f PushV
	func_2937(var_106_object); // 0xe50 NEW_2
	var_109_float = -0.1; // 0xe52 PushF
	var_110_bool = 1; // 0xe53 PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0xe54 Func
	var_111_bool = 0; // 0xe56 PushV
	var_111_bool = 1; // 0xe57 MovB
	func_3182(); // 0xe58 NEW_2
	
Label_3674:
	func_3158(); // 0xe5b NEW_2
	var_177_bool = GlobalVars[0]; // 0xe5d PushGE
	var_177_bool = 1; // 0xe5e MovB
	GlobalVars[0] = var_177_bool; // 0xe5f PopGE
	var_178_int = 50; // 0xe60 PushI
	var_179_int = 40; // 0xe61 PushI
	SetRTEnvelope(var_178_int, var_179_int); // 0xe62 Func
	return 0; // 0xe64 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_114_object, var_115_object)
{
	var_0_object = var_115_object; // 0x4b TMov
	var_1_object = var_114_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_120_int = 1; // 0x4e PushI
	if(var_120_int == 0) goto Label_127; // 0x4f JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x50 PushV
	var_122_object = var_1_object; // 0x51 MovT
	func_3062(var_122_object); // 0x52 NEW_2
	if(var_121_bool == 0) goto Label_105; // 0x54 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x55 PushV
	var_129_object = var_1_object; // 0x56 MovT
	var_130_object = var_0_object; // 0x57 MovT
	func_3056(); // 0x58 NEW_2
	var_133_string = ""; // 0x5a PushV
	var_133_string = "Neutral"; // 0x5b MovS
	func_157(var_115_object, var_133_string); // 0x5c NEW_2
	var_150_int = 532749; // 0x5e PushI
	SetMessage(var_150_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_151_int = 533297; // 0x63 PushI
	var_152_int = 34809; // 0x64 PushI
	var_153_int = 34808; // 0x65 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_154_bool = 0; // 0x7f PushV
	func_3624(var_154_bool); // 0x80 NEW_2
	if(var_154_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_155_string = var_3_string; // 0x85 PushT
	if(var_155_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_156_string = ""; // 0x88 PushV
	var_156_string = var_2_object; // 0x89 MovT
	func_2821(var_156_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_167_string = "all"; // 0x8e PushS
	var_168_string = "idle"; // 0x8f PushS
	PlayAnimation(var_167_string, var_168_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_169_string = var_3_string; // 0x94 PushT
	if(var_169_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_170_string = "all"; // 0x97 PushS
	var_171_string = "idle"; // 0x98 PushS
	PlayAnimation(var_170_string, var_171_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_172_string = ""; // 0x69 PushV
	var_172_string = "Neutral"; // 0x6a MovS
	func_157(var_115_object, var_172_string); // 0x6b NEW_2
	var_173_int = 532753; // 0x6d PushI
	SetMessage(var_173_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_174_int = 532754; // 0x72 PushI
	var_175_int = -1; // 0x73 PushI
	var_176_int = 34228; // 0x74 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x75 TObjFunc
	var_177_int = 532977; // 0x77 PushI
	var_178_int = -1; // 0x78 PushI
	var_179_int = 34475; // 0x79 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_2638(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0xa4e PushV
	var_43_bool = 0; // 0xa4f PushV
	var_43_bool = 0; // 0xa50 MovB
	var_44_bool = 0; // 0xa51 PushV
	var_44_bool = 0; // 0xa52 MovB
	var_45_object = var_22_object; // 0xa53 Push
	if(var_45_object == 0) goto Label_2649; // 0xa54 JumpB
	var_46_int = 4; // 0xa55 PushI
	var_47_bool = var_23_int != var_46_int; // 0xa56 Neq
	if(var_47_bool == 0) goto Label_2649; // 0xa57 JumpB
	var_44_bool = 1; // 0xa58 MovB
	
Label_2649:
	if(var_44_bool == 0) goto Label_2654; // 0xa59 JumpB
	var_48_int = 5; // 0xa5a PushI
	var_49_bool = var_23_int != var_48_int; // 0xa5b Neq
	if(var_49_bool == 0) goto Label_2654; // 0xa5c JumpB
	var_43_bool = 1; // 0xa5d MovB
	
Label_2654:
	if(var_43_bool == 0) goto Label_2701; // 0xa5e JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa5f PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xa60 PushV
	var_53_object = var_22_object; // 0xa61 Mov
	func_2424(var_53_object); // 0xa62 NEW_2
	var_51_cvector = var_52_cvector; // 0xa63 Mov
	func_2943(var_50_cvector, var_51_cvector); // 0xa65 NEW_2
	var_34_cvector = var_50_cvector; // 0xa66 Mov
	CreateVectorVector(var_35_object); // 0xa68 Func
	var_36_int = 1; // 0xa6a MovI
	
Label_2667:
	var_63_string = "hit"; // 0xa6b PushS
	var_64_int = var_63_string + var_36_int; // 0xa6c Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xa6d Func
	var_65_bool = var_37_bool == 0; // 0xa6f Not
	if(var_65_bool == 0) goto Label_2674; // 0xa70 JumpB
	goto Label_2683; // 0xa71 Jump
	
Label_2683:
	size(var_40_int); // 0xa7b ObjFunc
	var_66_int = var_40_int; // 0xa7d Push
	if(var_66_int == 0) goto Label_2700; // 0xa7e JumpB
	irand(var_41_int, var_40_int); // 0xa7f Func
	get(var_42_cvector, var_41_int); // 0xa81 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xa83 PushV
	var_67_object = var_22_object; // 0xa84 Mov
	var_68_int = var_23_int; // 0xa85 Mov
	var_69_float = var_24_float; // 0xa86 Mov
	var_70_cvector = var_42_cvector; // 0xa87 Mov
	var_71_cvector = -var_34_cvector; // 0xa88 Neg2
	func_2706(var_69_float, var_70_cvector, var_71_cvector); // 0xa89 NEW_2
	return 18; // 0xa8b Return
	
Label_2700:
	var_35_object = 0; // 0xa8c SetNull
	
Label_2701:
	var_112_object = Obj(); // 0xa8d PushV
	var_112_object = var_22_object; // 0xa8e Mov
	func_2594(var_112_object); // 0xa8f NEW_2
	return 18; // 0xa91 Return
	
Label_2674:
	var_113_int = var_39_cvector | var_34_cvector; // 0xa72 Or
	var_114_float = 0.70711; // 0xa73 PushF
	var_115_bool = var_113_int >= var_114_float; // 0xa74 GE
	if(var_115_bool == 0) goto Label_2680; // 0xa75 JumpB
	add(var_38_cvector); // 0xa76 ObjFunc
	
Label_2680:
	var_116_int = 1; // 0xa78 PushI
	var_36_int = var_36_int + var_116_int; // 0xa79 Add2
	goto Label_2667; // 0xa7a Jump
}


func_2127(var_0_object)
{
	var_145_object = Obj(); // 0x84f PushV
	var_145_object = var_0_object; // 0x850 MovT
	func_3036(var_145_object); // 0x851 NEW_2
	return 0; // 0x853 Return
}


func_592()
{
	var_101_bool = 0; // 0x250 PushV
	func_2731(var_101_bool); // 0x251 NEW_2
	var_104_bool = var_101_bool == 0; // 0x253 Not
	if(var_104_bool == 0) goto Label_600; // 0x254 JumpB
	func_3569(); // 0x256 NEW_2
	
Label_600:
	return 0; // 0x258 Return
}


func_2132(var_482_int)
{
	var_482_int = 0; // 0x854 MovI
	return 0; // 0x855 Return
}


func_1110()
{
	var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_float = 0; var_138_bool = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_float = 0; var_145_bool = 0; // 0x456 PushV
	WaitForAnimEnd(); // 0x457 Func
	var_146_bool = 0; // 0x459 PushV
	func_2731(var_146_bool); // 0x45a NEW_2
	var_147_bool = var_146_bool == 0; // 0x45c Not
	if(var_147_bool == 0) goto Label_1119; // 0x45d JumpB
	return 14; // 0x45e Return
	
Label_1119:
	var_148_int = 0; // 0x45f PushV
	func_3495(var_148_int); // 0x460 NEW_2
	var_139_int = var_148_int; // 0x461 Mov
	var_140_int = 0; // 0x463 MovI
	
Label_1124:
	var_161_bool = 0; // 0x464 PushV
	var_161_bool = 0; // 0x465 MovB
	var_162_int = 5; // 0x466 PushI
	var_163_bool = var_140_int < var_162_int; // 0x467 LT
	if(var_163_bool == 0) goto Label_1134; // 0x468 JumpB
	var_164_bool = 0; // 0x469 PushV
	func_2731(var_164_bool); // 0x46a NEW_2
	if(var_164_bool == 0) goto Label_1134; // 0x46c JumpB
	var_161_bool = 1; // 0x46d MovB
	
Label_1134:
	if(var_161_bool == 0) goto Label_1186; // 0x46e JumpB
	var_165_int = 3; // 0x46f PushI
	irand(var_141_int, var_165_int); // 0x470 Func
	var_166_int = 0; // 0x472 PushI
	var_167_bool = var_141_int == var_166_int; // 0x473 Eq
	if(var_167_bool == 0) goto Label_1158; // 0x474 JumpB
	var_168_int = var_139_int; // 0x475 Push
	if(var_168_int == 0) goto Label_1157; // 0x476 JumpB
	irand(var_142_int, var_139_int); // 0x477 Func
	var_169_string = "all"; // 0x479 PushS
	var_170_string = ""; var_171_int = 0; // 0x47a PushV
	var_171_int = var_142_int; // 0x47b Mov
	func_3488(var_170_string, var_171_int); // 0x47c NEW_2
	PlayAnimation(var_169_string, var_170_string); // 0x47e Func
	WaitForAnimEnd(var_143_bool); // 0x480 Func
	var_172_bool = var_143_bool == 0; // 0x482 Not
	if(var_172_bool == 0) goto Label_1157; // 0x483 JumpB
	goto Label_1186; // 0x484 Jump
	
Label_1186:
	ResetAAS(); // 0x4a2 Func
	return 14; // 0x4a4 Return
	
Label_1157:
	goto Label_1175; // 0x485 Jump
	
Label_1175:
	var_173_bool = 0; // 0x497 PushV
	func_1189(var_173_bool); // 0x498 NEW_2
	var_174_bool = var_173_bool == 0; // 0x49a Not
	if(var_174_bool == 0) goto Label_1181; // 0x49b JumpB
	goto Label_1186; // 0x49c Jump
	
Label_1181:
	ResetAAS(); // 0x49d Func
	var_175_int = 1; // 0x49f PushI
	var_140_int = var_140_int + var_175_int; // 0x4a0 Add2
	goto Label_1124; // 0x4a1 Jump
	
Label_1158:
	var_176_int = 1; // 0x486 PushI
	var_177_bool = var_141_int == var_176_int; // 0x487 Eq
	if(var_177_bool == 0) goto Label_1172; // 0x488 JumpB
	var_178_int = 4; // 0x489 PushI
	rand(var_144_float, var_178_int); // 0x48a Func
	var_179_int = 1; // 0x48c PushI
	var_180_int = var_144_float + var_179_int; // 0x48d Add
	Sleep(var_180_int, var_145_bool); // 0x48e Func
	var_181_bool = var_145_bool == 0; // 0x490 Not
	if(var_181_bool == 0) goto Label_1171; // 0x491 JumpB
	goto Label_1186; // 0x492 Jump
	
Label_1171:
	goto Label_1175; // 0x493 Jump
	
Label_1172:
	var_182_int = var_140_int; // 0x494 Push
	if(var_182_int == 0) goto Label_1175; // 0x495 JumpB
	goto Label_1186; // 0x496 Jump
}


func_2134()
{
	var_278_string = ""; // 0x856 PushV
	var_278_string = "attack_stay"; // 0x857 MovS
	func_2896(var_278_string); // 0x858 NEW_2
	return 0; // 0x85a Return
}


func_3158()
{
	var_157_int = 0; // 0xc56 PushV
	func_3091(var_157_int); // 0xc57 NEW_2
	var_161_int = 1; // 0xc59 PushI
	var_162_bool = var_157_int != var_161_int; // 0xc5a Neq
	if(var_162_bool == 0) goto Label_3165; // 0xc5b JumpB
	return 0; // 0xc5c Return
	
Label_3165:
	var_163_string = ""; // 0xc5d PushV
	var_163_string = "liver"; // 0xc5e MovS
	func_3141(var_163_string); // 0xc5f NEW_2
	var_174_string = ""; // 0xc61 PushV
	var_174_string = "kidney"; // 0xc62 MovS
	func_3141(var_174_string); // 0xc63 NEW_2
	var_175_string = ""; // 0xc65 PushV
	var_175_string = "heart"; // 0xc66 MovS
	func_3141(var_175_string); // 0xc67 NEW_2
	var_176_string = ""; // 0xc69 PushV
	var_176_string = "blood"; // 0xc6a MovS
	func_3141(var_176_string); // 0xc6b NEW_2
	return 0; // 0xc6d Return
}


func_2139()
{
	return 0; // 0x85c Return
}


func_2141(var_507_bool)
{
	var_507_bool = 1; // 0x85d MovB
	return 0; // 0x85e Return
}


func_2143(var_403_int)
{
	var_403_int = 1; // 0x85f MovI
	return 0; // 0x860 Return
}


func_2145(var_398_float)
{
	var_398_float = 0.5; // 0x861 MovF
	return 0; // 0x862 Return
}


func_3685(var_42_object)
{
	var_43_int = 0; var_44_object = Obj(); // 0xe66 PushV
	var_44_object = var_42_object; // 0xe67 Mov
	TaskCall(0); // 0xe68 TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0xe69 NEW_2
	TaskReturn(); // 0xe6a TaskReturn
	return 0; // 0xe6c Return
}


func_2154(var_2_object, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_bool = 0; var_164_bool = 0; // 0x86a PushV
	var_165_object = Obj(); // 0x86b PushV
	var_165_object = var_153_object; // 0x86c Mov
	func_3036(var_165_object); // 0x86d NEW_2
	var_166_int = 1; // 0x86f PushI
	var_167_int = 5; // 0x870 PushI
	SetTimer(var_166_int, var_167_int); // 0x871 Func
	CanSee(var_163_bool, var_153_object); // 0x873 Func
	var_168_bool = var_163_bool; // 0x875 Push
	if(var_168_bool == 0) goto Label_2173; // 0x876 JumpB
	var_2_object = 1; // 0x877 TMovB
	var_169_object = Obj(); // 0x878 PushV
	var_169_object = var_153_object; // 0x879 Mov
	func_2852(var_169_object); // 0x87a NEW_2
	goto Label_2174; // 0x87c Jump
	
Label_2174:
	var_176_bool = 0; var_177_object = Obj(); // 0x87e PushV
	var_177_object = var_153_object; // 0x87f Mov
	func_2439(var_176_bool, var_177_object); // 0x880 NEW_2
	if(var_176_bool == 0) goto Label_2184; // 0x882 JumpB
	var_180_object = Obj(); // 0x883 PushV
	func_2937(var_180_object); // 0x884 NEW_2
	SendPlayerEnemy(var_153_object, var_180_object); // 0x886 Func
	
Label_2184:
	var_181_bool = 0; var_182_object = Obj(); var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_bool = 0; // 0x888 PushV
	var_182_object = var_153_object; // 0x889 Mov
	var_183_float = var_154_float; // 0x88a Mov
	var_184_float = var_155_float; // 0x88b Mov
	var_185_bool = var_156_bool; // 0x88c Mov
	var_186_bool = var_157_bool; // 0x88d Mov
	func_2259(var_163_bool, var_164_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool); // 0x88e NEW_2
	var_164_bool = var_181_bool; // 0x88f Mov
	var_232_object = var_2_object; // 0x891 PushT
	if(var_232_object == 0) goto Label_2198; // 0x892 JumpB
	var_233_string = "head"; // 0x893 PushS
	UnlookAsync(var_233_string); // 0x894 Func
	
Label_2198:
	var_234_int = 1; // 0x896 PushI
	KillTimer(var_234_int); // 0x897 Func
	var_152_bool = var_164_bool; // 0x899 Mov
	return 4; // 0x89a Return
	
Label_2173:
	var_2_object = 0; // 0x87d TMovB
}


func_3182()
{
	var_112_bool = 0; var_113_bool = 0; // 0xc6e PushV
	var_114_int = 0; // 0xc6f PushI
	ClearSubContainer(var_114_int); // 0xc70 Func
	var_115_int = 0; var_116_int = 0; // 0xc72 PushV
	var_115_int = 0; // 0xc73 MovI
	var_117_int = 10; // 0xc74 PushI
	var_118_int = 0; // 0xc75 PushV
	func_3027(var_118_int); // 0xc76 NEW_2
	var_124_int = 10; // 0xc78 PushI
	var_125_float = var_118_int * var_124_int; // 0xc79 Mult
	var_116_int = var_117_int + var_125_float; // 0xc7a Add2
	func_3110(var_115_int, var_116_int); // 0xc7b NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0xc7d PushV
	var_143_string = "hook"; // 0xc7e MovS
	var_144_int = 1; // 0xc7f MovI
	var_145_int = 4; // 0xc80 MovI
	func_2870(var_143_string, var_144_int, var_145_int); // 0xc81 NEW_2
	var_154_string = ""; var_155_int = 0; var_156_int = 0; // 0xc83 PushV
	var_154_string = "watch"; // 0xc84 MovS
	var_155_int = 1; // 0xc85 MovI
	var_156_int = 10; // 0xc86 MovI
	func_2870(var_154_string, var_155_int, var_156_int); // 0xc87 NEW_2
	return 2; // 0xc89 Return
}


func_3210(var_20_bool)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0xc8a PushV
	var_27_int = 0; // 0xc8b PushI
	ClearSubContainer(var_27_int); // 0xc8c Func
	var_28_int = 0; // 0xc8e PushV
	func_3027(var_28_int); // 0xc8f NEW_2
	var_26_int = var_28_int; // 0xc90 Mov
	var_34_bool = var_20_bool; // 0xc92 Push
	if(var_34_bool == 0) goto Label_3264; // 0xc93 JumpB
	var_35_string = ""; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0xc94 PushV
	var_35_string = "alpha_pills"; // 0xc95 MovS
	var_36_int = 1; // 0xc96 MovI
	var_37_int = 2; // 0xc97 MovI
	var_38_int = 4; // 0xc98 MovI
	func_2881(var_35_string, var_36_int, var_37_int, var_38_int); // 0xc99 NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0xc9b PushV
	var_51_string = "meradorm"; // 0xc9c MovS
	var_52_int = 2; // 0xc9d MovI
	var_53_int = 3; // 0xc9e MovI
	var_54_int = 3; // 0xc9f MovI
	func_2881(var_51_string, var_52_int, var_53_int, var_54_int); // 0xca0 NEW_2
	var_55_int = 3; // 0xca2 PushI
	var_56_bool = var_26_int >= var_55_int; // 0xca3 GE
	if(var_56_bool == 0) goto Label_3243; // 0xca4 JumpB
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0xca5 PushV
	var_57_string = "beta_pills"; // 0xca6 MovS
	var_58_int = 1; // 0xca7 MovI
	var_59_int = 4; // 0xca8 MovI
	func_2870(var_57_string, var_58_int, var_59_int); // 0xca9 NEW_2
	
Label_3243:
	var_66_int = 8; // 0xcab PushI
	var_67_bool = var_26_int >= var_66_int; // 0xcac GE
	if(var_67_bool == 0) goto Label_3254; // 0xcad JumpB
	var_68_string = ""; var_69_int = 0; var_70_int = 0; var_71_int = 0; // 0xcae PushV
	var_68_string = "monomicin"; // 0xcaf MovS
	var_69_int = 1; // 0xcb0 MovI
	var_70_int = 2; // 0xcb1 MovI
	var_71_int = 2; // 0xcb2 MovI
	func_2881(var_68_string, var_69_int, var_70_int, var_71_int); // 0xcb3 NEW_2
	goto Label_3263; // 0xcb5 Jump
	
Label_3263:
	goto Label_3309; // 0xcbf Jump
	
Label_3309:
	return 6; // 0xced Return
	
Label_3254:
	var_72_int = 4; // 0xcb6 PushI
	var_73_bool = var_26_int >= var_72_int; // 0xcb7 GE
	if(var_73_bool == 0) goto Label_3263; // 0xcb8 JumpB
	var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0xcb9 PushV
	var_74_string = "monomicin"; // 0xcba MovS
	var_75_int = 1; // 0xcbb MovI
	var_76_int = 2; // 0xcbc MovI
	func_2870(var_74_string, var_75_int, var_76_int); // 0xcbd NEW_2
	
Label_3264:
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0xcc0 PushV
	var_77_string = "lockpick"; // 0xcc1 MovS
	var_78_int = 1; // 0xcc2 MovI
	var_79_int = 4; // 0xcc3 MovI
	func_2870(var_77_string, var_78_int, var_79_int); // 0xcc4 NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0xcc6 PushV
	var_80_string = "rifle_ammo"; // 0xcc7 MovS
	var_81_int = 1; // 0xcc8 MovI
	var_82_int = 2; // 0xcc9 MovI
	func_2870(var_80_string, var_81_int, var_82_int); // 0xcca NEW_2
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0xccc PushV
	var_83_string = "revolver_ammo"; // 0xccd MovS
	var_84_int = 1; // 0xcce MovI
	var_85_int = 2; // 0xccf MovI
	func_2870(var_83_string, var_84_int, var_85_int); // 0xcd0 NEW_2
	var_86_string = ""; var_87_int = 0; var_88_int = 0; var_89_int = 0; // 0xcd2 PushV
	var_86_string = "samopal_ammo"; // 0xcd3 MovS
	var_87_int = 1; // 0xcd4 MovI
	var_88_int = 2; // 0xcd5 MovI
	var_89_int = 2; // 0xcd6 MovI
	func_2881(var_86_string, var_87_int, var_88_int, var_89_int); // 0xcd7 NEW_2
	var_90_int = 8; // 0xcd9 PushI
	var_91_bool = var_26_int >= var_90_int; // 0xcda GE
	if(var_91_bool == 0) goto Label_3300; // 0xcdb JumpB
	var_92_string = ""; var_93_int = 0; var_94_int = 0; var_95_int = 0; // 0xcdc PushV
	var_92_string = "monomicin"; // 0xcdd MovS
	var_93_int = 1; // 0xcde MovI
	var_94_int = 2; // 0xcdf MovI
	var_95_int = 2; // 0xce0 MovI
	func_2881(var_92_string, var_93_int, var_94_int, var_95_int); // 0xce1 NEW_2
	goto Label_3309; // 0xce3 Jump
	
Label_3300:
	var_96_int = 4; // 0xce4 PushI
	var_97_bool = var_26_int >= var_96_int; // 0xce5 GE
	if(var_97_bool == 0) goto Label_3309; // 0xce6 JumpB
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0xce7 PushV
	var_98_string = "monomicin"; // 0xce8 MovS
	var_99_int = 1; // 0xce9 MovI
	var_100_int = 2; // 0xcea MovI
	func_2870(var_98_string, var_99_int, var_100_int); // 0xceb NEW_2
}


func_2706(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xa92 PushV
	GetScene(var_31_object); // 0xa93 Func
	var_33_string = "scripted"; // 0xa95 PushS
	var_34_string = "blood_dir.xml"; // 0xa96 PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xa97 Func
	var_35_object = Obj(); // 0xa99 PushV
	var_35_object = var_24_object; // 0xa9a Mov
	func_2594(var_35_object); // 0xa9b NEW_2
	return 4; // 0xa9d Return
}


func_157(var_2_object, var_133_string)
{
	var_134_bool = 0; // 0x9e PushV
	func_3624(var_134_bool); // 0x9f NEW_2
	var_135_bool = var_134_bool == 0; // 0xa1 Not
	if(var_135_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_136_bool = var_133_string == var_2_object; // 0xa4 Eq
	if(var_136_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_137_string = ""; var_138_bool = 0; // 0xa7 PushV
	var_137_string = var_133_string; // 0xa8 Mov
	var_139_string = ""; // 0xa9 PushS
	var_140_bool = var_133_string == var_139_string; // 0xaa Eq
	if(var_140_bool == 0) goto Label_174; // 0xab JumpB
	var_138_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_2837(var_137_string, var_138_bool); // 0xaf NEW_2
	var_2_object = var_133_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_138_bool = 1; // 0xae MovB
}


func_2720()
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0xaa0 PushV
	GetPosition(var_98_cvector); // 0xaa1 ObjFunc
	GetPosition(var_99_cvector); // 0xaa3 Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0xaa5 Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0xaa6 PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0xaa7 PushE
	RotateAsync(var_101_float, var_102_float); // 0xaa8 Func
	return 6; // 0xaaa Return
}


func_1189(var_173_bool)
{
	var_173_bool = 1; // 0x4a5 MovB
	return 0; // 0x4a6 Return
}


func_1191()
{
	StopAnimation(); // 0x4a7 Func
	StopGroup0(); // 0x4a9 Func
	return 0; // 0x4ab Return
}


func_2217(var_2_object)
{
	var_19_int = 1; // 0x8a9 PushI
	KillTimer(var_19_int); // 0x8aa Func
	var_20_object = var_2_object; // 0x8ac PushT
	if(var_20_object == 0) goto Label_2226; // 0x8ad JumpB
	var_2_object = 0; // 0x8ae TMovB
	var_21_string = "head"; // 0x8af PushS
	UnlookAsync(var_21_string); // 0x8b0 Func
	
Label_2226:
	func_2383(var_18_object); // 0x8b3 NEW_2
	return 0; // 0x8b5 Return
}


func_2731(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0; // 0xaab PushV
	IsLoaded(var_103_bool); // 0xaac Func
	var_101_bool = var_103_bool; // 0xaae Mov
	return 2; // 0xaaf Return
}


func_1196(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0x4ac PushV
	var_0_object = var_61_object; // 0x4ad TMov
	func_1247(var_68_bool); // 0x4af NEW_2
	GetDirection(var_66_cvector); // 0x4b1 Func
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0x4b3 PushV
	var_77_object = var_0_object; // 0x4b4 MovT
	func_2424(var_77_object); // 0x4b5 NEW_2
	var_67_cvector = var_76_cvector; // 0x4b6 Mov
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x4b8 PushV
	var_83_cvector = var_66_cvector; // 0x4b9 Mov
	var_84_cvector = var_67_cvector; // 0x4ba Mov
	func_2995(var_82_float, var_83_cvector, var_84_cvector); // 0x4bb NEW_2
	var_106_int = 0; // 0x4bd PushI
	var_107_bool = var_82_float < var_106_int; // 0x4be LT
	if(var_107_bool == 0) goto Label_1222; // 0x4bf JumpB
	var_108_object = Obj(); // 0x4c0 PushV
	var_108_object = var_0_object; // 0x4c1 MovT
	func_2720(); // 0x4c2 NEW_2
	var_68_bool = 1; // 0x4c4 MovB
	goto Label_1225; // 0x4c5 Jump
	
Label_1225:
	var_117_bool = var_68_bool; // 0x4c9 Push
	if(var_117_bool == 0) goto Label_1241; // 0x4ca JumpB
	var_118_object = Obj(); // 0x4cb PushV
	var_118_object = var_0_object; // 0x4cc MovT
	func_2720(); // 0x4cd NEW_2
	var_119_int = 111; // 0x4cf PushI
	var_120_float = 0.5; // 0x4d0 PushF
	SetTimer(var_119_int, var_120_float); // 0x4d1 Func
	var_121_float = 5.0; // 0x4d3 PushF
	Sleep(var_121_float); // 0x4d4 Func
	var_122_int = 111; // 0x4d6 PushI
	KillTimer(var_122_int); // 0x4d7 Func
	
Label_1241:
	StopAsync(); // 0x4d9 Func
	var_123_string = "head"; // 0x4db PushS
	UnlookAsync(var_123_string); // 0x4dc Func
	return 6; // 0x4de Return
	
Label_1222:
	var_124_float = 1.5; // 0x4c6 PushF
	Sleep(var_124_float, var_68_bool); // 0x4c7 Func
}


func_2736(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0xab0 PushV
	GetPosition(var_67_cvector); // 0xab1 ObjFunc
	GetEyesHeight(var_66_float); // 0xab3 ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0xab5 PushE
	var_75_float = var_75_float + var_66_float; // 0xab6 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0xab7 PopE
	GetPosition(var_68_cvector); // 0xab8 Func
	GetEyesHeight(var_66_float); // 0xaba Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0xabc PushE
	var_76_float = var_76_float + var_66_float; // 0xabd Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0xabe PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0xabf Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0xac0 PushE
	var_77_float = 0; // 0xac1 MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0xac2 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0xac3 Or
	var_79_float = sqrt(var_78_int); // 0xac4 Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0xac5 Div2
	var_70_cvector = -var_69_cvector; // 0xac6 Neg2
	var_80_float = var_69_cvector * var_56_float; // 0xac7 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0xac8 PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0xac9 PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0xaca Xor2
	func_2943(var_81_cvector, var_82_cvector); // 0xacb NEW_2
	var_89_int = 25; // 0xacd PushI
	var_90_float = var_81_cvector * var_89_int; // 0xace Mult
	var_91_int = var_80_float + var_90_float; // 0xacf Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0xad0 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0xad1 Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0xad2 Add2
	IsOverrideActive(var_73_bool); // 0xad3 Func
	var_93_bool = var_73_bool; // 0xad5 Push
	if(var_93_bool == 0) goto Label_2777; // 0xad6 JumpB
	var_54_bool = 0; // 0xad7 MovB
	return 18; // 0xad8 Return
	
Label_2777:
	StopWorld(); // 0xad9 Func
	CameraTransit(var_72_cvector, var_70_cvector); // 0xadb Func
	var_94_float = GetByIndex(var_71_cvector, 0); // 0xadd PushE
	var_95_float = GetByIndex(var_71_cvector, 2); // 0xade PushE
	Rotate(var_94_float, var_95_float); // 0xadf Func
	var_96_bool = 0; // 0xae1 PushV
	func_3624(var_96_bool); // 0xae2 NEW_2
	if(var_96_bool == 0) goto Label_2790; // 0xae4 JumpB
	goto Label_2798; // 0xae5 Jump
	
Label_2798:
	CameraWaitForPlayFinish(); // 0xaee Func
	ResumeWorld(); // 0xaf0 Func
	var_54_bool = 1; // 0xaf2 MovB
	return 18; // 0xaf3 Return
	
Label_2790:
	var_97_string = "head"; // 0xae6 PushS
	HasAnimationTrack(var_74_bool, var_97_string); // 0xae7 Func
	var_98_bool = var_74_bool; // 0xae9 Push
	if(var_98_bool == 0) goto Label_2798; // 0xaea JumpB
	var_99_string = "head"; // 0xaeb PushS
	LookAsyncCamera(var_99_string); // 0xaec Func
}


func_1714(var_1_object, var_2_object, var_4_bool)
{
	var_106_bool = 0; var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_bool = 0; var_111_cvector = CVector(0,0,0); // 0x6b2 PushV
	var_1_object = 0; // 0x6b3 TMovI
	
Label_1716:
	var_112_string = "all"; // 0x6b4 PushS
	var_113_string = "attack_begin"; // 0x6b5 PushS
	var_114_int = 1; // 0x6b6 PushI
	var_115_int = var_1_object + var_114_int; // 0x6b7 Add
	var_116_int = var_113_string + var_115_int; // 0x6b8 Add
	HasAnimation(var_109_bool, var_112_string, var_116_int); // 0x6b9 Func
	var_117_bool = var_109_bool == 0; // 0x6bb Not
	if(var_117_bool == 0) goto Label_1726; // 0x6bc JumpB
	goto Label_1729; // 0x6bd Jump
	
Label_1729:
	var_2_object = 0; // 0x6c1 TMovI
	
Label_1730:
	var_118_string = "attack"; // 0x6c2 PushS
	var_119_int = 1; // 0x6c3 PushI
	var_120_int = var_2_object + var_119_int; // 0x6c4 Add
	var_121_int = var_118_string + var_120_int; // 0x6c5 Add
	IsExisting3DSound(var_110_bool, var_121_int); // 0x6c6 Func
	var_122_bool = var_110_bool == 0; // 0x6c8 Not
	if(var_122_bool == 0) goto Label_1739; // 0x6c9 JumpB
	goto Label_1742; // 0x6ca Jump
	
Label_1742:
	var_123_string = "all"; // 0x6ce PushS
	var_124_string = "bjump"; // 0x6cf PushS
	GetAnimationOffset(var_111_cvector, var_123_string, var_124_string); // 0x6d0 Func
	var_125_float = GetByIndex(var_111_cvector, 2); // 0x6d2 PushE
	var_4_bool = -var_125_float; // 0x6d3 Neg2
	return 6; // 0x6d4 Return
	
Label_1739:
	var_126_int = 1; // 0x6cb PushI
	var_2_object = var_2_object + var_126_int; // 0x6cc Add2
	goto Label_1730; // 0x6cd Jump
	
Label_1726:
	var_127_int = 1; // 0x6be PushI
	var_1_object = var_1_object + var_127_int; // 0x6bf Add2
	goto Label_1716; // 0x6c0 Jump
}


func_2259(var_0_object, var_1_object, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool)
{
	var_187_bool = 0; var_188_bool = 0; var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_bool = 0; var_196_bool = 0; var_197_object = Obj(); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_object = Obj(); // 0x8d3 PushV
	var_0_object = 0; // 0x8d4 TMovB
	var_1_object = var_182_object; // 0x8d5 TMov
	var_196_bool = var_186_bool; // 0x8d6 Mov
	
Label_2263:
	var_203_bool = 0; var_204_object = Obj(); // 0x8d7 PushV
	var_204_object = var_182_object; // 0x8d8 Mov
	func_2399(var_203_bool, var_204_object); // 0x8d9 NEW_2
	var_207_bool = var_203_bool == 0; // 0x8db Not
	if(var_207_bool == 0) goto Label_2271; // 0x8dc JumpB
	var_181_bool = 0; // 0x8dd MovB
	return 16; // 0x8de Return
	
Label_2271:
	GetPosition(var_198_cvector); // 0x8df ObjFunc
	GetPosition(var_199_cvector); // 0x8e1 Func
	var_200_cvector = var_198_cvector - var_199_cvector; // 0x8e3 Sub2
	var_201_float = var_200_cvector | var_200_cvector; // 0x8e4 Or2
	var_208_bool = 0; // 0x8e5 PushV
	var_208_bool = 0; // 0x8e6 MovB
	var_209_int = 0; // 0x8e7 PushI
	var_210_bool = var_184_float > var_209_int; // 0x8e8 GT
	if(var_210_bool == 0) goto Label_2286; // 0x8e9 JumpB
	var_211_float = var_184_float * var_184_float; // 0x8ea Mult
	var_212_bool = var_201_float > var_211_float; // 0x8eb GT
	if(var_212_bool == 0) goto Label_2286; // 0x8ec JumpB
	var_208_bool = 1; // 0x8ed MovB
	
Label_2286:
	if(var_208_bool == 0) goto Label_2291; // 0x8ee JumpB
	Stop(); // 0x8ef Func
	var_181_bool = 0; // 0x8f1 MovB
	return 16; // 0x8f2 Return
	
Label_2291:
	var_213_float = var_183_float * var_183_float; // 0x8f3 Mult
	var_214_bool = var_201_float > var_213_float; // 0x8f4 GT
	if(var_214_bool == 0) goto Label_2353; // 0x8f5 JumpB
	GetPFPosition(var_198_cvector); // 0x8f6 ObjFunc
	FindPathTo(var_202_object, var_198_cvector); // 0x8f8 Func
	var_215_bool = var_202_object != 0; // 0x8fa NullNeq
	if(var_215_bool == 0) goto Label_2302; // 0x8fb JumpB
	var_197_object = var_202_object; // 0x8fc Mov
	var_202_object = 0; // 0x8fd SetNull
	
Label_2302:
	var_216_bool = var_197_object != 0; // 0x8fe NullNeq
	if(var_216_bool == 0) goto Label_2335; // 0x8ff JumpB
	var_217_bool = var_196_bool; // 0x900 Push
	if(var_217_bool == 0) goto Label_2312; // 0x901 JumpB
	var_196_bool = 0; // 0x902 MovB
	RotatePath(var_197_object, var_195_bool); // 0x903 Func
	var_218_bool = var_195_bool == 0; // 0x905 Not
	if(var_218_bool == 0) goto Label_2312; // 0x906 JumpB
	goto Label_2359; // 0x907 Jump
	
Label_2359:
	var_181_bool = !var_0_object; // 0x937 Not2
	return 16; // 0x938 Return
	
Label_2312:
	var_219_int = 0; // 0x908 PushI
	var_220_float = 0.3; // 0x909 PushF
	SetTimer(var_219_int, var_220_float); // 0x90a Func
	var_221_string = ""; // 0x90c PushV
	func_2406(var_221_string); // 0x90d NEW_2
	var_222_string = ""; // 0x90f PushV
	func_2408(var_222_string); // 0x910 NEW_2
	FollowPath(var_197_object, var_185_bool, var_195_bool, var_221_string, var_222_string); // 0x912 Func
	var_223_bool = var_195_bool == 0; // 0x914 Not
	if(var_223_bool == 0) goto Label_2333; // 0x915 JumpB
	var_224_object = var_0_object; // 0x916 PushT
	if(var_224_object == 0) goto Label_2331; // 0x917 JumpB
	var_197_object = 0; // 0x918 SetNull
	goto Label_2359; // 0x919 Jump
	
Label_2331:
	goto Label_2358; // 0x91b Jump
	
Label_2358:
	goto Label_2263; // 0x936 Jump
	
Label_2333:
	var_197_object = 0; // 0x91d SetNull
	goto Label_2351; // 0x91e Jump
	
Label_2351:
	var_202_object = 0; // 0x92f SetNull
	goto Label_2357; // 0x930 Jump
	
Label_2357:
	var_197_object = 0; // 0x935 SetNull
	
Label_2335:
	var_225_int = 0; // 0x91f PushI
	KillTimer(var_225_int); // 0x920 Func
	var_226_float = 0.5; // 0x922 PushF
	Sleep(var_226_float, var_195_bool); // 0x923 Func
	var_227_bool = var_195_bool == 0; // 0x925 Not
	if(var_227_bool == 0) goto Label_2347; // 0x926 JumpB
	var_228_object = var_0_object; // 0x927 PushT
	if(var_228_object == 0) goto Label_2347; // 0x928 JumpB
	var_197_object = 0; // 0x929 SetNull
	goto Label_2359; // 0x92a Jump
	
Label_2347:
	var_229_int = 0; // 0x92b PushI
	var_230_float = 0.3; // 0x92c PushF
	SetTimer(var_229_int, var_230_float); // 0x92d Func
	
Label_2353:
	var_231_int = 0; // 0x931 PushI
	KillTimer(var_231_int); // 0x932 Func
	goto Label_2359; // 0x934 Jump
}


func_1749(var_0_object, var_407_float, var_408_int)
{
	var_409_object = Obj(); var_410_float = 0; var_411_float = 0; var_412_object = Obj(); var_413_float = 0; var_414_float = 0; // 0x6d5 PushV
	var_415_float = 0.9; // 0x6d6 PushF
	var_416_float = var_407_float * var_415_float; // 0x6d7 Mult
	GetVictim(var_416_float, var_412_object); // 0x6d8 Func
	ReportAttack(var_0_object); // 0x6da Func
	var_417_bool = var_412_object == var_0_object; // 0x6dc Eq
	if(var_417_bool == 0) goto Label_1786; // 0x6dd JumpB
	var_418_float = 0; var_419_object = Obj(); var_420_int = 0; // 0x6de PushV
	var_419_object = var_412_object; // 0x6df Mov
	var_420_int = var_408_int; // 0x6e0 Mov
	func_1479(var_420_int); // 0x6e1 NEW_2
	var_413_float = var_418_float; // 0x6e2 Mov
	var_421_float = 0; var_422_object = Obj(); var_423_float = 0; var_424_int = 0; // 0x6e4 PushV
	var_422_object = var_412_object; // 0x6e5 Mov
	var_423_float = var_413_float; // 0x6e6 Mov
	var_425_int = 0; var_426_object = Obj(); var_427_int = 0; // 0x6e7 PushV
	var_426_object = var_412_object; // 0x6e8 Mov
	var_427_int = var_408_int; // 0x6e9 Mov
	func_1482(var_427_int); // 0x6ea NEW_2
	var_424_int = var_425_int; // 0x6eb Mov
	func_2456(var_421_float, var_422_object, var_423_float, var_424_int); // 0x6ed NEW_2
	var_414_float = var_421_float; // 0x6ee Mov
	var_482_int = 0; // 0x6f0 PushV
	func_2132(var_482_int); // 0x6f1 NEW_2
	ReportHit(var_0_object, var_482_int, var_414_float, var_413_float); // 0x6f3 Func
	var_483_object = Obj(); var_484_float = 0; // 0x6f5 PushV
	var_483_object = var_412_object; // 0x6f6 Mov
	var_484_float = var_414_float; // 0x6f7 Mov
	func_2139(); // 0x6f8 NEW_2
	
Label_1786:
	return 6; // 0x6fa Return
}


func_1247(var_0_object)
{
	var_69_object = Obj(); // 0x4df PushV
	var_69_object = var_0_object; // 0x4e0 MovT
	func_2852(var_69_object); // 0x4e1 NEW_2
	return 0; // 0x4e3 Return
}


func_3310(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0; // 0xcee PushV
	GetInvItemByName(var_139_int, var_137_string); // 0xcef Func
	var_136_int = var_139_int; // 0xcf1 Mov
	return 2; // 0xcf2 Return
}


func_3315(var_19_object)
{
	var_20_object = Obj(); // 0xcf4 PushV
	var_20_object = var_19_object; // 0xcf5 Mov
	TaskCall(2); // 0xcf6 TaskCall
	func_421(var_20_object); // 0xcf7 NEW_2
	TaskReturn(); // 0xcf8 TaskReturn
	return 0; // 0xcfa Return
}


func_2804()
{
	var_182_bool = 0; var_183_bool = 0; // 0xaf4 PushV
	CameraSwitchToNormal(); // 0xaf5 Func
	var_184_bool = 0; // 0xaf7 PushV
	func_3624(var_184_bool); // 0xaf8 NEW_2
	if(var_184_bool == 0) goto Label_2812; // 0xafa JumpB
	goto Label_2820; // 0xafb Jump
	
Label_2820:
	return 2; // 0xb04 Return
	
Label_2812:
	var_185_string = "head"; // 0xafc PushS
	HasAnimationTrack(var_183_bool, var_185_string); // 0xafd Func
	var_186_bool = var_183_bool; // 0xaff Push
	if(var_186_bool == 0) goto Label_2820; // 0xb00 JumpB
	var_187_string = "head"; // 0xb01 PushS
	UnlookAsync(var_187_string); // 0xb02 Func
}


func_1788(var_0_object, var_370_bool, var_371_float)
{
	var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = ""; var_376_int = 0; var_377_bool = 0; var_378_int = 0; var_379_string = ""; // 0x6fc PushV
	func_2127(var_379_string); // 0x6fe NEW_2
	irand(var_376_int, var_379_string); // 0x700 Func
	var_380_int = 1; // 0x702 PushI
	var_376_int = var_376_int + var_380_int; // 0x703 Add2
	Face(var_0_object); // 0x704 Func
	var_381_bool = 1; // 0x706 PushB
	SetAttackState(var_381_bool); // 0x707 Func
	func_3045(); // 0x70a NEW_2
	var_386_string = "all"; // 0x70c PushS
	var_387_string = "attack_begin"; // 0x70d PushS
	var_388_int = var_387_string + var_376_int; // 0x70e Add
	PlayAnimation(var_386_string, var_388_int); // 0x70f Func
	WaitForAnimEnd(); // 0x711 Func
	func_2095(var_378_int, var_379_string); // 0x714 NEW_2
	var_404_bool = 0; var_405_object = Obj(); // 0x716 PushV
	var_405_object = var_0_object; // 0x717 MovT
	func_2570(var_404_bool, var_405_object); // 0x718 NEW_2
	var_406_bool = var_404_bool == 0; // 0x71a Not
	if(var_406_bool == 0) goto Label_1824; // 0x71b JumpB
	StopAsync(); // 0x71c Func
	var_370_bool = 0; // 0x71e MovB
	return 8; // 0x71f Return
	
Label_1824:
	var_407_float = 0; var_408_int = 0; // 0x720 PushV
	var_407_float = var_371_float; // 0x721 Mov
	var_408_int = var_376_int; // 0x722 Mov
	func_1749(var_379_string, var_407_float, var_408_int); // 0x723 NEW_2
	var_485_string = "all"; // 0x725 PushS
	var_486_string = "attack_middle"; // 0x726 PushS
	var_487_int = var_486_string + var_376_int; // 0x727 Add
	HasAnimation(var_377_bool, var_485_string, var_487_int); // 0x728 Func
	var_488_bool = var_377_bool; // 0x72a Push
	if(var_488_bool == 0) goto Label_1905; // 0x72b JumpB
	func_3045(); // 0x72d NEW_2
	var_489_string = "all"; // 0x72f PushS
	var_490_string = "attack_middle"; // 0x730 PushS
	var_491_int = var_490_string + var_376_int; // 0x731 Add
	PlayAnimation(var_489_string, var_491_int); // 0x732 Func
	WaitForAnimEnd(); // 0x734 Func
	func_2127(var_379_string); // 0x737 NEW_2
	var_492_bool = 0; var_493_object = Obj(); // 0x739 PushV
	var_493_object = var_0_object; // 0x73a MovT
	func_2570(var_492_bool, var_493_object); // 0x73b NEW_2
	var_494_bool = var_492_bool == 0; // 0x73d Not
	if(var_494_bool == 0) goto Label_1859; // 0x73e JumpB
	StopAsync(); // 0x73f Func
	var_370_bool = 0; // 0x741 MovB
	return 8; // 0x742 Return
	
Label_1859:
	var_495_float = 0; var_496_int = 0; // 0x743 PushV
	var_495_float = var_371_float; // 0x744 Mov
	var_496_int = var_376_int; // 0x745 Mov
	func_1749(var_379_string, var_495_float, var_496_int); // 0x746 NEW_2
	var_378_int = 1; // 0x748 MovI
	
Label_1865:
	var_497_string = "attack_middle"; // 0x749 PushS
	var_498_int = var_497_string + var_376_int; // 0x74a Add
	var_499_string = "_"; // 0x74b PushS
	var_500_int = var_498_int + var_499_string; // 0x74c Add
	var_379_string = var_500_int + var_378_int; // 0x74d Add2
	var_501_string = "all"; // 0x74e PushS
	HasAnimation(var_377_bool, var_501_string, var_379_string); // 0x74f Func
	var_502_bool = var_377_bool == 0; // 0x751 Not
	if(var_502_bool == 0) goto Label_1876; // 0x752 JumpB
	goto Label_1905; // 0x753 Jump
	
Label_1905:
	var_503_bool = 0; // 0x771 PushB
	SetAttackState(var_503_bool); // 0x772 Func
	var_504_string = "all"; // 0x774 PushS
	var_505_string = "attack_end"; // 0x775 PushS
	var_506_int = var_505_string + var_376_int; // 0x776 Add
	PlayAnimation(var_504_string, var_506_int); // 0x777 Func
	var_507_bool = 0; // 0x779 PushV
	func_2141(var_507_bool); // 0x77a NEW_2
	if(var_507_bool == 0) goto Label_1923; // 0x77c JumpB
	var_508_bool = 0; var_509_float = 0; // 0x77d PushV
	var_509_float = 0.75; // 0x77e MovF
	func_1925(var_508_bool, var_509_float); // 0x77f NEW_2
	StopAsync(); // 0x781 Func
	
Label_1923:
	var_370_bool = 1; // 0x783 MovB
	return 8; // 0x784 Return
	
Label_1876:
	func_3045(); // 0x755 NEW_2
	var_517_string = "all"; // 0x757 PushS
	PlayAnimation(var_517_string, var_379_string); // 0x758 Func
	WaitForAnimEnd(); // 0x75a Func
	func_2127(var_379_string); // 0x75d NEW_2
	var_518_bool = 0; var_519_object = Obj(); // 0x75f PushV
	var_519_object = var_0_object; // 0x760 MovT
	func_2570(var_518_bool, var_519_object); // 0x761 NEW_2
	var_520_bool = var_518_bool == 0; // 0x763 Not
	if(var_520_bool == 0) goto Label_1897; // 0x764 JumpB
	StopAsync(); // 0x765 Func
	var_370_bool = 0; // 0x767 MovB
	return 8; // 0x768 Return
	
Label_1897:
	var_521_float = 0; var_522_int = 0; // 0x769 PushV
	var_521_float = var_371_float; // 0x76a Mov
	var_522_int = var_376_int; // 0x76b Mov
	func_1749(var_379_string, var_521_float, var_522_int); // 0x76c NEW_2
	var_523_int = 1; // 0x76e PushI
	var_378_int = var_378_int + var_523_int; // 0x76f Add2
	goto Label_1865; // 0x770 Jump
}


func_2821(var_156_string)
{
	var_157_bool = 0; var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_float = 0; var_162_float = 0; // 0xb05 PushV
	lshHasAnimation(var_160_bool, var_156_string); // 0xb06 Func
	var_163_bool = var_160_bool; // 0xb08 Push
	if(var_163_bool == 0) goto Label_2832; // 0xb09 JumpB
	lshGetAnimTimes(var_156_string, var_161_float, var_162_float); // 0xb0a Func
	var_164_bool = 0; // 0xb0c PushB
	lshPlayAnimation(var_161_float, var_162_float, var_164_bool); // 0xb0d Func
	goto Label_2836; // 0xb0f Jump
	
Label_2836:
	return 6; // 0xb14 Return
	
Label_2832:
	var_165_string = "Can't find lsh animation : "; // 0xb10 PushS
	var_166_int = var_165_string + var_156_string; // 0xb11 Add
	Trace(var_166_int); // 0xb12 Func
}


func_788(var_2_object)
{
	var_19_int = 110; // 0x314 PushI
	KillTimer(var_19_int); // 0x315 Func
	var_2_object = 0; // 0x317 TMovB
	func_924(var_17_object, var_18_bool); // 0x319 NEW_2
	return 0; // 0x31b Return
}


func_2837(var_137_string, var_138_bool)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0xb15 PushV
	lshHasAnimation(var_144_bool, var_137_string); // 0xb16 Func
	var_147_bool = var_144_bool; // 0xb18 Push
	if(var_147_bool == 0) goto Label_2847; // 0xb19 JumpB
	lshGetAnimTimes(var_137_string, var_145_float, var_146_float); // 0xb1a Func
	lshPlayAnimation(var_145_float, var_146_float, var_138_bool); // 0xb1c Func
	goto Label_2851; // 0xb1e Jump
	
Label_2851:
	return 6; // 0xb23 Return
	
Label_2847:
	var_148_string = "Can't find lsh animation : "; // 0xb1f PushS
	var_149_int = var_148_string + var_137_string; // 0xb20 Add
	Trace(var_149_int); // 0xb21 Func
}


func_796(var_2_object)
{
	var_68_int = 110; // 0x31c PushI
	KillTimer(var_68_int); // 0x31d Func
	var_2_object = 0; // 0x31f TMovB
	func_931(var_22_bool, var_23_int); // 0x321 NEW_2
	return 0; // 0x323 Return
}


func_3360(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0xd21 PushS
	var_26_bool = var_24_string == var_25_string; // 0xd22 Eq
	if(var_26_bool == 0) goto Label_3371; // 0xd23 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd24 PushV
	var_28_object = var_23_object; // 0xd25 Mov
	func_3575(var_28_object); // 0xd26 NEW_2
	var_22_bool = var_27_bool; // 0xd27 Mov
	return 0; // 0xd29 Return
	
Label_3371:
	var_29_string = "player_shot"; // 0xd2b PushS
	var_30_bool = var_24_string == var_29_string; // 0xd2c Eq
	if(var_30_bool == 0) goto Label_3381; // 0xd2d JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xd2e PushV
	var_32_object = var_23_object; // 0xd2f Mov
	func_3580(var_31_bool, var_32_object); // 0xd30 NEW_2
	var_22_bool = var_31_bool; // 0xd31 Mov
	return 0; // 0xd33 Return
	
Label_3381:
	var_46_string = "battle"; // 0xd35 PushS
	var_47_bool = var_24_string == var_46_string; // 0xd36 Eq
	if(var_47_bool == 0) goto Label_3390; // 0xd37 JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0xd38 PushV
	var_49_object = var_23_object; // 0xd39 Mov
	func_3601(var_49_object); // 0xd3a NEW_2
	var_22_bool = var_48_bool; // 0xd3b Mov
	return 0; // 0xd3d Return
	
Label_3390:
	var_22_bool = 0; // 0xd3e MovB
	return 0; // 0xd3f Return
}


func_2852(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xb24 PushV
	GetEyesHeight(var_25_float); // 0xb25 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xb27 MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xb28 PushE
	var_27_float = var_25_float; // 0xb29 Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xb2a PopE
	var_28_string = "head"; // 0xb2b PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xb2c Func
	return 4; // 0xb2e Return
}


func_813(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x32d PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x32e PushV
	var_25_object = var_19_object; // 0x32f Mov
	func_2570(var_24_bool, var_25_object); // 0x330 NEW_2
	var_58_bool = var_24_bool == 0; // 0x332 Not
	if(var_58_bool == 0) goto Label_821; // 0x333 JumpB
	return 4; // 0x334 Return
	
Label_821:
	var_59_object = var_2_object; // 0x335 PushT
	if(var_59_object == 0) goto Label_824; // 0x336 JumpB
	return 4; // 0x337 Return
	
Label_824:
	IsPlayerActor(var_19_object, var_22_bool); // 0x338 Func
	var_60_bool = var_22_bool == 0; // 0x33a Not
	if(var_60_bool == 0) goto Label_829; // 0x33b JumpB
	return 4; // 0x33c Return
	
Label_829:
	var_61_int = 0; var_62_object = Obj(); // 0x33d PushV
	var_62_object = var_19_object; // 0x33e Mov
	func_3512(var_62_object); // 0x33f NEW_2
	var_23_int = var_61_int; // 0x340 Mov
	var_64_int = 0; // 0x342 PushI
	var_65_bool = var_23_int > var_64_int; // 0x343 GT
	if(var_65_bool == 0) goto Label_852; // 0x344 JumpB
	var_66_int = 1; // 0x345 PushI
	var_67_bool = var_23_int > var_66_int; // 0x346 GT
	if(var_67_bool == 0) goto Label_843; // 0x347 JumpB
	func_796(var_23_int); // 0x349 NEW_2
	
Label_843:
	var_69_object = Obj(); // 0x34b PushV
	var_69_object = var_19_object; // 0x34c Mov
	func_3521(var_69_object); // 0x34d NEW_2
	var_2_object = 1; // 0x34f TMovB
	var_134_int = 110; // 0x350 PushI
	var_135_float = 10.0; // 0x351 PushF
	SetTimer(var_134_int, var_135_float); // 0x352 Func
	
Label_852:
	return 4; // 0x354 Return
}


func_2863()
{
	var_21_bool = 0; // 0xb2f PushV
	func_3624(var_21_bool); // 0xb30 NEW_2
	if(var_21_bool == 0) goto Label_2869; // 0xb32 JumpB
	lshStopSpeech(); // 0xb33 Func
	
Label_2869:
	return 0; // 0xb35 Return
}


func_2870(var_57_string, var_58_int, var_59_int)
{
	var_60_bool = 0; var_61_bool = 0; // 0xb36 PushV
	var_62_bool = 0; var_63_int = 0; var_64_int = 0; // 0xb37 PushV
	var_63_int = var_58_int; // 0xb38 Mov
	var_64_int = var_59_int; // 0xb39 Mov
	func_2971(var_62_bool, var_63_int, var_64_int); // 0xb3a NEW_2
	if(var_62_bool == 0) goto Label_2880; // 0xb3c JumpB
	var_65_int = 0; // 0xb3d PushI
	AddItem(var_61_bool, var_57_string, var_65_int); // 0xb3e Func
	
Label_2880:
	return 2; // 0xb40 Return
}


func_2361(var_0_object, var_1_object, var_26_int)
{
	var_27_int = 0; // 0x93a PushI
	var_28_bool = var_26_int != var_27_int; // 0x93b Neq
	if(var_28_bool == 0) goto Label_2366; // 0x93c JumpB
	return 0; // 0x93d Return
	
Label_2366:
	var_29_bool = 0; var_30_object = Obj(); // 0x93e PushV
	var_30_object = var_1_object; // 0x93f MovT
	func_2399(var_29_bool, var_30_object); // 0x940 NEW_2
	var_65_bool = var_29_bool == 0; // 0x942 Not
	if(var_65_bool == 0) goto Label_2373; // 0x943 JumpB
	var_0_object = 1; // 0x944 TMovB
	
Label_2373:
	var_66_int = 0; // 0x945 PushI
	KillTimer(var_66_int); // 0x946 Func
	Stop(); // 0x948 Func
	return 0; // 0x94a Return
}


func_3392(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0xd41 PushS
	var_55_bool = var_53_string == var_54_string; // 0xd42 Eq
	if(var_55_bool == 0) goto Label_3401; // 0xd43 JumpB
	var_56_object = Obj(); // 0xd44 PushV
	var_56_object = var_52_object; // 0xd45 Mov
	func_3578(); // 0xd46 NEW_2
	goto Label_3416; // 0xd48 Jump
	
Label_3416:
	return 0; // 0xd58 Return
	
Label_3401:
	var_57_string = "player_shot"; // 0xd49 PushS
	var_58_bool = var_53_string == var_57_string; // 0xd4a Eq
	if(var_58_bool == 0) goto Label_3409; // 0xd4b JumpB
	var_59_object = Obj(); // 0xd4c PushV
	var_59_object = var_52_object; // 0xd4d Mov
	func_3595(var_59_object); // 0xd4e NEW_2
	goto Label_3416; // 0xd50 Jump
	
Label_3409:
	var_125_string = "battle"; // 0xd51 PushS
	var_126_bool = var_53_string == var_125_string; // 0xd52 Eq
	if(var_126_bool == 0) goto Label_3416; // 0xd53 JumpB
	var_127_object = Obj(); // 0xd54 PushV
	var_127_object = var_52_object; // 0xd55 Mov
	func_3604(); // 0xd56 NEW_2
}


func_2881(var_35_string, var_36_int, var_37_int, var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0xb41 PushV
	var_43_bool = 0; var_44_int = 0; var_45_int = 0; // 0xb42 PushV
	var_44_int = var_36_int; // 0xb43 Mov
	var_45_int = var_37_int; // 0xb44 Mov
	func_2971(var_43_bool, var_44_int, var_45_int); // 0xb45 NEW_2
	if(var_43_bool == 0) goto Label_2895; // 0xb47 JumpB
	irand(var_41_int, var_38_int); // 0xb48 Func
	var_48_int = 0; // 0xb4a PushI
	var_49_int = 1; // 0xb4b PushI
	var_50_int = var_41_int + var_49_int; // 0xb4c Add
	AddItem(var_42_bool, var_35_string, var_48_int, var_50_int); // 0xb4d Func
	
Label_2895:
	return 4; // 0xb4f Return
}


func_2383(var_0_object)
{
	var_0_object = 1; // 0x94f TMovB
	var_22_int = 0; // 0x950 PushI
	KillTimer(var_22_int); // 0x951 Func
	Stop(); // 0x953 Func
	return 0; // 0x955 Return
}


func_2896(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xb50 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0xb51 Func
	var_61_bool = var_53_bool == 0; // 0xb53 Not
	if(var_61_bool == 0) goto Label_2921; // 0xb54 JumpB
	var_54_int = 0; // 0xb55 MovI
	
Label_2902:
	var_62_int = 1; // 0xb56 PushI
	var_63_int = var_54_int + var_62_int; // 0xb57 Add
	var_64_int = var_44_string + var_63_int; // 0xb58 Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0xb59 Func
	var_65_bool = var_55_bool == 0; // 0xb5b Not
	if(var_65_bool == 0) goto Label_2910; // 0xb5c JumpB
	goto Label_2913; // 0xb5d Jump
	
Label_2913:
	var_66_bool = var_54_int == 0; // 0xb61 Not
	if(var_66_bool == 0) goto Label_2916; // 0xb62 JumpB
	return 16; // 0xb63 Return
	
Label_2916:
	irand(var_56_int, var_54_int); // 0xb64 Func
	var_67_int = 1; // 0xb66 PushI
	var_68_int = var_56_int + var_67_int; // 0xb67 Add
	var_44_string = var_44_string + var_68_int; // 0xb68 Add2
	
Label_2921:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0xb69 Func
	var_69_bool = var_57_bool; // 0xb6b Push
	if(var_69_bool == 0) goto Label_2936; // 0xb6c JumpB
	GetEyesHeight(var_58_float); // 0xb6d Func
	GetDirection(var_59_cvector); // 0xb6f Func
	var_70_int = 50; // 0xb71 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0xb72 Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0xb73 PushE
	var_71_float = var_71_float + var_58_float; // 0xb74 Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0xb75 PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0xb76 Func
	
Label_2936:
	return 16; // 0xb78 Return
	
Label_2910:
	var_72_int = 1; // 0xb5e PushI
	var_54_int = var_54_int + var_72_int; // 0xb5f Add2
	goto Label_2902; // 0xb60 Jump
}


func_853(var_0_object, var_1_object)
{
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; var_109_object = Obj(); var_110_bool = 0; var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_object = Obj(); var_116_bool = 0; // 0x355 PushV
	var_0_object = 0; // 0x356 TMovB
	var_1_object = 0; // 0x357 TMovB
	var_117_float = 0.5; // 0x358 PushF
	rand(var_111_float, var_117_float); // 0x359 Func
	Sleep(var_111_float); // 0x35b Func
	
Label_861:
	var_118_bool = var_0_object == 0; // 0x35d Not
	if(var_118_bool == 0) goto Label_911; // 0x35e JumpB
	var_119_bool = var_1_object == 0; // 0x35f Not
	if(var_119_bool == 0) goto Label_880; // 0x360 JumpB
	
Label_865:
	GetPosition(var_113_cvector); // 0x361 Func
	var_120_float = 0; // 0x363 PushV
	func_912(var_120_float); // 0x364 NEW_2
	GetRandomPFPointInCircle(var_112_cvector, var_113_cvector, var_120_float, var_114_bool); // 0x366 Func
	var_123_bool = var_114_bool; // 0x368 Push
	if(var_123_bool == 0) goto Label_875; // 0x369 JumpB
	goto Label_879; // 0x36a Jump
	
Label_879:
	goto Label_881; // 0x36f Jump
	
Label_881:
	var_124_object = Obj(); var_125_cvector = CVector(0,0,0); // 0x371 PushV
	var_125_cvector = var_112_cvector; // 0x372 Mov
	func_940(var_124_object, var_125_cvector); // 0x373 NEW_2
	var_115_object = var_124_object; // 0x374 Mov
	var_128_bool = var_115_object != 0; // 0x376 NullNeq
	if(var_128_bool == 0) goto Label_906; // 0x377 JumpB
	RotatePath(var_115_object, var_116_bool); // 0x378 Func
	var_129_bool = var_116_bool; // 0x37a Push
	if(var_129_bool == 0) goto Label_905; // 0x37b JumpB
	var_130_bool = 0; // 0x37c PushV
	func_938(var_130_bool); // 0x37d NEW_2
	FollowPath(var_115_object, var_130_bool, var_116_bool); // 0x37f Func
	var_115_object = 0; // 0x381 SetNull
	var_131_bool = var_116_bool; // 0x382 Push
	if(var_131_bool == 0) goto Label_905; // 0x383 JumpB
	TaskCall(4); // 0x385 TaskCall
	func_1110(); // 0x386 NEW_2
	TaskReturn(); // 0x387 TaskReturn
	
Label_905:
	goto Label_909; // 0x389 Jump
	
Label_909:
	var_115_object = 0; // 0x38d SetNull
	goto Label_861; // 0x38e Jump
	
Label_906:
	var_183_int = 1; // 0x38a PushI
	Sleep(var_183_int); // 0x38b Func
	
Label_875:
	var_184_int = 1; // 0x36b PushI
	Sleep(var_184_int); // 0x36c Func
	goto Label_865; // 0x36e Jump
	
Label_880:
	var_1_object = 0; // 0x370 TMovB
	
Label_911:
	return 12; // 0x38f Return
}


func_3417(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xd59 PushV
	var_23_bool = 0; // 0xd5a PushV
	var_23_bool = 0; // 0xd5b MovB
	var_24_bool = 0; var_25_object = Obj(); // 0xd5c PushV
	var_25_object = var_20_object; // 0xd5d Mov
	func_3575(var_25_object); // 0xd5e NEW_2
	if(var_24_bool == 0) goto Label_3431; // 0xd60 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0xd61 PushV
	var_27_object = var_20_object; // 0xd62 Mov
	func_2439(var_26_bool, var_27_object); // 0xd63 NEW_2
	if(var_26_bool == 0) goto Label_3431; // 0xd65 JumpB
	var_23_bool = 1; // 0xd66 MovB
	
Label_3431:
	if(var_23_bool == 0) goto Label_3438; // 0xd67 JumpB
	IsWeaponHolstered(var_22_bool); // 0xd68 ObjFunc
	var_30_bool = var_22_bool == 0; // 0xd6a Not
	if(var_30_bool == 0) goto Label_3438; // 0xd6b JumpB
	var_19_bool = 1; // 0xd6c MovB
	return 2; // 0xd6d Return
	
Label_3438:
	var_19_bool = 0; // 0xd6e MovB
	return 2; // 0xd6f Return
}


func_2399(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x960 PushV
	var_32_object = var_30_object; // 0x961 Mov
	func_2570(var_31_bool, var_32_object); // 0x962 NEW_2
	var_29_bool = var_31_bool; // 0x963 Mov
	return 0; // 0x965 Return
}


func_2406(var_221_string)
{
	var_221_string = "walk"; // 0x966 MovS
	return 0; // 0x967 Return
}


func_2408(var_222_string)
{
	var_222_string = "run"; // 0x968 MovS
	return 0; // 0x969 Return
}


func_2410(var_449_string, var_450_int)
{
	var_451_int = 2; // 0x96b PushI
	var_452_bool = var_450_int == var_451_int; // 0x96c Eq
	if(var_452_bool == 0) goto Label_2417; // 0x96d JumpB
	var_449_string = "fire"; // 0x96e MovS
	return 0; // 0x96f Return
	
Label_2417:
	var_453_int = 1; // 0x971 PushI
	var_454_bool = var_450_int == var_453_int; // 0x972 Eq
	if(var_454_bool == 0) goto Label_2422; // 0x973 JumpB
	var_449_string = "bullet"; // 0x974 MovS
	return 0; // 0x975 Return
	
Label_2422:
	var_449_string = "phys"; // 0x976 MovS
	return 0; // 0x977 Return
}


func_3440(var_33_object)
{
	var_34_object = Obj(); // 0xd71 PushV
	var_34_object = var_33_object; // 0xd72 Mov
	func_3578(); // 0xd73 NEW_2
	return 0; // 0xd75 Return
}


func_1395()
{
	StopGroup0(); // 0x573 Func
	StopAsync(); // 0x575 Func
	var_31_string = "head"; // 0x577 PushS
	UnlookAsync(var_31_string); // 0x578 Func
	var_32_int = 111; // 0x57a PushI
	KillTimer(var_32_int); // 0x57b Func
	return 0; // 0x57d Return
}


func_3446(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0xd77 PushV
	var_23_object = var_21_object; // 0xd78 Mov
	func_2439(var_22_bool, var_23_object); // 0xd79 NEW_2
	if(var_22_bool == 0) goto Label_3458; // 0xd7b JumpB
	var_26_object = Obj(); // 0xd7c PushV
	func_2937(var_26_object); // 0xd7d NEW_2
	var_29_float = -0.05; // 0xd7f PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0xd80 Func
	
Label_3458:
	return 0; // 0xd82 Return
}


func_2424(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x978 PushV
	GetPosition(var_56_cvector); // 0x979 Func
	GetPosition(var_57_cvector); // 0x97b ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0x97d Sub2
	return 4; // 0x97e Return
}


func_2937(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0xb79 PushV
	self(var_108_object); // 0xb7a Func
	var_106_object = var_108_object; // 0xb7c Mov
	return 2; // 0xb7d Return
}


func_2943(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0xb7f PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0xb80 Or
	var_59_float = sqrt(var_60_int); // 0xb81 Sqrt2
	var_61_float = 0.0; // 0xb82 PushF
	var_62_bool = var_59_float < var_61_float; // 0xb83 LT
	if(var_62_bool == 0) goto Label_2951; // 0xb84 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0xb85 MovV
	return 2; // 0xb86 Return
	
Label_2951:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0xb87 Div2
	return 2; // 0xb88 Return
}


func_2431(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x97f PushV
	GetPosition(var_41_cvector); // 0x980 Func
	GetPosition(var_42_cvector); // 0x982 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x984 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x985 Or2
	return 6; // 0x986 Return
}


func_3459(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xd83 PushV
	var_23_string = "heal"; // 0xd84 PushS
	var_24_bool = var_20_string == var_23_string; // 0xd85 Eq
	if(var_24_bool == 0) goto Label_3473; // 0xd86 JumpB
	var_25_string = "player"; // 0xd87 PushS
	FindActor(var_22_object, var_25_string); // 0xd88 Func
	var_26_bool = 0; var_27_object = Obj(); // 0xd8a PushV
	var_27_object = var_22_object; // 0xd8b Mov
	func_3611(var_27_object); // 0xd8c NEW_2
	var_19_bool = var_26_bool; // 0xd8d Mov
	return 2; // 0xd8f Return
	
Label_3473:
	var_19_bool = 0; // 0xd91 MovB
	return 2; // 0xd92 Return
}


func_1925(var_508_bool, var_509_float)
{
	var_510_float = 0; var_511_bool = 0; var_512_float = 0; var_513_bool = 0; // 0x785 PushV
	rand(var_512_float); // 0x786 Func
	var_514_bool = var_512_float < var_509_float; // 0x788 LT
	if(var_514_bool == 0) goto Label_1945; // 0x789 JumpB
	
Label_1930:
	IsAnimationPlaying(var_513_bool); // 0x78a Func
	var_515_bool = var_513_bool == 0; // 0x78c Not
	if(var_515_bool == 0) goto Label_1935; // 0x78d JumpB
	goto Label_1944; // 0x78e Jump
	
Label_1944:
	goto Label_1950; // 0x798 Jump
	
Label_1950:
	var_508_bool = 0; // 0x79e MovB
	return 4; // 0x79f Return
	
Label_1935:
	var_516_bool = 0; // 0x78f PushV
	func_2023(var_516_bool); // 0x790 NEW_2
	if(var_516_bool == 0) goto Label_1941; // 0x792 JumpB
	var_508_bool = 1; // 0x793 MovB
	return 4; // 0x794 Return
	
Label_1941:
	sync(); // 0x795 Func
	goto Label_1930; // 0x797 Jump
	
Label_1945:
	WaitForAnimEnd(); // 0x799 Func
	func_2127(var_513_bool); // 0x79c NEW_2
}


func_2439(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0x987 PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0x988 Func
	var_102_bool = var_105_bool; // 0x98a Mov
	return 2; // 0x98b Return
}


func_2953(var_459_float, var_460_float, var_461_float)
{
	var_464_bool = var_460_float < var_461_float; // 0xb8a LT
	if(var_464_bool == 0) goto Label_2958; // 0xb8b JumpB
	var_459_float = var_460_float; // 0xb8c Mov
	goto Label_2959; // 0xb8d Jump
	
Label_2959:
	return 0; // 0xb8f Return
	
Label_2958:
	var_459_float = var_461_float; // 0xb8e Mov
}


func_2444(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0x98c PushV
	var_58_string = "HasProperty"; // 0x98d PushS
	var_59_int = 2; // 0x98e PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0x98f FuncExist
	var_61_bool = var_60_bool == 0; // 0x990 Not
	if(var_61_bool == 0) goto Label_2452; // 0x991 JumpB
	var_53_bool = 0; // 0x992 MovB
	return 2; // 0x993 Return
	
Label_2452:
	HasProperty(var_55_string, var_57_bool); // 0x994 ObjFunc
	var_53_bool = var_57_bool; // 0x996 Mov
	return 2; // 0x997 Return
}


func_912(var_120_float)
{
	var_121_float = 0; var_122_float = 0; // 0x390 PushV
	GetCameraFarDistance(var_122_float); // 0x391 Func
	var_120_float = var_122_float; // 0x393 Mov
	return 2; // 0x394 Return
}


func_2960(var_469_float, var_470_float, var_471_float, var_472_float)
{
	var_473_bool = var_470_float < var_471_float; // 0xb91 LT
	if(var_473_bool == 0) goto Label_2965; // 0xb92 JumpB
	var_469_float = var_471_float; // 0xb93 Mov
	return 0; // 0xb94 Return
	
Label_2965:
	var_474_bool = var_470_float > var_472_float; // 0xb95 GT
	if(var_474_bool == 0) goto Label_2969; // 0xb96 JumpB
	var_469_float = var_472_float; // 0xb97 Mov
	return 0; // 0xb98 Return
	
Label_2969:
	var_469_float = var_470_float; // 0xb99 Mov
	return 0; // 0xb9a Return
}


func_3475(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xd93 PushV
	var_33_string = "heal"; // 0xd94 PushS
	var_34_bool = var_30_string == var_33_string; // 0xd95 Eq
	if(var_34_bool == 0) goto Label_3487; // 0xd96 JumpB
	var_35_string = "player"; // 0xd97 PushS
	FindActor(var_32_object, var_35_string); // 0xd98 Func
	var_36_object = Obj(); // 0xd9a PushV
	var_36_object = var_32_object; // 0xd9b Mov
	func_3614(); // 0xd9c NEW_2
	var_32_object = 0; // 0xd9e SetNull
	
Label_3487:
	return 2; // 0xd9f Return
}


func_2456(var_421_float, var_422_object, var_423_float, var_424_int)
{
	var_428_int = 0; var_429_string = ""; var_430_int = 0; var_431_float = 0; var_432_float = 0; var_433_float = 0; var_434_int = 0; var_435_string = ""; var_436_int = 0; var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x998 PushV
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x999 PushV
	var_441_object = var_422_object; // 0x99a Mov
	var_442_string = "health"; // 0x99b MovS
	func_2444(var_440_bool, var_441_object, var_442_string); // 0x99c NEW_2
	var_443_bool = var_440_bool == 0; // 0x99e Not
	if(var_443_bool == 0) goto Label_2466; // 0x99f JumpB
	var_421_float = 0.0; // 0x9a0 MovF
	return 12; // 0x9a1 Return
	
Label_2466:
	var_444_bool = 0; var_445_object = Obj(); var_446_string = ""; // 0x9a2 PushV
	var_445_object = var_422_object; // 0x9a3 Mov
	var_446_string = "armor"; // 0x9a4 MovS
	func_2444(var_444_bool, var_445_object, var_446_string); // 0x9a5 NEW_2
	var_447_bool = var_444_bool == 0; // 0x9a7 Not
	if(var_447_bool == 0) goto Label_2475; // 0x9a8 JumpB
	var_434_int = 0; // 0x9a9 MovI
	goto Label_2478; // 0x9aa Jump
	
Label_2478:
	var_448_string = "armor_"; // 0x9ae PushS
	var_449_string = ""; var_450_int = 0; // 0x9af PushV
	var_450_int = var_424_int; // 0x9b0 Mov
	func_2410(var_449_string, var_450_int); // 0x9b1 NEW_2
	var_435_string = var_448_string + var_449_string; // 0x9b3 Add2
	var_455_bool = 0; var_456_object = Obj(); var_457_string = ""; // 0x9b4 PushV
	var_456_object = var_422_object; // 0x9b5 Mov
	var_457_string = var_435_string; // 0x9b6 Mov
	func_2444(var_455_bool, var_456_object, var_457_string); // 0x9b7 NEW_2
	var_458_bool = var_455_bool == 0; // 0x9b9 Not
	if(var_458_bool == 0) goto Label_2493; // 0x9ba JumpB
	var_436_int = 0; // 0x9bb MovI
	goto Label_2495; // 0x9bc Jump
	
Label_2495:
	var_459_float = 0; var_460_float = 0; var_461_float = 0; // 0x9bf PushV
	var_462_int = var_434_int + var_436_int; // 0x9c0 Add
	var_463_float = 100.0; // 0x9c1 PushF
	var_460_float = var_462_int / var_462_int; // 0x9c2 Div2
	var_461_float = 1; // 0x9c3 MovI
	func_2953(var_459_float, var_460_float, var_461_float); // 0x9c4 NEW_2
	var_437_float = var_459_float; // 0x9c5 Mov
	var_465_string = "health"; // 0x9c7 PushS
	GetProperty(var_465_string, var_438_float); // 0x9c8 ObjFunc
	var_466_int = 1; // 0x9ca PushI
	var_467_int = var_466_int - var_437_float; // 0x9cb Sub
	var_439_float = var_423_float * var_467_int; // 0x9cc Mult2
	var_468_string = "health"; // 0x9cd PushS
	var_469_float = 0; var_470_float = 0; var_471_float = 0; var_472_float = 0; // 0x9ce PushV
	var_470_float = var_438_float - var_439_float; // 0x9cf Sub2
	var_471_float = 0; // 0x9d0 MovI
	var_472_float = 1; // 0x9d1 MovI
	func_2960(var_469_float, var_470_float, var_471_float, var_472_float); // 0x9d2 NEW_2
	SetProperty(var_468_string, var_469_float); // 0x9d4 ObjFunc
	var_475_bool = 0; var_476_object = Obj(); // 0x9d6 PushV
	var_476_object = var_422_object; // 0x9d7 Mov
	func_2439(var_475_bool, var_476_object); // 0x9d8 NEW_2
	if(var_475_bool == 0) goto Label_2527; // 0x9da JumpB
	var_477_float = 0; // 0x9db PushV
	var_477_float = -var_439_float; // 0x9dc Neg2
	func_3017(var_477_float); // 0x9dd NEW_2
	
Label_2527:
	var_421_float = var_439_float; // 0x9df Mov
	return 12; // 0x9e0 Return
	
Label_2493:
	GetProperty(var_435_string, var_436_int); // 0x9bd ObjFunc
	
Label_2475:
	var_481_string = "armor"; // 0x9ab PushS
	GetProperty(var_481_string, var_434_int); // 0x9ac ObjFunc
}


func_2971(var_43_bool, var_44_int, var_45_int)
{
	var_46_int = 0; var_47_int = 0; // 0xb9b PushV
	irand(var_47_int, var_45_int); // 0xb9c Func
	var_43_bool = var_47_int < var_44_int; // 0xb9e LT2
	return 2; // 0xb9f Return
}


func_924(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x39c TMovB
	var_1_object = 0; // 0x39d TMovB
	Stop(); // 0x39e Func
	StopGroup0(); // 0x3a0 Func
	return 0; // 0x3a2 Return
}


func_3488(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = ""; // 0xda0 PushV
	var_157_string = "idle"; // 0xda1 MovS
	var_158_int = var_155_int; // 0xda2 Push
	if(var_158_int == 0) goto Label_3493; // 0xda3 JumpB
	var_157_string = var_157_string + var_155_int; // 0xda4 Add2
	
Label_3493:
	var_154_string = var_157_string; // 0xda5 Mov
	return 2; // 0xda6 Return
}


func_1952(var_0_object, var_309_bool, var_310_float)
{
	var_311_bool = 0; var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_bool = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_float = 0; // 0x7a0 PushV
	
Label_1953:
	IsAnimationPlaying(var_316_bool); // 0x7a1 Func
	var_321_bool = var_316_bool == 0; // 0x7a3 Not
	if(var_321_bool == 0) goto Label_1958; // 0x7a4 JumpB
	goto Label_1990; // 0x7a5 Jump
	
Label_1990:
	func_2127(var_320_float); // 0x7c7 NEW_2
	var_309_bool = 0; // 0x7c9 MovB
	return 10; // 0x7ca Return
	
Label_1958:
	var_322_bool = 0; // 0x7a6 PushV
	func_2023(var_322_bool); // 0x7a7 NEW_2
	if(var_322_bool == 0) goto Label_1964; // 0x7a9 JumpB
	var_309_bool = 1; // 0x7aa MovB
	return 10; // 0x7ab Return
	
Label_1964:
	var_365_bool = 0; var_366_object = Obj(); // 0x7ac PushV
	var_366_object = var_0_object; // 0x7ad MovT
	func_2570(var_365_bool, var_366_object); // 0x7ae NEW_2
	var_367_bool = var_365_bool == 0; // 0x7b0 Not
	if(var_367_bool == 0) goto Label_1972; // 0x7b1 JumpB
	var_309_bool = 0; // 0x7b2 MovB
	return 10; // 0x7b3 Return
	
Label_1972:
	GetPFPosition(var_317_cvector); // 0x7b4 TObjFunc
	GetPFPosition(var_318_cvector); // 0x7b6 Func
	var_319_cvector = var_317_cvector - var_318_cvector; // 0x7b8 Sub2
	var_320_float = var_319_cvector | var_319_cvector; // 0x7b9 Or2
	var_368_float = var_310_float * var_310_float; // 0x7ba Mult
	var_369_bool = var_320_float < var_368_float; // 0x7bb LT
	if(var_369_bool == 0) goto Label_1987; // 0x7bc JumpB
	var_370_bool = 0; var_371_float = 0; // 0x7bd PushV
	var_371_float = var_310_float; // 0x7be Mov
	func_1788(var_320_float, var_370_bool, var_371_float); // 0x7bf NEW_2
	var_309_bool = 1; // 0x7c1 MovB
	return 10; // 0x7c2 Return
	
Label_1987:
	sync(); // 0x7c3 Func
	goto Label_1953; // 0x7c5 Jump
}


func_2976(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0); // 0xba1 PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0xba2 PushE
	var_76_float = var_74_float * var_75_float; // 0xba3 Mult
	var_77_float = GetByIndex(var_72_cvector, 2); // 0xba4 PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0xba5 PushE
	var_79_float = var_77_float * var_78_float; // 0xba6 Mult
	var_71_float = var_76_float + var_79_float; // 0xba7 Add2
	return 0; // 0xba8 Return
}


func_931(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x3a3 TMovB
	var_1_object = 1; // 0x3a4 TMovB
	Stop(); // 0x3a5 Func
	StopGroup0(); // 0x3a7 Func
	return 0; // 0x3a9 Return
}


func_421(var_20_object)
{
	EventDisable(0); // 0x1a6 EventDisable
	var_21_object = Obj(); // 0x1a7 PushV
	var_21_object = var_20_object; // 0x1a8 Mov
	func_454(var_21_object); // 0x1a9 NEW_2
	var_101_object = Obj(); // 0x1ab PushV
	var_101_object = var_20_object; // 0x1ac Mov
	func_3657(var_101_object); // 0x1ad NEW_2
	EventEnable(0); // 0x1af EventEnable
	
Label_432:
	Hold(); // 0x1b0 Func
	goto Label_432; // 0x1b2 Jump
}


func_3495(var_148_int)
{
	var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_bool = 0; // 0xda7 PushV
	var_151_int = 0; // 0xda8 MovI
	
Label_3497:
	var_153_string = "all"; // 0xda9 PushS
	var_154_string = ""; var_155_int = 0; // 0xdaa PushV
	var_155_int = var_151_int; // 0xdab Mov
	func_3488(var_154_string, var_155_int); // 0xdac NEW_2
	HasAnimation(var_152_bool, var_153_string, var_154_string); // 0xdae Func
	var_159_bool = var_152_bool == 0; // 0xdb0 Not
	if(var_159_bool == 0) goto Label_3507; // 0xdb1 JumpB
	goto Label_3510; // 0xdb2 Jump
	
Label_3510:
	var_148_int = var_151_int; // 0xdb6 Mov
	return 4; // 0xdb7 Return
	
Label_3507:
	var_160_int = 1; // 0xdb3 PushI
	var_151_int = var_151_int + var_160_int; // 0xdb4 Add2
	goto Label_3497; // 0xdb5 Jump
}


func_2985(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0); // 0xbaa PushE
	var_83_float = GetByIndex(var_81_cvector, 0); // 0xbab PushE
	var_84_float = var_82_float * var_83_float; // 0xbac Mult
	var_85_float = GetByIndex(var_81_cvector, 2); // 0xbad PushE
	var_86_float = GetByIndex(var_81_cvector, 2); // 0xbae PushE
	var_87_float = var_85_float * var_86_float; // 0xbaf Mult
	var_88_int = var_84_float + var_87_float; // 0xbb0 Add
	var_80_float = sqrt(var_88_int); // 0xbb1 Sqrt2
	return 0; // 0xbb2 Return
}


func_938(var_130_bool)
{
	var_130_bool = 0; // 0x3aa MovB
	return 0; // 0x3ab Return
}


func_940(var_124_object, var_125_cvector)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x3ac PushV
	FindShiftedPathTo(var_127_object, var_125_cvector); // 0x3ad Func
	var_124_object = var_127_object; // 0x3af Mov
	return 2; // 0x3b0 Return
}


func_2995(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xbb4 PushV
	var_72_cvector = var_69_cvector; // 0xbb5 Mov
	var_73_cvector = var_70_cvector; // 0xbb6 Mov
	func_2976(var_71_float, var_72_cvector, var_73_cvector); // 0xbb7 NEW_2
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0xbb9 PushV
	var_81_cvector = var_69_cvector; // 0xbba Mov
	func_2985(var_80_float, var_81_cvector); // 0xbbb NEW_2
	var_89_float = 0; var_90_cvector = CVector(0,0,0); // 0xbbd PushV
	var_90_cvector = var_70_cvector; // 0xbbe Mov
	func_2985(var_89_float, var_90_cvector); // 0xbbf NEW_2
	var_91_float = var_80_float * var_89_float; // 0xbc1 Mult
	var_68_float = var_71_float / var_71_float; // 0xbc2 Div2
	return 0; // 0xbc3 Return
}


func_3512(var_61_int)
{
	var_63_bool = 0; // 0xdb9 PushV
	func_3652(var_63_bool); // 0xdba NEW_2
	if(var_63_bool == 0) goto Label_3519; // 0xdbc JumpB
	var_61_int = 2; // 0xdbd MovI
	goto Label_3520; // 0xdbe Jump
	
Label_3520:
	return 0; // 0xdc0 Return
	
Label_3519:
	var_61_int = 0; // 0xdbf MovI
}


func_1471(var_74_object)
{
	var_81_object = Obj(); var_82_bool = 0; var_83_float = 0; // 0x5c0 PushV
	var_81_object = var_74_object; // 0x5c1 Mov
	var_82_bool = 1; // 0x5c2 MovB
	var_83_float = 180.0; // 0x5c3 MovF
	func_1485(var_77_int, var_78_bool, var_79_float, var_80_int, var_74_object, var_81_object, var_82_bool, var_83_float); // 0x5c4 NEW_2
	return 0; // 0x5c6 Return
}


func_3521(var_60_object)
{
	var_61_object = Obj(); // 0xdc2 PushV
	var_61_object = var_60_object; // 0xdc3 Mov
	TaskCall(5); // 0xdc4 TaskCall
	func_1196(var_62_object, var_61_object); // 0xdc5 NEW_2
	TaskReturn(); // 0xdc6 TaskReturn
	return 0; // 0xdc8 Return
}


func_3012(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0; // 0xbc4 PushV
	GetVariable(var_124_string, var_126_int); // 0xbc5 Func
	var_123_int = var_126_int; // 0xbc7 Mov
	return 2; // 0xbc8 Return
}


func_454(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x1c6 PushV
	var_42_bool = var_21_object == 0; // 0x1c7 NullEq
	if(var_42_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_43_string = ""; // 0x1c9 PushV
	var_43_string = "fdie"; // 0x1ca MovS
	func_545(var_43_string); // 0x1cb NEW_2
	goto Label_544; // 0x1cd Jump
	
Label_544:
	return 20; // 0x220 Return
	
Label_462:
	GetPosition(var_32_cvector); // 0x1ce ObjFunc
	GetPosition(var_33_cvector); // 0x1d0 Func
	GetDirection(var_34_cvector); // 0x1d2 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x1d4 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x1d5 PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x1d6 PushE
	var_77_float = var_75_float * var_76_float; // 0x1d7 Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x1d8 PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x1d9 PushE
	var_80_float = var_78_float * var_79_float; // 0x1da Mult
	var_81_int = var_77_float + var_80_float; // 0x1db Add
	var_82_int = 0; // 0x1dc PushI
	var_83_bool = var_81_int >= var_82_int; // 0x1dd GE
	if(var_83_bool == 0) goto Label_481; // 0x1de JumpB
	var_36_string = "fdie"; // 0x1df MovS
	goto Label_482; // 0x1e0 Jump
	
Label_482:
	RemoveRTEnvelope(); // 0x1e2 Func
	SetDeathState(); // 0x1e4 Func
	Stop(); // 0x1e6 Func
	StopAsync(); // 0x1e8 Func
	var_37_object = var_21_object; // 0x1ea Mov
	var_84_string = "GetScriptProperty"; // 0x1eb PushS
	var_85_int = 2; // 0x1ec PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x1ed FuncExist
	if(var_86_bool == 0) goto Label_506; // 0x1ee JumpB
	var_87_string = "Owner"; // 0x1ef PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x1f0 ObjFunc
	var_88_bool = var_38_bool; // 0x1f2 Push
	if(var_88_bool == 0) goto Label_506; // 0x1f3 JumpB
	var_89_string = "Owner"; // 0x1f4 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x1f5 ObjFunc
	var_90_bool = var_37_object == 0; // 0x1f7 NullEq
	if(var_90_bool == 0) goto Label_506; // 0x1f8 JumpB
	var_37_object = var_21_object; // 0x1f9 Mov
	
Label_506:
	var_91_string = "@GetEyesHeight"; // 0x1fa PushS
	var_92_int = 1; // 0x1fb PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x1fc FuncExist
	if(var_93_bool == 0) goto Label_521; // 0x1fd JumpB
	GetEyesHeight(var_40_float); // 0x1fe ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x200 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x201 PushE
	var_94_float = var_40_float; // 0x202 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x203 PopE
	var_95_string = "head"; // 0x204 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x205 Func
	var_39_bool = 1; // 0x207 MovB
	goto Label_522; // 0x208 Jump
	
Label_522:
	var_96_string = ""; // 0x20a PushV
	var_96_string = var_36_string; // 0x20b Mov
	func_2896(var_96_string); // 0x20c NEW_2
	var_97_string = "all"; // 0x20e PushS
	PlayAnimation(var_97_string, var_36_string); // 0x20f Func
	WaitForAnimEnd(); // 0x211 Func
	var_98_bool = var_39_bool; // 0x213 Push
	if(var_98_bool == 0) goto Label_538; // 0x214 JumpB
	StopAsync(); // 0x215 Func
	var_99_string = "head"; // 0x217 PushS
	UnlookAsync(var_99_string); // 0x218 Func
	
Label_538:
	var_100_string = "all"; // 0x21a PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x21b Func
	RemoveEnvelope(); // 0x21d Func
	var_37_object = 0; // 0x21f SetNull
	
Label_521:
	var_39_bool = 0; // 0x209 MovB
	
Label_481:
	var_36_string = "bdie"; // 0x1e1 MovS
}


func_1479(var_418_float)
{
	var_418_float = 0.03; // 0x5c8 MovF
	return 0; // 0x5c9 Return
}


func_3529(var_30_int, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xdca PushV
	var_33_object = var_31_object; // 0xdcb Mov
	func_2570(var_32_bool, var_33_object); // 0xdcc NEW_2
	if(var_32_bool == 0) goto Label_3537; // 0xdce JumpB
	var_30_int = 2; // 0xdcf MovI
	goto Label_3538; // 0xdd0 Jump
	
Label_3538:
	return 0; // 0xdd2 Return
	
Label_3537:
	var_30_int = 0; // 0xdd1 MovI
}


func_1482(var_425_int)
{
	var_425_int = 0; // 0x5cb MovI
	return 0; // 0x5cc Return
}


func_1995(var_0_object, var_324_bool)
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_float = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_float = 0; var_334_float = 0; // 0x7cb PushV
	var_335_bool = 0; var_336_object = Obj(); // 0x7cc PushV
	var_336_object = var_0_object; // 0x7cd MovT
	func_2570(var_335_bool, var_336_object); // 0x7ce NEW_2
	var_337_bool = var_335_bool == 0; // 0x7d0 Not
	if(var_337_bool == 0) goto Label_2004; // 0x7d1 JumpB
	var_324_bool = 0; // 0x7d2 MovB
	return 10; // 0x7d3 Return
	
Label_2004:
	var_338_bool = 0; // 0x7d4 PushV
	func_2084(var_334_float, var_338_bool); // 0x7d5 NEW_2
	if(var_338_bool == 0) goto Label_2021; // 0x7d7 JumpB
	GetPFPosition(var_330_cvector); // 0x7d8 TObjFunc
	GetPFPosition(var_331_cvector); // 0x7da Func
	var_332_cvector = var_330_cvector - var_331_cvector; // 0x7dc Sub2
	var_333_float = var_332_cvector | var_332_cvector; // 0x7dd Or2
	GetAttackDistance(var_334_float); // 0x7de TObjFunc
	var_339_int = 50; // 0x7e0 PushI
	var_334_float = var_334_float + var_339_int; // 0x7e1 Add2
	var_340_float = var_334_float * var_334_float; // 0x7e2 Mult
	var_324_bool = var_333_float <= var_340_float; // 0x7e3 LE2
	return 10; // 0x7e4 Return
	
Label_2021:
	var_324_bool = 0; // 0x7e5 MovB
	return 10; // 0x7e6 Return
}


func_3017(var_477_float)
{
	var_478_object = Obj(); var_479_object = Obj(); // 0xbc9 PushV
	CreateFloatVector(var_479_object); // 0xbca Func
	add(var_477_float); // 0xbcc ObjFunc
	var_480_int = 15; // 0xbce PushI
	SendWorldWndMessage(var_480_int, var_479_object); // 0xbcf Func
	return 2; // 0xbd1 Return
}


func_1485(var_0_object, var_3_string, var_5_bool, var_81_object, var_82_bool, var_83_float, var_158_bool, var_250_bool)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_float = 0; // 0x5cd PushV
	func_1714(var_103_cvector, var_104_bool, var_105_float); // 0x5cf NEW_2
	var_5_bool = 0; // 0x5d1 TMovI
	var_128_string = "@GetAttackDistance"; // 0x5d2 PushS
	var_129_int = 1; // 0x5d3 PushI
	var_130_bool = IsFuncExist(var_81_object, var_128_string, var_129_int); // 0x5d4 FuncExist
	if(var_130_bool == 0) goto Label_1499; // 0x5d5 JumpB
	GetAttackDistance(var_95_float); // 0x5d6 ObjFunc
	var_131_int = 50; // 0x5d8 PushI
	var_95_float = var_95_float + var_131_int; // 0x5d9 Add2
	goto Label_1500; // 0x5da Jump
	
Label_1500:
	var_132_int = 150; // 0x5dc PushI
	var_133_bool = var_95_float >= var_132_int; // 0x5dd GE
	if(var_133_bool == 0) goto Label_1504; // 0x5de JumpB
	var_95_float = 150; // 0x5df MovI
	
Label_1504:
	var_3_string = 0; // 0x5e0 TMovB
	var_0_object = var_81_object; // 0x5e1 TMov
	IsPlayerActor(var_0_object, var_98_bool); // 0x5e2 Func
	var_134_bool = var_98_bool; // 0x5e4 Push
	if(var_134_bool == 0) goto Label_1518; // 0x5e5 JumpB
	var_135_string = "attack"; // 0x5e6 PushS
	PlayGlobalMusic(var_135_string); // 0x5e7 Func
	var_136_object = Obj(); // 0x5e9 PushV
	func_2937(var_136_object); // 0x5ea NEW_2
	SendPlayerEnemy(var_81_object, var_136_object); // 0x5ec Func
	
Label_1518:
	var_139_bool = var_82_bool; // 0x5ee Push
	if(var_139_bool == 0) goto Label_1522; // 0x5ef JumpB
	var_99_bool = 0; // 0x5f0 MovB
	goto Label_1523; // 0x5f1 Jump
	
Label_1523:
	var_140_float = 400.0; // 0x5f3 PushF
	var_100_float = var_140_float + var_95_float; // 0x5f4 Add2
	
Label_1525:
	var_141_bool = 0; // 0x5f5 PushV
	var_141_bool = 0; // 0x5f6 MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x5f7 PushV
	var_143_object = var_0_object; // 0x5f8 MovT
	func_2570(var_142_bool, var_143_object); // 0x5f9 NEW_2
	if(var_142_bool == 0) goto Label_1535; // 0x5fb JumpB
	var_144_bool = var_3_string == 0; // 0x5fc Not
	if(var_144_bool == 0) goto Label_1535; // 0x5fd JumpB
	var_141_bool = 1; // 0x5fe MovB
	
Label_1535:
	if(var_141_bool == 0) goto Label_1697; // 0x5ff JumpB
	func_2127(var_105_float); // 0x601 NEW_2
	GetPFPosition(var_96_cvector); // 0x603 TObjFunc
	GetPFPosition(var_97_cvector); // 0x605 Func
	var_101_cvector = var_96_cvector - var_97_cvector; // 0x607 Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x608 Or2
	var_150_float = var_100_float * var_100_float; // 0x609 Mult
	var_151_bool = var_102_float >= var_150_float; // 0x60a GE
	if(var_151_bool == 0) goto Label_1563; // 0x60b JumpB
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0; // 0x60c PushV
	var_153_object = var_0_object; // 0x60d MovT
	var_154_float = var_95_float; // 0x60e Mov
	var_155_float = 3000.0; // 0x60f MovF
	var_156_bool = 1; // 0x610 MovB
	var_157_bool = 0; // 0x611 MovB
	TaskCall(7); // 0x612 TaskCall
	func_2154(var_160_bool, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool); // 0x613 NEW_2
	TaskReturn(); // 0x614 TaskReturn
	var_235_bool = var_158_bool == 0; // 0x616 Not
	if(var_235_bool == 0) goto Label_1561; // 0x617 JumpB
	goto Label_1697; // 0x618 Jump
	
Label_1697:
	WaitForAnimEnd(); // 0x6a1 Func
	var_236_string = var_3_string; // 0x6a3 PushT
	if(var_236_string == 0) goto Label_1702; // 0x6a4 JumpB
	return 22; // 0x6a5 Return
	
Label_1702:
	var_237_string = "all"; // 0x6a6 PushS
	var_238_string = "attack_off"; // 0x6a7 PushS
	PlayAnimation(var_237_string, var_238_string); // 0x6a8 Func
	WaitForAnimEnd(); // 0x6aa Func
	var_239_bool = var_98_bool; // 0x6ac Push
	if(var_239_bool == 0) goto Label_1713; // 0x6ad JumpB
	var_240_float = 2.0; // 0x6ae PushF
	Sleep(var_240_float); // 0x6af Func
	
Label_1713:
	return 22; // 0x6b1 Return
	
Label_1561:
	var_99_bool = 0; // 0x619 MovB
	goto Label_1696; // 0x61a Jump
	
Label_1696:
	goto Label_1525; // 0x6a0 Jump
	
Label_1563:
	var_241_float = var_83_float * var_83_float; // 0x61b Mult
	var_242_bool = var_102_float >= var_241_float; // 0x61c GE
	if(var_242_bool == 0) goto Label_1688; // 0x61d JumpB
	GetPFPosition(var_103_cvector); // 0x61e TObjFunc
	CanReachByPF(var_104_bool, var_103_cvector); // 0x620 Func
	var_243_bool = var_104_bool == 0; // 0x622 Not
	if(var_243_bool == 0) goto Label_1587; // 0x623 JumpB
	var_244_bool = 0; var_245_object = Obj(); var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_bool = 0; // 0x624 PushV
	var_245_object = var_0_object; // 0x625 MovT
	var_246_float = var_95_float; // 0x626 Mov
	var_247_float = 3000.0; // 0x627 MovF
	var_248_bool = 1; // 0x628 MovB
	var_249_bool = 0; // 0x629 MovB
	TaskCall(7); // 0x62a TaskCall
	func_2154(var_252_bool, var_244_bool, var_245_object, var_246_float, var_247_float, var_248_bool, var_249_bool); // 0x62b NEW_2
	TaskReturn(); // 0x62c TaskReturn
	var_253_bool = var_250_bool == 0; // 0x62e Not
	if(var_253_bool == 0) goto Label_1585; // 0x62f JumpB
	goto Label_1697; // 0x630 Jump
	
Label_1585:
	var_99_bool = 0; // 0x631 MovB
	goto Label_1525; // 0x632 Jump
	
Label_1587:
	var_254_bool = var_99_bool == 0; // 0x633 Not
	if(var_254_bool == 0) goto Label_1612; // 0x634 JumpB
	var_255_object = Obj(); // 0x635 PushV
	var_255_object = var_0_object; // 0x636 MovT
	func_2720(); // 0x637 NEW_2
	var_264_string = "all"; // 0x639 PushS
	var_265_string = "attack_on"; // 0x63a PushS
	PlayAnimation(var_264_string, var_265_string); // 0x63b Func
	WaitForAnimEnd(); // 0x63d Func
	func_2127(var_105_float); // 0x640 NEW_2
	StopAsync(); // 0x642 Func
	var_99_bool = 1; // 0x644 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x645 PushV
	var_267_object = var_0_object; // 0x646 MovT
	func_2570(var_266_bool, var_267_object); // 0x647 NEW_2
	var_268_bool = var_266_bool == 0; // 0x649 Not
	if(var_268_bool == 0) goto Label_1612; // 0x64a JumpB
	goto Label_1697; // 0x64b Jump
	
Label_1612:
	rand(var_105_float); // 0x64c Func
	var_269_bool = 0; // 0x64e PushV
	var_269_bool = 1; // 0x64f MovB
	var_270_float = 0.25; // 0x650 PushF
	var_271_bool = var_105_float < var_270_float; // 0x651 LT
	if(var_271_bool == 0) goto Label_1624; // 0x652 JumpB
	var_272_bool = 0; // 0x653 PushV
	func_2084(var_269_bool, var_272_bool); // 0x654 NEW_2
	if(var_272_bool == 0) goto Label_1624; // 0x656 JumpB
	var_269_bool = 0; // 0x657 MovB
	
Label_1624:
	if(var_269_bool == 0) goto Label_1641; // 0x658 JumpB
	Face(var_0_object); // 0x659 Func
	func_2134(); // 0x65c NEW_2
	var_307_string = "all"; // 0x65e PushS
	var_308_string = "attack_stay"; // 0x65f PushS
	PlayAnimation(var_307_string, var_308_string); // 0x660 Func
	var_309_bool = 0; var_310_float = 0; // 0x662 PushV
	var_310_float = var_83_float; // 0x663 Mov
	func_1952(var_105_float, var_309_bool, var_310_float); // 0x664 NEW_2
	StopAsync(); // 0x666 Func
	goto Label_1687; // 0x668 Jump
	
Label_1687:
	goto Label_1696; // 0x697 Jump
	
Label_1641:
	Face(var_0_object); // 0x669 Func
	var_524_string = "all"; // 0x66b PushS
	var_525_string = "fjump"; // 0x66c PushS
	PlayAnimation(var_524_string, var_525_string); // 0x66d Func
	WaitForAnimEnd(); // 0x66f Func
	func_2127(var_105_float); // 0x672 NEW_2
	var_526_cvector = CVector(0.0, 0.0, 0.0); // 0x674 PushVec
	SetSpeed(var_526_cvector); // 0x675 Func
	Stop(); // 0x677 Func
	StopAsync(); // 0x679 Func
	var_527_bool = 0; // 0x67b PushV
	func_2084(var_105_float, var_527_bool); // 0x67c NEW_2
	var_528_bool = var_527_bool == 0; // 0x67e Not
	if(var_528_bool == 0) goto Label_1687; // 0x67f JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0x680 PushV
	var_530_object = var_0_object; // 0x681 MovT
	func_2570(var_529_bool, var_530_object); // 0x682 NEW_2
	var_531_bool = var_529_bool == 0; // 0x684 Not
	if(var_531_bool == 0) goto Label_1671; // 0x685 JumpB
	goto Label_1697; // 0x686 Jump
	
Label_1671:
	GetPFPosition(var_96_cvector); // 0x687 TObjFunc
	GetPFPosition(var_97_cvector); // 0x689 Func
	var_101_cvector = var_96_cvector - var_97_cvector; // 0x68b Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x68c Or2
	var_532_float = var_83_float * var_83_float; // 0x68d Mult
	var_533_bool = var_102_float < var_532_float; // 0x68e LT
	if(var_533_bool == 0) goto Label_1687; // 0x68f JumpB
	var_534_bool = 0; var_535_float = 0; // 0x690 PushV
	var_535_float = var_83_float; // 0x691 Mov
	func_1788(var_105_float, var_534_bool, var_535_float); // 0x692 NEW_2
	var_536_bool = var_534_bool == 0; // 0x694 Not
	if(var_536_bool == 0) goto Label_1687; // 0x695 JumpB
	goto Label_1697; // 0x696 Jump
	
Label_1688:
	var_537_bool = 0; var_538_float = 0; // 0x698 PushV
	var_538_float = var_83_float; // 0x699 Mov
	func_1788(var_105_float, var_537_bool, var_538_float); // 0x69a NEW_2
	var_539_bool = var_537_bool == 0; // 0x69c Not
	if(var_539_bool == 0) goto Label_1695; // 0x69d JumpB
	goto Label_1697; // 0x69e Jump
	
Label_1695:
	var_99_bool = 1; // 0x69f MovB
	
Label_1522:
	var_99_bool = 1; // 0x5f2 MovB
	
Label_1499:
	var_95_float = var_83_float; // 0x5db Mov
}


func_3539(var_73_object)
{
	var_74_object = Obj(); // 0xdd4 PushV
	var_74_object = var_73_object; // 0xdd5 Mov
	TaskCall(6); // 0xdd6 TaskCall
	func_1471(var_74_object); // 0xdd7 NEW_2
	TaskReturn(); // 0xdd8 TaskReturn
	return 0; // 0xdda Return
}


func_3027(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0xbd3 PushV
	GetGameTime(var_30_float); // 0xbd4 Func
	var_31_int = 1; // 0xbd6 PushI
	var_32_int = 0; // 0xbd7 PushV
	var_33_int = 24; // 0xbd8 PushI
	var_32_int = var_30_float / var_30_float; // 0xbd9 Div2
	var_28_int = var_31_int + var_32_int; // 0xbda Add2
	return 2; // 0xbdb Return
}


func_3547(var_27_int, var_28_object)
{
	var_30_int = 0; var_31_object = Obj(); // 0xddc PushV
	var_31_object = var_28_object; // 0xddd Mov
	func_3529(var_30_int, var_31_object); // 0xdde NEW_2
	var_27_int = var_30_int; // 0xddf Mov
	return 0; // 0xde1 Return
}


func_3036(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0xbdc PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0xbdd Func
	var_24_bool = var_23_bool; // 0xbdf Push
	if(var_24_bool == 0) goto Label_3044; // 0xbe0 JumpB
	var_25_string = "attack"; // 0xbe1 PushS
	PlayGlobalMusic(var_25_string); // 0xbe2 Func
	
Label_3044:
	return 2; // 0xbe4 Return
}


func_2529(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x9e1 PushV
	IsDead(var_49_bool); // 0x9e2 ObjFunc
	var_46_bool = var_49_bool; // 0x9e4 Mov
	return 2; // 0x9e5 Return
}


func_3554(var_72_object)
{
	var_73_object = Obj(); // 0xde3 PushV
	var_73_object = var_72_object; // 0xde4 Mov
	func_3539(var_73_object); // 0xde5 NEW_2
	return 0; // 0xde7 Return
}


func_3045()
{
	var_382_object = Obj(); var_383_object = Obj(); // 0xbe5 PushV
	GetScene(var_383_object); // 0xbe6 Func
	var_384_string = "battle"; // 0xbe8 PushS
	var_385_object = Obj(); // 0xbe9 PushV
	func_2937(var_385_object); // 0xbea NEW_2
	BroadcastMessage(var_384_string, var_385_object, var_383_object); // 0xbec Func
	return 2; // 0xbee Return
}


func_2534(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0x9e6 PushV
	var_41_bool = var_36_object == 0; // 0x9e7 NullEq
	if(var_41_bool == 0) goto Label_2539; // 0x9e8 JumpB
	var_35_bool = 0; // 0x9e9 MovB
	return 4; // 0x9ea Return
	
Label_2539:
	var_42_bool = 0; // 0x9eb PushV
	var_42_bool = 0; // 0x9ec MovB
	var_43_string = "IsDead"; // 0x9ed PushS
	var_44_int = 1; // 0x9ee PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0x9ef FuncExist
	if(var_45_bool == 0) goto Label_2551; // 0x9f0 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x9f1 PushV
	var_47_object = var_36_object; // 0x9f2 Mov
	func_2529(var_47_object); // 0x9f3 NEW_2
	if(var_46_bool == 0) goto Label_2551; // 0x9f5 JumpB
	var_42_bool = 1; // 0x9f6 MovB
	
Label_2551:
	if(var_42_bool == 0) goto Label_2554; // 0x9f7 JumpB
	var_35_bool = 0; // 0x9f8 MovB
	return 4; // 0x9f9 Return
	
Label_2554:
	GetScene(var_39_object); // 0x9fa Func
	var_50_bool = var_39_object == 0; // 0x9fc NullEq
	if(var_50_bool == 0) goto Label_2560; // 0x9fd JumpB
	var_35_bool = 0; // 0x9fe MovB
	return 4; // 0x9ff Return
	
Label_2560:
	GetScene(var_40_object); // 0xa00 ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0xa02 Neq
	if(var_51_bool == 0) goto Label_2566; // 0xa03 JumpB
	var_35_bool = 0; // 0xa04 MovB
	return 4; // 0xa05 Return
	
Label_2566:
	var_35_bool = 1; // 0xa06 MovB
	return 4; // 0xa07 Return
}


func_2023(var_322_bool)
{
	var_323_bool = 0; // 0x7e7 PushV
	var_323_bool = 0; // 0x7e8 MovB
	var_324_bool = 0; // 0x7e9 PushV
	func_1995(var_323_bool, var_324_bool); // 0x7ea NEW_2
	if(var_324_bool == 0) goto Label_2034; // 0x7ec JumpB
	var_341_bool = 0; // 0x7ed PushV
	func_2039(var_322_bool, var_323_bool, var_341_bool); // 0x7ee NEW_2
	if(var_341_bool == 0) goto Label_2034; // 0x7f0 JumpB
	var_323_bool = 1; // 0x7f1 MovB
	
Label_2034:
	if(var_323_bool == 0) goto Label_2037; // 0x7f2 JumpB
	var_322_bool = 1; // 0x7f3 MovB
	return 0; // 0x7f4 Return
	
Label_2037:
	var_322_bool = 0; // 0x7f5 MovB
	return 0; // 0x7f6 Return
}


func_3560(var_21_int)
{
	var_21_int = 2; // 0xde9 MovI
	return 0; // 0xdea Return
}


func_3563(var_29_object)
{
	var_30_object = Obj(); // 0xdec PushV
	var_30_object = var_29_object; // 0xded Mov
	func_3634(var_30_object); // 0xdee NEW_2
	return 0; // 0xdf0 Return
}


func_3056()
{
	var_131_string = "ood1Doberman2_1"; // 0xbf1 PushS
	var_132_int = 1; // 0xbf2 PushI
	SetVariable(var_131_string, var_132_int); // 0xbf3 Func
	return 0; // 0xbf5 Return
}


func_3569()
{
	return 0; // 0xdf1 Return
}


func_3570(var_128_int)
{
	var_128_int = 0; // 0xdf3 MovI
	return 0; // 0xdf4 Return
}


func_3573()
{
	return 0; // 0xdf6 Return
}


func_3062(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0xbf7 PushV
	var_124_string = "ood1Doberman2_1"; // 0xbf8 MovS
	func_3012(var_123_int, var_124_string); // 0xbf9 NEW_2
	var_127_int = 0; // 0xbfb PushI
	var_128_bool = var_123_int == var_127_int; // 0xbfc Eq
	if(var_128_bool == 0) goto Label_3072; // 0xbfd JumpB
	var_121_bool = 1; // 0xbfe MovB
	return 0; // 0xbff Return
	
Label_3072:
	var_121_bool = 0; // 0xc00 MovB
	return 0; // 0xc01 Return
}


func_2039(var_0_object, var_4_bool, var_341_bool)
{
	var_342_object = Obj(); var_343_bool = 0; var_344_float = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_object = Obj(); var_348_bool = 0; var_349_float = 0; var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); // 0x7f7 PushV
	GetScene(var_347_object); // 0x7f8 Func
	var_348_bool = 0; // 0x7fa MovB
	
Label_2043:
	var_352_cvector = CVector(0,0,0); var_353_object = Obj(); // 0x7fb PushV
	var_353_object = var_0_object; // 0x7fc MovT
	func_2424(var_353_object); // 0x7fd NEW_2
	var_358_int = -var_352_cvector; // 0x7ff Neg
	FindDirLength(var_349_float, var_358_int, var_349_float); // 0x800 Func
	var_359_bool = var_349_float < var_4_bool; // 0x802 LT
	if(var_359_bool == 0) goto Label_2053; // 0x803 JumpB
	goto Label_2081; // 0x804 Jump
	
Label_2081:
	var_341_bool = var_348_bool; // 0x821 Mov
	return 10; // 0x822 Return
	
Label_2053:
	Face(var_0_object); // 0x805 Func
	var_360_string = "all"; // 0x807 PushS
	var_361_string = "bjump"; // 0x808 PushS
	PlayAnimation(var_360_string, var_361_string); // 0x809 Func
	GetPFPosition(var_350_cvector); // 0x80b TObjFunc
	GetPFPosition(var_351_cvector); // 0x80d Func
	WaitForAnimEnd(); // 0x80f Func
	func_2127(var_351_cvector); // 0x812 NEW_2
	StopAsync(); // 0x814 Func
	var_362_cvector = CVector(0.0, 0.0, 0.0); // 0x816 PushVec
	SetSpeed(var_362_cvector); // 0x817 Func
	var_348_bool = 1; // 0x819 MovB
	var_363_bool = 0; // 0x81a PushV
	func_1995(var_351_cvector, var_363_bool); // 0x81b NEW_2
	var_364_bool = var_363_bool == 0; // 0x81d Not
	if(var_364_bool == 0) goto Label_2080; // 0x81e JumpB
	goto Label_2081; // 0x81f Jump
	
Label_2080:
	goto Label_2043; // 0x820 Jump
}


func_3578()
{
	return 0; // 0xdfb Return
}


func_3580(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0xdfc PushV
	CanSee(var_34_bool, var_32_object); // 0xdfd Func
	var_31_bool = 1; // 0xdff MovB
	var_35_bool = var_34_bool; // 0xe00 Push
	if(var_35_bool == 0) goto Label_3594; // 0xe01 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0xe02 PushV
	var_37_object = var_32_object; // 0xe03 Mov
	func_2431(var_37_object); // 0xe04 NEW_2
	var_44_int = 2250000; // 0xe06 PushI
	var_45_bool = var_36_float <= var_44_int; // 0xe07 LE
	if(var_45_bool == 0) goto Label_3594; // 0xe08 JumpB
	var_31_bool = 0; // 0xe09 MovB
	
Label_3594:
	return 2; // 0xe0a Return
}


