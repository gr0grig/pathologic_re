task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xf PushV
	var_19_int = 0; var_20_object = Obj(); // 0x10 PushV
	var_20_object = var_16_bool; // 0x11 Mov
	func_2781(var_20_object); // 0x12 NEW_2
	var_18_int = var_19_int; // 0x13 Mov
	var_21_int = 0; // 0x15 PushI
	var_22_bool = var_18_int > var_21_int; // 0x16 GT
	if(var_22_bool == 0) goto Label_28; // 0x17 JumpB
	var_23_object = Obj(); // 0x18 PushV
	var_23_object = var_16_bool; // 0x19 Mov
	func_2784(var_23_object); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_2790(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	return 0; // 0x97 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	return 0; // 0x99 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	return 0; // 0x9b Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xb4 PushV
	var_19_int = 0; var_20_object = Obj(); // 0xb5 PushV
	var_20_object = var_16_bool; // 0xb6 Mov
	func_2781(var_20_object); // 0xb7 NEW_2
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
	func_2784(var_26_object); // 0xc5 NEW_2
	
Label_199:
	return 2; // 0xc7 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xc8 PushV
	var_19_object = Obj(); // 0xc9 PushV
	var_19_object = var_16_bool; // 0xca Mov
	func_2586(var_19_object); // 0xcb NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0xcd PushV
	var_29_object = var_16_bool; // 0xce Mov
	func_2669(var_28_int, var_29_object); // 0xcf NEW_2
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
	func_2679(var_69_object); // 0xdd NEW_2
	
Label_223:
	return 2; // 0xdf Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xe0 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0xe1 PushV
	var_22_object = var_16_object; // 0xe2 Mov
	var_23_object = var_17_cvector; // 0xe3 Mov
	var_24_bool = var_18_bool; // 0xe4 Mov
	func_2857(var_22_object, var_23_object, var_24_bool); // 0xe5 NEW_2
	if(var_21_bool == 0) goto Label_251; // 0xe7 JumpB
	var_68_int = 0; var_69_object = Obj(); var_70_bool = 0; // 0xe8 PushV
	var_69_object = var_16_object; // 0xe9 Mov
	var_70_bool = var_18_bool; // 0xea Mov
	func_2687(var_69_object, var_70_bool); // 0xeb NEW_2
	var_20_int = var_68_int; // 0xec Mov
	var_99_int = 0; // 0xee PushI
	var_100_bool = var_20_int > var_99_int; // 0xef GT
	if(var_100_bool == 0) goto Label_251; // 0xf0 JumpB
	var_101_int = 1; // 0xf1 PushI
	var_102_bool = var_20_int > var_101_int; // 0xf2 GT
	if(var_102_bool == 0) goto Label_247; // 0xf3 JumpB
	func_367(var_20_int); // 0xf5 NEW_2
	
Label_247:
	var_104_object = Obj(); // 0xf7 PushV
	var_104_object = var_16_object; // 0xf8 Mov
	func_2697(var_104_object); // 0xf9 NEW_2
	
Label_251:
	return 2; // 0xfb Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xfc PushV
	var_19_int = 0; var_20_object = Obj(); // 0xfd PushV
	var_20_object = var_16_bool; // 0xfe Mov
	func_2771(var_20_object); // 0xff NEW_2
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
	func_2774(); // 0x10d NEW_2
	
Label_271:
	return 2; // 0x10f Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x110 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x111 PushV
	var_21_object = var_16_cvector; // 0x112 Mov
	var_22_string = var_17_bool; // 0x113 Mov
	func_2500(var_20_bool, var_21_object, var_22_string); // 0x114 NEW_2
	if(var_20_bool == 0) goto Label_288; // 0x116 JumpB
	func_367(var_19_int); // 0x118 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x11a PushV
	var_51_object = var_16_cvector; // 0x11b Mov
	var_52_string = var_17_bool; // 0x11c Mov
	func_2532(var_51_object, var_52_string); // 0x11d NEW_2
	goto Label_308; // 0x11f Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_288:
	var_199_int = 0; var_200_string = ""; var_201_object = Obj(); // 0x120 PushV
	var_200_string = var_17_bool; // 0x121 Mov
	var_201_object = var_16_cvector; // 0x122 Mov
	func_2776(var_201_object); // 0x123 NEW_2
	var_19_int = var_199_int; // 0x124 Mov
	var_202_int = 0; // 0x126 PushI
	var_203_bool = var_19_int > var_202_int; // 0x127 GT
	if(var_203_bool == 0) goto Label_308; // 0x128 JumpB
	var_204_int = 1; // 0x129 PushI
	var_205_bool = var_19_int > var_204_int; // 0x12a GT
	if(var_205_bool == 0) goto Label_303; // 0x12b JumpB
	func_367(var_19_int); // 0x12d NEW_2
	
Label_303:
	var_206_string = ""; var_207_object = Obj(); // 0x12f PushV
	var_206_string = var_17_bool; // 0x130 Mov
	var_207_object = var_16_cvector; // 0x131 Mov
	func_2779(); // 0x132 NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x136 PushV
	var_18_string = var_16_bool; // 0x137 Mov
	func_2599(var_17_bool, var_18_string); // 0x138 NEW_2
	if(var_17_bool == 0) goto Label_322; // 0x13a JumpB
	func_367(var_16_bool); // 0x13c NEW_2
	var_27_string = ""; // 0x13e PushV
	var_27_string = var_16_bool; // 0x13f Mov
	func_2615(var_27_string); // 0x140 NEW_2
	
Label_322:
	return 0; // 0x142 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x144 PushV
	var_18_object = var_16_bool; // 0x145 Mov
	func_2557(var_17_bool, var_18_object); // 0x146 NEW_2
	if(var_17_bool == 0) goto Label_337; // 0x148 JumpB
	func_367(var_16_bool); // 0x14a NEW_2
	var_32_object = Obj(); // 0x14c PushV
	var_32_object = var_16_bool; // 0x14d Mov
	func_2580(var_32_object); // 0x14e NEW_2
	goto Label_341; // 0x150 Jump
	
Label_341:
	return 0; // 0x155 Return
	
Label_337:
	var_106_object = Obj(); // 0x151 PushV
	var_106_object = var_16_bool; // 0x152 Mov
	func_392(var_16_bool, var_106_object); // 0x153 NEW_2
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_object = Obj(); // 0x157 PushV
	var_17_object = var_16_bool; // 0x158 Mov
	func_392(var_16_bool, var_17_object); // 0x159 NEW_2
	return 0; // 0x15b Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
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


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_367(var_15_bool); // 0x169 NEW_2
	func_2790(); // 0x16c NEW_2
	return 0; // 0x16e Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_367(var_16_bool); // 0x181 NEW_2
	var_18_object = Obj(); // 0x183 PushV
	var_18_object = var_16_bool; // 0x184 Mov
	func_2476(); // 0x185 NEW_2
	return 0; // 0x187 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	Stop(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x20d PushV
	var_19_int = 0; var_20_object = Obj(); // 0x20e PushV
	var_20_object = var_16_bool; // 0x20f Mov
	func_2781(var_20_object); // 0x210 NEW_2
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
	func_2784(var_25_object); // 0x21e NEW_2
	
Label_544:
	return 2; // 0x220 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x221 PushV
	var_19_object = Obj(); // 0x222 PushV
	var_19_object = var_16_bool; // 0x223 Mov
	func_2586(var_19_object); // 0x224 NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0x226 PushV
	var_29_object = var_16_bool; // 0x227 Mov
	func_2669(var_28_int, var_29_object); // 0x228 NEW_2
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
	func_2679(var_68_object); // 0x236 NEW_2
	
Label_568:
	return 2; // 0x238 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x239 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x23a PushV
	var_22_object = var_16_object; // 0x23b Mov
	var_23_object = var_17_cvector; // 0x23c Mov
	var_24_bool = var_18_bool; // 0x23d Mov
	func_2857(var_22_object, var_23_object, var_24_bool); // 0x23e NEW_2
	if(var_21_bool == 0) goto Label_596; // 0x240 JumpB
	var_68_int = 0; var_69_object = Obj(); var_70_bool = 0; // 0x241 PushV
	var_69_object = var_16_object; // 0x242 Mov
	var_70_bool = var_18_bool; // 0x243 Mov
	func_2687(var_69_object, var_70_bool); // 0x244 NEW_2
	var_20_int = var_68_int; // 0x245 Mov
	var_99_int = 0; // 0x247 PushI
	var_100_bool = var_20_int > var_99_int; // 0x248 GT
	if(var_100_bool == 0) goto Label_596; // 0x249 JumpB
	var_101_int = 1; // 0x24a PushI
	var_102_bool = var_20_int > var_101_int; // 0x24b GT
	if(var_102_bool == 0) goto Label_592; // 0x24c JumpB
	func_770(); // 0x24e NEW_2
	
Label_592:
	var_103_object = Obj(); // 0x250 PushV
	var_103_object = var_16_object; // 0x251 Mov
	func_2697(var_103_object); // 0x252 NEW_2
	
Label_596:
	return 2; // 0x254 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x255 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x256 PushV
	var_20_object = var_16_bool; // 0x257 Mov
	func_2771(var_20_object); // 0x258 NEW_2
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
	func_2774(); // 0x266 NEW_2
	
Label_616:
	return 2; // 0x268 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x269 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x26a PushV
	var_21_object = var_16_cvector; // 0x26b Mov
	var_22_string = var_17_bool; // 0x26c Mov
	func_2500(var_20_bool, var_21_object, var_22_string); // 0x26d NEW_2
	if(var_20_bool == 0) goto Label_633; // 0x26f JumpB
	func_770(); // 0x271 NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0x273 PushV
	var_50_object = var_16_cvector; // 0x274 Mov
	var_51_string = var_17_bool; // 0x275 Mov
	func_2532(var_50_object, var_51_string); // 0x276 NEW_2
	goto Label_653; // 0x278 Jump
	
Label_653:
	return 2; // 0x28d Return
	
Label_633:
	var_198_int = 0; var_199_string = ""; var_200_object = Obj(); // 0x279 PushV
	var_199_string = var_17_bool; // 0x27a Mov
	var_200_object = var_16_cvector; // 0x27b Mov
	func_2776(var_200_object); // 0x27c NEW_2
	var_19_int = var_198_int; // 0x27d Mov
	var_201_int = 0; // 0x27f PushI
	var_202_bool = var_19_int > var_201_int; // 0x280 GT
	if(var_202_bool == 0) goto Label_653; // 0x281 JumpB
	var_203_int = 1; // 0x282 PushI
	var_204_bool = var_19_int > var_203_int; // 0x283 GT
	if(var_204_bool == 0) goto Label_648; // 0x284 JumpB
	func_770(); // 0x286 NEW_2
	
Label_648:
	var_205_string = ""; var_206_object = Obj(); // 0x288 PushV
	var_205_string = var_17_bool; // 0x289 Mov
	var_206_object = var_16_cvector; // 0x28a Mov
	func_2779(); // 0x28b NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x28f PushV
	var_18_string = var_16_bool; // 0x290 Mov
	func_2599(var_17_bool, var_18_string); // 0x291 NEW_2
	if(var_17_bool == 0) goto Label_667; // 0x293 JumpB
	func_770(); // 0x295 NEW_2
	var_26_string = ""; // 0x297 PushV
	var_26_string = var_16_bool; // 0x298 Mov
	func_2615(var_26_string); // 0x299 NEW_2
	
Label_667:
	return 0; // 0x29b Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_770(); // 0x29d NEW_2
	func_2790(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x2a4 PushV
	var_18_object = var_16_bool; // 0x2a5 Mov
	func_2557(var_17_bool, var_18_object); // 0x2a6 NEW_2
	if(var_17_bool == 0) goto Label_688; // 0x2a8 JumpB
	func_770(); // 0x2aa NEW_2
	var_31_object = Obj(); // 0x2ac PushV
	var_31_object = var_16_bool; // 0x2ad Mov
	func_2580(var_31_object); // 0x2ae NEW_2
	
Label_688:
	return 0; // 0x2b0 Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x33f PushV
	var_19_int = 0; var_20_object = Obj(); // 0x340 PushV
	var_20_object = var_16_bool; // 0x341 Mov
	func_2781(var_20_object); // 0x342 NEW_2
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
	func_2784(var_27_object); // 0x350 NEW_2
	
Label_850:
	return 2; // 0x352 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x353 PushV
	var_19_object = Obj(); // 0x354 PushV
	var_19_object = var_16_bool; // 0x355 Mov
	func_2586(var_19_object); // 0x356 NEW_2
	var_28_int = 0; var_29_object = Obj(); // 0x358 PushV
	var_29_object = var_16_bool; // 0x359 Mov
	func_2669(var_28_int, var_29_object); // 0x35a NEW_2
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
	func_2679(var_70_object); // 0x368 NEW_2
	
Label_874:
	return 2; // 0x36a Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x36b PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x36c PushV
	var_22_object = var_16_object; // 0x36d Mov
	var_23_object = var_17_cvector; // 0x36e Mov
	var_24_bool = var_18_bool; // 0x36f Mov
	func_2857(var_22_object, var_23_object, var_24_bool); // 0x370 NEW_2
	if(var_21_bool == 0) goto Label_902; // 0x372 JumpB
	var_68_int = 0; var_69_object = Obj(); var_70_bool = 0; // 0x373 PushV
	var_69_object = var_16_object; // 0x374 Mov
	var_70_bool = var_18_bool; // 0x375 Mov
	func_2687(var_69_object, var_70_bool); // 0x376 NEW_2
	var_20_int = var_68_int; // 0x377 Mov
	var_99_int = 0; // 0x379 PushI
	var_100_bool = var_20_int > var_99_int; // 0x37a GT
	if(var_100_bool == 0) goto Label_902; // 0x37b JumpB
	var_101_int = 1; // 0x37c PushI
	var_102_bool = var_20_int > var_101_int; // 0x37d GT
	if(var_102_bool == 0) goto Label_898; // 0x37e JumpB
	func_974(); // 0x380 NEW_2
	
Label_898:
	var_105_object = Obj(); // 0x382 PushV
	var_105_object = var_16_object; // 0x383 Mov
	func_2697(var_105_object); // 0x384 NEW_2
	
Label_902:
	return 2; // 0x386 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x387 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x388 PushV
	var_20_object = var_16_bool; // 0x389 Mov
	func_2771(var_20_object); // 0x38a NEW_2
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
	func_2774(); // 0x398 NEW_2
	
Label_922:
	return 2; // 0x39a Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x39b PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x39c PushV
	var_21_object = var_16_cvector; // 0x39d Mov
	var_22_string = var_17_bool; // 0x39e Mov
	func_2500(var_20_bool, var_21_object, var_22_string); // 0x39f NEW_2
	if(var_20_bool == 0) goto Label_939; // 0x3a1 JumpB
	func_974(); // 0x3a3 NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x3a5 PushV
	var_52_object = var_16_cvector; // 0x3a6 Mov
	var_53_string = var_17_bool; // 0x3a7 Mov
	func_2532(var_52_object, var_53_string); // 0x3a8 NEW_2
	goto Label_959; // 0x3aa Jump
	
Label_959:
	return 2; // 0x3bf Return
	
Label_939:
	var_200_int = 0; var_201_string = ""; var_202_object = Obj(); // 0x3ab PushV
	var_201_string = var_17_bool; // 0x3ac Mov
	var_202_object = var_16_cvector; // 0x3ad Mov
	func_2776(var_202_object); // 0x3ae NEW_2
	var_19_int = var_200_int; // 0x3af Mov
	var_203_int = 0; // 0x3b1 PushI
	var_204_bool = var_19_int > var_203_int; // 0x3b2 GT
	if(var_204_bool == 0) goto Label_959; // 0x3b3 JumpB
	var_205_int = 1; // 0x3b4 PushI
	var_206_bool = var_19_int > var_205_int; // 0x3b5 GT
	if(var_206_bool == 0) goto Label_954; // 0x3b6 JumpB
	func_974(); // 0x3b8 NEW_2
	
Label_954:
	var_207_string = ""; var_208_object = Obj(); // 0x3ba PushV
	var_207_string = var_17_bool; // 0x3bb Mov
	var_208_object = var_16_cvector; // 0x3bc Mov
	func_2779(); // 0x3bd NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_string = ""; // 0x3c1 PushV
	var_18_string = var_16_bool; // 0x3c2 Mov
	func_2599(var_17_bool, var_18_string); // 0x3c3 NEW_2
	if(var_17_bool == 0) goto Label_973; // 0x3c5 JumpB
	func_974(); // 0x3c7 NEW_2
	var_28_string = ""; // 0x3c9 PushV
	var_28_string = var_16_bool; // 0x3ca Mov
	func_2615(var_28_string); // 0x3cb NEW_2
	
Label_973:
	return 0; // 0x3cd Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_974(); // 0x3db NEW_2
	var_19_object = Obj(); // 0x3dd PushV
	var_19_object = var_16_bool; // 0x3de Mov
	func_2476(); // 0x3df NEW_2
	return 0; // 0x3e1 Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x3e2 PushV
	var_21_int = 111; // 0x3e3 PushI
	var_22_bool = var_16_bool != var_21_int; // 0x3e4 Neq
	if(var_22_bool == 0) goto Label_999; // 0x3e5 JumpB
	return 4; // 0x3e6 Return
	
Label_999:
	var_23_bool = 0; var_24_object = Obj(); // 0x3e7 PushV
	var_24_object = var_0_bool; // 0x3e8 MovT
	func_1897(var_23_bool, var_24_object); // 0x3e9 NEW_2
	var_57_bool = var_23_bool == 0; // 0x3eb Not
	if(var_57_bool == 0) goto Label_1009; // 0x3ec JumpB
	func_974(); // 0x3ee NEW_2
	return 4; // 0x3f0 Return
	
Label_1009:
	GetDirection(var_19_cvector); // 0x3f1 Func
	var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0x3f3 PushV
	var_61_object = var_0_bool; // 0x3f4 MovT
	func_1824(var_61_object); // 0x3f5 NEW_2
	var_20_cvector = var_60_cvector; // 0x3f6 Mov
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x3f8 PushV
	var_67_cvector = var_19_cvector; // 0x3f9 Mov
	var_68_cvector = var_20_cvector; // 0x3fa Mov
	func_2158(var_66_float, var_67_cvector, var_68_cvector); // 0x3fb NEW_2
	var_90_float = 0.5; // 0x3fd PushF
	var_91_bool = var_66_float < var_90_float; // 0x3fe LT
	if(var_91_bool == 0) goto Label_1028; // 0x3ff JumpB
	var_92_object = Obj(); // 0x400 PushV
	var_92_object = var_0_bool; // 0x401 MovT
	func_2047(); // 0x402 NEW_2
	
Label_1028:
	return 4; // 0x404 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_974(); // 0x406 NEW_2
	func_2790(); // 0x409 NEW_2
	return 0; // 0x40b Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x40d PushV
	var_18_object = var_16_bool; // 0x40e Mov
	func_2557(var_17_bool, var_18_object); // 0x40f NEW_2
	if(var_17_bool == 0) goto Label_1049; // 0x411 JumpB
	func_974(); // 0x413 NEW_2
	var_33_object = Obj(); // 0x415 PushV
	var_33_object = var_16_bool; // 0x416 Mov
	func_2580(var_33_object); // 0x417 NEW_2
	
Label_1049:
	return 0; // 0x419 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1212(var_15_bool); // 0x41b NEW_2
	func_2790(); // 0x41e NEW_2
	return 0; // 0x420 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_int, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x488 PushV
	var_25_int = 120; // 0x489 PushI
	var_26_bool = var_16_bool != var_25_int; // 0x48a Neq
	if(var_26_bool == 0) goto Label_1165; // 0x48b JumpB
	return 8; // 0x48c Return
	
Label_1165:
	var_27_bool = var_0_bool == 0; // 0x48d NullEq
	if(var_27_bool == 0) goto Label_1174; // 0x48e JumpB
	Stop(); // 0x48f Func
	var_28_int = 1; // 0x491 PushI
	KillTimer(var_28_int); // 0x492 Func
	var_2_bool = 1; // 0x494 TMovB
	goto Label_1211; // 0x495 Jump
	
Label_1211:
	return 8; // 0x4bb Return
	
Label_1174:
	GetDirection(var_21_cvector); // 0x496 Func
	var_29_float = 7000.0; // 0x498 PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x499 Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x49b PushV
	var_31_float = 1.74533; // 0x49c MovF
	func_1057(var_30_cvector, var_31_float); // 0x49d NEW_2
	var_23_cvector = var_30_cvector; // 0x49e Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x4a0 Or2
	var_60_bool = 0; // 0x4a1 PushV
	var_60_bool = 0; // 0x4a2 MovB
	var_61_float = 2500.0; // 0x4a3 PushF
	var_62_bool = var_24_float >= var_61_float; // 0x4a4 GE
	if(var_62_bool == 0) goto Label_1204; // 0x4a5 JumpB
	var_63_bool = 0; // 0x4a6 PushV
	var_63_bool = 1; // 0x4a7 MovB
	var_64_float = var_22_float * var_22_float; // 0x4a8 Mult
	var_65_float = 2.25; // 0x4a9 PushF
	var_66_float = var_64_float * var_65_float; // 0x4aa Mult
	var_67_bool = var_24_float >= var_66_float; // 0x4ab GE
	if(var_67_bool == 0) goto Label_1202; // 0x4ac JumpB
	var_68_bool = 0; // 0x4ad PushV
	func_1228(var_63_bool, var_68_bool); // 0x4ae NEW_2
	if(var_68_bool == 0) goto Label_1202; // 0x4b0 JumpB
	var_63_bool = 0; // 0x4b1 MovB
	
Label_1202:
	if(var_63_bool == 0) goto Label_1204; // 0x4b2 JumpB
	var_60_bool = 1; // 0x4b3 MovB
	
Label_1204:
	if(var_60_bool == 0) goto Label_1211; // 0x4b4 JumpB
	Stop(); // 0x4b5 Func
	var_88_cvector = CVector(0,0,0); // 0x4b7 PushV
	func_1819(var_88_cvector); // 0x4b8 NEW_2
	var_1_bool = var_88_cvector + var_23_cvector; // 0x4ba Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_1212(var_16_bool); // 0x4c5 NEW_2
	var_18_object = Obj(); // 0x4c7 PushV
	var_18_object = var_16_bool; // 0x4c8 Mov
	func_2476(); // 0x4c9 NEW_2
	return 0; // 0x4cb Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x543 PushV
	var_25_int = 120; // 0x544 PushI
	var_26_bool = var_16_bool != var_25_int; // 0x545 Neq
	if(var_26_bool == 0) goto Label_1352; // 0x546 JumpB
	return 8; // 0x547 Return
	
Label_1352:
	var_27_bool = var_0_bool == 0; // 0x548 NullEq
	if(var_27_bool == 0) goto Label_1361; // 0x549 JumpB
	Stop(); // 0x54a Func
	var_28_int = 1; // 0x54c PushI
	KillTimer(var_28_int); // 0x54d Func
	var_2_bool = 1; // 0x54f TMovB
	goto Label_1398; // 0x550 Jump
	
Label_1398:
	return 8; // 0x576 Return
	
Label_1361:
	GetDirection(var_21_cvector); // 0x551 Func
	var_29_float = 7000.0; // 0x553 PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x554 Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x556 PushV
	var_31_float = 1.74533; // 0x557 MovF
	func_1244(var_30_cvector, var_31_float); // 0x558 NEW_2
	var_23_cvector = var_30_cvector; // 0x559 Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x55b Or2
	var_60_bool = 0; // 0x55c PushV
	var_60_bool = 0; // 0x55d MovB
	var_61_float = 2500.0; // 0x55e PushF
	var_62_bool = var_24_float >= var_61_float; // 0x55f GE
	if(var_62_bool == 0) goto Label_1391; // 0x560 JumpB
	var_63_bool = 0; // 0x561 PushV
	var_63_bool = 1; // 0x562 MovB
	var_64_float = var_22_float * var_22_float; // 0x563 Mult
	var_65_float = 2.25; // 0x564 PushF
	var_66_float = var_64_float * var_65_float; // 0x565 Mult
	var_67_bool = var_24_float >= var_66_float; // 0x566 GE
	if(var_67_bool == 0) goto Label_1389; // 0x567 JumpB
	var_68_bool = 0; // 0x568 PushV
	func_1415(var_63_bool, var_68_bool); // 0x569 NEW_2
	if(var_68_bool == 0) goto Label_1389; // 0x56b JumpB
	var_63_bool = 0; // 0x56c MovB
	
Label_1389:
	if(var_63_bool == 0) goto Label_1391; // 0x56d JumpB
	var_60_bool = 1; // 0x56e MovB
	
Label_1391:
	if(var_60_bool == 0) goto Label_1398; // 0x56f JumpB
	Stop(); // 0x570 Func
	var_88_cvector = CVector(0,0,0); // 0x572 PushV
	func_1819(var_88_cvector); // 0x573 NEW_2
	var_1_bool = var_88_cvector + var_23_cvector; // 0x575 Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	func_1399(var_16_bool); // 0x580 NEW_2
	var_18_object = Obj(); // 0x582 PushV
	var_18_object = var_16_bool; // 0x583 Mov
	func_2476(); // 0x584 NEW_2
	return 0; // 0x586 Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1593(var_15_bool); // 0x598 NEW_2
	func_2790(); // 0x59b NEW_2
	return 0; // 0x59d Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x605 PushV
	var_25_int = 120; // 0x606 PushI
	var_26_bool = var_16_bool != var_25_int; // 0x607 Neq
	if(var_26_bool == 0) goto Label_1546; // 0x608 JumpB
	return 8; // 0x609 Return
	
Label_1546:
	var_27_bool = var_0_bool == 0; // 0x60a NullEq
	if(var_27_bool == 0) goto Label_1555; // 0x60b JumpB
	Stop(); // 0x60c Func
	var_28_int = 1; // 0x60e PushI
	KillTimer(var_28_int); // 0x60f Func
	var_2_bool = 1; // 0x611 TMovB
	goto Label_1592; // 0x612 Jump
	
Label_1592:
	return 8; // 0x638 Return
	
Label_1555:
	GetDirection(var_21_cvector); // 0x613 Func
	var_29_float = 7000.0; // 0x615 PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x616 Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x618 PushV
	var_31_float = 1.74533; // 0x619 MovF
	func_1438(var_30_cvector, var_31_float); // 0x61a NEW_2
	var_23_cvector = var_30_cvector; // 0x61b Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x61d Or2
	var_60_bool = 0; // 0x61e PushV
	var_60_bool = 0; // 0x61f MovB
	var_61_float = 2500.0; // 0x620 PushF
	var_62_bool = var_24_float >= var_61_float; // 0x621 GE
	if(var_62_bool == 0) goto Label_1585; // 0x622 JumpB
	var_63_bool = 0; // 0x623 PushV
	var_63_bool = 1; // 0x624 MovB
	var_64_float = var_22_float * var_22_float; // 0x625 Mult
	var_65_float = 2.25; // 0x626 PushF
	var_66_float = var_64_float * var_65_float; // 0x627 Mult
	var_67_bool = var_24_float >= var_66_float; // 0x628 GE
	if(var_67_bool == 0) goto Label_1583; // 0x629 JumpB
	var_68_bool = 0; // 0x62a PushV
	func_1609(var_63_bool, var_68_bool); // 0x62b NEW_2
	if(var_68_bool == 0) goto Label_1583; // 0x62d JumpB
	var_63_bool = 0; // 0x62e MovB
	
Label_1583:
	if(var_63_bool == 0) goto Label_1585; // 0x62f JumpB
	var_60_bool = 1; // 0x630 MovB
	
Label_1585:
	if(var_60_bool == 0) goto Label_1592; // 0x631 JumpB
	Stop(); // 0x632 Func
	var_88_cvector = CVector(0,0,0); // 0x634 PushV
	func_1819(var_88_cvector); // 0x635 NEW_2
	var_1_bool = var_88_cvector + var_23_cvector; // 0x637 Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool)
{
	func_1593(var_16_bool); // 0x642 NEW_2
	var_18_object = Obj(); // 0x644 PushV
	var_18_object = var_16_bool; // 0x645 Mov
	func_2476(); // 0x646 NEW_2
	return 0; // 0x648 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	func_1787(var_15_bool); // 0x65a NEW_2
	func_2790(); // 0x65d NEW_2
	return 0; // 0x65f Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x6c7 PushV
	var_25_int = 120; // 0x6c8 PushI
	var_26_bool = var_16_int != var_25_int; // 0x6c9 Neq
	if(var_26_bool == 0) goto Label_1740; // 0x6ca JumpB
	return 8; // 0x6cb Return
	
Label_1740:
	var_27_bool = var_0_bool == 0; // 0x6cc NullEq
	if(var_27_bool == 0) goto Label_1749; // 0x6cd JumpB
	Stop(); // 0x6ce Func
	var_28_int = 1; // 0x6d0 PushI
	KillTimer(var_28_int); // 0x6d1 Func
	var_2_bool = 1; // 0x6d3 TMovB
	goto Label_1786; // 0x6d4 Jump
	
Label_1786:
	return 8; // 0x6fa Return
	
Label_1749:
	GetDirection(var_21_cvector); // 0x6d5 Func
	var_29_float = 7000.0; // 0x6d7 PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x6d8 Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x6da PushV
	var_31_float = 1.74533; // 0x6db MovF
	func_1632(var_30_cvector, var_31_float); // 0x6dc NEW_2
	var_23_cvector = var_30_cvector; // 0x6dd Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x6df Or2
	var_60_bool = 0; // 0x6e0 PushV
	var_60_bool = 0; // 0x6e1 MovB
	var_61_float = 2500.0; // 0x6e2 PushF
	var_62_bool = var_24_float >= var_61_float; // 0x6e3 GE
	if(var_62_bool == 0) goto Label_1779; // 0x6e4 JumpB
	var_63_bool = 0; // 0x6e5 PushV
	var_63_bool = 1; // 0x6e6 MovB
	var_64_float = var_22_float * var_22_float; // 0x6e7 Mult
	var_65_float = 2.25; // 0x6e8 PushF
	var_66_float = var_64_float * var_65_float; // 0x6e9 Mult
	var_67_bool = var_24_float >= var_66_float; // 0x6ea GE
	if(var_67_bool == 0) goto Label_1777; // 0x6eb JumpB
	var_68_bool = 0; // 0x6ec PushV
	func_1803(var_63_bool, var_68_bool); // 0x6ed NEW_2
	if(var_68_bool == 0) goto Label_1777; // 0x6ef JumpB
	var_63_bool = 0; // 0x6f0 MovB
	
Label_1777:
	if(var_63_bool == 0) goto Label_1779; // 0x6f1 JumpB
	var_60_bool = 1; // 0x6f2 MovB
	
Label_1779:
	if(var_60_bool == 0) goto Label_1786; // 0x6f3 JumpB
	Stop(); // 0x6f4 Func
	var_88_cvector = CVector(0,0,0); // 0x6f6 PushV
	func_1819(var_88_cvector); // 0x6f7 NEW_2
	var_1_bool = var_88_cvector + var_23_cvector; // 0x6f9 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	func_1787(var_16_object); // 0x704 NEW_2
	var_18_object = Obj(); // 0x706 PushV
	var_18_object = var_16_object; // 0x707 Mov
	func_2476(); // 0x708 NEW_2
	return 0; // 0x70a Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x99f PushV
	var_20_string = "health"; // 0x9a0 PushS
	var_21_bool = var_17_string == var_20_string; // 0x9a1 Eq
	if(var_21_bool == 0) goto Label_2475; // 0x9a2 JumpB
	var_22_string = "health"; // 0x9a3 PushS
	GetProperty(var_22_string, var_19_float); // 0x9a4 Func
	var_23_int = 0; // 0x9a6 PushI
	var_24_bool = var_19_float <= var_23_int; // 0x9a7 LE
	if(var_24_bool == 0) goto Label_2475; // 0x9a8 JumpB
	SignalDeath(var_16_object); // 0x9a9 Func
	
Label_2475:
	return 2; // 0x9ab Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0x9ad PushV
	var_17_object = var_16_object; // 0x9ae Mov
	func_2455(var_17_object); // 0x9af NEW_2
	return 0; // 0x9b1 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x9b3 PushV
	var_20_object = var_16_object; // 0x9b4 Mov
	var_21_int = var_17_int; // 0x9b5 Mov
	var_22_float = var_18_float; // 0x9b6 Mov
	func_1965(var_20_object, var_21_int, var_22_float); // 0x9b7 NEW_2
	return 0; // 0x9b9 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x9bb PushV
	var_22_object = var_16_object; // 0x9bc Mov
	var_23_int = var_17_int; // 0x9bd Mov
	var_24_float = var_18_float; // 0x9be Mov
	var_25_cvector = var_20_cvector; // 0x9bf Mov
	var_26_cvector = var_21_cvector; // 0x9c0 Mov
	func_2033(var_24_float, var_25_cvector, var_26_cvector); // 0x9c1 NEW_2
	return 0; // 0x9c3 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_bool = 1; // 0x9c PushB
	SensePlayerOnly(var_16_bool); // 0x9d Func
	func_2837(); // 0xa0 NEW_2
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
	func_2866(var_99_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_517(var_47_bool)
{
	var_47_bool = 0; // 0x205 MovB
	return 0; // 0x206 Return
}


func_519(var_41_object, var_42_cvector)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x207 PushV
	FindShiftedPathTo(var_44_object, var_42_cvector); // 0x208 Func
	var_41_object = var_44_object; // 0x20a Mov
	return 2; // 0x20b Return
}


func_2058(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0x80a PushV
	IsLoaded(var_20_bool); // 0x80b Func
	var_18_bool = var_20_bool; // 0x80d Mov
	return 2; // 0x80e Return
}


func_2063(var_76_object)
{
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x80f PushV
	GetEyesHeight(var_79_float); // 0x810 ObjFunc
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x812 MovV
	var_81_float = GetByIndex(var_80_cvector, 1); // 0x813 PushE
	var_81_float = var_79_float; // 0x814 Mov
	SetByIndex(var_80_cvector, 1) = var_81_float; // 0x815 PopE
	var_82_string = "head"; // 0x816 PushS
	LookAsync(var_76_object, var_82_string, var_80_cvector); // 0x817 Func
	return 4; // 0x819 Return
}


func_2580(var_33_object)
{
	var_34_object = Obj(); // 0xa15 PushV
	var_34_object = var_33_object; // 0xa16 Mov
	func_2796(var_34_object); // 0xa17 NEW_2
	return 0; // 0xa19 Return
}


func_2586(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xa1b PushV
	var_21_object = var_19_object; // 0xa1c Mov
	func_1839(var_20_bool, var_21_object); // 0xa1d NEW_2
	if(var_20_bool == 0) goto Label_2598; // 0xa1f JumpB
	var_24_object = Obj(); // 0xa20 PushV
	func_2115(var_24_object); // 0xa21 NEW_2
	var_27_float = 0.0; // 0xa23 PushF
	ReportReputationChange(var_19_object, var_24_object, var_27_float); // 0xa24 Func
	
Label_2598:
	return 0; // 0xa26 Return
}


func_2074(var_42_string)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x81a PushV
	IsExisting3DSound(var_51_bool, var_42_string); // 0x81b Func
	var_59_bool = var_51_bool == 0; // 0x81d Not
	if(var_59_bool == 0) goto Label_2099; // 0x81e JumpB
	var_52_int = 0; // 0x81f MovI
	
Label_2080:
	var_60_int = 1; // 0x820 PushI
	var_61_int = var_52_int + var_60_int; // 0x821 Add
	var_62_int = var_42_string + var_61_int; // 0x822 Add
	IsExisting3DSound(var_53_bool, var_62_int); // 0x823 Func
	var_63_bool = var_53_bool == 0; // 0x825 Not
	if(var_63_bool == 0) goto Label_2088; // 0x826 JumpB
	goto Label_2091; // 0x827 Jump
	
Label_2091:
	var_64_bool = var_52_int == 0; // 0x82b Not
	if(var_64_bool == 0) goto Label_2094; // 0x82c JumpB
	return 16; // 0x82d Return
	
Label_2094:
	irand(var_54_int, var_52_int); // 0x82e Func
	var_65_int = 1; // 0x830 PushI
	var_66_int = var_54_int + var_65_int; // 0x831 Add
	var_42_string = var_42_string + var_66_int; // 0x832 Add2
	
Label_2099:
	Is3DSoundLoaded(var_55_bool, var_42_string); // 0x833 Func
	var_67_bool = var_55_bool; // 0x835 Push
	if(var_67_bool == 0) goto Label_2114; // 0x836 JumpB
	GetEyesHeight(var_56_float); // 0x837 Func
	GetDirection(var_57_cvector); // 0x839 Func
	var_68_int = 50; // 0x83b PushI
	var_58_cvector = var_57_cvector * var_68_int; // 0x83c Mult2
	var_69_float = GetByIndex(var_58_cvector, 1); // 0x83d PushE
	var_69_float = var_69_float + var_56_float; // 0x83e Add2
	SetByIndex(var_58_cvector, 1) = var_69_float; // 0x83f PopE
	PlayGlobalSound(var_42_string, var_58_cvector); // 0x840 Func
	
Label_2114:
	return 16; // 0x842 Return
	
Label_2088:
	var_70_int = 1; // 0x828 PushI
	var_52_int = var_52_int + var_70_int; // 0x829 Add2
	goto Label_2080; // 0x82a Jump
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
	func_2074(var_94_string); // 0x67 NEW_2
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


func_1057(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x421 PushV
	GetPosition(var_38_cvector); // 0x422 Func
	GetPosition(var_39_cvector); // 0x424 TObjFunc
	GetDirection(var_40_cvector); // 0x426 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x428 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x429 PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x42a Sub2
	func_2121(var_46_cvector, var_47_cvector); // 0x42b NEW_2
	var_53_float = 0.75; // 0x42d PushF
	var_54_float = var_40_cvector * var_53_float; // 0x42e Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x42f Add2
	func_2121(var_44_cvector, var_45_cvector); // 0x430 NEW_2
	var_41_cvector = var_44_cvector; // 0x431 Mov
	var_55_int = 32; // 0x433 PushI
	var_56_float = 7000.0; // 0x434 PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x435 Func
	var_57_int = 100; // 0x437 PushI
	var_43_float = var_43_float - var_57_int; // 0x438 Sub2
	var_58_int = 0; // 0x439 PushI
	var_59_bool = var_43_float < var_58_int; // 0x43a LT
	if(var_59_bool == 0) goto Label_1085; // 0x43b JumpB
	var_43_float = 0; // 0x43c MovI
	
Label_1085:
	var_30_cvector = var_42_cvector * var_43_float; // 0x43d Mult2
	return 12; // 0x43e Return
}


func_2599(var_17_bool, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0xa27 PushV
	var_21_string = "heal"; // 0xa28 PushS
	var_22_bool = var_18_string == var_21_string; // 0xa29 Eq
	if(var_22_bool == 0) goto Label_2613; // 0xa2a JumpB
	var_23_string = "player"; // 0xa2b PushS
	FindActor(var_20_object, var_23_string); // 0xa2c Func
	var_24_bool = 0; var_25_object = Obj(); // 0xa2e PushV
	var_25_object = var_20_object; // 0xa2f Mov
	func_2832(var_25_object); // 0xa30 NEW_2
	var_17_bool = var_24_bool; // 0xa31 Mov
	return 2; // 0xa33 Return
	
Label_2613:
	var_17_bool = 0; // 0xa35 MovB
	return 2; // 0xa36 Return
}


func_2615(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0xa37 PushV
	var_31_string = "heal"; // 0xa38 PushS
	var_32_bool = var_28_string == var_31_string; // 0xa39 Eq
	if(var_32_bool == 0) goto Label_2627; // 0xa3a JumpB
	var_33_string = "player"; // 0xa3b PushS
	FindActor(var_30_object, var_33_string); // 0xa3c Func
	var_34_object = Obj(); // 0xa3e PushV
	var_34_object = var_30_object; // 0xa3f Mov
	func_2835(); // 0xa40 NEW_2
	var_30_object = 0; // 0xa42 SetNull
	
Label_2627:
	return 2; // 0xa43 Return
}


func_1593(var_2_bool)
{
	Stop(); // 0x639 Func
	var_17_int = 120; // 0x63b PushI
	KillTimer(var_17_int); // 0x63c Func
	var_2_bool = 1; // 0x63e TMovB
	return 0; // 0x63f Return
}


func_1087(var_0_bool, var_1_bool, var_2_bool, var_71_object)
{
	var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_bool = 0; var_83_cvector = CVector(0,0,0); var_84_float = 0; // 0x43f PushV
	var_0_bool = var_71_object; // 0x440 TMov
	var_85_cvector = CVector(0,0,0); var_86_float = 0; // 0x441 PushV
	var_86_float = 1.74533; // 0x442 MovF
	func_1057(var_85_cvector, var_86_float); // 0x443 NEW_2
	var_80_cvector = var_85_cvector; // 0x444 Mov
	var_81_float = var_80_cvector | var_80_cvector; // 0x446 Or2
	var_115_float = 2500.0; // 0x447 PushF
	var_116_bool = var_81_float < var_115_float; // 0x448 LT
	if(var_116_bool == 0) goto Label_1116; // 0x449 JumpB
	var_117_cvector = CVector(0,0,0); var_118_float = 0; // 0x44a PushV
	var_118_float = 2.61799; // 0x44b MovF
	func_1057(var_117_cvector, var_118_float); // 0x44c NEW_2
	var_80_cvector = var_117_cvector; // 0x44d Mov
	var_81_float = var_80_cvector | var_80_cvector; // 0x44f Or2
	var_119_float = 2500.0; // 0x450 PushF
	var_120_bool = var_81_float < var_119_float; // 0x451 LT
	if(var_120_bool == 0) goto Label_1116; // 0x452 JumpB
	var_121_string = "Can't retreat, distance: "; // 0x453 PushS
	var_122_float = sqrt(var_81_float); // 0x454 Sqrt
	var_123_int = var_121_string + var_122_float; // 0x455 Add
	Trace(var_123_int); // 0x456 Func
	var_124_float = 0.5; // 0x458 PushF
	Sleep(var_124_float); // 0x459 Func
	return 10; // 0x45b Return
	
Label_1116:
	var_125_float = GetByIndex(var_80_cvector, 0); // 0x45c PushE
	var_126_float = GetByIndex(var_80_cvector, 2); // 0x45d PushE
	Rotate(var_125_float, var_126_float); // 0x45e Func
	var_127_cvector = CVector(0,0,0); // 0x460 PushV
	func_1819(var_127_cvector); // 0x461 NEW_2
	var_1_bool = var_127_cvector + var_80_cvector; // 0x463 Add2
	var_130_int = 120; // 0x464 PushI
	var_131_float = 0.5; // 0x465 PushF
	SetTimer(var_130_int, var_131_float); // 0x466 Func
	var_2_bool = 0; // 0x468 TMovB
	
Label_1129:
	var_132_int = 1; // 0x469 PushI
	MovePoint(var_132_int, var_132_int, var_82_bool); // 0x46a Func
	var_133_bool = var_82_bool; // 0x46c Push
	if(var_133_bool == 0) goto Label_1157; // 0x46d JumpB
	var_134_bool = var_0_bool == 0; // 0x46e NullEq
	if(var_134_bool == 0) goto Label_1138; // 0x46f JumpB
	goto Label_1159; // 0x470 Jump
	
Label_1159:
	return 10; // 0x487 Return
	
Label_1138:
	var_135_cvector = CVector(0,0,0); var_136_float = 0; // 0x472 PushV
	var_136_float = 2.61799; // 0x473 MovF
	func_1057(var_135_cvector, var_136_float); // 0x474 NEW_2
	var_83_cvector = var_135_cvector; // 0x475 Mov
	var_84_float = var_83_cvector | var_83_cvector; // 0x477 Or2
	var_137_float = 2500.0; // 0x478 PushF
	var_138_bool = var_84_float >= var_137_float; // 0x479 GE
	if(var_138_bool == 0) goto Label_1156; // 0x47a JumpB
	var_139_cvector = CVector(0,0,0); // 0x47b PushV
	func_1819(var_139_cvector); // 0x47c NEW_2
	var_1_bool = var_139_cvector + var_83_cvector; // 0x47e Add2
	var_140_int = 120; // 0x47f PushI
	var_141_float = 0.5; // 0x480 PushF
	SetTimer(var_140_int, var_141_float); // 0x481 Func
	goto Label_1157; // 0x483 Jump
	
Label_1157:
	var_142_bool = var_2_bool == 0; // 0x485 Not
	if(var_142_bool == 0) goto Label_1129; // 0x486 JumpB
	
Label_1156:
	goto Label_1159; // 0x484 Jump
}


func_2115(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x843 PushV
	self(var_106_object); // 0x844 Func
	var_104_object = var_106_object; // 0x846 Mov
	return 2; // 0x847 Return
}


func_2628(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0xa44 PushV
	var_74_string = "idle"; // 0xa45 MovS
	var_75_int = var_72_int; // 0xa46 Push
	if(var_75_int == 0) goto Label_2633; // 0xa47 JumpB
	var_74_string = var_74_string + var_72_int; // 0xa48 Add2
	
Label_2633:
	var_71_string = var_74_string; // 0xa49 Mov
	return 2; // 0xa4a Return
}


func_2121(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x849 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x84a Or
	var_57_float = sqrt(var_58_int); // 0x84b Sqrt2
	var_59_float = 0.0; // 0x84c PushF
	var_60_bool = var_57_float < var_59_float; // 0x84d LT
	if(var_60_bool == 0) goto Label_2129; // 0x84e JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x84f MovV
	return 2; // 0x850 Return
	
Label_2129:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x851 Div2
	return 2; // 0x852 Return
}


func_1609(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x649 PushV
	GetDirection(var_71_cvector); // 0x64a Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x64c PushV
	var_74_object = var_0_bool; // 0x64d MovT
	func_1824(var_74_object); // 0x64e NEW_2
	var_72_cvector = var_73_cvector; // 0x64f Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x651 PushV
	var_80_cvector = var_71_cvector; // 0x652 Mov
	var_81_cvector = var_72_cvector; // 0x653 Mov
	func_2131(var_79_float, var_80_cvector, var_81_cvector); // 0x654 NEW_2
	var_87_float = -0.34202; // 0x656 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x657 GE2
	return 4; // 0x658 Return
}


func_2635(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0xa4b PushV
	var_68_int = 0; // 0xa4c MovI
	
Label_2637:
	var_70_string = "all"; // 0xa4d PushS
	var_71_string = ""; var_72_int = 0; // 0xa4e PushV
	var_72_int = var_68_int; // 0xa4f Mov
	func_2628(var_71_string, var_72_int); // 0xa50 NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0xa52 Func
	var_76_bool = var_69_bool == 0; // 0xa54 Not
	if(var_76_bool == 0) goto Label_2647; // 0xa55 JumpB
	goto Label_2650; // 0xa56 Jump
	
Label_2650:
	var_65_int = var_68_int; // 0xa5a Mov
	return 4; // 0xa5b Return
	
Label_2647:
	var_77_int = 1; // 0xa57 PushI
	var_68_int = var_68_int + var_77_int; // 0xa58 Add2
	goto Label_2637; // 0xa59 Jump
}


func_2131(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector; // 0x854 Or
	var_83_int = var_80_cvector | var_80_cvector; // 0x855 Or
	var_84_int = var_81_cvector | var_81_cvector; // 0x856 Or
	var_85_float = var_83_int * var_84_int; // 0x857 Mult
	var_86_float = sqrt(var_85_float); // 0x858 Sqrt
	var_79_float = var_82_int / var_82_int; // 0x859 Div2
	return 0; // 0x85a Return
}


func_2139(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x85c PushE
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x85d PushE
	var_74_float = var_72_float * var_73_float; // 0x85e Mult
	var_75_float = GetByIndex(var_70_cvector, 2); // 0x85f PushE
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x860 PushE
	var_77_float = var_75_float * var_76_float; // 0x861 Mult
	var_69_float = var_74_float + var_77_float; // 0x862 Add2
	return 0; // 0x863 Return
}


func_2652(var_59_int)
{
	var_61_bool = 0; // 0xa5d PushV
	func_2855(var_61_bool); // 0xa5e NEW_2
	if(var_61_bool == 0) goto Label_2659; // 0xa60 JumpB
	var_59_int = 2; // 0xa61 MovI
	goto Label_2660; // 0xa62 Jump
	
Label_2660:
	return 0; // 0xa64 Return
	
Label_2659:
	var_59_int = 0; // 0xa63 MovI
}


func_1632(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x660 PushV
	GetPosition(var_38_cvector); // 0x661 Func
	GetPosition(var_39_cvector); // 0x663 TObjFunc
	GetDirection(var_40_cvector); // 0x665 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x667 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x668 PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x669 Sub2
	func_2121(var_46_cvector, var_47_cvector); // 0x66a NEW_2
	var_53_float = 0.75; // 0x66c PushF
	var_54_float = var_40_cvector * var_53_float; // 0x66d Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x66e Add2
	func_2121(var_44_cvector, var_45_cvector); // 0x66f NEW_2
	var_41_cvector = var_44_cvector; // 0x670 Mov
	var_55_int = 32; // 0x672 PushI
	var_56_float = 7000.0; // 0x673 PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x674 Func
	var_57_int = 100; // 0x676 PushI
	var_43_float = var_43_float - var_57_int; // 0x677 Sub2
	var_58_int = 0; // 0x678 PushI
	var_59_bool = var_43_float < var_58_int; // 0x679 LT
	if(var_59_bool == 0) goto Label_1660; // 0x67a JumpB
	var_43_float = 0; // 0x67b MovI
	
Label_1660:
	var_30_cvector = var_42_cvector * var_43_float; // 0x67c Mult2
	return 12; // 0x67d Return
}


func_2148(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0); // 0x865 PushE
	var_81_float = GetByIndex(var_79_cvector, 0); // 0x866 PushE
	var_82_float = var_80_float * var_81_float; // 0x867 Mult
	var_83_float = GetByIndex(var_79_cvector, 2); // 0x868 PushE
	var_84_float = GetByIndex(var_79_cvector, 2); // 0x869 PushE
	var_85_float = var_83_float * var_84_float; // 0x86a Mult
	var_86_int = var_82_float + var_85_float; // 0x86b Add
	var_78_float = sqrt(var_86_int); // 0x86c Sqrt2
	return 0; // 0x86d Return
}


func_2661(var_67_object)
{
	var_68_object = Obj(); // 0xa66 PushV
	var_68_object = var_67_object; // 0xa67 Mov
	TaskCall(3); // 0xa68 TaskCall
	func_775(var_69_object, var_68_object); // 0xa69 NEW_2
	TaskReturn(); // 0xa6a TaskReturn
	return 0; // 0xa6c Return
}


func_2669(var_28_int, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0xa6e PushV
	var_31_object = var_29_object; // 0xa6f Mov
	func_1897(var_30_bool, var_31_object); // 0xa70 NEW_2
	if(var_30_bool == 0) goto Label_2677; // 0xa72 JumpB
	var_28_int = 2; // 0xa73 MovI
	goto Label_2678; // 0xa74 Jump
	
Label_2678:
	return 0; // 0xa76 Return
	
Label_2677:
	var_28_int = 0; // 0xa75 MovI
}


func_2158(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x86f PushV
	var_70_cvector = var_67_cvector; // 0x870 Mov
	var_71_cvector = var_68_cvector; // 0x871 Mov
	func_2139(var_69_float, var_70_cvector, var_71_cvector); // 0x872 NEW_2
	var_78_float = 0; var_79_cvector = CVector(0,0,0); // 0x874 PushV
	var_79_cvector = var_67_cvector; // 0x875 Mov
	func_2148(var_78_float, var_79_cvector); // 0x876 NEW_2
	var_87_float = 0; var_88_cvector = CVector(0,0,0); // 0x878 PushV
	var_88_cvector = var_68_cvector; // 0x879 Mov
	func_2148(var_87_float, var_88_cvector); // 0x87a NEW_2
	var_89_float = var_78_float * var_87_float; // 0x87c Mult
	var_66_float = var_69_float / var_69_float; // 0x87d Div2
	return 0; // 0x87e Return
}


func_2679(var_70_object)
{
	var_71_object = Obj(); // 0xa78 PushV
	var_71_object = var_70_object; // 0xa79 Mov
	TaskCall(4); // 0xa7a TaskCall
	func_1087(var_72_object, var_73_cvector, var_74_bool, var_71_object); // 0xa7b NEW_2
	TaskReturn(); // 0xa7c TaskReturn
	return 0; // 0xa7e Return
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
	func_2074(var_42_string); // 0x89 NEW_2
	var_71_string = "all"; // 0x8b PushS
	PlayAnimation(var_71_string, var_41_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_72_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_72_string, var_41_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_1662(var_0_bool, var_1_bool, var_2_bool, var_132_object)
{
	var_136_cvector = CVector(0,0,0); var_137_float = 0; var_138_bool = 0; var_139_cvector = CVector(0,0,0); var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x67e PushV
	var_0_bool = var_132_object; // 0x67f TMov
	var_146_cvector = CVector(0,0,0); var_147_float = 0; // 0x680 PushV
	var_147_float = 1.74533; // 0x681 MovF
	func_1632(var_146_cvector, var_147_float); // 0x682 NEW_2
	var_141_cvector = var_146_cvector; // 0x683 Mov
	var_142_float = var_141_cvector | var_141_cvector; // 0x685 Or2
	var_171_float = 2500.0; // 0x686 PushF
	var_172_bool = var_142_float < var_171_float; // 0x687 LT
	if(var_172_bool == 0) goto Label_1691; // 0x688 JumpB
	var_173_cvector = CVector(0,0,0); var_174_float = 0; // 0x689 PushV
	var_174_float = 2.61799; // 0x68a MovF
	func_1632(var_173_cvector, var_174_float); // 0x68b NEW_2
	var_141_cvector = var_173_cvector; // 0x68c Mov
	var_142_float = var_141_cvector | var_141_cvector; // 0x68e Or2
	var_175_float = 2500.0; // 0x68f PushF
	var_176_bool = var_142_float < var_175_float; // 0x690 LT
	if(var_176_bool == 0) goto Label_1691; // 0x691 JumpB
	var_177_string = "Can't retreat, distance: "; // 0x692 PushS
	var_178_float = sqrt(var_142_float); // 0x693 Sqrt
	var_179_int = var_177_string + var_178_float; // 0x694 Add
	Trace(var_179_int); // 0x695 Func
	var_180_float = 0.5; // 0x697 PushF
	Sleep(var_180_float); // 0x698 Func
	return 10; // 0x69a Return
	
Label_1691:
	var_181_float = GetByIndex(var_141_cvector, 0); // 0x69b PushE
	var_182_float = GetByIndex(var_141_cvector, 2); // 0x69c PushE
	Rotate(var_181_float, var_182_float); // 0x69d Func
	var_183_cvector = CVector(0,0,0); // 0x69f PushV
	func_1819(var_183_cvector); // 0x6a0 NEW_2
	var_1_bool = var_183_cvector + var_141_cvector; // 0x6a2 Add2
	var_184_int = 120; // 0x6a3 PushI
	var_185_float = 0.5; // 0x6a4 PushF
	SetTimer(var_184_int, var_185_float); // 0x6a5 Func
	var_2_bool = 0; // 0x6a7 TMovB
	
Label_1704:
	var_186_int = 1; // 0x6a8 PushI
	MovePoint(var_186_int, var_186_int, var_143_bool); // 0x6a9 Func
	var_187_bool = var_143_bool; // 0x6ab Push
	if(var_187_bool == 0) goto Label_1732; // 0x6ac JumpB
	var_188_bool = var_0_bool == 0; // 0x6ad NullEq
	if(var_188_bool == 0) goto Label_1713; // 0x6ae JumpB
	goto Label_1734; // 0x6af Jump
	
Label_1734:
	return 10; // 0x6c6 Return
	
Label_1713:
	var_189_cvector = CVector(0,0,0); var_190_float = 0; // 0x6b1 PushV
	var_190_float = 2.61799; // 0x6b2 MovF
	func_1632(var_189_cvector, var_190_float); // 0x6b3 NEW_2
	var_144_cvector = var_189_cvector; // 0x6b4 Mov
	var_145_float = var_144_cvector | var_144_cvector; // 0x6b6 Or2
	var_191_float = 2500.0; // 0x6b7 PushF
	var_192_bool = var_145_float >= var_191_float; // 0x6b8 GE
	if(var_192_bool == 0) goto Label_1731; // 0x6b9 JumpB
	var_193_cvector = CVector(0,0,0); // 0x6ba PushV
	func_1819(var_193_cvector); // 0x6bb NEW_2
	var_1_bool = var_193_cvector + var_144_cvector; // 0x6bd Add2
	var_194_int = 120; // 0x6be PushI
	var_195_float = 0.5; // 0x6bf PushF
	SetTimer(var_194_int, var_195_float); // 0x6c0 Func
	goto Label_1732; // 0x6c2 Jump
	
Label_1732:
	var_196_bool = var_2_bool == 0; // 0x6c4 Not
	if(var_196_bool == 0) goto Label_1704; // 0x6c5 JumpB
	
Label_1731:
	goto Label_1734; // 0x6c3 Jump
}


func_2175(var_118_int)
{
	var_119_float = 0; var_120_float = 0; // 0x87f PushV
	GetGameTime(var_120_float); // 0x880 Func
	var_121_int = 1; // 0x882 PushI
	var_122_int = 0; // 0x883 PushV
	var_123_int = 24; // 0x884 PushI
	var_122_int = var_120_float / var_120_float; // 0x885 Div2
	var_118_int = var_121_int + var_122_int; // 0x886 Add2
	return 2; // 0x887 Return
}


func_2687(var_68_int, var_69_object)
{
	var_71_bool = 0; var_72_object = Obj(); // 0xa80 PushV
	var_72_object = var_69_object; // 0xa81 Mov
	func_1897(var_71_bool, var_72_object); // 0xa82 NEW_2
	if(var_71_bool == 0) goto Label_2695; // 0xa84 JumpB
	var_68_int = 2; // 0xa85 MovI
	goto Label_2696; // 0xa86 Jump
	
Label_2696:
	return 0; // 0xa88 Return
	
Label_2695:
	var_68_int = 0; // 0xa87 MovI
}


func_2184(var_223_int)
{
	var_224_int = 0; var_225_int = 0; // 0x888 PushV
	var_226_string = "branch"; // 0x889 PushS
	GetVariable(var_226_string, var_225_int); // 0x88a Func
	var_223_int = var_225_int; // 0x88c Mov
	return 2; // 0x88d Return
}


func_2697(var_105_object)
{
	var_106_object = Obj(); // 0xa8a PushV
	var_106_object = var_105_object; // 0xa8b Mov
	TaskCall(5); // 0xa8c TaskCall
	func_1274(var_107_object, var_108_cvector, var_109_bool, var_106_object); // 0xa8d NEW_2
	TaskReturn(); // 0xa8e TaskReturn
	return 0; // 0xa90 Return
}


func_2190(var_33_object)
{
	var_34_int = 0; // 0x88f PushV
	func_2184(var_34_int); // 0x890 NEW_2
	var_38_int = 1; // 0x892 PushI
	var_39_bool = var_34_int == var_38_int; // 0x893 Eq
	if(var_39_bool == 0) goto Label_2200; // 0x894 JumpB
	WorkWithCorpse(var_33_object); // 0x895 Func
	goto Label_2202; // 0x897 Jump
	
Label_2202:
	return 0; // 0x89a Return
	
Label_2200:
	Barter(var_33_object); // 0x898 Func
}


func_2705(var_25_bool, var_26_object, var_27_object, var_28_float)
{
	var_29_string = ""; var_30_bool = 0; var_31_string = ""; var_32_bool = 0; // 0xa91 PushV
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; // 0xa92 PushV
	var_34_object = var_27_object; // 0xa93 Mov
	var_35_string = "class"; // 0xa94 MovS
	func_1844(var_33_bool, var_34_object, var_35_string); // 0xa95 NEW_2
	var_42_bool = var_33_bool == 0; // 0xa97 Not
	if(var_42_bool == 0) goto Label_2715; // 0xa98 JumpB
	var_25_bool = 0; // 0xa99 MovB
	return 4; // 0xa9a Return
	
Label_2715:
	var_43_string = "class"; // 0xa9b PushS
	GetProperty(var_43_string, var_31_string); // 0xa9c ObjFunc
	var_44_string = "rat"; // 0xa9e PushS
	var_45_bool = var_31_string == var_44_string; // 0xa9f Eq
	if(var_45_bool == 0) goto Label_2724; // 0xaa0 JumpB
	var_25_bool = 0; // 0xaa1 MovB
	return 4; // 0xaa2 Return
	
Label_2724:
	var_46_string = "rat_big"; // 0xaa4 PushS
	var_47_bool = var_31_string == var_46_string; // 0xaa5 Eq
	if(var_47_bool == 0) goto Label_2730; // 0xaa6 JumpB
	var_25_bool = 0; // 0xaa7 MovB
	return 4; // 0xaa8 Return
	
Label_2730:
	var_48_string = "dog"; // 0xaaa PushS
	var_49_bool = var_31_string == var_48_string; // 0xaab Eq
	if(var_49_bool == 0) goto Label_2735; // 0xaac JumpB
	var_25_bool = 0; // 0xaad MovB
	return 4; // 0xaae Return
	
Label_2735:
	CanSee(var_32_bool, var_26_object); // 0xaaf Func
	var_50_bool = 0; // 0xab1 PushV
	var_50_bool = 1; // 0xab2 MovB
	var_51_bool = var_32_bool; // 0xab3 Push
	if(var_51_bool == 0) goto Label_2749; // 0xab4 JumpB
	var_52_float = 0; var_53_object = Obj(); // 0xab5 PushV
	var_53_object = var_26_object; // 0xab6 Mov
	func_1831(var_53_object); // 0xab7 NEW_2
	var_60_float = var_28_float * var_28_float; // 0xab9 Mult
	var_61_bool = var_52_float <= var_60_float; // 0xaba LE
	if(var_61_bool == 0) goto Label_2749; // 0xabb JumpB
	var_50_bool = 0; // 0xabc MovB
	
Label_2749:
	if(var_50_bool == 0) goto Label_2752; // 0xabd JumpB
	var_25_bool = 1; // 0xabe MovB
	return 4; // 0xabf Return
	
Label_2752:
	CanSee(var_32_bool, var_27_object); // 0xac0 Func
	var_62_bool = 0; // 0xac2 PushV
	var_62_bool = 1; // 0xac3 MovB
	var_63_bool = var_32_bool; // 0xac4 Push
	if(var_63_bool == 0) goto Label_2766; // 0xac5 JumpB
	var_64_float = 0; var_65_object = Obj(); // 0xac6 PushV
	var_65_object = var_27_object; // 0xac7 Mov
	func_1831(var_65_object); // 0xac8 NEW_2
	var_66_float = var_28_float * var_28_float; // 0xaca Mult
	var_67_bool = var_64_float <= var_66_float; // 0xacb LE
	if(var_67_bool == 0) goto Label_2766; // 0xacc JumpB
	var_62_bool = 0; // 0xacd MovB
	
Label_2766:
	if(var_62_bool == 0) goto Label_2769; // 0xace JumpB
	var_25_bool = 1; // 0xacf MovB
	return 4; // 0xad0 Return
	
Label_2769:
	var_25_bool = 0; // 0xad1 MovB
	return 4; // 0xad2 Return
}


func_2203(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0; // 0x89b PushV
	var_130_bool = var_115_int > var_116_int; // 0x89c GT
	if(var_130_bool == 0) goto Label_2210; // 0x89d JumpB
	var_131_string = "GenerateMoney: iMin > iMax"; // 0x89e PushS
	Trace(var_131_string); // 0x89f Func
	return 4; // 0x8a1 Return
	
Label_2210:
	var_128_int = 0; // 0x8a2 MovI
	var_132_bool = var_115_int != var_116_int; // 0x8a3 Neq
	if(var_132_bool == 0) goto Label_2217; // 0x8a4 JumpB
	var_133_int = var_116_int - var_115_int; // 0x8a5 Sub
	irand(var_128_int, var_133_int); // 0x8a6 Func
	goto Label_2221; // 0x8a8 Jump
	
Label_2221:
	var_128_int = var_128_int + var_115_int; // 0x8ad Add2
	var_134_int = 0; // 0x8ae PushI
	var_135_bool = var_128_int == var_134_int; // 0x8af Eq
	if(var_135_bool == 0) goto Label_2226; // 0x8b0 JumpB
	return 4; // 0x8b1 Return
	
Label_2226:
	var_136_int = 0; var_137_string = ""; // 0x8b2 PushV
	var_137_string = "Money"; // 0x8b3 MovS
	func_2450(var_136_int, var_137_string); // 0x8b4 NEW_2
	var_140_int = 0; // 0x8b6 PushI
	AddItem(var_129_bool, var_136_int, var_140_int, var_128_int); // 0x8b7 Func
	return 4; // 0x8b9 Return
	
Label_2217:
	var_141_int = 0; // 0x8a9 PushI
	var_142_bool = var_115_int == var_141_int; // 0x8aa Eq
	if(var_142_bool == 0) goto Label_2221; // 0x8ab JumpB
	return 4; // 0x8ac Return
}


func_171()
{
	var_18_bool = 0; // 0xab PushV
	func_2058(var_18_bool); // 0xac NEW_2
	var_21_bool = var_18_bool == 0; // 0xae Not
	if(var_21_bool == 0) goto Label_179; // 0xaf JumpB
	func_2790(); // 0xb1 NEW_2
	
Label_179:
	return 0; // 0xb3 Return
}


func_689()
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_bool = 0; // 0x2b1 PushV
	WaitForAnimEnd(); // 0x2b2 Func
	var_63_bool = 0; // 0x2b4 PushV
	func_2058(var_63_bool); // 0x2b5 NEW_2
	var_64_bool = var_63_bool == 0; // 0x2b7 Not
	if(var_64_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 14; // 0x2b9 Return
	
Label_698:
	var_65_int = 0; // 0x2ba PushV
	func_2635(var_65_int); // 0x2bb NEW_2
	var_56_int = var_65_int; // 0x2bc Mov
	var_57_int = 0; // 0x2be MovI
	
Label_703:
	var_78_bool = 0; // 0x2bf PushV
	var_78_bool = 0; // 0x2c0 MovB
	var_79_int = 5; // 0x2c1 PushI
	var_80_bool = var_57_int < var_79_int; // 0x2c2 LT
	if(var_80_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_81_bool = 0; // 0x2c4 PushV
	func_2058(var_81_bool); // 0x2c5 NEW_2
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
	func_2628(var_87_string, var_88_int); // 0x2d7 NEW_2
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


func_2234(var_229_string)
{
	var_230_object = Obj(); var_231_int = 0; var_232_bool = 0; var_233_object = Obj(); var_234_int = 0; var_235_bool = 0; // 0x8ba PushV
	CreateInvItem(var_233_object); // 0x8bb Func
	SetItemName(var_229_string); // 0x8bd ObjFunc
	var_236_string = "Organ"; // 0x8bf PushS
	var_237_int = 1; // 0x8c0 PushI
	SetProperty(var_236_string, var_237_int); // 0x8c1 ObjFunc
	GetItemID(var_234_int); // 0x8c3 ObjFunc
	var_238_int = 0; // 0x8c5 PushI
	var_239_int = 1; // 0x8c6 PushI
	AddItem(var_235_bool, var_233_object, var_238_int, var_239_int); // 0x8c7 Func
	return 6; // 0x8c9 Return
}


func_1212(var_2_bool)
{
	Stop(); // 0x4bc Func
	var_17_int = 120; // 0x4be PushI
	KillTimer(var_17_int); // 0x4bf Func
	var_2_bool = 1; // 0x4c1 TMovB
	return 0; // 0x4c2 Return
}


func_2251()
{
	var_223_int = 0; // 0x8cb PushV
	func_2184(var_223_int); // 0x8cc NEW_2
	var_227_int = 1; // 0x8ce PushI
	var_228_bool = var_223_int != var_227_int; // 0x8cf Neq
	if(var_228_bool == 0) goto Label_2258; // 0x8d0 JumpB
	return 0; // 0x8d1 Return
	
Label_2258:
	var_229_string = ""; // 0x8d2 PushV
	var_229_string = "liver"; // 0x8d3 MovS
	func_2234(var_229_string); // 0x8d4 NEW_2
	var_240_string = ""; // 0x8d6 PushV
	var_240_string = "kidney"; // 0x8d7 MovS
	func_2234(var_240_string); // 0x8d8 NEW_2
	var_241_string = ""; // 0x8da PushV
	var_241_string = "heart"; // 0x8db MovS
	func_2234(var_241_string); // 0x8dc NEW_2
	var_242_string = ""; // 0x8de PushV
	var_242_string = "blood"; // 0x8df MovS
	func_2234(var_242_string); // 0x8e0 NEW_2
	return 0; // 0x8e2 Return
}


func_1228(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x4cc PushV
	GetDirection(var_71_cvector); // 0x4cd Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x4cf PushV
	var_74_object = var_0_bool; // 0x4d0 MovT
	func_1824(var_74_object); // 0x4d1 NEW_2
	var_72_cvector = var_73_cvector; // 0x4d2 Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x4d4 PushV
	var_80_cvector = var_71_cvector; // 0x4d5 Mov
	var_81_cvector = var_72_cvector; // 0x4d6 Mov
	func_2131(var_79_float, var_80_cvector, var_81_cvector); // 0x4d7 NEW_2
	var_87_float = -0.34202; // 0x4d9 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x4da GE2
	return 4; // 0x4db Return
}


func_2771(var_19_int)
{
	var_19_int = 0; // 0xad4 MovI
	return 0; // 0xad5 Return
}


func_2774()
{
	return 0; // 0xad7 Return
}


func_2776(var_200_int)
{
	var_200_int = 0; // 0xad9 MovI
	return 0; // 0xada Return
}


func_2779()
{
	return 0; // 0xadc Return
}


func_1244(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x4dc PushV
	GetPosition(var_38_cvector); // 0x4dd Func
	GetPosition(var_39_cvector); // 0x4df TObjFunc
	GetDirection(var_40_cvector); // 0x4e1 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x4e3 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x4e4 PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x4e5 Sub2
	func_2121(var_46_cvector, var_47_cvector); // 0x4e6 NEW_2
	var_53_float = 0.75; // 0x4e8 PushF
	var_54_float = var_40_cvector * var_53_float; // 0x4e9 Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x4ea Add2
	func_2121(var_44_cvector, var_45_cvector); // 0x4eb NEW_2
	var_41_cvector = var_44_cvector; // 0x4ec Mov
	var_55_int = 32; // 0x4ee PushI
	var_56_float = 7000.0; // 0x4ef PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x4f0 Func
	var_57_int = 100; // 0x4f2 PushI
	var_43_float = var_43_float - var_57_int; // 0x4f3 Sub2
	var_58_int = 0; // 0x4f4 PushI
	var_59_bool = var_43_float < var_58_int; // 0x4f5 LT
	if(var_59_bool == 0) goto Label_1272; // 0x4f6 JumpB
	var_43_float = 0; // 0x4f7 MovI
	
Label_1272:
	var_30_cvector = var_42_cvector * var_43_float; // 0x4f8 Mult2
	return 12; // 0x4f9 Return
}


func_2781(var_19_int)
{
	var_19_int = 2; // 0xade MovI
	return 0; // 0xadf Return
}


func_2784(var_27_object)
{
	var_28_object = Obj(); // 0xae1 PushV
	var_28_object = var_27_object; // 0xae2 Mov
	func_2841(var_28_object); // 0xae3 NEW_2
	return 0; // 0xae5 Return
}


func_2275(var_109_bool)
{
	var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0; // 0x8e3 PushV
	var_114_bool = var_109_bool; // 0x8e4 Push
	if(var_114_bool == 0) goto Label_2364; // 0x8e5 JumpB
	var_115_int = 0; var_116_int = 0; // 0x8e6 PushV
	var_115_int = 0; // 0x8e7 MovI
	var_117_int = 100; // 0x8e8 PushI
	var_118_int = 0; // 0x8e9 PushV
	func_2175(var_118_int); // 0x8ea NEW_2
	var_124_int = 100; // 0x8ec PushI
	var_125_float = var_118_int * var_124_int; // 0x8ed Mult
	var_116_int = var_117_int + var_125_float; // 0x8ee Add2
	func_2203(var_115_int, var_116_int); // 0x8ef NEW_2
	var_143_int = 8; // 0x8f1 PushI
	irand(var_112_int, var_143_int); // 0x8f2 Func
	var_144_int = 0; // 0x8f4 PushI
	var_145_bool = var_112_int == var_144_int; // 0x8f5 Eq
	if(var_145_bool == 0) goto Label_2304; // 0x8f6 JumpB
	var_146_int = 0; var_147_string = ""; // 0x8f7 PushV
	var_147_string = "lemon"; // 0x8f8 MovS
	func_2450(var_146_int, var_147_string); // 0x8f9 NEW_2
	var_148_int = 0; // 0x8fb PushI
	var_149_int = 1; // 0x8fc PushI
	AddItem(var_113_bool, var_146_int, var_148_int, var_149_int); // 0x8fd Func
	goto Label_2363; // 0x8ff Jump
	
Label_2363:
	goto Label_2449; // 0x93b Jump
	
Label_2449:
	return 4; // 0x991 Return
	
Label_2304:
	var_150_int = 1; // 0x900 PushI
	var_151_bool = var_112_int == var_150_int; // 0x901 Eq
	if(var_151_bool == 0) goto Label_2316; // 0x902 JumpB
	var_152_int = 0; var_153_string = ""; // 0x903 PushV
	var_153_string = "rusk"; // 0x904 MovS
	func_2450(var_152_int, var_153_string); // 0x905 NEW_2
	var_154_int = 0; // 0x907 PushI
	var_155_int = 1; // 0x908 PushI
	AddItem(var_113_bool, var_152_int, var_154_int, var_155_int); // 0x909 Func
	goto Label_2363; // 0x90b Jump
	
Label_2316:
	var_156_int = 2; // 0x90c PushI
	var_157_bool = var_112_int == var_156_int; // 0x90d Eq
	if(var_157_bool == 0) goto Label_2328; // 0x90e JumpB
	var_158_int = 0; var_159_string = ""; // 0x90f PushV
	var_159_string = "hook"; // 0x910 MovS
	func_2450(var_158_int, var_159_string); // 0x911 NEW_2
	var_160_int = 0; // 0x913 PushI
	var_161_int = 1; // 0x914 PushI
	AddItem(var_113_bool, var_158_int, var_160_int, var_161_int); // 0x915 Func
	goto Label_2363; // 0x917 Jump
	
Label_2328:
	var_162_int = 4; // 0x918 PushI
	var_163_bool = var_112_int == var_162_int; // 0x919 Eq
	if(var_163_bool == 0) goto Label_2340; // 0x91a JumpB
	var_164_int = 0; var_165_string = ""; // 0x91b PushV
	var_165_string = "syringe"; // 0x91c MovS
	func_2450(var_164_int, var_165_string); // 0x91d NEW_2
	var_166_int = 0; // 0x91f PushI
	var_167_int = 1; // 0x920 PushI
	AddItem(var_113_bool, var_164_int, var_166_int, var_167_int); // 0x921 Func
	goto Label_2363; // 0x923 Jump
	
Label_2340:
	var_168_int = 5; // 0x924 PushI
	var_169_bool = var_112_int == var_168_int; // 0x925 Eq
	if(var_169_bool == 0) goto Label_2352; // 0x926 JumpB
	var_170_int = 0; var_171_string = ""; // 0x927 PushV
	var_171_string = "watch"; // 0x928 MovS
	func_2450(var_170_int, var_171_string); // 0x929 NEW_2
	var_172_int = 0; // 0x92b PushI
	var_173_int = 1; // 0x92c PushI
	AddItem(var_113_bool, var_170_int, var_172_int, var_173_int); // 0x92d Func
	goto Label_2363; // 0x92f Jump
	
Label_2352:
	var_174_int = 6; // 0x930 PushI
	var_175_bool = var_112_int == var_174_int; // 0x931 Eq
	if(var_175_bool == 0) goto Label_2363; // 0x932 JumpB
	var_176_int = 0; var_177_string = ""; // 0x933 PushV
	var_177_string = "razor"; // 0x934 MovS
	func_2450(var_176_int, var_177_string); // 0x935 NEW_2
	var_178_int = 0; // 0x937 PushI
	var_179_int = 1; // 0x938 PushI
	AddItem(var_113_bool, var_176_int, var_178_int, var_179_int); // 0x939 Func
	
Label_2364:
	var_180_int = 0; var_181_int = 0; // 0x93c PushV
	var_180_int = 0; // 0x93d MovI
	var_182_int = 50; // 0x93e PushI
	var_183_int = 0; // 0x93f PushV
	func_2175(var_183_int); // 0x940 NEW_2
	var_184_int = 50; // 0x942 PushI
	var_185_float = var_183_int * var_184_int; // 0x943 Mult
	var_181_int = var_182_int + var_185_float; // 0x944 Add2
	func_2203(var_180_int, var_181_int); // 0x945 NEW_2
	var_186_int = 7; // 0x947 PushI
	irand(var_112_int, var_186_int); // 0x948 Func
	var_187_int = 0; // 0x94a PushI
	var_188_bool = var_112_int == var_187_int; // 0x94b Eq
	if(var_188_bool == 0) goto Label_2390; // 0x94c JumpB
	var_189_int = 0; var_190_string = ""; // 0x94d PushV
	var_190_string = "beads"; // 0x94e MovS
	func_2450(var_189_int, var_190_string); // 0x94f NEW_2
	var_191_int = 0; // 0x951 PushI
	var_192_int = 1; // 0x952 PushI
	AddItem(var_113_bool, var_189_int, var_191_int, var_192_int); // 0x953 Func
	goto Label_2449; // 0x955 Jump
	
Label_2390:
	var_193_int = 1; // 0x956 PushI
	var_194_bool = var_112_int == var_193_int; // 0x957 Eq
	if(var_194_bool == 0) goto Label_2402; // 0x958 JumpB
	var_195_int = 0; var_196_string = ""; // 0x959 PushV
	var_196_string = "bracelet"; // 0x95a MovS
	func_2450(var_195_int, var_196_string); // 0x95b NEW_2
	var_197_int = 0; // 0x95d PushI
	var_198_int = 1; // 0x95e PushI
	AddItem(var_113_bool, var_195_int, var_197_int, var_198_int); // 0x95f Func
	goto Label_2449; // 0x961 Jump
	
Label_2402:
	var_199_int = 2; // 0x962 PushI
	var_200_bool = var_112_int == var_199_int; // 0x963 Eq
	if(var_200_bool == 0) goto Label_2414; // 0x964 JumpB
	var_201_int = 0; var_202_string = ""; // 0x965 PushV
	var_202_string = "ear_ring"; // 0x966 MovS
	func_2450(var_201_int, var_202_string); // 0x967 NEW_2
	var_203_int = 0; // 0x969 PushI
	var_204_int = 1; // 0x96a PushI
	AddItem(var_113_bool, var_201_int, var_203_int, var_204_int); // 0x96b Func
	goto Label_2449; // 0x96d Jump
	
Label_2414:
	var_205_int = 3; // 0x96e PushI
	var_206_bool = var_112_int == var_205_int; // 0x96f Eq
	if(var_206_bool == 0) goto Label_2426; // 0x970 JumpB
	var_207_int = 0; var_208_string = ""; // 0x971 PushV
	var_208_string = "gold_ring"; // 0x972 MovS
	func_2450(var_207_int, var_208_string); // 0x973 NEW_2
	var_209_int = 0; // 0x975 PushI
	var_210_int = 1; // 0x976 PushI
	AddItem(var_113_bool, var_207_int, var_209_int, var_210_int); // 0x977 Func
	goto Label_2449; // 0x979 Jump
	
Label_2426:
	var_211_int = 4; // 0x97a PushI
	var_212_bool = var_112_int == var_211_int; // 0x97b Eq
	if(var_212_bool == 0) goto Label_2438; // 0x97c JumpB
	var_213_int = 0; var_214_string = ""; // 0x97d PushV
	var_214_string = "silver_ring"; // 0x97e MovS
	func_2450(var_213_int, var_214_string); // 0x97f NEW_2
	var_215_int = 0; // 0x981 PushI
	var_216_int = 1; // 0x982 PushI
	AddItem(var_113_bool, var_213_int, var_215_int, var_216_int); // 0x983 Func
	goto Label_2449; // 0x985 Jump
	
Label_2438:
	var_217_int = 5; // 0x986 PushI
	var_218_bool = var_112_int == var_217_int; // 0x987 Eq
	if(var_218_bool == 0) goto Label_2449; // 0x988 JumpB
	var_219_int = 0; var_220_string = ""; // 0x989 PushV
	var_220_string = "flower"; // 0x98a MovS
	func_2450(var_219_int, var_220_string); // 0x98b NEW_2
	var_221_int = 0; // 0x98d PushI
	var_222_int = 1; // 0x98e PushI
	AddItem(var_113_bool, var_219_int, var_221_int, var_222_int); // 0x98f Func
}


func_2790()
{
	return 0; // 0xae6 Return
}


func_2791(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0xae7 PushV
	CanSee(var_25_bool, var_23_object); // 0xae8 Func
	var_22_bool = var_25_bool; // 0xaea Mov
	return 2; // 0xaeb Return
}


func_2796(var_34_object)
{
	var_35_object = Obj(); // 0xaed PushV
	var_35_object = var_34_object; // 0xaee Mov
	TaskCall(6); // 0xaef TaskCall
	func_1468(var_36_object, var_37_cvector, var_38_bool, var_35_object); // 0xaf0 NEW_2
	TaskReturn(); // 0xaf1 TaskReturn
	return 0; // 0xaf3 Return
}


func_2804(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0xaf4 PushV
	CanSee(var_34_bool, var_32_object); // 0xaf5 Func
	var_31_bool = 1; // 0xaf7 MovB
	var_35_bool = var_34_bool; // 0xaf8 Push
	if(var_35_bool == 0) goto Label_2818; // 0xaf9 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0xafa PushV
	var_37_object = var_32_object; // 0xafb Mov
	func_1831(var_37_object); // 0xafc NEW_2
	var_44_int = 4000000; // 0xafe PushI
	var_45_bool = var_36_float <= var_44_int; // 0xaff LE
	if(var_45_bool == 0) goto Label_2818; // 0xb00 JumpB
	var_31_bool = 0; // 0xb01 MovB
	
Label_2818:
	return 2; // 0xb02 Return
}


func_1274(var_0_bool, var_1_bool, var_2_bool, var_106_object)
{
	var_110_cvector = CVector(0,0,0); var_111_float = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; // 0x4fa PushV
	var_0_bool = var_106_object; // 0x4fb TMov
	var_120_cvector = CVector(0,0,0); var_121_float = 0; // 0x4fc PushV
	var_121_float = 1.74533; // 0x4fd MovF
	func_1244(var_120_cvector, var_121_float); // 0x4fe NEW_2
	var_115_cvector = var_120_cvector; // 0x4ff Mov
	var_116_float = var_115_cvector | var_115_cvector; // 0x501 Or2
	var_150_float = 2500.0; // 0x502 PushF
	var_151_bool = var_116_float < var_150_float; // 0x503 LT
	if(var_151_bool == 0) goto Label_1303; // 0x504 JumpB
	var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0x505 PushV
	var_153_float = 2.61799; // 0x506 MovF
	func_1244(var_152_cvector, var_153_float); // 0x507 NEW_2
	var_115_cvector = var_152_cvector; // 0x508 Mov
	var_116_float = var_115_cvector | var_115_cvector; // 0x50a Or2
	var_154_float = 2500.0; // 0x50b PushF
	var_155_bool = var_116_float < var_154_float; // 0x50c LT
	if(var_155_bool == 0) goto Label_1303; // 0x50d JumpB
	var_156_string = "Can't retreat, distance: "; // 0x50e PushS
	var_157_float = sqrt(var_116_float); // 0x50f Sqrt
	var_158_int = var_156_string + var_157_float; // 0x510 Add
	Trace(var_158_int); // 0x511 Func
	var_159_float = 0.5; // 0x513 PushF
	Sleep(var_159_float); // 0x514 Func
	return 10; // 0x516 Return
	
Label_1303:
	var_160_float = GetByIndex(var_115_cvector, 0); // 0x517 PushE
	var_161_float = GetByIndex(var_115_cvector, 2); // 0x518 PushE
	Rotate(var_160_float, var_161_float); // 0x519 Func
	var_162_cvector = CVector(0,0,0); // 0x51b PushV
	func_1819(var_162_cvector); // 0x51c NEW_2
	var_1_bool = var_162_cvector + var_115_cvector; // 0x51e Add2
	var_165_int = 120; // 0x51f PushI
	var_166_float = 0.5; // 0x520 PushF
	SetTimer(var_165_int, var_166_float); // 0x521 Func
	var_2_bool = 0; // 0x523 TMovB
	
Label_1316:
	var_167_int = 1; // 0x524 PushI
	MovePoint(var_167_int, var_167_int, var_117_bool); // 0x525 Func
	var_168_bool = var_117_bool; // 0x527 Push
	if(var_168_bool == 0) goto Label_1344; // 0x528 JumpB
	var_169_bool = var_0_bool == 0; // 0x529 NullEq
	if(var_169_bool == 0) goto Label_1325; // 0x52a JumpB
	goto Label_1346; // 0x52b Jump
	
Label_1346:
	return 10; // 0x542 Return
	
Label_1325:
	var_170_cvector = CVector(0,0,0); var_171_float = 0; // 0x52d PushV
	var_171_float = 2.61799; // 0x52e MovF
	func_1244(var_170_cvector, var_171_float); // 0x52f NEW_2
	var_118_cvector = var_170_cvector; // 0x530 Mov
	var_119_float = var_118_cvector | var_118_cvector; // 0x532 Or2
	var_172_float = 2500.0; // 0x533 PushF
	var_173_bool = var_119_float >= var_172_float; // 0x534 GE
	if(var_173_bool == 0) goto Label_1343; // 0x535 JumpB
	var_174_cvector = CVector(0,0,0); // 0x536 PushV
	func_1819(var_174_cvector); // 0x537 NEW_2
	var_1_bool = var_174_cvector + var_118_cvector; // 0x539 Add2
	var_175_int = 120; // 0x53a PushI
	var_176_float = 0.5; // 0x53b PushF
	SetTimer(var_175_int, var_176_float); // 0x53c Func
	goto Label_1344; // 0x53e Jump
	
Label_1344:
	var_177_bool = var_2_bool == 0; // 0x540 Not
	if(var_177_bool == 0) goto Label_1316; // 0x541 JumpB
	
Label_1343:
	goto Label_1346; // 0x53f Jump
}


func_1787(var_2_bool)
{
	Stop(); // 0x6fb Func
	var_17_int = 120; // 0x6fd PushI
	KillTimer(var_17_int); // 0x6fe Func
	var_2_bool = 1; // 0x700 TMovB
	return 0; // 0x701 Return
}


func_768(var_90_bool)
{
	var_90_bool = 1; // 0x300 MovB
	return 0; // 0x301 Return
}


func_770()
{
	StopAnimation(); // 0x302 Func
	StopGroup0(); // 0x304 Func
	return 0; // 0x306 Return
}


func_2819(var_131_object)
{
	var_132_object = Obj(); // 0xb04 PushV
	var_132_object = var_131_object; // 0xb05 Mov
	TaskCall(7); // 0xb06 TaskCall
	func_1662(var_133_object, var_134_cvector, var_135_bool, var_132_object); // 0xb07 NEW_2
	TaskReturn(); // 0xb08 TaskReturn
	return 0; // 0xb0a Return
}


func_775(var_0_bool, var_68_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; // 0x307 PushV
	var_0_bool = var_68_object; // 0x308 TMov
	func_826(var_75_bool); // 0x30a NEW_2
	GetDirection(var_73_cvector); // 0x30c Func
	var_83_cvector = CVector(0,0,0); var_84_object = Obj(); // 0x30e PushV
	var_84_object = var_0_bool; // 0x30f MovT
	func_1824(var_84_object); // 0x310 NEW_2
	var_74_cvector = var_83_cvector; // 0x311 Mov
	var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x313 PushV
	var_90_cvector = var_73_cvector; // 0x314 Mov
	var_91_cvector = var_74_cvector; // 0x315 Mov
	func_2158(var_89_float, var_90_cvector, var_91_cvector); // 0x316 NEW_2
	var_113_int = 0; // 0x318 PushI
	var_114_bool = var_89_float < var_113_int; // 0x319 LT
	if(var_114_bool == 0) goto Label_801; // 0x31a JumpB
	var_115_object = Obj(); // 0x31b PushV
	var_115_object = var_0_bool; // 0x31c MovT
	func_2047(); // 0x31d NEW_2
	var_75_bool = 1; // 0x31f MovB
	goto Label_804; // 0x320 Jump
	
Label_804:
	var_124_bool = var_75_bool; // 0x324 Push
	if(var_124_bool == 0) goto Label_820; // 0x325 JumpB
	var_125_object = Obj(); // 0x326 PushV
	var_125_object = var_0_bool; // 0x327 MovT
	func_2047(); // 0x328 NEW_2
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


func_1803(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x70b PushV
	GetDirection(var_71_cvector); // 0x70c Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x70e PushV
	var_74_object = var_0_bool; // 0x70f MovT
	func_1824(var_74_object); // 0x710 NEW_2
	var_72_cvector = var_73_cvector; // 0x711 Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x713 PushV
	var_80_cvector = var_71_cvector; // 0x714 Mov
	var_81_cvector = var_72_cvector; // 0x715 Mov
	func_2131(var_79_float, var_80_cvector, var_81_cvector); // 0x716 NEW_2
	var_87_float = -0.34202; // 0x718 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x719 GE2
	return 4; // 0x71a Return
}


func_2827(var_48_bool)
{
	var_48_bool = 0; // 0xb0c MovB
	return 0; // 0xb0d Return
}


func_2830()
{
	return 0; // 0xb0f Return
}


func_2832(var_24_bool)
{
	var_24_bool = 0; // 0xb11 MovB
	return 0; // 0xb12 Return
}


func_2835()
{
	return 0; // 0xb14 Return
}


func_2837()
{
	var_17_bool = GlobalVars[0]; // 0xb15 PushGE
	var_17_bool = 0; // 0xb16 MovB
	GlobalVars[0] = var_17_bool; // 0xb17 PopGE
	return 0; // 0xb18 Return
}


func_2841(var_28_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0xb19 PushV
	var_31_bool = GlobalVars[0]; // 0xb1a PushGE
	if(var_31_bool == 0) goto Label_2854; // 0xb1b JumpB
	IsOverrideActive(var_30_bool); // 0xb1c Func
	var_32_bool = var_30_bool == 0; // 0xb1e Not
	if(var_32_bool == 0) goto Label_2852; // 0xb1f JumpB
	var_33_object = Obj(); // 0xb20 PushV
	var_33_object = var_28_object; // 0xb21 Mov
	func_2190(var_33_object); // 0xb22 NEW_2
	
Label_2852:
	return 2; // 0xb24 Return
	
Label_2854:
	return 2; // 0xb26 Return
}


func_1819(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); // 0x71b PushV
	GetPosition(var_90_cvector); // 0x71c Func
	var_88_cvector = var_90_cvector; // 0x71e Mov
	return 2; // 0x71f Return
}


func_1824(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x720 PushV
	GetPosition(var_54_cvector); // 0x721 Func
	GetPosition(var_55_cvector); // 0x723 ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x725 Sub2
	return 4; // 0x726 Return
}


func_2855(var_61_bool)
{
	var_61_bool = 1; // 0xb27 MovB
	return 0; // 0xb28 Return
}


func_1831(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x727 PushV
	GetPosition(var_41_cvector); // 0x728 Func
	GetPosition(var_42_cvector); // 0x72a ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x72c Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x72d Or2
	return 6; // 0x72e Return
}


func_2857(var_21_bool, var_22_object, var_23_object)
{
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_float = 0; // 0xb2a PushV
	var_26_object = var_22_object; // 0xb2b Mov
	var_27_object = var_23_object; // 0xb2c Mov
	var_28_float = 700.0; // 0xb2d MovF
	func_2705(var_25_bool, var_26_object, var_27_object, var_28_float); // 0xb2e NEW_2
	var_21_bool = var_25_bool; // 0xb2f Mov
	return 0; // 0xb31 Return
}


func_1839(var_100_bool, var_101_object)
{
	var_102_bool = 0; var_103_bool = 0; // 0x72f PushV
	IsPlayerActor(var_101_object, var_103_bool); // 0x730 Func
	var_100_bool = var_103_bool; // 0x732 Mov
	return 2; // 0x733 Return
}


func_2866(var_99_object)
{
	var_100_bool = 0; var_101_object = Obj(); // 0xb33 PushV
	var_101_object = var_99_object; // 0xb34 Mov
	func_1839(var_100_bool, var_101_object); // 0xb35 NEW_2
	if(var_100_bool == 0) goto Label_2883; // 0xb37 JumpB
	var_104_object = Obj(); // 0xb38 PushV
	func_2115(var_104_object); // 0xb39 NEW_2
	var_107_float = -0.05; // 0xb3b PushF
	var_108_bool = 1; // 0xb3c PushB
	ReportReputationChange(var_99_object, var_104_object, var_107_float, var_108_bool); // 0xb3d Func
	var_109_bool = 0; // 0xb3f PushV
	var_109_bool = 1; // 0xb40 MovB
	func_2275(var_109_bool); // 0xb41 NEW_2
	
Label_2883:
	func_2251(); // 0xb44 NEW_2
	var_243_bool = GlobalVars[0]; // 0xb46 PushGE
	var_243_bool = 1; // 0xb47 MovB
	GlobalVars[0] = var_243_bool; // 0xb48 PopGE
	var_244_int = 50; // 0xb49 PushI
	var_245_int = 40; // 0xb4a PushI
	SetRTEnvelope(var_244_int, var_245_int); // 0xb4b Func
	return 0; // 0xb4d Return
}


func_1844(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0; // 0x734 PushV
	var_50_string = "HasProperty"; // 0x735 PushS
	var_51_int = 2; // 0x736 PushI
	var_52_bool = IsFuncExist(var_46_object, var_50_string, var_51_int); // 0x737 FuncExist
	var_53_bool = var_52_bool == 0; // 0x738 Not
	if(var_53_bool == 0) goto Label_1852; // 0x739 JumpB
	var_45_bool = 0; // 0x73a MovB
	return 2; // 0x73b Return
	
Label_1852:
	HasProperty(var_47_string, var_49_bool); // 0x73c ObjFunc
	var_45_bool = var_49_bool; // 0x73e Mov
	return 2; // 0x73f Return
}


func_826(var_0_bool)
{
	var_76_object = Obj(); // 0x33a PushV
	var_76_object = var_0_bool; // 0x33b MovT
	func_2063(var_76_object); // 0x33c NEW_2
	return 0; // 0x33e Return
}


func_1856(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x740 PushV
	IsDead(var_41_bool); // 0x741 ObjFunc
	var_38_bool = var_41_bool; // 0x743 Mov
	return 2; // 0x744 Return
}


func_1861(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x745 PushV
	var_33_bool = var_28_object == 0; // 0x746 NullEq
	if(var_33_bool == 0) goto Label_1866; // 0x747 JumpB
	var_27_bool = 0; // 0x748 MovB
	return 4; // 0x749 Return
	
Label_1866:
	var_34_bool = 0; // 0x74a PushV
	var_34_bool = 0; // 0x74b MovB
	var_35_string = "IsDead"; // 0x74c PushS
	var_36_int = 1; // 0x74d PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x74e FuncExist
	if(var_37_bool == 0) goto Label_1878; // 0x74f JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x750 PushV
	var_39_object = var_28_object; // 0x751 Mov
	func_1856(var_39_object); // 0x752 NEW_2
	if(var_38_bool == 0) goto Label_1878; // 0x754 JumpB
	var_34_bool = 1; // 0x755 MovB
	
Label_1878:
	if(var_34_bool == 0) goto Label_1881; // 0x756 JumpB
	var_27_bool = 0; // 0x757 MovB
	return 4; // 0x758 Return
	
Label_1881:
	GetScene(var_31_object); // 0x759 Func
	var_42_bool = var_31_object == 0; // 0x75b NullEq
	if(var_42_bool == 0) goto Label_1887; // 0x75c JumpB
	var_27_bool = 0; // 0x75d MovB
	return 4; // 0x75e Return
	
Label_1887:
	GetScene(var_32_object); // 0x75f ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x761 Neq
	if(var_43_bool == 0) goto Label_1893; // 0x762 JumpB
	var_27_bool = 0; // 0x763 MovB
	return 4; // 0x764 Return
	
Label_1893:
	var_27_bool = 1; // 0x765 MovB
	return 4; // 0x766 Return
}


func_1897(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x769 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x76a PushV
	var_28_object = var_24_object; // 0x76b Mov
	func_1861(var_27_bool, var_28_object); // 0x76c NEW_2
	var_44_bool = var_27_bool == 0; // 0x76e Not
	if(var_44_bool == 0) goto Label_1906; // 0x76f JumpB
	var_23_bool = 0; // 0x770 MovB
	return 2; // 0x771 Return
	
Label_1906:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x772 PushV
	var_46_object = var_24_object; // 0x773 Mov
	var_47_string = "noaccess"; // 0x774 MovS
	func_1844(var_45_bool, var_46_object, var_47_string); // 0x775 NEW_2
	var_54_bool = var_45_bool == 0; // 0x777 Not
	if(var_54_bool == 0) goto Label_1915; // 0x778 JumpB
	var_23_bool = 1; // 0x779 MovB
	return 2; // 0x77a Return
	
Label_1915:
	var_55_string = "noaccess"; // 0x77b PushS
	GetProperty(var_55_string, var_26_int); // 0x77c ObjFunc
	var_56_int = 0; // 0x77e PushI
	var_23_bool = var_26_int == var_56_int; // 0x77f Eq2
	return 2; // 0x780 Return
}


func_367(var_2_bool)
{
	var_17_int = 110; // 0x16f PushI
	KillTimer(var_17_int); // 0x170 Func
	var_2_bool = 0; // 0x172 TMovB
	func_503(var_15_cvector, var_16_bool); // 0x174 NEW_2
	return 0; // 0x176 Return
}


func_375(var_2_bool)
{
	var_66_int = 110; // 0x177 PushI
	KillTimer(var_66_int); // 0x178 Func
	var_2_bool = 0; // 0x17a TMovB
	func_510(var_20_bool, var_21_int); // 0x17c NEW_2
	return 0; // 0x17e Return
}


func_1399(var_2_bool)
{
	Stop(); // 0x577 Func
	var_17_int = 120; // 0x579 PushI
	KillTimer(var_17_int); // 0x57a Func
	var_2_bool = 1; // 0x57c TMovB
	return 0; // 0x57d Return
}


func_1921(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x781 PushV
	var_48_bool = var_33_object == 0; // 0x782 NullEq
	if(var_48_bool == 0) goto Label_1925; // 0x783 JumpB
	return 14; // 0x784 Return
	
Label_1925:
	IsDead(var_41_bool); // 0x785 Func
	var_49_bool = var_41_bool; // 0x787 Push
	if(var_49_bool == 0) goto Label_1930; // 0x788 JumpB
	return 14; // 0x789 Return
	
Label_1930:
	GetSecondaryAnimationType(var_42_int); // 0x78a Func
	var_50_int = 0; // 0x78c PushI
	var_51_bool = var_42_int < var_50_int; // 0x78d LT
	if(var_51_bool == 0) goto Label_1936; // 0x78e JumpB
	return 14; // 0x78f Return
	
Label_1936:
	GetPosition(var_43_cvector); // 0x790 ObjFunc
	GetPosition(var_44_cvector); // 0x792 Func
	GetDirection(var_45_cvector); // 0x794 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x796 Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x797 PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x798 PushE
	var_54_float = var_52_float * var_53_float; // 0x799 Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x79a PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x79b PushE
	var_57_float = var_55_float * var_56_float; // 0x79c Mult
	var_58_int = var_54_float + var_57_float; // 0x79d Add
	var_59_int = 0; // 0x79e PushI
	var_60_bool = var_58_int >= var_59_int; // 0x79f GE
	if(var_60_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_47_string = "fhit"; // 0x7a1 MovS
	goto Label_1956; // 0x7a2 Jump
	
Label_1956:
	var_61_string = "hit_react"; // 0x7a4 PushS
	var_62_string = "1"; // 0x7a5 PushS
	var_63_int = var_47_string + var_62_string; // 0x7a6 Add
	var_64_string = "2"; // 0x7a7 PushS
	var_65_int = var_47_string + var_64_string; // 0x7a8 Add
	var_66_int = -10; // 0x7a9 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x7aa Func
	return 14; // 0x7ac Return
	
Label_1955:
	var_47_string = "bhit"; // 0x7a3 MovS
}


func_1415(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x587 PushV
	GetDirection(var_71_cvector); // 0x588 Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x58a PushV
	var_74_object = var_0_bool; // 0x58b MovT
	func_1824(var_74_object); // 0x58c NEW_2
	var_72_cvector = var_73_cvector; // 0x58d Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x58f PushV
	var_80_cvector = var_71_cvector; // 0x590 Mov
	var_81_cvector = var_72_cvector; // 0x591 Mov
	func_2131(var_79_float, var_80_cvector, var_81_cvector); // 0x592 NEW_2
	var_87_float = -0.34202; // 0x594 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x595 GE2
	return 4; // 0x596 Return
}


func_392(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; // 0x188 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x189 PushV
	var_23_object = var_17_object; // 0x18a Mov
	func_1897(var_22_bool, var_23_object); // 0x18b NEW_2
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
	func_2652(var_60_object); // 0x19a NEW_2
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
	func_2661(var_67_object); // 0x1a8 NEW_2
	var_2_bool = 1; // 0x1aa TMovB
	var_132_int = 110; // 0x1ab PushI
	var_133_float = 10.0; // 0x1ac PushF
	SetTimer(var_132_int, var_133_float); // 0x1ad Func
	
Label_431:
	return 4; // 0x1af Return
}


func_2450(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0; // 0x992 PushV
	GetInvItemByName(var_139_int, var_137_string); // 0x993 Func
	var_136_int = var_139_int; // 0x995 Mov
	return 2; // 0x996 Return
}


func_2455(var_17_object)
{
	var_18_object = Obj(); // 0x998 PushV
	var_18_object = var_17_object; // 0x999 Mov
	TaskCall(0); // 0x99a TaskCall
	func_0(var_18_object); // 0x99b NEW_2
	TaskReturn(); // 0x99c TaskReturn
	return 0; // 0x99e Return
}


func_1438(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x59e PushV
	GetPosition(var_38_cvector); // 0x59f Func
	GetPosition(var_39_cvector); // 0x5a1 TObjFunc
	GetDirection(var_40_cvector); // 0x5a3 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x5a5 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x5a6 PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x5a7 Sub2
	func_2121(var_46_cvector, var_47_cvector); // 0x5a8 NEW_2
	var_53_float = 0.75; // 0x5aa PushF
	var_54_float = var_40_cvector * var_53_float; // 0x5ab Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x5ac Add2
	func_2121(var_44_cvector, var_45_cvector); // 0x5ad NEW_2
	var_41_cvector = var_44_cvector; // 0x5ae Mov
	var_55_int = 32; // 0x5b0 PushI
	var_56_float = 7000.0; // 0x5b1 PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x5b2 Func
	var_57_int = 100; // 0x5b4 PushI
	var_43_float = var_43_float - var_57_int; // 0x5b5 Sub2
	var_58_int = 0; // 0x5b6 PushI
	var_59_bool = var_43_float < var_58_int; // 0x5b7 LT
	if(var_59_bool == 0) goto Label_1466; // 0x5b8 JumpB
	var_43_float = 0; // 0x5b9 MovI
	
Label_1466:
	var_30_cvector = var_42_cvector * var_43_float; // 0x5ba Mult2
	return 12; // 0x5bb Return
}


func_1965(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x7ad PushV
	var_41_bool = 0; // 0x7ae PushV
	var_41_bool = 0; // 0x7af MovB
	var_42_bool = 0; // 0x7b0 PushV
	var_42_bool = 0; // 0x7b1 MovB
	var_43_object = var_20_object; // 0x7b2 Push
	if(var_43_object == 0) goto Label_1976; // 0x7b3 JumpB
	var_44_int = 4; // 0x7b4 PushI
	var_45_bool = var_21_int != var_44_int; // 0x7b5 Neq
	if(var_45_bool == 0) goto Label_1976; // 0x7b6 JumpB
	var_42_bool = 1; // 0x7b7 MovB
	
Label_1976:
	if(var_42_bool == 0) goto Label_1981; // 0x7b8 JumpB
	var_46_int = 5; // 0x7b9 PushI
	var_47_bool = var_21_int != var_46_int; // 0x7ba Neq
	if(var_47_bool == 0) goto Label_1981; // 0x7bb JumpB
	var_41_bool = 1; // 0x7bc MovB
	
Label_1981:
	if(var_41_bool == 0) goto Label_2028; // 0x7bd JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x7be PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x7bf PushV
	var_51_object = var_20_object; // 0x7c0 Mov
	func_1824(var_51_object); // 0x7c1 NEW_2
	var_49_cvector = var_50_cvector; // 0x7c2 Mov
	func_2121(var_48_cvector, var_49_cvector); // 0x7c4 NEW_2
	var_32_cvector = var_48_cvector; // 0x7c5 Mov
	CreateVectorVector(var_33_object); // 0x7c7 Func
	var_34_int = 1; // 0x7c9 MovI
	
Label_1994:
	var_61_string = "hit"; // 0x7ca PushS
	var_62_int = var_61_string + var_34_int; // 0x7cb Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x7cc Func
	var_63_bool = var_35_bool == 0; // 0x7ce Not
	if(var_63_bool == 0) goto Label_2001; // 0x7cf JumpB
	goto Label_2010; // 0x7d0 Jump
	
Label_2010:
	size(var_38_int); // 0x7da ObjFunc
	var_64_int = var_38_int; // 0x7dc Push
	if(var_64_int == 0) goto Label_2027; // 0x7dd JumpB
	irand(var_39_int, var_38_int); // 0x7de Func
	get(var_40_cvector, var_39_int); // 0x7e0 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x7e2 PushV
	var_65_object = var_20_object; // 0x7e3 Mov
	var_66_int = var_21_int; // 0x7e4 Mov
	var_67_float = var_22_float; // 0x7e5 Mov
	var_68_cvector = var_40_cvector; // 0x7e6 Mov
	var_69_cvector = -var_32_cvector; // 0x7e7 Neg2
	func_2033(var_67_float, var_68_cvector, var_69_cvector); // 0x7e8 NEW_2
	return 18; // 0x7ea Return
	
Label_2027:
	var_33_object = 0; // 0x7eb SetNull
	
Label_2028:
	var_110_object = Obj(); // 0x7ec PushV
	var_110_object = var_20_object; // 0x7ed Mov
	func_1921(var_110_object); // 0x7ee NEW_2
	return 18; // 0x7f0 Return
	
Label_2001:
	var_111_int = var_37_cvector | var_32_cvector; // 0x7d1 Or
	var_112_float = 0.70711; // 0x7d2 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x7d3 GE
	if(var_113_bool == 0) goto Label_2007; // 0x7d4 JumpB
	add(var_36_cvector); // 0x7d5 ObjFunc
	
Label_2007:
	var_114_int = 1; // 0x7d7 PushI
	var_34_int = var_34_int + var_114_int; // 0x7d8 Add2
	goto Label_1994; // 0x7d9 Jump
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


func_1468(var_0_bool, var_1_bool, var_2_bool, var_35_object)
{
	var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0x5bc PushV
	var_0_bool = var_35_object; // 0x5bd TMov
	var_49_cvector = CVector(0,0,0); var_50_float = 0; // 0x5be PushV
	var_50_float = 1.74533; // 0x5bf MovF
	func_1438(var_49_cvector, var_50_float); // 0x5c0 NEW_2
	var_44_cvector = var_49_cvector; // 0x5c1 Mov
	var_45_float = var_44_cvector | var_44_cvector; // 0x5c3 Or2
	var_79_float = 2500.0; // 0x5c4 PushF
	var_80_bool = var_45_float < var_79_float; // 0x5c5 LT
	if(var_80_bool == 0) goto Label_1497; // 0x5c6 JumpB
	var_81_cvector = CVector(0,0,0); var_82_float = 0; // 0x5c7 PushV
	var_82_float = 2.61799; // 0x5c8 MovF
	func_1438(var_81_cvector, var_82_float); // 0x5c9 NEW_2
	var_44_cvector = var_81_cvector; // 0x5ca Mov
	var_45_float = var_44_cvector | var_44_cvector; // 0x5cc Or2
	var_83_float = 2500.0; // 0x5cd PushF
	var_84_bool = var_45_float < var_83_float; // 0x5ce LT
	if(var_84_bool == 0) goto Label_1497; // 0x5cf JumpB
	var_85_string = "Can't retreat, distance: "; // 0x5d0 PushS
	var_86_float = sqrt(var_45_float); // 0x5d1 Sqrt
	var_87_int = var_85_string + var_86_float; // 0x5d2 Add
	Trace(var_87_int); // 0x5d3 Func
	var_88_float = 0.5; // 0x5d5 PushF
	Sleep(var_88_float); // 0x5d6 Func
	return 10; // 0x5d8 Return
	
Label_1497:
	var_89_float = GetByIndex(var_44_cvector, 0); // 0x5d9 PushE
	var_90_float = GetByIndex(var_44_cvector, 2); // 0x5da PushE
	Rotate(var_89_float, var_90_float); // 0x5db Func
	var_91_cvector = CVector(0,0,0); // 0x5dd PushV
	func_1819(var_91_cvector); // 0x5de NEW_2
	var_1_bool = var_91_cvector + var_44_cvector; // 0x5e0 Add2
	var_94_int = 120; // 0x5e1 PushI
	var_95_float = 0.5; // 0x5e2 PushF
	SetTimer(var_94_int, var_95_float); // 0x5e3 Func
	var_2_bool = 0; // 0x5e5 TMovB
	
Label_1510:
	var_96_int = 1; // 0x5e6 PushI
	MovePoint(var_96_int, var_96_int, var_46_bool); // 0x5e7 Func
	var_97_bool = var_46_bool; // 0x5e9 Push
	if(var_97_bool == 0) goto Label_1538; // 0x5ea JumpB
	var_98_bool = var_0_bool == 0; // 0x5eb NullEq
	if(var_98_bool == 0) goto Label_1519; // 0x5ec JumpB
	goto Label_1540; // 0x5ed Jump
	
Label_1540:
	return 10; // 0x604 Return
	
Label_1519:
	var_99_cvector = CVector(0,0,0); var_100_float = 0; // 0x5ef PushV
	var_100_float = 2.61799; // 0x5f0 MovF
	func_1438(var_99_cvector, var_100_float); // 0x5f1 NEW_2
	var_47_cvector = var_99_cvector; // 0x5f2 Mov
	var_48_float = var_47_cvector | var_47_cvector; // 0x5f4 Or2
	var_101_float = 2500.0; // 0x5f5 PushF
	var_102_bool = var_48_float >= var_101_float; // 0x5f6 GE
	if(var_102_bool == 0) goto Label_1537; // 0x5f7 JumpB
	var_103_cvector = CVector(0,0,0); // 0x5f8 PushV
	func_1819(var_103_cvector); // 0x5f9 NEW_2
	var_1_bool = var_103_cvector + var_47_cvector; // 0x5fb Add2
	var_104_int = 120; // 0x5fc PushI
	var_105_float = 0.5; // 0x5fd PushF
	SetTimer(var_104_int, var_105_float); // 0x5fe Func
	goto Label_1538; // 0x600 Jump
	
Label_1538:
	var_106_bool = var_2_bool == 0; // 0x602 Not
	if(var_106_bool == 0) goto Label_1510; // 0x603 JumpB
	
Label_1537:
	goto Label_1540; // 0x601 Jump
}


func_2500(var_20_bool, var_21_object, var_22_string)
{
	var_23_string = "unholster"; // 0x9c5 PushS
	var_24_bool = var_22_string == var_23_string; // 0x9c6 Eq
	if(var_24_bool == 0) goto Label_2511; // 0x9c7 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x9c8 PushV
	var_26_object = var_21_object; // 0x9c9 Mov
	func_2791(var_25_bool, var_26_object); // 0x9ca NEW_2
	var_20_bool = var_25_bool; // 0x9cb Mov
	return 0; // 0x9cd Return
	
Label_2511:
	var_29_string = "player_shot"; // 0x9cf PushS
	var_30_bool = var_22_string == var_29_string; // 0x9d0 Eq
	if(var_30_bool == 0) goto Label_2521; // 0x9d1 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x9d2 PushV
	var_32_object = var_21_object; // 0x9d3 Mov
	func_2804(var_31_bool, var_32_object); // 0x9d4 NEW_2
	var_20_bool = var_31_bool; // 0x9d5 Mov
	return 0; // 0x9d7 Return
	
Label_2521:
	var_46_string = "battle"; // 0x9d9 PushS
	var_47_bool = var_22_string == var_46_string; // 0x9da Eq
	if(var_47_bool == 0) goto Label_2530; // 0x9db JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0x9dc PushV
	var_49_object = var_21_object; // 0x9dd Mov
	func_2827(var_49_object); // 0x9de NEW_2
	var_20_bool = var_48_bool; // 0x9df Mov
	return 0; // 0x9e1 Return
	
Label_2530:
	var_20_bool = 0; // 0x9e2 MovB
	return 0; // 0x9e3 Return
}


func_974()
{
	StopGroup0(); // 0x3ce Func
	StopAsync(); // 0x3d0 Func
	var_31_string = "head"; // 0x3d2 PushS
	UnlookAsync(var_31_string); // 0x3d3 Func
	var_32_int = 111; // 0x3d5 PushI
	KillTimer(var_32_int); // 0x3d6 Func
	return 0; // 0x3d8 Return
}


func_2532(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0x9e5 PushS
	var_55_bool = var_53_string == var_54_string; // 0x9e6 Eq
	if(var_55_bool == 0) goto Label_2541; // 0x9e7 JumpB
	var_56_object = Obj(); // 0x9e8 PushV
	var_56_object = var_52_object; // 0x9e9 Mov
	func_2796(var_56_object); // 0x9ea NEW_2
	goto Label_2556; // 0x9ec Jump
	
Label_2556:
	return 0; // 0x9fc Return
	
Label_2541:
	var_129_string = "player_shot"; // 0x9ed PushS
	var_130_bool = var_53_string == var_129_string; // 0x9ee Eq
	if(var_130_bool == 0) goto Label_2549; // 0x9ef JumpB
	var_131_object = Obj(); // 0x9f0 PushV
	var_131_object = var_52_object; // 0x9f1 Mov
	func_2819(var_131_object); // 0x9f2 NEW_2
	goto Label_2556; // 0x9f4 Jump
	
Label_2549:
	var_197_string = "battle"; // 0x9f5 PushS
	var_198_bool = var_53_string == var_197_string; // 0x9f6 Eq
	if(var_198_bool == 0) goto Label_2556; // 0x9f7 JumpB
	var_199_object = Obj(); // 0x9f8 PushV
	var_199_object = var_52_object; // 0x9f9 Mov
	func_2830(); // 0x9fa NEW_2
}


func_491(var_37_float)
{
	var_38_float = 0; var_39_float = 0; // 0x1eb PushV
	GetCameraFarDistance(var_39_float); // 0x1ec Func
	var_37_float = var_39_float; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_2033(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x7f1 PushV
	GetScene(var_29_object); // 0x7f2 Func
	var_31_string = "scripted"; // 0x7f4 PushS
	var_32_string = "blood_dir.xml"; // 0x7f5 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x7f6 Func
	var_33_object = Obj(); // 0x7f8 PushV
	var_33_object = var_22_object; // 0x7f9 Mov
	func_1921(var_33_object); // 0x7fa NEW_2
	return 4; // 0x7fc Return
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1f7 TMovB
	var_1_bool = 0; // 0x1f8 TMovB
	Stop(); // 0x1f9 Func
	StopGroup0(); // 0x1fb Func
	return 0; // 0x1fd Return
}


func_2557(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x9fd PushV
	var_21_bool = 0; // 0x9fe PushV
	var_21_bool = 0; // 0x9ff MovB
	var_22_bool = 0; var_23_object = Obj(); // 0xa00 PushV
	var_23_object = var_18_object; // 0xa01 Mov
	func_2791(var_22_bool, var_23_object); // 0xa02 NEW_2
	if(var_22_bool == 0) goto Label_2571; // 0xa04 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0xa05 PushV
	var_27_object = var_18_object; // 0xa06 Mov
	func_1839(var_26_bool, var_27_object); // 0xa07 NEW_2
	if(var_26_bool == 0) goto Label_2571; // 0xa09 JumpB
	var_21_bool = 1; // 0xa0a MovB
	
Label_2571:
	if(var_21_bool == 0) goto Label_2578; // 0xa0b JumpB
	IsWeaponHolstered(var_20_bool); // 0xa0c ObjFunc
	var_30_bool = var_20_bool == 0; // 0xa0e Not
	if(var_30_bool == 0) goto Label_2578; // 0xa0f JumpB
	var_17_bool = 1; // 0xa10 MovB
	return 2; // 0xa11 Return
	
Label_2578:
	var_17_bool = 0; // 0xa12 MovB
	return 2; // 0xa13 Return
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1fe TMovB
	var_1_bool = 1; // 0x1ff TMovB
	Stop(); // 0x200 Func
	StopGroup0(); // 0x202 Func
	return 0; // 0x204 Return
}


func_2047()
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x7ff PushV
	GetPosition(var_96_cvector); // 0x800 ObjFunc
	GetPosition(var_97_cvector); // 0x802 Func
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x804 Sub2
	var_99_float = GetByIndex(var_98_cvector, 0); // 0x805 PushE
	var_100_float = GetByIndex(var_98_cvector, 2); // 0x806 PushE
	RotateAsync(var_99_float, var_100_float); // 0x807 Func
	return 6; // 0x809 Return
}


