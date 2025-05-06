task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xf PushV
	var_8_int = 0; var_9_object = Obj(); // 0x10 PushV
	var_9_object = var_5_object; // 0x11 Mov
	func_1274(var_9_object); // 0x12 Call
	var_7_int = var_8_int; // 0x13 Mov
	var_10_int = 0; // 0x15 PushI
	var_11_bool = var_7_int > var_10_int; // 0x16 GT
	if(var_11_bool == 0) goto Label_28; // 0x17 JumpB
	var_12_object = Obj(); // 0x18 PushV
	var_12_object = var_5_object; // 0x19 Mov
	func_1277(); // 0x1a Call
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_1335(); // 0x1e Call
	return 0; // 0x20 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object)
{
	return 0; // 0x8f Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object)
{
	return 0; // 0x91 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0; // 0x93 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xac PushV
	var_8_int = 0; var_9_object = Obj(); // 0xad PushV
	var_9_object = var_5_object; // 0xae Mov
	func_1274(var_9_object); // 0xaf Call
	var_7_int = var_8_int; // 0xb0 Mov
	var_10_int = 0; // 0xb2 PushI
	var_11_bool = var_7_int > var_10_int; // 0xb3 GT
	if(var_11_bool == 0) goto Label_191; // 0xb4 JumpB
	var_12_int = 1; // 0xb5 PushI
	var_13_bool = var_7_int > var_12_int; // 0xb6 GT
	if(var_13_bool == 0) goto Label_187; // 0xb7 JumpB
	func_311(var_7_int); // 0xb9 Call
	
Label_187:
	var_15_object = Obj(); // 0xbb PushV
	var_15_object = var_5_object; // 0xbc Mov
	func_1277(); // 0xbd Call
	
Label_191:
	return 2; // 0xbf Return
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xc0 PushV
	var_8_int = 0; var_9_object = Obj(); // 0xc1 PushV
	var_9_object = var_5_object; // 0xc2 Mov
	func_1264(var_9_object); // 0xc3 Call
	var_7_int = var_8_int; // 0xc4 Mov
	var_10_int = 0; // 0xc6 PushI
	var_11_bool = var_7_int > var_10_int; // 0xc7 GT
	if(var_11_bool == 0) goto Label_211; // 0xc8 JumpB
	var_12_int = 1; // 0xc9 PushI
	var_13_bool = var_7_int > var_12_int; // 0xca GT
	if(var_13_bool == 0) goto Label_207; // 0xcb JumpB
	func_311(var_7_int); // 0xcd Call
	
Label_207:
	var_15_object = Obj(); // 0xcf PushV
	var_15_object = var_5_object; // 0xd0 Mov
	func_1267(); // 0xd1 Call
	
Label_211:
	return 2; // 0xd3 Return
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0xd4 PushV
	var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj(); // 0xd5 PushV
	var_10_object = var_5_bool; // 0xd6 Mov
	var_11_object = var_6_object; // 0xd7 Mov
	func_1303(var_9_bool, var_10_object, var_11_object); // 0xd8 Call
	if(var_9_bool == 0) goto Label_237; // 0xda JumpB
	var_27_int = 0; var_28_object = Obj(); // 0xdb PushV
	var_28_object = var_5_bool; // 0xdc Mov
	func_1269(var_28_object); // 0xdd Call
	var_8_int = var_27_int; // 0xde Mov
	var_29_int = 0; // 0xe0 PushI
	var_30_bool = var_8_int > var_29_int; // 0xe1 GT
	if(var_30_bool == 0) goto Label_237; // 0xe2 JumpB
	var_31_int = 1; // 0xe3 PushI
	var_32_bool = var_8_int > var_31_int; // 0xe4 GT
	if(var_32_bool == 0) goto Label_233; // 0xe5 JumpB
	func_311(var_8_int); // 0xe7 Call
	
Label_233:
	var_34_object = Obj(); // 0xe9 PushV
	var_34_object = var_5_bool; // 0xea Mov
	func_1272(); // 0xeb Call
	
Label_237:
	return 2; // 0xed Return
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0xee PushV
	var_8_int = 0; var_9_object = Obj(); // 0xef PushV
	var_9_object = var_5_object; // 0xf0 Mov
	func_1279(var_9_object); // 0xf1 Call
	var_7_int = var_8_int; // 0xf2 Mov
	var_10_int = 0; // 0xf4 PushI
	var_11_bool = var_7_int > var_10_int; // 0xf5 GT
	if(var_11_bool == 0) goto Label_257; // 0xf6 JumpB
	var_12_int = 1; // 0xf7 PushI
	var_13_bool = var_7_int > var_12_int; // 0xf8 GT
	if(var_13_bool == 0) goto Label_253; // 0xf9 JumpB
	func_311(var_7_int); // 0xfb Call
	
Label_253:
	var_15_object = Obj(); // 0xfd PushV
	var_15_object = var_5_object; // 0xfe Mov
	func_1282(); // 0xff Call
	
Label_257:
	return 2; // 0x101 Return
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x102 PushV
	var_9_int = 0; var_10_string = ""; var_11_object = Obj(); // 0x103 PushV
	var_10_string = var_6_object; // 0x104 Mov
	var_11_object = var_5_bool; // 0x105 Mov
	func_1284(var_11_object); // 0x106 Call
	var_8_int = var_9_int; // 0x107 Mov
	var_12_int = 0; // 0x109 PushI
	var_13_bool = var_8_int > var_12_int; // 0x10a GT
	if(var_13_bool == 0) goto Label_279; // 0x10b JumpB
	var_14_int = 1; // 0x10c PushI
	var_15_bool = var_8_int > var_14_int; // 0x10d GT
	if(var_15_bool == 0) goto Label_274; // 0x10e JumpB
	func_311(var_8_int); // 0x110 Call
	
Label_274:
	var_17_string = ""; var_18_object = Obj(); // 0x112 PushV
	var_17_string = var_6_object; // 0x113 Mov
	var_18_object = var_5_bool; // 0x114 Mov
	func_1287(); // 0x115 Call
	
Label_279:
	return 2; // 0x117 Return
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_object = Obj(); // 0x119 PushV
	var_6_object = var_5_object; // 0x11a Mov
	func_336(var_5_object, var_6_object); // 0x11b Call
	return 0; // 0x11d Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_object = Obj(); // 0x11f PushV
	var_6_object = var_5_object; // 0x120 Mov
	func_336(var_5_object, var_6_object); // 0x121 Call
	return 0; // 0x123 Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object)
{
	var_6_int = 110; // 0x125 PushI
	var_7_bool = var_5_object != var_6_int; // 0x126 Neq
	if(var_7_bool == 0) goto Label_297; // 0x127 JumpB
	return 0; // 0x128 Return
	
Label_297:
	var_2_bool = 0; // 0x129 TMovB
	var_8_int = 110; // 0x12a PushI
	KillTimer(var_8_int); // 0x12b Func
	ResetAAS(); // 0x12d Func
	return 0; // 0x12f Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_311(var_4_object); // 0x131 Call
	func_1335(); // 0x134 Call
	return 0; // 0x136 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_311(var_5_object); // 0x149 Call
	var_7_object = Obj(); // 0x14b PushV
	var_7_object = var_5_object; // 0x14c Mov
	func_1215(); // 0x14d Call
	return 0; // 0x14f Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	RequestClearPath(var_5_object); // 0x1b2 Func
	return 0; // 0x1b4 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	Stop(); // 0x1b5 Func
	return 0; // 0x1b7 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x1c8 PushV
	var_8_int = 0; var_9_object = Obj(); // 0x1c9 PushV
	var_9_object = var_5_object; // 0x1ca Mov
	func_1274(var_9_object); // 0x1cb Call
	var_7_int = var_8_int; // 0x1cc Mov
	var_10_int = 0; // 0x1ce PushI
	var_11_bool = var_7_int > var_10_int; // 0x1cf GT
	if(var_11_bool == 0) goto Label_475; // 0x1d0 JumpB
	var_12_int = 1; // 0x1d1 PushI
	var_13_bool = var_7_int > var_12_int; // 0x1d2 GT
	if(var_13_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_640(); // 0x1d5 Call
	
Label_471:
	var_14_object = Obj(); // 0x1d7 PushV
	var_14_object = var_5_object; // 0x1d8 Mov
	func_1277(); // 0x1d9 Call
	
Label_475:
	return 2; // 0x1db Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x1dc PushV
	var_8_int = 0; var_9_object = Obj(); // 0x1dd PushV
	var_9_object = var_5_object; // 0x1de Mov
	func_1264(var_9_object); // 0x1df Call
	var_7_int = var_8_int; // 0x1e0 Mov
	var_10_int = 0; // 0x1e2 PushI
	var_11_bool = var_7_int > var_10_int; // 0x1e3 GT
	if(var_11_bool == 0) goto Label_495; // 0x1e4 JumpB
	var_12_int = 1; // 0x1e5 PushI
	var_13_bool = var_7_int > var_12_int; // 0x1e6 GT
	if(var_13_bool == 0) goto Label_491; // 0x1e7 JumpB
	func_640(); // 0x1e9 Call
	
Label_491:
	var_14_object = Obj(); // 0x1eb PushV
	var_14_object = var_5_object; // 0x1ec Mov
	func_1267(); // 0x1ed Call
	
Label_495:
	return 2; // 0x1ef Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x1f0 PushV
	var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj(); // 0x1f1 PushV
	var_10_object = var_5_bool; // 0x1f2 Mov
	var_11_object = var_6_object; // 0x1f3 Mov
	func_1303(var_9_bool, var_10_object, var_11_object); // 0x1f4 Call
	if(var_9_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_27_int = 0; var_28_object = Obj(); // 0x1f7 PushV
	var_28_object = var_5_bool; // 0x1f8 Mov
	func_1269(var_28_object); // 0x1f9 Call
	var_8_int = var_27_int; // 0x1fa Mov
	var_29_int = 0; // 0x1fc PushI
	var_30_bool = var_8_int > var_29_int; // 0x1fd GT
	if(var_30_bool == 0) goto Label_521; // 0x1fe JumpB
	var_31_int = 1; // 0x1ff PushI
	var_32_bool = var_8_int > var_31_int; // 0x200 GT
	if(var_32_bool == 0) goto Label_517; // 0x201 JumpB
	func_640(); // 0x203 Call
	
Label_517:
	var_33_object = Obj(); // 0x205 PushV
	var_33_object = var_5_bool; // 0x206 Mov
	func_1272(); // 0x207 Call
	
Label_521:
	return 2; // 0x209 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x20a PushV
	var_8_int = 0; var_9_object = Obj(); // 0x20b PushV
	var_9_object = var_5_object; // 0x20c Mov
	func_1279(var_9_object); // 0x20d Call
	var_7_int = var_8_int; // 0x20e Mov
	var_10_int = 0; // 0x210 PushI
	var_11_bool = var_7_int > var_10_int; // 0x211 GT
	if(var_11_bool == 0) goto Label_541; // 0x212 JumpB
	var_12_int = 1; // 0x213 PushI
	var_13_bool = var_7_int > var_12_int; // 0x214 GT
	if(var_13_bool == 0) goto Label_537; // 0x215 JumpB
	func_640(); // 0x217 Call
	
Label_537:
	var_14_object = Obj(); // 0x219 PushV
	var_14_object = var_5_object; // 0x21a Mov
	func_1282(); // 0x21b Call
	
Label_541:
	return 2; // 0x21d Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x21e PushV
	var_9_int = 0; var_10_string = ""; var_11_object = Obj(); // 0x21f PushV
	var_10_string = var_6_object; // 0x220 Mov
	var_11_object = var_5_bool; // 0x221 Mov
	func_1284(var_11_object); // 0x222 Call
	var_8_int = var_9_int; // 0x223 Mov
	var_12_int = 0; // 0x225 PushI
	var_13_bool = var_8_int > var_12_int; // 0x226 GT
	if(var_13_bool == 0) goto Label_563; // 0x227 JumpB
	var_14_int = 1; // 0x228 PushI
	var_15_bool = var_8_int > var_14_int; // 0x229 GT
	if(var_15_bool == 0) goto Label_558; // 0x22a JumpB
	func_640(); // 0x22c Call
	
Label_558:
	var_16_string = ""; var_17_object = Obj(); // 0x22e PushV
	var_16_string = var_6_object; // 0x22f Mov
	var_17_object = var_5_bool; // 0x230 Mov
	func_1287(); // 0x231 Call
	
Label_563:
	return 2; // 0x233 Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_640(); // 0x235 Call
	func_1335(); // 0x238 Call
	return 0; // 0x23a Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x290 PushV
	var_8_int = 0; var_9_object = Obj(); // 0x291 PushV
	var_9_object = var_5_object; // 0x292 Mov
	func_1298(var_9_object); // 0x293 Call
	var_7_int = var_8_int; // 0x294 Mov
	var_10_int = 0; // 0x296 PushI
	var_11_bool = var_7_int > var_10_int; // 0x297 GT
	if(var_11_bool == 0) goto Label_675; // 0x298 JumpB
	var_12_int = 1; // 0x299 PushI
	var_13_bool = var_7_int > var_12_int; // 0x29a GT
	if(var_13_bool == 0) goto Label_671; // 0x29b JumpB
	func_732(); // 0x29d Call
	
Label_671:
	var_14_object = Obj(); // 0x29f PushV
	var_14_object = var_5_object; // 0x2a0 Mov
	func_1301(); // 0x2a1 Call
	
Label_675:
	return 2; // 0x2a3 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_732(); // 0x2a5 Call
	func_1335(); // 0x2a8 Call
	return 0; // 0x2aa Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_732(); // 0x2e3 Call
	var_6_object = Obj(); // 0x2e5 PushV
	var_6_object = var_5_object; // 0x2e6 Mov
	func_1215(); // 0x2e7 Call
	return 0; // 0x2e9 Return
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x2ea PushV
	var_8_int = 0; var_9_object = Obj(); // 0x2eb PushV
	var_9_object = var_5_object; // 0x2ec Mov
	func_1298(var_9_object); // 0x2ed Call
	var_7_int = var_8_int; // 0x2ee Mov
	var_10_int = 0; // 0x2f0 PushI
	var_11_bool = var_7_int > var_10_int; // 0x2f1 GT
	if(var_11_bool == 0) goto Label_765; // 0x2f2 JumpB
	var_12_int = 1; // 0x2f3 PushI
	var_13_bool = var_7_int > var_12_int; // 0x2f4 GT
	if(var_13_bool == 0) goto Label_761; // 0x2f5 JumpB
	func_910(var_7_int); // 0x2f7 Call
	
Label_761:
	var_15_object = Obj(); // 0x2f9 PushV
	var_15_object = var_5_object; // 0x2fa Mov
	func_1301(); // 0x2fb Call
	
Label_765:
	return 2; // 0x2fd Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_910(var_4_object); // 0x2ff Call
	func_1335(); // 0x302 Call
	return 0; // 0x304 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_6_int = 0; // 0x379 PushI
	var_7_bool = var_5_int != var_6_int; // 0x37a Neq
	if(var_7_bool == 0) goto Label_893; // 0x37b JumpB
	return 0; // 0x37c Return
	
Label_893:
	var_8_bool = 0; var_9_object = Obj(); // 0x37d PushV
	var_9_object = var_1_bool; // 0x37e MovT
	func_926(var_8_bool, var_9_object); // 0x37f Call
	var_44_bool = var_8_bool == 0; // 0x381 Not
	if(var_44_bool == 0) goto Label_900; // 0x382 JumpB
	var_0_bool = 1; // 0x383 TMovB
	
Label_900:
	var_45_int = 0; // 0x384 PushI
	KillTimer(var_45_int); // 0x385 Func
	Stop(); // 0x387 Func
	return 0; // 0x389 Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	RequestClearPath(var_5_object); // 0x38b Func
	return 0; // 0x38d Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	func_910(var_5_object); // 0x397 Call
	var_7_object = Obj(); // 0x399 PushV
	var_7_object = var_5_object; // 0x39a Mov
	func_1215(); // 0x39b Call
	return 0; // 0x39d Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0; // 0x4b2 PushV
	var_9_string = "health"; // 0x4b3 PushS
	var_10_bool = var_6_string == var_9_string; // 0x4b4 Eq
	if(var_10_bool == 0) goto Label_1214; // 0x4b5 JumpB
	var_11_string = "health"; // 0x4b6 PushS
	GetProperty(var_11_string, var_8_float); // 0x4b7 Func
	var_12_int = 0; // 0x4b9 PushI
	var_13_bool = var_8_float <= var_12_int; // 0x4ba LE
	if(var_13_bool == 0) goto Label_1214; // 0x4bb JumpB
	SignalDeath(var_5_object); // 0x4bc Func
	
Label_1214:
	return 2; // 0x4be Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_object = Obj(); // 0x4c0 PushV
	var_6_object = var_5_object; // 0x4c1 Mov
	func_1194(var_6_object); // 0x4c2 Call
	return 0; // 0x4c4 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0; // 0x4c6 PushV
	var_9_object = var_5_object; // 0x4c7 Mov
	var_10_int = var_6_int; // 0x4c8 Mov
	var_11_float = var_7_float; // 0x4c9 Mov
	func_1105(var_10_int, var_11_float); // 0x4ca Call
	return 0; // 0x4cc Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	var_5_bool = 1; // 0x94 PushB
	SensePlayerOnly(var_5_bool); // 0x95 Func
	func_1289(); // 0x98 Call
	func_163(); // 0x9b Call
	
Label_157:
	var_2_bool = 0; // 0x9d TMovB
	func_376(var_3_bool, var_4_object); // 0x9f Call
	goto Label_157; // 0xa1 Jump
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_0(var_7_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_8_object = Obj(); // 0x2 PushV
	var_8_object = var_7_object; // 0x3 Mov
	func_33(var_8_object); // 0x4 Call
	var_58_object = Obj(); // 0x6 PushV
	var_58_object = var_7_object; // 0x7 Mov
	func_1326(); // 0x8 Call
	EventEnable(0); // 0xa EventEnable
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_1282()
{
	return 0; // 0x503 Return
}


func_1284(var_9_int)
{
	var_9_int = 0; // 0x505 MovI
	return 0; // 0x506 Return
}


func_773(var_64_bool, var_65_object)
{
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_bool = 0; var_73_bool = 0; // 0x306 PushV
	var_69_object = var_65_object; // 0x307 Mov
	var_70_float = 150; // 0x308 MovI
	var_71_float = 3000; // 0x309 MovI
	var_72_bool = 0; // 0x30a MovB
	var_73_bool = 1; // 0x30b MovB
	func_786(var_64_bool, var_65_object, var_68_bool, var_69_object, var_70_float, var_71_float, var_72_bool, var_73_bool); // 0x30c Call
	var_64_bool = var_68_bool; // 0x30d Mov
	return 0; // 0x30f Return
}


func_645(var_56_object)
{
	var_57_bool = 0; var_58_object = Obj(); // 0x286 PushV
	var_58_object = var_56_object; // 0x287 Mov
	func_1293(var_57_bool, var_58_object); // 0x288 Call
	if(var_57_bool == 0) goto Label_655; // 0x28a JumpB
	var_61_object = Obj(); // 0x28b PushV
	var_61_object = var_56_object; // 0x28c Mov
	func_683(var_61_object); // 0x28d Call
	
Label_655:
	return 0; // 0x28f Return
}


func_1287()
{
	return 0; // 0x508 Return
}


func_1289()
{
	var_6_bool = GlobalVars[0]; // 0x509 PushGE
	var_6_bool = 0; // 0x50a MovB
	GlobalVars[0] = var_6_bool; // 0x50b PopGE
	return 0; // 0x50c Return
}


func_1293(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0; // 0x50d PushV
	IsPlayerActor(var_58_object, var_60_bool); // 0x50e Func
	var_57_bool = var_60_bool; // 0x510 Mov
	return 2; // 0x511 Return
}


func_910(var_0_bool)
{
	var_0_bool = 1; // 0x38e TMovB
	var_6_int = 0; // 0x38f PushI
	KillTimer(var_6_int); // 0x390 Func
	Stop(); // 0x392 Func
	return 0; // 0x394 Return
}


func_784(var_108_string)
{
	var_108_string = "zwalk"; // 0x310 MovS
	return 0; // 0x311 Return
}


func_1040(var_25_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x410 PushV
	IsDead(var_28_bool); // 0x411 ObjFunc
	var_25_bool = var_28_bool; // 0x413 Mov
	return 2; // 0x414 Return
}


func_1298(var_8_int)
{
	var_8_int = 0; // 0x513 MovI
	return 0; // 0x514 Return
}


func_786(var_0_bool, var_1_bool, var_68_bool, var_69_object, var_70_float, var_71_float, var_72_bool, var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0; var_76_object = Obj(); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_object = Obj(); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj(); // 0x312 PushV
	var_0_bool = 0; // 0x313 TMovB
	var_1_bool = var_69_object; // 0x314 TMov
	var_83_bool = var_73_bool; // 0x315 Mov
	
Label_790:
	var_90_bool = 0; var_91_object = Obj(); // 0x316 PushV
	var_91_object = var_69_object; // 0x317 Mov
	func_926(var_90_bool, var_91_object); // 0x318 Call
	var_94_bool = var_90_bool == 0; // 0x31a Not
	if(var_94_bool == 0) goto Label_798; // 0x31b JumpB
	var_68_bool = 0; // 0x31c MovB
	return 16; // 0x31d Return
	
Label_798:
	GetPosition(var_85_cvector); // 0x31e ObjFunc
	GetPosition(var_86_cvector); // 0x320 Func
	var_87_cvector = var_85_cvector - var_86_cvector; // 0x322 Sub2
	var_88_float = var_87_cvector | var_87_cvector; // 0x323 Or2
	var_95_bool = 0; // 0x324 PushV
	var_95_bool = 0; // 0x325 MovB
	var_96_int = 0; // 0x326 PushI
	var_97_bool = var_71_float > var_96_int; // 0x327 GT
	if(var_97_bool == 0) goto Label_813; // 0x328 JumpB
	var_98_float = var_71_float * var_71_float; // 0x329 Mult
	var_99_bool = var_88_float > var_98_float; // 0x32a GT
	if(var_99_bool == 0) goto Label_813; // 0x32b JumpB
	var_95_bool = 1; // 0x32c MovB
	
Label_813:
	if(var_95_bool == 0) goto Label_818; // 0x32d JumpB
	Stop(); // 0x32e Func
	var_68_bool = 0; // 0x330 MovB
	return 16; // 0x331 Return
	
Label_818:
	var_100_float = var_70_float * var_70_float; // 0x332 Mult
	var_101_bool = var_88_float > var_100_float; // 0x333 GT
	if(var_101_bool == 0) goto Label_880; // 0x334 JumpB
	GetPFPosition(var_85_cvector); // 0x335 ObjFunc
	FindPathTo(var_89_object, var_85_cvector); // 0x337 Func
	var_102_bool = var_89_object != 0; // 0x339 NullNeq
	if(var_102_bool == 0) goto Label_829; // 0x33a JumpB
	var_84_object = var_89_object; // 0x33b Mov
	var_89_object = 0; // 0x33c SetNull
	
Label_829:
	var_103_bool = var_84_object != 0; // 0x33d NullNeq
	if(var_103_bool == 0) goto Label_862; // 0x33e JumpB
	var_104_bool = var_83_bool; // 0x33f Push
	if(var_104_bool == 0) goto Label_839; // 0x340 JumpB
	var_83_bool = 0; // 0x341 MovB
	RotatePath(var_84_object, var_82_bool); // 0x342 Func
	var_105_bool = var_82_bool == 0; // 0x344 Not
	if(var_105_bool == 0) goto Label_839; // 0x345 JumpB
	goto Label_886; // 0x346 Jump
	
Label_886:
	var_68_bool = !var_0_bool; // 0x376 Not2
	return 16; // 0x377 Return
	
Label_839:
	var_106_int = 0; // 0x347 PushI
	var_107_float = 0.3; // 0x348 PushF
	SetTimer(var_106_int, var_107_float); // 0x349 Func
	var_108_string = ""; // 0x34b PushV
	func_784(var_108_string); // 0x34c Call
	var_109_string = ""; // 0x34e PushV
	func_933(var_109_string); // 0x34f Call
	FollowPath(var_84_object, var_72_bool, var_82_bool, var_108_string, var_109_string); // 0x351 Func
	var_110_bool = var_82_bool == 0; // 0x353 Not
	if(var_110_bool == 0) goto Label_860; // 0x354 JumpB
	var_111_bool = var_0_bool; // 0x355 PushT
	if(var_111_bool == 0) goto Label_858; // 0x356 JumpB
	var_84_object = 0; // 0x357 SetNull
	goto Label_886; // 0x358 Jump
	
Label_858:
	goto Label_885; // 0x35a Jump
	
Label_885:
	goto Label_790; // 0x375 Jump
	
Label_860:
	var_84_object = 0; // 0x35c SetNull
	goto Label_878; // 0x35d Jump
	
Label_878:
	var_89_object = 0; // 0x36e SetNull
	goto Label_884; // 0x36f Jump
	
Label_884:
	var_84_object = 0; // 0x374 SetNull
	
Label_862:
	var_112_int = 0; // 0x35e PushI
	KillTimer(var_112_int); // 0x35f Func
	var_113_float = 0.5; // 0x361 PushF
	Sleep(var_113_float, var_82_bool); // 0x362 Func
	var_114_bool = var_82_bool == 0; // 0x364 Not
	if(var_114_bool == 0) goto Label_874; // 0x365 JumpB
	var_115_bool = var_0_bool; // 0x366 PushT
	if(var_115_bool == 0) goto Label_874; // 0x367 JumpB
	var_84_object = 0; // 0x368 SetNull
	goto Label_886; // 0x369 Jump
	
Label_874:
	var_116_int = 0; // 0x36a PushI
	var_117_float = 0.3; // 0x36b PushF
	SetTimer(var_116_int, var_117_float); // 0x36c Func
	
Label_880:
	var_118_int = 0; // 0x370 PushI
	KillTimer(var_118_int); // 0x371 Func
	goto Label_886; // 0x373 Jump
}


func_1172(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x494 PushV
	IsLoaded(var_9_bool); // 0x495 Func
	var_7_bool = var_9_bool; // 0x497 Mov
	return 2; // 0x498 Return
}


func_1301()
{
	return 0; // 0x516 Return
}


func_1045(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); // 0x415 PushV
	var_20_bool = var_15_object == 0; // 0x416 NullEq
	if(var_20_bool == 0) goto Label_1050; // 0x417 JumpB
	var_14_bool = 0; // 0x418 MovB
	return 4; // 0x419 Return
	
Label_1050:
	var_21_bool = 0; // 0x41a PushV
	var_21_bool = 0; // 0x41b MovB
	var_22_string = "IsDead"; // 0x41c PushS
	var_23_int = 1; // 0x41d PushI
	var_24_bool = IsFuncExist(var_15_object, var_22_string, var_23_int); // 0x41e FuncExist
	if(var_24_bool == 0) goto Label_1062; // 0x41f JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x420 PushV
	var_26_object = var_15_object; // 0x421 Mov
	func_1040(var_26_object); // 0x422 Call
	if(var_25_bool == 0) goto Label_1062; // 0x424 JumpB
	var_21_bool = 1; // 0x425 MovB
	
Label_1062:
	if(var_21_bool == 0) goto Label_1065; // 0x426 JumpB
	var_14_bool = 0; // 0x427 MovB
	return 4; // 0x428 Return
	
Label_1065:
	GetScene(var_18_object); // 0x429 Func
	var_29_bool = var_18_object == 0; // 0x42b NullEq
	if(var_29_bool == 0) goto Label_1071; // 0x42c JumpB
	var_14_bool = 0; // 0x42d MovB
	return 4; // 0x42e Return
	
Label_1071:
	GetScene(var_19_object); // 0x42f ObjFunc
	var_30_bool = var_18_object != var_19_object; // 0x431 Neq
	if(var_30_bool == 0) goto Label_1077; // 0x432 JumpB
	var_14_bool = 0; // 0x433 MovB
	return 4; // 0x434 Return
	
Label_1077:
	var_14_bool = 1; // 0x435 MovB
	return 4; // 0x436 Return
}


func_1303(var_9_bool, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x517 PushV
	CanSee(var_13_bool, var_10_object); // 0x518 Func
	var_14_bool = 0; // 0x51a PushV
	var_14_bool = 1; // 0x51b MovB
	var_15_bool = var_13_bool; // 0x51c Push
	if(var_15_bool == 0) goto Label_1318; // 0x51d JumpB
	var_16_float = 0; var_17_object = Obj(); // 0x51e PushV
	var_17_object = var_10_object; // 0x51f Mov
	func_935(var_17_object); // 0x520 Call
	var_24_float = 250000.0; // 0x522 PushF
	var_25_bool = var_16_float <= var_24_float; // 0x523 LE
	if(var_25_bool == 0) goto Label_1318; // 0x524 JumpB
	var_14_bool = 0; // 0x525 MovB
	
Label_1318:
	if(var_14_bool == 0) goto Label_1324; // 0x526 JumpB
	var_26_float = -0.3; // 0x527 PushF
	ReportReputationChange(var_10_object, var_11_object, var_26_float); // 0x528 Func
	var_9_bool = 1; // 0x52a MovB
	return 2; // 0x52b Return
	
Label_1324:
	var_9_bool = 0; // 0x52c MovB
	return 2; // 0x52d Return
}


func_1177(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x499 PushV
	self(var_13_object); // 0x49a Func
	var_11_object = var_13_object; // 0x49c Mov
	return 2; // 0x49d Return
}


func_926(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); // 0x39f PushV
	var_11_object = var_9_object; // 0x3a0 Mov
	func_1081(var_10_bool, var_11_object); // 0x3a1 Call
	var_8_bool = var_10_bool; // 0x3a2 Mov
	return 0; // 0x3a4 Return
}


func_1183(var_175_float, var_176_float, var_177_float, var_178_float)
{
	var_179_bool = var_176_float < var_177_float; // 0x4a0 LT
	if(var_179_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_175_float = var_177_float; // 0x4a2 Mov
	return 0; // 0x4a3 Return
	
Label_1188:
	var_180_bool = var_176_float > var_178_float; // 0x4a4 GT
	if(var_180_bool == 0) goto Label_1192; // 0x4a5 JumpB
	var_175_float = var_178_float; // 0x4a6 Mov
	return 0; // 0x4a7 Return
	
Label_1192:
	var_175_float = var_176_float; // 0x4a8 Mov
	return 0; // 0x4a9 Return
}


func_33(var_8_object)
{
	var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_string = ""; var_14_object = Obj(); var_15_bool = 0; var_16_bool = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); // 0x21 PushV
	var_29_bool = var_8_object == 0; // 0x22 NullEq
	if(var_29_bool == 0) goto Label_41; // 0x23 JumpB
	var_30_string = ""; // 0x24 PushV
	var_30_string = "fdie"; // 0x25 MovS
	func_120(var_30_string); // 0x26 Call
	goto Label_119; // 0x28 Jump
	
Label_119:
	return 20; // 0x77 Return
	
Label_41:
	GetPosition(var_19_cvector); // 0x29 ObjFunc
	GetPosition(var_20_cvector); // 0x2b Func
	GetDirection(var_21_cvector); // 0x2d Func
	var_22_cvector = var_20_cvector - var_19_cvector; // 0x2f Sub2
	var_33_float = GetByIndex(var_22_cvector, 0); // 0x30 PushE
	var_34_float = GetByIndex(var_21_cvector, 0); // 0x31 PushE
	var_35_float = var_33_float * var_34_float; // 0x32 Mult
	var_36_float = GetByIndex(var_22_cvector, 2); // 0x33 PushE
	var_37_float = GetByIndex(var_21_cvector, 2); // 0x34 PushE
	var_38_float = var_36_float * var_37_float; // 0x35 Mult
	var_39_int = var_35_float + var_38_float; // 0x36 Add
	var_40_int = 0; // 0x37 PushI
	var_41_bool = var_39_int >= var_40_int; // 0x38 GE
	if(var_41_bool == 0) goto Label_60; // 0x39 JumpB
	var_23_string = "fdie"; // 0x3a MovS
	goto Label_61; // 0x3b Jump
	
Label_61:
	RemoveRTEnvelope(); // 0x3d Func
	SetDeathState(); // 0x3f Func
	Stop(); // 0x41 Func
	StopAsync(); // 0x43 Func
	var_24_object = var_8_object; // 0x45 Mov
	var_42_string = "GetScriptProperty"; // 0x46 PushS
	var_43_int = 2; // 0x47 PushI
	var_44_bool = IsFuncExist(var_8_object, var_42_string, var_43_int); // 0x48 FuncExist
	if(var_44_bool == 0) goto Label_85; // 0x49 JumpB
	var_45_string = "Owner"; // 0x4a PushS
	HasScriptProperty(var_25_bool, var_45_string); // 0x4b ObjFunc
	var_46_bool = var_25_bool; // 0x4d Push
	if(var_46_bool == 0) goto Label_85; // 0x4e JumpB
	var_47_string = "Owner"; // 0x4f PushS
	GetScriptProperty(var_24_object, var_47_string); // 0x50 ObjFunc
	var_48_bool = var_24_object == 0; // 0x52 NullEq
	if(var_48_bool == 0) goto Label_85; // 0x53 JumpB
	var_24_object = var_8_object; // 0x54 Mov
	
Label_85:
	var_49_string = "@GetEyesHeight"; // 0x55 PushS
	var_50_int = 1; // 0x56 PushI
	var_51_bool = IsFuncExist(var_24_object, var_49_string, var_50_int); // 0x57 FuncExist
	if(var_51_bool == 0) goto Label_100; // 0x58 JumpB
	GetEyesHeight(var_27_float); // 0x59 ObjFunc
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_52_float = GetByIndex(var_28_cvector, 1); // 0x5c PushE
	var_52_float = var_27_float; // 0x5d Mov
	SetByIndex(var_28_cvector, 1) = var_52_float; // 0x5e PopE
	var_53_string = "head"; // 0x5f PushS
	LookAsync(var_8_object, var_53_string, var_28_cvector); // 0x60 Func
	var_26_bool = 1; // 0x62 MovB
	goto Label_101; // 0x63 Jump
	
Label_101:
	var_54_string = "all"; // 0x65 PushS
	PlayAnimation(var_54_string, var_23_string); // 0x66 Func
	WaitForAnimEnd(); // 0x68 Func
	var_55_bool = var_26_bool; // 0x6a Push
	if(var_55_bool == 0) goto Label_113; // 0x6b JumpB
	StopAsync(); // 0x6c Func
	var_56_string = "head"; // 0x6e PushS
	UnlookAsync(var_56_string); // 0x6f Func
	
Label_113:
	var_57_string = "all"; // 0x71 PushS
	LockAnimationEnd(var_57_string, var_23_string); // 0x72 Func
	RemoveEnvelope(); // 0x74 Func
	var_24_object = 0; // 0x76 SetNull
	
Label_100:
	var_26_bool = 0; // 0x64 MovB
	
Label_60:
	var_23_string = "bdie"; // 0x3c MovS
}


func_163()
{
	var_7_bool = 0; // 0xa3 PushV
	func_1172(var_7_bool); // 0xa4 Call
	var_10_bool = var_7_bool == 0; // 0xa6 Not
	if(var_10_bool == 0) goto Label_171; // 0xa7 JumpB
	func_1335(); // 0xa9 Call
	
Label_171:
	return 0; // 0xab Return
}


func_933(var_109_string)
{
	var_109_string = "run"; // 0x3a5 MovS
	return 0; // 0x3a6 Return
}


func_935(var_16_float)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x3a7 PushV
	GetPosition(var_21_cvector); // 0x3a8 Func
	GetPosition(var_22_cvector); // 0x3aa ObjFunc
	var_23_cvector = var_22_cvector - var_21_cvector; // 0x3ac Sub2
	var_16_float = var_23_cvector | var_23_cvector; // 0x3ad Or2
	return 6; // 0x3ae Return
}


func_1194(var_6_object)
{
	var_7_object = Obj(); // 0x4ab PushV
	var_7_object = var_6_object; // 0x4ac Mov
	TaskCall(0); // 0x4ad TaskCall
	func_0(var_7_object); // 0x4ae Call
	TaskReturn(); // 0x4af TaskReturn
	return 0; // 0x4b1 Return
}


func_683(var_61_object)
{
	var_62_bool = 0; var_63_bool = 0; // 0x2ab PushV
	
Label_684:
	var_64_bool = 0; var_65_object = Obj(); // 0x2ac PushV
	var_65_object = var_61_object; // 0x2ad Mov
	TaskCall(4); // 0x2ae TaskCall
	func_773(var_64_bool, var_65_object); // 0x2af Call
	TaskReturn(); // 0x2b0 TaskReturn
	if(var_66_bool == 0) goto Label_731; // 0x2b2 JumpB
	Face(var_61_object); // 0x2b3 Func
	WaitForAnimEnd(var_63_bool); // 0x2b5 Func
	var_119_bool = var_63_bool == 0; // 0x2b7 Not
	if(var_119_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_731; // 0x2b9 Jump
	
Label_731:
	return 2; // 0x2db Return
	
Label_698:
	var_120_string = "all"; // 0x2ba PushS
	var_121_string = "dattack_begin"; // 0x2bb PushS
	PlayAnimation(var_120_string, var_121_string); // 0x2bc Func
	WaitForAnimEnd(var_63_bool); // 0x2be Func
	var_122_bool = var_63_bool == 0; // 0x2c0 Not
	if(var_122_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_731; // 0x2c2 Jump
	
Label_707:
	var_123_float = 0; var_124_object = Obj(); // 0x2c3 PushV
	var_124_object = var_61_object; // 0x2c4 Mov
	func_935(var_124_object); // 0x2c5 Call
	var_131_float = 90000.0; // 0x2c7 PushF
	var_132_bool = var_123_float <= var_131_float; // 0x2c8 LE
	if(var_132_bool == 0) goto Label_719; // 0x2c9 JumpB
	var_133_float = 0; var_134_object = Obj(); var_135_float = 0; // 0x2ca PushV
	var_134_object = var_61_object; // 0x2cb Mov
	var_135_float = 0.2; // 0x2cc MovF
	func_977(var_133_float, var_134_object, var_135_float); // 0x2cd Call
	
Label_719:
	var_183_string = "all"; // 0x2cf PushS
	var_184_string = "dattack_end"; // 0x2d0 PushS
	PlayAnimation(var_183_string, var_184_string); // 0x2d1 Func
	WaitForAnimEnd(var_63_bool); // 0x2d3 Func
	var_185_bool = var_63_bool == 0; // 0x2d5 Not
	if(var_185_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_731; // 0x2d7 Jump
	
Label_728:
	StopAsync(); // 0x2d8 Func
	goto Label_684; // 0x2da Jump
}


func_1326()
{
	var_59_bool = GlobalVars[0]; // 0x52f PushGE
	var_59_bool = 1; // 0x530 MovB
	GlobalVars[0] = var_59_bool; // 0x531 PopGE
	var_60_int = 50; // 0x532 PushI
	var_61_int = 40; // 0x533 PushI
	SetRTEnvelope(var_60_int, var_61_int); // 0x534 Func
	return 0; // 0x536 Return
}


func_943(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0; // 0x3af PushV
	var_37_string = "HasProperty"; // 0x3b0 PushS
	var_38_int = 2; // 0x3b1 PushI
	var_39_bool = IsFuncExist(var_33_object, var_37_string, var_38_int); // 0x3b2 FuncExist
	var_40_bool = var_39_bool == 0; // 0x3b3 Not
	if(var_40_bool == 0) goto Label_951; // 0x3b4 JumpB
	var_32_bool = 0; // 0x3b5 MovB
	return 2; // 0x3b6 Return
	
Label_951:
	HasProperty(var_34_string, var_36_bool); // 0x3b7 ObjFunc
	var_32_bool = var_36_bool; // 0x3b9 Mov
	return 2; // 0x3ba Return
}


func_311(var_2_bool)
{
	var_6_int = 110; // 0x137 PushI
	KillTimer(var_6_int); // 0x138 Func
	var_2_bool = 0; // 0x13a TMovB
	func_440(var_4_bool, var_5_object); // 0x13c Call
	return 0; // 0x13e Return
}


func_1335()
{
	var_11_object = Obj(); // 0x537 PushV
	func_1177(var_11_object); // 0x538 Call
	RemoveActor(var_11_object); // 0x53a Func
	return 0; // 0x53c Return
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x1b8 TMovB
	var_1_bool = 0; // 0x1b9 TMovB
	Stop(); // 0x1ba Func
	StopGroup0(); // 0x1bc Func
	return 0; // 0x1be Return
}


func_1081(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x439 PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x43a PushV
	var_15_object = var_11_object; // 0x43b Mov
	func_1045(var_14_bool, var_15_object); // 0x43c Call
	var_31_bool = var_14_bool == 0; // 0x43e Not
	if(var_31_bool == 0) goto Label_1090; // 0x43f JumpB
	var_10_bool = 0; // 0x440 MovB
	return 2; // 0x441 Return
	
Label_1090:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0x442 PushV
	var_33_object = var_11_object; // 0x443 Mov
	var_34_string = "noaccess"; // 0x444 MovS
	func_943(var_32_bool, var_33_object, var_34_string); // 0x445 Call
	var_41_bool = var_32_bool == 0; // 0x447 Not
	if(var_41_bool == 0) goto Label_1099; // 0x448 JumpB
	var_10_bool = 1; // 0x449 MovB
	return 2; // 0x44a Return
	
Label_1099:
	var_42_string = "noaccess"; // 0x44b PushS
	GetProperty(var_42_string, var_13_int); // 0x44c ObjFunc
	var_43_int = 0; // 0x44e PushI
	var_10_bool = var_13_int == var_43_int; // 0x44f Eq2
	return 2; // 0x450 Return
}


func_571()
{
	var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0; // 0x23b PushV
	WaitForAnimEnd(); // 0x23c Func
	var_51_bool = 0; // 0x23e PushV
	func_1172(var_51_bool); // 0x23f Call
	var_52_bool = var_51_bool == 0; // 0x241 Not
	if(var_52_bool == 0) goto Label_580; // 0x242 JumpB
	return 14; // 0x243 Return
	
Label_580:
	var_53_int = 0; // 0x244 PushV
	func_1236(var_53_int); // 0x245 Call
	var_44_int = var_53_int; // 0x246 Mov
	var_45_int = 0; // 0x248 MovI
	
Label_585:
	var_66_bool = 0; // 0x249 PushV
	var_66_bool = 0; // 0x24a MovB
	var_67_int = 5; // 0x24b PushI
	var_68_bool = var_45_int < var_67_int; // 0x24c LT
	if(var_68_bool == 0) goto Label_595; // 0x24d JumpB
	var_69_bool = 0; // 0x24e PushV
	func_1172(var_69_bool); // 0x24f Call
	if(var_69_bool == 0) goto Label_595; // 0x251 JumpB
	var_66_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_66_bool == 0) goto Label_639; // 0x253 JumpB
	var_70_int = 3; // 0x254 PushI
	irand(var_46_int, var_70_int); // 0x255 Func
	var_71_int = 0; // 0x257 PushI
	var_72_bool = var_46_int == var_71_int; // 0x258 Eq
	if(var_72_bool == 0) goto Label_619; // 0x259 JumpB
	var_73_int = var_44_int; // 0x25a Push
	if(var_73_int == 0) goto Label_618; // 0x25b JumpB
	irand(var_47_int, var_44_int); // 0x25c Func
	var_74_string = "all"; // 0x25e PushS
	var_75_string = ""; var_76_int = 0; // 0x25f PushV
	var_76_int = var_47_int; // 0x260 Mov
	func_1229(var_75_string, var_76_int); // 0x261 Call
	PlayAnimation(var_74_string, var_75_string); // 0x263 Func
	WaitForAnimEnd(var_48_bool); // 0x265 Func
	var_77_bool = var_48_bool == 0; // 0x267 Not
	if(var_77_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_639; // 0x269 Jump
	
Label_639:
	return 14; // 0x27f Return
	
Label_618:
	goto Label_636; // 0x26a Jump
	
Label_636:
	var_78_int = 1; // 0x27c PushI
	var_45_int = var_45_int + var_78_int; // 0x27d Add2
	goto Label_585; // 0x27e Jump
	
Label_619:
	var_79_int = 1; // 0x26b PushI
	var_80_bool = var_46_int == var_79_int; // 0x26c Eq
	if(var_80_bool == 0) goto Label_633; // 0x26d JumpB
	var_81_int = 4; // 0x26e PushI
	rand(var_49_float, var_81_int); // 0x26f Func
	var_82_int = 1; // 0x271 PushI
	var_83_int = var_49_float + var_82_int; // 0x272 Add
	Sleep(var_83_int, var_50_bool); // 0x273 Func
	var_84_bool = var_50_bool == 0; // 0x275 Not
	if(var_84_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_639; // 0x277 Jump
	
Label_632:
	goto Label_636; // 0x278 Jump
	
Label_633:
	var_85_int = var_45_int; // 0x279 Push
	if(var_85_int == 0) goto Label_636; // 0x27a JumpB
	goto Label_639; // 0x27b Jump
}


func_955(var_163_bool, var_164_object, var_165_string, var_166_float, var_167_float, var_168_float)
{
	var_169_float = 0; var_170_float = 0; // 0x3bb PushV
	var_171_bool = 0; var_172_object = Obj(); var_173_string = ""; // 0x3bc PushV
	var_172_object = var_164_object; // 0x3bd Mov
	var_173_string = var_165_string; // 0x3be Mov
	func_943(var_171_bool, var_172_object, var_173_string); // 0x3bf Call
	var_174_bool = var_171_bool == 0; // 0x3c1 Not
	if(var_174_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_163_bool = 0; // 0x3c3 MovB
	return 2; // 0x3c4 Return
	
Label_965:
	GetProperty(var_165_string, var_170_float); // 0x3c5 ObjFunc
	var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x3c7 PushV
	var_176_float = var_170_float + var_166_float; // 0x3c8 Add2
	var_177_float = var_167_float; // 0x3c9 Mov
	var_178_float = var_168_float; // 0x3ca Mov
	func_1183(var_175_float, var_176_float, var_177_float, var_178_float); // 0x3cb Call
	SetProperty(var_165_string, var_175_float); // 0x3cd ObjFunc
	var_163_bool = 1; // 0x3cf MovB
	return 2; // 0x3d0 Return
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
	var_54_int = 110; // 0x13f PushI
	KillTimer(var_54_int); // 0x140 Func
	var_2_bool = 0; // 0x142 TMovB
	func_447(var_9_bool, var_10_int); // 0x144 Call
	return 0; // 0x146 Return
}


func_454(var_35_bool)
{
	var_35_bool = 0; // 0x1c6 MovB
	return 0; // 0x1c7 Return
}


func_1229(var_59_string, var_60_int)
{
	var_61_string = ""; var_62_string = ""; // 0x4cd PushV
	var_62_string = "idle"; // 0x4ce MovS
	var_63_int = var_60_int; // 0x4cf Push
	if(var_63_int == 0) goto Label_1234; // 0x4d0 JumpB
	var_62_string = var_62_string + var_60_int; // 0x4d1 Add2
	
Label_1234:
	var_59_string = var_62_string; // 0x4d2 Mov
	return 2; // 0x4d3 Return
}


func_336(var_2_bool, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_bool = 0; var_10_int = 0; // 0x150 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x151 PushV
	var_12_object = var_6_object; // 0x152 Mov
	func_1081(var_11_bool, var_12_object); // 0x153 Call
	var_45_bool = var_11_bool == 0; // 0x155 Not
	if(var_45_bool == 0) goto Label_344; // 0x156 JumpB
	return 4; // 0x157 Return
	
Label_344:
	var_46_bool = var_2_bool; // 0x158 PushT
	if(var_46_bool == 0) goto Label_347; // 0x159 JumpB
	return 4; // 0x15a Return
	
Label_347:
	IsPlayerActor(var_6_object, var_9_bool); // 0x15b Func
	var_47_bool = var_9_bool == 0; // 0x15d Not
	if(var_47_bool == 0) goto Label_352; // 0x15e JumpB
	return 4; // 0x15f Return
	
Label_352:
	var_48_int = 0; var_49_object = Obj(); // 0x160 PushV
	var_49_object = var_6_object; // 0x161 Mov
	func_1253(var_49_object); // 0x162 Call
	var_10_int = var_48_int; // 0x163 Mov
	var_50_int = 0; // 0x165 PushI
	var_51_bool = var_10_int > var_50_int; // 0x166 GT
	if(var_51_bool == 0) goto Label_375; // 0x167 JumpB
	var_52_int = 1; // 0x168 PushI
	var_53_bool = var_10_int > var_52_int; // 0x169 GT
	if(var_53_bool == 0) goto Label_366; // 0x16a JumpB
	func_319(var_10_int); // 0x16c Call
	
Label_366:
	var_55_object = Obj(); // 0x16e PushV
	var_55_object = var_6_object; // 0x16f Mov
	func_1256(var_55_object); // 0x170 Call
	var_2_bool = 1; // 0x172 TMovB
	var_186_int = 110; // 0x173 PushI
	var_187_float = 10.0; // 0x174 PushF
	SetTimer(var_186_int, var_187_float); // 0x175 Func
	
Label_375:
	return 4; // 0x177 Return
}


func_977(var_133_float, var_134_object, var_135_float)
{
	var_136_int = 0; var_137_float = 0; var_138_float = 0; var_139_int = 0; var_140_float = 0; var_141_float = 0; // 0x3d1 PushV
	var_142_bool = 0; var_143_object = Obj(); var_144_string = ""; // 0x3d2 PushV
	var_143_object = var_134_object; // 0x3d3 Mov
	var_144_string = "disease"; // 0x3d4 MovS
	func_943(var_142_bool, var_143_object, var_144_string); // 0x3d5 Call
	var_145_bool = var_142_bool == 0; // 0x3d7 Not
	if(var_145_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_133_float = 0; // 0x3d9 MovI
	return 6; // 0x3da Return
	
Label_987:
	var_146_bool = 0; var_147_object = Obj(); var_148_string = ""; // 0x3db PushV
	var_147_object = var_134_object; // 0x3dc Mov
	var_148_string = "armor_disease"; // 0x3dd MovS
	func_943(var_146_bool, var_147_object, var_148_string); // 0x3de Call
	if(var_146_bool == 0) goto Label_1007; // 0x3e0 JumpB
	var_149_string = "armor_disease"; // 0x3e1 PushS
	GetProperty(var_149_string, var_139_int); // 0x3e2 ObjFunc
	var_150_int = 100; // 0x3e4 PushI
	var_151_bool = var_139_int < var_150_int; // 0x3e5 LT
	if(var_151_bool == 0) goto Label_1005; // 0x3e6 JumpB
	var_152_int = 1; // 0x3e7 PushI
	var_153_float = 100.0; // 0x3e8 PushF
	var_154_float = var_139_int / var_153_float; // 0x3e9 Div
	var_155_int = var_152_int - var_154_float; // 0x3ea Sub
	var_135_float = var_135_float * var_155_int; // 0x3eb Mult2
	goto Label_1007; // 0x3ec Jump
	
Label_1007:
	var_156_bool = 0; var_157_object = Obj(); var_158_string = ""; // 0x3ef PushV
	var_157_object = var_134_object; // 0x3f0 Mov
	var_158_string = "immunity"; // 0x3f1 MovS
	func_943(var_156_bool, var_157_object, var_158_string); // 0x3f2 Call
	if(var_156_bool == 0) goto Label_1030; // 0x3f4 JumpB
	var_159_string = "immunity"; // 0x3f5 PushS
	GetProperty(var_159_string, var_141_float); // 0x3f6 ObjFunc
	var_160_bool = var_141_float < var_135_float; // 0x3f8 LT
	if(var_160_bool == 0) goto Label_1024; // 0x3f9 JumpB
	var_161_string = "immunity"; // 0x3fa PushS
	var_162_int = 0; // 0x3fb PushI
	SetProperty(var_161_string, var_162_int); // 0x3fc ObjFunc
	var_140_float = var_135_float - var_141_float; // 0x3fe Sub2
	goto Label_1030; // 0x3ff Jump
	
Label_1030:
	var_163_bool = 0; var_164_object = Obj(); var_165_string = ""; var_166_float = 0; var_167_float = 0; var_168_float = 0; // 0x406 PushV
	var_164_object = var_134_object; // 0x407 Mov
	var_165_string = "disease"; // 0x408 MovS
	var_166_float = var_140_float; // 0x409 Mov
	var_167_float = 0; // 0x40a MovI
	var_168_float = 1; // 0x40b MovI
	func_955(var_163_bool, var_164_object, var_165_string, var_166_float, var_167_float, var_168_float); // 0x40c Call
	var_133_float = var_135_float; // 0x40e Mov
	return 6; // 0x40f Return
	
Label_1024:
	var_181_string = "immunity"; // 0x400 PushS
	var_182_int = var_141_float - var_135_float; // 0x401 Sub
	SetProperty(var_181_string, var_182_int); // 0x402 ObjFunc
	var_133_float = var_135_float; // 0x404 Mov
	return 6; // 0x405 Return
	
Label_1005:
	var_133_float = 0; // 0x3ed MovI
	return 6; // 0x3ee Return
}


func_1105(var_9_object, var_10_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; // 0x451 PushV
	var_32_bool = 0; // 0x452 PushV
	var_32_bool = 0; // 0x453 MovB
	var_33_int = 4; // 0x454 PushI
	var_34_bool = var_10_int != var_33_int; // 0x455 Neq
	if(var_34_bool == 0) goto Label_1115; // 0x456 JumpB
	var_35_int = 5; // 0x457 PushI
	var_36_bool = var_10_int != var_35_int; // 0x458 Neq
	if(var_36_bool == 0) goto Label_1115; // 0x459 JumpB
	var_32_bool = 1; // 0x45a MovB
	
Label_1115:
	if(var_32_bool == 0) goto Label_1134; // 0x45b JumpB
	GetScene(var_22_object); // 0x45c Func
	GetPosition(var_24_cvector); // 0x45e Func
	GetEyesHeight(var_25_float); // 0x460 Func
	var_37_float = GetByIndex(var_24_cvector, 1); // 0x462 PushE
	var_38_int = 2; // 0x463 PushI
	var_39_float = var_25_float / var_38_int; // 0x464 Div
	var_37_float = var_37_float + var_39_float; // 0x465 Add2
	SetByIndex(var_24_cvector, 1) = var_37_float; // 0x466 PopE
	var_40_string = "scripted"; // 0x467 PushS
	var_41_cvector = CVector(0.0, 0.0, 1.0); // 0x468 PushVec
	var_42_string = "blood.xml"; // 0x469 PushS
	AddActorByType(var_23_object, var_40_string, var_22_object, var_24_cvector, var_41_cvector, var_42_string); // 0x46a Func
	var_23_object = 0; // 0x46c SetNull
	var_22_object = 0; // 0x46d SetNull
	
Label_1134:
	var_43_bool = var_9_object == 0; // 0x46e NullEq
	if(var_43_bool == 0) goto Label_1137; // 0x46f JumpB
	return 20; // 0x470 Return
	
Label_1137:
	GetSecondaryAnimationType(var_26_int); // 0x471 Func
	var_44_int = 0; // 0x473 PushI
	var_45_bool = var_26_int < var_44_int; // 0x474 LT
	if(var_45_bool == 0) goto Label_1143; // 0x475 JumpB
	return 20; // 0x476 Return
	
Label_1143:
	GetPosition(var_27_cvector); // 0x477 ObjFunc
	GetPosition(var_28_cvector); // 0x479 Func
	GetDirection(var_29_cvector); // 0x47b Func
	var_30_cvector = var_28_cvector - var_27_cvector; // 0x47d Sub2
	var_46_float = GetByIndex(var_30_cvector, 0); // 0x47e PushE
	var_47_float = GetByIndex(var_29_cvector, 0); // 0x47f PushE
	var_48_float = var_46_float * var_47_float; // 0x480 Mult
	var_49_float = GetByIndex(var_30_cvector, 2); // 0x481 PushE
	var_50_float = GetByIndex(var_29_cvector, 2); // 0x482 PushE
	var_51_float = var_49_float * var_50_float; // 0x483 Mult
	var_52_int = var_48_float + var_51_float; // 0x484 Add
	var_53_int = 0; // 0x485 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x486 GE
	if(var_54_bool == 0) goto Label_1162; // 0x487 JumpB
	var_31_string = "fhit"; // 0x488 MovS
	goto Label_1163; // 0x489 Jump
	
Label_1163:
	var_55_string = "hit_react"; // 0x48b PushS
	var_56_string = "1"; // 0x48c PushS
	var_57_int = var_31_string + var_56_string; // 0x48d Add
	var_58_string = "2"; // 0x48e PushS
	var_59_int = var_31_string + var_58_string; // 0x48f Add
	var_60_int = -10; // 0x490 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x491 Func
	return 20; // 0x493 Return
	
Label_1162:
	var_31_string = "bhit"; // 0x48a MovS
}


func_1236(var_53_int)
{
	var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x4d4 PushV
	var_56_int = 0; // 0x4d5 MovI
	
Label_1238:
	var_58_string = "all"; // 0x4d6 PushS
	var_59_string = ""; var_60_int = 0; // 0x4d7 PushV
	var_60_int = var_56_int; // 0x4d8 Mov
	func_1229(var_59_string, var_60_int); // 0x4d9 Call
	HasAnimation(var_57_bool, var_58_string, var_59_string); // 0x4db Func
	var_64_bool = var_57_bool == 0; // 0x4dd Not
	if(var_64_bool == 0) goto Label_1248; // 0x4de JumpB
	goto Label_1251; // 0x4df Jump
	
Label_1251:
	var_53_int = var_56_int; // 0x4e3 Mov
	return 4; // 0x4e4 Return
	
Label_1248:
	var_65_int = 1; // 0x4e0 PushI
	var_56_int = var_56_int + var_65_int; // 0x4e1 Add2
	goto Label_1238; // 0x4e2 Jump
}


func_732()
{
	StopAsync(); // 0x2dc Func
	StopAnimation(); // 0x2de Func
	return 0; // 0x2e0 Return
}


func_120(var_30_string)
{
	RemoveRTEnvelope(); // 0x79 Func
	SetDeathState(); // 0x7b Func
	Stop(); // 0x7d Func
	StopAsync(); // 0x7f Func
	StopSecondaryAnimation(); // 0x81 Func
	var_31_string = "all"; // 0x83 PushS
	PlayAnimation(var_31_string, var_30_string); // 0x84 Func
	WaitForAnimEnd(); // 0x86 Func
	var_32_string = "all"; // 0x88 PushS
	LockAnimationEnd(var_32_string, var_30_string); // 0x89 Func
	RemoveEnvelope(); // 0x8b Func
	return 0; // 0x8d Return
}


func_376(var_0_bool, var_1_bool)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; // 0x178 PushV
	var_0_bool = 0; // 0x179 TMovB
	var_1_bool = 0; // 0x17a TMovB
	var_28_float = 0.5; // 0x17b PushF
	rand(var_21_float, var_28_float); // 0x17c Func
	Sleep(var_21_float); // 0x17e Func
	
Label_384:
	var_29_bool = var_0_bool == 0; // 0x180 Not
	if(var_29_bool == 0) goto Label_432; // 0x181 JumpB
	var_30_bool = var_1_bool == 0; // 0x182 Not
	if(var_30_bool == 0) goto Label_404; // 0x183 JumpB
	
Label_388:
	GetPosition(var_23_cvector); // 0x184 Func
	GetCameraFarDistance(var_24_float); // 0x186 Func
	var_31_float = 2.5; // 0x188 PushF
	var_24_float = var_24_float * var_31_float; // 0x189 Mult2
	GetRandomPFPointInCircle(var_22_cvector, var_23_cvector, var_24_float, var_25_bool); // 0x18a Func
	var_32_bool = var_25_bool; // 0x18c Push
	if(var_32_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_403; // 0x18e Jump
	
Label_403:
	goto Label_405; // 0x193 Jump
	
Label_405:
	FindShiftedPathTo(var_26_object, var_22_cvector); // 0x195 Func
	var_33_bool = var_26_object != 0; // 0x197 NullNeq
	if(var_33_bool == 0) goto Label_427; // 0x198 JumpB
	RotatePath(var_26_object, var_27_bool); // 0x199 Func
	var_34_bool = var_27_bool; // 0x19b Push
	if(var_34_bool == 0) goto Label_426; // 0x19c JumpB
	var_35_bool = 0; // 0x19d PushV
	func_454(var_35_bool); // 0x19e Call
	FollowPath(var_26_object, var_35_bool, var_27_bool); // 0x1a0 Func
	var_26_object = 0; // 0x1a2 SetNull
	var_36_bool = var_27_bool; // 0x1a3 Push
	if(var_36_bool == 0) goto Label_426; // 0x1a4 JumpB
	TaskCall(2); // 0x1a6 TaskCall
	func_571(); // 0x1a7 Call
	TaskReturn(); // 0x1a8 TaskReturn
	
Label_426:
	goto Label_430; // 0x1aa Jump
	
Label_430:
	var_26_object = 0; // 0x1ae SetNull
	goto Label_384; // 0x1af Jump
	
Label_427:
	var_86_int = 1; // 0x1ab PushI
	Sleep(var_86_int); // 0x1ac Func
	
Label_399:
	var_87_int = 1; // 0x18f PushI
	Sleep(var_87_int); // 0x190 Func
	goto Label_388; // 0x192 Jump
	
Label_404:
	var_1_bool = 0; // 0x194 TMovB
	
Label_432:
	return 14; // 0x1b0 Return
}


func_1253(var_48_int)
{
	var_48_int = 2; // 0x4e6 MovI
	return 0; // 0x4e7 Return
}


func_1256(var_55_object)
{
	var_56_object = Obj(); // 0x4e9 PushV
	var_56_object = var_55_object; // 0x4ea Mov
	TaskCall(3); // 0x4eb TaskCall
	func_645(var_56_object); // 0x4ec Call
	TaskReturn(); // 0x4ed TaskReturn
	return 0; // 0x4ef Return
}


func_1264(var_8_int)
{
	var_8_int = 0; // 0x4f1 MovI
	return 0; // 0x4f2 Return
}


func_1267()
{
	return 0; // 0x4f4 Return
}


func_1269(var_27_int)
{
	var_27_int = 0; // 0x4f6 MovI
	return 0; // 0x4f7 Return
}


func_1272()
{
	return 0; // 0x4f9 Return
}


func_1274(var_8_int)
{
	var_8_int = 0; // 0x4fb MovI
	return 0; // 0x4fc Return
}


func_1277()
{
	return 0; // 0x4fe Return
}


func_1279(var_8_int)
{
	var_8_int = 0; // 0x500 MovI
	return 0; // 0x501 Return
}


