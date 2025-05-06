task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x20 PushV
	IsOverrideActive(var_10_bool); // 0x21 Func
	var_11_bool = var_10_bool == 0; // 0x23 Not
	if(var_11_bool == 0) goto Label_41; // 0x24 JumpB
	var_12_object = Obj(); // 0x25 PushV
	var_12_object = var_8_cvector; // 0x26 Mov
	func_1582(var_12_object); // 0x27 NEW_2
	
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
	func_1747(); // 0xcb NEW_2
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
	func_1282(); // 0xe0 NEW_2
	
Label_226:
	return 0; // 0xe2 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0xe4 PushV
	var_99_object = var_97_object; // 0xe5 Mov
	func_1132(var_98_bool, var_99_object); // 0xe6 NEW_2
	var_126_bool = var_98_bool == 0; // 0xe8 Not
	if(var_126_bool == 0) goto Label_239; // 0xe9 JumpB
	var_127_object = Obj(); // 0xea PushV
	var_127_object = var_97_object; // 0xeb Mov
	func_1919(var_127_object); // 0xec NEW_2
	return 0; // 0xee Return
	
Label_239:
	func_189(); // 0xf0 NEW_2
	var_143_object = Obj(); // 0xf2 PushV
	var_143_object = var_97_object; // 0xf3 Mov
	func_1943(var_143_object); // 0xf4 NEW_2
	return 0; // 0xf6 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0xf8 PushV
	var_12_object = var_8_bool; // 0xf9 Mov
	var_13_object = var_9_cvector; // 0xfa Mov
	var_14_bool = var_10_cvector; // 0xfb Mov
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0xfc NEW_2
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
	func_2063(var_9_bool, var_10_object); // 0x107 NEW_2
	if(var_9_bool == 0) goto Label_273; // 0x109 JumpB
	func_189(); // 0x10b NEW_2
	var_129_object = Obj(); // 0x10d PushV
	var_129_object = var_8_cvector; // 0x10e Mov
	func_2085(var_129_object); // 0x10f NEW_2
	
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
	var_98_bool = 0; var_99_object = Obj(); // 0x197 PushV
	var_99_object = var_97_object; // 0x198 Mov
	func_1132(var_98_bool, var_99_object); // 0x199 NEW_2
	var_126_bool = var_98_bool == 0; // 0x19b Not
	if(var_126_bool == 0) goto Label_418; // 0x19c JumpB
	var_127_object = Obj(); // 0x19d PushV
	var_127_object = var_97_object; // 0x19e Mov
	func_1919(var_127_object); // 0x19f NEW_2
	return 0; // 0x1a1 Return
	
Label_418:
	func_439(); // 0x1a3 NEW_2
	var_142_object = Obj(); // 0x1a5 PushV
	var_142_object = var_97_object; // 0x1a6 Mov
	func_1943(var_142_object); // 0x1a7 NEW_2
	return 0; // 0x1a9 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x1ab PushV
	var_12_object = var_8_bool; // 0x1ac Mov
	var_13_object = var_9_cvector; // 0x1ad Mov
	var_14_bool = var_10_cvector; // 0x1ae Mov
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x1af NEW_2
	if(var_11_bool == 0) goto Label_438; // 0x1b1 JumpB
	var_97_object = Obj(); // 0x1b2 PushV
	var_97_object = var_8_bool; // 0x1b3 Mov
	func_406(); // 0x1b4 NEW_2
	
Label_438:
	return 0; // 0x1b6 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_439(); // 0x1c0 NEW_2
	var_9_object = Obj(); // 0x1c2 PushV
	var_9_object = var_8_cvector; // 0x1c3 Mov
	func_1747(); // 0x1c4 NEW_2
	return 0; // 0x1c6 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x258 PushV
	var_9_bool = 0; // 0x259 MovB
	var_10_bool = var_2_bool; // 0x25a PushT
	if(var_10_bool == 0) goto Label_607; // 0x25b JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x25c Eq
	if(var_11_bool == 0) goto Label_607; // 0x25d JumpB
	var_9_bool = 1; // 0x25e MovB
	
Label_607:
	if(var_9_bool == 0) goto Label_612; // 0x25f JumpB
	var_12_object = Obj(); // 0x260 PushV
	var_12_object = var_0_object; // 0x261 MovT
	func_1282(); // 0x262 NEW_2
	
Label_612:
	return 0; // 0x264 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x266 PushV
	var_9_bool = 0; // 0x267 MovB
	var_10_bool = var_2_bool; // 0x268 PushT
	if(var_10_bool == 0) goto Label_621; // 0x269 JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x26a Eq
	if(var_11_bool == 0) goto Label_621; // 0x26b JumpB
	var_9_bool = 1; // 0x26c MovB
	
Label_621:
	if(var_9_bool == 0) goto Label_629; // 0x26d JumpB
	var_12_string = "@Stop hunt"; // 0x26e PushS
	Trace(var_12_string); // 0x26f Func
	StopAnimation(); // 0x271 Func
	StopGroup0(); // 0x273 Func
	
Label_629:
	return 0; // 0x275 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x2f8 PushV
	var_99_object = var_97_object; // 0x2f9 Mov
	func_1132(var_98_bool, var_99_object); // 0x2fa NEW_2
	var_126_bool = var_98_bool == 0; // 0x2fc Not
	if(var_126_bool == 0) goto Label_767; // 0x2fd JumpB
	return 0; // 0x2fe Return
	
Label_767:
	var_127_object = Obj(); // 0x2ff PushV
	var_127_object = var_97_object; // 0x300 Mov
	func_1919(var_127_object); // 0x301 NEW_2
	var_142_bool = var_97_object == var_0_object; // 0x303 Eq
	if(var_142_bool == 0) goto Label_775; // 0x304 JumpB
	var_1_object = 0; // 0x305 SetNullT
	goto Label_782; // 0x306 Jump
	
Label_782:
	return 0; // 0x30e Return
	
Label_775:
	var_1_object = var_97_object; // 0x307 TMov
	var_143_bool = var_2_bool; // 0x308 PushT
	if(var_143_bool == 0) goto Label_782; // 0x309 JumpB
	StopAnimation(); // 0x30a Func
	StopGroup0(); // 0x30c Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x310 PushV
	var_12_object = var_8_bool; // 0x311 Mov
	var_13_object = var_9_cvector; // 0x312 Mov
	var_14_bool = var_10_cvector; // 0x313 Mov
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x314 NEW_2
	if(var_11_bool == 0) goto Label_795; // 0x316 JumpB
	var_97_object = Obj(); // 0x317 PushV
	var_97_object = var_8_bool; // 0x318 Mov
	func_759(); // 0x319 NEW_2
	
Label_795:
	return 0; // 0x31b Return
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x325 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x326 PushV
	var_12_object = var_8_object; // 0x327 Mov
	func_1132(var_11_bool, var_12_object); // 0x328 NEW_2
	var_45_bool = var_11_bool == 0; // 0x32a Not
	if(var_45_bool == 0) goto Label_813; // 0x32b JumpB
	return 2; // 0x32c Return
	
Label_813:
	var_46_bool = 0; var_47_object = Obj(); // 0x32d PushV
	var_47_object = var_8_object; // 0x32e Mov
	func_1983(var_46_bool, var_47_object); // 0x32f NEW_2
	var_124_bool = var_46_bool == 0; // 0x331 Not
	if(var_124_bool == 0) goto Label_825; // 0x332 JumpB
	var_125_object = GlobalVars[0]; // 0x333 PushGE
	in(var_10_bool, var_8_object); // 0x334 ObjFunc
	var_126_bool = var_10_bool == 0; // 0x336 Not
	if(var_126_bool == 0) goto Label_825; // 0x337 JumpB
	return 2; // 0x338 Return
	
Label_825:
	func_966(); // 0x33a NEW_2
	var_127_object = Obj(); // 0x33c PushV
	var_127_object = var_8_object; // 0x33d Mov
	TaskCall(1); // 0x33e TaskCall
	func_165(var_128_object, var_127_object); // 0x33f NEW_2
	TaskReturn(); // 0x340 TaskReturn
	return 2; // 0x342 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj(); // 0x344 PushV
	var_99_object = var_97_object; // 0x345 Mov
	func_1132(var_98_bool, var_99_object); // 0x346 NEW_2
	var_126_bool = var_98_bool == 0; // 0x348 Not
	if(var_126_bool == 0) goto Label_847; // 0x349 JumpB
	var_127_object = Obj(); // 0x34a PushV
	var_127_object = var_97_object; // 0x34b Mov
	func_1919(var_127_object); // 0x34c NEW_2
	return 0; // 0x34e Return
	
Label_847:
	func_966(); // 0x350 NEW_2
	var_142_object = Obj(); // 0x352 PushV
	var_142_object = var_97_object; // 0x353 Mov
	func_1943(var_142_object); // 0x354 NEW_2
	return 0; // 0x356 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0; // 0x358 PushV
	var_12_object = var_8_object; // 0x359 Mov
	var_13_object = var_9_object; // 0x35a Mov
	var_14_bool = var_10_bool; // 0x35b Mov
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool); // 0x35c NEW_2
	if(var_11_bool == 0) goto Label_867; // 0x35e JumpB
	var_97_object = Obj(); // 0x35f PushV
	var_97_object = var_8_object; // 0x360 Mov
	func_835(); // 0x361 NEW_2
	
Label_867:
	return 0; // 0x363 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x365 PushV
	var_10_object = var_8_object; // 0x366 Mov
	func_2063(var_9_bool, var_10_object); // 0x367 NEW_2
	if(var_9_bool == 0) goto Label_881; // 0x369 JumpB
	func_966(); // 0x36b NEW_2
	var_128_object = Obj(); // 0x36d PushV
	var_128_object = var_8_object; // 0x36e Mov
	func_2117(var_128_object); // 0x36f NEW_2
	
Label_881:
	return 0; // 0x371 Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x6b5 PushV
	var_12_object = var_8_object; // 0x6b6 Mov
	var_13_int = var_9_int; // 0x6b7 Mov
	var_14_float = var_10_float; // 0x6b8 Mov
	func_1200(var_12_object, var_13_int, var_14_float); // 0x6b9 NEW_2
	return 0; // 0x6bb Return
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x6bd PushV
	var_14_object = var_8_object; // 0x6be Mov
	var_15_int = var_9_int; // 0x6bf Mov
	var_16_float = var_10_float; // 0x6c0 Mov
	var_17_cvector = var_12_cvector; // 0x6c1 Mov
	var_18_cvector = var_13_cvector; // 0x6c2 Mov
	func_1268(var_16_float, var_17_cvector, var_18_cvector); // 0x6c3 NEW_2
	return 0; // 0x6c5 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x6c6 PushV
	var_12_string = "health"; // 0x6c7 PushS
	var_13_bool = var_9_string == var_12_string; // 0x6c8 Eq
	if(var_13_bool == 0) goto Label_1746; // 0x6c9 JumpB
	var_14_string = "health"; // 0x6ca PushS
	GetProperty(var_14_string, var_11_float); // 0x6cb Func
	var_15_int = 0; // 0x6cd PushI
	var_16_bool = var_11_float <= var_15_int; // 0x6ce LE
	if(var_16_bool == 0) goto Label_1746; // 0x6cf JumpB
	SignalDeath(var_8_object); // 0x6d0 Func
	
Label_1746:
	return 2; // 0x6d2 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x6d4 PushV
	var_10_object = var_8_object; // 0x6d5 Mov
	func_1001(var_9_bool, var_10_object); // 0x6d6 NEW_2
	if(var_9_bool == 0) goto Label_1760; // 0x6d8 JumpB
	var_13_object = Obj(); // 0x6d9 PushV
	func_1454(var_13_object); // 0x6da NEW_2
	var_16_float = -0.13; // 0x6dc PushF
	var_17_bool = 1; // 0x6dd PushB
	ReportReputationChange(var_8_object, var_13_object, var_16_float, var_17_bool); // 0x6de Func
	
Label_1760:
	var_18_object = Obj(); // 0x6e0 PushV
	var_18_object = var_8_object; // 0x6e1 Mov
	func_2123(var_18_object); // 0x6e2 NEW_2
	return 0; // 0x6e4 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	func_1901(); // 0x31d NEW_2
	
Label_799:
	func_882(var_6_cvector, var_7_cvector); // 0x320 NEW_2
	goto Label_799; // 0x322 Jump
}


func_0(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0x1 PushV
	var_27_object = var_25_object; // 0x2 Mov
	func_1001(var_26_bool, var_27_object); // 0x3 NEW_2
	if(var_26_bool == 0) goto Label_9; // 0x5 JumpB
	func_1667(); // 0x7 NEW_2
	
Label_9:
	func_1643(); // 0xa NEW_2
	var_104_object = Obj(); // 0xc PushV
	var_104_object = var_25_object; // 0xd Mov
	func_17(var_104_object); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_1282()
{
	var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); // 0x502 PushV
	GetPosition(var_332_cvector); // 0x503 ObjFunc
	GetPosition(var_333_cvector); // 0x505 Func
	var_334_cvector = var_332_cvector - var_333_cvector; // 0x507 Sub2
	var_335_float = GetByIndex(var_334_cvector, 0); // 0x508 PushE
	var_336_float = GetByIndex(var_334_cvector, 2); // 0x509 PushE
	RotateAsync(var_335_float, var_336_float); // 0x50a Func
	return 6; // 0x50c Return
}


func_1539(var_305_float)
{
	var_306_object = Obj(); var_307_object = Obj(); // 0x603 PushV
	CreateFloatVector(var_307_object); // 0x604 Func
	add(var_305_float); // 0x606 ObjFunc
	var_308_int = 0; // 0x608 PushI
	var_309_bool = var_305_float < var_308_int; // 0x609 LT
	if(var_309_bool == 0) goto Label_1551; // 0x60a JumpB
	var_310_float = 0.7; // 0x60b PushF
	var_311_int = 500; // 0x60c PushI
	RumblePlay(var_310_float, var_311_int); // 0x60d Func
	
Label_1551:
	var_312_int = 15; // 0x60f PushI
	SendWorldWndMessage(var_312_int, var_307_object); // 0x610 Func
	return 2; // 0x612 Return
}


func_1667()
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0; // 0x683 PushV
	var_32_int = 0; // 0x684 PushI
	ClearSubContainer(var_32_int); // 0x685 Func
	var_33_int = 0; var_34_int = 0; // 0x687 PushV
	var_33_int = 500; // 0x688 MovI
	var_34_int = 1000; // 0x689 MovI
	func_1595(var_33_int, var_34_int); // 0x68a NEW_2
	var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0; // 0x68c PushV
	var_52_string = "rifle_ammo"; // 0x68d MovS
	var_53_int = 1; // 0x68e MovI
	var_54_int = 3; // 0x68f MovI
	var_55_int = 3; // 0x690 MovI
	func_1311(var_52_string, var_53_int, var_54_int, var_55_int); // 0x691 NEW_2
	var_68_string = ""; var_69_int = 0; var_70_int = 0; var_71_int = 0; // 0x693 PushV
	var_68_string = "rusk"; // 0x694 MovS
	var_69_int = 1; // 0x695 MovI
	var_70_int = 3; // 0x696 MovI
	var_71_int = 2; // 0x697 MovI
	func_1311(var_68_string, var_69_int, var_70_int, var_71_int); // 0x698 NEW_2
	var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x69a PushV
	var_72_string = "bandage"; // 0x69b MovS
	var_73_int = 1; // 0x69c MovI
	var_74_int = 6; // 0x69d MovI
	func_1300(var_72_string, var_73_int, var_74_int); // 0x69e NEW_2
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x6a0 PushV
	var_81_string = "tourniquet"; // 0x6a1 MovS
	var_82_int = 1; // 0x6a2 MovI
	var_83_int = 6; // 0x6a3 MovI
	func_1300(var_81_string, var_82_int, var_83_int); // 0x6a4 NEW_2
	return 4; // 0x6a6 Return
}


func_133(var_127_string)
{
	RemoveRTEnvelope(); // 0x86 Func
	SetDeathState(); // 0x88 Func
	Stop(); // 0x8a Func
	StopAsync(); // 0x8c Func
	StopSecondaryAnimation(); // 0x8e Func
	var_128_string = ""; // 0x90 PushV
	var_128_string = var_127_string; // 0x91 Mov
	func_1326(var_128_string); // 0x92 NEW_2
	var_157_string = "all"; // 0x94 PushS
	PlayAnimation(var_157_string, var_127_string); // 0x95 Func
	WaitForAnimEnd(); // 0x97 Func
	var_158_string = "all"; // 0x99 PushS
	LockAnimationEnd(var_158_string, var_127_string); // 0x9a Func
	RemoveEnvelope(); // 0x9c Func
	return 0; // 0x9e Return
}


func_1156(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x484 PushV
	var_40_bool = var_25_object == 0; // 0x485 NullEq
	if(var_40_bool == 0) goto Label_1160; // 0x486 JumpB
	return 14; // 0x487 Return
	
Label_1160:
	IsDead(var_33_bool); // 0x488 Func
	var_41_bool = var_33_bool; // 0x48a Push
	if(var_41_bool == 0) goto Label_1165; // 0x48b JumpB
	return 14; // 0x48c Return
	
Label_1165:
	GetSecondaryAnimationType(var_34_int); // 0x48d Func
	var_42_int = 0; // 0x48f PushI
	var_43_bool = var_34_int < var_42_int; // 0x490 LT
	if(var_43_bool == 0) goto Label_1171; // 0x491 JumpB
	return 14; // 0x492 Return
	
Label_1171:
	GetPosition(var_35_cvector); // 0x493 ObjFunc
	GetPosition(var_36_cvector); // 0x495 Func
	GetDirection(var_37_cvector); // 0x497 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x499 Sub2
	var_44_float = GetByIndex(var_38_cvector, 0); // 0x49a PushE
	var_45_float = GetByIndex(var_37_cvector, 0); // 0x49b PushE
	var_46_float = var_44_float * var_45_float; // 0x49c Mult
	var_47_float = GetByIndex(var_38_cvector, 2); // 0x49d PushE
	var_48_float = GetByIndex(var_37_cvector, 2); // 0x49e PushE
	var_49_float = var_47_float * var_48_float; // 0x49f Mult
	var_50_int = var_46_float + var_49_float; // 0x4a0 Add
	var_51_int = 0; // 0x4a1 PushI
	var_52_bool = var_50_int >= var_51_int; // 0x4a2 GE
	if(var_52_bool == 0) goto Label_1190; // 0x4a3 JumpB
	var_39_string = "fhit"; // 0x4a4 MovS
	goto Label_1191; // 0x4a5 Jump
	
Label_1191:
	var_53_string = "hit_react"; // 0x4a7 PushS
	var_54_string = "1"; // 0x4a8 PushS
	var_55_int = var_39_string + var_54_string; // 0x4a9 Add
	var_56_string = "2"; // 0x4aa PushS
	var_57_int = var_39_string + var_56_string; // 0x4ab Add
	var_58_int = -10; // 0x4ac PushI
	FadeSecondaryAnimation(var_53_string, var_55_int, var_57_int, var_58_int); // 0x4ad Func
	return 14; // 0x4af Return
	
Label_1190:
	var_39_string = "bhit"; // 0x4a6 MovS
}


func_1293(var_243_float)
{
	var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0; // 0x50d PushV
	GetEyesHeight(var_247_float); // 0x50e Func
	GetEyesHeight(var_248_float); // 0x510 ObjFunc
	var_243_float = var_248_float - var_247_float; // 0x512 Sub2
	return 4; // 0x513 Return
}


func_2063(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x80f PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x810 PushV
	var_14_object = var_10_object; // 0x811 Mov
	func_1132(var_13_bool, var_14_object); // 0x812 NEW_2
	var_47_bool = var_13_bool == 0; // 0x814 Not
	if(var_47_bool == 0) goto Label_2072; // 0x815 JumpB
	var_9_bool = 0; // 0x816 MovB
	return 2; // 0x817 Return
	
Label_2072:
	var_48_object = GlobalVars[0]; // 0x818 PushGE
	in(var_12_bool, var_10_object); // 0x819 ObjFunc
	var_49_bool = var_12_bool; // 0x81b Push
	if(var_49_bool == 0) goto Label_2079; // 0x81c JumpB
	var_9_bool = 1; // 0x81d MovB
	return 2; // 0x81e Return
	
Label_2079:
	var_50_bool = 0; var_51_object = Obj(); // 0x81f PushV
	var_51_object = var_10_object; // 0x820 Mov
	func_1983(var_50_bool, var_51_object); // 0x821 NEW_2
	var_9_bool = var_50_bool; // 0x822 Mov
	return 2; // 0x824 Return
}


func_17(var_104_object)
{
	EventDisable(0); // 0x12 EventDisable
	var_105_object = Obj(); // 0x13 PushV
	var_105_object = var_104_object; // 0x14 Mov
	func_42(var_105_object); // 0x15 NEW_2
	var_185_int = 50; // 0x17 PushI
	var_186_int = 40; // 0x18 PushI
	SetRTEnvelope(var_185_int, var_186_int); // 0x19 Func
	EventEnable(0); // 0x1b EventEnable
	
Label_28:
	Hold(); // 0x1c Func
	goto Label_28; // 0x1e Jump
}


func_1556(var_145_object)
{
	var_146_bool = 0; var_147_bool = 0; // 0x614 PushV
	IsPlayerActor(var_145_object, var_147_bool); // 0x615 Func
	var_148_bool = var_147_bool; // 0x617 Push
	if(var_148_bool == 0) goto Label_1564; // 0x618 JumpB
	var_149_string = "attack"; // 0x619 PushS
	PlayGlobalMusic(var_149_string); // 0x61a Func
	
Label_1564:
	return 2; // 0x61c Return
}


func_1300(var_72_string, var_73_int, var_74_int)
{
	var_75_bool = 0; var_76_bool = 0; // 0x514 PushV
	var_77_bool = 0; var_78_int = 0; var_79_int = 0; // 0x515 PushV
	var_78_int = var_73_int; // 0x516 Mov
	var_79_int = var_74_int; // 0x517 Mov
	func_1492(var_77_bool, var_78_int, var_79_int); // 0x518 NEW_2
	if(var_77_bool == 0) goto Label_1310; // 0x51a JumpB
	var_80_int = 0; // 0x51b PushI
	AddItem(var_76_bool, var_72_string, var_80_int); // 0x51c Func
	
Label_1310:
	return 2; // 0x51e Return
}


func_1943(var_142_object)
{
	var_143_object = Obj(); // 0x798 PushV
	var_143_object = var_142_object; // 0x799 Mov
	func_1919(var_143_object); // 0x79a NEW_2
	var_144_object = Obj(); var_145_bool = 0; // 0x79c PushV
	var_144_object = var_142_object; // 0x79d Mov
	var_145_bool = 1; // 0x79e MovB
	func_1908(var_144_object, var_145_bool); // 0x79f NEW_2
	return 0; // 0x7a1 Return
}


func_1565()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x61d PushV
	GetScene(var_151_object); // 0x61e Func
	var_152_string = "battle"; // 0x620 PushS
	var_153_object = Obj(); // 0x621 PushV
	func_1454(var_153_object); // 0x622 NEW_2
	BroadcastMessage(var_152_string, var_153_object, var_151_object); // 0x624 Func
	return 2; // 0x626 Return
}


func_285(var_0_object, var_361_object)
{
	var_364_bool = 0; var_365_int = 0; var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_int = 0; // 0x11d PushV
	var_0_object = var_361_object; // 0x11e TMov
	var_370_object = Obj(); // 0x11f PushV
	var_370_object = var_0_object; // 0x120 MovT
	func_1556(var_370_object); // 0x121 NEW_2
	CanSee(var_369_int, var_0_object); // 0x123 Func
	var_371_object = var_1_object; // 0x125 PushT
	if(var_371_object == 0) goto Label_308; // 0x126 JumpB
	var_372_bool = 0; var_373_object = Obj(); // 0x127 PushV
	var_373_object = var_0_object; // 0x128 MovT
	func_1975(var_372_bool, var_373_object); // 0x129 NEW_2
	if(var_372_bool == 0) goto Label_306; // 0x12b JumpB
	var_383_object = Obj(); var_384_bool = 0; // 0x12c PushV
	var_383_object = var_0_object; // 0x12d MovT
	var_384_bool = 1; // 0x12e MovB
	func_1908(var_383_object, var_384_bool); // 0x12f NEW_2
	return 6; // 0x131 Return
	
Label_306:
	Face(var_0_object); // 0x132 Func
	
Label_308:
	func_1565(); // 0x135 NEW_2
	var_385_string = "all"; // 0x137 PushS
	var_386_string = "shoot_begin"; // 0x138 PushS
	PlayAnimation(var_385_string, var_386_string); // 0x139 Func
	WaitForAnimEnd(var_367_bool); // 0x13b Func
	var_387_bool = var_367_bool == 0; // 0x13d Not
	if(var_387_bool == 0) goto Label_322; // 0x13e JumpB
	StopAsync(); // 0x13f Func
	return 6; // 0x141 Return
	
Label_322:
	var_388_string = "shot"; // 0x142 PushS
	var_389_cvector = CVector(0.0, 150.0, 0.0); // 0x143 PushVec
	var_390_int = 800; // 0x144 PushI
	var_391_int = 100000; // 0x145 PushI
	PlayGlobalSound(var_388_string, var_389_cvector, var_390_int, var_391_int); // 0x146 Func
	var_392_string = "all"; // 0x148 PushS
	var_393_string = "shoot_end"; // 0x149 PushS
	PlayAnimation(var_392_string, var_393_string); // 0x14a Func
	WaitForAnimEnd(var_367_bool); // 0x14c Func
	var_394_bool = var_367_bool == 0; // 0x14e Not
	if(var_394_bool == 0) goto Label_339; // 0x14f JumpB
	StopAsync(); // 0x150 Func
	return 6; // 0x152 Return
	
Label_339:
	var_395_string = "all"; // 0x153 PushS
	var_396_string = "shoot_end"; // 0x154 PushS
	LockAnimationEnd(var_395_string, var_396_string); // 0x155 Func
	var_368_int = 0; // 0x157 MovI
	var_369_int = 0; // 0x158 MovI
	
Label_345:
	var_397_int = 20; // 0x159 PushI
	var_398_bool = var_369_int < var_397_int; // 0x15a LT
	if(var_398_bool == 0) goto Label_397; // 0x15b JumpB
	var_399_object = Obj(); // 0x15c PushV
	var_399_object = var_0_object; // 0x15d MovT
	func_1556(var_399_object); // 0x15e NEW_2
	var_400_float = 0.5; // 0x160 PushF
	Sleep(var_400_float, var_367_bool); // 0x161 Func
	var_401_bool = var_367_bool == 0; // 0x163 Not
	if(var_401_bool == 0) goto Label_358; // 0x164 JumpB
	return 6; // 0x165 Return
	
Label_358:
	CanSee(var_369_int, var_0_object); // 0x166 Func
	var_402_object = var_1_object; // 0x168 PushT
	if(var_402_object == 0) goto Label_380; // 0x169 JumpB
	var_368_int = 0; // 0x16a MovI
	var_403_bool = 0; var_404_object = Obj(); // 0x16b PushV
	var_404_object = var_0_object; // 0x16c MovT
	func_1975(var_403_bool, var_404_object); // 0x16d NEW_2
	if(var_403_bool == 0) goto Label_377; // 0x16f JumpB
	func_439(); // 0x171 NEW_2
	var_405_object = Obj(); var_406_bool = 0; // 0x173 PushV
	var_405_object = var_0_object; // 0x174 MovT
	var_406_bool = 0; // 0x175 MovB
	func_1908(var_405_object, var_406_bool); // 0x176 NEW_2
	return 6; // 0x178 Return
	
Label_377:
	Face(var_0_object); // 0x179 Func
	goto Label_394; // 0x17b Jump
	
Label_394:
	var_407_int = 1; // 0x18a PushI
	var_369_int = var_369_int + var_407_int; // 0x18b Add2
	goto Label_345; // 0x18c Jump
	
Label_380:
	StopAsync(); // 0x17c Func
	var_408_int = 1; // 0x17e PushI
	var_368_int = var_368_int + var_408_int; // 0x17f Add2
	var_409_int = 4; // 0x180 PushI
	var_410_bool = var_368_int == var_409_int; // 0x181 Eq
	if(var_410_bool == 0) goto Label_394; // 0x182 JumpB
	var_411_string = "all"; // 0x183 PushS
	var_412_string = "attack_off"; // 0x184 PushS
	PlayAnimation(var_411_string, var_412_string); // 0x185 Func
	WaitForAnimEnd(); // 0x187 Func
	return 6; // 0x189 Return
	
Label_397:
	func_439(); // 0x18e NEW_2
	var_413_object = Obj(); var_414_bool = 0; // 0x190 PushV
	var_413_object = var_361_object; // 0x191 Mov
	var_414_bool = 0; // 0x192 MovB
	func_1908(var_413_object, var_414_bool); // 0x193 NEW_2
	return 6; // 0x195 Return
}


func_1311(var_52_string, var_53_int, var_54_int, var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0x51f PushV
	var_60_bool = 0; var_61_int = 0; var_62_int = 0; // 0x520 PushV
	var_61_int = var_53_int; // 0x521 Mov
	var_62_int = var_54_int; // 0x522 Mov
	func_1492(var_60_bool, var_61_int, var_62_int); // 0x523 NEW_2
	if(var_60_bool == 0) goto Label_1325; // 0x525 JumpB
	irand(var_58_int, var_55_int); // 0x526 Func
	var_65_int = 0; // 0x528 PushI
	var_66_int = 1; // 0x529 PushI
	var_67_int = var_58_int + var_66_int; // 0x52a Add
	AddItem(var_59_bool, var_52_string, var_65_int, var_67_int); // 0x52b Func
	
Label_1325:
	return 4; // 0x52d Return
}


func_1954(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0; // 0x7a2 PushV
	var_132_object = GlobalVars[0]; // 0x7a3 PushGE
	in(var_131_bool, var_129_object); // 0x7a4 ObjFunc
	var_133_bool = var_131_bool; // 0x7a6 Push
	if(var_133_bool == 0) goto Label_1966; // 0x7a7 JumpB
	var_134_object = Obj(); var_135_bool = 0; // 0x7a8 PushV
	var_134_object = var_129_object; // 0x7a9 Mov
	var_135_bool = 1; // 0x7aa MovB
	func_1908(var_134_object, var_135_bool); // 0x7ab NEW_2
	goto Label_1974; // 0x7ad Jump
	
Label_1974:
	return 2; // 0x7b6 Return
	
Label_1966:
	var_361_object = Obj(); // 0x7ae PushV
	var_361_object = var_129_object; // 0x7af Mov
	TaskCall(2); // 0x7b0 TaskCall
	func_285(var_363_bool, var_361_object); // 0x7b1 NEW_2
	TaskReturn(); // 0x7b2 TaskReturn
	ResetAAS(); // 0x7b4 Func
}


func_804()
{
	return 0; // 0x324 Return
}


func_2085(var_129_object)
{
	var_130_object = Obj(); // 0x826 PushV
	var_130_object = var_129_object; // 0x827 Mov
	func_2117(var_130_object); // 0x828 NEW_2
	return 0; // 0x82a Return
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
	func_1132(var_134_bool, var_135_object); // 0xb2 NEW_2
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


func_1703(var_45_int, var_46_string)
{
	var_47_int = 0; var_48_int = 0; // 0x6a7 PushV
	GetInvItemByName(var_48_int, var_46_string); // 0x6a8 Func
	var_45_int = var_48_int; // 0x6aa Mov
	return 2; // 0x6ab Return
}


func_1576(var_84_int)
{
	var_85_int = 0; var_86_int = 0; // 0x628 PushV
	var_87_string = "branch"; // 0x629 PushS
	GetVariable(var_87_string, var_86_int); // 0x62a Func
	var_84_int = var_86_int; // 0x62c Mov
	return 2; // 0x62d Return
}


func_42(var_105_object)
{
	var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_string = ""; var_111_object = Obj(); var_112_bool = 0; var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_string = ""; var_121_object = Obj(); var_122_bool = 0; var_123_bool = 0; var_124_float = 0; var_125_cvector = CVector(0,0,0); // 0x2a PushV
	var_126_bool = var_105_object == 0; // 0x2b NullEq
	if(var_126_bool == 0) goto Label_50; // 0x2c JumpB
	var_127_string = ""; // 0x2d PushV
	var_127_string = "fdie"; // 0x2e MovS
	func_133(var_127_string); // 0x2f NEW_2
	goto Label_132; // 0x31 Jump
	
Label_132:
	return 20; // 0x84 Return
	
Label_50:
	GetPosition(var_116_cvector); // 0x32 ObjFunc
	GetPosition(var_117_cvector); // 0x34 Func
	GetDirection(var_118_cvector); // 0x36 Func
	var_119_cvector = var_117_cvector - var_116_cvector; // 0x38 Sub2
	var_159_float = GetByIndex(var_119_cvector, 0); // 0x39 PushE
	var_160_float = GetByIndex(var_118_cvector, 0); // 0x3a PushE
	var_161_float = var_159_float * var_160_float; // 0x3b Mult
	var_162_float = GetByIndex(var_119_cvector, 2); // 0x3c PushE
	var_163_float = GetByIndex(var_118_cvector, 2); // 0x3d PushE
	var_164_float = var_162_float * var_163_float; // 0x3e Mult
	var_165_int = var_161_float + var_164_float; // 0x3f Add
	var_166_int = 0; // 0x40 PushI
	var_167_bool = var_165_int >= var_166_int; // 0x41 GE
	if(var_167_bool == 0) goto Label_69; // 0x42 JumpB
	var_120_string = "fdie"; // 0x43 MovS
	goto Label_70; // 0x44 Jump
	
Label_70:
	RemoveRTEnvelope(); // 0x46 Func
	SetDeathState(); // 0x48 Func
	Stop(); // 0x4a Func
	StopAsync(); // 0x4c Func
	var_121_object = var_105_object; // 0x4e Mov
	var_168_string = "GetScriptProperty"; // 0x4f PushS
	var_169_int = 2; // 0x50 PushI
	var_170_bool = IsFuncExist(var_105_object, var_168_string, var_169_int); // 0x51 FuncExist
	if(var_170_bool == 0) goto Label_94; // 0x52 JumpB
	var_171_string = "Owner"; // 0x53 PushS
	HasScriptProperty(var_122_bool, var_171_string); // 0x54 ObjFunc
	var_172_bool = var_122_bool; // 0x56 Push
	if(var_172_bool == 0) goto Label_94; // 0x57 JumpB
	var_173_string = "Owner"; // 0x58 PushS
	GetScriptProperty(var_121_object, var_173_string); // 0x59 ObjFunc
	var_174_bool = var_121_object == 0; // 0x5b NullEq
	if(var_174_bool == 0) goto Label_94; // 0x5c JumpB
	var_121_object = var_105_object; // 0x5d Mov
	
Label_94:
	var_175_string = "@GetEyesHeight"; // 0x5e PushS
	var_176_int = 1; // 0x5f PushI
	var_177_bool = IsFuncExist(var_121_object, var_175_string, var_176_int); // 0x60 FuncExist
	if(var_177_bool == 0) goto Label_109; // 0x61 JumpB
	GetEyesHeight(var_124_float); // 0x62 ObjFunc
	var_125_cvector = CVector(0.0, 0.0, 0.0); // 0x64 MovV
	var_178_float = GetByIndex(var_125_cvector, 1); // 0x65 PushE
	var_178_float = var_124_float; // 0x66 Mov
	SetByIndex(var_125_cvector, 1) = var_178_float; // 0x67 PopE
	var_179_string = "head"; // 0x68 PushS
	LookAsync(var_105_object, var_179_string, var_125_cvector); // 0x69 Func
	var_123_bool = 1; // 0x6b MovB
	goto Label_110; // 0x6c Jump
	
Label_110:
	var_180_string = ""; // 0x6e PushV
	var_180_string = var_120_string; // 0x6f Mov
	func_1326(var_180_string); // 0x70 NEW_2
	var_181_string = "all"; // 0x72 PushS
	PlayAnimation(var_181_string, var_120_string); // 0x73 Func
	WaitForAnimEnd(); // 0x75 Func
	var_182_bool = var_123_bool; // 0x77 Push
	if(var_182_bool == 0) goto Label_126; // 0x78 JumpB
	StopAsync(); // 0x79 Func
	var_183_string = "head"; // 0x7b PushS
	UnlookAsync(var_183_string); // 0x7c Func
	
Label_126:
	var_184_string = "all"; // 0x7e PushS
	LockAnimationEnd(var_184_string, var_120_string); // 0x7f Func
	RemoveEnvelope(); // 0x81 Func
	var_121_object = 0; // 0x83 SetNull
	
Label_109:
	var_123_bool = 0; // 0x6d MovB
	
Label_69:
	var_120_string = "bdie"; // 0x45 MovS
}


func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x82b PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x82c PushV
	var_18_object = var_13_object; // 0x82d Mov
	var_19_bool = !var_14_bool; // 0x82e Not2
	func_1765(var_17_bool, var_18_object, var_19_bool); // 0x82f NEW_2
	if(var_17_bool == 0) goto Label_2115; // 0x831 JumpB
	CanSee(var_16_bool, var_12_object); // 0x832 Func
	var_85_bool = 0; // 0x834 PushV
	var_85_bool = 1; // 0x835 MovB
	var_86_bool = var_16_bool; // 0x836 Push
	if(var_86_bool == 0) goto Label_2112; // 0x837 JumpB
	var_87_float = 0; var_88_object = Obj(); // 0x838 PushV
	var_88_object = var_12_object; // 0x839 Mov
	func_993(var_88_object); // 0x83a NEW_2
	var_95_float = 490000.0; // 0x83c PushF
	var_96_bool = var_87_float <= var_95_float; // 0x83d LE
	if(var_96_bool == 0) goto Label_2112; // 0x83e JumpB
	var_85_bool = 0; // 0x83f MovB
	
Label_2112:
	if(var_85_bool == 0) goto Label_2115; // 0x840 JumpB
	var_11_bool = 1; // 0x841 MovB
	return 2; // 0x842 Return
	
Label_2115:
	var_11_bool = 0; // 0x843 MovB
	return 2; // 0x844 Return
}


func_1708(var_24_object)
{
	var_25_object = Obj(); // 0x6ad PushV
	var_25_object = var_24_object; // 0x6ae Mov
	TaskCall(0); // 0x6af TaskCall
	func_0(var_25_object); // 0x6b0 NEW_2
	TaskReturn(); // 0x6b1 TaskReturn
	return 0; // 0x6b3 Return
}


func_1582(var_12_object)
{
	var_13_int = 0; // 0x62f PushV
	func_1576(var_13_int); // 0x630 NEW_2
	var_17_int = 1; // 0x632 PushI
	var_18_bool = var_13_int == var_17_int; // 0x633 Eq
	if(var_18_bool == 0) goto Label_1592; // 0x634 JumpB
	WorkWithCorpse(var_12_object); // 0x635 Func
	goto Label_1594; // 0x637 Jump
	
Label_1594:
	return 0; // 0x63a Return
	
Label_1592:
	Barter(var_12_object); // 0x638 Func
}


func_1326(var_128_string)
{
	var_129_bool = 0; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_bool = 0; var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_bool = 0; var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); // 0x52e PushV
	IsExisting3DSound(var_137_bool, var_128_string); // 0x52f Func
	var_145_bool = var_137_bool == 0; // 0x531 Not
	if(var_145_bool == 0) goto Label_1351; // 0x532 JumpB
	var_138_int = 0; // 0x533 MovI
	
Label_1332:
	var_146_int = 1; // 0x534 PushI
	var_147_int = var_138_int + var_146_int; // 0x535 Add
	var_148_int = var_128_string + var_147_int; // 0x536 Add
	IsExisting3DSound(var_139_bool, var_148_int); // 0x537 Func
	var_149_bool = var_139_bool == 0; // 0x539 Not
	if(var_149_bool == 0) goto Label_1340; // 0x53a JumpB
	goto Label_1343; // 0x53b Jump
	
Label_1343:
	var_150_bool = var_138_int == 0; // 0x53f Not
	if(var_150_bool == 0) goto Label_1346; // 0x540 JumpB
	return 16; // 0x541 Return
	
Label_1346:
	irand(var_140_int, var_138_int); // 0x542 Func
	var_151_int = 1; // 0x544 PushI
	var_152_int = var_140_int + var_151_int; // 0x545 Add
	var_128_string = var_128_string + var_152_int; // 0x546 Add2
	
Label_1351:
	Is3DSoundLoaded(var_141_bool, var_128_string); // 0x547 Func
	var_153_bool = var_141_bool; // 0x549 Push
	if(var_153_bool == 0) goto Label_1366; // 0x54a JumpB
	GetEyesHeight(var_142_float); // 0x54b Func
	GetDirection(var_143_cvector); // 0x54d Func
	var_154_int = 50; // 0x54f PushI
	var_144_cvector = var_143_cvector * var_154_int; // 0x550 Mult2
	var_155_float = GetByIndex(var_144_cvector, 1); // 0x551 PushE
	var_155_float = var_155_float + var_142_float; // 0x552 Add2
	SetByIndex(var_144_cvector, 1) = var_155_float; // 0x553 PopE
	PlayGlobalSound(var_128_string, var_144_cvector); // 0x554 Func
	
Label_1366:
	return 16; // 0x556 Return
	
Label_1340:
	var_156_int = 1; // 0x53c PushI
	var_138_int = var_138_int + var_156_int; // 0x53d Add2
	goto Label_1332; // 0x53e Jump
}


func_1454(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5ae PushV
	self(var_15_object); // 0x5af Func
	var_13_object = var_15_object; // 0x5b1 Mov
	return 2; // 0x5b2 Return
}


func_1200(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); // 0x4b0 PushV
	var_33_bool = 0; // 0x4b1 PushV
	var_33_bool = 0; // 0x4b2 MovB
	var_34_bool = 0; // 0x4b3 PushV
	var_34_bool = 0; // 0x4b4 MovB
	var_35_object = var_12_object; // 0x4b5 Push
	if(var_35_object == 0) goto Label_1211; // 0x4b6 JumpB
	var_36_int = 4; // 0x4b7 PushI
	var_37_bool = var_13_int != var_36_int; // 0x4b8 Neq
	if(var_37_bool == 0) goto Label_1211; // 0x4b9 JumpB
	var_34_bool = 1; // 0x4ba MovB
	
Label_1211:
	if(var_34_bool == 0) goto Label_1216; // 0x4bb JumpB
	var_38_int = 5; // 0x4bc PushI
	var_39_bool = var_13_int != var_38_int; // 0x4bd Neq
	if(var_39_bool == 0) goto Label_1216; // 0x4be JumpB
	var_33_bool = 1; // 0x4bf MovB
	
Label_1216:
	if(var_33_bool == 0) goto Label_1263; // 0x4c0 JumpB
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x4c1 PushV
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x4c2 PushV
	var_43_object = var_12_object; // 0x4c3 Mov
	func_986(var_43_object); // 0x4c4 NEW_2
	var_41_cvector = var_42_cvector; // 0x4c5 Mov
	func_1460(var_40_cvector, var_41_cvector); // 0x4c7 NEW_2
	var_24_cvector = var_40_cvector; // 0x4c8 Mov
	CreateVectorVector(var_25_object); // 0x4ca Func
	var_26_int = 1; // 0x4cc MovI
	
Label_1229:
	var_53_string = "hit"; // 0x4cd PushS
	var_54_int = var_53_string + var_26_int; // 0x4ce Add
	GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector); // 0x4cf Func
	var_55_bool = var_27_bool == 0; // 0x4d1 Not
	if(var_55_bool == 0) goto Label_1236; // 0x4d2 JumpB
	goto Label_1245; // 0x4d3 Jump
	
Label_1245:
	size(var_30_int); // 0x4dd ObjFunc
	var_56_int = var_30_int; // 0x4df Push
	if(var_56_int == 0) goto Label_1262; // 0x4e0 JumpB
	irand(var_31_int, var_30_int); // 0x4e1 Func
	get(var_32_cvector, var_31_int); // 0x4e3 ObjFunc
	var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x4e5 PushV
	var_57_object = var_12_object; // 0x4e6 Mov
	var_58_int = var_13_int; // 0x4e7 Mov
	var_59_float = var_14_float; // 0x4e8 Mov
	var_60_cvector = var_32_cvector; // 0x4e9 Mov
	var_61_cvector = -var_24_cvector; // 0x4ea Neg2
	func_1268(var_59_float, var_60_cvector, var_61_cvector); // 0x4eb NEW_2
	return 18; // 0x4ed Return
	
Label_1262:
	var_25_object = 0; // 0x4ee SetNull
	
Label_1263:
	var_102_object = Obj(); // 0x4ef PushV
	var_102_object = var_12_object; // 0x4f0 Mov
	func_1156(var_102_object); // 0x4f1 NEW_2
	return 18; // 0x4f3 Return
	
Label_1236:
	var_103_int = var_29_cvector | var_24_cvector; // 0x4d4 Or
	var_104_float = 0.70711; // 0x4d5 PushF
	var_105_bool = var_103_int >= var_104_float; // 0x4d6 GE
	if(var_105_bool == 0) goto Label_1242; // 0x4d7 JumpB
	add(var_28_cvector); // 0x4d8 ObjFunc
	
Label_1242:
	var_106_int = 1; // 0x4da PushI
	var_26_int = var_26_int + var_106_int; // 0x4db Add2
	goto Label_1229; // 0x4dc Jump
}


func_1460(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x5b4 PushV
	var_50_int = var_41_cvector | var_41_cvector; // 0x5b5 Or
	var_49_float = sqrt(var_50_int); // 0x5b6 Sqrt2
	var_51_float = 0.0; // 0x5b7 PushF
	var_52_bool = var_49_float < var_51_float; // 0x5b8 LT
	if(var_52_bool == 0) goto Label_1468; // 0x5b9 JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5ba MovV
	return 2; // 0x5bb Return
	
Label_1468:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x5bc Div2
	return 2; // 0x5bd Return
}


func_1975(var_372_bool, var_373_object)
{
	var_374_float = 0; var_375_object = Obj(); // 0x7b8 PushV
	var_375_object = var_373_object; // 0x7b9 Mov
	func_993(var_375_object); // 0x7ba NEW_2
	var_382_float = 40000.0; // 0x7bc PushF
	var_372_bool = var_374_float <= var_382_float; // 0x7bd LE2
	return 0; // 0x7be Return
}


func_439()
{
	StopAsync(); // 0x1b7 Func
	StopGroup0(); // 0x1b9 Func
	Stop(); // 0x1bb Func
	return 0; // 0x1bd Return
}


func_1595(var_33_int, var_34_int)
{
	var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0; // 0x63b PushV
	var_39_bool = var_33_int > var_34_int; // 0x63c GT
	if(var_39_bool == 0) goto Label_1602; // 0x63d JumpB
	var_40_string = "GenerateMoney: iMin > iMax"; // 0x63e PushS
	Trace(var_40_string); // 0x63f Func
	return 4; // 0x641 Return
	
Label_1602:
	var_37_int = 0; // 0x642 MovI
	var_41_bool = var_33_int != var_34_int; // 0x643 Neq
	if(var_41_bool == 0) goto Label_1609; // 0x644 JumpB
	var_42_int = var_34_int - var_33_int; // 0x645 Sub
	irand(var_37_int, var_42_int); // 0x646 Func
	goto Label_1613; // 0x648 Jump
	
Label_1613:
	var_37_int = var_37_int + var_33_int; // 0x64d Add2
	var_43_int = 0; // 0x64e PushI
	var_44_bool = var_37_int == var_43_int; // 0x64f Eq
	if(var_44_bool == 0) goto Label_1618; // 0x650 JumpB
	return 4; // 0x651 Return
	
Label_1618:
	var_45_int = 0; var_46_string = ""; // 0x652 PushV
	var_46_string = "Money"; // 0x653 MovS
	func_1703(var_45_int, var_46_string); // 0x654 NEW_2
	var_49_int = 0; // 0x656 PushI
	AddItem(var_38_bool, var_45_int, var_49_int, var_37_int); // 0x657 Func
	return 4; // 0x659 Return
	
Label_1609:
	var_50_int = 0; // 0x649 PushI
	var_51_bool = var_33_int == var_50_int; // 0x64a Eq
	if(var_51_bool == 0) goto Label_1613; // 0x64b JumpB
	return 4; // 0x64c Return
}


func_189()
{
	StopAsync(); // 0xbd Func
	var_128_int = 100; // 0xbf PushI
	KillTimer(var_128_int); // 0xc0 Func
	StopGroup0(); // 0xc2 Func
	return 0; // 0xc4 Return
}


func_1470(var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5be PushV
	var_28_cvector = var_26_cvector - var_25_cvector; // 0x5bf Sub2
	var_24_float = var_28_cvector | var_28_cvector; // 0x5c0 Or2
	return 2; // 0x5c1 Return
}


func_1983(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_float = 0; // 0x7bf PushV
	var_58_bool = 0; var_59_object = Obj(); // 0x7c0 PushV
	var_59_object = var_51_object; // 0x7c1 Mov
	func_1132(var_58_bool, var_59_object); // 0x7c2 NEW_2
	var_60_bool = var_58_bool == 0; // 0x7c4 Not
	if(var_60_bool == 0) goto Label_1992; // 0x7c5 JumpB
	var_50_bool = 0; // 0x7c6 MovB
	return 6; // 0x7c7 Return
	
Label_1992:
	var_61_bool = 0; var_62_object = Obj(); // 0x7c8 PushV
	var_62_object = var_51_object; // 0x7c9 Mov
	func_1001(var_61_bool, var_62_object); // 0x7ca NEW_2
	if(var_61_bool == 0) goto Label_2003; // 0x7cc JumpB
	var_65_string = "reputation"; // 0x7cd PushS
	GetProperty(var_65_string, var_55_float); // 0x7ce ObjFunc
	var_66_float = 0.33; // 0x7d0 PushF
	var_50_bool = var_55_float < var_66_float; // 0x7d1 LT2
	return 6; // 0x7d2 Return
	
Label_2003:
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; // 0x7d3 PushV
	var_68_object = var_51_object; // 0x7d4 Mov
	var_69_string = "class"; // 0x7d5 MovS
	func_1006(var_67_bool, var_68_object, var_69_string); // 0x7d6 NEW_2
	var_70_bool = var_67_bool == 0; // 0x7d8 Not
	if(var_70_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_50_bool = 0; // 0x7da MovB
	return 6; // 0x7db Return
	
Label_2012:
	var_71_string = "class"; // 0x7dc PushS
	GetProperty(var_71_string, var_56_string); // 0x7dd ObjFunc
	var_72_bool = 0; // 0x7df PushV
	var_72_bool = 1; // 0x7e0 MovB
	var_73_bool = 0; // 0x7e1 PushV
	var_73_bool = 1; // 0x7e2 MovB
	var_74_string = "bomber"; // 0x7e3 PushS
	var_75_bool = var_56_string == var_74_string; // 0x7e4 Eq
	if(var_75_bool == 0) goto Label_2026; // 0x7e5 JumpB
	var_76_string = "hunter"; // 0x7e6 PushS
	var_77_bool = var_56_string == var_76_string; // 0x7e7 Eq
	if(var_77_bool == 0) goto Label_2026; // 0x7e8 JumpB
	var_73_bool = 0; // 0x7e9 MovB
	
Label_2026:
	if(var_73_bool == 0) goto Label_2031; // 0x7ea JumpB
	var_78_string = "grabitel"; // 0x7eb PushS
	var_79_bool = var_56_string == var_78_string; // 0x7ec Eq
	if(var_79_bool == 0) goto Label_2031; // 0x7ed JumpB
	var_72_bool = 0; // 0x7ee MovB
	
Label_2031:
	if(var_72_bool == 0) goto Label_2034; // 0x7ef JumpB
	var_50_bool = 1; // 0x7f0 MovB
	return 6; // 0x7f1 Return
	
Label_2034:
	var_80_bool = 0; var_81_object = Obj(); var_82_string = ""; // 0x7f2 PushV
	var_81_object = var_51_object; // 0x7f3 Mov
	var_82_string = "disease"; // 0x7f4 MovS
	func_1006(var_80_bool, var_81_object, var_82_string); // 0x7f5 NEW_2
	var_83_bool = var_80_bool == 0; // 0x7f7 Not
	if(var_83_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_50_bool = 0; // 0x7f9 MovB
	return 6; // 0x7fa Return
	
Label_2043:
	var_84_bool = 0; // 0x7fb PushV
	var_84_bool = 1; // 0x7fc MovB
	var_85_bool = 0; var_86_string = ""; // 0x7fd PushV
	var_86_string = var_56_string; // 0x7fe Mov
	func_1367(var_85_bool, var_86_string); // 0x7ff NEW_2
	if(var_85_bool == 0) goto Label_2054; // 0x801 JumpB
	var_124_string = "dog"; // 0x802 PushS
	var_125_bool = var_56_string == var_124_string; // 0x803 Eq
	if(var_125_bool == 0) goto Label_2054; // 0x804 JumpB
	var_84_bool = 0; // 0x805 MovB
	
Label_2054:
	if(var_84_bool == 0) goto Label_2061; // 0x806 JumpB
	var_126_string = "disease"; // 0x807 PushS
	GetProperty(var_126_string, var_57_float); // 0x808 ObjFunc
	var_127_int = 0; // 0x80a PushI
	var_50_bool = var_57_float > var_127_int; // 0x80b GT2
	return 6; // 0x80c Return
	
Label_2061:
	var_50_bool = 0; // 0x80d MovB
	return 6; // 0x80e Return
}


func_1474(var_287_float, var_288_float, var_289_float)
{
	var_292_bool = var_288_float < var_289_float; // 0x5c3 LT
	if(var_292_bool == 0) goto Label_1479; // 0x5c4 JumpB
	var_287_float = var_288_float; // 0x5c5 Mov
	goto Label_1480; // 0x5c6 Jump
	
Label_1480:
	return 0; // 0x5c8 Return
	
Label_1479:
	var_287_float = var_289_float; // 0x5c7 Mov
}


func_1091(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x443 PushV
	IsDead(var_31_bool); // 0x444 ObjFunc
	var_28_bool = var_31_bool; // 0x446 Mov
	return 2; // 0x447 Return
}


func_2117(var_128_object)
{
	var_129_object = Obj(); // 0x846 PushV
	var_129_object = var_128_object; // 0x847 Mov
	func_1954(var_129_object); // 0x848 NEW_2
	return 0; // 0x84a Return
}


func_966()
{
	StopGroup0(); // 0x3c6 Func
	Stop(); // 0x3c8 Func
	return 0; // 0x3ca Return
}


func_455(var_0_object, var_1_object, var_2_bool, var_136_object, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x1c7 PushV
	var_0_object = var_136_object; // 0x1c8 TMov
	var_145_object = Obj(); // 0x1c9 PushV
	var_145_object = var_0_object; // 0x1ca MovT
	func_1556(var_145_object); // 0x1cb NEW_2
	func_1565(); // 0x1ce NEW_2
	Face(var_0_object); // 0x1d0 Func
	var_156_bool = var_137_bool; // 0x1d2 Push
	if(var_156_bool == 0) goto Label_474; // 0x1d3 JumpB
	var_157_string = "all"; // 0x1d4 PushS
	var_158_string = "attack_on"; // 0x1d5 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x1d6 Func
	WaitForAnimEnd(); // 0x1d8 Func
	
Label_474:
	var_159_string = "all"; // 0x1da PushS
	var_160_string = "attack_on"; // 0x1db PushS
	LockAnimationEnd(var_159_string, var_160_string); // 0x1dc Func
	var_161_bool = 1; // 0x1de PushB
	SetAttackState(var_161_bool); // 0x1df Func
	
Label_481:
	var_162_bool = 0; var_163_object = Obj(); // 0x1e1 PushV
	var_163_object = var_0_object; // 0x1e2 MovT
	func_1132(var_162_bool, var_163_object); // 0x1e3 NEW_2
	if(var_162_bool == 0) goto Label_587; // 0x1e5 JumpB
	CanSee(var_144_bool, var_0_object); // 0x1e6 Func
	var_164_bool = var_144_bool; // 0x1e8 Push
	if(var_164_bool == 0) goto Label_498; // 0x1e9 JumpB
	var_165_object = Obj(); // 0x1ea PushV
	var_165_object = var_0_object; // 0x1eb MovT
	func_1556(var_165_object); // 0x1ec NEW_2
	func_635(var_144_bool); // 0x1ef NEW_2
	goto Label_577; // 0x1f1 Jump
	
Label_577:
	var_326_bool = var_1_object != 0; // 0x241 NullNeq
	if(var_326_bool == 0) goto Label_583; // 0x242 JumpB
	func_630(var_143_bool, var_144_bool); // 0x244 NEW_2
	goto Label_586; // 0x246 Jump
	
Label_586:
	goto Label_481; // 0x24a Jump
	
Label_583:
	var_327_int = 2; // 0x247 PushI
	Sleep(var_327_int); // 0x248 Func
	
Label_498:
	var_328_object = Obj(); // 0x1f2 PushV
	var_328_object = var_0_object; // 0x1f3 MovT
	func_1282(); // 0x1f4 NEW_2
	var_2_bool = 1; // 0x1f6 TMovB
	var_337_string = "all"; // 0x1f7 PushS
	var_338_string = "hunt"; // 0x1f8 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x1f9 Func
	WaitForAnimEnd(var_143_bool); // 0x1fb Func
	var_339_bool = var_143_bool == 0; // 0x1fd Not
	if(var_339_bool == 0) goto Label_521; // 0x1fe JumpB
	var_340_bool = var_1_object != 0; // 0x1ff NullNeq
	if(var_340_bool == 0) goto Label_516; // 0x200 JumpB
	func_630(var_143_bool, var_144_bool); // 0x202 NEW_2
	
Label_516:
	var_341_string = "all"; // 0x204 PushS
	var_342_string = "attack_on"; // 0x205 PushS
	LockAnimationEnd(var_341_string, var_342_string); // 0x206 Func
	goto Label_481; // 0x208 Jump
	
Label_521:
	var_343_bool = 0; var_344_object = Obj(); // 0x209 PushV
	var_344_object = var_0_object; // 0x20a MovT
	func_1132(var_343_bool, var_344_object); // 0x20b NEW_2
	var_345_bool = var_343_bool == 0; // 0x20d Not
	if(var_345_bool == 0) goto Label_528; // 0x20e JumpB
	goto Label_587; // 0x20f Jump
	
Label_587:
	var_346_bool = 0; // 0x24b PushB
	SetAttackState(var_346_bool); // 0x24c Func
	StopAsync(); // 0x24e Func
	var_347_string = "all"; // 0x250 PushS
	var_348_string = "attack_off"; // 0x251 PushS
	PlayAnimation(var_347_string, var_348_string); // 0x252 Func
	WaitForAnimEnd(); // 0x254 Func
	return 4; // 0x256 Return
	
Label_528:
	CanSee(var_144_bool, var_0_object); // 0x210 Func
	var_349_bool = var_144_bool; // 0x212 Push
	if(var_349_bool == 0) goto Label_539; // 0x213 JumpB
	var_2_bool = 0; // 0x214 TMovB
	Face(var_0_object); // 0x215 Func
	func_635(var_144_bool); // 0x218 NEW_2
	goto Label_577; // 0x21a Jump
	
Label_539:
	var_350_string = "all"; // 0x21b PushS
	var_351_string = "attack_on"; // 0x21c PushS
	LockAnimationEnd(var_350_string, var_351_string); // 0x21d Func
	var_352_int = 3; // 0x21f PushI
	Sleep(var_352_int, var_143_bool); // 0x220 Func
	var_353_bool = var_143_bool == 0; // 0x222 Not
	if(var_353_bool == 0) goto Label_558; // 0x223 JumpB
	var_354_bool = var_1_object != 0; // 0x224 NullNeq
	if(var_354_bool == 0) goto Label_553; // 0x225 JumpB
	func_630(var_143_bool, var_144_bool); // 0x227 NEW_2
	
Label_553:
	var_355_string = "all"; // 0x229 PushS
	var_356_string = "attack_on"; // 0x22a PushS
	LockAnimationEnd(var_355_string, var_356_string); // 0x22b Func
	goto Label_481; // 0x22d Jump
	
Label_558:
	var_357_bool = 0; var_358_object = Obj(); // 0x22e PushV
	var_358_object = var_0_object; // 0x22f MovT
	func_1132(var_357_bool, var_358_object); // 0x230 NEW_2
	var_359_bool = var_357_bool == 0; // 0x232 Not
	if(var_359_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_587; // 0x234 Jump
	
Label_565:
	var_2_bool = 0; // 0x235 TMovB
	CanSee(var_144_bool, var_0_object); // 0x236 Func
	var_360_bool = var_144_bool; // 0x238 Push
	if(var_360_bool == 0) goto Label_576; // 0x239 JumpB
	Face(var_0_object); // 0x23a Func
	func_635(var_144_bool); // 0x23d NEW_2
	goto Label_577; // 0x23f Jump
	
Label_576:
	goto Label_587; // 0x240 Jump
}


func_1096(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x448 PushV
	var_23_bool = var_18_object == 0; // 0x449 NullEq
	if(var_23_bool == 0) goto Label_1101; // 0x44a JumpB
	var_17_bool = 0; // 0x44b MovB
	return 4; // 0x44c Return
	
Label_1101:
	var_24_bool = 0; // 0x44d PushV
	var_24_bool = 0; // 0x44e MovB
	var_25_string = "IsDead"; // 0x44f PushS
	var_26_int = 1; // 0x450 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x451 FuncExist
	if(var_27_bool == 0) goto Label_1113; // 0x452 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x453 PushV
	var_29_object = var_18_object; // 0x454 Mov
	func_1091(var_29_object); // 0x455 NEW_2
	if(var_28_bool == 0) goto Label_1113; // 0x457 JumpB
	var_24_bool = 1; // 0x458 MovB
	
Label_1113:
	if(var_24_bool == 0) goto Label_1116; // 0x459 JumpB
	var_17_bool = 0; // 0x45a MovB
	return 4; // 0x45b Return
	
Label_1116:
	GetScene(var_21_object); // 0x45c Func
	var_32_bool = var_21_object == 0; // 0x45e NullEq
	if(var_32_bool == 0) goto Label_1122; // 0x45f JumpB
	var_17_bool = 0; // 0x460 MovB
	return 4; // 0x461 Return
	
Label_1122:
	GetScene(var_22_object); // 0x462 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x464 Neq
	if(var_33_bool == 0) goto Label_1128; // 0x465 JumpB
	var_17_bool = 0; // 0x466 MovB
	return 4; // 0x467 Return
	
Label_1128:
	var_17_bool = 1; // 0x468 MovB
	return 4; // 0x469 Return
}


func_1481(var_297_float, var_298_float, var_299_float, var_300_float)
{
	var_301_bool = var_298_float < var_299_float; // 0x5ca LT
	if(var_301_bool == 0) goto Label_1486; // 0x5cb JumpB
	var_297_float = var_299_float; // 0x5cc Mov
	return 0; // 0x5cd Return
	
Label_1486:
	var_302_bool = var_298_float > var_300_float; // 0x5ce GT
	if(var_302_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_297_float = var_300_float; // 0x5d0 Mov
	return 0; // 0x5d1 Return
	
Label_1490:
	var_297_float = var_298_float; // 0x5d2 Mov
	return 0; // 0x5d3 Return
}


func_971()
{
	return 0; // 0x3cb Return
}


func_972(var_277_string, var_278_int)
{
	var_279_int = 2; // 0x3cd PushI
	var_280_bool = var_278_int == var_279_int; // 0x3ce Eq
	if(var_280_bool == 0) goto Label_979; // 0x3cf JumpB
	var_277_string = "fire"; // 0x3d0 MovS
	return 0; // 0x3d1 Return
	
Label_979:
	var_281_int = 1; // 0x3d3 PushI
	var_282_bool = var_278_int == var_281_int; // 0x3d4 Eq
	if(var_282_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_277_string = "bullet"; // 0x3d6 MovS
	return 0; // 0x3d7 Return
	
Label_984:
	var_277_string = "phys"; // 0x3d8 MovS
	return 0; // 0x3d9 Return
}


func_2123(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x84b PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x84c PushV
	var_22_object = var_18_object; // 0x84d Mov
	func_1001(var_21_bool, var_22_object); // 0x84e NEW_2
	if(var_21_bool == 0) goto Label_2137; // 0x850 JumpB
	GetScene(var_20_object); // 0x851 Func
	var_23_object = Obj(); // 0x853 PushV
	func_1454(var_23_object); // 0x854 NEW_2
	RemoveStationaryActor(var_23_object); // 0x856 ObjFunc
	var_20_object = 0; // 0x858 SetNull
	
Label_2137:
	var_24_object = Obj(); // 0x859 PushV
	var_24_object = var_18_object; // 0x85a Mov
	func_1708(var_24_object); // 0x85b NEW_2
	return 2; // 0x85d Return
}


func_1492(var_60_bool, var_61_int, var_62_int)
{
	var_63_int = 0; var_64_int = 0; // 0x5d4 PushV
	irand(var_64_int, var_62_int); // 0x5d5 Func
	var_60_bool = var_64_int < var_61_int; // 0x5d7 LT2
	return 2; // 0x5d8 Return
}


func_1367(var_85_bool, var_86_string)
{
	var_85_bool = 1; // 0x558 MovB
	var_87_bool = 0; // 0x559 PushV
	var_87_bool = 1; // 0x55a MovB
	var_88_bool = 0; // 0x55b PushV
	var_88_bool = 1; // 0x55c MovB
	var_89_bool = 0; // 0x55d PushV
	var_89_bool = 1; // 0x55e MovB
	var_90_bool = 0; // 0x55f PushV
	var_90_bool = 1; // 0x560 MovB
	var_91_bool = 0; // 0x561 PushV
	var_91_bool = 1; // 0x562 MovB
	var_92_bool = 0; // 0x563 PushV
	var_92_bool = 1; // 0x564 MovB
	var_93_bool = 0; // 0x565 PushV
	var_93_bool = 1; // 0x566 MovB
	var_94_bool = 0; // 0x567 PushV
	var_94_bool = 1; // 0x568 MovB
	var_95_bool = 0; // 0x569 PushV
	var_95_bool = 1; // 0x56a MovB
	var_96_bool = 0; // 0x56b PushV
	var_96_bool = 1; // 0x56c MovB
	var_97_bool = 0; // 0x56d PushV
	var_97_bool = 1; // 0x56e MovB
	var_98_string = "woman"; // 0x56f PushS
	var_99_bool = var_86_string == var_98_string; // 0x570 Eq
	if(var_99_bool == 0) goto Label_1398; // 0x571 JumpB
	var_100_string = "worker"; // 0x572 PushS
	var_101_bool = var_86_string == var_100_string; // 0x573 Eq
	if(var_101_bool == 0) goto Label_1398; // 0x574 JumpB
	var_97_bool = 0; // 0x575 MovB
	
Label_1398:
	if(var_97_bool == 0) goto Label_1403; // 0x576 JumpB
	var_102_string = "butcher"; // 0x577 PushS
	var_103_bool = var_86_string == var_102_string; // 0x578 Eq
	if(var_103_bool == 0) goto Label_1403; // 0x579 JumpB
	var_96_bool = 0; // 0x57a MovB
	
Label_1403:
	if(var_96_bool == 0) goto Label_1408; // 0x57b JumpB
	var_104_string = "wasted_girl"; // 0x57c PushS
	var_105_bool = var_86_string == var_104_string; // 0x57d Eq
	if(var_105_bool == 0) goto Label_1408; // 0x57e JumpB
	var_95_bool = 0; // 0x57f MovB
	
Label_1408:
	if(var_95_bool == 0) goto Label_1413; // 0x580 JumpB
	var_106_string = "boy"; // 0x581 PushS
	var_107_bool = var_86_string == var_106_string; // 0x582 Eq
	if(var_107_bool == 0) goto Label_1413; // 0x583 JumpB
	var_94_bool = 0; // 0x584 MovB
	
Label_1413:
	if(var_94_bool == 0) goto Label_1418; // 0x585 JumpB
	var_108_string = "vaxxabitka"; // 0x586 PushS
	var_109_bool = var_86_string == var_108_string; // 0x587 Eq
	if(var_109_bool == 0) goto Label_1418; // 0x588 JumpB
	var_93_bool = 0; // 0x589 MovB
	
Label_1418:
	if(var_93_bool == 0) goto Label_1423; // 0x58a JumpB
	var_110_string = "unosha"; // 0x58b PushS
	var_111_bool = var_86_string == var_110_string; // 0x58c Eq
	if(var_111_bool == 0) goto Label_1423; // 0x58d JumpB
	var_92_bool = 0; // 0x58e MovB
	
Label_1423:
	if(var_92_bool == 0) goto Label_1428; // 0x58f JumpB
	var_112_string = "wasted_male"; // 0x590 PushS
	var_113_bool = var_86_string == var_112_string; // 0x591 Eq
	if(var_113_bool == 0) goto Label_1428; // 0x592 JumpB
	var_91_bool = 0; // 0x593 MovB
	
Label_1428:
	if(var_91_bool == 0) goto Label_1433; // 0x594 JumpB
	var_114_string = "alkash"; // 0x595 PushS
	var_115_bool = var_86_string == var_114_string; // 0x596 Eq
	if(var_115_bool == 0) goto Label_1433; // 0x597 JumpB
	var_90_bool = 0; // 0x598 MovB
	
Label_1433:
	if(var_90_bool == 0) goto Label_1438; // 0x599 JumpB
	var_116_string = "dohodyaga"; // 0x59a PushS
	var_117_bool = var_86_string == var_116_string; // 0x59b Eq
	if(var_117_bool == 0) goto Label_1438; // 0x59c JumpB
	var_89_bool = 0; // 0x59d MovB
	
Label_1438:
	if(var_89_bool == 0) goto Label_1443; // 0x59e JumpB
	var_118_string = "vaxxabit"; // 0x59f PushS
	var_119_bool = var_86_string == var_118_string; // 0x5a0 Eq
	if(var_119_bool == 0) goto Label_1443; // 0x5a1 JumpB
	var_88_bool = 0; // 0x5a2 MovB
	
Label_1443:
	if(var_88_bool == 0) goto Label_1448; // 0x5a3 JumpB
	var_120_string = "nudegirl"; // 0x5a4 PushS
	var_121_bool = var_86_string == var_120_string; // 0x5a5 Eq
	if(var_121_bool == 0) goto Label_1448; // 0x5a6 JumpB
	var_87_bool = 0; // 0x5a7 MovB
	
Label_1448:
	if(var_87_bool == 0) goto Label_1453; // 0x5a8 JumpB
	var_122_string = "morlok"; // 0x5a9 PushS
	var_123_bool = var_86_string == var_122_string; // 0x5aa Eq
	if(var_123_bool == 0) goto Label_1453; // 0x5ab JumpB
	var_85_bool = 0; // 0x5ac MovB
	
Label_1453:
	return 0; // 0x5ad Return
}


func_1497(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x5d9 PushV
	CreateObjectSet(var_11_object); // 0x5da Func
	var_9_object = var_11_object; // 0x5dc Mov
	return 2; // 0x5dd Return
}


func_986(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x3da PushV
	GetPosition(var_46_cvector); // 0x3db Func
	GetPosition(var_47_cvector); // 0x3dd ObjFunc
	var_42_cvector = var_47_cvector - var_46_cvector; // 0x3df Sub2
	return 4; // 0x3e0 Return
}


func_1626(var_90_string)
{
	var_91_object = Obj(); var_92_int = 0; var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; var_96_bool = 0; // 0x65a PushV
	CreateInvItem(var_94_object); // 0x65b Func
	SetItemName(var_90_string); // 0x65d ObjFunc
	var_97_string = "Organ"; // 0x65f PushS
	var_98_int = 1; // 0x660 PushI
	SetProperty(var_97_string, var_98_int); // 0x661 ObjFunc
	GetItemID(var_95_int); // 0x663 ObjFunc
	var_99_int = 0; // 0x665 PushI
	var_100_int = 1; // 0x666 PushI
	AddItem(var_96_bool, var_94_object, var_99_int, var_100_int); // 0x667 Func
	return 6; // 0x669 Return
}


func_1503(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0); // 0x5e0 PushE
	var_211_float = GetByIndex(var_209_cvector, 0); // 0x5e1 PushE
	var_212_float = var_210_float * var_211_float; // 0x5e2 Mult
	var_213_float = GetByIndex(var_208_cvector, 2); // 0x5e3 PushE
	var_214_float = GetByIndex(var_209_cvector, 2); // 0x5e4 PushE
	var_215_float = var_213_float * var_214_float; // 0x5e5 Mult
	var_207_float = var_212_float + var_215_float; // 0x5e6 Add2
	return 0; // 0x5e7 Return
}


func_993(var_374_float)
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); // 0x3e1 PushV
	GetPosition(var_379_cvector); // 0x3e2 Func
	GetPosition(var_380_cvector); // 0x3e4 ObjFunc
	var_381_cvector = var_380_cvector - var_379_cvector; // 0x3e6 Sub2
	var_374_float = var_381_cvector | var_381_cvector; // 0x3e7 Or2
	return 6; // 0x3e8 Return
}


func_1765(var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = ""; var_21_string = ""; // 0x6e5 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x6e6 PushV
	var_23_object = var_18_object; // 0x6e7 Mov
	var_24_string = "class"; // 0x6e8 MovS
	func_1006(var_22_bool, var_23_object, var_24_string); // 0x6e9 NEW_2
	var_31_bool = var_22_bool == 0; // 0x6eb Not
	if(var_31_bool == 0) goto Label_1775; // 0x6ec JumpB
	var_17_bool = 0; // 0x6ed MovB
	return 2; // 0x6ee Return
	
Label_1775:
	var_32_string = "class"; // 0x6ef PushS
	GetProperty(var_32_string, var_21_string); // 0x6f0 ObjFunc
	var_33_bool = 0; // 0x6f2 PushV
	var_33_bool = 1; // 0x6f3 MovB
	var_34_bool = 0; // 0x6f4 PushV
	var_34_bool = 1; // 0x6f5 MovB
	var_35_bool = 0; // 0x6f6 PushV
	var_35_bool = 1; // 0x6f7 MovB
	var_36_bool = 0; // 0x6f8 PushV
	var_36_bool = 1; // 0x6f9 MovB
	var_37_bool = 0; // 0x6fa PushV
	var_37_bool = 1; // 0x6fb MovB
	var_38_bool = 0; // 0x6fc PushV
	var_38_bool = 1; // 0x6fd MovB
	var_39_bool = 0; // 0x6fe PushV
	var_39_bool = 1; // 0x6ff MovB
	var_40_bool = 0; // 0x700 PushV
	var_40_bool = 1; // 0x701 MovB
	var_41_bool = 0; // 0x702 PushV
	var_41_bool = 1; // 0x703 MovB
	var_42_bool = 0; // 0x704 PushV
	var_42_bool = 1; // 0x705 MovB
	var_43_string = "patrol"; // 0x706 PushS
	var_44_bool = var_21_string == var_43_string; // 0x707 Eq
	if(var_44_bool == 0) goto Label_1805; // 0x708 JumpB
	var_45_string = "sanitar"; // 0x709 PushS
	var_46_bool = var_21_string == var_45_string; // 0x70a Eq
	if(var_46_bool == 0) goto Label_1805; // 0x70b JumpB
	var_42_bool = 0; // 0x70c MovB
	
Label_1805:
	if(var_42_bool == 0) goto Label_1810; // 0x70d JumpB
	var_47_string = "soldier"; // 0x70e PushS
	var_48_bool = var_21_string == var_47_string; // 0x70f Eq
	if(var_48_bool == 0) goto Label_1810; // 0x710 JumpB
	var_41_bool = 0; // 0x711 MovB
	
Label_1810:
	if(var_41_bool == 0) goto Label_1815; // 0x712 JumpB
	var_49_string = "woman"; // 0x713 PushS
	var_50_bool = var_21_string == var_49_string; // 0x714 Eq
	if(var_50_bool == 0) goto Label_1815; // 0x715 JumpB
	var_40_bool = 0; // 0x716 MovB
	
Label_1815:
	if(var_40_bool == 0) goto Label_1820; // 0x717 JumpB
	var_51_string = "wasted_girl"; // 0x718 PushS
	var_52_bool = var_21_string == var_51_string; // 0x719 Eq
	if(var_52_bool == 0) goto Label_1820; // 0x71a JumpB
	var_39_bool = 0; // 0x71b MovB
	
Label_1820:
	if(var_39_bool == 0) goto Label_1825; // 0x71c JumpB
	var_53_string = "vaxxabitka"; // 0x71d PushS
	var_54_bool = var_21_string == var_53_string; // 0x71e Eq
	if(var_54_bool == 0) goto Label_1825; // 0x71f JumpB
	var_38_bool = 0; // 0x720 MovB
	
Label_1825:
	if(var_38_bool == 0) goto Label_1830; // 0x721 JumpB
	var_55_string = "vaxxabit"; // 0x722 PushS
	var_56_bool = var_21_string == var_55_string; // 0x723 Eq
	if(var_56_bool == 0) goto Label_1830; // 0x724 JumpB
	var_37_bool = 0; // 0x725 MovB
	
Label_1830:
	if(var_37_bool == 0) goto Label_1835; // 0x726 JumpB
	var_57_string = "little_girl"; // 0x727 PushS
	var_58_bool = var_21_string == var_57_string; // 0x728 Eq
	if(var_58_bool == 0) goto Label_1835; // 0x729 JumpB
	var_36_bool = 0; // 0x72a MovB
	
Label_1835:
	if(var_36_bool == 0) goto Label_1840; // 0x72b JumpB
	var_59_string = "girl"; // 0x72c PushS
	var_60_bool = var_21_string == var_59_string; // 0x72d Eq
	if(var_60_bool == 0) goto Label_1840; // 0x72e JumpB
	var_35_bool = 0; // 0x72f MovB
	
Label_1840:
	if(var_35_bool == 0) goto Label_1845; // 0x730 JumpB
	var_61_string = "dohodyaga"; // 0x731 PushS
	var_62_bool = var_21_string == var_61_string; // 0x732 Eq
	if(var_62_bool == 0) goto Label_1845; // 0x733 JumpB
	var_34_bool = 0; // 0x734 MovB
	
Label_1845:
	if(var_34_bool == 0) goto Label_1850; // 0x735 JumpB
	var_63_string = "nudegirl"; // 0x736 PushS
	var_64_bool = var_21_string == var_63_string; // 0x737 Eq
	if(var_64_bool == 0) goto Label_1850; // 0x738 JumpB
	var_33_bool = 0; // 0x739 MovB
	
Label_1850:
	if(var_33_bool == 0) goto Label_1853; // 0x73a JumpB
	var_17_bool = 1; // 0x73b MovB
	return 2; // 0x73c Return
	
Label_1853:
	var_65_bool = var_19_bool; // 0x73d Push
	if(var_65_bool == 0) goto Label_1857; // 0x73e JumpB
	var_17_bool = 0; // 0x73f MovB
	return 2; // 0x740 Return
	
Label_1857:
	var_17_bool = 1; // 0x741 MovB
	var_66_bool = 0; // 0x742 PushV
	var_66_bool = 1; // 0x743 MovB
	var_67_bool = 0; // 0x744 PushV
	var_67_bool = 1; // 0x745 MovB
	var_68_bool = 0; // 0x746 PushV
	var_68_bool = 1; // 0x747 MovB
	var_69_bool = 0; // 0x748 PushV
	var_69_bool = 1; // 0x749 MovB
	var_70_bool = 0; // 0x74a PushV
	var_70_bool = 1; // 0x74b MovB
	var_71_string = "worker"; // 0x74c PushS
	var_72_bool = var_21_string == var_71_string; // 0x74d Eq
	if(var_72_bool == 0) goto Label_1875; // 0x74e JumpB
	var_73_string = "butcher"; // 0x74f PushS
	var_74_bool = var_21_string == var_73_string; // 0x750 Eq
	if(var_74_bool == 0) goto Label_1875; // 0x751 JumpB
	var_70_bool = 0; // 0x752 MovB
	
Label_1875:
	if(var_70_bool == 0) goto Label_1880; // 0x753 JumpB
	var_75_string = "boy"; // 0x754 PushS
	var_76_bool = var_21_string == var_75_string; // 0x755 Eq
	if(var_76_bool == 0) goto Label_1880; // 0x756 JumpB
	var_69_bool = 0; // 0x757 MovB
	
Label_1880:
	if(var_69_bool == 0) goto Label_1885; // 0x758 JumpB
	var_77_string = "unosha"; // 0x759 PushS
	var_78_bool = var_21_string == var_77_string; // 0x75a Eq
	if(var_78_bool == 0) goto Label_1885; // 0x75b JumpB
	var_68_bool = 0; // 0x75c MovB
	
Label_1885:
	if(var_68_bool == 0) goto Label_1890; // 0x75d JumpB
	var_79_string = "wasted_male"; // 0x75e PushS
	var_80_bool = var_21_string == var_79_string; // 0x75f Eq
	if(var_80_bool == 0) goto Label_1890; // 0x760 JumpB
	var_67_bool = 0; // 0x761 MovB
	
Label_1890:
	if(var_67_bool == 0) goto Label_1895; // 0x762 JumpB
	var_81_string = "alkash"; // 0x763 PushS
	var_82_bool = var_21_string == var_81_string; // 0x764 Eq
	if(var_82_bool == 0) goto Label_1895; // 0x765 JumpB
	var_66_bool = 0; // 0x766 MovB
	
Label_1895:
	if(var_66_bool == 0) goto Label_1900; // 0x767 JumpB
	var_83_string = "morlok"; // 0x768 PushS
	var_84_bool = var_21_string == var_83_string; // 0x769 Eq
	if(var_84_bool == 0) goto Label_1900; // 0x76a JumpB
	var_17_bool = 0; // 0x76b MovB
	
Label_1900:
	return 2; // 0x76c Return
}


func_1512(var_216_float, var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0); // 0x5e9 PushE
	var_219_float = GetByIndex(var_217_cvector, 0); // 0x5ea PushE
	var_220_float = var_218_float * var_219_float; // 0x5eb Mult
	var_221_float = GetByIndex(var_217_cvector, 2); // 0x5ec PushE
	var_222_float = GetByIndex(var_217_cvector, 2); // 0x5ed PushE
	var_223_float = var_221_float * var_222_float; // 0x5ee Mult
	var_224_int = var_220_float + var_223_float; // 0x5ef Add
	var_216_float = sqrt(var_224_int); // 0x5f0 Sqrt2
	return 0; // 0x5f1 Return
}


func_1001(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x3e9 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x3ea Func
	var_9_bool = var_12_bool; // 0x3ec Mov
	return 2; // 0x3ed Return
}


func_1643()
{
	var_84_int = 0; // 0x66b PushV
	func_1576(var_84_int); // 0x66c NEW_2
	var_88_int = 1; // 0x66e PushI
	var_89_bool = var_84_int != var_88_int; // 0x66f Neq
	if(var_89_bool == 0) goto Label_1650; // 0x670 JumpB
	return 0; // 0x671 Return
	
Label_1650:
	var_90_string = ""; // 0x672 PushV
	var_90_string = "liver"; // 0x673 MovS
	func_1626(var_90_string); // 0x674 NEW_2
	var_101_string = ""; // 0x676 PushV
	var_101_string = "kidney"; // 0x677 MovS
	func_1626(var_101_string); // 0x678 NEW_2
	var_102_string = ""; // 0x67a PushV
	var_102_string = "heart"; // 0x67b MovS
	func_1626(var_102_string); // 0x67c NEW_2
	var_103_string = ""; // 0x67e PushV
	var_103_string = "blood"; // 0x67f MovS
	func_1626(var_103_string); // 0x680 NEW_2
	return 0; // 0x682 Return
}


func_1132(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x46c PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x46d PushV
	var_18_object = var_14_object; // 0x46e Mov
	func_1096(var_17_bool, var_18_object); // 0x46f NEW_2
	var_34_bool = var_17_bool == 0; // 0x471 Not
	if(var_34_bool == 0) goto Label_1141; // 0x472 JumpB
	var_13_bool = 0; // 0x473 MovB
	return 2; // 0x474 Return
	
Label_1141:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x475 PushV
	var_36_object = var_14_object; // 0x476 Mov
	var_37_string = "noaccess"; // 0x477 MovS
	func_1006(var_35_bool, var_36_object, var_37_string); // 0x478 NEW_2
	var_44_bool = var_35_bool == 0; // 0x47a Not
	if(var_44_bool == 0) goto Label_1150; // 0x47b JumpB
	var_13_bool = 1; // 0x47c MovB
	return 2; // 0x47d Return
	
Label_1150:
	var_45_string = "noaccess"; // 0x47e PushS
	GetProperty(var_45_string, var_16_int); // 0x47f ObjFunc
	var_46_int = 0; // 0x481 PushI
	var_13_bool = var_16_int == var_46_int; // 0x482 Eq2
	return 2; // 0x483 Return
}


func_1901()
{
	var_8_object = GlobalVars[0]; // 0x76d PushGE
	var_9_object = Obj(); // 0x76e PushV
	func_1497(var_9_object); // 0x76f NEW_2
	var_8_object = var_9_object; // 0x770 Mov
	GlobalVars[0] = var_8_object; // 0x772 PopGE
	return 0; // 0x773 Return
}


func_1006(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x3ee PushV
	var_40_string = "HasProperty"; // 0x3ef PushS
	var_41_int = 2; // 0x3f0 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x3f1 FuncExist
	var_43_bool = var_42_bool == 0; // 0x3f2 Not
	if(var_43_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_35_bool = 0; // 0x3f4 MovB
	return 2; // 0x3f5 Return
	
Label_1014:
	HasProperty(var_37_string, var_39_bool); // 0x3f6 ObjFunc
	var_35_bool = var_39_bool; // 0x3f8 Mov
	return 2; // 0x3f9 Return
}


func_1522(var_204_float, var_205_cvector, var_206_cvector)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x5f3 PushV
	var_208_cvector = var_205_cvector; // 0x5f4 Mov
	var_209_cvector = var_206_cvector; // 0x5f5 Mov
	func_1503(var_207_float, var_208_cvector, var_209_cvector); // 0x5f6 NEW_2
	var_216_float = 0; var_217_cvector = CVector(0,0,0); // 0x5f8 PushV
	var_217_cvector = var_205_cvector; // 0x5f9 Mov
	func_1512(var_216_float, var_217_cvector); // 0x5fa NEW_2
	var_225_float = 0; var_226_cvector = CVector(0,0,0); // 0x5fc PushV
	var_226_cvector = var_206_cvector; // 0x5fd Mov
	func_1512(var_225_float, var_226_cvector); // 0x5fe NEW_2
	var_227_float = var_216_float * var_225_float; // 0x600 Mult
	var_204_float = var_207_float / var_207_float; // 0x601 Div2
	return 0; // 0x602 Return
}


func_882(var_0_object, var_1_object)
{
	var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x372 PushV
	GetPFPosition(var_19_object); // 0x373 Func
	GetDirection(var_0_object); // 0x375 Func
	
Label_887:
	func_971(); // 0x378 NEW_2
	var_20_int = 10; // 0x37a PushI
	irand(var_16_int, var_20_int); // 0x37b Func
	var_21_int = 5; // 0x37d PushI
	var_22_int = var_16_int + var_21_int; // 0x37e Add
	Sleep(var_22_int, var_17_bool); // 0x37f Func
	var_23_bool = var_17_bool; // 0x381 Push
	if(var_23_bool == 0) goto Label_903; // 0x382 JumpB
	func_804(); // 0x384 NEW_2
	goto Label_964; // 0x386 Jump
	
Label_964:
	goto Label_887; // 0x3c4 Jump
	
Label_903:
	func_971(); // 0x388 NEW_2
	GetPFPosition(var_18_cvector); // 0x38a Func
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x38c PushV
	var_25_cvector = var_1_object; // 0x38d MovT
	var_26_cvector = var_18_cvector; // 0x38e Mov
	func_1470(var_24_float, var_25_cvector, var_26_cvector); // 0x38f NEW_2
	var_29_int = 40000; // 0x391 PushI
	var_30_bool = var_24_float > var_29_int; // 0x392 GT
	if(var_30_bool == 0) goto Label_950; // 0x393 JumpB
	FindPathTo(var_19_object, var_19_object); // 0x394 Func
	var_31_bool = var_19_object != 0; // 0x396 NullNeq
	if(var_31_bool == 0) goto Label_945; // 0x397 JumpB
	RotatePath(var_19_object, var_17_bool); // 0x398 Func
	var_32_bool = var_17_bool == 0; // 0x39a Not
	if(var_32_bool == 0) goto Label_925; // 0x39b JumpB
	goto Label_963; // 0x39c Jump
	
Label_963:
	goto Label_903; // 0x3c3 Jump
	
Label_925:
	var_33_bool = 0; // 0x39d PushB
	FollowPath(var_19_object, var_33_bool, var_17_bool); // 0x39e Func
	var_34_bool = var_17_bool == 0; // 0x3a0 Not
	if(var_34_bool == 0) goto Label_931; // 0x3a1 JumpB
	goto Label_963; // 0x3a2 Jump
	
Label_931:
	var_35_float = GetByIndex(var_0_object, 0); // 0x3a3 PushE
	var_36_float = GetByIndex(var_0_object, 2); // 0x3a4 PushE
	Rotate(var_35_float, var_36_float, var_17_bool); // 0x3a5 Func
	var_37_bool = var_17_bool == 0; // 0x3a7 Not
	if(var_37_bool == 0) goto Label_938; // 0x3a8 JumpB
	goto Label_963; // 0x3a9 Jump
	
Label_938:
	WaitForAnimEnd(var_17_bool); // 0x3aa Func
	var_38_bool = var_17_bool == 0; // 0x3ac Not
	if(var_38_bool == 0) goto Label_943; // 0x3ad JumpB
	goto Label_963; // 0x3ae Jump
	
Label_943:
	goto Label_964; // 0x3af Jump
	
Label_945:
	var_39_int = 1; // 0x3b1 PushI
	Sleep(var_39_int); // 0x3b2 Func
	var_19_object = 0; // 0x3b4 SetNull
	goto Label_963; // 0x3b5 Jump
	
Label_950:
	var_40_float = GetByIndex(var_0_object, 0); // 0x3b6 PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x3b7 PushE
	Rotate(var_40_float, var_41_float, var_17_bool); // 0x3b8 Func
	var_42_bool = var_17_bool == 0; // 0x3ba Not
	if(var_42_bool == 0) goto Label_957; // 0x3bb JumpB
	goto Label_963; // 0x3bc Jump
	
Label_957:
	WaitForAnimEnd(var_17_bool); // 0x3bd Func
	var_43_bool = var_17_bool == 0; // 0x3bf Not
	if(var_43_bool == 0) goto Label_962; // 0x3c0 JumpB
	goto Label_963; // 0x3c1 Jump
	
Label_962:
	goto Label_964; // 0x3c2 Jump
}


func_1908(var_134_object, var_135_bool)
{
	var_136_object = Obj(); var_137_bool = 0; // 0x775 PushV
	var_136_object = var_134_object; // 0x776 Mov
	var_137_bool = var_135_bool; // 0x777 Mov
	TaskCall(3); // 0x778 TaskCall
	func_455(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool); // 0x779 NEW_2
	TaskReturn(); // 0x77a TaskReturn
	ResetAAS(); // 0x77c Func
	return 0; // 0x77e Return
}


func_1268(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x4f4 PushV
	GetScene(var_21_object); // 0x4f5 Func
	var_23_string = "scripted"; // 0x4f7 PushS
	var_24_string = "blood_dir.xml"; // 0x4f8 PushS
	AddActorByType(var_22_object, var_23_string, var_21_object, var_17_cvector, var_18_cvector, var_24_string); // 0x4f9 Func
	var_25_object = Obj(); // 0x4fb PushV
	var_25_object = var_14_object; // 0x4fc Mov
	func_1156(var_25_object); // 0x4fd NEW_2
	return 4; // 0x4ff Return
}


func_630(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x276 TMovT
	var_1_object = 0; // 0x277 SetNullT
	Face(var_0_object); // 0x278 Func
	return 0; // 0x27a Return
}


func_1018(var_252_float, var_253_object, var_254_float, var_255_int)
{
	var_256_int = 0; var_257_string = ""; var_258_int = 0; var_259_float = 0; var_260_float = 0; var_261_float = 0; var_262_int = 0; var_263_string = ""; var_264_int = 0; var_265_float = 0; var_266_float = 0; var_267_float = 0; // 0x3fa PushV
	var_268_bool = 0; var_269_object = Obj(); var_270_string = ""; // 0x3fb PushV
	var_269_object = var_253_object; // 0x3fc Mov
	var_270_string = "health"; // 0x3fd MovS
	func_1006(var_268_bool, var_269_object, var_270_string); // 0x3fe NEW_2
	var_271_bool = var_268_bool == 0; // 0x400 Not
	if(var_271_bool == 0) goto Label_1028; // 0x401 JumpB
	var_252_float = 0.0; // 0x402 MovF
	return 12; // 0x403 Return
	
Label_1028:
	var_272_bool = 0; var_273_object = Obj(); var_274_string = ""; // 0x404 PushV
	var_273_object = var_253_object; // 0x405 Mov
	var_274_string = "armor"; // 0x406 MovS
	func_1006(var_272_bool, var_273_object, var_274_string); // 0x407 NEW_2
	var_275_bool = var_272_bool == 0; // 0x409 Not
	if(var_275_bool == 0) goto Label_1037; // 0x40a JumpB
	var_262_int = 0; // 0x40b MovI
	goto Label_1040; // 0x40c Jump
	
Label_1040:
	var_276_string = "armor_"; // 0x410 PushS
	var_277_string = ""; var_278_int = 0; // 0x411 PushV
	var_278_int = var_255_int; // 0x412 Mov
	func_972(var_277_string, var_278_int); // 0x413 NEW_2
	var_263_string = var_276_string + var_277_string; // 0x415 Add2
	var_283_bool = 0; var_284_object = Obj(); var_285_string = ""; // 0x416 PushV
	var_284_object = var_253_object; // 0x417 Mov
	var_285_string = var_263_string; // 0x418 Mov
	func_1006(var_283_bool, var_284_object, var_285_string); // 0x419 NEW_2
	var_286_bool = var_283_bool == 0; // 0x41b Not
	if(var_286_bool == 0) goto Label_1055; // 0x41c JumpB
	var_264_int = 0; // 0x41d MovI
	goto Label_1057; // 0x41e Jump
	
Label_1057:
	var_287_float = 0; var_288_float = 0; var_289_float = 0; // 0x421 PushV
	var_290_int = var_262_int + var_264_int; // 0x422 Add
	var_291_float = 100.0; // 0x423 PushF
	var_288_float = var_290_int / var_290_int; // 0x424 Div2
	var_289_float = 1; // 0x425 MovI
	func_1474(var_287_float, var_288_float, var_289_float); // 0x426 NEW_2
	var_265_float = var_287_float; // 0x427 Mov
	var_293_string = "health"; // 0x429 PushS
	GetProperty(var_293_string, var_266_float); // 0x42a ObjFunc
	var_294_int = 1; // 0x42c PushI
	var_295_int = var_294_int - var_265_float; // 0x42d Sub
	var_267_float = var_254_float * var_295_int; // 0x42e Mult2
	var_296_string = "health"; // 0x42f PushS
	var_297_float = 0; var_298_float = 0; var_299_float = 0; var_300_float = 0; // 0x430 PushV
	var_298_float = var_266_float - var_267_float; // 0x431 Sub2
	var_299_float = 0; // 0x432 MovI
	var_300_float = 1; // 0x433 MovI
	func_1481(var_297_float, var_298_float, var_299_float, var_300_float); // 0x434 NEW_2
	SetProperty(var_296_string, var_297_float); // 0x436 ObjFunc
	var_303_bool = 0; var_304_object = Obj(); // 0x438 PushV
	var_304_object = var_253_object; // 0x439 Mov
	func_1001(var_303_bool, var_304_object); // 0x43a NEW_2
	if(var_303_bool == 0) goto Label_1089; // 0x43c JumpB
	var_305_float = 0; // 0x43d PushV
	var_305_float = -var_267_float; // 0x43e Neg2
	func_1539(var_305_float); // 0x43f NEW_2
	
Label_1089:
	var_252_float = var_267_float; // 0x441 Mov
	return 12; // 0x442 Return
	
Label_1055:
	GetProperty(var_263_string, var_264_int); // 0x41f ObjFunc
	
Label_1037:
	var_313_string = "armor"; // 0x40d PushS
	GetProperty(var_313_string, var_262_int); // 0x40e ObjFunc
}


func_635(var_0_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_int = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_object = Obj(); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_int = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_object = Obj(); // 0x27b PushV
	var_194_object = Obj(); // 0x27c PushV
	var_194_object = var_0_object; // 0x27d MovT
	func_1556(var_194_object); // 0x27e NEW_2
	ReportAttack(var_0_object); // 0x280 Func
	var_195_bool = 0; var_196_object = Obj(); // 0x282 PushV
	var_196_object = var_0_object; // 0x283 MovT
	func_1001(var_195_bool, var_196_object); // 0x284 NEW_2
	if(var_195_bool == 0) goto Label_652; // 0x286 JumpB
	var_197_object = Obj(); // 0x287 PushV
	func_1454(var_197_object); // 0x288 NEW_2
	SendPlayerEnemy(var_0_object, var_197_object); // 0x28a Func
	
Label_652:
	GetDirection(var_180_cvector); // 0x28c Func
	var_198_cvector = CVector(0,0,0); var_199_object = Obj(); // 0x28e PushV
	var_199_object = var_0_object; // 0x28f MovT
	func_986(var_199_object); // 0x290 NEW_2
	var_181_cvector = var_198_cvector; // 0x291 Mov
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); // 0x293 PushV
	var_205_cvector = var_180_cvector; // 0x294 Mov
	var_206_cvector = var_181_cvector; // 0x295 Mov
	func_1522(var_204_float, var_205_cvector, var_206_cvector); // 0x296 NEW_2
	var_228_float = 0.99939; // 0x298 PushF
	var_229_bool = var_204_float < var_228_float; // 0x299 LT
	if(var_229_bool == 0) goto Label_668; // 0x29a JumpB
	return 28; // 0x29b Return
	
Label_668:
	func_1565(); // 0x29d NEW_2
	var_230_string = "all"; // 0x29f PushS
	var_231_string = "attack_begin1"; // 0x2a0 PushS
	PlayAnimation(var_230_string, var_231_string); // 0x2a1 Func
	var_232_string = "attack"; // 0x2a3 PushS
	GetGeometryLocator(var_232_string, var_182_bool, var_183_cvector, var_184_cvector); // 0x2a4 Func
	var_233_bool = var_182_bool; // 0x2a6 Push
	if(var_233_bool == 0) goto Label_689; // 0x2a7 JumpB
	GetScene(var_186_object); // 0x2a8 Func
	var_234_string = "light-dynamic"; // 0x2aa PushS
	var_235_string = "soldier_fire.xml"; // 0x2ab PushS
	AddActorByType(var_185_object, var_234_string, var_186_object, var_183_cvector, var_184_cvector, var_235_string); // 0x2ac Func
	var_186_object = 0; // 0x2ae SetNull
	var_185_object = 0; // 0x2af SetNull
	goto Label_691; // 0x2b0 Jump
	
Label_691:
	var_236_string = "shot"; // 0x2b3 PushS
	var_237_cvector = CVector(0.0, 150.0, 0.0); // 0x2b4 PushVec
	var_238_int = 800; // 0x2b5 PushI
	var_239_int = 100000; // 0x2b6 PushI
	PlayGlobalSound(var_236_string, var_237_cvector, var_238_int, var_239_int); // 0x2b7 Func
	GetDirection(var_180_cvector); // 0x2b9 Func
	var_240_cvector = CVector(0,0,0); var_241_object = Obj(); // 0x2bb PushV
	var_241_object = var_0_object; // 0x2bc MovT
	func_986(var_241_object); // 0x2bd NEW_2
	var_181_cvector = var_240_cvector; // 0x2be Mov
	var_242_float = GetByIndex(var_181_cvector, 1); // 0x2c0 PushE
	var_243_float = 0; var_244_object = Obj(); // 0x2c1 PushV
	var_244_object = var_0_object; // 0x2c2 MovT
	func_1293(var_244_object); // 0x2c3 NEW_2
	var_242_float = var_242_float + var_243_float; // 0x2c5 Add2
	SetByIndex(var_181_cvector, 1) = var_242_float; // 0x2c6 PopE
	var_249_float = 0.03491; // 0x2c7 PushF
	RandVecCone3D(var_187_cvector, var_181_cvector, var_249_float); // 0x2c8 Func
	GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector); // 0x2ca Func
	var_250_bool = var_188_object != 0; // 0x2cc NullNeq
	if(var_250_bool == 0) goto Label_747; // 0x2cd JumpB
	var_251_bool = var_188_object == var_0_object; // 0x2ce Eq
	if(var_251_bool == 0) goto Label_732; // 0x2cf JumpB
	var_252_float = 0; var_253_object = Obj(); var_254_float = 0; var_255_int = 0; // 0x2d0 PushV
	var_253_object = var_0_object; // 0x2d1 MovT
	var_254_float = 1.5; // 0x2d2 MovF
	var_255_int = 1; // 0x2d3 MovI
	func_1018(var_252_float, var_253_object, var_254_float, var_255_int); // 0x2d4 NEW_2
	var_191_float = var_252_float; // 0x2d5 Mov
	var_314_int = 2; // 0x2d7 PushI
	var_315_float = 1.5; // 0x2d8 PushF
	ReportHit(var_0_object, var_314_int, var_191_float, var_315_float); // 0x2d9 Func
	goto Label_747; // 0x2db Jump
	
Label_747:
	var_316_string = "all"; // 0x2eb PushS
	var_317_string = "attack_end1"; // 0x2ec PushS
	PlayAnimation(var_316_string, var_317_string); // 0x2ed Func
	WaitForAnimEnd(); // 0x2ef Func
	var_318_string = "all"; // 0x2f1 PushS
	var_319_string = "attack_on"; // 0x2f2 PushS
	LockAnimationEnd(var_318_string, var_319_string); // 0x2f3 Func
	return 28; // 0x2f5 Return
	
Label_732:
	var_320_int = -1; // 0x2dc PushI
	var_321_bool = var_189_int != var_320_int; // 0x2dd Neq
	if(var_321_bool == 0) goto Label_747; // 0x2de JumpB
	GetScene(var_192_object); // 0x2df Func
	var_322_string = "scripted"; // 0x2e1 PushS
	var_323_cvector = CVector(0.0, 0.0, 1.0); // 0x2e2 PushVec
	var_324_string = "richochet.xml"; // 0x2e3 PushS
	AddActorByType(var_193_object, var_322_string, var_192_object, var_190_cvector, var_323_cvector, var_324_string); // 0x2e4 Func
	var_325_string = "Material"; // 0x2e6 PushS
	SetScriptProperty(var_325_string, var_189_int); // 0x2e7 ObjFunc
	var_193_object = 0; // 0x2e9 SetNull
	var_192_object = 0; // 0x2ea SetNull
	
Label_689:
	WaitForAnimEnd(); // 0x2b1 Func
}


func_1919(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x77f PushV
	var_130_bool = var_127_object == 0; // 0x780 NullEq
	if(var_130_bool == 0) goto Label_1923; // 0x781 JumpB
	return 2; // 0x782 Return
	
Label_1923:
	var_131_object = GlobalVars[0]; // 0x783 PushGE
	in(var_129_bool, var_127_object); // 0x784 ObjFunc
	var_132_bool = var_129_bool == 0; // 0x786 Not
	if(var_132_bool == 0) goto Label_1931; // 0x787 JumpB
	var_133_object = GlobalVars[0]; // 0x788 PushGE
	add(var_127_object); // 0x789 ObjFunc
	
Label_1931:
	var_134_bool = 0; var_135_object = Obj(); // 0x78b PushV
	var_135_object = var_127_object; // 0x78c Mov
	func_1001(var_134_bool, var_135_object); // 0x78d NEW_2
	if(var_134_bool == 0) goto Label_1942; // 0x78f JumpB
	var_138_object = Obj(); // 0x790 PushV
	func_1454(var_138_object); // 0x791 NEW_2
	var_141_float = -0.07; // 0x793 PushF
	ReportReputationChange(var_127_object, var_138_object, var_141_float); // 0x794 Func
	
Label_1942:
	return 2; // 0x796 Return
}


