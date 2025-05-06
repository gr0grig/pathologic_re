task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0; // 0x18 PushV
	IsOverrideActive(var_10_bool); // 0x19 Func
	var_11_bool = var_10_bool == 0; // 0x1b Not
	if(var_11_bool == 0) goto Label_31; // 0x1c JumpB
	WorkWithCorpse(var_8_cvector); // 0x1d Func
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	return 0; // 0x8e Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	return 0; // 0x90 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	return 0; // 0x92 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_171(); // 0xb5 Call
	var_10_object = Obj(); // 0xb7 PushV
	var_10_object = var_8_cvector; // 0xb8 Mov
	func_1298(); // 0xb9 Call
	return 0; // 0xbb Return
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object; // 0xbd Eq
	if(var_9_bool == 0) goto Label_196; // 0xbe JumpB
	var_10_int = 100; // 0xbf PushI
	KillTimer(var_10_int); // 0xc0 Func
	Face(var_0_object); // 0xc2 Func
	
Label_196:
	return 0; // 0xc4 Return
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object; // 0xc6 Eq
	if(var_9_bool == 0) goto Label_208; // 0xc7 JumpB
	var_10_int = 100; // 0xc8 PushI
	var_11_float = 3.0; // 0xc9 PushF
	SetTimer(var_10_int, var_11_float); // 0xca Func
	var_12_object = Obj(); // 0xcc PushV
	var_12_object = var_0_object; // 0xcd MovT
	func_1115(); // 0xce Call
	
Label_208:
	return 0; // 0xd0 Return
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj(); // 0xd2 PushV
	var_45_object = var_43_object; // 0xd3 Mov
	func_1024(var_44_bool, var_45_object); // 0xd4 Call
	var_72_bool = var_44_bool == 0; // 0xd6 Not
	if(var_72_bool == 0) goto Label_221; // 0xd7 JumpB
	var_73_object = Obj(); // 0xd8 PushV
	var_73_object = var_43_object; // 0xd9 Mov
	func_1322(var_73_object); // 0xda Call
	return 0; // 0xdc Return
	
Label_221:
	func_171(); // 0xde Call
	var_81_object = Obj(); // 0xe0 PushV
	var_81_object = var_43_object; // 0xe1 Mov
	func_1335(var_81_object); // 0xe2 Call
	return 0; // 0xe4 Return
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); // 0xe6 PushV
	var_11_object = var_8_cvector; // 0xe7 Mov
	var_12_object = var_9_cvector; // 0xe8 Mov
	func_1408(var_10_bool, var_11_object, var_12_object); // 0xe9 Call
	if(var_10_bool == 0) goto Label_240; // 0xeb JumpB
	var_43_object = Obj(); // 0xec PushV
	var_43_object = var_8_cvector; // 0xed Mov
	func_209(); // 0xee Call
	
Label_240:
	return 0; // 0xf0 Return
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_object = Obj(); // 0xf2 PushV
	var_10_object = var_8_cvector; // 0xf3 Mov
	func_1380(var_9_bool, var_10_object); // 0xf4 Call
	if(var_9_bool == 0) goto Label_254; // 0xf6 JumpB
	func_171(); // 0xf8 Call
	var_55_object = Obj(); // 0xfa PushV
	var_55_object = var_8_cvector; // 0xfb Mov
	func_1402(var_55_object); // 0xfc Call
	
Label_254:
	return 0; // 0xfe Return
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_int = 100; // 0x100 PushI
	var_10_bool = var_8_cvector != var_9_int; // 0x101 Neq
	if(var_10_bool == 0) goto Label_260; // 0x102 JumpB
	return 0; // 0x103 Return
	
Label_260:
	var_11_int = 100; // 0x104 PushI
	KillTimer(var_11_int); // 0x105 Func
	StopGroup0(); // 0x107 Func
	return 0; // 0x109 Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj(); // 0x176 PushV
	var_45_object = var_43_object; // 0x177 Mov
	func_1024(var_44_bool, var_45_object); // 0x178 Call
	var_72_bool = var_44_bool == 0; // 0x17a Not
	if(var_72_bool == 0) goto Label_385; // 0x17b JumpB
	var_73_object = Obj(); // 0x17c PushV
	var_73_object = var_43_object; // 0x17d Mov
	func_1322(var_73_object); // 0x17e Call
	return 0; // 0x180 Return
	
Label_385:
	func_405(); // 0x182 Call
	var_80_object = Obj(); // 0x184 PushV
	var_80_object = var_43_object; // 0x185 Mov
	func_1335(var_80_object); // 0x186 Call
	return 0; // 0x188 Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x18a PushV
	var_11_object = var_8_cvector; // 0x18b Mov
	var_12_object = var_9_cvector; // 0x18c Mov
	func_1408(var_10_bool, var_11_object, var_12_object); // 0x18d Call
	if(var_10_bool == 0) goto Label_404; // 0x18f JumpB
	var_43_object = Obj(); // 0x190 PushV
	var_43_object = var_8_cvector; // 0x191 Mov
	func_373(); // 0x192 Call
	
Label_404:
	return 0; // 0x194 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_405(); // 0x19e Call
	var_9_object = Obj(); // 0x1a0 PushV
	var_9_object = var_8_cvector; // 0x1a1 Mov
	func_1298(); // 0x1a2 Call
	return 0; // 0x1a4 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x22b PushV
	var_9_bool = 0; // 0x22c MovB
	var_10_bool = var_2_bool; // 0x22d PushT
	if(var_10_bool == 0) goto Label_562; // 0x22e JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x22f Eq
	if(var_11_bool == 0) goto Label_562; // 0x230 JumpB
	var_9_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_9_bool == 0) goto Label_567; // 0x232 JumpB
	var_12_object = Obj(); // 0x233 PushV
	var_12_object = var_0_object; // 0x234 MovT
	func_1115(); // 0x235 Call
	
Label_567:
	return 0; // 0x237 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; // 0x239 PushV
	var_9_bool = 0; // 0x23a MovB
	var_10_bool = var_2_bool; // 0x23b PushT
	if(var_10_bool == 0) goto Label_576; // 0x23c JumpB
	var_11_bool = var_8_cvector == var_0_object; // 0x23d Eq
	if(var_11_bool == 0) goto Label_576; // 0x23e JumpB
	var_9_bool = 1; // 0x23f MovB
	
Label_576:
	if(var_9_bool == 0) goto Label_584; // 0x240 JumpB
	var_12_string = "@Stop hunt"; // 0x241 PushS
	Trace(var_12_string); // 0x242 Func
	StopAnimation(); // 0x244 Func
	StopGroup0(); // 0x246 Func
	
Label_584:
	return 0; // 0x248 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_cvector, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj(); // 0x2a9 PushV
	var_45_object = var_43_object; // 0x2aa Mov
	func_1024(var_44_bool, var_45_object); // 0x2ab Call
	var_72_bool = var_44_bool == 0; // 0x2ad Not
	if(var_72_bool == 0) goto Label_688; // 0x2ae JumpB
	return 0; // 0x2af Return
	
Label_688:
	var_73_object = Obj(); // 0x2b0 PushV
	var_73_object = var_43_object; // 0x2b1 Mov
	func_1322(var_73_object); // 0x2b2 Call
	var_80_bool = var_43_object == var_0_object; // 0x2b4 Eq
	if(var_80_bool == 0) goto Label_696; // 0x2b5 JumpB
	var_1_object = 0; // 0x2b6 SetNullT
	goto Label_703; // 0x2b7 Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_696:
	var_1_object = var_43_object; // 0x2b8 TMov
	var_81_bool = var_2_bool; // 0x2b9 PushT
	if(var_81_bool == 0) goto Label_703; // 0x2ba JumpB
	StopAnimation(); // 0x2bb Func
	StopGroup0(); // 0x2bd Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_cvector)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x2c1 PushV
	var_11_object = var_8_cvector; // 0x2c2 Mov
	var_12_object = var_9_cvector; // 0x2c3 Mov
	func_1408(var_10_bool, var_11_object, var_12_object); // 0x2c4 Call
	if(var_10_bool == 0) goto Label_715; // 0x2c6 JumpB
	var_43_object = Obj(); // 0x2c7 PushV
	var_43_object = var_8_cvector; // 0x2c8 Mov
	func_680(); // 0x2c9 Call
	
Label_715:
	return 0; // 0x2cb Return
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2d5 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x2d6 PushV
	var_12_object = var_8_object; // 0x2d7 Mov
	func_1024(var_11_bool, var_12_object); // 0x2d8 Call
	var_45_bool = var_11_bool == 0; // 0x2da Not
	if(var_45_bool == 0) goto Label_733; // 0x2db JumpB
	return 2; // 0x2dc Return
	
Label_733:
	var_46_bool = 0; var_47_object = Obj(); // 0x2dd PushV
	var_47_object = var_8_object; // 0x2de Mov
	func_1375(var_46_bool, var_47_object); // 0x2df Call
	var_50_bool = var_46_bool == 0; // 0x2e1 Not
	if(var_50_bool == 0) goto Label_745; // 0x2e2 JumpB
	var_51_object = GlobalVars[0]; // 0x2e3 PushGE
	in(var_10_bool, var_8_object); // 0x2e4 ObjFunc
	var_52_bool = var_10_bool == 0; // 0x2e6 Not
	if(var_52_bool == 0) goto Label_745; // 0x2e7 JumpB
	return 2; // 0x2e8 Return
	
Label_745:
	func_879(); // 0x2ea Call
	var_53_object = Obj(); // 0x2ec PushV
	var_53_object = var_8_object; // 0x2ed Mov
	TaskCall(1); // 0x2ee TaskCall
	func_147(var_54_object, var_53_object); // 0x2ef Call
	TaskReturn(); // 0x2f0 TaskReturn
	return 2; // 0x2f2 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj(); // 0x2f4 PushV
	var_45_object = var_43_object; // 0x2f5 Mov
	func_1024(var_44_bool, var_45_object); // 0x2f6 Call
	var_72_bool = var_44_bool == 0; // 0x2f8 Not
	if(var_72_bool == 0) goto Label_767; // 0x2f9 JumpB
	var_73_object = Obj(); // 0x2fa PushV
	var_73_object = var_43_object; // 0x2fb Mov
	func_1322(var_73_object); // 0x2fc Call
	return 0; // 0x2fe Return
	
Label_767:
	func_879(); // 0x300 Call
	var_80_object = Obj(); // 0x302 PushV
	var_80_object = var_43_object; // 0x303 Mov
	func_1335(var_80_object); // 0x304 Call
	return 0; // 0x306 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x308 PushV
	var_11_object = var_8_object; // 0x309 Mov
	var_12_object = var_9_object; // 0x30a Mov
	func_1408(var_10_bool, var_11_object, var_12_object); // 0x30b Call
	if(var_10_bool == 0) goto Label_786; // 0x30d JumpB
	var_43_object = Obj(); // 0x30e PushV
	var_43_object = var_8_object; // 0x30f Mov
	func_755(); // 0x310 Call
	
Label_786:
	return 0; // 0x312 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x314 PushV
	var_10_object = var_8_object; // 0x315 Mov
	func_1380(var_9_bool, var_10_object); // 0x316 Call
	if(var_9_bool == 0) goto Label_800; // 0x318 JumpB
	func_879(); // 0x31a Call
	var_54_object = Obj(); // 0x31c PushV
	var_54_object = var_8_object; // 0x31d Mov
	func_1448(var_54_object); // 0x31e Call
	
Label_800:
	return 0; // 0x320 Return
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x4fe PushV
	var_12_object = var_8_object; // 0x4ff Mov
	var_13_int = var_9_int; // 0x500 Mov
	var_14_float = var_10_float; // 0x501 Mov
	func_1048(var_13_int, var_14_float); // 0x502 Call
	return 0; // 0x504 Return
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x505 PushV
	var_12_string = "health"; // 0x506 PushS
	var_13_bool = var_9_string == var_12_string; // 0x507 Eq
	if(var_13_bool == 0) goto Label_1297; // 0x508 JumpB
	var_14_string = "health"; // 0x509 PushS
	GetProperty(var_14_string, var_11_float); // 0x50a Func
	var_15_int = 0; // 0x50c PushI
	var_16_bool = var_11_float <= var_15_int; // 0x50d LE
	if(var_16_bool == 0) goto Label_1297; // 0x50e JumpB
	SignalDeath(var_8_object); // 0x50f Func
	
Label_1297:
	return 2; // 0x511 Return
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_object = Obj(); // 0x513 PushV
	var_9_object = var_8_object; // 0x514 Mov
	func_1454(var_9_object); // 0x515 Call
	return 0; // 0x517 Return
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	func_1304(); // 0x2cd Call
	
Label_719:
	func_801(var_6_cvector, var_7_cvector); // 0x2d0 Call
	goto Label_719; // 0x2d2 Jump
}


func_1024(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x400 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x401 PushV
	var_18_object = var_14_object; // 0x402 Mov
	func_988(var_17_bool, var_18_object); // 0x403 Call
	var_34_bool = var_17_bool == 0; // 0x405 Not
	if(var_34_bool == 0) goto Label_1033; // 0x406 JumpB
	var_13_bool = 0; // 0x407 MovB
	return 2; // 0x408 Return
	
Label_1033:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x409 PushV
	var_36_object = var_14_object; // 0x40a Mov
	var_37_string = "noaccess"; // 0x40b MovS
	func_907(var_35_bool, var_36_object, var_37_string); // 0x40c Call
	var_44_bool = var_35_bool == 0; // 0x40e Not
	if(var_44_bool == 0) goto Label_1042; // 0x40f JumpB
	var_13_bool = 1; // 0x410 MovB
	return 2; // 0x411 Return
	
Label_1042:
	var_45_string = "noaccess"; // 0x412 PushS
	GetProperty(var_45_string, var_16_int); // 0x413 ObjFunc
	var_46_int = 0; // 0x415 PushI
	var_13_bool = var_16_int == var_46_int; // 0x416 Eq2
	return 2; // 0x417 Return
}


func_0(var_11_object)
{
	func_1227(); // 0x2 Call
	var_52_object = Obj(); // 0x4 PushV
	var_52_object = var_11_object; // 0x5 Mov
	func_9(var_52_object); // 0x6 Call
	return 0; // 0x8 Return
}


func_1408(var_10_bool, var_11_object, var_12_object)
{
	var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; // 0x580 PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_string = ""; // 0x581 PushV
	var_18_object = var_12_object; // 0x582 Mov
	var_19_string = "reputation"; // 0x583 MovS
	func_907(var_17_bool, var_18_object, var_19_string); // 0x584 Call
	var_26_bool = var_17_bool == 0; // 0x586 Not
	if(var_26_bool == 0) goto Label_1418; // 0x587 JumpB
	var_10_bool = 0; // 0x588 MovB
	return 4; // 0x589 Return
	
Label_1418:
	var_27_string = "reputation"; // 0x58a PushS
	GetProperty(var_27_string, var_15_float); // 0x58b ObjFunc
	var_28_float = 0.5; // 0x58d PushF
	var_29_bool = var_15_float < var_28_float; // 0x58e LT
	if(var_29_bool == 0) goto Label_1426; // 0x58f JumpB
	var_10_bool = 0; // 0x590 MovB
	return 4; // 0x591 Return
	
Label_1426:
	CanSee(var_16_bool, var_11_object); // 0x592 Func
	var_30_bool = 0; // 0x594 PushV
	var_30_bool = 1; // 0x595 MovB
	var_31_bool = var_16_bool; // 0x596 Push
	if(var_31_bool == 0) goto Label_1440; // 0x597 JumpB
	var_32_float = 0; var_33_object = Obj(); // 0x598 PushV
	var_33_object = var_11_object; // 0x599 Mov
	func_899(var_33_object); // 0x59a Call
	var_40_float = 160000.0; // 0x59c PushF
	var_41_bool = var_32_float <= var_40_float; // 0x59d LE
	if(var_41_bool == 0) goto Label_1440; // 0x59e JumpB
	var_30_bool = 0; // 0x59f MovB
	
Label_1440:
	if(var_30_bool == 0) goto Label_1446; // 0x5a0 JumpB
	var_42_float = -0.2; // 0x5a1 PushF
	ReportReputationChange(var_11_object, var_12_object, var_42_float); // 0x5a2 Func
	var_10_bool = 1; // 0x5a4 MovB
	return 4; // 0x5a5 Return
	
Label_1446:
	var_10_bool = 0; // 0x5a6 MovB
	return 4; // 0x5a7 Return
}


func_1155(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x483 PushV
	CreateObjectSet(var_11_object); // 0x484 Func
	var_9_object = var_11_object; // 0x486 Mov
	return 2; // 0x487 Return
}


func_899(var_254_float)
{
	var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); // 0x383 PushV
	GetPosition(var_259_cvector); // 0x384 Func
	GetPosition(var_260_cvector); // 0x386 ObjFunc
	var_261_cvector = var_260_cvector - var_259_cvector; // 0x388 Sub2
	var_254_float = var_261_cvector | var_261_cvector; // 0x389 Or2
	return 6; // 0x38a Return
}


func_9(var_52_object)
{
	EventDisable(0); // 0xa EventDisable
	var_53_object = Obj(); // 0xb PushV
	var_53_object = var_52_object; // 0xc Mov
	func_32(var_53_object); // 0xd Call
	var_103_int = 50; // 0xf PushI
	var_104_int = 40; // 0x10 PushI
	SetRTEnvelope(var_103_int, var_104_int); // 0x11 Func
	EventEnable(0); // 0x13 EventEnable
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_1161(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = GetByIndex(var_108_cvector, 0); // 0x48a PushE
	var_111_float = GetByIndex(var_109_cvector, 0); // 0x48b PushE
	var_112_float = var_110_float * var_111_float; // 0x48c Mult
	var_113_float = GetByIndex(var_108_cvector, 2); // 0x48d PushE
	var_114_float = GetByIndex(var_109_cvector, 2); // 0x48e PushE
	var_115_float = var_113_float * var_114_float; // 0x48f Mult
	var_107_float = var_112_float + var_115_float; // 0x490 Add2
	return 0; // 0x491 Return
}


func_907(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x38b PushV
	var_40_string = "HasProperty"; // 0x38c PushS
	var_41_int = 2; // 0x38d PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x38e FuncExist
	var_43_bool = var_42_bool == 0; // 0x38f Not
	if(var_43_bool == 0) goto Label_915; // 0x390 JumpB
	var_35_bool = 0; // 0x391 MovB
	return 2; // 0x392 Return
	
Label_915:
	HasProperty(var_37_string, var_39_bool); // 0x393 ObjFunc
	var_35_bool = var_39_bool; // 0x395 Mov
	return 2; // 0x396 Return
}


func_266(var_0_object, var_242_object)
{
	var_245_bool = 0; var_246_int = 0; var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_int = 0; // 0x10a PushV
	var_0_object = var_242_object; // 0x10b TMov
	CanSee(var_250_int, var_0_object); // 0x10c Func
	var_251_object = var_1_object; // 0x10e PushT
	if(var_251_object == 0) goto Label_285; // 0x10f JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x110 PushV
	var_253_object = var_0_object; // 0x111 MovT
	func_1367(var_252_bool, var_253_object); // 0x112 Call
	if(var_252_bool == 0) goto Label_283; // 0x114 JumpB
	var_263_object = Obj(); var_264_bool = 0; // 0x115 PushV
	var_263_object = var_0_object; // 0x116 MovT
	var_264_bool = 1; // 0x117 MovB
	func_1311(var_263_object, var_264_bool); // 0x118 Call
	return 6; // 0x11a Return
	
Label_283:
	Face(var_0_object); // 0x11b Func
	
Label_285:
	var_265_string = "all"; // 0x11d PushS
	var_266_string = "shoot_begin"; // 0x11e PushS
	PlayAnimation(var_265_string, var_266_string); // 0x11f Func
	WaitForAnimEnd(var_248_bool); // 0x121 Func
	var_267_bool = var_248_bool == 0; // 0x123 Not
	if(var_267_bool == 0) goto Label_296; // 0x124 JumpB
	StopAsync(); // 0x125 Func
	return 6; // 0x127 Return
	
Label_296:
	var_268_string = "shot"; // 0x128 PushS
	Speak(var_268_string); // 0x129 Func
	var_269_string = "all"; // 0x12b PushS
	var_270_string = "shoot_end"; // 0x12c PushS
	PlayAnimation(var_269_string, var_270_string); // 0x12d Func
	WaitForAnimEnd(var_248_bool); // 0x12f Func
	var_271_bool = var_248_bool == 0; // 0x131 Not
	if(var_271_bool == 0) goto Label_310; // 0x132 JumpB
	StopAsync(); // 0x133 Func
	return 6; // 0x135 Return
	
Label_310:
	var_272_string = "all"; // 0x136 PushS
	var_273_string = "attack_on"; // 0x137 PushS
	LockAnimationEnd(var_272_string, var_273_string); // 0x138 Func
	var_249_int = 0; // 0x13a MovI
	var_250_int = 0; // 0x13b MovI
	
Label_316:
	var_274_int = 20; // 0x13c PushI
	var_275_bool = var_250_int < var_274_int; // 0x13d LT
	if(var_275_bool == 0) goto Label_364; // 0x13e JumpB
	var_276_float = 0.5; // 0x13f PushF
	Sleep(var_276_float, var_248_bool); // 0x140 Func
	var_277_bool = var_248_bool == 0; // 0x142 Not
	if(var_277_bool == 0) goto Label_325; // 0x143 JumpB
	return 6; // 0x144 Return
	
Label_325:
	CanSee(var_250_int, var_0_object); // 0x145 Func
	var_278_object = var_1_object; // 0x147 PushT
	if(var_278_object == 0) goto Label_347; // 0x148 JumpB
	var_249_int = 0; // 0x149 MovI
	var_279_bool = 0; var_280_object = Obj(); // 0x14a PushV
	var_280_object = var_0_object; // 0x14b MovT
	func_1367(var_279_bool, var_280_object); // 0x14c Call
	if(var_279_bool == 0) goto Label_344; // 0x14e JumpB
	func_405(); // 0x150 Call
	var_281_object = Obj(); var_282_bool = 0; // 0x152 PushV
	var_281_object = var_0_object; // 0x153 MovT
	var_282_bool = 0; // 0x154 MovB
	func_1311(var_281_object, var_282_bool); // 0x155 Call
	return 6; // 0x157 Return
	
Label_344:
	Face(var_0_object); // 0x158 Func
	goto Label_361; // 0x15a Jump
	
Label_361:
	var_283_int = 1; // 0x169 PushI
	var_250_int = var_250_int + var_283_int; // 0x16a Add2
	goto Label_316; // 0x16b Jump
	
Label_347:
	StopAsync(); // 0x15b Func
	var_284_int = 1; // 0x15d PushI
	var_249_int = var_249_int + var_284_int; // 0x15e Add2
	var_285_int = 4; // 0x15f PushI
	var_286_bool = var_249_int == var_285_int; // 0x160 Eq
	if(var_286_bool == 0) goto Label_361; // 0x161 JumpB
	var_287_string = "all"; // 0x162 PushS
	var_288_string = "attack_off"; // 0x163 PushS
	PlayAnimation(var_287_string, var_288_string); // 0x164 Func
	WaitForAnimEnd(); // 0x166 Func
	return 6; // 0x168 Return
	
Label_364:
	func_405(); // 0x16d Call
	var_289_object = Obj(); var_290_bool = 0; // 0x16f PushV
	var_289_object = var_242_object; // 0x170 Mov
	var_290_bool = 0; // 0x171 MovB
	func_1311(var_289_object, var_290_bool); // 0x172 Call
	return 6; // 0x174 Return
}


func_1170(var_116_float, var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0); // 0x493 PushE
	var_119_float = GetByIndex(var_117_cvector, 0); // 0x494 PushE
	var_120_float = var_118_float * var_119_float; // 0x495 Mult
	var_121_float = GetByIndex(var_117_cvector, 2); // 0x496 PushE
	var_122_float = GetByIndex(var_117_cvector, 2); // 0x497 PushE
	var_123_float = var_121_float * var_122_float; // 0x498 Mult
	var_124_int = var_120_float + var_123_float; // 0x499 Add
	var_116_float = sqrt(var_124_int); // 0x49a Sqrt2
	return 0; // 0x49b Return
}


func_147(var_0_object, var_53_object)
{
	var_55_bool = 0; var_56_bool = 0; // 0x93 PushV
	var_0_object = var_53_object; // 0x94 TMov
	Face(var_53_object); // 0x95 Func
	
Label_151:
	var_57_float = 0.5; // 0x97 PushF
	Sleep(var_57_float, var_56_bool); // 0x98 Func
	var_58_bool = 0; // 0x9a PushV
	var_58_bool = 1; // 0x9b MovB
	var_59_bool = var_56_bool == 0; // 0x9c Not
	if(var_59_bool == 0) goto Label_165; // 0x9d JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x9e PushV
	var_61_object = var_0_object; // 0x9f MovT
	func_1024(var_60_bool, var_61_object); // 0xa0 Call
	var_62_bool = var_60_bool == 0; // 0xa2 Not
	if(var_62_bool == 0) goto Label_165; // 0xa3 JumpB
	var_58_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_58_bool == 0) goto Label_167; // 0xa5 JumpB
	goto Label_168; // 0xa6 Jump
	
Label_168:
	StopAsync(); // 0xa8 Func
	return 2; // 0xaa Return
	
Label_167:
	goto Label_151; // 0xa7 Jump
}


func_405()
{
	StopAsync(); // 0x195 Func
	StopGroup0(); // 0x197 Func
	Stop(); // 0x199 Func
	return 0; // 0x19b Return
}


func_919(var_145_float, var_146_object, var_147_float, var_148_int)
{
	var_149_int = 0; var_150_string = ""; var_151_int = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_int = 0; var_156_string = ""; var_157_int = 0; var_158_float = 0; var_159_float = 0; var_160_float = 0; // 0x397 PushV
	var_161_bool = 0; var_162_object = Obj(); var_163_string = ""; // 0x398 PushV
	var_162_object = var_146_object; // 0x399 Mov
	var_163_string = "health"; // 0x39a MovS
	func_907(var_161_bool, var_162_object, var_163_string); // 0x39b Call
	var_164_bool = var_161_bool == 0; // 0x39d Not
	if(var_164_bool == 0) goto Label_929; // 0x39e JumpB
	var_145_float = 0.0; // 0x39f MovF
	return 12; // 0x3a0 Return
	
Label_929:
	var_165_bool = 0; var_166_object = Obj(); var_167_string = ""; // 0x3a1 PushV
	var_166_object = var_146_object; // 0x3a2 Mov
	var_167_string = "armor"; // 0x3a3 MovS
	func_907(var_165_bool, var_166_object, var_167_string); // 0x3a4 Call
	var_168_bool = var_165_bool == 0; // 0x3a6 Not
	if(var_168_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_155_int = 0; // 0x3a8 MovI
	goto Label_941; // 0x3a9 Jump
	
Label_941:
	var_169_string = "armor_"; // 0x3ad PushS
	var_170_string = ""; var_171_int = 0; // 0x3ae PushV
	var_171_int = var_148_int; // 0x3af Mov
	func_884(var_170_string, var_171_int); // 0x3b0 Call
	var_156_string = var_169_string + var_170_string; // 0x3b2 Add2
	var_174_bool = 0; var_175_object = Obj(); var_176_string = ""; // 0x3b3 PushV
	var_175_object = var_146_object; // 0x3b4 Mov
	var_176_string = var_156_string; // 0x3b5 Mov
	func_907(var_174_bool, var_175_object, var_176_string); // 0x3b6 Call
	var_177_bool = var_174_bool == 0; // 0x3b8 Not
	if(var_177_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_157_int = 0; // 0x3ba MovI
	goto Label_958; // 0x3bb Jump
	
Label_958:
	var_178_float = 0; var_179_float = 0; var_180_float = 0; // 0x3be PushV
	var_181_int = var_155_int + var_157_int; // 0x3bf Add
	var_182_float = 100.0; // 0x3c0 PushF
	var_179_float = var_181_int / var_181_int; // 0x3c1 Div2
	var_180_float = 1; // 0x3c2 MovI
	func_1137(var_178_float, var_179_float, var_180_float); // 0x3c3 Call
	var_158_float = var_178_float; // 0x3c4 Mov
	var_184_string = "health"; // 0x3c6 PushS
	GetProperty(var_184_string, var_159_float); // 0x3c7 ObjFunc
	var_185_int = 1; // 0x3c9 PushI
	var_186_int = var_185_int - var_158_float; // 0x3ca Sub
	var_160_float = var_147_float * var_186_int; // 0x3cb Mult2
	var_187_string = "health"; // 0x3cc PushS
	var_188_float = 0; var_189_float = 0; var_190_float = 0; var_191_float = 0; // 0x3cd PushV
	var_189_float = var_159_float - var_160_float; // 0x3ce Sub2
	var_190_float = 0; // 0x3cf MovI
	var_191_float = 1; // 0x3d0 MovI
	func_1144(var_188_float, var_189_float, var_190_float, var_191_float); // 0x3d1 Call
	SetProperty(var_187_string, var_188_float); // 0x3d3 ObjFunc
	var_145_float = var_160_float; // 0x3d5 Mov
	return 12; // 0x3d6 Return
	
Label_956:
	GetProperty(var_156_string, var_157_int); // 0x3bc ObjFunc
	
Label_938:
	var_194_string = "armor"; // 0x3aa PushS
	GetProperty(var_194_string, var_155_int); // 0x3ab ObjFunc
}


func_1304()
{
	var_8_object = GlobalVars[0]; // 0x518 PushGE
	var_9_object = Obj(); // 0x519 PushV
	func_1155(var_9_object); // 0x51a Call
	var_8_object = var_9_object; // 0x51b Mov
	GlobalVars[0] = var_8_object; // 0x51d PopGE
	return 0; // 0x51e Return
}


func_1048(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; // 0x418 PushV
	var_35_bool = 0; // 0x419 PushV
	var_35_bool = 0; // 0x41a MovB
	var_36_int = 4; // 0x41b PushI
	var_37_bool = var_13_int != var_36_int; // 0x41c Neq
	if(var_37_bool == 0) goto Label_1058; // 0x41d JumpB
	var_38_int = 5; // 0x41e PushI
	var_39_bool = var_13_int != var_38_int; // 0x41f Neq
	if(var_39_bool == 0) goto Label_1058; // 0x420 JumpB
	var_35_bool = 1; // 0x421 MovB
	
Label_1058:
	if(var_35_bool == 0) goto Label_1077; // 0x422 JumpB
	GetScene(var_25_object); // 0x423 Func
	GetPosition(var_27_cvector); // 0x425 Func
	GetEyesHeight(var_28_float); // 0x427 Func
	var_40_float = GetByIndex(var_27_cvector, 1); // 0x429 PushE
	var_41_int = 2; // 0x42a PushI
	var_42_float = var_28_float / var_41_int; // 0x42b Div
	var_40_float = var_40_float + var_42_float; // 0x42c Add2
	SetByIndex(var_27_cvector, 1) = var_40_float; // 0x42d PopE
	var_43_string = "scripted"; // 0x42e PushS
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0x42f PushVec
	var_45_string = "blood.xml"; // 0x430 PushS
	AddActorByType(var_26_object, var_43_string, var_25_object, var_27_cvector, var_44_cvector, var_45_string); // 0x431 Func
	var_26_object = 0; // 0x433 SetNull
	var_25_object = 0; // 0x434 SetNull
	
Label_1077:
	var_46_bool = var_12_object == 0; // 0x435 NullEq
	if(var_46_bool == 0) goto Label_1080; // 0x436 JumpB
	return 20; // 0x437 Return
	
Label_1080:
	GetSecondaryAnimationType(var_29_int); // 0x438 Func
	var_47_int = 0; // 0x43a PushI
	var_48_bool = var_29_int < var_47_int; // 0x43b LT
	if(var_48_bool == 0) goto Label_1086; // 0x43c JumpB
	return 20; // 0x43d Return
	
Label_1086:
	GetPosition(var_30_cvector); // 0x43e ObjFunc
	GetPosition(var_31_cvector); // 0x440 Func
	GetDirection(var_32_cvector); // 0x442 Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x444 Sub2
	var_49_float = GetByIndex(var_33_cvector, 0); // 0x445 PushE
	var_50_float = GetByIndex(var_32_cvector, 0); // 0x446 PushE
	var_51_float = var_49_float * var_50_float; // 0x447 Mult
	var_52_float = GetByIndex(var_33_cvector, 2); // 0x448 PushE
	var_53_float = GetByIndex(var_32_cvector, 2); // 0x449 PushE
	var_54_float = var_52_float * var_53_float; // 0x44a Mult
	var_55_int = var_51_float + var_54_float; // 0x44b Add
	var_56_int = 0; // 0x44c PushI
	var_57_bool = var_55_int >= var_56_int; // 0x44d GE
	if(var_57_bool == 0) goto Label_1105; // 0x44e JumpB
	var_34_string = "fhit"; // 0x44f MovS
	goto Label_1106; // 0x450 Jump
	
Label_1106:
	var_58_string = "hit_react"; // 0x452 PushS
	var_59_string = "1"; // 0x453 PushS
	var_60_int = var_34_string + var_59_string; // 0x454 Add
	var_61_string = "2"; // 0x455 PushS
	var_62_int = var_34_string + var_61_string; // 0x456 Add
	var_63_int = -10; // 0x457 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x458 Func
	return 20; // 0x45a Return
	
Label_1105:
	var_34_string = "bhit"; // 0x451 MovS
}


func_1180(var_104_float, var_105_cvector, var_106_cvector)
{
	var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x49d PushV
	var_108_cvector = var_105_cvector; // 0x49e Mov
	var_109_cvector = var_106_cvector; // 0x49f Mov
	func_1161(var_107_float, var_108_cvector, var_109_cvector); // 0x4a0 Call
	var_116_float = 0; var_117_cvector = CVector(0,0,0); // 0x4a2 PushV
	var_117_cvector = var_105_cvector; // 0x4a3 Mov
	func_1170(var_116_float, var_117_cvector); // 0x4a4 Call
	var_125_float = 0; var_126_cvector = CVector(0,0,0); // 0x4a6 PushV
	var_126_cvector = var_106_cvector; // 0x4a7 Mov
	func_1170(var_125_float, var_126_cvector); // 0x4a8 Call
	var_127_float = var_116_float * var_125_float; // 0x4aa Mult
	var_104_float = var_107_float / var_107_float; // 0x4ab Div2
	return 0; // 0x4ac Return
}


func_1311(var_60_object, var_61_bool)
{
	var_62_object = Obj(); var_63_bool = 0; // 0x520 PushV
	var_62_object = var_60_object; // 0x521 Mov
	var_63_bool = var_61_bool; // 0x522 Mov
	TaskCall(3); // 0x523 TaskCall
	func_421(var_64_object, var_65_object, var_66_bool, var_62_object, var_63_bool); // 0x524 Call
	TaskReturn(); // 0x525 TaskReturn
	ResetAAS(); // 0x527 Func
	return 0; // 0x529 Return
}


func_32(var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_string = ""; var_59_object = Obj(); var_60_bool = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_string = ""; var_69_object = Obj(); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); // 0x20 PushV
	var_74_bool = var_53_object == 0; // 0x21 NullEq
	if(var_74_bool == 0) goto Label_40; // 0x22 JumpB
	var_75_string = ""; // 0x23 PushV
	var_75_string = "fdie"; // 0x24 MovS
	func_119(var_75_string); // 0x25 Call
	goto Label_118; // 0x27 Jump
	
Label_118:
	return 20; // 0x76 Return
	
Label_40:
	GetPosition(var_64_cvector); // 0x28 ObjFunc
	GetPosition(var_65_cvector); // 0x2a Func
	GetDirection(var_66_cvector); // 0x2c Func
	var_67_cvector = var_65_cvector - var_64_cvector; // 0x2e Sub2
	var_78_float = GetByIndex(var_67_cvector, 0); // 0x2f PushE
	var_79_float = GetByIndex(var_66_cvector, 0); // 0x30 PushE
	var_80_float = var_78_float * var_79_float; // 0x31 Mult
	var_81_float = GetByIndex(var_67_cvector, 2); // 0x32 PushE
	var_82_float = GetByIndex(var_66_cvector, 2); // 0x33 PushE
	var_83_float = var_81_float * var_82_float; // 0x34 Mult
	var_84_int = var_80_float + var_83_float; // 0x35 Add
	var_85_int = 0; // 0x36 PushI
	var_86_bool = var_84_int >= var_85_int; // 0x37 GE
	if(var_86_bool == 0) goto Label_59; // 0x38 JumpB
	var_68_string = "fdie"; // 0x39 MovS
	goto Label_60; // 0x3a Jump
	
Label_60:
	RemoveRTEnvelope(); // 0x3c Func
	SetDeathState(); // 0x3e Func
	Stop(); // 0x40 Func
	StopAsync(); // 0x42 Func
	var_69_object = var_53_object; // 0x44 Mov
	var_87_string = "GetScriptProperty"; // 0x45 PushS
	var_88_int = 2; // 0x46 PushI
	var_89_bool = IsFuncExist(var_53_object, var_87_string, var_88_int); // 0x47 FuncExist
	if(var_89_bool == 0) goto Label_84; // 0x48 JumpB
	var_90_string = "Owner"; // 0x49 PushS
	HasScriptProperty(var_70_bool, var_90_string); // 0x4a ObjFunc
	var_91_bool = var_70_bool; // 0x4c Push
	if(var_91_bool == 0) goto Label_84; // 0x4d JumpB
	var_92_string = "Owner"; // 0x4e PushS
	GetScriptProperty(var_69_object, var_92_string); // 0x4f ObjFunc
	var_93_bool = var_69_object == 0; // 0x51 NullEq
	if(var_93_bool == 0) goto Label_84; // 0x52 JumpB
	var_69_object = var_53_object; // 0x53 Mov
	
Label_84:
	var_94_string = "@GetEyesHeight"; // 0x54 PushS
	var_95_int = 1; // 0x55 PushI
	var_96_bool = IsFuncExist(var_69_object, var_94_string, var_95_int); // 0x56 FuncExist
	if(var_96_bool == 0) goto Label_99; // 0x57 JumpB
	GetEyesHeight(var_72_float); // 0x58 ObjFunc
	var_73_cvector = CVector(0.0, 0.0, 0.0); // 0x5a MovV
	var_97_float = GetByIndex(var_73_cvector, 1); // 0x5b PushE
	var_97_float = var_72_float; // 0x5c Mov
	SetByIndex(var_73_cvector, 1) = var_97_float; // 0x5d PopE
	var_98_string = "head"; // 0x5e PushS
	LookAsync(var_53_object, var_98_string, var_73_cvector); // 0x5f Func
	var_71_bool = 1; // 0x61 MovB
	goto Label_100; // 0x62 Jump
	
Label_100:
	var_99_string = "all"; // 0x64 PushS
	PlayAnimation(var_99_string, var_68_string); // 0x65 Func
	WaitForAnimEnd(); // 0x67 Func
	var_100_bool = var_71_bool; // 0x69 Push
	if(var_100_bool == 0) goto Label_112; // 0x6a JumpB
	StopAsync(); // 0x6b Func
	var_101_string = "head"; // 0x6d PushS
	UnlookAsync(var_101_string); // 0x6e Func
	
Label_112:
	var_102_string = "all"; // 0x70 PushS
	LockAnimationEnd(var_102_string, var_68_string); // 0x71 Func
	RemoveEnvelope(); // 0x73 Func
	var_69_object = 0; // 0x75 SetNull
	
Label_99:
	var_71_bool = 0; // 0x63 MovB
	
Label_59:
	var_68_string = "bdie"; // 0x3b MovS
}


func_801(var_0_object, var_1_object)
{
	var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x321 PushV
	GetPFPosition(var_19_object); // 0x322 Func
	GetDirection(var_0_object); // 0x324 Func
	
Label_806:
	var_20_int = 60; // 0x326 PushI
	irand(var_16_int, var_20_int); // 0x327 Func
	var_21_int = 30; // 0x329 PushI
	var_22_int = var_16_int + var_21_int; // 0x32a Add
	Sleep(var_22_int, var_17_bool); // 0x32b Func
	var_23_bool = var_17_bool; // 0x32d Push
	if(var_23_bool == 0) goto Label_819; // 0x32e JumpB
	func_724(); // 0x330 Call
	goto Label_877; // 0x332 Jump
	
Label_877:
	goto Label_806; // 0x36d Jump
	
Label_819:
	GetPFPosition(var_18_cvector); // 0x333 Func
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x335 PushV
	var_25_cvector = var_1_object; // 0x336 MovT
	var_26_cvector = var_18_cvector; // 0x337 Mov
	func_1133(var_24_float, var_25_cvector, var_26_cvector); // 0x338 Call
	var_29_int = 40000; // 0x33a PushI
	var_30_bool = var_24_float > var_29_int; // 0x33b GT
	if(var_30_bool == 0) goto Label_863; // 0x33c JumpB
	FindPathTo(var_19_object, var_19_object); // 0x33d Func
	var_31_bool = var_19_object != 0; // 0x33f NullNeq
	if(var_31_bool == 0) goto Label_858; // 0x340 JumpB
	RotatePath(var_19_object, var_17_bool); // 0x341 Func
	var_32_bool = var_17_bool == 0; // 0x343 Not
	if(var_32_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_876; // 0x345 Jump
	
Label_876:
	goto Label_819; // 0x36c Jump
	
Label_838:
	var_33_bool = 0; // 0x346 PushB
	FollowPath(var_19_object, var_33_bool, var_17_bool); // 0x347 Func
	var_34_bool = var_17_bool == 0; // 0x349 Not
	if(var_34_bool == 0) goto Label_844; // 0x34a JumpB
	goto Label_876; // 0x34b Jump
	
Label_844:
	var_35_float = GetByIndex(var_0_object, 0); // 0x34c PushE
	var_36_float = GetByIndex(var_0_object, 2); // 0x34d PushE
	Rotate(var_35_float, var_36_float, var_17_bool); // 0x34e Func
	var_37_bool = var_17_bool == 0; // 0x350 Not
	if(var_37_bool == 0) goto Label_851; // 0x351 JumpB
	goto Label_876; // 0x352 Jump
	
Label_851:
	WaitForAnimEnd(var_17_bool); // 0x353 Func
	var_38_bool = var_17_bool == 0; // 0x355 Not
	if(var_38_bool == 0) goto Label_856; // 0x356 JumpB
	goto Label_876; // 0x357 Jump
	
Label_856:
	goto Label_877; // 0x358 Jump
	
Label_858:
	var_39_int = 1; // 0x35a PushI
	Sleep(var_39_int); // 0x35b Func
	var_19_object = 0; // 0x35d SetNull
	goto Label_876; // 0x35e Jump
	
Label_863:
	var_40_float = GetByIndex(var_0_object, 0); // 0x35f PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x360 PushE
	Rotate(var_40_float, var_41_float, var_17_bool); // 0x361 Func
	var_42_bool = var_17_bool == 0; // 0x363 Not
	if(var_42_bool == 0) goto Label_870; // 0x364 JumpB
	goto Label_876; // 0x365 Jump
	
Label_870:
	WaitForAnimEnd(var_17_bool); // 0x366 Func
	var_43_bool = var_17_bool == 0; // 0x368 Not
	if(var_43_bool == 0) goto Label_875; // 0x369 JumpB
	goto Label_876; // 0x36a Jump
	
Label_875:
	goto Label_877; // 0x36b Jump
}


func_421(var_0_object, var_1_object, var_2_bool, var_62_object, var_63_bool)
{
	var_67_bool = 0; var_68_bool = 0; var_69_bool = 0; var_70_bool = 0; // 0x1a5 PushV
	var_0_object = var_62_object; // 0x1a6 TMov
	Face(var_0_object); // 0x1a7 Func
	var_71_bool = var_63_bool; // 0x1a9 Push
	if(var_71_bool == 0) goto Label_433; // 0x1aa JumpB
	var_72_string = "all"; // 0x1ab PushS
	var_73_string = "attack_on"; // 0x1ac PushS
	PlayAnimation(var_72_string, var_73_string); // 0x1ad Func
	WaitForAnimEnd(); // 0x1af Func
	
Label_433:
	var_74_string = "all"; // 0x1b1 PushS
	var_75_string = "attack_on"; // 0x1b2 PushS
	LockAnimationEnd(var_74_string, var_75_string); // 0x1b3 Func
	var_76_bool = 1; // 0x1b5 PushB
	SetAttackState(var_76_bool); // 0x1b6 Func
	
Label_440:
	var_77_bool = 0; var_78_object = Obj(); // 0x1b8 PushV
	var_78_object = var_0_object; // 0x1b9 MovT
	func_1024(var_77_bool, var_78_object); // 0x1ba Call
	if(var_77_bool == 0) goto Label_542; // 0x1bc JumpB
	CanSee(var_70_bool, var_0_object); // 0x1bd Func
	var_79_bool = var_70_bool; // 0x1bf Push
	if(var_79_bool == 0) goto Label_453; // 0x1c0 JumpB
	func_590(var_70_bool); // 0x1c2 Call
	goto Label_532; // 0x1c4 Jump
	
Label_532:
	var_207_bool = var_1_object != 0; // 0x214 NullNeq
	if(var_207_bool == 0) goto Label_538; // 0x215 JumpB
	func_585(var_69_bool, var_70_bool); // 0x217 Call
	goto Label_541; // 0x219 Jump
	
Label_541:
	goto Label_440; // 0x21d Jump
	
Label_538:
	var_208_int = 2; // 0x21a PushI
	Sleep(var_208_int); // 0x21b Func
	
Label_453:
	var_209_object = Obj(); // 0x1c5 PushV
	var_209_object = var_0_object; // 0x1c6 MovT
	func_1115(); // 0x1c7 Call
	var_2_bool = 1; // 0x1c9 TMovB
	var_218_string = "all"; // 0x1ca PushS
	var_219_string = "hunt"; // 0x1cb PushS
	PlayAnimation(var_218_string, var_219_string); // 0x1cc Func
	WaitForAnimEnd(var_69_bool); // 0x1ce Func
	var_220_bool = var_69_bool == 0; // 0x1d0 Not
	if(var_220_bool == 0) goto Label_476; // 0x1d1 JumpB
	var_221_bool = var_1_object != 0; // 0x1d2 NullNeq
	if(var_221_bool == 0) goto Label_471; // 0x1d3 JumpB
	func_585(var_69_bool, var_70_bool); // 0x1d5 Call
	
Label_471:
	var_222_string = "all"; // 0x1d7 PushS
	var_223_string = "attack_on"; // 0x1d8 PushS
	LockAnimationEnd(var_222_string, var_223_string); // 0x1d9 Func
	goto Label_440; // 0x1db Jump
	
Label_476:
	var_224_bool = 0; var_225_object = Obj(); // 0x1dc PushV
	var_225_object = var_0_object; // 0x1dd MovT
	func_1024(var_224_bool, var_225_object); // 0x1de Call
	var_226_bool = var_224_bool == 0; // 0x1e0 Not
	if(var_226_bool == 0) goto Label_483; // 0x1e1 JumpB
	goto Label_542; // 0x1e2 Jump
	
Label_542:
	var_227_bool = 0; // 0x21e PushB
	SetAttackState(var_227_bool); // 0x21f Func
	StopAsync(); // 0x221 Func
	var_228_string = "all"; // 0x223 PushS
	var_229_string = "attack_off"; // 0x224 PushS
	PlayAnimation(var_228_string, var_229_string); // 0x225 Func
	WaitForAnimEnd(); // 0x227 Func
	return 4; // 0x229 Return
	
Label_483:
	CanSee(var_70_bool, var_0_object); // 0x1e3 Func
	var_230_bool = var_70_bool; // 0x1e5 Push
	if(var_230_bool == 0) goto Label_494; // 0x1e6 JumpB
	var_2_bool = 0; // 0x1e7 TMovB
	Face(var_0_object); // 0x1e8 Func
	func_590(var_70_bool); // 0x1eb Call
	goto Label_532; // 0x1ed Jump
	
Label_494:
	var_231_string = "all"; // 0x1ee PushS
	var_232_string = "attack_on"; // 0x1ef PushS
	LockAnimationEnd(var_231_string, var_232_string); // 0x1f0 Func
	var_233_int = 3; // 0x1f2 PushI
	Sleep(var_233_int, var_69_bool); // 0x1f3 Func
	var_234_bool = var_69_bool == 0; // 0x1f5 Not
	if(var_234_bool == 0) goto Label_513; // 0x1f6 JumpB
	var_235_bool = var_1_object != 0; // 0x1f7 NullNeq
	if(var_235_bool == 0) goto Label_508; // 0x1f8 JumpB
	func_585(var_69_bool, var_70_bool); // 0x1fa Call
	
Label_508:
	var_236_string = "all"; // 0x1fc PushS
	var_237_string = "attack_on"; // 0x1fd PushS
	LockAnimationEnd(var_236_string, var_237_string); // 0x1fe Func
	goto Label_440; // 0x200 Jump
	
Label_513:
	var_238_bool = 0; var_239_object = Obj(); // 0x201 PushV
	var_239_object = var_0_object; // 0x202 MovT
	func_1024(var_238_bool, var_239_object); // 0x203 Call
	var_240_bool = var_238_bool == 0; // 0x205 Not
	if(var_240_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_542; // 0x207 Jump
	
Label_520:
	var_2_bool = 0; // 0x208 TMovB
	CanSee(var_70_bool, var_0_object); // 0x209 Func
	var_241_bool = var_70_bool; // 0x20b Push
	if(var_241_bool == 0) goto Label_531; // 0x20c JumpB
	Face(var_0_object); // 0x20d Func
	func_590(var_70_bool); // 0x210 Call
	goto Label_532; // 0x212 Jump
	
Label_531:
	goto Label_542; // 0x213 Jump
}


func_1448(var_54_object)
{
	var_55_object = Obj(); // 0x5a9 PushV
	var_55_object = var_54_object; // 0x5aa Mov
	func_1346(var_55_object); // 0x5ab Call
	return 0; // 0x5ad Return
}


func_1322(var_73_object)
{
	var_74_bool = 0; var_75_bool = 0; // 0x52a PushV
	var_76_bool = var_73_object == 0; // 0x52b NullEq
	if(var_76_bool == 0) goto Label_1326; // 0x52c JumpB
	return 2; // 0x52d Return
	
Label_1326:
	var_77_object = GlobalVars[0]; // 0x52e PushGE
	in(var_75_bool, var_73_object); // 0x52f ObjFunc
	var_78_bool = var_75_bool == 0; // 0x531 Not
	if(var_78_bool == 0) goto Label_1334; // 0x532 JumpB
	var_79_object = GlobalVars[0]; // 0x533 PushGE
	add(var_73_object); // 0x534 ObjFunc
	
Label_1334:
	return 2; // 0x536 Return
}


func_171()
{
	StopAsync(); // 0xab Func
	var_54_int = 100; // 0xad PushI
	KillTimer(var_54_int); // 0xae Func
	StopGroup0(); // 0xb0 Func
	return 0; // 0xb2 Return
}


func_1197(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; // 0x4ad PushV
	var_27_bool = var_17_int > var_18_int; // 0x4ae GT
	if(var_27_bool == 0) goto Label_1204; // 0x4af JumpB
	var_28_string = "GenerateMoney: iMin > iMax"; // 0x4b0 PushS
	Trace(var_28_string); // 0x4b1 Func
	return 8; // 0x4b3 Return
	
Label_1204:
	var_23_int = 0; // 0x4b4 MovI
	var_29_bool = var_17_int != var_18_int; // 0x4b5 Neq
	if(var_29_bool == 0) goto Label_1211; // 0x4b6 JumpB
	var_30_int = var_18_int - var_17_int; // 0x4b7 Sub
	irand(var_24_int, var_30_int); // 0x4b8 Func
	goto Label_1215; // 0x4ba Jump
	
Label_1215:
	var_23_int = var_23_int + var_17_int; // 0x4bf Add2
	var_31_int = 0; // 0x4c0 PushI
	var_32_bool = var_23_int == var_31_int; // 0x4c1 Eq
	if(var_32_bool == 0) goto Label_1220; // 0x4c2 JumpB
	return 8; // 0x4c3 Return
	
Label_1220:
	var_33_string = "Money"; // 0x4c4 PushS
	GetInvItemByName(var_25_int, var_33_string); // 0x4c5 Func
	var_34_int = 0; // 0x4c7 PushI
	AddItem(var_26_bool, var_25_int, var_34_int, var_23_int); // 0x4c8 Func
	return 8; // 0x4ca Return
	
Label_1211:
	var_35_int = 0; // 0x4bb PushI
	var_36_bool = var_17_int == var_35_int; // 0x4bc Eq
	if(var_36_bool == 0) goto Label_1215; // 0x4bd JumpB
	return 8; // 0x4be Return
}


func_1454(var_9_object)
{
	var_10_object = Obj(); // 0x5af PushV
	var_10_object = var_9_object; // 0x5b0 Mov
	func_1269(var_10_object); // 0x5b1 Call
	return 0; // 0x5b3 Return
}


func_1335(var_80_object)
{
	var_81_object = Obj(); // 0x538 PushV
	var_81_object = var_80_object; // 0x539 Mov
	func_1322(var_81_object); // 0x53a Call
	var_82_object = Obj(); var_83_bool = 0; // 0x53c PushV
	var_82_object = var_80_object; // 0x53d Mov
	var_83_bool = 1; // 0x53e MovB
	func_1311(var_82_object, var_83_bool); // 0x53f Call
	return 0; // 0x541 Return
}


func_1346(var_55_object)
{
	var_56_bool = 0; var_57_bool = 0; // 0x542 PushV
	var_58_object = GlobalVars[0]; // 0x543 PushGE
	in(var_57_bool, var_55_object); // 0x544 ObjFunc
	var_59_bool = var_57_bool; // 0x546 Push
	if(var_59_bool == 0) goto Label_1358; // 0x547 JumpB
	var_60_object = Obj(); var_61_bool = 0; // 0x548 PushV
	var_60_object = var_55_object; // 0x549 Mov
	var_61_bool = 1; // 0x54a MovB
	func_1311(var_60_object, var_61_bool); // 0x54b Call
	goto Label_1366; // 0x54d Jump
	
Label_1366:
	return 2; // 0x556 Return
	
Label_1358:
	var_242_object = Obj(); // 0x54e PushV
	var_242_object = var_55_object; // 0x54f Mov
	TaskCall(2); // 0x550 TaskCall
	func_266(var_244_bool, var_242_object); // 0x551 Call
	TaskReturn(); // 0x552 TaskReturn
	ResetAAS(); // 0x554 Func
}


func_585(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x249 TMovT
	var_1_object = 0; // 0x24a SetNullT
	Face(var_0_object); // 0x24b Func
	return 0; // 0x24d Return
}


func_1227()
{
	var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_bool = 0; // 0x4cb PushV
	var_16_int = 0; // 0x4cc PushI
	ClearSubContainer(var_16_int); // 0x4cd Func
	var_17_int = 0; var_18_int = 0; // 0x4cf PushV
	var_17_int = 500; // 0x4d0 MovI
	var_18_int = 1000; // 0x4d1 MovI
	func_1197(var_17_int, var_18_int); // 0x4d2 Call
	var_37_int = 4; // 0x4d4 PushI
	irand(var_14_int, var_37_int); // 0x4d5 Func
	var_38_int = 0; // 0x4d7 PushI
	var_39_bool = var_14_int != var_38_int; // 0x4d8 Neq
	if(var_39_bool == 0) goto Label_1249; // 0x4d9 JumpB
	var_40_int = 0; var_41_string = ""; // 0x4da PushV
	var_41_string = "rifle_ammo"; // 0x4db MovS
	func_1264(var_40_int, var_41_string); // 0x4dc Call
	var_44_int = 0; // 0x4de PushI
	AddItem(var_15_bool, var_40_int, var_44_int, var_14_int); // 0x4df Func
	
Label_1249:
	var_45_int = 3; // 0x4e1 PushI
	irand(var_14_int, var_45_int); // 0x4e2 Func
	var_46_int = 0; // 0x4e4 PushI
	var_47_bool = var_14_int == var_46_int; // 0x4e5 Eq
	if(var_47_bool == 0) goto Label_1263; // 0x4e6 JumpB
	var_48_int = 0; var_49_string = ""; // 0x4e7 PushV
	var_49_string = "rusk"; // 0x4e8 MovS
	func_1264(var_48_int, var_49_string); // 0x4e9 Call
	var_50_int = 0; // 0x4eb PushI
	var_51_int = 1; // 0x4ec PushI
	AddItem(var_15_bool, var_48_int, var_50_int, var_51_int); // 0x4ed Func
	
Label_1263:
	return 4; // 0x4ef Return
}


func_590(var_0_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_int = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_int = 0; var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_object = Obj(); var_97_object = Obj(); // 0x24e PushV
	ReportAttack(var_0_object); // 0x24f Func
	GetDirection(var_89_cvector); // 0x251 Func
	var_98_cvector = CVector(0,0,0); var_99_object = Obj(); // 0x253 PushV
	var_99_object = var_0_object; // 0x254 MovT
	func_892(var_99_object); // 0x255 Call
	var_90_cvector = var_98_cvector; // 0x256 Mov
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x258 PushV
	var_105_cvector = var_89_cvector; // 0x259 Mov
	var_106_cvector = var_90_cvector; // 0x25a Mov
	func_1180(var_104_float, var_105_cvector, var_106_cvector); // 0x25b Call
	var_128_float = 0.96593; // 0x25d PushF
	var_129_bool = var_104_float < var_128_float; // 0x25e LT
	if(var_129_bool == 0) goto Label_609; // 0x25f JumpB
	return 18; // 0x260 Return
	
Label_609:
	var_130_string = "all"; // 0x261 PushS
	var_131_string = "attack_begin1"; // 0x262 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x263 Func
	WaitForAnimEnd(); // 0x265 Func
	var_132_string = "shot"; // 0x267 PushS
	Speak(var_132_string); // 0x268 Func
	GetDirection(var_89_cvector); // 0x26a Func
	var_133_cvector = CVector(0,0,0); var_134_object = Obj(); // 0x26c PushV
	var_134_object = var_0_object; // 0x26d MovT
	func_892(var_134_object); // 0x26e Call
	var_90_cvector = var_133_cvector; // 0x26f Mov
	var_135_float = GetByIndex(var_90_cvector, 1); // 0x271 PushE
	var_136_float = 0; var_137_object = Obj(); // 0x272 PushV
	var_137_object = var_0_object; // 0x273 MovT
	func_1126(var_137_object); // 0x274 Call
	var_135_float = var_135_float + var_136_float; // 0x276 Add2
	SetByIndex(var_90_cvector, 1) = var_135_float; // 0x277 PopE
	var_142_float = 0.2618; // 0x278 PushF
	RandVecCone3D(var_91_cvector, var_90_cvector, var_142_float); // 0x279 Func
	GetVictimMaterial(var_91_cvector, var_92_object, var_93_int, var_94_cvector); // 0x27b Func
	var_143_bool = var_92_object != 0; // 0x27d NullNeq
	if(var_143_bool == 0) goto Label_668; // 0x27e JumpB
	var_144_bool = var_92_object == var_0_object; // 0x27f Eq
	if(var_144_bool == 0) goto Label_653; // 0x280 JumpB
	var_145_float = 0; var_146_object = Obj(); var_147_float = 0; var_148_int = 0; // 0x281 PushV
	var_146_object = var_0_object; // 0x282 MovT
	var_147_float = 1.5; // 0x283 MovF
	var_148_int = 0; // 0x284 MovI
	func_919(var_145_float, var_146_object, var_147_float, var_148_int); // 0x285 Call
	var_95_float = var_145_float; // 0x286 Mov
	var_195_int = 2; // 0x288 PushI
	var_196_float = 1.5; // 0x289 PushF
	ReportHit(var_0_object, var_195_int, var_95_float, var_196_float); // 0x28a Func
	goto Label_668; // 0x28c Jump
	
Label_668:
	var_197_string = "all"; // 0x29c PushS
	var_198_string = "attack_end1"; // 0x29d PushS
	PlayAnimation(var_197_string, var_198_string); // 0x29e Func
	WaitForAnimEnd(); // 0x2a0 Func
	var_199_string = "all"; // 0x2a2 PushS
	var_200_string = "attack_on"; // 0x2a3 PushS
	LockAnimationEnd(var_199_string, var_200_string); // 0x2a4 Func
	return 18; // 0x2a6 Return
	
Label_653:
	var_201_int = -1; // 0x28d PushI
	var_202_bool = var_93_int != var_201_int; // 0x28e Neq
	if(var_202_bool == 0) goto Label_668; // 0x28f JumpB
	GetScene(var_96_object); // 0x290 Func
	var_203_string = "scripted"; // 0x292 PushS
	var_204_cvector = CVector(0.0, 0.0, 1.0); // 0x293 PushVec
	var_205_string = "richochet.xml"; // 0x294 PushS
	AddActorByType(var_97_object, var_203_string, var_96_object, var_94_cvector, var_204_cvector, var_205_string); // 0x295 Func
	var_206_string = "Material"; // 0x297 PushS
	SetScriptProperty(var_206_string, var_93_int); // 0x298 ObjFunc
	var_97_object = 0; // 0x29a SetNull
	var_96_object = 0; // 0x29b SetNull
}


func_724()
{
	return 0; // 0x2d4 Return
}


func_1367(var_252_bool, var_253_object)
{
	var_254_float = 0; var_255_object = Obj(); // 0x558 PushV
	var_255_object = var_253_object; // 0x559 Mov
	func_899(var_255_object); // 0x55a Call
	var_262_float = 40000.0; // 0x55c PushF
	var_252_bool = var_254_float <= var_262_float; // 0x55d LE2
	return 0; // 0x55e Return
}


func_983(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x3d7 PushV
	IsDead(var_31_bool); // 0x3d8 ObjFunc
	var_28_bool = var_31_bool; // 0x3da Mov
	return 2; // 0x3db Return
}


func_1115()
{
	var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); // 0x45b PushV
	GetPosition(var_213_cvector); // 0x45c ObjFunc
	GetPosition(var_214_cvector); // 0x45e Func
	var_215_cvector = var_213_cvector - var_214_cvector; // 0x460 Sub2
	var_216_float = GetByIndex(var_215_cvector, 0); // 0x461 PushE
	var_217_float = GetByIndex(var_215_cvector, 2); // 0x462 PushE
	RotateAsync(var_216_float, var_217_float); // 0x463 Func
	return 6; // 0x465 Return
}


func_988(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3dc PushV
	var_23_bool = var_18_object == 0; // 0x3dd NullEq
	if(var_23_bool == 0) goto Label_993; // 0x3de JumpB
	var_17_bool = 0; // 0x3df MovB
	return 4; // 0x3e0 Return
	
Label_993:
	var_24_bool = 0; // 0x3e1 PushV
	var_24_bool = 0; // 0x3e2 MovB
	var_25_string = "IsDead"; // 0x3e3 PushS
	var_26_int = 1; // 0x3e4 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x3e5 FuncExist
	if(var_27_bool == 0) goto Label_1005; // 0x3e6 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x3e7 PushV
	var_29_object = var_18_object; // 0x3e8 Mov
	func_983(var_29_object); // 0x3e9 Call
	if(var_28_bool == 0) goto Label_1005; // 0x3eb JumpB
	var_24_bool = 1; // 0x3ec MovB
	
Label_1005:
	if(var_24_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_17_bool = 0; // 0x3ee MovB
	return 4; // 0x3ef Return
	
Label_1008:
	GetScene(var_21_object); // 0x3f0 Func
	var_32_bool = var_21_object == 0; // 0x3f2 NullEq
	if(var_32_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_17_bool = 0; // 0x3f4 MovB
	return 4; // 0x3f5 Return
	
Label_1014:
	GetScene(var_22_object); // 0x3f6 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x3f8 Neq
	if(var_33_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_17_bool = 0; // 0x3fa MovB
	return 4; // 0x3fb Return
	
Label_1020:
	var_17_bool = 1; // 0x3fc MovB
	return 4; // 0x3fd Return
}


func_1375(var_50_bool, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0; // 0x55f PushV
	IsPlayerActor(var_51_object, var_53_bool); // 0x560 Func
	var_50_bool = var_53_bool; // 0x562 Mov
	return 2; // 0x563 Return
}


func_1380(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x564 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x565 PushV
	var_14_object = var_10_object; // 0x566 Mov
	func_1024(var_13_bool, var_14_object); // 0x567 Call
	var_47_bool = var_13_bool == 0; // 0x569 Not
	if(var_47_bool == 0) goto Label_1389; // 0x56a JumpB
	var_9_bool = 0; // 0x56b MovB
	return 2; // 0x56c Return
	
Label_1389:
	var_48_object = GlobalVars[0]; // 0x56d PushGE
	in(var_12_bool, var_10_object); // 0x56e ObjFunc
	var_49_bool = var_12_bool; // 0x570 Push
	if(var_49_bool == 0) goto Label_1396; // 0x571 JumpB
	var_9_bool = 1; // 0x572 MovB
	return 2; // 0x573 Return
	
Label_1396:
	var_50_bool = 0; var_51_object = Obj(); // 0x574 PushV
	var_51_object = var_10_object; // 0x575 Mov
	func_1375(var_50_bool, var_51_object); // 0x576 Call
	var_9_bool = var_50_bool; // 0x577 Mov
	return 2; // 0x579 Return
}


func_1126(var_136_float)
{
	var_138_float = 0; var_139_float = 0; var_140_float = 0; var_141_float = 0; // 0x466 PushV
	GetEyesHeight(var_140_float); // 0x467 Func
	GetEyesHeight(var_141_float); // 0x469 ObjFunc
	var_136_float = var_141_float - var_140_float; // 0x46b Sub2
	return 4; // 0x46c Return
}


func_1133(var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x46d PushV
	var_28_cvector = var_26_cvector - var_25_cvector; // 0x46e Sub2
	var_24_float = var_28_cvector | var_28_cvector; // 0x46f Or2
	return 2; // 0x470 Return
}


func_879()
{
	StopGroup0(); // 0x36f Func
	Stop(); // 0x371 Func
	return 0; // 0x373 Return
}


func_1264(var_40_int, var_41_string)
{
	var_42_int = 0; var_43_int = 0; // 0x4f0 PushV
	GetInvItemByName(var_43_int, var_41_string); // 0x4f1 Func
	var_40_int = var_43_int; // 0x4f3 Mov
	return 2; // 0x4f4 Return
}


func_1137(var_178_float, var_179_float, var_180_float)
{
	var_183_bool = var_179_float < var_180_float; // 0x472 LT
	if(var_183_bool == 0) goto Label_1142; // 0x473 JumpB
	var_178_float = var_179_float; // 0x474 Mov
	goto Label_1143; // 0x475 Jump
	
Label_1143:
	return 0; // 0x477 Return
	
Label_1142:
	var_178_float = var_180_float; // 0x476 Mov
}


func_884(var_170_string, var_171_int)
{
	var_172_int = 1; // 0x375 PushI
	var_173_bool = var_171_int == var_172_int; // 0x376 Eq
	if(var_173_bool == 0) goto Label_890; // 0x377 JumpB
	var_170_string = "fire"; // 0x378 MovS
	return 0; // 0x379 Return
	
Label_890:
	var_170_string = "phys"; // 0x37a MovS
	return 0; // 0x37b Return
}


func_1269(var_10_object)
{
	var_11_object = Obj(); // 0x4f6 PushV
	var_11_object = var_10_object; // 0x4f7 Mov
	TaskCall(0); // 0x4f8 TaskCall
	func_0(var_11_object); // 0x4f9 Call
	TaskReturn(); // 0x4fa TaskReturn
	return 0; // 0x4fc Return
}


func_119(var_75_string)
{
	RemoveRTEnvelope(); // 0x78 Func
	SetDeathState(); // 0x7a Func
	Stop(); // 0x7c Func
	StopAsync(); // 0x7e Func
	StopSecondaryAnimation(); // 0x80 Func
	var_76_string = "all"; // 0x82 PushS
	PlayAnimation(var_76_string, var_75_string); // 0x83 Func
	WaitForAnimEnd(); // 0x85 Func
	var_77_string = "all"; // 0x87 PushS
	LockAnimationEnd(var_77_string, var_75_string); // 0x88 Func
	RemoveEnvelope(); // 0x8a Func
	return 0; // 0x8c Return
}


func_1144(var_188_float, var_189_float, var_190_float, var_191_float)
{
	var_192_bool = var_189_float < var_190_float; // 0x479 LT
	if(var_192_bool == 0) goto Label_1149; // 0x47a JumpB
	var_188_float = var_190_float; // 0x47b Mov
	return 0; // 0x47c Return
	
Label_1149:
	var_193_bool = var_189_float > var_191_float; // 0x47d GT
	if(var_193_bool == 0) goto Label_1153; // 0x47e JumpB
	var_188_float = var_191_float; // 0x47f Mov
	return 0; // 0x480 Return
	
Label_1153:
	var_188_float = var_189_float; // 0x481 Mov
	return 0; // 0x482 Return
}


func_1402(var_55_object)
{
	var_56_object = Obj(); // 0x57b PushV
	var_56_object = var_55_object; // 0x57c Mov
	func_1448(var_56_object); // 0x57d Call
	return 0; // 0x57f Return
}


func_892(var_98_cvector)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0x37c PushV
	GetPosition(var_102_cvector); // 0x37d Func
	GetPosition(var_103_cvector); // 0x37f ObjFunc
	var_98_cvector = var_103_cvector - var_102_cvector; // 0x381 Sub2
	return 4; // 0x382 Return
}


