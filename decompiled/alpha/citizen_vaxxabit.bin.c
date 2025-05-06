task_0_event_11(var_0_bool, var_1_int, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	StopAnimation(); // 0x10 Func
	StopTrade(); // 0x12 Func
	var_0_bool = 1; // 0x14 TMovB
	return 0; // 0x15 Return
}


task_1_event_0(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x25 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x26 PushV
	var_20_object = var_16_bool; // 0x27 Mov
	func_1966(var_20_object); // 0x28 Call
	var_18_int = var_19_int; // 0x29 Mov
	var_21_int = 0; // 0x2b PushI
	var_22_bool = var_18_int > var_21_int; // 0x2c GT
	if(var_22_bool == 0) goto Label_50; // 0x2d JumpB
	var_23_object = Obj(); // 0x2e PushV
	var_23_object = var_16_bool; // 0x2f Mov
	func_1969(var_23_object); // 0x30 Call
	
Label_50:
	return 2; // 0x32 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_1975(); // 0x34 Call
	return 0; // 0x36 Return
}


task_1_event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	return 0; // 0xa5 Return
}


task_1_event_16(var_0_bool, var_1_object, var_2_string, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	return 0; // 0xa7 Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	return 0; // 0xa9 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xc2 PushV
	var_19_int = 0; var_20_object = Obj(); // 0xc3 PushV
	var_20_object = var_16_bool; // 0xc4 Mov
	func_1966(var_20_object); // 0xc5 Call
	var_18_int = var_19_int; // 0xc6 Mov
	var_21_int = 0; // 0xc8 PushI
	var_22_bool = var_18_int > var_21_int; // 0xc9 GT
	if(var_22_bool == 0) goto Label_213; // 0xca JumpB
	var_23_int = 1; // 0xcb PushI
	var_24_bool = var_18_int > var_23_int; // 0xcc GT
	if(var_24_bool == 0) goto Label_209; // 0xcd JumpB
	func_333(var_18_int); // 0xcf Call
	
Label_209:
	var_26_object = Obj(); // 0xd1 PushV
	var_26_object = var_16_bool; // 0xd2 Mov
	func_1969(var_26_object); // 0xd3 Call
	
Label_213:
	return 2; // 0xd5 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xd6 PushV
	var_19_int = 0; var_20_object = Obj(); // 0xd7 PushV
	var_20_object = var_16_bool; // 0xd8 Mov
	func_1920(var_19_int, var_20_object); // 0xd9 Call
	var_18_int = var_19_int; // 0xda Mov
	var_55_int = 0; // 0xdc PushI
	var_56_bool = var_18_int > var_55_int; // 0xdd GT
	if(var_56_bool == 0) goto Label_233; // 0xde JumpB
	var_57_int = 1; // 0xdf PushI
	var_58_bool = var_18_int > var_57_int; // 0xe0 GT
	if(var_58_bool == 0) goto Label_229; // 0xe1 JumpB
	func_333(var_18_int); // 0xe3 Call
	
Label_229:
	var_60_object = Obj(); // 0xe5 PushV
	var_60_object = var_16_bool; // 0xe6 Mov
	func_1930(var_60_object); // 0xe7 Call
	
Label_233:
	return 2; // 0xe9 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xea PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); // 0xeb PushV
	var_21_object = var_16_string; // 0xec Mov
	var_22_object = var_17_bool; // 0xed Mov
	func_2257(var_20_bool, var_21_object, var_22_object); // 0xee Call
	if(var_20_bool == 0) goto Label_259; // 0xf0 JumpB
	var_55_int = 0; var_56_object = Obj(); // 0xf1 PushV
	var_56_object = var_16_string; // 0xf2 Mov
	func_1938(var_55_int, var_56_object); // 0xf3 Call
	var_19_int = var_55_int; // 0xf4 Mov
	var_85_int = 0; // 0xf6 PushI
	var_86_bool = var_19_int > var_85_int; // 0xf7 GT
	if(var_86_bool == 0) goto Label_259; // 0xf8 JumpB
	var_87_int = 1; // 0xf9 PushI
	var_88_bool = var_19_int > var_87_int; // 0xfa GT
	if(var_88_bool == 0) goto Label_255; // 0xfb JumpB
	func_333(var_19_int); // 0xfd Call
	
Label_255:
	var_90_object = Obj(); // 0xff PushV
	var_90_object = var_16_string; // 0x100 Mov
	func_1948(var_90_object); // 0x101 Call
	
Label_259:
	return 2; // 0x103 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x104 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x105 PushV
	var_20_object = var_16_bool; // 0x106 Mov
	func_1956(var_20_object); // 0x107 Call
	var_18_int = var_19_int; // 0x108 Mov
	var_21_int = 0; // 0x10a PushI
	var_22_bool = var_18_int > var_21_int; // 0x10b GT
	if(var_22_bool == 0) goto Label_279; // 0x10c JumpB
	var_23_int = 1; // 0x10d PushI
	var_24_bool = var_18_int > var_23_int; // 0x10e GT
	if(var_24_bool == 0) goto Label_275; // 0x10f JumpB
	func_333(var_18_int); // 0x111 Call
	
Label_275:
	var_26_object = Obj(); // 0x113 PushV
	var_26_object = var_16_bool; // 0x114 Mov
	func_1959(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x118 PushV
	var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x119 PushV
	var_21_string = var_17_bool; // 0x11a Mov
	var_22_object = var_16_string; // 0x11b Mov
	func_1961(var_22_object); // 0x11c Call
	var_19_int = var_20_int; // 0x11d Mov
	var_23_int = 0; // 0x11f PushI
	var_24_bool = var_19_int > var_23_int; // 0x120 GT
	if(var_24_bool == 0) goto Label_301; // 0x121 JumpB
	var_25_int = 1; // 0x122 PushI
	var_26_bool = var_19_int > var_25_int; // 0x123 GT
	if(var_26_bool == 0) goto Label_296; // 0x124 JumpB
	func_333(var_19_int); // 0x126 Call
	
Label_296:
	var_28_string = ""; var_29_object = Obj(); // 0x128 PushV
	var_28_string = var_17_bool; // 0x129 Mov
	var_29_object = var_16_string; // 0x12a Mov
	func_1964(); // 0x12b Call
	
Label_301:
	return 2; // 0x12d Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_object = Obj(); // 0x12f PushV
	var_17_object = var_16_bool; // 0x130 Mov
	func_358(var_16_bool, var_17_object); // 0x131 Call
	return 0; // 0x133 Return
}


task_2_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_object = Obj(); // 0x135 PushV
	var_17_object = var_16_bool; // 0x136 Mov
	func_358(var_16_bool, var_17_object); // 0x137 Call
	return 0; // 0x139 Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 110; // 0x13b PushI
	var_18_bool = var_16_bool != var_17_int; // 0x13c Neq
	if(var_18_bool == 0) goto Label_319; // 0x13d JumpB
	return 0; // 0x13e Return
	
Label_319:
	var_2_bool = 0; // 0x13f TMovB
	var_19_int = 110; // 0x140 PushI
	KillTimer(var_19_int); // 0x141 Func
	ResetAAS(); // 0x143 Func
	return 0; // 0x145 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_333(var_15_bool); // 0x147 Call
	func_1975(); // 0x14a Call
	return 0; // 0x14c Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_333(var_16_bool); // 0x15f Call
	var_18_object = Obj(); // 0x161 PushV
	var_18_object = var_16_bool; // 0x162 Mov
	func_1865(); // 0x163 Call
	return 0; // 0x165 Return
}


task_2_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	RequestClearPath(var_16_bool); // 0x1c8 Func
	return 0; // 0x1ca Return
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	Stop(); // 0x1cb Func
	return 0; // 0x1cd Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x1de PushV
	var_19_int = 0; var_20_object = Obj(); // 0x1df PushV
	var_20_object = var_16_bool; // 0x1e0 Mov
	func_1966(var_20_object); // 0x1e1 Call
	var_18_int = var_19_int; // 0x1e2 Mov
	var_21_int = 0; // 0x1e4 PushI
	var_22_bool = var_18_int > var_21_int; // 0x1e5 GT
	if(var_22_bool == 0) goto Label_497; // 0x1e6 JumpB
	var_23_int = 1; // 0x1e7 PushI
	var_24_bool = var_18_int > var_23_int; // 0x1e8 GT
	if(var_24_bool == 0) goto Label_493; // 0x1e9 JumpB
	func_662(); // 0x1eb Call
	
Label_493:
	var_25_object = Obj(); // 0x1ed PushV
	var_25_object = var_16_bool; // 0x1ee Mov
	func_1969(var_25_object); // 0x1ef Call
	
Label_497:
	return 2; // 0x1f1 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x1f2 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x1f3 PushV
	var_20_object = var_16_bool; // 0x1f4 Mov
	func_1920(var_19_int, var_20_object); // 0x1f5 Call
	var_18_int = var_19_int; // 0x1f6 Mov
	var_55_int = 0; // 0x1f8 PushI
	var_56_bool = var_18_int > var_55_int; // 0x1f9 GT
	if(var_56_bool == 0) goto Label_517; // 0x1fa JumpB
	var_57_int = 1; // 0x1fb PushI
	var_58_bool = var_18_int > var_57_int; // 0x1fc GT
	if(var_58_bool == 0) goto Label_513; // 0x1fd JumpB
	func_662(); // 0x1ff Call
	
Label_513:
	var_59_object = Obj(); // 0x201 PushV
	var_59_object = var_16_bool; // 0x202 Mov
	func_1930(var_59_object); // 0x203 Call
	
Label_517:
	return 2; // 0x205 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x206 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); // 0x207 PushV
	var_21_object = var_16_string; // 0x208 Mov
	var_22_object = var_17_bool; // 0x209 Mov
	func_2257(var_20_bool, var_21_object, var_22_object); // 0x20a Call
	if(var_20_bool == 0) goto Label_543; // 0x20c JumpB
	var_55_int = 0; var_56_object = Obj(); // 0x20d PushV
	var_56_object = var_16_string; // 0x20e Mov
	func_1938(var_55_int, var_56_object); // 0x20f Call
	var_19_int = var_55_int; // 0x210 Mov
	var_85_int = 0; // 0x212 PushI
	var_86_bool = var_19_int > var_85_int; // 0x213 GT
	if(var_86_bool == 0) goto Label_543; // 0x214 JumpB
	var_87_int = 1; // 0x215 PushI
	var_88_bool = var_19_int > var_87_int; // 0x216 GT
	if(var_88_bool == 0) goto Label_539; // 0x217 JumpB
	func_662(); // 0x219 Call
	
Label_539:
	var_89_object = Obj(); // 0x21b PushV
	var_89_object = var_16_string; // 0x21c Mov
	func_1948(var_89_object); // 0x21d Call
	
Label_543:
	return 2; // 0x21f Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x220 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x221 PushV
	var_20_object = var_16_bool; // 0x222 Mov
	func_1956(var_20_object); // 0x223 Call
	var_18_int = var_19_int; // 0x224 Mov
	var_21_int = 0; // 0x226 PushI
	var_22_bool = var_18_int > var_21_int; // 0x227 GT
	if(var_22_bool == 0) goto Label_563; // 0x228 JumpB
	var_23_int = 1; // 0x229 PushI
	var_24_bool = var_18_int > var_23_int; // 0x22a GT
	if(var_24_bool == 0) goto Label_559; // 0x22b JumpB
	func_662(); // 0x22d Call
	
Label_559:
	var_25_object = Obj(); // 0x22f PushV
	var_25_object = var_16_bool; // 0x230 Mov
	func_1959(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x234 PushV
	var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x235 PushV
	var_21_string = var_17_bool; // 0x236 Mov
	var_22_object = var_16_string; // 0x237 Mov
	func_1961(var_22_object); // 0x238 Call
	var_19_int = var_20_int; // 0x239 Mov
	var_23_int = 0; // 0x23b PushI
	var_24_bool = var_19_int > var_23_int; // 0x23c GT
	if(var_24_bool == 0) goto Label_585; // 0x23d JumpB
	var_25_int = 1; // 0x23e PushI
	var_26_bool = var_19_int > var_25_int; // 0x23f GT
	if(var_26_bool == 0) goto Label_580; // 0x240 JumpB
	func_662(); // 0x242 Call
	
Label_580:
	var_27_string = ""; var_28_object = Obj(); // 0x244 PushV
	var_27_string = var_17_bool; // 0x245 Mov
	var_28_object = var_16_string; // 0x246 Mov
	func_1964(); // 0x247 Call
	
Label_585:
	return 2; // 0x249 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_662(); // 0x24b Call
	func_1975(); // 0x24e Call
	return 0; // 0x250 Return
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x2d3 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x2d4 PushV
	var_20_object = var_16_bool; // 0x2d5 Mov
	func_1966(var_20_object); // 0x2d6 Call
	var_18_int = var_19_int; // 0x2d7 Mov
	var_21_int = 0; // 0x2d9 PushI
	var_22_bool = var_18_int > var_21_int; // 0x2da GT
	if(var_22_bool == 0) goto Label_742; // 0x2db JumpB
	var_23_int = 1; // 0x2dc PushI
	var_24_bool = var_18_int > var_23_int; // 0x2dd GT
	if(var_24_bool == 0) goto Label_738; // 0x2de JumpB
	func_831(); // 0x2e0 Call
	
Label_738:
	var_27_object = Obj(); // 0x2e2 PushV
	var_27_object = var_16_bool; // 0x2e3 Mov
	func_1969(var_27_object); // 0x2e4 Call
	
Label_742:
	return 2; // 0x2e6 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x2e7 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x2e8 PushV
	var_20_object = var_16_bool; // 0x2e9 Mov
	func_1920(var_19_int, var_20_object); // 0x2ea Call
	var_18_int = var_19_int; // 0x2eb Mov
	var_55_int = 0; // 0x2ed PushI
	var_56_bool = var_18_int > var_55_int; // 0x2ee GT
	if(var_56_bool == 0) goto Label_762; // 0x2ef JumpB
	var_57_int = 1; // 0x2f0 PushI
	var_58_bool = var_18_int > var_57_int; // 0x2f1 GT
	if(var_58_bool == 0) goto Label_758; // 0x2f2 JumpB
	func_831(); // 0x2f4 Call
	
Label_758:
	var_61_object = Obj(); // 0x2f6 PushV
	var_61_object = var_16_bool; // 0x2f7 Mov
	func_1930(var_61_object); // 0x2f8 Call
	
Label_762:
	return 2; // 0x2fa Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2fb PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); // 0x2fc PushV
	var_21_object = var_16_string; // 0x2fd Mov
	var_22_object = var_17_bool; // 0x2fe Mov
	func_2257(var_20_bool, var_21_object, var_22_object); // 0x2ff Call
	if(var_20_bool == 0) goto Label_788; // 0x301 JumpB
	var_55_int = 0; var_56_object = Obj(); // 0x302 PushV
	var_56_object = var_16_string; // 0x303 Mov
	func_1938(var_55_int, var_56_object); // 0x304 Call
	var_19_int = var_55_int; // 0x305 Mov
	var_85_int = 0; // 0x307 PushI
	var_86_bool = var_19_int > var_85_int; // 0x308 GT
	if(var_86_bool == 0) goto Label_788; // 0x309 JumpB
	var_87_int = 1; // 0x30a PushI
	var_88_bool = var_19_int > var_87_int; // 0x30b GT
	if(var_88_bool == 0) goto Label_784; // 0x30c JumpB
	func_831(); // 0x30e Call
	
Label_784:
	var_91_object = Obj(); // 0x310 PushV
	var_91_object = var_16_string; // 0x311 Mov
	func_1948(var_91_object); // 0x312 Call
	
Label_788:
	return 2; // 0x314 Return
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x315 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x316 PushV
	var_20_object = var_16_bool; // 0x317 Mov
	func_1956(var_20_object); // 0x318 Call
	var_18_int = var_19_int; // 0x319 Mov
	var_21_int = 0; // 0x31b PushI
	var_22_bool = var_18_int > var_21_int; // 0x31c GT
	if(var_22_bool == 0) goto Label_808; // 0x31d JumpB
	var_23_int = 1; // 0x31e PushI
	var_24_bool = var_18_int > var_23_int; // 0x31f GT
	if(var_24_bool == 0) goto Label_804; // 0x320 JumpB
	func_831(); // 0x322 Call
	
Label_804:
	var_27_object = Obj(); // 0x324 PushV
	var_27_object = var_16_bool; // 0x325 Mov
	func_1959(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x329 PushV
	var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x32a PushV
	var_21_string = var_17_bool; // 0x32b Mov
	var_22_object = var_16_string; // 0x32c Mov
	func_1961(var_22_object); // 0x32d Call
	var_19_int = var_20_int; // 0x32e Mov
	var_23_int = 0; // 0x330 PushI
	var_24_bool = var_19_int > var_23_int; // 0x331 GT
	if(var_24_bool == 0) goto Label_830; // 0x332 JumpB
	var_25_int = 1; // 0x333 PushI
	var_26_bool = var_19_int > var_25_int; // 0x334 GT
	if(var_26_bool == 0) goto Label_825; // 0x335 JumpB
	func_831(); // 0x337 Call
	
Label_825:
	var_29_string = ""; var_30_object = Obj(); // 0x339 PushV
	var_29_string = var_17_bool; // 0x33a Mov
	var_30_object = var_16_string; // 0x33b Mov
	func_1964(); // 0x33c Call
	
Label_830:
	return 2; // 0x33e Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831(); // 0x34c Call
	var_19_object = Obj(); // 0x34e PushV
	var_19_object = var_16_bool; // 0x34f Mov
	func_1865(); // 0x350 Call
	return 0; // 0x352 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x353 PushV
	var_21_int = 111; // 0x354 PushI
	var_22_bool = var_16_bool != var_21_int; // 0x355 Neq
	if(var_22_bool == 0) goto Label_856; // 0x356 JumpB
	return 4; // 0x357 Return
	
Label_856:
	var_23_bool = 0; var_24_object = Obj(); // 0x358 PushV
	var_24_object = var_0_bool; // 0x359 MovT
	func_1526(var_23_bool, var_24_object); // 0x35a Call
	var_57_bool = var_23_bool == 0; // 0x35c Not
	if(var_57_bool == 0) goto Label_866; // 0x35d JumpB
	func_831(); // 0x35f Call
	return 4; // 0x361 Return
	
Label_866:
	GetDirection(var_19_cvector); // 0x362 Func
	var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0x364 PushV
	var_61_object = var_0_bool; // 0x365 MovT
	func_1458(var_61_object); // 0x366 Call
	var_20_cvector = var_60_cvector; // 0x367 Mov
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x369 PushV
	var_67_cvector = var_19_cvector; // 0x36a Mov
	var_68_cvector = var_20_cvector; // 0x36b Mov
	func_1818(var_66_float, var_67_cvector, var_68_cvector); // 0x36c Call
	var_90_float = 0.5; // 0x36e PushF
	var_91_bool = var_66_float < var_90_float; // 0x36f LT
	if(var_91_bool == 0) goto Label_885; // 0x370 JumpB
	var_92_object = Obj(); // 0x371 PushV
	var_92_object = var_0_bool; // 0x372 MovT
	func_1617(); // 0x373 Call
	
Label_885:
	return 4; // 0x375 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_831(); // 0x377 Call
	func_1975(); // 0x37a Call
	return 0; // 0x37c Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_1074(var_15_bool); // 0x39a Call
	func_1975(); // 0x39d Call
	return 0; // 0x39f Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x3fe PushV
	var_25_int = 120; // 0x3ff PushI
	var_26_bool = var_16_bool != var_25_int; // 0x400 Neq
	if(var_26_bool == 0) goto Label_1027; // 0x401 JumpB
	return 8; // 0x402 Return
	
Label_1027:
	var_27_bool = var_0_bool == 0; // 0x403 NullEq
	if(var_27_bool == 0) goto Label_1036; // 0x404 JumpB
	Stop(); // 0x405 Func
	var_28_int = 1; // 0x407 PushI
	KillTimer(var_28_int); // 0x408 Func
	var_2_bool = 1; // 0x40a TMovB
	goto Label_1073; // 0x40b Jump
	
Label_1073:
	return 8; // 0x431 Return
	
Label_1036:
	GetDirection(var_21_cvector); // 0x40c Func
	var_29_float = 7000.0; // 0x40e PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x40f Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x411 PushV
	var_31_float = 1.74533; // 0x412 MovF
	func_928(var_30_cvector, var_31_float); // 0x413 Call
	var_23_cvector = var_30_cvector; // 0x414 Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x416 Or2
	var_60_bool = 0; // 0x417 PushV
	var_60_bool = 0; // 0x418 MovB
	var_61_float = 10000.0; // 0x419 PushF
	var_62_bool = var_24_float >= var_61_float; // 0x41a GE
	if(var_62_bool == 0) goto Label_1066; // 0x41b JumpB
	var_63_bool = 0; // 0x41c PushV
	var_63_bool = 1; // 0x41d MovB
	var_64_float = var_22_float * var_22_float; // 0x41e Mult
	var_65_float = 2.25; // 0x41f PushF
	var_66_float = var_64_float * var_65_float; // 0x420 Mult
	var_67_bool = var_24_float >= var_66_float; // 0x421 GE
	if(var_67_bool == 0) goto Label_1064; // 0x422 JumpB
	var_68_bool = 0; // 0x423 PushV
	func_1090(var_63_bool, var_68_bool); // 0x424 Call
	if(var_68_bool == 0) goto Label_1064; // 0x426 JumpB
	var_63_bool = 0; // 0x427 MovB
	
Label_1064:
	if(var_63_bool == 0) goto Label_1066; // 0x428 JumpB
	var_60_bool = 1; // 0x429 MovB
	
Label_1066:
	if(var_60_bool == 0) goto Label_1073; // 0x42a JumpB
	Stop(); // 0x42b Func
	var_88_cvector = CVector(0,0,0); // 0x42d PushV
	func_1453(var_88_cvector); // 0x42e Call
	var_1_bool = var_88_cvector + var_23_cvector; // 0x430 Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1074(var_16_bool); // 0x43b Call
	var_18_object = Obj(); // 0x43d PushV
	var_18_object = var_16_bool; // 0x43e Mov
	func_1865(); // 0x43f Call
	return 0; // 0x441 Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x4b0 PushV
	var_25_int = 120; // 0x4b1 PushI
	var_26_bool = var_16_bool != var_25_int; // 0x4b2 Neq
	if(var_26_bool == 0) goto Label_1205; // 0x4b3 JumpB
	return 8; // 0x4b4 Return
	
Label_1205:
	var_27_bool = var_0_bool == 0; // 0x4b5 NullEq
	if(var_27_bool == 0) goto Label_1214; // 0x4b6 JumpB
	Stop(); // 0x4b7 Func
	var_28_int = 1; // 0x4b9 PushI
	KillTimer(var_28_int); // 0x4ba Func
	var_2_bool = 1; // 0x4bc TMovB
	goto Label_1251; // 0x4bd Jump
	
Label_1251:
	return 8; // 0x4e3 Return
	
Label_1214:
	GetDirection(var_21_cvector); // 0x4be Func
	var_29_float = 7000.0; // 0x4c0 PushF
	FindDirLength(var_22_float, var_21_cvector, var_29_float); // 0x4c1 Func
	var_30_cvector = CVector(0,0,0); var_31_float = 0; // 0x4c3 PushV
	var_31_float = 1.74533; // 0x4c4 MovF
	func_1106(var_30_cvector, var_31_float); // 0x4c5 Call
	var_23_cvector = var_30_cvector; // 0x4c6 Mov
	var_24_float = var_23_cvector | var_23_cvector; // 0x4c8 Or2
	var_60_bool = 0; // 0x4c9 PushV
	var_60_bool = 0; // 0x4ca MovB
	var_61_float = 10000.0; // 0x4cb PushF
	var_62_bool = var_24_float >= var_61_float; // 0x4cc GE
	if(var_62_bool == 0) goto Label_1244; // 0x4cd JumpB
	var_63_bool = 0; // 0x4ce PushV
	var_63_bool = 1; // 0x4cf MovB
	var_64_float = var_22_float * var_22_float; // 0x4d0 Mult
	var_65_float = 2.25; // 0x4d1 PushF
	var_66_float = var_64_float * var_65_float; // 0x4d2 Mult
	var_67_bool = var_24_float >= var_66_float; // 0x4d3 GE
	if(var_67_bool == 0) goto Label_1242; // 0x4d4 JumpB
	var_68_bool = 0; // 0x4d5 PushV
	func_1268(var_63_bool, var_68_bool); // 0x4d6 Call
	if(var_68_bool == 0) goto Label_1242; // 0x4d8 JumpB
	var_63_bool = 0; // 0x4d9 MovB
	
Label_1242:
	if(var_63_bool == 0) goto Label_1244; // 0x4da JumpB
	var_60_bool = 1; // 0x4db MovB
	
Label_1244:
	if(var_60_bool == 0) goto Label_1251; // 0x4dc JumpB
	Stop(); // 0x4dd Func
	var_88_cvector = CVector(0,0,0); // 0x4df PushV
	func_1453(var_88_cvector); // 0x4e0 Call
	var_1_bool = var_88_cvector + var_23_cvector; // 0x4e2 Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1252(var_16_bool); // 0x4ed Call
	var_18_object = Obj(); // 0x4ef PushV
	var_18_object = var_16_bool; // 0x4f0 Mov
	func_1865(); // 0x4f1 Call
	return 0; // 0x4f3 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int)
{
	var_18_int = 1; // 0x589 PushI
	if(var_18_int == 0) goto Label_1452; // 0x58a JumpB
	func_1774(); // 0x58c Call
	var_20_int = 16505; // 0x58e PushI
	var_21_bool = var_16_int == var_20_int; // 0x58f Eq
	if(var_21_bool == 0) goto Label_1440; // 0x590 JumpB
	var_22_string = ""; // 0x591 PushV
	var_22_string = "Neutral"; // 0x592 MovS
	func_1400(var_17_int, var_22_string); // 0x593 Call
	var_37_int = 15228; // 0x595 PushI
	SetMessage(var_37_int); // 0x596 TObjFunc
	ClearReplies(); // 0x598 TObjFunc
	var_38_int = 15229; // 0x59a PushI
	var_39_int = -1; // 0x59b PushI
	var_40_int = 16506; // 0x59c PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0x59d TObjFunc
	return 0; // 0x59f Return
	
Label_1440:
	var_3_bool = 1; // 0x5a0 TMovB
	var_41_bool = 0; // 0x5a1 PushV
	func_2207(var_41_bool); // 0x5a2 Call
	if(var_41_bool == 0) goto Label_1448; // 0x5a4 JumpB
	lshStopAnimation(); // 0x5a5 Func
	goto Label_1450; // 0x5a7 Jump
	
Label_1450:
	return 0; // 0x5aa Return
	
Label_1448:
	StopAnimation(); // 0x5a8 Func
	
Label_1452:
	return 0; // 0x5ac Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x73c PushV
	var_20_string = "health"; // 0x73d PushS
	var_21_bool = var_17_string == var_20_string; // 0x73e Eq
	if(var_21_bool == 0) goto Label_1864; // 0x73f JumpB
	var_22_string = "health"; // 0x740 PushS
	GetProperty(var_22_string, var_19_float); // 0x741 Func
	var_23_int = 0; // 0x743 PushI
	var_24_bool = var_19_float <= var_23_int; // 0x744 LE
	if(var_24_bool == 0) goto Label_1864; // 0x745 JumpB
	SignalDeath(var_16_object); // 0x746 Func
	
Label_1864:
	return 2; // 0x748 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0x74a PushV
	var_17_object = var_16_object; // 0x74b Mov
	func_1844(var_17_object); // 0x74c Call
	return 0; // 0x74e Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x750 PushV
	var_20_object = var_16_object; // 0x751 Mov
	var_21_int = var_17_int; // 0x752 Mov
	var_22_float = var_18_float; // 0x753 Mov
	func_1550(var_21_int, var_22_float); // 0x754 Call
	return 0; // 0x756 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 1; // 0xaa PushB
	SensePlayerOnly(var_16_bool); // 0xab Func
	func_2209(); // 0xae Call
	func_185(); // 0xb1 Call
	
Label_179:
	var_2_bool = 0; // 0xb3 TMovB
	func_398(var_14_string, var_15_bool); // 0xb5 Call
	goto Label_179; // 0xb7 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	WaitForAnimEnd(); // 0x4 Func
	var_166_string = "all"; // 0x6 PushS
	var_167_string = "idle"; // 0x7 PushS
	PlayAnimation(var_166_string, var_167_string); // 0x8 Func
	var_168_bool = var_0_bool; // 0xa PushT
	if(var_168_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_1550(var_20_object, var_21_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x60e PushV
	var_43_bool = 0; // 0x60f PushV
	var_43_bool = 0; // 0x610 MovB
	var_44_int = 4; // 0x611 PushI
	var_45_bool = var_21_int != var_44_int; // 0x612 Neq
	if(var_45_bool == 0) goto Label_1560; // 0x613 JumpB
	var_46_int = 5; // 0x614 PushI
	var_47_bool = var_21_int != var_46_int; // 0x615 Neq
	if(var_47_bool == 0) goto Label_1560; // 0x616 JumpB
	var_43_bool = 1; // 0x617 MovB
	
Label_1560:
	if(var_43_bool == 0) goto Label_1579; // 0x618 JumpB
	GetScene(var_33_object); // 0x619 Func
	GetPosition(var_35_cvector); // 0x61b Func
	GetEyesHeight(var_36_float); // 0x61d Func
	var_48_float = GetByIndex(var_35_cvector, 1); // 0x61f PushE
	var_49_int = 2; // 0x620 PushI
	var_50_float = var_36_float / var_49_int; // 0x621 Div
	var_48_float = var_48_float + var_50_float; // 0x622 Add2
	SetByIndex(var_35_cvector, 1) = var_48_float; // 0x623 PopE
	var_51_string = "scripted"; // 0x624 PushS
	var_52_cvector = CVector(0.0, 0.0, 1.0); // 0x625 PushVec
	var_53_string = "blood.xml"; // 0x626 PushS
	AddActorByType(var_34_object, var_51_string, var_33_object, var_35_cvector, var_52_cvector, var_53_string); // 0x627 Func
	var_34_object = 0; // 0x629 SetNull
	var_33_object = 0; // 0x62a SetNull
	
Label_1579:
	var_54_bool = var_20_object == 0; // 0x62b NullEq
	if(var_54_bool == 0) goto Label_1582; // 0x62c JumpB
	return 20; // 0x62d Return
	
Label_1582:
	GetSecondaryAnimationType(var_37_int); // 0x62e Func
	var_55_int = 0; // 0x630 PushI
	var_56_bool = var_37_int < var_55_int; // 0x631 LT
	if(var_56_bool == 0) goto Label_1588; // 0x632 JumpB
	return 20; // 0x633 Return
	
Label_1588:
	GetPosition(var_38_cvector); // 0x634 ObjFunc
	GetPosition(var_39_cvector); // 0x636 Func
	GetDirection(var_40_cvector); // 0x638 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x63a Sub2
	var_57_float = GetByIndex(var_41_cvector, 0); // 0x63b PushE
	var_58_float = GetByIndex(var_40_cvector, 0); // 0x63c PushE
	var_59_float = var_57_float * var_58_float; // 0x63d Mult
	var_60_float = GetByIndex(var_41_cvector, 2); // 0x63e PushE
	var_61_float = GetByIndex(var_40_cvector, 2); // 0x63f PushE
	var_62_float = var_60_float * var_61_float; // 0x640 Mult
	var_63_int = var_59_float + var_62_float; // 0x641 Add
	var_64_int = 0; // 0x642 PushI
	var_65_bool = var_63_int >= var_64_int; // 0x643 GE
	if(var_65_bool == 0) goto Label_1607; // 0x644 JumpB
	var_42_string = "fhit"; // 0x645 MovS
	goto Label_1608; // 0x646 Jump
	
Label_1608:
	var_66_string = "hit_react"; // 0x648 PushS
	var_67_string = "1"; // 0x649 PushS
	var_68_int = var_42_string + var_67_string; // 0x64a Add
	var_69_string = "2"; // 0x64b PushS
	var_70_int = var_42_string + var_69_string; // 0x64c Add
	var_71_int = -10; // 0x64d PushI
	FadeSecondaryAnimation(var_66_string, var_68_int, var_70_int, var_71_int); // 0x64e Func
	return 20; // 0x650 Return
	
Label_1607:
	var_42_string = "bhit"; // 0x647 MovS
}


func_22(var_18_object)
{
	EventDisable(0); // 0x17 EventDisable
	var_19_object = Obj(); // 0x18 PushV
	var_19_object = var_18_object; // 0x19 Mov
	func_55(var_19_object); // 0x1a Call
	var_69_object = Obj(); // 0x1c PushV
	var_69_object = var_18_object; // 0x1d Mov
	func_2303(); // 0x1e Call
	EventEnable(0); // 0x20 EventEnable
	
Label_33:
	Hold(); // 0x21 Func
	goto Label_33; // 0x23 Jump
}


func_1074(var_2_bool)
{
	Stop(); // 0x432 Func
	var_17_int = 120; // 0x434 PushI
	KillTimer(var_17_int); // 0x435 Func
	var_2_bool = 1; // 0x437 TMovB
	return 0; // 0x438 Return
}


func_55(var_19_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); // 0x37 PushV
	var_40_bool = var_19_object == 0; // 0x38 NullEq
	if(var_40_bool == 0) goto Label_63; // 0x39 JumpB
	var_41_string = ""; // 0x3a PushV
	var_41_string = "fdie"; // 0x3b MovS
	func_142(var_41_string); // 0x3c Call
	goto Label_141; // 0x3e Jump
	
Label_141:
	return 20; // 0x8d Return
	
Label_63:
	GetPosition(var_30_cvector); // 0x3f ObjFunc
	GetPosition(var_31_cvector); // 0x41 Func
	GetDirection(var_32_cvector); // 0x43 Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x45 Sub2
	var_44_float = GetByIndex(var_33_cvector, 0); // 0x46 PushE
	var_45_float = GetByIndex(var_32_cvector, 0); // 0x47 PushE
	var_46_float = var_44_float * var_45_float; // 0x48 Mult
	var_47_float = GetByIndex(var_33_cvector, 2); // 0x49 PushE
	var_48_float = GetByIndex(var_32_cvector, 2); // 0x4a PushE
	var_49_float = var_47_float * var_48_float; // 0x4b Mult
	var_50_int = var_46_float + var_49_float; // 0x4c Add
	var_51_int = 0; // 0x4d PushI
	var_52_bool = var_50_int >= var_51_int; // 0x4e GE
	if(var_52_bool == 0) goto Label_82; // 0x4f JumpB
	var_34_string = "fdie"; // 0x50 MovS
	goto Label_83; // 0x51 Jump
	
Label_83:
	RemoveRTEnvelope(); // 0x53 Func
	SetDeathState(); // 0x55 Func
	Stop(); // 0x57 Func
	StopAsync(); // 0x59 Func
	var_35_object = var_19_object; // 0x5b Mov
	var_53_string = "GetScriptProperty"; // 0x5c PushS
	var_54_int = 2; // 0x5d PushI
	var_55_bool = IsFuncExist(var_19_object, var_53_string, var_54_int); // 0x5e FuncExist
	if(var_55_bool == 0) goto Label_107; // 0x5f JumpB
	var_56_string = "Owner"; // 0x60 PushS
	HasScriptProperty(var_36_bool, var_56_string); // 0x61 ObjFunc
	var_57_bool = var_36_bool; // 0x63 Push
	if(var_57_bool == 0) goto Label_107; // 0x64 JumpB
	var_58_string = "Owner"; // 0x65 PushS
	GetScriptProperty(var_35_object, var_58_string); // 0x66 ObjFunc
	var_59_bool = var_35_object == 0; // 0x68 NullEq
	if(var_59_bool == 0) goto Label_107; // 0x69 JumpB
	var_35_object = var_19_object; // 0x6a Mov
	
Label_107:
	var_60_string = "@GetEyesHeight"; // 0x6b PushS
	var_61_int = 1; // 0x6c PushI
	var_62_bool = IsFuncExist(var_35_object, var_60_string, var_61_int); // 0x6d FuncExist
	if(var_62_bool == 0) goto Label_122; // 0x6e JumpB
	GetEyesHeight(var_38_float); // 0x6f ObjFunc
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x71 MovV
	var_63_float = GetByIndex(var_39_cvector, 1); // 0x72 PushE
	var_63_float = var_38_float; // 0x73 Mov
	SetByIndex(var_39_cvector, 1) = var_63_float; // 0x74 PopE
	var_64_string = "head"; // 0x75 PushS
	LookAsync(var_19_object, var_64_string, var_39_cvector); // 0x76 Func
	var_37_bool = 1; // 0x78 MovB
	goto Label_123; // 0x79 Jump
	
Label_123:
	var_65_string = "all"; // 0x7b PushS
	PlayAnimation(var_65_string, var_34_string); // 0x7c Func
	WaitForAnimEnd(); // 0x7e Func
	var_66_bool = var_37_bool; // 0x80 Push
	if(var_66_bool == 0) goto Label_135; // 0x81 JumpB
	StopAsync(); // 0x82 Func
	var_67_string = "head"; // 0x84 PushS
	UnlookAsync(var_67_string); // 0x85 Func
	
Label_135:
	var_68_string = "all"; // 0x87 PushS
	LockAnimationEnd(var_68_string, var_34_string); // 0x88 Func
	RemoveEnvelope(); // 0x8a Func
	var_35_object = 0; // 0x8c SetNull
	
Label_122:
	var_37_bool = 0; // 0x7a MovB
	
Label_82:
	var_34_string = "bdie"; // 0x52 MovS
}


func_1090(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x442 PushV
	GetDirection(var_71_cvector); // 0x443 Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x445 PushV
	var_74_object = var_0_bool; // 0x446 MovT
	func_1458(var_74_object); // 0x447 Call
	var_72_cvector = var_73_cvector; // 0x448 Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x44a PushV
	var_80_cvector = var_71_cvector; // 0x44b Mov
	var_81_cvector = var_72_cvector; // 0x44c Mov
	func_1791(var_79_float, var_80_cvector, var_81_cvector); // 0x44d Call
	var_87_float = -0.34202; // 0x44f PushF
	var_68_bool = var_79_float >= var_87_float; // 0x450 GE2
	return 4; // 0x451 Return
}


func_593()
{
	var_162_int = 0; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_bool = 0; var_167_float = 0; var_168_bool = 0; var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_bool = 0; // 0x251 PushV
	WaitForAnimEnd(); // 0x252 Func
	var_176_bool = 0; // 0x254 PushV
	func_1628(var_176_bool); // 0x255 Call
	var_177_bool = var_176_bool == 0; // 0x257 Not
	if(var_177_bool == 0) goto Label_602; // 0x258 JumpB
	return 14; // 0x259 Return
	
Label_602:
	var_178_int = 0; // 0x25a PushV
	func_1886(var_178_int); // 0x25b Call
	var_169_int = var_178_int; // 0x25c Mov
	var_170_int = 0; // 0x25e MovI
	
Label_607:
	var_191_bool = 0; // 0x25f PushV
	var_191_bool = 0; // 0x260 MovB
	var_192_int = 5; // 0x261 PushI
	var_193_bool = var_170_int < var_192_int; // 0x262 LT
	if(var_193_bool == 0) goto Label_617; // 0x263 JumpB
	var_194_bool = 0; // 0x264 PushV
	func_1628(var_194_bool); // 0x265 Call
	if(var_194_bool == 0) goto Label_617; // 0x267 JumpB
	var_191_bool = 1; // 0x268 MovB
	
Label_617:
	if(var_191_bool == 0) goto Label_661; // 0x269 JumpB
	var_195_int = 3; // 0x26a PushI
	irand(var_171_int, var_195_int); // 0x26b Func
	var_196_int = 0; // 0x26d PushI
	var_197_bool = var_171_int == var_196_int; // 0x26e Eq
	if(var_197_bool == 0) goto Label_641; // 0x26f JumpB
	var_198_int = var_169_int; // 0x270 Push
	if(var_198_int == 0) goto Label_640; // 0x271 JumpB
	irand(var_172_int, var_169_int); // 0x272 Func
	var_199_string = "all"; // 0x274 PushS
	var_200_string = ""; var_201_int = 0; // 0x275 PushV
	var_201_int = var_172_int; // 0x276 Mov
	func_1879(var_200_string, var_201_int); // 0x277 Call
	PlayAnimation(var_199_string, var_200_string); // 0x279 Func
	WaitForAnimEnd(var_173_bool); // 0x27b Func
	var_202_bool = var_173_bool == 0; // 0x27d Not
	if(var_202_bool == 0) goto Label_640; // 0x27e JumpB
	goto Label_661; // 0x27f Jump
	
Label_661:
	return 14; // 0x295 Return
	
Label_640:
	goto Label_658; // 0x280 Jump
	
Label_658:
	var_203_int = 1; // 0x292 PushI
	var_170_int = var_170_int + var_203_int; // 0x293 Add2
	goto Label_607; // 0x294 Jump
	
Label_641:
	var_204_int = 1; // 0x281 PushI
	var_205_bool = var_171_int == var_204_int; // 0x282 Eq
	if(var_205_bool == 0) goto Label_655; // 0x283 JumpB
	var_206_int = 4; // 0x284 PushI
	rand(var_174_float, var_206_int); // 0x285 Func
	var_207_int = 1; // 0x287 PushI
	var_208_int = var_174_float + var_207_int; // 0x288 Add
	Sleep(var_208_int, var_175_bool); // 0x289 Func
	var_209_bool = var_175_bool == 0; // 0x28b Not
	if(var_209_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_661; // 0x28d Jump
	
Label_654:
	goto Label_658; // 0x28e Jump
	
Label_655:
	var_210_int = var_170_int; // 0x28f Push
	if(var_210_int == 0) goto Label_658; // 0x290 JumpB
	goto Label_661; // 0x291 Jump
}


func_1617()
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x651 PushV
	GetPosition(var_96_cvector); // 0x652 ObjFunc
	GetPosition(var_97_cvector); // 0x654 Func
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x656 Sub2
	var_99_float = GetByIndex(var_98_cvector, 0); // 0x657 PushE
	var_100_float = GetByIndex(var_98_cvector, 2); // 0x658 PushE
	RotateAsync(var_99_float, var_100_float); // 0x659 Func
	return 6; // 0x65b Return
}


func_1106(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x452 PushV
	GetPosition(var_38_cvector); // 0x453 Func
	GetPosition(var_39_cvector); // 0x455 TObjFunc
	GetDirection(var_40_cvector); // 0x457 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x459 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x45a PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x45b Sub2
	func_1781(var_46_cvector, var_47_cvector); // 0x45c Call
	var_53_float = 0.75; // 0x45e PushF
	var_54_float = var_40_cvector * var_53_float; // 0x45f Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x460 Add2
	func_1781(var_44_cvector, var_45_cvector); // 0x461 Call
	var_41_cvector = var_44_cvector; // 0x462 Mov
	var_55_int = 32; // 0x464 PushI
	var_56_float = 7000.0; // 0x465 PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x466 Func
	var_57_int = 100; // 0x468 PushI
	var_43_float = var_43_float - var_57_int; // 0x469 Sub2
	var_58_int = 0; // 0x46a PushI
	var_59_bool = var_43_float < var_58_int; // 0x46b LT
	if(var_59_bool == 0) goto Label_1134; // 0x46c JumpB
	var_43_float = 0; // 0x46d MovI
	
Label_1134:
	var_30_cvector = var_42_cvector * var_43_float; // 0x46e Mult2
	return 12; // 0x46f Return
}


func_1628(var_135_bool)
{
	var_136_bool = 0; var_137_bool = 0; // 0x65c PushV
	IsLoaded(var_137_bool); // 0x65d Func
	var_135_bool = var_137_bool; // 0x65f Mov
	return 2; // 0x660 Return
}


func_1633(var_45_bool)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; // 0x661 PushV
	GetPosition(var_56_cvector); // 0x662 ObjFunc
	GetEyesHeight(var_55_float); // 0x664 ObjFunc
	var_63_float = GetByIndex(var_56_cvector, 1); // 0x666 PushE
	var_63_float = var_63_float + var_55_float; // 0x667 Add2
	SetByIndex(var_56_cvector, 1) = var_63_float; // 0x668 PopE
	GetPosition(var_57_cvector); // 0x669 Func
	GetEyesHeight(var_55_float); // 0x66b Func
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x66d PushE
	var_64_float = var_64_float + var_55_float; // 0x66e Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x66f PopE
	var_58_cvector = var_56_cvector - var_57_cvector; // 0x670 Sub2
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x671 PushE
	var_65_float = 0; // 0x672 MovI
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x673 PopE
	var_66_int = var_58_cvector | var_58_cvector; // 0x674 Or
	var_67_float = sqrt(var_66_int); // 0x675 Sqrt
	var_58_cvector = var_58_cvector / var_58_cvector; // 0x676 Div2
	var_59_cvector = -var_58_cvector; // 0x677 Neg2
	var_68_int = 70; // 0x678 PushI
	var_69_float = var_58_cvector * var_68_int; // 0x679 Mult
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x67a PushV
	var_72_cvector = CVector(0.0, 1.0, 0.0); // 0x67b PushVec
	var_71_cvector = var_59_cvector ^ var_72_cvector; // 0x67c Xor2
	func_1781(var_70_cvector, var_71_cvector); // 0x67d Call
	var_78_int = 25; // 0x67f PushI
	var_79_float = var_70_cvector * var_78_int; // 0x680 Mult
	var_80_int = var_69_float + var_79_float; // 0x681 Add
	var_81_cvector = CVector(0.0, 10.0, 0.0); // 0x682 PushVec
	var_60_cvector = var_80_int - var_81_cvector; // 0x683 Sub2
	var_61_cvector = var_57_cvector + var_60_cvector; // 0x684 Add2
	IsOverrideActive(var_62_bool); // 0x685 Func
	var_82_bool = var_62_bool; // 0x687 Push
	if(var_82_bool == 0) goto Label_1675; // 0x688 JumpB
	var_45_bool = 0; // 0x689 MovB
	return 16; // 0x68a Return
	
Label_1675:
	StopWorld(); // 0x68b Func
	CameraTransit(var_61_cvector, var_59_cvector); // 0x68d Func
	var_83_float = GetByIndex(var_60_cvector, 0); // 0x68f PushE
	var_84_float = GetByIndex(var_60_cvector, 2); // 0x690 PushE
	Rotate(var_83_float, var_84_float); // 0x691 Func
	CameraWaitForPlayFinish(); // 0x693 Func
	ResumeWorld(); // 0x695 Func
	var_45_bool = 1; // 0x697 MovB
	return 16; // 0x698 Return
}


func_1136(var_0_bool, var_1_bool, var_2_bool, var_92_object)
{
	var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_float = 0; // 0x470 PushV
	var_0_bool = var_92_object; // 0x471 TMov
	var_106_cvector = CVector(0,0,0); var_107_float = 0; // 0x472 PushV
	var_107_float = 1.74533; // 0x473 MovF
	func_1106(var_106_cvector, var_107_float); // 0x474 Call
	var_101_cvector = var_106_cvector; // 0x475 Mov
	var_102_float = var_101_cvector | var_101_cvector; // 0x477 Or2
	var_136_float = 10000.0; // 0x478 PushF
	var_137_bool = var_102_float < var_136_float; // 0x479 LT
	if(var_137_bool == 0) goto Label_1156; // 0x47a JumpB
	var_138_string = "Can't retreat, distance: "; // 0x47b PushS
	var_139_float = sqrt(var_102_float); // 0x47c Sqrt
	var_140_int = var_138_string + var_139_float; // 0x47d Add
	Trace(var_140_int); // 0x47e Func
	var_141_float = 0.5; // 0x480 PushF
	Sleep(var_141_float); // 0x481 Func
	return 10; // 0x483 Return
	
Label_1156:
	var_142_float = GetByIndex(var_101_cvector, 0); // 0x484 PushE
	var_143_float = GetByIndex(var_101_cvector, 2); // 0x485 PushE
	Rotate(var_142_float, var_143_float); // 0x486 Func
	var_144_cvector = CVector(0,0,0); // 0x488 PushV
	func_1453(var_144_cvector); // 0x489 Call
	var_1_bool = var_144_cvector + var_101_cvector; // 0x48b Add2
	var_147_int = 120; // 0x48c PushI
	var_148_float = 0.5; // 0x48d PushF
	SetTimer(var_147_int, var_148_float); // 0x48e Func
	var_2_bool = 0; // 0x490 TMovB
	
Label_1169:
	var_149_int = 1; // 0x491 PushI
	MovePoint(var_149_int, var_149_int, var_103_bool); // 0x492 Func
	var_150_bool = var_103_bool; // 0x494 Push
	if(var_150_bool == 0) goto Label_1197; // 0x495 JumpB
	var_151_bool = var_0_bool == 0; // 0x496 NullEq
	if(var_151_bool == 0) goto Label_1178; // 0x497 JumpB
	goto Label_1199; // 0x498 Jump
	
Label_1199:
	return 10; // 0x4af Return
	
Label_1178:
	var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0x49a PushV
	var_153_float = 2.61799; // 0x49b MovF
	func_1106(var_152_cvector, var_153_float); // 0x49c Call
	var_104_cvector = var_152_cvector; // 0x49d Mov
	var_105_float = var_104_cvector | var_104_cvector; // 0x49f Or2
	var_154_float = 10000.0; // 0x4a0 PushF
	var_155_bool = var_105_float >= var_154_float; // 0x4a1 GE
	if(var_155_bool == 0) goto Label_1196; // 0x4a2 JumpB
	var_156_cvector = CVector(0,0,0); // 0x4a3 PushV
	func_1453(var_156_cvector); // 0x4a4 Call
	var_1_bool = var_156_cvector + var_104_cvector; // 0x4a6 Add2
	var_157_int = 120; // 0x4a7 PushI
	var_158_float = 0.5; // 0x4a8 PushF
	SetTimer(var_157_int, var_158_float); // 0x4a9 Func
	goto Label_1197; // 0x4ab Jump
	
Label_1197:
	var_159_bool = var_2_bool == 0; // 0x4ad Not
	if(var_159_bool == 0) goto Label_1169; // 0x4ae JumpB
	
Label_1196:
	goto Label_1199; // 0x4ac Jump
}


func_142(var_41_string)
{
	RemoveRTEnvelope(); // 0x8f Func
	SetDeathState(); // 0x91 Func
	Stop(); // 0x93 Func
	StopAsync(); // 0x95 Func
	StopSecondaryAnimation(); // 0x97 Func
	var_42_string = "all"; // 0x99 PushS
	PlayAnimation(var_42_string, var_41_string); // 0x9a Func
	WaitForAnimEnd(); // 0x9c Func
	var_43_string = "all"; // 0x9e PushS
	LockAnimationEnd(var_43_string, var_41_string); // 0x9f Func
	RemoveEnvelope(); // 0xa1 Func
	return 0; // 0xa3 Return
}


func_662()
{
	StopAnimation(); // 0x296 Func
	StopGroup0(); // 0x298 Func
	return 0; // 0x29a Return
}


func_2198(var_56_int, var_57_string)
{
	var_58_int = 0; var_59_int = 0; // 0x896 PushV
	GetInvItemByName(var_59_int, var_57_string); // 0x897 Func
	var_56_int = var_59_int; // 0x899 Mov
	return 2; // 0x89a Return
}


func_1689()
{
	CameraSwitchToNormal(); // 0x69a Func
	return 0; // 0x69c Return
}


func_2203(var_86_int)
{
	var_86_int = 3350; // 0x89b MovI
	return 0; // 0x89c Return
}


func_667(var_0_bool, var_68_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; // 0x29b PushV
	var_0_bool = var_68_object; // 0x29c TMov
	func_718(var_75_bool); // 0x29e Call
	GetDirection(var_73_cvector); // 0x2a0 Func
	var_83_cvector = CVector(0,0,0); var_84_object = Obj(); // 0x2a2 PushV
	var_84_object = var_0_bool; // 0x2a3 MovT
	func_1458(var_84_object); // 0x2a4 Call
	var_74_cvector = var_83_cvector; // 0x2a5 Mov
	var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x2a7 PushV
	var_90_cvector = var_73_cvector; // 0x2a8 Mov
	var_91_cvector = var_74_cvector; // 0x2a9 Mov
	func_1818(var_89_float, var_90_cvector, var_91_cvector); // 0x2aa Call
	var_113_int = 0; // 0x2ac PushI
	var_114_bool = var_89_float < var_113_int; // 0x2ad LT
	if(var_114_bool == 0) goto Label_693; // 0x2ae JumpB
	var_115_object = Obj(); // 0x2af PushV
	var_115_object = var_0_bool; // 0x2b0 MovT
	func_1617(); // 0x2b1 Call
	var_75_bool = 1; // 0x2b3 MovB
	goto Label_696; // 0x2b4 Jump
	
Label_696:
	var_124_bool = var_75_bool; // 0x2b8 Push
	if(var_124_bool == 0) goto Label_712; // 0x2b9 JumpB
	var_125_object = Obj(); // 0x2ba PushV
	var_125_object = var_0_bool; // 0x2bb MovT
	func_1617(); // 0x2bc Call
	var_126_int = 111; // 0x2be PushI
	var_127_float = 0.5; // 0x2bf PushF
	SetTimer(var_126_int, var_127_float); // 0x2c0 Func
	var_128_float = 5.0; // 0x2c2 PushF
	Sleep(var_128_float); // 0x2c3 Func
	var_129_int = 111; // 0x2c5 PushI
	KillTimer(var_129_int); // 0x2c6 Func
	
Label_712:
	StopAsync(); // 0x2c8 Func
	var_130_string = "head"; // 0x2ca PushS
	UnlookAsync(var_130_string); // 0x2cb Func
	return 6; // 0x2cd Return
	
Label_693:
	var_131_float = 1.5; // 0x2b5 PushF
	Sleep(var_131_float, var_75_bool); // 0x2b6 Func
}


func_2205(var_87_string)
{
	var_87_string = "ui/NPC_None.png"; // 0x89d MovS
	return 0; // 0x89e Return
}


func_1693(var_134_bool)
{
	var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_bool = 0; var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; // 0x69d PushV
	GetPosition(var_145_cvector); // 0x69e ObjFunc
	GetEyesHeight(var_144_float); // 0x6a0 ObjFunc
	var_152_float = GetByIndex(var_145_cvector, 1); // 0x6a2 PushE
	var_152_float = var_152_float + var_144_float; // 0x6a3 Add2
	SetByIndex(var_145_cvector, 1) = var_152_float; // 0x6a4 PopE
	GetPosition(var_146_cvector); // 0x6a5 Func
	GetEyesHeight(var_144_float); // 0x6a7 Func
	var_153_float = GetByIndex(var_146_cvector, 1); // 0x6a9 PushE
	var_153_float = var_153_float + var_144_float; // 0x6aa Add2
	SetByIndex(var_146_cvector, 1) = var_153_float; // 0x6ab PopE
	var_147_cvector = var_145_cvector - var_146_cvector; // 0x6ac Sub2
	var_154_float = GetByIndex(var_147_cvector, 1); // 0x6ad PushE
	var_154_float = 0; // 0x6ae MovI
	SetByIndex(var_147_cvector, 1) = var_154_float; // 0x6af PopE
	var_155_int = var_147_cvector | var_147_cvector; // 0x6b0 Or
	var_156_float = sqrt(var_155_int); // 0x6b1 Sqrt
	var_147_cvector = var_147_cvector / var_147_cvector; // 0x6b2 Div2
	var_148_cvector = -var_147_cvector; // 0x6b3 Neg2
	var_157_int = 70; // 0x6b4 PushI
	var_158_float = var_147_cvector * var_157_int; // 0x6b5 Mult
	var_159_cvector = CVector(0.0, 10.0, 0.0); // 0x6b6 PushVec
	var_149_cvector = var_158_float - var_159_cvector; // 0x6b7 Sub2
	var_150_cvector = var_146_cvector + var_149_cvector; // 0x6b8 Add2
	IsOverrideActive(var_151_bool); // 0x6b9 Func
	var_160_bool = var_151_bool; // 0x6bb Push
	if(var_160_bool == 0) goto Label_1727; // 0x6bc JumpB
	var_134_bool = 0; // 0x6bd MovB
	return 16; // 0x6be Return
	
Label_1727:
	StopWorld(); // 0x6bf Func
	CameraTransit(var_150_cvector, var_148_cvector); // 0x6c1 Func
	var_161_float = GetByIndex(var_149_cvector, 0); // 0x6c3 PushE
	var_162_float = GetByIndex(var_149_cvector, 2); // 0x6c4 PushE
	Rotate(var_161_float, var_162_float); // 0x6c5 Func
	CameraWaitForPlayFinish(); // 0x6c7 Func
	ResumeWorld(); // 0x6c9 Func
	var_134_bool = 1; // 0x6cb MovB
	return 16; // 0x6cc Return
}


func_2207(var_19_bool)
{
	var_19_bool = 0; // 0x89f MovB
	return 0; // 0x8a0 Return
}


func_2209()
{
	var_17_bool = GlobalVars[0]; // 0x8a1 PushGE
	var_17_bool = 0; // 0x8a2 MovB
	GlobalVars[0] = var_17_bool; // 0x8a3 PopGE
	var_18_bool = 0; // 0x8a4 PushV
	var_18_bool = 1; // 0x8a5 MovB
	func_2023(var_18_bool); // 0x8a6 Call
	return 0; // 0x8a8 Return
}


func_2217(var_28_object, var_36_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x8a9 PushV
	var_31_bool = GlobalVars[0]; // 0x8aa PushGE
	if(var_31_bool == 0) goto Label_2228; // 0x8ab JumpB
	IsOverrideActive(var_30_bool); // 0x8ac Func
	var_32_bool = var_30_bool == 0; // 0x8ae Not
	if(var_32_bool == 0) goto Label_2226; // 0x8af JumpB
	WorkWithCorpse(var_28_object); // 0x8b0 Func
	
Label_2226:
	return 2; // 0x8b2 Return
	
Label_2228:
	var_33_int = 1000; // 0x8b4 PushI
	var_34_int = 0; var_35_object = Obj(); // 0x8b5 PushV
	var_35_object = var_28_object; // 0x8b6 Mov
	TaskCall(7); // 0x8b7 TaskCall
	func_1284(var_36_object, var_34_int, var_35_object); // 0x8b8 Call
	TaskReturn(); // 0x8b9 TaskReturn
	var_133_bool = var_33_int == var_36_object; // 0x8bb Eq
	if(var_133_bool == 0) goto Label_2254; // 0x8bc JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x8bd PushV
	var_135_object = var_28_object; // 0x8be Mov
	func_1693(var_135_object); // 0x8bf Call
	var_163_bool = var_134_bool == 0; // 0x8c1 Not
	if(var_163_bool == 0) goto Label_2244; // 0x8c2 JumpB
	return 2; // 0x8c3 Return
	
Label_2244:
	var_164_object = Obj(); // 0x8c4 PushV
	var_164_object = var_28_object; // 0x8c5 Mov
	TaskCall(0); // 0x8c6 TaskCall
	func_0(var_164_object); // 0x8c7 Call
	TaskReturn(); // 0x8c8 TaskReturn
	var_169_object = Obj(); // 0x8ca PushV
	var_169_object = var_28_object; // 0x8cb Mov
	func_1741(); // 0x8cc Call
	
Label_2254:
	return 2; // 0x8ce Return
}


func_185()
{
	var_135_bool = 0; // 0xb9 PushV
	func_1628(var_135_bool); // 0xba Call
	var_138_bool = var_135_bool == 0; // 0xbc Not
	if(var_138_bool == 0) goto Label_193; // 0xbd JumpB
	func_1975(); // 0xbf Call
	
Label_193:
	return 0; // 0xc1 Return
}


func_1741()
{
	CameraSwitchToNormal(); // 0x6ce Func
	return 0; // 0x6d0 Return
}


func_718(var_0_bool)
{
	var_76_object = Obj(); // 0x2ce PushV
	var_76_object = var_0_bool; // 0x2cf MovT
	func_1763(var_76_object); // 0x2d0 Call
	return 0; // 0x2d2 Return
}


func_2255(var_61_bool)
{
	var_61_bool = 1; // 0x8cf MovB
	return 0; // 0x8d0 Return
}


func_2257(var_20_bool, var_21_object, var_22_object)
{
	var_23_string = ""; var_24_bool = 0; var_25_string = ""; var_26_bool = 0; // 0x8d1 PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x8d2 PushV
	var_28_object = var_22_object; // 0x8d3 Mov
	var_29_string = "class"; // 0x8d4 MovS
	func_1473(var_27_bool, var_28_object, var_29_string); // 0x8d5 Call
	var_36_bool = var_27_bool == 0; // 0x8d7 Not
	if(var_36_bool == 0) goto Label_2267; // 0x8d8 JumpB
	var_20_bool = 0; // 0x8d9 MovB
	return 4; // 0x8da Return
	
Label_2267:
	var_37_string = "class"; // 0x8db PushS
	GetProperty(var_37_string, var_25_string); // 0x8dc ObjFunc
	var_38_string = "rat"; // 0x8de PushS
	var_39_bool = var_25_string == var_38_string; // 0x8df Eq
	if(var_39_bool == 0) goto Label_2276; // 0x8e0 JumpB
	var_20_bool = 0; // 0x8e1 MovB
	return 4; // 0x8e2 Return
	
Label_2276:
	var_40_string = "dog"; // 0x8e4 PushS
	var_41_bool = var_25_string == var_40_string; // 0x8e5 Eq
	if(var_41_bool == 0) goto Label_2281; // 0x8e6 JumpB
	var_20_bool = 0; // 0x8e7 MovB
	return 4; // 0x8e8 Return
	
Label_2281:
	CanSee(var_26_bool, var_21_object); // 0x8e9 Func
	var_42_bool = 0; // 0x8eb PushV
	var_42_bool = 1; // 0x8ec MovB
	var_43_bool = var_26_bool; // 0x8ed Push
	if(var_43_bool == 0) goto Label_2295; // 0x8ee JumpB
	var_44_float = 0; var_45_object = Obj(); // 0x8ef PushV
	var_45_object = var_21_object; // 0x8f0 Mov
	func_1465(var_45_object); // 0x8f1 Call
	var_52_float = 250000.0; // 0x8f3 PushF
	var_53_bool = var_44_float <= var_52_float; // 0x8f4 LE
	if(var_53_bool == 0) goto Label_2295; // 0x8f5 JumpB
	var_42_bool = 0; // 0x8f6 MovB
	
Label_2295:
	if(var_42_bool == 0) goto Label_2301; // 0x8f7 JumpB
	var_54_float = -0.3; // 0x8f8 PushF
	ReportReputationChange(var_21_object, var_22_object, var_54_float); // 0x8f9 Func
	var_20_bool = 1; // 0x8fb MovB
	return 4; // 0x8fc Return
	
Label_2301:
	var_20_bool = 0; // 0x8fd MovB
	return 4; // 0x8fe Return
}


func_1745(var_26_string)
{
	var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; // 0x6d1 PushV
	var_31_string = "playing "; // 0x6d2 PushS
	var_32_int = var_31_string + var_26_string; // 0x6d3 Add
	Trace(var_32_int); // 0x6d4 Func
	lshGetAnimTimes(var_26_string, var_29_float, var_30_float); // 0x6d6 Func
	lshPlayAnimation(var_29_float, var_30_float); // 0x6d8 Func
	var_33_string = "start: "; // 0x6da PushS
	var_34_int = var_33_string + var_29_float; // 0x6db Add
	Trace(var_34_int); // 0x6dc Func
	var_35_string = "end: "; // 0x6de PushS
	var_36_int = var_35_string + var_30_float; // 0x6df Add
	Trace(var_36_int); // 0x6e0 Func
	return 4; // 0x6e2 Return
}


func_1763(var_76_object)
{
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x6e3 PushV
	GetEyesHeight(var_79_float); // 0x6e4 ObjFunc
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x6e6 MovV
	var_81_float = GetByIndex(var_80_cvector, 1); // 0x6e7 PushE
	var_81_float = var_79_float; // 0x6e8 Mov
	SetByIndex(var_80_cvector, 1) = var_81_float; // 0x6e9 PopE
	var_82_string = "head"; // 0x6ea PushS
	LookAsync(var_76_object, var_82_string, var_80_cvector); // 0x6eb Func
	return 4; // 0x6ed Return
}


func_1252(var_2_bool)
{
	Stop(); // 0x4e4 Func
	var_17_int = 120; // 0x4e6 PushI
	KillTimer(var_17_int); // 0x4e7 Func
	var_2_bool = 1; // 0x4e9 TMovB
	return 0; // 0x4ea Return
}


func_1774()
{
	var_19_bool = 0; // 0x6ee PushV
	func_2207(var_19_bool); // 0x6ef Call
	if(var_19_bool == 0) goto Label_1780; // 0x6f1 JumpB
	lshStopSpeech(); // 0x6f2 Func
	
Label_1780:
	return 0; // 0x6f4 Return
}


func_1268(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x4f4 PushV
	GetDirection(var_71_cvector); // 0x4f5 Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x4f7 PushV
	var_74_object = var_0_bool; // 0x4f8 MovT
	func_1458(var_74_object); // 0x4f9 Call
	var_72_cvector = var_73_cvector; // 0x4fa Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x4fc PushV
	var_80_cvector = var_71_cvector; // 0x4fd Mov
	var_81_cvector = var_72_cvector; // 0x4fe Mov
	func_1791(var_79_float, var_80_cvector, var_81_cvector); // 0x4ff Call
	var_87_float = -0.34202; // 0x501 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x502 GE2
	return 4; // 0x503 Return
}


func_1781(var_46_cvector, var_47_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x6f5 PushV
	var_50_int = var_47_cvector | var_47_cvector; // 0x6f6 Or
	var_49_float = sqrt(var_50_int); // 0x6f7 Sqrt2
	var_51_float = 0.0; // 0x6f8 PushF
	var_52_bool = var_49_float < var_51_float; // 0x6f9 LT
	if(var_52_bool == 0) goto Label_1789; // 0x6fa JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x6fb MovV
	return 2; // 0x6fc Return
	
Label_1789:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x6fd Div2
	return 2; // 0x6fe Return
}


func_1791(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector; // 0x700 Or
	var_83_int = var_80_cvector | var_80_cvector; // 0x701 Or
	var_84_int = var_81_cvector | var_81_cvector; // 0x702 Or
	var_85_float = var_83_int * var_84_int; // 0x703 Mult
	var_86_float = sqrt(var_85_float); // 0x704 Sqrt
	var_79_float = var_82_int / var_82_int; // 0x705 Div2
	return 0; // 0x706 Return
}


func_2303()
{
	var_70_bool = GlobalVars[0]; // 0x900 PushGE
	var_70_bool = 1; // 0x901 MovB
	GlobalVars[0] = var_70_bool; // 0x902 PopGE
	var_71_int = 50; // 0x903 PushI
	var_72_int = 40; // 0x904 PushI
	SetRTEnvelope(var_71_int, var_72_int); // 0x905 Func
	return 0; // 0x907 Return
}


func_1284(var_0_bool, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x504 PushV
	var_0_bool = var_35_object; // 0x505 TMov
	var_45_bool = 0; var_46_object = Obj(); // 0x506 PushV
	var_46_object = var_35_object; // 0x507 Mov
	func_1633(var_46_object); // 0x508 Call
	var_85_bool = var_45_bool == 0; // 0x50a Not
	if(var_85_bool == 0) goto Label_1294; // 0x50b JumpB
	var_34_int = -2; // 0x50c MovI
	return 8; // 0x50d Return
	
Label_1294:
	CreateDialog(var_41_object); // 0x50e Func
	var_86_int = 0; // 0x510 PushV
	func_2203(var_86_int); // 0x511 Call
	SetNPCName(var_86_int); // 0x513 ObjFunc
	var_87_string = ""; // 0x515 PushV
	func_2205(var_87_string); // 0x516 Call
	SetPhoto(var_87_string); // 0x518 ObjFunc
	var_88_int = 0; // 0x51a PushV
	func_1976(var_88_int); // 0x51b Call
	SetPlayerName(var_88_int); // 0x51d ObjFunc
	var_43_int = -1; // 0x51f MovI
	IsOverrideActive(var_42_bool); // 0x520 Func
	var_96_bool = var_42_bool; // 0x522 Push
	if(var_96_bool == 0) goto Label_1318; // 0x523 JumpB
	var_34_int = -2; // 0x524 MovI
	return 8; // 0x525 Return
	
Label_1318:
	DoDialog(var_41_object); // 0x526 Func
	var_97_object = Obj(); var_98_object = Obj(); // 0x528 PushV
	var_97_object = var_35_object; // 0x529 Mov
	var_98_object = var_41_object; // 0x52a Mov
	TaskCall(8); // 0x52b TaskCall
	func_1347(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object); // 0x52c Call
	TaskReturn(); // 0x52d TaskReturn
	IsDialogEnd(var_44_bool); // 0x52f ObjFunc
	
Label_1329:
	var_131_bool = var_44_bool == 0; // 0x531 Not
	if(var_131_bool == 0) goto Label_1336; // 0x532 JumpB
	sync(); // 0x533 Func
	IsDialogEnd(var_44_bool); // 0x535 ObjFunc
	goto Label_1329; // 0x537 Jump
	
Label_1336:
	var_132_object = Obj(); // 0x538 PushV
	var_132_object = var_35_object; // 0x539 Mov
	func_1689(); // 0x53a Call
	StopDialog(var_41_object); // 0x53c Func
	GetReturnValue(var_43_int); // 0x53e ObjFunc
	var_34_int = var_43_int; // 0x540 Mov
	return 8; // 0x541 Return
}


func_1799(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x708 PushE
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x709 PushE
	var_74_float = var_72_float * var_73_float; // 0x70a Mult
	var_75_float = GetByIndex(var_70_cvector, 2); // 0x70b PushE
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x70c PushE
	var_77_float = var_75_float * var_76_float; // 0x70d Mult
	var_69_float = var_74_float + var_77_float; // 0x70e Add2
	return 0; // 0x70f Return
}


func_1808(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0); // 0x711 PushE
	var_81_float = GetByIndex(var_79_cvector, 0); // 0x712 PushE
	var_82_float = var_80_float * var_81_float; // 0x713 Mult
	var_83_float = GetByIndex(var_79_cvector, 2); // 0x714 PushE
	var_84_float = GetByIndex(var_79_cvector, 2); // 0x715 PushE
	var_85_float = var_83_float * var_84_float; // 0x716 Mult
	var_86_int = var_82_float + var_85_float; // 0x717 Add
	var_78_float = sqrt(var_86_int); // 0x718 Sqrt2
	return 0; // 0x719 Return
}


func_1818(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x71b PushV
	var_70_cvector = var_67_cvector; // 0x71c Mov
	var_71_cvector = var_68_cvector; // 0x71d Mov
	func_1799(var_69_float, var_70_cvector, var_71_cvector); // 0x71e Call
	var_78_float = 0; var_79_cvector = CVector(0,0,0); // 0x720 PushV
	var_79_cvector = var_67_cvector; // 0x721 Mov
	func_1808(var_78_float, var_79_cvector); // 0x722 Call
	var_87_float = 0; var_88_cvector = CVector(0,0,0); // 0x724 PushV
	var_88_cvector = var_68_cvector; // 0x725 Mov
	func_1808(var_87_float, var_88_cvector); // 0x726 Call
	var_89_float = var_78_float * var_87_float; // 0x728 Mult
	var_66_float = var_69_float / var_69_float; // 0x729 Div2
	return 0; // 0x72a Return
}


func_1835(var_27_int)
{
	var_28_float = 0; var_29_float = 0; // 0x72b PushV
	GetGameTime(var_29_float); // 0x72c Func
	var_30_int = 1; // 0x72e PushI
	var_31_int = 0; // 0x72f PushV
	var_32_int = 24; // 0x730 PushI
	var_31_int = var_29_float / var_29_float; // 0x731 Div2
	var_27_int = var_30_int + var_31_int; // 0x732 Add2
	return 2; // 0x733 Return
}


func_1844(var_17_object)
{
	var_18_object = Obj(); // 0x735 PushV
	var_18_object = var_17_object; // 0x736 Mov
	TaskCall(1); // 0x737 TaskCall
	func_22(var_18_object); // 0x738 Call
	TaskReturn(); // 0x739 TaskReturn
	return 0; // 0x73b Return
}


func_831()
{
	StopGroup0(); // 0x33f Func
	StopAsync(); // 0x341 Func
	var_16_string = "head"; // 0x343 PushS
	UnlookAsync(var_16_string); // 0x344 Func
	var_17_int = 111; // 0x346 PushI
	KillTimer(var_17_int); // 0x347 Func
	return 0; // 0x349 Return
}


func_1347(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_97_object, var_98_object)
{
	var_0_bool = var_98_object; // 0x544 TMov
	var_1_bool = var_97_object; // 0x545 TMov
	var_3_bool = 0; // 0x546 TMovB
	var_103_int = 1; // 0x547 PushI
	if(var_103_int == 0) goto Label_1370; // 0x548 JumpB
	var_104_string = ""; // 0x549 PushV
	var_104_string = "Neutral"; // 0x54a MovS
	func_1400(var_98_object, var_104_string); // 0x54b Call
	var_119_int = 15228; // 0x54d PushI
	SetMessage(var_119_int); // 0x54e TObjFunc
	ClearReplies(); // 0x550 TObjFunc
	var_120_int = 15229; // 0x552 PushI
	var_121_int = -1; // 0x553 PushI
	var_122_int = 16506; // 0x554 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x555 TObjFunc
	goto Label_1370; // 0x557 Jump
	
Label_1370:
	var_123_bool = 0; // 0x55a PushV
	func_2207(var_123_bool); // 0x55b Call
	if(var_123_bool == 0) goto Label_1385; // 0x55d JumpB
	
Label_1374:
	lshWaitForAnimEnd(); // 0x55e Func
	var_124_bool = var_3_bool; // 0x560 PushT
	if(var_124_bool == 0) goto Label_1379; // 0x561 JumpB
	goto Label_1384; // 0x562 Jump
	
Label_1384:
	goto Label_1399; // 0x568 Jump
	
Label_1399:
	return 0; // 0x577 Return
	
Label_1379:
	var_125_string = ""; // 0x563 PushV
	var_125_string = var_2_bool; // 0x564 MovT
	func_1745(var_125_string); // 0x565 Call
	goto Label_1374; // 0x567 Jump
	
Label_1385:
	var_126_string = "all"; // 0x569 PushS
	var_127_string = "idle"; // 0x56a PushS
	PlayAnimation(var_126_string, var_127_string); // 0x56b Func
	
Label_1389:
	WaitForAnimEnd(); // 0x56d Func
	var_128_bool = var_3_bool; // 0x56f PushT
	if(var_128_bool == 0) goto Label_1394; // 0x570 JumpB
	goto Label_1399; // 0x571 Jump
	
Label_1394:
	var_129_string = "all"; // 0x572 PushS
	var_130_string = "idle"; // 0x573 PushS
	PlayAnimation(var_129_string, var_130_string); // 0x574 Func
	goto Label_1389; // 0x576 Jump
}


func_333(var_2_bool)
{
	var_17_int = 110; // 0x14d PushI
	KillTimer(var_17_int); // 0x14e Func
	var_2_bool = 0; // 0x150 TMovB
	func_462(var_15_string, var_16_bool); // 0x152 Call
	return 0; // 0x154 Return
}


func_341(var_2_bool)
{
	var_66_int = 110; // 0x155 PushI
	KillTimer(var_66_int); // 0x156 Func
	var_2_bool = 0; // 0x158 TMovB
	func_469(var_20_bool, var_21_int); // 0x15a Call
	return 0; // 0x15c Return
}


func_1879(var_184_string, var_185_int)
{
	var_186_string = ""; var_187_string = ""; // 0x757 PushV
	var_187_string = "idle"; // 0x758 MovS
	var_188_int = var_185_int; // 0x759 Push
	if(var_188_int == 0) goto Label_1884; // 0x75a JumpB
	var_187_string = var_187_string + var_185_int; // 0x75b Add2
	
Label_1884:
	var_184_string = var_187_string; // 0x75c Mov
	return 2; // 0x75d Return
}


func_1886(var_178_int)
{
	var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_bool = 0; // 0x75e PushV
	var_181_int = 0; // 0x75f MovI
	
Label_1888:
	var_183_string = "all"; // 0x760 PushS
	var_184_string = ""; var_185_int = 0; // 0x761 PushV
	var_185_int = var_181_int; // 0x762 Mov
	func_1879(var_184_string, var_185_int); // 0x763 Call
	HasAnimation(var_182_bool, var_183_string, var_184_string); // 0x765 Func
	var_189_bool = var_182_bool == 0; // 0x767 Not
	if(var_189_bool == 0) goto Label_1898; // 0x768 JumpB
	goto Label_1901; // 0x769 Jump
	
Label_1901:
	var_178_int = var_181_int; // 0x76d Mov
	return 4; // 0x76e Return
	
Label_1898:
	var_190_int = 1; // 0x76a PushI
	var_181_int = var_181_int + var_190_int; // 0x76b Add2
	goto Label_1888; // 0x76c Jump
}


func_358(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; // 0x166 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x167 PushV
	var_23_object = var_17_object; // 0x168 Mov
	func_1526(var_22_bool, var_23_object); // 0x169 Call
	var_56_bool = var_22_bool == 0; // 0x16b Not
	if(var_56_bool == 0) goto Label_366; // 0x16c JumpB
	return 4; // 0x16d Return
	
Label_366:
	var_57_bool = var_2_bool; // 0x16e PushT
	if(var_57_bool == 0) goto Label_369; // 0x16f JumpB
	return 4; // 0x170 Return
	
Label_369:
	IsPlayerActor(var_17_object, var_20_bool); // 0x171 Func
	var_58_bool = var_20_bool == 0; // 0x173 Not
	if(var_58_bool == 0) goto Label_374; // 0x174 JumpB
	return 4; // 0x175 Return
	
Label_374:
	var_59_int = 0; var_60_object = Obj(); // 0x176 PushV
	var_60_object = var_17_object; // 0x177 Mov
	func_1903(var_60_object); // 0x178 Call
	var_21_int = var_59_int; // 0x179 Mov
	var_62_int = 0; // 0x17b PushI
	var_63_bool = var_21_int > var_62_int; // 0x17c GT
	if(var_63_bool == 0) goto Label_397; // 0x17d JumpB
	var_64_int = 1; // 0x17e PushI
	var_65_bool = var_21_int > var_64_int; // 0x17f GT
	if(var_65_bool == 0) goto Label_388; // 0x180 JumpB
	func_341(var_21_int); // 0x182 Call
	
Label_388:
	var_67_object = Obj(); // 0x184 PushV
	var_67_object = var_17_object; // 0x185 Mov
	func_1912(var_67_object); // 0x186 Call
	var_2_bool = 1; // 0x188 TMovB
	var_132_int = 110; // 0x189 PushI
	var_133_float = 10.0; // 0x18a PushF
	SetTimer(var_132_int, var_133_float); // 0x18b Func
	
Label_397:
	return 4; // 0x18d Return
}


func_1903(var_59_int)
{
	var_61_bool = 0; // 0x770 PushV
	func_2255(var_61_bool); // 0x771 Call
	if(var_61_bool == 0) goto Label_1910; // 0x773 JumpB
	var_59_int = 2; // 0x774 MovI
	goto Label_1911; // 0x775 Jump
	
Label_1911:
	return 0; // 0x777 Return
	
Label_1910:
	var_59_int = 0; // 0x776 MovI
}


func_1400(var_2_bool, var_22_string)
{
	var_23_bool = 0; // 0x579 PushV
	func_2207(var_23_bool); // 0x57a Call
	var_24_bool = var_23_bool == 0; // 0x57c Not
	if(var_24_bool == 0) goto Label_1407; // 0x57d JumpB
	return 0; // 0x57e Return
	
Label_1407:
	var_25_bool = var_22_string == var_2_bool; // 0x57f Eq
	if(var_25_bool == 0) goto Label_1410; // 0x580 JumpB
	return 0; // 0x581 Return
	
Label_1410:
	var_26_string = ""; // 0x582 PushV
	var_26_string = var_22_string; // 0x583 Mov
	func_1745(var_26_string); // 0x584 Call
	var_2_bool = var_22_string; // 0x586 TMov
	return 0; // 0x587 Return
}


func_1912(var_67_object)
{
	var_68_object = Obj(); // 0x779 PushV
	var_68_object = var_67_object; // 0x77a Mov
	TaskCall(4); // 0x77b TaskCall
	func_667(var_69_object, var_68_object); // 0x77c Call
	TaskReturn(); // 0x77d TaskReturn
	return 0; // 0x77f Return
}


func_893(var_62_object)
{
	Face(var_62_object); // 0x37e Func
	var_66_string = "all"; // 0x380 PushS
	var_67_string = "attack_on"; // 0x381 PushS
	PlayAnimation(var_66_string, var_67_string); // 0x382 Func
	WaitForAnimEnd(); // 0x384 Func
	var_68_string = "all"; // 0x386 PushS
	var_69_string = "attack_stay"; // 0x387 PushS
	PlayAnimation(var_68_string, var_69_string); // 0x388 Func
	WaitForAnimEnd(); // 0x38a Func
	var_70_string = "all"; // 0x38c PushS
	var_71_string = "attack_off"; // 0x38d PushS
	PlayAnimation(var_70_string, var_71_string); // 0x38e Func
	WaitForAnimEnd(); // 0x390 Func
	StopAsync(); // 0x392 Func
	var_72_object = Obj(); // 0x394 PushV
	var_72_object = var_62_object; // 0x395 Mov
	func_958(var_64_cvector, var_65_bool, var_62_object, var_72_object); // 0x396 Call
	return 0; // 0x398 Return
}


func_1920(var_19_int, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x781 PushV
	var_22_object = var_20_object; // 0x782 Mov
	func_1526(var_21_bool, var_22_object); // 0x783 Call
	if(var_21_bool == 0) goto Label_1928; // 0x785 JumpB
	var_19_int = 2; // 0x786 MovI
	goto Label_1929; // 0x787 Jump
	
Label_1929:
	return 0; // 0x789 Return
	
Label_1928:
	var_19_int = 0; // 0x788 MovI
}


func_1930(var_61_object)
{
	var_62_object = Obj(); // 0x78b PushV
	var_62_object = var_61_object; // 0x78c Mov
	TaskCall(5); // 0x78d TaskCall
	func_893(var_62_object); // 0x78e Call
	TaskReturn(); // 0x78f TaskReturn
	return 0; // 0x791 Return
}


func_398(var_0_bool, var_1_bool)
{
	var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_bool = 0; var_144_object = Obj(); var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_bool = 0; var_151_object = Obj(); var_152_bool = 0; // 0x18e PushV
	var_0_bool = 0; // 0x18f TMovB
	var_1_bool = 0; // 0x190 TMovB
	var_153_float = 0.5; // 0x191 PushF
	rand(var_146_float, var_153_float); // 0x192 Func
	Sleep(var_146_float); // 0x194 Func
	
Label_406:
	var_154_bool = var_0_bool == 0; // 0x196 Not
	if(var_154_bool == 0) goto Label_454; // 0x197 JumpB
	var_155_bool = var_1_bool == 0; // 0x198 Not
	if(var_155_bool == 0) goto Label_426; // 0x199 JumpB
	
Label_410:
	GetPosition(var_148_cvector); // 0x19a Func
	GetCameraFarDistance(var_149_float); // 0x19c Func
	var_156_float = 2.5; // 0x19e PushF
	var_149_float = var_149_float * var_156_float; // 0x19f Mult2
	GetRandomPFPointInCircle(var_147_cvector, var_148_cvector, var_149_float, var_150_bool); // 0x1a0 Func
	var_157_bool = var_150_bool; // 0x1a2 Push
	if(var_157_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_425; // 0x1a4 Jump
	
Label_425:
	goto Label_427; // 0x1a9 Jump
	
Label_427:
	FindShiftedPathTo(var_151_object, var_147_cvector); // 0x1ab Func
	var_158_bool = var_151_object != 0; // 0x1ad NullNeq
	if(var_158_bool == 0) goto Label_449; // 0x1ae JumpB
	RotatePath(var_151_object, var_152_bool); // 0x1af Func
	var_159_bool = var_152_bool; // 0x1b1 Push
	if(var_159_bool == 0) goto Label_448; // 0x1b2 JumpB
	var_160_bool = 0; // 0x1b3 PushV
	func_476(var_160_bool); // 0x1b4 Call
	FollowPath(var_151_object, var_160_bool, var_152_bool); // 0x1b6 Func
	var_151_object = 0; // 0x1b8 SetNull
	var_161_bool = var_152_bool; // 0x1b9 Push
	if(var_161_bool == 0) goto Label_448; // 0x1ba JumpB
	TaskCall(3); // 0x1bc TaskCall
	func_593(); // 0x1bd Call
	TaskReturn(); // 0x1be TaskReturn
	
Label_448:
	goto Label_452; // 0x1c0 Jump
	
Label_452:
	var_151_object = 0; // 0x1c4 SetNull
	goto Label_406; // 0x1c5 Jump
	
Label_449:
	var_211_int = 1; // 0x1c1 PushI
	Sleep(var_211_int); // 0x1c2 Func
	
Label_421:
	var_212_int = 1; // 0x1a5 PushI
	Sleep(var_212_int); // 0x1a6 Func
	goto Label_410; // 0x1a8 Jump
	
Label_426:
	var_1_bool = 0; // 0x1aa TMovB
	
Label_454:
	return 14; // 0x1c6 Return
}


func_1938(var_55_int, var_56_object)
{
	var_57_bool = 0; var_58_object = Obj(); // 0x793 PushV
	var_58_object = var_56_object; // 0x794 Mov
	func_1526(var_57_bool, var_58_object); // 0x795 Call
	if(var_57_bool == 0) goto Label_1946; // 0x797 JumpB
	var_55_int = 2; // 0x798 MovI
	goto Label_1947; // 0x799 Jump
	
Label_1947:
	return 0; // 0x79b Return
	
Label_1946:
	var_55_int = 0; // 0x79a MovI
}


func_1948(var_91_object)
{
	var_92_object = Obj(); // 0x79d PushV
	var_92_object = var_91_object; // 0x79e Mov
	TaskCall(6); // 0x79f TaskCall
	func_1136(var_93_object, var_94_cvector, var_95_bool, var_92_object); // 0x7a0 Call
	TaskReturn(); // 0x7a1 TaskReturn
	return 0; // 0x7a3 Return
}


func_928(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x3a0 PushV
	GetPosition(var_38_cvector); // 0x3a1 Func
	GetPosition(var_39_cvector); // 0x3a3 TObjFunc
	GetDirection(var_40_cvector); // 0x3a5 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x3a7 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x3a8 PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x3a9 Sub2
	func_1781(var_46_cvector, var_47_cvector); // 0x3aa Call
	var_53_float = 0.75; // 0x3ac PushF
	var_54_float = var_40_cvector * var_53_float; // 0x3ad Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x3ae Add2
	func_1781(var_44_cvector, var_45_cvector); // 0x3af Call
	var_41_cvector = var_44_cvector; // 0x3b0 Mov
	var_55_int = 32; // 0x3b2 PushI
	var_56_float = 7000.0; // 0x3b3 PushF
	FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, var_55_int, var_56_float); // 0x3b4 Func
	var_57_int = 100; // 0x3b6 PushI
	var_43_float = var_43_float - var_57_int; // 0x3b7 Sub2
	var_58_int = 0; // 0x3b8 PushI
	var_59_bool = var_43_float < var_58_int; // 0x3b9 LT
	if(var_59_bool == 0) goto Label_956; // 0x3ba JumpB
	var_43_float = 0; // 0x3bb MovI
	
Label_956:
	var_30_cvector = var_42_cvector * var_43_float; // 0x3bc Mult2
	return 12; // 0x3bd Return
}


func_1956(var_19_int)
{
	var_19_int = 0; // 0x7a5 MovI
	return 0; // 0x7a6 Return
}


func_1959()
{
	return 0; // 0x7a8 Return
}


func_1961(var_20_int)
{
	var_20_int = 0; // 0x7aa MovI
	return 0; // 0x7ab Return
}


func_1964()
{
	return 0; // 0x7ad Return
}


func_1453(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); // 0x5ad PushV
	GetPosition(var_90_cvector); // 0x5ae Func
	var_88_cvector = var_90_cvector; // 0x5b0 Mov
	return 2; // 0x5b1 Return
}


func_1966(var_19_int)
{
	var_19_int = 2; // 0x7af MovI
	return 0; // 0x7b0 Return
}


func_1969(var_27_object)
{
	var_28_object = Obj(); // 0x7b2 PushV
	var_28_object = var_27_object; // 0x7b3 Mov
	func_2217(var_27_object, var_28_object); // 0x7b4 Call
	return 0; // 0x7b6 Return
}


func_1458(var_73_cvector)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x5b2 PushV
	GetPosition(var_77_cvector); // 0x5b3 Func
	GetPosition(var_78_cvector); // 0x5b5 ObjFunc
	var_73_cvector = var_78_cvector - var_77_cvector; // 0x5b7 Sub2
	return 4; // 0x5b8 Return
}


func_1975()
{
	return 0; // 0x7b7 Return
}


func_1976(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x7b8 PushV
	var_91_string = "player"; // 0x7b9 PushS
	GetVariable(var_91_string, var_90_int); // 0x7ba Func
	var_92_int = 0; // 0x7bc PushI
	var_93_bool = var_90_int == var_92_int; // 0x7bd Eq
	if(var_93_bool == 0) goto Label_1986; // 0x7be JumpB
	var_88_int = 200001; // 0x7bf MovI
	return 2; // 0x7c0 Return
	
Label_1986:
	var_94_int = 1; // 0x7c2 PushI
	var_95_bool = var_90_int == var_94_int; // 0x7c3 Eq
	if(var_95_bool == 0) goto Label_1991; // 0x7c4 JumpB
	var_88_int = 200002; // 0x7c5 MovI
	return 2; // 0x7c6 Return
	
Label_1991:
	var_88_int = 200003; // 0x7c7 MovI
	return 2; // 0x7c8 Return
}


func_1465(var_44_float)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x5b9 PushV
	GetPosition(var_49_cvector); // 0x5ba Func
	GetPosition(var_50_cvector); // 0x5bc ObjFunc
	var_51_cvector = var_50_cvector - var_49_cvector; // 0x5be Sub2
	var_44_float = var_51_cvector | var_51_cvector; // 0x5bf Or2
	return 6; // 0x5c0 Return
}


func_958(var_0_bool, var_1_bool, var_2_bool, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_float = 0; // 0x3be PushV
	var_0_bool = var_72_object; // 0x3bf TMov
	var_83_cvector = CVector(0,0,0); var_84_float = 0; // 0x3c0 PushV
	var_84_float = 1.74533; // 0x3c1 MovF
	func_928(var_83_cvector, var_84_float); // 0x3c2 Call
	var_78_cvector = var_83_cvector; // 0x3c3 Mov
	var_79_float = var_78_cvector | var_78_cvector; // 0x3c5 Or2
	var_113_float = 10000.0; // 0x3c6 PushF
	var_114_bool = var_79_float < var_113_float; // 0x3c7 LT
	if(var_114_bool == 0) goto Label_978; // 0x3c8 JumpB
	var_115_string = "Can't retreat, distance: "; // 0x3c9 PushS
	var_116_float = sqrt(var_79_float); // 0x3ca Sqrt
	var_117_int = var_115_string + var_116_float; // 0x3cb Add
	Trace(var_117_int); // 0x3cc Func
	var_118_float = 0.5; // 0x3ce PushF
	Sleep(var_118_float); // 0x3cf Func
	return 10; // 0x3d1 Return
	
Label_978:
	var_119_float = GetByIndex(var_78_cvector, 0); // 0x3d2 PushE
	var_120_float = GetByIndex(var_78_cvector, 2); // 0x3d3 PushE
	Rotate(var_119_float, var_120_float); // 0x3d4 Func
	var_121_cvector = CVector(0,0,0); // 0x3d6 PushV
	func_1453(var_121_cvector); // 0x3d7 Call
	var_1_bool = var_121_cvector + var_78_cvector; // 0x3d9 Add2
	var_124_int = 120; // 0x3da PushI
	var_125_float = 0.5; // 0x3db PushF
	SetTimer(var_124_int, var_125_float); // 0x3dc Func
	var_2_bool = 0; // 0x3de TMovB
	
Label_991:
	var_126_int = 1; // 0x3df PushI
	MovePoint(var_126_int, var_126_int, var_80_bool); // 0x3e0 Func
	var_127_bool = var_80_bool; // 0x3e2 Push
	if(var_127_bool == 0) goto Label_1019; // 0x3e3 JumpB
	var_128_bool = var_0_bool == 0; // 0x3e4 NullEq
	if(var_128_bool == 0) goto Label_1000; // 0x3e5 JumpB
	goto Label_1021; // 0x3e6 Jump
	
Label_1021:
	return 10; // 0x3fd Return
	
Label_1000:
	var_129_cvector = CVector(0,0,0); var_130_float = 0; // 0x3e8 PushV
	var_130_float = 2.61799; // 0x3e9 MovF
	func_928(var_129_cvector, var_130_float); // 0x3ea Call
	var_81_cvector = var_129_cvector; // 0x3eb Mov
	var_82_float = var_81_cvector | var_81_cvector; // 0x3ed Or2
	var_131_float = 10000.0; // 0x3ee PushF
	var_132_bool = var_82_float >= var_131_float; // 0x3ef GE
	if(var_132_bool == 0) goto Label_1018; // 0x3f0 JumpB
	var_133_cvector = CVector(0,0,0); // 0x3f1 PushV
	func_1453(var_133_cvector); // 0x3f2 Call
	var_1_bool = var_133_cvector + var_81_cvector; // 0x3f4 Add2
	var_134_int = 120; // 0x3f5 PushI
	var_135_float = 0.5; // 0x3f6 PushF
	SetTimer(var_134_int, var_135_float); // 0x3f7 Func
	goto Label_1019; // 0x3f9 Jump
	
Label_1019:
	var_136_bool = var_2_bool == 0; // 0x3fb Not
	if(var_136_bool == 0) goto Label_991; // 0x3fc JumpB
	
Label_1018:
	goto Label_1021; // 0x3fa Jump
}


func_1473(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0; // 0x5c1 PushV
	var_50_string = "HasProperty"; // 0x5c2 PushS
	var_51_int = 2; // 0x5c3 PushI
	var_52_bool = IsFuncExist(var_46_object, var_50_string, var_51_int); // 0x5c4 FuncExist
	var_53_bool = var_52_bool == 0; // 0x5c5 Not
	if(var_53_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_45_bool = 0; // 0x5c7 MovB
	return 2; // 0x5c8 Return
	
Label_1481:
	HasProperty(var_47_string, var_49_bool); // 0x5c9 ObjFunc
	var_45_bool = var_49_bool; // 0x5cb Mov
	return 2; // 0x5cc Return
}


func_1993(var_24_int, var_25_int)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; // 0x7c9 PushV
	var_43_bool = var_24_int > var_25_int; // 0x7ca GT
	if(var_43_bool == 0) goto Label_2000; // 0x7cb JumpB
	var_44_string = "GenerateMoney: iMin > iMax"; // 0x7cc PushS
	Trace(var_44_string); // 0x7cd Func
	return 8; // 0x7cf Return
	
Label_2000:
	var_39_int = 0; // 0x7d0 MovI
	var_45_bool = var_24_int != var_25_int; // 0x7d1 Neq
	if(var_45_bool == 0) goto Label_2007; // 0x7d2 JumpB
	var_46_int = var_25_int - var_24_int; // 0x7d3 Sub
	irand(var_40_int, var_46_int); // 0x7d4 Func
	goto Label_2011; // 0x7d6 Jump
	
Label_2011:
	var_39_int = var_39_int + var_24_int; // 0x7db Add2
	var_47_int = 0; // 0x7dc PushI
	var_48_bool = var_39_int == var_47_int; // 0x7dd Eq
	if(var_48_bool == 0) goto Label_2016; // 0x7de JumpB
	return 8; // 0x7df Return
	
Label_2016:
	var_49_string = "Money"; // 0x7e0 PushS
	GetInvItemByName(var_41_int, var_49_string); // 0x7e1 Func
	var_50_int = 0; // 0x7e3 PushI
	AddItem(var_42_bool, var_41_int, var_50_int, var_39_int); // 0x7e4 Func
	return 8; // 0x7e6 Return
	
Label_2007:
	var_51_int = 0; // 0x7d7 PushI
	var_52_bool = var_24_int == var_51_int; // 0x7d8 Eq
	if(var_52_bool == 0) goto Label_2011; // 0x7d9 JumpB
	return 8; // 0x7da Return
}


func_1485(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x5cd PushV
	IsDead(var_41_bool); // 0x5ce ObjFunc
	var_38_bool = var_41_bool; // 0x5d0 Mov
	return 2; // 0x5d1 Return
}


func_462(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1ce TMovB
	var_1_bool = 0; // 0x1cf TMovB
	Stop(); // 0x1d0 Func
	StopGroup0(); // 0x1d2 Func
	return 0; // 0x1d4 Return
}


func_1490(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x5d2 PushV
	var_33_bool = var_28_object == 0; // 0x5d3 NullEq
	if(var_33_bool == 0) goto Label_1495; // 0x5d4 JumpB
	var_27_bool = 0; // 0x5d5 MovB
	return 4; // 0x5d6 Return
	
Label_1495:
	var_34_bool = 0; // 0x5d7 PushV
	var_34_bool = 0; // 0x5d8 MovB
	var_35_string = "IsDead"; // 0x5d9 PushS
	var_36_int = 1; // 0x5da PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x5db FuncExist
	if(var_37_bool == 0) goto Label_1507; // 0x5dc JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x5dd PushV
	var_39_object = var_28_object; // 0x5de Mov
	func_1485(var_39_object); // 0x5df Call
	if(var_38_bool == 0) goto Label_1507; // 0x5e1 JumpB
	var_34_bool = 1; // 0x5e2 MovB
	
Label_1507:
	if(var_34_bool == 0) goto Label_1510; // 0x5e3 JumpB
	var_27_bool = 0; // 0x5e4 MovB
	return 4; // 0x5e5 Return
	
Label_1510:
	GetScene(var_31_object); // 0x5e6 Func
	var_42_bool = var_31_object == 0; // 0x5e8 NullEq
	if(var_42_bool == 0) goto Label_1516; // 0x5e9 JumpB
	var_27_bool = 0; // 0x5ea MovB
	return 4; // 0x5eb Return
	
Label_1516:
	GetScene(var_32_object); // 0x5ec ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x5ee Neq
	if(var_43_bool == 0) goto Label_1522; // 0x5ef JumpB
	var_27_bool = 0; // 0x5f0 MovB
	return 4; // 0x5f1 Return
	
Label_1522:
	var_27_bool = 1; // 0x5f2 MovB
	return 4; // 0x5f3 Return
}


func_469(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1d5 TMovB
	var_1_bool = 1; // 0x1d6 TMovB
	Stop(); // 0x1d7 Func
	StopGroup0(); // 0x1d9 Func
	return 0; // 0x1db Return
}


func_476(var_160_bool)
{
	var_160_bool = 0; // 0x1dc MovB
	return 0; // 0x1dd Return
}


func_2023(var_18_bool)
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0; // 0x7e7 PushV
	var_23_bool = var_18_bool; // 0x7e8 Push
	if(var_23_bool == 0) goto Label_2112; // 0x7e9 JumpB
	var_24_int = 0; var_25_int = 0; // 0x7ea PushV
	var_24_int = 0; // 0x7eb MovI
	var_26_int = 100; // 0x7ec PushI
	var_27_int = 0; // 0x7ed PushV
	func_1835(var_27_int); // 0x7ee Call
	var_33_int = 100; // 0x7f0 PushI
	var_34_float = var_27_int * var_33_int; // 0x7f1 Mult
	var_25_int = var_26_int + var_34_float; // 0x7f2 Add2
	func_1993(var_24_int, var_25_int); // 0x7f3 Call
	var_53_int = 9; // 0x7f5 PushI
	irand(var_21_int, var_53_int); // 0x7f6 Func
	var_54_int = 0; // 0x7f8 PushI
	var_55_bool = var_21_int == var_54_int; // 0x7f9 Eq
	if(var_55_bool == 0) goto Label_2052; // 0x7fa JumpB
	var_56_int = 0; var_57_string = ""; // 0x7fb PushV
	var_57_string = "lemon"; // 0x7fc MovS
	func_2198(var_56_int, var_57_string); // 0x7fd Call
	var_60_int = 0; // 0x7ff PushI
	var_61_int = 1; // 0x800 PushI
	AddItem(var_22_bool, var_56_int, var_60_int, var_61_int); // 0x801 Func
	goto Label_2111; // 0x803 Jump
	
Label_2111:
	goto Label_2197; // 0x83f Jump
	
Label_2197:
	return 4; // 0x895 Return
	
Label_2052:
	var_62_int = 1; // 0x804 PushI
	var_63_bool = var_21_int == var_62_int; // 0x805 Eq
	if(var_63_bool == 0) goto Label_2064; // 0x806 JumpB
	var_64_int = 0; var_65_string = ""; // 0x807 PushV
	var_65_string = "rusk"; // 0x808 MovS
	func_2198(var_64_int, var_65_string); // 0x809 Call
	var_66_int = 0; // 0x80b PushI
	var_67_int = 1; // 0x80c PushI
	AddItem(var_22_bool, var_64_int, var_66_int, var_67_int); // 0x80d Func
	goto Label_2111; // 0x80f Jump
	
Label_2064:
	var_68_int = 2; // 0x810 PushI
	var_69_bool = var_21_int == var_68_int; // 0x811 Eq
	if(var_69_bool == 0) goto Label_2076; // 0x812 JumpB
	var_70_int = 0; var_71_string = ""; // 0x813 PushV
	var_71_string = "hook"; // 0x814 MovS
	func_2198(var_70_int, var_71_string); // 0x815 Call
	var_72_int = 0; // 0x817 PushI
	var_73_int = 1; // 0x818 PushI
	AddItem(var_22_bool, var_70_int, var_72_int, var_73_int); // 0x819 Func
	goto Label_2111; // 0x81b Jump
	
Label_2076:
	var_74_int = 4; // 0x81c PushI
	var_75_bool = var_21_int == var_74_int; // 0x81d Eq
	if(var_75_bool == 0) goto Label_2088; // 0x81e JumpB
	var_76_int = 0; var_77_string = ""; // 0x81f PushV
	var_77_string = "syringe"; // 0x820 MovS
	func_2198(var_76_int, var_77_string); // 0x821 Call
	var_78_int = 0; // 0x823 PushI
	var_79_int = 1; // 0x824 PushI
	AddItem(var_22_bool, var_76_int, var_78_int, var_79_int); // 0x825 Func
	goto Label_2111; // 0x827 Jump
	
Label_2088:
	var_80_int = 5; // 0x828 PushI
	var_81_bool = var_21_int == var_80_int; // 0x829 Eq
	if(var_81_bool == 0) goto Label_2100; // 0x82a JumpB
	var_82_int = 0; var_83_string = ""; // 0x82b PushV
	var_83_string = "watch"; // 0x82c MovS
	func_2198(var_82_int, var_83_string); // 0x82d Call
	var_84_int = 0; // 0x82f PushI
	var_85_int = 1; // 0x830 PushI
	AddItem(var_22_bool, var_82_int, var_84_int, var_85_int); // 0x831 Func
	goto Label_2111; // 0x833 Jump
	
Label_2100:
	var_86_int = 6; // 0x834 PushI
	var_87_bool = var_21_int == var_86_int; // 0x835 Eq
	if(var_87_bool == 0) goto Label_2111; // 0x836 JumpB
	var_88_int = 0; var_89_string = ""; // 0x837 PushV
	var_89_string = "razor"; // 0x838 MovS
	func_2198(var_88_int, var_89_string); // 0x839 Call
	var_90_int = 0; // 0x83b PushI
	var_91_int = 1; // 0x83c PushI
	AddItem(var_22_bool, var_88_int, var_90_int, var_91_int); // 0x83d Func
	
Label_2112:
	var_92_int = 0; var_93_int = 0; // 0x840 PushV
	var_92_int = 0; // 0x841 MovI
	var_94_int = 50; // 0x842 PushI
	var_95_int = 0; // 0x843 PushV
	func_1835(var_95_int); // 0x844 Call
	var_96_int = 50; // 0x846 PushI
	var_97_float = var_95_int * var_96_int; // 0x847 Mult
	var_93_int = var_94_int + var_97_float; // 0x848 Add2
	func_1993(var_92_int, var_93_int); // 0x849 Call
	var_98_int = 8; // 0x84b PushI
	irand(var_21_int, var_98_int); // 0x84c Func
	var_99_int = 0; // 0x84e PushI
	var_100_bool = var_21_int == var_99_int; // 0x84f Eq
	if(var_100_bool == 0) goto Label_2138; // 0x850 JumpB
	var_101_int = 0; var_102_string = ""; // 0x851 PushV
	var_102_string = "beads"; // 0x852 MovS
	func_2198(var_101_int, var_102_string); // 0x853 Call
	var_103_int = 0; // 0x855 PushI
	var_104_int = 1; // 0x856 PushI
	AddItem(var_22_bool, var_101_int, var_103_int, var_104_int); // 0x857 Func
	goto Label_2197; // 0x859 Jump
	
Label_2138:
	var_105_int = 1; // 0x85a PushI
	var_106_bool = var_21_int == var_105_int; // 0x85b Eq
	if(var_106_bool == 0) goto Label_2150; // 0x85c JumpB
	var_107_int = 0; var_108_string = ""; // 0x85d PushV
	var_108_string = "bracelet"; // 0x85e MovS
	func_2198(var_107_int, var_108_string); // 0x85f Call
	var_109_int = 0; // 0x861 PushI
	var_110_int = 1; // 0x862 PushI
	AddItem(var_22_bool, var_107_int, var_109_int, var_110_int); // 0x863 Func
	goto Label_2197; // 0x865 Jump
	
Label_2150:
	var_111_int = 2; // 0x866 PushI
	var_112_bool = var_21_int == var_111_int; // 0x867 Eq
	if(var_112_bool == 0) goto Label_2162; // 0x868 JumpB
	var_113_int = 0; var_114_string = ""; // 0x869 PushV
	var_114_string = "ear_ring"; // 0x86a MovS
	func_2198(var_113_int, var_114_string); // 0x86b Call
	var_115_int = 0; // 0x86d PushI
	var_116_int = 1; // 0x86e PushI
	AddItem(var_22_bool, var_113_int, var_115_int, var_116_int); // 0x86f Func
	goto Label_2197; // 0x871 Jump
	
Label_2162:
	var_117_int = 3; // 0x872 PushI
	var_118_bool = var_21_int == var_117_int; // 0x873 Eq
	if(var_118_bool == 0) goto Label_2174; // 0x874 JumpB
	var_119_int = 0; var_120_string = ""; // 0x875 PushV
	var_120_string = "gold_ring"; // 0x876 MovS
	func_2198(var_119_int, var_120_string); // 0x877 Call
	var_121_int = 0; // 0x879 PushI
	var_122_int = 1; // 0x87a PushI
	AddItem(var_22_bool, var_119_int, var_121_int, var_122_int); // 0x87b Func
	goto Label_2197; // 0x87d Jump
	
Label_2174:
	var_123_int = 4; // 0x87e PushI
	var_124_bool = var_21_int == var_123_int; // 0x87f Eq
	if(var_124_bool == 0) goto Label_2186; // 0x880 JumpB
	var_125_int = 0; var_126_string = ""; // 0x881 PushV
	var_126_string = "silver_ring"; // 0x882 MovS
	func_2198(var_125_int, var_126_string); // 0x883 Call
	var_127_int = 0; // 0x885 PushI
	var_128_int = 1; // 0x886 PushI
	AddItem(var_22_bool, var_125_int, var_127_int, var_128_int); // 0x887 Func
	goto Label_2197; // 0x889 Jump
	
Label_2186:
	var_129_int = 5; // 0x88a PushI
	var_130_bool = var_21_int == var_129_int; // 0x88b Eq
	if(var_130_bool == 0) goto Label_2197; // 0x88c JumpB
	var_131_int = 0; var_132_string = ""; // 0x88d PushV
	var_132_string = "flower"; // 0x88e MovS
	func_2198(var_131_int, var_132_string); // 0x88f Call
	var_133_int = 0; // 0x891 PushI
	var_134_int = 1; // 0x892 PushI
	AddItem(var_22_bool, var_131_int, var_133_int, var_134_int); // 0x893 Func
}


func_1526(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x5f6 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x5f7 PushV
	var_28_object = var_24_object; // 0x5f8 Mov
	func_1490(var_27_bool, var_28_object); // 0x5f9 Call
	var_44_bool = var_27_bool == 0; // 0x5fb Not
	if(var_44_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_23_bool = 0; // 0x5fd MovB
	return 2; // 0x5fe Return
	
Label_1535:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x5ff PushV
	var_46_object = var_24_object; // 0x600 Mov
	var_47_string = "noaccess"; // 0x601 MovS
	func_1473(var_45_bool, var_46_object, var_47_string); // 0x602 Call
	var_54_bool = var_45_bool == 0; // 0x604 Not
	if(var_54_bool == 0) goto Label_1544; // 0x605 JumpB
	var_23_bool = 1; // 0x606 MovB
	return 2; // 0x607 Return
	
Label_1544:
	var_55_string = "noaccess"; // 0x608 PushS
	GetProperty(var_55_string, var_26_int); // 0x609 ObjFunc
	var_56_int = 0; // 0x60b PushI
	var_23_bool = var_26_int == var_56_int; // 0x60c Eq2
	return 2; // 0x60d Return
}


