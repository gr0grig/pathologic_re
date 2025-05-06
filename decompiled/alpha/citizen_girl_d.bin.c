task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0xf PushV
	var_13_int = 0; var_14_object = Obj(); // 0x10 PushV
	var_14_object = var_10_bool; // 0x11 Mov
	func_1638(var_14_object); // 0x12 Call
	var_12_int = var_13_int; // 0x13 Mov
	var_15_int = 0; // 0x15 PushI
	var_16_bool = var_12_int > var_15_int; // 0x16 GT
	if(var_16_bool == 0) goto Label_28; // 0x17 JumpB
	var_17_object = Obj(); // 0x18 PushV
	var_17_object = var_10_bool; // 0x19 Mov
	func_1641(var_17_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_1647(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0xac PushV
	var_13_int = 0; var_14_object = Obj(); // 0xad PushV
	var_14_object = var_10_bool; // 0xae Mov
	func_1638(var_14_object); // 0xaf Call
	var_12_int = var_13_int; // 0xb0 Mov
	var_15_int = 0; // 0xb2 PushI
	var_16_bool = var_12_int > var_15_int; // 0xb3 GT
	if(var_16_bool == 0) goto Label_191; // 0xb4 JumpB
	var_17_int = 1; // 0xb5 PushI
	var_18_bool = var_12_int > var_17_int; // 0xb6 GT
	if(var_18_bool == 0) goto Label_187; // 0xb7 JumpB
	func_311(var_12_int); // 0xb9 Call
	
Label_187:
	var_20_object = Obj(); // 0xbb PushV
	var_20_object = var_10_bool; // 0xbc Mov
	func_1641(var_20_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0xc0 PushV
	var_13_int = 0; var_14_object = Obj(); // 0xc1 PushV
	var_14_object = var_10_bool; // 0xc2 Mov
	func_1592(var_13_int, var_14_object); // 0xc3 Call
	var_12_int = var_13_int; // 0xc4 Mov
	var_49_int = 0; // 0xc6 PushI
	var_50_bool = var_12_int > var_49_int; // 0xc7 GT
	if(var_50_bool == 0) goto Label_211; // 0xc8 JumpB
	var_51_int = 1; // 0xc9 PushI
	var_52_bool = var_12_int > var_51_int; // 0xca GT
	if(var_52_bool == 0) goto Label_207; // 0xcb JumpB
	func_311(var_12_int); // 0xcd Call
	
Label_207:
	var_54_object = Obj(); // 0xcf PushV
	var_54_object = var_10_bool; // 0xd0 Mov
	func_1602(var_54_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xd4 PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0xd5 PushV
	var_15_object = var_10_cvector; // 0xd6 Mov
	var_16_object = var_11_bool; // 0xd7 Mov
	func_1748(var_14_bool, var_15_object, var_16_object); // 0xd8 Call
	if(var_14_bool == 0) goto Label_237; // 0xda JumpB
	var_47_int = 0; var_48_object = Obj(); // 0xdb PushV
	var_48_object = var_10_cvector; // 0xdc Mov
	func_1610(var_47_int, var_48_object); // 0xdd Call
	var_13_int = var_47_int; // 0xde Mov
	var_77_int = 0; // 0xe0 PushI
	var_78_bool = var_13_int > var_77_int; // 0xe1 GT
	if(var_78_bool == 0) goto Label_237; // 0xe2 JumpB
	var_79_int = 1; // 0xe3 PushI
	var_80_bool = var_13_int > var_79_int; // 0xe4 GT
	if(var_80_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_13_int); // 0xe7 Call
	
Label_233:
	var_82_object = Obj(); // 0xe9 PushV
	var_82_object = var_10_cvector; // 0xea Mov
	func_1620(var_82_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0xee PushV
	var_13_int = 0; var_14_object = Obj(); // 0xef PushV
	var_14_object = var_10_bool; // 0xf0 Mov
	func_1628(var_14_object); // 0xf1 Call
	var_12_int = var_13_int; // 0xf2 Mov
	var_15_int = 0; // 0xf4 PushI
	var_16_bool = var_12_int > var_15_int; // 0xf5 GT
	if(var_16_bool == 0) goto Label_257; // 0xf6 JumpB
	var_17_int = 1; // 0xf7 PushI
	var_18_bool = var_12_int > var_17_int; // 0xf8 GT
	if(var_18_bool == 0) goto Label_253; // 0xf9 JumpB
	func_311(var_12_int); // 0xfb Call
	
Label_253:
	var_20_object = Obj(); // 0xfd PushV
	var_20_object = var_10_bool; // 0xfe Mov
	func_1631(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x102 PushV
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); // 0x103 PushV
	var_15_string = var_11_bool; // 0x104 Mov
	var_16_object = var_10_cvector; // 0x105 Mov
	func_1633(var_16_object); // 0x106 Call
	var_13_int = var_14_int; // 0x107 Mov
	var_17_int = 0; // 0x109 PushI
	var_18_bool = var_13_int > var_17_int; // 0x10a GT
	if(var_18_bool == 0) goto Label_279; // 0x10b JumpB
	var_19_int = 1; // 0x10c PushI
	var_20_bool = var_13_int > var_19_int; // 0x10d GT
	if(var_20_bool == 0) goto Label_274; // 0x10e JumpB
	func_311(var_13_int); // 0x110 Call
	
Label_274:
	var_22_string = ""; var_23_object = Obj(); // 0x112 PushV
	var_22_string = var_11_bool; // 0x113 Mov
	var_23_object = var_10_cvector; // 0x114 Mov
	func_1636(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_object = Obj(); // 0x119 PushV
	var_11_object = var_10_bool; // 0x11a Mov
	func_336(var_10_bool, var_11_object); // 0x11b Call
	return 0; // 0x11d Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_object = Obj(); // 0x11f PushV
	var_11_object = var_10_bool; // 0x120 Mov
	func_336(var_10_bool, var_11_object); // 0x121 Call
	return 0; // 0x123 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 110; // 0x125 PushI
	var_12_bool = var_10_bool != var_11_int; // 0x126 Neq
	if(var_12_bool == 0) goto Label_297; // 0x127 JumpB
	return 0; // 0x128 Return
	
Label_297:
	var_2_bool = 0; // 0x129 TMovB
	var_13_int = 110; // 0x12a PushI
	KillTimer(var_13_int); // 0x12b Func
	ResetAAS(); // 0x12d Func
	return 0; // 0x12f Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_311(var_9_bool); // 0x131 Call
	func_1647(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_311(var_10_bool); // 0x149 Call
	var_12_object = Obj(); // 0x14b PushV
	var_12_object = var_10_bool; // 0x14c Mov
	func_1537(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	RequestClearPath(var_10_bool); // 0x1b2 Func
	return 0; // 0x1b4 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	Stop(); // 0x1b5 Func
	return 0; // 0x1b7 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x1c8 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x1c9 PushV
	var_14_object = var_10_bool; // 0x1ca Mov
	func_1638(var_14_object); // 0x1cb Call
	var_12_int = var_13_int; // 0x1cc Mov
	var_15_int = 0; // 0x1ce PushI
	var_16_bool = var_12_int > var_15_int; // 0x1cf GT
	if(var_16_bool == 0) goto Label_475; // 0x1d0 JumpB
	var_17_int = 1; // 0x1d1 PushI
	var_18_bool = var_12_int > var_17_int; // 0x1d2 GT
	if(var_18_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_640(); // 0x1d5 Call
	
Label_471:
	var_19_object = Obj(); // 0x1d7 PushV
	var_19_object = var_10_bool; // 0x1d8 Mov
	func_1641(var_19_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x1dc PushV
	var_13_int = 0; var_14_object = Obj(); // 0x1dd PushV
	var_14_object = var_10_bool; // 0x1de Mov
	func_1592(var_13_int, var_14_object); // 0x1df Call
	var_12_int = var_13_int; // 0x1e0 Mov
	var_49_int = 0; // 0x1e2 PushI
	var_50_bool = var_12_int > var_49_int; // 0x1e3 GT
	if(var_50_bool == 0) goto Label_495; // 0x1e4 JumpB
	var_51_int = 1; // 0x1e5 PushI
	var_52_bool = var_12_int > var_51_int; // 0x1e6 GT
	if(var_52_bool == 0) goto Label_491; // 0x1e7 JumpB
	func_640(); // 0x1e9 Call
	
Label_491:
	var_53_object = Obj(); // 0x1eb PushV
	var_53_object = var_10_bool; // 0x1ec Mov
	func_1602(var_53_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x1f0 PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x1f1 PushV
	var_15_object = var_10_cvector; // 0x1f2 Mov
	var_16_object = var_11_bool; // 0x1f3 Mov
	func_1748(var_14_bool, var_15_object, var_16_object); // 0x1f4 Call
	if(var_14_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_47_int = 0; var_48_object = Obj(); // 0x1f7 PushV
	var_48_object = var_10_cvector; // 0x1f8 Mov
	func_1610(var_47_int, var_48_object); // 0x1f9 Call
	var_13_int = var_47_int; // 0x1fa Mov
	var_77_int = 0; // 0x1fc PushI
	var_78_bool = var_13_int > var_77_int; // 0x1fd GT
	if(var_78_bool == 0) goto Label_521; // 0x1fe JumpB
	var_79_int = 1; // 0x1ff PushI
	var_80_bool = var_13_int > var_79_int; // 0x200 GT
	if(var_80_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_81_object = Obj(); // 0x205 PushV
	var_81_object = var_10_cvector; // 0x206 Mov
	func_1620(var_81_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x20a PushV
	var_13_int = 0; var_14_object = Obj(); // 0x20b PushV
	var_14_object = var_10_bool; // 0x20c Mov
	func_1628(var_14_object); // 0x20d Call
	var_12_int = var_13_int; // 0x20e Mov
	var_15_int = 0; // 0x210 PushI
	var_16_bool = var_12_int > var_15_int; // 0x211 GT
	if(var_16_bool == 0) goto Label_541; // 0x212 JumpB
	var_17_int = 1; // 0x213 PushI
	var_18_bool = var_12_int > var_17_int; // 0x214 GT
	if(var_18_bool == 0) goto Label_537; // 0x215 JumpB
	func_640(); // 0x217 Call
	
Label_537:
	var_19_object = Obj(); // 0x219 PushV
	var_19_object = var_10_bool; // 0x21a Mov
	func_1631(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x21e PushV
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); // 0x21f PushV
	var_15_string = var_11_bool; // 0x220 Mov
	var_16_object = var_10_cvector; // 0x221 Mov
	func_1633(var_16_object); // 0x222 Call
	var_13_int = var_14_int; // 0x223 Mov
	var_17_int = 0; // 0x225 PushI
	var_18_bool = var_13_int > var_17_int; // 0x226 GT
	if(var_18_bool == 0) goto Label_563; // 0x227 JumpB
	var_19_int = 1; // 0x228 PushI
	var_20_bool = var_13_int > var_19_int; // 0x229 GT
	if(var_20_bool == 0) goto Label_558; // 0x22a JumpB
	func_640(); // 0x22c Call
	
Label_558:
	var_21_string = ""; var_22_object = Obj(); // 0x22e PushV
	var_21_string = var_11_bool; // 0x22f Mov
	var_22_object = var_10_cvector; // 0x230 Mov
	func_1636(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_640(); // 0x235 Call
	func_1647(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x2bd PushV
	var_13_int = 0; var_14_object = Obj(); // 0x2be PushV
	var_14_object = var_10_bool; // 0x2bf Mov
	func_1638(var_14_object); // 0x2c0 Call
	var_12_int = var_13_int; // 0x2c1 Mov
	var_15_int = 0; // 0x2c3 PushI
	var_16_bool = var_12_int > var_15_int; // 0x2c4 GT
	if(var_16_bool == 0) goto Label_720; // 0x2c5 JumpB
	var_17_int = 1; // 0x2c6 PushI
	var_18_bool = var_12_int > var_17_int; // 0x2c7 GT
	if(var_18_bool == 0) goto Label_716; // 0x2c8 JumpB
	func_809(); // 0x2ca Call
	
Label_716:
	var_21_object = Obj(); // 0x2cc PushV
	var_21_object = var_10_bool; // 0x2cd Mov
	func_1641(var_21_object); // 0x2ce Call
	
Label_720:
	return 2; // 0x2d0 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x2d1 PushV
	var_13_int = 0; var_14_object = Obj(); // 0x2d2 PushV
	var_14_object = var_10_bool; // 0x2d3 Mov
	func_1592(var_13_int, var_14_object); // 0x2d4 Call
	var_12_int = var_13_int; // 0x2d5 Mov
	var_49_int = 0; // 0x2d7 PushI
	var_50_bool = var_12_int > var_49_int; // 0x2d8 GT
	if(var_50_bool == 0) goto Label_740; // 0x2d9 JumpB
	var_51_int = 1; // 0x2da PushI
	var_52_bool = var_12_int > var_51_int; // 0x2db GT
	if(var_52_bool == 0) goto Label_736; // 0x2dc JumpB
	func_809(); // 0x2de Call
	
Label_736:
	var_55_object = Obj(); // 0x2e0 PushV
	var_55_object = var_10_bool; // 0x2e1 Mov
	func_1602(var_55_object); // 0x2e2 Call
	
Label_740:
	return 2; // 0x2e4 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x2e5 PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x2e6 PushV
	var_15_object = var_10_cvector; // 0x2e7 Mov
	var_16_object = var_11_bool; // 0x2e8 Mov
	func_1748(var_14_bool, var_15_object, var_16_object); // 0x2e9 Call
	if(var_14_bool == 0) goto Label_766; // 0x2eb JumpB
	var_47_int = 0; var_48_object = Obj(); // 0x2ec PushV
	var_48_object = var_10_cvector; // 0x2ed Mov
	func_1610(var_47_int, var_48_object); // 0x2ee Call
	var_13_int = var_47_int; // 0x2ef Mov
	var_77_int = 0; // 0x2f1 PushI
	var_78_bool = var_13_int > var_77_int; // 0x2f2 GT
	if(var_78_bool == 0) goto Label_766; // 0x2f3 JumpB
	var_79_int = 1; // 0x2f4 PushI
	var_80_bool = var_13_int > var_79_int; // 0x2f5 GT
	if(var_80_bool == 0) goto Label_762; // 0x2f6 JumpB
	func_809(); // 0x2f8 Call
	
Label_762:
	var_83_object = Obj(); // 0x2fa PushV
	var_83_object = var_10_cvector; // 0x2fb Mov
	func_1620(var_83_object); // 0x2fc Call
	
Label_766:
	return 2; // 0x2fe Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0; // 0x2ff PushV
	var_13_int = 0; var_14_object = Obj(); // 0x300 PushV
	var_14_object = var_10_bool; // 0x301 Mov
	func_1628(var_14_object); // 0x302 Call
	var_12_int = var_13_int; // 0x303 Mov
	var_15_int = 0; // 0x305 PushI
	var_16_bool = var_12_int > var_15_int; // 0x306 GT
	if(var_16_bool == 0) goto Label_786; // 0x307 JumpB
	var_17_int = 1; // 0x308 PushI
	var_18_bool = var_12_int > var_17_int; // 0x309 GT
	if(var_18_bool == 0) goto Label_782; // 0x30a JumpB
	func_809(); // 0x30c Call
	
Label_782:
	var_21_object = Obj(); // 0x30e PushV
	var_21_object = var_10_bool; // 0x30f Mov
	func_1631(); // 0x310 Call
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x313 PushV
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); // 0x314 PushV
	var_15_string = var_11_bool; // 0x315 Mov
	var_16_object = var_10_cvector; // 0x316 Mov
	func_1633(var_16_object); // 0x317 Call
	var_13_int = var_14_int; // 0x318 Mov
	var_17_int = 0; // 0x31a PushI
	var_18_bool = var_13_int > var_17_int; // 0x31b GT
	if(var_18_bool == 0) goto Label_808; // 0x31c JumpB
	var_19_int = 1; // 0x31d PushI
	var_20_bool = var_13_int > var_19_int; // 0x31e GT
	if(var_20_bool == 0) goto Label_803; // 0x31f JumpB
	func_809(); // 0x321 Call
	
Label_803:
	var_23_string = ""; var_24_object = Obj(); // 0x323 PushV
	var_23_string = var_11_bool; // 0x324 Mov
	var_24_object = var_10_cvector; // 0x325 Mov
	func_1636(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_809(); // 0x336 Call
	var_13_object = Obj(); // 0x338 PushV
	var_13_object = var_10_bool; // 0x339 Mov
	func_1537(); // 0x33a Call
	return 0; // 0x33c Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x33d PushV
	var_15_int = 111; // 0x33e PushI
	var_16_bool = var_10_bool != var_15_int; // 0x33f Neq
	if(var_16_bool == 0) goto Label_834; // 0x340 JumpB
	return 4; // 0x341 Return
	
Label_834:
	var_17_bool = 0; var_18_object = Obj(); // 0x342 PushV
	var_18_object = var_0_bool; // 0x343 MovT
	func_1335(var_17_bool, var_18_object); // 0x344 Call
	var_51_bool = var_17_bool == 0; // 0x346 Not
	if(var_51_bool == 0) goto Label_844; // 0x347 JumpB
	func_809(); // 0x349 Call
	return 4; // 0x34b Return
	
Label_844:
	GetDirection(var_13_cvector); // 0x34c Func
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0x34e PushV
	var_55_object = var_0_bool; // 0x34f MovT
	func_1267(var_55_object); // 0x350 Call
	var_14_cvector = var_54_cvector; // 0x351 Mov
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x353 PushV
	var_61_cvector = var_13_cvector; // 0x354 Mov
	var_62_cvector = var_14_cvector; // 0x355 Mov
	func_1490(var_60_float, var_61_cvector, var_62_cvector); // 0x356 Call
	var_84_float = 0.5; // 0x358 PushF
	var_85_bool = var_60_float < var_84_float; // 0x359 LT
	if(var_85_bool == 0) goto Label_863; // 0x35a JumpB
	var_86_object = Obj(); // 0x35b PushV
	var_86_object = var_0_bool; // 0x35c MovT
	func_1426(); // 0x35d Call
	
Label_863:
	return 4; // 0x35f Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_809(); // 0x361 Call
	func_1647(); // 0x364 Call
	return 0; // 0x366 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_1052(var_9_bool); // 0x384 Call
	func_1647(); // 0x387 Call
	return 0; // 0x389 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_int, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; // 0x3e8 PushV
	var_19_int = 120; // 0x3e9 PushI
	var_20_bool = var_10_bool != var_19_int; // 0x3ea Neq
	if(var_20_bool == 0) goto Label_1005; // 0x3eb JumpB
	return 8; // 0x3ec Return
	
Label_1005:
	var_21_bool = var_0_bool == 0; // 0x3ed NullEq
	if(var_21_bool == 0) goto Label_1014; // 0x3ee JumpB
	Stop(); // 0x3ef Func
	var_22_int = 1; // 0x3f1 PushI
	KillTimer(var_22_int); // 0x3f2 Func
	var_2_bool = 1; // 0x3f4 TMovB
	goto Label_1051; // 0x3f5 Jump
	
Label_1051:
	return 8; // 0x41b Return
	
Label_1014:
	GetDirection(var_15_cvector); // 0x3f6 Func
	var_23_float = 7000.0; // 0x3f8 PushF
	FindDirLength(var_16_float, var_15_cvector, var_23_float); // 0x3f9 Func
	var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x3fb PushV
	var_25_float = 1.74533; // 0x3fc MovF
	func_906(var_24_cvector, var_25_float); // 0x3fd Call
	var_17_cvector = var_24_cvector; // 0x3fe Mov
	var_18_float = var_17_cvector | var_17_cvector; // 0x400 Or2
	var_54_bool = 0; // 0x401 PushV
	var_54_bool = 0; // 0x402 MovB
	var_55_float = 10000.0; // 0x403 PushF
	var_56_bool = var_18_float >= var_55_float; // 0x404 GE
	if(var_56_bool == 0) goto Label_1044; // 0x405 JumpB
	var_57_bool = 0; // 0x406 PushV
	var_57_bool = 1; // 0x407 MovB
	var_58_float = var_16_float * var_16_float; // 0x408 Mult
	var_59_float = 2.25; // 0x409 PushF
	var_60_float = var_58_float * var_59_float; // 0x40a Mult
	var_61_bool = var_18_float >= var_60_float; // 0x40b GE
	if(var_61_bool == 0) goto Label_1042; // 0x40c JumpB
	var_62_bool = 0; // 0x40d PushV
	func_1068(var_57_bool, var_62_bool); // 0x40e Call
	if(var_62_bool == 0) goto Label_1042; // 0x410 JumpB
	var_57_bool = 0; // 0x411 MovB
	
Label_1042:
	if(var_57_bool == 0) goto Label_1044; // 0x412 JumpB
	var_54_bool = 1; // 0x413 MovB
	
Label_1044:
	if(var_54_bool == 0) goto Label_1051; // 0x414 JumpB
	Stop(); // 0x415 Func
	var_82_cvector = CVector(0,0,0); // 0x417 PushV
	func_1262(var_82_cvector); // 0x418 Call
	var_1_bool = var_82_cvector + var_17_cvector; // 0x41a Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	func_1052(var_10_bool); // 0x425 Call
	var_12_object = Obj(); // 0x427 PushV
	var_12_object = var_10_bool; // 0x428 Mov
	func_1537(); // 0x429 Call
	return 0; // 0x42b Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; // 0x49a PushV
	var_19_int = 120; // 0x49b PushI
	var_20_bool = var_10_int != var_19_int; // 0x49c Neq
	if(var_20_bool == 0) goto Label_1183; // 0x49d JumpB
	return 8; // 0x49e Return
	
Label_1183:
	var_21_bool = var_0_bool == 0; // 0x49f NullEq
	if(var_21_bool == 0) goto Label_1192; // 0x4a0 JumpB
	Stop(); // 0x4a1 Func
	var_22_int = 1; // 0x4a3 PushI
	KillTimer(var_22_int); // 0x4a4 Func
	var_2_bool = 1; // 0x4a6 TMovB
	goto Label_1229; // 0x4a7 Jump
	
Label_1229:
	return 8; // 0x4cd Return
	
Label_1192:
	GetDirection(var_15_cvector); // 0x4a8 Func
	var_23_float = 7000.0; // 0x4aa PushF
	FindDirLength(var_16_float, var_15_cvector, var_23_float); // 0x4ab Func
	var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x4ad PushV
	var_25_float = 1.74533; // 0x4ae MovF
	func_1084(var_24_cvector, var_25_float); // 0x4af Call
	var_17_cvector = var_24_cvector; // 0x4b0 Mov
	var_18_float = var_17_cvector | var_17_cvector; // 0x4b2 Or2
	var_54_bool = 0; // 0x4b3 PushV
	var_54_bool = 0; // 0x4b4 MovB
	var_55_float = 10000.0; // 0x4b5 PushF
	var_56_bool = var_18_float >= var_55_float; // 0x4b6 GE
	if(var_56_bool == 0) goto Label_1222; // 0x4b7 JumpB
	var_57_bool = 0; // 0x4b8 PushV
	var_57_bool = 1; // 0x4b9 MovB
	var_58_float = var_16_float * var_16_float; // 0x4ba Mult
	var_59_float = 2.25; // 0x4bb PushF
	var_60_float = var_58_float * var_59_float; // 0x4bc Mult
	var_61_bool = var_18_float >= var_60_float; // 0x4bd GE
	if(var_61_bool == 0) goto Label_1220; // 0x4be JumpB
	var_62_bool = 0; // 0x4bf PushV
	func_1246(var_57_bool, var_62_bool); // 0x4c0 Call
	if(var_62_bool == 0) goto Label_1220; // 0x4c2 JumpB
	var_57_bool = 0; // 0x4c3 MovB
	
Label_1220:
	if(var_57_bool == 0) goto Label_1222; // 0x4c4 JumpB
	var_54_bool = 1; // 0x4c5 MovB
	
Label_1222:
	if(var_54_bool == 0) goto Label_1229; // 0x4c6 JumpB
	Stop(); // 0x4c7 Func
	var_82_cvector = CVector(0,0,0); // 0x4c9 PushV
	func_1262(var_82_cvector); // 0x4ca Call
	var_1_bool = var_82_cvector + var_17_cvector; // 0x4cc Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_1230(var_10_object); // 0x4d7 Call
	var_12_object = Obj(); // 0x4d9 PushV
	var_12_object = var_10_object; // 0x4da Mov
	func_1537(); // 0x4db Call
	return 0; // 0x4dd Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x5f4 PushV
	var_14_string = "health"; // 0x5f5 PushS
	var_15_bool = var_11_string == var_14_string; // 0x5f6 Eq
	if(var_15_bool == 0) goto Label_1536; // 0x5f7 JumpB
	var_16_string = "health"; // 0x5f8 PushS
	GetProperty(var_16_string, var_13_float); // 0x5f9 Func
	var_17_int = 0; // 0x5fb PushI
	var_18_bool = var_13_float <= var_17_int; // 0x5fc LE
	if(var_18_bool == 0) goto Label_1536; // 0x5fd JumpB
	SignalDeath(var_10_object); // 0x5fe Func
	
Label_1536:
	return 2; // 0x600 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x602 PushV
	var_11_object = var_10_object; // 0x603 Mov
	func_1516(var_11_object); // 0x604 Call
	return 0; // 0x606 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x608 PushV
	var_14_object = var_10_object; // 0x609 Mov
	var_15_int = var_11_int; // 0x60a Mov
	var_16_float = var_12_float; // 0x60b Mov
	func_1359(var_15_int, var_16_float); // 0x60c Call
	return 0; // 0x60e Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_10_bool); // 0x95 Func
	func_1727(); // 0x98 Call
	func_163(); // 0x9b Call
	
Label_157:
	var_2_bool = 0; // 0x9d TMovB
	func_376(var_8_cvector, var_9_bool); // 0x9f Call
	goto Label_157; // 0xa1 Jump
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_0(var_12_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_13_object = Obj(); // 0x2 PushV
	var_13_object = var_12_object; // 0x3 Mov
	func_33(var_13_object); // 0x4 Call
	var_63_object = Obj(); // 0x6 PushV
	var_63_object = var_12_object; // 0x7 Mov
	func_1788(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1282(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x502 PushV
	var_44_string = "HasProperty"; // 0x503 PushS
	var_45_int = 2; // 0x504 PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x505 FuncExist
	var_47_bool = var_46_bool == 0; // 0x506 Not
	if(var_47_bool == 0) goto Label_1290; // 0x507 JumpB
	var_39_bool = 0; // 0x508 MovB
	return 2; // 0x509 Return
	
Label_1290:
	HasProperty(var_41_string, var_43_bool); // 0x50a ObjFunc
	var_39_bool = var_43_bool; // 0x50c Mov
	return 2; // 0x50d Return
}


func_645(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0x285 PushV
	var_0_bool = var_62_object; // 0x286 TMov
	func_696(var_69_bool); // 0x288 Call
	GetDirection(var_67_cvector); // 0x28a Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0x28c PushV
	var_78_object = var_0_bool; // 0x28d MovT
	func_1267(var_78_object); // 0x28e Call
	var_68_cvector = var_77_cvector; // 0x28f Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x291 PushV
	var_84_cvector = var_67_cvector; // 0x292 Mov
	var_85_cvector = var_68_cvector; // 0x293 Mov
	func_1490(var_83_float, var_84_cvector, var_85_cvector); // 0x294 Call
	var_107_int = 0; // 0x296 PushI
	var_108_bool = var_83_float < var_107_int; // 0x297 LT
	if(var_108_bool == 0) goto Label_671; // 0x298 JumpB
	var_109_object = Obj(); // 0x299 PushV
	var_109_object = var_0_bool; // 0x29a MovT
	func_1426(); // 0x29b Call
	var_69_bool = 1; // 0x29d MovB
	goto Label_674; // 0x29e Jump
	
Label_674:
	var_118_bool = var_69_bool; // 0x2a2 Push
	if(var_118_bool == 0) goto Label_690; // 0x2a3 JumpB
	var_119_object = Obj(); // 0x2a4 PushV
	var_119_object = var_0_bool; // 0x2a5 MovT
	func_1426(); // 0x2a6 Call
	var_120_int = 111; // 0x2a8 PushI
	var_121_float = 0.5; // 0x2a9 PushF
	SetTimer(var_120_int, var_121_float); // 0x2aa Func
	var_122_float = 5.0; // 0x2ac PushF
	Sleep(var_122_float); // 0x2ad Func
	var_123_int = 111; // 0x2af PushI
	KillTimer(var_123_int); // 0x2b0 Func
	
Label_690:
	StopAsync(); // 0x2b2 Func
	var_124_string = "head"; // 0x2b4 PushS
	UnlookAsync(var_124_string); // 0x2b5 Func
	return 6; // 0x2b7 Return
	
Label_671:
	var_125_float = 1.5; // 0x29f PushF
	Sleep(var_125_float, var_69_bool); // 0x2a0 Func
}


func_906(var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x38a PushV
	GetPosition(var_32_cvector); // 0x38b Func
	GetPosition(var_33_cvector); // 0x38d TObjFunc
	GetDirection(var_34_cvector); // 0x38f Func
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x391 PushV
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x392 PushV
	var_41_cvector = var_32_cvector - var_33_cvector; // 0x393 Sub2
	func_1453(var_40_cvector, var_41_cvector); // 0x394 Call
	var_47_float = 0.75; // 0x396 PushF
	var_48_float = var_34_cvector * var_47_float; // 0x397 Mult
	var_39_cvector = var_40_cvector + var_48_float; // 0x398 Add2
	func_1453(var_38_cvector, var_39_cvector); // 0x399 Call
	var_35_cvector = var_38_cvector; // 0x39a Mov
	var_49_int = 32; // 0x39c PushI
	var_50_float = 7000.0; // 0x39d PushF
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, var_49_int, var_50_float); // 0x39e Func
	var_51_int = 100; // 0x3a0 PushI
	var_37_float = var_37_float - var_51_int; // 0x3a1 Sub2
	var_52_int = 0; // 0x3a2 PushI
	var_53_bool = var_37_float < var_52_int; // 0x3a3 LT
	if(var_53_bool == 0) goto Label_934; // 0x3a4 JumpB
	var_37_float = 0; // 0x3a5 MovI
	
Label_934:
	var_24_cvector = var_36_cvector * var_37_float; // 0x3a6 Mult2
	return 12; // 0x3a7 Return
}


func_1294(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x50e PushV
	IsDead(var_35_bool); // 0x50f ObjFunc
	var_32_bool = var_35_bool; // 0x511 Mov
	return 2; // 0x512 Return
}


func_1551(var_112_string, var_113_int)
{
	var_114_string = ""; var_115_string = ""; // 0x60f PushV
	var_115_string = "idle"; // 0x610 MovS
	var_116_int = var_113_int; // 0x611 Push
	if(var_116_int == 0) goto Label_1556; // 0x612 JumpB
	var_115_string = var_115_string + var_113_int; // 0x613 Add2
	
Label_1556:
	var_112_string = var_115_string; // 0x614 Mov
	return 2; // 0x615 Return
}


func_1678()
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; // 0x68e PushV
	var_17_int = 0; // 0x68f PushI
	ClearSubContainer(var_17_int); // 0x690 Func
	var_18_int = 0; var_19_int = 0; // 0x692 PushV
	var_18_int = 0; // 0x693 MovI
	var_20_int = 10; // 0x694 PushI
	var_21_int = 0; // 0x695 PushV
	func_1507(var_21_int); // 0x696 Call
	var_27_int = 10; // 0x698 PushI
	var_28_float = var_21_int * var_27_int; // 0x699 Mult
	var_19_int = var_20_int + var_28_float; // 0x69a Add2
	func_1648(var_18_int, var_19_int); // 0x69b Call
	var_47_int = 4; // 0x69d PushI
	irand(var_16_int, var_47_int); // 0x69e Func
	var_48_int = 0; // 0x6a0 PushI
	var_49_bool = var_16_int == var_48_int; // 0x6a1 Eq
	if(var_49_bool == 0) goto Label_1707; // 0x6a2 JumpB
	var_50_int = 0; var_51_string = ""; // 0x6a3 PushV
	var_51_string = "hook"; // 0x6a4 MovS
	func_1722(var_50_int, var_51_string); // 0x6a5 Call
	var_54_int = 0; // 0x6a7 PushI
	var_55_int = 1; // 0x6a8 PushI
	AddItem(var_15_bool, var_50_int, var_54_int, var_55_int); // 0x6a9 Func
	
Label_1707:
	var_56_int = 10; // 0x6ab PushI
	irand(var_16_int, var_56_int); // 0x6ac Func
	var_57_int = 0; // 0x6ae PushI
	var_58_bool = var_16_int == var_57_int; // 0x6af Eq
	if(var_58_bool == 0) goto Label_1721; // 0x6b0 JumpB
	var_59_int = 0; var_60_string = ""; // 0x6b1 PushV
	var_60_string = "watch"; // 0x6b2 MovS
	func_1722(var_59_int, var_60_string); // 0x6b3 Call
	var_61_int = 0; // 0x6b5 PushI
	var_62_int = 1; // 0x6b6 PushI
	AddItem(var_15_bool, var_59_int, var_61_int, var_62_int); // 0x6b7 Func
	
Label_1721:
	return 4; // 0x6b9 Return
}


func_1426()
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x592 PushV
	GetPosition(var_90_cvector); // 0x593 ObjFunc
	GetPosition(var_91_cvector); // 0x595 Func
	var_92_cvector = var_90_cvector - var_91_cvector; // 0x597 Sub2
	var_93_float = GetByIndex(var_92_cvector, 0); // 0x598 PushE
	var_94_float = GetByIndex(var_92_cvector, 2); // 0x599 PushE
	RotateAsync(var_93_float, var_94_float); // 0x59a Func
	return 6; // 0x59c Return
}


func_1299(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x513 PushV
	var_27_bool = var_22_object == 0; // 0x514 NullEq
	if(var_27_bool == 0) goto Label_1304; // 0x515 JumpB
	var_21_bool = 0; // 0x516 MovB
	return 4; // 0x517 Return
	
Label_1304:
	var_28_bool = 0; // 0x518 PushV
	var_28_bool = 0; // 0x519 MovB
	var_29_string = "IsDead"; // 0x51a PushS
	var_30_int = 1; // 0x51b PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x51c FuncExist
	if(var_31_bool == 0) goto Label_1316; // 0x51d JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x51e PushV
	var_33_object = var_22_object; // 0x51f Mov
	func_1294(var_33_object); // 0x520 Call
	if(var_32_bool == 0) goto Label_1316; // 0x522 JumpB
	var_28_bool = 1; // 0x523 MovB
	
Label_1316:
	if(var_28_bool == 0) goto Label_1319; // 0x524 JumpB
	var_21_bool = 0; // 0x525 MovB
	return 4; // 0x526 Return
	
Label_1319:
	GetScene(var_25_object); // 0x527 Func
	var_36_bool = var_25_object == 0; // 0x529 NullEq
	if(var_36_bool == 0) goto Label_1325; // 0x52a JumpB
	var_21_bool = 0; // 0x52b MovB
	return 4; // 0x52c Return
	
Label_1325:
	GetScene(var_26_object); // 0x52d ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x52f Neq
	if(var_37_bool == 0) goto Label_1331; // 0x530 JumpB
	var_21_bool = 0; // 0x531 MovB
	return 4; // 0x532 Return
	
Label_1331:
	var_21_bool = 1; // 0x533 MovB
	return 4; // 0x534 Return
}


func_1558(var_106_int)
{
	var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0; // 0x616 PushV
	var_109_int = 0; // 0x617 MovI
	
Label_1560:
	var_111_string = "all"; // 0x618 PushS
	var_112_string = ""; var_113_int = 0; // 0x619 PushV
	var_113_int = var_109_int; // 0x61a Mov
	func_1551(var_112_string, var_113_int); // 0x61b Call
	HasAnimation(var_110_bool, var_111_string, var_112_string); // 0x61d Func
	var_117_bool = var_110_bool == 0; // 0x61f Not
	if(var_117_bool == 0) goto Label_1570; // 0x620 JumpB
	goto Label_1573; // 0x621 Jump
	
Label_1573:
	var_106_int = var_109_int; // 0x625 Mov
	return 4; // 0x626 Return
	
Label_1570:
	var_118_int = 1; // 0x622 PushI
	var_109_int = var_109_int + var_118_int; // 0x623 Add2
	goto Label_1560; // 0x624 Jump
}


func_1052(var_2_bool)
{
	Stop(); // 0x41c Func
	var_11_int = 120; // 0x41e PushI
	KillTimer(var_11_int); // 0x41f Func
	var_2_bool = 1; // 0x421 TMovB
	return 0; // 0x422 Return
}


func_1437(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0; // 0x59d PushV
	IsLoaded(var_65_bool); // 0x59e Func
	var_63_bool = var_65_bool; // 0x5a0 Mov
	return 2; // 0x5a1 Return
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


func_1442(var_70_object)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_cvector = CVector(0,0,0); // 0x5a2 PushV
	GetEyesHeight(var_73_float); // 0x5a3 ObjFunc
	var_74_cvector = CVector(0.0, 0.0, 0.0); // 0x5a5 MovV
	var_75_float = GetByIndex(var_74_cvector, 1); // 0x5a6 PushE
	var_75_float = var_73_float; // 0x5a7 Mov
	SetByIndex(var_74_cvector, 1) = var_75_float; // 0x5a8 PopE
	var_76_string = "head"; // 0x5a9 PushS
	LookAsync(var_70_object, var_76_string, var_74_cvector); // 0x5aa Func
	return 4; // 0x5ac Return
}


func_163()
{
	var_63_bool = 0; // 0xa3 PushV
	func_1437(var_63_bool); // 0xa4 Call
	var_66_bool = var_63_bool == 0; // 0xa6 Not
	if(var_66_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1647(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_1575(var_53_int)
{
	var_55_bool = 0; // 0x628 PushV
	func_1746(var_55_bool); // 0x629 Call
	if(var_55_bool == 0) goto Label_1582; // 0x62b JumpB
	var_53_int = 2; // 0x62c MovI
	goto Label_1583; // 0x62d Jump
	
Label_1583:
	return 0; // 0x62f Return
	
Label_1582:
	var_53_int = 0; // 0x62e MovI
}


func_936(var_0_bool, var_1_bool, var_2_bool, var_66_object)
{
	var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; // 0x3a8 PushV
	var_0_bool = var_66_object; // 0x3a9 TMov
	var_77_cvector = CVector(0,0,0); var_78_float = 0; // 0x3aa PushV
	var_78_float = 1.74533; // 0x3ab MovF
	func_906(var_77_cvector, var_78_float); // 0x3ac Call
	var_72_cvector = var_77_cvector; // 0x3ad Mov
	var_73_float = var_72_cvector | var_72_cvector; // 0x3af Or2
	var_107_float = 10000.0; // 0x3b0 PushF
	var_108_bool = var_73_float < var_107_float; // 0x3b1 LT
	if(var_108_bool == 0) goto Label_956; // 0x3b2 JumpB
	var_109_string = "Can't retreat, distance: "; // 0x3b3 PushS
	var_110_float = sqrt(var_73_float); // 0x3b4 Sqrt
	var_111_int = var_109_string + var_110_float; // 0x3b5 Add
	Trace(var_111_int); // 0x3b6 Func
	var_112_float = 0.5; // 0x3b8 PushF
	Sleep(var_112_float); // 0x3b9 Func
	return 10; // 0x3bb Return
	
Label_956:
	var_113_float = GetByIndex(var_72_cvector, 0); // 0x3bc PushE
	var_114_float = GetByIndex(var_72_cvector, 2); // 0x3bd PushE
	Rotate(var_113_float, var_114_float); // 0x3be Func
	var_115_cvector = CVector(0,0,0); // 0x3c0 PushV
	func_1262(var_115_cvector); // 0x3c1 Call
	var_1_bool = var_115_cvector + var_72_cvector; // 0x3c3 Add2
	var_118_int = 120; // 0x3c4 PushI
	var_119_float = 0.5; // 0x3c5 PushF
	SetTimer(var_118_int, var_119_float); // 0x3c6 Func
	var_2_bool = 0; // 0x3c8 TMovB
	
Label_969:
	var_120_int = 1; // 0x3c9 PushI
	MovePoint(var_120_int, var_120_int, var_74_bool); // 0x3ca Func
	var_121_bool = var_74_bool; // 0x3cc Push
	if(var_121_bool == 0) goto Label_997; // 0x3cd JumpB
	var_122_bool = var_0_bool == 0; // 0x3ce NullEq
	if(var_122_bool == 0) goto Label_978; // 0x3cf JumpB
	goto Label_999; // 0x3d0 Jump
	
Label_999:
	return 10; // 0x3e7 Return
	
Label_978:
	var_123_cvector = CVector(0,0,0); var_124_float = 0; // 0x3d2 PushV
	var_124_float = 2.61799; // 0x3d3 MovF
	func_906(var_123_cvector, var_124_float); // 0x3d4 Call
	var_75_cvector = var_123_cvector; // 0x3d5 Mov
	var_76_float = var_75_cvector | var_75_cvector; // 0x3d7 Or2
	var_125_float = 10000.0; // 0x3d8 PushF
	var_126_bool = var_76_float >= var_125_float; // 0x3d9 GE
	if(var_126_bool == 0) goto Label_996; // 0x3da JumpB
	var_127_cvector = CVector(0,0,0); // 0x3db PushV
	func_1262(var_127_cvector); // 0x3dc Call
	var_1_bool = var_127_cvector + var_75_cvector; // 0x3de Add2
	var_128_int = 120; // 0x3df PushI
	var_129_float = 0.5; // 0x3e0 PushF
	SetTimer(var_128_int, var_129_float); // 0x3e1 Func
	goto Label_997; // 0x3e3 Jump
	
Label_997:
	var_130_bool = var_2_bool == 0; // 0x3e5 Not
	if(var_130_bool == 0) goto Label_969; // 0x3e6 JumpB
	
Label_996:
	goto Label_999; // 0x3e4 Jump
}


func_809()
{
	StopGroup0(); // 0x329 Func
	StopAsync(); // 0x32b Func
	var_10_string = "head"; // 0x32d PushS
	UnlookAsync(var_10_string); // 0x32e Func
	var_11_int = 111; // 0x330 PushI
	KillTimer(var_11_int); // 0x331 Func
	return 0; // 0x333 Return
}


func_1068(var_0_bool, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x42c PushV
	GetDirection(var_65_cvector); // 0x42d Func
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x42f PushV
	var_68_object = var_0_bool; // 0x430 MovT
	func_1267(var_68_object); // 0x431 Call
	var_66_cvector = var_67_cvector; // 0x432 Mov
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x434 PushV
	var_74_cvector = var_65_cvector; // 0x435 Mov
	var_75_cvector = var_66_cvector; // 0x436 Mov
	func_1463(var_73_float, var_74_cvector, var_75_cvector); // 0x437 Call
	var_81_float = -0.34202; // 0x439 PushF
	var_62_bool = var_73_float >= var_81_float; // 0x43a GE2
	return 4; // 0x43b Return
}


func_1453(var_40_cvector, var_41_cvector)
{
	var_42_float = 0; var_43_float = 0; // 0x5ad PushV
	var_44_int = var_41_cvector | var_41_cvector; // 0x5ae Or
	var_43_float = sqrt(var_44_int); // 0x5af Sqrt2
	var_45_float = 0.0; // 0x5b0 PushF
	var_46_bool = var_43_float < var_45_float; // 0x5b1 LT
	if(var_46_bool == 0) goto Label_1461; // 0x5b2 JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5b3 MovV
	return 2; // 0x5b4 Return
	
Label_1461:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x5b5 Div2
	return 2; // 0x5b6 Return
}


func_1584(var_61_object)
{
	var_62_object = Obj(); // 0x631 PushV
	var_62_object = var_61_object; // 0x632 Mov
	TaskCall(3); // 0x633 TaskCall
	func_645(var_63_object, var_62_object); // 0x634 Call
	TaskReturn(); // 0x635 TaskReturn
	return 0; // 0x637 Return
}


func_311(var_2_bool)
{
	var_11_int = 110; // 0x137 PushI
	KillTimer(var_11_int); // 0x138 Func
	var_2_bool = 0; // 0x13a TMovB
	func_440(var_9_cvector, var_10_bool); // 0x13c Call
	return 0; // 0x13e Return
}


func_1592(var_13_int, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x639 PushV
	var_16_object = var_14_object; // 0x63a Mov
	func_1335(var_15_bool, var_16_object); // 0x63b Call
	if(var_15_bool == 0) goto Label_1600; // 0x63d JumpB
	var_13_int = 2; // 0x63e MovI
	goto Label_1601; // 0x63f Jump
	
Label_1601:
	return 0; // 0x641 Return
	
Label_1600:
	var_13_int = 0; // 0x640 MovI
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1b8 TMovB
	var_1_bool = 0; // 0x1b9 TMovB
	Stop(); // 0x1ba Func
	StopGroup0(); // 0x1bc Func
	return 0; // 0x1be Return
}


func_1335(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x537 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x538 PushV
	var_22_object = var_18_object; // 0x539 Mov
	func_1299(var_21_bool, var_22_object); // 0x53a Call
	var_38_bool = var_21_bool == 0; // 0x53c Not
	if(var_38_bool == 0) goto Label_1344; // 0x53d JumpB
	var_17_bool = 0; // 0x53e MovB
	return 2; // 0x53f Return
	
Label_1344:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x540 PushV
	var_40_object = var_18_object; // 0x541 Mov
	var_41_string = "noaccess"; // 0x542 MovS
	func_1282(var_39_bool, var_40_object, var_41_string); // 0x543 Call
	var_48_bool = var_39_bool == 0; // 0x545 Not
	if(var_48_bool == 0) goto Label_1353; // 0x546 JumpB
	var_17_bool = 1; // 0x547 MovB
	return 2; // 0x548 Return
	
Label_1353:
	var_49_string = "noaccess"; // 0x549 PushS
	GetProperty(var_49_string, var_20_int); // 0x54a ObjFunc
	var_50_int = 0; // 0x54c PushI
	var_17_bool = var_20_int == var_50_int; // 0x54d Eq2
	return 2; // 0x54e Return
}


func_571()
{
	var_90_int = 0; var_91_int = 0; var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_float = 0; var_96_bool = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_bool = 0; var_102_float = 0; var_103_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_104_bool = 0; // 0x23e PushV
	func_1437(var_104_bool); // 0x23f Call
	var_105_bool = var_104_bool == 0; // 0x241 Not
	if(var_105_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_106_int = 0; // 0x244 PushV
	func_1558(var_106_int); // 0x245 Call
	var_97_int = var_106_int; // 0x246 Mov
	var_98_int = 0; // 0x248 MovI
	
Label_585:
	var_119_bool = 0; // 0x249 PushV
	var_119_bool = 0; // 0x24a MovB
	var_120_int = 5; // 0x24b PushI
	var_121_bool = var_98_int < var_120_int; // 0x24c LT
	if(var_121_bool == 0) goto Label_595; // 0x24d JumpB
	var_122_bool = 0; // 0x24e PushV
	func_1437(var_122_bool); // 0x24f Call
	if(var_122_bool == 0) goto Label_595; // 0x251 JumpB
	var_119_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_119_bool == 0) goto Label_639; // 0x253 JumpB
	var_123_int = 3; // 0x254 PushI
	irand(var_99_int, var_123_int); // 0x255 Func
	var_124_int = 0; // 0x257 PushI
	var_125_bool = var_99_int == var_124_int; // 0x258 Eq
	if(var_125_bool == 0) goto Label_619; // 0x259 JumpB
	var_126_int = var_97_int; // 0x25a Push
	if(var_126_int == 0) goto Label_618; // 0x25b JumpB
	irand(var_100_int, var_97_int); // 0x25c Func
	var_127_string = "all"; // 0x25e PushS
	var_128_string = ""; var_129_int = 0; // 0x25f PushV
	var_129_int = var_100_int; // 0x260 Mov
	func_1551(var_128_string, var_129_int); // 0x261 Call
	PlayAnimation(var_127_string, var_128_string); // 0x263 Func
	WaitForAnimEnd(var_101_bool); // 0x265 Func
	var_130_bool = var_101_bool == 0; // 0x267 Not
	if(var_130_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_639; // 0x269 Jump
	
Label_639:
	return 14; // 0x27f Return
	
Label_618:
	goto Label_636; // 0x26a Jump
	
Label_636:
	var_131_int = 1; // 0x27c PushI
	var_98_int = var_98_int + var_131_int; // 0x27d Add2
	goto Label_585; // 0x27e Jump
	
Label_619:
	var_132_int = 1; // 0x26b PushI
	var_133_bool = var_99_int == var_132_int; // 0x26c Eq
	if(var_133_bool == 0) goto Label_633; // 0x26d JumpB
	var_134_int = 4; // 0x26e PushI
	rand(var_102_float, var_134_int); // 0x26f Func
	var_135_int = 1; // 0x271 PushI
	var_136_int = var_102_float + var_135_int; // 0x272 Add
	Sleep(var_136_int, var_103_bool); // 0x273 Func
	var_137_bool = var_103_bool == 0; // 0x275 Not
	if(var_137_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_639; // 0x277 Jump
	
Label_632:
	goto Label_636; // 0x278 Jump
	
Label_633:
	var_138_int = var_98_int; // 0x279 Push
	if(var_138_int == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
}


func_696(var_0_bool)
{
	var_70_object = Obj(); // 0x2b8 PushV
	var_70_object = var_0_bool; // 0x2b9 MovT
	func_1442(var_70_object); // 0x2ba Call
	return 0; // 0x2bc Return
}


func_1463(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector; // 0x5b8 Or
	var_77_int = var_74_cvector | var_74_cvector; // 0x5b9 Or
	var_78_int = var_75_cvector | var_75_cvector; // 0x5ba Or
	var_79_float = var_77_int * var_78_int; // 0x5bb Mult
	var_80_float = sqrt(var_79_float); // 0x5bc Sqrt
	var_73_float = var_76_int / var_76_int; // 0x5bd Div2
	return 0; // 0x5be Return
}


func_1084(var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x43c PushV
	GetPosition(var_32_cvector); // 0x43d Func
	GetPosition(var_33_cvector); // 0x43f TObjFunc
	GetDirection(var_34_cvector); // 0x441 Func
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x443 PushV
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x444 PushV
	var_41_cvector = var_32_cvector - var_33_cvector; // 0x445 Sub2
	func_1453(var_40_cvector, var_41_cvector); // 0x446 Call
	var_47_float = 0.75; // 0x448 PushF
	var_48_float = var_34_cvector * var_47_float; // 0x449 Mult
	var_39_cvector = var_40_cvector + var_48_float; // 0x44a Add2
	func_1453(var_38_cvector, var_39_cvector); // 0x44b Call
	var_35_cvector = var_38_cvector; // 0x44c Mov
	var_49_int = 32; // 0x44e PushI
	var_50_float = 7000.0; // 0x44f PushF
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, var_49_int, var_50_float); // 0x450 Func
	var_51_int = 100; // 0x452 PushI
	var_37_float = var_37_float - var_51_int; // 0x453 Sub2
	var_52_int = 0; // 0x454 PushI
	var_53_bool = var_37_float < var_52_int; // 0x455 LT
	if(var_53_bool == 0) goto Label_1112; // 0x456 JumpB
	var_37_float = 0; // 0x457 MovI
	
Label_1112:
	var_24_cvector = var_36_cvector * var_37_float; // 0x458 Mult2
	return 12; // 0x459 Return
}


func_1727()
{
	var_11_bool = GlobalVars[0]; // 0x6bf PushGE
	var_11_bool = 0; // 0x6c0 MovB
	GlobalVars[0] = var_11_bool; // 0x6c1 PopGE
	var_12_bool = 0; // 0x6c2 PushV
	var_12_bool = 0; // 0x6c3 MovB
	func_1678(); // 0x6c4 Call
	return 0; // 0x6c6 Return
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
	func_447(var_14_bool, var_15_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_1602(var_55_object)
{
	var_56_object = Obj(); // 0x643 PushV
	var_56_object = var_55_object; // 0x644 Mov
	TaskCall(4); // 0x645 TaskCall
	func_871(var_56_object); // 0x646 Call
	TaskReturn(); // 0x647 TaskReturn
	return 0; // 0x649 Return
}


func_1471(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = GetByIndex(var_64_cvector, 0); // 0x5c0 PushE
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x5c1 PushE
	var_68_float = var_66_float * var_67_float; // 0x5c2 Mult
	var_69_float = GetByIndex(var_64_cvector, 2); // 0x5c3 PushE
	var_70_float = GetByIndex(var_65_cvector, 2); // 0x5c4 PushE
	var_71_float = var_69_float * var_70_float; // 0x5c5 Mult
	var_63_float = var_68_float + var_71_float; // 0x5c6 Add2
	return 0; // 0x5c7 Return
}


func_454(var_88_bool)
{
	var_88_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_1735(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x6c7 PushV
	var_25_bool = GlobalVars[0]; // 0x6c8 PushGE
	if(var_25_bool == 0) goto Label_1745; // 0x6c9 JumpB
	IsOverrideActive(var_24_bool); // 0x6ca Func
	var_26_bool = var_24_bool == 0; // 0x6cc Not
	if(var_26_bool == 0) goto Label_1744; // 0x6cd JumpB
	WorkWithCorpse(var_22_object); // 0x6ce Func
	
Label_1744:
	return 2; // 0x6d0 Return
	
Label_1745:
	return 2; // 0x6d1 Return
}


func_1480(var_72_float, var_73_cvector)
{
	var_74_float = GetByIndex(var_73_cvector, 0); // 0x5c9 PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x5ca PushE
	var_76_float = var_74_float * var_75_float; // 0x5cb Mult
	var_77_float = GetByIndex(var_73_cvector, 2); // 0x5cc PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x5cd PushE
	var_79_float = var_77_float * var_78_float; // 0x5ce Mult
	var_80_int = var_76_float + var_79_float; // 0x5cf Add
	var_72_float = sqrt(var_80_int); // 0x5d0 Sqrt2
	return 0; // 0x5d1 Return
}


func_1610(var_47_int, var_48_object)
{
	var_49_bool = 0; var_50_object = Obj(); // 0x64b PushV
	var_50_object = var_48_object; // 0x64c Mov
	func_1335(var_49_bool, var_50_object); // 0x64d Call
	if(var_49_bool == 0) goto Label_1618; // 0x64f JumpB
	var_47_int = 2; // 0x650 MovI
	goto Label_1619; // 0x651 Jump
	
Label_1619:
	return 0; // 0x653 Return
	
Label_1618:
	var_47_int = 0; // 0x652 MovI
}


func_1230(var_2_bool)
{
	Stop(); // 0x4ce Func
	var_11_int = 120; // 0x4d0 PushI
	KillTimer(var_11_int); // 0x4d1 Func
	var_2_bool = 1; // 0x4d3 TMovB
	return 0; // 0x4d4 Return
}


func_1359(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; // 0x54f PushV
	var_37_bool = 0; // 0x550 PushV
	var_37_bool = 0; // 0x551 MovB
	var_38_int = 4; // 0x552 PushI
	var_39_bool = var_15_int != var_38_int; // 0x553 Neq
	if(var_39_bool == 0) goto Label_1369; // 0x554 JumpB
	var_40_int = 5; // 0x555 PushI
	var_41_bool = var_15_int != var_40_int; // 0x556 Neq
	if(var_41_bool == 0) goto Label_1369; // 0x557 JumpB
	var_37_bool = 1; // 0x558 MovB
	
Label_1369:
	if(var_37_bool == 0) goto Label_1388; // 0x559 JumpB
	GetScene(var_27_object); // 0x55a Func
	GetPosition(var_29_cvector); // 0x55c Func
	GetEyesHeight(var_30_float); // 0x55e Func
	var_42_float = GetByIndex(var_29_cvector, 1); // 0x560 PushE
	var_43_int = 2; // 0x561 PushI
	var_44_float = var_30_float / var_43_int; // 0x562 Div
	var_42_float = var_42_float + var_44_float; // 0x563 Add2
	SetByIndex(var_29_cvector, 1) = var_42_float; // 0x564 PopE
	var_45_string = "scripted"; // 0x565 PushS
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x566 PushVec
	var_47_string = "blood.xml"; // 0x567 PushS
	AddActorByType(var_28_object, var_45_string, var_27_object, var_29_cvector, var_46_cvector, var_47_string); // 0x568 Func
	var_28_object = 0; // 0x56a SetNull
	var_27_object = 0; // 0x56b SetNull
	
Label_1388:
	var_48_bool = var_14_object == 0; // 0x56c NullEq
	if(var_48_bool == 0) goto Label_1391; // 0x56d JumpB
	return 20; // 0x56e Return
	
Label_1391:
	GetSecondaryAnimationType(var_31_int); // 0x56f Func
	var_49_int = 0; // 0x571 PushI
	var_50_bool = var_31_int < var_49_int; // 0x572 LT
	if(var_50_bool == 0) goto Label_1397; // 0x573 JumpB
	return 20; // 0x574 Return
	
Label_1397:
	GetPosition(var_32_cvector); // 0x575 ObjFunc
	GetPosition(var_33_cvector); // 0x577 Func
	GetDirection(var_34_cvector); // 0x579 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x57b Sub2
	var_51_float = GetByIndex(var_35_cvector, 0); // 0x57c PushE
	var_52_float = GetByIndex(var_34_cvector, 0); // 0x57d PushE
	var_53_float = var_51_float * var_52_float; // 0x57e Mult
	var_54_float = GetByIndex(var_35_cvector, 2); // 0x57f PushE
	var_55_float = GetByIndex(var_34_cvector, 2); // 0x580 PushE
	var_56_float = var_54_float * var_55_float; // 0x581 Mult
	var_57_int = var_53_float + var_56_float; // 0x582 Add
	var_58_int = 0; // 0x583 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x584 GE
	if(var_59_bool == 0) goto Label_1416; // 0x585 JumpB
	var_36_string = "fhit"; // 0x586 MovS
	goto Label_1417; // 0x587 Jump
	
Label_1417:
	var_60_string = "hit_react"; // 0x589 PushS
	var_61_string = "1"; // 0x58a PushS
	var_62_int = var_36_string + var_61_string; // 0x58b Add
	var_63_string = "2"; // 0x58c PushS
	var_64_int = var_36_string + var_63_string; // 0x58d Add
	var_65_int = -10; // 0x58e PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x58f Func
	return 20; // 0x591 Return
	
Label_1416:
	var_36_string = "bhit"; // 0x588 MovS
}


func_336(var_2_bool, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_int = 0; // 0x150 PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x151 PushV
	var_17_object = var_11_object; // 0x152 Mov
	func_1335(var_16_bool, var_17_object); // 0x153 Call
	var_50_bool = var_16_bool == 0; // 0x155 Not
	if(var_50_bool == 0) goto Label_344; // 0x156 JumpB
	return 4; // 0x157 Return
	
Label_344:
	var_51_bool = var_2_bool; // 0x158 PushT
	if(var_51_bool == 0) goto Label_347; // 0x159 JumpB
	return 4; // 0x15a Return
	
Label_347:
	IsPlayerActor(var_11_object, var_14_bool); // 0x15b Func
	var_52_bool = var_14_bool == 0; // 0x15d Not
	if(var_52_bool == 0) goto Label_352; // 0x15e JumpB
	return 4; // 0x15f Return
	
Label_352:
	var_53_int = 0; var_54_object = Obj(); // 0x160 PushV
	var_54_object = var_11_object; // 0x161 Mov
	func_1575(var_54_object); // 0x162 Call
	var_15_int = var_53_int; // 0x163 Mov
	var_56_int = 0; // 0x165 PushI
	var_57_bool = var_15_int > var_56_int; // 0x166 GT
	if(var_57_bool == 0) goto Label_375; // 0x167 JumpB
	var_58_int = 1; // 0x168 PushI
	var_59_bool = var_15_int > var_58_int; // 0x169 GT
	if(var_59_bool == 0) goto Label_366; // 0x16a JumpB
	func_319(var_15_int); // 0x16c Call
	
Label_366:
	var_61_object = Obj(); // 0x16e PushV
	var_61_object = var_11_object; // 0x16f Mov
	func_1584(var_61_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_126_int = 110; // 0x173 PushI
	var_127_float = 10.0; // 0x174 PushF
	SetTimer(var_126_int, var_127_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_1490(var_60_float, var_61_cvector, var_62_cvector)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x5d3 PushV
	var_64_cvector = var_61_cvector; // 0x5d4 Mov
	var_65_cvector = var_62_cvector; // 0x5d5 Mov
	func_1471(var_63_float, var_64_cvector, var_65_cvector); // 0x5d6 Call
	var_72_float = 0; var_73_cvector = CVector(0,0,0); // 0x5d8 PushV
	var_73_cvector = var_61_cvector; // 0x5d9 Mov
	func_1480(var_72_float, var_73_cvector); // 0x5da Call
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x5dc PushV
	var_82_cvector = var_62_cvector; // 0x5dd Mov
	func_1480(var_81_float, var_82_cvector); // 0x5de Call
	var_83_float = var_72_float * var_81_float; // 0x5e0 Mult
	var_60_float = var_63_float / var_63_float; // 0x5e1 Div2
	return 0; // 0x5e2 Return
}


func_1746(var_55_bool)
{
	var_55_bool = 1; // 0x6d2 MovB
	return 0; // 0x6d3 Return
}


func_1748(var_14_bool, var_15_object, var_16_object)
{
	var_17_string = ""; var_18_bool = 0; var_19_string = ""; var_20_bool = 0; // 0x6d4 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x6d5 PushV
	var_22_object = var_16_object; // 0x6d6 Mov
	var_23_string = "class"; // 0x6d7 MovS
	func_1282(var_21_bool, var_22_object, var_23_string); // 0x6d8 Call
	var_30_bool = var_21_bool == 0; // 0x6da Not
	if(var_30_bool == 0) goto Label_1758; // 0x6db JumpB
	var_14_bool = 0; // 0x6dc MovB
	return 4; // 0x6dd Return
	
Label_1758:
	var_31_string = "class"; // 0x6de PushS
	GetProperty(var_31_string, var_19_string); // 0x6df ObjFunc
	var_32_string = "rat"; // 0x6e1 PushS
	var_33_bool = var_19_string == var_32_string; // 0x6e2 Eq
	if(var_33_bool == 0) goto Label_1766; // 0x6e3 JumpB
	var_14_bool = 0; // 0x6e4 MovB
	return 4; // 0x6e5 Return
	
Label_1766:
	CanSee(var_20_bool, var_15_object); // 0x6e6 Func
	var_34_bool = 0; // 0x6e8 PushV
	var_34_bool = 1; // 0x6e9 MovB
	var_35_bool = var_20_bool; // 0x6ea Push
	if(var_35_bool == 0) goto Label_1780; // 0x6eb JumpB
	var_36_float = 0; var_37_object = Obj(); // 0x6ec PushV
	var_37_object = var_15_object; // 0x6ed Mov
	func_1274(var_37_object); // 0x6ee Call
	var_44_float = 250000.0; // 0x6f0 PushF
	var_45_bool = var_36_float <= var_44_float; // 0x6f1 LE
	if(var_45_bool == 0) goto Label_1780; // 0x6f2 JumpB
	var_34_bool = 0; // 0x6f3 MovB
	
Label_1780:
	if(var_34_bool == 0) goto Label_1786; // 0x6f4 JumpB
	var_46_float = -0.3; // 0x6f5 PushF
	ReportReputationChange(var_15_object, var_16_object, var_46_float); // 0x6f6 Func
	var_14_bool = 1; // 0x6f8 MovB
	return 4; // 0x6f9 Return
	
Label_1786:
	var_14_bool = 0; // 0x6fa MovB
	return 4; // 0x6fb Return
}


func_1620(var_83_object)
{
	var_84_object = Obj(); // 0x655 PushV
	var_84_object = var_83_object; // 0x656 Mov
	TaskCall(5); // 0x657 TaskCall
	func_1114(var_85_object, var_86_cvector, var_87_bool, var_84_object); // 0x658 Call
	TaskReturn(); // 0x659 TaskReturn
	return 0; // 0x65b Return
}


func_1722(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0; // 0x6ba PushV
	GetInvItemByName(var_53_int, var_51_string); // 0x6bb Func
	var_50_int = var_53_int; // 0x6bd Mov
	return 2; // 0x6be Return
}


func_1114(var_0_bool, var_1_bool, var_2_bool, var_84_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; // 0x45a PushV
	var_0_bool = var_84_object; // 0x45b TMov
	var_98_cvector = CVector(0,0,0); var_99_float = 0; // 0x45c PushV
	var_99_float = 1.74533; // 0x45d MovF
	func_1084(var_98_cvector, var_99_float); // 0x45e Call
	var_93_cvector = var_98_cvector; // 0x45f Mov
	var_94_float = var_93_cvector | var_93_cvector; // 0x461 Or2
	var_128_float = 10000.0; // 0x462 PushF
	var_129_bool = var_94_float < var_128_float; // 0x463 LT
	if(var_129_bool == 0) goto Label_1134; // 0x464 JumpB
	var_130_string = "Can't retreat, distance: "; // 0x465 PushS
	var_131_float = sqrt(var_94_float); // 0x466 Sqrt
	var_132_int = var_130_string + var_131_float; // 0x467 Add
	Trace(var_132_int); // 0x468 Func
	var_133_float = 0.5; // 0x46a PushF
	Sleep(var_133_float); // 0x46b Func
	return 10; // 0x46d Return
	
Label_1134:
	var_134_float = GetByIndex(var_93_cvector, 0); // 0x46e PushE
	var_135_float = GetByIndex(var_93_cvector, 2); // 0x46f PushE
	Rotate(var_134_float, var_135_float); // 0x470 Func
	var_136_cvector = CVector(0,0,0); // 0x472 PushV
	func_1262(var_136_cvector); // 0x473 Call
	var_1_bool = var_136_cvector + var_93_cvector; // 0x475 Add2
	var_139_int = 120; // 0x476 PushI
	var_140_float = 0.5; // 0x477 PushF
	SetTimer(var_139_int, var_140_float); // 0x478 Func
	var_2_bool = 0; // 0x47a TMovB
	
Label_1147:
	var_141_int = 1; // 0x47b PushI
	MovePoint(var_141_int, var_141_int, var_95_bool); // 0x47c Func
	var_142_bool = var_95_bool; // 0x47e Push
	if(var_142_bool == 0) goto Label_1175; // 0x47f JumpB
	var_143_bool = var_0_bool == 0; // 0x480 NullEq
	if(var_143_bool == 0) goto Label_1156; // 0x481 JumpB
	goto Label_1177; // 0x482 Jump
	
Label_1177:
	return 10; // 0x499 Return
	
Label_1156:
	var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x484 PushV
	var_145_float = 2.61799; // 0x485 MovF
	func_1084(var_144_cvector, var_145_float); // 0x486 Call
	var_96_cvector = var_144_cvector; // 0x487 Mov
	var_97_float = var_96_cvector | var_96_cvector; // 0x489 Or2
	var_146_float = 10000.0; // 0x48a PushF
	var_147_bool = var_97_float >= var_146_float; // 0x48b GE
	if(var_147_bool == 0) goto Label_1174; // 0x48c JumpB
	var_148_cvector = CVector(0,0,0); // 0x48d PushV
	func_1262(var_148_cvector); // 0x48e Call
	var_1_bool = var_148_cvector + var_96_cvector; // 0x490 Add2
	var_149_int = 120; // 0x491 PushI
	var_150_float = 0.5; // 0x492 PushF
	SetTimer(var_149_int, var_150_float); // 0x493 Func
	goto Label_1175; // 0x495 Jump
	
Label_1175:
	var_151_bool = var_2_bool == 0; // 0x497 Not
	if(var_151_bool == 0) goto Label_1147; // 0x498 JumpB
	
Label_1174:
	goto Label_1177; // 0x496 Jump
}


func_1628(var_13_int)
{
	var_13_int = 0; // 0x65d MovI
	return 0; // 0x65e Return
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


func_1246(var_0_bool, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x4de PushV
	GetDirection(var_65_cvector); // 0x4df Func
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x4e1 PushV
	var_68_object = var_0_bool; // 0x4e2 MovT
	func_1267(var_68_object); // 0x4e3 Call
	var_66_cvector = var_67_cvector; // 0x4e4 Mov
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x4e6 PushV
	var_74_cvector = var_65_cvector; // 0x4e7 Mov
	var_75_cvector = var_66_cvector; // 0x4e8 Mov
	func_1463(var_73_float, var_74_cvector, var_75_cvector); // 0x4e9 Call
	var_81_float = -0.34202; // 0x4eb PushF
	var_62_bool = var_73_float >= var_81_float; // 0x4ec GE2
	return 4; // 0x4ed Return
}


func_1631()
{
	return 0; // 0x660 Return
}


func_1633(var_14_int)
{
	var_14_int = 0; // 0x662 MovI
	return 0; // 0x663 Return
}


func_1507(var_21_int)
{
	var_22_float = 0; var_23_float = 0; // 0x5e3 PushV
	GetGameTime(var_23_float); // 0x5e4 Func
	var_24_int = 1; // 0x5e6 PushI
	var_25_int = 0; // 0x5e7 PushV
	var_26_int = 24; // 0x5e8 PushI
	var_25_int = var_23_float / var_23_float; // 0x5e9 Div2
	var_21_int = var_24_int + var_25_int; // 0x5ea Add2
	return 2; // 0x5eb Return
}


func_1636()
{
	return 0; // 0x665 Return
}


func_1638(var_13_int)
{
	var_13_int = 2; // 0x667 MovI
	return 0; // 0x668 Return
}


func_871(var_56_object)
{
	Face(var_56_object); // 0x368 Func
	var_60_string = "all"; // 0x36a PushS
	var_61_string = "attack_on"; // 0x36b PushS
	PlayAnimation(var_60_string, var_61_string); // 0x36c Func
	WaitForAnimEnd(); // 0x36e Func
	var_62_string = "all"; // 0x370 PushS
	var_63_string = "attack_stay"; // 0x371 PushS
	PlayAnimation(var_62_string, var_63_string); // 0x372 Func
	WaitForAnimEnd(); // 0x374 Func
	var_64_string = "all"; // 0x376 PushS
	var_65_string = "attack_off"; // 0x377 PushS
	PlayAnimation(var_64_string, var_65_string); // 0x378 Func
	WaitForAnimEnd(); // 0x37a Func
	StopAsync(); // 0x37c Func
	var_66_object = Obj(); // 0x37e PushV
	var_66_object = var_56_object; // 0x37f Mov
	func_936(var_58_cvector, var_59_bool, var_56_object, var_66_object); // 0x380 Call
	return 0; // 0x382 Return
}


func_1641(var_21_object)
{
	var_22_object = Obj(); // 0x66a PushV
	var_22_object = var_21_object; // 0x66b Mov
	func_1735(var_22_object); // 0x66c Call
	return 0; // 0x66e Return
}


func_1516(var_11_object)
{
	var_12_object = Obj(); // 0x5ed PushV
	var_12_object = var_11_object; // 0x5ee Mov
	TaskCall(0); // 0x5ef TaskCall
	func_0(var_12_object); // 0x5f0 Call
	TaskReturn(); // 0x5f1 TaskReturn
	return 0; // 0x5f3 Return
}


func_1262(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x4ee PushV
	GetPosition(var_84_cvector); // 0x4ef Func
	var_82_cvector = var_84_cvector; // 0x4f1 Mov
	return 2; // 0x4f2 Return
}


func_1647()
{
	return 0; // 0x66f Return
}


func_1648(var_18_int, var_19_int)
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x670 PushV
	var_37_bool = var_18_int > var_19_int; // 0x671 GT
	if(var_37_bool == 0) goto Label_1655; // 0x672 JumpB
	var_38_string = "GenerateMoney: iMin > iMax"; // 0x673 PushS
	Trace(var_38_string); // 0x674 Func
	return 8; // 0x676 Return
	
Label_1655:
	var_33_int = 0; // 0x677 MovI
	var_39_bool = var_18_int != var_19_int; // 0x678 Neq
	if(var_39_bool == 0) goto Label_1662; // 0x679 JumpB
	var_40_int = var_19_int - var_18_int; // 0x67a Sub
	irand(var_34_int, var_40_int); // 0x67b Func
	goto Label_1666; // 0x67d Jump
	
Label_1666:
	var_33_int = var_33_int + var_18_int; // 0x682 Add2
	var_41_int = 0; // 0x683 PushI
	var_42_bool = var_33_int == var_41_int; // 0x684 Eq
	if(var_42_bool == 0) goto Label_1671; // 0x685 JumpB
	return 8; // 0x686 Return
	
Label_1671:
	var_43_string = "Money"; // 0x687 PushS
	GetInvItemByName(var_35_int, var_43_string); // 0x688 Func
	var_44_int = 0; // 0x68a PushI
	AddItem(var_36_bool, var_35_int, var_44_int, var_33_int); // 0x68b Func
	return 8; // 0x68d Return
	
Label_1662:
	var_45_int = 0; // 0x67e PushI
	var_46_bool = var_18_int == var_45_int; // 0x67f Eq
	if(var_46_bool == 0) goto Label_1666; // 0x680 JumpB
	return 8; // 0x681 Return
}


func_1267(var_67_cvector)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x4f3 PushV
	GetPosition(var_71_cvector); // 0x4f4 Func
	GetPosition(var_72_cvector); // 0x4f6 ObjFunc
	var_67_cvector = var_72_cvector - var_71_cvector; // 0x4f8 Sub2
	return 4; // 0x4f9 Return
}


func_376(var_0_bool, var_1_bool)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_bool = 0; var_72_object = Obj(); var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; // 0x178 PushV
	var_0_bool = 0; // 0x179 TMovB
	var_1_bool = 0; // 0x17a TMovB
	var_81_float = 0.5; // 0x17b PushF
	rand(var_74_float, var_81_float); // 0x17c Func
	Sleep(var_74_float); // 0x17e Func
	
Label_384:
	var_82_bool = var_0_bool == 0; // 0x180 Not
	if(var_82_bool == 0) goto Label_432; // 0x181 JumpB
	var_83_bool = var_1_bool == 0; // 0x182 Not
	if(var_83_bool == 0) goto Label_404; // 0x183 JumpB
	
Label_388:
	GetPosition(var_76_cvector); // 0x184 Func
	GetCameraFarDistance(var_77_float); // 0x186 Func
	var_84_float = 2.5; // 0x188 PushF
	var_77_float = var_77_float * var_84_float; // 0x189 Mult2
	GetRandomPFPointInCircle(var_75_cvector, var_76_cvector, var_77_float, var_78_bool); // 0x18a Func
	var_85_bool = var_78_bool; // 0x18c Push
	if(var_85_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_403; // 0x18e Jump
	
Label_403:
	goto Label_405; // 0x193 Jump
	
Label_405:
	FindShiftedPathTo(var_79_object, var_75_cvector); // 0x195 Func
	var_86_bool = var_79_object != 0; // 0x197 NullNeq
	if(var_86_bool == 0) goto Label_427; // 0x198 JumpB
	RotatePath(var_79_object, var_80_bool); // 0x199 Func
	var_87_bool = var_80_bool; // 0x19b Push
	if(var_87_bool == 0) goto Label_426; // 0x19c JumpB
	var_88_bool = 0; // 0x19d PushV
	func_454(var_88_bool); // 0x19e Call
	FollowPath(var_79_object, var_88_bool, var_80_bool); // 0x1a0 Func
	var_79_object = 0; // 0x1a2 SetNull
	var_89_bool = var_80_bool; // 0x1a3 Push
	if(var_89_bool == 0) goto Label_426; // 0x1a4 JumpB
	TaskCall(2); // 0x1a6 TaskCall
	func_571(); // 0x1a7 Call
	TaskReturn(); // 0x1a8 TaskReturn
	
Label_426:
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_79_object = 0; // 0x1ae SetNull
	goto Label_384; // 0x1af Jump
	
Label_427:
	var_139_int = 1; // 0x1ab PushI
	Sleep(var_139_int); // 0x1ac Func
	
Label_399:
	var_140_int = 1; // 0x18f PushI
	Sleep(var_140_int); // 0x190 Func
	goto Label_388; // 0x192 Jump
	
Label_404:
	var_1_bool = 0; // 0x194 TMovB
	
Label_432:
	return 14; // 0x1b0 Return
}


func_1274(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x4fa PushV
	GetPosition(var_41_cvector); // 0x4fb Func
	GetPosition(var_42_cvector); // 0x4fd ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x4ff Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x500 Or2
	return 6; // 0x501 Return
}


func_1788()
{
	var_64_bool = GlobalVars[0]; // 0x6fd PushGE
	var_64_bool = 1; // 0x6fe MovB
	GlobalVars[0] = var_64_bool; // 0x6ff PopGE
	var_65_int = 50; // 0x700 PushI
	var_66_int = 40; // 0x701 PushI
	SetRTEnvelope(var_65_int, var_66_int); // 0x702 Func
	return 0; // 0x704 Return
}


