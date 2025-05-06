task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_object; // 0x11 Mov
	func_1955(var_15_object); // 0x12 Call
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_object; // 0x19 Mov
	func_1958(var_18_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1964(); // 0x1e Call
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
	func_1955(var_15_object); // 0xaf Call
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
	func_1958(var_21_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xc0 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xc1 PushV
	var_15_object = var_11_object; // 0xc2 Mov
	func_1914(var_14_int, var_15_object); // 0xc3 Call
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
	func_1924(var_55_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xd4 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0xd5 PushV
	var_16_object = var_11_bool; // 0xd6 Mov
	var_17_object = var_12_object; // 0xd7 Mov
	func_1982(var_17_object); // 0xd8 Call
	if(var_15_bool == 0) goto Label_237; // 0xda JumpB
	var_18_int = 0; var_19_object = Obj(); // 0xdb PushV
	var_19_object = var_11_bool; // 0xdc Mov
	func_1932(var_18_int, var_19_object); // 0xdd Call
	var_14_int = var_18_int; // 0xde Mov
	var_56_int = 0; // 0xe0 PushI
	var_57_bool = var_14_int > var_56_int; // 0xe1 GT
	if(var_57_bool == 0) goto Label_237; // 0xe2 JumpB
	var_58_int = 1; // 0xe3 PushI
	var_59_bool = var_14_int > var_58_int; // 0xe4 GT
	if(var_59_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_14_int); // 0xe7 Call
	
Label_233:
	var_61_object = Obj(); // 0xe9 PushV
	var_61_object = var_11_bool; // 0xea Mov
	func_1939(var_61_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xee PushV
	var_14_int = 0; var_15_object = Obj(); // 0xef PushV
	var_15_object = var_11_object; // 0xf0 Mov
	func_1945(var_15_object); // 0xf1 Call
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
	func_1948(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x102 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x103 PushV
	var_16_string = var_12_object; // 0x104 Mov
	var_17_object = var_11_bool; // 0x105 Mov
	func_1950(var_17_object); // 0x106 Call
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
	func_1953(); // 0x115 Call
	
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
	func_1964(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object); // 0x149 Call
	var_13_object = Obj(); // 0x14b PushV
	var_13_object = var_11_object; // 0x14c Mov
	func_1859(); // 0x14d Call
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
	func_1955(var_15_object); // 0x1cb Call
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
	func_1958(var_20_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x1dc PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1dd PushV
	var_15_object = var_11_object; // 0x1de Mov
	func_1914(var_14_int, var_15_object); // 0x1df Call
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
	func_1924(var_54_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x1f0 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x1f1 PushV
	var_16_object = var_11_bool; // 0x1f2 Mov
	var_17_object = var_12_object; // 0x1f3 Mov
	func_1982(var_17_object); // 0x1f4 Call
	if(var_15_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_18_int = 0; var_19_object = Obj(); // 0x1f7 PushV
	var_19_object = var_11_bool; // 0x1f8 Mov
	func_1932(var_18_int, var_19_object); // 0x1f9 Call
	var_14_int = var_18_int; // 0x1fa Mov
	var_56_int = 0; // 0x1fc PushI
	var_57_bool = var_14_int > var_56_int; // 0x1fd GT
	if(var_57_bool == 0) goto Label_521; // 0x1fe JumpB
	var_58_int = 1; // 0x1ff PushI
	var_59_bool = var_14_int > var_58_int; // 0x200 GT
	if(var_59_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_60_object = Obj(); // 0x205 PushV
	var_60_object = var_11_bool; // 0x206 Mov
	func_1939(var_60_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x20a PushV
	var_14_int = 0; var_15_object = Obj(); // 0x20b PushV
	var_15_object = var_11_object; // 0x20c Mov
	func_1945(var_15_object); // 0x20d Call
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
	func_1948(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x21e PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x21f PushV
	var_16_string = var_12_object; // 0x220 Mov
	var_17_object = var_11_bool; // 0x221 Mov
	func_1950(var_17_object); // 0x222 Call
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
	func_1953(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_640(); // 0x235 Call
	func_1964(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2bd PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2be PushV
	var_15_object = var_11_object; // 0x2bf Mov
	func_1955(var_15_object); // 0x2c0 Call
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
	func_1958(var_22_object); // 0x2ce Call
	
Label_720:
	return 2; // 0x2d0 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2d1 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2d2 PushV
	var_15_object = var_11_object; // 0x2d3 Mov
	func_1914(var_14_int, var_15_object); // 0x2d4 Call
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
	func_1924(var_56_object); // 0x2e2 Call
	
Label_740:
	return 2; // 0x2e4 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x2e5 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x2e6 PushV
	var_16_object = var_11_bool; // 0x2e7 Mov
	var_17_object = var_12_object; // 0x2e8 Mov
	func_1982(var_17_object); // 0x2e9 Call
	if(var_15_bool == 0) goto Label_766; // 0x2eb JumpB
	var_18_int = 0; var_19_object = Obj(); // 0x2ec PushV
	var_19_object = var_11_bool; // 0x2ed Mov
	func_1932(var_18_int, var_19_object); // 0x2ee Call
	var_14_int = var_18_int; // 0x2ef Mov
	var_56_int = 0; // 0x2f1 PushI
	var_57_bool = var_14_int > var_56_int; // 0x2f2 GT
	if(var_57_bool == 0) goto Label_766; // 0x2f3 JumpB
	var_58_int = 1; // 0x2f4 PushI
	var_59_bool = var_14_int > var_58_int; // 0x2f5 GT
	if(var_59_bool == 0) goto Label_762; // 0x2f6 JumpB
	func_809(); // 0x2f8 Call
	
Label_762:
	var_62_object = Obj(); // 0x2fa PushV
	var_62_object = var_11_bool; // 0x2fb Mov
	func_1939(var_62_object); // 0x2fc Call
	
Label_766:
	return 2; // 0x2fe Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2ff PushV
	var_14_int = 0; var_15_object = Obj(); // 0x300 PushV
	var_15_object = var_11_object; // 0x301 Mov
	func_1945(var_15_object); // 0x302 Call
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
	func_1948(); // 0x310 Call
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x313 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x314 PushV
	var_16_string = var_12_object; // 0x315 Mov
	var_17_object = var_11_bool; // 0x316 Mov
	func_1950(var_17_object); // 0x317 Call
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
	func_1953(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_809(); // 0x336 Call
	var_14_object = Obj(); // 0x338 PushV
	var_14_object = var_11_object; // 0x339 Mov
	func_1859(); // 0x33a Call
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
	func_1666(var_18_bool, var_19_object); // 0x344 Call
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
	func_1821(var_61_float, var_62_cvector, var_63_cvector); // 0x356 Call
	var_85_float = 0.5; // 0x358 PushF
	var_86_bool = var_61_float < var_85_float; // 0x359 LT
	if(var_86_bool == 0) goto Label_863; // 0x35a JumpB
	var_87_object = Obj(); // 0x35b PushV
	var_87_object = var_0_bool; // 0x35c MovT
	func_1757(); // 0x35d Call
	
Label_863:
	return 4; // 0x35f Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_809(); // 0x361 Call
	func_1964(); // 0x364 Call
	return 0; // 0x366 Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1507(var_10_object); // 0x561 Call
	func_1964(); // 0x564 Call
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
	func_1859(); // 0x5f0 Call
	return 0; // 0x5f2 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x736 PushV
	var_15_string = "health"; // 0x737 PushS
	var_16_bool = var_12_string == var_15_string; // 0x738 Eq
	if(var_16_bool == 0) goto Label_1858; // 0x739 JumpB
	var_17_string = "health"; // 0x73a PushS
	GetProperty(var_17_string, var_14_float); // 0x73b Func
	var_18_int = 0; // 0x73d PushI
	var_19_bool = var_14_float <= var_18_int; // 0x73e LE
	if(var_19_bool == 0) goto Label_1858; // 0x73f JumpB
	SignalDeath(var_11_object); // 0x740 Func
	
Label_1858:
	return 2; // 0x742 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x744 PushV
	var_12_object = var_11_object; // 0x745 Mov
	func_1838(var_12_object); // 0x746 Call
	return 0; // 0x748 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x74a PushV
	var_15_object = var_11_object; // 0x74b Mov
	var_16_int = var_12_int; // 0x74c Mov
	var_17_float = var_13_float; // 0x74d Mov
	func_1690(var_16_int, var_17_float); // 0x74e Call
	return 0; // 0x750 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_11_bool); // 0x95 Func
	func_1965(); // 0x98 Call
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


func_0(var_13_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_14_object = Obj(); // 0x2 PushV
	var_14_object = var_13_object; // 0x3 Mov
	func_33(var_14_object); // 0x4 Call
	var_64_object = Obj(); // 0x6 PushV
	var_64_object = var_13_object; // 0x7 Mov
	func_1985(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1666(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x682 PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x683 PushV
	var_21_object = var_17_object; // 0x684 Mov
	func_1630(var_20_bool, var_21_object); // 0x685 Call
	var_37_bool = var_20_bool == 0; // 0x687 Not
	if(var_37_bool == 0) goto Label_1675; // 0x688 JumpB
	var_16_bool = 0; // 0x689 MovB
	return 2; // 0x68a Return
	
Label_1675:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x68b PushV
	var_39_object = var_17_object; // 0x68c Mov
	var_40_string = "noaccess"; // 0x68d MovS
	func_1549(var_38_bool, var_39_object, var_40_string); // 0x68e Call
	var_47_bool = var_38_bool == 0; // 0x690 Not
	if(var_47_bool == 0) goto Label_1684; // 0x691 JumpB
	var_16_bool = 1; // 0x692 MovB
	return 2; // 0x693 Return
	
Label_1684:
	var_48_string = "noaccess"; // 0x694 PushS
	GetProperty(var_48_string, var_19_int); // 0x695 ObjFunc
	var_49_int = 0; // 0x697 PushI
	var_16_bool = var_19_int == var_49_int; // 0x698 Eq2
	return 2; // 0x699 Return
}


func_1924(var_63_object)
{
	var_64_object = Obj(); // 0x785 PushV
	var_64_object = var_63_object; // 0x786 Mov
	TaskCall(4); // 0x787 TaskCall
	func_871(var_64_object); // 0x788 Call
	TaskReturn(); // 0x789 TaskReturn
	return 0; // 0x78b Return
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
	func_1821(var_84_float, var_85_cvector, var_86_cvector); // 0x294 Call
	var_108_int = 0; // 0x296 PushI
	var_109_bool = var_84_float < var_108_int; // 0x297 LT
	if(var_109_bool == 0) goto Label_671; // 0x298 JumpB
	var_110_object = Obj(); // 0x299 PushV
	var_110_object = var_0_bool; // 0x29a MovT
	func_1757(); // 0x29b Call
	var_70_bool = 1; // 0x29d MovB
	goto Label_674; // 0x29e Jump
	
Label_674:
	var_119_bool = var_70_bool; // 0x2a2 Push
	if(var_119_bool == 0) goto Label_690; // 0x2a3 JumpB
	var_120_object = Obj(); // 0x2a4 PushV
	var_120_object = var_0_bool; // 0x2a5 MovT
	func_1757(); // 0x2a6 Call
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


func_1802(var_64_float, var_65_cvector, var_66_cvector)
{
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x70b PushE
	var_68_float = GetByIndex(var_66_cvector, 0); // 0x70c PushE
	var_69_float = var_67_float * var_68_float; // 0x70d Mult
	var_70_float = GetByIndex(var_65_cvector, 2); // 0x70e PushE
	var_71_float = GetByIndex(var_66_cvector, 2); // 0x70f PushE
	var_72_float = var_70_float * var_71_float; // 0x710 Mult
	var_64_float = var_69_float + var_72_float; // 0x711 Add2
	return 0; // 0x712 Return
}


func_1932(var_18_int, var_19_object)
{
	var_20_int = 0; var_21_object = Obj(); // 0x78d PushV
	var_21_object = var_19_object; // 0x78e Mov
	func_1914(var_20_int, var_21_object); // 0x78f Call
	var_18_int = var_20_int; // 0x790 Mov
	return 0; // 0x792 Return
}


func_1549(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x60d PushV
	var_43_string = "HasProperty"; // 0x60e PushS
	var_44_int = 2; // 0x60f PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x610 FuncExist
	var_46_bool = var_45_bool == 0; // 0x611 Not
	if(var_46_bool == 0) goto Label_1557; // 0x612 JumpB
	var_38_bool = 0; // 0x613 MovB
	return 2; // 0x614 Return
	
Label_1557:
	HasProperty(var_40_string, var_42_bool); // 0x615 ObjFunc
	var_38_bool = var_42_bool; // 0x617 Mov
	return 2; // 0x618 Return
}


func_1784(var_327_float, var_328_float, var_329_float)
{
	var_332_bool = var_328_float < var_329_float; // 0x6f9 LT
	if(var_332_bool == 0) goto Label_1789; // 0x6fa JumpB
	var_327_float = var_328_float; // 0x6fb Mov
	goto Label_1790; // 0x6fc Jump
	
Label_1790:
	return 0; // 0x6fe Return
	
Label_1789:
	var_327_float = var_329_float; // 0x6fd Mov
}


func_1530(var_163_string)
{
	var_163_string = "walk"; // 0x5fa MovS
	return 0; // 0x5fb Return
}


func_1939(var_62_object)
{
	var_63_object = Obj(); // 0x794 PushV
	var_63_object = var_62_object; // 0x795 Mov
	func_1924(var_63_object); // 0x796 Call
	return 0; // 0x798 Return
}


func_1811(var_73_float, var_74_cvector)
{
	var_75_float = GetByIndex(var_74_cvector, 0); // 0x714 PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x715 PushE
	var_77_float = var_75_float * var_76_float; // 0x716 Mult
	var_78_float = GetByIndex(var_74_cvector, 2); // 0x717 PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x718 PushE
	var_80_float = var_78_float * var_79_float; // 0x719 Mult
	var_81_int = var_77_float + var_80_float; // 0x71a Add
	var_73_float = sqrt(var_81_int); // 0x71b Sqrt2
	return 0; // 0x71c Return
}


func_1945(var_14_int)
{
	var_14_int = 0; // 0x79a MovI
	return 0; // 0x79b Return
}


func_1690(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x69a PushV
	var_38_bool = 0; // 0x69b PushV
	var_38_bool = 0; // 0x69c MovB
	var_39_int = 4; // 0x69d PushI
	var_40_bool = var_16_int != var_39_int; // 0x69e Neq
	if(var_40_bool == 0) goto Label_1700; // 0x69f JumpB
	var_41_int = 5; // 0x6a0 PushI
	var_42_bool = var_16_int != var_41_int; // 0x6a1 Neq
	if(var_42_bool == 0) goto Label_1700; // 0x6a2 JumpB
	var_38_bool = 1; // 0x6a3 MovB
	
Label_1700:
	if(var_38_bool == 0) goto Label_1719; // 0x6a4 JumpB
	GetScene(var_28_object); // 0x6a5 Func
	GetPosition(var_30_cvector); // 0x6a7 Func
	GetEyesHeight(var_31_float); // 0x6a9 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x6ab PushE
	var_44_int = 2; // 0x6ac PushI
	var_45_float = var_31_float / var_44_int; // 0x6ad Div
	var_43_float = var_43_float + var_45_float; // 0x6ae Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x6af PopE
	var_46_string = "scripted"; // 0x6b0 PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x6b1 PushVec
	var_48_string = "blood.xml"; // 0x6b2 PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x6b3 Func
	var_29_object = 0; // 0x6b5 SetNull
	var_28_object = 0; // 0x6b6 SetNull
	
Label_1719:
	var_49_bool = var_15_object == 0; // 0x6b7 NullEq
	if(var_49_bool == 0) goto Label_1722; // 0x6b8 JumpB
	return 20; // 0x6b9 Return
	
Label_1722:
	GetSecondaryAnimationType(var_32_int); // 0x6ba Func
	var_50_int = 0; // 0x6bc PushI
	var_51_bool = var_32_int < var_50_int; // 0x6bd LT
	if(var_51_bool == 0) goto Label_1728; // 0x6be JumpB
	return 20; // 0x6bf Return
	
Label_1728:
	GetPosition(var_33_cvector); // 0x6c0 ObjFunc
	GetPosition(var_34_cvector); // 0x6c2 Func
	GetDirection(var_35_cvector); // 0x6c4 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x6c6 Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x6c7 PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x6c8 PushE
	var_54_float = var_52_float * var_53_float; // 0x6c9 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x6ca PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x6cb PushE
	var_57_float = var_55_float * var_56_float; // 0x6cc Mult
	var_58_int = var_54_float + var_57_float; // 0x6cd Add
	var_59_int = 0; // 0x6ce PushI
	var_60_bool = var_58_int >= var_59_int; // 0x6cf GE
	if(var_60_bool == 0) goto Label_1747; // 0x6d0 JumpB
	var_37_string = "fhit"; // 0x6d1 MovS
	goto Label_1748; // 0x6d2 Jump
	
Label_1748:
	var_61_string = "hit_react"; // 0x6d4 PushS
	var_62_string = "1"; // 0x6d5 PushS
	var_63_int = var_37_string + var_62_string; // 0x6d6 Add
	var_64_string = "2"; // 0x6d7 PushS
	var_65_int = var_37_string + var_64_string; // 0x6d8 Add
	var_66_int = -10; // 0x6d9 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x6da Func
	return 20; // 0x6dc Return
	
Label_1747:
	var_37_string = "bhit"; // 0x6d3 MovS
}


func_1561(var_291_float, var_292_object, var_293_float, var_294_int)
{
	var_298_int = 0; var_299_string = ""; var_300_int = 0; var_301_float = 0; var_302_float = 0; var_303_float = 0; var_304_int = 0; var_305_string = ""; var_306_int = 0; var_307_float = 0; var_308_float = 0; var_309_float = 0; // 0x619 PushV
	var_310_bool = 0; var_311_object = Obj(); var_312_string = ""; // 0x61a PushV
	var_311_object = var_292_object; // 0x61b Mov
	var_312_string = "health"; // 0x61c MovS
	func_1549(var_310_bool, var_311_object, var_312_string); // 0x61d Call
	var_313_bool = var_310_bool == 0; // 0x61f Not
	if(var_313_bool == 0) goto Label_1571; // 0x620 JumpB
	var_291_float = 0.0; // 0x621 MovF
	return 12; // 0x622 Return
	
Label_1571:
	var_314_bool = 0; var_315_object = Obj(); var_316_string = ""; // 0x623 PushV
	var_315_object = var_292_object; // 0x624 Mov
	var_316_string = "armor"; // 0x625 MovS
	func_1549(var_314_bool, var_315_object, var_316_string); // 0x626 Call
	var_317_bool = var_314_bool == 0; // 0x628 Not
	if(var_317_bool == 0) goto Label_1580; // 0x629 JumpB
	var_304_int = 0; // 0x62a MovI
	goto Label_1583; // 0x62b Jump
	
Label_1583:
	var_318_string = "armor_"; // 0x62f PushS
	var_319_string = ""; var_320_int = 0; // 0x630 PushV
	var_320_int = var_294_int; // 0x631 Mov
	func_1534(var_319_string, var_320_int); // 0x632 Call
	var_305_string = var_318_string + var_319_string; // 0x634 Add2
	var_323_bool = 0; var_324_object = Obj(); var_325_string = ""; // 0x635 PushV
	var_324_object = var_292_object; // 0x636 Mov
	var_325_string = var_305_string; // 0x637 Mov
	func_1549(var_323_bool, var_324_object, var_325_string); // 0x638 Call
	var_326_bool = var_323_bool == 0; // 0x63a Not
	if(var_326_bool == 0) goto Label_1598; // 0x63b JumpB
	var_306_int = 0; // 0x63c MovI
	goto Label_1600; // 0x63d Jump
	
Label_1600:
	var_327_float = 0; var_328_float = 0; var_329_float = 0; // 0x640 PushV
	var_330_int = var_304_int + var_306_int; // 0x641 Add
	var_331_float = 100.0; // 0x642 PushF
	var_328_float = var_330_int / var_330_int; // 0x643 Div2
	var_329_float = 1; // 0x644 MovI
	func_1784(var_327_float, var_328_float, var_329_float); // 0x645 Call
	var_307_float = var_327_float; // 0x646 Mov
	var_333_string = "health"; // 0x648 PushS
	GetProperty(var_333_string, var_308_float); // 0x649 ObjFunc
	var_334_int = 1; // 0x64b PushI
	var_335_int = var_334_int - var_307_float; // 0x64c Sub
	var_309_float = var_293_float * var_335_int; // 0x64d Mult2
	var_336_string = "health"; // 0x64e PushS
	var_337_float = 0; var_338_float = 0; var_339_float = 0; var_340_float = 0; // 0x64f PushV
	var_338_float = var_308_float - var_309_float; // 0x650 Sub2
	var_339_float = 0; // 0x651 MovI
	var_340_float = 1; // 0x652 MovI
	func_1791(var_337_float, var_338_float, var_339_float, var_340_float); // 0x653 Call
	SetProperty(var_336_string, var_337_float); // 0x655 ObjFunc
	var_291_float = var_309_float; // 0x657 Mov
	return 12; // 0x658 Return
	
Label_1598:
	GetProperty(var_305_string, var_306_int); // 0x63e ObjFunc
	
Label_1580:
	var_343_string = "armor"; // 0x62c PushS
	GetProperty(var_343_string, var_304_int); // 0x62d ObjFunc
}


func_1306(var_0_bool)
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); // 0x51a PushV
	Face(var_0_bool); // 0x51b Func
	var_240_string = "all"; // 0x51d PushS
	var_241_string = "bjump"; // 0x51e PushS
	PlayAnimation(var_240_string, var_241_string); // 0x51f Func
	GetPFPosition(var_238_cvector); // 0x521 TObjFunc
	GetPFPosition(var_239_cvector); // 0x523 Func
	WaitForAnimEnd(); // 0x525 Func
	StopAsync(); // 0x527 Func
	var_242_cvector = CVector(0.0, 0.0, 0.0); // 0x529 PushVec
	SetSpeed(var_242_cvector); // 0x52a Func
	return 4; // 0x52c Return
}


func_1948()
{
	return 0; // 0x79d Return
}


func_1821(var_61_float, var_62_cvector, var_63_cvector)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x71e PushV
	var_65_cvector = var_62_cvector; // 0x71f Mov
	var_66_cvector = var_63_cvector; // 0x720 Mov
	func_1802(var_64_float, var_65_cvector, var_66_cvector); // 0x721 Call
	var_73_float = 0; var_74_cvector = CVector(0,0,0); // 0x723 PushV
	var_74_cvector = var_62_cvector; // 0x724 Mov
	func_1811(var_73_float, var_74_cvector); // 0x725 Call
	var_82_float = 0; var_83_cvector = CVector(0,0,0); // 0x727 PushV
	var_83_cvector = var_63_cvector; // 0x728 Mov
	func_1811(var_82_float, var_83_cvector); // 0x729 Call
	var_84_float = var_73_float * var_82_float; // 0x72b Mult
	var_61_float = var_64_float / var_64_float; // 0x72c Div2
	return 0; // 0x72d Return
}


func_1950(var_15_int)
{
	var_15_int = 0; // 0x79f MovI
	return 0; // 0x7a0 Return
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


func_1955(var_14_int)
{
	var_14_int = 2; // 0x7a4 MovI
	return 0; // 0x7a5 Return
}


func_163()
{
	var_13_bool = 0; // 0xa3 PushV
	func_1768(var_13_bool); // 0xa4 Call
	var_16_bool = var_13_bool == 0; // 0xa6 Not
	if(var_16_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1964(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_1958(var_22_object)
{
	var_23_object = Obj(); // 0x7a7 PushV
	var_23_object = var_22_object; // 0x7a8 Mov
	func_1969(var_23_object); // 0x7a9 Call
	return 0; // 0x7ab Return
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


func_1964()
{
	return 0; // 0x7ac Return
}


func_1965()
{
	var_12_bool = GlobalVars[0]; // 0x7ad PushGE
	var_12_bool = 0; // 0x7ae MovB
	GlobalVars[0] = var_12_bool; // 0x7af PopGE
	return 0; // 0x7b0 Return
}


func_1325(var_0_bool, var_197_bool)
{
	var_198_bool = 0; var_199_bool = 0; // 0x52d PushV
	var_200_string = "IsAttacking"; // 0x52e PushS
	var_201_int = 1; // 0x52f PushI
	var_202_bool = IsFuncExist(var_0_bool, var_200_string, var_201_int); // 0x530 FuncExist
	if(var_202_bool == 0) goto Label_1334; // 0x531 JumpB
	IsAttacking(var_199_bool); // 0x532 TObjFunc
	var_197_bool = var_199_bool; // 0x534 Mov
	return 2; // 0x535 Return
	
Label_1334:
	var_197_bool = 0; // 0x536 MovB
	return 2; // 0x537 Return
}


func_1838(var_12_object)
{
	var_13_object = Obj(); // 0x72f PushV
	var_13_object = var_12_object; // 0x730 Mov
	TaskCall(0); // 0x731 TaskCall
	func_0(var_13_object); // 0x732 Call
	TaskReturn(); // 0x733 TaskReturn
	return 0; // 0x735 Return
}


func_1969(var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0x7b1 PushV
	var_26_bool = GlobalVars[0]; // 0x7b2 PushGE
	if(var_26_bool == 0) goto Label_1979; // 0x7b3 JumpB
	IsOverrideActive(var_25_bool); // 0x7b4 Func
	var_27_bool = var_25_bool == 0; // 0x7b6 Not
	if(var_27_bool == 0) goto Label_1978; // 0x7b7 JumpB
	WorkWithCorpse(var_23_object); // 0x7b8 Func
	
Label_1978:
	return 2; // 0x7ba Return
	
Label_1979:
	return 2; // 0x7bb Return
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
	func_1773(var_71_object); // 0x2ba Call
	return 0; // 0x2bc Return
}


func_1336(var_2_bool, var_4_object)
{
	var_259_float = 0; var_260_int = 0; var_261_float = 0; var_262_int = 0; // 0x538 PushV
	var_263_bool = var_2_bool == 0; // 0x539 Not
	if(var_263_bool == 0) goto Label_1340; // 0x53a JumpB
	return 4; // 0x53b Return
	
Label_1340:
	var_264_object = var_4_object; // 0x53c PushT
	if(var_264_object == 0) goto Label_1348; // 0x53d JumpB
	var_265_int = -1; // 0x53e PushI
	var_4_object = var_4_object + var_265_int; // 0x53f Add2
	var_266_int = 0; // 0x540 PushI
	var_267_bool = var_4_object > var_266_int; // 0x541 GT
	if(var_267_bool == 0) goto Label_1348; // 0x542 JumpB
	return 4; // 0x543 Return
	
Label_1348:
	rand(var_261_float); // 0x544 Func
	var_268_float = 0; // 0x546 PushV
	func_1374(var_268_float); // 0x547 Call
	var_269_bool = var_261_float < var_268_float; // 0x549 LT
	if(var_269_bool == 0) goto Label_1367; // 0x54a JumpB
	irand(var_262_int, var_261_float); // 0x54b Func
	var_270_int = 1; // 0x54d PushI
	var_262_int = var_262_int + var_270_int; // 0x54e Add2
	var_271_string = "attack"; // 0x54f PushS
	var_272_int = var_271_string + var_262_int; // 0x550 Add
	Speak(var_272_int); // 0x551 Func
	var_273_int = 0; // 0x553 PushV
	func_1372(var_273_int); // 0x554 Call
	var_4_object = var_273_int; // 0x555 TMov
	
Label_1367:
	return 4; // 0x557 Return
}


func_571()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_54_bool = 0; // 0x23e PushV
	func_1768(var_54_bool); // 0x23f Call
	var_55_bool = var_54_bool == 0; // 0x241 Not
	if(var_55_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_56_int = 0; // 0x244 PushV
	func_1880(var_56_int); // 0x245 Call
	var_47_int = var_56_int; // 0x246 Mov
	var_48_int = 0; // 0x248 MovI
	
Label_585:
	var_69_bool = 0; // 0x249 PushV
	var_69_bool = 0; // 0x24a MovB
	var_70_int = 5; // 0x24b PushI
	var_71_bool = var_48_int < var_70_int; // 0x24c LT
	if(var_71_bool == 0) goto Label_595; // 0x24d JumpB
	var_72_bool = 0; // 0x24e PushV
	func_1768(var_72_bool); // 0x24f Call
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
	func_1873(var_78_string, var_79_int); // 0x261 Call
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


func_1209(var_363_bool, var_364_float)
{
	var_365_float = 0; var_366_bool = 0; var_367_float = 0; var_368_bool = 0; // 0x4b9 PushV
	rand(var_367_float); // 0x4ba Func
	var_369_bool = var_367_float < var_364_float; // 0x4bc LT
	if(var_369_bool == 0) goto Label_1229; // 0x4bd JumpB
	
Label_1214:
	IsAnimationPlaying(var_368_bool); // 0x4be Func
	var_370_bool = var_368_bool == 0; // 0x4c0 Not
	if(var_370_bool == 0) goto Label_1219; // 0x4c1 JumpB
	goto Label_1228; // 0x4c2 Jump
	
Label_1228:
	goto Label_1231; // 0x4cc Jump
	
Label_1231:
	var_363_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1219:
	var_371_bool = 0; // 0x4c3 PushV
	func_1273(var_368_bool, var_371_bool); // 0x4c4 Call
	if(var_371_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_363_bool = 1; // 0x4c7 MovB
	return 4; // 0x4c8 Return
	
Label_1225:
	sync(); // 0x4c9 Func
	goto Label_1214; // 0x4cb Jump
	
Label_1229:
	WaitForAnimEnd(); // 0x4cd Func
}


func_1980(var_56_bool)
{
	var_56_bool = 0; // 0x7bc MovB
	return 0; // 0x7bd Return
}


func_1982(var_15_bool)
{
	var_15_bool = 0; // 0x7bf MovB
	return 0; // 0x7c0 Return
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


func_1985()
{
	var_65_bool = GlobalVars[0]; // 0x7c2 PushGE
	var_65_bool = 1; // 0x7c3 MovB
	GlobalVars[0] = var_65_bool; // 0x7c4 PopGE
	var_66_int = 50; // 0x7c5 PushI
	var_67_int = 40; // 0x7c6 PushI
	SetRTEnvelope(var_66_int, var_67_int); // 0x7c7 Func
	return 0; // 0x7c9 Return
}


func_1090(var_0_bool, var_277_float, var_278_int)
{
	var_279_object = Obj(); var_280_float = 0; var_281_float = 0; var_282_object = Obj(); var_283_float = 0; var_284_float = 0; // 0x442 PushV
	var_285_float = 0.9; // 0x443 PushF
	var_286_float = var_277_float * var_285_float; // 0x444 Mult
	GetVictim(var_286_float, var_282_object); // 0x445 Func
	ReportAttack(var_0_bool); // 0x447 Func
	var_287_bool = var_282_object == var_0_bool; // 0x449 Eq
	if(var_287_bool == 0) goto Label_1127; // 0x44a JumpB
	var_288_float = 0; var_289_object = Obj(); var_290_int = 0; // 0x44b PushV
	var_289_object = var_282_object; // 0x44c Mov
	var_290_int = var_278_int; // 0x44d Mov
	func_879(var_290_int); // 0x44e Call
	var_283_float = var_288_float; // 0x44f Mov
	var_291_float = 0; var_292_object = Obj(); var_293_float = 0; var_294_int = 0; // 0x451 PushV
	var_292_object = var_282_object; // 0x452 Mov
	var_293_float = var_283_float; // 0x453 Mov
	var_295_int = 0; var_296_object = Obj(); var_297_int = 0; // 0x454 PushV
	var_296_object = var_282_object; // 0x455 Mov
	var_297_int = var_278_int; // 0x456 Mov
	func_882(var_297_int); // 0x457 Call
	var_294_int = var_295_int; // 0x458 Mov
	func_1561(var_291_float, var_292_object, var_293_float, var_294_int); // 0x45a Call
	var_284_float = var_291_float; // 0x45b Mov
	var_344_int = 0; // 0x45d PushV
	func_1368(var_344_int); // 0x45e Call
	ReportHit(var_0_bool, var_344_int, var_284_float, var_283_float); // 0x460 Func
	var_345_object = Obj(); var_346_float = 0; // 0x462 PushV
	var_345_object = var_282_object; // 0x463 Mov
	var_346_float = var_284_float; // 0x464 Mov
	func_1370(); // 0x465 Call
	
Label_1127:
	return 6; // 0x467 Return
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
	func_1666(var_17_bool, var_18_object); // 0x153 Call
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
	func_1897(var_55_object); // 0x162 Call
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
	func_1906(var_62_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_127_int = 110; // 0x173 PushI
	var_128_float = 10.0; // 0x174 PushF
	SetTimer(var_127_int, var_128_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_1873(var_62_string, var_63_int)
{
	var_64_string = ""; var_65_string = ""; // 0x751 PushV
	var_65_string = "idle"; // 0x752 MovS
	var_66_int = var_63_int; // 0x753 Push
	if(var_66_int == 0) goto Label_1878; // 0x754 JumpB
	var_65_string = var_65_string + var_63_int; // 0x755 Add2
	
Label_1878:
	var_62_string = var_65_string; // 0x756 Mov
	return 2; // 0x757 Return
}


func_1233(var_0_bool, var_205_bool, var_206_float)
{
	var_207_bool = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_bool = 0; var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_float = 0; // 0x4d1 PushV
	
Label_1234:
	IsAnimationPlaying(var_212_bool); // 0x4d2 Func
	var_217_bool = var_212_bool == 0; // 0x4d4 Not
	if(var_217_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1271; // 0x4d6 Jump
	
Label_1271:
	var_205_bool = 0; // 0x4f7 MovB
	return 10; // 0x4f8 Return
	
Label_1239:
	var_218_bool = 0; // 0x4d7 PushV
	func_1273(var_216_float, var_218_bool); // 0x4d8 Call
	if(var_218_bool == 0) goto Label_1245; // 0x4da JumpB
	var_205_bool = 1; // 0x4db MovB
	return 10; // 0x4dc Return
	
Label_1245:
	var_243_bool = 0; var_244_object = Obj(); // 0x4dd PushV
	var_244_object = var_0_bool; // 0x4de MovT
	func_1666(var_243_bool, var_244_object); // 0x4df Call
	var_245_bool = var_243_bool == 0; // 0x4e1 Not
	if(var_245_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_205_bool = 0; // 0x4e3 MovB
	return 10; // 0x4e4 Return
	
Label_1253:
	GetPFPosition(var_213_cvector); // 0x4e5 TObjFunc
	GetPFPosition(var_214_cvector); // 0x4e7 Func
	var_215_cvector = var_213_cvector - var_214_cvector; // 0x4e9 Sub2
	var_216_float = var_215_cvector | var_215_cvector; // 0x4ea Or2
	var_246_float = var_206_float * var_206_float; // 0x4eb Mult
	var_247_bool = var_216_float < var_246_float; // 0x4ec LT
	if(var_247_bool == 0) goto Label_1268; // 0x4ed JumpB
	var_248_bool = 0; var_249_float = 0; // 0x4ee PushV
	var_249_float = var_206_float; // 0x4ef Mov
	func_1129(var_216_float, var_248_bool, var_249_float); // 0x4f0 Call
	var_205_bool = 1; // 0x4f2 MovB
	return 10; // 0x4f3 Return
	
Label_1268:
	sync(); // 0x4f4 Func
	goto Label_1234; // 0x4f6 Jump
}


func_1880(var_56_int)
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x758 PushV
	var_59_int = 0; // 0x759 MovI
	
Label_1882:
	var_61_string = "all"; // 0x75a PushS
	var_62_string = ""; var_63_int = 0; // 0x75b PushV
	var_63_int = var_59_int; // 0x75c Mov
	func_1873(var_62_string, var_63_int); // 0x75d Call
	HasAnimation(var_60_bool, var_61_string, var_62_string); // 0x75f Func
	var_67_bool = var_60_bool == 0; // 0x761 Not
	if(var_67_bool == 0) goto Label_1892; // 0x762 JumpB
	goto Label_1895; // 0x763 Jump
	
Label_1895:
	var_56_int = var_59_int; // 0x767 Mov
	return 4; // 0x768 Return
	
Label_1892:
	var_68_int = 1; // 0x764 PushI
	var_59_int = var_59_int + var_68_int; // 0x765 Add2
	goto Label_1882; // 0x766 Jump
}


func_1368(var_344_int)
{
	var_344_int = 0; // 0x558 MovI
	return 0; // 0x559 Return
}


func_1370()
{
	return 0; // 0x55b Return
}


func_1625(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x659 PushV
	IsDead(var_34_bool); // 0x65a ObjFunc
	var_31_bool = var_34_bool; // 0x65c Mov
	return 2; // 0x65d Return
}


func_1372(var_273_int)
{
	var_273_int = 1; // 0x55c MovI
	return 0; // 0x55d Return
}


func_1757()
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x6dd PushV
	GetPosition(var_91_cvector); // 0x6de ObjFunc
	GetPosition(var_92_cvector); // 0x6e0 Func
	var_93_cvector = var_91_cvector - var_92_cvector; // 0x6e2 Sub2
	var_94_float = GetByIndex(var_93_cvector, 0); // 0x6e3 PushE
	var_95_float = GetByIndex(var_93_cvector, 2); // 0x6e4 PushE
	RotateAsync(var_94_float, var_95_float); // 0x6e5 Func
	return 6; // 0x6e7 Return
}


func_1374(var_268_float)
{
	var_268_float = 0.5; // 0x55e MovF
	return 0; // 0x55f Return
}


func_1630(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x65e PushV
	var_26_bool = var_21_object == 0; // 0x65f NullEq
	if(var_26_bool == 0) goto Label_1635; // 0x660 JumpB
	var_20_bool = 0; // 0x661 MovB
	return 4; // 0x662 Return
	
Label_1635:
	var_27_bool = 0; // 0x663 PushV
	var_27_bool = 0; // 0x664 MovB
	var_28_string = "IsDead"; // 0x665 PushS
	var_29_int = 1; // 0x666 PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x667 FuncExist
	if(var_30_bool == 0) goto Label_1647; // 0x668 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x669 PushV
	var_32_object = var_21_object; // 0x66a Mov
	func_1625(var_32_object); // 0x66b Call
	if(var_31_bool == 0) goto Label_1647; // 0x66d JumpB
	var_27_bool = 1; // 0x66e MovB
	
Label_1647:
	if(var_27_bool == 0) goto Label_1650; // 0x66f JumpB
	var_20_bool = 0; // 0x670 MovB
	return 4; // 0x671 Return
	
Label_1650:
	GetScene(var_24_object); // 0x672 Func
	var_35_bool = var_24_object == 0; // 0x674 NullEq
	if(var_35_bool == 0) goto Label_1656; // 0x675 JumpB
	var_20_bool = 0; // 0x676 MovB
	return 4; // 0x677 Return
	
Label_1656:
	GetScene(var_25_object); // 0x678 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x67a Neq
	if(var_36_bool == 0) goto Label_1662; // 0x67b JumpB
	var_20_bool = 0; // 0x67c MovB
	return 4; // 0x67d Return
	
Label_1662:
	var_20_bool = 1; // 0x67e MovB
	return 4; // 0x67f Return
}


func_1507(var_0_bool)
{
	var_0_bool = 1; // 0x5e3 TMovB
	var_12_int = 0; // 0x5e4 PushI
	KillTimer(var_12_int); // 0x5e5 Func
	Stop(); // 0x5e7 Func
	return 0; // 0x5e9 Return
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


func_1383(var_0_bool, var_1_bool, var_121_bool, var_122_object, var_123_float, var_124_float, var_125_bool, var_126_bool)
{
	var_129_bool = 0; var_130_bool = 0; var_131_object = Obj(); var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_float = 0; var_136_object = Obj(); var_137_bool = 0; var_138_bool = 0; var_139_object = Obj(); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_object = Obj(); // 0x567 PushV
	var_0_bool = 0; // 0x568 TMovB
	var_1_bool = var_122_object; // 0x569 TMov
	var_138_bool = var_126_bool; // 0x56a Mov
	
Label_1387:
	var_145_bool = 0; var_146_object = Obj(); // 0x56b PushV
	var_146_object = var_122_object; // 0x56c Mov
	func_1523(var_145_bool, var_146_object); // 0x56d Call
	var_149_bool = var_145_bool == 0; // 0x56f Not
	if(var_149_bool == 0) goto Label_1395; // 0x570 JumpB
	var_121_bool = 0; // 0x571 MovB
	return 16; // 0x572 Return
	
Label_1395:
	GetPosition(var_140_cvector); // 0x573 ObjFunc
	GetPosition(var_141_cvector); // 0x575 Func
	var_142_cvector = var_140_cvector - var_141_cvector; // 0x577 Sub2
	var_143_float = var_142_cvector | var_142_cvector; // 0x578 Or2
	var_150_bool = 0; // 0x579 PushV
	var_150_bool = 0; // 0x57a MovB
	var_151_int = 0; // 0x57b PushI
	var_152_bool = var_124_float > var_151_int; // 0x57c GT
	if(var_152_bool == 0) goto Label_1410; // 0x57d JumpB
	var_153_float = var_124_float * var_124_float; // 0x57e Mult
	var_154_bool = var_143_float > var_153_float; // 0x57f GT
	if(var_154_bool == 0) goto Label_1410; // 0x580 JumpB
	var_150_bool = 1; // 0x581 MovB
	
Label_1410:
	if(var_150_bool == 0) goto Label_1415; // 0x582 JumpB
	Stop(); // 0x583 Func
	var_121_bool = 0; // 0x585 MovB
	return 16; // 0x586 Return
	
Label_1415:
	var_155_float = var_123_float * var_123_float; // 0x587 Mult
	var_156_bool = var_143_float > var_155_float; // 0x588 GT
	if(var_156_bool == 0) goto Label_1477; // 0x589 JumpB
	GetPFPosition(var_140_cvector); // 0x58a ObjFunc
	FindPathTo(var_144_object, var_140_cvector); // 0x58c Func
	var_157_bool = var_144_object != 0; // 0x58e NullNeq
	if(var_157_bool == 0) goto Label_1426; // 0x58f JumpB
	var_139_object = var_144_object; // 0x590 Mov
	var_144_object = 0; // 0x591 SetNull
	
Label_1426:
	var_158_bool = var_139_object != 0; // 0x592 NullNeq
	if(var_158_bool == 0) goto Label_1459; // 0x593 JumpB
	var_159_bool = var_138_bool; // 0x594 Push
	if(var_159_bool == 0) goto Label_1436; // 0x595 JumpB
	var_138_bool = 0; // 0x596 MovB
	RotatePath(var_139_object, var_137_bool); // 0x597 Func
	var_160_bool = var_137_bool == 0; // 0x599 Not
	if(var_160_bool == 0) goto Label_1436; // 0x59a JumpB
	goto Label_1483; // 0x59b Jump
	
Label_1483:
	var_121_bool = !var_0_bool; // 0x5cb Not2
	return 16; // 0x5cc Return
	
Label_1436:
	var_161_int = 0; // 0x59c PushI
	var_162_float = 0.3; // 0x59d PushF
	SetTimer(var_161_int, var_162_float); // 0x59e Func
	var_163_string = ""; // 0x5a0 PushV
	func_1530(var_163_string); // 0x5a1 Call
	var_164_string = ""; // 0x5a3 PushV
	func_1532(var_164_string); // 0x5a4 Call
	FollowPath(var_139_object, var_125_bool, var_137_bool, var_163_string, var_164_string); // 0x5a6 Func
	var_165_bool = var_137_bool == 0; // 0x5a8 Not
	if(var_165_bool == 0) goto Label_1457; // 0x5a9 JumpB
	var_166_bool = var_0_bool; // 0x5aa PushT
	if(var_166_bool == 0) goto Label_1455; // 0x5ab JumpB
	var_139_object = 0; // 0x5ac SetNull
	goto Label_1483; // 0x5ad Jump
	
Label_1455:
	goto Label_1482; // 0x5af Jump
	
Label_1482:
	goto Label_1387; // 0x5ca Jump
	
Label_1457:
	var_139_object = 0; // 0x5b1 SetNull
	goto Label_1475; // 0x5b2 Jump
	
Label_1475:
	var_144_object = 0; // 0x5c3 SetNull
	goto Label_1481; // 0x5c4 Jump
	
Label_1481:
	var_139_object = 0; // 0x5c9 SetNull
	
Label_1459:
	var_167_int = 0; // 0x5b3 PushI
	KillTimer(var_167_int); // 0x5b4 Func
	var_168_float = 0.5; // 0x5b6 PushF
	Sleep(var_168_float, var_137_bool); // 0x5b7 Func
	var_169_bool = var_137_bool == 0; // 0x5b9 Not
	if(var_169_bool == 0) goto Label_1471; // 0x5ba JumpB
	var_170_bool = var_0_bool; // 0x5bb PushT
	if(var_170_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_139_object = 0; // 0x5bd SetNull
	goto Label_1483; // 0x5be Jump
	
Label_1471:
	var_171_int = 0; // 0x5bf PushI
	var_172_float = 0.3; // 0x5c0 PushF
	SetTimer(var_171_int, var_172_float); // 0x5c1 Func
	
Label_1477:
	var_173_int = 0; // 0x5c5 PushI
	KillTimer(var_173_int); // 0x5c6 Func
	goto Label_1483; // 0x5c8 Jump
}


func_1768(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x6e8 PushV
	IsLoaded(var_15_bool); // 0x6e9 Func
	var_13_bool = var_15_bool; // 0x6eb Mov
	return 2; // 0x6ec Return
}


func_1897(var_54_int)
{
	var_56_bool = 0; // 0x76a PushV
	func_1980(var_56_bool); // 0x76b Call
	if(var_56_bool == 0) goto Label_1904; // 0x76d JumpB
	var_54_int = 2; // 0x76e MovI
	goto Label_1905; // 0x76f Jump
	
Label_1905:
	return 0; // 0x771 Return
	
Label_1904:
	var_54_int = 0; // 0x770 MovI
}


func_1129(var_0_bool, var_248_bool, var_249_float)
{
	var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_bool = 0; // 0x469 PushV
	irand(var_252_int, var_253_bool); // 0x46a Func
	var_254_int = 1; // 0x46c PushI
	var_252_int = var_252_int + var_254_int; // 0x46d Add2
	Face(var_0_bool); // 0x46e Func
	var_255_bool = 1; // 0x470 PushB
	SetAttackState(var_255_bool); // 0x471 Func
	var_256_string = "all"; // 0x473 PushS
	var_257_string = "attack_begin"; // 0x474 PushS
	var_258_int = var_257_string + var_252_int; // 0x475 Add
	PlayAnimation(var_256_string, var_258_int); // 0x476 Func
	WaitForAnimEnd(); // 0x478 Func
	func_1336(var_252_int, var_253_bool); // 0x47b Call
	var_274_bool = 0; var_275_object = Obj(); // 0x47d PushV
	var_275_object = var_0_bool; // 0x47e MovT
	func_1666(var_274_bool, var_275_object); // 0x47f Call
	var_276_bool = var_274_bool == 0; // 0x481 Not
	if(var_276_bool == 0) goto Label_1159; // 0x482 JumpB
	StopAsync(); // 0x483 Func
	var_248_bool = 0; // 0x485 MovB
	return 4; // 0x486 Return
	
Label_1159:
	var_277_float = 0; var_278_int = 0; // 0x487 PushV
	var_277_float = var_249_float; // 0x488 Mov
	var_278_int = var_252_int; // 0x489 Mov
	func_1090(var_253_bool, var_277_float, var_278_int); // 0x48a Call
	var_347_string = "all"; // 0x48c PushS
	var_348_string = "attack_middle"; // 0x48d PushS
	var_349_int = var_348_string + var_252_int; // 0x48e Add
	HasAnimation(var_253_bool, var_347_string, var_349_int); // 0x48f Func
	var_350_bool = var_253_bool; // 0x491 Push
	if(var_350_bool == 0) goto Label_1193; // 0x492 JumpB
	var_351_string = "all"; // 0x493 PushS
	var_352_string = "attack_middle"; // 0x494 PushS
	var_353_int = var_352_string + var_252_int; // 0x495 Add
	PlayAnimation(var_351_string, var_353_int); // 0x496 Func
	WaitForAnimEnd(); // 0x498 Func
	var_354_bool = 0; var_355_object = Obj(); // 0x49a PushV
	var_355_object = var_0_bool; // 0x49b MovT
	func_1666(var_354_bool, var_355_object); // 0x49c Call
	var_356_bool = var_354_bool == 0; // 0x49e Not
	if(var_356_bool == 0) goto Label_1188; // 0x49f JumpB
	StopAsync(); // 0x4a0 Func
	var_248_bool = 0; // 0x4a2 MovB
	return 4; // 0x4a3 Return
	
Label_1188:
	var_357_float = 0; var_358_int = 0; // 0x4a4 PushV
	var_357_float = var_249_float; // 0x4a5 Mov
	var_358_int = var_252_int; // 0x4a6 Mov
	func_1090(var_253_bool, var_357_float, var_358_int); // 0x4a7 Call
	
Label_1193:
	var_359_bool = 0; // 0x4a9 PushB
	SetAttackState(var_359_bool); // 0x4aa Func
	var_360_string = "all"; // 0x4ac PushS
	var_361_string = "attack_end"; // 0x4ad PushS
	var_362_int = var_361_string + var_252_int; // 0x4ae Add
	PlayAnimation(var_360_string, var_362_int); // 0x4af Func
	var_363_bool = 0; var_364_float = 0; // 0x4b1 PushV
	var_364_float = 0.75; // 0x4b2 MovF
	func_1209(var_363_bool, var_364_float); // 0x4b3 Call
	StopAsync(); // 0x4b5 Func
	var_248_bool = 1; // 0x4b7 MovB
	return 4; // 0x4b8 Return
}


func_871(var_64_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_float = 0; // 0x368 PushV
	var_70_object = var_64_object; // 0x369 Mov
	var_71_bool = 1; // 0x36a MovB
	var_72_float = 180.0; // 0x36b MovF
	func_885(var_65_object, var_66_int, var_67_int, var_68_bool, var_69_int, var_64_object, var_70_object, var_71_bool, var_72_float); // 0x36c Call
	return 0; // 0x36e Return
}


func_1773(var_71_object)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_cvector = CVector(0,0,0); // 0x6ed PushV
	GetEyesHeight(var_74_float); // 0x6ee ObjFunc
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x6f0 MovV
	var_76_float = GetByIndex(var_75_cvector, 1); // 0x6f1 PushE
	var_76_float = var_74_float; // 0x6f2 Mov
	SetByIndex(var_75_cvector, 1) = var_76_float; // 0x6f3 PopE
	var_77_string = "head"; // 0x6f4 PushS
	LookAsync(var_71_object, var_77_string, var_75_cvector); // 0x6f5 Func
	return 4; // 0x6f7 Return
}


func_879(var_288_float)
{
	var_288_float = 0.03; // 0x370 MovF
	return 0; // 0x371 Return
}


func_1906(var_62_object)
{
	var_63_object = Obj(); // 0x773 PushV
	var_63_object = var_62_object; // 0x774 Mov
	TaskCall(3); // 0x775 TaskCall
	func_645(var_64_object, var_63_object); // 0x776 Call
	TaskReturn(); // 0x777 TaskReturn
	return 0; // 0x779 Return
}


func_882(var_295_int)
{
	var_295_int = 0; // 0x373 MovI
	return 0; // 0x374 Return
}


func_1523(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x5f4 PushV
	var_17_object = var_15_object; // 0x5f5 Mov
	func_1666(var_16_bool, var_17_object); // 0x5f6 Call
	var_14_bool = var_16_bool; // 0x5f7 Mov
	return 0; // 0x5f9 Return
}


func_885(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_70_object, var_71_bool, var_72_float, var_127_bool)
{
	var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_float = 0; var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_float = 0; // 0x375 PushV
	var_1_bool = 0; // 0x376 TMovI
	
Label_887:
	var_93_string = "all"; // 0x377 PushS
	var_94_string = "attack_begin"; // 0x378 PushS
	var_95_int = 1; // 0x379 PushI
	var_96_int = var_1_bool + var_95_int; // 0x37a Add
	var_97_int = var_94_string + var_96_int; // 0x37b Add
	HasAnimation(var_83_bool, var_93_string, var_97_int); // 0x37c Func
	var_98_bool = var_83_bool == 0; // 0x37e Not
	if(var_98_bool == 0) goto Label_897; // 0x37f JumpB
	goto Label_900; // 0x380 Jump
	
Label_900:
	var_2_bool = 0; // 0x384 TMovI
	
Label_901:
	var_99_string = "attack"; // 0x385 PushS
	var_100_int = 1; // 0x386 PushI
	var_101_int = var_2_bool + var_100_int; // 0x387 Add
	var_102_int = var_99_string + var_101_int; // 0x388 Add
	IsExisting3DSound(var_84_bool, var_102_int); // 0x389 Func
	var_103_bool = var_84_bool == 0; // 0x38b Not
	if(var_103_bool == 0) goto Label_910; // 0x38c JumpB
	goto Label_913; // 0x38d Jump
	
Label_913:
	var_4_object = 0; // 0x391 TMovI
	var_104_string = "@GetAttackDistance"; // 0x392 PushS
	var_105_int = 1; // 0x393 PushI
	var_106_bool = IsFuncExist(var_70_object, var_104_string, var_105_int); // 0x394 FuncExist
	if(var_106_bool == 0) goto Label_923; // 0x395 JumpB
	GetAttackDistance(var_85_float); // 0x396 ObjFunc
	var_107_int = 50; // 0x398 PushI
	var_85_float = var_85_float + var_107_int; // 0x399 Add2
	goto Label_924; // 0x39a Jump
	
Label_924:
	var_108_int = 150; // 0x39c PushI
	var_109_bool = var_85_float >= var_108_int; // 0x39d GE
	if(var_109_bool == 0) goto Label_928; // 0x39e JumpB
	var_85_float = 150; // 0x39f MovI
	
Label_928:
	var_3_object = 0; // 0x3a0 TMovB
	var_0_bool = var_70_object; // 0x3a1 TMov
	IsPlayerActor(var_0_bool, var_88_bool); // 0x3a2 Func
	var_110_bool = var_71_bool; // 0x3a4 Push
	if(var_110_bool == 0) goto Label_936; // 0x3a5 JumpB
	var_89_bool = 0; // 0x3a6 MovB
	goto Label_937; // 0x3a7 Jump
	
Label_937:
	var_111_bool = 0; // 0x3a9 PushV
	var_111_bool = 0; // 0x3aa MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x3ab PushV
	var_113_object = var_0_bool; // 0x3ac MovT
	func_1666(var_112_bool, var_113_object); // 0x3ad Call
	if(var_112_bool == 0) goto Label_947; // 0x3af JumpB
	var_114_bool = var_3_object == 0; // 0x3b0 Not
	if(var_114_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_111_bool = 1; // 0x3b2 MovB
	
Label_947:
	if(var_111_bool == 0) goto Label_1073; // 0x3b3 JumpB
	GetPFPosition(var_86_cvector); // 0x3b4 TObjFunc
	GetPFPosition(var_87_cvector); // 0x3b6 Func
	var_90_cvector = var_86_cvector - var_87_cvector; // 0x3b8 Sub2
	var_91_float = var_90_cvector | var_90_cvector; // 0x3b9 Or2
	var_115_float = 400.0; // 0x3ba PushF
	var_116_int = var_115_float + var_85_float; // 0x3bb Add
	var_117_float = 400.0; // 0x3bc PushF
	var_118_int = var_117_float + var_85_float; // 0x3bd Add
	var_119_float = var_116_int * var_118_int; // 0x3be Mult
	var_120_bool = var_91_float >= var_119_float; // 0x3bf GE
	if(var_120_bool == 0) goto Label_976; // 0x3c0 JumpB
	var_121_bool = 0; var_122_object = Obj(); var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_bool = 0; // 0x3c1 PushV
	var_122_object = var_0_bool; // 0x3c2 MovT
	var_123_float = var_85_float; // 0x3c3 Mov
	var_124_float = 3000.0; // 0x3c4 MovF
	var_125_bool = 1; // 0x3c5 MovB
	var_126_bool = 0; // 0x3c6 MovB
	TaskCall(5); // 0x3c7 TaskCall
	func_1383(var_127_bool, var_128_object, var_121_bool, var_122_object, var_123_float, var_124_float, var_125_bool, var_126_bool); // 0x3c8 Call
	TaskReturn(); // 0x3c9 TaskReturn
	var_174_bool = var_127_bool == 0; // 0x3cb Not
	if(var_174_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_1073; // 0x3cd Jump
	
Label_1073:
	WaitForAnimEnd(); // 0x431 Func
	var_175_object = var_3_object; // 0x433 PushT
	if(var_175_object == 0) goto Label_1078; // 0x434 JumpB
	return 20; // 0x435 Return
	
Label_1078:
	var_176_string = "all"; // 0x436 PushS
	var_177_string = "attack_off"; // 0x437 PushS
	PlayAnimation(var_176_string, var_177_string); // 0x438 Func
	WaitForAnimEnd(); // 0x43a Func
	var_178_bool = var_88_bool; // 0x43c Push
	if(var_178_bool == 0) goto Label_1089; // 0x43d JumpB
	var_179_float = 2.0; // 0x43e PushF
	Sleep(var_179_float); // 0x43f Func
	
Label_1089:
	return 20; // 0x441 Return
	
Label_974:
	var_89_bool = 0; // 0x3ce MovB
	goto Label_1072; // 0x3cf Jump
	
Label_1072:
	goto Label_937; // 0x430 Jump
	
Label_976:
	var_180_float = var_72_float * var_72_float; // 0x3d0 Mult
	var_181_bool = var_91_float >= var_180_float; // 0x3d1 GE
	if(var_181_bool == 0) goto Label_1064; // 0x3d2 JumpB
	var_182_bool = var_89_bool == 0; // 0x3d3 Not
	if(var_182_bool == 0) goto Label_994; // 0x3d4 JumpB
	var_183_object = Obj(); // 0x3d5 PushV
	var_183_object = var_0_bool; // 0x3d6 MovT
	func_1757(); // 0x3d7 Call
	var_192_string = "all"; // 0x3d9 PushS
	var_193_string = "attack_on"; // 0x3da PushS
	PlayAnimation(var_192_string, var_193_string); // 0x3db Func
	WaitForAnimEnd(); // 0x3dd Func
	StopAsync(); // 0x3df Func
	var_89_bool = 1; // 0x3e1 MovB
	
Label_994:
	rand(var_92_float); // 0x3e2 Func
	var_194_bool = 0; // 0x3e4 PushV
	var_194_bool = 1; // 0x3e5 MovB
	var_195_float = 0.6; // 0x3e6 PushF
	var_196_bool = var_92_float < var_195_float; // 0x3e7 LT
	if(var_196_bool == 0) goto Label_1006; // 0x3e8 JumpB
	var_197_bool = 0; // 0x3e9 PushV
	func_1325(var_194_bool, var_197_bool); // 0x3ea Call
	if(var_197_bool == 0) goto Label_1006; // 0x3ec JumpB
	var_194_bool = 0; // 0x3ed MovB
	
Label_1006:
	if(var_194_bool == 0) goto Label_1020; // 0x3ee JumpB
	Face(var_0_bool); // 0x3ef Func
	var_203_string = "all"; // 0x3f1 PushS
	var_204_string = "attack_stay"; // 0x3f2 PushS
	PlayAnimation(var_203_string, var_204_string); // 0x3f3 Func
	var_205_bool = 0; var_206_float = 0; // 0x3f5 PushV
	var_206_float = var_72_float; // 0x3f6 Mov
	func_1233(var_92_float, var_205_bool, var_206_float); // 0x3f7 Call
	StopAsync(); // 0x3f9 Func
	goto Label_1063; // 0x3fb Jump
	
Label_1063:
	goto Label_1072; // 0x427 Jump
	
Label_1020:
	Face(var_0_bool); // 0x3fc Func
	var_372_string = "all"; // 0x3fe PushS
	var_373_string = "fjump"; // 0x3ff PushS
	PlayAnimation(var_372_string, var_373_string); // 0x400 Func
	WaitForAnimEnd(); // 0x402 Func
	var_374_cvector = CVector(0.0, 0.0, 0.0); // 0x404 PushVec
	SetSpeed(var_374_cvector); // 0x405 Func
	Stop(); // 0x407 Func
	StopAsync(); // 0x409 Func
	var_375_bool = 0; // 0x40b PushV
	func_1325(var_92_float, var_375_bool); // 0x40c Call
	var_376_bool = var_375_bool == 0; // 0x40e Not
	if(var_376_bool == 0) goto Label_1063; // 0x40f JumpB
	var_377_bool = 0; var_378_object = Obj(); // 0x410 PushV
	var_378_object = var_0_bool; // 0x411 MovT
	func_1666(var_377_bool, var_378_object); // 0x412 Call
	var_379_bool = var_377_bool == 0; // 0x414 Not
	if(var_379_bool == 0) goto Label_1047; // 0x415 JumpB
	goto Label_1073; // 0x416 Jump
	
Label_1047:
	GetPFPosition(var_86_cvector); // 0x417 TObjFunc
	GetPFPosition(var_87_cvector); // 0x419 Func
	var_90_cvector = var_86_cvector - var_87_cvector; // 0x41b Sub2
	var_91_float = var_90_cvector | var_90_cvector; // 0x41c Or2
	var_380_float = var_72_float * var_72_float; // 0x41d Mult
	var_381_bool = var_91_float < var_380_float; // 0x41e LT
	if(var_381_bool == 0) goto Label_1063; // 0x41f JumpB
	var_382_bool = 0; var_383_float = 0; // 0x420 PushV
	var_383_float = var_72_float; // 0x421 Mov
	func_1129(var_92_float, var_382_bool, var_383_float); // 0x422 Call
	var_384_bool = var_382_bool == 0; // 0x424 Not
	if(var_384_bool == 0) goto Label_1063; // 0x425 JumpB
	goto Label_1073; // 0x426 Jump
	
Label_1064:
	var_385_bool = 0; var_386_float = 0; // 0x428 PushV
	var_386_float = var_72_float; // 0x429 Mov
	func_1129(var_92_float, var_385_bool, var_386_float); // 0x42a Call
	var_387_bool = var_385_bool == 0; // 0x42c Not
	if(var_387_bool == 0) goto Label_1071; // 0x42d JumpB
	goto Label_1073; // 0x42e Jump
	
Label_1071:
	var_89_bool = 1; // 0x42f MovB
	
Label_936:
	var_89_bool = 1; // 0x3a8 MovB
	
Label_923:
	var_85_float = var_72_float; // 0x39b Mov
	
Label_910:
	var_388_int = 1; // 0x38e PushI
	var_2_bool = var_2_bool + var_388_int; // 0x38f Add2
	goto Label_901; // 0x390 Jump
	
Label_897:
	var_389_int = 1; // 0x381 PushI
	var_1_bool = var_1_bool + var_389_int; // 0x382 Add2
	goto Label_887; // 0x383 Jump
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


func_1273(var_0_bool, var_218_bool)
{
	var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_float = 0; var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_float = 0; var_228_float = 0; // 0x4f9 PushV
	var_229_bool = 0; var_230_object = Obj(); // 0x4fa PushV
	var_230_object = var_0_bool; // 0x4fb MovT
	func_1666(var_229_bool, var_230_object); // 0x4fc Call
	var_231_bool = var_229_bool == 0; // 0x4fe Not
	if(var_231_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_218_bool = 0; // 0x500 MovB
	return 10; // 0x501 Return
	
Label_1282:
	var_232_bool = 0; // 0x502 PushV
	func_1325(var_228_float, var_232_bool); // 0x503 Call
	if(var_232_bool == 0) goto Label_1304; // 0x505 JumpB
	GetPFPosition(var_224_cvector); // 0x506 TObjFunc
	GetPFPosition(var_225_cvector); // 0x508 Func
	var_226_cvector = var_224_cvector - var_225_cvector; // 0x50a Sub2
	var_227_float = var_226_cvector | var_226_cvector; // 0x50b Or2
	GetAttackDistance(var_228_float); // 0x50c TObjFunc
	var_233_int = 50; // 0x50e PushI
	var_228_float = var_228_float + var_233_int; // 0x50f Add2
	var_234_float = var_228_float * var_228_float; // 0x510 Mult
	var_235_bool = var_227_float <= var_234_float; // 0x511 LE
	if(var_235_bool == 0) goto Label_1304; // 0x512 JumpB
	func_1306(var_228_float); // 0x514 Call
	var_218_bool = 1; // 0x516 MovB
	return 10; // 0x517 Return
	
Label_1304:
	var_218_bool = 0; // 0x518 MovB
	return 10; // 0x519 Return
}


func_1914(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x77b PushV
	var_23_object = var_21_object; // 0x77c Mov
	func_1666(var_22_bool, var_23_object); // 0x77d Call
	if(var_22_bool == 0) goto Label_1922; // 0x77f JumpB
	var_20_int = 2; // 0x780 MovI
	goto Label_1923; // 0x781 Jump
	
Label_1923:
	return 0; // 0x783 Return
	
Label_1922:
	var_20_int = 0; // 0x782 MovI
}


func_1532(var_164_string)
{
	var_164_string = "run"; // 0x5fc MovS
	return 0; // 0x5fd Return
}


func_1534(var_319_string, var_320_int)
{
	var_321_int = 1; // 0x5ff PushI
	var_322_bool = var_320_int == var_321_int; // 0x600 Eq
	if(var_322_bool == 0) goto Label_1540; // 0x601 JumpB
	var_319_string = "fire"; // 0x602 MovS
	return 0; // 0x603 Return
	
Label_1540:
	var_319_string = "phys"; // 0x604 MovS
	return 0; // 0x605 Return
}


func_1791(var_337_float, var_338_float, var_339_float, var_340_float)
{
	var_341_bool = var_338_float < var_339_float; // 0x700 LT
	if(var_341_bool == 0) goto Label_1796; // 0x701 JumpB
	var_337_float = var_339_float; // 0x702 Mov
	return 0; // 0x703 Return
	
Label_1796:
	var_342_bool = var_338_float > var_340_float; // 0x704 GT
	if(var_342_bool == 0) goto Label_1800; // 0x705 JumpB
	var_337_float = var_340_float; // 0x706 Mov
	return 0; // 0x707 Return
	
Label_1800:
	var_337_float = var_338_float; // 0x708 Mov
	return 0; // 0x709 Return
}


