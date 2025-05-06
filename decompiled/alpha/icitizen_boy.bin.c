task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	StopAnimation(); // 0x10 Func
	StopTrade(); // 0x12 Func
	var_0_bool = 1; // 0x14 TMovB
	return 0; // 0x15 Return
}


task_1_event_0(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x25 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x26 PushV
	var_21_object = var_17_bool; // 0x27 Mov
	func_2572(var_21_object); // 0x28 Call
	var_19_int = var_20_int; // 0x29 Mov
	var_22_int = 0; // 0x2b PushI
	var_23_bool = var_19_int > var_22_int; // 0x2c GT
	if(var_23_bool == 0) goto Label_50; // 0x2d JumpB
	var_24_object = Obj(); // 0x2e PushV
	var_24_object = var_17_bool; // 0x2f Mov
	func_2575(var_24_object); // 0x30 Call
	
Label_50:
	return 2; // 0x32 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_2581(); // 0x34 Call
	return 0; // 0x36 Return
}


task_1_event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	return 0; // 0xa5 Return
}


task_1_event_16(var_0_bool, var_1_object, var_2_string, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	return 0; // 0xa7 Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	return 0; // 0xa9 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xc2 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xc3 PushV
	var_21_object = var_17_bool; // 0xc4 Mov
	func_2572(var_21_object); // 0xc5 Call
	var_19_int = var_20_int; // 0xc6 Mov
	var_22_int = 0; // 0xc8 PushI
	var_23_bool = var_19_int > var_22_int; // 0xc9 GT
	if(var_23_bool == 0) goto Label_213; // 0xca JumpB
	var_24_int = 1; // 0xcb PushI
	var_25_bool = var_19_int > var_24_int; // 0xcc GT
	if(var_25_bool == 0) goto Label_209; // 0xcd JumpB
	func_333(var_19_int); // 0xcf Call
	
Label_209:
	var_27_object = Obj(); // 0xd1 PushV
	var_27_object = var_17_bool; // 0xd2 Mov
	func_2575(var_27_object); // 0xd3 Call
	
Label_213:
	return 2; // 0xd5 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xd6 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xd7 PushV
	var_21_object = var_17_bool; // 0xd8 Mov
	func_2541(var_20_int, var_21_object); // 0xd9 Call
	var_19_int = var_20_int; // 0xda Mov
	var_56_int = 0; // 0xdc PushI
	var_57_bool = var_19_int > var_56_int; // 0xdd GT
	if(var_57_bool == 0) goto Label_233; // 0xde JumpB
	var_58_int = 1; // 0xdf PushI
	var_59_bool = var_19_int > var_58_int; // 0xe0 GT
	if(var_59_bool == 0) goto Label_229; // 0xe1 JumpB
	func_333(var_19_int); // 0xe3 Call
	
Label_229:
	var_61_object = Obj(); // 0xe5 PushV
	var_61_object = var_17_bool; // 0xe6 Mov
	func_2551(var_61_object); // 0xe7 Call
	
Label_233:
	return 2; // 0xe9 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xea PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0xeb PushV
	var_22_object = var_17_string; // 0xec Mov
	var_23_object = var_18_bool; // 0xed Mov
	func_2835(var_21_bool, var_22_object, var_23_object); // 0xee Call
	if(var_21_bool == 0) goto Label_259; // 0xf0 JumpB
	var_57_int = 0; var_58_object = Obj(); // 0xf1 PushV
	var_58_object = var_17_string; // 0xf2 Mov
	func_2559(var_57_int, var_58_object); // 0xf3 Call
	var_20_int = var_57_int; // 0xf4 Mov
	var_89_int = 0; // 0xf6 PushI
	var_90_bool = var_20_int > var_89_int; // 0xf7 GT
	if(var_90_bool == 0) goto Label_259; // 0xf8 JumpB
	var_91_int = 1; // 0xf9 PushI
	var_92_bool = var_20_int > var_91_int; // 0xfa GT
	if(var_92_bool == 0) goto Label_255; // 0xfb JumpB
	func_333(var_20_int); // 0xfd Call
	
Label_255:
	var_94_object = Obj(); // 0xff PushV
	var_94_object = var_17_string; // 0x100 Mov
	func_2566(var_94_object); // 0x101 Call
	
Label_259:
	return 2; // 0x103 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x104 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x105 PushV
	var_21_object = var_17_bool; // 0x106 Mov
	func_2582(var_20_int, var_21_object); // 0x107 Call
	var_19_int = var_20_int; // 0x108 Mov
	var_61_int = 0; // 0x10a PushI
	var_62_bool = var_19_int > var_61_int; // 0x10b GT
	if(var_62_bool == 0) goto Label_279; // 0x10c JumpB
	var_63_int = 1; // 0x10d PushI
	var_64_bool = var_19_int > var_63_int; // 0x10e GT
	if(var_64_bool == 0) goto Label_275; // 0x10f JumpB
	func_333(var_19_int); // 0x111 Call
	
Label_275:
	var_66_object = Obj(); // 0x113 PushV
	var_66_object = var_17_bool; // 0x114 Mov
	func_2595(var_66_object); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x118 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x119 PushV
	var_22_string = var_18_bool; // 0x11a Mov
	var_23_object = var_17_string; // 0x11b Mov
	func_2601(var_23_object); // 0x11c Call
	var_20_int = var_21_int; // 0x11d Mov
	var_24_int = 0; // 0x11f PushI
	var_25_bool = var_20_int > var_24_int; // 0x120 GT
	if(var_25_bool == 0) goto Label_301; // 0x121 JumpB
	var_26_int = 1; // 0x122 PushI
	var_27_bool = var_20_int > var_26_int; // 0x123 GT
	if(var_27_bool == 0) goto Label_296; // 0x124 JumpB
	func_333(var_20_int); // 0x126 Call
	
Label_296:
	var_29_string = ""; var_30_object = Obj(); // 0x128 PushV
	var_29_string = var_18_bool; // 0x129 Mov
	var_30_object = var_17_string; // 0x12a Mov
	func_2604(); // 0x12b Call
	
Label_301:
	return 2; // 0x12d Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_object = Obj(); // 0x12f PushV
	var_18_object = var_17_bool; // 0x130 Mov
	func_358(var_17_bool, var_18_object); // 0x131 Call
	return 0; // 0x133 Return
}


task_2_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_object = Obj(); // 0x135 PushV
	var_18_object = var_17_bool; // 0x136 Mov
	func_358(var_17_bool, var_18_object); // 0x137 Call
	return 0; // 0x139 Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 110; // 0x13b PushI
	var_19_bool = var_17_bool != var_18_int; // 0x13c Neq
	if(var_19_bool == 0) goto Label_319; // 0x13d JumpB
	return 0; // 0x13e Return
	
Label_319:
	var_2_bool = 0; // 0x13f TMovB
	var_20_int = 110; // 0x140 PushI
	KillTimer(var_20_int); // 0x141 Func
	ResetAAS(); // 0x143 Func
	return 0; // 0x145 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_333(var_16_bool); // 0x147 Call
	func_2581(); // 0x14a Call
	return 0; // 0x14c Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_333(var_17_bool); // 0x15f Call
	var_19_object = Obj(); // 0x161 PushV
	var_19_object = var_17_bool; // 0x162 Mov
	func_2486(); // 0x163 Call
	return 0; // 0x165 Return
}


task_2_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	RequestClearPath(var_17_bool); // 0x1c8 Func
	return 0; // 0x1ca Return
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	Stop(); // 0x1cb Func
	return 0; // 0x1cd Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x1de PushV
	var_20_int = 0; var_21_object = Obj(); // 0x1df PushV
	var_21_object = var_17_bool; // 0x1e0 Mov
	func_2572(var_21_object); // 0x1e1 Call
	var_19_int = var_20_int; // 0x1e2 Mov
	var_22_int = 0; // 0x1e4 PushI
	var_23_bool = var_19_int > var_22_int; // 0x1e5 GT
	if(var_23_bool == 0) goto Label_497; // 0x1e6 JumpB
	var_24_int = 1; // 0x1e7 PushI
	var_25_bool = var_19_int > var_24_int; // 0x1e8 GT
	if(var_25_bool == 0) goto Label_493; // 0x1e9 JumpB
	func_662(); // 0x1eb Call
	
Label_493:
	var_26_object = Obj(); // 0x1ed PushV
	var_26_object = var_17_bool; // 0x1ee Mov
	func_2575(var_26_object); // 0x1ef Call
	
Label_497:
	return 2; // 0x1f1 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x1f2 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x1f3 PushV
	var_21_object = var_17_bool; // 0x1f4 Mov
	func_2541(var_20_int, var_21_object); // 0x1f5 Call
	var_19_int = var_20_int; // 0x1f6 Mov
	var_56_int = 0; // 0x1f8 PushI
	var_57_bool = var_19_int > var_56_int; // 0x1f9 GT
	if(var_57_bool == 0) goto Label_517; // 0x1fa JumpB
	var_58_int = 1; // 0x1fb PushI
	var_59_bool = var_19_int > var_58_int; // 0x1fc GT
	if(var_59_bool == 0) goto Label_513; // 0x1fd JumpB
	func_662(); // 0x1ff Call
	
Label_513:
	var_60_object = Obj(); // 0x201 PushV
	var_60_object = var_17_bool; // 0x202 Mov
	func_2551(var_60_object); // 0x203 Call
	
Label_517:
	return 2; // 0x205 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x206 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x207 PushV
	var_22_object = var_17_string; // 0x208 Mov
	var_23_object = var_18_bool; // 0x209 Mov
	func_2835(var_21_bool, var_22_object, var_23_object); // 0x20a Call
	if(var_21_bool == 0) goto Label_543; // 0x20c JumpB
	var_57_int = 0; var_58_object = Obj(); // 0x20d PushV
	var_58_object = var_17_string; // 0x20e Mov
	func_2559(var_57_int, var_58_object); // 0x20f Call
	var_20_int = var_57_int; // 0x210 Mov
	var_89_int = 0; // 0x212 PushI
	var_90_bool = var_20_int > var_89_int; // 0x213 GT
	if(var_90_bool == 0) goto Label_543; // 0x214 JumpB
	var_91_int = 1; // 0x215 PushI
	var_92_bool = var_20_int > var_91_int; // 0x216 GT
	if(var_92_bool == 0) goto Label_539; // 0x217 JumpB
	func_662(); // 0x219 Call
	
Label_539:
	var_93_object = Obj(); // 0x21b PushV
	var_93_object = var_17_string; // 0x21c Mov
	func_2566(var_93_object); // 0x21d Call
	
Label_543:
	return 2; // 0x21f Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x220 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x221 PushV
	var_21_object = var_17_bool; // 0x222 Mov
	func_2582(var_20_int, var_21_object); // 0x223 Call
	var_19_int = var_20_int; // 0x224 Mov
	var_61_int = 0; // 0x226 PushI
	var_62_bool = var_19_int > var_61_int; // 0x227 GT
	if(var_62_bool == 0) goto Label_563; // 0x228 JumpB
	var_63_int = 1; // 0x229 PushI
	var_64_bool = var_19_int > var_63_int; // 0x22a GT
	if(var_64_bool == 0) goto Label_559; // 0x22b JumpB
	func_662(); // 0x22d Call
	
Label_559:
	var_65_object = Obj(); // 0x22f PushV
	var_65_object = var_17_bool; // 0x230 Mov
	func_2595(var_65_object); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x234 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x235 PushV
	var_22_string = var_18_bool; // 0x236 Mov
	var_23_object = var_17_string; // 0x237 Mov
	func_2601(var_23_object); // 0x238 Call
	var_20_int = var_21_int; // 0x239 Mov
	var_24_int = 0; // 0x23b PushI
	var_25_bool = var_20_int > var_24_int; // 0x23c GT
	if(var_25_bool == 0) goto Label_585; // 0x23d JumpB
	var_26_int = 1; // 0x23e PushI
	var_27_bool = var_20_int > var_26_int; // 0x23f GT
	if(var_27_bool == 0) goto Label_580; // 0x240 JumpB
	func_662(); // 0x242 Call
	
Label_580:
	var_28_string = ""; var_29_object = Obj(); // 0x244 PushV
	var_28_string = var_18_bool; // 0x245 Mov
	var_29_object = var_17_string; // 0x246 Mov
	func_2604(); // 0x247 Call
	
Label_585:
	return 2; // 0x249 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_662(); // 0x24b Call
	func_2581(); // 0x24e Call
	return 0; // 0x250 Return
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2d3 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x2d4 PushV
	var_21_object = var_17_bool; // 0x2d5 Mov
	func_2572(var_21_object); // 0x2d6 Call
	var_19_int = var_20_int; // 0x2d7 Mov
	var_22_int = 0; // 0x2d9 PushI
	var_23_bool = var_19_int > var_22_int; // 0x2da GT
	if(var_23_bool == 0) goto Label_742; // 0x2db JumpB
	var_24_int = 1; // 0x2dc PushI
	var_25_bool = var_19_int > var_24_int; // 0x2dd GT
	if(var_25_bool == 0) goto Label_738; // 0x2de JumpB
	func_831(); // 0x2e0 Call
	
Label_738:
	var_28_object = Obj(); // 0x2e2 PushV
	var_28_object = var_17_bool; // 0x2e3 Mov
	func_2575(var_28_object); // 0x2e4 Call
	
Label_742:
	return 2; // 0x2e6 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2e7 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x2e8 PushV
	var_21_object = var_17_bool; // 0x2e9 Mov
	func_2541(var_20_int, var_21_object); // 0x2ea Call
	var_19_int = var_20_int; // 0x2eb Mov
	var_56_int = 0; // 0x2ed PushI
	var_57_bool = var_19_int > var_56_int; // 0x2ee GT
	if(var_57_bool == 0) goto Label_762; // 0x2ef JumpB
	var_58_int = 1; // 0x2f0 PushI
	var_59_bool = var_19_int > var_58_int; // 0x2f1 GT
	if(var_59_bool == 0) goto Label_758; // 0x2f2 JumpB
	func_831(); // 0x2f4 Call
	
Label_758:
	var_62_object = Obj(); // 0x2f6 PushV
	var_62_object = var_17_bool; // 0x2f7 Mov
	func_2551(var_62_object); // 0x2f8 Call
	
Label_762:
	return 2; // 0x2fa Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2fb PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x2fc PushV
	var_22_object = var_17_string; // 0x2fd Mov
	var_23_object = var_18_bool; // 0x2fe Mov
	func_2835(var_21_bool, var_22_object, var_23_object); // 0x2ff Call
	if(var_21_bool == 0) goto Label_788; // 0x301 JumpB
	var_57_int = 0; var_58_object = Obj(); // 0x302 PushV
	var_58_object = var_17_string; // 0x303 Mov
	func_2559(var_57_int, var_58_object); // 0x304 Call
	var_20_int = var_57_int; // 0x305 Mov
	var_89_int = 0; // 0x307 PushI
	var_90_bool = var_20_int > var_89_int; // 0x308 GT
	if(var_90_bool == 0) goto Label_788; // 0x309 JumpB
	var_91_int = 1; // 0x30a PushI
	var_92_bool = var_20_int > var_91_int; // 0x30b GT
	if(var_92_bool == 0) goto Label_784; // 0x30c JumpB
	func_831(); // 0x30e Call
	
Label_784:
	var_95_object = Obj(); // 0x310 PushV
	var_95_object = var_17_string; // 0x311 Mov
	func_2566(var_95_object); // 0x312 Call
	
Label_788:
	return 2; // 0x314 Return
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x315 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x316 PushV
	var_21_object = var_17_bool; // 0x317 Mov
	func_2582(var_20_int, var_21_object); // 0x318 Call
	var_19_int = var_20_int; // 0x319 Mov
	var_61_int = 0; // 0x31b PushI
	var_62_bool = var_19_int > var_61_int; // 0x31c GT
	if(var_62_bool == 0) goto Label_808; // 0x31d JumpB
	var_63_int = 1; // 0x31e PushI
	var_64_bool = var_19_int > var_63_int; // 0x31f GT
	if(var_64_bool == 0) goto Label_804; // 0x320 JumpB
	func_831(); // 0x322 Call
	
Label_804:
	var_67_object = Obj(); // 0x324 PushV
	var_67_object = var_17_bool; // 0x325 Mov
	func_2595(var_67_object); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x329 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x32a PushV
	var_22_string = var_18_bool; // 0x32b Mov
	var_23_object = var_17_string; // 0x32c Mov
	func_2601(var_23_object); // 0x32d Call
	var_20_int = var_21_int; // 0x32e Mov
	var_24_int = 0; // 0x330 PushI
	var_25_bool = var_20_int > var_24_int; // 0x331 GT
	if(var_25_bool == 0) goto Label_830; // 0x332 JumpB
	var_26_int = 1; // 0x333 PushI
	var_27_bool = var_20_int > var_26_int; // 0x334 GT
	if(var_27_bool == 0) goto Label_825; // 0x335 JumpB
	func_831(); // 0x337 Call
	
Label_825:
	var_30_string = ""; var_31_object = Obj(); // 0x339 PushV
	var_30_string = var_18_bool; // 0x33a Mov
	var_31_object = var_17_string; // 0x33b Mov
	func_2604(); // 0x33c Call
	
Label_830:
	return 2; // 0x33e Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_831(); // 0x34c Call
	var_20_object = Obj(); // 0x34e PushV
	var_20_object = var_17_bool; // 0x34f Mov
	func_2486(); // 0x350 Call
	return 0; // 0x352 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x353 PushV
	var_22_int = 111; // 0x354 PushI
	var_23_bool = var_17_bool != var_22_int; // 0x355 Neq
	if(var_23_bool == 0) goto Label_856; // 0x356 JumpB
	return 4; // 0x357 Return
	
Label_856:
	var_24_bool = 0; var_25_object = Obj(); // 0x358 PushV
	var_25_object = var_0_bool; // 0x359 MovT
	func_2137(var_24_bool, var_25_object); // 0x35a Call
	var_58_bool = var_24_bool == 0; // 0x35c Not
	if(var_58_bool == 0) goto Label_866; // 0x35d JumpB
	func_831(); // 0x35f Call
	return 4; // 0x361 Return
	
Label_866:
	GetDirection(var_20_cvector); // 0x362 Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x364 PushV
	var_62_object = var_0_bool; // 0x365 MovT
	func_2005(var_62_object); // 0x366 Call
	var_21_cvector = var_61_cvector; // 0x367 Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x369 PushV
	var_68_cvector = var_20_cvector; // 0x36a Mov
	var_69_cvector = var_21_cvector; // 0x36b Mov
	func_2439(var_67_float, var_68_cvector, var_69_cvector); // 0x36c Call
	var_91_float = 0.5; // 0x36e PushF
	var_92_bool = var_67_float < var_91_float; // 0x36f LT
	if(var_92_bool == 0) goto Label_885; // 0x370 JumpB
	var_93_object = Obj(); // 0x371 PushV
	var_93_object = var_0_bool; // 0x372 MovT
	func_2228(); // 0x373 Call
	
Label_885:
	return 4; // 0x375 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831(); // 0x377 Call
	func_2581(); // 0x37a Call
	return 0; // 0x37c Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1529(var_16_bool); // 0x577 Call
	func_2581(); // 0x57a Call
	return 0; // 0x57c Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; // 0x5e4 PushI
	var_19_bool = var_17_bool != var_18_int; // 0x5e5 Neq
	if(var_19_bool == 0) goto Label_1512; // 0x5e6 JumpB
	return 0; // 0x5e7 Return
	
Label_1512:
	var_20_bool = 0; var_21_object = Obj(); // 0x5e8 PushV
	var_21_object = var_1_bool; // 0x5e9 MovT
	func_1545(var_20_bool, var_21_object); // 0x5ea Call
	var_56_bool = var_20_bool == 0; // 0x5ec Not
	if(var_56_bool == 0) goto Label_1519; // 0x5ed JumpB
	var_0_bool = 1; // 0x5ee TMovB
	
Label_1519:
	var_57_int = 0; // 0x5ef PushI
	KillTimer(var_57_int); // 0x5f0 Func
	Stop(); // 0x5f2 Func
	return 0; // 0x5f4 Return
}


task_6_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	RequestClearPath(var_17_bool); // 0x5f6 Func
	return 0; // 0x5f8 Return
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_1529(var_17_bool); // 0x602 Call
	var_19_object = Obj(); // 0x604 PushV
	var_19_object = var_17_bool; // 0x605 Mov
	func_2486(); // 0x606 Call
	return 0; // 0x608 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 1; // 0x6c6 PushI
	if(var_19_int == 0) goto Label_1996; // 0x6c7 JumpB
	func_2385(); // 0x6c9 Call
	var_21_int = 14637; // 0x6cb PushI
	var_22_bool = var_18_int == var_21_int; // 0x6cc Eq
	if(var_22_bool == 0) goto Label_1747; // 0x6cd JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x6ce PushV
	var_23_object = var_1_bool; // 0x6cf MovT
	var_24_object = var_0_bool; // 0x6d0 MovT
	func_2606(); // 0x6d1 Call
	
Label_1747:
	var_26_int = 14636; // 0x6d3 PushI
	var_27_bool = var_17_int == var_26_int; // 0x6d4 Eq
	if(var_27_bool == 0) goto Label_1810; // 0x6d5 JumpB
	var_28_string = ""; // 0x6d6 PushV
	var_28_string = "Neutral"; // 0x6d7 MovS
	func_1717(var_18_int, var_28_string); // 0x6d8 Call
	var_43_int = 13402; // 0x6da PushI
	SetMessage(var_43_int); // 0x6db TObjFunc
	ClearReplies(); // 0x6dd TObjFunc
	var_44_int = 13403; // 0x6df PushI
	var_45_int = -1; // 0x6e0 PushI
	var_46_int = 14637; // 0x6e1 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0x6e2 TObjFunc
	var_47_int = 13404; // 0x6e4 PushI
	var_48_int = -1; // 0x6e5 PushI
	var_49_int = 14638; // 0x6e6 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x6e7 TObjFunc
	return 0; // 0x6e9 Return
	
Label_1810:
	var_50_int = 15937; // 0x712 PushI
	var_51_bool = var_17_int == var_50_int; // 0x713 Eq
	if(var_51_bool == 0) goto Label_1828; // 0x714 JumpB
	var_52_string = ""; // 0x715 PushV
	var_52_string = "Neutral"; // 0x716 MovS
	func_1717(var_18_int, var_52_string); // 0x717 Call
	var_53_int = 14697; // 0x719 PushI
	SetMessage(var_53_int); // 0x71a TObjFunc
	ClearReplies(); // 0x71c TObjFunc
	var_54_int = 14698; // 0x71e PushI
	var_55_int = -1; // 0x71f PushI
	var_56_int = 15938; // 0x720 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0x721 TObjFunc
	return 0; // 0x723 Return
	
Label_1828:
	var_57_int = 15926; // 0x724 PushI
	var_58_bool = var_17_int == var_57_int; // 0x725 Eq
	if(var_58_bool == 0) goto Label_1851; // 0x726 JumpB
	var_59_string = ""; // 0x727 PushV
	var_59_string = "Neutral"; // 0x728 MovS
	func_1717(var_18_int, var_59_string); // 0x729 Call
	var_60_int = 14686; // 0x72b PushI
	SetMessage(var_60_int); // 0x72c TObjFunc
	ClearReplies(); // 0x72e TObjFunc
	var_61_int = 14687; // 0x730 PushI
	var_62_int = 15928; // 0x731 PushI
	var_63_int = 15927; // 0x732 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x733 TObjFunc
	var_64_int = 14695; // 0x735 PushI
	var_65_int = -1; // 0x736 PushI
	var_66_int = 15935; // 0x737 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x738 TObjFunc
	return 0; // 0x73a Return
	
Label_1851:
	var_67_int = 15928; // 0x73b PushI
	var_68_bool = var_17_int == var_67_int; // 0x73c Eq
	if(var_68_bool == 0) goto Label_1874; // 0x73d JumpB
	var_69_string = ""; // 0x73e PushV
	var_69_string = "Neutral"; // 0x73f MovS
	func_1717(var_18_int, var_69_string); // 0x740 Call
	var_70_int = 14688; // 0x742 PushI
	SetMessage(var_70_int); // 0x743 TObjFunc
	ClearReplies(); // 0x745 TObjFunc
	var_71_int = 14689; // 0x747 PushI
	var_72_int = 15930; // 0x748 PushI
	var_73_int = 15929; // 0x749 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x74a TObjFunc
	var_74_int = 14694; // 0x74c PushI
	var_75_int = -1; // 0x74d PushI
	var_76_int = 15934; // 0x74e PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x74f TObjFunc
	return 0; // 0x751 Return
	
Label_1874:
	var_77_int = 15930; // 0x752 PushI
	var_78_bool = var_17_int == var_77_int; // 0x753 Eq
	if(var_78_bool == 0) goto Label_1902; // 0x754 JumpB
	var_79_string = ""; // 0x755 PushV
	var_79_string = "Neutral"; // 0x756 MovS
	func_1717(var_18_int, var_79_string); // 0x757 Call
	var_80_int = 14690; // 0x759 PushI
	SetMessage(var_80_int); // 0x75a TObjFunc
	ClearReplies(); // 0x75c TObjFunc
	var_81_int = 14691; // 0x75e PushI
	var_82_int = -1; // 0x75f PushI
	var_83_int = 15931; // 0x760 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x761 TObjFunc
	var_84_int = 14692; // 0x763 PushI
	var_85_int = -1; // 0x764 PushI
	var_86_int = 15932; // 0x765 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x766 TObjFunc
	var_87_int = 14693; // 0x768 PushI
	var_88_int = -1; // 0x769 PushI
	var_89_int = 15933; // 0x76a PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x76b TObjFunc
	return 0; // 0x76d Return
	
Label_1902:
	var_90_int = 15921; // 0x76e PushI
	var_91_bool = var_17_int == var_90_int; // 0x76f Eq
	if(var_91_bool == 0) goto Label_1920; // 0x770 JumpB
	var_92_string = ""; // 0x771 PushV
	var_92_string = "Neutral"; // 0x772 MovS
	func_1717(var_18_int, var_92_string); // 0x773 Call
	var_93_int = 14682; // 0x775 PushI
	SetMessage(var_93_int); // 0x776 TObjFunc
	ClearReplies(); // 0x778 TObjFunc
	var_94_int = 14683; // 0x77a PushI
	var_95_int = 15913; // 0x77b PushI
	var_96_int = 15922; // 0x77c PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x77d TObjFunc
	return 0; // 0x77f Return
	
Label_1920:
	var_97_int = 15911; // 0x780 PushI
	var_98_bool = var_17_int == var_97_int; // 0x781 Eq
	if(var_98_bool == 0) goto Label_1943; // 0x782 JumpB
	var_99_string = ""; // 0x783 PushV
	var_99_string = "Neutral"; // 0x784 MovS
	func_1717(var_18_int, var_99_string); // 0x785 Call
	var_100_int = 14673; // 0x787 PushI
	SetMessage(var_100_int); // 0x788 TObjFunc
	ClearReplies(); // 0x78a TObjFunc
	var_101_int = 14674; // 0x78c PushI
	var_102_int = 15913; // 0x78d PushI
	var_103_int = 15912; // 0x78e PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x78f TObjFunc
	var_104_int = 14678; // 0x791 PushI
	var_105_int = 15917; // 0x792 PushI
	var_106_int = 15916; // 0x793 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x794 TObjFunc
	return 0; // 0x796 Return
	
Label_1943:
	var_107_int = 15917; // 0x797 PushI
	var_108_bool = var_17_int == var_107_int; // 0x798 Eq
	if(var_108_bool == 0) goto Label_1961; // 0x799 JumpB
	var_109_string = ""; // 0x79a PushV
	var_109_string = "Neutral"; // 0x79b MovS
	func_1717(var_18_int, var_109_string); // 0x79c Call
	var_110_int = 14679; // 0x79e PushI
	SetMessage(var_110_int); // 0x79f TObjFunc
	ClearReplies(); // 0x7a1 TObjFunc
	var_111_int = 14680; // 0x7a3 PushI
	var_112_int = 15913; // 0x7a4 PushI
	var_113_int = 15918; // 0x7a5 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x7a6 TObjFunc
	return 0; // 0x7a8 Return
	
Label_1961:
	var_114_int = 15913; // 0x7a9 PushI
	var_115_bool = var_17_int == var_114_int; // 0x7aa Eq
	if(var_115_bool == 0) goto Label_1984; // 0x7ab JumpB
	var_116_string = ""; // 0x7ac PushV
	var_116_string = "Neutral"; // 0x7ad MovS
	func_1717(var_18_int, var_116_string); // 0x7ae Call
	var_117_int = 14675; // 0x7b0 PushI
	SetMessage(var_117_int); // 0x7b1 TObjFunc
	ClearReplies(); // 0x7b3 TObjFunc
	var_118_int = 14676; // 0x7b5 PushI
	var_119_int = -1; // 0x7b6 PushI
	var_120_int = 15914; // 0x7b7 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x7b8 TObjFunc
	var_121_int = 14677; // 0x7ba PushI
	var_122_int = -1; // 0x7bb PushI
	var_123_int = 15915; // 0x7bc PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x7bd TObjFunc
	return 0; // 0x7bf Return
	
Label_1984:
	var_3_bool = 1; // 0x7c0 TMovB
	var_124_bool = 0; // 0x7c1 PushV
	func_2785(var_124_bool); // 0x7c2 Call
	if(var_124_bool == 0) goto Label_1992; // 0x7c4 JumpB
	lshStopAnimation(); // 0x7c5 Func
	goto Label_1994; // 0x7c7 Jump
	
Label_1994:
	return 0; // 0x7ca Return
	
Label_1992:
	StopAnimation(); // 0x7c8 Func
	
Label_1996:
	return 0; // 0x7cc Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x9a9 PushV
	var_21_string = "health"; // 0x9aa PushS
	var_22_bool = var_18_string == var_21_string; // 0x9ab Eq
	if(var_22_bool == 0) goto Label_2485; // 0x9ac JumpB
	var_23_string = "health"; // 0x9ad PushS
	GetProperty(var_23_string, var_20_float); // 0x9ae Func
	var_24_int = 0; // 0x9b0 PushI
	var_25_bool = var_20_float <= var_24_int; // 0x9b1 LE
	if(var_25_bool == 0) goto Label_2485; // 0x9b2 JumpB
	SignalDeath(var_17_object); // 0x9b3 Func
	
Label_2485:
	return 2; // 0x9b5 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x9b7 PushV
	var_18_object = var_17_object; // 0x9b8 Mov
	func_2465(var_18_object); // 0x9b9 Call
	return 0; // 0x9bb Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x9bd PushV
	var_21_object = var_17_object; // 0x9be Mov
	var_22_int = var_18_int; // 0x9bf Mov
	var_23_float = var_19_float; // 0x9c0 Mov
	func_2161(var_22_int, var_23_float); // 0x9c1 Call
	return 0; // 0x9c3 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_bool = 1; // 0xaa PushB
	SensePlayerOnly(var_17_bool); // 0xab Func
	func_2787(); // 0xae Call
	func_185(); // 0xb1 Call
	
Label_179:
	var_2_bool = 0; // 0xb3 TMovB
	func_398(var_15_string, var_16_bool); // 0xb5 Call
	goto Label_179; // 0xb7 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	WaitForAnimEnd(); // 0x4 Func
	var_170_string = "all"; // 0x6 PushS
	var_171_string = "idle"; // 0x7 PushS
	PlayAnimation(var_170_string, var_171_string); // 0x8 Func
	var_172_bool = var_0_bool; // 0xa PushT
	if(var_172_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_2566(var_95_object)
{
	var_96_object = Obj(); // 0xa07 PushV
	var_96_object = var_95_object; // 0xa08 Mov
	func_2551(var_96_object); // 0xa09 Call
	return 0; // 0xa0b Return
}


func_1545(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x60a PushV
	var_23_object = var_21_object; // 0x60b Mov
	func_2137(var_22_bool, var_23_object); // 0x60c Call
	var_20_bool = var_22_bool; // 0x60d Mov
	return 0; // 0x60f Return
}


func_2572(var_20_int)
{
	var_20_int = 2; // 0xa0d MovI
	return 0; // 0xa0e Return
}


func_2575(var_28_object)
{
	var_29_object = Obj(); // 0xa10 PushV
	var_29_object = var_28_object; // 0xa11 Mov
	func_2795(var_28_object, var_29_object); // 0xa12 Call
	return 0; // 0xa14 Return
}


func_1552(var_168_string)
{
	var_168_string = "walk"; // 0x610 MovS
	return 0; // 0x611 Return
}


func_1554(var_169_string)
{
	var_169_string = "run"; // 0x612 MovS
	return 0; // 0x613 Return
}


func_1556(var_0_bool, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x614 PushV
	var_0_bool = var_36_object; // 0x615 TMov
	var_46_bool = 0; var_47_object = Obj(); // 0x616 PushV
	var_47_object = var_36_object; // 0x617 Mov
	func_2244(var_47_object); // 0x618 Call
	var_86_bool = var_46_bool == 0; // 0x61a Not
	if(var_86_bool == 0) goto Label_1566; // 0x61b JumpB
	var_35_int = -2; // 0x61c MovI
	return 8; // 0x61d Return
	
Label_1566:
	CreateDialog(var_42_object); // 0x61e Func
	var_87_int = 0; // 0x620 PushV
	func_2781(var_87_int); // 0x621 Call
	SetNPCName(var_87_int); // 0x623 ObjFunc
	var_88_string = ""; // 0x625 PushV
	func_2783(var_88_string); // 0x626 Call
	SetPhoto(var_88_string); // 0x628 ObjFunc
	var_89_int = 0; // 0x62a PushV
	func_2611(var_89_int); // 0x62b Call
	SetPlayerName(var_89_int); // 0x62d ObjFunc
	var_44_int = -1; // 0x62f MovI
	IsOverrideActive(var_43_bool); // 0x630 Func
	var_97_bool = var_43_bool; // 0x632 Push
	if(var_97_bool == 0) goto Label_1590; // 0x633 JumpB
	var_35_int = -2; // 0x634 MovI
	return 8; // 0x635 Return
	
Label_1590:
	DoDialog(var_42_object); // 0x636 Func
	var_98_object = Obj(); var_99_object = Obj(); // 0x638 PushV
	var_98_object = var_36_object; // 0x639 Mov
	var_99_object = var_42_object; // 0x63a Mov
	TaskCall(8); // 0x63b TaskCall
	func_1619(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object); // 0x63c Call
	TaskReturn(); // 0x63d TaskReturn
	IsDialogEnd(var_45_bool); // 0x63f ObjFunc
	
Label_1601:
	var_135_bool = var_45_bool == 0; // 0x641 Not
	if(var_135_bool == 0) goto Label_1608; // 0x642 JumpB
	sync(); // 0x643 Func
	IsDialogEnd(var_45_bool); // 0x645 ObjFunc
	goto Label_1601; // 0x647 Jump
	
Label_1608:
	var_136_object = Obj(); // 0x648 PushV
	var_136_object = var_36_object; // 0x649 Mov
	func_2300(); // 0x64a Call
	StopDialog(var_42_object); // 0x64c Func
	GetReturnValue(var_44_int); // 0x64e ObjFunc
	var_35_int = var_44_int; // 0x650 Mov
	return 8; // 0x651 Return
}


func_2581()
{
	return 0; // 0xa15 Return
}


func_2582(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0xa16 PushV
	CanSee(var_23_bool, var_21_object); // 0xa17 Func
	var_24_bool = var_23_bool; // 0xa19 Push
	if(var_24_bool == 0) goto Label_2593; // 0xa1a JumpB
	var_25_int = 0; var_26_object = Obj(); // 0xa1b PushV
	var_26_object = var_21_object; // 0xa1c Mov
	func_2541(var_25_int, var_26_object); // 0xa1d Call
	var_20_int = var_25_int; // 0xa1e Mov
	return 2; // 0xa20 Return
	
Label_2593:
	var_20_int = 0; // 0xa21 MovI
	return 2; // 0xa22 Return
}


func_22(var_19_object)
{
	EventDisable(0); // 0x17 EventDisable
	var_20_object = Obj(); // 0x18 PushV
	var_20_object = var_19_object; // 0x19 Mov
	func_55(var_20_object); // 0x1a Call
	var_70_object = Obj(); // 0x1c PushV
	var_70_object = var_19_object; // 0x1d Mov
	func_2884(); // 0x1e Call
	EventEnable(0); // 0x20 EventEnable
	
Label_33:
	Hold(); // 0x21 Func
	goto Label_33; // 0x23 Jump
}


func_2595(var_67_object)
{
	var_68_object = Obj(); // 0xa24 PushV
	var_68_object = var_67_object; // 0xa25 Mov
	func_2551(var_68_object); // 0xa26 Call
	return 0; // 0xa28 Return
}


func_2601(var_21_int)
{
	var_21_int = 0; // 0xa2a MovI
	return 0; // 0xa2b Return
}


func_2604()
{
	return 0; // 0xa2d Return
}


func_2606()
{
	var_25_int = 1000; // 0xa2f PushI
	SetReturnValue(var_25_int); // 0xa30 ObjFunc
	return 0; // 0xa32 Return
}


func_2096(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x830 PushV
	IsDead(var_40_bool); // 0x831 ObjFunc
	var_37_bool = var_40_bool; // 0x833 Mov
	return 2; // 0x834 Return
}


func_2611(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0xa33 PushV
	var_92_string = "player"; // 0xa34 PushS
	GetVariable(var_92_string, var_91_int); // 0xa35 Func
	var_93_int = 0; // 0xa37 PushI
	var_94_bool = var_91_int == var_93_int; // 0xa38 Eq
	if(var_94_bool == 0) goto Label_2621; // 0xa39 JumpB
	var_89_int = 200001; // 0xa3a MovI
	return 2; // 0xa3b Return
	
Label_2621:
	var_95_int = 1; // 0xa3d PushI
	var_96_bool = var_91_int == var_95_int; // 0xa3e Eq
	if(var_96_bool == 0) goto Label_2626; // 0xa3f JumpB
	var_89_int = 200002; // 0xa40 MovI
	return 2; // 0xa41 Return
	
Label_2626:
	var_89_int = 200003; // 0xa42 MovI
	return 2; // 0xa43 Return
}


func_2101(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x835 PushV
	var_32_bool = var_27_object == 0; // 0x836 NullEq
	if(var_32_bool == 0) goto Label_2106; // 0x837 JumpB
	var_26_bool = 0; // 0x838 MovB
	return 4; // 0x839 Return
	
Label_2106:
	var_33_bool = 0; // 0x83a PushV
	var_33_bool = 0; // 0x83b MovB
	var_34_string = "IsDead"; // 0x83c PushS
	var_35_int = 1; // 0x83d PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x83e FuncExist
	if(var_36_bool == 0) goto Label_2118; // 0x83f JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x840 PushV
	var_38_object = var_27_object; // 0x841 Mov
	func_2096(var_38_object); // 0x842 Call
	if(var_37_bool == 0) goto Label_2118; // 0x844 JumpB
	var_33_bool = 1; // 0x845 MovB
	
Label_2118:
	if(var_33_bool == 0) goto Label_2121; // 0x846 JumpB
	var_26_bool = 0; // 0x847 MovB
	return 4; // 0x848 Return
	
Label_2121:
	GetScene(var_30_object); // 0x849 Func
	var_41_bool = var_30_object == 0; // 0x84b NullEq
	if(var_41_bool == 0) goto Label_2127; // 0x84c JumpB
	var_26_bool = 0; // 0x84d MovB
	return 4; // 0x84e Return
	
Label_2127:
	GetScene(var_31_object); // 0x84f ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x851 Neq
	if(var_42_bool == 0) goto Label_2133; // 0x852 JumpB
	var_26_bool = 0; // 0x853 MovB
	return 4; // 0x854 Return
	
Label_2133:
	var_26_bool = 1; // 0x855 MovB
	return 4; // 0x856 Return
}


func_55(var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_object = Obj(); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x37 PushV
	var_41_bool = var_20_object == 0; // 0x38 NullEq
	if(var_41_bool == 0) goto Label_63; // 0x39 JumpB
	var_42_string = ""; // 0x3a PushV
	var_42_string = "fdie"; // 0x3b MovS
	func_142(var_42_string); // 0x3c Call
	goto Label_141; // 0x3e Jump
	
Label_141:
	return 20; // 0x8d Return
	
Label_63:
	GetPosition(var_31_cvector); // 0x3f ObjFunc
	GetPosition(var_32_cvector); // 0x41 Func
	GetDirection(var_33_cvector); // 0x43 Func
	var_34_cvector = var_32_cvector - var_31_cvector; // 0x45 Sub2
	var_45_float = GetByIndex(var_34_cvector, 0); // 0x46 PushE
	var_46_float = GetByIndex(var_33_cvector, 0); // 0x47 PushE
	var_47_float = var_45_float * var_46_float; // 0x48 Mult
	var_48_float = GetByIndex(var_34_cvector, 2); // 0x49 PushE
	var_49_float = GetByIndex(var_33_cvector, 2); // 0x4a PushE
	var_50_float = var_48_float * var_49_float; // 0x4b Mult
	var_51_int = var_47_float + var_50_float; // 0x4c Add
	var_52_int = 0; // 0x4d PushI
	var_53_bool = var_51_int >= var_52_int; // 0x4e GE
	if(var_53_bool == 0) goto Label_82; // 0x4f JumpB
	var_35_string = "fdie"; // 0x50 MovS
	goto Label_83; // 0x51 Jump
	
Label_83:
	RemoveRTEnvelope(); // 0x53 Func
	SetDeathState(); // 0x55 Func
	Stop(); // 0x57 Func
	StopAsync(); // 0x59 Func
	var_36_object = var_20_object; // 0x5b Mov
	var_54_string = "GetScriptProperty"; // 0x5c PushS
	var_55_int = 2; // 0x5d PushI
	var_56_bool = IsFuncExist(var_20_object, var_54_string, var_55_int); // 0x5e FuncExist
	if(var_56_bool == 0) goto Label_107; // 0x5f JumpB
	var_57_string = "Owner"; // 0x60 PushS
	HasScriptProperty(var_37_bool, var_57_string); // 0x61 ObjFunc
	var_58_bool = var_37_bool; // 0x63 Push
	if(var_58_bool == 0) goto Label_107; // 0x64 JumpB
	var_59_string = "Owner"; // 0x65 PushS
	GetScriptProperty(var_36_object, var_59_string); // 0x66 ObjFunc
	var_60_bool = var_36_object == 0; // 0x68 NullEq
	if(var_60_bool == 0) goto Label_107; // 0x69 JumpB
	var_36_object = var_20_object; // 0x6a Mov
	
Label_107:
	var_61_string = "@GetEyesHeight"; // 0x6b PushS
	var_62_int = 1; // 0x6c PushI
	var_63_bool = IsFuncExist(var_36_object, var_61_string, var_62_int); // 0x6d FuncExist
	if(var_63_bool == 0) goto Label_122; // 0x6e JumpB
	GetEyesHeight(var_39_float); // 0x6f ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x71 MovV
	var_64_float = GetByIndex(var_40_cvector, 1); // 0x72 PushE
	var_64_float = var_39_float; // 0x73 Mov
	SetByIndex(var_40_cvector, 1) = var_64_float; // 0x74 PopE
	var_65_string = "head"; // 0x75 PushS
	LookAsync(var_20_object, var_65_string, var_40_cvector); // 0x76 Func
	var_38_bool = 1; // 0x78 MovB
	goto Label_123; // 0x79 Jump
	
Label_123:
	var_66_string = "all"; // 0x7b PushS
	PlayAnimation(var_66_string, var_35_string); // 0x7c Func
	WaitForAnimEnd(); // 0x7e Func
	var_67_bool = var_38_bool; // 0x80 Push
	if(var_67_bool == 0) goto Label_135; // 0x81 JumpB
	StopAsync(); // 0x82 Func
	var_68_string = "head"; // 0x84 PushS
	UnlookAsync(var_68_string); // 0x85 Func
	
Label_135:
	var_69_string = "all"; // 0x87 PushS
	LockAnimationEnd(var_69_string, var_35_string); // 0x88 Func
	RemoveEnvelope(); // 0x8a Func
	var_36_object = 0; // 0x8c SetNull
	
Label_122:
	var_38_bool = 0; // 0x7a MovB
	
Label_82:
	var_35_string = "bdie"; // 0x52 MovS
}


func_2628(var_80_int, var_81_int)
{
	var_91_int = 0; var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; // 0xa44 PushV
	var_99_bool = var_80_int > var_81_int; // 0xa45 GT
	if(var_99_bool == 0) goto Label_2635; // 0xa46 JumpB
	var_100_string = "GenerateMoney: iMin > iMax"; // 0xa47 PushS
	Trace(var_100_string); // 0xa48 Func
	return 8; // 0xa4a Return
	
Label_2635:
	var_95_int = 0; // 0xa4b MovI
	var_101_bool = var_80_int != var_81_int; // 0xa4c Neq
	if(var_101_bool == 0) goto Label_2642; // 0xa4d JumpB
	var_102_int = var_81_int - var_80_int; // 0xa4e Sub
	irand(var_96_int, var_102_int); // 0xa4f Func
	goto Label_2646; // 0xa51 Jump
	
Label_2646:
	var_95_int = var_95_int + var_80_int; // 0xa56 Add2
	var_103_int = 0; // 0xa57 PushI
	var_104_bool = var_95_int == var_103_int; // 0xa58 Eq
	if(var_104_bool == 0) goto Label_2651; // 0xa59 JumpB
	return 8; // 0xa5a Return
	
Label_2651:
	var_105_string = "Money"; // 0xa5b PushS
	GetInvItemByName(var_97_int, var_105_string); // 0xa5c Func
	var_106_int = 0; // 0xa5e PushI
	AddItem(var_98_bool, var_97_int, var_106_int, var_95_int); // 0xa5f Func
	return 8; // 0xa61 Return
	
Label_2642:
	var_107_int = 0; // 0xa52 PushI
	var_108_bool = var_80_int == var_107_int; // 0xa53 Eq
	if(var_108_bool == 0) goto Label_2646; // 0xa54 JumpB
	return 8; // 0xa55 Return
}


func_593()
{
	var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_bool = 0; var_91_float = 0; var_92_bool = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0; var_98_float = 0; var_99_bool = 0; // 0x251 PushV
	WaitForAnimEnd(); // 0x252 Func
	var_100_bool = 0; // 0x254 PushV
	func_2239(var_100_bool); // 0x255 Call
	var_101_bool = var_100_bool == 0; // 0x257 Not
	if(var_101_bool == 0) goto Label_602; // 0x258 JumpB
	return 14; // 0x259 Return
	
Label_602:
	var_102_int = 0; // 0x25a PushV
	func_2507(var_102_int); // 0x25b Call
	var_93_int = var_102_int; // 0x25c Mov
	var_94_int = 0; // 0x25e MovI
	
Label_607:
	var_115_bool = 0; // 0x25f PushV
	var_115_bool = 0; // 0x260 MovB
	var_116_int = 5; // 0x261 PushI
	var_117_bool = var_94_int < var_116_int; // 0x262 LT
	if(var_117_bool == 0) goto Label_617; // 0x263 JumpB
	var_118_bool = 0; // 0x264 PushV
	func_2239(var_118_bool); // 0x265 Call
	if(var_118_bool == 0) goto Label_617; // 0x267 JumpB
	var_115_bool = 1; // 0x268 MovB
	
Label_617:
	if(var_115_bool == 0) goto Label_661; // 0x269 JumpB
	var_119_int = 3; // 0x26a PushI
	irand(var_95_int, var_119_int); // 0x26b Func
	var_120_int = 0; // 0x26d PushI
	var_121_bool = var_95_int == var_120_int; // 0x26e Eq
	if(var_121_bool == 0) goto Label_641; // 0x26f JumpB
	var_122_int = var_93_int; // 0x270 Push
	if(var_122_int == 0) goto Label_640; // 0x271 JumpB
	irand(var_96_int, var_93_int); // 0x272 Func
	var_123_string = "all"; // 0x274 PushS
	var_124_string = ""; var_125_int = 0; // 0x275 PushV
	var_125_int = var_96_int; // 0x276 Mov
	func_2500(var_124_string, var_125_int); // 0x277 Call
	PlayAnimation(var_123_string, var_124_string); // 0x279 Func
	WaitForAnimEnd(var_97_bool); // 0x27b Func
	var_126_bool = var_97_bool == 0; // 0x27d Not
	if(var_126_bool == 0) goto Label_640; // 0x27e JumpB
	goto Label_661; // 0x27f Jump
	
Label_661:
	return 14; // 0x295 Return
	
Label_640:
	goto Label_658; // 0x280 Jump
	
Label_658:
	var_127_int = 1; // 0x292 PushI
	var_94_int = var_94_int + var_127_int; // 0x293 Add2
	goto Label_607; // 0x294 Jump
	
Label_641:
	var_128_int = 1; // 0x281 PushI
	var_129_bool = var_95_int == var_128_int; // 0x282 Eq
	if(var_129_bool == 0) goto Label_655; // 0x283 JumpB
	var_130_int = 4; // 0x284 PushI
	rand(var_98_float, var_130_int); // 0x285 Func
	var_131_int = 1; // 0x287 PushI
	var_132_int = var_98_float + var_131_int; // 0x288 Add
	Sleep(var_132_int, var_99_bool); // 0x289 Func
	var_133_bool = var_99_bool == 0; // 0x28b Not
	if(var_133_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_661; // 0x28d Jump
	
Label_654:
	goto Label_658; // 0x28e Jump
	
Label_655:
	var_134_int = var_94_int; // 0x28f Push
	if(var_134_int == 0) goto Label_658; // 0x290 JumpB
	goto Label_661; // 0x291 Jump
}


func_1619(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_98_object, var_99_object)
{
	var_0_bool = var_99_object; // 0x654 TMov
	var_1_bool = var_98_object; // 0x655 TMov
	var_3_bool = 0; // 0x656 TMovB
	var_104_int = 1; // 0x657 PushI
	if(var_104_int == 0) goto Label_1687; // 0x658 JumpB
	var_105_string = ""; // 0x659 PushV
	var_105_string = "Neutral"; // 0x65a MovS
	func_1717(var_99_object, var_105_string); // 0x65b Call
	var_120_int = 13402; // 0x65d PushI
	SetMessage(var_120_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_121_int = 13403; // 0x662 PushI
	var_122_int = -1; // 0x663 PushI
	var_123_int = 14637; // 0x664 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x665 TObjFunc
	var_124_int = 13404; // 0x667 PushI
	var_125_int = -1; // 0x668 PushI
	var_126_int = 14638; // 0x669 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66a TObjFunc
	goto Label_1687; // 0x66c Jump
	
Label_1687:
	var_127_bool = 0; // 0x697 PushV
	func_2785(var_127_bool); // 0x698 Call
	if(var_127_bool == 0) goto Label_1702; // 0x69a JumpB
	
Label_1691:
	lshWaitForAnimEnd(); // 0x69b Func
	var_128_bool = var_3_bool; // 0x69d PushT
	if(var_128_bool == 0) goto Label_1696; // 0x69e JumpB
	goto Label_1701; // 0x69f Jump
	
Label_1701:
	goto Label_1716; // 0x6a5 Jump
	
Label_1716:
	return 0; // 0x6b4 Return
	
Label_1696:
	var_129_string = ""; // 0x6a0 PushV
	var_129_string = var_2_bool; // 0x6a1 MovT
	func_2356(var_129_string); // 0x6a2 Call
	goto Label_1691; // 0x6a4 Jump
	
Label_1702:
	var_130_string = "all"; // 0x6a6 PushS
	var_131_string = "idle"; // 0x6a7 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x6a8 Func
	
Label_1706:
	WaitForAnimEnd(); // 0x6aa Func
	var_132_bool = var_3_bool; // 0x6ac PushT
	if(var_132_bool == 0) goto Label_1711; // 0x6ad JumpB
	goto Label_1716; // 0x6ae Jump
	
Label_1711:
	var_133_string = "all"; // 0x6af PushS
	var_134_string = "idle"; // 0x6b0 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x6b1 Func
	goto Label_1706; // 0x6b3 Jump
}


func_1112(var_0_bool, var_282_float, var_283_int)
{
	var_284_object = Obj(); var_285_float = 0; var_286_float = 0; var_287_object = Obj(); var_288_float = 0; var_289_float = 0; // 0x458 PushV
	var_290_float = 0.9; // 0x459 PushF
	var_291_float = var_282_float * var_290_float; // 0x45a Mult
	GetVictim(var_291_float, var_287_object); // 0x45b Func
	ReportAttack(var_0_bool); // 0x45d Func
	var_292_bool = var_287_object == var_0_bool; // 0x45f Eq
	if(var_292_bool == 0) goto Label_1149; // 0x460 JumpB
	var_293_float = 0; var_294_object = Obj(); var_295_int = 0; // 0x461 PushV
	var_294_object = var_287_object; // 0x462 Mov
	var_295_int = var_283_int; // 0x463 Mov
	func_901(var_295_int); // 0x464 Call
	var_288_float = var_293_float; // 0x465 Mov
	var_296_float = 0; var_297_object = Obj(); var_298_float = 0; var_299_int = 0; // 0x467 PushV
	var_297_object = var_287_object; // 0x468 Mov
	var_298_float = var_288_float; // 0x469 Mov
	var_300_int = 0; var_301_object = Obj(); var_302_int = 0; // 0x46a PushV
	var_301_object = var_287_object; // 0x46b Mov
	var_302_int = var_283_int; // 0x46c Mov
	func_904(var_302_int); // 0x46d Call
	var_299_int = var_300_int; // 0x46e Mov
	func_2032(var_296_float, var_297_object, var_298_float, var_299_int); // 0x470 Call
	var_289_float = var_296_float; // 0x471 Mov
	var_349_int = 0; // 0x473 PushV
	func_1390(var_349_int); // 0x474 Call
	ReportHit(var_0_bool, var_349_int, var_289_float, var_288_float); // 0x476 Func
	var_350_object = Obj(); var_351_float = 0; // 0x478 PushV
	var_350_object = var_287_object; // 0x479 Mov
	var_351_float = var_289_float; // 0x47a Mov
	func_1392(); // 0x47b Call
	
Label_1149:
	return 6; // 0x47d Return
}


func_2137(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x859 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x85a PushV
	var_27_object = var_23_object; // 0x85b Mov
	func_2101(var_26_bool, var_27_object); // 0x85c Call
	var_43_bool = var_26_bool == 0; // 0x85e Not
	if(var_43_bool == 0) goto Label_2146; // 0x85f JumpB
	var_22_bool = 0; // 0x860 MovB
	return 2; // 0x861 Return
	
Label_2146:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x862 PushV
	var_45_object = var_23_object; // 0x863 Mov
	var_46_string = "noaccess"; // 0x864 MovS
	func_2020(var_44_bool, var_45_object, var_46_string); // 0x865 Call
	var_53_bool = var_44_bool == 0; // 0x867 Not
	if(var_53_bool == 0) goto Label_2155; // 0x868 JumpB
	var_22_bool = 1; // 0x869 MovB
	return 2; // 0x86a Return
	
Label_2155:
	var_54_string = "noaccess"; // 0x86b PushS
	GetProperty(var_54_string, var_25_int); // 0x86c ObjFunc
	var_55_int = 0; // 0x86e PushI
	var_22_bool = var_25_int == var_55_int; // 0x86f Eq2
	return 2; // 0x870 Return
}


func_2658()
{
	var_75_bool = 0; var_76_int = 0; var_77_bool = 0; var_78_int = 0; // 0xa62 PushV
	var_79_int = 0; // 0xa63 PushI
	ClearSubContainer(var_79_int); // 0xa64 Func
	var_80_int = 0; var_81_int = 0; // 0xa66 PushV
	var_80_int = 0; // 0xa67 MovI
	var_82_int = 10; // 0xa68 PushI
	var_83_int = 0; // 0xa69 PushV
	func_2456(var_83_int); // 0xa6a Call
	var_89_int = 10; // 0xa6c PushI
	var_90_float = var_83_int * var_89_int; // 0xa6d Mult
	var_81_int = var_82_int + var_90_float; // 0xa6e Add2
	func_2628(var_80_int, var_81_int); // 0xa6f Call
	var_109_int = 4; // 0xa71 PushI
	irand(var_78_int, var_109_int); // 0xa72 Func
	var_110_int = 0; // 0xa74 PushI
	var_111_bool = var_78_int == var_110_int; // 0xa75 Eq
	if(var_111_bool == 0) goto Label_2687; // 0xa76 JumpB
	var_112_int = 0; var_113_string = ""; // 0xa77 PushV
	var_113_string = "hook"; // 0xa78 MovS
	func_2776(var_112_int, var_113_string); // 0xa79 Call
	var_116_int = 0; // 0xa7b PushI
	var_117_int = 1; // 0xa7c PushI
	AddItem(var_77_bool, var_112_int, var_116_int, var_117_int); // 0xa7d Func
	
Label_2687:
	var_118_int = 10; // 0xa7f PushI
	irand(var_78_int, var_118_int); // 0xa80 Func
	var_119_int = 0; // 0xa82 PushI
	var_120_bool = var_78_int == var_119_int; // 0xa83 Eq
	if(var_120_bool == 0) goto Label_2701; // 0xa84 JumpB
	var_121_int = 0; var_122_string = ""; // 0xa85 PushV
	var_122_string = "watch"; // 0xa86 MovS
	func_2776(var_121_int, var_122_string); // 0xa87 Call
	var_123_int = 0; // 0xa89 PushI
	var_124_int = 1; // 0xa8a PushI
	AddItem(var_77_bool, var_121_int, var_123_int, var_124_int); // 0xa8b Func
	
Label_2701:
	return 4; // 0xa8d Return
}


func_2161(var_21_object, var_22_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_object = Obj(); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x871 PushV
	var_44_bool = 0; // 0x872 PushV
	var_44_bool = 0; // 0x873 MovB
	var_45_int = 4; // 0x874 PushI
	var_46_bool = var_22_int != var_45_int; // 0x875 Neq
	if(var_46_bool == 0) goto Label_2171; // 0x876 JumpB
	var_47_int = 5; // 0x877 PushI
	var_48_bool = var_22_int != var_47_int; // 0x878 Neq
	if(var_48_bool == 0) goto Label_2171; // 0x879 JumpB
	var_44_bool = 1; // 0x87a MovB
	
Label_2171:
	if(var_44_bool == 0) goto Label_2190; // 0x87b JumpB
	GetScene(var_34_object); // 0x87c Func
	GetPosition(var_36_cvector); // 0x87e Func
	GetEyesHeight(var_37_float); // 0x880 Func
	var_49_float = GetByIndex(var_36_cvector, 1); // 0x882 PushE
	var_50_int = 2; // 0x883 PushI
	var_51_float = var_37_float / var_50_int; // 0x884 Div
	var_49_float = var_49_float + var_51_float; // 0x885 Add2
	SetByIndex(var_36_cvector, 1) = var_49_float; // 0x886 PopE
	var_52_string = "scripted"; // 0x887 PushS
	var_53_cvector = CVector(0.0, 0.0, 1.0); // 0x888 PushVec
	var_54_string = "blood.xml"; // 0x889 PushS
	AddActorByType(var_35_object, var_52_string, var_34_object, var_36_cvector, var_53_cvector, var_54_string); // 0x88a Func
	var_35_object = 0; // 0x88c SetNull
	var_34_object = 0; // 0x88d SetNull
	
Label_2190:
	var_55_bool = var_21_object == 0; // 0x88e NullEq
	if(var_55_bool == 0) goto Label_2193; // 0x88f JumpB
	return 20; // 0x890 Return
	
Label_2193:
	GetSecondaryAnimationType(var_38_int); // 0x891 Func
	var_56_int = 0; // 0x893 PushI
	var_57_bool = var_38_int < var_56_int; // 0x894 LT
	if(var_57_bool == 0) goto Label_2199; // 0x895 JumpB
	return 20; // 0x896 Return
	
Label_2199:
	GetPosition(var_39_cvector); // 0x897 ObjFunc
	GetPosition(var_40_cvector); // 0x899 Func
	GetDirection(var_41_cvector); // 0x89b Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x89d Sub2
	var_58_float = GetByIndex(var_42_cvector, 0); // 0x89e PushE
	var_59_float = GetByIndex(var_41_cvector, 0); // 0x89f PushE
	var_60_float = var_58_float * var_59_float; // 0x8a0 Mult
	var_61_float = GetByIndex(var_42_cvector, 2); // 0x8a1 PushE
	var_62_float = GetByIndex(var_41_cvector, 2); // 0x8a2 PushE
	var_63_float = var_61_float * var_62_float; // 0x8a3 Mult
	var_64_int = var_60_float + var_63_float; // 0x8a4 Add
	var_65_int = 0; // 0x8a5 PushI
	var_66_bool = var_64_int >= var_65_int; // 0x8a6 GE
	if(var_66_bool == 0) goto Label_2218; // 0x8a7 JumpB
	var_43_string = "fhit"; // 0x8a8 MovS
	goto Label_2219; // 0x8a9 Jump
	
Label_2219:
	var_67_string = "hit_react"; // 0x8ab PushS
	var_68_string = "1"; // 0x8ac PushS
	var_69_int = var_43_string + var_68_string; // 0x8ad Add
	var_70_string = "2"; // 0x8ae PushS
	var_71_int = var_43_string + var_70_string; // 0x8af Add
	var_72_int = -10; // 0x8b0 PushI
	FadeSecondaryAnimation(var_67_string, var_69_int, var_71_int, var_72_int); // 0x8b1 Func
	return 20; // 0x8b3 Return
	
Label_2218:
	var_43_string = "bhit"; // 0x8aa MovS
}


func_1151(var_0_bool, var_253_bool, var_254_float)
{
	var_255_int = 0; var_256_bool = 0; var_257_int = 0; var_258_bool = 0; // 0x47f PushV
	irand(var_257_int, var_258_bool); // 0x480 Func
	var_259_int = 1; // 0x482 PushI
	var_257_int = var_257_int + var_259_int; // 0x483 Add2
	Face(var_0_bool); // 0x484 Func
	var_260_bool = 1; // 0x486 PushB
	SetAttackState(var_260_bool); // 0x487 Func
	var_261_string = "all"; // 0x489 PushS
	var_262_string = "attack_begin"; // 0x48a PushS
	var_263_int = var_262_string + var_257_int; // 0x48b Add
	PlayAnimation(var_261_string, var_263_int); // 0x48c Func
	WaitForAnimEnd(); // 0x48e Func
	func_1358(var_257_int, var_258_bool); // 0x491 Call
	var_279_bool = 0; var_280_object = Obj(); // 0x493 PushV
	var_280_object = var_0_bool; // 0x494 MovT
	func_2137(var_279_bool, var_280_object); // 0x495 Call
	var_281_bool = var_279_bool == 0; // 0x497 Not
	if(var_281_bool == 0) goto Label_1181; // 0x498 JumpB
	StopAsync(); // 0x499 Func
	var_253_bool = 0; // 0x49b MovB
	return 4; // 0x49c Return
	
Label_1181:
	var_282_float = 0; var_283_int = 0; // 0x49d PushV
	var_282_float = var_254_float; // 0x49e Mov
	var_283_int = var_257_int; // 0x49f Mov
	func_1112(var_258_bool, var_282_float, var_283_int); // 0x4a0 Call
	var_352_string = "all"; // 0x4a2 PushS
	var_353_string = "attack_middle"; // 0x4a3 PushS
	var_354_int = var_353_string + var_257_int; // 0x4a4 Add
	HasAnimation(var_258_bool, var_352_string, var_354_int); // 0x4a5 Func
	var_355_bool = var_258_bool; // 0x4a7 Push
	if(var_355_bool == 0) goto Label_1215; // 0x4a8 JumpB
	var_356_string = "all"; // 0x4a9 PushS
	var_357_string = "attack_middle"; // 0x4aa PushS
	var_358_int = var_357_string + var_257_int; // 0x4ab Add
	PlayAnimation(var_356_string, var_358_int); // 0x4ac Func
	WaitForAnimEnd(); // 0x4ae Func
	var_359_bool = 0; var_360_object = Obj(); // 0x4b0 PushV
	var_360_object = var_0_bool; // 0x4b1 MovT
	func_2137(var_359_bool, var_360_object); // 0x4b2 Call
	var_361_bool = var_359_bool == 0; // 0x4b4 Not
	if(var_361_bool == 0) goto Label_1210; // 0x4b5 JumpB
	StopAsync(); // 0x4b6 Func
	var_253_bool = 0; // 0x4b8 MovB
	return 4; // 0x4b9 Return
	
Label_1210:
	var_362_float = 0; var_363_int = 0; // 0x4ba PushV
	var_362_float = var_254_float; // 0x4bb Mov
	var_363_int = var_257_int; // 0x4bc Mov
	func_1112(var_258_bool, var_362_float, var_363_int); // 0x4bd Call
	
Label_1215:
	var_364_bool = 0; // 0x4bf PushB
	SetAttackState(var_364_bool); // 0x4c0 Func
	var_365_string = "all"; // 0x4c2 PushS
	var_366_string = "attack_end"; // 0x4c3 PushS
	var_367_int = var_366_string + var_257_int; // 0x4c4 Add
	PlayAnimation(var_365_string, var_367_int); // 0x4c5 Func
	var_368_bool = 0; var_369_float = 0; // 0x4c7 PushV
	var_369_float = 0.75; // 0x4c8 MovF
	func_1231(var_368_bool, var_369_float); // 0x4c9 Call
	StopAsync(); // 0x4cb Func
	var_253_bool = 1; // 0x4cd MovB
	return 4; // 0x4ce Return
}


func_142(var_42_string)
{
	RemoveRTEnvelope(); // 0x8f Func
	SetDeathState(); // 0x91 Func
	Stop(); // 0x93 Func
	StopAsync(); // 0x95 Func
	StopSecondaryAnimation(); // 0x97 Func
	var_43_string = "all"; // 0x99 PushS
	PlayAnimation(var_43_string, var_42_string); // 0x9a Func
	WaitForAnimEnd(); // 0x9c Func
	var_44_string = "all"; // 0x9e PushS
	LockAnimationEnd(var_44_string, var_42_string); // 0x9f Func
	RemoveEnvelope(); // 0xa1 Func
	return 0; // 0xa3 Return
}


func_2702(var_19_bool)
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0xa8e PushV
	var_24_int = 0; // 0xa8f PushI
	ClearSubContainer(var_24_int); // 0xa90 Func
	var_25_bool = var_19_bool; // 0xa92 Push
	if(var_25_bool == 0) goto Label_2735; // 0xa93 JumpB
	var_26_int = 3; // 0xa94 PushI
	irand(var_22_int, var_26_int); // 0xa95 Func
	var_27_int = 0; // 0xa97 PushI
	var_28_bool = var_22_int != var_27_int; // 0xa98 Neq
	if(var_28_bool == 0) goto Label_2721; // 0xa99 JumpB
	var_29_int = 0; var_30_string = ""; // 0xa9a PushV
	var_30_string = "alpha_pills"; // 0xa9b MovS
	func_2776(var_29_int, var_30_string); // 0xa9c Call
	var_33_int = 0; // 0xa9e PushI
	AddItem(var_23_bool, var_29_int, var_33_int, var_22_int); // 0xa9f Func
	
Label_2721:
	var_34_int = 3; // 0xaa1 PushI
	irand(var_22_int, var_34_int); // 0xaa2 Func
	var_35_int = 0; // 0xaa4 PushI
	var_36_bool = var_22_int != var_35_int; // 0xaa5 Neq
	if(var_36_bool == 0) goto Label_2734; // 0xaa6 JumpB
	var_37_int = 0; var_38_string = ""; // 0xaa7 PushV
	var_38_string = "meradorm"; // 0xaa8 MovS
	func_2776(var_37_int, var_38_string); // 0xaa9 Call
	var_39_int = 0; // 0xaab PushI
	AddItem(var_23_bool, var_37_int, var_39_int, var_22_int); // 0xaac Func
	
Label_2734:
	goto Label_2775; // 0xaae Jump
	
Label_2775:
	return 4; // 0xad7 Return
	
Label_2735:
	var_40_int = 3; // 0xaaf PushI
	irand(var_22_int, var_40_int); // 0xab0 Func
	var_41_int = 0; // 0xab2 PushI
	var_42_bool = var_22_int == var_41_int; // 0xab3 Eq
	if(var_42_bool == 0) goto Label_2749; // 0xab4 JumpB
	var_43_int = 0; var_44_string = ""; // 0xab5 PushV
	var_44_string = "lockpick"; // 0xab6 MovS
	func_2776(var_43_int, var_44_string); // 0xab7 Call
	var_45_int = 0; // 0xab9 PushI
	var_46_int = 1; // 0xaba PushI
	AddItem(var_23_bool, var_43_int, var_45_int, var_46_int); // 0xabb Func
	
Label_2749:
	var_47_int = 4; // 0xabd PushI
	irand(var_22_int, var_47_int); // 0xabe Func
	var_48_int = 0; // 0xac0 PushI
	var_49_bool = var_22_int != var_48_int; // 0xac1 Neq
	if(var_49_bool == 0) goto Label_2762; // 0xac2 JumpB
	var_50_int = 0; var_51_string = ""; // 0xac3 PushV
	var_51_string = "rifle_ammo"; // 0xac4 MovS
	func_2776(var_50_int, var_51_string); // 0xac5 Call
	var_52_int = 0; // 0xac7 PushI
	AddItem(var_23_bool, var_50_int, var_52_int, var_22_int); // 0xac8 Func
	
Label_2762:
	var_53_int = 4; // 0xaca PushI
	irand(var_22_int, var_53_int); // 0xacb Func
	var_54_int = 0; // 0xacd PushI
	var_55_bool = var_22_int != var_54_int; // 0xace Neq
	if(var_55_bool == 0) goto Label_2775; // 0xacf JumpB
	var_56_int = 0; var_57_string = ""; // 0xad0 PushV
	var_57_string = "revolver_ammo"; // 0xad1 MovS
	func_2776(var_56_int, var_57_string); // 0xad2 Call
	var_58_int = 0; // 0xad4 PushI
	AddItem(var_23_bool, var_56_int, var_58_int, var_22_int); // 0xad5 Func
}


func_662()
{
	StopAnimation(); // 0x296 Func
	StopGroup0(); // 0x298 Func
	return 0; // 0x29a Return
}


func_667(var_0_bool, var_69_object)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; // 0x29b PushV
	var_0_bool = var_69_object; // 0x29c TMov
	func_718(var_76_bool); // 0x29e Call
	GetDirection(var_74_cvector); // 0x2a0 Func
	var_84_cvector = CVector(0,0,0); var_85_object = Obj(); // 0x2a2 PushV
	var_85_object = var_0_bool; // 0x2a3 MovT
	func_2005(var_85_object); // 0x2a4 Call
	var_75_cvector = var_84_cvector; // 0x2a5 Mov
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x2a7 PushV
	var_91_cvector = var_74_cvector; // 0x2a8 Mov
	var_92_cvector = var_75_cvector; // 0x2a9 Mov
	func_2439(var_90_float, var_91_cvector, var_92_cvector); // 0x2aa Call
	var_114_int = 0; // 0x2ac PushI
	var_115_bool = var_90_float < var_114_int; // 0x2ad LT
	if(var_115_bool == 0) goto Label_693; // 0x2ae JumpB
	var_116_object = Obj(); // 0x2af PushV
	var_116_object = var_0_bool; // 0x2b0 MovT
	func_2228(); // 0x2b1 Call
	var_76_bool = 1; // 0x2b3 MovB
	goto Label_696; // 0x2b4 Jump
	
Label_696:
	var_125_bool = var_76_bool; // 0x2b8 Push
	if(var_125_bool == 0) goto Label_712; // 0x2b9 JumpB
	var_126_object = Obj(); // 0x2ba PushV
	var_126_object = var_0_bool; // 0x2bb MovT
	func_2228(); // 0x2bc Call
	var_127_int = 111; // 0x2be PushI
	var_128_float = 0.5; // 0x2bf PushF
	SetTimer(var_127_int, var_128_float); // 0x2c0 Func
	var_129_float = 5.0; // 0x2c2 PushF
	Sleep(var_129_float); // 0x2c3 Func
	var_130_int = 111; // 0x2c5 PushI
	KillTimer(var_130_int); // 0x2c6 Func
	
Label_712:
	StopAsync(); // 0x2c8 Func
	var_131_string = "head"; // 0x2ca PushS
	UnlookAsync(var_131_string); // 0x2cb Func
	return 6; // 0x2cd Return
	
Label_693:
	var_132_float = 1.5; // 0x2b5 PushF
	Sleep(var_132_float, var_76_bool); // 0x2b6 Func
}


func_2228()
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x8b4 PushV
	GetPosition(var_97_cvector); // 0x8b5 ObjFunc
	GetPosition(var_98_cvector); // 0x8b7 Func
	var_99_cvector = var_97_cvector - var_98_cvector; // 0x8b9 Sub2
	var_100_float = GetByIndex(var_99_cvector, 0); // 0x8ba PushE
	var_101_float = GetByIndex(var_99_cvector, 2); // 0x8bb PushE
	RotateAsync(var_100_float, var_101_float); // 0x8bc Func
	return 6; // 0x8be Return
}


func_1717(var_2_bool, var_28_string)
{
	var_29_bool = 0; // 0x6b6 PushV
	func_2785(var_29_bool); // 0x6b7 Call
	var_30_bool = var_29_bool == 0; // 0x6b9 Not
	if(var_30_bool == 0) goto Label_1724; // 0x6ba JumpB
	return 0; // 0x6bb Return
	
Label_1724:
	var_31_bool = var_28_string == var_2_bool; // 0x6bc Eq
	if(var_31_bool == 0) goto Label_1727; // 0x6bd JumpB
	return 0; // 0x6be Return
	
Label_1727:
	var_32_string = ""; // 0x6bf PushV
	var_32_string = var_28_string; // 0x6c0 Mov
	func_2356(var_32_string); // 0x6c1 Call
	var_2_bool = var_28_string; // 0x6c3 TMov
	return 0; // 0x6c4 Return
}


func_185()
{
	var_59_bool = 0; // 0xb9 PushV
	func_2239(var_59_bool); // 0xba Call
	var_62_bool = var_59_bool == 0; // 0xbc Not
	if(var_62_bool == 0) goto Label_193; // 0xbd JumpB
	func_2581(); // 0xbf Call
	
Label_193:
	return 0; // 0xc1 Return
}


func_2239(var_59_bool)
{
	var_60_bool = 0; var_61_bool = 0; // 0x8bf PushV
	IsLoaded(var_61_bool); // 0x8c0 Func
	var_59_bool = var_61_bool; // 0x8c2 Mov
	return 2; // 0x8c3 Return
}


func_2244(var_46_bool)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; // 0x8c4 PushV
	GetPosition(var_57_cvector); // 0x8c5 ObjFunc
	GetEyesHeight(var_56_float); // 0x8c7 ObjFunc
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x8c9 PushE
	var_64_float = var_64_float + var_56_float; // 0x8ca Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x8cb PopE
	GetPosition(var_58_cvector); // 0x8cc Func
	GetEyesHeight(var_56_float); // 0x8ce Func
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x8d0 PushE
	var_65_float = var_65_float + var_56_float; // 0x8d1 Add2
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x8d2 PopE
	var_59_cvector = var_57_cvector - var_58_cvector; // 0x8d3 Sub2
	var_66_float = GetByIndex(var_59_cvector, 1); // 0x8d4 PushE
	var_66_float = 0; // 0x8d5 MovI
	SetByIndex(var_59_cvector, 1) = var_66_float; // 0x8d6 PopE
	var_67_int = var_59_cvector | var_59_cvector; // 0x8d7 Or
	var_68_float = sqrt(var_67_int); // 0x8d8 Sqrt
	var_59_cvector = var_59_cvector / var_59_cvector; // 0x8d9 Div2
	var_60_cvector = -var_59_cvector; // 0x8da Neg2
	var_69_int = 70; // 0x8db PushI
	var_70_float = var_59_cvector * var_69_int; // 0x8dc Mult
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x8dd PushV
	var_73_cvector = CVector(0.0, 1.0, 0.0); // 0x8de PushVec
	var_72_cvector = var_60_cvector ^ var_73_cvector; // 0x8df Xor2
	func_2392(var_71_cvector, var_72_cvector); // 0x8e0 Call
	var_79_int = 25; // 0x8e2 PushI
	var_80_float = var_71_cvector * var_79_int; // 0x8e3 Mult
	var_81_int = var_70_float + var_80_float; // 0x8e4 Add
	var_82_cvector = CVector(0.0, 10.0, 0.0); // 0x8e5 PushVec
	var_61_cvector = var_81_int - var_82_cvector; // 0x8e6 Sub2
	var_62_cvector = var_58_cvector + var_61_cvector; // 0x8e7 Add2
	IsOverrideActive(var_63_bool); // 0x8e8 Func
	var_83_bool = var_63_bool; // 0x8ea Push
	if(var_83_bool == 0) goto Label_2286; // 0x8eb JumpB
	var_46_bool = 0; // 0x8ec MovB
	return 16; // 0x8ed Return
	
Label_2286:
	StopWorld(); // 0x8ee Func
	CameraTransit(var_62_cvector, var_60_cvector); // 0x8f0 Func
	var_84_float = GetByIndex(var_61_cvector, 0); // 0x8f2 PushE
	var_85_float = GetByIndex(var_61_cvector, 2); // 0x8f3 PushE
	Rotate(var_84_float, var_85_float); // 0x8f4 Func
	CameraWaitForPlayFinish(); // 0x8f6 Func
	ResumeWorld(); // 0x8f8 Func
	var_46_bool = 1; // 0x8fa MovB
	return 16; // 0x8fb Return
}


func_718(var_0_bool)
{
	var_77_object = Obj(); // 0x2ce PushV
	var_77_object = var_0_bool; // 0x2cf MovT
	func_2374(var_77_object); // 0x2d0 Call
	return 0; // 0x2d2 Return
}


func_1231(var_368_bool, var_369_float)
{
	var_370_float = 0; var_371_bool = 0; var_372_float = 0; var_373_bool = 0; // 0x4cf PushV
	rand(var_372_float); // 0x4d0 Func
	var_374_bool = var_372_float < var_369_float; // 0x4d2 LT
	if(var_374_bool == 0) goto Label_1251; // 0x4d3 JumpB
	
Label_1236:
	IsAnimationPlaying(var_373_bool); // 0x4d4 Func
	var_375_bool = var_373_bool == 0; // 0x4d6 Not
	if(var_375_bool == 0) goto Label_1241; // 0x4d7 JumpB
	goto Label_1250; // 0x4d8 Jump
	
Label_1250:
	goto Label_1253; // 0x4e2 Jump
	
Label_1253:
	var_368_bool = 0; // 0x4e5 MovB
	return 4; // 0x4e6 Return
	
Label_1241:
	var_376_bool = 0; // 0x4d9 PushV
	func_1295(var_373_bool, var_376_bool); // 0x4da Call
	if(var_376_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_368_bool = 1; // 0x4dd MovB
	return 4; // 0x4de Return
	
Label_1247:
	sync(); // 0x4df Func
	goto Label_1236; // 0x4e1 Jump
	
Label_1251:
	WaitForAnimEnd(); // 0x4e3 Func
}


func_2776(var_29_int, var_30_string)
{
	var_31_int = 0; var_32_int = 0; // 0xad8 PushV
	GetInvItemByName(var_32_int, var_30_string); // 0xad9 Func
	var_29_int = var_32_int; // 0xadb Mov
	return 2; // 0xadc Return
}


func_2781(var_87_int)
{
	var_87_int = 3343; // 0xadd MovI
	return 0; // 0xade Return
}


func_2783(var_88_string)
{
	var_88_string = "ui/NPC_None.png"; // 0xadf MovS
	return 0; // 0xae0 Return
}


func_2785(var_20_bool)
{
	var_20_bool = 0; // 0xae1 MovB
	return 0; // 0xae2 Return
}


func_2787()
{
	var_18_bool = GlobalVars[1]; // 0xae3 PushGE
	var_18_bool = 0; // 0xae4 MovB
	GlobalVars[1] = var_18_bool; // 0xae5 PopGE
	var_19_bool = 0; // 0xae6 PushV
	var_19_bool = 1; // 0xae7 MovB
	func_2702(var_19_bool); // 0xae8 Call
	return 0; // 0xaea Return
}


func_1255(var_0_bool, var_210_bool, var_211_float)
{
	var_212_bool = 0; var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_float = 0; var_217_bool = 0; var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_float = 0; // 0x4e7 PushV
	
Label_1256:
	IsAnimationPlaying(var_217_bool); // 0x4e8 Func
	var_222_bool = var_217_bool == 0; // 0x4ea Not
	if(var_222_bool == 0) goto Label_1261; // 0x4eb JumpB
	goto Label_1293; // 0x4ec Jump
	
Label_1293:
	var_210_bool = 0; // 0x50d MovB
	return 10; // 0x50e Return
	
Label_1261:
	var_223_bool = 0; // 0x4ed PushV
	func_1295(var_221_float, var_223_bool); // 0x4ee Call
	if(var_223_bool == 0) goto Label_1267; // 0x4f0 JumpB
	var_210_bool = 1; // 0x4f1 MovB
	return 10; // 0x4f2 Return
	
Label_1267:
	var_248_bool = 0; var_249_object = Obj(); // 0x4f3 PushV
	var_249_object = var_0_bool; // 0x4f4 MovT
	func_2137(var_248_bool, var_249_object); // 0x4f5 Call
	var_250_bool = var_248_bool == 0; // 0x4f7 Not
	if(var_250_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_210_bool = 0; // 0x4f9 MovB
	return 10; // 0x4fa Return
	
Label_1275:
	GetPFPosition(var_218_cvector); // 0x4fb TObjFunc
	GetPFPosition(var_219_cvector); // 0x4fd Func
	var_220_cvector = var_218_cvector - var_219_cvector; // 0x4ff Sub2
	var_221_float = var_220_cvector | var_220_cvector; // 0x500 Or2
	var_251_float = var_211_float * var_211_float; // 0x501 Mult
	var_252_bool = var_221_float < var_251_float; // 0x502 LT
	if(var_252_bool == 0) goto Label_1290; // 0x503 JumpB
	var_253_bool = 0; var_254_float = 0; // 0x504 PushV
	var_254_float = var_211_float; // 0x505 Mov
	func_1151(var_221_float, var_253_bool, var_254_float); // 0x506 Call
	var_210_bool = 1; // 0x508 MovB
	return 10; // 0x509 Return
	
Label_1290:
	sync(); // 0x50a Func
	goto Label_1256; // 0x50c Jump
}


func_2795(var_29_object, var_37_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0xaeb PushV
	var_32_bool = GlobalVars[1]; // 0xaec PushGE
	if(var_32_bool == 0) goto Label_2806; // 0xaed JumpB
	IsOverrideActive(var_31_bool); // 0xaee Func
	var_33_bool = var_31_bool == 0; // 0xaf0 Not
	if(var_33_bool == 0) goto Label_2804; // 0xaf1 JumpB
	WorkWithCorpse(var_29_object); // 0xaf2 Func
	
Label_2804:
	return 2; // 0xaf4 Return
	
Label_2806:
	var_34_int = 1000; // 0xaf6 PushI
	var_35_int = 0; var_36_object = Obj(); // 0xaf7 PushV
	var_36_object = var_29_object; // 0xaf8 Mov
	TaskCall(7); // 0xaf9 TaskCall
	func_1556(var_37_object, var_35_int, var_36_object); // 0xafa Call
	TaskReturn(); // 0xafb TaskReturn
	var_137_bool = var_34_int == var_37_object; // 0xafd Eq
	if(var_137_bool == 0) goto Label_2832; // 0xafe JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0xaff PushV
	var_139_object = var_29_object; // 0xb00 Mov
	func_2304(var_139_object); // 0xb01 Call
	var_167_bool = var_138_bool == 0; // 0xb03 Not
	if(var_167_bool == 0) goto Label_2822; // 0xb04 JumpB
	return 2; // 0xb05 Return
	
Label_2822:
	var_168_object = Obj(); // 0xb06 PushV
	var_168_object = var_29_object; // 0xb07 Mov
	TaskCall(0); // 0xb08 TaskCall
	func_0(var_168_object); // 0xb09 Call
	TaskReturn(); // 0xb0a TaskReturn
	var_173_object = Obj(); // 0xb0c PushV
	var_173_object = var_29_object; // 0xb0d Mov
	func_2352(); // 0xb0e Call
	
Label_2832:
	return 2; // 0xb10 Return
}


func_2300()
{
	CameraSwitchToNormal(); // 0x8fd Func
	return 0; // 0x8ff Return
}


func_2304(var_138_bool)
{
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; // 0x900 PushV
	GetPosition(var_149_cvector); // 0x901 ObjFunc
	GetEyesHeight(var_148_float); // 0x903 ObjFunc
	var_156_float = GetByIndex(var_149_cvector, 1); // 0x905 PushE
	var_156_float = var_156_float + var_148_float; // 0x906 Add2
	SetByIndex(var_149_cvector, 1) = var_156_float; // 0x907 PopE
	GetPosition(var_150_cvector); // 0x908 Func
	GetEyesHeight(var_148_float); // 0x90a Func
	var_157_float = GetByIndex(var_150_cvector, 1); // 0x90c PushE
	var_157_float = var_157_float + var_148_float; // 0x90d Add2
	SetByIndex(var_150_cvector, 1) = var_157_float; // 0x90e PopE
	var_151_cvector = var_149_cvector - var_150_cvector; // 0x90f Sub2
	var_158_float = GetByIndex(var_151_cvector, 1); // 0x910 PushE
	var_158_float = 0; // 0x911 MovI
	SetByIndex(var_151_cvector, 1) = var_158_float; // 0x912 PopE
	var_159_int = var_151_cvector | var_151_cvector; // 0x913 Or
	var_160_float = sqrt(var_159_int); // 0x914 Sqrt
	var_151_cvector = var_151_cvector / var_151_cvector; // 0x915 Div2
	var_152_cvector = -var_151_cvector; // 0x916 Neg2
	var_161_int = 70; // 0x917 PushI
	var_162_float = var_151_cvector * var_161_int; // 0x918 Mult
	var_163_cvector = CVector(0.0, 10.0, 0.0); // 0x919 PushVec
	var_153_cvector = var_162_float - var_163_cvector; // 0x91a Sub2
	var_154_cvector = var_150_cvector + var_153_cvector; // 0x91b Add2
	IsOverrideActive(var_155_bool); // 0x91c Func
	var_164_bool = var_155_bool; // 0x91e Push
	if(var_164_bool == 0) goto Label_2338; // 0x91f JumpB
	var_138_bool = 0; // 0x920 MovB
	return 16; // 0x921 Return
	
Label_2338:
	StopWorld(); // 0x922 Func
	CameraTransit(var_154_cvector, var_152_cvector); // 0x924 Func
	var_165_float = GetByIndex(var_153_cvector, 0); // 0x926 PushE
	var_166_float = GetByIndex(var_153_cvector, 2); // 0x927 PushE
	Rotate(var_165_float, var_166_float); // 0x928 Func
	CameraWaitForPlayFinish(); // 0x92a Func
	ResumeWorld(); // 0x92c Func
	var_138_bool = 1; // 0x92e MovB
	return 16; // 0x92f Return
}


func_1295(var_0_bool, var_223_bool)
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_float = 0; var_228_float = 0; var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_float = 0; var_233_float = 0; // 0x50f PushV
	var_234_bool = 0; var_235_object = Obj(); // 0x510 PushV
	var_235_object = var_0_bool; // 0x511 MovT
	func_2137(var_234_bool, var_235_object); // 0x512 Call
	var_236_bool = var_234_bool == 0; // 0x514 Not
	if(var_236_bool == 0) goto Label_1304; // 0x515 JumpB
	var_223_bool = 0; // 0x516 MovB
	return 10; // 0x517 Return
	
Label_1304:
	var_237_bool = 0; // 0x518 PushV
	func_1347(var_233_float, var_237_bool); // 0x519 Call
	if(var_237_bool == 0) goto Label_1326; // 0x51b JumpB
	GetPFPosition(var_229_cvector); // 0x51c TObjFunc
	GetPFPosition(var_230_cvector); // 0x51e Func
	var_231_cvector = var_229_cvector - var_230_cvector; // 0x520 Sub2
	var_232_float = var_231_cvector | var_231_cvector; // 0x521 Or2
	GetAttackDistance(var_233_float); // 0x522 TObjFunc
	var_238_int = 50; // 0x524 PushI
	var_233_float = var_233_float + var_238_int; // 0x525 Add2
	var_239_float = var_233_float * var_233_float; // 0x526 Mult
	var_240_bool = var_232_float <= var_239_float; // 0x527 LE
	if(var_240_bool == 0) goto Label_1326; // 0x528 JumpB
	func_1328(var_233_float); // 0x52a Call
	var_223_bool = 1; // 0x52c MovB
	return 10; // 0x52d Return
	
Label_1326:
	var_223_bool = 0; // 0x52e MovB
	return 10; // 0x52f Return
}


func_2833(var_62_bool)
{
	var_62_bool = 0; // 0xb11 MovB
	return 0; // 0xb12 Return
}


func_2835(var_21_bool, var_22_object, var_23_object)
{
	var_24_string = ""; var_25_bool = 0; var_26_string = ""; var_27_bool = 0; // 0xb13 PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0xb14 PushV
	var_29_object = var_23_object; // 0xb15 Mov
	var_30_string = "class"; // 0xb16 MovS
	func_2020(var_28_bool, var_29_object, var_30_string); // 0xb17 Call
	var_37_bool = var_28_bool == 0; // 0xb19 Not
	if(var_37_bool == 0) goto Label_2845; // 0xb1a JumpB
	var_21_bool = 0; // 0xb1b MovB
	return 4; // 0xb1c Return
	
Label_2845:
	CanSee(var_27_bool, var_22_object); // 0xb1d Func
	var_38_bool = 0; // 0xb1f PushV
	var_38_bool = 1; // 0xb20 MovB
	var_39_bool = var_27_bool; // 0xb21 Push
	if(var_39_bool == 0) goto Label_2859; // 0xb22 JumpB
	var_40_float = 0; var_41_object = Obj(); // 0xb23 PushV
	var_41_object = var_22_object; // 0xb24 Mov
	func_2012(var_41_object); // 0xb25 Call
	var_48_float = 250000.0; // 0xb27 PushF
	var_49_bool = var_40_float <= var_48_float; // 0xb28 LE
	if(var_49_bool == 0) goto Label_2859; // 0xb29 JumpB
	var_38_bool = 0; // 0xb2a MovB
	
Label_2859:
	if(var_38_bool == 0) goto Label_2865; // 0xb2b JumpB
	var_50_float = -0.3; // 0xb2c PushF
	ReportReputationChange(var_22_object, var_23_object, var_50_float); // 0xb2d Func
	var_21_bool = 1; // 0xb2f MovB
	return 4; // 0xb30 Return
	
Label_2865:
	CanSee(var_27_bool, var_23_object); // 0xb31 Func
	var_51_bool = 0; // 0xb33 PushV
	var_51_bool = 1; // 0xb34 MovB
	var_52_bool = var_27_bool; // 0xb35 Push
	if(var_52_bool == 0) goto Label_2879; // 0xb36 JumpB
	var_53_float = 0; var_54_object = Obj(); // 0xb37 PushV
	var_54_object = var_23_object; // 0xb38 Mov
	func_2012(var_54_object); // 0xb39 Call
	var_55_float = 250000.0; // 0xb3b PushF
	var_56_bool = var_53_float <= var_55_float; // 0xb3c LE
	if(var_56_bool == 0) goto Label_2879; // 0xb3d JumpB
	var_51_bool = 0; // 0xb3e MovB
	
Label_2879:
	if(var_51_bool == 0) goto Label_2882; // 0xb3f JumpB
	var_21_bool = 1; // 0xb40 MovB
	return 4; // 0xb41 Return
	
Label_2882:
	var_21_bool = 0; // 0xb42 MovB
	return 4; // 0xb43 Return
}


func_1328(var_0_bool)
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); // 0x530 PushV
	Face(var_0_bool); // 0x531 Func
	var_245_string = "all"; // 0x533 PushS
	var_246_string = "bjump"; // 0x534 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x535 Func
	GetPFPosition(var_243_cvector); // 0x537 TObjFunc
	GetPFPosition(var_244_cvector); // 0x539 Func
	WaitForAnimEnd(); // 0x53b Func
	StopAsync(); // 0x53d Func
	var_247_cvector = CVector(0.0, 0.0, 0.0); // 0x53f PushVec
	SetSpeed(var_247_cvector); // 0x540 Func
	return 4; // 0x542 Return
}


func_2352()
{
	CameraSwitchToNormal(); // 0x931 Func
	return 0; // 0x933 Return
}


func_2356(var_32_string)
{
	var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0x934 PushV
	var_37_string = "playing "; // 0x935 PushS
	var_38_int = var_37_string + var_32_string; // 0x936 Add
	Trace(var_38_int); // 0x937 Func
	lshGetAnimTimes(var_32_string, var_35_float, var_36_float); // 0x939 Func
	lshPlayAnimation(var_35_float, var_36_float); // 0x93b Func
	var_39_string = "start: "; // 0x93d PushS
	var_40_int = var_39_string + var_35_float; // 0x93e Add
	Trace(var_40_int); // 0x93f Func
	var_41_string = "end: "; // 0x941 PushS
	var_42_int = var_41_string + var_36_float; // 0x942 Add
	Trace(var_42_int); // 0x943 Func
	return 4; // 0x945 Return
}


func_831()
{
	StopGroup0(); // 0x33f Func
	StopAsync(); // 0x341 Func
	var_17_string = "head"; // 0x343 PushS
	UnlookAsync(var_17_string); // 0x344 Func
	var_18_int = 111; // 0x346 PushI
	KillTimer(var_18_int); // 0x347 Func
	return 0; // 0x349 Return
}


func_1347(var_0_bool, var_202_bool)
{
	var_203_bool = 0; var_204_bool = 0; // 0x543 PushV
	var_205_string = "IsAttacking"; // 0x544 PushS
	var_206_int = 1; // 0x545 PushI
	var_207_bool = IsFuncExist(var_0_bool, var_205_string, var_206_int); // 0x546 FuncExist
	if(var_207_bool == 0) goto Label_1356; // 0x547 JumpB
	IsAttacking(var_204_bool); // 0x548 TObjFunc
	var_202_bool = var_204_bool; // 0x54a Mov
	return 2; // 0x54b Return
	
Label_1356:
	var_202_bool = 0; // 0x54c MovB
	return 2; // 0x54d Return
}


func_2884()
{
	var_71_bool = GlobalVars[1]; // 0xb45 PushGE
	var_71_bool = 1; // 0xb46 MovB
	GlobalVars[1] = var_71_bool; // 0xb47 PopGE
	var_72_int = 50; // 0xb48 PushI
	var_73_int = 40; // 0xb49 PushI
	SetRTEnvelope(var_72_int, var_73_int); // 0xb4a Func
	var_74_bool = 0; // 0xb4c PushV
	var_74_bool = 1; // 0xb4d MovB
	func_2658(); // 0xb4e Call
	return 0; // 0xb50 Return
}


func_2374(var_77_object)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x946 PushV
	GetEyesHeight(var_80_float); // 0x947 ObjFunc
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x949 MovV
	var_82_float = GetByIndex(var_81_cvector, 1); // 0x94a PushE
	var_82_float = var_80_float; // 0x94b Mov
	SetByIndex(var_81_cvector, 1) = var_82_float; // 0x94c PopE
	var_83_string = "head"; // 0x94d PushS
	LookAsync(var_77_object, var_83_string, var_81_cvector); // 0x94e Func
	return 4; // 0x950 Return
}


func_333(var_2_bool)
{
	var_18_int = 110; // 0x14d PushI
	KillTimer(var_18_int); // 0x14e Func
	var_2_bool = 0; // 0x150 TMovB
	func_462(var_16_string, var_17_bool); // 0x152 Call
	return 0; // 0x154 Return
}


func_1358(var_2_bool, var_4_object)
{
	var_264_float = 0; var_265_int = 0; var_266_float = 0; var_267_int = 0; // 0x54e PushV
	var_268_bool = var_2_bool == 0; // 0x54f Not
	if(var_268_bool == 0) goto Label_1362; // 0x550 JumpB
	return 4; // 0x551 Return
	
Label_1362:
	var_269_object = var_4_object; // 0x552 PushT
	if(var_269_object == 0) goto Label_1370; // 0x553 JumpB
	var_270_int = -1; // 0x554 PushI
	var_4_object = var_4_object + var_270_int; // 0x555 Add2
	var_271_int = 0; // 0x556 PushI
	var_272_bool = var_4_object > var_271_int; // 0x557 GT
	if(var_272_bool == 0) goto Label_1370; // 0x558 JumpB
	return 4; // 0x559 Return
	
Label_1370:
	rand(var_266_float); // 0x55a Func
	var_273_float = 0; // 0x55c PushV
	func_1396(var_273_float); // 0x55d Call
	var_274_bool = var_266_float < var_273_float; // 0x55f LT
	if(var_274_bool == 0) goto Label_1389; // 0x560 JumpB
	irand(var_267_int, var_266_float); // 0x561 Func
	var_275_int = 1; // 0x563 PushI
	var_267_int = var_267_int + var_275_int; // 0x564 Add2
	var_276_string = "attack"; // 0x565 PushS
	var_277_int = var_276_string + var_267_int; // 0x566 Add
	Speak(var_277_int); // 0x567 Func
	var_278_int = 0; // 0x569 PushV
	func_1394(var_278_int); // 0x56a Call
	var_4_object = var_278_int; // 0x56b TMov
	
Label_1389:
	return 4; // 0x56d Return
}


func_2385()
{
	var_20_bool = 0; // 0x951 PushV
	func_2785(var_20_bool); // 0x952 Call
	if(var_20_bool == 0) goto Label_2391; // 0x954 JumpB
	lshStopSpeech(); // 0x955 Func
	
Label_2391:
	return 0; // 0x957 Return
}


func_341(var_2_bool)
{
	var_67_int = 110; // 0x155 PushI
	KillTimer(var_67_int); // 0x156 Func
	var_2_bool = 0; // 0x158 TMovB
	func_469(var_21_bool, var_22_int); // 0x15a Call
	return 0; // 0x15c Return
}


func_2392(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0; // 0x958 PushV
	var_76_int = var_72_cvector | var_72_cvector; // 0x959 Or
	var_75_float = sqrt(var_76_int); // 0x95a Sqrt2
	var_77_float = 0.0; // 0x95b PushF
	var_78_bool = var_75_float < var_77_float; // 0x95c LT
	if(var_78_bool == 0) goto Label_2400; // 0x95d JumpB
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x95e MovV
	return 2; // 0x95f Return
	
Label_2400:
	var_71_cvector = var_72_cvector / var_72_cvector; // 0x960 Div2
	return 2; // 0x961 Return
}


func_2402(var_332_float, var_333_float, var_334_float)
{
	var_337_bool = var_333_float < var_334_float; // 0x963 LT
	if(var_337_bool == 0) goto Label_2407; // 0x964 JumpB
	var_332_float = var_333_float; // 0x965 Mov
	goto Label_2408; // 0x966 Jump
	
Label_2408:
	return 0; // 0x968 Return
	
Label_2407:
	var_332_float = var_334_float; // 0x967 Mov
}


func_358(var_2_bool, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0x166 PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x167 PushV
	var_24_object = var_18_object; // 0x168 Mov
	func_2137(var_23_bool, var_24_object); // 0x169 Call
	var_57_bool = var_23_bool == 0; // 0x16b Not
	if(var_57_bool == 0) goto Label_366; // 0x16c JumpB
	return 4; // 0x16d Return
	
Label_366:
	var_58_bool = var_2_bool; // 0x16e PushT
	if(var_58_bool == 0) goto Label_369; // 0x16f JumpB
	return 4; // 0x170 Return
	
Label_369:
	IsPlayerActor(var_18_object, var_21_bool); // 0x171 Func
	var_59_bool = var_21_bool == 0; // 0x173 Not
	if(var_59_bool == 0) goto Label_374; // 0x174 JumpB
	return 4; // 0x175 Return
	
Label_374:
	var_60_int = 0; var_61_object = Obj(); // 0x176 PushV
	var_61_object = var_18_object; // 0x177 Mov
	func_2524(var_61_object); // 0x178 Call
	var_22_int = var_60_int; // 0x179 Mov
	var_63_int = 0; // 0x17b PushI
	var_64_bool = var_22_int > var_63_int; // 0x17c GT
	if(var_64_bool == 0) goto Label_397; // 0x17d JumpB
	var_65_int = 1; // 0x17e PushI
	var_66_bool = var_22_int > var_65_int; // 0x17f GT
	if(var_66_bool == 0) goto Label_388; // 0x180 JumpB
	func_341(var_22_int); // 0x182 Call
	
Label_388:
	var_68_object = Obj(); // 0x184 PushV
	var_68_object = var_18_object; // 0x185 Mov
	func_2533(var_68_object); // 0x186 Call
	var_2_bool = 1; // 0x188 TMovB
	var_133_int = 110; // 0x189 PushI
	var_134_float = 10.0; // 0x18a PushF
	SetTimer(var_133_int, var_134_float); // 0x18b Func
	
Label_397:
	return 4; // 0x18d Return
}


func_2409(var_342_float, var_343_float, var_344_float, var_345_float)
{
	var_346_bool = var_343_float < var_344_float; // 0x96a LT
	if(var_346_bool == 0) goto Label_2414; // 0x96b JumpB
	var_342_float = var_344_float; // 0x96c Mov
	return 0; // 0x96d Return
	
Label_2414:
	var_347_bool = var_343_float > var_345_float; // 0x96e GT
	if(var_347_bool == 0) goto Label_2418; // 0x96f JumpB
	var_342_float = var_345_float; // 0x970 Mov
	return 0; // 0x971 Return
	
Label_2418:
	var_342_float = var_343_float; // 0x972 Mov
	return 0; // 0x973 Return
}


func_1390(var_349_int)
{
	var_349_int = 0; // 0x56e MovI
	return 0; // 0x56f Return
}


func_1392()
{
	return 0; // 0x571 Return
}


func_1394(var_278_int)
{
	var_278_int = 1; // 0x572 MovI
	return 0; // 0x573 Return
}


func_1396(var_273_float)
{
	var_273_float = 0.5; // 0x574 MovF
	return 0; // 0x575 Return
}


func_2420(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x975 PushE
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x976 PushE
	var_75_float = var_73_float * var_74_float; // 0x977 Mult
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x978 PushE
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x979 PushE
	var_78_float = var_76_float * var_77_float; // 0x97a Mult
	var_70_float = var_75_float + var_78_float; // 0x97b Add2
	return 0; // 0x97c Return
}


func_1405(var_0_bool, var_1_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool)
{
	var_134_bool = 0; var_135_bool = 0; var_136_object = Obj(); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_float = 0; var_141_object = Obj(); var_142_bool = 0; var_143_bool = 0; var_144_object = Obj(); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_object = Obj(); // 0x57d PushV
	var_0_bool = 0; // 0x57e TMovB
	var_1_bool = var_127_object; // 0x57f TMov
	var_143_bool = var_131_bool; // 0x580 Mov
	
Label_1409:
	var_150_bool = 0; var_151_object = Obj(); // 0x581 PushV
	var_151_object = var_127_object; // 0x582 Mov
	func_1545(var_150_bool, var_151_object); // 0x583 Call
	var_154_bool = var_150_bool == 0; // 0x585 Not
	if(var_154_bool == 0) goto Label_1417; // 0x586 JumpB
	var_126_bool = 0; // 0x587 MovB
	return 16; // 0x588 Return
	
Label_1417:
	GetPosition(var_145_cvector); // 0x589 ObjFunc
	GetPosition(var_146_cvector); // 0x58b Func
	var_147_cvector = var_145_cvector - var_146_cvector; // 0x58d Sub2
	var_148_float = var_147_cvector | var_147_cvector; // 0x58e Or2
	var_155_bool = 0; // 0x58f PushV
	var_155_bool = 0; // 0x590 MovB
	var_156_int = 0; // 0x591 PushI
	var_157_bool = var_129_float > var_156_int; // 0x592 GT
	if(var_157_bool == 0) goto Label_1432; // 0x593 JumpB
	var_158_float = var_129_float * var_129_float; // 0x594 Mult
	var_159_bool = var_148_float > var_158_float; // 0x595 GT
	if(var_159_bool == 0) goto Label_1432; // 0x596 JumpB
	var_155_bool = 1; // 0x597 MovB
	
Label_1432:
	if(var_155_bool == 0) goto Label_1437; // 0x598 JumpB
	Stop(); // 0x599 Func
	var_126_bool = 0; // 0x59b MovB
	return 16; // 0x59c Return
	
Label_1437:
	var_160_float = var_128_float * var_128_float; // 0x59d Mult
	var_161_bool = var_148_float > var_160_float; // 0x59e GT
	if(var_161_bool == 0) goto Label_1499; // 0x59f JumpB
	GetPFPosition(var_145_cvector); // 0x5a0 ObjFunc
	FindPathTo(var_149_object, var_145_cvector); // 0x5a2 Func
	var_162_bool = var_149_object != 0; // 0x5a4 NullNeq
	if(var_162_bool == 0) goto Label_1448; // 0x5a5 JumpB
	var_144_object = var_149_object; // 0x5a6 Mov
	var_149_object = 0; // 0x5a7 SetNull
	
Label_1448:
	var_163_bool = var_144_object != 0; // 0x5a8 NullNeq
	if(var_163_bool == 0) goto Label_1481; // 0x5a9 JumpB
	var_164_bool = var_143_bool; // 0x5aa Push
	if(var_164_bool == 0) goto Label_1458; // 0x5ab JumpB
	var_143_bool = 0; // 0x5ac MovB
	RotatePath(var_144_object, var_142_bool); // 0x5ad Func
	var_165_bool = var_142_bool == 0; // 0x5af Not
	if(var_165_bool == 0) goto Label_1458; // 0x5b0 JumpB
	goto Label_1505; // 0x5b1 Jump
	
Label_1505:
	var_126_bool = !var_0_bool; // 0x5e1 Not2
	return 16; // 0x5e2 Return
	
Label_1458:
	var_166_int = 0; // 0x5b2 PushI
	var_167_float = 0.3; // 0x5b3 PushF
	SetTimer(var_166_int, var_167_float); // 0x5b4 Func
	var_168_string = ""; // 0x5b6 PushV
	func_1552(var_168_string); // 0x5b7 Call
	var_169_string = ""; // 0x5b9 PushV
	func_1554(var_169_string); // 0x5ba Call
	FollowPath(var_144_object, var_130_bool, var_142_bool, var_168_string, var_169_string); // 0x5bc Func
	var_170_bool = var_142_bool == 0; // 0x5be Not
	if(var_170_bool == 0) goto Label_1479; // 0x5bf JumpB
	var_171_bool = var_0_bool; // 0x5c0 PushT
	if(var_171_bool == 0) goto Label_1477; // 0x5c1 JumpB
	var_144_object = 0; // 0x5c2 SetNull
	goto Label_1505; // 0x5c3 Jump
	
Label_1477:
	goto Label_1504; // 0x5c5 Jump
	
Label_1504:
	goto Label_1409; // 0x5e0 Jump
	
Label_1479:
	var_144_object = 0; // 0x5c7 SetNull
	goto Label_1497; // 0x5c8 Jump
	
Label_1497:
	var_149_object = 0; // 0x5d9 SetNull
	goto Label_1503; // 0x5da Jump
	
Label_1503:
	var_144_object = 0; // 0x5df SetNull
	
Label_1481:
	var_172_int = 0; // 0x5c9 PushI
	KillTimer(var_172_int); // 0x5ca Func
	var_173_float = 0.5; // 0x5cc PushF
	Sleep(var_173_float, var_142_bool); // 0x5cd Func
	var_174_bool = var_142_bool == 0; // 0x5cf Not
	if(var_174_bool == 0) goto Label_1493; // 0x5d0 JumpB
	var_175_bool = var_0_bool; // 0x5d1 PushT
	if(var_175_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_144_object = 0; // 0x5d3 SetNull
	goto Label_1505; // 0x5d4 Jump
	
Label_1493:
	var_176_int = 0; // 0x5d5 PushI
	var_177_float = 0.3; // 0x5d6 PushF
	SetTimer(var_176_int, var_177_float); // 0x5d7 Func
	
Label_1499:
	var_178_int = 0; // 0x5db PushI
	KillTimer(var_178_int); // 0x5dc Func
	goto Label_1505; // 0x5de Jump
}


func_2429(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0); // 0x97e PushE
	var_82_float = GetByIndex(var_80_cvector, 0); // 0x97f PushE
	var_83_float = var_81_float * var_82_float; // 0x980 Mult
	var_84_float = GetByIndex(var_80_cvector, 2); // 0x981 PushE
	var_85_float = GetByIndex(var_80_cvector, 2); // 0x982 PushE
	var_86_float = var_84_float * var_85_float; // 0x983 Mult
	var_87_int = var_83_float + var_86_float; // 0x984 Add
	var_79_float = sqrt(var_87_int); // 0x985 Sqrt2
	return 0; // 0x986 Return
}


func_893(var_69_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_float = 0; // 0x37e PushV
	var_75_object = var_69_object; // 0x37f Mov
	var_76_bool = 1; // 0x380 MovB
	var_77_float = 180.0; // 0x381 MovF
	func_907(var_70_object, var_71_int, var_72_int, var_73_bool, var_74_int, var_69_object, var_75_object, var_76_bool, var_77_float); // 0x382 Call
	return 0; // 0x384 Return
}


func_901(var_293_float)
{
	var_293_float = 0.03; // 0x386 MovF
	return 0; // 0x387 Return
}


func_2439(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x988 PushV
	var_71_cvector = var_68_cvector; // 0x989 Mov
	var_72_cvector = var_69_cvector; // 0x98a Mov
	func_2420(var_70_float, var_71_cvector, var_72_cvector); // 0x98b Call
	var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x98d PushV
	var_80_cvector = var_68_cvector; // 0x98e Mov
	func_2429(var_79_float, var_80_cvector); // 0x98f Call
	var_88_float = 0; var_89_cvector = CVector(0,0,0); // 0x991 PushV
	var_89_cvector = var_69_cvector; // 0x992 Mov
	func_2429(var_88_float, var_89_cvector); // 0x993 Call
	var_90_float = var_79_float * var_88_float; // 0x995 Mult
	var_67_float = var_70_float / var_70_float; // 0x996 Div2
	return 0; // 0x997 Return
}


func_904(var_300_int)
{
	var_300_int = 0; // 0x389 MovI
	return 0; // 0x38a Return
}


func_907(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_75_object, var_76_bool, var_77_float, var_132_bool)
{
	var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_float = 0; var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_float = 0; var_97_float = 0; // 0x38b PushV
	var_1_bool = 0; // 0x38c TMovI
	
Label_909:
	var_98_string = "all"; // 0x38d PushS
	var_99_string = "attack_begin"; // 0x38e PushS
	var_100_int = 1; // 0x38f PushI
	var_101_int = var_1_bool + var_100_int; // 0x390 Add
	var_102_int = var_99_string + var_101_int; // 0x391 Add
	HasAnimation(var_88_bool, var_98_string, var_102_int); // 0x392 Func
	var_103_bool = var_88_bool == 0; // 0x394 Not
	if(var_103_bool == 0) goto Label_919; // 0x395 JumpB
	goto Label_922; // 0x396 Jump
	
Label_922:
	var_2_bool = 0; // 0x39a TMovI
	
Label_923:
	var_104_string = "attack"; // 0x39b PushS
	var_105_int = 1; // 0x39c PushI
	var_106_int = var_2_bool + var_105_int; // 0x39d Add
	var_107_int = var_104_string + var_106_int; // 0x39e Add
	IsExisting3DSound(var_89_bool, var_107_int); // 0x39f Func
	var_108_bool = var_89_bool == 0; // 0x3a1 Not
	if(var_108_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_935; // 0x3a3 Jump
	
Label_935:
	var_4_object = 0; // 0x3a7 TMovI
	var_109_string = "@GetAttackDistance"; // 0x3a8 PushS
	var_110_int = 1; // 0x3a9 PushI
	var_111_bool = IsFuncExist(var_75_object, var_109_string, var_110_int); // 0x3aa FuncExist
	if(var_111_bool == 0) goto Label_945; // 0x3ab JumpB
	GetAttackDistance(var_90_float); // 0x3ac ObjFunc
	var_112_int = 50; // 0x3ae PushI
	var_90_float = var_90_float + var_112_int; // 0x3af Add2
	goto Label_946; // 0x3b0 Jump
	
Label_946:
	var_113_int = 150; // 0x3b2 PushI
	var_114_bool = var_90_float >= var_113_int; // 0x3b3 GE
	if(var_114_bool == 0) goto Label_950; // 0x3b4 JumpB
	var_90_float = 150; // 0x3b5 MovI
	
Label_950:
	var_3_bool = 0; // 0x3b6 TMovB
	var_0_bool = var_75_object; // 0x3b7 TMov
	IsPlayerActor(var_0_bool, var_93_bool); // 0x3b8 Func
	var_115_bool = var_76_bool; // 0x3ba Push
	if(var_115_bool == 0) goto Label_958; // 0x3bb JumpB
	var_94_bool = 0; // 0x3bc MovB
	goto Label_959; // 0x3bd Jump
	
Label_959:
	var_116_bool = 0; // 0x3bf PushV
	var_116_bool = 0; // 0x3c0 MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x3c1 PushV
	var_118_object = var_0_bool; // 0x3c2 MovT
	func_2137(var_117_bool, var_118_object); // 0x3c3 Call
	if(var_117_bool == 0) goto Label_969; // 0x3c5 JumpB
	var_119_bool = var_3_bool == 0; // 0x3c6 Not
	if(var_119_bool == 0) goto Label_969; // 0x3c7 JumpB
	var_116_bool = 1; // 0x3c8 MovB
	
Label_969:
	if(var_116_bool == 0) goto Label_1095; // 0x3c9 JumpB
	GetPFPosition(var_91_cvector); // 0x3ca TObjFunc
	GetPFPosition(var_92_cvector); // 0x3cc Func
	var_95_cvector = var_91_cvector - var_92_cvector; // 0x3ce Sub2
	var_96_float = var_95_cvector | var_95_cvector; // 0x3cf Or2
	var_120_float = 400.0; // 0x3d0 PushF
	var_121_int = var_120_float + var_90_float; // 0x3d1 Add
	var_122_float = 400.0; // 0x3d2 PushF
	var_123_int = var_122_float + var_90_float; // 0x3d3 Add
	var_124_float = var_121_int * var_123_int; // 0x3d4 Mult
	var_125_bool = var_96_float >= var_124_float; // 0x3d5 GE
	if(var_125_bool == 0) goto Label_998; // 0x3d6 JumpB
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_bool = 0; // 0x3d7 PushV
	var_127_object = var_0_bool; // 0x3d8 MovT
	var_128_float = var_90_float; // 0x3d9 Mov
	var_129_float = 3000.0; // 0x3da MovF
	var_130_bool = 1; // 0x3db MovB
	var_131_bool = 0; // 0x3dc MovB
	TaskCall(6); // 0x3dd TaskCall
	func_1405(var_132_bool, var_133_object, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool); // 0x3de Call
	TaskReturn(); // 0x3df TaskReturn
	var_179_bool = var_132_bool == 0; // 0x3e1 Not
	if(var_179_bool == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_1095; // 0x3e3 Jump
	
Label_1095:
	WaitForAnimEnd(); // 0x447 Func
	var_180_bool = var_3_bool; // 0x449 PushT
	if(var_180_bool == 0) goto Label_1100; // 0x44a JumpB
	return 20; // 0x44b Return
	
Label_1100:
	var_181_string = "all"; // 0x44c PushS
	var_182_string = "attack_off"; // 0x44d PushS
	PlayAnimation(var_181_string, var_182_string); // 0x44e Func
	WaitForAnimEnd(); // 0x450 Func
	var_183_bool = var_93_bool; // 0x452 Push
	if(var_183_bool == 0) goto Label_1111; // 0x453 JumpB
	var_184_float = 2.0; // 0x454 PushF
	Sleep(var_184_float); // 0x455 Func
	
Label_1111:
	return 20; // 0x457 Return
	
Label_996:
	var_94_bool = 0; // 0x3e4 MovB
	goto Label_1094; // 0x3e5 Jump
	
Label_1094:
	goto Label_959; // 0x446 Jump
	
Label_998:
	var_185_float = var_77_float * var_77_float; // 0x3e6 Mult
	var_186_bool = var_96_float >= var_185_float; // 0x3e7 GE
	if(var_186_bool == 0) goto Label_1086; // 0x3e8 JumpB
	var_187_bool = var_94_bool == 0; // 0x3e9 Not
	if(var_187_bool == 0) goto Label_1016; // 0x3ea JumpB
	var_188_object = Obj(); // 0x3eb PushV
	var_188_object = var_0_bool; // 0x3ec MovT
	func_2228(); // 0x3ed Call
	var_197_string = "all"; // 0x3ef PushS
	var_198_string = "attack_on"; // 0x3f0 PushS
	PlayAnimation(var_197_string, var_198_string); // 0x3f1 Func
	WaitForAnimEnd(); // 0x3f3 Func
	StopAsync(); // 0x3f5 Func
	var_94_bool = 1; // 0x3f7 MovB
	
Label_1016:
	rand(var_97_float); // 0x3f8 Func
	var_199_bool = 0; // 0x3fa PushV
	var_199_bool = 1; // 0x3fb MovB
	var_200_float = 0.6; // 0x3fc PushF
	var_201_bool = var_97_float < var_200_float; // 0x3fd LT
	if(var_201_bool == 0) goto Label_1028; // 0x3fe JumpB
	var_202_bool = 0; // 0x3ff PushV
	func_1347(var_199_bool, var_202_bool); // 0x400 Call
	if(var_202_bool == 0) goto Label_1028; // 0x402 JumpB
	var_199_bool = 0; // 0x403 MovB
	
Label_1028:
	if(var_199_bool == 0) goto Label_1042; // 0x404 JumpB
	Face(var_0_bool); // 0x405 Func
	var_208_string = "all"; // 0x407 PushS
	var_209_string = "attack_stay"; // 0x408 PushS
	PlayAnimation(var_208_string, var_209_string); // 0x409 Func
	var_210_bool = 0; var_211_float = 0; // 0x40b PushV
	var_211_float = var_77_float; // 0x40c Mov
	func_1255(var_97_float, var_210_bool, var_211_float); // 0x40d Call
	StopAsync(); // 0x40f Func
	goto Label_1085; // 0x411 Jump
	
Label_1085:
	goto Label_1094; // 0x43d Jump
	
Label_1042:
	Face(var_0_bool); // 0x412 Func
	var_377_string = "all"; // 0x414 PushS
	var_378_string = "fjump"; // 0x415 PushS
	PlayAnimation(var_377_string, var_378_string); // 0x416 Func
	WaitForAnimEnd(); // 0x418 Func
	var_379_cvector = CVector(0.0, 0.0, 0.0); // 0x41a PushVec
	SetSpeed(var_379_cvector); // 0x41b Func
	Stop(); // 0x41d Func
	StopAsync(); // 0x41f Func
	var_380_bool = 0; // 0x421 PushV
	func_1347(var_97_float, var_380_bool); // 0x422 Call
	var_381_bool = var_380_bool == 0; // 0x424 Not
	if(var_381_bool == 0) goto Label_1085; // 0x425 JumpB
	var_382_bool = 0; var_383_object = Obj(); // 0x426 PushV
	var_383_object = var_0_bool; // 0x427 MovT
	func_2137(var_382_bool, var_383_object); // 0x428 Call
	var_384_bool = var_382_bool == 0; // 0x42a Not
	if(var_384_bool == 0) goto Label_1069; // 0x42b JumpB
	goto Label_1095; // 0x42c Jump
	
Label_1069:
	GetPFPosition(var_91_cvector); // 0x42d TObjFunc
	GetPFPosition(var_92_cvector); // 0x42f Func
	var_95_cvector = var_91_cvector - var_92_cvector; // 0x431 Sub2
	var_96_float = var_95_cvector | var_95_cvector; // 0x432 Or2
	var_385_float = var_77_float * var_77_float; // 0x433 Mult
	var_386_bool = var_96_float < var_385_float; // 0x434 LT
	if(var_386_bool == 0) goto Label_1085; // 0x435 JumpB
	var_387_bool = 0; var_388_float = 0; // 0x436 PushV
	var_388_float = var_77_float; // 0x437 Mov
	func_1151(var_97_float, var_387_bool, var_388_float); // 0x438 Call
	var_389_bool = var_387_bool == 0; // 0x43a Not
	if(var_389_bool == 0) goto Label_1085; // 0x43b JumpB
	goto Label_1095; // 0x43c Jump
	
Label_1086:
	var_390_bool = 0; var_391_float = 0; // 0x43e PushV
	var_391_float = var_77_float; // 0x43f Mov
	func_1151(var_97_float, var_390_bool, var_391_float); // 0x440 Call
	var_392_bool = var_390_bool == 0; // 0x442 Not
	if(var_392_bool == 0) goto Label_1093; // 0x443 JumpB
	goto Label_1095; // 0x444 Jump
	
Label_1093:
	var_94_bool = 1; // 0x445 MovB
	
Label_958:
	var_94_bool = 1; // 0x3be MovB
	
Label_945:
	var_90_float = var_77_float; // 0x3b1 Mov
	
Label_932:
	var_393_int = 1; // 0x3a4 PushI
	var_2_bool = var_2_bool + var_393_int; // 0x3a5 Add2
	goto Label_923; // 0x3a6 Jump
	
Label_919:
	var_394_int = 1; // 0x397 PushI
	var_1_bool = var_1_bool + var_394_int; // 0x398 Add2
	goto Label_909; // 0x399 Jump
}


func_398(var_0_bool, var_1_bool)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_bool = 0; var_68_object = Obj(); var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_bool = 0; var_75_object = Obj(); var_76_bool = 0; // 0x18e PushV
	var_0_bool = 0; // 0x18f TMovB
	var_1_bool = 0; // 0x190 TMovB
	var_77_float = 0.5; // 0x191 PushF
	rand(var_70_float, var_77_float); // 0x192 Func
	Sleep(var_70_float); // 0x194 Func
	
Label_406:
	var_78_bool = var_0_bool == 0; // 0x196 Not
	if(var_78_bool == 0) goto Label_454; // 0x197 JumpB
	var_79_bool = var_1_bool == 0; // 0x198 Not
	if(var_79_bool == 0) goto Label_426; // 0x199 JumpB
	
Label_410:
	GetPosition(var_72_cvector); // 0x19a Func
	GetCameraFarDistance(var_73_float); // 0x19c Func
	var_80_float = 2.5; // 0x19e PushF
	var_73_float = var_73_float * var_80_float; // 0x19f Mult2
	GetRandomPFPointInCircle(var_71_cvector, var_72_cvector, var_73_float, var_74_bool); // 0x1a0 Func
	var_81_bool = var_74_bool; // 0x1a2 Push
	if(var_81_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_425; // 0x1a4 Jump
	
Label_425:
	goto Label_427; // 0x1a9 Jump
	
Label_427:
	FindShiftedPathTo(var_75_object, var_71_cvector); // 0x1ab Func
	var_82_bool = var_75_object != 0; // 0x1ad NullNeq
	if(var_82_bool == 0) goto Label_449; // 0x1ae JumpB
	RotatePath(var_75_object, var_76_bool); // 0x1af Func
	var_83_bool = var_76_bool; // 0x1b1 Push
	if(var_83_bool == 0) goto Label_448; // 0x1b2 JumpB
	var_84_bool = 0; // 0x1b3 PushV
	func_476(var_84_bool); // 0x1b4 Call
	FollowPath(var_75_object, var_84_bool, var_76_bool); // 0x1b6 Func
	var_75_object = 0; // 0x1b8 SetNull
	var_85_bool = var_76_bool; // 0x1b9 Push
	if(var_85_bool == 0) goto Label_448; // 0x1ba JumpB
	TaskCall(3); // 0x1bc TaskCall
	func_593(); // 0x1bd Call
	TaskReturn(); // 0x1be TaskReturn
	
Label_448:
	goto Label_452; // 0x1c0 Jump
	
Label_452:
	var_75_object = 0; // 0x1c4 SetNull
	goto Label_406; // 0x1c5 Jump
	
Label_449:
	var_135_int = 1; // 0x1c1 PushI
	Sleep(var_135_int); // 0x1c2 Func
	
Label_421:
	var_136_int = 1; // 0x1a5 PushI
	Sleep(var_136_int); // 0x1a6 Func
	goto Label_410; // 0x1a8 Jump
	
Label_426:
	var_1_bool = 0; // 0x1aa TMovB
	
Label_454:
	return 14; // 0x1c6 Return
}


func_2456(var_83_int)
{
	var_84_float = 0; var_85_float = 0; // 0x998 PushV
	GetGameTime(var_85_float); // 0x999 Func
	var_86_int = 1; // 0x99b PushI
	var_87_int = 0; // 0x99c PushV
	var_88_int = 24; // 0x99d PushI
	var_87_int = var_85_float / var_85_float; // 0x99e Div2
	var_83_int = var_86_int + var_87_int; // 0x99f Add2
	return 2; // 0x9a0 Return
}


func_2465(var_18_object)
{
	var_19_object = Obj(); // 0x9a2 PushV
	var_19_object = var_18_object; // 0x9a3 Mov
	TaskCall(1); // 0x9a4 TaskCall
	func_22(var_19_object); // 0x9a5 Call
	TaskReturn(); // 0x9a6 TaskReturn
	return 0; // 0x9a8 Return
}


func_2500(var_108_string, var_109_int)
{
	var_110_string = ""; var_111_string = ""; // 0x9c4 PushV
	var_111_string = "idle"; // 0x9c5 MovS
	var_112_int = var_109_int; // 0x9c6 Push
	if(var_112_int == 0) goto Label_2505; // 0x9c7 JumpB
	var_111_string = var_111_string + var_109_int; // 0x9c8 Add2
	
Label_2505:
	var_108_string = var_111_string; // 0x9c9 Mov
	return 2; // 0x9ca Return
}


func_2507(var_102_int)
{
	var_103_int = 0; var_104_bool = 0; var_105_int = 0; var_106_bool = 0; // 0x9cb PushV
	var_105_int = 0; // 0x9cc MovI
	
Label_2509:
	var_107_string = "all"; // 0x9cd PushS
	var_108_string = ""; var_109_int = 0; // 0x9ce PushV
	var_109_int = var_105_int; // 0x9cf Mov
	func_2500(var_108_string, var_109_int); // 0x9d0 Call
	HasAnimation(var_106_bool, var_107_string, var_108_string); // 0x9d2 Func
	var_113_bool = var_106_bool == 0; // 0x9d4 Not
	if(var_113_bool == 0) goto Label_2519; // 0x9d5 JumpB
	goto Label_2522; // 0x9d6 Jump
	
Label_2522:
	var_102_int = var_105_int; // 0x9da Mov
	return 4; // 0x9db Return
	
Label_2519:
	var_114_int = 1; // 0x9d7 PushI
	var_105_int = var_105_int + var_114_int; // 0x9d8 Add2
	goto Label_2509; // 0x9d9 Jump
}


func_1997(var_324_string, var_325_int)
{
	var_326_int = 1; // 0x7ce PushI
	var_327_bool = var_325_int == var_326_int; // 0x7cf Eq
	if(var_327_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_324_string = "fire"; // 0x7d1 MovS
	return 0; // 0x7d2 Return
	
Label_2003:
	var_324_string = "phys"; // 0x7d3 MovS
	return 0; // 0x7d4 Return
}


func_462(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1ce TMovB
	var_1_bool = 0; // 0x1cf TMovB
	Stop(); // 0x1d0 Func
	StopGroup0(); // 0x1d2 Func
	return 0; // 0x1d4 Return
}


func_469(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1d5 TMovB
	var_1_bool = 1; // 0x1d6 TMovB
	Stop(); // 0x1d7 Func
	StopGroup0(); // 0x1d9 Func
	return 0; // 0x1db Return
}


func_2005(var_61_cvector)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x7d5 PushV
	GetPosition(var_65_cvector); // 0x7d6 Func
	GetPosition(var_66_cvector); // 0x7d8 ObjFunc
	var_61_cvector = var_66_cvector - var_65_cvector; // 0x7da Sub2
	return 4; // 0x7db Return
}


func_2524(var_60_int)
{
	var_62_bool = 0; // 0x9dd PushV
	func_2833(var_62_bool); // 0x9de Call
	if(var_62_bool == 0) goto Label_2531; // 0x9e0 JumpB
	var_60_int = 2; // 0x9e1 MovI
	goto Label_2532; // 0x9e2 Jump
	
Label_2532:
	return 0; // 0x9e4 Return
	
Label_2531:
	var_60_int = 0; // 0x9e3 MovI
}


func_476(var_84_bool)
{
	var_84_bool = 0; // 0x1dc MovB
	return 0; // 0x1dd Return
}


func_2012(var_40_float)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x7dc PushV
	GetPosition(var_45_cvector); // 0x7dd Func
	GetPosition(var_46_cvector); // 0x7df ObjFunc
	var_47_cvector = var_46_cvector - var_45_cvector; // 0x7e1 Sub2
	var_40_float = var_47_cvector | var_47_cvector; // 0x7e2 Or2
	return 6; // 0x7e3 Return
}


func_2020(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0; // 0x7e4 PushV
	var_49_string = "HasProperty"; // 0x7e5 PushS
	var_50_int = 2; // 0x7e6 PushI
	var_51_bool = IsFuncExist(var_45_object, var_49_string, var_50_int); // 0x7e7 FuncExist
	var_52_bool = var_51_bool == 0; // 0x7e8 Not
	if(var_52_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_44_bool = 0; // 0x7ea MovB
	return 2; // 0x7eb Return
	
Label_2028:
	HasProperty(var_46_string, var_48_bool); // 0x7ec ObjFunc
	var_44_bool = var_48_bool; // 0x7ee Mov
	return 2; // 0x7ef Return
}


func_2533(var_68_object)
{
	var_69_object = Obj(); // 0x9e6 PushV
	var_69_object = var_68_object; // 0x9e7 Mov
	TaskCall(4); // 0x9e8 TaskCall
	func_667(var_70_object, var_69_object); // 0x9e9 Call
	TaskReturn(); // 0x9ea TaskReturn
	return 0; // 0x9ec Return
}


func_2541(var_25_int, var_26_object)
{
	var_27_bool = 0; var_28_object = Obj(); // 0x9ee PushV
	var_28_object = var_26_object; // 0x9ef Mov
	func_2137(var_27_bool, var_28_object); // 0x9f0 Call
	if(var_27_bool == 0) goto Label_2549; // 0x9f2 JumpB
	var_25_int = 2; // 0x9f3 MovI
	goto Label_2550; // 0x9f4 Jump
	
Label_2550:
	return 0; // 0x9f6 Return
	
Label_2549:
	var_25_int = 0; // 0x9f5 MovI
}


func_2032(var_296_float, var_297_object, var_298_float, var_299_int)
{
	var_303_int = 0; var_304_string = ""; var_305_int = 0; var_306_float = 0; var_307_float = 0; var_308_float = 0; var_309_int = 0; var_310_string = ""; var_311_int = 0; var_312_float = 0; var_313_float = 0; var_314_float = 0; // 0x7f0 PushV
	var_315_bool = 0; var_316_object = Obj(); var_317_string = ""; // 0x7f1 PushV
	var_316_object = var_297_object; // 0x7f2 Mov
	var_317_string = "health"; // 0x7f3 MovS
	func_2020(var_315_bool, var_316_object, var_317_string); // 0x7f4 Call
	var_318_bool = var_315_bool == 0; // 0x7f6 Not
	if(var_318_bool == 0) goto Label_2042; // 0x7f7 JumpB
	var_296_float = 0.0; // 0x7f8 MovF
	return 12; // 0x7f9 Return
	
Label_2042:
	var_319_bool = 0; var_320_object = Obj(); var_321_string = ""; // 0x7fa PushV
	var_320_object = var_297_object; // 0x7fb Mov
	var_321_string = "armor"; // 0x7fc MovS
	func_2020(var_319_bool, var_320_object, var_321_string); // 0x7fd Call
	var_322_bool = var_319_bool == 0; // 0x7ff Not
	if(var_322_bool == 0) goto Label_2051; // 0x800 JumpB
	var_309_int = 0; // 0x801 MovI
	goto Label_2054; // 0x802 Jump
	
Label_2054:
	var_323_string = "armor_"; // 0x806 PushS
	var_324_string = ""; var_325_int = 0; // 0x807 PushV
	var_325_int = var_299_int; // 0x808 Mov
	func_1997(var_324_string, var_325_int); // 0x809 Call
	var_310_string = var_323_string + var_324_string; // 0x80b Add2
	var_328_bool = 0; var_329_object = Obj(); var_330_string = ""; // 0x80c PushV
	var_329_object = var_297_object; // 0x80d Mov
	var_330_string = var_310_string; // 0x80e Mov
	func_2020(var_328_bool, var_329_object, var_330_string); // 0x80f Call
	var_331_bool = var_328_bool == 0; // 0x811 Not
	if(var_331_bool == 0) goto Label_2069; // 0x812 JumpB
	var_311_int = 0; // 0x813 MovI
	goto Label_2071; // 0x814 Jump
	
Label_2071:
	var_332_float = 0; var_333_float = 0; var_334_float = 0; // 0x817 PushV
	var_335_int = var_309_int + var_311_int; // 0x818 Add
	var_336_float = 100.0; // 0x819 PushF
	var_333_float = var_335_int / var_335_int; // 0x81a Div2
	var_334_float = 1; // 0x81b MovI
	func_2402(var_332_float, var_333_float, var_334_float); // 0x81c Call
	var_312_float = var_332_float; // 0x81d Mov
	var_338_string = "health"; // 0x81f PushS
	GetProperty(var_338_string, var_313_float); // 0x820 ObjFunc
	var_339_int = 1; // 0x822 PushI
	var_340_int = var_339_int - var_312_float; // 0x823 Sub
	var_314_float = var_298_float * var_340_int; // 0x824 Mult2
	var_341_string = "health"; // 0x825 PushS
	var_342_float = 0; var_343_float = 0; var_344_float = 0; var_345_float = 0; // 0x826 PushV
	var_343_float = var_313_float - var_314_float; // 0x827 Sub2
	var_344_float = 0; // 0x828 MovI
	var_345_float = 1; // 0x829 MovI
	func_2409(var_342_float, var_343_float, var_344_float, var_345_float); // 0x82a Call
	SetProperty(var_341_string, var_342_float); // 0x82c ObjFunc
	var_296_float = var_314_float; // 0x82e Mov
	return 12; // 0x82f Return
	
Label_2069:
	GetProperty(var_310_string, var_311_int); // 0x815 ObjFunc
	
Label_2051:
	var_348_string = "armor"; // 0x803 PushS
	GetProperty(var_348_string, var_309_int); // 0x804 ObjFunc
}


func_2551(var_68_object)
{
	var_69_object = Obj(); // 0x9f8 PushV
	var_69_object = var_68_object; // 0x9f9 Mov
	TaskCall(5); // 0x9fa TaskCall
	func_893(var_69_object); // 0x9fb Call
	TaskReturn(); // 0x9fc TaskReturn
	return 0; // 0x9fe Return
}


func_1529(var_0_bool)
{
	var_0_bool = 1; // 0x5f9 TMovB
	var_18_int = 0; // 0x5fa PushI
	KillTimer(var_18_int); // 0x5fb Func
	Stop(); // 0x5fd Func
	return 0; // 0x5ff Return
}


func_2559(var_57_int, var_58_object)
{
	var_59_int = 0; var_60_object = Obj(); // 0xa00 PushV
	var_60_object = var_58_object; // 0xa01 Mov
	func_2541(var_59_int, var_60_object); // 0xa02 Call
	var_57_int = var_59_int; // 0xa03 Mov
	return 0; // 0xa05 Return
}


