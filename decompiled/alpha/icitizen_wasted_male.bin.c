task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0xf PushV
	var_13_int = 0; var_14_object = Obj(); // 0x10 PushV
	var_14_object = var_10_object; // 0x11 Mov
	func_1684(var_14_object); // 0x12 Call
	var_12_int = var_13_int; // 0x13 Mov
	var_15_int = 0; // 0x15 PushI
	var_16_bool = var_12_int > var_15_int; // 0x16 GT
	if(var_16_bool == 0) goto Label_28; // 0x17 JumpB
	var_17_object = Obj(); // 0x18 PushV
	var_17_object = var_10_object; // 0x19 Mov
	func_1687(var_17_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1693(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0xbf PushV
	var_13_int = 0; var_14_object = Obj(); // 0xc0 PushV
	var_14_object = var_10_object; // 0xc1 Mov
	func_1684(var_14_object); // 0xc2 Call
	var_12_int = var_13_int; // 0xc3 Mov
	var_15_int = 0; // 0xc5 PushI
	var_16_bool = var_12_int > var_15_int; // 0xc6 GT
	if(var_16_bool == 0) goto Label_210; // 0xc7 JumpB
	var_17_int = 1; // 0xc8 PushI
	var_18_bool = var_12_int > var_17_int; // 0xc9 GT
	if(var_18_bool == 0) goto Label_206; // 0xca JumpB
	func_336(var_12_int); // 0xcc Call
	
Label_206:
	var_21_object = Obj(); // 0xce PushV
	var_21_object = var_10_object; // 0xcf Mov
	func_1687(var_21_object); // 0xd0 Call
	
Label_210:
	return 2; // 0xd2 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0xd3 PushV
	var_13_int = 0; var_14_object = Obj(); // 0xd4 PushV
	var_14_object = var_10_object; // 0xd5 Mov
	func_1653(var_13_int, var_14_object); // 0xd6 Call
	var_12_int = var_13_int; // 0xd7 Mov
	var_49_int = 0; // 0xd9 PushI
	var_50_bool = var_12_int > var_49_int; // 0xda GT
	if(var_50_bool == 0) goto Label_230; // 0xdb JumpB
	var_51_int = 1; // 0xdc PushI
	var_52_bool = var_12_int > var_51_int; // 0xdd GT
	if(var_52_bool == 0) goto Label_226; // 0xde JumpB
	func_336(var_12_int); // 0xe0 Call
	
Label_226:
	var_55_object = Obj(); // 0xe2 PushV
	var_55_object = var_10_object; // 0xe3 Mov
	func_1663(var_55_object); // 0xe4 Call
	
Label_230:
	return 2; // 0xe6 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xe7 PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0xe8 PushV
	var_15_object = var_10_bool; // 0xe9 Mov
	var_16_object = var_11_object; // 0xea Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0xeb Call
	if(var_14_bool == 0) goto Label_256; // 0xed JumpB
	var_65_int = 0; var_66_object = Obj(); // 0xee PushV
	var_66_object = var_10_bool; // 0xef Mov
	func_1671(var_65_int, var_66_object); // 0xf0 Call
	var_13_int = var_65_int; // 0xf1 Mov
	var_97_int = 0; // 0xf3 PushI
	var_98_bool = var_13_int > var_97_int; // 0xf4 GT
	if(var_98_bool == 0) goto Label_256; // 0xf5 JumpB
	var_99_int = 1; // 0xf6 PushI
	var_100_bool = var_13_int > var_99_int; // 0xf7 GT
	if(var_100_bool == 0) goto Label_252; // 0xf8 JumpB
	func_336(var_13_int); // 0xfa Call
	
Label_252:
	var_103_object = Obj(); // 0xfc PushV
	var_103_object = var_10_bool; // 0xfd Mov
	func_1678(var_103_object); // 0xfe Call
	
Label_256:
	return 2; // 0x100 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x101 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x102 PushV
	var_14_object = var_10_object; // 0x103 Mov
	func_1694(var_13_int, var_14_object); // 0x104 Call
	var_12_int = var_13_int; // 0x105 Mov
	var_54_int = 0; // 0x107 PushI
	var_55_bool = var_12_int > var_54_int; // 0x108 GT
	if(var_55_bool == 0) goto Label_276; // 0x109 JumpB
	var_56_int = 1; // 0x10a PushI
	var_57_bool = var_12_int > var_56_int; // 0x10b GT
	if(var_57_bool == 0) goto Label_272; // 0x10c JumpB
	func_336(var_12_int); // 0x10e Call
	
Label_272:
	var_60_object = Obj(); // 0x110 PushV
	var_60_object = var_10_object; // 0x111 Mov
	func_1707(var_60_object); // 0x112 Call
	
Label_276:
	return 2; // 0x114 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x115 PushV
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); // 0x116 PushV
	var_15_string = var_11_object; // 0x117 Mov
	var_16_object = var_10_bool; // 0x118 Mov
	func_1713(var_16_object); // 0x119 Call
	var_13_int = var_14_int; // 0x11a Mov
	var_17_int = 0; // 0x11c PushI
	var_18_bool = var_13_int > var_17_int; // 0x11d GT
	if(var_18_bool == 0) goto Label_298; // 0x11e JumpB
	var_19_int = 1; // 0x11f PushI
	var_20_bool = var_13_int > var_19_int; // 0x120 GT
	if(var_20_bool == 0) goto Label_293; // 0x121 JumpB
	func_336(var_13_int); // 0x123 Call
	
Label_293:
	var_23_string = ""; var_24_object = Obj(); // 0x125 PushV
	var_23_string = var_11_object; // 0x126 Mov
	var_24_object = var_10_bool; // 0x127 Mov
	func_1716(); // 0x128 Call
	
Label_298:
	return 2; // 0x12a Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = var_0_bool; // 0x12c PushT
	if(var_11_bool == 0) goto Label_303; // 0x12d JumpB
	return 0; // 0x12e Return
	
Label_303:
	var_12_object = Obj(); // 0x12f PushV
	var_12_object = var_10_object; // 0x130 Mov
	func_358(var_10_object, var_12_object); // 0x131 Call
	return 0; // 0x133 Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = var_0_bool; // 0x135 PushT
	if(var_11_bool == 0) goto Label_312; // 0x136 JumpB
	return 0; // 0x137 Return
	
Label_312:
	var_12_object = Obj(); // 0x138 PushV
	var_12_object = var_10_object; // 0x139 Mov
	func_358(var_10_object, var_12_object); // 0x13a Call
	return 0; // 0x13c Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 110; // 0x13e PushI
	var_12_bool = var_10_object != var_11_int; // 0x13f Neq
	if(var_12_bool == 0) goto Label_322; // 0x140 JumpB
	return 0; // 0x141 Return
	
Label_322:
	var_1_bool = 0; // 0x142 TMovB
	var_13_int = 110; // 0x143 PushI
	KillTimer(var_13_int); // 0x144 Func
	ResetAAS(); // 0x146 Func
	return 0; // 0x148 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_336(var_9_object); // 0x14a Call
	func_1693(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_336(var_10_object); // 0x15f Call
	var_13_object = Obj(); // 0x161 PushV
	var_13_object = var_10_object; // 0x162 Mov
	func_1622(); // 0x163 Call
	return 0; // 0x165 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x1bf PushV
	var_13_int = 0; var_14_object = Obj(); // 0x1c0 PushV
	var_14_object = var_10_object; // 0x1c1 Mov
	func_1684(var_14_object); // 0x1c2 Call
	var_12_int = var_13_int; // 0x1c3 Mov
	var_15_int = 0; // 0x1c5 PushI
	var_16_bool = var_12_int > var_15_int; // 0x1c6 GT
	if(var_16_bool == 0) goto Label_466; // 0x1c7 JumpB
	var_17_int = 1; // 0x1c8 PushI
	var_18_bool = var_12_int > var_17_int; // 0x1c9 GT
	if(var_18_bool == 0) goto Label_462; // 0x1ca JumpB
	func_555(); // 0x1cc Call
	
Label_462:
	var_21_object = Obj(); // 0x1ce PushV
	var_21_object = var_10_object; // 0x1cf Mov
	func_1687(var_21_object); // 0x1d0 Call
	
Label_466:
	return 2; // 0x1d2 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x1d3 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x1d4 PushV
	var_14_object = var_10_object; // 0x1d5 Mov
	func_1653(var_13_int, var_14_object); // 0x1d6 Call
	var_12_int = var_13_int; // 0x1d7 Mov
	var_49_int = 0; // 0x1d9 PushI
	var_50_bool = var_12_int > var_49_int; // 0x1da GT
	if(var_50_bool == 0) goto Label_486; // 0x1db JumpB
	var_51_int = 1; // 0x1dc PushI
	var_52_bool = var_12_int > var_51_int; // 0x1dd GT
	if(var_52_bool == 0) goto Label_482; // 0x1de JumpB
	func_555(); // 0x1e0 Call
	
Label_482:
	var_55_object = Obj(); // 0x1e2 PushV
	var_55_object = var_10_object; // 0x1e3 Mov
	func_1663(var_55_object); // 0x1e4 Call
	
Label_486:
	return 2; // 0x1e6 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x1e7 PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x1e8 PushV
	var_15_object = var_10_bool; // 0x1e9 Mov
	var_16_object = var_11_object; // 0x1ea Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0x1eb Call
	if(var_14_bool == 0) goto Label_512; // 0x1ed JumpB
	var_65_int = 0; var_66_object = Obj(); // 0x1ee PushV
	var_66_object = var_10_bool; // 0x1ef Mov
	func_1671(var_65_int, var_66_object); // 0x1f0 Call
	var_13_int = var_65_int; // 0x1f1 Mov
	var_97_int = 0; // 0x1f3 PushI
	var_98_bool = var_13_int > var_97_int; // 0x1f4 GT
	if(var_98_bool == 0) goto Label_512; // 0x1f5 JumpB
	var_99_int = 1; // 0x1f6 PushI
	var_100_bool = var_13_int > var_99_int; // 0x1f7 GT
	if(var_100_bool == 0) goto Label_508; // 0x1f8 JumpB
	func_555(); // 0x1fa Call
	
Label_508:
	var_103_object = Obj(); // 0x1fc PushV
	var_103_object = var_10_bool; // 0x1fd Mov
	func_1678(var_103_object); // 0x1fe Call
	
Label_512:
	return 2; // 0x200 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x201 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x202 PushV
	var_14_object = var_10_object; // 0x203 Mov
	func_1694(var_13_int, var_14_object); // 0x204 Call
	var_12_int = var_13_int; // 0x205 Mov
	var_54_int = 0; // 0x207 PushI
	var_55_bool = var_12_int > var_54_int; // 0x208 GT
	if(var_55_bool == 0) goto Label_532; // 0x209 JumpB
	var_56_int = 1; // 0x20a PushI
	var_57_bool = var_12_int > var_56_int; // 0x20b GT
	if(var_57_bool == 0) goto Label_528; // 0x20c JumpB
	func_555(); // 0x20e Call
	
Label_528:
	var_60_object = Obj(); // 0x210 PushV
	var_60_object = var_10_object; // 0x211 Mov
	func_1707(var_60_object); // 0x212 Call
	
Label_532:
	return 2; // 0x214 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x215 PushV
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); // 0x216 PushV
	var_15_string = var_11_object; // 0x217 Mov
	var_16_object = var_10_bool; // 0x218 Mov
	func_1713(var_16_object); // 0x219 Call
	var_13_int = var_14_int; // 0x21a Mov
	var_17_int = 0; // 0x21c PushI
	var_18_bool = var_13_int > var_17_int; // 0x21d GT
	if(var_18_bool == 0) goto Label_554; // 0x21e JumpB
	var_19_int = 1; // 0x21f PushI
	var_20_bool = var_13_int > var_19_int; // 0x220 GT
	if(var_20_bool == 0) goto Label_549; // 0x221 JumpB
	func_555(); // 0x223 Call
	
Label_549:
	var_23_string = ""; var_24_object = Obj(); // 0x225 PushV
	var_23_string = var_11_object; // 0x226 Mov
	var_24_object = var_10_bool; // 0x227 Mov
	func_1716(); // 0x228 Call
	
Label_554:
	return 2; // 0x22a Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_555(); // 0x238 Call
	var_13_object = Obj(); // 0x23a PushV
	var_13_object = var_10_object; // 0x23b Mov
	func_1622(); // 0x23c Call
	return 0; // 0x23e Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x23f PushV
	var_15_int = 111; // 0x240 PushI
	var_16_bool = var_10_object != var_15_int; // 0x241 Neq
	if(var_16_bool == 0) goto Label_580; // 0x242 JumpB
	return 4; // 0x243 Return
	
Label_580:
	var_17_bool = 0; var_18_object = Obj(); // 0x244 PushV
	var_18_object = var_0_bool; // 0x245 MovT
	func_1420(var_17_bool, var_18_object); // 0x246 Call
	var_51_bool = var_17_bool == 0; // 0x248 Not
	if(var_51_bool == 0) goto Label_590; // 0x249 JumpB
	func_555(); // 0x24b Call
	return 4; // 0x24d Return
	
Label_590:
	GetDirection(var_13_cvector); // 0x24e Func
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0x250 PushV
	var_55_object = var_0_bool; // 0x251 MovT
	func_1288(var_55_object); // 0x252 Call
	var_14_cvector = var_54_cvector; // 0x253 Mov
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x255 PushV
	var_61_cvector = var_13_cvector; // 0x256 Mov
	var_62_cvector = var_14_cvector; // 0x257 Mov
	func_1575(var_60_float, var_61_cvector, var_62_cvector); // 0x258 Call
	var_84_float = 0.5; // 0x25a PushF
	var_85_bool = var_60_float < var_84_float; // 0x25b LT
	if(var_85_bool == 0) goto Label_609; // 0x25c JumpB
	var_86_object = Obj(); // 0x25d PushV
	var_86_object = var_0_bool; // 0x25e MovT
	func_1511(); // 0x25f Call
	
Label_609:
	return 4; // 0x261 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_555(); // 0x263 Call
	func_1693(); // 0x266 Call
	return 0; // 0x268 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	func_1253(var_9_object); // 0x463 Call
	func_1693(); // 0x466 Call
	return 0; // 0x468 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 0; // 0x4d0 PushI
	var_12_bool = var_10_int != var_11_int; // 0x4d1 Neq
	if(var_12_bool == 0) goto Label_1236; // 0x4d2 JumpB
	return 0; // 0x4d3 Return
	
Label_1236:
	var_13_bool = 0; var_14_object = Obj(); // 0x4d4 PushV
	var_14_object = var_1_bool; // 0x4d5 MovT
	func_1269(var_13_bool, var_14_object); // 0x4d6 Call
	var_49_bool = var_13_bool == 0; // 0x4d8 Not
	if(var_49_bool == 0) goto Label_1243; // 0x4d9 JumpB
	var_0_bool = 1; // 0x4da TMovB
	
Label_1243:
	var_50_int = 0; // 0x4db PushI
	KillTimer(var_50_int); // 0x4dc Func
	Stop(); // 0x4de Func
	return 0; // 0x4e0 Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	RequestClearPath(var_10_object); // 0x4e2 Func
	return 0; // 0x4e4 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	func_1253(var_10_object); // 0x4ee Call
	var_12_object = Obj(); // 0x4f0 PushV
	var_12_object = var_10_object; // 0x4f1 Mov
	func_1622(); // 0x4f2 Call
	return 0; // 0x4f4 Return
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x649 PushV
	var_14_string = "health"; // 0x64a PushS
	var_15_bool = var_11_string == var_14_string; // 0x64b Eq
	if(var_15_bool == 0) goto Label_1621; // 0x64c JumpB
	var_16_string = "health"; // 0x64d PushS
	GetProperty(var_16_string, var_13_float); // 0x64e Func
	var_17_int = 0; // 0x650 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x651 LE
	if(var_18_bool == 0) goto Label_1621; // 0x652 JumpB
	SignalDeath(var_10_object); // 0x653 Func
	
Label_1621:
	return 2; // 0x655 Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object)
{
	var_11_object = Obj(); // 0x657 PushV
	var_11_object = var_10_object; // 0x658 Mov
	func_1601(var_11_object); // 0x659 Call
	return 0; // 0x65b Return
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x65d PushV
	var_14_object = var_10_object; // 0x65e Mov
	var_15_int = var_11_int; // 0x65f Mov
	var_16_float = var_12_float; // 0x660 Mov
	func_1444(var_15_int, var_16_float); // 0x661 Call
	return 0; // 0x663 Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_int, var_8_bool, var_9_object)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0x94 PushV
	var_0_bool = 0; // 0x95 TMovB
	var_14_bool = 1; // 0x96 PushB
	SensePlayerOnly(var_14_bool); // 0x97 Func
	func_1935(); // 0x9a Call
	func_182(); // 0x9d Call
	
Label_159:
	var_137_int = 2; // 0x9f PushI
	irand(var_12_int, var_137_int); // 0xa0 Func
	var_138_int = 0; // 0xa2 PushI
	var_139_bool = var_12_int == var_138_int; // 0xa3 Eq
	if(var_139_bool == 0) goto Label_173; // 0xa4 JumpB
	var_0_bool = 1; // 0xa5 TMovB
	func_1954(); // 0xa7 Call
	var_0_bool = 0; // 0xa9 TMovB
	ResetAAS(); // 0xaa Func
	goto Label_180; // 0xac Jump
	
Label_180:
	goto Label_159; // 0xb4 Jump
	
Label_173:
	var_157_int = 4; // 0xad PushI
	irand(var_13_int, var_157_int); // 0xae Func
	var_158_int = 1; // 0xb0 PushI
	var_159_int = var_13_int + var_158_int; // 0xb1 Add
	Sleep(var_159_int); // 0xb2 Func
}


func_1280(var_317_string, var_318_int)
{
	var_319_int = 1; // 0x501 PushI
	var_320_bool = var_318_int == var_319_int; // 0x502 Eq
	if(var_320_bool == 0) goto Label_1286; // 0x503 JumpB
	var_317_string = "fire"; // 0x504 MovS
	return 0; // 0x505 Return
	
Label_1286:
	var_317_string = "phys"; // 0x506 MovS
	return 0; // 0x507 Return
}


func_0(var_12_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_13_object = Obj(); // 0x2 PushV
	var_13_object = var_12_object; // 0x3 Mov
	func_33(var_13_object); // 0x4 Call
	var_63_object = Obj(); // 0x6 PushV
	var_63_object = var_12_object; // 0x7 Mov
	func_2068(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1538(var_325_float, var_326_float, var_327_float)
{
	var_330_bool = var_326_float < var_327_float; // 0x603 LT
	if(var_330_bool == 0) goto Label_1543; // 0x604 JumpB
	var_325_float = var_326_float; // 0x605 Mov
	goto Label_1544; // 0x606 Jump
	
Label_1544:
	return 0; // 0x608 Return
	
Label_1543:
	var_325_float = var_327_float; // 0x607 Mov
}


func_1923(var_54_int, var_55_string)
{
	var_56_int = 0; var_57_int = 0; // 0x783 PushV
	GetInvItemByName(var_57_int, var_55_string); // 0x784 Func
	var_54_int = var_57_int; // 0x786 Mov
	return 2; // 0x787 Return
}


func_1671(var_65_int, var_66_object)
{
	var_67_int = 0; var_68_object = Obj(); // 0x688 PushV
	var_68_object = var_66_object; // 0x689 Mov
	func_1653(var_67_int, var_68_object); // 0x68a Call
	var_65_int = var_67_int; // 0x68b Mov
	return 0; // 0x68d Return
}


func_1288(var_54_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x508 PushV
	GetPosition(var_58_cvector); // 0x509 Func
	GetPosition(var_59_cvector); // 0x50b ObjFunc
	var_54_cvector = var_59_cvector - var_58_cvector; // 0x50d Sub2
	return 4; // 0x50e Return
}


func_1545(var_335_float, var_336_float, var_337_float, var_338_float)
{
	var_339_bool = var_336_float < var_337_float; // 0x60a LT
	if(var_339_bool == 0) goto Label_1550; // 0x60b JumpB
	var_335_float = var_337_float; // 0x60c Mov
	return 0; // 0x60d Return
	
Label_1550:
	var_340_bool = var_336_float > var_338_float; // 0x60e GT
	if(var_340_bool == 0) goto Label_1554; // 0x60f JumpB
	var_335_float = var_338_float; // 0x610 Mov
	return 0; // 0x611 Return
	
Label_1554:
	var_335_float = var_336_float; // 0x612 Mov
	return 0; // 0x613 Return
}


func_391(var_0_bool, var_29_object)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x187 PushV
	var_0_bool = var_29_object; // 0x188 TMov
	func_442(var_36_bool); // 0x18a Call
	GetDirection(var_34_cvector); // 0x18c Func
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x18e PushV
	var_45_object = var_0_bool; // 0x18f MovT
	func_1288(var_45_object); // 0x190 Call
	var_35_cvector = var_44_cvector; // 0x191 Mov
	var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x193 PushV
	var_51_cvector = var_34_cvector; // 0x194 Mov
	var_52_cvector = var_35_cvector; // 0x195 Mov
	func_1575(var_50_float, var_51_cvector, var_52_cvector); // 0x196 Call
	var_74_int = 0; // 0x198 PushI
	var_75_bool = var_50_float < var_74_int; // 0x199 LT
	if(var_75_bool == 0) goto Label_417; // 0x19a JumpB
	var_76_object = Obj(); // 0x19b PushV
	var_76_object = var_0_bool; // 0x19c MovT
	func_1511(); // 0x19d Call
	var_36_bool = 1; // 0x19f MovB
	goto Label_420; // 0x1a0 Jump
	
Label_420:
	var_85_bool = var_36_bool; // 0x1a4 Push
	if(var_85_bool == 0) goto Label_436; // 0x1a5 JumpB
	var_86_object = Obj(); // 0x1a6 PushV
	var_86_object = var_0_bool; // 0x1a7 MovT
	func_1511(); // 0x1a8 Call
	var_87_int = 111; // 0x1aa PushI
	var_88_float = 0.5; // 0x1ab PushF
	SetTimer(var_87_int, var_88_float); // 0x1ac Func
	var_89_float = 5.0; // 0x1ae PushF
	Sleep(var_89_float); // 0x1af Func
	var_90_int = 111; // 0x1b1 PushI
	KillTimer(var_90_int); // 0x1b2 Func
	
Label_436:
	StopAsync(); // 0x1b4 Func
	var_91_string = "head"; // 0x1b6 PushS
	UnlookAsync(var_91_string); // 0x1b7 Func
	return 6; // 0x1b9 Return
	
Label_417:
	var_92_float = 1.5; // 0x1a1 PushF
	Sleep(var_92_float, var_36_bool); // 0x1a2 Func
}


func_1928(var_147_string, var_148_int)
{
	var_149_string = ""; var_150_string = ""; // 0x788 PushV
	var_150_string = "idle"; // 0x789 MovS
	var_151_int = var_148_int; // 0x78a Push
	if(var_151_int == 0) goto Label_1933; // 0x78b JumpB
	var_150_string = var_150_string + var_148_int; // 0x78c Add2
	
Label_1933:
	var_147_string = var_150_string; // 0x78d Mov
	return 2; // 0x78e Return
}


func_1420(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0; // 0x58c PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x58d PushV
	var_20_object = var_16_object; // 0x58e Mov
	func_1384(var_19_bool, var_20_object); // 0x58f Call
	var_36_bool = var_19_bool == 0; // 0x591 Not
	if(var_36_bool == 0) goto Label_1429; // 0x592 JumpB
	var_15_bool = 0; // 0x593 MovB
	return 2; // 0x594 Return
	
Label_1429:
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x595 PushV
	var_38_object = var_16_object; // 0x596 Mov
	var_39_string = "noaccess"; // 0x597 MovS
	func_1303(var_37_bool, var_38_object, var_39_string); // 0x598 Call
	var_46_bool = var_37_bool == 0; // 0x59a Not
	if(var_46_bool == 0) goto Label_1438; // 0x59b JumpB
	var_15_bool = 1; // 0x59c MovB
	return 2; // 0x59d Return
	
Label_1438:
	var_47_string = "noaccess"; // 0x59e PushS
	GetProperty(var_47_string, var_18_int); // 0x59f ObjFunc
	var_48_int = 0; // 0x5a1 PushI
	var_15_bool = var_18_int == var_48_int; // 0x5a2 Eq2
	return 2; // 0x5a3 Return
}


func_1678(var_103_object)
{
	var_104_object = Obj(); // 0x68f PushV
	var_104_object = var_103_object; // 0x690 Mov
	func_1663(var_104_object); // 0x691 Call
	return 0; // 0x693 Return
}


func_1935()
{
	var_15_bool = GlobalVars[1]; // 0x78f PushGE
	var_15_bool = 0; // 0x790 MovB
	GlobalVars[1] = var_15_bool; // 0x791 PopGE
	var_16_bool = 0; // 0x792 PushV
	var_16_bool = 1; // 0x793 MovB
	func_1748(var_16_bool); // 0x794 Call
	return 0; // 0x796 Return
}


func_1295(var_54_float)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x50f PushV
	GetPosition(var_59_cvector); // 0x510 Func
	GetPosition(var_60_cvector); // 0x512 ObjFunc
	var_61_cvector = var_60_cvector - var_59_cvector; // 0x514 Sub2
	var_54_float = var_61_cvector | var_61_cvector; // 0x515 Or2
	return 6; // 0x516 Return
}


func_2068()
{
	var_64_bool = GlobalVars[1]; // 0x815 PushGE
	var_64_bool = 1; // 0x816 MovB
	GlobalVars[1] = var_64_bool; // 0x817 PopGE
	var_65_int = 50; // 0x818 PushI
	var_66_int = 40; // 0x819 PushI
	SetRTEnvelope(var_65_int, var_66_int); // 0x81a Func
	return 0; // 0x81c Return
}


func_1684(var_13_int)
{
	var_13_int = 2; // 0x695 MovI
	return 0; // 0x696 Return
}


func_1556(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = GetByIndex(var_64_cvector, 0); // 0x615 PushE
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x616 PushE
	var_68_float = var_66_float * var_67_float; // 0x617 Mult
	var_69_float = GetByIndex(var_64_cvector, 2); // 0x618 PushE
	var_70_float = GetByIndex(var_65_cvector, 2); // 0x619 PushE
	var_71_float = var_69_float * var_70_float; // 0x61a Mult
	var_63_float = var_68_float + var_71_float; // 0x61b Add2
	return 0; // 0x61c Return
}


func_1687(var_21_object)
{
	var_22_object = Obj(); // 0x698 PushV
	var_22_object = var_21_object; // 0x699 Mov
	func_1943(var_22_object); // 0x69a Call
	return 0; // 0x69c Return
}


func_1943(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x797 PushV
	var_25_bool = GlobalVars[1]; // 0x798 PushGE
	if(var_25_bool == 0) goto Label_1953; // 0x799 JumpB
	IsOverrideActive(var_24_bool); // 0x79a Func
	var_26_bool = var_24_bool == 0; // 0x79c Not
	if(var_26_bool == 0) goto Label_1952; // 0x79d JumpB
	WorkWithCorpse(var_22_object); // 0x79e Func
	
Label_1952:
	return 2; // 0x7a0 Return
	
Label_1953:
	return 2; // 0x7a1 Return
}


func_1303(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0; // 0x517 PushV
	var_42_string = "HasProperty"; // 0x518 PushS
	var_43_int = 2; // 0x519 PushI
	var_44_bool = IsFuncExist(var_38_object, var_42_string, var_43_int); // 0x51a FuncExist
	var_45_bool = var_44_bool == 0; // 0x51b Not
	if(var_45_bool == 0) goto Label_1311; // 0x51c JumpB
	var_37_bool = 0; // 0x51d MovB
	return 2; // 0x51e Return
	
Label_1311:
	HasProperty(var_39_string, var_41_bool); // 0x51f ObjFunc
	var_37_bool = var_41_bool; // 0x521 Mov
	return 2; // 0x522 Return
}


func_1052(var_0_bool)
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); // 0x41c PushV
	Face(var_0_bool); // 0x41d Func
	var_238_string = "all"; // 0x41f PushS
	var_239_string = "bjump"; // 0x420 PushS
	PlayAnimation(var_238_string, var_239_string); // 0x421 Func
	GetPFPosition(var_236_cvector); // 0x423 TObjFunc
	GetPFPosition(var_237_cvector); // 0x425 Func
	WaitForAnimEnd(); // 0x427 Func
	StopAsync(); // 0x429 Func
	var_240_cvector = CVector(0.0, 0.0, 0.0); // 0x42b PushVec
	SetSpeed(var_240_cvector); // 0x42c Func
	return 4; // 0x42e Return
}


func_1693()
{
	return 0; // 0x69d Return
}


func_1694(var_13_int, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x69e PushV
	CanSee(var_16_bool, var_14_object); // 0x69f Func
	var_17_bool = var_16_bool; // 0x6a1 Push
	if(var_17_bool == 0) goto Label_1705; // 0x6a2 JumpB
	var_18_int = 0; var_19_object = Obj(); // 0x6a3 PushV
	var_19_object = var_14_object; // 0x6a4 Mov
	func_1653(var_18_int, var_19_object); // 0x6a5 Call
	var_13_int = var_18_int; // 0x6a6 Mov
	return 2; // 0x6a8 Return
	
Label_1705:
	var_13_int = 0; // 0x6a9 MovI
	return 2; // 0x6aa Return
}


func_1565(var_72_float, var_73_cvector)
{
	var_74_float = GetByIndex(var_73_cvector, 0); // 0x61e PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x61f PushE
	var_76_float = var_74_float * var_75_float; // 0x620 Mult
	var_77_float = GetByIndex(var_73_cvector, 2); // 0x621 PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x622 PushE
	var_79_float = var_77_float * var_78_float; // 0x623 Mult
	var_80_int = var_76_float + var_79_float; // 0x624 Add
	var_72_float = sqrt(var_80_int); // 0x625 Sqrt2
	return 0; // 0x626 Return
}


func_33(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x21 PushV
	var_34_bool = var_13_object == 0; // 0x22 NullEq
	if(var_34_bool == 0) goto Label_41; // 0x23 JumpB
	var_35_string = ""; // 0x24 PushV
	var_35_string = "fdie"; // 0x25 MovS
	func_120(var_35_string); // 0x26 Call
	goto Label_119; // 0x28 Jump
	
Label_119:
	return 20; // 0x77 Return
	
Label_41:
	GetPosition(var_24_cvector); // 0x29 ObjFunc
	GetPosition(var_25_cvector); // 0x2b Func
	GetDirection(var_26_cvector); // 0x2d Func
	var_27_cvector = var_25_cvector - var_24_cvector; // 0x2f Sub2
	var_38_float = GetByIndex(var_27_cvector, 0); // 0x30 PushE
	var_39_float = GetByIndex(var_26_cvector, 0); // 0x31 PushE
	var_40_float = var_38_float * var_39_float; // 0x32 Mult
	var_41_float = GetByIndex(var_27_cvector, 2); // 0x33 PushE
	var_42_float = GetByIndex(var_26_cvector, 2); // 0x34 PushE
	var_43_float = var_41_float * var_42_float; // 0x35 Mult
	var_44_int = var_40_float + var_43_float; // 0x36 Add
	var_45_int = 0; // 0x37 PushI
	var_46_bool = var_44_int >= var_45_int; // 0x38 GE
	if(var_46_bool == 0) goto Label_60; // 0x39 JumpB
	var_28_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_29_object = var_13_object; // 0x45 Mov
	var_47_string = "GetScriptProperty"; // 0x46 PushS
	var_48_int = 2; // 0x47 PushI
	var_49_bool = IsFuncExist(var_13_object, var_47_string, var_48_int); // 0x48 FuncExist
	if(var_49_bool == 0) goto Label_85; // 0x49 JumpB
	var_50_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_30_bool, var_50_string); // 0x4b ObjFunc
	var_51_bool = var_30_bool; // 0x4d Push
	if(var_51_bool == 0) goto Label_85; // 0x4e JumpB
	var_52_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_29_object, var_52_string); // 0x50 ObjFunc
	var_53_bool = var_29_object == 0; // 0x52 NullEq
	if(var_53_bool == 0) goto Label_85; // 0x53 JumpB
	var_29_object = var_13_object; // 0x54 Mov
	
Label_85:
	var_54_string = "@GetEyesHeight"; // 0x55 PushS
	var_55_int = 1; // 0x56 PushI
	var_56_bool = IsFuncExist(var_29_object, var_54_string, var_55_int); // 0x57 FuncExist
	if(var_56_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_32_float); // 0x59 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_57_float = GetByIndex(var_33_cvector, 1); // 0x5c PushE
	var_57_float = var_32_float; // 0x5d Mov
	SetByIndex(var_33_cvector, 1) = var_57_float; // 0x5e PopE
	var_58_string = "head"; // 0x5f PushS
	LookAsync(var_13_object, var_58_string, var_33_cvector); // 0x60 Func
	var_31_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_59_string = "all"; // 0x65 PushS
	PlayAnimation(var_59_string, var_28_string); // 0x66 Func
	WaitForAnimEnd(); // 0x68 Func
	var_60_bool = var_31_bool; // 0x6a Push
	if(var_60_bool == 0) goto Label_113; // 0x6b JumpB
	StopAsync(); // 0x6c Func
	var_61_string = "head"; // 0x6e PushS
	UnlookAsync(var_61_string); // 0x6f Func
	
Label_113:
	var_62_string = "all"; // 0x71 PushS
	LockAnimationEnd(var_62_string, var_28_string); // 0x72 Func
	RemoveEnvelope(); // 0x74 Func
	var_29_object = 0; // 0x76 SetNull
	
Label_100:
	var_31_bool = 0; // 0x64 MovB
	
Label_60:
	var_28_string = "bdie"; // 0x3c MovS
}


func_1954()
{
	var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_int = 0; var_144_bool = 0; var_145_int = 0; // 0x7a2 PushV
	var_143_int = 0; // 0x7a3 MovI
	
Label_1956:
	var_146_string = "all"; // 0x7a4 PushS
	var_147_string = ""; var_148_int = 0; // 0x7a5 PushV
	var_148_int = var_143_int; // 0x7a6 Mov
	func_1928(var_147_string, var_148_int); // 0x7a7 Call
	HasAnimation(var_144_bool, var_146_string, var_147_string); // 0x7a9 Func
	var_152_bool = var_144_bool == 0; // 0x7ab Not
	if(var_152_bool == 0) goto Label_1966; // 0x7ac JumpB
	goto Label_1969; // 0x7ad Jump
	
Label_1969:
	irand(var_145_int, var_143_int); // 0x7b1 Func
	var_153_string = "all"; // 0x7b3 PushS
	var_154_string = ""; var_155_int = 0; // 0x7b4 PushV
	var_155_int = var_145_int; // 0x7b5 Mov
	func_1928(var_154_string, var_155_int); // 0x7b6 Call
	PlayAnimation(var_153_string, var_154_string); // 0x7b8 Func
	WaitForAnimEnd(); // 0x7ba Func
	return 6; // 0x7bc Return
	
Label_1966:
	var_156_int = 1; // 0x7ae PushI
	var_143_int = var_143_int + var_156_int; // 0x7af Add2
	goto Label_1956; // 0x7b0 Jump
}


func_1315(var_289_float, var_290_object, var_291_float, var_292_int)
{
	var_296_int = 0; var_297_string = ""; var_298_int = 0; var_299_float = 0; var_300_float = 0; var_301_float = 0; var_302_int = 0; var_303_string = ""; var_304_int = 0; var_305_float = 0; var_306_float = 0; var_307_float = 0; // 0x523 PushV
	var_308_bool = 0; var_309_object = Obj(); var_310_string = ""; // 0x524 PushV
	var_309_object = var_290_object; // 0x525 Mov
	var_310_string = "health"; // 0x526 MovS
	func_1303(var_308_bool, var_309_object, var_310_string); // 0x527 Call
	var_311_bool = var_308_bool == 0; // 0x529 Not
	if(var_311_bool == 0) goto Label_1325; // 0x52a JumpB
	var_289_float = 0.0; // 0x52b MovF
	return 12; // 0x52c Return
	
Label_1325:
	var_312_bool = 0; var_313_object = Obj(); var_314_string = ""; // 0x52d PushV
	var_313_object = var_290_object; // 0x52e Mov
	var_314_string = "armor"; // 0x52f MovS
	func_1303(var_312_bool, var_313_object, var_314_string); // 0x530 Call
	var_315_bool = var_312_bool == 0; // 0x532 Not
	if(var_315_bool == 0) goto Label_1334; // 0x533 JumpB
	var_302_int = 0; // 0x534 MovI
	goto Label_1337; // 0x535 Jump
	
Label_1337:
	var_316_string = "armor_"; // 0x539 PushS
	var_317_string = ""; var_318_int = 0; // 0x53a PushV
	var_318_int = var_292_int; // 0x53b Mov
	func_1280(var_317_string, var_318_int); // 0x53c Call
	var_303_string = var_316_string + var_317_string; // 0x53e Add2
	var_321_bool = 0; var_322_object = Obj(); var_323_string = ""; // 0x53f PushV
	var_322_object = var_290_object; // 0x540 Mov
	var_323_string = var_303_string; // 0x541 Mov
	func_1303(var_321_bool, var_322_object, var_323_string); // 0x542 Call
	var_324_bool = var_321_bool == 0; // 0x544 Not
	if(var_324_bool == 0) goto Label_1352; // 0x545 JumpB
	var_304_int = 0; // 0x546 MovI
	goto Label_1354; // 0x547 Jump
	
Label_1354:
	var_325_float = 0; var_326_float = 0; var_327_float = 0; // 0x54a PushV
	var_328_int = var_302_int + var_304_int; // 0x54b Add
	var_329_float = 100.0; // 0x54c PushF
	var_326_float = var_328_int / var_328_int; // 0x54d Div2
	var_327_float = 1; // 0x54e MovI
	func_1538(var_325_float, var_326_float, var_327_float); // 0x54f Call
	var_305_float = var_325_float; // 0x550 Mov
	var_331_string = "health"; // 0x552 PushS
	GetProperty(var_331_string, var_306_float); // 0x553 ObjFunc
	var_332_int = 1; // 0x555 PushI
	var_333_int = var_332_int - var_305_float; // 0x556 Sub
	var_307_float = var_291_float * var_333_int; // 0x557 Mult2
	var_334_string = "health"; // 0x558 PushS
	var_335_float = 0; var_336_float = 0; var_337_float = 0; var_338_float = 0; // 0x559 PushV
	var_336_float = var_306_float - var_307_float; // 0x55a Sub2
	var_337_float = 0; // 0x55b MovI
	var_338_float = 1; // 0x55c MovI
	func_1545(var_335_float, var_336_float, var_337_float, var_338_float); // 0x55d Call
	SetProperty(var_334_string, var_335_float); // 0x55f ObjFunc
	var_289_float = var_307_float; // 0x561 Mov
	return 12; // 0x562 Return
	
Label_1352:
	GetProperty(var_303_string, var_304_int); // 0x548 ObjFunc
	
Label_1334:
	var_341_string = "armor"; // 0x536 PushS
	GetProperty(var_341_string, var_302_int); // 0x537 ObjFunc
}


func_1444(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x5a4 PushV
	var_37_bool = 0; // 0x5a5 PushV
	var_37_bool = 0; // 0x5a6 MovB
	var_38_int = 4; // 0x5a7 PushI
	var_39_bool = var_15_int != var_38_int; // 0x5a8 Neq
	if(var_39_bool == 0) goto Label_1454; // 0x5a9 JumpB
	var_40_int = 5; // 0x5aa PushI
	var_41_bool = var_15_int != var_40_int; // 0x5ab Neq
	if(var_41_bool == 0) goto Label_1454; // 0x5ac JumpB
	var_37_bool = 1; // 0x5ad MovB
	
Label_1454:
	if(var_37_bool == 0) goto Label_1473; // 0x5ae JumpB
	GetScene(var_27_object); // 0x5af Func
	GetPosition(var_29_cvector); // 0x5b1 Func
	GetEyesHeight(var_30_float); // 0x5b3 Func
	var_42_float = GetByIndex(var_29_cvector, 1); // 0x5b5 PushE
	var_43_int = 2; // 0x5b6 PushI
	var_44_float = var_30_float / var_43_int; // 0x5b7 Div
	var_42_float = var_42_float + var_44_float; // 0x5b8 Add2
	SetByIndex(var_29_cvector, 1) = var_42_float; // 0x5b9 PopE
	var_45_string = "scripted"; // 0x5ba PushS
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x5bb PushVec
	var_47_string = "blood.xml"; // 0x5bc PushS
	AddActorByType(var_28_object, var_45_string, var_27_object, var_29_cvector, var_46_cvector, var_47_string); // 0x5bd Func
	var_28_object = 0; // 0x5bf SetNull
	var_27_object = 0; // 0x5c0 SetNull
	
Label_1473:
	var_48_bool = var_14_object == 0; // 0x5c1 NullEq
	if(var_48_bool == 0) goto Label_1476; // 0x5c2 JumpB
	return 20; // 0x5c3 Return
	
Label_1476:
	GetSecondaryAnimationType(var_31_int); // 0x5c4 Func
	var_49_int = 0; // 0x5c6 PushI
	var_50_bool = var_31_int < var_49_int; // 0x5c7 LT
	if(var_50_bool == 0) goto Label_1482; // 0x5c8 JumpB
	return 20; // 0x5c9 Return
	
Label_1482:
	GetPosition(var_32_cvector); // 0x5ca ObjFunc
	GetPosition(var_33_cvector); // 0x5cc Func
	GetDirection(var_34_cvector); // 0x5ce Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x5d0 Sub2
	var_51_float = GetByIndex(var_35_cvector, 0); // 0x5d1 PushE
	var_52_float = GetByIndex(var_34_cvector, 0); // 0x5d2 PushE
	var_53_float = var_51_float * var_52_float; // 0x5d3 Mult
	var_54_float = GetByIndex(var_35_cvector, 2); // 0x5d4 PushE
	var_55_float = GetByIndex(var_34_cvector, 2); // 0x5d5 PushE
	var_56_float = var_54_float * var_55_float; // 0x5d6 Mult
	var_57_int = var_53_float + var_56_float; // 0x5d7 Add
	var_58_int = 0; // 0x5d8 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x5d9 GE
	if(var_59_bool == 0) goto Label_1501; // 0x5da JumpB
	var_36_string = "fhit"; // 0x5db MovS
	goto Label_1502; // 0x5dc Jump
	
Label_1502:
	var_60_string = "hit_react"; // 0x5de PushS
	var_61_string = "1"; // 0x5df PushS
	var_62_int = var_36_string + var_61_string; // 0x5e0 Add
	var_63_string = "2"; // 0x5e1 PushS
	var_64_int = var_36_string + var_63_string; // 0x5e2 Add
	var_65_int = -10; // 0x5e3 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x5e4 Func
	return 20; // 0x5e6 Return
	
Label_1501:
	var_36_string = "bhit"; // 0x5dd MovS
}


func_1575(var_60_float, var_61_cvector, var_62_cvector)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x628 PushV
	var_64_cvector = var_61_cvector; // 0x629 Mov
	var_65_cvector = var_62_cvector; // 0x62a Mov
	func_1556(var_63_float, var_64_cvector, var_65_cvector); // 0x62b Call
	var_72_float = 0; var_73_cvector = CVector(0,0,0); // 0x62d PushV
	var_73_cvector = var_61_cvector; // 0x62e Mov
	func_1565(var_72_float, var_73_cvector); // 0x62f Call
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x631 PushV
	var_82_cvector = var_62_cvector; // 0x632 Mov
	func_1565(var_81_float, var_82_cvector); // 0x633 Call
	var_83_float = var_72_float * var_81_float; // 0x635 Mult
	var_60_float = var_63_float / var_63_float; // 0x636 Div2
	return 0; // 0x637 Return
}


func_1707(var_60_object)
{
	var_61_object = Obj(); // 0x6ac PushV
	var_61_object = var_60_object; // 0x6ad Mov
	func_1663(var_61_object); // 0x6ae Call
	return 0; // 0x6b0 Return
}


func_555()
{
	StopGroup0(); // 0x22b Func
	StopAsync(); // 0x22d Func
	var_10_string = "head"; // 0x22f PushS
	UnlookAsync(var_10_string); // 0x230 Func
	var_11_int = 111; // 0x232 PushI
	KillTimer(var_11_int); // 0x233 Func
	return 0; // 0x235 Return
}


func_1071(var_0_bool, var_195_bool)
{
	var_196_bool = 0; var_197_bool = 0; // 0x42f PushV
	var_198_string = "IsAttacking"; // 0x430 PushS
	var_199_int = 1; // 0x431 PushI
	var_200_bool = IsFuncExist(var_0_bool, var_198_string, var_199_int); // 0x432 FuncExist
	if(var_200_bool == 0) goto Label_1080; // 0x433 JumpB
	IsAttacking(var_197_bool); // 0x434 TObjFunc
	var_195_bool = var_197_bool; // 0x436 Mov
	return 2; // 0x437 Return
	
Label_1080:
	var_195_bool = 0; // 0x438 MovB
	return 2; // 0x439 Return
}


func_1713(var_14_int)
{
	var_14_int = 0; // 0x6b2 MovI
	return 0; // 0x6b3 Return
}


func_1716()
{
	return 0; // 0x6b5 Return
}


func_182()
{
	var_133_bool = 0; // 0xb6 PushV
	func_1522(var_133_bool); // 0xb7 Call
	var_136_bool = var_133_bool == 0; // 0xb9 Not
	if(var_136_bool == 0) goto Label_190; // 0xba JumpB
	func_1693(); // 0xbc Call
	
Label_190:
	return 0; // 0xbe Return
}


func_1718(var_22_int, var_23_int)
{
	var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; // 0x6b6 PushV
	var_41_bool = var_22_int > var_23_int; // 0x6b7 GT
	if(var_41_bool == 0) goto Label_1725; // 0x6b8 JumpB
	var_42_string = "GenerateMoney: iMin > iMax"; // 0x6b9 PushS
	Trace(var_42_string); // 0x6ba Func
	return 8; // 0x6bc Return
	
Label_1725:
	var_37_int = 0; // 0x6bd MovI
	var_43_bool = var_22_int != var_23_int; // 0x6be Neq
	if(var_43_bool == 0) goto Label_1732; // 0x6bf JumpB
	var_44_int = var_23_int - var_22_int; // 0x6c0 Sub
	irand(var_38_int, var_44_int); // 0x6c1 Func
	goto Label_1736; // 0x6c3 Jump
	
Label_1736:
	var_37_int = var_37_int + var_22_int; // 0x6c8 Add2
	var_45_int = 0; // 0x6c9 PushI
	var_46_bool = var_37_int == var_45_int; // 0x6ca Eq
	if(var_46_bool == 0) goto Label_1741; // 0x6cb JumpB
	return 8; // 0x6cc Return
	
Label_1741:
	var_47_string = "Money"; // 0x6cd PushS
	GetInvItemByName(var_39_int, var_47_string); // 0x6ce Func
	var_48_int = 0; // 0x6d0 PushI
	AddItem(var_40_bool, var_39_int, var_48_int, var_37_int); // 0x6d1 Func
	return 8; // 0x6d3 Return
	
Label_1732:
	var_49_int = 0; // 0x6c4 PushI
	var_50_bool = var_22_int == var_49_int; // 0x6c5 Eq
	if(var_50_bool == 0) goto Label_1736; // 0x6c6 JumpB
	return 8; // 0x6c7 Return
}


func_1592(var_25_int)
{
	var_26_float = 0; var_27_float = 0; // 0x638 PushV
	GetGameTime(var_27_float); // 0x639 Func
	var_28_int = 1; // 0x63b PushI
	var_29_int = 0; // 0x63c PushV
	var_30_int = 24; // 0x63d PushI
	var_29_int = var_27_float / var_27_float; // 0x63e Div2
	var_25_int = var_28_int + var_29_int; // 0x63f Add2
	return 2; // 0x640 Return
}


func_442(var_0_bool)
{
	var_37_object = Obj(); // 0x1ba PushV
	var_37_object = var_0_bool; // 0x1bb MovT
	func_1527(var_37_object); // 0x1bc Call
	return 0; // 0x1be Return
}


func_1082(var_2_object, var_4_object)
{
	var_257_float = 0; var_258_int = 0; var_259_float = 0; var_260_int = 0; // 0x43a PushV
	var_261_bool = var_2_object == 0; // 0x43b Not
	if(var_261_bool == 0) goto Label_1086; // 0x43c JumpB
	return 4; // 0x43d Return
	
Label_1086:
	var_262_object = var_4_object; // 0x43e PushT
	if(var_262_object == 0) goto Label_1094; // 0x43f JumpB
	var_263_int = -1; // 0x440 PushI
	var_4_object = var_4_object + var_263_int; // 0x441 Add2
	var_264_int = 0; // 0x442 PushI
	var_265_bool = var_4_object > var_264_int; // 0x443 GT
	if(var_265_bool == 0) goto Label_1094; // 0x444 JumpB
	return 4; // 0x445 Return
	
Label_1094:
	rand(var_259_float); // 0x446 Func
	var_266_float = 0; // 0x448 PushV
	func_1120(var_266_float); // 0x449 Call
	var_267_bool = var_259_float < var_266_float; // 0x44b LT
	if(var_267_bool == 0) goto Label_1113; // 0x44c JumpB
	irand(var_260_int, var_259_float); // 0x44d Func
	var_268_int = 1; // 0x44f PushI
	var_260_int = var_260_int + var_268_int; // 0x450 Add2
	var_269_string = "attack"; // 0x451 PushS
	var_270_int = var_269_string + var_260_int; // 0x452 Add
	Speak(var_270_int); // 0x453 Func
	var_271_int = 0; // 0x455 PushV
	func_1118(var_271_int); // 0x456 Call
	var_4_object = var_271_int; // 0x457 TMov
	
Label_1113:
	return 4; // 0x459 Return
}


func_955(var_361_bool, var_362_float)
{
	var_363_float = 0; var_364_bool = 0; var_365_float = 0; var_366_bool = 0; // 0x3bb PushV
	rand(var_365_float); // 0x3bc Func
	var_367_bool = var_365_float < var_362_float; // 0x3be LT
	if(var_367_bool == 0) goto Label_975; // 0x3bf JumpB
	
Label_960:
	IsAnimationPlaying(var_366_bool); // 0x3c0 Func
	var_368_bool = var_366_bool == 0; // 0x3c2 Not
	if(var_368_bool == 0) goto Label_965; // 0x3c3 JumpB
	goto Label_974; // 0x3c4 Jump
	
Label_974:
	goto Label_977; // 0x3ce Jump
	
Label_977:
	var_361_bool = 0; // 0x3d1 MovB
	return 4; // 0x3d2 Return
	
Label_965:
	var_369_bool = 0; // 0x3c5 PushV
	func_1019(var_366_bool, var_369_bool); // 0x3c6 Call
	if(var_369_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_361_bool = 1; // 0x3c9 MovB
	return 4; // 0x3ca Return
	
Label_971:
	sync(); // 0x3cb Func
	goto Label_960; // 0x3cd Jump
	
Label_975:
	WaitForAnimEnd(); // 0x3cf Func
}


func_1981()
{
	StopAnimation(); // 0x7bd Func
	return 0; // 0x7bf Return
}


func_1984(var_21_bool)
{
	var_21_bool = 1; // 0x7c0 MovB
	return 0; // 0x7c1 Return
}


func_1601(var_11_object)
{
	var_12_object = Obj(); // 0x642 PushV
	var_12_object = var_11_object; // 0x643 Mov
	TaskCall(0); // 0x644 TaskCall
	func_0(var_12_object); // 0x645 Call
	TaskReturn(); // 0x646 TaskReturn
	return 0; // 0x648 Return
}


func_1986(var_14_bool, var_15_object, var_16_object)
{
	var_17_string = ""; var_18_bool = 0; var_19_string = ""; var_20_bool = 0; // 0x7c2 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x7c3 PushV
	var_22_object = var_16_object; // 0x7c4 Mov
	var_23_string = "class"; // 0x7c5 MovS
	func_1303(var_21_bool, var_22_object, var_23_string); // 0x7c6 Call
	var_30_bool = var_21_bool == 0; // 0x7c8 Not
	if(var_30_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_14_bool = 0; // 0x7ca MovB
	return 4; // 0x7cb Return
	
Label_1996:
	var_31_string = "class"; // 0x7cc PushS
	GetProperty(var_31_string, var_19_string); // 0x7cd ObjFunc
	var_32_bool = 0; // 0x7cf PushV
	var_32_bool = 0; // 0x7d0 MovB
	var_33_bool = 0; // 0x7d1 PushV
	var_33_bool = 0; // 0x7d2 MovB
	var_34_bool = 0; // 0x7d3 PushV
	var_34_bool = 0; // 0x7d4 MovB
	var_35_bool = 0; // 0x7d5 PushV
	var_35_bool = 0; // 0x7d6 MovB
	var_36_bool = 0; // 0x7d7 PushV
	var_36_bool = 0; // 0x7d8 MovB
	var_37_bool = 0; // 0x7d9 PushV
	var_37_bool = 0; // 0x7da MovB
	var_38_string = "littleboy"; // 0x7db PushS
	var_39_bool = var_19_string != var_38_string; // 0x7dc Neq
	if(var_39_bool == 0) goto Label_2018; // 0x7dd JumpB
	var_40_string = "littlegirl"; // 0x7de PushS
	var_41_bool = var_19_string != var_40_string; // 0x7df Neq
	if(var_41_bool == 0) goto Label_2018; // 0x7e0 JumpB
	var_37_bool = 1; // 0x7e1 MovB
	
Label_2018:
	if(var_37_bool == 0) goto Label_2023; // 0x7e2 JumpB
	var_42_string = "boy"; // 0x7e3 PushS
	var_43_bool = var_19_string != var_42_string; // 0x7e4 Neq
	if(var_43_bool == 0) goto Label_2023; // 0x7e5 JumpB
	var_36_bool = 1; // 0x7e6 MovB
	
Label_2023:
	if(var_36_bool == 0) goto Label_2028; // 0x7e7 JumpB
	var_44_string = "girl"; // 0x7e8 PushS
	var_45_bool = var_19_string != var_44_string; // 0x7e9 Neq
	if(var_45_bool == 0) goto Label_2028; // 0x7ea JumpB
	var_35_bool = 1; // 0x7eb MovB
	
Label_2028:
	if(var_35_bool == 0) goto Label_2033; // 0x7ec JumpB
	var_46_string = "wasted_male"; // 0x7ed PushS
	var_47_bool = var_19_string != var_46_string; // 0x7ee Neq
	if(var_47_bool == 0) goto Label_2033; // 0x7ef JumpB
	var_34_bool = 1; // 0x7f0 MovB
	
Label_2033:
	if(var_34_bool == 0) goto Label_2038; // 0x7f1 JumpB
	var_48_string = "wasted_girl"; // 0x7f2 PushS
	var_49_bool = var_19_string != var_48_string; // 0x7f3 Neq
	if(var_49_bool == 0) goto Label_2038; // 0x7f4 JumpB
	var_33_bool = 1; // 0x7f5 MovB
	
Label_2038:
	if(var_33_bool == 0) goto Label_2043; // 0x7f6 JumpB
	var_50_string = "woman"; // 0x7f7 PushS
	var_51_bool = var_19_string != var_50_string; // 0x7f8 Neq
	if(var_51_bool == 0) goto Label_2043; // 0x7f9 JumpB
	var_32_bool = 1; // 0x7fa MovB
	
Label_2043:
	if(var_32_bool == 0) goto Label_2046; // 0x7fb JumpB
	var_14_bool = 0; // 0x7fc MovB
	return 4; // 0x7fd Return
	
Label_2046:
	CanSee(var_20_bool, var_15_object); // 0x7fe Func
	var_52_bool = 0; // 0x800 PushV
	var_52_bool = 1; // 0x801 MovB
	var_53_bool = var_20_bool; // 0x802 Push
	if(var_53_bool == 0) goto Label_2060; // 0x803 JumpB
	var_54_float = 0; var_55_object = Obj(); // 0x804 PushV
	var_55_object = var_15_object; // 0x805 Mov
	func_1295(var_55_object); // 0x806 Call
	var_62_float = 250000.0; // 0x808 PushF
	var_63_bool = var_54_float <= var_62_float; // 0x809 LE
	if(var_63_bool == 0) goto Label_2060; // 0x80a JumpB
	var_52_bool = 0; // 0x80b MovB
	
Label_2060:
	if(var_52_bool == 0) goto Label_2066; // 0x80c JumpB
	var_64_float = -0.3; // 0x80d PushF
	ReportReputationChange(var_15_object, var_16_object, var_64_float); // 0x80e Func
	var_14_bool = 1; // 0x810 MovB
	return 4; // 0x811 Return
	
Label_2066:
	var_14_bool = 0; // 0x812 MovB
	return 4; // 0x813 Return
}


func_836(var_0_bool, var_275_float, var_276_int)
{
	var_277_object = Obj(); var_278_float = 0; var_279_float = 0; var_280_object = Obj(); var_281_float = 0; var_282_float = 0; // 0x344 PushV
	var_283_float = 0.9; // 0x345 PushF
	var_284_float = var_275_float * var_283_float; // 0x346 Mult
	GetVictim(var_284_float, var_280_object); // 0x347 Func
	ReportAttack(var_0_bool); // 0x349 Func
	var_285_bool = var_280_object == var_0_bool; // 0x34b Eq
	if(var_285_bool == 0) goto Label_873; // 0x34c JumpB
	var_286_float = 0; var_287_object = Obj(); var_288_int = 0; // 0x34d PushV
	var_287_object = var_280_object; // 0x34e Mov
	var_288_int = var_276_int; // 0x34f Mov
	func_625(var_288_int); // 0x350 Call
	var_281_float = var_286_float; // 0x351 Mov
	var_289_float = 0; var_290_object = Obj(); var_291_float = 0; var_292_int = 0; // 0x353 PushV
	var_290_object = var_280_object; // 0x354 Mov
	var_291_float = var_281_float; // 0x355 Mov
	var_293_int = 0; var_294_object = Obj(); var_295_int = 0; // 0x356 PushV
	var_294_object = var_280_object; // 0x357 Mov
	var_295_int = var_276_int; // 0x358 Mov
	func_628(var_295_int); // 0x359 Call
	var_292_int = var_293_int; // 0x35a Mov
	func_1315(var_289_float, var_290_object, var_291_float, var_292_int); // 0x35c Call
	var_282_float = var_289_float; // 0x35d Mov
	var_342_int = 0; // 0x35f PushV
	func_1114(var_342_int); // 0x360 Call
	ReportHit(var_0_bool, var_342_int, var_282_float, var_281_float); // 0x362 Func
	var_343_object = Obj(); var_344_float = 0; // 0x364 PushV
	var_343_object = var_280_object; // 0x365 Mov
	var_344_float = var_282_float; // 0x366 Mov
	func_1116(); // 0x367 Call
	
Label_873:
	return 6; // 0x369 Return
}


func_336(var_1_bool)
{
	var_11_int = 110; // 0x150 PushI
	KillTimer(var_11_int); // 0x151 Func
	var_1_bool = 0; // 0x153 TMovB
	var_12_bool = var_0_bool; // 0x154 PushT
	if(var_12_bool == 0) goto Label_346; // 0x155 JumpB
	func_1981(); // 0x157 Call
	goto Label_348; // 0x159 Jump
	
Label_348:
	return 0; // 0x15c Return
	
Label_346:
	Stop(); // 0x15a Func
}


func_979(var_0_bool, var_203_bool, var_204_float)
{
	var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; var_210_bool = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_float = 0; // 0x3d3 PushV
	
Label_980:
	IsAnimationPlaying(var_210_bool); // 0x3d4 Func
	var_215_bool = var_210_bool == 0; // 0x3d6 Not
	if(var_215_bool == 0) goto Label_985; // 0x3d7 JumpB
	goto Label_1017; // 0x3d8 Jump
	
Label_1017:
	var_203_bool = 0; // 0x3f9 MovB
	return 10; // 0x3fa Return
	
Label_985:
	var_216_bool = 0; // 0x3d9 PushV
	func_1019(var_214_float, var_216_bool); // 0x3da Call
	if(var_216_bool == 0) goto Label_991; // 0x3dc JumpB
	var_203_bool = 1; // 0x3dd MovB
	return 10; // 0x3de Return
	
Label_991:
	var_241_bool = 0; var_242_object = Obj(); // 0x3df PushV
	var_242_object = var_0_bool; // 0x3e0 MovT
	func_1420(var_241_bool, var_242_object); // 0x3e1 Call
	var_243_bool = var_241_bool == 0; // 0x3e3 Not
	if(var_243_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_203_bool = 0; // 0x3e5 MovB
	return 10; // 0x3e6 Return
	
Label_999:
	GetPFPosition(var_211_cvector); // 0x3e7 TObjFunc
	GetPFPosition(var_212_cvector); // 0x3e9 Func
	var_213_cvector = var_211_cvector - var_212_cvector; // 0x3eb Sub2
	var_214_float = var_213_cvector | var_213_cvector; // 0x3ec Or2
	var_244_float = var_204_float * var_204_float; // 0x3ed Mult
	var_245_bool = var_214_float < var_244_float; // 0x3ee LT
	if(var_245_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_246_bool = 0; var_247_float = 0; // 0x3f0 PushV
	var_247_float = var_204_float; // 0x3f1 Mov
	func_875(var_214_float, var_246_bool, var_247_float); // 0x3f2 Call
	var_203_bool = 1; // 0x3f4 MovB
	return 10; // 0x3f5 Return
	
Label_1014:
	sync(); // 0x3f6 Func
	goto Label_980; // 0x3f8 Jump
}


func_1748(var_16_bool)
{
	var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_bool = 0; // 0x6d4 PushV
	var_21_bool = var_16_bool; // 0x6d5 Push
	if(var_21_bool == 0) goto Label_1837; // 0x6d6 JumpB
	var_22_int = 0; var_23_int = 0; // 0x6d7 PushV
	var_22_int = 0; // 0x6d8 MovI
	var_24_int = 100; // 0x6d9 PushI
	var_25_int = 0; // 0x6da PushV
	func_1592(var_25_int); // 0x6db Call
	var_31_int = 100; // 0x6dd PushI
	var_32_float = var_25_int * var_31_int; // 0x6de Mult
	var_23_int = var_24_int + var_32_float; // 0x6df Add2
	func_1718(var_22_int, var_23_int); // 0x6e0 Call
	var_51_int = 9; // 0x6e2 PushI
	irand(var_19_int, var_51_int); // 0x6e3 Func
	var_52_int = 0; // 0x6e5 PushI
	var_53_bool = var_19_int == var_52_int; // 0x6e6 Eq
	if(var_53_bool == 0) goto Label_1777; // 0x6e7 JumpB
	var_54_int = 0; var_55_string = ""; // 0x6e8 PushV
	var_55_string = "lemon"; // 0x6e9 MovS
	func_1923(var_54_int, var_55_string); // 0x6ea Call
	var_58_int = 0; // 0x6ec PushI
	var_59_int = 1; // 0x6ed PushI
	AddItem(var_20_bool, var_54_int, var_58_int, var_59_int); // 0x6ee Func
	goto Label_1836; // 0x6f0 Jump
	
Label_1836:
	goto Label_1922; // 0x72c Jump
	
Label_1922:
	return 4; // 0x782 Return
	
Label_1777:
	var_60_int = 1; // 0x6f1 PushI
	var_61_bool = var_19_int == var_60_int; // 0x6f2 Eq
	if(var_61_bool == 0) goto Label_1789; // 0x6f3 JumpB
	var_62_int = 0; var_63_string = ""; // 0x6f4 PushV
	var_63_string = "rusk"; // 0x6f5 MovS
	func_1923(var_62_int, var_63_string); // 0x6f6 Call
	var_64_int = 0; // 0x6f8 PushI
	var_65_int = 1; // 0x6f9 PushI
	AddItem(var_20_bool, var_62_int, var_64_int, var_65_int); // 0x6fa Func
	goto Label_1836; // 0x6fc Jump
	
Label_1789:
	var_66_int = 2; // 0x6fd PushI
	var_67_bool = var_19_int == var_66_int; // 0x6fe Eq
	if(var_67_bool == 0) goto Label_1801; // 0x6ff JumpB
	var_68_int = 0; var_69_string = ""; // 0x700 PushV
	var_69_string = "hook"; // 0x701 MovS
	func_1923(var_68_int, var_69_string); // 0x702 Call
	var_70_int = 0; // 0x704 PushI
	var_71_int = 1; // 0x705 PushI
	AddItem(var_20_bool, var_68_int, var_70_int, var_71_int); // 0x706 Func
	goto Label_1836; // 0x708 Jump
	
Label_1801:
	var_72_int = 4; // 0x709 PushI
	var_73_bool = var_19_int == var_72_int; // 0x70a Eq
	if(var_73_bool == 0) goto Label_1813; // 0x70b JumpB
	var_74_int = 0; var_75_string = ""; // 0x70c PushV
	var_75_string = "syringe"; // 0x70d MovS
	func_1923(var_74_int, var_75_string); // 0x70e Call
	var_76_int = 0; // 0x710 PushI
	var_77_int = 1; // 0x711 PushI
	AddItem(var_20_bool, var_74_int, var_76_int, var_77_int); // 0x712 Func
	goto Label_1836; // 0x714 Jump
	
Label_1813:
	var_78_int = 5; // 0x715 PushI
	var_79_bool = var_19_int == var_78_int; // 0x716 Eq
	if(var_79_bool == 0) goto Label_1825; // 0x717 JumpB
	var_80_int = 0; var_81_string = ""; // 0x718 PushV
	var_81_string = "watch"; // 0x719 MovS
	func_1923(var_80_int, var_81_string); // 0x71a Call
	var_82_int = 0; // 0x71c PushI
	var_83_int = 1; // 0x71d PushI
	AddItem(var_20_bool, var_80_int, var_82_int, var_83_int); // 0x71e Func
	goto Label_1836; // 0x720 Jump
	
Label_1825:
	var_84_int = 6; // 0x721 PushI
	var_85_bool = var_19_int == var_84_int; // 0x722 Eq
	if(var_85_bool == 0) goto Label_1836; // 0x723 JumpB
	var_86_int = 0; var_87_string = ""; // 0x724 PushV
	var_87_string = "razor"; // 0x725 MovS
	func_1923(var_86_int, var_87_string); // 0x726 Call
	var_88_int = 0; // 0x728 PushI
	var_89_int = 1; // 0x729 PushI
	AddItem(var_20_bool, var_86_int, var_88_int, var_89_int); // 0x72a Func
	
Label_1837:
	var_90_int = 0; var_91_int = 0; // 0x72d PushV
	var_90_int = 0; // 0x72e MovI
	var_92_int = 50; // 0x72f PushI
	var_93_int = 0; // 0x730 PushV
	func_1592(var_93_int); // 0x731 Call
	var_94_int = 50; // 0x733 PushI
	var_95_float = var_93_int * var_94_int; // 0x734 Mult
	var_91_int = var_92_int + var_95_float; // 0x735 Add2
	func_1718(var_90_int, var_91_int); // 0x736 Call
	var_96_int = 8; // 0x738 PushI
	irand(var_19_int, var_96_int); // 0x739 Func
	var_97_int = 0; // 0x73b PushI
	var_98_bool = var_19_int == var_97_int; // 0x73c Eq
	if(var_98_bool == 0) goto Label_1863; // 0x73d JumpB
	var_99_int = 0; var_100_string = ""; // 0x73e PushV
	var_100_string = "beads"; // 0x73f MovS
	func_1923(var_99_int, var_100_string); // 0x740 Call
	var_101_int = 0; // 0x742 PushI
	var_102_int = 1; // 0x743 PushI
	AddItem(var_20_bool, var_99_int, var_101_int, var_102_int); // 0x744 Func
	goto Label_1922; // 0x746 Jump
	
Label_1863:
	var_103_int = 1; // 0x747 PushI
	var_104_bool = var_19_int == var_103_int; // 0x748 Eq
	if(var_104_bool == 0) goto Label_1875; // 0x749 JumpB
	var_105_int = 0; var_106_string = ""; // 0x74a PushV
	var_106_string = "bracelet"; // 0x74b MovS
	func_1923(var_105_int, var_106_string); // 0x74c Call
	var_107_int = 0; // 0x74e PushI
	var_108_int = 1; // 0x74f PushI
	AddItem(var_20_bool, var_105_int, var_107_int, var_108_int); // 0x750 Func
	goto Label_1922; // 0x752 Jump
	
Label_1875:
	var_109_int = 2; // 0x753 PushI
	var_110_bool = var_19_int == var_109_int; // 0x754 Eq
	if(var_110_bool == 0) goto Label_1887; // 0x755 JumpB
	var_111_int = 0; var_112_string = ""; // 0x756 PushV
	var_112_string = "ear_ring"; // 0x757 MovS
	func_1923(var_111_int, var_112_string); // 0x758 Call
	var_113_int = 0; // 0x75a PushI
	var_114_int = 1; // 0x75b PushI
	AddItem(var_20_bool, var_111_int, var_113_int, var_114_int); // 0x75c Func
	goto Label_1922; // 0x75e Jump
	
Label_1887:
	var_115_int = 3; // 0x75f PushI
	var_116_bool = var_19_int == var_115_int; // 0x760 Eq
	if(var_116_bool == 0) goto Label_1899; // 0x761 JumpB
	var_117_int = 0; var_118_string = ""; // 0x762 PushV
	var_118_string = "gold_ring"; // 0x763 MovS
	func_1923(var_117_int, var_118_string); // 0x764 Call
	var_119_int = 0; // 0x766 PushI
	var_120_int = 1; // 0x767 PushI
	AddItem(var_20_bool, var_117_int, var_119_int, var_120_int); // 0x768 Func
	goto Label_1922; // 0x76a Jump
	
Label_1899:
	var_121_int = 4; // 0x76b PushI
	var_122_bool = var_19_int == var_121_int; // 0x76c Eq
	if(var_122_bool == 0) goto Label_1911; // 0x76d JumpB
	var_123_int = 0; var_124_string = ""; // 0x76e PushV
	var_124_string = "silver_ring"; // 0x76f MovS
	func_1923(var_123_int, var_124_string); // 0x770 Call
	var_125_int = 0; // 0x772 PushI
	var_126_int = 1; // 0x773 PushI
	AddItem(var_20_bool, var_123_int, var_125_int, var_126_int); // 0x774 Func
	goto Label_1922; // 0x776 Jump
	
Label_1911:
	var_127_int = 5; // 0x777 PushI
	var_128_bool = var_19_int == var_127_int; // 0x778 Eq
	if(var_128_bool == 0) goto Label_1922; // 0x779 JumpB
	var_129_int = 0; var_130_string = ""; // 0x77a PushV
	var_130_string = "flower"; // 0x77b MovS
	func_1923(var_129_int, var_130_string); // 0x77c Call
	var_131_int = 0; // 0x77e PushI
	var_132_int = 1; // 0x77f PushI
	AddItem(var_20_bool, var_129_int, var_131_int, var_132_int); // 0x780 Func
}


func_1114(var_342_int)
{
	var_342_int = 0; // 0x45a MovI
	return 0; // 0x45b Return
}


func_1116()
{
	return 0; // 0x45d Return
}


func_1118(var_271_int)
{
	var_271_int = 1; // 0x45e MovI
	return 0; // 0x45f Return
}


func_1120(var_266_float)
{
	var_266_float = 0.5; // 0x460 MovF
	return 0; // 0x461 Return
}


func_1379(var_30_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x563 PushV
	IsDead(var_33_bool); // 0x564 ObjFunc
	var_30_bool = var_33_bool; // 0x566 Mov
	return 2; // 0x567 Return
}


func_1636(var_19_int)
{
	var_21_bool = 0; // 0x665 PushV
	func_1984(var_21_bool); // 0x666 Call
	if(var_21_bool == 0) goto Label_1643; // 0x668 JumpB
	var_19_int = 2; // 0x669 MovI
	goto Label_1644; // 0x66a Jump
	
Label_1644:
	return 0; // 0x66c Return
	
Label_1643:
	var_19_int = 0; // 0x66b MovI
}


func_1253(var_0_bool)
{
	var_0_bool = 1; // 0x4e5 TMovB
	var_11_int = 0; // 0x4e6 PushI
	KillTimer(var_11_int); // 0x4e7 Func
	Stop(); // 0x4e9 Func
	return 0; // 0x4eb Return
}


func_358(var_1_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; // 0x166 PushV
	var_17_bool = var_1_bool; // 0x167 PushT
	if(var_17_bool == 0) goto Label_362; // 0x168 JumpB
	return 4; // 0x169 Return
	
Label_362:
	IsPlayerActor(var_12_object, var_15_bool); // 0x16a Func
	var_18_bool = var_15_bool == 0; // 0x16c Not
	if(var_18_bool == 0) goto Label_367; // 0x16d JumpB
	return 4; // 0x16e Return
	
Label_367:
	var_19_int = 0; var_20_object = Obj(); // 0x16f PushV
	var_20_object = var_12_object; // 0x170 Mov
	func_1636(var_20_object); // 0x171 Call
	var_16_int = var_19_int; // 0x172 Mov
	var_22_int = 0; // 0x174 PushI
	var_23_bool = var_16_int > var_22_int; // 0x175 GT
	if(var_23_bool == 0) goto Label_390; // 0x176 JumpB
	var_24_int = 1; // 0x177 PushI
	var_25_bool = var_16_int > var_24_int; // 0x178 GT
	if(var_25_bool == 0) goto Label_381; // 0x179 JumpB
	func_336(var_16_int); // 0x17b Call
	
Label_381:
	var_28_object = Obj(); // 0x17d PushV
	var_28_object = var_12_object; // 0x17e Mov
	func_1645(var_28_object); // 0x17f Call
	var_1_bool = 1; // 0x181 TMovB
	var_93_int = 110; // 0x182 PushI
	var_94_float = 5.0; // 0x183 PushF
	SetTimer(var_93_int, var_94_float); // 0x184 Func
	
Label_390:
	return 4; // 0x186 Return
}


func_1511()
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x5e7 PushV
	GetPosition(var_90_cvector); // 0x5e8 ObjFunc
	GetPosition(var_91_cvector); // 0x5ea Func
	var_92_cvector = var_90_cvector - var_91_cvector; // 0x5ec Sub2
	var_93_float = GetByIndex(var_92_cvector, 0); // 0x5ed PushE
	var_94_float = GetByIndex(var_92_cvector, 2); // 0x5ee PushE
	RotateAsync(var_93_float, var_94_float); // 0x5ef Func
	return 6; // 0x5f1 Return
}


func_1384(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x568 PushV
	var_25_bool = var_20_object == 0; // 0x569 NullEq
	if(var_25_bool == 0) goto Label_1389; // 0x56a JumpB
	var_19_bool = 0; // 0x56b MovB
	return 4; // 0x56c Return
	
Label_1389:
	var_26_bool = 0; // 0x56d PushV
	var_26_bool = 0; // 0x56e MovB
	var_27_string = "IsDead"; // 0x56f PushS
	var_28_int = 1; // 0x570 PushI
	var_29_bool = IsFuncExist(var_20_object, var_27_string, var_28_int); // 0x571 FuncExist
	if(var_29_bool == 0) goto Label_1401; // 0x572 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x573 PushV
	var_31_object = var_20_object; // 0x574 Mov
	func_1379(var_31_object); // 0x575 Call
	if(var_30_bool == 0) goto Label_1401; // 0x577 JumpB
	var_26_bool = 1; // 0x578 MovB
	
Label_1401:
	if(var_26_bool == 0) goto Label_1404; // 0x579 JumpB
	var_19_bool = 0; // 0x57a MovB
	return 4; // 0x57b Return
	
Label_1404:
	GetScene(var_23_object); // 0x57c Func
	var_34_bool = var_23_object == 0; // 0x57e NullEq
	if(var_34_bool == 0) goto Label_1410; // 0x57f JumpB
	var_19_bool = 0; // 0x580 MovB
	return 4; // 0x581 Return
	
Label_1410:
	GetScene(var_24_object); // 0x582 ObjFunc
	var_35_bool = var_23_object != var_24_object; // 0x584 Neq
	if(var_35_bool == 0) goto Label_1416; // 0x585 JumpB
	var_19_bool = 0; // 0x586 MovB
	return 4; // 0x587 Return
	
Label_1416:
	var_19_bool = 1; // 0x588 MovB
	return 4; // 0x589 Return
}


func_1129(var_0_bool, var_1_bool, var_119_bool, var_120_object, var_121_float, var_122_float, var_123_bool, var_124_bool)
{
	var_127_bool = 0; var_128_bool = 0; var_129_object = Obj(); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_object = Obj(); var_135_bool = 0; var_136_bool = 0; var_137_object = Obj(); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_object = Obj(); // 0x469 PushV
	var_0_bool = 0; // 0x46a TMovB
	var_1_bool = var_120_object; // 0x46b TMov
	var_136_bool = var_124_bool; // 0x46c Mov
	
Label_1133:
	var_143_bool = 0; var_144_object = Obj(); // 0x46d PushV
	var_144_object = var_120_object; // 0x46e Mov
	func_1269(var_143_bool, var_144_object); // 0x46f Call
	var_147_bool = var_143_bool == 0; // 0x471 Not
	if(var_147_bool == 0) goto Label_1141; // 0x472 JumpB
	var_119_bool = 0; // 0x473 MovB
	return 16; // 0x474 Return
	
Label_1141:
	GetPosition(var_138_cvector); // 0x475 ObjFunc
	GetPosition(var_139_cvector); // 0x477 Func
	var_140_cvector = var_138_cvector - var_139_cvector; // 0x479 Sub2
	var_141_float = var_140_cvector | var_140_cvector; // 0x47a Or2
	var_148_bool = 0; // 0x47b PushV
	var_148_bool = 0; // 0x47c MovB
	var_149_int = 0; // 0x47d PushI
	var_150_bool = var_122_float > var_149_int; // 0x47e GT
	if(var_150_bool == 0) goto Label_1156; // 0x47f JumpB
	var_151_float = var_122_float * var_122_float; // 0x480 Mult
	var_152_bool = var_141_float > var_151_float; // 0x481 GT
	if(var_152_bool == 0) goto Label_1156; // 0x482 JumpB
	var_148_bool = 1; // 0x483 MovB
	
Label_1156:
	if(var_148_bool == 0) goto Label_1161; // 0x484 JumpB
	Stop(); // 0x485 Func
	var_119_bool = 0; // 0x487 MovB
	return 16; // 0x488 Return
	
Label_1161:
	var_153_float = var_121_float * var_121_float; // 0x489 Mult
	var_154_bool = var_141_float > var_153_float; // 0x48a GT
	if(var_154_bool == 0) goto Label_1223; // 0x48b JumpB
	GetPFPosition(var_138_cvector); // 0x48c ObjFunc
	FindPathTo(var_142_object, var_138_cvector); // 0x48e Func
	var_155_bool = var_142_object != 0; // 0x490 NullNeq
	if(var_155_bool == 0) goto Label_1172; // 0x491 JumpB
	var_137_object = var_142_object; // 0x492 Mov
	var_142_object = 0; // 0x493 SetNull
	
Label_1172:
	var_156_bool = var_137_object != 0; // 0x494 NullNeq
	if(var_156_bool == 0) goto Label_1205; // 0x495 JumpB
	var_157_bool = var_136_bool; // 0x496 Push
	if(var_157_bool == 0) goto Label_1182; // 0x497 JumpB
	var_136_bool = 0; // 0x498 MovB
	RotatePath(var_137_object, var_135_bool); // 0x499 Func
	var_158_bool = var_135_bool == 0; // 0x49b Not
	if(var_158_bool == 0) goto Label_1182; // 0x49c JumpB
	goto Label_1229; // 0x49d Jump
	
Label_1229:
	var_119_bool = !var_0_bool; // 0x4cd Not2
	return 16; // 0x4ce Return
	
Label_1182:
	var_159_int = 0; // 0x49e PushI
	var_160_float = 0.3; // 0x49f PushF
	SetTimer(var_159_int, var_160_float); // 0x4a0 Func
	var_161_string = ""; // 0x4a2 PushV
	func_1276(var_161_string); // 0x4a3 Call
	var_162_string = ""; // 0x4a5 PushV
	func_1278(var_162_string); // 0x4a6 Call
	FollowPath(var_137_object, var_123_bool, var_135_bool, var_161_string, var_162_string); // 0x4a8 Func
	var_163_bool = var_135_bool == 0; // 0x4aa Not
	if(var_163_bool == 0) goto Label_1203; // 0x4ab JumpB
	var_164_bool = var_0_bool; // 0x4ac PushT
	if(var_164_bool == 0) goto Label_1201; // 0x4ad JumpB
	var_137_object = 0; // 0x4ae SetNull
	goto Label_1229; // 0x4af Jump
	
Label_1201:
	goto Label_1228; // 0x4b1 Jump
	
Label_1228:
	goto Label_1133; // 0x4cc Jump
	
Label_1203:
	var_137_object = 0; // 0x4b3 SetNull
	goto Label_1221; // 0x4b4 Jump
	
Label_1221:
	var_142_object = 0; // 0x4c5 SetNull
	goto Label_1227; // 0x4c6 Jump
	
Label_1227:
	var_137_object = 0; // 0x4cb SetNull
	
Label_1205:
	var_165_int = 0; // 0x4b5 PushI
	KillTimer(var_165_int); // 0x4b6 Func
	var_166_float = 0.5; // 0x4b8 PushF
	Sleep(var_166_float, var_135_bool); // 0x4b9 Func
	var_167_bool = var_135_bool == 0; // 0x4bb Not
	if(var_167_bool == 0) goto Label_1217; // 0x4bc JumpB
	var_168_bool = var_0_bool; // 0x4bd PushT
	if(var_168_bool == 0) goto Label_1217; // 0x4be JumpB
	var_137_object = 0; // 0x4bf SetNull
	goto Label_1229; // 0x4c0 Jump
	
Label_1217:
	var_169_int = 0; // 0x4c1 PushI
	var_170_float = 0.3; // 0x4c2 PushF
	SetTimer(var_169_int, var_170_float); // 0x4c3 Func
	
Label_1223:
	var_171_int = 0; // 0x4c7 PushI
	KillTimer(var_171_int); // 0x4c8 Func
	goto Label_1229; // 0x4ca Jump
}


func_617(var_62_object)
{
	var_68_object = Obj(); var_69_bool = 0; var_70_float = 0; // 0x26a PushV
	var_68_object = var_62_object; // 0x26b Mov
	var_69_bool = 1; // 0x26c MovB
	var_70_float = 180.0; // 0x26d MovF
	func_631(var_63_object, var_64_int, var_65_int, var_66_bool, var_67_int, var_62_object, var_68_object, var_69_bool, var_70_float); // 0x26e Call
	return 0; // 0x270 Return
}


func_875(var_0_bool, var_246_bool, var_247_float)
{
	var_248_int = 0; var_249_bool = 0; var_250_int = 0; var_251_bool = 0; // 0x36b PushV
	irand(var_250_int, var_251_bool); // 0x36c Func
	var_252_int = 1; // 0x36e PushI
	var_250_int = var_250_int + var_252_int; // 0x36f Add2
	Face(var_0_bool); // 0x370 Func
	var_253_bool = 1; // 0x372 PushB
	SetAttackState(var_253_bool); // 0x373 Func
	var_254_string = "all"; // 0x375 PushS
	var_255_string = "attack_begin"; // 0x376 PushS
	var_256_int = var_255_string + var_250_int; // 0x377 Add
	PlayAnimation(var_254_string, var_256_int); // 0x378 Func
	WaitForAnimEnd(); // 0x37a Func
	func_1082(var_250_int, var_251_bool); // 0x37d Call
	var_272_bool = 0; var_273_object = Obj(); // 0x37f PushV
	var_273_object = var_0_bool; // 0x380 MovT
	func_1420(var_272_bool, var_273_object); // 0x381 Call
	var_274_bool = var_272_bool == 0; // 0x383 Not
	if(var_274_bool == 0) goto Label_905; // 0x384 JumpB
	StopAsync(); // 0x385 Func
	var_246_bool = 0; // 0x387 MovB
	return 4; // 0x388 Return
	
Label_905:
	var_275_float = 0; var_276_int = 0; // 0x389 PushV
	var_275_float = var_247_float; // 0x38a Mov
	var_276_int = var_250_int; // 0x38b Mov
	func_836(var_251_bool, var_275_float, var_276_int); // 0x38c Call
	var_345_string = "all"; // 0x38e PushS
	var_346_string = "attack_middle"; // 0x38f PushS
	var_347_int = var_346_string + var_250_int; // 0x390 Add
	HasAnimation(var_251_bool, var_345_string, var_347_int); // 0x391 Func
	var_348_bool = var_251_bool; // 0x393 Push
	if(var_348_bool == 0) goto Label_939; // 0x394 JumpB
	var_349_string = "all"; // 0x395 PushS
	var_350_string = "attack_middle"; // 0x396 PushS
	var_351_int = var_350_string + var_250_int; // 0x397 Add
	PlayAnimation(var_349_string, var_351_int); // 0x398 Func
	WaitForAnimEnd(); // 0x39a Func
	var_352_bool = 0; var_353_object = Obj(); // 0x39c PushV
	var_353_object = var_0_bool; // 0x39d MovT
	func_1420(var_352_bool, var_353_object); // 0x39e Call
	var_354_bool = var_352_bool == 0; // 0x3a0 Not
	if(var_354_bool == 0) goto Label_934; // 0x3a1 JumpB
	StopAsync(); // 0x3a2 Func
	var_246_bool = 0; // 0x3a4 MovB
	return 4; // 0x3a5 Return
	
Label_934:
	var_355_float = 0; var_356_int = 0; // 0x3a6 PushV
	var_355_float = var_247_float; // 0x3a7 Mov
	var_356_int = var_250_int; // 0x3a8 Mov
	func_836(var_251_bool, var_355_float, var_356_int); // 0x3a9 Call
	
Label_939:
	var_357_bool = 0; // 0x3ab PushB
	SetAttackState(var_357_bool); // 0x3ac Func
	var_358_string = "all"; // 0x3ae PushS
	var_359_string = "attack_end"; // 0x3af PushS
	var_360_int = var_359_string + var_250_int; // 0x3b0 Add
	PlayAnimation(var_358_string, var_360_int); // 0x3b1 Func
	var_361_bool = 0; var_362_float = 0; // 0x3b3 PushV
	var_362_float = 0.75; // 0x3b4 MovF
	func_955(var_361_bool, var_362_float); // 0x3b5 Call
	StopAsync(); // 0x3b7 Func
	var_246_bool = 1; // 0x3b9 MovB
	return 4; // 0x3ba Return
}


func_631(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_68_object, var_69_bool, var_70_float, var_125_bool)
{
	var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_float = 0; var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_float = 0; // 0x277 PushV
	var_1_bool = 0; // 0x278 TMovI
	
Label_633:
	var_91_string = "all"; // 0x279 PushS
	var_92_string = "attack_begin"; // 0x27a PushS
	var_93_int = 1; // 0x27b PushI
	var_94_int = var_1_bool + var_93_int; // 0x27c Add
	var_95_int = var_92_string + var_94_int; // 0x27d Add
	HasAnimation(var_81_bool, var_91_string, var_95_int); // 0x27e Func
	var_96_bool = var_81_bool == 0; // 0x280 Not
	if(var_96_bool == 0) goto Label_643; // 0x281 JumpB
	goto Label_646; // 0x282 Jump
	
Label_646:
	var_2_object = 0; // 0x286 TMovI
	
Label_647:
	var_97_string = "attack"; // 0x287 PushS
	var_98_int = 1; // 0x288 PushI
	var_99_int = var_2_object + var_98_int; // 0x289 Add
	var_100_int = var_97_string + var_99_int; // 0x28a Add
	IsExisting3DSound(var_82_bool, var_100_int); // 0x28b Func
	var_101_bool = var_82_bool == 0; // 0x28d Not
	if(var_101_bool == 0) goto Label_656; // 0x28e JumpB
	goto Label_659; // 0x28f Jump
	
Label_659:
	var_4_object = 0; // 0x293 TMovI
	var_102_string = "@GetAttackDistance"; // 0x294 PushS
	var_103_int = 1; // 0x295 PushI
	var_104_bool = IsFuncExist(var_68_object, var_102_string, var_103_int); // 0x296 FuncExist
	if(var_104_bool == 0) goto Label_669; // 0x297 JumpB
	GetAttackDistance(var_83_float); // 0x298 ObjFunc
	var_105_int = 50; // 0x29a PushI
	var_83_float = var_83_float + var_105_int; // 0x29b Add2
	goto Label_670; // 0x29c Jump
	
Label_670:
	var_106_int = 150; // 0x29e PushI
	var_107_bool = var_83_float >= var_106_int; // 0x29f GE
	if(var_107_bool == 0) goto Label_674; // 0x2a0 JumpB
	var_83_float = 150; // 0x2a1 MovI
	
Label_674:
	var_3_object = 0; // 0x2a2 TMovB
	var_0_bool = var_68_object; // 0x2a3 TMov
	IsPlayerActor(var_0_bool, var_86_bool); // 0x2a4 Func
	var_108_bool = var_69_bool; // 0x2a6 Push
	if(var_108_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_87_bool = 0; // 0x2a8 MovB
	goto Label_683; // 0x2a9 Jump
	
Label_683:
	var_109_bool = 0; // 0x2ab PushV
	var_109_bool = 0; // 0x2ac MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x2ad PushV
	var_111_object = var_0_bool; // 0x2ae MovT
	func_1420(var_110_bool, var_111_object); // 0x2af Call
	if(var_110_bool == 0) goto Label_693; // 0x2b1 JumpB
	var_112_bool = var_3_object == 0; // 0x2b2 Not
	if(var_112_bool == 0) goto Label_693; // 0x2b3 JumpB
	var_109_bool = 1; // 0x2b4 MovB
	
Label_693:
	if(var_109_bool == 0) goto Label_819; // 0x2b5 JumpB
	GetPFPosition(var_84_cvector); // 0x2b6 TObjFunc
	GetPFPosition(var_85_cvector); // 0x2b8 Func
	var_88_cvector = var_84_cvector - var_85_cvector; // 0x2ba Sub2
	var_89_float = var_88_cvector | var_88_cvector; // 0x2bb Or2
	var_113_float = 400.0; // 0x2bc PushF
	var_114_int = var_113_float + var_83_float; // 0x2bd Add
	var_115_float = 400.0; // 0x2be PushF
	var_116_int = var_115_float + var_83_float; // 0x2bf Add
	var_117_float = var_114_int * var_116_int; // 0x2c0 Mult
	var_118_bool = var_89_float >= var_117_float; // 0x2c1 GE
	if(var_118_bool == 0) goto Label_722; // 0x2c2 JumpB
	var_119_bool = 0; var_120_object = Obj(); var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_bool = 0; // 0x2c3 PushV
	var_120_object = var_0_bool; // 0x2c4 MovT
	var_121_float = var_83_float; // 0x2c5 Mov
	var_122_float = 3000.0; // 0x2c6 MovF
	var_123_bool = 1; // 0x2c7 MovB
	var_124_bool = 0; // 0x2c8 MovB
	TaskCall(4); // 0x2c9 TaskCall
	func_1129(var_125_bool, var_126_object, var_119_bool, var_120_object, var_121_float, var_122_float, var_123_bool, var_124_bool); // 0x2ca Call
	TaskReturn(); // 0x2cb TaskReturn
	var_172_bool = var_125_bool == 0; // 0x2cd Not
	if(var_172_bool == 0) goto Label_720; // 0x2ce JumpB
	goto Label_819; // 0x2cf Jump
	
Label_819:
	WaitForAnimEnd(); // 0x333 Func
	var_173_object = var_3_object; // 0x335 PushT
	if(var_173_object == 0) goto Label_824; // 0x336 JumpB
	return 20; // 0x337 Return
	
Label_824:
	var_174_string = "all"; // 0x338 PushS
	var_175_string = "attack_off"; // 0x339 PushS
	PlayAnimation(var_174_string, var_175_string); // 0x33a Func
	WaitForAnimEnd(); // 0x33c Func
	var_176_bool = var_86_bool; // 0x33e Push
	if(var_176_bool == 0) goto Label_835; // 0x33f JumpB
	var_177_float = 2.0; // 0x340 PushF
	Sleep(var_177_float); // 0x341 Func
	
Label_835:
	return 20; // 0x343 Return
	
Label_720:
	var_87_bool = 0; // 0x2d0 MovB
	goto Label_818; // 0x2d1 Jump
	
Label_818:
	goto Label_683; // 0x332 Jump
	
Label_722:
	var_178_float = var_70_float * var_70_float; // 0x2d2 Mult
	var_179_bool = var_89_float >= var_178_float; // 0x2d3 GE
	if(var_179_bool == 0) goto Label_810; // 0x2d4 JumpB
	var_180_bool = var_87_bool == 0; // 0x2d5 Not
	if(var_180_bool == 0) goto Label_740; // 0x2d6 JumpB
	var_181_object = Obj(); // 0x2d7 PushV
	var_181_object = var_0_bool; // 0x2d8 MovT
	func_1511(); // 0x2d9 Call
	var_190_string = "all"; // 0x2db PushS
	var_191_string = "attack_on"; // 0x2dc PushS
	PlayAnimation(var_190_string, var_191_string); // 0x2dd Func
	WaitForAnimEnd(); // 0x2df Func
	StopAsync(); // 0x2e1 Func
	var_87_bool = 1; // 0x2e3 MovB
	
Label_740:
	rand(var_90_float); // 0x2e4 Func
	var_192_bool = 0; // 0x2e6 PushV
	var_192_bool = 1; // 0x2e7 MovB
	var_193_float = 0.6; // 0x2e8 PushF
	var_194_bool = var_90_float < var_193_float; // 0x2e9 LT
	if(var_194_bool == 0) goto Label_752; // 0x2ea JumpB
	var_195_bool = 0; // 0x2eb PushV
	func_1071(var_192_bool, var_195_bool); // 0x2ec Call
	if(var_195_bool == 0) goto Label_752; // 0x2ee JumpB
	var_192_bool = 0; // 0x2ef MovB
	
Label_752:
	if(var_192_bool == 0) goto Label_766; // 0x2f0 JumpB
	Face(var_0_bool); // 0x2f1 Func
	var_201_string = "all"; // 0x2f3 PushS
	var_202_string = "attack_stay"; // 0x2f4 PushS
	PlayAnimation(var_201_string, var_202_string); // 0x2f5 Func
	var_203_bool = 0; var_204_float = 0; // 0x2f7 PushV
	var_204_float = var_70_float; // 0x2f8 Mov
	func_979(var_90_float, var_203_bool, var_204_float); // 0x2f9 Call
	StopAsync(); // 0x2fb Func
	goto Label_809; // 0x2fd Jump
	
Label_809:
	goto Label_818; // 0x329 Jump
	
Label_766:
	Face(var_0_bool); // 0x2fe Func
	var_370_string = "all"; // 0x300 PushS
	var_371_string = "fjump"; // 0x301 PushS
	PlayAnimation(var_370_string, var_371_string); // 0x302 Func
	WaitForAnimEnd(); // 0x304 Func
	var_372_cvector = CVector(0.0, 0.0, 0.0); // 0x306 PushVec
	SetSpeed(var_372_cvector); // 0x307 Func
	Stop(); // 0x309 Func
	StopAsync(); // 0x30b Func
	var_373_bool = 0; // 0x30d PushV
	func_1071(var_90_float, var_373_bool); // 0x30e Call
	var_374_bool = var_373_bool == 0; // 0x310 Not
	if(var_374_bool == 0) goto Label_809; // 0x311 JumpB
	var_375_bool = 0; var_376_object = Obj(); // 0x312 PushV
	var_376_object = var_0_bool; // 0x313 MovT
	func_1420(var_375_bool, var_376_object); // 0x314 Call
	var_377_bool = var_375_bool == 0; // 0x316 Not
	if(var_377_bool == 0) goto Label_793; // 0x317 JumpB
	goto Label_819; // 0x318 Jump
	
Label_793:
	GetPFPosition(var_84_cvector); // 0x319 TObjFunc
	GetPFPosition(var_85_cvector); // 0x31b Func
	var_88_cvector = var_84_cvector - var_85_cvector; // 0x31d Sub2
	var_89_float = var_88_cvector | var_88_cvector; // 0x31e Or2
	var_378_float = var_70_float * var_70_float; // 0x31f Mult
	var_379_bool = var_89_float < var_378_float; // 0x320 LT
	if(var_379_bool == 0) goto Label_809; // 0x321 JumpB
	var_380_bool = 0; var_381_float = 0; // 0x322 PushV
	var_381_float = var_70_float; // 0x323 Mov
	func_875(var_90_float, var_380_bool, var_381_float); // 0x324 Call
	var_382_bool = var_380_bool == 0; // 0x326 Not
	if(var_382_bool == 0) goto Label_809; // 0x327 JumpB
	goto Label_819; // 0x328 Jump
	
Label_810:
	var_383_bool = 0; var_384_float = 0; // 0x32a PushV
	var_384_float = var_70_float; // 0x32b Mov
	func_875(var_90_float, var_383_bool, var_384_float); // 0x32c Call
	var_385_bool = var_383_bool == 0; // 0x32e Not
	if(var_385_bool == 0) goto Label_817; // 0x32f JumpB
	goto Label_819; // 0x330 Jump
	
Label_817:
	var_87_bool = 1; // 0x331 MovB
	
Label_682:
	var_87_bool = 1; // 0x2aa MovB
	
Label_669:
	var_83_float = var_70_float; // 0x29d Mov
	
Label_656:
	var_386_int = 1; // 0x290 PushI
	var_2_object = var_2_object + var_386_int; // 0x291 Add2
	goto Label_647; // 0x292 Jump
	
Label_643:
	var_387_int = 1; // 0x283 PushI
	var_1_bool = var_1_bool + var_387_int; // 0x284 Add2
	goto Label_633; // 0x285 Jump
}


func_1645(var_28_object)
{
	var_29_object = Obj(); // 0x66e PushV
	var_29_object = var_28_object; // 0x66f Mov
	TaskCall(2); // 0x670 TaskCall
	func_391(var_30_object, var_29_object); // 0x671 Call
	TaskReturn(); // 0x672 TaskReturn
	return 0; // 0x674 Return
}


func_625(var_286_float)
{
	var_286_float = 0.1; // 0x272 MovF
	return 0; // 0x273 Return
}


func_1522(var_133_bool)
{
	var_134_bool = 0; var_135_bool = 0; // 0x5f2 PushV
	IsLoaded(var_135_bool); // 0x5f3 Func
	var_133_bool = var_135_bool; // 0x5f5 Mov
	return 2; // 0x5f6 Return
}


func_628(var_293_int)
{
	var_293_int = 0; // 0x275 MovI
	return 0; // 0x276 Return
}


func_1653(var_18_int, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x676 PushV
	var_21_object = var_19_object; // 0x677 Mov
	func_1420(var_20_bool, var_21_object); // 0x678 Call
	if(var_20_bool == 0) goto Label_1661; // 0x67a JumpB
	var_18_int = 2; // 0x67b MovI
	goto Label_1662; // 0x67c Jump
	
Label_1662:
	return 0; // 0x67e Return
	
Label_1661:
	var_18_int = 0; // 0x67d MovI
}


func_1269(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x4f6 PushV
	var_16_object = var_14_object; // 0x4f7 Mov
	func_1420(var_15_bool, var_16_object); // 0x4f8 Call
	var_13_bool = var_15_bool; // 0x4f9 Mov
	return 0; // 0x4fb Return
}


func_1527(var_37_object)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x5f7 PushV
	GetEyesHeight(var_40_float); // 0x5f8 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5fa MovV
	var_42_float = GetByIndex(var_41_cvector, 1); // 0x5fb PushE
	var_42_float = var_40_float; // 0x5fc Mov
	SetByIndex(var_41_cvector, 1) = var_42_float; // 0x5fd PopE
	var_43_string = "head"; // 0x5fe PushS
	LookAsync(var_37_object, var_43_string, var_41_cvector); // 0x5ff Func
	return 4; // 0x601 Return
}


func_120(var_35_string)
{
	RemoveRTEnvelope(); // 0x79 Func
	SetDeathState(); // 0x7b Func
	Stop(); // 0x7d Func
	StopAsync(); // 0x7f Func
	StopSecondaryAnimation(); // 0x81 Func
	var_36_string = "all"; // 0x83 PushS
	PlayAnimation(var_36_string, var_35_string); // 0x84 Func
	WaitForAnimEnd(); // 0x86 Func
	var_37_string = "all"; // 0x88 PushS
	LockAnimationEnd(var_37_string, var_35_string); // 0x89 Func
	RemoveEnvelope(); // 0x8b Func
	return 0; // 0x8d Return
}


func_1019(var_0_bool, var_216_bool)
{
	var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_float = 0; var_226_float = 0; // 0x3fb PushV
	var_227_bool = 0; var_228_object = Obj(); // 0x3fc PushV
	var_228_object = var_0_bool; // 0x3fd MovT
	func_1420(var_227_bool, var_228_object); // 0x3fe Call
	var_229_bool = var_227_bool == 0; // 0x400 Not
	if(var_229_bool == 0) goto Label_1028; // 0x401 JumpB
	var_216_bool = 0; // 0x402 MovB
	return 10; // 0x403 Return
	
Label_1028:
	var_230_bool = 0; // 0x404 PushV
	func_1071(var_226_float, var_230_bool); // 0x405 Call
	if(var_230_bool == 0) goto Label_1050; // 0x407 JumpB
	GetPFPosition(var_222_cvector); // 0x408 TObjFunc
	GetPFPosition(var_223_cvector); // 0x40a Func
	var_224_cvector = var_222_cvector - var_223_cvector; // 0x40c Sub2
	var_225_float = var_224_cvector | var_224_cvector; // 0x40d Or2
	GetAttackDistance(var_226_float); // 0x40e TObjFunc
	var_231_int = 50; // 0x410 PushI
	var_226_float = var_226_float + var_231_int; // 0x411 Add2
	var_232_float = var_226_float * var_226_float; // 0x412 Mult
	var_233_bool = var_225_float <= var_232_float; // 0x413 LE
	if(var_233_bool == 0) goto Label_1050; // 0x414 JumpB
	func_1052(var_226_float); // 0x416 Call
	var_216_bool = 1; // 0x418 MovB
	return 10; // 0x419 Return
	
Label_1050:
	var_216_bool = 0; // 0x41a MovB
	return 10; // 0x41b Return
}


func_1276(var_161_string)
{
	var_161_string = "walk"; // 0x4fc MovS
	return 0; // 0x4fd Return
}


func_1278(var_162_string)
{
	var_162_string = "run"; // 0x4fe MovS
	return 0; // 0x4ff Return
}


func_1663(var_61_object)
{
	var_62_object = Obj(); // 0x680 PushV
	var_62_object = var_61_object; // 0x681 Mov
	TaskCall(3); // 0x682 TaskCall
	func_617(var_62_object); // 0x683 Call
	TaskReturn(); // 0x684 TaskReturn
	return 0; // 0x686 Return
}


