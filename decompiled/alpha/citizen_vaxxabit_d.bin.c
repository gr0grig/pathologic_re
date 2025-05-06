task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_bool; // 0x11 Mov
	func_1706(var_15_object); // 0x12 Call
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_bool; // 0x19 Mov
	func_1709(var_18_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_1715(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xac PushV
	var_14_int = 0; var_15_object = Obj(); // 0xad PushV
	var_15_object = var_11_bool; // 0xae Mov
	func_1706(var_15_object); // 0xaf Call
	var_13_int = var_14_int; // 0xb0 Mov
	var_16_int = 0; // 0xb2 PushI
	var_17_bool = var_13_int > var_16_int; // 0xb3 GT
	if(var_17_bool == 0) goto Label_191; // 0xb4 JumpB
	var_18_int = 1; // 0xb5 PushI
	var_19_bool = var_13_int > var_18_int; // 0xb6 GT
	if(var_19_bool == 0) goto Label_187; // 0xb7 JumpB
	func_311(var_13_int); // 0xb9 Call
	
Label_187:
	var_21_object = Obj(); // 0xbb PushV
	var_21_object = var_11_bool; // 0xbc Mov
	func_1709(var_21_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xc0 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xc1 PushV
	var_15_object = var_11_bool; // 0xc2 Mov
	func_1660(var_14_int, var_15_object); // 0xc3 Call
	var_13_int = var_14_int; // 0xc4 Mov
	var_50_int = 0; // 0xc6 PushI
	var_51_bool = var_13_int > var_50_int; // 0xc7 GT
	if(var_51_bool == 0) goto Label_211; // 0xc8 JumpB
	var_52_int = 1; // 0xc9 PushI
	var_53_bool = var_13_int > var_52_int; // 0xca GT
	if(var_53_bool == 0) goto Label_207; // 0xcb JumpB
	func_311(var_13_int); // 0xcd Call
	
Label_207:
	var_55_object = Obj(); // 0xcf PushV
	var_55_object = var_11_bool; // 0xd0 Mov
	func_1670(var_55_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xd4 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0xd5 PushV
	var_16_object = var_11_cvector; // 0xd6 Mov
	var_17_object = var_12_bool; // 0xd7 Mov
	func_1955(var_15_bool, var_16_object, var_17_object); // 0xd8 Call
	if(var_15_bool == 0) goto Label_237; // 0xda JumpB
	var_50_int = 0; var_51_object = Obj(); // 0xdb PushV
	var_51_object = var_11_cvector; // 0xdc Mov
	func_1678(var_50_int, var_51_object); // 0xdd Call
	var_14_int = var_50_int; // 0xde Mov
	var_80_int = 0; // 0xe0 PushI
	var_81_bool = var_14_int > var_80_int; // 0xe1 GT
	if(var_81_bool == 0) goto Label_237; // 0xe2 JumpB
	var_82_int = 1; // 0xe3 PushI
	var_83_bool = var_14_int > var_82_int; // 0xe4 GT
	if(var_83_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_14_int); // 0xe7 Call
	
Label_233:
	var_85_object = Obj(); // 0xe9 PushV
	var_85_object = var_11_cvector; // 0xea Mov
	func_1688(var_85_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xee PushV
	var_14_int = 0; var_15_object = Obj(); // 0xef PushV
	var_15_object = var_11_bool; // 0xf0 Mov
	func_1696(var_15_object); // 0xf1 Call
	var_13_int = var_14_int; // 0xf2 Mov
	var_16_int = 0; // 0xf4 PushI
	var_17_bool = var_13_int > var_16_int; // 0xf5 GT
	if(var_17_bool == 0) goto Label_257; // 0xf6 JumpB
	var_18_int = 1; // 0xf7 PushI
	var_19_bool = var_13_int > var_18_int; // 0xf8 GT
	if(var_19_bool == 0) goto Label_253; // 0xf9 JumpB
	func_311(var_13_int); // 0xfb Call
	
Label_253:
	var_21_object = Obj(); // 0xfd PushV
	var_21_object = var_11_bool; // 0xfe Mov
	func_1699(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x102 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x103 PushV
	var_16_string = var_12_bool; // 0x104 Mov
	var_17_object = var_11_cvector; // 0x105 Mov
	func_1701(var_17_object); // 0x106 Call
	var_14_int = var_15_int; // 0x107 Mov
	var_18_int = 0; // 0x109 PushI
	var_19_bool = var_14_int > var_18_int; // 0x10a GT
	if(var_19_bool == 0) goto Label_279; // 0x10b JumpB
	var_20_int = 1; // 0x10c PushI
	var_21_bool = var_14_int > var_20_int; // 0x10d GT
	if(var_21_bool == 0) goto Label_274; // 0x10e JumpB
	func_311(var_14_int); // 0x110 Call
	
Label_274:
	var_23_string = ""; var_24_object = Obj(); // 0x112 PushV
	var_23_string = var_12_bool; // 0x113 Mov
	var_24_object = var_11_cvector; // 0x114 Mov
	func_1704(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_object = Obj(); // 0x119 PushV
	var_12_object = var_11_bool; // 0x11a Mov
	func_336(var_11_bool, var_12_object); // 0x11b Call
	return 0; // 0x11d Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_object = Obj(); // 0x11f PushV
	var_12_object = var_11_bool; // 0x120 Mov
	func_336(var_11_bool, var_12_object); // 0x121 Call
	return 0; // 0x123 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 110; // 0x125 PushI
	var_13_bool = var_11_bool != var_12_int; // 0x126 Neq
	if(var_13_bool == 0) goto Label_297; // 0x127 JumpB
	return 0; // 0x128 Return
	
Label_297:
	var_2_bool = 0; // 0x129 TMovB
	var_14_int = 110; // 0x12a PushI
	KillTimer(var_14_int); // 0x12b Func
	ResetAAS(); // 0x12d Func
	return 0; // 0x12f Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_311(var_10_bool); // 0x131 Call
	func_1715(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_311(var_11_bool); // 0x149 Call
	var_13_object = Obj(); // 0x14b PushV
	var_13_object = var_11_bool; // 0x14c Mov
	func_1611(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x1b2 Func
	return 0; // 0x1b4 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	Stop(); // 0x1b5 Func
	return 0; // 0x1b7 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x1c8 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1c9 PushV
	var_15_object = var_11_bool; // 0x1ca Mov
	func_1706(var_15_object); // 0x1cb Call
	var_13_int = var_14_int; // 0x1cc Mov
	var_16_int = 0; // 0x1ce PushI
	var_17_bool = var_13_int > var_16_int; // 0x1cf GT
	if(var_17_bool == 0) goto Label_475; // 0x1d0 JumpB
	var_18_int = 1; // 0x1d1 PushI
	var_19_bool = var_13_int > var_18_int; // 0x1d2 GT
	if(var_19_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_640(); // 0x1d5 Call
	
Label_471:
	var_20_object = Obj(); // 0x1d7 PushV
	var_20_object = var_11_bool; // 0x1d8 Mov
	func_1709(var_20_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x1dc PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1dd PushV
	var_15_object = var_11_bool; // 0x1de Mov
	func_1660(var_14_int, var_15_object); // 0x1df Call
	var_13_int = var_14_int; // 0x1e0 Mov
	var_50_int = 0; // 0x1e2 PushI
	var_51_bool = var_13_int > var_50_int; // 0x1e3 GT
	if(var_51_bool == 0) goto Label_495; // 0x1e4 JumpB
	var_52_int = 1; // 0x1e5 PushI
	var_53_bool = var_13_int > var_52_int; // 0x1e6 GT
	if(var_53_bool == 0) goto Label_491; // 0x1e7 JumpB
	func_640(); // 0x1e9 Call
	
Label_491:
	var_54_object = Obj(); // 0x1eb PushV
	var_54_object = var_11_bool; // 0x1ec Mov
	func_1670(var_54_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x1f0 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x1f1 PushV
	var_16_object = var_11_cvector; // 0x1f2 Mov
	var_17_object = var_12_bool; // 0x1f3 Mov
	func_1955(var_15_bool, var_16_object, var_17_object); // 0x1f4 Call
	if(var_15_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x1f7 PushV
	var_51_object = var_11_cvector; // 0x1f8 Mov
	func_1678(var_50_int, var_51_object); // 0x1f9 Call
	var_14_int = var_50_int; // 0x1fa Mov
	var_80_int = 0; // 0x1fc PushI
	var_81_bool = var_14_int > var_80_int; // 0x1fd GT
	if(var_81_bool == 0) goto Label_521; // 0x1fe JumpB
	var_82_int = 1; // 0x1ff PushI
	var_83_bool = var_14_int > var_82_int; // 0x200 GT
	if(var_83_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_84_object = Obj(); // 0x205 PushV
	var_84_object = var_11_cvector; // 0x206 Mov
	func_1688(var_84_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x20a PushV
	var_14_int = 0; var_15_object = Obj(); // 0x20b PushV
	var_15_object = var_11_bool; // 0x20c Mov
	func_1696(var_15_object); // 0x20d Call
	var_13_int = var_14_int; // 0x20e Mov
	var_16_int = 0; // 0x210 PushI
	var_17_bool = var_13_int > var_16_int; // 0x211 GT
	if(var_17_bool == 0) goto Label_541; // 0x212 JumpB
	var_18_int = 1; // 0x213 PushI
	var_19_bool = var_13_int > var_18_int; // 0x214 GT
	if(var_19_bool == 0) goto Label_537; // 0x215 JumpB
	func_640(); // 0x217 Call
	
Label_537:
	var_20_object = Obj(); // 0x219 PushV
	var_20_object = var_11_bool; // 0x21a Mov
	func_1699(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x21e PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x21f PushV
	var_16_string = var_12_bool; // 0x220 Mov
	var_17_object = var_11_cvector; // 0x221 Mov
	func_1701(var_17_object); // 0x222 Call
	var_14_int = var_15_int; // 0x223 Mov
	var_18_int = 0; // 0x225 PushI
	var_19_bool = var_14_int > var_18_int; // 0x226 GT
	if(var_19_bool == 0) goto Label_563; // 0x227 JumpB
	var_20_int = 1; // 0x228 PushI
	var_21_bool = var_14_int > var_20_int; // 0x229 GT
	if(var_21_bool == 0) goto Label_558; // 0x22a JumpB
	func_640(); // 0x22c Call
	
Label_558:
	var_22_string = ""; var_23_object = Obj(); // 0x22e PushV
	var_22_string = var_12_bool; // 0x22f Mov
	var_23_object = var_11_cvector; // 0x230 Mov
	func_1704(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_640(); // 0x235 Call
	func_1715(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x290 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x291 PushV
	var_15_object = var_11_bool; // 0x292 Mov
	func_1950(var_15_object); // 0x293 Call
	var_13_int = var_14_int; // 0x294 Mov
	var_16_int = 0; // 0x296 PushI
	var_17_bool = var_13_int > var_16_int; // 0x297 GT
	if(var_17_bool == 0) goto Label_675; // 0x298 JumpB
	var_18_int = 1; // 0x299 PushI
	var_19_bool = var_13_int > var_18_int; // 0x29a GT
	if(var_19_bool == 0) goto Label_671; // 0x29b JumpB
	func_732(); // 0x29d Call
	
Label_671:
	var_20_object = Obj(); // 0x29f PushV
	var_20_object = var_11_bool; // 0x2a0 Mov
	func_1953(); // 0x2a1 Call
	
Label_675:
	return 2; // 0x2a3 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_732(); // 0x2a5 Call
	func_1715(); // 0x2a8 Call
	return 0; // 0x2aa Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_732(); // 0x2e3 Call
	var_12_object = Obj(); // 0x2e5 PushV
	var_12_object = var_11_bool; // 0x2e6 Mov
	func_1611(); // 0x2e7 Call
	return 0; // 0x2e9 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x2ea PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2eb PushV
	var_15_object = var_11_bool; // 0x2ec Mov
	func_1950(var_15_object); // 0x2ed Call
	var_13_int = var_14_int; // 0x2ee Mov
	var_16_int = 0; // 0x2f0 PushI
	var_17_bool = var_13_int > var_16_int; // 0x2f1 GT
	if(var_17_bool == 0) goto Label_765; // 0x2f2 JumpB
	var_18_int = 1; // 0x2f3 PushI
	var_19_bool = var_13_int > var_18_int; // 0x2f4 GT
	if(var_19_bool == 0) goto Label_761; // 0x2f5 JumpB
	func_910(var_13_int); // 0x2f7 Call
	
Label_761:
	var_21_object = Obj(); // 0x2f9 PushV
	var_21_object = var_11_bool; // 0x2fa Mov
	func_1953(); // 0x2fb Call
	
Label_765:
	return 2; // 0x2fd Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_910(var_10_bool); // 0x2ff Call
	func_1715(); // 0x302 Call
	return 0; // 0x304 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; // 0x379 PushI
	var_13_bool = var_11_bool != var_12_int; // 0x37a Neq
	if(var_13_bool == 0) goto Label_893; // 0x37b JumpB
	return 0; // 0x37c Return
	
Label_893:
	var_14_bool = 0; var_15_object = Obj(); // 0x37d PushV
	var_15_object = var_1_bool; // 0x37e MovT
	func_926(var_14_bool, var_15_object); // 0x37f Call
	var_50_bool = var_14_bool == 0; // 0x381 Not
	if(var_50_bool == 0) goto Label_900; // 0x382 JumpB
	var_0_bool = 1; // 0x383 TMovB
	
Label_900:
	var_51_int = 0; // 0x384 PushI
	KillTimer(var_51_int); // 0x385 Func
	Stop(); // 0x387 Func
	return 0; // 0x389 Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x38b Func
	return 0; // 0x38d Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_910(var_11_bool); // 0x397 Call
	var_13_object = Obj(); // 0x399 PushV
	var_13_object = var_11_bool; // 0x39a Mov
	func_1611(); // 0x39b Call
	return 0; // 0x39d Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_1088(var_10_bool); // 0x3a8 Call
	func_1715(); // 0x3ab Call
	return 0; // 0x3ad Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; // 0x40c PushV
	var_20_int = 120; // 0x40d PushI
	var_21_bool = var_11_bool != var_20_int; // 0x40e Neq
	if(var_21_bool == 0) goto Label_1041; // 0x40f JumpB
	return 8; // 0x410 Return
	
Label_1041:
	var_22_bool = var_0_bool == 0; // 0x411 NullEq
	if(var_22_bool == 0) goto Label_1050; // 0x412 JumpB
	Stop(); // 0x413 Func
	var_23_int = 1; // 0x415 PushI
	KillTimer(var_23_int); // 0x416 Func
	var_2_bool = 1; // 0x418 TMovB
	goto Label_1087; // 0x419 Jump
	
Label_1087:
	return 8; // 0x43f Return
	
Label_1050:
	GetDirection(var_16_cvector); // 0x41a Func
	var_24_float = 7000.0; // 0x41c PushF
	FindDirLength(var_17_float, var_16_cvector, var_24_float); // 0x41d Func
	var_25_cvector = CVector(0,0,0); var_26_float = 0; // 0x41f PushV
	var_26_float = 1.74533; // 0x420 MovF
	func_942(var_25_cvector, var_26_float); // 0x421 Call
	var_18_cvector = var_25_cvector; // 0x422 Mov
	var_19_float = var_18_cvector | var_18_cvector; // 0x424 Or2
	var_55_bool = 0; // 0x425 PushV
	var_55_bool = 0; // 0x426 MovB
	var_56_float = 10000.0; // 0x427 PushF
	var_57_bool = var_19_float >= var_56_float; // 0x428 GE
	if(var_57_bool == 0) goto Label_1080; // 0x429 JumpB
	var_58_bool = 0; // 0x42a PushV
	var_58_bool = 1; // 0x42b MovB
	var_59_float = var_17_float * var_17_float; // 0x42c Mult
	var_60_float = 2.25; // 0x42d PushF
	var_61_float = var_59_float * var_60_float; // 0x42e Mult
	var_62_bool = var_19_float >= var_61_float; // 0x42f GE
	if(var_62_bool == 0) goto Label_1078; // 0x430 JumpB
	var_63_bool = 0; // 0x431 PushV
	func_1104(var_58_bool, var_63_bool); // 0x432 Call
	if(var_63_bool == 0) goto Label_1078; // 0x434 JumpB
	var_58_bool = 0; // 0x435 MovB
	
Label_1078:
	if(var_58_bool == 0) goto Label_1080; // 0x436 JumpB
	var_55_bool = 1; // 0x437 MovB
	
Label_1080:
	if(var_55_bool == 0) goto Label_1087; // 0x438 JumpB
	Stop(); // 0x439 Func
	var_83_cvector = CVector(0,0,0); // 0x43b PushV
	func_1298(var_83_cvector); // 0x43c Call
	var_1_bool = var_83_cvector + var_18_cvector; // 0x43e Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool)
{
	func_1088(var_11_bool); // 0x449 Call
	var_13_object = Obj(); // 0x44b PushV
	var_13_object = var_11_bool; // 0x44c Mov
	func_1611(); // 0x44d Call
	return 0; // 0x44f Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int)
{
	var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; // 0x4be PushV
	var_20_int = 120; // 0x4bf PushI
	var_21_bool = var_11_int != var_20_int; // 0x4c0 Neq
	if(var_21_bool == 0) goto Label_1219; // 0x4c1 JumpB
	return 8; // 0x4c2 Return
	
Label_1219:
	var_22_bool = var_0_bool == 0; // 0x4c3 NullEq
	if(var_22_bool == 0) goto Label_1228; // 0x4c4 JumpB
	Stop(); // 0x4c5 Func
	var_23_int = 1; // 0x4c7 PushI
	KillTimer(var_23_int); // 0x4c8 Func
	var_2_bool = 1; // 0x4ca TMovB
	goto Label_1265; // 0x4cb Jump
	
Label_1265:
	return 8; // 0x4f1 Return
	
Label_1228:
	GetDirection(var_16_cvector); // 0x4cc Func
	var_24_float = 7000.0; // 0x4ce PushF
	FindDirLength(var_17_float, var_16_cvector, var_24_float); // 0x4cf Func
	var_25_cvector = CVector(0,0,0); var_26_float = 0; // 0x4d1 PushV
	var_26_float = 1.74533; // 0x4d2 MovF
	func_1120(var_25_cvector, var_26_float); // 0x4d3 Call
	var_18_cvector = var_25_cvector; // 0x4d4 Mov
	var_19_float = var_18_cvector | var_18_cvector; // 0x4d6 Or2
	var_55_bool = 0; // 0x4d7 PushV
	var_55_bool = 0; // 0x4d8 MovB
	var_56_float = 10000.0; // 0x4d9 PushF
	var_57_bool = var_19_float >= var_56_float; // 0x4da GE
	if(var_57_bool == 0) goto Label_1258; // 0x4db JumpB
	var_58_bool = 0; // 0x4dc PushV
	var_58_bool = 1; // 0x4dd MovB
	var_59_float = var_17_float * var_17_float; // 0x4de Mult
	var_60_float = 2.25; // 0x4df PushF
	var_61_float = var_59_float * var_60_float; // 0x4e0 Mult
	var_62_bool = var_19_float >= var_61_float; // 0x4e1 GE
	if(var_62_bool == 0) goto Label_1256; // 0x4e2 JumpB
	var_63_bool = 0; // 0x4e3 PushV
	func_1282(var_58_bool, var_63_bool); // 0x4e4 Call
	if(var_63_bool == 0) goto Label_1256; // 0x4e6 JumpB
	var_58_bool = 0; // 0x4e7 MovB
	
Label_1256:
	if(var_58_bool == 0) goto Label_1258; // 0x4e8 JumpB
	var_55_bool = 1; // 0x4e9 MovB
	
Label_1258:
	if(var_55_bool == 0) goto Label_1265; // 0x4ea JumpB
	Stop(); // 0x4eb Func
	var_83_cvector = CVector(0,0,0); // 0x4ed PushV
	func_1298(var_83_cvector); // 0x4ee Call
	var_1_bool = var_83_cvector + var_18_cvector; // 0x4f0 Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object)
{
	func_1266(var_11_object); // 0x4fb Call
	var_13_object = Obj(); // 0x4fd PushV
	var_13_object = var_11_object; // 0x4fe Mov
	func_1611(); // 0x4ff Call
	return 0; // 0x501 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x63e PushV
	var_15_string = "health"; // 0x63f PushS
	var_16_bool = var_12_string == var_15_string; // 0x640 Eq
	if(var_16_bool == 0) goto Label_1610; // 0x641 JumpB
	var_17_string = "health"; // 0x642 PushS
	GetProperty(var_17_string, var_14_float); // 0x643 Func
	var_18_int = 0; // 0x645 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x646 LE
	if(var_19_bool == 0) goto Label_1610; // 0x647 JumpB
	SignalDeath(var_11_object); // 0x648 Func
	
Label_1610:
	return 2; // 0x64a Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x64c PushV
	var_12_object = var_11_object; // 0x64d Mov
	func_1590(var_12_object); // 0x64e Call
	return 0; // 0x650 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x652 PushV
	var_15_object = var_11_object; // 0x653 Mov
	var_16_int = var_12_int; // 0x654 Mov
	var_17_float = var_13_float; // 0x655 Mov
	func_1480(var_16_int, var_17_float); // 0x656 Call
	return 0; // 0x658 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_11_bool); // 0x95 Func
	func_1926(); // 0x98 Call
	func_163(); // 0x9b Call
	
Label_157:
	var_2_bool = 0; // 0x9d TMovB
	func_376(var_9_cvector, var_10_bool); // 0x9f Call
	goto Label_157; // 0xa1 Jump
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_0(var_13_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_14_object = Obj(); // 0x2 PushV
	var_14_object = var_13_object; // 0x3 Mov
	func_33(var_14_object); // 0x4 Call
	var_64_object = Obj(); // 0x6 PushV
	var_64_object = var_13_object; // 0x7 Mov
	func_2001(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1282(var_0_bool, var_63_bool)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x502 PushV
	GetDirection(var_66_cvector); // 0x503 Func
	var_68_cvector = CVector(0,0,0); var_69_object = Obj(); // 0x505 PushV
	var_69_object = var_0_bool; // 0x506 MovT
	func_1303(var_69_object); // 0x507 Call
	var_67_cvector = var_68_cvector; // 0x508 Mov
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x50a PushV
	var_75_cvector = var_66_cvector; // 0x50b Mov
	var_76_cvector = var_67_cvector; // 0x50c Mov
	func_1573(var_74_float, var_75_cvector, var_76_cvector); // 0x50d Call
	var_82_float = -0.34202; // 0x50f PushF
	var_63_bool = var_74_float >= var_82_float; // 0x510 GE2
	return 4; // 0x511 Return
}


func_1921(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0; // 0x781 PushV
	GetInvItemByName(var_54_int, var_52_string); // 0x782 Func
	var_51_int = var_54_int; // 0x784 Mov
	return 2; // 0x785 Return
}


func_773(var_70_bool, var_71_object)
{
	var_74_bool = 0; var_75_object = Obj(); var_76_float = 0; var_77_float = 0; var_78_bool = 0; var_79_bool = 0; // 0x306 PushV
	var_75_object = var_71_object; // 0x307 Mov
	var_76_float = 150; // 0x308 MovI
	var_77_float = 3000; // 0x309 MovI
	var_78_bool = 0; // 0x30a MovB
	var_79_bool = 1; // 0x30b MovB
	func_786(var_70_bool, var_71_object, var_74_bool, var_75_object, var_76_float, var_77_float, var_78_bool, var_79_bool); // 0x30c Call
	var_70_bool = var_74_bool; // 0x30d Mov
	return 0; // 0x30f Return
}


func_1926()
{
	var_12_bool = GlobalVars[0]; // 0x786 PushGE
	var_12_bool = 0; // 0x787 MovB
	GlobalVars[0] = var_12_bool; // 0x788 PopGE
	var_13_bool = 0; // 0x789 PushV
	var_13_bool = 1; // 0x78a MovB
	func_1746(var_13_bool); // 0x78b Call
	return 0; // 0x78d Return
}


func_1670(var_54_object)
{
	var_55_object = Obj(); // 0x687 PushV
	var_55_object = var_54_object; // 0x688 Mov
	TaskCall(5); // 0x689 TaskCall
	func_972(var_56_object, var_57_cvector, var_58_bool, var_55_object); // 0x68a Call
	TaskReturn(); // 0x68b TaskReturn
	return 0; // 0x68d Return
}


func_1415(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x587 PushV
	IsDead(var_34_bool); // 0x588 ObjFunc
	var_31_bool = var_34_bool; // 0x58a Mov
	return 2; // 0x58b Return
}


func_645(var_62_object)
{
	var_63_bool = 0; var_64_object = Obj(); // 0x286 PushV
	var_64_object = var_62_object; // 0x287 Mov
	func_1945(var_63_bool, var_64_object); // 0x288 Call
	if(var_63_bool == 0) goto Label_655; // 0x28a JumpB
	var_67_object = Obj(); // 0x28b PushV
	var_67_object = var_62_object; // 0x28c Mov
	func_683(var_67_object); // 0x28d Call
	
Label_655:
	return 0; // 0x28f Return
}


func_1547(var_130_bool)
{
	var_131_bool = 0; var_132_bool = 0; // 0x60b PushV
	IsLoaded(var_132_bool); // 0x60c Func
	var_130_bool = var_132_bool; // 0x60e Mov
	return 2; // 0x60f Return
}


func_1420(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x58c PushV
	var_26_bool = var_21_object == 0; // 0x58d NullEq
	if(var_26_bool == 0) goto Label_1425; // 0x58e JumpB
	var_20_bool = 0; // 0x58f MovB
	return 4; // 0x590 Return
	
Label_1425:
	var_27_bool = 0; // 0x591 PushV
	var_27_bool = 0; // 0x592 MovB
	var_28_string = "IsDead"; // 0x593 PushS
	var_29_int = 1; // 0x594 PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x595 FuncExist
	if(var_30_bool == 0) goto Label_1437; // 0x596 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x597 PushV
	var_32_object = var_21_object; // 0x598 Mov
	func_1415(var_32_object); // 0x599 Call
	if(var_31_bool == 0) goto Label_1437; // 0x59b JumpB
	var_27_bool = 1; // 0x59c MovB
	
Label_1437:
	if(var_27_bool == 0) goto Label_1440; // 0x59d JumpB
	var_20_bool = 0; // 0x59e MovB
	return 4; // 0x59f Return
	
Label_1440:
	GetScene(var_24_object); // 0x5a0 Func
	var_35_bool = var_24_object == 0; // 0x5a2 NullEq
	if(var_35_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_20_bool = 0; // 0x5a4 MovB
	return 4; // 0x5a5 Return
	
Label_1446:
	GetScene(var_25_object); // 0x5a6 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x5a8 Neq
	if(var_36_bool == 0) goto Label_1452; // 0x5a9 JumpB
	var_20_bool = 0; // 0x5aa MovB
	return 4; // 0x5ab Return
	
Label_1452:
	var_20_bool = 1; // 0x5ac MovB
	return 4; // 0x5ad Return
}


func_1678(var_50_int, var_51_object)
{
	var_52_bool = 0; var_53_object = Obj(); // 0x68f PushV
	var_53_object = var_51_object; // 0x690 Mov
	func_1456(var_52_bool, var_53_object); // 0x691 Call
	if(var_52_bool == 0) goto Label_1686; // 0x693 JumpB
	var_50_int = 2; // 0x694 MovI
	goto Label_1687; // 0x695 Jump
	
Label_1687:
	return 0; // 0x697 Return
	
Label_1686:
	var_50_int = 0; // 0x696 MovI
}


func_910(var_0_bool)
{
	var_0_bool = 1; // 0x38e TMovB
	var_12_int = 0; // 0x38f PushI
	KillTimer(var_12_int); // 0x390 Func
	Stop(); // 0x392 Func
	return 0; // 0x394 Return
}


func_784(var_114_string)
{
	var_114_string = "zwalk"; // 0x310 MovS
	return 0; // 0x311 Return
}


func_1552(var_41_cvector, var_42_cvector)
{
	var_43_float = 0; var_44_float = 0; // 0x610 PushV
	var_45_int = var_42_cvector | var_42_cvector; // 0x611 Or
	var_44_float = sqrt(var_45_int); // 0x612 Sqrt2
	var_46_float = 0.0; // 0x613 PushF
	var_47_bool = var_44_float < var_46_float; // 0x614 LT
	if(var_47_bool == 0) goto Label_1560; // 0x615 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x616 MovV
	return 2; // 0x617 Return
	
Label_1560:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x618 Div2
	return 2; // 0x619 Return
}


func_786(var_0_bool, var_1_bool, var_74_bool, var_75_object, var_76_float, var_77_float, var_78_bool, var_79_bool)
{
	var_80_bool = 0; var_81_bool = 0; var_82_object = Obj(); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_object = Obj(); var_88_bool = 0; var_89_bool = 0; var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_object = Obj(); // 0x312 PushV
	var_0_bool = 0; // 0x313 TMovB
	var_1_bool = var_75_object; // 0x314 TMov
	var_89_bool = var_79_bool; // 0x315 Mov
	
Label_790:
	var_96_bool = 0; var_97_object = Obj(); // 0x316 PushV
	var_97_object = var_75_object; // 0x317 Mov
	func_926(var_96_bool, var_97_object); // 0x318 Call
	var_100_bool = var_96_bool == 0; // 0x31a Not
	if(var_100_bool == 0) goto Label_798; // 0x31b JumpB
	var_74_bool = 0; // 0x31c MovB
	return 16; // 0x31d Return
	
Label_798:
	GetPosition(var_91_cvector); // 0x31e ObjFunc
	GetPosition(var_92_cvector); // 0x320 Func
	var_93_cvector = var_91_cvector - var_92_cvector; // 0x322 Sub2
	var_94_float = var_93_cvector | var_93_cvector; // 0x323 Or2
	var_101_bool = 0; // 0x324 PushV
	var_101_bool = 0; // 0x325 MovB
	var_102_int = 0; // 0x326 PushI
	var_103_bool = var_77_float > var_102_int; // 0x327 GT
	if(var_103_bool == 0) goto Label_813; // 0x328 JumpB
	var_104_float = var_77_float * var_77_float; // 0x329 Mult
	var_105_bool = var_94_float > var_104_float; // 0x32a GT
	if(var_105_bool == 0) goto Label_813; // 0x32b JumpB
	var_101_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_101_bool == 0) goto Label_818; // 0x32d JumpB
	Stop(); // 0x32e Func
	var_74_bool = 0; // 0x330 MovB
	return 16; // 0x331 Return
	
Label_818:
	var_106_float = var_76_float * var_76_float; // 0x332 Mult
	var_107_bool = var_94_float > var_106_float; // 0x333 GT
	if(var_107_bool == 0) goto Label_880; // 0x334 JumpB
	GetPFPosition(var_91_cvector); // 0x335 ObjFunc
	FindPathTo(var_95_object, var_91_cvector); // 0x337 Func
	var_108_bool = var_95_object != 0; // 0x339 NullNeq
	if(var_108_bool == 0) goto Label_829; // 0x33a JumpB
	var_90_object = var_95_object; // 0x33b Mov
	var_95_object = 0; // 0x33c SetNull
	
Label_829:
	var_109_bool = var_90_object != 0; // 0x33d NullNeq
	if(var_109_bool == 0) goto Label_862; // 0x33e JumpB
	var_110_bool = var_89_bool; // 0x33f Push
	if(var_110_bool == 0) goto Label_839; // 0x340 JumpB
	var_89_bool = 0; // 0x341 MovB
	RotatePath(var_90_object, var_88_bool); // 0x342 Func
	var_111_bool = var_88_bool == 0; // 0x344 Not
	if(var_111_bool == 0) goto Label_839; // 0x345 JumpB
	goto Label_886; // 0x346 Jump
	
Label_886:
	var_74_bool = !var_0_bool; // 0x376 Not2
	return 16; // 0x377 Return
	
Label_839:
	var_112_int = 0; // 0x347 PushI
	var_113_float = 0.3; // 0x348 PushF
	SetTimer(var_112_int, var_113_float); // 0x349 Func
	var_114_string = ""; // 0x34b PushV
	func_784(var_114_string); // 0x34c Call
	var_115_string = ""; // 0x34e PushV
	func_933(var_115_string); // 0x34f Call
	FollowPath(var_90_object, var_78_bool, var_88_bool, var_114_string, var_115_string); // 0x351 Func
	var_116_bool = var_88_bool == 0; // 0x353 Not
	if(var_116_bool == 0) goto Label_860; // 0x354 JumpB
	var_117_bool = var_0_bool; // 0x355 PushT
	if(var_117_bool == 0) goto Label_858; // 0x356 JumpB
	var_90_object = 0; // 0x357 SetNull
	goto Label_886; // 0x358 Jump
	
Label_858:
	goto Label_885; // 0x35a Jump
	
Label_885:
	goto Label_790; // 0x375 Jump
	
Label_860:
	var_90_object = 0; // 0x35c SetNull
	goto Label_878; // 0x35d Jump
	
Label_878:
	var_95_object = 0; // 0x36e SetNull
	goto Label_884; // 0x36f Jump
	
Label_884:
	var_90_object = 0; // 0x374 SetNull
	
Label_862:
	var_118_int = 0; // 0x35e PushI
	KillTimer(var_118_int); // 0x35f Func
	var_119_float = 0.5; // 0x361 PushF
	Sleep(var_119_float, var_88_bool); // 0x362 Func
	var_120_bool = var_88_bool == 0; // 0x364 Not
	if(var_120_bool == 0) goto Label_874; // 0x365 JumpB
	var_121_bool = var_0_bool; // 0x366 PushT
	if(var_121_bool == 0) goto Label_874; // 0x367 JumpB
	var_90_object = 0; // 0x368 SetNull
	goto Label_886; // 0x369 Jump
	
Label_874:
	var_122_int = 0; // 0x36a PushI
	var_123_float = 0.3; // 0x36b PushF
	SetTimer(var_122_int, var_123_float); // 0x36c Func
	
Label_880:
	var_124_int = 0; // 0x370 PushI
	KillTimer(var_124_int); // 0x371 Func
	goto Label_886; // 0x373 Jump
}


func_1298(var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x512 PushV
	GetPosition(var_85_cvector); // 0x513 Func
	var_83_cvector = var_85_cvector; // 0x515 Mov
	return 2; // 0x516 Return
}


func_1934(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x78e PushV
	var_24_bool = GlobalVars[0]; // 0x78f PushGE
	if(var_24_bool == 0) goto Label_1944; // 0x790 JumpB
	IsOverrideActive(var_23_bool); // 0x791 Func
	var_25_bool = var_23_bool == 0; // 0x793 Not
	if(var_25_bool == 0) goto Label_1943; // 0x794 JumpB
	WorkWithCorpse(var_21_object); // 0x795 Func
	
Label_1943:
	return 2; // 0x797 Return
	
Label_1944:
	return 2; // 0x798 Return
}


func_1303(var_68_cvector)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x517 PushV
	GetPosition(var_72_cvector); // 0x518 Func
	GetPosition(var_73_cvector); // 0x51a ObjFunc
	var_68_cvector = var_73_cvector - var_72_cvector; // 0x51c Sub2
	return 4; // 0x51d Return
}


func_1688(var_84_object)
{
	var_85_object = Obj(); // 0x699 PushV
	var_85_object = var_84_object; // 0x69a Mov
	TaskCall(6); // 0x69b TaskCall
	func_1150(var_86_object, var_87_cvector, var_88_bool, var_85_object); // 0x69c Call
	TaskReturn(); // 0x69d TaskReturn
	return 0; // 0x69f Return
}


func_1945(var_63_bool, var_64_object)
{
	var_65_bool = 0; var_66_bool = 0; // 0x799 PushV
	IsPlayerActor(var_64_object, var_66_bool); // 0x79a Func
	var_63_bool = var_66_bool; // 0x79c Mov
	return 2; // 0x79d Return
}


func_1562(var_181_float, var_182_float, var_183_float, var_184_float)
{
	var_185_bool = var_182_float < var_183_float; // 0x61b LT
	if(var_185_bool == 0) goto Label_1567; // 0x61c JumpB
	var_181_float = var_183_float; // 0x61d Mov
	return 0; // 0x61e Return
	
Label_1567:
	var_186_bool = var_182_float > var_184_float; // 0x61f GT
	if(var_186_bool == 0) goto Label_1571; // 0x620 JumpB
	var_181_float = var_184_float; // 0x621 Mov
	return 0; // 0x622 Return
	
Label_1571:
	var_181_float = var_182_float; // 0x623 Mov
	return 0; // 0x624 Return
}


func_1950(var_14_int)
{
	var_14_int = 0; // 0x79f MovI
	return 0; // 0x7a0 Return
}


func_1310(var_39_float)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x51e PushV
	GetPosition(var_44_cvector); // 0x51f Func
	GetPosition(var_45_cvector); // 0x521 ObjFunc
	var_46_cvector = var_45_cvector - var_44_cvector; // 0x523 Sub2
	var_39_float = var_46_cvector | var_46_cvector; // 0x524 Or2
	return 6; // 0x525 Return
}


func_1696(var_14_int)
{
	var_14_int = 0; // 0x6a1 MovI
	return 0; // 0x6a2 Return
}


func_33(var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_string = ""; var_20_object = Obj(); var_21_bool = 0; var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x21 PushV
	var_35_bool = var_14_object == 0; // 0x22 NullEq
	if(var_35_bool == 0) goto Label_41; // 0x23 JumpB
	var_36_string = ""; // 0x24 PushV
	var_36_string = "fdie"; // 0x25 MovS
	func_120(var_36_string); // 0x26 Call
	goto Label_119; // 0x28 Jump
	
Label_119:
	return 20; // 0x77 Return
	
Label_41:
	GetPosition(var_25_cvector); // 0x29 ObjFunc
	GetPosition(var_26_cvector); // 0x2b Func
	GetDirection(var_27_cvector); // 0x2d Func
	var_28_cvector = var_26_cvector - var_25_cvector; // 0x2f Sub2
	var_39_float = GetByIndex(var_28_cvector, 0); // 0x30 PushE
	var_40_float = GetByIndex(var_27_cvector, 0); // 0x31 PushE
	var_41_float = var_39_float * var_40_float; // 0x32 Mult
	var_42_float = GetByIndex(var_28_cvector, 2); // 0x33 PushE
	var_43_float = GetByIndex(var_27_cvector, 2); // 0x34 PushE
	var_44_float = var_42_float * var_43_float; // 0x35 Mult
	var_45_int = var_41_float + var_44_float; // 0x36 Add
	var_46_int = 0; // 0x37 PushI
	var_47_bool = var_45_int >= var_46_int; // 0x38 GE
	if(var_47_bool == 0) goto Label_60; // 0x39 JumpB
	var_29_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_30_object = var_14_object; // 0x45 Mov
	var_48_string = "GetScriptProperty"; // 0x46 PushS
	var_49_int = 2; // 0x47 PushI
	var_50_bool = IsFuncExist(var_14_object, var_48_string, var_49_int); // 0x48 FuncExist
	if(var_50_bool == 0) goto Label_85; // 0x49 JumpB
	var_51_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_31_bool, var_51_string); // 0x4b ObjFunc
	var_52_bool = var_31_bool; // 0x4d Push
	if(var_52_bool == 0) goto Label_85; // 0x4e JumpB
	var_53_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_30_object, var_53_string); // 0x50 ObjFunc
	var_54_bool = var_30_object == 0; // 0x52 NullEq
	if(var_54_bool == 0) goto Label_85; // 0x53 JumpB
	var_30_object = var_14_object; // 0x54 Mov
	
Label_85:
	var_55_string = "@GetEyesHeight"; // 0x55 PushS
	var_56_int = 1; // 0x56 PushI
	var_57_bool = IsFuncExist(var_30_object, var_55_string, var_56_int); // 0x57 FuncExist
	if(var_57_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_33_float); // 0x59 ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_58_float = GetByIndex(var_34_cvector, 1); // 0x5c PushE
	var_58_float = var_33_float; // 0x5d Mov
	SetByIndex(var_34_cvector, 1) = var_58_float; // 0x5e PopE
	var_59_string = "head"; // 0x5f PushS
	LookAsync(var_14_object, var_59_string, var_34_cvector); // 0x60 Func
	var_32_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_60_string = "all"; // 0x65 PushS
	PlayAnimation(var_60_string, var_29_string); // 0x66 Func
	WaitForAnimEnd(); // 0x68 Func
	var_61_bool = var_32_bool; // 0x6a Push
	if(var_61_bool == 0) goto Label_113; // 0x6b JumpB
	StopAsync(); // 0x6c Func
	var_62_string = "head"; // 0x6e PushS
	UnlookAsync(var_62_string); // 0x6f Func
	
Label_113:
	var_63_string = "all"; // 0x71 PushS
	LockAnimationEnd(var_63_string, var_29_string); // 0x72 Func
	RemoveEnvelope(); // 0x74 Func
	var_30_object = 0; // 0x76 SetNull
	
Label_100:
	var_32_bool = 0; // 0x64 MovB
	
Label_60:
	var_29_string = "bdie"; // 0x3c MovS
}


func_1953()
{
	return 0; // 0x7a2 Return
}


func_163()
{
	var_130_bool = 0; // 0xa3 PushV
	func_1547(var_130_bool); // 0xa4 Call
	var_133_bool = var_130_bool == 0; // 0xa6 Not
	if(var_133_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1715(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_1955(var_15_bool, var_16_object, var_17_object)
{
	var_18_string = ""; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; // 0x7a3 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x7a4 PushV
	var_23_object = var_17_object; // 0x7a5 Mov
	var_24_string = "class"; // 0x7a6 MovS
	func_1318(var_22_bool, var_23_object, var_24_string); // 0x7a7 Call
	var_31_bool = var_22_bool == 0; // 0x7a9 Not
	if(var_31_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_15_bool = 0; // 0x7ab MovB
	return 4; // 0x7ac Return
	
Label_1965:
	var_32_string = "class"; // 0x7ad PushS
	GetProperty(var_32_string, var_20_string); // 0x7ae ObjFunc
	var_33_string = "rat"; // 0x7b0 PushS
	var_34_bool = var_20_string == var_33_string; // 0x7b1 Eq
	if(var_34_bool == 0) goto Label_1974; // 0x7b2 JumpB
	var_15_bool = 0; // 0x7b3 MovB
	return 4; // 0x7b4 Return
	
Label_1974:
	var_35_string = "dog"; // 0x7b6 PushS
	var_36_bool = var_20_string == var_35_string; // 0x7b7 Eq
	if(var_36_bool == 0) goto Label_1979; // 0x7b8 JumpB
	var_15_bool = 0; // 0x7b9 MovB
	return 4; // 0x7ba Return
	
Label_1979:
	CanSee(var_21_bool, var_16_object); // 0x7bb Func
	var_37_bool = 0; // 0x7bd PushV
	var_37_bool = 1; // 0x7be MovB
	var_38_bool = var_21_bool; // 0x7bf Push
	if(var_38_bool == 0) goto Label_1993; // 0x7c0 JumpB
	var_39_float = 0; var_40_object = Obj(); // 0x7c1 PushV
	var_40_object = var_16_object; // 0x7c2 Mov
	func_1310(var_40_object); // 0x7c3 Call
	var_47_float = 250000.0; // 0x7c5 PushF
	var_48_bool = var_39_float <= var_47_float; // 0x7c6 LE
	if(var_48_bool == 0) goto Label_1993; // 0x7c7 JumpB
	var_37_bool = 0; // 0x7c8 MovB
	
Label_1993:
	if(var_37_bool == 0) goto Label_1999; // 0x7c9 JumpB
	var_49_float = -0.3; // 0x7ca PushF
	ReportReputationChange(var_16_object, var_17_object, var_49_float); // 0x7cb Func
	var_15_bool = 1; // 0x7cd MovB
	return 4; // 0x7ce Return
	
Label_1999:
	var_15_bool = 0; // 0x7cf MovB
	return 4; // 0x7d0 Return
}


func_1699()
{
	return 0; // 0x6a4 Return
}


func_1701(var_15_int)
{
	var_15_int = 0; // 0x6a6 MovI
	return 0; // 0x6a7 Return
}


func_926(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x39f PushV
	var_17_object = var_15_object; // 0x3a0 Mov
	func_1456(var_16_bool, var_17_object); // 0x3a1 Call
	var_14_bool = var_16_bool; // 0x3a2 Mov
	return 0; // 0x3a4 Return
}


func_1704()
{
	return 0; // 0x6a9 Return
}


func_933(var_115_string)
{
	var_115_string = "run"; // 0x3a5 MovS
	return 0; // 0x3a6 Return
}


func_1706(var_14_int)
{
	var_14_int = 2; // 0x6ab MovI
	return 0; // 0x6ac Return
}


func_683(var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0x2ab PushV
	
Label_684:
	var_70_bool = 0; var_71_object = Obj(); // 0x2ac PushV
	var_71_object = var_67_object; // 0x2ad Mov
	TaskCall(4); // 0x2ae TaskCall
	func_773(var_70_bool, var_71_object); // 0x2af Call
	TaskReturn(); // 0x2b0 TaskReturn
	if(var_72_bool == 0) goto Label_731; // 0x2b2 JumpB
	Face(var_67_object); // 0x2b3 Func
	WaitForAnimEnd(var_69_bool); // 0x2b5 Func
	var_125_bool = var_69_bool == 0; // 0x2b7 Not
	if(var_125_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_731; // 0x2b9 Jump
	
Label_731:
	return 2; // 0x2db Return
	
Label_698:
	var_126_string = "all"; // 0x2ba PushS
	var_127_string = "dattack_begin"; // 0x2bb PushS
	PlayAnimation(var_126_string, var_127_string); // 0x2bc Func
	WaitForAnimEnd(var_69_bool); // 0x2be Func
	var_128_bool = var_69_bool == 0; // 0x2c0 Not
	if(var_128_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_731; // 0x2c2 Jump
	
Label_707:
	var_129_float = 0; var_130_object = Obj(); // 0x2c3 PushV
	var_130_object = var_67_object; // 0x2c4 Mov
	func_1310(var_130_object); // 0x2c5 Call
	var_137_float = 90000.0; // 0x2c7 PushF
	var_138_bool = var_129_float <= var_137_float; // 0x2c8 LE
	if(var_138_bool == 0) goto Label_719; // 0x2c9 JumpB
	var_139_float = 0; var_140_object = Obj(); var_141_float = 0; // 0x2ca PushV
	var_140_object = var_67_object; // 0x2cb Mov
	var_141_float = 0.2; // 0x2cc MovF
	func_1352(var_139_float, var_140_object, var_141_float); // 0x2cd Call
	
Label_719:
	var_189_string = "all"; // 0x2cf PushS
	var_190_string = "dattack_end"; // 0x2d0 PushS
	PlayAnimation(var_189_string, var_190_string); // 0x2d1 Func
	WaitForAnimEnd(var_69_bool); // 0x2d3 Func
	var_191_bool = var_69_bool == 0; // 0x2d5 Not
	if(var_191_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_731; // 0x2d7 Jump
	
Label_728:
	StopAsync(); // 0x2d8 Func
	goto Label_684; // 0x2da Jump
}


func_1573(var_74_float, var_75_cvector, var_76_cvector)
{
	var_77_int = var_75_cvector | var_76_cvector; // 0x626 Or
	var_78_int = var_75_cvector | var_75_cvector; // 0x627 Or
	var_79_int = var_76_cvector | var_76_cvector; // 0x628 Or
	var_80_float = var_78_int * var_79_int; // 0x629 Mult
	var_81_float = sqrt(var_80_float); // 0x62a Sqrt
	var_74_float = var_77_int / var_77_int; // 0x62b Div2
	return 0; // 0x62c Return
}


func_1709(var_20_object)
{
	var_21_object = Obj(); // 0x6ae PushV
	var_21_object = var_20_object; // 0x6af Mov
	func_1934(var_21_object); // 0x6b0 Call
	return 0; // 0x6b2 Return
}


func_942(var_25_cvector, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; // 0x3ae PushV
	GetPosition(var_33_cvector); // 0x3af Func
	GetPosition(var_34_cvector); // 0x3b1 TObjFunc
	GetDirection(var_35_cvector); // 0x3b3 Func
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x3b5 PushV
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x3b6 PushV
	var_42_cvector = var_33_cvector - var_34_cvector; // 0x3b7 Sub2
	func_1552(var_41_cvector, var_42_cvector); // 0x3b8 Call
	var_48_float = 0.75; // 0x3ba PushF
	var_49_float = var_35_cvector * var_48_float; // 0x3bb Mult
	var_40_cvector = var_41_cvector + var_49_float; // 0x3bc Add2
	func_1552(var_39_cvector, var_40_cvector); // 0x3bd Call
	var_36_cvector = var_39_cvector; // 0x3be Mov
	var_50_int = 32; // 0x3c0 PushI
	var_51_float = 7000.0; // 0x3c1 PushF
	FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, var_50_int, var_51_float); // 0x3c2 Func
	var_52_int = 100; // 0x3c4 PushI
	var_38_float = var_38_float - var_52_int; // 0x3c5 Sub2
	var_53_int = 0; // 0x3c6 PushI
	var_54_bool = var_38_float < var_53_int; // 0x3c7 LT
	if(var_54_bool == 0) goto Label_970; // 0x3c8 JumpB
	var_38_float = 0; // 0x3c9 MovI
	
Label_970:
	var_25_cvector = var_37_cvector * var_38_float; // 0x3ca Mult2
	return 12; // 0x3cb Return
}


func_1318(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x526 PushV
	var_43_string = "HasProperty"; // 0x527 PushS
	var_44_int = 2; // 0x528 PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x529 FuncExist
	var_46_bool = var_45_bool == 0; // 0x52a Not
	if(var_46_bool == 0) goto Label_1326; // 0x52b JumpB
	var_38_bool = 0; // 0x52c MovB
	return 2; // 0x52d Return
	
Label_1326:
	HasProperty(var_40_string, var_42_bool); // 0x52e ObjFunc
	var_38_bool = var_42_bool; // 0x530 Mov
	return 2; // 0x531 Return
}


func_1456(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x5b0 PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x5b1 PushV
	var_21_object = var_17_object; // 0x5b2 Mov
	func_1420(var_20_bool, var_21_object); // 0x5b3 Call
	var_37_bool = var_20_bool == 0; // 0x5b5 Not
	if(var_37_bool == 0) goto Label_1465; // 0x5b6 JumpB
	var_16_bool = 0; // 0x5b7 MovB
	return 2; // 0x5b8 Return
	
Label_1465:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x5b9 PushV
	var_39_object = var_17_object; // 0x5ba Mov
	var_40_string = "noaccess"; // 0x5bb MovS
	func_1318(var_38_bool, var_39_object, var_40_string); // 0x5bc Call
	var_47_bool = var_38_bool == 0; // 0x5be Not
	if(var_47_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_16_bool = 1; // 0x5c0 MovB
	return 2; // 0x5c1 Return
	
Label_1474:
	var_48_string = "noaccess"; // 0x5c2 PushS
	GetProperty(var_48_string, var_19_int); // 0x5c3 ObjFunc
	var_49_int = 0; // 0x5c5 PushI
	var_16_bool = var_19_int == var_49_int; // 0x5c6 Eq2
	return 2; // 0x5c7 Return
}


func_1581(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x62d PushV
	GetGameTime(var_24_float); // 0x62e Func
	var_25_int = 1; // 0x630 PushI
	var_26_int = 0; // 0x631 PushV
	var_27_int = 24; // 0x632 PushI
	var_26_int = var_24_float / var_24_float; // 0x633 Div2
	var_22_int = var_25_int + var_26_int; // 0x634 Add2
	return 2; // 0x635 Return
}


func_1330(var_169_bool, var_170_object, var_171_string, var_172_float, var_173_float, var_174_float)
{
	var_175_float = 0; var_176_float = 0; // 0x532 PushV
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; // 0x533 PushV
	var_178_object = var_170_object; // 0x534 Mov
	var_179_string = var_171_string; // 0x535 Mov
	func_1318(var_177_bool, var_178_object, var_179_string); // 0x536 Call
	var_180_bool = var_177_bool == 0; // 0x538 Not
	if(var_180_bool == 0) goto Label_1340; // 0x539 JumpB
	var_169_bool = 0; // 0x53a MovB
	return 2; // 0x53b Return
	
Label_1340:
	GetProperty(var_171_string, var_176_float); // 0x53c ObjFunc
	var_181_float = 0; var_182_float = 0; var_183_float = 0; var_184_float = 0; // 0x53e PushV
	var_182_float = var_176_float + var_172_float; // 0x53f Add2
	var_183_float = var_173_float; // 0x540 Mov
	var_184_float = var_174_float; // 0x541 Mov
	func_1562(var_181_float, var_182_float, var_183_float, var_184_float); // 0x542 Call
	SetProperty(var_171_string, var_181_float); // 0x544 ObjFunc
	var_169_bool = 1; // 0x546 MovB
	return 2; // 0x547 Return
}


func_1715()
{
	return 0; // 0x6b3 Return
}


func_1716(var_19_int, var_20_int)
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x6b4 PushV
	var_38_bool = var_19_int > var_20_int; // 0x6b5 GT
	if(var_38_bool == 0) goto Label_1723; // 0x6b6 JumpB
	var_39_string = "GenerateMoney: iMin > iMax"; // 0x6b7 PushS
	Trace(var_39_string); // 0x6b8 Func
	return 8; // 0x6ba Return
	
Label_1723:
	var_34_int = 0; // 0x6bb MovI
	var_40_bool = var_19_int != var_20_int; // 0x6bc Neq
	if(var_40_bool == 0) goto Label_1730; // 0x6bd JumpB
	var_41_int = var_20_int - var_19_int; // 0x6be Sub
	irand(var_35_int, var_41_int); // 0x6bf Func
	goto Label_1734; // 0x6c1 Jump
	
Label_1734:
	var_34_int = var_34_int + var_19_int; // 0x6c6 Add2
	var_42_int = 0; // 0x6c7 PushI
	var_43_bool = var_34_int == var_42_int; // 0x6c8 Eq
	if(var_43_bool == 0) goto Label_1739; // 0x6c9 JumpB
	return 8; // 0x6ca Return
	
Label_1739:
	var_44_string = "Money"; // 0x6cb PushS
	GetInvItemByName(var_36_int, var_44_string); // 0x6cc Func
	var_45_int = 0; // 0x6ce PushI
	AddItem(var_37_bool, var_36_int, var_45_int, var_34_int); // 0x6cf Func
	return 8; // 0x6d1 Return
	
Label_1730:
	var_46_int = 0; // 0x6c2 PushI
	var_47_bool = var_19_int == var_46_int; // 0x6c3 Eq
	if(var_47_bool == 0) goto Label_1734; // 0x6c4 JumpB
	return 8; // 0x6c5 Return
}


func_1590(var_12_object)
{
	var_13_object = Obj(); // 0x637 PushV
	var_13_object = var_12_object; // 0x638 Mov
	TaskCall(0); // 0x639 TaskCall
	func_0(var_13_object); // 0x63a Call
	TaskReturn(); // 0x63b TaskReturn
	return 0; // 0x63d Return
}


func_311(var_2_bool)
{
	var_12_int = 110; // 0x137 PushI
	KillTimer(var_12_int); // 0x138 Func
	var_2_bool = 0; // 0x13a TMovB
	func_440(var_10_cvector, var_11_bool); // 0x13c Call
	return 0; // 0x13e Return
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1b8 TMovB
	var_1_bool = 0; // 0x1b9 TMovB
	Stop(); // 0x1ba Func
	StopGroup0(); // 0x1bc Func
	return 0; // 0x1be Return
}


func_571()
{
	var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_bool = 0; var_162_float = 0; var_163_bool = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_bool = 0; var_169_float = 0; var_170_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_171_bool = 0; // 0x23e PushV
	func_1547(var_171_bool); // 0x23f Call
	var_172_bool = var_171_bool == 0; // 0x241 Not
	if(var_172_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_173_int = 0; // 0x244 PushV
	func_1632(var_173_int); // 0x245 Call
	var_164_int = var_173_int; // 0x246 Mov
	var_165_int = 0; // 0x248 MovI
	
Label_585:
	var_186_bool = 0; // 0x249 PushV
	var_186_bool = 0; // 0x24a MovB
	var_187_int = 5; // 0x24b PushI
	var_188_bool = var_165_int < var_187_int; // 0x24c LT
	if(var_188_bool == 0) goto Label_595; // 0x24d JumpB
	var_189_bool = 0; // 0x24e PushV
	func_1547(var_189_bool); // 0x24f Call
	if(var_189_bool == 0) goto Label_595; // 0x251 JumpB
	var_186_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_186_bool == 0) goto Label_639; // 0x253 JumpB
	var_190_int = 3; // 0x254 PushI
	irand(var_166_int, var_190_int); // 0x255 Func
	var_191_int = 0; // 0x257 PushI
	var_192_bool = var_166_int == var_191_int; // 0x258 Eq
	if(var_192_bool == 0) goto Label_619; // 0x259 JumpB
	var_193_int = var_164_int; // 0x25a Push
	if(var_193_int == 0) goto Label_618; // 0x25b JumpB
	irand(var_167_int, var_164_int); // 0x25c Func
	var_194_string = "all"; // 0x25e PushS
	var_195_string = ""; var_196_int = 0; // 0x25f PushV
	var_196_int = var_167_int; // 0x260 Mov
	func_1625(var_195_string, var_196_int); // 0x261 Call
	PlayAnimation(var_194_string, var_195_string); // 0x263 Func
	WaitForAnimEnd(var_168_bool); // 0x265 Func
	var_197_bool = var_168_bool == 0; // 0x267 Not
	if(var_197_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_639; // 0x269 Jump
	
Label_639:
	return 14; // 0x27f Return
	
Label_618:
	goto Label_636; // 0x26a Jump
	
Label_636:
	var_198_int = 1; // 0x27c PushI
	var_165_int = var_165_int + var_198_int; // 0x27d Add2
	goto Label_585; // 0x27e Jump
	
Label_619:
	var_199_int = 1; // 0x26b PushI
	var_200_bool = var_166_int == var_199_int; // 0x26c Eq
	if(var_200_bool == 0) goto Label_633; // 0x26d JumpB
	var_201_int = 4; // 0x26e PushI
	rand(var_169_float, var_201_int); // 0x26f Func
	var_202_int = 1; // 0x271 PushI
	var_203_int = var_169_float + var_202_int; // 0x272 Add
	Sleep(var_203_int, var_170_bool); // 0x273 Func
	var_204_bool = var_170_bool == 0; // 0x275 Not
	if(var_204_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_639; // 0x277 Jump
	
Label_632:
	goto Label_636; // 0x278 Jump
	
Label_633:
	var_205_int = var_165_int; // 0x279 Push
	if(var_205_int == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1bf TMovB
	var_1_bool = 1; // 0x1c0 TMovB
	Stop(); // 0x1c1 Func
	StopGroup0(); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


func_319(var_2_bool)
{
	var_60_int = 110; // 0x13f PushI
	KillTimer(var_60_int); // 0x140 Func
	var_2_bool = 0; // 0x142 TMovB
	func_447(var_15_bool, var_16_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_1088(var_2_bool)
{
	Stop(); // 0x440 Func
	var_12_int = 120; // 0x442 PushI
	KillTimer(var_12_int); // 0x443 Func
	var_2_bool = 1; // 0x445 TMovB
	return 0; // 0x446 Return
}


func_454(var_155_bool)
{
	var_155_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_1352(var_139_float, var_140_object, var_141_float)
{
	var_142_int = 0; var_143_float = 0; var_144_float = 0; var_145_int = 0; var_146_float = 0; var_147_float = 0; // 0x548 PushV
	var_148_bool = 0; var_149_object = Obj(); var_150_string = ""; // 0x549 PushV
	var_149_object = var_140_object; // 0x54a Mov
	var_150_string = "disease"; // 0x54b MovS
	func_1318(var_148_bool, var_149_object, var_150_string); // 0x54c Call
	var_151_bool = var_148_bool == 0; // 0x54e Not
	if(var_151_bool == 0) goto Label_1362; // 0x54f JumpB
	var_139_float = 0; // 0x550 MovI
	return 6; // 0x551 Return
	
Label_1362:
	var_152_bool = 0; var_153_object = Obj(); var_154_string = ""; // 0x552 PushV
	var_153_object = var_140_object; // 0x553 Mov
	var_154_string = "armor_disease"; // 0x554 MovS
	func_1318(var_152_bool, var_153_object, var_154_string); // 0x555 Call
	if(var_152_bool == 0) goto Label_1382; // 0x557 JumpB
	var_155_string = "armor_disease"; // 0x558 PushS
	GetProperty(var_155_string, var_145_int); // 0x559 ObjFunc
	var_156_int = 100; // 0x55b PushI
	var_157_bool = var_145_int < var_156_int; // 0x55c LT
	if(var_157_bool == 0) goto Label_1380; // 0x55d JumpB
	var_158_int = 1; // 0x55e PushI
	var_159_float = 100.0; // 0x55f PushF
	var_160_float = var_145_int / var_159_float; // 0x560 Div
	var_161_int = var_158_int - var_160_float; // 0x561 Sub
	var_141_float = var_141_float * var_161_int; // 0x562 Mult2
	goto Label_1382; // 0x563 Jump
	
Label_1382:
	var_162_bool = 0; var_163_object = Obj(); var_164_string = ""; // 0x566 PushV
	var_163_object = var_140_object; // 0x567 Mov
	var_164_string = "immunity"; // 0x568 MovS
	func_1318(var_162_bool, var_163_object, var_164_string); // 0x569 Call
	if(var_162_bool == 0) goto Label_1405; // 0x56b JumpB
	var_165_string = "immunity"; // 0x56c PushS
	GetProperty(var_165_string, var_147_float); // 0x56d ObjFunc
	var_166_bool = var_147_float < var_141_float; // 0x56f LT
	if(var_166_bool == 0) goto Label_1399; // 0x570 JumpB
	var_167_string = "immunity"; // 0x571 PushS
	var_168_int = 0; // 0x572 PushI
	SetProperty(var_167_string, var_168_int); // 0x573 ObjFunc
	var_146_float = var_141_float - var_147_float; // 0x575 Sub2
	goto Label_1405; // 0x576 Jump
	
Label_1405:
	var_169_bool = 0; var_170_object = Obj(); var_171_string = ""; var_172_float = 0; var_173_float = 0; var_174_float = 0; // 0x57d PushV
	var_170_object = var_140_object; // 0x57e Mov
	var_171_string = "disease"; // 0x57f MovS
	var_172_float = var_146_float; // 0x580 Mov
	var_173_float = 0; // 0x581 MovI
	var_174_float = 1; // 0x582 MovI
	func_1330(var_169_bool, var_170_object, var_171_string, var_172_float, var_173_float, var_174_float); // 0x583 Call
	var_139_float = var_141_float; // 0x585 Mov
	return 6; // 0x586 Return
	
Label_1399:
	var_187_string = "immunity"; // 0x577 PushS
	var_188_int = var_147_float - var_141_float; // 0x578 Sub
	SetProperty(var_187_string, var_188_int); // 0x579 ObjFunc
	var_139_float = var_141_float; // 0x57b Mov
	return 6; // 0x57c Return
	
Label_1380:
	var_139_float = 0; // 0x564 MovI
	return 6; // 0x565 Return
}


func_1480(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x5c8 PushV
	var_38_bool = 0; // 0x5c9 PushV
	var_38_bool = 0; // 0x5ca MovB
	var_39_int = 4; // 0x5cb PushI
	var_40_bool = var_16_int != var_39_int; // 0x5cc Neq
	if(var_40_bool == 0) goto Label_1490; // 0x5cd JumpB
	var_41_int = 5; // 0x5ce PushI
	var_42_bool = var_16_int != var_41_int; // 0x5cf Neq
	if(var_42_bool == 0) goto Label_1490; // 0x5d0 JumpB
	var_38_bool = 1; // 0x5d1 MovB
	
Label_1490:
	if(var_38_bool == 0) goto Label_1509; // 0x5d2 JumpB
	GetScene(var_28_object); // 0x5d3 Func
	GetPosition(var_30_cvector); // 0x5d5 Func
	GetEyesHeight(var_31_float); // 0x5d7 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x5d9 PushE
	var_44_int = 2; // 0x5da PushI
	var_45_float = var_31_float / var_44_int; // 0x5db Div
	var_43_float = var_43_float + var_45_float; // 0x5dc Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x5dd PopE
	var_46_string = "scripted"; // 0x5de PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x5df PushVec
	var_48_string = "blood.xml"; // 0x5e0 PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x5e1 Func
	var_29_object = 0; // 0x5e3 SetNull
	var_28_object = 0; // 0x5e4 SetNull
	
Label_1509:
	var_49_bool = var_15_object == 0; // 0x5e5 NullEq
	if(var_49_bool == 0) goto Label_1512; // 0x5e6 JumpB
	return 20; // 0x5e7 Return
	
Label_1512:
	GetSecondaryAnimationType(var_32_int); // 0x5e8 Func
	var_50_int = 0; // 0x5ea PushI
	var_51_bool = var_32_int < var_50_int; // 0x5eb LT
	if(var_51_bool == 0) goto Label_1518; // 0x5ec JumpB
	return 20; // 0x5ed Return
	
Label_1518:
	GetPosition(var_33_cvector); // 0x5ee ObjFunc
	GetPosition(var_34_cvector); // 0x5f0 Func
	GetDirection(var_35_cvector); // 0x5f2 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x5f4 Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x5f5 PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x5f6 PushE
	var_54_float = var_52_float * var_53_float; // 0x5f7 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x5f8 PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x5f9 PushE
	var_57_float = var_55_float * var_56_float; // 0x5fa Mult
	var_58_int = var_54_float + var_57_float; // 0x5fb Add
	var_59_int = 0; // 0x5fc PushI
	var_60_bool = var_58_int >= var_59_int; // 0x5fd GE
	if(var_60_bool == 0) goto Label_1537; // 0x5fe JumpB
	var_37_string = "fhit"; // 0x5ff MovS
	goto Label_1538; // 0x600 Jump
	
Label_1538:
	var_61_string = "hit_react"; // 0x602 PushS
	var_62_string = "1"; // 0x603 PushS
	var_63_int = var_37_string + var_62_string; // 0x604 Add
	var_64_string = "2"; // 0x605 PushS
	var_65_int = var_37_string + var_64_string; // 0x606 Add
	var_66_int = -10; // 0x607 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x608 Func
	return 20; // 0x60a Return
	
Label_1537:
	var_37_string = "bhit"; // 0x601 MovS
}


func_972(var_0_bool, var_1_bool, var_2_bool, var_55_object)
{
	var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_bool = 0; var_62_cvector = CVector(0,0,0); var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; // 0x3cc PushV
	var_0_bool = var_55_object; // 0x3cd TMov
	var_69_cvector = CVector(0,0,0); var_70_float = 0; // 0x3ce PushV
	var_70_float = 1.74533; // 0x3cf MovF
	func_942(var_69_cvector, var_70_float); // 0x3d0 Call
	var_64_cvector = var_69_cvector; // 0x3d1 Mov
	var_65_float = var_64_cvector | var_64_cvector; // 0x3d3 Or2
	var_99_float = 10000.0; // 0x3d4 PushF
	var_100_bool = var_65_float < var_99_float; // 0x3d5 LT
	if(var_100_bool == 0) goto Label_992; // 0x3d6 JumpB
	var_101_string = "Can't retreat, distance: "; // 0x3d7 PushS
	var_102_float = sqrt(var_65_float); // 0x3d8 Sqrt
	var_103_int = var_101_string + var_102_float; // 0x3d9 Add
	Trace(var_103_int); // 0x3da Func
	var_104_float = 0.5; // 0x3dc PushF
	Sleep(var_104_float); // 0x3dd Func
	return 10; // 0x3df Return
	
Label_992:
	var_105_float = GetByIndex(var_64_cvector, 0); // 0x3e0 PushE
	var_106_float = GetByIndex(var_64_cvector, 2); // 0x3e1 PushE
	Rotate(var_105_float, var_106_float); // 0x3e2 Func
	var_107_cvector = CVector(0,0,0); // 0x3e4 PushV
	func_1298(var_107_cvector); // 0x3e5 Call
	var_1_bool = var_107_cvector + var_64_cvector; // 0x3e7 Add2
	var_110_int = 120; // 0x3e8 PushI
	var_111_float = 0.5; // 0x3e9 PushF
	SetTimer(var_110_int, var_111_float); // 0x3ea Func
	var_2_bool = 0; // 0x3ec TMovB
	
Label_1005:
	var_112_int = 1; // 0x3ed PushI
	MovePoint(var_112_int, var_112_int, var_66_bool); // 0x3ee Func
	var_113_bool = var_66_bool; // 0x3f0 Push
	if(var_113_bool == 0) goto Label_1033; // 0x3f1 JumpB
	var_114_bool = var_0_bool == 0; // 0x3f2 NullEq
	if(var_114_bool == 0) goto Label_1014; // 0x3f3 JumpB
	goto Label_1035; // 0x3f4 Jump
	
Label_1035:
	return 10; // 0x40b Return
	
Label_1014:
	var_115_cvector = CVector(0,0,0); var_116_float = 0; // 0x3f6 PushV
	var_116_float = 2.61799; // 0x3f7 MovF
	func_942(var_115_cvector, var_116_float); // 0x3f8 Call
	var_67_cvector = var_115_cvector; // 0x3f9 Mov
	var_68_float = var_67_cvector | var_67_cvector; // 0x3fb Or2
	var_117_float = 10000.0; // 0x3fc PushF
	var_118_bool = var_68_float >= var_117_float; // 0x3fd GE
	if(var_118_bool == 0) goto Label_1032; // 0x3fe JumpB
	var_119_cvector = CVector(0,0,0); // 0x3ff PushV
	func_1298(var_119_cvector); // 0x400 Call
	var_1_bool = var_119_cvector + var_67_cvector; // 0x402 Add2
	var_120_int = 120; // 0x403 PushI
	var_121_float = 0.5; // 0x404 PushF
	SetTimer(var_120_int, var_121_float); // 0x405 Func
	goto Label_1033; // 0x407 Jump
	
Label_1033:
	var_122_bool = var_2_bool == 0; // 0x409 Not
	if(var_122_bool == 0) goto Label_1005; // 0x40a JumpB
	
Label_1032:
	goto Label_1035; // 0x408 Jump
}


func_336(var_2_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; // 0x150 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x151 PushV
	var_18_object = var_12_object; // 0x152 Mov
	func_1456(var_17_bool, var_18_object); // 0x153 Call
	var_51_bool = var_17_bool == 0; // 0x155 Not
	if(var_51_bool == 0) goto Label_344; // 0x156 JumpB
	return 4; // 0x157 Return
	
Label_344:
	var_52_bool = var_2_bool; // 0x158 PushT
	if(var_52_bool == 0) goto Label_347; // 0x159 JumpB
	return 4; // 0x15a Return
	
Label_347:
	IsPlayerActor(var_12_object, var_15_bool); // 0x15b Func
	var_53_bool = var_15_bool == 0; // 0x15d Not
	if(var_53_bool == 0) goto Label_352; // 0x15e JumpB
	return 4; // 0x15f Return
	
Label_352:
	var_54_int = 0; var_55_object = Obj(); // 0x160 PushV
	var_55_object = var_12_object; // 0x161 Mov
	func_1649(var_55_object); // 0x162 Call
	var_16_int = var_54_int; // 0x163 Mov
	var_56_int = 0; // 0x165 PushI
	var_57_bool = var_16_int > var_56_int; // 0x166 GT
	if(var_57_bool == 0) goto Label_375; // 0x167 JumpB
	var_58_int = 1; // 0x168 PushI
	var_59_bool = var_16_int > var_58_int; // 0x169 GT
	if(var_59_bool == 0) goto Label_366; // 0x16a JumpB
	func_319(var_16_int); // 0x16c Call
	
Label_366:
	var_61_object = Obj(); // 0x16e PushV
	var_61_object = var_12_object; // 0x16f Mov
	func_1652(var_61_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_192_int = 110; // 0x173 PushI
	var_193_float = 10.0; // 0x174 PushF
	SetTimer(var_192_int, var_193_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_2001()
{
	var_65_bool = GlobalVars[0]; // 0x7d2 PushGE
	var_65_bool = 1; // 0x7d3 MovB
	GlobalVars[0] = var_65_bool; // 0x7d4 PopGE
	var_66_int = 50; // 0x7d5 PushI
	var_67_int = 40; // 0x7d6 PushI
	SetRTEnvelope(var_66_int, var_67_int); // 0x7d7 Func
	return 0; // 0x7d9 Return
}


func_1104(var_0_bool, var_63_bool)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x450 PushV
	GetDirection(var_66_cvector); // 0x451 Func
	var_68_cvector = CVector(0,0,0); var_69_object = Obj(); // 0x453 PushV
	var_69_object = var_0_bool; // 0x454 MovT
	func_1303(var_69_object); // 0x455 Call
	var_67_cvector = var_68_cvector; // 0x456 Mov
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x458 PushV
	var_75_cvector = var_66_cvector; // 0x459 Mov
	var_76_cvector = var_67_cvector; // 0x45a Mov
	func_1573(var_74_float, var_75_cvector, var_76_cvector); // 0x45b Call
	var_82_float = -0.34202; // 0x45d PushF
	var_63_bool = var_74_float >= var_82_float; // 0x45e GE2
	return 4; // 0x45f Return
}


func_1746(var_13_bool)
{
	var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x6d2 PushV
	var_18_bool = var_13_bool; // 0x6d3 Push
	if(var_18_bool == 0) goto Label_1835; // 0x6d4 JumpB
	var_19_int = 0; var_20_int = 0; // 0x6d5 PushV
	var_19_int = 0; // 0x6d6 MovI
	var_21_int = 100; // 0x6d7 PushI
	var_22_int = 0; // 0x6d8 PushV
	func_1581(var_22_int); // 0x6d9 Call
	var_28_int = 100; // 0x6db PushI
	var_29_float = var_22_int * var_28_int; // 0x6dc Mult
	var_20_int = var_21_int + var_29_float; // 0x6dd Add2
	func_1716(var_19_int, var_20_int); // 0x6de Call
	var_48_int = 9; // 0x6e0 PushI
	irand(var_16_int, var_48_int); // 0x6e1 Func
	var_49_int = 0; // 0x6e3 PushI
	var_50_bool = var_16_int == var_49_int; // 0x6e4 Eq
	if(var_50_bool == 0) goto Label_1775; // 0x6e5 JumpB
	var_51_int = 0; var_52_string = ""; // 0x6e6 PushV
	var_52_string = "lemon"; // 0x6e7 MovS
	func_1921(var_51_int, var_52_string); // 0x6e8 Call
	var_55_int = 0; // 0x6ea PushI
	var_56_int = 1; // 0x6eb PushI
	AddItem(var_17_bool, var_51_int, var_55_int, var_56_int); // 0x6ec Func
	goto Label_1834; // 0x6ee Jump
	
Label_1834:
	goto Label_1920; // 0x72a Jump
	
Label_1920:
	return 4; // 0x780 Return
	
Label_1775:
	var_57_int = 1; // 0x6ef PushI
	var_58_bool = var_16_int == var_57_int; // 0x6f0 Eq
	if(var_58_bool == 0) goto Label_1787; // 0x6f1 JumpB
	var_59_int = 0; var_60_string = ""; // 0x6f2 PushV
	var_60_string = "rusk"; // 0x6f3 MovS
	func_1921(var_59_int, var_60_string); // 0x6f4 Call
	var_61_int = 0; // 0x6f6 PushI
	var_62_int = 1; // 0x6f7 PushI
	AddItem(var_17_bool, var_59_int, var_61_int, var_62_int); // 0x6f8 Func
	goto Label_1834; // 0x6fa Jump
	
Label_1787:
	var_63_int = 2; // 0x6fb PushI
	var_64_bool = var_16_int == var_63_int; // 0x6fc Eq
	if(var_64_bool == 0) goto Label_1799; // 0x6fd JumpB
	var_65_int = 0; var_66_string = ""; // 0x6fe PushV
	var_66_string = "hook"; // 0x6ff MovS
	func_1921(var_65_int, var_66_string); // 0x700 Call
	var_67_int = 0; // 0x702 PushI
	var_68_int = 1; // 0x703 PushI
	AddItem(var_17_bool, var_65_int, var_67_int, var_68_int); // 0x704 Func
	goto Label_1834; // 0x706 Jump
	
Label_1799:
	var_69_int = 4; // 0x707 PushI
	var_70_bool = var_16_int == var_69_int; // 0x708 Eq
	if(var_70_bool == 0) goto Label_1811; // 0x709 JumpB
	var_71_int = 0; var_72_string = ""; // 0x70a PushV
	var_72_string = "syringe"; // 0x70b MovS
	func_1921(var_71_int, var_72_string); // 0x70c Call
	var_73_int = 0; // 0x70e PushI
	var_74_int = 1; // 0x70f PushI
	AddItem(var_17_bool, var_71_int, var_73_int, var_74_int); // 0x710 Func
	goto Label_1834; // 0x712 Jump
	
Label_1811:
	var_75_int = 5; // 0x713 PushI
	var_76_bool = var_16_int == var_75_int; // 0x714 Eq
	if(var_76_bool == 0) goto Label_1823; // 0x715 JumpB
	var_77_int = 0; var_78_string = ""; // 0x716 PushV
	var_78_string = "watch"; // 0x717 MovS
	func_1921(var_77_int, var_78_string); // 0x718 Call
	var_79_int = 0; // 0x71a PushI
	var_80_int = 1; // 0x71b PushI
	AddItem(var_17_bool, var_77_int, var_79_int, var_80_int); // 0x71c Func
	goto Label_1834; // 0x71e Jump
	
Label_1823:
	var_81_int = 6; // 0x71f PushI
	var_82_bool = var_16_int == var_81_int; // 0x720 Eq
	if(var_82_bool == 0) goto Label_1834; // 0x721 JumpB
	var_83_int = 0; var_84_string = ""; // 0x722 PushV
	var_84_string = "razor"; // 0x723 MovS
	func_1921(var_83_int, var_84_string); // 0x724 Call
	var_85_int = 0; // 0x726 PushI
	var_86_int = 1; // 0x727 PushI
	AddItem(var_17_bool, var_83_int, var_85_int, var_86_int); // 0x728 Func
	
Label_1835:
	var_87_int = 0; var_88_int = 0; // 0x72b PushV
	var_87_int = 0; // 0x72c MovI
	var_89_int = 50; // 0x72d PushI
	var_90_int = 0; // 0x72e PushV
	func_1581(var_90_int); // 0x72f Call
	var_91_int = 50; // 0x731 PushI
	var_92_float = var_90_int * var_91_int; // 0x732 Mult
	var_88_int = var_89_int + var_92_float; // 0x733 Add2
	func_1716(var_87_int, var_88_int); // 0x734 Call
	var_93_int = 8; // 0x736 PushI
	irand(var_16_int, var_93_int); // 0x737 Func
	var_94_int = 0; // 0x739 PushI
	var_95_bool = var_16_int == var_94_int; // 0x73a Eq
	if(var_95_bool == 0) goto Label_1861; // 0x73b JumpB
	var_96_int = 0; var_97_string = ""; // 0x73c PushV
	var_97_string = "beads"; // 0x73d MovS
	func_1921(var_96_int, var_97_string); // 0x73e Call
	var_98_int = 0; // 0x740 PushI
	var_99_int = 1; // 0x741 PushI
	AddItem(var_17_bool, var_96_int, var_98_int, var_99_int); // 0x742 Func
	goto Label_1920; // 0x744 Jump
	
Label_1861:
	var_100_int = 1; // 0x745 PushI
	var_101_bool = var_16_int == var_100_int; // 0x746 Eq
	if(var_101_bool == 0) goto Label_1873; // 0x747 JumpB
	var_102_int = 0; var_103_string = ""; // 0x748 PushV
	var_103_string = "bracelet"; // 0x749 MovS
	func_1921(var_102_int, var_103_string); // 0x74a Call
	var_104_int = 0; // 0x74c PushI
	var_105_int = 1; // 0x74d PushI
	AddItem(var_17_bool, var_102_int, var_104_int, var_105_int); // 0x74e Func
	goto Label_1920; // 0x750 Jump
	
Label_1873:
	var_106_int = 2; // 0x751 PushI
	var_107_bool = var_16_int == var_106_int; // 0x752 Eq
	if(var_107_bool == 0) goto Label_1885; // 0x753 JumpB
	var_108_int = 0; var_109_string = ""; // 0x754 PushV
	var_109_string = "ear_ring"; // 0x755 MovS
	func_1921(var_108_int, var_109_string); // 0x756 Call
	var_110_int = 0; // 0x758 PushI
	var_111_int = 1; // 0x759 PushI
	AddItem(var_17_bool, var_108_int, var_110_int, var_111_int); // 0x75a Func
	goto Label_1920; // 0x75c Jump
	
Label_1885:
	var_112_int = 3; // 0x75d PushI
	var_113_bool = var_16_int == var_112_int; // 0x75e Eq
	if(var_113_bool == 0) goto Label_1897; // 0x75f JumpB
	var_114_int = 0; var_115_string = ""; // 0x760 PushV
	var_115_string = "gold_ring"; // 0x761 MovS
	func_1921(var_114_int, var_115_string); // 0x762 Call
	var_116_int = 0; // 0x764 PushI
	var_117_int = 1; // 0x765 PushI
	AddItem(var_17_bool, var_114_int, var_116_int, var_117_int); // 0x766 Func
	goto Label_1920; // 0x768 Jump
	
Label_1897:
	var_118_int = 4; // 0x769 PushI
	var_119_bool = var_16_int == var_118_int; // 0x76a Eq
	if(var_119_bool == 0) goto Label_1909; // 0x76b JumpB
	var_120_int = 0; var_121_string = ""; // 0x76c PushV
	var_121_string = "silver_ring"; // 0x76d MovS
	func_1921(var_120_int, var_121_string); // 0x76e Call
	var_122_int = 0; // 0x770 PushI
	var_123_int = 1; // 0x771 PushI
	AddItem(var_17_bool, var_120_int, var_122_int, var_123_int); // 0x772 Func
	goto Label_1920; // 0x774 Jump
	
Label_1909:
	var_124_int = 5; // 0x775 PushI
	var_125_bool = var_16_int == var_124_int; // 0x776 Eq
	if(var_125_bool == 0) goto Label_1920; // 0x777 JumpB
	var_126_int = 0; var_127_string = ""; // 0x778 PushV
	var_127_string = "flower"; // 0x779 MovS
	func_1921(var_126_int, var_127_string); // 0x77a Call
	var_128_int = 0; // 0x77c PushI
	var_129_int = 1; // 0x77d PushI
	AddItem(var_17_bool, var_126_int, var_128_int, var_129_int); // 0x77e Func
}


func_1625(var_179_string, var_180_int)
{
	var_181_string = ""; var_182_string = ""; // 0x659 PushV
	var_182_string = "idle"; // 0x65a MovS
	var_183_int = var_180_int; // 0x65b Push
	if(var_183_int == 0) goto Label_1630; // 0x65c JumpB
	var_182_string = var_182_string + var_180_int; // 0x65d Add2
	
Label_1630:
	var_179_string = var_182_string; // 0x65e Mov
	return 2; // 0x65f Return
}


func_732()
{
	StopAsync(); // 0x2dc Func
	StopAnimation(); // 0x2de Func
	return 0; // 0x2e0 Return
}


func_120(var_36_string)
{
	RemoveRTEnvelope(); // 0x79 Func
	SetDeathState(); // 0x7b Func
	Stop(); // 0x7d Func
	StopAsync(); // 0x7f Func
	StopSecondaryAnimation(); // 0x81 Func
	var_37_string = "all"; // 0x83 PushS
	PlayAnimation(var_37_string, var_36_string); // 0x84 Func
	WaitForAnimEnd(); // 0x86 Func
	var_38_string = "all"; // 0x88 PushS
	LockAnimationEnd(var_38_string, var_36_string); // 0x89 Func
	RemoveEnvelope(); // 0x8b Func
	return 0; // 0x8d Return
}


func_1632(var_173_int)
{
	var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_bool = 0; // 0x660 PushV
	var_176_int = 0; // 0x661 MovI
	
Label_1634:
	var_178_string = "all"; // 0x662 PushS
	var_179_string = ""; var_180_int = 0; // 0x663 PushV
	var_180_int = var_176_int; // 0x664 Mov
	func_1625(var_179_string, var_180_int); // 0x665 Call
	HasAnimation(var_177_bool, var_178_string, var_179_string); // 0x667 Func
	var_184_bool = var_177_bool == 0; // 0x669 Not
	if(var_184_bool == 0) goto Label_1644; // 0x66a JumpB
	goto Label_1647; // 0x66b Jump
	
Label_1647:
	var_173_int = var_176_int; // 0x66f Mov
	return 4; // 0x670 Return
	
Label_1644:
	var_185_int = 1; // 0x66c PushI
	var_176_int = var_176_int + var_185_int; // 0x66d Add2
	goto Label_1634; // 0x66e Jump
}


func_1120(var_25_cvector, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; // 0x460 PushV
	GetPosition(var_33_cvector); // 0x461 Func
	GetPosition(var_34_cvector); // 0x463 TObjFunc
	GetDirection(var_35_cvector); // 0x465 Func
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x467 PushV
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x468 PushV
	var_42_cvector = var_33_cvector - var_34_cvector; // 0x469 Sub2
	func_1552(var_41_cvector, var_42_cvector); // 0x46a Call
	var_48_float = 0.75; // 0x46c PushF
	var_49_float = var_35_cvector * var_48_float; // 0x46d Mult
	var_40_cvector = var_41_cvector + var_49_float; // 0x46e Add2
	func_1552(var_39_cvector, var_40_cvector); // 0x46f Call
	var_36_cvector = var_39_cvector; // 0x470 Mov
	var_50_int = 32; // 0x472 PushI
	var_51_float = 7000.0; // 0x473 PushF
	FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, var_50_int, var_51_float); // 0x474 Func
	var_52_int = 100; // 0x476 PushI
	var_38_float = var_38_float - var_52_int; // 0x477 Sub2
	var_53_int = 0; // 0x478 PushI
	var_54_bool = var_38_float < var_53_int; // 0x479 LT
	if(var_54_bool == 0) goto Label_1148; // 0x47a JumpB
	var_38_float = 0; // 0x47b MovI
	
Label_1148:
	var_25_cvector = var_37_cvector * var_38_float; // 0x47c Mult2
	return 12; // 0x47d Return
}


func_1649(var_54_int)
{
	var_54_int = 2; // 0x672 MovI
	return 0; // 0x673 Return
}


func_1266(var_2_bool)
{
	Stop(); // 0x4f2 Func
	var_12_int = 120; // 0x4f4 PushI
	KillTimer(var_12_int); // 0x4f5 Func
	var_2_bool = 1; // 0x4f7 TMovB
	return 0; // 0x4f8 Return
}


func_1652(var_61_object)
{
	var_62_object = Obj(); // 0x675 PushV
	var_62_object = var_61_object; // 0x676 Mov
	TaskCall(3); // 0x677 TaskCall
	func_645(var_62_object); // 0x678 Call
	TaskReturn(); // 0x679 TaskReturn
	return 0; // 0x67b Return
}


func_376(var_0_bool, var_1_bool)
{
	var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_float = 0; var_138_bool = 0; var_139_object = Obj(); var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_object = Obj(); var_147_bool = 0; // 0x178 PushV
	var_0_bool = 0; // 0x179 TMovB
	var_1_bool = 0; // 0x17a TMovB
	var_148_float = 0.5; // 0x17b PushF
	rand(var_141_float, var_148_float); // 0x17c Func
	Sleep(var_141_float); // 0x17e Func
	
Label_384:
	var_149_bool = var_0_bool == 0; // 0x180 Not
	if(var_149_bool == 0) goto Label_432; // 0x181 JumpB
	var_150_bool = var_1_bool == 0; // 0x182 Not
	if(var_150_bool == 0) goto Label_404; // 0x183 JumpB
	
Label_388:
	GetPosition(var_143_cvector); // 0x184 Func
	GetCameraFarDistance(var_144_float); // 0x186 Func
	var_151_float = 2.5; // 0x188 PushF
	var_144_float = var_144_float * var_151_float; // 0x189 Mult2
	GetRandomPFPointInCircle(var_142_cvector, var_143_cvector, var_144_float, var_145_bool); // 0x18a Func
	var_152_bool = var_145_bool; // 0x18c Push
	if(var_152_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_403; // 0x18e Jump
	
Label_403:
	goto Label_405; // 0x193 Jump
	
Label_405:
	FindShiftedPathTo(var_146_object, var_142_cvector); // 0x195 Func
	var_153_bool = var_146_object != 0; // 0x197 NullNeq
	if(var_153_bool == 0) goto Label_427; // 0x198 JumpB
	RotatePath(var_146_object, var_147_bool); // 0x199 Func
	var_154_bool = var_147_bool; // 0x19b Push
	if(var_154_bool == 0) goto Label_426; // 0x19c JumpB
	var_155_bool = 0; // 0x19d PushV
	func_454(var_155_bool); // 0x19e Call
	FollowPath(var_146_object, var_155_bool, var_147_bool); // 0x1a0 Func
	var_146_object = 0; // 0x1a2 SetNull
	var_156_bool = var_147_bool; // 0x1a3 Push
	if(var_156_bool == 0) goto Label_426; // 0x1a4 JumpB
	TaskCall(2); // 0x1a6 TaskCall
	func_571(); // 0x1a7 Call
	TaskReturn(); // 0x1a8 TaskReturn
	
Label_426:
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_146_object = 0; // 0x1ae SetNull
	goto Label_384; // 0x1af Jump
	
Label_427:
	var_206_int = 1; // 0x1ab PushI
	Sleep(var_206_int); // 0x1ac Func
	
Label_399:
	var_207_int = 1; // 0x18f PushI
	Sleep(var_207_int); // 0x190 Func
	goto Label_388; // 0x192 Jump
	
Label_404:
	var_1_bool = 0; // 0x194 TMovB
	
Label_432:
	return 14; // 0x1b0 Return
}


func_1660(var_14_int, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x67d PushV
	var_17_object = var_15_object; // 0x67e Mov
	func_1456(var_16_bool, var_17_object); // 0x67f Call
	if(var_16_bool == 0) goto Label_1668; // 0x681 JumpB
	var_14_int = 2; // 0x682 MovI
	goto Label_1669; // 0x683 Jump
	
Label_1669:
	return 0; // 0x685 Return
	
Label_1668:
	var_14_int = 0; // 0x684 MovI
}


func_1150(var_0_bool, var_1_bool, var_2_bool, var_85_object)
{
	var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_bool = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0; // 0x47e PushV
	var_0_bool = var_85_object; // 0x47f TMov
	var_99_cvector = CVector(0,0,0); var_100_float = 0; // 0x480 PushV
	var_100_float = 1.74533; // 0x481 MovF
	func_1120(var_99_cvector, var_100_float); // 0x482 Call
	var_94_cvector = var_99_cvector; // 0x483 Mov
	var_95_float = var_94_cvector | var_94_cvector; // 0x485 Or2
	var_129_float = 10000.0; // 0x486 PushF
	var_130_bool = var_95_float < var_129_float; // 0x487 LT
	if(var_130_bool == 0) goto Label_1170; // 0x488 JumpB
	var_131_string = "Can't retreat, distance: "; // 0x489 PushS
	var_132_float = sqrt(var_95_float); // 0x48a Sqrt
	var_133_int = var_131_string + var_132_float; // 0x48b Add
	Trace(var_133_int); // 0x48c Func
	var_134_float = 0.5; // 0x48e PushF
	Sleep(var_134_float); // 0x48f Func
	return 10; // 0x491 Return
	
Label_1170:
	var_135_float = GetByIndex(var_94_cvector, 0); // 0x492 PushE
	var_136_float = GetByIndex(var_94_cvector, 2); // 0x493 PushE
	Rotate(var_135_float, var_136_float); // 0x494 Func
	var_137_cvector = CVector(0,0,0); // 0x496 PushV
	func_1298(var_137_cvector); // 0x497 Call
	var_1_bool = var_137_cvector + var_94_cvector; // 0x499 Add2
	var_140_int = 120; // 0x49a PushI
	var_141_float = 0.5; // 0x49b PushF
	SetTimer(var_140_int, var_141_float); // 0x49c Func
	var_2_bool = 0; // 0x49e TMovB
	
Label_1183:
	var_142_int = 1; // 0x49f PushI
	MovePoint(var_142_int, var_142_int, var_96_bool); // 0x4a0 Func
	var_143_bool = var_96_bool; // 0x4a2 Push
	if(var_143_bool == 0) goto Label_1211; // 0x4a3 JumpB
	var_144_bool = var_0_bool == 0; // 0x4a4 NullEq
	if(var_144_bool == 0) goto Label_1192; // 0x4a5 JumpB
	goto Label_1213; // 0x4a6 Jump
	
Label_1213:
	return 10; // 0x4bd Return
	
Label_1192:
	var_145_cvector = CVector(0,0,0); var_146_float = 0; // 0x4a8 PushV
	var_146_float = 2.61799; // 0x4a9 MovF
	func_1120(var_145_cvector, var_146_float); // 0x4aa Call
	var_97_cvector = var_145_cvector; // 0x4ab Mov
	var_98_float = var_97_cvector | var_97_cvector; // 0x4ad Or2
	var_147_float = 10000.0; // 0x4ae PushF
	var_148_bool = var_98_float >= var_147_float; // 0x4af GE
	if(var_148_bool == 0) goto Label_1210; // 0x4b0 JumpB
	var_149_cvector = CVector(0,0,0); // 0x4b1 PushV
	func_1298(var_149_cvector); // 0x4b2 Call
	var_1_bool = var_149_cvector + var_97_cvector; // 0x4b4 Add2
	var_150_int = 120; // 0x4b5 PushI
	var_151_float = 0.5; // 0x4b6 PushF
	SetTimer(var_150_int, var_151_float); // 0x4b7 Func
	goto Label_1211; // 0x4b9 Jump
	
Label_1211:
	var_152_bool = var_2_bool == 0; // 0x4bb Not
	if(var_152_bool == 0) goto Label_1183; // 0x4bc JumpB
	
Label_1210:
	goto Label_1213; // 0x4ba Jump
}


