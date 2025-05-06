task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_bool; // 0x11 Mov
	func_1734(var_15_object); // 0x12 Call
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_bool; // 0x19 Mov
	func_1737(var_18_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_1743(); // 0x1e Call
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
	func_1734(var_15_object); // 0xaf Call
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
	func_1737(var_21_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xc0 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xc1 PushV
	var_15_object = var_11_bool; // 0xc2 Mov
	func_1688(var_14_int, var_15_object); // 0xc3 Call
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
	func_1698(var_55_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0xd4 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0xd5 PushV
	var_16_object = var_11_cvector; // 0xd6 Mov
	var_17_object = var_12_bool; // 0xd7 Mov
	func_1852(var_15_bool, var_16_object, var_17_object); // 0xd8 Call
	if(var_15_bool == 0) goto Label_237; // 0xda JumpB
	var_48_int = 0; var_49_object = Obj(); // 0xdb PushV
	var_49_object = var_11_cvector; // 0xdc Mov
	func_1706(var_48_int, var_49_object); // 0xdd Call
	var_14_int = var_48_int; // 0xde Mov
	var_78_int = 0; // 0xe0 PushI
	var_79_bool = var_14_int > var_78_int; // 0xe1 GT
	if(var_79_bool == 0) goto Label_237; // 0xe2 JumpB
	var_80_int = 1; // 0xe3 PushI
	var_81_bool = var_14_int > var_80_int; // 0xe4 GT
	if(var_81_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_14_int); // 0xe7 Call
	
Label_233:
	var_83_object = Obj(); // 0xe9 PushV
	var_83_object = var_11_cvector; // 0xea Mov
	func_1716(var_83_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xee PushV
	var_14_int = 0; var_15_object = Obj(); // 0xef PushV
	var_15_object = var_11_bool; // 0xf0 Mov
	func_1724(var_15_object); // 0xf1 Call
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
	func_1727(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x102 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x103 PushV
	var_16_string = var_12_bool; // 0x104 Mov
	var_17_object = var_11_cvector; // 0x105 Mov
	func_1729(var_17_object); // 0x106 Call
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
	func_1732(); // 0x115 Call
	
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
	func_1743(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_311(var_11_bool); // 0x149 Call
	var_13_object = Obj(); // 0x14b PushV
	var_13_object = var_11_bool; // 0x14c Mov
	func_1639(); // 0x14d Call
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
	func_1734(var_15_object); // 0x1cb Call
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
	func_1737(var_20_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x1dc PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1dd PushV
	var_15_object = var_11_bool; // 0x1de Mov
	func_1688(var_14_int, var_15_object); // 0x1df Call
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
	func_1698(var_54_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x1f0 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x1f1 PushV
	var_16_object = var_11_cvector; // 0x1f2 Mov
	var_17_object = var_12_bool; // 0x1f3 Mov
	func_1852(var_15_bool, var_16_object, var_17_object); // 0x1f4 Call
	if(var_15_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_48_int = 0; var_49_object = Obj(); // 0x1f7 PushV
	var_49_object = var_11_cvector; // 0x1f8 Mov
	func_1706(var_48_int, var_49_object); // 0x1f9 Call
	var_14_int = var_48_int; // 0x1fa Mov
	var_78_int = 0; // 0x1fc PushI
	var_79_bool = var_14_int > var_78_int; // 0x1fd GT
	if(var_79_bool == 0) goto Label_521; // 0x1fe JumpB
	var_80_int = 1; // 0x1ff PushI
	var_81_bool = var_14_int > var_80_int; // 0x200 GT
	if(var_81_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_82_object = Obj(); // 0x205 PushV
	var_82_object = var_11_cvector; // 0x206 Mov
	func_1716(var_82_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x20a PushV
	var_14_int = 0; var_15_object = Obj(); // 0x20b PushV
	var_15_object = var_11_bool; // 0x20c Mov
	func_1724(var_15_object); // 0x20d Call
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
	func_1727(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; // 0x21e PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x21f PushV
	var_16_string = var_12_bool; // 0x220 Mov
	var_17_object = var_11_cvector; // 0x221 Mov
	func_1729(var_17_object); // 0x222 Call
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
	func_1732(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_640(); // 0x235 Call
	func_1743(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x290 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x291 PushV
	var_15_object = var_11_bool; // 0x292 Mov
	func_1847(var_15_object); // 0x293 Call
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
	func_1850(); // 0x2a1 Call
	
Label_675:
	return 2; // 0x2a3 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_732(); // 0x2a5 Call
	func_1743(); // 0x2a8 Call
	return 0; // 0x2aa Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_732(); // 0x2e3 Call
	var_12_object = Obj(); // 0x2e5 PushV
	var_12_object = var_11_bool; // 0x2e6 Mov
	func_1639(); // 0x2e7 Call
	return 0; // 0x2e9 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x2ea PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2eb PushV
	var_15_object = var_11_bool; // 0x2ec Mov
	func_1847(var_15_object); // 0x2ed Call
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
	func_1850(); // 0x2fb Call
	
Label_765:
	return 2; // 0x2fd Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_910(var_10_bool); // 0x2ff Call
	func_1743(); // 0x302 Call
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
	func_1639(); // 0x39b Call
	return 0; // 0x39d Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_1116(var_10_bool); // 0x3c4 Call
	func_1743(); // 0x3c7 Call
	return 0; // 0x3c9 Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; // 0x428 PushV
	var_20_int = 120; // 0x429 PushI
	var_21_bool = var_11_bool != var_20_int; // 0x42a Neq
	if(var_21_bool == 0) goto Label_1069; // 0x42b JumpB
	return 8; // 0x42c Return
	
Label_1069:
	var_22_bool = var_0_bool == 0; // 0x42d NullEq
	if(var_22_bool == 0) goto Label_1078; // 0x42e JumpB
	Stop(); // 0x42f Func
	var_23_int = 1; // 0x431 PushI
	KillTimer(var_23_int); // 0x432 Func
	var_2_bool = 1; // 0x434 TMovB
	goto Label_1115; // 0x435 Jump
	
Label_1115:
	return 8; // 0x45b Return
	
Label_1078:
	GetDirection(var_16_cvector); // 0x436 Func
	var_24_float = 7000.0; // 0x438 PushF
	FindDirLength(var_17_float, var_16_cvector, var_24_float); // 0x439 Func
	var_25_cvector = CVector(0,0,0); var_26_float = 0; // 0x43b PushV
	var_26_float = 1.74533; // 0x43c MovF
	func_970(var_25_cvector, var_26_float); // 0x43d Call
	var_18_cvector = var_25_cvector; // 0x43e Mov
	var_19_float = var_18_cvector | var_18_cvector; // 0x440 Or2
	var_55_bool = 0; // 0x441 PushV
	var_55_bool = 0; // 0x442 MovB
	var_56_float = 10000.0; // 0x443 PushF
	var_57_bool = var_19_float >= var_56_float; // 0x444 GE
	if(var_57_bool == 0) goto Label_1108; // 0x445 JumpB
	var_58_bool = 0; // 0x446 PushV
	var_58_bool = 1; // 0x447 MovB
	var_59_float = var_17_float * var_17_float; // 0x448 Mult
	var_60_float = 2.25; // 0x449 PushF
	var_61_float = var_59_float * var_60_float; // 0x44a Mult
	var_62_bool = var_19_float >= var_61_float; // 0x44b GE
	if(var_62_bool == 0) goto Label_1106; // 0x44c JumpB
	var_63_bool = 0; // 0x44d PushV
	func_1132(var_58_bool, var_63_bool); // 0x44e Call
	if(var_63_bool == 0) goto Label_1106; // 0x450 JumpB
	var_58_bool = 0; // 0x451 MovB
	
Label_1106:
	if(var_58_bool == 0) goto Label_1108; // 0x452 JumpB
	var_55_bool = 1; // 0x453 MovB
	
Label_1108:
	if(var_55_bool == 0) goto Label_1115; // 0x454 JumpB
	Stop(); // 0x455 Func
	var_83_cvector = CVector(0,0,0); // 0x457 PushV
	func_1326(var_83_cvector); // 0x458 Call
	var_1_bool = var_83_cvector + var_18_cvector; // 0x45a Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool)
{
	func_1116(var_11_bool); // 0x465 Call
	var_13_object = Obj(); // 0x467 PushV
	var_13_object = var_11_bool; // 0x468 Mov
	func_1639(); // 0x469 Call
	return 0; // 0x46b Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int)
{
	var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; // 0x4da PushV
	var_20_int = 120; // 0x4db PushI
	var_21_bool = var_11_int != var_20_int; // 0x4dc Neq
	if(var_21_bool == 0) goto Label_1247; // 0x4dd JumpB
	return 8; // 0x4de Return
	
Label_1247:
	var_22_bool = var_0_bool == 0; // 0x4df NullEq
	if(var_22_bool == 0) goto Label_1256; // 0x4e0 JumpB
	Stop(); // 0x4e1 Func
	var_23_int = 1; // 0x4e3 PushI
	KillTimer(var_23_int); // 0x4e4 Func
	var_2_bool = 1; // 0x4e6 TMovB
	goto Label_1293; // 0x4e7 Jump
	
Label_1293:
	return 8; // 0x50d Return
	
Label_1256:
	GetDirection(var_16_cvector); // 0x4e8 Func
	var_24_float = 7000.0; // 0x4ea PushF
	FindDirLength(var_17_float, var_16_cvector, var_24_float); // 0x4eb Func
	var_25_cvector = CVector(0,0,0); var_26_float = 0; // 0x4ed PushV
	var_26_float = 1.74533; // 0x4ee MovF
	func_1148(var_25_cvector, var_26_float); // 0x4ef Call
	var_18_cvector = var_25_cvector; // 0x4f0 Mov
	var_19_float = var_18_cvector | var_18_cvector; // 0x4f2 Or2
	var_55_bool = 0; // 0x4f3 PushV
	var_55_bool = 0; // 0x4f4 MovB
	var_56_float = 10000.0; // 0x4f5 PushF
	var_57_bool = var_19_float >= var_56_float; // 0x4f6 GE
	if(var_57_bool == 0) goto Label_1286; // 0x4f7 JumpB
	var_58_bool = 0; // 0x4f8 PushV
	var_58_bool = 1; // 0x4f9 MovB
	var_59_float = var_17_float * var_17_float; // 0x4fa Mult
	var_60_float = 2.25; // 0x4fb PushF
	var_61_float = var_59_float * var_60_float; // 0x4fc Mult
	var_62_bool = var_19_float >= var_61_float; // 0x4fd GE
	if(var_62_bool == 0) goto Label_1284; // 0x4fe JumpB
	var_63_bool = 0; // 0x4ff PushV
	func_1310(var_58_bool, var_63_bool); // 0x500 Call
	if(var_63_bool == 0) goto Label_1284; // 0x502 JumpB
	var_58_bool = 0; // 0x503 MovB
	
Label_1284:
	if(var_58_bool == 0) goto Label_1286; // 0x504 JumpB
	var_55_bool = 1; // 0x505 MovB
	
Label_1286:
	if(var_55_bool == 0) goto Label_1293; // 0x506 JumpB
	Stop(); // 0x507 Func
	var_83_cvector = CVector(0,0,0); // 0x509 PushV
	func_1326(var_83_cvector); // 0x50a Call
	var_1_bool = var_83_cvector + var_18_cvector; // 0x50c Add2
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object)
{
	func_1294(var_11_object); // 0x517 Call
	var_13_object = Obj(); // 0x519 PushV
	var_13_object = var_11_object; // 0x51a Mov
	func_1639(); // 0x51b Call
	return 0; // 0x51d Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x65a PushV
	var_15_string = "health"; // 0x65b PushS
	var_16_bool = var_12_string == var_15_string; // 0x65c Eq
	if(var_16_bool == 0) goto Label_1638; // 0x65d JumpB
	var_17_string = "health"; // 0x65e PushS
	GetProperty(var_17_string, var_14_float); // 0x65f Func
	var_18_int = 0; // 0x661 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x662 LE
	if(var_19_bool == 0) goto Label_1638; // 0x663 JumpB
	SignalDeath(var_11_object); // 0x664 Func
	
Label_1638:
	return 2; // 0x666 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x668 PushV
	var_12_object = var_11_object; // 0x669 Mov
	func_1618(var_12_object); // 0x66a Call
	return 0; // 0x66c Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x66e PushV
	var_15_object = var_11_object; // 0x66f Mov
	var_16_int = var_12_int; // 0x670 Mov
	var_17_float = var_13_float; // 0x671 Mov
	func_1508(var_16_int, var_17_float); // 0x672 Call
	return 0; // 0x674 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_11_bool); // 0x95 Func
	func_1823(); // 0x98 Call
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
	func_1892(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
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


func_645(var_62_object)
{
	var_63_bool = 0; var_64_object = Obj(); // 0x286 PushV
	var_64_object = var_62_object; // 0x287 Mov
	func_1842(var_63_bool, var_64_object); // 0x288 Call
	if(var_63_bool == 0) goto Label_655; // 0x28a JumpB
	var_67_object = Obj(); // 0x28b PushV
	var_67_object = var_62_object; // 0x28c Mov
	func_683(var_67_object); // 0x28d Call
	
Label_655:
	return 0; // 0x28f Return
}


func_1677(var_54_int)
{
	var_54_int = 2; // 0x68e MovI
	return 0; // 0x68f Return
}


func_910(var_0_bool)
{
	var_0_bool = 1; // 0x38e TMovB
	var_12_int = 0; // 0x38f PushI
	KillTimer(var_12_int); // 0x390 Func
	Stop(); // 0x392 Func
	return 0; // 0x394 Return
}


func_1294(var_2_bool)
{
	Stop(); // 0x50e Func
	var_12_int = 120; // 0x510 PushI
	KillTimer(var_12_int); // 0x511 Func
	var_2_bool = 1; // 0x513 TMovB
	return 0; // 0x514 Return
}


func_1680(var_61_object)
{
	var_62_object = Obj(); // 0x691 PushV
	var_62_object = var_61_object; // 0x692 Mov
	TaskCall(3); // 0x693 TaskCall
	func_645(var_62_object); // 0x694 Call
	TaskReturn(); // 0x695 TaskReturn
	return 0; // 0x697 Return
}


func_784(var_114_string)
{
	var_114_string = "zwalk"; // 0x310 MovS
	return 0; // 0x311 Return
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


func_1148(var_25_cvector, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; // 0x47c PushV
	GetPosition(var_33_cvector); // 0x47d Func
	GetPosition(var_34_cvector); // 0x47f TObjFunc
	GetDirection(var_35_cvector); // 0x481 Func
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x483 PushV
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x484 PushV
	var_42_cvector = var_33_cvector - var_34_cvector; // 0x485 Sub2
	func_1580(var_41_cvector, var_42_cvector); // 0x486 Call
	var_48_float = 0.75; // 0x488 PushF
	var_49_float = var_35_cvector * var_48_float; // 0x489 Mult
	var_40_cvector = var_41_cvector + var_49_float; // 0x48a Add2
	func_1580(var_39_cvector, var_40_cvector); // 0x48b Call
	var_36_cvector = var_39_cvector; // 0x48c Mov
	var_50_int = 32; // 0x48e PushI
	var_51_float = 7000.0; // 0x48f PushF
	FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, var_50_int, var_51_float); // 0x490 Func
	var_52_int = 100; // 0x492 PushI
	var_38_float = var_38_float - var_52_int; // 0x493 Sub2
	var_53_int = 0; // 0x494 PushI
	var_54_bool = var_38_float < var_53_int; // 0x495 LT
	if(var_54_bool == 0) goto Label_1176; // 0x496 JumpB
	var_38_float = 0; // 0x497 MovI
	
Label_1176:
	var_25_cvector = var_37_cvector * var_38_float; // 0x498 Mult2
	return 12; // 0x499 Return
}


func_1688(var_14_int, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x699 PushV
	var_17_object = var_15_object; // 0x69a Mov
	func_1484(var_16_bool, var_17_object); // 0x69b Call
	if(var_16_bool == 0) goto Label_1696; // 0x69d JumpB
	var_14_int = 2; // 0x69e MovI
	goto Label_1697; // 0x69f Jump
	
Label_1697:
	return 0; // 0x6a1 Return
	
Label_1696:
	var_14_int = 0; // 0x6a0 MovI
}


func_1178(var_0_bool, var_1_bool, var_2_bool, var_83_object)
{
	var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_float = 0; // 0x49a PushV
	var_0_bool = var_83_object; // 0x49b TMov
	var_97_cvector = CVector(0,0,0); var_98_float = 0; // 0x49c PushV
	var_98_float = 1.74533; // 0x49d MovF
	func_1148(var_97_cvector, var_98_float); // 0x49e Call
	var_92_cvector = var_97_cvector; // 0x49f Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x4a1 Or2
	var_127_float = 10000.0; // 0x4a2 PushF
	var_128_bool = var_93_float < var_127_float; // 0x4a3 LT
	if(var_128_bool == 0) goto Label_1198; // 0x4a4 JumpB
	var_129_string = "Can't retreat, distance: "; // 0x4a5 PushS
	var_130_float = sqrt(var_93_float); // 0x4a6 Sqrt
	var_131_int = var_129_string + var_130_float; // 0x4a7 Add
	Trace(var_131_int); // 0x4a8 Func
	var_132_float = 0.5; // 0x4aa PushF
	Sleep(var_132_float); // 0x4ab Func
	return 10; // 0x4ad Return
	
Label_1198:
	var_133_float = GetByIndex(var_92_cvector, 0); // 0x4ae PushE
	var_134_float = GetByIndex(var_92_cvector, 2); // 0x4af PushE
	Rotate(var_133_float, var_134_float); // 0x4b0 Func
	var_135_cvector = CVector(0,0,0); // 0x4b2 PushV
	func_1326(var_135_cvector); // 0x4b3 Call
	var_1_bool = var_135_cvector + var_92_cvector; // 0x4b5 Add2
	var_138_int = 120; // 0x4b6 PushI
	var_139_float = 0.5; // 0x4b7 PushF
	SetTimer(var_138_int, var_139_float); // 0x4b8 Func
	var_2_bool = 0; // 0x4ba TMovB
	
Label_1211:
	var_140_int = 1; // 0x4bb PushI
	MovePoint(var_140_int, var_140_int, var_94_bool); // 0x4bc Func
	var_141_bool = var_94_bool; // 0x4be Push
	if(var_141_bool == 0) goto Label_1239; // 0x4bf JumpB
	var_142_bool = var_0_bool == 0; // 0x4c0 NullEq
	if(var_142_bool == 0) goto Label_1220; // 0x4c1 JumpB
	goto Label_1241; // 0x4c2 Jump
	
Label_1241:
	return 10; // 0x4d9 Return
	
Label_1220:
	var_143_cvector = CVector(0,0,0); var_144_float = 0; // 0x4c4 PushV
	var_144_float = 2.61799; // 0x4c5 MovF
	func_1148(var_143_cvector, var_144_float); // 0x4c6 Call
	var_95_cvector = var_143_cvector; // 0x4c7 Mov
	var_96_float = var_95_cvector | var_95_cvector; // 0x4c9 Or2
	var_145_float = 10000.0; // 0x4ca PushF
	var_146_bool = var_96_float >= var_145_float; // 0x4cb GE
	if(var_146_bool == 0) goto Label_1238; // 0x4cc JumpB
	var_147_cvector = CVector(0,0,0); // 0x4cd PushV
	func_1326(var_147_cvector); // 0x4ce Call
	var_1_bool = var_147_cvector + var_95_cvector; // 0x4d0 Add2
	var_148_int = 120; // 0x4d1 PushI
	var_149_float = 0.5; // 0x4d2 PushF
	SetTimer(var_148_int, var_149_float); // 0x4d3 Func
	goto Label_1239; // 0x4d5 Jump
	
Label_1239:
	var_150_bool = var_2_bool == 0; // 0x4d7 Not
	if(var_150_bool == 0) goto Label_1211; // 0x4d8 JumpB
	
Label_1238:
	goto Label_1241; // 0x4d6 Jump
}


func_1818(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0; // 0x71a PushV
	GetInvItemByName(var_54_int, var_52_string); // 0x71b Func
	var_51_int = var_54_int; // 0x71d Mov
	return 2; // 0x71e Return
}


func_926(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x39f PushV
	var_17_object = var_15_object; // 0x3a0 Mov
	func_1484(var_16_bool, var_17_object); // 0x3a1 Call
	var_14_bool = var_16_bool; // 0x3a2 Mov
	return 0; // 0x3a4 Return
}


func_1310(var_0_bool, var_63_bool)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x51e PushV
	GetDirection(var_66_cvector); // 0x51f Func
	var_68_cvector = CVector(0,0,0); var_69_object = Obj(); // 0x521 PushV
	var_69_object = var_0_bool; // 0x522 MovT
	func_1331(var_69_object); // 0x523 Call
	var_67_cvector = var_68_cvector; // 0x524 Mov
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x526 PushV
	var_75_cvector = var_66_cvector; // 0x527 Mov
	var_76_cvector = var_67_cvector; // 0x528 Mov
	func_1601(var_74_float, var_75_cvector, var_76_cvector); // 0x529 Call
	var_82_float = -0.34202; // 0x52b PushF
	var_63_bool = var_74_float >= var_82_float; // 0x52c GE2
	return 4; // 0x52d Return
}


func_1823()
{
	var_12_bool = GlobalVars[0]; // 0x71f PushGE
	var_12_bool = 0; // 0x720 MovB
	GlobalVars[0] = var_12_bool; // 0x721 PopGE
	var_13_bool = 0; // 0x722 PushV
	var_13_bool = 1; // 0x723 MovB
	func_1774(); // 0x724 Call
	return 0; // 0x726 Return
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


func_1698(var_54_object)
{
	var_55_object = Obj(); // 0x6a3 PushV
	var_55_object = var_54_object; // 0x6a4 Mov
	TaskCall(5); // 0x6a5 TaskCall
	func_935(var_55_object); // 0x6a6 Call
	TaskReturn(); // 0x6a7 TaskReturn
	return 0; // 0x6a9 Return
}


func_163()
{
	var_64_bool = 0; // 0xa3 PushV
	func_1575(var_64_bool); // 0xa4 Call
	var_67_bool = var_64_bool == 0; // 0xa6 Not
	if(var_67_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1743(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_1443(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x5a3 PushV
	IsDead(var_34_bool); // 0x5a4 ObjFunc
	var_31_bool = var_34_bool; // 0x5a6 Mov
	return 2; // 0x5a7 Return
}


func_933(var_115_string)
{
	var_115_string = "run"; // 0x3a5 MovS
	return 0; // 0x3a6 Return
}


func_1575(var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0; // 0x627 PushV
	IsLoaded(var_66_bool); // 0x628 Func
	var_64_bool = var_66_bool; // 0x62a Mov
	return 2; // 0x62b Return
}


func_1448(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x5a8 PushV
	var_26_bool = var_21_object == 0; // 0x5a9 NullEq
	if(var_26_bool == 0) goto Label_1453; // 0x5aa JumpB
	var_20_bool = 0; // 0x5ab MovB
	return 4; // 0x5ac Return
	
Label_1453:
	var_27_bool = 0; // 0x5ad PushV
	var_27_bool = 0; // 0x5ae MovB
	var_28_string = "IsDead"; // 0x5af PushS
	var_29_int = 1; // 0x5b0 PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x5b1 FuncExist
	if(var_30_bool == 0) goto Label_1465; // 0x5b2 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x5b3 PushV
	var_32_object = var_21_object; // 0x5b4 Mov
	func_1443(var_32_object); // 0x5b5 Call
	if(var_31_bool == 0) goto Label_1465; // 0x5b7 JumpB
	var_27_bool = 1; // 0x5b8 MovB
	
Label_1465:
	if(var_27_bool == 0) goto Label_1468; // 0x5b9 JumpB
	var_20_bool = 0; // 0x5ba MovB
	return 4; // 0x5bb Return
	
Label_1468:
	GetScene(var_24_object); // 0x5bc Func
	var_35_bool = var_24_object == 0; // 0x5be NullEq
	if(var_35_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_20_bool = 0; // 0x5c0 MovB
	return 4; // 0x5c1 Return
	
Label_1474:
	GetScene(var_25_object); // 0x5c2 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x5c4 Neq
	if(var_36_bool == 0) goto Label_1480; // 0x5c5 JumpB
	var_20_bool = 0; // 0x5c6 MovB
	return 4; // 0x5c7 Return
	
Label_1480:
	var_20_bool = 1; // 0x5c8 MovB
	return 4; // 0x5c9 Return
}


func_935(var_55_object)
{
	Face(var_55_object); // 0x3a8 Func
	var_59_string = "all"; // 0x3aa PushS
	var_60_string = "attack_on"; // 0x3ab PushS
	PlayAnimation(var_59_string, var_60_string); // 0x3ac Func
	WaitForAnimEnd(); // 0x3ae Func
	var_61_string = "all"; // 0x3b0 PushS
	var_62_string = "attack_stay"; // 0x3b1 PushS
	PlayAnimation(var_61_string, var_62_string); // 0x3b2 Func
	WaitForAnimEnd(); // 0x3b4 Func
	var_63_string = "all"; // 0x3b6 PushS
	var_64_string = "attack_off"; // 0x3b7 PushS
	PlayAnimation(var_63_string, var_64_string); // 0x3b8 Func
	WaitForAnimEnd(); // 0x3ba Func
	StopAsync(); // 0x3bc Func
	var_65_object = Obj(); // 0x3be PushV
	var_65_object = var_55_object; // 0x3bf Mov
	func_1000(var_57_cvector, var_58_bool, var_55_object, var_65_object); // 0x3c0 Call
	return 0; // 0x3c2 Return
}


func_1706(var_48_int, var_49_object)
{
	var_50_bool = 0; var_51_object = Obj(); // 0x6ab PushV
	var_51_object = var_49_object; // 0x6ac Mov
	func_1484(var_50_bool, var_51_object); // 0x6ad Call
	if(var_50_bool == 0) goto Label_1714; // 0x6af JumpB
	var_48_int = 2; // 0x6b0 MovI
	goto Label_1715; // 0x6b1 Jump
	
Label_1715:
	return 0; // 0x6b3 Return
	
Label_1714:
	var_48_int = 0; // 0x6b2 MovI
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
	func_1338(var_130_object); // 0x2c5 Call
	var_137_float = 90000.0; // 0x2c7 PushF
	var_138_bool = var_129_float <= var_137_float; // 0x2c8 LE
	if(var_138_bool == 0) goto Label_719; // 0x2c9 JumpB
	var_139_float = 0; var_140_object = Obj(); var_141_float = 0; // 0x2ca PushV
	var_140_object = var_67_object; // 0x2cb Mov
	var_141_float = 0.2; // 0x2cc MovF
	func_1380(var_139_float, var_140_object, var_141_float); // 0x2cd Call
	
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


func_1580(var_41_cvector, var_42_cvector)
{
	var_43_float = 0; var_44_float = 0; // 0x62c PushV
	var_45_int = var_42_cvector | var_42_cvector; // 0x62d Or
	var_44_float = sqrt(var_45_int); // 0x62e Sqrt2
	var_46_float = 0.0; // 0x62f PushF
	var_47_bool = var_44_float < var_46_float; // 0x630 LT
	if(var_47_bool == 0) goto Label_1588; // 0x631 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x632 MovV
	return 2; // 0x633 Return
	
Label_1588:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x634 Div2
	return 2; // 0x635 Return
}


func_1831(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x727 PushV
	var_24_bool = GlobalVars[0]; // 0x728 PushGE
	if(var_24_bool == 0) goto Label_1841; // 0x729 JumpB
	IsOverrideActive(var_23_bool); // 0x72a Func
	var_25_bool = var_23_bool == 0; // 0x72c Not
	if(var_25_bool == 0) goto Label_1840; // 0x72d JumpB
	WorkWithCorpse(var_21_object); // 0x72e Func
	
Label_1840:
	return 2; // 0x730 Return
	
Label_1841:
	return 2; // 0x731 Return
}


func_1326(var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x52e PushV
	GetPosition(var_85_cvector); // 0x52f Func
	var_83_cvector = var_85_cvector; // 0x531 Mov
	return 2; // 0x532 Return
}


func_1842(var_63_bool, var_64_object)
{
	var_65_bool = 0; var_66_bool = 0; // 0x732 PushV
	IsPlayerActor(var_64_object, var_66_bool); // 0x733 Func
	var_63_bool = var_66_bool; // 0x735 Mov
	return 2; // 0x736 Return
}


func_1331(var_68_cvector)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x533 PushV
	GetPosition(var_72_cvector); // 0x534 Func
	GetPosition(var_73_cvector); // 0x536 ObjFunc
	var_68_cvector = var_73_cvector - var_72_cvector; // 0x538 Sub2
	return 4; // 0x539 Return
}


func_1716(var_82_object)
{
	var_83_object = Obj(); // 0x6b5 PushV
	var_83_object = var_82_object; // 0x6b6 Mov
	TaskCall(6); // 0x6b7 TaskCall
	func_1178(var_84_object, var_85_cvector, var_86_bool, var_83_object); // 0x6b8 Call
	TaskReturn(); // 0x6b9 TaskReturn
	return 0; // 0x6bb Return
}


func_1590(var_181_float, var_182_float, var_183_float, var_184_float)
{
	var_185_bool = var_182_float < var_183_float; // 0x637 LT
	if(var_185_bool == 0) goto Label_1595; // 0x638 JumpB
	var_181_float = var_183_float; // 0x639 Mov
	return 0; // 0x63a Return
	
Label_1595:
	var_186_bool = var_182_float > var_184_float; // 0x63b GT
	if(var_186_bool == 0) goto Label_1599; // 0x63c JumpB
	var_181_float = var_184_float; // 0x63d Mov
	return 0; // 0x63e Return
	
Label_1599:
	var_181_float = var_182_float; // 0x63f Mov
	return 0; // 0x640 Return
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


func_1847(var_14_int)
{
	var_14_int = 0; // 0x738 MovI
	return 0; // 0x739 Return
}


func_1850()
{
	return 0; // 0x73b Return
}


func_571()
{
	var_91_int = 0; var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_bool = 0; var_96_float = 0; var_97_bool = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; var_102_bool = 0; var_103_float = 0; var_104_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_105_bool = 0; // 0x23e PushV
	func_1575(var_105_bool); // 0x23f Call
	var_106_bool = var_105_bool == 0; // 0x241 Not
	if(var_106_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_107_int = 0; // 0x244 PushV
	func_1660(var_107_int); // 0x245 Call
	var_98_int = var_107_int; // 0x246 Mov
	var_99_int = 0; // 0x248 MovI
	
Label_585:
	var_120_bool = 0; // 0x249 PushV
	var_120_bool = 0; // 0x24a MovB
	var_121_int = 5; // 0x24b PushI
	var_122_bool = var_99_int < var_121_int; // 0x24c LT
	if(var_122_bool == 0) goto Label_595; // 0x24d JumpB
	var_123_bool = 0; // 0x24e PushV
	func_1575(var_123_bool); // 0x24f Call
	if(var_123_bool == 0) goto Label_595; // 0x251 JumpB
	var_120_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_120_bool == 0) goto Label_639; // 0x253 JumpB
	var_124_int = 3; // 0x254 PushI
	irand(var_100_int, var_124_int); // 0x255 Func
	var_125_int = 0; // 0x257 PushI
	var_126_bool = var_100_int == var_125_int; // 0x258 Eq
	if(var_126_bool == 0) goto Label_619; // 0x259 JumpB
	var_127_int = var_98_int; // 0x25a Push
	if(var_127_int == 0) goto Label_618; // 0x25b JumpB
	irand(var_101_int, var_98_int); // 0x25c Func
	var_128_string = "all"; // 0x25e PushS
	var_129_string = ""; var_130_int = 0; // 0x25f PushV
	var_130_int = var_101_int; // 0x260 Mov
	func_1653(var_129_string, var_130_int); // 0x261 Call
	PlayAnimation(var_128_string, var_129_string); // 0x263 Func
	WaitForAnimEnd(var_102_bool); // 0x265 Func
	var_131_bool = var_102_bool == 0; // 0x267 Not
	if(var_131_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_639; // 0x269 Jump
	
Label_639:
	return 14; // 0x27f Return
	
Label_618:
	goto Label_636; // 0x26a Jump
	
Label_636:
	var_132_int = 1; // 0x27c PushI
	var_99_int = var_99_int + var_132_int; // 0x27d Add2
	goto Label_585; // 0x27e Jump
	
Label_619:
	var_133_int = 1; // 0x26b PushI
	var_134_bool = var_100_int == var_133_int; // 0x26c Eq
	if(var_134_bool == 0) goto Label_633; // 0x26d JumpB
	var_135_int = 4; // 0x26e PushI
	rand(var_103_float, var_135_int); // 0x26f Func
	var_136_int = 1; // 0x271 PushI
	var_137_int = var_103_float + var_136_int; // 0x272 Add
	Sleep(var_137_int, var_104_bool); // 0x273 Func
	var_138_bool = var_104_bool == 0; // 0x275 Not
	if(var_138_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_639; // 0x277 Jump
	
Label_632:
	goto Label_636; // 0x278 Jump
	
Label_633:
	var_139_int = var_99_int; // 0x279 Push
	if(var_139_int == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
}


func_1724(var_14_int)
{
	var_14_int = 0; // 0x6bd MovI
	return 0; // 0x6be Return
}


func_1852(var_15_bool, var_16_object, var_17_object)
{
	var_18_string = ""; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; // 0x73c PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x73d PushV
	var_23_object = var_17_object; // 0x73e Mov
	var_24_string = "class"; // 0x73f MovS
	func_1346(var_22_bool, var_23_object, var_24_string); // 0x740 Call
	var_31_bool = var_22_bool == 0; // 0x742 Not
	if(var_31_bool == 0) goto Label_1862; // 0x743 JumpB
	var_15_bool = 0; // 0x744 MovB
	return 4; // 0x745 Return
	
Label_1862:
	var_32_string = "class"; // 0x746 PushS
	GetProperty(var_32_string, var_20_string); // 0x747 ObjFunc
	var_33_string = "rat"; // 0x749 PushS
	var_34_bool = var_20_string == var_33_string; // 0x74a Eq
	if(var_34_bool == 0) goto Label_1870; // 0x74b JumpB
	var_15_bool = 0; // 0x74c MovB
	return 4; // 0x74d Return
	
Label_1870:
	CanSee(var_21_bool, var_16_object); // 0x74e Func
	var_35_bool = 0; // 0x750 PushV
	var_35_bool = 1; // 0x751 MovB
	var_36_bool = var_21_bool; // 0x752 Push
	if(var_36_bool == 0) goto Label_1884; // 0x753 JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x754 PushV
	var_38_object = var_16_object; // 0x755 Mov
	func_1338(var_38_object); // 0x756 Call
	var_45_float = 250000.0; // 0x758 PushF
	var_46_bool = var_37_float <= var_45_float; // 0x759 LE
	if(var_46_bool == 0) goto Label_1884; // 0x75a JumpB
	var_35_bool = 0; // 0x75b MovB
	
Label_1884:
	if(var_35_bool == 0) goto Label_1890; // 0x75c JumpB
	var_47_float = -0.3; // 0x75d PushF
	ReportReputationChange(var_16_object, var_17_object, var_47_float); // 0x75e Func
	var_15_bool = 1; // 0x760 MovB
	return 4; // 0x761 Return
	
Label_1890:
	var_15_bool = 0; // 0x762 MovB
	return 4; // 0x763 Return
}


func_1338(var_37_float)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x53a PushV
	GetPosition(var_42_cvector); // 0x53b Func
	GetPosition(var_43_cvector); // 0x53d ObjFunc
	var_44_cvector = var_43_cvector - var_42_cvector; // 0x53f Sub2
	var_37_float = var_44_cvector | var_44_cvector; // 0x540 Or2
	return 6; // 0x541 Return
}


func_1727()
{
	return 0; // 0x6c0 Return
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1bf TMovB
	var_1_bool = 1; // 0x1c0 TMovB
	Stop(); // 0x1c1 Func
	StopGroup0(); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


func_1729(var_15_int)
{
	var_15_int = 0; // 0x6c2 MovI
	return 0; // 0x6c3 Return
}


func_319(var_2_bool)
{
	var_60_int = 110; // 0x13f PushI
	KillTimer(var_60_int); // 0x140 Func
	var_2_bool = 0; // 0x142 TMovB
	func_447(var_15_bool, var_16_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_1601(var_74_float, var_75_cvector, var_76_cvector)
{
	var_77_int = var_75_cvector | var_76_cvector; // 0x642 Or
	var_78_int = var_75_cvector | var_75_cvector; // 0x643 Or
	var_79_int = var_76_cvector | var_76_cvector; // 0x644 Or
	var_80_float = var_78_int * var_79_int; // 0x645 Mult
	var_81_float = sqrt(var_80_float); // 0x646 Sqrt
	var_74_float = var_77_int / var_77_int; // 0x647 Div2
	return 0; // 0x648 Return
}


func_1732()
{
	return 0; // 0x6c5 Return
}


func_1346(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x542 PushV
	var_43_string = "HasProperty"; // 0x543 PushS
	var_44_int = 2; // 0x544 PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x545 FuncExist
	var_46_bool = var_45_bool == 0; // 0x546 Not
	if(var_46_bool == 0) goto Label_1354; // 0x547 JumpB
	var_38_bool = 0; // 0x548 MovB
	return 2; // 0x549 Return
	
Label_1354:
	HasProperty(var_40_string, var_42_bool); // 0x54a ObjFunc
	var_38_bool = var_42_bool; // 0x54c Mov
	return 2; // 0x54d Return
}


func_1734(var_14_int)
{
	var_14_int = 2; // 0x6c7 MovI
	return 0; // 0x6c8 Return
}


func_454(var_89_bool)
{
	var_89_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_1737(var_20_object)
{
	var_21_object = Obj(); // 0x6ca PushV
	var_21_object = var_20_object; // 0x6cb Mov
	func_1831(var_21_object); // 0x6cc Call
	return 0; // 0x6ce Return
}


func_970(var_25_cvector, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; // 0x3ca PushV
	GetPosition(var_33_cvector); // 0x3cb Func
	GetPosition(var_34_cvector); // 0x3cd TObjFunc
	GetDirection(var_35_cvector); // 0x3cf Func
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x3d1 PushV
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x3d2 PushV
	var_42_cvector = var_33_cvector - var_34_cvector; // 0x3d3 Sub2
	func_1580(var_41_cvector, var_42_cvector); // 0x3d4 Call
	var_48_float = 0.75; // 0x3d6 PushF
	var_49_float = var_35_cvector * var_48_float; // 0x3d7 Mult
	var_40_cvector = var_41_cvector + var_49_float; // 0x3d8 Add2
	func_1580(var_39_cvector, var_40_cvector); // 0x3d9 Call
	var_36_cvector = var_39_cvector; // 0x3da Mov
	var_50_int = 32; // 0x3dc PushI
	var_51_float = 7000.0; // 0x3dd PushF
	FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, var_50_int, var_51_float); // 0x3de Func
	var_52_int = 100; // 0x3e0 PushI
	var_38_float = var_38_float - var_52_int; // 0x3e1 Sub2
	var_53_int = 0; // 0x3e2 PushI
	var_54_bool = var_38_float < var_53_int; // 0x3e3 LT
	if(var_54_bool == 0) goto Label_998; // 0x3e4 JumpB
	var_38_float = 0; // 0x3e5 MovI
	
Label_998:
	var_25_cvector = var_37_cvector * var_38_float; // 0x3e6 Mult2
	return 12; // 0x3e7 Return
}


func_1609(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x649 PushV
	GetGameTime(var_24_float); // 0x64a Func
	var_25_int = 1; // 0x64c PushI
	var_26_int = 0; // 0x64d PushV
	var_27_int = 24; // 0x64e PushI
	var_26_int = var_24_float / var_24_float; // 0x64f Div2
	var_22_int = var_25_int + var_26_int; // 0x650 Add2
	return 2; // 0x651 Return
}


func_1484(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x5cc PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x5cd PushV
	var_21_object = var_17_object; // 0x5ce Mov
	func_1448(var_20_bool, var_21_object); // 0x5cf Call
	var_37_bool = var_20_bool == 0; // 0x5d1 Not
	if(var_37_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_16_bool = 0; // 0x5d3 MovB
	return 2; // 0x5d4 Return
	
Label_1493:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x5d5 PushV
	var_39_object = var_17_object; // 0x5d6 Mov
	var_40_string = "noaccess"; // 0x5d7 MovS
	func_1346(var_38_bool, var_39_object, var_40_string); // 0x5d8 Call
	var_47_bool = var_38_bool == 0; // 0x5da Not
	if(var_47_bool == 0) goto Label_1502; // 0x5db JumpB
	var_16_bool = 1; // 0x5dc MovB
	return 2; // 0x5dd Return
	
Label_1502:
	var_48_string = "noaccess"; // 0x5de PushS
	GetProperty(var_48_string, var_19_int); // 0x5df ObjFunc
	var_49_int = 0; // 0x5e1 PushI
	var_16_bool = var_19_int == var_49_int; // 0x5e2 Eq2
	return 2; // 0x5e3 Return
}


func_1358(var_169_bool, var_170_object, var_171_string, var_172_float, var_173_float, var_174_float)
{
	var_175_float = 0; var_176_float = 0; // 0x54e PushV
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; // 0x54f PushV
	var_178_object = var_170_object; // 0x550 Mov
	var_179_string = var_171_string; // 0x551 Mov
	func_1346(var_177_bool, var_178_object, var_179_string); // 0x552 Call
	var_180_bool = var_177_bool == 0; // 0x554 Not
	if(var_180_bool == 0) goto Label_1368; // 0x555 JumpB
	var_169_bool = 0; // 0x556 MovB
	return 2; // 0x557 Return
	
Label_1368:
	GetProperty(var_171_string, var_176_float); // 0x558 ObjFunc
	var_181_float = 0; var_182_float = 0; var_183_float = 0; var_184_float = 0; // 0x55a PushV
	var_182_float = var_176_float + var_172_float; // 0x55b Add2
	var_183_float = var_173_float; // 0x55c Mov
	var_184_float = var_174_float; // 0x55d Mov
	func_1590(var_181_float, var_182_float, var_183_float, var_184_float); // 0x55e Call
	SetProperty(var_171_string, var_181_float); // 0x560 ObjFunc
	var_169_bool = 1; // 0x562 MovB
	return 2; // 0x563 Return
}


func_1743()
{
	return 0; // 0x6cf Return
}


func_336(var_2_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; // 0x150 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x151 PushV
	var_18_object = var_12_object; // 0x152 Mov
	func_1484(var_17_bool, var_18_object); // 0x153 Call
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
	func_1677(var_55_object); // 0x162 Call
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
	func_1680(var_61_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_192_int = 110; // 0x173 PushI
	var_193_float = 10.0; // 0x174 PushF
	SetTimer(var_192_int, var_193_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_1744(var_19_int, var_20_int)
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x6d0 PushV
	var_38_bool = var_19_int > var_20_int; // 0x6d1 GT
	if(var_38_bool == 0) goto Label_1751; // 0x6d2 JumpB
	var_39_string = "GenerateMoney: iMin > iMax"; // 0x6d3 PushS
	Trace(var_39_string); // 0x6d4 Func
	return 8; // 0x6d6 Return
	
Label_1751:
	var_34_int = 0; // 0x6d7 MovI
	var_40_bool = var_19_int != var_20_int; // 0x6d8 Neq
	if(var_40_bool == 0) goto Label_1758; // 0x6d9 JumpB
	var_41_int = var_20_int - var_19_int; // 0x6da Sub
	irand(var_35_int, var_41_int); // 0x6db Func
	goto Label_1762; // 0x6dd Jump
	
Label_1762:
	var_34_int = var_34_int + var_19_int; // 0x6e2 Add2
	var_42_int = 0; // 0x6e3 PushI
	var_43_bool = var_34_int == var_42_int; // 0x6e4 Eq
	if(var_43_bool == 0) goto Label_1767; // 0x6e5 JumpB
	return 8; // 0x6e6 Return
	
Label_1767:
	var_44_string = "Money"; // 0x6e7 PushS
	GetInvItemByName(var_36_int, var_44_string); // 0x6e8 Func
	var_45_int = 0; // 0x6ea PushI
	AddItem(var_37_bool, var_36_int, var_45_int, var_34_int); // 0x6eb Func
	return 8; // 0x6ed Return
	
Label_1758:
	var_46_int = 0; // 0x6de PushI
	var_47_bool = var_19_int == var_46_int; // 0x6df Eq
	if(var_47_bool == 0) goto Label_1762; // 0x6e0 JumpB
	return 8; // 0x6e1 Return
}


func_1618(var_12_object)
{
	var_13_object = Obj(); // 0x653 PushV
	var_13_object = var_12_object; // 0x654 Mov
	TaskCall(0); // 0x655 TaskCall
	func_0(var_13_object); // 0x656 Call
	TaskReturn(); // 0x657 TaskReturn
	return 0; // 0x659 Return
}


func_732()
{
	StopAsync(); // 0x2dc Func
	StopAnimation(); // 0x2de Func
	return 0; // 0x2e0 Return
}


func_1116(var_2_bool)
{
	Stop(); // 0x45c Func
	var_12_int = 120; // 0x45e PushI
	KillTimer(var_12_int); // 0x45f Func
	var_2_bool = 1; // 0x461 TMovB
	return 0; // 0x462 Return
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


func_1892()
{
	var_65_bool = GlobalVars[0]; // 0x765 PushGE
	var_65_bool = 1; // 0x766 MovB
	GlobalVars[0] = var_65_bool; // 0x767 PopGE
	var_66_int = 50; // 0x768 PushI
	var_67_int = 40; // 0x769 PushI
	SetRTEnvelope(var_66_int, var_67_int); // 0x76a Func
	return 0; // 0x76c Return
}


func_1380(var_139_float, var_140_object, var_141_float)
{
	var_142_int = 0; var_143_float = 0; var_144_float = 0; var_145_int = 0; var_146_float = 0; var_147_float = 0; // 0x564 PushV
	var_148_bool = 0; var_149_object = Obj(); var_150_string = ""; // 0x565 PushV
	var_149_object = var_140_object; // 0x566 Mov
	var_150_string = "disease"; // 0x567 MovS
	func_1346(var_148_bool, var_149_object, var_150_string); // 0x568 Call
	var_151_bool = var_148_bool == 0; // 0x56a Not
	if(var_151_bool == 0) goto Label_1390; // 0x56b JumpB
	var_139_float = 0; // 0x56c MovI
	return 6; // 0x56d Return
	
Label_1390:
	var_152_bool = 0; var_153_object = Obj(); var_154_string = ""; // 0x56e PushV
	var_153_object = var_140_object; // 0x56f Mov
	var_154_string = "armor_disease"; // 0x570 MovS
	func_1346(var_152_bool, var_153_object, var_154_string); // 0x571 Call
	if(var_152_bool == 0) goto Label_1410; // 0x573 JumpB
	var_155_string = "armor_disease"; // 0x574 PushS
	GetProperty(var_155_string, var_145_int); // 0x575 ObjFunc
	var_156_int = 100; // 0x577 PushI
	var_157_bool = var_145_int < var_156_int; // 0x578 LT
	if(var_157_bool == 0) goto Label_1408; // 0x579 JumpB
	var_158_int = 1; // 0x57a PushI
	var_159_float = 100.0; // 0x57b PushF
	var_160_float = var_145_int / var_159_float; // 0x57c Div
	var_161_int = var_158_int - var_160_float; // 0x57d Sub
	var_141_float = var_141_float * var_161_int; // 0x57e Mult2
	goto Label_1410; // 0x57f Jump
	
Label_1410:
	var_162_bool = 0; var_163_object = Obj(); var_164_string = ""; // 0x582 PushV
	var_163_object = var_140_object; // 0x583 Mov
	var_164_string = "immunity"; // 0x584 MovS
	func_1346(var_162_bool, var_163_object, var_164_string); // 0x585 Call
	if(var_162_bool == 0) goto Label_1433; // 0x587 JumpB
	var_165_string = "immunity"; // 0x588 PushS
	GetProperty(var_165_string, var_147_float); // 0x589 ObjFunc
	var_166_bool = var_147_float < var_141_float; // 0x58b LT
	if(var_166_bool == 0) goto Label_1427; // 0x58c JumpB
	var_167_string = "immunity"; // 0x58d PushS
	var_168_int = 0; // 0x58e PushI
	SetProperty(var_167_string, var_168_int); // 0x58f ObjFunc
	var_146_float = var_141_float - var_147_float; // 0x591 Sub2
	goto Label_1433; // 0x592 Jump
	
Label_1433:
	var_169_bool = 0; var_170_object = Obj(); var_171_string = ""; var_172_float = 0; var_173_float = 0; var_174_float = 0; // 0x599 PushV
	var_170_object = var_140_object; // 0x59a Mov
	var_171_string = "disease"; // 0x59b MovS
	var_172_float = var_146_float; // 0x59c Mov
	var_173_float = 0; // 0x59d MovI
	var_174_float = 1; // 0x59e MovI
	func_1358(var_169_bool, var_170_object, var_171_string, var_172_float, var_173_float, var_174_float); // 0x59f Call
	var_139_float = var_141_float; // 0x5a1 Mov
	return 6; // 0x5a2 Return
	
Label_1427:
	var_187_string = "immunity"; // 0x593 PushS
	var_188_int = var_147_float - var_141_float; // 0x594 Sub
	SetProperty(var_187_string, var_188_int); // 0x595 ObjFunc
	var_139_float = var_141_float; // 0x597 Mov
	return 6; // 0x598 Return
	
Label_1408:
	var_139_float = 0; // 0x580 MovI
	return 6; // 0x581 Return
}


func_1508(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x5e4 PushV
	var_38_bool = 0; // 0x5e5 PushV
	var_38_bool = 0; // 0x5e6 MovB
	var_39_int = 4; // 0x5e7 PushI
	var_40_bool = var_16_int != var_39_int; // 0x5e8 Neq
	if(var_40_bool == 0) goto Label_1518; // 0x5e9 JumpB
	var_41_int = 5; // 0x5ea PushI
	var_42_bool = var_16_int != var_41_int; // 0x5eb Neq
	if(var_42_bool == 0) goto Label_1518; // 0x5ec JumpB
	var_38_bool = 1; // 0x5ed MovB
	
Label_1518:
	if(var_38_bool == 0) goto Label_1537; // 0x5ee JumpB
	GetScene(var_28_object); // 0x5ef Func
	GetPosition(var_30_cvector); // 0x5f1 Func
	GetEyesHeight(var_31_float); // 0x5f3 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x5f5 PushE
	var_44_int = 2; // 0x5f6 PushI
	var_45_float = var_31_float / var_44_int; // 0x5f7 Div
	var_43_float = var_43_float + var_45_float; // 0x5f8 Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x5f9 PopE
	var_46_string = "scripted"; // 0x5fa PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x5fb PushVec
	var_48_string = "blood.xml"; // 0x5fc PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x5fd Func
	var_29_object = 0; // 0x5ff SetNull
	var_28_object = 0; // 0x600 SetNull
	
Label_1537:
	var_49_bool = var_15_object == 0; // 0x601 NullEq
	if(var_49_bool == 0) goto Label_1540; // 0x602 JumpB
	return 20; // 0x603 Return
	
Label_1540:
	GetSecondaryAnimationType(var_32_int); // 0x604 Func
	var_50_int = 0; // 0x606 PushI
	var_51_bool = var_32_int < var_50_int; // 0x607 LT
	if(var_51_bool == 0) goto Label_1546; // 0x608 JumpB
	return 20; // 0x609 Return
	
Label_1546:
	GetPosition(var_33_cvector); // 0x60a ObjFunc
	GetPosition(var_34_cvector); // 0x60c Func
	GetDirection(var_35_cvector); // 0x60e Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x610 Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x611 PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x612 PushE
	var_54_float = var_52_float * var_53_float; // 0x613 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x614 PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x615 PushE
	var_57_float = var_55_float * var_56_float; // 0x616 Mult
	var_58_int = var_54_float + var_57_float; // 0x617 Add
	var_59_int = 0; // 0x618 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x619 GE
	if(var_60_bool == 0) goto Label_1565; // 0x61a JumpB
	var_37_string = "fhit"; // 0x61b MovS
	goto Label_1566; // 0x61c Jump
	
Label_1566:
	var_61_string = "hit_react"; // 0x61e PushS
	var_62_string = "1"; // 0x61f PushS
	var_63_int = var_37_string + var_62_string; // 0x620 Add
	var_64_string = "2"; // 0x621 PushS
	var_65_int = var_37_string + var_64_string; // 0x622 Add
	var_66_int = -10; // 0x623 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x624 Func
	return 20; // 0x626 Return
	
Label_1565:
	var_37_string = "bhit"; // 0x61d MovS
}


func_1000(var_0_bool, var_1_bool, var_2_bool, var_65_object)
{
	var_66_cvector = CVector(0,0,0); var_67_float = 0; var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x3e8 PushV
	var_0_bool = var_65_object; // 0x3e9 TMov
	var_76_cvector = CVector(0,0,0); var_77_float = 0; // 0x3ea PushV
	var_77_float = 1.74533; // 0x3eb MovF
	func_970(var_76_cvector, var_77_float); // 0x3ec Call
	var_71_cvector = var_76_cvector; // 0x3ed Mov
	var_72_float = var_71_cvector | var_71_cvector; // 0x3ef Or2
	var_106_float = 10000.0; // 0x3f0 PushF
	var_107_bool = var_72_float < var_106_float; // 0x3f1 LT
	if(var_107_bool == 0) goto Label_1020; // 0x3f2 JumpB
	var_108_string = "Can't retreat, distance: "; // 0x3f3 PushS
	var_109_float = sqrt(var_72_float); // 0x3f4 Sqrt
	var_110_int = var_108_string + var_109_float; // 0x3f5 Add
	Trace(var_110_int); // 0x3f6 Func
	var_111_float = 0.5; // 0x3f8 PushF
	Sleep(var_111_float); // 0x3f9 Func
	return 10; // 0x3fb Return
	
Label_1020:
	var_112_float = GetByIndex(var_71_cvector, 0); // 0x3fc PushE
	var_113_float = GetByIndex(var_71_cvector, 2); // 0x3fd PushE
	Rotate(var_112_float, var_113_float); // 0x3fe Func
	var_114_cvector = CVector(0,0,0); // 0x400 PushV
	func_1326(var_114_cvector); // 0x401 Call
	var_1_bool = var_114_cvector + var_71_cvector; // 0x403 Add2
	var_117_int = 120; // 0x404 PushI
	var_118_float = 0.5; // 0x405 PushF
	SetTimer(var_117_int, var_118_float); // 0x406 Func
	var_2_bool = 0; // 0x408 TMovB
	
Label_1033:
	var_119_int = 1; // 0x409 PushI
	MovePoint(var_119_int, var_119_int, var_73_bool); // 0x40a Func
	var_120_bool = var_73_bool; // 0x40c Push
	if(var_120_bool == 0) goto Label_1061; // 0x40d JumpB
	var_121_bool = var_0_bool == 0; // 0x40e NullEq
	if(var_121_bool == 0) goto Label_1042; // 0x40f JumpB
	goto Label_1063; // 0x410 Jump
	
Label_1063:
	return 10; // 0x427 Return
	
Label_1042:
	var_122_cvector = CVector(0,0,0); var_123_float = 0; // 0x412 PushV
	var_123_float = 2.61799; // 0x413 MovF
	func_970(var_122_cvector, var_123_float); // 0x414 Call
	var_74_cvector = var_122_cvector; // 0x415 Mov
	var_75_float = var_74_cvector | var_74_cvector; // 0x417 Or2
	var_124_float = 10000.0; // 0x418 PushF
	var_125_bool = var_75_float >= var_124_float; // 0x419 GE
	if(var_125_bool == 0) goto Label_1060; // 0x41a JumpB
	var_126_cvector = CVector(0,0,0); // 0x41b PushV
	func_1326(var_126_cvector); // 0x41c Call
	var_1_bool = var_126_cvector + var_74_cvector; // 0x41e Add2
	var_127_int = 120; // 0x41f PushI
	var_128_float = 0.5; // 0x420 PushF
	SetTimer(var_127_int, var_128_float); // 0x421 Func
	goto Label_1061; // 0x423 Jump
	
Label_1061:
	var_129_bool = var_2_bool == 0; // 0x425 Not
	if(var_129_bool == 0) goto Label_1033; // 0x426 JumpB
	
Label_1060:
	goto Label_1063; // 0x424 Jump
}


func_1132(var_0_bool, var_63_bool)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x46c PushV
	GetDirection(var_66_cvector); // 0x46d Func
	var_68_cvector = CVector(0,0,0); var_69_object = Obj(); // 0x46f PushV
	var_69_object = var_0_bool; // 0x470 MovT
	func_1331(var_69_object); // 0x471 Call
	var_67_cvector = var_68_cvector; // 0x472 Mov
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x474 PushV
	var_75_cvector = var_66_cvector; // 0x475 Mov
	var_76_cvector = var_67_cvector; // 0x476 Mov
	func_1601(var_74_float, var_75_cvector, var_76_cvector); // 0x477 Call
	var_82_float = -0.34202; // 0x479 PushF
	var_63_bool = var_74_float >= var_82_float; // 0x47a GE2
	return 4; // 0x47b Return
}


func_1774()
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; // 0x6ee PushV
	var_18_int = 0; // 0x6ef PushI
	ClearSubContainer(var_18_int); // 0x6f0 Func
	var_19_int = 0; var_20_int = 0; // 0x6f2 PushV
	var_19_int = 0; // 0x6f3 MovI
	var_21_int = 3; // 0x6f4 PushI
	var_22_int = 0; // 0x6f5 PushV
	func_1609(var_22_int); // 0x6f6 Call
	var_28_int = 5; // 0x6f8 PushI
	var_29_float = var_22_int * var_28_int; // 0x6f9 Mult
	var_20_int = var_21_int + var_29_float; // 0x6fa Add2
	func_1744(var_19_int, var_20_int); // 0x6fb Call
	var_48_int = 4; // 0x6fd PushI
	irand(var_17_int, var_48_int); // 0x6fe Func
	var_49_int = 0; // 0x700 PushI
	var_50_bool = var_17_int == var_49_int; // 0x701 Eq
	if(var_50_bool == 0) goto Label_1803; // 0x702 JumpB
	var_51_int = 0; var_52_string = ""; // 0x703 PushV
	var_52_string = "flower"; // 0x704 MovS
	func_1818(var_51_int, var_52_string); // 0x705 Call
	var_55_int = 0; // 0x707 PushI
	var_56_int = 1; // 0x708 PushI
	AddItem(var_16_bool, var_51_int, var_55_int, var_56_int); // 0x709 Func
	
Label_1803:
	var_57_int = 5; // 0x70b PushI
	irand(var_17_int, var_57_int); // 0x70c Func
	var_58_int = 0; // 0x70e PushI
	var_59_bool = var_17_int == var_58_int; // 0x70f Eq
	if(var_59_bool == 0) goto Label_1817; // 0x710 JumpB
	var_60_int = 0; var_61_string = ""; // 0x711 PushV
	var_61_string = "needle"; // 0x712 MovS
	func_1818(var_60_int, var_61_string); // 0x713 Call
	var_62_int = 0; // 0x715 PushI
	var_63_int = 1; // 0x716 PushI
	AddItem(var_16_bool, var_60_int, var_62_int, var_63_int); // 0x717 Func
	
Label_1817:
	return 4; // 0x719 Return
}


func_1653(var_113_string, var_114_int)
{
	var_115_string = ""; var_116_string = ""; // 0x675 PushV
	var_116_string = "idle"; // 0x676 MovS
	var_117_int = var_114_int; // 0x677 Push
	if(var_117_int == 0) goto Label_1658; // 0x678 JumpB
	var_116_string = var_116_string + var_114_int; // 0x679 Add2
	
Label_1658:
	var_113_string = var_116_string; // 0x67a Mov
	return 2; // 0x67b Return
}


func_376(var_0_bool, var_1_bool)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_bool = 0; var_73_object = Obj(); var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_bool = 0; var_80_object = Obj(); var_81_bool = 0; // 0x178 PushV
	var_0_bool = 0; // 0x179 TMovB
	var_1_bool = 0; // 0x17a TMovB
	var_82_float = 0.5; // 0x17b PushF
	rand(var_75_float, var_82_float); // 0x17c Func
	Sleep(var_75_float); // 0x17e Func
	
Label_384:
	var_83_bool = var_0_bool == 0; // 0x180 Not
	if(var_83_bool == 0) goto Label_432; // 0x181 JumpB
	var_84_bool = var_1_bool == 0; // 0x182 Not
	if(var_84_bool == 0) goto Label_404; // 0x183 JumpB
	
Label_388:
	GetPosition(var_77_cvector); // 0x184 Func
	GetCameraFarDistance(var_78_float); // 0x186 Func
	var_85_float = 2.5; // 0x188 PushF
	var_78_float = var_78_float * var_85_float; // 0x189 Mult2
	GetRandomPFPointInCircle(var_76_cvector, var_77_cvector, var_78_float, var_79_bool); // 0x18a Func
	var_86_bool = var_79_bool; // 0x18c Push
	if(var_86_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_403; // 0x18e Jump
	
Label_403:
	goto Label_405; // 0x193 Jump
	
Label_405:
	FindShiftedPathTo(var_80_object, var_76_cvector); // 0x195 Func
	var_87_bool = var_80_object != 0; // 0x197 NullNeq
	if(var_87_bool == 0) goto Label_427; // 0x198 JumpB
	RotatePath(var_80_object, var_81_bool); // 0x199 Func
	var_88_bool = var_81_bool; // 0x19b Push
	if(var_88_bool == 0) goto Label_426; // 0x19c JumpB
	var_89_bool = 0; // 0x19d PushV
	func_454(var_89_bool); // 0x19e Call
	FollowPath(var_80_object, var_89_bool, var_81_bool); // 0x1a0 Func
	var_80_object = 0; // 0x1a2 SetNull
	var_90_bool = var_81_bool; // 0x1a3 Push
	if(var_90_bool == 0) goto Label_426; // 0x1a4 JumpB
	TaskCall(2); // 0x1a6 TaskCall
	func_571(); // 0x1a7 Call
	TaskReturn(); // 0x1a8 TaskReturn
	
Label_426:
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_80_object = 0; // 0x1ae SetNull
	goto Label_384; // 0x1af Jump
	
Label_427:
	var_140_int = 1; // 0x1ab PushI
	Sleep(var_140_int); // 0x1ac Func
	
Label_399:
	var_141_int = 1; // 0x18f PushI
	Sleep(var_141_int); // 0x190 Func
	goto Label_388; // 0x192 Jump
	
Label_404:
	var_1_bool = 0; // 0x194 TMovB
	
Label_432:
	return 14; // 0x1b0 Return
}


func_1660(var_107_int)
{
	var_108_int = 0; var_109_bool = 0; var_110_int = 0; var_111_bool = 0; // 0x67c PushV
	var_110_int = 0; // 0x67d MovI
	
Label_1662:
	var_112_string = "all"; // 0x67e PushS
	var_113_string = ""; var_114_int = 0; // 0x67f PushV
	var_114_int = var_110_int; // 0x680 Mov
	func_1653(var_113_string, var_114_int); // 0x681 Call
	HasAnimation(var_111_bool, var_112_string, var_113_string); // 0x683 Func
	var_118_bool = var_111_bool == 0; // 0x685 Not
	if(var_118_bool == 0) goto Label_1672; // 0x686 JumpB
	goto Label_1675; // 0x687 Jump
	
Label_1675:
	var_107_int = var_110_int; // 0x68b Mov
	return 4; // 0x68c Return
	
Label_1672:
	var_119_int = 1; // 0x688 PushI
	var_110_int = var_110_int + var_119_int; // 0x689 Add2
	goto Label_1662; // 0x68a Jump
}


