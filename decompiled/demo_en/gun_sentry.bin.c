task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x20 PushV
	IsOverrideActive(var_10_bool); // 0x21 Func
	var_11_bool = var_10_bool == 0; // 0x23 Not
	if(var_11_bool == 0) goto Label_41; // 0x24 JumpB
	var_12_object = Obj(); // 0x25 PushV
	var_12_object = var_8_cvector; // 0x26 Mov
	func_1569(var_12_object); // 0x27 NEW_2
	
Label_41:
	return 2; // 0x29 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	return 0; // 0xa0 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	return 0; // 0xa2 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	return 0; // 0xa4 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_189(); // 0xc7 NEW_2
	var_10_object = Obj(); // 0xc9 PushV
	var_10_object = var_8_cvector; // 0xca Mov
	func_1734(); // 0xcb NEW_2
	return 0; // 0xcd Return
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object; // 0xcf Eq
	if(var_9_bool == 0) goto Label_214; // 0xd0 JumpB
	var_10_int = 100; // 0xd1 PushI
	KillTimer(var_10_int); // 0xd2 Func
	Face(var_0_object); // 0xd4 Func
	
Label_214:
	return 0; // 0xd6 Return
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object; // 0xd8 Eq
	if(var_9_bool == 0) goto Label_226; // 0xd9 JumpB
	var_10_int = 100; // 0xda PushI
	var_11_float = 3.0; // 0xdb PushF
	SetTimer(var_10_int, var_11_float); // 0xdc Func
	var_12_object = Obj(); // 0xde PushV
	var_12_object = var_0_object; // 0xdf MovT
	func_1276(); // 0xe0 NEW_2
	
Label_226:
	return 0; // 0xe2 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0xe4 PushV
	var_99_object = var_97_object; // 0xe5 Mov
	func_1126(var_98_bool, var_99_object); // 0xe6 NEW_2
	var_126_bool = var_98_bool == 0; // 0xe8 Not
	if(var_126_bool == 0) goto Label_239; // 0xe9 JumpB
	var_127_object = Obj(); // 0xea PushV
	var_127_object = var_97_object; // 0xeb Mov
	func_1906(var_127_object); // 0xec NEW_2
	return 0; // 0xee Return
	
Label_239:
	func_189(); // 0xf0 NEW_2
	var_143_object = Obj(); // 0xf2 PushV
	var_143_object = var_97_object; // 0xf3 Mov
	func_1930(var_143_object); // 0xf4 NEW_2
	return 0; // 0xf6 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0xf8 PushV
	var_12_object = var_8_bool; // 0xf9 Mov
	var_13_object = var_9_cvector; // 0xfa Mov
	var_14_bool = var_10_cvector; // 0xfb Mov
	func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0xfc NEW_2
	if(var_11_bool == 0) goto Label_259; // 0xfe JumpB
	var_97_object = Obj(); // 0xff PushV
	var_97_object = var_8_bool; // 0x100 Mov
	func_227(); // 0x101 NEW_2
	
Label_259:
	return 0; // 0x103 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x105 PushV
	var_10_object = var_8_cvector; // 0x106 Mov
	func_2050(var_9_bool, var_10_object); // 0x107 NEW_2
	if(var_9_bool == 0) goto Label_273; // 0x109 JumpB
	func_189(); // 0x10b NEW_2
	var_129_object = Obj(); // 0x10d PushV
	var_129_object = var_8_cvector; // 0x10e Mov
	func_2072(var_129_object); // 0x10f NEW_2
	
Label_273:
	return 0; // 0x111 Return
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_int = 100; // 0x113 PushI
	var_10_bool = var_8_cvector != var_9_int; // 0x114 Neq
	if(var_10_bool == 0) goto Label_279; // 0x115 JumpB
	return 0; // 0x116 Return
	
Label_279:
	var_11_int = 100; // 0x117 PushI
	KillTimer(var_11_int); // 0x118 Func
	StopGroup0(); // 0x11a Func
	return 0; // 0x11c Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x194 PushV
	var_99_object = var_97_object; // 0x195 Mov
	func_1126(var_98_bool, var_99_object); // 0x196 NEW_2
	var_126_bool = var_98_bool == 0; // 0x198 Not
	if(var_126_bool == 0) goto Label_415; // 0x199 JumpB
	var_127_object = Obj(); // 0x19a PushV
	var_127_object = var_97_object; // 0x19b Mov
	func_1906(var_127_object); // 0x19c NEW_2
	return 0; // 0x19e Return
	
Label_415:
	func_436(); // 0x1a0 NEW_2
	var_142_object = Obj(); // 0x1a2 PushV
	var_142_object = var_97_object; // 0x1a3 Mov
	func_1930(var_142_object); // 0x1a4 NEW_2
	return 0; // 0x1a6 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x1a8 PushV
	var_12_object = var_8_bool; // 0x1a9 Mov
	var_13_object = var_9_cvector; // 0x1aa Mov
	var_14_bool = var_10_cvector; // 0x1ab Mov
	func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x1ac NEW_2
	if(var_11_bool == 0) goto Label_435; // 0x1ae JumpB
	var_97_object = Obj(); // 0x1af PushV
	var_97_object = var_8_bool; // 0x1b0 Mov
	func_403(); // 0x1b1 NEW_2
	
Label_435:
	return 0; // 0x1b3 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_436(); // 0x1bd NEW_2
	var_9_object = Obj(); // 0x1bf PushV
	var_9_object = var_8_cvector; // 0x1c0 Mov
	func_1734(); // 0x1c1 NEW_2
	return 0; // 0x1c3 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x255 PushV
	var_9_bool = 0; // 0x256 MovB
	var_10_bool = var_2_bool; // 0x257 PushT
	if(var_10_bool == 0) goto Label_604; // 0x258 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x259 Eq
	if(var_11_bool == 0) goto Label_604; // 0x25a JumpB
	var_9_bool = 1; // 0x25b MovB
	
Label_604:
	if(var_9_bool == 0) goto Label_609; // 0x25c JumpB
	var_12_object = Obj(); // 0x25d PushV
	var_12_object = var_0_object; // 0x25e MovT
	func_1276(); // 0x25f NEW_2
	
Label_609:
	return 0; // 0x261 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x263 PushV
	var_9_bool = 0; // 0x264 MovB
	var_10_bool = var_2_bool; // 0x265 PushT
	if(var_10_bool == 0) goto Label_618; // 0x266 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x267 Eq
	if(var_11_bool == 0) goto Label_618; // 0x268 JumpB
	var_9_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_9_bool == 0) goto Label_626; // 0x26a JumpB
	var_12_string = "@Stop hunt"; // 0x26b PushS
	Trace(var_12_string); // 0x26c Func
	StopAnimation(); // 0x26e Func
	StopGroup0(); // 0x270 Func
	
Label_626:
	return 0; // 0x272 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x2f2 PushV
	var_99_object = var_97_object; // 0x2f3 Mov
	func_1126(var_98_bool, var_99_object); // 0x2f4 NEW_2
	var_126_bool = var_98_bool == 0; // 0x2f6 Not
	if(var_126_bool == 0) goto Label_761; // 0x2f7 JumpB
	return 0; // 0x2f8 Return
	
Label_761:
	var_127_object = Obj(); // 0x2f9 PushV
	var_127_object = var_97_object; // 0x2fa Mov
	func_1906(var_127_object); // 0x2fb NEW_2
	var_142_bool = var_97_object == var_0_object; // 0x2fd Eq
	if(var_142_bool == 0) goto Label_769; // 0x2fe JumpB
	var_1_object = 0; // 0x2ff SetNullT
	goto Label_776; // 0x300 Jump
	
Label_776:
	return 0; // 0x308 Return
	
Label_769:
	var_1_object = var_97_object; // 0x301 TMov
	var_143_bool = var_2_bool; // 0x302 PushT
	if(var_143_bool == 0) goto Label_776; // 0x303 JumpB
	StopAnimation(); // 0x304 Func
	StopGroup0(); // 0x306 Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x30a PushV
	var_12_object = var_8_bool; // 0x30b Mov
	var_13_object = var_9_cvector; // 0x30c Mov
	var_14_bool = var_10_cvector; // 0x30d Mov
	func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x30e NEW_2
	if(var_11_bool == 0) goto Label_789; // 0x310 JumpB
	var_97_object = Obj(); // 0x311 PushV
	var_97_object = var_8_bool; // 0x312 Mov
	func_753(); // 0x313 NEW_2
	
Label_789:
	return 0; // 0x315 Return
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x31f PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x320 PushV
	var_12_object = var_8_object; // 0x321 Mov
	func_1126(var_11_bool, var_12_object); // 0x322 NEW_2
	var_45_bool = var_11_bool == 0; // 0x324 Not
	if(var_45_bool == 0) goto Label_807; // 0x325 JumpB
	return 2; // 0x326 Return
	
Label_807:
	var_46_bool = 0; var_47_object = Obj(); // 0x327 PushV
	var_47_object = var_8_object; // 0x328 Mov
	func_1970(var_46_bool, var_47_object); // 0x329 NEW_2
	var_124_bool = var_46_bool == 0; // 0x32b Not
	if(var_124_bool == 0) goto Label_819; // 0x32c JumpB
	var_125_object = GlobalVars[0]; // 0x32d PushGE
	in(var_10_bool, var_8_object); // 0x32e ObjFunc
	var_126_bool = var_10_bool == 0; // 0x330 Not
	if(var_126_bool == 0) goto Label_819; // 0x331 JumpB
	return 2; // 0x332 Return
	
Label_819:
	func_960(); // 0x334 NEW_2
	var_127_object = Obj(); // 0x336 PushV
	var_127_object = var_8_object; // 0x337 Mov
	TaskCall(1); // 0x338 TaskCall
	func_165(var_128_object, var_127_object); // 0x339 NEW_2
	TaskReturn(); // 0x33a TaskReturn
	return 2; // 0x33c Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x33e PushV
	var_99_object = var_97_object; // 0x33f Mov
	func_1126(var_98_bool, var_99_object); // 0x340 NEW_2
	var_126_bool = var_98_bool == 0; // 0x342 Not
	if(var_126_bool == 0) goto Label_841; // 0x343 JumpB
	var_127_object = Obj(); // 0x344 PushV
	var_127_object = var_97_object; // 0x345 Mov
	func_1906(var_127_object); // 0x346 NEW_2
	return 0; // 0x348 Return
	
Label_841:
	func_960(); // 0x34a NEW_2
	var_142_object = Obj(); // 0x34c PushV
	var_142_object = var_97_object; // 0x34d Mov
	func_1930(var_142_object); // 0x34e NEW_2
	return 0; // 0x350 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x352 PushV
	var_12_object = var_8_object; // 0x353 Mov
	var_13_object = var_9_object; // 0x354 Mov
	var_14_bool = var_10_bool; // 0x355 Mov
	func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x356 NEW_2
	if(var_11_bool == 0) goto Label_861; // 0x358 JumpB
	var_97_object = Obj(); // 0x359 PushV
	var_97_object = var_8_object; // 0x35a Mov
	func_829(); // 0x35b NEW_2
	
Label_861:
	return 0; // 0x35d Return
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x35f PushV
	var_10_object = var_8_object; // 0x360 Mov
	func_2050(var_9_bool, var_10_object); // 0x361 NEW_2
	if(var_9_bool == 0) goto Label_875; // 0x363 JumpB
	func_960(); // 0x365 NEW_2
	var_128_object = Obj(); // 0x367 PushV
	var_128_object = var_8_object; // 0x368 Mov
	func_2104(var_128_object); // 0x369 NEW_2
	
Label_875:
	return 0; // 0x36b Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x6a8 PushV
	var_12_object = var_8_object; // 0x6a9 Mov
	var_13_int = var_9_int; // 0x6aa Mov
	var_14_float = var_10_float; // 0x6ab Mov
	func_1194(var_12_object, var_13_int, var_14_float); // 0x6ac NEW_2
	return 0; // 0x6ae Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x6b0 PushV
	var_14_object = var_8_object; // 0x6b1 Mov
	var_15_int = var_9_int; // 0x6b2 Mov
	var_16_float = var_10_float; // 0x6b3 Mov
	var_17_cvector = var_12_cvector; // 0x6b4 Mov
	var_18_cvector = var_13_cvector; // 0x6b5 Mov
	func_1262(var_16_float, var_17_cvector, var_18_cvector); // 0x6b6 NEW_2
	return 0; // 0x6b8 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x6b9 PushV
	var_12_string = "health"; // 0x6ba PushS
	var_13_bool = var_9_string == var_12_string; // 0x6bb Eq
	if(var_13_bool == 0) goto Label_1733; // 0x6bc JumpB
	var_14_string = "health"; // 0x6bd PushS
	GetProperty(var_14_string, var_11_float); // 0x6be Func
	var_15_int = 0; // 0x6c0 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x6c1 LE
	if(var_16_bool == 0) goto Label_1733; // 0x6c2 JumpB
	SignalDeath(var_8_object); // 0x6c3 Func
	
Label_1733:
	return 2; // 0x6c5 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x6c7 PushV
	var_10_object = var_8_object; // 0x6c8 Mov
	func_995(var_9_bool, var_10_object); // 0x6c9 NEW_2
	if(var_9_bool == 0) goto Label_1747; // 0x6cb JumpB
	var_13_object = Obj(); // 0x6cc PushV
	func_1448(var_13_object); // 0x6cd NEW_2
	var_16_float = -0.13; // 0x6cf PushF
	var_17_bool = 1; // 0x6d0 PushB
	ReportReputationChange(var_8_object, var_13_object, var_16_float, var_17_bool); // 0x6d1 Func
	
Label_1747:
	var_18_object = Obj(); // 0x6d3 PushV
	var_18_object = var_8_object; // 0x6d4 Mov
	func_2110(var_18_object); // 0x6d5 NEW_2
	return 0; // 0x6d7 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	func_1888(); // 0x317 NEW_2
	
Label_793:
	func_876(var_6_cvector, var_7_cvector); // 0x31a NEW_2
	goto Label_793; // 0x31c Jump
}


func_0(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x1 PushV
	var_22_object = var_20_object; // 0x2 Mov
	func_995(var_21_bool, var_22_object); // 0x3 NEW_2
	if(var_21_bool == 0) goto Label_9; // 0x5 JumpB
	func_1654(); // 0x7 NEW_2
	
Label_9:
	func_1630(); // 0xa NEW_2
	var_99_object = Obj(); // 0xc PushV
	var_99_object = var_20_object; // 0xd Mov
	func_17(var_99_object); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_2050(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x802 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x803 PushV
	var_14_object = var_10_object; // 0x804 Mov
	func_1126(var_13_bool, var_14_object); // 0x805 NEW_2
	var_47_bool = var_13_bool == 0; // 0x807 Not
	if(var_47_bool == 0) goto Label_2059; // 0x808 JumpB
	var_9_bool = 0; // 0x809 MovB
	return 2; // 0x80a Return
	
Label_2059:
	var_48_object = GlobalVars[0]; // 0x80b PushGE
	in(var_12_bool, var_10_object); // 0x80c ObjFunc
	var_49_bool = var_12_bool; // 0x80e Push
	if(var_49_bool == 0) goto Label_2066; // 0x80f JumpB
	var_9_bool = 1; // 0x810 MovB
	return 2; // 0x811 Return
	
Label_2066:
	var_50_bool = 0; var_51_object = Obj(); // 0x812 PushV
	var_51_object = var_10_object; // 0x813 Mov
	func_1970(var_50_bool, var_51_object); // 0x814 NEW_2
	var_9_bool = var_50_bool; // 0x815 Mov
	return 2; // 0x817 Return
}


func_133(var_122_string)
{
	RemoveRTEnvelope(); // 0x86 Func
	SetDeathState(); // 0x88 Func
	Stop(); // 0x8a Func
	StopAsync(); // 0x8c Func
	StopSecondaryAnimation(); // 0x8e Func
	var_123_string = ""; // 0x90 PushV
	var_123_string = var_122_string; // 0x91 Mov
	func_1320(var_123_string); // 0x92 NEW_2
	var_152_string = "all"; // 0x94 PushS
	PlayAnimation(var_152_string, var_122_string); // 0x95 Func
	WaitForAnimEnd(); // 0x97 Func
	var_153_string = "all"; // 0x99 PushS
	LockAnimationEnd(var_153_string, var_122_string); // 0x9a Func
	RemoveEnvelope(); // 0x9c Func
	return 0; // 0x9e Return
}


func_1543(var_145_object)
{
	var_146_bool = 0; var_147_bool = 0; // 0x607 PushV
	IsPlayerActor(var_145_object, var_147_bool); // 0x608 Func
	var_148_bool = var_147_bool; // 0x60a Push
	if(var_148_bool == 0) goto Label_1551; // 0x60b JumpB
	var_149_string = "attack"; // 0x60c PushS
	PlayGlobalMusic(var_149_string); // 0x60d Func
	
Label_1551:
	return 2; // 0x60f Return
}


func_1287(var_240_float)
{
	var_242_float = 0; var_243_float = 0; var_244_float = 0; var_245_float = 0; // 0x507 PushV
	GetEyesHeight(var_244_float); // 0x508 Func
	GetEyesHeight(var_245_float); // 0x50a ObjFunc
	var_240_float = var_245_float - var_244_float; // 0x50c Sub2
	return 4; // 0x50d Return
}


func_1930(var_142_object)
{
	var_143_object = Obj(); // 0x78b PushV
	var_143_object = var_142_object; // 0x78c Mov
	func_1906(var_143_object); // 0x78d NEW_2
	var_144_object = Obj(); var_145_bool = 0; // 0x78f PushV
	var_144_object = var_142_object; // 0x790 Mov
	var_145_bool = 1; // 0x791 MovB
	func_1895(var_144_object, var_145_bool); // 0x792 NEW_2
	return 0; // 0x794 Return
}


func_1294(var_67_string, var_68_int, var_69_int)
{
	var_70_bool = 0; var_71_bool = 0; // 0x50e PushV
	var_72_bool = 0; var_73_int = 0; var_74_int = 0; // 0x50f PushV
	var_73_int = var_68_int; // 0x510 Mov
	var_74_int = var_69_int; // 0x511 Mov
	func_1486(var_72_bool, var_73_int, var_74_int); // 0x512 NEW_2
	if(var_72_bool == 0) goto Label_1304; // 0x514 JumpB
	var_75_int = 0; // 0x515 PushI
	AddItem(var_71_bool, var_67_string, var_75_int); // 0x516 Func
	
Label_1304:
	return 2; // 0x518 Return
}


func_1552()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x610 PushV
	GetScene(var_151_object); // 0x611 Func
	var_152_string = "battle"; // 0x613 PushS
	var_153_object = Obj(); // 0x614 PushV
	func_1448(var_153_object); // 0x615 NEW_2
	BroadcastMessage(var_152_string, var_153_object, var_151_object); // 0x617 Func
	return 2; // 0x619 Return
}


func_17(var_99_object)
{
	EventDisable(0); // 0x12 EventDisable
	var_100_object = Obj(); // 0x13 PushV
	var_100_object = var_99_object; // 0x14 Mov
	func_42(var_100_object); // 0x15 NEW_2
	var_180_int = 50; // 0x17 PushI
	var_181_int = 40; // 0x18 PushI
	SetRTEnvelope(var_180_int, var_181_int); // 0x19 Func
	EventEnable(0); // 0x1b EventEnable
	
Label_28:
	Hold(); // 0x1c Func
	goto Label_28; // 0x1e Jump
}


func_1941(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0; // 0x795 PushV
	var_132_object = GlobalVars[0]; // 0x796 PushGE
	in(var_131_bool, var_129_object); // 0x797 ObjFunc
	var_133_bool = var_131_bool; // 0x799 Push
	if(var_133_bool == 0) goto Label_1953; // 0x79a JumpB
	var_134_object = Obj(); var_135_bool = 0; // 0x79b PushV
	var_134_object = var_129_object; // 0x79c Mov
	var_135_bool = 1; // 0x79d MovB
	func_1895(var_134_object, var_135_bool); // 0x79e NEW_2
	goto Label_1961; // 0x7a0 Jump
	
Label_1961:
	return 2; // 0x7a9 Return
	
Label_1953:
	var_354_object = Obj(); // 0x7a1 PushV
	var_354_object = var_129_object; // 0x7a2 Mov
	TaskCall(2); // 0x7a3 TaskCall
	func_285(var_356_bool, var_354_object); // 0x7a4 NEW_2
	TaskReturn(); // 0x7a5 TaskReturn
	ResetAAS(); // 0x7a7 Func
}


func_2072(var_129_object)
{
	var_130_object = Obj(); // 0x819 PushV
	var_130_object = var_129_object; // 0x81a Mov
	func_2104(var_130_object); // 0x81b NEW_2
	return 0; // 0x81d Return
}


func_1305(var_47_string, var_48_int, var_49_int, var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x519 PushV
	var_55_bool = 0; var_56_int = 0; var_57_int = 0; // 0x51a PushV
	var_56_int = var_48_int; // 0x51b Mov
	var_57_int = var_49_int; // 0x51c Mov
	func_1486(var_55_bool, var_56_int, var_57_int); // 0x51d NEW_2
	if(var_55_bool == 0) goto Label_1319; // 0x51f JumpB
	irand(var_53_int, var_50_int); // 0x520 Func
	var_60_int = 0; // 0x522 PushI
	var_61_int = 1; // 0x523 PushI
	var_62_int = var_53_int + var_61_int; // 0x524 Add
	AddItem(var_54_bool, var_47_string, var_60_int, var_62_int); // 0x525 Func
	
Label_1319:
	return 4; // 0x527 Return
}


func_1690(var_40_int, var_41_string)
{
	var_42_int = 0; var_43_int = 0; // 0x69a PushV
	GetInvItemByName(var_43_int, var_41_string); // 0x69b Func
	var_40_int = var_43_int; // 0x69d Mov
	return 2; // 0x69e Return
}


func_1563(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x61b PushV
	var_82_string = "branch"; // 0x61c PushS
	GetVariable(var_82_string, var_81_int); // 0x61d Func
	var_79_int = var_81_int; // 0x61f Mov
	return 2; // 0x620 Return
}


func_285(var_0_object, var_354_object)
{
	var_357_bool = 0; var_358_int = 0; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_int = 0; // 0x11d PushV
	var_0_object = var_354_object; // 0x11e TMov
	var_363_object = Obj(); // 0x11f PushV
	var_363_object = var_0_object; // 0x120 MovT
	func_1543(var_363_object); // 0x121 NEW_2
	CanSee(var_362_int, var_0_object); // 0x123 Func
	var_364_object = var_1_object; // 0x125 PushT
	if(var_364_object == 0) goto Label_308; // 0x126 JumpB
	var_365_bool = 0; var_366_object = Obj(); // 0x127 PushV
	var_366_object = var_0_object; // 0x128 MovT
	func_1962(var_365_bool, var_366_object); // 0x129 NEW_2
	if(var_365_bool == 0) goto Label_306; // 0x12b JumpB
	var_376_object = Obj(); var_377_bool = 0; // 0x12c PushV
	var_376_object = var_0_object; // 0x12d MovT
	var_377_bool = 1; // 0x12e MovB
	func_1895(var_376_object, var_377_bool); // 0x12f NEW_2
	return 6; // 0x131 Return
	
Label_306:
	Face(var_0_object); // 0x132 Func
	
Label_308:
	func_1552(); // 0x135 NEW_2
	var_378_string = "all"; // 0x137 PushS
	var_379_string = "shoot_begin"; // 0x138 PushS
	PlayAnimation(var_378_string, var_379_string); // 0x139 Func
	WaitForAnimEnd(var_360_bool); // 0x13b Func
	var_380_bool = var_360_bool == 0; // 0x13d Not
	if(var_380_bool == 0) goto Label_322; // 0x13e JumpB
	StopAsync(); // 0x13f Func
	return 6; // 0x141 Return
	
Label_322:
	var_381_string = "shot"; // 0x142 PushS
	Speak(var_381_string); // 0x143 Func
	var_382_string = "all"; // 0x145 PushS
	var_383_string = "shoot_end"; // 0x146 PushS
	PlayAnimation(var_382_string, var_383_string); // 0x147 Func
	WaitForAnimEnd(var_360_bool); // 0x149 Func
	var_384_bool = var_360_bool == 0; // 0x14b Not
	if(var_384_bool == 0) goto Label_336; // 0x14c JumpB
	StopAsync(); // 0x14d Func
	return 6; // 0x14f Return
	
Label_336:
	var_385_string = "all"; // 0x150 PushS
	var_386_string = "shoot_end"; // 0x151 PushS
	LockAnimationEnd(var_385_string, var_386_string); // 0x152 Func
	var_361_int = 0; // 0x154 MovI
	var_362_int = 0; // 0x155 MovI
	
Label_342:
	var_387_int = 20; // 0x156 PushI
	var_388_bool = var_362_int < var_387_int; // 0x157 LT
	if(var_388_bool == 0) goto Label_394; // 0x158 JumpB
	var_389_object = Obj(); // 0x159 PushV
	var_389_object = var_0_object; // 0x15a MovT
	func_1543(var_389_object); // 0x15b NEW_2
	var_390_float = 0.5; // 0x15d PushF
	Sleep(var_390_float, var_360_bool); // 0x15e Func
	var_391_bool = var_360_bool == 0; // 0x160 Not
	if(var_391_bool == 0) goto Label_355; // 0x161 JumpB
	return 6; // 0x162 Return
	
Label_355:
	CanSee(var_362_int, var_0_object); // 0x163 Func
	var_392_object = var_1_object; // 0x165 PushT
	if(var_392_object == 0) goto Label_377; // 0x166 JumpB
	var_361_int = 0; // 0x167 MovI
	var_393_bool = 0; var_394_object = Obj(); // 0x168 PushV
	var_394_object = var_0_object; // 0x169 MovT
	func_1962(var_393_bool, var_394_object); // 0x16a NEW_2
	if(var_393_bool == 0) goto Label_374; // 0x16c JumpB
	func_436(); // 0x16e NEW_2
	var_395_object = Obj(); var_396_bool = 0; // 0x170 PushV
	var_395_object = var_0_object; // 0x171 MovT
	var_396_bool = 0; // 0x172 MovB
	func_1895(var_395_object, var_396_bool); // 0x173 NEW_2
	return 6; // 0x175 Return
	
Label_374:
	Face(var_0_object); // 0x176 Func
	goto Label_391; // 0x178 Jump
	
Label_391:
	var_397_int = 1; // 0x187 PushI
	var_362_int = var_362_int + var_397_int; // 0x188 Add2
	goto Label_342; // 0x189 Jump
	
Label_377:
	StopAsync(); // 0x179 Func
	var_398_int = 1; // 0x17b PushI
	var_361_int = var_361_int + var_398_int; // 0x17c Add2
	var_399_int = 4; // 0x17d PushI
	var_400_bool = var_361_int == var_399_int; // 0x17e Eq
	if(var_400_bool == 0) goto Label_391; // 0x17f JumpB
	var_401_string = "all"; // 0x180 PushS
	var_402_string = "attack_off"; // 0x181 PushS
	PlayAnimation(var_401_string, var_402_string); // 0x182 Func
	WaitForAnimEnd(); // 0x184 Func
	return 6; // 0x186 Return
	
Label_394:
	func_436(); // 0x18b NEW_2
	var_403_object = Obj(); var_404_bool = 0; // 0x18d PushV
	var_403_object = var_354_object; // 0x18e Mov
	var_404_bool = 0; // 0x18f MovB
	func_1895(var_403_object, var_404_bool); // 0x190 NEW_2
	return 6; // 0x192 Return
}


func_2078(var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x81e PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x81f PushV
	var_18_object = var_13_object; // 0x820 Mov
	var_19_bool = !var_14_bool; // 0x821 Not2
	func_1752(var_17_bool, var_18_object, var_19_bool); // 0x822 NEW_2
	if(var_17_bool == 0) goto Label_2102; // 0x824 JumpB
	CanSee(var_16_bool, var_12_object); // 0x825 Func
	var_85_bool = 0; // 0x827 PushV
	var_85_bool = 1; // 0x828 MovB
	var_86_bool = var_16_bool; // 0x829 Push
	if(var_86_bool == 0) goto Label_2099; // 0x82a JumpB
	var_87_float = 0; var_88_object = Obj(); // 0x82b PushV
	var_88_object = var_12_object; // 0x82c Mov
	func_987(var_88_object); // 0x82d NEW_2
	var_95_float = 490000.0; // 0x82f PushF
	var_96_bool = var_87_float <= var_95_float; // 0x830 LE
	if(var_96_bool == 0) goto Label_2099; // 0x831 JumpB
	var_85_bool = 0; // 0x832 MovB
	
Label_2099:
	if(var_85_bool == 0) goto Label_2102; // 0x833 JumpB
	var_11_bool = 1; // 0x834 MovB
	return 2; // 0x835 Return
	
Label_2102:
	var_11_bool = 0; // 0x836 MovB
	return 2; // 0x837 Return
}


func_798()
{
	return 0; // 0x31e Return
}


func_1695(var_19_object)
{
	var_20_object = Obj(); // 0x6a0 PushV
	var_20_object = var_19_object; // 0x6a1 Mov
	TaskCall(0); // 0x6a2 TaskCall
	func_0(var_20_object); // 0x6a3 NEW_2
	TaskReturn(); // 0x6a4 TaskReturn
	return 0; // 0x6a6 Return
}


func_1569(var_12_object)
{
	var_13_int = 0; // 0x622 PushV
	func_1563(var_13_int); // 0x623 NEW_2
	var_17_int = 1; // 0x625 PushI
	var_18_bool = var_13_int == var_17_int; // 0x626 Eq
	if(var_18_bool == 0) goto Label_1579; // 0x627 JumpB
	WorkWithCorpse(var_12_object); // 0x628 Func
	goto Label_1581; // 0x62a Jump
	
Label_1581:
	return 0; // 0x62d Return
	
Label_1579:
	Barter(var_12_object); // 0x62b Func
}


func_165(var_0_object, var_127_object)
{
	var_129_bool = 0; var_130_bool = 0; // 0xa5 PushV
	var_0_object = var_127_object; // 0xa6 TMov
	Face(var_127_object); // 0xa7 Func
	
Label_169:
	var_131_float = 0.5; // 0xa9 PushF
	Sleep(var_131_float, var_130_bool); // 0xaa Func
	var_132_bool = 0; // 0xac PushV
	var_132_bool = 1; // 0xad MovB
	var_133_bool = var_130_bool == 0; // 0xae Not
	if(var_133_bool == 0) goto Label_183; // 0xaf JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0xb0 PushV
	var_135_object = var_0_object; // 0xb1 MovT
	func_1126(var_134_bool, var_135_object); // 0xb2 NEW_2
	var_136_bool = var_134_bool == 0; // 0xb4 Not
	if(var_136_bool == 0) goto Label_183; // 0xb5 JumpB
	var_132_bool = 0; // 0xb6 MovB
	
Label_183:
	if(var_132_bool == 0) goto Label_185; // 0xb7 JumpB
	goto Label_186; // 0xb8 Jump
	
Label_186:
	StopAsync(); // 0xba Func
	return 2; // 0xbc Return
	
Label_185:
	goto Label_169; // 0xb9 Jump
}


func_1320(var_123_string)
{
	var_124_bool = 0; var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_bool = 0; var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_bool = 0; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_bool = 0; var_137_float = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); // 0x528 PushV
	IsExisting3DSound(var_132_bool, var_123_string); // 0x529 Func
	var_140_bool = var_132_bool == 0; // 0x52b Not
	if(var_140_bool == 0) goto Label_1345; // 0x52c JumpB
	var_133_int = 0; // 0x52d MovI
	
Label_1326:
	var_141_int = 1; // 0x52e PushI
	var_142_int = var_133_int + var_141_int; // 0x52f Add
	var_143_int = var_123_string + var_142_int; // 0x530 Add
	IsExisting3DSound(var_134_bool, var_143_int); // 0x531 Func
	var_144_bool = var_134_bool == 0; // 0x533 Not
	if(var_144_bool == 0) goto Label_1334; // 0x534 JumpB
	goto Label_1337; // 0x535 Jump
	
Label_1337:
	var_145_bool = var_133_int == 0; // 0x539 Not
	if(var_145_bool == 0) goto Label_1340; // 0x53a JumpB
	return 16; // 0x53b Return
	
Label_1340:
	irand(var_135_int, var_133_int); // 0x53c Func
	var_146_int = 1; // 0x53e PushI
	var_147_int = var_135_int + var_146_int; // 0x53f Add
	var_123_string = var_123_string + var_147_int; // 0x540 Add2
	
Label_1345:
	Is3DSoundLoaded(var_136_bool, var_123_string); // 0x541 Func
	var_148_bool = var_136_bool; // 0x543 Push
	if(var_148_bool == 0) goto Label_1360; // 0x544 JumpB
	GetEyesHeight(var_137_float); // 0x545 Func
	GetDirection(var_138_cvector); // 0x547 Func
	var_149_int = 50; // 0x549 PushI
	var_139_cvector = var_138_cvector * var_149_int; // 0x54a Mult2
	var_150_float = GetByIndex(var_139_cvector, 1); // 0x54b PushE
	var_150_float = var_150_float + var_137_float; // 0x54c Add2
	SetByIndex(var_139_cvector, 1) = var_150_float; // 0x54d PopE
	PlayGlobalSound(var_123_string, var_139_cvector); // 0x54e Func
	
Label_1360:
	return 16; // 0x550 Return
	
Label_1334:
	var_151_int = 1; // 0x536 PushI
	var_133_int = var_133_int + var_151_int; // 0x537 Add2
	goto Label_1326; // 0x538 Jump
}


func_1448(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5a8 PushV
	self(var_15_object); // 0x5a9 Func
	var_13_object = var_15_object; // 0x5ab Mov
	return 2; // 0x5ac Return
}


func_42(var_100_object)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_string = ""; var_106_object = Obj(); var_107_bool = 0; var_108_bool = 0; var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_string = ""; var_116_object = Obj(); var_117_bool = 0; var_118_bool = 0; var_119_float = 0; var_120_cvector = CVector(0,0,0); // 0x2a PushV
	var_121_bool = var_100_object == 0; // 0x2b NullEq
	if(var_121_bool == 0) goto Label_50; // 0x2c JumpB
	var_122_string = ""; // 0x2d PushV
	var_122_string = "fdie"; // 0x2e MovS
	func_133(var_122_string); // 0x2f NEW_2
	goto Label_132; // 0x31 Jump
	
Label_132:
	return 20; // 0x84 Return
	
Label_50:
	GetPosition(var_111_cvector); // 0x32 ObjFunc
	GetPosition(var_112_cvector); // 0x34 Func
	GetDirection(var_113_cvector); // 0x36 Func
	var_114_cvector = var_112_cvector - var_111_cvector; // 0x38 Sub2
	var_154_float = GetByIndex(var_114_cvector, 0); // 0x39 PushE
	var_155_float = GetByIndex(var_113_cvector, 0); // 0x3a PushE
	var_156_float = var_154_float * var_155_float; // 0x3b Mult
	var_157_float = GetByIndex(var_114_cvector, 2); // 0x3c PushE
	var_158_float = GetByIndex(var_113_cvector, 2); // 0x3d PushE
	var_159_float = var_157_float * var_158_float; // 0x3e Mult
	var_160_int = var_156_float + var_159_float; // 0x3f Add
	var_161_int = 0; // 0x40 PushI
	var_162_bool = var_160_int >= var_161_int; // 0x41 GE
	if(var_162_bool == 0) goto Label_69; // 0x42 JumpB
	var_115_string = "fdie"; // 0x43 MovS
	goto Label_70; // 0x44 Jump
	
Label_70:
	RemoveRTEnvelope(); // 0x46 Func
	SetDeathState(); // 0x48 Func
	Stop(); // 0x4a Func
	StopAsync(); // 0x4c Func
	var_116_object = var_100_object; // 0x4e Mov
	var_163_string = "GetScriptProperty"; // 0x4f PushS
	var_164_int = 2; // 0x50 PushI
	var_165_bool = IsFuncExist(var_100_object, var_163_string, var_164_int); // 0x51 FuncExist
	if(var_165_bool == 0) goto Label_94; // 0x52 JumpB
	var_166_string = "Owner"; // 0x53 PushS
	HasScriptProperty(var_117_bool, var_166_string); // 0x54 ObjFunc
	var_167_bool = var_117_bool; // 0x56 Push
	if(var_167_bool == 0) goto Label_94; // 0x57 JumpB
	var_168_string = "Owner"; // 0x58 PushS
	GetScriptProperty(var_116_object, var_168_string); // 0x59 ObjFunc
	var_169_bool = var_116_object == 0; // 0x5b NullEq
	if(var_169_bool == 0) goto Label_94; // 0x5c JumpB
	var_116_object = var_100_object; // 0x5d Mov
	
Label_94:
	var_170_string = "@GetEyesHeight"; // 0x5e PushS
	var_171_int = 1; // 0x5f PushI
	var_172_bool = IsFuncExist(var_116_object, var_170_string, var_171_int); // 0x60 FuncExist
	if(var_172_bool == 0) goto Label_109; // 0x61 JumpB
	GetEyesHeight(var_119_float); // 0x62 ObjFunc
	var_120_cvector = CVector(0.0, 0.0, 0.0); // 0x64 MovV
	var_173_float = GetByIndex(var_120_cvector, 1); // 0x65 PushE
	var_173_float = var_119_float; // 0x66 Mov
	SetByIndex(var_120_cvector, 1) = var_173_float; // 0x67 PopE
	var_174_string = "head"; // 0x68 PushS
	LookAsync(var_100_object, var_174_string, var_120_cvector); // 0x69 Func
	var_118_bool = 1; // 0x6b MovB
	goto Label_110; // 0x6c Jump
	
Label_110:
	var_175_string = ""; // 0x6e PushV
	var_175_string = var_115_string; // 0x6f Mov
	func_1320(var_175_string); // 0x70 NEW_2
	var_176_string = "all"; // 0x72 PushS
	PlayAnimation(var_176_string, var_115_string); // 0x73 Func
	WaitForAnimEnd(); // 0x75 Func
	var_177_bool = var_118_bool; // 0x77 Push
	if(var_177_bool == 0) goto Label_126; // 0x78 JumpB
	StopAsync(); // 0x79 Func
	var_178_string = "head"; // 0x7b PushS
	UnlookAsync(var_178_string); // 0x7c Func
	
Label_126:
	var_179_string = "all"; // 0x7e PushS
	LockAnimationEnd(var_179_string, var_115_string); // 0x7f Func
	RemoveEnvelope(); // 0x81 Func
	var_116_object = 0; // 0x83 SetNull
	
Label_109:
	var_118_bool = 0; // 0x6d MovB
	
Label_69:
	var_115_string = "bdie"; // 0x45 MovS
}


func_1962(var_365_bool, var_366_object)
{
	var_367_float = 0; var_368_object = Obj(); // 0x7ab PushV
	var_368_object = var_366_object; // 0x7ac Mov
	func_987(var_368_object); // 0x7ad NEW_2
	var_375_float = 40000.0; // 0x7af PushF
	var_365_bool = var_367_float <= var_375_float; // 0x7b0 LE2
	return 0; // 0x7b1 Return
}


func_1194(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); // 0x4aa PushV
	var_33_bool = 0; // 0x4ab PushV
	var_33_bool = 0; // 0x4ac MovB
	var_34_bool = 0; // 0x4ad PushV
	var_34_bool = 0; // 0x4ae MovB
	var_35_object = var_12_object; // 0x4af Push
	if(var_35_object == 0) goto Label_1205; // 0x4b0 JumpB
	var_36_int = 4; // 0x4b1 PushI
	var_37_bool = var_13_int != var_36_int; // 0x4b2 Neq
	if(var_37_bool == 0) goto Label_1205; // 0x4b3 JumpB
	var_34_bool = 1; // 0x4b4 MovB
	
Label_1205:
	if(var_34_bool == 0) goto Label_1210; // 0x4b5 JumpB
	var_38_int = 5; // 0x4b6 PushI
	var_39_bool = var_13_int != var_38_int; // 0x4b7 Neq
	if(var_39_bool == 0) goto Label_1210; // 0x4b8 JumpB
	var_33_bool = 1; // 0x4b9 MovB
	
Label_1210:
	if(var_33_bool == 0) goto Label_1257; // 0x4ba JumpB
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x4bb PushV
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x4bc PushV
	var_43_object = var_12_object; // 0x4bd Mov
	func_980(var_43_object); // 0x4be NEW_2
	var_41_cvector = var_42_cvector; // 0x4bf Mov
	func_1454(var_40_cvector, var_41_cvector); // 0x4c1 NEW_2
	var_24_cvector = var_40_cvector; // 0x4c2 Mov
	CreateVectorVector(var_25_object); // 0x4c4 Func
	var_26_int = 1; // 0x4c6 MovI
	
Label_1223:
	var_53_string = "hit"; // 0x4c7 PushS
	var_54_int = var_53_string + var_26_int; // 0x4c8 Add
	GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector); // 0x4c9 Func
	var_55_bool = var_27_bool == 0; // 0x4cb Not
	if(var_55_bool == 0) goto Label_1230; // 0x4cc JumpB
	goto Label_1239; // 0x4cd Jump
	
Label_1239:
	size(var_30_int); // 0x4d7 ObjFunc
	var_56_int = var_30_int; // 0x4d9 Push
	if(var_56_int == 0) goto Label_1256; // 0x4da JumpB
	irand(var_31_int, var_30_int); // 0x4db Func
	get(var_32_cvector, var_31_int); // 0x4dd ObjFunc
	var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x4df PushV
	var_57_object = var_12_object; // 0x4e0 Mov
	var_58_int = var_13_int; // 0x4e1 Mov
	var_59_float = var_14_float; // 0x4e2 Mov
	var_60_cvector = var_32_cvector; // 0x4e3 Mov
	var_61_cvector = -var_24_cvector; // 0x4e4 Neg2
	func_1262(var_59_float, var_60_cvector, var_61_cvector); // 0x4e5 NEW_2
	return 18; // 0x4e7 Return
	
Label_1256:
	var_25_object = 0; // 0x4e8 SetNull
	
Label_1257:
	var_102_object = Obj(); // 0x4e9 PushV
	var_102_object = var_12_object; // 0x4ea Mov
	func_1150(var_102_object); // 0x4eb NEW_2
	return 18; // 0x4ed Return
	
Label_1230:
	var_103_int = var_29_cvector | var_24_cvector; // 0x4ce Or
	var_104_float = 0.70711; // 0x4cf PushF
	var_105_bool = var_103_int >= var_104_float; // 0x4d0 GE
	if(var_105_bool == 0) goto Label_1236; // 0x4d1 JumpB
	add(var_28_cvector); // 0x4d2 ObjFunc
	
Label_1236:
	var_106_int = 1; // 0x4d4 PushI
	var_26_int = var_26_int + var_106_int; // 0x4d5 Add2
	goto Label_1223; // 0x4d6 Jump
}


func_1454(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x5ae PushV
	var_50_int = var_41_cvector | var_41_cvector; // 0x5af Or
	var_49_float = sqrt(var_50_int); // 0x5b0 Sqrt2
	var_51_float = 0.0; // 0x5b1 PushF
	var_52_bool = var_49_float < var_51_float; // 0x5b2 LT
	if(var_52_bool == 0) goto Label_1462; // 0x5b3 JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5b4 MovV
	return 2; // 0x5b5 Return
	
Label_1462:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x5b6 Div2
	return 2; // 0x5b7 Return
}


func_1582(var_28_int, var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x62e PushV
	var_34_bool = var_28_int > var_29_int; // 0x62f GT
	if(var_34_bool == 0) goto Label_1589; // 0x630 JumpB
	var_35_string = "GenerateMoney: iMin > iMax"; // 0x631 PushS
	Trace(var_35_string); // 0x632 Func
	return 4; // 0x634 Return
	
Label_1589:
	var_32_int = 0; // 0x635 MovI
	var_36_bool = var_28_int != var_29_int; // 0x636 Neq
	if(var_36_bool == 0) goto Label_1596; // 0x637 JumpB
	var_37_int = var_29_int - var_28_int; // 0x638 Sub
	irand(var_32_int, var_37_int); // 0x639 Func
	goto Label_1600; // 0x63b Jump
	
Label_1600:
	var_32_int = var_32_int + var_28_int; // 0x640 Add2
	var_38_int = 0; // 0x641 PushI
	var_39_bool = var_32_int == var_38_int; // 0x642 Eq
	if(var_39_bool == 0) goto Label_1605; // 0x643 JumpB
	return 4; // 0x644 Return
	
Label_1605:
	var_40_int = 0; var_41_string = ""; // 0x645 PushV
	var_41_string = "Money"; // 0x646 MovS
	func_1690(var_40_int, var_41_string); // 0x647 NEW_2
	var_44_int = 0; // 0x649 PushI
	AddItem(var_33_bool, var_40_int, var_44_int, var_32_int); // 0x64a Func
	return 4; // 0x64c Return
	
Label_1596:
	var_45_int = 0; // 0x63c PushI
	var_46_bool = var_28_int == var_45_int; // 0x63d Eq
	if(var_46_bool == 0) goto Label_1600; // 0x63e JumpB
	return 4; // 0x63f Return
}


func_1970(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_float = 0; // 0x7b2 PushV
	var_58_bool = 0; var_59_object = Obj(); // 0x7b3 PushV
	var_59_object = var_51_object; // 0x7b4 Mov
	func_1126(var_58_bool, var_59_object); // 0x7b5 NEW_2
	var_60_bool = var_58_bool == 0; // 0x7b7 Not
	if(var_60_bool == 0) goto Label_1979; // 0x7b8 JumpB
	var_50_bool = 0; // 0x7b9 MovB
	return 6; // 0x7ba Return
	
Label_1979:
	var_61_bool = 0; var_62_object = Obj(); // 0x7bb PushV
	var_62_object = var_51_object; // 0x7bc Mov
	func_995(var_61_bool, var_62_object); // 0x7bd NEW_2
	if(var_61_bool == 0) goto Label_1990; // 0x7bf JumpB
	var_65_string = "reputation"; // 0x7c0 PushS
	GetProperty(var_65_string, var_55_float); // 0x7c1 ObjFunc
	var_66_float = 0.33; // 0x7c3 PushF
	var_50_bool = var_55_float < var_66_float; // 0x7c4 LT2
	return 6; // 0x7c5 Return
	
Label_1990:
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; // 0x7c6 PushV
	var_68_object = var_51_object; // 0x7c7 Mov
	var_69_string = "class"; // 0x7c8 MovS
	func_1000(var_67_bool, var_68_object, var_69_string); // 0x7c9 NEW_2
	var_70_bool = var_67_bool == 0; // 0x7cb Not
	if(var_70_bool == 0) goto Label_1999; // 0x7cc JumpB
	var_50_bool = 0; // 0x7cd MovB
	return 6; // 0x7ce Return
	
Label_1999:
	var_71_string = "class"; // 0x7cf PushS
	GetProperty(var_71_string, var_56_string); // 0x7d0 ObjFunc
	var_72_bool = 0; // 0x7d2 PushV
	var_72_bool = 1; // 0x7d3 MovB
	var_73_bool = 0; // 0x7d4 PushV
	var_73_bool = 1; // 0x7d5 MovB
	var_74_string = "bomber"; // 0x7d6 PushS
	var_75_bool = var_56_string == var_74_string; // 0x7d7 Eq
	if(var_75_bool == 0) goto Label_2013; // 0x7d8 JumpB
	var_76_string = "hunter"; // 0x7d9 PushS
	var_77_bool = var_56_string == var_76_string; // 0x7da Eq
	if(var_77_bool == 0) goto Label_2013; // 0x7db JumpB
	var_73_bool = 0; // 0x7dc MovB
	
Label_2013:
	if(var_73_bool == 0) goto Label_2018; // 0x7dd JumpB
	var_78_string = "grabitel"; // 0x7de PushS
	var_79_bool = var_56_string == var_78_string; // 0x7df Eq
	if(var_79_bool == 0) goto Label_2018; // 0x7e0 JumpB
	var_72_bool = 0; // 0x7e1 MovB
	
Label_2018:
	if(var_72_bool == 0) goto Label_2021; // 0x7e2 JumpB
	var_50_bool = 1; // 0x7e3 MovB
	return 6; // 0x7e4 Return
	
Label_2021:
	var_80_bool = 0; var_81_object = Obj(); var_82_string = ""; // 0x7e5 PushV
	var_81_object = var_51_object; // 0x7e6 Mov
	var_82_string = "disease"; // 0x7e7 MovS
	func_1000(var_80_bool, var_81_object, var_82_string); // 0x7e8 NEW_2
	var_83_bool = var_80_bool == 0; // 0x7ea Not
	if(var_83_bool == 0) goto Label_2030; // 0x7eb JumpB
	var_50_bool = 0; // 0x7ec MovB
	return 6; // 0x7ed Return
	
Label_2030:
	var_84_bool = 0; // 0x7ee PushV
	var_84_bool = 1; // 0x7ef MovB
	var_85_bool = 0; var_86_string = ""; // 0x7f0 PushV
	var_86_string = var_56_string; // 0x7f1 Mov
	func_1361(var_85_bool, var_86_string); // 0x7f2 NEW_2
	if(var_85_bool == 0) goto Label_2041; // 0x7f4 JumpB
	var_124_string = "dog"; // 0x7f5 PushS
	var_125_bool = var_56_string == var_124_string; // 0x7f6 Eq
	if(var_125_bool == 0) goto Label_2041; // 0x7f7 JumpB
	var_84_bool = 0; // 0x7f8 MovB
	
Label_2041:
	if(var_84_bool == 0) goto Label_2048; // 0x7f9 JumpB
	var_126_string = "disease"; // 0x7fa PushS
	GetProperty(var_126_string, var_57_float); // 0x7fb ObjFunc
	var_127_int = 0; // 0x7fd PushI
	var_50_bool = var_57_float > var_127_int; // 0x7fe GT2
	return 6; // 0x7ff Return
	
Label_2048:
	var_50_bool = 0; // 0x800 MovB
	return 6; // 0x801 Return
}


func_436()
{
	StopAsync(); // 0x1b4 Func
	StopGroup0(); // 0x1b6 Func
	Stop(); // 0x1b8 Func
	return 0; // 0x1ba Return
}


func_2104(var_128_object)
{
	var_129_object = Obj(); // 0x839 PushV
	var_129_object = var_128_object; // 0x83a Mov
	func_1941(var_129_object); // 0x83b NEW_2
	return 0; // 0x83d Return
}


func_1464(var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5b8 PushV
	var_28_cvector = var_26_cvector - var_25_cvector; // 0x5b9 Sub2
	var_24_float = var_28_cvector | var_28_cvector; // 0x5ba Or2
	return 2; // 0x5bb Return
}


func_1468(var_284_float, var_285_float, var_286_float)
{
	var_289_bool = var_285_float < var_286_float; // 0x5bd LT
	if(var_289_bool == 0) goto Label_1473; // 0x5be JumpB
	var_284_float = var_285_float; // 0x5bf Mov
	goto Label_1474; // 0x5c0 Jump
	
Label_1474:
	return 0; // 0x5c2 Return
	
Label_1473:
	var_284_float = var_286_float; // 0x5c1 Mov
}


func_189()
{
	StopAsync(); // 0xbd Func
	var_128_int = 100; // 0xbf PushI
	KillTimer(var_128_int); // 0xc0 Func
	StopGroup0(); // 0xc2 Func
	return 0; // 0xc4 Return
}


func_1085(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x43d PushV
	IsDead(var_31_bool); // 0x43e ObjFunc
	var_28_bool = var_31_bool; // 0x440 Mov
	return 2; // 0x441 Return
}


func_2110(var_18_object)
{
	var_19_object = Obj(); // 0x83f PushV
	var_19_object = var_18_object; // 0x840 Mov
	func_1695(var_19_object); // 0x841 NEW_2
	return 0; // 0x843 Return
}


func_960()
{
	StopGroup0(); // 0x3c0 Func
	Stop(); // 0x3c2 Func
	return 0; // 0x3c4 Return
}


func_1090(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x442 PushV
	var_23_bool = var_18_object == 0; // 0x443 NullEq
	if(var_23_bool == 0) goto Label_1095; // 0x444 JumpB
	var_17_bool = 0; // 0x445 MovB
	return 4; // 0x446 Return
	
Label_1095:
	var_24_bool = 0; // 0x447 PushV
	var_24_bool = 0; // 0x448 MovB
	var_25_string = "IsDead"; // 0x449 PushS
	var_26_int = 1; // 0x44a PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x44b FuncExist
	if(var_27_bool == 0) goto Label_1107; // 0x44c JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x44d PushV
	var_29_object = var_18_object; // 0x44e Mov
	func_1085(var_29_object); // 0x44f NEW_2
	if(var_28_bool == 0) goto Label_1107; // 0x451 JumpB
	var_24_bool = 1; // 0x452 MovB
	
Label_1107:
	if(var_24_bool == 0) goto Label_1110; // 0x453 JumpB
	var_17_bool = 0; // 0x454 MovB
	return 4; // 0x455 Return
	
Label_1110:
	GetScene(var_21_object); // 0x456 Func
	var_32_bool = var_21_object == 0; // 0x458 NullEq
	if(var_32_bool == 0) goto Label_1116; // 0x459 JumpB
	var_17_bool = 0; // 0x45a MovB
	return 4; // 0x45b Return
	
Label_1116:
	GetScene(var_22_object); // 0x45c ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x45e Neq
	if(var_33_bool == 0) goto Label_1122; // 0x45f JumpB
	var_17_bool = 0; // 0x460 MovB
	return 4; // 0x461 Return
	
Label_1122:
	var_17_bool = 1; // 0x462 MovB
	return 4; // 0x463 Return
}


func_1475(var_294_float, var_295_float, var_296_float, var_297_float)
{
	var_298_bool = var_295_float < var_296_float; // 0x5c4 LT
	if(var_298_bool == 0) goto Label_1480; // 0x5c5 JumpB
	var_294_float = var_296_float; // 0x5c6 Mov
	return 0; // 0x5c7 Return
	
Label_1480:
	var_299_bool = var_295_float > var_297_float; // 0x5c8 GT
	if(var_299_bool == 0) goto Label_1484; // 0x5c9 JumpB
	var_294_float = var_297_float; // 0x5ca Mov
	return 0; // 0x5cb Return
	
Label_1484:
	var_294_float = var_295_float; // 0x5cc Mov
	return 0; // 0x5cd Return
}


func_452(var_0_object, var_1_object, var_2_bool, var_136_object, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x1c4 PushV
	var_0_object = var_136_object; // 0x1c5 TMov
	var_145_object = Obj(); // 0x1c6 PushV
	var_145_object = var_0_object; // 0x1c7 MovT
	func_1543(var_145_object); // 0x1c8 NEW_2
	func_1552(); // 0x1cb NEW_2
	Face(var_0_object); // 0x1cd Func
	var_156_bool = var_137_bool; // 0x1cf Push
	if(var_156_bool == 0) goto Label_471; // 0x1d0 JumpB
	var_157_string = "all"; // 0x1d1 PushS
	var_158_string = "attack_on"; // 0x1d2 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x1d3 Func
	WaitForAnimEnd(); // 0x1d5 Func
	
Label_471:
	var_159_string = "all"; // 0x1d7 PushS
	var_160_string = "attack_on"; // 0x1d8 PushS
	LockAnimationEnd(var_159_string, var_160_string); // 0x1d9 Func
	var_161_bool = 1; // 0x1db PushB
	SetAttackState(var_161_bool); // 0x1dc Func
	
Label_478:
	var_162_bool = 0; var_163_object = Obj(); // 0x1de PushV
	var_163_object = var_0_object; // 0x1df MovT
	func_1126(var_162_bool, var_163_object); // 0x1e0 NEW_2
	if(var_162_bool == 0) goto Label_584; // 0x1e2 JumpB
	CanSee(var_144_bool, var_0_object); // 0x1e3 Func
	var_164_bool = var_144_bool; // 0x1e5 Push
	if(var_164_bool == 0) goto Label_495; // 0x1e6 JumpB
	var_165_object = Obj(); // 0x1e7 PushV
	var_165_object = var_0_object; // 0x1e8 MovT
	func_1543(var_165_object); // 0x1e9 NEW_2
	func_632(var_144_bool); // 0x1ec NEW_2
	goto Label_574; // 0x1ee Jump
	
Label_574:
	var_319_bool = var_1_object != 0; // 0x23e NullNeq
	if(var_319_bool == 0) goto Label_580; // 0x23f JumpB
	func_627(var_143_bool, var_144_bool); // 0x241 NEW_2
	goto Label_583; // 0x243 Jump
	
Label_583:
	goto Label_478; // 0x247 Jump
	
Label_580:
	var_320_int = 2; // 0x244 PushI
	Sleep(var_320_int); // 0x245 Func
	
Label_495:
	var_321_object = Obj(); // 0x1ef PushV
	var_321_object = var_0_object; // 0x1f0 MovT
	func_1276(); // 0x1f1 NEW_2
	var_2_bool = 1; // 0x1f3 TMovB
	var_330_string = "all"; // 0x1f4 PushS
	var_331_string = "hunt"; // 0x1f5 PushS
	PlayAnimation(var_330_string, var_331_string); // 0x1f6 Func
	WaitForAnimEnd(var_143_bool); // 0x1f8 Func
	var_332_bool = var_143_bool == 0; // 0x1fa Not
	if(var_332_bool == 0) goto Label_518; // 0x1fb JumpB
	var_333_bool = var_1_object != 0; // 0x1fc NullNeq
	if(var_333_bool == 0) goto Label_513; // 0x1fd JumpB
	func_627(var_143_bool, var_144_bool); // 0x1ff NEW_2
	
Label_513:
	var_334_string = "all"; // 0x201 PushS
	var_335_string = "attack_on"; // 0x202 PushS
	LockAnimationEnd(var_334_string, var_335_string); // 0x203 Func
	goto Label_478; // 0x205 Jump
	
Label_518:
	var_336_bool = 0; var_337_object = Obj(); // 0x206 PushV
	var_337_object = var_0_object; // 0x207 MovT
	func_1126(var_336_bool, var_337_object); // 0x208 NEW_2
	var_338_bool = var_336_bool == 0; // 0x20a Not
	if(var_338_bool == 0) goto Label_525; // 0x20b JumpB
	goto Label_584; // 0x20c Jump
	
Label_584:
	var_339_bool = 0; // 0x248 PushB
	SetAttackState(var_339_bool); // 0x249 Func
	StopAsync(); // 0x24b Func
	var_340_string = "all"; // 0x24d PushS
	var_341_string = "attack_off"; // 0x24e PushS
	PlayAnimation(var_340_string, var_341_string); // 0x24f Func
	WaitForAnimEnd(); // 0x251 Func
	return 4; // 0x253 Return
	
Label_525:
	CanSee(var_144_bool, var_0_object); // 0x20d Func
	var_342_bool = var_144_bool; // 0x20f Push
	if(var_342_bool == 0) goto Label_536; // 0x210 JumpB
	var_2_bool = 0; // 0x211 TMovB
	Face(var_0_object); // 0x212 Func
	func_632(var_144_bool); // 0x215 NEW_2
	goto Label_574; // 0x217 Jump
	
Label_536:
	var_343_string = "all"; // 0x218 PushS
	var_344_string = "attack_on"; // 0x219 PushS
	LockAnimationEnd(var_343_string, var_344_string); // 0x21a Func
	var_345_int = 3; // 0x21c PushI
	Sleep(var_345_int, var_143_bool); // 0x21d Func
	var_346_bool = var_143_bool == 0; // 0x21f Not
	if(var_346_bool == 0) goto Label_555; // 0x220 JumpB
	var_347_bool = var_1_object != 0; // 0x221 NullNeq
	if(var_347_bool == 0) goto Label_550; // 0x222 JumpB
	func_627(var_143_bool, var_144_bool); // 0x224 NEW_2
	
Label_550:
	var_348_string = "all"; // 0x226 PushS
	var_349_string = "attack_on"; // 0x227 PushS
	LockAnimationEnd(var_348_string, var_349_string); // 0x228 Func
	goto Label_478; // 0x22a Jump
	
Label_555:
	var_350_bool = 0; var_351_object = Obj(); // 0x22b PushV
	var_351_object = var_0_object; // 0x22c MovT
	func_1126(var_350_bool, var_351_object); // 0x22d NEW_2
	var_352_bool = var_350_bool == 0; // 0x22f Not
	if(var_352_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_584; // 0x231 Jump
	
Label_562:
	var_2_bool = 0; // 0x232 TMovB
	CanSee(var_144_bool, var_0_object); // 0x233 Func
	var_353_bool = var_144_bool; // 0x235 Push
	if(var_353_bool == 0) goto Label_573; // 0x236 JumpB
	Face(var_0_object); // 0x237 Func
	func_632(var_144_bool); // 0x23a NEW_2
	goto Label_574; // 0x23c Jump
	
Label_573:
	goto Label_584; // 0x23d Jump
}


func_965()
{
	return 0; // 0x3c5 Return
}


func_966(var_274_string, var_275_int)
{
	var_276_int = 2; // 0x3c7 PushI
	var_277_bool = var_275_int == var_276_int; // 0x3c8 Eq
	if(var_277_bool == 0) goto Label_973; // 0x3c9 JumpB
	var_274_string = "fire"; // 0x3ca MovS
	return 0; // 0x3cb Return
	
Label_973:
	var_278_int = 1; // 0x3cd PushI
	var_279_bool = var_275_int == var_278_int; // 0x3ce Eq
	if(var_279_bool == 0) goto Label_978; // 0x3cf JumpB
	var_274_string = "bullet"; // 0x3d0 MovS
	return 0; // 0x3d1 Return
	
Label_978:
	var_274_string = "phys"; // 0x3d2 MovS
	return 0; // 0x3d3 Return
}


func_1613(var_85_string)
{
	var_86_object = Obj(); var_87_int = 0; var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; var_91_bool = 0; // 0x64d PushV
	CreateInvItem(var_89_object); // 0x64e Func
	SetItemName(var_85_string); // 0x650 ObjFunc
	var_92_string = "Organ"; // 0x652 PushS
	var_93_int = 1; // 0x653 PushI
	SetProperty(var_92_string, var_93_int); // 0x654 ObjFunc
	GetItemID(var_90_int); // 0x656 ObjFunc
	var_94_int = 0; // 0x658 PushI
	var_95_int = 1; // 0x659 PushI
	AddItem(var_91_bool, var_89_object, var_94_int, var_95_int); // 0x65a Func
	return 6; // 0x65c Return
}


func_1486(var_55_bool, var_56_int, var_57_int)
{
	var_58_int = 0; var_59_int = 0; // 0x5ce PushV
	irand(var_59_int, var_57_int); // 0x5cf Func
	var_55_bool = var_59_int < var_56_int; // 0x5d1 LT2
	return 2; // 0x5d2 Return
}


func_1361(var_85_bool, var_86_string)
{
	var_85_bool = 1; // 0x552 MovB
	var_87_bool = 0; // 0x553 PushV
	var_87_bool = 1; // 0x554 MovB
	var_88_bool = 0; // 0x555 PushV
	var_88_bool = 1; // 0x556 MovB
	var_89_bool = 0; // 0x557 PushV
	var_89_bool = 1; // 0x558 MovB
	var_90_bool = 0; // 0x559 PushV
	var_90_bool = 1; // 0x55a MovB
	var_91_bool = 0; // 0x55b PushV
	var_91_bool = 1; // 0x55c MovB
	var_92_bool = 0; // 0x55d PushV
	var_92_bool = 1; // 0x55e MovB
	var_93_bool = 0; // 0x55f PushV
	var_93_bool = 1; // 0x560 MovB
	var_94_bool = 0; // 0x561 PushV
	var_94_bool = 1; // 0x562 MovB
	var_95_bool = 0; // 0x563 PushV
	var_95_bool = 1; // 0x564 MovB
	var_96_bool = 0; // 0x565 PushV
	var_96_bool = 1; // 0x566 MovB
	var_97_bool = 0; // 0x567 PushV
	var_97_bool = 1; // 0x568 MovB
	var_98_string = "woman"; // 0x569 PushS
	var_99_bool = var_86_string == var_98_string; // 0x56a Eq
	if(var_99_bool == 0) goto Label_1392; // 0x56b JumpB
	var_100_string = "worker"; // 0x56c PushS
	var_101_bool = var_86_string == var_100_string; // 0x56d Eq
	if(var_101_bool == 0) goto Label_1392; // 0x56e JumpB
	var_97_bool = 0; // 0x56f MovB
	
Label_1392:
	if(var_97_bool == 0) goto Label_1397; // 0x570 JumpB
	var_102_string = "butcher"; // 0x571 PushS
	var_103_bool = var_86_string == var_102_string; // 0x572 Eq
	if(var_103_bool == 0) goto Label_1397; // 0x573 JumpB
	var_96_bool = 0; // 0x574 MovB
	
Label_1397:
	if(var_96_bool == 0) goto Label_1402; // 0x575 JumpB
	var_104_string = "wasted_girl"; // 0x576 PushS
	var_105_bool = var_86_string == var_104_string; // 0x577 Eq
	if(var_105_bool == 0) goto Label_1402; // 0x578 JumpB
	var_95_bool = 0; // 0x579 MovB
	
Label_1402:
	if(var_95_bool == 0) goto Label_1407; // 0x57a JumpB
	var_106_string = "boy"; // 0x57b PushS
	var_107_bool = var_86_string == var_106_string; // 0x57c Eq
	if(var_107_bool == 0) goto Label_1407; // 0x57d JumpB
	var_94_bool = 0; // 0x57e MovB
	
Label_1407:
	if(var_94_bool == 0) goto Label_1412; // 0x57f JumpB
	var_108_string = "vaxxabitka"; // 0x580 PushS
	var_109_bool = var_86_string == var_108_string; // 0x581 Eq
	if(var_109_bool == 0) goto Label_1412; // 0x582 JumpB
	var_93_bool = 0; // 0x583 MovB
	
Label_1412:
	if(var_93_bool == 0) goto Label_1417; // 0x584 JumpB
	var_110_string = "unosha"; // 0x585 PushS
	var_111_bool = var_86_string == var_110_string; // 0x586 Eq
	if(var_111_bool == 0) goto Label_1417; // 0x587 JumpB
	var_92_bool = 0; // 0x588 MovB
	
Label_1417:
	if(var_92_bool == 0) goto Label_1422; // 0x589 JumpB
	var_112_string = "wasted_male"; // 0x58a PushS
	var_113_bool = var_86_string == var_112_string; // 0x58b Eq
	if(var_113_bool == 0) goto Label_1422; // 0x58c JumpB
	var_91_bool = 0; // 0x58d MovB
	
Label_1422:
	if(var_91_bool == 0) goto Label_1427; // 0x58e JumpB
	var_114_string = "alkash"; // 0x58f PushS
	var_115_bool = var_86_string == var_114_string; // 0x590 Eq
	if(var_115_bool == 0) goto Label_1427; // 0x591 JumpB
	var_90_bool = 0; // 0x592 MovB
	
Label_1427:
	if(var_90_bool == 0) goto Label_1432; // 0x593 JumpB
	var_116_string = "dohodyaga"; // 0x594 PushS
	var_117_bool = var_86_string == var_116_string; // 0x595 Eq
	if(var_117_bool == 0) goto Label_1432; // 0x596 JumpB
	var_89_bool = 0; // 0x597 MovB
	
Label_1432:
	if(var_89_bool == 0) goto Label_1437; // 0x598 JumpB
	var_118_string = "vaxxabit"; // 0x599 PushS
	var_119_bool = var_86_string == var_118_string; // 0x59a Eq
	if(var_119_bool == 0) goto Label_1437; // 0x59b JumpB
	var_88_bool = 0; // 0x59c MovB
	
Label_1437:
	if(var_88_bool == 0) goto Label_1442; // 0x59d JumpB
	var_120_string = "nudegirl"; // 0x59e PushS
	var_121_bool = var_86_string == var_120_string; // 0x59f Eq
	if(var_121_bool == 0) goto Label_1442; // 0x5a0 JumpB
	var_87_bool = 0; // 0x5a1 MovB
	
Label_1442:
	if(var_87_bool == 0) goto Label_1447; // 0x5a2 JumpB
	var_122_string = "morlok"; // 0x5a3 PushS
	var_123_bool = var_86_string == var_122_string; // 0x5a4 Eq
	if(var_123_bool == 0) goto Label_1447; // 0x5a5 JumpB
	var_85_bool = 0; // 0x5a6 MovB
	
Label_1447:
	return 0; // 0x5a7 Return
}


func_1491(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x5d3 PushV
	CreateObjectSet(var_11_object); // 0x5d4 Func
	var_9_object = var_11_object; // 0x5d6 Mov
	return 2; // 0x5d7 Return
}


func_980(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x3d4 PushV
	GetPosition(var_46_cvector); // 0x3d5 Func
	GetPosition(var_47_cvector); // 0x3d7 ObjFunc
	var_42_cvector = var_47_cvector - var_46_cvector; // 0x3d9 Sub2
	return 4; // 0x3da Return
}


func_1752(var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = ""; var_21_string = ""; // 0x6d8 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x6d9 PushV
	var_23_object = var_18_object; // 0x6da Mov
	var_24_string = "class"; // 0x6db MovS
	func_1000(var_22_bool, var_23_object, var_24_string); // 0x6dc NEW_2
	var_31_bool = var_22_bool == 0; // 0x6de Not
	if(var_31_bool == 0) goto Label_1762; // 0x6df JumpB
	var_17_bool = 0; // 0x6e0 MovB
	return 2; // 0x6e1 Return
	
Label_1762:
	var_32_string = "class"; // 0x6e2 PushS
	GetProperty(var_32_string, var_21_string); // 0x6e3 ObjFunc
	var_33_bool = 0; // 0x6e5 PushV
	var_33_bool = 1; // 0x6e6 MovB
	var_34_bool = 0; // 0x6e7 PushV
	var_34_bool = 1; // 0x6e8 MovB
	var_35_bool = 0; // 0x6e9 PushV
	var_35_bool = 1; // 0x6ea MovB
	var_36_bool = 0; // 0x6eb PushV
	var_36_bool = 1; // 0x6ec MovB
	var_37_bool = 0; // 0x6ed PushV
	var_37_bool = 1; // 0x6ee MovB
	var_38_bool = 0; // 0x6ef PushV
	var_38_bool = 1; // 0x6f0 MovB
	var_39_bool = 0; // 0x6f1 PushV
	var_39_bool = 1; // 0x6f2 MovB
	var_40_bool = 0; // 0x6f3 PushV
	var_40_bool = 1; // 0x6f4 MovB
	var_41_bool = 0; // 0x6f5 PushV
	var_41_bool = 1; // 0x6f6 MovB
	var_42_bool = 0; // 0x6f7 PushV
	var_42_bool = 1; // 0x6f8 MovB
	var_43_string = "patrol"; // 0x6f9 PushS
	var_44_bool = var_21_string == var_43_string; // 0x6fa Eq
	if(var_44_bool == 0) goto Label_1792; // 0x6fb JumpB
	var_45_string = "sanitar"; // 0x6fc PushS
	var_46_bool = var_21_string == var_45_string; // 0x6fd Eq
	if(var_46_bool == 0) goto Label_1792; // 0x6fe JumpB
	var_42_bool = 0; // 0x6ff MovB
	
Label_1792:
	if(var_42_bool == 0) goto Label_1797; // 0x700 JumpB
	var_47_string = "soldier"; // 0x701 PushS
	var_48_bool = var_21_string == var_47_string; // 0x702 Eq
	if(var_48_bool == 0) goto Label_1797; // 0x703 JumpB
	var_41_bool = 0; // 0x704 MovB
	
Label_1797:
	if(var_41_bool == 0) goto Label_1802; // 0x705 JumpB
	var_49_string = "woman"; // 0x706 PushS
	var_50_bool = var_21_string == var_49_string; // 0x707 Eq
	if(var_50_bool == 0) goto Label_1802; // 0x708 JumpB
	var_40_bool = 0; // 0x709 MovB
	
Label_1802:
	if(var_40_bool == 0) goto Label_1807; // 0x70a JumpB
	var_51_string = "wasted_girl"; // 0x70b PushS
	var_52_bool = var_21_string == var_51_string; // 0x70c Eq
	if(var_52_bool == 0) goto Label_1807; // 0x70d JumpB
	var_39_bool = 0; // 0x70e MovB
	
Label_1807:
	if(var_39_bool == 0) goto Label_1812; // 0x70f JumpB
	var_53_string = "vaxxabitka"; // 0x710 PushS
	var_54_bool = var_21_string == var_53_string; // 0x711 Eq
	if(var_54_bool == 0) goto Label_1812; // 0x712 JumpB
	var_38_bool = 0; // 0x713 MovB
	
Label_1812:
	if(var_38_bool == 0) goto Label_1817; // 0x714 JumpB
	var_55_string = "vaxxabit"; // 0x715 PushS
	var_56_bool = var_21_string == var_55_string; // 0x716 Eq
	if(var_56_bool == 0) goto Label_1817; // 0x717 JumpB
	var_37_bool = 0; // 0x718 MovB
	
Label_1817:
	if(var_37_bool == 0) goto Label_1822; // 0x719 JumpB
	var_57_string = "little_girl"; // 0x71a PushS
	var_58_bool = var_21_string == var_57_string; // 0x71b Eq
	if(var_58_bool == 0) goto Label_1822; // 0x71c JumpB
	var_36_bool = 0; // 0x71d MovB
	
Label_1822:
	if(var_36_bool == 0) goto Label_1827; // 0x71e JumpB
	var_59_string = "girl"; // 0x71f PushS
	var_60_bool = var_21_string == var_59_string; // 0x720 Eq
	if(var_60_bool == 0) goto Label_1827; // 0x721 JumpB
	var_35_bool = 0; // 0x722 MovB
	
Label_1827:
	if(var_35_bool == 0) goto Label_1832; // 0x723 JumpB
	var_61_string = "dohodyaga"; // 0x724 PushS
	var_62_bool = var_21_string == var_61_string; // 0x725 Eq
	if(var_62_bool == 0) goto Label_1832; // 0x726 JumpB
	var_34_bool = 0; // 0x727 MovB
	
Label_1832:
	if(var_34_bool == 0) goto Label_1837; // 0x728 JumpB
	var_63_string = "nudegirl"; // 0x729 PushS
	var_64_bool = var_21_string == var_63_string; // 0x72a Eq
	if(var_64_bool == 0) goto Label_1837; // 0x72b JumpB
	var_33_bool = 0; // 0x72c MovB
	
Label_1837:
	if(var_33_bool == 0) goto Label_1840; // 0x72d JumpB
	var_17_bool = 1; // 0x72e MovB
	return 2; // 0x72f Return
	
Label_1840:
	var_65_bool = var_19_bool; // 0x730 Push
	if(var_65_bool == 0) goto Label_1844; // 0x731 JumpB
	var_17_bool = 0; // 0x732 MovB
	return 2; // 0x733 Return
	
Label_1844:
	var_17_bool = 1; // 0x734 MovB
	var_66_bool = 0; // 0x735 PushV
	var_66_bool = 1; // 0x736 MovB
	var_67_bool = 0; // 0x737 PushV
	var_67_bool = 1; // 0x738 MovB
	var_68_bool = 0; // 0x739 PushV
	var_68_bool = 1; // 0x73a MovB
	var_69_bool = 0; // 0x73b PushV
	var_69_bool = 1; // 0x73c MovB
	var_70_bool = 0; // 0x73d PushV
	var_70_bool = 1; // 0x73e MovB
	var_71_string = "worker"; // 0x73f PushS
	var_72_bool = var_21_string == var_71_string; // 0x740 Eq
	if(var_72_bool == 0) goto Label_1862; // 0x741 JumpB
	var_73_string = "butcher"; // 0x742 PushS
	var_74_bool = var_21_string == var_73_string; // 0x743 Eq
	if(var_74_bool == 0) goto Label_1862; // 0x744 JumpB
	var_70_bool = 0; // 0x745 MovB
	
Label_1862:
	if(var_70_bool == 0) goto Label_1867; // 0x746 JumpB
	var_75_string = "boy"; // 0x747 PushS
	var_76_bool = var_21_string == var_75_string; // 0x748 Eq
	if(var_76_bool == 0) goto Label_1867; // 0x749 JumpB
	var_69_bool = 0; // 0x74a MovB
	
Label_1867:
	if(var_69_bool == 0) goto Label_1872; // 0x74b JumpB
	var_77_string = "unosha"; // 0x74c PushS
	var_78_bool = var_21_string == var_77_string; // 0x74d Eq
	if(var_78_bool == 0) goto Label_1872; // 0x74e JumpB
	var_68_bool = 0; // 0x74f MovB
	
Label_1872:
	if(var_68_bool == 0) goto Label_1877; // 0x750 JumpB
	var_79_string = "wasted_male"; // 0x751 PushS
	var_80_bool = var_21_string == var_79_string; // 0x752 Eq
	if(var_80_bool == 0) goto Label_1877; // 0x753 JumpB
	var_67_bool = 0; // 0x754 MovB
	
Label_1877:
	if(var_67_bool == 0) goto Label_1882; // 0x755 JumpB
	var_81_string = "alkash"; // 0x756 PushS
	var_82_bool = var_21_string == var_81_string; // 0x757 Eq
	if(var_82_bool == 0) goto Label_1882; // 0x758 JumpB
	var_66_bool = 0; // 0x759 MovB
	
Label_1882:
	if(var_66_bool == 0) goto Label_1887; // 0x75a JumpB
	var_83_string = "morlok"; // 0x75b PushS
	var_84_bool = var_21_string == var_83_string; // 0x75c Eq
	if(var_84_bool == 0) goto Label_1887; // 0x75d JumpB
	var_17_bool = 0; // 0x75e MovB
	
Label_1887:
	return 2; // 0x75f Return
}


func_1497(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0); // 0x5da PushE
	var_211_float = GetByIndex(var_209_cvector, 0); // 0x5db PushE
	var_212_float = var_210_float * var_211_float; // 0x5dc Mult
	var_213_float = GetByIndex(var_208_cvector, 2); // 0x5dd PushE
	var_214_float = GetByIndex(var_209_cvector, 2); // 0x5de PushE
	var_215_float = var_213_float * var_214_float; // 0x5df Mult
	var_207_float = var_212_float + var_215_float; // 0x5e0 Add2
	return 0; // 0x5e1 Return
}


func_987(var_367_float)
{
	var_369_cvector = CVector(0,0,0); var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); // 0x3db PushV
	GetPosition(var_372_cvector); // 0x3dc Func
	GetPosition(var_373_cvector); // 0x3de ObjFunc
	var_374_cvector = var_373_cvector - var_372_cvector; // 0x3e0 Sub2
	var_367_float = var_374_cvector | var_374_cvector; // 0x3e1 Or2
	return 6; // 0x3e2 Return
}


func_1630()
{
	var_79_int = 0; // 0x65e PushV
	func_1563(var_79_int); // 0x65f NEW_2
	var_83_int = 1; // 0x661 PushI
	var_84_bool = var_79_int != var_83_int; // 0x662 Neq
	if(var_84_bool == 0) goto Label_1637; // 0x663 JumpB
	return 0; // 0x664 Return
	
Label_1637:
	var_85_string = ""; // 0x665 PushV
	var_85_string = "liver"; // 0x666 MovS
	func_1613(var_85_string); // 0x667 NEW_2
	var_96_string = ""; // 0x669 PushV
	var_96_string = "kidney"; // 0x66a MovS
	func_1613(var_96_string); // 0x66b NEW_2
	var_97_string = ""; // 0x66d PushV
	var_97_string = "heart"; // 0x66e MovS
	func_1613(var_97_string); // 0x66f NEW_2
	var_98_string = ""; // 0x671 PushV
	var_98_string = "blood"; // 0x672 MovS
	func_1613(var_98_string); // 0x673 NEW_2
	return 0; // 0x675 Return
}


func_1888()
{
	var_8_object = GlobalVars[0]; // 0x760 PushGE
	var_9_object = Obj(); // 0x761 PushV
	func_1491(var_9_object); // 0x762 NEW_2
	var_8_object = var_9_object; // 0x763 Mov
	GlobalVars[0] = var_8_object; // 0x765 PopGE
	return 0; // 0x766 Return
}


func_1506(var_216_float, var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0); // 0x5e3 PushE
	var_219_float = GetByIndex(var_217_cvector, 0); // 0x5e4 PushE
	var_220_float = var_218_float * var_219_float; // 0x5e5 Mult
	var_221_float = GetByIndex(var_217_cvector, 2); // 0x5e6 PushE
	var_222_float = GetByIndex(var_217_cvector, 2); // 0x5e7 PushE
	var_223_float = var_221_float * var_222_float; // 0x5e8 Mult
	var_224_int = var_220_float + var_223_float; // 0x5e9 Add
	var_216_float = sqrt(var_224_int); // 0x5ea Sqrt2
	return 0; // 0x5eb Return
}


func_995(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x3e3 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x3e4 Func
	var_9_bool = var_12_bool; // 0x3e6 Mov
	return 2; // 0x3e7 Return
}


func_1126(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x466 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x467 PushV
	var_18_object = var_14_object; // 0x468 Mov
	func_1090(var_17_bool, var_18_object); // 0x469 NEW_2
	var_34_bool = var_17_bool == 0; // 0x46b Not
	if(var_34_bool == 0) goto Label_1135; // 0x46c JumpB
	var_13_bool = 0; // 0x46d MovB
	return 2; // 0x46e Return
	
Label_1135:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x46f PushV
	var_36_object = var_14_object; // 0x470 Mov
	var_37_string = "noaccess"; // 0x471 MovS
	func_1000(var_35_bool, var_36_object, var_37_string); // 0x472 NEW_2
	var_44_bool = var_35_bool == 0; // 0x474 Not
	if(var_44_bool == 0) goto Label_1144; // 0x475 JumpB
	var_13_bool = 1; // 0x476 MovB
	return 2; // 0x477 Return
	
Label_1144:
	var_45_string = "noaccess"; // 0x478 PushS
	GetProperty(var_45_string, var_16_int); // 0x479 ObjFunc
	var_46_int = 0; // 0x47b PushI
	var_13_bool = var_16_int == var_46_int; // 0x47c Eq2
	return 2; // 0x47d Return
}


func_1895(var_134_object, var_135_bool)
{
	var_136_object = Obj(); var_137_bool = 0; // 0x768 PushV
	var_136_object = var_134_object; // 0x769 Mov
	var_137_bool = var_135_bool; // 0x76a Mov
	TaskCall(3); // 0x76b TaskCall
	func_452(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool); // 0x76c NEW_2
	TaskReturn(); // 0x76d TaskReturn
	ResetAAS(); // 0x76f Func
	return 0; // 0x771 Return
}


func_1000(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x3e8 PushV
	var_40_string = "HasProperty"; // 0x3e9 PushS
	var_41_int = 2; // 0x3ea PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x3eb FuncExist
	var_43_bool = var_42_bool == 0; // 0x3ec Not
	if(var_43_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_35_bool = 0; // 0x3ee MovB
	return 2; // 0x3ef Return
	
Label_1008:
	HasProperty(var_37_string, var_39_bool); // 0x3f0 ObjFunc
	var_35_bool = var_39_bool; // 0x3f2 Mov
	return 2; // 0x3f3 Return
}


func_1516(var_204_float, var_205_cvector, var_206_cvector)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x5ed PushV
	var_208_cvector = var_205_cvector; // 0x5ee Mov
	var_209_cvector = var_206_cvector; // 0x5ef Mov
	func_1497(var_207_float, var_208_cvector, var_209_cvector); // 0x5f0 NEW_2
	var_216_float = 0; var_217_cvector = CVector(0,0,0); // 0x5f2 PushV
	var_217_cvector = var_205_cvector; // 0x5f3 Mov
	func_1506(var_216_float, var_217_cvector); // 0x5f4 NEW_2
	var_225_float = 0; var_226_cvector = CVector(0,0,0); // 0x5f6 PushV
	var_226_cvector = var_206_cvector; // 0x5f7 Mov
	func_1506(var_225_float, var_226_cvector); // 0x5f8 NEW_2
	var_227_float = var_216_float * var_225_float; // 0x5fa Mult
	var_204_float = var_207_float / var_207_float; // 0x5fb Div2
	return 0; // 0x5fc Return
}


func_876(var_0_object, var_1_object)
{
	var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x36c PushV
	GetPFPosition(var_19_object); // 0x36d Func
	GetDirection(var_0_object); // 0x36f Func
	
Label_881:
	func_965(); // 0x372 NEW_2
	var_20_int = 10; // 0x374 PushI
	irand(var_16_int, var_20_int); // 0x375 Func
	var_21_int = 5; // 0x377 PushI
	var_22_int = var_16_int + var_21_int; // 0x378 Add
	Sleep(var_22_int, var_17_bool); // 0x379 Func
	var_23_bool = var_17_bool; // 0x37b Push
	if(var_23_bool == 0) goto Label_897; // 0x37c JumpB
	func_798(); // 0x37e NEW_2
	goto Label_958; // 0x380 Jump
	
Label_958:
	goto Label_881; // 0x3be Jump
	
Label_897:
	func_965(); // 0x382 NEW_2
	GetPFPosition(var_18_cvector); // 0x384 Func
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x386 PushV
	var_25_cvector = var_1_object; // 0x387 MovT
	var_26_cvector = var_18_cvector; // 0x388 Mov
	func_1464(var_24_float, var_25_cvector, var_26_cvector); // 0x389 NEW_2
	var_29_int = 40000; // 0x38b PushI
	var_30_bool = var_24_float > var_29_int; // 0x38c GT
	if(var_30_bool == 0) goto Label_944; // 0x38d JumpB
	FindPathTo(var_19_object, var_19_object); // 0x38e Func
	var_31_bool = var_19_object != 0; // 0x390 NullNeq
	if(var_31_bool == 0) goto Label_939; // 0x391 JumpB
	RotatePath(var_19_object, var_17_bool); // 0x392 Func
	var_32_bool = var_17_bool == 0; // 0x394 Not
	if(var_32_bool == 0) goto Label_919; // 0x395 JumpB
	goto Label_957; // 0x396 Jump
	
Label_957:
	goto Label_897; // 0x3bd Jump
	
Label_919:
	var_33_bool = 0; // 0x397 PushB
	FollowPath(var_19_object, var_33_bool, var_17_bool); // 0x398 Func
	var_34_bool = var_17_bool == 0; // 0x39a Not
	if(var_34_bool == 0) goto Label_925; // 0x39b JumpB
	goto Label_957; // 0x39c Jump
	
Label_925:
	var_35_float = GetByIndex(var_0_object, 0); // 0x39d PushE
	var_36_float = GetByIndex(var_0_object, 2); // 0x39e PushE
	Rotate(var_35_float, var_36_float, var_17_bool); // 0x39f Func
	var_37_bool = var_17_bool == 0; // 0x3a1 Not
	if(var_37_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_957; // 0x3a3 Jump
	
Label_932:
	WaitForAnimEnd(var_17_bool); // 0x3a4 Func
	var_38_bool = var_17_bool == 0; // 0x3a6 Not
	if(var_38_bool == 0) goto Label_937; // 0x3a7 JumpB
	goto Label_957; // 0x3a8 Jump
	
Label_937:
	goto Label_958; // 0x3a9 Jump
	
Label_939:
	var_39_int = 1; // 0x3ab PushI
	Sleep(var_39_int); // 0x3ac Func
	var_19_object = 0; // 0x3ae SetNull
	goto Label_957; // 0x3af Jump
	
Label_944:
	var_40_float = GetByIndex(var_0_object, 0); // 0x3b0 PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x3b1 PushE
	Rotate(var_40_float, var_41_float, var_17_bool); // 0x3b2 Func
	var_42_bool = var_17_bool == 0; // 0x3b4 Not
	if(var_42_bool == 0) goto Label_951; // 0x3b5 JumpB
	goto Label_957; // 0x3b6 Jump
	
Label_951:
	WaitForAnimEnd(var_17_bool); // 0x3b7 Func
	var_43_bool = var_17_bool == 0; // 0x3b9 Not
	if(var_43_bool == 0) goto Label_956; // 0x3ba JumpB
	goto Label_957; // 0x3bb Jump
	
Label_956:
	goto Label_958; // 0x3bc Jump
}


func_1262(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x4ee PushV
	GetScene(var_21_object); // 0x4ef Func
	var_23_string = "scripted"; // 0x4f1 PushS
	var_24_string = "blood_dir.xml"; // 0x4f2 PushS
	AddActorByType(var_22_object, var_23_string, var_21_object, var_17_cvector, var_18_cvector, var_24_string); // 0x4f3 Func
	var_25_object = Obj(); // 0x4f5 PushV
	var_25_object = var_14_object; // 0x4f6 Mov
	func_1150(var_25_object); // 0x4f7 NEW_2
	return 4; // 0x4f9 Return
}


func_1906(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x772 PushV
	var_130_bool = var_127_object == 0; // 0x773 NullEq
	if(var_130_bool == 0) goto Label_1910; // 0x774 JumpB
	return 2; // 0x775 Return
	
Label_1910:
	var_131_object = GlobalVars[0]; // 0x776 PushGE
	in(var_129_bool, var_127_object); // 0x777 ObjFunc
	var_132_bool = var_129_bool == 0; // 0x779 Not
	if(var_132_bool == 0) goto Label_1918; // 0x77a JumpB
	var_133_object = GlobalVars[0]; // 0x77b PushGE
	add(var_127_object); // 0x77c ObjFunc
	
Label_1918:
	var_134_bool = 0; var_135_object = Obj(); // 0x77e PushV
	var_135_object = var_127_object; // 0x77f Mov
	func_995(var_134_bool, var_135_object); // 0x780 NEW_2
	if(var_134_bool == 0) goto Label_1929; // 0x782 JumpB
	var_138_object = Obj(); // 0x783 PushV
	func_1448(var_138_object); // 0x784 NEW_2
	var_141_float = -0.07; // 0x786 PushF
	ReportReputationChange(var_127_object, var_138_object, var_141_float); // 0x787 Func
	
Label_1929:
	return 2; // 0x789 Return
}


func_627(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x273 TMovT
	var_1_object = 0; // 0x274 SetNullT
	Face(var_0_object); // 0x275 Func
	return 0; // 0x277 Return
}


func_1012(var_249_float, var_250_object, var_251_float, var_252_int)
{
	var_253_int = 0; var_254_string = ""; var_255_int = 0; var_256_float = 0; var_257_float = 0; var_258_float = 0; var_259_int = 0; var_260_string = ""; var_261_int = 0; var_262_float = 0; var_263_float = 0; var_264_float = 0; // 0x3f4 PushV
	var_265_bool = 0; var_266_object = Obj(); var_267_string = ""; // 0x3f5 PushV
	var_266_object = var_250_object; // 0x3f6 Mov
	var_267_string = "health"; // 0x3f7 MovS
	func_1000(var_265_bool, var_266_object, var_267_string); // 0x3f8 NEW_2
	var_268_bool = var_265_bool == 0; // 0x3fa Not
	if(var_268_bool == 0) goto Label_1022; // 0x3fb JumpB
	var_249_float = 0.0; // 0x3fc MovF
	return 12; // 0x3fd Return
	
Label_1022:
	var_269_bool = 0; var_270_object = Obj(); var_271_string = ""; // 0x3fe PushV
	var_270_object = var_250_object; // 0x3ff Mov
	var_271_string = "armor"; // 0x400 MovS
	func_1000(var_269_bool, var_270_object, var_271_string); // 0x401 NEW_2
	var_272_bool = var_269_bool == 0; // 0x403 Not
	if(var_272_bool == 0) goto Label_1031; // 0x404 JumpB
	var_259_int = 0; // 0x405 MovI
	goto Label_1034; // 0x406 Jump
	
Label_1034:
	var_273_string = "armor_"; // 0x40a PushS
	var_274_string = ""; var_275_int = 0; // 0x40b PushV
	var_275_int = var_252_int; // 0x40c Mov
	func_966(var_274_string, var_275_int); // 0x40d NEW_2
	var_260_string = var_273_string + var_274_string; // 0x40f Add2
	var_280_bool = 0; var_281_object = Obj(); var_282_string = ""; // 0x410 PushV
	var_281_object = var_250_object; // 0x411 Mov
	var_282_string = var_260_string; // 0x412 Mov
	func_1000(var_280_bool, var_281_object, var_282_string); // 0x413 NEW_2
	var_283_bool = var_280_bool == 0; // 0x415 Not
	if(var_283_bool == 0) goto Label_1049; // 0x416 JumpB
	var_261_int = 0; // 0x417 MovI
	goto Label_1051; // 0x418 Jump
	
Label_1051:
	var_284_float = 0; var_285_float = 0; var_286_float = 0; // 0x41b PushV
	var_287_int = var_259_int + var_261_int; // 0x41c Add
	var_288_float = 100.0; // 0x41d PushF
	var_285_float = var_287_int / var_287_int; // 0x41e Div2
	var_286_float = 1; // 0x41f MovI
	func_1468(var_284_float, var_285_float, var_286_float); // 0x420 NEW_2
	var_262_float = var_284_float; // 0x421 Mov
	var_290_string = "health"; // 0x423 PushS
	GetProperty(var_290_string, var_263_float); // 0x424 ObjFunc
	var_291_int = 1; // 0x426 PushI
	var_292_int = var_291_int - var_262_float; // 0x427 Sub
	var_264_float = var_251_float * var_292_int; // 0x428 Mult2
	var_293_string = "health"; // 0x429 PushS
	var_294_float = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0; // 0x42a PushV
	var_295_float = var_263_float - var_264_float; // 0x42b Sub2
	var_296_float = 0; // 0x42c MovI
	var_297_float = 1; // 0x42d MovI
	func_1475(var_294_float, var_295_float, var_296_float, var_297_float); // 0x42e NEW_2
	SetProperty(var_293_string, var_294_float); // 0x430 ObjFunc
	var_300_bool = 0; var_301_object = Obj(); // 0x432 PushV
	var_301_object = var_250_object; // 0x433 Mov
	func_995(var_300_bool, var_301_object); // 0x434 NEW_2
	if(var_300_bool == 0) goto Label_1083; // 0x436 JumpB
	var_302_float = 0; // 0x437 PushV
	var_302_float = -var_264_float; // 0x438 Neg2
	func_1533(var_302_float); // 0x439 NEW_2
	
Label_1083:
	var_249_float = var_264_float; // 0x43b Mov
	return 12; // 0x43c Return
	
Label_1049:
	GetProperty(var_260_string, var_261_int); // 0x419 ObjFunc
	
Label_1031:
	var_306_string = "armor"; // 0x407 PushS
	GetProperty(var_306_string, var_259_int); // 0x408 ObjFunc
}


func_1654()
{
	var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x676 PushV
	var_27_int = 0; // 0x677 PushI
	ClearSubContainer(var_27_int); // 0x678 Func
	var_28_int = 0; var_29_int = 0; // 0x67a PushV
	var_28_int = 500; // 0x67b MovI
	var_29_int = 1000; // 0x67c MovI
	func_1582(var_28_int, var_29_int); // 0x67d NEW_2
	var_47_string = ""; var_48_int = 0; var_49_int = 0; var_50_int = 0; // 0x67f PushV
	var_47_string = "rifle_ammo"; // 0x680 MovS
	var_48_int = 1; // 0x681 MovI
	var_49_int = 3; // 0x682 MovI
	var_50_int = 3; // 0x683 MovI
	func_1305(var_47_string, var_48_int, var_49_int, var_50_int); // 0x684 NEW_2
	var_63_string = ""; var_64_int = 0; var_65_int = 0; var_66_int = 0; // 0x686 PushV
	var_63_string = "rusk"; // 0x687 MovS
	var_64_int = 1; // 0x688 MovI
	var_65_int = 3; // 0x689 MovI
	var_66_int = 2; // 0x68a MovI
	func_1305(var_63_string, var_64_int, var_65_int, var_66_int); // 0x68b NEW_2
	var_67_string = ""; var_68_int = 0; var_69_int = 0; // 0x68d PushV
	var_67_string = "bandage"; // 0x68e MovS
	var_68_int = 1; // 0x68f MovI
	var_69_int = 6; // 0x690 MovI
	func_1294(var_67_string, var_68_int, var_69_int); // 0x691 NEW_2
	var_76_string = ""; var_77_int = 0; var_78_int = 0; // 0x693 PushV
	var_76_string = "tourniquet"; // 0x694 MovS
	var_77_int = 1; // 0x695 MovI
	var_78_int = 6; // 0x696 MovI
	func_1294(var_76_string, var_77_int, var_78_int); // 0x697 NEW_2
	return 4; // 0x699 Return
}


func_632(var_0_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_int = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_object = Obj(); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_int = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_object = Obj(); // 0x278 PushV
	var_194_object = Obj(); // 0x279 PushV
	var_194_object = var_0_object; // 0x27a MovT
	func_1543(var_194_object); // 0x27b NEW_2
	ReportAttack(var_0_object); // 0x27d Func
	var_195_bool = 0; var_196_object = Obj(); // 0x27f PushV
	var_196_object = var_0_object; // 0x280 MovT
	func_995(var_195_bool, var_196_object); // 0x281 NEW_2
	if(var_195_bool == 0) goto Label_649; // 0x283 JumpB
	var_197_object = Obj(); // 0x284 PushV
	func_1448(var_197_object); // 0x285 NEW_2
	SendPlayerEnemy(var_0_object, var_197_object); // 0x287 Func
	
Label_649:
	GetDirection(var_180_cvector); // 0x289 Func
	var_198_cvector = CVector(0,0,0); var_199_object = Obj(); // 0x28b PushV
	var_199_object = var_0_object; // 0x28c MovT
	func_980(var_199_object); // 0x28d NEW_2
	var_181_cvector = var_198_cvector; // 0x28e Mov
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); // 0x290 PushV
	var_205_cvector = var_180_cvector; // 0x291 Mov
	var_206_cvector = var_181_cvector; // 0x292 Mov
	func_1516(var_204_float, var_205_cvector, var_206_cvector); // 0x293 NEW_2
	var_228_float = 0.99939; // 0x295 PushF
	var_229_bool = var_204_float < var_228_float; // 0x296 LT
	if(var_229_bool == 0) goto Label_665; // 0x297 JumpB
	return 28; // 0x298 Return
	
Label_665:
	func_1552(); // 0x29a NEW_2
	var_230_string = "all"; // 0x29c PushS
	var_231_string = "attack_begin1"; // 0x29d PushS
	PlayAnimation(var_230_string, var_231_string); // 0x29e Func
	var_232_string = "attack"; // 0x2a0 PushS
	GetGeometryLocator(var_232_string, var_182_bool, var_183_cvector, var_184_cvector); // 0x2a1 Func
	var_233_bool = var_182_bool; // 0x2a3 Push
	if(var_233_bool == 0) goto Label_686; // 0x2a4 JumpB
	GetScene(var_186_object); // 0x2a5 Func
	var_234_string = "light-dynamic"; // 0x2a7 PushS
	var_235_string = "soldier_fire.xml"; // 0x2a8 PushS
	AddActorByType(var_185_object, var_234_string, var_186_object, var_183_cvector, var_184_cvector, var_235_string); // 0x2a9 Func
	var_186_object = 0; // 0x2ab SetNull
	var_185_object = 0; // 0x2ac SetNull
	goto Label_688; // 0x2ad Jump
	
Label_688:
	var_236_string = "shot"; // 0x2b0 PushS
	Speak(var_236_string); // 0x2b1 Func
	GetDirection(var_180_cvector); // 0x2b3 Func
	var_237_cvector = CVector(0,0,0); var_238_object = Obj(); // 0x2b5 PushV
	var_238_object = var_0_object; // 0x2b6 MovT
	func_980(var_238_object); // 0x2b7 NEW_2
	var_181_cvector = var_237_cvector; // 0x2b8 Mov
	var_239_float = GetByIndex(var_181_cvector, 1); // 0x2ba PushE
	var_240_float = 0; var_241_object = Obj(); // 0x2bb PushV
	var_241_object = var_0_object; // 0x2bc MovT
	func_1287(var_241_object); // 0x2bd NEW_2
	var_239_float = var_239_float + var_240_float; // 0x2bf Add2
	SetByIndex(var_181_cvector, 1) = var_239_float; // 0x2c0 PopE
	var_246_float = 0.03491; // 0x2c1 PushF
	RandVecCone3D(var_187_cvector, var_181_cvector, var_246_float); // 0x2c2 Func
	GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector); // 0x2c4 Func
	var_247_bool = var_188_object != 0; // 0x2c6 NullNeq
	if(var_247_bool == 0) goto Label_741; // 0x2c7 JumpB
	var_248_bool = var_188_object == var_0_object; // 0x2c8 Eq
	if(var_248_bool == 0) goto Label_726; // 0x2c9 JumpB
	var_249_float = 0; var_250_object = Obj(); var_251_float = 0; var_252_int = 0; // 0x2ca PushV
	var_250_object = var_0_object; // 0x2cb MovT
	var_251_float = 1.5; // 0x2cc MovF
	var_252_int = 1; // 0x2cd MovI
	func_1012(var_249_float, var_250_object, var_251_float, var_252_int); // 0x2ce NEW_2
	var_191_float = var_249_float; // 0x2cf Mov
	var_307_int = 2; // 0x2d1 PushI
	var_308_float = 1.5; // 0x2d2 PushF
	ReportHit(var_0_object, var_307_int, var_191_float, var_308_float); // 0x2d3 Func
	goto Label_741; // 0x2d5 Jump
	
Label_741:
	var_309_string = "all"; // 0x2e5 PushS
	var_310_string = "attack_end1"; // 0x2e6 PushS
	PlayAnimation(var_309_string, var_310_string); // 0x2e7 Func
	WaitForAnimEnd(); // 0x2e9 Func
	var_311_string = "all"; // 0x2eb PushS
	var_312_string = "attack_on"; // 0x2ec PushS
	LockAnimationEnd(var_311_string, var_312_string); // 0x2ed Func
	return 28; // 0x2ef Return
	
Label_726:
	var_313_int = -1; // 0x2d6 PushI
	var_314_bool = var_189_int != var_313_int; // 0x2d7 Neq
	if(var_314_bool == 0) goto Label_741; // 0x2d8 JumpB
	GetScene(var_192_object); // 0x2d9 Func
	var_315_string = "scripted"; // 0x2db PushS
	var_316_cvector = CVector(0.0, 0.0, 1.0); // 0x2dc PushVec
	var_317_string = "richochet.xml"; // 0x2dd PushS
	AddActorByType(var_193_object, var_315_string, var_192_object, var_190_cvector, var_316_cvector, var_317_string); // 0x2de Func
	var_318_string = "Material"; // 0x2e0 PushS
	SetScriptProperty(var_318_string, var_189_int); // 0x2e1 ObjFunc
	var_193_object = 0; // 0x2e3 SetNull
	var_192_object = 0; // 0x2e4 SetNull
	
Label_686:
	WaitForAnimEnd(); // 0x2ae Func
}


func_1276()
{
	var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); // 0x4fc PushV
	GetPosition(var_325_cvector); // 0x4fd ObjFunc
	GetPosition(var_326_cvector); // 0x4ff Func
	var_327_cvector = var_325_cvector - var_326_cvector; // 0x501 Sub2
	var_328_float = GetByIndex(var_327_cvector, 0); // 0x502 PushE
	var_329_float = GetByIndex(var_327_cvector, 2); // 0x503 PushE
	RotateAsync(var_328_float, var_329_float); // 0x504 Func
	return 6; // 0x506 Return
}


func_1533(var_302_float)
{
	var_303_object = Obj(); var_304_object = Obj(); // 0x5fd PushV
	CreateFloatVector(var_304_object); // 0x5fe Func
	add(var_302_float); // 0x600 ObjFunc
	var_305_int = 15; // 0x602 PushI
	SendWorldWndMessage(var_305_int, var_304_object); // 0x603 Func
	return 2; // 0x605 Return
}


func_1150(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x47e PushV
	var_40_bool = var_25_object == 0; // 0x47f NullEq
	if(var_40_bool == 0) goto Label_1154; // 0x480 JumpB
	return 14; // 0x481 Return
	
Label_1154:
	IsDead(var_33_bool); // 0x482 Func
	var_41_bool = var_33_bool; // 0x484 Push
	if(var_41_bool == 0) goto Label_1159; // 0x485 JumpB
	return 14; // 0x486 Return
	
Label_1159:
	GetSecondaryAnimationType(var_34_int); // 0x487 Func
	var_42_int = 0; // 0x489 PushI
	var_43_bool = var_34_int < var_42_int; // 0x48a LT
	if(var_43_bool == 0) goto Label_1165; // 0x48b JumpB
	return 14; // 0x48c Return
	
Label_1165:
	GetPosition(var_35_cvector); // 0x48d ObjFunc
	GetPosition(var_36_cvector); // 0x48f Func
	GetDirection(var_37_cvector); // 0x491 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x493 Sub2
	var_44_float = GetByIndex(var_38_cvector, 0); // 0x494 PushE
	var_45_float = GetByIndex(var_37_cvector, 0); // 0x495 PushE
	var_46_float = var_44_float * var_45_float; // 0x496 Mult
	var_47_float = GetByIndex(var_38_cvector, 2); // 0x497 PushE
	var_48_float = GetByIndex(var_37_cvector, 2); // 0x498 PushE
	var_49_float = var_47_float * var_48_float; // 0x499 Mult
	var_50_int = var_46_float + var_49_float; // 0x49a Add
	var_51_int = 0; // 0x49b PushI
	var_52_bool = var_50_int >= var_51_int; // 0x49c GE
	if(var_52_bool == 0) goto Label_1184; // 0x49d JumpB
	var_39_string = "fhit"; // 0x49e MovS
	goto Label_1185; // 0x49f Jump
	
Label_1185:
	var_53_string = "hit_react"; // 0x4a1 PushS
	var_54_string = "1"; // 0x4a2 PushS
	var_55_int = var_39_string + var_54_string; // 0x4a3 Add
	var_56_string = "2"; // 0x4a4 PushS
	var_57_int = var_39_string + var_56_string; // 0x4a5 Add
	var_58_int = -10; // 0x4a6 PushI
	FadeSecondaryAnimation(var_53_string, var_55_int, var_57_int, var_58_int); // 0x4a7 Func
	return 14; // 0x4a9 Return
	
Label_1184:
	var_39_string = "bhit"; // 0x4a0 MovS
}


