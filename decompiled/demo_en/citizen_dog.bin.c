task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xf PushV
	var_19_int = 0; var_20_object = Obj(); // 0x10 PushV
	var_20_object = var_16_bool; // 0x11 Mov
	func_3033(var_20_object); // 0x12 NEW_2
	var_18_int = var_19_int; // 0x13 Mov
	var_21_int = 0; // 0x15 PushI
	var_22_bool = var_18_int > var_21_int; // 0x16 GT
	if(var_22_bool == 0) goto Label_28; // 0x17 JumpB
	var_23_object = Obj(); // 0x18 PushV
	var_23_object = var_16_bool; // 0x19 Mov
	func_3036(var_23_object); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_3042(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	return 0; // 0x97 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	return 0; // 0x99 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0; // 0x9b Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xb4 PushV
	var_19_int = 0; var_20_object = Obj(); // 0xb5 PushV
	var_20_object = var_16_bool; // 0xb6 Mov
	func_3033(var_20_object); // 0xb7 NEW_2
	var_18_int = var_19_int; // 0xb8 Mov
	var_21_int = 0; // 0xba PushI
	var_22_bool = var_18_int > var_21_int; // 0xbb GT
	if(var_22_bool == 0) goto Label_199; // 0xbc JumpB
	var_23_int = 1; // 0xbd PushI
	var_24_bool = var_18_int > var_23_int; // 0xbe GT
	if(var_24_bool == 0) goto Label_195; // 0xbf JumpB
	func_367(var_18_int); // 0xc1 NEW_2
	
Label_195:
	var_26_object = Obj(); // 0xc3 PushV
	var_26_object = var_16_bool; // 0xc4 Mov
	func_3036(var_26_object); // 0xc5 NEW_2
	
Label_199:
	return 2; // 0xc7 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xc8 PushV
	var_19_object = Obj(); // 0xc9 PushV
	var_19_object = var_16_bool; // 0xca Mov
	func_2805(var_19_object); // 0xcb NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0xcd PushV
	var_29_object = var_16_bool; // 0xce Mov
	func_2888(var_28_int, var_29_object); // 0xcf NEW_2
	var_18_int = var_28_int; // 0xd0 Mov
	var_64_int = 0; // 0xd2 PushI
	var_65_bool = var_18_int > var_64_int; // 0xd3 GT
	if(var_65_bool == 0) goto Label_223; // 0xd4 JumpB
	var_66_int = 1; // 0xd5 PushI
	var_67_bool = var_18_int > var_66_int; // 0xd6 GT
	if(var_67_bool == 0) goto Label_219; // 0xd7 JumpB
	func_367(var_18_int); // 0xd9 NEW_2
	
Label_219:
	var_69_object = Obj(); // 0xdb PushV
	var_69_object = var_16_bool; // 0xdc Mov
	func_2898(var_69_object); // 0xdd NEW_2
	
Label_223:
	return 2; // 0xdf Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xe0 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0xe1 PushV
	var_22_object = var_16_object; // 0xe2 Mov
	var_23_object = var_17_cvector; // 0xe3 Mov
	var_24_bool = var_18_bool; // 0xe4 Mov
	func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool); // 0xe5 NEW_2
	if(var_21_bool == 0) goto Label_251; // 0xe7 JumpB
	var_83_int = 0; var_84_object = Obj(); var_85_bool = 0; // 0xe8 PushV
	var_84_object = var_16_object; // 0xe9 Mov
	var_85_bool = var_18_bool; // 0xea Mov
	func_2981(var_84_object, var_85_bool); // 0xeb NEW_2
	var_20_int = var_83_int; // 0xec Mov
	var_116_int = 0; // 0xee PushI
	var_117_bool = var_20_int > var_116_int; // 0xef GT
	if(var_117_bool == 0) goto Label_251; // 0xf0 JumpB
	var_118_int = 1; // 0xf1 PushI
	var_119_bool = var_20_int > var_118_int; // 0xf2 GT
	if(var_119_bool == 0) goto Label_247; // 0xf3 JumpB
	func_367(var_20_int); // 0xf5 NEW_2
	
Label_247:
	var_121_object = Obj(); // 0xf7 PushV
	var_121_object = var_16_object; // 0xf8 Mov
	func_2988(var_121_object); // 0xf9 NEW_2
	
Label_251:
	return 2; // 0xfb Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xfc PushV
	var_19_int = 0; var_20_object = Obj(); // 0xfd PushV
	var_20_object = var_16_bool; // 0xfe Mov
	func_3023(var_20_object); // 0xff NEW_2
	var_18_int = var_19_int; // 0x100 Mov
	var_21_int = 0; // 0x102 PushI
	var_22_bool = var_18_int > var_21_int; // 0x103 GT
	if(var_22_bool == 0) goto Label_271; // 0x104 JumpB
	var_23_int = 1; // 0x105 PushI
	var_24_bool = var_18_int > var_23_int; // 0x106 GT
	if(var_24_bool == 0) goto Label_267; // 0x107 JumpB
	func_367(var_18_int); // 0x109 NEW_2
	
Label_267:
	var_26_object = Obj(); // 0x10b PushV
	var_26_object = var_16_bool; // 0x10c Mov
	func_3026(); // 0x10d NEW_2
	
Label_271:
	return 2; // 0x10f Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x110 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x111 PushV
	var_21_object = var_16_cvector; // 0x112 Mov
	var_22_string = var_17_bool; // 0x113 Mov
	func_2719(var_20_bool, var_21_object, var_22_string); // 0x114 NEW_2
	if(var_20_bool == 0) goto Label_288; // 0x116 JumpB
	func_367(var_19_int); // 0x118 NEW_2
	var_49_object = Obj(); var_50_string = ""; // 0x11a PushV
	var_49_object = var_16_cvector; // 0x11b Mov
	var_50_string = var_17_bool; // 0x11c Mov
	func_2751(var_49_object, var_50_string); // 0x11d NEW_2
	goto Label_308; // 0x11f Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_288:
	var_132_int = 0; var_133_string = ""; var_134_object = Obj(); // 0x120 PushV
	var_133_string = var_17_bool; // 0x121 Mov
	var_134_object = var_16_cvector; // 0x122 Mov
	func_3028(var_134_object); // 0x123 NEW_2
	var_19_int = var_132_int; // 0x124 Mov
	var_135_int = 0; // 0x126 PushI
	var_136_bool = var_19_int > var_135_int; // 0x127 GT
	if(var_136_bool == 0) goto Label_308; // 0x128 JumpB
	var_137_int = 1; // 0x129 PushI
	var_138_bool = var_19_int > var_137_int; // 0x12a GT
	if(var_138_bool == 0) goto Label_303; // 0x12b JumpB
	func_367(var_19_int); // 0x12d NEW_2
	
Label_303:
	var_139_string = ""; var_140_object = Obj(); // 0x12f PushV
	var_139_string = var_17_bool; // 0x130 Mov
	var_140_object = var_16_cvector; // 0x131 Mov
	func_3031(); // 0x132 NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x136 PushV
	var_18_string = var_16_bool; // 0x137 Mov
	func_2818(var_17_bool, var_18_string); // 0x138 NEW_2
	if(var_17_bool == 0) goto Label_322; // 0x13a JumpB
	func_367(var_16_bool); // 0x13c NEW_2
	var_27_string = ""; // 0x13e PushV
	var_27_string = var_16_bool; // 0x13f Mov
	func_2834(var_27_string); // 0x140 NEW_2
	
Label_322:
	return 0; // 0x142 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x144 PushV
	var_18_object = var_16_bool; // 0x145 Mov
	func_2776(var_17_bool, var_18_object); // 0x146 NEW_2
	if(var_17_bool == 0) goto Label_337; // 0x148 JumpB
	func_367(var_16_bool); // 0x14a NEW_2
	var_30_object = Obj(); // 0x14c PushV
	var_30_object = var_16_bool; // 0x14d Mov
	func_2799(var_30_object); // 0x14e NEW_2
	goto Label_341; // 0x150 Jump
	
Label_341:
	return 0; // 0x155 Return
	
Label_337:
	var_32_object = Obj(); // 0x151 PushV
	var_32_object = var_16_bool; // 0x152 Mov
	func_392(var_16_bool, var_32_object); // 0x153 NEW_2
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_object = Obj(); // 0x157 PushV
	var_17_object = var_16_bool; // 0x158 Mov
	func_392(var_16_bool, var_17_object); // 0x159 NEW_2
	return 0; // 0x15b Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 110; // 0x15d PushI
	var_18_bool = var_16_bool != var_17_int; // 0x15e Neq
	if(var_18_bool == 0) goto Label_353; // 0x15f JumpB
	return 0; // 0x160 Return
	
Label_353:
	var_2_bool = 0; // 0x161 TMovB
	var_19_int = 110; // 0x162 PushI
	KillTimer(var_19_int); // 0x163 Func
	ResetAAS(); // 0x165 Func
	return 0; // 0x167 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_367(var_15_bool); // 0x169 NEW_2
	func_3042(); // 0x16c NEW_2
	return 0; // 0x16e Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_367(var_16_bool); // 0x181 NEW_2
	var_18_object = Obj(); // 0x183 PushV
	var_18_object = var_16_bool; // 0x184 Mov
	func_2695(); // 0x185 NEW_2
	return 0; // 0x187 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	Stop(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x20d PushV
	var_19_int = 0; var_20_object = Obj(); // 0x20e PushV
	var_20_object = var_16_bool; // 0x20f Mov
	func_3033(var_20_object); // 0x210 NEW_2
	var_18_int = var_19_int; // 0x211 Mov
	var_21_int = 0; // 0x213 PushI
	var_22_bool = var_18_int > var_21_int; // 0x214 GT
	if(var_22_bool == 0) goto Label_544; // 0x215 JumpB
	var_23_int = 1; // 0x216 PushI
	var_24_bool = var_18_int > var_23_int; // 0x217 GT
	if(var_24_bool == 0) goto Label_540; // 0x218 JumpB
	func_770(); // 0x21a NEW_2
	
Label_540:
	var_25_object = Obj(); // 0x21c PushV
	var_25_object = var_16_bool; // 0x21d Mov
	func_3036(var_25_object); // 0x21e NEW_2
	
Label_544:
	return 2; // 0x220 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x221 PushV
	var_19_object = Obj(); // 0x222 PushV
	var_19_object = var_16_bool; // 0x223 Mov
	func_2805(var_19_object); // 0x224 NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0x226 PushV
	var_29_object = var_16_bool; // 0x227 Mov
	func_2888(var_28_int, var_29_object); // 0x228 NEW_2
	var_18_int = var_28_int; // 0x229 Mov
	var_64_int = 0; // 0x22b PushI
	var_65_bool = var_18_int > var_64_int; // 0x22c GT
	if(var_65_bool == 0) goto Label_568; // 0x22d JumpB
	var_66_int = 1; // 0x22e PushI
	var_67_bool = var_18_int > var_66_int; // 0x22f GT
	if(var_67_bool == 0) goto Label_564; // 0x230 JumpB
	func_770(); // 0x232 NEW_2
	
Label_564:
	var_68_object = Obj(); // 0x234 PushV
	var_68_object = var_16_bool; // 0x235 Mov
	func_2898(var_68_object); // 0x236 NEW_2
	
Label_568:
	return 2; // 0x238 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x239 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x23a PushV
	var_22_object = var_16_object; // 0x23b Mov
	var_23_object = var_17_cvector; // 0x23c Mov
	var_24_bool = var_18_bool; // 0x23d Mov
	func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool); // 0x23e NEW_2
	if(var_21_bool == 0) goto Label_596; // 0x240 JumpB
	var_83_int = 0; var_84_object = Obj(); var_85_bool = 0; // 0x241 PushV
	var_84_object = var_16_object; // 0x242 Mov
	var_85_bool = var_18_bool; // 0x243 Mov
	func_2981(var_84_object, var_85_bool); // 0x244 NEW_2
	var_20_int = var_83_int; // 0x245 Mov
	var_116_int = 0; // 0x247 PushI
	var_117_bool = var_20_int > var_116_int; // 0x248 GT
	if(var_117_bool == 0) goto Label_596; // 0x249 JumpB
	var_118_int = 1; // 0x24a PushI
	var_119_bool = var_20_int > var_118_int; // 0x24b GT
	if(var_119_bool == 0) goto Label_592; // 0x24c JumpB
	func_770(); // 0x24e NEW_2
	
Label_592:
	var_120_object = Obj(); // 0x250 PushV
	var_120_object = var_16_object; // 0x251 Mov
	func_2988(var_120_object); // 0x252 NEW_2
	
Label_596:
	return 2; // 0x254 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x255 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x256 PushV
	var_20_object = var_16_bool; // 0x257 Mov
	func_3023(var_20_object); // 0x258 NEW_2
	var_18_int = var_19_int; // 0x259 Mov
	var_21_int = 0; // 0x25b PushI
	var_22_bool = var_18_int > var_21_int; // 0x25c GT
	if(var_22_bool == 0) goto Label_616; // 0x25d JumpB
	var_23_int = 1; // 0x25e PushI
	var_24_bool = var_18_int > var_23_int; // 0x25f GT
	if(var_24_bool == 0) goto Label_612; // 0x260 JumpB
	func_770(); // 0x262 NEW_2
	
Label_612:
	var_25_object = Obj(); // 0x264 PushV
	var_25_object = var_16_bool; // 0x265 Mov
	func_3026(); // 0x266 NEW_2
	
Label_616:
	return 2; // 0x268 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x269 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x26a PushV
	var_21_object = var_16_cvector; // 0x26b Mov
	var_22_string = var_17_bool; // 0x26c Mov
	func_2719(var_20_bool, var_21_object, var_22_string); // 0x26d NEW_2
	if(var_20_bool == 0) goto Label_633; // 0x26f JumpB
	func_770(); // 0x271 NEW_2
	var_48_object = Obj(); var_49_string = ""; // 0x273 PushV
	var_48_object = var_16_cvector; // 0x274 Mov
	var_49_string = var_17_bool; // 0x275 Mov
	func_2751(var_48_object, var_49_string); // 0x276 NEW_2
	goto Label_653; // 0x278 Jump
	
Label_653:
	return 2; // 0x28d Return
	
Label_633:
	var_131_int = 0; var_132_string = ""; var_133_object = Obj(); // 0x279 PushV
	var_132_string = var_17_bool; // 0x27a Mov
	var_133_object = var_16_cvector; // 0x27b Mov
	func_3028(var_133_object); // 0x27c NEW_2
	var_19_int = var_131_int; // 0x27d Mov
	var_134_int = 0; // 0x27f PushI
	var_135_bool = var_19_int > var_134_int; // 0x280 GT
	if(var_135_bool == 0) goto Label_653; // 0x281 JumpB
	var_136_int = 1; // 0x282 PushI
	var_137_bool = var_19_int > var_136_int; // 0x283 GT
	if(var_137_bool == 0) goto Label_648; // 0x284 JumpB
	func_770(); // 0x286 NEW_2
	
Label_648:
	var_138_string = ""; var_139_object = Obj(); // 0x288 PushV
	var_138_string = var_17_bool; // 0x289 Mov
	var_139_object = var_16_cvector; // 0x28a Mov
	func_3031(); // 0x28b NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x28f PushV
	var_18_string = var_16_bool; // 0x290 Mov
	func_2818(var_17_bool, var_18_string); // 0x291 NEW_2
	if(var_17_bool == 0) goto Label_667; // 0x293 JumpB
	func_770(); // 0x295 NEW_2
	var_26_string = ""; // 0x297 PushV
	var_26_string = var_16_bool; // 0x298 Mov
	func_2834(var_26_string); // 0x299 NEW_2
	
Label_667:
	return 0; // 0x29b Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_770(); // 0x29d NEW_2
	func_3042(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x2a4 PushV
	var_18_object = var_16_bool; // 0x2a5 Mov
	func_2776(var_17_bool, var_18_object); // 0x2a6 NEW_2
	if(var_17_bool == 0) goto Label_688; // 0x2a8 JumpB
	func_770(); // 0x2aa NEW_2
	var_29_object = Obj(); // 0x2ac PushV
	var_29_object = var_16_bool; // 0x2ad Mov
	func_2799(var_29_object); // 0x2ae NEW_2
	
Label_688:
	return 0; // 0x2b0 Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x33f PushV
	var_19_int = 0; var_20_object = Obj(); // 0x340 PushV
	var_20_object = var_16_bool; // 0x341 Mov
	func_3033(var_20_object); // 0x342 NEW_2
	var_18_int = var_19_int; // 0x343 Mov
	var_21_int = 0; // 0x345 PushI
	var_22_bool = var_18_int > var_21_int; // 0x346 GT
	if(var_22_bool == 0) goto Label_850; // 0x347 JumpB
	var_23_int = 1; // 0x348 PushI
	var_24_bool = var_18_int > var_23_int; // 0x349 GT
	if(var_24_bool == 0) goto Label_846; // 0x34a JumpB
	func_974(); // 0x34c NEW_2
	
Label_846:
	var_27_object = Obj(); // 0x34e PushV
	var_27_object = var_16_bool; // 0x34f Mov
	func_3036(var_27_object); // 0x350 NEW_2
	
Label_850:
	return 2; // 0x352 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x353 PushV
	var_19_object = Obj(); // 0x354 PushV
	var_19_object = var_16_bool; // 0x355 Mov
	func_2805(var_19_object); // 0x356 NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0x358 PushV
	var_29_object = var_16_bool; // 0x359 Mov
	func_2888(var_28_int, var_29_object); // 0x35a NEW_2
	var_18_int = var_28_int; // 0x35b Mov
	var_64_int = 0; // 0x35d PushI
	var_65_bool = var_18_int > var_64_int; // 0x35e GT
	if(var_65_bool == 0) goto Label_874; // 0x35f JumpB
	var_66_int = 1; // 0x360 PushI
	var_67_bool = var_18_int > var_66_int; // 0x361 GT
	if(var_67_bool == 0) goto Label_870; // 0x362 JumpB
	func_974(); // 0x364 NEW_2
	
Label_870:
	var_70_object = Obj(); // 0x366 PushV
	var_70_object = var_16_bool; // 0x367 Mov
	func_2898(var_70_object); // 0x368 NEW_2
	
Label_874:
	return 2; // 0x36a Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x36b PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x36c PushV
	var_22_object = var_16_object; // 0x36d Mov
	var_23_object = var_17_cvector; // 0x36e Mov
	var_24_bool = var_18_bool; // 0x36f Mov
	func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool); // 0x370 NEW_2
	if(var_21_bool == 0) goto Label_902; // 0x372 JumpB
	var_83_int = 0; var_84_object = Obj(); var_85_bool = 0; // 0x373 PushV
	var_84_object = var_16_object; // 0x374 Mov
	var_85_bool = var_18_bool; // 0x375 Mov
	func_2981(var_84_object, var_85_bool); // 0x376 NEW_2
	var_20_int = var_83_int; // 0x377 Mov
	var_116_int = 0; // 0x379 PushI
	var_117_bool = var_20_int > var_116_int; // 0x37a GT
	if(var_117_bool == 0) goto Label_902; // 0x37b JumpB
	var_118_int = 1; // 0x37c PushI
	var_119_bool = var_20_int > var_118_int; // 0x37d GT
	if(var_119_bool == 0) goto Label_898; // 0x37e JumpB
	func_974(); // 0x380 NEW_2
	
Label_898:
	var_122_object = Obj(); // 0x382 PushV
	var_122_object = var_16_object; // 0x383 Mov
	func_2988(var_122_object); // 0x384 NEW_2
	
Label_902:
	return 2; // 0x386 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x387 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x388 PushV
	var_20_object = var_16_bool; // 0x389 Mov
	func_3023(var_20_object); // 0x38a NEW_2
	var_18_int = var_19_int; // 0x38b Mov
	var_21_int = 0; // 0x38d PushI
	var_22_bool = var_18_int > var_21_int; // 0x38e GT
	if(var_22_bool == 0) goto Label_922; // 0x38f JumpB
	var_23_int = 1; // 0x390 PushI
	var_24_bool = var_18_int > var_23_int; // 0x391 GT
	if(var_24_bool == 0) goto Label_918; // 0x392 JumpB
	func_974(); // 0x394 NEW_2
	
Label_918:
	var_27_object = Obj(); // 0x396 PushV
	var_27_object = var_16_bool; // 0x397 Mov
	func_3026(); // 0x398 NEW_2
	
Label_922:
	return 2; // 0x39a Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x39b PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x39c PushV
	var_21_object = var_16_cvector; // 0x39d Mov
	var_22_string = var_17_bool; // 0x39e Mov
	func_2719(var_20_bool, var_21_object, var_22_string); // 0x39f NEW_2
	if(var_20_bool == 0) goto Label_939; // 0x3a1 JumpB
	func_974(); // 0x3a3 NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x3a5 PushV
	var_50_object = var_16_cvector; // 0x3a6 Mov
	var_51_string = var_17_bool; // 0x3a7 Mov
	func_2751(var_50_object, var_51_string); // 0x3a8 NEW_2
	goto Label_959; // 0x3aa Jump
	
Label_959:
	return 2; // 0x3bf Return
	
Label_939:
	var_133_int = 0; var_134_string = ""; var_135_object = Obj(); // 0x3ab PushV
	var_134_string = var_17_bool; // 0x3ac Mov
	var_135_object = var_16_cvector; // 0x3ad Mov
	func_3028(var_135_object); // 0x3ae NEW_2
	var_19_int = var_133_int; // 0x3af Mov
	var_136_int = 0; // 0x3b1 PushI
	var_137_bool = var_19_int > var_136_int; // 0x3b2 GT
	if(var_137_bool == 0) goto Label_959; // 0x3b3 JumpB
	var_138_int = 1; // 0x3b4 PushI
	var_139_bool = var_19_int > var_138_int; // 0x3b5 GT
	if(var_139_bool == 0) goto Label_954; // 0x3b6 JumpB
	func_974(); // 0x3b8 NEW_2
	
Label_954:
	var_140_string = ""; var_141_object = Obj(); // 0x3ba PushV
	var_140_string = var_17_bool; // 0x3bb Mov
	var_141_object = var_16_cvector; // 0x3bc Mov
	func_3031(); // 0x3bd NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x3c1 PushV
	var_18_string = var_16_bool; // 0x3c2 Mov
	func_2818(var_17_bool, var_18_string); // 0x3c3 NEW_2
	if(var_17_bool == 0) goto Label_973; // 0x3c5 JumpB
	func_974(); // 0x3c7 NEW_2
	var_28_string = ""; // 0x3c9 PushV
	var_28_string = var_16_bool; // 0x3ca Mov
	func_2834(var_28_string); // 0x3cb NEW_2
	
Label_973:
	return 0; // 0x3cd Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_974(); // 0x3db NEW_2
	var_19_object = Obj(); // 0x3dd PushV
	var_19_object = var_16_bool; // 0x3de Mov
	func_2695(); // 0x3df NEW_2
	return 0; // 0x3e1 Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x3e2 PushV
	var_21_int = 111; // 0x3e3 PushI
	var_22_bool = var_16_bool != var_21_int; // 0x3e4 Neq
	if(var_22_bool == 0) goto Label_999; // 0x3e5 JumpB
	return 4; // 0x3e6 Return
	
Label_999:
	var_23_bool = 0; var_24_object = Obj(); // 0x3e7 PushV
	var_24_object = var_0_bool; // 0x3e8 MovT
	func_2348(var_23_bool, var_24_object); // 0x3e9 NEW_2
	var_57_bool = var_23_bool == 0; // 0x3eb Not
	if(var_57_bool == 0) goto Label_1009; // 0x3ec JumpB
	func_974(); // 0x3ee NEW_2
	return 4; // 0x3f0 Return
	
Label_1009:
	GetDirection(var_19_cvector); // 0x3f1 Func
	var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0x3f3 PushV
	var_61_object = var_0_bool; // 0x3f4 MovT
	func_2202(var_61_object); // 0x3f5 NEW_2
	var_20_cvector = var_60_cvector; // 0x3f6 Mov
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x3f8 PushV
	var_67_cvector = var_19_cvector; // 0x3f9 Mov
	var_68_cvector = var_20_cvector; // 0x3fa Mov
	func_2627(var_66_float, var_67_cvector, var_68_cvector); // 0x3fb NEW_2
	var_90_float = 0.5; // 0x3fd PushF
	var_91_bool = var_66_float < var_90_float; // 0x3fe LT
	if(var_91_bool == 0) goto Label_1028; // 0x3ff JumpB
	var_92_object = Obj(); // 0x400 PushV
	var_92_object = var_0_bool; // 0x401 MovT
	func_2498(); // 0x402 NEW_2
	
Label_1028:
	return 4; // 0x404 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_974(); // 0x406 NEW_2
	func_3042(); // 0x409 NEW_2
	return 0; // 0x40b Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x40d PushV
	var_18_object = var_16_bool; // 0x40e Mov
	func_2776(var_17_bool, var_18_object); // 0x40f NEW_2
	if(var_17_bool == 0) goto Label_1049; // 0x411 JumpB
	func_974(); // 0x413 NEW_2
	var_31_object = Obj(); // 0x415 PushV
	var_31_object = var_16_bool; // 0x416 Mov
	func_2799(var_31_object); // 0x417 NEW_2
	
Label_1049:
	return 0; // 0x419 Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1796(var_15_bool); // 0x6bf NEW_2
	func_3042(); // 0x6c2 NEW_2
	return 0; // 0x6c4 Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 1; // 0x6f7 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x6f8 Eq
	if(var_18_bool == 0) goto Label_1791; // 0x6f9 JumpB
	var_19_object = Obj(); // 0x6fa PushV
	var_19_object = var_1_bool; // 0x6fb MovT
	func_2654(var_19_object); // 0x6fc NEW_2
	goto Label_1795; // 0x6fe Jump
	
Label_1795:
	return 0; // 0x703 Return
	
Label_1791:
	var_24_int = 0; // 0x6ff PushV
	var_24_int = var_16_bool; // 0x700 Mov
	func_1940(var_15_cvector, var_16_bool, var_24_int); // 0x701 NEW_2
}


task_5_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; // 0x712 PushV
	var_17_bool = 0; // 0x713 MovB
	var_18_bool = var_1_bool == var_16_bool; // 0x714 Eq
	if(var_18_bool == 0) goto Label_1817; // 0x715 JumpB
	var_19_bool = var_2_bool == 0; // 0x716 Not
	if(var_19_bool == 0) goto Label_1817; // 0x717 JumpB
	var_17_bool = 1; // 0x718 MovB
	
Label_1817:
	if(var_17_bool == 0) goto Label_1823; // 0x719 JumpB
	var_2_bool = 1; // 0x71a TMovB
	var_20_object = Obj(); // 0x71b PushV
	var_20_object = var_16_bool; // 0x71c Mov
	func_2514(var_20_object); // 0x71d NEW_2
	
Label_1823:
	return 0; // 0x71f Return
}


task_5_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; // 0x721 PushV
	var_17_bool = 0; // 0x722 MovB
	var_18_bool = var_1_bool == var_16_bool; // 0x723 Eq
	if(var_18_bool == 0) goto Label_1832; // 0x724 JumpB
	var_19_bool = var_2_bool; // 0x725 PushT
	if(var_19_bool == 0) goto Label_1832; // 0x726 JumpB
	var_17_bool = 1; // 0x727 MovB
	
Label_1832:
	if(var_17_bool == 0) goto Label_1837; // 0x728 JumpB
	var_2_bool = 0; // 0x729 TMovB
	var_20_string = "head"; // 0x72a PushS
	UnlookAsync(var_20_string); // 0x72b Func
	
Label_1837:
	return 0; // 0x72d Return
}


task_5_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x7a7 Func
	return 0; // 0x7a9 Return
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	func_1796(var_16_bool); // 0x7b3 NEW_2
	var_21_object = Obj(); // 0x7b5 PushV
	var_21_object = var_16_bool; // 0x7b6 Mov
	func_2695(); // 0x7b7 NEW_2
	return 0; // 0x7b9 Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_2151(var_15_bool); // 0x7c6 NEW_2
	func_3042(); // 0x7c9 NEW_2
	return 0; // 0x7cb Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x833 PushV
	var_25_int = 120; // 0x834 PushI
	var_26_bool = var_16_int != var_25_int; // 0x835 Neq
	if(var_26_bool == 0) goto Label_2104; // 0x836 JumpB
	return 8; // 0x837 Return
	
Label_2104:
	var_27_bool = var_0_bool == 0; // 0x838 NullEq
	if(var_27_bool == 0) goto Label_2113; // 0x839 JumpB
	Stop(); // 0x83a Func
	var_28_int = 1; // 0x83c PushI
	KillTimer(var_28_int); // 0x83d Func
	var_2_bool = 1; // 0x83f TMovB
	goto Label_2150; // 0x840 Jump
	
Label_2150:
	return 8; // 0x866 Return
	
Label_2113:
	GetDirection(var_21_cvector); // 0x841 Func
	var_29_float = 7000.0; // 0x843 PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x844 Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x846 PushV
	var_31_float = 1.74533; // 0x847 MovF
	func_1996(var_30_cvector, var_31_float); // 0x848 NEW_2
	var_23_cvector = var_30_cvector; // 0x849 Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x84b Or2
	var_60_bool = 0; // 0x84c PushV
	var_60_bool = 0; // 0x84d MovB
	var_61_float = 2500.0; // 0x84e PushF
	var_62_bool = var_24_float >= var_61_float; // 0x84f GE
	if(var_62_bool == 0) goto Label_2143; // 0x850 JumpB
	var_63_bool = 0; // 0x851 PushV
	var_63_bool = 1; // 0x852 MovB
	var_64_float = var_22_float * var_22_float; // 0x853 Mult
	var_65_float = 2.25; // 0x854 PushF
	var_66_float = var_64_float * var_65_float; // 0x855 Mult
	var_67_bool = var_24_float >= var_66_float; // 0x856 GE
	if(var_67_bool == 0) goto Label_2141; // 0x857 JumpB
	var_68_bool = 0; // 0x858 PushV
	func_2167(var_63_bool, var_68_bool); // 0x859 NEW_2
	if(var_68_bool == 0) goto Label_2141; // 0x85b JumpB
	var_63_bool = 0; // 0x85c MovB
	
Label_2141:
	if(var_63_bool == 0) goto Label_2143; // 0x85d JumpB
	var_60_bool = 1; // 0x85e MovB
	
Label_2143:
	if(var_60_bool == 0) goto Label_2150; // 0x85f JumpB
	Stop(); // 0x860 Func
	var_88_cvector = CVector(0,0,0); // 0x862 PushV
	func_2197(var_88_cvector); // 0x863 NEW_2
	var_1_bool = var_88_cvector + var_23_cvector; // 0x865 Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	func_2151(var_16_object); // 0x870 NEW_2
	var_18_object = Obj(); // 0x872 PushV
	var_18_object = var_16_object; // 0x873 Mov
	func_2695(); // 0x874 NEW_2
	return 0; // 0x876 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0xa7a PushV
	var_20_string = "health"; // 0xa7b PushS
	var_21_bool = var_17_string == var_20_string; // 0xa7c Eq
	if(var_21_bool == 0) goto Label_2694; // 0xa7d JumpB
	var_22_string = "health"; // 0xa7e PushS
	GetProperty(var_22_string, var_19_float); // 0xa7f Func
	var_23_int = 0; // 0xa81 PushI
	var_24_bool = var_19_float <= var_23_int; // 0xa82 LE
	if(var_24_bool == 0) goto Label_2694; // 0xa83 JumpB
	SignalDeath(var_16_object); // 0xa84 Func
	
Label_2694:
	return 2; // 0xa86 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0xa88 PushV
	var_17_object = var_16_object; // 0xa89 Mov
	func_2674(var_17_object); // 0xa8a NEW_2
	return 0; // 0xa8c Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0xa8e PushV
	var_20_object = var_16_object; // 0xa8f Mov
	var_21_int = var_17_int; // 0xa90 Mov
	var_22_float = var_18_float; // 0xa91 Mov
	func_2416(var_20_object, var_21_int, var_22_float); // 0xa92 NEW_2
	return 0; // 0xa94 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0xa96 PushV
	var_22_object = var_16_object; // 0xa97 Mov
	var_23_int = var_17_int; // 0xa98 Mov
	var_24_float = var_18_float; // 0xa99 Mov
	var_25_cvector = var_20_cvector; // 0xa9a Mov
	var_26_cvector = var_21_cvector; // 0xa9b Mov
	func_2484(var_24_float, var_25_cvector, var_26_cvector); // 0xa9c NEW_2
	return 0; // 0xa9e Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = 1; // 0x9c PushB
	SensePlayerOnly(var_16_bool); // 0x9d Func
	func_3081(); // 0xa0 NEW_2
	func_171(); // 0xa3 NEW_2
	
Label_165:
	var_2_bool = 0; // 0xa5 TMovB
	func_432(var_14_cvector, var_15_bool); // 0xa7 NEW_2
	goto Label_165; // 0xa9 Jump
}


func_0(var_18_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_18_object; // 0x3 Mov
	func_33(var_19_object); // 0x4 NEW_2
	var_99_object = Obj(); // 0x6 PushV
	var_99_object = var_18_object; // 0x7 Mov
	func_3099(var_99_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_3074()
{
	return 0; // 0xc03 Return
}


func_3076(var_24_bool)
{
	var_24_bool = 0; // 0xc05 MovB
	return 0; // 0xc06 Return
}


func_517(var_47_bool)
{
	var_47_bool = 0; // 0x205 MovB
	return 0; // 0x206 Return
}


func_2566(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0xa06 PushV
	self(var_106_object); // 0xa07 Func
	var_104_object = var_106_object; // 0xa09 Mov
	return 2; // 0xa0a Return
}


func_519(var_41_object, var_42_cvector)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x207 PushV
	FindShiftedPathTo(var_44_object, var_42_cvector); // 0x208 Func
	var_41_object = var_44_object; // 0x20a Mov
	return 2; // 0x20b Return
}


func_3079()
{
	return 0; // 0xc08 Return
}


func_3081()
{
	var_17_bool = GlobalVars[0]; // 0xc09 PushGE
	var_17_bool = 0; // 0xc0a MovB
	GlobalVars[0] = var_17_bool; // 0xc0b PopGE
	return 0; // 0xc0c Return
}


func_2572(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0xa0c PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0xa0d Or
	var_57_float = sqrt(var_58_int); // 0xa0e Sqrt2
	var_59_float = 0.0; // 0xa0f PushF
	var_60_bool = var_57_float < var_59_float; // 0xa10 LT
	if(var_60_bool == 0) goto Label_2580; // 0xa11 JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0xa12 MovV
	return 2; // 0xa13 Return
	
Label_2580:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0xa14 Div2
	return 2; // 0xa15 Return
}


func_3085()
{
	return 0; // 0xc0e Return
}


func_3087(var_61_bool)
{
	var_61_bool = 0; // 0xc0f MovB
	return 0; // 0xc10 Return
}


func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool)
{
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_float = 0; var_29_bool = 0; // 0xc12 PushV
	var_26_object = var_22_object; // 0xc13 Mov
	var_27_object = var_23_object; // 0xc14 Mov
	var_28_float = 500.0; // 0xc15 MovF
	var_29_bool = var_24_bool; // 0xc16 Mov
	func_2994(var_25_bool, var_26_object, var_27_object, var_28_float, var_29_bool); // 0xc17 NEW_2
	var_21_bool = var_25_bool; // 0xc18 Mov
	return 0; // 0xc1a Return
}


func_2582(var_509_float, var_510_float, var_511_float)
{
	var_514_bool = var_510_float < var_511_float; // 0xa17 LT
	if(var_514_bool == 0) goto Label_2587; // 0xa18 JumpB
	var_509_float = var_510_float; // 0xa19 Mov
	goto Label_2588; // 0xa1a Jump
	
Label_2588:
	return 0; // 0xa1c Return
	
Label_2587:
	var_509_float = var_511_float; // 0xa1b Mov
}


func_1050(var_124_object)
{
	var_131_object = Obj(); var_132_bool = 0; var_133_float = 0; // 0x41b PushV
	var_131_object = var_124_object; // 0x41c Mov
	var_132_bool = 1; // 0x41d MovB
	var_133_float = 180.0; // 0x41e MovF
	func_1064(var_127_int, var_128_bool, var_129_float, var_130_int, var_124_object, var_131_object, var_132_bool, var_133_float); // 0x41f NEW_2
	return 0; // 0x421 Return
}


func_3099(var_99_object)
{
	var_100_bool = 0; var_101_object = Obj(); // 0xc1c PushV
	var_101_object = var_99_object; // 0xc1d Mov
	func_2217(var_100_bool, var_101_object); // 0xc1e NEW_2
	if(var_100_bool == 0) goto Label_3112; // 0xc20 JumpB
	var_104_object = Obj(); // 0xc21 PushV
	func_2566(var_104_object); // 0xc22 NEW_2
	var_107_float = 0.0; // 0xc24 PushF
	var_108_bool = 1; // 0xc25 PushB
	ReportReputationChange(var_99_object, var_104_object, var_107_float, var_108_bool); // 0xc26 Func
	
Label_3112:
	var_109_bool = GlobalVars[0]; // 0xc28 PushGE
	var_109_bool = 1; // 0xc29 MovB
	GlobalVars[0] = var_109_bool; // 0xc2a PopGE
	var_110_int = 50; // 0xc2b PushI
	var_111_int = 40; // 0xc2c PushI
	SetRTEnvelope(var_110_int, var_111_int); // 0xc2d Func
	return 0; // 0xc2f Return
}


func_2589(var_519_float, var_520_float, var_521_float, var_522_float)
{
	var_523_bool = var_520_float < var_521_float; // 0xa1e LT
	if(var_523_bool == 0) goto Label_2594; // 0xa1f JumpB
	var_519_float = var_521_float; // 0xa20 Mov
	return 0; // 0xa21 Return
	
Label_2594:
	var_524_bool = var_520_float > var_522_float; // 0xa22 GT
	if(var_524_bool == 0) goto Label_2598; // 0xa23 JumpB
	var_519_float = var_522_float; // 0xa24 Mov
	return 0; // 0xa25 Return
	
Label_2598:
	var_519_float = var_520_float; // 0xa26 Mov
	return 0; // 0xa27 Return
}


func_33(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); // 0x21 PushV
	var_40_bool = var_19_object == 0; // 0x22 NullEq
	if(var_40_bool == 0) goto Label_41; // 0x23 JumpB
	var_41_string = ""; // 0x24 PushV
	var_41_string = "fdie"; // 0x25 MovS
	func_124(var_41_string); // 0x26 NEW_2
	goto Label_123; // 0x28 Jump
	
Label_123:
	return 20; // 0x7b Return
	
Label_41:
	GetPosition(var_30_cvector); // 0x29 ObjFunc
	GetPosition(var_31_cvector); // 0x2b Func
	GetDirection(var_32_cvector); // 0x2d Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x2f Sub2
	var_73_float = GetByIndex(var_33_cvector, 0); // 0x30 PushE
	var_74_float = GetByIndex(var_32_cvector, 0); // 0x31 PushE
	var_75_float = var_73_float * var_74_float; // 0x32 Mult
	var_76_float = GetByIndex(var_33_cvector, 2); // 0x33 PushE
	var_77_float = GetByIndex(var_32_cvector, 2); // 0x34 PushE
	var_78_float = var_76_float * var_77_float; // 0x35 Mult
	var_79_int = var_75_float + var_78_float; // 0x36 Add
	var_80_int = 0; // 0x37 PushI
	var_81_bool = var_79_int >= var_80_int; // 0x38 GE
	if(var_81_bool == 0) goto Label_60; // 0x39 JumpB
	var_34_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_35_object = var_19_object; // 0x45 Mov
	var_82_string = "GetScriptProperty"; // 0x46 PushS
	var_83_int = 2; // 0x47 PushI
	var_84_bool = IsFuncExist(var_19_object, var_82_string, var_83_int); // 0x48 FuncExist
	if(var_84_bool == 0) goto Label_85; // 0x49 JumpB
	var_85_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_36_bool, var_85_string); // 0x4b ObjFunc
	var_86_bool = var_36_bool; // 0x4d Push
	if(var_86_bool == 0) goto Label_85; // 0x4e JumpB
	var_87_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_35_object, var_87_string); // 0x50 ObjFunc
	var_88_bool = var_35_object == 0; // 0x52 NullEq
	if(var_88_bool == 0) goto Label_85; // 0x53 JumpB
	var_35_object = var_19_object; // 0x54 Mov
	
Label_85:
	var_89_string = "@GetEyesHeight"; // 0x55 PushS
	var_90_int = 1; // 0x56 PushI
	var_91_bool = IsFuncExist(var_35_object, var_89_string, var_90_int); // 0x57 FuncExist
	if(var_91_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_38_float); // 0x59 ObjFunc
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_92_float = GetByIndex(var_39_cvector, 1); // 0x5c PushE
	var_92_float = var_38_float; // 0x5d Mov
	SetByIndex(var_39_cvector, 1) = var_92_float; // 0x5e PopE
	var_93_string = "head"; // 0x5f PushS
	LookAsync(var_19_object, var_93_string, var_39_cvector); // 0x60 Func
	var_37_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_94_string = ""; // 0x65 PushV
	var_94_string = var_34_string; // 0x66 Mov
	func_2525(var_94_string); // 0x67 NEW_2
	var_95_string = "all"; // 0x69 PushS
	PlayAnimation(var_95_string, var_34_string); // 0x6a Func
	WaitForAnimEnd(); // 0x6c Func
	var_96_bool = var_37_bool; // 0x6e Push
	if(var_96_bool == 0) goto Label_117; // 0x6f JumpB
	StopAsync(); // 0x70 Func
	var_97_string = "head"; // 0x72 PushS
	UnlookAsync(var_97_string); // 0x73 Func
	
Label_117:
	var_98_string = "all"; // 0x75 PushS
	LockAnimationEnd(var_98_string, var_34_string); // 0x76 Func
	RemoveEnvelope(); // 0x78 Func
	var_35_object = 0; // 0x7a SetNull
	
Label_100:
	var_37_bool = 0; // 0x64 MovB
	
Label_60:
	var_34_string = "bdie"; // 0x3c MovS
}


func_1058(var_468_float)
{
	var_468_float = 0.2; // 0x423 MovF
	return 0; // 0x424 Return
}


func_1061(var_475_int)
{
	var_475_int = 0; // 0x426 MovI
	return 0; // 0x427 Return
}


func_1574(var_0_bool, var_374_bool)
{
	var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_float = 0; var_379_float = 0; var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_float = 0; var_384_float = 0; // 0x626 PushV
	var_385_bool = 0; var_386_object = Obj(); // 0x627 PushV
	var_386_object = var_0_bool; // 0x628 MovT
	func_2348(var_385_bool, var_386_object); // 0x629 NEW_2
	var_387_bool = var_385_bool == 0; // 0x62b Not
	if(var_387_bool == 0) goto Label_1583; // 0x62c JumpB
	var_374_bool = 0; // 0x62d MovB
	return 10; // 0x62e Return
	
Label_1583:
	var_388_bool = 0; // 0x62f PushV
	func_1663(var_384_float, var_388_bool); // 0x630 NEW_2
	if(var_388_bool == 0) goto Label_1600; // 0x632 JumpB
	GetPFPosition(var_380_cvector); // 0x633 TObjFunc
	GetPFPosition(var_381_cvector); // 0x635 Func
	var_382_cvector = var_380_cvector - var_381_cvector; // 0x637 Sub2
	var_383_float = var_382_cvector | var_382_cvector; // 0x638 Or2
	GetAttackDistance(var_384_float); // 0x639 TObjFunc
	var_389_int = 50; // 0x63b PushI
	var_384_float = var_384_float + var_389_int; // 0x63c Add2
	var_390_float = var_384_float * var_384_float; // 0x63d Mult
	var_374_bool = var_383_float <= var_390_float; // 0x63e LE2
	return 10; // 0x63f Return
	
Label_1600:
	var_374_bool = 0; // 0x640 MovB
	return 10; // 0x641 Return
}


func_1064(var_0_bool, var_3_object, var_5_object, var_131_object, var_132_bool, var_133_float, var_208_bool, var_300_bool)
{
	var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_bool = 0; var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_bool = 0; var_144_float = 0; var_145_float = 0; var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_bool = 0; var_149_bool = 0; var_150_float = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_bool = 0; var_155_float = 0; // 0x428 PushV
	func_1293(var_153_cvector, var_154_bool, var_155_float); // 0x42a NEW_2
	var_5_object = 0; // 0x42c TMovI
	var_178_string = "@GetAttackDistance"; // 0x42d PushS
	var_179_int = 1; // 0x42e PushI
	var_180_bool = IsFuncExist(var_131_object, var_178_string, var_179_int); // 0x42f FuncExist
	if(var_180_bool == 0) goto Label_1078; // 0x430 JumpB
	GetAttackDistance(var_145_float); // 0x431 ObjFunc
	var_181_int = 50; // 0x433 PushI
	var_145_float = var_145_float + var_181_int; // 0x434 Add2
	goto Label_1079; // 0x435 Jump
	
Label_1079:
	var_182_int = 150; // 0x437 PushI
	var_183_bool = var_145_float >= var_182_int; // 0x438 GE
	if(var_183_bool == 0) goto Label_1083; // 0x439 JumpB
	var_145_float = 150; // 0x43a MovI
	
Label_1083:
	var_3_object = 0; // 0x43b TMovB
	var_0_bool = var_131_object; // 0x43c TMov
	IsPlayerActor(var_0_bool, var_148_bool); // 0x43d Func
	var_184_bool = var_148_bool; // 0x43f Push
	if(var_184_bool == 0) goto Label_1097; // 0x440 JumpB
	var_185_string = "attack"; // 0x441 PushS
	PlayGlobalMusic(var_185_string); // 0x442 Func
	var_186_object = Obj(); // 0x444 PushV
	func_2566(var_186_object); // 0x445 NEW_2
	SendPlayerEnemy(var_131_object, var_186_object); // 0x447 Func
	
Label_1097:
	var_189_bool = var_132_bool; // 0x449 Push
	if(var_189_bool == 0) goto Label_1101; // 0x44a JumpB
	var_149_bool = 0; // 0x44b MovB
	goto Label_1102; // 0x44c Jump
	
Label_1102:
	var_190_float = 400.0; // 0x44e PushF
	var_150_float = var_190_float + var_145_float; // 0x44f Add2
	
Label_1104:
	var_191_bool = 0; // 0x450 PushV
	var_191_bool = 0; // 0x451 MovB
	var_192_bool = 0; var_193_object = Obj(); // 0x452 PushV
	var_193_object = var_0_bool; // 0x453 MovT
	func_2348(var_192_bool, var_193_object); // 0x454 NEW_2
	if(var_192_bool == 0) goto Label_1114; // 0x456 JumpB
	var_194_bool = var_3_object == 0; // 0x457 Not
	if(var_194_bool == 0) goto Label_1114; // 0x458 JumpB
	var_191_bool = 1; // 0x459 MovB
	
Label_1114:
	if(var_191_bool == 0) goto Label_1276; // 0x45a JumpB
	func_1706(var_155_float); // 0x45c NEW_2
	GetPFPosition(var_146_cvector); // 0x45e TObjFunc
	GetPFPosition(var_147_cvector); // 0x460 Func
	var_151_cvector = var_146_cvector - var_147_cvector; // 0x462 Sub2
	var_152_float = var_151_cvector | var_151_cvector; // 0x463 Or2
	var_200_float = var_150_float * var_150_float; // 0x464 Mult
	var_201_bool = var_152_float >= var_200_float; // 0x465 GE
	if(var_201_bool == 0) goto Label_1142; // 0x466 JumpB
	var_202_bool = 0; var_203_object = Obj(); var_204_float = 0; var_205_float = 0; var_206_bool = 0; var_207_bool = 0; // 0x467 PushV
	var_203_object = var_0_bool; // 0x468 MovT
	var_204_float = var_145_float; // 0x469 Mov
	var_205_float = 3000.0; // 0x46a MovF
	var_206_bool = 1; // 0x46b MovB
	var_207_bool = 0; // 0x46c MovB
	TaskCall(5); // 0x46d TaskCall
	func_1733(var_210_bool, var_202_bool, var_203_object, var_204_float, var_205_float, var_206_bool, var_207_bool); // 0x46e NEW_2
	TaskReturn(); // 0x46f TaskReturn
	var_285_bool = var_208_bool == 0; // 0x471 Not
	if(var_285_bool == 0) goto Label_1140; // 0x472 JumpB
	goto Label_1276; // 0x473 Jump
	
Label_1276:
	WaitForAnimEnd(); // 0x4fc Func
	var_286_object = var_3_object; // 0x4fe PushT
	if(var_286_object == 0) goto Label_1281; // 0x4ff JumpB
	return 22; // 0x500 Return
	
Label_1281:
	var_287_string = "all"; // 0x501 PushS
	var_288_string = "attack_off"; // 0x502 PushS
	PlayAnimation(var_287_string, var_288_string); // 0x503 Func
	WaitForAnimEnd(); // 0x505 Func
	var_289_bool = var_148_bool; // 0x507 Push
	if(var_289_bool == 0) goto Label_1292; // 0x508 JumpB
	var_290_float = 2.0; // 0x509 PushF
	Sleep(var_290_float); // 0x50a Func
	
Label_1292:
	return 22; // 0x50c Return
	
Label_1140:
	var_149_bool = 0; // 0x474 MovB
	goto Label_1275; // 0x475 Jump
	
Label_1275:
	goto Label_1104; // 0x4fb Jump
	
Label_1142:
	var_291_float = var_133_float * var_133_float; // 0x476 Mult
	var_292_bool = var_152_float >= var_291_float; // 0x477 GE
	if(var_292_bool == 0) goto Label_1267; // 0x478 JumpB
	GetPFPosition(var_153_cvector); // 0x479 TObjFunc
	CanReachByPF(var_154_bool, var_153_cvector); // 0x47b Func
	var_293_bool = var_154_bool == 0; // 0x47d Not
	if(var_293_bool == 0) goto Label_1166; // 0x47e JumpB
	var_294_bool = 0; var_295_object = Obj(); var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_bool = 0; // 0x47f PushV
	var_295_object = var_0_bool; // 0x480 MovT
	var_296_float = var_145_float; // 0x481 Mov
	var_297_float = 3000.0; // 0x482 MovF
	var_298_bool = 1; // 0x483 MovB
	var_299_bool = 0; // 0x484 MovB
	TaskCall(5); // 0x485 TaskCall
	func_1733(var_302_bool, var_294_bool, var_295_object, var_296_float, var_297_float, var_298_bool, var_299_bool); // 0x486 NEW_2
	TaskReturn(); // 0x487 TaskReturn
	var_303_bool = var_300_bool == 0; // 0x489 Not
	if(var_303_bool == 0) goto Label_1164; // 0x48a JumpB
	goto Label_1276; // 0x48b Jump
	
Label_1164:
	var_149_bool = 0; // 0x48c MovB
	goto Label_1104; // 0x48d Jump
	
Label_1166:
	var_304_bool = var_149_bool == 0; // 0x48e Not
	if(var_304_bool == 0) goto Label_1191; // 0x48f JumpB
	var_305_object = Obj(); // 0x490 PushV
	var_305_object = var_0_bool; // 0x491 MovT
	func_2498(); // 0x492 NEW_2
	var_314_string = "all"; // 0x494 PushS
	var_315_string = "attack_on"; // 0x495 PushS
	PlayAnimation(var_314_string, var_315_string); // 0x496 Func
	WaitForAnimEnd(); // 0x498 Func
	func_1706(var_155_float); // 0x49b NEW_2
	StopAsync(); // 0x49d Func
	var_149_bool = 1; // 0x49f MovB
	var_316_bool = 0; var_317_object = Obj(); // 0x4a0 PushV
	var_317_object = var_0_bool; // 0x4a1 MovT
	func_2348(var_316_bool, var_317_object); // 0x4a2 NEW_2
	var_318_bool = var_316_bool == 0; // 0x4a4 Not
	if(var_318_bool == 0) goto Label_1191; // 0x4a5 JumpB
	goto Label_1276; // 0x4a6 Jump
	
Label_1191:
	rand(var_155_float); // 0x4a7 Func
	var_319_bool = 0; // 0x4a9 PushV
	var_319_bool = 1; // 0x4aa MovB
	var_320_float = 0.25; // 0x4ab PushF
	var_321_bool = var_155_float < var_320_float; // 0x4ac LT
	if(var_321_bool == 0) goto Label_1203; // 0x4ad JumpB
	var_322_bool = 0; // 0x4ae PushV
	func_1663(var_319_bool, var_322_bool); // 0x4af NEW_2
	if(var_322_bool == 0) goto Label_1203; // 0x4b1 JumpB
	var_319_bool = 0; // 0x4b2 MovB
	
Label_1203:
	if(var_319_bool == 0) goto Label_1220; // 0x4b3 JumpB
	Face(var_0_bool); // 0x4b4 Func
	func_1713(); // 0x4b7 NEW_2
	var_357_string = "all"; // 0x4b9 PushS
	var_358_string = "attack_stay"; // 0x4ba PushS
	PlayAnimation(var_357_string, var_358_string); // 0x4bb Func
	var_359_bool = 0; var_360_float = 0; // 0x4bd PushV
	var_360_float = var_133_float; // 0x4be Mov
	func_1531(var_155_float, var_359_bool, var_360_float); // 0x4bf NEW_2
	StopAsync(); // 0x4c1 Func
	goto Label_1266; // 0x4c3 Jump
	
Label_1266:
	goto Label_1275; // 0x4f2 Jump
	
Label_1220:
	Face(var_0_bool); // 0x4c4 Func
	var_574_string = "all"; // 0x4c6 PushS
	var_575_string = "fjump"; // 0x4c7 PushS
	PlayAnimation(var_574_string, var_575_string); // 0x4c8 Func
	WaitForAnimEnd(); // 0x4ca Func
	func_1706(var_155_float); // 0x4cd NEW_2
	var_576_cvector = CVector(0.0, 0.0, 0.0); // 0x4cf PushVec
	SetSpeed(var_576_cvector); // 0x4d0 Func
	Stop(); // 0x4d2 Func
	StopAsync(); // 0x4d4 Func
	var_577_bool = 0; // 0x4d6 PushV
	func_1663(var_155_float, var_577_bool); // 0x4d7 NEW_2
	var_578_bool = var_577_bool == 0; // 0x4d9 Not
	if(var_578_bool == 0) goto Label_1266; // 0x4da JumpB
	var_579_bool = 0; var_580_object = Obj(); // 0x4db PushV
	var_580_object = var_0_bool; // 0x4dc MovT
	func_2348(var_579_bool, var_580_object); // 0x4dd NEW_2
	var_581_bool = var_579_bool == 0; // 0x4df Not
	if(var_581_bool == 0) goto Label_1250; // 0x4e0 JumpB
	goto Label_1276; // 0x4e1 Jump
	
Label_1250:
	GetPFPosition(var_146_cvector); // 0x4e2 TObjFunc
	GetPFPosition(var_147_cvector); // 0x4e4 Func
	var_151_cvector = var_146_cvector - var_147_cvector; // 0x4e6 Sub2
	var_152_float = var_151_cvector | var_151_cvector; // 0x4e7 Or2
	var_582_float = var_133_float * var_133_float; // 0x4e8 Mult
	var_583_bool = var_152_float < var_582_float; // 0x4e9 LT
	if(var_583_bool == 0) goto Label_1266; // 0x4ea JumpB
	var_584_bool = 0; var_585_float = 0; // 0x4eb PushV
	var_585_float = var_133_float; // 0x4ec Mov
	func_1367(var_155_float, var_584_bool, var_585_float); // 0x4ed NEW_2
	var_586_bool = var_584_bool == 0; // 0x4ef Not
	if(var_586_bool == 0) goto Label_1266; // 0x4f0 JumpB
	goto Label_1276; // 0x4f1 Jump
	
Label_1267:
	var_587_bool = 0; var_588_float = 0; // 0x4f3 PushV
	var_588_float = var_133_float; // 0x4f4 Mov
	func_1367(var_155_float, var_587_bool, var_588_float); // 0x4f5 NEW_2
	var_589_bool = var_587_bool == 0; // 0x4f7 Not
	if(var_589_bool == 0) goto Label_1274; // 0x4f8 JumpB
	goto Label_1276; // 0x4f9 Jump
	
Label_1274:
	var_149_bool = 1; // 0x4fa MovB
	
Label_1101:
	var_149_bool = 1; // 0x44d MovB
	
Label_1078:
	var_145_float = var_133_float; // 0x436 Mov
}


func_2600(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector; // 0xa29 Or
	var_83_int = var_80_cvector | var_80_cvector; // 0xa2a Or
	var_84_int = var_81_cvector | var_81_cvector; // 0xa2b Or
	var_85_float = var_83_int * var_84_int; // 0xa2c Mult
	var_86_float = sqrt(var_85_float); // 0xa2d Sqrt
	var_79_float = var_82_int / var_82_int; // 0xa2e Div2
	return 0; // 0xa2f Return
}


func_2608(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0); // 0xa31 PushE
	var_73_float = GetByIndex(var_71_cvector, 0); // 0xa32 PushE
	var_74_float = var_72_float * var_73_float; // 0xa33 Mult
	var_75_float = GetByIndex(var_70_cvector, 2); // 0xa34 PushE
	var_76_float = GetByIndex(var_71_cvector, 2); // 0xa35 PushE
	var_77_float = var_75_float * var_76_float; // 0xa36 Mult
	var_69_float = var_74_float + var_77_float; // 0xa37 Add2
	return 0; // 0xa38 Return
}


func_3063(var_57_object)
{
	var_58_object = Obj(); // 0xbf8 PushV
	var_58_object = var_57_object; // 0xbf9 Mov
	TaskCall(6); // 0xbfa TaskCall
	func_2026(var_59_object, var_60_cvector, var_61_bool, var_58_object); // 0xbfb NEW_2
	TaskReturn(); // 0xbfc TaskReturn
	return 0; // 0xbfe Return
}


func_2617(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0); // 0xa3a PushE
	var_81_float = GetByIndex(var_79_cvector, 0); // 0xa3b PushE
	var_82_float = var_80_float * var_81_float; // 0xa3c Mult
	var_83_float = GetByIndex(var_79_cvector, 2); // 0xa3d PushE
	var_84_float = GetByIndex(var_79_cvector, 2); // 0xa3e PushE
	var_85_float = var_83_float * var_84_float; // 0xa3f Mult
	var_86_int = var_82_float + var_85_float; // 0xa40 Add
	var_78_float = sqrt(var_86_int); // 0xa41 Sqrt2
	return 0; // 0xa42 Return
}


func_1602(var_372_bool)
{
	var_373_bool = 0; // 0x642 PushV
	var_373_bool = 0; // 0x643 MovB
	var_374_bool = 0; // 0x644 PushV
	func_1574(var_373_bool, var_374_bool); // 0x645 NEW_2
	if(var_374_bool == 0) goto Label_1613; // 0x647 JumpB
	var_391_bool = 0; // 0x648 PushV
	func_1618(var_372_bool, var_373_bool, var_391_bool); // 0x649 NEW_2
	if(var_391_bool == 0) goto Label_1613; // 0x64b JumpB
	var_373_bool = 1; // 0x64c MovB
	
Label_1613:
	if(var_373_bool == 0) goto Label_1616; // 0x64d JumpB
	var_372_bool = 1; // 0x64e MovB
	return 0; // 0x64f Return
	
Label_1616:
	var_372_bool = 0; // 0x650 MovB
	return 0; // 0x651 Return
}


func_2627(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xa44 PushV
	var_70_cvector = var_67_cvector; // 0xa45 Mov
	var_71_cvector = var_68_cvector; // 0xa46 Mov
	func_2608(var_69_float, var_70_cvector, var_71_cvector); // 0xa47 NEW_2
	var_78_float = 0; var_79_cvector = CVector(0,0,0); // 0xa49 PushV
	var_79_cvector = var_67_cvector; // 0xa4a Mov
	func_2617(var_78_float, var_79_cvector); // 0xa4b NEW_2
	var_87_float = 0; var_88_cvector = CVector(0,0,0); // 0xa4d PushV
	var_88_cvector = var_68_cvector; // 0xa4e Mov
	func_2617(var_87_float, var_88_cvector); // 0xa4f NEW_2
	var_89_float = var_78_float * var_87_float; // 0xa51 Mult
	var_66_float = var_69_float / var_69_float; // 0xa52 Div2
	return 0; // 0xa53 Return
}


func_1618(var_0_bool, var_4_object, var_391_bool)
{
	var_392_object = Obj(); var_393_bool = 0; var_394_float = 0; var_395_cvector = CVector(0,0,0); var_396_cvector = CVector(0,0,0); var_397_object = Obj(); var_398_bool = 0; var_399_float = 0; var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); // 0x652 PushV
	GetScene(var_397_object); // 0x653 Func
	var_398_bool = 0; // 0x655 MovB
	
Label_1622:
	var_402_cvector = CVector(0,0,0); var_403_object = Obj(); // 0x656 PushV
	var_403_object = var_0_bool; // 0x657 MovT
	func_2202(var_403_object); // 0x658 NEW_2
	var_408_int = -var_402_cvector; // 0x65a Neg
	FindDirLength(var_399_float, var_408_int, var_399_float); // 0x65b Func
	var_409_bool = var_399_float < var_4_object; // 0x65d LT
	if(var_409_bool == 0) goto Label_1632; // 0x65e JumpB
	goto Label_1660; // 0x65f Jump
	
Label_1660:
	var_391_bool = var_398_bool; // 0x67c Mov
	return 10; // 0x67d Return
	
Label_1632:
	Face(var_0_bool); // 0x660 Func
	var_410_string = "all"; // 0x662 PushS
	var_411_string = "bjump"; // 0x663 PushS
	PlayAnimation(var_410_string, var_411_string); // 0x664 Func
	GetPFPosition(var_400_cvector); // 0x666 TObjFunc
	GetPFPosition(var_401_cvector); // 0x668 Func
	WaitForAnimEnd(); // 0x66a Func
	func_1706(var_401_cvector); // 0x66d NEW_2
	StopAsync(); // 0x66f Func
	var_412_cvector = CVector(0.0, 0.0, 0.0); // 0x671 PushVec
	SetSpeed(var_412_cvector); // 0x672 Func
	var_398_bool = 1; // 0x674 MovB
	var_413_bool = 0; // 0x675 PushV
	func_1574(var_401_cvector, var_413_bool); // 0x676 NEW_2
	var_414_bool = var_413_bool == 0; // 0x678 Not
	if(var_414_bool == 0) goto Label_1659; // 0x679 JumpB
	goto Label_1660; // 0x67a Jump
	
Label_1659:
	goto Label_1622; // 0x67b Jump
}


func_2644(var_527_float)
{
	var_528_object = Obj(); var_529_object = Obj(); // 0xa54 PushV
	CreateFloatVector(var_529_object); // 0xa55 Func
	add(var_527_float); // 0xa57 ObjFunc
	var_530_int = 15; // 0xa59 PushI
	SendWorldWndMessage(var_530_int, var_529_object); // 0xa5a Func
	return 2; // 0xa5c Return
}


func_2654(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0xa5e PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0xa5f Func
	var_22_bool = var_21_bool; // 0xa61 Push
	if(var_22_bool == 0) goto Label_2662; // 0xa62 JumpB
	var_23_string = "attack"; // 0xa63 PushS
	PlayGlobalMusic(var_23_string); // 0xa64 Func
	
Label_2662:
	return 2; // 0xa66 Return
}


func_2663()
{
	var_432_object = Obj(); var_433_object = Obj(); // 0xa67 PushV
	GetScene(var_433_object); // 0xa68 Func
	var_434_string = "battle"; // 0xa6a PushS
	var_435_object = Obj(); // 0xa6b PushV
	func_2566(var_435_object); // 0xa6c NEW_2
	BroadcastMessage(var_434_string, var_435_object, var_433_object); // 0xa6e Func
	return 2; // 0xa70 Return
}


func_2151(var_2_bool)
{
	Stop(); // 0x867 Func
	var_17_int = 120; // 0x869 PushI
	KillTimer(var_17_int); // 0x86a Func
	var_2_bool = 1; // 0x86c TMovB
	return 0; // 0x86d Return
}


func_2674(var_17_object)
{
	var_18_object = Obj(); // 0xa73 PushV
	var_18_object = var_17_object; // 0xa74 Mov
	TaskCall(0); // 0xa75 TaskCall
	func_0(var_18_object); // 0xa76 NEW_2
	TaskReturn(); // 0xa77 TaskReturn
	return 0; // 0xa79 Return
}


func_2167(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x877 PushV
	GetDirection(var_71_cvector); // 0x878 Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x87a PushV
	var_74_object = var_0_bool; // 0x87b MovT
	func_2202(var_74_object); // 0x87c NEW_2
	var_72_cvector = var_73_cvector; // 0x87d Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x87f PushV
	var_80_cvector = var_71_cvector; // 0x880 Mov
	var_81_cvector = var_72_cvector; // 0x881 Mov
	func_2600(var_79_float, var_80_cvector, var_81_cvector); // 0x882 NEW_2
	var_87_float = -0.34202; // 0x884 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x885 GE2
	return 4; // 0x886 Return
}


func_124(var_41_string)
{
	RemoveRTEnvelope(); // 0x7d Func
	SetDeathState(); // 0x7f Func
	Stop(); // 0x81 Func
	StopAsync(); // 0x83 Func
	StopSecondaryAnimation(); // 0x85 Func
	var_42_string = ""; // 0x87 PushV
	var_42_string = var_41_string; // 0x88 Mov
	func_2525(var_42_string); // 0x89 NEW_2
	var_71_string = "all"; // 0x8b PushS
	PlayAnimation(var_71_string, var_41_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_72_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_72_string, var_41_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_1663(var_0_bool, var_322_bool)
{
	var_323_bool = 0; var_324_bool = 0; // 0x67f PushV
	var_325_string = "IsAttacking"; // 0x680 PushS
	var_326_int = 1; // 0x681 PushI
	var_327_bool = IsFuncExist(var_0_bool, var_325_string, var_326_int); // 0x682 FuncExist
	if(var_327_bool == 0) goto Label_1672; // 0x683 JumpB
	IsAttacking(var_324_bool); // 0x684 TObjFunc
	var_322_bool = var_324_bool; // 0x686 Mov
	return 2; // 0x687 Return
	
Label_1672:
	var_322_bool = 0; // 0x688 MovB
	return 2; // 0x689 Return
}


func_2183(var_499_string, var_500_int)
{
	var_501_int = 2; // 0x888 PushI
	var_502_bool = var_500_int == var_501_int; // 0x889 Eq
	if(var_502_bool == 0) goto Label_2190; // 0x88a JumpB
	var_499_string = "fire"; // 0x88b MovS
	return 0; // 0x88c Return
	
Label_2190:
	var_503_int = 1; // 0x88e PushI
	var_504_bool = var_500_int == var_503_int; // 0x88f Eq
	if(var_504_bool == 0) goto Label_2195; // 0x890 JumpB
	var_499_string = "bullet"; // 0x891 MovS
	return 0; // 0x892 Return
	
Label_2195:
	var_499_string = "phys"; // 0x893 MovS
	return 0; // 0x894 Return
}


func_1674(var_2_bool, var_5_object)
{
	var_439_float = 0; var_440_int = 0; var_441_float = 0; var_442_int = 0; // 0x68a PushV
	var_443_bool = var_2_bool == 0; // 0x68b Not
	if(var_443_bool == 0) goto Label_1678; // 0x68c JumpB
	return 4; // 0x68d Return
	
Label_1678:
	var_444_object = var_5_object; // 0x68e PushT
	if(var_444_object == 0) goto Label_1686; // 0x68f JumpB
	var_445_int = -1; // 0x690 PushI
	var_5_object = var_5_object + var_445_int; // 0x691 Add2
	var_446_int = 0; // 0x692 PushI
	var_447_bool = var_5_object > var_446_int; // 0x693 GT
	if(var_447_bool == 0) goto Label_1686; // 0x694 JumpB
	return 4; // 0x695 Return
	
Label_1686:
	rand(var_441_float); // 0x696 Func
	var_448_float = 0; // 0x698 PushV
	func_1724(var_448_float); // 0x699 NEW_2
	var_449_bool = var_441_float < var_448_float; // 0x69b LT
	if(var_449_bool == 0) goto Label_1705; // 0x69c JumpB
	irand(var_442_int, var_441_float); // 0x69d Func
	var_450_int = 1; // 0x69f PushI
	var_442_int = var_442_int + var_450_int; // 0x6a0 Add2
	var_451_string = "attack"; // 0x6a1 PushS
	var_452_int = var_451_string + var_442_int; // 0x6a2 Add
	Speak(var_452_int); // 0x6a3 Func
	var_453_int = 0; // 0x6a5 PushV
	func_1722(var_453_int); // 0x6a6 NEW_2
	var_5_object = var_453_int; // 0x6a7 TMov
	
Label_1705:
	return 4; // 0x6a9 Return
}


func_2197(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); // 0x895 PushV
	GetPosition(var_90_cvector); // 0x896 Func
	var_88_cvector = var_90_cvector; // 0x898 Mov
	return 2; // 0x899 Return
}


func_2202(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x89a PushV
	GetPosition(var_54_cvector); // 0x89b Func
	GetPosition(var_55_cvector); // 0x89d ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x89f Sub2
	return 4; // 0x8a0 Return
}


func_2719(var_20_bool, var_21_object, var_22_string)
{
	var_23_string = "unholster"; // 0xaa0 PushS
	var_24_bool = var_22_string == var_23_string; // 0xaa1 Eq
	if(var_24_bool == 0) goto Label_2730; // 0xaa2 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0xaa3 PushV
	var_26_object = var_21_object; // 0xaa4 Mov
	func_3043(var_26_object); // 0xaa5 NEW_2
	var_20_bool = var_25_bool; // 0xaa6 Mov
	return 0; // 0xaa8 Return
	
Label_2730:
	var_27_string = "player_shot"; // 0xaaa PushS
	var_28_bool = var_22_string == var_27_string; // 0xaab Eq
	if(var_28_bool == 0) goto Label_2740; // 0xaac JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0xaad PushV
	var_30_object = var_21_object; // 0xaae Mov
	func_3048(var_29_bool, var_30_object); // 0xaaf NEW_2
	var_20_bool = var_29_bool; // 0xab0 Mov
	return 0; // 0xab2 Return
	
Label_2740:
	var_44_string = "battle"; // 0xab4 PushS
	var_45_bool = var_22_string == var_44_string; // 0xab5 Eq
	if(var_45_bool == 0) goto Label_2749; // 0xab6 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xab7 PushV
	var_47_object = var_21_object; // 0xab8 Mov
	func_3071(var_47_object); // 0xab9 NEW_2
	var_20_bool = var_46_bool; // 0xaba Mov
	return 0; // 0xabc Return
	
Label_2749:
	var_20_bool = 0; // 0xabd MovB
	return 0; // 0xabe Return
}


func_2209(var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x8a1 PushV
	GetPosition(var_39_cvector); // 0x8a2 Func
	GetPosition(var_40_cvector); // 0x8a4 ObjFunc
	var_41_cvector = var_40_cvector - var_39_cvector; // 0x8a6 Sub2
	var_34_float = var_41_cvector | var_41_cvector; // 0x8a7 Or2
	return 6; // 0x8a8 Return
}


func_2217(var_100_bool, var_101_object)
{
	var_102_bool = 0; var_103_bool = 0; // 0x8a9 PushV
	IsPlayerActor(var_101_object, var_103_bool); // 0x8aa Func
	var_100_bool = var_103_bool; // 0x8ac Mov
	return 2; // 0x8ad Return
}


func_1706(var_0_bool)
{
	var_195_object = Obj(); // 0x6aa PushV
	var_195_object = var_0_bool; // 0x6ab MovT
	func_2654(var_195_object); // 0x6ac NEW_2
	return 0; // 0x6ae Return
}


func_171()
{
	var_18_bool = 0; // 0xab PushV
	func_2509(var_18_bool); // 0xac NEW_2
	var_21_bool = var_18_bool == 0; // 0xae Not
	if(var_21_bool == 0) goto Label_179; // 0xaf JumpB
	func_3042(); // 0xb1 NEW_2
	
Label_179:
	return 0; // 0xb3 Return
}


func_2222(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x8ae PushV
	var_56_string = "HasProperty"; // 0x8af PushS
	var_57_int = 2; // 0x8b0 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x8b1 FuncExist
	var_59_bool = var_58_bool == 0; // 0x8b2 Not
	if(var_59_bool == 0) goto Label_2230; // 0x8b3 JumpB
	var_51_bool = 0; // 0x8b4 MovB
	return 2; // 0x8b5 Return
	
Label_2230:
	HasProperty(var_53_string, var_55_bool); // 0x8b6 ObjFunc
	var_51_bool = var_55_bool; // 0x8b8 Mov
	return 2; // 0x8b9 Return
}


func_1711(var_532_int)
{
	var_532_int = 0; // 0x6af MovI
	return 0; // 0x6b0 Return
}


func_689()
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_bool = 0; // 0x2b1 PushV
	WaitForAnimEnd(); // 0x2b2 Func
	var_63_bool = 0; // 0x2b4 PushV
	func_2509(var_63_bool); // 0x2b5 NEW_2
	var_64_bool = var_63_bool == 0; // 0x2b7 Not
	if(var_64_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 14; // 0x2b9 Return
	
Label_698:
	var_65_int = 0; // 0x2ba PushV
	func_2854(var_65_int); // 0x2bb NEW_2
	var_56_int = var_65_int; // 0x2bc Mov
	var_57_int = 0; // 0x2be MovI
	
Label_703:
	var_78_bool = 0; // 0x2bf PushV
	var_78_bool = 0; // 0x2c0 MovB
	var_79_int = 5; // 0x2c1 PushI
	var_80_bool = var_57_int < var_79_int; // 0x2c2 LT
	if(var_80_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_81_bool = 0; // 0x2c4 PushV
	func_2509(var_81_bool); // 0x2c5 NEW_2
	if(var_81_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_78_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_78_bool == 0) goto Label_765; // 0x2c9 JumpB
	var_82_int = 3; // 0x2ca PushI
	irand(var_58_int, var_82_int); // 0x2cb Func
	var_83_int = 0; // 0x2cd PushI
	var_84_bool = var_58_int == var_83_int; // 0x2ce Eq
	if(var_84_bool == 0) goto Label_737; // 0x2cf JumpB
	var_85_int = var_56_int; // 0x2d0 Push
	if(var_85_int == 0) goto Label_736; // 0x2d1 JumpB
	irand(var_59_int, var_56_int); // 0x2d2 Func
	var_86_string = "all"; // 0x2d4 PushS
	var_87_string = ""; var_88_int = 0; // 0x2d5 PushV
	var_88_int = var_59_int; // 0x2d6 Mov
	func_2847(var_87_string, var_88_int); // 0x2d7 NEW_2
	PlayAnimation(var_86_string, var_87_string); // 0x2d9 Func
	WaitForAnimEnd(var_60_bool); // 0x2db Func
	var_89_bool = var_60_bool == 0; // 0x2dd Not
	if(var_89_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_765; // 0x2df Jump
	
Label_765:
	ResetAAS(); // 0x2fd Func
	return 14; // 0x2ff Return
	
Label_736:
	goto Label_754; // 0x2e0 Jump
	
Label_754:
	var_90_bool = 0; // 0x2f2 PushV
	func_768(var_90_bool); // 0x2f3 NEW_2
	var_91_bool = var_90_bool == 0; // 0x2f5 Not
	if(var_91_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_765; // 0x2f7 Jump
	
Label_760:
	ResetAAS(); // 0x2f8 Func
	var_92_int = 1; // 0x2fa PushI
	var_57_int = var_57_int + var_92_int; // 0x2fb Add2
	goto Label_703; // 0x2fc Jump
	
Label_737:
	var_93_int = 1; // 0x2e1 PushI
	var_94_bool = var_58_int == var_93_int; // 0x2e2 Eq
	if(var_94_bool == 0) goto Label_751; // 0x2e3 JumpB
	var_95_int = 4; // 0x2e4 PushI
	rand(var_61_float, var_95_int); // 0x2e5 Func
	var_96_int = 1; // 0x2e7 PushI
	var_97_int = var_61_float + var_96_int; // 0x2e8 Add
	Sleep(var_97_int, var_62_bool); // 0x2e9 Func
	var_98_bool = var_62_bool == 0; // 0x2eb Not
	if(var_98_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_765; // 0x2ed Jump
	
Label_750:
	goto Label_754; // 0x2ee Jump
	
Label_751:
	var_99_int = var_57_int; // 0x2ef Push
	if(var_99_int == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_765; // 0x2f1 Jump
}


func_1713()
{
	var_328_string = ""; // 0x6b1 PushV
	var_328_string = "attack_stay"; // 0x6b2 MovS
	func_2525(var_328_string); // 0x6b3 NEW_2
	return 0; // 0x6b5 Return
}


func_1718()
{
	return 0; // 0x6b7 Return
}


func_1720(var_557_bool)
{
	var_557_bool = 1; // 0x6b8 MovB
	return 0; // 0x6b9 Return
}


func_2234(var_471_float, var_472_object, var_473_float, var_474_int)
{
	var_478_int = 0; var_479_string = ""; var_480_int = 0; var_481_float = 0; var_482_float = 0; var_483_float = 0; var_484_int = 0; var_485_string = ""; var_486_int = 0; var_487_float = 0; var_488_float = 0; var_489_float = 0; // 0x8ba PushV
	var_490_bool = 0; var_491_object = Obj(); var_492_string = ""; // 0x8bb PushV
	var_491_object = var_472_object; // 0x8bc Mov
	var_492_string = "health"; // 0x8bd MovS
	func_2222(var_490_bool, var_491_object, var_492_string); // 0x8be NEW_2
	var_493_bool = var_490_bool == 0; // 0x8c0 Not
	if(var_493_bool == 0) goto Label_2244; // 0x8c1 JumpB
	var_471_float = 0.0; // 0x8c2 MovF
	return 12; // 0x8c3 Return
	
Label_2244:
	var_494_bool = 0; var_495_object = Obj(); var_496_string = ""; // 0x8c4 PushV
	var_495_object = var_472_object; // 0x8c5 Mov
	var_496_string = "armor"; // 0x8c6 MovS
	func_2222(var_494_bool, var_495_object, var_496_string); // 0x8c7 NEW_2
	var_497_bool = var_494_bool == 0; // 0x8c9 Not
	if(var_497_bool == 0) goto Label_2253; // 0x8ca JumpB
	var_484_int = 0; // 0x8cb MovI
	goto Label_2256; // 0x8cc Jump
	
Label_2256:
	var_498_string = "armor_"; // 0x8d0 PushS
	var_499_string = ""; var_500_int = 0; // 0x8d1 PushV
	var_500_int = var_474_int; // 0x8d2 Mov
	func_2183(var_499_string, var_500_int); // 0x8d3 NEW_2
	var_485_string = var_498_string + var_499_string; // 0x8d5 Add2
	var_505_bool = 0; var_506_object = Obj(); var_507_string = ""; // 0x8d6 PushV
	var_506_object = var_472_object; // 0x8d7 Mov
	var_507_string = var_485_string; // 0x8d8 Mov
	func_2222(var_505_bool, var_506_object, var_507_string); // 0x8d9 NEW_2
	var_508_bool = var_505_bool == 0; // 0x8db Not
	if(var_508_bool == 0) goto Label_2271; // 0x8dc JumpB
	var_486_int = 0; // 0x8dd MovI
	goto Label_2273; // 0x8de Jump
	
Label_2273:
	var_509_float = 0; var_510_float = 0; var_511_float = 0; // 0x8e1 PushV
	var_512_int = var_484_int + var_486_int; // 0x8e2 Add
	var_513_float = 100.0; // 0x8e3 PushF
	var_510_float = var_512_int / var_512_int; // 0x8e4 Div2
	var_511_float = 1; // 0x8e5 MovI
	func_2582(var_509_float, var_510_float, var_511_float); // 0x8e6 NEW_2
	var_487_float = var_509_float; // 0x8e7 Mov
	var_515_string = "health"; // 0x8e9 PushS
	GetProperty(var_515_string, var_488_float); // 0x8ea ObjFunc
	var_516_int = 1; // 0x8ec PushI
	var_517_int = var_516_int - var_487_float; // 0x8ed Sub
	var_489_float = var_473_float * var_517_int; // 0x8ee Mult2
	var_518_string = "health"; // 0x8ef PushS
	var_519_float = 0; var_520_float = 0; var_521_float = 0; var_522_float = 0; // 0x8f0 PushV
	var_520_float = var_488_float - var_489_float; // 0x8f1 Sub2
	var_521_float = 0; // 0x8f2 MovI
	var_522_float = 1; // 0x8f3 MovI
	func_2589(var_519_float, var_520_float, var_521_float, var_522_float); // 0x8f4 NEW_2
	SetProperty(var_518_string, var_519_float); // 0x8f6 ObjFunc
	var_525_bool = 0; var_526_object = Obj(); // 0x8f8 PushV
	var_526_object = var_472_object; // 0x8f9 Mov
	func_2217(var_525_bool, var_526_object); // 0x8fa NEW_2
	if(var_525_bool == 0) goto Label_2305; // 0x8fc JumpB
	var_527_float = 0; // 0x8fd PushV
	var_527_float = -var_489_float; // 0x8fe Neg2
	func_2644(var_527_float); // 0x8ff NEW_2
	
Label_2305:
	var_471_float = var_489_float; // 0x901 Mov
	return 12; // 0x902 Return
	
Label_2271:
	GetProperty(var_485_string, var_486_int); // 0x8df ObjFunc
	
Label_2253:
	var_531_string = "armor"; // 0x8cd PushS
	GetProperty(var_531_string, var_484_int); // 0x8ce ObjFunc
}


func_1722(var_453_int)
{
	var_453_int = 1; // 0x6ba MovI
	return 0; // 0x6bb Return
}


func_1724(var_448_float)
{
	var_448_float = 0.5; // 0x6bc MovF
	return 0; // 0x6bd Return
}


func_2751(var_50_object, var_51_string)
{
	var_52_string = "unholster"; // 0xac0 PushS
	var_53_bool = var_51_string == var_52_string; // 0xac1 Eq
	if(var_53_bool == 0) goto Label_2760; // 0xac2 JumpB
	var_54_object = Obj(); // 0xac3 PushV
	var_54_object = var_50_object; // 0xac4 Mov
	func_3046(); // 0xac5 NEW_2
	goto Label_2775; // 0xac7 Jump
	
Label_2775:
	return 0; // 0xad7 Return
	
Label_2760:
	var_55_string = "player_shot"; // 0xac8 PushS
	var_56_bool = var_51_string == var_55_string; // 0xac9 Eq
	if(var_56_bool == 0) goto Label_2768; // 0xaca JumpB
	var_57_object = Obj(); // 0xacb PushV
	var_57_object = var_50_object; // 0xacc Mov
	func_3063(var_57_object); // 0xacd NEW_2
	goto Label_2775; // 0xacf Jump
	
Label_2768:
	var_130_string = "battle"; // 0xad0 PushS
	var_131_bool = var_51_string == var_130_string; // 0xad1 Eq
	if(var_131_bool == 0) goto Label_2775; // 0xad2 JumpB
	var_132_object = Obj(); // 0xad3 PushV
	var_132_object = var_50_object; // 0xad4 Mov
	func_3074(); // 0xad5 NEW_2
}


func_1733(var_2_bool, var_202_bool, var_203_object, var_204_float, var_205_float, var_206_bool, var_207_bool)
{
	var_211_bool = 0; var_212_bool = 0; var_213_bool = 0; var_214_bool = 0; // 0x6c5 PushV
	var_215_object = Obj(); // 0x6c6 PushV
	var_215_object = var_203_object; // 0x6c7 Mov
	func_2654(var_215_object); // 0x6c8 NEW_2
	var_216_int = 1; // 0x6ca PushI
	var_217_int = 5; // 0x6cb PushI
	SetTimer(var_216_int, var_217_int); // 0x6cc Func
	CanSee(var_213_bool, var_203_object); // 0x6ce Func
	var_218_bool = var_213_bool; // 0x6d0 Push
	if(var_218_bool == 0) goto Label_1752; // 0x6d1 JumpB
	var_2_bool = 1; // 0x6d2 TMovB
	var_219_object = Obj(); // 0x6d3 PushV
	var_219_object = var_203_object; // 0x6d4 Mov
	func_2514(var_219_object); // 0x6d5 NEW_2
	goto Label_1753; // 0x6d7 Jump
	
Label_1753:
	var_226_bool = 0; var_227_object = Obj(); // 0x6d9 PushV
	var_227_object = var_203_object; // 0x6da Mov
	func_2217(var_226_bool, var_227_object); // 0x6db NEW_2
	if(var_226_bool == 0) goto Label_1763; // 0x6dd JumpB
	var_230_object = Obj(); // 0x6de PushV
	func_2566(var_230_object); // 0x6df NEW_2
	SendPlayerEnemy(var_203_object, var_230_object); // 0x6e1 Func
	
Label_1763:
	var_231_bool = 0; var_232_object = Obj(); var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_bool = 0; // 0x6e3 PushV
	var_232_object = var_203_object; // 0x6e4 Mov
	var_233_float = var_204_float; // 0x6e5 Mov
	var_234_float = var_205_float; // 0x6e6 Mov
	var_235_bool = var_206_bool; // 0x6e7 Mov
	var_236_bool = var_207_bool; // 0x6e8 Mov
	func_1838(var_213_bool, var_214_bool, var_231_bool, var_232_object, var_233_float, var_234_float, var_235_bool, var_236_bool); // 0x6e9 NEW_2
	var_214_bool = var_231_bool; // 0x6ea Mov
	var_282_bool = var_2_bool; // 0x6ec PushT
	if(var_282_bool == 0) goto Label_1777; // 0x6ed JumpB
	var_283_string = "head"; // 0x6ee PushS
	UnlookAsync(var_283_string); // 0x6ef Func
	
Label_1777:
	var_284_int = 1; // 0x6f1 PushI
	KillTimer(var_284_int); // 0x6f2 Func
	var_202_bool = var_214_bool; // 0x6f4 Mov
	return 4; // 0x6f5 Return
	
Label_1752:
	var_2_bool = 0; // 0x6d8 TMovB
}


func_2776(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0xad8 PushV
	var_21_bool = 0; // 0xad9 PushV
	var_21_bool = 0; // 0xada MovB
	var_22_bool = 0; var_23_object = Obj(); // 0xadb PushV
	var_23_object = var_18_object; // 0xadc Mov
	func_3043(var_23_object); // 0xadd NEW_2
	if(var_22_bool == 0) goto Label_2790; // 0xadf JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xae0 PushV
	var_25_object = var_18_object; // 0xae1 Mov
	func_2217(var_24_bool, var_25_object); // 0xae2 NEW_2
	if(var_24_bool == 0) goto Label_2790; // 0xae4 JumpB
	var_21_bool = 1; // 0xae5 MovB
	
Label_2790:
	if(var_21_bool == 0) goto Label_2797; // 0xae6 JumpB
	IsWeaponHolstered(var_20_bool); // 0xae7 ObjFunc
	var_28_bool = var_20_bool == 0; // 0xae9 Not
	if(var_28_bool == 0) goto Label_2797; // 0xaea JumpB
	var_17_bool = 1; // 0xaeb MovB
	return 2; // 0xaec Return
	
Label_2797:
	var_17_bool = 0; // 0xaed MovB
	return 2; // 0xaee Return
}


func_2799(var_31_object)
{
	var_32_object = Obj(); // 0xaf0 PushV
	var_32_object = var_31_object; // 0xaf1 Mov
	func_3046(); // 0xaf2 NEW_2
	return 0; // 0xaf4 Return
}


func_2805(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xaf6 PushV
	var_21_object = var_19_object; // 0xaf7 Mov
	func_2217(var_20_bool, var_21_object); // 0xaf8 NEW_2
	if(var_20_bool == 0) goto Label_2817; // 0xafa JumpB
	var_24_object = Obj(); // 0xafb PushV
	func_2566(var_24_object); // 0xafc NEW_2
	var_27_float = 0.0; // 0xafe PushF
	ReportReputationChange(var_19_object, var_24_object, var_27_float); // 0xaff Func
	
Label_2817:
	return 0; // 0xb01 Return
}


func_768(var_90_bool)
{
	var_90_bool = 1; // 0x300 MovB
	return 0; // 0x301 Return
}


func_2818(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0xb02 PushV
	var_21_string = "heal"; // 0xb03 PushS
	var_22_bool = var_18_string == var_21_string; // 0xb04 Eq
	if(var_22_bool == 0) goto Label_2832; // 0xb05 JumpB
	var_23_string = "player"; // 0xb06 PushS
	FindActor(var_20_object, var_23_string); // 0xb07 Func
	var_24_bool = 0; var_25_object = Obj(); // 0xb09 PushV
	var_25_object = var_20_object; // 0xb0a Mov
	func_3076(var_25_object); // 0xb0b NEW_2
	var_17_bool = var_24_bool; // 0xb0c Mov
	return 2; // 0xb0e Return
	
Label_2832:
	var_17_bool = 0; // 0xb10 MovB
	return 2; // 0xb11 Return
}


func_770()
{
	StopAnimation(); // 0x302 Func
	StopGroup0(); // 0x304 Func
	return 0; // 0x306 Return
}


func_1796(var_2_bool)
{
	var_17_int = 1; // 0x704 PushI
	KillTimer(var_17_int); // 0x705 Func
	var_18_bool = var_2_bool; // 0x707 PushT
	if(var_18_bool == 0) goto Label_1805; // 0x708 JumpB
	var_2_bool = 0; // 0x709 TMovB
	var_19_string = "head"; // 0x70a PushS
	UnlookAsync(var_19_string); // 0x70b Func
	
Label_1805:
	func_1962(var_16_bool); // 0x70e NEW_2
	return 0; // 0x710 Return
}


func_2307(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x903 PushV
	IsDead(var_47_bool); // 0x904 ObjFunc
	var_44_bool = var_47_bool; // 0x906 Mov
	return 2; // 0x907 Return
}


func_775(var_0_bool, var_68_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; // 0x307 PushV
	var_0_bool = var_68_object; // 0x308 TMov
	func_826(var_75_bool); // 0x30a NEW_2
	GetDirection(var_73_cvector); // 0x30c Func
	var_83_cvector = CVector(0,0,0); var_84_object = Obj(); // 0x30e PushV
	var_84_object = var_0_bool; // 0x30f MovT
	func_2202(var_84_object); // 0x310 NEW_2
	var_74_cvector = var_83_cvector; // 0x311 Mov
	var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x313 PushV
	var_90_cvector = var_73_cvector; // 0x314 Mov
	var_91_cvector = var_74_cvector; // 0x315 Mov
	func_2627(var_89_float, var_90_cvector, var_91_cvector); // 0x316 NEW_2
	var_113_int = 0; // 0x318 PushI
	var_114_bool = var_89_float < var_113_int; // 0x319 LT
	if(var_114_bool == 0) goto Label_801; // 0x31a JumpB
	var_115_object = Obj(); // 0x31b PushV
	var_115_object = var_0_bool; // 0x31c MovT
	func_2498(); // 0x31d NEW_2
	var_75_bool = 1; // 0x31f MovB
	goto Label_804; // 0x320 Jump
	
Label_804:
	var_124_bool = var_75_bool; // 0x324 Push
	if(var_124_bool == 0) goto Label_820; // 0x325 JumpB
	var_125_object = Obj(); // 0x326 PushV
	var_125_object = var_0_bool; // 0x327 MovT
	func_2498(); // 0x328 NEW_2
	var_126_int = 111; // 0x32a PushI
	var_127_float = 0.5; // 0x32b PushF
	SetTimer(var_126_int, var_127_float); // 0x32c Func
	var_128_float = 5.0; // 0x32e PushF
	Sleep(var_128_float); // 0x32f Func
	var_129_int = 111; // 0x331 PushI
	KillTimer(var_129_int); // 0x332 Func
	
Label_820:
	StopAsync(); // 0x334 Func
	var_130_string = "head"; // 0x336 PushS
	UnlookAsync(var_130_string); // 0x337 Func
	return 6; // 0x339 Return
	
Label_801:
	var_131_float = 1.5; // 0x321 PushF
	Sleep(var_131_float, var_75_bool); // 0x322 Func
}


func_2312(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x908 PushV
	var_39_bool = var_34_object == 0; // 0x909 NullEq
	if(var_39_bool == 0) goto Label_2317; // 0x90a JumpB
	var_33_bool = 0; // 0x90b MovB
	return 4; // 0x90c Return
	
Label_2317:
	var_40_bool = 0; // 0x90d PushV
	var_40_bool = 0; // 0x90e MovB
	var_41_string = "IsDead"; // 0x90f PushS
	var_42_int = 1; // 0x910 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x911 FuncExist
	if(var_43_bool == 0) goto Label_2329; // 0x912 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x913 PushV
	var_45_object = var_34_object; // 0x914 Mov
	func_2307(var_45_object); // 0x915 NEW_2
	if(var_44_bool == 0) goto Label_2329; // 0x917 JumpB
	var_40_bool = 1; // 0x918 MovB
	
Label_2329:
	if(var_40_bool == 0) goto Label_2332; // 0x919 JumpB
	var_33_bool = 0; // 0x91a MovB
	return 4; // 0x91b Return
	
Label_2332:
	GetScene(var_37_object); // 0x91c Func
	var_48_bool = var_37_object == 0; // 0x91e NullEq
	if(var_48_bool == 0) goto Label_2338; // 0x91f JumpB
	var_33_bool = 0; // 0x920 MovB
	return 4; // 0x921 Return
	
Label_2338:
	GetScene(var_38_object); // 0x922 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x924 Neq
	if(var_49_bool == 0) goto Label_2344; // 0x925 JumpB
	var_33_bool = 0; // 0x926 MovB
	return 4; // 0x927 Return
	
Label_2344:
	var_33_bool = 1; // 0x928 MovB
	return 4; // 0x929 Return
}


func_1293(var_1_bool, var_2_bool, var_4_object)
{
	var_156_bool = 0; var_157_bool = 0; var_158_cvector = CVector(0,0,0); var_159_bool = 0; var_160_bool = 0; var_161_cvector = CVector(0,0,0); // 0x50d PushV
	var_1_bool = 0; // 0x50e TMovI
	
Label_1295:
	var_162_string = "all"; // 0x50f PushS
	var_163_string = "attack_begin"; // 0x510 PushS
	var_164_int = 1; // 0x511 PushI
	var_165_int = var_1_bool + var_164_int; // 0x512 Add
	var_166_int = var_163_string + var_165_int; // 0x513 Add
	HasAnimation(var_159_bool, var_162_string, var_166_int); // 0x514 Func
	var_167_bool = var_159_bool == 0; // 0x516 Not
	if(var_167_bool == 0) goto Label_1305; // 0x517 JumpB
	goto Label_1308; // 0x518 Jump
	
Label_1308:
	var_2_bool = 0; // 0x51c TMovI
	
Label_1309:
	var_168_string = "attack"; // 0x51d PushS
	var_169_int = 1; // 0x51e PushI
	var_170_int = var_2_bool + var_169_int; // 0x51f Add
	var_171_int = var_168_string + var_170_int; // 0x520 Add
	IsExisting3DSound(var_160_bool, var_171_int); // 0x521 Func
	var_172_bool = var_160_bool == 0; // 0x523 Not
	if(var_172_bool == 0) goto Label_1318; // 0x524 JumpB
	goto Label_1321; // 0x525 Jump
	
Label_1321:
	var_173_string = "all"; // 0x529 PushS
	var_174_string = "bjump"; // 0x52a PushS
	GetAnimationOffset(var_161_cvector, var_173_string, var_174_string); // 0x52b Func
	var_175_float = GetByIndex(var_161_cvector, 2); // 0x52d PushE
	var_4_object = -var_175_float; // 0x52e Neg2
	return 6; // 0x52f Return
	
Label_1318:
	var_176_int = 1; // 0x526 PushI
	var_2_bool = var_2_bool + var_176_int; // 0x527 Add2
	goto Label_1309; // 0x528 Jump
	
Label_1305:
	var_177_int = 1; // 0x519 PushI
	var_1_bool = var_1_bool + var_177_int; // 0x51a Add2
	goto Label_1295; // 0x51b Jump
}


func_2834(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0xb12 PushV
	var_31_string = "heal"; // 0xb13 PushS
	var_32_bool = var_28_string == var_31_string; // 0xb14 Eq
	if(var_32_bool == 0) goto Label_2846; // 0xb15 JumpB
	var_33_string = "player"; // 0xb16 PushS
	FindActor(var_30_object, var_33_string); // 0xb17 Func
	var_34_object = Obj(); // 0xb19 PushV
	var_34_object = var_30_object; // 0xb1a Mov
	func_3079(); // 0xb1b NEW_2
	var_30_object = 0; // 0xb1d SetNull
	
Label_2846:
	return 2; // 0xb1e Return
}


func_2847(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0xb1f PushV
	var_74_string = "idle"; // 0xb20 MovS
	var_75_int = var_72_int; // 0xb21 Push
	if(var_75_int == 0) goto Label_2852; // 0xb22 JumpB
	var_74_string = var_74_string + var_72_int; // 0xb23 Add2
	
Label_2852:
	var_71_string = var_74_string; // 0xb24 Mov
	return 2; // 0xb25 Return
}


func_2854(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0xb26 PushV
	var_68_int = 0; // 0xb27 MovI
	
Label_2856:
	var_70_string = "all"; // 0xb28 PushS
	var_71_string = ""; var_72_int = 0; // 0xb29 PushV
	var_72_int = var_68_int; // 0xb2a Mov
	func_2847(var_71_string, var_72_int); // 0xb2b NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0xb2d Func
	var_76_bool = var_69_bool == 0; // 0xb2f Not
	if(var_76_bool == 0) goto Label_2866; // 0xb30 JumpB
	goto Label_2869; // 0xb31 Jump
	
Label_2869:
	var_65_int = var_68_int; // 0xb35 Mov
	return 4; // 0xb36 Return
	
Label_2866:
	var_77_int = 1; // 0xb32 PushI
	var_68_int = var_68_int + var_77_int; // 0xb33 Add2
	goto Label_2856; // 0xb34 Jump
}


func_2348(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x92c PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x92d PushV
	var_34_object = var_30_object; // 0x92e Mov
	func_2312(var_33_bool, var_34_object); // 0x92f NEW_2
	var_50_bool = var_33_bool == 0; // 0x931 Not
	if(var_50_bool == 0) goto Label_2357; // 0x932 JumpB
	var_29_bool = 0; // 0x933 MovB
	return 2; // 0x934 Return
	
Label_2357:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x935 PushV
	var_52_object = var_30_object; // 0x936 Mov
	var_53_string = "noaccess"; // 0x937 MovS
	func_2222(var_51_bool, var_52_object, var_53_string); // 0x938 NEW_2
	var_60_bool = var_51_bool == 0; // 0x93a Not
	if(var_60_bool == 0) goto Label_2366; // 0x93b JumpB
	var_29_bool = 1; // 0x93c MovB
	return 2; // 0x93d Return
	
Label_2366:
	var_61_string = "noaccess"; // 0x93e PushS
	GetProperty(var_61_string, var_32_int); // 0x93f ObjFunc
	var_62_int = 0; // 0x941 PushI
	var_29_bool = var_32_int == var_62_int; // 0x942 Eq2
	return 2; // 0x943 Return
}


func_1838(var_0_bool, var_1_bool, var_231_bool, var_232_object, var_233_float, var_234_float, var_235_bool, var_236_bool)
{
	var_237_bool = 0; var_238_bool = 0; var_239_object = Obj(); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_float = 0; var_244_object = Obj(); var_245_bool = 0; var_246_bool = 0; var_247_object = Obj(); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_float = 0; var_252_object = Obj(); // 0x72e PushV
	var_0_bool = 0; // 0x72f TMovB
	var_1_bool = var_232_object; // 0x730 TMov
	var_246_bool = var_236_bool; // 0x731 Mov
	
Label_1842:
	var_253_bool = 0; var_254_object = Obj(); // 0x732 PushV
	var_254_object = var_232_object; // 0x733 Mov
	func_1978(var_253_bool, var_254_object); // 0x734 NEW_2
	var_257_bool = var_253_bool == 0; // 0x736 Not
	if(var_257_bool == 0) goto Label_1850; // 0x737 JumpB
	var_231_bool = 0; // 0x738 MovB
	return 16; // 0x739 Return
	
Label_1850:
	GetPosition(var_248_cvector); // 0x73a ObjFunc
	GetPosition(var_249_cvector); // 0x73c Func
	var_250_cvector = var_248_cvector - var_249_cvector; // 0x73e Sub2
	var_251_float = var_250_cvector | var_250_cvector; // 0x73f Or2
	var_258_bool = 0; // 0x740 PushV
	var_258_bool = 0; // 0x741 MovB
	var_259_int = 0; // 0x742 PushI
	var_260_bool = var_234_float > var_259_int; // 0x743 GT
	if(var_260_bool == 0) goto Label_1865; // 0x744 JumpB
	var_261_float = var_234_float * var_234_float; // 0x745 Mult
	var_262_bool = var_251_float > var_261_float; // 0x746 GT
	if(var_262_bool == 0) goto Label_1865; // 0x747 JumpB
	var_258_bool = 1; // 0x748 MovB
	
Label_1865:
	if(var_258_bool == 0) goto Label_1870; // 0x749 JumpB
	Stop(); // 0x74a Func
	var_231_bool = 0; // 0x74c MovB
	return 16; // 0x74d Return
	
Label_1870:
	var_263_float = var_233_float * var_233_float; // 0x74e Mult
	var_264_bool = var_251_float > var_263_float; // 0x74f GT
	if(var_264_bool == 0) goto Label_1932; // 0x750 JumpB
	GetPFPosition(var_248_cvector); // 0x751 ObjFunc
	FindPathTo(var_252_object, var_248_cvector); // 0x753 Func
	var_265_bool = var_252_object != 0; // 0x755 NullNeq
	if(var_265_bool == 0) goto Label_1881; // 0x756 JumpB
	var_247_object = var_252_object; // 0x757 Mov
	var_252_object = 0; // 0x758 SetNull
	
Label_1881:
	var_266_bool = var_247_object != 0; // 0x759 NullNeq
	if(var_266_bool == 0) goto Label_1914; // 0x75a JumpB
	var_267_bool = var_246_bool; // 0x75b Push
	if(var_267_bool == 0) goto Label_1891; // 0x75c JumpB
	var_246_bool = 0; // 0x75d MovB
	RotatePath(var_247_object, var_245_bool); // 0x75e Func
	var_268_bool = var_245_bool == 0; // 0x760 Not
	if(var_268_bool == 0) goto Label_1891; // 0x761 JumpB
	goto Label_1938; // 0x762 Jump
	
Label_1938:
	var_231_bool = !var_0_bool; // 0x792 Not2
	return 16; // 0x793 Return
	
Label_1891:
	var_269_int = 0; // 0x763 PushI
	var_270_float = 0.3; // 0x764 PushF
	SetTimer(var_269_int, var_270_float); // 0x765 Func
	var_271_string = ""; // 0x767 PushV
	func_1985(var_271_string); // 0x768 NEW_2
	var_272_string = ""; // 0x76a PushV
	func_1987(var_272_string); // 0x76b NEW_2
	FollowPath(var_247_object, var_235_bool, var_245_bool, var_271_string, var_272_string); // 0x76d Func
	var_273_bool = var_245_bool == 0; // 0x76f Not
	if(var_273_bool == 0) goto Label_1912; // 0x770 JumpB
	var_274_bool = var_0_bool; // 0x771 PushT
	if(var_274_bool == 0) goto Label_1910; // 0x772 JumpB
	var_247_object = 0; // 0x773 SetNull
	goto Label_1938; // 0x774 Jump
	
Label_1910:
	goto Label_1937; // 0x776 Jump
	
Label_1937:
	goto Label_1842; // 0x791 Jump
	
Label_1912:
	var_247_object = 0; // 0x778 SetNull
	goto Label_1930; // 0x779 Jump
	
Label_1930:
	var_252_object = 0; // 0x78a SetNull
	goto Label_1936; // 0x78b Jump
	
Label_1936:
	var_247_object = 0; // 0x790 SetNull
	
Label_1914:
	var_275_int = 0; // 0x77a PushI
	KillTimer(var_275_int); // 0x77b Func
	var_276_float = 0.5; // 0x77d PushF
	Sleep(var_276_float, var_245_bool); // 0x77e Func
	var_277_bool = var_245_bool == 0; // 0x780 Not
	if(var_277_bool == 0) goto Label_1926; // 0x781 JumpB
	var_278_bool = var_0_bool; // 0x782 PushT
	if(var_278_bool == 0) goto Label_1926; // 0x783 JumpB
	var_247_object = 0; // 0x784 SetNull
	goto Label_1938; // 0x785 Jump
	
Label_1926:
	var_279_int = 0; // 0x786 PushI
	var_280_float = 0.3; // 0x787 PushF
	SetTimer(var_279_int, var_280_float); // 0x788 Func
	
Label_1932:
	var_281_int = 0; // 0x78c PushI
	KillTimer(var_281_int); // 0x78d Func
	goto Label_1938; // 0x78f Jump
}


func_1328(var_0_bool, var_457_float, var_458_int)
{
	var_459_object = Obj(); var_460_float = 0; var_461_float = 0; var_462_object = Obj(); var_463_float = 0; var_464_float = 0; // 0x530 PushV
	var_465_float = 0.9; // 0x531 PushF
	var_466_float = var_457_float * var_465_float; // 0x532 Mult
	GetVictim(var_466_float, var_462_object); // 0x533 Func
	ReportAttack(var_0_bool); // 0x535 Func
	var_467_bool = var_462_object == var_0_bool; // 0x537 Eq
	if(var_467_bool == 0) goto Label_1365; // 0x538 JumpB
	var_468_float = 0; var_469_object = Obj(); var_470_int = 0; // 0x539 PushV
	var_469_object = var_462_object; // 0x53a Mov
	var_470_int = var_458_int; // 0x53b Mov
	func_1058(var_470_int); // 0x53c NEW_2
	var_463_float = var_468_float; // 0x53d Mov
	var_471_float = 0; var_472_object = Obj(); var_473_float = 0; var_474_int = 0; // 0x53f PushV
	var_472_object = var_462_object; // 0x540 Mov
	var_473_float = var_463_float; // 0x541 Mov
	var_475_int = 0; var_476_object = Obj(); var_477_int = 0; // 0x542 PushV
	var_476_object = var_462_object; // 0x543 Mov
	var_477_int = var_458_int; // 0x544 Mov
	func_1061(var_477_int); // 0x545 NEW_2
	var_474_int = var_475_int; // 0x546 Mov
	func_2234(var_471_float, var_472_object, var_473_float, var_474_int); // 0x548 NEW_2
	var_464_float = var_471_float; // 0x549 Mov
	var_532_int = 0; // 0x54b PushV
	func_1711(var_532_int); // 0x54c NEW_2
	ReportHit(var_0_bool, var_532_int, var_464_float, var_463_float); // 0x54e Func
	var_533_object = Obj(); var_534_float = 0; // 0x550 PushV
	var_533_object = var_462_object; // 0x551 Mov
	var_534_float = var_464_float; // 0x552 Mov
	func_1718(); // 0x553 NEW_2
	
Label_1365:
	return 6; // 0x555 Return
}


func_2871(var_59_int)
{
	var_61_bool = 0; // 0xb38 PushV
	func_3087(var_61_bool); // 0xb39 NEW_2
	if(var_61_bool == 0) goto Label_2878; // 0xb3b JumpB
	var_59_int = 2; // 0xb3c MovI
	goto Label_2879; // 0xb3d Jump
	
Label_2879:
	return 0; // 0xb3f Return
	
Label_2878:
	var_59_int = 0; // 0xb3e MovI
}


func_826(var_0_bool)
{
	var_76_object = Obj(); // 0x33a PushV
	var_76_object = var_0_bool; // 0x33b MovT
	func_2514(var_76_object); // 0x33c NEW_2
	return 0; // 0x33e Return
}


func_2880(var_67_object)
{
	var_68_object = Obj(); // 0xb41 PushV
	var_68_object = var_67_object; // 0xb42 Mov
	TaskCall(3); // 0xb43 TaskCall
	func_775(var_69_object, var_68_object); // 0xb44 NEW_2
	TaskReturn(); // 0xb45 TaskReturn
	return 0; // 0xb47 Return
}


func_2372(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x944 PushV
	var_48_bool = var_33_object == 0; // 0x945 NullEq
	if(var_48_bool == 0) goto Label_2376; // 0x946 JumpB
	return 14; // 0x947 Return
	
Label_2376:
	IsDead(var_41_bool); // 0x948 Func
	var_49_bool = var_41_bool; // 0x94a Push
	if(var_49_bool == 0) goto Label_2381; // 0x94b JumpB
	return 14; // 0x94c Return
	
Label_2381:
	GetSecondaryAnimationType(var_42_int); // 0x94d Func
	var_50_int = 0; // 0x94f PushI
	var_51_bool = var_42_int < var_50_int; // 0x950 LT
	if(var_51_bool == 0) goto Label_2387; // 0x951 JumpB
	return 14; // 0x952 Return
	
Label_2387:
	GetPosition(var_43_cvector); // 0x953 ObjFunc
	GetPosition(var_44_cvector); // 0x955 Func
	GetDirection(var_45_cvector); // 0x957 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x959 Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x95a PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x95b PushE
	var_54_float = var_52_float * var_53_float; // 0x95c Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x95d PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x95e PushE
	var_57_float = var_55_float * var_56_float; // 0x95f Mult
	var_58_int = var_54_float + var_57_float; // 0x960 Add
	var_59_int = 0; // 0x961 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x962 GE
	if(var_60_bool == 0) goto Label_2406; // 0x963 JumpB
	var_47_string = "fhit"; // 0x964 MovS
	goto Label_2407; // 0x965 Jump
	
Label_2407:
	var_61_string = "hit_react"; // 0x967 PushS
	var_62_string = "1"; // 0x968 PushS
	var_63_int = var_47_string + var_62_string; // 0x969 Add
	var_64_string = "2"; // 0x96a PushS
	var_65_int = var_47_string + var_64_string; // 0x96b Add
	var_66_int = -10; // 0x96c PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x96d Func
	return 14; // 0x96f Return
	
Label_2406:
	var_47_string = "bhit"; // 0x966 MovS
}


func_2888(var_86_int, var_87_object)
{
	var_88_bool = 0; var_89_object = Obj(); // 0xb49 PushV
	var_89_object = var_87_object; // 0xb4a Mov
	func_2348(var_88_bool, var_89_object); // 0xb4b NEW_2
	if(var_88_bool == 0) goto Label_2896; // 0xb4d JumpB
	var_86_int = 2; // 0xb4e MovI
	goto Label_2897; // 0xb4f Jump
	
Label_2897:
	return 0; // 0xb51 Return
	
Label_2896:
	var_86_int = 0; // 0xb50 MovI
}


func_2898(var_123_object)
{
	var_124_object = Obj(); // 0xb53 PushV
	var_124_object = var_123_object; // 0xb54 Mov
	TaskCall(4); // 0xb55 TaskCall
	func_1050(var_124_object); // 0xb56 NEW_2
	TaskReturn(); // 0xb57 TaskReturn
	return 0; // 0xb59 Return
}


func_1367(var_0_bool, var_420_bool, var_421_float)
{
	var_422_int = 0; var_423_bool = 0; var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_bool = 0; var_428_int = 0; var_429_string = ""; // 0x557 PushV
	func_1706(var_429_string); // 0x559 NEW_2
	irand(var_426_int, var_429_string); // 0x55b Func
	var_430_int = 1; // 0x55d PushI
	var_426_int = var_426_int + var_430_int; // 0x55e Add2
	Face(var_0_bool); // 0x55f Func
	var_431_bool = 1; // 0x561 PushB
	SetAttackState(var_431_bool); // 0x562 Func
	func_2663(); // 0x565 NEW_2
	var_436_string = "all"; // 0x567 PushS
	var_437_string = "attack_begin"; // 0x568 PushS
	var_438_int = var_437_string + var_426_int; // 0x569 Add
	PlayAnimation(var_436_string, var_438_int); // 0x56a Func
	WaitForAnimEnd(); // 0x56c Func
	func_1674(var_428_int, var_429_string); // 0x56f NEW_2
	var_454_bool = 0; var_455_object = Obj(); // 0x571 PushV
	var_455_object = var_0_bool; // 0x572 MovT
	func_2348(var_454_bool, var_455_object); // 0x573 NEW_2
	var_456_bool = var_454_bool == 0; // 0x575 Not
	if(var_456_bool == 0) goto Label_1403; // 0x576 JumpB
	StopAsync(); // 0x577 Func
	var_420_bool = 0; // 0x579 MovB
	return 8; // 0x57a Return
	
Label_1403:
	var_457_float = 0; var_458_int = 0; // 0x57b PushV
	var_457_float = var_421_float; // 0x57c Mov
	var_458_int = var_426_int; // 0x57d Mov
	func_1328(var_429_string, var_457_float, var_458_int); // 0x57e NEW_2
	var_535_string = "all"; // 0x580 PushS
	var_536_string = "attack_middle"; // 0x581 PushS
	var_537_int = var_536_string + var_426_int; // 0x582 Add
	HasAnimation(var_427_bool, var_535_string, var_537_int); // 0x583 Func
	var_538_bool = var_427_bool; // 0x585 Push
	if(var_538_bool == 0) goto Label_1484; // 0x586 JumpB
	func_2663(); // 0x588 NEW_2
	var_539_string = "all"; // 0x58a PushS
	var_540_string = "attack_middle"; // 0x58b PushS
	var_541_int = var_540_string + var_426_int; // 0x58c Add
	PlayAnimation(var_539_string, var_541_int); // 0x58d Func
	WaitForAnimEnd(); // 0x58f Func
	func_1706(var_429_string); // 0x592 NEW_2
	var_542_bool = 0; var_543_object = Obj(); // 0x594 PushV
	var_543_object = var_0_bool; // 0x595 MovT
	func_2348(var_542_bool, var_543_object); // 0x596 NEW_2
	var_544_bool = var_542_bool == 0; // 0x598 Not
	if(var_544_bool == 0) goto Label_1438; // 0x599 JumpB
	StopAsync(); // 0x59a Func
	var_420_bool = 0; // 0x59c MovB
	return 8; // 0x59d Return
	
Label_1438:
	var_545_float = 0; var_546_int = 0; // 0x59e PushV
	var_545_float = var_421_float; // 0x59f Mov
	var_546_int = var_426_int; // 0x5a0 Mov
	func_1328(var_429_string, var_545_float, var_546_int); // 0x5a1 NEW_2
	var_428_int = 1; // 0x5a3 MovI
	
Label_1444:
	var_547_string = "attack_middle"; // 0x5a4 PushS
	var_548_int = var_547_string + var_426_int; // 0x5a5 Add
	var_549_string = "_"; // 0x5a6 PushS
	var_550_int = var_548_int + var_549_string; // 0x5a7 Add
	var_429_string = var_550_int + var_428_int; // 0x5a8 Add2
	var_551_string = "all"; // 0x5a9 PushS
	HasAnimation(var_427_bool, var_551_string, var_429_string); // 0x5aa Func
	var_552_bool = var_427_bool == 0; // 0x5ac Not
	if(var_552_bool == 0) goto Label_1455; // 0x5ad JumpB
	goto Label_1484; // 0x5ae Jump
	
Label_1484:
	var_553_bool = 0; // 0x5cc PushB
	SetAttackState(var_553_bool); // 0x5cd Func
	var_554_string = "all"; // 0x5cf PushS
	var_555_string = "attack_end"; // 0x5d0 PushS
	var_556_int = var_555_string + var_426_int; // 0x5d1 Add
	PlayAnimation(var_554_string, var_556_int); // 0x5d2 Func
	var_557_bool = 0; // 0x5d4 PushV
	func_1720(var_557_bool); // 0x5d5 NEW_2
	if(var_557_bool == 0) goto Label_1502; // 0x5d7 JumpB
	var_558_bool = 0; var_559_float = 0; // 0x5d8 PushV
	var_559_float = 0.75; // 0x5d9 MovF
	func_1504(var_558_bool, var_559_float); // 0x5da NEW_2
	StopAsync(); // 0x5dc Func
	
Label_1502:
	var_420_bool = 1; // 0x5de MovB
	return 8; // 0x5df Return
	
Label_1455:
	func_2663(); // 0x5b0 NEW_2
	var_567_string = "all"; // 0x5b2 PushS
	PlayAnimation(var_567_string, var_429_string); // 0x5b3 Func
	WaitForAnimEnd(); // 0x5b5 Func
	func_1706(var_429_string); // 0x5b8 NEW_2
	var_568_bool = 0; var_569_object = Obj(); // 0x5ba PushV
	var_569_object = var_0_bool; // 0x5bb MovT
	func_2348(var_568_bool, var_569_object); // 0x5bc NEW_2
	var_570_bool = var_568_bool == 0; // 0x5be Not
	if(var_570_bool == 0) goto Label_1476; // 0x5bf JumpB
	StopAsync(); // 0x5c0 Func
	var_420_bool = 0; // 0x5c2 MovB
	return 8; // 0x5c3 Return
	
Label_1476:
	var_571_float = 0; var_572_int = 0; // 0x5c4 PushV
	var_571_float = var_421_float; // 0x5c5 Mov
	var_572_int = var_426_int; // 0x5c6 Mov
	func_1328(var_429_string, var_571_float, var_572_int); // 0x5c7 NEW_2
	var_573_int = 1; // 0x5c9 PushI
	var_428_int = var_428_int + var_573_int; // 0x5ca Add2
	goto Label_1444; // 0x5cb Jump
}


func_2906(var_32_bool, var_33_object, var_34_bool)
{
	var_35_string = ""; var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0xb5a PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0xb5b PushV
	var_40_object = var_33_object; // 0xb5c Mov
	var_41_string = "class"; // 0xb5d MovS
	func_2222(var_39_bool, var_40_object, var_41_string); // 0xb5e NEW_2
	var_48_bool = var_39_bool == 0; // 0xb60 Not
	if(var_48_bool == 0) goto Label_2916; // 0xb61 JumpB
	var_32_bool = 0; // 0xb62 MovB
	return 4; // 0xb63 Return
	
Label_2916:
	var_49_string = "class"; // 0xb64 PushS
	GetProperty(var_49_string, var_37_string); // 0xb65 Func
	var_50_string = "class"; // 0xb67 PushS
	GetProperty(var_50_string, var_38_string); // 0xb68 ObjFunc
	var_51_bool = 0; // 0xb6a PushV
	var_51_bool = 0; // 0xb6b MovB
	var_52_bool = var_34_bool == 0; // 0xb6c Not
	if(var_52_bool == 0) goto Label_2929; // 0xb6d JumpB
	var_53_bool = var_37_string == var_38_string; // 0xb6e Eq
	if(var_53_bool == 0) goto Label_2929; // 0xb6f JumpB
	var_51_bool = 1; // 0xb70 MovB
	
Label_2929:
	if(var_51_bool == 0) goto Label_2932; // 0xb71 JumpB
	var_32_bool = 1; // 0xb72 MovB
	return 4; // 0xb73 Return
	
Label_2932:
	var_54_string = "rat"; // 0xb74 PushS
	var_55_bool = var_38_string == var_54_string; // 0xb75 Eq
	if(var_55_bool == 0) goto Label_2938; // 0xb76 JumpB
	var_32_bool = 0; // 0xb77 MovB
	return 4; // 0xb78 Return
	
Label_2938:
	var_56_string = "rat_big"; // 0xb7a PushS
	var_57_bool = var_38_string == var_56_string; // 0xb7b Eq
	if(var_57_bool == 0) goto Label_2944; // 0xb7c JumpB
	var_32_bool = 0; // 0xb7d MovB
	return 4; // 0xb7e Return
	
Label_2944:
	var_58_string = "dog"; // 0xb80 PushS
	var_59_bool = var_38_string == var_58_string; // 0xb81 Eq
	if(var_59_bool == 0) goto Label_2950; // 0xb82 JumpB
	var_32_bool = 0; // 0xb83 MovB
	return 4; // 0xb84 Return
	
Label_2950:
	var_60_string = "grabitel"; // 0xb86 PushS
	var_61_bool = var_38_string == var_60_string; // 0xb87 Eq
	if(var_61_bool == 0) goto Label_2956; // 0xb88 JumpB
	var_32_bool = 0; // 0xb89 MovB
	return 4; // 0xb8a Return
	
Label_2956:
	var_62_string = "bomber"; // 0xb8c PushS
	var_63_bool = var_38_string == var_62_string; // 0xb8d Eq
	if(var_63_bool == 0) goto Label_2962; // 0xb8e JumpB
	var_32_bool = 0; // 0xb8f MovB
	return 4; // 0xb90 Return
	
Label_2962:
	var_64_string = "sanitar"; // 0xb92 PushS
	var_65_bool = var_38_string == var_64_string; // 0xb93 Eq
	if(var_65_bool == 0) goto Label_2968; // 0xb94 JumpB
	var_32_bool = 0; // 0xb95 MovB
	return 4; // 0xb96 Return
	
Label_2968:
	var_66_string = "hunter"; // 0xb98 PushS
	var_67_bool = var_38_string == var_66_string; // 0xb99 Eq
	if(var_67_bool == 0) goto Label_2974; // 0xb9a JumpB
	var_32_bool = 0; // 0xb9b MovB
	return 4; // 0xb9c Return
	
Label_2974:
	var_68_string = "soldier"; // 0xb9e PushS
	var_69_bool = var_38_string == var_68_string; // 0xb9f Eq
	if(var_69_bool == 0) goto Label_2979; // 0xba0 JumpB
	var_32_bool = 0; // 0xba1 MovB
	return 4; // 0xba2 Return
	
Label_2979:
	var_32_bool = 1; // 0xba3 MovB
	return 4; // 0xba4 Return
}


func_367(var_2_bool)
{
	var_17_int = 110; // 0x16f PushI
	KillTimer(var_17_int); // 0x170 Func
	var_2_bool = 0; // 0x172 TMovB
	func_503(var_15_cvector, var_16_bool); // 0x174 NEW_2
	return 0; // 0x176 Return
}


func_2416(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x970 PushV
	var_41_bool = 0; // 0x971 PushV
	var_41_bool = 0; // 0x972 MovB
	var_42_bool = 0; // 0x973 PushV
	var_42_bool = 0; // 0x974 MovB
	var_43_object = var_20_object; // 0x975 Push
	if(var_43_object == 0) goto Label_2427; // 0x976 JumpB
	var_44_int = 4; // 0x977 PushI
	var_45_bool = var_21_int != var_44_int; // 0x978 Neq
	if(var_45_bool == 0) goto Label_2427; // 0x979 JumpB
	var_42_bool = 1; // 0x97a MovB
	
Label_2427:
	if(var_42_bool == 0) goto Label_2432; // 0x97b JumpB
	var_46_int = 5; // 0x97c PushI
	var_47_bool = var_21_int != var_46_int; // 0x97d Neq
	if(var_47_bool == 0) goto Label_2432; // 0x97e JumpB
	var_41_bool = 1; // 0x97f MovB
	
Label_2432:
	if(var_41_bool == 0) goto Label_2479; // 0x980 JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x981 PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x982 PushV
	var_51_object = var_20_object; // 0x983 Mov
	func_2202(var_51_object); // 0x984 NEW_2
	var_49_cvector = var_50_cvector; // 0x985 Mov
	func_2572(var_48_cvector, var_49_cvector); // 0x987 NEW_2
	var_32_cvector = var_48_cvector; // 0x988 Mov
	CreateVectorVector(var_33_object); // 0x98a Func
	var_34_int = 1; // 0x98c MovI
	
Label_2445:
	var_61_string = "hit"; // 0x98d PushS
	var_62_int = var_61_string + var_34_int; // 0x98e Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x98f Func
	var_63_bool = var_35_bool == 0; // 0x991 Not
	if(var_63_bool == 0) goto Label_2452; // 0x992 JumpB
	goto Label_2461; // 0x993 Jump
	
Label_2461:
	size(var_38_int); // 0x99d ObjFunc
	var_64_int = var_38_int; // 0x99f Push
	if(var_64_int == 0) goto Label_2478; // 0x9a0 JumpB
	irand(var_39_int, var_38_int); // 0x9a1 Func
	get(var_40_cvector, var_39_int); // 0x9a3 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x9a5 PushV
	var_65_object = var_20_object; // 0x9a6 Mov
	var_66_int = var_21_int; // 0x9a7 Mov
	var_67_float = var_22_float; // 0x9a8 Mov
	var_68_cvector = var_40_cvector; // 0x9a9 Mov
	var_69_cvector = -var_32_cvector; // 0x9aa Neg2
	func_2484(var_67_float, var_68_cvector, var_69_cvector); // 0x9ab NEW_2
	return 18; // 0x9ad Return
	
Label_2478:
	var_33_object = 0; // 0x9ae SetNull
	
Label_2479:
	var_110_object = Obj(); // 0x9af PushV
	var_110_object = var_20_object; // 0x9b0 Mov
	func_2372(var_110_object); // 0x9b1 NEW_2
	return 18; // 0x9b3 Return
	
Label_2452:
	var_111_int = var_37_cvector | var_32_cvector; // 0x994 Or
	var_112_float = 0.70711; // 0x995 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x996 GE
	if(var_113_bool == 0) goto Label_2458; // 0x997 JumpB
	add(var_36_cvector); // 0x998 ObjFunc
	
Label_2458:
	var_114_int = 1; // 0x99a PushI
	var_34_int = var_34_int + var_114_int; // 0x99b Add2
	goto Label_2445; // 0x99c Jump
}


func_375(var_2_bool)
{
	var_66_int = 110; // 0x177 PushI
	KillTimer(var_66_int); // 0x178 Func
	var_2_bool = 0; // 0x17a TMovB
	func_510(var_20_bool, var_21_int); // 0x17c NEW_2
	return 0; // 0x17e Return
}


func_392(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; // 0x188 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x189 PushV
	var_23_object = var_17_object; // 0x18a Mov
	func_2348(var_22_bool, var_23_object); // 0x18b NEW_2
	var_56_bool = var_22_bool == 0; // 0x18d Not
	if(var_56_bool == 0) goto Label_400; // 0x18e JumpB
	return 4; // 0x18f Return
	
Label_400:
	var_57_bool = var_2_bool; // 0x190 PushT
	if(var_57_bool == 0) goto Label_403; // 0x191 JumpB
	return 4; // 0x192 Return
	
Label_403:
	IsPlayerActor(var_17_object, var_20_bool); // 0x193 Func
	var_58_bool = var_20_bool == 0; // 0x195 Not
	if(var_58_bool == 0) goto Label_408; // 0x196 JumpB
	return 4; // 0x197 Return
	
Label_408:
	var_59_int = 0; var_60_object = Obj(); // 0x198 PushV
	var_60_object = var_17_object; // 0x199 Mov
	func_2871(var_60_object); // 0x19a NEW_2
	var_21_int = var_59_int; // 0x19b Mov
	var_62_int = 0; // 0x19d PushI
	var_63_bool = var_21_int > var_62_int; // 0x19e GT
	if(var_63_bool == 0) goto Label_431; // 0x19f JumpB
	var_64_int = 1; // 0x1a0 PushI
	var_65_bool = var_21_int > var_64_int; // 0x1a1 GT
	if(var_65_bool == 0) goto Label_422; // 0x1a2 JumpB
	func_375(var_21_int); // 0x1a4 NEW_2
	
Label_422:
	var_67_object = Obj(); // 0x1a6 PushV
	var_67_object = var_17_object; // 0x1a7 Mov
	func_2880(var_67_object); // 0x1a8 NEW_2
	var_2_bool = 1; // 0x1aa TMovB
	var_132_int = 110; // 0x1ab PushI
	var_133_float = 10.0; // 0x1ac PushF
	SetTimer(var_132_int, var_133_float); // 0x1ad Func
	
Label_431:
	return 4; // 0x1af Return
}


func_1940(var_0_bool, var_1_bool, var_24_int)
{
	var_25_int = 0; // 0x795 PushI
	var_26_bool = var_24_int != var_25_int; // 0x796 Neq
	if(var_26_bool == 0) goto Label_1945; // 0x797 JumpB
	return 0; // 0x798 Return
	
Label_1945:
	var_27_bool = 0; var_28_object = Obj(); // 0x799 PushV
	var_28_object = var_1_bool; // 0x79a MovT
	func_1978(var_27_bool, var_28_object); // 0x79b NEW_2
	var_63_bool = var_27_bool == 0; // 0x79d Not
	if(var_63_bool == 0) goto Label_1952; // 0x79e JumpB
	var_0_bool = 1; // 0x79f TMovB
	
Label_1952:
	var_64_int = 0; // 0x7a0 PushI
	KillTimer(var_64_int); // 0x7a1 Func
	Stop(); // 0x7a3 Func
	return 0; // 0x7a5 Return
}


func_2981(var_83_int, var_84_object)
{
	var_86_int = 0; var_87_object = Obj(); // 0xba6 PushV
	var_87_object = var_84_object; // 0xba7 Mov
	func_2888(var_86_int, var_87_object); // 0xba8 NEW_2
	var_83_int = var_86_int; // 0xba9 Mov
	return 0; // 0xbab Return
}


func_1962(var_0_bool)
{
	var_0_bool = 1; // 0x7aa TMovB
	var_20_int = 0; // 0x7ab PushI
	KillTimer(var_20_int); // 0x7ac Func
	Stop(); // 0x7ae Func
	return 0; // 0x7b0 Return
}


func_2988(var_122_object)
{
	var_123_object = Obj(); // 0xbad PushV
	var_123_object = var_122_object; // 0xbae Mov
	func_2898(var_123_object); // 0xbaf NEW_2
	return 0; // 0xbb1 Return
}


func_432(var_0_bool, var_1_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x1b0 PushV
	var_0_bool = 0; // 0x1b1 TMovB
	var_1_bool = 0; // 0x1b2 TMovB
	var_34_float = 0.5; // 0x1b3 PushF
	rand(var_28_float, var_34_float); // 0x1b4 Func
	Sleep(var_28_float); // 0x1b6 Func
	
Label_440:
	var_35_bool = var_0_bool == 0; // 0x1b8 Not
	if(var_35_bool == 0) goto Label_490; // 0x1b9 JumpB
	var_36_bool = var_1_bool == 0; // 0x1ba Not
	if(var_36_bool == 0) goto Label_459; // 0x1bb JumpB
	
Label_444:
	GetPosition(var_30_cvector); // 0x1bc Func
	var_37_float = 0; // 0x1be PushV
	func_491(var_37_float); // 0x1bf NEW_2
	GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool); // 0x1c1 Func
	var_40_bool = var_31_bool; // 0x1c3 Push
	if(var_40_bool == 0) goto Label_454; // 0x1c4 JumpB
	goto Label_458; // 0x1c5 Jump
	
Label_458:
	goto Label_460; // 0x1ca Jump
	
Label_460:
	var_41_object = Obj(); var_42_cvector = CVector(0,0,0); // 0x1cc PushV
	var_42_cvector = var_29_cvector; // 0x1cd Mov
	func_519(var_41_object, var_42_cvector); // 0x1ce NEW_2
	var_32_object = var_41_object; // 0x1cf Mov
	var_45_bool = var_32_object != 0; // 0x1d1 NullNeq
	if(var_45_bool == 0) goto Label_485; // 0x1d2 JumpB
	RotatePath(var_32_object, var_33_bool); // 0x1d3 Func
	var_46_bool = var_33_bool; // 0x1d5 Push
	if(var_46_bool == 0) goto Label_484; // 0x1d6 JumpB
	var_47_bool = 0; // 0x1d7 PushV
	func_517(var_47_bool); // 0x1d8 NEW_2
	FollowPath(var_32_object, var_47_bool, var_33_bool); // 0x1da Func
	var_32_object = 0; // 0x1dc SetNull
	var_48_bool = var_33_bool; // 0x1dd Push
	if(var_48_bool == 0) goto Label_484; // 0x1de JumpB
	TaskCall(2); // 0x1e0 TaskCall
	func_689(); // 0x1e1 NEW_2
	TaskReturn(); // 0x1e2 TaskReturn
	
Label_484:
	goto Label_488; // 0x1e4 Jump
	
Label_488:
	var_32_object = 0; // 0x1e8 SetNull
	goto Label_440; // 0x1e9 Jump
	
Label_485:
	var_100_int = 1; // 0x1e5 PushI
	Sleep(var_100_int); // 0x1e6 Func
	
Label_454:
	var_101_int = 1; // 0x1c6 PushI
	Sleep(var_101_int); // 0x1c7 Func
	goto Label_444; // 0x1c9 Jump
	
Label_459:
	var_1_bool = 0; // 0x1cb TMovB
	
Label_490:
	return 12; // 0x1ea Return
}


func_2994(var_25_bool, var_26_object, var_27_object, var_28_float, var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0xbb2 PushV
	var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; // 0xbb3 PushV
	var_33_object = var_27_object; // 0xbb4 Mov
	var_34_bool = !var_29_bool; // 0xbb5 Not2
	func_2906(var_32_bool, var_33_object, var_34_bool); // 0xbb6 NEW_2
	var_70_bool = var_32_bool == 0; // 0xbb8 Not
	if(var_70_bool == 0) goto Label_3004; // 0xbb9 JumpB
	var_25_bool = 0; // 0xbba MovB
	return 2; // 0xbbb Return
	
Label_3004:
	CanSee(var_31_bool, var_26_object); // 0xbbc Func
	var_71_bool = 0; // 0xbbe PushV
	var_71_bool = 1; // 0xbbf MovB
	var_72_bool = var_31_bool; // 0xbc0 Push
	if(var_72_bool == 0) goto Label_3018; // 0xbc1 JumpB
	var_73_float = 0; var_74_object = Obj(); // 0xbc2 PushV
	var_74_object = var_26_object; // 0xbc3 Mov
	func_2209(var_74_object); // 0xbc4 NEW_2
	var_81_float = var_28_float * var_28_float; // 0xbc6 Mult
	var_82_bool = var_73_float <= var_81_float; // 0xbc7 LE
	if(var_82_bool == 0) goto Label_3018; // 0xbc8 JumpB
	var_71_bool = 0; // 0xbc9 MovB
	
Label_3018:
	if(var_71_bool == 0) goto Label_3021; // 0xbca JumpB
	var_25_bool = 1; // 0xbcb MovB
	return 2; // 0xbcc Return
	
Label_3021:
	var_25_bool = 0; // 0xbcd MovB
	return 2; // 0xbce Return
}


func_2484(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x9b4 PushV
	GetScene(var_29_object); // 0x9b5 Func
	var_31_string = "scripted"; // 0x9b7 PushS
	var_32_string = "blood_dir.xml"; // 0x9b8 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x9b9 Func
	var_33_object = Obj(); // 0x9bb PushV
	var_33_object = var_22_object; // 0x9bc Mov
	func_2372(var_33_object); // 0x9bd NEW_2
	return 4; // 0x9bf Return
}


func_1978(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x7bb PushV
	var_30_object = var_28_object; // 0x7bc Mov
	func_2348(var_29_bool, var_30_object); // 0x7bd NEW_2
	var_27_bool = var_29_bool; // 0x7be Mov
	return 0; // 0x7c0 Return
}


func_1985(var_271_string)
{
	var_271_string = "walk"; // 0x7c1 MovS
	return 0; // 0x7c2 Return
}


func_2498()
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x9c2 PushV
	GetPosition(var_96_cvector); // 0x9c3 ObjFunc
	GetPosition(var_97_cvector); // 0x9c5 Func
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x9c7 Sub2
	var_99_float = GetByIndex(var_98_cvector, 0); // 0x9c8 PushE
	var_100_float = GetByIndex(var_98_cvector, 2); // 0x9c9 PushE
	RotateAsync(var_99_float, var_100_float); // 0x9ca Func
	return 6; // 0x9cc Return
}


func_1987(var_272_string)
{
	var_272_string = "run"; // 0x7c3 MovS
	return 0; // 0x7c4 Return
}


func_1996(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x7cc PushV
	GetPosition(var_38_cvector); // 0x7cd Func
	GetPosition(var_39_cvector); // 0x7cf TObjFunc
	GetDirection(var_40_cvector); // 0x7d1 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x7d3 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x7d4 PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x7d5 Sub2
	func_2572(var_46_cvector, var_47_cvector); // 0x7d6 NEW_2
	var_53_float = 0.75; // 0x7d8 PushF
	var_54_float = var_40_cvector * var_53_float; // 0x7d9 Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x7da Add2
	func_2572(var_44_cvector, var_45_cvector); // 0x7db NEW_2
	var_41_cvector = var_44_cvector; // 0x7dc Mov
	var_55_int = 32; // 0x7de PushI
	var_56_float = 7000.0; // 0x7df PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x7e0 Func
	var_57_int = 100; // 0x7e2 PushI
	var_43_float = var_43_float - var_57_int; // 0x7e3 Sub2
	var_58_int = 0; // 0x7e4 PushI
	var_59_bool = var_43_float < var_58_int; // 0x7e5 LT
	if(var_59_bool == 0) goto Label_2024; // 0x7e6 JumpB
	var_43_float = 0; // 0x7e7 MovI
	
Label_2024:
	var_30_cvector = var_42_cvector * var_43_float; // 0x7e8 Mult2
	return 12; // 0x7e9 Return
}


func_2509(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0x9cd PushV
	IsLoaded(var_20_bool); // 0x9ce Func
	var_18_bool = var_20_bool; // 0x9d0 Mov
	return 2; // 0x9d1 Return
}


func_974()
{
	StopGroup0(); // 0x3ce Func
	StopAsync(); // 0x3d0 Func
	var_29_string = "head"; // 0x3d2 PushS
	UnlookAsync(var_29_string); // 0x3d3 Func
	var_30_int = 111; // 0x3d5 PushI
	KillTimer(var_30_int); // 0x3d6 Func
	return 0; // 0x3d8 Return
}


func_3023(var_19_int)
{
	var_19_int = 0; // 0xbd0 MovI
	return 0; // 0xbd1 Return
}


func_3026()
{
	return 0; // 0xbd3 Return
}


func_2514(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); // 0x9d2 PushV
	GetEyesHeight(var_23_float); // 0x9d3 ObjFunc
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x9d5 MovV
	var_25_float = GetByIndex(var_24_cvector, 1); // 0x9d6 PushE
	var_25_float = var_23_float; // 0x9d7 Mov
	SetByIndex(var_24_cvector, 1) = var_25_float; // 0x9d8 PopE
	var_26_string = "head"; // 0x9d9 PushS
	LookAsync(var_20_object, var_26_string, var_24_cvector); // 0x9da Func
	return 4; // 0x9dc Return
}


func_3028(var_133_int)
{
	var_133_int = 0; // 0xbd5 MovI
	return 0; // 0xbd6 Return
}


func_3031()
{
	return 0; // 0xbd8 Return
}


func_3033(var_19_int)
{
	var_19_int = 2; // 0xbda MovI
	return 0; // 0xbdb Return
}


func_3036(var_27_object)
{
	var_28_object = Obj(); // 0xbdd PushV
	var_28_object = var_27_object; // 0xbde Mov
	func_3085(); // 0xbdf NEW_2
	return 0; // 0xbe1 Return
}


func_2525(var_42_string)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x9dd PushV
	IsExisting3DSound(var_51_bool, var_42_string); // 0x9de Func
	var_59_bool = var_51_bool == 0; // 0x9e0 Not
	if(var_59_bool == 0) goto Label_2550; // 0x9e1 JumpB
	var_52_int = 0; // 0x9e2 MovI
	
Label_2531:
	var_60_int = 1; // 0x9e3 PushI
	var_61_int = var_52_int + var_60_int; // 0x9e4 Add
	var_62_int = var_42_string + var_61_int; // 0x9e5 Add
	IsExisting3DSound(var_53_bool, var_62_int); // 0x9e6 Func
	var_63_bool = var_53_bool == 0; // 0x9e8 Not
	if(var_63_bool == 0) goto Label_2539; // 0x9e9 JumpB
	goto Label_2542; // 0x9ea Jump
	
Label_2542:
	var_64_bool = var_52_int == 0; // 0x9ee Not
	if(var_64_bool == 0) goto Label_2545; // 0x9ef JumpB
	return 16; // 0x9f0 Return
	
Label_2545:
	irand(var_54_int, var_52_int); // 0x9f1 Func
	var_65_int = 1; // 0x9f3 PushI
	var_66_int = var_54_int + var_65_int; // 0x9f4 Add
	var_42_string = var_42_string + var_66_int; // 0x9f5 Add2
	
Label_2550:
	Is3DSoundLoaded(var_55_bool, var_42_string); // 0x9f6 Func
	var_67_bool = var_55_bool; // 0x9f8 Push
	if(var_67_bool == 0) goto Label_2565; // 0x9f9 JumpB
	GetEyesHeight(var_56_float); // 0x9fa Func
	GetDirection(var_57_cvector); // 0x9fc Func
	var_68_int = 50; // 0x9fe PushI
	var_58_cvector = var_57_cvector * var_68_int; // 0x9ff Mult2
	var_69_float = GetByIndex(var_58_cvector, 1); // 0xa00 PushE
	var_69_float = var_69_float + var_56_float; // 0xa01 Add2
	SetByIndex(var_58_cvector, 1) = var_69_float; // 0xa02 PopE
	PlayGlobalSound(var_42_string, var_58_cvector); // 0xa03 Func
	
Label_2565:
	return 16; // 0xa05 Return
	
Label_2539:
	var_70_int = 1; // 0x9eb PushI
	var_52_int = var_52_int + var_70_int; // 0x9ec Add2
	goto Label_2531; // 0x9ed Jump
}


func_1504(var_558_bool, var_559_float)
{
	var_560_float = 0; var_561_bool = 0; var_562_float = 0; var_563_bool = 0; // 0x5e0 PushV
	rand(var_562_float); // 0x5e1 Func
	var_564_bool = var_562_float < var_559_float; // 0x5e3 LT
	if(var_564_bool == 0) goto Label_1524; // 0x5e4 JumpB
	
Label_1509:
	IsAnimationPlaying(var_563_bool); // 0x5e5 Func
	var_565_bool = var_563_bool == 0; // 0x5e7 Not
	if(var_565_bool == 0) goto Label_1514; // 0x5e8 JumpB
	goto Label_1523; // 0x5e9 Jump
	
Label_1523:
	goto Label_1529; // 0x5f3 Jump
	
Label_1529:
	var_558_bool = 0; // 0x5f9 MovB
	return 4; // 0x5fa Return
	
Label_1514:
	var_566_bool = 0; // 0x5ea PushV
	func_1602(var_566_bool); // 0x5eb NEW_2
	if(var_566_bool == 0) goto Label_1520; // 0x5ed JumpB
	var_558_bool = 1; // 0x5ee MovB
	return 4; // 0x5ef Return
	
Label_1520:
	sync(); // 0x5f0 Func
	goto Label_1509; // 0x5f2 Jump
	
Label_1524:
	WaitForAnimEnd(); // 0x5f4 Func
	func_1706(var_563_bool); // 0x5f7 NEW_2
}


func_3042()
{
	return 0; // 0xbe2 Return
}


func_3043(var_22_bool)
{
	var_22_bool = 0; // 0xbe4 MovB
	return 0; // 0xbe5 Return
}


func_3046()
{
	return 0; // 0xbe7 Return
}


func_3048(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0xbe8 PushV
	CanSee(var_32_bool, var_30_object); // 0xbe9 Func
	var_29_bool = 1; // 0xbeb MovB
	var_33_bool = var_32_bool; // 0xbec Push
	if(var_33_bool == 0) goto Label_3062; // 0xbed JumpB
	var_34_float = 0; var_35_object = Obj(); // 0xbee PushV
	var_35_object = var_30_object; // 0xbef Mov
	func_2209(var_35_object); // 0xbf0 NEW_2
	var_42_int = 4000000; // 0xbf2 PushI
	var_43_bool = var_34_float <= var_42_int; // 0xbf3 LE
	if(var_43_bool == 0) goto Label_3062; // 0xbf4 JumpB
	var_29_bool = 0; // 0xbf5 MovB
	
Label_3062:
	return 2; // 0xbf6 Return
}


func_2026(var_0_bool, var_1_bool, var_2_bool, var_58_object)
{
	var_62_cvector = CVector(0,0,0); var_63_float = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_float = 0; // 0x7ea PushV
	var_0_bool = var_58_object; // 0x7eb TMov
	var_72_cvector = CVector(0,0,0); var_73_float = 0; // 0x7ec PushV
	var_73_float = 1.74533; // 0x7ed MovF
	func_1996(var_72_cvector, var_73_float); // 0x7ee NEW_2
	var_67_cvector = var_72_cvector; // 0x7ef Mov
	var_68_float = var_67_cvector | var_67_cvector; // 0x7f1 Or2
	var_102_float = 2500.0; // 0x7f2 PushF
	var_103_bool = var_68_float < var_102_float; // 0x7f3 LT
	if(var_103_bool == 0) goto Label_2055; // 0x7f4 JumpB
	var_104_cvector = CVector(0,0,0); var_105_float = 0; // 0x7f5 PushV
	var_105_float = 2.61799; // 0x7f6 MovF
	func_1996(var_104_cvector, var_105_float); // 0x7f7 NEW_2
	var_67_cvector = var_104_cvector; // 0x7f8 Mov
	var_68_float = var_67_cvector | var_67_cvector; // 0x7fa Or2
	var_106_float = 2500.0; // 0x7fb PushF
	var_107_bool = var_68_float < var_106_float; // 0x7fc LT
	if(var_107_bool == 0) goto Label_2055; // 0x7fd JumpB
	var_108_string = "Can't retreat, distance: "; // 0x7fe PushS
	var_109_float = sqrt(var_68_float); // 0x7ff Sqrt
	var_110_int = var_108_string + var_109_float; // 0x800 Add
	Trace(var_110_int); // 0x801 Func
	var_111_float = 0.5; // 0x803 PushF
	Sleep(var_111_float); // 0x804 Func
	return 10; // 0x806 Return
	
Label_2055:
	var_112_float = GetByIndex(var_67_cvector, 0); // 0x807 PushE
	var_113_float = GetByIndex(var_67_cvector, 2); // 0x808 PushE
	Rotate(var_112_float, var_113_float); // 0x809 Func
	var_114_cvector = CVector(0,0,0); // 0x80b PushV
	func_2197(var_114_cvector); // 0x80c NEW_2
	var_1_bool = var_114_cvector + var_67_cvector; // 0x80e Add2
	var_117_int = 120; // 0x80f PushI
	var_118_float = 0.5; // 0x810 PushF
	SetTimer(var_117_int, var_118_float); // 0x811 Func
	var_2_bool = 0; // 0x813 TMovB
	
Label_2068:
	var_119_int = 1; // 0x814 PushI
	MovePoint(var_119_int, var_119_int, var_69_bool); // 0x815 Func
	var_120_bool = var_69_bool; // 0x817 Push
	if(var_120_bool == 0) goto Label_2096; // 0x818 JumpB
	var_121_bool = var_0_bool == 0; // 0x819 NullEq
	if(var_121_bool == 0) goto Label_2077; // 0x81a JumpB
	goto Label_2098; // 0x81b Jump
	
Label_2098:
	return 10; // 0x832 Return
	
Label_2077:
	var_122_cvector = CVector(0,0,0); var_123_float = 0; // 0x81d PushV
	var_123_float = 2.61799; // 0x81e MovF
	func_1996(var_122_cvector, var_123_float); // 0x81f NEW_2
	var_70_cvector = var_122_cvector; // 0x820 Mov
	var_71_float = var_70_cvector | var_70_cvector; // 0x822 Or2
	var_124_float = 2500.0; // 0x823 PushF
	var_125_bool = var_71_float >= var_124_float; // 0x824 GE
	if(var_125_bool == 0) goto Label_2095; // 0x825 JumpB
	var_126_cvector = CVector(0,0,0); // 0x826 PushV
	func_2197(var_126_cvector); // 0x827 NEW_2
	var_1_bool = var_126_cvector + var_70_cvector; // 0x829 Add2
	var_127_int = 120; // 0x82a PushI
	var_128_float = 0.5; // 0x82b PushF
	SetTimer(var_127_int, var_128_float); // 0x82c Func
	goto Label_2096; // 0x82e Jump
	
Label_2096:
	var_129_bool = var_2_bool == 0; // 0x830 Not
	if(var_129_bool == 0) goto Label_2068; // 0x831 JumpB
	
Label_2095:
	goto Label_2098; // 0x82f Jump
}


func_491(var_37_float)
{
	var_38_float = 0; var_39_float = 0; // 0x1eb PushV
	GetCameraFarDistance(var_39_float); // 0x1ec Func
	var_37_float = var_39_float; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1f7 TMovB
	var_1_bool = 0; // 0x1f8 TMovB
	Stop(); // 0x1f9 Func
	StopGroup0(); // 0x1fb Func
	return 0; // 0x1fd Return
}


func_1531(var_0_bool, var_359_bool, var_360_float)
{
	var_361_bool = 0; var_362_cvector = CVector(0,0,0); var_363_cvector = CVector(0,0,0); var_364_cvector = CVector(0,0,0); var_365_float = 0; var_366_bool = 0; var_367_cvector = CVector(0,0,0); var_368_cvector = CVector(0,0,0); var_369_cvector = CVector(0,0,0); var_370_float = 0; // 0x5fb PushV
	
Label_1532:
	IsAnimationPlaying(var_366_bool); // 0x5fc Func
	var_371_bool = var_366_bool == 0; // 0x5fe Not
	if(var_371_bool == 0) goto Label_1537; // 0x5ff JumpB
	goto Label_1569; // 0x600 Jump
	
Label_1569:
	func_1706(var_370_float); // 0x622 NEW_2
	var_359_bool = 0; // 0x624 MovB
	return 10; // 0x625 Return
	
Label_1537:
	var_372_bool = 0; // 0x601 PushV
	func_1602(var_372_bool); // 0x602 NEW_2
	if(var_372_bool == 0) goto Label_1543; // 0x604 JumpB
	var_359_bool = 1; // 0x605 MovB
	return 10; // 0x606 Return
	
Label_1543:
	var_415_bool = 0; var_416_object = Obj(); // 0x607 PushV
	var_416_object = var_0_bool; // 0x608 MovT
	func_2348(var_415_bool, var_416_object); // 0x609 NEW_2
	var_417_bool = var_415_bool == 0; // 0x60b Not
	if(var_417_bool == 0) goto Label_1551; // 0x60c JumpB
	var_359_bool = 0; // 0x60d MovB
	return 10; // 0x60e Return
	
Label_1551:
	GetPFPosition(var_367_cvector); // 0x60f TObjFunc
	GetPFPosition(var_368_cvector); // 0x611 Func
	var_369_cvector = var_367_cvector - var_368_cvector; // 0x613 Sub2
	var_370_float = var_369_cvector | var_369_cvector; // 0x614 Or2
	var_418_float = var_360_float * var_360_float; // 0x615 Mult
	var_419_bool = var_370_float < var_418_float; // 0x616 LT
	if(var_419_bool == 0) goto Label_1566; // 0x617 JumpB
	var_420_bool = 0; var_421_float = 0; // 0x618 PushV
	var_421_float = var_360_float; // 0x619 Mov
	func_1367(var_370_float, var_420_bool, var_421_float); // 0x61a NEW_2
	var_359_bool = 1; // 0x61c MovB
	return 10; // 0x61d Return
	
Label_1566:
	sync(); // 0x61e Func
	goto Label_1532; // 0x620 Jump
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1fe TMovB
	var_1_bool = 1; // 0x1ff TMovB
	Stop(); // 0x200 Func
	StopGroup0(); // 0x202 Func
	return 0; // 0x204 Return
}


func_3071(var_46_bool)
{
	var_46_bool = 0; // 0xc00 MovB
	return 0; // 0xc01 Return
}


