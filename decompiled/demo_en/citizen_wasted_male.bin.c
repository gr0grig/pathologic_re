task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0xc7 PushI
	if(var_20_int == 0) goto Label_329; // 0xc8 JumpB
	func_2772(); // 0xca NEW_2
	var_22_int = 45795; // 0xcc PushI
	var_23_bool = var_18_object == var_22_int; // 0xcd Eq
	if(var_23_bool == 0) goto Label_271; // 0xce JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xcf PushV
	var_25_object = var_1_object; // 0xd0 MovT
	func_2946(var_25_object); // 0xd1 NEW_2
	if(var_24_bool == 0) goto Label_232; // 0xd3 JumpB
	var_32_string = ""; // 0xd4 PushV
	var_32_string = "Neutral"; // 0xd5 MovS
	func_176(var_19_bool, var_32_string); // 0xd6 NEW_2
	var_49_int = 543337; // 0xd8 PushI
	SetMessage(var_49_int); // 0xd9 TObjFunc
	ClearReplies(); // 0xdb TObjFunc
	var_50_int = 543338; // 0xdd PushI
	var_51_int = 45797; // 0xde PushI
	var_52_int = 45796; // 0xdf PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xe0 TObjFunc
	var_53_int = 543340; // 0xe2 PushI
	var_54_int = -1; // 0xe3 PushI
	var_55_int = 45798; // 0xe4 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xe5 TObjFunc
	return 0; // 0xe7 Return
	
Label_232:
	var_56_string = ""; // 0xe8 PushV
	var_56_string = "Neutral"; // 0xe9 MovS
	func_176(var_19_bool, var_56_string); // 0xea NEW_2
	var_57_int = 538128; // 0xec PushI
	SetMessage(var_57_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_58_bool = 0; // 0xf1 PushV
	var_58_bool = 0; // 0xf2 MovB
	var_59_bool = 0; var_60_object = Obj(); // 0xf3 PushV
	var_60_object = var_1_object; // 0xf4 MovT
	func_2934(var_60_object); // 0xf5 NEW_2
	if(var_59_bool == 0) goto Label_254; // 0xf7 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0xf8 PushV
	var_66_object = var_1_object; // 0xf9 MovT
	func_2958(var_65_bool, var_66_object); // 0xfa NEW_2
	if(var_65_bool == 0) goto Label_254; // 0xfc JumpB
	var_58_bool = 1; // 0xfd MovB
	
Label_254:
	if(var_58_bool == 0) goto Label_260; // 0xfe JumpB
	var_76_int = 538129; // 0xff PushI
	var_77_int = 40001; // 0x100 PushI
	var_78_int = 40000; // 0x101 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x102 TObjFunc
	
Label_260:
	var_79_int = 538133; // 0x104 PushI
	var_80_int = -1; // 0x105 PushI
	var_81_int = 40004; // 0x106 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x107 TObjFunc
	var_82_int = 538134; // 0x109 PushI
	var_83_int = -1; // 0x10a PushI
	var_84_int = 40005; // 0x10b PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_85_int = 40001; // 0x10f PushI
	var_86_bool = var_18_object == var_85_int; // 0x110 Eq
	if(var_86_bool == 0) goto Label_294; // 0x111 JumpB
	var_87_string = ""; // 0x112 PushV
	var_87_string = "Neutral"; // 0x113 MovS
	func_176(var_19_bool, var_87_string); // 0x114 NEW_2
	var_88_int = 538130; // 0x116 PushI
	SetMessage(var_88_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_89_int = 538131; // 0x11b PushI
	var_90_int = -1; // 0x11c PushI
	var_91_int = 40002; // 0x11d PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x11e TObjFunc
	var_92_int = 538132; // 0x120 PushI
	var_93_int = -1; // 0x121 PushI
	var_94_int = 40003; // 0x122 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_95_int = 45797; // 0x126 PushI
	var_96_bool = var_18_object == var_95_int; // 0x127 Eq
	if(var_96_bool == 0) goto Label_317; // 0x128 JumpB
	var_97_string = ""; // 0x129 PushV
	var_97_string = "Neutral"; // 0x12a MovS
	func_176(var_19_bool, var_97_string); // 0x12b NEW_2
	var_98_int = 543339; // 0x12d PushI
	SetMessage(var_98_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_99_int = 543341; // 0x132 PushI
	var_100_int = -1; // 0x133 PushI
	var_101_int = 45799; // 0x134 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x135 TObjFunc
	var_102_int = 543342; // 0x137 PushI
	var_103_int = -1; // 0x138 PushI
	var_104_int = 45800; // 0x139 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_3_string = 1; // 0x13d TMovB
	var_105_bool = 0; // 0x13e PushV
	func_3717(var_105_bool); // 0x13f NEW_2
	if(var_105_bool == 0) goto Label_325; // 0x141 JumpB
	lshStopAnimation(); // 0x142 Func
	goto Label_327; // 0x144 Jump
	
Label_327:
	return 0; // 0x147 Return
	
Label_325:
	StopAnimation(); // 0x145 Func
	
Label_329:
	return 0; // 0x149 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x159 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x15a PushV
	var_22_object = var_18_bool; // 0x15b Mov
	func_3663(var_22_object); // 0x15c NEW_2
	var_20_int = var_21_int; // 0x15d Mov
	var_23_int = 0; // 0x15f PushI
	var_24_bool = var_20_int > var_23_int; // 0x160 GT
	if(var_24_bool == 0) goto Label_358; // 0x161 JumpB
	var_25_object = Obj(); // 0x162 PushV
	var_25_object = var_18_bool; // 0x163 Mov
	func_3666(var_25_object); // 0x164 NEW_2
	
Label_358:
	return 2; // 0x166 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3672(); // 0x168 NEW_2
	return 0; // 0x16a Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x1e1 Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x1e3 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x1e5 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x1fe PushV
	var_21_int = 0; var_22_object = Obj(); // 0x1ff PushV
	var_22_object = var_18_bool; // 0x200 Mov
	func_3663(var_22_object); // 0x201 NEW_2
	var_20_int = var_21_int; // 0x202 Mov
	var_23_int = 0; // 0x204 PushI
	var_24_bool = var_20_int > var_23_int; // 0x205 GT
	if(var_24_bool == 0) goto Label_529; // 0x206 JumpB
	var_25_int = 1; // 0x207 PushI
	var_26_bool = var_20_int > var_25_int; // 0x208 GT
	if(var_26_bool == 0) goto Label_525; // 0x209 JumpB
	func_697(var_20_int); // 0x20b NEW_2
	
Label_525:
	var_28_object = Obj(); // 0x20d PushV
	var_28_object = var_18_bool; // 0x20e Mov
	func_3666(var_28_object); // 0x20f NEW_2
	
Label_529:
	return 2; // 0x211 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x212 PushV
	var_21_object = Obj(); // 0x213 PushV
	var_21_object = var_18_bool; // 0x214 Mov
	func_3394(var_21_object); // 0x215 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x217 PushV
	var_31_object = var_18_bool; // 0x218 Mov
	func_3477(var_30_int, var_31_object); // 0x219 NEW_2
	var_20_int = var_30_int; // 0x21a Mov
	var_66_int = 0; // 0x21c PushI
	var_67_bool = var_20_int > var_66_int; // 0x21d GT
	if(var_67_bool == 0) goto Label_553; // 0x21e JumpB
	var_68_int = 1; // 0x21f PushI
	var_69_bool = var_20_int > var_68_int; // 0x220 GT
	if(var_69_bool == 0) goto Label_549; // 0x221 JumpB
	func_697(var_20_int); // 0x223 NEW_2
	
Label_549:
	var_71_object = Obj(); // 0x225 PushV
	var_71_object = var_18_bool; // 0x226 Mov
	func_3487(var_71_object); // 0x227 NEW_2
	
Label_553:
	return 2; // 0x229 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x22a PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x22b PushV
	var_24_object = var_18_bool; // 0x22c Mov
	var_25_object = var_19_object; // 0x22d Mov
	var_26_bool = var_20_bool; // 0x22e Mov
	func_3748(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x22f NEW_2
	if(var_23_bool == 0) goto Label_581; // 0x231 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x232 PushV
	var_86_object = var_18_bool; // 0x233 Mov
	var_87_bool = var_20_bool; // 0x234 Mov
	func_3570(var_86_object, var_87_bool); // 0x235 NEW_2
	var_22_int = var_85_int; // 0x236 Mov
	var_118_int = 0; // 0x238 PushI
	var_119_bool = var_22_int > var_118_int; // 0x239 GT
	if(var_119_bool == 0) goto Label_581; // 0x23a JumpB
	var_120_int = 1; // 0x23b PushI
	var_121_bool = var_22_int > var_120_int; // 0x23c GT
	if(var_121_bool == 0) goto Label_577; // 0x23d JumpB
	func_697(var_22_int); // 0x23f NEW_2
	
Label_577:
	var_123_object = Obj(); // 0x241 PushV
	var_123_object = var_18_bool; // 0x242 Mov
	func_3577(var_123_object); // 0x243 NEW_2
	
Label_581:
	return 2; // 0x245 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x246 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x247 PushV
	var_22_object = var_18_bool; // 0x248 Mov
	func_3612(var_22_object); // 0x249 NEW_2
	var_20_int = var_21_int; // 0x24a Mov
	var_23_int = 0; // 0x24c PushI
	var_24_bool = var_20_int > var_23_int; // 0x24d GT
	if(var_24_bool == 0) goto Label_601; // 0x24e JumpB
	var_25_int = 1; // 0x24f PushI
	var_26_bool = var_20_int > var_25_int; // 0x250 GT
	if(var_26_bool == 0) goto Label_597; // 0x251 JumpB
	func_697(var_20_int); // 0x253 NEW_2
	
Label_597:
	var_28_object = Obj(); // 0x255 PushV
	var_28_object = var_18_bool; // 0x256 Mov
	func_3615(); // 0x257 NEW_2
	
Label_601:
	return 2; // 0x259 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x25a PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x25b PushV
	var_23_object = var_18_object; // 0x25c Mov
	var_24_string = var_19_bool; // 0x25d Mov
	func_3308(var_22_bool, var_23_object, var_24_string); // 0x25e NEW_2
	if(var_22_bool == 0) goto Label_618; // 0x260 JumpB
	func_697(var_21_int); // 0x262 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x264 PushV
	var_51_object = var_18_object; // 0x265 Mov
	var_52_string = var_19_bool; // 0x266 Mov
	func_3340(var_51_object, var_52_string); // 0x267 NEW_2
	goto Label_638; // 0x269 Jump
	
Label_638:
	return 2; // 0x27e Return
	
Label_618:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x26a PushV
	var_128_string = var_19_bool; // 0x26b Mov
	var_129_object = var_18_object; // 0x26c Mov
	func_3617(var_127_int, var_128_string, var_129_object); // 0x26d NEW_2
	var_21_int = var_127_int; // 0x26e Mov
	var_171_int = 0; // 0x270 PushI
	var_172_bool = var_21_int > var_171_int; // 0x271 GT
	if(var_172_bool == 0) goto Label_638; // 0x272 JumpB
	var_173_int = 1; // 0x273 PushI
	var_174_bool = var_21_int > var_173_int; // 0x274 GT
	if(var_174_bool == 0) goto Label_633; // 0x275 JumpB
	func_697(var_21_int); // 0x277 NEW_2
	
Label_633:
	var_175_string = ""; var_176_object = Obj(); // 0x279 PushV
	var_175_string = var_19_bool; // 0x27a Mov
	var_176_object = var_18_object; // 0x27b Mov
	func_3629(var_175_string, var_176_object); // 0x27c NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x280 PushV
	var_20_string = var_18_bool; // 0x281 Mov
	func_3407(var_19_bool, var_20_string); // 0x282 NEW_2
	if(var_19_bool == 0) goto Label_652; // 0x284 JumpB
	func_697(var_18_bool); // 0x286 NEW_2
	var_29_string = ""; // 0x288 PushV
	var_29_string = var_18_bool; // 0x289 Mov
	func_3423(var_29_string); // 0x28a NEW_2
	
Label_652:
	return 0; // 0x28c Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x28e PushV
	var_20_object = var_18_bool; // 0x28f Mov
	func_3365(var_19_bool, var_20_object); // 0x290 NEW_2
	if(var_19_bool == 0) goto Label_667; // 0x292 JumpB
	func_697(var_18_bool); // 0x294 NEW_2
	var_32_object = Obj(); // 0x296 PushV
	var_32_object = var_18_bool; // 0x297 Mov
	func_3388(var_32_object); // 0x298 NEW_2
	goto Label_671; // 0x29a Jump
	
Label_671:
	return 0; // 0x29f Return
	
Label_667:
	var_34_object = Obj(); // 0x29b PushV
	var_34_object = var_18_bool; // 0x29c Mov
	func_722(var_18_bool, var_34_object); // 0x29d NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x2a1 PushV
	var_19_object = var_18_bool; // 0x2a2 Mov
	func_722(var_18_bool, var_19_object); // 0x2a3 NEW_2
	return 0; // 0x2a5 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x2a7 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x2a8 Neq
	if(var_20_bool == 0) goto Label_683; // 0x2a9 JumpB
	return 0; // 0x2aa Return
	
Label_683:
	var_2_object = 0; // 0x2ab TMovB
	var_21_int = 110; // 0x2ac PushI
	KillTimer(var_21_int); // 0x2ad Func
	ResetAAS(); // 0x2af Func
	return 0; // 0x2b1 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_697(var_17_bool); // 0x2b3 NEW_2
	func_3672(); // 0x2b6 NEW_2
	return 0; // 0x2b8 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_697(var_18_bool); // 0x2cb NEW_2
	var_20_object = Obj(); // 0x2cd PushV
	var_20_object = var_18_bool; // 0x2ce Mov
	func_3284(); // 0x2cf NEW_2
	return 0; // 0x2d1 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x33b Func
	return 0; // 0x33d Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x33e Func
	return 0; // 0x340 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x357 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x358 PushV
	var_22_object = var_18_bool; // 0x359 Mov
	func_3663(var_22_object); // 0x35a NEW_2
	var_20_int = var_21_int; // 0x35b Mov
	var_23_int = 0; // 0x35d PushI
	var_24_bool = var_20_int > var_23_int; // 0x35e GT
	if(var_24_bool == 0) goto Label_874; // 0x35f JumpB
	var_25_int = 1; // 0x360 PushI
	var_26_bool = var_20_int > var_25_int; // 0x361 GT
	if(var_26_bool == 0) goto Label_870; // 0x362 JumpB
	func_1100(); // 0x364 NEW_2
	
Label_870:
	var_27_object = Obj(); // 0x366 PushV
	var_27_object = var_18_bool; // 0x367 Mov
	func_3666(var_27_object); // 0x368 NEW_2
	
Label_874:
	return 2; // 0x36a Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x36b PushV
	var_21_object = Obj(); // 0x36c PushV
	var_21_object = var_18_bool; // 0x36d Mov
	func_3394(var_21_object); // 0x36e NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x370 PushV
	var_31_object = var_18_bool; // 0x371 Mov
	func_3477(var_30_int, var_31_object); // 0x372 NEW_2
	var_20_int = var_30_int; // 0x373 Mov
	var_66_int = 0; // 0x375 PushI
	var_67_bool = var_20_int > var_66_int; // 0x376 GT
	if(var_67_bool == 0) goto Label_898; // 0x377 JumpB
	var_68_int = 1; // 0x378 PushI
	var_69_bool = var_20_int > var_68_int; // 0x379 GT
	if(var_69_bool == 0) goto Label_894; // 0x37a JumpB
	func_1100(); // 0x37c NEW_2
	
Label_894:
	var_70_object = Obj(); // 0x37e PushV
	var_70_object = var_18_bool; // 0x37f Mov
	func_3487(var_70_object); // 0x380 NEW_2
	
Label_898:
	return 2; // 0x382 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x383 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x384 PushV
	var_24_object = var_18_bool; // 0x385 Mov
	var_25_object = var_19_object; // 0x386 Mov
	var_26_bool = var_20_bool; // 0x387 Mov
	func_3748(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x388 NEW_2
	if(var_23_bool == 0) goto Label_926; // 0x38a JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x38b PushV
	var_86_object = var_18_bool; // 0x38c Mov
	var_87_bool = var_20_bool; // 0x38d Mov
	func_3570(var_86_object, var_87_bool); // 0x38e NEW_2
	var_22_int = var_85_int; // 0x38f Mov
	var_118_int = 0; // 0x391 PushI
	var_119_bool = var_22_int > var_118_int; // 0x392 GT
	if(var_119_bool == 0) goto Label_926; // 0x393 JumpB
	var_120_int = 1; // 0x394 PushI
	var_121_bool = var_22_int > var_120_int; // 0x395 GT
	if(var_121_bool == 0) goto Label_922; // 0x396 JumpB
	func_1100(); // 0x398 NEW_2
	
Label_922:
	var_122_object = Obj(); // 0x39a PushV
	var_122_object = var_18_bool; // 0x39b Mov
	func_3577(var_122_object); // 0x39c NEW_2
	
Label_926:
	return 2; // 0x39e Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x39f PushV
	var_21_int = 0; var_22_object = Obj(); // 0x3a0 PushV
	var_22_object = var_18_bool; // 0x3a1 Mov
	func_3612(var_22_object); // 0x3a2 NEW_2
	var_20_int = var_21_int; // 0x3a3 Mov
	var_23_int = 0; // 0x3a5 PushI
	var_24_bool = var_20_int > var_23_int; // 0x3a6 GT
	if(var_24_bool == 0) goto Label_946; // 0x3a7 JumpB
	var_25_int = 1; // 0x3a8 PushI
	var_26_bool = var_20_int > var_25_int; // 0x3a9 GT
	if(var_26_bool == 0) goto Label_942; // 0x3aa JumpB
	func_1100(); // 0x3ac NEW_2
	
Label_942:
	var_27_object = Obj(); // 0x3ae PushV
	var_27_object = var_18_bool; // 0x3af Mov
	func_3615(); // 0x3b0 NEW_2
	
Label_946:
	return 2; // 0x3b2 Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x3b3 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x3b4 PushV
	var_23_object = var_18_object; // 0x3b5 Mov
	var_24_string = var_19_bool; // 0x3b6 Mov
	func_3308(var_22_bool, var_23_object, var_24_string); // 0x3b7 NEW_2
	if(var_22_bool == 0) goto Label_963; // 0x3b9 JumpB
	func_1100(); // 0x3bb NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x3bd PushV
	var_50_object = var_18_object; // 0x3be Mov
	var_51_string = var_19_bool; // 0x3bf Mov
	func_3340(var_50_object, var_51_string); // 0x3c0 NEW_2
	goto Label_983; // 0x3c2 Jump
	
Label_983:
	return 2; // 0x3d7 Return
	
Label_963:
	var_126_int = 0; var_127_string = ""; var_128_object = Obj(); // 0x3c3 PushV
	var_127_string = var_19_bool; // 0x3c4 Mov
	var_128_object = var_18_object; // 0x3c5 Mov
	func_3617(var_126_int, var_127_string, var_128_object); // 0x3c6 NEW_2
	var_21_int = var_126_int; // 0x3c7 Mov
	var_170_int = 0; // 0x3c9 PushI
	var_171_bool = var_21_int > var_170_int; // 0x3ca GT
	if(var_171_bool == 0) goto Label_983; // 0x3cb JumpB
	var_172_int = 1; // 0x3cc PushI
	var_173_bool = var_21_int > var_172_int; // 0x3cd GT
	if(var_173_bool == 0) goto Label_978; // 0x3ce JumpB
	func_1100(); // 0x3d0 NEW_2
	
Label_978:
	var_174_string = ""; var_175_object = Obj(); // 0x3d2 PushV
	var_174_string = var_19_bool; // 0x3d3 Mov
	var_175_object = var_18_object; // 0x3d4 Mov
	func_3629(var_174_string, var_175_object); // 0x3d5 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x3d9 PushV
	var_20_string = var_18_bool; // 0x3da Mov
	func_3407(var_19_bool, var_20_string); // 0x3db NEW_2
	if(var_19_bool == 0) goto Label_997; // 0x3dd JumpB
	func_1100(); // 0x3df NEW_2
	var_28_string = ""; // 0x3e1 PushV
	var_28_string = var_18_bool; // 0x3e2 Mov
	func_3423(var_28_string); // 0x3e3 NEW_2
	
Label_997:
	return 0; // 0x3e5 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1100(); // 0x3e7 NEW_2
	func_3672(); // 0x3ea NEW_2
	return 0; // 0x3ec Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x3ee PushV
	var_20_object = var_18_bool; // 0x3ef Mov
	func_3365(var_19_bool, var_20_object); // 0x3f0 NEW_2
	if(var_19_bool == 0) goto Label_1018; // 0x3f2 JumpB
	func_1100(); // 0x3f4 NEW_2
	var_31_object = Obj(); // 0x3f6 PushV
	var_31_object = var_18_bool; // 0x3f7 Mov
	func_3388(var_31_object); // 0x3f8 NEW_2
	
Label_1018:
	return 0; // 0x3fa Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x489 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x48a PushV
	var_22_object = var_18_bool; // 0x48b Mov
	func_3663(var_22_object); // 0x48c NEW_2
	var_20_int = var_21_int; // 0x48d Mov
	var_23_int = 0; // 0x48f PushI
	var_24_bool = var_20_int > var_23_int; // 0x490 GT
	if(var_24_bool == 0) goto Label_1180; // 0x491 JumpB
	var_25_int = 1; // 0x492 PushI
	var_26_bool = var_20_int > var_25_int; // 0x493 GT
	if(var_26_bool == 0) goto Label_1176; // 0x494 JumpB
	func_1304(); // 0x496 NEW_2
	
Label_1176:
	var_29_object = Obj(); // 0x498 PushV
	var_29_object = var_18_bool; // 0x499 Mov
	func_3666(var_29_object); // 0x49a NEW_2
	
Label_1180:
	return 2; // 0x49c Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x49d PushV
	var_21_object = Obj(); // 0x49e PushV
	var_21_object = var_18_bool; // 0x49f Mov
	func_3394(var_21_object); // 0x4a0 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x4a2 PushV
	var_31_object = var_18_bool; // 0x4a3 Mov
	func_3477(var_30_int, var_31_object); // 0x4a4 NEW_2
	var_20_int = var_30_int; // 0x4a5 Mov
	var_66_int = 0; // 0x4a7 PushI
	var_67_bool = var_20_int > var_66_int; // 0x4a8 GT
	if(var_67_bool == 0) goto Label_1204; // 0x4a9 JumpB
	var_68_int = 1; // 0x4aa PushI
	var_69_bool = var_20_int > var_68_int; // 0x4ab GT
	if(var_69_bool == 0) goto Label_1200; // 0x4ac JumpB
	func_1304(); // 0x4ae NEW_2
	
Label_1200:
	var_72_object = Obj(); // 0x4b0 PushV
	var_72_object = var_18_bool; // 0x4b1 Mov
	func_3487(var_72_object); // 0x4b2 NEW_2
	
Label_1204:
	return 2; // 0x4b4 Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x4b5 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x4b6 PushV
	var_24_object = var_18_bool; // 0x4b7 Mov
	var_25_object = var_19_object; // 0x4b8 Mov
	var_26_bool = var_20_bool; // 0x4b9 Mov
	func_3748(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x4ba NEW_2
	if(var_23_bool == 0) goto Label_1232; // 0x4bc JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x4bd PushV
	var_86_object = var_18_bool; // 0x4be Mov
	var_87_bool = var_20_bool; // 0x4bf Mov
	func_3570(var_86_object, var_87_bool); // 0x4c0 NEW_2
	var_22_int = var_85_int; // 0x4c1 Mov
	var_118_int = 0; // 0x4c3 PushI
	var_119_bool = var_22_int > var_118_int; // 0x4c4 GT
	if(var_119_bool == 0) goto Label_1232; // 0x4c5 JumpB
	var_120_int = 1; // 0x4c6 PushI
	var_121_bool = var_22_int > var_120_int; // 0x4c7 GT
	if(var_121_bool == 0) goto Label_1228; // 0x4c8 JumpB
	func_1304(); // 0x4ca NEW_2
	
Label_1228:
	var_124_object = Obj(); // 0x4cc PushV
	var_124_object = var_18_bool; // 0x4cd Mov
	func_3577(var_124_object); // 0x4ce NEW_2
	
Label_1232:
	return 2; // 0x4d0 Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x4d1 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x4d2 PushV
	var_22_object = var_18_bool; // 0x4d3 Mov
	func_3612(var_22_object); // 0x4d4 NEW_2
	var_20_int = var_21_int; // 0x4d5 Mov
	var_23_int = 0; // 0x4d7 PushI
	var_24_bool = var_20_int > var_23_int; // 0x4d8 GT
	if(var_24_bool == 0) goto Label_1252; // 0x4d9 JumpB
	var_25_int = 1; // 0x4da PushI
	var_26_bool = var_20_int > var_25_int; // 0x4db GT
	if(var_26_bool == 0) goto Label_1248; // 0x4dc JumpB
	func_1304(); // 0x4de NEW_2
	
Label_1248:
	var_29_object = Obj(); // 0x4e0 PushV
	var_29_object = var_18_bool; // 0x4e1 Mov
	func_3615(); // 0x4e2 NEW_2
	
Label_1252:
	return 2; // 0x4e4 Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x4e5 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x4e6 PushV
	var_23_object = var_18_object; // 0x4e7 Mov
	var_24_string = var_19_bool; // 0x4e8 Mov
	func_3308(var_22_bool, var_23_object, var_24_string); // 0x4e9 NEW_2
	if(var_22_bool == 0) goto Label_1269; // 0x4eb JumpB
	func_1304(); // 0x4ed NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x4ef PushV
	var_52_object = var_18_object; // 0x4f0 Mov
	var_53_string = var_19_bool; // 0x4f1 Mov
	func_3340(var_52_object, var_53_string); // 0x4f2 NEW_2
	goto Label_1289; // 0x4f4 Jump
	
Label_1289:
	return 2; // 0x509 Return
	
Label_1269:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x4f5 PushV
	var_129_string = var_19_bool; // 0x4f6 Mov
	var_130_object = var_18_object; // 0x4f7 Mov
	func_3617(var_128_int, var_129_string, var_130_object); // 0x4f8 NEW_2
	var_21_int = var_128_int; // 0x4f9 Mov
	var_172_int = 0; // 0x4fb PushI
	var_173_bool = var_21_int > var_172_int; // 0x4fc GT
	if(var_173_bool == 0) goto Label_1289; // 0x4fd JumpB
	var_174_int = 1; // 0x4fe PushI
	var_175_bool = var_21_int > var_174_int; // 0x4ff GT
	if(var_175_bool == 0) goto Label_1284; // 0x500 JumpB
	func_1304(); // 0x502 NEW_2
	
Label_1284:
	var_176_string = ""; var_177_object = Obj(); // 0x504 PushV
	var_176_string = var_19_bool; // 0x505 Mov
	var_177_object = var_18_object; // 0x506 Mov
	func_3629(var_176_string, var_177_object); // 0x507 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x50b PushV
	var_20_string = var_18_bool; // 0x50c Mov
	func_3407(var_19_bool, var_20_string); // 0x50d NEW_2
	if(var_19_bool == 0) goto Label_1303; // 0x50f JumpB
	func_1304(); // 0x511 NEW_2
	var_30_string = ""; // 0x513 PushV
	var_30_string = var_18_bool; // 0x514 Mov
	func_3423(var_30_string); // 0x515 NEW_2
	
Label_1303:
	return 0; // 0x517 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1304(); // 0x525 NEW_2
	var_21_object = Obj(); // 0x527 PushV
	var_21_object = var_18_bool; // 0x528 Mov
	func_3284(); // 0x529 NEW_2
	return 0; // 0x52b Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x52c PushV
	var_23_int = 111; // 0x52d PushI
	var_24_bool = var_18_bool != var_23_int; // 0x52e Neq
	if(var_24_bool == 0) goto Label_1329; // 0x52f JumpB
	return 4; // 0x530 Return
	
Label_1329:
	var_25_bool = 0; var_26_object = Obj(); // 0x531 PushV
	var_26_object = var_0_object; // 0x532 MovT
	func_2479(var_25_bool, var_26_object); // 0x533 NEW_2
	var_59_bool = var_25_bool == 0; // 0x535 Not
	if(var_59_bool == 0) goto Label_1339; // 0x536 JumpB
	func_1304(); // 0x538 NEW_2
	return 4; // 0x53a Return
	
Label_1339:
	GetDirection(var_21_cvector); // 0x53b Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x53d PushV
	var_63_object = var_0_object; // 0x53e MovT
	func_2333(var_63_object); // 0x53f NEW_2
	var_22_cvector = var_62_cvector; // 0x540 Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x542 PushV
	var_69_cvector = var_21_cvector; // 0x543 Mov
	var_70_cvector = var_22_cvector; // 0x544 Mov
	func_2873(var_68_float, var_69_cvector, var_70_cvector); // 0x545 NEW_2
	var_92_float = 0.5; // 0x547 PushF
	var_93_bool = var_68_float < var_92_float; // 0x548 LT
	if(var_93_bool == 0) goto Label_1358; // 0x549 JumpB
	var_94_object = Obj(); // 0x54a PushV
	var_94_object = var_0_object; // 0x54b MovT
	func_2629(); // 0x54c NEW_2
	
Label_1358:
	return 4; // 0x54e Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1304(); // 0x550 NEW_2
	func_3672(); // 0x553 NEW_2
	return 0; // 0x555 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x557 PushV
	var_20_object = var_18_bool; // 0x558 Mov
	func_3365(var_19_bool, var_20_object); // 0x559 NEW_2
	if(var_19_bool == 0) goto Label_1379; // 0x55b JumpB
	func_1304(); // 0x55d NEW_2
	var_33_object = Obj(); // 0x55f PushV
	var_33_object = var_18_bool; // 0x560 Mov
	func_3388(var_33_object); // 0x561 NEW_2
	
Label_1379:
	return 0; // 0x563 Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2126(var_17_bool); // 0x809 NEW_2
	func_3672(); // 0x80c NEW_2
	return 0; // 0x80e Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0x841 PushI
	var_20_bool = var_18_int == var_19_int; // 0x842 Eq
	if(var_20_bool == 0) goto Label_2121; // 0x843 JumpB
	var_21_object = Obj(); // 0x844 PushV
	var_21_object = var_1_object; // 0x845 MovT
	func_2914(var_21_object); // 0x846 NEW_2
	goto Label_2125; // 0x848 Jump
	
Label_2125:
	return 0; // 0x84d Return
	
Label_2121:
	var_26_int = 0; // 0x849 PushV
	var_26_int = var_18_int; // 0x84a Mov
	func_2270(var_17_bool, var_18_int, var_26_int); // 0x84b NEW_2
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x85c PushV
	var_19_bool = 0; // 0x85d MovB
	var_20_bool = var_1_object == var_18_object; // 0x85e Eq
	if(var_20_bool == 0) goto Label_2147; // 0x85f JumpB
	var_21_bool = var_2_object == 0; // 0x860 Not
	if(var_21_bool == 0) goto Label_2147; // 0x861 JumpB
	var_19_bool = 1; // 0x862 MovB
	
Label_2147:
	if(var_19_bool == 0) goto Label_2153; // 0x863 JumpB
	var_2_object = 1; // 0x864 TMovB
	var_22_object = Obj(); // 0x865 PushV
	var_22_object = var_18_object; // 0x866 Mov
	func_2761(var_22_object); // 0x867 NEW_2
	
Label_2153:
	return 0; // 0x869 Return
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x86b PushV
	var_19_bool = 0; // 0x86c MovB
	var_20_bool = var_1_object == var_18_object; // 0x86d Eq
	if(var_20_bool == 0) goto Label_2162; // 0x86e JumpB
	var_21_object = var_2_object; // 0x86f PushT
	if(var_21_object == 0) goto Label_2162; // 0x870 JumpB
	var_19_bool = 1; // 0x871 MovB
	
Label_2162:
	if(var_19_bool == 0) goto Label_2167; // 0x872 JumpB
	var_2_object = 0; // 0x873 TMovB
	var_22_string = "head"; // 0x874 PushS
	UnlookAsync(var_22_string); // 0x875 Func
	
Label_2167:
	return 0; // 0x877 Return
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0x8f1 Func
	return 0; // 0x8f3 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_2126(var_18_object); // 0x8fd NEW_2
	var_23_object = Obj(); // 0x8ff PushV
	var_23_object = var_18_object; // 0x900 Mov
	func_3284(); // 0x901 NEW_2
	return 0; // 0x903 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0xcc7 PushV
	var_22_string = "health"; // 0xcc8 PushS
	var_23_bool = var_19_string == var_22_string; // 0xcc9 Eq
	if(var_23_bool == 0) goto Label_3283; // 0xcca JumpB
	var_24_string = "health"; // 0xccb PushS
	GetProperty(var_24_string, var_21_float); // 0xccc Func
	var_25_int = 0; // 0xcce PushI
	var_26_bool = var_21_float <= var_25_int; // 0xccf LE
	if(var_26_bool == 0) goto Label_3283; // 0xcd0 JumpB
	SignalDeath(var_18_object); // 0xcd1 Func
	
Label_3283:
	return 2; // 0xcd3 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0xcd5 PushV
	var_19_object = var_18_object; // 0xcd6 Mov
	func_3263(var_19_object); // 0xcd7 NEW_2
	return 0; // 0xcd9 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0xcdb PushV
	var_22_object = var_18_object; // 0xcdc Mov
	var_23_int = var_19_int; // 0xcdd Mov
	var_24_float = var_20_float; // 0xcde Mov
	func_2547(var_22_object, var_23_int, var_24_float); // 0xcdf NEW_2
	return 0; // 0xce1 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0xce3 PushV
	var_24_object = var_18_object; // 0xce4 Mov
	var_25_int = var_19_int; // 0xce5 Mov
	var_26_float = var_20_float; // 0xce6 Mov
	var_27_cvector = var_22_cvector; // 0xce7 Mov
	var_28_cvector = var_23_cvector; // 0xce8 Mov
	func_2615(var_26_float, var_27_cvector, var_28_cvector); // 0xce9 NEW_2
	return 0; // 0xceb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x1e6 PushB
	SensePlayerOnly(var_18_bool); // 0x1e7 Func
	func_3719(); // 0x1ea NEW_2
	func_501(); // 0x1ed NEW_2
	
Label_495:
	var_2_object = 0; // 0x1ef TMovB
	func_762(var_16_object, var_17_bool); // 0x1f1 NEW_2
	goto Label_495; // 0x1f3 Jump
}


func_2048()
{
	return 0; // 0x801 Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_2645(var_54_object, var_55_float); // 0x5 NEW_2
	var_99_bool = var_53_bool == 0; // 0x7 Not
	if(var_99_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_100_int = 0; // 0xd PushV
	func_3711(var_100_int); // 0xe NEW_2
	SetNPCName(var_100_int); // 0x10 ObjFunc
	var_101_int = 0; // 0x12 PushV
	func_3709(var_101_int); // 0x13 NEW_2
	SetNPCDescription(var_101_int); // 0x15 ObjFunc
	var_102_string = ""; // 0x17 PushV
	func_3713(var_102_string); // 0x18 NEW_2
	SetPhoto(var_102_string); // 0x1a ObjFunc
	var_103_string = ""; // 0x1c PushV
	func_3715(var_103_string); // 0x1d NEW_2
	SetPhoto2(var_103_string); // 0x1f ObjFunc
	var_104_int = 0; // 0x21 PushV
	func_2975(var_104_int); // 0x22 NEW_2
	SetPlayerName(var_104_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_112_bool = var_50_bool; // 0x29 Push
	if(var_112_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_113_object = Obj(); var_114_object = Obj(); // 0x2f PushV
	var_113_object = var_43_object; // 0x30 Mov
	var_114_object = var_49_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_115_object, var_116_object, var_117_string, var_118_bool, var_113_object, var_114_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_52_bool); // 0x36 ObjFunc
	
Label_56:
	var_199_bool = var_52_bool == 0; // 0x38 Not
	if(var_199_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_52_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_200_object = Obj(); // 0x3f PushV
	var_200_object = var_43_object; // 0x40 Mov
	func_2713(); // 0x41 NEW_2
	StopDialog(var_49_object); // 0x43 Func
	GetReturnValue(var_51_int); // 0x45 ObjFunc
	var_42_int = var_51_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2050(var_597_bool)
{
	var_597_bool = 1; // 0x802 MovB
	return 0; // 0x803 Return
}


func_2052(var_493_int)
{
	var_493_int = 1; // 0x804 MovI
	return 0; // 0x805 Return
}


func_2054(var_488_float)
{
	var_488_float = 0.5; // 0x806 MovF
	return 0; // 0x807 Return
}


func_1019()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0; // 0x3fb PushV
	WaitForAnimEnd(); // 0x3fc Func
	var_65_bool = 0; // 0x3fe PushV
	func_2640(var_65_bool); // 0x3ff NEW_2
	var_66_bool = var_65_bool == 0; // 0x401 Not
	if(var_66_bool == 0) goto Label_1028; // 0x402 JumpB
	return 14; // 0x403 Return
	
Label_1028:
	var_67_int = 0; // 0x404 PushV
	func_3443(var_67_int); // 0x405 NEW_2
	var_58_int = var_67_int; // 0x406 Mov
	var_59_int = 0; // 0x408 MovI
	
Label_1033:
	var_80_bool = 0; // 0x409 PushV
	var_80_bool = 0; // 0x40a MovB
	var_81_int = 5; // 0x40b PushI
	var_82_bool = var_59_int < var_81_int; // 0x40c LT
	if(var_82_bool == 0) goto Label_1043; // 0x40d JumpB
	var_83_bool = 0; // 0x40e PushV
	func_2640(var_83_bool); // 0x40f NEW_2
	if(var_83_bool == 0) goto Label_1043; // 0x411 JumpB
	var_80_bool = 1; // 0x412 MovB
	
Label_1043:
	if(var_80_bool == 0) goto Label_1095; // 0x413 JumpB
	var_84_int = 3; // 0x414 PushI
	irand(var_60_int, var_84_int); // 0x415 Func
	var_85_int = 0; // 0x417 PushI
	var_86_bool = var_60_int == var_85_int; // 0x418 Eq
	if(var_86_bool == 0) goto Label_1067; // 0x419 JumpB
	var_87_int = var_58_int; // 0x41a Push
	if(var_87_int == 0) goto Label_1066; // 0x41b JumpB
	irand(var_61_int, var_58_int); // 0x41c Func
	var_88_string = "all"; // 0x41e PushS
	var_89_string = ""; var_90_int = 0; // 0x41f PushV
	var_90_int = var_61_int; // 0x420 Mov
	func_3436(var_89_string, var_90_int); // 0x421 NEW_2
	PlayAnimation(var_88_string, var_89_string); // 0x423 Func
	WaitForAnimEnd(var_62_bool); // 0x425 Func
	var_91_bool = var_62_bool == 0; // 0x427 Not
	if(var_91_bool == 0) goto Label_1066; // 0x428 JumpB
	goto Label_1095; // 0x429 Jump
	
Label_1095:
	ResetAAS(); // 0x447 Func
	return 14; // 0x449 Return
	
Label_1066:
	goto Label_1084; // 0x42a Jump
	
Label_1084:
	var_92_bool = 0; // 0x43c PushV
	func_1098(var_92_bool); // 0x43d NEW_2
	var_93_bool = var_92_bool == 0; // 0x43f Not
	if(var_93_bool == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1095; // 0x441 Jump
	
Label_1090:
	ResetAAS(); // 0x442 Func
	var_94_int = 1; // 0x444 PushI
	var_59_int = var_59_int + var_94_int; // 0x445 Add2
	goto Label_1033; // 0x446 Jump
	
Label_1067:
	var_95_int = 1; // 0x42b PushI
	var_96_bool = var_60_int == var_95_int; // 0x42c Eq
	if(var_96_bool == 0) goto Label_1081; // 0x42d JumpB
	var_97_int = 4; // 0x42e PushI
	rand(var_63_float, var_97_int); // 0x42f Func
	var_98_int = 1; // 0x431 PushI
	var_99_int = var_63_float + var_98_int; // 0x432 Add
	Sleep(var_99_int, var_64_bool); // 0x433 Func
	var_100_bool = var_64_bool == 0; // 0x435 Not
	if(var_100_bool == 0) goto Label_1080; // 0x436 JumpB
	goto Label_1095; // 0x437 Jump
	
Label_1080:
	goto Label_1084; // 0x438 Jump
	
Label_1081:
	var_101_int = var_59_int; // 0x439 Push
	if(var_101_int == 0) goto Label_1084; // 0x43a JumpB
	goto Label_1095; // 0x43b Jump
}


func_3083(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; // 0xc0b PushV
	var_116_bool = var_111_bool; // 0xc0c Push
	if(var_116_bool == 0) goto Label_3172; // 0xc0d JumpB
	var_117_int = 0; var_118_int = 0; // 0xc0e PushV
	var_117_int = 0; // 0xc0f MovI
	var_119_int = 100; // 0xc10 PushI
	var_120_int = 0; // 0xc11 PushV
	func_2905(var_120_int); // 0xc12 NEW_2
	var_126_int = 100; // 0xc14 PushI
	var_127_float = var_120_int * var_126_int; // 0xc15 Mult
	var_118_int = var_119_int + var_127_float; // 0xc16 Add2
	func_3011(var_117_int, var_118_int); // 0xc17 NEW_2
	var_145_int = 8; // 0xc19 PushI
	irand(var_114_int, var_145_int); // 0xc1a Func
	var_146_int = 0; // 0xc1c PushI
	var_147_bool = var_114_int == var_146_int; // 0xc1d Eq
	if(var_147_bool == 0) goto Label_3112; // 0xc1e JumpB
	var_148_int = 0; var_149_string = ""; // 0xc1f PushV
	var_149_string = "lemon"; // 0xc20 MovS
	func_3258(var_148_int, var_149_string); // 0xc21 NEW_2
	var_150_int = 0; // 0xc23 PushI
	var_151_int = 1; // 0xc24 PushI
	AddItem(var_115_bool, var_148_int, var_150_int, var_151_int); // 0xc25 Func
	goto Label_3171; // 0xc27 Jump
	
Label_3171:
	goto Label_3257; // 0xc63 Jump
	
Label_3257:
	return 4; // 0xcb9 Return
	
Label_3112:
	var_152_int = 1; // 0xc28 PushI
	var_153_bool = var_114_int == var_152_int; // 0xc29 Eq
	if(var_153_bool == 0) goto Label_3124; // 0xc2a JumpB
	var_154_int = 0; var_155_string = ""; // 0xc2b PushV
	var_155_string = "rusk"; // 0xc2c MovS
	func_3258(var_154_int, var_155_string); // 0xc2d NEW_2
	var_156_int = 0; // 0xc2f PushI
	var_157_int = 1; // 0xc30 PushI
	AddItem(var_115_bool, var_154_int, var_156_int, var_157_int); // 0xc31 Func
	goto Label_3171; // 0xc33 Jump
	
Label_3124:
	var_158_int = 2; // 0xc34 PushI
	var_159_bool = var_114_int == var_158_int; // 0xc35 Eq
	if(var_159_bool == 0) goto Label_3136; // 0xc36 JumpB
	var_160_int = 0; var_161_string = ""; // 0xc37 PushV
	var_161_string = "hook"; // 0xc38 MovS
	func_3258(var_160_int, var_161_string); // 0xc39 NEW_2
	var_162_int = 0; // 0xc3b PushI
	var_163_int = 1; // 0xc3c PushI
	AddItem(var_115_bool, var_160_int, var_162_int, var_163_int); // 0xc3d Func
	goto Label_3171; // 0xc3f Jump
	
Label_3136:
	var_164_int = 4; // 0xc40 PushI
	var_165_bool = var_114_int == var_164_int; // 0xc41 Eq
	if(var_165_bool == 0) goto Label_3148; // 0xc42 JumpB
	var_166_int = 0; var_167_string = ""; // 0xc43 PushV
	var_167_string = "syringe"; // 0xc44 MovS
	func_3258(var_166_int, var_167_string); // 0xc45 NEW_2
	var_168_int = 0; // 0xc47 PushI
	var_169_int = 1; // 0xc48 PushI
	AddItem(var_115_bool, var_166_int, var_168_int, var_169_int); // 0xc49 Func
	goto Label_3171; // 0xc4b Jump
	
Label_3148:
	var_170_int = 5; // 0xc4c PushI
	var_171_bool = var_114_int == var_170_int; // 0xc4d Eq
	if(var_171_bool == 0) goto Label_3160; // 0xc4e JumpB
	var_172_int = 0; var_173_string = ""; // 0xc4f PushV
	var_173_string = "watch"; // 0xc50 MovS
	func_3258(var_172_int, var_173_string); // 0xc51 NEW_2
	var_174_int = 0; // 0xc53 PushI
	var_175_int = 1; // 0xc54 PushI
	AddItem(var_115_bool, var_172_int, var_174_int, var_175_int); // 0xc55 Func
	goto Label_3171; // 0xc57 Jump
	
Label_3160:
	var_176_int = 6; // 0xc58 PushI
	var_177_bool = var_114_int == var_176_int; // 0xc59 Eq
	if(var_177_bool == 0) goto Label_3171; // 0xc5a JumpB
	var_178_int = 0; var_179_string = ""; // 0xc5b PushV
	var_179_string = "razor"; // 0xc5c MovS
	func_3258(var_178_int, var_179_string); // 0xc5d NEW_2
	var_180_int = 0; // 0xc5f PushI
	var_181_int = 1; // 0xc60 PushI
	AddItem(var_115_bool, var_178_int, var_180_int, var_181_int); // 0xc61 Func
	
Label_3172:
	var_182_int = 0; var_183_int = 0; // 0xc64 PushV
	var_182_int = 0; // 0xc65 MovI
	var_184_int = 50; // 0xc66 PushI
	var_185_int = 0; // 0xc67 PushV
	func_2905(var_185_int); // 0xc68 NEW_2
	var_186_int = 50; // 0xc6a PushI
	var_187_float = var_185_int * var_186_int; // 0xc6b Mult
	var_183_int = var_184_int + var_187_float; // 0xc6c Add2
	func_3011(var_182_int, var_183_int); // 0xc6d NEW_2
	var_188_int = 7; // 0xc6f PushI
	irand(var_114_int, var_188_int); // 0xc70 Func
	var_189_int = 0; // 0xc72 PushI
	var_190_bool = var_114_int == var_189_int; // 0xc73 Eq
	if(var_190_bool == 0) goto Label_3198; // 0xc74 JumpB
	var_191_int = 0; var_192_string = ""; // 0xc75 PushV
	var_192_string = "beads"; // 0xc76 MovS
	func_3258(var_191_int, var_192_string); // 0xc77 NEW_2
	var_193_int = 0; // 0xc79 PushI
	var_194_int = 1; // 0xc7a PushI
	AddItem(var_115_bool, var_191_int, var_193_int, var_194_int); // 0xc7b Func
	goto Label_3257; // 0xc7d Jump
	
Label_3198:
	var_195_int = 1; // 0xc7e PushI
	var_196_bool = var_114_int == var_195_int; // 0xc7f Eq
	if(var_196_bool == 0) goto Label_3210; // 0xc80 JumpB
	var_197_int = 0; var_198_string = ""; // 0xc81 PushV
	var_198_string = "bracelet"; // 0xc82 MovS
	func_3258(var_197_int, var_198_string); // 0xc83 NEW_2
	var_199_int = 0; // 0xc85 PushI
	var_200_int = 1; // 0xc86 PushI
	AddItem(var_115_bool, var_197_int, var_199_int, var_200_int); // 0xc87 Func
	goto Label_3257; // 0xc89 Jump
	
Label_3210:
	var_201_int = 2; // 0xc8a PushI
	var_202_bool = var_114_int == var_201_int; // 0xc8b Eq
	if(var_202_bool == 0) goto Label_3222; // 0xc8c JumpB
	var_203_int = 0; var_204_string = ""; // 0xc8d PushV
	var_204_string = "ear_ring"; // 0xc8e MovS
	func_3258(var_203_int, var_204_string); // 0xc8f NEW_2
	var_205_int = 0; // 0xc91 PushI
	var_206_int = 1; // 0xc92 PushI
	AddItem(var_115_bool, var_203_int, var_205_int, var_206_int); // 0xc93 Func
	goto Label_3257; // 0xc95 Jump
	
Label_3222:
	var_207_int = 3; // 0xc96 PushI
	var_208_bool = var_114_int == var_207_int; // 0xc97 Eq
	if(var_208_bool == 0) goto Label_3234; // 0xc98 JumpB
	var_209_int = 0; var_210_string = ""; // 0xc99 PushV
	var_210_string = "gold_ring"; // 0xc9a MovS
	func_3258(var_209_int, var_210_string); // 0xc9b NEW_2
	var_211_int = 0; // 0xc9d PushI
	var_212_int = 1; // 0xc9e PushI
	AddItem(var_115_bool, var_209_int, var_211_int, var_212_int); // 0xc9f Func
	goto Label_3257; // 0xca1 Jump
	
Label_3234:
	var_213_int = 4; // 0xca2 PushI
	var_214_bool = var_114_int == var_213_int; // 0xca3 Eq
	if(var_214_bool == 0) goto Label_3246; // 0xca4 JumpB
	var_215_int = 0; var_216_string = ""; // 0xca5 PushV
	var_216_string = "silver_ring"; // 0xca6 MovS
	func_3258(var_215_int, var_216_string); // 0xca7 NEW_2
	var_217_int = 0; // 0xca9 PushI
	var_218_int = 1; // 0xcaa PushI
	AddItem(var_115_bool, var_215_int, var_217_int, var_218_int); // 0xcab Func
	goto Label_3257; // 0xcad Jump
	
Label_3246:
	var_219_int = 5; // 0xcae PushI
	var_220_bool = var_114_int == var_219_int; // 0xcaf Eq
	if(var_220_bool == 0) goto Label_3257; // 0xcb0 JumpB
	var_221_int = 0; var_222_string = ""; // 0xcb1 PushV
	var_222_string = "flower"; // 0xcb2 MovS
	func_3258(var_221_int, var_222_string); // 0xcb3 NEW_2
	var_223_int = 0; // 0xcb5 PushI
	var_224_int = 1; // 0xcb6 PushI
	AddItem(var_115_bool, var_221_int, var_223_int, var_224_int); // 0xcb7 Func
}


func_2063(var_2_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; // 0x80f PushV
	var_273_object = Obj(); // 0x810 PushV
	var_273_object = var_261_object; // 0x811 Mov
	func_2914(var_273_object); // 0x812 NEW_2
	var_274_int = 1; // 0x814 PushI
	var_275_int = 5; // 0x815 PushI
	SetTimer(var_274_int, var_275_int); // 0x816 Func
	CanSee(var_271_bool, var_261_object); // 0x818 Func
	var_276_bool = var_271_bool; // 0x81a Push
	if(var_276_bool == 0) goto Label_2082; // 0x81b JumpB
	var_2_object = 1; // 0x81c TMovB
	var_277_object = Obj(); // 0x81d PushV
	var_277_object = var_261_object; // 0x81e Mov
	func_2761(var_277_object); // 0x81f NEW_2
	goto Label_2083; // 0x821 Jump
	
Label_2083:
	var_278_bool = 0; var_279_object = Obj(); // 0x823 PushV
	var_279_object = var_261_object; // 0x824 Mov
	func_2348(var_278_bool, var_279_object); // 0x825 NEW_2
	if(var_278_bool == 0) goto Label_2093; // 0x827 JumpB
	var_282_object = Obj(); // 0x828 PushV
	func_2820(var_282_object); // 0x829 NEW_2
	SendPlayerEnemy(var_261_object, var_282_object); // 0x82b Func
	
Label_2093:
	var_283_bool = 0; var_284_object = Obj(); var_285_float = 0; var_286_float = 0; var_287_bool = 0; var_288_bool = 0; // 0x82d PushV
	var_284_object = var_261_object; // 0x82e Mov
	var_285_float = var_262_float; // 0x82f Mov
	var_286_float = var_263_float; // 0x830 Mov
	var_287_bool = var_264_bool; // 0x831 Mov
	var_288_bool = var_265_bool; // 0x832 Mov
	func_2168(var_271_bool, var_272_bool, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool); // 0x833 NEW_2
	var_272_bool = var_283_bool; // 0x834 Mov
	var_334_object = var_2_object; // 0x836 PushT
	if(var_334_object == 0) goto Label_2107; // 0x837 JumpB
	var_335_string = "head"; // 0x838 PushS
	UnlookAsync(var_335_string); // 0x839 Func
	
Label_2107:
	var_336_int = 1; // 0x83b PushI
	KillTimer(var_336_int); // 0x83c Func
	var_260_bool = var_272_bool; // 0x83e Mov
	return 4; // 0x83f Return
	
Label_2082:
	var_2_object = 0; // 0x822 TMovB
}


func_3612(var_21_int)
{
	var_21_int = 0; // 0xe1d MovI
	return 0; // 0xe1e Return
}


func_2041(var_572_int)
{
	var_572_int = 0; // 0x7f9 MovI
	return 0; // 0x7fa Return
}


func_3615()
{
	return 0; // 0xe20 Return
}


func_3617(var_128_int, var_129_string, var_130_object)
{
	var_131_string = "killme"; // 0xe22 PushS
	var_132_bool = var_129_string == var_131_string; // 0xe23 Eq
	if(var_132_bool == 0) goto Label_3627; // 0xe24 JumpB
	var_133_int = 0; var_134_object = Obj(); // 0xe25 PushV
	var_134_object = var_130_object; // 0xe26 Mov
	func_3639(var_133_int, var_134_object); // 0xe27 NEW_2
	var_128_int = var_133_int; // 0xe28 Mov
	return 0; // 0xe2a Return
	
Label_3627:
	var_128_int = 0; // 0xe2b MovI
	return 0; // 0xe2c Return
}


func_3629(var_176_string, var_177_object)
{
	var_178_string = "killme"; // 0xe2e PushS
	var_179_bool = var_176_string == var_178_string; // 0xe2f Eq
	if(var_179_bool == 0) goto Label_3638; // 0xe30 JumpB
	var_180_object = Obj(); // 0xe31 PushV
	var_180_object = var_177_object; // 0xe32 Mov
	func_3657(var_180_object); // 0xe33 NEW_2
	return 0; // 0xe35 Return
	
Label_3638:
	return 0; // 0xe36 Return
}


func_2615(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xa37 PushV
	GetScene(var_31_object); // 0xa38 Func
	var_33_string = "scripted"; // 0xa3a PushS
	var_34_string = "blood_dir.xml"; // 0xa3b PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xa3c Func
	var_35_object = Obj(); // 0xa3e PushV
	var_35_object = var_24_object; // 0xa3f Mov
	func_2503(var_35_object); // 0xa40 NEW_2
	return 4; // 0xa42 Return
}


func_3639(var_133_int, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0xe38 PushV
	var_136_object = var_134_object; // 0xe39 Mov
	func_2479(var_135_bool, var_136_object); // 0xe3a NEW_2
	var_169_bool = var_135_bool == 0; // 0xe3c Not
	if(var_169_bool == 0) goto Label_3648; // 0xe3d JumpB
	var_133_int = 0; // 0xe3e MovI
	return 0; // 0xe3f Return
	
Label_3648:
	var_170_bool = 0; var_171_object = Obj(); // 0xe40 PushV
	var_171_object = var_134_object; // 0xe41 Mov
	func_3745(var_171_object); // 0xe42 NEW_2
	if(var_170_bool == 0) goto Label_3655; // 0xe44 JumpB
	var_133_int = 2; // 0xe45 MovI
	goto Label_3656; // 0xe46 Jump
	
Label_3656:
	return 0; // 0xe48 Return
	
Label_3655:
	var_133_int = 0; // 0xe47 MovI
}


func_2629()
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0xa45 PushV
	GetPosition(var_98_cvector); // 0xa46 ObjFunc
	GetPosition(var_99_cvector); // 0xa48 Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0xa4a Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0xa4b PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0xa4c PushE
	RotateAsync(var_101_float, var_102_float); // 0xa4d Func
	return 6; // 0xa4f Return
}


func_3657(var_180_object)
{
	var_181_object = Obj(); // 0xe4a PushV
	var_181_object = var_180_object; // 0xe4b Mov
	func_3487(var_181_object); // 0xe4c NEW_2
	return 0; // 0xe4e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_113_object, var_114_object)
{
	var_0_object = var_114_object; // 0x4b TMov
	var_1_object = var_113_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_119_int = 1; // 0x4e PushI
	if(var_119_int == 0) goto Label_146; // 0x4f JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x50 PushV
	var_121_object = var_1_object; // 0x51 MovT
	func_2946(var_121_object); // 0x52 NEW_2
	if(var_120_bool == 0) goto Label_105; // 0x54 JumpB
	var_128_string = ""; // 0x55 PushV
	var_128_string = "Neutral"; // 0x56 MovS
	func_176(var_114_object, var_128_string); // 0x57 NEW_2
	var_145_int = 543337; // 0x59 PushI
	SetMessage(var_145_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_146_int = 543338; // 0x5e PushI
	var_147_int = 45797; // 0x5f PushI
	var_148_int = 45796; // 0x60 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x61 TObjFunc
	var_149_int = 543340; // 0x63 PushI
	var_150_int = -1; // 0x64 PushI
	var_151_int = 45798; // 0x65 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x66 TObjFunc
	goto Label_146; // 0x68 Jump
	
Label_146:
	var_152_bool = 0; // 0x92 PushV
	func_3717(var_152_bool); // 0x93 NEW_2
	if(var_152_bool == 0) goto Label_161; // 0x95 JumpB
	
Label_150:
	lshWaitForAnimEnd(); // 0x96 Func
	var_153_string = var_3_string; // 0x98 PushT
	if(var_153_string == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_160:
	goto Label_175; // 0xa0 Jump
	
Label_175:
	return 0; // 0xaf Return
	
Label_155:
	var_154_string = ""; // 0x9b PushV
	var_154_string = var_2_object; // 0x9c MovT
	func_2730(var_154_string); // 0x9d NEW_2
	goto Label_150; // 0x9f Jump
	
Label_161:
	var_165_string = "all"; // 0xa1 PushS
	var_166_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_165_string, var_166_string); // 0xa3 Func
	
Label_165:
	WaitForAnimEnd(); // 0xa5 Func
	var_167_string = var_3_string; // 0xa7 PushT
	if(var_167_string == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_170:
	var_168_string = "all"; // 0xaa PushS
	var_169_string = "idle"; // 0xab PushS
	PlayAnimation(var_168_string, var_169_string); // 0xac Func
	goto Label_165; // 0xae Jump
	
Label_105:
	var_170_string = ""; // 0x69 PushV
	var_170_string = "Neutral"; // 0x6a MovS
	func_176(var_114_object, var_170_string); // 0x6b NEW_2
	var_171_int = 538128; // 0x6d PushI
	SetMessage(var_171_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_172_bool = 0; // 0x72 PushV
	var_172_bool = 0; // 0x73 MovB
	var_173_bool = 0; var_174_object = Obj(); // 0x74 PushV
	var_174_object = var_1_object; // 0x75 MovT
	func_2934(var_174_object); // 0x76 NEW_2
	if(var_173_bool == 0) goto Label_127; // 0x78 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x79 PushV
	var_180_object = var_1_object; // 0x7a MovT
	func_2958(var_179_bool, var_180_object); // 0x7b NEW_2
	if(var_179_bool == 0) goto Label_127; // 0x7d JumpB
	var_172_bool = 1; // 0x7e MovB
	
Label_127:
	if(var_172_bool == 0) goto Label_133; // 0x7f JumpB
	var_190_int = 538129; // 0x80 PushI
	var_191_int = 40001; // 0x81 PushI
	var_192_int = 40000; // 0x82 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x83 TObjFunc
	
Label_133:
	var_193_int = 538133; // 0x85 PushI
	var_194_int = -1; // 0x86 PushI
	var_195_int = 40004; // 0x87 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x88 TObjFunc
	var_196_int = 538134; // 0x8a PushI
	var_197_int = -1; // 0x8b PushI
	var_198_int = 40005; // 0x8c PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x8d TObjFunc
	goto Label_146; // 0x8f Jump
}


func_1098(var_92_bool)
{
	var_92_bool = 1; // 0x44a MovB
	return 0; // 0x44b Return
}


func_1100()
{
	StopAnimation(); // 0x44c Func
	StopGroup0(); // 0x44e Func
	return 0; // 0x450 Return
}


func_2126(var_2_object)
{
	var_19_int = 1; // 0x84e PushI
	KillTimer(var_19_int); // 0x84f Func
	var_20_object = var_2_object; // 0x851 PushT
	if(var_20_object == 0) goto Label_2135; // 0x852 JumpB
	var_2_object = 0; // 0x853 TMovB
	var_21_string = "head"; // 0x854 PushS
	UnlookAsync(var_21_string); // 0x855 Func
	
Label_2135:
	func_2292(var_18_object); // 0x858 NEW_2
	return 0; // 0x85a Return
}


func_3663(var_21_int)
{
	var_21_int = 2; // 0xe50 MovI
	return 0; // 0xe51 Return
}


func_2640(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0xa50 PushV
	IsLoaded(var_22_bool); // 0xa51 Func
	var_20_bool = var_22_bool; // 0xa53 Mov
	return 2; // 0xa54 Return
}


func_1105(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0x451 PushV
	var_0_object = var_61_object; // 0x452 TMov
	func_1156(var_68_bool); // 0x454 NEW_2
	GetDirection(var_66_cvector); // 0x456 Func
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0x458 PushV
	var_77_object = var_0_object; // 0x459 MovT
	func_2333(var_77_object); // 0x45a NEW_2
	var_67_cvector = var_76_cvector; // 0x45b Mov
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x45d PushV
	var_83_cvector = var_66_cvector; // 0x45e Mov
	var_84_cvector = var_67_cvector; // 0x45f Mov
	func_2873(var_82_float, var_83_cvector, var_84_cvector); // 0x460 NEW_2
	var_106_int = 0; // 0x462 PushI
	var_107_bool = var_82_float < var_106_int; // 0x463 LT
	if(var_107_bool == 0) goto Label_1131; // 0x464 JumpB
	var_108_object = Obj(); // 0x465 PushV
	var_108_object = var_0_object; // 0x466 MovT
	func_2629(); // 0x467 NEW_2
	var_68_bool = 1; // 0x469 MovB
	goto Label_1134; // 0x46a Jump
	
Label_1134:
	var_117_bool = var_68_bool; // 0x46e Push
	if(var_117_bool == 0) goto Label_1150; // 0x46f JumpB
	var_118_object = Obj(); // 0x470 PushV
	var_118_object = var_0_object; // 0x471 MovT
	func_2629(); // 0x472 NEW_2
	var_119_int = 111; // 0x474 PushI
	var_120_float = 0.5; // 0x475 PushF
	SetTimer(var_119_int, var_120_float); // 0x476 Func
	var_121_float = 5.0; // 0x478 PushF
	Sleep(var_121_float); // 0x479 Func
	var_122_int = 111; // 0x47b PushI
	KillTimer(var_122_int); // 0x47c Func
	
Label_1150:
	StopAsync(); // 0x47e Func
	var_123_string = "head"; // 0x480 PushS
	UnlookAsync(var_123_string); // 0x481 Func
	return 6; // 0x483 Return
	
Label_1131:
	var_124_float = 1.5; // 0x46b PushF
	Sleep(var_124_float, var_68_bool); // 0x46c Func
}


func_3666(var_29_object)
{
	var_30_object = Obj(); // 0xe53 PushV
	var_30_object = var_29_object; // 0xe54 Mov
	func_3723(var_30_object); // 0xe55 NEW_2
	return 0; // 0xe57 Return
}


func_2645(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0xa55 PushV
	GetPosition(var_66_cvector); // 0xa56 ObjFunc
	GetEyesHeight(var_65_float); // 0xa58 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0xa5a PushE
	var_74_float = var_74_float + var_65_float; // 0xa5b Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0xa5c PopE
	GetPosition(var_67_cvector); // 0xa5d Func
	GetEyesHeight(var_65_float); // 0xa5f Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0xa61 PushE
	var_75_float = var_75_float + var_65_float; // 0xa62 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0xa63 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0xa64 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0xa65 PushE
	var_76_float = 0; // 0xa66 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0xa67 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0xa68 Or
	var_78_float = sqrt(var_77_int); // 0xa69 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0xa6a Div2
	var_69_cvector = -var_68_cvector; // 0xa6b Neg2
	var_79_float = var_68_cvector * var_55_float; // 0xa6c Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0xa6d PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0xa6e PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0xa6f Xor2
	func_2826(var_80_cvector, var_81_cvector); // 0xa70 NEW_2
	var_88_int = 25; // 0xa72 PushI
	var_89_float = var_80_cvector * var_88_int; // 0xa73 Mult
	var_90_int = var_79_float + var_89_float; // 0xa74 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0xa75 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0xa76 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0xa77 Add2
	IsOverrideActive(var_72_bool); // 0xa78 Func
	var_92_bool = var_72_bool; // 0xa7a Push
	if(var_92_bool == 0) goto Label_2686; // 0xa7b JumpB
	var_53_bool = 0; // 0xa7c MovB
	return 18; // 0xa7d Return
	
Label_2686:
	StopWorld(); // 0xa7e Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0xa80 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0xa82 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0xa83 PushE
	Rotate(var_93_float, var_94_float); // 0xa84 Func
	var_95_bool = 0; // 0xa86 PushV
	func_3717(var_95_bool); // 0xa87 NEW_2
	if(var_95_bool == 0) goto Label_2699; // 0xa89 JumpB
	goto Label_2707; // 0xa8a Jump
	
Label_2707:
	CameraWaitForPlayFinish(); // 0xa93 Func
	ResumeWorld(); // 0xa95 Func
	var_53_bool = 1; // 0xa97 MovB
	return 18; // 0xa98 Return
	
Label_2699:
	var_96_string = "head"; // 0xa8b PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0xa8c Func
	var_97_bool = var_73_bool; // 0xa8e Push
	if(var_97_bool == 0) goto Label_2707; // 0xa8f JumpB
	var_98_string = "head"; // 0xa90 PushS
	LookAsyncCamera(var_98_string); // 0xa91 Func
}


func_1623(var_1_object, var_2_object, var_4_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0); // 0x657 PushV
	var_1_object = 0; // 0x658 TMovI
	
Label_1625:
	var_220_string = "all"; // 0x659 PushS
	var_221_string = "attack_begin"; // 0x65a PushS
	var_222_int = 1; // 0x65b PushI
	var_223_int = var_1_object + var_222_int; // 0x65c Add
	var_224_int = var_221_string + var_223_int; // 0x65d Add
	HasAnimation(var_217_bool, var_220_string, var_224_int); // 0x65e Func
	var_225_bool = var_217_bool == 0; // 0x660 Not
	if(var_225_bool == 0) goto Label_1635; // 0x661 JumpB
	goto Label_1638; // 0x662 Jump
	
Label_1638:
	var_2_object = 0; // 0x666 TMovI
	
Label_1639:
	var_226_string = "attack"; // 0x667 PushS
	var_227_int = 1; // 0x668 PushI
	var_228_int = var_2_object + var_227_int; // 0x669 Add
	var_229_int = var_226_string + var_228_int; // 0x66a Add
	IsExisting3DSound(var_218_bool, var_229_int); // 0x66b Func
	var_230_bool = var_218_bool == 0; // 0x66d Not
	if(var_230_bool == 0) goto Label_1648; // 0x66e JumpB
	goto Label_1651; // 0x66f Jump
	
Label_1651:
	var_231_string = "all"; // 0x673 PushS
	var_232_string = "bjump"; // 0x674 PushS
	GetAnimationOffset(var_219_cvector, var_231_string, var_232_string); // 0x675 Func
	var_233_float = GetByIndex(var_219_cvector, 2); // 0x677 PushE
	var_4_bool = -var_233_float; // 0x678 Neg2
	return 6; // 0x679 Return
	
Label_1648:
	var_234_int = 1; // 0x670 PushI
	var_2_object = var_2_object + var_234_int; // 0x671 Add2
	goto Label_1639; // 0x672 Jump
	
Label_1635:
	var_235_int = 1; // 0x663 PushI
	var_1_object = var_1_object + var_235_int; // 0x664 Add2
	goto Label_1625; // 0x665 Jump
}


func_3672()
{
	return 0; // 0xe58 Return
}


func_3673(var_24_bool)
{
	var_24_bool = 0; // 0xe5a MovB
	return 0; // 0xe5b Return
}


func_3676()
{
	return 0; // 0xe5d Return
}


func_3678(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0xe5e PushV
	CanSee(var_34_bool, var_32_object); // 0xe5f Func
	var_31_bool = 1; // 0xe61 MovB
	var_35_bool = var_34_bool; // 0xe62 Push
	if(var_35_bool == 0) goto Label_3692; // 0xe63 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0xe64 PushV
	var_37_object = var_32_object; // 0xe65 Mov
	func_2340(var_37_object); // 0xe66 NEW_2
	var_44_int = 2250000; // 0xe68 PushI
	var_45_bool = var_36_float <= var_44_int; // 0xe69 LE
	if(var_45_bool == 0) goto Label_3692; // 0xe6a JumpB
	var_31_bool = 0; // 0xe6b MovB
	
Label_3692:
	return 2; // 0xe6c Return
}


func_3693(var_59_object)
{
	var_60_object = Obj(); // 0xe6e PushV
	var_60_object = var_59_object; // 0xe6f Mov
	func_3469(var_60_object); // 0xe70 NEW_2
	return 0; // 0xe72 Return
}


func_3699(var_48_bool)
{
	var_48_bool = 0; // 0xe74 MovB
	return 0; // 0xe75 Return
}


func_3702()
{
	return 0; // 0xe77 Return
}


func_2168(var_0_object, var_1_object, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool)
{
	var_289_bool = 0; var_290_bool = 0; var_291_object = Obj(); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_object = Obj(); var_297_bool = 0; var_298_bool = 0; var_299_object = Obj(); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_object = Obj(); // 0x878 PushV
	var_0_object = 0; // 0x879 TMovB
	var_1_object = var_284_object; // 0x87a TMov
	var_298_bool = var_288_bool; // 0x87b Mov
	
Label_2172:
	var_305_bool = 0; var_306_object = Obj(); // 0x87c PushV
	var_306_object = var_284_object; // 0x87d Mov
	func_2308(var_305_bool, var_306_object); // 0x87e NEW_2
	var_309_bool = var_305_bool == 0; // 0x880 Not
	if(var_309_bool == 0) goto Label_2180; // 0x881 JumpB
	var_283_bool = 0; // 0x882 MovB
	return 16; // 0x883 Return
	
Label_2180:
	GetPosition(var_300_cvector); // 0x884 ObjFunc
	GetPosition(var_301_cvector); // 0x886 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x888 Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x889 Or2
	var_310_bool = 0; // 0x88a PushV
	var_310_bool = 0; // 0x88b MovB
	var_311_int = 0; // 0x88c PushI
	var_312_bool = var_286_float > var_311_int; // 0x88d GT
	if(var_312_bool == 0) goto Label_2195; // 0x88e JumpB
	var_313_float = var_286_float * var_286_float; // 0x88f Mult
	var_314_bool = var_303_float > var_313_float; // 0x890 GT
	if(var_314_bool == 0) goto Label_2195; // 0x891 JumpB
	var_310_bool = 1; // 0x892 MovB
	
Label_2195:
	if(var_310_bool == 0) goto Label_2200; // 0x893 JumpB
	Stop(); // 0x894 Func
	var_283_bool = 0; // 0x896 MovB
	return 16; // 0x897 Return
	
Label_2200:
	var_315_float = var_285_float * var_285_float; // 0x898 Mult
	var_316_bool = var_303_float > var_315_float; // 0x899 GT
	if(var_316_bool == 0) goto Label_2262; // 0x89a JumpB
	GetPFPosition(var_300_cvector); // 0x89b ObjFunc
	FindPathTo(var_304_object, var_300_cvector); // 0x89d Func
	var_317_bool = var_304_object != 0; // 0x89f NullNeq
	if(var_317_bool == 0) goto Label_2211; // 0x8a0 JumpB
	var_299_object = var_304_object; // 0x8a1 Mov
	var_304_object = 0; // 0x8a2 SetNull
	
Label_2211:
	var_318_bool = var_299_object != 0; // 0x8a3 NullNeq
	if(var_318_bool == 0) goto Label_2244; // 0x8a4 JumpB
	var_319_bool = var_298_bool; // 0x8a5 Push
	if(var_319_bool == 0) goto Label_2221; // 0x8a6 JumpB
	var_298_bool = 0; // 0x8a7 MovB
	RotatePath(var_299_object, var_297_bool); // 0x8a8 Func
	var_320_bool = var_297_bool == 0; // 0x8aa Not
	if(var_320_bool == 0) goto Label_2221; // 0x8ab JumpB
	goto Label_2268; // 0x8ac Jump
	
Label_2268:
	var_283_bool = !var_0_object; // 0x8dc Not2
	return 16; // 0x8dd Return
	
Label_2221:
	var_321_int = 0; // 0x8ad PushI
	var_322_float = 0.3; // 0x8ae PushF
	SetTimer(var_321_int, var_322_float); // 0x8af Func
	var_323_string = ""; // 0x8b1 PushV
	func_2315(var_323_string); // 0x8b2 NEW_2
	var_324_string = ""; // 0x8b4 PushV
	func_2317(var_324_string); // 0x8b5 NEW_2
	FollowPath(var_299_object, var_287_bool, var_297_bool, var_323_string, var_324_string); // 0x8b7 Func
	var_325_bool = var_297_bool == 0; // 0x8b9 Not
	if(var_325_bool == 0) goto Label_2242; // 0x8ba JumpB
	var_326_object = var_0_object; // 0x8bb PushT
	if(var_326_object == 0) goto Label_2240; // 0x8bc JumpB
	var_299_object = 0; // 0x8bd SetNull
	goto Label_2268; // 0x8be Jump
	
Label_2240:
	goto Label_2267; // 0x8c0 Jump
	
Label_2267:
	goto Label_2172; // 0x8db Jump
	
Label_2242:
	var_299_object = 0; // 0x8c2 SetNull
	goto Label_2260; // 0x8c3 Jump
	
Label_2260:
	var_304_object = 0; // 0x8d4 SetNull
	goto Label_2266; // 0x8d5 Jump
	
Label_2266:
	var_299_object = 0; // 0x8da SetNull
	
Label_2244:
	var_327_int = 0; // 0x8c4 PushI
	KillTimer(var_327_int); // 0x8c5 Func
	var_328_float = 0.5; // 0x8c7 PushF
	Sleep(var_328_float, var_297_bool); // 0x8c8 Func
	var_329_bool = var_297_bool == 0; // 0x8ca Not
	if(var_329_bool == 0) goto Label_2256; // 0x8cb JumpB
	var_330_object = var_0_object; // 0x8cc PushT
	if(var_330_object == 0) goto Label_2256; // 0x8cd JumpB
	var_299_object = 0; // 0x8ce SetNull
	goto Label_2268; // 0x8cf Jump
	
Label_2256:
	var_331_int = 0; // 0x8d0 PushI
	var_332_float = 0.3; // 0x8d1 PushF
	SetTimer(var_331_int, var_332_float); // 0x8d2 Func
	
Label_2262:
	var_333_int = 0; // 0x8d6 PushI
	KillTimer(var_333_int); // 0x8d7 Func
	goto Label_2268; // 0x8d9 Jump
}


func_3704(var_26_bool)
{
	var_26_bool = 0; // 0xe79 MovB
	return 0; // 0xe7a Return
}


func_1658(var_0_object, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0; // 0x67a PushV
	var_505_float = 0.9; // 0x67b PushF
	var_506_float = var_497_float * var_505_float; // 0x67c Mult
	GetVictim(var_506_float, var_502_object); // 0x67d Func
	ReportAttack(var_0_object); // 0x67f Func
	var_507_bool = var_502_object == var_0_object; // 0x681 Eq
	if(var_507_bool == 0) goto Label_1695; // 0x682 JumpB
	var_508_float = 0; var_509_object = Obj(); var_510_int = 0; // 0x683 PushV
	var_509_object = var_502_object; // 0x684 Mov
	var_510_int = var_498_int; // 0x685 Mov
	func_1388(var_510_int); // 0x686 NEW_2
	var_503_float = var_508_float; // 0x687 Mov
	var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0; // 0x689 PushV
	var_512_object = var_502_object; // 0x68a Mov
	var_513_float = var_503_float; // 0x68b Mov
	var_515_int = 0; var_516_object = Obj(); var_517_int = 0; // 0x68c PushV
	var_516_object = var_502_object; // 0x68d Mov
	var_517_int = var_498_int; // 0x68e Mov
	func_1391(var_517_int); // 0x68f NEW_2
	var_514_int = var_515_int; // 0x690 Mov
	func_2365(var_511_float, var_512_object, var_513_float, var_514_int); // 0x692 NEW_2
	var_504_float = var_511_float; // 0x693 Mov
	var_572_int = 0; // 0x695 PushV
	func_2041(var_572_int); // 0x696 NEW_2
	ReportHit(var_0_object, var_572_int, var_504_float, var_503_float); // 0x698 Func
	var_573_object = Obj(); var_574_float = 0; // 0x69a PushV
	var_573_object = var_502_object; // 0x69b Mov
	var_574_float = var_504_float; // 0x69c Mov
	func_2048(); // 0x69d NEW_2
	
Label_1695:
	return 6; // 0x69f Return
}


func_3707()
{
	return 0; // 0xe7c Return
}


func_3709(var_101_int)
{
	var_101_int = 515556; // 0xe7d MovI
	return 0; // 0xe7e Return
}


func_3711(var_100_int)
{
	var_100_int = 503341; // 0xe7f MovI
	return 0; // 0xe80 Return
}


func_3713(var_102_string)
{
	var_102_string = "ui/NPC_Citizen3.png"; // 0xe81 MovS
	return 0; // 0xe82 Return
}


func_3715(var_103_string)
{
	var_103_string = "ui/NPC_Citizen3_b.png"; // 0xe83 MovS
	return 0; // 0xe84 Return
}


func_1156(var_0_object)
{
	var_69_object = Obj(); // 0x484 PushV
	var_69_object = var_0_object; // 0x485 MovT
	func_2761(var_69_object); // 0x486 NEW_2
	return 0; // 0x488 Return
}


func_3717(var_95_bool)
{
	var_95_bool = 0; // 0xe85 MovB
	return 0; // 0xe86 Return
}


func_3719()
{
	var_19_bool = GlobalVars[0]; // 0xe87 PushGE
	var_19_bool = 0; // 0xe88 MovB
	GlobalVars[0] = var_19_bool; // 0xe89 PopGE
	return 0; // 0xe8a Return
}


func_3723(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0xe8b PushV
	var_33_bool = GlobalVars[0]; // 0xe8c PushGE
	if(var_33_bool == 0) goto Label_3736; // 0xe8d JumpB
	IsOverrideActive(var_32_bool); // 0xe8e Func
	var_34_bool = var_32_bool == 0; // 0xe90 Not
	if(var_34_bool == 0) goto Label_3734; // 0xe91 JumpB
	var_35_object = Obj(); // 0xe92 PushV
	var_35_object = var_30_object; // 0xe93 Mov
	func_2998(var_35_object); // 0xe94 NEW_2
	
Label_3734:
	return 2; // 0xe96 Return
	
Label_3736:
	var_42_int = 0; var_43_object = Obj(); // 0xe98 PushV
	var_43_object = var_30_object; // 0xe99 Mov
	TaskCall(0); // 0xe9a TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0xe9b NEW_2
	TaskReturn(); // 0xe9c TaskReturn
	return 2; // 0xe9e Return
}


func_2713()
{
	var_201_bool = 0; var_202_bool = 0; // 0xa99 PushV
	CameraSwitchToNormal(); // 0xa9a Func
	var_203_bool = 0; // 0xa9c PushV
	func_3717(var_203_bool); // 0xa9d NEW_2
	if(var_203_bool == 0) goto Label_2721; // 0xa9f JumpB
	goto Label_2729; // 0xaa0 Jump
	
Label_2729:
	return 2; // 0xaa9 Return
	
Label_2721:
	var_204_string = "head"; // 0xaa1 PushS
	HasAnimationTrack(var_202_bool, var_204_string); // 0xaa2 Func
	var_205_bool = var_202_bool; // 0xaa4 Push
	if(var_205_bool == 0) goto Label_2729; // 0xaa5 JumpB
	var_206_string = "head"; // 0xaa6 PushS
	UnlookAsync(var_206_string); // 0xaa7 Func
}


func_3743(var_63_bool)
{
	var_63_bool = 0; // 0xe9f MovB
	return 0; // 0xea0 Return
}


func_1697(var_0_object, var_460_bool, var_461_float)
{
	var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_string = ""; var_466_int = 0; var_467_bool = 0; var_468_int = 0; var_469_string = ""; // 0x6a1 PushV
	func_2036(var_469_string); // 0x6a3 NEW_2
	irand(var_466_int, var_469_string); // 0x6a5 Func
	var_470_int = 1; // 0x6a7 PushI
	var_466_int = var_466_int + var_470_int; // 0x6a8 Add2
	Face(var_0_object); // 0x6a9 Func
	var_471_bool = 1; // 0x6ab PushB
	SetAttackState(var_471_bool); // 0x6ac Func
	func_2923(); // 0x6af NEW_2
	var_476_string = "all"; // 0x6b1 PushS
	var_477_string = "attack_begin"; // 0x6b2 PushS
	var_478_int = var_477_string + var_466_int; // 0x6b3 Add
	PlayAnimation(var_476_string, var_478_int); // 0x6b4 Func
	WaitForAnimEnd(); // 0x6b6 Func
	func_2004(var_468_int, var_469_string); // 0x6b9 NEW_2
	var_494_bool = 0; var_495_object = Obj(); // 0x6bb PushV
	var_495_object = var_0_object; // 0x6bc MovT
	func_2479(var_494_bool, var_495_object); // 0x6bd NEW_2
	var_496_bool = var_494_bool == 0; // 0x6bf Not
	if(var_496_bool == 0) goto Label_1733; // 0x6c0 JumpB
	StopAsync(); // 0x6c1 Func
	var_460_bool = 0; // 0x6c3 MovB
	return 8; // 0x6c4 Return
	
Label_1733:
	var_497_float = 0; var_498_int = 0; // 0x6c5 PushV
	var_497_float = var_461_float; // 0x6c6 Mov
	var_498_int = var_466_int; // 0x6c7 Mov
	func_1658(var_469_string, var_497_float, var_498_int); // 0x6c8 NEW_2
	var_575_string = "all"; // 0x6ca PushS
	var_576_string = "attack_middle"; // 0x6cb PushS
	var_577_int = var_576_string + var_466_int; // 0x6cc Add
	HasAnimation(var_467_bool, var_575_string, var_577_int); // 0x6cd Func
	var_578_bool = var_467_bool; // 0x6cf Push
	if(var_578_bool == 0) goto Label_1814; // 0x6d0 JumpB
	func_2923(); // 0x6d2 NEW_2
	var_579_string = "all"; // 0x6d4 PushS
	var_580_string = "attack_middle"; // 0x6d5 PushS
	var_581_int = var_580_string + var_466_int; // 0x6d6 Add
	PlayAnimation(var_579_string, var_581_int); // 0x6d7 Func
	WaitForAnimEnd(); // 0x6d9 Func
	func_2036(var_469_string); // 0x6dc NEW_2
	var_582_bool = 0; var_583_object = Obj(); // 0x6de PushV
	var_583_object = var_0_object; // 0x6df MovT
	func_2479(var_582_bool, var_583_object); // 0x6e0 NEW_2
	var_584_bool = var_582_bool == 0; // 0x6e2 Not
	if(var_584_bool == 0) goto Label_1768; // 0x6e3 JumpB
	StopAsync(); // 0x6e4 Func
	var_460_bool = 0; // 0x6e6 MovB
	return 8; // 0x6e7 Return
	
Label_1768:
	var_585_float = 0; var_586_int = 0; // 0x6e8 PushV
	var_585_float = var_461_float; // 0x6e9 Mov
	var_586_int = var_466_int; // 0x6ea Mov
	func_1658(var_469_string, var_585_float, var_586_int); // 0x6eb NEW_2
	var_468_int = 1; // 0x6ed MovI
	
Label_1774:
	var_587_string = "attack_middle"; // 0x6ee PushS
	var_588_int = var_587_string + var_466_int; // 0x6ef Add
	var_589_string = "_"; // 0x6f0 PushS
	var_590_int = var_588_int + var_589_string; // 0x6f1 Add
	var_469_string = var_590_int + var_468_int; // 0x6f2 Add2
	var_591_string = "all"; // 0x6f3 PushS
	HasAnimation(var_467_bool, var_591_string, var_469_string); // 0x6f4 Func
	var_592_bool = var_467_bool == 0; // 0x6f6 Not
	if(var_592_bool == 0) goto Label_1785; // 0x6f7 JumpB
	goto Label_1814; // 0x6f8 Jump
	
Label_1814:
	var_593_bool = 0; // 0x716 PushB
	SetAttackState(var_593_bool); // 0x717 Func
	var_594_string = "all"; // 0x719 PushS
	var_595_string = "attack_end"; // 0x71a PushS
	var_596_int = var_595_string + var_466_int; // 0x71b Add
	PlayAnimation(var_594_string, var_596_int); // 0x71c Func
	var_597_bool = 0; // 0x71e PushV
	func_2050(var_597_bool); // 0x71f NEW_2
	if(var_597_bool == 0) goto Label_1832; // 0x721 JumpB
	var_598_bool = 0; var_599_float = 0; // 0x722 PushV
	var_599_float = 0.75; // 0x723 MovF
	func_1834(var_598_bool, var_599_float); // 0x724 NEW_2
	StopAsync(); // 0x726 Func
	
Label_1832:
	var_460_bool = 1; // 0x728 MovB
	return 8; // 0x729 Return
	
Label_1785:
	func_2923(); // 0x6fa NEW_2
	var_607_string = "all"; // 0x6fc PushS
	PlayAnimation(var_607_string, var_469_string); // 0x6fd Func
	WaitForAnimEnd(); // 0x6ff Func
	func_2036(var_469_string); // 0x702 NEW_2
	var_608_bool = 0; var_609_object = Obj(); // 0x704 PushV
	var_609_object = var_0_object; // 0x705 MovT
	func_2479(var_608_bool, var_609_object); // 0x706 NEW_2
	var_610_bool = var_608_bool == 0; // 0x708 Not
	if(var_610_bool == 0) goto Label_1806; // 0x709 JumpB
	StopAsync(); // 0x70a Func
	var_460_bool = 0; // 0x70c MovB
	return 8; // 0x70d Return
	
Label_1806:
	var_611_float = 0; var_612_int = 0; // 0x70e PushV
	var_611_float = var_461_float; // 0x70f Mov
	var_612_int = var_466_int; // 0x710 Mov
	func_1658(var_469_string, var_611_float, var_612_int); // 0x711 NEW_2
	var_613_int = 1; // 0x713 PushI
	var_468_int = var_468_int + var_613_int; // 0x714 Add2
	goto Label_1774; // 0x715 Jump
}


func_3745(var_170_bool)
{
	var_170_bool = 1; // 0xea2 MovB
	return 0; // 0xea3 Return
}


func_3748(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0; // 0xea5 PushV
	var_28_object = var_24_object; // 0xea6 Mov
	var_29_object = var_25_object; // 0xea7 Mov
	var_30_float = 700.0; // 0xea8 MovF
	var_31_bool = var_26_bool; // 0xea9 Mov
	func_3583(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool); // 0xeaa NEW_2
	var_23_bool = var_27_bool; // 0xeab Mov
	return 0; // 0xead Return
}


func_2730(var_154_string)
{
	var_155_bool = 0; var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_float = 0; var_160_float = 0; // 0xaaa PushV
	lshHasAnimation(var_158_bool, var_154_string); // 0xaab Func
	var_161_bool = var_158_bool; // 0xaad Push
	if(var_161_bool == 0) goto Label_2741; // 0xaae JumpB
	lshGetAnimTimes(var_154_string, var_159_float, var_160_float); // 0xaaf Func
	var_162_bool = 0; // 0xab1 PushB
	lshPlayAnimation(var_159_float, var_160_float, var_162_bool); // 0xab2 Func
	goto Label_2745; // 0xab4 Jump
	
Label_2745:
	return 6; // 0xab9 Return
	
Label_2741:
	var_163_string = "Can't find lsh animation : "; // 0xab5 PushS
	var_164_int = var_163_string + var_154_string; // 0xab6 Add
	Trace(var_164_int); // 0xab7 Func
}


func_3758(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0xeaf PushV
	var_103_object = var_101_object; // 0xeb0 Mov
	func_2348(var_102_bool, var_103_object); // 0xeb1 NEW_2
	if(var_102_bool == 0) goto Label_3775; // 0xeb3 JumpB
	var_106_object = Obj(); // 0xeb4 PushV
	func_2820(var_106_object); // 0xeb5 NEW_2
	var_109_float = -0.07; // 0xeb7 PushF
	var_110_bool = 1; // 0xeb8 PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0xeb9 Func
	var_111_bool = 0; // 0xebb PushV
	var_111_bool = 1; // 0xebc MovB
	func_3083(var_111_bool); // 0xebd NEW_2
	
Label_3775:
	func_3059(); // 0xec0 NEW_2
	var_245_bool = GlobalVars[0]; // 0xec2 PushGE
	var_245_bool = 1; // 0xec3 MovB
	GlobalVars[0] = var_245_bool; // 0xec4 PopGE
	var_246_int = 50; // 0xec5 PushI
	var_247_int = 40; // 0xec6 PushI
	SetRTEnvelope(var_246_int, var_247_int); // 0xec7 Func
	return 0; // 0xec9 Return
}


func_176(var_2_object, var_128_string)
{
	var_129_bool = 0; // 0xb1 PushV
	func_3717(var_129_bool); // 0xb2 NEW_2
	var_130_bool = var_129_bool == 0; // 0xb4 Not
	if(var_130_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_131_bool = var_128_string == var_2_object; // 0xb7 Eq
	if(var_131_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_132_string = ""; var_133_bool = 0; // 0xba PushV
	var_132_string = var_128_string; // 0xbb Mov
	var_134_string = ""; // 0xbc PushS
	var_135_bool = var_128_string == var_134_string; // 0xbd Eq
	if(var_135_bool == 0) goto Label_193; // 0xbe JumpB
	var_133_bool = 0; // 0xbf MovB
	goto Label_194; // 0xc0 Jump
	
Label_194:
	func_2746(var_132_string, var_133_bool); // 0xc2 NEW_2
	var_2_object = var_128_string; // 0xc4 TMov
	return 0; // 0xc5 Return
	
Label_193:
	var_133_bool = 1; // 0xc1 MovB
}


func_697(var_2_object)
{
	var_19_int = 110; // 0x2b9 PushI
	KillTimer(var_19_int); // 0x2ba Func
	var_2_object = 0; // 0x2bc TMovB
	func_833(var_17_object, var_18_bool); // 0x2be NEW_2
	return 0; // 0x2c0 Return
}


func_2746(var_132_string, var_133_bool)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0; // 0xaba PushV
	lshHasAnimation(var_139_bool, var_132_string); // 0xabb Func
	var_142_bool = var_139_bool; // 0xabd Push
	if(var_142_bool == 0) goto Label_2756; // 0xabe JumpB
	lshGetAnimTimes(var_132_string, var_140_float, var_141_float); // 0xabf Func
	lshPlayAnimation(var_140_float, var_141_float, var_133_bool); // 0xac1 Func
	goto Label_2760; // 0xac3 Jump
	
Label_2760:
	return 6; // 0xac8 Return
	
Label_2756:
	var_143_string = "Can't find lsh animation : "; // 0xac4 PushS
	var_144_int = var_143_string + var_132_string; // 0xac5 Add
	Trace(var_144_int); // 0xac6 Func
}


func_3258(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0; // 0xcba PushV
	GetInvItemByName(var_141_int, var_139_string); // 0xcbb Func
	var_138_int = var_141_int; // 0xcbd Mov
	return 2; // 0xcbe Return
}


func_3263(var_19_object)
{
	var_20_object = Obj(); // 0xcc0 PushV
	var_20_object = var_19_object; // 0xcc1 Mov
	TaskCall(2); // 0xcc2 TaskCall
	func_330(var_20_object); // 0xcc3 NEW_2
	TaskReturn(); // 0xcc4 TaskReturn
	return 0; // 0xcc6 Return
}


func_705(var_2_object)
{
	var_68_int = 110; // 0x2c1 PushI
	KillTimer(var_68_int); // 0x2c2 Func
	var_2_object = 0; // 0x2c4 TMovB
	func_840(var_22_bool, var_23_int); // 0x2c6 NEW_2
	return 0; // 0x2c8 Return
}


func_2761(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xac9 PushV
	GetEyesHeight(var_25_float); // 0xaca ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xacc MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xacd PushE
	var_27_float = var_25_float; // 0xace Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xacf PopE
	var_28_string = "head"; // 0xad0 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xad1 Func
	return 4; // 0xad3 Return
}


func_722(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x2d2 PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x2d3 PushV
	var_25_object = var_19_object; // 0x2d4 Mov
	func_2479(var_24_bool, var_25_object); // 0x2d5 NEW_2
	var_58_bool = var_24_bool == 0; // 0x2d7 Not
	if(var_58_bool == 0) goto Label_730; // 0x2d8 JumpB
	return 4; // 0x2d9 Return
	
Label_730:
	var_59_object = var_2_object; // 0x2da PushT
	if(var_59_object == 0) goto Label_733; // 0x2db JumpB
	return 4; // 0x2dc Return
	
Label_733:
	IsPlayerActor(var_19_object, var_22_bool); // 0x2dd Func
	var_60_bool = var_22_bool == 0; // 0x2df Not
	if(var_60_bool == 0) goto Label_738; // 0x2e0 JumpB
	return 4; // 0x2e1 Return
	
Label_738:
	var_61_int = 0; var_62_object = Obj(); // 0x2e2 PushV
	var_62_object = var_19_object; // 0x2e3 Mov
	func_3460(var_62_object); // 0x2e4 NEW_2
	var_23_int = var_61_int; // 0x2e5 Mov
	var_64_int = 0; // 0x2e7 PushI
	var_65_bool = var_23_int > var_64_int; // 0x2e8 GT
	if(var_65_bool == 0) goto Label_761; // 0x2e9 JumpB
	var_66_int = 1; // 0x2ea PushI
	var_67_bool = var_23_int > var_66_int; // 0x2eb GT
	if(var_67_bool == 0) goto Label_752; // 0x2ec JumpB
	func_705(var_23_int); // 0x2ee NEW_2
	
Label_752:
	var_69_object = Obj(); // 0x2f0 PushV
	var_69_object = var_19_object; // 0x2f1 Mov
	func_3469(var_69_object); // 0x2f2 NEW_2
	var_2_object = 1; // 0x2f4 TMovB
	var_134_int = 110; // 0x2f5 PushI
	var_135_float = 10.0; // 0x2f6 PushF
	SetTimer(var_134_int, var_135_float); // 0x2f7 Func
	
Label_761:
	return 4; // 0x2f9 Return
}


func_2772()
{
	var_21_bool = 0; // 0xad4 PushV
	func_3717(var_21_bool); // 0xad5 NEW_2
	if(var_21_bool == 0) goto Label_2778; // 0xad7 JumpB
	lshStopSpeech(); // 0xad8 Func
	
Label_2778:
	return 0; // 0xada Return
}


func_2779(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xadb PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0xadc Func
	var_61_bool = var_53_bool == 0; // 0xade Not
	if(var_61_bool == 0) goto Label_2804; // 0xadf JumpB
	var_54_int = 0; // 0xae0 MovI
	
Label_2785:
	var_62_int = 1; // 0xae1 PushI
	var_63_int = var_54_int + var_62_int; // 0xae2 Add
	var_64_int = var_44_string + var_63_int; // 0xae3 Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0xae4 Func
	var_65_bool = var_55_bool == 0; // 0xae6 Not
	if(var_65_bool == 0) goto Label_2793; // 0xae7 JumpB
	goto Label_2796; // 0xae8 Jump
	
Label_2796:
	var_66_bool = var_54_int == 0; // 0xaec Not
	if(var_66_bool == 0) goto Label_2799; // 0xaed JumpB
	return 16; // 0xaee Return
	
Label_2799:
	irand(var_56_int, var_54_int); // 0xaef Func
	var_67_int = 1; // 0xaf1 PushI
	var_68_int = var_56_int + var_67_int; // 0xaf2 Add
	var_44_string = var_44_string + var_68_int; // 0xaf3 Add2
	
Label_2804:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0xaf4 Func
	var_69_bool = var_57_bool; // 0xaf6 Push
	if(var_69_bool == 0) goto Label_2819; // 0xaf7 JumpB
	GetEyesHeight(var_58_float); // 0xaf8 Func
	GetDirection(var_59_cvector); // 0xafa Func
	var_70_int = 50; // 0xafc PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0xafd Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0xafe PushE
	var_71_float = var_71_float + var_58_float; // 0xaff Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0xb00 PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0xb01 Func
	
Label_2819:
	return 16; // 0xb03 Return
	
Label_2793:
	var_72_int = 1; // 0xae9 PushI
	var_54_int = var_54_int + var_72_int; // 0xaea Add2
	goto Label_2785; // 0xaeb Jump
}


func_2270(var_0_object, var_1_object, var_26_int)
{
	var_27_int = 0; // 0x8df PushI
	var_28_bool = var_26_int != var_27_int; // 0x8e0 Neq
	if(var_28_bool == 0) goto Label_2275; // 0x8e1 JumpB
	return 0; // 0x8e2 Return
	
Label_2275:
	var_29_bool = 0; var_30_object = Obj(); // 0x8e3 PushV
	var_30_object = var_1_object; // 0x8e4 MovT
	func_2308(var_29_bool, var_30_object); // 0x8e5 NEW_2
	var_65_bool = var_29_bool == 0; // 0x8e7 Not
	if(var_65_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_0_object = 1; // 0x8e9 TMovB
	
Label_2282:
	var_66_int = 0; // 0x8ea PushI
	KillTimer(var_66_int); // 0x8eb Func
	Stop(); // 0x8ed Func
	return 0; // 0x8ef Return
}


func_3308(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0xced PushS
	var_26_bool = var_24_string == var_25_string; // 0xcee Eq
	if(var_26_bool == 0) goto Label_3319; // 0xcef JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xcf0 PushV
	var_28_object = var_23_object; // 0xcf1 Mov
	func_3673(var_28_object); // 0xcf2 NEW_2
	var_22_bool = var_27_bool; // 0xcf3 Mov
	return 0; // 0xcf5 Return
	
Label_3319:
	var_29_string = "player_shot"; // 0xcf7 PushS
	var_30_bool = var_24_string == var_29_string; // 0xcf8 Eq
	if(var_30_bool == 0) goto Label_3329; // 0xcf9 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xcfa PushV
	var_32_object = var_23_object; // 0xcfb Mov
	func_3678(var_31_bool, var_32_object); // 0xcfc NEW_2
	var_22_bool = var_31_bool; // 0xcfd Mov
	return 0; // 0xcff Return
	
Label_3329:
	var_46_string = "battle"; // 0xd01 PushS
	var_47_bool = var_24_string == var_46_string; // 0xd02 Eq
	if(var_47_bool == 0) goto Label_3338; // 0xd03 JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0xd04 PushV
	var_49_object = var_23_object; // 0xd05 Mov
	func_3699(var_49_object); // 0xd06 NEW_2
	var_22_bool = var_48_bool; // 0xd07 Mov
	return 0; // 0xd09 Return
	
Label_3338:
	var_22_bool = 0; // 0xd0a MovB
	return 0; // 0xd0b Return
}


func_2292(var_0_object)
{
	var_0_object = 1; // 0x8f4 TMovB
	var_22_int = 0; // 0x8f5 PushI
	KillTimer(var_22_int); // 0x8f6 Func
	Stop(); // 0x8f8 Func
	return 0; // 0x8fa Return
}


func_762(var_0_object, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x2fa PushV
	var_0_object = 0; // 0x2fb TMovB
	var_1_object = 0; // 0x2fc TMovB
	var_36_float = 0.5; // 0x2fd PushF
	rand(var_30_float, var_36_float); // 0x2fe Func
	Sleep(var_30_float); // 0x300 Func
	
Label_770:
	var_37_bool = var_0_object == 0; // 0x302 Not
	if(var_37_bool == 0) goto Label_820; // 0x303 JumpB
	var_38_bool = var_1_object == 0; // 0x304 Not
	if(var_38_bool == 0) goto Label_789; // 0x305 JumpB
	
Label_774:
	GetPosition(var_32_cvector); // 0x306 Func
	var_39_float = 0; // 0x308 PushV
	func_821(var_39_float); // 0x309 NEW_2
	GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool); // 0x30b Func
	var_42_bool = var_33_bool; // 0x30d Push
	if(var_42_bool == 0) goto Label_784; // 0x30e JumpB
	goto Label_788; // 0x30f Jump
	
Label_788:
	goto Label_790; // 0x314 Jump
	
Label_790:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); // 0x316 PushV
	var_44_cvector = var_31_cvector; // 0x317 Mov
	func_849(var_43_object, var_44_cvector); // 0x318 NEW_2
	var_34_object = var_43_object; // 0x319 Mov
	var_47_bool = var_34_object != 0; // 0x31b NullNeq
	if(var_47_bool == 0) goto Label_815; // 0x31c JumpB
	RotatePath(var_34_object, var_35_bool); // 0x31d Func
	var_48_bool = var_35_bool; // 0x31f Push
	if(var_48_bool == 0) goto Label_814; // 0x320 JumpB
	var_49_bool = 0; // 0x321 PushV
	func_847(var_49_bool); // 0x322 NEW_2
	FollowPath(var_34_object, var_49_bool, var_35_bool); // 0x324 Func
	var_34_object = 0; // 0x326 SetNull
	var_50_bool = var_35_bool; // 0x327 Push
	if(var_50_bool == 0) goto Label_814; // 0x328 JumpB
	TaskCall(4); // 0x32a TaskCall
	func_1019(); // 0x32b NEW_2
	TaskReturn(); // 0x32c TaskReturn
	
Label_814:
	goto Label_818; // 0x32e Jump
	
Label_818:
	var_34_object = 0; // 0x332 SetNull
	goto Label_770; // 0x333 Jump
	
Label_815:
	var_102_int = 1; // 0x32f PushI
	Sleep(var_102_int); // 0x330 Func
	
Label_784:
	var_103_int = 1; // 0x310 PushI
	Sleep(var_103_int); // 0x311 Func
	goto Label_774; // 0x313 Jump
	
Label_789:
	var_1_object = 0; // 0x315 TMovB
	
Label_820:
	return 12; // 0x334 Return
}


func_2820(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0xb04 PushV
	self(var_108_object); // 0xb05 Func
	var_106_object = var_108_object; // 0xb07 Mov
	return 2; // 0xb08 Return
}


func_2308(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x905 PushV
	var_32_object = var_30_object; // 0x906 Mov
	func_2479(var_31_bool, var_32_object); // 0x907 NEW_2
	var_29_bool = var_31_bool; // 0x908 Mov
	return 0; // 0x90a Return
}


func_2826(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0xb0a PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0xb0b Or
	var_59_float = sqrt(var_60_int); // 0xb0c Sqrt2
	var_61_float = 0.0; // 0xb0d PushF
	var_62_bool = var_59_float < var_61_float; // 0xb0e LT
	if(var_62_bool == 0) goto Label_2834; // 0xb0f JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0xb10 MovV
	return 2; // 0xb11 Return
	
Label_2834:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0xb12 Div2
	return 2; // 0xb13 Return
}


func_2315(var_323_string)
{
	var_323_string = "walk"; // 0x90b MovS
	return 0; // 0x90c Return
}


func_3340(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0xd0d PushS
	var_55_bool = var_53_string == var_54_string; // 0xd0e Eq
	if(var_55_bool == 0) goto Label_3349; // 0xd0f JumpB
	var_56_object = Obj(); // 0xd10 PushV
	var_56_object = var_52_object; // 0xd11 Mov
	func_3676(); // 0xd12 NEW_2
	goto Label_3364; // 0xd14 Jump
	
Label_3364:
	return 0; // 0xd24 Return
	
Label_3349:
	var_57_string = "player_shot"; // 0xd15 PushS
	var_58_bool = var_53_string == var_57_string; // 0xd16 Eq
	if(var_58_bool == 0) goto Label_3357; // 0xd17 JumpB
	var_59_object = Obj(); // 0xd18 PushV
	var_59_object = var_52_object; // 0xd19 Mov
	func_3693(var_59_object); // 0xd1a NEW_2
	goto Label_3364; // 0xd1c Jump
	
Label_3357:
	var_125_string = "battle"; // 0xd1d PushS
	var_126_bool = var_53_string == var_125_string; // 0xd1e Eq
	if(var_126_bool == 0) goto Label_3364; // 0xd1f JumpB
	var_127_object = Obj(); // 0xd20 PushV
	var_127_object = var_52_object; // 0xd21 Mov
	func_3702(); // 0xd22 NEW_2
}


func_2317(var_324_string)
{
	var_324_string = "run"; // 0x90d MovS
	return 0; // 0x90e Return
}


func_2319(var_539_string, var_540_int)
{
	var_541_int = 2; // 0x910 PushI
	var_542_bool = var_540_int == var_541_int; // 0x911 Eq
	if(var_542_bool == 0) goto Label_2326; // 0x912 JumpB
	var_539_string = "fire"; // 0x913 MovS
	return 0; // 0x914 Return
	
Label_2326:
	var_543_int = 1; // 0x916 PushI
	var_544_bool = var_540_int == var_543_int; // 0x917 Eq
	if(var_544_bool == 0) goto Label_2331; // 0x918 JumpB
	var_539_string = "bullet"; // 0x919 MovS
	return 0; // 0x91a Return
	
Label_2331:
	var_539_string = "phys"; // 0x91b MovS
	return 0; // 0x91c Return
}


func_2836(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float; // 0xb15 LT
	if(var_554_bool == 0) goto Label_2841; // 0xb16 JumpB
	var_549_float = var_550_float; // 0xb17 Mov
	goto Label_2842; // 0xb18 Jump
	
Label_2842:
	return 0; // 0xb1a Return
	
Label_2841:
	var_549_float = var_551_float; // 0xb19 Mov
}


func_1304()
{
	StopGroup0(); // 0x518 Func
	StopAsync(); // 0x51a Func
	var_31_string = "head"; // 0x51c PushS
	UnlookAsync(var_31_string); // 0x51d Func
	var_32_int = 111; // 0x51f PushI
	KillTimer(var_32_int); // 0x520 Func
	return 0; // 0x522 Return
}


func_2843(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float; // 0xb1c LT
	if(var_563_bool == 0) goto Label_2848; // 0xb1d JumpB
	var_559_float = var_561_float; // 0xb1e Mov
	return 0; // 0xb1f Return
	
Label_2848:
	var_564_bool = var_560_float > var_562_float; // 0xb20 GT
	if(var_564_bool == 0) goto Label_2852; // 0xb21 JumpB
	var_559_float = var_562_float; // 0xb22 Mov
	return 0; // 0xb23 Return
	
Label_2852:
	var_559_float = var_560_float; // 0xb24 Mov
	return 0; // 0xb25 Return
}


func_2333(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x91d PushV
	GetPosition(var_56_cvector); // 0x91e Func
	GetPosition(var_57_cvector); // 0x920 ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0x922 Sub2
	return 4; // 0x923 Return
}


func_2340(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x924 PushV
	GetPosition(var_41_cvector); // 0x925 Func
	GetPosition(var_42_cvector); // 0x927 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x929 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x92a Or2
	return 6; // 0x92b Return
}


func_3365(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xd25 PushV
	var_23_bool = 0; // 0xd26 PushV
	var_23_bool = 0; // 0xd27 MovB
	var_24_bool = 0; var_25_object = Obj(); // 0xd28 PushV
	var_25_object = var_20_object; // 0xd29 Mov
	func_3673(var_25_object); // 0xd2a NEW_2
	if(var_24_bool == 0) goto Label_3379; // 0xd2c JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0xd2d PushV
	var_27_object = var_20_object; // 0xd2e Mov
	func_2348(var_26_bool, var_27_object); // 0xd2f NEW_2
	if(var_26_bool == 0) goto Label_3379; // 0xd31 JumpB
	var_23_bool = 1; // 0xd32 MovB
	
Label_3379:
	if(var_23_bool == 0) goto Label_3386; // 0xd33 JumpB
	IsWeaponHolstered(var_22_bool); // 0xd34 ObjFunc
	var_30_bool = var_22_bool == 0; // 0xd36 Not
	if(var_30_bool == 0) goto Label_3386; // 0xd37 JumpB
	var_19_bool = 1; // 0xd38 MovB
	return 2; // 0xd39 Return
	
Label_3386:
	var_19_bool = 0; // 0xd3a MovB
	return 2; // 0xd3b Return
}


func_2854(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0); // 0xb27 PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0xb28 PushE
	var_76_float = var_74_float * var_75_float; // 0xb29 Mult
	var_77_float = GetByIndex(var_72_cvector, 2); // 0xb2a PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0xb2b PushE
	var_79_float = var_77_float * var_78_float; // 0xb2c Mult
	var_71_float = var_76_float + var_79_float; // 0xb2d Add2
	return 0; // 0xb2e Return
}


func_1834(var_598_bool, var_599_float)
{
	var_600_float = 0; var_601_bool = 0; var_602_float = 0; var_603_bool = 0; // 0x72a PushV
	rand(var_602_float); // 0x72b Func
	var_604_bool = var_602_float < var_599_float; // 0x72d LT
	if(var_604_bool == 0) goto Label_1854; // 0x72e JumpB
	
Label_1839:
	IsAnimationPlaying(var_603_bool); // 0x72f Func
	var_605_bool = var_603_bool == 0; // 0x731 Not
	if(var_605_bool == 0) goto Label_1844; // 0x732 JumpB
	goto Label_1853; // 0x733 Jump
	
Label_1853:
	goto Label_1859; // 0x73d Jump
	
Label_1859:
	var_598_bool = 0; // 0x743 MovB
	return 4; // 0x744 Return
	
Label_1844:
	var_606_bool = 0; // 0x734 PushV
	func_1932(var_606_bool); // 0x735 NEW_2
	if(var_606_bool == 0) goto Label_1850; // 0x737 JumpB
	var_598_bool = 1; // 0x738 MovB
	return 4; // 0x739 Return
	
Label_1850:
	sync(); // 0x73a Func
	goto Label_1839; // 0x73c Jump
	
Label_1854:
	WaitForAnimEnd(); // 0x73e Func
	func_2036(var_603_bool); // 0x741 NEW_2
}


func_2348(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0x92c PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0x92d Func
	var_102_bool = var_105_bool; // 0x92f Mov
	return 2; // 0x930 Return
}


func_2863(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0); // 0xb30 PushE
	var_83_float = GetByIndex(var_81_cvector, 0); // 0xb31 PushE
	var_84_float = var_82_float * var_83_float; // 0xb32 Mult
	var_85_float = GetByIndex(var_81_cvector, 2); // 0xb33 PushE
	var_86_float = GetByIndex(var_81_cvector, 2); // 0xb34 PushE
	var_87_float = var_85_float * var_86_float; // 0xb35 Mult
	var_88_int = var_84_float + var_87_float; // 0xb36 Add
	var_80_float = sqrt(var_88_int); // 0xb37 Sqrt2
	return 0; // 0xb38 Return
}


func_2353(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0x931 PushV
	var_58_string = "HasProperty"; // 0x932 PushS
	var_59_int = 2; // 0x933 PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0x934 FuncExist
	var_61_bool = var_60_bool == 0; // 0x935 Not
	if(var_61_bool == 0) goto Label_2361; // 0x936 JumpB
	var_53_bool = 0; // 0x937 MovB
	return 2; // 0x938 Return
	
Label_2361:
	HasProperty(var_55_string, var_57_bool); // 0x939 ObjFunc
	var_53_bool = var_57_bool; // 0x93b Mov
	return 2; // 0x93c Return
}


func_821(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x335 PushV
	GetCameraFarDistance(var_41_float); // 0x336 Func
	var_39_float = var_41_float; // 0x338 Mov
	return 2; // 0x339 Return
}


func_2873(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xb3a PushV
	var_72_cvector = var_69_cvector; // 0xb3b Mov
	var_73_cvector = var_70_cvector; // 0xb3c Mov
	func_2854(var_71_float, var_72_cvector, var_73_cvector); // 0xb3d NEW_2
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0xb3f PushV
	var_81_cvector = var_69_cvector; // 0xb40 Mov
	func_2863(var_80_float, var_81_cvector); // 0xb41 NEW_2
	var_89_float = 0; var_90_cvector = CVector(0,0,0); // 0xb43 PushV
	var_90_cvector = var_70_cvector; // 0xb44 Mov
	func_2863(var_89_float, var_90_cvector); // 0xb45 NEW_2
	var_91_float = var_80_float * var_89_float; // 0xb47 Mult
	var_68_float = var_71_float / var_71_float; // 0xb48 Div2
	return 0; // 0xb49 Return
}


func_3388(var_33_object)
{
	var_34_object = Obj(); // 0xd3d PushV
	var_34_object = var_33_object; // 0xd3e Mov
	func_3676(); // 0xd3f NEW_2
	return 0; // 0xd41 Return
}


func_2365(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0; // 0x93d PushV
	var_530_bool = 0; var_531_object = Obj(); var_532_string = ""; // 0x93e PushV
	var_531_object = var_512_object; // 0x93f Mov
	var_532_string = "health"; // 0x940 MovS
	func_2353(var_530_bool, var_531_object, var_532_string); // 0x941 NEW_2
	var_533_bool = var_530_bool == 0; // 0x943 Not
	if(var_533_bool == 0) goto Label_2375; // 0x944 JumpB
	var_511_float = 0.0; // 0x945 MovF
	return 12; // 0x946 Return
	
Label_2375:
	var_534_bool = 0; var_535_object = Obj(); var_536_string = ""; // 0x947 PushV
	var_535_object = var_512_object; // 0x948 Mov
	var_536_string = "armor"; // 0x949 MovS
	func_2353(var_534_bool, var_535_object, var_536_string); // 0x94a NEW_2
	var_537_bool = var_534_bool == 0; // 0x94c Not
	if(var_537_bool == 0) goto Label_2384; // 0x94d JumpB
	var_524_int = 0; // 0x94e MovI
	goto Label_2387; // 0x94f Jump
	
Label_2387:
	var_538_string = "armor_"; // 0x953 PushS
	var_539_string = ""; var_540_int = 0; // 0x954 PushV
	var_540_int = var_514_int; // 0x955 Mov
	func_2319(var_539_string, var_540_int); // 0x956 NEW_2
	var_525_string = var_538_string + var_539_string; // 0x958 Add2
	var_545_bool = 0; var_546_object = Obj(); var_547_string = ""; // 0x959 PushV
	var_546_object = var_512_object; // 0x95a Mov
	var_547_string = var_525_string; // 0x95b Mov
	func_2353(var_545_bool, var_546_object, var_547_string); // 0x95c NEW_2
	var_548_bool = var_545_bool == 0; // 0x95e Not
	if(var_548_bool == 0) goto Label_2402; // 0x95f JumpB
	var_526_int = 0; // 0x960 MovI
	goto Label_2404; // 0x961 Jump
	
Label_2404:
	var_549_float = 0; var_550_float = 0; var_551_float = 0; // 0x964 PushV
	var_552_int = var_524_int + var_526_int; // 0x965 Add
	var_553_float = 100.0; // 0x966 PushF
	var_550_float = var_552_int / var_552_int; // 0x967 Div2
	var_551_float = 1; // 0x968 MovI
	func_2836(var_549_float, var_550_float, var_551_float); // 0x969 NEW_2
	var_527_float = var_549_float; // 0x96a Mov
	var_555_string = "health"; // 0x96c PushS
	GetProperty(var_555_string, var_528_float); // 0x96d ObjFunc
	var_556_int = 1; // 0x96f PushI
	var_557_int = var_556_int - var_527_float; // 0x970 Sub
	var_529_float = var_513_float * var_557_int; // 0x971 Mult2
	var_558_string = "health"; // 0x972 PushS
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0; // 0x973 PushV
	var_560_float = var_528_float - var_529_float; // 0x974 Sub2
	var_561_float = 0; // 0x975 MovI
	var_562_float = 1; // 0x976 MovI
	func_2843(var_559_float, var_560_float, var_561_float, var_562_float); // 0x977 NEW_2
	SetProperty(var_558_string, var_559_float); // 0x979 ObjFunc
	var_565_bool = 0; var_566_object = Obj(); // 0x97b PushV
	var_566_object = var_512_object; // 0x97c Mov
	func_2348(var_565_bool, var_566_object); // 0x97d NEW_2
	if(var_565_bool == 0) goto Label_2436; // 0x97f JumpB
	var_567_float = 0; // 0x980 PushV
	var_567_float = -var_529_float; // 0x981 Neg2
	func_2895(var_567_float); // 0x982 NEW_2
	
Label_2436:
	var_511_float = var_529_float; // 0x984 Mov
	return 12; // 0x985 Return
	
Label_2402:
	GetProperty(var_525_string, var_526_int); // 0x962 ObjFunc
	
Label_2384:
	var_571_string = "armor"; // 0x950 PushS
	GetProperty(var_571_string, var_524_int); // 0x951 ObjFunc
}


func_833(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x341 TMovB
	var_1_object = 0; // 0x342 TMovB
	Stop(); // 0x343 Func
	StopGroup0(); // 0x345 Func
	return 0; // 0x347 Return
}


func_3394(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0xd43 PushV
	var_23_object = var_21_object; // 0xd44 Mov
	func_2348(var_22_bool, var_23_object); // 0xd45 NEW_2
	if(var_22_bool == 0) goto Label_3406; // 0xd47 JumpB
	var_26_object = Obj(); // 0xd48 PushV
	func_2820(var_26_object); // 0xd49 NEW_2
	var_29_float = -0.03; // 0xd4b PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0xd4c Func
	
Label_3406:
	return 0; // 0xd4e Return
}


func_1861(var_0_object, var_403_bool, var_404_float)
{
	var_405_bool = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_bool = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_float = 0; // 0x745 PushV
	
Label_1862:
	IsAnimationPlaying(var_410_bool); // 0x746 Func
	var_415_bool = var_410_bool == 0; // 0x748 Not
	if(var_415_bool == 0) goto Label_1867; // 0x749 JumpB
	goto Label_1899; // 0x74a Jump
	
Label_1899:
	func_2036(var_414_float); // 0x76c NEW_2
	var_403_bool = 0; // 0x76e MovB
	return 10; // 0x76f Return
	
Label_1867:
	var_416_bool = 0; // 0x74b PushV
	func_1932(var_416_bool); // 0x74c NEW_2
	if(var_416_bool == 0) goto Label_1873; // 0x74e JumpB
	var_403_bool = 1; // 0x74f MovB
	return 10; // 0x750 Return
	
Label_1873:
	var_455_bool = 0; var_456_object = Obj(); // 0x751 PushV
	var_456_object = var_0_object; // 0x752 MovT
	func_2479(var_455_bool, var_456_object); // 0x753 NEW_2
	var_457_bool = var_455_bool == 0; // 0x755 Not
	if(var_457_bool == 0) goto Label_1881; // 0x756 JumpB
	var_403_bool = 0; // 0x757 MovB
	return 10; // 0x758 Return
	
Label_1881:
	GetPFPosition(var_411_cvector); // 0x759 TObjFunc
	GetPFPosition(var_412_cvector); // 0x75b Func
	var_413_cvector = var_411_cvector - var_412_cvector; // 0x75d Sub2
	var_414_float = var_413_cvector | var_413_cvector; // 0x75e Or2
	var_458_float = var_404_float * var_404_float; // 0x75f Mult
	var_459_bool = var_414_float < var_458_float; // 0x760 LT
	if(var_459_bool == 0) goto Label_1896; // 0x761 JumpB
	var_460_bool = 0; var_461_float = 0; // 0x762 PushV
	var_461_float = var_404_float; // 0x763 Mov
	func_1697(var_414_float, var_460_bool, var_461_float); // 0x764 NEW_2
	var_403_bool = 1; // 0x766 MovB
	return 10; // 0x767 Return
	
Label_1896:
	sync(); // 0x768 Func
	goto Label_1862; // 0x76a Jump
}


func_840(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x348 TMovB
	var_1_object = 1; // 0x349 TMovB
	Stop(); // 0x34a Func
	StopGroup0(); // 0x34c Func
	return 0; // 0x34e Return
}


func_2890(var_122_int, var_123_string)
{
	var_124_int = 0; var_125_int = 0; // 0xb4a PushV
	GetVariable(var_123_string, var_125_int); // 0xb4b Func
	var_122_int = var_125_int; // 0xb4d Mov
	return 2; // 0xb4e Return
}


func_330(var_20_object)
{
	EventDisable(0); // 0x14b EventDisable
	var_21_object = Obj(); // 0x14c PushV
	var_21_object = var_20_object; // 0x14d Mov
	func_363(var_21_object); // 0x14e NEW_2
	var_101_object = Obj(); // 0x150 PushV
	var_101_object = var_20_object; // 0x151 Mov
	func_3758(var_101_object); // 0x152 NEW_2
	EventEnable(0); // 0x154 EventEnable
	
Label_341:
	Hold(); // 0x155 Func
	goto Label_341; // 0x157 Jump
}


func_847(var_49_bool)
{
	var_49_bool = 0; // 0x34f MovB
	return 0; // 0x350 Return
}


func_3407(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xd4f PushV
	var_23_string = "heal"; // 0xd50 PushS
	var_24_bool = var_20_string == var_23_string; // 0xd51 Eq
	if(var_24_bool == 0) goto Label_3421; // 0xd52 JumpB
	var_25_string = "player"; // 0xd53 PushS
	FindActor(var_22_object, var_25_string); // 0xd54 Func
	var_26_bool = 0; var_27_object = Obj(); // 0xd56 PushV
	var_27_object = var_22_object; // 0xd57 Mov
	func_3704(var_27_object); // 0xd58 NEW_2
	var_19_bool = var_26_bool; // 0xd59 Mov
	return 2; // 0xd5b Return
	
Label_3421:
	var_19_bool = 0; // 0xd5d MovB
	return 2; // 0xd5e Return
}


func_849(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x351 PushV
	FindShiftedPathTo(var_46_object, var_44_cvector); // 0x352 Func
	var_43_object = var_46_object; // 0x354 Mov
	return 2; // 0x355 Return
}


func_2895(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj(); // 0xb4f PushV
	CreateFloatVector(var_569_object); // 0xb50 Func
	add(var_567_float); // 0xb52 ObjFunc
	var_570_int = 15; // 0xb54 PushI
	SendWorldWndMessage(var_570_int, var_569_object); // 0xb55 Func
	return 2; // 0xb57 Return
}


func_2905(var_120_int)
{
	var_121_float = 0; var_122_float = 0; // 0xb59 PushV
	GetGameTime(var_122_float); // 0xb5a Func
	var_123_int = 1; // 0xb5c PushI
	var_124_int = 0; // 0xb5d PushV
	var_125_int = 24; // 0xb5e PushI
	var_124_int = var_122_float / var_122_float; // 0xb5f Div2
	var_120_int = var_123_int + var_124_int; // 0xb60 Add2
	return 2; // 0xb61 Return
}


func_3423(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xd5f PushV
	var_33_string = "heal"; // 0xd60 PushS
	var_34_bool = var_30_string == var_33_string; // 0xd61 Eq
	if(var_34_bool == 0) goto Label_3435; // 0xd62 JumpB
	var_35_string = "player"; // 0xd63 PushS
	FindActor(var_32_object, var_35_string); // 0xd64 Func
	var_36_object = Obj(); // 0xd66 PushV
	var_36_object = var_32_object; // 0xd67 Mov
	func_3707(); // 0xd68 NEW_2
	var_32_object = 0; // 0xd6a SetNull
	
Label_3435:
	return 2; // 0xd6b Return
}


func_2914(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0xb62 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0xb63 Func
	var_24_bool = var_23_bool; // 0xb65 Push
	if(var_24_bool == 0) goto Label_2922; // 0xb66 JumpB
	var_25_string = "attack"; // 0xb67 PushS
	PlayGlobalMusic(var_25_string); // 0xb68 Func
	
Label_2922:
	return 2; // 0xb6a Return
}


func_1380(var_182_object)
{
	var_189_object = Obj(); var_190_bool = 0; var_191_float = 0; // 0x565 PushV
	var_189_object = var_182_object; // 0x566 Mov
	var_190_bool = 1; // 0x567 MovB
	var_191_float = 180.0; // 0x568 MovF
	func_1394(var_185_int, var_186_bool, var_187_float, var_188_int, var_182_object, var_189_object, var_190_bool, var_191_float); // 0x569 NEW_2
	return 0; // 0x56b Return
}


func_363(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x16b PushV
	var_42_bool = var_21_object == 0; // 0x16c NullEq
	if(var_42_bool == 0) goto Label_371; // 0x16d JumpB
	var_43_string = ""; // 0x16e PushV
	var_43_string = "fdie"; // 0x16f MovS
	func_454(var_43_string); // 0x170 NEW_2
	goto Label_453; // 0x172 Jump
	
Label_453:
	return 20; // 0x1c5 Return
	
Label_371:
	GetPosition(var_32_cvector); // 0x173 ObjFunc
	GetPosition(var_33_cvector); // 0x175 Func
	GetDirection(var_34_cvector); // 0x177 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x179 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x17a PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x17b PushE
	var_77_float = var_75_float * var_76_float; // 0x17c Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x17d PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x17e PushE
	var_80_float = var_78_float * var_79_float; // 0x17f Mult
	var_81_int = var_77_float + var_80_float; // 0x180 Add
	var_82_int = 0; // 0x181 PushI
	var_83_bool = var_81_int >= var_82_int; // 0x182 GE
	if(var_83_bool == 0) goto Label_390; // 0x183 JumpB
	var_36_string = "fdie"; // 0x184 MovS
	goto Label_391; // 0x185 Jump
	
Label_391:
	RemoveRTEnvelope(); // 0x187 Func
	SetDeathState(); // 0x189 Func
	Stop(); // 0x18b Func
	StopAsync(); // 0x18d Func
	var_37_object = var_21_object; // 0x18f Mov
	var_84_string = "GetScriptProperty"; // 0x190 PushS
	var_85_int = 2; // 0x191 PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x192 FuncExist
	if(var_86_bool == 0) goto Label_415; // 0x193 JumpB
	var_87_string = "Owner"; // 0x194 PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x195 ObjFunc
	var_88_bool = var_38_bool; // 0x197 Push
	if(var_88_bool == 0) goto Label_415; // 0x198 JumpB
	var_89_string = "Owner"; // 0x199 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x19a ObjFunc
	var_90_bool = var_37_object == 0; // 0x19c NullEq
	if(var_90_bool == 0) goto Label_415; // 0x19d JumpB
	var_37_object = var_21_object; // 0x19e Mov
	
Label_415:
	var_91_string = "@GetEyesHeight"; // 0x19f PushS
	var_92_int = 1; // 0x1a0 PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x1a1 FuncExist
	if(var_93_bool == 0) goto Label_430; // 0x1a2 JumpB
	GetEyesHeight(var_40_float); // 0x1a3 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x1a5 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x1a6 PushE
	var_94_float = var_40_float; // 0x1a7 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x1a8 PopE
	var_95_string = "head"; // 0x1a9 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x1aa Func
	var_39_bool = 1; // 0x1ac MovB
	goto Label_431; // 0x1ad Jump
	
Label_431:
	var_96_string = ""; // 0x1af PushV
	var_96_string = var_36_string; // 0x1b0 Mov
	func_2779(var_96_string); // 0x1b1 NEW_2
	var_97_string = "all"; // 0x1b3 PushS
	PlayAnimation(var_97_string, var_36_string); // 0x1b4 Func
	WaitForAnimEnd(); // 0x1b6 Func
	var_98_bool = var_39_bool; // 0x1b8 Push
	if(var_98_bool == 0) goto Label_447; // 0x1b9 JumpB
	StopAsync(); // 0x1ba Func
	var_99_string = "head"; // 0x1bc PushS
	UnlookAsync(var_99_string); // 0x1bd Func
	
Label_447:
	var_100_string = "all"; // 0x1bf PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x1c0 Func
	RemoveEnvelope(); // 0x1c2 Func
	var_37_object = 0; // 0x1c4 SetNull
	
Label_430:
	var_39_bool = 0; // 0x1ae MovB
	
Label_390:
	var_36_string = "bdie"; // 0x186 MovS
}


func_3436(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0xd6c PushV
	var_76_string = "idle"; // 0xd6d MovS
	var_77_int = var_74_int; // 0xd6e Push
	if(var_77_int == 0) goto Label_3441; // 0xd6f JumpB
	var_76_string = var_76_string + var_74_int; // 0xd70 Add2
	
Label_3441:
	var_73_string = var_76_string; // 0xd71 Mov
	return 2; // 0xd72 Return
}


func_1388(var_508_float)
{
	var_508_float = 0.1; // 0x56d MovF
	return 0; // 0x56e Return
}


func_2923()
{
	var_472_object = Obj(); var_473_object = Obj(); // 0xb6b PushV
	GetScene(var_473_object); // 0xb6c Func
	var_474_string = "battle"; // 0xb6e PushS
	var_475_object = Obj(); // 0xb6f PushV
	func_2820(var_475_object); // 0xb70 NEW_2
	BroadcastMessage(var_474_string, var_475_object, var_473_object); // 0xb72 Func
	return 2; // 0xb74 Return
}


func_1391(var_515_int)
{
	var_515_int = 0; // 0x570 MovI
	return 0; // 0x571 Return
}


func_1904(var_0_object, var_418_bool)
{
	var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_float = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0; var_428_float = 0; // 0x770 PushV
	var_429_bool = 0; var_430_object = Obj(); // 0x771 PushV
	var_430_object = var_0_object; // 0x772 MovT
	func_2479(var_429_bool, var_430_object); // 0x773 NEW_2
	var_431_bool = var_429_bool == 0; // 0x775 Not
	if(var_431_bool == 0) goto Label_1913; // 0x776 JumpB
	var_418_bool = 0; // 0x777 MovB
	return 10; // 0x778 Return
	
Label_1913:
	var_432_bool = 0; // 0x779 PushV
	func_1993(var_428_float, var_432_bool); // 0x77a NEW_2
	if(var_432_bool == 0) goto Label_1930; // 0x77c JumpB
	GetPFPosition(var_424_cvector); // 0x77d TObjFunc
	GetPFPosition(var_425_cvector); // 0x77f Func
	var_426_cvector = var_424_cvector - var_425_cvector; // 0x781 Sub2
	var_427_float = var_426_cvector | var_426_cvector; // 0x782 Or2
	GetAttackDistance(var_428_float); // 0x783 TObjFunc
	var_433_int = 50; // 0x785 PushI
	var_428_float = var_428_float + var_433_int; // 0x786 Add2
	var_434_float = var_428_float * var_428_float; // 0x787 Mult
	var_418_bool = var_427_float <= var_434_float; // 0x788 LE2
	return 10; // 0x789 Return
	
Label_1930:
	var_418_bool = 0; // 0x78a MovB
	return 10; // 0x78b Return
}


func_1394(var_0_object, var_3_string, var_5_bool, var_189_object, var_190_bool, var_191_float, var_266_bool, var_352_bool)
{
	var_192_float = 0; var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_bool = 0; var_196_bool = 0; var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_cvector = CVector(0,0,0); var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_bool = 0; var_213_float = 0; // 0x572 PushV
	func_1623(var_211_cvector, var_212_bool, var_213_float); // 0x574 NEW_2
	var_5_bool = 0; // 0x576 TMovI
	var_236_string = "@GetAttackDistance"; // 0x577 PushS
	var_237_int = 1; // 0x578 PushI
	var_238_bool = IsFuncExist(var_189_object, var_236_string, var_237_int); // 0x579 FuncExist
	if(var_238_bool == 0) goto Label_1408; // 0x57a JumpB
	GetAttackDistance(var_203_float); // 0x57b ObjFunc
	var_239_int = 50; // 0x57d PushI
	var_203_float = var_203_float + var_239_int; // 0x57e Add2
	goto Label_1409; // 0x57f Jump
	
Label_1409:
	var_240_int = 150; // 0x581 PushI
	var_241_bool = var_203_float >= var_240_int; // 0x582 GE
	if(var_241_bool == 0) goto Label_1413; // 0x583 JumpB
	var_203_float = 150; // 0x584 MovI
	
Label_1413:
	var_3_string = 0; // 0x585 TMovB
	var_0_object = var_189_object; // 0x586 TMov
	IsPlayerActor(var_0_object, var_206_bool); // 0x587 Func
	var_242_bool = var_206_bool; // 0x589 Push
	if(var_242_bool == 0) goto Label_1427; // 0x58a JumpB
	var_243_string = "attack"; // 0x58b PushS
	PlayGlobalMusic(var_243_string); // 0x58c Func
	var_244_object = Obj(); // 0x58e PushV
	func_2820(var_244_object); // 0x58f NEW_2
	SendPlayerEnemy(var_189_object, var_244_object); // 0x591 Func
	
Label_1427:
	var_247_bool = var_190_bool; // 0x593 Push
	if(var_247_bool == 0) goto Label_1431; // 0x594 JumpB
	var_207_bool = 0; // 0x595 MovB
	goto Label_1432; // 0x596 Jump
	
Label_1432:
	var_248_float = 400.0; // 0x598 PushF
	var_208_float = var_248_float + var_203_float; // 0x599 Add2
	
Label_1434:
	var_249_bool = 0; // 0x59a PushV
	var_249_bool = 0; // 0x59b MovB
	var_250_bool = 0; var_251_object = Obj(); // 0x59c PushV
	var_251_object = var_0_object; // 0x59d MovT
	func_2479(var_250_bool, var_251_object); // 0x59e NEW_2
	if(var_250_bool == 0) goto Label_1444; // 0x5a0 JumpB
	var_252_bool = var_3_string == 0; // 0x5a1 Not
	if(var_252_bool == 0) goto Label_1444; // 0x5a2 JumpB
	var_249_bool = 1; // 0x5a3 MovB
	
Label_1444:
	if(var_249_bool == 0) goto Label_1606; // 0x5a4 JumpB
	func_2036(var_213_float); // 0x5a6 NEW_2
	GetPFPosition(var_204_cvector); // 0x5a8 TObjFunc
	GetPFPosition(var_205_cvector); // 0x5aa Func
	var_209_cvector = var_204_cvector - var_205_cvector; // 0x5ac Sub2
	var_210_float = var_209_cvector | var_209_cvector; // 0x5ad Or2
	var_258_float = var_208_float * var_208_float; // 0x5ae Mult
	var_259_bool = var_210_float >= var_258_float; // 0x5af GE
	if(var_259_bool == 0) goto Label_1472; // 0x5b0 JumpB
	var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0; // 0x5b1 PushV
	var_261_object = var_0_object; // 0x5b2 MovT
	var_262_float = var_203_float; // 0x5b3 Mov
	var_263_float = 3000.0; // 0x5b4 MovF
	var_264_bool = 1; // 0x5b5 MovB
	var_265_bool = 0; // 0x5b6 MovB
	TaskCall(7); // 0x5b7 TaskCall
	func_2063(var_268_bool, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool); // 0x5b8 NEW_2
	TaskReturn(); // 0x5b9 TaskReturn
	var_337_bool = var_266_bool == 0; // 0x5bb Not
	if(var_337_bool == 0) goto Label_1470; // 0x5bc JumpB
	goto Label_1606; // 0x5bd Jump
	
Label_1606:
	WaitForAnimEnd(); // 0x646 Func
	var_338_string = var_3_string; // 0x648 PushT
	if(var_338_string == 0) goto Label_1611; // 0x649 JumpB
	return 22; // 0x64a Return
	
Label_1611:
	var_339_string = "all"; // 0x64b PushS
	var_340_string = "attack_off"; // 0x64c PushS
	PlayAnimation(var_339_string, var_340_string); // 0x64d Func
	WaitForAnimEnd(); // 0x64f Func
	var_341_bool = var_206_bool; // 0x651 Push
	if(var_341_bool == 0) goto Label_1622; // 0x652 JumpB
	var_342_float = 2.0; // 0x653 PushF
	Sleep(var_342_float); // 0x654 Func
	
Label_1622:
	return 22; // 0x656 Return
	
Label_1470:
	var_207_bool = 0; // 0x5be MovB
	goto Label_1605; // 0x5bf Jump
	
Label_1605:
	goto Label_1434; // 0x645 Jump
	
Label_1472:
	var_343_float = var_191_float * var_191_float; // 0x5c0 Mult
	var_344_bool = var_210_float >= var_343_float; // 0x5c1 GE
	if(var_344_bool == 0) goto Label_1597; // 0x5c2 JumpB
	GetPFPosition(var_211_cvector); // 0x5c3 TObjFunc
	CanReachByPF(var_212_bool, var_211_cvector); // 0x5c5 Func
	var_345_bool = var_212_bool == 0; // 0x5c7 Not
	if(var_345_bool == 0) goto Label_1496; // 0x5c8 JumpB
	var_346_bool = 0; var_347_object = Obj(); var_348_float = 0; var_349_float = 0; var_350_bool = 0; var_351_bool = 0; // 0x5c9 PushV
	var_347_object = var_0_object; // 0x5ca MovT
	var_348_float = var_203_float; // 0x5cb Mov
	var_349_float = 3000.0; // 0x5cc MovF
	var_350_bool = 1; // 0x5cd MovB
	var_351_bool = 0; // 0x5ce MovB
	TaskCall(7); // 0x5cf TaskCall
	func_2063(var_354_bool, var_346_bool, var_347_object, var_348_float, var_349_float, var_350_bool, var_351_bool); // 0x5d0 NEW_2
	TaskReturn(); // 0x5d1 TaskReturn
	var_355_bool = var_352_bool == 0; // 0x5d3 Not
	if(var_355_bool == 0) goto Label_1494; // 0x5d4 JumpB
	goto Label_1606; // 0x5d5 Jump
	
Label_1494:
	var_207_bool = 0; // 0x5d6 MovB
	goto Label_1434; // 0x5d7 Jump
	
Label_1496:
	var_356_bool = var_207_bool == 0; // 0x5d8 Not
	if(var_356_bool == 0) goto Label_1521; // 0x5d9 JumpB
	var_357_object = Obj(); // 0x5da PushV
	var_357_object = var_0_object; // 0x5db MovT
	func_2629(); // 0x5dc NEW_2
	var_358_string = "all"; // 0x5de PushS
	var_359_string = "attack_on"; // 0x5df PushS
	PlayAnimation(var_358_string, var_359_string); // 0x5e0 Func
	WaitForAnimEnd(); // 0x5e2 Func
	func_2036(var_213_float); // 0x5e5 NEW_2
	StopAsync(); // 0x5e7 Func
	var_207_bool = 1; // 0x5e9 MovB
	var_360_bool = 0; var_361_object = Obj(); // 0x5ea PushV
	var_361_object = var_0_object; // 0x5eb MovT
	func_2479(var_360_bool, var_361_object); // 0x5ec NEW_2
	var_362_bool = var_360_bool == 0; // 0x5ee Not
	if(var_362_bool == 0) goto Label_1521; // 0x5ef JumpB
	goto Label_1606; // 0x5f0 Jump
	
Label_1521:
	rand(var_213_float); // 0x5f1 Func
	var_363_bool = 0; // 0x5f3 PushV
	var_363_bool = 1; // 0x5f4 MovB
	var_364_float = 0.25; // 0x5f5 PushF
	var_365_bool = var_213_float < var_364_float; // 0x5f6 LT
	if(var_365_bool == 0) goto Label_1533; // 0x5f7 JumpB
	var_366_bool = 0; // 0x5f8 PushV
	func_1993(var_363_bool, var_366_bool); // 0x5f9 NEW_2
	if(var_366_bool == 0) goto Label_1533; // 0x5fb JumpB
	var_363_bool = 0; // 0x5fc MovB
	
Label_1533:
	if(var_363_bool == 0) goto Label_1550; // 0x5fd JumpB
	Face(var_0_object); // 0x5fe Func
	func_2043(); // 0x601 NEW_2
	var_401_string = "all"; // 0x603 PushS
	var_402_string = "attack_stay"; // 0x604 PushS
	PlayAnimation(var_401_string, var_402_string); // 0x605 Func
	var_403_bool = 0; var_404_float = 0; // 0x607 PushV
	var_404_float = var_191_float; // 0x608 Mov
	func_1861(var_213_float, var_403_bool, var_404_float); // 0x609 NEW_2
	StopAsync(); // 0x60b Func
	goto Label_1596; // 0x60d Jump
	
Label_1596:
	goto Label_1605; // 0x63c Jump
	
Label_1550:
	Face(var_0_object); // 0x60e Func
	var_614_string = "all"; // 0x610 PushS
	var_615_string = "fjump"; // 0x611 PushS
	PlayAnimation(var_614_string, var_615_string); // 0x612 Func
	WaitForAnimEnd(); // 0x614 Func
	func_2036(var_213_float); // 0x617 NEW_2
	var_616_cvector = CVector(0.0, 0.0, 0.0); // 0x619 PushVec
	SetSpeed(var_616_cvector); // 0x61a Func
	Stop(); // 0x61c Func
	StopAsync(); // 0x61e Func
	var_617_bool = 0; // 0x620 PushV
	func_1993(var_213_float, var_617_bool); // 0x621 NEW_2
	var_618_bool = var_617_bool == 0; // 0x623 Not
	if(var_618_bool == 0) goto Label_1596; // 0x624 JumpB
	var_619_bool = 0; var_620_object = Obj(); // 0x625 PushV
	var_620_object = var_0_object; // 0x626 MovT
	func_2479(var_619_bool, var_620_object); // 0x627 NEW_2
	var_621_bool = var_619_bool == 0; // 0x629 Not
	if(var_621_bool == 0) goto Label_1580; // 0x62a JumpB
	goto Label_1606; // 0x62b Jump
	
Label_1580:
	GetPFPosition(var_204_cvector); // 0x62c TObjFunc
	GetPFPosition(var_205_cvector); // 0x62e Func
	var_209_cvector = var_204_cvector - var_205_cvector; // 0x630 Sub2
	var_210_float = var_209_cvector | var_209_cvector; // 0x631 Or2
	var_622_float = var_191_float * var_191_float; // 0x632 Mult
	var_623_bool = var_210_float < var_622_float; // 0x633 LT
	if(var_623_bool == 0) goto Label_1596; // 0x634 JumpB
	var_624_bool = 0; var_625_float = 0; // 0x635 PushV
	var_625_float = var_191_float; // 0x636 Mov
	func_1697(var_213_float, var_624_bool, var_625_float); // 0x637 NEW_2
	var_626_bool = var_624_bool == 0; // 0x639 Not
	if(var_626_bool == 0) goto Label_1596; // 0x63a JumpB
	goto Label_1606; // 0x63b Jump
	
Label_1597:
	var_627_bool = 0; var_628_float = 0; // 0x63d PushV
	var_628_float = var_191_float; // 0x63e Mov
	func_1697(var_213_float, var_627_bool, var_628_float); // 0x63f NEW_2
	var_629_bool = var_627_bool == 0; // 0x641 Not
	if(var_629_bool == 0) goto Label_1604; // 0x642 JumpB
	goto Label_1606; // 0x643 Jump
	
Label_1604:
	var_207_bool = 1; // 0x644 MovB
	
Label_1431:
	var_207_bool = 1; // 0x597 MovB
	
Label_1408:
	var_203_float = var_191_float; // 0x580 Mov
}


func_3443(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0xd73 PushV
	var_70_int = 0; // 0xd74 MovI
	
Label_3445:
	var_72_string = "all"; // 0xd75 PushS
	var_73_string = ""; var_74_int = 0; // 0xd76 PushV
	var_74_int = var_70_int; // 0xd77 Mov
	func_3436(var_73_string, var_74_int); // 0xd78 NEW_2
	HasAnimation(var_71_bool, var_72_string, var_73_string); // 0xd7a Func
	var_78_bool = var_71_bool == 0; // 0xd7c Not
	if(var_78_bool == 0) goto Label_3455; // 0xd7d JumpB
	goto Label_3458; // 0xd7e Jump
	
Label_3458:
	var_67_int = var_70_int; // 0xd82 Mov
	return 4; // 0xd83 Return
	
Label_3455:
	var_79_int = 1; // 0xd7f PushI
	var_70_int = var_70_int + var_79_int; // 0xd80 Add2
	goto Label_3445; // 0xd81 Jump
}


func_2934(var_173_bool)
{
	var_175_int = 0; var_176_string = ""; // 0xb77 PushV
	var_176_string = "branch"; // 0xb78 MovS
	func_2890(var_175_int, var_176_string); // 0xb79 NEW_2
	var_177_int = 0; // 0xb7b PushI
	var_178_bool = var_175_int == var_177_int; // 0xb7c Eq
	if(var_178_bool == 0) goto Label_2944; // 0xb7d JumpB
	var_173_bool = 1; // 0xb7e MovB
	return 0; // 0xb7f Return
	
Label_2944:
	var_173_bool = 0; // 0xb80 MovB
	return 0; // 0xb81 Return
}


func_2946(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0xb83 PushV
	var_123_string = "branch"; // 0xb84 MovS
	func_2890(var_122_int, var_123_string); // 0xb85 NEW_2
	var_126_int = 2; // 0xb87 PushI
	var_127_bool = var_122_int == var_126_int; // 0xb88 Eq
	if(var_127_bool == 0) goto Label_2956; // 0xb89 JumpB
	var_120_bool = 1; // 0xb8a MovB
	return 0; // 0xb8b Return
	
Label_2956:
	var_120_bool = 0; // 0xb8c MovB
	return 0; // 0xb8d Return
}


func_3460(var_61_int)
{
	var_63_bool = 0; // 0xd85 PushV
	func_3743(var_63_bool); // 0xd86 NEW_2
	if(var_63_bool == 0) goto Label_3467; // 0xd88 JumpB
	var_61_int = 2; // 0xd89 MovI
	goto Label_3468; // 0xd8a Jump
	
Label_3468:
	return 0; // 0xd8c Return
	
Label_3467:
	var_61_int = 0; // 0xd8b MovI
}


func_2438(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x986 PushV
	IsDead(var_49_bool); // 0x987 ObjFunc
	var_46_bool = var_49_bool; // 0x989 Mov
	return 2; // 0x98a Return
}


func_2443(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0x98b PushV
	var_41_bool = var_36_object == 0; // 0x98c NullEq
	if(var_41_bool == 0) goto Label_2448; // 0x98d JumpB
	var_35_bool = 0; // 0x98e MovB
	return 4; // 0x98f Return
	
Label_2448:
	var_42_bool = 0; // 0x990 PushV
	var_42_bool = 0; // 0x991 MovB
	var_43_string = "IsDead"; // 0x992 PushS
	var_44_int = 1; // 0x993 PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0x994 FuncExist
	if(var_45_bool == 0) goto Label_2460; // 0x995 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x996 PushV
	var_47_object = var_36_object; // 0x997 Mov
	func_2438(var_47_object); // 0x998 NEW_2
	if(var_46_bool == 0) goto Label_2460; // 0x99a JumpB
	var_42_bool = 1; // 0x99b MovB
	
Label_2460:
	if(var_42_bool == 0) goto Label_2463; // 0x99c JumpB
	var_35_bool = 0; // 0x99d MovB
	return 4; // 0x99e Return
	
Label_2463:
	GetScene(var_39_object); // 0x99f Func
	var_50_bool = var_39_object == 0; // 0x9a1 NullEq
	if(var_50_bool == 0) goto Label_2469; // 0x9a2 JumpB
	var_35_bool = 0; // 0x9a3 MovB
	return 4; // 0x9a4 Return
	
Label_2469:
	GetScene(var_40_object); // 0x9a5 ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0x9a7 Neq
	if(var_51_bool == 0) goto Label_2475; // 0x9a8 JumpB
	var_35_bool = 0; // 0x9a9 MovB
	return 4; // 0x9aa Return
	
Label_2475:
	var_35_bool = 1; // 0x9ab MovB
	return 4; // 0x9ac Return
}


func_1932(var_416_bool)
{
	var_417_bool = 0; // 0x78c PushV
	var_417_bool = 0; // 0x78d MovB
	var_418_bool = 0; // 0x78e PushV
	func_1904(var_417_bool, var_418_bool); // 0x78f NEW_2
	if(var_418_bool == 0) goto Label_1943; // 0x791 JumpB
	var_435_bool = 0; // 0x792 PushV
	func_1948(var_416_bool, var_417_bool, var_435_bool); // 0x793 NEW_2
	if(var_435_bool == 0) goto Label_1943; // 0x795 JumpB
	var_417_bool = 1; // 0x796 MovB
	
Label_1943:
	if(var_417_bool == 0) goto Label_1946; // 0x797 JumpB
	var_416_bool = 1; // 0x798 MovB
	return 0; // 0x799 Return
	
Label_1946:
	var_416_bool = 0; // 0x79a MovB
	return 0; // 0x79b Return
}


func_3469(var_60_object)
{
	var_61_object = Obj(); // 0xd8e PushV
	var_61_object = var_60_object; // 0xd8f Mov
	TaskCall(5); // 0xd90 TaskCall
	func_1105(var_62_object, var_61_object); // 0xd91 NEW_2
	TaskReturn(); // 0xd92 TaskReturn
	return 0; // 0xd94 Return
}


func_2958(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj(); // 0xb8f PushV
	var_182_object = var_180_object; // 0xb90 Mov
	func_2968(var_182_object); // 0xb91 NEW_2
	if(var_181_bool == 0) goto Label_2966; // 0xb93 JumpB
	var_179_bool = 1; // 0xb94 MovB
	return 0; // 0xb95 Return
	
Label_2966:
	var_179_bool = 0; // 0xb96 MovB
	return 0; // 0xb97 Return
}


func_3477(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj(); // 0xd96 PushV
	var_91_object = var_89_object; // 0xd97 Mov
	func_2479(var_90_bool, var_91_object); // 0xd98 NEW_2
	if(var_90_bool == 0) goto Label_3485; // 0xd9a JumpB
	var_88_int = 2; // 0xd9b MovI
	goto Label_3486; // 0xd9c Jump
	
Label_3486:
	return 0; // 0xd9e Return
	
Label_3485:
	var_88_int = 0; // 0xd9d MovI
}


func_2968(var_181_bool)
{
	var_183_int = 0; // 0xb99 PushV
	func_2905(var_183_int); // 0xb9a NEW_2
	var_189_int = 1; // 0xb9c PushI
	var_181_bool = var_183_int == var_189_int; // 0xb9d Eq2
	return 0; // 0xb9e Return
}


func_1948(var_0_object, var_4_bool, var_435_bool)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_float = 0; var_439_cvector = CVector(0,0,0); var_440_cvector = CVector(0,0,0); var_441_object = Obj(); var_442_bool = 0; var_443_float = 0; var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); // 0x79c PushV
	GetScene(var_441_object); // 0x79d Func
	var_442_bool = 0; // 0x79f MovB
	
Label_1952:
	var_446_cvector = CVector(0,0,0); var_447_object = Obj(); // 0x7a0 PushV
	var_447_object = var_0_object; // 0x7a1 MovT
	func_2333(var_447_object); // 0x7a2 NEW_2
	var_448_int = -var_446_cvector; // 0x7a4 Neg
	FindDirLength(var_443_float, var_448_int, var_443_float); // 0x7a5 Func
	var_449_bool = var_443_float < var_4_bool; // 0x7a7 LT
	if(var_449_bool == 0) goto Label_1962; // 0x7a8 JumpB
	goto Label_1990; // 0x7a9 Jump
	
Label_1990:
	var_435_bool = var_442_bool; // 0x7c6 Mov
	return 10; // 0x7c7 Return
	
Label_1962:
	Face(var_0_object); // 0x7aa Func
	var_450_string = "all"; // 0x7ac PushS
	var_451_string = "bjump"; // 0x7ad PushS
	PlayAnimation(var_450_string, var_451_string); // 0x7ae Func
	GetPFPosition(var_444_cvector); // 0x7b0 TObjFunc
	GetPFPosition(var_445_cvector); // 0x7b2 Func
	WaitForAnimEnd(); // 0x7b4 Func
	func_2036(var_445_cvector); // 0x7b7 NEW_2
	StopAsync(); // 0x7b9 Func
	var_452_cvector = CVector(0.0, 0.0, 0.0); // 0x7bb PushVec
	SetSpeed(var_452_cvector); // 0x7bc Func
	var_442_bool = 1; // 0x7be MovB
	var_453_bool = 0; // 0x7bf PushV
	func_1904(var_445_cvector, var_453_bool); // 0x7c0 NEW_2
	var_454_bool = var_453_bool == 0; // 0x7c2 Not
	if(var_454_bool == 0) goto Label_1989; // 0x7c3 JumpB
	goto Label_1990; // 0x7c4 Jump
	
Label_1989:
	goto Label_1952; // 0x7c5 Jump
}


func_2975(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0xb9f PushV
	var_107_string = "branch"; // 0xba0 PushS
	GetVariable(var_107_string, var_106_int); // 0xba1 Func
	var_108_int = 0; // 0xba3 PushI
	var_109_bool = var_106_int == var_108_int; // 0xba4 Eq
	if(var_109_bool == 0) goto Label_2985; // 0xba5 JumpB
	var_104_int = 1; // 0xba6 MovI
	return 2; // 0xba7 Return
	
Label_2985:
	var_110_int = 1; // 0xba9 PushI
	var_111_bool = var_106_int == var_110_int; // 0xbaa Eq
	if(var_111_bool == 0) goto Label_2990; // 0xbab JumpB
	var_104_int = 2; // 0xbac MovI
	return 2; // 0xbad Return
	
Label_2990:
	var_104_int = 3; // 0xbae MovI
	return 2; // 0xbaf Return
}


func_3487(var_181_object)
{
	var_182_object = Obj(); // 0xda0 PushV
	var_182_object = var_181_object; // 0xda1 Mov
	TaskCall(6); // 0xda2 TaskCall
	func_1380(var_182_object); // 0xda3 NEW_2
	TaskReturn(); // 0xda4 TaskReturn
	return 0; // 0xda6 Return
}


func_3495(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0xda7 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0xda8 PushV
	var_42_object = var_35_object; // 0xda9 Mov
	var_43_string = "class"; // 0xdaa MovS
	func_2353(var_41_bool, var_42_object, var_43_string); // 0xdab NEW_2
	var_50_bool = var_41_bool == 0; // 0xdad Not
	if(var_50_bool == 0) goto Label_3505; // 0xdae JumpB
	var_34_bool = 0; // 0xdaf MovB
	return 4; // 0xdb0 Return
	
Label_3505:
	var_51_string = "class"; // 0xdb1 PushS
	GetProperty(var_51_string, var_39_string); // 0xdb2 Func
	var_52_string = "class"; // 0xdb4 PushS
	GetProperty(var_52_string, var_40_string); // 0xdb5 ObjFunc
	var_53_bool = 0; // 0xdb7 PushV
	var_53_bool = 0; // 0xdb8 MovB
	var_54_bool = var_36_bool == 0; // 0xdb9 Not
	if(var_54_bool == 0) goto Label_3518; // 0xdba JumpB
	var_55_bool = var_39_string == var_40_string; // 0xdbb Eq
	if(var_55_bool == 0) goto Label_3518; // 0xdbc JumpB
	var_53_bool = 1; // 0xdbd MovB
	
Label_3518:
	if(var_53_bool == 0) goto Label_3521; // 0xdbe JumpB
	var_34_bool = 1; // 0xdbf MovB
	return 4; // 0xdc0 Return
	
Label_3521:
	var_56_string = "rat"; // 0xdc1 PushS
	var_57_bool = var_40_string == var_56_string; // 0xdc2 Eq
	if(var_57_bool == 0) goto Label_3527; // 0xdc3 JumpB
	var_34_bool = 0; // 0xdc4 MovB
	return 4; // 0xdc5 Return
	
Label_3527:
	var_58_string = "rat_big"; // 0xdc7 PushS
	var_59_bool = var_40_string == var_58_string; // 0xdc8 Eq
	if(var_59_bool == 0) goto Label_3533; // 0xdc9 JumpB
	var_34_bool = 0; // 0xdca MovB
	return 4; // 0xdcb Return
	
Label_3533:
	var_60_string = "dog"; // 0xdcd PushS
	var_61_bool = var_40_string == var_60_string; // 0xdce Eq
	if(var_61_bool == 0) goto Label_3539; // 0xdcf JumpB
	var_34_bool = 0; // 0xdd0 MovB
	return 4; // 0xdd1 Return
	
Label_3539:
	var_62_string = "grabitel"; // 0xdd3 PushS
	var_63_bool = var_40_string == var_62_string; // 0xdd4 Eq
	if(var_63_bool == 0) goto Label_3545; // 0xdd5 JumpB
	var_34_bool = 0; // 0xdd6 MovB
	return 4; // 0xdd7 Return
	
Label_3545:
	var_64_string = "bomber"; // 0xdd9 PushS
	var_65_bool = var_40_string == var_64_string; // 0xdda Eq
	if(var_65_bool == 0) goto Label_3551; // 0xddb JumpB
	var_34_bool = 0; // 0xddc MovB
	return 4; // 0xddd Return
	
Label_3551:
	var_66_string = "sanitar"; // 0xddf PushS
	var_67_bool = var_40_string == var_66_string; // 0xde0 Eq
	if(var_67_bool == 0) goto Label_3557; // 0xde1 JumpB
	var_34_bool = 0; // 0xde2 MovB
	return 4; // 0xde3 Return
	
Label_3557:
	var_68_string = "hunter"; // 0xde5 PushS
	var_69_bool = var_40_string == var_68_string; // 0xde6 Eq
	if(var_69_bool == 0) goto Label_3563; // 0xde7 JumpB
	var_34_bool = 0; // 0xde8 MovB
	return 4; // 0xde9 Return
	
Label_3563:
	var_70_string = "soldier"; // 0xdeb PushS
	var_71_bool = var_40_string == var_70_string; // 0xdec Eq
	if(var_71_bool == 0) goto Label_3568; // 0xded JumpB
	var_34_bool = 0; // 0xdee MovB
	return 4; // 0xdef Return
	
Label_3568:
	var_34_bool = 1; // 0xdf0 MovB
	return 4; // 0xdf1 Return
}


func_2479(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0x9af PushV
	var_35_bool = 0; var_36_object = Obj(); // 0x9b0 PushV
	var_36_object = var_32_object; // 0x9b1 Mov
	func_2443(var_35_bool, var_36_object); // 0x9b2 NEW_2
	var_52_bool = var_35_bool == 0; // 0x9b4 Not
	if(var_52_bool == 0) goto Label_2488; // 0x9b5 JumpB
	var_31_bool = 0; // 0x9b6 MovB
	return 2; // 0x9b7 Return
	
Label_2488:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x9b8 PushV
	var_54_object = var_32_object; // 0x9b9 Mov
	var_55_string = "noaccess"; // 0x9ba MovS
	func_2353(var_53_bool, var_54_object, var_55_string); // 0x9bb NEW_2
	var_62_bool = var_53_bool == 0; // 0x9bd Not
	if(var_62_bool == 0) goto Label_2497; // 0x9be JumpB
	var_31_bool = 1; // 0x9bf MovB
	return 2; // 0x9c0 Return
	
Label_2497:
	var_63_string = "noaccess"; // 0x9c1 PushS
	GetProperty(var_63_string, var_34_int); // 0x9c2 ObjFunc
	var_64_int = 0; // 0x9c4 PushI
	var_31_bool = var_34_int == var_64_int; // 0x9c5 Eq2
	return 2; // 0x9c6 Return
}


func_2992(var_225_int)
{
	var_226_int = 0; var_227_int = 0; // 0xbb0 PushV
	var_228_string = "branch"; // 0xbb1 PushS
	GetVariable(var_228_string, var_227_int); // 0xbb2 Func
	var_225_int = var_227_int; // 0xbb4 Mov
	return 2; // 0xbb5 Return
}


func_2998(var_35_object)
{
	var_36_int = 0; // 0xbb7 PushV
	func_2992(var_36_int); // 0xbb8 NEW_2
	var_40_int = 1; // 0xbba PushI
	var_41_bool = var_36_int == var_40_int; // 0xbbb Eq
	if(var_41_bool == 0) goto Label_3008; // 0xbbc JumpB
	WorkWithCorpse(var_35_object); // 0xbbd Func
	goto Label_3010; // 0xbbf Jump
	
Label_3010:
	return 0; // 0xbc2 Return
	
Label_3008:
	Barter(var_35_object); // 0xbc0 Func
}


func_3011(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; // 0xbc3 PushV
	var_132_bool = var_117_int > var_118_int; // 0xbc4 GT
	if(var_132_bool == 0) goto Label_3018; // 0xbc5 JumpB
	var_133_string = "GenerateMoney: iMin > iMax"; // 0xbc6 PushS
	Trace(var_133_string); // 0xbc7 Func
	return 4; // 0xbc9 Return
	
Label_3018:
	var_130_int = 0; // 0xbca MovI
	var_134_bool = var_117_int != var_118_int; // 0xbcb Neq
	if(var_134_bool == 0) goto Label_3025; // 0xbcc JumpB
	var_135_int = var_118_int - var_117_int; // 0xbcd Sub
	irand(var_130_int, var_135_int); // 0xbce Func
	goto Label_3029; // 0xbd0 Jump
	
Label_3029:
	var_130_int = var_130_int + var_117_int; // 0xbd5 Add2
	var_136_int = 0; // 0xbd6 PushI
	var_137_bool = var_130_int == var_136_int; // 0xbd7 Eq
	if(var_137_bool == 0) goto Label_3034; // 0xbd8 JumpB
	return 4; // 0xbd9 Return
	
Label_3034:
	var_138_int = 0; var_139_string = ""; // 0xbda PushV
	var_139_string = "Money"; // 0xbdb MovS
	func_3258(var_138_int, var_139_string); // 0xbdc NEW_2
	var_142_int = 0; // 0xbde PushI
	AddItem(var_131_bool, var_138_int, var_142_int, var_130_int); // 0xbdf Func
	return 4; // 0xbe1 Return
	
Label_3025:
	var_143_int = 0; // 0xbd1 PushI
	var_144_bool = var_117_int == var_143_int; // 0xbd2 Eq
	if(var_144_bool == 0) goto Label_3029; // 0xbd3 JumpB
	return 4; // 0xbd4 Return
}


func_454(var_43_string)
{
	RemoveRTEnvelope(); // 0x1c7 Func
	SetDeathState(); // 0x1c9 Func
	Stop(); // 0x1cb Func
	StopAsync(); // 0x1cd Func
	StopSecondaryAnimation(); // 0x1cf Func
	var_44_string = ""; // 0x1d1 PushV
	var_44_string = var_43_string; // 0x1d2 Mov
	func_2779(var_44_string); // 0x1d3 NEW_2
	var_73_string = "all"; // 0x1d5 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x1d6 Func
	WaitForAnimEnd(); // 0x1d8 Func
	var_74_string = "all"; // 0x1da PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x1db Func
	RemoveEnvelope(); // 0x1dd Func
	return 0; // 0x1df Return
}


func_2503(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0x9c7 PushV
	var_50_bool = var_35_object == 0; // 0x9c8 NullEq
	if(var_50_bool == 0) goto Label_2507; // 0x9c9 JumpB
	return 14; // 0x9ca Return
	
Label_2507:
	IsDead(var_43_bool); // 0x9cb Func
	var_51_bool = var_43_bool; // 0x9cd Push
	if(var_51_bool == 0) goto Label_2512; // 0x9ce JumpB
	return 14; // 0x9cf Return
	
Label_2512:
	GetSecondaryAnimationType(var_44_int); // 0x9d0 Func
	var_52_int = 0; // 0x9d2 PushI
	var_53_bool = var_44_int < var_52_int; // 0x9d3 LT
	if(var_53_bool == 0) goto Label_2518; // 0x9d4 JumpB
	return 14; // 0x9d5 Return
	
Label_2518:
	GetPosition(var_45_cvector); // 0x9d6 ObjFunc
	GetPosition(var_46_cvector); // 0x9d8 Func
	GetDirection(var_47_cvector); // 0x9da Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0x9dc Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0x9dd PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0x9de PushE
	var_56_float = var_54_float * var_55_float; // 0x9df Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0x9e0 PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0x9e1 PushE
	var_59_float = var_57_float * var_58_float; // 0x9e2 Mult
	var_60_int = var_56_float + var_59_float; // 0x9e3 Add
	var_61_int = 0; // 0x9e4 PushI
	var_62_bool = var_60_int >= var_61_int; // 0x9e5 GE
	if(var_62_bool == 0) goto Label_2537; // 0x9e6 JumpB
	var_49_string = "fhit"; // 0x9e7 MovS
	goto Label_2538; // 0x9e8 Jump
	
Label_2538:
	var_63_string = "hit_react"; // 0x9ea PushS
	var_64_string = "1"; // 0x9eb PushS
	var_65_int = var_49_string + var_64_string; // 0x9ec Add
	var_66_string = "2"; // 0x9ed PushS
	var_67_int = var_49_string + var_66_string; // 0x9ee Add
	var_68_int = -10; // 0x9ef PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0x9f0 Func
	return 14; // 0x9f2 Return
	
Label_2537:
	var_49_string = "bhit"; // 0x9e9 MovS
}


func_1993(var_0_object, var_366_bool)
{
	var_367_bool = 0; var_368_bool = 0; // 0x7c9 PushV
	var_369_string = "IsAttacking"; // 0x7ca PushS
	var_370_int = 1; // 0x7cb PushI
	var_371_bool = IsFuncExist(var_0_object, var_369_string, var_370_int); // 0x7cc FuncExist
	if(var_371_bool == 0) goto Label_2002; // 0x7cd JumpB
	IsAttacking(var_368_bool); // 0x7ce TObjFunc
	var_366_bool = var_368_bool; // 0x7d0 Mov
	return 2; // 0x7d1 Return
	
Label_2002:
	var_366_bool = 0; // 0x7d2 MovB
	return 2; // 0x7d3 Return
}


func_2004(var_2_object, var_5_bool)
{
	var_479_float = 0; var_480_int = 0; var_481_float = 0; var_482_int = 0; // 0x7d4 PushV
	var_483_bool = var_2_object == 0; // 0x7d5 Not
	if(var_483_bool == 0) goto Label_2008; // 0x7d6 JumpB
	return 4; // 0x7d7 Return
	
Label_2008:
	var_484_bool = var_5_bool; // 0x7d8 PushT
	if(var_484_bool == 0) goto Label_2016; // 0x7d9 JumpB
	var_485_int = -1; // 0x7da PushI
	var_5_bool = var_5_bool + var_485_int; // 0x7db Add2
	var_486_int = 0; // 0x7dc PushI
	var_487_bool = var_5_bool > var_486_int; // 0x7dd GT
	if(var_487_bool == 0) goto Label_2016; // 0x7de JumpB
	return 4; // 0x7df Return
	
Label_2016:
	rand(var_481_float); // 0x7e0 Func
	var_488_float = 0; // 0x7e2 PushV
	func_2054(var_488_float); // 0x7e3 NEW_2
	var_489_bool = var_481_float < var_488_float; // 0x7e5 LT
	if(var_489_bool == 0) goto Label_2035; // 0x7e6 JumpB
	irand(var_482_int, var_481_float); // 0x7e7 Func
	var_490_int = 1; // 0x7e9 PushI
	var_482_int = var_482_int + var_490_int; // 0x7ea Add2
	var_491_string = "attack"; // 0x7eb PushS
	var_492_int = var_491_string + var_482_int; // 0x7ec Add
	Speak(var_492_int); // 0x7ed Func
	var_493_int = 0; // 0x7ef PushV
	func_2052(var_493_int); // 0x7f0 NEW_2
	var_5_bool = var_493_int; // 0x7f1 TMov
	
Label_2035:
	return 4; // 0x7f3 Return
}


func_3042(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; // 0xbe2 PushV
	CreateInvItem(var_235_object); // 0xbe3 Func
	SetItemName(var_231_string); // 0xbe5 ObjFunc
	var_238_string = "Organ"; // 0xbe7 PushS
	var_239_int = 1; // 0xbe8 PushI
	SetProperty(var_238_string, var_239_int); // 0xbe9 ObjFunc
	GetItemID(var_236_int); // 0xbeb ObjFunc
	var_240_int = 0; // 0xbed PushI
	var_241_int = 1; // 0xbee PushI
	AddItem(var_237_bool, var_235_object, var_240_int, var_241_int); // 0xbef Func
	return 6; // 0xbf1 Return
}


func_3570(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj(); // 0xdf3 PushV
	var_89_object = var_86_object; // 0xdf4 Mov
	func_3477(var_88_int, var_89_object); // 0xdf5 NEW_2
	var_85_int = var_88_int; // 0xdf6 Mov
	return 0; // 0xdf8 Return
}


func_2547(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0x9f3 PushV
	var_43_bool = 0; // 0x9f4 PushV
	var_43_bool = 0; // 0x9f5 MovB
	var_44_bool = 0; // 0x9f6 PushV
	var_44_bool = 0; // 0x9f7 MovB
	var_45_object = var_22_object; // 0x9f8 Push
	if(var_45_object == 0) goto Label_2558; // 0x9f9 JumpB
	var_46_int = 4; // 0x9fa PushI
	var_47_bool = var_23_int != var_46_int; // 0x9fb Neq
	if(var_47_bool == 0) goto Label_2558; // 0x9fc JumpB
	var_44_bool = 1; // 0x9fd MovB
	
Label_2558:
	if(var_44_bool == 0) goto Label_2563; // 0x9fe JumpB
	var_48_int = 5; // 0x9ff PushI
	var_49_bool = var_23_int != var_48_int; // 0xa00 Neq
	if(var_49_bool == 0) goto Label_2563; // 0xa01 JumpB
	var_43_bool = 1; // 0xa02 MovB
	
Label_2563:
	if(var_43_bool == 0) goto Label_2610; // 0xa03 JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa04 PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xa05 PushV
	var_53_object = var_22_object; // 0xa06 Mov
	func_2333(var_53_object); // 0xa07 NEW_2
	var_51_cvector = var_52_cvector; // 0xa08 Mov
	func_2826(var_50_cvector, var_51_cvector); // 0xa0a NEW_2
	var_34_cvector = var_50_cvector; // 0xa0b Mov
	CreateVectorVector(var_35_object); // 0xa0d Func
	var_36_int = 1; // 0xa0f MovI
	
Label_2576:
	var_63_string = "hit"; // 0xa10 PushS
	var_64_int = var_63_string + var_36_int; // 0xa11 Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xa12 Func
	var_65_bool = var_37_bool == 0; // 0xa14 Not
	if(var_65_bool == 0) goto Label_2583; // 0xa15 JumpB
	goto Label_2592; // 0xa16 Jump
	
Label_2592:
	size(var_40_int); // 0xa20 ObjFunc
	var_66_int = var_40_int; // 0xa22 Push
	if(var_66_int == 0) goto Label_2609; // 0xa23 JumpB
	irand(var_41_int, var_40_int); // 0xa24 Func
	get(var_42_cvector, var_41_int); // 0xa26 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xa28 PushV
	var_67_object = var_22_object; // 0xa29 Mov
	var_68_int = var_23_int; // 0xa2a Mov
	var_69_float = var_24_float; // 0xa2b Mov
	var_70_cvector = var_42_cvector; // 0xa2c Mov
	var_71_cvector = -var_34_cvector; // 0xa2d Neg2
	func_2615(var_69_float, var_70_cvector, var_71_cvector); // 0xa2e NEW_2
	return 18; // 0xa30 Return
	
Label_2609:
	var_35_object = 0; // 0xa31 SetNull
	
Label_2610:
	var_112_object = Obj(); // 0xa32 PushV
	var_112_object = var_22_object; // 0xa33 Mov
	func_2503(var_112_object); // 0xa34 NEW_2
	return 18; // 0xa36 Return
	
Label_2583:
	var_113_int = var_39_cvector | var_34_cvector; // 0xa17 Or
	var_114_float = 0.70711; // 0xa18 PushF
	var_115_bool = var_113_int >= var_114_float; // 0xa19 GE
	if(var_115_bool == 0) goto Label_2589; // 0xa1a JumpB
	add(var_38_cvector); // 0xa1b ObjFunc
	
Label_2589:
	var_116_int = 1; // 0xa1d PushI
	var_36_int = var_36_int + var_116_int; // 0xa1e Add2
	goto Label_2576; // 0xa1f Jump
}


func_2036(var_0_object)
{
	var_253_object = Obj(); // 0x7f4 PushV
	var_253_object = var_0_object; // 0x7f5 MovT
	func_2914(var_253_object); // 0x7f6 NEW_2
	return 0; // 0x7f8 Return
}


func_501()
{
	var_20_bool = 0; // 0x1f5 PushV
	func_2640(var_20_bool); // 0x1f6 NEW_2
	var_23_bool = var_20_bool == 0; // 0x1f8 Not
	if(var_23_bool == 0) goto Label_509; // 0x1f9 JumpB
	func_3672(); // 0x1fb NEW_2
	
Label_509:
	return 0; // 0x1fd Return
}


func_3059()
{
	var_225_int = 0; // 0xbf3 PushV
	func_2992(var_225_int); // 0xbf4 NEW_2
	var_229_int = 1; // 0xbf6 PushI
	var_230_bool = var_225_int != var_229_int; // 0xbf7 Neq
	if(var_230_bool == 0) goto Label_3066; // 0xbf8 JumpB
	return 0; // 0xbf9 Return
	
Label_3066:
	var_231_string = ""; // 0xbfa PushV
	var_231_string = "liver"; // 0xbfb MovS
	func_3042(var_231_string); // 0xbfc NEW_2
	var_242_string = ""; // 0xbfe PushV
	var_242_string = "kidney"; // 0xbff MovS
	func_3042(var_242_string); // 0xc00 NEW_2
	var_243_string = ""; // 0xc02 PushV
	var_243_string = "heart"; // 0xc03 MovS
	func_3042(var_243_string); // 0xc04 NEW_2
	var_244_string = ""; // 0xc06 PushV
	var_244_string = "blood"; // 0xc07 MovS
	func_3042(var_244_string); // 0xc08 NEW_2
	return 0; // 0xc0a Return
}


func_3577(var_124_object)
{
	var_125_object = Obj(); // 0xdfa PushV
	var_125_object = var_124_object; // 0xdfb Mov
	func_3487(var_125_object); // 0xdfc NEW_2
	return 0; // 0xdfe Return
}


func_2043()
{
	var_372_string = ""; // 0x7fb PushV
	var_372_string = "attack_stay"; // 0x7fc MovS
	func_2779(var_372_string); // 0x7fd NEW_2
	return 0; // 0x7ff Return
}


func_3583(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xdff PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0xe00 PushV
	var_35_object = var_29_object; // 0xe01 Mov
	var_36_bool = !var_31_bool; // 0xe02 Not2
	func_3495(var_34_bool, var_35_object, var_36_bool); // 0xe03 NEW_2
	var_72_bool = var_34_bool == 0; // 0xe05 Not
	if(var_72_bool == 0) goto Label_3593; // 0xe06 JumpB
	var_27_bool = 0; // 0xe07 MovB
	return 2; // 0xe08 Return
	
Label_3593:
	CanSee(var_33_bool, var_28_object); // 0xe09 Func
	var_73_bool = 0; // 0xe0b PushV
	var_73_bool = 1; // 0xe0c MovB
	var_74_bool = var_33_bool; // 0xe0d Push
	if(var_74_bool == 0) goto Label_3607; // 0xe0e JumpB
	var_75_float = 0; var_76_object = Obj(); // 0xe0f PushV
	var_76_object = var_28_object; // 0xe10 Mov
	func_2340(var_76_object); // 0xe11 NEW_2
	var_83_float = var_30_float * var_30_float; // 0xe13 Mult
	var_84_bool = var_75_float <= var_83_float; // 0xe14 LE
	if(var_84_bool == 0) goto Label_3607; // 0xe15 JumpB
	var_73_bool = 0; // 0xe16 MovB
	
Label_3607:
	if(var_73_bool == 0) goto Label_3610; // 0xe17 JumpB
	var_27_bool = 1; // 0xe18 MovB
	return 2; // 0xe19 Return
	
Label_3610:
	var_27_bool = 0; // 0xe1a MovB
	return 2; // 0xe1b Return
}


