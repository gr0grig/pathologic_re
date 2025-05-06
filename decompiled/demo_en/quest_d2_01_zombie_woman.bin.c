task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xf PushV
	var_8_int = 0; var_9_object = Obj(); // 0x10 PushV
	var_9_object = var_5_object; // 0x11 Mov
	func_1761(var_9_object); // 0x12 NEW_2
	var_7_int = var_8_int; // 0x13 Mov
	var_10_int = 0; // 0x15 PushI
	var_11_bool = var_7_int > var_10_int; // 0x16 GT
	if(var_11_bool == 0) goto Label_28; // 0x17 JumpB
	var_12_object = Obj(); // 0x18 PushV
	var_12_object = var_5_object; // 0x19 Mov
	func_1764(); // 0x1a NEW_2
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_1832(); // 0x1e NEW_2
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object)
{
	return 0; // 0x97 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object)
{
	return 0; // 0x99 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0; // 0x9b Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xb4 PushV
	var_8_int = 0; var_9_object = Obj(); // 0xb5 PushV
	var_9_object = var_5_object; // 0xb6 Mov
	func_1761(var_9_object); // 0xb7 NEW_2
	var_7_int = var_8_int; // 0xb8 Mov
	var_10_int = 0; // 0xba PushI
	var_11_bool = var_7_int > var_10_int; // 0xbb GT
	if(var_11_bool == 0) goto Label_199; // 0xbc JumpB
	var_12_int = 1; // 0xbd PushI
	var_13_bool = var_7_int > var_12_int; // 0xbe GT
	if(var_13_bool == 0) goto Label_195; // 0xbf JumpB
	func_367(var_7_int); // 0xc1 NEW_2
	
Label_195:
	var_15_object = Obj(); // 0xc3 PushV
	var_15_object = var_5_object; // 0xc4 Mov
	func_1764(); // 0xc5 NEW_2
	
Label_199:
	return 2; // 0xc7 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xc8 PushV
	var_8_object = Obj(); // 0xc9 PushV
	var_8_object = var_5_object; // 0xca Mov
	func_1674(var_8_object); // 0xcb NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0xcd PushV
	var_18_object = var_5_object; // 0xce Mov
	func_1751(var_18_object); // 0xcf NEW_2
	var_7_int = var_17_int; // 0xd0 Mov
	var_19_int = 0; // 0xd2 PushI
	var_20_bool = var_7_int > var_19_int; // 0xd3 GT
	if(var_20_bool == 0) goto Label_223; // 0xd4 JumpB
	var_21_int = 1; // 0xd5 PushI
	var_22_bool = var_7_int > var_21_int; // 0xd6 GT
	if(var_22_bool == 0) goto Label_219; // 0xd7 JumpB
	func_367(var_7_int); // 0xd9 NEW_2
	
Label_219:
	var_24_object = Obj(); // 0xdb PushV
	var_24_object = var_5_object; // 0xdc Mov
	func_1754(); // 0xdd NEW_2
	
Label_223:
	return 2; // 0xdf Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0xe0 PushV
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; // 0xe1 PushV
	var_11_object = var_5_bool; // 0xe2 Mov
	var_12_object = var_6_bool; // 0xe3 Mov
	var_13_bool = var_7_object; // 0xe4 Mov
	func_1810(var_13_bool); // 0xe5 NEW_2
	if(var_10_bool == 0) goto Label_251; // 0xe7 JumpB
	var_14_int = 0; var_15_object = Obj(); var_16_bool = 0; // 0xe8 PushV
	var_15_object = var_5_bool; // 0xe9 Mov
	var_16_bool = var_7_object; // 0xea Mov
	func_1756(var_16_bool); // 0xeb NEW_2
	var_9_int = var_14_int; // 0xec Mov
	var_17_int = 0; // 0xee PushI
	var_18_bool = var_9_int > var_17_int; // 0xef GT
	if(var_18_bool == 0) goto Label_251; // 0xf0 JumpB
	var_19_int = 1; // 0xf1 PushI
	var_20_bool = var_9_int > var_19_int; // 0xf2 GT
	if(var_20_bool == 0) goto Label_247; // 0xf3 JumpB
	func_367(var_9_int); // 0xf5 NEW_2
	
Label_247:
	var_22_object = Obj(); // 0xf7 PushV
	var_22_object = var_5_bool; // 0xf8 Mov
	func_1759(); // 0xf9 NEW_2
	
Label_251:
	return 2; // 0xfb Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xfc PushV
	var_8_int = 0; var_9_object = Obj(); // 0xfd PushV
	var_9_object = var_5_object; // 0xfe Mov
	func_1766(var_9_object); // 0xff NEW_2
	var_7_int = var_8_int; // 0x100 Mov
	var_10_int = 0; // 0x102 PushI
	var_11_bool = var_7_int > var_10_int; // 0x103 GT
	if(var_11_bool == 0) goto Label_271; // 0x104 JumpB
	var_12_int = 1; // 0x105 PushI
	var_13_bool = var_7_int > var_12_int; // 0x106 GT
	if(var_13_bool == 0) goto Label_267; // 0x107 JumpB
	func_367(var_7_int); // 0x109 NEW_2
	
Label_267:
	var_15_object = Obj(); // 0x10b PushV
	var_15_object = var_5_object; // 0x10c Mov
	func_1769(); // 0x10d NEW_2
	
Label_271:
	return 2; // 0x10f Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x110 PushV
	var_9_bool = 0; var_10_object = Obj(); var_11_string = ""; // 0x111 PushV
	var_10_object = var_5_bool; // 0x112 Mov
	var_11_string = var_6_object; // 0x113 Mov
	func_1588(var_9_bool, var_10_object, var_11_string); // 0x114 NEW_2
	if(var_9_bool == 0) goto Label_288; // 0x116 JumpB
	func_367(var_8_int); // 0x118 NEW_2
	var_25_object = Obj(); var_26_string = ""; // 0x11a PushV
	var_25_object = var_5_bool; // 0x11b Mov
	var_26_string = var_6_object; // 0x11c Mov
	func_1620(var_25_object, var_26_string); // 0x11d NEW_2
	goto Label_308; // 0x11f Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_288:
	var_36_int = 0; var_37_string = ""; var_38_object = Obj(); // 0x120 PushV
	var_37_string = var_6_object; // 0x121 Mov
	var_38_object = var_5_bool; // 0x122 Mov
	func_1771(var_38_object); // 0x123 NEW_2
	var_8_int = var_36_int; // 0x124 Mov
	var_39_int = 0; // 0x126 PushI
	var_40_bool = var_8_int > var_39_int; // 0x127 GT
	if(var_40_bool == 0) goto Label_308; // 0x128 JumpB
	var_41_int = 1; // 0x129 PushI
	var_42_bool = var_8_int > var_41_int; // 0x12a GT
	if(var_42_bool == 0) goto Label_303; // 0x12b JumpB
	func_367(var_8_int); // 0x12d NEW_2
	
Label_303:
	var_43_string = ""; var_44_object = Obj(); // 0x12f PushV
	var_43_string = var_6_object; // 0x130 Mov
	var_44_object = var_5_bool; // 0x131 Mov
	func_1774(); // 0x132 NEW_2
}


task_1_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_string = ""; // 0x136 PushV
	var_7_string = var_5_object; // 0x137 Mov
	func_1687(var_6_bool, var_7_string); // 0x138 NEW_2
	if(var_6_bool == 0) goto Label_322; // 0x13a JumpB
	func_367(var_5_object); // 0x13c NEW_2
	var_16_string = ""; // 0x13e PushV
	var_16_string = var_5_object; // 0x13f Mov
	func_1703(var_16_string); // 0x140 NEW_2
	
Label_322:
	return 0; // 0x142 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_object = Obj(); // 0x144 PushV
	var_7_object = var_5_object; // 0x145 Mov
	func_1645(var_6_bool, var_7_object); // 0x146 NEW_2
	if(var_6_bool == 0) goto Label_337; // 0x148 JumpB
	func_367(var_5_object); // 0x14a NEW_2
	var_19_object = Obj(); // 0x14c PushV
	var_19_object = var_5_object; // 0x14d Mov
	func_1668(var_19_object); // 0x14e NEW_2
	goto Label_341; // 0x150 Jump
	
Label_341:
	return 0; // 0x155 Return
	
Label_337:
	var_21_object = Obj(); // 0x151 PushV
	var_21_object = var_5_object; // 0x152 Mov
	func_392(var_5_object, var_21_object); // 0x153 NEW_2
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_object = Obj(); // 0x157 PushV
	var_6_object = var_5_object; // 0x158 Mov
	func_392(var_5_object, var_6_object); // 0x159 NEW_2
	return 0; // 0x15b Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object)
{
	var_6_int = 110; // 0x15d PushI
	var_7_bool = var_5_object != var_6_int; // 0x15e Neq
	if(var_7_bool == 0) goto Label_353; // 0x15f JumpB
	return 0; // 0x160 Return
	
Label_353:
	var_2_bool = 0; // 0x161 TMovB
	var_8_int = 110; // 0x162 PushI
	KillTimer(var_8_int); // 0x163 Func
	ResetAAS(); // 0x165 Func
	return 0; // 0x167 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_367(var_4_object); // 0x169 NEW_2
	func_1832(); // 0x16c NEW_2
	return 0; // 0x16e Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_367(var_5_object); // 0x181 NEW_2
	var_7_object = Obj(); // 0x183 PushV
	var_7_object = var_5_object; // 0x184 Mov
	func_1564(); // 0x185 NEW_2
	return 0; // 0x187 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	RequestClearPath(var_5_object); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	Stop(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x20d PushV
	var_8_int = 0; var_9_object = Obj(); // 0x20e PushV
	var_9_object = var_5_object; // 0x20f Mov
	func_1761(var_9_object); // 0x210 NEW_2
	var_7_int = var_8_int; // 0x211 Mov
	var_10_int = 0; // 0x213 PushI
	var_11_bool = var_7_int > var_10_int; // 0x214 GT
	if(var_11_bool == 0) goto Label_544; // 0x215 JumpB
	var_12_int = 1; // 0x216 PushI
	var_13_bool = var_7_int > var_12_int; // 0x217 GT
	if(var_13_bool == 0) goto Label_540; // 0x218 JumpB
	func_770(); // 0x21a NEW_2
	
Label_540:
	var_14_object = Obj(); // 0x21c PushV
	var_14_object = var_5_object; // 0x21d Mov
	func_1764(); // 0x21e NEW_2
	
Label_544:
	return 2; // 0x220 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x221 PushV
	var_8_object = Obj(); // 0x222 PushV
	var_8_object = var_5_object; // 0x223 Mov
	func_1674(var_8_object); // 0x224 NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x226 PushV
	var_18_object = var_5_object; // 0x227 Mov
	func_1751(var_18_object); // 0x228 NEW_2
	var_7_int = var_17_int; // 0x229 Mov
	var_19_int = 0; // 0x22b PushI
	var_20_bool = var_7_int > var_19_int; // 0x22c GT
	if(var_20_bool == 0) goto Label_568; // 0x22d JumpB
	var_21_int = 1; // 0x22e PushI
	var_22_bool = var_7_int > var_21_int; // 0x22f GT
	if(var_22_bool == 0) goto Label_564; // 0x230 JumpB
	func_770(); // 0x232 NEW_2
	
Label_564:
	var_23_object = Obj(); // 0x234 PushV
	var_23_object = var_5_object; // 0x235 Mov
	func_1754(); // 0x236 NEW_2
	
Label_568:
	return 2; // 0x238 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x239 PushV
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; // 0x23a PushV
	var_11_object = var_5_bool; // 0x23b Mov
	var_12_object = var_6_bool; // 0x23c Mov
	var_13_bool = var_7_object; // 0x23d Mov
	func_1810(var_13_bool); // 0x23e NEW_2
	if(var_10_bool == 0) goto Label_596; // 0x240 JumpB
	var_14_int = 0; var_15_object = Obj(); var_16_bool = 0; // 0x241 PushV
	var_15_object = var_5_bool; // 0x242 Mov
	var_16_bool = var_7_object; // 0x243 Mov
	func_1756(var_16_bool); // 0x244 NEW_2
	var_9_int = var_14_int; // 0x245 Mov
	var_17_int = 0; // 0x247 PushI
	var_18_bool = var_9_int > var_17_int; // 0x248 GT
	if(var_18_bool == 0) goto Label_596; // 0x249 JumpB
	var_19_int = 1; // 0x24a PushI
	var_20_bool = var_9_int > var_19_int; // 0x24b GT
	if(var_20_bool == 0) goto Label_592; // 0x24c JumpB
	func_770(); // 0x24e NEW_2
	
Label_592:
	var_21_object = Obj(); // 0x250 PushV
	var_21_object = var_5_bool; // 0x251 Mov
	func_1759(); // 0x252 NEW_2
	
Label_596:
	return 2; // 0x254 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x255 PushV
	var_8_int = 0; var_9_object = Obj(); // 0x256 PushV
	var_9_object = var_5_object; // 0x257 Mov
	func_1766(var_9_object); // 0x258 NEW_2
	var_7_int = var_8_int; // 0x259 Mov
	var_10_int = 0; // 0x25b PushI
	var_11_bool = var_7_int > var_10_int; // 0x25c GT
	if(var_11_bool == 0) goto Label_616; // 0x25d JumpB
	var_12_int = 1; // 0x25e PushI
	var_13_bool = var_7_int > var_12_int; // 0x25f GT
	if(var_13_bool == 0) goto Label_612; // 0x260 JumpB
	func_770(); // 0x262 NEW_2
	
Label_612:
	var_14_object = Obj(); // 0x264 PushV
	var_14_object = var_5_object; // 0x265 Mov
	func_1769(); // 0x266 NEW_2
	
Label_616:
	return 2; // 0x268 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x269 PushV
	var_9_bool = 0; var_10_object = Obj(); var_11_string = ""; // 0x26a PushV
	var_10_object = var_5_bool; // 0x26b Mov
	var_11_string = var_6_object; // 0x26c Mov
	func_1588(var_9_bool, var_10_object, var_11_string); // 0x26d NEW_2
	if(var_9_bool == 0) goto Label_633; // 0x26f JumpB
	func_770(); // 0x271 NEW_2
	var_24_object = Obj(); var_25_string = ""; // 0x273 PushV
	var_24_object = var_5_bool; // 0x274 Mov
	var_25_string = var_6_object; // 0x275 Mov
	func_1620(var_24_object, var_25_string); // 0x276 NEW_2
	goto Label_653; // 0x278 Jump
	
Label_653:
	return 2; // 0x28d Return
	
Label_633:
	var_35_int = 0; var_36_string = ""; var_37_object = Obj(); // 0x279 PushV
	var_36_string = var_6_object; // 0x27a Mov
	var_37_object = var_5_bool; // 0x27b Mov
	func_1771(var_37_object); // 0x27c NEW_2
	var_8_int = var_35_int; // 0x27d Mov
	var_38_int = 0; // 0x27f PushI
	var_39_bool = var_8_int > var_38_int; // 0x280 GT
	if(var_39_bool == 0) goto Label_653; // 0x281 JumpB
	var_40_int = 1; // 0x282 PushI
	var_41_bool = var_8_int > var_40_int; // 0x283 GT
	if(var_41_bool == 0) goto Label_648; // 0x284 JumpB
	func_770(); // 0x286 NEW_2
	
Label_648:
	var_42_string = ""; var_43_object = Obj(); // 0x288 PushV
	var_42_string = var_6_object; // 0x289 Mov
	var_43_object = var_5_bool; // 0x28a Mov
	func_1774(); // 0x28b NEW_2
}


task_2_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_string = ""; // 0x28f PushV
	var_7_string = var_5_object; // 0x290 Mov
	func_1687(var_6_bool, var_7_string); // 0x291 NEW_2
	if(var_6_bool == 0) goto Label_667; // 0x293 JumpB
	func_770(); // 0x295 NEW_2
	var_15_string = ""; // 0x297 PushV
	var_15_string = var_5_object; // 0x298 Mov
	func_1703(var_15_string); // 0x299 NEW_2
	
Label_667:
	return 0; // 0x29b Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_770(); // 0x29d NEW_2
	func_1832(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_object = Obj(); // 0x2a4 PushV
	var_7_object = var_5_object; // 0x2a5 Mov
	func_1645(var_6_bool, var_7_object); // 0x2a6 NEW_2
	if(var_6_bool == 0) goto Label_688; // 0x2a8 JumpB
	func_770(); // 0x2aa NEW_2
	var_18_object = Obj(); // 0x2ac PushV
	var_18_object = var_5_object; // 0x2ad Mov
	func_1668(var_18_object); // 0x2ae NEW_2
	
Label_688:
	return 0; // 0x2b0 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x312 PushV
	var_8_object = Obj(); // 0x313 PushV
	var_8_object = var_5_object; // 0x314 Mov
	func_1674(var_8_object); // 0x315 NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x317 PushV
	var_18_object = var_5_object; // 0x318 Mov
	func_1805(var_18_object); // 0x319 NEW_2
	var_7_int = var_17_int; // 0x31a Mov
	var_19_int = 0; // 0x31c PushI
	var_20_bool = var_7_int > var_19_int; // 0x31d GT
	if(var_20_bool == 0) goto Label_809; // 0x31e JumpB
	var_21_int = 1; // 0x31f PushI
	var_22_bool = var_7_int > var_21_int; // 0x320 GT
	if(var_22_bool == 0) goto Label_805; // 0x321 JumpB
	func_880(); // 0x323 NEW_2
	
Label_805:
	var_23_object = Obj(); // 0x325 PushV
	var_23_object = var_5_object; // 0x326 Mov
	func_1808(); // 0x327 NEW_2
	
Label_809:
	return 2; // 0x329 Return
}


task_3_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_string = ""; // 0x32b PushV
	var_7_string = var_5_object; // 0x32c Mov
	func_1687(var_6_bool, var_7_string); // 0x32d NEW_2
	if(var_6_bool == 0) goto Label_823; // 0x32f JumpB
	func_880(); // 0x331 NEW_2
	var_15_string = ""; // 0x333 PushV
	var_15_string = var_5_object; // 0x334 Mov
	func_1703(var_15_string); // 0x335 NEW_2
	
Label_823:
	return 0; // 0x337 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_880(); // 0x339 NEW_2
	func_1832(); // 0x33c NEW_2
	return 0; // 0x33e Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_880(); // 0x377 NEW_2
	var_6_object = Obj(); // 0x379 PushV
	var_6_object = var_5_object; // 0x37a Mov
	func_1564(); // 0x37b NEW_2
	return 0; // 0x37d Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x37e PushV
	var_8_object = Obj(); // 0x37f PushV
	var_8_object = var_5_object; // 0x380 Mov
	func_1674(var_8_object); // 0x381 NEW_2
	var_17_int = 0; var_18_object = Obj(); // 0x383 PushV
	var_18_object = var_5_object; // 0x384 Mov
	func_1805(var_18_object); // 0x385 NEW_2
	var_7_int = var_17_int; // 0x386 Mov
	var_19_int = 0; // 0x388 PushI
	var_20_bool = var_7_int > var_19_int; // 0x389 GT
	if(var_20_bool == 0) goto Label_917; // 0x38a JumpB
	var_21_int = 1; // 0x38b PushI
	var_22_bool = var_7_int > var_21_int; // 0x38c GT
	if(var_22_bool == 0) goto Label_913; // 0x38d JumpB
	func_1076(var_7_int); // 0x38f NEW_2
	
Label_913:
	var_24_object = Obj(); // 0x391 PushV
	var_24_object = var_5_object; // 0x392 Mov
	func_1808(); // 0x393 NEW_2
	
Label_917:
	return 2; // 0x395 Return
}


task_4_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string)
{
	var_6_bool = 0; var_7_string = ""; // 0x397 PushV
	var_7_string = var_5_string; // 0x398 Mov
	func_1687(var_6_bool, var_7_string); // 0x399 NEW_2
	if(var_6_bool == 0) goto Label_931; // 0x39b JumpB
	func_1076(var_5_string); // 0x39d NEW_2
	var_16_string = ""; // 0x39f PushV
	var_16_string = var_5_string; // 0x3a0 Mov
	func_1703(var_16_string); // 0x3a1 NEW_2
	
Label_931:
	return 0; // 0x3a3 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_1076(var_4_object); // 0x3a5 NEW_2
	func_1832(); // 0x3a8 NEW_2
	return 0; // 0x3aa Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_6_int = 0; // 0x41f PushI
	var_7_bool = var_5_int != var_6_int; // 0x420 Neq
	if(var_7_bool == 0) goto Label_1059; // 0x421 JumpB
	return 0; // 0x422 Return
	
Label_1059:
	var_8_bool = 0; var_9_object = Obj(); // 0x423 PushV
	var_9_object = var_1_bool; // 0x424 MovT
	func_1092(var_8_bool, var_9_object); // 0x425 NEW_2
	var_44_bool = var_8_bool == 0; // 0x427 Not
	if(var_44_bool == 0) goto Label_1066; // 0x428 JumpB
	var_0_bool = 1; // 0x429 TMovB
	
Label_1066:
	var_45_int = 0; // 0x42a PushI
	KillTimer(var_45_int); // 0x42b Func
	Stop(); // 0x42d Func
	return 0; // 0x42f Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	RequestClearPath(var_5_object); // 0x431 Func
	return 0; // 0x433 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	func_1076(var_5_object); // 0x43d NEW_2
	var_7_object = Obj(); // 0x43f PushV
	var_7_object = var_5_object; // 0x440 Mov
	func_1564(); // 0x441 NEW_2
	return 0; // 0x443 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0; // 0x60f PushV
	var_9_string = "health"; // 0x610 PushS
	var_10_bool = var_6_string == var_9_string; // 0x611 Eq
	if(var_10_bool == 0) goto Label_1563; // 0x612 JumpB
	var_11_string = "health"; // 0x613 PushS
	GetProperty(var_11_string, var_8_float); // 0x614 Func
	var_12_int = 0; // 0x616 PushI
	var_13_bool = var_8_float <= var_12_int; // 0x617 LE
	if(var_13_bool == 0) goto Label_1563; // 0x618 JumpB
	SignalDeath(var_5_object); // 0x619 Func
	
Label_1563:
	return 2; // 0x61b Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_object = Obj(); // 0x61d PushV
	var_6_object = var_5_object; // 0x61e Mov
	func_1543(var_6_object); // 0x61f NEW_2
	return 0; // 0x621 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0; // 0x623 PushV
	var_9_object = var_5_object; // 0x624 Mov
	var_10_int = var_6_int; // 0x625 Mov
	var_11_float = var_7_float; // 0x626 Mov
	func_1333(var_9_object, var_10_int, var_11_float); // 0x627 NEW_2
	return 0; // 0x629 Return
}


event_43(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_float, var_8_float, var_9_cvector, var_10_cvector)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); // 0x62b PushV
	var_11_object = var_5_object; // 0x62c Mov
	var_12_int = var_6_int; // 0x62d Mov
	var_13_float = var_7_float; // 0x62e Mov
	var_14_cvector = var_9_cvector; // 0x62f Mov
	var_15_cvector = var_10_cvector; // 0x630 Mov
	func_1401(var_13_float, var_14_cvector, var_15_cvector); // 0x631 NEW_2
	return 0; // 0x633 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	var_5_bool = 1; // 0x9c PushB
	SensePlayerOnly(var_5_bool); // 0x9d Func
	func_1796(); // 0xa0 NEW_2
	func_171(); // 0xa3 NEW_2
	
Label_165:
	var_2_bool = 0; // 0xa5 TMovB
	func_432(var_3_bool, var_4_object); // 0xa7 NEW_2
	goto Label_165; // 0xa9 Jump
}


func_0(var_7_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_8_object = Obj(); // 0x2 PushV
	var_8_object = var_7_object; // 0x3 Mov
	func_33(var_8_object); // 0x4 NEW_2
	var_88_object = Obj(); // 0x6 PushV
	var_88_object = var_7_object; // 0x7 Mov
	func_1813(var_88_object); // 0x8 NEW_2
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_517(var_39_bool)
{
	var_39_bool = 0; // 0x205 MovB
	return 0; // 0x206 Return
}


func_519(var_33_object, var_34_cvector)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x207 PushV
	FindShiftedPathTo(var_36_object, var_34_cvector); // 0x208 Func
	var_33_object = var_36_object; // 0x20a Mov
	return 2; // 0x20b Return
}


func_1543(var_6_object)
{
	var_7_object = Obj(); // 0x608 PushV
	var_7_object = var_6_object; // 0x609 Mov
	TaskCall(0); // 0x60a TaskCall
	func_0(var_7_object); // 0x60b NEW_2
	TaskReturn(); // 0x60c TaskReturn
	return 0; // 0x60e Return
}


func_33(var_8_object)
{
	var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_string = ""; var_14_object = Obj(); var_15_bool = 0; var_16_bool = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); // 0x21 PushV
	var_29_bool = var_8_object == 0; // 0x22 NullEq
	if(var_29_bool == 0) goto Label_41; // 0x23 JumpB
	var_30_string = ""; // 0x24 PushV
	var_30_string = "fdie"; // 0x25 MovS
	func_124(var_30_string); // 0x26 NEW_2
	goto Label_123; // 0x28 Jump
	
Label_123:
	return 20; // 0x7b Return
	
Label_41:
	GetPosition(var_19_cvector); // 0x29 ObjFunc
	GetPosition(var_20_cvector); // 0x2b Func
	GetDirection(var_21_cvector); // 0x2d Func
	var_22_cvector = var_20_cvector - var_19_cvector; // 0x2f Sub2
	var_62_float = GetByIndex(var_22_cvector, 0); // 0x30 PushE
	var_63_float = GetByIndex(var_21_cvector, 0); // 0x31 PushE
	var_64_float = var_62_float * var_63_float; // 0x32 Mult
	var_65_float = GetByIndex(var_22_cvector, 2); // 0x33 PushE
	var_66_float = GetByIndex(var_21_cvector, 2); // 0x34 PushE
	var_67_float = var_65_float * var_66_float; // 0x35 Mult
	var_68_int = var_64_float + var_67_float; // 0x36 Add
	var_69_int = 0; // 0x37 PushI
	var_70_bool = var_68_int >= var_69_int; // 0x38 GE
	if(var_70_bool == 0) goto Label_60; // 0x39 JumpB
	var_23_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_24_object = var_8_object; // 0x45 Mov
	var_71_string = "GetScriptProperty"; // 0x46 PushS
	var_72_int = 2; // 0x47 PushI
	var_73_bool = IsFuncExist(var_8_object, var_71_string, var_72_int); // 0x48 FuncExist
	if(var_73_bool == 0) goto Label_85; // 0x49 JumpB
	var_74_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_25_bool, var_74_string); // 0x4b ObjFunc
	var_75_bool = var_25_bool; // 0x4d Push
	if(var_75_bool == 0) goto Label_85; // 0x4e JumpB
	var_76_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_24_object, var_76_string); // 0x50 ObjFunc
	var_77_bool = var_24_object == 0; // 0x52 NullEq
	if(var_77_bool == 0) goto Label_85; // 0x53 JumpB
	var_24_object = var_8_object; // 0x54 Mov
	
Label_85:
	var_78_string = "@GetEyesHeight"; // 0x55 PushS
	var_79_int = 1; // 0x56 PushI
	var_80_bool = IsFuncExist(var_24_object, var_78_string, var_79_int); // 0x57 FuncExist
	if(var_80_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_27_float); // 0x59 ObjFunc
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_81_float = GetByIndex(var_28_cvector, 1); // 0x5c PushE
	var_81_float = var_27_float; // 0x5d Mov
	SetByIndex(var_28_cvector, 1) = var_81_float; // 0x5e PopE
	var_82_string = "head"; // 0x5f PushS
	LookAsync(var_8_object, var_82_string, var_28_cvector); // 0x60 Func
	var_26_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_83_string = ""; // 0x65 PushV
	var_83_string = var_23_string; // 0x66 Mov
	func_1420(var_83_string); // 0x67 NEW_2
	var_84_string = "all"; // 0x69 PushS
	PlayAnimation(var_84_string, var_23_string); // 0x6a Func
	WaitForAnimEnd(); // 0x6c Func
	var_85_bool = var_26_bool; // 0x6e Push
	if(var_85_bool == 0) goto Label_117; // 0x6f JumpB
	StopAsync(); // 0x70 Func
	var_86_string = "head"; // 0x72 PushS
	UnlookAsync(var_86_string); // 0x73 Func
	
Label_117:
	var_87_string = "all"; // 0x75 PushS
	LockAnimationEnd(var_87_string, var_23_string); // 0x76 Func
	RemoveEnvelope(); // 0x78 Func
	var_24_object = 0; // 0x7a SetNull
	
Label_100:
	var_26_bool = 0; // 0x64 MovB
	
Label_60:
	var_23_string = "bdie"; // 0x3c MovS
}


func_1588(var_9_bool, var_10_object, var_11_string)
{
	var_12_string = "unholster"; // 0x635 PushS
	var_13_bool = var_11_string == var_12_string; // 0x636 Eq
	if(var_13_bool == 0) goto Label_1599; // 0x637 JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0x638 PushV
	var_15_object = var_10_object; // 0x639 Mov
	func_1776(var_15_object); // 0x63a NEW_2
	var_9_bool = var_14_bool; // 0x63b Mov
	return 0; // 0x63d Return
	
Label_1599:
	var_16_string = "player_shot"; // 0x63f PushS
	var_17_bool = var_11_string == var_16_string; // 0x640 Eq
	if(var_17_bool == 0) goto Label_1609; // 0x641 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0x642 PushV
	var_19_object = var_10_object; // 0x643 Mov
	func_1781(var_19_object); // 0x644 NEW_2
	var_9_bool = var_18_bool; // 0x645 Mov
	return 0; // 0x647 Return
	
Label_1609:
	var_20_string = "battle"; // 0x649 PushS
	var_21_bool = var_11_string == var_20_string; // 0x64a Eq
	if(var_21_bool == 0) goto Label_1618; // 0x64b JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x64c PushV
	var_23_object = var_10_object; // 0x64d Mov
	func_1786(var_23_object); // 0x64e NEW_2
	var_9_bool = var_22_bool; // 0x64f Mov
	return 0; // 0x651 Return
	
Label_1618:
	var_9_bool = 0; // 0x652 MovB
	return 0; // 0x653 Return
}


func_1076(var_0_bool)
{
	var_0_bool = 1; // 0x434 TMovB
	var_6_int = 0; // 0x435 PushI
	KillTimer(var_6_int); // 0x436 Func
	Stop(); // 0x438 Func
	return 0; // 0x43a Return
}


func_1092(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); // 0x445 PushV
	var_11_object = var_9_object; // 0x446 Mov
	func_1265(var_10_bool, var_11_object); // 0x447 NEW_2
	var_8_bool = var_10_bool; // 0x448 Mov
	return 0; // 0x44a Return
}


func_1099(var_109_string)
{
	var_109_string = "run"; // 0x44b MovS
	return 0; // 0x44c Return
}


func_1101(var_39_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x44d PushV
	GetPosition(var_43_cvector); // 0x44e Func
	GetPosition(var_44_cvector); // 0x450 ObjFunc
	var_39_cvector = var_44_cvector - var_43_cvector; // 0x452 Sub2
	return 4; // 0x453 Return
}


func_1620(var_24_object, var_25_string)
{
	var_26_string = "unholster"; // 0x655 PushS
	var_27_bool = var_25_string == var_26_string; // 0x656 Eq
	if(var_27_bool == 0) goto Label_1629; // 0x657 JumpB
	var_28_object = Obj(); // 0x658 PushV
	var_28_object = var_24_object; // 0x659 Mov
	func_1779(); // 0x65a NEW_2
	goto Label_1644; // 0x65c Jump
	
Label_1644:
	return 0; // 0x66c Return
	
Label_1629:
	var_29_string = "player_shot"; // 0x65d PushS
	var_30_bool = var_25_string == var_29_string; // 0x65e Eq
	if(var_30_bool == 0) goto Label_1637; // 0x65f JumpB
	var_31_object = Obj(); // 0x660 PushV
	var_31_object = var_24_object; // 0x661 Mov
	func_1784(); // 0x662 NEW_2
	goto Label_1644; // 0x664 Jump
	
Label_1637:
	var_32_string = "battle"; // 0x665 PushS
	var_33_bool = var_25_string == var_32_string; // 0x666 Eq
	if(var_33_bool == 0) goto Label_1644; // 0x667 JumpB
	var_34_object = Obj(); // 0x668 PushV
	var_34_object = var_24_object; // 0x669 Mov
	func_1789(); // 0x66a NEW_2
}


func_1108(var_123_float)
{
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); // 0x454 PushV
	GetPosition(var_128_cvector); // 0x455 Func
	GetPosition(var_129_cvector); // 0x457 ObjFunc
	var_130_cvector = var_129_cvector - var_128_cvector; // 0x459 Sub2
	var_123_float = var_130_cvector | var_130_cvector; // 0x45a Or2
	return 6; // 0x45b Return
}


func_1116(var_89_bool, var_90_object)
{
	var_91_bool = 0; var_92_bool = 0; // 0x45c PushV
	IsPlayerActor(var_90_object, var_92_bool); // 0x45d Func
	var_89_bool = var_92_bool; // 0x45f Mov
	return 2; // 0x460 Return
}


func_1121(var_112_bool, var_113_object, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x461 PushV
	var_117_string = "HasProperty"; // 0x462 PushS
	var_118_int = 2; // 0x463 PushI
	var_119_bool = IsFuncExist(var_113_object, var_117_string, var_118_int); // 0x464 FuncExist
	var_120_bool = var_119_bool == 0; // 0x465 Not
	if(var_120_bool == 0) goto Label_1129; // 0x466 JumpB
	var_112_bool = 0; // 0x467 MovB
	return 2; // 0x468 Return
	
Label_1129:
	HasProperty(var_114_string, var_116_bool); // 0x469 ObjFunc
	var_112_bool = var_116_bool; // 0x46b Mov
	return 2; // 0x46c Return
}


func_1645(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x66d PushV
	var_10_bool = 0; // 0x66e PushV
	var_10_bool = 0; // 0x66f MovB
	var_11_bool = 0; var_12_object = Obj(); // 0x670 PushV
	var_12_object = var_7_object; // 0x671 Mov
	func_1776(var_12_object); // 0x672 NEW_2
	if(var_11_bool == 0) goto Label_1659; // 0x674 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0x675 PushV
	var_14_object = var_7_object; // 0x676 Mov
	func_1116(var_13_bool, var_14_object); // 0x677 NEW_2
	if(var_13_bool == 0) goto Label_1659; // 0x679 JumpB
	var_10_bool = 1; // 0x67a MovB
	
Label_1659:
	if(var_10_bool == 0) goto Label_1666; // 0x67b JumpB
	IsWeaponHolstered(var_9_bool); // 0x67c ObjFunc
	var_17_bool = var_9_bool == 0; // 0x67e Not
	if(var_17_bool == 0) goto Label_1666; // 0x67f JumpB
	var_6_bool = 1; // 0x680 MovB
	return 2; // 0x681 Return
	
Label_1666:
	var_6_bool = 0; // 0x682 MovB
	return 2; // 0x683 Return
}


func_1133(var_104_bool, var_105_object, var_106_string, var_107_float, var_108_float, var_109_float)
{
	var_110_float = 0; var_111_float = 0; // 0x46d PushV
	var_112_bool = 0; var_113_object = Obj(); var_114_string = ""; // 0x46e PushV
	var_113_object = var_105_object; // 0x46f Mov
	var_114_string = var_106_string; // 0x470 Mov
	func_1121(var_112_bool, var_113_object, var_114_string); // 0x471 NEW_2
	var_121_bool = var_112_bool == 0; // 0x473 Not
	if(var_121_bool == 0) goto Label_1143; // 0x474 JumpB
	var_104_bool = 0; // 0x475 MovB
	return 2; // 0x476 Return
	
Label_1143:
	GetProperty(var_106_string, var_111_float); // 0x477 ObjFunc
	var_122_float = 0; var_123_float = 0; var_124_float = 0; var_125_float = 0; // 0x479 PushV
	var_123_float = var_111_float + var_107_float; // 0x47a Add2
	var_124_float = var_108_float; // 0x47b Mov
	var_125_float = var_109_float; // 0x47c Mov
	func_1477(var_122_float, var_123_float, var_124_float, var_125_float); // 0x47d NEW_2
	SetProperty(var_106_string, var_122_float); // 0x47f ObjFunc
	var_104_bool = 1; // 0x481 MovB
	return 2; // 0x482 Return
}


func_124(var_30_string)
{
	RemoveRTEnvelope(); // 0x7d Func
	SetDeathState(); // 0x7f Func
	Stop(); // 0x81 Func
	StopAsync(); // 0x83 Func
	StopSecondaryAnimation(); // 0x85 Func
	var_31_string = ""; // 0x87 PushV
	var_31_string = var_30_string; // 0x88 Mov
	func_1420(var_31_string); // 0x89 NEW_2
	var_60_string = "all"; // 0x8b PushS
	PlayAnimation(var_60_string, var_30_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_61_string = "all"; // 0x90 PushS
	LockAnimationEnd(var_61_string, var_30_string); // 0x91 Func
	RemoveEnvelope(); // 0x93 Func
	return 0; // 0x95 Return
}


func_1155(var_133_float, var_134_object, var_135_float)
{
	var_136_float = 0; var_137_float = 0; var_138_float = 0; var_139_float = 0; // 0x483 PushV
	var_140_bool = 0; var_141_object = Obj(); var_142_string = ""; // 0x484 PushV
	var_141_object = var_134_object; // 0x485 Mov
	var_142_string = "disease"; // 0x486 MovS
	func_1121(var_140_bool, var_141_object, var_142_string); // 0x487 NEW_2
	var_143_bool = var_140_bool == 0; // 0x489 Not
	if(var_143_bool == 0) goto Label_1165; // 0x48a JumpB
	var_133_float = 0; // 0x48b MovI
	return 4; // 0x48c Return
	
Label_1165:
	var_138_float = 0; // 0x48d MovI
	var_144_bool = 0; var_145_object = Obj(); var_146_string = ""; // 0x48e PushV
	var_145_object = var_134_object; // 0x48f Mov
	var_146_string = "armor_disease"; // 0x490 MovS
	func_1121(var_144_bool, var_145_object, var_146_string); // 0x491 NEW_2
	if(var_144_bool == 0) goto Label_1177; // 0x493 JumpB
	var_147_string = "armor_disease"; // 0x494 PushS
	GetProperty(var_147_string, var_138_float); // 0x495 ObjFunc
	var_148_int = 100; // 0x497 PushI
	var_138_float = var_138_float / var_138_float; // 0x498 Div2
	
Label_1177:
	var_149_bool = 0; var_150_object = Obj(); var_151_string = ""; // 0x499 PushV
	var_150_object = var_134_object; // 0x49a Mov
	var_151_string = "immunity"; // 0x49b MovS
	func_1121(var_149_bool, var_150_object, var_151_string); // 0x49c NEW_2
	if(var_149_bool == 0) goto Label_1195; // 0x49e JumpB
	var_152_string = "immunity"; // 0x49f PushS
	GetProperty(var_152_string, var_139_float); // 0x4a0 ObjFunc
	var_138_float = var_138_float + var_139_float; // 0x4a2 Add2
	var_153_bool = 0; var_154_object = Obj(); var_155_string = ""; var_156_float = 0; var_157_float = 0; var_158_float = 0; // 0x4a3 PushV
	var_154_object = var_134_object; // 0x4a4 Mov
	var_155_string = "immunity"; // 0x4a5 MovS
	var_156_float = -var_135_float; // 0x4a6 Neg2
	var_157_float = 0; // 0x4a7 MovI
	var_158_float = 1; // 0x4a8 MovI
	func_1133(var_153_bool, var_154_object, var_155_string, var_156_float, var_157_float, var_158_float); // 0x4a9 NEW_2
	
Label_1195:
	var_171_int = 1; // 0x4ab PushI
	var_172_bool = var_138_float >= var_171_int; // 0x4ac GE
	if(var_172_bool == 0) goto Label_1200; // 0x4ad JumpB
	var_133_float = 0.0; // 0x4ae MovF
	return 4; // 0x4af Return
	
Label_1200:
	var_173_int = 1; // 0x4b0 PushI
	var_174_int = var_173_int - var_138_float; // 0x4b1 Sub
	var_175_int = 2; // 0x4b2 PushI
	var_176_float = var_174_int / var_175_int; // 0x4b3 Div
	var_135_float = var_135_float * var_176_float; // 0x4b4 Mult2
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; var_180_float = 0; var_181_float = 0; var_182_float = 0; // 0x4b5 PushV
	var_178_object = var_134_object; // 0x4b6 Mov
	var_179_string = "disease"; // 0x4b7 MovS
	var_180_float = var_135_float; // 0x4b8 Mov
	var_181_float = 0; // 0x4b9 MovI
	var_182_float = 1; // 0x4ba MovI
	func_1133(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float); // 0x4bb NEW_2
	var_183_bool = 0; var_184_object = Obj(); // 0x4bd PushV
	var_184_object = var_134_object; // 0x4be Mov
	func_1116(var_183_bool, var_184_object); // 0x4bf NEW_2
	if(var_183_bool == 0) goto Label_1222; // 0x4c1 JumpB
	var_187_float = 0; // 0x4c2 PushV
	var_187_float = var_135_float; // 0x4c3 Mov
	func_1523(var_187_float); // 0x4c4 NEW_2
	
Label_1222:
	var_133_float = var_135_float; // 0x4c6 Mov
	return 4; // 0x4c7 Return
}


func_1668(var_18_object)
{
	var_19_object = Obj(); // 0x685 PushV
	var_19_object = var_18_object; // 0x686 Mov
	func_1779(); // 0x687 NEW_2
	return 0; // 0x689 Return
}


func_1674(var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x68b PushV
	var_10_object = var_8_object; // 0x68c Mov
	func_1116(var_9_bool, var_10_object); // 0x68d NEW_2
	if(var_9_bool == 0) goto Label_1686; // 0x68f JumpB
	var_13_object = Obj(); // 0x690 PushV
	func_1461(var_13_object); // 0x691 NEW_2
	var_16_float = 0.0; // 0x693 PushF
	ReportReputationChange(var_8_object, var_13_object, var_16_float); // 0x694 Func
	
Label_1686:
	return 0; // 0x696 Return
}


func_1687(var_6_bool, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x697 PushV
	var_10_string = "heal"; // 0x698 PushS
	var_11_bool = var_7_string == var_10_string; // 0x699 Eq
	if(var_11_bool == 0) goto Label_1701; // 0x69a JumpB
	var_12_string = "player"; // 0x69b PushS
	FindActor(var_9_object, var_12_string); // 0x69c Func
	var_13_bool = 0; var_14_object = Obj(); // 0x69e PushV
	var_14_object = var_9_object; // 0x69f Mov
	func_1791(var_14_object); // 0x6a0 NEW_2
	var_6_bool = var_13_bool; // 0x6a1 Mov
	return 2; // 0x6a3 Return
	
Label_1701:
	var_6_bool = 0; // 0x6a5 MovB
	return 2; // 0x6a6 Return
}


func_1703(var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x6a7 PushV
	var_19_string = "heal"; // 0x6a8 PushS
	var_20_bool = var_16_string == var_19_string; // 0x6a9 Eq
	if(var_20_bool == 0) goto Label_1715; // 0x6aa JumpB
	var_21_string = "player"; // 0x6ab PushS
	FindActor(var_18_object, var_21_string); // 0x6ac Func
	var_22_object = Obj(); // 0x6ae PushV
	var_22_object = var_18_object; // 0x6af Mov
	func_1794(); // 0x6b0 NEW_2
	var_18_object = 0; // 0x6b2 SetNull
	
Label_1715:
	return 2; // 0x6b3 Return
}


func_171()
{
	var_7_bool = 0; // 0xab PushV
	func_1415(var_7_bool); // 0xac NEW_2
	var_10_bool = var_7_bool == 0; // 0xae Not
	if(var_10_bool == 0) goto Label_179; // 0xaf JumpB
	func_1832(); // 0xb1 NEW_2
	
Label_179:
	return 0; // 0xb3 Return
}


func_689()
{
	var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_float = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_bool = 0; // 0x2b1 PushV
	WaitForAnimEnd(); // 0x2b2 Func
	var_55_bool = 0; // 0x2b4 PushV
	func_1415(var_55_bool); // 0x2b5 NEW_2
	var_56_bool = var_55_bool == 0; // 0x2b7 Not
	if(var_56_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 14; // 0x2b9 Return
	
Label_698:
	var_57_int = 0; // 0x2ba PushV
	func_1723(var_57_int); // 0x2bb NEW_2
	var_48_int = var_57_int; // 0x2bc Mov
	var_49_int = 0; // 0x2be MovI
	
Label_703:
	var_70_bool = 0; // 0x2bf PushV
	var_70_bool = 0; // 0x2c0 MovB
	var_71_int = 5; // 0x2c1 PushI
	var_72_bool = var_49_int < var_71_int; // 0x2c2 LT
	if(var_72_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_73_bool = 0; // 0x2c4 PushV
	func_1415(var_73_bool); // 0x2c5 NEW_2
	if(var_73_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_70_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_70_bool == 0) goto Label_765; // 0x2c9 JumpB
	var_74_int = 3; // 0x2ca PushI
	irand(var_50_int, var_74_int); // 0x2cb Func
	var_75_int = 0; // 0x2cd PushI
	var_76_bool = var_50_int == var_75_int; // 0x2ce Eq
	if(var_76_bool == 0) goto Label_737; // 0x2cf JumpB
	var_77_int = var_48_int; // 0x2d0 Push
	if(var_77_int == 0) goto Label_736; // 0x2d1 JumpB
	irand(var_51_int, var_48_int); // 0x2d2 Func
	var_78_string = "all"; // 0x2d4 PushS
	var_79_string = ""; var_80_int = 0; // 0x2d5 PushV
	var_80_int = var_51_int; // 0x2d6 Mov
	func_1716(var_79_string, var_80_int); // 0x2d7 NEW_2
	PlayAnimation(var_78_string, var_79_string); // 0x2d9 Func
	WaitForAnimEnd(var_52_bool); // 0x2db Func
	var_81_bool = var_52_bool == 0; // 0x2dd Not
	if(var_81_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_765; // 0x2df Jump
	
Label_765:
	ResetAAS(); // 0x2fd Func
	return 14; // 0x2ff Return
	
Label_736:
	goto Label_754; // 0x2e0 Jump
	
Label_754:
	var_82_bool = 0; // 0x2f2 PushV
	func_768(var_82_bool); // 0x2f3 NEW_2
	var_83_bool = var_82_bool == 0; // 0x2f5 Not
	if(var_83_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_765; // 0x2f7 Jump
	
Label_760:
	ResetAAS(); // 0x2f8 Func
	var_84_int = 1; // 0x2fa PushI
	var_49_int = var_49_int + var_84_int; // 0x2fb Add2
	goto Label_703; // 0x2fc Jump
	
Label_737:
	var_85_int = 1; // 0x2e1 PushI
	var_86_bool = var_50_int == var_85_int; // 0x2e2 Eq
	if(var_86_bool == 0) goto Label_751; // 0x2e3 JumpB
	var_87_int = 4; // 0x2e4 PushI
	rand(var_53_float, var_87_int); // 0x2e5 Func
	var_88_int = 1; // 0x2e7 PushI
	var_89_int = var_53_float + var_88_int; // 0x2e8 Add
	Sleep(var_89_int, var_54_bool); // 0x2e9 Func
	var_90_bool = var_54_bool == 0; // 0x2eb Not
	if(var_90_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_765; // 0x2ed Jump
	
Label_750:
	goto Label_754; // 0x2ee Jump
	
Label_751:
	var_91_int = var_49_int; // 0x2ef Push
	if(var_91_int == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_765; // 0x2f1 Jump
}


func_1716(var_63_string, var_64_int)
{
	var_65_string = ""; var_66_string = ""; // 0x6b4 PushV
	var_66_string = "idle"; // 0x6b5 MovS
	var_67_int = var_64_int; // 0x6b6 Push
	if(var_67_int == 0) goto Label_1721; // 0x6b7 JumpB
	var_66_string = var_66_string + var_64_int; // 0x6b8 Add2
	
Label_1721:
	var_63_string = var_66_string; // 0x6b9 Mov
	return 2; // 0x6ba Return
}


func_1723(var_57_int)
{
	var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; // 0x6bb PushV
	var_60_int = 0; // 0x6bc MovI
	
Label_1725:
	var_62_string = "all"; // 0x6bd PushS
	var_63_string = ""; var_64_int = 0; // 0x6be PushV
	var_64_int = var_60_int; // 0x6bf Mov
	func_1716(var_63_string, var_64_int); // 0x6c0 NEW_2
	HasAnimation(var_61_bool, var_62_string, var_63_string); // 0x6c2 Func
	var_68_bool = var_61_bool == 0; // 0x6c4 Not
	if(var_68_bool == 0) goto Label_1735; // 0x6c5 JumpB
	goto Label_1738; // 0x6c6 Jump
	
Label_1738:
	var_57_int = var_60_int; // 0x6ca Mov
	return 4; // 0x6cb Return
	
Label_1735:
	var_69_int = 1; // 0x6c7 PushI
	var_60_int = var_60_int + var_69_int; // 0x6c8 Add2
	goto Label_1725; // 0x6c9 Jump
}


func_1224(var_25_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x4c8 PushV
	IsDead(var_28_bool); // 0x4c9 ObjFunc
	var_25_bool = var_28_bool; // 0x4cb Mov
	return 2; // 0x4cc Return
}


func_1740(var_48_int)
{
	var_48_int = 2; // 0x6cd MovI
	return 0; // 0x6ce Return
}


func_1229(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0x4cd PushV
	var_20_bool = var_15_object == 0; // 0x4ce NullEq
	if(var_20_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_14_bool = 0; // 0x4d0 MovB
	return 4; // 0x4d1 Return
	
Label_1234:
	var_21_bool = 0; // 0x4d2 PushV
	var_21_bool = 0; // 0x4d3 MovB
	var_22_string = "IsDead"; // 0x4d4 PushS
	var_23_int = 1; // 0x4d5 PushI
	var_24_bool = IsFuncExist(var_15_object, var_22_string, var_23_int); // 0x4d6 FuncExist
	if(var_24_bool == 0) goto Label_1246; // 0x4d7 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x4d8 PushV
	var_26_object = var_15_object; // 0x4d9 Mov
	func_1224(var_26_object); // 0x4da NEW_2
	if(var_25_bool == 0) goto Label_1246; // 0x4dc JumpB
	var_21_bool = 1; // 0x4dd MovB
	
Label_1246:
	if(var_21_bool == 0) goto Label_1249; // 0x4de JumpB
	var_14_bool = 0; // 0x4df MovB
	return 4; // 0x4e0 Return
	
Label_1249:
	GetScene(var_18_object); // 0x4e1 Func
	var_29_bool = var_18_object == 0; // 0x4e3 NullEq
	if(var_29_bool == 0) goto Label_1255; // 0x4e4 JumpB
	var_14_bool = 0; // 0x4e5 MovB
	return 4; // 0x4e6 Return
	
Label_1255:
	GetScene(var_19_object); // 0x4e7 ObjFunc
	var_30_bool = var_18_object != var_19_object; // 0x4e9 Neq
	if(var_30_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_14_bool = 0; // 0x4eb MovB
	return 4; // 0x4ec Return
	
Label_1261:
	var_14_bool = 1; // 0x4ed MovB
	return 4; // 0x4ee Return
}


func_1743(var_55_object)
{
	var_56_object = Obj(); // 0x6d0 PushV
	var_56_object = var_55_object; // 0x6d1 Mov
	TaskCall(3); // 0x6d2 TaskCall
	func_775(var_56_object); // 0x6d3 NEW_2
	TaskReturn(); // 0x6d4 TaskReturn
	return 0; // 0x6d6 Return
}


func_1751(var_17_int)
{
	var_17_int = 0; // 0x6d8 MovI
	return 0; // 0x6d9 Return
}


func_1754()
{
	return 0; // 0x6db Return
}


func_1756(var_14_int)
{
	var_14_int = 0; // 0x6dd MovI
	return 0; // 0x6de Return
}


func_1759()
{
	return 0; // 0x6e0 Return
}


func_1761(var_8_int)
{
	var_8_int = 0; // 0x6e2 MovI
	return 0; // 0x6e3 Return
}


func_1764()
{
	return 0; // 0x6e5 Return
}


func_1766(var_8_int)
{
	var_8_int = 0; // 0x6e7 MovI
	return 0; // 0x6e8 Return
}


func_1769()
{
	return 0; // 0x6ea Return
}


func_1771(var_35_int)
{
	var_35_int = 0; // 0x6ec MovI
	return 0; // 0x6ed Return
}


func_1774()
{
	return 0; // 0x6ef Return
}


func_1776(var_11_bool)
{
	var_11_bool = 0; // 0x6f1 MovB
	return 0; // 0x6f2 Return
}


func_1265(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x4f1 PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x4f2 PushV
	var_15_object = var_11_object; // 0x4f3 Mov
	func_1229(var_14_bool, var_15_object); // 0x4f4 NEW_2
	var_31_bool = var_14_bool == 0; // 0x4f6 Not
	if(var_31_bool == 0) goto Label_1274; // 0x4f7 JumpB
	var_10_bool = 0; // 0x4f8 MovB
	return 2; // 0x4f9 Return
	
Label_1274:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0x4fa PushV
	var_33_object = var_11_object; // 0x4fb Mov
	var_34_string = "noaccess"; // 0x4fc MovS
	func_1121(var_32_bool, var_33_object, var_34_string); // 0x4fd NEW_2
	var_41_bool = var_32_bool == 0; // 0x4ff Not
	if(var_41_bool == 0) goto Label_1283; // 0x500 JumpB
	var_10_bool = 1; // 0x501 MovB
	return 2; // 0x502 Return
	
Label_1283:
	var_42_string = "noaccess"; // 0x503 PushS
	GetProperty(var_42_string, var_13_int); // 0x504 ObjFunc
	var_43_int = 0; // 0x506 PushI
	var_10_bool = var_13_int == var_43_int; // 0x507 Eq2
	return 2; // 0x508 Return
}


func_1779()
{
	return 0; // 0x6f4 Return
}


func_1781(var_18_bool)
{
	var_18_bool = 0; // 0x6f6 MovB
	return 0; // 0x6f7 Return
}


func_1784()
{
	return 0; // 0x6f9 Return
}


func_1786(var_22_bool)
{
	var_22_bool = 0; // 0x6fb MovB
	return 0; // 0x6fc Return
}


func_1789()
{
	return 0; // 0x6fe Return
}


func_1791(var_13_bool)
{
	var_13_bool = 0; // 0x700 MovB
	return 0; // 0x701 Return
}


func_768(var_82_bool)
{
	var_82_bool = 1; // 0x300 MovB
	return 0; // 0x301 Return
}


func_770()
{
	StopAnimation(); // 0x302 Func
	StopGroup0(); // 0x304 Func
	return 0; // 0x306 Return
}


func_1794()
{
	return 0; // 0x703 Return
}


func_1796()
{
	var_6_bool = GlobalVars[0]; // 0x704 PushGE
	var_6_bool = 0; // 0x705 MovB
	GlobalVars[0] = var_6_bool; // 0x706 PopGE
	return 0; // 0x707 Return
}


func_775(var_56_object)
{
	var_57_bool = 0; var_58_object = Obj(); // 0x308 PushV
	var_58_object = var_56_object; // 0x309 Mov
	func_1800(var_57_bool, var_58_object); // 0x30a NEW_2
	if(var_57_bool == 0) goto Label_785; // 0x30c JumpB
	var_61_object = Obj(); // 0x30d PushV
	var_61_object = var_56_object; // 0x30e Mov
	func_831(var_61_object); // 0x30f NEW_2
	
Label_785:
	return 0; // 0x311 Return
}


func_1800(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0; // 0x708 PushV
	IsPlayerActor(var_58_object, var_60_bool); // 0x709 Func
	var_57_bool = var_60_bool; // 0x70b Mov
	return 2; // 0x70c Return
}


func_1289(var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x509 PushV
	var_37_bool = var_22_object == 0; // 0x50a NullEq
	if(var_37_bool == 0) goto Label_1293; // 0x50b JumpB
	return 14; // 0x50c Return
	
Label_1293:
	IsDead(var_30_bool); // 0x50d Func
	var_38_bool = var_30_bool; // 0x50f Push
	if(var_38_bool == 0) goto Label_1298; // 0x510 JumpB
	return 14; // 0x511 Return
	
Label_1298:
	GetSecondaryAnimationType(var_31_int); // 0x512 Func
	var_39_int = 0; // 0x514 PushI
	var_40_bool = var_31_int < var_39_int; // 0x515 LT
	if(var_40_bool == 0) goto Label_1304; // 0x516 JumpB
	return 14; // 0x517 Return
	
Label_1304:
	GetPosition(var_32_cvector); // 0x518 ObjFunc
	GetPosition(var_33_cvector); // 0x51a Func
	GetDirection(var_34_cvector); // 0x51c Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x51e Sub2
	var_41_float = GetByIndex(var_35_cvector, 0); // 0x51f PushE
	var_42_float = GetByIndex(var_34_cvector, 0); // 0x520 PushE
	var_43_float = var_41_float * var_42_float; // 0x521 Mult
	var_44_float = GetByIndex(var_35_cvector, 2); // 0x522 PushE
	var_45_float = GetByIndex(var_34_cvector, 2); // 0x523 PushE
	var_46_float = var_44_float * var_45_float; // 0x524 Mult
	var_47_int = var_43_float + var_46_float; // 0x525 Add
	var_48_int = 0; // 0x526 PushI
	var_49_bool = var_47_int >= var_48_int; // 0x527 GE
	if(var_49_bool == 0) goto Label_1323; // 0x528 JumpB
	var_36_string = "fhit"; // 0x529 MovS
	goto Label_1324; // 0x52a Jump
	
Label_1324:
	var_50_string = "hit_react"; // 0x52c PushS
	var_51_string = "1"; // 0x52d PushS
	var_52_int = var_36_string + var_51_string; // 0x52e Add
	var_53_string = "2"; // 0x52f PushS
	var_54_int = var_36_string + var_53_string; // 0x530 Add
	var_55_int = -10; // 0x531 PushI
	FadeSecondaryAnimation(var_50_string, var_52_int, var_54_int, var_55_int); // 0x532 Func
	return 14; // 0x534 Return
	
Label_1323:
	var_36_string = "bhit"; // 0x52b MovS
}


func_1805(var_17_int)
{
	var_17_int = 0; // 0x70e MovI
	return 0; // 0x70f Return
}


func_1808()
{
	return 0; // 0x711 Return
}


func_1810(var_10_bool)
{
	var_10_bool = 0; // 0x713 MovB
	return 0; // 0x714 Return
}


func_1813(var_88_object)
{
	var_89_bool = 0; var_90_object = Obj(); // 0x716 PushV
	var_90_object = var_88_object; // 0x717 Mov
	func_1116(var_89_bool, var_90_object); // 0x718 NEW_2
	if(var_89_bool == 0) goto Label_1824; // 0x71a JumpB
	var_93_bool = 0; var_94_object = Obj(); var_95_float = 0; // 0x71b PushV
	var_94_object = var_88_object; // 0x71c Mov
	var_95_float = -0.05; // 0x71d MovF
	func_1488(var_93_bool, var_94_object, var_95_float); // 0x71e NEW_2
	
Label_1824:
	var_131_bool = GlobalVars[0]; // 0x720 PushGE
	var_131_bool = 1; // 0x721 MovB
	GlobalVars[0] = var_131_bool; // 0x722 PopGE
	var_132_int = 50; // 0x723 PushI
	var_133_int = 40; // 0x724 PushI
	SetRTEnvelope(var_132_int, var_133_int); // 0x725 Func
	return 0; // 0x727 Return
}


func_1832()
{
	var_11_object = Obj(); // 0x728 PushV
	func_1461(var_11_object); // 0x729 NEW_2
	RemoveActor(var_11_object); // 0x72b Func
	return 0; // 0x72d Return
}


func_1333(var_9_object, var_10_int, var_11_float)
{
	var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_int = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); // 0x535 PushV
	var_30_bool = 0; // 0x536 PushV
	var_30_bool = 0; // 0x537 MovB
	var_31_bool = 0; // 0x538 PushV
	var_31_bool = 0; // 0x539 MovB
	var_32_object = var_9_object; // 0x53a Push
	if(var_32_object == 0) goto Label_1344; // 0x53b JumpB
	var_33_int = 4; // 0x53c PushI
	var_34_bool = var_10_int != var_33_int; // 0x53d Neq
	if(var_34_bool == 0) goto Label_1344; // 0x53e JumpB
	var_31_bool = 1; // 0x53f MovB
	
Label_1344:
	if(var_31_bool == 0) goto Label_1349; // 0x540 JumpB
	var_35_int = 5; // 0x541 PushI
	var_36_bool = var_10_int != var_35_int; // 0x542 Neq
	if(var_36_bool == 0) goto Label_1349; // 0x543 JumpB
	var_30_bool = 1; // 0x544 MovB
	
Label_1349:
	if(var_30_bool == 0) goto Label_1396; // 0x545 JumpB
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x546 PushV
	var_39_cvector = CVector(0,0,0); var_40_object = Obj(); // 0x547 PushV
	var_40_object = var_9_object; // 0x548 Mov
	func_1101(var_40_object); // 0x549 NEW_2
	var_38_cvector = var_39_cvector; // 0x54a Mov
	func_1467(var_37_cvector, var_38_cvector); // 0x54c NEW_2
	var_21_cvector = var_37_cvector; // 0x54d Mov
	CreateVectorVector(var_22_object); // 0x54f Func
	var_23_int = 1; // 0x551 MovI
	
Label_1362:
	var_50_string = "hit"; // 0x552 PushS
	var_51_int = var_50_string + var_23_int; // 0x553 Add
	GetGeometryLocator(var_51_int, var_24_bool, var_25_cvector, var_26_cvector); // 0x554 Func
	var_52_bool = var_24_bool == 0; // 0x556 Not
	if(var_52_bool == 0) goto Label_1369; // 0x557 JumpB
	goto Label_1378; // 0x558 Jump
	
Label_1378:
	size(var_27_int); // 0x562 ObjFunc
	var_53_int = var_27_int; // 0x564 Push
	if(var_53_int == 0) goto Label_1395; // 0x565 JumpB
	irand(var_28_int, var_27_int); // 0x566 Func
	get(var_29_cvector, var_28_int); // 0x568 ObjFunc
	var_54_object = Obj(); var_55_int = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x56a PushV
	var_54_object = var_9_object; // 0x56b Mov
	var_55_int = var_10_int; // 0x56c Mov
	var_56_float = var_11_float; // 0x56d Mov
	var_57_cvector = var_29_cvector; // 0x56e Mov
	var_58_cvector = -var_21_cvector; // 0x56f Neg2
	func_1401(var_56_float, var_57_cvector, var_58_cvector); // 0x570 NEW_2
	return 18; // 0x572 Return
	
Label_1395:
	var_22_object = 0; // 0x573 SetNull
	
Label_1396:
	var_99_object = Obj(); // 0x574 PushV
	var_99_object = var_9_object; // 0x575 Mov
	func_1289(var_99_object); // 0x576 NEW_2
	return 18; // 0x578 Return
	
Label_1369:
	var_100_int = var_26_cvector | var_21_cvector; // 0x559 Or
	var_101_float = 0.70711; // 0x55a PushF
	var_102_bool = var_100_int >= var_101_float; // 0x55b GE
	if(var_102_bool == 0) goto Label_1375; // 0x55c JumpB
	add(var_25_cvector); // 0x55d ObjFunc
	
Label_1375:
	var_103_int = 1; // 0x55f PushI
	var_23_int = var_23_int + var_103_int; // 0x560 Add2
	goto Label_1362; // 0x561 Jump
}


func_831(var_61_object)
{
	var_62_bool = 0; var_63_bool = 0; // 0x33f PushV
	
Label_832:
	var_64_bool = 0; var_65_object = Obj(); // 0x340 PushV
	var_65_object = var_61_object; // 0x341 Mov
	TaskCall(4); // 0x342 TaskCall
	func_939(var_64_bool, var_65_object); // 0x343 NEW_2
	TaskReturn(); // 0x344 TaskReturn
	if(var_66_bool == 0) goto Label_879; // 0x346 JumpB
	Face(var_61_object); // 0x347 Func
	WaitForAnimEnd(var_63_bool); // 0x349 Func
	var_119_bool = var_63_bool == 0; // 0x34b Not
	if(var_119_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_879; // 0x34d Jump
	
Label_879:
	return 2; // 0x36f Return
	
Label_846:
	var_120_string = "all"; // 0x34e PushS
	var_121_string = "dattack_begin"; // 0x34f PushS
	PlayAnimation(var_120_string, var_121_string); // 0x350 Func
	WaitForAnimEnd(var_63_bool); // 0x352 Func
	var_122_bool = var_63_bool == 0; // 0x354 Not
	if(var_122_bool == 0) goto Label_855; // 0x355 JumpB
	goto Label_879; // 0x356 Jump
	
Label_855:
	var_123_float = 0; var_124_object = Obj(); // 0x357 PushV
	var_124_object = var_61_object; // 0x358 Mov
	func_1108(var_124_object); // 0x359 NEW_2
	var_131_float = 90000.0; // 0x35b PushF
	var_132_bool = var_123_float <= var_131_float; // 0x35c LE
	if(var_132_bool == 0) goto Label_867; // 0x35d JumpB
	var_133_float = 0; var_134_object = Obj(); var_135_float = 0; // 0x35e PushV
	var_134_object = var_61_object; // 0x35f Mov
	var_135_float = 0.2; // 0x360 MovF
	func_1155(var_133_float, var_134_object, var_135_float); // 0x361 NEW_2
	
Label_867:
	var_191_string = "all"; // 0x363 PushS
	var_192_string = "dattack_end"; // 0x364 PushS
	PlayAnimation(var_191_string, var_192_string); // 0x365 Func
	WaitForAnimEnd(var_63_bool); // 0x367 Func
	var_193_bool = var_63_bool == 0; // 0x369 Not
	if(var_193_bool == 0) goto Label_876; // 0x36a JumpB
	goto Label_879; // 0x36b Jump
	
Label_876:
	StopAsync(); // 0x36c Func
	goto Label_832; // 0x36e Jump
}


func_367(var_2_bool)
{
	var_6_int = 110; // 0x16f PushI
	KillTimer(var_6_int); // 0x170 Func
	var_2_bool = 0; // 0x172 TMovB
	func_503(var_4_bool, var_5_object); // 0x174 NEW_2
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
	var_54_int = 110; // 0x177 PushI
	KillTimer(var_54_int); // 0x178 Func
	var_2_bool = 0; // 0x17a TMovB
	func_510(var_9_bool, var_10_int); // 0x17c NEW_2
	return 0; // 0x17e Return
}


func_1401(var_11_object, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0x579 PushV
	GetScene(var_18_object); // 0x57a Func
	var_20_string = "scripted"; // 0x57c PushS
	var_21_string = "blood_dir.xml"; // 0x57d PushS
	AddActorByType(var_19_object, var_20_string, var_18_object, var_14_cvector, var_15_cvector, var_21_string); // 0x57e Func
	var_22_object = Obj(); // 0x580 PushV
	var_22_object = var_11_object; // 0x581 Mov
	func_1289(var_22_object); // 0x582 NEW_2
	return 4; // 0x584 Return
}


func_1415(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x587 PushV
	IsLoaded(var_9_bool); // 0x588 Func
	var_7_bool = var_9_bool; // 0x58a Mov
	return 2; // 0x58b Return
}


func_392(var_2_bool, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_bool = 0; var_10_int = 0; // 0x188 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x189 PushV
	var_12_object = var_6_object; // 0x18a Mov
	func_1265(var_11_bool, var_12_object); // 0x18b NEW_2
	var_45_bool = var_11_bool == 0; // 0x18d Not
	if(var_45_bool == 0) goto Label_400; // 0x18e JumpB
	return 4; // 0x18f Return
	
Label_400:
	var_46_bool = var_2_bool; // 0x190 PushT
	if(var_46_bool == 0) goto Label_403; // 0x191 JumpB
	return 4; // 0x192 Return
	
Label_403:
	IsPlayerActor(var_6_object, var_9_bool); // 0x193 Func
	var_47_bool = var_9_bool == 0; // 0x195 Not
	if(var_47_bool == 0) goto Label_408; // 0x196 JumpB
	return 4; // 0x197 Return
	
Label_408:
	var_48_int = 0; var_49_object = Obj(); // 0x198 PushV
	var_49_object = var_6_object; // 0x199 Mov
	func_1740(var_49_object); // 0x19a NEW_2
	var_10_int = var_48_int; // 0x19b Mov
	var_50_int = 0; // 0x19d PushI
	var_51_bool = var_10_int > var_50_int; // 0x19e GT
	if(var_51_bool == 0) goto Label_431; // 0x19f JumpB
	var_52_int = 1; // 0x1a0 PushI
	var_53_bool = var_10_int > var_52_int; // 0x1a1 GT
	if(var_53_bool == 0) goto Label_422; // 0x1a2 JumpB
	func_375(var_10_int); // 0x1a4 NEW_2
	
Label_422:
	var_55_object = Obj(); // 0x1a6 PushV
	var_55_object = var_6_object; // 0x1a7 Mov
	func_1743(var_55_object); // 0x1a8 NEW_2
	var_2_bool = 1; // 0x1aa TMovB
	var_194_int = 110; // 0x1ab PushI
	var_195_float = 10.0; // 0x1ac PushF
	SetTimer(var_194_int, var_195_float); // 0x1ad Func
	
Label_431:
	return 4; // 0x1af Return
}


func_1420(var_31_string)
{
	var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x58c PushV
	IsExisting3DSound(var_40_bool, var_31_string); // 0x58d Func
	var_48_bool = var_40_bool == 0; // 0x58f Not
	if(var_48_bool == 0) goto Label_1445; // 0x590 JumpB
	var_41_int = 0; // 0x591 MovI
	
Label_1426:
	var_49_int = 1; // 0x592 PushI
	var_50_int = var_41_int + var_49_int; // 0x593 Add
	var_51_int = var_31_string + var_50_int; // 0x594 Add
	IsExisting3DSound(var_42_bool, var_51_int); // 0x595 Func
	var_52_bool = var_42_bool == 0; // 0x597 Not
	if(var_52_bool == 0) goto Label_1434; // 0x598 JumpB
	goto Label_1437; // 0x599 Jump
	
Label_1437:
	var_53_bool = var_41_int == 0; // 0x59d Not
	if(var_53_bool == 0) goto Label_1440; // 0x59e JumpB
	return 16; // 0x59f Return
	
Label_1440:
	irand(var_43_int, var_41_int); // 0x5a0 Func
	var_54_int = 1; // 0x5a2 PushI
	var_55_int = var_43_int + var_54_int; // 0x5a3 Add
	var_31_string = var_31_string + var_55_int; // 0x5a4 Add2
	
Label_1445:
	Is3DSoundLoaded(var_44_bool, var_31_string); // 0x5a5 Func
	var_56_bool = var_44_bool; // 0x5a7 Push
	if(var_56_bool == 0) goto Label_1460; // 0x5a8 JumpB
	GetEyesHeight(var_45_float); // 0x5a9 Func
	GetDirection(var_46_cvector); // 0x5ab Func
	var_57_int = 50; // 0x5ad PushI
	var_47_cvector = var_46_cvector * var_57_int; // 0x5ae Mult2
	var_58_float = GetByIndex(var_47_cvector, 1); // 0x5af PushE
	var_58_float = var_58_float + var_45_float; // 0x5b0 Add2
	SetByIndex(var_47_cvector, 1) = var_58_float; // 0x5b1 PopE
	PlayGlobalSound(var_31_string, var_47_cvector); // 0x5b2 Func
	
Label_1460:
	return 16; // 0x5b4 Return
	
Label_1434:
	var_59_int = 1; // 0x59a PushI
	var_41_int = var_41_int + var_59_int; // 0x59b Add2
	goto Label_1426; // 0x59c Jump
}


func_939(var_64_bool, var_65_object)
{
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_bool = 0; var_73_bool = 0; // 0x3ac PushV
	var_69_object = var_65_object; // 0x3ad Mov
	var_70_float = 150; // 0x3ae MovI
	var_71_float = 3000; // 0x3af MovI
	var_72_bool = 0; // 0x3b0 MovB
	var_73_bool = 1; // 0x3b1 MovB
	func_952(var_64_bool, var_65_object, var_68_bool, var_69_object, var_70_float, var_71_float, var_72_bool, var_73_bool); // 0x3b2 NEW_2
	var_64_bool = var_68_bool; // 0x3b3 Mov
	return 0; // 0x3b5 Return
}


func_432(var_0_bool, var_1_bool)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; // 0x1b0 PushV
	var_0_bool = 0; // 0x1b1 TMovB
	var_1_bool = 0; // 0x1b2 TMovB
	var_26_float = 0.5; // 0x1b3 PushF
	rand(var_20_float, var_26_float); // 0x1b4 Func
	Sleep(var_20_float); // 0x1b6 Func
	
Label_440:
	var_27_bool = var_0_bool == 0; // 0x1b8 Not
	if(var_27_bool == 0) goto Label_490; // 0x1b9 JumpB
	var_28_bool = var_1_bool == 0; // 0x1ba Not
	if(var_28_bool == 0) goto Label_459; // 0x1bb JumpB
	
Label_444:
	GetPosition(var_22_cvector); // 0x1bc Func
	var_29_float = 0; // 0x1be PushV
	func_491(var_29_float); // 0x1bf NEW_2
	GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, var_29_float, var_23_bool); // 0x1c1 Func
	var_32_bool = var_23_bool; // 0x1c3 Push
	if(var_32_bool == 0) goto Label_454; // 0x1c4 JumpB
	goto Label_458; // 0x1c5 Jump
	
Label_458:
	goto Label_460; // 0x1ca Jump
	
Label_460:
	var_33_object = Obj(); var_34_cvector = CVector(0,0,0); // 0x1cc PushV
	var_34_cvector = var_21_cvector; // 0x1cd Mov
	func_519(var_33_object, var_34_cvector); // 0x1ce NEW_2
	var_24_object = var_33_object; // 0x1cf Mov
	var_37_bool = var_24_object != 0; // 0x1d1 NullNeq
	if(var_37_bool == 0) goto Label_485; // 0x1d2 JumpB
	RotatePath(var_24_object, var_25_bool); // 0x1d3 Func
	var_38_bool = var_25_bool; // 0x1d5 Push
	if(var_38_bool == 0) goto Label_484; // 0x1d6 JumpB
	var_39_bool = 0; // 0x1d7 PushV
	func_517(var_39_bool); // 0x1d8 NEW_2
	FollowPath(var_24_object, var_39_bool, var_25_bool); // 0x1da Func
	var_24_object = 0; // 0x1dc SetNull
	var_40_bool = var_25_bool; // 0x1dd Push
	if(var_40_bool == 0) goto Label_484; // 0x1de JumpB
	TaskCall(2); // 0x1e0 TaskCall
	func_689(); // 0x1e1 NEW_2
	TaskReturn(); // 0x1e2 TaskReturn
	
Label_484:
	goto Label_488; // 0x1e4 Jump
	
Label_488:
	var_24_object = 0; // 0x1e8 SetNull
	goto Label_440; // 0x1e9 Jump
	
Label_485:
	var_92_int = 1; // 0x1e5 PushI
	Sleep(var_92_int); // 0x1e6 Func
	
Label_454:
	var_93_int = 1; // 0x1c6 PushI
	Sleep(var_93_int); // 0x1c7 Func
	goto Label_444; // 0x1c9 Jump
	
Label_459:
	var_1_bool = 0; // 0x1cb TMovB
	
Label_490:
	return 12; // 0x1ea Return
}


func_1461(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x5b5 PushV
	self(var_13_object); // 0x5b6 Func
	var_11_object = var_13_object; // 0x5b8 Mov
	return 2; // 0x5b9 Return
}


func_950(var_108_string)
{
	var_108_string = "zwalk"; // 0x3b6 MovS
	return 0; // 0x3b7 Return
}


func_952(var_0_bool, var_1_bool, var_68_bool, var_69_object, var_70_float, var_71_float, var_72_bool, var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0; var_76_object = Obj(); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_object = Obj(); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj(); // 0x3b8 PushV
	var_0_bool = 0; // 0x3b9 TMovB
	var_1_bool = var_69_object; // 0x3ba TMov
	var_83_bool = var_73_bool; // 0x3bb Mov
	
Label_956:
	var_90_bool = 0; var_91_object = Obj(); // 0x3bc PushV
	var_91_object = var_69_object; // 0x3bd Mov
	func_1092(var_90_bool, var_91_object); // 0x3be NEW_2
	var_94_bool = var_90_bool == 0; // 0x3c0 Not
	if(var_94_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_68_bool = 0; // 0x3c2 MovB
	return 16; // 0x3c3 Return
	
Label_964:
	GetPosition(var_85_cvector); // 0x3c4 ObjFunc
	GetPosition(var_86_cvector); // 0x3c6 Func
	var_87_cvector = var_85_cvector - var_86_cvector; // 0x3c8 Sub2
	var_88_float = var_87_cvector | var_87_cvector; // 0x3c9 Or2
	var_95_bool = 0; // 0x3ca PushV
	var_95_bool = 0; // 0x3cb MovB
	var_96_int = 0; // 0x3cc PushI
	var_97_bool = var_71_float > var_96_int; // 0x3cd GT
	if(var_97_bool == 0) goto Label_979; // 0x3ce JumpB
	var_98_float = var_71_float * var_71_float; // 0x3cf Mult
	var_99_bool = var_88_float > var_98_float; // 0x3d0 GT
	if(var_99_bool == 0) goto Label_979; // 0x3d1 JumpB
	var_95_bool = 1; // 0x3d2 MovB
	
Label_979:
	if(var_95_bool == 0) goto Label_984; // 0x3d3 JumpB
	Stop(); // 0x3d4 Func
	var_68_bool = 0; // 0x3d6 MovB
	return 16; // 0x3d7 Return
	
Label_984:
	var_100_float = var_70_float * var_70_float; // 0x3d8 Mult
	var_101_bool = var_88_float > var_100_float; // 0x3d9 GT
	if(var_101_bool == 0) goto Label_1046; // 0x3da JumpB
	GetPFPosition(var_85_cvector); // 0x3db ObjFunc
	FindPathTo(var_89_object, var_85_cvector); // 0x3dd Func
	var_102_bool = var_89_object != 0; // 0x3df NullNeq
	if(var_102_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_84_object = var_89_object; // 0x3e1 Mov
	var_89_object = 0; // 0x3e2 SetNull
	
Label_995:
	var_103_bool = var_84_object != 0; // 0x3e3 NullNeq
	if(var_103_bool == 0) goto Label_1028; // 0x3e4 JumpB
	var_104_bool = var_83_bool; // 0x3e5 Push
	if(var_104_bool == 0) goto Label_1005; // 0x3e6 JumpB
	var_83_bool = 0; // 0x3e7 MovB
	RotatePath(var_84_object, var_82_bool); // 0x3e8 Func
	var_105_bool = var_82_bool == 0; // 0x3ea Not
	if(var_105_bool == 0) goto Label_1005; // 0x3eb JumpB
	goto Label_1052; // 0x3ec Jump
	
Label_1052:
	var_68_bool = !var_0_bool; // 0x41c Not2
	return 16; // 0x41d Return
	
Label_1005:
	var_106_int = 0; // 0x3ed PushI
	var_107_float = 0.3; // 0x3ee PushF
	SetTimer(var_106_int, var_107_float); // 0x3ef Func
	var_108_string = ""; // 0x3f1 PushV
	func_950(var_108_string); // 0x3f2 NEW_2
	var_109_string = ""; // 0x3f4 PushV
	func_1099(var_109_string); // 0x3f5 NEW_2
	FollowPath(var_84_object, var_72_bool, var_82_bool, var_108_string, var_109_string); // 0x3f7 Func
	var_110_bool = var_82_bool == 0; // 0x3f9 Not
	if(var_110_bool == 0) goto Label_1026; // 0x3fa JumpB
	var_111_bool = var_0_bool; // 0x3fb PushT
	if(var_111_bool == 0) goto Label_1024; // 0x3fc JumpB
	var_84_object = 0; // 0x3fd SetNull
	goto Label_1052; // 0x3fe Jump
	
Label_1024:
	goto Label_1051; // 0x400 Jump
	
Label_1051:
	goto Label_956; // 0x41b Jump
	
Label_1026:
	var_84_object = 0; // 0x402 SetNull
	goto Label_1044; // 0x403 Jump
	
Label_1044:
	var_89_object = 0; // 0x414 SetNull
	goto Label_1050; // 0x415 Jump
	
Label_1050:
	var_84_object = 0; // 0x41a SetNull
	
Label_1028:
	var_112_int = 0; // 0x404 PushI
	KillTimer(var_112_int); // 0x405 Func
	var_113_float = 0.5; // 0x407 PushF
	Sleep(var_113_float, var_82_bool); // 0x408 Func
	var_114_bool = var_82_bool == 0; // 0x40a Not
	if(var_114_bool == 0) goto Label_1040; // 0x40b JumpB
	var_115_bool = var_0_bool; // 0x40c PushT
	if(var_115_bool == 0) goto Label_1040; // 0x40d JumpB
	var_84_object = 0; // 0x40e SetNull
	goto Label_1052; // 0x40f Jump
	
Label_1040:
	var_116_int = 0; // 0x410 PushI
	var_117_float = 0.3; // 0x411 PushF
	SetTimer(var_116_int, var_117_float); // 0x412 Func
	
Label_1046:
	var_118_int = 0; // 0x416 PushI
	KillTimer(var_118_int); // 0x417 Func
	goto Label_1052; // 0x419 Jump
}


func_1467(var_37_cvector, var_38_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x5bb PushV
	var_47_int = var_38_cvector | var_38_cvector; // 0x5bc Or
	var_46_float = sqrt(var_47_int); // 0x5bd Sqrt2
	var_48_float = 0.0; // 0x5be PushF
	var_49_bool = var_46_float < var_48_float; // 0x5bf LT
	if(var_49_bool == 0) goto Label_1475; // 0x5c0 JumpB
	var_37_cvector = CVector(0.0, 0.0, 0.0); // 0x5c1 MovV
	return 2; // 0x5c2 Return
	
Label_1475:
	var_37_cvector = var_38_cvector / var_38_cvector; // 0x5c3 Div2
	return 2; // 0x5c4 Return
}


func_1477(var_122_float, var_123_float, var_124_float, var_125_float)
{
	var_126_bool = var_123_float < var_124_float; // 0x5c6 LT
	if(var_126_bool == 0) goto Label_1482; // 0x5c7 JumpB
	var_122_float = var_124_float; // 0x5c8 Mov
	return 0; // 0x5c9 Return
	
Label_1482:
	var_127_bool = var_123_float > var_125_float; // 0x5ca GT
	if(var_127_bool == 0) goto Label_1486; // 0x5cb JumpB
	var_122_float = var_125_float; // 0x5cc Mov
	return 0; // 0x5cd Return
	
Label_1486:
	var_122_float = var_123_float; // 0x5ce Mov
	return 0; // 0x5cf Return
}


func_1488(var_93_bool, var_94_object, var_95_float)
{
	var_96_bool = var_94_object == 0; // 0x5d1 Not
	if(var_96_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_93_bool = 0; // 0x5d3 MovB
	return 0; // 0x5d4 Return
	
Label_1493:
	var_97_int = 0; // 0x5d5 PushI
	var_98_bool = var_95_float > var_97_int; // 0x5d6 GT
	if(var_98_bool == 0) goto Label_1500; // 0x5d7 JumpB
	var_99_int = 8; // 0x5d8 PushI
	SendWorldWndMessage(var_99_int); // 0x5d9 Func
	goto Label_1509; // 0x5db Jump
	
Label_1509:
	var_100_float = 0; // 0x5e5 PushV
	var_100_float = var_95_float; // 0x5e6 Mov
	func_1533(var_100_float); // 0x5e7 NEW_2
	var_104_bool = 0; var_105_object = Obj(); var_106_string = ""; var_107_float = 0; var_108_float = 0; var_109_float = 0; // 0x5e9 PushV
	var_105_object = var_94_object; // 0x5ea Mov
	var_106_string = "reputation"; // 0x5eb MovS
	var_107_float = var_95_float; // 0x5ec Mov
	var_108_float = 0; // 0x5ed MovI
	var_109_float = 1; // 0x5ee MovI
	func_1133(var_104_bool, var_105_object, var_106_string, var_107_float, var_108_float, var_109_float); // 0x5ef NEW_2
	var_93_bool = 1; // 0x5f1 MovB
	return 0; // 0x5f2 Return
	
Label_1500:
	var_128_int = 0; // 0x5dc PushI
	var_129_bool = var_95_float < var_128_int; // 0x5dd LT
	if(var_129_bool == 0) goto Label_1507; // 0x5de JumpB
	var_130_int = 9; // 0x5df PushI
	SendWorldWndMessage(var_130_int); // 0x5e0 Func
	goto Label_1509; // 0x5e2 Jump
	
Label_1507:
	var_93_bool = 0; // 0x5e3 MovB
	return 0; // 0x5e4 Return
}


func_491(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x1eb PushV
	GetCameraFarDistance(var_31_float); // 0x1ec Func
	var_29_float = var_31_float; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_1523(var_187_float)
{
	var_188_object = Obj(); var_189_object = Obj(); // 0x5f3 PushV
	CreateFloatVector(var_189_object); // 0x5f4 Func
	add(var_187_float); // 0x5f6 ObjFunc
	var_190_int = 14; // 0x5f8 PushI
	SendWorldWndMessage(var_190_int, var_189_object); // 0x5f9 Func
	return 2; // 0x5fb Return
}


func_503(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1f7 TMovB
	var_1_bool = 0; // 0x1f8 TMovB
	Stop(); // 0x1f9 Func
	StopGroup0(); // 0x1fb Func
	return 0; // 0x1fd Return
}


func_1533(var_100_float)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x5fd PushV
	CreateFloatVector(var_102_object); // 0x5fe Func
	add(var_100_float); // 0x600 ObjFunc
	var_103_int = 16; // 0x602 PushI
	SendWorldWndMessage(var_103_int, var_102_object); // 0x603 Func
	return 2; // 0x605 Return
}


func_510(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1fe TMovB
	var_1_bool = 1; // 0x1ff TMovB
	Stop(); // 0x200 Func
	StopGroup0(); // 0x202 Func
	return 0; // 0x204 Return
}


