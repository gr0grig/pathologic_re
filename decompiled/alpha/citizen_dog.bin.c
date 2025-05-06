task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_object; // 0x11 Mov
	func_1963(var_15_object); // 0x12 Call
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_object; // 0x19 Mov
	func_1966(var_18_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1972(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xac PushV
	var_14_int = 0; var_15_object = Obj(); // 0xad PushV
	var_15_object = var_11_object; // 0xae Mov
	func_1963(var_15_object); // 0xaf Call
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
	var_21_object = var_11_object; // 0xbc Mov
	func_1966(var_21_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xc0 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xc1 PushV
	var_15_object = var_11_object; // 0xc2 Mov
	func_1922(var_14_int, var_15_object); // 0xc3 Call
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
	var_55_object = var_11_object; // 0xd0 Mov
	func_1932(var_55_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xd4 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0xd5 PushV
	var_16_object = var_11_bool; // 0xd6 Mov
	var_17_object = var_12_object; // 0xd7 Mov
	func_1990(var_15_bool, var_16_object, var_17_object); // 0xd8 Call
	if(var_15_bool == 0) goto Label_237; // 0xda JumpB
	var_65_int = 0; var_66_object = Obj(); // 0xdb PushV
	var_66_object = var_11_bool; // 0xdc Mov
	func_1940(var_65_int, var_66_object); // 0xdd Call
	var_14_int = var_65_int; // 0xde Mov
	var_97_int = 0; // 0xe0 PushI
	var_98_bool = var_14_int > var_97_int; // 0xe1 GT
	if(var_98_bool == 0) goto Label_237; // 0xe2 JumpB
	var_99_int = 1; // 0xe3 PushI
	var_100_bool = var_14_int > var_99_int; // 0xe4 GT
	if(var_100_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_14_int); // 0xe7 Call
	
Label_233:
	var_102_object = Obj(); // 0xe9 PushV
	var_102_object = var_11_bool; // 0xea Mov
	func_1947(var_102_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xee PushV
	var_14_int = 0; var_15_object = Obj(); // 0xef PushV
	var_15_object = var_11_object; // 0xf0 Mov
	func_1953(var_15_object); // 0xf1 Call
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
	var_21_object = var_11_object; // 0xfe Mov
	func_1956(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x102 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x103 PushV
	var_16_string = var_12_object; // 0x104 Mov
	var_17_object = var_11_bool; // 0x105 Mov
	func_1958(var_17_object); // 0x106 Call
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
	var_23_string = var_12_object; // 0x113 Mov
	var_24_object = var_11_bool; // 0x114 Mov
	func_1961(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x119 PushV
	var_12_object = var_11_object; // 0x11a Mov
	func_336(var_11_object, var_12_object); // 0x11b Call
	return 0; // 0x11d Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x11f PushV
	var_12_object = var_11_object; // 0x120 Mov
	func_336(var_11_object, var_12_object); // 0x121 Call
	return 0; // 0x123 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 110; // 0x125 PushI
	var_13_bool = var_11_object != var_12_int; // 0x126 Neq
	if(var_13_bool == 0) goto Label_297; // 0x127 JumpB
	return 0; // 0x128 Return
	
Label_297:
	var_2_bool = 0; // 0x129 TMovB
	var_14_int = 110; // 0x12a PushI
	KillTimer(var_14_int); // 0x12b Func
	ResetAAS(); // 0x12d Func
	return 0; // 0x12f Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_311(var_10_object); // 0x131 Call
	func_1972(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object); // 0x149 Call
	var_13_object = Obj(); // 0x14b PushV
	var_13_object = var_11_object; // 0x14c Mov
	func_1867(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object); // 0x1b2 Func
	return 0; // 0x1b4 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	Stop(); // 0x1b5 Func
	return 0; // 0x1b7 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x1c8 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1c9 PushV
	var_15_object = var_11_object; // 0x1ca Mov
	func_1963(var_15_object); // 0x1cb Call
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
	var_20_object = var_11_object; // 0x1d8 Mov
	func_1966(var_20_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x1dc PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1dd PushV
	var_15_object = var_11_object; // 0x1de Mov
	func_1922(var_14_int, var_15_object); // 0x1df Call
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
	var_54_object = var_11_object; // 0x1ec Mov
	func_1932(var_54_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x1f0 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x1f1 PushV
	var_16_object = var_11_bool; // 0x1f2 Mov
	var_17_object = var_12_object; // 0x1f3 Mov
	func_1990(var_15_bool, var_16_object, var_17_object); // 0x1f4 Call
	if(var_15_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_65_int = 0; var_66_object = Obj(); // 0x1f7 PushV
	var_66_object = var_11_bool; // 0x1f8 Mov
	func_1940(var_65_int, var_66_object); // 0x1f9 Call
	var_14_int = var_65_int; // 0x1fa Mov
	var_97_int = 0; // 0x1fc PushI
	var_98_bool = var_14_int > var_97_int; // 0x1fd GT
	if(var_98_bool == 0) goto Label_521; // 0x1fe JumpB
	var_99_int = 1; // 0x1ff PushI
	var_100_bool = var_14_int > var_99_int; // 0x200 GT
	if(var_100_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_101_object = Obj(); // 0x205 PushV
	var_101_object = var_11_bool; // 0x206 Mov
	func_1947(var_101_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x20a PushV
	var_14_int = 0; var_15_object = Obj(); // 0x20b PushV
	var_15_object = var_11_object; // 0x20c Mov
	func_1953(var_15_object); // 0x20d Call
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
	var_20_object = var_11_object; // 0x21a Mov
	func_1956(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x21e PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x21f PushV
	var_16_string = var_12_object; // 0x220 Mov
	var_17_object = var_11_bool; // 0x221 Mov
	func_1958(var_17_object); // 0x222 Call
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
	var_22_string = var_12_object; // 0x22f Mov
	var_23_object = var_11_bool; // 0x230 Mov
	func_1961(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_640(); // 0x235 Call
	func_1972(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2bd PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2be PushV
	var_15_object = var_11_object; // 0x2bf Mov
	func_1963(var_15_object); // 0x2c0 Call
	var_13_int = var_14_int; // 0x2c1 Mov
	var_16_int = 0; // 0x2c3 PushI
	var_17_bool = var_13_int > var_16_int; // 0x2c4 GT
	if(var_17_bool == 0) goto Label_720; // 0x2c5 JumpB
	var_18_int = 1; // 0x2c6 PushI
	var_19_bool = var_13_int > var_18_int; // 0x2c7 GT
	if(var_19_bool == 0) goto Label_716; // 0x2c8 JumpB
	func_809(); // 0x2ca Call
	
Label_716:
	var_22_object = Obj(); // 0x2cc PushV
	var_22_object = var_11_object; // 0x2cd Mov
	func_1966(var_22_object); // 0x2ce Call
	
Label_720:
	return 2; // 0x2d0 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2d1 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2d2 PushV
	var_15_object = var_11_object; // 0x2d3 Mov
	func_1922(var_14_int, var_15_object); // 0x2d4 Call
	var_13_int = var_14_int; // 0x2d5 Mov
	var_50_int = 0; // 0x2d7 PushI
	var_51_bool = var_13_int > var_50_int; // 0x2d8 GT
	if(var_51_bool == 0) goto Label_740; // 0x2d9 JumpB
	var_52_int = 1; // 0x2da PushI
	var_53_bool = var_13_int > var_52_int; // 0x2db GT
	if(var_53_bool == 0) goto Label_736; // 0x2dc JumpB
	func_809(); // 0x2de Call
	
Label_736:
	var_56_object = Obj(); // 0x2e0 PushV
	var_56_object = var_11_object; // 0x2e1 Mov
	func_1932(var_56_object); // 0x2e2 Call
	
Label_740:
	return 2; // 0x2e4 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x2e5 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x2e6 PushV
	var_16_object = var_11_bool; // 0x2e7 Mov
	var_17_object = var_12_object; // 0x2e8 Mov
	func_1990(var_15_bool, var_16_object, var_17_object); // 0x2e9 Call
	if(var_15_bool == 0) goto Label_766; // 0x2eb JumpB
	var_65_int = 0; var_66_object = Obj(); // 0x2ec PushV
	var_66_object = var_11_bool; // 0x2ed Mov
	func_1940(var_65_int, var_66_object); // 0x2ee Call
	var_14_int = var_65_int; // 0x2ef Mov
	var_97_int = 0; // 0x2f1 PushI
	var_98_bool = var_14_int > var_97_int; // 0x2f2 GT
	if(var_98_bool == 0) goto Label_766; // 0x2f3 JumpB
	var_99_int = 1; // 0x2f4 PushI
	var_100_bool = var_14_int > var_99_int; // 0x2f5 GT
	if(var_100_bool == 0) goto Label_762; // 0x2f6 JumpB
	func_809(); // 0x2f8 Call
	
Label_762:
	var_103_object = Obj(); // 0x2fa PushV
	var_103_object = var_11_bool; // 0x2fb Mov
	func_1947(var_103_object); // 0x2fc Call
	
Label_766:
	return 2; // 0x2fe Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2ff PushV
	var_14_int = 0; var_15_object = Obj(); // 0x300 PushV
	var_15_object = var_11_object; // 0x301 Mov
	func_1953(var_15_object); // 0x302 Call
	var_13_int = var_14_int; // 0x303 Mov
	var_16_int = 0; // 0x305 PushI
	var_17_bool = var_13_int > var_16_int; // 0x306 GT
	if(var_17_bool == 0) goto Label_786; // 0x307 JumpB
	var_18_int = 1; // 0x308 PushI
	var_19_bool = var_13_int > var_18_int; // 0x309 GT
	if(var_19_bool == 0) goto Label_782; // 0x30a JumpB
	func_809(); // 0x30c Call
	
Label_782:
	var_22_object = Obj(); // 0x30e PushV
	var_22_object = var_11_object; // 0x30f Mov
	func_1956(); // 0x310 Call
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x313 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x314 PushV
	var_16_string = var_12_object; // 0x315 Mov
	var_17_object = var_11_bool; // 0x316 Mov
	func_1958(var_17_object); // 0x317 Call
	var_14_int = var_15_int; // 0x318 Mov
	var_18_int = 0; // 0x31a PushI
	var_19_bool = var_14_int > var_18_int; // 0x31b GT
	if(var_19_bool == 0) goto Label_808; // 0x31c JumpB
	var_20_int = 1; // 0x31d PushI
	var_21_bool = var_14_int > var_20_int; // 0x31e GT
	if(var_21_bool == 0) goto Label_803; // 0x31f JumpB
	func_809(); // 0x321 Call
	
Label_803:
	var_24_string = ""; var_25_object = Obj(); // 0x323 PushV
	var_24_string = var_12_object; // 0x324 Mov
	var_25_object = var_11_bool; // 0x325 Mov
	func_1961(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_809(); // 0x336 Call
	var_14_object = Obj(); // 0x338 PushV
	var_14_object = var_11_object; // 0x339 Mov
	func_1867(); // 0x33a Call
	return 0; // 0x33c Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); // 0x33d PushV
	var_16_int = 111; // 0x33e PushI
	var_17_bool = var_11_object != var_16_int; // 0x33f Neq
	if(var_17_bool == 0) goto Label_834; // 0x340 JumpB
	return 4; // 0x341 Return
	
Label_834:
	var_18_bool = 0; var_19_object = Obj(); // 0x342 PushV
	var_19_object = var_0_bool; // 0x343 MovT
	func_1674(var_18_bool, var_19_object); // 0x344 Call
	var_52_bool = var_18_bool == 0; // 0x346 Not
	if(var_52_bool == 0) goto Label_844; // 0x347 JumpB
	func_809(); // 0x349 Call
	return 4; // 0x34b Return
	
Label_844:
	GetDirection(var_14_cvector); // 0x34c Func
	var_55_cvector = CVector(0,0,0); var_56_object = Obj(); // 0x34e PushV
	var_56_object = var_0_bool; // 0x34f MovT
	func_1542(var_56_object); // 0x350 Call
	var_15_cvector = var_55_cvector; // 0x351 Mov
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x353 PushV
	var_62_cvector = var_14_cvector; // 0x354 Mov
	var_63_cvector = var_15_cvector; // 0x355 Mov
	func_1829(var_61_float, var_62_cvector, var_63_cvector); // 0x356 Call
	var_85_float = 0.5; // 0x358 PushF
	var_86_bool = var_61_float < var_85_float; // 0x359 LT
	if(var_86_bool == 0) goto Label_863; // 0x35a JumpB
	var_87_object = Obj(); // 0x35b PushV
	var_87_object = var_0_bool; // 0x35c MovT
	func_1765(); // 0x35d Call
	
Label_863:
	return 4; // 0x35f Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_809(); // 0x361 Call
	func_1972(); // 0x364 Call
	return 0; // 0x366 Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1507(var_10_object); // 0x561 Call
	func_1972(); // 0x564 Call
	return 0; // 0x566 Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_int)
{
	var_12_int = 0; // 0x5ce PushI
	var_13_bool = var_11_int != var_12_int; // 0x5cf Neq
	if(var_13_bool == 0) goto Label_1490; // 0x5d0 JumpB
	return 0; // 0x5d1 Return
	
Label_1490:
	var_14_bool = 0; var_15_object = Obj(); // 0x5d2 PushV
	var_15_object = var_1_bool; // 0x5d3 MovT
	func_1523(var_14_bool, var_15_object); // 0x5d4 Call
	var_50_bool = var_14_bool == 0; // 0x5d6 Not
	if(var_50_bool == 0) goto Label_1497; // 0x5d7 JumpB
	var_0_bool = 1; // 0x5d8 TMovB
	
Label_1497:
	var_51_int = 0; // 0x5d9 PushI
	KillTimer(var_51_int); // 0x5da Func
	Stop(); // 0x5dc Func
	return 0; // 0x5de Return
}


task_5_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object); // 0x5e0 Func
	return 0; // 0x5e2 Return
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	func_1507(var_11_object); // 0x5ec Call
	var_13_object = Obj(); // 0x5ee PushV
	var_13_object = var_11_object; // 0x5ef Mov
	func_1867(); // 0x5f0 Call
	return 0; // 0x5f2 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x73e PushV
	var_15_string = "health"; // 0x73f PushS
	var_16_bool = var_12_string == var_15_string; // 0x740 Eq
	if(var_16_bool == 0) goto Label_1866; // 0x741 JumpB
	var_17_string = "health"; // 0x742 PushS
	GetProperty(var_17_string, var_14_float); // 0x743 Func
	var_18_int = 0; // 0x745 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x746 LE
	if(var_19_bool == 0) goto Label_1866; // 0x747 JumpB
	SignalDeath(var_11_object); // 0x748 Func
	
Label_1866:
	return 2; // 0x74a Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x74c PushV
	var_12_object = var_11_object; // 0x74d Mov
	func_1846(var_12_object); // 0x74e Call
	return 0; // 0x750 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x752 PushV
	var_15_object = var_11_object; // 0x753 Mov
	var_16_int = var_12_int; // 0x754 Mov
	var_17_float = var_13_float; // 0x755 Mov
	func_1698(var_16_int, var_17_float); // 0x756 Call
	return 0; // 0x758 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_11_bool); // 0x95 Func
	func_1973(); // 0x98 Call
	func_163(); // 0x9b Call
	
Label_157:
	var_2_bool = 0; // 0x9d TMovB
	func_376(var_9_bool, var_10_object); // 0x9f Call
	goto Label_157; // 0xa1 Jump
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_1792(var_368_float, var_369_float, var_370_float)
{
	var_373_bool = var_369_float < var_370_float; // 0x701 LT
	if(var_373_bool == 0) goto Label_1797; // 0x702 JumpB
	var_368_float = var_369_float; // 0x703 Mov
	goto Label_1798; // 0x704 Jump
	
Label_1798:
	return 0; // 0x706 Return
	
Label_1797:
	var_368_float = var_370_float; // 0x705 Mov
}


func_1922(var_67_int, var_68_object)
{
	var_69_bool = 0; var_70_object = Obj(); // 0x783 PushV
	var_70_object = var_68_object; // 0x784 Mov
	func_1674(var_69_bool, var_70_object); // 0x785 Call
	if(var_69_bool == 0) goto Label_1930; // 0x787 JumpB
	var_67_int = 2; // 0x788 MovI
	goto Label_1931; // 0x789 Jump
	
Label_1931:
	return 0; // 0x78b Return
	
Label_1930:
	var_67_int = 0; // 0x78a MovI
}


func_0(var_13_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_14_object = Obj(); // 0x2 PushV
	var_14_object = var_13_object; // 0x3 Mov
	func_33(var_14_object); // 0x4 Call
	var_64_object = Obj(); // 0x6 PushV
	var_64_object = var_13_object; // 0x7 Mov
	func_2069(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_645(var_0_bool, var_63_object)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; // 0x285 PushV
	var_0_bool = var_63_object; // 0x286 TMov
	func_696(var_70_bool); // 0x288 Call
	GetDirection(var_68_cvector); // 0x28a Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0x28c PushV
	var_79_object = var_0_bool; // 0x28d MovT
	func_1542(var_79_object); // 0x28e Call
	var_69_cvector = var_78_cvector; // 0x28f Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x291 PushV
	var_85_cvector = var_68_cvector; // 0x292 Mov
	var_86_cvector = var_69_cvector; // 0x293 Mov
	func_1829(var_84_float, var_85_cvector, var_86_cvector); // 0x294 Call
	var_108_int = 0; // 0x296 PushI
	var_109_bool = var_84_float < var_108_int; // 0x297 LT
	if(var_109_bool == 0) goto Label_671; // 0x298 JumpB
	var_110_object = Obj(); // 0x299 PushV
	var_110_object = var_0_bool; // 0x29a MovT
	func_1765(); // 0x29b Call
	var_70_bool = 1; // 0x29d MovB
	goto Label_674; // 0x29e Jump
	
Label_674:
	var_119_bool = var_70_bool; // 0x2a2 Push
	if(var_119_bool == 0) goto Label_690; // 0x2a3 JumpB
	var_120_object = Obj(); // 0x2a4 PushV
	var_120_object = var_0_bool; // 0x2a5 MovT
	func_1765(); // 0x2a6 Call
	var_121_int = 111; // 0x2a8 PushI
	var_122_float = 0.5; // 0x2a9 PushF
	SetTimer(var_121_int, var_122_float); // 0x2aa Func
	var_123_float = 5.0; // 0x2ac PushF
	Sleep(var_123_float); // 0x2ad Func
	var_124_int = 111; // 0x2af PushI
	KillTimer(var_124_int); // 0x2b0 Func
	
Label_690:
	StopAsync(); // 0x2b2 Func
	var_125_string = "head"; // 0x2b4 PushS
	UnlookAsync(var_125_string); // 0x2b5 Func
	return 6; // 0x2b7 Return
	
Label_671:
	var_126_float = 1.5; // 0x29f PushF
	Sleep(var_126_float, var_70_bool); // 0x2a0 Func
}


func_1542(var_55_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x606 PushV
	GetPosition(var_59_cvector); // 0x607 Func
	GetPosition(var_60_cvector); // 0x609 ObjFunc
	var_55_cvector = var_60_cvector - var_59_cvector; // 0x60b Sub2
	return 4; // 0x60c Return
}


func_1799(var_378_float, var_379_float, var_380_float, var_381_float)
{
	var_382_bool = var_379_float < var_380_float; // 0x708 LT
	if(var_382_bool == 0) goto Label_1804; // 0x709 JumpB
	var_378_float = var_380_float; // 0x70a Mov
	return 0; // 0x70b Return
	
Label_1804:
	var_383_bool = var_379_float > var_381_float; // 0x70c GT
	if(var_383_bool == 0) goto Label_1808; // 0x70d JumpB
	var_378_float = var_381_float; // 0x70e Mov
	return 0; // 0x70f Return
	
Label_1808:
	var_378_float = var_379_float; // 0x710 Mov
	return 0; // 0x711 Return
}


func_1674(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x68a PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x68b PushV
	var_21_object = var_17_object; // 0x68c Mov
	func_1638(var_20_bool, var_21_object); // 0x68d Call
	var_37_bool = var_20_bool == 0; // 0x68f Not
	if(var_37_bool == 0) goto Label_1683; // 0x690 JumpB
	var_16_bool = 0; // 0x691 MovB
	return 2; // 0x692 Return
	
Label_1683:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x693 PushV
	var_39_object = var_17_object; // 0x694 Mov
	var_40_string = "noaccess"; // 0x695 MovS
	func_1557(var_38_bool, var_39_object, var_40_string); // 0x696 Call
	var_47_bool = var_38_bool == 0; // 0x698 Not
	if(var_47_bool == 0) goto Label_1692; // 0x699 JumpB
	var_16_bool = 1; // 0x69a MovB
	return 2; // 0x69b Return
	
Label_1692:
	var_48_string = "noaccess"; // 0x69c PushS
	GetProperty(var_48_string, var_19_int); // 0x69d ObjFunc
	var_49_int = 0; // 0x69f PushI
	var_16_bool = var_19_int == var_49_int; // 0x6a0 Eq2
	return 2; // 0x6a1 Return
}


func_1932(var_104_object)
{
	var_105_object = Obj(); // 0x78d PushV
	var_105_object = var_104_object; // 0x78e Mov
	TaskCall(4); // 0x78f TaskCall
	func_871(var_105_object); // 0x790 Call
	TaskReturn(); // 0x791 TaskReturn
	return 0; // 0x793 Return
}


func_1549(var_55_float)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x60d PushV
	GetPosition(var_60_cvector); // 0x60e Func
	GetPosition(var_61_cvector); // 0x610 ObjFunc
	var_62_cvector = var_61_cvector - var_60_cvector; // 0x612 Sub2
	var_55_float = var_62_cvector | var_62_cvector; // 0x613 Or2
	return 6; // 0x614 Return
}


func_1810(var_64_float, var_65_cvector, var_66_cvector)
{
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x713 PushE
	var_68_float = GetByIndex(var_66_cvector, 0); // 0x714 PushE
	var_69_float = var_67_float * var_68_float; // 0x715 Mult
	var_70_float = GetByIndex(var_65_cvector, 2); // 0x716 PushE
	var_71_float = GetByIndex(var_66_cvector, 2); // 0x717 PushE
	var_72_float = var_70_float * var_71_float; // 0x718 Mult
	var_64_float = var_69_float + var_72_float; // 0x719 Add2
	return 0; // 0x71a Return
}


func_1530(var_204_string)
{
	var_204_string = "walk"; // 0x5fa MovS
	return 0; // 0x5fb Return
}


func_1940(var_65_int, var_66_object)
{
	var_67_int = 0; var_68_object = Obj(); // 0x795 PushV
	var_68_object = var_66_object; // 0x796 Mov
	func_1922(var_67_int, var_68_object); // 0x797 Call
	var_65_int = var_67_int; // 0x798 Mov
	return 0; // 0x79a Return
}


func_2069()
{
	var_65_bool = GlobalVars[0]; // 0x816 PushGE
	var_65_bool = 1; // 0x817 MovB
	GlobalVars[0] = var_65_bool; // 0x818 PopGE
	var_66_int = 50; // 0x819 PushI
	var_67_int = 40; // 0x81a PushI
	SetRTEnvelope(var_66_int, var_67_int); // 0x81b Func
	return 0; // 0x81d Return
}


func_1557(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x615 PushV
	var_43_string = "HasProperty"; // 0x616 PushS
	var_44_int = 2; // 0x617 PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x618 FuncExist
	var_46_bool = var_45_bool == 0; // 0x619 Not
	if(var_46_bool == 0) goto Label_1565; // 0x61a JumpB
	var_38_bool = 0; // 0x61b MovB
	return 2; // 0x61c Return
	
Label_1565:
	HasProperty(var_40_string, var_42_bool); // 0x61d ObjFunc
	var_38_bool = var_42_bool; // 0x61f Mov
	return 2; // 0x620 Return
}


func_1306(var_0_bool)
{
	var_277_cvector = CVector(0,0,0); var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0); var_280_cvector = CVector(0,0,0); // 0x51a PushV
	Face(var_0_bool); // 0x51b Func
	var_281_string = "all"; // 0x51d PushS
	var_282_string = "bjump"; // 0x51e PushS
	PlayAnimation(var_281_string, var_282_string); // 0x51f Func
	GetPFPosition(var_279_cvector); // 0x521 TObjFunc
	GetPFPosition(var_280_cvector); // 0x523 Func
	WaitForAnimEnd(); // 0x525 Func
	StopAsync(); // 0x527 Func
	var_283_cvector = CVector(0.0, 0.0, 0.0); // 0x529 PushVec
	SetSpeed(var_283_cvector); // 0x52a Func
	return 4; // 0x52c Return
}


func_1947(var_103_object)
{
	var_104_object = Obj(); // 0x79c PushV
	var_104_object = var_103_object; // 0x79d Mov
	func_1932(var_104_object); // 0x79e Call
	return 0; // 0x7a0 Return
}


func_1819(var_73_float, var_74_cvector)
{
	var_75_float = GetByIndex(var_74_cvector, 0); // 0x71c PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x71d PushE
	var_77_float = var_75_float * var_76_float; // 0x71e Mult
	var_78_float = GetByIndex(var_74_cvector, 2); // 0x71f PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x720 PushE
	var_80_float = var_78_float * var_79_float; // 0x721 Mult
	var_81_int = var_77_float + var_80_float; // 0x722 Add
	var_73_float = sqrt(var_81_int); // 0x723 Sqrt2
	return 0; // 0x724 Return
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


func_1953(var_14_int)
{
	var_14_int = 0; // 0x7a2 MovI
	return 0; // 0x7a3 Return
}


func_163()
{
	var_13_bool = 0; // 0xa3 PushV
	func_1776(var_13_bool); // 0xa4 Call
	var_16_bool = var_13_bool == 0; // 0xa6 Not
	if(var_16_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1972(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_1956()
{
	return 0; // 0x7a5 Return
}


func_1829(var_61_float, var_62_cvector, var_63_cvector)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x726 PushV
	var_65_cvector = var_62_cvector; // 0x727 Mov
	var_66_cvector = var_63_cvector; // 0x728 Mov
	func_1810(var_64_float, var_65_cvector, var_66_cvector); // 0x729 Call
	var_73_float = 0; var_74_cvector = CVector(0,0,0); // 0x72b PushV
	var_74_cvector = var_62_cvector; // 0x72c Mov
	func_1819(var_73_float, var_74_cvector); // 0x72d Call
	var_82_float = 0; var_83_cvector = CVector(0,0,0); // 0x72f PushV
	var_83_cvector = var_63_cvector; // 0x730 Mov
	func_1819(var_82_float, var_83_cvector); // 0x731 Call
	var_84_float = var_73_float * var_82_float; // 0x733 Mult
	var_61_float = var_64_float / var_64_float; // 0x734 Div2
	return 0; // 0x735 Return
}


func_1958(var_15_int)
{
	var_15_int = 0; // 0x7a7 MovI
	return 0; // 0x7a8 Return
}


func_1569(var_332_float, var_333_object, var_334_float, var_335_int)
{
	var_339_int = 0; var_340_string = ""; var_341_int = 0; var_342_float = 0; var_343_float = 0; var_344_float = 0; var_345_int = 0; var_346_string = ""; var_347_int = 0; var_348_float = 0; var_349_float = 0; var_350_float = 0; // 0x621 PushV
	var_351_bool = 0; var_352_object = Obj(); var_353_string = ""; // 0x622 PushV
	var_352_object = var_333_object; // 0x623 Mov
	var_353_string = "health"; // 0x624 MovS
	func_1557(var_351_bool, var_352_object, var_353_string); // 0x625 Call
	var_354_bool = var_351_bool == 0; // 0x627 Not
	if(var_354_bool == 0) goto Label_1579; // 0x628 JumpB
	var_332_float = 0.0; // 0x629 MovF
	return 12; // 0x62a Return
	
Label_1579:
	var_355_bool = 0; var_356_object = Obj(); var_357_string = ""; // 0x62b PushV
	var_356_object = var_333_object; // 0x62c Mov
	var_357_string = "armor"; // 0x62d MovS
	func_1557(var_355_bool, var_356_object, var_357_string); // 0x62e Call
	var_358_bool = var_355_bool == 0; // 0x630 Not
	if(var_358_bool == 0) goto Label_1588; // 0x631 JumpB
	var_345_int = 0; // 0x632 MovI
	goto Label_1591; // 0x633 Jump
	
Label_1591:
	var_359_string = "armor_"; // 0x637 PushS
	var_360_string = ""; var_361_int = 0; // 0x638 PushV
	var_361_int = var_335_int; // 0x639 Mov
	func_1534(var_360_string, var_361_int); // 0x63a Call
	var_346_string = var_359_string + var_360_string; // 0x63c Add2
	var_364_bool = 0; var_365_object = Obj(); var_366_string = ""; // 0x63d PushV
	var_365_object = var_333_object; // 0x63e Mov
	var_366_string = var_346_string; // 0x63f Mov
	func_1557(var_364_bool, var_365_object, var_366_string); // 0x640 Call
	var_367_bool = var_364_bool == 0; // 0x642 Not
	if(var_367_bool == 0) goto Label_1606; // 0x643 JumpB
	var_347_int = 0; // 0x644 MovI
	goto Label_1608; // 0x645 Jump
	
Label_1608:
	var_368_float = 0; var_369_float = 0; var_370_float = 0; // 0x648 PushV
	var_371_int = var_345_int + var_347_int; // 0x649 Add
	var_372_float = 100.0; // 0x64a PushF
	var_369_float = var_371_int / var_371_int; // 0x64b Div2
	var_370_float = 1; // 0x64c MovI
	func_1792(var_368_float, var_369_float, var_370_float); // 0x64d Call
	var_348_float = var_368_float; // 0x64e Mov
	var_374_string = "health"; // 0x650 PushS
	GetProperty(var_374_string, var_349_float); // 0x651 ObjFunc
	var_375_int = 1; // 0x653 PushI
	var_376_int = var_375_int - var_348_float; // 0x654 Sub
	var_350_float = var_334_float * var_376_int; // 0x655 Mult2
	var_377_string = "health"; // 0x656 PushS
	var_378_float = 0; var_379_float = 0; var_380_float = 0; var_381_float = 0; // 0x657 PushV
	var_379_float = var_349_float - var_350_float; // 0x658 Sub2
	var_380_float = 0; // 0x659 MovI
	var_381_float = 1; // 0x65a MovI
	func_1799(var_378_float, var_379_float, var_380_float, var_381_float); // 0x65b Call
	SetProperty(var_377_string, var_378_float); // 0x65d ObjFunc
	var_332_float = var_350_float; // 0x65f Mov
	return 12; // 0x660 Return
	
Label_1606:
	GetProperty(var_346_string, var_347_int); // 0x646 ObjFunc
	
Label_1588:
	var_384_string = "armor"; // 0x634 PushS
	GetProperty(var_384_string, var_345_int); // 0x635 ObjFunc
}


func_1698(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x6a2 PushV
	var_38_bool = 0; // 0x6a3 PushV
	var_38_bool = 0; // 0x6a4 MovB
	var_39_int = 4; // 0x6a5 PushI
	var_40_bool = var_16_int != var_39_int; // 0x6a6 Neq
	if(var_40_bool == 0) goto Label_1708; // 0x6a7 JumpB
	var_41_int = 5; // 0x6a8 PushI
	var_42_bool = var_16_int != var_41_int; // 0x6a9 Neq
	if(var_42_bool == 0) goto Label_1708; // 0x6aa JumpB
	var_38_bool = 1; // 0x6ab MovB
	
Label_1708:
	if(var_38_bool == 0) goto Label_1727; // 0x6ac JumpB
	GetScene(var_28_object); // 0x6ad Func
	GetPosition(var_30_cvector); // 0x6af Func
	GetEyesHeight(var_31_float); // 0x6b1 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x6b3 PushE
	var_44_int = 2; // 0x6b4 PushI
	var_45_float = var_31_float / var_44_int; // 0x6b5 Div
	var_43_float = var_43_float + var_45_float; // 0x6b6 Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x6b7 PopE
	var_46_string = "scripted"; // 0x6b8 PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x6b9 PushVec
	var_48_string = "blood.xml"; // 0x6ba PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x6bb Func
	var_29_object = 0; // 0x6bd SetNull
	var_28_object = 0; // 0x6be SetNull
	
Label_1727:
	var_49_bool = var_15_object == 0; // 0x6bf NullEq
	if(var_49_bool == 0) goto Label_1730; // 0x6c0 JumpB
	return 20; // 0x6c1 Return
	
Label_1730:
	GetSecondaryAnimationType(var_32_int); // 0x6c2 Func
	var_50_int = 0; // 0x6c4 PushI
	var_51_bool = var_32_int < var_50_int; // 0x6c5 LT
	if(var_51_bool == 0) goto Label_1736; // 0x6c6 JumpB
	return 20; // 0x6c7 Return
	
Label_1736:
	GetPosition(var_33_cvector); // 0x6c8 ObjFunc
	GetPosition(var_34_cvector); // 0x6ca Func
	GetDirection(var_35_cvector); // 0x6cc Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x6ce Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x6cf PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x6d0 PushE
	var_54_float = var_52_float * var_53_float; // 0x6d1 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x6d2 PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x6d3 PushE
	var_57_float = var_55_float * var_56_float; // 0x6d4 Mult
	var_58_int = var_54_float + var_57_float; // 0x6d5 Add
	var_59_int = 0; // 0x6d6 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x6d7 GE
	if(var_60_bool == 0) goto Label_1755; // 0x6d8 JumpB
	var_37_string = "fhit"; // 0x6d9 MovS
	goto Label_1756; // 0x6da Jump
	
Label_1756:
	var_61_string = "hit_react"; // 0x6dc PushS
	var_62_string = "1"; // 0x6dd PushS
	var_63_int = var_37_string + var_62_string; // 0x6de Add
	var_64_string = "2"; // 0x6df PushS
	var_65_int = var_37_string + var_64_string; // 0x6e0 Add
	var_66_int = -10; // 0x6e1 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x6e2 Func
	return 20; // 0x6e4 Return
	
Label_1755:
	var_37_string = "bhit"; // 0x6db MovS
}


func_1961()
{
	return 0; // 0x7aa Return
}


func_809()
{
	StopGroup0(); // 0x329 Func
	StopAsync(); // 0x32b Func
	var_11_string = "head"; // 0x32d PushS
	UnlookAsync(var_11_string); // 0x32e Func
	var_12_int = 111; // 0x330 PushI
	KillTimer(var_12_int); // 0x331 Func
	return 0; // 0x333 Return
}


func_1963(var_14_int)
{
	var_14_int = 2; // 0x7ac MovI
	return 0; // 0x7ad Return
}


func_1325(var_0_bool, var_238_bool)
{
	var_239_bool = 0; var_240_bool = 0; // 0x52d PushV
	var_241_string = "IsAttacking"; // 0x52e PushS
	var_242_int = 1; // 0x52f PushI
	var_243_bool = IsFuncExist(var_0_bool, var_241_string, var_242_int); // 0x530 FuncExist
	if(var_243_bool == 0) goto Label_1334; // 0x531 JumpB
	IsAttacking(var_240_bool); // 0x532 TObjFunc
	var_238_bool = var_240_bool; // 0x534 Mov
	return 2; // 0x535 Return
	
Label_1334:
	var_238_bool = 0; // 0x536 MovB
	return 2; // 0x537 Return
}


func_1966(var_22_object)
{
	var_23_object = Obj(); // 0x7af PushV
	var_23_object = var_22_object; // 0x7b0 Mov
	func_1977(var_23_object); // 0x7b1 Call
	return 0; // 0x7b3 Return
}


func_1972()
{
	return 0; // 0x7b4 Return
}


func_1973()
{
	var_12_bool = GlobalVars[0]; // 0x7b5 PushGE
	var_12_bool = 0; // 0x7b6 MovB
	GlobalVars[0] = var_12_bool; // 0x7b7 PopGE
	return 0; // 0x7b8 Return
}


func_1846(var_12_object)
{
	var_13_object = Obj(); // 0x737 PushV
	var_13_object = var_12_object; // 0x738 Mov
	TaskCall(0); // 0x739 TaskCall
	func_0(var_13_object); // 0x73a Call
	TaskReturn(); // 0x73b TaskReturn
	return 0; // 0x73d Return
}


func_311(var_2_bool)
{
	var_12_int = 110; // 0x137 PushI
	KillTimer(var_12_int); // 0x138 Func
	var_2_bool = 0; // 0x13a TMovB
	func_440(var_10_bool, var_11_object); // 0x13c Call
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


func_696(var_0_bool)
{
	var_71_object = Obj(); // 0x2b8 PushV
	var_71_object = var_0_bool; // 0x2b9 MovT
	func_1781(var_71_object); // 0x2ba Call
	return 0; // 0x2bc Return
}


func_1336(var_2_bool, var_4_object)
{
	var_300_float = 0; var_301_int = 0; var_302_float = 0; var_303_int = 0; // 0x538 PushV
	var_304_bool = var_2_bool == 0; // 0x539 Not
	if(var_304_bool == 0) goto Label_1340; // 0x53a JumpB
	return 4; // 0x53b Return
	
Label_1340:
	var_305_object = var_4_object; // 0x53c PushT
	if(var_305_object == 0) goto Label_1348; // 0x53d JumpB
	var_306_int = -1; // 0x53e PushI
	var_4_object = var_4_object + var_306_int; // 0x53f Add2
	var_307_int = 0; // 0x540 PushI
	var_308_bool = var_4_object > var_307_int; // 0x541 GT
	if(var_308_bool == 0) goto Label_1348; // 0x542 JumpB
	return 4; // 0x543 Return
	
Label_1348:
	rand(var_302_float); // 0x544 Func
	var_309_float = 0; // 0x546 PushV
	func_1374(var_309_float); // 0x547 Call
	var_310_bool = var_302_float < var_309_float; // 0x549 LT
	if(var_310_bool == 0) goto Label_1367; // 0x54a JumpB
	irand(var_303_int, var_302_float); // 0x54b Func
	var_311_int = 1; // 0x54d PushI
	var_303_int = var_303_int + var_311_int; // 0x54e Add2
	var_312_string = "attack"; // 0x54f PushS
	var_313_int = var_312_string + var_303_int; // 0x550 Add
	Speak(var_313_int); // 0x551 Func
	var_314_int = 0; // 0x553 PushV
	func_1372(var_314_int); // 0x554 Call
	var_4_object = var_314_int; // 0x555 TMov
	
Label_1367:
	return 4; // 0x557 Return
}


func_571()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_54_bool = 0; // 0x23e PushV
	func_1776(var_54_bool); // 0x23f Call
	var_55_bool = var_54_bool == 0; // 0x241 Not
	if(var_55_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_56_int = 0; // 0x244 PushV
	func_1888(var_56_int); // 0x245 Call
	var_47_int = var_56_int; // 0x246 Mov
	var_48_int = 0; // 0x248 MovI
	
Label_585:
	var_69_bool = 0; // 0x249 PushV
	var_69_bool = 0; // 0x24a MovB
	var_70_int = 5; // 0x24b PushI
	var_71_bool = var_48_int < var_70_int; // 0x24c LT
	if(var_71_bool == 0) goto Label_595; // 0x24d JumpB
	var_72_bool = 0; // 0x24e PushV
	func_1776(var_72_bool); // 0x24f Call
	if(var_72_bool == 0) goto Label_595; // 0x251 JumpB
	var_69_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_69_bool == 0) goto Label_639; // 0x253 JumpB
	var_73_int = 3; // 0x254 PushI
	irand(var_49_int, var_73_int); // 0x255 Func
	var_74_int = 0; // 0x257 PushI
	var_75_bool = var_49_int == var_74_int; // 0x258 Eq
	if(var_75_bool == 0) goto Label_619; // 0x259 JumpB
	var_76_int = var_47_int; // 0x25a Push
	if(var_76_int == 0) goto Label_618; // 0x25b JumpB
	irand(var_50_int, var_47_int); // 0x25c Func
	var_77_string = "all"; // 0x25e PushS
	var_78_string = ""; var_79_int = 0; // 0x25f PushV
	var_79_int = var_50_int; // 0x260 Mov
	func_1881(var_78_string, var_79_int); // 0x261 Call
	PlayAnimation(var_77_string, var_78_string); // 0x263 Func
	WaitForAnimEnd(var_51_bool); // 0x265 Func
	var_80_bool = var_51_bool == 0; // 0x267 Not
	if(var_80_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_639; // 0x269 Jump
	
Label_639:
	return 14; // 0x27f Return
	
Label_618:
	goto Label_636; // 0x26a Jump
	
Label_636:
	var_81_int = 1; // 0x27c PushI
	var_48_int = var_48_int + var_81_int; // 0x27d Add2
	goto Label_585; // 0x27e Jump
	
Label_619:
	var_82_int = 1; // 0x26b PushI
	var_83_bool = var_49_int == var_82_int; // 0x26c Eq
	if(var_83_bool == 0) goto Label_633; // 0x26d JumpB
	var_84_int = 4; // 0x26e PushI
	rand(var_52_float, var_84_int); // 0x26f Func
	var_85_int = 1; // 0x271 PushI
	var_86_int = var_52_float + var_85_int; // 0x272 Add
	Sleep(var_86_int, var_53_bool); // 0x273 Func
	var_87_bool = var_53_bool == 0; // 0x275 Not
	if(var_87_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_639; // 0x277 Jump
	
Label_632:
	goto Label_636; // 0x278 Jump
	
Label_633:
	var_88_int = var_48_int; // 0x279 Push
	if(var_88_int == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
}


func_1209(var_404_bool, var_405_float)
{
	var_406_float = 0; var_407_bool = 0; var_408_float = 0; var_409_bool = 0; // 0x4b9 PushV
	rand(var_408_float); // 0x4ba Func
	var_410_bool = var_408_float < var_405_float; // 0x4bc LT
	if(var_410_bool == 0) goto Label_1229; // 0x4bd JumpB
	
Label_1214:
	IsAnimationPlaying(var_409_bool); // 0x4be Func
	var_411_bool = var_409_bool == 0; // 0x4c0 Not
	if(var_411_bool == 0) goto Label_1219; // 0x4c1 JumpB
	goto Label_1228; // 0x4c2 Jump
	
Label_1228:
	goto Label_1231; // 0x4cc Jump
	
Label_1231:
	var_404_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1219:
	var_412_bool = 0; // 0x4c3 PushV
	func_1273(var_409_bool, var_412_bool); // 0x4c4 Call
	if(var_412_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_404_bool = 1; // 0x4c7 MovB
	return 4; // 0x4c8 Return
	
Label_1225:
	sync(); // 0x4c9 Func
	goto Label_1214; // 0x4cb Jump
	
Label_1229:
	WaitForAnimEnd(); // 0x4cd Func
}


func_1977(var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0x7b9 PushV
	var_26_bool = GlobalVars[0]; // 0x7ba PushGE
	if(var_26_bool == 0) goto Label_1987; // 0x7bb JumpB
	IsOverrideActive(var_25_bool); // 0x7bc Func
	var_27_bool = var_25_bool == 0; // 0x7be Not
	if(var_27_bool == 0) goto Label_1986; // 0x7bf JumpB
	WorkWithCorpse(var_23_object); // 0x7c0 Func
	
Label_1986:
	return 2; // 0x7c2 Return
	
Label_1987:
	return 2; // 0x7c3 Return
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
	var_61_int = 110; // 0x13f PushI
	KillTimer(var_61_int); // 0x140 Func
	var_2_bool = 0; // 0x142 TMovB
	func_447(var_15_bool, var_16_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_1090(var_0_bool, var_318_float, var_319_int)
{
	var_320_object = Obj(); var_321_float = 0; var_322_float = 0; var_323_object = Obj(); var_324_float = 0; var_325_float = 0; // 0x442 PushV
	var_326_float = 0.9; // 0x443 PushF
	var_327_float = var_318_float * var_326_float; // 0x444 Mult
	GetVictim(var_327_float, var_323_object); // 0x445 Func
	ReportAttack(var_0_bool); // 0x447 Func
	var_328_bool = var_323_object == var_0_bool; // 0x449 Eq
	if(var_328_bool == 0) goto Label_1127; // 0x44a JumpB
	var_329_float = 0; var_330_object = Obj(); var_331_int = 0; // 0x44b PushV
	var_330_object = var_323_object; // 0x44c Mov
	var_331_int = var_319_int; // 0x44d Mov
	func_879(var_331_int); // 0x44e Call
	var_324_float = var_329_float; // 0x44f Mov
	var_332_float = 0; var_333_object = Obj(); var_334_float = 0; var_335_int = 0; // 0x451 PushV
	var_333_object = var_323_object; // 0x452 Mov
	var_334_float = var_324_float; // 0x453 Mov
	var_336_int = 0; var_337_object = Obj(); var_338_int = 0; // 0x454 PushV
	var_337_object = var_323_object; // 0x455 Mov
	var_338_int = var_319_int; // 0x456 Mov
	func_882(var_338_int); // 0x457 Call
	var_335_int = var_336_int; // 0x458 Mov
	func_1569(var_332_float, var_333_object, var_334_float, var_335_int); // 0x45a Call
	var_325_float = var_332_float; // 0x45b Mov
	var_385_int = 0; // 0x45d PushV
	func_1368(var_385_int); // 0x45e Call
	ReportHit(var_0_bool, var_385_int, var_325_float, var_324_float); // 0x460 Func
	var_386_object = Obj(); var_387_float = 0; // 0x462 PushV
	var_386_object = var_323_object; // 0x463 Mov
	var_387_float = var_325_float; // 0x464 Mov
	func_1370(); // 0x465 Call
	
Label_1127:
	return 6; // 0x467 Return
}


func_1988(var_56_bool)
{
	var_56_bool = 0; // 0x7c4 MovB
	return 0; // 0x7c5 Return
}


func_1990(var_15_bool, var_16_object, var_17_object)
{
	var_18_string = ""; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; // 0x7c6 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x7c7 PushV
	var_23_object = var_17_object; // 0x7c8 Mov
	var_24_string = "class"; // 0x7c9 MovS
	func_1557(var_22_bool, var_23_object, var_24_string); // 0x7ca Call
	var_31_bool = var_22_bool == 0; // 0x7cc Not
	if(var_31_bool == 0) goto Label_2000; // 0x7cd JumpB
	var_15_bool = 0; // 0x7ce MovB
	return 4; // 0x7cf Return
	
Label_2000:
	var_32_string = "class"; // 0x7d0 PushS
	GetProperty(var_32_string, var_20_string); // 0x7d1 ObjFunc
	var_33_bool = 0; // 0x7d3 PushV
	var_33_bool = 0; // 0x7d4 MovB
	var_34_bool = 0; // 0x7d5 PushV
	var_34_bool = 0; // 0x7d6 MovB
	var_35_bool = 0; // 0x7d7 PushV
	var_35_bool = 0; // 0x7d8 MovB
	var_36_bool = 0; // 0x7d9 PushV
	var_36_bool = 0; // 0x7da MovB
	var_37_bool = 0; // 0x7db PushV
	var_37_bool = 0; // 0x7dc MovB
	var_38_bool = 0; // 0x7dd PushV
	var_38_bool = 0; // 0x7de MovB
	var_39_string = "littleboy"; // 0x7df PushS
	var_40_bool = var_20_string != var_39_string; // 0x7e0 Neq
	if(var_40_bool == 0) goto Label_2022; // 0x7e1 JumpB
	var_41_string = "littlegirl"; // 0x7e2 PushS
	var_42_bool = var_20_string != var_41_string; // 0x7e3 Neq
	if(var_42_bool == 0) goto Label_2022; // 0x7e4 JumpB
	var_38_bool = 1; // 0x7e5 MovB
	
Label_2022:
	if(var_38_bool == 0) goto Label_2027; // 0x7e6 JumpB
	var_43_string = "boy"; // 0x7e7 PushS
	var_44_bool = var_20_string != var_43_string; // 0x7e8 Neq
	if(var_44_bool == 0) goto Label_2027; // 0x7e9 JumpB
	var_37_bool = 1; // 0x7ea MovB
	
Label_2027:
	if(var_37_bool == 0) goto Label_2032; // 0x7eb JumpB
	var_45_string = "girl"; // 0x7ec PushS
	var_46_bool = var_20_string != var_45_string; // 0x7ed Neq
	if(var_46_bool == 0) goto Label_2032; // 0x7ee JumpB
	var_36_bool = 1; // 0x7ef MovB
	
Label_2032:
	if(var_36_bool == 0) goto Label_2037; // 0x7f0 JumpB
	var_47_string = "wasted_girl"; // 0x7f1 PushS
	var_48_bool = var_20_string != var_47_string; // 0x7f2 Neq
	if(var_48_bool == 0) goto Label_2037; // 0x7f3 JumpB
	var_35_bool = 1; // 0x7f4 MovB
	
Label_2037:
	if(var_35_bool == 0) goto Label_2042; // 0x7f5 JumpB
	var_49_string = "woman"; // 0x7f6 PushS
	var_50_bool = var_20_string != var_49_string; // 0x7f7 Neq
	if(var_50_bool == 0) goto Label_2042; // 0x7f8 JumpB
	var_34_bool = 1; // 0x7f9 MovB
	
Label_2042:
	if(var_34_bool == 0) goto Label_2047; // 0x7fa JumpB
	var_51_string = "unosha"; // 0x7fb PushS
	var_52_bool = var_20_string != var_51_string; // 0x7fc Neq
	if(var_52_bool == 0) goto Label_2047; // 0x7fd JumpB
	var_33_bool = 1; // 0x7fe MovB
	
Label_2047:
	if(var_33_bool == 0) goto Label_2050; // 0x7ff JumpB
	var_15_bool = 0; // 0x800 MovB
	return 4; // 0x801 Return
	
Label_2050:
	CanSee(var_21_bool, var_16_object); // 0x802 Func
	var_53_bool = 0; // 0x804 PushV
	var_53_bool = 1; // 0x805 MovB
	var_54_bool = var_21_bool; // 0x806 Push
	if(var_54_bool == 0) goto Label_2064; // 0x807 JumpB
	var_55_float = 0; var_56_object = Obj(); // 0x808 PushV
	var_56_object = var_16_object; // 0x809 Mov
	func_1549(var_56_object); // 0x80a Call
	var_63_float = 250000.0; // 0x80c PushF
	var_64_bool = var_55_float <= var_63_float; // 0x80d LE
	if(var_64_bool == 0) goto Label_2064; // 0x80e JumpB
	var_53_bool = 0; // 0x80f MovB
	
Label_2064:
	if(var_53_bool == 0) goto Label_2067; // 0x810 JumpB
	var_15_bool = 1; // 0x811 MovB
	return 4; // 0x812 Return
	
Label_2067:
	var_15_bool = 0; // 0x813 MovB
	return 4; // 0x814 Return
}


func_454(var_38_bool)
{
	var_38_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_336(var_2_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; // 0x150 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x151 PushV
	var_18_object = var_12_object; // 0x152 Mov
	func_1674(var_17_bool, var_18_object); // 0x153 Call
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
	func_1905(var_55_object); // 0x162 Call
	var_16_int = var_54_int; // 0x163 Mov
	var_57_int = 0; // 0x165 PushI
	var_58_bool = var_16_int > var_57_int; // 0x166 GT
	if(var_58_bool == 0) goto Label_375; // 0x167 JumpB
	var_59_int = 1; // 0x168 PushI
	var_60_bool = var_16_int > var_59_int; // 0x169 GT
	if(var_60_bool == 0) goto Label_366; // 0x16a JumpB
	func_319(var_16_int); // 0x16c Call
	
Label_366:
	var_62_object = Obj(); // 0x16e PushV
	var_62_object = var_12_object; // 0x16f Mov
	func_1914(var_62_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_127_int = 110; // 0x173 PushI
	var_128_float = 10.0; // 0x174 PushF
	SetTimer(var_127_int, var_128_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_1233(var_0_bool, var_246_bool, var_247_float)
{
	var_248_bool = 0; var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_float = 0; var_253_bool = 0; var_254_cvector = CVector(0,0,0); var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_float = 0; // 0x4d1 PushV
	
Label_1234:
	IsAnimationPlaying(var_253_bool); // 0x4d2 Func
	var_258_bool = var_253_bool == 0; // 0x4d4 Not
	if(var_258_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1271; // 0x4d6 Jump
	
Label_1271:
	var_246_bool = 0; // 0x4f7 MovB
	return 10; // 0x4f8 Return
	
Label_1239:
	var_259_bool = 0; // 0x4d7 PushV
	func_1273(var_257_float, var_259_bool); // 0x4d8 Call
	if(var_259_bool == 0) goto Label_1245; // 0x4da JumpB
	var_246_bool = 1; // 0x4db MovB
	return 10; // 0x4dc Return
	
Label_1245:
	var_284_bool = 0; var_285_object = Obj(); // 0x4dd PushV
	var_285_object = var_0_bool; // 0x4de MovT
	func_1674(var_284_bool, var_285_object); // 0x4df Call
	var_286_bool = var_284_bool == 0; // 0x4e1 Not
	if(var_286_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_246_bool = 0; // 0x4e3 MovB
	return 10; // 0x4e4 Return
	
Label_1253:
	GetPFPosition(var_254_cvector); // 0x4e5 TObjFunc
	GetPFPosition(var_255_cvector); // 0x4e7 Func
	var_256_cvector = var_254_cvector - var_255_cvector; // 0x4e9 Sub2
	var_257_float = var_256_cvector | var_256_cvector; // 0x4ea Or2
	var_287_float = var_247_float * var_247_float; // 0x4eb Mult
	var_288_bool = var_257_float < var_287_float; // 0x4ec LT
	if(var_288_bool == 0) goto Label_1268; // 0x4ed JumpB
	var_289_bool = 0; var_290_float = 0; // 0x4ee PushV
	var_290_float = var_247_float; // 0x4ef Mov
	func_1129(var_257_float, var_289_bool, var_290_float); // 0x4f0 Call
	var_246_bool = 1; // 0x4f2 MovB
	return 10; // 0x4f3 Return
	
Label_1268:
	sync(); // 0x4f4 Func
	goto Label_1234; // 0x4f6 Jump
}


func_1368(var_385_int)
{
	var_385_int = 0; // 0x558 MovI
	return 0; // 0x559 Return
}


func_1881(var_62_string, var_63_int)
{
	var_64_string = ""; var_65_string = ""; // 0x759 PushV
	var_65_string = "idle"; // 0x75a MovS
	var_66_int = var_63_int; // 0x75b Push
	if(var_66_int == 0) goto Label_1886; // 0x75c JumpB
	var_65_string = var_65_string + var_63_int; // 0x75d Add2
	
Label_1886:
	var_62_string = var_65_string; // 0x75e Mov
	return 2; // 0x75f Return
}


func_1370()
{
	return 0; // 0x55b Return
}


func_1372(var_314_int)
{
	var_314_int = 1; // 0x55c MovI
	return 0; // 0x55d Return
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


func_1374(var_309_float)
{
	var_309_float = 0.5; // 0x55e MovF
	return 0; // 0x55f Return
}


func_1888(var_56_int)
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x760 PushV
	var_59_int = 0; // 0x761 MovI
	
Label_1890:
	var_61_string = "all"; // 0x762 PushS
	var_62_string = ""; var_63_int = 0; // 0x763 PushV
	var_63_int = var_59_int; // 0x764 Mov
	func_1881(var_62_string, var_63_int); // 0x765 Call
	HasAnimation(var_60_bool, var_61_string, var_62_string); // 0x767 Func
	var_67_bool = var_60_bool == 0; // 0x769 Not
	if(var_67_bool == 0) goto Label_1900; // 0x76a JumpB
	goto Label_1903; // 0x76b Jump
	
Label_1903:
	var_56_int = var_59_int; // 0x76f Mov
	return 4; // 0x770 Return
	
Label_1900:
	var_68_int = 1; // 0x76c PushI
	var_59_int = var_59_int + var_68_int; // 0x76d Add2
	goto Label_1890; // 0x76e Jump
}


func_1633(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x661 PushV
	IsDead(var_34_bool); // 0x662 ObjFunc
	var_31_bool = var_34_bool; // 0x664 Mov
	return 2; // 0x665 Return
}


func_1507(var_0_bool)
{
	var_0_bool = 1; // 0x5e3 TMovB
	var_12_int = 0; // 0x5e4 PushI
	KillTimer(var_12_int); // 0x5e5 Func
	Stop(); // 0x5e7 Func
	return 0; // 0x5e9 Return
}


func_1765()
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x6e5 PushV
	GetPosition(var_91_cvector); // 0x6e6 ObjFunc
	GetPosition(var_92_cvector); // 0x6e8 Func
	var_93_cvector = var_91_cvector - var_92_cvector; // 0x6ea Sub2
	var_94_float = GetByIndex(var_93_cvector, 0); // 0x6eb PushE
	var_95_float = GetByIndex(var_93_cvector, 2); // 0x6ec PushE
	RotateAsync(var_94_float, var_95_float); // 0x6ed Func
	return 6; // 0x6ef Return
}


func_1638(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x666 PushV
	var_26_bool = var_21_object == 0; // 0x667 NullEq
	if(var_26_bool == 0) goto Label_1643; // 0x668 JumpB
	var_20_bool = 0; // 0x669 MovB
	return 4; // 0x66a Return
	
Label_1643:
	var_27_bool = 0; // 0x66b PushV
	var_27_bool = 0; // 0x66c MovB
	var_28_string = "IsDead"; // 0x66d PushS
	var_29_int = 1; // 0x66e PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x66f FuncExist
	if(var_30_bool == 0) goto Label_1655; // 0x670 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x671 PushV
	var_32_object = var_21_object; // 0x672 Mov
	func_1633(var_32_object); // 0x673 Call
	if(var_31_bool == 0) goto Label_1655; // 0x675 JumpB
	var_27_bool = 1; // 0x676 MovB
	
Label_1655:
	if(var_27_bool == 0) goto Label_1658; // 0x677 JumpB
	var_20_bool = 0; // 0x678 MovB
	return 4; // 0x679 Return
	
Label_1658:
	GetScene(var_24_object); // 0x67a Func
	var_35_bool = var_24_object == 0; // 0x67c NullEq
	if(var_35_bool == 0) goto Label_1664; // 0x67d JumpB
	var_20_bool = 0; // 0x67e MovB
	return 4; // 0x67f Return
	
Label_1664:
	GetScene(var_25_object); // 0x680 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x682 Neq
	if(var_36_bool == 0) goto Label_1670; // 0x683 JumpB
	var_20_bool = 0; // 0x684 MovB
	return 4; // 0x685 Return
	
Label_1670:
	var_20_bool = 1; // 0x686 MovB
	return 4; // 0x687 Return
}


func_1383(var_0_bool, var_1_bool, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); // 0x567 PushV
	var_0_bool = 0; // 0x568 TMovB
	var_1_bool = var_163_object; // 0x569 TMov
	var_179_bool = var_167_bool; // 0x56a Mov
	
Label_1387:
	var_186_bool = 0; var_187_object = Obj(); // 0x56b PushV
	var_187_object = var_163_object; // 0x56c Mov
	func_1523(var_186_bool, var_187_object); // 0x56d Call
	var_190_bool = var_186_bool == 0; // 0x56f Not
	if(var_190_bool == 0) goto Label_1395; // 0x570 JumpB
	var_162_bool = 0; // 0x571 MovB
	return 16; // 0x572 Return
	
Label_1395:
	GetPosition(var_181_cvector); // 0x573 ObjFunc
	GetPosition(var_182_cvector); // 0x575 Func
	var_183_cvector = var_181_cvector - var_182_cvector; // 0x577 Sub2
	var_184_float = var_183_cvector | var_183_cvector; // 0x578 Or2
	var_191_bool = 0; // 0x579 PushV
	var_191_bool = 0; // 0x57a MovB
	var_192_int = 0; // 0x57b PushI
	var_193_bool = var_165_float > var_192_int; // 0x57c GT
	if(var_193_bool == 0) goto Label_1410; // 0x57d JumpB
	var_194_float = var_165_float * var_165_float; // 0x57e Mult
	var_195_bool = var_184_float > var_194_float; // 0x57f GT
	if(var_195_bool == 0) goto Label_1410; // 0x580 JumpB
	var_191_bool = 1; // 0x581 MovB
	
Label_1410:
	if(var_191_bool == 0) goto Label_1415; // 0x582 JumpB
	Stop(); // 0x583 Func
	var_162_bool = 0; // 0x585 MovB
	return 16; // 0x586 Return
	
Label_1415:
	var_196_float = var_164_float * var_164_float; // 0x587 Mult
	var_197_bool = var_184_float > var_196_float; // 0x588 GT
	if(var_197_bool == 0) goto Label_1477; // 0x589 JumpB
	GetPFPosition(var_181_cvector); // 0x58a ObjFunc
	FindPathTo(var_185_object, var_181_cvector); // 0x58c Func
	var_198_bool = var_185_object != 0; // 0x58e NullNeq
	if(var_198_bool == 0) goto Label_1426; // 0x58f JumpB
	var_180_object = var_185_object; // 0x590 Mov
	var_185_object = 0; // 0x591 SetNull
	
Label_1426:
	var_199_bool = var_180_object != 0; // 0x592 NullNeq
	if(var_199_bool == 0) goto Label_1459; // 0x593 JumpB
	var_200_bool = var_179_bool; // 0x594 Push
	if(var_200_bool == 0) goto Label_1436; // 0x595 JumpB
	var_179_bool = 0; // 0x596 MovB
	RotatePath(var_180_object, var_178_bool); // 0x597 Func
	var_201_bool = var_178_bool == 0; // 0x599 Not
	if(var_201_bool == 0) goto Label_1436; // 0x59a JumpB
	goto Label_1483; // 0x59b Jump
	
Label_1483:
	var_162_bool = !var_0_bool; // 0x5cb Not2
	return 16; // 0x5cc Return
	
Label_1436:
	var_202_int = 0; // 0x59c PushI
	var_203_float = 0.3; // 0x59d PushF
	SetTimer(var_202_int, var_203_float); // 0x59e Func
	var_204_string = ""; // 0x5a0 PushV
	func_1530(var_204_string); // 0x5a1 Call
	var_205_string = ""; // 0x5a3 PushV
	func_1532(var_205_string); // 0x5a4 Call
	FollowPath(var_180_object, var_166_bool, var_178_bool, var_204_string, var_205_string); // 0x5a6 Func
	var_206_bool = var_178_bool == 0; // 0x5a8 Not
	if(var_206_bool == 0) goto Label_1457; // 0x5a9 JumpB
	var_207_bool = var_0_bool; // 0x5aa PushT
	if(var_207_bool == 0) goto Label_1455; // 0x5ab JumpB
	var_180_object = 0; // 0x5ac SetNull
	goto Label_1483; // 0x5ad Jump
	
Label_1455:
	goto Label_1482; // 0x5af Jump
	
Label_1482:
	goto Label_1387; // 0x5ca Jump
	
Label_1457:
	var_180_object = 0; // 0x5b1 SetNull
	goto Label_1475; // 0x5b2 Jump
	
Label_1475:
	var_185_object = 0; // 0x5c3 SetNull
	goto Label_1481; // 0x5c4 Jump
	
Label_1481:
	var_180_object = 0; // 0x5c9 SetNull
	
Label_1459:
	var_208_int = 0; // 0x5b3 PushI
	KillTimer(var_208_int); // 0x5b4 Func
	var_209_float = 0.5; // 0x5b6 PushF
	Sleep(var_209_float, var_178_bool); // 0x5b7 Func
	var_210_bool = var_178_bool == 0; // 0x5b9 Not
	if(var_210_bool == 0) goto Label_1471; // 0x5ba JumpB
	var_211_bool = var_0_bool; // 0x5bb PushT
	if(var_211_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_180_object = 0; // 0x5bd SetNull
	goto Label_1483; // 0x5be Jump
	
Label_1471:
	var_212_int = 0; // 0x5bf PushI
	var_213_float = 0.3; // 0x5c0 PushF
	SetTimer(var_212_int, var_213_float); // 0x5c1 Func
	
Label_1477:
	var_214_int = 0; // 0x5c5 PushI
	KillTimer(var_214_int); // 0x5c6 Func
	goto Label_1483; // 0x5c8 Jump
}


func_871(var_105_object)
{
	var_111_object = Obj(); var_112_bool = 0; var_113_float = 0; // 0x368 PushV
	var_111_object = var_105_object; // 0x369 Mov
	var_112_bool = 1; // 0x36a MovB
	var_113_float = 180.0; // 0x36b MovF
	func_885(var_106_object, var_107_int, var_108_int, var_109_bool, var_110_int, var_105_object, var_111_object, var_112_bool, var_113_float); // 0x36c Call
	return 0; // 0x36e Return
}


func_1129(var_0_bool, var_289_bool, var_290_float)
{
	var_291_int = 0; var_292_bool = 0; var_293_int = 0; var_294_bool = 0; // 0x469 PushV
	irand(var_293_int, var_294_bool); // 0x46a Func
	var_295_int = 1; // 0x46c PushI
	var_293_int = var_293_int + var_295_int; // 0x46d Add2
	Face(var_0_bool); // 0x46e Func
	var_296_bool = 1; // 0x470 PushB
	SetAttackState(var_296_bool); // 0x471 Func
	var_297_string = "all"; // 0x473 PushS
	var_298_string = "attack_begin"; // 0x474 PushS
	var_299_int = var_298_string + var_293_int; // 0x475 Add
	PlayAnimation(var_297_string, var_299_int); // 0x476 Func
	WaitForAnimEnd(); // 0x478 Func
	func_1336(var_293_int, var_294_bool); // 0x47b Call
	var_315_bool = 0; var_316_object = Obj(); // 0x47d PushV
	var_316_object = var_0_bool; // 0x47e MovT
	func_1674(var_315_bool, var_316_object); // 0x47f Call
	var_317_bool = var_315_bool == 0; // 0x481 Not
	if(var_317_bool == 0) goto Label_1159; // 0x482 JumpB
	StopAsync(); // 0x483 Func
	var_289_bool = 0; // 0x485 MovB
	return 4; // 0x486 Return
	
Label_1159:
	var_318_float = 0; var_319_int = 0; // 0x487 PushV
	var_318_float = var_290_float; // 0x488 Mov
	var_319_int = var_293_int; // 0x489 Mov
	func_1090(var_294_bool, var_318_float, var_319_int); // 0x48a Call
	var_388_string = "all"; // 0x48c PushS
	var_389_string = "attack_middle"; // 0x48d PushS
	var_390_int = var_389_string + var_293_int; // 0x48e Add
	HasAnimation(var_294_bool, var_388_string, var_390_int); // 0x48f Func
	var_391_bool = var_294_bool; // 0x491 Push
	if(var_391_bool == 0) goto Label_1193; // 0x492 JumpB
	var_392_string = "all"; // 0x493 PushS
	var_393_string = "attack_middle"; // 0x494 PushS
	var_394_int = var_393_string + var_293_int; // 0x495 Add
	PlayAnimation(var_392_string, var_394_int); // 0x496 Func
	WaitForAnimEnd(); // 0x498 Func
	var_395_bool = 0; var_396_object = Obj(); // 0x49a PushV
	var_396_object = var_0_bool; // 0x49b MovT
	func_1674(var_395_bool, var_396_object); // 0x49c Call
	var_397_bool = var_395_bool == 0; // 0x49e Not
	if(var_397_bool == 0) goto Label_1188; // 0x49f JumpB
	StopAsync(); // 0x4a0 Func
	var_289_bool = 0; // 0x4a2 MovB
	return 4; // 0x4a3 Return
	
Label_1188:
	var_398_float = 0; var_399_int = 0; // 0x4a4 PushV
	var_398_float = var_290_float; // 0x4a5 Mov
	var_399_int = var_293_int; // 0x4a6 Mov
	func_1090(var_294_bool, var_398_float, var_399_int); // 0x4a7 Call
	
Label_1193:
	var_400_bool = 0; // 0x4a9 PushB
	SetAttackState(var_400_bool); // 0x4aa Func
	var_401_string = "all"; // 0x4ac PushS
	var_402_string = "attack_end"; // 0x4ad PushS
	var_403_int = var_402_string + var_293_int; // 0x4ae Add
	PlayAnimation(var_401_string, var_403_int); // 0x4af Func
	var_404_bool = 0; var_405_float = 0; // 0x4b1 PushV
	var_405_float = 0.75; // 0x4b2 MovF
	func_1209(var_404_bool, var_405_float); // 0x4b3 Call
	StopAsync(); // 0x4b5 Func
	var_289_bool = 1; // 0x4b7 MovB
	return 4; // 0x4b8 Return
}


func_879(var_329_float)
{
	var_329_float = 0.2; // 0x370 MovF
	return 0; // 0x371 Return
}


func_1776(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x6f0 PushV
	IsLoaded(var_15_bool); // 0x6f1 Func
	var_13_bool = var_15_bool; // 0x6f3 Mov
	return 2; // 0x6f4 Return
}


func_1905(var_54_int)
{
	var_56_bool = 0; // 0x772 PushV
	func_1988(var_56_bool); // 0x773 Call
	if(var_56_bool == 0) goto Label_1912; // 0x775 JumpB
	var_54_int = 2; // 0x776 MovI
	goto Label_1913; // 0x777 Jump
	
Label_1913:
	return 0; // 0x779 Return
	
Label_1912:
	var_54_int = 0; // 0x778 MovI
}


func_882(var_336_int)
{
	var_336_int = 0; // 0x373 MovI
	return 0; // 0x374 Return
}


func_1523(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x5f4 PushV
	var_17_object = var_15_object; // 0x5f5 Mov
	func_1674(var_16_bool, var_17_object); // 0x5f6 Call
	var_14_bool = var_16_bool; // 0x5f7 Mov
	return 0; // 0x5f9 Return
}


func_1781(var_71_object)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_cvector = CVector(0,0,0); // 0x6f5 PushV
	GetEyesHeight(var_74_float); // 0x6f6 ObjFunc
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x6f8 MovV
	var_76_float = GetByIndex(var_75_cvector, 1); // 0x6f9 PushE
	var_76_float = var_74_float; // 0x6fa Mov
	SetByIndex(var_75_cvector, 1) = var_76_float; // 0x6fb PopE
	var_77_string = "head"; // 0x6fc PushS
	LookAsync(var_71_object, var_77_string, var_75_cvector); // 0x6fd Func
	return 4; // 0x6ff Return
}


func_885(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_111_object, var_112_bool, var_113_float, var_168_bool)
{
	var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_bool = 0; var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_bool = 0; var_130_bool = 0; var_131_cvector = CVector(0,0,0); var_132_float = 0; var_133_float = 0; // 0x375 PushV
	var_1_bool = 0; // 0x376 TMovI
	
Label_887:
	var_134_string = "all"; // 0x377 PushS
	var_135_string = "attack_begin"; // 0x378 PushS
	var_136_int = 1; // 0x379 PushI
	var_137_int = var_1_bool + var_136_int; // 0x37a Add
	var_138_int = var_135_string + var_137_int; // 0x37b Add
	HasAnimation(var_124_bool, var_134_string, var_138_int); // 0x37c Func
	var_139_bool = var_124_bool == 0; // 0x37e Not
	if(var_139_bool == 0) goto Label_897; // 0x37f JumpB
	goto Label_900; // 0x380 Jump
	
Label_900:
	var_2_bool = 0; // 0x384 TMovI
	
Label_901:
	var_140_string = "attack"; // 0x385 PushS
	var_141_int = 1; // 0x386 PushI
	var_142_int = var_2_bool + var_141_int; // 0x387 Add
	var_143_int = var_140_string + var_142_int; // 0x388 Add
	IsExisting3DSound(var_125_bool, var_143_int); // 0x389 Func
	var_144_bool = var_125_bool == 0; // 0x38b Not
	if(var_144_bool == 0) goto Label_910; // 0x38c JumpB
	goto Label_913; // 0x38d Jump
	
Label_913:
	var_4_object = 0; // 0x391 TMovI
	var_145_string = "@GetAttackDistance"; // 0x392 PushS
	var_146_int = 1; // 0x393 PushI
	var_147_bool = IsFuncExist(var_111_object, var_145_string, var_146_int); // 0x394 FuncExist
	if(var_147_bool == 0) goto Label_923; // 0x395 JumpB
	GetAttackDistance(var_126_float); // 0x396 ObjFunc
	var_148_int = 50; // 0x398 PushI
	var_126_float = var_126_float + var_148_int; // 0x399 Add2
	goto Label_924; // 0x39a Jump
	
Label_924:
	var_149_int = 150; // 0x39c PushI
	var_150_bool = var_126_float >= var_149_int; // 0x39d GE
	if(var_150_bool == 0) goto Label_928; // 0x39e JumpB
	var_126_float = 150; // 0x39f MovI
	
Label_928:
	var_3_object = 0; // 0x3a0 TMovB
	var_0_bool = var_111_object; // 0x3a1 TMov
	IsPlayerActor(var_0_bool, var_129_bool); // 0x3a2 Func
	var_151_bool = var_112_bool; // 0x3a4 Push
	if(var_151_bool == 0) goto Label_936; // 0x3a5 JumpB
	var_130_bool = 0; // 0x3a6 MovB
	goto Label_937; // 0x3a7 Jump
	
Label_937:
	var_152_bool = 0; // 0x3a9 PushV
	var_152_bool = 0; // 0x3aa MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x3ab PushV
	var_154_object = var_0_bool; // 0x3ac MovT
	func_1674(var_153_bool, var_154_object); // 0x3ad Call
	if(var_153_bool == 0) goto Label_947; // 0x3af JumpB
	var_155_bool = var_3_object == 0; // 0x3b0 Not
	if(var_155_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_152_bool = 1; // 0x3b2 MovB
	
Label_947:
	if(var_152_bool == 0) goto Label_1073; // 0x3b3 JumpB
	GetPFPosition(var_127_cvector); // 0x3b4 TObjFunc
	GetPFPosition(var_128_cvector); // 0x3b6 Func
	var_131_cvector = var_127_cvector - var_128_cvector; // 0x3b8 Sub2
	var_132_float = var_131_cvector | var_131_cvector; // 0x3b9 Or2
	var_156_float = 400.0; // 0x3ba PushF
	var_157_int = var_156_float + var_126_float; // 0x3bb Add
	var_158_float = 400.0; // 0x3bc PushF
	var_159_int = var_158_float + var_126_float; // 0x3bd Add
	var_160_float = var_157_int * var_159_int; // 0x3be Mult
	var_161_bool = var_132_float >= var_160_float; // 0x3bf GE
	if(var_161_bool == 0) goto Label_976; // 0x3c0 JumpB
	var_162_bool = 0; var_163_object = Obj(); var_164_float = 0; var_165_float = 0; var_166_bool = 0; var_167_bool = 0; // 0x3c1 PushV
	var_163_object = var_0_bool; // 0x3c2 MovT
	var_164_float = var_126_float; // 0x3c3 Mov
	var_165_float = 3000.0; // 0x3c4 MovF
	var_166_bool = 1; // 0x3c5 MovB
	var_167_bool = 0; // 0x3c6 MovB
	TaskCall(5); // 0x3c7 TaskCall
	func_1383(var_168_bool, var_169_object, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool); // 0x3c8 Call
	TaskReturn(); // 0x3c9 TaskReturn
	var_215_bool = var_168_bool == 0; // 0x3cb Not
	if(var_215_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_1073; // 0x3cd Jump
	
Label_1073:
	WaitForAnimEnd(); // 0x431 Func
	var_216_object = var_3_object; // 0x433 PushT
	if(var_216_object == 0) goto Label_1078; // 0x434 JumpB
	return 20; // 0x435 Return
	
Label_1078:
	var_217_string = "all"; // 0x436 PushS
	var_218_string = "attack_off"; // 0x437 PushS
	PlayAnimation(var_217_string, var_218_string); // 0x438 Func
	WaitForAnimEnd(); // 0x43a Func
	var_219_bool = var_129_bool; // 0x43c Push
	if(var_219_bool == 0) goto Label_1089; // 0x43d JumpB
	var_220_float = 2.0; // 0x43e PushF
	Sleep(var_220_float); // 0x43f Func
	
Label_1089:
	return 20; // 0x441 Return
	
Label_974:
	var_130_bool = 0; // 0x3ce MovB
	goto Label_1072; // 0x3cf Jump
	
Label_1072:
	goto Label_937; // 0x430 Jump
	
Label_976:
	var_221_float = var_113_float * var_113_float; // 0x3d0 Mult
	var_222_bool = var_132_float >= var_221_float; // 0x3d1 GE
	if(var_222_bool == 0) goto Label_1064; // 0x3d2 JumpB
	var_223_bool = var_130_bool == 0; // 0x3d3 Not
	if(var_223_bool == 0) goto Label_994; // 0x3d4 JumpB
	var_224_object = Obj(); // 0x3d5 PushV
	var_224_object = var_0_bool; // 0x3d6 MovT
	func_1765(); // 0x3d7 Call
	var_233_string = "all"; // 0x3d9 PushS
	var_234_string = "attack_on"; // 0x3da PushS
	PlayAnimation(var_233_string, var_234_string); // 0x3db Func
	WaitForAnimEnd(); // 0x3dd Func
	StopAsync(); // 0x3df Func
	var_130_bool = 1; // 0x3e1 MovB
	
Label_994:
	rand(var_133_float); // 0x3e2 Func
	var_235_bool = 0; // 0x3e4 PushV
	var_235_bool = 1; // 0x3e5 MovB
	var_236_float = 0.6; // 0x3e6 PushF
	var_237_bool = var_133_float < var_236_float; // 0x3e7 LT
	if(var_237_bool == 0) goto Label_1006; // 0x3e8 JumpB
	var_238_bool = 0; // 0x3e9 PushV
	func_1325(var_235_bool, var_238_bool); // 0x3ea Call
	if(var_238_bool == 0) goto Label_1006; // 0x3ec JumpB
	var_235_bool = 0; // 0x3ed MovB
	
Label_1006:
	if(var_235_bool == 0) goto Label_1020; // 0x3ee JumpB
	Face(var_0_bool); // 0x3ef Func
	var_244_string = "all"; // 0x3f1 PushS
	var_245_string = "attack_stay"; // 0x3f2 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x3f3 Func
	var_246_bool = 0; var_247_float = 0; // 0x3f5 PushV
	var_247_float = var_113_float; // 0x3f6 Mov
	func_1233(var_133_float, var_246_bool, var_247_float); // 0x3f7 Call
	StopAsync(); // 0x3f9 Func
	goto Label_1063; // 0x3fb Jump
	
Label_1063:
	goto Label_1072; // 0x427 Jump
	
Label_1020:
	Face(var_0_bool); // 0x3fc Func
	var_413_string = "all"; // 0x3fe PushS
	var_414_string = "fjump"; // 0x3ff PushS
	PlayAnimation(var_413_string, var_414_string); // 0x400 Func
	WaitForAnimEnd(); // 0x402 Func
	var_415_cvector = CVector(0.0, 0.0, 0.0); // 0x404 PushVec
	SetSpeed(var_415_cvector); // 0x405 Func
	Stop(); // 0x407 Func
	StopAsync(); // 0x409 Func
	var_416_bool = 0; // 0x40b PushV
	func_1325(var_133_float, var_416_bool); // 0x40c Call
	var_417_bool = var_416_bool == 0; // 0x40e Not
	if(var_417_bool == 0) goto Label_1063; // 0x40f JumpB
	var_418_bool = 0; var_419_object = Obj(); // 0x410 PushV
	var_419_object = var_0_bool; // 0x411 MovT
	func_1674(var_418_bool, var_419_object); // 0x412 Call
	var_420_bool = var_418_bool == 0; // 0x414 Not
	if(var_420_bool == 0) goto Label_1047; // 0x415 JumpB
	goto Label_1073; // 0x416 Jump
	
Label_1047:
	GetPFPosition(var_127_cvector); // 0x417 TObjFunc
	GetPFPosition(var_128_cvector); // 0x419 Func
	var_131_cvector = var_127_cvector - var_128_cvector; // 0x41b Sub2
	var_132_float = var_131_cvector | var_131_cvector; // 0x41c Or2
	var_421_float = var_113_float * var_113_float; // 0x41d Mult
	var_422_bool = var_132_float < var_421_float; // 0x41e LT
	if(var_422_bool == 0) goto Label_1063; // 0x41f JumpB
	var_423_bool = 0; var_424_float = 0; // 0x420 PushV
	var_424_float = var_113_float; // 0x421 Mov
	func_1129(var_133_float, var_423_bool, var_424_float); // 0x422 Call
	var_425_bool = var_423_bool == 0; // 0x424 Not
	if(var_425_bool == 0) goto Label_1063; // 0x425 JumpB
	goto Label_1073; // 0x426 Jump
	
Label_1064:
	var_426_bool = 0; var_427_float = 0; // 0x428 PushV
	var_427_float = var_113_float; // 0x429 Mov
	func_1129(var_133_float, var_426_bool, var_427_float); // 0x42a Call
	var_428_bool = var_426_bool == 0; // 0x42c Not
	if(var_428_bool == 0) goto Label_1071; // 0x42d JumpB
	goto Label_1073; // 0x42e Jump
	
Label_1071:
	var_130_bool = 1; // 0x42f MovB
	
Label_936:
	var_130_bool = 1; // 0x3a8 MovB
	
Label_923:
	var_126_float = var_113_float; // 0x39b Mov
	
Label_910:
	var_429_int = 1; // 0x38e PushI
	var_2_bool = var_2_bool + var_429_int; // 0x38f Add2
	goto Label_901; // 0x390 Jump
	
Label_897:
	var_430_int = 1; // 0x381 PushI
	var_1_bool = var_1_bool + var_430_int; // 0x382 Add2
	goto Label_887; // 0x383 Jump
}


func_376(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; // 0x178 PushV
	var_0_bool = 0; // 0x179 TMovB
	var_1_bool = 0; // 0x17a TMovB
	var_31_float = 0.5; // 0x17b PushF
	rand(var_24_float, var_31_float); // 0x17c Func
	Sleep(var_24_float); // 0x17e Func
	
Label_384:
	var_32_bool = var_0_bool == 0; // 0x180 Not
	if(var_32_bool == 0) goto Label_432; // 0x181 JumpB
	var_33_bool = var_1_bool == 0; // 0x182 Not
	if(var_33_bool == 0) goto Label_404; // 0x183 JumpB
	
Label_388:
	GetPosition(var_26_cvector); // 0x184 Func
	GetCameraFarDistance(var_27_float); // 0x186 Func
	var_34_float = 2.5; // 0x188 PushF
	var_27_float = var_27_float * var_34_float; // 0x189 Mult2
	GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, var_27_float, var_28_bool); // 0x18a Func
	var_35_bool = var_28_bool; // 0x18c Push
	if(var_35_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_403; // 0x18e Jump
	
Label_403:
	goto Label_405; // 0x193 Jump
	
Label_405:
	FindShiftedPathTo(var_29_object, var_25_cvector); // 0x195 Func
	var_36_bool = var_29_object != 0; // 0x197 NullNeq
	if(var_36_bool == 0) goto Label_427; // 0x198 JumpB
	RotatePath(var_29_object, var_30_bool); // 0x199 Func
	var_37_bool = var_30_bool; // 0x19b Push
	if(var_37_bool == 0) goto Label_426; // 0x19c JumpB
	var_38_bool = 0; // 0x19d PushV
	func_454(var_38_bool); // 0x19e Call
	FollowPath(var_29_object, var_38_bool, var_30_bool); // 0x1a0 Func
	var_29_object = 0; // 0x1a2 SetNull
	var_39_bool = var_30_bool; // 0x1a3 Push
	if(var_39_bool == 0) goto Label_426; // 0x1a4 JumpB
	TaskCall(2); // 0x1a6 TaskCall
	func_571(); // 0x1a7 Call
	TaskReturn(); // 0x1a8 TaskReturn
	
Label_426:
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_29_object = 0; // 0x1ae SetNull
	goto Label_384; // 0x1af Jump
	
Label_427:
	var_89_int = 1; // 0x1ab PushI
	Sleep(var_89_int); // 0x1ac Func
	
Label_399:
	var_90_int = 1; // 0x18f PushI
	Sleep(var_90_int); // 0x190 Func
	goto Label_388; // 0x192 Jump
	
Label_404:
	var_1_bool = 0; // 0x194 TMovB
	
Label_432:
	return 14; // 0x1b0 Return
}


func_1273(var_0_bool, var_259_bool)
{
	var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_float = 0; var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_float = 0; var_269_float = 0; // 0x4f9 PushV
	var_270_bool = 0; var_271_object = Obj(); // 0x4fa PushV
	var_271_object = var_0_bool; // 0x4fb MovT
	func_1674(var_270_bool, var_271_object); // 0x4fc Call
	var_272_bool = var_270_bool == 0; // 0x4fe Not
	if(var_272_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_259_bool = 0; // 0x500 MovB
	return 10; // 0x501 Return
	
Label_1282:
	var_273_bool = 0; // 0x502 PushV
	func_1325(var_269_float, var_273_bool); // 0x503 Call
	if(var_273_bool == 0) goto Label_1304; // 0x505 JumpB
	GetPFPosition(var_265_cvector); // 0x506 TObjFunc
	GetPFPosition(var_266_cvector); // 0x508 Func
	var_267_cvector = var_265_cvector - var_266_cvector; // 0x50a Sub2
	var_268_float = var_267_cvector | var_267_cvector; // 0x50b Or2
	GetAttackDistance(var_269_float); // 0x50c TObjFunc
	var_274_int = 50; // 0x50e PushI
	var_269_float = var_269_float + var_274_int; // 0x50f Add2
	var_275_float = var_269_float * var_269_float; // 0x510 Mult
	var_276_bool = var_268_float <= var_275_float; // 0x511 LE
	if(var_276_bool == 0) goto Label_1304; // 0x512 JumpB
	func_1306(var_269_float); // 0x514 Call
	var_259_bool = 1; // 0x516 MovB
	return 10; // 0x517 Return
	
Label_1304:
	var_259_bool = 0; // 0x518 MovB
	return 10; // 0x519 Return
}


func_1914(var_62_object)
{
	var_63_object = Obj(); // 0x77b PushV
	var_63_object = var_62_object; // 0x77c Mov
	TaskCall(3); // 0x77d TaskCall
	func_645(var_64_object, var_63_object); // 0x77e Call
	TaskReturn(); // 0x77f TaskReturn
	return 0; // 0x781 Return
}


func_1532(var_205_string)
{
	var_205_string = "run"; // 0x5fc MovS
	return 0; // 0x5fd Return
}


func_1534(var_360_string, var_361_int)
{
	var_362_int = 1; // 0x5ff PushI
	var_363_bool = var_361_int == var_362_int; // 0x600 Eq
	if(var_363_bool == 0) goto Label_1540; // 0x601 JumpB
	var_360_string = "fire"; // 0x602 MovS
	return 0; // 0x603 Return
	
Label_1540:
	var_360_string = "phys"; // 0x604 MovS
	return 0; // 0x605 Return
}


