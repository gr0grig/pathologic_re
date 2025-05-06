task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x15 PushV
	var_11_int = 0; var_12_object = Obj(); // 0x16 PushV
	var_12_object = var_8_bool; // 0x17 Mov
	func_1200(var_12_object); // 0x18 Call
	var_10_int = var_11_int; // 0x19 Mov
	var_13_int = 0; // 0x1b PushI
	var_14_bool = var_10_int > var_13_int; // 0x1c GT
	if(var_14_bool == 0) goto Label_34; // 0x1d JumpB
	var_15_object = Obj(); // 0x1e PushV
	var_15_object = var_8_bool; // 0x1f Mov
	func_1203(); // 0x20 Call
	
Label_34:
	return 2; // 0x22 Return
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_1207(); // 0x24 Call
	return 0; // 0x26 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0; // 0x95 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	return 0; // 0x97 Return
}


task_1_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0; // 0x99 Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0xb1 PushV
	var_11_int = 0; var_12_object = Obj(); // 0xb2 PushV
	var_12_object = var_8_bool; // 0xb3 Mov
	func_1200(var_12_object); // 0xb4 Call
	var_10_int = var_11_int; // 0xb5 Mov
	var_13_int = 0; // 0xb7 PushI
	var_14_bool = var_10_int > var_13_int; // 0xb8 GT
	if(var_14_bool == 0) goto Label_196; // 0xb9 JumpB
	var_15_int = 1; // 0xba PushI
	var_16_bool = var_10_int > var_15_int; // 0xbb GT
	if(var_16_bool == 0) goto Label_192; // 0xbc JumpB
	func_356(var_9_int, var_10_int); // 0xbe Call
	
Label_192:
	var_17_object = Obj(); // 0xc0 PushV
	var_17_object = var_8_bool; // 0xc1 Mov
	func_1203(); // 0xc2 Call
	
Label_196:
	return 2; // 0xc4 Return
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0xc5 PushV
	var_11_int = 0; var_12_object = Obj(); // 0xc6 PushV
	var_12_object = var_8_bool; // 0xc7 Mov
	func_1164(var_11_int, var_12_object); // 0xc8 Call
	var_10_int = var_11_int; // 0xc9 Mov
	var_47_int = 0; // 0xcb PushI
	var_48_bool = var_10_int > var_47_int; // 0xcc GT
	if(var_48_bool == 0) goto Label_216; // 0xcd JumpB
	var_49_int = 1; // 0xce PushI
	var_50_bool = var_10_int > var_49_int; // 0xcf GT
	if(var_50_bool == 0) goto Label_212; // 0xd0 JumpB
	func_356(var_9_int, var_10_int); // 0xd2 Call
	
Label_212:
	var_51_object = Obj(); // 0xd4 PushV
	var_51_object = var_8_bool; // 0xd5 Mov
	func_1174(var_51_object); // 0xd6 Call
	
Label_216:
	return 2; // 0xd8 Return
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0xd9 PushV
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj(); // 0xda PushV
	var_13_object = var_8_cvector; // 0xdb Mov
	var_14_object = var_9_bool; // 0xdc Mov
	func_1224(var_14_object); // 0xdd Call
	if(var_12_bool == 0) goto Label_242; // 0xdf JumpB
	var_15_int = 0; var_16_object = Obj(); // 0xe0 PushV
	var_16_object = var_8_cvector; // 0xe1 Mov
	func_1182(var_15_int, var_16_object); // 0xe2 Call
	var_11_int = var_15_int; // 0xe3 Mov
	var_51_int = 0; // 0xe5 PushI
	var_52_bool = var_11_int > var_51_int; // 0xe6 GT
	if(var_52_bool == 0) goto Label_242; // 0xe7 JumpB
	var_53_int = 1; // 0xe8 PushI
	var_54_bool = var_11_int > var_53_int; // 0xe9 GT
	if(var_54_bool == 0) goto Label_238; // 0xea JumpB
	func_356(var_10_int, var_11_int); // 0xec Call
	
Label_238:
	var_55_object = Obj(); // 0xee PushV
	var_55_object = var_8_cvector; // 0xef Mov
	func_1192(var_55_object); // 0xf0 Call
	
Label_242:
	return 2; // 0xf2 Return
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0xf3 PushV
	var_11_int = 0; var_12_object = Obj(); // 0xf4 PushV
	var_12_object = var_8_bool; // 0xf5 Mov
	func_1213(var_12_object); // 0xf6 Call
	var_10_int = var_11_int; // 0xf7 Mov
	var_13_int = 0; // 0xf9 PushI
	var_14_bool = var_10_int > var_13_int; // 0xfa GT
	if(var_14_bool == 0) goto Label_262; // 0xfb JumpB
	var_15_int = 1; // 0xfc PushI
	var_16_bool = var_10_int > var_15_int; // 0xfd GT
	if(var_16_bool == 0) goto Label_258; // 0xfe JumpB
	func_356(var_9_int, var_10_int); // 0x100 Call
	
Label_258:
	var_17_object = Obj(); // 0x102 PushV
	var_17_object = var_8_bool; // 0x103 Mov
	func_1216(); // 0x104 Call
	
Label_262:
	return 2; // 0x106 Return
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x107 PushV
	var_12_int = 0; var_13_string = ""; var_14_object = Obj(); // 0x108 PushV
	var_13_string = var_9_bool; // 0x109 Mov
	var_14_object = var_8_cvector; // 0x10a Mov
	func_1218(var_14_object); // 0x10b Call
	var_11_int = var_12_int; // 0x10c Mov
	var_15_int = 0; // 0x10e PushI
	var_16_bool = var_11_int > var_15_int; // 0x10f GT
	if(var_16_bool == 0) goto Label_284; // 0x110 JumpB
	var_17_int = 1; // 0x111 PushI
	var_18_bool = var_11_int > var_17_int; // 0x112 GT
	if(var_18_bool == 0) goto Label_279; // 0x113 JumpB
	func_356(var_10_int, var_11_int); // 0x115 Call
	
Label_279:
	var_19_string = ""; var_20_object = Obj(); // 0x117 PushV
	var_19_string = var_9_bool; // 0x118 Mov
	var_20_object = var_8_cvector; // 0x119 Mov
	func_1221(); // 0x11a Call
	
Label_284:
	return 2; // 0x11c Return
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_356(var_6_cvector, var_7_bool); // 0x11e Call
	func_1207(); // 0x121 Call
	return 0; // 0x123 Return
}


task_2_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	RequestClearPath(var_8_bool); // 0x15e Func
	return 0; // 0x160 Return
}


task_2_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	Stop(); // 0x161 Func
	return 0; // 0x163 Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_356(var_7_cvector, var_8_bool); // 0x16d Call
	var_9_object = Obj(); // 0x16f PushV
	var_9_object = var_8_bool; // 0x170 Mov
	func_1126(); // 0x171 Call
	return 0; // 0x173 Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x176 PushV
	var_11_int = 0; var_12_object = Obj(); // 0x177 PushV
	var_12_object = var_8_bool; // 0x178 Mov
	func_1200(var_12_object); // 0x179 Call
	var_10_int = var_11_int; // 0x17a Mov
	var_13_int = 0; // 0x17c PushI
	var_14_bool = var_10_int > var_13_int; // 0x17d GT
	if(var_14_bool == 0) goto Label_393; // 0x17e JumpB
	var_15_int = 1; // 0x17f PushI
	var_16_bool = var_10_int > var_15_int; // 0x180 GT
	if(var_16_bool == 0) goto Label_389; // 0x181 JumpB
	func_558(); // 0x183 Call
	
Label_389:
	var_17_object = Obj(); // 0x185 PushV
	var_17_object = var_8_bool; // 0x186 Mov
	func_1203(); // 0x187 Call
	
Label_393:
	return 2; // 0x189 Return
}


task_3_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x18a PushV
	var_11_int = 0; var_12_object = Obj(); // 0x18b PushV
	var_12_object = var_8_bool; // 0x18c Mov
	func_1164(var_11_int, var_12_object); // 0x18d Call
	var_10_int = var_11_int; // 0x18e Mov
	var_47_int = 0; // 0x190 PushI
	var_48_bool = var_10_int > var_47_int; // 0x191 GT
	if(var_48_bool == 0) goto Label_413; // 0x192 JumpB
	var_49_int = 1; // 0x193 PushI
	var_50_bool = var_10_int > var_49_int; // 0x194 GT
	if(var_50_bool == 0) goto Label_409; // 0x195 JumpB
	func_558(); // 0x197 Call
	
Label_409:
	var_51_object = Obj(); // 0x199 PushV
	var_51_object = var_8_bool; // 0x19a Mov
	func_1174(var_51_object); // 0x19b Call
	
Label_413:
	return 2; // 0x19d Return
}


task_3_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x19e PushV
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj(); // 0x19f PushV
	var_13_object = var_8_cvector; // 0x1a0 Mov
	var_14_object = var_9_bool; // 0x1a1 Mov
	func_1224(var_14_object); // 0x1a2 Call
	if(var_12_bool == 0) goto Label_439; // 0x1a4 JumpB
	var_15_int = 0; var_16_object = Obj(); // 0x1a5 PushV
	var_16_object = var_8_cvector; // 0x1a6 Mov
	func_1182(var_15_int, var_16_object); // 0x1a7 Call
	var_11_int = var_15_int; // 0x1a8 Mov
	var_51_int = 0; // 0x1aa PushI
	var_52_bool = var_11_int > var_51_int; // 0x1ab GT
	if(var_52_bool == 0) goto Label_439; // 0x1ac JumpB
	var_53_int = 1; // 0x1ad PushI
	var_54_bool = var_11_int > var_53_int; // 0x1ae GT
	if(var_54_bool == 0) goto Label_435; // 0x1af JumpB
	func_558(); // 0x1b1 Call
	
Label_435:
	var_55_object = Obj(); // 0x1b3 PushV
	var_55_object = var_8_cvector; // 0x1b4 Mov
	func_1192(var_55_object); // 0x1b5 Call
	
Label_439:
	return 2; // 0x1b7 Return
}


task_3_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x1b8 PushV
	var_11_int = 0; var_12_object = Obj(); // 0x1b9 PushV
	var_12_object = var_8_bool; // 0x1ba Mov
	func_1213(var_12_object); // 0x1bb Call
	var_10_int = var_11_int; // 0x1bc Mov
	var_13_int = 0; // 0x1be PushI
	var_14_bool = var_10_int > var_13_int; // 0x1bf GT
	if(var_14_bool == 0) goto Label_459; // 0x1c0 JumpB
	var_15_int = 1; // 0x1c1 PushI
	var_16_bool = var_10_int > var_15_int; // 0x1c2 GT
	if(var_16_bool == 0) goto Label_455; // 0x1c3 JumpB
	func_558(); // 0x1c5 Call
	
Label_455:
	var_17_object = Obj(); // 0x1c7 PushV
	var_17_object = var_8_bool; // 0x1c8 Mov
	func_1216(); // 0x1c9 Call
	
Label_459:
	return 2; // 0x1cb Return
}


task_3_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0x1cc PushV
	var_12_int = 0; var_13_string = ""; var_14_object = Obj(); // 0x1cd PushV
	var_13_string = var_9_bool; // 0x1ce Mov
	var_14_object = var_8_cvector; // 0x1cf Mov
	func_1218(var_14_object); // 0x1d0 Call
	var_11_int = var_12_int; // 0x1d1 Mov
	var_15_int = 0; // 0x1d3 PushI
	var_16_bool = var_11_int > var_15_int; // 0x1d4 GT
	if(var_16_bool == 0) goto Label_481; // 0x1d5 JumpB
	var_17_int = 1; // 0x1d6 PushI
	var_18_bool = var_11_int > var_17_int; // 0x1d7 GT
	if(var_18_bool == 0) goto Label_476; // 0x1d8 JumpB
	func_558(); // 0x1da Call
	
Label_476:
	var_19_string = ""; var_20_object = Obj(); // 0x1dc PushV
	var_19_string = var_9_bool; // 0x1dd Mov
	var_20_object = var_8_cvector; // 0x1de Mov
	func_1221(); // 0x1df Call
	
Label_481:
	return 2; // 0x1e1 Return
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_558(); // 0x1e3 Call
	func_1207(); // 0x1e6 Call
	return 0; // 0x1e8 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_716(var_7_bool); // 0x234 Call
	func_1207(); // 0x237 Call
	return 0; // 0x239 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; // 0x298 PushV
	var_17_int = 120; // 0x299 PushI
	var_18_bool = var_8_bool != var_17_int; // 0x29a Neq
	if(var_18_bool == 0) goto Label_669; // 0x29b JumpB
	return 8; // 0x29c Return
	
Label_669:
	var_19_bool = var_0_bool == 0; // 0x29d NullEq
	if(var_19_bool == 0) goto Label_678; // 0x29e JumpB
	Stop(); // 0x29f Func
	var_20_int = 1; // 0x2a1 PushI
	KillTimer(var_20_int); // 0x2a2 Func
	var_2_object = 1; // 0x2a4 TMovB
	goto Label_715; // 0x2a5 Jump
	
Label_715:
	return 8; // 0x2cb Return
	
Label_678:
	GetDirection(var_13_cvector); // 0x2a6 Func
	var_21_float = 7000.0; // 0x2a8 PushF
	FindDirLength(var_14_float, var_13_cvector, var_21_float); // 0x2a9 Func
	var_22_cvector = CVector(0,0,0); var_23_float = 0; // 0x2ab PushV
	var_23_float = 1.74533; // 0x2ac MovF
	func_570(var_22_cvector, var_23_float); // 0x2ad Call
	var_15_cvector = var_22_cvector; // 0x2ae Mov
	var_16_float = var_15_cvector | var_15_cvector; // 0x2b0 Or2
	var_52_bool = 0; // 0x2b1 PushV
	var_52_bool = 0; // 0x2b2 MovB
	var_53_float = 10000.0; // 0x2b3 PushF
	var_54_bool = var_16_float >= var_53_float; // 0x2b4 GE
	if(var_54_bool == 0) goto Label_708; // 0x2b5 JumpB
	var_55_bool = 0; // 0x2b6 PushV
	var_55_bool = 1; // 0x2b7 MovB
	var_56_float = var_14_float * var_14_float; // 0x2b8 Mult
	var_57_float = 2.25; // 0x2b9 PushF
	var_58_float = var_56_float * var_57_float; // 0x2ba Mult
	var_59_bool = var_16_float >= var_58_float; // 0x2bb GE
	if(var_59_bool == 0) goto Label_706; // 0x2bc JumpB
	var_60_bool = 0; // 0x2bd PushV
	func_732(var_55_bool, var_60_bool); // 0x2be Call
	if(var_60_bool == 0) goto Label_706; // 0x2c0 JumpB
	var_55_bool = 0; // 0x2c1 MovB
	
Label_706:
	if(var_55_bool == 0) goto Label_708; // 0x2c2 JumpB
	var_52_bool = 1; // 0x2c3 MovB
	
Label_708:
	if(var_52_bool == 0) goto Label_715; // 0x2c4 JumpB
	Stop(); // 0x2c5 Func
	var_80_cvector = CVector(0,0,0); // 0x2c7 PushV
	func_926(var_80_cvector); // 0x2c8 Call
	var_1_bool = var_80_cvector + var_15_cvector; // 0x2ca Add2
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_716(var_8_bool); // 0x2d5 Call
	var_10_object = Obj(); // 0x2d7 PushV
	var_10_object = var_8_bool; // 0x2d8 Mov
	func_1126(); // 0x2d9 Call
	return 0; // 0x2db Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; // 0x34a PushV
	var_17_int = 120; // 0x34b PushI
	var_18_bool = var_8_int != var_17_int; // 0x34c Neq
	if(var_18_bool == 0) goto Label_847; // 0x34d JumpB
	return 8; // 0x34e Return
	
Label_847:
	var_19_bool = var_0_bool == 0; // 0x34f NullEq
	if(var_19_bool == 0) goto Label_856; // 0x350 JumpB
	Stop(); // 0x351 Func
	var_20_int = 1; // 0x353 PushI
	KillTimer(var_20_int); // 0x354 Func
	var_2_object = 1; // 0x356 TMovB
	goto Label_893; // 0x357 Jump
	
Label_893:
	return 8; // 0x37d Return
	
Label_856:
	GetDirection(var_13_cvector); // 0x358 Func
	var_21_float = 7000.0; // 0x35a PushF
	FindDirLength(var_14_float, var_13_cvector, var_21_float); // 0x35b Func
	var_22_cvector = CVector(0,0,0); var_23_float = 0; // 0x35d PushV
	var_23_float = 1.74533; // 0x35e MovF
	func_748(var_22_cvector, var_23_float); // 0x35f Call
	var_15_cvector = var_22_cvector; // 0x360 Mov
	var_16_float = var_15_cvector | var_15_cvector; // 0x362 Or2
	var_52_bool = 0; // 0x363 PushV
	var_52_bool = 0; // 0x364 MovB
	var_53_float = 10000.0; // 0x365 PushF
	var_54_bool = var_16_float >= var_53_float; // 0x366 GE
	if(var_54_bool == 0) goto Label_886; // 0x367 JumpB
	var_55_bool = 0; // 0x368 PushV
	var_55_bool = 1; // 0x369 MovB
	var_56_float = var_14_float * var_14_float; // 0x36a Mult
	var_57_float = 2.25; // 0x36b PushF
	var_58_float = var_56_float * var_57_float; // 0x36c Mult
	var_59_bool = var_16_float >= var_58_float; // 0x36d GE
	if(var_59_bool == 0) goto Label_884; // 0x36e JumpB
	var_60_bool = 0; // 0x36f PushV
	func_910(var_55_bool, var_60_bool); // 0x370 Call
	if(var_60_bool == 0) goto Label_884; // 0x372 JumpB
	var_55_bool = 0; // 0x373 MovB
	
Label_884:
	if(var_55_bool == 0) goto Label_886; // 0x374 JumpB
	var_52_bool = 1; // 0x375 MovB
	
Label_886:
	if(var_52_bool == 0) goto Label_893; // 0x376 JumpB
	Stop(); // 0x377 Func
	var_80_cvector = CVector(0,0,0); // 0x379 PushV
	func_926(var_80_cvector); // 0x37a Call
	var_1_bool = var_80_cvector + var_15_cvector; // 0x37c Add2
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_894(var_8_object); // 0x387 Call
	var_10_object = Obj(); // 0x389 PushV
	var_10_object = var_8_object; // 0x38a Mov
	func_1126(); // 0x38b Call
	return 0; // 0x38d Return
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x459 PushV
	var_12_string = "health"; // 0x45a PushS
	var_13_bool = var_9_string == var_12_string; // 0x45b Eq
	if(var_13_bool == 0) goto Label_1125; // 0x45c JumpB
	var_14_string = "health"; // 0x45d PushS
	GetProperty(var_14_string, var_11_float); // 0x45e Func
	var_15_int = 0; // 0x460 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x461 LE
	if(var_16_bool == 0) goto Label_1125; // 0x462 JumpB
	SignalDeath(var_8_object); // 0x463 Func
	
Label_1125:
	return 2; // 0x465 Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_object = Obj(); // 0x467 PushV
	var_9_object = var_8_object; // 0x468 Mov
	func_1105(var_9_object); // 0x469 Call
	return 0; // 0x46b Return
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x46d PushV
	var_12_object = var_8_object; // 0x46e Mov
	var_13_int = var_9_int; // 0x46f Mov
	var_14_float = var_10_float; // 0x470 Mov
	func_1015(var_13_int, var_14_float); // 0x471 Call
	return 0; // 0x473 Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_bool = 1; // 0x9a PushB
	SensePlayerOnly(var_8_bool); // 0x9b Func
	func_1223(); // 0x9e Call
	func_168(); // 0xa1 Call
	
Label_163:
	func_292(var_6_cvector, var_7_bool); // 0xa4 Call
	goto Label_163; // 0xa6 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_6(var_10_object)
{
	EventDisable(0); // 0x7 EventDisable
	var_11_object = Obj(); // 0x8 PushV
	var_11_object = var_10_object; // 0x9 Mov
	func_39(var_11_object); // 0xa Call
	var_61_object = Obj(); // 0xc PushV
	var_61_object = var_10_object; // 0xd Mov
	func_1205(); // 0xe Call
	EventEnable(0); // 0x10 EventEnable
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_778(var_0_bool, var_1_bool, var_2_object, var_56_object)
{
	var_60_cvector = CVector(0,0,0); var_61_float = 0; var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0; // 0x30a PushV
	var_0_bool = var_56_object; // 0x30b TMov
	var_70_cvector = CVector(0,0,0); var_71_float = 0; // 0x30c PushV
	var_71_float = 1.74533; // 0x30d MovF
	func_748(var_70_cvector, var_71_float); // 0x30e Call
	var_65_cvector = var_70_cvector; // 0x30f Mov
	var_66_float = var_65_cvector | var_65_cvector; // 0x311 Or2
	var_100_float = 10000.0; // 0x312 PushF
	var_101_bool = var_66_float < var_100_float; // 0x313 LT
	if(var_101_bool == 0) goto Label_798; // 0x314 JumpB
	var_102_string = "Can't retreat, distance: "; // 0x315 PushS
	var_103_float = sqrt(var_66_float); // 0x316 Sqrt
	var_104_int = var_102_string + var_103_float; // 0x317 Add
	Trace(var_104_int); // 0x318 Func
	var_105_float = 0.5; // 0x31a PushF
	Sleep(var_105_float); // 0x31b Func
	return 10; // 0x31d Return
	
Label_798:
	var_106_float = GetByIndex(var_65_cvector, 0); // 0x31e PushE
	var_107_float = GetByIndex(var_65_cvector, 2); // 0x31f PushE
	Rotate(var_106_float, var_107_float); // 0x320 Func
	var_108_cvector = CVector(0,0,0); // 0x322 PushV
	func_926(var_108_cvector); // 0x323 Call
	var_1_bool = var_108_cvector + var_65_cvector; // 0x325 Add2
	var_111_int = 120; // 0x326 PushI
	var_112_float = 0.5; // 0x327 PushF
	SetTimer(var_111_int, var_112_float); // 0x328 Func
	var_2_object = 0; // 0x32a TMovB
	
Label_811:
	var_113_int = 1; // 0x32b PushI
	MovePoint(var_113_int, var_113_int, var_67_bool); // 0x32c Func
	var_114_bool = var_67_bool; // 0x32e Push
	if(var_114_bool == 0) goto Label_839; // 0x32f JumpB
	var_115_bool = var_0_bool == 0; // 0x330 NullEq
	if(var_115_bool == 0) goto Label_820; // 0x331 JumpB
	goto Label_841; // 0x332 Jump
	
Label_841:
	return 10; // 0x349 Return
	
Label_820:
	var_116_cvector = CVector(0,0,0); var_117_float = 0; // 0x334 PushV
	var_117_float = 2.61799; // 0x335 MovF
	func_748(var_116_cvector, var_117_float); // 0x336 Call
	var_68_cvector = var_116_cvector; // 0x337 Mov
	var_69_float = var_68_cvector | var_68_cvector; // 0x339 Or2
	var_118_float = 10000.0; // 0x33a PushF
	var_119_bool = var_69_float >= var_118_float; // 0x33b GE
	if(var_119_bool == 0) goto Label_838; // 0x33c JumpB
	var_120_cvector = CVector(0,0,0); // 0x33d PushV
	func_926(var_120_cvector); // 0x33e Call
	var_1_bool = var_120_cvector + var_68_cvector; // 0x340 Add2
	var_121_int = 120; // 0x341 PushI
	var_122_float = 0.5; // 0x342 PushF
	SetTimer(var_121_int, var_122_float); // 0x343 Func
	goto Label_839; // 0x345 Jump
	
Label_839:
	var_123_bool = var_2_object == 0; // 0x347 Not
	if(var_123_bool == 0) goto Label_811; // 0x348 JumpB
	
Label_838:
	goto Label_841; // 0x346 Jump
}


func_1164(var_11_int, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x48d PushV
	var_14_object = var_12_object; // 0x48e Mov
	func_991(var_13_bool, var_14_object); // 0x48f Call
	if(var_13_bool == 0) goto Label_1172; // 0x491 JumpB
	var_11_int = 2; // 0x492 MovI
	goto Label_1173; // 0x493 Jump
	
Label_1173:
	return 0; // 0x495 Return
	
Label_1172:
	var_11_int = 0; // 0x494 MovI
}


func_910(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x38e PushV
	GetDirection(var_63_cvector); // 0x38f Func
	var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0x391 PushV
	var_66_object = var_0_bool; // 0x392 MovT
	func_931(var_66_object); // 0x393 Call
	var_64_cvector = var_65_cvector; // 0x394 Mov
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x396 PushV
	var_72_cvector = var_63_cvector; // 0x397 Mov
	var_73_cvector = var_64_cvector; // 0x398 Mov
	func_1097(var_71_float, var_72_cvector, var_73_cvector); // 0x399 Call
	var_79_float = -0.34202; // 0x39b PushF
	var_60_bool = var_71_float >= var_79_float; // 0x39c GE2
	return 4; // 0x39d Return
}


func_894(var_2_object)
{
	Stop(); // 0x37e Func
	var_9_int = 120; // 0x380 PushI
	KillTimer(var_9_int); // 0x381 Func
	var_2_object = 1; // 0x383 TMovB
	return 0; // 0x384 Return
}


func_1174(var_51_object)
{
	var_52_object = Obj(); // 0x497 PushV
	var_52_object = var_51_object; // 0x498 Mov
	TaskCall(4); // 0x499 TaskCall
	func_600(var_53_object, var_54_cvector, var_55_bool, var_52_object); // 0x49a Call
	TaskReturn(); // 0x49b TaskReturn
	return 0; // 0x49d Return
}


func_1182(var_15_int, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x49f PushV
	var_18_object = var_16_object; // 0x4a0 Mov
	func_991(var_17_bool, var_18_object); // 0x4a1 Call
	if(var_17_bool == 0) goto Label_1190; // 0x4a3 JumpB
	var_15_int = 2; // 0x4a4 MovI
	goto Label_1191; // 0x4a5 Jump
	
Label_1191:
	return 0; // 0x4a7 Return
	
Label_1190:
	var_15_int = 0; // 0x4a6 MovI
}


func_926(var_80_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x39e PushV
	GetPosition(var_82_cvector); // 0x39f Func
	var_80_cvector = var_82_cvector; // 0x3a1 Mov
	return 2; // 0x3a2 Return
}


func_931(var_65_cvector)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x3a3 PushV
	GetPosition(var_69_cvector); // 0x3a4 Func
	GetPosition(var_70_cvector); // 0x3a6 ObjFunc
	var_65_cvector = var_70_cvector - var_69_cvector; // 0x3a8 Sub2
	return 4; // 0x3a9 Return
}


func_292(var_0_bool, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; // 0x124 PushV
	var_0_bool = 0; // 0x125 TMovB
	var_1_bool = 0; // 0x126 TMovB
	var_27_float = 0.5; // 0x127 PushF
	rand(var_20_float, var_27_float); // 0x128 Func
	Sleep(var_20_float); // 0x12a Func
	
Label_300:
	var_28_bool = var_0_bool == 0; // 0x12c Not
	if(var_28_bool == 0) goto Label_348; // 0x12d JumpB
	var_29_bool = var_1_bool == 0; // 0x12e Not
	if(var_29_bool == 0) goto Label_320; // 0x12f JumpB
	
Label_304:
	GetPosition(var_22_cvector); // 0x130 Func
	GetCameraFarDistance(var_23_float); // 0x132 Func
	var_30_float = 2.5; // 0x134 PushF
	var_23_float = var_23_float * var_30_float; // 0x135 Mult2
	GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, var_23_float, var_24_bool); // 0x136 Func
	var_31_bool = var_24_bool; // 0x138 Push
	if(var_31_bool == 0) goto Label_315; // 0x139 JumpB
	goto Label_319; // 0x13a Jump
	
Label_319:
	goto Label_321; // 0x13f Jump
	
Label_321:
	FindShiftedPathTo(var_25_object, var_21_cvector); // 0x141 Func
	var_32_bool = var_25_object != 0; // 0x143 NullNeq
	if(var_32_bool == 0) goto Label_343; // 0x144 JumpB
	RotatePath(var_25_object, var_26_bool); // 0x145 Func
	var_33_bool = var_26_bool; // 0x147 Push
	if(var_33_bool == 0) goto Label_342; // 0x148 JumpB
	var_34_bool = 0; // 0x149 PushV
	func_372(var_34_bool); // 0x14a Call
	FollowPath(var_25_object, var_34_bool, var_26_bool); // 0x14c Func
	var_25_object = 0; // 0x14e SetNull
	var_35_bool = var_26_bool; // 0x14f Push
	if(var_35_bool == 0) goto Label_342; // 0x150 JumpB
	TaskCall(3); // 0x152 TaskCall
	func_489(); // 0x153 Call
	TaskReturn(); // 0x154 TaskReturn
	
Label_342:
	goto Label_346; // 0x156 Jump
	
Label_346:
	var_25_object = 0; // 0x15a SetNull
	goto Label_300; // 0x15b Jump
	
Label_343:
	var_85_int = 1; // 0x157 PushI
	Sleep(var_85_int); // 0x158 Func
	
Label_315:
	var_86_int = 1; // 0x13b PushI
	Sleep(var_86_int); // 0x13c Func
	goto Label_304; // 0x13e Jump
	
Label_320:
	var_1_bool = 0; // 0x140 TMovB
	
Label_348:
	return 14; // 0x15c Return
}


func_39(var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_string = ""; var_17_object = Obj(); var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x27 PushV
	var_32_bool = var_11_object == 0; // 0x28 NullEq
	if(var_32_bool == 0) goto Label_47; // 0x29 JumpB
	var_33_string = ""; // 0x2a PushV
	var_33_string = "fdie"; // 0x2b MovS
	func_126(var_33_string); // 0x2c Call
	goto Label_125; // 0x2e Jump
	
Label_125:
	return 20; // 0x7d Return
	
Label_47:
	GetPosition(var_22_cvector); // 0x2f ObjFunc
	GetPosition(var_23_cvector); // 0x31 Func
	GetDirection(var_24_cvector); // 0x33 Func
	var_25_cvector = var_23_cvector - var_22_cvector; // 0x35 Sub2
	var_36_float = GetByIndex(var_25_cvector, 0); // 0x36 PushE
	var_37_float = GetByIndex(var_24_cvector, 0); // 0x37 PushE
	var_38_float = var_36_float * var_37_float; // 0x38 Mult
	var_39_float = GetByIndex(var_25_cvector, 2); // 0x39 PushE
	var_40_float = GetByIndex(var_24_cvector, 2); // 0x3a PushE
	var_41_float = var_39_float * var_40_float; // 0x3b Mult
	var_42_int = var_38_float + var_41_float; // 0x3c Add
	var_43_int = 0; // 0x3d PushI
	var_44_bool = var_42_int >= var_43_int; // 0x3e GE
	if(var_44_bool == 0) goto Label_66; // 0x3f JumpB
	var_26_string = "fdie"; // 0x40 MovS
	goto Label_67; // 0x41 Jump
	
Label_67:
	RemoveRTEnvelope(); // 0x43 Func
	SetDeathState(); // 0x45 Func
	Stop(); // 0x47 Func
	StopAsync(); // 0x49 Func
	var_27_object = var_11_object; // 0x4b Mov
	var_45_string = "GetScriptProperty"; // 0x4c PushS
	var_46_int = 2; // 0x4d PushI
	var_47_bool = IsFuncExist(var_11_object, var_45_string, var_46_int); // 0x4e FuncExist
	if(var_47_bool == 0) goto Label_91; // 0x4f JumpB
	var_48_string = "Owner"; // 0x50 PushS
	HasScriptProperty(var_28_bool, var_48_string); // 0x51 ObjFunc
	var_49_bool = var_28_bool; // 0x53 Push
	if(var_49_bool == 0) goto Label_91; // 0x54 JumpB
	var_50_string = "Owner"; // 0x55 PushS
	GetScriptProperty(var_27_object, var_50_string); // 0x56 ObjFunc
	var_51_bool = var_27_object == 0; // 0x58 NullEq
	if(var_51_bool == 0) goto Label_91; // 0x59 JumpB
	var_27_object = var_11_object; // 0x5a Mov
	
Label_91:
	var_52_string = "@GetEyesHeight"; // 0x5b PushS
	var_53_int = 1; // 0x5c PushI
	var_54_bool = IsFuncExist(var_27_object, var_52_string, var_53_int); // 0x5d FuncExist
	if(var_54_bool == 0) goto Label_106; // 0x5e JumpB
	GetEyesHeight(var_30_float); // 0x5f ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x61 MovV
	var_55_float = GetByIndex(var_31_cvector, 1); // 0x62 PushE
	var_55_float = var_30_float; // 0x63 Mov
	SetByIndex(var_31_cvector, 1) = var_55_float; // 0x64 PopE
	var_56_string = "head"; // 0x65 PushS
	LookAsync(var_11_object, var_56_string, var_31_cvector); // 0x66 Func
	var_29_bool = 1; // 0x68 MovB
	goto Label_107; // 0x69 Jump
	
Label_107:
	var_57_string = "all"; // 0x6b PushS
	PlayAnimation(var_57_string, var_26_string); // 0x6c Func
	WaitForAnimEnd(); // 0x6e Func
	var_58_bool = var_29_bool; // 0x70 Push
	if(var_58_bool == 0) goto Label_119; // 0x71 JumpB
	StopAsync(); // 0x72 Func
	var_59_string = "head"; // 0x74 PushS
	UnlookAsync(var_59_string); // 0x75 Func
	
Label_119:
	var_60_string = "all"; // 0x77 PushS
	LockAnimationEnd(var_60_string, var_26_string); // 0x78 Func
	RemoveEnvelope(); // 0x7a Func
	var_27_object = 0; // 0x7c SetNull
	
Label_106:
	var_29_bool = 0; // 0x6a MovB
	
Label_66:
	var_26_string = "bdie"; // 0x42 MovS
}


func_168()
{
	var_9_bool = 0; // 0xa8 PushV
	func_1082(var_9_bool); // 0xa9 Call
	var_12_bool = var_9_bool == 0; // 0xab Not
	if(var_12_bool == 0) goto Label_176; // 0xac JumpB
	func_1207(); // 0xae Call
	
Label_176:
	return 0; // 0xb0 Return
}


func_1192(var_55_object)
{
	var_56_object = Obj(); // 0x4a9 PushV
	var_56_object = var_55_object; // 0x4aa Mov
	TaskCall(5); // 0x4ab TaskCall
	func_778(var_57_object, var_58_cvector, var_59_bool, var_56_object); // 0x4ac Call
	TaskReturn(); // 0x4ad TaskReturn
	return 0; // 0x4af Return
}


func_938(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x3aa PushV
	var_44_string = "HasProperty"; // 0x3ab PushS
	var_45_int = 2; // 0x3ac PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x3ad FuncExist
	var_47_bool = var_46_bool == 0; // 0x3ae Not
	if(var_47_bool == 0) goto Label_946; // 0x3af JumpB
	var_39_bool = 0; // 0x3b0 MovB
	return 2; // 0x3b1 Return
	
Label_946:
	HasProperty(var_41_string, var_43_bool); // 0x3b2 ObjFunc
	var_39_bool = var_43_bool; // 0x3b4 Mov
	return 2; // 0x3b5 Return
}


func_558()
{
	StopAnimation(); // 0x22e Func
	StopGroup0(); // 0x230 Func
	return 0; // 0x232 Return
}


func_1200(var_11_int)
{
	var_11_int = 0; // 0x4b1 MovI
	return 0; // 0x4b2 Return
}


func_1203()
{
	return 0; // 0x4b4 Return
}


func_1205()
{
	return 0; // 0x4b6 Return
}


func_950(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x3b6 PushV
	IsDead(var_35_bool); // 0x3b7 ObjFunc
	var_32_bool = var_35_bool; // 0x3b9 Mov
	return 2; // 0x3ba Return
}


func_1207()
{
	TaskCall(0); // 0x4b8 TaskCall
	func_0(); // 0x4b9 Call
	TaskReturn(); // 0x4ba TaskReturn
	return 0; // 0x4bc Return
}


func_1082(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x43a PushV
	IsLoaded(var_11_bool); // 0x43b Func
	var_9_bool = var_11_bool; // 0x43d Mov
	return 2; // 0x43e Return
}


func_570(var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x23a PushV
	GetPosition(var_30_cvector); // 0x23b Func
	GetPosition(var_31_cvector); // 0x23d TObjFunc
	GetDirection(var_32_cvector); // 0x23f Func
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); // 0x241 PushV
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x242 PushV
	var_39_cvector = var_30_cvector - var_31_cvector; // 0x243 Sub2
	func_1087(var_38_cvector, var_39_cvector); // 0x244 Call
	var_45_float = 0.75; // 0x246 PushF
	var_46_float = var_32_cvector * var_45_float; // 0x247 Mult
	var_37_cvector = var_38_cvector + var_46_float; // 0x248 Add2
	func_1087(var_36_cvector, var_37_cvector); // 0x249 Call
	var_33_cvector = var_36_cvector; // 0x24a Mov
	var_47_int = 32; // 0x24c PushI
	var_48_float = 7000.0; // 0x24d PushF
	FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, var_47_int, var_48_float); // 0x24e Func
	var_49_int = 100; // 0x250 PushI
	var_35_float = var_35_float - var_49_int; // 0x251 Sub2
	var_50_int = 0; // 0x252 PushI
	var_51_bool = var_35_float < var_50_int; // 0x253 LT
	if(var_51_bool == 0) goto Label_598; // 0x254 JumpB
	var_35_float = 0; // 0x255 MovI
	
Label_598:
	var_22_cvector = var_34_cvector * var_35_float; // 0x256 Mult2
	return 12; // 0x257 Return
}


func_955(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x3bb PushV
	var_27_bool = var_22_object == 0; // 0x3bc NullEq
	if(var_27_bool == 0) goto Label_960; // 0x3bd JumpB
	var_21_bool = 0; // 0x3be MovB
	return 4; // 0x3bf Return
	
Label_960:
	var_28_bool = 0; // 0x3c0 PushV
	var_28_bool = 0; // 0x3c1 MovB
	var_29_string = "IsDead"; // 0x3c2 PushS
	var_30_int = 1; // 0x3c3 PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x3c4 FuncExist
	if(var_31_bool == 0) goto Label_972; // 0x3c5 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x3c6 PushV
	var_33_object = var_22_object; // 0x3c7 Mov
	func_950(var_33_object); // 0x3c8 Call
	if(var_32_bool == 0) goto Label_972; // 0x3ca JumpB
	var_28_bool = 1; // 0x3cb MovB
	
Label_972:
	if(var_28_bool == 0) goto Label_975; // 0x3cc JumpB
	var_21_bool = 0; // 0x3cd MovB
	return 4; // 0x3ce Return
	
Label_975:
	GetScene(var_25_object); // 0x3cf Func
	var_36_bool = var_25_object == 0; // 0x3d1 NullEq
	if(var_36_bool == 0) goto Label_981; // 0x3d2 JumpB
	var_21_bool = 0; // 0x3d3 MovB
	return 4; // 0x3d4 Return
	
Label_981:
	GetScene(var_26_object); // 0x3d5 ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x3d7 Neq
	if(var_37_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_21_bool = 0; // 0x3d9 MovB
	return 4; // 0x3da Return
	
Label_987:
	var_21_bool = 1; // 0x3db MovB
	return 4; // 0x3dc Return
}


func_1213(var_11_int)
{
	var_11_int = 0; // 0x4be MovI
	return 0; // 0x4bf Return
}


func_1087(var_38_cvector, var_39_cvector)
{
	var_40_float = 0; var_41_float = 0; // 0x43f PushV
	var_42_int = var_39_cvector | var_39_cvector; // 0x440 Or
	var_41_float = sqrt(var_42_int); // 0x441 Sqrt2
	var_43_float = 0.0; // 0x442 PushF
	var_44_bool = var_41_float < var_43_float; // 0x443 LT
	if(var_44_bool == 0) goto Label_1095; // 0x444 JumpB
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x445 MovV
	return 2; // 0x446 Return
	
Label_1095:
	var_38_cvector = var_39_cvector / var_39_cvector; // 0x447 Div2
	return 2; // 0x448 Return
}


func_1216()
{
	return 0; // 0x4c1 Return
}


func_1218(var_12_int)
{
	var_12_int = 0; // 0x4c3 MovI
	return 0; // 0x4c4 Return
}


func_1221()
{
	return 0; // 0x4c6 Return
}


func_1223()
{
	return 0; // 0x4c7 Return
}


func_1224(var_12_bool)
{
	var_12_bool = 1; // 0x4c9 MovB
	return 0; // 0x4ca Return
}


func_1097(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_int = var_72_cvector | var_73_cvector; // 0x44a Or
	var_75_int = var_72_cvector | var_72_cvector; // 0x44b Or
	var_76_int = var_73_cvector | var_73_cvector; // 0x44c Or
	var_77_float = var_75_int * var_76_int; // 0x44d Mult
	var_78_float = sqrt(var_77_float); // 0x44e Sqrt
	var_71_float = var_74_int / var_74_int; // 0x44f Div2
	return 0; // 0x450 Return
}


func_716(var_2_object)
{
	Stop(); // 0x2cc Func
	var_9_int = 120; // 0x2ce PushI
	KillTimer(var_9_int); // 0x2cf Func
	var_2_object = 1; // 0x2d1 TMovB
	return 0; // 0x2d2 Return
}


func_1105(var_9_object)
{
	var_10_object = Obj(); // 0x452 PushV
	var_10_object = var_9_object; // 0x453 Mov
	TaskCall(1); // 0x454 TaskCall
	func_6(var_10_object); // 0x455 Call
	TaskReturn(); // 0x456 TaskReturn
	return 0; // 0x458 Return
}


func_600(var_0_bool, var_1_bool, var_2_object, var_52_object)
{
	var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_float = 0; // 0x258 PushV
	var_0_bool = var_52_object; // 0x259 TMov
	var_66_cvector = CVector(0,0,0); var_67_float = 0; // 0x25a PushV
	var_67_float = 1.74533; // 0x25b MovF
	func_570(var_66_cvector, var_67_float); // 0x25c Call
	var_61_cvector = var_66_cvector; // 0x25d Mov
	var_62_float = var_61_cvector | var_61_cvector; // 0x25f Or2
	var_96_float = 10000.0; // 0x260 PushF
	var_97_bool = var_62_float < var_96_float; // 0x261 LT
	if(var_97_bool == 0) goto Label_620; // 0x262 JumpB
	var_98_string = "Can't retreat, distance: "; // 0x263 PushS
	var_99_float = sqrt(var_62_float); // 0x264 Sqrt
	var_100_int = var_98_string + var_99_float; // 0x265 Add
	Trace(var_100_int); // 0x266 Func
	var_101_float = 0.5; // 0x268 PushF
	Sleep(var_101_float); // 0x269 Func
	return 10; // 0x26b Return
	
Label_620:
	var_102_float = GetByIndex(var_61_cvector, 0); // 0x26c PushE
	var_103_float = GetByIndex(var_61_cvector, 2); // 0x26d PushE
	Rotate(var_102_float, var_103_float); // 0x26e Func
	var_104_cvector = CVector(0,0,0); // 0x270 PushV
	func_926(var_104_cvector); // 0x271 Call
	var_1_bool = var_104_cvector + var_61_cvector; // 0x273 Add2
	var_107_int = 120; // 0x274 PushI
	var_108_float = 0.5; // 0x275 PushF
	SetTimer(var_107_int, var_108_float); // 0x276 Func
	var_2_object = 0; // 0x278 TMovB
	
Label_633:
	var_109_int = 1; // 0x279 PushI
	MovePoint(var_109_int, var_109_int, var_63_bool); // 0x27a Func
	var_110_bool = var_63_bool; // 0x27c Push
	if(var_110_bool == 0) goto Label_661; // 0x27d JumpB
	var_111_bool = var_0_bool == 0; // 0x27e NullEq
	if(var_111_bool == 0) goto Label_642; // 0x27f JumpB
	goto Label_663; // 0x280 Jump
	
Label_663:
	return 10; // 0x297 Return
	
Label_642:
	var_112_cvector = CVector(0,0,0); var_113_float = 0; // 0x282 PushV
	var_113_float = 2.61799; // 0x283 MovF
	func_570(var_112_cvector, var_113_float); // 0x284 Call
	var_64_cvector = var_112_cvector; // 0x285 Mov
	var_65_float = var_64_cvector | var_64_cvector; // 0x287 Or2
	var_114_float = 10000.0; // 0x288 PushF
	var_115_bool = var_65_float >= var_114_float; // 0x289 GE
	if(var_115_bool == 0) goto Label_660; // 0x28a JumpB
	var_116_cvector = CVector(0,0,0); // 0x28b PushV
	func_926(var_116_cvector); // 0x28c Call
	var_1_bool = var_116_cvector + var_64_cvector; // 0x28e Add2
	var_117_int = 120; // 0x28f PushI
	var_118_float = 0.5; // 0x290 PushF
	SetTimer(var_117_int, var_118_float); // 0x291 Func
	goto Label_661; // 0x293 Jump
	
Label_661:
	var_119_bool = var_2_object == 0; // 0x295 Not
	if(var_119_bool == 0) goto Label_633; // 0x296 JumpB
	
Label_660:
	goto Label_663; // 0x294 Jump
}


func_732(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x2dc PushV
	GetDirection(var_63_cvector); // 0x2dd Func
	var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0x2df PushV
	var_66_object = var_0_bool; // 0x2e0 MovT
	func_931(var_66_object); // 0x2e1 Call
	var_64_cvector = var_65_cvector; // 0x2e2 Mov
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x2e4 PushV
	var_72_cvector = var_63_cvector; // 0x2e5 Mov
	var_73_cvector = var_64_cvector; // 0x2e6 Mov
	func_1097(var_71_float, var_72_cvector, var_73_cvector); // 0x2e7 Call
	var_79_float = -0.34202; // 0x2e9 PushF
	var_60_bool = var_71_float >= var_79_float; // 0x2ea GE2
	return 4; // 0x2eb Return
}


func_991(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x3df PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x3e0 PushV
	var_22_object = var_18_object; // 0x3e1 Mov
	func_955(var_21_bool, var_22_object); // 0x3e2 Call
	var_38_bool = var_21_bool == 0; // 0x3e4 Not
	if(var_38_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_17_bool = 0; // 0x3e6 MovB
	return 2; // 0x3e7 Return
	
Label_1000:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x3e8 PushV
	var_40_object = var_18_object; // 0x3e9 Mov
	var_41_string = "noaccess"; // 0x3ea MovS
	func_938(var_39_bool, var_40_object, var_41_string); // 0x3eb Call
	var_48_bool = var_39_bool == 0; // 0x3ed Not
	if(var_48_bool == 0) goto Label_1009; // 0x3ee JumpB
	var_17_bool = 1; // 0x3ef MovB
	return 2; // 0x3f0 Return
	
Label_1009:
	var_49_string = "noaccess"; // 0x3f1 PushS
	GetProperty(var_49_string, var_20_int); // 0x3f2 ObjFunc
	var_50_int = 0; // 0x3f4 PushI
	var_17_bool = var_20_int == var_50_int; // 0x3f5 Eq2
	return 2; // 0x3f6 Return
}


func_356(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x164 TMovB
	var_1_bool = 0; // 0x165 TMovB
	Stop(); // 0x166 Func
	StopGroup0(); // 0x168 Func
	return 0; // 0x16a Return
}


func_489()
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0; // 0x1e9 PushV
	WaitForAnimEnd(); // 0x1ea Func
	var_50_bool = 0; // 0x1ec PushV
	func_1082(var_50_bool); // 0x1ed Call
	var_51_bool = var_50_bool == 0; // 0x1ef Not
	if(var_51_bool == 0) goto Label_498; // 0x1f0 JumpB
	return 14; // 0x1f1 Return
	
Label_498:
	var_52_int = 0; // 0x1f2 PushV
	func_1147(var_52_int); // 0x1f3 Call
	var_43_int = var_52_int; // 0x1f4 Mov
	var_44_int = 0; // 0x1f6 MovI
	
Label_503:
	var_65_bool = 0; // 0x1f7 PushV
	var_65_bool = 0; // 0x1f8 MovB
	var_66_int = 5; // 0x1f9 PushI
	var_67_bool = var_44_int < var_66_int; // 0x1fa LT
	if(var_67_bool == 0) goto Label_513; // 0x1fb JumpB
	var_68_bool = 0; // 0x1fc PushV
	func_1082(var_68_bool); // 0x1fd Call
	if(var_68_bool == 0) goto Label_513; // 0x1ff JumpB
	var_65_bool = 1; // 0x200 MovB
	
Label_513:
	if(var_65_bool == 0) goto Label_557; // 0x201 JumpB
	var_69_int = 3; // 0x202 PushI
	irand(var_45_int, var_69_int); // 0x203 Func
	var_70_int = 0; // 0x205 PushI
	var_71_bool = var_45_int == var_70_int; // 0x206 Eq
	if(var_71_bool == 0) goto Label_537; // 0x207 JumpB
	var_72_int = var_43_int; // 0x208 Push
	if(var_72_int == 0) goto Label_536; // 0x209 JumpB
	irand(var_46_int, var_43_int); // 0x20a Func
	var_73_string = "all"; // 0x20c PushS
	var_74_string = ""; var_75_int = 0; // 0x20d PushV
	var_75_int = var_46_int; // 0x20e Mov
	func_1140(var_74_string, var_75_int); // 0x20f Call
	PlayAnimation(var_73_string, var_74_string); // 0x211 Func
	WaitForAnimEnd(var_47_bool); // 0x213 Func
	var_76_bool = var_47_bool == 0; // 0x215 Not
	if(var_76_bool == 0) goto Label_536; // 0x216 JumpB
	goto Label_557; // 0x217 Jump
	
Label_557:
	return 14; // 0x22d Return
	
Label_536:
	goto Label_554; // 0x218 Jump
	
Label_554:
	var_77_int = 1; // 0x22a PushI
	var_44_int = var_44_int + var_77_int; // 0x22b Add2
	goto Label_503; // 0x22c Jump
	
Label_537:
	var_78_int = 1; // 0x219 PushI
	var_79_bool = var_45_int == var_78_int; // 0x21a Eq
	if(var_79_bool == 0) goto Label_551; // 0x21b JumpB
	var_80_int = 4; // 0x21c PushI
	rand(var_48_float, var_80_int); // 0x21d Func
	var_81_int = 1; // 0x21f PushI
	var_82_int = var_48_float + var_81_int; // 0x220 Add
	Sleep(var_82_int, var_49_bool); // 0x221 Func
	var_83_bool = var_49_bool == 0; // 0x223 Not
	if(var_83_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_557; // 0x225 Jump
	
Label_550:
	goto Label_554; // 0x226 Jump
	
Label_551:
	var_84_int = var_44_int; // 0x227 Push
	if(var_84_int == 0) goto Label_554; // 0x228 JumpB
	goto Label_557; // 0x229 Jump
}


func_748(var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x2ec PushV
	GetPosition(var_30_cvector); // 0x2ed Func
	GetPosition(var_31_cvector); // 0x2ef TObjFunc
	GetDirection(var_32_cvector); // 0x2f1 Func
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); // 0x2f3 PushV
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x2f4 PushV
	var_39_cvector = var_30_cvector - var_31_cvector; // 0x2f5 Sub2
	func_1087(var_38_cvector, var_39_cvector); // 0x2f6 Call
	var_45_float = 0.75; // 0x2f8 PushF
	var_46_float = var_32_cvector * var_45_float; // 0x2f9 Mult
	var_37_cvector = var_38_cvector + var_46_float; // 0x2fa Add2
	func_1087(var_36_cvector, var_37_cvector); // 0x2fb Call
	var_33_cvector = var_36_cvector; // 0x2fc Mov
	var_47_int = 32; // 0x2fe PushI
	var_48_float = 7000.0; // 0x2ff PushF
	FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, var_47_int, var_48_float); // 0x300 Func
	var_49_int = 100; // 0x302 PushI
	var_35_float = var_35_float - var_49_int; // 0x303 Sub2
	var_50_int = 0; // 0x304 PushI
	var_51_bool = var_35_float < var_50_int; // 0x305 LT
	if(var_51_bool == 0) goto Label_776; // 0x306 JumpB
	var_35_float = 0; // 0x307 MovI
	
Label_776:
	var_22_cvector = var_34_cvector * var_35_float; // 0x308 Mult2
	return 12; // 0x309 Return
}


func_372(var_34_bool)
{
	var_34_bool = 0; // 0x174 MovB
	return 0; // 0x175 Return
}


func_1140(var_58_string, var_59_int)
{
	var_60_string = ""; var_61_string = ""; // 0x474 PushV
	var_61_string = "idle"; // 0x475 MovS
	var_62_int = var_59_int; // 0x476 Push
	if(var_62_int == 0) goto Label_1145; // 0x477 JumpB
	var_61_string = var_61_string + var_59_int; // 0x478 Add2
	
Label_1145:
	var_58_string = var_61_string; // 0x479 Mov
	return 2; // 0x47a Return
}


func_1015(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; // 0x3f7 PushV
	var_35_bool = 0; // 0x3f8 PushV
	var_35_bool = 0; // 0x3f9 MovB
	var_36_int = 4; // 0x3fa PushI
	var_37_bool = var_13_int != var_36_int; // 0x3fb Neq
	if(var_37_bool == 0) goto Label_1025; // 0x3fc JumpB
	var_38_int = 5; // 0x3fd PushI
	var_39_bool = var_13_int != var_38_int; // 0x3fe Neq
	if(var_39_bool == 0) goto Label_1025; // 0x3ff JumpB
	var_35_bool = 1; // 0x400 MovB
	
Label_1025:
	if(var_35_bool == 0) goto Label_1044; // 0x401 JumpB
	GetScene(var_25_object); // 0x402 Func
	GetPosition(var_27_cvector); // 0x404 Func
	GetEyesHeight(var_28_float); // 0x406 Func
	var_40_float = GetByIndex(var_27_cvector, 1); // 0x408 PushE
	var_41_int = 2; // 0x409 PushI
	var_42_float = var_28_float / var_41_int; // 0x40a Div
	var_40_float = var_40_float + var_42_float; // 0x40b Add2
	SetByIndex(var_27_cvector, 1) = var_40_float; // 0x40c PopE
	var_43_string = "scripted"; // 0x40d PushS
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0x40e PushVec
	var_45_string = "blood.xml"; // 0x40f PushS
	AddActorByType(var_26_object, var_43_string, var_25_object, var_27_cvector, var_44_cvector, var_45_string); // 0x410 Func
	var_26_object = 0; // 0x412 SetNull
	var_25_object = 0; // 0x413 SetNull
	
Label_1044:
	var_46_bool = var_12_object == 0; // 0x414 NullEq
	if(var_46_bool == 0) goto Label_1047; // 0x415 JumpB
	return 20; // 0x416 Return
	
Label_1047:
	GetSecondaryAnimationType(var_29_int); // 0x417 Func
	var_47_int = 0; // 0x419 PushI
	var_48_bool = var_29_int < var_47_int; // 0x41a LT
	if(var_48_bool == 0) goto Label_1053; // 0x41b JumpB
	return 20; // 0x41c Return
	
Label_1053:
	GetPosition(var_30_cvector); // 0x41d ObjFunc
	GetPosition(var_31_cvector); // 0x41f Func
	GetDirection(var_32_cvector); // 0x421 Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x423 Sub2
	var_49_float = GetByIndex(var_33_cvector, 0); // 0x424 PushE
	var_50_float = GetByIndex(var_32_cvector, 0); // 0x425 PushE
	var_51_float = var_49_float * var_50_float; // 0x426 Mult
	var_52_float = GetByIndex(var_33_cvector, 2); // 0x427 PushE
	var_53_float = GetByIndex(var_32_cvector, 2); // 0x428 PushE
	var_54_float = var_52_float * var_53_float; // 0x429 Mult
	var_55_int = var_51_float + var_54_float; // 0x42a Add
	var_56_int = 0; // 0x42b PushI
	var_57_bool = var_55_int >= var_56_int; // 0x42c GE
	if(var_57_bool == 0) goto Label_1072; // 0x42d JumpB
	var_34_string = "fhit"; // 0x42e MovS
	goto Label_1073; // 0x42f Jump
	
Label_1073:
	var_58_string = "hit_react"; // 0x431 PushS
	var_59_string = "1"; // 0x432 PushS
	var_60_int = var_34_string + var_59_string; // 0x433 Add
	var_61_string = "2"; // 0x434 PushS
	var_62_int = var_34_string + var_61_string; // 0x435 Add
	var_63_int = -10; // 0x436 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x437 Func
	return 20; // 0x439 Return
	
Label_1072:
	var_34_string = "bhit"; // 0x430 MovS
}


func_1147(var_52_int)
{
	var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x47b PushV
	var_55_int = 0; // 0x47c MovI
	
Label_1149:
	var_57_string = "all"; // 0x47d PushS
	var_58_string = ""; var_59_int = 0; // 0x47e PushV
	var_59_int = var_55_int; // 0x47f Mov
	func_1140(var_58_string, var_59_int); // 0x480 Call
	HasAnimation(var_56_bool, var_57_string, var_58_string); // 0x482 Func
	var_63_bool = var_56_bool == 0; // 0x484 Not
	if(var_63_bool == 0) goto Label_1159; // 0x485 JumpB
	goto Label_1162; // 0x486 Jump
	
Label_1162:
	var_52_int = var_55_int; // 0x48a Mov
	return 4; // 0x48b Return
	
Label_1159:
	var_64_int = 1; // 0x487 PushI
	var_55_int = var_55_int + var_64_int; // 0x488 Add2
	goto Label_1149; // 0x489 Jump
}


func_126(var_33_string)
{
	RemoveRTEnvelope(); // 0x7f Func
	SetDeathState(); // 0x81 Func
	Stop(); // 0x83 Func
	StopAsync(); // 0x85 Func
	StopSecondaryAnimation(); // 0x87 Func
	var_34_string = "all"; // 0x89 PushS
	PlayAnimation(var_34_string, var_33_string); // 0x8a Func
	WaitForAnimEnd(); // 0x8c Func
	var_35_string = "all"; // 0x8e PushS
	LockAnimationEnd(var_35_string, var_33_string); // 0x8f Func
	RemoveEnvelope(); // 0x91 Func
	return 0; // 0x93 Return
}


