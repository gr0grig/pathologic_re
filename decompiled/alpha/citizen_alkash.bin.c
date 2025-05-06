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
	func_2589(var_21_object); // 0x28 Call
	var_19_int = var_20_int; // 0x29 Mov
	var_22_int = 0; // 0x2b PushI
	var_23_bool = var_19_int > var_22_int; // 0x2c GT
	if(var_23_bool == 0) goto Label_50; // 0x2d JumpB
	var_24_object = Obj(); // 0x2e PushV
	var_24_object = var_17_bool; // 0x2f Mov
	func_2592(var_24_object); // 0x30 Call
	
Label_50:
	return 2; // 0x32 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_2598(); // 0x34 Call
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
	func_2589(var_21_object); // 0xc5 Call
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
	func_2592(var_27_object); // 0xd3 Call
	
Label_213:
	return 2; // 0xd5 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xd6 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xd7 PushV
	var_21_object = var_17_bool; // 0xd8 Mov
	func_2507(var_20_int, var_21_object); // 0xd9 Call
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
	func_2517(var_61_object); // 0xe7 Call
	
Label_233:
	return 2; // 0xe9 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xea PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0xeb PushV
	var_22_object = var_17_string; // 0xec Mov
	var_23_object = var_18_bool; // 0xed Mov
	func_2773(var_21_bool, var_22_object, var_23_object); // 0xee Call
	if(var_21_bool == 0) goto Label_259; // 0xf0 JumpB
	var_56_int = 0; var_57_object = Obj(); // 0xf1 PushV
	var_57_object = var_17_string; // 0xf2 Mov
	func_2525(var_56_int, var_57_object); // 0xf3 Call
	var_20_int = var_56_int; // 0xf4 Mov
	var_88_int = 0; // 0xf6 PushI
	var_89_bool = var_20_int > var_88_int; // 0xf7 GT
	if(var_89_bool == 0) goto Label_259; // 0xf8 JumpB
	var_90_int = 1; // 0xf9 PushI
	var_91_bool = var_20_int > var_90_int; // 0xfa GT
	if(var_91_bool == 0) goto Label_255; // 0xfb JumpB
	func_333(var_20_int); // 0xfd Call
	
Label_255:
	var_93_object = Obj(); // 0xff PushV
	var_93_object = var_17_string; // 0x100 Mov
	func_2532(var_93_object); // 0x101 Call
	
Label_259:
	return 2; // 0x103 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x104 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x105 PushV
	var_21_object = var_17_bool; // 0x106 Mov
	func_2538(var_21_object); // 0x107 Call
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
	func_2541(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x118 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x119 PushV
	var_22_string = var_18_bool; // 0x11a Mov
	var_23_object = var_17_string; // 0x11b Mov
	func_2543(var_21_int, var_22_string, var_23_object); // 0x11c Call
	var_20_int = var_21_int; // 0x11d Mov
	var_65_int = 0; // 0x11f PushI
	var_66_bool = var_20_int > var_65_int; // 0x120 GT
	if(var_66_bool == 0) goto Label_301; // 0x121 JumpB
	var_67_int = 1; // 0x122 PushI
	var_68_bool = var_20_int > var_67_int; // 0x123 GT
	if(var_68_bool == 0) goto Label_296; // 0x124 JumpB
	func_333(var_20_int); // 0x126 Call
	
Label_296:
	var_70_string = ""; var_71_object = Obj(); // 0x128 PushV
	var_70_string = var_18_bool; // 0x129 Mov
	var_71_object = var_17_string; // 0x12a Mov
	func_2555(var_70_string, var_71_object); // 0x12b Call
	
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
	func_2598(); // 0x14a Call
	return 0; // 0x14c Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_333(var_17_bool); // 0x15f Call
	var_19_object = Obj(); // 0x161 PushV
	var_19_object = var_17_bool; // 0x162 Mov
	func_2452(); // 0x163 Call
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
	func_2589(var_21_object); // 0x1e1 Call
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
	func_2592(var_26_object); // 0x1ef Call
	
Label_497:
	return 2; // 0x1f1 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x1f2 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x1f3 PushV
	var_21_object = var_17_bool; // 0x1f4 Mov
	func_2507(var_20_int, var_21_object); // 0x1f5 Call
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
	func_2517(var_60_object); // 0x203 Call
	
Label_517:
	return 2; // 0x205 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x206 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x207 PushV
	var_22_object = var_17_string; // 0x208 Mov
	var_23_object = var_18_bool; // 0x209 Mov
	func_2773(var_21_bool, var_22_object, var_23_object); // 0x20a Call
	if(var_21_bool == 0) goto Label_543; // 0x20c JumpB
	var_56_int = 0; var_57_object = Obj(); // 0x20d PushV
	var_57_object = var_17_string; // 0x20e Mov
	func_2525(var_56_int, var_57_object); // 0x20f Call
	var_20_int = var_56_int; // 0x210 Mov
	var_88_int = 0; // 0x212 PushI
	var_89_bool = var_20_int > var_88_int; // 0x213 GT
	if(var_89_bool == 0) goto Label_543; // 0x214 JumpB
	var_90_int = 1; // 0x215 PushI
	var_91_bool = var_20_int > var_90_int; // 0x216 GT
	if(var_91_bool == 0) goto Label_539; // 0x217 JumpB
	func_662(); // 0x219 Call
	
Label_539:
	var_92_object = Obj(); // 0x21b PushV
	var_92_object = var_17_string; // 0x21c Mov
	func_2532(var_92_object); // 0x21d Call
	
Label_543:
	return 2; // 0x21f Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x220 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x221 PushV
	var_21_object = var_17_bool; // 0x222 Mov
	func_2538(var_21_object); // 0x223 Call
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
	func_2541(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x234 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x235 PushV
	var_22_string = var_18_bool; // 0x236 Mov
	var_23_object = var_17_string; // 0x237 Mov
	func_2543(var_21_int, var_22_string, var_23_object); // 0x238 Call
	var_20_int = var_21_int; // 0x239 Mov
	var_65_int = 0; // 0x23b PushI
	var_66_bool = var_20_int > var_65_int; // 0x23c GT
	if(var_66_bool == 0) goto Label_585; // 0x23d JumpB
	var_67_int = 1; // 0x23e PushI
	var_68_bool = var_20_int > var_67_int; // 0x23f GT
	if(var_68_bool == 0) goto Label_580; // 0x240 JumpB
	func_662(); // 0x242 Call
	
Label_580:
	var_69_string = ""; var_70_object = Obj(); // 0x244 PushV
	var_69_string = var_18_bool; // 0x245 Mov
	var_70_object = var_17_string; // 0x246 Mov
	func_2555(var_69_string, var_70_object); // 0x247 Call
	
Label_585:
	return 2; // 0x249 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_662(); // 0x24b Call
	func_2598(); // 0x24e Call
	return 0; // 0x250 Return
}


task_4_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2d3 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x2d4 PushV
	var_21_object = var_17_bool; // 0x2d5 Mov
	func_2589(var_21_object); // 0x2d6 Call
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
	func_2592(var_28_object); // 0x2e4 Call
	
Label_742:
	return 2; // 0x2e6 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x2e7 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x2e8 PushV
	var_21_object = var_17_bool; // 0x2e9 Mov
	func_2507(var_20_int, var_21_object); // 0x2ea Call
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
	func_2517(var_62_object); // 0x2f8 Call
	
Label_762:
	return 2; // 0x2fa Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x2fb PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x2fc PushV
	var_22_object = var_17_string; // 0x2fd Mov
	var_23_object = var_18_bool; // 0x2fe Mov
	func_2773(var_21_bool, var_22_object, var_23_object); // 0x2ff Call
	if(var_21_bool == 0) goto Label_788; // 0x301 JumpB
	var_56_int = 0; var_57_object = Obj(); // 0x302 PushV
	var_57_object = var_17_string; // 0x303 Mov
	func_2525(var_56_int, var_57_object); // 0x304 Call
	var_20_int = var_56_int; // 0x305 Mov
	var_88_int = 0; // 0x307 PushI
	var_89_bool = var_20_int > var_88_int; // 0x308 GT
	if(var_89_bool == 0) goto Label_788; // 0x309 JumpB
	var_90_int = 1; // 0x30a PushI
	var_91_bool = var_20_int > var_90_int; // 0x30b GT
	if(var_91_bool == 0) goto Label_784; // 0x30c JumpB
	func_831(); // 0x30e Call
	
Label_784:
	var_94_object = Obj(); // 0x310 PushV
	var_94_object = var_17_string; // 0x311 Mov
	func_2532(var_94_object); // 0x312 Call
	
Label_788:
	return 2; // 0x314 Return
}


task_4_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x315 PushV
	var_20_int = 0; var_21_object = Obj(); // 0x316 PushV
	var_21_object = var_17_bool; // 0x317 Mov
	func_2538(var_21_object); // 0x318 Call
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
	func_2541(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_4_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x329 PushV
	var_21_int = 0; var_22_string = ""; var_23_object = Obj(); // 0x32a PushV
	var_22_string = var_18_bool; // 0x32b Mov
	var_23_object = var_17_string; // 0x32c Mov
	func_2543(var_21_int, var_22_string, var_23_object); // 0x32d Call
	var_20_int = var_21_int; // 0x32e Mov
	var_65_int = 0; // 0x330 PushI
	var_66_bool = var_20_int > var_65_int; // 0x331 GT
	if(var_66_bool == 0) goto Label_830; // 0x332 JumpB
	var_67_int = 1; // 0x333 PushI
	var_68_bool = var_20_int > var_67_int; // 0x334 GT
	if(var_68_bool == 0) goto Label_825; // 0x335 JumpB
	func_831(); // 0x337 Call
	
Label_825:
	var_71_string = ""; var_72_object = Obj(); // 0x339 PushV
	var_71_string = var_18_bool; // 0x33a Mov
	var_72_object = var_17_string; // 0x33b Mov
	func_2555(var_71_string, var_72_object); // 0x33c Call
	
Label_830:
	return 2; // 0x33e Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool)
{
	func_831(); // 0x34c Call
	var_20_object = Obj(); // 0x34e PushV
	var_20_object = var_17_bool; // 0x34f Mov
	func_2452(); // 0x350 Call
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
	func_2098(var_24_bool, var_25_object); // 0x35a Call
	var_58_bool = var_24_bool == 0; // 0x35c Not
	if(var_58_bool == 0) goto Label_866; // 0x35d JumpB
	func_831(); // 0x35f Call
	return 4; // 0x361 Return
	
Label_866:
	GetDirection(var_20_cvector); // 0x362 Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x364 PushV
	var_62_object = var_0_bool; // 0x365 MovT
	func_1966(var_62_object); // 0x366 Call
	var_21_cvector = var_61_cvector; // 0x367 Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x369 PushV
	var_68_cvector = var_20_cvector; // 0x36a Mov
	var_69_cvector = var_21_cvector; // 0x36b Mov
	func_2400(var_67_float, var_68_cvector, var_69_cvector); // 0x36c Call
	var_91_float = 0.5; // 0x36e PushF
	var_92_bool = var_67_float < var_91_float; // 0x36f LT
	if(var_92_bool == 0) goto Label_885; // 0x370 JumpB
	var_93_object = Obj(); // 0x371 PushV
	var_93_object = var_0_bool; // 0x372 MovT
	func_2189(); // 0x373 Call
	
Label_885:
	return 4; // 0x375 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_831(); // 0x377 Call
	func_2598(); // 0x37a Call
	return 0; // 0x37c Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	func_1529(var_16_bool); // 0x577 Call
	func_2598(); // 0x57a Call
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
	func_2452(); // 0x606 Call
	return 0; // 0x608 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 1; // 0x6d0 PushI
	if(var_19_int == 0) goto Label_1957; // 0x6d1 JumpB
	func_2346(); // 0x6d3 Call
	var_21_int = 15021; // 0x6d5 PushI
	var_22_bool = var_18_int == var_21_int; // 0x6d6 Eq
	if(var_22_bool == 0) goto Label_1757; // 0x6d7 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x6d8 PushV
	var_23_object = var_1_bool; // 0x6d9 MovT
	var_24_object = var_0_bool; // 0x6da MovT
	func_2599(); // 0x6db Call
	
Label_1757:
	var_26_int = 15020; // 0x6dd PushI
	var_27_bool = var_17_int == var_26_int; // 0x6de Eq
	if(var_27_bool == 0) goto Label_1830; // 0x6df JumpB
	var_28_string = ""; // 0x6e0 PushV
	var_28_string = "Neutral"; // 0x6e1 MovS
	func_1727(var_18_int, var_28_string); // 0x6e2 Call
	var_43_int = 13794; // 0x6e4 PushI
	SetMessage(var_43_int); // 0x6e5 TObjFunc
	ClearReplies(); // 0x6e7 TObjFunc
	var_44_int = 13795; // 0x6e9 PushI
	var_45_int = -1; // 0x6ea PushI
	var_46_int = 15021; // 0x6eb PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0x6ec TObjFunc
	var_47_int = 13796; // 0x6ee PushI
	var_48_int = -1; // 0x6ef PushI
	var_49_int = 15022; // 0x6f0 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1830:
	var_50_int = 15951; // 0x726 PushI
	var_51_bool = var_17_int == var_50_int; // 0x727 Eq
	if(var_51_bool == 0) goto Label_1853; // 0x728 JumpB
	var_52_string = ""; // 0x729 PushV
	var_52_string = "Neutral"; // 0x72a MovS
	func_1727(var_18_int, var_52_string); // 0x72b Call
	var_53_int = 14710; // 0x72d PushI
	SetMessage(var_53_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_54_int = 14711; // 0x732 PushI
	var_55_int = 15953; // 0x733 PushI
	var_56_int = 15952; // 0x734 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0x735 TObjFunc
	var_57_int = 14718; // 0x737 PushI
	var_58_int = 15955; // 0x738 PushI
	var_59_int = 15960; // 0x739 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x73a TObjFunc
	return 0; // 0x73c Return
	
Label_1853:
	var_60_int = 15953; // 0x73d PushI
	var_61_bool = var_17_int == var_60_int; // 0x73e Eq
	if(var_61_bool == 0) goto Label_1876; // 0x73f JumpB
	var_62_string = ""; // 0x740 PushV
	var_62_string = "Neutral"; // 0x741 MovS
	func_1727(var_18_int, var_62_string); // 0x742 Call
	var_63_int = 14712; // 0x744 PushI
	SetMessage(var_63_int); // 0x745 TObjFunc
	ClearReplies(); // 0x747 TObjFunc
	var_64_int = 14713; // 0x749 PushI
	var_65_int = 15955; // 0x74a PushI
	var_66_int = 15954; // 0x74b PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x74c TObjFunc
	var_67_int = 14717; // 0x74e PushI
	var_68_int = 15955; // 0x74f PushI
	var_69_int = 15958; // 0x750 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x751 TObjFunc
	return 0; // 0x753 Return
	
Label_1876:
	var_70_int = 15955; // 0x754 PushI
	var_71_bool = var_17_int == var_70_int; // 0x755 Eq
	if(var_71_bool == 0) goto Label_1899; // 0x756 JumpB
	var_72_string = ""; // 0x757 PushV
	var_72_string = "Neutral"; // 0x758 MovS
	func_1727(var_18_int, var_72_string); // 0x759 Call
	var_73_int = 14714; // 0x75b PushI
	SetMessage(var_73_int); // 0x75c TObjFunc
	ClearReplies(); // 0x75e TObjFunc
	var_74_int = 14715; // 0x760 PushI
	var_75_int = -1; // 0x761 PushI
	var_76_int = 15956; // 0x762 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x763 TObjFunc
	var_77_int = 14716; // 0x765 PushI
	var_78_int = -1; // 0x766 PushI
	var_79_int = 15957; // 0x767 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x768 TObjFunc
	return 0; // 0x76a Return
	
Label_1899:
	var_80_int = 15941; // 0x76b PushI
	var_81_bool = var_17_int == var_80_int; // 0x76c Eq
	if(var_81_bool == 0) goto Label_1922; // 0x76d JumpB
	var_82_string = ""; // 0x76e PushV
	var_82_string = "Neutral"; // 0x76f MovS
	func_1727(var_18_int, var_82_string); // 0x770 Call
	var_83_int = 14701; // 0x772 PushI
	SetMessage(var_83_int); // 0x773 TObjFunc
	ClearReplies(); // 0x775 TObjFunc
	var_84_int = 14702; // 0x777 PushI
	var_85_int = 15943; // 0x778 PushI
	var_86_int = 15942; // 0x779 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x77a TObjFunc
	var_87_int = 14706; // 0x77c PushI
	var_88_int = 15943; // 0x77d PushI
	var_89_int = 15946; // 0x77e PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x77f TObjFunc
	return 0; // 0x781 Return
	
Label_1922:
	var_90_int = 15943; // 0x782 PushI
	var_91_bool = var_17_int == var_90_int; // 0x783 Eq
	if(var_91_bool == 0) goto Label_1945; // 0x784 JumpB
	var_92_string = ""; // 0x785 PushV
	var_92_string = "Neutral"; // 0x786 MovS
	func_1727(var_18_int, var_92_string); // 0x787 Call
	var_93_int = 14703; // 0x789 PushI
	SetMessage(var_93_int); // 0x78a TObjFunc
	ClearReplies(); // 0x78c TObjFunc
	var_94_int = 14705; // 0x78e PushI
	var_95_int = -1; // 0x78f PushI
	var_96_int = 15945; // 0x790 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x791 TObjFunc
	var_97_int = 14704; // 0x793 PushI
	var_98_int = -1; // 0x794 PushI
	var_99_int = 15944; // 0x795 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x796 TObjFunc
	return 0; // 0x798 Return
	
Label_1945:
	var_3_bool = 1; // 0x799 TMovB
	var_100_bool = 0; // 0x79a PushV
	func_2721(var_100_bool); // 0x79b Call
	if(var_100_bool == 0) goto Label_1953; // 0x79d JumpB
	lshStopAnimation(); // 0x79e Func
	goto Label_1955; // 0x7a0 Jump
	
Label_1955:
	return 0; // 0x7a3 Return
	
Label_1953:
	StopAnimation(); // 0x7a1 Func
	
Label_1957:
	return 0; // 0x7a5 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x987 PushV
	var_21_string = "health"; // 0x988 PushS
	var_22_bool = var_18_string == var_21_string; // 0x989 Eq
	if(var_22_bool == 0) goto Label_2451; // 0x98a JumpB
	var_23_string = "health"; // 0x98b PushS
	GetProperty(var_23_string, var_20_float); // 0x98c Func
	var_24_int = 0; // 0x98e PushI
	var_25_bool = var_20_float <= var_24_int; // 0x98f LE
	if(var_25_bool == 0) goto Label_2451; // 0x990 JumpB
	SignalDeath(var_17_object); // 0x991 Func
	
Label_2451:
	return 2; // 0x993 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x995 PushV
	var_18_object = var_17_object; // 0x996 Mov
	func_2431(var_18_object); // 0x997 Call
	return 0; // 0x999 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x99b PushV
	var_21_object = var_17_object; // 0x99c Mov
	var_22_int = var_18_int; // 0x99d Mov
	var_23_float = var_19_float; // 0x99e Mov
	func_2122(var_22_int, var_23_float); // 0x99f Call
	return 0; // 0x9a1 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_bool = 1; // 0xaa PushB
	SensePlayerOnly(var_17_bool); // 0xab Func
	func_2723(); // 0xae Call
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


func_2565(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0xa06 PushV
	var_29_object = var_27_object; // 0xa07 Mov
	func_2098(var_28_bool, var_29_object); // 0xa08 Call
	var_62_bool = var_28_bool == 0; // 0xa0a Not
	if(var_62_bool == 0) goto Label_2574; // 0xa0b JumpB
	var_26_int = 0; // 0xa0c MovI
	return 0; // 0xa0d Return
	
Label_2574:
	var_63_bool = 0; var_64_object = Obj(); // 0xa0e PushV
	var_64_object = var_27_object; // 0xa0f Mov
	func_2770(var_64_object); // 0xa10 Call
	if(var_63_bool == 0) goto Label_2581; // 0xa12 JumpB
	var_26_int = 2; // 0xa13 MovI
	goto Label_2582; // 0xa14 Jump
	
Label_2582:
	return 0; // 0xa16 Return
	
Label_2581:
	var_26_int = 0; // 0xa15 MovI
}


func_1545(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x60a PushV
	var_23_object = var_21_object; // 0x60b Mov
	func_2098(var_22_bool, var_23_object); // 0x60c Call
	var_20_bool = var_22_bool; // 0x60d Mov
	return 0; // 0x60f Return
}


func_2057(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x809 PushV
	IsDead(var_40_bool); // 0x80a ObjFunc
	var_37_bool = var_40_bool; // 0x80c Mov
	return 2; // 0x80d Return
}


func_2062(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x80e PushV
	var_32_bool = var_27_object == 0; // 0x80f NullEq
	if(var_32_bool == 0) goto Label_2067; // 0x810 JumpB
	var_26_bool = 0; // 0x811 MovB
	return 4; // 0x812 Return
	
Label_2067:
	var_33_bool = 0; // 0x813 PushV
	var_33_bool = 0; // 0x814 MovB
	var_34_string = "IsDead"; // 0x815 PushS
	var_35_int = 1; // 0x816 PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x817 FuncExist
	if(var_36_bool == 0) goto Label_2079; // 0x818 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x819 PushV
	var_38_object = var_27_object; // 0x81a Mov
	func_2057(var_38_object); // 0x81b Call
	if(var_37_bool == 0) goto Label_2079; // 0x81d JumpB
	var_33_bool = 1; // 0x81e MovB
	
Label_2079:
	if(var_33_bool == 0) goto Label_2082; // 0x81f JumpB
	var_26_bool = 0; // 0x820 MovB
	return 4; // 0x821 Return
	
Label_2082:
	GetScene(var_30_object); // 0x822 Func
	var_41_bool = var_30_object == 0; // 0x824 NullEq
	if(var_41_bool == 0) goto Label_2088; // 0x825 JumpB
	var_26_bool = 0; // 0x826 MovB
	return 4; // 0x827 Return
	
Label_2088:
	GetScene(var_31_object); // 0x828 ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x82a Neq
	if(var_42_bool == 0) goto Label_2094; // 0x82b JumpB
	var_26_bool = 0; // 0x82c MovB
	return 4; // 0x82d Return
	
Label_2094:
	var_26_bool = 1; // 0x82e MovB
	return 4; // 0x82f Return
}


func_1552(var_176_string)
{
	var_176_string = "walk"; // 0x610 MovS
	return 0; // 0x611 Return
}


func_1554(var_177_string)
{
	var_177_string = "run"; // 0x612 MovS
	return 0; // 0x613 Return
}


func_1556(var_0_bool, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x614 PushV
	var_0_bool = var_36_object; // 0x615 TMov
	var_46_bool = 0; var_47_object = Obj(); // 0x616 PushV
	var_47_object = var_36_object; // 0x617 Mov
	func_2205(var_47_object); // 0x618 Call
	var_86_bool = var_46_bool == 0; // 0x61a Not
	if(var_86_bool == 0) goto Label_1566; // 0x61b JumpB
	var_35_int = -2; // 0x61c MovI
	return 8; // 0x61d Return
	
Label_1566:
	CreateDialog(var_42_object); // 0x61e Func
	var_87_int = 0; // 0x620 PushV
	func_2717(var_87_int); // 0x621 Call
	SetNPCName(var_87_int); // 0x623 ObjFunc
	var_88_string = ""; // 0x625 PushV
	func_2719(var_88_string); // 0x626 Call
	SetPhoto(var_88_string); // 0x628 ObjFunc
	var_89_int = 0; // 0x62a PushV
	func_2616(var_89_int); // 0x62b Call
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
	func_2261(); // 0x64a Call
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
	func_2819(); // 0x1e Call
	EventEnable(0); // 0x20 EventEnable
	
Label_33:
	Hold(); // 0x21 Func
	goto Label_33; // 0x23 Jump
}


func_2583(var_75_object)
{
	var_76_object = Obj(); // 0xa18 PushV
	var_76_object = var_75_object; // 0xa19 Mov
	func_2517(var_76_object); // 0xa1a Call
	return 0; // 0xa1c Return
}


func_2589(var_20_int)
{
	var_20_int = 2; // 0xa1e MovI
	return 0; // 0xa1f Return
}


func_2592(var_28_object)
{
	var_29_object = Obj(); // 0xa21 PushV
	var_29_object = var_28_object; // 0xa22 Mov
	func_2730(var_28_object, var_29_object); // 0xa23 Call
	return 0; // 0xa25 Return
}


func_2598()
{
	return 0; // 0xa26 Return
}


func_2599()
{
	var_25_int = 1000; // 0xa28 PushI
	SetReturnValue(var_25_int); // 0xa29 ObjFunc
	return 0; // 0xa2b Return
}


func_2604()
{
0xa2c: PushEmpty() // 0xa2c PushV
0xa2d: PushEmpty(int, string) // 0xa2d PushV
0xa2e: Stack[-1] = "KnowTvirin" // 0xa2e MovS
0xa2f: Call 0x971 // 0xa2f Call
}


func_2098(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x832 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x833 PushV
	var_27_object = var_23_object; // 0x834 Mov
	func_2062(var_26_bool, var_27_object); // 0x835 Call
	var_43_bool = var_26_bool == 0; // 0x837 Not
	if(var_43_bool == 0) goto Label_2107; // 0x838 JumpB
	var_22_bool = 0; // 0x839 MovB
	return 2; // 0x83a Return
	
Label_2107:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x83b PushV
	var_45_object = var_23_object; // 0x83c Mov
	var_46_string = "noaccess"; // 0x83d MovS
	func_1981(var_44_bool, var_45_object, var_46_string); // 0x83e Call
	var_53_bool = var_44_bool == 0; // 0x840 Not
	if(var_53_bool == 0) goto Label_2116; // 0x841 JumpB
	var_22_bool = 1; // 0x842 MovB
	return 2; // 0x843 Return
	
Label_2116:
	var_54_string = "noaccess"; // 0x844 PushS
	GetProperty(var_54_string, var_25_int); // 0x845 ObjFunc
	var_55_int = 0; // 0x847 PushI
	var_22_bool = var_25_int == var_55_int; // 0x848 Eq2
	return 2; // 0x849 Return
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


func_2616(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0xa38 PushV
	var_92_string = "player"; // 0xa39 PushS
	GetVariable(var_92_string, var_91_int); // 0xa3a Func
	var_93_int = 0; // 0xa3c PushI
	var_94_bool = var_91_int == var_93_int; // 0xa3d Eq
	if(var_94_bool == 0) goto Label_2626; // 0xa3e JumpB
	var_89_int = 200001; // 0xa3f MovI
	return 2; // 0xa40 Return
	
Label_2626:
	var_95_int = 1; // 0xa42 PushI
	var_96_bool = var_91_int == var_95_int; // 0xa43 Eq
	if(var_96_bool == 0) goto Label_2631; // 0xa44 JumpB
	var_89_int = 200002; // 0xa45 MovI
	return 2; // 0xa46 Return
	
Label_2631:
	var_89_int = 200003; // 0xa47 MovI
	return 2; // 0xa48 Return
}


func_2633(var_77_int, var_78_int)
{
	var_88_int = 0; var_89_int = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_bool = 0; // 0xa49 PushV
	var_96_bool = var_77_int > var_78_int; // 0xa4a GT
	if(var_96_bool == 0) goto Label_2640; // 0xa4b JumpB
	var_97_string = "GenerateMoney: iMin > iMax"; // 0xa4c PushS
	Trace(var_97_string); // 0xa4d Func
	return 8; // 0xa4f Return
	
Label_2640:
	var_92_int = 0; // 0xa50 MovI
	var_98_bool = var_77_int != var_78_int; // 0xa51 Neq
	if(var_98_bool == 0) goto Label_2647; // 0xa52 JumpB
	var_99_int = var_78_int - var_77_int; // 0xa53 Sub
	irand(var_93_int, var_99_int); // 0xa54 Func
	goto Label_2651; // 0xa56 Jump
	
Label_2651:
	var_92_int = var_92_int + var_77_int; // 0xa5b Add2
	var_100_int = 0; // 0xa5c PushI
	var_101_bool = var_92_int == var_100_int; // 0xa5d Eq
	if(var_101_bool == 0) goto Label_2656; // 0xa5e JumpB
	return 8; // 0xa5f Return
	
Label_2656:
	var_102_string = "Money"; // 0xa60 PushS
	GetInvItemByName(var_94_int, var_102_string); // 0xa61 Func
	var_103_int = 0; // 0xa63 PushI
	AddItem(var_95_bool, var_94_int, var_103_int, var_92_int); // 0xa64 Func
	return 8; // 0xa66 Return
	
Label_2647:
	var_104_int = 0; // 0xa57 PushI
	var_105_bool = var_77_int == var_104_int; // 0xa58 Eq
	if(var_105_bool == 0) goto Label_2651; // 0xa59 JumpB
	return 8; // 0xa5a Return
}


func_2122(var_21_object, var_22_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_object = Obj(); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x84a PushV
	var_44_bool = 0; // 0x84b PushV
	var_44_bool = 0; // 0x84c MovB
	var_45_int = 4; // 0x84d PushI
	var_46_bool = var_22_int != var_45_int; // 0x84e Neq
	if(var_46_bool == 0) goto Label_2132; // 0x84f JumpB
	var_47_int = 5; // 0x850 PushI
	var_48_bool = var_22_int != var_47_int; // 0x851 Neq
	if(var_48_bool == 0) goto Label_2132; // 0x852 JumpB
	var_44_bool = 1; // 0x853 MovB
	
Label_2132:
	if(var_44_bool == 0) goto Label_2151; // 0x854 JumpB
	GetScene(var_34_object); // 0x855 Func
	GetPosition(var_36_cvector); // 0x857 Func
	GetEyesHeight(var_37_float); // 0x859 Func
	var_49_float = GetByIndex(var_36_cvector, 1); // 0x85b PushE
	var_50_int = 2; // 0x85c PushI
	var_51_float = var_37_float / var_50_int; // 0x85d Div
	var_49_float = var_49_float + var_51_float; // 0x85e Add2
	SetByIndex(var_36_cvector, 1) = var_49_float; // 0x85f PopE
	var_52_string = "scripted"; // 0x860 PushS
	var_53_cvector = CVector(0.0, 0.0, 1.0); // 0x861 PushVec
	var_54_string = "blood.xml"; // 0x862 PushS
	AddActorByType(var_35_object, var_52_string, var_34_object, var_36_cvector, var_53_cvector, var_54_string); // 0x863 Func
	var_35_object = 0; // 0x865 SetNull
	var_34_object = 0; // 0x866 SetNull
	
Label_2151:
	var_55_bool = var_21_object == 0; // 0x867 NullEq
	if(var_55_bool == 0) goto Label_2154; // 0x868 JumpB
	return 20; // 0x869 Return
	
Label_2154:
	GetSecondaryAnimationType(var_38_int); // 0x86a Func
	var_56_int = 0; // 0x86c PushI
	var_57_bool = var_38_int < var_56_int; // 0x86d LT
	if(var_57_bool == 0) goto Label_2160; // 0x86e JumpB
	return 20; // 0x86f Return
	
Label_2160:
	GetPosition(var_39_cvector); // 0x870 ObjFunc
	GetPosition(var_40_cvector); // 0x872 Func
	GetDirection(var_41_cvector); // 0x874 Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x876 Sub2
	var_58_float = GetByIndex(var_42_cvector, 0); // 0x877 PushE
	var_59_float = GetByIndex(var_41_cvector, 0); // 0x878 PushE
	var_60_float = var_58_float * var_59_float; // 0x879 Mult
	var_61_float = GetByIndex(var_42_cvector, 2); // 0x87a PushE
	var_62_float = GetByIndex(var_41_cvector, 2); // 0x87b PushE
	var_63_float = var_61_float * var_62_float; // 0x87c Mult
	var_64_int = var_60_float + var_63_float; // 0x87d Add
	var_65_int = 0; // 0x87e PushI
	var_66_bool = var_64_int >= var_65_int; // 0x87f GE
	if(var_66_bool == 0) goto Label_2179; // 0x880 JumpB
	var_43_string = "fhit"; // 0x881 MovS
	goto Label_2180; // 0x882 Jump
	
Label_2180:
	var_67_string = "hit_react"; // 0x884 PushS
	var_68_string = "1"; // 0x885 PushS
	var_69_int = var_43_string + var_68_string; // 0x886 Add
	var_70_string = "2"; // 0x887 PushS
	var_71_int = var_43_string + var_70_string; // 0x888 Add
	var_72_int = -10; // 0x889 PushI
	FadeSecondaryAnimation(var_67_string, var_69_int, var_71_int, var_72_int); // 0x88a Func
	return 20; // 0x88c Return
	
Label_2179:
	var_43_string = "bhit"; // 0x883 MovS
}


func_593()
{
	var_67_int = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0; var_72_float = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_float = 0; var_80_bool = 0; // 0x251 PushV
	WaitForAnimEnd(); // 0x252 Func
	var_81_bool = 0; // 0x254 PushV
	func_2200(var_81_bool); // 0x255 Call
	var_82_bool = var_81_bool == 0; // 0x257 Not
	if(var_82_bool == 0) goto Label_602; // 0x258 JumpB
	return 14; // 0x259 Return
	
Label_602:
	var_83_int = 0; // 0x25a PushV
	func_2473(var_83_int); // 0x25b Call
	var_74_int = var_83_int; // 0x25c Mov
	var_75_int = 0; // 0x25e MovI
	
Label_607:
	var_96_bool = 0; // 0x25f PushV
	var_96_bool = 0; // 0x260 MovB
	var_97_int = 5; // 0x261 PushI
	var_98_bool = var_75_int < var_97_int; // 0x262 LT
	if(var_98_bool == 0) goto Label_617; // 0x263 JumpB
	var_99_bool = 0; // 0x264 PushV
	func_2200(var_99_bool); // 0x265 Call
	if(var_99_bool == 0) goto Label_617; // 0x267 JumpB
	var_96_bool = 1; // 0x268 MovB
	
Label_617:
	if(var_96_bool == 0) goto Label_661; // 0x269 JumpB
	var_100_int = 3; // 0x26a PushI
	irand(var_76_int, var_100_int); // 0x26b Func
	var_101_int = 0; // 0x26d PushI
	var_102_bool = var_76_int == var_101_int; // 0x26e Eq
	if(var_102_bool == 0) goto Label_641; // 0x26f JumpB
	var_103_int = var_74_int; // 0x270 Push
	if(var_103_int == 0) goto Label_640; // 0x271 JumpB
	irand(var_77_int, var_74_int); // 0x272 Func
	var_104_string = "all"; // 0x274 PushS
	var_105_string = ""; var_106_int = 0; // 0x275 PushV
	var_106_int = var_77_int; // 0x276 Mov
	func_2466(var_105_string, var_106_int); // 0x277 Call
	PlayAnimation(var_104_string, var_105_string); // 0x279 Func
	WaitForAnimEnd(var_78_bool); // 0x27b Func
	var_107_bool = var_78_bool == 0; // 0x27d Not
	if(var_107_bool == 0) goto Label_640; // 0x27e JumpB
	goto Label_661; // 0x27f Jump
	
Label_661:
	return 14; // 0x295 Return
	
Label_640:
	goto Label_658; // 0x280 Jump
	
Label_658:
	var_108_int = 1; // 0x292 PushI
	var_75_int = var_75_int + var_108_int; // 0x293 Add2
	goto Label_607; // 0x294 Jump
	
Label_641:
	var_109_int = 1; // 0x281 PushI
	var_110_bool = var_76_int == var_109_int; // 0x282 Eq
	if(var_110_bool == 0) goto Label_655; // 0x283 JumpB
	var_111_int = 4; // 0x284 PushI
	rand(var_79_float, var_111_int); // 0x285 Func
	var_112_int = 1; // 0x287 PushI
	var_113_int = var_79_float + var_112_int; // 0x288 Add
	Sleep(var_113_int, var_80_bool); // 0x289 Func
	var_114_bool = var_80_bool == 0; // 0x28b Not
	if(var_114_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_661; // 0x28d Jump
	
Label_654:
	goto Label_658; // 0x28e Jump
	
Label_655:
	var_115_int = var_75_int; // 0x28f Push
	if(var_115_int == 0) goto Label_658; // 0x290 JumpB
	goto Label_661; // 0x291 Jump
}


func_1619(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_98_object, var_99_object)
{
	var_0_bool = var_99_object; // 0x654 TMov
	var_1_bool = var_98_object; // 0x655 TMov
	var_3_bool = 0; // 0x656 TMovB
	var_104_int = 1; // 0x657 PushI
	if(var_104_int == 0) goto Label_1697; // 0x658 JumpB
	var_105_string = ""; // 0x659 PushV
	var_105_string = "Neutral"; // 0x65a MovS
	func_1727(var_99_object, var_105_string); // 0x65b Call
	var_120_int = 13794; // 0x65d PushI
	SetMessage(var_120_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_121_int = 13795; // 0x662 PushI
	var_122_int = -1; // 0x663 PushI
	var_123_int = 15021; // 0x664 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x665 TObjFunc
	var_124_int = 13796; // 0x667 PushI
	var_125_int = -1; // 0x668 PushI
	var_126_int = 15022; // 0x669 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66a TObjFunc
	goto Label_1697; // 0x66c Jump
	
Label_1697:
	var_127_bool = 0; // 0x6a1 PushV
	func_2721(var_127_bool); // 0x6a2 Call
	if(var_127_bool == 0) goto Label_1712; // 0x6a4 JumpB
	
Label_1701:
	lshWaitForAnimEnd(); // 0x6a5 Func
	var_128_bool = var_3_bool; // 0x6a7 PushT
	if(var_128_bool == 0) goto Label_1706; // 0x6a8 JumpB
	goto Label_1711; // 0x6a9 Jump
	
Label_1711:
	goto Label_1726; // 0x6af Jump
	
Label_1726:
	return 0; // 0x6be Return
	
Label_1706:
	var_129_string = ""; // 0x6aa PushV
	var_129_string = var_2_bool; // 0x6ab MovT
	func_2317(var_129_string); // 0x6ac Call
	goto Label_1701; // 0x6ae Jump
	
Label_1712:
	var_130_string = "all"; // 0x6b0 PushS
	var_131_string = "idle"; // 0x6b1 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x6b2 Func
	
Label_1716:
	WaitForAnimEnd(); // 0x6b4 Func
	var_132_bool = var_3_bool; // 0x6b6 PushT
	if(var_132_bool == 0) goto Label_1721; // 0x6b7 JumpB
	goto Label_1726; // 0x6b8 Jump
	
Label_1721:
	var_133_string = "all"; // 0x6b9 PushS
	var_134_string = "idle"; // 0x6ba PushS
	PlayAnimation(var_133_string, var_134_string); // 0x6bb Func
	goto Label_1716; // 0x6bd Jump
}


func_1112(var_0_bool, var_290_float, var_291_int)
{
	var_292_object = Obj(); var_293_float = 0; var_294_float = 0; var_295_object = Obj(); var_296_float = 0; var_297_float = 0; // 0x458 PushV
	var_298_float = 0.9; // 0x459 PushF
	var_299_float = var_290_float * var_298_float; // 0x45a Mult
	GetVictim(var_299_float, var_295_object); // 0x45b Func
	ReportAttack(var_0_bool); // 0x45d Func
	var_300_bool = var_295_object == var_0_bool; // 0x45f Eq
	if(var_300_bool == 0) goto Label_1149; // 0x460 JumpB
	var_301_float = 0; var_302_object = Obj(); var_303_int = 0; // 0x461 PushV
	var_302_object = var_295_object; // 0x462 Mov
	var_303_int = var_291_int; // 0x463 Mov
	func_901(var_303_int); // 0x464 Call
	var_296_float = var_301_float; // 0x465 Mov
	var_304_float = 0; var_305_object = Obj(); var_306_float = 0; var_307_int = 0; // 0x467 PushV
	var_305_object = var_295_object; // 0x468 Mov
	var_306_float = var_296_float; // 0x469 Mov
	var_308_int = 0; var_309_object = Obj(); var_310_int = 0; // 0x46a PushV
	var_309_object = var_295_object; // 0x46b Mov
	var_310_int = var_291_int; // 0x46c Mov
	func_904(var_310_int); // 0x46d Call
	var_307_int = var_308_int; // 0x46e Mov
	func_1993(var_304_float, var_305_object, var_306_float, var_307_int); // 0x470 Call
	var_297_float = var_304_float; // 0x471 Mov
	var_357_int = 0; // 0x473 PushV
	func_1390(var_357_int); // 0x474 Call
	ReportHit(var_0_bool, var_357_int, var_297_float, var_296_float); // 0x476 Func
	var_358_object = Obj(); var_359_float = 0; // 0x478 PushV
	var_358_object = var_295_object; // 0x479 Mov
	var_359_float = var_297_float; // 0x47a Mov
	func_1392(); // 0x47b Call
	
Label_1149:
	return 6; // 0x47d Return
}


func_2663()
{
	var_74_bool = 0; var_75_bool = 0; // 0xa67 PushV
	var_76_int = 0; // 0xa68 PushI
	ClearSubContainer(var_76_int); // 0xa69 Func
	var_77_int = 0; var_78_int = 0; // 0xa6b PushV
	var_77_int = 30; // 0xa6c MovI
	var_79_int = 50; // 0xa6d PushI
	var_80_int = 0; // 0xa6e PushV
	func_2422(var_80_int); // 0xa6f Call
	var_86_int = 30; // 0xa71 PushI
	var_87_float = var_80_int * var_86_int; // 0xa72 Mult
	var_78_int = var_79_int + var_87_float; // 0xa73 Add2
	func_2633(var_77_int, var_78_int); // 0xa74 Call
	return 2; // 0xa76 Return
}


func_2679()
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0xa77 PushV
	var_23_int = 0; // 0xa78 PushI
	ClearSubContainer(var_23_int); // 0xa79 Func
	var_24_int = 2; // 0xa7b PushI
	irand(var_22_int, var_24_int); // 0xa7c Func
	var_25_int = 0; // 0xa7e PushI
	var_26_bool = var_22_int == var_25_int; // 0xa7f Eq
	if(var_26_bool == 0) goto Label_2697; // 0xa80 JumpB
	var_27_int = 0; var_28_string = ""; // 0xa81 PushV
	var_28_string = "bandage"; // 0xa82 MovS
	func_2712(var_27_int, var_28_string); // 0xa83 Call
	var_31_int = 0; // 0xa85 PushI
	var_32_int = 1; // 0xa86 PushI
	AddItem(var_21_bool, var_27_int, var_31_int, var_32_int); // 0xa87 Func
	
Label_2697:
	var_33_int = 2; // 0xa89 PushI
	irand(var_22_int, var_33_int); // 0xa8a Func
	var_34_int = 0; // 0xa8c PushI
	var_35_bool = var_22_int == var_34_int; // 0xa8d Eq
	if(var_35_bool == 0) goto Label_2711; // 0xa8e JumpB
	var_36_int = 0; var_37_string = ""; // 0xa8f PushV
	var_37_string = "tourniquet"; // 0xa90 MovS
	func_2712(var_36_int, var_37_string); // 0xa91 Call
	var_38_int = 0; // 0xa93 PushI
	var_39_int = 1; // 0xa94 PushI
	AddItem(var_21_bool, var_36_int, var_38_int, var_39_int); // 0xa95 Func
	
Label_2711:
	return 4; // 0xa97 Return
}


func_1151(var_0_bool, var_261_bool, var_262_float)
{
	var_263_int = 0; var_264_bool = 0; var_265_int = 0; var_266_bool = 0; // 0x47f PushV
	irand(var_265_int, var_266_bool); // 0x480 Func
	var_267_int = 1; // 0x482 PushI
	var_265_int = var_265_int + var_267_int; // 0x483 Add2
	Face(var_0_bool); // 0x484 Func
	var_268_bool = 1; // 0x486 PushB
	SetAttackState(var_268_bool); // 0x487 Func
	var_269_string = "all"; // 0x489 PushS
	var_270_string = "attack_begin"; // 0x48a PushS
	var_271_int = var_270_string + var_265_int; // 0x48b Add
	PlayAnimation(var_269_string, var_271_int); // 0x48c Func
	WaitForAnimEnd(); // 0x48e Func
	func_1358(var_265_int, var_266_bool); // 0x491 Call
	var_287_bool = 0; var_288_object = Obj(); // 0x493 PushV
	var_288_object = var_0_bool; // 0x494 MovT
	func_2098(var_287_bool, var_288_object); // 0x495 Call
	var_289_bool = var_287_bool == 0; // 0x497 Not
	if(var_289_bool == 0) goto Label_1181; // 0x498 JumpB
	StopAsync(); // 0x499 Func
	var_261_bool = 0; // 0x49b MovB
	return 4; // 0x49c Return
	
Label_1181:
	var_290_float = 0; var_291_int = 0; // 0x49d PushV
	var_290_float = var_262_float; // 0x49e Mov
	var_291_int = var_265_int; // 0x49f Mov
	func_1112(var_266_bool, var_290_float, var_291_int); // 0x4a0 Call
	var_360_string = "all"; // 0x4a2 PushS
	var_361_string = "attack_middle"; // 0x4a3 PushS
	var_362_int = var_361_string + var_265_int; // 0x4a4 Add
	HasAnimation(var_266_bool, var_360_string, var_362_int); // 0x4a5 Func
	var_363_bool = var_266_bool; // 0x4a7 Push
	if(var_363_bool == 0) goto Label_1215; // 0x4a8 JumpB
	var_364_string = "all"; // 0x4a9 PushS
	var_365_string = "attack_middle"; // 0x4aa PushS
	var_366_int = var_365_string + var_265_int; // 0x4ab Add
	PlayAnimation(var_364_string, var_366_int); // 0x4ac Func
	WaitForAnimEnd(); // 0x4ae Func
	var_367_bool = 0; var_368_object = Obj(); // 0x4b0 PushV
	var_368_object = var_0_bool; // 0x4b1 MovT
	func_2098(var_367_bool, var_368_object); // 0x4b2 Call
	var_369_bool = var_367_bool == 0; // 0x4b4 Not
	if(var_369_bool == 0) goto Label_1210; // 0x4b5 JumpB
	StopAsync(); // 0x4b6 Func
	var_261_bool = 0; // 0x4b8 MovB
	return 4; // 0x4b9 Return
	
Label_1210:
	var_370_float = 0; var_371_int = 0; // 0x4ba PushV
	var_370_float = var_262_float; // 0x4bb Mov
	var_371_int = var_265_int; // 0x4bc Mov
	func_1112(var_266_bool, var_370_float, var_371_int); // 0x4bd Call
	
Label_1215:
	var_372_bool = 0; // 0x4bf PushB
	SetAttackState(var_372_bool); // 0x4c0 Func
	var_373_string = "all"; // 0x4c2 PushS
	var_374_string = "attack_end"; // 0x4c3 PushS
	var_375_int = var_374_string + var_265_int; // 0x4c4 Add
	PlayAnimation(var_373_string, var_375_int); // 0x4c5 Func
	var_376_bool = 0; var_377_float = 0; // 0x4c7 PushV
	var_377_float = 0.75; // 0x4c8 MovF
	func_1231(var_376_bool, var_377_float); // 0x4c9 Call
	StopAsync(); // 0x4cb Func
	var_261_bool = 1; // 0x4cd MovB
	return 4; // 0x4ce Return
}


func_2189()
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x88d PushV
	GetPosition(var_97_cvector); // 0x88e ObjFunc
	GetPosition(var_98_cvector); // 0x890 Func
	var_99_cvector = var_97_cvector - var_98_cvector; // 0x892 Sub2
	var_100_float = GetByIndex(var_99_cvector, 0); // 0x893 PushE
	var_101_float = GetByIndex(var_99_cvector, 2); // 0x894 PushE
	RotateAsync(var_100_float, var_101_float); // 0x895 Func
	return 6; // 0x897 Return
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


func_2200(var_40_bool)
{
	var_41_bool = 0; var_42_bool = 0; // 0x898 PushV
	IsLoaded(var_42_bool); // 0x899 Func
	var_40_bool = var_42_bool; // 0x89b Mov
	return 2; // 0x89c Return
}


func_2712(var_27_int, var_28_string)
{
	var_29_int = 0; var_30_int = 0; // 0xa98 PushV
	GetInvItemByName(var_30_int, var_28_string); // 0xa99 Func
	var_27_int = var_30_int; // 0xa9b Mov
	return 2; // 0xa9c Return
}


func_667(var_0_bool, var_69_object)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; // 0x29b PushV
	var_0_bool = var_69_object; // 0x29c TMov
	func_718(var_76_bool); // 0x29e Call
	GetDirection(var_74_cvector); // 0x2a0 Func
	var_84_cvector = CVector(0,0,0); var_85_object = Obj(); // 0x2a2 PushV
	var_85_object = var_0_bool; // 0x2a3 MovT
	func_1966(var_85_object); // 0x2a4 Call
	var_75_cvector = var_84_cvector; // 0x2a5 Mov
	var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x2a7 PushV
	var_91_cvector = var_74_cvector; // 0x2a8 Mov
	var_92_cvector = var_75_cvector; // 0x2a9 Mov
	func_2400(var_90_float, var_91_cvector, var_92_cvector); // 0x2aa Call
	var_114_int = 0; // 0x2ac PushI
	var_115_bool = var_90_float < var_114_int; // 0x2ad LT
	if(var_115_bool == 0) goto Label_693; // 0x2ae JumpB
	var_116_object = Obj(); // 0x2af PushV
	var_116_object = var_0_bool; // 0x2b0 MovT
	func_2189(); // 0x2b1 Call
	var_76_bool = 1; // 0x2b3 MovB
	goto Label_696; // 0x2b4 Jump
	
Label_696:
	var_125_bool = var_76_bool; // 0x2b8 Push
	if(var_125_bool == 0) goto Label_712; // 0x2b9 JumpB
	var_126_object = Obj(); // 0x2ba PushV
	var_126_object = var_0_bool; // 0x2bb MovT
	func_2189(); // 0x2bc Call
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


func_2205(var_46_bool)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; // 0x89d PushV
	GetPosition(var_57_cvector); // 0x89e ObjFunc
	GetEyesHeight(var_56_float); // 0x8a0 ObjFunc
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x8a2 PushE
	var_64_float = var_64_float + var_56_float; // 0x8a3 Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x8a4 PopE
	GetPosition(var_58_cvector); // 0x8a5 Func
	GetEyesHeight(var_56_float); // 0x8a7 Func
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x8a9 PushE
	var_65_float = var_65_float + var_56_float; // 0x8aa Add2
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x8ab PopE
	var_59_cvector = var_57_cvector - var_58_cvector; // 0x8ac Sub2
	var_66_float = GetByIndex(var_59_cvector, 1); // 0x8ad PushE
	var_66_float = 0; // 0x8ae MovI
	SetByIndex(var_59_cvector, 1) = var_66_float; // 0x8af PopE
	var_67_int = var_59_cvector | var_59_cvector; // 0x8b0 Or
	var_68_float = sqrt(var_67_int); // 0x8b1 Sqrt
	var_59_cvector = var_59_cvector / var_59_cvector; // 0x8b2 Div2
	var_60_cvector = -var_59_cvector; // 0x8b3 Neg2
	var_69_int = 70; // 0x8b4 PushI
	var_70_float = var_59_cvector * var_69_int; // 0x8b5 Mult
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x8b6 PushV
	var_73_cvector = CVector(0.0, 1.0, 0.0); // 0x8b7 PushVec
	var_72_cvector = var_60_cvector ^ var_73_cvector; // 0x8b8 Xor2
	func_2353(var_71_cvector, var_72_cvector); // 0x8b9 Call
	var_79_int = 25; // 0x8bb PushI
	var_80_float = var_71_cvector * var_79_int; // 0x8bc Mult
	var_81_int = var_70_float + var_80_float; // 0x8bd Add
	var_82_cvector = CVector(0.0, 10.0, 0.0); // 0x8be PushVec
	var_61_cvector = var_81_int - var_82_cvector; // 0x8bf Sub2
	var_62_cvector = var_58_cvector + var_61_cvector; // 0x8c0 Add2
	IsOverrideActive(var_63_bool); // 0x8c1 Func
	var_83_bool = var_63_bool; // 0x8c3 Push
	if(var_83_bool == 0) goto Label_2247; // 0x8c4 JumpB
	var_46_bool = 0; // 0x8c5 MovB
	return 16; // 0x8c6 Return
	
Label_2247:
	StopWorld(); // 0x8c7 Func
	CameraTransit(var_62_cvector, var_60_cvector); // 0x8c9 Func
	var_84_float = GetByIndex(var_61_cvector, 0); // 0x8cb PushE
	var_85_float = GetByIndex(var_61_cvector, 2); // 0x8cc PushE
	Rotate(var_84_float, var_85_float); // 0x8cd Func
	CameraWaitForPlayFinish(); // 0x8cf Func
	ResumeWorld(); // 0x8d1 Func
	var_46_bool = 1; // 0x8d3 MovB
	return 16; // 0x8d4 Return
}


func_2717(var_87_int)
{
	var_87_int = 3342; // 0xa9d MovI
	return 0; // 0xa9e Return
}


func_2719(var_88_string)
{
	var_88_string = "ui/NPC_None.png"; // 0xa9f MovS
	return 0; // 0xaa0 Return
}


func_2721(var_20_bool)
{
	var_20_bool = 0; // 0xaa1 MovB
	return 0; // 0xaa2 Return
}


func_2723()
{
	var_18_bool = GlobalVars[1]; // 0xaa3 PushGE
	var_18_bool = 0; // 0xaa4 MovB
	GlobalVars[1] = var_18_bool; // 0xaa5 PopGE
	func_2679(); // 0xaa7 Call
	return 0; // 0xaa9 Return
}


func_2730(var_29_object, var_37_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0xaaa PushV
	var_32_bool = GlobalVars[1]; // 0xaab PushGE
	if(var_32_bool == 0) goto Label_2741; // 0xaac JumpB
	IsOverrideActive(var_31_bool); // 0xaad Func
	var_33_bool = var_31_bool == 0; // 0xaaf Not
	if(var_33_bool == 0) goto Label_2739; // 0xab0 JumpB
	WorkWithCorpse(var_29_object); // 0xab1 Func
	
Label_2739:
	return 2; // 0xab3 Return
	
Label_2741:
	var_34_int = 1000; // 0xab5 PushI
	var_35_int = 0; var_36_object = Obj(); // 0xab6 PushV
	var_36_object = var_29_object; // 0xab7 Mov
	TaskCall(7); // 0xab8 TaskCall
	func_1556(var_37_object, var_35_int, var_36_object); // 0xab9 Call
	TaskReturn(); // 0xaba TaskReturn
	var_137_bool = var_34_int == var_37_object; // 0xabc Eq
	if(var_137_bool == 0) goto Label_2767; // 0xabd JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0xabe PushV
	var_139_object = var_29_object; // 0xabf Mov
	func_2265(var_139_object); // 0xac0 Call
	var_167_bool = var_138_bool == 0; // 0xac2 Not
	if(var_167_bool == 0) goto Label_2757; // 0xac3 JumpB
	return 2; // 0xac4 Return
	
Label_2757:
	var_168_object = Obj(); // 0xac5 PushV
	var_168_object = var_29_object; // 0xac6 Mov
	TaskCall(0); // 0xac7 TaskCall
	func_0(var_168_object); // 0xac8 Call
	TaskReturn(); // 0xac9 TaskReturn
	var_173_object = Obj(); // 0xacb PushV
	var_173_object = var_29_object; // 0xacc Mov
	func_2313(); // 0xacd Call
	
Label_2767:
	return 2; // 0xacf Return
}


func_185()
{
	var_40_bool = 0; // 0xb9 PushV
	func_2200(var_40_bool); // 0xba Call
	var_43_bool = var_40_bool == 0; // 0xbc Not
	if(var_43_bool == 0) goto Label_193; // 0xbd JumpB
	func_2598(); // 0xbf Call
	
Label_193:
	return 0; // 0xc1 Return
}


func_1727(var_2_bool, var_28_string)
{
	var_29_bool = 0; // 0x6c0 PushV
	func_2721(var_29_bool); // 0x6c1 Call
	var_30_bool = var_29_bool == 0; // 0x6c3 Not
	if(var_30_bool == 0) goto Label_1734; // 0x6c4 JumpB
	return 0; // 0x6c5 Return
	
Label_1734:
	var_31_bool = var_28_string == var_2_bool; // 0x6c6 Eq
	if(var_31_bool == 0) goto Label_1737; // 0x6c7 JumpB
	return 0; // 0x6c8 Return
	
Label_1737:
	var_32_string = ""; // 0x6c9 PushV
	var_32_string = var_28_string; // 0x6ca Mov
	func_2317(var_32_string); // 0x6cb Call
	var_2_bool = var_28_string; // 0x6cd TMov
	return 0; // 0x6ce Return
}


func_718(var_0_bool)
{
	var_77_object = Obj(); // 0x2ce PushV
	var_77_object = var_0_bool; // 0x2cf MovT
	func_2335(var_77_object); // 0x2d0 Call
	return 0; // 0x2d2 Return
}


func_1231(var_376_bool, var_377_float)
{
	var_378_float = 0; var_379_bool = 0; var_380_float = 0; var_381_bool = 0; // 0x4cf PushV
	rand(var_380_float); // 0x4d0 Func
	var_382_bool = var_380_float < var_377_float; // 0x4d2 LT
	if(var_382_bool == 0) goto Label_1251; // 0x4d3 JumpB
	
Label_1236:
	IsAnimationPlaying(var_381_bool); // 0x4d4 Func
	var_383_bool = var_381_bool == 0; // 0x4d6 Not
	if(var_383_bool == 0) goto Label_1241; // 0x4d7 JumpB
	goto Label_1250; // 0x4d8 Jump
	
Label_1250:
	goto Label_1253; // 0x4e2 Jump
	
Label_1253:
	var_376_bool = 0; // 0x4e5 MovB
	return 4; // 0x4e6 Return
	
Label_1241:
	var_384_bool = 0; // 0x4d9 PushV
	func_1295(var_381_bool, var_384_bool); // 0x4da Call
	if(var_384_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_376_bool = 1; // 0x4dd MovB
	return 4; // 0x4de Return
	
Label_1247:
	sync(); // 0x4df Func
	goto Label_1236; // 0x4e1 Jump
	
Label_1251:
	WaitForAnimEnd(); // 0x4e3 Func
}


func_2768(var_62_bool)
{
	var_62_bool = 0; // 0xad0 MovB
	return 0; // 0xad1 Return
}


func_2770(var_63_bool)
{
	var_63_bool = 1; // 0xad3 MovB
	return 0; // 0xad4 Return
}


func_2773(var_21_bool, var_22_object, var_23_object)
{
	var_24_string = ""; var_25_bool = 0; var_26_string = ""; var_27_bool = 0; // 0xad5 PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0xad6 PushV
	var_29_object = var_23_object; // 0xad7 Mov
	var_30_string = "class"; // 0xad8 MovS
	func_1981(var_28_bool, var_29_object, var_30_string); // 0xad9 Call
	var_37_bool = var_28_bool == 0; // 0xadb Not
	if(var_37_bool == 0) goto Label_2783; // 0xadc JumpB
	var_21_bool = 0; // 0xadd MovB
	return 4; // 0xade Return
	
Label_2783:
	var_38_string = "class"; // 0xadf PushS
	GetProperty(var_38_string, var_26_string); // 0xae0 ObjFunc
	var_39_string = "rat"; // 0xae2 PushS
	var_40_bool = var_26_string == var_39_string; // 0xae3 Eq
	if(var_40_bool == 0) goto Label_2792; // 0xae4 JumpB
	var_21_bool = 0; // 0xae5 MovB
	return 4; // 0xae6 Return
	
Label_2792:
	var_41_string = "dog"; // 0xae8 PushS
	var_42_bool = var_26_string == var_41_string; // 0xae9 Eq
	if(var_42_bool == 0) goto Label_2797; // 0xaea JumpB
	var_21_bool = 0; // 0xaeb MovB
	return 4; // 0xaec Return
	
Label_2797:
	CanSee(var_27_bool, var_22_object); // 0xaed Func
	var_43_bool = 0; // 0xaef PushV
	var_43_bool = 1; // 0xaf0 MovB
	var_44_bool = var_27_bool; // 0xaf1 Push
	if(var_44_bool == 0) goto Label_2811; // 0xaf2 JumpB
	var_45_float = 0; var_46_object = Obj(); // 0xaf3 PushV
	var_46_object = var_22_object; // 0xaf4 Mov
	func_1973(var_46_object); // 0xaf5 Call
	var_53_float = 250000.0; // 0xaf7 PushF
	var_54_bool = var_45_float <= var_53_float; // 0xaf8 LE
	if(var_54_bool == 0) goto Label_2811; // 0xaf9 JumpB
	var_43_bool = 0; // 0xafa MovB
	
Label_2811:
	if(var_43_bool == 0) goto Label_2817; // 0xafb JumpB
	var_55_float = -0.3; // 0xafc PushF
	ReportReputationChange(var_22_object, var_23_object, var_55_float); // 0xafd Func
	var_21_bool = 1; // 0xaff MovB
	return 4; // 0xb00 Return
	
Label_2817:
	var_21_bool = 0; // 0xb01 MovB
	return 4; // 0xb02 Return
}


func_2261()
{
	CameraSwitchToNormal(); // 0x8d6 Func
	return 0; // 0x8d8 Return
}


func_2265(var_138_bool)
{
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0; var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; // 0x8d9 PushV
	GetPosition(var_149_cvector); // 0x8da ObjFunc
	GetEyesHeight(var_148_float); // 0x8dc ObjFunc
	var_156_float = GetByIndex(var_149_cvector, 1); // 0x8de PushE
	var_156_float = var_156_float + var_148_float; // 0x8df Add2
	SetByIndex(var_149_cvector, 1) = var_156_float; // 0x8e0 PopE
	GetPosition(var_150_cvector); // 0x8e1 Func
	GetEyesHeight(var_148_float); // 0x8e3 Func
	var_157_float = GetByIndex(var_150_cvector, 1); // 0x8e5 PushE
	var_157_float = var_157_float + var_148_float; // 0x8e6 Add2
	SetByIndex(var_150_cvector, 1) = var_157_float; // 0x8e7 PopE
	var_151_cvector = var_149_cvector - var_150_cvector; // 0x8e8 Sub2
	var_158_float = GetByIndex(var_151_cvector, 1); // 0x8e9 PushE
	var_158_float = 0; // 0x8ea MovI
	SetByIndex(var_151_cvector, 1) = var_158_float; // 0x8eb PopE
	var_159_int = var_151_cvector | var_151_cvector; // 0x8ec Or
	var_160_float = sqrt(var_159_int); // 0x8ed Sqrt
	var_151_cvector = var_151_cvector / var_151_cvector; // 0x8ee Div2
	var_152_cvector = -var_151_cvector; // 0x8ef Neg2
	var_161_int = 70; // 0x8f0 PushI
	var_162_float = var_151_cvector * var_161_int; // 0x8f1 Mult
	var_163_cvector = CVector(0.0, 10.0, 0.0); // 0x8f2 PushVec
	var_153_cvector = var_162_float - var_163_cvector; // 0x8f3 Sub2
	var_154_cvector = var_150_cvector + var_153_cvector; // 0x8f4 Add2
	IsOverrideActive(var_155_bool); // 0x8f5 Func
	var_164_bool = var_155_bool; // 0x8f7 Push
	if(var_164_bool == 0) goto Label_2299; // 0x8f8 JumpB
	var_138_bool = 0; // 0x8f9 MovB
	return 16; // 0x8fa Return
	
Label_2299:
	StopWorld(); // 0x8fb Func
	CameraTransit(var_154_cvector, var_152_cvector); // 0x8fd Func
	var_165_float = GetByIndex(var_153_cvector, 0); // 0x8ff PushE
	var_166_float = GetByIndex(var_153_cvector, 2); // 0x900 PushE
	Rotate(var_165_float, var_166_float); // 0x901 Func
	CameraWaitForPlayFinish(); // 0x903 Func
	ResumeWorld(); // 0x905 Func
	var_138_bool = 1; // 0x907 MovB
	return 16; // 0x908 Return
}


func_1255(var_0_bool, var_218_bool, var_219_float)
{
	var_220_bool = 0; var_221_cvector = CVector(0,0,0); var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_float = 0; var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_float = 0; // 0x4e7 PushV
	
Label_1256:
	IsAnimationPlaying(var_225_bool); // 0x4e8 Func
	var_230_bool = var_225_bool == 0; // 0x4ea Not
	if(var_230_bool == 0) goto Label_1261; // 0x4eb JumpB
	goto Label_1293; // 0x4ec Jump
	
Label_1293:
	var_218_bool = 0; // 0x50d MovB
	return 10; // 0x50e Return
	
Label_1261:
	var_231_bool = 0; // 0x4ed PushV
	func_1295(var_229_float, var_231_bool); // 0x4ee Call
	if(var_231_bool == 0) goto Label_1267; // 0x4f0 JumpB
	var_218_bool = 1; // 0x4f1 MovB
	return 10; // 0x4f2 Return
	
Label_1267:
	var_256_bool = 0; var_257_object = Obj(); // 0x4f3 PushV
	var_257_object = var_0_bool; // 0x4f4 MovT
	func_2098(var_256_bool, var_257_object); // 0x4f5 Call
	var_258_bool = var_256_bool == 0; // 0x4f7 Not
	if(var_258_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_218_bool = 0; // 0x4f9 MovB
	return 10; // 0x4fa Return
	
Label_1275:
	GetPFPosition(var_226_cvector); // 0x4fb TObjFunc
	GetPFPosition(var_227_cvector); // 0x4fd Func
	var_228_cvector = var_226_cvector - var_227_cvector; // 0x4ff Sub2
	var_229_float = var_228_cvector | var_228_cvector; // 0x500 Or2
	var_259_float = var_219_float * var_219_float; // 0x501 Mult
	var_260_bool = var_229_float < var_259_float; // 0x502 LT
	if(var_260_bool == 0) goto Label_1290; // 0x503 JumpB
	var_261_bool = 0; var_262_float = 0; // 0x504 PushV
	var_262_float = var_219_float; // 0x505 Mov
	func_1151(var_229_float, var_261_bool, var_262_float); // 0x506 Call
	var_218_bool = 1; // 0x508 MovB
	return 10; // 0x509 Return
	
Label_1290:
	sync(); // 0x50a Func
	goto Label_1256; // 0x50c Jump
}


func_2819()
{
	var_71_bool = GlobalVars[1]; // 0xb04 PushGE
	var_71_bool = 1; // 0xb05 MovB
	GlobalVars[1] = var_71_bool; // 0xb06 PopGE
	var_72_int = 50; // 0xb07 PushI
	var_73_int = 40; // 0xb08 PushI
	SetRTEnvelope(var_72_int, var_73_int); // 0xb09 Func
	func_2663(); // 0xb0c Call
	return 0; // 0xb0e Return
}


func_2313()
{
	CameraSwitchToNormal(); // 0x90a Func
	return 0; // 0x90c Return
}


func_2317(var_32_string)
{
	var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0x90d PushV
	var_37_string = "playing "; // 0x90e PushS
	var_38_int = var_37_string + var_32_string; // 0x90f Add
	Trace(var_38_int); // 0x910 Func
	lshGetAnimTimes(var_32_string, var_35_float, var_36_float); // 0x912 Func
	lshPlayAnimation(var_35_float, var_36_float); // 0x914 Func
	var_39_string = "start: "; // 0x916 PushS
	var_40_int = var_39_string + var_35_float; // 0x917 Add
	Trace(var_40_int); // 0x918 Func
	var_41_string = "end: "; // 0x91a PushS
	var_42_int = var_41_string + var_36_float; // 0x91b Add
	Trace(var_42_int); // 0x91c Func
	return 4; // 0x91e Return
}


func_1295(var_0_bool, var_231_bool)
{
	var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_float = 0; var_236_float = 0; var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_float = 0; var_241_float = 0; // 0x50f PushV
	var_242_bool = 0; var_243_object = Obj(); // 0x510 PushV
	var_243_object = var_0_bool; // 0x511 MovT
	func_2098(var_242_bool, var_243_object); // 0x512 Call
	var_244_bool = var_242_bool == 0; // 0x514 Not
	if(var_244_bool == 0) goto Label_1304; // 0x515 JumpB
	var_231_bool = 0; // 0x516 MovB
	return 10; // 0x517 Return
	
Label_1304:
	var_245_bool = 0; // 0x518 PushV
	func_1347(var_241_float, var_245_bool); // 0x519 Call
	if(var_245_bool == 0) goto Label_1326; // 0x51b JumpB
	GetPFPosition(var_237_cvector); // 0x51c TObjFunc
	GetPFPosition(var_238_cvector); // 0x51e Func
	var_239_cvector = var_237_cvector - var_238_cvector; // 0x520 Sub2
	var_240_float = var_239_cvector | var_239_cvector; // 0x521 Or2
	GetAttackDistance(var_241_float); // 0x522 TObjFunc
	var_246_int = 50; // 0x524 PushI
	var_241_float = var_241_float + var_246_int; // 0x525 Add2
	var_247_float = var_241_float * var_241_float; // 0x526 Mult
	var_248_bool = var_240_float <= var_247_float; // 0x527 LE
	if(var_248_bool == 0) goto Label_1326; // 0x528 JumpB
	func_1328(var_241_float); // 0x52a Call
	var_231_bool = 1; // 0x52c MovB
	return 10; // 0x52d Return
	
Label_1326:
	var_231_bool = 0; // 0x52e MovB
	return 10; // 0x52f Return
}


func_2335(var_77_object)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x91f PushV
	GetEyesHeight(var_80_float); // 0x920 ObjFunc
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x922 MovV
	var_82_float = GetByIndex(var_81_cvector, 1); // 0x923 PushE
	var_82_float = var_80_float; // 0x924 Mov
	SetByIndex(var_81_cvector, 1) = var_82_float; // 0x925 PopE
	var_83_string = "head"; // 0x926 PushS
	LookAsync(var_77_object, var_83_string, var_81_cvector); // 0x927 Func
	return 4; // 0x929 Return
}


func_2346()
{
	var_20_bool = 0; // 0x92a PushV
	func_2721(var_20_bool); // 0x92b Call
	if(var_20_bool == 0) goto Label_2352; // 0x92d JumpB
	lshStopSpeech(); // 0x92e Func
	
Label_2352:
	return 0; // 0x930 Return
}


func_1328(var_0_bool)
{
	var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); // 0x530 PushV
	Face(var_0_bool); // 0x531 Func
	var_253_string = "all"; // 0x533 PushS
	var_254_string = "bjump"; // 0x534 PushS
	PlayAnimation(var_253_string, var_254_string); // 0x535 Func
	GetPFPosition(var_251_cvector); // 0x537 TObjFunc
	GetPFPosition(var_252_cvector); // 0x539 Func
	WaitForAnimEnd(); // 0x53b Func
	StopAsync(); // 0x53d Func
	var_255_cvector = CVector(0.0, 0.0, 0.0); // 0x53f PushVec
	SetSpeed(var_255_cvector); // 0x540 Func
	return 4; // 0x542 Return
}


func_2353(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0; // 0x931 PushV
	var_76_int = var_72_cvector | var_72_cvector; // 0x932 Or
	var_75_float = sqrt(var_76_int); // 0x933 Sqrt2
	var_77_float = 0.0; // 0x934 PushF
	var_78_bool = var_75_float < var_77_float; // 0x935 LT
	if(var_78_bool == 0) goto Label_2361; // 0x936 JumpB
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x937 MovV
	return 2; // 0x938 Return
	
Label_2361:
	var_71_cvector = var_72_cvector / var_72_cvector; // 0x939 Div2
	return 2; // 0x93a Return
}


func_2363(var_340_float, var_341_float, var_342_float)
{
	var_345_bool = var_341_float < var_342_float; // 0x93c LT
	if(var_345_bool == 0) goto Label_2368; // 0x93d JumpB
	var_340_float = var_341_float; // 0x93e Mov
	goto Label_2369; // 0x93f Jump
	
Label_2369:
	return 0; // 0x941 Return
	
Label_2368:
	var_340_float = var_342_float; // 0x940 Mov
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


func_2370(var_350_float, var_351_float, var_352_float, var_353_float)
{
	var_354_bool = var_351_float < var_352_float; // 0x943 LT
	if(var_354_bool == 0) goto Label_2375; // 0x944 JumpB
	var_350_float = var_352_float; // 0x945 Mov
	return 0; // 0x946 Return
	
Label_2375:
	var_355_bool = var_351_float > var_353_float; // 0x947 GT
	if(var_355_bool == 0) goto Label_2379; // 0x948 JumpB
	var_350_float = var_353_float; // 0x949 Mov
	return 0; // 0x94a Return
	
Label_2379:
	var_350_float = var_351_float; // 0x94b Mov
	return 0; // 0x94c Return
}


func_1347(var_0_bool, var_210_bool)
{
	var_211_bool = 0; var_212_bool = 0; // 0x543 PushV
	var_213_string = "IsAttacking"; // 0x544 PushS
	var_214_int = 1; // 0x545 PushI
	var_215_bool = IsFuncExist(var_0_bool, var_213_string, var_214_int); // 0x546 FuncExist
	if(var_215_bool == 0) goto Label_1356; // 0x547 JumpB
	IsAttacking(var_212_bool); // 0x548 TObjFunc
	var_210_bool = var_212_bool; // 0x54a Mov
	return 2; // 0x54b Return
	
Label_1356:
	var_210_bool = 0; // 0x54c MovB
	return 2; // 0x54d Return
}


func_2381(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x94e PushE
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x94f PushE
	var_75_float = var_73_float * var_74_float; // 0x950 Mult
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x951 PushE
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x952 PushE
	var_78_float = var_76_float * var_77_float; // 0x953 Mult
	var_70_float = var_75_float + var_78_float; // 0x954 Add2
	return 0; // 0x955 Return
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
	var_272_float = 0; var_273_int = 0; var_274_float = 0; var_275_int = 0; // 0x54e PushV
	var_276_bool = var_2_bool == 0; // 0x54f Not
	if(var_276_bool == 0) goto Label_1362; // 0x550 JumpB
	return 4; // 0x551 Return
	
Label_1362:
	var_277_object = var_4_object; // 0x552 PushT
	if(var_277_object == 0) goto Label_1370; // 0x553 JumpB
	var_278_int = -1; // 0x554 PushI
	var_4_object = var_4_object + var_278_int; // 0x555 Add2
	var_279_int = 0; // 0x556 PushI
	var_280_bool = var_4_object > var_279_int; // 0x557 GT
	if(var_280_bool == 0) goto Label_1370; // 0x558 JumpB
	return 4; // 0x559 Return
	
Label_1370:
	rand(var_274_float); // 0x55a Func
	var_281_float = 0; // 0x55c PushV
	func_1396(var_281_float); // 0x55d Call
	var_282_bool = var_274_float < var_281_float; // 0x55f LT
	if(var_282_bool == 0) goto Label_1389; // 0x560 JumpB
	irand(var_275_int, var_274_float); // 0x561 Func
	var_283_int = 1; // 0x563 PushI
	var_275_int = var_275_int + var_283_int; // 0x564 Add2
	var_284_string = "attack"; // 0x565 PushS
	var_285_int = var_284_string + var_275_int; // 0x566 Add
	Speak(var_285_int); // 0x567 Func
	var_286_int = 0; // 0x569 PushV
	func_1394(var_286_int); // 0x56a Call
	var_4_object = var_286_int; // 0x56b TMov
	
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


func_2390(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0); // 0x957 PushE
	var_82_float = GetByIndex(var_80_cvector, 0); // 0x958 PushE
	var_83_float = var_81_float * var_82_float; // 0x959 Mult
	var_84_float = GetByIndex(var_80_cvector, 2); // 0x95a PushE
	var_85_float = GetByIndex(var_80_cvector, 2); // 0x95b PushE
	var_86_float = var_84_float * var_85_float; // 0x95c Mult
	var_87_int = var_83_float + var_86_float; // 0x95d Add
	var_79_float = sqrt(var_87_int); // 0x95e Sqrt2
	return 0; // 0x95f Return
}


func_2400(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x961 PushV
	var_71_cvector = var_68_cvector; // 0x962 Mov
	var_72_cvector = var_69_cvector; // 0x963 Mov
	func_2381(var_70_float, var_71_cvector, var_72_cvector); // 0x964 Call
	var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x966 PushV
	var_80_cvector = var_68_cvector; // 0x967 Mov
	func_2390(var_79_float, var_80_cvector); // 0x968 Call
	var_88_float = 0; var_89_cvector = CVector(0,0,0); // 0x96a PushV
	var_89_cvector = var_69_cvector; // 0x96b Mov
	func_2390(var_88_float, var_89_cvector); // 0x96c Call
	var_90_float = var_79_float * var_88_float; // 0x96e Mult
	var_67_float = var_70_float / var_70_float; // 0x96f Div2
	return 0; // 0x970 Return
}


func_358(var_2_bool, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0x166 PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x167 PushV
	var_24_object = var_18_object; // 0x168 Mov
	func_2098(var_23_bool, var_24_object); // 0x169 Call
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
	func_2490(var_61_object); // 0x178 Call
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
	func_2499(var_68_object); // 0x186 Call
	var_2_bool = 1; // 0x188 TMovB
	var_133_int = 110; // 0x189 PushI
	var_134_float = 10.0; // 0x18a PushF
	SetTimer(var_133_int, var_134_float); // 0x18b Func
	
Label_397:
	return 4; // 0x18d Return
}


func_1390(var_357_int)
{
	var_357_int = 0; // 0x56e MovI
	return 0; // 0x56f Return
}


func_1392()
{
	return 0; // 0x571 Return
}


func_2417()
{
0x971: PushEmpty(int, int) // 0x971 PushV
0x972: @ GetVariable(Stack[-3], Stack[-1]) // 0x972 Func
0x973: Pop(0) // 0x973 Pop
0x974: Stack[-4] = Stack[-1] // 0x974 Mov
0x975: Return(); Pop(2) // 0x975 Return
}


func_1394(var_286_int)
{
	var_286_int = 1; // 0x572 MovI
	return 0; // 0x573 Return
}


func_1396(var_281_float)
{
	var_281_float = 0.5; // 0x574 MovF
	return 0; // 0x575 Return
}


func_2422(var_80_int)
{
	var_81_float = 0; var_82_float = 0; // 0x976 PushV
	GetGameTime(var_82_float); // 0x977 Func
	var_83_int = 1; // 0x979 PushI
	var_84_int = 0; // 0x97a PushV
	var_85_int = 24; // 0x97b PushI
	var_84_int = var_82_float / var_82_float; // 0x97c Div2
	var_80_int = var_83_int + var_84_int; // 0x97d Add2
	return 2; // 0x97e Return
}


func_1405(var_0_bool, var_1_bool, var_134_bool, var_135_object, var_136_float, var_137_float, var_138_bool, var_139_bool)
{
	var_142_bool = 0; var_143_bool = 0; var_144_object = Obj(); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_object = Obj(); var_150_bool = 0; var_151_bool = 0; var_152_object = Obj(); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_float = 0; var_157_object = Obj(); // 0x57d PushV
	var_0_bool = 0; // 0x57e TMovB
	var_1_bool = var_135_object; // 0x57f TMov
	var_151_bool = var_139_bool; // 0x580 Mov
	
Label_1409:
	var_158_bool = 0; var_159_object = Obj(); // 0x581 PushV
	var_159_object = var_135_object; // 0x582 Mov
	func_1545(var_158_bool, var_159_object); // 0x583 Call
	var_162_bool = var_158_bool == 0; // 0x585 Not
	if(var_162_bool == 0) goto Label_1417; // 0x586 JumpB
	var_134_bool = 0; // 0x587 MovB
	return 16; // 0x588 Return
	
Label_1417:
	GetPosition(var_153_cvector); // 0x589 ObjFunc
	GetPosition(var_154_cvector); // 0x58b Func
	var_155_cvector = var_153_cvector - var_154_cvector; // 0x58d Sub2
	var_156_float = var_155_cvector | var_155_cvector; // 0x58e Or2
	var_163_bool = 0; // 0x58f PushV
	var_163_bool = 0; // 0x590 MovB
	var_164_int = 0; // 0x591 PushI
	var_165_bool = var_137_float > var_164_int; // 0x592 GT
	if(var_165_bool == 0) goto Label_1432; // 0x593 JumpB
	var_166_float = var_137_float * var_137_float; // 0x594 Mult
	var_167_bool = var_156_float > var_166_float; // 0x595 GT
	if(var_167_bool == 0) goto Label_1432; // 0x596 JumpB
	var_163_bool = 1; // 0x597 MovB
	
Label_1432:
	if(var_163_bool == 0) goto Label_1437; // 0x598 JumpB
	Stop(); // 0x599 Func
	var_134_bool = 0; // 0x59b MovB
	return 16; // 0x59c Return
	
Label_1437:
	var_168_float = var_136_float * var_136_float; // 0x59d Mult
	var_169_bool = var_156_float > var_168_float; // 0x59e GT
	if(var_169_bool == 0) goto Label_1499; // 0x59f JumpB
	GetPFPosition(var_153_cvector); // 0x5a0 ObjFunc
	FindPathTo(var_157_object, var_153_cvector); // 0x5a2 Func
	var_170_bool = var_157_object != 0; // 0x5a4 NullNeq
	if(var_170_bool == 0) goto Label_1448; // 0x5a5 JumpB
	var_152_object = var_157_object; // 0x5a6 Mov
	var_157_object = 0; // 0x5a7 SetNull
	
Label_1448:
	var_171_bool = var_152_object != 0; // 0x5a8 NullNeq
	if(var_171_bool == 0) goto Label_1481; // 0x5a9 JumpB
	var_172_bool = var_151_bool; // 0x5aa Push
	if(var_172_bool == 0) goto Label_1458; // 0x5ab JumpB
	var_151_bool = 0; // 0x5ac MovB
	RotatePath(var_152_object, var_150_bool); // 0x5ad Func
	var_173_bool = var_150_bool == 0; // 0x5af Not
	if(var_173_bool == 0) goto Label_1458; // 0x5b0 JumpB
	goto Label_1505; // 0x5b1 Jump
	
Label_1505:
	var_134_bool = !var_0_bool; // 0x5e1 Not2
	return 16; // 0x5e2 Return
	
Label_1458:
	var_174_int = 0; // 0x5b2 PushI
	var_175_float = 0.3; // 0x5b3 PushF
	SetTimer(var_174_int, var_175_float); // 0x5b4 Func
	var_176_string = ""; // 0x5b6 PushV
	func_1552(var_176_string); // 0x5b7 Call
	var_177_string = ""; // 0x5b9 PushV
	func_1554(var_177_string); // 0x5ba Call
	FollowPath(var_152_object, var_138_bool, var_150_bool, var_176_string, var_177_string); // 0x5bc Func
	var_178_bool = var_150_bool == 0; // 0x5be Not
	if(var_178_bool == 0) goto Label_1479; // 0x5bf JumpB
	var_179_bool = var_0_bool; // 0x5c0 PushT
	if(var_179_bool == 0) goto Label_1477; // 0x5c1 JumpB
	var_152_object = 0; // 0x5c2 SetNull
	goto Label_1505; // 0x5c3 Jump
	
Label_1477:
	goto Label_1504; // 0x5c5 Jump
	
Label_1504:
	goto Label_1409; // 0x5e0 Jump
	
Label_1479:
	var_152_object = 0; // 0x5c7 SetNull
	goto Label_1497; // 0x5c8 Jump
	
Label_1497:
	var_157_object = 0; // 0x5d9 SetNull
	goto Label_1503; // 0x5da Jump
	
Label_1503:
	var_152_object = 0; // 0x5df SetNull
	
Label_1481:
	var_180_int = 0; // 0x5c9 PushI
	KillTimer(var_180_int); // 0x5ca Func
	var_181_float = 0.5; // 0x5cc PushF
	Sleep(var_181_float, var_150_bool); // 0x5cd Func
	var_182_bool = var_150_bool == 0; // 0x5cf Not
	if(var_182_bool == 0) goto Label_1493; // 0x5d0 JumpB
	var_183_bool = var_0_bool; // 0x5d1 PushT
	if(var_183_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_152_object = 0; // 0x5d3 SetNull
	goto Label_1505; // 0x5d4 Jump
	
Label_1493:
	var_184_int = 0; // 0x5d5 PushI
	var_185_float = 0.3; // 0x5d6 PushF
	SetTimer(var_184_int, var_185_float); // 0x5d7 Func
	
Label_1499:
	var_186_int = 0; // 0x5db PushI
	KillTimer(var_186_int); // 0x5dc Func
	goto Label_1505; // 0x5de Jump
}


func_893(var_77_object)
{
	var_83_object = Obj(); var_84_bool = 0; var_85_float = 0; // 0x37e PushV
	var_83_object = var_77_object; // 0x37f Mov
	var_84_bool = 1; // 0x380 MovB
	var_85_float = 180.0; // 0x381 MovF
	func_907(var_78_object, var_79_int, var_80_int, var_81_bool, var_82_int, var_77_object, var_83_object, var_84_bool, var_85_float); // 0x382 Call
	return 0; // 0x384 Return
}


func_2431(var_18_object)
{
	var_19_object = Obj(); // 0x980 PushV
	var_19_object = var_18_object; // 0x981 Mov
	TaskCall(1); // 0x982 TaskCall
	func_22(var_19_object); // 0x983 Call
	TaskReturn(); // 0x984 TaskReturn
	return 0; // 0x986 Return
}


func_901(var_301_float)
{
	var_301_float = 0.05; // 0x386 MovF
	return 0; // 0x387 Return
}


func_904(var_308_int)
{
	var_308_int = 0; // 0x389 MovI
	return 0; // 0x38a Return
}


func_907(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_83_object, var_84_bool, var_85_float, var_140_bool)
{
	var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_float = 0; var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_float = 0; // 0x38b PushV
	var_1_bool = 0; // 0x38c TMovI
	
Label_909:
	var_106_string = "all"; // 0x38d PushS
	var_107_string = "attack_begin"; // 0x38e PushS
	var_108_int = 1; // 0x38f PushI
	var_109_int = var_1_bool + var_108_int; // 0x390 Add
	var_110_int = var_107_string + var_109_int; // 0x391 Add
	HasAnimation(var_96_bool, var_106_string, var_110_int); // 0x392 Func
	var_111_bool = var_96_bool == 0; // 0x394 Not
	if(var_111_bool == 0) goto Label_919; // 0x395 JumpB
	goto Label_922; // 0x396 Jump
	
Label_922:
	var_2_bool = 0; // 0x39a TMovI
	
Label_923:
	var_112_string = "attack"; // 0x39b PushS
	var_113_int = 1; // 0x39c PushI
	var_114_int = var_2_bool + var_113_int; // 0x39d Add
	var_115_int = var_112_string + var_114_int; // 0x39e Add
	IsExisting3DSound(var_97_bool, var_115_int); // 0x39f Func
	var_116_bool = var_97_bool == 0; // 0x3a1 Not
	if(var_116_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_935; // 0x3a3 Jump
	
Label_935:
	var_4_object = 0; // 0x3a7 TMovI
	var_117_string = "@GetAttackDistance"; // 0x3a8 PushS
	var_118_int = 1; // 0x3a9 PushI
	var_119_bool = IsFuncExist(var_83_object, var_117_string, var_118_int); // 0x3aa FuncExist
	if(var_119_bool == 0) goto Label_945; // 0x3ab JumpB
	GetAttackDistance(var_98_float); // 0x3ac ObjFunc
	var_120_int = 50; // 0x3ae PushI
	var_98_float = var_98_float + var_120_int; // 0x3af Add2
	goto Label_946; // 0x3b0 Jump
	
Label_946:
	var_121_int = 150; // 0x3b2 PushI
	var_122_bool = var_98_float >= var_121_int; // 0x3b3 GE
	if(var_122_bool == 0) goto Label_950; // 0x3b4 JumpB
	var_98_float = 150; // 0x3b5 MovI
	
Label_950:
	var_3_bool = 0; // 0x3b6 TMovB
	var_0_bool = var_83_object; // 0x3b7 TMov
	IsPlayerActor(var_0_bool, var_101_bool); // 0x3b8 Func
	var_123_bool = var_84_bool; // 0x3ba Push
	if(var_123_bool == 0) goto Label_958; // 0x3bb JumpB
	var_102_bool = 0; // 0x3bc MovB
	goto Label_959; // 0x3bd Jump
	
Label_959:
	var_124_bool = 0; // 0x3bf PushV
	var_124_bool = 0; // 0x3c0 MovB
	var_125_bool = 0; var_126_object = Obj(); // 0x3c1 PushV
	var_126_object = var_0_bool; // 0x3c2 MovT
	func_2098(var_125_bool, var_126_object); // 0x3c3 Call
	if(var_125_bool == 0) goto Label_969; // 0x3c5 JumpB
	var_127_bool = var_3_bool == 0; // 0x3c6 Not
	if(var_127_bool == 0) goto Label_969; // 0x3c7 JumpB
	var_124_bool = 1; // 0x3c8 MovB
	
Label_969:
	if(var_124_bool == 0) goto Label_1095; // 0x3c9 JumpB
	GetPFPosition(var_99_cvector); // 0x3ca TObjFunc
	GetPFPosition(var_100_cvector); // 0x3cc Func
	var_103_cvector = var_99_cvector - var_100_cvector; // 0x3ce Sub2
	var_104_float = var_103_cvector | var_103_cvector; // 0x3cf Or2
	var_128_float = 400.0; // 0x3d0 PushF
	var_129_int = var_128_float + var_98_float; // 0x3d1 Add
	var_130_float = 400.0; // 0x3d2 PushF
	var_131_int = var_130_float + var_98_float; // 0x3d3 Add
	var_132_float = var_129_int * var_131_int; // 0x3d4 Mult
	var_133_bool = var_104_float >= var_132_float; // 0x3d5 GE
	if(var_133_bool == 0) goto Label_998; // 0x3d6 JumpB
	var_134_bool = 0; var_135_object = Obj(); var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_bool = 0; // 0x3d7 PushV
	var_135_object = var_0_bool; // 0x3d8 MovT
	var_136_float = var_98_float; // 0x3d9 Mov
	var_137_float = 3000.0; // 0x3da MovF
	var_138_bool = 1; // 0x3db MovB
	var_139_bool = 0; // 0x3dc MovB
	TaskCall(6); // 0x3dd TaskCall
	func_1405(var_140_bool, var_141_object, var_134_bool, var_135_object, var_136_float, var_137_float, var_138_bool, var_139_bool); // 0x3de Call
	TaskReturn(); // 0x3df TaskReturn
	var_187_bool = var_140_bool == 0; // 0x3e1 Not
	if(var_187_bool == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_1095; // 0x3e3 Jump
	
Label_1095:
	WaitForAnimEnd(); // 0x447 Func
	var_188_bool = var_3_bool; // 0x449 PushT
	if(var_188_bool == 0) goto Label_1100; // 0x44a JumpB
	return 20; // 0x44b Return
	
Label_1100:
	var_189_string = "all"; // 0x44c PushS
	var_190_string = "attack_off"; // 0x44d PushS
	PlayAnimation(var_189_string, var_190_string); // 0x44e Func
	WaitForAnimEnd(); // 0x450 Func
	var_191_bool = var_101_bool; // 0x452 Push
	if(var_191_bool == 0) goto Label_1111; // 0x453 JumpB
	var_192_float = 2.0; // 0x454 PushF
	Sleep(var_192_float); // 0x455 Func
	
Label_1111:
	return 20; // 0x457 Return
	
Label_996:
	var_102_bool = 0; // 0x3e4 MovB
	goto Label_1094; // 0x3e5 Jump
	
Label_1094:
	goto Label_959; // 0x446 Jump
	
Label_998:
	var_193_float = var_85_float * var_85_float; // 0x3e6 Mult
	var_194_bool = var_104_float >= var_193_float; // 0x3e7 GE
	if(var_194_bool == 0) goto Label_1086; // 0x3e8 JumpB
	var_195_bool = var_102_bool == 0; // 0x3e9 Not
	if(var_195_bool == 0) goto Label_1016; // 0x3ea JumpB
	var_196_object = Obj(); // 0x3eb PushV
	var_196_object = var_0_bool; // 0x3ec MovT
	func_2189(); // 0x3ed Call
	var_205_string = "all"; // 0x3ef PushS
	var_206_string = "attack_on"; // 0x3f0 PushS
	PlayAnimation(var_205_string, var_206_string); // 0x3f1 Func
	WaitForAnimEnd(); // 0x3f3 Func
	StopAsync(); // 0x3f5 Func
	var_102_bool = 1; // 0x3f7 MovB
	
Label_1016:
	rand(var_105_float); // 0x3f8 Func
	var_207_bool = 0; // 0x3fa PushV
	var_207_bool = 1; // 0x3fb MovB
	var_208_float = 0.6; // 0x3fc PushF
	var_209_bool = var_105_float < var_208_float; // 0x3fd LT
	if(var_209_bool == 0) goto Label_1028; // 0x3fe JumpB
	var_210_bool = 0; // 0x3ff PushV
	func_1347(var_207_bool, var_210_bool); // 0x400 Call
	if(var_210_bool == 0) goto Label_1028; // 0x402 JumpB
	var_207_bool = 0; // 0x403 MovB
	
Label_1028:
	if(var_207_bool == 0) goto Label_1042; // 0x404 JumpB
	Face(var_0_bool); // 0x405 Func
	var_216_string = "all"; // 0x407 PushS
	var_217_string = "attack_stay"; // 0x408 PushS
	PlayAnimation(var_216_string, var_217_string); // 0x409 Func
	var_218_bool = 0; var_219_float = 0; // 0x40b PushV
	var_219_float = var_85_float; // 0x40c Mov
	func_1255(var_105_float, var_218_bool, var_219_float); // 0x40d Call
	StopAsync(); // 0x40f Func
	goto Label_1085; // 0x411 Jump
	
Label_1085:
	goto Label_1094; // 0x43d Jump
	
Label_1042:
	Face(var_0_bool); // 0x412 Func
	var_385_string = "all"; // 0x414 PushS
	var_386_string = "fjump"; // 0x415 PushS
	PlayAnimation(var_385_string, var_386_string); // 0x416 Func
	WaitForAnimEnd(); // 0x418 Func
	var_387_cvector = CVector(0.0, 0.0, 0.0); // 0x41a PushVec
	SetSpeed(var_387_cvector); // 0x41b Func
	Stop(); // 0x41d Func
	StopAsync(); // 0x41f Func
	var_388_bool = 0; // 0x421 PushV
	func_1347(var_105_float, var_388_bool); // 0x422 Call
	var_389_bool = var_388_bool == 0; // 0x424 Not
	if(var_389_bool == 0) goto Label_1085; // 0x425 JumpB
	var_390_bool = 0; var_391_object = Obj(); // 0x426 PushV
	var_391_object = var_0_bool; // 0x427 MovT
	func_2098(var_390_bool, var_391_object); // 0x428 Call
	var_392_bool = var_390_bool == 0; // 0x42a Not
	if(var_392_bool == 0) goto Label_1069; // 0x42b JumpB
	goto Label_1095; // 0x42c Jump
	
Label_1069:
	GetPFPosition(var_99_cvector); // 0x42d TObjFunc
	GetPFPosition(var_100_cvector); // 0x42f Func
	var_103_cvector = var_99_cvector - var_100_cvector; // 0x431 Sub2
	var_104_float = var_103_cvector | var_103_cvector; // 0x432 Or2
	var_393_float = var_85_float * var_85_float; // 0x433 Mult
	var_394_bool = var_104_float < var_393_float; // 0x434 LT
	if(var_394_bool == 0) goto Label_1085; // 0x435 JumpB
	var_395_bool = 0; var_396_float = 0; // 0x436 PushV
	var_396_float = var_85_float; // 0x437 Mov
	func_1151(var_105_float, var_395_bool, var_396_float); // 0x438 Call
	var_397_bool = var_395_bool == 0; // 0x43a Not
	if(var_397_bool == 0) goto Label_1085; // 0x43b JumpB
	goto Label_1095; // 0x43c Jump
	
Label_1086:
	var_398_bool = 0; var_399_float = 0; // 0x43e PushV
	var_399_float = var_85_float; // 0x43f Mov
	func_1151(var_105_float, var_398_bool, var_399_float); // 0x440 Call
	var_400_bool = var_398_bool == 0; // 0x442 Not
	if(var_400_bool == 0) goto Label_1093; // 0x443 JumpB
	goto Label_1095; // 0x444 Jump
	
Label_1093:
	var_102_bool = 1; // 0x445 MovB
	
Label_958:
	var_102_bool = 1; // 0x3be MovB
	
Label_945:
	var_98_float = var_85_float; // 0x3b1 Mov
	
Label_932:
	var_401_int = 1; // 0x3a4 PushI
	var_2_bool = var_2_bool + var_401_int; // 0x3a5 Add2
	goto Label_923; // 0x3a6 Jump
	
Label_919:
	var_402_int = 1; // 0x397 PushI
	var_1_bool = var_1_bool + var_402_int; // 0x398 Add2
	goto Label_909; // 0x399 Jump
}


func_398(var_0_bool, var_1_bool)
{
	var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; // 0x18e PushV
	var_0_bool = 0; // 0x18f TMovB
	var_1_bool = 0; // 0x190 TMovB
	var_58_float = 0.5; // 0x191 PushF
	rand(var_51_float, var_58_float); // 0x192 Func
	Sleep(var_51_float); // 0x194 Func
	
Label_406:
	var_59_bool = var_0_bool == 0; // 0x196 Not
	if(var_59_bool == 0) goto Label_454; // 0x197 JumpB
	var_60_bool = var_1_bool == 0; // 0x198 Not
	if(var_60_bool == 0) goto Label_426; // 0x199 JumpB
	
Label_410:
	GetPosition(var_53_cvector); // 0x19a Func
	GetCameraFarDistance(var_54_float); // 0x19c Func
	var_61_float = 2.5; // 0x19e PushF
	var_54_float = var_54_float * var_61_float; // 0x19f Mult2
	GetRandomPFPointInCircle(var_52_cvector, var_53_cvector, var_54_float, var_55_bool); // 0x1a0 Func
	var_62_bool = var_55_bool; // 0x1a2 Push
	if(var_62_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_425; // 0x1a4 Jump
	
Label_425:
	goto Label_427; // 0x1a9 Jump
	
Label_427:
	FindShiftedPathTo(var_56_object, var_52_cvector); // 0x1ab Func
	var_63_bool = var_56_object != 0; // 0x1ad NullNeq
	if(var_63_bool == 0) goto Label_449; // 0x1ae JumpB
	RotatePath(var_56_object, var_57_bool); // 0x1af Func
	var_64_bool = var_57_bool; // 0x1b1 Push
	if(var_64_bool == 0) goto Label_448; // 0x1b2 JumpB
	var_65_bool = 0; // 0x1b3 PushV
	func_476(var_65_bool); // 0x1b4 Call
	FollowPath(var_56_object, var_65_bool, var_57_bool); // 0x1b6 Func
	var_56_object = 0; // 0x1b8 SetNull
	var_66_bool = var_57_bool; // 0x1b9 Push
	if(var_66_bool == 0) goto Label_448; // 0x1ba JumpB
	TaskCall(3); // 0x1bc TaskCall
	func_593(); // 0x1bd Call
	TaskReturn(); // 0x1be TaskReturn
	
Label_448:
	goto Label_452; // 0x1c0 Jump
	
Label_452:
	var_56_object = 0; // 0x1c4 SetNull
	goto Label_406; // 0x1c5 Jump
	
Label_449:
	var_116_int = 1; // 0x1c1 PushI
	Sleep(var_116_int); // 0x1c2 Func
	
Label_421:
	var_117_int = 1; // 0x1a5 PushI
	Sleep(var_117_int); // 0x1a6 Func
	goto Label_410; // 0x1a8 Jump
	
Label_426:
	var_1_bool = 0; // 0x1aa TMovB
	
Label_454:
	return 14; // 0x1c6 Return
}


func_2466(var_89_string, var_90_int)
{
	var_91_string = ""; var_92_string = ""; // 0x9a2 PushV
	var_92_string = "idle"; // 0x9a3 MovS
	var_93_int = var_90_int; // 0x9a4 Push
	if(var_93_int == 0) goto Label_2471; // 0x9a5 JumpB
	var_92_string = var_92_string + var_90_int; // 0x9a6 Add2
	
Label_2471:
	var_89_string = var_92_string; // 0x9a7 Mov
	return 2; // 0x9a8 Return
}


func_1958(var_332_string, var_333_int)
{
	var_334_int = 1; // 0x7a7 PushI
	var_335_bool = var_333_int == var_334_int; // 0x7a8 Eq
	if(var_335_bool == 0) goto Label_1964; // 0x7a9 JumpB
	var_332_string = "fire"; // 0x7aa MovS
	return 0; // 0x7ab Return
	
Label_1964:
	var_332_string = "phys"; // 0x7ac MovS
	return 0; // 0x7ad Return
}


func_2473(var_83_int)
{
	var_84_int = 0; var_85_bool = 0; var_86_int = 0; var_87_bool = 0; // 0x9a9 PushV
	var_86_int = 0; // 0x9aa MovI
	
Label_2475:
	var_88_string = "all"; // 0x9ab PushS
	var_89_string = ""; var_90_int = 0; // 0x9ac PushV
	var_90_int = var_86_int; // 0x9ad Mov
	func_2466(var_89_string, var_90_int); // 0x9ae Call
	HasAnimation(var_87_bool, var_88_string, var_89_string); // 0x9b0 Func
	var_94_bool = var_87_bool == 0; // 0x9b2 Not
	if(var_94_bool == 0) goto Label_2485; // 0x9b3 JumpB
	goto Label_2488; // 0x9b4 Jump
	
Label_2488:
	var_83_int = var_86_int; // 0x9b8 Mov
	return 4; // 0x9b9 Return
	
Label_2485:
	var_95_int = 1; // 0x9b5 PushI
	var_86_int = var_86_int + var_95_int; // 0x9b6 Add2
	goto Label_2475; // 0x9b7 Jump
}


func_1966(var_61_cvector)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x7ae PushV
	GetPosition(var_65_cvector); // 0x7af Func
	GetPosition(var_66_cvector); // 0x7b1 ObjFunc
	var_61_cvector = var_66_cvector - var_65_cvector; // 0x7b3 Sub2
	return 4; // 0x7b4 Return
}


func_1973(var_45_float)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x7b5 PushV
	GetPosition(var_50_cvector); // 0x7b6 Func
	GetPosition(var_51_cvector); // 0x7b8 ObjFunc
	var_52_cvector = var_51_cvector - var_50_cvector; // 0x7ba Sub2
	var_45_float = var_52_cvector | var_52_cvector; // 0x7bb Or2
	return 6; // 0x7bc Return
}


func_2490(var_60_int)
{
	var_62_bool = 0; // 0x9bb PushV
	func_2768(var_62_bool); // 0x9bc Call
	if(var_62_bool == 0) goto Label_2497; // 0x9be JumpB
	var_60_int = 2; // 0x9bf MovI
	goto Label_2498; // 0x9c0 Jump
	
Label_2498:
	return 0; // 0x9c2 Return
	
Label_2497:
	var_60_int = 0; // 0x9c1 MovI
}


func_1981(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0; // 0x7bd PushV
	var_49_string = "HasProperty"; // 0x7be PushS
	var_50_int = 2; // 0x7bf PushI
	var_51_bool = IsFuncExist(var_45_object, var_49_string, var_50_int); // 0x7c0 FuncExist
	var_52_bool = var_51_bool == 0; // 0x7c1 Not
	if(var_52_bool == 0) goto Label_1989; // 0x7c2 JumpB
	var_44_bool = 0; // 0x7c3 MovB
	return 2; // 0x7c4 Return
	
Label_1989:
	HasProperty(var_46_string, var_48_bool); // 0x7c5 ObjFunc
	var_44_bool = var_48_bool; // 0x7c7 Mov
	return 2; // 0x7c8 Return
}


func_2499(var_68_object)
{
	var_69_object = Obj(); // 0x9c4 PushV
	var_69_object = var_68_object; // 0x9c5 Mov
	TaskCall(4); // 0x9c6 TaskCall
	func_667(var_70_object, var_69_object); // 0x9c7 Call
	TaskReturn(); // 0x9c8 TaskReturn
	return 0; // 0x9ca Return
}


func_1993(var_304_float, var_305_object, var_306_float, var_307_int)
{
	var_311_int = 0; var_312_string = ""; var_313_int = 0; var_314_float = 0; var_315_float = 0; var_316_float = 0; var_317_int = 0; var_318_string = ""; var_319_int = 0; var_320_float = 0; var_321_float = 0; var_322_float = 0; // 0x7c9 PushV
	var_323_bool = 0; var_324_object = Obj(); var_325_string = ""; // 0x7ca PushV
	var_324_object = var_305_object; // 0x7cb Mov
	var_325_string = "health"; // 0x7cc MovS
	func_1981(var_323_bool, var_324_object, var_325_string); // 0x7cd Call
	var_326_bool = var_323_bool == 0; // 0x7cf Not
	if(var_326_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_304_float = 0.0; // 0x7d1 MovF
	return 12; // 0x7d2 Return
	
Label_2003:
	var_327_bool = 0; var_328_object = Obj(); var_329_string = ""; // 0x7d3 PushV
	var_328_object = var_305_object; // 0x7d4 Mov
	var_329_string = "armor"; // 0x7d5 MovS
	func_1981(var_327_bool, var_328_object, var_329_string); // 0x7d6 Call
	var_330_bool = var_327_bool == 0; // 0x7d8 Not
	if(var_330_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_317_int = 0; // 0x7da MovI
	goto Label_2015; // 0x7db Jump
	
Label_2015:
	var_331_string = "armor_"; // 0x7df PushS
	var_332_string = ""; var_333_int = 0; // 0x7e0 PushV
	var_333_int = var_307_int; // 0x7e1 Mov
	func_1958(var_332_string, var_333_int); // 0x7e2 Call
	var_318_string = var_331_string + var_332_string; // 0x7e4 Add2
	var_336_bool = 0; var_337_object = Obj(); var_338_string = ""; // 0x7e5 PushV
	var_337_object = var_305_object; // 0x7e6 Mov
	var_338_string = var_318_string; // 0x7e7 Mov
	func_1981(var_336_bool, var_337_object, var_338_string); // 0x7e8 Call
	var_339_bool = var_336_bool == 0; // 0x7ea Not
	if(var_339_bool == 0) goto Label_2030; // 0x7eb JumpB
	var_319_int = 0; // 0x7ec MovI
	goto Label_2032; // 0x7ed Jump
	
Label_2032:
	var_340_float = 0; var_341_float = 0; var_342_float = 0; // 0x7f0 PushV
	var_343_int = var_317_int + var_319_int; // 0x7f1 Add
	var_344_float = 100.0; // 0x7f2 PushF
	var_341_float = var_343_int / var_343_int; // 0x7f3 Div2
	var_342_float = 1; // 0x7f4 MovI
	func_2363(var_340_float, var_341_float, var_342_float); // 0x7f5 Call
	var_320_float = var_340_float; // 0x7f6 Mov
	var_346_string = "health"; // 0x7f8 PushS
	GetProperty(var_346_string, var_321_float); // 0x7f9 ObjFunc
	var_347_int = 1; // 0x7fb PushI
	var_348_int = var_347_int - var_320_float; // 0x7fc Sub
	var_322_float = var_306_float * var_348_int; // 0x7fd Mult2
	var_349_string = "health"; // 0x7fe PushS
	var_350_float = 0; var_351_float = 0; var_352_float = 0; var_353_float = 0; // 0x7ff PushV
	var_351_float = var_321_float - var_322_float; // 0x800 Sub2
	var_352_float = 0; // 0x801 MovI
	var_353_float = 1; // 0x802 MovI
	func_2370(var_350_float, var_351_float, var_352_float, var_353_float); // 0x803 Call
	SetProperty(var_349_string, var_350_float); // 0x805 ObjFunc
	var_304_float = var_322_float; // 0x807 Mov
	return 12; // 0x808 Return
	
Label_2030:
	GetProperty(var_318_string, var_319_int); // 0x7ee ObjFunc
	
Label_2012:
	var_356_string = "armor"; // 0x7dc PushS
	GetProperty(var_356_string, var_317_int); // 0x7dd ObjFunc
}


func_2507(var_58_int, var_59_object)
{
	var_60_bool = 0; var_61_object = Obj(); // 0x9cc PushV
	var_61_object = var_59_object; // 0x9cd Mov
	func_2098(var_60_bool, var_61_object); // 0x9ce Call
	if(var_60_bool == 0) goto Label_2515; // 0x9d0 JumpB
	var_58_int = 2; // 0x9d1 MovI
	goto Label_2516; // 0x9d2 Jump
	
Label_2516:
	return 0; // 0x9d4 Return
	
Label_2515:
	var_58_int = 0; // 0x9d3 MovI
}


func_462(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1ce TMovB
	var_1_bool = 0; // 0x1cf TMovB
	Stop(); // 0x1d0 Func
	StopGroup0(); // 0x1d2 Func
	return 0; // 0x1d4 Return
}


func_2517(var_76_object)
{
	var_77_object = Obj(); // 0x9d6 PushV
	var_77_object = var_76_object; // 0x9d7 Mov
	TaskCall(5); // 0x9d8 TaskCall
	func_893(var_77_object); // 0x9d9 Call
	TaskReturn(); // 0x9da TaskReturn
	return 0; // 0x9dc Return
}


func_469(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1d5 TMovB
	var_1_bool = 1; // 0x1d6 TMovB
	Stop(); // 0x1d7 Func
	StopGroup0(); // 0x1d9 Func
	return 0; // 0x1db Return
}


func_476(var_65_bool)
{
	var_65_bool = 0; // 0x1dc MovB
	return 0; // 0x1dd Return
}


func_2525(var_56_int, var_57_object)
{
	var_58_int = 0; var_59_object = Obj(); // 0x9de PushV
	var_59_object = var_57_object; // 0x9df Mov
	func_2507(var_58_int, var_59_object); // 0x9e0 Call
	var_56_int = var_58_int; // 0x9e1 Mov
	return 0; // 0x9e3 Return
}


func_2532(var_94_object)
{
	var_95_object = Obj(); // 0x9e5 PushV
	var_95_object = var_94_object; // 0x9e6 Mov
	func_2517(var_95_object); // 0x9e7 Call
	return 0; // 0x9e9 Return
}


func_2538(var_20_int)
{
	var_20_int = 0; // 0x9eb MovI
	return 0; // 0x9ec Return
}


func_2541()
{
	return 0; // 0x9ee Return
}


func_2543(var_21_int, var_22_string, var_23_object)
{
	var_24_string = "killme"; // 0x9f0 PushS
	var_25_bool = var_22_string == var_24_string; // 0x9f1 Eq
	if(var_25_bool == 0) goto Label_2553; // 0x9f2 JumpB
	var_26_int = 0; var_27_object = Obj(); // 0x9f3 PushV
	var_27_object = var_23_object; // 0x9f4 Mov
	func_2565(var_26_int, var_27_object); // 0x9f5 Call
	var_21_int = var_26_int; // 0x9f6 Mov
	return 0; // 0x9f8 Return
	
Label_2553:
	var_21_int = 0; // 0x9f9 MovI
	return 0; // 0x9fa Return
}


func_1529(var_0_bool)
{
	var_0_bool = 1; // 0x5f9 TMovB
	var_18_int = 0; // 0x5fa PushI
	KillTimer(var_18_int); // 0x5fb Func
	Stop(); // 0x5fd Func
	return 0; // 0x5ff Return
}


func_2555(var_71_string, var_72_object)
{
	var_73_string = "killme"; // 0x9fc PushS
	var_74_bool = var_71_string == var_73_string; // 0x9fd Eq
	if(var_74_bool == 0) goto Label_2564; // 0x9fe JumpB
	var_75_object = Obj(); // 0x9ff PushV
	var_75_object = var_72_object; // 0xa00 Mov
	func_2583(var_75_object); // 0xa01 Call
	return 0; // 0xa03 Return
	
Label_2564:
	return 0; // 0xa04 Return
}


