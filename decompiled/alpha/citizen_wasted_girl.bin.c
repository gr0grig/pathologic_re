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
	func_2095(var_20_object); // 0x28 Call
	var_18_int = var_19_int; // 0x29 Mov
	var_21_int = 0; // 0x2b PushI
	var_22_bool = var_18_int > var_21_int; // 0x2c GT
	if(var_22_bool == 0) goto Label_50; // 0x2d JumpB
	var_23_object = Obj(); // 0x2e PushV
	var_23_object = var_16_bool; // 0x2f Mov
	func_2098(var_23_object); // 0x30 Call
	
Label_50:
	return 2; // 0x32 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_2104(); // 0x34 Call
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
	func_2095(var_20_object); // 0xc5 Call
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
	func_2098(var_26_object); // 0xd3 Call
	
Label_213:
	return 2; // 0xd5 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0xd6 PushV
	var_19_int = 0; var_20_object = Obj(); // 0xd7 PushV
	var_20_object = var_16_bool; // 0xd8 Mov
	func_2049(var_19_int, var_20_object); // 0xd9 Call
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
	func_2059(var_60_object); // 0xe7 Call
	
Label_233:
	return 2; // 0xe9 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xea PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); // 0xeb PushV
	var_21_object = var_16_string; // 0xec Mov
	var_22_object = var_17_bool; // 0xed Mov
	func_2404(var_20_bool, var_21_object, var_22_object); // 0xee Call
	if(var_20_bool == 0) goto Label_259; // 0xf0 JumpB
	var_61_int = 0; var_62_object = Obj(); // 0xf1 PushV
	var_62_object = var_16_string; // 0xf2 Mov
	func_2067(var_61_int, var_62_object); // 0xf3 Call
	var_19_int = var_61_int; // 0xf4 Mov
	var_91_int = 0; // 0xf6 PushI
	var_92_bool = var_19_int > var_91_int; // 0xf7 GT
	if(var_92_bool == 0) goto Label_259; // 0xf8 JumpB
	var_93_int = 1; // 0xf9 PushI
	var_94_bool = var_19_int > var_93_int; // 0xfa GT
	if(var_94_bool == 0) goto Label_255; // 0xfb JumpB
	func_333(var_19_int); // 0xfd Call
	
Label_255:
	var_96_object = Obj(); // 0xff PushV
	var_96_object = var_16_string; // 0x100 Mov
	func_2077(var_96_object); // 0x101 Call
	
Label_259:
	return 2; // 0x103 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x104 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x105 PushV
	var_20_object = var_16_bool; // 0x106 Mov
	func_2085(var_20_object); // 0x107 Call
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
	func_2088(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x118 PushV
	var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x119 PushV
	var_21_string = var_17_bool; // 0x11a Mov
	var_22_object = var_16_string; // 0x11b Mov
	func_2090(var_22_object); // 0x11c Call
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
	func_2093(); // 0x12b Call
	
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
	func_2104(); // 0x14a Call
	return 0; // 0x14c Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_333(var_16_bool); // 0x15f Call
	var_18_object = Obj(); // 0x161 PushV
	var_18_object = var_16_bool; // 0x162 Mov
	func_1994(); // 0x163 Call
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
	func_2095(var_20_object); // 0x1e1 Call
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
	func_2098(var_25_object); // 0x1ef Call
	
Label_497:
	return 2; // 0x1f1 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x1f2 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x1f3 PushV
	var_20_object = var_16_bool; // 0x1f4 Mov
	func_2049(var_19_int, var_20_object); // 0x1f5 Call
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
	func_2059(var_59_object); // 0x203 Call
	
Label_517:
	return 2; // 0x205 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x206 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); // 0x207 PushV
	var_21_object = var_16_string; // 0x208 Mov
	var_22_object = var_17_bool; // 0x209 Mov
	func_2404(var_20_bool, var_21_object, var_22_object); // 0x20a Call
	if(var_20_bool == 0) goto Label_543; // 0x20c JumpB
	var_61_int = 0; var_62_object = Obj(); // 0x20d PushV
	var_62_object = var_16_string; // 0x20e Mov
	func_2067(var_61_int, var_62_object); // 0x20f Call
	var_19_int = var_61_int; // 0x210 Mov
	var_91_int = 0; // 0x212 PushI
	var_92_bool = var_19_int > var_91_int; // 0x213 GT
	if(var_92_bool == 0) goto Label_543; // 0x214 JumpB
	var_93_int = 1; // 0x215 PushI
	var_94_bool = var_19_int > var_93_int; // 0x216 GT
	if(var_94_bool == 0) goto Label_539; // 0x217 JumpB
	func_662(); // 0x219 Call
	
Label_539:
	var_95_object = Obj(); // 0x21b PushV
	var_95_object = var_16_string; // 0x21c Mov
	func_2077(var_95_object); // 0x21d Call
	
Label_543:
	return 2; // 0x21f Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x220 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x221 PushV
	var_20_object = var_16_bool; // 0x222 Mov
	func_2085(var_20_object); // 0x223 Call
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
	func_2088(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x234 PushV
	var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x235 PushV
	var_21_string = var_17_bool; // 0x236 Mov
	var_22_object = var_16_string; // 0x237 Mov
	func_2090(var_22_object); // 0x238 Call
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
	func_2093(); // 0x247 Call
	
Label_585:
	return 2; // 0x249 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_662(); // 0x24b Call
	func_2104(); // 0x24e Call
	return 0; // 0x250 Return
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x2d3 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x2d4 PushV
	var_20_object = var_16_bool; // 0x2d5 Mov
	func_2095(var_20_object); // 0x2d6 Call
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
	func_2098(var_27_object); // 0x2e4 Call
	
Label_742:
	return 2; // 0x2e6 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x2e7 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x2e8 PushV
	var_20_object = var_16_bool; // 0x2e9 Mov
	func_2049(var_19_int, var_20_object); // 0x2ea Call
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
	func_2059(var_61_object); // 0x2f8 Call
	
Label_762:
	return 2; // 0x2fa Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2fb PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); // 0x2fc PushV
	var_21_object = var_16_string; // 0x2fd Mov
	var_22_object = var_17_bool; // 0x2fe Mov
	func_2404(var_20_bool, var_21_object, var_22_object); // 0x2ff Call
	if(var_20_bool == 0) goto Label_788; // 0x301 JumpB
	var_61_int = 0; var_62_object = Obj(); // 0x302 PushV
	var_62_object = var_16_string; // 0x303 Mov
	func_2067(var_61_int, var_62_object); // 0x304 Call
	var_19_int = var_61_int; // 0x305 Mov
	var_91_int = 0; // 0x307 PushI
	var_92_bool = var_19_int > var_91_int; // 0x308 GT
	if(var_92_bool == 0) goto Label_788; // 0x309 JumpB
	var_93_int = 1; // 0x30a PushI
	var_94_bool = var_19_int > var_93_int; // 0x30b GT
	if(var_94_bool == 0) goto Label_784; // 0x30c JumpB
	func_831(); // 0x30e Call
	
Label_784:
	var_97_object = Obj(); // 0x310 PushV
	var_97_object = var_16_string; // 0x311 Mov
	func_2077(var_97_object); // 0x312 Call
	
Label_788:
	return 2; // 0x314 Return
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; // 0x315 PushV
	var_19_int = 0; var_20_object = Obj(); // 0x316 PushV
	var_20_object = var_16_bool; // 0x317 Mov
	func_2085(var_20_object); // 0x318 Call
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
	func_2088(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x329 PushV
	var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x32a PushV
	var_21_string = var_17_bool; // 0x32b Mov
	var_22_object = var_16_string; // 0x32c Mov
	func_2090(var_22_object); // 0x32d Call
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
	func_2093(); // 0x33c Call
	
Label_830:
	return 2; // 0x33e Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831(); // 0x34c Call
	var_19_object = Obj(); // 0x34e PushV
	var_19_object = var_16_bool; // 0x34f Mov
	func_1994(); // 0x350 Call
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
	func_1655(var_23_bool, var_24_object); // 0x35a Call
	var_57_bool = var_23_bool == 0; // 0x35c Not
	if(var_57_bool == 0) goto Label_866; // 0x35d JumpB
	func_831(); // 0x35f Call
	return 4; // 0x361 Return
	
Label_866:
	GetDirection(var_19_cvector); // 0x362 Func
	var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0x364 PushV
	var_61_object = var_0_bool; // 0x365 MovT
	func_1587(var_61_object); // 0x366 Call
	var_20_cvector = var_60_cvector; // 0x367 Mov
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x369 PushV
	var_67_cvector = var_19_cvector; // 0x36a Mov
	var_68_cvector = var_20_cvector; // 0x36b Mov
	func_1947(var_66_float, var_67_cvector, var_68_cvector); // 0x36c Call
	var_90_float = 0.5; // 0x36e PushF
	var_91_bool = var_66_float < var_90_float; // 0x36f LT
	if(var_91_bool == 0) goto Label_885; // 0x370 JumpB
	var_92_object = Obj(); // 0x371 PushV
	var_92_object = var_0_bool; // 0x372 MovT
	func_1746(); // 0x373 Call
	
Label_885:
	return 4; // 0x375 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_831(); // 0x377 Call
	func_2104(); // 0x37a Call
	return 0; // 0x37c Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	func_1074(var_15_bool); // 0x39a Call
	func_2104(); // 0x39d Call
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
	func_1582(var_88_cvector); // 0x42e Call
	var_1_bool = var_88_cvector + var_23_cvector; // 0x430 Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1074(var_16_bool); // 0x43b Call
	var_18_object = Obj(); // 0x43d PushV
	var_18_object = var_16_bool; // 0x43e Mov
	func_1994(); // 0x43f Call
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
	func_1582(var_88_cvector); // 0x4e0 Call
	var_1_bool = var_88_cvector + var_23_cvector; // 0x4e2 Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1252(var_16_bool); // 0x4ed Call
	var_18_object = Obj(); // 0x4ef PushV
	var_18_object = var_16_bool; // 0x4f0 Mov
	func_1994(); // 0x4f1 Call
	return 0; // 0x4f3 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int)
{
	var_18_int = 1; // 0x5a7 PushI
	if(var_18_int == 0) goto Label_1581; // 0x5a8 JumpB
	func_1903(); // 0x5aa Call
	var_20_int = 15846; // 0x5ac PushI
	var_21_bool = var_16_int == var_20_int; // 0x5ad Eq
	if(var_21_bool == 0) goto Label_1500; // 0x5ae JumpB
	var_22_string = ""; // 0x5af PushV
	var_22_string = "Neutral"; // 0x5b0 MovS
	func_1430(var_17_int, var_22_string); // 0x5b1 Call
	var_37_int = 14610; // 0x5b3 PushI
	SetMessage(var_37_int); // 0x5b4 TObjFunc
	ClearReplies(); // 0x5b6 TObjFunc
	var_38_int = 14611; // 0x5b8 PushI
	var_39_int = 15848; // 0x5b9 PushI
	var_40_int = 15847; // 0x5ba PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0x5bb TObjFunc
	var_41_int = 14618; // 0x5bd PushI
	var_42_int = 15848; // 0x5be PushI
	var_43_int = 15854; // 0x5bf PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0x5c0 TObjFunc
	return 0; // 0x5c2 Return
	
Label_1500:
	var_44_int = 15860; // 0x5dc PushI
	var_45_bool = var_16_int == var_44_int; // 0x5dd Eq
	if(var_45_bool == 0) goto Label_1523; // 0x5de JumpB
	var_46_string = ""; // 0x5df PushV
	var_46_string = "Neutral"; // 0x5e0 MovS
	func_1430(var_17_int, var_46_string); // 0x5e1 Call
	var_47_int = 14623; // 0x5e3 PushI
	SetMessage(var_47_int); // 0x5e4 TObjFunc
	ClearReplies(); // 0x5e6 TObjFunc
	var_48_int = 14624; // 0x5e8 PushI
	var_49_int = -1; // 0x5e9 PushI
	var_50_int = 15861; // 0x5ea PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x5eb TObjFunc
	var_51_int = 14625; // 0x5ed PushI
	var_52_int = -1; // 0x5ee PushI
	var_53_int = 15862; // 0x5ef PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x5f0 TObjFunc
	return 0; // 0x5f2 Return
	
Label_1523:
	var_54_int = 15848; // 0x5f3 PushI
	var_55_bool = var_16_int == var_54_int; // 0x5f4 Eq
	if(var_55_bool == 0) goto Label_1551; // 0x5f5 JumpB
	var_56_string = ""; // 0x5f6 PushV
	var_56_string = "Neutral"; // 0x5f7 MovS
	func_1430(var_17_int, var_56_string); // 0x5f8 Call
	var_57_int = 14612; // 0x5fa PushI
	SetMessage(var_57_int); // 0x5fb TObjFunc
	ClearReplies(); // 0x5fd TObjFunc
	var_58_int = 14613; // 0x5ff PushI
	var_59_int = -1; // 0x600 PushI
	var_60_int = 15849; // 0x601 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x602 TObjFunc
	var_61_int = 14614; // 0x604 PushI
	var_62_int = -1; // 0x605 PushI
	var_63_int = 15850; // 0x606 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x607 TObjFunc
	var_64_int = 14615; // 0x609 PushI
	var_65_int = 15852; // 0x60a PushI
	var_66_int = 15851; // 0x60b PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x60c TObjFunc
	return 0; // 0x60e Return
	
Label_1551:
	var_67_int = 15852; // 0x60f PushI
	var_68_bool = var_16_int == var_67_int; // 0x610 Eq
	if(var_68_bool == 0) goto Label_1569; // 0x611 JumpB
	var_69_string = ""; // 0x612 PushV
	var_69_string = "Neutral"; // 0x613 MovS
	func_1430(var_17_int, var_69_string); // 0x614 Call
	var_70_int = 14616; // 0x616 PushI
	SetMessage(var_70_int); // 0x617 TObjFunc
	ClearReplies(); // 0x619 TObjFunc
	var_71_int = 14617; // 0x61b PushI
	var_72_int = -1; // 0x61c PushI
	var_73_int = 15853; // 0x61d PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x61e TObjFunc
	return 0; // 0x620 Return
	
Label_1569:
	var_3_bool = 1; // 0x621 TMovB
	var_74_bool = 0; // 0x622 PushV
	func_2350(var_74_bool); // 0x623 Call
	if(var_74_bool == 0) goto Label_1577; // 0x625 JumpB
	lshStopAnimation(); // 0x626 Func
	goto Label_1579; // 0x628 Jump
	
Label_1579:
	return 0; // 0x62b Return
	
Label_1577:
	StopAnimation(); // 0x629 Func
	
Label_1581:
	return 0; // 0x62d Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x7bd PushV
	var_20_string = "health"; // 0x7be PushS
	var_21_bool = var_17_string == var_20_string; // 0x7bf Eq
	if(var_21_bool == 0) goto Label_1993; // 0x7c0 JumpB
	var_22_string = "health"; // 0x7c1 PushS
	GetProperty(var_22_string, var_19_float); // 0x7c2 Func
	var_23_int = 0; // 0x7c4 PushI
	var_24_bool = var_19_float <= var_23_int; // 0x7c5 LE
	if(var_24_bool == 0) goto Label_1993; // 0x7c6 JumpB
	SignalDeath(var_16_object); // 0x7c7 Func
	
Label_1993:
	return 2; // 0x7c9 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0x7cb PushV
	var_17_object = var_16_object; // 0x7cc Mov
	func_1973(var_17_object); // 0x7cd Call
	return 0; // 0x7cf Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x7d1 PushV
	var_20_object = var_16_object; // 0x7d2 Mov
	var_21_int = var_17_int; // 0x7d3 Mov
	var_22_float = var_18_float; // 0x7d4 Mov
	func_1679(var_21_int, var_22_float); // 0x7d5 Call
	return 0; // 0x7d7 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 1; // 0xaa PushB
	SensePlayerOnly(var_16_bool); // 0xab Func
	func_2352(); // 0xae Call
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
	var_169_string = "all"; // 0x6 PushS
	var_170_string = "idle"; // 0x7 PushS
	PlayAnimation(var_169_string, var_170_string); // 0x8 Func
	var_171_bool = var_0_bool; // 0xa PushT
	if(var_171_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_2049(var_19_int, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x802 PushV
	var_22_object = var_20_object; // 0x803 Mov
	func_1655(var_21_bool, var_22_object); // 0x804 Call
	if(var_21_bool == 0) goto Label_2057; // 0x806 JumpB
	var_19_int = 2; // 0x807 MovI
	goto Label_2058; // 0x808 Jump
	
Label_2058:
	return 0; // 0x80a Return
	
Label_2057:
	var_19_int = 0; // 0x809 MovI
}


func_2059(var_61_object)
{
	var_62_object = Obj(); // 0x80c PushV
	var_62_object = var_61_object; // 0x80d Mov
	TaskCall(5); // 0x80e TaskCall
	func_893(var_62_object); // 0x80f Call
	TaskReturn(); // 0x810 TaskReturn
	return 0; // 0x812 Return
}


func_2067(var_61_int, var_62_object)
{
	var_63_bool = 0; var_64_object = Obj(); // 0x814 PushV
	var_64_object = var_62_object; // 0x815 Mov
	func_1655(var_63_bool, var_64_object); // 0x816 Call
	if(var_63_bool == 0) goto Label_2075; // 0x818 JumpB
	var_61_int = 2; // 0x819 MovI
	goto Label_2076; // 0x81a Jump
	
Label_2076:
	return 0; // 0x81c Return
	
Label_2075:
	var_61_int = 0; // 0x81b MovI
}


func_22(var_18_object)
{
	EventDisable(0); // 0x17 EventDisable
	var_19_object = Obj(); // 0x18 PushV
	var_19_object = var_18_object; // 0x19 Mov
	func_55(var_19_object); // 0x1a Call
	var_69_object = Obj(); // 0x1c PushV
	var_69_object = var_18_object; // 0x1d Mov
	func_2467(); // 0x1e Call
	EventEnable(0); // 0x20 EventEnable
	
Label_33:
	Hold(); // 0x21 Func
	goto Label_33; // 0x23 Jump
}


func_2077(var_97_object)
{
	var_98_object = Obj(); // 0x81e PushV
	var_98_object = var_97_object; // 0x81f Mov
	TaskCall(6); // 0x820 TaskCall
	func_1136(var_99_object, var_100_cvector, var_101_bool, var_98_object); // 0x821 Call
	TaskReturn(); // 0x822 TaskReturn
	return 0; // 0x824 Return
}


func_2085(var_19_int)
{
	var_19_int = 0; // 0x826 MovI
	return 0; // 0x827 Return
}


func_2088()
{
	return 0; // 0x829 Return
}


func_2090(var_20_int)
{
	var_20_int = 0; // 0x82b MovI
	return 0; // 0x82c Return
}


func_2093()
{
	return 0; // 0x82e Return
}


func_1582(var_88_cvector)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); // 0x62e PushV
	GetPosition(var_90_cvector); // 0x62f Func
	var_88_cvector = var_90_cvector; // 0x631 Mov
	return 2; // 0x632 Return
}


func_2095(var_19_int)
{
	var_19_int = 2; // 0x830 MovI
	return 0; // 0x831 Return
}


func_2098(var_27_object)
{
	var_28_object = Obj(); // 0x833 PushV
	var_28_object = var_27_object; // 0x834 Mov
	func_2360(var_27_object, var_28_object); // 0x835 Call
	return 0; // 0x837 Return
}


func_1587(var_73_cvector)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x633 PushV
	GetPosition(var_77_cvector); // 0x634 Func
	GetPosition(var_78_cvector); // 0x636 ObjFunc
	var_73_cvector = var_78_cvector - var_77_cvector; // 0x638 Sub2
	return 4; // 0x639 Return
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


func_2104()
{
	return 0; // 0x838 Return
}


func_2105(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x839 PushV
	var_91_string = "player"; // 0x83a PushS
	GetVariable(var_91_string, var_90_int); // 0x83b Func
	var_92_int = 0; // 0x83d PushI
	var_93_bool = var_90_int == var_92_int; // 0x83e Eq
	if(var_93_bool == 0) goto Label_2115; // 0x83f JumpB
	var_88_int = 200001; // 0x840 MovI
	return 2; // 0x841 Return
	
Label_2115:
	var_94_int = 1; // 0x843 PushI
	var_95_bool = var_90_int == var_94_int; // 0x844 Eq
	if(var_95_bool == 0) goto Label_2120; // 0x845 JumpB
	var_88_int = 200002; // 0x846 MovI
	return 2; // 0x847 Return
	
Label_2120:
	var_88_int = 200003; // 0x848 MovI
	return 2; // 0x849 Return
}


func_1594(var_44_float)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x63a PushV
	GetPosition(var_49_cvector); // 0x63b Func
	GetPosition(var_50_cvector); // 0x63d ObjFunc
	var_51_cvector = var_50_cvector - var_49_cvector; // 0x63f Sub2
	var_44_float = var_51_cvector | var_51_cvector; // 0x640 Or2
	return 6; // 0x641 Return
}


func_1090(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x442 PushV
	GetDirection(var_71_cvector); // 0x443 Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x445 PushV
	var_74_object = var_0_bool; // 0x446 MovT
	func_1587(var_74_object); // 0x447 Call
	var_72_cvector = var_73_cvector; // 0x448 Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x44a PushV
	var_80_cvector = var_71_cvector; // 0x44b Mov
	var_81_cvector = var_72_cvector; // 0x44c Mov
	func_1920(var_79_float, var_80_cvector, var_81_cvector); // 0x44d Call
	var_87_float = -0.34202; // 0x44f PushF
	var_68_bool = var_79_float >= var_87_float; // 0x450 GE2
	return 4; // 0x451 Return
}


func_1602(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0; // 0x642 PushV
	var_50_string = "HasProperty"; // 0x643 PushS
	var_51_int = 2; // 0x644 PushI
	var_52_bool = IsFuncExist(var_46_object, var_50_string, var_51_int); // 0x645 FuncExist
	var_53_bool = var_52_bool == 0; // 0x646 Not
	if(var_53_bool == 0) goto Label_1610; // 0x647 JumpB
	var_45_bool = 0; // 0x648 MovB
	return 2; // 0x649 Return
	
Label_1610:
	HasProperty(var_47_string, var_49_bool); // 0x64a ObjFunc
	var_45_bool = var_49_bool; // 0x64c Mov
	return 2; // 0x64d Return
}


func_2122(var_24_int, var_25_int)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; // 0x84a PushV
	var_43_bool = var_24_int > var_25_int; // 0x84b GT
	if(var_43_bool == 0) goto Label_2129; // 0x84c JumpB
	var_44_string = "GenerateMoney: iMin > iMax"; // 0x84d PushS
	Trace(var_44_string); // 0x84e Func
	return 8; // 0x850 Return
	
Label_2129:
	var_39_int = 0; // 0x851 MovI
	var_45_bool = var_24_int != var_25_int; // 0x852 Neq
	if(var_45_bool == 0) goto Label_2136; // 0x853 JumpB
	var_46_int = var_25_int - var_24_int; // 0x854 Sub
	irand(var_40_int, var_46_int); // 0x855 Func
	goto Label_2140; // 0x857 Jump
	
Label_2140:
	var_39_int = var_39_int + var_24_int; // 0x85c Add2
	var_47_int = 0; // 0x85d PushI
	var_48_bool = var_39_int == var_47_int; // 0x85e Eq
	if(var_48_bool == 0) goto Label_2145; // 0x85f JumpB
	return 8; // 0x860 Return
	
Label_2145:
	var_49_string = "Money"; // 0x861 PushS
	GetInvItemByName(var_41_int, var_49_string); // 0x862 Func
	var_50_int = 0; // 0x864 PushI
	AddItem(var_42_bool, var_41_int, var_50_int, var_39_int); // 0x865 Func
	return 8; // 0x867 Return
	
Label_2136:
	var_51_int = 0; // 0x858 PushI
	var_52_bool = var_24_int == var_51_int; // 0x859 Eq
	if(var_52_bool == 0) goto Label_2140; // 0x85a JumpB
	return 8; // 0x85b Return
}


func_1614(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x64e PushV
	IsDead(var_41_bool); // 0x64f ObjFunc
	var_38_bool = var_41_bool; // 0x651 Mov
	return 2; // 0x652 Return
}


func_593()
{
	var_162_int = 0; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_bool = 0; var_167_float = 0; var_168_bool = 0; var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_bool = 0; // 0x251 PushV
	WaitForAnimEnd(); // 0x252 Func
	var_176_bool = 0; // 0x254 PushV
	func_1757(var_176_bool); // 0x255 Call
	var_177_bool = var_176_bool == 0; // 0x257 Not
	if(var_177_bool == 0) goto Label_602; // 0x258 JumpB
	return 14; // 0x259 Return
	
Label_602:
	var_178_int = 0; // 0x25a PushV
	func_2015(var_178_int); // 0x25b Call
	var_169_int = var_178_int; // 0x25c Mov
	var_170_int = 0; // 0x25e MovI
	
Label_607:
	var_191_bool = 0; // 0x25f PushV
	var_191_bool = 0; // 0x260 MovB
	var_192_int = 5; // 0x261 PushI
	var_193_bool = var_170_int < var_192_int; // 0x262 LT
	if(var_193_bool == 0) goto Label_617; // 0x263 JumpB
	var_194_bool = 0; // 0x264 PushV
	func_1757(var_194_bool); // 0x265 Call
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
	func_2008(var_200_string, var_201_int); // 0x277 Call
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


func_1106(var_30_cvector, var_31_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; // 0x452 PushV
	GetPosition(var_38_cvector); // 0x453 Func
	GetPosition(var_39_cvector); // 0x455 TObjFunc
	GetDirection(var_40_cvector); // 0x457 Func
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x459 PushV
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x45a PushV
	var_47_cvector = var_38_cvector - var_39_cvector; // 0x45b Sub2
	func_1910(var_46_cvector, var_47_cvector); // 0x45c Call
	var_53_float = 0.75; // 0x45e PushF
	var_54_float = var_40_cvector * var_53_float; // 0x45f Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x460 Add2
	func_1910(var_44_cvector, var_45_cvector); // 0x461 Call
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


func_1619(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x653 PushV
	var_33_bool = var_28_object == 0; // 0x654 NullEq
	if(var_33_bool == 0) goto Label_1624; // 0x655 JumpB
	var_27_bool = 0; // 0x656 MovB
	return 4; // 0x657 Return
	
Label_1624:
	var_34_bool = 0; // 0x658 PushV
	var_34_bool = 0; // 0x659 MovB
	var_35_string = "IsDead"; // 0x65a PushS
	var_36_int = 1; // 0x65b PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x65c FuncExist
	if(var_37_bool == 0) goto Label_1636; // 0x65d JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x65e PushV
	var_39_object = var_28_object; // 0x65f Mov
	func_1614(var_39_object); // 0x660 Call
	if(var_38_bool == 0) goto Label_1636; // 0x662 JumpB
	var_34_bool = 1; // 0x663 MovB
	
Label_1636:
	if(var_34_bool == 0) goto Label_1639; // 0x664 JumpB
	var_27_bool = 0; // 0x665 MovB
	return 4; // 0x666 Return
	
Label_1639:
	GetScene(var_31_object); // 0x667 Func
	var_42_bool = var_31_object == 0; // 0x669 NullEq
	if(var_42_bool == 0) goto Label_1645; // 0x66a JumpB
	var_27_bool = 0; // 0x66b MovB
	return 4; // 0x66c Return
	
Label_1645:
	GetScene(var_32_object); // 0x66d ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x66f Neq
	if(var_43_bool == 0) goto Label_1651; // 0x670 JumpB
	var_27_bool = 0; // 0x671 MovB
	return 4; // 0x672 Return
	
Label_1651:
	var_27_bool = 1; // 0x673 MovB
	return 4; // 0x674 Return
}


func_2152(var_18_bool)
{
	var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_bool = 0; // 0x868 PushV
	var_23_bool = var_18_bool; // 0x869 Push
	if(var_23_bool == 0) goto Label_2241; // 0x86a JumpB
	var_24_int = 0; var_25_int = 0; // 0x86b PushV
	var_24_int = 0; // 0x86c MovI
	var_26_int = 100; // 0x86d PushI
	var_27_int = 0; // 0x86e PushV
	func_1964(var_27_int); // 0x86f Call
	var_33_int = 100; // 0x871 PushI
	var_34_float = var_27_int * var_33_int; // 0x872 Mult
	var_25_int = var_26_int + var_34_float; // 0x873 Add2
	func_2122(var_24_int, var_25_int); // 0x874 Call
	var_53_int = 9; // 0x876 PushI
	irand(var_21_int, var_53_int); // 0x877 Func
	var_54_int = 0; // 0x879 PushI
	var_55_bool = var_21_int == var_54_int; // 0x87a Eq
	if(var_55_bool == 0) goto Label_2181; // 0x87b JumpB
	var_56_int = 0; var_57_string = ""; // 0x87c PushV
	var_57_string = "lemon"; // 0x87d MovS
	func_2327(var_56_int, var_57_string); // 0x87e Call
	var_60_int = 0; // 0x880 PushI
	var_61_int = 1; // 0x881 PushI
	AddItem(var_22_bool, var_56_int, var_60_int, var_61_int); // 0x882 Func
	goto Label_2240; // 0x884 Jump
	
Label_2240:
	goto Label_2326; // 0x8c0 Jump
	
Label_2326:
	return 4; // 0x916 Return
	
Label_2181:
	var_62_int = 1; // 0x885 PushI
	var_63_bool = var_21_int == var_62_int; // 0x886 Eq
	if(var_63_bool == 0) goto Label_2193; // 0x887 JumpB
	var_64_int = 0; var_65_string = ""; // 0x888 PushV
	var_65_string = "rusk"; // 0x889 MovS
	func_2327(var_64_int, var_65_string); // 0x88a Call
	var_66_int = 0; // 0x88c PushI
	var_67_int = 1; // 0x88d PushI
	AddItem(var_22_bool, var_64_int, var_66_int, var_67_int); // 0x88e Func
	goto Label_2240; // 0x890 Jump
	
Label_2193:
	var_68_int = 2; // 0x891 PushI
	var_69_bool = var_21_int == var_68_int; // 0x892 Eq
	if(var_69_bool == 0) goto Label_2205; // 0x893 JumpB
	var_70_int = 0; var_71_string = ""; // 0x894 PushV
	var_71_string = "hook"; // 0x895 MovS
	func_2327(var_70_int, var_71_string); // 0x896 Call
	var_72_int = 0; // 0x898 PushI
	var_73_int = 1; // 0x899 PushI
	AddItem(var_22_bool, var_70_int, var_72_int, var_73_int); // 0x89a Func
	goto Label_2240; // 0x89c Jump
	
Label_2205:
	var_74_int = 4; // 0x89d PushI
	var_75_bool = var_21_int == var_74_int; // 0x89e Eq
	if(var_75_bool == 0) goto Label_2217; // 0x89f JumpB
	var_76_int = 0; var_77_string = ""; // 0x8a0 PushV
	var_77_string = "syringe"; // 0x8a1 MovS
	func_2327(var_76_int, var_77_string); // 0x8a2 Call
	var_78_int = 0; // 0x8a4 PushI
	var_79_int = 1; // 0x8a5 PushI
	AddItem(var_22_bool, var_76_int, var_78_int, var_79_int); // 0x8a6 Func
	goto Label_2240; // 0x8a8 Jump
	
Label_2217:
	var_80_int = 5; // 0x8a9 PushI
	var_81_bool = var_21_int == var_80_int; // 0x8aa Eq
	if(var_81_bool == 0) goto Label_2229; // 0x8ab JumpB
	var_82_int = 0; var_83_string = ""; // 0x8ac PushV
	var_83_string = "watch"; // 0x8ad MovS
	func_2327(var_82_int, var_83_string); // 0x8ae Call
	var_84_int = 0; // 0x8b0 PushI
	var_85_int = 1; // 0x8b1 PushI
	AddItem(var_22_bool, var_82_int, var_84_int, var_85_int); // 0x8b2 Func
	goto Label_2240; // 0x8b4 Jump
	
Label_2229:
	var_86_int = 6; // 0x8b5 PushI
	var_87_bool = var_21_int == var_86_int; // 0x8b6 Eq
	if(var_87_bool == 0) goto Label_2240; // 0x8b7 JumpB
	var_88_int = 0; var_89_string = ""; // 0x8b8 PushV
	var_89_string = "razor"; // 0x8b9 MovS
	func_2327(var_88_int, var_89_string); // 0x8ba Call
	var_90_int = 0; // 0x8bc PushI
	var_91_int = 1; // 0x8bd PushI
	AddItem(var_22_bool, var_88_int, var_90_int, var_91_int); // 0x8be Func
	
Label_2241:
	var_92_int = 0; var_93_int = 0; // 0x8c1 PushV
	var_92_int = 0; // 0x8c2 MovI
	var_94_int = 50; // 0x8c3 PushI
	var_95_int = 0; // 0x8c4 PushV
	func_1964(var_95_int); // 0x8c5 Call
	var_96_int = 50; // 0x8c7 PushI
	var_97_float = var_95_int * var_96_int; // 0x8c8 Mult
	var_93_int = var_94_int + var_97_float; // 0x8c9 Add2
	func_2122(var_92_int, var_93_int); // 0x8ca Call
	var_98_int = 8; // 0x8cc PushI
	irand(var_21_int, var_98_int); // 0x8cd Func
	var_99_int = 0; // 0x8cf PushI
	var_100_bool = var_21_int == var_99_int; // 0x8d0 Eq
	if(var_100_bool == 0) goto Label_2267; // 0x8d1 JumpB
	var_101_int = 0; var_102_string = ""; // 0x8d2 PushV
	var_102_string = "beads"; // 0x8d3 MovS
	func_2327(var_101_int, var_102_string); // 0x8d4 Call
	var_103_int = 0; // 0x8d6 PushI
	var_104_int = 1; // 0x8d7 PushI
	AddItem(var_22_bool, var_101_int, var_103_int, var_104_int); // 0x8d8 Func
	goto Label_2326; // 0x8da Jump
	
Label_2267:
	var_105_int = 1; // 0x8db PushI
	var_106_bool = var_21_int == var_105_int; // 0x8dc Eq
	if(var_106_bool == 0) goto Label_2279; // 0x8dd JumpB
	var_107_int = 0; var_108_string = ""; // 0x8de PushV
	var_108_string = "bracelet"; // 0x8df MovS
	func_2327(var_107_int, var_108_string); // 0x8e0 Call
	var_109_int = 0; // 0x8e2 PushI
	var_110_int = 1; // 0x8e3 PushI
	AddItem(var_22_bool, var_107_int, var_109_int, var_110_int); // 0x8e4 Func
	goto Label_2326; // 0x8e6 Jump
	
Label_2279:
	var_111_int = 2; // 0x8e7 PushI
	var_112_bool = var_21_int == var_111_int; // 0x8e8 Eq
	if(var_112_bool == 0) goto Label_2291; // 0x8e9 JumpB
	var_113_int = 0; var_114_string = ""; // 0x8ea PushV
	var_114_string = "ear_ring"; // 0x8eb MovS
	func_2327(var_113_int, var_114_string); // 0x8ec Call
	var_115_int = 0; // 0x8ee PushI
	var_116_int = 1; // 0x8ef PushI
	AddItem(var_22_bool, var_113_int, var_115_int, var_116_int); // 0x8f0 Func
	goto Label_2326; // 0x8f2 Jump
	
Label_2291:
	var_117_int = 3; // 0x8f3 PushI
	var_118_bool = var_21_int == var_117_int; // 0x8f4 Eq
	if(var_118_bool == 0) goto Label_2303; // 0x8f5 JumpB
	var_119_int = 0; var_120_string = ""; // 0x8f6 PushV
	var_120_string = "gold_ring"; // 0x8f7 MovS
	func_2327(var_119_int, var_120_string); // 0x8f8 Call
	var_121_int = 0; // 0x8fa PushI
	var_122_int = 1; // 0x8fb PushI
	AddItem(var_22_bool, var_119_int, var_121_int, var_122_int); // 0x8fc Func
	goto Label_2326; // 0x8fe Jump
	
Label_2303:
	var_123_int = 4; // 0x8ff PushI
	var_124_bool = var_21_int == var_123_int; // 0x900 Eq
	if(var_124_bool == 0) goto Label_2315; // 0x901 JumpB
	var_125_int = 0; var_126_string = ""; // 0x902 PushV
	var_126_string = "silver_ring"; // 0x903 MovS
	func_2327(var_125_int, var_126_string); // 0x904 Call
	var_127_int = 0; // 0x906 PushI
	var_128_int = 1; // 0x907 PushI
	AddItem(var_22_bool, var_125_int, var_127_int, var_128_int); // 0x908 Func
	goto Label_2326; // 0x90a Jump
	
Label_2315:
	var_129_int = 5; // 0x90b PushI
	var_130_bool = var_21_int == var_129_int; // 0x90c Eq
	if(var_130_bool == 0) goto Label_2326; // 0x90d JumpB
	var_131_int = 0; var_132_string = ""; // 0x90e PushV
	var_132_string = "flower"; // 0x90f MovS
	func_2327(var_131_int, var_132_string); // 0x910 Call
	var_133_int = 0; // 0x912 PushI
	var_134_int = 1; // 0x913 PushI
	AddItem(var_22_bool, var_131_int, var_133_int, var_134_int); // 0x914 Func
}


func_1136(var_0_bool, var_1_bool, var_2_bool, var_98_object)
{
	var_102_cvector = CVector(0,0,0); var_103_float = 0; var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_float = 0; var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_float = 0; // 0x470 PushV
	var_0_bool = var_98_object; // 0x471 TMov
	var_112_cvector = CVector(0,0,0); var_113_float = 0; // 0x472 PushV
	var_113_float = 1.74533; // 0x473 MovF
	func_1106(var_112_cvector, var_113_float); // 0x474 Call
	var_107_cvector = var_112_cvector; // 0x475 Mov
	var_108_float = var_107_cvector | var_107_cvector; // 0x477 Or2
	var_142_float = 10000.0; // 0x478 PushF
	var_143_bool = var_108_float < var_142_float; // 0x479 LT
	if(var_143_bool == 0) goto Label_1156; // 0x47a JumpB
	var_144_string = "Can't retreat, distance: "; // 0x47b PushS
	var_145_float = sqrt(var_108_float); // 0x47c Sqrt
	var_146_int = var_144_string + var_145_float; // 0x47d Add
	Trace(var_146_int); // 0x47e Func
	var_147_float = 0.5; // 0x480 PushF
	Sleep(var_147_float); // 0x481 Func
	return 10; // 0x483 Return
	
Label_1156:
	var_148_float = GetByIndex(var_107_cvector, 0); // 0x484 PushE
	var_149_float = GetByIndex(var_107_cvector, 2); // 0x485 PushE
	Rotate(var_148_float, var_149_float); // 0x486 Func
	var_150_cvector = CVector(0,0,0); // 0x488 PushV
	func_1582(var_150_cvector); // 0x489 Call
	var_1_bool = var_150_cvector + var_107_cvector; // 0x48b Add2
	var_153_int = 120; // 0x48c PushI
	var_154_float = 0.5; // 0x48d PushF
	SetTimer(var_153_int, var_154_float); // 0x48e Func
	var_2_bool = 0; // 0x490 TMovB
	
Label_1169:
	var_155_int = 1; // 0x491 PushI
	MovePoint(var_155_int, var_155_int, var_109_bool); // 0x492 Func
	var_156_bool = var_109_bool; // 0x494 Push
	if(var_156_bool == 0) goto Label_1197; // 0x495 JumpB
	var_157_bool = var_0_bool == 0; // 0x496 NullEq
	if(var_157_bool == 0) goto Label_1178; // 0x497 JumpB
	goto Label_1199; // 0x498 Jump
	
Label_1199:
	return 10; // 0x4af Return
	
Label_1178:
	var_158_cvector = CVector(0,0,0); var_159_float = 0; // 0x49a PushV
	var_159_float = 2.61799; // 0x49b MovF
	func_1106(var_158_cvector, var_159_float); // 0x49c Call
	var_110_cvector = var_158_cvector; // 0x49d Mov
	var_111_float = var_110_cvector | var_110_cvector; // 0x49f Or2
	var_160_float = 10000.0; // 0x4a0 PushF
	var_161_bool = var_111_float >= var_160_float; // 0x4a1 GE
	if(var_161_bool == 0) goto Label_1196; // 0x4a2 JumpB
	var_162_cvector = CVector(0,0,0); // 0x4a3 PushV
	func_1582(var_162_cvector); // 0x4a4 Call
	var_1_bool = var_162_cvector + var_110_cvector; // 0x4a6 Add2
	var_163_int = 120; // 0x4a7 PushI
	var_164_float = 0.5; // 0x4a8 PushF
	SetTimer(var_163_int, var_164_float); // 0x4a9 Func
	goto Label_1197; // 0x4ab Jump
	
Label_1197:
	var_165_bool = var_2_bool == 0; // 0x4ad Not
	if(var_165_bool == 0) goto Label_1169; // 0x4ae JumpB
	
Label_1196:
	goto Label_1199; // 0x4ac Jump
}


func_1655(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x677 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x678 PushV
	var_28_object = var_24_object; // 0x679 Mov
	func_1619(var_27_bool, var_28_object); // 0x67a Call
	var_44_bool = var_27_bool == 0; // 0x67c Not
	if(var_44_bool == 0) goto Label_1664; // 0x67d JumpB
	var_23_bool = 0; // 0x67e MovB
	return 2; // 0x67f Return
	
Label_1664:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x680 PushV
	var_46_object = var_24_object; // 0x681 Mov
	var_47_string = "noaccess"; // 0x682 MovS
	func_1602(var_45_bool, var_46_object, var_47_string); // 0x683 Call
	var_54_bool = var_45_bool == 0; // 0x685 Not
	if(var_54_bool == 0) goto Label_1673; // 0x686 JumpB
	var_23_bool = 1; // 0x687 MovB
	return 2; // 0x688 Return
	
Label_1673:
	var_55_string = "noaccess"; // 0x689 PushS
	GetProperty(var_55_string, var_26_int); // 0x68a ObjFunc
	var_56_int = 0; // 0x68c PushI
	var_23_bool = var_26_int == var_56_int; // 0x68d Eq2
	return 2; // 0x68e Return
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


func_1679(var_20_object, var_21_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x68f PushV
	var_43_bool = 0; // 0x690 PushV
	var_43_bool = 0; // 0x691 MovB
	var_44_int = 4; // 0x692 PushI
	var_45_bool = var_21_int != var_44_int; // 0x693 Neq
	if(var_45_bool == 0) goto Label_1689; // 0x694 JumpB
	var_46_int = 5; // 0x695 PushI
	var_47_bool = var_21_int != var_46_int; // 0x696 Neq
	if(var_47_bool == 0) goto Label_1689; // 0x697 JumpB
	var_43_bool = 1; // 0x698 MovB
	
Label_1689:
	if(var_43_bool == 0) goto Label_1708; // 0x699 JumpB
	GetScene(var_33_object); // 0x69a Func
	GetPosition(var_35_cvector); // 0x69c Func
	GetEyesHeight(var_36_float); // 0x69e Func
	var_48_float = GetByIndex(var_35_cvector, 1); // 0x6a0 PushE
	var_49_int = 2; // 0x6a1 PushI
	var_50_float = var_36_float / var_49_int; // 0x6a2 Div
	var_48_float = var_48_float + var_50_float; // 0x6a3 Add2
	SetByIndex(var_35_cvector, 1) = var_48_float; // 0x6a4 PopE
	var_51_string = "scripted"; // 0x6a5 PushS
	var_52_cvector = CVector(0.0, 0.0, 1.0); // 0x6a6 PushVec
	var_53_string = "blood.xml"; // 0x6a7 PushS
	AddActorByType(var_34_object, var_51_string, var_33_object, var_35_cvector, var_52_cvector, var_53_string); // 0x6a8 Func
	var_34_object = 0; // 0x6aa SetNull
	var_33_object = 0; // 0x6ab SetNull
	
Label_1708:
	var_54_bool = var_20_object == 0; // 0x6ac NullEq
	if(var_54_bool == 0) goto Label_1711; // 0x6ad JumpB
	return 20; // 0x6ae Return
	
Label_1711:
	GetSecondaryAnimationType(var_37_int); // 0x6af Func
	var_55_int = 0; // 0x6b1 PushI
	var_56_bool = var_37_int < var_55_int; // 0x6b2 LT
	if(var_56_bool == 0) goto Label_1717; // 0x6b3 JumpB
	return 20; // 0x6b4 Return
	
Label_1717:
	GetPosition(var_38_cvector); // 0x6b5 ObjFunc
	GetPosition(var_39_cvector); // 0x6b7 Func
	GetDirection(var_40_cvector); // 0x6b9 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x6bb Sub2
	var_57_float = GetByIndex(var_41_cvector, 0); // 0x6bc PushE
	var_58_float = GetByIndex(var_40_cvector, 0); // 0x6bd PushE
	var_59_float = var_57_float * var_58_float; // 0x6be Mult
	var_60_float = GetByIndex(var_41_cvector, 2); // 0x6bf PushE
	var_61_float = GetByIndex(var_40_cvector, 2); // 0x6c0 PushE
	var_62_float = var_60_float * var_61_float; // 0x6c1 Mult
	var_63_int = var_59_float + var_62_float; // 0x6c2 Add
	var_64_int = 0; // 0x6c3 PushI
	var_65_bool = var_63_int >= var_64_int; // 0x6c4 GE
	if(var_65_bool == 0) goto Label_1736; // 0x6c5 JumpB
	var_42_string = "fhit"; // 0x6c6 MovS
	goto Label_1737; // 0x6c7 Jump
	
Label_1737:
	var_66_string = "hit_react"; // 0x6c9 PushS
	var_67_string = "1"; // 0x6ca PushS
	var_68_int = var_42_string + var_67_string; // 0x6cb Add
	var_69_string = "2"; // 0x6cc PushS
	var_70_int = var_42_string + var_69_string; // 0x6cd Add
	var_71_int = -10; // 0x6ce PushI
	FadeSecondaryAnimation(var_66_string, var_68_int, var_70_int, var_71_int); // 0x6cf Func
	return 20; // 0x6d1 Return
	
Label_1736:
	var_42_string = "bhit"; // 0x6c8 MovS
}


func_662()
{
	StopAnimation(); // 0x296 Func
	StopGroup0(); // 0x298 Func
	return 0; // 0x29a Return
}


func_667(var_0_bool, var_77_object)
{
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; // 0x29b PushV
	var_0_bool = var_77_object; // 0x29c TMov
	func_718(var_84_bool); // 0x29e Call
	GetDirection(var_82_cvector); // 0x2a0 Func
	var_92_cvector = CVector(0,0,0); var_93_object = Obj(); // 0x2a2 PushV
	var_93_object = var_0_bool; // 0x2a3 MovT
	func_1587(var_93_object); // 0x2a4 Call
	var_83_cvector = var_92_cvector; // 0x2a5 Mov
	var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x2a7 PushV
	var_99_cvector = var_82_cvector; // 0x2a8 Mov
	var_100_cvector = var_83_cvector; // 0x2a9 Mov
	func_1947(var_98_float, var_99_cvector, var_100_cvector); // 0x2aa Call
	var_122_int = 0; // 0x2ac PushI
	var_123_bool = var_98_float < var_122_int; // 0x2ad LT
	if(var_123_bool == 0) goto Label_693; // 0x2ae JumpB
	var_124_object = Obj(); // 0x2af PushV
	var_124_object = var_0_bool; // 0x2b0 MovT
	func_1746(); // 0x2b1 Call
	var_84_bool = 1; // 0x2b3 MovB
	goto Label_696; // 0x2b4 Jump
	
Label_696:
	var_133_bool = var_84_bool; // 0x2b8 Push
	if(var_133_bool == 0) goto Label_712; // 0x2b9 JumpB
	var_134_object = Obj(); // 0x2ba PushV
	var_134_object = var_0_bool; // 0x2bb MovT
	func_1746(); // 0x2bc Call
	var_135_int = 111; // 0x2be PushI
	var_136_float = 0.5; // 0x2bf PushF
	SetTimer(var_135_int, var_136_float); // 0x2c0 Func
	var_137_float = 5.0; // 0x2c2 PushF
	Sleep(var_137_float); // 0x2c3 Func
	var_138_int = 111; // 0x2c5 PushI
	KillTimer(var_138_int); // 0x2c6 Func
	
Label_712:
	StopAsync(); // 0x2c8 Func
	var_139_string = "head"; // 0x2ca PushS
	UnlookAsync(var_139_string); // 0x2cb Func
	return 6; // 0x2cd Return
	
Label_693:
	var_140_float = 1.5; // 0x2b5 PushF
	Sleep(var_140_float, var_84_bool); // 0x2b6 Func
}


func_185()
{
	var_135_bool = 0; // 0xb9 PushV
	func_1757(var_135_bool); // 0xba Call
	var_138_bool = var_135_bool == 0; // 0xbc Not
	if(var_138_bool == 0) goto Label_193; // 0xbd JumpB
	func_2104(); // 0xbf Call
	
Label_193:
	return 0; // 0xc1 Return
}


func_718(var_0_bool)
{
	var_85_object = Obj(); // 0x2ce PushV
	var_85_object = var_0_bool; // 0x2cf MovT
	func_1892(var_85_object); // 0x2d0 Call
	return 0; // 0x2d2 Return
}


func_1746()
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x6d2 PushV
	GetPosition(var_96_cvector); // 0x6d3 ObjFunc
	GetPosition(var_97_cvector); // 0x6d5 Func
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x6d7 Sub2
	var_99_float = GetByIndex(var_98_cvector, 0); // 0x6d8 PushE
	var_100_float = GetByIndex(var_98_cvector, 2); // 0x6d9 PushE
	RotateAsync(var_99_float, var_100_float); // 0x6da Func
	return 6; // 0x6dc Return
}


func_1757(var_135_bool)
{
	var_136_bool = 0; var_137_bool = 0; // 0x6dd PushV
	IsLoaded(var_137_bool); // 0x6de Func
	var_135_bool = var_137_bool; // 0x6e0 Mov
	return 2; // 0x6e1 Return
}


func_1762(var_45_bool)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; // 0x6e2 PushV
	GetPosition(var_56_cvector); // 0x6e3 ObjFunc
	GetEyesHeight(var_55_float); // 0x6e5 ObjFunc
	var_63_float = GetByIndex(var_56_cvector, 1); // 0x6e7 PushE
	var_63_float = var_63_float + var_55_float; // 0x6e8 Add2
	SetByIndex(var_56_cvector, 1) = var_63_float; // 0x6e9 PopE
	GetPosition(var_57_cvector); // 0x6ea Func
	GetEyesHeight(var_55_float); // 0x6ec Func
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x6ee PushE
	var_64_float = var_64_float + var_55_float; // 0x6ef Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x6f0 PopE
	var_58_cvector = var_56_cvector - var_57_cvector; // 0x6f1 Sub2
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x6f2 PushE
	var_65_float = 0; // 0x6f3 MovI
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x6f4 PopE
	var_66_int = var_58_cvector | var_58_cvector; // 0x6f5 Or
	var_67_float = sqrt(var_66_int); // 0x6f6 Sqrt
	var_58_cvector = var_58_cvector / var_58_cvector; // 0x6f7 Div2
	var_59_cvector = -var_58_cvector; // 0x6f8 Neg2
	var_68_int = 70; // 0x6f9 PushI
	var_69_float = var_58_cvector * var_68_int; // 0x6fa Mult
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x6fb PushV
	var_72_cvector = CVector(0.0, 1.0, 0.0); // 0x6fc PushVec
	var_71_cvector = var_59_cvector ^ var_72_cvector; // 0x6fd Xor2
	func_1910(var_70_cvector, var_71_cvector); // 0x6fe Call
	var_78_int = 25; // 0x700 PushI
	var_79_float = var_70_cvector * var_78_int; // 0x701 Mult
	var_80_int = var_69_float + var_79_float; // 0x702 Add
	var_81_cvector = CVector(0.0, 10.0, 0.0); // 0x703 PushVec
	var_60_cvector = var_80_int - var_81_cvector; // 0x704 Sub2
	var_61_cvector = var_57_cvector + var_60_cvector; // 0x705 Add2
	IsOverrideActive(var_62_bool); // 0x706 Func
	var_82_bool = var_62_bool; // 0x708 Push
	if(var_82_bool == 0) goto Label_1804; // 0x709 JumpB
	var_45_bool = 0; // 0x70a MovB
	return 16; // 0x70b Return
	
Label_1804:
	StopWorld(); // 0x70c Func
	CameraTransit(var_61_cvector, var_59_cvector); // 0x70e Func
	var_83_float = GetByIndex(var_60_cvector, 0); // 0x710 PushE
	var_84_float = GetByIndex(var_60_cvector, 2); // 0x711 PushE
	Rotate(var_83_float, var_84_float); // 0x712 Func
	CameraWaitForPlayFinish(); // 0x714 Func
	ResumeWorld(); // 0x716 Func
	var_45_bool = 1; // 0x718 MovB
	return 16; // 0x719 Return
}


func_1252(var_2_bool)
{
	Stop(); // 0x4e4 Func
	var_17_int = 120; // 0x4e6 PushI
	KillTimer(var_17_int); // 0x4e7 Func
	var_2_bool = 1; // 0x4e9 TMovB
	return 0; // 0x4ea Return
}


func_1268(var_0_bool, var_68_bool)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x4f4 PushV
	GetDirection(var_71_cvector); // 0x4f5 Func
	var_73_cvector = CVector(0,0,0); var_74_object = Obj(); // 0x4f7 PushV
	var_74_object = var_0_bool; // 0x4f8 MovT
	func_1587(var_74_object); // 0x4f9 Call
	var_72_cvector = var_73_cvector; // 0x4fa Mov
	var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x4fc PushV
	var_80_cvector = var_71_cvector; // 0x4fd Mov
	var_81_cvector = var_72_cvector; // 0x4fe Mov
	func_1920(var_79_float, var_80_cvector, var_81_cvector); // 0x4ff Call
	var_87_float = -0.34202; // 0x501 PushF
	var_68_bool = var_79_float >= var_87_float; // 0x502 GE2
	return 4; // 0x503 Return
}


func_1284(var_0_bool, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x504 PushV
	var_0_bool = var_35_object; // 0x505 TMov
	var_45_bool = 0; var_46_object = Obj(); // 0x506 PushV
	var_46_object = var_35_object; // 0x507 Mov
	func_1762(var_46_object); // 0x508 Call
	var_85_bool = var_45_bool == 0; // 0x50a Not
	if(var_85_bool == 0) goto Label_1294; // 0x50b JumpB
	var_34_int = -2; // 0x50c MovI
	return 8; // 0x50d Return
	
Label_1294:
	CreateDialog(var_41_object); // 0x50e Func
	var_86_int = 0; // 0x510 PushV
	func_2346(var_86_int); // 0x511 Call
	SetNPCName(var_86_int); // 0x513 ObjFunc
	var_87_string = ""; // 0x515 PushV
	func_2348(var_87_string); // 0x516 Call
	SetPhoto(var_87_string); // 0x518 ObjFunc
	var_88_int = 0; // 0x51a PushV
	func_2105(var_88_int); // 0x51b Call
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
	var_134_bool = var_44_bool == 0; // 0x531 Not
	if(var_134_bool == 0) goto Label_1336; // 0x532 JumpB
	sync(); // 0x533 Func
	IsDialogEnd(var_44_bool); // 0x535 ObjFunc
	goto Label_1329; // 0x537 Jump
	
Label_1336:
	var_135_object = Obj(); // 0x538 PushV
	var_135_object = var_35_object; // 0x539 Mov
	func_1818(); // 0x53a Call
	StopDialog(var_41_object); // 0x53c Func
	GetReturnValue(var_43_int); // 0x53e ObjFunc
	var_34_int = var_43_int; // 0x540 Mov
	return 8; // 0x541 Return
}


func_2327(var_56_int, var_57_string)
{
	var_58_int = 0; var_59_int = 0; // 0x917 PushV
	GetInvItemByName(var_59_int, var_57_string); // 0x918 Func
	var_56_int = var_59_int; // 0x91a Mov
	return 2; // 0x91b Return
}


func_1818()
{
	CameraSwitchToNormal(); // 0x71b Func
	return 0; // 0x71d Return
}


func_2332(var_62_float)
{
	var_63_object = Obj(); var_64_float = 0; var_65_object = Obj(); var_66_float = 0; // 0x91c PushV
	var_67_string = "player"; // 0x91d PushS
	FindActor(var_65_object, var_67_string); // 0x91e Func
	var_68_bool = var_65_object == 0; // 0x920 Not
	if(var_68_bool == 0) goto Label_2340; // 0x921 JumpB
	var_62_float = 0; // 0x922 MovI
	return 4; // 0x923 Return
	
Label_2340:
	var_69_string = "reputation"; // 0x924 PushS
	GetProperty(var_69_string, var_66_float); // 0x925 ObjFunc
	var_62_float = var_66_float; // 0x927 Mov
	return 4; // 0x928 Return
}


func_1822(var_137_bool)
{
	var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_bool = 0; var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_bool = 0; // 0x71e PushV
	GetPosition(var_148_cvector); // 0x71f ObjFunc
	GetEyesHeight(var_147_float); // 0x721 ObjFunc
	var_155_float = GetByIndex(var_148_cvector, 1); // 0x723 PushE
	var_155_float = var_155_float + var_147_float; // 0x724 Add2
	SetByIndex(var_148_cvector, 1) = var_155_float; // 0x725 PopE
	GetPosition(var_149_cvector); // 0x726 Func
	GetEyesHeight(var_147_float); // 0x728 Func
	var_156_float = GetByIndex(var_149_cvector, 1); // 0x72a PushE
	var_156_float = var_156_float + var_147_float; // 0x72b Add2
	SetByIndex(var_149_cvector, 1) = var_156_float; // 0x72c PopE
	var_150_cvector = var_148_cvector - var_149_cvector; // 0x72d Sub2
	var_157_float = GetByIndex(var_150_cvector, 1); // 0x72e PushE
	var_157_float = 0; // 0x72f MovI
	SetByIndex(var_150_cvector, 1) = var_157_float; // 0x730 PopE
	var_158_int = var_150_cvector | var_150_cvector; // 0x731 Or
	var_159_float = sqrt(var_158_int); // 0x732 Sqrt
	var_150_cvector = var_150_cvector / var_150_cvector; // 0x733 Div2
	var_151_cvector = -var_150_cvector; // 0x734 Neg2
	var_160_int = 70; // 0x735 PushI
	var_161_float = var_150_cvector * var_160_int; // 0x736 Mult
	var_162_cvector = CVector(0.0, 10.0, 0.0); // 0x737 PushVec
	var_152_cvector = var_161_float - var_162_cvector; // 0x738 Sub2
	var_153_cvector = var_149_cvector + var_152_cvector; // 0x739 Add2
	IsOverrideActive(var_154_bool); // 0x73a Func
	var_163_bool = var_154_bool; // 0x73c Push
	if(var_163_bool == 0) goto Label_1856; // 0x73d JumpB
	var_137_bool = 0; // 0x73e MovB
	return 16; // 0x73f Return
	
Label_1856:
	StopWorld(); // 0x740 Func
	CameraTransit(var_153_cvector, var_151_cvector); // 0x742 Func
	var_164_float = GetByIndex(var_152_cvector, 0); // 0x744 PushE
	var_165_float = GetByIndex(var_152_cvector, 2); // 0x745 PushE
	Rotate(var_164_float, var_165_float); // 0x746 Func
	CameraWaitForPlayFinish(); // 0x748 Func
	ResumeWorld(); // 0x74a Func
	var_137_bool = 1; // 0x74c MovB
	return 16; // 0x74d Return
}


func_2346(var_86_int)
{
	var_86_int = 3340; // 0x92a MovI
	return 0; // 0x92b Return
}


func_2348(var_87_string)
{
	var_87_string = "ui/NPC_None.png"; // 0x92c MovS
	return 0; // 0x92d Return
}


func_2350(var_19_bool)
{
	var_19_bool = 0; // 0x92e MovB
	return 0; // 0x92f Return
}


func_2352()
{
	var_17_bool = GlobalVars[1]; // 0x930 PushGE
	var_17_bool = 0; // 0x931 MovB
	GlobalVars[1] = var_17_bool; // 0x932 PopGE
	var_18_bool = 0; // 0x933 PushV
	var_18_bool = 0; // 0x934 MovB
	func_2152(var_18_bool); // 0x935 Call
	return 0; // 0x937 Return
}


func_2360(var_28_object, var_36_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x938 PushV
	var_31_bool = GlobalVars[1]; // 0x939 PushGE
	if(var_31_bool == 0) goto Label_2371; // 0x93a JumpB
	IsOverrideActive(var_30_bool); // 0x93b Func
	var_32_bool = var_30_bool == 0; // 0x93d Not
	if(var_32_bool == 0) goto Label_2369; // 0x93e JumpB
	WorkWithCorpse(var_28_object); // 0x93f Func
	
Label_2369:
	return 2; // 0x941 Return
	
Label_2371:
	var_33_int = 1000; // 0x943 PushI
	var_34_int = 0; var_35_object = Obj(); // 0x944 PushV
	var_35_object = var_28_object; // 0x945 Mov
	TaskCall(7); // 0x946 TaskCall
	func_1284(var_36_object, var_34_int, var_35_object); // 0x947 Call
	TaskReturn(); // 0x948 TaskReturn
	var_136_bool = var_33_int == var_36_object; // 0x94a Eq
	if(var_136_bool == 0) goto Label_2397; // 0x94b JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x94c PushV
	var_138_object = var_28_object; // 0x94d Mov
	func_1822(var_138_object); // 0x94e Call
	var_166_bool = var_137_bool == 0; // 0x950 Not
	if(var_166_bool == 0) goto Label_2387; // 0x951 JumpB
	return 2; // 0x952 Return
	
Label_2387:
	var_167_object = Obj(); // 0x953 PushV
	var_167_object = var_28_object; // 0x954 Mov
	TaskCall(0); // 0x955 TaskCall
	func_0(var_167_object); // 0x956 Call
	TaskReturn(); // 0x957 TaskReturn
	var_172_object = Obj(); // 0x959 PushV
	var_172_object = var_28_object; // 0x95a Mov
	func_1870(); // 0x95b Call
	
Label_2397:
	return 2; // 0x95d Return
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
	if(var_103_int == 0) goto Label_1400; // 0x548 JumpB
	var_104_string = ""; // 0x549 PushV
	var_104_string = "Neutral"; // 0x54a MovS
	func_1430(var_98_object, var_104_string); // 0x54b Call
	var_119_int = 14610; // 0x54d PushI
	SetMessage(var_119_int); // 0x54e TObjFunc
	ClearReplies(); // 0x550 TObjFunc
	var_120_int = 14611; // 0x552 PushI
	var_121_int = 15848; // 0x553 PushI
	var_122_int = 15847; // 0x554 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x555 TObjFunc
	var_123_int = 14618; // 0x557 PushI
	var_124_int = 15848; // 0x558 PushI
	var_125_int = 15854; // 0x559 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x55a TObjFunc
	goto Label_1400; // 0x55c Jump
	
Label_1400:
	var_126_bool = 0; // 0x578 PushV
	func_2350(var_126_bool); // 0x579 Call
	if(var_126_bool == 0) goto Label_1415; // 0x57b JumpB
	
Label_1404:
	lshWaitForAnimEnd(); // 0x57c Func
	var_127_bool = var_3_bool; // 0x57e PushT
	if(var_127_bool == 0) goto Label_1409; // 0x57f JumpB
	goto Label_1414; // 0x580 Jump
	
Label_1414:
	goto Label_1429; // 0x586 Jump
	
Label_1429:
	return 0; // 0x595 Return
	
Label_1409:
	var_128_string = ""; // 0x581 PushV
	var_128_string = var_2_bool; // 0x582 MovT
	func_1874(var_128_string); // 0x583 Call
	goto Label_1404; // 0x585 Jump
	
Label_1415:
	var_129_string = "all"; // 0x587 PushS
	var_130_string = "idle"; // 0x588 PushS
	PlayAnimation(var_129_string, var_130_string); // 0x589 Func
	
Label_1419:
	WaitForAnimEnd(); // 0x58b Func
	var_131_bool = var_3_bool; // 0x58d PushT
	if(var_131_bool == 0) goto Label_1424; // 0x58e JumpB
	goto Label_1429; // 0x58f Jump
	
Label_1424:
	var_132_string = "all"; // 0x590 PushS
	var_133_string = "idle"; // 0x591 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x592 Func
	goto Label_1419; // 0x594 Jump
}


func_333(var_2_bool)
{
	var_17_int = 110; // 0x14d PushI
	KillTimer(var_17_int); // 0x14e Func
	var_2_bool = 0; // 0x150 TMovB
	func_462(var_15_string, var_16_bool); // 0x152 Call
	return 0; // 0x154 Return
}


func_1870()
{
	CameraSwitchToNormal(); // 0x74f Func
	return 0; // 0x751 Return
}


func_1874(var_26_string)
{
	var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; // 0x752 PushV
	var_31_string = "playing "; // 0x753 PushS
	var_32_int = var_31_string + var_26_string; // 0x754 Add
	Trace(var_32_int); // 0x755 Func
	lshGetAnimTimes(var_26_string, var_29_float, var_30_float); // 0x757 Func
	lshPlayAnimation(var_29_float, var_30_float); // 0x759 Func
	var_33_string = "start: "; // 0x75b PushS
	var_34_int = var_33_string + var_29_float; // 0x75c Add
	Trace(var_34_int); // 0x75d Func
	var_35_string = "end: "; // 0x75f PushS
	var_36_int = var_35_string + var_30_float; // 0x760 Add
	Trace(var_36_int); // 0x761 Func
	return 4; // 0x763 Return
}


func_341(var_2_bool)
{
	var_75_int = 110; // 0x155 PushI
	KillTimer(var_75_int); // 0x156 Func
	var_2_bool = 0; // 0x158 TMovB
	func_469(var_20_bool, var_21_int); // 0x15a Call
	return 0; // 0x15c Return
}


func_2398(var_61_bool)
{
	var_62_float = 0; // 0x95e PushV
	func_2332(var_62_float); // 0x95f Call
	var_70_float = 0.7; // 0x961 PushF
	var_61_bool = var_62_float > var_70_float; // 0x962 GT2
	return 0; // 0x963 Return
}


func_2404(var_20_bool, var_21_object, var_22_object)
{
	var_23_string = ""; var_24_bool = 0; var_25_string = ""; var_26_bool = 0; // 0x964 PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x965 PushV
	var_28_object = var_22_object; // 0x966 Mov
	var_29_string = "class"; // 0x967 MovS
	func_1602(var_27_bool, var_28_object, var_29_string); // 0x968 Call
	var_36_bool = var_27_bool == 0; // 0x96a Not
	if(var_36_bool == 0) goto Label_2414; // 0x96b JumpB
	var_20_bool = 0; // 0x96c MovB
	return 4; // 0x96d Return
	
Label_2414:
	var_37_string = "class"; // 0x96e PushS
	GetProperty(var_37_string, var_25_string); // 0x96f ObjFunc
	var_38_string = "rat"; // 0x971 PushS
	var_39_bool = var_25_string == var_38_string; // 0x972 Eq
	if(var_39_bool == 0) goto Label_2423; // 0x973 JumpB
	var_20_bool = 0; // 0x974 MovB
	return 4; // 0x975 Return
	
Label_2423:
	var_40_string = "dog"; // 0x977 PushS
	var_41_bool = var_25_string == var_40_string; // 0x978 Eq
	if(var_41_bool == 0) goto Label_2428; // 0x979 JumpB
	var_20_bool = 0; // 0x97a MovB
	return 4; // 0x97b Return
	
Label_2428:
	CanSee(var_26_bool, var_21_object); // 0x97c Func
	var_42_bool = 0; // 0x97e PushV
	var_42_bool = 1; // 0x97f MovB
	var_43_bool = var_26_bool; // 0x980 Push
	if(var_43_bool == 0) goto Label_2442; // 0x981 JumpB
	var_44_float = 0; var_45_object = Obj(); // 0x982 PushV
	var_45_object = var_21_object; // 0x983 Mov
	func_1594(var_45_object); // 0x984 Call
	var_52_float = 250000.0; // 0x986 PushF
	var_53_bool = var_44_float <= var_52_float; // 0x987 LE
	if(var_53_bool == 0) goto Label_2442; // 0x988 JumpB
	var_42_bool = 0; // 0x989 MovB
	
Label_2442:
	if(var_42_bool == 0) goto Label_2448; // 0x98a JumpB
	var_54_float = -0.3; // 0x98b PushF
	ReportReputationChange(var_21_object, var_22_object, var_54_float); // 0x98c Func
	var_20_bool = 1; // 0x98e MovB
	return 4; // 0x98f Return
	
Label_2448:
	CanSee(var_26_bool, var_22_object); // 0x990 Func
	var_55_bool = 0; // 0x992 PushV
	var_55_bool = 1; // 0x993 MovB
	var_56_bool = var_26_bool; // 0x994 Push
	if(var_56_bool == 0) goto Label_2462; // 0x995 JumpB
	var_57_float = 0; var_58_object = Obj(); // 0x996 PushV
	var_58_object = var_22_object; // 0x997 Mov
	func_1594(var_58_object); // 0x998 Call
	var_59_float = 250000.0; // 0x99a PushF
	var_60_bool = var_57_float <= var_59_float; // 0x99b LE
	if(var_60_bool == 0) goto Label_2462; // 0x99c JumpB
	var_55_bool = 0; // 0x99d MovB
	
Label_2462:
	if(var_55_bool == 0) goto Label_2465; // 0x99e JumpB
	var_20_bool = 1; // 0x99f MovB
	return 4; // 0x9a0 Return
	
Label_2465:
	var_20_bool = 0; // 0x9a1 MovB
	return 4; // 0x9a2 Return
}


func_1892(var_85_object)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); // 0x764 PushV
	GetEyesHeight(var_88_float); // 0x765 ObjFunc
	var_89_cvector = CVector(0.0, 0.0, 0.0); // 0x767 MovV
	var_90_float = GetByIndex(var_89_cvector, 1); // 0x768 PushE
	var_90_float = var_88_float; // 0x769 Mov
	SetByIndex(var_89_cvector, 1) = var_90_float; // 0x76a PopE
	var_91_string = "head"; // 0x76b PushS
	LookAsync(var_85_object, var_91_string, var_89_cvector); // 0x76c Func
	return 4; // 0x76e Return
}


func_358(var_2_bool, var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; // 0x166 PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x167 PushV
	var_23_object = var_17_object; // 0x168 Mov
	func_1655(var_22_bool, var_23_object); // 0x169 Call
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
	func_2032(var_60_object); // 0x178 Call
	var_21_int = var_59_int; // 0x179 Mov
	var_71_int = 0; // 0x17b PushI
	var_72_bool = var_21_int > var_71_int; // 0x17c GT
	if(var_72_bool == 0) goto Label_397; // 0x17d JumpB
	var_73_int = 1; // 0x17e PushI
	var_74_bool = var_21_int > var_73_int; // 0x17f GT
	if(var_74_bool == 0) goto Label_388; // 0x180 JumpB
	func_341(var_21_int); // 0x182 Call
	
Label_388:
	var_76_object = Obj(); // 0x184 PushV
	var_76_object = var_17_object; // 0x185 Mov
	func_2041(var_76_object); // 0x186 Call
	var_2_bool = 1; // 0x188 TMovB
	var_141_int = 110; // 0x189 PushI
	var_142_float = 10.0; // 0x18a PushF
	SetTimer(var_141_int, var_142_float); // 0x18b Func
	
Label_397:
	return 4; // 0x18d Return
}


func_1903()
{
	var_19_bool = 0; // 0x76f PushV
	func_2350(var_19_bool); // 0x770 Call
	if(var_19_bool == 0) goto Label_1909; // 0x772 JumpB
	lshStopSpeech(); // 0x773 Func
	
Label_1909:
	return 0; // 0x775 Return
}


func_1910(var_46_cvector, var_47_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x776 PushV
	var_50_int = var_47_cvector | var_47_cvector; // 0x777 Or
	var_49_float = sqrt(var_50_int); // 0x778 Sqrt2
	var_51_float = 0.0; // 0x779 PushF
	var_52_bool = var_49_float < var_51_float; // 0x77a LT
	if(var_52_bool == 0) goto Label_1918; // 0x77b JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x77c MovV
	return 2; // 0x77d Return
	
Label_1918:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x77e Div2
	return 2; // 0x77f Return
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


func_1920(var_79_float, var_80_cvector, var_81_cvector)
{
	var_82_int = var_80_cvector | var_81_cvector; // 0x781 Or
	var_83_int = var_80_cvector | var_80_cvector; // 0x782 Or
	var_84_int = var_81_cvector | var_81_cvector; // 0x783 Or
	var_85_float = var_83_int * var_84_int; // 0x784 Mult
	var_86_float = sqrt(var_85_float); // 0x785 Sqrt
	var_79_float = var_82_int / var_82_int; // 0x786 Div2
	return 0; // 0x787 Return
}


func_1928(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x789 PushE
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x78a PushE
	var_74_float = var_72_float * var_73_float; // 0x78b Mult
	var_75_float = GetByIndex(var_70_cvector, 2); // 0x78c PushE
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x78d PushE
	var_77_float = var_75_float * var_76_float; // 0x78e Mult
	var_69_float = var_74_float + var_77_float; // 0x78f Add2
	return 0; // 0x790 Return
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


func_1937(var_78_float, var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0); // 0x792 PushE
	var_81_float = GetByIndex(var_79_cvector, 0); // 0x793 PushE
	var_82_float = var_80_float * var_81_float; // 0x794 Mult
	var_83_float = GetByIndex(var_79_cvector, 2); // 0x795 PushE
	var_84_float = GetByIndex(var_79_cvector, 2); // 0x796 PushE
	var_85_float = var_83_float * var_84_float; // 0x797 Mult
	var_86_int = var_82_float + var_85_float; // 0x798 Add
	var_78_float = sqrt(var_86_int); // 0x799 Sqrt2
	return 0; // 0x79a Return
}


func_1430(var_2_bool, var_22_string)
{
	var_23_bool = 0; // 0x597 PushV
	func_2350(var_23_bool); // 0x598 Call
	var_24_bool = var_23_bool == 0; // 0x59a Not
	if(var_24_bool == 0) goto Label_1437; // 0x59b JumpB
	return 0; // 0x59c Return
	
Label_1437:
	var_25_bool = var_22_string == var_2_bool; // 0x59d Eq
	if(var_25_bool == 0) goto Label_1440; // 0x59e JumpB
	return 0; // 0x59f Return
	
Label_1440:
	var_26_string = ""; // 0x5a0 PushV
	var_26_string = var_22_string; // 0x5a1 Mov
	func_1874(var_26_string); // 0x5a2 Call
	var_2_bool = var_22_string; // 0x5a4 TMov
	return 0; // 0x5a5 Return
}


func_1947(var_66_float, var_67_cvector, var_68_cvector)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x79c PushV
	var_70_cvector = var_67_cvector; // 0x79d Mov
	var_71_cvector = var_68_cvector; // 0x79e Mov
	func_1928(var_69_float, var_70_cvector, var_71_cvector); // 0x79f Call
	var_78_float = 0; var_79_cvector = CVector(0,0,0); // 0x7a1 PushV
	var_79_cvector = var_67_cvector; // 0x7a2 Mov
	func_1937(var_78_float, var_79_cvector); // 0x7a3 Call
	var_87_float = 0; var_88_cvector = CVector(0,0,0); // 0x7a5 PushV
	var_88_cvector = var_68_cvector; // 0x7a6 Mov
	func_1937(var_87_float, var_88_cvector); // 0x7a7 Call
	var_89_float = var_78_float * var_87_float; // 0x7a9 Mult
	var_66_float = var_69_float / var_69_float; // 0x7aa Div2
	return 0; // 0x7ab Return
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
	func_1910(var_46_cvector, var_47_cvector); // 0x3aa Call
	var_53_float = 0.75; // 0x3ac PushF
	var_54_float = var_40_cvector * var_53_float; // 0x3ad Mult
	var_45_cvector = var_46_cvector + var_54_float; // 0x3ae Add2
	func_1910(var_44_cvector, var_45_cvector); // 0x3af Call
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


func_2467()
{
	var_70_bool = GlobalVars[1]; // 0x9a4 PushGE
	var_70_bool = 1; // 0x9a5 MovB
	GlobalVars[1] = var_70_bool; // 0x9a6 PopGE
	var_71_int = 50; // 0x9a7 PushI
	var_72_int = 40; // 0x9a8 PushI
	SetRTEnvelope(var_71_int, var_72_int); // 0x9a9 Func
	return 0; // 0x9ab Return
}


func_1964(var_27_int)
{
	var_28_float = 0; var_29_float = 0; // 0x7ac PushV
	GetGameTime(var_29_float); // 0x7ad Func
	var_30_int = 1; // 0x7af PushI
	var_31_int = 0; // 0x7b0 PushV
	var_32_int = 24; // 0x7b1 PushI
	var_31_int = var_29_float / var_29_float; // 0x7b2 Div2
	var_27_int = var_30_int + var_31_int; // 0x7b3 Add2
	return 2; // 0x7b4 Return
}


func_1973(var_17_object)
{
	var_18_object = Obj(); // 0x7b6 PushV
	var_18_object = var_17_object; // 0x7b7 Mov
	TaskCall(1); // 0x7b8 TaskCall
	func_22(var_18_object); // 0x7b9 Call
	TaskReturn(); // 0x7ba TaskReturn
	return 0; // 0x7bc Return
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
	func_1582(var_121_cvector); // 0x3d7 Call
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
	func_1582(var_133_cvector); // 0x3f2 Call
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


func_2008(var_184_string, var_185_int)
{
	var_186_string = ""; var_187_string = ""; // 0x7d8 PushV
	var_187_string = "idle"; // 0x7d9 MovS
	var_188_int = var_185_int; // 0x7da Push
	if(var_188_int == 0) goto Label_2013; // 0x7db JumpB
	var_187_string = var_187_string + var_185_int; // 0x7dc Add2
	
Label_2013:
	var_184_string = var_187_string; // 0x7dd Mov
	return 2; // 0x7de Return
}


func_476(var_160_bool)
{
	var_160_bool = 0; // 0x1dc MovB
	return 0; // 0x1dd Return
}


func_2015(var_178_int)
{
	var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_bool = 0; // 0x7df PushV
	var_181_int = 0; // 0x7e0 MovI
	
Label_2017:
	var_183_string = "all"; // 0x7e1 PushS
	var_184_string = ""; var_185_int = 0; // 0x7e2 PushV
	var_185_int = var_181_int; // 0x7e3 Mov
	func_2008(var_184_string, var_185_int); // 0x7e4 Call
	HasAnimation(var_182_bool, var_183_string, var_184_string); // 0x7e6 Func
	var_189_bool = var_182_bool == 0; // 0x7e8 Not
	if(var_189_bool == 0) goto Label_2027; // 0x7e9 JumpB
	goto Label_2030; // 0x7ea Jump
	
Label_2030:
	var_178_int = var_181_int; // 0x7ee Mov
	return 4; // 0x7ef Return
	
Label_2027:
	var_190_int = 1; // 0x7eb PushI
	var_181_int = var_181_int + var_190_int; // 0x7ec Add2
	goto Label_2017; // 0x7ed Jump
}


func_2032(var_59_int)
{
	var_61_bool = 0; // 0x7f1 PushV
	func_2398(var_61_bool); // 0x7f2 Call
	if(var_61_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_59_int = 2; // 0x7f5 MovI
	goto Label_2040; // 0x7f6 Jump
	
Label_2040:
	return 0; // 0x7f8 Return
	
Label_2039:
	var_59_int = 0; // 0x7f7 MovI
}


func_2041(var_76_object)
{
	var_77_object = Obj(); // 0x7fa PushV
	var_77_object = var_76_object; // 0x7fb Mov
	TaskCall(4); // 0x7fc TaskCall
	func_667(var_78_object, var_77_object); // 0x7fd Call
	TaskReturn(); // 0x7fe TaskReturn
	return 0; // 0x800 Return
}


