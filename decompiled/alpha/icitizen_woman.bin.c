task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0xf PushV
	var_12_int = 0; var_13_object = Obj(); // 0x10 PushV
	var_13_object = var_9_bool; // 0x11 Mov
	func_1350(var_13_object); // 0x12 Call
	var_11_int = var_12_int; // 0x13 Mov
	var_14_int = 0; // 0x15 PushI
	var_15_bool = var_11_int > var_14_int; // 0x16 GT
	if(var_15_bool == 0) goto Label_28; // 0x17 JumpB
	var_16_object = Obj(); // 0x18 PushV
	var_16_object = var_9_bool; // 0x19 Mov
	func_1353(var_16_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_1359(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0xbf PushV
	var_12_int = 0; var_13_object = Obj(); // 0xc0 PushV
	var_13_object = var_9_bool; // 0xc1 Mov
	func_1350(var_13_object); // 0xc2 Call
	var_11_int = var_12_int; // 0xc3 Mov
	var_14_int = 0; // 0xc5 PushI
	var_15_bool = var_11_int > var_14_int; // 0xc6 GT
	if(var_15_bool == 0) goto Label_210; // 0xc7 JumpB
	var_16_int = 1; // 0xc8 PushI
	var_17_bool = var_11_int > var_16_int; // 0xc9 GT
	if(var_17_bool == 0) goto Label_206; // 0xca JumpB
	func_336(var_11_int); // 0xcc Call
	
Label_206:
	var_20_object = Obj(); // 0xce PushV
	var_20_object = var_9_bool; // 0xcf Mov
	func_1353(var_20_object); // 0xd0 Call
	
Label_210:
	return 2; // 0xd2 Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0xd3 PushV
	var_12_int = 0; var_13_object = Obj(); // 0xd4 PushV
	var_13_object = var_9_bool; // 0xd5 Mov
	func_1314(var_12_int, var_13_object); // 0xd6 Call
	var_11_int = var_12_int; // 0xd7 Mov
	var_48_int = 0; // 0xd9 PushI
	var_49_bool = var_11_int > var_48_int; // 0xda GT
	if(var_49_bool == 0) goto Label_230; // 0xdb JumpB
	var_50_int = 1; // 0xdc PushI
	var_51_bool = var_11_int > var_50_int; // 0xdd GT
	if(var_51_bool == 0) goto Label_226; // 0xde JumpB
	func_336(var_11_int); // 0xe0 Call
	
Label_226:
	var_54_object = Obj(); // 0xe2 PushV
	var_54_object = var_9_bool; // 0xe3 Mov
	func_1324(var_54_object); // 0xe4 Call
	
Label_230:
	return 2; // 0xe6 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0xe7 PushV
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0xe8 PushV
	var_14_object = var_9_cvector; // 0xe9 Mov
	var_15_object = var_10_bool; // 0xea Mov
	func_1652(var_13_bool, var_14_object, var_15_object); // 0xeb Call
	if(var_13_bool == 0) goto Label_256; // 0xed JumpB
	var_41_int = 0; var_42_object = Obj(); // 0xee PushV
	var_42_object = var_9_cvector; // 0xef Mov
	func_1332(var_41_int, var_42_object); // 0xf0 Call
	var_12_int = var_41_int; // 0xf1 Mov
	var_77_int = 0; // 0xf3 PushI
	var_78_bool = var_12_int > var_77_int; // 0xf4 GT
	if(var_78_bool == 0) goto Label_256; // 0xf5 JumpB
	var_79_int = 1; // 0xf6 PushI
	var_80_bool = var_12_int > var_79_int; // 0xf7 GT
	if(var_80_bool == 0) goto Label_252; // 0xf8 JumpB
	func_336(var_12_int); // 0xfa Call
	
Label_252:
	var_83_object = Obj(); // 0xfc PushV
	var_83_object = var_9_cvector; // 0xfd Mov
	func_1342(var_83_object); // 0xfe Call
	
Label_256:
	return 2; // 0x100 Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x101 PushV
	var_12_int = 0; var_13_object = Obj(); // 0x102 PushV
	var_13_object = var_9_bool; // 0x103 Mov
	func_1360(var_12_int, var_13_object); // 0x104 Call
	var_11_int = var_12_int; // 0x105 Mov
	var_53_int = 0; // 0x107 PushI
	var_54_bool = var_11_int > var_53_int; // 0x108 GT
	if(var_54_bool == 0) goto Label_276; // 0x109 JumpB
	var_55_int = 1; // 0x10a PushI
	var_56_bool = var_11_int > var_55_int; // 0x10b GT
	if(var_56_bool == 0) goto Label_272; // 0x10c JumpB
	func_336(var_11_int); // 0x10e Call
	
Label_272:
	var_59_object = Obj(); // 0x110 PushV
	var_59_object = var_9_bool; // 0x111 Mov
	func_1373(var_59_object); // 0x112 Call
	
Label_276:
	return 2; // 0x114 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x115 PushV
	var_13_int = 0; var_14_string = ""; var_15_object = Obj(); // 0x116 PushV
	var_14_string = var_10_bool; // 0x117 Mov
	var_15_object = var_9_cvector; // 0x118 Mov
	func_1379(var_15_object); // 0x119 Call
	var_12_int = var_13_int; // 0x11a Mov
	var_16_int = 0; // 0x11c PushI
	var_17_bool = var_12_int > var_16_int; // 0x11d GT
	if(var_17_bool == 0) goto Label_298; // 0x11e JumpB
	var_18_int = 1; // 0x11f PushI
	var_19_bool = var_12_int > var_18_int; // 0x120 GT
	if(var_19_bool == 0) goto Label_293; // 0x121 JumpB
	func_336(var_12_int); // 0x123 Call
	
Label_293:
	var_22_string = ""; var_23_object = Obj(); // 0x125 PushV
	var_22_string = var_10_bool; // 0x126 Mov
	var_23_object = var_9_cvector; // 0x127 Mov
	func_1382(); // 0x128 Call
	
Label_298:
	return 2; // 0x12a Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_bool = var_0_bool; // 0x12c PushT
	if(var_10_bool == 0) goto Label_303; // 0x12d JumpB
	return 0; // 0x12e Return
	
Label_303:
	var_11_object = Obj(); // 0x12f PushV
	var_11_object = var_9_bool; // 0x130 Mov
	func_358(var_9_bool, var_11_object); // 0x131 Call
	return 0; // 0x133 Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_bool = var_0_bool; // 0x135 PushT
	if(var_10_bool == 0) goto Label_312; // 0x136 JumpB
	return 0; // 0x137 Return
	
Label_312:
	var_11_object = Obj(); // 0x138 PushV
	var_11_object = var_9_bool; // 0x139 Mov
	func_358(var_9_bool, var_11_object); // 0x13a Call
	return 0; // 0x13c Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 110; // 0x13e PushI
	var_11_bool = var_9_bool != var_10_int; // 0x13f Neq
	if(var_11_bool == 0) goto Label_322; // 0x140 JumpB
	return 0; // 0x141 Return
	
Label_322:
	var_1_bool = 0; // 0x142 TMovB
	var_12_int = 110; // 0x143 PushI
	KillTimer(var_12_int); // 0x144 Func
	ResetAAS(); // 0x146 Func
	return 0; // 0x148 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_336(var_8_bool); // 0x14a Call
	func_1359(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_336(var_9_bool); // 0x15f Call
	var_12_object = Obj(); // 0x161 PushV
	var_12_object = var_9_bool; // 0x162 Mov
	func_1283(); // 0x163 Call
	return 0; // 0x165 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x1bf PushV
	var_12_int = 0; var_13_object = Obj(); // 0x1c0 PushV
	var_13_object = var_9_bool; // 0x1c1 Mov
	func_1350(var_13_object); // 0x1c2 Call
	var_11_int = var_12_int; // 0x1c3 Mov
	var_14_int = 0; // 0x1c5 PushI
	var_15_bool = var_11_int > var_14_int; // 0x1c6 GT
	if(var_15_bool == 0) goto Label_466; // 0x1c7 JumpB
	var_16_int = 1; // 0x1c8 PushI
	var_17_bool = var_11_int > var_16_int; // 0x1c9 GT
	if(var_17_bool == 0) goto Label_462; // 0x1ca JumpB
	func_555(); // 0x1cc Call
	
Label_462:
	var_20_object = Obj(); // 0x1ce PushV
	var_20_object = var_9_bool; // 0x1cf Mov
	func_1353(var_20_object); // 0x1d0 Call
	
Label_466:
	return 2; // 0x1d2 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x1d3 PushV
	var_12_int = 0; var_13_object = Obj(); // 0x1d4 PushV
	var_13_object = var_9_bool; // 0x1d5 Mov
	func_1314(var_12_int, var_13_object); // 0x1d6 Call
	var_11_int = var_12_int; // 0x1d7 Mov
	var_48_int = 0; // 0x1d9 PushI
	var_49_bool = var_11_int > var_48_int; // 0x1da GT
	if(var_49_bool == 0) goto Label_486; // 0x1db JumpB
	var_50_int = 1; // 0x1dc PushI
	var_51_bool = var_11_int > var_50_int; // 0x1dd GT
	if(var_51_bool == 0) goto Label_482; // 0x1de JumpB
	func_555(); // 0x1e0 Call
	
Label_482:
	var_54_object = Obj(); // 0x1e2 PushV
	var_54_object = var_9_bool; // 0x1e3 Mov
	func_1324(var_54_object); // 0x1e4 Call
	
Label_486:
	return 2; // 0x1e6 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x1e7 PushV
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x1e8 PushV
	var_14_object = var_9_cvector; // 0x1e9 Mov
	var_15_object = var_10_bool; // 0x1ea Mov
	func_1652(var_13_bool, var_14_object, var_15_object); // 0x1eb Call
	if(var_13_bool == 0) goto Label_512; // 0x1ed JumpB
	var_41_int = 0; var_42_object = Obj(); // 0x1ee PushV
	var_42_object = var_9_cvector; // 0x1ef Mov
	func_1332(var_41_int, var_42_object); // 0x1f0 Call
	var_12_int = var_41_int; // 0x1f1 Mov
	var_77_int = 0; // 0x1f3 PushI
	var_78_bool = var_12_int > var_77_int; // 0x1f4 GT
	if(var_78_bool == 0) goto Label_512; // 0x1f5 JumpB
	var_79_int = 1; // 0x1f6 PushI
	var_80_bool = var_12_int > var_79_int; // 0x1f7 GT
	if(var_80_bool == 0) goto Label_508; // 0x1f8 JumpB
	func_555(); // 0x1fa Call
	
Label_508:
	var_83_object = Obj(); // 0x1fc PushV
	var_83_object = var_9_cvector; // 0x1fd Mov
	func_1342(var_83_object); // 0x1fe Call
	
Label_512:
	return 2; // 0x200 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x201 PushV
	var_12_int = 0; var_13_object = Obj(); // 0x202 PushV
	var_13_object = var_9_bool; // 0x203 Mov
	func_1360(var_12_int, var_13_object); // 0x204 Call
	var_11_int = var_12_int; // 0x205 Mov
	var_53_int = 0; // 0x207 PushI
	var_54_bool = var_11_int > var_53_int; // 0x208 GT
	if(var_54_bool == 0) goto Label_532; // 0x209 JumpB
	var_55_int = 1; // 0x20a PushI
	var_56_bool = var_11_int > var_55_int; // 0x20b GT
	if(var_56_bool == 0) goto Label_528; // 0x20c JumpB
	func_555(); // 0x20e Call
	
Label_528:
	var_59_object = Obj(); // 0x210 PushV
	var_59_object = var_9_bool; // 0x211 Mov
	func_1373(var_59_object); // 0x212 Call
	
Label_532:
	return 2; // 0x214 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x215 PushV
	var_13_int = 0; var_14_string = ""; var_15_object = Obj(); // 0x216 PushV
	var_14_string = var_10_bool; // 0x217 Mov
	var_15_object = var_9_cvector; // 0x218 Mov
	func_1379(var_15_object); // 0x219 Call
	var_12_int = var_13_int; // 0x21a Mov
	var_16_int = 0; // 0x21c PushI
	var_17_bool = var_12_int > var_16_int; // 0x21d GT
	if(var_17_bool == 0) goto Label_554; // 0x21e JumpB
	var_18_int = 1; // 0x21f PushI
	var_19_bool = var_12_int > var_18_int; // 0x220 GT
	if(var_19_bool == 0) goto Label_549; // 0x221 JumpB
	func_555(); // 0x223 Call
	
Label_549:
	var_22_string = ""; var_23_object = Obj(); // 0x225 PushV
	var_22_string = var_10_bool; // 0x226 Mov
	var_23_object = var_9_cvector; // 0x227 Mov
	func_1382(); // 0x228 Call
	
Label_554:
	return 2; // 0x22a Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_555(); // 0x238 Call
	var_12_object = Obj(); // 0x23a PushV
	var_12_object = var_9_bool; // 0x23b Mov
	func_1283(); // 0x23c Call
	return 0; // 0x23e Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x23f PushV
	var_14_int = 111; // 0x240 PushI
	var_15_bool = var_9_bool != var_14_int; // 0x241 Neq
	if(var_15_bool == 0) goto Label_580; // 0x242 JumpB
	return 4; // 0x243 Return
	
Label_580:
	var_16_bool = 0; var_17_object = Obj(); // 0x244 PushV
	var_17_object = var_0_bool; // 0x245 MovT
	func_1081(var_16_bool, var_17_object); // 0x246 Call
	var_50_bool = var_16_bool == 0; // 0x248 Not
	if(var_50_bool == 0) goto Label_590; // 0x249 JumpB
	func_555(); // 0x24b Call
	return 4; // 0x24d Return
	
Label_590:
	GetDirection(var_12_cvector); // 0x24e Func
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x250 PushV
	var_54_object = var_0_bool; // 0x251 MovT
	func_1013(var_54_object); // 0x252 Call
	var_13_cvector = var_53_cvector; // 0x253 Mov
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x255 PushV
	var_60_cvector = var_12_cvector; // 0x256 Mov
	var_61_cvector = var_13_cvector; // 0x257 Mov
	func_1236(var_59_float, var_60_cvector, var_61_cvector); // 0x258 Call
	var_83_float = 0.5; // 0x25a PushF
	var_84_bool = var_59_float < var_83_float; // 0x25b LT
	if(var_84_bool == 0) goto Label_609; // 0x25c JumpB
	var_85_object = Obj(); // 0x25d PushV
	var_85_object = var_0_bool; // 0x25e MovT
	func_1172(); // 0x25f Call
	
Label_609:
	return 4; // 0x261 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_555(); // 0x263 Call
	func_1359(); // 0x266 Call
	return 0; // 0x268 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_798(var_8_bool); // 0x286 Call
	func_1359(); // 0x289 Call
	return 0; // 0x28b Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_int, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; // 0x2ea PushV
	var_18_int = 120; // 0x2eb PushI
	var_19_bool = var_9_bool != var_18_int; // 0x2ec Neq
	if(var_19_bool == 0) goto Label_751; // 0x2ed JumpB
	return 8; // 0x2ee Return
	
Label_751:
	var_20_bool = var_0_bool == 0; // 0x2ef NullEq
	if(var_20_bool == 0) goto Label_760; // 0x2f0 JumpB
	Stop(); // 0x2f1 Func
	var_21_int = 1; // 0x2f3 PushI
	KillTimer(var_21_int); // 0x2f4 Func
	var_2_object = 1; // 0x2f6 TMovB
	goto Label_797; // 0x2f7 Jump
	
Label_797:
	return 8; // 0x31d Return
	
Label_760:
	GetDirection(var_14_cvector); // 0x2f8 Func
	var_22_float = 7000.0; // 0x2fa PushF
	FindDirLength(var_15_float, var_14_cvector, var_22_float); // 0x2fb Func
	var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x2fd PushV
	var_24_float = 1.74533; // 0x2fe MovF
	func_652(var_23_cvector, var_24_float); // 0x2ff Call
	var_16_cvector = var_23_cvector; // 0x300 Mov
	var_17_float = var_16_cvector | var_16_cvector; // 0x302 Or2
	var_53_bool = 0; // 0x303 PushV
	var_53_bool = 0; // 0x304 MovB
	var_54_float = 10000.0; // 0x305 PushF
	var_55_bool = var_17_float >= var_54_float; // 0x306 GE
	if(var_55_bool == 0) goto Label_790; // 0x307 JumpB
	var_56_bool = 0; // 0x308 PushV
	var_56_bool = 1; // 0x309 MovB
	var_57_float = var_15_float * var_15_float; // 0x30a Mult
	var_58_float = 2.25; // 0x30b PushF
	var_59_float = var_57_float * var_58_float; // 0x30c Mult
	var_60_bool = var_17_float >= var_59_float; // 0x30d GE
	if(var_60_bool == 0) goto Label_788; // 0x30e JumpB
	var_61_bool = 0; // 0x30f PushV
	func_814(var_56_bool, var_61_bool); // 0x310 Call
	if(var_61_bool == 0) goto Label_788; // 0x312 JumpB
	var_56_bool = 0; // 0x313 MovB
	
Label_788:
	if(var_56_bool == 0) goto Label_790; // 0x314 JumpB
	var_53_bool = 1; // 0x315 MovB
	
Label_790:
	if(var_53_bool == 0) goto Label_797; // 0x316 JumpB
	Stop(); // 0x317 Func
	var_81_cvector = CVector(0,0,0); // 0x319 PushV
	func_1008(var_81_cvector); // 0x31a Call
	var_1_bool = var_81_cvector + var_16_cvector; // 0x31c Add2
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool)
{
	func_798(var_9_bool); // 0x327 Call
	var_11_object = Obj(); // 0x329 PushV
	var_11_object = var_9_bool; // 0x32a Mov
	func_1283(); // 0x32b Call
	return 0; // 0x32d Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_int)
{
	var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; // 0x39c PushV
	var_18_int = 120; // 0x39d PushI
	var_19_bool = var_9_int != var_18_int; // 0x39e Neq
	if(var_19_bool == 0) goto Label_929; // 0x39f JumpB
	return 8; // 0x3a0 Return
	
Label_929:
	var_20_bool = var_0_bool == 0; // 0x3a1 NullEq
	if(var_20_bool == 0) goto Label_938; // 0x3a2 JumpB
	Stop(); // 0x3a3 Func
	var_21_int = 1; // 0x3a5 PushI
	KillTimer(var_21_int); // 0x3a6 Func
	var_2_object = 1; // 0x3a8 TMovB
	goto Label_975; // 0x3a9 Jump
	
Label_975:
	return 8; // 0x3cf Return
	
Label_938:
	GetDirection(var_14_cvector); // 0x3aa Func
	var_22_float = 7000.0; // 0x3ac PushF
	FindDirLength(var_15_float, var_14_cvector, var_22_float); // 0x3ad Func
	var_23_cvector = CVector(0,0,0); var_24_float = 0; // 0x3af PushV
	var_24_float = 1.74533; // 0x3b0 MovF
	func_830(var_23_cvector, var_24_float); // 0x3b1 Call
	var_16_cvector = var_23_cvector; // 0x3b2 Mov
	var_17_float = var_16_cvector | var_16_cvector; // 0x3b4 Or2
	var_53_bool = 0; // 0x3b5 PushV
	var_53_bool = 0; // 0x3b6 MovB
	var_54_float = 10000.0; // 0x3b7 PushF
	var_55_bool = var_17_float >= var_54_float; // 0x3b8 GE
	if(var_55_bool == 0) goto Label_968; // 0x3b9 JumpB
	var_56_bool = 0; // 0x3ba PushV
	var_56_bool = 1; // 0x3bb MovB
	var_57_float = var_15_float * var_15_float; // 0x3bc Mult
	var_58_float = 2.25; // 0x3bd PushF
	var_59_float = var_57_float * var_58_float; // 0x3be Mult
	var_60_bool = var_17_float >= var_59_float; // 0x3bf GE
	if(var_60_bool == 0) goto Label_966; // 0x3c0 JumpB
	var_61_bool = 0; // 0x3c1 PushV
	func_992(var_56_bool, var_61_bool); // 0x3c2 Call
	if(var_61_bool == 0) goto Label_966; // 0x3c4 JumpB
	var_56_bool = 0; // 0x3c5 MovB
	
Label_966:
	if(var_56_bool == 0) goto Label_968; // 0x3c6 JumpB
	var_53_bool = 1; // 0x3c7 MovB
	
Label_968:
	if(var_53_bool == 0) goto Label_975; // 0x3c8 JumpB
	Stop(); // 0x3c9 Func
	var_81_cvector = CVector(0,0,0); // 0x3cb PushV
	func_1008(var_81_cvector); // 0x3cc Call
	var_1_bool = var_81_cvector + var_16_cvector; // 0x3ce Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_976(var_9_object); // 0x3d9 Call
	var_11_object = Obj(); // 0x3db PushV
	var_11_object = var_9_object; // 0x3dc Mov
	func_1283(); // 0x3dd Call
	return 0; // 0x3df Return
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x4f6 PushV
	var_13_string = "health"; // 0x4f7 PushS
	var_14_bool = var_10_string == var_13_string; // 0x4f8 Eq
	if(var_14_bool == 0) goto Label_1282; // 0x4f9 JumpB
	var_15_string = "health"; // 0x4fa PushS
	GetProperty(var_15_string, var_12_float); // 0x4fb Func
	var_16_int = 0; // 0x4fd PushI
	var_17_bool = var_12_float <= var_16_int; // 0x4fe LE
	if(var_17_bool == 0) goto Label_1282; // 0x4ff JumpB
	SignalDeath(var_9_object); // 0x500 Func
	
Label_1282:
	return 2; // 0x502 Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x504 PushV
	var_10_object = var_9_object; // 0x505 Mov
	func_1262(var_10_object); // 0x506 Call
	return 0; // 0x508 Return
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x50a PushV
	var_13_object = var_9_object; // 0x50b Mov
	var_14_int = var_10_int; // 0x50c Mov
	var_15_float = var_11_float; // 0x50d Mov
	func_1105(var_14_int, var_15_float); // 0x50e Call
	return 0; // 0x510 Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0x94 PushV
	var_0_bool = 0; // 0x95 TMovB
	var_13_bool = 1; // 0x96 PushB
	SensePlayerOnly(var_13_bool); // 0x97 Func
	func_1601(); // 0x9a Call
	func_182(); // 0x9d Call
	
Label_159:
	var_136_int = 2; // 0x9f PushI
	irand(var_11_int, var_136_int); // 0xa0 Func
	var_137_int = 0; // 0xa2 PushI
	var_138_bool = var_11_int == var_137_int; // 0xa3 Eq
	if(var_138_bool == 0) goto Label_173; // 0xa4 JumpB
	var_0_bool = 1; // 0xa5 TMovB
	func_1620(); // 0xa7 Call
	var_0_bool = 0; // 0xa9 TMovB
	ResetAAS(); // 0xaa Func
	goto Label_180; // 0xac Jump
	
Label_180:
	goto Label_159; // 0xb4 Jump
	
Label_173:
	var_156_int = 4; // 0xad PushI
	irand(var_12_int, var_156_int); // 0xae Func
	var_157_int = 1; // 0xb0 PushI
	var_158_int = var_12_int + var_157_int; // 0xb1 Add
	Sleep(var_158_int); // 0xb2 Func
}


func_0(var_11_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_12_object = Obj(); // 0x2 PushV
	var_12_object = var_11_object; // 0x3 Mov
	func_33(var_12_object); // 0x4 Call
	var_62_object = Obj(); // 0x6 PushV
	var_62_object = var_11_object; // 0x7 Mov
	func_1700(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1028(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x404 PushV
	var_43_string = "HasProperty"; // 0x405 PushS
	var_44_int = 2; // 0x406 PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x407 FuncExist
	var_46_bool = var_45_bool == 0; // 0x408 Not
	if(var_46_bool == 0) goto Label_1036; // 0x409 JumpB
	var_38_bool = 0; // 0x40a MovB
	return 2; // 0x40b Return
	
Label_1036:
	HasProperty(var_40_string, var_42_bool); // 0x40c ObjFunc
	var_38_bool = var_42_bool; // 0x40e Mov
	return 2; // 0x40f Return
}


func_1414(var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x586 PushV
	var_20_bool = var_15_bool; // 0x587 Push
	if(var_20_bool == 0) goto Label_1503; // 0x588 JumpB
	var_21_int = 0; var_22_int = 0; // 0x589 PushV
	var_21_int = 0; // 0x58a MovI
	var_23_int = 100; // 0x58b PushI
	var_24_int = 0; // 0x58c PushV
	func_1253(var_24_int); // 0x58d Call
	var_30_int = 100; // 0x58f PushI
	var_31_float = var_24_int * var_30_int; // 0x590 Mult
	var_22_int = var_23_int + var_31_float; // 0x591 Add2
	func_1384(var_21_int, var_22_int); // 0x592 Call
	var_50_int = 9; // 0x594 PushI
	irand(var_18_int, var_50_int); // 0x595 Func
	var_51_int = 0; // 0x597 PushI
	var_52_bool = var_18_int == var_51_int; // 0x598 Eq
	if(var_52_bool == 0) goto Label_1443; // 0x599 JumpB
	var_53_int = 0; var_54_string = ""; // 0x59a PushV
	var_54_string = "lemon"; // 0x59b MovS
	func_1589(var_53_int, var_54_string); // 0x59c Call
	var_57_int = 0; // 0x59e PushI
	var_58_int = 1; // 0x59f PushI
	AddItem(var_19_bool, var_53_int, var_57_int, var_58_int); // 0x5a0 Func
	goto Label_1502; // 0x5a2 Jump
	
Label_1502:
	goto Label_1588; // 0x5de Jump
	
Label_1588:
	return 4; // 0x634 Return
	
Label_1443:
	var_59_int = 1; // 0x5a3 PushI
	var_60_bool = var_18_int == var_59_int; // 0x5a4 Eq
	if(var_60_bool == 0) goto Label_1455; // 0x5a5 JumpB
	var_61_int = 0; var_62_string = ""; // 0x5a6 PushV
	var_62_string = "rusk"; // 0x5a7 MovS
	func_1589(var_61_int, var_62_string); // 0x5a8 Call
	var_63_int = 0; // 0x5aa PushI
	var_64_int = 1; // 0x5ab PushI
	AddItem(var_19_bool, var_61_int, var_63_int, var_64_int); // 0x5ac Func
	goto Label_1502; // 0x5ae Jump
	
Label_1455:
	var_65_int = 2; // 0x5af PushI
	var_66_bool = var_18_int == var_65_int; // 0x5b0 Eq
	if(var_66_bool == 0) goto Label_1467; // 0x5b1 JumpB
	var_67_int = 0; var_68_string = ""; // 0x5b2 PushV
	var_68_string = "hook"; // 0x5b3 MovS
	func_1589(var_67_int, var_68_string); // 0x5b4 Call
	var_69_int = 0; // 0x5b6 PushI
	var_70_int = 1; // 0x5b7 PushI
	AddItem(var_19_bool, var_67_int, var_69_int, var_70_int); // 0x5b8 Func
	goto Label_1502; // 0x5ba Jump
	
Label_1467:
	var_71_int = 4; // 0x5bb PushI
	var_72_bool = var_18_int == var_71_int; // 0x5bc Eq
	if(var_72_bool == 0) goto Label_1479; // 0x5bd JumpB
	var_73_int = 0; var_74_string = ""; // 0x5be PushV
	var_74_string = "syringe"; // 0x5bf MovS
	func_1589(var_73_int, var_74_string); // 0x5c0 Call
	var_75_int = 0; // 0x5c2 PushI
	var_76_int = 1; // 0x5c3 PushI
	AddItem(var_19_bool, var_73_int, var_75_int, var_76_int); // 0x5c4 Func
	goto Label_1502; // 0x5c6 Jump
	
Label_1479:
	var_77_int = 5; // 0x5c7 PushI
	var_78_bool = var_18_int == var_77_int; // 0x5c8 Eq
	if(var_78_bool == 0) goto Label_1491; // 0x5c9 JumpB
	var_79_int = 0; var_80_string = ""; // 0x5ca PushV
	var_80_string = "watch"; // 0x5cb MovS
	func_1589(var_79_int, var_80_string); // 0x5cc Call
	var_81_int = 0; // 0x5ce PushI
	var_82_int = 1; // 0x5cf PushI
	AddItem(var_19_bool, var_79_int, var_81_int, var_82_int); // 0x5d0 Func
	goto Label_1502; // 0x5d2 Jump
	
Label_1491:
	var_83_int = 6; // 0x5d3 PushI
	var_84_bool = var_18_int == var_83_int; // 0x5d4 Eq
	if(var_84_bool == 0) goto Label_1502; // 0x5d5 JumpB
	var_85_int = 0; var_86_string = ""; // 0x5d6 PushV
	var_86_string = "razor"; // 0x5d7 MovS
	func_1589(var_85_int, var_86_string); // 0x5d8 Call
	var_87_int = 0; // 0x5da PushI
	var_88_int = 1; // 0x5db PushI
	AddItem(var_19_bool, var_85_int, var_87_int, var_88_int); // 0x5dc Func
	
Label_1503:
	var_89_int = 0; var_90_int = 0; // 0x5df PushV
	var_89_int = 0; // 0x5e0 MovI
	var_91_int = 50; // 0x5e1 PushI
	var_92_int = 0; // 0x5e2 PushV
	func_1253(var_92_int); // 0x5e3 Call
	var_93_int = 50; // 0x5e5 PushI
	var_94_float = var_92_int * var_93_int; // 0x5e6 Mult
	var_90_int = var_91_int + var_94_float; // 0x5e7 Add2
	func_1384(var_89_int, var_90_int); // 0x5e8 Call
	var_95_int = 8; // 0x5ea PushI
	irand(var_18_int, var_95_int); // 0x5eb Func
	var_96_int = 0; // 0x5ed PushI
	var_97_bool = var_18_int == var_96_int; // 0x5ee Eq
	if(var_97_bool == 0) goto Label_1529; // 0x5ef JumpB
	var_98_int = 0; var_99_string = ""; // 0x5f0 PushV
	var_99_string = "beads"; // 0x5f1 MovS
	func_1589(var_98_int, var_99_string); // 0x5f2 Call
	var_100_int = 0; // 0x5f4 PushI
	var_101_int = 1; // 0x5f5 PushI
	AddItem(var_19_bool, var_98_int, var_100_int, var_101_int); // 0x5f6 Func
	goto Label_1588; // 0x5f8 Jump
	
Label_1529:
	var_102_int = 1; // 0x5f9 PushI
	var_103_bool = var_18_int == var_102_int; // 0x5fa Eq
	if(var_103_bool == 0) goto Label_1541; // 0x5fb JumpB
	var_104_int = 0; var_105_string = ""; // 0x5fc PushV
	var_105_string = "bracelet"; // 0x5fd MovS
	func_1589(var_104_int, var_105_string); // 0x5fe Call
	var_106_int = 0; // 0x600 PushI
	var_107_int = 1; // 0x601 PushI
	AddItem(var_19_bool, var_104_int, var_106_int, var_107_int); // 0x602 Func
	goto Label_1588; // 0x604 Jump
	
Label_1541:
	var_108_int = 2; // 0x605 PushI
	var_109_bool = var_18_int == var_108_int; // 0x606 Eq
	if(var_109_bool == 0) goto Label_1553; // 0x607 JumpB
	var_110_int = 0; var_111_string = ""; // 0x608 PushV
	var_111_string = "ear_ring"; // 0x609 MovS
	func_1589(var_110_int, var_111_string); // 0x60a Call
	var_112_int = 0; // 0x60c PushI
	var_113_int = 1; // 0x60d PushI
	AddItem(var_19_bool, var_110_int, var_112_int, var_113_int); // 0x60e Func
	goto Label_1588; // 0x610 Jump
	
Label_1553:
	var_114_int = 3; // 0x611 PushI
	var_115_bool = var_18_int == var_114_int; // 0x612 Eq
	if(var_115_bool == 0) goto Label_1565; // 0x613 JumpB
	var_116_int = 0; var_117_string = ""; // 0x614 PushV
	var_117_string = "gold_ring"; // 0x615 MovS
	func_1589(var_116_int, var_117_string); // 0x616 Call
	var_118_int = 0; // 0x618 PushI
	var_119_int = 1; // 0x619 PushI
	AddItem(var_19_bool, var_116_int, var_118_int, var_119_int); // 0x61a Func
	goto Label_1588; // 0x61c Jump
	
Label_1565:
	var_120_int = 4; // 0x61d PushI
	var_121_bool = var_18_int == var_120_int; // 0x61e Eq
	if(var_121_bool == 0) goto Label_1577; // 0x61f JumpB
	var_122_int = 0; var_123_string = ""; // 0x620 PushV
	var_123_string = "silver_ring"; // 0x621 MovS
	func_1589(var_122_int, var_123_string); // 0x622 Call
	var_124_int = 0; // 0x624 PushI
	var_125_int = 1; // 0x625 PushI
	AddItem(var_19_bool, var_122_int, var_124_int, var_125_int); // 0x626 Func
	goto Label_1588; // 0x628 Jump
	
Label_1577:
	var_126_int = 5; // 0x629 PushI
	var_127_bool = var_18_int == var_126_int; // 0x62a Eq
	if(var_127_bool == 0) goto Label_1588; // 0x62b JumpB
	var_128_int = 0; var_129_string = ""; // 0x62c PushV
	var_129_string = "flower"; // 0x62d MovS
	func_1589(var_128_int, var_129_string); // 0x62e Call
	var_130_int = 0; // 0x630 PushI
	var_131_int = 1; // 0x631 PushI
	AddItem(var_19_bool, var_128_int, var_130_int, var_131_int); // 0x632 Func
}


func_391(var_0_bool, var_28_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x187 PushV
	var_0_bool = var_28_object; // 0x188 TMov
	func_442(var_35_bool); // 0x18a Call
	GetDirection(var_33_cvector); // 0x18c Func
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x18e PushV
	var_44_object = var_0_bool; // 0x18f MovT
	func_1013(var_44_object); // 0x190 Call
	var_34_cvector = var_43_cvector; // 0x191 Mov
	var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x193 PushV
	var_50_cvector = var_33_cvector; // 0x194 Mov
	var_51_cvector = var_34_cvector; // 0x195 Mov
	func_1236(var_49_float, var_50_cvector, var_51_cvector); // 0x196 Call
	var_73_int = 0; // 0x198 PushI
	var_74_bool = var_49_float < var_73_int; // 0x199 LT
	if(var_74_bool == 0) goto Label_417; // 0x19a JumpB
	var_75_object = Obj(); // 0x19b PushV
	var_75_object = var_0_bool; // 0x19c MovT
	func_1172(); // 0x19d Call
	var_35_bool = 1; // 0x19f MovB
	goto Label_420; // 0x1a0 Jump
	
Label_420:
	var_84_bool = var_35_bool; // 0x1a4 Push
	if(var_84_bool == 0) goto Label_436; // 0x1a5 JumpB
	var_85_object = Obj(); // 0x1a6 PushV
	var_85_object = var_0_bool; // 0x1a7 MovT
	func_1172(); // 0x1a8 Call
	var_86_int = 111; // 0x1aa PushI
	var_87_float = 0.5; // 0x1ab PushF
	SetTimer(var_86_int, var_87_float); // 0x1ac Func
	var_88_float = 5.0; // 0x1ae PushF
	Sleep(var_88_float); // 0x1af Func
	var_89_int = 111; // 0x1b1 PushI
	KillTimer(var_89_int); // 0x1b2 Func
	
Label_436:
	StopAsync(); // 0x1b4 Func
	var_90_string = "head"; // 0x1b6 PushS
	UnlookAsync(var_90_string); // 0x1b7 Func
	return 6; // 0x1b9 Return
	
Label_417:
	var_91_float = 1.5; // 0x1a1 PushF
	Sleep(var_91_float, var_35_bool); // 0x1a2 Func
}


func_652(var_23_cvector, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0x28c PushV
	GetPosition(var_31_cvector); // 0x28d Func
	GetPosition(var_32_cvector); // 0x28f TObjFunc
	GetDirection(var_33_cvector); // 0x291 Func
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x293 PushV
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x294 PushV
	var_40_cvector = var_31_cvector - var_32_cvector; // 0x295 Sub2
	func_1199(var_39_cvector, var_40_cvector); // 0x296 Call
	var_46_float = 0.75; // 0x298 PushF
	var_47_float = var_33_cvector * var_46_float; // 0x299 Mult
	var_38_cvector = var_39_cvector + var_47_float; // 0x29a Add2
	func_1199(var_37_cvector, var_38_cvector); // 0x29b Call
	var_34_cvector = var_37_cvector; // 0x29c Mov
	var_48_int = 32; // 0x29e PushI
	var_49_float = 7000.0; // 0x29f PushF
	FindLongestDir(var_35_cvector, var_36_float, var_34_cvector, var_24_float, var_48_int, var_49_float); // 0x2a0 Func
	var_50_int = 100; // 0x2a2 PushI
	var_36_float = var_36_float - var_50_int; // 0x2a3 Sub2
	var_51_int = 0; // 0x2a4 PushI
	var_52_bool = var_36_float < var_51_int; // 0x2a5 LT
	if(var_52_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_36_float = 0; // 0x2a7 MovI
	
Label_680:
	var_23_cvector = var_35_cvector * var_36_float; // 0x2a8 Mult2
	return 12; // 0x2a9 Return
}


func_1040(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x410 PushV
	IsDead(var_34_bool); // 0x411 ObjFunc
	var_31_bool = var_34_bool; // 0x413 Mov
	return 2; // 0x414 Return
}


func_1297(var_18_int)
{
	var_20_bool = 0; // 0x512 PushV
	func_1650(var_20_bool); // 0x513 Call
	if(var_20_bool == 0) goto Label_1304; // 0x515 JumpB
	var_18_int = 2; // 0x516 MovI
	goto Label_1305; // 0x517 Jump
	
Label_1305:
	return 0; // 0x519 Return
	
Label_1304:
	var_18_int = 0; // 0x518 MovI
}


func_1172()
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x494 PushV
	GetPosition(var_89_cvector); // 0x495 ObjFunc
	GetPosition(var_90_cvector); // 0x497 Func
	var_91_cvector = var_89_cvector - var_90_cvector; // 0x499 Sub2
	var_92_float = GetByIndex(var_91_cvector, 0); // 0x49a PushE
	var_93_float = GetByIndex(var_91_cvector, 2); // 0x49b PushE
	RotateAsync(var_92_float, var_93_float); // 0x49c Func
	return 6; // 0x49e Return
}


func_1045(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x415 PushV
	var_26_bool = var_21_object == 0; // 0x416 NullEq
	if(var_26_bool == 0) goto Label_1050; // 0x417 JumpB
	var_20_bool = 0; // 0x418 MovB
	return 4; // 0x419 Return
	
Label_1050:
	var_27_bool = 0; // 0x41a PushV
	var_27_bool = 0; // 0x41b MovB
	var_28_string = "IsDead"; // 0x41c PushS
	var_29_int = 1; // 0x41d PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x41e FuncExist
	if(var_30_bool == 0) goto Label_1062; // 0x41f JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x420 PushV
	var_32_object = var_21_object; // 0x421 Mov
	func_1040(var_32_object); // 0x422 Call
	if(var_31_bool == 0) goto Label_1062; // 0x424 JumpB
	var_27_bool = 1; // 0x425 MovB
	
Label_1062:
	if(var_27_bool == 0) goto Label_1065; // 0x426 JumpB
	var_20_bool = 0; // 0x427 MovB
	return 4; // 0x428 Return
	
Label_1065:
	GetScene(var_24_object); // 0x429 Func
	var_35_bool = var_24_object == 0; // 0x42b NullEq
	if(var_35_bool == 0) goto Label_1071; // 0x42c JumpB
	var_20_bool = 0; // 0x42d MovB
	return 4; // 0x42e Return
	
Label_1071:
	GetScene(var_25_object); // 0x42f ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x431 Neq
	if(var_36_bool == 0) goto Label_1077; // 0x432 JumpB
	var_20_bool = 0; // 0x433 MovB
	return 4; // 0x434 Return
	
Label_1077:
	var_20_bool = 1; // 0x435 MovB
	return 4; // 0x436 Return
}


func_1306(var_27_object)
{
	var_28_object = Obj(); // 0x51b PushV
	var_28_object = var_27_object; // 0x51c Mov
	TaskCall(2); // 0x51d TaskCall
	func_391(var_29_object, var_28_object); // 0x51e Call
	TaskReturn(); // 0x51f TaskReturn
	return 0; // 0x521 Return
}


func_798(var_2_object)
{
	Stop(); // 0x31e Func
	var_10_int = 120; // 0x320 PushI
	KillTimer(var_10_int); // 0x321 Func
	var_2_object = 1; // 0x323 TMovB
	return 0; // 0x324 Return
}


func_1183(var_132_bool)
{
	var_133_bool = 0; var_134_bool = 0; // 0x49f PushV
	IsLoaded(var_134_bool); // 0x4a0 Func
	var_132_bool = var_134_bool; // 0x4a2 Mov
	return 2; // 0x4a3 Return
}


func_33(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); // 0x21 PushV
	var_33_bool = var_12_object == 0; // 0x22 NullEq
	if(var_33_bool == 0) goto Label_41; // 0x23 JumpB
	var_34_string = ""; // 0x24 PushV
	var_34_string = "fdie"; // 0x25 MovS
	func_120(var_34_string); // 0x26 Call
	goto Label_119; // 0x28 Jump
	
Label_119:
	return 20; // 0x77 Return
	
Label_41:
	GetPosition(var_23_cvector); // 0x29 ObjFunc
	GetPosition(var_24_cvector); // 0x2b Func
	GetDirection(var_25_cvector); // 0x2d Func
	var_26_cvector = var_24_cvector - var_23_cvector; // 0x2f Sub2
	var_37_float = GetByIndex(var_26_cvector, 0); // 0x30 PushE
	var_38_float = GetByIndex(var_25_cvector, 0); // 0x31 PushE
	var_39_float = var_37_float * var_38_float; // 0x32 Mult
	var_40_float = GetByIndex(var_26_cvector, 2); // 0x33 PushE
	var_41_float = GetByIndex(var_25_cvector, 2); // 0x34 PushE
	var_42_float = var_40_float * var_41_float; // 0x35 Mult
	var_43_int = var_39_float + var_42_float; // 0x36 Add
	var_44_int = 0; // 0x37 PushI
	var_45_bool = var_43_int >= var_44_int; // 0x38 GE
	if(var_45_bool == 0) goto Label_60; // 0x39 JumpB
	var_27_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_28_object = var_12_object; // 0x45 Mov
	var_46_string = "GetScriptProperty"; // 0x46 PushS
	var_47_int = 2; // 0x47 PushI
	var_48_bool = IsFuncExist(var_12_object, var_46_string, var_47_int); // 0x48 FuncExist
	if(var_48_bool == 0) goto Label_85; // 0x49 JumpB
	var_49_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_29_bool, var_49_string); // 0x4b ObjFunc
	var_50_bool = var_29_bool; // 0x4d Push
	if(var_50_bool == 0) goto Label_85; // 0x4e JumpB
	var_51_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_28_object, var_51_string); // 0x50 ObjFunc
	var_52_bool = var_28_object == 0; // 0x52 NullEq
	if(var_52_bool == 0) goto Label_85; // 0x53 JumpB
	var_28_object = var_12_object; // 0x54 Mov
	
Label_85:
	var_53_string = "@GetEyesHeight"; // 0x55 PushS
	var_54_int = 1; // 0x56 PushI
	var_55_bool = IsFuncExist(var_28_object, var_53_string, var_54_int); // 0x57 FuncExist
	if(var_55_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_31_float); // 0x59 ObjFunc
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_56_float = GetByIndex(var_32_cvector, 1); // 0x5c PushE
	var_56_float = var_31_float; // 0x5d Mov
	SetByIndex(var_32_cvector, 1) = var_56_float; // 0x5e PopE
	var_57_string = "head"; // 0x5f PushS
	LookAsync(var_12_object, var_57_string, var_32_cvector); // 0x60 Func
	var_30_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_58_string = "all"; // 0x65 PushS
	PlayAnimation(var_58_string, var_27_string); // 0x66 Func
	WaitForAnimEnd(); // 0x68 Func
	var_59_bool = var_30_bool; // 0x6a Push
	if(var_59_bool == 0) goto Label_113; // 0x6b JumpB
	StopAsync(); // 0x6c Func
	var_60_string = "head"; // 0x6e PushS
	UnlookAsync(var_60_string); // 0x6f Func
	
Label_113:
	var_61_string = "all"; // 0x71 PushS
	LockAnimationEnd(var_61_string, var_27_string); // 0x72 Func
	RemoveEnvelope(); // 0x74 Func
	var_28_object = 0; // 0x76 SetNull
	
Label_100:
	var_30_bool = 0; // 0x64 MovB
	
Label_60:
	var_27_string = "bdie"; // 0x3c MovS
}


func_1314(var_17_int, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x523 PushV
	var_20_object = var_18_object; // 0x524 Mov
	func_1081(var_19_bool, var_20_object); // 0x525 Call
	if(var_19_bool == 0) goto Label_1322; // 0x527 JumpB
	var_17_int = 2; // 0x528 MovI
	goto Label_1323; // 0x529 Jump
	
Label_1323:
	return 0; // 0x52b Return
	
Label_1322:
	var_17_int = 0; // 0x52a MovI
}


func_1700()
{
	var_63_bool = GlobalVars[1]; // 0x6a5 PushGE
	var_63_bool = 1; // 0x6a6 MovB
	GlobalVars[1] = var_63_bool; // 0x6a7 PopGE
	var_64_int = 50; // 0x6a8 PushI
	var_65_int = 40; // 0x6a9 PushI
	SetRTEnvelope(var_64_int, var_65_int); // 0x6aa Func
	return 0; // 0x6ac Return
}


func_1188(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x4a4 PushV
	GetEyesHeight(var_39_float); // 0x4a5 ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x4a7 MovV
	var_41_float = GetByIndex(var_40_cvector, 1); // 0x4a8 PushE
	var_41_float = var_39_float; // 0x4a9 Mov
	SetByIndex(var_40_cvector, 1) = var_41_float; // 0x4aa PopE
	var_42_string = "head"; // 0x4ab PushS
	LookAsync(var_36_object, var_42_string, var_40_cvector); // 0x4ac Func
	return 4; // 0x4ae Return
}


func_682(var_0_bool, var_1_bool, var_2_object, var_71_object)
{
	var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; // 0x2aa PushV
	var_0_bool = var_71_object; // 0x2ab TMov
	var_82_cvector = CVector(0,0,0); var_83_float = 0; // 0x2ac PushV
	var_83_float = 1.74533; // 0x2ad MovF
	func_652(var_82_cvector, var_83_float); // 0x2ae Call
	var_77_cvector = var_82_cvector; // 0x2af Mov
	var_78_float = var_77_cvector | var_77_cvector; // 0x2b1 Or2
	var_112_float = 10000.0; // 0x2b2 PushF
	var_113_bool = var_78_float < var_112_float; // 0x2b3 LT
	if(var_113_bool == 0) goto Label_702; // 0x2b4 JumpB
	var_114_string = "Can't retreat, distance: "; // 0x2b5 PushS
	var_115_float = sqrt(var_78_float); // 0x2b6 Sqrt
	var_116_int = var_114_string + var_115_float; // 0x2b7 Add
	Trace(var_116_int); // 0x2b8 Func
	var_117_float = 0.5; // 0x2ba PushF
	Sleep(var_117_float); // 0x2bb Func
	return 10; // 0x2bd Return
	
Label_702:
	var_118_float = GetByIndex(var_77_cvector, 0); // 0x2be PushE
	var_119_float = GetByIndex(var_77_cvector, 2); // 0x2bf PushE
	Rotate(var_118_float, var_119_float); // 0x2c0 Func
	var_120_cvector = CVector(0,0,0); // 0x2c2 PushV
	func_1008(var_120_cvector); // 0x2c3 Call
	var_1_bool = var_120_cvector + var_77_cvector; // 0x2c5 Add2
	var_123_int = 120; // 0x2c6 PushI
	var_124_float = 0.5; // 0x2c7 PushF
	SetTimer(var_123_int, var_124_float); // 0x2c8 Func
	var_2_object = 0; // 0x2ca TMovB
	
Label_715:
	var_125_int = 1; // 0x2cb PushI
	MovePoint(var_125_int, var_125_int, var_79_bool); // 0x2cc Func
	var_126_bool = var_79_bool; // 0x2ce Push
	if(var_126_bool == 0) goto Label_743; // 0x2cf JumpB
	var_127_bool = var_0_bool == 0; // 0x2d0 NullEq
	if(var_127_bool == 0) goto Label_724; // 0x2d1 JumpB
	goto Label_745; // 0x2d2 Jump
	
Label_745:
	return 10; // 0x2e9 Return
	
Label_724:
	var_128_cvector = CVector(0,0,0); var_129_float = 0; // 0x2d4 PushV
	var_129_float = 2.61799; // 0x2d5 MovF
	func_652(var_128_cvector, var_129_float); // 0x2d6 Call
	var_80_cvector = var_128_cvector; // 0x2d7 Mov
	var_81_float = var_80_cvector | var_80_cvector; // 0x2d9 Or2
	var_130_float = 10000.0; // 0x2da PushF
	var_131_bool = var_81_float >= var_130_float; // 0x2db GE
	if(var_131_bool == 0) goto Label_742; // 0x2dc JumpB
	var_132_cvector = CVector(0,0,0); // 0x2dd PushV
	func_1008(var_132_cvector); // 0x2de Call
	var_1_bool = var_132_cvector + var_80_cvector; // 0x2e0 Add2
	var_133_int = 120; // 0x2e1 PushI
	var_134_float = 0.5; // 0x2e2 PushF
	SetTimer(var_133_int, var_134_float); // 0x2e3 Func
	goto Label_743; // 0x2e5 Jump
	
Label_743:
	var_135_bool = var_2_object == 0; // 0x2e7 Not
	if(var_135_bool == 0) goto Label_715; // 0x2e8 JumpB
	
Label_742:
	goto Label_745; // 0x2e6 Jump
}


func_555()
{
	StopGroup0(); // 0x22b Func
	StopAsync(); // 0x22d Func
	var_9_string = "head"; // 0x22f PushS
	UnlookAsync(var_9_string); // 0x230 Func
	var_10_int = 111; // 0x232 PushI
	KillTimer(var_10_int); // 0x233 Func
	return 0; // 0x235 Return
}


func_1324(var_60_object)
{
	var_61_object = Obj(); // 0x52d PushV
	var_61_object = var_60_object; // 0x52e Mov
	TaskCall(3); // 0x52f TaskCall
	func_617(var_61_object); // 0x530 Call
	TaskReturn(); // 0x531 TaskReturn
	return 0; // 0x533 Return
}


func_814(var_0_bool, var_61_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x32e PushV
	GetDirection(var_64_cvector); // 0x32f Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x331 PushV
	var_67_object = var_0_bool; // 0x332 MovT
	func_1013(var_67_object); // 0x333 Call
	var_65_cvector = var_66_cvector; // 0x334 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x336 PushV
	var_73_cvector = var_64_cvector; // 0x337 Mov
	var_74_cvector = var_65_cvector; // 0x338 Mov
	func_1209(var_72_float, var_73_cvector, var_74_cvector); // 0x339 Call
	var_80_float = -0.34202; // 0x33b PushF
	var_61_bool = var_72_float >= var_80_float; // 0x33c GE2
	return 4; // 0x33d Return
}


func_1199(var_39_cvector, var_40_cvector)
{
	var_41_float = 0; var_42_float = 0; // 0x4af PushV
	var_43_int = var_40_cvector | var_40_cvector; // 0x4b0 Or
	var_42_float = sqrt(var_43_int); // 0x4b1 Sqrt2
	var_44_float = 0.0; // 0x4b2 PushF
	var_45_bool = var_42_float < var_44_float; // 0x4b3 LT
	if(var_45_bool == 0) goto Label_1207; // 0x4b4 JumpB
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x4b5 MovV
	return 2; // 0x4b6 Return
	
Label_1207:
	var_39_cvector = var_40_cvector / var_40_cvector; // 0x4b7 Div2
	return 2; // 0x4b8 Return
}


func_1332(var_41_int, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x535 PushV
	var_44_object = var_42_object; // 0x536 Mov
	func_1081(var_43_bool, var_44_object); // 0x537 Call
	if(var_43_bool == 0) goto Label_1340; // 0x539 JumpB
	var_41_int = 2; // 0x53a MovI
	goto Label_1341; // 0x53b Jump
	
Label_1341:
	return 0; // 0x53d Return
	
Label_1340:
	var_41_int = 0; // 0x53c MovI
}


func_1589(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0; // 0x635 PushV
	GetInvItemByName(var_56_int, var_54_string); // 0x636 Func
	var_53_int = var_56_int; // 0x638 Mov
	return 2; // 0x639 Return
}


func_182()
{
	var_132_bool = 0; // 0xb6 PushV
	func_1183(var_132_bool); // 0xb7 Call
	var_135_bool = var_132_bool == 0; // 0xb9 Not
	if(var_135_bool == 0) goto Label_190; // 0xba JumpB
	func_1359(); // 0xbc Call
	
Label_190:
	return 0; // 0xbe Return
}


func_1081(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x439 PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x43a PushV
	var_21_object = var_17_object; // 0x43b Mov
	func_1045(var_20_bool, var_21_object); // 0x43c Call
	var_37_bool = var_20_bool == 0; // 0x43e Not
	if(var_37_bool == 0) goto Label_1090; // 0x43f JumpB
	var_16_bool = 0; // 0x440 MovB
	return 2; // 0x441 Return
	
Label_1090:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x442 PushV
	var_39_object = var_17_object; // 0x443 Mov
	var_40_string = "noaccess"; // 0x444 MovS
	func_1028(var_38_bool, var_39_object, var_40_string); // 0x445 Call
	var_47_bool = var_38_bool == 0; // 0x447 Not
	if(var_47_bool == 0) goto Label_1099; // 0x448 JumpB
	var_16_bool = 1; // 0x449 MovB
	return 2; // 0x44a Return
	
Label_1099:
	var_48_string = "noaccess"; // 0x44b PushS
	GetProperty(var_48_string, var_19_int); // 0x44c ObjFunc
	var_49_int = 0; // 0x44e PushI
	var_16_bool = var_19_int == var_49_int; // 0x44f Eq2
	return 2; // 0x450 Return
}


func_442(var_0_bool)
{
	var_36_object = Obj(); // 0x1ba PushV
	var_36_object = var_0_bool; // 0x1bb MovT
	func_1188(var_36_object); // 0x1bc Call
	return 0; // 0x1be Return
}


func_1209(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_int = var_73_cvector | var_74_cvector; // 0x4ba Or
	var_76_int = var_73_cvector | var_73_cvector; // 0x4bb Or
	var_77_int = var_74_cvector | var_74_cvector; // 0x4bc Or
	var_78_float = var_76_int * var_77_int; // 0x4bd Mult
	var_79_float = sqrt(var_78_float); // 0x4be Sqrt
	var_72_float = var_75_int / var_75_int; // 0x4bf Div2
	return 0; // 0x4c0 Return
}


func_1594(var_146_string, var_147_int)
{
	var_148_string = ""; var_149_string = ""; // 0x63a PushV
	var_149_string = "idle"; // 0x63b MovS
	var_150_int = var_147_int; // 0x63c Push
	if(var_150_int == 0) goto Label_1599; // 0x63d JumpB
	var_149_string = var_149_string + var_147_int; // 0x63e Add2
	
Label_1599:
	var_146_string = var_149_string; // 0x63f Mov
	return 2; // 0x640 Return
}


func_1342(var_83_object)
{
	var_84_object = Obj(); // 0x53f PushV
	var_84_object = var_83_object; // 0x540 Mov
	TaskCall(4); // 0x541 TaskCall
	func_860(var_85_object, var_86_cvector, var_87_bool, var_84_object); // 0x542 Call
	TaskReturn(); // 0x543 TaskReturn
	return 0; // 0x545 Return
}


func_830(var_23_cvector, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0x33e PushV
	GetPosition(var_31_cvector); // 0x33f Func
	GetPosition(var_32_cvector); // 0x341 TObjFunc
	GetDirection(var_33_cvector); // 0x343 Func
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x345 PushV
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x346 PushV
	var_40_cvector = var_31_cvector - var_32_cvector; // 0x347 Sub2
	func_1199(var_39_cvector, var_40_cvector); // 0x348 Call
	var_46_float = 0.75; // 0x34a PushF
	var_47_float = var_33_cvector * var_46_float; // 0x34b Mult
	var_38_cvector = var_39_cvector + var_47_float; // 0x34c Add2
	func_1199(var_37_cvector, var_38_cvector); // 0x34d Call
	var_34_cvector = var_37_cvector; // 0x34e Mov
	var_48_int = 32; // 0x350 PushI
	var_49_float = 7000.0; // 0x351 PushF
	FindLongestDir(var_35_cvector, var_36_float, var_34_cvector, var_24_float, var_48_int, var_49_float); // 0x352 Func
	var_50_int = 100; // 0x354 PushI
	var_36_float = var_36_float - var_50_int; // 0x355 Sub2
	var_51_int = 0; // 0x356 PushI
	var_52_bool = var_36_float < var_51_int; // 0x357 LT
	if(var_52_bool == 0) goto Label_858; // 0x358 JumpB
	var_36_float = 0; // 0x359 MovI
	
Label_858:
	var_23_cvector = var_35_cvector * var_36_float; // 0x35a Mult2
	return 12; // 0x35b Return
}


func_1601()
{
	var_14_bool = GlobalVars[1]; // 0x641 PushGE
	var_14_bool = 0; // 0x642 MovB
	GlobalVars[1] = var_14_bool; // 0x643 PopGE
	var_15_bool = 0; // 0x644 PushV
	var_15_bool = 0; // 0x645 MovB
	func_1414(var_15_bool); // 0x646 Call
	return 0; // 0x648 Return
}


func_1217(var_62_float, var_63_cvector, var_64_cvector)
{
	var_65_float = GetByIndex(var_63_cvector, 0); // 0x4c2 PushE
	var_66_float = GetByIndex(var_64_cvector, 0); // 0x4c3 PushE
	var_67_float = var_65_float * var_66_float; // 0x4c4 Mult
	var_68_float = GetByIndex(var_63_cvector, 2); // 0x4c5 PushE
	var_69_float = GetByIndex(var_64_cvector, 2); // 0x4c6 PushE
	var_70_float = var_68_float * var_69_float; // 0x4c7 Mult
	var_62_float = var_67_float + var_70_float; // 0x4c8 Add2
	return 0; // 0x4c9 Return
}


func_1350(var_12_int)
{
	var_12_int = 2; // 0x547 MovI
	return 0; // 0x548 Return
}


func_1353(var_20_object)
{
	var_21_object = Obj(); // 0x54a PushV
	var_21_object = var_20_object; // 0x54b Mov
	func_1609(var_21_object); // 0x54c Call
	return 0; // 0x54e Return
}


func_1226(var_71_float, var_72_cvector)
{
	var_73_float = GetByIndex(var_72_cvector, 0); // 0x4cb PushE
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x4cc PushE
	var_75_float = var_73_float * var_74_float; // 0x4cd Mult
	var_76_float = GetByIndex(var_72_cvector, 2); // 0x4ce PushE
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x4cf PushE
	var_78_float = var_76_float * var_77_float; // 0x4d0 Mult
	var_79_int = var_75_float + var_78_float; // 0x4d1 Add
	var_71_float = sqrt(var_79_int); // 0x4d2 Sqrt2
	return 0; // 0x4d3 Return
}


func_1609(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x649 PushV
	var_24_bool = GlobalVars[1]; // 0x64a PushGE
	if(var_24_bool == 0) goto Label_1619; // 0x64b JumpB
	IsOverrideActive(var_23_bool); // 0x64c Func
	var_25_bool = var_23_bool == 0; // 0x64e Not
	if(var_25_bool == 0) goto Label_1618; // 0x64f JumpB
	WorkWithCorpse(var_21_object); // 0x650 Func
	
Label_1618:
	return 2; // 0x652 Return
	
Label_1619:
	return 2; // 0x653 Return
}


func_1359()
{
	return 0; // 0x54f Return
}


func_336(var_1_bool)
{
	var_10_int = 110; // 0x150 PushI
	KillTimer(var_10_int); // 0x151 Func
	var_1_bool = 0; // 0x153 TMovB
	var_11_bool = var_0_bool; // 0x154 PushT
	if(var_11_bool == 0) goto Label_346; // 0x155 JumpB
	func_1647(); // 0x157 Call
	goto Label_348; // 0x159 Jump
	
Label_348:
	return 0; // 0x15c Return
	
Label_346:
	Stop(); // 0x15a Func
}


func_1360(var_12_int, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x550 PushV
	CanSee(var_15_bool, var_13_object); // 0x551 Func
	var_16_bool = var_15_bool; // 0x553 Push
	if(var_16_bool == 0) goto Label_1371; // 0x554 JumpB
	var_17_int = 0; var_18_object = Obj(); // 0x555 PushV
	var_18_object = var_13_object; // 0x556 Mov
	func_1314(var_17_int, var_18_object); // 0x557 Call
	var_12_int = var_17_int; // 0x558 Mov
	return 2; // 0x55a Return
	
Label_1371:
	var_12_int = 0; // 0x55b MovI
	return 2; // 0x55c Return
}


func_976(var_2_object)
{
	Stop(); // 0x3d0 Func
	var_10_int = 120; // 0x3d2 PushI
	KillTimer(var_10_int); // 0x3d3 Func
	var_2_object = 1; // 0x3d5 TMovB
	return 0; // 0x3d6 Return
}


func_1105(var_13_object, var_14_int)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; // 0x451 PushV
	var_36_bool = 0; // 0x452 PushV
	var_36_bool = 0; // 0x453 MovB
	var_37_int = 4; // 0x454 PushI
	var_38_bool = var_14_int != var_37_int; // 0x455 Neq
	if(var_38_bool == 0) goto Label_1115; // 0x456 JumpB
	var_39_int = 5; // 0x457 PushI
	var_40_bool = var_14_int != var_39_int; // 0x458 Neq
	if(var_40_bool == 0) goto Label_1115; // 0x459 JumpB
	var_36_bool = 1; // 0x45a MovB
	
Label_1115:
	if(var_36_bool == 0) goto Label_1134; // 0x45b JumpB
	GetScene(var_26_object); // 0x45c Func
	GetPosition(var_28_cvector); // 0x45e Func
	GetEyesHeight(var_29_float); // 0x460 Func
	var_41_float = GetByIndex(var_28_cvector, 1); // 0x462 PushE
	var_42_int = 2; // 0x463 PushI
	var_43_float = var_29_float / var_42_int; // 0x464 Div
	var_41_float = var_41_float + var_43_float; // 0x465 Add2
	SetByIndex(var_28_cvector, 1) = var_41_float; // 0x466 PopE
	var_44_string = "scripted"; // 0x467 PushS
	var_45_cvector = CVector(0.0, 0.0, 1.0); // 0x468 PushVec
	var_46_string = "blood.xml"; // 0x469 PushS
	AddActorByType(var_27_object, var_44_string, var_26_object, var_28_cvector, var_45_cvector, var_46_string); // 0x46a Func
	var_27_object = 0; // 0x46c SetNull
	var_26_object = 0; // 0x46d SetNull
	
Label_1134:
	var_47_bool = var_13_object == 0; // 0x46e NullEq
	if(var_47_bool == 0) goto Label_1137; // 0x46f JumpB
	return 20; // 0x470 Return
	
Label_1137:
	GetSecondaryAnimationType(var_30_int); // 0x471 Func
	var_48_int = 0; // 0x473 PushI
	var_49_bool = var_30_int < var_48_int; // 0x474 LT
	if(var_49_bool == 0) goto Label_1143; // 0x475 JumpB
	return 20; // 0x476 Return
	
Label_1143:
	GetPosition(var_31_cvector); // 0x477 ObjFunc
	GetPosition(var_32_cvector); // 0x479 Func
	GetDirection(var_33_cvector); // 0x47b Func
	var_34_cvector = var_32_cvector - var_31_cvector; // 0x47d Sub2
	var_50_float = GetByIndex(var_34_cvector, 0); // 0x47e PushE
	var_51_float = GetByIndex(var_33_cvector, 0); // 0x47f PushE
	var_52_float = var_50_float * var_51_float; // 0x480 Mult
	var_53_float = GetByIndex(var_34_cvector, 2); // 0x481 PushE
	var_54_float = GetByIndex(var_33_cvector, 2); // 0x482 PushE
	var_55_float = var_53_float * var_54_float; // 0x483 Mult
	var_56_int = var_52_float + var_55_float; // 0x484 Add
	var_57_int = 0; // 0x485 PushI
	var_58_bool = var_56_int >= var_57_int; // 0x486 GE
	if(var_58_bool == 0) goto Label_1162; // 0x487 JumpB
	var_35_string = "fhit"; // 0x488 MovS
	goto Label_1163; // 0x489 Jump
	
Label_1163:
	var_59_string = "hit_react"; // 0x48b PushS
	var_60_string = "1"; // 0x48c PushS
	var_61_int = var_35_string + var_60_string; // 0x48d Add
	var_62_string = "2"; // 0x48e PushS
	var_63_int = var_35_string + var_62_string; // 0x48f Add
	var_64_int = -10; // 0x490 PushI
	FadeSecondaryAnimation(var_59_string, var_61_int, var_63_int, var_64_int); // 0x491 Func
	return 20; // 0x493 Return
	
Label_1162:
	var_35_string = "bhit"; // 0x48a MovS
}


func_1620()
{
	var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_int = 0; // 0x654 PushV
	var_142_int = 0; // 0x655 MovI
	
Label_1622:
	var_145_string = "all"; // 0x656 PushS
	var_146_string = ""; var_147_int = 0; // 0x657 PushV
	var_147_int = var_142_int; // 0x658 Mov
	func_1594(var_146_string, var_147_int); // 0x659 Call
	HasAnimation(var_143_bool, var_145_string, var_146_string); // 0x65b Func
	var_151_bool = var_143_bool == 0; // 0x65d Not
	if(var_151_bool == 0) goto Label_1632; // 0x65e JumpB
	goto Label_1635; // 0x65f Jump
	
Label_1635:
	irand(var_144_int, var_142_int); // 0x663 Func
	var_152_string = "all"; // 0x665 PushS
	var_153_string = ""; var_154_int = 0; // 0x666 PushV
	var_154_int = var_144_int; // 0x667 Mov
	func_1594(var_153_string, var_154_int); // 0x668 Call
	PlayAnimation(var_152_string, var_153_string); // 0x66a Func
	WaitForAnimEnd(); // 0x66c Func
	return 6; // 0x66e Return
	
Label_1632:
	var_155_int = 1; // 0x660 PushI
	var_142_int = var_142_int + var_155_int; // 0x661 Add2
	goto Label_1622; // 0x662 Jump
}


func_1236(var_59_float, var_60_cvector, var_61_cvector)
{
	var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x4d5 PushV
	var_63_cvector = var_60_cvector; // 0x4d6 Mov
	var_64_cvector = var_61_cvector; // 0x4d7 Mov
	func_1217(var_62_float, var_63_cvector, var_64_cvector); // 0x4d8 Call
	var_71_float = 0; var_72_cvector = CVector(0,0,0); // 0x4da PushV
	var_72_cvector = var_60_cvector; // 0x4db Mov
	func_1226(var_71_float, var_72_cvector); // 0x4dc Call
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x4de PushV
	var_81_cvector = var_61_cvector; // 0x4df Mov
	func_1226(var_80_float, var_81_cvector); // 0x4e0 Call
	var_82_float = var_71_float * var_80_float; // 0x4e2 Mult
	var_59_float = var_62_float / var_62_float; // 0x4e3 Div2
	return 0; // 0x4e4 Return
}


func_860(var_0_bool, var_1_bool, var_2_object, var_84_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; // 0x35c PushV
	var_0_bool = var_84_object; // 0x35d TMov
	var_98_cvector = CVector(0,0,0); var_99_float = 0; // 0x35e PushV
	var_99_float = 1.74533; // 0x35f MovF
	func_830(var_98_cvector, var_99_float); // 0x360 Call
	var_93_cvector = var_98_cvector; // 0x361 Mov
	var_94_float = var_93_cvector | var_93_cvector; // 0x363 Or2
	var_128_float = 10000.0; // 0x364 PushF
	var_129_bool = var_94_float < var_128_float; // 0x365 LT
	if(var_129_bool == 0) goto Label_880; // 0x366 JumpB
	var_130_string = "Can't retreat, distance: "; // 0x367 PushS
	var_131_float = sqrt(var_94_float); // 0x368 Sqrt
	var_132_int = var_130_string + var_131_float; // 0x369 Add
	Trace(var_132_int); // 0x36a Func
	var_133_float = 0.5; // 0x36c PushF
	Sleep(var_133_float); // 0x36d Func
	return 10; // 0x36f Return
	
Label_880:
	var_134_float = GetByIndex(var_93_cvector, 0); // 0x370 PushE
	var_135_float = GetByIndex(var_93_cvector, 2); // 0x371 PushE
	Rotate(var_134_float, var_135_float); // 0x372 Func
	var_136_cvector = CVector(0,0,0); // 0x374 PushV
	func_1008(var_136_cvector); // 0x375 Call
	var_1_bool = var_136_cvector + var_93_cvector; // 0x377 Add2
	var_139_int = 120; // 0x378 PushI
	var_140_float = 0.5; // 0x379 PushF
	SetTimer(var_139_int, var_140_float); // 0x37a Func
	var_2_object = 0; // 0x37c TMovB
	
Label_893:
	var_141_int = 1; // 0x37d PushI
	MovePoint(var_141_int, var_141_int, var_95_bool); // 0x37e Func
	var_142_bool = var_95_bool; // 0x380 Push
	if(var_142_bool == 0) goto Label_921; // 0x381 JumpB
	var_143_bool = var_0_bool == 0; // 0x382 NullEq
	if(var_143_bool == 0) goto Label_902; // 0x383 JumpB
	goto Label_923; // 0x384 Jump
	
Label_923:
	return 10; // 0x39b Return
	
Label_902:
	var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x386 PushV
	var_145_float = 2.61799; // 0x387 MovF
	func_830(var_144_cvector, var_145_float); // 0x388 Call
	var_96_cvector = var_144_cvector; // 0x389 Mov
	var_97_float = var_96_cvector | var_96_cvector; // 0x38b Or2
	var_146_float = 10000.0; // 0x38c PushF
	var_147_bool = var_97_float >= var_146_float; // 0x38d GE
	if(var_147_bool == 0) goto Label_920; // 0x38e JumpB
	var_148_cvector = CVector(0,0,0); // 0x38f PushV
	func_1008(var_148_cvector); // 0x390 Call
	var_1_bool = var_148_cvector + var_96_cvector; // 0x392 Add2
	var_149_int = 120; // 0x393 PushI
	var_150_float = 0.5; // 0x394 PushF
	SetTimer(var_149_int, var_150_float); // 0x395 Func
	goto Label_921; // 0x397 Jump
	
Label_921:
	var_151_bool = var_2_object == 0; // 0x399 Not
	if(var_151_bool == 0) goto Label_893; // 0x39a JumpB
	
Label_920:
	goto Label_923; // 0x398 Jump
}


func_1373(var_59_object)
{
	var_60_object = Obj(); // 0x55e PushV
	var_60_object = var_59_object; // 0x55f Mov
	func_1324(var_60_object); // 0x560 Call
	return 0; // 0x562 Return
}


func_992(var_0_bool, var_61_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x3e0 PushV
	GetDirection(var_64_cvector); // 0x3e1 Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x3e3 PushV
	var_67_object = var_0_bool; // 0x3e4 MovT
	func_1013(var_67_object); // 0x3e5 Call
	var_65_cvector = var_66_cvector; // 0x3e6 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x3e8 PushV
	var_73_cvector = var_64_cvector; // 0x3e9 Mov
	var_74_cvector = var_65_cvector; // 0x3ea Mov
	func_1209(var_72_float, var_73_cvector, var_74_cvector); // 0x3eb Call
	var_80_float = -0.34202; // 0x3ed PushF
	var_61_bool = var_72_float >= var_80_float; // 0x3ee GE2
	return 4; // 0x3ef Return
}


func_1379(var_13_int)
{
	var_13_int = 0; // 0x564 MovI
	return 0; // 0x565 Return
}


func_1253(var_24_int)
{
	var_25_float = 0; var_26_float = 0; // 0x4e5 PushV
	GetGameTime(var_26_float); // 0x4e6 Func
	var_27_int = 1; // 0x4e8 PushI
	var_28_int = 0; // 0x4e9 PushV
	var_29_int = 24; // 0x4ea PushI
	var_28_int = var_26_float / var_26_float; // 0x4eb Div2
	var_24_int = var_27_int + var_28_int; // 0x4ec Add2
	return 2; // 0x4ed Return
}


func_1382()
{
	return 0; // 0x567 Return
}


func_358(var_1_bool, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_int = 0; // 0x166 PushV
	var_16_bool = var_1_bool; // 0x167 PushT
	if(var_16_bool == 0) goto Label_362; // 0x168 JumpB
	return 4; // 0x169 Return
	
Label_362:
	IsPlayerActor(var_11_object, var_14_bool); // 0x16a Func
	var_17_bool = var_14_bool == 0; // 0x16c Not
	if(var_17_bool == 0) goto Label_367; // 0x16d JumpB
	return 4; // 0x16e Return
	
Label_367:
	var_18_int = 0; var_19_object = Obj(); // 0x16f PushV
	var_19_object = var_11_object; // 0x170 Mov
	func_1297(var_19_object); // 0x171 Call
	var_15_int = var_18_int; // 0x172 Mov
	var_21_int = 0; // 0x174 PushI
	var_22_bool = var_15_int > var_21_int; // 0x175 GT
	if(var_22_bool == 0) goto Label_390; // 0x176 JumpB
	var_23_int = 1; // 0x177 PushI
	var_24_bool = var_15_int > var_23_int; // 0x178 GT
	if(var_24_bool == 0) goto Label_381; // 0x179 JumpB
	func_336(var_15_int); // 0x17b Call
	
Label_381:
	var_27_object = Obj(); // 0x17d PushV
	var_27_object = var_11_object; // 0x17e Mov
	func_1306(var_27_object); // 0x17f Call
	var_1_bool = 1; // 0x181 TMovB
	var_92_int = 110; // 0x182 PushI
	var_93_float = 5.0; // 0x183 PushF
	SetTimer(var_92_int, var_93_float); // 0x184 Func
	
Label_390:
	return 4; // 0x186 Return
}


func_1384(var_21_int, var_22_int)
{
	var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; // 0x568 PushV
	var_40_bool = var_21_int > var_22_int; // 0x569 GT
	if(var_40_bool == 0) goto Label_1391; // 0x56a JumpB
	var_41_string = "GenerateMoney: iMin > iMax"; // 0x56b PushS
	Trace(var_41_string); // 0x56c Func
	return 8; // 0x56e Return
	
Label_1391:
	var_36_int = 0; // 0x56f MovI
	var_42_bool = var_21_int != var_22_int; // 0x570 Neq
	if(var_42_bool == 0) goto Label_1398; // 0x571 JumpB
	var_43_int = var_22_int - var_21_int; // 0x572 Sub
	irand(var_37_int, var_43_int); // 0x573 Func
	goto Label_1402; // 0x575 Jump
	
Label_1402:
	var_36_int = var_36_int + var_21_int; // 0x57a Add2
	var_44_int = 0; // 0x57b PushI
	var_45_bool = var_36_int == var_44_int; // 0x57c Eq
	if(var_45_bool == 0) goto Label_1407; // 0x57d JumpB
	return 8; // 0x57e Return
	
Label_1407:
	var_46_string = "Money"; // 0x57f PushS
	GetInvItemByName(var_38_int, var_46_string); // 0x580 Func
	var_47_int = 0; // 0x582 PushI
	AddItem(var_39_bool, var_38_int, var_47_int, var_36_int); // 0x583 Func
	return 8; // 0x585 Return
	
Label_1398:
	var_48_int = 0; // 0x576 PushI
	var_49_bool = var_21_int == var_48_int; // 0x577 Eq
	if(var_49_bool == 0) goto Label_1402; // 0x578 JumpB
	return 8; // 0x579 Return
}


func_617(var_61_object)
{
	Face(var_61_object); // 0x26a Func
	var_65_string = "all"; // 0x26c PushS
	var_66_string = "attack_on"; // 0x26d PushS
	PlayAnimation(var_65_string, var_66_string); // 0x26e Func
	WaitForAnimEnd(); // 0x270 Func
	var_67_string = "all"; // 0x272 PushS
	var_68_string = "attack_stay"; // 0x273 PushS
	PlayAnimation(var_67_string, var_68_string); // 0x274 Func
	WaitForAnimEnd(); // 0x276 Func
	var_69_string = "all"; // 0x278 PushS
	var_70_string = "attack_off"; // 0x279 PushS
	PlayAnimation(var_69_string, var_70_string); // 0x27a Func
	WaitForAnimEnd(); // 0x27c Func
	StopAsync(); // 0x27e Func
	var_71_object = Obj(); // 0x280 PushV
	var_71_object = var_61_object; // 0x281 Mov
	func_682(var_63_cvector, var_64_bool, var_61_object, var_71_object); // 0x282 Call
	return 0; // 0x284 Return
}


func_1262(var_10_object)
{
	var_11_object = Obj(); // 0x4ef PushV
	var_11_object = var_10_object; // 0x4f0 Mov
	TaskCall(0); // 0x4f1 TaskCall
	func_0(var_11_object); // 0x4f2 Call
	TaskReturn(); // 0x4f3 TaskReturn
	return 0; // 0x4f5 Return
}


func_1647()
{
	StopAnimation(); // 0x66f Func
	return 0; // 0x671 Return
}


func_1008(var_81_cvector)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x3f0 PushV
	GetPosition(var_83_cvector); // 0x3f1 Func
	var_81_cvector = var_83_cvector; // 0x3f3 Mov
	return 2; // 0x3f4 Return
}


func_1650(var_20_bool)
{
	var_20_bool = 1; // 0x672 MovB
	return 0; // 0x673 Return
}


func_1652(var_13_bool, var_14_object, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x674 PushV
	CanSee(var_17_bool, var_14_object); // 0x675 Func
	var_18_bool = 0; // 0x677 PushV
	var_18_bool = 1; // 0x678 MovB
	var_19_bool = var_17_bool; // 0x679 Push
	if(var_19_bool == 0) goto Label_1667; // 0x67a JumpB
	var_20_float = 0; var_21_object = Obj(); // 0x67b PushV
	var_21_object = var_14_object; // 0x67c Mov
	func_1020(var_21_object); // 0x67d Call
	var_28_float = 250000.0; // 0x67f PushF
	var_29_bool = var_20_float <= var_28_float; // 0x680 LE
	if(var_29_bool == 0) goto Label_1667; // 0x681 JumpB
	var_18_bool = 0; // 0x682 MovB
	
Label_1667:
	if(var_18_bool == 0) goto Label_1677; // 0x683 JumpB
	var_30_float = -0.3; // 0x684 PushF
	ReportReputationChange(var_14_object, var_15_object, var_30_float); // 0x685 Func
	var_31_string = "ToDie"; // 0x687 PushS
	var_32_bool = 1; // 0x688 PushB
	SetProperty(var_31_string, var_32_bool); // 0x689 Func
	var_13_bool = 1; // 0x68b MovB
	return 2; // 0x68c Return
	
Label_1677:
	CanSee(var_17_bool, var_15_object); // 0x68d Func
	var_33_bool = 0; // 0x68f PushV
	var_33_bool = 1; // 0x690 MovB
	var_34_bool = var_17_bool; // 0x691 Push
	if(var_34_bool == 0) goto Label_1691; // 0x692 JumpB
	var_35_float = 0; var_36_object = Obj(); // 0x693 PushV
	var_36_object = var_15_object; // 0x694 Mov
	func_1020(var_36_object); // 0x695 Call
	var_37_float = 250000.0; // 0x697 PushF
	var_38_bool = var_35_float <= var_37_float; // 0x698 LE
	if(var_38_bool == 0) goto Label_1691; // 0x699 JumpB
	var_33_bool = 0; // 0x69a MovB
	
Label_1691:
	if(var_33_bool == 0) goto Label_1698; // 0x69b JumpB
	var_39_string = "ToDie"; // 0x69c PushS
	var_40_bool = 1; // 0x69d PushB
	SetProperty(var_39_string, var_40_bool); // 0x69e Func
	var_13_bool = 1; // 0x6a0 MovB
	return 2; // 0x6a1 Return
	
Label_1698:
	var_13_bool = 0; // 0x6a2 MovB
	return 2; // 0x6a3 Return
}


func_1013(var_66_cvector)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x3f5 PushV
	GetPosition(var_70_cvector); // 0x3f6 Func
	GetPosition(var_71_cvector); // 0x3f8 ObjFunc
	var_66_cvector = var_71_cvector - var_70_cvector; // 0x3fa Sub2
	return 4; // 0x3fb Return
}


func_120(var_34_string)
{
	RemoveRTEnvelope(); // 0x79 Func
	SetDeathState(); // 0x7b Func
	Stop(); // 0x7d Func
	StopAsync(); // 0x7f Func
	StopSecondaryAnimation(); // 0x81 Func
	var_35_string = "all"; // 0x83 PushS
	PlayAnimation(var_35_string, var_34_string); // 0x84 Func
	WaitForAnimEnd(); // 0x86 Func
	var_36_string = "all"; // 0x88 PushS
	LockAnimationEnd(var_36_string, var_34_string); // 0x89 Func
	RemoveEnvelope(); // 0x8b Func
	return 0; // 0x8d Return
}


func_1020(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x3fc PushV
	GetPosition(var_25_cvector); // 0x3fd Func
	GetPosition(var_26_cvector); // 0x3ff ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x401 Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x402 Or2
	return 6; // 0x403 Return
}


