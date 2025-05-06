task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xf PushV
	var_14_int = 0; var_15_object = Obj(); // 0x10 PushV
	var_15_object = var_11_object; // 0x11 Mov
	func_1972(var_15_object); // 0x12 Call
	var_13_int = var_14_int; // 0x13 Mov
	var_16_int = 0; // 0x15 PushI
	var_17_bool = var_13_int > var_16_int; // 0x16 GT
	if(var_17_bool == 0) goto Label_28; // 0x17 JumpB
	var_18_object = Obj(); // 0x18 PushV
	var_18_object = var_11_object; // 0x19 Mov
	func_1975(var_18_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1981(); // 0x1e Call
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
	func_1972(var_15_object); // 0xaf Call
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
	func_1975(var_21_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xc0 PushV
	var_14_int = 0; var_15_object = Obj(); // 0xc1 PushV
	var_15_object = var_11_object; // 0xc2 Mov
	func_1931(var_14_int, var_15_object); // 0xc3 Call
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
	func_1941(var_55_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xd4 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0xd5 PushV
	var_16_object = var_11_bool; // 0xd6 Mov
	var_17_object = var_12_object; // 0xd7 Mov
	func_2213(var_15_bool, var_16_object, var_17_object); // 0xd8 Call
	if(var_15_bool == 0) goto Label_237; // 0xda JumpB
	var_50_int = 0; var_51_object = Obj(); // 0xdb PushV
	var_51_object = var_11_bool; // 0xdc Mov
	func_1949(var_50_int, var_51_object); // 0xdd Call
	var_14_int = var_50_int; // 0xde Mov
	var_82_int = 0; // 0xe0 PushI
	var_83_bool = var_14_int > var_82_int; // 0xe1 GT
	if(var_83_bool == 0) goto Label_237; // 0xe2 JumpB
	var_84_int = 1; // 0xe3 PushI
	var_85_bool = var_14_int > var_84_int; // 0xe4 GT
	if(var_85_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_14_int); // 0xe7 Call
	
Label_233:
	var_87_object = Obj(); // 0xe9 PushV
	var_87_object = var_11_bool; // 0xea Mov
	func_1956(var_87_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0xee PushV
	var_14_int = 0; var_15_object = Obj(); // 0xef PushV
	var_15_object = var_11_object; // 0xf0 Mov
	func_1962(var_15_object); // 0xf1 Call
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
	func_1965(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x102 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x103 PushV
	var_16_string = var_12_object; // 0x104 Mov
	var_17_object = var_11_bool; // 0x105 Mov
	func_1967(var_17_object); // 0x106 Call
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
	func_1970(); // 0x115 Call
	
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
	func_1981(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object); // 0x149 Call
	var_13_object = Obj(); // 0x14b PushV
	var_13_object = var_11_object; // 0x14c Mov
	func_1876(); // 0x14d Call
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
	func_1972(var_15_object); // 0x1cb Call
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
	func_1975(var_20_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x1dc PushV
	var_14_int = 0; var_15_object = Obj(); // 0x1dd PushV
	var_15_object = var_11_object; // 0x1de Mov
	func_1931(var_14_int, var_15_object); // 0x1df Call
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
	func_1941(var_54_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x1f0 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x1f1 PushV
	var_16_object = var_11_bool; // 0x1f2 Mov
	var_17_object = var_12_object; // 0x1f3 Mov
	func_2213(var_15_bool, var_16_object, var_17_object); // 0x1f4 Call
	if(var_15_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x1f7 PushV
	var_51_object = var_11_bool; // 0x1f8 Mov
	func_1949(var_50_int, var_51_object); // 0x1f9 Call
	var_14_int = var_50_int; // 0x1fa Mov
	var_82_int = 0; // 0x1fc PushI
	var_83_bool = var_14_int > var_82_int; // 0x1fd GT
	if(var_83_bool == 0) goto Label_521; // 0x1fe JumpB
	var_84_int = 1; // 0x1ff PushI
	var_85_bool = var_14_int > var_84_int; // 0x200 GT
	if(var_85_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_86_object = Obj(); // 0x205 PushV
	var_86_object = var_11_bool; // 0x206 Mov
	func_1956(var_86_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x20a PushV
	var_14_int = 0; var_15_object = Obj(); // 0x20b PushV
	var_15_object = var_11_object; // 0x20c Mov
	func_1962(var_15_object); // 0x20d Call
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
	func_1965(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x21e PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x21f PushV
	var_16_string = var_12_object; // 0x220 Mov
	var_17_object = var_11_bool; // 0x221 Mov
	func_1967(var_17_object); // 0x222 Call
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
	func_1970(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_640(); // 0x235 Call
	func_1981(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2bd PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2be PushV
	var_15_object = var_11_object; // 0x2bf Mov
	func_1972(var_15_object); // 0x2c0 Call
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
	func_1975(var_22_object); // 0x2ce Call
	
Label_720:
	return 2; // 0x2d0 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2d1 PushV
	var_14_int = 0; var_15_object = Obj(); // 0x2d2 PushV
	var_15_object = var_11_object; // 0x2d3 Mov
	func_1931(var_14_int, var_15_object); // 0x2d4 Call
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
	func_1941(var_56_object); // 0x2e2 Call
	
Label_740:
	return 2; // 0x2e4 Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x2e5 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x2e6 PushV
	var_16_object = var_11_bool; // 0x2e7 Mov
	var_17_object = var_12_object; // 0x2e8 Mov
	func_2213(var_15_bool, var_16_object, var_17_object); // 0x2e9 Call
	if(var_15_bool == 0) goto Label_766; // 0x2eb JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x2ec PushV
	var_51_object = var_11_bool; // 0x2ed Mov
	func_1949(var_50_int, var_51_object); // 0x2ee Call
	var_14_int = var_50_int; // 0x2ef Mov
	var_82_int = 0; // 0x2f1 PushI
	var_83_bool = var_14_int > var_82_int; // 0x2f2 GT
	if(var_83_bool == 0) goto Label_766; // 0x2f3 JumpB
	var_84_int = 1; // 0x2f4 PushI
	var_85_bool = var_14_int > var_84_int; // 0x2f5 GT
	if(var_85_bool == 0) goto Label_762; // 0x2f6 JumpB
	func_809(); // 0x2f8 Call
	
Label_762:
	var_88_object = Obj(); // 0x2fa PushV
	var_88_object = var_11_bool; // 0x2fb Mov
	func_1956(var_88_object); // 0x2fc Call
	
Label_766:
	return 2; // 0x2fe Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x2ff PushV
	var_14_int = 0; var_15_object = Obj(); // 0x300 PushV
	var_15_object = var_11_object; // 0x301 Mov
	func_1962(var_15_object); // 0x302 Call
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
	func_1965(); // 0x310 Call
	
Label_786:
	return 2; // 0x312 Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x313 PushV
	var_15_int = 0; var_16_string = ""; var_17_object = Obj(); // 0x314 PushV
	var_16_string = var_12_object; // 0x315 Mov
	var_17_object = var_11_bool; // 0x316 Mov
	func_1967(var_17_object); // 0x317 Call
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
	func_1970(); // 0x326 Call
	
Label_808:
	return 2; // 0x328 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_809(); // 0x336 Call
	var_14_object = Obj(); // 0x338 PushV
	var_14_object = var_11_object; // 0x339 Mov
	func_1876(); // 0x33a Call
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
	func_1981(); // 0x364 Call
	return 0; // 0x366 Return
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1507(var_10_object); // 0x561 Call
	func_1981(); // 0x564 Call
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
	func_1876(); // 0x5f0 Call
	return 0; // 0x5f2 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x747 PushV
	var_15_string = "health"; // 0x748 PushS
	var_16_bool = var_12_string == var_15_string; // 0x749 Eq
	if(var_16_bool == 0) goto Label_1875; // 0x74a JumpB
	var_17_string = "health"; // 0x74b PushS
	GetProperty(var_17_string, var_14_float); // 0x74c Func
	var_18_int = 0; // 0x74e PushI
	var_19_bool = var_14_float <= var_18_int; // 0x74f LE
	if(var_19_bool == 0) goto Label_1875; // 0x750 JumpB
	SignalDeath(var_11_object); // 0x751 Func
	
Label_1875:
	return 2; // 0x753 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x755 PushV
	var_12_object = var_11_object; // 0x756 Mov
	func_1855(var_12_object); // 0x757 Call
	return 0; // 0x759 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x75b PushV
	var_15_object = var_11_object; // 0x75c Mov
	var_16_int = var_12_int; // 0x75d Mov
	var_17_float = var_13_float; // 0x75e Mov
	func_1698(var_16_int, var_17_float); // 0x75f Call
	return 0; // 0x761 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	var_11_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_11_bool); // 0x95 Func
	func_2192(); // 0x98 Call
	func_163(); // 0x9b Call
	
Label_157:
	var_2_bool = 0; // 0x9d TMovB
	func_376(var_9_bool, var_10_object); // 0x9f Call
	goto Label_157; // 0xa1 Jump
}


func_0(var_13_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_14_object = Obj(); // 0x2 PushV
	var_14_object = var_13_object; // 0x3 Mov
	func_33(var_14_object); // 0x4 Call
	var_64_object = Obj(); // 0x6 PushV
	var_64_object = var_13_object; // 0x7 Mov
	func_2259(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1542(var_55_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x606 PushV
	GetPosition(var_59_cvector); // 0x607 Func
	GetPosition(var_60_cvector); // 0x609 ObjFunc
	var_55_cvector = var_60_cvector - var_59_cvector; // 0x60b Sub2
	return 4; // 0x60c Return
}


func_1549(var_39_float)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x60d PushV
	GetPosition(var_44_cvector); // 0x60e Func
	GetPosition(var_45_cvector); // 0x610 ObjFunc
	var_46_cvector = var_45_cvector - var_44_cvector; // 0x612 Sub2
	var_39_float = var_46_cvector | var_46_cvector; // 0x613 Or2
	return 6; // 0x614 Return
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


func_1569(var_317_float, var_318_object, var_319_float, var_320_int)
{
	var_324_int = 0; var_325_string = ""; var_326_int = 0; var_327_float = 0; var_328_float = 0; var_329_float = 0; var_330_int = 0; var_331_string = ""; var_332_int = 0; var_333_float = 0; var_334_float = 0; var_335_float = 0; // 0x621 PushV
	var_336_bool = 0; var_337_object = Obj(); var_338_string = ""; // 0x622 PushV
	var_337_object = var_318_object; // 0x623 Mov
	var_338_string = "health"; // 0x624 MovS
	func_1557(var_336_bool, var_337_object, var_338_string); // 0x625 Call
	var_339_bool = var_336_bool == 0; // 0x627 Not
	if(var_339_bool == 0) goto Label_1579; // 0x628 JumpB
	var_317_float = 0.0; // 0x629 MovF
	return 12; // 0x62a Return
	
Label_1579:
	var_340_bool = 0; var_341_object = Obj(); var_342_string = ""; // 0x62b PushV
	var_341_object = var_318_object; // 0x62c Mov
	var_342_string = "armor"; // 0x62d MovS
	func_1557(var_340_bool, var_341_object, var_342_string); // 0x62e Call
	var_343_bool = var_340_bool == 0; // 0x630 Not
	if(var_343_bool == 0) goto Label_1588; // 0x631 JumpB
	var_330_int = 0; // 0x632 MovI
	goto Label_1591; // 0x633 Jump
	
Label_1591:
	var_344_string = "armor_"; // 0x637 PushS
	var_345_string = ""; var_346_int = 0; // 0x638 PushV
	var_346_int = var_320_int; // 0x639 Mov
	func_1534(var_345_string, var_346_int); // 0x63a Call
	var_331_string = var_344_string + var_345_string; // 0x63c Add2
	var_349_bool = 0; var_350_object = Obj(); var_351_string = ""; // 0x63d PushV
	var_350_object = var_318_object; // 0x63e Mov
	var_351_string = var_331_string; // 0x63f Mov
	func_1557(var_349_bool, var_350_object, var_351_string); // 0x640 Call
	var_352_bool = var_349_bool == 0; // 0x642 Not
	if(var_352_bool == 0) goto Label_1606; // 0x643 JumpB
	var_332_int = 0; // 0x644 MovI
	goto Label_1608; // 0x645 Jump
	
Label_1608:
	var_353_float = 0; var_354_float = 0; var_355_float = 0; // 0x648 PushV
	var_356_int = var_330_int + var_332_int; // 0x649 Add
	var_357_float = 100.0; // 0x64a PushF
	var_354_float = var_356_int / var_356_int; // 0x64b Div2
	var_355_float = 1; // 0x64c MovI
	func_1792(var_353_float, var_354_float, var_355_float); // 0x64d Call
	var_333_float = var_353_float; // 0x64e Mov
	var_359_string = "health"; // 0x650 PushS
	GetProperty(var_359_string, var_334_float); // 0x651 ObjFunc
	var_360_int = 1; // 0x653 PushI
	var_361_int = var_360_int - var_333_float; // 0x654 Sub
	var_335_float = var_319_float * var_361_int; // 0x655 Mult2
	var_362_string = "health"; // 0x656 PushS
	var_363_float = 0; var_364_float = 0; var_365_float = 0; var_366_float = 0; // 0x657 PushV
	var_364_float = var_334_float - var_335_float; // 0x658 Sub2
	var_365_float = 0; // 0x659 MovI
	var_366_float = 1; // 0x65a MovI
	func_1799(var_363_float, var_364_float, var_365_float, var_366_float); // 0x65b Call
	SetProperty(var_362_string, var_363_float); // 0x65d ObjFunc
	var_317_float = var_335_float; // 0x65f Mov
	return 12; // 0x660 Return
	
Label_1606:
	GetProperty(var_331_string, var_332_int); // 0x646 ObjFunc
	
Label_1588:
	var_369_string = "armor"; // 0x634 PushS
	GetProperty(var_369_string, var_330_int); // 0x635 ObjFunc
}


func_571()
{
	var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_bool = 0; var_162_float = 0; var_163_bool = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_bool = 0; var_169_float = 0; var_170_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_171_bool = 0; // 0x23e PushV
	func_1776(var_171_bool); // 0x23f Call
	var_172_bool = var_171_bool == 0; // 0x241 Not
	if(var_172_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_173_int = 0; // 0x244 PushV
	func_1897(var_173_int); // 0x245 Call
	var_164_int = var_173_int; // 0x246 Mov
	var_165_int = 0; // 0x248 MovI
	
Label_585:
	var_186_bool = 0; // 0x249 PushV
	var_186_bool = 0; // 0x24a MovB
	var_187_int = 5; // 0x24b PushI
	var_188_bool = var_165_int < var_187_int; // 0x24c LT
	if(var_188_bool == 0) goto Label_595; // 0x24d JumpB
	var_189_bool = 0; // 0x24e PushV
	func_1776(var_189_bool); // 0x24f Call
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
	func_1890(var_195_string, var_196_int); // 0x261 Call
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


func_1090(var_0_bool, var_303_float, var_304_int)
{
	var_305_object = Obj(); var_306_float = 0; var_307_float = 0; var_308_object = Obj(); var_309_float = 0; var_310_float = 0; // 0x442 PushV
	var_311_float = 0.9; // 0x443 PushF
	var_312_float = var_303_float * var_311_float; // 0x444 Mult
	GetVictim(var_312_float, var_308_object); // 0x445 Func
	ReportAttack(var_0_bool); // 0x447 Func
	var_313_bool = var_308_object == var_0_bool; // 0x449 Eq
	if(var_313_bool == 0) goto Label_1127; // 0x44a JumpB
	var_314_float = 0; var_315_object = Obj(); var_316_int = 0; // 0x44b PushV
	var_315_object = var_308_object; // 0x44c Mov
	var_316_int = var_304_int; // 0x44d Mov
	func_879(var_316_int); // 0x44e Call
	var_309_float = var_314_float; // 0x44f Mov
	var_317_float = 0; var_318_object = Obj(); var_319_float = 0; var_320_int = 0; // 0x451 PushV
	var_318_object = var_308_object; // 0x452 Mov
	var_319_float = var_309_float; // 0x453 Mov
	var_321_int = 0; var_322_object = Obj(); var_323_int = 0; // 0x454 PushV
	var_322_object = var_308_object; // 0x455 Mov
	var_323_int = var_304_int; // 0x456 Mov
	func_882(var_323_int); // 0x457 Call
	var_320_int = var_321_int; // 0x458 Mov
	func_1569(var_317_float, var_318_object, var_319_float, var_320_int); // 0x45a Call
	var_310_float = var_317_float; // 0x45b Mov
	var_370_int = 0; // 0x45d PushV
	func_1368(var_370_int); // 0x45e Call
	ReportHit(var_0_bool, var_370_int, var_310_float, var_309_float); // 0x460 Func
	var_371_object = Obj(); var_372_float = 0; // 0x462 PushV
	var_371_object = var_308_object; // 0x463 Mov
	var_372_float = var_310_float; // 0x464 Mov
	func_1370(); // 0x465 Call
	
Label_1127:
	return 6; // 0x467 Return
}


func_1633(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x661 PushV
	IsDead(var_34_bool); // 0x662 ObjFunc
	var_31_bool = var_34_bool; // 0x664 Mov
	return 2; // 0x665 Return
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


func_1129(var_0_bool, var_274_bool, var_275_float)
{
	var_276_int = 0; var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0x469 PushV
	irand(var_278_int, var_279_bool); // 0x46a Func
	var_280_int = 1; // 0x46c PushI
	var_278_int = var_278_int + var_280_int; // 0x46d Add2
	Face(var_0_bool); // 0x46e Func
	var_281_bool = 1; // 0x470 PushB
	SetAttackState(var_281_bool); // 0x471 Func
	var_282_string = "all"; // 0x473 PushS
	var_283_string = "attack_begin"; // 0x474 PushS
	var_284_int = var_283_string + var_278_int; // 0x475 Add
	PlayAnimation(var_282_string, var_284_int); // 0x476 Func
	WaitForAnimEnd(); // 0x478 Func
	func_1336(var_278_int, var_279_bool); // 0x47b Call
	var_300_bool = 0; var_301_object = Obj(); // 0x47d PushV
	var_301_object = var_0_bool; // 0x47e MovT
	func_1674(var_300_bool, var_301_object); // 0x47f Call
	var_302_bool = var_300_bool == 0; // 0x481 Not
	if(var_302_bool == 0) goto Label_1159; // 0x482 JumpB
	StopAsync(); // 0x483 Func
	var_274_bool = 0; // 0x485 MovB
	return 4; // 0x486 Return
	
Label_1159:
	var_303_float = 0; var_304_int = 0; // 0x487 PushV
	var_303_float = var_275_float; // 0x488 Mov
	var_304_int = var_278_int; // 0x489 Mov
	func_1090(var_279_bool, var_303_float, var_304_int); // 0x48a Call
	var_373_string = "all"; // 0x48c PushS
	var_374_string = "attack_middle"; // 0x48d PushS
	var_375_int = var_374_string + var_278_int; // 0x48e Add
	HasAnimation(var_279_bool, var_373_string, var_375_int); // 0x48f Func
	var_376_bool = var_279_bool; // 0x491 Push
	if(var_376_bool == 0) goto Label_1193; // 0x492 JumpB
	var_377_string = "all"; // 0x493 PushS
	var_378_string = "attack_middle"; // 0x494 PushS
	var_379_int = var_378_string + var_278_int; // 0x495 Add
	PlayAnimation(var_377_string, var_379_int); // 0x496 Func
	WaitForAnimEnd(); // 0x498 Func
	var_380_bool = 0; var_381_object = Obj(); // 0x49a PushV
	var_381_object = var_0_bool; // 0x49b MovT
	func_1674(var_380_bool, var_381_object); // 0x49c Call
	var_382_bool = var_380_bool == 0; // 0x49e Not
	if(var_382_bool == 0) goto Label_1188; // 0x49f JumpB
	StopAsync(); // 0x4a0 Func
	var_274_bool = 0; // 0x4a2 MovB
	return 4; // 0x4a3 Return
	
Label_1188:
	var_383_float = 0; var_384_int = 0; // 0x4a4 PushV
	var_383_float = var_275_float; // 0x4a5 Mov
	var_384_int = var_278_int; // 0x4a6 Mov
	func_1090(var_279_bool, var_383_float, var_384_int); // 0x4a7 Call
	
Label_1193:
	var_385_bool = 0; // 0x4a9 PushB
	SetAttackState(var_385_bool); // 0x4aa Func
	var_386_string = "all"; // 0x4ac PushS
	var_387_string = "attack_end"; // 0x4ad PushS
	var_388_int = var_387_string + var_278_int; // 0x4ae Add
	PlayAnimation(var_386_string, var_388_int); // 0x4af Func
	var_389_bool = 0; var_390_float = 0; // 0x4b1 PushV
	var_390_float = 0.75; // 0x4b2 MovF
	func_1209(var_389_bool, var_390_float); // 0x4b3 Call
	StopAsync(); // 0x4b5 Func
	var_274_bool = 1; // 0x4b7 MovB
	return 4; // 0x4b8 Return
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


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
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


func_2187(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0; // 0x88b PushV
	GetInvItemByName(var_54_int, var_52_string); // 0x88c Func
	var_51_int = var_54_int; // 0x88e Mov
	return 2; // 0x88f Return
}


func_2192()
{
	var_12_bool = GlobalVars[0]; // 0x890 PushGE
	var_12_bool = 0; // 0x891 MovB
	GlobalVars[0] = var_12_bool; // 0x892 PopGE
	var_13_bool = 0; // 0x893 PushV
	var_13_bool = 1; // 0x894 MovB
	func_2012(var_13_bool); // 0x895 Call
	return 0; // 0x897 Return
}


func_2200(var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0x898 PushV
	var_26_bool = GlobalVars[0]; // 0x899 PushGE
	if(var_26_bool == 0) goto Label_2210; // 0x89a JumpB
	IsOverrideActive(var_25_bool); // 0x89b Func
	var_27_bool = var_25_bool == 0; // 0x89d Not
	if(var_27_bool == 0) goto Label_2209; // 0x89e JumpB
	WorkWithCorpse(var_23_object); // 0x89f Func
	
Label_2209:
	return 2; // 0x8a1 Return
	
Label_2210:
	return 2; // 0x8a2 Return
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


func_163()
{
	var_130_bool = 0; // 0xa3 PushV
	func_1776(var_130_bool); // 0xa4 Call
	var_133_bool = var_130_bool == 0; // 0xa6 Not
	if(var_133_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1981(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_2211(var_56_bool)
{
	var_56_bool = 0; // 0x8a3 MovB
	return 0; // 0x8a4 Return
}


func_2213(var_15_bool, var_16_object, var_17_object)
{
	var_18_string = ""; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; // 0x8a5 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x8a6 PushV
	var_23_object = var_17_object; // 0x8a7 Mov
	var_24_string = "class"; // 0x8a8 MovS
	func_1557(var_22_bool, var_23_object, var_24_string); // 0x8a9 Call
	var_31_bool = var_22_bool == 0; // 0x8ab Not
	if(var_31_bool == 0) goto Label_2223; // 0x8ac JumpB
	var_15_bool = 0; // 0x8ad MovB
	return 4; // 0x8ae Return
	
Label_2223:
	var_32_string = "class"; // 0x8af PushS
	GetProperty(var_32_string, var_20_string); // 0x8b0 ObjFunc
	var_33_string = "rat"; // 0x8b2 PushS
	var_34_bool = var_20_string == var_33_string; // 0x8b3 Eq
	if(var_34_bool == 0) goto Label_2232; // 0x8b4 JumpB
	var_15_bool = 0; // 0x8b5 MovB
	return 4; // 0x8b6 Return
	
Label_2232:
	var_35_string = "dog"; // 0x8b8 PushS
	var_36_bool = var_20_string == var_35_string; // 0x8b9 Eq
	if(var_36_bool == 0) goto Label_2237; // 0x8ba JumpB
	var_15_bool = 0; // 0x8bb MovB
	return 4; // 0x8bc Return
	
Label_2237:
	CanSee(var_21_bool, var_16_object); // 0x8bd Func
	var_37_bool = 0; // 0x8bf PushV
	var_37_bool = 1; // 0x8c0 MovB
	var_38_bool = var_21_bool; // 0x8c1 Push
	if(var_38_bool == 0) goto Label_2251; // 0x8c2 JumpB
	var_39_float = 0; var_40_object = Obj(); // 0x8c3 PushV
	var_40_object = var_16_object; // 0x8c4 Mov
	func_1549(var_40_object); // 0x8c5 Call
	var_47_float = 250000.0; // 0x8c7 PushF
	var_48_bool = var_39_float <= var_47_float; // 0x8c8 LE
	if(var_48_bool == 0) goto Label_2251; // 0x8c9 JumpB
	var_37_bool = 0; // 0x8ca MovB
	
Label_2251:
	if(var_37_bool == 0) goto Label_2257; // 0x8cb JumpB
	var_49_float = -0.3; // 0x8cc PushF
	ReportReputationChange(var_16_object, var_17_object, var_49_float); // 0x8cd Func
	var_15_bool = 1; // 0x8cf MovB
	return 4; // 0x8d0 Return
	
Label_2257:
	var_15_bool = 0; // 0x8d1 MovB
	return 4; // 0x8d2 Return
}


func_696(var_0_bool)
{
	var_71_object = Obj(); // 0x2b8 PushV
	var_71_object = var_0_bool; // 0x2b9 MovT
	func_1781(var_71_object); // 0x2ba Call
	return 0; // 0x2bc Return
}


func_1209(var_389_bool, var_390_float)
{
	var_391_float = 0; var_392_bool = 0; var_393_float = 0; var_394_bool = 0; // 0x4b9 PushV
	rand(var_393_float); // 0x4ba Func
	var_395_bool = var_393_float < var_390_float; // 0x4bc LT
	if(var_395_bool == 0) goto Label_1229; // 0x4bd JumpB
	
Label_1214:
	IsAnimationPlaying(var_394_bool); // 0x4be Func
	var_396_bool = var_394_bool == 0; // 0x4c0 Not
	if(var_396_bool == 0) goto Label_1219; // 0x4c1 JumpB
	goto Label_1228; // 0x4c2 Jump
	
Label_1228:
	goto Label_1231; // 0x4cc Jump
	
Label_1231:
	var_389_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1219:
	var_397_bool = 0; // 0x4c3 PushV
	func_1273(var_394_bool, var_397_bool); // 0x4c4 Call
	if(var_397_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_389_bool = 1; // 0x4c7 MovB
	return 4; // 0x4c8 Return
	
Label_1225:
	sync(); // 0x4c9 Func
	goto Label_1214; // 0x4cb Jump
	
Label_1229:
	WaitForAnimEnd(); // 0x4cd Func
}


func_1233(var_0_bool, var_231_bool, var_232_float)
{
	var_233_bool = 0; var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_float = 0; var_238_bool = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_float = 0; // 0x4d1 PushV
	
Label_1234:
	IsAnimationPlaying(var_238_bool); // 0x4d2 Func
	var_243_bool = var_238_bool == 0; // 0x4d4 Not
	if(var_243_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1271; // 0x4d6 Jump
	
Label_1271:
	var_231_bool = 0; // 0x4f7 MovB
	return 10; // 0x4f8 Return
	
Label_1239:
	var_244_bool = 0; // 0x4d7 PushV
	func_1273(var_242_float, var_244_bool); // 0x4d8 Call
	if(var_244_bool == 0) goto Label_1245; // 0x4da JumpB
	var_231_bool = 1; // 0x4db MovB
	return 10; // 0x4dc Return
	
Label_1245:
	var_269_bool = 0; var_270_object = Obj(); // 0x4dd PushV
	var_270_object = var_0_bool; // 0x4de MovT
	func_1674(var_269_bool, var_270_object); // 0x4df Call
	var_271_bool = var_269_bool == 0; // 0x4e1 Not
	if(var_271_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_231_bool = 0; // 0x4e3 MovB
	return 10; // 0x4e4 Return
	
Label_1253:
	GetPFPosition(var_239_cvector); // 0x4e5 TObjFunc
	GetPFPosition(var_240_cvector); // 0x4e7 Func
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x4e9 Sub2
	var_242_float = var_241_cvector | var_241_cvector; // 0x4ea Or2
	var_272_float = var_232_float * var_232_float; // 0x4eb Mult
	var_273_bool = var_242_float < var_272_float; // 0x4ec LT
	if(var_273_bool == 0) goto Label_1268; // 0x4ed JumpB
	var_274_bool = 0; var_275_float = 0; // 0x4ee PushV
	var_275_float = var_232_float; // 0x4ef Mov
	func_1129(var_242_float, var_274_bool, var_275_float); // 0x4f0 Call
	var_231_bool = 1; // 0x4f2 MovB
	return 10; // 0x4f3 Return
	
Label_1268:
	sync(); // 0x4f4 Func
	goto Label_1234; // 0x4f6 Jump
}


func_2259()
{
	var_65_bool = GlobalVars[0]; // 0x8d4 PushGE
	var_65_bool = 1; // 0x8d5 MovB
	GlobalVars[0] = var_65_bool; // 0x8d6 PopGE
	var_66_int = 50; // 0x8d7 PushI
	var_67_int = 40; // 0x8d8 PushI
	SetRTEnvelope(var_66_int, var_67_int); // 0x8d9 Func
	return 0; // 0x8db Return
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


func_1776(var_130_bool)
{
	var_131_bool = 0; var_132_bool = 0; // 0x6f0 PushV
	IsLoaded(var_132_bool); // 0x6f1 Func
	var_130_bool = var_132_bool; // 0x6f3 Mov
	return 2; // 0x6f4 Return
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


func_1273(var_0_bool, var_244_bool)
{
	var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_float = 0; var_249_float = 0; var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_float = 0; var_254_float = 0; // 0x4f9 PushV
	var_255_bool = 0; var_256_object = Obj(); // 0x4fa PushV
	var_256_object = var_0_bool; // 0x4fb MovT
	func_1674(var_255_bool, var_256_object); // 0x4fc Call
	var_257_bool = var_255_bool == 0; // 0x4fe Not
	if(var_257_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_244_bool = 0; // 0x500 MovB
	return 10; // 0x501 Return
	
Label_1282:
	var_258_bool = 0; // 0x502 PushV
	func_1325(var_254_float, var_258_bool); // 0x503 Call
	if(var_258_bool == 0) goto Label_1304; // 0x505 JumpB
	GetPFPosition(var_250_cvector); // 0x506 TObjFunc
	GetPFPosition(var_251_cvector); // 0x508 Func
	var_252_cvector = var_250_cvector - var_251_cvector; // 0x50a Sub2
	var_253_float = var_252_cvector | var_252_cvector; // 0x50b Or2
	GetAttackDistance(var_254_float); // 0x50c TObjFunc
	var_259_int = 50; // 0x50e PushI
	var_254_float = var_254_float + var_259_int; // 0x50f Add2
	var_260_float = var_254_float * var_254_float; // 0x510 Mult
	var_261_bool = var_253_float <= var_260_float; // 0x511 LE
	if(var_261_bool == 0) goto Label_1304; // 0x512 JumpB
	func_1306(var_254_float); // 0x514 Call
	var_244_bool = 1; // 0x516 MovB
	return 10; // 0x517 Return
	
Label_1304:
	var_244_bool = 0; // 0x518 MovB
	return 10; // 0x519 Return
}


func_1792(var_353_float, var_354_float, var_355_float)
{
	var_358_bool = var_354_float < var_355_float; // 0x701 LT
	if(var_358_bool == 0) goto Label_1797; // 0x702 JumpB
	var_353_float = var_354_float; // 0x703 Mov
	goto Label_1798; // 0x704 Jump
	
Label_1798:
	return 0; // 0x706 Return
	
Label_1797:
	var_353_float = var_355_float; // 0x705 Mov
}


func_1799(var_363_float, var_364_float, var_365_float, var_366_float)
{
	var_367_bool = var_364_float < var_365_float; // 0x708 LT
	if(var_367_bool == 0) goto Label_1804; // 0x709 JumpB
	var_363_float = var_365_float; // 0x70a Mov
	return 0; // 0x70b Return
	
Label_1804:
	var_368_bool = var_364_float > var_366_float; // 0x70c GT
	if(var_368_bool == 0) goto Label_1808; // 0x70d JumpB
	var_363_float = var_366_float; // 0x70e Mov
	return 0; // 0x70f Return
	
Label_1808:
	var_363_float = var_364_float; // 0x710 Mov
	return 0; // 0x711 Return
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


func_1306(var_0_bool)
{
	var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); // 0x51a PushV
	Face(var_0_bool); // 0x51b Func
	var_266_string = "all"; // 0x51d PushS
	var_267_string = "bjump"; // 0x51e PushS
	PlayAnimation(var_266_string, var_267_string); // 0x51f Func
	GetPFPosition(var_264_cvector); // 0x521 TObjFunc
	GetPFPosition(var_265_cvector); // 0x523 Func
	WaitForAnimEnd(); // 0x525 Func
	StopAsync(); // 0x527 Func
	var_268_cvector = CVector(0.0, 0.0, 0.0); // 0x529 PushVec
	SetSpeed(var_268_cvector); // 0x52a Func
	return 4; // 0x52c Return
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


func_1325(var_0_bool, var_223_bool)
{
	var_224_bool = 0; var_225_bool = 0; // 0x52d PushV
	var_226_string = "IsAttacking"; // 0x52e PushS
	var_227_int = 1; // 0x52f PushI
	var_228_bool = IsFuncExist(var_0_bool, var_226_string, var_227_int); // 0x530 FuncExist
	if(var_228_bool == 0) goto Label_1334; // 0x531 JumpB
	IsAttacking(var_225_bool); // 0x532 TObjFunc
	var_223_bool = var_225_bool; // 0x534 Mov
	return 2; // 0x535 Return
	
Label_1334:
	var_223_bool = 0; // 0x536 MovB
	return 2; // 0x537 Return
}


func_1846(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x736 PushV
	GetGameTime(var_24_float); // 0x737 Func
	var_25_int = 1; // 0x739 PushI
	var_26_int = 0; // 0x73a PushV
	var_27_int = 24; // 0x73b PushI
	var_26_int = var_24_float / var_24_float; // 0x73c Div2
	var_22_int = var_25_int + var_26_int; // 0x73d Add2
	return 2; // 0x73e Return
}


func_311(var_2_bool)
{
	var_12_int = 110; // 0x137 PushI
	KillTimer(var_12_int); // 0x138 Func
	var_2_bool = 0; // 0x13a TMovB
	func_440(var_10_bool, var_11_object); // 0x13c Call
	return 0; // 0x13e Return
}


func_1336(var_2_bool, var_4_object)
{
	var_285_float = 0; var_286_int = 0; var_287_float = 0; var_288_int = 0; // 0x538 PushV
	var_289_bool = var_2_bool == 0; // 0x539 Not
	if(var_289_bool == 0) goto Label_1340; // 0x53a JumpB
	return 4; // 0x53b Return
	
Label_1340:
	var_290_object = var_4_object; // 0x53c PushT
	if(var_290_object == 0) goto Label_1348; // 0x53d JumpB
	var_291_int = -1; // 0x53e PushI
	var_4_object = var_4_object + var_291_int; // 0x53f Add2
	var_292_int = 0; // 0x540 PushI
	var_293_bool = var_4_object > var_292_int; // 0x541 GT
	if(var_293_bool == 0) goto Label_1348; // 0x542 JumpB
	return 4; // 0x543 Return
	
Label_1348:
	rand(var_287_float); // 0x544 Func
	var_294_float = 0; // 0x546 PushV
	func_1374(var_294_float); // 0x547 Call
	var_295_bool = var_287_float < var_294_float; // 0x549 LT
	if(var_295_bool == 0) goto Label_1367; // 0x54a JumpB
	irand(var_288_int, var_287_float); // 0x54b Func
	var_296_int = 1; // 0x54d PushI
	var_288_int = var_288_int + var_296_int; // 0x54e Add2
	var_297_string = "attack"; // 0x54f PushS
	var_298_int = var_297_string + var_288_int; // 0x550 Add
	Speak(var_298_int); // 0x551 Func
	var_299_int = 0; // 0x553 PushV
	func_1372(var_299_int); // 0x554 Call
	var_4_object = var_299_int; // 0x555 TMov
	
Label_1367:
	return 4; // 0x557 Return
}


func_319(var_2_bool)
{
	var_61_int = 110; // 0x13f PushI
	KillTimer(var_61_int); // 0x140 Func
	var_2_bool = 0; // 0x142 TMovB
	func_447(var_15_bool, var_16_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_1855(var_12_object)
{
	var_13_object = Obj(); // 0x740 PushV
	var_13_object = var_12_object; // 0x741 Mov
	TaskCall(0); // 0x742 TaskCall
	func_0(var_13_object); // 0x743 Call
	TaskReturn(); // 0x744 TaskReturn
	return 0; // 0x746 Return
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
	func_1914(var_55_object); // 0x162 Call
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
	func_1923(var_62_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_127_int = 110; // 0x173 PushI
	var_128_float = 10.0; // 0x174 PushF
	SetTimer(var_127_int, var_128_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_1368(var_370_int)
{
	var_370_int = 0; // 0x558 MovI
	return 0; // 0x559 Return
}


func_1370()
{
	return 0; // 0x55b Return
}


func_1372(var_299_int)
{
	var_299_int = 1; // 0x55c MovI
	return 0; // 0x55d Return
}


func_1374(var_294_float)
{
	var_294_float = 0.5; // 0x55e MovF
	return 0; // 0x55f Return
}


func_1890(var_179_string, var_180_int)
{
	var_181_string = ""; var_182_string = ""; // 0x762 PushV
	var_182_string = "idle"; // 0x763 MovS
	var_183_int = var_180_int; // 0x764 Push
	if(var_183_int == 0) goto Label_1895; // 0x765 JumpB
	var_182_string = var_182_string + var_180_int; // 0x766 Add2
	
Label_1895:
	var_179_string = var_182_string; // 0x767 Mov
	return 2; // 0x768 Return
}


func_1383(var_0_bool, var_1_bool, var_147_bool, var_148_object, var_149_float, var_150_float, var_151_bool, var_152_bool)
{
	var_155_bool = 0; var_156_bool = 0; var_157_object = Obj(); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_float = 0; var_162_object = Obj(); var_163_bool = 0; var_164_bool = 0; var_165_object = Obj(); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_float = 0; var_170_object = Obj(); // 0x567 PushV
	var_0_bool = 0; // 0x568 TMovB
	var_1_bool = var_148_object; // 0x569 TMov
	var_164_bool = var_152_bool; // 0x56a Mov
	
Label_1387:
	var_171_bool = 0; var_172_object = Obj(); // 0x56b PushV
	var_172_object = var_148_object; // 0x56c Mov
	func_1523(var_171_bool, var_172_object); // 0x56d Call
	var_175_bool = var_171_bool == 0; // 0x56f Not
	if(var_175_bool == 0) goto Label_1395; // 0x570 JumpB
	var_147_bool = 0; // 0x571 MovB
	return 16; // 0x572 Return
	
Label_1395:
	GetPosition(var_166_cvector); // 0x573 ObjFunc
	GetPosition(var_167_cvector); // 0x575 Func
	var_168_cvector = var_166_cvector - var_167_cvector; // 0x577 Sub2
	var_169_float = var_168_cvector | var_168_cvector; // 0x578 Or2
	var_176_bool = 0; // 0x579 PushV
	var_176_bool = 0; // 0x57a MovB
	var_177_int = 0; // 0x57b PushI
	var_178_bool = var_150_float > var_177_int; // 0x57c GT
	if(var_178_bool == 0) goto Label_1410; // 0x57d JumpB
	var_179_float = var_150_float * var_150_float; // 0x57e Mult
	var_180_bool = var_169_float > var_179_float; // 0x57f GT
	if(var_180_bool == 0) goto Label_1410; // 0x580 JumpB
	var_176_bool = 1; // 0x581 MovB
	
Label_1410:
	if(var_176_bool == 0) goto Label_1415; // 0x582 JumpB
	Stop(); // 0x583 Func
	var_147_bool = 0; // 0x585 MovB
	return 16; // 0x586 Return
	
Label_1415:
	var_181_float = var_149_float * var_149_float; // 0x587 Mult
	var_182_bool = var_169_float > var_181_float; // 0x588 GT
	if(var_182_bool == 0) goto Label_1477; // 0x589 JumpB
	GetPFPosition(var_166_cvector); // 0x58a ObjFunc
	FindPathTo(var_170_object, var_166_cvector); // 0x58c Func
	var_183_bool = var_170_object != 0; // 0x58e NullNeq
	if(var_183_bool == 0) goto Label_1426; // 0x58f JumpB
	var_165_object = var_170_object; // 0x590 Mov
	var_170_object = 0; // 0x591 SetNull
	
Label_1426:
	var_184_bool = var_165_object != 0; // 0x592 NullNeq
	if(var_184_bool == 0) goto Label_1459; // 0x593 JumpB
	var_185_bool = var_164_bool; // 0x594 Push
	if(var_185_bool == 0) goto Label_1436; // 0x595 JumpB
	var_164_bool = 0; // 0x596 MovB
	RotatePath(var_165_object, var_163_bool); // 0x597 Func
	var_186_bool = var_163_bool == 0; // 0x599 Not
	if(var_186_bool == 0) goto Label_1436; // 0x59a JumpB
	goto Label_1483; // 0x59b Jump
	
Label_1483:
	var_147_bool = !var_0_bool; // 0x5cb Not2
	return 16; // 0x5cc Return
	
Label_1436:
	var_187_int = 0; // 0x59c PushI
	var_188_float = 0.3; // 0x59d PushF
	SetTimer(var_187_int, var_188_float); // 0x59e Func
	var_189_string = ""; // 0x5a0 PushV
	func_1530(var_189_string); // 0x5a1 Call
	var_190_string = ""; // 0x5a3 PushV
	func_1532(var_190_string); // 0x5a4 Call
	FollowPath(var_165_object, var_151_bool, var_163_bool, var_189_string, var_190_string); // 0x5a6 Func
	var_191_bool = var_163_bool == 0; // 0x5a8 Not
	if(var_191_bool == 0) goto Label_1457; // 0x5a9 JumpB
	var_192_bool = var_0_bool; // 0x5aa PushT
	if(var_192_bool == 0) goto Label_1455; // 0x5ab JumpB
	var_165_object = 0; // 0x5ac SetNull
	goto Label_1483; // 0x5ad Jump
	
Label_1455:
	goto Label_1482; // 0x5af Jump
	
Label_1482:
	goto Label_1387; // 0x5ca Jump
	
Label_1457:
	var_165_object = 0; // 0x5b1 SetNull
	goto Label_1475; // 0x5b2 Jump
	
Label_1475:
	var_170_object = 0; // 0x5c3 SetNull
	goto Label_1481; // 0x5c4 Jump
	
Label_1481:
	var_165_object = 0; // 0x5c9 SetNull
	
Label_1459:
	var_193_int = 0; // 0x5b3 PushI
	KillTimer(var_193_int); // 0x5b4 Func
	var_194_float = 0.5; // 0x5b6 PushF
	Sleep(var_194_float, var_163_bool); // 0x5b7 Func
	var_195_bool = var_163_bool == 0; // 0x5b9 Not
	if(var_195_bool == 0) goto Label_1471; // 0x5ba JumpB
	var_196_bool = var_0_bool; // 0x5bb PushT
	if(var_196_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_165_object = 0; // 0x5bd SetNull
	goto Label_1483; // 0x5be Jump
	
Label_1471:
	var_197_int = 0; // 0x5bf PushI
	var_198_float = 0.3; // 0x5c0 PushF
	SetTimer(var_197_int, var_198_float); // 0x5c1 Func
	
Label_1477:
	var_199_int = 0; // 0x5c5 PushI
	KillTimer(var_199_int); // 0x5c6 Func
	goto Label_1483; // 0x5c8 Jump
}


func_871(var_90_object)
{
	var_96_object = Obj(); var_97_bool = 0; var_98_float = 0; // 0x368 PushV
	var_96_object = var_90_object; // 0x369 Mov
	var_97_bool = 1; // 0x36a MovB
	var_98_float = 180.0; // 0x36b MovF
	func_885(var_91_object, var_92_int, var_93_int, var_94_bool, var_95_int, var_90_object, var_96_object, var_97_bool, var_98_float); // 0x36c Call
	return 0; // 0x36e Return
}


func_1897(var_173_int)
{
	var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_bool = 0; // 0x769 PushV
	var_176_int = 0; // 0x76a MovI
	
Label_1899:
	var_178_string = "all"; // 0x76b PushS
	var_179_string = ""; var_180_int = 0; // 0x76c PushV
	var_180_int = var_176_int; // 0x76d Mov
	func_1890(var_179_string, var_180_int); // 0x76e Call
	HasAnimation(var_177_bool, var_178_string, var_179_string); // 0x770 Func
	var_184_bool = var_177_bool == 0; // 0x772 Not
	if(var_184_bool == 0) goto Label_1909; // 0x773 JumpB
	goto Label_1912; // 0x774 Jump
	
Label_1912:
	var_173_int = var_176_int; // 0x778 Mov
	return 4; // 0x779 Return
	
Label_1909:
	var_185_int = 1; // 0x775 PushI
	var_176_int = var_176_int + var_185_int; // 0x776 Add2
	goto Label_1899; // 0x777 Jump
}


func_879(var_314_float)
{
	var_314_float = 0.05; // 0x370 MovF
	return 0; // 0x371 Return
}


func_882(var_321_int)
{
	var_321_int = 0; // 0x373 MovI
	return 0; // 0x374 Return
}


func_885(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_96_object, var_97_bool, var_98_float, var_153_bool)
{
	var_99_bool = 0; var_100_bool = 0; var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_bool = 0; var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_bool = 0; var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_float = 0; // 0x375 PushV
	var_1_bool = 0; // 0x376 TMovI
	
Label_887:
	var_119_string = "all"; // 0x377 PushS
	var_120_string = "attack_begin"; // 0x378 PushS
	var_121_int = 1; // 0x379 PushI
	var_122_int = var_1_bool + var_121_int; // 0x37a Add
	var_123_int = var_120_string + var_122_int; // 0x37b Add
	HasAnimation(var_109_bool, var_119_string, var_123_int); // 0x37c Func
	var_124_bool = var_109_bool == 0; // 0x37e Not
	if(var_124_bool == 0) goto Label_897; // 0x37f JumpB
	goto Label_900; // 0x380 Jump
	
Label_900:
	var_2_bool = 0; // 0x384 TMovI
	
Label_901:
	var_125_string = "attack"; // 0x385 PushS
	var_126_int = 1; // 0x386 PushI
	var_127_int = var_2_bool + var_126_int; // 0x387 Add
	var_128_int = var_125_string + var_127_int; // 0x388 Add
	IsExisting3DSound(var_110_bool, var_128_int); // 0x389 Func
	var_129_bool = var_110_bool == 0; // 0x38b Not
	if(var_129_bool == 0) goto Label_910; // 0x38c JumpB
	goto Label_913; // 0x38d Jump
	
Label_913:
	var_4_object = 0; // 0x391 TMovI
	var_130_string = "@GetAttackDistance"; // 0x392 PushS
	var_131_int = 1; // 0x393 PushI
	var_132_bool = IsFuncExist(var_96_object, var_130_string, var_131_int); // 0x394 FuncExist
	if(var_132_bool == 0) goto Label_923; // 0x395 JumpB
	GetAttackDistance(var_111_float); // 0x396 ObjFunc
	var_133_int = 50; // 0x398 PushI
	var_111_float = var_111_float + var_133_int; // 0x399 Add2
	goto Label_924; // 0x39a Jump
	
Label_924:
	var_134_int = 150; // 0x39c PushI
	var_135_bool = var_111_float >= var_134_int; // 0x39d GE
	if(var_135_bool == 0) goto Label_928; // 0x39e JumpB
	var_111_float = 150; // 0x39f MovI
	
Label_928:
	var_3_object = 0; // 0x3a0 TMovB
	var_0_bool = var_96_object; // 0x3a1 TMov
	IsPlayerActor(var_0_bool, var_114_bool); // 0x3a2 Func
	var_136_bool = var_97_bool; // 0x3a4 Push
	if(var_136_bool == 0) goto Label_936; // 0x3a5 JumpB
	var_115_bool = 0; // 0x3a6 MovB
	goto Label_937; // 0x3a7 Jump
	
Label_937:
	var_137_bool = 0; // 0x3a9 PushV
	var_137_bool = 0; // 0x3aa MovB
	var_138_bool = 0; var_139_object = Obj(); // 0x3ab PushV
	var_139_object = var_0_bool; // 0x3ac MovT
	func_1674(var_138_bool, var_139_object); // 0x3ad Call
	if(var_138_bool == 0) goto Label_947; // 0x3af JumpB
	var_140_bool = var_3_object == 0; // 0x3b0 Not
	if(var_140_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_137_bool = 1; // 0x3b2 MovB
	
Label_947:
	if(var_137_bool == 0) goto Label_1073; // 0x3b3 JumpB
	GetPFPosition(var_112_cvector); // 0x3b4 TObjFunc
	GetPFPosition(var_113_cvector); // 0x3b6 Func
	var_116_cvector = var_112_cvector - var_113_cvector; // 0x3b8 Sub2
	var_117_float = var_116_cvector | var_116_cvector; // 0x3b9 Or2
	var_141_float = 400.0; // 0x3ba PushF
	var_142_int = var_141_float + var_111_float; // 0x3bb Add
	var_143_float = 400.0; // 0x3bc PushF
	var_144_int = var_143_float + var_111_float; // 0x3bd Add
	var_145_float = var_142_int * var_144_int; // 0x3be Mult
	var_146_bool = var_117_float >= var_145_float; // 0x3bf GE
	if(var_146_bool == 0) goto Label_976; // 0x3c0 JumpB
	var_147_bool = 0; var_148_object = Obj(); var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_bool = 0; // 0x3c1 PushV
	var_148_object = var_0_bool; // 0x3c2 MovT
	var_149_float = var_111_float; // 0x3c3 Mov
	var_150_float = 3000.0; // 0x3c4 MovF
	var_151_bool = 1; // 0x3c5 MovB
	var_152_bool = 0; // 0x3c6 MovB
	TaskCall(5); // 0x3c7 TaskCall
	func_1383(var_153_bool, var_154_object, var_147_bool, var_148_object, var_149_float, var_150_float, var_151_bool, var_152_bool); // 0x3c8 Call
	TaskReturn(); // 0x3c9 TaskReturn
	var_200_bool = var_153_bool == 0; // 0x3cb Not
	if(var_200_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_1073; // 0x3cd Jump
	
Label_1073:
	WaitForAnimEnd(); // 0x431 Func
	var_201_object = var_3_object; // 0x433 PushT
	if(var_201_object == 0) goto Label_1078; // 0x434 JumpB
	return 20; // 0x435 Return
	
Label_1078:
	var_202_string = "all"; // 0x436 PushS
	var_203_string = "attack_off"; // 0x437 PushS
	PlayAnimation(var_202_string, var_203_string); // 0x438 Func
	WaitForAnimEnd(); // 0x43a Func
	var_204_bool = var_114_bool; // 0x43c Push
	if(var_204_bool == 0) goto Label_1089; // 0x43d JumpB
	var_205_float = 2.0; // 0x43e PushF
	Sleep(var_205_float); // 0x43f Func
	
Label_1089:
	return 20; // 0x441 Return
	
Label_974:
	var_115_bool = 0; // 0x3ce MovB
	goto Label_1072; // 0x3cf Jump
	
Label_1072:
	goto Label_937; // 0x430 Jump
	
Label_976:
	var_206_float = var_98_float * var_98_float; // 0x3d0 Mult
	var_207_bool = var_117_float >= var_206_float; // 0x3d1 GE
	if(var_207_bool == 0) goto Label_1064; // 0x3d2 JumpB
	var_208_bool = var_115_bool == 0; // 0x3d3 Not
	if(var_208_bool == 0) goto Label_994; // 0x3d4 JumpB
	var_209_object = Obj(); // 0x3d5 PushV
	var_209_object = var_0_bool; // 0x3d6 MovT
	func_1765(); // 0x3d7 Call
	var_218_string = "all"; // 0x3d9 PushS
	var_219_string = "attack_on"; // 0x3da PushS
	PlayAnimation(var_218_string, var_219_string); // 0x3db Func
	WaitForAnimEnd(); // 0x3dd Func
	StopAsync(); // 0x3df Func
	var_115_bool = 1; // 0x3e1 MovB
	
Label_994:
	rand(var_118_float); // 0x3e2 Func
	var_220_bool = 0; // 0x3e4 PushV
	var_220_bool = 1; // 0x3e5 MovB
	var_221_float = 0.6; // 0x3e6 PushF
	var_222_bool = var_118_float < var_221_float; // 0x3e7 LT
	if(var_222_bool == 0) goto Label_1006; // 0x3e8 JumpB
	var_223_bool = 0; // 0x3e9 PushV
	func_1325(var_220_bool, var_223_bool); // 0x3ea Call
	if(var_223_bool == 0) goto Label_1006; // 0x3ec JumpB
	var_220_bool = 0; // 0x3ed MovB
	
Label_1006:
	if(var_220_bool == 0) goto Label_1020; // 0x3ee JumpB
	Face(var_0_bool); // 0x3ef Func
	var_229_string = "all"; // 0x3f1 PushS
	var_230_string = "attack_stay"; // 0x3f2 PushS
	PlayAnimation(var_229_string, var_230_string); // 0x3f3 Func
	var_231_bool = 0; var_232_float = 0; // 0x3f5 PushV
	var_232_float = var_98_float; // 0x3f6 Mov
	func_1233(var_118_float, var_231_bool, var_232_float); // 0x3f7 Call
	StopAsync(); // 0x3f9 Func
	goto Label_1063; // 0x3fb Jump
	
Label_1063:
	goto Label_1072; // 0x427 Jump
	
Label_1020:
	Face(var_0_bool); // 0x3fc Func
	var_398_string = "all"; // 0x3fe PushS
	var_399_string = "fjump"; // 0x3ff PushS
	PlayAnimation(var_398_string, var_399_string); // 0x400 Func
	WaitForAnimEnd(); // 0x402 Func
	var_400_cvector = CVector(0.0, 0.0, 0.0); // 0x404 PushVec
	SetSpeed(var_400_cvector); // 0x405 Func
	Stop(); // 0x407 Func
	StopAsync(); // 0x409 Func
	var_401_bool = 0; // 0x40b PushV
	func_1325(var_118_float, var_401_bool); // 0x40c Call
	var_402_bool = var_401_bool == 0; // 0x40e Not
	if(var_402_bool == 0) goto Label_1063; // 0x40f JumpB
	var_403_bool = 0; var_404_object = Obj(); // 0x410 PushV
	var_404_object = var_0_bool; // 0x411 MovT
	func_1674(var_403_bool, var_404_object); // 0x412 Call
	var_405_bool = var_403_bool == 0; // 0x414 Not
	if(var_405_bool == 0) goto Label_1047; // 0x415 JumpB
	goto Label_1073; // 0x416 Jump
	
Label_1047:
	GetPFPosition(var_112_cvector); // 0x417 TObjFunc
	GetPFPosition(var_113_cvector); // 0x419 Func
	var_116_cvector = var_112_cvector - var_113_cvector; // 0x41b Sub2
	var_117_float = var_116_cvector | var_116_cvector; // 0x41c Or2
	var_406_float = var_98_float * var_98_float; // 0x41d Mult
	var_407_bool = var_117_float < var_406_float; // 0x41e LT
	if(var_407_bool == 0) goto Label_1063; // 0x41f JumpB
	var_408_bool = 0; var_409_float = 0; // 0x420 PushV
	var_409_float = var_98_float; // 0x421 Mov
	func_1129(var_118_float, var_408_bool, var_409_float); // 0x422 Call
	var_410_bool = var_408_bool == 0; // 0x424 Not
	if(var_410_bool == 0) goto Label_1063; // 0x425 JumpB
	goto Label_1073; // 0x426 Jump
	
Label_1064:
	var_411_bool = 0; var_412_float = 0; // 0x428 PushV
	var_412_float = var_98_float; // 0x429 Mov
	func_1129(var_118_float, var_411_bool, var_412_float); // 0x42a Call
	var_413_bool = var_411_bool == 0; // 0x42c Not
	if(var_413_bool == 0) goto Label_1071; // 0x42d JumpB
	goto Label_1073; // 0x42e Jump
	
Label_1071:
	var_115_bool = 1; // 0x42f MovB
	
Label_936:
	var_115_bool = 1; // 0x3a8 MovB
	
Label_923:
	var_111_float = var_98_float; // 0x39b Mov
	
Label_910:
	var_414_int = 1; // 0x38e PushI
	var_2_bool = var_2_bool + var_414_int; // 0x38f Add2
	goto Label_901; // 0x390 Jump
	
Label_897:
	var_415_int = 1; // 0x381 PushI
	var_1_bool = var_1_bool + var_415_int; // 0x382 Add2
	goto Label_887; // 0x383 Jump
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


func_1914(var_54_int)
{
	var_56_bool = 0; // 0x77b PushV
	func_2211(var_56_bool); // 0x77c Call
	if(var_56_bool == 0) goto Label_1921; // 0x77e JumpB
	var_54_int = 2; // 0x77f MovI
	goto Label_1922; // 0x780 Jump
	
Label_1922:
	return 0; // 0x782 Return
	
Label_1921:
	var_54_int = 0; // 0x781 MovI
}


func_1923(var_62_object)
{
	var_63_object = Obj(); // 0x784 PushV
	var_63_object = var_62_object; // 0x785 Mov
	TaskCall(3); // 0x786 TaskCall
	func_645(var_64_object, var_63_object); // 0x787 Call
	TaskReturn(); // 0x788 TaskReturn
	return 0; // 0x78a Return
}


func_1931(var_52_int, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj(); // 0x78c PushV
	var_55_object = var_53_object; // 0x78d Mov
	func_1674(var_54_bool, var_55_object); // 0x78e Call
	if(var_54_bool == 0) goto Label_1939; // 0x790 JumpB
	var_52_int = 2; // 0x791 MovI
	goto Label_1940; // 0x792 Jump
	
Label_1940:
	return 0; // 0x794 Return
	
Label_1939:
	var_52_int = 0; // 0x793 MovI
}


func_1941(var_89_object)
{
	var_90_object = Obj(); // 0x796 PushV
	var_90_object = var_89_object; // 0x797 Mov
	TaskCall(4); // 0x798 TaskCall
	func_871(var_90_object); // 0x799 Call
	TaskReturn(); // 0x79a TaskReturn
	return 0; // 0x79c Return
}


func_1949(var_50_int, var_51_object)
{
	var_52_int = 0; var_53_object = Obj(); // 0x79e PushV
	var_53_object = var_51_object; // 0x79f Mov
	func_1931(var_52_int, var_53_object); // 0x7a0 Call
	var_50_int = var_52_int; // 0x7a1 Mov
	return 0; // 0x7a3 Return
}


func_1956(var_88_object)
{
	var_89_object = Obj(); // 0x7a5 PushV
	var_89_object = var_88_object; // 0x7a6 Mov
	func_1941(var_89_object); // 0x7a7 Call
	return 0; // 0x7a9 Return
}


func_1962(var_14_int)
{
	var_14_int = 0; // 0x7ab MovI
	return 0; // 0x7ac Return
}


func_1965()
{
	return 0; // 0x7ae Return
}


func_1967(var_15_int)
{
	var_15_int = 0; // 0x7b0 MovI
	return 0; // 0x7b1 Return
}


func_1970()
{
	return 0; // 0x7b3 Return
}


func_1972(var_14_int)
{
	var_14_int = 2; // 0x7b5 MovI
	return 0; // 0x7b6 Return
}


func_1975(var_22_object)
{
	var_23_object = Obj(); // 0x7b8 PushV
	var_23_object = var_22_object; // 0x7b9 Mov
	func_2200(var_23_object); // 0x7ba Call
	return 0; // 0x7bc Return
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1b8 TMovB
	var_1_bool = 0; // 0x1b9 TMovB
	Stop(); // 0x1ba Func
	StopGroup0(); // 0x1bc Func
	return 0; // 0x1be Return
}


func_1981()
{
	return 0; // 0x7bd Return
}


func_1982(var_19_int, var_20_int)
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x7be PushV
	var_38_bool = var_19_int > var_20_int; // 0x7bf GT
	if(var_38_bool == 0) goto Label_1989; // 0x7c0 JumpB
	var_39_string = "GenerateMoney: iMin > iMax"; // 0x7c1 PushS
	Trace(var_39_string); // 0x7c2 Func
	return 8; // 0x7c4 Return
	
Label_1989:
	var_34_int = 0; // 0x7c5 MovI
	var_40_bool = var_19_int != var_20_int; // 0x7c6 Neq
	if(var_40_bool == 0) goto Label_1996; // 0x7c7 JumpB
	var_41_int = var_20_int - var_19_int; // 0x7c8 Sub
	irand(var_35_int, var_41_int); // 0x7c9 Func
	goto Label_2000; // 0x7cb Jump
	
Label_2000:
	var_34_int = var_34_int + var_19_int; // 0x7d0 Add2
	var_42_int = 0; // 0x7d1 PushI
	var_43_bool = var_34_int == var_42_int; // 0x7d2 Eq
	if(var_43_bool == 0) goto Label_2005; // 0x7d3 JumpB
	return 8; // 0x7d4 Return
	
Label_2005:
	var_44_string = "Money"; // 0x7d5 PushS
	GetInvItemByName(var_36_int, var_44_string); // 0x7d6 Func
	var_45_int = 0; // 0x7d8 PushI
	AddItem(var_37_bool, var_36_int, var_45_int, var_34_int); // 0x7d9 Func
	return 8; // 0x7db Return
	
Label_1996:
	var_46_int = 0; // 0x7cc PushI
	var_47_bool = var_19_int == var_46_int; // 0x7cd Eq
	if(var_47_bool == 0) goto Label_2000; // 0x7ce JumpB
	return 8; // 0x7cf Return
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1bf TMovB
	var_1_bool = 1; // 0x1c0 TMovB
	Stop(); // 0x1c1 Func
	StopGroup0(); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


func_454(var_155_bool)
{
	var_155_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_2012(var_13_bool)
{
	var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x7dc PushV
	var_18_bool = var_13_bool; // 0x7dd Push
	if(var_18_bool == 0) goto Label_2101; // 0x7de JumpB
	var_19_int = 0; var_20_int = 0; // 0x7df PushV
	var_19_int = 0; // 0x7e0 MovI
	var_21_int = 100; // 0x7e1 PushI
	var_22_int = 0; // 0x7e2 PushV
	func_1846(var_22_int); // 0x7e3 Call
	var_28_int = 100; // 0x7e5 PushI
	var_29_float = var_22_int * var_28_int; // 0x7e6 Mult
	var_20_int = var_21_int + var_29_float; // 0x7e7 Add2
	func_1982(var_19_int, var_20_int); // 0x7e8 Call
	var_48_int = 9; // 0x7ea PushI
	irand(var_16_int, var_48_int); // 0x7eb Func
	var_49_int = 0; // 0x7ed PushI
	var_50_bool = var_16_int == var_49_int; // 0x7ee Eq
	if(var_50_bool == 0) goto Label_2041; // 0x7ef JumpB
	var_51_int = 0; var_52_string = ""; // 0x7f0 PushV
	var_52_string = "lemon"; // 0x7f1 MovS
	func_2187(var_51_int, var_52_string); // 0x7f2 Call
	var_55_int = 0; // 0x7f4 PushI
	var_56_int = 1; // 0x7f5 PushI
	AddItem(var_17_bool, var_51_int, var_55_int, var_56_int); // 0x7f6 Func
	goto Label_2100; // 0x7f8 Jump
	
Label_2100:
	goto Label_2186; // 0x834 Jump
	
Label_2186:
	return 4; // 0x88a Return
	
Label_2041:
	var_57_int = 1; // 0x7f9 PushI
	var_58_bool = var_16_int == var_57_int; // 0x7fa Eq
	if(var_58_bool == 0) goto Label_2053; // 0x7fb JumpB
	var_59_int = 0; var_60_string = ""; // 0x7fc PushV
	var_60_string = "rusk"; // 0x7fd MovS
	func_2187(var_59_int, var_60_string); // 0x7fe Call
	var_61_int = 0; // 0x800 PushI
	var_62_int = 1; // 0x801 PushI
	AddItem(var_17_bool, var_59_int, var_61_int, var_62_int); // 0x802 Func
	goto Label_2100; // 0x804 Jump
	
Label_2053:
	var_63_int = 2; // 0x805 PushI
	var_64_bool = var_16_int == var_63_int; // 0x806 Eq
	if(var_64_bool == 0) goto Label_2065; // 0x807 JumpB
	var_65_int = 0; var_66_string = ""; // 0x808 PushV
	var_66_string = "hook"; // 0x809 MovS
	func_2187(var_65_int, var_66_string); // 0x80a Call
	var_67_int = 0; // 0x80c PushI
	var_68_int = 1; // 0x80d PushI
	AddItem(var_17_bool, var_65_int, var_67_int, var_68_int); // 0x80e Func
	goto Label_2100; // 0x810 Jump
	
Label_2065:
	var_69_int = 4; // 0x811 PushI
	var_70_bool = var_16_int == var_69_int; // 0x812 Eq
	if(var_70_bool == 0) goto Label_2077; // 0x813 JumpB
	var_71_int = 0; var_72_string = ""; // 0x814 PushV
	var_72_string = "syringe"; // 0x815 MovS
	func_2187(var_71_int, var_72_string); // 0x816 Call
	var_73_int = 0; // 0x818 PushI
	var_74_int = 1; // 0x819 PushI
	AddItem(var_17_bool, var_71_int, var_73_int, var_74_int); // 0x81a Func
	goto Label_2100; // 0x81c Jump
	
Label_2077:
	var_75_int = 5; // 0x81d PushI
	var_76_bool = var_16_int == var_75_int; // 0x81e Eq
	if(var_76_bool == 0) goto Label_2089; // 0x81f JumpB
	var_77_int = 0; var_78_string = ""; // 0x820 PushV
	var_78_string = "watch"; // 0x821 MovS
	func_2187(var_77_int, var_78_string); // 0x822 Call
	var_79_int = 0; // 0x824 PushI
	var_80_int = 1; // 0x825 PushI
	AddItem(var_17_bool, var_77_int, var_79_int, var_80_int); // 0x826 Func
	goto Label_2100; // 0x828 Jump
	
Label_2089:
	var_81_int = 6; // 0x829 PushI
	var_82_bool = var_16_int == var_81_int; // 0x82a Eq
	if(var_82_bool == 0) goto Label_2100; // 0x82b JumpB
	var_83_int = 0; var_84_string = ""; // 0x82c PushV
	var_84_string = "razor"; // 0x82d MovS
	func_2187(var_83_int, var_84_string); // 0x82e Call
	var_85_int = 0; // 0x830 PushI
	var_86_int = 1; // 0x831 PushI
	AddItem(var_17_bool, var_83_int, var_85_int, var_86_int); // 0x832 Func
	
Label_2101:
	var_87_int = 0; var_88_int = 0; // 0x835 PushV
	var_87_int = 0; // 0x836 MovI
	var_89_int = 50; // 0x837 PushI
	var_90_int = 0; // 0x838 PushV
	func_1846(var_90_int); // 0x839 Call
	var_91_int = 50; // 0x83b PushI
	var_92_float = var_90_int * var_91_int; // 0x83c Mult
	var_88_int = var_89_int + var_92_float; // 0x83d Add2
	func_1982(var_87_int, var_88_int); // 0x83e Call
	var_93_int = 8; // 0x840 PushI
	irand(var_16_int, var_93_int); // 0x841 Func
	var_94_int = 0; // 0x843 PushI
	var_95_bool = var_16_int == var_94_int; // 0x844 Eq
	if(var_95_bool == 0) goto Label_2127; // 0x845 JumpB
	var_96_int = 0; var_97_string = ""; // 0x846 PushV
	var_97_string = "beads"; // 0x847 MovS
	func_2187(var_96_int, var_97_string); // 0x848 Call
	var_98_int = 0; // 0x84a PushI
	var_99_int = 1; // 0x84b PushI
	AddItem(var_17_bool, var_96_int, var_98_int, var_99_int); // 0x84c Func
	goto Label_2186; // 0x84e Jump
	
Label_2127:
	var_100_int = 1; // 0x84f PushI
	var_101_bool = var_16_int == var_100_int; // 0x850 Eq
	if(var_101_bool == 0) goto Label_2139; // 0x851 JumpB
	var_102_int = 0; var_103_string = ""; // 0x852 PushV
	var_103_string = "bracelet"; // 0x853 MovS
	func_2187(var_102_int, var_103_string); // 0x854 Call
	var_104_int = 0; // 0x856 PushI
	var_105_int = 1; // 0x857 PushI
	AddItem(var_17_bool, var_102_int, var_104_int, var_105_int); // 0x858 Func
	goto Label_2186; // 0x85a Jump
	
Label_2139:
	var_106_int = 2; // 0x85b PushI
	var_107_bool = var_16_int == var_106_int; // 0x85c Eq
	if(var_107_bool == 0) goto Label_2151; // 0x85d JumpB
	var_108_int = 0; var_109_string = ""; // 0x85e PushV
	var_109_string = "ear_ring"; // 0x85f MovS
	func_2187(var_108_int, var_109_string); // 0x860 Call
	var_110_int = 0; // 0x862 PushI
	var_111_int = 1; // 0x863 PushI
	AddItem(var_17_bool, var_108_int, var_110_int, var_111_int); // 0x864 Func
	goto Label_2186; // 0x866 Jump
	
Label_2151:
	var_112_int = 3; // 0x867 PushI
	var_113_bool = var_16_int == var_112_int; // 0x868 Eq
	if(var_113_bool == 0) goto Label_2163; // 0x869 JumpB
	var_114_int = 0; var_115_string = ""; // 0x86a PushV
	var_115_string = "gold_ring"; // 0x86b MovS
	func_2187(var_114_int, var_115_string); // 0x86c Call
	var_116_int = 0; // 0x86e PushI
	var_117_int = 1; // 0x86f PushI
	AddItem(var_17_bool, var_114_int, var_116_int, var_117_int); // 0x870 Func
	goto Label_2186; // 0x872 Jump
	
Label_2163:
	var_118_int = 4; // 0x873 PushI
	var_119_bool = var_16_int == var_118_int; // 0x874 Eq
	if(var_119_bool == 0) goto Label_2175; // 0x875 JumpB
	var_120_int = 0; var_121_string = ""; // 0x876 PushV
	var_121_string = "silver_ring"; // 0x877 MovS
	func_2187(var_120_int, var_121_string); // 0x878 Call
	var_122_int = 0; // 0x87a PushI
	var_123_int = 1; // 0x87b PushI
	AddItem(var_17_bool, var_120_int, var_122_int, var_123_int); // 0x87c Func
	goto Label_2186; // 0x87e Jump
	
Label_2175:
	var_124_int = 5; // 0x87f PushI
	var_125_bool = var_16_int == var_124_int; // 0x880 Eq
	if(var_125_bool == 0) goto Label_2186; // 0x881 JumpB
	var_126_int = 0; var_127_string = ""; // 0x882 PushV
	var_127_string = "flower"; // 0x883 MovS
	func_2187(var_126_int, var_127_string); // 0x884 Call
	var_128_int = 0; // 0x886 PushI
	var_129_int = 1; // 0x887 PushI
	AddItem(var_17_bool, var_126_int, var_128_int, var_129_int); // 0x888 Func
}


func_1507(var_0_bool)
{
	var_0_bool = 1; // 0x5e3 TMovB
	var_12_int = 0; // 0x5e4 PushI
	KillTimer(var_12_int); // 0x5e5 Func
	Stop(); // 0x5e7 Func
	return 0; // 0x5e9 Return
}


func_1523(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x5f4 PushV
	var_17_object = var_15_object; // 0x5f5 Mov
	func_1674(var_16_bool, var_17_object); // 0x5f6 Call
	var_14_bool = var_16_bool; // 0x5f7 Mov
	return 0; // 0x5f9 Return
}


func_1530(var_189_string)
{
	var_189_string = "walk"; // 0x5fa MovS
	return 0; // 0x5fb Return
}


func_1532(var_190_string)
{
	var_190_string = "run"; // 0x5fc MovS
	return 0; // 0x5fd Return
}


func_1534(var_345_string, var_346_int)
{
	var_347_int = 1; // 0x5ff PushI
	var_348_bool = var_346_int == var_347_int; // 0x600 Eq
	if(var_348_bool == 0) goto Label_1540; // 0x601 JumpB
	var_345_string = "fire"; // 0x602 MovS
	return 0; // 0x603 Return
	
Label_1540:
	var_345_string = "phys"; // 0x604 MovS
	return 0; // 0x605 Return
}


