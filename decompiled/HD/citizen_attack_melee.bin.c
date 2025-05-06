task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xf PushV
	var_15_int = 0; var_16_object = Obj(); // 0x10 PushV
	var_16_object = var_12_bool; // 0x11 Mov
	func_2741(var_16_object); // 0x12 NEW_2
	var_14_int = var_15_int; // 0x13 Mov
	var_17_int = 0; // 0x15 PushI
	var_18_bool = var_14_int > var_17_int; // 0x16 GT
	if(var_18_bool == 0) goto Label_28; // 0x17 JumpB
	var_19_object = Obj(); // 0x18 PushV
	var_19_object = var_12_bool; // 0x19 Mov
	func_2744(); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_2746(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	return 0; // 0x97 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	return 0; // 0x99 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0; // 0x9b Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xb4 PushV
	var_15_int = 0; var_16_object = Obj(); // 0xb5 PushV
	var_16_object = var_12_bool; // 0xb6 Mov
	func_2741(var_16_object); // 0xb7 NEW_2
	var_14_int = var_15_int; // 0xb8 Mov
	var_17_int = 0; // 0xba PushI
	var_18_bool = var_14_int > var_17_int; // 0xbb GT
	if(var_18_bool == 0) goto Label_199; // 0xbc JumpB
	var_19_int = 1; // 0xbd PushI
	var_20_bool = var_14_int > var_19_int; // 0xbe GT
	if(var_20_bool == 0) goto Label_195; // 0xbf JumpB
	func_367(var_14_int); // 0xc1 NEW_2
	
Label_195:
	var_22_object = Obj(); // 0xc3 PushV
	var_22_object = var_12_bool; // 0xc4 Mov
	func_2744(); // 0xc5 NEW_2
	
Label_199:
	return 2; // 0xc7 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xc8 PushV
	var_15_object = Obj(); // 0xc9 PushV
	var_15_object = var_12_bool; // 0xca Mov
	func_2514(var_15_object); // 0xcb NEW_2
	var_24_int = 0; var_25_object = Obj(); // 0xcd PushV
	var_25_object = var_12_bool; // 0xce Mov
	func_2596(var_24_int, var_25_object); // 0xcf NEW_2
	var_14_int = var_24_int; // 0xd0 Mov
	var_60_int = 0; // 0xd2 PushI
	var_61_bool = var_14_int > var_60_int; // 0xd3 GT
	if(var_61_bool == 0) goto Label_223; // 0xd4 JumpB
	var_62_int = 1; // 0xd5 PushI
	var_63_bool = var_14_int > var_62_int; // 0xd6 GT
	if(var_63_bool == 0) goto Label_219; // 0xd7 JumpB
	func_367(var_14_int); // 0xd9 NEW_2
	
Label_219:
	var_65_object = Obj(); // 0xdb PushV
	var_65_object = var_12_bool; // 0xdc Mov
	func_2606(var_65_object); // 0xdd NEW_2
	
Label_223:
	return 2; // 0xdf Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0xe0 PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0; // 0xe1 PushV
	var_18_object = var_12_bool; // 0xe2 Mov
	var_19_object = var_13_object; // 0xe3 Mov
	var_20_bool = var_14_bool; // 0xe4 Mov
	func_2780(var_17_bool, var_18_object, var_19_object, var_20_bool); // 0xe5 NEW_2
	if(var_17_bool == 0) goto Label_251; // 0xe7 JumpB
	var_79_int = 0; var_80_object = Obj(); var_81_bool = 0; // 0xe8 PushV
	var_80_object = var_12_bool; // 0xe9 Mov
	var_81_bool = var_14_bool; // 0xea Mov
	func_2689(var_80_object, var_81_bool); // 0xeb NEW_2
	var_16_int = var_79_int; // 0xec Mov
	var_112_int = 0; // 0xee PushI
	var_113_bool = var_16_int > var_112_int; // 0xef GT
	if(var_113_bool == 0) goto Label_251; // 0xf0 JumpB
	var_114_int = 1; // 0xf1 PushI
	var_115_bool = var_16_int > var_114_int; // 0xf2 GT
	if(var_115_bool == 0) goto Label_247; // 0xf3 JumpB
	func_367(var_16_int); // 0xf5 NEW_2
	
Label_247:
	var_117_object = Obj(); // 0xf7 PushV
	var_117_object = var_12_bool; // 0xf8 Mov
	func_2696(var_117_object); // 0xf9 NEW_2
	
Label_251:
	return 2; // 0xfb Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xfc PushV
	var_15_int = 0; var_16_object = Obj(); // 0xfd PushV
	var_16_object = var_12_bool; // 0xfe Mov
	func_2731(var_16_object); // 0xff NEW_2
	var_14_int = var_15_int; // 0x100 Mov
	var_17_int = 0; // 0x102 PushI
	var_18_bool = var_14_int > var_17_int; // 0x103 GT
	if(var_18_bool == 0) goto Label_271; // 0x104 JumpB
	var_19_int = 1; // 0x105 PushI
	var_20_bool = var_14_int > var_19_int; // 0x106 GT
	if(var_20_bool == 0) goto Label_267; // 0x107 JumpB
	func_367(var_14_int); // 0x109 NEW_2
	
Label_267:
	var_22_object = Obj(); // 0x10b PushV
	var_22_object = var_12_bool; // 0x10c Mov
	func_2734(); // 0x10d NEW_2
	
Label_271:
	return 2; // 0x10f Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x110 PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_string = ""; // 0x111 PushV
	var_17_object = var_12_object; // 0x112 Mov
	var_18_string = var_13_bool; // 0x113 Mov
	func_2428(var_16_bool, var_17_object, var_18_string); // 0x114 NEW_2
	if(var_16_bool == 0) goto Label_288; // 0x116 JumpB
	func_367(var_15_int); // 0x118 NEW_2
	var_32_object = Obj(); var_33_string = ""; // 0x11a PushV
	var_32_object = var_12_object; // 0x11b Mov
	var_33_string = var_13_bool; // 0x11c Mov
	func_2460(var_32_object, var_33_string); // 0x11d NEW_2
	goto Label_308; // 0x11f Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_288:
	var_43_int = 0; var_44_string = ""; var_45_object = Obj(); // 0x120 PushV
	var_44_string = var_13_bool; // 0x121 Mov
	var_45_object = var_12_object; // 0x122 Mov
	func_2736(var_45_object); // 0x123 NEW_2
	var_15_int = var_43_int; // 0x124 Mov
	var_46_int = 0; // 0x126 PushI
	var_47_bool = var_15_int > var_46_int; // 0x127 GT
	if(var_47_bool == 0) goto Label_308; // 0x128 JumpB
	var_48_int = 1; // 0x129 PushI
	var_49_bool = var_15_int > var_48_int; // 0x12a GT
	if(var_49_bool == 0) goto Label_303; // 0x12b JumpB
	func_367(var_15_int); // 0x12d NEW_2
	
Label_303:
	var_50_string = ""; var_51_object = Obj(); // 0x12f PushV
	var_50_string = var_13_bool; // 0x130 Mov
	var_51_object = var_12_object; // 0x131 Mov
	func_2739(); // 0x132 NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = ""; // 0x136 PushV
	var_14_string = var_12_bool; // 0x137 Mov
	func_2527(var_13_bool, var_14_string); // 0x138 NEW_2
	if(var_13_bool == 0) goto Label_322; // 0x13a JumpB
	func_367(var_12_bool); // 0x13c NEW_2
	var_23_string = ""; // 0x13e PushV
	var_23_string = var_12_bool; // 0x13f Mov
	func_2543(var_23_string); // 0x140 NEW_2
	
Label_322:
	return 0; // 0x142 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x144 PushV
	var_14_object = var_12_bool; // 0x145 Mov
	func_2485(var_13_bool, var_14_object); // 0x146 NEW_2
	if(var_13_bool == 0) goto Label_337; // 0x148 JumpB
	func_367(var_12_bool); // 0x14a NEW_2
	var_26_object = Obj(); // 0x14c PushV
	var_26_object = var_12_bool; // 0x14d Mov
	func_2508(var_26_object); // 0x14e NEW_2
	goto Label_341; // 0x150 Jump
	
Label_341:
	return 0; // 0x155 Return
	
Label_337:
	var_28_object = Obj(); // 0x151 PushV
	var_28_object = var_12_bool; // 0x152 Mov
	func_392(var_12_bool, var_28_object); // 0x153 NEW_2
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_object = Obj(); // 0x157 PushV
	var_13_object = var_12_bool; // 0x158 Mov
	func_392(var_12_bool, var_13_object); // 0x159 NEW_2
	return 0; // 0x15b Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 110; // 0x15d PushI
	var_14_bool = var_12_bool != var_13_int; // 0x15e Neq
	if(var_14_bool == 0) goto Label_353; // 0x15f JumpB
	return 0; // 0x160 Return
	
Label_353:
	var_2_bool = 0; // 0x161 TMovB
	var_15_int = 110; // 0x162 PushI
	KillTimer(var_15_int); // 0x163 Func
	ResetAAS(); // 0x165 Func
	return 0; // 0x167 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_367(var_11_bool); // 0x169 NEW_2
	func_2746(); // 0x16c NEW_2
	return 0; // 0x16e Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	func_367(var_12_bool); // 0x181 NEW_2
	var_14_object = Obj(); // 0x183 PushV
	var_14_object = var_12_bool; // 0x184 Mov
	func_2404(); // 0x185 NEW_2
	return 0; // 0x187 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	RequestClearPath(var_12_bool); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	Stop(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x20d PushV
	var_15_int = 0; var_16_object = Obj(); // 0x20e PushV
	var_16_object = var_12_bool; // 0x20f Mov
	func_2741(var_16_object); // 0x210 NEW_2
	var_14_int = var_15_int; // 0x211 Mov
	var_17_int = 0; // 0x213 PushI
	var_18_bool = var_14_int > var_17_int; // 0x214 GT
	if(var_18_bool == 0) goto Label_544; // 0x215 JumpB
	var_19_int = 1; // 0x216 PushI
	var_20_bool = var_14_int > var_19_int; // 0x217 GT
	if(var_20_bool == 0) goto Label_540; // 0x218 JumpB
	func_770(); // 0x21a NEW_2
	
Label_540:
	var_21_object = Obj(); // 0x21c PushV
	var_21_object = var_12_bool; // 0x21d Mov
	func_2744(); // 0x21e NEW_2
	
Label_544:
	return 2; // 0x220 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x221 PushV
	var_15_object = Obj(); // 0x222 PushV
	var_15_object = var_12_bool; // 0x223 Mov
	func_2514(var_15_object); // 0x224 NEW_2
	var_24_int = 0; var_25_object = Obj(); // 0x226 PushV
	var_25_object = var_12_bool; // 0x227 Mov
	func_2596(var_24_int, var_25_object); // 0x228 NEW_2
	var_14_int = var_24_int; // 0x229 Mov
	var_60_int = 0; // 0x22b PushI
	var_61_bool = var_14_int > var_60_int; // 0x22c GT
	if(var_61_bool == 0) goto Label_568; // 0x22d JumpB
	var_62_int = 1; // 0x22e PushI
	var_63_bool = var_14_int > var_62_int; // 0x22f GT
	if(var_63_bool == 0) goto Label_564; // 0x230 JumpB
	func_770(); // 0x232 NEW_2
	
Label_564:
	var_64_object = Obj(); // 0x234 PushV
	var_64_object = var_12_bool; // 0x235 Mov
	func_2606(var_64_object); // 0x236 NEW_2
	
Label_568:
	return 2; // 0x238 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x239 PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_bool = 0; // 0x23a PushV
	var_18_object = var_12_bool; // 0x23b Mov
	var_19_object = var_13_object; // 0x23c Mov
	var_20_bool = var_14_bool; // 0x23d Mov
	func_2780(var_17_bool, var_18_object, var_19_object, var_20_bool); // 0x23e NEW_2
	if(var_17_bool == 0) goto Label_596; // 0x240 JumpB
	var_79_int = 0; var_80_object = Obj(); var_81_bool = 0; // 0x241 PushV
	var_80_object = var_12_bool; // 0x242 Mov
	var_81_bool = var_14_bool; // 0x243 Mov
	func_2689(var_80_object, var_81_bool); // 0x244 NEW_2
	var_16_int = var_79_int; // 0x245 Mov
	var_112_int = 0; // 0x247 PushI
	var_113_bool = var_16_int > var_112_int; // 0x248 GT
	if(var_113_bool == 0) goto Label_596; // 0x249 JumpB
	var_114_int = 1; // 0x24a PushI
	var_115_bool = var_16_int > var_114_int; // 0x24b GT
	if(var_115_bool == 0) goto Label_592; // 0x24c JumpB
	func_770(); // 0x24e NEW_2
	
Label_592:
	var_116_object = Obj(); // 0x250 PushV
	var_116_object = var_12_bool; // 0x251 Mov
	func_2696(var_116_object); // 0x252 NEW_2
	
Label_596:
	return 2; // 0x254 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x255 PushV
	var_15_int = 0; var_16_object = Obj(); // 0x256 PushV
	var_16_object = var_12_bool; // 0x257 Mov
	func_2731(var_16_object); // 0x258 NEW_2
	var_14_int = var_15_int; // 0x259 Mov
	var_17_int = 0; // 0x25b PushI
	var_18_bool = var_14_int > var_17_int; // 0x25c GT
	if(var_18_bool == 0) goto Label_616; // 0x25d JumpB
	var_19_int = 1; // 0x25e PushI
	var_20_bool = var_14_int > var_19_int; // 0x25f GT
	if(var_20_bool == 0) goto Label_612; // 0x260 JumpB
	func_770(); // 0x262 NEW_2
	
Label_612:
	var_21_object = Obj(); // 0x264 PushV
	var_21_object = var_12_bool; // 0x265 Mov
	func_2734(); // 0x266 NEW_2
	
Label_616:
	return 2; // 0x268 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_int = 0; var_15_int = 0; // 0x269 PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_string = ""; // 0x26a PushV
	var_17_object = var_12_object; // 0x26b Mov
	var_18_string = var_13_bool; // 0x26c Mov
	func_2428(var_16_bool, var_17_object, var_18_string); // 0x26d NEW_2
	if(var_16_bool == 0) goto Label_633; // 0x26f JumpB
	func_770(); // 0x271 NEW_2
	var_31_object = Obj(); var_32_string = ""; // 0x273 PushV
	var_31_object = var_12_object; // 0x274 Mov
	var_32_string = var_13_bool; // 0x275 Mov
	func_2460(var_31_object, var_32_string); // 0x276 NEW_2
	goto Label_653; // 0x278 Jump
	
Label_653:
	return 2; // 0x28d Return
	
Label_633:
	var_42_int = 0; var_43_string = ""; var_44_object = Obj(); // 0x279 PushV
	var_43_string = var_13_bool; // 0x27a Mov
	var_44_object = var_12_object; // 0x27b Mov
	func_2736(var_44_object); // 0x27c NEW_2
	var_15_int = var_42_int; // 0x27d Mov
	var_45_int = 0; // 0x27f PushI
	var_46_bool = var_15_int > var_45_int; // 0x280 GT
	if(var_46_bool == 0) goto Label_653; // 0x281 JumpB
	var_47_int = 1; // 0x282 PushI
	var_48_bool = var_15_int > var_47_int; // 0x283 GT
	if(var_48_bool == 0) goto Label_648; // 0x284 JumpB
	func_770(); // 0x286 NEW_2
	
Label_648:
	var_49_string = ""; var_50_object = Obj(); // 0x288 PushV
	var_49_string = var_13_bool; // 0x289 Mov
	var_50_object = var_12_object; // 0x28a Mov
	func_2739(); // 0x28b NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_string = ""; // 0x28f PushV
	var_14_string = var_12_bool; // 0x290 Mov
	func_2527(var_13_bool, var_14_string); // 0x291 NEW_2
	if(var_13_bool == 0) goto Label_667; // 0x293 JumpB
	func_770(); // 0x295 NEW_2
	var_22_string = ""; // 0x297 PushV
	var_22_string = var_12_bool; // 0x298 Mov
	func_2543(var_22_string); // 0x299 NEW_2
	
Label_667:
	return 0; // 0x29b Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_770(); // 0x29d NEW_2
	func_2746(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x2a4 PushV
	var_14_object = var_12_bool; // 0x2a5 Mov
	func_2485(var_13_bool, var_14_object); // 0x2a6 NEW_2
	if(var_13_bool == 0) goto Label_688; // 0x2a8 JumpB
	func_770(); // 0x2aa NEW_2
	var_25_object = Obj(); // 0x2ac PushV
	var_25_object = var_12_bool; // 0x2ad Mov
	func_2508(var_25_object); // 0x2ae NEW_2
	
Label_688:
	return 0; // 0x2b0 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	func_1521(var_11_bool); // 0x5ac NEW_2
	func_2746(); // 0x5af NEW_2
	return 0; // 0x5b1 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_int)
{
	var_13_int = 1; // 0x5e4 PushI
	var_14_bool = var_12_int == var_13_int; // 0x5e5 Eq
	if(var_14_bool == 0) goto Label_1516; // 0x5e6 JumpB
	var_15_object = Obj(); // 0x5e7 PushV
	var_15_object = var_1_bool; // 0x5e8 MovT
	func_2152(var_15_object); // 0x5e9 NEW_2
	goto Label_1520; // 0x5eb Jump
	
Label_1520:
	return 0; // 0x5f0 Return
	
Label_1516:
	var_20_int = 0; // 0x5ec PushV
	var_20_int = var_12_int; // 0x5ed Mov
	func_1665(var_11_bool, var_12_int, var_20_int); // 0x5ee NEW_2
}


task_4_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0; // 0x5ff PushV
	var_13_bool = 0; // 0x600 MovB
	var_14_bool = var_1_bool == var_12_object; // 0x601 Eq
	if(var_14_bool == 0) goto Label_1542; // 0x602 JumpB
	var_15_bool = var_2_bool == 0; // 0x603 Not
	if(var_15_bool == 0) goto Label_1542; // 0x604 JumpB
	var_13_bool = 1; // 0x605 MovB
	
Label_1542:
	if(var_13_bool == 0) goto Label_1548; // 0x606 JumpB
	var_2_bool = 1; // 0x607 TMovB
	var_16_object = Obj(); // 0x608 PushV
	var_16_object = var_12_object; // 0x609 Mov
	func_2040(var_16_object); // 0x60a NEW_2
	
Label_1548:
	return 0; // 0x60c Return
}


task_4_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_bool = 0; // 0x60e PushV
	var_13_bool = 0; // 0x60f MovB
	var_14_bool = var_1_bool == var_12_object; // 0x610 Eq
	if(var_14_bool == 0) goto Label_1557; // 0x611 JumpB
	var_15_bool = var_2_bool; // 0x612 PushT
	if(var_15_bool == 0) goto Label_1557; // 0x613 JumpB
	var_13_bool = 1; // 0x614 MovB
	
Label_1557:
	if(var_13_bool == 0) goto Label_1562; // 0x615 JumpB
	var_2_bool = 0; // 0x616 TMovB
	var_16_string = "head"; // 0x617 PushS
	UnlookAsync(var_16_string); // 0x618 Func
	
Label_1562:
	return 0; // 0x61a Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object); // 0x694 Func
	return 0; // 0x696 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	func_1521(var_12_object); // 0x6a0 NEW_2
	var_17_object = Obj(); // 0x6a2 PushV
	var_17_object = var_12_object; // 0x6a3 Mov
	func_2404(); // 0x6a4 NEW_2
	return 0; // 0x6a6 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x957 PushV
	var_16_string = "health"; // 0x958 PushS
	var_17_bool = var_13_string == var_16_string; // 0x959 Eq
	if(var_17_bool == 0) goto Label_2403; // 0x95a JumpB
	var_18_string = "health"; // 0x95b PushS
	GetProperty(var_18_string, var_15_float); // 0x95c Func
	var_19_int = 0; // 0x95e PushI
	var_20_bool = var_15_float <= var_19_int; // 0x95f LE
	if(var_20_bool == 0) goto Label_2403; // 0x960 JumpB
	SignalDeath(var_12_object); // 0x961 Func
	
Label_2403:
	return 2; // 0x963 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object)
{
	var_13_object = Obj(); // 0x965 PushV
	var_13_object = var_12_object; // 0x966 Mov
	func_2383(var_13_object); // 0x967 NEW_2
	return 0; // 0x969 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x96b PushV
	var_16_object = var_12_object; // 0x96c Mov
	var_17_int = var_13_int; // 0x96d Mov
	var_18_float = var_14_float; // 0x96e Mov
	func_1942(var_16_object, var_17_int, var_18_float); // 0x96f NEW_2
	return 0; // 0x971 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x973 PushV
	var_18_object = var_12_object; // 0x974 Mov
	var_19_int = var_13_int; // 0x975 Mov
	var_20_float = var_14_float; // 0x976 Mov
	var_21_cvector = var_16_cvector; // 0x977 Mov
	var_22_cvector = var_17_cvector; // 0x978 Mov
	func_2010(var_20_float, var_21_cvector, var_22_cvector); // 0x979 NEW_2
	return 0; // 0x97b Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 1; // 0x9c PushB
	SensePlayerOnly(var_12_bool); // 0x9d Func
	func_2767(); // 0xa0 NEW_2
	func_171(); // 0xa3 NEW_2
	
Label_165:
	var_2_bool = 0; // 0xa5 TMovB
	func_432(var_10_object, var_11_bool); // 0xa7 NEW_2
	goto Label_165; // 0xa9 Jump
}


func_0(var_14_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_15_object = Obj(); // 0x2 PushV
	var_15_object = var_14_object; // 0x3 Mov
	func_33(var_15_object); // 0x4 NEW_2
	var_95_object = Obj(); // 0x6 PushV
	var_95_object = var_14_object; // 0x7 Mov
	func_2790(var_95_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_2051(var_38_string)
{
	var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x803 PushV
	IsExisting3DSound(var_47_bool, var_38_string); // 0x804 Func
	var_55_bool = var_47_bool == 0; // 0x806 Not
	if(var_55_bool == 0) goto Label_2076; // 0x807 JumpB
	var_48_int = 0; // 0x808 MovI
	
Label_2057:
	var_56_int = 1; // 0x809 PushI
	var_57_int = var_48_int + var_56_int; // 0x80a Add
	var_58_int = var_38_string + var_57_int; // 0x80b Add
	IsExisting3DSound(var_49_bool, var_58_int); // 0x80c Func
	var_59_bool = var_49_bool == 0; // 0x80e Not
	if(var_59_bool == 0) goto Label_2065; // 0x80f JumpB
	goto Label_2068; // 0x810 Jump
	
Label_2068:
	var_60_bool = var_48_int == 0; // 0x814 Not
	if(var_60_bool == 0) goto Label_2071; // 0x815 JumpB
	return 16; // 0x816 Return
	
Label_2071:
	irand(var_50_int, var_48_int); // 0x817 Func
	var_61_int = 1; // 0x819 PushI
	var_62_int = var_50_int + var_61_int; // 0x81a Add
	var_38_string = var_38_string + var_62_int; // 0x81b Add2
	
Label_2076:
	Is3DSoundLoaded(var_51_bool, var_38_string); // 0x81c Func
	var_63_bool = var_51_bool; // 0x81e Push
	if(var_63_bool == 0) goto Label_2091; // 0x81f JumpB
	GetEyesHeight(var_52_float); // 0x820 Func
	GetDirection(var_53_cvector); // 0x822 Func
	var_64_int = 50; // 0x824 PushI
	var_54_cvector = var_53_cvector * var_64_int; // 0x825 Mult2
	var_65_float = GetByIndex(var_54_cvector, 1); // 0x826 PushE
	var_65_float = var_65_float + var_52_float; // 0x827 Add2
	SetByIndex(var_54_cvector, 1) = var_65_float; // 0x828 PopE
	PlayGlobalSound(var_38_string, var_54_cvector); // 0x829 Func
	
Label_2091:
	return 16; // 0x82b Return
	
Label_2065:
	var_66_int = 1; // 0x811 PushI
	var_48_int = var_48_int + var_66_int; // 0x812 Add2
	goto Label_2057; // 0x813 Jump
}


func_2563(var_175_int)
{
	var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_bool = 0; // 0xa03 PushV
	var_178_int = 0; // 0xa04 MovI
	
Label_2565:
	var_180_string = "all"; // 0xa05 PushS
	var_181_string = ""; var_182_int = 0; // 0xa06 PushV
	var_182_int = var_178_int; // 0xa07 Mov
	func_2556(var_181_string, var_182_int); // 0xa08 NEW_2
	HasAnimation(var_179_bool, var_180_string, var_181_string); // 0xa0a Func
	var_186_bool = var_179_bool == 0; // 0xa0c Not
	if(var_186_bool == 0) goto Label_2575; // 0xa0d JumpB
	goto Label_2578; // 0xa0e Jump
	
Label_2578:
	var_175_int = var_178_int; // 0xa12 Mov
	return 4; // 0xa13 Return
	
Label_2575:
	var_187_int = 1; // 0xa0f PushI
	var_178_int = var_178_int + var_187_int; // 0xa10 Add2
	goto Label_2565; // 0xa11 Jump
}


func_517(var_157_bool)
{
	var_157_bool = 0; // 0x205 MovB
	return 0; // 0x206 Return
}


func_519(var_151_object, var_152_cvector)
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x207 PushV
	FindShiftedPathTo(var_154_object, var_152_cvector); // 0x208 Func
	var_151_object = var_154_object; // 0x20a Mov
	return 2; // 0x20b Return
}


func_2580(var_55_int, var_56_object)
{
	var_57_bool = 0; var_58_object = Obj(); // 0xa15 PushV
	var_58_object = var_56_object; // 0xa16 Mov
	func_2775(var_57_bool, var_58_object); // 0xa17 NEW_2
	if(var_57_bool == 0) goto Label_2588; // 0xa19 JumpB
	var_55_int = 2; // 0xa1a MovI
	goto Label_2589; // 0xa1b Jump
	
Label_2589:
	return 0; // 0xa1d Return
	
Label_2588:
	var_55_int = 0; // 0xa1c MovI
}


func_1563(var_0_bool, var_1_bool, var_225_bool, var_226_object, var_227_float, var_228_float, var_229_bool, var_230_bool)
{
	var_231_bool = 0; var_232_bool = 0; var_233_object = Obj(); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_float = 0; var_238_object = Obj(); var_239_bool = 0; var_240_bool = 0; var_241_object = Obj(); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_float = 0; var_246_object = Obj(); // 0x61b PushV
	var_0_bool = 0; // 0x61c TMovB
	var_1_bool = var_226_object; // 0x61d TMov
	var_240_bool = var_230_bool; // 0x61e Mov
	
Label_1567:
	var_247_bool = 0; var_248_object = Obj(); // 0x61f PushV
	var_248_object = var_226_object; // 0x620 Mov
	func_1703(var_247_bool, var_248_object); // 0x621 NEW_2
	var_251_bool = var_247_bool == 0; // 0x623 Not
	if(var_251_bool == 0) goto Label_1575; // 0x624 JumpB
	var_225_bool = 0; // 0x625 MovB
	return 16; // 0x626 Return
	
Label_1575:
	GetPosition(var_242_cvector); // 0x627 ObjFunc
	GetPosition(var_243_cvector); // 0x629 Func
	var_244_cvector = var_242_cvector - var_243_cvector; // 0x62b Sub2
	var_245_float = var_244_cvector | var_244_cvector; // 0x62c Or2
	var_252_bool = 0; // 0x62d PushV
	var_252_bool = 0; // 0x62e MovB
	var_253_int = 0; // 0x62f PushI
	var_254_bool = var_228_float > var_253_int; // 0x630 GT
	if(var_254_bool == 0) goto Label_1590; // 0x631 JumpB
	var_255_float = var_228_float * var_228_float; // 0x632 Mult
	var_256_bool = var_245_float > var_255_float; // 0x633 GT
	if(var_256_bool == 0) goto Label_1590; // 0x634 JumpB
	var_252_bool = 1; // 0x635 MovB
	
Label_1590:
	if(var_252_bool == 0) goto Label_1595; // 0x636 JumpB
	Stop(); // 0x637 Func
	var_225_bool = 0; // 0x639 MovB
	return 16; // 0x63a Return
	
Label_1595:
	var_257_float = var_227_float * var_227_float; // 0x63b Mult
	var_258_bool = var_245_float > var_257_float; // 0x63c GT
	if(var_258_bool == 0) goto Label_1657; // 0x63d JumpB
	GetPFPosition(var_242_cvector); // 0x63e ObjFunc
	FindPathTo(var_246_object, var_242_cvector); // 0x640 Func
	var_259_bool = var_246_object != 0; // 0x642 NullNeq
	if(var_259_bool == 0) goto Label_1606; // 0x643 JumpB
	var_241_object = var_246_object; // 0x644 Mov
	var_246_object = 0; // 0x645 SetNull
	
Label_1606:
	var_260_bool = var_241_object != 0; // 0x646 NullNeq
	if(var_260_bool == 0) goto Label_1639; // 0x647 JumpB
	var_261_bool = var_240_bool; // 0x648 Push
	if(var_261_bool == 0) goto Label_1616; // 0x649 JumpB
	var_240_bool = 0; // 0x64a MovB
	RotatePath(var_241_object, var_239_bool); // 0x64b Func
	var_262_bool = var_239_bool == 0; // 0x64d Not
	if(var_262_bool == 0) goto Label_1616; // 0x64e JumpB
	goto Label_1663; // 0x64f Jump
	
Label_1663:
	var_225_bool = !var_0_bool; // 0x67f Not2
	return 16; // 0x680 Return
	
Label_1616:
	var_263_int = 0; // 0x650 PushI
	var_264_float = 0.3; // 0x651 PushF
	SetTimer(var_263_int, var_264_float); // 0x652 Func
	var_265_string = ""; // 0x654 PushV
	func_1710(var_265_string); // 0x655 NEW_2
	var_266_string = ""; // 0x657 PushV
	func_1712(var_266_string); // 0x658 NEW_2
	FollowPath(var_241_object, var_229_bool, var_239_bool, var_265_string, var_266_string); // 0x65a Func
	var_267_bool = var_239_bool == 0; // 0x65c Not
	if(var_267_bool == 0) goto Label_1637; // 0x65d JumpB
	var_268_bool = var_0_bool; // 0x65e PushT
	if(var_268_bool == 0) goto Label_1635; // 0x65f JumpB
	var_241_object = 0; // 0x660 SetNull
	goto Label_1663; // 0x661 Jump
	
Label_1635:
	goto Label_1662; // 0x663 Jump
	
Label_1662:
	goto Label_1567; // 0x67e Jump
	
Label_1637:
	var_241_object = 0; // 0x665 SetNull
	goto Label_1655; // 0x666 Jump
	
Label_1655:
	var_246_object = 0; // 0x677 SetNull
	goto Label_1661; // 0x678 Jump
	
Label_1661:
	var_241_object = 0; // 0x67d SetNull
	
Label_1639:
	var_269_int = 0; // 0x667 PushI
	KillTimer(var_269_int); // 0x668 Func
	var_270_float = 0.5; // 0x66a PushF
	Sleep(var_270_float, var_239_bool); // 0x66b Func
	var_271_bool = var_239_bool == 0; // 0x66d Not
	if(var_271_bool == 0) goto Label_1651; // 0x66e JumpB
	var_272_bool = var_0_bool; // 0x66f PushT
	if(var_272_bool == 0) goto Label_1651; // 0x670 JumpB
	var_241_object = 0; // 0x671 SetNull
	goto Label_1663; // 0x672 Jump
	
Label_1651:
	var_273_int = 0; // 0x673 PushI
	var_274_float = 0.3; // 0x674 PushF
	SetTimer(var_273_int, var_274_float); // 0x675 Func
	
Label_1657:
	var_275_int = 0; // 0x679 PushI
	KillTimer(var_275_int); // 0x67a Func
	goto Label_1663; // 0x67c Jump
}


func_1053(var_0_bool, var_451_float, var_452_int)
{
	var_453_object = Obj(); var_454_float = 0; var_455_float = 0; var_456_object = Obj(); var_457_float = 0; var_458_float = 0; // 0x41d PushV
	var_459_float = 0.9; // 0x41e PushF
	var_460_float = var_451_float * var_459_float; // 0x41f Mult
	GetVictim(var_460_float, var_456_object); // 0x420 Func
	ReportAttack(var_0_bool); // 0x422 Func
	var_461_bool = var_456_object == var_0_bool; // 0x424 Eq
	if(var_461_bool == 0) goto Label_1090; // 0x425 JumpB
	var_462_float = 0; var_463_object = Obj(); var_464_int = 0; // 0x426 PushV
	var_463_object = var_456_object; // 0x427 Mov
	var_464_int = var_452_int; // 0x428 Mov
	func_783(var_464_int); // 0x429 NEW_2
	var_457_float = var_462_float; // 0x42a Mov
	var_465_float = 0; var_466_object = Obj(); var_467_float = 0; var_468_int = 0; // 0x42c PushV
	var_466_object = var_456_object; // 0x42d Mov
	var_467_float = var_457_float; // 0x42e Mov
	var_469_int = 0; var_470_object = Obj(); var_471_int = 0; // 0x42f PushV
	var_470_object = var_456_object; // 0x430 Mov
	var_471_int = var_452_int; // 0x431 Mov
	func_786(var_471_int); // 0x432 NEW_2
	var_468_int = var_469_int; // 0x433 Mov
	func_1760(var_465_float, var_466_object, var_467_float, var_468_int); // 0x435 NEW_2
	var_458_float = var_465_float; // 0x436 Mov
	var_530_int = 0; // 0x438 PushV
	func_1436(var_530_int); // 0x439 NEW_2
	ReportHit(var_0_bool, var_530_int, var_458_float, var_457_float); // 0x43b Func
	var_531_object = Obj(); var_532_float = 0; // 0x43d PushV
	var_531_object = var_456_object; // 0x43e Mov
	var_532_float = var_458_float; // 0x43f Mov
	func_1443(); // 0x440 NEW_2
	
Label_1090:
	return 6; // 0x442 Return
}


func_2590(var_66_object)
{
	var_67_object = Obj(); // 0xa1f PushV
	var_67_object = var_66_object; // 0xa20 Mov
	func_2606(var_67_object); // 0xa21 NEW_2
	return 0; // 0xa23 Return
}


func_33(var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_string = ""; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); // 0x21 PushV
	var_36_bool = var_15_object == 0; // 0x22 NullEq
	if(var_36_bool == 0) goto Label_41; // 0x23 JumpB
	var_37_string = ""; // 0x24 PushV
	var_37_string = "fdie"; // 0x25 MovS
	func_124(var_37_string); // 0x26 NEW_2
	goto Label_123; // 0x28 Jump
	
Label_123:
	return 20; // 0x7b Return
	
Label_41:
	GetPosition(var_26_cvector); // 0x29 ObjFunc
	GetPosition(var_27_cvector); // 0x2b Func
	GetDirection(var_28_cvector); // 0x2d Func
	var_29_cvector = var_27_cvector - var_26_cvector; // 0x2f Sub2
	var_69_float = GetByIndex(var_29_cvector, 0); // 0x30 PushE
	var_70_float = GetByIndex(var_28_cvector, 0); // 0x31 PushE
	var_71_float = var_69_float * var_70_float; // 0x32 Mult
	var_72_float = GetByIndex(var_29_cvector, 2); // 0x33 PushE
	var_73_float = GetByIndex(var_28_cvector, 2); // 0x34 PushE
	var_74_float = var_72_float * var_73_float; // 0x35 Mult
	var_75_int = var_71_float + var_74_float; // 0x36 Add
	var_76_int = 0; // 0x37 PushI
	var_77_bool = var_75_int >= var_76_int; // 0x38 GE
	if(var_77_bool == 0) goto Label_60; // 0x39 JumpB
	var_30_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_31_object = var_15_object; // 0x45 Mov
	var_78_string = "GetScriptProperty"; // 0x46 PushS
	var_79_int = 2; // 0x47 PushI
	var_80_bool = IsFuncExist(var_15_object, var_78_string, var_79_int); // 0x48 FuncExist
	if(var_80_bool == 0) goto Label_85; // 0x49 JumpB
	var_81_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_32_bool, var_81_string); // 0x4b ObjFunc
	var_82_bool = var_32_bool; // 0x4d Push
	if(var_82_bool == 0) goto Label_85; // 0x4e JumpB
	var_83_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_31_object, var_83_string); // 0x50 ObjFunc
	var_84_bool = var_31_object == 0; // 0x52 NullEq
	if(var_84_bool == 0) goto Label_85; // 0x53 JumpB
	var_31_object = var_15_object; // 0x54 Mov
	
Label_85:
	var_85_string = "@GetEyesHeight"; // 0x55 PushS
	var_86_int = 1; // 0x56 PushI
	var_87_bool = IsFuncExist(var_31_object, var_85_string, var_86_int); // 0x57 FuncExist
	if(var_87_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_34_float); // 0x59 ObjFunc
	var_35_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_88_float = GetByIndex(var_35_cvector, 1); // 0x5c PushE
	var_88_float = var_34_float; // 0x5d Mov
	SetByIndex(var_35_cvector, 1) = var_88_float; // 0x5e PopE
	var_89_string = "head"; // 0x5f PushS
	LookAsync(var_15_object, var_89_string, var_35_cvector); // 0x60 Func
	var_33_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_90_string = ""; // 0x65 PushV
	var_90_string = var_30_string; // 0x66 Mov
	func_2051(var_90_string); // 0x67 NEW_2
	var_91_string = "all"; // 0x69 PushS
	PlayAnimation(var_91_string, var_30_string); // 0x6a Func
	WaitForAnimEnd(); // 0x6c Func
	var_92_bool = var_33_bool; // 0x6e Push
	if(var_92_bool == 0) goto Label_117; // 0x6f JumpB
	StopAsync(); // 0x70 Func
	var_93_string = "head"; // 0x72 PushS
	UnlookAsync(var_93_string); // 0x73 Func
	
Label_117:
	var_94_string = "all"; // 0x75 PushS
	LockAnimationEnd(var_94_string, var_30_string); // 0x76 Func
	RemoveEnvelope(); // 0x78 Func
	var_31_object = 0; // 0x7a SetNull
	
Label_100:
	var_33_bool = 0; // 0x64 MovB
	
Label_60:
	var_30_string = "bdie"; // 0x3c MovS
}


func_2596(var_82_int, var_83_object)
{
	var_84_bool = 0; var_85_object = Obj(); // 0xa25 PushV
	var_85_object = var_83_object; // 0xa26 Mov
	func_1874(var_84_bool, var_85_object); // 0xa27 NEW_2
	if(var_84_bool == 0) goto Label_2604; // 0xa29 JumpB
	var_82_int = 2; // 0xa2a MovI
	goto Label_2605; // 0xa2b Jump
	
Label_2605:
	return 0; // 0xa2d Return
	
Label_2604:
	var_82_int = 0; // 0xa2c MovI
}


func_2092(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x82c PushV
	self(var_102_object); // 0x82d Func
	var_100_object = var_102_object; // 0x82f Mov
	return 2; // 0x830 Return
}


func_2606(var_117_object)
{
	var_118_object = Obj(); // 0xa2f PushV
	var_118_object = var_117_object; // 0xa30 Mov
	TaskCall(3); // 0xa31 TaskCall
	func_775(var_118_object); // 0xa32 NEW_2
	TaskReturn(); // 0xa33 TaskReturn
	return 0; // 0xa35 Return
}


func_2098(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0; // 0x832 PushV
	var_54_int = var_45_cvector | var_45_cvector; // 0x833 Or
	var_53_float = sqrt(var_54_int); // 0x834 Sqrt2
	var_55_float = 0.0; // 0x835 PushF
	var_56_bool = var_53_float < var_55_float; // 0x836 LT
	if(var_56_bool == 0) goto Label_2106; // 0x837 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x838 MovV
	return 2; // 0x839 Return
	
Label_2106:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x83a Div2
	return 2; // 0x83b Return
}


func_2614(var_28_bool, var_29_object, var_30_bool)
{
	var_31_string = ""; var_32_string = ""; var_33_string = ""; var_34_string = ""; // 0xa36 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0xa37 PushV
	var_36_object = var_29_object; // 0xa38 Mov
	var_37_string = "class"; // 0xa39 MovS
	func_1748(var_35_bool, var_36_object, var_37_string); // 0xa3a NEW_2
	var_44_bool = var_35_bool == 0; // 0xa3c Not
	if(var_44_bool == 0) goto Label_2624; // 0xa3d JumpB
	var_28_bool = 0; // 0xa3e MovB
	return 4; // 0xa3f Return
	
Label_2624:
	var_45_string = "class"; // 0xa40 PushS
	GetProperty(var_45_string, var_33_string); // 0xa41 Func
	var_46_string = "class"; // 0xa43 PushS
	GetProperty(var_46_string, var_34_string); // 0xa44 ObjFunc
	var_47_bool = 0; // 0xa46 PushV
	var_47_bool = 0; // 0xa47 MovB
	var_48_bool = var_30_bool == 0; // 0xa48 Not
	if(var_48_bool == 0) goto Label_2637; // 0xa49 JumpB
	var_49_bool = var_33_string == var_34_string; // 0xa4a Eq
	if(var_49_bool == 0) goto Label_2637; // 0xa4b JumpB
	var_47_bool = 1; // 0xa4c MovB
	
Label_2637:
	if(var_47_bool == 0) goto Label_2640; // 0xa4d JumpB
	var_28_bool = 1; // 0xa4e MovB
	return 4; // 0xa4f Return
	
Label_2640:
	var_50_string = "rat"; // 0xa50 PushS
	var_51_bool = var_34_string == var_50_string; // 0xa51 Eq
	if(var_51_bool == 0) goto Label_2646; // 0xa52 JumpB
	var_28_bool = 0; // 0xa53 MovB
	return 4; // 0xa54 Return
	
Label_2646:
	var_52_string = "rat_big"; // 0xa56 PushS
	var_53_bool = var_34_string == var_52_string; // 0xa57 Eq
	if(var_53_bool == 0) goto Label_2652; // 0xa58 JumpB
	var_28_bool = 0; // 0xa59 MovB
	return 4; // 0xa5a Return
	
Label_2652:
	var_54_string = "dog"; // 0xa5c PushS
	var_55_bool = var_34_string == var_54_string; // 0xa5d Eq
	if(var_55_bool == 0) goto Label_2658; // 0xa5e JumpB
	var_28_bool = 0; // 0xa5f MovB
	return 4; // 0xa60 Return
	
Label_2658:
	var_56_string = "grabitel"; // 0xa62 PushS
	var_57_bool = var_34_string == var_56_string; // 0xa63 Eq
	if(var_57_bool == 0) goto Label_2664; // 0xa64 JumpB
	var_28_bool = 0; // 0xa65 MovB
	return 4; // 0xa66 Return
	
Label_2664:
	var_58_string = "bomber"; // 0xa68 PushS
	var_59_bool = var_34_string == var_58_string; // 0xa69 Eq
	if(var_59_bool == 0) goto Label_2670; // 0xa6a JumpB
	var_28_bool = 0; // 0xa6b MovB
	return 4; // 0xa6c Return
	
Label_2670:
	var_60_string = "sanitar"; // 0xa6e PushS
	var_61_bool = var_34_string == var_60_string; // 0xa6f Eq
	if(var_61_bool == 0) goto Label_2676; // 0xa70 JumpB
	var_28_bool = 0; // 0xa71 MovB
	return 4; // 0xa72 Return
	
Label_2676:
	var_62_string = "hunter"; // 0xa74 PushS
	var_63_bool = var_34_string == var_62_string; // 0xa75 Eq
	if(var_63_bool == 0) goto Label_2682; // 0xa76 JumpB
	var_28_bool = 0; // 0xa77 MovB
	return 4; // 0xa78 Return
	
Label_2682:
	var_64_string = "soldier"; // 0xa7a PushS
	var_65_bool = var_34_string == var_64_string; // 0xa7b Eq
	if(var_65_bool == 0) goto Label_2687; // 0xa7c JumpB
	var_28_bool = 0; // 0xa7d MovB
	return 4; // 0xa7e Return
	
Label_2687:
	var_28_bool = 1; // 0xa7f MovB
	return 4; // 0xa80 Return
}


func_2108(var_503_float, var_504_float, var_505_float)
{
	var_508_bool = var_504_float < var_505_float; // 0x83d LT
	if(var_508_bool == 0) goto Label_2113; // 0x83e JumpB
	var_503_float = var_504_float; // 0x83f Mov
	goto Label_2114; // 0x840 Jump
	
Label_2114:
	return 0; // 0x842 Return
	
Label_2113:
	var_503_float = var_505_float; // 0x841 Mov
}


func_2115(var_513_float, var_514_float, var_515_float, var_516_float)
{
	var_517_bool = var_514_float < var_515_float; // 0x844 LT
	if(var_517_bool == 0) goto Label_2120; // 0x845 JumpB
	var_513_float = var_515_float; // 0x846 Mov
	return 0; // 0x847 Return
	
Label_2120:
	var_518_bool = var_514_float > var_516_float; // 0x848 GT
	if(var_518_bool == 0) goto Label_2124; // 0x849 JumpB
	var_513_float = var_516_float; // 0x84a Mov
	return 0; // 0x84b Return
	
Label_2124:
	var_513_float = var_514_float; // 0x84c Mov
	return 0; // 0x84d Return
}


func_1092(var_0_bool, var_414_bool, var_415_float)
{
	var_416_int = 0; var_417_bool = 0; var_418_int = 0; var_419_string = ""; var_420_int = 0; var_421_bool = 0; var_422_int = 0; var_423_string = ""; // 0x444 PushV
	func_1431(var_423_string); // 0x446 NEW_2
	irand(var_420_int, var_423_string); // 0x448 Func
	var_424_int = 1; // 0x44a PushI
	var_420_int = var_420_int + var_424_int; // 0x44b Add2
	Face(var_0_bool); // 0x44c Func
	var_425_bool = 1; // 0x44e PushB
	SetAttackState(var_425_bool); // 0x44f Func
	func_2161(); // 0x452 NEW_2
	var_430_string = "all"; // 0x454 PushS
	var_431_string = "attack_begin"; // 0x455 PushS
	var_432_int = var_431_string + var_420_int; // 0x456 Add
	PlayAnimation(var_430_string, var_432_int); // 0x457 Func
	WaitForAnimEnd(); // 0x459 Func
	func_1399(var_422_int, var_423_string); // 0x45c NEW_2
	var_448_bool = 0; var_449_object = Obj(); // 0x45e PushV
	var_449_object = var_0_bool; // 0x45f MovT
	func_1874(var_448_bool, var_449_object); // 0x460 NEW_2
	var_450_bool = var_448_bool == 0; // 0x462 Not
	if(var_450_bool == 0) goto Label_1128; // 0x463 JumpB
	StopAsync(); // 0x464 Func
	var_414_bool = 0; // 0x466 MovB
	return 8; // 0x467 Return
	
Label_1128:
	var_451_float = 0; var_452_int = 0; // 0x468 PushV
	var_451_float = var_415_float; // 0x469 Mov
	var_452_int = var_420_int; // 0x46a Mov
	func_1053(var_423_string, var_451_float, var_452_int); // 0x46b NEW_2
	var_533_string = "all"; // 0x46d PushS
	var_534_string = "attack_middle"; // 0x46e PushS
	var_535_int = var_534_string + var_420_int; // 0x46f Add
	HasAnimation(var_421_bool, var_533_string, var_535_int); // 0x470 Func
	var_536_bool = var_421_bool; // 0x472 Push
	if(var_536_bool == 0) goto Label_1209; // 0x473 JumpB
	func_2161(); // 0x475 NEW_2
	var_537_string = "all"; // 0x477 PushS
	var_538_string = "attack_middle"; // 0x478 PushS
	var_539_int = var_538_string + var_420_int; // 0x479 Add
	PlayAnimation(var_537_string, var_539_int); // 0x47a Func
	WaitForAnimEnd(); // 0x47c Func
	func_1431(var_423_string); // 0x47f NEW_2
	var_540_bool = 0; var_541_object = Obj(); // 0x481 PushV
	var_541_object = var_0_bool; // 0x482 MovT
	func_1874(var_540_bool, var_541_object); // 0x483 NEW_2
	var_542_bool = var_540_bool == 0; // 0x485 Not
	if(var_542_bool == 0) goto Label_1163; // 0x486 JumpB
	StopAsync(); // 0x487 Func
	var_414_bool = 0; // 0x489 MovB
	return 8; // 0x48a Return
	
Label_1163:
	var_543_float = 0; var_544_int = 0; // 0x48b PushV
	var_543_float = var_415_float; // 0x48c Mov
	var_544_int = var_420_int; // 0x48d Mov
	func_1053(var_423_string, var_543_float, var_544_int); // 0x48e NEW_2
	var_422_int = 1; // 0x490 MovI
	
Label_1169:
	var_545_string = "attack_middle"; // 0x491 PushS
	var_546_int = var_545_string + var_420_int; // 0x492 Add
	var_547_string = "_"; // 0x493 PushS
	var_548_int = var_546_int + var_547_string; // 0x494 Add
	var_423_string = var_548_int + var_422_int; // 0x495 Add2
	var_549_string = "all"; // 0x496 PushS
	HasAnimation(var_421_bool, var_549_string, var_423_string); // 0x497 Func
	var_550_bool = var_421_bool == 0; // 0x499 Not
	if(var_550_bool == 0) goto Label_1180; // 0x49a JumpB
	goto Label_1209; // 0x49b Jump
	
Label_1209:
	var_551_bool = 0; // 0x4b9 PushB
	SetAttackState(var_551_bool); // 0x4ba Func
	var_552_string = "all"; // 0x4bc PushS
	var_553_string = "attack_end"; // 0x4bd PushS
	var_554_int = var_553_string + var_420_int; // 0x4be Add
	PlayAnimation(var_552_string, var_554_int); // 0x4bf Func
	var_555_bool = 0; // 0x4c1 PushV
	func_1445(var_555_bool); // 0x4c2 NEW_2
	if(var_555_bool == 0) goto Label_1227; // 0x4c4 JumpB
	var_556_bool = 0; var_557_float = 0; // 0x4c5 PushV
	var_557_float = 0.75; // 0x4c6 MovF
	func_1229(var_556_bool, var_557_float); // 0x4c7 NEW_2
	StopAsync(); // 0x4c9 Func
	
Label_1227:
	var_414_bool = 1; // 0x4cb MovB
	return 8; // 0x4cc Return
	
Label_1180:
	func_2161(); // 0x49d NEW_2
	var_565_string = "all"; // 0x49f PushS
	PlayAnimation(var_565_string, var_423_string); // 0x4a0 Func
	WaitForAnimEnd(); // 0x4a2 Func
	func_1431(var_423_string); // 0x4a5 NEW_2
	var_566_bool = 0; var_567_object = Obj(); // 0x4a7 PushV
	var_567_object = var_0_bool; // 0x4a8 MovT
	func_1874(var_566_bool, var_567_object); // 0x4a9 NEW_2
	var_568_bool = var_566_bool == 0; // 0x4ab Not
	if(var_568_bool == 0) goto Label_1201; // 0x4ac JumpB
	StopAsync(); // 0x4ad Func
	var_414_bool = 0; // 0x4af MovB
	return 8; // 0x4b0 Return
	
Label_1201:
	var_569_float = 0; var_570_int = 0; // 0x4b1 PushV
	var_569_float = var_415_float; // 0x4b2 Mov
	var_570_int = var_420_int; // 0x4b3 Mov
	func_1053(var_423_string, var_569_float, var_570_int); // 0x4b4 NEW_2
	var_571_int = 1; // 0x4b6 PushI
	var_422_int = var_422_int + var_571_int; // 0x4b7 Add2
	goto Label_1169; // 0x4b8 Jump
}


func_2126(var_521_float)
{
	var_522_object = Obj(); var_523_object = Obj(); // 0x84e PushV
	CreateFloatVector(var_523_object); // 0x84f Func
	add(var_521_float); // 0x851 ObjFunc
	var_524_int = 0; // 0x853 PushI
	var_525_bool = var_521_float < var_524_int; // 0x854 LT
	if(var_525_bool == 0) goto Label_2138; // 0x855 JumpB
	var_526_float = 0.7; // 0x856 PushF
	var_527_int = 500; // 0x857 PushI
	RumblePlay(var_526_float, var_527_int); // 0x858 Func
	
Label_2138:
	var_528_int = 15; // 0x85a PushI
	SendWorldWndMessage(var_528_int, var_523_object); // 0x85b Func
	return 2; // 0x85d Return
}


func_2143(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x85f PushV
	GetGameTime(var_25_float); // 0x860 Func
	var_26_int = 1; // 0x862 PushI
	var_27_int = 0; // 0x863 PushV
	var_28_int = 24; // 0x864 PushI
	var_27_int = var_25_float / var_25_float; // 0x865 Div2
	var_23_int = var_26_int + var_27_int; // 0x866 Add2
	return 2; // 0x867 Return
}


func_2152(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x868 PushV
	IsPlayerActor(var_15_object, var_17_bool); // 0x869 Func
	var_18_bool = var_17_bool; // 0x86b Push
	if(var_18_bool == 0) goto Label_2160; // 0x86c JumpB
	var_19_string = "attack"; // 0x86d PushS
	PlayGlobalMusic(var_19_string); // 0x86e Func
	
Label_2160:
	return 2; // 0x870 Return
}


func_2161()
{
	var_426_object = Obj(); var_427_object = Obj(); // 0x871 PushV
	GetScene(var_427_object); // 0x872 Func
	var_428_string = "battle"; // 0x874 PushS
	var_429_object = Obj(); // 0x875 PushV
	func_2092(var_429_object); // 0x876 NEW_2
	BroadcastMessage(var_428_string, var_429_object, var_427_object); // 0x878 Func
	return 2; // 0x87a Return
}


func_124(var_37_string)
{
	RemoveRTEnvelope(); // 0x7d Func
	SetDeathState(); // 0x7f Func
	Stop(); // 0x81 Func
	StopAsync(); // 0x83 Func
	StopSecondaryAnimation(); // 0x85 Func
	var_38_string = ""; // 0x87 PushV
	var_38_string = var_37_string; // 0x88 Mov
	func_2051(var_38_string); // 0x89 NEW_2
	var_67_string = "all"; // 0x8b PushS
	PlayAnimation(var_67_string, var_37_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_68_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_68_string, var_37_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_2172(var_20_int, var_21_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x87c PushV
	var_35_bool = var_20_int > var_21_int; // 0x87d GT
	if(var_35_bool == 0) goto Label_2179; // 0x87e JumpB
	var_36_string = "GenerateMoney: iMin > iMax"; // 0x87f PushS
	Trace(var_36_string); // 0x880 Func
	return 4; // 0x882 Return
	
Label_2179:
	var_33_int = 0; // 0x883 MovI
	var_37_bool = var_20_int != var_21_int; // 0x884 Neq
	if(var_37_bool == 0) goto Label_2186; // 0x885 JumpB
	var_38_int = var_21_int - var_20_int; // 0x886 Sub
	irand(var_33_int, var_38_int); // 0x887 Func
	goto Label_2190; // 0x889 Jump
	
Label_2190:
	var_33_int = var_33_int + var_20_int; // 0x88e Add2
	var_39_int = 0; // 0x88f PushI
	var_40_bool = var_33_int == var_39_int; // 0x890 Eq
	if(var_40_bool == 0) goto Label_2195; // 0x891 JumpB
	return 4; // 0x892 Return
	
Label_2195:
	var_41_int = 0; var_42_string = ""; // 0x893 PushV
	var_42_string = "Money"; // 0x894 MovS
	func_2378(var_41_int, var_42_string); // 0x895 NEW_2
	var_45_int = 0; // 0x897 PushI
	AddItem(var_34_bool, var_41_int, var_45_int, var_33_int); // 0x898 Func
	return 4; // 0x89a Return
	
Label_2186:
	var_46_int = 0; // 0x88a PushI
	var_47_bool = var_20_int == var_46_int; // 0x88b Eq
	if(var_47_bool == 0) goto Label_2190; // 0x88c JumpB
	return 4; // 0x88d Return
}


func_2689(var_79_int, var_80_object)
{
	var_82_int = 0; var_83_object = Obj(); // 0xa82 PushV
	var_83_object = var_80_object; // 0xa83 Mov
	func_2596(var_82_int, var_83_object); // 0xa84 NEW_2
	var_79_int = var_82_int; // 0xa85 Mov
	return 0; // 0xa87 Return
}


func_1665(var_0_bool, var_1_bool, var_20_int)
{
	var_21_int = 0; // 0x682 PushI
	var_22_bool = var_20_int != var_21_int; // 0x683 Neq
	if(var_22_bool == 0) goto Label_1670; // 0x684 JumpB
	return 0; // 0x685 Return
	
Label_1670:
	var_23_bool = 0; var_24_object = Obj(); // 0x686 PushV
	var_24_object = var_1_bool; // 0x687 MovT
	func_1703(var_23_bool, var_24_object); // 0x688 NEW_2
	var_59_bool = var_23_bool == 0; // 0x68a Not
	if(var_59_bool == 0) goto Label_1677; // 0x68b JumpB
	var_0_bool = 1; // 0x68c TMovB
	
Label_1677:
	var_60_int = 0; // 0x68d PushI
	KillTimer(var_60_int); // 0x68e Func
	Stop(); // 0x690 Func
	return 0; // 0x692 Return
}


func_2696(var_116_object)
{
	var_117_object = Obj(); // 0xa89 PushV
	var_117_object = var_116_object; // 0xa8a Mov
	func_2606(var_117_object); // 0xa8b NEW_2
	return 0; // 0xa8d Return
}


func_2702(var_21_bool, var_22_object, var_23_object, var_24_float, var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0xa8e PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; // 0xa8f PushV
	var_29_object = var_23_object; // 0xa90 Mov
	var_30_bool = !var_25_bool; // 0xa91 Not2
	func_2614(var_28_bool, var_29_object, var_30_bool); // 0xa92 NEW_2
	var_66_bool = var_28_bool == 0; // 0xa94 Not
	if(var_66_bool == 0) goto Label_2712; // 0xa95 JumpB
	var_21_bool = 0; // 0xa96 MovB
	return 2; // 0xa97 Return
	
Label_2712:
	CanSee(var_27_bool, var_22_object); // 0xa98 Func
	var_67_bool = 0; // 0xa9a PushV
	var_67_bool = 1; // 0xa9b MovB
	var_68_bool = var_27_bool; // 0xa9c Push
	if(var_68_bool == 0) goto Label_2726; // 0xa9d JumpB
	var_69_float = 0; var_70_object = Obj(); // 0xa9e PushV
	var_70_object = var_22_object; // 0xa9f Mov
	func_1735(var_70_object); // 0xaa0 NEW_2
	var_77_float = var_24_float * var_24_float; // 0xaa2 Mult
	var_78_bool = var_69_float <= var_77_float; // 0xaa3 LE
	if(var_78_bool == 0) goto Label_2726; // 0xaa4 JumpB
	var_67_bool = 0; // 0xaa5 MovB
	
Label_2726:
	if(var_67_bool == 0) goto Label_2729; // 0xaa6 JumpB
	var_21_bool = 1; // 0xaa7 MovB
	return 2; // 0xaa8 Return
	
Label_2729:
	var_21_bool = 0; // 0xaa9 MovB
	return 2; // 0xaaa Return
}


func_1687(var_0_bool)
{
	var_0_bool = 1; // 0x697 TMovB
	var_16_int = 0; // 0x698 PushI
	KillTimer(var_16_int); // 0x699 Func
	Stop(); // 0x69b Func
	return 0; // 0x69d Return
}


func_2203(var_14_bool)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x89b PushV
	var_19_bool = var_14_bool; // 0x89c Push
	if(var_19_bool == 0) goto Label_2292; // 0x89d JumpB
	var_20_int = 0; var_21_int = 0; // 0x89e PushV
	var_20_int = 0; // 0x89f MovI
	var_22_int = 100; // 0x8a0 PushI
	var_23_int = 0; // 0x8a1 PushV
	func_2143(var_23_int); // 0x8a2 NEW_2
	var_29_int = 100; // 0x8a4 PushI
	var_30_float = var_23_int * var_29_int; // 0x8a5 Mult
	var_21_int = var_22_int + var_30_float; // 0x8a6 Add2
	func_2172(var_20_int, var_21_int); // 0x8a7 NEW_2
	var_48_int = 8; // 0x8a9 PushI
	irand(var_17_int, var_48_int); // 0x8aa Func
	var_49_int = 0; // 0x8ac PushI
	var_50_bool = var_17_int == var_49_int; // 0x8ad Eq
	if(var_50_bool == 0) goto Label_2232; // 0x8ae JumpB
	var_51_int = 0; var_52_string = ""; // 0x8af PushV
	var_52_string = "lemon"; // 0x8b0 MovS
	func_2378(var_51_int, var_52_string); // 0x8b1 NEW_2
	var_53_int = 0; // 0x8b3 PushI
	var_54_int = 1; // 0x8b4 PushI
	AddItem(var_18_bool, var_51_int, var_53_int, var_54_int); // 0x8b5 Func
	goto Label_2291; // 0x8b7 Jump
	
Label_2291:
	goto Label_2377; // 0x8f3 Jump
	
Label_2377:
	return 4; // 0x949 Return
	
Label_2232:
	var_55_int = 1; // 0x8b8 PushI
	var_56_bool = var_17_int == var_55_int; // 0x8b9 Eq
	if(var_56_bool == 0) goto Label_2244; // 0x8ba JumpB
	var_57_int = 0; var_58_string = ""; // 0x8bb PushV
	var_58_string = "rusk"; // 0x8bc MovS
	func_2378(var_57_int, var_58_string); // 0x8bd NEW_2
	var_59_int = 0; // 0x8bf PushI
	var_60_int = 1; // 0x8c0 PushI
	AddItem(var_18_bool, var_57_int, var_59_int, var_60_int); // 0x8c1 Func
	goto Label_2291; // 0x8c3 Jump
	
Label_2244:
	var_61_int = 2; // 0x8c4 PushI
	var_62_bool = var_17_int == var_61_int; // 0x8c5 Eq
	if(var_62_bool == 0) goto Label_2256; // 0x8c6 JumpB
	var_63_int = 0; var_64_string = ""; // 0x8c7 PushV
	var_64_string = "hook"; // 0x8c8 MovS
	func_2378(var_63_int, var_64_string); // 0x8c9 NEW_2
	var_65_int = 0; // 0x8cb PushI
	var_66_int = 1; // 0x8cc PushI
	AddItem(var_18_bool, var_63_int, var_65_int, var_66_int); // 0x8cd Func
	goto Label_2291; // 0x8cf Jump
	
Label_2256:
	var_67_int = 4; // 0x8d0 PushI
	var_68_bool = var_17_int == var_67_int; // 0x8d1 Eq
	if(var_68_bool == 0) goto Label_2268; // 0x8d2 JumpB
	var_69_int = 0; var_70_string = ""; // 0x8d3 PushV
	var_70_string = "syringe"; // 0x8d4 MovS
	func_2378(var_69_int, var_70_string); // 0x8d5 NEW_2
	var_71_int = 0; // 0x8d7 PushI
	var_72_int = 1; // 0x8d8 PushI
	AddItem(var_18_bool, var_69_int, var_71_int, var_72_int); // 0x8d9 Func
	goto Label_2291; // 0x8db Jump
	
Label_2268:
	var_73_int = 5; // 0x8dc PushI
	var_74_bool = var_17_int == var_73_int; // 0x8dd Eq
	if(var_74_bool == 0) goto Label_2280; // 0x8de JumpB
	var_75_int = 0; var_76_string = ""; // 0x8df PushV
	var_76_string = "watch"; // 0x8e0 MovS
	func_2378(var_75_int, var_76_string); // 0x8e1 NEW_2
	var_77_int = 0; // 0x8e3 PushI
	var_78_int = 1; // 0x8e4 PushI
	AddItem(var_18_bool, var_75_int, var_77_int, var_78_int); // 0x8e5 Func
	goto Label_2291; // 0x8e7 Jump
	
Label_2280:
	var_79_int = 6; // 0x8e8 PushI
	var_80_bool = var_17_int == var_79_int; // 0x8e9 Eq
	if(var_80_bool == 0) goto Label_2291; // 0x8ea JumpB
	var_81_int = 0; var_82_string = ""; // 0x8eb PushV
	var_82_string = "razor"; // 0x8ec MovS
	func_2378(var_81_int, var_82_string); // 0x8ed NEW_2
	var_83_int = 0; // 0x8ef PushI
	var_84_int = 1; // 0x8f0 PushI
	AddItem(var_18_bool, var_81_int, var_83_int, var_84_int); // 0x8f1 Func
	
Label_2292:
	var_85_int = 0; var_86_int = 0; // 0x8f4 PushV
	var_85_int = 0; // 0x8f5 MovI
	var_87_int = 50; // 0x8f6 PushI
	var_88_int = 0; // 0x8f7 PushV
	func_2143(var_88_int); // 0x8f8 NEW_2
	var_89_int = 50; // 0x8fa PushI
	var_90_float = var_88_int * var_89_int; // 0x8fb Mult
	var_86_int = var_87_int + var_90_float; // 0x8fc Add2
	func_2172(var_85_int, var_86_int); // 0x8fd NEW_2
	var_91_int = 7; // 0x8ff PushI
	irand(var_17_int, var_91_int); // 0x900 Func
	var_92_int = 0; // 0x902 PushI
	var_93_bool = var_17_int == var_92_int; // 0x903 Eq
	if(var_93_bool == 0) goto Label_2318; // 0x904 JumpB
	var_94_int = 0; var_95_string = ""; // 0x905 PushV
	var_95_string = "beads"; // 0x906 MovS
	func_2378(var_94_int, var_95_string); // 0x907 NEW_2
	var_96_int = 0; // 0x909 PushI
	var_97_int = 1; // 0x90a PushI
	AddItem(var_18_bool, var_94_int, var_96_int, var_97_int); // 0x90b Func
	goto Label_2377; // 0x90d Jump
	
Label_2318:
	var_98_int = 1; // 0x90e PushI
	var_99_bool = var_17_int == var_98_int; // 0x90f Eq
	if(var_99_bool == 0) goto Label_2330; // 0x910 JumpB
	var_100_int = 0; var_101_string = ""; // 0x911 PushV
	var_101_string = "bracelet"; // 0x912 MovS
	func_2378(var_100_int, var_101_string); // 0x913 NEW_2
	var_102_int = 0; // 0x915 PushI
	var_103_int = 1; // 0x916 PushI
	AddItem(var_18_bool, var_100_int, var_102_int, var_103_int); // 0x917 Func
	goto Label_2377; // 0x919 Jump
	
Label_2330:
	var_104_int = 2; // 0x91a PushI
	var_105_bool = var_17_int == var_104_int; // 0x91b Eq
	if(var_105_bool == 0) goto Label_2342; // 0x91c JumpB
	var_106_int = 0; var_107_string = ""; // 0x91d PushV
	var_107_string = "ear_ring"; // 0x91e MovS
	func_2378(var_106_int, var_107_string); // 0x91f NEW_2
	var_108_int = 0; // 0x921 PushI
	var_109_int = 1; // 0x922 PushI
	AddItem(var_18_bool, var_106_int, var_108_int, var_109_int); // 0x923 Func
	goto Label_2377; // 0x925 Jump
	
Label_2342:
	var_110_int = 3; // 0x926 PushI
	var_111_bool = var_17_int == var_110_int; // 0x927 Eq
	if(var_111_bool == 0) goto Label_2354; // 0x928 JumpB
	var_112_int = 0; var_113_string = ""; // 0x929 PushV
	var_113_string = "gold_ring"; // 0x92a MovS
	func_2378(var_112_int, var_113_string); // 0x92b NEW_2
	var_114_int = 0; // 0x92d PushI
	var_115_int = 1; // 0x92e PushI
	AddItem(var_18_bool, var_112_int, var_114_int, var_115_int); // 0x92f Func
	goto Label_2377; // 0x931 Jump
	
Label_2354:
	var_116_int = 4; // 0x932 PushI
	var_117_bool = var_17_int == var_116_int; // 0x933 Eq
	if(var_117_bool == 0) goto Label_2366; // 0x934 JumpB
	var_118_int = 0; var_119_string = ""; // 0x935 PushV
	var_119_string = "silver_ring"; // 0x936 MovS
	func_2378(var_118_int, var_119_string); // 0x937 NEW_2
	var_120_int = 0; // 0x939 PushI
	var_121_int = 1; // 0x93a PushI
	AddItem(var_18_bool, var_118_int, var_120_int, var_121_int); // 0x93b Func
	goto Label_2377; // 0x93d Jump
	
Label_2366:
	var_122_int = 5; // 0x93e PushI
	var_123_bool = var_17_int == var_122_int; // 0x93f Eq
	if(var_123_bool == 0) goto Label_2377; // 0x940 JumpB
	var_124_int = 0; var_125_string = ""; // 0x941 PushV
	var_125_string = "flower"; // 0x942 MovS
	func_2378(var_124_int, var_125_string); // 0x943 NEW_2
	var_126_int = 0; // 0x945 PushI
	var_127_int = 1; // 0x946 PushI
	AddItem(var_18_bool, var_124_int, var_126_int, var_127_int); // 0x947 Func
}


func_1703(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x6a8 PushV
	var_26_object = var_24_object; // 0x6a9 Mov
	func_1874(var_25_bool, var_26_object); // 0x6aa NEW_2
	var_23_bool = var_25_bool; // 0x6ab Mov
	return 0; // 0x6ad Return
}


func_171()
{
	var_128_bool = 0; // 0xab PushV
	func_2035(var_128_bool); // 0xac NEW_2
	var_131_bool = var_128_bool == 0; // 0xae Not
	if(var_131_bool == 0) goto Label_179; // 0xaf JumpB
	func_2746(); // 0xb1 NEW_2
	
Label_179:
	return 0; // 0xb3 Return
}


func_2731(var_15_int)
{
	var_15_int = 0; // 0xaac MovI
	return 0; // 0xaad Return
}


func_2734()
{
	return 0; // 0xaaf Return
}


func_1710(var_265_string)
{
	var_265_string = "walk"; // 0x6ae MovS
	return 0; // 0x6af Return
}


func_2736(var_42_int)
{
	var_42_int = 0; // 0xab1 MovI
	return 0; // 0xab2 Return
}


func_689()
{
	var_159_int = 0; var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_bool = 0; var_164_float = 0; var_165_bool = 0; var_166_int = 0; var_167_int = 0; var_168_int = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_bool = 0; // 0x2b1 PushV
	WaitForAnimEnd(); // 0x2b2 Func
	var_173_bool = 0; // 0x2b4 PushV
	func_2035(var_173_bool); // 0x2b5 NEW_2
	var_174_bool = var_173_bool == 0; // 0x2b7 Not
	if(var_174_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 14; // 0x2b9 Return
	
Label_698:
	var_175_int = 0; // 0x2ba PushV
	func_2563(var_175_int); // 0x2bb NEW_2
	var_166_int = var_175_int; // 0x2bc Mov
	var_167_int = 0; // 0x2be MovI
	
Label_703:
	var_188_bool = 0; // 0x2bf PushV
	var_188_bool = 0; // 0x2c0 MovB
	var_189_int = 5; // 0x2c1 PushI
	var_190_bool = var_167_int < var_189_int; // 0x2c2 LT
	if(var_190_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_191_bool = 0; // 0x2c4 PushV
	func_2035(var_191_bool); // 0x2c5 NEW_2
	if(var_191_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_188_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_188_bool == 0) goto Label_765; // 0x2c9 JumpB
	var_192_int = 3; // 0x2ca PushI
	irand(var_168_int, var_192_int); // 0x2cb Func
	var_193_int = 0; // 0x2cd PushI
	var_194_bool = var_168_int == var_193_int; // 0x2ce Eq
	if(var_194_bool == 0) goto Label_737; // 0x2cf JumpB
	var_195_int = var_166_int; // 0x2d0 Push
	if(var_195_int == 0) goto Label_736; // 0x2d1 JumpB
	irand(var_169_int, var_166_int); // 0x2d2 Func
	var_196_string = "all"; // 0x2d4 PushS
	var_197_string = ""; var_198_int = 0; // 0x2d5 PushV
	var_198_int = var_169_int; // 0x2d6 Mov
	func_2556(var_197_string, var_198_int); // 0x2d7 NEW_2
	PlayAnimation(var_196_string, var_197_string); // 0x2d9 Func
	WaitForAnimEnd(var_170_bool); // 0x2db Func
	var_199_bool = var_170_bool == 0; // 0x2dd Not
	if(var_199_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_765; // 0x2df Jump
	
Label_765:
	ResetAAS(); // 0x2fd Func
	return 14; // 0x2ff Return
	
Label_736:
	goto Label_754; // 0x2e0 Jump
	
Label_754:
	var_200_bool = 0; // 0x2f2 PushV
	func_768(var_200_bool); // 0x2f3 NEW_2
	var_201_bool = var_200_bool == 0; // 0x2f5 Not
	if(var_201_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_765; // 0x2f7 Jump
	
Label_760:
	ResetAAS(); // 0x2f8 Func
	var_202_int = 1; // 0x2fa PushI
	var_167_int = var_167_int + var_202_int; // 0x2fb Add2
	goto Label_703; // 0x2fc Jump
	
Label_737:
	var_203_int = 1; // 0x2e1 PushI
	var_204_bool = var_168_int == var_203_int; // 0x2e2 Eq
	if(var_204_bool == 0) goto Label_751; // 0x2e3 JumpB
	var_205_int = 4; // 0x2e4 PushI
	rand(var_171_float, var_205_int); // 0x2e5 Func
	var_206_int = 1; // 0x2e7 PushI
	var_207_int = var_171_float + var_206_int; // 0x2e8 Add
	Sleep(var_207_int, var_172_bool); // 0x2e9 Func
	var_208_bool = var_172_bool == 0; // 0x2eb Not
	if(var_208_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_765; // 0x2ed Jump
	
Label_750:
	goto Label_754; // 0x2ee Jump
	
Label_751:
	var_209_int = var_167_int; // 0x2ef Push
	if(var_209_int == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_765; // 0x2f1 Jump
}


func_1712(var_266_string)
{
	var_266_string = "run"; // 0x6b0 MovS
	return 0; // 0x6b1 Return
}


func_2739()
{
	return 0; // 0xab4 Return
}


func_1714(var_493_string, var_494_int)
{
	var_495_int = 2; // 0x6b3 PushI
	var_496_bool = var_494_int == var_495_int; // 0x6b4 Eq
	if(var_496_bool == 0) goto Label_1721; // 0x6b5 JumpB
	var_493_string = "fire"; // 0x6b6 MovS
	return 0; // 0x6b7 Return
	
Label_1721:
	var_497_int = 1; // 0x6b9 PushI
	var_498_bool = var_494_int == var_497_int; // 0x6ba Eq
	if(var_498_bool == 0) goto Label_1726; // 0x6bb JumpB
	var_493_string = "bullet"; // 0x6bc MovS
	return 0; // 0x6bd Return
	
Label_1726:
	var_493_string = "phys"; // 0x6be MovS
	return 0; // 0x6bf Return
}


func_2741(var_15_int)
{
	var_15_int = 0; // 0xab6 MovI
	return 0; // 0xab7 Return
}


func_2744()
{
	return 0; // 0xab9 Return
}


func_2746()
{
	return 0; // 0xaba Return
}


func_2747(var_18_bool)
{
	var_18_bool = 0; // 0xabc MovB
	return 0; // 0xabd Return
}


func_2750()
{
	return 0; // 0xabf Return
}


func_1728(var_46_cvector)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x6c0 PushV
	GetPosition(var_50_cvector); // 0x6c1 Func
	GetPosition(var_51_cvector); // 0x6c3 ObjFunc
	var_46_cvector = var_51_cvector - var_50_cvector; // 0x6c5 Sub2
	return 4; // 0x6c6 Return
}


func_2752(var_25_bool)
{
	var_25_bool = 0; // 0xac1 MovB
	return 0; // 0xac2 Return
}


func_2755()
{
	return 0; // 0xac4 Return
}


func_2757(var_29_bool)
{
	var_29_bool = 0; // 0xac6 MovB
	return 0; // 0xac7 Return
}


func_1735(var_69_float)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x6c7 PushV
	GetPosition(var_74_cvector); // 0x6c8 Func
	GetPosition(var_75_cvector); // 0x6ca ObjFunc
	var_76_cvector = var_75_cvector - var_74_cvector; // 0x6cc Sub2
	var_69_float = var_76_cvector | var_76_cvector; // 0x6cd Or2
	return 6; // 0x6ce Return
}


func_2760()
{
	return 0; // 0xac9 Return
}


func_2762(var_20_bool)
{
	var_20_bool = 0; // 0xacb MovB
	return 0; // 0xacc Return
}


func_1229(var_556_bool, var_557_float)
{
	var_558_float = 0; var_559_bool = 0; var_560_float = 0; var_561_bool = 0; // 0x4cd PushV
	rand(var_560_float); // 0x4ce Func
	var_562_bool = var_560_float < var_557_float; // 0x4d0 LT
	if(var_562_bool == 0) goto Label_1249; // 0x4d1 JumpB
	
Label_1234:
	IsAnimationPlaying(var_561_bool); // 0x4d2 Func
	var_563_bool = var_561_bool == 0; // 0x4d4 Not
	if(var_563_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1248; // 0x4d6 Jump
	
Label_1248:
	goto Label_1254; // 0x4e0 Jump
	
Label_1254:
	var_556_bool = 0; // 0x4e6 MovB
	return 4; // 0x4e7 Return
	
Label_1239:
	var_564_bool = 0; // 0x4d7 PushV
	func_1327(var_564_bool); // 0x4d8 NEW_2
	if(var_564_bool == 0) goto Label_1245; // 0x4da JumpB
	var_556_bool = 1; // 0x4db MovB
	return 4; // 0x4dc Return
	
Label_1245:
	sync(); // 0x4dd Func
	goto Label_1234; // 0x4df Jump
	
Label_1249:
	WaitForAnimEnd(); // 0x4e1 Func
	func_1431(var_561_bool); // 0x4e4 NEW_2
}


func_2765()
{
	return 0; // 0xace Return
}


func_2767()
{
	var_13_bool = GlobalVars[0]; // 0xacf PushGE
	var_13_bool = 0; // 0xad0 MovB
	GlobalVars[0] = var_13_bool; // 0xad1 PopGE
	var_14_bool = 0; // 0xad2 PushV
	var_14_bool = 1; // 0xad3 MovB
	func_2203(var_14_bool); // 0xad4 NEW_2
	return 0; // 0xad6 Return
}


func_1743(var_96_bool, var_97_object)
{
	var_98_bool = 0; var_99_bool = 0; // 0x6cf PushV
	IsPlayerActor(var_97_object, var_99_bool); // 0x6d0 Func
	var_96_bool = var_99_bool; // 0x6d2 Mov
	return 2; // 0x6d3 Return
}


func_1748(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0; // 0x6d4 PushV
	var_52_string = "HasProperty"; // 0x6d5 PushS
	var_53_int = 2; // 0x6d6 PushI
	var_54_bool = IsFuncExist(var_48_object, var_52_string, var_53_int); // 0x6d7 FuncExist
	var_55_bool = var_54_bool == 0; // 0x6d8 Not
	if(var_55_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_47_bool = 0; // 0x6da MovB
	return 2; // 0x6db Return
	
Label_1756:
	HasProperty(var_49_string, var_51_bool); // 0x6dc ObjFunc
	var_47_bool = var_51_bool; // 0x6de Mov
	return 2; // 0x6df Return
}


func_2775(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0; // 0xad7 PushV
	IsPlayerActor(var_58_object, var_60_bool); // 0xad8 Func
	var_57_bool = var_60_bool; // 0xada Mov
	return 2; // 0xadb Return
}


func_2780(var_17_bool, var_18_object, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_float = 0; var_25_bool = 0; // 0xadd PushV
	var_22_object = var_18_object; // 0xade Mov
	var_23_object = var_19_object; // 0xadf Mov
	var_24_float = 700.0; // 0xae0 MovF
	var_25_bool = var_20_bool; // 0xae1 Mov
	func_2702(var_21_bool, var_22_object, var_23_object, var_24_float, var_25_bool); // 0xae2 NEW_2
	var_17_bool = var_21_bool; // 0xae3 Mov
	return 0; // 0xae5 Return
}


func_1760(var_465_float, var_466_object, var_467_float, var_468_int)
{
	var_472_int = 0; var_473_string = ""; var_474_int = 0; var_475_float = 0; var_476_float = 0; var_477_float = 0; var_478_int = 0; var_479_string = ""; var_480_int = 0; var_481_float = 0; var_482_float = 0; var_483_float = 0; // 0x6e0 PushV
	var_484_bool = 0; var_485_object = Obj(); var_486_string = ""; // 0x6e1 PushV
	var_485_object = var_466_object; // 0x6e2 Mov
	var_486_string = "health"; // 0x6e3 MovS
	func_1748(var_484_bool, var_485_object, var_486_string); // 0x6e4 NEW_2
	var_487_bool = var_484_bool == 0; // 0x6e6 Not
	if(var_487_bool == 0) goto Label_1770; // 0x6e7 JumpB
	var_465_float = 0.0; // 0x6e8 MovF
	return 12; // 0x6e9 Return
	
Label_1770:
	var_488_bool = 0; var_489_object = Obj(); var_490_string = ""; // 0x6ea PushV
	var_489_object = var_466_object; // 0x6eb Mov
	var_490_string = "armor"; // 0x6ec MovS
	func_1748(var_488_bool, var_489_object, var_490_string); // 0x6ed NEW_2
	var_491_bool = var_488_bool == 0; // 0x6ef Not
	if(var_491_bool == 0) goto Label_1779; // 0x6f0 JumpB
	var_478_int = 0; // 0x6f1 MovI
	goto Label_1782; // 0x6f2 Jump
	
Label_1782:
	var_492_string = "armor_"; // 0x6f6 PushS
	var_493_string = ""; var_494_int = 0; // 0x6f7 PushV
	var_494_int = var_468_int; // 0x6f8 Mov
	func_1714(var_493_string, var_494_int); // 0x6f9 NEW_2
	var_479_string = var_492_string + var_493_string; // 0x6fb Add2
	var_499_bool = 0; var_500_object = Obj(); var_501_string = ""; // 0x6fc PushV
	var_500_object = var_466_object; // 0x6fd Mov
	var_501_string = var_479_string; // 0x6fe Mov
	func_1748(var_499_bool, var_500_object, var_501_string); // 0x6ff NEW_2
	var_502_bool = var_499_bool == 0; // 0x701 Not
	if(var_502_bool == 0) goto Label_1797; // 0x702 JumpB
	var_480_int = 0; // 0x703 MovI
	goto Label_1799; // 0x704 Jump
	
Label_1799:
	var_503_float = 0; var_504_float = 0; var_505_float = 0; // 0x707 PushV
	var_506_int = var_478_int + var_480_int; // 0x708 Add
	var_507_float = 100.0; // 0x709 PushF
	var_504_float = var_506_int / var_506_int; // 0x70a Div2
	var_505_float = 1; // 0x70b MovI
	func_2108(var_503_float, var_504_float, var_505_float); // 0x70c NEW_2
	var_481_float = var_503_float; // 0x70d Mov
	var_509_string = "health"; // 0x70f PushS
	GetProperty(var_509_string, var_482_float); // 0x710 ObjFunc
	var_510_int = 1; // 0x712 PushI
	var_511_int = var_510_int - var_481_float; // 0x713 Sub
	var_483_float = var_467_float * var_511_int; // 0x714 Mult2
	var_512_string = "health"; // 0x715 PushS
	var_513_float = 0; var_514_float = 0; var_515_float = 0; var_516_float = 0; // 0x716 PushV
	var_514_float = var_482_float - var_483_float; // 0x717 Sub2
	var_515_float = 0; // 0x718 MovI
	var_516_float = 1; // 0x719 MovI
	func_2115(var_513_float, var_514_float, var_515_float, var_516_float); // 0x71a NEW_2
	SetProperty(var_512_string, var_513_float); // 0x71c ObjFunc
	var_519_bool = 0; var_520_object = Obj(); // 0x71e PushV
	var_520_object = var_466_object; // 0x71f Mov
	func_1743(var_519_bool, var_520_object); // 0x720 NEW_2
	if(var_519_bool == 0) goto Label_1831; // 0x722 JumpB
	var_521_float = 0; // 0x723 PushV
	var_521_float = -var_483_float; // 0x724 Neg2
	func_2126(var_521_float); // 0x725 NEW_2
	
Label_1831:
	var_465_float = var_483_float; // 0x727 Mov
	return 12; // 0x728 Return
	
Label_1797:
	GetProperty(var_479_string, var_480_int); // 0x705 ObjFunc
	
Label_1779:
	var_529_string = "armor"; // 0x6f3 PushS
	GetProperty(var_529_string, var_478_int); // 0x6f4 ObjFunc
}


func_2790(var_95_object)
{
	var_96_bool = 0; var_97_object = Obj(); // 0xae7 PushV
	var_97_object = var_95_object; // 0xae8 Mov
	func_1743(var_96_bool, var_97_object); // 0xae9 NEW_2
	if(var_96_bool == 0) goto Label_2803; // 0xaeb JumpB
	var_100_object = Obj(); // 0xaec PushV
	func_2092(var_100_object); // 0xaed NEW_2
	var_103_float = -0.05; // 0xaef PushF
	var_104_bool = 1; // 0xaf0 PushB
	ReportReputationChange(var_95_object, var_100_object, var_103_float, var_104_bool); // 0xaf1 Func
	
Label_2803:
	var_105_bool = GlobalVars[0]; // 0xaf3 PushGE
	var_105_bool = 1; // 0xaf4 MovB
	GlobalVars[0] = var_105_bool; // 0xaf5 PopGE
	var_106_int = 50; // 0xaf6 PushI
	var_107_int = 40; // 0xaf7 PushI
	SetRTEnvelope(var_106_int, var_107_int); // 0xaf8 Func
	return 0; // 0xafa Return
}


func_1256(var_0_bool, var_353_bool, var_354_float)
{
	var_355_bool = 0; var_356_cvector = CVector(0,0,0); var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_float = 0; var_360_bool = 0; var_361_cvector = CVector(0,0,0); var_362_cvector = CVector(0,0,0); var_363_cvector = CVector(0,0,0); var_364_float = 0; // 0x4e8 PushV
	
Label_1257:
	IsAnimationPlaying(var_360_bool); // 0x4e9 Func
	var_365_bool = var_360_bool == 0; // 0x4eb Not
	if(var_365_bool == 0) goto Label_1262; // 0x4ec JumpB
	goto Label_1294; // 0x4ed Jump
	
Label_1294:
	func_1431(var_364_float); // 0x50f NEW_2
	var_353_bool = 0; // 0x511 MovB
	return 10; // 0x512 Return
	
Label_1262:
	var_366_bool = 0; // 0x4ee PushV
	func_1327(var_366_bool); // 0x4ef NEW_2
	if(var_366_bool == 0) goto Label_1268; // 0x4f1 JumpB
	var_353_bool = 1; // 0x4f2 MovB
	return 10; // 0x4f3 Return
	
Label_1268:
	var_409_bool = 0; var_410_object = Obj(); // 0x4f4 PushV
	var_410_object = var_0_bool; // 0x4f5 MovT
	func_1874(var_409_bool, var_410_object); // 0x4f6 NEW_2
	var_411_bool = var_409_bool == 0; // 0x4f8 Not
	if(var_411_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_353_bool = 0; // 0x4fa MovB
	return 10; // 0x4fb Return
	
Label_1276:
	GetPFPosition(var_361_cvector); // 0x4fc TObjFunc
	GetPFPosition(var_362_cvector); // 0x4fe Func
	var_363_cvector = var_361_cvector - var_362_cvector; // 0x500 Sub2
	var_364_float = var_363_cvector | var_363_cvector; // 0x501 Or2
	var_412_float = var_354_float * var_354_float; // 0x502 Mult
	var_413_bool = var_364_float < var_412_float; // 0x503 LT
	if(var_413_bool == 0) goto Label_1291; // 0x504 JumpB
	var_414_bool = 0; var_415_float = 0; // 0x505 PushV
	var_415_float = var_354_float; // 0x506 Mov
	func_1092(var_364_float, var_414_bool, var_415_float); // 0x507 NEW_2
	var_353_bool = 1; // 0x509 MovB
	return 10; // 0x50a Return
	
Label_1291:
	sync(); // 0x50b Func
	goto Label_1257; // 0x50d Jump
}


func_768(var_200_bool)
{
	var_200_bool = 1; // 0x300 MovB
	return 0; // 0x301 Return
}


func_770()
{
	StopAnimation(); // 0x302 Func
	StopGroup0(); // 0x304 Func
	return 0; // 0x306 Return
}


func_775(var_118_object)
{
	var_125_object = Obj(); var_126_bool = 0; var_127_float = 0; // 0x308 PushV
	var_125_object = var_118_object; // 0x309 Mov
	var_126_bool = 1; // 0x30a MovB
	var_127_float = 180.0; // 0x30b MovF
	func_789(var_121_int, var_122_bool, var_123_float, var_124_int, var_118_object, var_125_object, var_126_bool, var_127_float); // 0x30c NEW_2
	return 0; // 0x30e Return
}


func_783(var_462_float)
{
	var_462_float = 0.05; // 0x310 MovF
	return 0; // 0x311 Return
}


func_786(var_469_int)
{
	var_469_int = 0; // 0x313 MovI
	return 0; // 0x314 Return
}


func_1299(var_0_bool, var_368_bool)
{
	var_369_cvector = CVector(0,0,0); var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_float = 0; var_373_float = 0; var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_float = 0; var_378_float = 0; // 0x513 PushV
	var_379_bool = 0; var_380_object = Obj(); // 0x514 PushV
	var_380_object = var_0_bool; // 0x515 MovT
	func_1874(var_379_bool, var_380_object); // 0x516 NEW_2
	var_381_bool = var_379_bool == 0; // 0x518 Not
	if(var_381_bool == 0) goto Label_1308; // 0x519 JumpB
	var_368_bool = 0; // 0x51a MovB
	return 10; // 0x51b Return
	
Label_1308:
	var_382_bool = 0; // 0x51c PushV
	func_1388(var_378_float, var_382_bool); // 0x51d NEW_2
	if(var_382_bool == 0) goto Label_1325; // 0x51f JumpB
	GetPFPosition(var_374_cvector); // 0x520 TObjFunc
	GetPFPosition(var_375_cvector); // 0x522 Func
	var_376_cvector = var_374_cvector - var_375_cvector; // 0x524 Sub2
	var_377_float = var_376_cvector | var_376_cvector; // 0x525 Or2
	GetAttackDistance(var_378_float); // 0x526 TObjFunc
	var_383_int = 50; // 0x528 PushI
	var_378_float = var_378_float + var_383_int; // 0x529 Add2
	var_384_float = var_378_float * var_378_float; // 0x52a Mult
	var_368_bool = var_377_float <= var_384_float; // 0x52b LE2
	return 10; // 0x52c Return
	
Label_1325:
	var_368_bool = 0; // 0x52d MovB
	return 10; // 0x52e Return
}


func_789(var_0_bool, var_3_object, var_5_bool, var_125_object, var_126_bool, var_127_float, var_202_bool, var_294_bool)
{
	var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_bool = 0; var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_bool = 0; var_149_float = 0; // 0x315 PushV
	func_1018(var_147_cvector, var_148_bool, var_149_float); // 0x317 NEW_2
	var_5_bool = 0; // 0x319 TMovI
	var_172_string = "@GetAttackDistance"; // 0x31a PushS
	var_173_int = 1; // 0x31b PushI
	var_174_bool = IsFuncExist(var_125_object, var_172_string, var_173_int); // 0x31c FuncExist
	if(var_174_bool == 0) goto Label_803; // 0x31d JumpB
	GetAttackDistance(var_139_float); // 0x31e ObjFunc
	var_175_int = 50; // 0x320 PushI
	var_139_float = var_139_float + var_175_int; // 0x321 Add2
	goto Label_804; // 0x322 Jump
	
Label_804:
	var_176_int = 150; // 0x324 PushI
	var_177_bool = var_139_float >= var_176_int; // 0x325 GE
	if(var_177_bool == 0) goto Label_808; // 0x326 JumpB
	var_139_float = 150; // 0x327 MovI
	
Label_808:
	var_3_object = 0; // 0x328 TMovB
	var_0_bool = var_125_object; // 0x329 TMov
	IsPlayerActor(var_0_bool, var_142_bool); // 0x32a Func
	var_178_bool = var_142_bool; // 0x32c Push
	if(var_178_bool == 0) goto Label_822; // 0x32d JumpB
	var_179_string = "attack"; // 0x32e PushS
	PlayGlobalMusic(var_179_string); // 0x32f Func
	var_180_object = Obj(); // 0x331 PushV
	func_2092(var_180_object); // 0x332 NEW_2
	SendPlayerEnemy(var_125_object, var_180_object); // 0x334 Func
	
Label_822:
	var_183_bool = var_126_bool; // 0x336 Push
	if(var_183_bool == 0) goto Label_826; // 0x337 JumpB
	var_143_bool = 0; // 0x338 MovB
	goto Label_827; // 0x339 Jump
	
Label_827:
	var_184_float = 400.0; // 0x33b PushF
	var_144_float = var_184_float + var_139_float; // 0x33c Add2
	
Label_829:
	var_185_bool = 0; // 0x33d PushV
	var_185_bool = 0; // 0x33e MovB
	var_186_bool = 0; var_187_object = Obj(); // 0x33f PushV
	var_187_object = var_0_bool; // 0x340 MovT
	func_1874(var_186_bool, var_187_object); // 0x341 NEW_2
	if(var_186_bool == 0) goto Label_839; // 0x343 JumpB
	var_188_bool = var_3_object == 0; // 0x344 Not
	if(var_188_bool == 0) goto Label_839; // 0x345 JumpB
	var_185_bool = 1; // 0x346 MovB
	
Label_839:
	if(var_185_bool == 0) goto Label_1001; // 0x347 JumpB
	func_1431(var_149_float); // 0x349 NEW_2
	GetPFPosition(var_140_cvector); // 0x34b TObjFunc
	GetPFPosition(var_141_cvector); // 0x34d Func
	var_145_cvector = var_140_cvector - var_141_cvector; // 0x34f Sub2
	var_146_float = var_145_cvector | var_145_cvector; // 0x350 Or2
	var_194_float = var_144_float * var_144_float; // 0x351 Mult
	var_195_bool = var_146_float >= var_194_float; // 0x352 GE
	if(var_195_bool == 0) goto Label_867; // 0x353 JumpB
	var_196_bool = 0; var_197_object = Obj(); var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_bool = 0; // 0x354 PushV
	var_197_object = var_0_bool; // 0x355 MovT
	var_198_float = var_139_float; // 0x356 Mov
	var_199_float = 3000.0; // 0x357 MovF
	var_200_bool = 1; // 0x358 MovB
	var_201_bool = 0; // 0x359 MovB
	TaskCall(4); // 0x35a TaskCall
	func_1458(var_204_bool, var_196_bool, var_197_object, var_198_float, var_199_float, var_200_bool, var_201_bool); // 0x35b NEW_2
	TaskReturn(); // 0x35c TaskReturn
	var_279_bool = var_202_bool == 0; // 0x35e Not
	if(var_279_bool == 0) goto Label_865; // 0x35f JumpB
	goto Label_1001; // 0x360 Jump
	
Label_1001:
	WaitForAnimEnd(); // 0x3e9 Func
	var_280_object = var_3_object; // 0x3eb PushT
	if(var_280_object == 0) goto Label_1006; // 0x3ec JumpB
	return 22; // 0x3ed Return
	
Label_1006:
	var_281_string = "all"; // 0x3ee PushS
	var_282_string = "attack_off"; // 0x3ef PushS
	PlayAnimation(var_281_string, var_282_string); // 0x3f0 Func
	WaitForAnimEnd(); // 0x3f2 Func
	var_283_bool = var_142_bool; // 0x3f4 Push
	if(var_283_bool == 0) goto Label_1017; // 0x3f5 JumpB
	var_284_float = 2.0; // 0x3f6 PushF
	Sleep(var_284_float); // 0x3f7 Func
	
Label_1017:
	return 22; // 0x3f9 Return
	
Label_865:
	var_143_bool = 0; // 0x361 MovB
	goto Label_1000; // 0x362 Jump
	
Label_1000:
	goto Label_829; // 0x3e8 Jump
	
Label_867:
	var_285_float = var_127_float * var_127_float; // 0x363 Mult
	var_286_bool = var_146_float >= var_285_float; // 0x364 GE
	if(var_286_bool == 0) goto Label_992; // 0x365 JumpB
	GetPFPosition(var_147_cvector); // 0x366 TObjFunc
	CanReachByPF(var_148_bool, var_147_cvector); // 0x368 Func
	var_287_bool = var_148_bool == 0; // 0x36a Not
	if(var_287_bool == 0) goto Label_891; // 0x36b JumpB
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; var_291_float = 0; var_292_bool = 0; var_293_bool = 0; // 0x36c PushV
	var_289_object = var_0_bool; // 0x36d MovT
	var_290_float = var_139_float; // 0x36e Mov
	var_291_float = 3000.0; // 0x36f MovF
	var_292_bool = 1; // 0x370 MovB
	var_293_bool = 0; // 0x371 MovB
	TaskCall(4); // 0x372 TaskCall
	func_1458(var_296_bool, var_288_bool, var_289_object, var_290_float, var_291_float, var_292_bool, var_293_bool); // 0x373 NEW_2
	TaskReturn(); // 0x374 TaskReturn
	var_297_bool = var_294_bool == 0; // 0x376 Not
	if(var_297_bool == 0) goto Label_889; // 0x377 JumpB
	goto Label_1001; // 0x378 Jump
	
Label_889:
	var_143_bool = 0; // 0x379 MovB
	goto Label_829; // 0x37a Jump
	
Label_891:
	var_298_bool = var_143_bool == 0; // 0x37b Not
	if(var_298_bool == 0) goto Label_916; // 0x37c JumpB
	var_299_object = Obj(); // 0x37d PushV
	var_299_object = var_0_bool; // 0x37e MovT
	func_2024(); // 0x37f NEW_2
	var_308_string = "all"; // 0x381 PushS
	var_309_string = "attack_on"; // 0x382 PushS
	PlayAnimation(var_308_string, var_309_string); // 0x383 Func
	WaitForAnimEnd(); // 0x385 Func
	func_1431(var_149_float); // 0x388 NEW_2
	StopAsync(); // 0x38a Func
	var_143_bool = 1; // 0x38c MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x38d PushV
	var_311_object = var_0_bool; // 0x38e MovT
	func_1874(var_310_bool, var_311_object); // 0x38f NEW_2
	var_312_bool = var_310_bool == 0; // 0x391 Not
	if(var_312_bool == 0) goto Label_916; // 0x392 JumpB
	goto Label_1001; // 0x393 Jump
	
Label_916:
	rand(var_149_float); // 0x394 Func
	var_313_bool = 0; // 0x396 PushV
	var_313_bool = 1; // 0x397 MovB
	var_314_float = 0.25; // 0x398 PushF
	var_315_bool = var_149_float < var_314_float; // 0x399 LT
	if(var_315_bool == 0) goto Label_928; // 0x39a JumpB
	var_316_bool = 0; // 0x39b PushV
	func_1388(var_313_bool, var_316_bool); // 0x39c NEW_2
	if(var_316_bool == 0) goto Label_928; // 0x39e JumpB
	var_313_bool = 0; // 0x39f MovB
	
Label_928:
	if(var_313_bool == 0) goto Label_945; // 0x3a0 JumpB
	Face(var_0_bool); // 0x3a1 Func
	func_1438(); // 0x3a4 NEW_2
	var_351_string = "all"; // 0x3a6 PushS
	var_352_string = "attack_stay"; // 0x3a7 PushS
	PlayAnimation(var_351_string, var_352_string); // 0x3a8 Func
	var_353_bool = 0; var_354_float = 0; // 0x3aa PushV
	var_354_float = var_127_float; // 0x3ab Mov
	func_1256(var_149_float, var_353_bool, var_354_float); // 0x3ac NEW_2
	StopAsync(); // 0x3ae Func
	goto Label_991; // 0x3b0 Jump
	
Label_991:
	goto Label_1000; // 0x3df Jump
	
Label_945:
	Face(var_0_bool); // 0x3b1 Func
	var_572_string = "all"; // 0x3b3 PushS
	var_573_string = "fjump"; // 0x3b4 PushS
	PlayAnimation(var_572_string, var_573_string); // 0x3b5 Func
	WaitForAnimEnd(); // 0x3b7 Func
	func_1431(var_149_float); // 0x3ba NEW_2
	var_574_cvector = CVector(0.0, 0.0, 0.0); // 0x3bc PushVec
	SetSpeed(var_574_cvector); // 0x3bd Func
	Stop(); // 0x3bf Func
	StopAsync(); // 0x3c1 Func
	var_575_bool = 0; // 0x3c3 PushV
	func_1388(var_149_float, var_575_bool); // 0x3c4 NEW_2
	var_576_bool = var_575_bool == 0; // 0x3c6 Not
	if(var_576_bool == 0) goto Label_991; // 0x3c7 JumpB
	var_577_bool = 0; var_578_object = Obj(); // 0x3c8 PushV
	var_578_object = var_0_bool; // 0x3c9 MovT
	func_1874(var_577_bool, var_578_object); // 0x3ca NEW_2
	var_579_bool = var_577_bool == 0; // 0x3cc Not
	if(var_579_bool == 0) goto Label_975; // 0x3cd JumpB
	goto Label_1001; // 0x3ce Jump
	
Label_975:
	GetPFPosition(var_140_cvector); // 0x3cf TObjFunc
	GetPFPosition(var_141_cvector); // 0x3d1 Func
	var_145_cvector = var_140_cvector - var_141_cvector; // 0x3d3 Sub2
	var_146_float = var_145_cvector | var_145_cvector; // 0x3d4 Or2
	var_580_float = var_127_float * var_127_float; // 0x3d5 Mult
	var_581_bool = var_146_float < var_580_float; // 0x3d6 LT
	if(var_581_bool == 0) goto Label_991; // 0x3d7 JumpB
	var_582_bool = 0; var_583_float = 0; // 0x3d8 PushV
	var_583_float = var_127_float; // 0x3d9 Mov
	func_1092(var_149_float, var_582_bool, var_583_float); // 0x3da NEW_2
	var_584_bool = var_582_bool == 0; // 0x3dc Not
	if(var_584_bool == 0) goto Label_991; // 0x3dd JumpB
	goto Label_1001; // 0x3de Jump
	
Label_992:
	var_585_bool = 0; var_586_float = 0; // 0x3e0 PushV
	var_586_float = var_127_float; // 0x3e1 Mov
	func_1092(var_149_float, var_585_bool, var_586_float); // 0x3e2 NEW_2
	var_587_bool = var_585_bool == 0; // 0x3e4 Not
	if(var_587_bool == 0) goto Label_999; // 0x3e5 JumpB
	goto Label_1001; // 0x3e6 Jump
	
Label_999:
	var_143_bool = 1; // 0x3e7 MovB
	
Label_826:
	var_143_bool = 1; // 0x33a MovB
	
Label_803:
	var_139_float = var_127_float; // 0x323 Mov
}


func_1833(var_40_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x729 PushV
	IsDead(var_43_bool); // 0x72a ObjFunc
	var_40_bool = var_43_bool; // 0x72c Mov
	return 2; // 0x72d Return
}


func_1838(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x72e PushV
	var_35_bool = var_30_object == 0; // 0x72f NullEq
	if(var_35_bool == 0) goto Label_1843; // 0x730 JumpB
	var_29_bool = 0; // 0x731 MovB
	return 4; // 0x732 Return
	
Label_1843:
	var_36_bool = 0; // 0x733 PushV
	var_36_bool = 0; // 0x734 MovB
	var_37_string = "IsDead"; // 0x735 PushS
	var_38_int = 1; // 0x736 PushI
	var_39_bool = IsFuncExist(var_30_object, var_37_string, var_38_int); // 0x737 FuncExist
	if(var_39_bool == 0) goto Label_1855; // 0x738 JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x739 PushV
	var_41_object = var_30_object; // 0x73a Mov
	func_1833(var_41_object); // 0x73b NEW_2
	if(var_40_bool == 0) goto Label_1855; // 0x73d JumpB
	var_36_bool = 1; // 0x73e MovB
	
Label_1855:
	if(var_36_bool == 0) goto Label_1858; // 0x73f JumpB
	var_29_bool = 0; // 0x740 MovB
	return 4; // 0x741 Return
	
Label_1858:
	GetScene(var_33_object); // 0x742 Func
	var_44_bool = var_33_object == 0; // 0x744 NullEq
	if(var_44_bool == 0) goto Label_1864; // 0x745 JumpB
	var_29_bool = 0; // 0x746 MovB
	return 4; // 0x747 Return
	
Label_1864:
	GetScene(var_34_object); // 0x748 ObjFunc
	var_45_bool = var_33_object != var_34_object; // 0x74a Neq
	if(var_45_bool == 0) goto Label_1870; // 0x74b JumpB
	var_29_bool = 0; // 0x74c MovB
	return 4; // 0x74d Return
	
Label_1870:
	var_29_bool = 1; // 0x74e MovB
	return 4; // 0x74f Return
}


func_1327(var_366_bool)
{
	var_367_bool = 0; // 0x52f PushV
	var_367_bool = 0; // 0x530 MovB
	var_368_bool = 0; // 0x531 PushV
	func_1299(var_367_bool, var_368_bool); // 0x532 NEW_2
	if(var_368_bool == 0) goto Label_1338; // 0x534 JumpB
	var_385_bool = 0; // 0x535 PushV
	func_1343(var_366_bool, var_367_bool, var_385_bool); // 0x536 NEW_2
	if(var_385_bool == 0) goto Label_1338; // 0x538 JumpB
	var_367_bool = 1; // 0x539 MovB
	
Label_1338:
	if(var_367_bool == 0) goto Label_1341; // 0x53a JumpB
	var_366_bool = 1; // 0x53b MovB
	return 0; // 0x53c Return
	
Label_1341:
	var_366_bool = 0; // 0x53d MovB
	return 0; // 0x53e Return
}


func_1343(var_0_bool, var_4_object, var_385_bool)
{
	var_386_object = Obj(); var_387_bool = 0; var_388_float = 0; var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_object = Obj(); var_392_bool = 0; var_393_float = 0; var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); // 0x53f PushV
	GetScene(var_391_object); // 0x540 Func
	var_392_bool = 0; // 0x542 MovB
	
Label_1347:
	var_396_cvector = CVector(0,0,0); var_397_object = Obj(); // 0x543 PushV
	var_397_object = var_0_bool; // 0x544 MovT
	func_1728(var_397_object); // 0x545 NEW_2
	var_402_int = -var_396_cvector; // 0x547 Neg
	FindDirLength(var_393_float, var_402_int, var_393_float); // 0x548 Func
	var_403_bool = var_393_float < var_4_object; // 0x54a LT
	if(var_403_bool == 0) goto Label_1357; // 0x54b JumpB
	goto Label_1385; // 0x54c Jump
	
Label_1385:
	var_385_bool = var_392_bool; // 0x569 Mov
	return 10; // 0x56a Return
	
Label_1357:
	Face(var_0_bool); // 0x54d Func
	var_404_string = "all"; // 0x54f PushS
	var_405_string = "bjump"; // 0x550 PushS
	PlayAnimation(var_404_string, var_405_string); // 0x551 Func
	GetPFPosition(var_394_cvector); // 0x553 TObjFunc
	GetPFPosition(var_395_cvector); // 0x555 Func
	WaitForAnimEnd(); // 0x557 Func
	func_1431(var_395_cvector); // 0x55a NEW_2
	StopAsync(); // 0x55c Func
	var_406_cvector = CVector(0.0, 0.0, 0.0); // 0x55e PushVec
	SetSpeed(var_406_cvector); // 0x55f Func
	var_392_bool = 1; // 0x561 MovB
	var_407_bool = 0; // 0x562 PushV
	func_1299(var_395_cvector, var_407_bool); // 0x563 NEW_2
	var_408_bool = var_407_bool == 0; // 0x565 Not
	if(var_408_bool == 0) goto Label_1384; // 0x566 JumpB
	goto Label_1385; // 0x567 Jump
	
Label_1384:
	goto Label_1347; // 0x568 Jump
}


func_2378(var_41_int, var_42_string)
{
	var_43_int = 0; var_44_int = 0; // 0x94a PushV
	GetInvItemByName(var_44_int, var_42_string); // 0x94b Func
	var_41_int = var_44_int; // 0x94d Mov
	return 2; // 0x94e Return
}


func_2383(var_13_object)
{
	var_14_object = Obj(); // 0x950 PushV
	var_14_object = var_13_object; // 0x951 Mov
	TaskCall(0); // 0x952 TaskCall
	func_0(var_14_object); // 0x953 NEW_2
	TaskReturn(); // 0x954 TaskReturn
	return 0; // 0x956 Return
}


func_1874(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0; // 0x752 PushV
	var_29_bool = 0; var_30_object = Obj(); // 0x753 PushV
	var_30_object = var_26_object; // 0x754 Mov
	func_1838(var_29_bool, var_30_object); // 0x755 NEW_2
	var_46_bool = var_29_bool == 0; // 0x757 Not
	if(var_46_bool == 0) goto Label_1883; // 0x758 JumpB
	var_25_bool = 0; // 0x759 MovB
	return 2; // 0x75a Return
	
Label_1883:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0x75b PushV
	var_48_object = var_26_object; // 0x75c Mov
	var_49_string = "noaccess"; // 0x75d MovS
	func_1748(var_47_bool, var_48_object, var_49_string); // 0x75e NEW_2
	var_56_bool = var_47_bool == 0; // 0x760 Not
	if(var_56_bool == 0) goto Label_1892; // 0x761 JumpB
	var_25_bool = 1; // 0x762 MovB
	return 2; // 0x763 Return
	
Label_1892:
	var_57_string = "noaccess"; // 0x764 PushS
	GetProperty(var_57_string, var_28_int); // 0x765 ObjFunc
	var_58_int = 0; // 0x767 PushI
	var_25_bool = var_28_int == var_58_int; // 0x768 Eq2
	return 2; // 0x769 Return
}


func_1898(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x76a PushV
	var_44_bool = var_29_object == 0; // 0x76b NullEq
	if(var_44_bool == 0) goto Label_1902; // 0x76c JumpB
	return 14; // 0x76d Return
	
Label_1902:
	IsDead(var_37_bool); // 0x76e Func
	var_45_bool = var_37_bool; // 0x770 Push
	if(var_45_bool == 0) goto Label_1907; // 0x771 JumpB
	return 14; // 0x772 Return
	
Label_1907:
	GetSecondaryAnimationType(var_38_int); // 0x773 Func
	var_46_int = 0; // 0x775 PushI
	var_47_bool = var_38_int < var_46_int; // 0x776 LT
	if(var_47_bool == 0) goto Label_1913; // 0x777 JumpB
	return 14; // 0x778 Return
	
Label_1913:
	GetPosition(var_39_cvector); // 0x779 ObjFunc
	GetPosition(var_40_cvector); // 0x77b Func
	GetDirection(var_41_cvector); // 0x77d Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x77f Sub2
	var_48_float = GetByIndex(var_42_cvector, 0); // 0x780 PushE
	var_49_float = GetByIndex(var_41_cvector, 0); // 0x781 PushE
	var_50_float = var_48_float * var_49_float; // 0x782 Mult
	var_51_float = GetByIndex(var_42_cvector, 2); // 0x783 PushE
	var_52_float = GetByIndex(var_41_cvector, 2); // 0x784 PushE
	var_53_float = var_51_float * var_52_float; // 0x785 Mult
	var_54_int = var_50_float + var_53_float; // 0x786 Add
	var_55_int = 0; // 0x787 PushI
	var_56_bool = var_54_int >= var_55_int; // 0x788 GE
	if(var_56_bool == 0) goto Label_1932; // 0x789 JumpB
	var_43_string = "fhit"; // 0x78a MovS
	goto Label_1933; // 0x78b Jump
	
Label_1933:
	var_57_string = "hit_react"; // 0x78d PushS
	var_58_string = "1"; // 0x78e PushS
	var_59_int = var_43_string + var_58_string; // 0x78f Add
	var_60_string = "2"; // 0x790 PushS
	var_61_int = var_43_string + var_60_string; // 0x791 Add
	var_62_int = -10; // 0x792 PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x793 Func
	return 14; // 0x795 Return
	
Label_1932:
	var_43_string = "bhit"; // 0x78c MovS
}


func_1388(var_0_bool, var_316_bool)
{
	var_317_bool = 0; var_318_bool = 0; // 0x56c PushV
	var_319_string = "IsAttacking"; // 0x56d PushS
	var_320_int = 1; // 0x56e PushI
	var_321_bool = IsFuncExist(var_0_bool, var_319_string, var_320_int); // 0x56f FuncExist
	if(var_321_bool == 0) goto Label_1397; // 0x570 JumpB
	IsAttacking(var_318_bool); // 0x571 TObjFunc
	var_316_bool = var_318_bool; // 0x573 Mov
	return 2; // 0x574 Return
	
Label_1397:
	var_316_bool = 0; // 0x575 MovB
	return 2; // 0x576 Return
}


func_367(var_2_bool)
{
	var_13_int = 110; // 0x16f PushI
	KillTimer(var_13_int); // 0x170 Func
	var_2_bool = 0; // 0x172 TMovB
	func_503(var_11_object, var_12_bool); // 0x174 NEW_2
	return 0; // 0x176 Return
}


func_375(var_2_bool)
{
	var_65_int = 110; // 0x177 PushI
	KillTimer(var_65_int); // 0x178 Func
	var_2_bool = 0; // 0x17a TMovB
	func_510(var_16_bool, var_17_int); // 0x17c NEW_2
	return 0; // 0x17e Return
}


func_1399(var_2_bool, var_5_bool)
{
	var_433_float = 0; var_434_int = 0; var_435_float = 0; var_436_int = 0; // 0x577 PushV
	var_437_bool = var_2_bool == 0; // 0x578 Not
	if(var_437_bool == 0) goto Label_1403; // 0x579 JumpB
	return 4; // 0x57a Return
	
Label_1403:
	var_438_bool = var_5_bool; // 0x57b PushT
	if(var_438_bool == 0) goto Label_1411; // 0x57c JumpB
	var_439_int = -1; // 0x57d PushI
	var_5_bool = var_5_bool + var_439_int; // 0x57e Add2
	var_440_int = 0; // 0x57f PushI
	var_441_bool = var_5_bool > var_440_int; // 0x580 GT
	if(var_441_bool == 0) goto Label_1411; // 0x581 JumpB
	return 4; // 0x582 Return
	
Label_1411:
	rand(var_435_float); // 0x583 Func
	var_442_float = 0; // 0x585 PushV
	func_1449(var_442_float); // 0x586 NEW_2
	var_443_bool = var_435_float < var_442_float; // 0x588 LT
	if(var_443_bool == 0) goto Label_1430; // 0x589 JumpB
	irand(var_436_int, var_435_float); // 0x58a Func
	var_444_int = 1; // 0x58c PushI
	var_436_int = var_436_int + var_444_int; // 0x58d Add2
	var_445_string = "attack"; // 0x58e PushS
	var_446_int = var_445_string + var_436_int; // 0x58f Add
	Speak(var_446_int); // 0x590 Func
	var_447_int = 0; // 0x592 PushV
	func_1447(var_447_int); // 0x593 NEW_2
	var_5_bool = var_447_int; // 0x594 TMov
	
Label_1430:
	return 4; // 0x596 Return
}


func_2428(var_16_bool, var_17_object, var_18_string)
{
	var_19_string = "unholster"; // 0x97d PushS
	var_20_bool = var_18_string == var_19_string; // 0x97e Eq
	if(var_20_bool == 0) goto Label_2439; // 0x97f JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x980 PushV
	var_22_object = var_17_object; // 0x981 Mov
	func_2747(var_22_object); // 0x982 NEW_2
	var_16_bool = var_21_bool; // 0x983 Mov
	return 0; // 0x985 Return
	
Label_2439:
	var_23_string = "player_shot"; // 0x987 PushS
	var_24_bool = var_18_string == var_23_string; // 0x988 Eq
	if(var_24_bool == 0) goto Label_2449; // 0x989 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x98a PushV
	var_26_object = var_17_object; // 0x98b Mov
	func_2752(var_26_object); // 0x98c NEW_2
	var_16_bool = var_25_bool; // 0x98d Mov
	return 0; // 0x98f Return
	
Label_2449:
	var_27_string = "battle"; // 0x991 PushS
	var_28_bool = var_18_string == var_27_string; // 0x992 Eq
	if(var_28_bool == 0) goto Label_2458; // 0x993 JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0x994 PushV
	var_30_object = var_17_object; // 0x995 Mov
	func_2757(var_30_object); // 0x996 NEW_2
	var_16_bool = var_29_bool; // 0x997 Mov
	return 0; // 0x999 Return
	
Label_2458:
	var_16_bool = 0; // 0x99a MovB
	return 0; // 0x99b Return
}


func_392(var_2_bool, var_13_object)
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; // 0x188 PushV
	var_18_bool = 0; var_19_object = Obj(); // 0x189 PushV
	var_19_object = var_13_object; // 0x18a Mov
	func_1874(var_18_bool, var_19_object); // 0x18b NEW_2
	var_52_bool = var_18_bool == 0; // 0x18d Not
	if(var_52_bool == 0) goto Label_400; // 0x18e JumpB
	return 4; // 0x18f Return
	
Label_400:
	var_53_bool = var_2_bool; // 0x190 PushT
	if(var_53_bool == 0) goto Label_403; // 0x191 JumpB
	return 4; // 0x192 Return
	
Label_403:
	IsPlayerActor(var_13_object, var_16_bool); // 0x193 Func
	var_54_bool = var_16_bool == 0; // 0x195 Not
	if(var_54_bool == 0) goto Label_408; // 0x196 JumpB
	return 4; // 0x197 Return
	
Label_408:
	var_55_int = 0; var_56_object = Obj(); // 0x198 PushV
	var_56_object = var_13_object; // 0x199 Mov
	func_2580(var_55_int, var_56_object); // 0x19a NEW_2
	var_17_int = var_55_int; // 0x19b Mov
	var_61_int = 0; // 0x19d PushI
	var_62_bool = var_17_int > var_61_int; // 0x19e GT
	if(var_62_bool == 0) goto Label_431; // 0x19f JumpB
	var_63_int = 1; // 0x1a0 PushI
	var_64_bool = var_17_int > var_63_int; // 0x1a1 GT
	if(var_64_bool == 0) goto Label_422; // 0x1a2 JumpB
	func_375(var_17_int); // 0x1a4 NEW_2
	
Label_422:
	var_66_object = Obj(); // 0x1a6 PushV
	var_66_object = var_13_object; // 0x1a7 Mov
	func_2590(var_66_object); // 0x1a8 NEW_2
	var_2_bool = 1; // 0x1aa TMovB
	var_538_int = 110; // 0x1ab PushI
	var_539_float = 10.0; // 0x1ac PushF
	SetTimer(var_538_int, var_539_float); // 0x1ad Func
	
Label_431:
	return 4; // 0x1af Return
}


func_1942(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); // 0x796 PushV
	var_37_bool = 0; // 0x797 PushV
	var_37_bool = 0; // 0x798 MovB
	var_38_bool = 0; // 0x799 PushV
	var_38_bool = 0; // 0x79a MovB
	var_39_object = var_16_object; // 0x79b Push
	if(var_39_object == 0) goto Label_1953; // 0x79c JumpB
	var_40_int = 4; // 0x79d PushI
	var_41_bool = var_17_int != var_40_int; // 0x79e Neq
	if(var_41_bool == 0) goto Label_1953; // 0x79f JumpB
	var_38_bool = 1; // 0x7a0 MovB
	
Label_1953:
	if(var_38_bool == 0) goto Label_1958; // 0x7a1 JumpB
	var_42_int = 5; // 0x7a2 PushI
	var_43_bool = var_17_int != var_42_int; // 0x7a3 Neq
	if(var_43_bool == 0) goto Label_1958; // 0x7a4 JumpB
	var_37_bool = 1; // 0x7a5 MovB
	
Label_1958:
	if(var_37_bool == 0) goto Label_2005; // 0x7a6 JumpB
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x7a7 PushV
	var_46_cvector = CVector(0,0,0); var_47_object = Obj(); // 0x7a8 PushV
	var_47_object = var_16_object; // 0x7a9 Mov
	func_1728(var_47_object); // 0x7aa NEW_2
	var_45_cvector = var_46_cvector; // 0x7ab Mov
	func_2098(var_44_cvector, var_45_cvector); // 0x7ad NEW_2
	var_28_cvector = var_44_cvector; // 0x7ae Mov
	CreateVectorVector(var_29_object); // 0x7b0 Func
	var_30_int = 1; // 0x7b2 MovI
	
Label_1971:
	var_57_string = "hit"; // 0x7b3 PushS
	var_58_int = var_57_string + var_30_int; // 0x7b4 Add
	GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x7b5 Func
	var_59_bool = var_31_bool == 0; // 0x7b7 Not
	if(var_59_bool == 0) goto Label_1978; // 0x7b8 JumpB
	goto Label_1987; // 0x7b9 Jump
	
Label_1987:
	size(var_34_int); // 0x7c3 ObjFunc
	var_60_int = var_34_int; // 0x7c5 Push
	if(var_60_int == 0) goto Label_2004; // 0x7c6 JumpB
	irand(var_35_int, var_34_int); // 0x7c7 Func
	get(var_36_cvector, var_35_int); // 0x7c9 ObjFunc
	var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x7cb PushV
	var_61_object = var_16_object; // 0x7cc Mov
	var_62_int = var_17_int; // 0x7cd Mov
	var_63_float = var_18_float; // 0x7ce Mov
	var_64_cvector = var_36_cvector; // 0x7cf Mov
	var_65_cvector = -var_28_cvector; // 0x7d0 Neg2
	func_2010(var_63_float, var_64_cvector, var_65_cvector); // 0x7d1 NEW_2
	return 18; // 0x7d3 Return
	
Label_2004:
	var_29_object = 0; // 0x7d4 SetNull
	
Label_2005:
	var_106_object = Obj(); // 0x7d5 PushV
	var_106_object = var_16_object; // 0x7d6 Mov
	func_1898(var_106_object); // 0x7d7 NEW_2
	return 18; // 0x7d9 Return
	
Label_1978:
	var_107_int = var_33_cvector | var_28_cvector; // 0x7ba Or
	var_108_float = 0.70711; // 0x7bb PushF
	var_109_bool = var_107_int >= var_108_float; // 0x7bc GE
	if(var_109_bool == 0) goto Label_1984; // 0x7bd JumpB
	add(var_32_cvector); // 0x7be ObjFunc
	
Label_1984:
	var_110_int = 1; // 0x7c0 PushI
	var_30_int = var_30_int + var_110_int; // 0x7c1 Add2
	goto Label_1971; // 0x7c2 Jump
}


func_1431(var_0_bool)
{
	var_189_object = Obj(); // 0x597 PushV
	var_189_object = var_0_bool; // 0x598 MovT
	func_2152(var_189_object); // 0x599 NEW_2
	return 0; // 0x59b Return
}


func_2460(var_31_object, var_32_string)
{
	var_33_string = "unholster"; // 0x99d PushS
	var_34_bool = var_32_string == var_33_string; // 0x99e Eq
	if(var_34_bool == 0) goto Label_2469; // 0x99f JumpB
	var_35_object = Obj(); // 0x9a0 PushV
	var_35_object = var_31_object; // 0x9a1 Mov
	func_2750(); // 0x9a2 NEW_2
	goto Label_2484; // 0x9a4 Jump
	
Label_2484:
	return 0; // 0x9b4 Return
	
Label_2469:
	var_36_string = "player_shot"; // 0x9a5 PushS
	var_37_bool = var_32_string == var_36_string; // 0x9a6 Eq
	if(var_37_bool == 0) goto Label_2477; // 0x9a7 JumpB
	var_38_object = Obj(); // 0x9a8 PushV
	var_38_object = var_31_object; // 0x9a9 Mov
	func_2755(); // 0x9aa NEW_2
	goto Label_2484; // 0x9ac Jump
	
Label_2477:
	var_39_string = "battle"; // 0x9ad PushS
	var_40_bool = var_32_string == var_39_string; // 0x9ae Eq
	if(var_40_bool == 0) goto Label_2484; // 0x9af JumpB
	var_41_object = Obj(); // 0x9b0 PushV
	var_41_object = var_31_object; // 0x9b1 Mov
	func_2760(); // 0x9b2 NEW_2
}


func_1436(var_530_int)
{
	var_530_int = 0; // 0x59c MovI
	return 0; // 0x59d Return
}


func_1438()
{
	var_322_string = ""; // 0x59e PushV
	var_322_string = "attack_stay"; // 0x59f MovS
	func_2051(var_322_string); // 0x5a0 NEW_2
	return 0; // 0x5a2 Return
}


func_1443()
{
	return 0; // 0x5a4 Return
}


func_1445(var_555_bool)
{
	var_555_bool = 1; // 0x5a5 MovB
	return 0; // 0x5a6 Return
}


func_1447(var_447_int)
{
	var_447_int = 1; // 0x5a7 MovI
	return 0; // 0x5a8 Return
}


func_1449(var_442_float)
{
	var_442_float = 0.5; // 0x5a9 MovF
	return 0; // 0x5aa Return
}


func_432(var_0_bool, var_1_bool)
{
	var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_bool = 0; var_136_object = Obj(); var_137_bool = 0; var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_bool = 0; var_142_object = Obj(); var_143_bool = 0; // 0x1b0 PushV
	var_0_bool = 0; // 0x1b1 TMovB
	var_1_bool = 0; // 0x1b2 TMovB
	var_144_float = 0.5; // 0x1b3 PushF
	rand(var_138_float, var_144_float); // 0x1b4 Func
	Sleep(var_138_float); // 0x1b6 Func
	
Label_440:
	var_145_bool = var_0_bool == 0; // 0x1b8 Not
	if(var_145_bool == 0) goto Label_490; // 0x1b9 JumpB
	var_146_bool = var_1_bool == 0; // 0x1ba Not
	if(var_146_bool == 0) goto Label_459; // 0x1bb JumpB
	
Label_444:
	GetPosition(var_140_cvector); // 0x1bc Func
	var_147_float = 0; // 0x1be PushV
	func_491(var_147_float); // 0x1bf NEW_2
	GetRandomPFPointInCircle(var_139_cvector, var_140_cvector, var_147_float, var_141_bool); // 0x1c1 Func
	var_150_bool = var_141_bool; // 0x1c3 Push
	if(var_150_bool == 0) goto Label_454; // 0x1c4 JumpB
	goto Label_458; // 0x1c5 Jump
	
Label_458:
	goto Label_460; // 0x1ca Jump
	
Label_460:
	var_151_object = Obj(); var_152_cvector = CVector(0,0,0); // 0x1cc PushV
	var_152_cvector = var_139_cvector; // 0x1cd Mov
	func_519(var_151_object, var_152_cvector); // 0x1ce NEW_2
	var_142_object = var_151_object; // 0x1cf Mov
	var_155_bool = var_142_object != 0; // 0x1d1 NullNeq
	if(var_155_bool == 0) goto Label_485; // 0x1d2 JumpB
	RotatePath(var_142_object, var_143_bool); // 0x1d3 Func
	var_156_bool = var_143_bool; // 0x1d5 Push
	if(var_156_bool == 0) goto Label_484; // 0x1d6 JumpB
	var_157_bool = 0; // 0x1d7 PushV
	func_517(var_157_bool); // 0x1d8 NEW_2
	FollowPath(var_142_object, var_157_bool, var_143_bool); // 0x1da Func
	var_142_object = 0; // 0x1dc SetNull
	var_158_bool = var_143_bool; // 0x1dd Push
	if(var_158_bool == 0) goto Label_484; // 0x1de JumpB
	TaskCall(2); // 0x1e0 TaskCall
	func_689(); // 0x1e1 NEW_2
	TaskReturn(); // 0x1e2 TaskReturn
	
Label_484:
	goto Label_488; // 0x1e4 Jump
	
Label_488:
	var_142_object = 0; // 0x1e8 SetNull
	goto Label_440; // 0x1e9 Jump
	
Label_485:
	var_210_int = 1; // 0x1e5 PushI
	Sleep(var_210_int); // 0x1e6 Func
	
Label_454:
	var_211_int = 1; // 0x1c6 PushI
	Sleep(var_211_int); // 0x1c7 Func
	goto Label_444; // 0x1c9 Jump
	
Label_459:
	var_1_bool = 0; // 0x1cb TMovB
	
Label_490:
	return 12; // 0x1ea Return
}


func_1458(var_2_bool, var_196_bool, var_197_object, var_198_float, var_199_float, var_200_bool, var_201_bool)
{
	var_205_bool = 0; var_206_bool = 0; var_207_bool = 0; var_208_bool = 0; // 0x5b2 PushV
	var_209_object = Obj(); // 0x5b3 PushV
	var_209_object = var_197_object; // 0x5b4 Mov
	func_2152(var_209_object); // 0x5b5 NEW_2
	var_210_int = 1; // 0x5b7 PushI
	var_211_int = 5; // 0x5b8 PushI
	SetTimer(var_210_int, var_211_int); // 0x5b9 Func
	CanSee(var_207_bool, var_197_object); // 0x5bb Func
	var_212_bool = var_207_bool; // 0x5bd Push
	if(var_212_bool == 0) goto Label_1477; // 0x5be JumpB
	var_2_bool = 1; // 0x5bf TMovB
	var_213_object = Obj(); // 0x5c0 PushV
	var_213_object = var_197_object; // 0x5c1 Mov
	func_2040(var_213_object); // 0x5c2 NEW_2
	goto Label_1478; // 0x5c4 Jump
	
Label_1478:
	var_220_bool = 0; var_221_object = Obj(); // 0x5c6 PushV
	var_221_object = var_197_object; // 0x5c7 Mov
	func_1743(var_220_bool, var_221_object); // 0x5c8 NEW_2
	if(var_220_bool == 0) goto Label_1488; // 0x5ca JumpB
	var_224_object = Obj(); // 0x5cb PushV
	func_2092(var_224_object); // 0x5cc NEW_2
	SendPlayerEnemy(var_197_object, var_224_object); // 0x5ce Func
	
Label_1488:
	var_225_bool = 0; var_226_object = Obj(); var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_bool = 0; // 0x5d0 PushV
	var_226_object = var_197_object; // 0x5d1 Mov
	var_227_float = var_198_float; // 0x5d2 Mov
	var_228_float = var_199_float; // 0x5d3 Mov
	var_229_bool = var_200_bool; // 0x5d4 Mov
	var_230_bool = var_201_bool; // 0x5d5 Mov
	func_1563(var_207_bool, var_208_bool, var_225_bool, var_226_object, var_227_float, var_228_float, var_229_bool, var_230_bool); // 0x5d6 NEW_2
	var_208_bool = var_225_bool; // 0x5d7 Mov
	var_276_bool = var_2_bool; // 0x5d9 PushT
	if(var_276_bool == 0) goto Label_1502; // 0x5da JumpB
	var_277_string = "head"; // 0x5db PushS
	UnlookAsync(var_277_string); // 0x5dc Func
	
Label_1502:
	var_278_int = 1; // 0x5de PushI
	KillTimer(var_278_int); // 0x5df Func
	var_196_bool = var_208_bool; // 0x5e1 Mov
	return 4; // 0x5e2 Return
	
Label_1477:
	var_2_bool = 0; // 0x5c5 TMovB
}


func_2485(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x9b5 PushV
	var_17_bool = 0; // 0x9b6 PushV
	var_17_bool = 0; // 0x9b7 MovB
	var_18_bool = 0; var_19_object = Obj(); // 0x9b8 PushV
	var_19_object = var_14_object; // 0x9b9 Mov
	func_2747(var_19_object); // 0x9ba NEW_2
	if(var_18_bool == 0) goto Label_2499; // 0x9bc JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x9bd PushV
	var_21_object = var_14_object; // 0x9be Mov
	func_1743(var_20_bool, var_21_object); // 0x9bf NEW_2
	if(var_20_bool == 0) goto Label_2499; // 0x9c1 JumpB
	var_17_bool = 1; // 0x9c2 MovB
	
Label_2499:
	if(var_17_bool == 0) goto Label_2506; // 0x9c3 JumpB
	IsWeaponHolstered(var_16_bool); // 0x9c4 ObjFunc
	var_24_bool = var_16_bool == 0; // 0x9c6 Not
	if(var_24_bool == 0) goto Label_2506; // 0x9c7 JumpB
	var_13_bool = 1; // 0x9c8 MovB
	return 2; // 0x9c9 Return
	
Label_2506:
	var_13_bool = 0; // 0x9ca MovB
	return 2; // 0x9cb Return
}


func_2508(var_25_object)
{
	var_26_object = Obj(); // 0x9cd PushV
	var_26_object = var_25_object; // 0x9ce Mov
	func_2750(); // 0x9cf NEW_2
	return 0; // 0x9d1 Return
}


func_2514(var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x9d3 PushV
	var_17_object = var_15_object; // 0x9d4 Mov
	func_1743(var_16_bool, var_17_object); // 0x9d5 NEW_2
	if(var_16_bool == 0) goto Label_2526; // 0x9d7 JumpB
	var_20_object = Obj(); // 0x9d8 PushV
	func_2092(var_20_object); // 0x9d9 NEW_2
	var_23_float = -0.05; // 0x9db PushF
	ReportReputationChange(var_15_object, var_20_object, var_23_float); // 0x9dc Func
	
Label_2526:
	return 0; // 0x9de Return
}


func_2010(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x7da PushV
	GetScene(var_25_object); // 0x7db Func
	var_27_string = "scripted"; // 0x7dd PushS
	var_28_string = "blood_dir.xml"; // 0x7de PushS
	AddActorByType(var_26_object, var_27_string, var_25_object, var_21_cvector, var_22_cvector, var_28_string); // 0x7df Func
	var_29_object = Obj(); // 0x7e1 PushV
	var_29_object = var_18_object; // 0x7e2 Mov
	func_1898(var_29_object); // 0x7e3 NEW_2
	return 4; // 0x7e5 Return
}


func_2527(var_13_bool, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x9df PushV
	var_17_string = "heal"; // 0x9e0 PushS
	var_18_bool = var_14_string == var_17_string; // 0x9e1 Eq
	if(var_18_bool == 0) goto Label_2541; // 0x9e2 JumpB
	var_19_string = "player"; // 0x9e3 PushS
	FindActor(var_16_object, var_19_string); // 0x9e4 Func
	var_20_bool = 0; var_21_object = Obj(); // 0x9e6 PushV
	var_21_object = var_16_object; // 0x9e7 Mov
	func_2762(var_21_object); // 0x9e8 NEW_2
	var_13_bool = var_20_bool; // 0x9e9 Mov
	return 2; // 0x9eb Return
	
Label_2541:
	var_13_bool = 0; // 0x9ed MovB
	return 2; // 0x9ee Return
}


func_2024()
{
	var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); // 0x7e8 PushV
	GetPosition(var_303_cvector); // 0x7e9 ObjFunc
	GetPosition(var_304_cvector); // 0x7eb Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x7ed Sub2
	var_306_float = GetByIndex(var_305_cvector, 0); // 0x7ee PushE
	var_307_float = GetByIndex(var_305_cvector, 2); // 0x7ef PushE
	RotateAsync(var_306_float, var_307_float); // 0x7f0 Func
	return 6; // 0x7f2 Return
}


func_491(var_147_float)
{
	var_148_float = 0; var_149_float = 0; // 0x1eb PushV
	GetCameraFarDistance(var_149_float); // 0x1ec Func
	var_147_float = var_149_float; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_2543(var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x9ef PushV
	var_25_string = "heal"; // 0x9f0 PushS
	var_26_bool = var_22_string == var_25_string; // 0x9f1 Eq
	if(var_26_bool == 0) goto Label_2555; // 0x9f2 JumpB
	var_27_string = "player"; // 0x9f3 PushS
	FindActor(var_24_object, var_27_string); // 0x9f4 Func
	var_28_object = Obj(); // 0x9f6 PushV
	var_28_object = var_24_object; // 0x9f7 Mov
	func_2765(); // 0x9f8 NEW_2
	var_24_object = 0; // 0x9fa SetNull
	
Label_2555:
	return 2; // 0x9fb Return
}


func_1521(var_2_bool)
{
	var_13_int = 1; // 0x5f1 PushI
	KillTimer(var_13_int); // 0x5f2 Func
	var_14_bool = var_2_bool; // 0x5f4 PushT
	if(var_14_bool == 0) goto Label_1530; // 0x5f5 JumpB
	var_2_bool = 0; // 0x5f6 TMovB
	var_15_string = "head"; // 0x5f7 PushS
	UnlookAsync(var_15_string); // 0x5f8 Func
	
Label_1530:
	func_1687(var_12_object); // 0x5fb NEW_2
	return 0; // 0x5fd Return
}


func_2035(var_128_bool)
{
	var_129_bool = 0; var_130_bool = 0; // 0x7f3 PushV
	IsLoaded(var_130_bool); // 0x7f4 Func
	var_128_bool = var_130_bool; // 0x7f6 Mov
	return 2; // 0x7f7 Return
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1f7 TMovB
	var_1_bool = 0; // 0x1f8 TMovB
	Stop(); // 0x1f9 Func
	StopGroup0(); // 0x1fb Func
	return 0; // 0x1fd Return
}


func_2040(var_16_object)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); // 0x7f8 PushV
	GetEyesHeight(var_19_float); // 0x7f9 ObjFunc
	var_20_cvector = CVector(0.0, 0.0, 0.0); // 0x7fb MovV
	var_21_float = GetByIndex(var_20_cvector, 1); // 0x7fc PushE
	var_21_float = var_19_float; // 0x7fd Mov
	SetByIndex(var_20_cvector, 1) = var_21_float; // 0x7fe PopE
	var_22_string = "head"; // 0x7ff PushS
	LookAsync(var_16_object, var_22_string, var_20_cvector); // 0x800 Func
	return 4; // 0x802 Return
}


func_1018(var_1_bool, var_2_bool, var_4_object)
{
	var_150_bool = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_bool = 0; var_154_bool = 0; var_155_cvector = CVector(0,0,0); // 0x3fa PushV
	var_1_bool = 0; // 0x3fb TMovI
	
Label_1020:
	var_156_string = "all"; // 0x3fc PushS
	var_157_string = "attack_begin"; // 0x3fd PushS
	var_158_int = 1; // 0x3fe PushI
	var_159_int = var_1_bool + var_158_int; // 0x3ff Add
	var_160_int = var_157_string + var_159_int; // 0x400 Add
	HasAnimation(var_153_bool, var_156_string, var_160_int); // 0x401 Func
	var_161_bool = var_153_bool == 0; // 0x403 Not
	if(var_161_bool == 0) goto Label_1030; // 0x404 JumpB
	goto Label_1033; // 0x405 Jump
	
Label_1033:
	var_2_bool = 0; // 0x409 TMovI
	
Label_1034:
	var_162_string = "attack"; // 0x40a PushS
	var_163_int = 1; // 0x40b PushI
	var_164_int = var_2_bool + var_163_int; // 0x40c Add
	var_165_int = var_162_string + var_164_int; // 0x40d Add
	IsExisting3DSound(var_154_bool, var_165_int); // 0x40e Func
	var_166_bool = var_154_bool == 0; // 0x410 Not
	if(var_166_bool == 0) goto Label_1043; // 0x411 JumpB
	goto Label_1046; // 0x412 Jump
	
Label_1046:
	var_167_string = "all"; // 0x416 PushS
	var_168_string = "bjump"; // 0x417 PushS
	GetAnimationOffset(var_155_cvector, var_167_string, var_168_string); // 0x418 Func
	var_169_float = GetByIndex(var_155_cvector, 2); // 0x41a PushE
	var_4_object = -var_169_float; // 0x41b Neg2
	return 6; // 0x41c Return
	
Label_1043:
	var_170_int = 1; // 0x413 PushI
	var_2_bool = var_2_bool + var_170_int; // 0x414 Add2
	goto Label_1034; // 0x415 Jump
	
Label_1030:
	var_171_int = 1; // 0x406 PushI
	var_1_bool = var_1_bool + var_171_int; // 0x407 Add2
	goto Label_1020; // 0x408 Jump
}


func_2556(var_181_string, var_182_int)
{
	var_183_string = ""; var_184_string = ""; // 0x9fc PushV
	var_184_string = "idle"; // 0x9fd MovS
	var_185_int = var_182_int; // 0x9fe Push
	if(var_185_int == 0) goto Label_2561; // 0x9ff JumpB
	var_184_string = var_184_string + var_182_int; // 0xa00 Add2
	
Label_2561:
	var_181_string = var_184_string; // 0xa01 Mov
	return 2; // 0xa02 Return
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1fe TMovB
	var_1_bool = 1; // 0x1ff TMovB
	Stop(); // 0x200 Func
	StopGroup0(); // 0x202 Func
	return 0; // 0x204 Return
}


