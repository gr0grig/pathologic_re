task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x1c PushV
	var_11_int = 0; var_12_object = Obj(); // 0x1d PushV
	var_12_object = var_8_bool; // 0x1e Mov
	func_1605(var_12_object); // 0x1f NEW_2
	var_10_int = var_11_int; // 0x20 Mov
	var_13_int = 0; // 0x22 PushI
	var_14_bool = var_10_int > var_13_int; // 0x23 GT
	if(var_14_bool == 0) goto Label_41; // 0x24 JumpB
	var_15_object = Obj(); // 0x25 PushV
	var_15_object = var_8_bool; // 0x26 Mov
	func_1608(); // 0x27 NEW_2
	
Label_41:
	return 2; // 0x29 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_1612(); // 0x2b NEW_2
	return 0; // 0x2d Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0; // 0xa4 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	return 0; // 0xa6 Return
}


task_1_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0; // 0xa8 Return
}


task_2_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0xa9 PushV
	var_11_int = 0; var_12_object = Obj(); // 0xaa PushV
	var_12_object = var_8_bool; // 0xab Mov
	func_1605(var_12_object); // 0xac NEW_2
	var_10_int = var_11_int; // 0xad Mov
	var_13_int = 0; // 0xaf PushI
	var_14_bool = var_10_int > var_13_int; // 0xb0 GT
	if(var_14_bool == 0) goto Label_188; // 0xb1 JumpB
	var_15_int = 1; // 0xb2 PushI
	var_16_bool = var_10_int > var_15_int; // 0xb3 GT
	if(var_16_bool == 0) goto Label_184; // 0xb4 JumpB
	func_414(); // 0xb6 NEW_2
	
Label_184:
	var_17_object = Obj(); // 0xb8 PushV
	var_17_object = var_8_bool; // 0xb9 Mov
	func_1608(); // 0xba NEW_2
	
Label_188:
	return 2; // 0xbc Return
}


task_2_event_17(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0xbd PushV
	var_11_object = Obj(); // 0xbe PushV
	var_11_object = var_8_bool; // 0xbf Mov
	func_1503(var_11_object); // 0xc0 NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0xc2 PushV
	var_21_object = var_8_bool; // 0xc3 Mov
	func_1569(var_20_int, var_21_object); // 0xc4 NEW_2
	var_10_int = var_20_int; // 0xc5 Mov
	var_56_int = 0; // 0xc7 PushI
	var_57_bool = var_10_int > var_56_int; // 0xc8 GT
	if(var_57_bool == 0) goto Label_212; // 0xc9 JumpB
	var_58_int = 1; // 0xca PushI
	var_59_bool = var_10_int > var_58_int; // 0xcb GT
	if(var_59_bool == 0) goto Label_208; // 0xcc JumpB
	func_414(); // 0xce NEW_2
	
Label_208:
	var_60_object = Obj(); // 0xd0 PushV
	var_60_object = var_8_bool; // 0xd1 Mov
	func_1579(var_60_object); // 0xd2 NEW_2
	
Label_212:
	return 2; // 0xd4 Return
}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0xd5 PushV
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0xd6 PushV
	var_14_object = var_8_object; // 0xd7 Mov
	var_15_object = var_9_cvector; // 0xd8 Mov
	var_16_bool = var_10_bool; // 0xd9 Mov
	func_1649(var_16_bool); // 0xda NEW_2
	if(var_13_bool == 0) goto Label_240; // 0xdc JumpB
	var_17_int = 0; var_18_object = Obj(); var_19_bool = 0; // 0xdd PushV
	var_18_object = var_8_object; // 0xde Mov
	var_19_bool = var_10_bool; // 0xdf Mov
	func_1587(var_18_object, var_19_bool); // 0xe0 NEW_2
	var_12_int = var_17_int; // 0xe1 Mov
	var_54_int = 0; // 0xe3 PushI
	var_55_bool = var_12_int > var_54_int; // 0xe4 GT
	if(var_55_bool == 0) goto Label_240; // 0xe5 JumpB
	var_56_int = 1; // 0xe6 PushI
	var_57_bool = var_12_int > var_56_int; // 0xe7 GT
	if(var_57_bool == 0) goto Label_236; // 0xe8 JumpB
	func_414(); // 0xea NEW_2
	
Label_236:
	var_58_object = Obj(); // 0xec PushV
	var_58_object = var_8_object; // 0xed Mov
	func_1597(var_58_object); // 0xee NEW_2
	
Label_240:
	return 2; // 0xf0 Return
}


task_2_event_40(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0xf1 PushV
	var_11_int = 0; var_12_object = Obj(); // 0xf2 PushV
	var_12_object = var_8_bool; // 0xf3 Mov
	func_1618(var_12_object); // 0xf4 NEW_2
	var_10_int = var_11_int; // 0xf5 Mov
	var_13_int = 0; // 0xf7 PushI
	var_14_bool = var_10_int > var_13_int; // 0xf8 GT
	if(var_14_bool == 0) goto Label_260; // 0xf9 JumpB
	var_15_int = 1; // 0xfa PushI
	var_16_bool = var_10_int > var_15_int; // 0xfb GT
	if(var_16_bool == 0) goto Label_256; // 0xfc JumpB
	func_414(); // 0xfe NEW_2
	
Label_256:
	var_17_object = Obj(); // 0x100 PushV
	var_17_object = var_8_bool; // 0x101 Mov
	func_1621(); // 0x102 NEW_2
	
Label_260:
	return 2; // 0x104 Return
}


task_2_event_42(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x105 PushV
	var_12_bool = 0; var_13_object = Obj(); var_14_string = ""; // 0x106 PushV
	var_13_object = var_8_cvector; // 0x107 Mov
	var_14_string = var_9_bool; // 0x108 Mov
	func_1417(var_12_bool, var_13_object, var_14_string); // 0x109 NEW_2
	if(var_12_bool == 0) goto Label_277; // 0x10b JumpB
	func_414(); // 0x10d NEW_2
	var_27_object = Obj(); var_28_string = ""; // 0x10f PushV
	var_27_object = var_8_cvector; // 0x110 Mov
	var_28_string = var_9_bool; // 0x111 Mov
	func_1449(var_27_object, var_28_string); // 0x112 NEW_2
	goto Label_297; // 0x114 Jump
	
Label_297:
	return 2; // 0x129 Return
	
Label_277:
	var_38_int = 0; var_39_string = ""; var_40_object = Obj(); // 0x115 PushV
	var_39_string = var_9_bool; // 0x116 Mov
	var_40_object = var_8_cvector; // 0x117 Mov
	func_1623(var_40_object); // 0x118 NEW_2
	var_11_int = var_38_int; // 0x119 Mov
	var_41_int = 0; // 0x11b PushI
	var_42_bool = var_11_int > var_41_int; // 0x11c GT
	if(var_42_bool == 0) goto Label_297; // 0x11d JumpB
	var_43_int = 1; // 0x11e PushI
	var_44_bool = var_11_int > var_43_int; // 0x11f GT
	if(var_44_bool == 0) goto Label_292; // 0x120 JumpB
	func_414(); // 0x122 NEW_2
	
Label_292:
	var_45_string = ""; var_46_object = Obj(); // 0x124 PushV
	var_45_string = var_9_bool; // 0x125 Mov
	var_46_object = var_8_cvector; // 0x126 Mov
	func_1626(); // 0x127 NEW_2
}


task_2_event_26(var_0_string, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_string = ""; // 0x12b PushV
	var_10_string = var_8_bool; // 0x12c Mov
	func_1516(var_9_bool, var_10_string); // 0x12d NEW_2
	if(var_9_bool == 0) goto Label_311; // 0x12f JumpB
	func_414(); // 0x131 NEW_2
	var_18_string = ""; // 0x133 PushV
	var_18_string = var_8_bool; // 0x134 Mov
	func_1532(var_18_string); // 0x135 NEW_2
	
Label_311:
	return 0; // 0x137 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_414(); // 0x139 NEW_2
	func_1612(); // 0x13c NEW_2
	return 0; // 0x13e Return
}


task_2_event_1(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x140 PushV
	var_10_object = var_8_bool; // 0x141 Mov
	func_1474(var_9_bool, var_10_object); // 0x142 NEW_2
	if(var_9_bool == 0) goto Label_332; // 0x144 JumpB
	func_414(); // 0x146 NEW_2
	var_21_object = Obj(); // 0x148 PushV
	var_21_object = var_8_bool; // 0x149 Mov
	func_1497(var_21_object); // 0x14a NEW_2
	
Label_332:
	return 0; // 0x14c Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x1ba PushV
	var_11_int = 0; var_12_object = Obj(); // 0x1bb PushV
	var_12_object = var_8_bool; // 0x1bc Mov
	func_1605(var_12_object); // 0x1bd NEW_2
	var_10_int = var_11_int; // 0x1be Mov
	var_13_int = 0; // 0x1c0 PushI
	var_14_bool = var_10_int > var_13_int; // 0x1c1 GT
	if(var_14_bool == 0) goto Label_461; // 0x1c2 JumpB
	var_15_int = 1; // 0x1c3 PushI
	var_16_bool = var_10_int > var_15_int; // 0x1c4 GT
	if(var_16_bool == 0) goto Label_457; // 0x1c5 JumpB
	func_677(var_9_int, var_10_int); // 0x1c7 NEW_2
	
Label_457:
	var_17_object = Obj(); // 0x1c9 PushV
	var_17_object = var_8_bool; // 0x1ca Mov
	func_1608(); // 0x1cb NEW_2
	
Label_461:
	return 2; // 0x1cd Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x1ce PushV
	var_11_object = Obj(); // 0x1cf PushV
	var_11_object = var_8_bool; // 0x1d0 Mov
	func_1503(var_11_object); // 0x1d1 NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0x1d3 PushV
	var_21_object = var_8_bool; // 0x1d4 Mov
	func_1569(var_20_int, var_21_object); // 0x1d5 NEW_2
	var_10_int = var_20_int; // 0x1d6 Mov
	var_56_int = 0; // 0x1d8 PushI
	var_57_bool = var_10_int > var_56_int; // 0x1d9 GT
	if(var_57_bool == 0) goto Label_485; // 0x1da JumpB
	var_58_int = 1; // 0x1db PushI
	var_59_bool = var_10_int > var_58_int; // 0x1dc GT
	if(var_59_bool == 0) goto Label_481; // 0x1dd JumpB
	func_677(var_9_int, var_10_int); // 0x1df NEW_2
	
Label_481:
	var_60_object = Obj(); // 0x1e1 PushV
	var_60_object = var_8_bool; // 0x1e2 Mov
	func_1579(var_60_object); // 0x1e3 NEW_2
	
Label_485:
	return 2; // 0x1e5 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x1e6 PushV
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; // 0x1e7 PushV
	var_14_object = var_8_object; // 0x1e8 Mov
	var_15_object = var_9_cvector; // 0x1e9 Mov
	var_16_bool = var_10_bool; // 0x1ea Mov
	func_1649(var_16_bool); // 0x1eb NEW_2
	if(var_13_bool == 0) goto Label_513; // 0x1ed JumpB
	var_17_int = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1ee PushV
	var_18_object = var_8_object; // 0x1ef Mov
	var_19_bool = var_10_bool; // 0x1f0 Mov
	func_1587(var_18_object, var_19_bool); // 0x1f1 NEW_2
	var_12_int = var_17_int; // 0x1f2 Mov
	var_54_int = 0; // 0x1f4 PushI
	var_55_bool = var_12_int > var_54_int; // 0x1f5 GT
	if(var_55_bool == 0) goto Label_513; // 0x1f6 JumpB
	var_56_int = 1; // 0x1f7 PushI
	var_57_bool = var_12_int > var_56_int; // 0x1f8 GT
	if(var_57_bool == 0) goto Label_509; // 0x1f9 JumpB
	func_677(var_11_int, var_12_int); // 0x1fb NEW_2
	
Label_509:
	var_58_object = Obj(); // 0x1fd PushV
	var_58_object = var_8_object; // 0x1fe Mov
	func_1597(var_58_object); // 0x1ff NEW_2
	
Label_513:
	return 2; // 0x201 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x202 PushV
	var_11_int = 0; var_12_object = Obj(); // 0x203 PushV
	var_12_object = var_8_bool; // 0x204 Mov
	func_1618(var_12_object); // 0x205 NEW_2
	var_10_int = var_11_int; // 0x206 Mov
	var_13_int = 0; // 0x208 PushI
	var_14_bool = var_10_int > var_13_int; // 0x209 GT
	if(var_14_bool == 0) goto Label_533; // 0x20a JumpB
	var_15_int = 1; // 0x20b PushI
	var_16_bool = var_10_int > var_15_int; // 0x20c GT
	if(var_16_bool == 0) goto Label_529; // 0x20d JumpB
	func_677(var_9_int, var_10_int); // 0x20f NEW_2
	
Label_529:
	var_17_object = Obj(); // 0x211 PushV
	var_17_object = var_8_bool; // 0x212 Mov
	func_1621(); // 0x213 NEW_2
	
Label_533:
	return 2; // 0x215 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x216 PushV
	var_12_bool = 0; var_13_object = Obj(); var_14_string = ""; // 0x217 PushV
	var_13_object = var_8_cvector; // 0x218 Mov
	var_14_string = var_9_bool; // 0x219 Mov
	func_1417(var_12_bool, var_13_object, var_14_string); // 0x21a NEW_2
	if(var_12_bool == 0) goto Label_550; // 0x21c JumpB
	func_677(var_10_int, var_11_int); // 0x21e NEW_2
	var_27_object = Obj(); var_28_string = ""; // 0x220 PushV
	var_27_object = var_8_cvector; // 0x221 Mov
	var_28_string = var_9_bool; // 0x222 Mov
	func_1449(var_27_object, var_28_string); // 0x223 NEW_2
	goto Label_570; // 0x225 Jump
	
Label_570:
	return 2; // 0x23a Return
	
Label_550:
	var_38_int = 0; var_39_string = ""; var_40_object = Obj(); // 0x226 PushV
	var_39_string = var_9_bool; // 0x227 Mov
	var_40_object = var_8_cvector; // 0x228 Mov
	func_1623(var_40_object); // 0x229 NEW_2
	var_11_int = var_38_int; // 0x22a Mov
	var_41_int = 0; // 0x22c PushI
	var_42_bool = var_11_int > var_41_int; // 0x22d GT
	if(var_42_bool == 0) goto Label_570; // 0x22e JumpB
	var_43_int = 1; // 0x22f PushI
	var_44_bool = var_11_int > var_43_int; // 0x230 GT
	if(var_44_bool == 0) goto Label_565; // 0x231 JumpB
	func_677(var_10_int, var_11_int); // 0x233 NEW_2
	
Label_565:
	var_45_string = ""; var_46_object = Obj(); // 0x235 PushV
	var_45_string = var_9_bool; // 0x236 Mov
	var_46_object = var_8_cvector; // 0x237 Mov
	func_1626(); // 0x238 NEW_2
}


task_3_event_26(var_0_bool, var_1_bool, var_2_string, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_string = ""; // 0x23c PushV
	var_10_string = var_8_bool; // 0x23d Mov
	func_1516(var_9_bool, var_10_string); // 0x23e NEW_2
	if(var_9_bool == 0) goto Label_584; // 0x240 JumpB
	func_677(var_7_cvector, var_8_bool); // 0x242 NEW_2
	var_18_string = ""; // 0x244 PushV
	var_18_string = var_8_bool; // 0x245 Mov
	func_1532(var_18_string); // 0x246 NEW_2
	
Label_584:
	return 0; // 0x248 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x24a PushV
	var_10_object = var_8_bool; // 0x24b Mov
	func_1474(var_9_bool, var_10_object); // 0x24c NEW_2
	if(var_9_bool == 0) goto Label_598; // 0x24e JumpB
	func_677(var_7_cvector, var_8_bool); // 0x250 NEW_2
	var_21_object = Obj(); // 0x252 PushV
	var_21_object = var_8_bool; // 0x253 Mov
	func_1497(var_21_object); // 0x254 NEW_2
	
Label_598:
	return 0; // 0x256 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_677(var_6_cvector, var_7_bool); // 0x258 NEW_2
	func_1612(); // 0x25b NEW_2
	return 0; // 0x25d Return
}


task_3_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	RequestClearPath(var_8_bool); // 0x29f Func
	return 0; // 0x2a1 Return
}


task_3_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	Stop(); // 0x2a2 Func
	return 0; // 0x2a4 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_677(var_7_cvector, var_8_bool); // 0x2ae NEW_2
	var_9_object = Obj(); // 0x2b0 PushV
	var_9_object = var_8_bool; // 0x2b1 Mov
	func_1393(); // 0x2b2 NEW_2
	return 0; // 0x2b4 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_863(var_7_bool); // 0x2be NEW_2
	func_1612(); // 0x2c1 NEW_2
	return 0; // 0x2c3 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; // 0x32b PushV
	var_17_int = 120; // 0x32c PushI
	var_18_bool = var_8_bool != var_17_int; // 0x32d Neq
	if(var_18_bool == 0) goto Label_816; // 0x32e JumpB
	return 8; // 0x32f Return
	
Label_816:
	var_19_bool = var_0_bool == 0; // 0x330 NullEq
	if(var_19_bool == 0) goto Label_825; // 0x331 JumpB
	Stop(); // 0x332 Func
	var_20_int = 1; // 0x334 PushI
	KillTimer(var_20_int); // 0x335 Func
	var_2_object = 1; // 0x337 TMovB
	goto Label_862; // 0x338 Jump
	
Label_862:
	return 8; // 0x35e Return
	
Label_825:
	GetDirection(var_13_cvector); // 0x339 Func
	var_21_float = 7000.0; // 0x33b PushF
	FindDirLength(var_14_float, var_13_cvector, var_21_float); // 0x33c Func
	var_22_cvector = CVector(0,0,0); var_23_float = 0; // 0x33e PushV
	var_23_float = 1.74533; // 0x33f MovF
	func_708(var_22_cvector, var_23_float); // 0x340 NEW_2
	var_15_cvector = var_22_cvector; // 0x341 Mov
	var_16_float = var_15_cvector | var_15_cvector; // 0x343 Or2
	var_52_bool = 0; // 0x344 PushV
	var_52_bool = 0; // 0x345 MovB
	var_53_float = 2500.0; // 0x346 PushF
	var_54_bool = var_16_float >= var_53_float; // 0x347 GE
	if(var_54_bool == 0) goto Label_855; // 0x348 JumpB
	var_55_bool = 0; // 0x349 PushV
	var_55_bool = 1; // 0x34a MovB
	var_56_float = var_14_float * var_14_float; // 0x34b Mult
	var_57_float = 2.25; // 0x34c PushF
	var_58_float = var_56_float * var_57_float; // 0x34d Mult
	var_59_bool = var_16_float >= var_58_float; // 0x34e GE
	if(var_59_bool == 0) goto Label_853; // 0x34f JumpB
	var_60_bool = 0; // 0x350 PushV
	func_879(var_55_bool, var_60_bool); // 0x351 NEW_2
	if(var_60_bool == 0) goto Label_853; // 0x353 JumpB
	var_55_bool = 0; // 0x354 MovB
	
Label_853:
	if(var_55_bool == 0) goto Label_855; // 0x355 JumpB
	var_52_bool = 1; // 0x356 MovB
	
Label_855:
	if(var_52_bool == 0) goto Label_862; // 0x357 JumpB
	Stop(); // 0x358 Func
	var_80_cvector = CVector(0,0,0); // 0x35a PushV
	func_1082(var_80_cvector); // 0x35b NEW_2
	var_1_bool = var_80_cvector + var_15_cvector; // 0x35d Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_863(var_8_bool); // 0x368 NEW_2
	var_10_object = Obj(); // 0x36a PushV
	var_10_object = var_8_bool; // 0x36b Mov
	func_1393(); // 0x36c NEW_2
	return 0; // 0x36e Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; // 0x3e6 PushV
	var_17_int = 120; // 0x3e7 PushI
	var_18_bool = var_8_int != var_17_int; // 0x3e8 Neq
	if(var_18_bool == 0) goto Label_1003; // 0x3e9 JumpB
	return 8; // 0x3ea Return
	
Label_1003:
	var_19_bool = var_0_bool == 0; // 0x3eb NullEq
	if(var_19_bool == 0) goto Label_1012; // 0x3ec JumpB
	Stop(); // 0x3ed Func
	var_20_int = 1; // 0x3ef PushI
	KillTimer(var_20_int); // 0x3f0 Func
	var_2_object = 1; // 0x3f2 TMovB
	goto Label_1049; // 0x3f3 Jump
	
Label_1049:
	return 8; // 0x419 Return
	
Label_1012:
	GetDirection(var_13_cvector); // 0x3f4 Func
	var_21_float = 7000.0; // 0x3f6 PushF
	FindDirLength(var_14_float, var_13_cvector, var_21_float); // 0x3f7 Func
	var_22_cvector = CVector(0,0,0); var_23_float = 0; // 0x3f9 PushV
	var_23_float = 1.74533; // 0x3fa MovF
	func_895(var_22_cvector, var_23_float); // 0x3fb NEW_2
	var_15_cvector = var_22_cvector; // 0x3fc Mov
	var_16_float = var_15_cvector | var_15_cvector; // 0x3fe Or2
	var_52_bool = 0; // 0x3ff PushV
	var_52_bool = 0; // 0x400 MovB
	var_53_float = 2500.0; // 0x401 PushF
	var_54_bool = var_16_float >= var_53_float; // 0x402 GE
	if(var_54_bool == 0) goto Label_1042; // 0x403 JumpB
	var_55_bool = 0; // 0x404 PushV
	var_55_bool = 1; // 0x405 MovB
	var_56_float = var_14_float * var_14_float; // 0x406 Mult
	var_57_float = 2.25; // 0x407 PushF
	var_58_float = var_56_float * var_57_float; // 0x408 Mult
	var_59_bool = var_16_float >= var_58_float; // 0x409 GE
	if(var_59_bool == 0) goto Label_1040; // 0x40a JumpB
	var_60_bool = 0; // 0x40b PushV
	func_1066(var_55_bool, var_60_bool); // 0x40c NEW_2
	if(var_60_bool == 0) goto Label_1040; // 0x40e JumpB
	var_55_bool = 0; // 0x40f MovB
	
Label_1040:
	if(var_55_bool == 0) goto Label_1042; // 0x410 JumpB
	var_52_bool = 1; // 0x411 MovB
	
Label_1042:
	if(var_52_bool == 0) goto Label_1049; // 0x412 JumpB
	Stop(); // 0x413 Func
	var_80_cvector = CVector(0,0,0); // 0x415 PushV
	func_1082(var_80_cvector); // 0x416 NEW_2
	var_1_bool = var_80_cvector + var_15_cvector; // 0x418 Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_1050(var_8_object); // 0x423 NEW_2
	var_10_object = Obj(); // 0x425 PushV
	var_10_object = var_8_object; // 0x426 Mov
	func_1393(); // 0x427 NEW_2
	return 0; // 0x429 Return
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x564 PushV
	var_12_string = "health"; // 0x565 PushS
	var_13_bool = var_9_string == var_12_string; // 0x566 Eq
	if(var_13_bool == 0) goto Label_1392; // 0x567 JumpB
	var_14_string = "health"; // 0x568 PushS
	GetProperty(var_14_string, var_11_float); // 0x569 Func
	var_15_int = 0; // 0x56b PushI
	var_16_bool = var_11_float <= var_15_int; // 0x56c LE
	if(var_16_bool == 0) goto Label_1392; // 0x56d JumpB
	SignalDeath(var_8_object); // 0x56e Func
	
Label_1392:
	return 2; // 0x570 Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_object = Obj(); // 0x572 PushV
	var_9_object = var_8_object; // 0x573 Mov
	func_1372(var_9_object); // 0x574 NEW_2
	return 0; // 0x576 Return
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x578 PushV
	var_12_object = var_8_object; // 0x579 Mov
	var_13_int = var_9_int; // 0x57a Mov
	var_14_float = var_10_float; // 0x57b Mov
	func_1220(var_12_object, var_13_int, var_14_float); // 0x57c NEW_2
	return 0; // 0x57e Return
}


event_43(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x580 PushV
	var_14_object = var_8_object; // 0x581 Mov
	var_15_int = var_9_int; // 0x582 Mov
	var_16_float = var_10_float; // 0x583 Mov
	var_17_cvector = var_12_cvector; // 0x584 Mov
	var_18_cvector = var_13_cvector; // 0x585 Mov
	func_1288(var_16_float, var_17_cvector, var_18_cvector); // 0x586 NEW_2
	return 0; // 0x588 Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_bool = 1; // 0x1a3 PushB
	SensePlayerOnly(var_8_bool); // 0x1a4 Func
	func_1648(); // 0x1a7 NEW_2
	func_433(); // 0x1aa NEW_2
	
Label_428:
	func_606(var_6_cvector, var_7_bool); // 0x1ad NEW_2
	goto Label_428; // 0x1af Jump
}


func_1152(var_20_bool, var_21_object)
{
	var_22_int = 0; var_23_int = 0; // 0x480 PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x481 PushV
	var_25_object = var_21_object; // 0x482 Mov
	func_1116(var_24_bool, var_25_object); // 0x483 NEW_2
	var_41_bool = var_24_bool == 0; // 0x485 Not
	if(var_41_bool == 0) goto Label_1161; // 0x486 JumpB
	var_20_bool = 0; // 0x487 MovB
	return 2; // 0x488 Return
	
Label_1161:
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x489 PushV
	var_43_object = var_21_object; // 0x48a Mov
	var_44_string = "noaccess"; // 0x48b MovS
	func_1099(var_42_bool, var_43_object, var_44_string); // 0x48c NEW_2
	var_51_bool = var_42_bool == 0; // 0x48e Not
	if(var_51_bool == 0) goto Label_1170; // 0x48f JumpB
	var_20_bool = 1; // 0x490 MovB
	return 2; // 0x491 Return
	
Label_1170:
	var_52_string = "noaccess"; // 0x492 PushS
	GetProperty(var_52_string, var_23_int); // 0x493 ObjFunc
	var_53_int = 0; // 0x495 PushI
	var_20_bool = var_23_int == var_53_int; // 0x496 Eq2
	return 2; // 0x497 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_13_bool = 0; // 0x2 PushV
	func_1302(var_13_bool); // 0x3 NEW_2
	var_14_bool = var_13_bool == 0; // 0x5 Not
	if(var_14_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1288(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x508 PushV
	GetScene(var_21_object); // 0x509 Func
	var_23_string = "scripted"; // 0x50b PushS
	var_24_string = "blood_dir.xml"; // 0x50c PushS
	AddActorByType(var_22_object, var_23_string, var_21_object, var_17_cvector, var_18_cvector, var_24_string); // 0x50d Func
	var_25_object = Obj(); // 0x50f PushV
	var_25_object = var_14_object; // 0x510 Mov
	func_1176(var_25_object); // 0x511 NEW_2
	return 4; // 0x513 Return
}


func_137(var_33_string)
{
	RemoveRTEnvelope(); // 0x8a Func
	SetDeathState(); // 0x8c Func
	Stop(); // 0x8e Func
	StopAsync(); // 0x90 Func
	StopSecondaryAnimation(); // 0x92 Func
	var_34_string = ""; // 0x94 PushV
	var_34_string = var_33_string; // 0x95 Mov
	func_1307(var_34_string); // 0x96 NEW_2
	var_63_string = "all"; // 0x98 PushS
	PlayAnimation(var_63_string, var_33_string); // 0x99 Func
	WaitForAnimEnd(); // 0x9b Func
	var_64_string = "all"; // 0x9d PushS
	LockAnimationEnd(var_64_string, var_33_string); // 0x9e Func
	RemoveEnvelope(); // 0xa0 Func
	return 0; // 0xa2 Return
}


func_1417(var_12_bool, var_13_object, var_14_string)
{
	var_15_string = "unholster"; // 0x58a PushS
	var_16_bool = var_14_string == var_15_string; // 0x58b Eq
	if(var_16_bool == 0) goto Label_1428; // 0x58c JumpB
	var_17_bool = 0; var_18_object = Obj(); // 0x58d PushV
	var_18_object = var_13_object; // 0x58e Mov
	func_1628(var_18_object); // 0x58f NEW_2
	var_12_bool = var_17_bool; // 0x590 Mov
	return 0; // 0x592 Return
	
Label_1428:
	var_19_string = "player_shot"; // 0x594 PushS
	var_20_bool = var_14_string == var_19_string; // 0x595 Eq
	if(var_20_bool == 0) goto Label_1438; // 0x596 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x597 PushV
	var_22_object = var_13_object; // 0x598 Mov
	func_1633(var_22_object); // 0x599 NEW_2
	var_12_bool = var_21_bool; // 0x59a Mov
	return 0; // 0x59c Return
	
Label_1438:
	var_23_string = "battle"; // 0x59e PushS
	var_24_bool = var_14_string == var_23_string; // 0x59f Eq
	if(var_24_bool == 0) goto Label_1447; // 0x5a0 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x5a1 PushV
	var_26_object = var_13_object; // 0x5a2 Mov
	func_1638(var_26_object); // 0x5a3 NEW_2
	var_12_bool = var_25_bool; // 0x5a4 Mov
	return 0; // 0x5a6 Return
	
Label_1447:
	var_12_bool = 0; // 0x5a7 MovB
	return 0; // 0x5a8 Return
}


func_1545(var_64_string, var_65_int)
{
	var_66_string = ""; var_67_string = ""; // 0x609 PushV
	var_67_string = "idle"; // 0x60a MovS
	var_68_int = var_65_int; // 0x60b Push
	if(var_68_int == 0) goto Label_1550; // 0x60c JumpB
	var_67_string = var_67_string + var_65_int; // 0x60d Add2
	
Label_1550:
	var_64_string = var_67_string; // 0x60e Mov
	return 2; // 0x60f Return
}


func_13(var_10_object)
{
	EventDisable(0); // 0xe EventDisable
	var_11_object = Obj(); // 0xf PushV
	var_11_object = var_10_object; // 0x10 Mov
	func_46(var_11_object); // 0x11 NEW_2
	var_91_object = Obj(); // 0x13 PushV
	var_91_object = var_10_object; // 0x14 Mov
	func_1610(); // 0x15 NEW_2
	EventEnable(0); // 0x17 EventEnable
	
Label_24:
	Hold(); // 0x18 Func
	goto Label_24; // 0x1a Jump
}


func_1552(var_58_int)
{
	var_59_int = 0; var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x610 PushV
	var_61_int = 0; // 0x611 MovI
	
Label_1554:
	var_63_string = "all"; // 0x612 PushS
	var_64_string = ""; var_65_int = 0; // 0x613 PushV
	var_65_int = var_61_int; // 0x614 Mov
	func_1545(var_64_string, var_65_int); // 0x615 NEW_2
	HasAnimation(var_62_bool, var_63_string, var_64_string); // 0x617 Func
	var_69_bool = var_62_bool == 0; // 0x619 Not
	if(var_69_bool == 0) goto Label_1564; // 0x61a JumpB
	goto Label_1567; // 0x61b Jump
	
Label_1567:
	var_58_int = var_61_int; // 0x61f Mov
	return 4; // 0x620 Return
	
Label_1564:
	var_70_int = 1; // 0x61c PushI
	var_61_int = var_61_int + var_70_int; // 0x61d Add2
	goto Label_1554; // 0x61e Jump
}


func_1302(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x516 PushV
	IsLoaded(var_11_bool); // 0x517 Func
	var_9_bool = var_11_bool; // 0x519 Mov
	return 2; // 0x51a Return
}


func_1176(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x498 PushV
	var_40_bool = var_25_object == 0; // 0x499 NullEq
	if(var_40_bool == 0) goto Label_1180; // 0x49a JumpB
	return 14; // 0x49b Return
	
Label_1180:
	IsDead(var_33_bool); // 0x49c Func
	var_41_bool = var_33_bool; // 0x49e Push
	if(var_41_bool == 0) goto Label_1185; // 0x49f JumpB
	return 14; // 0x4a0 Return
	
Label_1185:
	GetSecondaryAnimationType(var_34_int); // 0x4a1 Func
	var_42_int = 0; // 0x4a3 PushI
	var_43_bool = var_34_int < var_42_int; // 0x4a4 LT
	if(var_43_bool == 0) goto Label_1191; // 0x4a5 JumpB
	return 14; // 0x4a6 Return
	
Label_1191:
	GetPosition(var_35_cvector); // 0x4a7 ObjFunc
	GetPosition(var_36_cvector); // 0x4a9 Func
	GetDirection(var_37_cvector); // 0x4ab Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x4ad Sub2
	var_44_float = GetByIndex(var_38_cvector, 0); // 0x4ae PushE
	var_45_float = GetByIndex(var_37_cvector, 0); // 0x4af PushE
	var_46_float = var_44_float * var_45_float; // 0x4b0 Mult
	var_47_float = GetByIndex(var_38_cvector, 2); // 0x4b1 PushE
	var_48_float = GetByIndex(var_37_cvector, 2); // 0x4b2 PushE
	var_49_float = var_47_float * var_48_float; // 0x4b3 Mult
	var_50_int = var_46_float + var_49_float; // 0x4b4 Add
	var_51_int = 0; // 0x4b5 PushI
	var_52_bool = var_50_int >= var_51_int; // 0x4b6 GE
	if(var_52_bool == 0) goto Label_1210; // 0x4b7 JumpB
	var_39_string = "fhit"; // 0x4b8 MovS
	goto Label_1211; // 0x4b9 Jump
	
Label_1211:
	var_53_string = "hit_react"; // 0x4bb PushS
	var_54_string = "1"; // 0x4bc PushS
	var_55_int = var_39_string + var_54_string; // 0x4bd Add
	var_56_string = "2"; // 0x4be PushS
	var_57_int = var_39_string + var_56_string; // 0x4bf Add
	var_58_int = -10; // 0x4c0 PushI
	FadeSecondaryAnimation(var_53_string, var_55_int, var_57_int, var_58_int); // 0x4c1 Func
	return 14; // 0x4c3 Return
	
Label_1210:
	var_39_string = "bhit"; // 0x4ba MovS
}


func_665(var_30_float)
{
	var_31_float = 0; var_32_float = 0; // 0x299 PushV
	GetCameraFarDistance(var_32_float); // 0x29a Func
	var_30_float = var_32_float; // 0x29c Mov
	return 2; // 0x29d Return
}


func_1050(var_2_object)
{
	Stop(); // 0x41a Func
	var_9_int = 120; // 0x41c PushI
	KillTimer(var_9_int); // 0x41d Func
	var_2_object = 1; // 0x41f TMovB
	return 0; // 0x420 Return
}


func_1307(var_34_string)
{
	var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x51b PushV
	IsExisting3DSound(var_43_bool, var_34_string); // 0x51c Func
	var_51_bool = var_43_bool == 0; // 0x51e Not
	if(var_51_bool == 0) goto Label_1332; // 0x51f JumpB
	var_44_int = 0; // 0x520 MovI
	
Label_1313:
	var_52_int = 1; // 0x521 PushI
	var_53_int = var_44_int + var_52_int; // 0x522 Add
	var_54_int = var_34_string + var_53_int; // 0x523 Add
	IsExisting3DSound(var_45_bool, var_54_int); // 0x524 Func
	var_55_bool = var_45_bool == 0; // 0x526 Not
	if(var_55_bool == 0) goto Label_1321; // 0x527 JumpB
	goto Label_1324; // 0x528 Jump
	
Label_1324:
	var_56_bool = var_44_int == 0; // 0x52c Not
	if(var_56_bool == 0) goto Label_1327; // 0x52d JumpB
	return 16; // 0x52e Return
	
Label_1327:
	irand(var_46_int, var_44_int); // 0x52f Func
	var_57_int = 1; // 0x531 PushI
	var_58_int = var_46_int + var_57_int; // 0x532 Add
	var_34_string = var_34_string + var_58_int; // 0x533 Add2
	
Label_1332:
	Is3DSoundLoaded(var_47_bool, var_34_string); // 0x534 Func
	var_59_bool = var_47_bool; // 0x536 Push
	if(var_59_bool == 0) goto Label_1347; // 0x537 JumpB
	GetEyesHeight(var_48_float); // 0x538 Func
	GetDirection(var_49_cvector); // 0x53a Func
	var_60_int = 50; // 0x53c PushI
	var_50_cvector = var_49_cvector * var_60_int; // 0x53d Mult2
	var_61_float = GetByIndex(var_50_cvector, 1); // 0x53e PushE
	var_61_float = var_61_float + var_48_float; // 0x53f Add2
	SetByIndex(var_50_cvector, 1) = var_61_float; // 0x540 PopE
	PlayGlobalSound(var_34_string, var_50_cvector); // 0x541 Func
	
Label_1347:
	return 16; // 0x543 Return
	
Label_1321:
	var_62_int = 1; // 0x529 PushI
	var_44_int = var_44_int + var_62_int; // 0x52a Add2
	goto Label_1313; // 0x52b Jump
}


func_412(var_83_bool)
{
	var_83_bool = 1; // 0x19c MovB
	return 0; // 0x19d Return
}


func_925(var_0_bool, var_1_bool, var_2_object, var_59_object)
{
	var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_float = 0; // 0x39d PushV
	var_0_bool = var_59_object; // 0x39e TMov
	var_73_cvector = CVector(0,0,0); var_74_float = 0; // 0x39f PushV
	var_74_float = 1.74533; // 0x3a0 MovF
	func_895(var_73_cvector, var_74_float); // 0x3a1 NEW_2
	var_68_cvector = var_73_cvector; // 0x3a2 Mov
	var_69_float = var_68_cvector | var_68_cvector; // 0x3a4 Or2
	var_103_float = 2500.0; // 0x3a5 PushF
	var_104_bool = var_69_float < var_103_float; // 0x3a6 LT
	if(var_104_bool == 0) goto Label_954; // 0x3a7 JumpB
	var_105_cvector = CVector(0,0,0); var_106_float = 0; // 0x3a8 PushV
	var_106_float = 2.61799; // 0x3a9 MovF
	func_895(var_105_cvector, var_106_float); // 0x3aa NEW_2
	var_68_cvector = var_105_cvector; // 0x3ab Mov
	var_69_float = var_68_cvector | var_68_cvector; // 0x3ad Or2
	var_107_float = 2500.0; // 0x3ae PushF
	var_108_bool = var_69_float < var_107_float; // 0x3af LT
	if(var_108_bool == 0) goto Label_954; // 0x3b0 JumpB
	var_109_string = "Can't retreat, distance: "; // 0x3b1 PushS
	var_110_float = sqrt(var_69_float); // 0x3b2 Sqrt
	var_111_int = var_109_string + var_110_float; // 0x3b3 Add
	Trace(var_111_int); // 0x3b4 Func
	var_112_float = 0.5; // 0x3b6 PushF
	Sleep(var_112_float); // 0x3b7 Func
	return 10; // 0x3b9 Return
	
Label_954:
	var_113_float = GetByIndex(var_68_cvector, 0); // 0x3ba PushE
	var_114_float = GetByIndex(var_68_cvector, 2); // 0x3bb PushE
	Rotate(var_113_float, var_114_float); // 0x3bc Func
	var_115_cvector = CVector(0,0,0); // 0x3be PushV
	func_1082(var_115_cvector); // 0x3bf NEW_2
	var_1_bool = var_115_cvector + var_68_cvector; // 0x3c1 Add2
	var_118_int = 120; // 0x3c2 PushI
	var_119_float = 0.5; // 0x3c3 PushF
	SetTimer(var_118_int, var_119_float); // 0x3c4 Func
	var_2_object = 0; // 0x3c6 TMovB
	
Label_967:
	var_120_int = 1; // 0x3c7 PushI
	MovePoint(var_120_int, var_120_int, var_70_bool); // 0x3c8 Func
	var_121_bool = var_70_bool; // 0x3ca Push
	if(var_121_bool == 0) goto Label_995; // 0x3cb JumpB
	var_122_bool = var_0_bool == 0; // 0x3cc NullEq
	if(var_122_bool == 0) goto Label_976; // 0x3cd JumpB
	goto Label_997; // 0x3ce Jump
	
Label_997:
	return 10; // 0x3e5 Return
	
Label_976:
	var_123_cvector = CVector(0,0,0); var_124_float = 0; // 0x3d0 PushV
	var_124_float = 2.61799; // 0x3d1 MovF
	func_895(var_123_cvector, var_124_float); // 0x3d2 NEW_2
	var_71_cvector = var_123_cvector; // 0x3d3 Mov
	var_72_float = var_71_cvector | var_71_cvector; // 0x3d5 Or2
	var_125_float = 2500.0; // 0x3d6 PushF
	var_126_bool = var_72_float >= var_125_float; // 0x3d7 GE
	if(var_126_bool == 0) goto Label_994; // 0x3d8 JumpB
	var_127_cvector = CVector(0,0,0); // 0x3d9 PushV
	func_1082(var_127_cvector); // 0x3da NEW_2
	var_1_bool = var_127_cvector + var_71_cvector; // 0x3dc Add2
	var_128_int = 120; // 0x3dd PushI
	var_129_float = 0.5; // 0x3de PushF
	SetTimer(var_128_int, var_129_float); // 0x3df Func
	goto Label_995; // 0x3e1 Jump
	
Label_995:
	var_130_bool = var_2_object == 0; // 0x3e3 Not
	if(var_130_bool == 0) goto Label_967; // 0x3e4 JumpB
	
Label_994:
	goto Label_997; // 0x3e2 Jump
}


func_414()
{
	StopAnimation(); // 0x19e Func
	StopGroup0(); // 0x1a0 Func
	return 0; // 0x1a2 Return
}


func_1569(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x622 PushV
	var_23_object = var_21_object; // 0x623 Mov
	func_1152(var_22_bool, var_23_object); // 0x624 NEW_2
	if(var_22_bool == 0) goto Label_1577; // 0x626 JumpB
	var_20_int = 2; // 0x627 MovI
	goto Label_1578; // 0x628 Jump
	
Label_1578:
	return 0; // 0x62a Return
	
Label_1577:
	var_20_int = 0; // 0x629 MovI
}


func_677(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x2a5 TMovB
	var_1_bool = 0; // 0x2a6 TMovB
	Stop(); // 0x2a7 Func
	StopGroup0(); // 0x2a9 Func
	return 0; // 0x2ab Return
}


func_1449(var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0x5aa PushS
	var_30_bool = var_28_string == var_29_string; // 0x5ab Eq
	if(var_30_bool == 0) goto Label_1458; // 0x5ac JumpB
	var_31_object = Obj(); // 0x5ad PushV
	var_31_object = var_27_object; // 0x5ae Mov
	func_1631(); // 0x5af NEW_2
	goto Label_1473; // 0x5b1 Jump
	
Label_1473:
	return 0; // 0x5c1 Return
	
Label_1458:
	var_32_string = "player_shot"; // 0x5b2 PushS
	var_33_bool = var_28_string == var_32_string; // 0x5b3 Eq
	if(var_33_bool == 0) goto Label_1466; // 0x5b4 JumpB
	var_34_object = Obj(); // 0x5b5 PushV
	var_34_object = var_27_object; // 0x5b6 Mov
	func_1636(); // 0x5b7 NEW_2
	goto Label_1473; // 0x5b9 Jump
	
Label_1466:
	var_35_string = "battle"; // 0x5ba PushS
	var_36_bool = var_28_string == var_35_string; // 0x5bb Eq
	if(var_36_bool == 0) goto Label_1473; // 0x5bc JumpB
	var_37_object = Obj(); // 0x5bd PushV
	var_37_object = var_27_object; // 0x5be Mov
	func_1641(); // 0x5bf NEW_2
}


func_1066(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x42a PushV
	GetDirection(var_63_cvector); // 0x42b Func
	var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0x42d PushV
	var_66_object = var_0_bool; // 0x42e MovT
	func_1087(var_66_object); // 0x42f NEW_2
	var_64_cvector = var_65_cvector; // 0x430 Mov
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x432 PushV
	var_72_cvector = var_63_cvector; // 0x433 Mov
	var_73_cvector = var_64_cvector; // 0x434 Mov
	func_1364(var_71_float, var_72_cvector, var_73_cvector); // 0x435 NEW_2
	var_79_float = -0.34202; // 0x437 PushF
	var_60_bool = var_71_float >= var_79_float; // 0x438 GE2
	return 4; // 0x439 Return
}


func_1579(var_60_object)
{
	var_61_object = Obj(); // 0x62c PushV
	var_61_object = var_60_object; // 0x62d Mov
	TaskCall(4); // 0x62e TaskCall
	func_738(var_62_object, var_63_cvector, var_64_bool, var_61_object); // 0x62f NEW_2
	TaskReturn(); // 0x630 TaskReturn
	return 0; // 0x632 Return
}


func_46(var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_string = ""; var_17_object = Obj(); var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2e PushV
	var_32_bool = var_11_object == 0; // 0x2f NullEq
	if(var_32_bool == 0) goto Label_54; // 0x30 JumpB
	var_33_string = ""; // 0x31 PushV
	var_33_string = "fdie"; // 0x32 MovS
	func_137(var_33_string); // 0x33 NEW_2
	goto Label_136; // 0x35 Jump
	
Label_136:
	return 20; // 0x88 Return
	
Label_54:
	GetPosition(var_22_cvector); // 0x36 ObjFunc
	GetPosition(var_23_cvector); // 0x38 Func
	GetDirection(var_24_cvector); // 0x3a Func
	var_25_cvector = var_23_cvector - var_22_cvector; // 0x3c Sub2
	var_65_float = GetByIndex(var_25_cvector, 0); // 0x3d PushE
	var_66_float = GetByIndex(var_24_cvector, 0); // 0x3e PushE
	var_67_float = var_65_float * var_66_float; // 0x3f Mult
	var_68_float = GetByIndex(var_25_cvector, 2); // 0x40 PushE
	var_69_float = GetByIndex(var_24_cvector, 2); // 0x41 PushE
	var_70_float = var_68_float * var_69_float; // 0x42 Mult
	var_71_int = var_67_float + var_70_float; // 0x43 Add
	var_72_int = 0; // 0x44 PushI
	var_73_bool = var_71_int >= var_72_int; // 0x45 GE
	if(var_73_bool == 0) goto Label_73; // 0x46 JumpB
	var_26_string = "fdie"; // 0x47 MovS
	goto Label_74; // 0x48 Jump
	
Label_74:
	RemoveRTEnvelope(); // 0x4a Func
	SetDeathState(); // 0x4c Func
	Stop(); // 0x4e Func
	StopAsync(); // 0x50 Func
	var_27_object = var_11_object; // 0x52 Mov
	var_74_string = "GetScriptProperty"; // 0x53 PushS
	var_75_int = 2; // 0x54 PushI
	var_76_bool = IsFuncExist(var_11_object, var_74_string, var_75_int); // 0x55 FuncExist
	if(var_76_bool == 0) goto Label_98; // 0x56 JumpB
	var_77_string = "Owner"; // 0x57 PushS
	HasScriptProperty(var_28_bool, var_77_string); // 0x58 ObjFunc
	var_78_bool = var_28_bool; // 0x5a Push
	if(var_78_bool == 0) goto Label_98; // 0x5b JumpB
	var_79_string = "Owner"; // 0x5c PushS
	GetScriptProperty(var_27_object, var_79_string); // 0x5d ObjFunc
	var_80_bool = var_27_object == 0; // 0x5f NullEq
	if(var_80_bool == 0) goto Label_98; // 0x60 JumpB
	var_27_object = var_11_object; // 0x61 Mov
	
Label_98:
	var_81_string = "@GetEyesHeight"; // 0x62 PushS
	var_82_int = 1; // 0x63 PushI
	var_83_bool = IsFuncExist(var_27_object, var_81_string, var_82_int); // 0x64 FuncExist
	if(var_83_bool == 0) goto Label_113; // 0x65 JumpB
	GetEyesHeight(var_30_float); // 0x66 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x68 MovV
	var_84_float = GetByIndex(var_31_cvector, 1); // 0x69 PushE
	var_84_float = var_30_float; // 0x6a Mov
	SetByIndex(var_31_cvector, 1) = var_84_float; // 0x6b PopE
	var_85_string = "head"; // 0x6c PushS
	LookAsync(var_11_object, var_85_string, var_31_cvector); // 0x6d Func
	var_29_bool = 1; // 0x6f MovB
	goto Label_114; // 0x70 Jump
	
Label_114:
	var_86_string = ""; // 0x72 PushV
	var_86_string = var_26_string; // 0x73 Mov
	func_1307(var_86_string); // 0x74 NEW_2
	var_87_string = "all"; // 0x76 PushS
	PlayAnimation(var_87_string, var_26_string); // 0x77 Func
	WaitForAnimEnd(); // 0x79 Func
	var_88_bool = var_29_bool; // 0x7b Push
	if(var_88_bool == 0) goto Label_130; // 0x7c JumpB
	StopAsync(); // 0x7d Func
	var_89_string = "head"; // 0x7f PushS
	UnlookAsync(var_89_string); // 0x80 Func
	
Label_130:
	var_90_string = "all"; // 0x82 PushS
	LockAnimationEnd(var_90_string, var_26_string); // 0x83 Func
	RemoveEnvelope(); // 0x85 Func
	var_27_object = 0; // 0x87 SetNull
	
Label_113:
	var_29_bool = 0; // 0x71 MovB
	
Label_73:
	var_26_string = "bdie"; // 0x49 MovS
}


func_433()
{
	var_9_bool = 0; // 0x1b1 PushV
	func_1302(var_9_bool); // 0x1b2 NEW_2
	var_12_bool = var_9_bool == 0; // 0x1b4 Not
	if(var_12_bool == 0) goto Label_441; // 0x1b5 JumpB
	func_1612(); // 0x1b7 NEW_2
	
Label_441:
	return 0; // 0x1b9 Return
}


func_1587(var_17_int, var_18_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x634 PushV
	var_21_object = var_18_object; // 0x635 Mov
	func_1152(var_20_bool, var_21_object); // 0x636 NEW_2
	if(var_20_bool == 0) goto Label_1595; // 0x638 JumpB
	var_17_int = 2; // 0x639 MovI
	goto Label_1596; // 0x63a Jump
	
Label_1596:
	return 0; // 0x63c Return
	
Label_1595:
	var_17_int = 0; // 0x63b MovI
}


func_693(var_40_bool)
{
	var_40_bool = 0; // 0x2b5 MovB
	return 0; // 0x2b6 Return
}


func_695(var_34_object, var_35_cvector)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x2b7 PushV
	FindShiftedPathTo(var_37_object, var_35_cvector); // 0x2b8 Func
	var_34_object = var_37_object; // 0x2ba Mov
	return 2; // 0x2bb Return
}


func_1082(var_80_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x43a PushV
	GetPosition(var_82_cvector); // 0x43b Func
	var_80_cvector = var_82_cvector; // 0x43d Mov
	return 2; // 0x43e Return
}


func_1597(var_58_object)
{
	var_59_object = Obj(); // 0x63e PushV
	var_59_object = var_58_object; // 0x63f Mov
	TaskCall(5); // 0x640 TaskCall
	func_925(var_60_object, var_61_cvector, var_62_bool, var_59_object); // 0x641 NEW_2
	TaskReturn(); // 0x642 TaskReturn
	return 0; // 0x644 Return
}


func_1087(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x43f PushV
	GetPosition(var_46_cvector); // 0x440 Func
	GetPosition(var_47_cvector); // 0x442 ObjFunc
	var_42_cvector = var_47_cvector - var_46_cvector; // 0x444 Sub2
	return 4; // 0x445 Return
}


func_1474(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x5c2 PushV
	var_13_bool = 0; // 0x5c3 PushV
	var_13_bool = 0; // 0x5c4 MovB
	var_14_bool = 0; var_15_object = Obj(); // 0x5c5 PushV
	var_15_object = var_10_object; // 0x5c6 Mov
	func_1628(var_15_object); // 0x5c7 NEW_2
	if(var_14_bool == 0) goto Label_1488; // 0x5c9 JumpB
	var_16_bool = 0; var_17_object = Obj(); // 0x5ca PushV
	var_17_object = var_10_object; // 0x5cb Mov
	func_1094(var_16_bool, var_17_object); // 0x5cc NEW_2
	if(var_16_bool == 0) goto Label_1488; // 0x5ce JumpB
	var_13_bool = 1; // 0x5cf MovB
	
Label_1488:
	if(var_13_bool == 0) goto Label_1495; // 0x5d0 JumpB
	IsWeaponHolstered(var_12_bool); // 0x5d1 ObjFunc
	var_20_bool = var_12_bool == 0; // 0x5d3 Not
	if(var_20_bool == 0) goto Label_1495; // 0x5d4 JumpB
	var_9_bool = 1; // 0x5d5 MovB
	return 2; // 0x5d6 Return
	
Label_1495:
	var_9_bool = 0; // 0x5d7 MovB
	return 2; // 0x5d8 Return
}


func_708(var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x2c4 PushV
	GetPosition(var_30_cvector); // 0x2c5 Func
	GetPosition(var_31_cvector); // 0x2c7 TObjFunc
	GetDirection(var_32_cvector); // 0x2c9 Func
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); // 0x2cb PushV
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x2cc PushV
	var_39_cvector = var_30_cvector - var_31_cvector; // 0x2cd Sub2
	func_1354(var_38_cvector, var_39_cvector); // 0x2ce NEW_2
	var_45_float = 0.75; // 0x2d0 PushF
	var_46_float = var_32_cvector * var_45_float; // 0x2d1 Mult
	var_37_cvector = var_38_cvector + var_46_float; // 0x2d2 Add2
	func_1354(var_36_cvector, var_37_cvector); // 0x2d3 NEW_2
	var_33_cvector = var_36_cvector; // 0x2d4 Mov
	var_47_int = 32; // 0x2d6 PushI
	var_48_float = 7000.0; // 0x2d7 PushF
	FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, var_47_int, var_48_float); // 0x2d8 Func
	var_49_int = 100; // 0x2da PushI
	var_35_float = var_35_float - var_49_int; // 0x2db Sub2
	var_50_int = 0; // 0x2dc PushI
	var_51_bool = var_35_float < var_50_int; // 0x2dd LT
	if(var_51_bool == 0) goto Label_736; // 0x2de JumpB
	var_35_float = 0; // 0x2df MovI
	
Label_736:
	var_22_cvector = var_34_cvector * var_35_float; // 0x2e0 Mult2
	return 12; // 0x2e1 Return
}


func_1605(var_11_int)
{
	var_11_int = 0; // 0x646 MovI
	return 0; // 0x647 Return
}


func_1220(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); // 0x4c4 PushV
	var_33_bool = 0; // 0x4c5 PushV
	var_33_bool = 0; // 0x4c6 MovB
	var_34_bool = 0; // 0x4c7 PushV
	var_34_bool = 0; // 0x4c8 MovB
	var_35_object = var_12_object; // 0x4c9 Push
	if(var_35_object == 0) goto Label_1231; // 0x4ca JumpB
	var_36_int = 4; // 0x4cb PushI
	var_37_bool = var_13_int != var_36_int; // 0x4cc Neq
	if(var_37_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_34_bool = 1; // 0x4ce MovB
	
Label_1231:
	if(var_34_bool == 0) goto Label_1236; // 0x4cf JumpB
	var_38_int = 5; // 0x4d0 PushI
	var_39_bool = var_13_int != var_38_int; // 0x4d1 Neq
	if(var_39_bool == 0) goto Label_1236; // 0x4d2 JumpB
	var_33_bool = 1; // 0x4d3 MovB
	
Label_1236:
	if(var_33_bool == 0) goto Label_1283; // 0x4d4 JumpB
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x4d5 PushV
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x4d6 PushV
	var_43_object = var_12_object; // 0x4d7 Mov
	func_1087(var_43_object); // 0x4d8 NEW_2
	var_41_cvector = var_42_cvector; // 0x4d9 Mov
	func_1354(var_40_cvector, var_41_cvector); // 0x4db NEW_2
	var_24_cvector = var_40_cvector; // 0x4dc Mov
	CreateVectorVector(var_25_object); // 0x4de Func
	var_26_int = 1; // 0x4e0 MovI
	
Label_1249:
	var_53_string = "hit"; // 0x4e1 PushS
	var_54_int = var_53_string + var_26_int; // 0x4e2 Add
	GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector); // 0x4e3 Func
	var_55_bool = var_27_bool == 0; // 0x4e5 Not
	if(var_55_bool == 0) goto Label_1256; // 0x4e6 JumpB
	goto Label_1265; // 0x4e7 Jump
	
Label_1265:
	size(var_30_int); // 0x4f1 ObjFunc
	var_56_int = var_30_int; // 0x4f3 Push
	if(var_56_int == 0) goto Label_1282; // 0x4f4 JumpB
	irand(var_31_int, var_30_int); // 0x4f5 Func
	get(var_32_cvector, var_31_int); // 0x4f7 ObjFunc
	var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x4f9 PushV
	var_57_object = var_12_object; // 0x4fa Mov
	var_58_int = var_13_int; // 0x4fb Mov
	var_59_float = var_14_float; // 0x4fc Mov
	var_60_cvector = var_32_cvector; // 0x4fd Mov
	var_61_cvector = -var_24_cvector; // 0x4fe Neg2
	func_1288(var_59_float, var_60_cvector, var_61_cvector); // 0x4ff NEW_2
	return 18; // 0x501 Return
	
Label_1282:
	var_25_object = 0; // 0x502 SetNull
	
Label_1283:
	var_102_object = Obj(); // 0x503 PushV
	var_102_object = var_12_object; // 0x504 Mov
	func_1176(var_102_object); // 0x505 NEW_2
	return 18; // 0x507 Return
	
Label_1256:
	var_103_int = var_29_cvector | var_24_cvector; // 0x4e8 Or
	var_104_float = 0.70711; // 0x4e9 PushF
	var_105_bool = var_103_int >= var_104_float; // 0x4ea GE
	if(var_105_bool == 0) goto Label_1262; // 0x4eb JumpB
	add(var_28_cvector); // 0x4ec ObjFunc
	
Label_1262:
	var_106_int = 1; // 0x4ee PushI
	var_26_int = var_26_int + var_106_int; // 0x4ef Add2
	goto Label_1249; // 0x4f0 Jump
}


func_1094(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x446 PushV
	IsPlayerActor(var_17_object, var_19_bool); // 0x447 Func
	var_16_bool = var_19_bool; // 0x449 Mov
	return 2; // 0x44a Return
}


func_1608()
{
	return 0; // 0x649 Return
}


func_1348(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x544 PushV
	self(var_18_object); // 0x545 Func
	var_16_object = var_18_object; // 0x547 Mov
	return 2; // 0x548 Return
}


func_1610()
{
	return 0; // 0x64b Return
}


func_1354(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x54a PushV
	var_50_int = var_41_cvector | var_41_cvector; // 0x54b Or
	var_49_float = sqrt(var_50_int); // 0x54c Sqrt2
	var_51_float = 0.0; // 0x54d PushF
	var_52_bool = var_49_float < var_51_float; // 0x54e LT
	if(var_52_bool == 0) goto Label_1362; // 0x54f JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x550 MovV
	return 2; // 0x551 Return
	
Label_1362:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x552 Div2
	return 2; // 0x553 Return
}


func_1612()
{
	TaskCall(0); // 0x64d TaskCall
	func_0(); // 0x64e NEW_2
	TaskReturn(); // 0x64f TaskReturn
	return 0; // 0x651 Return
}


func_333()
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0; // 0x14d PushV
	WaitForAnimEnd(); // 0x14e Func
	var_56_bool = 0; // 0x150 PushV
	func_1302(var_56_bool); // 0x151 NEW_2
	var_57_bool = var_56_bool == 0; // 0x153 Not
	if(var_57_bool == 0) goto Label_342; // 0x154 JumpB
	return 14; // 0x155 Return
	
Label_342:
	var_58_int = 0; // 0x156 PushV
	func_1552(var_58_int); // 0x157 NEW_2
	var_49_int = var_58_int; // 0x158 Mov
	var_50_int = 0; // 0x15a MovI
	
Label_347:
	var_71_bool = 0; // 0x15b PushV
	var_71_bool = 0; // 0x15c MovB
	var_72_int = 5; // 0x15d PushI
	var_73_bool = var_50_int < var_72_int; // 0x15e LT
	if(var_73_bool == 0) goto Label_357; // 0x15f JumpB
	var_74_bool = 0; // 0x160 PushV
	func_1302(var_74_bool); // 0x161 NEW_2
	if(var_74_bool == 0) goto Label_357; // 0x163 JumpB
	var_71_bool = 1; // 0x164 MovB
	
Label_357:
	if(var_71_bool == 0) goto Label_409; // 0x165 JumpB
	var_75_int = 3; // 0x166 PushI
	irand(var_51_int, var_75_int); // 0x167 Func
	var_76_int = 0; // 0x169 PushI
	var_77_bool = var_51_int == var_76_int; // 0x16a Eq
	if(var_77_bool == 0) goto Label_381; // 0x16b JumpB
	var_78_int = var_49_int; // 0x16c Push
	if(var_78_int == 0) goto Label_380; // 0x16d JumpB
	irand(var_52_int, var_49_int); // 0x16e Func
	var_79_string = "all"; // 0x170 PushS
	var_80_string = ""; var_81_int = 0; // 0x171 PushV
	var_81_int = var_52_int; // 0x172 Mov
	func_1545(var_80_string, var_81_int); // 0x173 NEW_2
	PlayAnimation(var_79_string, var_80_string); // 0x175 Func
	WaitForAnimEnd(var_53_bool); // 0x177 Func
	var_82_bool = var_53_bool == 0; // 0x179 Not
	if(var_82_bool == 0) goto Label_380; // 0x17a JumpB
	goto Label_409; // 0x17b Jump
	
Label_409:
	ResetAAS(); // 0x199 Func
	return 14; // 0x19b Return
	
Label_380:
	goto Label_398; // 0x17c Jump
	
Label_398:
	var_83_bool = 0; // 0x18e PushV
	func_412(var_83_bool); // 0x18f NEW_2
	var_84_bool = var_83_bool == 0; // 0x191 Not
	if(var_84_bool == 0) goto Label_404; // 0x192 JumpB
	goto Label_409; // 0x193 Jump
	
Label_404:
	ResetAAS(); // 0x194 Func
	var_85_int = 1; // 0x196 PushI
	var_50_int = var_50_int + var_85_int; // 0x197 Add2
	goto Label_347; // 0x198 Jump
	
Label_381:
	var_86_int = 1; // 0x17d PushI
	var_87_bool = var_51_int == var_86_int; // 0x17e Eq
	if(var_87_bool == 0) goto Label_395; // 0x17f JumpB
	var_88_int = 4; // 0x180 PushI
	rand(var_54_float, var_88_int); // 0x181 Func
	var_89_int = 1; // 0x183 PushI
	var_90_int = var_54_float + var_89_int; // 0x184 Add
	Sleep(var_90_int, var_55_bool); // 0x185 Func
	var_91_bool = var_55_bool == 0; // 0x187 Not
	if(var_91_bool == 0) goto Label_394; // 0x188 JumpB
	goto Label_409; // 0x189 Jump
	
Label_394:
	goto Label_398; // 0x18a Jump
	
Label_395:
	var_92_int = var_50_int; // 0x18b Push
	if(var_92_int == 0) goto Label_398; // 0x18c JumpB
	goto Label_409; // 0x18d Jump
}


func_1099(var_42_bool, var_43_object, var_44_string)
{
	var_45_bool = 0; var_46_bool = 0; // 0x44b PushV
	var_47_string = "HasProperty"; // 0x44c PushS
	var_48_int = 2; // 0x44d PushI
	var_49_bool = IsFuncExist(var_43_object, var_47_string, var_48_int); // 0x44e FuncExist
	var_50_bool = var_49_bool == 0; // 0x44f Not
	if(var_50_bool == 0) goto Label_1107; // 0x450 JumpB
	var_42_bool = 0; // 0x451 MovB
	return 2; // 0x452 Return
	
Label_1107:
	HasProperty(var_44_string, var_46_bool); // 0x453 ObjFunc
	var_42_bool = var_46_bool; // 0x455 Mov
	return 2; // 0x456 Return
}


func_1618(var_11_int)
{
	var_11_int = 0; // 0x653 MovI
	return 0; // 0x654 Return
}


func_1364(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_int = var_72_cvector | var_73_cvector; // 0x555 Or
	var_75_int = var_72_cvector | var_72_cvector; // 0x556 Or
	var_76_int = var_73_cvector | var_73_cvector; // 0x557 Or
	var_77_float = var_75_int * var_76_int; // 0x558 Mult
	var_78_float = sqrt(var_77_float); // 0x559 Sqrt
	var_71_float = var_74_int / var_74_int; // 0x55a Div2
	return 0; // 0x55b Return
}


func_1621()
{
	return 0; // 0x656 Return
}


func_1623(var_38_int)
{
	var_38_int = 0; // 0x658 MovI
	return 0; // 0x659 Return
}


func_1111(var_35_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x457 PushV
	IsDead(var_38_bool); // 0x458 ObjFunc
	var_35_bool = var_38_bool; // 0x45a Mov
	return 2; // 0x45b Return
}


func_1497(var_21_object)
{
	var_22_object = Obj(); // 0x5da PushV
	var_22_object = var_21_object; // 0x5db Mov
	func_1631(); // 0x5dc NEW_2
	return 0; // 0x5de Return
}


func_1626()
{
	return 0; // 0x65b Return
}


func_1116(var_24_bool, var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x45c PushV
	var_30_bool = var_25_object == 0; // 0x45d NullEq
	if(var_30_bool == 0) goto Label_1121; // 0x45e JumpB
	var_24_bool = 0; // 0x45f MovB
	return 4; // 0x460 Return
	
Label_1121:
	var_31_bool = 0; // 0x461 PushV
	var_31_bool = 0; // 0x462 MovB
	var_32_string = "IsDead"; // 0x463 PushS
	var_33_int = 1; // 0x464 PushI
	var_34_bool = IsFuncExist(var_25_object, var_32_string, var_33_int); // 0x465 FuncExist
	if(var_34_bool == 0) goto Label_1133; // 0x466 JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0x467 PushV
	var_36_object = var_25_object; // 0x468 Mov
	func_1111(var_36_object); // 0x469 NEW_2
	if(var_35_bool == 0) goto Label_1133; // 0x46b JumpB
	var_31_bool = 1; // 0x46c MovB
	
Label_1133:
	if(var_31_bool == 0) goto Label_1136; // 0x46d JumpB
	var_24_bool = 0; // 0x46e MovB
	return 4; // 0x46f Return
	
Label_1136:
	GetScene(var_28_object); // 0x470 Func
	var_39_bool = var_28_object == 0; // 0x472 NullEq
	if(var_39_bool == 0) goto Label_1142; // 0x473 JumpB
	var_24_bool = 0; // 0x474 MovB
	return 4; // 0x475 Return
	
Label_1142:
	GetScene(var_29_object); // 0x476 ObjFunc
	var_40_bool = var_28_object != var_29_object; // 0x478 Neq
	if(var_40_bool == 0) goto Label_1148; // 0x479 JumpB
	var_24_bool = 0; // 0x47a MovB
	return 4; // 0x47b Return
	
Label_1148:
	var_24_bool = 1; // 0x47c MovB
	return 4; // 0x47d Return
}


func_1372(var_9_object)
{
	var_10_object = Obj(); // 0x55d PushV
	var_10_object = var_9_object; // 0x55e Mov
	TaskCall(1); // 0x55f TaskCall
	func_13(var_10_object); // 0x560 NEW_2
	TaskReturn(); // 0x561 TaskReturn
	return 0; // 0x563 Return
}


func_606(var_0_bool, var_1_bool)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; // 0x25e PushV
	var_0_bool = 0; // 0x25f TMovB
	var_1_bool = 0; // 0x260 TMovB
	var_27_float = 0.5; // 0x261 PushF
	rand(var_21_float, var_27_float); // 0x262 Func
	Sleep(var_21_float); // 0x264 Func
	
Label_614:
	var_28_bool = var_0_bool == 0; // 0x266 Not
	if(var_28_bool == 0) goto Label_664; // 0x267 JumpB
	var_29_bool = var_1_bool == 0; // 0x268 Not
	if(var_29_bool == 0) goto Label_633; // 0x269 JumpB
	
Label_618:
	GetPosition(var_23_cvector); // 0x26a Func
	var_30_float = 0; // 0x26c PushV
	func_665(var_30_float); // 0x26d NEW_2
	GetRandomPFPointInCircle(var_22_cvector, var_23_cvector, var_30_float, var_24_bool); // 0x26f Func
	var_33_bool = var_24_bool; // 0x271 Push
	if(var_33_bool == 0) goto Label_628; // 0x272 JumpB
	goto Label_632; // 0x273 Jump
	
Label_632:
	goto Label_634; // 0x278 Jump
	
Label_634:
	var_34_object = Obj(); var_35_cvector = CVector(0,0,0); // 0x27a PushV
	var_35_cvector = var_22_cvector; // 0x27b Mov
	func_695(var_34_object, var_35_cvector); // 0x27c NEW_2
	var_25_object = var_34_object; // 0x27d Mov
	var_38_bool = var_25_object != 0; // 0x27f NullNeq
	if(var_38_bool == 0) goto Label_659; // 0x280 JumpB
	RotatePath(var_25_object, var_26_bool); // 0x281 Func
	var_39_bool = var_26_bool; // 0x283 Push
	if(var_39_bool == 0) goto Label_658; // 0x284 JumpB
	var_40_bool = 0; // 0x285 PushV
	func_693(var_40_bool); // 0x286 NEW_2
	FollowPath(var_25_object, var_40_bool, var_26_bool); // 0x288 Func
	var_25_object = 0; // 0x28a SetNull
	var_41_bool = var_26_bool; // 0x28b Push
	if(var_41_bool == 0) goto Label_658; // 0x28c JumpB
	TaskCall(2); // 0x28e TaskCall
	func_333(); // 0x28f NEW_2
	TaskReturn(); // 0x290 TaskReturn
	
Label_658:
	goto Label_662; // 0x292 Jump
	
Label_662:
	var_25_object = 0; // 0x296 SetNull
	goto Label_614; // 0x297 Jump
	
Label_659:
	var_93_int = 1; // 0x293 PushI
	Sleep(var_93_int); // 0x294 Func
	
Label_628:
	var_94_int = 1; // 0x274 PushI
	Sleep(var_94_int); // 0x275 Func
	goto Label_618; // 0x277 Jump
	
Label_633:
	var_1_bool = 0; // 0x279 TMovB
	
Label_664:
	return 12; // 0x298 Return
}


func_1503(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x5e0 PushV
	var_13_object = var_11_object; // 0x5e1 Mov
	func_1094(var_12_bool, var_13_object); // 0x5e2 NEW_2
	if(var_12_bool == 0) goto Label_1515; // 0x5e4 JumpB
	var_16_object = Obj(); // 0x5e5 PushV
	func_1348(var_16_object); // 0x5e6 NEW_2
	var_19_float = 0.0; // 0x5e8 PushF
	ReportReputationChange(var_11_object, var_16_object, var_19_float); // 0x5e9 Func
	
Label_1515:
	return 0; // 0x5eb Return
}


func_863(var_2_object)
{
	Stop(); // 0x35f Func
	var_9_int = 120; // 0x361 PushI
	KillTimer(var_9_int); // 0x362 Func
	var_2_object = 1; // 0x364 TMovB
	return 0; // 0x365 Return
}


func_1628(var_14_bool)
{
	var_14_bool = 0; // 0x65d MovB
	return 0; // 0x65e Return
}


func_1633(var_21_bool)
{
	var_21_bool = 0; // 0x662 MovB
	return 0; // 0x663 Return
}


func_1631()
{
	return 0; // 0x660 Return
}


func_1636()
{
	return 0; // 0x665 Return
}


func_738(var_0_bool, var_1_bool, var_2_object, var_61_object)
{
	var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; // 0x2e2 PushV
	var_0_bool = var_61_object; // 0x2e3 TMov
	var_75_cvector = CVector(0,0,0); var_76_float = 0; // 0x2e4 PushV
	var_76_float = 1.74533; // 0x2e5 MovF
	func_708(var_75_cvector, var_76_float); // 0x2e6 NEW_2
	var_70_cvector = var_75_cvector; // 0x2e7 Mov
	var_71_float = var_70_cvector | var_70_cvector; // 0x2e9 Or2
	var_105_float = 2500.0; // 0x2ea PushF
	var_106_bool = var_71_float < var_105_float; // 0x2eb LT
	if(var_106_bool == 0) goto Label_767; // 0x2ec JumpB
	var_107_cvector = CVector(0,0,0); var_108_float = 0; // 0x2ed PushV
	var_108_float = 2.61799; // 0x2ee MovF
	func_708(var_107_cvector, var_108_float); // 0x2ef NEW_2
	var_70_cvector = var_107_cvector; // 0x2f0 Mov
	var_71_float = var_70_cvector | var_70_cvector; // 0x2f2 Or2
	var_109_float = 2500.0; // 0x2f3 PushF
	var_110_bool = var_71_float < var_109_float; // 0x2f4 LT
	if(var_110_bool == 0) goto Label_767; // 0x2f5 JumpB
	var_111_string = "Can't retreat, distance: "; // 0x2f6 PushS
	var_112_float = sqrt(var_71_float); // 0x2f7 Sqrt
	var_113_int = var_111_string + var_112_float; // 0x2f8 Add
	Trace(var_113_int); // 0x2f9 Func
	var_114_float = 0.5; // 0x2fb PushF
	Sleep(var_114_float); // 0x2fc Func
	return 10; // 0x2fe Return
	
Label_767:
	var_115_float = GetByIndex(var_70_cvector, 0); // 0x2ff PushE
	var_116_float = GetByIndex(var_70_cvector, 2); // 0x300 PushE
	Rotate(var_115_float, var_116_float); // 0x301 Func
	var_117_cvector = CVector(0,0,0); // 0x303 PushV
	func_1082(var_117_cvector); // 0x304 NEW_2
	var_1_bool = var_117_cvector + var_70_cvector; // 0x306 Add2
	var_120_int = 120; // 0x307 PushI
	var_121_float = 0.5; // 0x308 PushF
	SetTimer(var_120_int, var_121_float); // 0x309 Func
	var_2_object = 0; // 0x30b TMovB
	
Label_780:
	var_122_int = 1; // 0x30c PushI
	MovePoint(var_122_int, var_122_int, var_72_bool); // 0x30d Func
	var_123_bool = var_72_bool; // 0x30f Push
	if(var_123_bool == 0) goto Label_808; // 0x310 JumpB
	var_124_bool = var_0_bool == 0; // 0x311 NullEq
	if(var_124_bool == 0) goto Label_789; // 0x312 JumpB
	goto Label_810; // 0x313 Jump
	
Label_810:
	return 10; // 0x32a Return
	
Label_789:
	var_125_cvector = CVector(0,0,0); var_126_float = 0; // 0x315 PushV
	var_126_float = 2.61799; // 0x316 MovF
	func_708(var_125_cvector, var_126_float); // 0x317 NEW_2
	var_73_cvector = var_125_cvector; // 0x318 Mov
	var_74_float = var_73_cvector | var_73_cvector; // 0x31a Or2
	var_127_float = 2500.0; // 0x31b PushF
	var_128_bool = var_74_float >= var_127_float; // 0x31c GE
	if(var_128_bool == 0) goto Label_807; // 0x31d JumpB
	var_129_cvector = CVector(0,0,0); // 0x31e PushV
	func_1082(var_129_cvector); // 0x31f NEW_2
	var_1_bool = var_129_cvector + var_73_cvector; // 0x321 Add2
	var_130_int = 120; // 0x322 PushI
	var_131_float = 0.5; // 0x323 PushF
	SetTimer(var_130_int, var_131_float); // 0x324 Func
	goto Label_808; // 0x326 Jump
	
Label_808:
	var_132_bool = var_2_object == 0; // 0x328 Not
	if(var_132_bool == 0) goto Label_780; // 0x329 JumpB
	
Label_807:
	goto Label_810; // 0x327 Jump
}


func_1638(var_25_bool)
{
	var_25_bool = 0; // 0x667 MovB
	return 0; // 0x668 Return
}


func_1641()
{
	return 0; // 0x66a Return
}


func_1643(var_16_bool)
{
	var_16_bool = 0; // 0x66c MovB
	return 0; // 0x66d Return
}


func_1516(var_9_bool, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x5ec PushV
	var_13_string = "heal"; // 0x5ed PushS
	var_14_bool = var_10_string == var_13_string; // 0x5ee Eq
	if(var_14_bool == 0) goto Label_1530; // 0x5ef JumpB
	var_15_string = "player"; // 0x5f0 PushS
	FindActor(var_12_object, var_15_string); // 0x5f1 Func
	var_16_bool = 0; var_17_object = Obj(); // 0x5f3 PushV
	var_17_object = var_12_object; // 0x5f4 Mov
	func_1643(var_17_object); // 0x5f5 NEW_2
	var_9_bool = var_16_bool; // 0x5f6 Mov
	return 2; // 0x5f8 Return
	
Label_1530:
	var_9_bool = 0; // 0x5fa MovB
	return 2; // 0x5fb Return
}


func_1646()
{
	return 0; // 0x66f Return
}


func_879(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x36f PushV
	GetDirection(var_63_cvector); // 0x370 Func
	var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0x372 PushV
	var_66_object = var_0_bool; // 0x373 MovT
	func_1087(var_66_object); // 0x374 NEW_2
	var_64_cvector = var_65_cvector; // 0x375 Mov
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x377 PushV
	var_72_cvector = var_63_cvector; // 0x378 Mov
	var_73_cvector = var_64_cvector; // 0x379 Mov
	func_1364(var_71_float, var_72_cvector, var_73_cvector); // 0x37a NEW_2
	var_79_float = -0.34202; // 0x37c PushF
	var_60_bool = var_71_float >= var_79_float; // 0x37d GE2
	return 4; // 0x37e Return
}


func_1648()
{
	return 0; // 0x670 Return
}


func_1649(var_13_bool)
{
	var_13_bool = 1; // 0x672 MovB
	return 0; // 0x673 Return
}


func_1532(var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x5fc PushV
	var_21_string = "heal"; // 0x5fd PushS
	var_22_bool = var_18_string == var_21_string; // 0x5fe Eq
	if(var_22_bool == 0) goto Label_1544; // 0x5ff JumpB
	var_23_string = "player"; // 0x600 PushS
	FindActor(var_20_object, var_23_string); // 0x601 Func
	var_24_object = Obj(); // 0x603 PushV
	var_24_object = var_20_object; // 0x604 Mov
	func_1646(); // 0x605 NEW_2
	var_20_object = 0; // 0x607 SetNull
	
Label_1544:
	return 2; // 0x608 Return
}


func_895(var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x37f PushV
	GetPosition(var_30_cvector); // 0x380 Func
	GetPosition(var_31_cvector); // 0x382 TObjFunc
	GetDirection(var_32_cvector); // 0x384 Func
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); // 0x386 PushV
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x387 PushV
	var_39_cvector = var_30_cvector - var_31_cvector; // 0x388 Sub2
	func_1354(var_38_cvector, var_39_cvector); // 0x389 NEW_2
	var_45_float = 0.75; // 0x38b PushF
	var_46_float = var_32_cvector * var_45_float; // 0x38c Mult
	var_37_cvector = var_38_cvector + var_46_float; // 0x38d Add2
	func_1354(var_36_cvector, var_37_cvector); // 0x38e NEW_2
	var_33_cvector = var_36_cvector; // 0x38f Mov
	var_47_int = 32; // 0x391 PushI
	var_48_float = 7000.0; // 0x392 PushF
	FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, var_47_int, var_48_float); // 0x393 Func
	var_49_int = 100; // 0x395 PushI
	var_35_float = var_35_float - var_49_int; // 0x396 Sub2
	var_50_int = 0; // 0x397 PushI
	var_51_bool = var_35_float < var_50_int; // 0x398 LT
	if(var_51_bool == 0) goto Label_923; // 0x399 JumpB
	var_35_float = 0; // 0x39a MovI
	
Label_923:
	var_22_cvector = var_34_cvector * var_35_float; // 0x39b Mult2
	return 12; // 0x39c Return
}


