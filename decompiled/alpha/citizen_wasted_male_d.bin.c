task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xf PushV
	var_15_int = 0; var_16_object = Obj(); // 0x10 PushV
	var_16_object = var_12_object; // 0x11 Mov
	func_2061(var_16_object); // 0x12 Call
	var_14_int = var_15_int; // 0x13 Mov
	var_17_int = 0; // 0x15 PushI
	var_18_bool = var_14_int > var_17_int; // 0x16 GT
	if(var_18_bool == 0) goto Label_28; // 0x17 JumpB
	var_19_object = Obj(); // 0x18 PushV
	var_19_object = var_12_object; // 0x19 Mov
	func_2064(var_19_object); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_2070(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_14_bool, var_15_object)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xac PushV
	var_15_int = 0; var_16_object = Obj(); // 0xad PushV
	var_16_object = var_12_object; // 0xae Mov
	func_2061(var_16_object); // 0xaf Call
	var_14_int = var_15_int; // 0xb0 Mov
	var_17_int = 0; // 0xb2 PushI
	var_18_bool = var_14_int > var_17_int; // 0xb3 GT
	if(var_18_bool == 0) goto Label_191; // 0xb4 JumpB
	var_19_int = 1; // 0xb5 PushI
	var_20_bool = var_14_int > var_19_int; // 0xb6 GT
	if(var_20_bool == 0) goto Label_187; // 0xb7 JumpB
	func_311(var_14_int); // 0xb9 Call
	
Label_187:
	var_22_object = Obj(); // 0xbb PushV
	var_22_object = var_12_object; // 0xbc Mov
	func_2064(var_22_object); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xc0 PushV
	var_15_int = 0; var_16_object = Obj(); // 0xc1 PushV
	var_16_object = var_12_object; // 0xc2 Mov
	func_2020(var_15_int, var_16_object); // 0xc3 Call
	var_14_int = var_15_int; // 0xc4 Mov
	var_51_int = 0; // 0xc6 PushI
	var_52_bool = var_14_int > var_51_int; // 0xc7 GT
	if(var_52_bool == 0) goto Label_211; // 0xc8 JumpB
	var_53_int = 1; // 0xc9 PushI
	var_54_bool = var_14_int > var_53_int; // 0xca GT
	if(var_54_bool == 0) goto Label_207; // 0xcb JumpB
	func_311(var_14_int); // 0xcd Call
	
Label_207:
	var_56_object = Obj(); // 0xcf PushV
	var_56_object = var_12_object; // 0xd0 Mov
	func_2030(var_56_object); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0xd4 PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0xd5 PushV
	var_17_object = var_12_bool; // 0xd6 Mov
	var_18_object = var_13_object; // 0xd7 Mov
	func_2310(var_16_bool, var_17_object, var_18_object); // 0xd8 Call
	if(var_16_bool == 0) goto Label_237; // 0xda JumpB
	var_51_int = 0; var_52_object = Obj(); // 0xdb PushV
	var_52_object = var_12_bool; // 0xdc Mov
	func_2038(var_51_int, var_52_object); // 0xdd Call
	var_15_int = var_51_int; // 0xde Mov
	var_83_int = 0; // 0xe0 PushI
	var_84_bool = var_15_int > var_83_int; // 0xe1 GT
	if(var_84_bool == 0) goto Label_237; // 0xe2 JumpB
	var_85_int = 1; // 0xe3 PushI
	var_86_bool = var_15_int > var_85_int; // 0xe4 GT
	if(var_86_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_15_int); // 0xe7 Call
	
Label_233:
	var_88_object = Obj(); // 0xe9 PushV
	var_88_object = var_12_bool; // 0xea Mov
	func_2045(var_88_object); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0xee PushV
	var_15_int = 0; var_16_object = Obj(); // 0xef PushV
	var_16_object = var_12_object; // 0xf0 Mov
	func_2051(var_16_object); // 0xf1 Call
	var_14_int = var_15_int; // 0xf2 Mov
	var_17_int = 0; // 0xf4 PushI
	var_18_bool = var_14_int > var_17_int; // 0xf5 GT
	if(var_18_bool == 0) goto Label_257; // 0xf6 JumpB
	var_19_int = 1; // 0xf7 PushI
	var_20_bool = var_14_int > var_19_int; // 0xf8 GT
	if(var_20_bool == 0) goto Label_253; // 0xf9 JumpB
	func_311(var_14_int); // 0xfb Call
	
Label_253:
	var_22_object = Obj(); // 0xfd PushV
	var_22_object = var_12_object; // 0xfe Mov
	func_2054(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0x102 PushV
	var_16_int = 0; var_17_string = ""; var_18_object = Obj(); // 0x103 PushV
	var_17_string = var_13_object; // 0x104 Mov
	var_18_object = var_12_bool; // 0x105 Mov
	func_2056(var_18_object); // 0x106 Call
	var_15_int = var_16_int; // 0x107 Mov
	var_19_int = 0; // 0x109 PushI
	var_20_bool = var_15_int > var_19_int; // 0x10a GT
	if(var_20_bool == 0) goto Label_279; // 0x10b JumpB
	var_21_int = 1; // 0x10c PushI
	var_22_bool = var_15_int > var_21_int; // 0x10d GT
	if(var_22_bool == 0) goto Label_274; // 0x10e JumpB
	func_311(var_15_int); // 0x110 Call
	
Label_274:
	var_24_string = ""; var_25_object = Obj(); // 0x112 PushV
	var_24_string = var_13_object; // 0x113 Mov
	var_25_object = var_12_bool; // 0x114 Mov
	func_2059(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_object = Obj(); // 0x119 PushV
	var_13_object = var_12_object; // 0x11a Mov
	func_336(var_12_object, var_13_object); // 0x11b Call
	return 0; // 0x11d Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_object = Obj(); // 0x11f PushV
	var_13_object = var_12_object; // 0x120 Mov
	func_336(var_12_object, var_13_object); // 0x121 Call
	return 0; // 0x123 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 110; // 0x125 PushI
	var_14_bool = var_12_object != var_13_int; // 0x126 Neq
	if(var_14_bool == 0) goto Label_297; // 0x127 JumpB
	return 0; // 0x128 Return
	
Label_297:
	var_2_bool = 0; // 0x129 TMovB
	var_15_int = 110; // 0x12a PushI
	KillTimer(var_15_int); // 0x12b Func
	ResetAAS(); // 0x12d Func
	return 0; // 0x12f Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object); // 0x131 Call
	func_2070(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_311(var_12_object); // 0x149 Call
	var_14_object = Obj(); // 0x14b PushV
	var_14_object = var_12_object; // 0x14c Mov
	func_1971(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object); // 0x1b2 Func
	return 0; // 0x1b4 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	Stop(); // 0x1b5 Func
	return 0; // 0x1b7 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x1c8 PushV
	var_15_int = 0; var_16_object = Obj(); // 0x1c9 PushV
	var_16_object = var_12_object; // 0x1ca Mov
	func_2061(var_16_object); // 0x1cb Call
	var_14_int = var_15_int; // 0x1cc Mov
	var_17_int = 0; // 0x1ce PushI
	var_18_bool = var_14_int > var_17_int; // 0x1cf GT
	if(var_18_bool == 0) goto Label_475; // 0x1d0 JumpB
	var_19_int = 1; // 0x1d1 PushI
	var_20_bool = var_14_int > var_19_int; // 0x1d2 GT
	if(var_20_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_640(); // 0x1d5 Call
	
Label_471:
	var_21_object = Obj(); // 0x1d7 PushV
	var_21_object = var_12_object; // 0x1d8 Mov
	func_2064(var_21_object); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x1dc PushV
	var_15_int = 0; var_16_object = Obj(); // 0x1dd PushV
	var_16_object = var_12_object; // 0x1de Mov
	func_2020(var_15_int, var_16_object); // 0x1df Call
	var_14_int = var_15_int; // 0x1e0 Mov
	var_51_int = 0; // 0x1e2 PushI
	var_52_bool = var_14_int > var_51_int; // 0x1e3 GT
	if(var_52_bool == 0) goto Label_495; // 0x1e4 JumpB
	var_53_int = 1; // 0x1e5 PushI
	var_54_bool = var_14_int > var_53_int; // 0x1e6 GT
	if(var_54_bool == 0) goto Label_491; // 0x1e7 JumpB
	func_640(); // 0x1e9 Call
	
Label_491:
	var_55_object = Obj(); // 0x1eb PushV
	var_55_object = var_12_object; // 0x1ec Mov
	func_2030(var_55_object); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0x1f0 PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x1f1 PushV
	var_17_object = var_12_bool; // 0x1f2 Mov
	var_18_object = var_13_object; // 0x1f3 Mov
	func_2310(var_16_bool, var_17_object, var_18_object); // 0x1f4 Call
	if(var_16_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_51_int = 0; var_52_object = Obj(); // 0x1f7 PushV
	var_52_object = var_12_bool; // 0x1f8 Mov
	func_2038(var_51_int, var_52_object); // 0x1f9 Call
	var_15_int = var_51_int; // 0x1fa Mov
	var_83_int = 0; // 0x1fc PushI
	var_84_bool = var_15_int > var_83_int; // 0x1fd GT
	if(var_84_bool == 0) goto Label_521; // 0x1fe JumpB
	var_85_int = 1; // 0x1ff PushI
	var_86_bool = var_15_int > var_85_int; // 0x200 GT
	if(var_86_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_87_object = Obj(); // 0x205 PushV
	var_87_object = var_12_bool; // 0x206 Mov
	func_2045(var_87_object); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x20a PushV
	var_15_int = 0; var_16_object = Obj(); // 0x20b PushV
	var_16_object = var_12_object; // 0x20c Mov
	func_2051(var_16_object); // 0x20d Call
	var_14_int = var_15_int; // 0x20e Mov
	var_17_int = 0; // 0x210 PushI
	var_18_bool = var_14_int > var_17_int; // 0x211 GT
	if(var_18_bool == 0) goto Label_541; // 0x212 JumpB
	var_19_int = 1; // 0x213 PushI
	var_20_bool = var_14_int > var_19_int; // 0x214 GT
	if(var_20_bool == 0) goto Label_537; // 0x215 JumpB
	func_640(); // 0x217 Call
	
Label_537:
	var_21_object = Obj(); // 0x219 PushV
	var_21_object = var_12_object; // 0x21a Mov
	func_2054(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0x21e PushV
	var_16_int = 0; var_17_string = ""; var_18_object = Obj(); // 0x21f PushV
	var_17_string = var_13_object; // 0x220 Mov
	var_18_object = var_12_bool; // 0x221 Mov
	func_2056(var_18_object); // 0x222 Call
	var_15_int = var_16_int; // 0x223 Mov
	var_19_int = 0; // 0x225 PushI
	var_20_bool = var_15_int > var_19_int; // 0x226 GT
	if(var_20_bool == 0) goto Label_563; // 0x227 JumpB
	var_21_int = 1; // 0x228 PushI
	var_22_bool = var_15_int > var_21_int; // 0x229 GT
	if(var_22_bool == 0) goto Label_558; // 0x22a JumpB
	func_640(); // 0x22c Call
	
Label_558:
	var_23_string = ""; var_24_object = Obj(); // 0x22e PushV
	var_23_string = var_13_object; // 0x22f Mov
	var_24_object = var_12_bool; // 0x230 Mov
	func_2059(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_640(); // 0x235 Call
	func_2070(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x290 PushV
	var_15_int = 0; var_16_object = Obj(); // 0x291 PushV
	var_16_object = var_12_object; // 0x292 Mov
	func_2305(var_16_object); // 0x293 Call
	var_14_int = var_15_int; // 0x294 Mov
	var_17_int = 0; // 0x296 PushI
	var_18_bool = var_14_int > var_17_int; // 0x297 GT
	if(var_18_bool == 0) goto Label_675; // 0x298 JumpB
	var_19_int = 1; // 0x299 PushI
	var_20_bool = var_14_int > var_19_int; // 0x29a GT
	if(var_20_bool == 0) goto Label_671; // 0x29b JumpB
	func_732(); // 0x29d Call
	
Label_671:
	var_21_object = Obj(); // 0x29f PushV
	var_21_object = var_12_object; // 0x2a0 Mov
	func_2308(); // 0x2a1 Call
	
Label_675:
	return 2; // 0x2a3 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_732(); // 0x2a5 Call
	func_2070(); // 0x2a8 Call
	return 0; // 0x2aa Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_732(); // 0x2e3 Call
	var_13_object = Obj(); // 0x2e5 PushV
	var_13_object = var_12_object; // 0x2e6 Mov
	func_1971(); // 0x2e7 Call
	return 0; // 0x2e9 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x2ea PushV
	var_15_int = 0; var_16_object = Obj(); // 0x2eb PushV
	var_16_object = var_12_object; // 0x2ec Mov
	func_2305(var_16_object); // 0x2ed Call
	var_14_int = var_15_int; // 0x2ee Mov
	var_17_int = 0; // 0x2f0 PushI
	var_18_bool = var_14_int > var_17_int; // 0x2f1 GT
	if(var_18_bool == 0) goto Label_765; // 0x2f2 JumpB
	var_19_int = 1; // 0x2f3 PushI
	var_20_bool = var_14_int > var_19_int; // 0x2f4 GT
	if(var_20_bool == 0) goto Label_761; // 0x2f5 JumpB
	func_910(var_14_int); // 0x2f7 Call
	
Label_761:
	var_22_object = Obj(); // 0x2f9 PushV
	var_22_object = var_12_object; // 0x2fa Mov
	func_2308(); // 0x2fb Call
	
Label_765:
	return 2; // 0x2fd Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_910(var_11_object); // 0x2ff Call
	func_2070(); // 0x302 Call
	return 0; // 0x304 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; // 0x379 PushI
	var_14_bool = var_12_object != var_13_int; // 0x37a Neq
	if(var_14_bool == 0) goto Label_893; // 0x37b JumpB
	return 0; // 0x37c Return
	
Label_893:
	var_15_bool = 0; var_16_object = Obj(); // 0x37d PushV
	var_16_object = var_1_bool; // 0x37e MovT
	func_926(var_15_bool, var_16_object); // 0x37f Call
	var_51_bool = var_15_bool == 0; // 0x381 Not
	if(var_51_bool == 0) goto Label_900; // 0x382 JumpB
	var_0_bool = 1; // 0x383 TMovB
	
Label_900:
	var_52_int = 0; // 0x384 PushI
	KillTimer(var_52_int); // 0x385 Func
	Stop(); // 0x387 Func
	return 0; // 0x389 Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object); // 0x38b Func
	return 0; // 0x38d Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_910(var_12_object); // 0x397 Call
	var_14_object = Obj(); // 0x399 PushV
	var_14_object = var_12_object; // 0x39a Mov
	func_1971(); // 0x39b Call
	return 0; // 0x39d Return
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_1571(var_11_object); // 0x5a1 Call
	func_2070(); // 0x5a4 Call
	return 0; // 0x5a6 Return
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_int)
{
	var_13_int = 0; // 0x60e PushI
	var_14_bool = var_12_int != var_13_int; // 0x60f Neq
	if(var_14_bool == 0) goto Label_1554; // 0x610 JumpB
	return 0; // 0x611 Return
	
Label_1554:
	var_15_bool = 0; var_16_object = Obj(); // 0x612 PushV
	var_16_object = var_1_bool; // 0x613 MovT
	func_1587(var_15_bool, var_16_object); // 0x614 Call
	var_51_bool = var_15_bool == 0; // 0x616 Not
	if(var_51_bool == 0) goto Label_1561; // 0x617 JumpB
	var_0_bool = 1; // 0x618 TMovB
	
Label_1561:
	var_52_int = 0; // 0x619 PushI
	KillTimer(var_52_int); // 0x61a Func
	Stop(); // 0x61c Func
	return 0; // 0x61e Return
}


task_6_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object)
{
	RequestClearPath(var_12_object); // 0x620 Func
	return 0; // 0x622 Return
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object)
{
	func_1571(var_12_object); // 0x62c Call
	var_14_object = Obj(); // 0x62e PushV
	var_14_object = var_12_object; // 0x62f Mov
	func_1971(); // 0x630 Call
	return 0; // 0x632 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x7a6 PushV
	var_16_string = "health"; // 0x7a7 PushS
	var_17_bool = var_13_string == var_16_string; // 0x7a8 Eq
	if(var_17_bool == 0) goto Label_1970; // 0x7a9 JumpB
	var_18_string = "health"; // 0x7aa PushS
	GetProperty(var_18_string, var_15_float); // 0x7ab Func
	var_19_int = 0; // 0x7ad PushI
	var_20_bool = var_15_float <= var_19_int; // 0x7ae LE
	if(var_20_bool == 0) goto Label_1970; // 0x7af JumpB
	SignalDeath(var_12_object); // 0x7b0 Func
	
Label_1970:
	return 2; // 0x7b2 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object)
{
	var_13_object = Obj(); // 0x7b4 PushV
	var_13_object = var_12_object; // 0x7b5 Mov
	func_1950(var_13_object); // 0x7b6 Call
	return 0; // 0x7b8 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x7ba PushV
	var_16_object = var_12_object; // 0x7bb Mov
	var_17_int = var_13_int; // 0x7bc Mov
	var_18_float = var_14_float; // 0x7bd Mov
	func_1840(var_17_int, var_18_float); // 0x7be Call
	return 0; // 0x7c0 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_12_bool); // 0x95 Func
	func_2281(); // 0x98 Call
	func_163(); // 0x9b Call
	
Label_157:
	var_2_bool = 0; // 0x9d TMovB
	func_376(var_10_bool, var_11_object); // 0x9f Call
	goto Label_157; // 0xa1 Jump
}


func_0(var_14_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_15_object = Obj(); // 0x2 PushV
	var_15_object = var_14_object; // 0x3 Mov
	func_33(var_15_object); // 0x4 Call
	var_65_object = Obj(); // 0x6 PushV
	var_65_object = var_14_object; // 0x7 Mov
	func_2356(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_2051(var_15_int)
{
	var_15_int = 0; // 0x804 MovI
	return 0; // 0x805 Return
}


func_2054()
{
	return 0; // 0x807 Return
}


func_2056(var_16_int)
{
	var_16_int = 0; // 0x809 MovI
	return 0; // 0x80a Return
}


func_2059()
{
	return 0; // 0x80c Return
}


func_2061(var_15_int)
{
	var_15_int = 2; // 0x80e MovI
	return 0; // 0x80f Return
}


func_2064(var_21_object)
{
	var_22_object = Obj(); // 0x811 PushV
	var_22_object = var_21_object; // 0x812 Mov
	func_2289(var_22_object); // 0x813 Call
	return 0; // 0x815 Return
}


func_2070()
{
	return 0; // 0x816 Return
}


func_2071(var_20_int, var_21_int)
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x817 PushV
	var_39_bool = var_20_int > var_21_int; // 0x818 GT
	if(var_39_bool == 0) goto Label_2078; // 0x819 JumpB
	var_40_string = "GenerateMoney: iMin > iMax"; // 0x81a PushS
	Trace(var_40_string); // 0x81b Func
	return 8; // 0x81d Return
	
Label_2078:
	var_35_int = 0; // 0x81e MovI
	var_41_bool = var_20_int != var_21_int; // 0x81f Neq
	if(var_41_bool == 0) goto Label_2085; // 0x820 JumpB
	var_42_int = var_21_int - var_20_int; // 0x821 Sub
	irand(var_36_int, var_42_int); // 0x822 Func
	goto Label_2089; // 0x824 Jump
	
Label_2089:
	var_35_int = var_35_int + var_20_int; // 0x829 Add2
	var_43_int = 0; // 0x82a PushI
	var_44_bool = var_35_int == var_43_int; // 0x82b Eq
	if(var_44_bool == 0) goto Label_2094; // 0x82c JumpB
	return 8; // 0x82d Return
	
Label_2094:
	var_45_string = "Money"; // 0x82e PushS
	GetInvItemByName(var_37_int, var_45_string); // 0x82f Func
	var_46_int = 0; // 0x831 PushI
	AddItem(var_38_bool, var_37_int, var_46_int, var_35_int); // 0x832 Func
	return 8; // 0x834 Return
	
Label_2085:
	var_47_int = 0; // 0x825 PushI
	var_48_bool = var_20_int == var_47_int; // 0x826 Eq
	if(var_48_bool == 0) goto Label_2089; // 0x827 JumpB
	return 8; // 0x828 Return
}


func_33(var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_string = ""; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); // 0x21 PushV
	var_36_bool = var_15_object == 0; // 0x22 NullEq
	if(var_36_bool == 0) goto Label_41; // 0x23 JumpB
	var_37_string = ""; // 0x24 PushV
	var_37_string = "fdie"; // 0x25 MovS
	func_120(var_37_string); // 0x26 Call
	goto Label_119; // 0x28 Jump
	
Label_119:
	return 20; // 0x77 Return
	
Label_41:
	GetPosition(var_26_cvector); // 0x29 ObjFunc
	GetPosition(var_27_cvector); // 0x2b Func
	GetDirection(var_28_cvector); // 0x2d Func
	var_29_cvector = var_27_cvector - var_26_cvector; // 0x2f Sub2
	var_40_float = GetByIndex(var_29_cvector, 0); // 0x30 PushE
	var_41_float = GetByIndex(var_28_cvector, 0); // 0x31 PushE
	var_42_float = var_40_float * var_41_float; // 0x32 Mult
	var_43_float = GetByIndex(var_29_cvector, 2); // 0x33 PushE
	var_44_float = GetByIndex(var_28_cvector, 2); // 0x34 PushE
	var_45_float = var_43_float * var_44_float; // 0x35 Mult
	var_46_int = var_42_float + var_45_float; // 0x36 Add
	var_47_int = 0; // 0x37 PushI
	var_48_bool = var_46_int >= var_47_int; // 0x38 GE
	if(var_48_bool == 0) goto Label_60; // 0x39 JumpB
	var_30_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_31_object = var_15_object; // 0x45 Mov
	var_49_string = "GetScriptProperty"; // 0x46 PushS
	var_50_int = 2; // 0x47 PushI
	var_51_bool = IsFuncExist(var_15_object, var_49_string, var_50_int); // 0x48 FuncExist
	if(var_51_bool == 0) goto Label_85; // 0x49 JumpB
	var_52_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_32_bool, var_52_string); // 0x4b ObjFunc
	var_53_bool = var_32_bool; // 0x4d Push
	if(var_53_bool == 0) goto Label_85; // 0x4e JumpB
	var_54_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_31_object, var_54_string); // 0x50 ObjFunc
	var_55_bool = var_31_object == 0; // 0x52 NullEq
	if(var_55_bool == 0) goto Label_85; // 0x53 JumpB
	var_31_object = var_15_object; // 0x54 Mov
	
Label_85:
	var_56_string = "@GetEyesHeight"; // 0x55 PushS
	var_57_int = 1; // 0x56 PushI
	var_58_bool = IsFuncExist(var_31_object, var_56_string, var_57_int); // 0x57 FuncExist
	if(var_58_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_34_float); // 0x59 ObjFunc
	var_35_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_59_float = GetByIndex(var_35_cvector, 1); // 0x5c PushE
	var_59_float = var_34_float; // 0x5d Mov
	SetByIndex(var_35_cvector, 1) = var_59_float; // 0x5e PopE
	var_60_string = "head"; // 0x5f PushS
	LookAsync(var_15_object, var_60_string, var_35_cvector); // 0x60 Func
	var_33_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_61_string = "all"; // 0x65 PushS
	PlayAnimation(var_61_string, var_30_string); // 0x66 Func
	WaitForAnimEnd(); // 0x68 Func
	var_62_bool = var_33_bool; // 0x6a Push
	if(var_62_bool == 0) goto Label_113; // 0x6b JumpB
	StopAsync(); // 0x6c Func
	var_63_string = "head"; // 0x6e PushS
	UnlookAsync(var_63_string); // 0x6f Func
	
Label_113:
	var_64_string = "all"; // 0x71 PushS
	LockAnimationEnd(var_64_string, var_30_string); // 0x72 Func
	RemoveEnvelope(); // 0x74 Func
	var_31_object = 0; // 0x76 SetNull
	
Label_100:
	var_33_bool = 0; // 0x64 MovB
	
Label_60:
	var_30_string = "bdie"; // 0x3c MovS
}


func_1571(var_0_bool)
{
	var_0_bool = 1; // 0x623 TMovB
	var_13_int = 0; // 0x624 PushI
	KillTimer(var_13_int); // 0x625 Func
	Stop(); // 0x627 Func
	return 0; // 0x629 Return
}


func_1587(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x634 PushV
	var_18_object = var_16_object; // 0x635 Mov
	func_1816(var_17_bool, var_18_object); // 0x636 Call
	var_15_bool = var_17_bool; // 0x637 Mov
	return 0; // 0x639 Return
}


func_2101(var_14_bool)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x835 PushV
	var_19_bool = var_14_bool; // 0x836 Push
	if(var_19_bool == 0) goto Label_2190; // 0x837 JumpB
	var_20_int = 0; var_21_int = 0; // 0x838 PushV
	var_20_int = 0; // 0x839 MovI
	var_22_int = 100; // 0x83a PushI
	var_23_int = 0; // 0x83b PushV
	func_1941(var_23_int); // 0x83c Call
	var_29_int = 100; // 0x83e PushI
	var_30_float = var_23_int * var_29_int; // 0x83f Mult
	var_21_int = var_22_int + var_30_float; // 0x840 Add2
	func_2071(var_20_int, var_21_int); // 0x841 Call
	var_49_int = 9; // 0x843 PushI
	irand(var_17_int, var_49_int); // 0x844 Func
	var_50_int = 0; // 0x846 PushI
	var_51_bool = var_17_int == var_50_int; // 0x847 Eq
	if(var_51_bool == 0) goto Label_2130; // 0x848 JumpB
	var_52_int = 0; var_53_string = ""; // 0x849 PushV
	var_53_string = "lemon"; // 0x84a MovS
	func_2276(var_52_int, var_53_string); // 0x84b Call
	var_56_int = 0; // 0x84d PushI
	var_57_int = 1; // 0x84e PushI
	AddItem(var_18_bool, var_52_int, var_56_int, var_57_int); // 0x84f Func
	goto Label_2189; // 0x851 Jump
	
Label_2189:
	goto Label_2275; // 0x88d Jump
	
Label_2275:
	return 4; // 0x8e3 Return
	
Label_2130:
	var_58_int = 1; // 0x852 PushI
	var_59_bool = var_17_int == var_58_int; // 0x853 Eq
	if(var_59_bool == 0) goto Label_2142; // 0x854 JumpB
	var_60_int = 0; var_61_string = ""; // 0x855 PushV
	var_61_string = "rusk"; // 0x856 MovS
	func_2276(var_60_int, var_61_string); // 0x857 Call
	var_62_int = 0; // 0x859 PushI
	var_63_int = 1; // 0x85a PushI
	AddItem(var_18_bool, var_60_int, var_62_int, var_63_int); // 0x85b Func
	goto Label_2189; // 0x85d Jump
	
Label_2142:
	var_64_int = 2; // 0x85e PushI
	var_65_bool = var_17_int == var_64_int; // 0x85f Eq
	if(var_65_bool == 0) goto Label_2154; // 0x860 JumpB
	var_66_int = 0; var_67_string = ""; // 0x861 PushV
	var_67_string = "hook"; // 0x862 MovS
	func_2276(var_66_int, var_67_string); // 0x863 Call
	var_68_int = 0; // 0x865 PushI
	var_69_int = 1; // 0x866 PushI
	AddItem(var_18_bool, var_66_int, var_68_int, var_69_int); // 0x867 Func
	goto Label_2189; // 0x869 Jump
	
Label_2154:
	var_70_int = 4; // 0x86a PushI
	var_71_bool = var_17_int == var_70_int; // 0x86b Eq
	if(var_71_bool == 0) goto Label_2166; // 0x86c JumpB
	var_72_int = 0; var_73_string = ""; // 0x86d PushV
	var_73_string = "syringe"; // 0x86e MovS
	func_2276(var_72_int, var_73_string); // 0x86f Call
	var_74_int = 0; // 0x871 PushI
	var_75_int = 1; // 0x872 PushI
	AddItem(var_18_bool, var_72_int, var_74_int, var_75_int); // 0x873 Func
	goto Label_2189; // 0x875 Jump
	
Label_2166:
	var_76_int = 5; // 0x876 PushI
	var_77_bool = var_17_int == var_76_int; // 0x877 Eq
	if(var_77_bool == 0) goto Label_2178; // 0x878 JumpB
	var_78_int = 0; var_79_string = ""; // 0x879 PushV
	var_79_string = "watch"; // 0x87a MovS
	func_2276(var_78_int, var_79_string); // 0x87b Call
	var_80_int = 0; // 0x87d PushI
	var_81_int = 1; // 0x87e PushI
	AddItem(var_18_bool, var_78_int, var_80_int, var_81_int); // 0x87f Func
	goto Label_2189; // 0x881 Jump
	
Label_2178:
	var_82_int = 6; // 0x882 PushI
	var_83_bool = var_17_int == var_82_int; // 0x883 Eq
	if(var_83_bool == 0) goto Label_2189; // 0x884 JumpB
	var_84_int = 0; var_85_string = ""; // 0x885 PushV
	var_85_string = "razor"; // 0x886 MovS
	func_2276(var_84_int, var_85_string); // 0x887 Call
	var_86_int = 0; // 0x889 PushI
	var_87_int = 1; // 0x88a PushI
	AddItem(var_18_bool, var_84_int, var_86_int, var_87_int); // 0x88b Func
	
Label_2190:
	var_88_int = 0; var_89_int = 0; // 0x88e PushV
	var_88_int = 0; // 0x88f MovI
	var_90_int = 50; // 0x890 PushI
	var_91_int = 0; // 0x891 PushV
	func_1941(var_91_int); // 0x892 Call
	var_92_int = 50; // 0x894 PushI
	var_93_float = var_91_int * var_92_int; // 0x895 Mult
	var_89_int = var_90_int + var_93_float; // 0x896 Add2
	func_2071(var_88_int, var_89_int); // 0x897 Call
	var_94_int = 8; // 0x899 PushI
	irand(var_17_int, var_94_int); // 0x89a Func
	var_95_int = 0; // 0x89c PushI
	var_96_bool = var_17_int == var_95_int; // 0x89d Eq
	if(var_96_bool == 0) goto Label_2216; // 0x89e JumpB
	var_97_int = 0; var_98_string = ""; // 0x89f PushV
	var_98_string = "beads"; // 0x8a0 MovS
	func_2276(var_97_int, var_98_string); // 0x8a1 Call
	var_99_int = 0; // 0x8a3 PushI
	var_100_int = 1; // 0x8a4 PushI
	AddItem(var_18_bool, var_97_int, var_99_int, var_100_int); // 0x8a5 Func
	goto Label_2275; // 0x8a7 Jump
	
Label_2216:
	var_101_int = 1; // 0x8a8 PushI
	var_102_bool = var_17_int == var_101_int; // 0x8a9 Eq
	if(var_102_bool == 0) goto Label_2228; // 0x8aa JumpB
	var_103_int = 0; var_104_string = ""; // 0x8ab PushV
	var_104_string = "bracelet"; // 0x8ac MovS
	func_2276(var_103_int, var_104_string); // 0x8ad Call
	var_105_int = 0; // 0x8af PushI
	var_106_int = 1; // 0x8b0 PushI
	AddItem(var_18_bool, var_103_int, var_105_int, var_106_int); // 0x8b1 Func
	goto Label_2275; // 0x8b3 Jump
	
Label_2228:
	var_107_int = 2; // 0x8b4 PushI
	var_108_bool = var_17_int == var_107_int; // 0x8b5 Eq
	if(var_108_bool == 0) goto Label_2240; // 0x8b6 JumpB
	var_109_int = 0; var_110_string = ""; // 0x8b7 PushV
	var_110_string = "ear_ring"; // 0x8b8 MovS
	func_2276(var_109_int, var_110_string); // 0x8b9 Call
	var_111_int = 0; // 0x8bb PushI
	var_112_int = 1; // 0x8bc PushI
	AddItem(var_18_bool, var_109_int, var_111_int, var_112_int); // 0x8bd Func
	goto Label_2275; // 0x8bf Jump
	
Label_2240:
	var_113_int = 3; // 0x8c0 PushI
	var_114_bool = var_17_int == var_113_int; // 0x8c1 Eq
	if(var_114_bool == 0) goto Label_2252; // 0x8c2 JumpB
	var_115_int = 0; var_116_string = ""; // 0x8c3 PushV
	var_116_string = "gold_ring"; // 0x8c4 MovS
	func_2276(var_115_int, var_116_string); // 0x8c5 Call
	var_117_int = 0; // 0x8c7 PushI
	var_118_int = 1; // 0x8c8 PushI
	AddItem(var_18_bool, var_115_int, var_117_int, var_118_int); // 0x8c9 Func
	goto Label_2275; // 0x8cb Jump
	
Label_2252:
	var_119_int = 4; // 0x8cc PushI
	var_120_bool = var_17_int == var_119_int; // 0x8cd Eq
	if(var_120_bool == 0) goto Label_2264; // 0x8ce JumpB
	var_121_int = 0; var_122_string = ""; // 0x8cf PushV
	var_122_string = "silver_ring"; // 0x8d0 MovS
	func_2276(var_121_int, var_122_string); // 0x8d1 Call
	var_123_int = 0; // 0x8d3 PushI
	var_124_int = 1; // 0x8d4 PushI
	AddItem(var_18_bool, var_121_int, var_123_int, var_124_int); // 0x8d5 Func
	goto Label_2275; // 0x8d7 Jump
	
Label_2264:
	var_125_int = 5; // 0x8d8 PushI
	var_126_bool = var_17_int == var_125_int; // 0x8d9 Eq
	if(var_126_bool == 0) goto Label_2275; // 0x8da JumpB
	var_127_int = 0; var_128_string = ""; // 0x8db PushV
	var_128_string = "flower"; // 0x8dc MovS
	func_2276(var_127_int, var_128_string); // 0x8dd Call
	var_129_int = 0; // 0x8df PushI
	var_130_int = 1; // 0x8e0 PushI
	AddItem(var_18_bool, var_127_int, var_129_int, var_130_int); // 0x8e1 Func
}


func_1594(var_188_string)
{
	var_188_string = "walk"; // 0x63a MovS
	return 0; // 0x63b Return
}


func_571()
{
	var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_bool = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_int = 0; var_169_bool = 0; var_170_float = 0; var_171_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_172_bool = 0; // 0x23e PushV
	func_1918(var_172_bool); // 0x23f Call
	var_173_bool = var_172_bool == 0; // 0x241 Not
	if(var_173_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_174_int = 0; // 0x244 PushV
	func_1992(var_174_int); // 0x245 Call
	var_165_int = var_174_int; // 0x246 Mov
	var_166_int = 0; // 0x248 MovI
	
Label_585:
	var_187_bool = 0; // 0x249 PushV
	var_187_bool = 0; // 0x24a MovB
	var_188_int = 5; // 0x24b PushI
	var_189_bool = var_166_int < var_188_int; // 0x24c LT
	if(var_189_bool == 0) goto Label_595; // 0x24d JumpB
	var_190_bool = 0; // 0x24e PushV
	func_1918(var_190_bool); // 0x24f Call
	if(var_190_bool == 0) goto Label_595; // 0x251 JumpB
	var_187_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_187_bool == 0) goto Label_639; // 0x253 JumpB
	var_191_int = 3; // 0x254 PushI
	irand(var_167_int, var_191_int); // 0x255 Func
	var_192_int = 0; // 0x257 PushI
	var_193_bool = var_167_int == var_192_int; // 0x258 Eq
	if(var_193_bool == 0) goto Label_619; // 0x259 JumpB
	var_194_int = var_165_int; // 0x25a Push
	if(var_194_int == 0) goto Label_618; // 0x25b JumpB
	irand(var_168_int, var_165_int); // 0x25c Func
	var_195_string = "all"; // 0x25e PushS
	var_196_string = ""; var_197_int = 0; // 0x25f PushV
	var_197_int = var_168_int; // 0x260 Mov
	func_1985(var_196_string, var_197_int); // 0x261 Call
	PlayAnimation(var_195_string, var_196_string); // 0x263 Func
	WaitForAnimEnd(var_169_bool); // 0x265 Func
	var_198_bool = var_169_bool == 0; // 0x267 Not
	if(var_198_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_639; // 0x269 Jump
	
Label_639:
	return 14; // 0x27f Return
	
Label_618:
	goto Label_636; // 0x26a Jump
	
Label_636:
	var_199_int = 1; // 0x27c PushI
	var_166_int = var_166_int + var_199_int; // 0x27d Add2
	goto Label_585; // 0x27e Jump
	
Label_619:
	var_200_int = 1; // 0x26b PushI
	var_201_bool = var_167_int == var_200_int; // 0x26c Eq
	if(var_201_bool == 0) goto Label_633; // 0x26d JumpB
	var_202_int = 4; // 0x26e PushI
	rand(var_170_float, var_202_int); // 0x26f Func
	var_203_int = 1; // 0x271 PushI
	var_204_int = var_170_float + var_203_int; // 0x272 Add
	Sleep(var_204_int, var_171_bool); // 0x273 Func
	var_205_bool = var_171_bool == 0; // 0x275 Not
	if(var_205_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_639; // 0x277 Jump
	
Label_632:
	goto Label_636; // 0x278 Jump
	
Label_633:
	var_206_int = var_166_int; // 0x279 Push
	if(var_206_int == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
}


func_1596(var_189_string)
{
	var_189_string = "run"; // 0x63c MovS
	return 0; // 0x63d Return
}


func_1598(var_344_string, var_345_int)
{
	var_346_int = 1; // 0x63f PushI
	var_347_bool = var_345_int == var_346_int; // 0x640 Eq
	if(var_347_bool == 0) goto Label_1604; // 0x641 JumpB
	var_344_string = "fire"; // 0x642 MovS
	return 0; // 0x643 Return
	
Label_1604:
	var_344_string = "phys"; // 0x644 MovS
	return 0; // 0x645 Return
}


func_1606(var_40_float)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x646 PushV
	GetPosition(var_45_cvector); // 0x647 Func
	GetPosition(var_46_cvector); // 0x649 ObjFunc
	var_47_cvector = var_46_cvector - var_45_cvector; // 0x64b Sub2
	var_40_float = var_47_cvector | var_47_cvector; // 0x64c Or2
	return 6; // 0x64d Return
}


func_1614(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x64e PushV
	var_44_string = "HasProperty"; // 0x64f PushS
	var_45_int = 2; // 0x650 PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x651 FuncExist
	var_47_bool = var_46_bool == 0; // 0x652 Not
	if(var_47_bool == 0) goto Label_1622; // 0x653 JumpB
	var_39_bool = 0; // 0x654 MovB
	return 2; // 0x655 Return
	
Label_1622:
	HasProperty(var_41_string, var_43_bool); // 0x656 ObjFunc
	var_39_bool = var_43_bool; // 0x658 Mov
	return 2; // 0x659 Return
}


func_1626(var_170_bool, var_171_object, var_172_string, var_173_float, var_174_float, var_175_float)
{
	var_176_float = 0; var_177_float = 0; // 0x65a PushV
	var_178_bool = 0; var_179_object = Obj(); var_180_string = ""; // 0x65b PushV
	var_179_object = var_171_object; // 0x65c Mov
	var_180_string = var_172_string; // 0x65d Mov
	func_1614(var_178_bool, var_179_object, var_180_string); // 0x65e Call
	var_181_bool = var_178_bool == 0; // 0x660 Not
	if(var_181_bool == 0) goto Label_1636; // 0x661 JumpB
	var_170_bool = 0; // 0x662 MovB
	return 2; // 0x663 Return
	
Label_1636:
	GetProperty(var_172_string, var_177_float); // 0x664 ObjFunc
	var_182_float = 0; var_183_float = 0; var_184_float = 0; var_185_float = 0; // 0x666 PushV
	var_183_float = var_177_float + var_173_float; // 0x667 Add2
	var_184_float = var_174_float; // 0x668 Mov
	var_185_float = var_175_float; // 0x669 Mov
	func_1930(var_182_float, var_183_float, var_184_float, var_185_float); // 0x66a Call
	SetProperty(var_172_string, var_182_float); // 0x66c ObjFunc
	var_170_bool = 1; // 0x66e MovB
	return 2; // 0x66f Return
}


func_1648(var_316_float, var_317_object, var_318_float, var_319_int)
{
	var_323_int = 0; var_324_string = ""; var_325_int = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0; var_329_int = 0; var_330_string = ""; var_331_int = 0; var_332_float = 0; var_333_float = 0; var_334_float = 0; // 0x670 PushV
	var_335_bool = 0; var_336_object = Obj(); var_337_string = ""; // 0x671 PushV
	var_336_object = var_317_object; // 0x672 Mov
	var_337_string = "health"; // 0x673 MovS
	func_1614(var_335_bool, var_336_object, var_337_string); // 0x674 Call
	var_338_bool = var_335_bool == 0; // 0x676 Not
	if(var_338_bool == 0) goto Label_1658; // 0x677 JumpB
	var_316_float = 0.0; // 0x678 MovF
	return 12; // 0x679 Return
	
Label_1658:
	var_339_bool = 0; var_340_object = Obj(); var_341_string = ""; // 0x67a PushV
	var_340_object = var_317_object; // 0x67b Mov
	var_341_string = "armor"; // 0x67c MovS
	func_1614(var_339_bool, var_340_object, var_341_string); // 0x67d Call
	var_342_bool = var_339_bool == 0; // 0x67f Not
	if(var_342_bool == 0) goto Label_1667; // 0x680 JumpB
	var_329_int = 0; // 0x681 MovI
	goto Label_1670; // 0x682 Jump
	
Label_1670:
	var_343_string = "armor_"; // 0x686 PushS
	var_344_string = ""; var_345_int = 0; // 0x687 PushV
	var_345_int = var_319_int; // 0x688 Mov
	func_1598(var_344_string, var_345_int); // 0x689 Call
	var_330_string = var_343_string + var_344_string; // 0x68b Add2
	var_348_bool = 0; var_349_object = Obj(); var_350_string = ""; // 0x68c PushV
	var_349_object = var_317_object; // 0x68d Mov
	var_350_string = var_330_string; // 0x68e Mov
	func_1614(var_348_bool, var_349_object, var_350_string); // 0x68f Call
	var_351_bool = var_348_bool == 0; // 0x691 Not
	if(var_351_bool == 0) goto Label_1685; // 0x692 JumpB
	var_331_int = 0; // 0x693 MovI
	goto Label_1687; // 0x694 Jump
	
Label_1687:
	var_352_float = 0; var_353_float = 0; var_354_float = 0; // 0x697 PushV
	var_355_int = var_329_int + var_331_int; // 0x698 Add
	var_356_float = 100.0; // 0x699 PushF
	var_353_float = var_355_int / var_355_int; // 0x69a Div2
	var_354_float = 1; // 0x69b MovI
	func_1923(var_352_float, var_353_float, var_354_float); // 0x69c Call
	var_332_float = var_352_float; // 0x69d Mov
	var_358_string = "health"; // 0x69f PushS
	GetProperty(var_358_string, var_333_float); // 0x6a0 ObjFunc
	var_359_int = 1; // 0x6a2 PushI
	var_360_int = var_359_int - var_332_float; // 0x6a3 Sub
	var_334_float = var_318_float * var_360_int; // 0x6a4 Mult2
	var_361_string = "health"; // 0x6a5 PushS
	var_362_float = 0; var_363_float = 0; var_364_float = 0; var_365_float = 0; // 0x6a6 PushV
	var_363_float = var_333_float - var_334_float; // 0x6a7 Sub2
	var_364_float = 0; // 0x6a8 MovI
	var_365_float = 1; // 0x6a9 MovI
	func_1930(var_362_float, var_363_float, var_364_float, var_365_float); // 0x6aa Call
	SetProperty(var_361_string, var_362_float); // 0x6ac ObjFunc
	var_316_float = var_334_float; // 0x6ae Mov
	return 12; // 0x6af Return
	
Label_1685:
	GetProperty(var_330_string, var_331_int); // 0x695 ObjFunc
	
Label_1667:
	var_368_string = "armor"; // 0x683 PushS
	GetProperty(var_368_string, var_329_int); // 0x684 ObjFunc
}


func_120(var_37_string)
{
	RemoveRTEnvelope(); // 0x79 Func
	SetDeathState(); // 0x7b Func
	Stop(); // 0x7d Func
	StopAsync(); // 0x7f Func
	StopSecondaryAnimation(); // 0x81 Func
	var_38_string = "all"; // 0x83 PushS
	PlayAnimation(var_38_string, var_37_string); // 0x84 Func
	WaitForAnimEnd(); // 0x86 Func
	var_39_string = "all"; // 0x88 PushS
	LockAnimationEnd(var_39_string, var_37_string); // 0x89 Func
	RemoveEnvelope(); // 0x8b Func
	return 0; // 0x8d Return
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_1154(var_0_bool, var_302_float, var_303_int)
{
	var_304_object = Obj(); var_305_float = 0; var_306_float = 0; var_307_object = Obj(); var_308_float = 0; var_309_float = 0; // 0x482 PushV
	var_310_float = 0.9; // 0x483 PushF
	var_311_float = var_302_float * var_310_float; // 0x484 Mult
	GetVictim(var_311_float, var_307_object); // 0x485 Func
	ReportAttack(var_0_bool); // 0x487 Func
	var_312_bool = var_307_object == var_0_bool; // 0x489 Eq
	if(var_312_bool == 0) goto Label_1191; // 0x48a JumpB
	var_313_float = 0; var_314_object = Obj(); var_315_int = 0; // 0x48b PushV
	var_314_object = var_307_object; // 0x48c Mov
	var_315_int = var_303_int; // 0x48d Mov
	func_943(var_315_int); // 0x48e Call
	var_308_float = var_313_float; // 0x48f Mov
	var_316_float = 0; var_317_object = Obj(); var_318_float = 0; var_319_int = 0; // 0x491 PushV
	var_317_object = var_307_object; // 0x492 Mov
	var_318_float = var_308_float; // 0x493 Mov
	var_320_int = 0; var_321_object = Obj(); var_322_int = 0; // 0x494 PushV
	var_321_object = var_307_object; // 0x495 Mov
	var_322_int = var_303_int; // 0x496 Mov
	func_946(var_322_int); // 0x497 Call
	var_319_int = var_320_int; // 0x498 Mov
	func_1648(var_316_float, var_317_object, var_318_float, var_319_int); // 0x49a Call
	var_309_float = var_316_float; // 0x49b Mov
	var_369_int = 0; // 0x49d PushV
	func_1432(var_369_int); // 0x49e Call
	ReportHit(var_0_bool, var_369_int, var_309_float, var_308_float); // 0x4a0 Func
	var_370_object = Obj(); var_371_float = 0; // 0x4a2 PushV
	var_370_object = var_307_object; // 0x4a3 Mov
	var_371_float = var_309_float; // 0x4a4 Mov
	func_1434(); // 0x4a5 Call
	
Label_1191:
	return 6; // 0x4a7 Return
}


func_645(var_63_object)
{
	var_64_bool = 0; var_65_object = Obj(); // 0x286 PushV
	var_65_object = var_63_object; // 0x287 Mov
	func_2300(var_64_bool, var_65_object); // 0x288 Call
	if(var_64_bool == 0) goto Label_655; // 0x28a JumpB
	var_68_object = Obj(); // 0x28b PushV
	var_68_object = var_63_object; // 0x28c Mov
	func_683(var_68_object); // 0x28d Call
	
Label_655:
	return 0; // 0x28f Return
}


func_163()
{
	var_131_bool = 0; // 0xa3 PushV
	func_1918(var_131_bool); // 0xa4 Call
	var_134_bool = var_131_bool == 0; // 0xa6 Not
	if(var_134_bool == 0) goto Label_171; // 0xa7 JumpB
	func_2070(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_1193(var_0_bool, var_273_bool, var_274_float)
{
	var_275_int = 0; var_276_bool = 0; var_277_int = 0; var_278_bool = 0; // 0x4a9 PushV
	irand(var_277_int, var_278_bool); // 0x4aa Func
	var_279_int = 1; // 0x4ac PushI
	var_277_int = var_277_int + var_279_int; // 0x4ad Add2
	Face(var_0_bool); // 0x4ae Func
	var_280_bool = 1; // 0x4b0 PushB
	SetAttackState(var_280_bool); // 0x4b1 Func
	var_281_string = "all"; // 0x4b3 PushS
	var_282_string = "attack_begin"; // 0x4b4 PushS
	var_283_int = var_282_string + var_277_int; // 0x4b5 Add
	PlayAnimation(var_281_string, var_283_int); // 0x4b6 Func
	WaitForAnimEnd(); // 0x4b8 Func
	func_1400(var_277_int, var_278_bool); // 0x4bb Call
	var_299_bool = 0; var_300_object = Obj(); // 0x4bd PushV
	var_300_object = var_0_bool; // 0x4be MovT
	func_1816(var_299_bool, var_300_object); // 0x4bf Call
	var_301_bool = var_299_bool == 0; // 0x4c1 Not
	if(var_301_bool == 0) goto Label_1223; // 0x4c2 JumpB
	StopAsync(); // 0x4c3 Func
	var_273_bool = 0; // 0x4c5 MovB
	return 4; // 0x4c6 Return
	
Label_1223:
	var_302_float = 0; var_303_int = 0; // 0x4c7 PushV
	var_302_float = var_274_float; // 0x4c8 Mov
	var_303_int = var_277_int; // 0x4c9 Mov
	func_1154(var_278_bool, var_302_float, var_303_int); // 0x4ca Call
	var_372_string = "all"; // 0x4cc PushS
	var_373_string = "attack_middle"; // 0x4cd PushS
	var_374_int = var_373_string + var_277_int; // 0x4ce Add
	HasAnimation(var_278_bool, var_372_string, var_374_int); // 0x4cf Func
	var_375_bool = var_278_bool; // 0x4d1 Push
	if(var_375_bool == 0) goto Label_1257; // 0x4d2 JumpB
	var_376_string = "all"; // 0x4d3 PushS
	var_377_string = "attack_middle"; // 0x4d4 PushS
	var_378_int = var_377_string + var_277_int; // 0x4d5 Add
	PlayAnimation(var_376_string, var_378_int); // 0x4d6 Func
	WaitForAnimEnd(); // 0x4d8 Func
	var_379_bool = 0; var_380_object = Obj(); // 0x4da PushV
	var_380_object = var_0_bool; // 0x4db MovT
	func_1816(var_379_bool, var_380_object); // 0x4dc Call
	var_381_bool = var_379_bool == 0; // 0x4de Not
	if(var_381_bool == 0) goto Label_1252; // 0x4df JumpB
	StopAsync(); // 0x4e0 Func
	var_273_bool = 0; // 0x4e2 MovB
	return 4; // 0x4e3 Return
	
Label_1252:
	var_382_float = 0; var_383_int = 0; // 0x4e4 PushV
	var_382_float = var_274_float; // 0x4e5 Mov
	var_383_int = var_277_int; // 0x4e6 Mov
	func_1154(var_278_bool, var_382_float, var_383_int); // 0x4e7 Call
	
Label_1257:
	var_384_bool = 0; // 0x4e9 PushB
	SetAttackState(var_384_bool); // 0x4ea Func
	var_385_string = "all"; // 0x4ec PushS
	var_386_string = "attack_end"; // 0x4ed PushS
	var_387_int = var_386_string + var_277_int; // 0x4ee Add
	PlayAnimation(var_385_string, var_387_int); // 0x4ef Func
	var_388_bool = 0; var_389_float = 0; // 0x4f1 PushV
	var_389_float = 0.75; // 0x4f2 MovF
	func_1273(var_388_bool, var_389_float); // 0x4f3 Call
	StopAsync(); // 0x4f5 Func
	var_273_bool = 1; // 0x4f7 MovB
	return 4; // 0x4f8 Return
}


func_683(var_68_object)
{
	var_69_bool = 0; var_70_bool = 0; // 0x2ab PushV
	
Label_684:
	var_71_bool = 0; var_72_object = Obj(); // 0x2ac PushV
	var_72_object = var_68_object; // 0x2ad Mov
	TaskCall(4); // 0x2ae TaskCall
	func_773(var_71_bool, var_72_object); // 0x2af Call
	TaskReturn(); // 0x2b0 TaskReturn
	if(var_73_bool == 0) goto Label_731; // 0x2b2 JumpB
	Face(var_68_object); // 0x2b3 Func
	WaitForAnimEnd(var_70_bool); // 0x2b5 Func
	var_126_bool = var_70_bool == 0; // 0x2b7 Not
	if(var_126_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_731; // 0x2b9 Jump
	
Label_731:
	return 2; // 0x2db Return
	
Label_698:
	var_127_string = "all"; // 0x2ba PushS
	var_128_string = "dattack_begin"; // 0x2bb PushS
	PlayAnimation(var_127_string, var_128_string); // 0x2bc Func
	WaitForAnimEnd(var_70_bool); // 0x2be Func
	var_129_bool = var_70_bool == 0; // 0x2c0 Not
	if(var_129_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_731; // 0x2c2 Jump
	
Label_707:
	var_130_float = 0; var_131_object = Obj(); // 0x2c3 PushV
	var_131_object = var_68_object; // 0x2c4 Mov
	func_1606(var_131_object); // 0x2c5 Call
	var_138_float = 90000.0; // 0x2c7 PushF
	var_139_bool = var_130_float <= var_138_float; // 0x2c8 LE
	if(var_139_bool == 0) goto Label_719; // 0x2c9 JumpB
	var_140_float = 0; var_141_object = Obj(); var_142_float = 0; // 0x2ca PushV
	var_141_object = var_68_object; // 0x2cb Mov
	var_142_float = 0.2; // 0x2cc MovF
	func_1712(var_140_float, var_141_object, var_142_float); // 0x2cd Call
	
Label_719:
	var_190_string = "all"; // 0x2cf PushS
	var_191_string = "dattack_end"; // 0x2d0 PushS
	PlayAnimation(var_190_string, var_191_string); // 0x2d1 Func
	WaitForAnimEnd(var_70_bool); // 0x2d3 Func
	var_192_bool = var_70_bool == 0; // 0x2d5 Not
	if(var_192_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_731; // 0x2d7 Jump
	
Label_728:
	StopAsync(); // 0x2d8 Func
	goto Label_684; // 0x2da Jump
}


func_1712(var_140_float, var_141_object, var_142_float)
{
	var_143_int = 0; var_144_float = 0; var_145_float = 0; var_146_int = 0; var_147_float = 0; var_148_float = 0; // 0x6b0 PushV
	var_149_bool = 0; var_150_object = Obj(); var_151_string = ""; // 0x6b1 PushV
	var_150_object = var_141_object; // 0x6b2 Mov
	var_151_string = "disease"; // 0x6b3 MovS
	func_1614(var_149_bool, var_150_object, var_151_string); // 0x6b4 Call
	var_152_bool = var_149_bool == 0; // 0x6b6 Not
	if(var_152_bool == 0) goto Label_1722; // 0x6b7 JumpB
	var_140_float = 0; // 0x6b8 MovI
	return 6; // 0x6b9 Return
	
Label_1722:
	var_153_bool = 0; var_154_object = Obj(); var_155_string = ""; // 0x6ba PushV
	var_154_object = var_141_object; // 0x6bb Mov
	var_155_string = "armor_disease"; // 0x6bc MovS
	func_1614(var_153_bool, var_154_object, var_155_string); // 0x6bd Call
	if(var_153_bool == 0) goto Label_1742; // 0x6bf JumpB
	var_156_string = "armor_disease"; // 0x6c0 PushS
	GetProperty(var_156_string, var_146_int); // 0x6c1 ObjFunc
	var_157_int = 100; // 0x6c3 PushI
	var_158_bool = var_146_int < var_157_int; // 0x6c4 LT
	if(var_158_bool == 0) goto Label_1740; // 0x6c5 JumpB
	var_159_int = 1; // 0x6c6 PushI
	var_160_float = 100.0; // 0x6c7 PushF
	var_161_float = var_146_int / var_160_float; // 0x6c8 Div
	var_162_int = var_159_int - var_161_float; // 0x6c9 Sub
	var_142_float = var_142_float * var_162_int; // 0x6ca Mult2
	goto Label_1742; // 0x6cb Jump
	
Label_1742:
	var_163_bool = 0; var_164_object = Obj(); var_165_string = ""; // 0x6ce PushV
	var_164_object = var_141_object; // 0x6cf Mov
	var_165_string = "immunity"; // 0x6d0 MovS
	func_1614(var_163_bool, var_164_object, var_165_string); // 0x6d1 Call
	if(var_163_bool == 0) goto Label_1765; // 0x6d3 JumpB
	var_166_string = "immunity"; // 0x6d4 PushS
	GetProperty(var_166_string, var_148_float); // 0x6d5 ObjFunc
	var_167_bool = var_148_float < var_142_float; // 0x6d7 LT
	if(var_167_bool == 0) goto Label_1759; // 0x6d8 JumpB
	var_168_string = "immunity"; // 0x6d9 PushS
	var_169_int = 0; // 0x6da PushI
	SetProperty(var_168_string, var_169_int); // 0x6db ObjFunc
	var_147_float = var_142_float - var_148_float; // 0x6dd Sub2
	goto Label_1765; // 0x6de Jump
	
Label_1765:
	var_170_bool = 0; var_171_object = Obj(); var_172_string = ""; var_173_float = 0; var_174_float = 0; var_175_float = 0; // 0x6e5 PushV
	var_171_object = var_141_object; // 0x6e6 Mov
	var_172_string = "disease"; // 0x6e7 MovS
	var_173_float = var_147_float; // 0x6e8 Mov
	var_174_float = 0; // 0x6e9 MovI
	var_175_float = 1; // 0x6ea MovI
	func_1626(var_170_bool, var_171_object, var_172_string, var_173_float, var_174_float, var_175_float); // 0x6eb Call
	var_140_float = var_142_float; // 0x6ed Mov
	return 6; // 0x6ee Return
	
Label_1759:
	var_188_string = "immunity"; // 0x6df PushS
	var_189_int = var_148_float - var_142_float; // 0x6e0 Sub
	SetProperty(var_188_string, var_189_int); // 0x6e1 ObjFunc
	var_140_float = var_142_float; // 0x6e3 Mov
	return 6; // 0x6e4 Return
	
Label_1740:
	var_140_float = 0; // 0x6cc MovI
	return 6; // 0x6cd Return
}


func_732()
{
	StopAsync(); // 0x2dc Func
	StopAnimation(); // 0x2de Func
	return 0; // 0x2e0 Return
}


func_2276(var_52_int, var_53_string)
{
	var_54_int = 0; var_55_int = 0; // 0x8e4 PushV
	GetInvItemByName(var_55_int, var_53_string); // 0x8e5 Func
	var_52_int = var_55_int; // 0x8e7 Mov
	return 2; // 0x8e8 Return
}


func_2281()
{
	var_13_bool = GlobalVars[0]; // 0x8e9 PushGE
	var_13_bool = 0; // 0x8ea MovB
	GlobalVars[0] = var_13_bool; // 0x8eb PopGE
	var_14_bool = 0; // 0x8ec PushV
	var_14_bool = 1; // 0x8ed MovB
	func_2101(var_14_bool); // 0x8ee Call
	return 0; // 0x8f0 Return
}


func_1775(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x6ef PushV
	IsDead(var_35_bool); // 0x6f0 ObjFunc
	var_32_bool = var_35_bool; // 0x6f2 Mov
	return 2; // 0x6f3 Return
}


func_2289(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x8f1 PushV
	var_25_bool = GlobalVars[0]; // 0x8f2 PushGE
	if(var_25_bool == 0) goto Label_2299; // 0x8f3 JumpB
	IsOverrideActive(var_24_bool); // 0x8f4 Func
	var_26_bool = var_24_bool == 0; // 0x8f6 Not
	if(var_26_bool == 0) goto Label_2298; // 0x8f7 JumpB
	WorkWithCorpse(var_22_object); // 0x8f8 Func
	
Label_2298:
	return 2; // 0x8fa Return
	
Label_2299:
	return 2; // 0x8fb Return
}


func_1780(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x6f4 PushV
	var_27_bool = var_22_object == 0; // 0x6f5 NullEq
	if(var_27_bool == 0) goto Label_1785; // 0x6f6 JumpB
	var_21_bool = 0; // 0x6f7 MovB
	return 4; // 0x6f8 Return
	
Label_1785:
	var_28_bool = 0; // 0x6f9 PushV
	var_28_bool = 0; // 0x6fa MovB
	var_29_string = "IsDead"; // 0x6fb PushS
	var_30_int = 1; // 0x6fc PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x6fd FuncExist
	if(var_31_bool == 0) goto Label_1797; // 0x6fe JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x6ff PushV
	var_33_object = var_22_object; // 0x700 Mov
	func_1775(var_33_object); // 0x701 Call
	if(var_32_bool == 0) goto Label_1797; // 0x703 JumpB
	var_28_bool = 1; // 0x704 MovB
	
Label_1797:
	if(var_28_bool == 0) goto Label_1800; // 0x705 JumpB
	var_21_bool = 0; // 0x706 MovB
	return 4; // 0x707 Return
	
Label_1800:
	GetScene(var_25_object); // 0x708 Func
	var_36_bool = var_25_object == 0; // 0x70a NullEq
	if(var_36_bool == 0) goto Label_1806; // 0x70b JumpB
	var_21_bool = 0; // 0x70c MovB
	return 4; // 0x70d Return
	
Label_1806:
	GetScene(var_26_object); // 0x70e ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x710 Neq
	if(var_37_bool == 0) goto Label_1812; // 0x711 JumpB
	var_21_bool = 0; // 0x712 MovB
	return 4; // 0x713 Return
	
Label_1812:
	var_21_bool = 1; // 0x714 MovB
	return 4; // 0x715 Return
}


func_1273(var_388_bool, var_389_float)
{
	var_390_float = 0; var_391_bool = 0; var_392_float = 0; var_393_bool = 0; // 0x4f9 PushV
	rand(var_392_float); // 0x4fa Func
	var_394_bool = var_392_float < var_389_float; // 0x4fc LT
	if(var_394_bool == 0) goto Label_1293; // 0x4fd JumpB
	
Label_1278:
	IsAnimationPlaying(var_393_bool); // 0x4fe Func
	var_395_bool = var_393_bool == 0; // 0x500 Not
	if(var_395_bool == 0) goto Label_1283; // 0x501 JumpB
	goto Label_1292; // 0x502 Jump
	
Label_1292:
	goto Label_1295; // 0x50c Jump
	
Label_1295:
	var_388_bool = 0; // 0x50f MovB
	return 4; // 0x510 Return
	
Label_1283:
	var_396_bool = 0; // 0x503 PushV
	func_1337(var_393_bool, var_396_bool); // 0x504 Call
	if(var_396_bool == 0) goto Label_1289; // 0x506 JumpB
	var_388_bool = 1; // 0x507 MovB
	return 4; // 0x508 Return
	
Label_1289:
	sync(); // 0x509 Func
	goto Label_1278; // 0x50b Jump
	
Label_1293:
	WaitForAnimEnd(); // 0x50d Func
}


func_2300(var_64_bool, var_65_object)
{
	var_66_bool = 0; var_67_bool = 0; // 0x8fc PushV
	IsPlayerActor(var_65_object, var_67_bool); // 0x8fd Func
	var_64_bool = var_67_bool; // 0x8ff Mov
	return 2; // 0x900 Return
}


func_2305(var_15_int)
{
	var_15_int = 0; // 0x902 MovI
	return 0; // 0x903 Return
}


func_2308()
{
	return 0; // 0x905 Return
}


func_773(var_71_bool, var_72_object)
{
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; var_78_float = 0; var_79_bool = 0; var_80_bool = 0; // 0x306 PushV
	var_76_object = var_72_object; // 0x307 Mov
	var_77_float = 150; // 0x308 MovI
	var_78_float = 3000; // 0x309 MovI
	var_79_bool = 0; // 0x30a MovB
	var_80_bool = 1; // 0x30b MovB
	func_786(var_71_bool, var_72_object, var_75_bool, var_76_object, var_77_float, var_78_float, var_79_bool, var_80_bool); // 0x30c Call
	var_71_bool = var_75_bool; // 0x30d Mov
	return 0; // 0x30f Return
}


func_2310(var_16_bool, var_17_object, var_18_object)
{
	var_19_string = ""; var_20_bool = 0; var_21_string = ""; var_22_bool = 0; // 0x906 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x907 PushV
	var_24_object = var_18_object; // 0x908 Mov
	var_25_string = "class"; // 0x909 MovS
	func_1614(var_23_bool, var_24_object, var_25_string); // 0x90a Call
	var_32_bool = var_23_bool == 0; // 0x90c Not
	if(var_32_bool == 0) goto Label_2320; // 0x90d JumpB
	var_16_bool = 0; // 0x90e MovB
	return 4; // 0x90f Return
	
Label_2320:
	var_33_string = "class"; // 0x910 PushS
	GetProperty(var_33_string, var_21_string); // 0x911 ObjFunc
	var_34_string = "rat"; // 0x913 PushS
	var_35_bool = var_21_string == var_34_string; // 0x914 Eq
	if(var_35_bool == 0) goto Label_2329; // 0x915 JumpB
	var_16_bool = 0; // 0x916 MovB
	return 4; // 0x917 Return
	
Label_2329:
	var_36_string = "dog"; // 0x919 PushS
	var_37_bool = var_21_string == var_36_string; // 0x91a Eq
	if(var_37_bool == 0) goto Label_2334; // 0x91b JumpB
	var_16_bool = 0; // 0x91c MovB
	return 4; // 0x91d Return
	
Label_2334:
	CanSee(var_22_bool, var_17_object); // 0x91e Func
	var_38_bool = 0; // 0x920 PushV
	var_38_bool = 1; // 0x921 MovB
	var_39_bool = var_22_bool; // 0x922 Push
	if(var_39_bool == 0) goto Label_2348; // 0x923 JumpB
	var_40_float = 0; var_41_object = Obj(); // 0x924 PushV
	var_41_object = var_17_object; // 0x925 Mov
	func_1606(var_41_object); // 0x926 Call
	var_48_float = 250000.0; // 0x928 PushF
	var_49_bool = var_40_float <= var_48_float; // 0x929 LE
	if(var_49_bool == 0) goto Label_2348; // 0x92a JumpB
	var_38_bool = 0; // 0x92b MovB
	
Label_2348:
	if(var_38_bool == 0) goto Label_2354; // 0x92c JumpB
	var_50_float = -0.3; // 0x92d PushF
	ReportReputationChange(var_17_object, var_18_object, var_50_float); // 0x92e Func
	var_16_bool = 1; // 0x930 MovB
	return 4; // 0x931 Return
	
Label_2354:
	var_16_bool = 0; // 0x932 MovB
	return 4; // 0x933 Return
}


func_784(var_115_string)
{
	var_115_string = "zwalk"; // 0x310 MovS
	return 0; // 0x311 Return
}


func_1297(var_0_bool, var_230_bool, var_231_float)
{
	var_232_bool = 0; var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_float = 0; var_237_bool = 0; var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_float = 0; // 0x511 PushV
	
Label_1298:
	IsAnimationPlaying(var_237_bool); // 0x512 Func
	var_242_bool = var_237_bool == 0; // 0x514 Not
	if(var_242_bool == 0) goto Label_1303; // 0x515 JumpB
	goto Label_1335; // 0x516 Jump
	
Label_1335:
	var_230_bool = 0; // 0x537 MovB
	return 10; // 0x538 Return
	
Label_1303:
	var_243_bool = 0; // 0x517 PushV
	func_1337(var_241_float, var_243_bool); // 0x518 Call
	if(var_243_bool == 0) goto Label_1309; // 0x51a JumpB
	var_230_bool = 1; // 0x51b MovB
	return 10; // 0x51c Return
	
Label_1309:
	var_268_bool = 0; var_269_object = Obj(); // 0x51d PushV
	var_269_object = var_0_bool; // 0x51e MovT
	func_1816(var_268_bool, var_269_object); // 0x51f Call
	var_270_bool = var_268_bool == 0; // 0x521 Not
	if(var_270_bool == 0) goto Label_1317; // 0x522 JumpB
	var_230_bool = 0; // 0x523 MovB
	return 10; // 0x524 Return
	
Label_1317:
	GetPFPosition(var_238_cvector); // 0x525 TObjFunc
	GetPFPosition(var_239_cvector); // 0x527 Func
	var_240_cvector = var_238_cvector - var_239_cvector; // 0x529 Sub2
	var_241_float = var_240_cvector | var_240_cvector; // 0x52a Or2
	var_271_float = var_231_float * var_231_float; // 0x52b Mult
	var_272_bool = var_241_float < var_271_float; // 0x52c LT
	if(var_272_bool == 0) goto Label_1332; // 0x52d JumpB
	var_273_bool = 0; var_274_float = 0; // 0x52e PushV
	var_274_float = var_231_float; // 0x52f Mov
	func_1193(var_241_float, var_273_bool, var_274_float); // 0x530 Call
	var_230_bool = 1; // 0x532 MovB
	return 10; // 0x533 Return
	
Label_1332:
	sync(); // 0x534 Func
	goto Label_1298; // 0x536 Jump
}


func_786(var_0_bool, var_1_bool, var_75_bool, var_76_object, var_77_float, var_78_float, var_79_bool, var_80_bool)
{
	var_81_bool = 0; var_82_bool = 0; var_83_object = Obj(); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_object = Obj(); var_89_bool = 0; var_90_bool = 0; var_91_object = Obj(); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_object = Obj(); // 0x312 PushV
	var_0_bool = 0; // 0x313 TMovB
	var_1_bool = var_76_object; // 0x314 TMov
	var_90_bool = var_80_bool; // 0x315 Mov
	
Label_790:
	var_97_bool = 0; var_98_object = Obj(); // 0x316 PushV
	var_98_object = var_76_object; // 0x317 Mov
	func_926(var_97_bool, var_98_object); // 0x318 Call
	var_101_bool = var_97_bool == 0; // 0x31a Not
	if(var_101_bool == 0) goto Label_798; // 0x31b JumpB
	var_75_bool = 0; // 0x31c MovB
	return 16; // 0x31d Return
	
Label_798:
	GetPosition(var_92_cvector); // 0x31e ObjFunc
	GetPosition(var_93_cvector); // 0x320 Func
	var_94_cvector = var_92_cvector - var_93_cvector; // 0x322 Sub2
	var_95_float = var_94_cvector | var_94_cvector; // 0x323 Or2
	var_102_bool = 0; // 0x324 PushV
	var_102_bool = 0; // 0x325 MovB
	var_103_int = 0; // 0x326 PushI
	var_104_bool = var_78_float > var_103_int; // 0x327 GT
	if(var_104_bool == 0) goto Label_813; // 0x328 JumpB
	var_105_float = var_78_float * var_78_float; // 0x329 Mult
	var_106_bool = var_95_float > var_105_float; // 0x32a GT
	if(var_106_bool == 0) goto Label_813; // 0x32b JumpB
	var_102_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_102_bool == 0) goto Label_818; // 0x32d JumpB
	Stop(); // 0x32e Func
	var_75_bool = 0; // 0x330 MovB
	return 16; // 0x331 Return
	
Label_818:
	var_107_float = var_77_float * var_77_float; // 0x332 Mult
	var_108_bool = var_95_float > var_107_float; // 0x333 GT
	if(var_108_bool == 0) goto Label_880; // 0x334 JumpB
	GetPFPosition(var_92_cvector); // 0x335 ObjFunc
	FindPathTo(var_96_object, var_92_cvector); // 0x337 Func
	var_109_bool = var_96_object != 0; // 0x339 NullNeq
	if(var_109_bool == 0) goto Label_829; // 0x33a JumpB
	var_91_object = var_96_object; // 0x33b Mov
	var_96_object = 0; // 0x33c SetNull
	
Label_829:
	var_110_bool = var_91_object != 0; // 0x33d NullNeq
	if(var_110_bool == 0) goto Label_862; // 0x33e JumpB
	var_111_bool = var_90_bool; // 0x33f Push
	if(var_111_bool == 0) goto Label_839; // 0x340 JumpB
	var_90_bool = 0; // 0x341 MovB
	RotatePath(var_91_object, var_89_bool); // 0x342 Func
	var_112_bool = var_89_bool == 0; // 0x344 Not
	if(var_112_bool == 0) goto Label_839; // 0x345 JumpB
	goto Label_886; // 0x346 Jump
	
Label_886:
	var_75_bool = !var_0_bool; // 0x376 Not2
	return 16; // 0x377 Return
	
Label_839:
	var_113_int = 0; // 0x347 PushI
	var_114_float = 0.3; // 0x348 PushF
	SetTimer(var_113_int, var_114_float); // 0x349 Func
	var_115_string = ""; // 0x34b PushV
	func_784(var_115_string); // 0x34c Call
	var_116_string = ""; // 0x34e PushV
	func_933(var_116_string); // 0x34f Call
	FollowPath(var_91_object, var_79_bool, var_89_bool, var_115_string, var_116_string); // 0x351 Func
	var_117_bool = var_89_bool == 0; // 0x353 Not
	if(var_117_bool == 0) goto Label_860; // 0x354 JumpB
	var_118_bool = var_0_bool; // 0x355 PushT
	if(var_118_bool == 0) goto Label_858; // 0x356 JumpB
	var_91_object = 0; // 0x357 SetNull
	goto Label_886; // 0x358 Jump
	
Label_858:
	goto Label_885; // 0x35a Jump
	
Label_885:
	goto Label_790; // 0x375 Jump
	
Label_860:
	var_91_object = 0; // 0x35c SetNull
	goto Label_878; // 0x35d Jump
	
Label_878:
	var_96_object = 0; // 0x36e SetNull
	goto Label_884; // 0x36f Jump
	
Label_884:
	var_91_object = 0; // 0x374 SetNull
	
Label_862:
	var_119_int = 0; // 0x35e PushI
	KillTimer(var_119_int); // 0x35f Func
	var_120_float = 0.5; // 0x361 PushF
	Sleep(var_120_float, var_89_bool); // 0x362 Func
	var_121_bool = var_89_bool == 0; // 0x364 Not
	if(var_121_bool == 0) goto Label_874; // 0x365 JumpB
	var_122_bool = var_0_bool; // 0x366 PushT
	if(var_122_bool == 0) goto Label_874; // 0x367 JumpB
	var_91_object = 0; // 0x368 SetNull
	goto Label_886; // 0x369 Jump
	
Label_874:
	var_123_int = 0; // 0x36a PushI
	var_124_float = 0.3; // 0x36b PushF
	SetTimer(var_123_int, var_124_float); // 0x36c Func
	
Label_880:
	var_125_int = 0; // 0x370 PushI
	KillTimer(var_125_int); // 0x371 Func
	goto Label_886; // 0x373 Jump
}


func_1816(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x718 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x719 PushV
	var_22_object = var_18_object; // 0x71a Mov
	func_1780(var_21_bool, var_22_object); // 0x71b Call
	var_38_bool = var_21_bool == 0; // 0x71d Not
	if(var_38_bool == 0) goto Label_1825; // 0x71e JumpB
	var_17_bool = 0; // 0x71f MovB
	return 2; // 0x720 Return
	
Label_1825:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x721 PushV
	var_40_object = var_18_object; // 0x722 Mov
	var_41_string = "noaccess"; // 0x723 MovS
	func_1614(var_39_bool, var_40_object, var_41_string); // 0x724 Call
	var_48_bool = var_39_bool == 0; // 0x726 Not
	if(var_48_bool == 0) goto Label_1834; // 0x727 JumpB
	var_17_bool = 1; // 0x728 MovB
	return 2; // 0x729 Return
	
Label_1834:
	var_49_string = "noaccess"; // 0x72a PushS
	GetProperty(var_49_string, var_20_int); // 0x72b ObjFunc
	var_50_int = 0; // 0x72d PushI
	var_17_bool = var_20_int == var_50_int; // 0x72e Eq2
	return 2; // 0x72f Return
}


func_1840(var_16_object, var_17_int)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; // 0x730 PushV
	var_39_bool = 0; // 0x731 PushV
	var_39_bool = 0; // 0x732 MovB
	var_40_int = 4; // 0x733 PushI
	var_41_bool = var_17_int != var_40_int; // 0x734 Neq
	if(var_41_bool == 0) goto Label_1850; // 0x735 JumpB
	var_42_int = 5; // 0x736 PushI
	var_43_bool = var_17_int != var_42_int; // 0x737 Neq
	if(var_43_bool == 0) goto Label_1850; // 0x738 JumpB
	var_39_bool = 1; // 0x739 MovB
	
Label_1850:
	if(var_39_bool == 0) goto Label_1869; // 0x73a JumpB
	GetScene(var_29_object); // 0x73b Func
	GetPosition(var_31_cvector); // 0x73d Func
	GetEyesHeight(var_32_float); // 0x73f Func
	var_44_float = GetByIndex(var_31_cvector, 1); // 0x741 PushE
	var_45_int = 2; // 0x742 PushI
	var_46_float = var_32_float / var_45_int; // 0x743 Div
	var_44_float = var_44_float + var_46_float; // 0x744 Add2
	SetByIndex(var_31_cvector, 1) = var_44_float; // 0x745 PopE
	var_47_string = "scripted"; // 0x746 PushS
	var_48_cvector = CVector(0.0, 0.0, 1.0); // 0x747 PushVec
	var_49_string = "blood.xml"; // 0x748 PushS
	AddActorByType(var_30_object, var_47_string, var_29_object, var_31_cvector, var_48_cvector, var_49_string); // 0x749 Func
	var_30_object = 0; // 0x74b SetNull
	var_29_object = 0; // 0x74c SetNull
	
Label_1869:
	var_50_bool = var_16_object == 0; // 0x74d NullEq
	if(var_50_bool == 0) goto Label_1872; // 0x74e JumpB
	return 20; // 0x74f Return
	
Label_1872:
	GetSecondaryAnimationType(var_33_int); // 0x750 Func
	var_51_int = 0; // 0x752 PushI
	var_52_bool = var_33_int < var_51_int; // 0x753 LT
	if(var_52_bool == 0) goto Label_1878; // 0x754 JumpB
	return 20; // 0x755 Return
	
Label_1878:
	GetPosition(var_34_cvector); // 0x756 ObjFunc
	GetPosition(var_35_cvector); // 0x758 Func
	GetDirection(var_36_cvector); // 0x75a Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x75c Sub2
	var_53_float = GetByIndex(var_37_cvector, 0); // 0x75d PushE
	var_54_float = GetByIndex(var_36_cvector, 0); // 0x75e PushE
	var_55_float = var_53_float * var_54_float; // 0x75f Mult
	var_56_float = GetByIndex(var_37_cvector, 2); // 0x760 PushE
	var_57_float = GetByIndex(var_36_cvector, 2); // 0x761 PushE
	var_58_float = var_56_float * var_57_float; // 0x762 Mult
	var_59_int = var_55_float + var_58_float; // 0x763 Add
	var_60_int = 0; // 0x764 PushI
	var_61_bool = var_59_int >= var_60_int; // 0x765 GE
	if(var_61_bool == 0) goto Label_1897; // 0x766 JumpB
	var_38_string = "fhit"; // 0x767 MovS
	goto Label_1898; // 0x768 Jump
	
Label_1898:
	var_62_string = "hit_react"; // 0x76a PushS
	var_63_string = "1"; // 0x76b PushS
	var_64_int = var_38_string + var_63_string; // 0x76c Add
	var_65_string = "2"; // 0x76d PushS
	var_66_int = var_38_string + var_65_string; // 0x76e Add
	var_67_int = -10; // 0x76f PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x770 Func
	return 20; // 0x772 Return
	
Label_1897:
	var_38_string = "bhit"; // 0x769 MovS
}


func_2356()
{
	var_66_bool = GlobalVars[0]; // 0x935 PushGE
	var_66_bool = 1; // 0x936 MovB
	GlobalVars[0] = var_66_bool; // 0x937 PopGE
	var_67_int = 50; // 0x938 PushI
	var_68_int = 40; // 0x939 PushI
	SetRTEnvelope(var_67_int, var_68_int); // 0x93a Func
	return 0; // 0x93c Return
}


func_311(var_2_bool)
{
	var_13_int = 110; // 0x137 PushI
	KillTimer(var_13_int); // 0x138 Func
	var_2_bool = 0; // 0x13a TMovB
	func_440(var_11_bool, var_12_object); // 0x13c Call
	return 0; // 0x13e Return
}


func_1337(var_0_bool, var_243_bool)
{
	var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_float = 0; var_248_float = 0; var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_float = 0; var_253_float = 0; // 0x539 PushV
	var_254_bool = 0; var_255_object = Obj(); // 0x53a PushV
	var_255_object = var_0_bool; // 0x53b MovT
	func_1816(var_254_bool, var_255_object); // 0x53c Call
	var_256_bool = var_254_bool == 0; // 0x53e Not
	if(var_256_bool == 0) goto Label_1346; // 0x53f JumpB
	var_243_bool = 0; // 0x540 MovB
	return 10; // 0x541 Return
	
Label_1346:
	var_257_bool = 0; // 0x542 PushV
	func_1389(var_253_float, var_257_bool); // 0x543 Call
	if(var_257_bool == 0) goto Label_1368; // 0x545 JumpB
	GetPFPosition(var_249_cvector); // 0x546 TObjFunc
	GetPFPosition(var_250_cvector); // 0x548 Func
	var_251_cvector = var_249_cvector - var_250_cvector; // 0x54a Sub2
	var_252_float = var_251_cvector | var_251_cvector; // 0x54b Or2
	GetAttackDistance(var_253_float); // 0x54c TObjFunc
	var_258_int = 50; // 0x54e PushI
	var_253_float = var_253_float + var_258_int; // 0x54f Add2
	var_259_float = var_253_float * var_253_float; // 0x550 Mult
	var_260_bool = var_252_float <= var_259_float; // 0x551 LE
	if(var_260_bool == 0) goto Label_1368; // 0x552 JumpB
	func_1370(var_253_float); // 0x554 Call
	var_243_bool = 1; // 0x556 MovB
	return 10; // 0x557 Return
	
Label_1368:
	var_243_bool = 0; // 0x558 MovB
	return 10; // 0x559 Return
}


func_319(var_2_bool)
{
	var_61_int = 110; // 0x13f PushI
	KillTimer(var_61_int); // 0x140 Func
	var_2_bool = 0; // 0x142 TMovB
	func_447(var_16_bool, var_17_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_336(var_2_bool, var_13_object)
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; // 0x150 PushV
	var_18_bool = 0; var_19_object = Obj(); // 0x151 PushV
	var_19_object = var_13_object; // 0x152 Mov
	func_1816(var_18_bool, var_19_object); // 0x153 Call
	var_52_bool = var_18_bool == 0; // 0x155 Not
	if(var_52_bool == 0) goto Label_344; // 0x156 JumpB
	return 4; // 0x157 Return
	
Label_344:
	var_53_bool = var_2_bool; // 0x158 PushT
	if(var_53_bool == 0) goto Label_347; // 0x159 JumpB
	return 4; // 0x15a Return
	
Label_347:
	IsPlayerActor(var_13_object, var_16_bool); // 0x15b Func
	var_54_bool = var_16_bool == 0; // 0x15d Not
	if(var_54_bool == 0) goto Label_352; // 0x15e JumpB
	return 4; // 0x15f Return
	
Label_352:
	var_55_int = 0; var_56_object = Obj(); // 0x160 PushV
	var_56_object = var_13_object; // 0x161 Mov
	func_2009(var_56_object); // 0x162 Call
	var_17_int = var_55_int; // 0x163 Mov
	var_57_int = 0; // 0x165 PushI
	var_58_bool = var_17_int > var_57_int; // 0x166 GT
	if(var_58_bool == 0) goto Label_375; // 0x167 JumpB
	var_59_int = 1; // 0x168 PushI
	var_60_bool = var_17_int > var_59_int; // 0x169 GT
	if(var_60_bool == 0) goto Label_366; // 0x16a JumpB
	func_319(var_17_int); // 0x16c Call
	
Label_366:
	var_62_object = Obj(); // 0x16e PushV
	var_62_object = var_13_object; // 0x16f Mov
	func_2012(var_62_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_193_int = 110; // 0x173 PushI
	var_194_float = 10.0; // 0x174 PushF
	SetTimer(var_193_int, var_194_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_1370(var_0_bool)
{
	var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); // 0x55a PushV
	Face(var_0_bool); // 0x55b Func
	var_265_string = "all"; // 0x55d PushS
	var_266_string = "bjump"; // 0x55e PushS
	PlayAnimation(var_265_string, var_266_string); // 0x55f Func
	GetPFPosition(var_263_cvector); // 0x561 TObjFunc
	GetPFPosition(var_264_cvector); // 0x563 Func
	WaitForAnimEnd(); // 0x565 Func
	StopAsync(); // 0x567 Func
	var_267_cvector = CVector(0.0, 0.0, 0.0); // 0x569 PushVec
	SetSpeed(var_267_cvector); // 0x56a Func
	return 4; // 0x56c Return
}


func_1389(var_0_bool, var_222_bool)
{
	var_223_bool = 0; var_224_bool = 0; // 0x56d PushV
	var_225_string = "IsAttacking"; // 0x56e PushS
	var_226_int = 1; // 0x56f PushI
	var_227_bool = IsFuncExist(var_0_bool, var_225_string, var_226_int); // 0x570 FuncExist
	if(var_227_bool == 0) goto Label_1398; // 0x571 JumpB
	IsAttacking(var_224_bool); // 0x572 TObjFunc
	var_222_bool = var_224_bool; // 0x574 Mov
	return 2; // 0x575 Return
	
Label_1398:
	var_222_bool = 0; // 0x576 MovB
	return 2; // 0x577 Return
}


func_1907()
{
	var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); // 0x773 PushV
	GetPosition(var_212_cvector); // 0x774 ObjFunc
	GetPosition(var_213_cvector); // 0x776 Func
	var_214_cvector = var_212_cvector - var_213_cvector; // 0x778 Sub2
	var_215_float = GetByIndex(var_214_cvector, 0); // 0x779 PushE
	var_216_float = GetByIndex(var_214_cvector, 2); // 0x77a PushE
	RotateAsync(var_215_float, var_216_float); // 0x77b Func
	return 6; // 0x77d Return
}


func_1400(var_2_bool, var_4_object)
{
	var_284_float = 0; var_285_int = 0; var_286_float = 0; var_287_int = 0; // 0x578 PushV
	var_288_bool = var_2_bool == 0; // 0x579 Not
	if(var_288_bool == 0) goto Label_1404; // 0x57a JumpB
	return 4; // 0x57b Return
	
Label_1404:
	var_289_object = var_4_object; // 0x57c PushT
	if(var_289_object == 0) goto Label_1412; // 0x57d JumpB
	var_290_int = -1; // 0x57e PushI
	var_4_object = var_4_object + var_290_int; // 0x57f Add2
	var_291_int = 0; // 0x580 PushI
	var_292_bool = var_4_object > var_291_int; // 0x581 GT
	if(var_292_bool == 0) goto Label_1412; // 0x582 JumpB
	return 4; // 0x583 Return
	
Label_1412:
	rand(var_286_float); // 0x584 Func
	var_293_float = 0; // 0x586 PushV
	func_1438(var_293_float); // 0x587 Call
	var_294_bool = var_286_float < var_293_float; // 0x589 LT
	if(var_294_bool == 0) goto Label_1431; // 0x58a JumpB
	irand(var_287_int, var_286_float); // 0x58b Func
	var_295_int = 1; // 0x58d PushI
	var_287_int = var_287_int + var_295_int; // 0x58e Add2
	var_296_string = "attack"; // 0x58f PushS
	var_297_int = var_296_string + var_287_int; // 0x590 Add
	Speak(var_297_int); // 0x591 Func
	var_298_int = 0; // 0x593 PushV
	func_1436(var_298_int); // 0x594 Call
	var_4_object = var_298_int; // 0x595 TMov
	
Label_1431:
	return 4; // 0x597 Return
}


func_376(var_0_bool, var_1_bool)
{
	var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_float = 0; var_139_bool = 0; var_140_object = Obj(); var_141_bool = 0; var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_bool = 0; var_147_object = Obj(); var_148_bool = 0; // 0x178 PushV
	var_0_bool = 0; // 0x179 TMovB
	var_1_bool = 0; // 0x17a TMovB
	var_149_float = 0.5; // 0x17b PushF
	rand(var_142_float, var_149_float); // 0x17c Func
	Sleep(var_142_float); // 0x17e Func
	
Label_384:
	var_150_bool = var_0_bool == 0; // 0x180 Not
	if(var_150_bool == 0) goto Label_432; // 0x181 JumpB
	var_151_bool = var_1_bool == 0; // 0x182 Not
	if(var_151_bool == 0) goto Label_404; // 0x183 JumpB
	
Label_388:
	GetPosition(var_144_cvector); // 0x184 Func
	GetCameraFarDistance(var_145_float); // 0x186 Func
	var_152_float = 2.5; // 0x188 PushF
	var_145_float = var_145_float * var_152_float; // 0x189 Mult2
	GetRandomPFPointInCircle(var_143_cvector, var_144_cvector, var_145_float, var_146_bool); // 0x18a Func
	var_153_bool = var_146_bool; // 0x18c Push
	if(var_153_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_403; // 0x18e Jump
	
Label_403:
	goto Label_405; // 0x193 Jump
	
Label_405:
	FindShiftedPathTo(var_147_object, var_143_cvector); // 0x195 Func
	var_154_bool = var_147_object != 0; // 0x197 NullNeq
	if(var_154_bool == 0) goto Label_427; // 0x198 JumpB
	RotatePath(var_147_object, var_148_bool); // 0x199 Func
	var_155_bool = var_148_bool; // 0x19b Push
	if(var_155_bool == 0) goto Label_426; // 0x19c JumpB
	var_156_bool = 0; // 0x19d PushV
	func_454(var_156_bool); // 0x19e Call
	FollowPath(var_147_object, var_156_bool, var_148_bool); // 0x1a0 Func
	var_147_object = 0; // 0x1a2 SetNull
	var_157_bool = var_148_bool; // 0x1a3 Push
	if(var_157_bool == 0) goto Label_426; // 0x1a4 JumpB
	TaskCall(2); // 0x1a6 TaskCall
	func_571(); // 0x1a7 Call
	TaskReturn(); // 0x1a8 TaskReturn
	
Label_426:
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_147_object = 0; // 0x1ae SetNull
	goto Label_384; // 0x1af Jump
	
Label_427:
	var_207_int = 1; // 0x1ab PushI
	Sleep(var_207_int); // 0x1ac Func
	
Label_399:
	var_208_int = 1; // 0x18f PushI
	Sleep(var_208_int); // 0x190 Func
	goto Label_388; // 0x192 Jump
	
Label_404:
	var_1_bool = 0; // 0x194 TMovB
	
Label_432:
	return 14; // 0x1b0 Return
}


func_1918(var_131_bool)
{
	var_132_bool = 0; var_133_bool = 0; // 0x77e PushV
	IsLoaded(var_133_bool); // 0x77f Func
	var_131_bool = var_133_bool; // 0x781 Mov
	return 2; // 0x782 Return
}


func_1923(var_352_float, var_353_float, var_354_float)
{
	var_357_bool = var_353_float < var_354_float; // 0x784 LT
	if(var_357_bool == 0) goto Label_1928; // 0x785 JumpB
	var_352_float = var_353_float; // 0x786 Mov
	goto Label_1929; // 0x787 Jump
	
Label_1929:
	return 0; // 0x789 Return
	
Label_1928:
	var_352_float = var_354_float; // 0x788 Mov
}


func_1930(var_362_float, var_363_float, var_364_float, var_365_float)
{
	var_366_bool = var_363_float < var_364_float; // 0x78b LT
	if(var_366_bool == 0) goto Label_1935; // 0x78c JumpB
	var_362_float = var_364_float; // 0x78d Mov
	return 0; // 0x78e Return
	
Label_1935:
	var_367_bool = var_363_float > var_365_float; // 0x78f GT
	if(var_367_bool == 0) goto Label_1939; // 0x790 JumpB
	var_362_float = var_365_float; // 0x791 Mov
	return 0; // 0x792 Return
	
Label_1939:
	var_362_float = var_363_float; // 0x793 Mov
	return 0; // 0x794 Return
}


func_910(var_0_bool)
{
	var_0_bool = 1; // 0x38e TMovB
	var_13_int = 0; // 0x38f PushI
	KillTimer(var_13_int); // 0x390 Func
	Stop(); // 0x392 Func
	return 0; // 0x394 Return
}


func_1941(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x795 PushV
	GetGameTime(var_25_float); // 0x796 Func
	var_26_int = 1; // 0x798 PushI
	var_27_int = 0; // 0x799 PushV
	var_28_int = 24; // 0x79a PushI
	var_27_int = var_25_float / var_25_float; // 0x79b Div2
	var_23_int = var_26_int + var_27_int; // 0x79c Add2
	return 2; // 0x79d Return
}


func_1432(var_369_int)
{
	var_369_int = 0; // 0x598 MovI
	return 0; // 0x599 Return
}


func_1434()
{
	return 0; // 0x59b Return
}


func_1436(var_298_int)
{
	var_298_int = 1; // 0x59c MovI
	return 0; // 0x59d Return
}


func_926(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x39f PushV
	var_18_object = var_16_object; // 0x3a0 Mov
	func_1816(var_17_bool, var_18_object); // 0x3a1 Call
	var_15_bool = var_17_bool; // 0x3a2 Mov
	return 0; // 0x3a4 Return
}


func_1438(var_293_float)
{
	var_293_float = 0.5; // 0x59e MovF
	return 0; // 0x59f Return
}


func_1950(var_13_object)
{
	var_14_object = Obj(); // 0x79f PushV
	var_14_object = var_13_object; // 0x7a0 Mov
	TaskCall(0); // 0x7a1 TaskCall
	func_0(var_14_object); // 0x7a2 Call
	TaskReturn(); // 0x7a3 TaskReturn
	return 0; // 0x7a5 Return
}


func_933(var_116_string)
{
	var_116_string = "run"; // 0x3a5 MovS
	return 0; // 0x3a6 Return
}


func_1447(var_0_bool, var_1_bool, var_146_bool, var_147_object, var_148_float, var_149_float, var_150_bool, var_151_bool)
{
	var_154_bool = 0; var_155_bool = 0; var_156_object = Obj(); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_object = Obj(); var_162_bool = 0; var_163_bool = 0; var_164_object = Obj(); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_object = Obj(); // 0x5a7 PushV
	var_0_bool = 0; // 0x5a8 TMovB
	var_1_bool = var_147_object; // 0x5a9 TMov
	var_163_bool = var_151_bool; // 0x5aa Mov
	
Label_1451:
	var_170_bool = 0; var_171_object = Obj(); // 0x5ab PushV
	var_171_object = var_147_object; // 0x5ac Mov
	func_1587(var_170_bool, var_171_object); // 0x5ad Call
	var_174_bool = var_170_bool == 0; // 0x5af Not
	if(var_174_bool == 0) goto Label_1459; // 0x5b0 JumpB
	var_146_bool = 0; // 0x5b1 MovB
	return 16; // 0x5b2 Return
	
Label_1459:
	GetPosition(var_165_cvector); // 0x5b3 ObjFunc
	GetPosition(var_166_cvector); // 0x5b5 Func
	var_167_cvector = var_165_cvector - var_166_cvector; // 0x5b7 Sub2
	var_168_float = var_167_cvector | var_167_cvector; // 0x5b8 Or2
	var_175_bool = 0; // 0x5b9 PushV
	var_175_bool = 0; // 0x5ba MovB
	var_176_int = 0; // 0x5bb PushI
	var_177_bool = var_149_float > var_176_int; // 0x5bc GT
	if(var_177_bool == 0) goto Label_1474; // 0x5bd JumpB
	var_178_float = var_149_float * var_149_float; // 0x5be Mult
	var_179_bool = var_168_float > var_178_float; // 0x5bf GT
	if(var_179_bool == 0) goto Label_1474; // 0x5c0 JumpB
	var_175_bool = 1; // 0x5c1 MovB
	
Label_1474:
	if(var_175_bool == 0) goto Label_1479; // 0x5c2 JumpB
	Stop(); // 0x5c3 Func
	var_146_bool = 0; // 0x5c5 MovB
	return 16; // 0x5c6 Return
	
Label_1479:
	var_180_float = var_148_float * var_148_float; // 0x5c7 Mult
	var_181_bool = var_168_float > var_180_float; // 0x5c8 GT
	if(var_181_bool == 0) goto Label_1541; // 0x5c9 JumpB
	GetPFPosition(var_165_cvector); // 0x5ca ObjFunc
	FindPathTo(var_169_object, var_165_cvector); // 0x5cc Func
	var_182_bool = var_169_object != 0; // 0x5ce NullNeq
	if(var_182_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_164_object = var_169_object; // 0x5d0 Mov
	var_169_object = 0; // 0x5d1 SetNull
	
Label_1490:
	var_183_bool = var_164_object != 0; // 0x5d2 NullNeq
	if(var_183_bool == 0) goto Label_1523; // 0x5d3 JumpB
	var_184_bool = var_163_bool; // 0x5d4 Push
	if(var_184_bool == 0) goto Label_1500; // 0x5d5 JumpB
	var_163_bool = 0; // 0x5d6 MovB
	RotatePath(var_164_object, var_162_bool); // 0x5d7 Func
	var_185_bool = var_162_bool == 0; // 0x5d9 Not
	if(var_185_bool == 0) goto Label_1500; // 0x5da JumpB
	goto Label_1547; // 0x5db Jump
	
Label_1547:
	var_146_bool = !var_0_bool; // 0x60b Not2
	return 16; // 0x60c Return
	
Label_1500:
	var_186_int = 0; // 0x5dc PushI
	var_187_float = 0.3; // 0x5dd PushF
	SetTimer(var_186_int, var_187_float); // 0x5de Func
	var_188_string = ""; // 0x5e0 PushV
	func_1594(var_188_string); // 0x5e1 Call
	var_189_string = ""; // 0x5e3 PushV
	func_1596(var_189_string); // 0x5e4 Call
	FollowPath(var_164_object, var_150_bool, var_162_bool, var_188_string, var_189_string); // 0x5e6 Func
	var_190_bool = var_162_bool == 0; // 0x5e8 Not
	if(var_190_bool == 0) goto Label_1521; // 0x5e9 JumpB
	var_191_bool = var_0_bool; // 0x5ea PushT
	if(var_191_bool == 0) goto Label_1519; // 0x5eb JumpB
	var_164_object = 0; // 0x5ec SetNull
	goto Label_1547; // 0x5ed Jump
	
Label_1519:
	goto Label_1546; // 0x5ef Jump
	
Label_1546:
	goto Label_1451; // 0x60a Jump
	
Label_1521:
	var_164_object = 0; // 0x5f1 SetNull
	goto Label_1539; // 0x5f2 Jump
	
Label_1539:
	var_169_object = 0; // 0x603 SetNull
	goto Label_1545; // 0x604 Jump
	
Label_1545:
	var_164_object = 0; // 0x609 SetNull
	
Label_1523:
	var_192_int = 0; // 0x5f3 PushI
	KillTimer(var_192_int); // 0x5f4 Func
	var_193_float = 0.5; // 0x5f6 PushF
	Sleep(var_193_float, var_162_bool); // 0x5f7 Func
	var_194_bool = var_162_bool == 0; // 0x5f9 Not
	if(var_194_bool == 0) goto Label_1535; // 0x5fa JumpB
	var_195_bool = var_0_bool; // 0x5fb PushT
	if(var_195_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_164_object = 0; // 0x5fd SetNull
	goto Label_1547; // 0x5fe Jump
	
Label_1535:
	var_196_int = 0; // 0x5ff PushI
	var_197_float = 0.3; // 0x600 PushF
	SetTimer(var_196_int, var_197_float); // 0x601 Func
	
Label_1541:
	var_198_int = 0; // 0x605 PushI
	KillTimer(var_198_int); // 0x606 Func
	goto Label_1547; // 0x608 Jump
}


func_935(var_89_object)
{
	var_95_object = Obj(); var_96_bool = 0; var_97_float = 0; // 0x3a8 PushV
	var_95_object = var_89_object; // 0x3a9 Mov
	var_96_bool = 1; // 0x3aa MovB
	var_97_float = 180.0; // 0x3ab MovF
	func_949(var_90_object, var_91_int, var_92_int, var_93_bool, var_94_int, var_89_object, var_95_object, var_96_bool, var_97_float); // 0x3ac Call
	return 0; // 0x3ae Return
}


func_943(var_313_float)
{
	var_313_float = 0.1; // 0x3b0 MovF
	return 0; // 0x3b1 Return
}


func_946(var_320_int)
{
	var_320_int = 0; // 0x3b3 MovI
	return 0; // 0x3b4 Return
}


func_949(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_95_object, var_96_bool, var_97_float, var_152_bool)
{
	var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_float = 0; var_108_bool = 0; var_109_bool = 0; var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_float = 0; // 0x3b5 PushV
	var_1_bool = 0; // 0x3b6 TMovI
	
Label_951:
	var_118_string = "all"; // 0x3b7 PushS
	var_119_string = "attack_begin"; // 0x3b8 PushS
	var_120_int = 1; // 0x3b9 PushI
	var_121_int = var_1_bool + var_120_int; // 0x3ba Add
	var_122_int = var_119_string + var_121_int; // 0x3bb Add
	HasAnimation(var_108_bool, var_118_string, var_122_int); // 0x3bc Func
	var_123_bool = var_108_bool == 0; // 0x3be Not
	if(var_123_bool == 0) goto Label_961; // 0x3bf JumpB
	goto Label_964; // 0x3c0 Jump
	
Label_964:
	var_2_bool = 0; // 0x3c4 TMovI
	
Label_965:
	var_124_string = "attack"; // 0x3c5 PushS
	var_125_int = 1; // 0x3c6 PushI
	var_126_int = var_2_bool + var_125_int; // 0x3c7 Add
	var_127_int = var_124_string + var_126_int; // 0x3c8 Add
	IsExisting3DSound(var_109_bool, var_127_int); // 0x3c9 Func
	var_128_bool = var_109_bool == 0; // 0x3cb Not
	if(var_128_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_977; // 0x3cd Jump
	
Label_977:
	var_4_object = 0; // 0x3d1 TMovI
	var_129_string = "@GetAttackDistance"; // 0x3d2 PushS
	var_130_int = 1; // 0x3d3 PushI
	var_131_bool = IsFuncExist(var_95_object, var_129_string, var_130_int); // 0x3d4 FuncExist
	if(var_131_bool == 0) goto Label_987; // 0x3d5 JumpB
	GetAttackDistance(var_110_float); // 0x3d6 ObjFunc
	var_132_int = 50; // 0x3d8 PushI
	var_110_float = var_110_float + var_132_int; // 0x3d9 Add2
	goto Label_988; // 0x3da Jump
	
Label_988:
	var_133_int = 150; // 0x3dc PushI
	var_134_bool = var_110_float >= var_133_int; // 0x3dd GE
	if(var_134_bool == 0) goto Label_992; // 0x3de JumpB
	var_110_float = 150; // 0x3df MovI
	
Label_992:
	var_3_object = 0; // 0x3e0 TMovB
	var_0_bool = var_95_object; // 0x3e1 TMov
	IsPlayerActor(var_0_bool, var_113_bool); // 0x3e2 Func
	var_135_bool = var_96_bool; // 0x3e4 Push
	if(var_135_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_114_bool = 0; // 0x3e6 MovB
	goto Label_1001; // 0x3e7 Jump
	
Label_1001:
	var_136_bool = 0; // 0x3e9 PushV
	var_136_bool = 0; // 0x3ea MovB
	var_137_bool = 0; var_138_object = Obj(); // 0x3eb PushV
	var_138_object = var_0_bool; // 0x3ec MovT
	func_1816(var_137_bool, var_138_object); // 0x3ed Call
	if(var_137_bool == 0) goto Label_1011; // 0x3ef JumpB
	var_139_bool = var_3_object == 0; // 0x3f0 Not
	if(var_139_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_136_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_136_bool == 0) goto Label_1137; // 0x3f3 JumpB
	GetPFPosition(var_111_cvector); // 0x3f4 TObjFunc
	GetPFPosition(var_112_cvector); // 0x3f6 Func
	var_115_cvector = var_111_cvector - var_112_cvector; // 0x3f8 Sub2
	var_116_float = var_115_cvector | var_115_cvector; // 0x3f9 Or2
	var_140_float = 400.0; // 0x3fa PushF
	var_141_int = var_140_float + var_110_float; // 0x3fb Add
	var_142_float = 400.0; // 0x3fc PushF
	var_143_int = var_142_float + var_110_float; // 0x3fd Add
	var_144_float = var_141_int * var_143_int; // 0x3fe Mult
	var_145_bool = var_116_float >= var_144_float; // 0x3ff GE
	if(var_145_bool == 0) goto Label_1040; // 0x400 JumpB
	var_146_bool = 0; var_147_object = Obj(); var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_bool = 0; // 0x401 PushV
	var_147_object = var_0_bool; // 0x402 MovT
	var_148_float = var_110_float; // 0x403 Mov
	var_149_float = 3000.0; // 0x404 MovF
	var_150_bool = 1; // 0x405 MovB
	var_151_bool = 0; // 0x406 MovB
	TaskCall(6); // 0x407 TaskCall
	func_1447(var_152_bool, var_153_object, var_146_bool, var_147_object, var_148_float, var_149_float, var_150_bool, var_151_bool); // 0x408 Call
	TaskReturn(); // 0x409 TaskReturn
	var_199_bool = var_152_bool == 0; // 0x40b Not
	if(var_199_bool == 0) goto Label_1038; // 0x40c JumpB
	goto Label_1137; // 0x40d Jump
	
Label_1137:
	WaitForAnimEnd(); // 0x471 Func
	var_200_object = var_3_object; // 0x473 PushT
	if(var_200_object == 0) goto Label_1142; // 0x474 JumpB
	return 20; // 0x475 Return
	
Label_1142:
	var_201_string = "all"; // 0x476 PushS
	var_202_string = "attack_off"; // 0x477 PushS
	PlayAnimation(var_201_string, var_202_string); // 0x478 Func
	WaitForAnimEnd(); // 0x47a Func
	var_203_bool = var_113_bool; // 0x47c Push
	if(var_203_bool == 0) goto Label_1153; // 0x47d JumpB
	var_204_float = 2.0; // 0x47e PushF
	Sleep(var_204_float); // 0x47f Func
	
Label_1153:
	return 20; // 0x481 Return
	
Label_1038:
	var_114_bool = 0; // 0x40e MovB
	goto Label_1136; // 0x40f Jump
	
Label_1136:
	goto Label_1001; // 0x470 Jump
	
Label_1040:
	var_205_float = var_97_float * var_97_float; // 0x410 Mult
	var_206_bool = var_116_float >= var_205_float; // 0x411 GE
	if(var_206_bool == 0) goto Label_1128; // 0x412 JumpB
	var_207_bool = var_114_bool == 0; // 0x413 Not
	if(var_207_bool == 0) goto Label_1058; // 0x414 JumpB
	var_208_object = Obj(); // 0x415 PushV
	var_208_object = var_0_bool; // 0x416 MovT
	func_1907(); // 0x417 Call
	var_217_string = "all"; // 0x419 PushS
	var_218_string = "attack_on"; // 0x41a PushS
	PlayAnimation(var_217_string, var_218_string); // 0x41b Func
	WaitForAnimEnd(); // 0x41d Func
	StopAsync(); // 0x41f Func
	var_114_bool = 1; // 0x421 MovB
	
Label_1058:
	rand(var_117_float); // 0x422 Func
	var_219_bool = 0; // 0x424 PushV
	var_219_bool = 1; // 0x425 MovB
	var_220_float = 0.6; // 0x426 PushF
	var_221_bool = var_117_float < var_220_float; // 0x427 LT
	if(var_221_bool == 0) goto Label_1070; // 0x428 JumpB
	var_222_bool = 0; // 0x429 PushV
	func_1389(var_219_bool, var_222_bool); // 0x42a Call
	if(var_222_bool == 0) goto Label_1070; // 0x42c JumpB
	var_219_bool = 0; // 0x42d MovB
	
Label_1070:
	if(var_219_bool == 0) goto Label_1084; // 0x42e JumpB
	Face(var_0_bool); // 0x42f Func
	var_228_string = "all"; // 0x431 PushS
	var_229_string = "attack_stay"; // 0x432 PushS
	PlayAnimation(var_228_string, var_229_string); // 0x433 Func
	var_230_bool = 0; var_231_float = 0; // 0x435 PushV
	var_231_float = var_97_float; // 0x436 Mov
	func_1297(var_117_float, var_230_bool, var_231_float); // 0x437 Call
	StopAsync(); // 0x439 Func
	goto Label_1127; // 0x43b Jump
	
Label_1127:
	goto Label_1136; // 0x467 Jump
	
Label_1084:
	Face(var_0_bool); // 0x43c Func
	var_397_string = "all"; // 0x43e PushS
	var_398_string = "fjump"; // 0x43f PushS
	PlayAnimation(var_397_string, var_398_string); // 0x440 Func
	WaitForAnimEnd(); // 0x442 Func
	var_399_cvector = CVector(0.0, 0.0, 0.0); // 0x444 PushVec
	SetSpeed(var_399_cvector); // 0x445 Func
	Stop(); // 0x447 Func
	StopAsync(); // 0x449 Func
	var_400_bool = 0; // 0x44b PushV
	func_1389(var_117_float, var_400_bool); // 0x44c Call
	var_401_bool = var_400_bool == 0; // 0x44e Not
	if(var_401_bool == 0) goto Label_1127; // 0x44f JumpB
	var_402_bool = 0; var_403_object = Obj(); // 0x450 PushV
	var_403_object = var_0_bool; // 0x451 MovT
	func_1816(var_402_bool, var_403_object); // 0x452 Call
	var_404_bool = var_402_bool == 0; // 0x454 Not
	if(var_404_bool == 0) goto Label_1111; // 0x455 JumpB
	goto Label_1137; // 0x456 Jump
	
Label_1111:
	GetPFPosition(var_111_cvector); // 0x457 TObjFunc
	GetPFPosition(var_112_cvector); // 0x459 Func
	var_115_cvector = var_111_cvector - var_112_cvector; // 0x45b Sub2
	var_116_float = var_115_cvector | var_115_cvector; // 0x45c Or2
	var_405_float = var_97_float * var_97_float; // 0x45d Mult
	var_406_bool = var_116_float < var_405_float; // 0x45e LT
	if(var_406_bool == 0) goto Label_1127; // 0x45f JumpB
	var_407_bool = 0; var_408_float = 0; // 0x460 PushV
	var_408_float = var_97_float; // 0x461 Mov
	func_1193(var_117_float, var_407_bool, var_408_float); // 0x462 Call
	var_409_bool = var_407_bool == 0; // 0x464 Not
	if(var_409_bool == 0) goto Label_1127; // 0x465 JumpB
	goto Label_1137; // 0x466 Jump
	
Label_1128:
	var_410_bool = 0; var_411_float = 0; // 0x468 PushV
	var_411_float = var_97_float; // 0x469 Mov
	func_1193(var_117_float, var_410_bool, var_411_float); // 0x46a Call
	var_412_bool = var_410_bool == 0; // 0x46c Not
	if(var_412_bool == 0) goto Label_1135; // 0x46d JumpB
	goto Label_1137; // 0x46e Jump
	
Label_1135:
	var_114_bool = 1; // 0x46f MovB
	
Label_1000:
	var_114_bool = 1; // 0x3e8 MovB
	
Label_987:
	var_110_float = var_97_float; // 0x3db Mov
	
Label_974:
	var_413_int = 1; // 0x3ce PushI
	var_2_bool = var_2_bool + var_413_int; // 0x3cf Add2
	goto Label_965; // 0x3d0 Jump
	
Label_961:
	var_414_int = 1; // 0x3c1 PushI
	var_1_bool = var_1_bool + var_414_int; // 0x3c2 Add2
	goto Label_951; // 0x3c3 Jump
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1b8 TMovB
	var_1_bool = 0; // 0x1b9 TMovB
	Stop(); // 0x1ba Func
	StopGroup0(); // 0x1bc Func
	return 0; // 0x1be Return
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1bf TMovB
	var_1_bool = 1; // 0x1c0 TMovB
	Stop(); // 0x1c1 Func
	StopGroup0(); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


func_1985(var_180_string, var_181_int)
{
	var_182_string = ""; var_183_string = ""; // 0x7c1 PushV
	var_183_string = "idle"; // 0x7c2 MovS
	var_184_int = var_181_int; // 0x7c3 Push
	if(var_184_int == 0) goto Label_1990; // 0x7c4 JumpB
	var_183_string = var_183_string + var_181_int; // 0x7c5 Add2
	
Label_1990:
	var_180_string = var_183_string; // 0x7c6 Mov
	return 2; // 0x7c7 Return
}


func_454(var_156_bool)
{
	var_156_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_1992(var_174_int)
{
	var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_bool = 0; // 0x7c8 PushV
	var_177_int = 0; // 0x7c9 MovI
	
Label_1994:
	var_179_string = "all"; // 0x7ca PushS
	var_180_string = ""; var_181_int = 0; // 0x7cb PushV
	var_181_int = var_177_int; // 0x7cc Mov
	func_1985(var_180_string, var_181_int); // 0x7cd Call
	HasAnimation(var_178_bool, var_179_string, var_180_string); // 0x7cf Func
	var_185_bool = var_178_bool == 0; // 0x7d1 Not
	if(var_185_bool == 0) goto Label_2004; // 0x7d2 JumpB
	goto Label_2007; // 0x7d3 Jump
	
Label_2007:
	var_174_int = var_177_int; // 0x7d7 Mov
	return 4; // 0x7d8 Return
	
Label_2004:
	var_186_int = 1; // 0x7d4 PushI
	var_177_int = var_177_int + var_186_int; // 0x7d5 Add2
	goto Label_1994; // 0x7d6 Jump
}


func_2009(var_55_int)
{
	var_55_int = 2; // 0x7da MovI
	return 0; // 0x7db Return
}


func_2012(var_62_object)
{
	var_63_object = Obj(); // 0x7dd PushV
	var_63_object = var_62_object; // 0x7de Mov
	TaskCall(3); // 0x7df TaskCall
	func_645(var_63_object); // 0x7e0 Call
	TaskReturn(); // 0x7e1 TaskReturn
	return 0; // 0x7e3 Return
}


func_2020(var_53_int, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj(); // 0x7e5 PushV
	var_56_object = var_54_object; // 0x7e6 Mov
	func_1816(var_55_bool, var_56_object); // 0x7e7 Call
	if(var_55_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_53_int = 2; // 0x7ea MovI
	goto Label_2029; // 0x7eb Jump
	
Label_2029:
	return 0; // 0x7ed Return
	
Label_2028:
	var_53_int = 0; // 0x7ec MovI
}


func_2030(var_88_object)
{
	var_89_object = Obj(); // 0x7ef PushV
	var_89_object = var_88_object; // 0x7f0 Mov
	TaskCall(5); // 0x7f1 TaskCall
	func_935(var_89_object); // 0x7f2 Call
	TaskReturn(); // 0x7f3 TaskReturn
	return 0; // 0x7f5 Return
}


func_2038(var_51_int, var_52_object)
{
	var_53_int = 0; var_54_object = Obj(); // 0x7f7 PushV
	var_54_object = var_52_object; // 0x7f8 Mov
	func_2020(var_53_int, var_54_object); // 0x7f9 Call
	var_51_int = var_53_int; // 0x7fa Mov
	return 0; // 0x7fc Return
}


func_2045(var_87_object)
{
	var_88_object = Obj(); // 0x7fe PushV
	var_88_object = var_87_object; // 0x7ff Mov
	func_2030(var_88_object); // 0x800 Call
	return 0; // 0x802 Return
}


