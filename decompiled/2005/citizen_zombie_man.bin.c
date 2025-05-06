task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0xf PushV
	var_17_int = 0; var_18_object = Obj(); // 0x10 PushV
	var_18_object = var_14_bool; // 0x11 Mov
	func_2699(var_18_object); // 0x12 NEW_2
	var_16_int = var_17_int; // 0x13 Mov
	var_19_int = 0; // 0x15 PushI
	var_20_bool = var_16_int > var_19_int; // 0x16 GT
	if(var_20_bool == 0) goto Label_28; // 0x17 JumpB
	var_21_object = Obj(); // 0x18 PushV
	var_21_object = var_14_bool; // 0x19 Mov
	func_2702(var_21_object); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_2708(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool)
{
	return 0; // 0x97 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	return 0; // 0x99 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0; // 0x9b Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0xb4 PushV
	var_17_int = 0; var_18_object = Obj(); // 0xb5 PushV
	var_18_object = var_14_bool; // 0xb6 Mov
	func_2699(var_18_object); // 0xb7 NEW_2
	var_16_int = var_17_int; // 0xb8 Mov
	var_19_int = 0; // 0xba PushI
	var_20_bool = var_16_int > var_19_int; // 0xbb GT
	if(var_20_bool == 0) goto Label_199; // 0xbc JumpB
	var_21_int = 1; // 0xbd PushI
	var_22_bool = var_16_int > var_21_int; // 0xbe GT
	if(var_22_bool == 0) goto Label_195; // 0xbf JumpB
	func_367(var_16_int); // 0xc1 NEW_2
	
Label_195:
	var_24_object = Obj(); // 0xc3 PushV
	var_24_object = var_14_bool; // 0xc4 Mov
	func_2702(var_24_object); // 0xc5 NEW_2
	
Label_199:
	return 2; // 0xc7 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0xc8 PushV
	var_17_object = Obj(); // 0xc9 PushV
	var_17_object = var_14_bool; // 0xca Mov
	func_2594(var_17_object); // 0xcb NEW_2
	var_26_int = 0; var_27_object = Obj(); // 0xcd PushV
	var_27_object = var_14_bool; // 0xce Mov
	func_2803(var_26_int, var_27_object); // 0xcf NEW_2
	var_16_int = var_26_int; // 0xd0 Mov
	var_62_int = 0; // 0xd2 PushI
	var_63_bool = var_16_int > var_62_int; // 0xd3 GT
	if(var_63_bool == 0) goto Label_223; // 0xd4 JumpB
	var_64_int = 1; // 0xd5 PushI
	var_65_bool = var_16_int > var_64_int; // 0xd6 GT
	if(var_65_bool == 0) goto Label_219; // 0xd7 JumpB
	func_367(var_16_int); // 0xd9 NEW_2
	
Label_219:
	var_67_object = Obj(); // 0xdb PushV
	var_67_object = var_14_bool; // 0xdc Mov
	func_2813(var_67_object); // 0xdd NEW_2
	
Label_223:
	return 2; // 0xdf Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xe0 PushV
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_bool = 0; // 0xe1 PushV
	var_20_object = var_14_object; // 0xe2 Mov
	var_21_object = var_15_cvector; // 0xe3 Mov
	var_22_bool = var_16_bool; // 0xe4 Mov
	func_2773(var_22_bool); // 0xe5 NEW_2
	if(var_19_bool == 0) goto Label_251; // 0xe7 JumpB
	var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; // 0xe8 PushV
	var_24_object = var_14_object; // 0xe9 Mov
	var_25_bool = var_16_bool; // 0xea Mov
	func_2671(var_24_object, var_25_bool); // 0xeb NEW_2
	var_18_int = var_23_int; // 0xec Mov
	var_60_int = 0; // 0xee PushI
	var_61_bool = var_18_int > var_60_int; // 0xef GT
	if(var_61_bool == 0) goto Label_251; // 0xf0 JumpB
	var_62_int = 1; // 0xf1 PushI
	var_63_bool = var_18_int > var_62_int; // 0xf2 GT
	if(var_63_bool == 0) goto Label_247; // 0xf3 JumpB
	func_367(var_18_int); // 0xf5 NEW_2
	
Label_247:
	var_65_object = Obj(); // 0xf7 PushV
	var_65_object = var_14_object; // 0xf8 Mov
	func_2681(var_65_object); // 0xf9 NEW_2
	
Label_251:
	return 2; // 0xfb Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0xfc PushV
	var_17_int = 0; var_18_object = Obj(); // 0xfd PushV
	var_18_object = var_14_bool; // 0xfe Mov
	func_2689(var_18_object); // 0xff NEW_2
	var_16_int = var_17_int; // 0x100 Mov
	var_19_int = 0; // 0x102 PushI
	var_20_bool = var_16_int > var_19_int; // 0x103 GT
	if(var_20_bool == 0) goto Label_271; // 0x104 JumpB
	var_21_int = 1; // 0x105 PushI
	var_22_bool = var_16_int > var_21_int; // 0x106 GT
	if(var_22_bool == 0) goto Label_267; // 0x107 JumpB
	func_367(var_16_int); // 0x109 NEW_2
	
Label_267:
	var_24_object = Obj(); // 0x10b PushV
	var_24_object = var_14_bool; // 0x10c Mov
	func_2692(); // 0x10d NEW_2
	
Label_271:
	return 2; // 0x10f Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0; // 0x110 PushV
	var_18_bool = 0; var_19_object = Obj(); var_20_string = ""; // 0x111 PushV
	var_19_object = var_14_cvector; // 0x112 Mov
	var_20_string = var_15_bool; // 0x113 Mov
	func_2508(var_18_bool, var_19_object, var_20_string); // 0x114 NEW_2
	if(var_18_bool == 0) goto Label_288; // 0x116 JumpB
	func_367(var_17_int); // 0x118 NEW_2
	var_34_object = Obj(); var_35_string = ""; // 0x11a PushV
	var_34_object = var_14_cvector; // 0x11b Mov
	var_35_string = var_15_bool; // 0x11c Mov
	func_2540(var_34_object, var_35_string); // 0x11d NEW_2
	goto Label_308; // 0x11f Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_288:
	var_45_int = 0; var_46_string = ""; var_47_object = Obj(); // 0x120 PushV
	var_46_string = var_15_bool; // 0x121 Mov
	var_47_object = var_14_cvector; // 0x122 Mov
	func_2694(var_47_object); // 0x123 NEW_2
	var_17_int = var_45_int; // 0x124 Mov
	var_48_int = 0; // 0x126 PushI
	var_49_bool = var_17_int > var_48_int; // 0x127 GT
	if(var_49_bool == 0) goto Label_308; // 0x128 JumpB
	var_50_int = 1; // 0x129 PushI
	var_51_bool = var_17_int > var_50_int; // 0x12a GT
	if(var_51_bool == 0) goto Label_303; // 0x12b JumpB
	func_367(var_17_int); // 0x12d NEW_2
	
Label_303:
	var_52_string = ""; var_53_object = Obj(); // 0x12f PushV
	var_52_string = var_15_bool; // 0x130 Mov
	var_53_object = var_14_cvector; // 0x131 Mov
	func_2697(); // 0x132 NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; // 0x136 PushV
	var_16_string = var_14_bool; // 0x137 Mov
	func_2607(var_15_bool, var_16_string); // 0x138 NEW_2
	if(var_15_bool == 0) goto Label_322; // 0x13a JumpB
	func_367(var_14_bool); // 0x13c NEW_2
	var_59_string = ""; // 0x13e PushV
	var_59_string = var_14_bool; // 0x13f Mov
	func_2623(var_59_string); // 0x140 NEW_2
	
Label_322:
	return 0; // 0x142 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x144 PushV
	var_16_object = var_14_bool; // 0x145 Mov
	func_2565(var_15_bool, var_16_object); // 0x146 NEW_2
	if(var_15_bool == 0) goto Label_337; // 0x148 JumpB
	func_367(var_14_bool); // 0x14a NEW_2
	var_28_object = Obj(); // 0x14c PushV
	var_28_object = var_14_bool; // 0x14d Mov
	func_2588(var_28_object); // 0x14e NEW_2
	goto Label_341; // 0x150 Jump
	
Label_341:
	return 0; // 0x155 Return
	
Label_337:
	var_30_object = Obj(); // 0x151 PushV
	var_30_object = var_14_bool; // 0x152 Mov
	func_392(var_14_bool, var_30_object); // 0x153 NEW_2
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_object = Obj(); // 0x157 PushV
	var_15_object = var_14_bool; // 0x158 Mov
	func_392(var_14_bool, var_15_object); // 0x159 NEW_2
	return 0; // 0x15b Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 110; // 0x15d PushI
	var_16_bool = var_14_bool != var_15_int; // 0x15e Neq
	if(var_16_bool == 0) goto Label_353; // 0x15f JumpB
	return 0; // 0x160 Return
	
Label_353:
	var_2_bool = 0; // 0x161 TMovB
	var_17_int = 110; // 0x162 PushI
	KillTimer(var_17_int); // 0x163 Func
	ResetAAS(); // 0x165 Func
	return 0; // 0x167 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_367(var_13_bool); // 0x169 NEW_2
	func_2708(); // 0x16c NEW_2
	return 0; // 0x16e Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_367(var_14_bool); // 0x181 NEW_2
	var_16_object = Obj(); // 0x183 PushV
	var_16_object = var_14_bool; // 0x184 Mov
	func_2484(); // 0x185 NEW_2
	return 0; // 0x187 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	RequestClearPath(var_14_bool); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	Stop(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x20d PushV
	var_17_int = 0; var_18_object = Obj(); // 0x20e PushV
	var_18_object = var_14_bool; // 0x20f Mov
	func_2699(var_18_object); // 0x210 NEW_2
	var_16_int = var_17_int; // 0x211 Mov
	var_19_int = 0; // 0x213 PushI
	var_20_bool = var_16_int > var_19_int; // 0x214 GT
	if(var_20_bool == 0) goto Label_544; // 0x215 JumpB
	var_21_int = 1; // 0x216 PushI
	var_22_bool = var_16_int > var_21_int; // 0x217 GT
	if(var_22_bool == 0) goto Label_540; // 0x218 JumpB
	func_770(); // 0x21a NEW_2
	
Label_540:
	var_23_object = Obj(); // 0x21c PushV
	var_23_object = var_14_bool; // 0x21d Mov
	func_2702(var_23_object); // 0x21e NEW_2
	
Label_544:
	return 2; // 0x220 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x221 PushV
	var_17_object = Obj(); // 0x222 PushV
	var_17_object = var_14_bool; // 0x223 Mov
	func_2594(var_17_object); // 0x224 NEW_2
	var_26_int = 0; var_27_object = Obj(); // 0x226 PushV
	var_27_object = var_14_bool; // 0x227 Mov
	func_2803(var_26_int, var_27_object); // 0x228 NEW_2
	var_16_int = var_26_int; // 0x229 Mov
	var_62_int = 0; // 0x22b PushI
	var_63_bool = var_16_int > var_62_int; // 0x22c GT
	if(var_63_bool == 0) goto Label_568; // 0x22d JumpB
	var_64_int = 1; // 0x22e PushI
	var_65_bool = var_16_int > var_64_int; // 0x22f GT
	if(var_65_bool == 0) goto Label_564; // 0x230 JumpB
	func_770(); // 0x232 NEW_2
	
Label_564:
	var_66_object = Obj(); // 0x234 PushV
	var_66_object = var_14_bool; // 0x235 Mov
	func_2813(var_66_object); // 0x236 NEW_2
	
Label_568:
	return 2; // 0x238 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x239 PushV
	var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_bool = 0; // 0x23a PushV
	var_20_object = var_14_object; // 0x23b Mov
	var_21_object = var_15_cvector; // 0x23c Mov
	var_22_bool = var_16_bool; // 0x23d Mov
	func_2773(var_22_bool); // 0x23e NEW_2
	if(var_19_bool == 0) goto Label_596; // 0x240 JumpB
	var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; // 0x241 PushV
	var_24_object = var_14_object; // 0x242 Mov
	var_25_bool = var_16_bool; // 0x243 Mov
	func_2671(var_24_object, var_25_bool); // 0x244 NEW_2
	var_18_int = var_23_int; // 0x245 Mov
	var_60_int = 0; // 0x247 PushI
	var_61_bool = var_18_int > var_60_int; // 0x248 GT
	if(var_61_bool == 0) goto Label_596; // 0x249 JumpB
	var_62_int = 1; // 0x24a PushI
	var_63_bool = var_18_int > var_62_int; // 0x24b GT
	if(var_63_bool == 0) goto Label_592; // 0x24c JumpB
	func_770(); // 0x24e NEW_2
	
Label_592:
	var_64_object = Obj(); // 0x250 PushV
	var_64_object = var_14_object; // 0x251 Mov
	func_2681(var_64_object); // 0x252 NEW_2
	
Label_596:
	return 2; // 0x254 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x255 PushV
	var_17_int = 0; var_18_object = Obj(); // 0x256 PushV
	var_18_object = var_14_bool; // 0x257 Mov
	func_2689(var_18_object); // 0x258 NEW_2
	var_16_int = var_17_int; // 0x259 Mov
	var_19_int = 0; // 0x25b PushI
	var_20_bool = var_16_int > var_19_int; // 0x25c GT
	if(var_20_bool == 0) goto Label_616; // 0x25d JumpB
	var_21_int = 1; // 0x25e PushI
	var_22_bool = var_16_int > var_21_int; // 0x25f GT
	if(var_22_bool == 0) goto Label_612; // 0x260 JumpB
	func_770(); // 0x262 NEW_2
	
Label_612:
	var_23_object = Obj(); // 0x264 PushV
	var_23_object = var_14_bool; // 0x265 Mov
	func_2692(); // 0x266 NEW_2
	
Label_616:
	return 2; // 0x268 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 0; var_17_int = 0; // 0x269 PushV
	var_18_bool = 0; var_19_object = Obj(); var_20_string = ""; // 0x26a PushV
	var_19_object = var_14_cvector; // 0x26b Mov
	var_20_string = var_15_bool; // 0x26c Mov
	func_2508(var_18_bool, var_19_object, var_20_string); // 0x26d NEW_2
	if(var_18_bool == 0) goto Label_633; // 0x26f JumpB
	func_770(); // 0x271 NEW_2
	var_33_object = Obj(); var_34_string = ""; // 0x273 PushV
	var_33_object = var_14_cvector; // 0x274 Mov
	var_34_string = var_15_bool; // 0x275 Mov
	func_2540(var_33_object, var_34_string); // 0x276 NEW_2
	goto Label_653; // 0x278 Jump
	
Label_653:
	return 2; // 0x28d Return
	
Label_633:
	var_44_int = 0; var_45_string = ""; var_46_object = Obj(); // 0x279 PushV
	var_45_string = var_15_bool; // 0x27a Mov
	var_46_object = var_14_cvector; // 0x27b Mov
	func_2694(var_46_object); // 0x27c NEW_2
	var_17_int = var_44_int; // 0x27d Mov
	var_47_int = 0; // 0x27f PushI
	var_48_bool = var_17_int > var_47_int; // 0x280 GT
	if(var_48_bool == 0) goto Label_653; // 0x281 JumpB
	var_49_int = 1; // 0x282 PushI
	var_50_bool = var_17_int > var_49_int; // 0x283 GT
	if(var_50_bool == 0) goto Label_648; // 0x284 JumpB
	func_770(); // 0x286 NEW_2
	
Label_648:
	var_51_string = ""; var_52_object = Obj(); // 0x288 PushV
	var_51_string = var_15_bool; // 0x289 Mov
	var_52_object = var_14_cvector; // 0x28a Mov
	func_2697(); // 0x28b NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; // 0x28f PushV
	var_16_string = var_14_bool; // 0x290 Mov
	func_2607(var_15_bool, var_16_string); // 0x291 NEW_2
	if(var_15_bool == 0) goto Label_667; // 0x293 JumpB
	func_770(); // 0x295 NEW_2
	var_58_string = ""; // 0x297 PushV
	var_58_string = var_14_bool; // 0x298 Mov
	func_2623(var_58_string); // 0x299 NEW_2
	
Label_667:
	return 0; // 0x29b Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_770(); // 0x29d NEW_2
	func_2708(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x2a4 PushV
	var_16_object = var_14_bool; // 0x2a5 Mov
	func_2565(var_15_bool, var_16_object); // 0x2a6 NEW_2
	if(var_15_bool == 0) goto Label_688; // 0x2a8 JumpB
	func_770(); // 0x2aa NEW_2
	var_27_object = Obj(); // 0x2ac PushV
	var_27_object = var_14_bool; // 0x2ad Mov
	func_2588(var_27_object); // 0x2ae NEW_2
	
Label_688:
	return 0; // 0x2b0 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x312 PushV
	var_17_object = Obj(); // 0x313 PushV
	var_17_object = var_14_bool; // 0x314 Mov
	func_2594(var_17_object); // 0x315 NEW_2
	var_26_int = 0; var_27_object = Obj(); // 0x317 PushV
	var_27_object = var_14_bool; // 0x318 Mov
	func_2768(var_27_object); // 0x319 NEW_2
	var_16_int = var_26_int; // 0x31a Mov
	var_28_int = 0; // 0x31c PushI
	var_29_bool = var_16_int > var_28_int; // 0x31d GT
	if(var_29_bool == 0) goto Label_809; // 0x31e JumpB
	var_30_int = 1; // 0x31f PushI
	var_31_bool = var_16_int > var_30_int; // 0x320 GT
	if(var_31_bool == 0) goto Label_805; // 0x321 JumpB
	func_880(); // 0x323 NEW_2
	
Label_805:
	var_32_object = Obj(); // 0x325 PushV
	var_32_object = var_14_bool; // 0x326 Mov
	func_2771(); // 0x327 NEW_2
	
Label_809:
	return 2; // 0x329 Return
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; // 0x32b PushV
	var_16_string = var_14_bool; // 0x32c Mov
	func_2607(var_15_bool, var_16_string); // 0x32d NEW_2
	if(var_15_bool == 0) goto Label_823; // 0x32f JumpB
	func_880(); // 0x331 NEW_2
	var_58_string = ""; // 0x333 PushV
	var_58_string = var_14_bool; // 0x334 Mov
	func_2623(var_58_string); // 0x335 NEW_2
	
Label_823:
	return 0; // 0x337 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_880(); // 0x339 NEW_2
	func_2708(); // 0x33c NEW_2
	return 0; // 0x33e Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_880(); // 0x377 NEW_2
	var_15_object = Obj(); // 0x379 PushV
	var_15_object = var_14_bool; // 0x37a Mov
	func_2484(); // 0x37b NEW_2
	return 0; // 0x37d Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; var_16_int = 0; // 0x37e PushV
	var_17_object = Obj(); // 0x37f PushV
	var_17_object = var_14_bool; // 0x380 Mov
	func_2594(var_17_object); // 0x381 NEW_2
	var_26_int = 0; var_27_object = Obj(); // 0x383 PushV
	var_27_object = var_14_bool; // 0x384 Mov
	func_2768(var_27_object); // 0x385 NEW_2
	var_16_int = var_26_int; // 0x386 Mov
	var_28_int = 0; // 0x388 PushI
	var_29_bool = var_16_int > var_28_int; // 0x389 GT
	if(var_29_bool == 0) goto Label_917; // 0x38a JumpB
	var_30_int = 1; // 0x38b PushI
	var_31_bool = var_16_int > var_30_int; // 0x38c GT
	if(var_31_bool == 0) goto Label_913; // 0x38d JumpB
	func_1076(var_16_int); // 0x38f NEW_2
	
Label_913:
	var_33_object = Obj(); // 0x391 PushV
	var_33_object = var_14_bool; // 0x392 Mov
	func_2771(); // 0x393 NEW_2
	
Label_917:
	return 2; // 0x395 Return
}


task_4_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; // 0x397 PushV
	var_16_string = var_14_bool; // 0x398 Mov
	func_2607(var_15_bool, var_16_string); // 0x399 NEW_2
	if(var_15_bool == 0) goto Label_931; // 0x39b JumpB
	func_1076(var_14_bool); // 0x39d NEW_2
	var_59_string = ""; // 0x39f PushV
	var_59_string = var_14_bool; // 0x3a0 Mov
	func_2623(var_59_string); // 0x3a1 NEW_2
	
Label_931:
	return 0; // 0x3a3 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1076(var_13_bool); // 0x3a5 NEW_2
	func_2708(); // 0x3a8 NEW_2
	return 0; // 0x3aa Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 0; // 0x41f PushI
	var_16_bool = var_14_bool != var_15_int; // 0x420 Neq
	if(var_16_bool == 0) goto Label_1059; // 0x421 JumpB
	return 0; // 0x422 Return
	
Label_1059:
	var_17_bool = 0; var_18_object = Obj(); // 0x423 PushV
	var_18_object = var_1_bool; // 0x424 MovT
	func_1092(var_17_bool, var_18_object); // 0x425 NEW_2
	var_53_bool = var_17_bool == 0; // 0x427 Not
	if(var_53_bool == 0) goto Label_1066; // 0x428 JumpB
	var_0_bool = 1; // 0x429 TMovB
	
Label_1066:
	var_54_int = 0; // 0x42a PushI
	KillTimer(var_54_int); // 0x42b Func
	Stop(); // 0x42d Func
	return 0; // 0x42f Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	RequestClearPath(var_14_bool); // 0x431 Func
	return 0; // 0x433 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_1076(var_14_bool); // 0x43d NEW_2
	var_16_object = Obj(); // 0x43f PushV
	var_16_object = var_14_bool; // 0x440 Mov
	func_2484(); // 0x441 NEW_2
	return 0; // 0x443 Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; // 0x4b4 PushV
	var_23_int = 120; // 0x4b5 PushI
	var_24_bool = var_14_bool != var_23_int; // 0x4b6 Neq
	if(var_24_bool == 0) goto Label_1209; // 0x4b7 JumpB
	return 8; // 0x4b8 Return
	
Label_1209:
	var_25_bool = var_0_bool == 0; // 0x4b9 NullEq
	if(var_25_bool == 0) goto Label_1218; // 0x4ba JumpB
	Stop(); // 0x4bb Func
	var_26_int = 1; // 0x4bd PushI
	KillTimer(var_26_int); // 0x4be Func
	var_2_bool = 1; // 0x4c0 TMovB
	goto Label_1255; // 0x4c1 Jump
	
Label_1255:
	return 8; // 0x4e7 Return
	
Label_1218:
	GetDirection(var_19_cvector); // 0x4c2 Func
	var_27_float = 7000.0; // 0x4c4 PushF
	FindDirLength(var_20_float, var_19_cvector, var_27_float); // 0x4c5 Func
	var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0x4c7 PushV
	var_29_float = 1.74533; // 0x4c8 MovF
	func_1101(var_28_cvector, var_29_float); // 0x4c9 NEW_2
	var_21_cvector = var_28_cvector; // 0x4ca Mov
	var_22_float = var_21_cvector | var_21_cvector; // 0x4cc Or2
	var_58_bool = 0; // 0x4cd PushV
	var_58_bool = 0; // 0x4ce MovB
	var_59_float = 2500.0; // 0x4cf PushF
	var_60_bool = var_22_float >= var_59_float; // 0x4d0 GE
	if(var_60_bool == 0) goto Label_1248; // 0x4d1 JumpB
	var_61_bool = 0; // 0x4d2 PushV
	var_61_bool = 1; // 0x4d3 MovB
	var_62_float = var_20_float * var_20_float; // 0x4d4 Mult
	var_63_float = 2.25; // 0x4d5 PushF
	var_64_float = var_62_float * var_63_float; // 0x4d6 Mult
	var_65_bool = var_22_float >= var_64_float; // 0x4d7 GE
	if(var_65_bool == 0) goto Label_1246; // 0x4d8 JumpB
	var_66_bool = 0; // 0x4d9 PushV
	func_1272(var_61_bool, var_66_bool); // 0x4da NEW_2
	if(var_66_bool == 0) goto Label_1246; // 0x4dc JumpB
	var_61_bool = 0; // 0x4dd MovB
	
Label_1246:
	if(var_61_bool == 0) goto Label_1248; // 0x4de JumpB
	var_58_bool = 1; // 0x4df MovB
	
Label_1248:
	if(var_58_bool == 0) goto Label_1255; // 0x4e0 JumpB
	Stop(); // 0x4e1 Func
	var_86_cvector = CVector(0,0,0); // 0x4e3 PushV
	func_1718(var_86_cvector); // 0x4e4 NEW_2
	var_1_bool = var_86_cvector + var_21_cvector; // 0x4e6 Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	func_1256(var_14_bool); // 0x4f1 NEW_2
	var_16_object = Obj(); // 0x4f3 PushV
	var_16_object = var_14_bool; // 0x4f4 Mov
	func_2484(); // 0x4f5 NEW_2
	return 0; // 0x4f7 Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1492(var_13_bool); // 0x533 NEW_2
	func_2708(); // 0x536 NEW_2
	return 0; // 0x538 Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; // 0x5a0 PushV
	var_23_int = 120; // 0x5a1 PushI
	var_24_bool = var_14_bool != var_23_int; // 0x5a2 Neq
	if(var_24_bool == 0) goto Label_1445; // 0x5a3 JumpB
	return 8; // 0x5a4 Return
	
Label_1445:
	var_25_bool = var_0_bool == 0; // 0x5a5 NullEq
	if(var_25_bool == 0) goto Label_1454; // 0x5a6 JumpB
	Stop(); // 0x5a7 Func
	var_26_int = 1; // 0x5a9 PushI
	KillTimer(var_26_int); // 0x5aa Func
	var_2_bool = 1; // 0x5ac TMovB
	goto Label_1491; // 0x5ad Jump
	
Label_1491:
	return 8; // 0x5d3 Return
	
Label_1454:
	GetDirection(var_19_cvector); // 0x5ae Func
	var_27_float = 7000.0; // 0x5b0 PushF
	FindDirLength(var_20_float, var_19_cvector, var_27_float); // 0x5b1 Func
	var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0x5b3 PushV
	var_29_float = 1.74533; // 0x5b4 MovF
	func_1337(var_28_cvector, var_29_float); // 0x5b5 NEW_2
	var_21_cvector = var_28_cvector; // 0x5b6 Mov
	var_22_float = var_21_cvector | var_21_cvector; // 0x5b8 Or2
	var_58_bool = 0; // 0x5b9 PushV
	var_58_bool = 0; // 0x5ba MovB
	var_59_float = 2500.0; // 0x5bb PushF
	var_60_bool = var_22_float >= var_59_float; // 0x5bc GE
	if(var_60_bool == 0) goto Label_1484; // 0x5bd JumpB
	var_61_bool = 0; // 0x5be PushV
	var_61_bool = 1; // 0x5bf MovB
	var_62_float = var_20_float * var_20_float; // 0x5c0 Mult
	var_63_float = 2.25; // 0x5c1 PushF
	var_64_float = var_62_float * var_63_float; // 0x5c2 Mult
	var_65_bool = var_22_float >= var_64_float; // 0x5c3 GE
	if(var_65_bool == 0) goto Label_1482; // 0x5c4 JumpB
	var_66_bool = 0; // 0x5c5 PushV
	func_1508(var_61_bool, var_66_bool); // 0x5c6 NEW_2
	if(var_66_bool == 0) goto Label_1482; // 0x5c8 JumpB
	var_61_bool = 0; // 0x5c9 MovB
	
Label_1482:
	if(var_61_bool == 0) goto Label_1484; // 0x5ca JumpB
	var_58_bool = 1; // 0x5cb MovB
	
Label_1484:
	if(var_58_bool == 0) goto Label_1491; // 0x5cc JumpB
	Stop(); // 0x5cd Func
	var_86_cvector = CVector(0,0,0); // 0x5cf PushV
	func_1718(var_86_cvector); // 0x5d0 NEW_2
	var_1_bool = var_86_cvector + var_21_cvector; // 0x5d2 Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	func_1492(var_14_bool); // 0x5dd NEW_2
	var_16_object = Obj(); // 0x5df PushV
	var_16_object = var_14_bool; // 0x5e0 Mov
	func_2484(); // 0x5e1 NEW_2
	return 0; // 0x5e3 Return
}


task_7_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	func_1686(var_13_bool); // 0x5f5 NEW_2
	func_2708(); // 0x5f8 NEW_2
	return 0; // 0x5fa Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int)
{
	var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; // 0x662 PushV
	var_23_int = 120; // 0x663 PushI
	var_24_bool = var_14_int != var_23_int; // 0x664 Neq
	if(var_24_bool == 0) goto Label_1639; // 0x665 JumpB
	return 8; // 0x666 Return
	
Label_1639:
	var_25_bool = var_0_bool == 0; // 0x667 NullEq
	if(var_25_bool == 0) goto Label_1648; // 0x668 JumpB
	Stop(); // 0x669 Func
	var_26_int = 1; // 0x66b PushI
	KillTimer(var_26_int); // 0x66c Func
	var_2_bool = 1; // 0x66e TMovB
	goto Label_1685; // 0x66f Jump
	
Label_1685:
	return 8; // 0x695 Return
	
Label_1648:
	GetDirection(var_19_cvector); // 0x670 Func
	var_27_float = 7000.0; // 0x672 PushF
	FindDirLength(var_20_float, var_19_cvector, var_27_float); // 0x673 Func
	var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0x675 PushV
	var_29_float = 1.74533; // 0x676 MovF
	func_1531(var_28_cvector, var_29_float); // 0x677 NEW_2
	var_21_cvector = var_28_cvector; // 0x678 Mov
	var_22_float = var_21_cvector | var_21_cvector; // 0x67a Or2
	var_58_bool = 0; // 0x67b PushV
	var_58_bool = 0; // 0x67c MovB
	var_59_float = 2500.0; // 0x67d PushF
	var_60_bool = var_22_float >= var_59_float; // 0x67e GE
	if(var_60_bool == 0) goto Label_1678; // 0x67f JumpB
	var_61_bool = 0; // 0x680 PushV
	var_61_bool = 1; // 0x681 MovB
	var_62_float = var_20_float * var_20_float; // 0x682 Mult
	var_63_float = 2.25; // 0x683 PushF
	var_64_float = var_62_float * var_63_float; // 0x684 Mult
	var_65_bool = var_22_float >= var_64_float; // 0x685 GE
	if(var_65_bool == 0) goto Label_1676; // 0x686 JumpB
	var_66_bool = 0; // 0x687 PushV
	func_1702(var_61_bool, var_66_bool); // 0x688 NEW_2
	if(var_66_bool == 0) goto Label_1676; // 0x68a JumpB
	var_61_bool = 0; // 0x68b MovB
	
Label_1676:
	if(var_61_bool == 0) goto Label_1678; // 0x68c JumpB
	var_58_bool = 1; // 0x68d MovB
	
Label_1678:
	if(var_58_bool == 0) goto Label_1685; // 0x68e JumpB
	Stop(); // 0x68f Func
	var_86_cvector = CVector(0,0,0); // 0x691 PushV
	func_1718(var_86_cvector); // 0x692 NEW_2
	var_1_bool = var_86_cvector + var_21_cvector; // 0x694 Add2
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object)
{
	func_1686(var_14_object); // 0x69f NEW_2
	var_16_object = Obj(); // 0x6a1 PushV
	var_16_object = var_14_object; // 0x6a2 Mov
	func_2484(); // 0x6a3 NEW_2
	return 0; // 0x6a5 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x9a7 PushV
	var_18_string = "health"; // 0x9a8 PushS
	var_19_bool = var_15_string == var_18_string; // 0x9a9 Eq
	if(var_19_bool == 0) goto Label_2483; // 0x9aa JumpB
	var_20_string = "health"; // 0x9ab PushS
	GetProperty(var_20_string, var_17_float); // 0x9ac Func
	var_21_int = 0; // 0x9ae PushI
	var_22_bool = var_17_float <= var_21_int; // 0x9af LE
	if(var_22_bool == 0) goto Label_2483; // 0x9b0 JumpB
	SignalDeath(var_14_object); // 0x9b1 Func
	
Label_2483:
	return 2; // 0x9b3 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object)
{
	var_15_object = Obj(); // 0x9b5 PushV
	var_15_object = var_14_object; // 0x9b6 Mov
	func_2463(var_15_object); // 0x9b7 NEW_2
	return 0; // 0x9b9 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x9bb PushV
	var_18_object = var_14_object; // 0x9bc Mov
	var_19_int = var_15_int; // 0x9bd Mov
	var_20_float = var_16_float; // 0x9be Mov
	func_1955(var_18_object, var_19_int, var_20_float); // 0x9bf NEW_2
	return 0; // 0x9c1 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x9c3 PushV
	var_20_object = var_14_object; // 0x9c4 Mov
	var_21_int = var_15_int; // 0x9c5 Mov
	var_22_float = var_16_float; // 0x9c6 Mov
	var_23_cvector = var_18_cvector; // 0x9c7 Mov
	var_24_cvector = var_19_cvector; // 0x9c8 Mov
	func_2023(var_22_float, var_23_cvector, var_24_cvector); // 0x9c9 NEW_2
	return 0; // 0x9cb Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_bool = 1; // 0x9c PushB
	SensePlayerOnly(var_14_bool); // 0x9d Func
	func_2746(); // 0xa0 NEW_2
	func_171(); // 0xa3 NEW_2
	
Label_165:
	var_2_bool = 0; // 0xa5 TMovB
	func_432(var_12_cvector, var_13_bool); // 0xa7 NEW_2
	goto Label_165; // 0xa9 Jump
}


func_0(var_16_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_17_object = Obj(); // 0x2 PushV
	var_17_object = var_16_object; // 0x3 Mov
	func_33(var_17_object); // 0x4 NEW_2
	var_97_object = Obj(); // 0x6 PushV
	var_97_object = var_16_object; // 0x7 Mov
	func_2776(var_97_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_2565(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0xa05 PushV
	var_19_bool = 0; // 0xa06 PushV
	var_19_bool = 0; // 0xa07 MovB
	var_20_bool = 0; var_21_object = Obj(); // 0xa08 PushV
	var_21_object = var_16_object; // 0xa09 Mov
	func_2716(var_21_object); // 0xa0a NEW_2
	if(var_20_bool == 0) goto Label_2579; // 0xa0c JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xa0d PushV
	var_23_object = var_16_object; // 0xa0e Mov
	func_1738(var_22_bool, var_23_object); // 0xa0f NEW_2
	if(var_22_bool == 0) goto Label_2579; // 0xa11 JumpB
	var_19_bool = 1; // 0xa12 MovB
	
Label_2579:
	if(var_19_bool == 0) goto Label_2586; // 0xa13 JumpB
	IsWeaponHolstered(var_18_bool); // 0xa14 ObjFunc
	var_26_bool = var_18_bool == 0; // 0xa16 Not
	if(var_26_bool == 0) goto Label_2586; // 0xa17 JumpB
	var_15_bool = 1; // 0xa18 MovB
	return 2; // 0xa19 Return
	
Label_2586:
	var_15_bool = 0; // 0xa1a MovB
	return 2; // 0xa1b Return
}


func_517(var_48_bool)
{
	var_48_bool = 0; // 0x205 MovB
	return 0; // 0x206 Return
}


func_519(var_42_object, var_43_cvector)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x207 PushV
	FindShiftedPathTo(var_45_object, var_43_cvector); // 0x208 Func
	var_42_object = var_45_object; // 0x20a Mov
	return 2; // 0x20b Return
}


func_1561(var_0_bool, var_1_bool, var_2_bool, var_67_object)
{
	var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; // 0x619 PushV
	var_0_bool = var_67_object; // 0x61a TMov
	var_81_cvector = CVector(0,0,0); var_82_float = 0; // 0x61b PushV
	var_82_float = 1.74533; // 0x61c MovF
	func_1531(var_81_cvector, var_82_float); // 0x61d NEW_2
	var_76_cvector = var_81_cvector; // 0x61e Mov
	var_77_float = var_76_cvector | var_76_cvector; // 0x620 Or2
	var_111_float = 2500.0; // 0x621 PushF
	var_112_bool = var_77_float < var_111_float; // 0x622 LT
	if(var_112_bool == 0) goto Label_1590; // 0x623 JumpB
	var_113_cvector = CVector(0,0,0); var_114_float = 0; // 0x624 PushV
	var_114_float = 2.61799; // 0x625 MovF
	func_1531(var_113_cvector, var_114_float); // 0x626 NEW_2
	var_76_cvector = var_113_cvector; // 0x627 Mov
	var_77_float = var_76_cvector | var_76_cvector; // 0x629 Or2
	var_115_float = 2500.0; // 0x62a PushF
	var_116_bool = var_77_float < var_115_float; // 0x62b LT
	if(var_116_bool == 0) goto Label_1590; // 0x62c JumpB
	var_117_string = "Can't retreat, distance: "; // 0x62d PushS
	var_118_float = sqrt(var_77_float); // 0x62e Sqrt
	var_119_int = var_117_string + var_118_float; // 0x62f Add
	Trace(var_119_int); // 0x630 Func
	var_120_float = 0.5; // 0x632 PushF
	Sleep(var_120_float); // 0x633 Func
	return 10; // 0x635 Return
	
Label_1590:
	var_121_float = GetByIndex(var_76_cvector, 0); // 0x636 PushE
	var_122_float = GetByIndex(var_76_cvector, 2); // 0x637 PushE
	Rotate(var_121_float, var_122_float); // 0x638 Func
	var_123_cvector = CVector(0,0,0); // 0x63a PushV
	func_1718(var_123_cvector); // 0x63b NEW_2
	var_1_bool = var_123_cvector + var_76_cvector; // 0x63d Add2
	var_126_int = 120; // 0x63e PushI
	var_127_float = 0.5; // 0x63f PushF
	SetTimer(var_126_int, var_127_float); // 0x640 Func
	var_2_bool = 0; // 0x642 TMovB
	
Label_1603:
	var_128_int = 1; // 0x643 PushI
	MovePoint(var_128_int, var_128_int, var_78_bool); // 0x644 Func
	var_129_bool = var_78_bool; // 0x646 Push
	if(var_129_bool == 0) goto Label_1631; // 0x647 JumpB
	var_130_bool = var_0_bool == 0; // 0x648 NullEq
	if(var_130_bool == 0) goto Label_1612; // 0x649 JumpB
	goto Label_1633; // 0x64a Jump
	
Label_1633:
	return 10; // 0x661 Return
	
Label_1612:
	var_131_cvector = CVector(0,0,0); var_132_float = 0; // 0x64c PushV
	var_132_float = 2.61799; // 0x64d MovF
	func_1531(var_131_cvector, var_132_float); // 0x64e NEW_2
	var_79_cvector = var_131_cvector; // 0x64f Mov
	var_80_float = var_79_cvector | var_79_cvector; // 0x651 Or2
	var_133_float = 2500.0; // 0x652 PushF
	var_134_bool = var_80_float >= var_133_float; // 0x653 GE
	if(var_134_bool == 0) goto Label_1630; // 0x654 JumpB
	var_135_cvector = CVector(0,0,0); // 0x655 PushV
	func_1718(var_135_cvector); // 0x656 NEW_2
	var_1_bool = var_135_cvector + var_79_cvector; // 0x658 Add2
	var_136_int = 120; // 0x659 PushI
	var_137_float = 0.5; // 0x65a PushF
	SetTimer(var_136_int, var_137_float); // 0x65b Func
	goto Label_1631; // 0x65d Jump
	
Label_1631:
	var_138_bool = var_2_bool == 0; // 0x65f Not
	if(var_138_bool == 0) goto Label_1603; // 0x660 JumpB
	
Label_1630:
	goto Label_1633; // 0x65e Jump
}


func_2588(var_27_object)
{
	var_28_object = Obj(); // 0xa1d PushV
	var_28_object = var_27_object; // 0xa1e Mov
	func_2719(); // 0xa1f NEW_2
	return 0; // 0xa21 Return
}


func_33(var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; var_25_bool = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); // 0x21 PushV
	var_38_bool = var_17_object == 0; // 0x22 NullEq
	if(var_38_bool == 0) goto Label_41; // 0x23 JumpB
	var_39_string = ""; // 0x24 PushV
	var_39_string = "fdie"; // 0x25 MovS
	func_124(var_39_string); // 0x26 NEW_2
	goto Label_123; // 0x28 Jump
	
Label_123:
	return 20; // 0x7b Return
	
Label_41:
	GetPosition(var_28_cvector); // 0x29 ObjFunc
	GetPosition(var_29_cvector); // 0x2b Func
	GetDirection(var_30_cvector); // 0x2d Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x2f Sub2
	var_71_float = GetByIndex(var_31_cvector, 0); // 0x30 PushE
	var_72_float = GetByIndex(var_30_cvector, 0); // 0x31 PushE
	var_73_float = var_71_float * var_72_float; // 0x32 Mult
	var_74_float = GetByIndex(var_31_cvector, 2); // 0x33 PushE
	var_75_float = GetByIndex(var_30_cvector, 2); // 0x34 PushE
	var_76_float = var_74_float * var_75_float; // 0x35 Mult
	var_77_int = var_73_float + var_76_float; // 0x36 Add
	var_78_int = 0; // 0x37 PushI
	var_79_bool = var_77_int >= var_78_int; // 0x38 GE
	if(var_79_bool == 0) goto Label_60; // 0x39 JumpB
	var_32_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_33_object = var_17_object; // 0x45 Mov
	var_80_string = "GetScriptProperty"; // 0x46 PushS
	var_81_int = 2; // 0x47 PushI
	var_82_bool = IsFuncExist(var_17_object, var_80_string, var_81_int); // 0x48 FuncExist
	if(var_82_bool == 0) goto Label_85; // 0x49 JumpB
	var_83_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_34_bool, var_83_string); // 0x4b ObjFunc
	var_84_bool = var_34_bool; // 0x4d Push
	if(var_84_bool == 0) goto Label_85; // 0x4e JumpB
	var_85_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_33_object, var_85_string); // 0x50 ObjFunc
	var_86_bool = var_33_object == 0; // 0x52 NullEq
	if(var_86_bool == 0) goto Label_85; // 0x53 JumpB
	var_33_object = var_17_object; // 0x54 Mov
	
Label_85:
	var_87_string = "@GetEyesHeight"; // 0x55 PushS
	var_88_int = 1; // 0x56 PushI
	var_89_bool = IsFuncExist(var_33_object, var_87_string, var_88_int); // 0x57 FuncExist
	if(var_89_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_36_float); // 0x59 ObjFunc
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_90_float = GetByIndex(var_37_cvector, 1); // 0x5c PushE
	var_90_float = var_36_float; // 0x5d Mov
	SetByIndex(var_37_cvector, 1) = var_90_float; // 0x5e PopE
	var_91_string = "head"; // 0x5f PushS
	LookAsync(var_17_object, var_91_string, var_37_cvector); // 0x60 Func
	var_35_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_92_string = ""; // 0x65 PushV
	var_92_string = var_32_string; // 0x66 Mov
	func_2042(var_92_string); // 0x67 NEW_2
	var_93_string = "all"; // 0x69 PushS
	PlayAnimation(var_93_string, var_32_string); // 0x6a Func
	WaitForAnimEnd(); // 0x6c Func
	var_94_bool = var_35_bool; // 0x6e Push
	if(var_94_bool == 0) goto Label_117; // 0x6f JumpB
	StopAsync(); // 0x70 Func
	var_95_string = "head"; // 0x72 PushS
	UnlookAsync(var_95_string); // 0x73 Func
	
Label_117:
	var_96_string = "all"; // 0x75 PushS
	LockAnimationEnd(var_96_string, var_32_string); // 0x76 Func
	RemoveEnvelope(); // 0x78 Func
	var_33_object = 0; // 0x7a SetNull
	
Label_100:
	var_35_bool = 0; // 0x64 MovB
	
Label_60:
	var_32_string = "bdie"; // 0x3c MovS
}


func_2594(var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0xa23 PushV
	var_19_object = var_17_object; // 0xa24 Mov
	func_1738(var_18_bool, var_19_object); // 0xa25 NEW_2
	if(var_18_bool == 0) goto Label_2606; // 0xa27 JumpB
	var_22_object = Obj(); // 0xa28 PushV
	func_2083(var_22_object); // 0xa29 NEW_2
	var_25_float = -0.03; // 0xa2b PushF
	ReportReputationChange(var_17_object, var_22_object, var_25_float); // 0xa2c Func
	
Label_2606:
	return 0; // 0xa2e Return
}


func_2083(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x823 PushV
	self(var_22_object); // 0x824 Func
	var_20_object = var_22_object; // 0x826 Mov
	return 2; // 0x827 Return
}


func_2089(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x829 PushV
	var_56_int = var_47_cvector | var_47_cvector; // 0x82a Or
	var_55_float = sqrt(var_56_int); // 0x82b Sqrt2
	var_57_float = 0.0; // 0x82c PushF
	var_58_bool = var_55_float < var_57_float; // 0x82d LT
	if(var_58_bool == 0) goto Label_2097; // 0x82e JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x82f MovV
	return 2; // 0x830 Return
	
Label_2097:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x831 Div2
	return 2; // 0x832 Return
}


func_2607(var_15_bool, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0xa2f PushV
	var_19_string = "heal"; // 0xa30 PushS
	var_20_bool = var_16_string == var_19_string; // 0xa31 Eq
	if(var_20_bool == 0) goto Label_2621; // 0xa32 JumpB
	var_21_string = "player"; // 0xa33 PushS
	FindActor(var_18_object, var_21_string); // 0xa34 Func
	var_22_bool = 0; var_23_object = Obj(); // 0xa36 PushV
	var_23_object = var_18_object; // 0xa37 Mov
	func_2731(var_22_bool, var_23_object); // 0xa38 NEW_2
	var_15_bool = var_22_bool; // 0xa39 Mov
	return 2; // 0xa3b Return
	
Label_2621:
	var_15_bool = 0; // 0xa3d MovB
	return 2; // 0xa3e Return
}


func_2099(var_95_float, var_96_float, var_97_float, var_98_float)
{
	var_99_bool = var_96_float < var_97_float; // 0x834 LT
	if(var_99_bool == 0) goto Label_2104; // 0x835 JumpB
	var_95_float = var_97_float; // 0x836 Mov
	return 0; // 0x837 Return
	
Label_2104:
	var_100_bool = var_96_float > var_98_float; // 0x838 GT
	if(var_100_bool == 0) goto Label_2108; // 0x839 JumpB
	var_95_float = var_98_float; // 0x83a Mov
	return 0; // 0x83b Return
	
Label_2108:
	var_95_float = var_96_float; // 0x83c Mov
	return 0; // 0x83d Return
}


func_1076(var_0_bool)
{
	var_0_bool = 1; // 0x434 TMovB
	var_15_int = 0; // 0x435 PushI
	KillTimer(var_15_int); // 0x436 Func
	Stop(); // 0x438 Func
	return 0; // 0x43a Return
}


func_2110(var_77_float, var_78_cvector, var_79_cvector)
{
	var_80_int = var_78_cvector | var_79_cvector; // 0x83f Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x840 Or
	var_82_int = var_79_cvector | var_79_cvector; // 0x841 Or
	var_83_float = var_81_int * var_82_int; // 0x842 Mult
	var_84_float = sqrt(var_83_float); // 0x843 Sqrt
	var_77_float = var_80_int / var_80_int; // 0x844 Div2
	return 0; // 0x845 Return
}


func_2623(var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xa3f PushV
	var_62_string = "heal"; // 0xa40 PushS
	var_63_bool = var_59_string == var_62_string; // 0xa41 Eq
	if(var_63_bool == 0) goto Label_2635; // 0xa42 JumpB
	var_64_string = "player"; // 0xa43 PushS
	FindActor(var_61_object, var_64_string); // 0xa44 Func
	var_65_object = Obj(); // 0xa46 PushV
	var_65_object = var_61_object; // 0xa47 Mov
	func_2738(var_65_object); // 0xa48 NEW_2
	var_61_object = 0; // 0xa4a SetNull
	
Label_2635:
	return 2; // 0xa4b Return
}


func_1092(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x445 PushV
	var_20_object = var_18_object; // 0x446 Mov
	func_1887(var_19_bool, var_20_object); // 0x447 NEW_2
	var_17_bool = var_19_bool; // 0x448 Mov
	return 0; // 0x44a Return
}


func_2118(var_72_bool, var_73_object, var_74_float)
{
	var_75_bool = var_73_object == 0; // 0x847 Not
	if(var_75_bool == 0) goto Label_2123; // 0x848 JumpB
	var_72_bool = 0; // 0x849 MovB
	return 0; // 0x84a Return
	
Label_2123:
	var_76_int = 0; // 0x84b PushI
	var_77_bool = var_74_float > var_76_int; // 0x84c GT
	if(var_77_bool == 0) goto Label_2130; // 0x84d JumpB
	var_78_int = 8; // 0x84e PushI
	SendWorldWndMessage(var_78_int); // 0x84f Func
	goto Label_2139; // 0x851 Jump
	
Label_2139:
	var_79_float = 0; // 0x85b PushV
	var_79_float = var_74_float; // 0x85c Mov
	func_2173(var_79_float); // 0x85d NEW_2
	var_83_bool = 0; var_84_object = Obj(); var_85_string = ""; var_86_float = 0; var_87_float = 0; var_88_float = 0; // 0x85f PushV
	var_84_object = var_73_object; // 0x860 Mov
	var_85_string = "reputation"; // 0x861 MovS
	var_86_float = var_74_float; // 0x862 Mov
	var_87_float = 0; // 0x863 MovI
	var_88_float = 1; // 0x864 MovI
	func_1755(var_83_bool, var_84_object, var_85_string, var_86_float, var_87_float, var_88_float); // 0x865 NEW_2
	var_72_bool = 1; // 0x867 MovB
	return 0; // 0x868 Return
	
Label_2130:
	var_101_int = 0; // 0x852 PushI
	var_102_bool = var_74_float < var_101_int; // 0x853 LT
	if(var_102_bool == 0) goto Label_2137; // 0x854 JumpB
	var_103_int = 9; // 0x855 PushI
	SendWorldWndMessage(var_103_int); // 0x856 Func
	goto Label_2139; // 0x858 Jump
	
Label_2137:
	var_72_bool = 0; // 0x859 MovB
	return 0; // 0x85a Return
}


func_1099(var_118_string)
{
	var_118_string = "run"; // 0x44b MovS
	return 0; // 0x44c Return
}


func_2636(var_72_string, var_73_int)
{
	var_74_string = ""; var_75_string = ""; // 0xa4c PushV
	var_75_string = "idle"; // 0xa4d MovS
	var_76_int = var_73_int; // 0xa4e Push
	if(var_76_int == 0) goto Label_2641; // 0xa4f JumpB
	var_75_string = var_75_string + var_73_int; // 0xa50 Add2
	
Label_2641:
	var_72_string = var_75_string; // 0xa51 Mov
	return 2; // 0xa52 Return
}


func_1101(var_28_cvector, var_29_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; // 0x44d PushV
	GetPosition(var_36_cvector); // 0x44e Func
	GetPosition(var_37_cvector); // 0x450 TObjFunc
	GetDirection(var_38_cvector); // 0x452 Func
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x454 PushV
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x455 PushV
	var_45_cvector = var_36_cvector - var_37_cvector; // 0x456 Sub2
	func_2089(var_44_cvector, var_45_cvector); // 0x457 NEW_2
	var_51_float = 0.75; // 0x459 PushF
	var_52_float = var_38_cvector * var_51_float; // 0x45a Mult
	var_43_cvector = var_44_cvector + var_52_float; // 0x45b Add2
	func_2089(var_42_cvector, var_43_cvector); // 0x45c NEW_2
	var_39_cvector = var_42_cvector; // 0x45d Mov
	var_53_int = 32; // 0x45f PushI
	var_54_float = 7000.0; // 0x460 PushF
	FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, var_53_int, var_54_float); // 0x461 Func
	var_55_int = 100; // 0x463 PushI
	var_41_float = var_41_float - var_55_int; // 0x464 Sub2
	var_56_int = 0; // 0x465 PushI
	var_57_bool = var_41_float < var_56_int; // 0x466 LT
	if(var_57_bool == 0) goto Label_1129; // 0x467 JumpB
	var_41_float = 0; // 0x468 MovI
	
Label_1129:
	var_28_cvector = var_40_cvector * var_41_float; // 0x469 Mult2
	return 12; // 0x46a Return
}


func_2643(var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0xa53 PushV
	var_69_int = 0; // 0xa54 MovI
	
Label_2645:
	var_71_string = "all"; // 0xa55 PushS
	var_72_string = ""; var_73_int = 0; // 0xa56 PushV
	var_73_int = var_69_int; // 0xa57 Mov
	func_2636(var_72_string, var_73_int); // 0xa58 NEW_2
	HasAnimation(var_70_bool, var_71_string, var_72_string); // 0xa5a Func
	var_77_bool = var_70_bool == 0; // 0xa5c Not
	if(var_77_bool == 0) goto Label_2655; // 0xa5d JumpB
	goto Label_2658; // 0xa5e Jump
	
Label_2658:
	var_66_int = var_69_int; // 0xa62 Mov
	return 4; // 0xa63 Return
	
Label_2655:
	var_78_int = 1; // 0xa5f PushI
	var_69_int = var_69_int + var_78_int; // 0xa60 Add2
	goto Label_2645; // 0xa61 Jump
}


func_2660(var_57_int)
{
	var_57_int = 2; // 0xa65 MovI
	return 0; // 0xa66 Return
}


func_2663(var_64_object)
{
	var_65_object = Obj(); // 0xa68 PushV
	var_65_object = var_64_object; // 0xa69 Mov
	TaskCall(3); // 0xa6a TaskCall
	func_775(var_65_object); // 0xa6b NEW_2
	TaskReturn(); // 0xa6c TaskReturn
	return 0; // 0xa6e Return
}


func_2153(var_196_float)
{
	var_197_object = Obj(); var_198_object = Obj(); // 0x869 PushV
	CreateFloatVector(var_198_object); // 0x86a Func
	add(var_196_float); // 0x86c ObjFunc
	var_199_int = 14; // 0x86e PushI
	SendWorldWndMessage(var_199_int, var_198_object); // 0x86f Func
	return 2; // 0x871 Return
}


func_1131(var_0_bool, var_1_bool, var_2_bool, var_65_object)
{
	var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_bool = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_float = 0; // 0x46b PushV
	var_0_bool = var_65_object; // 0x46c TMov
	var_79_cvector = CVector(0,0,0); var_80_float = 0; // 0x46d PushV
	var_80_float = 1.74533; // 0x46e MovF
	func_1101(var_79_cvector, var_80_float); // 0x46f NEW_2
	var_74_cvector = var_79_cvector; // 0x470 Mov
	var_75_float = var_74_cvector | var_74_cvector; // 0x472 Or2
	var_109_float = 2500.0; // 0x473 PushF
	var_110_bool = var_75_float < var_109_float; // 0x474 LT
	if(var_110_bool == 0) goto Label_1160; // 0x475 JumpB
	var_111_cvector = CVector(0,0,0); var_112_float = 0; // 0x476 PushV
	var_112_float = 2.61799; // 0x477 MovF
	func_1101(var_111_cvector, var_112_float); // 0x478 NEW_2
	var_74_cvector = var_111_cvector; // 0x479 Mov
	var_75_float = var_74_cvector | var_74_cvector; // 0x47b Or2
	var_113_float = 2500.0; // 0x47c PushF
	var_114_bool = var_75_float < var_113_float; // 0x47d LT
	if(var_114_bool == 0) goto Label_1160; // 0x47e JumpB
	var_115_string = "Can't retreat, distance: "; // 0x47f PushS
	var_116_float = sqrt(var_75_float); // 0x480 Sqrt
	var_117_int = var_115_string + var_116_float; // 0x481 Add
	Trace(var_117_int); // 0x482 Func
	var_118_float = 0.5; // 0x484 PushF
	Sleep(var_118_float); // 0x485 Func
	return 10; // 0x487 Return
	
Label_1160:
	var_119_float = GetByIndex(var_74_cvector, 0); // 0x488 PushE
	var_120_float = GetByIndex(var_74_cvector, 2); // 0x489 PushE
	Rotate(var_119_float, var_120_float); // 0x48a Func
	var_121_cvector = CVector(0,0,0); // 0x48c PushV
	func_1718(var_121_cvector); // 0x48d NEW_2
	var_1_bool = var_121_cvector + var_74_cvector; // 0x48f Add2
	var_124_int = 120; // 0x490 PushI
	var_125_float = 0.5; // 0x491 PushF
	SetTimer(var_124_int, var_125_float); // 0x492 Func
	var_2_bool = 0; // 0x494 TMovB
	
Label_1173:
	var_126_int = 1; // 0x495 PushI
	MovePoint(var_126_int, var_126_int, var_76_bool); // 0x496 Func
	var_127_bool = var_76_bool; // 0x498 Push
	if(var_127_bool == 0) goto Label_1201; // 0x499 JumpB
	var_128_bool = var_0_bool == 0; // 0x49a NullEq
	if(var_128_bool == 0) goto Label_1182; // 0x49b JumpB
	goto Label_1203; // 0x49c Jump
	
Label_1203:
	return 10; // 0x4b3 Return
	
Label_1182:
	var_129_cvector = CVector(0,0,0); var_130_float = 0; // 0x49e PushV
	var_130_float = 2.61799; // 0x49f MovF
	func_1101(var_129_cvector, var_130_float); // 0x4a0 NEW_2
	var_77_cvector = var_129_cvector; // 0x4a1 Mov
	var_78_float = var_77_cvector | var_77_cvector; // 0x4a3 Or2
	var_131_float = 2500.0; // 0x4a4 PushF
	var_132_bool = var_78_float >= var_131_float; // 0x4a5 GE
	if(var_132_bool == 0) goto Label_1200; // 0x4a6 JumpB
	var_133_cvector = CVector(0,0,0); // 0x4a7 PushV
	func_1718(var_133_cvector); // 0x4a8 NEW_2
	var_1_bool = var_133_cvector + var_77_cvector; // 0x4aa Add2
	var_134_int = 120; // 0x4ab PushI
	var_135_float = 0.5; // 0x4ac PushF
	SetTimer(var_134_int, var_135_float); // 0x4ad Func
	goto Label_1201; // 0x4af Jump
	
Label_1201:
	var_136_bool = var_2_bool == 0; // 0x4b1 Not
	if(var_136_bool == 0) goto Label_1173; // 0x4b2 JumpB
	
Label_1200:
	goto Label_1203; // 0x4b0 Jump
}


func_2671(var_23_int, var_24_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0xa70 PushV
	var_27_object = var_24_object; // 0xa71 Mov
	func_1887(var_26_bool, var_27_object); // 0xa72 NEW_2
	if(var_26_bool == 0) goto Label_2679; // 0xa74 JumpB
	var_23_int = 2; // 0xa75 MovI
	goto Label_2680; // 0xa76 Jump
	
Label_2680:
	return 0; // 0xa78 Return
	
Label_2679:
	var_23_int = 0; // 0xa77 MovI
}


func_2163(var_106_float)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x873 PushV
	CreateFloatVector(var_108_object); // 0x874 Func
	add(var_106_float); // 0x876 ObjFunc
	var_109_int = 15; // 0x878 PushI
	SendWorldWndMessage(var_109_int, var_108_object); // 0x879 Func
	return 2; // 0x87b Return
}


func_2681(var_64_object)
{
	var_65_object = Obj(); // 0xa7a PushV
	var_65_object = var_64_object; // 0xa7b Mov
	TaskCall(5); // 0xa7c TaskCall
	func_1131(var_66_object, var_67_cvector, var_68_bool, var_65_object); // 0xa7d NEW_2
	TaskReturn(); // 0xa7e TaskReturn
	return 0; // 0xa80 Return
}


func_124(var_39_string)
{
	RemoveRTEnvelope(); // 0x7d Func
	SetDeathState(); // 0x7f Func
	Stop(); // 0x81 Func
	StopAsync(); // 0x83 Func
	StopSecondaryAnimation(); // 0x85 Func
	var_40_string = ""; // 0x87 PushV
	var_40_string = var_39_string; // 0x88 Mov
	func_2042(var_40_string); // 0x89 NEW_2
	var_69_string = "all"; // 0x8b PushS
	PlayAnimation(var_69_string, var_39_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_70_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_70_string, var_39_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_2173(var_79_float)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x87d PushV
	CreateFloatVector(var_81_object); // 0x87e Func
	add(var_79_float); // 0x880 ObjFunc
	var_82_int = 16; // 0x882 PushI
	SendWorldWndMessage(var_82_int, var_81_object); // 0x883 Func
	return 2; // 0x885 Return
}


func_2689(var_17_int)
{
	var_17_int = 0; // 0xa82 MovI
	return 0; // 0xa83 Return
}


func_2692()
{
	return 0; // 0xa85 Return
}


func_2694(var_44_int)
{
	var_44_int = 0; // 0xa87 MovI
	return 0; // 0xa88 Return
}


func_2183(var_115_int)
{
	var_116_float = 0; var_117_float = 0; // 0x887 PushV
	GetGameTime(var_117_float); // 0x888 Func
	var_118_int = 1; // 0x88a PushI
	var_119_int = 0; // 0x88b PushV
	var_120_int = 24; // 0x88c PushI
	var_119_int = var_117_float / var_117_float; // 0x88d Div2
	var_115_int = var_118_int + var_119_int; // 0x88e Add2
	return 2; // 0x88f Return
}


func_2697()
{
	return 0; // 0xa8a Return
}


func_2699(var_17_int)
{
	var_17_int = 2; // 0xa8c MovI
	return 0; // 0xa8d Return
}


func_2702(var_23_object)
{
	var_24_object = Obj(); // 0xa8f PushV
	var_24_object = var_23_object; // 0xa90 Mov
	func_2750(var_24_object); // 0xa91 NEW_2
	return 0; // 0xa93 Return
}


func_2192(var_220_int)
{
	var_221_int = 0; var_222_int = 0; // 0x890 PushV
	var_223_string = "branch"; // 0x891 PushS
	GetVariable(var_223_string, var_222_int); // 0x892 Func
	var_220_int = var_222_int; // 0x894 Mov
	return 2; // 0x895 Return
}


func_2708()
{
	var_20_object = Obj(); // 0xa94 PushV
	func_2083(var_20_object); // 0xa95 NEW_2
	RemoveActor(var_20_object); // 0xa97 Func
	Hold(); // 0xa99 Func
	return 0; // 0xa9b Return
}


func_1686(var_2_bool)
{
	Stop(); // 0x696 Func
	var_15_int = 120; // 0x698 PushI
	KillTimer(var_15_int); // 0x699 Func
	var_2_bool = 1; // 0x69b TMovB
	return 0; // 0x69c Return
}


func_2198(var_29_object)
{
	var_30_int = 0; // 0x897 PushV
	func_2192(var_30_int); // 0x898 NEW_2
	var_34_int = 1; // 0x89a PushI
	var_35_bool = var_30_int == var_34_int; // 0x89b Eq
	if(var_35_bool == 0) goto Label_2208; // 0x89c JumpB
	WorkWithCorpse(var_29_object); // 0x89d Func
	goto Label_2210; // 0x89f Jump
	
Label_2210:
	return 0; // 0x8a2 Return
	
Label_2208:
	Barter(var_29_object); // 0x8a0 Func
}


func_2716(var_20_bool)
{
	var_20_bool = 0; // 0xa9d MovB
	return 0; // 0xa9e Return
}


func_2719()
{
	return 0; // 0xaa0 Return
}


func_2721(var_27_bool)
{
	var_27_bool = 0; // 0xaa2 MovB
	return 0; // 0xaa3 Return
}


func_2211(var_112_int, var_113_int)
{
	var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_bool = 0; // 0x8a3 PushV
	var_127_bool = var_112_int > var_113_int; // 0x8a4 GT
	if(var_127_bool == 0) goto Label_2218; // 0x8a5 JumpB
	var_128_string = "GenerateMoney: iMin > iMax"; // 0x8a6 PushS
	Trace(var_128_string); // 0x8a7 Func
	return 4; // 0x8a9 Return
	
Label_2218:
	var_125_int = 0; // 0x8aa MovI
	var_129_bool = var_112_int != var_113_int; // 0x8ab Neq
	if(var_129_bool == 0) goto Label_2225; // 0x8ac JumpB
	var_130_int = var_113_int - var_112_int; // 0x8ad Sub
	irand(var_125_int, var_130_int); // 0x8ae Func
	goto Label_2229; // 0x8b0 Jump
	
Label_2229:
	var_125_int = var_125_int + var_112_int; // 0x8b5 Add2
	var_131_int = 0; // 0x8b6 PushI
	var_132_bool = var_125_int == var_131_int; // 0x8b7 Eq
	if(var_132_bool == 0) goto Label_2234; // 0x8b8 JumpB
	return 4; // 0x8b9 Return
	
Label_2234:
	var_133_int = 0; var_134_string = ""; // 0x8ba PushV
	var_134_string = "Money"; // 0x8bb MovS
	func_2458(var_133_int, var_134_string); // 0x8bc NEW_2
	var_137_int = 0; // 0x8be PushI
	AddItem(var_126_bool, var_133_int, var_137_int, var_125_int); // 0x8bf Func
	return 4; // 0x8c1 Return
	
Label_2225:
	var_138_int = 0; // 0x8b1 PushI
	var_139_bool = var_112_int == var_138_int; // 0x8b2 Eq
	if(var_139_bool == 0) goto Label_2229; // 0x8b3 JumpB
	return 4; // 0x8b4 Return
}


func_2724()
{
	return 0; // 0xaa5 Return
}


func_1702(var_0_bool, var_66_bool)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x6a6 PushV
	GetDirection(var_69_cvector); // 0x6a7 Func
	var_71_cvector = CVector(0,0,0); var_72_object = Obj(); // 0x6a9 PushV
	var_72_object = var_0_bool; // 0x6aa MovT
	func_1723(var_72_object); // 0x6ab NEW_2
	var_70_cvector = var_71_cvector; // 0x6ac Mov
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x6ae PushV
	var_78_cvector = var_69_cvector; // 0x6af Mov
	var_79_cvector = var_70_cvector; // 0x6b0 Mov
	func_2110(var_77_float, var_78_cvector, var_79_cvector); // 0x6b1 NEW_2
	var_85_float = -0.34202; // 0x6b3 PushF
	var_66_bool = var_77_float >= var_85_float; // 0x6b4 GE2
	return 4; // 0x6b5 Return
}


func_2726(var_31_bool)
{
	var_31_bool = 0; // 0xaa7 MovB
	return 0; // 0xaa8 Return
}


func_2729()
{
	return 0; // 0xaaa Return
}


func_171()
{
	var_16_bool = 0; // 0xab PushV
	func_2037(var_16_bool); // 0xac NEW_2
	var_19_bool = var_16_bool == 0; // 0xae Not
	if(var_19_bool == 0) goto Label_179; // 0xaf JumpB
	func_2708(); // 0xb1 NEW_2
	
Label_179:
	return 0; // 0xb3 Return
}


func_2731(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0xaac PushV
	var_25_object = var_23_object; // 0xaad Mov
	func_1887(var_24_bool, var_25_object); // 0xaae NEW_2
	var_22_bool = var_24_bool; // 0xaaf Mov
	return 0; // 0xab1 Return
}


func_689()
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_bool = 0; // 0x2b1 PushV
	WaitForAnimEnd(); // 0x2b2 Func
	var_64_bool = 0; // 0x2b4 PushV
	func_2037(var_64_bool); // 0x2b5 NEW_2
	var_65_bool = var_64_bool == 0; // 0x2b7 Not
	if(var_65_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 14; // 0x2b9 Return
	
Label_698:
	var_66_int = 0; // 0x2ba PushV
	func_2643(var_66_int); // 0x2bb NEW_2
	var_57_int = var_66_int; // 0x2bc Mov
	var_58_int = 0; // 0x2be MovI
	
Label_703:
	var_79_bool = 0; // 0x2bf PushV
	var_79_bool = 0; // 0x2c0 MovB
	var_80_int = 5; // 0x2c1 PushI
	var_81_bool = var_58_int < var_80_int; // 0x2c2 LT
	if(var_81_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_82_bool = 0; // 0x2c4 PushV
	func_2037(var_82_bool); // 0x2c5 NEW_2
	if(var_82_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_79_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_79_bool == 0) goto Label_765; // 0x2c9 JumpB
	var_83_int = 3; // 0x2ca PushI
	irand(var_59_int, var_83_int); // 0x2cb Func
	var_84_int = 0; // 0x2cd PushI
	var_85_bool = var_59_int == var_84_int; // 0x2ce Eq
	if(var_85_bool == 0) goto Label_737; // 0x2cf JumpB
	var_86_int = var_57_int; // 0x2d0 Push
	if(var_86_int == 0) goto Label_736; // 0x2d1 JumpB
	irand(var_60_int, var_57_int); // 0x2d2 Func
	var_87_string = "all"; // 0x2d4 PushS
	var_88_string = ""; var_89_int = 0; // 0x2d5 PushV
	var_89_int = var_60_int; // 0x2d6 Mov
	func_2636(var_88_string, var_89_int); // 0x2d7 NEW_2
	PlayAnimation(var_87_string, var_88_string); // 0x2d9 Func
	WaitForAnimEnd(var_61_bool); // 0x2db Func
	var_90_bool = var_61_bool == 0; // 0x2dd Not
	if(var_90_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_765; // 0x2df Jump
	
Label_765:
	ResetAAS(); // 0x2fd Func
	return 14; // 0x2ff Return
	
Label_736:
	goto Label_754; // 0x2e0 Jump
	
Label_754:
	var_91_bool = 0; // 0x2f2 PushV
	func_768(var_91_bool); // 0x2f3 NEW_2
	var_92_bool = var_91_bool == 0; // 0x2f5 Not
	if(var_92_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_765; // 0x2f7 Jump
	
Label_760:
	ResetAAS(); // 0x2f8 Func
	var_93_int = 1; // 0x2fa PushI
	var_58_int = var_58_int + var_93_int; // 0x2fb Add2
	goto Label_703; // 0x2fc Jump
	
Label_737:
	var_94_int = 1; // 0x2e1 PushI
	var_95_bool = var_59_int == var_94_int; // 0x2e2 Eq
	if(var_95_bool == 0) goto Label_751; // 0x2e3 JumpB
	var_96_int = 4; // 0x2e4 PushI
	rand(var_62_float, var_96_int); // 0x2e5 Func
	var_97_int = 1; // 0x2e7 PushI
	var_98_int = var_62_float + var_97_int; // 0x2e8 Add
	Sleep(var_98_int, var_63_bool); // 0x2e9 Func
	var_99_bool = var_63_bool == 0; // 0x2eb Not
	if(var_99_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_765; // 0x2ed Jump
	
Label_750:
	goto Label_754; // 0x2ee Jump
	
Label_751:
	var_100_int = var_58_int; // 0x2ef Push
	if(var_100_int == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_765; // 0x2f1 Jump
}


func_2738(var_65_object)
{
	var_66_object = Obj(); // 0xab3 PushV
	var_66_object = var_65_object; // 0xab4 Mov
	TaskCall(6); // 0xab5 TaskCall
	func_1288(var_66_object); // 0xab6 NEW_2
	TaskReturn(); // 0xab7 TaskReturn
	return 0; // 0xab9 Return
}


func_1718(var_86_cvector)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0x6b6 PushV
	GetPosition(var_88_cvector); // 0x6b7 Func
	var_86_cvector = var_88_cvector; // 0x6b9 Mov
	return 2; // 0x6ba Return
}


func_2746()
{
	var_15_bool = GlobalVars[0]; // 0xaba PushGE
	var_15_bool = 0; // 0xabb MovB
	GlobalVars[0] = var_15_bool; // 0xabc PopGE
	return 0; // 0xabd Return
}


func_1723(var_48_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x6bb PushV
	GetPosition(var_52_cvector); // 0x6bc Func
	GetPosition(var_53_cvector); // 0x6be ObjFunc
	var_48_cvector = var_53_cvector - var_52_cvector; // 0x6c0 Sub2
	return 4; // 0x6c1 Return
}


func_2750(var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0xabe PushV
	var_27_bool = GlobalVars[0]; // 0xabf PushGE
	if(var_27_bool == 0) goto Label_2762; // 0xac0 JumpB
	IsOverrideActive(var_26_bool); // 0xac1 Func
	var_28_bool = var_26_bool == 0; // 0xac3 Not
	if(var_28_bool == 0) goto Label_2761; // 0xac4 JumpB
	var_29_object = Obj(); // 0xac5 PushV
	var_29_object = var_24_object; // 0xac6 Mov
	func_2198(var_29_object); // 0xac7 NEW_2
	
Label_2761:
	return 2; // 0xac9 Return
	
Label_2762:
	return 2; // 0xaca Return
}


func_1730(var_132_float)
{
	var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); // 0x6c2 PushV
	GetPosition(var_137_cvector); // 0x6c3 Func
	GetPosition(var_138_cvector); // 0x6c5 ObjFunc
	var_139_cvector = var_138_cvector - var_137_cvector; // 0x6c7 Sub2
	var_132_float = var_139_cvector | var_139_cvector; // 0x6c8 Or2
	return 6; // 0x6c9 Return
}


func_2242(var_226_string)
{
	var_227_object = Obj(); var_228_int = 0; var_229_bool = 0; var_230_object = Obj(); var_231_int = 0; var_232_bool = 0; // 0x8c2 PushV
	CreateInvItem(var_230_object); // 0x8c3 Func
	SetItemName(var_226_string); // 0x8c5 ObjFunc
	var_233_string = "Organ"; // 0x8c7 PushS
	var_234_int = 1; // 0x8c8 PushI
	SetProperty(var_233_string, var_234_int); // 0x8c9 ObjFunc
	GetItemID(var_231_int); // 0x8cb ObjFunc
	var_235_int = 0; // 0x8cd PushI
	var_236_int = 1; // 0x8ce PushI
	AddItem(var_232_bool, var_230_object, var_235_int, var_236_int); // 0x8cf Func
	return 6; // 0x8d1 Return
}


func_1738(var_98_bool, var_99_object)
{
	var_100_bool = 0; var_101_bool = 0; // 0x6ca PushV
	IsPlayerActor(var_99_object, var_101_bool); // 0x6cb Func
	var_98_bool = var_101_bool; // 0x6cd Mov
	return 2; // 0x6ce Return
}


func_2763(var_66_bool, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0xacb PushV
	IsPlayerActor(var_67_object, var_69_bool); // 0xacc Func
	var_66_bool = var_69_bool; // 0xace Mov
	return 2; // 0xacf Return
}


func_1743(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0; // 0x6cf PushV
	var_46_string = "HasProperty"; // 0x6d0 PushS
	var_47_int = 2; // 0x6d1 PushI
	var_48_bool = IsFuncExist(var_42_object, var_46_string, var_47_int); // 0x6d2 FuncExist
	var_49_bool = var_48_bool == 0; // 0x6d3 Not
	if(var_49_bool == 0) goto Label_1751; // 0x6d4 JumpB
	var_41_bool = 0; // 0x6d5 MovB
	return 2; // 0x6d6 Return
	
Label_1751:
	HasProperty(var_43_string, var_45_bool); // 0x6d7 ObjFunc
	var_41_bool = var_45_bool; // 0x6d9 Mov
	return 2; // 0x6da Return
}


func_2768(var_26_int)
{
	var_26_int = 0; // 0xad1 MovI
	return 0; // 0xad2 Return
}


func_2771()
{
	return 0; // 0xad4 Return
}


func_2259()
{
	var_220_int = 0; // 0x8d3 PushV
	func_2192(var_220_int); // 0x8d4 NEW_2
	var_224_int = 1; // 0x8d6 PushI
	var_225_bool = var_220_int != var_224_int; // 0x8d7 Neq
	if(var_225_bool == 0) goto Label_2266; // 0x8d8 JumpB
	return 0; // 0x8d9 Return
	
Label_2266:
	var_226_string = ""; // 0x8da PushV
	var_226_string = "diseased_liver"; // 0x8db MovS
	func_2242(var_226_string); // 0x8dc NEW_2
	var_237_string = ""; // 0x8de PushV
	var_237_string = "diseased_kidney"; // 0x8df MovS
	func_2242(var_237_string); // 0x8e0 NEW_2
	var_238_string = ""; // 0x8e2 PushV
	var_238_string = "diseased_heart"; // 0x8e3 MovS
	func_2242(var_238_string); // 0x8e4 NEW_2
	var_239_string = ""; // 0x8e6 PushV
	var_239_string = "diseased_blood"; // 0x8e7 MovS
	func_2242(var_239_string); // 0x8e8 NEW_2
	return 0; // 0x8ea Return
}


func_2773(var_19_bool)
{
	var_19_bool = 0; // 0xad6 MovB
	return 0; // 0xad7 Return
}


func_2776(var_97_object)
{
	var_98_bool = 0; var_99_object = Obj(); // 0xad9 PushV
	var_99_object = var_97_object; // 0xada Mov
	func_1738(var_98_bool, var_99_object); // 0xadb NEW_2
	if(var_98_bool == 0) goto Label_2792; // 0xadd JumpB
	var_102_object = Obj(); // 0xade PushV
	func_2083(var_102_object); // 0xadf NEW_2
	var_105_float = -0.05; // 0xae1 PushF
	ReportReputationChange(var_97_object, var_102_object, var_105_float); // 0xae2 Func
	var_106_bool = 0; // 0xae4 PushV
	var_106_bool = 1; // 0xae5 MovB
	func_2283(var_106_bool); // 0xae6 NEW_2
	
Label_2792:
	func_2259(); // 0xae9 NEW_2
	var_240_bool = GlobalVars[0]; // 0xaeb PushGE
	var_240_bool = 1; // 0xaec MovB
	GlobalVars[0] = var_240_bool; // 0xaed PopGE
	var_241_int = 50; // 0xaee PushI
	var_242_int = 40; // 0xaef PushI
	SetRTEnvelope(var_241_int, var_242_int); // 0xaf0 Func
	return 0; // 0xaf2 Return
}


func_1755(var_83_bool, var_84_object, var_85_string, var_86_float, var_87_float, var_88_float)
{
	var_89_float = 0; var_90_float = 0; // 0x6db PushV
	var_91_bool = 0; var_92_object = Obj(); var_93_string = ""; // 0x6dc PushV
	var_92_object = var_84_object; // 0x6dd Mov
	var_93_string = var_85_string; // 0x6de Mov
	func_1743(var_91_bool, var_92_object, var_93_string); // 0x6df NEW_2
	var_94_bool = var_91_bool == 0; // 0x6e1 Not
	if(var_94_bool == 0) goto Label_1765; // 0x6e2 JumpB
	var_83_bool = 0; // 0x6e3 MovB
	return 2; // 0x6e4 Return
	
Label_1765:
	GetProperty(var_85_string, var_90_float); // 0x6e5 ObjFunc
	var_95_float = 0; var_96_float = 0; var_97_float = 0; var_98_float = 0; // 0x6e7 PushV
	var_96_float = var_90_float + var_86_float; // 0x6e8 Add2
	var_97_float = var_87_float; // 0x6e9 Mov
	var_98_float = var_88_float; // 0x6ea Mov
	func_2099(var_95_float, var_96_float, var_97_float, var_98_float); // 0x6eb NEW_2
	SetProperty(var_85_string, var_95_float); // 0x6ed ObjFunc
	var_83_bool = 1; // 0x6ef MovB
	return 2; // 0x6f0 Return
}


func_1256(var_2_bool)
{
	Stop(); // 0x4e8 Func
	var_15_int = 120; // 0x4ea PushI
	KillTimer(var_15_int); // 0x4eb Func
	var_2_bool = 1; // 0x4ed TMovB
	return 0; // 0x4ee Return
}


func_2283(var_106_bool)
{
	var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0; // 0x8eb PushV
	var_111_bool = var_106_bool; // 0x8ec Push
	if(var_111_bool == 0) goto Label_2372; // 0x8ed JumpB
	var_112_int = 0; var_113_int = 0; // 0x8ee PushV
	var_112_int = 0; // 0x8ef MovI
	var_114_int = 100; // 0x8f0 PushI
	var_115_int = 0; // 0x8f1 PushV
	func_2183(var_115_int); // 0x8f2 NEW_2
	var_121_int = 100; // 0x8f4 PushI
	var_122_float = var_115_int * var_121_int; // 0x8f5 Mult
	var_113_int = var_114_int + var_122_float; // 0x8f6 Add2
	func_2211(var_112_int, var_113_int); // 0x8f7 NEW_2
	var_140_int = 8; // 0x8f9 PushI
	irand(var_109_int, var_140_int); // 0x8fa Func
	var_141_int = 0; // 0x8fc PushI
	var_142_bool = var_109_int == var_141_int; // 0x8fd Eq
	if(var_142_bool == 0) goto Label_2312; // 0x8fe JumpB
	var_143_int = 0; var_144_string = ""; // 0x8ff PushV
	var_144_string = "lemon"; // 0x900 MovS
	func_2458(var_143_int, var_144_string); // 0x901 NEW_2
	var_145_int = 0; // 0x903 PushI
	var_146_int = 1; // 0x904 PushI
	AddItem(var_110_bool, var_143_int, var_145_int, var_146_int); // 0x905 Func
	goto Label_2371; // 0x907 Jump
	
Label_2371:
	goto Label_2457; // 0x943 Jump
	
Label_2457:
	return 4; // 0x999 Return
	
Label_2312:
	var_147_int = 1; // 0x908 PushI
	var_148_bool = var_109_int == var_147_int; // 0x909 Eq
	if(var_148_bool == 0) goto Label_2324; // 0x90a JumpB
	var_149_int = 0; var_150_string = ""; // 0x90b PushV
	var_150_string = "rusk"; // 0x90c MovS
	func_2458(var_149_int, var_150_string); // 0x90d NEW_2
	var_151_int = 0; // 0x90f PushI
	var_152_int = 1; // 0x910 PushI
	AddItem(var_110_bool, var_149_int, var_151_int, var_152_int); // 0x911 Func
	goto Label_2371; // 0x913 Jump
	
Label_2324:
	var_153_int = 2; // 0x914 PushI
	var_154_bool = var_109_int == var_153_int; // 0x915 Eq
	if(var_154_bool == 0) goto Label_2336; // 0x916 JumpB
	var_155_int = 0; var_156_string = ""; // 0x917 PushV
	var_156_string = "hook"; // 0x918 MovS
	func_2458(var_155_int, var_156_string); // 0x919 NEW_2
	var_157_int = 0; // 0x91b PushI
	var_158_int = 1; // 0x91c PushI
	AddItem(var_110_bool, var_155_int, var_157_int, var_158_int); // 0x91d Func
	goto Label_2371; // 0x91f Jump
	
Label_2336:
	var_159_int = 4; // 0x920 PushI
	var_160_bool = var_109_int == var_159_int; // 0x921 Eq
	if(var_160_bool == 0) goto Label_2348; // 0x922 JumpB
	var_161_int = 0; var_162_string = ""; // 0x923 PushV
	var_162_string = "syringe"; // 0x924 MovS
	func_2458(var_161_int, var_162_string); // 0x925 NEW_2
	var_163_int = 0; // 0x927 PushI
	var_164_int = 1; // 0x928 PushI
	AddItem(var_110_bool, var_161_int, var_163_int, var_164_int); // 0x929 Func
	goto Label_2371; // 0x92b Jump
	
Label_2348:
	var_165_int = 5; // 0x92c PushI
	var_166_bool = var_109_int == var_165_int; // 0x92d Eq
	if(var_166_bool == 0) goto Label_2360; // 0x92e JumpB
	var_167_int = 0; var_168_string = ""; // 0x92f PushV
	var_168_string = "watch"; // 0x930 MovS
	func_2458(var_167_int, var_168_string); // 0x931 NEW_2
	var_169_int = 0; // 0x933 PushI
	var_170_int = 1; // 0x934 PushI
	AddItem(var_110_bool, var_167_int, var_169_int, var_170_int); // 0x935 Func
	goto Label_2371; // 0x937 Jump
	
Label_2360:
	var_171_int = 6; // 0x938 PushI
	var_172_bool = var_109_int == var_171_int; // 0x939 Eq
	if(var_172_bool == 0) goto Label_2371; // 0x93a JumpB
	var_173_int = 0; var_174_string = ""; // 0x93b PushV
	var_174_string = "razor"; // 0x93c MovS
	func_2458(var_173_int, var_174_string); // 0x93d NEW_2
	var_175_int = 0; // 0x93f PushI
	var_176_int = 1; // 0x940 PushI
	AddItem(var_110_bool, var_173_int, var_175_int, var_176_int); // 0x941 Func
	
Label_2372:
	var_177_int = 0; var_178_int = 0; // 0x944 PushV
	var_177_int = 0; // 0x945 MovI
	var_179_int = 50; // 0x946 PushI
	var_180_int = 0; // 0x947 PushV
	func_2183(var_180_int); // 0x948 NEW_2
	var_181_int = 50; // 0x94a PushI
	var_182_float = var_180_int * var_181_int; // 0x94b Mult
	var_178_int = var_179_int + var_182_float; // 0x94c Add2
	func_2211(var_177_int, var_178_int); // 0x94d NEW_2
	var_183_int = 7; // 0x94f PushI
	irand(var_109_int, var_183_int); // 0x950 Func
	var_184_int = 0; // 0x952 PushI
	var_185_bool = var_109_int == var_184_int; // 0x953 Eq
	if(var_185_bool == 0) goto Label_2398; // 0x954 JumpB
	var_186_int = 0; var_187_string = ""; // 0x955 PushV
	var_187_string = "beads"; // 0x956 MovS
	func_2458(var_186_int, var_187_string); // 0x957 NEW_2
	var_188_int = 0; // 0x959 PushI
	var_189_int = 1; // 0x95a PushI
	AddItem(var_110_bool, var_186_int, var_188_int, var_189_int); // 0x95b Func
	goto Label_2457; // 0x95d Jump
	
Label_2398:
	var_190_int = 1; // 0x95e PushI
	var_191_bool = var_109_int == var_190_int; // 0x95f Eq
	if(var_191_bool == 0) goto Label_2410; // 0x960 JumpB
	var_192_int = 0; var_193_string = ""; // 0x961 PushV
	var_193_string = "bracelet"; // 0x962 MovS
	func_2458(var_192_int, var_193_string); // 0x963 NEW_2
	var_194_int = 0; // 0x965 PushI
	var_195_int = 1; // 0x966 PushI
	AddItem(var_110_bool, var_192_int, var_194_int, var_195_int); // 0x967 Func
	goto Label_2457; // 0x969 Jump
	
Label_2410:
	var_196_int = 2; // 0x96a PushI
	var_197_bool = var_109_int == var_196_int; // 0x96b Eq
	if(var_197_bool == 0) goto Label_2422; // 0x96c JumpB
	var_198_int = 0; var_199_string = ""; // 0x96d PushV
	var_199_string = "ear_ring"; // 0x96e MovS
	func_2458(var_198_int, var_199_string); // 0x96f NEW_2
	var_200_int = 0; // 0x971 PushI
	var_201_int = 1; // 0x972 PushI
	AddItem(var_110_bool, var_198_int, var_200_int, var_201_int); // 0x973 Func
	goto Label_2457; // 0x975 Jump
	
Label_2422:
	var_202_int = 3; // 0x976 PushI
	var_203_bool = var_109_int == var_202_int; // 0x977 Eq
	if(var_203_bool == 0) goto Label_2434; // 0x978 JumpB
	var_204_int = 0; var_205_string = ""; // 0x979 PushV
	var_205_string = "gold_ring"; // 0x97a MovS
	func_2458(var_204_int, var_205_string); // 0x97b NEW_2
	var_206_int = 0; // 0x97d PushI
	var_207_int = 1; // 0x97e PushI
	AddItem(var_110_bool, var_204_int, var_206_int, var_207_int); // 0x97f Func
	goto Label_2457; // 0x981 Jump
	
Label_2434:
	var_208_int = 4; // 0x982 PushI
	var_209_bool = var_109_int == var_208_int; // 0x983 Eq
	if(var_209_bool == 0) goto Label_2446; // 0x984 JumpB
	var_210_int = 0; var_211_string = ""; // 0x985 PushV
	var_211_string = "silver_ring"; // 0x986 MovS
	func_2458(var_210_int, var_211_string); // 0x987 NEW_2
	var_212_int = 0; // 0x989 PushI
	var_213_int = 1; // 0x98a PushI
	AddItem(var_110_bool, var_210_int, var_212_int, var_213_int); // 0x98b Func
	goto Label_2457; // 0x98d Jump
	
Label_2446:
	var_214_int = 5; // 0x98e PushI
	var_215_bool = var_109_int == var_214_int; // 0x98f Eq
	if(var_215_bool == 0) goto Label_2457; // 0x990 JumpB
	var_216_int = 0; var_217_string = ""; // 0x991 PushV
	var_217_string = "flower"; // 0x992 MovS
	func_2458(var_216_int, var_217_string); // 0x993 NEW_2
	var_218_int = 0; // 0x995 PushI
	var_219_int = 1; // 0x996 PushI
	AddItem(var_110_bool, var_216_int, var_218_int, var_219_int); // 0x997 Func
}


func_1777(var_142_float, var_143_object, var_144_float)
{
	var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; // 0x6f1 PushV
	var_149_bool = 0; var_150_object = Obj(); var_151_string = ""; // 0x6f2 PushV
	var_150_object = var_143_object; // 0x6f3 Mov
	var_151_string = "disease"; // 0x6f4 MovS
	func_1743(var_149_bool, var_150_object, var_151_string); // 0x6f5 NEW_2
	var_152_bool = var_149_bool == 0; // 0x6f7 Not
	if(var_152_bool == 0) goto Label_1787; // 0x6f8 JumpB
	var_142_float = 0; // 0x6f9 MovI
	return 4; // 0x6fa Return
	
Label_1787:
	var_147_float = 0; // 0x6fb MovI
	var_153_bool = 0; var_154_object = Obj(); var_155_string = ""; // 0x6fc PushV
	var_154_object = var_143_object; // 0x6fd Mov
	var_155_string = "armor_disease"; // 0x6fe MovS
	func_1743(var_153_bool, var_154_object, var_155_string); // 0x6ff NEW_2
	if(var_153_bool == 0) goto Label_1799; // 0x701 JumpB
	var_156_string = "armor_disease"; // 0x702 PushS
	GetProperty(var_156_string, var_147_float); // 0x703 ObjFunc
	var_157_int = 100; // 0x705 PushI
	var_147_float = var_147_float / var_147_float; // 0x706 Div2
	
Label_1799:
	var_158_bool = 0; var_159_object = Obj(); var_160_string = ""; // 0x707 PushV
	var_159_object = var_143_object; // 0x708 Mov
	var_160_string = "immunity"; // 0x709 MovS
	func_1743(var_158_bool, var_159_object, var_160_string); // 0x70a NEW_2
	if(var_158_bool == 0) goto Label_1817; // 0x70c JumpB
	var_161_string = "immunity"; // 0x70d PushS
	GetProperty(var_161_string, var_148_float); // 0x70e ObjFunc
	var_147_float = var_147_float + var_148_float; // 0x710 Add2
	var_162_bool = 0; var_163_object = Obj(); var_164_string = ""; var_165_float = 0; var_166_float = 0; var_167_float = 0; // 0x711 PushV
	var_163_object = var_143_object; // 0x712 Mov
	var_164_string = "immunity"; // 0x713 MovS
	var_165_float = -var_144_float; // 0x714 Neg2
	var_166_float = 0; // 0x715 MovI
	var_167_float = 1; // 0x716 MovI
	func_1755(var_162_bool, var_163_object, var_164_string, var_165_float, var_166_float, var_167_float); // 0x717 NEW_2
	
Label_1817:
	var_180_int = 1; // 0x719 PushI
	var_181_bool = var_147_float >= var_180_int; // 0x71a GE
	if(var_181_bool == 0) goto Label_1822; // 0x71b JumpB
	var_142_float = 0.0; // 0x71c MovF
	return 4; // 0x71d Return
	
Label_1822:
	var_182_int = 1; // 0x71e PushI
	var_183_int = var_182_int - var_147_float; // 0x71f Sub
	var_184_int = 2; // 0x720 PushI
	var_185_float = var_183_int / var_184_int; // 0x721 Div
	var_144_float = var_144_float * var_185_float; // 0x722 Mult2
	var_186_bool = 0; var_187_object = Obj(); var_188_string = ""; var_189_float = 0; var_190_float = 0; var_191_float = 0; // 0x723 PushV
	var_187_object = var_143_object; // 0x724 Mov
	var_188_string = "disease"; // 0x725 MovS
	var_189_float = var_144_float; // 0x726 Mov
	var_190_float = 0; // 0x727 MovI
	var_191_float = 1; // 0x728 MovI
	func_1755(var_186_bool, var_187_object, var_188_string, var_189_float, var_190_float, var_191_float); // 0x729 NEW_2
	var_192_bool = 0; var_193_object = Obj(); // 0x72b PushV
	var_193_object = var_143_object; // 0x72c Mov
	func_1738(var_192_bool, var_193_object); // 0x72d NEW_2
	if(var_192_bool == 0) goto Label_1844; // 0x72f JumpB
	var_196_float = 0; // 0x730 PushV
	var_196_float = var_144_float; // 0x731 Mov
	func_2153(var_196_float); // 0x732 NEW_2
	
Label_1844:
	var_142_float = var_144_float; // 0x734 Mov
	return 4; // 0x735 Return
}


func_2803(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0xaf4 PushV
	var_29_object = var_27_object; // 0xaf5 Mov
	func_1887(var_28_bool, var_29_object); // 0xaf6 NEW_2
	if(var_28_bool == 0) goto Label_2811; // 0xaf8 JumpB
	var_26_int = 2; // 0xaf9 MovI
	goto Label_2812; // 0xafa Jump
	
Label_2812:
	return 0; // 0xafc Return
	
Label_2811:
	var_26_int = 0; // 0xafb MovI
}


func_1272(var_0_bool, var_66_bool)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x4f8 PushV
	GetDirection(var_69_cvector); // 0x4f9 Func
	var_71_cvector = CVector(0,0,0); var_72_object = Obj(); // 0x4fb PushV
	var_72_object = var_0_bool; // 0x4fc MovT
	func_1723(var_72_object); // 0x4fd NEW_2
	var_70_cvector = var_71_cvector; // 0x4fe Mov
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x500 PushV
	var_78_cvector = var_69_cvector; // 0x501 Mov
	var_79_cvector = var_70_cvector; // 0x502 Mov
	func_2110(var_77_float, var_78_cvector, var_79_cvector); // 0x503 NEW_2
	var_85_float = -0.34202; // 0x505 PushF
	var_66_bool = var_77_float >= var_85_float; // 0x506 GE2
	return 4; // 0x507 Return
}


func_2813(var_66_object)
{
	var_67_object = Obj(); // 0xafe PushV
	var_67_object = var_66_object; // 0xaff Mov
	TaskCall(7); // 0xb00 TaskCall
	func_1561(var_68_object, var_69_cvector, var_70_bool, var_67_object); // 0xb01 NEW_2
	TaskReturn(); // 0xb02 TaskReturn
	return 0; // 0xb04 Return
}


func_768(var_91_bool)
{
	var_91_bool = 1; // 0x300 MovB
	return 0; // 0x301 Return
}


func_770()
{
	StopAnimation(); // 0x302 Func
	StopGroup0(); // 0x304 Func
	return 0; // 0x306 Return
}


func_775(var_65_object)
{
	var_66_bool = 0; var_67_object = Obj(); // 0x308 PushV
	var_67_object = var_65_object; // 0x309 Mov
	func_2763(var_66_bool, var_67_object); // 0x30a NEW_2
	if(var_66_bool == 0) goto Label_785; // 0x30c JumpB
	var_70_object = Obj(); // 0x30d PushV
	var_70_object = var_65_object; // 0x30e Mov
	func_831(var_70_object); // 0x30f NEW_2
	
Label_785:
	return 0; // 0x311 Return
}


func_1288(var_66_object)
{
	var_70_bool = 0; var_71_bool = 0; // 0x508 PushV
	Face(var_66_object); // 0x509 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_float = 0; // 0x50b PushV
	var_73_object = var_66_object; // 0x50c Mov
	var_74_float = 0.1; // 0x50d MovF
	func_2118(var_72_bool, var_73_object, var_74_float); // 0x50e NEW_2
	var_104_string = "all"; // 0x510 PushS
	var_105_string = "bow"; // 0x511 PushS
	PlayAnimation(var_104_string, var_105_string); // 0x512 Func
	WaitForAnimEnd(); // 0x514 Func
	StopAsync(); // 0x516 Func
	var_106_float = 0; // 0x518 PushV
	var_106_float = -0.06; // 0x519 MovF
	func_2163(var_106_float); // 0x51a NEW_2
	var_110_bool = 0; var_111_object = Obj(); var_112_string = ""; var_113_float = 0; var_114_float = 0; var_115_float = 0; // 0x51c PushV
	var_111_object = var_66_object; // 0x51d Mov
	var_112_string = "health"; // 0x51e MovS
	var_113_float = -0.06; // 0x51f MovF
	var_114_float = 0; // 0x520 MovI
	var_115_float = 1; // 0x521 MovI
	func_1755(var_110_bool, var_111_object, var_112_string, var_113_float, var_114_float, var_115_float); // 0x522 NEW_2
	var_116_string = "disease"; // 0x524 PushS
	HasProperty(var_116_string, var_71_bool); // 0x525 Func
	var_117_bool = var_71_bool; // 0x527 Push
	if(var_117_bool == 0) goto Label_1325; // 0x528 JumpB
	var_118_string = "disease"; // 0x529 PushS
	var_119_int = 0; // 0x52a PushI
	SetProperty(var_118_string, var_119_int); // 0x52b Func
	
Label_1325:
	var_120_object = Obj(); // 0x52d PushV
	var_120_object = var_66_object; // 0x52e Mov
	func_1367(var_66_object, var_70_bool, var_71_bool, var_120_object); // 0x52f NEW_2
	return 2; // 0x531 Return
}


func_1846(var_34_bool)
{
	var_36_bool = 0; var_37_bool = 0; // 0x736 PushV
	IsDead(var_37_bool); // 0x737 ObjFunc
	var_34_bool = var_37_bool; // 0x739 Mov
	return 2; // 0x73a Return
}


func_1337(var_28_cvector, var_29_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; // 0x539 PushV
	GetPosition(var_36_cvector); // 0x53a Func
	GetPosition(var_37_cvector); // 0x53c TObjFunc
	GetDirection(var_38_cvector); // 0x53e Func
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x540 PushV
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x541 PushV
	var_45_cvector = var_36_cvector - var_37_cvector; // 0x542 Sub2
	func_2089(var_44_cvector, var_45_cvector); // 0x543 NEW_2
	var_51_float = 0.75; // 0x545 PushF
	var_52_float = var_38_cvector * var_51_float; // 0x546 Mult
	var_43_cvector = var_44_cvector + var_52_float; // 0x547 Add2
	func_2089(var_42_cvector, var_43_cvector); // 0x548 NEW_2
	var_39_cvector = var_42_cvector; // 0x549 Mov
	var_53_int = 32; // 0x54b PushI
	var_54_float = 7000.0; // 0x54c PushF
	FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, var_53_int, var_54_float); // 0x54d Func
	var_55_int = 100; // 0x54f PushI
	var_41_float = var_41_float - var_55_int; // 0x550 Sub2
	var_56_int = 0; // 0x551 PushI
	var_57_bool = var_41_float < var_56_int; // 0x552 LT
	if(var_57_bool == 0) goto Label_1365; // 0x553 JumpB
	var_41_float = 0; // 0x554 MovI
	
Label_1365:
	var_28_cvector = var_40_cvector * var_41_float; // 0x555 Mult2
	return 12; // 0x556 Return
}


func_1851(var_23_bool, var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x73b PushV
	var_29_bool = var_24_object == 0; // 0x73c NullEq
	if(var_29_bool == 0) goto Label_1856; // 0x73d JumpB
	var_23_bool = 0; // 0x73e MovB
	return 4; // 0x73f Return
	
Label_1856:
	var_30_bool = 0; // 0x740 PushV
	var_30_bool = 0; // 0x741 MovB
	var_31_string = "IsDead"; // 0x742 PushS
	var_32_int = 1; // 0x743 PushI
	var_33_bool = IsFuncExist(var_24_object, var_31_string, var_32_int); // 0x744 FuncExist
	if(var_33_bool == 0) goto Label_1868; // 0x745 JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0x746 PushV
	var_35_object = var_24_object; // 0x747 Mov
	func_1846(var_35_object); // 0x748 NEW_2
	if(var_34_bool == 0) goto Label_1868; // 0x74a JumpB
	var_30_bool = 1; // 0x74b MovB
	
Label_1868:
	if(var_30_bool == 0) goto Label_1871; // 0x74c JumpB
	var_23_bool = 0; // 0x74d MovB
	return 4; // 0x74e Return
	
Label_1871:
	GetScene(var_27_object); // 0x74f Func
	var_38_bool = var_27_object == 0; // 0x751 NullEq
	if(var_38_bool == 0) goto Label_1877; // 0x752 JumpB
	var_23_bool = 0; // 0x753 MovB
	return 4; // 0x754 Return
	
Label_1877:
	GetScene(var_28_object); // 0x755 ObjFunc
	var_39_bool = var_27_object != var_28_object; // 0x757 Neq
	if(var_39_bool == 0) goto Label_1883; // 0x758 JumpB
	var_23_bool = 0; // 0x759 MovB
	return 4; // 0x75a Return
	
Label_1883:
	var_23_bool = 1; // 0x75b MovB
	return 4; // 0x75c Return
}


func_831(var_70_object)
{
	var_71_bool = 0; var_72_bool = 0; // 0x33f PushV
	
Label_832:
	var_73_bool = 0; var_74_object = Obj(); // 0x340 PushV
	var_74_object = var_70_object; // 0x341 Mov
	TaskCall(4); // 0x342 TaskCall
	func_939(var_73_bool, var_74_object); // 0x343 NEW_2
	TaskReturn(); // 0x344 TaskReturn
	if(var_75_bool == 0) goto Label_879; // 0x346 JumpB
	Face(var_70_object); // 0x347 Func
	WaitForAnimEnd(var_72_bool); // 0x349 Func
	var_128_bool = var_72_bool == 0; // 0x34b Not
	if(var_128_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_879; // 0x34d Jump
	
Label_879:
	return 2; // 0x36f Return
	
Label_846:
	var_129_string = "all"; // 0x34e PushS
	var_130_string = "dattack_begin"; // 0x34f PushS
	PlayAnimation(var_129_string, var_130_string); // 0x350 Func
	WaitForAnimEnd(var_72_bool); // 0x352 Func
	var_131_bool = var_72_bool == 0; // 0x354 Not
	if(var_131_bool == 0) goto Label_855; // 0x355 JumpB
	goto Label_879; // 0x356 Jump
	
Label_855:
	var_132_float = 0; var_133_object = Obj(); // 0x357 PushV
	var_133_object = var_70_object; // 0x358 Mov
	func_1730(var_133_object); // 0x359 NEW_2
	var_140_float = 90000.0; // 0x35b PushF
	var_141_bool = var_132_float <= var_140_float; // 0x35c LE
	if(var_141_bool == 0) goto Label_867; // 0x35d JumpB
	var_142_float = 0; var_143_object = Obj(); var_144_float = 0; // 0x35e PushV
	var_143_object = var_70_object; // 0x35f Mov
	var_144_float = 0.2; // 0x360 MovF
	func_1777(var_142_float, var_143_object, var_144_float); // 0x361 NEW_2
	
Label_867:
	var_200_string = "all"; // 0x363 PushS
	var_201_string = "dattack_end"; // 0x364 PushS
	PlayAnimation(var_200_string, var_201_string); // 0x365 Func
	WaitForAnimEnd(var_72_bool); // 0x367 Func
	var_202_bool = var_72_bool == 0; // 0x369 Not
	if(var_202_bool == 0) goto Label_876; // 0x36a JumpB
	goto Label_879; // 0x36b Jump
	
Label_876:
	StopAsync(); // 0x36c Func
	goto Label_832; // 0x36e Jump
}


func_1367(var_0_bool, var_1_bool, var_2_bool, var_120_object)
{
	var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0; var_126_cvector = CVector(0,0,0); var_127_float = 0; var_128_bool = 0; var_129_cvector = CVector(0,0,0); var_130_float = 0; // 0x557 PushV
	var_0_bool = var_120_object; // 0x558 TMov
	var_131_cvector = CVector(0,0,0); var_132_float = 0; // 0x559 PushV
	var_132_float = 1.74533; // 0x55a MovF
	func_1337(var_131_cvector, var_132_float); // 0x55b NEW_2
	var_126_cvector = var_131_cvector; // 0x55c Mov
	var_127_float = var_126_cvector | var_126_cvector; // 0x55e Or2
	var_161_float = 2500.0; // 0x55f PushF
	var_162_bool = var_127_float < var_161_float; // 0x560 LT
	if(var_162_bool == 0) goto Label_1396; // 0x561 JumpB
	var_163_cvector = CVector(0,0,0); var_164_float = 0; // 0x562 PushV
	var_164_float = 2.61799; // 0x563 MovF
	func_1337(var_163_cvector, var_164_float); // 0x564 NEW_2
	var_126_cvector = var_163_cvector; // 0x565 Mov
	var_127_float = var_126_cvector | var_126_cvector; // 0x567 Or2
	var_165_float = 2500.0; // 0x568 PushF
	var_166_bool = var_127_float < var_165_float; // 0x569 LT
	if(var_166_bool == 0) goto Label_1396; // 0x56a JumpB
	var_167_string = "Can't retreat, distance: "; // 0x56b PushS
	var_168_float = sqrt(var_127_float); // 0x56c Sqrt
	var_169_int = var_167_string + var_168_float; // 0x56d Add
	Trace(var_169_int); // 0x56e Func
	var_170_float = 0.5; // 0x570 PushF
	Sleep(var_170_float); // 0x571 Func
	return 10; // 0x573 Return
	
Label_1396:
	var_171_float = GetByIndex(var_126_cvector, 0); // 0x574 PushE
	var_172_float = GetByIndex(var_126_cvector, 2); // 0x575 PushE
	Rotate(var_171_float, var_172_float); // 0x576 Func
	var_173_cvector = CVector(0,0,0); // 0x578 PushV
	func_1718(var_173_cvector); // 0x579 NEW_2
	var_1_bool = var_173_cvector + var_126_cvector; // 0x57b Add2
	var_176_int = 120; // 0x57c PushI
	var_177_float = 0.5; // 0x57d PushF
	SetTimer(var_176_int, var_177_float); // 0x57e Func
	var_2_bool = 0; // 0x580 TMovB
	
Label_1409:
	var_178_int = 1; // 0x581 PushI
	MovePoint(var_178_int, var_178_int, var_128_bool); // 0x582 Func
	var_179_bool = var_128_bool; // 0x584 Push
	if(var_179_bool == 0) goto Label_1437; // 0x585 JumpB
	var_180_bool = var_0_bool == 0; // 0x586 NullEq
	if(var_180_bool == 0) goto Label_1418; // 0x587 JumpB
	goto Label_1439; // 0x588 Jump
	
Label_1439:
	return 10; // 0x59f Return
	
Label_1418:
	var_181_cvector = CVector(0,0,0); var_182_float = 0; // 0x58a PushV
	var_182_float = 2.61799; // 0x58b MovF
	func_1337(var_181_cvector, var_182_float); // 0x58c NEW_2
	var_129_cvector = var_181_cvector; // 0x58d Mov
	var_130_float = var_129_cvector | var_129_cvector; // 0x58f Or2
	var_183_float = 2500.0; // 0x590 PushF
	var_184_bool = var_130_float >= var_183_float; // 0x591 GE
	if(var_184_bool == 0) goto Label_1436; // 0x592 JumpB
	var_185_cvector = CVector(0,0,0); // 0x593 PushV
	func_1718(var_185_cvector); // 0x594 NEW_2
	var_1_bool = var_185_cvector + var_129_cvector; // 0x596 Add2
	var_186_int = 120; // 0x597 PushI
	var_187_float = 0.5; // 0x598 PushF
	SetTimer(var_186_int, var_187_float); // 0x599 Func
	goto Label_1437; // 0x59b Jump
	
Label_1437:
	var_188_bool = var_2_bool == 0; // 0x59d Not
	if(var_188_bool == 0) goto Label_1409; // 0x59e JumpB
	
Label_1436:
	goto Label_1439; // 0x59c Jump
}


func_1887(var_19_bool, var_20_object)
{
	var_21_int = 0; var_22_int = 0; // 0x75f PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x760 PushV
	var_24_object = var_20_object; // 0x761 Mov
	func_1851(var_23_bool, var_24_object); // 0x762 NEW_2
	var_40_bool = var_23_bool == 0; // 0x764 Not
	if(var_40_bool == 0) goto Label_1896; // 0x765 JumpB
	var_19_bool = 0; // 0x766 MovB
	return 2; // 0x767 Return
	
Label_1896:
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x768 PushV
	var_42_object = var_20_object; // 0x769 Mov
	var_43_string = "noaccess"; // 0x76a MovS
	func_1743(var_41_bool, var_42_object, var_43_string); // 0x76b NEW_2
	var_50_bool = var_41_bool == 0; // 0x76d Not
	if(var_50_bool == 0) goto Label_1905; // 0x76e JumpB
	var_19_bool = 1; // 0x76f MovB
	return 2; // 0x770 Return
	
Label_1905:
	var_51_string = "noaccess"; // 0x771 PushS
	GetProperty(var_51_string, var_22_int); // 0x772 ObjFunc
	var_52_int = 0; // 0x774 PushI
	var_19_bool = var_22_int == var_52_int; // 0x775 Eq2
	return 2; // 0x776 Return
}


func_367(var_2_bool)
{
	var_15_int = 110; // 0x16f PushI
	KillTimer(var_15_int); // 0x170 Func
	var_2_bool = 0; // 0x172 TMovB
	func_503(var_13_cvector, var_14_bool); // 0x174 NEW_2
	return 0; // 0x176 Return
}


func_880()
{
	StopAsync(); // 0x370 Func
	StopAnimation(); // 0x372 Func
	return 0; // 0x374 Return
}


func_375(var_2_bool)
{
	var_63_int = 110; // 0x177 PushI
	KillTimer(var_63_int); // 0x178 Func
	var_2_bool = 0; // 0x17a TMovB
	func_510(var_18_bool, var_19_int); // 0x17c NEW_2
	return 0; // 0x17e Return
}


func_1911(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; // 0x777 PushV
	var_46_bool = var_31_object == 0; // 0x778 NullEq
	if(var_46_bool == 0) goto Label_1915; // 0x779 JumpB
	return 14; // 0x77a Return
	
Label_1915:
	IsDead(var_39_bool); // 0x77b Func
	var_47_bool = var_39_bool; // 0x77d Push
	if(var_47_bool == 0) goto Label_1920; // 0x77e JumpB
	return 14; // 0x77f Return
	
Label_1920:
	GetSecondaryAnimationType(var_40_int); // 0x780 Func
	var_48_int = 0; // 0x782 PushI
	var_49_bool = var_40_int < var_48_int; // 0x783 LT
	if(var_49_bool == 0) goto Label_1926; // 0x784 JumpB
	return 14; // 0x785 Return
	
Label_1926:
	GetPosition(var_41_cvector); // 0x786 ObjFunc
	GetPosition(var_42_cvector); // 0x788 Func
	GetDirection(var_43_cvector); // 0x78a Func
	var_44_cvector = var_42_cvector - var_41_cvector; // 0x78c Sub2
	var_50_float = GetByIndex(var_44_cvector, 0); // 0x78d PushE
	var_51_float = GetByIndex(var_43_cvector, 0); // 0x78e PushE
	var_52_float = var_50_float * var_51_float; // 0x78f Mult
	var_53_float = GetByIndex(var_44_cvector, 2); // 0x790 PushE
	var_54_float = GetByIndex(var_43_cvector, 2); // 0x791 PushE
	var_55_float = var_53_float * var_54_float; // 0x792 Mult
	var_56_int = var_52_float + var_55_float; // 0x793 Add
	var_57_int = 0; // 0x794 PushI
	var_58_bool = var_56_int >= var_57_int; // 0x795 GE
	if(var_58_bool == 0) goto Label_1945; // 0x796 JumpB
	var_45_string = "fhit"; // 0x797 MovS
	goto Label_1946; // 0x798 Jump
	
Label_1946:
	var_59_string = "hit_react"; // 0x79a PushS
	var_60_string = "1"; // 0x79b PushS
	var_61_int = var_45_string + var_60_string; // 0x79c Add
	var_62_string = "2"; // 0x79d PushS
	var_63_int = var_45_string + var_62_string; // 0x79e Add
	var_64_int = -10; // 0x79f PushI
	FadeSecondaryAnimation(var_59_string, var_61_int, var_63_int, var_64_int); // 0x7a0 Func
	return 14; // 0x7a2 Return
	
Label_1945:
	var_45_string = "bhit"; // 0x799 MovS
}


func_392(var_2_bool, var_15_object)
{
	var_16_bool = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; // 0x188 PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x189 PushV
	var_21_object = var_15_object; // 0x18a Mov
	func_1887(var_20_bool, var_21_object); // 0x18b NEW_2
	var_54_bool = var_20_bool == 0; // 0x18d Not
	if(var_54_bool == 0) goto Label_400; // 0x18e JumpB
	return 4; // 0x18f Return
	
Label_400:
	var_55_bool = var_2_bool; // 0x190 PushT
	if(var_55_bool == 0) goto Label_403; // 0x191 JumpB
	return 4; // 0x192 Return
	
Label_403:
	IsPlayerActor(var_15_object, var_18_bool); // 0x193 Func
	var_56_bool = var_18_bool == 0; // 0x195 Not
	if(var_56_bool == 0) goto Label_408; // 0x196 JumpB
	return 4; // 0x197 Return
	
Label_408:
	var_57_int = 0; var_58_object = Obj(); // 0x198 PushV
	var_58_object = var_15_object; // 0x199 Mov
	func_2660(var_58_object); // 0x19a NEW_2
	var_19_int = var_57_int; // 0x19b Mov
	var_59_int = 0; // 0x19d PushI
	var_60_bool = var_19_int > var_59_int; // 0x19e GT
	if(var_60_bool == 0) goto Label_431; // 0x19f JumpB
	var_61_int = 1; // 0x1a0 PushI
	var_62_bool = var_19_int > var_61_int; // 0x1a1 GT
	if(var_62_bool == 0) goto Label_422; // 0x1a2 JumpB
	func_375(var_19_int); // 0x1a4 NEW_2
	
Label_422:
	var_64_object = Obj(); // 0x1a6 PushV
	var_64_object = var_15_object; // 0x1a7 Mov
	func_2663(var_64_object); // 0x1a8 NEW_2
	var_2_bool = 1; // 0x1aa TMovB
	var_203_int = 110; // 0x1ab PushI
	var_204_float = 10.0; // 0x1ac PushF
	SetTimer(var_203_int, var_204_float); // 0x1ad Func
	
Label_431:
	return 4; // 0x1af Return
}


func_2458(var_133_int, var_134_string)
{
	var_135_int = 0; var_136_int = 0; // 0x99a PushV
	GetInvItemByName(var_136_int, var_134_string); // 0x99b Func
	var_133_int = var_136_int; // 0x99d Mov
	return 2; // 0x99e Return
}


func_2463(var_15_object)
{
	var_16_object = Obj(); // 0x9a0 PushV
	var_16_object = var_15_object; // 0x9a1 Mov
	TaskCall(0); // 0x9a2 TaskCall
	func_0(var_16_object); // 0x9a3 NEW_2
	TaskReturn(); // 0x9a4 TaskReturn
	return 0; // 0x9a6 Return
}


func_1955(var_18_object, var_19_int, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_int = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); // 0x7a3 PushV
	var_39_bool = 0; // 0x7a4 PushV
	var_39_bool = 0; // 0x7a5 MovB
	var_40_bool = 0; // 0x7a6 PushV
	var_40_bool = 0; // 0x7a7 MovB
	var_41_object = var_18_object; // 0x7a8 Push
	if(var_41_object == 0) goto Label_1966; // 0x7a9 JumpB
	var_42_int = 4; // 0x7aa PushI
	var_43_bool = var_19_int != var_42_int; // 0x7ab Neq
	if(var_43_bool == 0) goto Label_1966; // 0x7ac JumpB
	var_40_bool = 1; // 0x7ad MovB
	
Label_1966:
	if(var_40_bool == 0) goto Label_1971; // 0x7ae JumpB
	var_44_int = 5; // 0x7af PushI
	var_45_bool = var_19_int != var_44_int; // 0x7b0 Neq
	if(var_45_bool == 0) goto Label_1971; // 0x7b1 JumpB
	var_39_bool = 1; // 0x7b2 MovB
	
Label_1971:
	if(var_39_bool == 0) goto Label_2018; // 0x7b3 JumpB
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x7b4 PushV
	var_48_cvector = CVector(0,0,0); var_49_object = Obj(); // 0x7b5 PushV
	var_49_object = var_18_object; // 0x7b6 Mov
	func_1723(var_49_object); // 0x7b7 NEW_2
	var_47_cvector = var_48_cvector; // 0x7b8 Mov
	func_2089(var_46_cvector, var_47_cvector); // 0x7ba NEW_2
	var_30_cvector = var_46_cvector; // 0x7bb Mov
	CreateVectorVector(var_31_object); // 0x7bd Func
	var_32_int = 1; // 0x7bf MovI
	
Label_1984:
	var_59_string = "hit"; // 0x7c0 PushS
	var_60_int = var_59_string + var_32_int; // 0x7c1 Add
	GetGeometryLocator(var_60_int, var_33_bool, var_34_cvector, var_35_cvector); // 0x7c2 Func
	var_61_bool = var_33_bool == 0; // 0x7c4 Not
	if(var_61_bool == 0) goto Label_1991; // 0x7c5 JumpB
	goto Label_2000; // 0x7c6 Jump
	
Label_2000:
	size(var_36_int); // 0x7d0 ObjFunc
	var_62_int = var_36_int; // 0x7d2 Push
	if(var_62_int == 0) goto Label_2017; // 0x7d3 JumpB
	irand(var_37_int, var_36_int); // 0x7d4 Func
	get(var_38_cvector, var_37_int); // 0x7d6 ObjFunc
	var_63_object = Obj(); var_64_int = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x7d8 PushV
	var_63_object = var_18_object; // 0x7d9 Mov
	var_64_int = var_19_int; // 0x7da Mov
	var_65_float = var_20_float; // 0x7db Mov
	var_66_cvector = var_38_cvector; // 0x7dc Mov
	var_67_cvector = -var_30_cvector; // 0x7dd Neg2
	func_2023(var_65_float, var_66_cvector, var_67_cvector); // 0x7de NEW_2
	return 18; // 0x7e0 Return
	
Label_2017:
	var_31_object = 0; // 0x7e1 SetNull
	
Label_2018:
	var_108_object = Obj(); // 0x7e2 PushV
	var_108_object = var_18_object; // 0x7e3 Mov
	func_1911(var_108_object); // 0x7e4 NEW_2
	return 18; // 0x7e6 Return
	
Label_1991:
	var_109_int = var_35_cvector | var_30_cvector; // 0x7c7 Or
	var_110_float = 0.70711; // 0x7c8 PushF
	var_111_bool = var_109_int >= var_110_float; // 0x7c9 GE
	if(var_111_bool == 0) goto Label_1997; // 0x7ca JumpB
	add(var_34_cvector); // 0x7cb ObjFunc
	
Label_1997:
	var_112_int = 1; // 0x7cd PushI
	var_32_int = var_32_int + var_112_int; // 0x7ce Add2
	goto Label_1984; // 0x7cf Jump
}


func_939(var_73_bool, var_74_object)
{
	var_77_bool = 0; var_78_object = Obj(); var_79_float = 0; var_80_float = 0; var_81_bool = 0; var_82_bool = 0; // 0x3ac PushV
	var_78_object = var_74_object; // 0x3ad Mov
	var_79_float = 150; // 0x3ae MovI
	var_80_float = 3000; // 0x3af MovI
	var_81_bool = 0; // 0x3b0 MovB
	var_82_bool = 1; // 0x3b1 MovB
	func_952(var_73_bool, var_74_object, var_77_bool, var_78_object, var_79_float, var_80_float, var_81_bool, var_82_bool); // 0x3b2 NEW_2
	var_73_bool = var_77_bool; // 0x3b3 Mov
	return 0; // 0x3b5 Return
}


func_432(var_0_bool, var_1_bool)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; // 0x1b0 PushV
	var_0_bool = 0; // 0x1b1 TMovB
	var_1_bool = 0; // 0x1b2 TMovB
	var_35_float = 0.5; // 0x1b3 PushF
	rand(var_29_float, var_35_float); // 0x1b4 Func
	Sleep(var_29_float); // 0x1b6 Func
	
Label_440:
	var_36_bool = var_0_bool == 0; // 0x1b8 Not
	if(var_36_bool == 0) goto Label_490; // 0x1b9 JumpB
	var_37_bool = var_1_bool == 0; // 0x1ba Not
	if(var_37_bool == 0) goto Label_459; // 0x1bb JumpB
	
Label_444:
	GetPosition(var_31_cvector); // 0x1bc Func
	var_38_float = 0; // 0x1be PushV
	func_491(var_38_float); // 0x1bf NEW_2
	GetRandomPFPointInCircle(var_30_cvector, var_31_cvector, var_38_float, var_32_bool); // 0x1c1 Func
	var_41_bool = var_32_bool; // 0x1c3 Push
	if(var_41_bool == 0) goto Label_454; // 0x1c4 JumpB
	goto Label_458; // 0x1c5 Jump
	
Label_458:
	goto Label_460; // 0x1ca Jump
	
Label_460:
	var_42_object = Obj(); var_43_cvector = CVector(0,0,0); // 0x1cc PushV
	var_43_cvector = var_30_cvector; // 0x1cd Mov
	func_519(var_42_object, var_43_cvector); // 0x1ce NEW_2
	var_33_object = var_42_object; // 0x1cf Mov
	var_46_bool = var_33_object != 0; // 0x1d1 NullNeq
	if(var_46_bool == 0) goto Label_485; // 0x1d2 JumpB
	RotatePath(var_33_object, var_34_bool); // 0x1d3 Func
	var_47_bool = var_34_bool; // 0x1d5 Push
	if(var_47_bool == 0) goto Label_484; // 0x1d6 JumpB
	var_48_bool = 0; // 0x1d7 PushV
	func_517(var_48_bool); // 0x1d8 NEW_2
	FollowPath(var_33_object, var_48_bool, var_34_bool); // 0x1da Func
	var_33_object = 0; // 0x1dc SetNull
	var_49_bool = var_34_bool; // 0x1dd Push
	if(var_49_bool == 0) goto Label_484; // 0x1de JumpB
	TaskCall(2); // 0x1e0 TaskCall
	func_689(); // 0x1e1 NEW_2
	TaskReturn(); // 0x1e2 TaskReturn
	
Label_484:
	goto Label_488; // 0x1e4 Jump
	
Label_488:
	var_33_object = 0; // 0x1e8 SetNull
	goto Label_440; // 0x1e9 Jump
	
Label_485:
	var_101_int = 1; // 0x1e5 PushI
	Sleep(var_101_int); // 0x1e6 Func
	
Label_454:
	var_102_int = 1; // 0x1c6 PushI
	Sleep(var_102_int); // 0x1c7 Func
	goto Label_444; // 0x1c9 Jump
	
Label_459:
	var_1_bool = 0; // 0x1cb TMovB
	
Label_490:
	return 12; // 0x1ea Return
}


func_950(var_117_string)
{
	var_117_string = "zwalk"; // 0x3b6 MovS
	return 0; // 0x3b7 Return
}


func_952(var_0_bool, var_1_bool, var_77_bool, var_78_object, var_79_float, var_80_float, var_81_bool, var_82_bool)
{
	var_83_bool = 0; var_84_bool = 0; var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_object = Obj(); var_91_bool = 0; var_92_bool = 0; var_93_object = Obj(); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_object = Obj(); // 0x3b8 PushV
	var_0_bool = 0; // 0x3b9 TMovB
	var_1_bool = var_78_object; // 0x3ba TMov
	var_92_bool = var_82_bool; // 0x3bb Mov
	
Label_956:
	var_99_bool = 0; var_100_object = Obj(); // 0x3bc PushV
	var_100_object = var_78_object; // 0x3bd Mov
	func_1092(var_99_bool, var_100_object); // 0x3be NEW_2
	var_103_bool = var_99_bool == 0; // 0x3c0 Not
	if(var_103_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_77_bool = 0; // 0x3c2 MovB
	return 16; // 0x3c3 Return
	
Label_964:
	GetPosition(var_94_cvector); // 0x3c4 ObjFunc
	GetPosition(var_95_cvector); // 0x3c6 Func
	var_96_cvector = var_94_cvector - var_95_cvector; // 0x3c8 Sub2
	var_97_float = var_96_cvector | var_96_cvector; // 0x3c9 Or2
	var_104_bool = 0; // 0x3ca PushV
	var_104_bool = 0; // 0x3cb MovB
	var_105_int = 0; // 0x3cc PushI
	var_106_bool = var_80_float > var_105_int; // 0x3cd GT
	if(var_106_bool == 0) goto Label_979; // 0x3ce JumpB
	var_107_float = var_80_float * var_80_float; // 0x3cf Mult
	var_108_bool = var_97_float > var_107_float; // 0x3d0 GT
	if(var_108_bool == 0) goto Label_979; // 0x3d1 JumpB
	var_104_bool = 1; // 0x3d2 MovB
	
Label_979:
	if(var_104_bool == 0) goto Label_984; // 0x3d3 JumpB
	Stop(); // 0x3d4 Func
	var_77_bool = 0; // 0x3d6 MovB
	return 16; // 0x3d7 Return
	
Label_984:
	var_109_float = var_79_float * var_79_float; // 0x3d8 Mult
	var_110_bool = var_97_float > var_109_float; // 0x3d9 GT
	if(var_110_bool == 0) goto Label_1046; // 0x3da JumpB
	GetPFPosition(var_94_cvector); // 0x3db ObjFunc
	FindPathTo(var_98_object, var_94_cvector); // 0x3dd Func
	var_111_bool = var_98_object != 0; // 0x3df NullNeq
	if(var_111_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_93_object = var_98_object; // 0x3e1 Mov
	var_98_object = 0; // 0x3e2 SetNull
	
Label_995:
	var_112_bool = var_93_object != 0; // 0x3e3 NullNeq
	if(var_112_bool == 0) goto Label_1028; // 0x3e4 JumpB
	var_113_bool = var_92_bool; // 0x3e5 Push
	if(var_113_bool == 0) goto Label_1005; // 0x3e6 JumpB
	var_92_bool = 0; // 0x3e7 MovB
	RotatePath(var_93_object, var_91_bool); // 0x3e8 Func
	var_114_bool = var_91_bool == 0; // 0x3ea Not
	if(var_114_bool == 0) goto Label_1005; // 0x3eb JumpB
	goto Label_1052; // 0x3ec Jump
	
Label_1052:
	var_77_bool = !var_0_bool; // 0x41c Not2
	return 16; // 0x41d Return
	
Label_1005:
	var_115_int = 0; // 0x3ed PushI
	var_116_float = 0.3; // 0x3ee PushF
	SetTimer(var_115_int, var_116_float); // 0x3ef Func
	var_117_string = ""; // 0x3f1 PushV
	func_950(var_117_string); // 0x3f2 NEW_2
	var_118_string = ""; // 0x3f4 PushV
	func_1099(var_118_string); // 0x3f5 NEW_2
	FollowPath(var_93_object, var_81_bool, var_91_bool, var_117_string, var_118_string); // 0x3f7 Func
	var_119_bool = var_91_bool == 0; // 0x3f9 Not
	if(var_119_bool == 0) goto Label_1026; // 0x3fa JumpB
	var_120_bool = var_0_bool; // 0x3fb PushT
	if(var_120_bool == 0) goto Label_1024; // 0x3fc JumpB
	var_93_object = 0; // 0x3fd SetNull
	goto Label_1052; // 0x3fe Jump
	
Label_1024:
	goto Label_1051; // 0x400 Jump
	
Label_1051:
	goto Label_956; // 0x41b Jump
	
Label_1026:
	var_93_object = 0; // 0x402 SetNull
	goto Label_1044; // 0x403 Jump
	
Label_1044:
	var_98_object = 0; // 0x414 SetNull
	goto Label_1050; // 0x415 Jump
	
Label_1050:
	var_93_object = 0; // 0x41a SetNull
	
Label_1028:
	var_121_int = 0; // 0x404 PushI
	KillTimer(var_121_int); // 0x405 Func
	var_122_float = 0.5; // 0x407 PushF
	Sleep(var_122_float, var_91_bool); // 0x408 Func
	var_123_bool = var_91_bool == 0; // 0x40a Not
	if(var_123_bool == 0) goto Label_1040; // 0x40b JumpB
	var_124_bool = var_0_bool; // 0x40c PushT
	if(var_124_bool == 0) goto Label_1040; // 0x40d JumpB
	var_93_object = 0; // 0x40e SetNull
	goto Label_1052; // 0x40f Jump
	
Label_1040:
	var_125_int = 0; // 0x410 PushI
	var_126_float = 0.3; // 0x411 PushF
	SetTimer(var_125_int, var_126_float); // 0x412 Func
	
Label_1046:
	var_127_int = 0; // 0x416 PushI
	KillTimer(var_127_int); // 0x417 Func
	goto Label_1052; // 0x419 Jump
}


func_2508(var_18_bool, var_19_object, var_20_string)
{
	var_21_string = "unholster"; // 0x9cd PushS
	var_22_bool = var_20_string == var_21_string; // 0x9ce Eq
	if(var_22_bool == 0) goto Label_2519; // 0x9cf JumpB
	var_23_bool = 0; var_24_object = Obj(); // 0x9d0 PushV
	var_24_object = var_19_object; // 0x9d1 Mov
	func_2716(var_24_object); // 0x9d2 NEW_2
	var_18_bool = var_23_bool; // 0x9d3 Mov
	return 0; // 0x9d5 Return
	
Label_2519:
	var_25_string = "player_shot"; // 0x9d7 PushS
	var_26_bool = var_20_string == var_25_string; // 0x9d8 Eq
	if(var_26_bool == 0) goto Label_2529; // 0x9d9 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x9da PushV
	var_28_object = var_19_object; // 0x9db Mov
	func_2721(var_28_object); // 0x9dc NEW_2
	var_18_bool = var_27_bool; // 0x9dd Mov
	return 0; // 0x9df Return
	
Label_2529:
	var_29_string = "battle"; // 0x9e1 PushS
	var_30_bool = var_20_string == var_29_string; // 0x9e2 Eq
	if(var_30_bool == 0) goto Label_2538; // 0x9e3 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x9e4 PushV
	var_32_object = var_19_object; // 0x9e5 Mov
	func_2726(var_32_object); // 0x9e6 NEW_2
	var_18_bool = var_31_bool; // 0x9e7 Mov
	return 0; // 0x9e9 Return
	
Label_2538:
	var_18_bool = 0; // 0x9ea MovB
	return 0; // 0x9eb Return
}


func_1492(var_2_bool)
{
	Stop(); // 0x5d4 Func
	var_15_int = 120; // 0x5d6 PushI
	KillTimer(var_15_int); // 0x5d7 Func
	var_2_bool = 1; // 0x5d9 TMovB
	return 0; // 0x5da Return
}


func_1508(var_0_bool, var_66_bool)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x5e4 PushV
	GetDirection(var_69_cvector); // 0x5e5 Func
	var_71_cvector = CVector(0,0,0); var_72_object = Obj(); // 0x5e7 PushV
	var_72_object = var_0_bool; // 0x5e8 MovT
	func_1723(var_72_object); // 0x5e9 NEW_2
	var_70_cvector = var_71_cvector; // 0x5ea Mov
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0x5ec PushV
	var_78_cvector = var_69_cvector; // 0x5ed Mov
	var_79_cvector = var_70_cvector; // 0x5ee Mov
	func_2110(var_77_float, var_78_cvector, var_79_cvector); // 0x5ef NEW_2
	var_85_float = -0.34202; // 0x5f1 PushF
	var_66_bool = var_77_float >= var_85_float; // 0x5f2 GE2
	return 4; // 0x5f3 Return
}


func_2023(var_20_object, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x7e7 PushV
	GetScene(var_27_object); // 0x7e8 Func
	var_29_string = "scripted"; // 0x7ea PushS
	var_30_string = "blood_dir.xml"; // 0x7eb PushS
	AddActorByType(var_28_object, var_29_string, var_27_object, var_23_cvector, var_24_cvector, var_30_string); // 0x7ec Func
	var_31_object = Obj(); // 0x7ee PushV
	var_31_object = var_20_object; // 0x7ef Mov
	func_1911(var_31_object); // 0x7f0 NEW_2
	return 4; // 0x7f2 Return
}


func_491(var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x1eb PushV
	GetCameraFarDistance(var_40_float); // 0x1ec Func
	var_38_float = var_40_float; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_2540(var_33_object, var_34_string)
{
	var_35_string = "unholster"; // 0x9ed PushS
	var_36_bool = var_34_string == var_35_string; // 0x9ee Eq
	if(var_36_bool == 0) goto Label_2549; // 0x9ef JumpB
	var_37_object = Obj(); // 0x9f0 PushV
	var_37_object = var_33_object; // 0x9f1 Mov
	func_2719(); // 0x9f2 NEW_2
	goto Label_2564; // 0x9f4 Jump
	
Label_2564:
	return 0; // 0xa04 Return
	
Label_2549:
	var_38_string = "player_shot"; // 0x9f5 PushS
	var_39_bool = var_34_string == var_38_string; // 0x9f6 Eq
	if(var_39_bool == 0) goto Label_2557; // 0x9f7 JumpB
	var_40_object = Obj(); // 0x9f8 PushV
	var_40_object = var_33_object; // 0x9f9 Mov
	func_2724(); // 0x9fa NEW_2
	goto Label_2564; // 0x9fc Jump
	
Label_2557:
	var_41_string = "battle"; // 0x9fd PushS
	var_42_bool = var_34_string == var_41_string; // 0x9fe Eq
	if(var_42_bool == 0) goto Label_2564; // 0x9ff JumpB
	var_43_object = Obj(); // 0xa00 PushV
	var_43_object = var_33_object; // 0xa01 Mov
	func_2729(); // 0xa02 NEW_2
}


func_2037(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x7f5 PushV
	IsLoaded(var_18_bool); // 0x7f6 Func
	var_16_bool = var_18_bool; // 0x7f8 Mov
	return 2; // 0x7f9 Return
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1f7 TMovB
	var_1_bool = 0; // 0x1f8 TMovB
	Stop(); // 0x1f9 Func
	StopGroup0(); // 0x1fb Func
	return 0; // 0x1fd Return
}


func_2042(var_40_string)
{
	var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x7fa PushV
	IsExisting3DSound(var_49_bool, var_40_string); // 0x7fb Func
	var_57_bool = var_49_bool == 0; // 0x7fd Not
	if(var_57_bool == 0) goto Label_2067; // 0x7fe JumpB
	var_50_int = 0; // 0x7ff MovI
	
Label_2048:
	var_58_int = 1; // 0x800 PushI
	var_59_int = var_50_int + var_58_int; // 0x801 Add
	var_60_int = var_40_string + var_59_int; // 0x802 Add
	IsExisting3DSound(var_51_bool, var_60_int); // 0x803 Func
	var_61_bool = var_51_bool == 0; // 0x805 Not
	if(var_61_bool == 0) goto Label_2056; // 0x806 JumpB
	goto Label_2059; // 0x807 Jump
	
Label_2059:
	var_62_bool = var_50_int == 0; // 0x80b Not
	if(var_62_bool == 0) goto Label_2062; // 0x80c JumpB
	return 16; // 0x80d Return
	
Label_2062:
	irand(var_52_int, var_50_int); // 0x80e Func
	var_63_int = 1; // 0x810 PushI
	var_64_int = var_52_int + var_63_int; // 0x811 Add
	var_40_string = var_40_string + var_64_int; // 0x812 Add2
	
Label_2067:
	Is3DSoundLoaded(var_53_bool, var_40_string); // 0x813 Func
	var_65_bool = var_53_bool; // 0x815 Push
	if(var_65_bool == 0) goto Label_2082; // 0x816 JumpB
	GetEyesHeight(var_54_float); // 0x817 Func
	GetDirection(var_55_cvector); // 0x819 Func
	var_66_int = 50; // 0x81b PushI
	var_56_cvector = var_55_cvector * var_66_int; // 0x81c Mult2
	var_67_float = GetByIndex(var_56_cvector, 1); // 0x81d PushE
	var_67_float = var_67_float + var_54_float; // 0x81e Add2
	SetByIndex(var_56_cvector, 1) = var_67_float; // 0x81f PopE
	PlayGlobalSound(var_40_string, var_56_cvector); // 0x820 Func
	
Label_2082:
	return 16; // 0x822 Return
	
Label_2056:
	var_68_int = 1; // 0x808 PushI
	var_50_int = var_50_int + var_68_int; // 0x809 Add2
	goto Label_2048; // 0x80a Jump
}


func_1531(var_28_cvector, var_29_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; // 0x5fb PushV
	GetPosition(var_36_cvector); // 0x5fc Func
	GetPosition(var_37_cvector); // 0x5fe TObjFunc
	GetDirection(var_38_cvector); // 0x600 Func
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x602 PushV
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x603 PushV
	var_45_cvector = var_36_cvector - var_37_cvector; // 0x604 Sub2
	func_2089(var_44_cvector, var_45_cvector); // 0x605 NEW_2
	var_51_float = 0.75; // 0x607 PushF
	var_52_float = var_38_cvector * var_51_float; // 0x608 Mult
	var_43_cvector = var_44_cvector + var_52_float; // 0x609 Add2
	func_2089(var_42_cvector, var_43_cvector); // 0x60a NEW_2
	var_39_cvector = var_42_cvector; // 0x60b Mov
	var_53_int = 32; // 0x60d PushI
	var_54_float = 7000.0; // 0x60e PushF
	FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, var_53_int, var_54_float); // 0x60f Func
	var_55_int = 100; // 0x611 PushI
	var_41_float = var_41_float - var_55_int; // 0x612 Sub2
	var_56_int = 0; // 0x613 PushI
	var_57_bool = var_41_float < var_56_int; // 0x614 LT
	if(var_57_bool == 0) goto Label_1559; // 0x615 JumpB
	var_41_float = 0; // 0x616 MovI
	
Label_1559:
	var_28_cvector = var_40_cvector * var_41_float; // 0x617 Mult2
	return 12; // 0x618 Return
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1fe TMovB
	var_1_bool = 1; // 0x1ff TMovB
	Stop(); // 0x200 Func
	StopGroup0(); // 0x202 Func
	return 0; // 0x204 Return
}


