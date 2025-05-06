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
	func_2293(var_21_object); // 0x28 Call
	var_19_int = var_20_int; // 0x29 Mov
	var_22_int = 0; // 0x2b PushI
	var_23_bool = var_19_int > var_22_int; // 0x2c GT
	if(var_23_bool == 0) goto Label_50; // 0x2d JumpB
	var_24_object = Obj(); // 0x2e PushV
	var_24_object = var_17_bool; // 0x2f Mov
	func_2296(var_24_object); // 0x30 Call
	
Label_50:
	return 2; // 0x32 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_2302(); // 0x34 Call
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
	func_2293(var_21_object); // 0xc5 Call
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
	func_2296(var_27_object); // 0xd3 Call
	
Label_213:
	return 2; // 0xd5 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xd6 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xd7 PushV
	var_21_object = var_17_bool; // 0xd8 Mov
	func_2252(var_20_int, var_21_object); // 0xd9 Call
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
	func_2262(var_61_object); // 0xe7 Call
	
Label_233:
	return 2; // 0xe9 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xea PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0xeb PushV
	var_22_object = var_17_string; // 0xec Mov
	var_23_object = var_18_bool; // 0xed Mov
	func_2370(var_23_object); // 0xee Call
	if(var_21_bool == 0) goto Label_259; // 0xf0 JumpB
	var_24_int = 0; var_25_object = Obj(); // 0xf1 PushV
	var_25_object = var_17_string; // 0xf2 Mov
	func_2270(var_24_int, var_25_object); // 0xf3 Call
	var_20_int = var_24_int; // 0xf4 Mov
	var_62_int = 0; // 0xf6 PushI
	var_63_bool = var_20_int > var_62_int; // 0xf7 GT
	if(var_63_bool == 0) goto Label_259; // 0xf8 JumpB
	var_64_int = 1; // 0xf9 PushI
	var_65_bool = var_20_int > var_64_int; // 0xfa GT
	if(var_65_bool == 0) goto Label_255; // 0xfb JumpB
	func_333(var_20_int); // 0xfd Call
	
Label_255:
	var_67_object = Obj(); // 0xff PushV
	var_67_object = var_17_string; // 0x100 Mov
	func_2277(var_67_object); // 0x101 Call
	
Label_259:
	return 2; // 0x103 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x104 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x105 PushV
	var_21_object = var_17_bool; // 0x106 Mov
	func_2283(var_21_object); // 0x107 Call
	var_19_int = var_20_int; // 0x108 Mov
	var_22_int = 0; // 0x10a PushI
	var_23_bool = var_19_int > var_22_int; // 0x10b GT
	if(var_23_bool == 0) goto Label_279; // 0x10c JumpB
	var_24_int = 1; // 0x10d PushI
	var_25_bool = var_19_int > var_24_int; // 0x10e GT
	if(var_25_bool == 0) goto Label_275; // 0x10f JumpB
	func_333(var_19_int); // 0x111 Call
	
Label_275:
	var_27_object = Obj(); // 0x113 PushV
	var_27_object = var_17_bool; // 0x114 Mov
	func_2286(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x118 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x119 PushV
	var_22_string = var_18_bool; // 0x11a Mov
	var_23_object = var_17_string; // 0x11b Mov
	func_2288(var_23_object); // 0x11c Call
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
	func_2291(); // 0x12b Call
	
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
	func_2302(); // 0x14a Call
	return 0; // 0x14c Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_333(var_17_bool); // 0x15f Call
	var_19_object = Obj(); // 0x161 PushV
	var_19_object = var_17_bool; // 0x162 Mov
	func_2197(); // 0x163 Call
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
	func_2293(var_21_object); // 0x1e1 Call
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
	func_2296(var_26_object); // 0x1ef Call
	
Label_497:
	return 2; // 0x1f1 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x1f2 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x1f3 PushV
	var_21_object = var_17_bool; // 0x1f4 Mov
	func_2252(var_20_int, var_21_object); // 0x1f5 Call
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
	func_2262(var_60_object); // 0x203 Call
	
Label_517:
	return 2; // 0x205 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x206 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x207 PushV
	var_22_object = var_17_string; // 0x208 Mov
	var_23_object = var_18_bool; // 0x209 Mov
	func_2370(var_23_object); // 0x20a Call
	if(var_21_bool == 0) goto Label_543; // 0x20c JumpB
	var_24_int = 0; var_25_object = Obj(); // 0x20d PushV
	var_25_object = var_17_string; // 0x20e Mov
	func_2270(var_24_int, var_25_object); // 0x20f Call
	var_20_int = var_24_int; // 0x210 Mov
	var_62_int = 0; // 0x212 PushI
	var_63_bool = var_20_int > var_62_int; // 0x213 GT
	if(var_63_bool == 0) goto Label_543; // 0x214 JumpB
	var_64_int = 1; // 0x215 PushI
	var_65_bool = var_20_int > var_64_int; // 0x216 GT
	if(var_65_bool == 0) goto Label_539; // 0x217 JumpB
	func_662(); // 0x219 Call
	
Label_539:
	var_66_object = Obj(); // 0x21b PushV
	var_66_object = var_17_string; // 0x21c Mov
	func_2277(var_66_object); // 0x21d Call
	
Label_543:
	return 2; // 0x21f Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x220 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x221 PushV
	var_21_object = var_17_bool; // 0x222 Mov
	func_2283(var_21_object); // 0x223 Call
	var_19_int = var_20_int; // 0x224 Mov
	var_22_int = 0; // 0x226 PushI
	var_23_bool = var_19_int > var_22_int; // 0x227 GT
	if(var_23_bool == 0) goto Label_563; // 0x228 JumpB
	var_24_int = 1; // 0x229 PushI
	var_25_bool = var_19_int > var_24_int; // 0x22a GT
	if(var_25_bool == 0) goto Label_559; // 0x22b JumpB
	func_662(); // 0x22d Call
	
Label_559:
	var_26_object = Obj(); // 0x22f PushV
	var_26_object = var_17_bool; // 0x230 Mov
	func_2286(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x234 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x235 PushV
	var_22_string = var_18_bool; // 0x236 Mov
	var_23_object = var_17_string; // 0x237 Mov
	func_2288(var_23_object); // 0x238 Call
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
	func_2291(); // 0x247 Call
	
Label_585:
	return 2; // 0x249 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_662(); // 0x24b Call
	func_2302(); // 0x24e Call
	return 0; // 0x250 Return
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2d3 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x2d4 PushV
	var_21_object = var_17_bool; // 0x2d5 Mov
	func_2293(var_21_object); // 0x2d6 Call
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
	func_2296(var_28_object); // 0x2e4 Call
	
Label_742:
	return 2; // 0x2e6 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2e7 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x2e8 PushV
	var_21_object = var_17_bool; // 0x2e9 Mov
	func_2252(var_20_int, var_21_object); // 0x2ea Call
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
	func_2262(var_62_object); // 0x2f8 Call
	
Label_762:
	return 2; // 0x2fa Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2fb PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x2fc PushV
	var_22_object = var_17_string; // 0x2fd Mov
	var_23_object = var_18_bool; // 0x2fe Mov
	func_2370(var_23_object); // 0x2ff Call
	if(var_21_bool == 0) goto Label_788; // 0x301 JumpB
	var_24_int = 0; var_25_object = Obj(); // 0x302 PushV
	var_25_object = var_17_string; // 0x303 Mov
	func_2270(var_24_int, var_25_object); // 0x304 Call
	var_20_int = var_24_int; // 0x305 Mov
	var_62_int = 0; // 0x307 PushI
	var_63_bool = var_20_int > var_62_int; // 0x308 GT
	if(var_63_bool == 0) goto Label_788; // 0x309 JumpB
	var_64_int = 1; // 0x30a PushI
	var_65_bool = var_20_int > var_64_int; // 0x30b GT
	if(var_65_bool == 0) goto Label_784; // 0x30c JumpB
	func_831(); // 0x30e Call
	
Label_784:
	var_68_object = Obj(); // 0x310 PushV
	var_68_object = var_17_string; // 0x311 Mov
	func_2277(var_68_object); // 0x312 Call
	
Label_788:
	return 2; // 0x314 Return
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x315 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x316 PushV
	var_21_object = var_17_bool; // 0x317 Mov
	func_2283(var_21_object); // 0x318 Call
	var_19_int = var_20_int; // 0x319 Mov
	var_22_int = 0; // 0x31b PushI
	var_23_bool = var_19_int > var_22_int; // 0x31c GT
	if(var_23_bool == 0) goto Label_808; // 0x31d JumpB
	var_24_int = 1; // 0x31e PushI
	var_25_bool = var_19_int > var_24_int; // 0x31f GT
	if(var_25_bool == 0) goto Label_804; // 0x320 JumpB
	func_831(); // 0x322 Call
	
Label_804:
	var_28_object = Obj(); // 0x324 PushV
	var_28_object = var_17_bool; // 0x325 Mov
	func_2286(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x329 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x32a PushV
	var_22_string = var_18_bool; // 0x32b Mov
	var_23_object = var_17_string; // 0x32c Mov
	func_2288(var_23_object); // 0x32d Call
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
	func_2291(); // 0x33c Call
	
Label_830:
	return 2; // 0x33e Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_831(); // 0x34c Call
	var_20_object = Obj(); // 0x34e PushV
	var_20_object = var_17_bool; // 0x34f Mov
	func_2197(); // 0x350 Call
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
	func_1857(var_24_bool, var_25_object); // 0x35a Call
	var_58_bool = var_24_bool == 0; // 0x35c Not
	if(var_58_bool == 0) goto Label_866; // 0x35d JumpB
	func_831(); // 0x35f Call
	return 4; // 0x361 Return
	
Label_866:
	GetDirection(var_20_cvector); // 0x362 Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x364 PushV
	var_62_object = var_0_bool; // 0x365 MovT
	func_1733(var_62_object); // 0x366 Call
	var_21_cvector = var_61_cvector; // 0x367 Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x369 PushV
	var_68_cvector = var_20_cvector; // 0x36a Mov
	var_69_cvector = var_21_cvector; // 0x36b Mov
	func_2159(var_67_float, var_68_cvector, var_69_cvector); // 0x36c Call
	var_91_float = 0.5; // 0x36e PushF
	var_92_bool = var_67_float < var_91_float; // 0x36f LT
	if(var_92_bool == 0) goto Label_885; // 0x370 JumpB
	var_93_object = Obj(); // 0x371 PushV
	var_93_object = var_0_bool; // 0x372 MovT
	func_1948(); // 0x373 Call
	
Label_885:
	return 4; // 0x375 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831(); // 0x377 Call
	func_2302(); // 0x37a Call
	return 0; // 0x37c Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1529(var_16_bool); // 0x577 Call
	func_2302(); // 0x57a Call
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
	func_2197(); // 0x606 Call
	return 0; // 0x608 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 1; // 0x699 PushI
	if(var_19_int == 0) goto Label_1724; // 0x69a JumpB
	func_2105(); // 0x69c Call
	var_21_int = 15766; // 0x69e PushI
	var_22_bool = var_17_int == var_21_int; // 0x69f Eq
	if(var_22_bool == 0) goto Label_1712; // 0x6a0 JumpB
	var_23_string = ""; // 0x6a1 PushV
	var_23_string = "Neutral"; // 0x6a2 MovS
	func_1672(var_18_int, var_23_string); // 0x6a3 Call
	var_38_int = 14535; // 0x6a5 PushI
	SetMessage(var_38_int); // 0x6a6 TObjFunc
	ClearReplies(); // 0x6a8 TObjFunc
	var_39_int = 15227; // 0x6aa PushI
	var_40_int = -1; // 0x6ab PushI
	var_41_int = 16504; // 0x6ac PushI
	AddReply(var_39_int, var_40_int, var_41_int); // 0x6ad TObjFunc
	return 0; // 0x6af Return
	
Label_1712:
	var_3_bool = 1; // 0x6b0 TMovB
	var_42_bool = 0; // 0x6b1 PushV
	func_2324(var_42_bool); // 0x6b2 Call
	if(var_42_bool == 0) goto Label_1720; // 0x6b4 JumpB
	lshStopAnimation(); // 0x6b5 Func
	goto Label_1722; // 0x6b7 Jump
	
Label_1722:
	return 0; // 0x6ba Return
	
Label_1720:
	StopAnimation(); // 0x6b8 Func
	
Label_1724:
	return 0; // 0x6bc Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x888 PushV
	var_21_string = "health"; // 0x889 PushS
	var_22_bool = var_18_string == var_21_string; // 0x88a Eq
	if(var_22_bool == 0) goto Label_2196; // 0x88b JumpB
	var_23_string = "health"; // 0x88c PushS
	GetProperty(var_23_string, var_20_float); // 0x88d Func
	var_24_int = 0; // 0x88f PushI
	var_25_bool = var_20_float <= var_24_int; // 0x890 LE
	if(var_25_bool == 0) goto Label_2196; // 0x891 JumpB
	SignalDeath(var_17_object); // 0x892 Func
	
Label_2196:
	return 2; // 0x894 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x896 PushV
	var_18_object = var_17_object; // 0x897 Mov
	func_2176(var_18_object); // 0x898 Call
	return 0; // 0x89a Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x89c PushV
	var_21_object = var_17_object; // 0x89d Mov
	var_22_int = var_18_int; // 0x89e Mov
	var_23_float = var_19_float; // 0x89f Mov
	func_1881(var_22_int, var_23_float); // 0x8a0 Call
	return 0; // 0x8a2 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_bool = 1; // 0xaa PushB
	SensePlayerOnly(var_17_bool); // 0xab Func
	func_2326(); // 0xae Call
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
	var_167_string = "all"; // 0x6 PushS
	var_168_string = "idle"; // 0x7 PushS
	PlayAnimation(var_167_string, var_168_string); // 0x8 Func
	var_169_bool = var_0_bool; // 0xa PushT
	if(var_169_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_1545(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x60a PushV
	var_23_object = var_21_object; // 0x60b Mov
	func_1857(var_22_bool, var_23_object); // 0x60c Call
	var_20_bool = var_22_bool; // 0x60d Mov
	return 0; // 0x60f Return
}


func_1552(var_169_string)
{
	var_169_string = "walk"; // 0x610 MovS
	return 0; // 0x611 Return
}


func_1554(var_170_string)
{
	var_170_string = "run"; // 0x612 MovS
	return 0; // 0x613 Return
}


func_1556(var_0_bool, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x614 PushV
	var_0_bool = var_36_object; // 0x615 TMov
	var_46_bool = 0; var_47_object = Obj(); // 0x616 PushV
	var_47_object = var_36_object; // 0x617 Mov
	func_1964(var_47_object); // 0x618 Call
	var_86_bool = var_46_bool == 0; // 0x61a Not
	if(var_86_bool == 0) goto Label_1566; // 0x61b JumpB
	var_35_int = -2; // 0x61c MovI
	return 8; // 0x61d Return
	
Label_1566:
	CreateDialog(var_42_object); // 0x61e Func
	var_87_int = 0; // 0x620 PushV
	func_2320(var_87_int); // 0x621 Call
	SetNPCName(var_87_int); // 0x623 ObjFunc
	var_88_string = ""; // 0x625 PushV
	func_2322(var_88_string); // 0x626 Call
	SetPhoto(var_88_string); // 0x628 ObjFunc
	var_89_int = 0; // 0x62a PushV
	func_2303(var_89_int); // 0x62b Call
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
	var_132_bool = var_45_bool == 0; // 0x641 Not
	if(var_132_bool == 0) goto Label_1608; // 0x642 JumpB
	sync(); // 0x643 Func
	IsDialogEnd(var_45_bool); // 0x645 ObjFunc
	goto Label_1601; // 0x647 Jump
	
Label_1608:
	var_133_object = Obj(); // 0x648 PushV
	var_133_object = var_36_object; // 0x649 Mov
	func_2020(); // 0x64a Call
	StopDialog(var_42_object); // 0x64c Func
	GetReturnValue(var_44_int); // 0x64e ObjFunc
	var_35_int = var_44_int; // 0x650 Mov
	return 8; // 0x651 Return
}


func_22(var_19_object)
{
	EventDisable(0); // 0x17 EventDisable
	var_20_object = Obj(); // 0x18 PushV
	var_20_object = var_19_object; // 0x19 Mov
	func_55(var_20_object); // 0x1a Call
	var_70_object = Obj(); // 0x1c PushV
	var_70_object = var_19_object; // 0x1d Mov
	func_2373(); // 0x1e Call
	EventEnable(0); // 0x20 EventEnable
	
Label_33:
	Hold(); // 0x21 Func
	goto Label_33; // 0x23 Jump
}


func_2072()
{
	CameraSwitchToNormal(); // 0x819 Func
	return 0; // 0x81b Return
}


func_2076(var_27_string)
{
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x81c PushV
	var_32_string = "playing "; // 0x81d PushS
	var_33_int = var_32_string + var_27_string; // 0x81e Add
	Trace(var_33_int); // 0x81f Func
	lshGetAnimTimes(var_27_string, var_30_float, var_31_float); // 0x821 Func
	lshPlayAnimation(var_30_float, var_31_float); // 0x823 Func
	var_34_string = "start: "; // 0x825 PushS
	var_35_int = var_34_string + var_30_float; // 0x826 Add
	Trace(var_35_int); // 0x827 Func
	var_36_string = "end: "; // 0x829 PushS
	var_37_int = var_36_string + var_31_float; // 0x82a Add
	Trace(var_37_int); // 0x82b Func
	return 4; // 0x82d Return
}


func_2094(var_77_object)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x82e PushV
	GetEyesHeight(var_80_float); // 0x82f ObjFunc
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x831 MovV
	var_82_float = GetByIndex(var_81_cvector, 1); // 0x832 PushE
	var_82_float = var_80_float; // 0x833 Mov
	SetByIndex(var_81_cvector, 1) = var_82_float; // 0x834 PopE
	var_83_string = "head"; // 0x835 PushS
	LookAsync(var_77_object, var_83_string, var_81_cvector); // 0x836 Func
	return 4; // 0x838 Return
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


func_2105()
{
	var_20_bool = 0; // 0x839 PushV
	func_2324(var_20_bool); // 0x83a Call
	if(var_20_bool == 0) goto Label_2111; // 0x83c JumpB
	lshStopSpeech(); // 0x83d Func
	
Label_2111:
	return 0; // 0x83f Return
}


func_2112(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0; // 0x840 PushV
	var_76_int = var_72_cvector | var_72_cvector; // 0x841 Or
	var_75_float = sqrt(var_76_int); // 0x842 Sqrt2
	var_77_float = 0.0; // 0x843 PushF
	var_78_bool = var_75_float < var_77_float; // 0x844 LT
	if(var_78_bool == 0) goto Label_2120; // 0x845 JumpB
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x846 MovV
	return 2; // 0x847 Return
	
Label_2120:
	var_71_cvector = var_72_cvector / var_72_cvector; // 0x848 Div2
	return 2; // 0x849 Return
}


func_2122(var_333_float, var_334_float, var_335_float)
{
	var_338_bool = var_334_float < var_335_float; // 0x84b LT
	if(var_338_bool == 0) goto Label_2127; // 0x84c JumpB
	var_333_float = var_334_float; // 0x84d Mov
	goto Label_2128; // 0x84e Jump
	
Label_2128:
	return 0; // 0x850 Return
	
Label_2127:
	var_333_float = var_335_float; // 0x84f Mov
}


func_593()
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_bool = 0; // 0x251 PushV
	WaitForAnimEnd(); // 0x252 Func
	var_60_bool = 0; // 0x254 PushV
	func_1959(var_60_bool); // 0x255 Call
	var_61_bool = var_60_bool == 0; // 0x257 Not
	if(var_61_bool == 0) goto Label_602; // 0x258 JumpB
	return 14; // 0x259 Return
	
Label_602:
	var_62_int = 0; // 0x25a PushV
	func_2218(var_62_int); // 0x25b Call
	var_53_int = var_62_int; // 0x25c Mov
	var_54_int = 0; // 0x25e MovI
	
Label_607:
	var_75_bool = 0; // 0x25f PushV
	var_75_bool = 0; // 0x260 MovB
	var_76_int = 5; // 0x261 PushI
	var_77_bool = var_54_int < var_76_int; // 0x262 LT
	if(var_77_bool == 0) goto Label_617; // 0x263 JumpB
	var_78_bool = 0; // 0x264 PushV
	func_1959(var_78_bool); // 0x265 Call
	if(var_78_bool == 0) goto Label_617; // 0x267 JumpB
	var_75_bool = 1; // 0x268 MovB
	
Label_617:
	if(var_75_bool == 0) goto Label_661; // 0x269 JumpB
	var_79_int = 3; // 0x26a PushI
	irand(var_55_int, var_79_int); // 0x26b Func
	var_80_int = 0; // 0x26d PushI
	var_81_bool = var_55_int == var_80_int; // 0x26e Eq
	if(var_81_bool == 0) goto Label_641; // 0x26f JumpB
	var_82_int = var_53_int; // 0x270 Push
	if(var_82_int == 0) goto Label_640; // 0x271 JumpB
	irand(var_56_int, var_53_int); // 0x272 Func
	var_83_string = "all"; // 0x274 PushS
	var_84_string = ""; var_85_int = 0; // 0x275 PushV
	var_85_int = var_56_int; // 0x276 Mov
	func_2211(var_84_string, var_85_int); // 0x277 Call
	PlayAnimation(var_83_string, var_84_string); // 0x279 Func
	WaitForAnimEnd(var_57_bool); // 0x27b Func
	var_86_bool = var_57_bool == 0; // 0x27d Not
	if(var_86_bool == 0) goto Label_640; // 0x27e JumpB
	goto Label_661; // 0x27f Jump
	
Label_661:
	return 14; // 0x295 Return
	
Label_640:
	goto Label_658; // 0x280 Jump
	
Label_658:
	var_87_int = 1; // 0x292 PushI
	var_54_int = var_54_int + var_87_int; // 0x293 Add2
	goto Label_607; // 0x294 Jump
	
Label_641:
	var_88_int = 1; // 0x281 PushI
	var_89_bool = var_55_int == var_88_int; // 0x282 Eq
	if(var_89_bool == 0) goto Label_655; // 0x283 JumpB
	var_90_int = 4; // 0x284 PushI
	rand(var_58_float, var_90_int); // 0x285 Func
	var_91_int = 1; // 0x287 PushI
	var_92_int = var_58_float + var_91_int; // 0x288 Add
	Sleep(var_92_int, var_59_bool); // 0x289 Func
	var_93_bool = var_59_bool == 0; // 0x28b Not
	if(var_93_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_661; // 0x28d Jump
	
Label_654:
	goto Label_658; // 0x28e Jump
	
Label_655:
	var_94_int = var_54_int; // 0x28f Push
	if(var_94_int == 0) goto Label_658; // 0x290 JumpB
	goto Label_661; // 0x291 Jump
}


func_2129(var_343_float, var_344_float, var_345_float, var_346_float)
{
	var_347_bool = var_344_float < var_345_float; // 0x852 LT
	if(var_347_bool == 0) goto Label_2134; // 0x853 JumpB
	var_343_float = var_345_float; // 0x854 Mov
	return 0; // 0x855 Return
	
Label_2134:
	var_348_bool = var_344_float > var_346_float; // 0x856 GT
	if(var_348_bool == 0) goto Label_2138; // 0x857 JumpB
	var_343_float = var_346_float; // 0x858 Mov
	return 0; // 0x859 Return
	
Label_2138:
	var_343_float = var_344_float; // 0x85a Mov
	return 0; // 0x85b Return
}


func_1619(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_98_object, var_99_object)
{
	var_0_bool = var_99_object; // 0x654 TMov
	var_1_bool = var_98_object; // 0x655 TMov
	var_3_bool = 0; // 0x656 TMovB
	var_104_int = 1; // 0x657 PushI
	if(var_104_int == 0) goto Label_1642; // 0x658 JumpB
	var_105_string = ""; // 0x659 PushV
	var_105_string = "Neutral"; // 0x65a MovS
	func_1672(var_99_object, var_105_string); // 0x65b Call
	var_120_int = 14535; // 0x65d PushI
	SetMessage(var_120_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_121_int = 15227; // 0x662 PushI
	var_122_int = -1; // 0x663 PushI
	var_123_int = 16504; // 0x664 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x665 TObjFunc
	goto Label_1642; // 0x667 Jump
	
Label_1642:
	var_124_bool = 0; // 0x66a PushV
	func_2324(var_124_bool); // 0x66b Call
	if(var_124_bool == 0) goto Label_1657; // 0x66d JumpB
	
Label_1646:
	lshWaitForAnimEnd(); // 0x66e Func
	var_125_bool = var_3_bool; // 0x670 PushT
	if(var_125_bool == 0) goto Label_1651; // 0x671 JumpB
	goto Label_1656; // 0x672 Jump
	
Label_1656:
	goto Label_1671; // 0x678 Jump
	
Label_1671:
	return 0; // 0x687 Return
	
Label_1651:
	var_126_string = ""; // 0x673 PushV
	var_126_string = var_2_bool; // 0x674 MovT
	func_2076(var_126_string); // 0x675 Call
	goto Label_1646; // 0x677 Jump
	
Label_1657:
	var_127_string = "all"; // 0x679 PushS
	var_128_string = "idle"; // 0x67a PushS
	PlayAnimation(var_127_string, var_128_string); // 0x67b Func
	
Label_1661:
	WaitForAnimEnd(); // 0x67d Func
	var_129_bool = var_3_bool; // 0x67f PushT
	if(var_129_bool == 0) goto Label_1666; // 0x680 JumpB
	goto Label_1671; // 0x681 Jump
	
Label_1666:
	var_130_string = "all"; // 0x682 PushS
	var_131_string = "idle"; // 0x683 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x684 Func
	goto Label_1661; // 0x686 Jump
}


func_1112(var_0_bool, var_283_float, var_284_int)
{
	var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_object = Obj(); var_289_float = 0; var_290_float = 0; // 0x458 PushV
	var_291_float = 0.9; // 0x459 PushF
	var_292_float = var_283_float * var_291_float; // 0x45a Mult
	GetVictim(var_292_float, var_288_object); // 0x45b Func
	ReportAttack(var_0_bool); // 0x45d Func
	var_293_bool = var_288_object == var_0_bool; // 0x45f Eq
	if(var_293_bool == 0) goto Label_1149; // 0x460 JumpB
	var_294_float = 0; var_295_object = Obj(); var_296_int = 0; // 0x461 PushV
	var_295_object = var_288_object; // 0x462 Mov
	var_296_int = var_284_int; // 0x463 Mov
	func_901(var_296_int); // 0x464 Call
	var_289_float = var_294_float; // 0x465 Mov
	var_297_float = 0; var_298_object = Obj(); var_299_float = 0; var_300_int = 0; // 0x467 PushV
	var_298_object = var_288_object; // 0x468 Mov
	var_299_float = var_289_float; // 0x469 Mov
	var_301_int = 0; var_302_object = Obj(); var_303_int = 0; // 0x46a PushV
	var_302_object = var_288_object; // 0x46b Mov
	var_303_int = var_284_int; // 0x46c Mov
	func_904(var_303_int); // 0x46d Call
	var_300_int = var_301_int; // 0x46e Mov
	func_1752(var_297_float, var_298_object, var_299_float, var_300_int); // 0x470 Call
	var_290_float = var_297_float; // 0x471 Mov
	var_350_int = 0; // 0x473 PushV
	func_1390(var_350_int); // 0x474 Call
	ReportHit(var_0_bool, var_350_int, var_290_float, var_289_float); // 0x476 Func
	var_351_object = Obj(); var_352_float = 0; // 0x478 PushV
	var_351_object = var_288_object; // 0x479 Mov
	var_352_float = var_290_float; // 0x47a Mov
	func_1392(); // 0x47b Call
	
Label_1149:
	return 6; // 0x47d Return
}


func_2140(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x85d PushE
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x85e PushE
	var_75_float = var_73_float * var_74_float; // 0x85f Mult
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x860 PushE
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x861 PushE
	var_78_float = var_76_float * var_77_float; // 0x862 Mult
	var_70_float = var_75_float + var_78_float; // 0x863 Add2
	return 0; // 0x864 Return
}


func_2149(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0); // 0x866 PushE
	var_82_float = GetByIndex(var_80_cvector, 0); // 0x867 PushE
	var_83_float = var_81_float * var_82_float; // 0x868 Mult
	var_84_float = GetByIndex(var_80_cvector, 2); // 0x869 PushE
	var_85_float = GetByIndex(var_80_cvector, 2); // 0x86a PushE
	var_86_float = var_84_float * var_85_float; // 0x86b Mult
	var_87_int = var_83_float + var_86_float; // 0x86c Add
	var_79_float = sqrt(var_87_int); // 0x86d Sqrt2
	return 0; // 0x86e Return
}


func_2159(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x870 PushV
	var_71_cvector = var_68_cvector; // 0x871 Mov
	var_72_cvector = var_69_cvector; // 0x872 Mov
	func_2140(var_70_float, var_71_cvector, var_72_cvector); // 0x873 Call
	var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x875 PushV
	var_80_cvector = var_68_cvector; // 0x876 Mov
	func_2149(var_79_float, var_80_cvector); // 0x877 Call
	var_88_float = 0; var_89_cvector = CVector(0,0,0); // 0x879 PushV
	var_89_cvector = var_69_cvector; // 0x87a Mov
	func_2149(var_88_float, var_89_cvector); // 0x87b Call
	var_90_float = var_79_float * var_88_float; // 0x87d Mult
	var_67_float = var_70_float / var_70_float; // 0x87e Div2
	return 0; // 0x87f Return
}


func_1151(var_0_bool, var_254_bool, var_255_float)
{
	var_256_int = 0; var_257_bool = 0; var_258_int = 0; var_259_bool = 0; // 0x47f PushV
	irand(var_258_int, var_259_bool); // 0x480 Func
	var_260_int = 1; // 0x482 PushI
	var_258_int = var_258_int + var_260_int; // 0x483 Add2
	Face(var_0_bool); // 0x484 Func
	var_261_bool = 1; // 0x486 PushB
	SetAttackState(var_261_bool); // 0x487 Func
	var_262_string = "all"; // 0x489 PushS
	var_263_string = "attack_begin"; // 0x48a PushS
	var_264_int = var_263_string + var_258_int; // 0x48b Add
	PlayAnimation(var_262_string, var_264_int); // 0x48c Func
	WaitForAnimEnd(); // 0x48e Func
	func_1358(var_258_int, var_259_bool); // 0x491 Call
	var_280_bool = 0; var_281_object = Obj(); // 0x493 PushV
	var_281_object = var_0_bool; // 0x494 MovT
	func_1857(var_280_bool, var_281_object); // 0x495 Call
	var_282_bool = var_280_bool == 0; // 0x497 Not
	if(var_282_bool == 0) goto Label_1181; // 0x498 JumpB
	StopAsync(); // 0x499 Func
	var_254_bool = 0; // 0x49b MovB
	return 4; // 0x49c Return
	
Label_1181:
	var_283_float = 0; var_284_int = 0; // 0x49d PushV
	var_283_float = var_255_float; // 0x49e Mov
	var_284_int = var_258_int; // 0x49f Mov
	func_1112(var_259_bool, var_283_float, var_284_int); // 0x4a0 Call
	var_353_string = "all"; // 0x4a2 PushS
	var_354_string = "attack_middle"; // 0x4a3 PushS
	var_355_int = var_354_string + var_258_int; // 0x4a4 Add
	HasAnimation(var_259_bool, var_353_string, var_355_int); // 0x4a5 Func
	var_356_bool = var_259_bool; // 0x4a7 Push
	if(var_356_bool == 0) goto Label_1215; // 0x4a8 JumpB
	var_357_string = "all"; // 0x4a9 PushS
	var_358_string = "attack_middle"; // 0x4aa PushS
	var_359_int = var_358_string + var_258_int; // 0x4ab Add
	PlayAnimation(var_357_string, var_359_int); // 0x4ac Func
	WaitForAnimEnd(); // 0x4ae Func
	var_360_bool = 0; var_361_object = Obj(); // 0x4b0 PushV
	var_361_object = var_0_bool; // 0x4b1 MovT
	func_1857(var_360_bool, var_361_object); // 0x4b2 Call
	var_362_bool = var_360_bool == 0; // 0x4b4 Not
	if(var_362_bool == 0) goto Label_1210; // 0x4b5 JumpB
	StopAsync(); // 0x4b6 Func
	var_254_bool = 0; // 0x4b8 MovB
	return 4; // 0x4b9 Return
	
Label_1210:
	var_363_float = 0; var_364_int = 0; // 0x4ba PushV
	var_363_float = var_255_float; // 0x4bb Mov
	var_364_int = var_258_int; // 0x4bc Mov
	func_1112(var_259_bool, var_363_float, var_364_int); // 0x4bd Call
	
Label_1215:
	var_365_bool = 0; // 0x4bf PushB
	SetAttackState(var_365_bool); // 0x4c0 Func
	var_366_string = "all"; // 0x4c2 PushS
	var_367_string = "attack_end"; // 0x4c3 PushS
	var_368_int = var_367_string + var_258_int; // 0x4c4 Add
	PlayAnimation(var_366_string, var_368_int); // 0x4c5 Func
	var_369_bool = 0; var_370_float = 0; // 0x4c7 PushV
	var_370_float = 0.75; // 0x4c8 MovF
	func_1231(var_369_bool, var_370_float); // 0x4c9 Call
	StopAsync(); // 0x4cb Func
	var_254_bool = 1; // 0x4cd MovB
	return 4; // 0x4ce Return
}


func_2176(var_18_object)
{
	var_19_object = Obj(); // 0x881 PushV
	var_19_object = var_18_object; // 0x882 Mov
	TaskCall(1); // 0x883 TaskCall
	func_22(var_19_object); // 0x884 Call
	TaskReturn(); // 0x885 TaskReturn
	return 0; // 0x887 Return
}


func_1672(var_2_bool, var_23_string)
{
	var_24_bool = 0; // 0x689 PushV
	func_2324(var_24_bool); // 0x68a Call
	var_25_bool = var_24_bool == 0; // 0x68c Not
	if(var_25_bool == 0) goto Label_1679; // 0x68d JumpB
	return 0; // 0x68e Return
	
Label_1679:
	var_26_bool = var_23_string == var_2_bool; // 0x68f Eq
	if(var_26_bool == 0) goto Label_1682; // 0x690 JumpB
	return 0; // 0x691 Return
	
Label_1682:
	var_27_string = ""; // 0x692 PushV
	var_27_string = var_23_string; // 0x693 Mov
	func_2076(var_27_string); // 0x694 Call
	var_2_bool = var_23_string; // 0x696 TMov
	return 0; // 0x697 Return
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
	func_1733(var_85_object); // 0x2a4 Call
	var_75_cvector = var_84_cvector; // 0x2a5 Mov
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x2a7 PushV
	var_91_cvector = var_74_cvector; // 0x2a8 Mov
	var_92_cvector = var_75_cvector; // 0x2a9 Mov
	func_2159(var_90_float, var_91_cvector, var_92_cvector); // 0x2aa Call
	var_114_int = 0; // 0x2ac PushI
	var_115_bool = var_90_float < var_114_int; // 0x2ad LT
	if(var_115_bool == 0) goto Label_693; // 0x2ae JumpB
	var_116_object = Obj(); // 0x2af PushV
	var_116_object = var_0_bool; // 0x2b0 MovT
	func_1948(); // 0x2b1 Call
	var_76_bool = 1; // 0x2b3 MovB
	goto Label_696; // 0x2b4 Jump
	
Label_696:
	var_125_bool = var_76_bool; // 0x2b8 Push
	if(var_125_bool == 0) goto Label_712; // 0x2b9 JumpB
	var_126_object = Obj(); // 0x2ba PushV
	var_126_object = var_0_bool; // 0x2bb MovT
	func_1948(); // 0x2bc Call
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


func_2211(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x8a3 PushV
	var_71_string = "idle"; // 0x8a4 MovS
	var_72_int = var_69_int; // 0x8a5 Push
	if(var_72_int == 0) goto Label_2216; // 0x8a6 JumpB
	var_71_string = var_71_string + var_69_int; // 0x8a7 Add2
	
Label_2216:
	var_68_string = var_71_string; // 0x8a8 Mov
	return 2; // 0x8a9 Return
}


func_2218(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0; // 0x8aa PushV
	var_65_int = 0; // 0x8ab MovI
	
Label_2220:
	var_67_string = "all"; // 0x8ac PushS
	var_68_string = ""; var_69_int = 0; // 0x8ad PushV
	var_69_int = var_65_int; // 0x8ae Mov
	func_2211(var_68_string, var_69_int); // 0x8af Call
	HasAnimation(var_66_bool, var_67_string, var_68_string); // 0x8b1 Func
	var_73_bool = var_66_bool == 0; // 0x8b3 Not
	if(var_73_bool == 0) goto Label_2230; // 0x8b4 JumpB
	goto Label_2233; // 0x8b5 Jump
	
Label_2233:
	var_62_int = var_65_int; // 0x8b9 Mov
	return 4; // 0x8ba Return
	
Label_2230:
	var_74_int = 1; // 0x8b6 PushI
	var_65_int = var_65_int + var_74_int; // 0x8b7 Add2
	goto Label_2220; // 0x8b8 Jump
}


func_185()
{
	var_19_bool = 0; // 0xb9 PushV
	func_1959(var_19_bool); // 0xba Call
	var_22_bool = var_19_bool == 0; // 0xbc Not
	if(var_22_bool == 0) goto Label_193; // 0xbd JumpB
	func_2302(); // 0xbf Call
	
Label_193:
	return 0; // 0xc1 Return
}


func_2235(var_60_int)
{
	var_62_bool = 0; // 0x8bc PushV
	func_2368(var_62_bool); // 0x8bd Call
	if(var_62_bool == 0) goto Label_2242; // 0x8bf JumpB
	var_60_int = 2; // 0x8c0 MovI
	goto Label_2243; // 0x8c1 Jump
	
Label_2243:
	return 0; // 0x8c3 Return
	
Label_2242:
	var_60_int = 0; // 0x8c2 MovI
}


func_1725(var_325_string, var_326_int)
{
	var_327_int = 1; // 0x6be PushI
	var_328_bool = var_326_int == var_327_int; // 0x6bf Eq
	if(var_328_bool == 0) goto Label_1731; // 0x6c0 JumpB
	var_325_string = "fire"; // 0x6c1 MovS
	return 0; // 0x6c2 Return
	
Label_1731:
	var_325_string = "phys"; // 0x6c3 MovS
	return 0; // 0x6c4 Return
}


func_2244(var_68_object)
{
	var_69_object = Obj(); // 0x8c5 PushV
	var_69_object = var_68_object; // 0x8c6 Mov
	TaskCall(4); // 0x8c7 TaskCall
	func_667(var_70_object, var_69_object); // 0x8c8 Call
	TaskReturn(); // 0x8c9 TaskReturn
	return 0; // 0x8cb Return
}


func_1733(var_61_cvector)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x6c5 PushV
	GetPosition(var_65_cvector); // 0x6c6 Func
	GetPosition(var_66_cvector); // 0x6c8 ObjFunc
	var_61_cvector = var_66_cvector - var_65_cvector; // 0x6ca Sub2
	return 4; // 0x6cb Return
}


func_2252(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x8cd PushV
	var_29_object = var_27_object; // 0x8ce Mov
	func_1857(var_28_bool, var_29_object); // 0x8cf Call
	if(var_28_bool == 0) goto Label_2260; // 0x8d1 JumpB
	var_26_int = 2; // 0x8d2 MovI
	goto Label_2261; // 0x8d3 Jump
	
Label_2261:
	return 0; // 0x8d5 Return
	
Label_2260:
	var_26_int = 0; // 0x8d4 MovI
}


func_1740(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0; // 0x6cc PushV
	var_49_string = "HasProperty"; // 0x6cd PushS
	var_50_int = 2; // 0x6ce PushI
	var_51_bool = IsFuncExist(var_45_object, var_49_string, var_50_int); // 0x6cf FuncExist
	var_52_bool = var_51_bool == 0; // 0x6d0 Not
	if(var_52_bool == 0) goto Label_1748; // 0x6d1 JumpB
	var_44_bool = 0; // 0x6d2 MovB
	return 2; // 0x6d3 Return
	
Label_1748:
	HasProperty(var_46_string, var_48_bool); // 0x6d4 ObjFunc
	var_44_bool = var_48_bool; // 0x6d6 Mov
	return 2; // 0x6d7 Return
}


func_718(var_0_bool)
{
	var_77_object = Obj(); // 0x2ce PushV
	var_77_object = var_0_bool; // 0x2cf MovT
	func_2094(var_77_object); // 0x2d0 Call
	return 0; // 0x2d2 Return
}


func_1231(var_369_bool, var_370_float)
{
	var_371_float = 0; var_372_bool = 0; var_373_float = 0; var_374_bool = 0; // 0x4cf PushV
	rand(var_373_float); // 0x4d0 Func
	var_375_bool = var_373_float < var_370_float; // 0x4d2 LT
	if(var_375_bool == 0) goto Label_1251; // 0x4d3 JumpB
	
Label_1236:
	IsAnimationPlaying(var_374_bool); // 0x4d4 Func
	var_376_bool = var_374_bool == 0; // 0x4d6 Not
	if(var_376_bool == 0) goto Label_1241; // 0x4d7 JumpB
	goto Label_1250; // 0x4d8 Jump
	
Label_1250:
	goto Label_1253; // 0x4e2 Jump
	
Label_1253:
	var_369_bool = 0; // 0x4e5 MovB
	return 4; // 0x4e6 Return
	
Label_1241:
	var_377_bool = 0; // 0x4d9 PushV
	func_1295(var_374_bool, var_377_bool); // 0x4da Call
	if(var_377_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_369_bool = 1; // 0x4dd MovB
	return 4; // 0x4de Return
	
Label_1247:
	sync(); // 0x4df Func
	goto Label_1236; // 0x4e1 Jump
	
Label_1251:
	WaitForAnimEnd(); // 0x4e3 Func
}


func_2262(var_69_object)
{
	var_70_object = Obj(); // 0x8d7 PushV
	var_70_object = var_69_object; // 0x8d8 Mov
	TaskCall(5); // 0x8d9 TaskCall
	func_893(var_70_object); // 0x8da Call
	TaskReturn(); // 0x8db TaskReturn
	return 0; // 0x8dd Return
}


func_1752(var_297_float, var_298_object, var_299_float, var_300_int)
{
	var_304_int = 0; var_305_string = ""; var_306_int = 0; var_307_float = 0; var_308_float = 0; var_309_float = 0; var_310_int = 0; var_311_string = ""; var_312_int = 0; var_313_float = 0; var_314_float = 0; var_315_float = 0; // 0x6d8 PushV
	var_316_bool = 0; var_317_object = Obj(); var_318_string = ""; // 0x6d9 PushV
	var_317_object = var_298_object; // 0x6da Mov
	var_318_string = "health"; // 0x6db MovS
	func_1740(var_316_bool, var_317_object, var_318_string); // 0x6dc Call
	var_319_bool = var_316_bool == 0; // 0x6de Not
	if(var_319_bool == 0) goto Label_1762; // 0x6df JumpB
	var_297_float = 0.0; // 0x6e0 MovF
	return 12; // 0x6e1 Return
	
Label_1762:
	var_320_bool = 0; var_321_object = Obj(); var_322_string = ""; // 0x6e2 PushV
	var_321_object = var_298_object; // 0x6e3 Mov
	var_322_string = "armor"; // 0x6e4 MovS
	func_1740(var_320_bool, var_321_object, var_322_string); // 0x6e5 Call
	var_323_bool = var_320_bool == 0; // 0x6e7 Not
	if(var_323_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_310_int = 0; // 0x6e9 MovI
	goto Label_1774; // 0x6ea Jump
	
Label_1774:
	var_324_string = "armor_"; // 0x6ee PushS
	var_325_string = ""; var_326_int = 0; // 0x6ef PushV
	var_326_int = var_300_int; // 0x6f0 Mov
	func_1725(var_325_string, var_326_int); // 0x6f1 Call
	var_311_string = var_324_string + var_325_string; // 0x6f3 Add2
	var_329_bool = 0; var_330_object = Obj(); var_331_string = ""; // 0x6f4 PushV
	var_330_object = var_298_object; // 0x6f5 Mov
	var_331_string = var_311_string; // 0x6f6 Mov
	func_1740(var_329_bool, var_330_object, var_331_string); // 0x6f7 Call
	var_332_bool = var_329_bool == 0; // 0x6f9 Not
	if(var_332_bool == 0) goto Label_1789; // 0x6fa JumpB
	var_312_int = 0; // 0x6fb MovI
	goto Label_1791; // 0x6fc Jump
	
Label_1791:
	var_333_float = 0; var_334_float = 0; var_335_float = 0; // 0x6ff PushV
	var_336_int = var_310_int + var_312_int; // 0x700 Add
	var_337_float = 100.0; // 0x701 PushF
	var_334_float = var_336_int / var_336_int; // 0x702 Div2
	var_335_float = 1; // 0x703 MovI
	func_2122(var_333_float, var_334_float, var_335_float); // 0x704 Call
	var_313_float = var_333_float; // 0x705 Mov
	var_339_string = "health"; // 0x707 PushS
	GetProperty(var_339_string, var_314_float); // 0x708 ObjFunc
	var_340_int = 1; // 0x70a PushI
	var_341_int = var_340_int - var_313_float; // 0x70b Sub
	var_315_float = var_299_float * var_341_int; // 0x70c Mult2
	var_342_string = "health"; // 0x70d PushS
	var_343_float = 0; var_344_float = 0; var_345_float = 0; var_346_float = 0; // 0x70e PushV
	var_344_float = var_314_float - var_315_float; // 0x70f Sub2
	var_345_float = 0; // 0x710 MovI
	var_346_float = 1; // 0x711 MovI
	func_2129(var_343_float, var_344_float, var_345_float, var_346_float); // 0x712 Call
	SetProperty(var_342_string, var_343_float); // 0x714 ObjFunc
	var_297_float = var_315_float; // 0x716 Mov
	return 12; // 0x717 Return
	
Label_1789:
	GetProperty(var_311_string, var_312_int); // 0x6fd ObjFunc
	
Label_1771:
	var_349_string = "armor"; // 0x6eb PushS
	GetProperty(var_349_string, var_310_int); // 0x6ec ObjFunc
}


func_2270(var_24_int, var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x8df PushV
	var_27_object = var_25_object; // 0x8e0 Mov
	func_2252(var_26_int, var_27_object); // 0x8e1 Call
	var_24_int = var_26_int; // 0x8e2 Mov
	return 0; // 0x8e4 Return
}


func_2277(var_68_object)
{
	var_69_object = Obj(); // 0x8e6 PushV
	var_69_object = var_68_object; // 0x8e7 Mov
	func_2262(var_69_object); // 0x8e8 Call
	return 0; // 0x8ea Return
}


func_1255(var_0_bool, var_211_bool, var_212_float)
{
	var_213_bool = 0; var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_float = 0; // 0x4e7 PushV
	
Label_1256:
	IsAnimationPlaying(var_218_bool); // 0x4e8 Func
	var_223_bool = var_218_bool == 0; // 0x4ea Not
	if(var_223_bool == 0) goto Label_1261; // 0x4eb JumpB
	goto Label_1293; // 0x4ec Jump
	
Label_1293:
	var_211_bool = 0; // 0x50d MovB
	return 10; // 0x50e Return
	
Label_1261:
	var_224_bool = 0; // 0x4ed PushV
	func_1295(var_222_float, var_224_bool); // 0x4ee Call
	if(var_224_bool == 0) goto Label_1267; // 0x4f0 JumpB
	var_211_bool = 1; // 0x4f1 MovB
	return 10; // 0x4f2 Return
	
Label_1267:
	var_249_bool = 0; var_250_object = Obj(); // 0x4f3 PushV
	var_250_object = var_0_bool; // 0x4f4 MovT
	func_1857(var_249_bool, var_250_object); // 0x4f5 Call
	var_251_bool = var_249_bool == 0; // 0x4f7 Not
	if(var_251_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_211_bool = 0; // 0x4f9 MovB
	return 10; // 0x4fa Return
	
Label_1275:
	GetPFPosition(var_219_cvector); // 0x4fb TObjFunc
	GetPFPosition(var_220_cvector); // 0x4fd Func
	var_221_cvector = var_219_cvector - var_220_cvector; // 0x4ff Sub2
	var_222_float = var_221_cvector | var_221_cvector; // 0x500 Or2
	var_252_float = var_212_float * var_212_float; // 0x501 Mult
	var_253_bool = var_222_float < var_252_float; // 0x502 LT
	if(var_253_bool == 0) goto Label_1290; // 0x503 JumpB
	var_254_bool = 0; var_255_float = 0; // 0x504 PushV
	var_255_float = var_212_float; // 0x505 Mov
	func_1151(var_222_float, var_254_bool, var_255_float); // 0x506 Call
	var_211_bool = 1; // 0x508 MovB
	return 10; // 0x509 Return
	
Label_1290:
	sync(); // 0x50a Func
	goto Label_1256; // 0x50c Jump
}


func_2283(var_20_int)
{
	var_20_int = 0; // 0x8ec MovI
	return 0; // 0x8ed Return
}


func_2286()
{
	return 0; // 0x8ef Return
}


func_2288(var_21_int)
{
	var_21_int = 0; // 0x8f1 MovI
	return 0; // 0x8f2 Return
}


func_2291()
{
	return 0; // 0x8f4 Return
}


func_2293(var_20_int)
{
	var_20_int = 2; // 0x8f6 MovI
	return 0; // 0x8f7 Return
}


func_2296(var_28_object)
{
	var_29_object = Obj(); // 0x8f9 PushV
	var_29_object = var_28_object; // 0x8fa Mov
	func_2330(var_28_object, var_29_object); // 0x8fb Call
	return 0; // 0x8fd Return
}


func_2302()
{
	return 0; // 0x8fe Return
}


func_2303(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x8ff PushV
	var_92_string = "player"; // 0x900 PushS
	GetVariable(var_92_string, var_91_int); // 0x901 Func
	var_93_int = 0; // 0x903 PushI
	var_94_bool = var_91_int == var_93_int; // 0x904 Eq
	if(var_94_bool == 0) goto Label_2313; // 0x905 JumpB
	var_89_int = 200001; // 0x906 MovI
	return 2; // 0x907 Return
	
Label_2313:
	var_95_int = 1; // 0x909 PushI
	var_96_bool = var_91_int == var_95_int; // 0x90a Eq
	if(var_96_bool == 0) goto Label_2318; // 0x90b JumpB
	var_89_int = 200002; // 0x90c MovI
	return 2; // 0x90d Return
	
Label_2318:
	var_89_int = 200003; // 0x90e MovI
	return 2; // 0x90f Return
}


func_1295(var_0_bool, var_224_bool)
{
	var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_float = 0; var_234_float = 0; // 0x50f PushV
	var_235_bool = 0; var_236_object = Obj(); // 0x510 PushV
	var_236_object = var_0_bool; // 0x511 MovT
	func_1857(var_235_bool, var_236_object); // 0x512 Call
	var_237_bool = var_235_bool == 0; // 0x514 Not
	if(var_237_bool == 0) goto Label_1304; // 0x515 JumpB
	var_224_bool = 0; // 0x516 MovB
	return 10; // 0x517 Return
	
Label_1304:
	var_238_bool = 0; // 0x518 PushV
	func_1347(var_234_float, var_238_bool); // 0x519 Call
	if(var_238_bool == 0) goto Label_1326; // 0x51b JumpB
	GetPFPosition(var_230_cvector); // 0x51c TObjFunc
	GetPFPosition(var_231_cvector); // 0x51e Func
	var_232_cvector = var_230_cvector - var_231_cvector; // 0x520 Sub2
	var_233_float = var_232_cvector | var_232_cvector; // 0x521 Or2
	GetAttackDistance(var_234_float); // 0x522 TObjFunc
	var_239_int = 50; // 0x524 PushI
	var_234_float = var_234_float + var_239_int; // 0x525 Add2
	var_240_float = var_234_float * var_234_float; // 0x526 Mult
	var_241_bool = var_233_float <= var_240_float; // 0x527 LE
	if(var_241_bool == 0) goto Label_1326; // 0x528 JumpB
	func_1328(var_234_float); // 0x52a Call
	var_224_bool = 1; // 0x52c MovB
	return 10; // 0x52d Return
	
Label_1326:
	var_224_bool = 0; // 0x52e MovB
	return 10; // 0x52f Return
}


func_2320(var_87_int)
{
	var_87_int = 3348; // 0x910 MovI
	return 0; // 0x911 Return
}


func_2322(var_88_string)
{
	var_88_string = "ui/NPC_None.png"; // 0x912 MovS
	return 0; // 0x913 Return
}


func_2324(var_20_bool)
{
	var_20_bool = 0; // 0x914 MovB
	return 0; // 0x915 Return
}


func_2326()
{
	var_18_bool = GlobalVars[0]; // 0x916 PushGE
	var_18_bool = 0; // 0x917 MovB
	GlobalVars[0] = var_18_bool; // 0x918 PopGE
	return 0; // 0x919 Return
}


func_1816(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x718 PushV
	IsDead(var_40_bool); // 0x719 ObjFunc
	var_37_bool = var_40_bool; // 0x71b Mov
	return 2; // 0x71c Return
}


func_2330(var_29_object, var_37_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x91a PushV
	var_32_bool = GlobalVars[0]; // 0x91b PushGE
	if(var_32_bool == 0) goto Label_2341; // 0x91c JumpB
	IsOverrideActive(var_31_bool); // 0x91d Func
	var_33_bool = var_31_bool == 0; // 0x91f Not
	if(var_33_bool == 0) goto Label_2339; // 0x920 JumpB
	WorkWithCorpse(var_29_object); // 0x921 Func
	
Label_2339:
	return 2; // 0x923 Return
	
Label_2341:
	var_34_int = 1000; // 0x925 PushI
	var_35_int = 0; var_36_object = Obj(); // 0x926 PushV
	var_36_object = var_29_object; // 0x927 Mov
	TaskCall(7); // 0x928 TaskCall
	func_1556(var_37_object, var_35_int, var_36_object); // 0x929 Call
	TaskReturn(); // 0x92a TaskReturn
	var_134_bool = var_34_int == var_37_object; // 0x92c Eq
	if(var_134_bool == 0) goto Label_2367; // 0x92d JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x92e PushV
	var_136_object = var_29_object; // 0x92f Mov
	func_2024(var_136_object); // 0x930 Call
	var_164_bool = var_135_bool == 0; // 0x932 Not
	if(var_164_bool == 0) goto Label_2357; // 0x933 JumpB
	return 2; // 0x934 Return
	
Label_2357:
	var_165_object = Obj(); // 0x935 PushV
	var_165_object = var_29_object; // 0x936 Mov
	TaskCall(0); // 0x937 TaskCall
	func_0(var_165_object); // 0x938 Call
	TaskReturn(); // 0x939 TaskReturn
	var_170_object = Obj(); // 0x93b PushV
	var_170_object = var_29_object; // 0x93c Mov
	func_2072(); // 0x93d Call
	
Label_2367:
	return 2; // 0x93f Return
}


func_1821(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x71d PushV
	var_32_bool = var_27_object == 0; // 0x71e NullEq
	if(var_32_bool == 0) goto Label_1826; // 0x71f JumpB
	var_26_bool = 0; // 0x720 MovB
	return 4; // 0x721 Return
	
Label_1826:
	var_33_bool = 0; // 0x722 PushV
	var_33_bool = 0; // 0x723 MovB
	var_34_string = "IsDead"; // 0x724 PushS
	var_35_int = 1; // 0x725 PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x726 FuncExist
	if(var_36_bool == 0) goto Label_1838; // 0x727 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x728 PushV
	var_38_object = var_27_object; // 0x729 Mov
	func_1816(var_38_object); // 0x72a Call
	if(var_37_bool == 0) goto Label_1838; // 0x72c JumpB
	var_33_bool = 1; // 0x72d MovB
	
Label_1838:
	if(var_33_bool == 0) goto Label_1841; // 0x72e JumpB
	var_26_bool = 0; // 0x72f MovB
	return 4; // 0x730 Return
	
Label_1841:
	GetScene(var_30_object); // 0x731 Func
	var_41_bool = var_30_object == 0; // 0x733 NullEq
	if(var_41_bool == 0) goto Label_1847; // 0x734 JumpB
	var_26_bool = 0; // 0x735 MovB
	return 4; // 0x736 Return
	
Label_1847:
	GetScene(var_31_object); // 0x737 ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x739 Neq
	if(var_42_bool == 0) goto Label_1853; // 0x73a JumpB
	var_26_bool = 0; // 0x73b MovB
	return 4; // 0x73c Return
	
Label_1853:
	var_26_bool = 1; // 0x73d MovB
	return 4; // 0x73e Return
}


func_1328(var_0_bool)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); // 0x530 PushV
	Face(var_0_bool); // 0x531 Func
	var_246_string = "all"; // 0x533 PushS
	var_247_string = "bjump"; // 0x534 PushS
	PlayAnimation(var_246_string, var_247_string); // 0x535 Func
	GetPFPosition(var_244_cvector); // 0x537 TObjFunc
	GetPFPosition(var_245_cvector); // 0x539 Func
	WaitForAnimEnd(); // 0x53b Func
	StopAsync(); // 0x53d Func
	var_248_cvector = CVector(0.0, 0.0, 0.0); // 0x53f PushVec
	SetSpeed(var_248_cvector); // 0x540 Func
	return 4; // 0x542 Return
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


func_2368(var_62_bool)
{
	var_62_bool = 0; // 0x940 MovB
	return 0; // 0x941 Return
}


func_1857(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x741 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x742 PushV
	var_27_object = var_23_object; // 0x743 Mov
	func_1821(var_26_bool, var_27_object); // 0x744 Call
	var_43_bool = var_26_bool == 0; // 0x746 Not
	if(var_43_bool == 0) goto Label_1866; // 0x747 JumpB
	var_22_bool = 0; // 0x748 MovB
	return 2; // 0x749 Return
	
Label_1866:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x74a PushV
	var_45_object = var_23_object; // 0x74b Mov
	var_46_string = "noaccess"; // 0x74c MovS
	func_1740(var_44_bool, var_45_object, var_46_string); // 0x74d Call
	var_53_bool = var_44_bool == 0; // 0x74f Not
	if(var_53_bool == 0) goto Label_1875; // 0x750 JumpB
	var_22_bool = 1; // 0x751 MovB
	return 2; // 0x752 Return
	
Label_1875:
	var_54_string = "noaccess"; // 0x753 PushS
	GetProperty(var_54_string, var_25_int); // 0x754 ObjFunc
	var_55_int = 0; // 0x756 PushI
	var_22_bool = var_25_int == var_55_int; // 0x757 Eq2
	return 2; // 0x758 Return
}


func_2370(var_21_bool)
{
	var_21_bool = 0; // 0x943 MovB
	return 0; // 0x944 Return
}


func_1347(var_0_bool, var_203_bool)
{
	var_204_bool = 0; var_205_bool = 0; // 0x543 PushV
	var_206_string = "IsAttacking"; // 0x544 PushS
	var_207_int = 1; // 0x545 PushI
	var_208_bool = IsFuncExist(var_0_bool, var_206_string, var_207_int); // 0x546 FuncExist
	if(var_208_bool == 0) goto Label_1356; // 0x547 JumpB
	IsAttacking(var_205_bool); // 0x548 TObjFunc
	var_203_bool = var_205_bool; // 0x54a Mov
	return 2; // 0x54b Return
	
Label_1356:
	var_203_bool = 0; // 0x54c MovB
	return 2; // 0x54d Return
}


func_2373()
{
	var_71_bool = GlobalVars[0]; // 0x946 PushGE
	var_71_bool = 1; // 0x947 MovB
	GlobalVars[0] = var_71_bool; // 0x948 PopGE
	var_72_int = 50; // 0x949 PushI
	var_73_int = 40; // 0x94a PushI
	SetRTEnvelope(var_72_int, var_73_int); // 0x94b Func
	return 0; // 0x94d Return
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
	var_265_float = 0; var_266_int = 0; var_267_float = 0; var_268_int = 0; // 0x54e PushV
	var_269_bool = var_2_bool == 0; // 0x54f Not
	if(var_269_bool == 0) goto Label_1362; // 0x550 JumpB
	return 4; // 0x551 Return
	
Label_1362:
	var_270_object = var_4_object; // 0x552 PushT
	if(var_270_object == 0) goto Label_1370; // 0x553 JumpB
	var_271_int = -1; // 0x554 PushI
	var_4_object = var_4_object + var_271_int; // 0x555 Add2
	var_272_int = 0; // 0x556 PushI
	var_273_bool = var_4_object > var_272_int; // 0x557 GT
	if(var_273_bool == 0) goto Label_1370; // 0x558 JumpB
	return 4; // 0x559 Return
	
Label_1370:
	rand(var_267_float); // 0x55a Func
	var_274_float = 0; // 0x55c PushV
	func_1396(var_274_float); // 0x55d Call
	var_275_bool = var_267_float < var_274_float; // 0x55f LT
	if(var_275_bool == 0) goto Label_1389; // 0x560 JumpB
	irand(var_268_int, var_267_float); // 0x561 Func
	var_276_int = 1; // 0x563 PushI
	var_268_int = var_268_int + var_276_int; // 0x564 Add2
	var_277_string = "attack"; // 0x565 PushS
	var_278_int = var_277_string + var_268_int; // 0x566 Add
	Speak(var_278_int); // 0x567 Func
	var_279_int = 0; // 0x569 PushV
	func_1394(var_279_int); // 0x56a Call
	var_4_object = var_279_int; // 0x56b TMov
	
Label_1389:
	return 4; // 0x56d Return
}


func_341(var_2_bool)
{
	var_67_int = 110; // 0x155 PushI
	KillTimer(var_67_int); // 0x156 Func
	var_2_bool = 0; // 0x158 TMovB
	func_469(var_21_bool, var_22_int); // 0x15a Call
	return 0; // 0x15c Return
}


func_1881(var_21_object, var_22_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_object = Obj(); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x759 PushV
	var_44_bool = 0; // 0x75a PushV
	var_44_bool = 0; // 0x75b MovB
	var_45_int = 4; // 0x75c PushI
	var_46_bool = var_22_int != var_45_int; // 0x75d Neq
	if(var_46_bool == 0) goto Label_1891; // 0x75e JumpB
	var_47_int = 5; // 0x75f PushI
	var_48_bool = var_22_int != var_47_int; // 0x760 Neq
	if(var_48_bool == 0) goto Label_1891; // 0x761 JumpB
	var_44_bool = 1; // 0x762 MovB
	
Label_1891:
	if(var_44_bool == 0) goto Label_1910; // 0x763 JumpB
	GetScene(var_34_object); // 0x764 Func
	GetPosition(var_36_cvector); // 0x766 Func
	GetEyesHeight(var_37_float); // 0x768 Func
	var_49_float = GetByIndex(var_36_cvector, 1); // 0x76a PushE
	var_50_int = 2; // 0x76b PushI
	var_51_float = var_37_float / var_50_int; // 0x76c Div
	var_49_float = var_49_float + var_51_float; // 0x76d Add2
	SetByIndex(var_36_cvector, 1) = var_49_float; // 0x76e PopE
	var_52_string = "scripted"; // 0x76f PushS
	var_53_cvector = CVector(0.0, 0.0, 1.0); // 0x770 PushVec
	var_54_string = "blood.xml"; // 0x771 PushS
	AddActorByType(var_35_object, var_52_string, var_34_object, var_36_cvector, var_53_cvector, var_54_string); // 0x772 Func
	var_35_object = 0; // 0x774 SetNull
	var_34_object = 0; // 0x775 SetNull
	
Label_1910:
	var_55_bool = var_21_object == 0; // 0x776 NullEq
	if(var_55_bool == 0) goto Label_1913; // 0x777 JumpB
	return 20; // 0x778 Return
	
Label_1913:
	GetSecondaryAnimationType(var_38_int); // 0x779 Func
	var_56_int = 0; // 0x77b PushI
	var_57_bool = var_38_int < var_56_int; // 0x77c LT
	if(var_57_bool == 0) goto Label_1919; // 0x77d JumpB
	return 20; // 0x77e Return
	
Label_1919:
	GetPosition(var_39_cvector); // 0x77f ObjFunc
	GetPosition(var_40_cvector); // 0x781 Func
	GetDirection(var_41_cvector); // 0x783 Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x785 Sub2
	var_58_float = GetByIndex(var_42_cvector, 0); // 0x786 PushE
	var_59_float = GetByIndex(var_41_cvector, 0); // 0x787 PushE
	var_60_float = var_58_float * var_59_float; // 0x788 Mult
	var_61_float = GetByIndex(var_42_cvector, 2); // 0x789 PushE
	var_62_float = GetByIndex(var_41_cvector, 2); // 0x78a PushE
	var_63_float = var_61_float * var_62_float; // 0x78b Mult
	var_64_int = var_60_float + var_63_float; // 0x78c Add
	var_65_int = 0; // 0x78d PushI
	var_66_bool = var_64_int >= var_65_int; // 0x78e GE
	if(var_66_bool == 0) goto Label_1938; // 0x78f JumpB
	var_43_string = "fhit"; // 0x790 MovS
	goto Label_1939; // 0x791 Jump
	
Label_1939:
	var_67_string = "hit_react"; // 0x793 PushS
	var_68_string = "1"; // 0x794 PushS
	var_69_int = var_43_string + var_68_string; // 0x795 Add
	var_70_string = "2"; // 0x796 PushS
	var_71_int = var_43_string + var_70_string; // 0x797 Add
	var_72_int = -10; // 0x798 PushI
	FadeSecondaryAnimation(var_67_string, var_69_int, var_71_int, var_72_int); // 0x799 Func
	return 20; // 0x79b Return
	
Label_1938:
	var_43_string = "bhit"; // 0x792 MovS
}


func_358(var_2_bool, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0x166 PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x167 PushV
	var_24_object = var_18_object; // 0x168 Mov
	func_1857(var_23_bool, var_24_object); // 0x169 Call
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
	func_2235(var_61_object); // 0x178 Call
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
	func_2244(var_68_object); // 0x186 Call
	var_2_bool = 1; // 0x188 TMovB
	var_133_int = 110; // 0x189 PushI
	var_134_float = 10.0; // 0x18a PushF
	SetTimer(var_133_int, var_134_float); // 0x18b Func
	
Label_397:
	return 4; // 0x18d Return
}


func_1390(var_350_int)
{
	var_350_int = 0; // 0x56e MovI
	return 0; // 0x56f Return
}


func_1392()
{
	return 0; // 0x571 Return
}


func_1394(var_279_int)
{
	var_279_int = 1; // 0x572 MovI
	return 0; // 0x573 Return
}


func_1396(var_274_float)
{
	var_274_float = 0.5; // 0x574 MovF
	return 0; // 0x575 Return
}


func_1405(var_0_bool, var_1_bool, var_127_bool, var_128_object, var_129_float, var_130_float, var_131_bool, var_132_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_object = Obj(); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_object = Obj(); var_143_bool = 0; var_144_bool = 0; var_145_object = Obj(); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_object = Obj(); // 0x57d PushV
	var_0_bool = 0; // 0x57e TMovB
	var_1_bool = var_128_object; // 0x57f TMov
	var_144_bool = var_132_bool; // 0x580 Mov
	
Label_1409:
	var_151_bool = 0; var_152_object = Obj(); // 0x581 PushV
	var_152_object = var_128_object; // 0x582 Mov
	func_1545(var_151_bool, var_152_object); // 0x583 Call
	var_155_bool = var_151_bool == 0; // 0x585 Not
	if(var_155_bool == 0) goto Label_1417; // 0x586 JumpB
	var_127_bool = 0; // 0x587 MovB
	return 16; // 0x588 Return
	
Label_1417:
	GetPosition(var_146_cvector); // 0x589 ObjFunc
	GetPosition(var_147_cvector); // 0x58b Func
	var_148_cvector = var_146_cvector - var_147_cvector; // 0x58d Sub2
	var_149_float = var_148_cvector | var_148_cvector; // 0x58e Or2
	var_156_bool = 0; // 0x58f PushV
	var_156_bool = 0; // 0x590 MovB
	var_157_int = 0; // 0x591 PushI
	var_158_bool = var_130_float > var_157_int; // 0x592 GT
	if(var_158_bool == 0) goto Label_1432; // 0x593 JumpB
	var_159_float = var_130_float * var_130_float; // 0x594 Mult
	var_160_bool = var_149_float > var_159_float; // 0x595 GT
	if(var_160_bool == 0) goto Label_1432; // 0x596 JumpB
	var_156_bool = 1; // 0x597 MovB
	
Label_1432:
	if(var_156_bool == 0) goto Label_1437; // 0x598 JumpB
	Stop(); // 0x599 Func
	var_127_bool = 0; // 0x59b MovB
	return 16; // 0x59c Return
	
Label_1437:
	var_161_float = var_129_float * var_129_float; // 0x59d Mult
	var_162_bool = var_149_float > var_161_float; // 0x59e GT
	if(var_162_bool == 0) goto Label_1499; // 0x59f JumpB
	GetPFPosition(var_146_cvector); // 0x5a0 ObjFunc
	FindPathTo(var_150_object, var_146_cvector); // 0x5a2 Func
	var_163_bool = var_150_object != 0; // 0x5a4 NullNeq
	if(var_163_bool == 0) goto Label_1448; // 0x5a5 JumpB
	var_145_object = var_150_object; // 0x5a6 Mov
	var_150_object = 0; // 0x5a7 SetNull
	
Label_1448:
	var_164_bool = var_145_object != 0; // 0x5a8 NullNeq
	if(var_164_bool == 0) goto Label_1481; // 0x5a9 JumpB
	var_165_bool = var_144_bool; // 0x5aa Push
	if(var_165_bool == 0) goto Label_1458; // 0x5ab JumpB
	var_144_bool = 0; // 0x5ac MovB
	RotatePath(var_145_object, var_143_bool); // 0x5ad Func
	var_166_bool = var_143_bool == 0; // 0x5af Not
	if(var_166_bool == 0) goto Label_1458; // 0x5b0 JumpB
	goto Label_1505; // 0x5b1 Jump
	
Label_1505:
	var_127_bool = !var_0_bool; // 0x5e1 Not2
	return 16; // 0x5e2 Return
	
Label_1458:
	var_167_int = 0; // 0x5b2 PushI
	var_168_float = 0.3; // 0x5b3 PushF
	SetTimer(var_167_int, var_168_float); // 0x5b4 Func
	var_169_string = ""; // 0x5b6 PushV
	func_1552(var_169_string); // 0x5b7 Call
	var_170_string = ""; // 0x5b9 PushV
	func_1554(var_170_string); // 0x5ba Call
	FollowPath(var_145_object, var_131_bool, var_143_bool, var_169_string, var_170_string); // 0x5bc Func
	var_171_bool = var_143_bool == 0; // 0x5be Not
	if(var_171_bool == 0) goto Label_1479; // 0x5bf JumpB
	var_172_bool = var_0_bool; // 0x5c0 PushT
	if(var_172_bool == 0) goto Label_1477; // 0x5c1 JumpB
	var_145_object = 0; // 0x5c2 SetNull
	goto Label_1505; // 0x5c3 Jump
	
Label_1477:
	goto Label_1504; // 0x5c5 Jump
	
Label_1504:
	goto Label_1409; // 0x5e0 Jump
	
Label_1479:
	var_145_object = 0; // 0x5c7 SetNull
	goto Label_1497; // 0x5c8 Jump
	
Label_1497:
	var_150_object = 0; // 0x5d9 SetNull
	goto Label_1503; // 0x5da Jump
	
Label_1503:
	var_145_object = 0; // 0x5df SetNull
	
Label_1481:
	var_173_int = 0; // 0x5c9 PushI
	KillTimer(var_173_int); // 0x5ca Func
	var_174_float = 0.5; // 0x5cc PushF
	Sleep(var_174_float, var_143_bool); // 0x5cd Func
	var_175_bool = var_143_bool == 0; // 0x5cf Not
	if(var_175_bool == 0) goto Label_1493; // 0x5d0 JumpB
	var_176_bool = var_0_bool; // 0x5d1 PushT
	if(var_176_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_145_object = 0; // 0x5d3 SetNull
	goto Label_1505; // 0x5d4 Jump
	
Label_1493:
	var_177_int = 0; // 0x5d5 PushI
	var_178_float = 0.3; // 0x5d6 PushF
	SetTimer(var_177_int, var_178_float); // 0x5d7 Func
	
Label_1499:
	var_179_int = 0; // 0x5db PushI
	KillTimer(var_179_int); // 0x5dc Func
	goto Label_1505; // 0x5de Jump
}


func_893(var_70_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_float = 0; // 0x37e PushV
	var_76_object = var_70_object; // 0x37f Mov
	var_77_bool = 1; // 0x380 MovB
	var_78_float = 180.0; // 0x381 MovF
	func_907(var_71_object, var_72_int, var_73_int, var_74_bool, var_75_int, var_70_object, var_76_object, var_77_bool, var_78_float); // 0x382 Call
	return 0; // 0x384 Return
}


func_901(var_294_float)
{
	var_294_float = 0.03; // 0x386 MovF
	return 0; // 0x387 Return
}


func_904(var_301_int)
{
	var_301_int = 0; // 0x389 MovI
	return 0; // 0x38a Return
}


func_907(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_76_object, var_77_bool, var_78_float, var_133_bool)
{
	var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_float = 0; var_89_bool = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_float = 0; // 0x38b PushV
	var_1_bool = 0; // 0x38c TMovI
	
Label_909:
	var_99_string = "all"; // 0x38d PushS
	var_100_string = "attack_begin"; // 0x38e PushS
	var_101_int = 1; // 0x38f PushI
	var_102_int = var_1_bool + var_101_int; // 0x390 Add
	var_103_int = var_100_string + var_102_int; // 0x391 Add
	HasAnimation(var_89_bool, var_99_string, var_103_int); // 0x392 Func
	var_104_bool = var_89_bool == 0; // 0x394 Not
	if(var_104_bool == 0) goto Label_919; // 0x395 JumpB
	goto Label_922; // 0x396 Jump
	
Label_922:
	var_2_bool = 0; // 0x39a TMovI
	
Label_923:
	var_105_string = "attack"; // 0x39b PushS
	var_106_int = 1; // 0x39c PushI
	var_107_int = var_2_bool + var_106_int; // 0x39d Add
	var_108_int = var_105_string + var_107_int; // 0x39e Add
	IsExisting3DSound(var_90_bool, var_108_int); // 0x39f Func
	var_109_bool = var_90_bool == 0; // 0x3a1 Not
	if(var_109_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_935; // 0x3a3 Jump
	
Label_935:
	var_4_object = 0; // 0x3a7 TMovI
	var_110_string = "@GetAttackDistance"; // 0x3a8 PushS
	var_111_int = 1; // 0x3a9 PushI
	var_112_bool = IsFuncExist(var_76_object, var_110_string, var_111_int); // 0x3aa FuncExist
	if(var_112_bool == 0) goto Label_945; // 0x3ab JumpB
	GetAttackDistance(var_91_float); // 0x3ac ObjFunc
	var_113_int = 50; // 0x3ae PushI
	var_91_float = var_91_float + var_113_int; // 0x3af Add2
	goto Label_946; // 0x3b0 Jump
	
Label_946:
	var_114_int = 150; // 0x3b2 PushI
	var_115_bool = var_91_float >= var_114_int; // 0x3b3 GE
	if(var_115_bool == 0) goto Label_950; // 0x3b4 JumpB
	var_91_float = 150; // 0x3b5 MovI
	
Label_950:
	var_3_bool = 0; // 0x3b6 TMovB
	var_0_bool = var_76_object; // 0x3b7 TMov
	IsPlayerActor(var_0_bool, var_94_bool); // 0x3b8 Func
	var_116_bool = var_77_bool; // 0x3ba Push
	if(var_116_bool == 0) goto Label_958; // 0x3bb JumpB
	var_95_bool = 0; // 0x3bc MovB
	goto Label_959; // 0x3bd Jump
	
Label_959:
	var_117_bool = 0; // 0x3bf PushV
	var_117_bool = 0; // 0x3c0 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x3c1 PushV
	var_119_object = var_0_bool; // 0x3c2 MovT
	func_1857(var_118_bool, var_119_object); // 0x3c3 Call
	if(var_118_bool == 0) goto Label_969; // 0x3c5 JumpB
	var_120_bool = var_3_bool == 0; // 0x3c6 Not
	if(var_120_bool == 0) goto Label_969; // 0x3c7 JumpB
	var_117_bool = 1; // 0x3c8 MovB
	
Label_969:
	if(var_117_bool == 0) goto Label_1095; // 0x3c9 JumpB
	GetPFPosition(var_92_cvector); // 0x3ca TObjFunc
	GetPFPosition(var_93_cvector); // 0x3cc Func
	var_96_cvector = var_92_cvector - var_93_cvector; // 0x3ce Sub2
	var_97_float = var_96_cvector | var_96_cvector; // 0x3cf Or2
	var_121_float = 400.0; // 0x3d0 PushF
	var_122_int = var_121_float + var_91_float; // 0x3d1 Add
	var_123_float = 400.0; // 0x3d2 PushF
	var_124_int = var_123_float + var_91_float; // 0x3d3 Add
	var_125_float = var_122_int * var_124_int; // 0x3d4 Mult
	var_126_bool = var_97_float >= var_125_float; // 0x3d5 GE
	if(var_126_bool == 0) goto Label_998; // 0x3d6 JumpB
	var_127_bool = 0; var_128_object = Obj(); var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_bool = 0; // 0x3d7 PushV
	var_128_object = var_0_bool; // 0x3d8 MovT
	var_129_float = var_91_float; // 0x3d9 Mov
	var_130_float = 3000.0; // 0x3da MovF
	var_131_bool = 1; // 0x3db MovB
	var_132_bool = 0; // 0x3dc MovB
	TaskCall(6); // 0x3dd TaskCall
	func_1405(var_133_bool, var_134_object, var_127_bool, var_128_object, var_129_float, var_130_float, var_131_bool, var_132_bool); // 0x3de Call
	TaskReturn(); // 0x3df TaskReturn
	var_180_bool = var_133_bool == 0; // 0x3e1 Not
	if(var_180_bool == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_1095; // 0x3e3 Jump
	
Label_1095:
	WaitForAnimEnd(); // 0x447 Func
	var_181_bool = var_3_bool; // 0x449 PushT
	if(var_181_bool == 0) goto Label_1100; // 0x44a JumpB
	return 20; // 0x44b Return
	
Label_1100:
	var_182_string = "all"; // 0x44c PushS
	var_183_string = "attack_off"; // 0x44d PushS
	PlayAnimation(var_182_string, var_183_string); // 0x44e Func
	WaitForAnimEnd(); // 0x450 Func
	var_184_bool = var_94_bool; // 0x452 Push
	if(var_184_bool == 0) goto Label_1111; // 0x453 JumpB
	var_185_float = 2.0; // 0x454 PushF
	Sleep(var_185_float); // 0x455 Func
	
Label_1111:
	return 20; // 0x457 Return
	
Label_996:
	var_95_bool = 0; // 0x3e4 MovB
	goto Label_1094; // 0x3e5 Jump
	
Label_1094:
	goto Label_959; // 0x446 Jump
	
Label_998:
	var_186_float = var_78_float * var_78_float; // 0x3e6 Mult
	var_187_bool = var_97_float >= var_186_float; // 0x3e7 GE
	if(var_187_bool == 0) goto Label_1086; // 0x3e8 JumpB
	var_188_bool = var_95_bool == 0; // 0x3e9 Not
	if(var_188_bool == 0) goto Label_1016; // 0x3ea JumpB
	var_189_object = Obj(); // 0x3eb PushV
	var_189_object = var_0_bool; // 0x3ec MovT
	func_1948(); // 0x3ed Call
	var_198_string = "all"; // 0x3ef PushS
	var_199_string = "attack_on"; // 0x3f0 PushS
	PlayAnimation(var_198_string, var_199_string); // 0x3f1 Func
	WaitForAnimEnd(); // 0x3f3 Func
	StopAsync(); // 0x3f5 Func
	var_95_bool = 1; // 0x3f7 MovB
	
Label_1016:
	rand(var_98_float); // 0x3f8 Func
	var_200_bool = 0; // 0x3fa PushV
	var_200_bool = 1; // 0x3fb MovB
	var_201_float = 0.6; // 0x3fc PushF
	var_202_bool = var_98_float < var_201_float; // 0x3fd LT
	if(var_202_bool == 0) goto Label_1028; // 0x3fe JumpB
	var_203_bool = 0; // 0x3ff PushV
	func_1347(var_200_bool, var_203_bool); // 0x400 Call
	if(var_203_bool == 0) goto Label_1028; // 0x402 JumpB
	var_200_bool = 0; // 0x403 MovB
	
Label_1028:
	if(var_200_bool == 0) goto Label_1042; // 0x404 JumpB
	Face(var_0_bool); // 0x405 Func
	var_209_string = "all"; // 0x407 PushS
	var_210_string = "attack_stay"; // 0x408 PushS
	PlayAnimation(var_209_string, var_210_string); // 0x409 Func
	var_211_bool = 0; var_212_float = 0; // 0x40b PushV
	var_212_float = var_78_float; // 0x40c Mov
	func_1255(var_98_float, var_211_bool, var_212_float); // 0x40d Call
	StopAsync(); // 0x40f Func
	goto Label_1085; // 0x411 Jump
	
Label_1085:
	goto Label_1094; // 0x43d Jump
	
Label_1042:
	Face(var_0_bool); // 0x412 Func
	var_378_string = "all"; // 0x414 PushS
	var_379_string = "fjump"; // 0x415 PushS
	PlayAnimation(var_378_string, var_379_string); // 0x416 Func
	WaitForAnimEnd(); // 0x418 Func
	var_380_cvector = CVector(0.0, 0.0, 0.0); // 0x41a PushVec
	SetSpeed(var_380_cvector); // 0x41b Func
	Stop(); // 0x41d Func
	StopAsync(); // 0x41f Func
	var_381_bool = 0; // 0x421 PushV
	func_1347(var_98_float, var_381_bool); // 0x422 Call
	var_382_bool = var_381_bool == 0; // 0x424 Not
	if(var_382_bool == 0) goto Label_1085; // 0x425 JumpB
	var_383_bool = 0; var_384_object = Obj(); // 0x426 PushV
	var_384_object = var_0_bool; // 0x427 MovT
	func_1857(var_383_bool, var_384_object); // 0x428 Call
	var_385_bool = var_383_bool == 0; // 0x42a Not
	if(var_385_bool == 0) goto Label_1069; // 0x42b JumpB
	goto Label_1095; // 0x42c Jump
	
Label_1069:
	GetPFPosition(var_92_cvector); // 0x42d TObjFunc
	GetPFPosition(var_93_cvector); // 0x42f Func
	var_96_cvector = var_92_cvector - var_93_cvector; // 0x431 Sub2
	var_97_float = var_96_cvector | var_96_cvector; // 0x432 Or2
	var_386_float = var_78_float * var_78_float; // 0x433 Mult
	var_387_bool = var_97_float < var_386_float; // 0x434 LT
	if(var_387_bool == 0) goto Label_1085; // 0x435 JumpB
	var_388_bool = 0; var_389_float = 0; // 0x436 PushV
	var_389_float = var_78_float; // 0x437 Mov
	func_1151(var_98_float, var_388_bool, var_389_float); // 0x438 Call
	var_390_bool = var_388_bool == 0; // 0x43a Not
	if(var_390_bool == 0) goto Label_1085; // 0x43b JumpB
	goto Label_1095; // 0x43c Jump
	
Label_1086:
	var_391_bool = 0; var_392_float = 0; // 0x43e PushV
	var_392_float = var_78_float; // 0x43f Mov
	func_1151(var_98_float, var_391_bool, var_392_float); // 0x440 Call
	var_393_bool = var_391_bool == 0; // 0x442 Not
	if(var_393_bool == 0) goto Label_1093; // 0x443 JumpB
	goto Label_1095; // 0x444 Jump
	
Label_1093:
	var_95_bool = 1; // 0x445 MovB
	
Label_958:
	var_95_bool = 1; // 0x3be MovB
	
Label_945:
	var_91_float = var_78_float; // 0x3b1 Mov
	
Label_932:
	var_394_int = 1; // 0x3a4 PushI
	var_2_bool = var_2_bool + var_394_int; // 0x3a5 Add2
	goto Label_923; // 0x3a6 Jump
	
Label_919:
	var_395_int = 1; // 0x397 PushI
	var_1_bool = var_1_bool + var_395_int; // 0x398 Add2
	goto Label_909; // 0x399 Jump
}


func_398(var_0_bool, var_1_bool)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x18e PushV
	var_0_bool = 0; // 0x18f TMovB
	var_1_bool = 0; // 0x190 TMovB
	var_37_float = 0.5; // 0x191 PushF
	rand(var_30_float, var_37_float); // 0x192 Func
	Sleep(var_30_float); // 0x194 Func
	
Label_406:
	var_38_bool = var_0_bool == 0; // 0x196 Not
	if(var_38_bool == 0) goto Label_454; // 0x197 JumpB
	var_39_bool = var_1_bool == 0; // 0x198 Not
	if(var_39_bool == 0) goto Label_426; // 0x199 JumpB
	
Label_410:
	GetPosition(var_32_cvector); // 0x19a Func
	GetCameraFarDistance(var_33_float); // 0x19c Func
	var_40_float = 2.5; // 0x19e PushF
	var_33_float = var_33_float * var_40_float; // 0x19f Mult2
	GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_33_float, var_34_bool); // 0x1a0 Func
	var_41_bool = var_34_bool; // 0x1a2 Push
	if(var_41_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_425; // 0x1a4 Jump
	
Label_425:
	goto Label_427; // 0x1a9 Jump
	
Label_427:
	FindShiftedPathTo(var_35_object, var_31_cvector); // 0x1ab Func
	var_42_bool = var_35_object != 0; // 0x1ad NullNeq
	if(var_42_bool == 0) goto Label_449; // 0x1ae JumpB
	RotatePath(var_35_object, var_36_bool); // 0x1af Func
	var_43_bool = var_36_bool; // 0x1b1 Push
	if(var_43_bool == 0) goto Label_448; // 0x1b2 JumpB
	var_44_bool = 0; // 0x1b3 PushV
	func_476(var_44_bool); // 0x1b4 Call
	FollowPath(var_35_object, var_44_bool, var_36_bool); // 0x1b6 Func
	var_35_object = 0; // 0x1b8 SetNull
	var_45_bool = var_36_bool; // 0x1b9 Push
	if(var_45_bool == 0) goto Label_448; // 0x1ba JumpB
	TaskCall(3); // 0x1bc TaskCall
	func_593(); // 0x1bd Call
	TaskReturn(); // 0x1be TaskReturn
	
Label_448:
	goto Label_452; // 0x1c0 Jump
	
Label_452:
	var_35_object = 0; // 0x1c4 SetNull
	goto Label_406; // 0x1c5 Jump
	
Label_449:
	var_95_int = 1; // 0x1c1 PushI
	Sleep(var_95_int); // 0x1c2 Func
	
Label_421:
	var_96_int = 1; // 0x1a5 PushI
	Sleep(var_96_int); // 0x1a6 Func
	goto Label_410; // 0x1a8 Jump
	
Label_426:
	var_1_bool = 0; // 0x1aa TMovB
	
Label_454:
	return 14; // 0x1c6 Return
}


func_1948()
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x79c PushV
	GetPosition(var_97_cvector); // 0x79d ObjFunc
	GetPosition(var_98_cvector); // 0x79f Func
	var_99_cvector = var_97_cvector - var_98_cvector; // 0x7a1 Sub2
	var_100_float = GetByIndex(var_99_cvector, 0); // 0x7a2 PushE
	var_101_float = GetByIndex(var_99_cvector, 2); // 0x7a3 PushE
	RotateAsync(var_100_float, var_101_float); // 0x7a4 Func
	return 6; // 0x7a6 Return
}


func_1959(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0; // 0x7a7 PushV
	IsLoaded(var_21_bool); // 0x7a8 Func
	var_19_bool = var_21_bool; // 0x7aa Mov
	return 2; // 0x7ab Return
}


func_1964(var_46_bool)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; // 0x7ac PushV
	GetPosition(var_57_cvector); // 0x7ad ObjFunc
	GetEyesHeight(var_56_float); // 0x7af ObjFunc
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x7b1 PushE
	var_64_float = var_64_float + var_56_float; // 0x7b2 Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x7b3 PopE
	GetPosition(var_58_cvector); // 0x7b4 Func
	GetEyesHeight(var_56_float); // 0x7b6 Func
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x7b8 PushE
	var_65_float = var_65_float + var_56_float; // 0x7b9 Add2
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x7ba PopE
	var_59_cvector = var_57_cvector - var_58_cvector; // 0x7bb Sub2
	var_66_float = GetByIndex(var_59_cvector, 1); // 0x7bc PushE
	var_66_float = 0; // 0x7bd MovI
	SetByIndex(var_59_cvector, 1) = var_66_float; // 0x7be PopE
	var_67_int = var_59_cvector | var_59_cvector; // 0x7bf Or
	var_68_float = sqrt(var_67_int); // 0x7c0 Sqrt
	var_59_cvector = var_59_cvector / var_59_cvector; // 0x7c1 Div2
	var_60_cvector = -var_59_cvector; // 0x7c2 Neg2
	var_69_int = 70; // 0x7c3 PushI
	var_70_float = var_59_cvector * var_69_int; // 0x7c4 Mult
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x7c5 PushV
	var_73_cvector = CVector(0.0, 1.0, 0.0); // 0x7c6 PushVec
	var_72_cvector = var_60_cvector ^ var_73_cvector; // 0x7c7 Xor2
	func_2112(var_71_cvector, var_72_cvector); // 0x7c8 Call
	var_79_int = 25; // 0x7ca PushI
	var_80_float = var_71_cvector * var_79_int; // 0x7cb Mult
	var_81_int = var_70_float + var_80_float; // 0x7cc Add
	var_82_cvector = CVector(0.0, 10.0, 0.0); // 0x7cd PushVec
	var_61_cvector = var_81_int - var_82_cvector; // 0x7ce Sub2
	var_62_cvector = var_58_cvector + var_61_cvector; // 0x7cf Add2
	IsOverrideActive(var_63_bool); // 0x7d0 Func
	var_83_bool = var_63_bool; // 0x7d2 Push
	if(var_83_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_46_bool = 0; // 0x7d4 MovB
	return 16; // 0x7d5 Return
	
Label_2006:
	StopWorld(); // 0x7d6 Func
	CameraTransit(var_62_cvector, var_60_cvector); // 0x7d8 Func
	var_84_float = GetByIndex(var_61_cvector, 0); // 0x7da PushE
	var_85_float = GetByIndex(var_61_cvector, 2); // 0x7db PushE
	Rotate(var_84_float, var_85_float); // 0x7dc Func
	CameraWaitForPlayFinish(); // 0x7de Func
	ResumeWorld(); // 0x7e0 Func
	var_46_bool = 1; // 0x7e2 MovB
	return 16; // 0x7e3 Return
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


func_476(var_44_bool)
{
	var_44_bool = 0; // 0x1dc MovB
	return 0; // 0x1dd Return
}


func_2020()
{
	CameraSwitchToNormal(); // 0x7e5 Func
	return 0; // 0x7e7 Return
}


func_2024(var_135_bool)
{
	var_137_float = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_float = 0; var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_bool = 0; // 0x7e8 PushV
	GetPosition(var_146_cvector); // 0x7e9 ObjFunc
	GetEyesHeight(var_145_float); // 0x7eb ObjFunc
	var_153_float = GetByIndex(var_146_cvector, 1); // 0x7ed PushE
	var_153_float = var_153_float + var_145_float; // 0x7ee Add2
	SetByIndex(var_146_cvector, 1) = var_153_float; // 0x7ef PopE
	GetPosition(var_147_cvector); // 0x7f0 Func
	GetEyesHeight(var_145_float); // 0x7f2 Func
	var_154_float = GetByIndex(var_147_cvector, 1); // 0x7f4 PushE
	var_154_float = var_154_float + var_145_float; // 0x7f5 Add2
	SetByIndex(var_147_cvector, 1) = var_154_float; // 0x7f6 PopE
	var_148_cvector = var_146_cvector - var_147_cvector; // 0x7f7 Sub2
	var_155_float = GetByIndex(var_148_cvector, 1); // 0x7f8 PushE
	var_155_float = 0; // 0x7f9 MovI
	SetByIndex(var_148_cvector, 1) = var_155_float; // 0x7fa PopE
	var_156_int = var_148_cvector | var_148_cvector; // 0x7fb Or
	var_157_float = sqrt(var_156_int); // 0x7fc Sqrt
	var_148_cvector = var_148_cvector / var_148_cvector; // 0x7fd Div2
	var_149_cvector = -var_148_cvector; // 0x7fe Neg2
	var_158_int = 70; // 0x7ff PushI
	var_159_float = var_148_cvector * var_158_int; // 0x800 Mult
	var_160_cvector = CVector(0.0, 10.0, 0.0); // 0x801 PushVec
	var_150_cvector = var_159_float - var_160_cvector; // 0x802 Sub2
	var_151_cvector = var_147_cvector + var_150_cvector; // 0x803 Add2
	IsOverrideActive(var_152_bool); // 0x804 Func
	var_161_bool = var_152_bool; // 0x806 Push
	if(var_161_bool == 0) goto Label_2058; // 0x807 JumpB
	var_135_bool = 0; // 0x808 MovB
	return 16; // 0x809 Return
	
Label_2058:
	StopWorld(); // 0x80a Func
	CameraTransit(var_151_cvector, var_149_cvector); // 0x80c Func
	var_162_float = GetByIndex(var_150_cvector, 0); // 0x80e PushE
	var_163_float = GetByIndex(var_150_cvector, 2); // 0x80f PushE
	Rotate(var_162_float, var_163_float); // 0x810 Func
	CameraWaitForPlayFinish(); // 0x812 Func
	ResumeWorld(); // 0x814 Func
	var_135_bool = 1; // 0x816 MovB
	return 16; // 0x817 Return
}


func_1529(var_0_bool)
{
	var_0_bool = 1; // 0x5f9 TMovB
	var_18_int = 0; // 0x5fa PushI
	KillTimer(var_18_int); // 0x5fb Func
	Stop(); // 0x5fd Func
	return 0; // 0x5ff Return
}


