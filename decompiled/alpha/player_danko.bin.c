task_0_event_7(var_0_int, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x18 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x19 Eq
	if(var_18_bool == 0) goto Label_31; // 0x1a JumpB
	func_3034(); // 0x1c Call
	goto Label_37; // 0x1e Jump
	
Label_37:
	return 0; // 0x25 Return
	
Label_31:
	var_66_int = 11; // 0x1f PushI
	var_67_bool = var_16_bool == var_66_int; // 0x20 Eq
	if(var_67_bool == 0) goto Label_37; // 0x21 JumpB
	func_3038(); // 0x23 Call
}


task_1_event_37(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = var_1_bool; // 0x62 PushT
	if(var_16_bool == 0) goto Label_102; // 0x63 JumpB
	StopAnimation(); // 0x64 Func
	
Label_102:
	return 0; // 0x66 Return
}


task_1_event_18(var_0_bool, var_1_bool, var_2_int, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x68 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x69 Eq
	if(var_18_bool == 0) goto Label_113; // 0x6a JumpB
	var_0_bool = 1; // 0x6b TMovB
	var_19_bool = var_1_bool; // 0x6c PushT
	if(var_19_bool == 0) goto Label_112; // 0x6d JumpB
	StopAnimation(); // 0x6e Func
	
Label_112:
	goto Label_117; // 0x70 Jump
	
Label_117:
	return 0; // 0x75 Return
	
Label_113:
	var_20_int = 0; // 0x71 PushV
	var_20_int = var_16_bool; // 0x72 Mov
	func_3139(); // 0x73 Call
}


task_1_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_bool = var_1_bool; // 0x77 PushT
	if(var_20_bool == 0) goto Label_124; // 0x78 JumpB
	var_21_string = "hitblock"; // 0x79 PushS
	PlayAnimation(var_21_string); // 0x7a Func
	
Label_124:
	return 0; // 0x7c Return
}


task_2_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x115 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x116 Eq
	if(var_18_bool == 0) goto Label_282; // 0x117 JumpB
	var_0_bool = 1; // 0x118 TMovB
	goto Label_286; // 0x119 Jump
	
Label_286:
	return 0; // 0x11e Return
	
Label_282:
	var_19_int = 0; // 0x11a PushV
	var_19_int = var_16_bool; // 0x11b Mov
	func_3139(); // 0x11c Call
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x120 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x121 Eq
	if(var_18_bool == 0) goto Label_295; // 0x122 JumpB
	func_3034(); // 0x124 Call
	goto Label_301; // 0x126 Jump
	
Label_301:
	return 0; // 0x12d Return
	
Label_295:
	var_66_int = 11; // 0x127 PushI
	var_67_bool = var_16_bool == var_66_int; // 0x128 Eq
	if(var_67_bool == 0) goto Label_301; // 0x129 JumpB
	func_3038(); // 0x12b Call
}


task_3_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x1df PushI
	var_18_bool = var_16_bool == var_17_int; // 0x1e0 Eq
	if(var_18_bool == 0) goto Label_484; // 0x1e1 JumpB
	var_0_bool = 1; // 0x1e2 TMovB
	goto Label_488; // 0x1e3 Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_484:
	var_19_int = 0; // 0x1e4 PushV
	var_19_int = var_16_bool; // 0x1e5 Mov
	func_3139(); // 0x1e6 Call
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x1ea PushI
	var_18_bool = var_16_bool == var_17_int; // 0x1eb Eq
	if(var_18_bool == 0) goto Label_497; // 0x1ec JumpB
	func_3034(); // 0x1ee Call
	goto Label_503; // 0x1f0 Jump
	
Label_503:
	return 0; // 0x1f7 Return
	
Label_497:
	var_66_int = 11; // 0x1f1 PushI
	var_67_bool = var_16_bool == var_66_int; // 0x1f2 Eq
	if(var_67_bool == 0) goto Label_503; // 0x1f3 JumpB
	func_3038(); // 0x1f5 Call
}


task_4_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x2a8 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x2a9 Eq
	if(var_18_bool == 0) goto Label_685; // 0x2aa JumpB
	var_0_bool = 1; // 0x2ab TMovB
	goto Label_689; // 0x2ac Jump
	
Label_689:
	return 0; // 0x2b1 Return
	
Label_685:
	var_19_int = 0; // 0x2ad PushV
	var_19_int = var_16_bool; // 0x2ae Mov
	func_3139(); // 0x2af Call
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x2b3 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x2b4 Eq
	if(var_18_bool == 0) goto Label_698; // 0x2b5 JumpB
	func_3034(); // 0x2b7 Call
	goto Label_704; // 0x2b9 Jump
	
Label_704:
	return 0; // 0x2c0 Return
	
Label_698:
	var_66_int = 11; // 0x2ba PushI
	var_67_bool = var_16_bool == var_66_int; // 0x2bb Eq
	if(var_67_bool == 0) goto Label_704; // 0x2bc JumpB
	func_3038(); // 0x2be Call
}


task_5_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x371 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x372 Eq
	if(var_18_bool == 0) goto Label_886; // 0x373 JumpB
	var_0_bool = 1; // 0x374 TMovB
	goto Label_890; // 0x375 Jump
	
Label_890:
	return 0; // 0x37a Return
	
Label_886:
	var_19_int = 0; // 0x376 PushV
	var_19_int = var_16_bool; // 0x377 Mov
	func_3139(); // 0x378 Call
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x37c PushI
	var_18_bool = var_16_bool == var_17_int; // 0x37d Eq
	if(var_18_bool == 0) goto Label_899; // 0x37e JumpB
	func_3034(); // 0x380 Call
	goto Label_905; // 0x382 Jump
	
Label_905:
	return 0; // 0x389 Return
	
Label_899:
	var_66_int = 11; // 0x383 PushI
	var_67_bool = var_16_bool == var_66_int; // 0x384 Eq
	if(var_67_bool == 0) goto Label_905; // 0x385 JumpB
	func_3038(); // 0x387 Call
}


task_6_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x43a PushI
	var_18_bool = var_16_bool == var_17_int; // 0x43b Eq
	if(var_18_bool == 0) goto Label_1087; // 0x43c JumpB
	var_0_bool = 1; // 0x43d TMovB
	goto Label_1091; // 0x43e Jump
	
Label_1091:
	return 0; // 0x443 Return
	
Label_1087:
	var_19_int = 0; // 0x43f PushV
	var_19_int = var_16_bool; // 0x440 Mov
	func_3139(); // 0x441 Call
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x445 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x446 Eq
	if(var_18_bool == 0) goto Label_1100; // 0x447 JumpB
	func_3034(); // 0x449 Call
	goto Label_1106; // 0x44b Jump
	
Label_1106:
	return 0; // 0x452 Return
	
Label_1100:
	var_66_int = 11; // 0x44c PushI
	var_67_bool = var_16_bool == var_66_int; // 0x44d Eq
	if(var_67_bool == 0) goto Label_1106; // 0x44e JumpB
	func_3038(); // 0x450 Call
}


task_7_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x529 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x52a Eq
	if(var_18_bool == 0) goto Label_1326; // 0x52b JumpB
	var_0_bool = 1; // 0x52c TMovB
	goto Label_1330; // 0x52d Jump
	
Label_1330:
	return 0; // 0x532 Return
	
Label_1326:
	var_19_int = 0; // 0x52e PushV
	var_19_int = var_16_bool; // 0x52f Mov
	func_3139(); // 0x530 Call
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x534 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x535 Eq
	if(var_18_bool == 0) goto Label_1339; // 0x536 JumpB
	func_3034(); // 0x538 Call
	goto Label_1345; // 0x53a Jump
	
Label_1345:
	return 0; // 0x541 Return
	
Label_1339:
	var_66_int = 11; // 0x53b PushI
	var_67_bool = var_16_bool == var_66_int; // 0x53c Eq
	if(var_67_bool == 0) goto Label_1345; // 0x53d JumpB
	func_3038(); // 0x53f Call
}


task_8_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x629 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x62a Eq
	if(var_18_bool == 0) goto Label_1582; // 0x62b JumpB
	var_0_bool = 1; // 0x62c TMovB
	goto Label_1586; // 0x62d Jump
	
Label_1586:
	return 0; // 0x632 Return
	
Label_1582:
	var_19_int = 0; // 0x62e PushV
	var_19_int = var_16_bool; // 0x62f Mov
	func_3139(); // 0x630 Call
}


task_8_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x634 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x635 Eq
	if(var_18_bool == 0) goto Label_1595; // 0x636 JumpB
	func_3034(); // 0x638 Call
	goto Label_1601; // 0x63a Jump
	
Label_1601:
	return 0; // 0x641 Return
	
Label_1595:
	var_66_int = 11; // 0x63b PushI
	var_67_bool = var_16_bool == var_66_int; // 0x63c Eq
	if(var_67_bool == 0) goto Label_1601; // 0x63d JumpB
	func_3038(); // 0x63f Call
}


task_9_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_int, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x729 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x72a Eq
	if(var_18_bool == 0) goto Label_1838; // 0x72b JumpB
	var_0_bool = 1; // 0x72c TMovB
	goto Label_1842; // 0x72d Jump
	
Label_1842:
	return 0; // 0x732 Return
	
Label_1838:
	var_19_int = 0; // 0x72e PushV
	var_19_int = var_16_bool; // 0x72f Mov
	func_3139(); // 0x730 Call
}


task_9_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_int, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x734 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x735 Eq
	if(var_18_bool == 0) goto Label_1851; // 0x736 JumpB
	func_3034(); // 0x738 Call
	goto Label_1857; // 0x73a Jump
	
Label_1857:
	return 0; // 0x741 Return
	
Label_1851:
	var_66_int = 11; // 0x73b PushI
	var_67_bool = var_16_bool == var_66_int; // 0x73c Eq
	if(var_67_bool == 0) goto Label_1857; // 0x73d JumpB
	func_3038(); // 0x73f Call
}


task_10_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = var_0_bool != 0; // 0x79a NullNeq
	if(var_16_bool == 0) goto Label_1950; // 0x79b JumpB
	RemoveActor(var_0_bool); // 0x79c Func
	
Label_1950:
	var_17_string = "flame"; // 0x79e PushS
	RemoveAttachPoint(var_17_string); // 0x79f Func
	return 0; // 0x7a1 Return
}


task_10_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_int, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x7a3 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x7a4 Eq
	if(var_18_bool == 0) goto Label_1960; // 0x7a5 JumpB
	var_2_bool = 1; // 0x7a6 TMovB
	goto Label_1964; // 0x7a7 Jump
	
Label_1964:
	return 0; // 0x7ac Return
	
Label_1960:
	var_19_int = 0; // 0x7a8 PushV
	var_19_int = var_16_bool; // 0x7a9 Mov
	func_3139(); // 0x7aa Call
}


task_10_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0; // 0x7ad PushV
	func_2127(var_16_bool); // 0x7ae Call
	if(var_16_bool == 0) goto Label_1973; // 0x7b0 JumpB
	var_1_bool = 0; // 0x7b1 TMovB
	var_23_float = 0.83333; // 0x7b2 PushF
	SetLength(var_23_float); // 0x7b3 TObjFunc
	
Label_1973:
	return 0; // 0x7b5 Return
}


task_10_event_14(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_1978(var_15_bool); // 0x7b7 Call
	return 0; // 0x7b9 Return
}


task_10_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_int, var_14_bool, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x7c0 PushI
	var_18_bool = var_16_bool == var_17_int; // 0x7c1 Eq
	if(var_18_bool == 0) goto Label_1991; // 0x7c2 JumpB
	func_3034(); // 0x7c4 Call
	goto Label_2004; // 0x7c6 Jump
	
Label_2004:
	return 0; // 0x7d4 Return
	
Label_1991:
	var_66_int = 11; // 0x7c7 PushI
	var_67_bool = var_16_bool == var_66_int; // 0x7c8 Eq
	if(var_67_bool == 0) goto Label_1998; // 0x7c9 JumpB
	func_3038(); // 0x7cb Call
	goto Label_2004; // 0x7cd Jump
	
Label_1998:
	var_73_int = 20; // 0x7ce PushI
	var_74_bool = var_16_bool == var_73_int; // 0x7cf Eq
	if(var_74_bool == 0) goto Label_2004; // 0x7d0 JumpB
	func_2005(var_16_bool); // 0x7d2 Call
}


task_11_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_int, var_15_bool, var_16_bool)
{
	var_17_int = 10; // 0x8bc PushI
	var_18_bool = var_16_bool == var_17_int; // 0x8bd Eq
	if(var_18_bool == 0) goto Label_2241; // 0x8be JumpB
	var_0_bool = 1; // 0x8bf TMovB
	goto Label_2245; // 0x8c0 Jump
	
Label_2245:
	return 0; // 0x8c5 Return
	
Label_2241:
	var_19_int = 0; // 0x8c1 PushV
	var_19_int = var_16_bool; // 0x8c2 Mov
	func_3139(); // 0x8c3 Call
}


task_12_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0; // 0x928 PushV
	var_16_bool = 0; // 0x929 MovB
	var_17_bool = var_0_bool == 0; // 0x92a Not
	if(var_17_bool == 0) goto Label_2351; // 0x92b JumpB
	var_18_bool = var_1_bool; // 0x92c PushT
	if(var_18_bool == 0) goto Label_2351; // 0x92d JumpB
	var_16_bool = 1; // 0x92e MovB
	
Label_2351:
	if(var_16_bool == 0) goto Label_2355; // 0x92f JumpB
	var_19_int = -1; // 0x930 PushI
	SetHandsItem(var_19_int); // 0x931 Func
	
Label_2355:
	return 0; // 0x933 Return
}


task_13_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_string, var_18_bool, var_19_bool, var_20_string, var_21_bool)
{
	var_55_bool = 0; var_56_string = ""; var_57_bool = 0; var_58_bool = 0; var_59_string = ""; var_60_bool = 0; // 0x9e5 PushV
	IsWeaponHolstered(var_58_bool); // 0x9e6 Func
	var_61_bool = var_58_bool == 0; // 0x9e8 Not
	if(var_61_bool == 0) goto Label_2557; // 0x9e9 JumpB
	func_2637(); // 0x9eb Call
	GetCurrentWeapon(var_59_string); // 0x9ed Func
	var_62_string = ""; // 0x9ef PushV
	var_62_string = var_59_string; // 0x9f0 Mov
	func_2356(var_62_string); // 0x9f1 Call
	func_2633(); // 0x9f4 Call
	IsAltShooting(var_60_bool); // 0x9f6 Func
	var_1089_bool = var_60_bool; // 0x9f8 Push
	if(var_1089_bool == 0) goto Label_2557; // 0x9f9 JumpB
	func_2558(); // 0x9fb Call
	
Label_2557:
	return 6; // 0x9fd Return
}


task_13_event_36(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0; var_17_string = ""; var_18_bool = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; // 0x9fe PushV
	IsWeaponHolstered(var_19_bool); // 0x9ff Func
	var_22_bool = var_19_bool == 0; // 0xa01 Not
	if(var_22_bool == 0) goto Label_2582; // 0xa02 JumpB
	func_2637(); // 0xa04 Call
	GetCurrentWeapon(var_20_string); // 0xa06 Func
	var_24_string = ""; // 0xa08 PushV
	var_24_string = var_20_string; // 0xa09 Mov
	func_2456(var_24_string); // 0xa0a Call
	func_2633(); // 0xa0d Call
	IsShooting(var_21_bool); // 0xa0f Func
	var_54_bool = var_21_bool; // 0xa11 Push
	if(var_54_bool == 0) goto Label_2582; // 0xa12 JumpB
	func_2533(); // 0xa14 Call
	
Label_2582:
	return 6; // 0xa16 Return
}


task_13_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_2637(); // 0xa18 Call
	TaskCall(0); // 0xa1b TaskCall
	func_0(); // 0xa1c Call
	TaskReturn(); // 0xa1d TaskReturn
	func_2633(); // 0xa20 Call
	return 0; // 0xa22 Return
}


task_13_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_int)
{
	var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; // 0xa23 PushV
	var_21_int = 10; // 0xa24 PushI
	var_22_bool = var_16_int == var_21_int; // 0xa25 Eq
	if(var_22_bool == 0) goto Label_2604; // 0xa26 JumpB
	func_3034(); // 0xa28 Call
	return 4; // 0xa2a Return
	
Label_2604:
	var_70_int = 11; // 0xa2c PushI
	var_71_bool = var_16_int == var_70_int; // 0xa2d Eq
	if(var_71_bool == 0) goto Label_2611; // 0xa2e JumpB
	func_3038(); // 0xa30 Call
	return 4; // 0xa32 Return
	
Label_2611:
	func_2637(); // 0xa34 Call
	IsWeaponHolstered(var_19_bool); // 0xa36 Func
	var_78_bool = var_19_bool == 0; // 0xa38 Not
	if(var_78_bool == 0) goto Label_2629; // 0xa39 JumpB
	var_79_int = 2; // 0xa3a PushI
	irand(var_20_int, var_79_int); // 0xa3b Func
	var_80_string = "idle"; // 0xa3d PushS
	var_81_int = 1; // 0xa3e PushI
	var_82_int = var_20_int + var_81_int; // 0xa3f Add
	var_83_int = var_80_string + var_82_int; // 0xa40 Add
	PlayAnimation(var_83_int); // 0xa41 Func
	WaitForAnimEnd(); // 0xa43 Func
	
Label_2629:
	func_2633(); // 0xa46 Call
	return 4; // 0xa48 Return
}


event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_string)
{
	var_17_string = "die"; // 0xbe6 PushS
	var_18_bool = var_16_string == var_17_string; // 0xbe7 Eq
	if(var_18_bool == 0) goto Label_3052; // 0xbe8 JumpB
	func_2976(); // 0xbea Call
	
Label_3052:
	return 0; // 0xbec Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0xbed PushV
	var_20_string = "health"; // 0xbee PushS
	var_21_bool = var_17_string == var_20_string; // 0xbef Eq
	if(var_21_bool == 0) goto Label_3065; // 0xbf0 JumpB
	var_22_string = "health"; // 0xbf1 PushS
	GetProperty(var_22_string, var_19_float); // 0xbf2 Func
	var_23_int = 0; // 0xbf4 PushI
	var_24_bool = var_19_float <= var_23_int; // 0xbf5 LE
	if(var_24_bool == 0) goto Label_3065; // 0xbf6 JumpB
	SignalDeath(var_16_object); // 0xbf7 Func
	
Label_3065:
	return 2; // 0xbf9 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object)
{
	func_2976(); // 0xbfc Call
	return 0; // 0xbfe Return
}


event_31(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object, var_17_float)
{
	var_18_bool = 0; var_19_bool = 0; // 0xbff PushV
	var_20_object = GlobalVars[1]; // 0xc00 PushGE
	in(var_19_bool, var_16_object); // 0xc01 ObjFunc
	var_21_bool = var_19_bool; // 0xc03 Push
	if(var_21_bool == 0) goto Label_3078; // 0xc04 JumpB
	return 2; // 0xc05 Return
	
Label_3078:
	var_22_object = GlobalVars[1]; // 0xc06 PushGE
	add(var_16_object); // 0xc07 ObjFunc
	var_23_bool = 0; var_24_string = ""; var_25_float = 0; var_26_float = 0; var_27_float = 0; // 0xc09 PushV
	var_24_string = "reputation"; // 0xc0a MovS
	var_25_float = var_17_float; // 0xc0b Mov
	var_26_float = 0; // 0xc0c MovI
	var_27_float = 1; // 0xc0d MovI
	func_2668(var_23_bool, var_24_string, var_25_float, var_26_float, var_27_float); // 0xc0e Call
	return 2; // 0xc10 Return
}


event_19(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_3281(); // 0xc12 Call
	func_3002(); // 0xc15 Call
	return 0; // 0xc17 Return
}


event_20(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_3023(); // 0xc19 Call
	func_2992(); // 0xc1c Call
	return 0; // 0xc1e Return
}


event_21(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_3013(); // 0xc20 Call
	func_3002(); // 0xc23 Call
	return 0; // 0xc25 Return
}


event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object)
{
	return 0; // 0xc27 Return
}


event_39(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float)
{
	var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_float = 0; // 0xc28 PushV
	var_21_float = 770.0; // 0xc29 PushF
	var_22_bool = var_16_float > var_21_float; // 0xc2a GT
	if(var_22_bool == 0) goto Label_3138; // 0xc2b JumpB
	Trace(var_16_float); // 0xc2c Func
	var_23_float = 770.0; // 0xc2e PushF
	var_24_int = var_16_float - var_23_float; // 0xc2f Sub
	var_25_float = 0.0035; // 0xc30 PushF
	var_19_float = var_24_int * var_25_float; // 0xc31 Mult2
	var_26_float = 0; var_27_object = Obj(); var_28_float = 0; var_29_int = 0; // 0xc32 PushV
	var_30_object = Obj(); // 0xc33 PushV
	func_2771(var_30_object); // 0xc34 Call
	var_27_object = var_30_object; // 0xc35 Mov
	var_28_float = var_19_float; // 0xc37 Mov
	var_29_int = 0; // 0xc38 MovI
	func_2687(var_26_float, var_27_object, var_28_float, var_29_int); // 0xc39 Call
	var_20_float = var_26_float; // 0xc3a Mov
	var_85_object = Obj(); // 0xc3c PushV
	func_2771(var_85_object); // 0xc3d Call
	var_86_int = 0; // 0xc3f PushI
	ReportHit(var_85_object, var_86_int, var_20_float, var_19_float); // 0xc40 Func
	
Label_3138:
	return 4; // 0xc42 Return
}


event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; // 0xc43 PushV
	var_41_int = 0; // 0xc44 PushI
	var_42_bool = var_16_int == var_41_int; // 0xc45 Eq
	if(var_42_bool == 0) goto Label_3146; // 0xc46 JumpB
	Inventory(); // 0xc47 Func
	goto Label_3280; // 0xc49 Jump
	
Label_3280:
	return 24; // 0xcd0 Return
	
Label_3146:
	var_43_int = 1; // 0xc4a PushI
	var_44_bool = var_16_int == var_43_int; // 0xc4b Eq
	if(var_44_bool == 0) goto Label_3195; // 0xc4c JumpB
	GetMainOutdoorScene(var_29_object); // 0xc4d Func
	GetActiveScene(var_30_object); // 0xc4f Func
	var_45_bool = var_29_object == 0; // 0xc51 NullEq
	if(var_45_bool == 0) goto Label_3159; // 0xc52 JumpB
	var_46_string = "Can't find main outdoor oscene"; // 0xc53 PushS
	Trace(var_46_string); // 0xc54 Func
	return 24; // 0xc56 Return
	
Label_3159:
	GetMap(var_31_object); // 0xc57 ObjFunc
	var_47_bool = var_31_object == 0; // 0xc59 NullEq
	if(var_47_bool == 0) goto Label_3167; // 0xc5a JumpB
	var_48_string = "Can't find map"; // 0xc5b PushS
	Trace(var_48_string); // 0xc5c Func
	return 24; // 0xc5e Return
	
Label_3167:
	var_49_bool = var_29_object == var_30_object; // 0xc5f Eq
	if(var_49_bool == 0) goto Label_3172; // 0xc60 JumpB
	GetPosition(var_32_cvector); // 0xc61 Func
	goto Label_3185; // 0xc63 Jump
	
Label_3185:
	var_50_float = GetByIndex(var_32_cvector, 0); // 0xc71 PushE
	var_51_float = GetByIndex(var_32_cvector, 2); // 0xc72 PushE
	SetMapParams(var_50_float, var_51_float); // 0xc73 ObjFunc
	ShowMap(var_31_object); // 0xc75 Func
	var_31_object = 0; // 0xc77 SetNull
	var_30_object = 0; // 0xc78 SetNull
	var_29_object = 0; // 0xc79 SetNull
	goto Label_3280; // 0xc7a Jump
	
Label_3172:
	GetName(var_33_string); // 0xc64 ObjFunc
	var_52_string = "pt_gmap_"; // 0xc66 PushS
	var_53_int = var_52_string + var_33_string; // 0xc67 Add
	GetLocator(var_53_int, var_34_bool, var_32_cvector, var_35_cvector); // 0xc68 ObjFunc
	var_54_bool = var_34_bool == 0; // 0xc6a Not
	if(var_54_bool == 0) goto Label_3185; // 0xc6b JumpB
	var_55_string = "FIXME: No map locator for scene : "; // 0xc6c PushS
	var_56_int = var_55_string + var_33_string; // 0xc6d Add
	Trace(var_56_int); // 0xc6e Func
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0xc70 MovV
	
Label_3195:
	var_57_int = 2; // 0xc7b PushI
	var_58_bool = var_16_int == var_57_int; // 0xc7c Eq
	if(var_58_bool == 0) goto Label_3201; // 0xc7d JumpB
	Diary(); // 0xc7e Func
	goto Label_3280; // 0xc80 Jump
	
Label_3201:
	var_59_int = 3; // 0xc81 PushI
	var_60_bool = var_16_int == var_59_int; // 0xc82 Eq
	if(var_60_bool == 0) goto Label_3207; // 0xc83 JumpB
	ShowMessage(); // 0xc84 Func
	goto Label_3280; // 0xc86 Jump
	
Label_3207:
	var_61_int = 4; // 0xc87 PushI
	var_62_bool = var_16_int == var_61_int; // 0xc88 Eq
	if(var_62_bool == 0) goto Label_3213; // 0xc89 JumpB
	ShowPlayerStats(); // 0xc8a Func
	goto Label_3280; // 0xc8c Jump
	
Label_3213:
	var_63_int = 5; // 0xc8d PushI
	var_64_bool = var_16_int == var_63_int; // 0xc8e Eq
	if(var_64_bool == 0) goto Label_3242; // 0xc8f JumpB
	IsFlashlightOn(var_36_bool); // 0xc90 Func
	var_65_bool = var_36_bool; // 0xc92 Push
	if(var_65_bool == 0) goto Label_3227; // 0xc93 JumpB
	var_66_bool = 0; // 0xc94 PushB
	SwitchFlashlight(var_66_bool); // 0xc95 Func
	var_67_string = "flashlight_off"; // 0xc97 PushS
	PlaySound(var_67_string); // 0xc98 Func
	goto Label_3241; // 0xc9a Jump
	
Label_3241:
	goto Label_3280; // 0xca9 Jump
	
Label_3227:
	var_68_bool = 0; // 0xc9b PushV
	func_2848(var_68_bool); // 0xc9c Call
	if(var_68_bool == 0) goto Label_3238; // 0xc9e JumpB
	var_72_bool = 1; // 0xc9f PushB
	SwitchFlashlight(var_72_bool); // 0xca0 Func
	var_73_string = "flashlight_on"; // 0xca2 PushS
	PlaySound(var_73_string); // 0xca3 Func
	goto Label_3241; // 0xca5 Jump
	
Label_3238:
	var_74_string = "flashlight_nofuel"; // 0xca6 PushS
	PlaySound(var_74_string); // 0xca7 Func
	
Label_3242:
	var_75_int = 6; // 0xcaa PushI
	var_76_bool = var_16_int == var_75_int; // 0xcab Eq
	if(var_76_bool == 0) goto Label_3269; // 0xcac JumpB
	IsVisirOn(var_37_bool); // 0xcad Func
	var_77_bool = var_37_bool; // 0xcaf Push
	if(var_77_bool == 0) goto Label_3253; // 0xcb0 JumpB
	var_78_bool = 0; // 0xcb1 PushB
	SwitchVisir(var_78_bool); // 0xcb2 Func
	goto Label_3268; // 0xcb4 Jump
	
Label_3268:
	goto Label_3280; // 0xcc4 Jump
	
Label_3253:
	var_79_string = "visir"; // 0xcb5 PushS
	GetProperty(var_79_string, var_38_int); // 0xcb6 Func
	var_80_int = var_38_int; // 0xcb8 Push
	if(var_80_int == 0) goto Label_3268; // 0xcb9 JumpB
	var_81_string = "vcharge"; // 0xcba PushS
	GetProperty(var_81_string, var_39_int); // 0xcbb Func
	var_82_int = 10; // 0xcbd PushI
	var_83_bool = var_39_int >= var_82_int; // 0xcbe GE
	if(var_83_bool == 0) goto Label_3268; // 0xcbf JumpB
	var_84_bool = 1; // 0xcc0 PushB
	SwitchVisir(var_84_bool); // 0xcc1 Func
	goto Label_3268; // 0xcc3 Jump
	
Label_3269:
	var_85_int = 7; // 0xcc5 PushI
	var_86_bool = var_16_int == var_85_int; // 0xcc6 Eq
	if(var_86_bool == 0) goto Label_3280; // 0xcc7 JumpB
	IsOverrideActive(var_40_bool); // 0xcc8 Func
	var_87_bool = var_40_bool == 0; // 0xcca Not
	if(var_87_bool == 0) goto Label_3280; // 0xccb JumpB
	var_88_string = "people.xml"; // 0xccc PushS
	var_89_bool = 1; // 0xccd PushB
	ShowWindow(var_88_string, var_89_bool); // 0xcce Func
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_bool = 0; // 0x9a3 PushV
	var_24_object = GlobalVars[1]; // 0x9a4 PushGE
	var_25_object = Obj(); // 0x9a5 PushV
	func_2806(var_25_object); // 0x9a6 Call
	var_24_object = var_25_object; // 0x9a7 Mov
	GlobalVars[1] = var_24_object; // 0x9a9 PopGE
	var_28_string = "effects"; // 0x9aa PushS
	HasProperty(var_28_string, var_20_bool); // 0x9ab Func
	var_29_bool = var_20_bool == 0; // 0x9ad Not
	if(var_29_bool == 0) goto Label_2501; // 0x9ae JumpB
	var_30_string = "effects"; // 0x9af PushS
	var_31_bool = 1; // 0x9b0 PushB
	SetProperty(var_30_string, var_31_bool); // 0x9b1 Func
	var_32_string = "player_disease.bin"; // 0x9b3 PushS
	ApplyEffect(var_32_string); // 0x9b4 Func
	var_33_string = "player_stat.bin"; // 0x9b6 PushS
	ApplyEffect(var_33_string); // 0x9b7 Func
	var_34_string = "player_hit.bin"; // 0x9b9 PushS
	ApplyEffect(var_34_string); // 0x9ba Func
	var_35_string = "player_head.bin"; // 0x9bc PushS
	ApplyEffect(var_35_string); // 0x9bd Func
	var_36_string = "player_flashlight.bin"; // 0x9bf PushS
	ApplyEffect(var_36_string); // 0x9c0 Func
	var_37_string = "player_visir.bin"; // 0x9c2 PushS
	ApplyEffect(var_37_string); // 0x9c3 Func
	
Label_2501:
	func_2633(); // 0x9c6 Call
	var_43_string = "health"; // 0x9c8 PushS
	GetProperty(var_43_string, var_21_float); // 0x9c9 Func
	var_44_int = 0; // 0x9cb PushI
	var_45_bool = var_21_float <= var_44_int; // 0x9cc LE
	if(var_45_bool == 0) goto Label_2514; // 0x9cd JumpB
	func_2976(); // 0x9cf Call
	return 8; // 0x9d1 Return
	
Label_2514:
	IsWeaponHolstered(var_22_bool); // 0x9d2 Func
	var_55_bool = var_22_bool == 0; // 0x9d4 Not
	if(var_55_bool == 0) goto Label_2528; // 0x9d5 JumpB
	IsWalking(var_23_bool); // 0x9d6 Func
	var_56_bool = var_23_bool; // 0x9d8 Push
	if(var_56_bool == 0) goto Label_2528; // 0x9d9 JumpB
	var_57_string = "walk"; // 0x9da PushS
	PlayAnimation(var_57_string); // 0x9db Func
	WaitForAnimEnd(); // 0x9dd Func
	goto Label_2531; // 0x9df Jump
	
Label_2531:
	goto Label_2514; // 0x9e3 Jump
	
Label_2528:
	var_58_float = 0.1; // 0x9e0 PushF
	Sleep(var_58_float); // 0x9e1 Func
}


func_0()
{
	var_17_bool = 0; var_18_bool = 0; // 0x0 PushV
	IsWeaponHolstered(var_18_bool); // 0x1 Func
	var_19_bool = var_18_bool; // 0x3 Push
	if(var_19_bool == 0) goto Label_14; // 0x4 JumpB
	var_20_bool = 0; // 0x5 PushB
	SetWeaponHolster(var_20_bool); // 0x6 Func
	var_21_string = "unholster"; // 0x8 PushS
	PlayAnimation(var_21_string); // 0x9 Func
	WaitForAnimEnd(); // 0xb Func
	goto Label_22; // 0xd Jump
	
Label_22:
	return 2; // 0x16 Return
	
Label_14:
	var_22_string = "holster"; // 0xe PushS
	PlayAnimation(var_22_string); // 0xf Func
	WaitForAnimEnd(); // 0x11 Func
	var_23_bool = 1; // 0x13 PushB
	SetWeaponHolster(var_23_bool); // 0x14 Func
}


func_518(var_396_float)
{
	var_396_float = 0.5; // 0x206 MovF
	return 0; // 0x207 Return
}


func_520(var_412_int)
{
	var_412_int = 1; // 0x208 MovI
	return 0; // 0x209 Return
}


func_522(var_401_int)
{
	var_401_int = 0; // 0x20a MovI
	return 0; // 0x20b Return
}


func_524(var_410_int)
{
	var_410_int = 0; // 0x20c MovI
	return 0; // 0x20d Return
}


func_526(var_389_float, var_390_bool)
{
	var_391_float = 0; var_392_bool = 0; // 0x20f PushV
	var_392_bool = var_390_bool; // 0x210 Mov
	func_511(var_391_float, var_392_bool); // 0x211 Call
	var_394_float = 0; var_395_float = 0; // 0x213 PushV
	var_396_float = 0; // 0x214 PushV
	func_518(var_396_float); // 0x215 Call
	var_395_float = var_396_float; // 0x216 Mov
	func_2908(var_394_float, var_395_float); // 0x218 Call
	var_389_float = var_391_float * var_394_float; // 0x21a Mult2
	return 0; // 0x21b Return
}


func_540()
{
	var_411_int = 0; // 0x21c PushV
	var_412_int = 0; // 0x21d PushV
	func_520(var_412_int); // 0x21e Call
	var_411_int = var_412_int; // 0x21f Mov
	func_2889(var_411_int); // 0x221 Call
	return 0; // 0x223 Return
}


func_548(var_0_bool)
{
	var_334_int = 0; var_335_string = ""; var_336_bool = 0; var_337_string = ""; var_338_int = 0; var_339_string = ""; var_340_float = 0; var_341_object = Obj(); var_342_bool = 0; var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_float = 0; var_346_float = 0; var_347_int = 0; var_348_int = 0; var_349_string = ""; var_350_bool = 0; var_351_string = ""; var_352_int = 0; var_353_string = ""; var_354_float = 0; var_355_object = Obj(); var_356_bool = 0; var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_float = 0; var_360_float = 0; var_361_int = 0; // 0x224 PushV
	var_0_bool = 0; // 0x225 TMovB
	var_348_int = 0; // 0x226 MovI
	
Label_551:
	var_362_int = 1; // 0x227 PushI
	var_348_int = var_348_int + var_362_int; // 0x228 Add2
	var_363_string = "attack"; // 0x229 PushS
	var_364_int = var_363_string + var_348_int; // 0x22a Add
	var_365_string = "_phase1"; // 0x22b PushS
	var_349_string = var_364_int + var_365_string; // 0x22c Add2
	HasAnimation(var_350_bool, var_349_string); // 0x22d Func
	var_366_bool = var_350_bool == 0; // 0x22f Not
	if(var_366_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_563; // 0x231 Jump
	
Label_563:
	var_367_int = -1; // 0x233 PushI
	var_348_int = var_348_int + var_367_int; // 0x234 Add2
	var_368_bool = var_348_int == 0; // 0x235 Not
	if(var_368_bool == 0) goto Label_568; // 0x236 JumpB
	return 28; // 0x237 Return
	
Label_568:
	GetCurrentWeapon(var_351_string); // 0x238 Func
	irand(var_352_int, var_348_int); // 0x23a Func
	var_369_string = "attack"; // 0x23c PushS
	var_370_int = 1; // 0x23d PushI
	var_371_int = var_352_int + var_370_int; // 0x23e Add
	var_353_string = var_369_string + var_371_int; // 0x23f Add2
	var_372_string = ""; // 0x240 PushV
	func_509(var_372_string); // 0x241 Call
	var_373_int = 1; // 0x243 PushI
	var_374_int = var_352_int + var_373_int; // 0x244 Add
	var_375_int = var_372_string + var_374_int; // 0x245 Add
	PlaySound(var_375_int); // 0x246 Func
	var_376_bool = 1; // 0x248 PushB
	SetAttackState(var_376_bool); // 0x249 Func
	var_377_string = "_phase1"; // 0x24b PushS
	var_378_int = var_353_string + var_377_string; // 0x24c Add
	PlayAnimation(var_378_int); // 0x24d Func
	WaitForAnimEnd(); // 0x24f Func
	var_379_bool = var_0_bool; // 0x251 PushT
	if(var_379_bool == 0) goto Label_596; // 0x252 JumpB
	return 28; // 0x253 Return
	
Label_596:
	var_380_bool = 0; // 0x254 PushB
	SetAttackState(var_380_bool); // 0x255 Func
	GetAttackDistance(var_354_float); // 0x257 Func
	GetVictim(var_354_float, var_355_object); // 0x259 Func
	var_381_bool = var_355_object != 0; // 0x25b NullNeq
	if(var_381_bool == 0) goto Label_664; // 0x25c JumpB
	var_382_string = "GetDirection"; // 0x25d PushS
	var_383_int = 1; // 0x25e PushI
	var_384_bool = IsFuncExist(var_355_object, var_382_string, var_383_int); // 0x25f FuncExist
	if(var_384_bool == 0) goto Label_621; // 0x260 JumpB
	GetDirection(var_357_cvector); // 0x261 Func
	GetDirection(var_358_cvector); // 0x263 ObjFunc
	var_385_float = 0; var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0); // 0x265 PushV
	var_386_cvector = var_357_cvector; // 0x266 Mov
	var_387_cvector = var_358_cvector; // 0x267 Mov
	func_2831(var_385_float, var_386_cvector, var_387_cvector); // 0x268 Call
	var_388_float = 0.5; // 0x26a PushF
	var_356_bool = var_385_float >= var_388_float; // 0x26b GE2
	goto Label_622; // 0x26c Jump
	
Label_622:
	var_389_float = 0; var_390_bool = 0; // 0x26e PushV
	var_390_bool = var_356_bool; // 0x26f Mov
	func_526(var_389_float, var_390_bool); // 0x270 Call
	var_359_float = var_389_float; // 0x271 Mov
	var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_int = 0; // 0x273 PushV
	var_398_object = var_355_object; // 0x274 Mov
	var_399_float = var_359_float; // 0x275 Mov
	var_401_int = 0; // 0x276 PushV
	func_522(var_401_int); // 0x277 Call
	var_400_int = var_401_int; // 0x278 Mov
	func_2687(var_397_float, var_398_object, var_399_float, var_400_int); // 0x27a Call
	var_360_float = var_397_float; // 0x27b Mov
	var_402_float = var_360_float; // 0x27d Push
	if(var_402_float == 0) goto Label_661; // 0x27e JumpB
	var_403_int = 2; // 0x27f PushI
	irand(var_361_int, var_403_int); // 0x280 Func
	var_404_string = ""; // 0x282 PushV
	func_509(var_404_string); // 0x283 Call
	var_405_string = "_hit"; // 0x285 PushS
	var_406_int = var_404_string + var_405_string; // 0x286 Add
	var_407_int = 1; // 0x287 PushI
	var_408_int = var_361_int + var_407_int; // 0x288 Add
	var_409_int = var_406_int + var_408_int; // 0x289 Add
	PlaySound(var_409_int); // 0x28a Func
	ReportAttack(var_355_object); // 0x28c Func
	var_410_int = 0; // 0x28e PushV
	func_524(var_410_int); // 0x28f Call
	ReportHit(var_355_object, var_410_int, var_360_float, var_359_float); // 0x291 Func
	BroadcastPlayerDamage(var_355_object); // 0x293 Func
	
Label_661:
	func_540(); // 0x296 Call
	
Label_664:
	var_413_string = "_phase2"; // 0x298 PushS
	var_414_int = var_353_string + var_413_string; // 0x299 Add
	PlayAnimation(var_414_int); // 0x29a Func
	WaitForAnimEnd(); // 0x29c Func
	var_415_bool = var_0_bool; // 0x29e PushT
	if(var_415_bool == 0) goto Label_673; // 0x29f JumpB
	return 28; // 0x2a0 Return
	
Label_673:
	var_355_object = 0; // 0x2a1 SetNull
	var_416_bool = 0; // 0x2a2 PushV
	func_705(var_416_bool); // 0x2a3 Call
	if(var_416_bool == 0) goto Label_568; // 0x2a5 JumpB
	return 28; // 0x2a6 Return
	
Label_621:
	var_356_bool = 0; // 0x26d MovB
	
Label_562:
	goto Label_551; // 0x232 Jump
}


func_38(var_0_bool, var_1_bool, var_27_float)
{
	var_0_bool = 0; // 0x27 TMovB
	var_1_bool = 0; // 0x28 TMovB
	
Label_41:
	var_30_string = "block"; // 0x29 PushS
	PlayAnimation(var_30_string); // 0x2a Func
	WaitForAnimEnd(); // 0x2c Func
	var_31_bool = var_0_bool; // 0x2e PushT
	if(var_31_bool == 0) goto Label_49; // 0x2f JumpB
	return 0; // 0x30 Return
	
Label_49:
	var_32_string = ""; var_33_float = 0; // 0x31 PushV
	var_32_string = "armor_phys"; // 0x32 MovS
	var_33_float = var_27_float; // 0x33 Mov
	func_2661(var_32_string, var_33_float); // 0x34 Call
	var_1_bool = 1; // 0x36 TMovB
	
Label_55:
	var_37_bool = 0; // 0x37 PushV
	var_37_bool = 0; // 0x38 MovB
	var_38_bool = 0; // 0x39 PushV
	func_93(var_38_bool); // 0x3a Call
	if(var_38_bool == 0) goto Label_64; // 0x3c JumpB
	var_41_bool = var_0_bool == 0; // 0x3d Not
	if(var_41_bool == 0) goto Label_64; // 0x3e JumpB
	var_37_bool = 1; // 0x3f MovB
	
Label_64:
	if(var_37_bool == 0) goto Label_71; // 0x40 JumpB
	var_42_string = "walkblock"; // 0x41 PushS
	PlayAnimation(var_42_string); // 0x42 Func
	WaitForAnimEnd(); // 0x44 Func
	goto Label_55; // 0x46 Jump
	
Label_71:
	var_1_bool = 0; // 0x47 TMovB
	var_43_string = ""; var_44_float = 0; // 0x48 PushV
	var_43_string = "armor_phys"; // 0x49 MovS
	var_44_float = -var_27_float; // 0x4a Neg2
	func_2661(var_43_string, var_44_float); // 0x4b Call
	var_45_bool = var_0_bool; // 0x4d PushT
	if(var_45_bool == 0) goto Label_80; // 0x4e JumpB
	return 0; // 0x4f Return
	
Label_80:
	var_46_string = "unblock"; // 0x50 PushS
	PlayAnimation(var_46_string); // 0x51 Func
	WaitForAnimEnd(); // 0x53 Func
	var_47_bool = var_0_bool; // 0x55 PushT
	if(var_47_bool == 0) goto Label_88; // 0x56 JumpB
	return 0; // 0x57 Return
	
Label_88:
	var_48_bool = 0; // 0x58 PushV
	func_93(var_48_bool); // 0x59 Call
	if(var_48_bool == 0) goto Label_41; // 0x5b JumpB
	return 0; // 0x5c Return
}


func_1602()
{
	return 0; // 0x642 Return
}


func_1603(var_832_bool)
{
	var_833_bool = 0; var_834_bool = 0; // 0x643 PushV
	IsShooting(var_834_bool); // 0x644 Func
	var_832_bool = var_834_bool; // 0x646 Mov
	return 2; // 0x647 Return
}


func_1608(var_878_bool)
{
	var_879_bool = 0; var_880_bool = 0; var_881_bool = 0; var_882_bool = 0; // 0x648 PushV
	var_883_string = "ammo"; // 0x649 PushS
	GetWeaponProperty(var_881_bool, var_883_string, var_882_bool); // 0x64a Func
	var_884_bool = 0; // 0x64c PushV
	var_884_bool = 1; // 0x64d MovB
	var_885_bool = var_881_bool == 0; // 0x64e Not
	if(var_885_bool == 0) goto Label_1619; // 0x64f JumpB
	var_886_bool = var_882_bool == 0; // 0x650 Not
	if(var_886_bool == 0) goto Label_1619; // 0x651 JumpB
	var_884_bool = 0; // 0x652 MovB
	
Label_1619:
	if(var_884_bool == 0) goto Label_1634; // 0x653 JumpB
	var_887_bool = 0; var_888_string = ""; var_889_int = 0; // 0x654 PushV
	var_888_string = "samopal_ammo"; // 0x655 MovS
	var_889_int = 2; // 0x656 MovI
	func_2854(var_887_bool, var_888_string, var_889_int); // 0x657 Call
	var_890_bool = var_887_bool == 0; // 0x659 Not
	if(var_890_bool == 0) goto Label_1634; // 0x65a JumpB
	var_891_string = "noammo"; // 0x65b PushS
	PlayAnimation(var_891_string); // 0x65c Func
	WaitForAnimEnd(); // 0x65e Func
	var_878_bool = 0; // 0x660 MovB
	return 4; // 0x661 Return
	
Label_1634:
	var_878_bool = 1; // 0x662 MovB
	return 4; // 0x663 Return
}


func_2633()
{
	func_3281(); // 0xa4a Call
	return 0; // 0xa4c Return
}


func_2637()
{
	var_77_int = 0; // 0xa4d PushI
	KillTimer(var_77_int); // 0xa4e Func
	return 0; // 0xa50 Return
}


func_2127(var_962_bool)
{
	var_963_int = 0; var_964_bool = 0; var_965_int = 0; var_966_bool = 0; // 0x84f PushV
	var_967_string = "ognemet_ammo"; // 0x850 PushS
	GetInvItemByName(var_965_int, var_967_string); // 0x851 Func
	var_968_int = 1; // 0x853 PushI
	RemoveItemByType(var_966_bool, var_965_int, var_968_int); // 0x854 Func
	var_962_bool = var_966_bool; // 0x856 Mov
	return 4; // 0x857 Return
}


func_2641(var_60_string, var_61_int)
{
	var_62_int = 1; // 0xa52 PushI
	var_63_bool = var_61_int == var_62_int; // 0xa53 Eq
	if(var_63_bool == 0) goto Label_2647; // 0xa54 JumpB
	var_60_string = "fire"; // 0xa55 MovS
	return 0; // 0xa56 Return
	
Label_2647:
	var_60_string = "phys"; // 0xa57 MovS
	return 0; // 0xa58 Return
}


func_1107(var_592_bool)
{
	var_593_bool = 0; var_594_bool = 0; // 0x453 PushV
	IsShooting(var_594_bool); // 0x454 Func
	var_592_bool = var_594_bool; // 0x456 Mov
	return 2; // 0x457 Return
}


func_1112(var_638_bool)
{
	var_639_bool = 0; var_640_bool = 0; var_641_bool = 0; var_642_bool = 0; // 0x458 PushV
	var_643_string = "ammo"; // 0x459 PushS
	GetWeaponProperty(var_641_bool, var_643_string, var_642_bool); // 0x45a Func
	var_644_bool = 0; // 0x45c PushV
	var_644_bool = 1; // 0x45d MovB
	var_645_bool = var_641_bool == 0; // 0x45e Not
	if(var_645_bool == 0) goto Label_1123; // 0x45f JumpB
	var_646_bool = var_642_bool == 0; // 0x460 Not
	if(var_646_bool == 0) goto Label_1123; // 0x461 JumpB
	var_644_bool = 0; // 0x462 MovB
	
Label_1123:
	if(var_644_bool == 0) goto Label_1138; // 0x463 JumpB
	var_647_bool = 0; var_648_string = ""; var_649_int = 0; // 0x464 PushV
	var_648_string = "rifle_ammo"; // 0x465 MovS
	var_649_int = 1; // 0x466 MovI
	func_2854(var_647_bool, var_648_string, var_649_int); // 0x467 Call
	var_664_bool = var_647_bool == 0; // 0x469 Not
	if(var_664_bool == 0) goto Label_1138; // 0x46a JumpB
	var_665_string = "noammo"; // 0x46b PushS
	PlayAnimation(var_665_string); // 0x46c Func
	WaitForAnimEnd(); // 0x46e Func
	var_638_bool = 0; // 0x470 MovB
	return 4; // 0x471 Return
	
Label_1138:
	var_638_bool = 1; // 0x472 MovB
	return 4; // 0x473 Return
}


func_2136(var_98_float)
{
	var_98_float = 0.065; // 0x858 MovF
	return 0; // 0x859 Return
}


func_2138(var_110_int)
{
	var_110_int = 1; // 0x85a MovI
	return 0; // 0x85b Return
}


func_2649(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0; // 0xa59 PushV
	var_50_string = "HasProperty"; // 0xa5a PushS
	var_51_int = 2; // 0xa5b PushI
	var_52_bool = IsFuncExist(var_46_object, var_50_string, var_51_int); // 0xa5c FuncExist
	var_53_bool = var_52_bool == 0; // 0xa5d Not
	if(var_53_bool == 0) goto Label_2657; // 0xa5e JumpB
	var_45_bool = 0; // 0xa5f MovB
	return 2; // 0xa60 Return
	
Label_2657:
	HasProperty(var_47_string, var_49_bool); // 0xa61 ObjFunc
	var_45_bool = var_49_bool; // 0xa63 Mov
	return 2; // 0xa64 Return
}


func_2140(var_176_int)
{
	var_176_int = 4; // 0x85c MovI
	return 0; // 0x85d Return
}


func_93(var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x5d PushV
	IsAltShooting(var_40_bool); // 0x5e Func
	var_38_bool = var_40_bool; // 0x60 Mov
	return 2; // 0x61 Return
}


func_2142(var_992_bool)
{
	var_993_bool = 0; var_994_bool = 0; // 0x85e PushV
	IsShooting(var_994_bool); // 0x85f Func
	var_992_bool = var_994_bool; // 0x861 Mov
	return 2; // 0x862 Return
}


func_2147(var_0_bool)
{
	var_1001_cvector = CVector(0,0,0); var_1002_cvector = CVector(0,0,0); var_1003_float = 0; var_1004_object = Obj(); var_1005_object = Obj(); var_1006_int = 0; var_1007_bool = 0; var_1008_cvector = CVector(0,0,0); var_1009_cvector = CVector(0,0,0); var_1010_float = 0; var_1011_object = Obj(); var_1012_object = Obj(); var_1013_int = 0; var_1014_bool = 0; // 0x863 PushV
	var_0_bool = 0; // 0x864 TMovB
	var_1015_string = "attack1"; // 0x865 PushS
	PlayAnimation(var_1015_string); // 0x866 Func
	WaitForAnimEnd(); // 0x868 Func
	var_1016_bool = var_0_bool; // 0x86a PushT
	if(var_1016_bool == 0) goto Label_2157; // 0x86b JumpB
	return 14; // 0x86c Return
	
Label_2157:
	GetDirection(var_1008_cvector); // 0x86d Func
	GetPosition(var_1009_cvector); // 0x86f Func
	GetEyesHeight(var_1010_float); // 0x871 Func
	var_1017_float = GetByIndex(var_1009_cvector, 1); // 0x873 PushE
	var_1017_float = var_1017_float + var_1010_float; // 0x874 Add2
	SetByIndex(var_1009_cvector, 1) = var_1017_float; // 0x875 PopE
	var_1018_int = 10; // 0x876 PushI
	var_1019_float = var_1008_cvector * var_1018_int; // 0x877 Mult
	var_1009_cvector = var_1009_cvector + var_1019_float; // 0x878 Add2
	GetScene(var_1011_object); // 0x879 Func
	var_1020_string = "scripted"; // 0x87b PushS
	var_1021_cvector = CVector(0.0, 0.0, 1.0); // 0x87c PushVec
	var_1022_string = "player_grenade.xml"; // 0x87d PushS
	AddActorByType(var_1012_object, var_1020_string, var_1011_object, var_1009_cvector, var_1021_cvector, var_1022_string); // 0x87e Func
	var_1023_string = "Owner"; // 0x880 PushS
	var_1024_object = Obj(); // 0x881 PushV
	func_2771(var_1024_object); // 0x882 Call
	SetScriptProperty(var_1023_string, var_1024_object); // 0x884 ObjFunc
	var_1025_string = "StartVelocity"; // 0x886 PushS
	var_1026_int = 1000; // 0x887 PushI
	var_1027_float = var_1008_cvector * var_1026_int; // 0x888 Mult
	SetScriptProperty(var_1025_string, var_1027_float); // 0x889 ObjFunc
	var_1028_string = "DamageAmount"; // 0x88b PushS
	var_1029_float = 0; // 0x88c PushV
	func_2246(var_1029_float); // 0x88d Call
	SetScriptProperty(var_1028_string, var_1029_float); // 0x88f ObjFunc
	var_1030_string = "DamageType"; // 0x891 PushS
	var_1031_int = 0; // 0x892 PushV
	func_2248(var_1031_int); // 0x893 Call
	SetScriptProperty(var_1030_string, var_1031_int); // 0x895 ObjFunc
	var_1032_string = "bottle_weapon"; // 0x897 PushS
	GetInvItemByName(var_1013_int, var_1032_string); // 0x898 Func
	var_1033_int = 1; // 0x89a PushI
	RemoveItemByType(var_1014_bool, var_1013_int, var_1033_int); // 0x89b Func
	var_1034_int = 0; // 0x89d PushI
	SelectAnyItemByID(var_1014_bool, var_1013_int, var_1034_int); // 0x89e Func
	var_1035_string = "attack2"; // 0x8a0 PushS
	PlayAnimation(var_1035_string); // 0x8a1 Func
	WaitForAnimEnd(); // 0x8a3 Func
	var_1036_bool = var_0_bool; // 0x8a5 PushT
	if(var_1036_bool == 0) goto Label_2216; // 0x8a6 JumpB
	return 14; // 0x8a7 Return
	
Label_2216:
	var_1037_bool = var_1014_bool; // 0x8a8 Push
	if(var_1037_bool == 0) goto Label_2224; // 0x8a9 JumpB
	var_1038_string = "aunholster"; // 0x8aa PushS
	PlayAnimation(var_1038_string); // 0x8ab Func
	WaitForAnimEnd(); // 0x8ad Func
	goto Label_2232; // 0x8af Jump
	
Label_2232:
	return 14; // 0x8b8 Return
	
Label_2224:
	var_1039_int = -1; // 0x8b0 PushI
	SetHandsItem(var_1039_int); // 0x8b1 Func
	var_1040_string = "unholster"; // 0x8b3 PushS
	PlayAnimation(var_1040_string); // 0x8b4 Func
	WaitForAnimEnd(); // 0x8b6 Func
}


func_1636(var_910_int)
{
	var_910_int = 5; // 0x664 MovI
	return 0; // 0x665 Return
}


func_2661(var_32_string, var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0xa65 PushV
	GetProperty(var_32_string, var_35_float); // 0xa66 Func
	var_36_int = var_35_float + var_33_float; // 0xa68 Add
	SetProperty(var_32_string, var_36_int); // 0xa69 Func
	return 2; // 0xa6b Return
}


func_1638(var_912_float)
{
	var_912_float = 0.17453; // 0x666 MovF
	return 0; // 0x667 Return
}


func_1640()
{
	var_895_bool = 0; var_896_int = 0; var_897_bool = 0; var_898_int = 0; // 0x668 PushV
	var_899_string = "ammo"; // 0x669 PushS
	GetWeaponProperty(var_897_bool, var_899_string, var_898_int); // 0x66a Func
	var_900_string = "ammo"; // 0x66c PushS
	var_901_int = 1; // 0x66d PushI
	var_902_int = var_898_int - var_901_int; // 0x66e Sub
	SetWeaponProperty(var_897_bool, var_900_string, var_902_int); // 0x66f Func
	return 4; // 0x671 Return
}


func_2668(var_23_bool, var_24_string, var_25_float, var_26_float, var_27_float)
{
	var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_float = 0; // 0xa6c PushV
	HasProperty(var_24_string, var_30_bool); // 0xa6d Func
	var_32_bool = var_30_bool == 0; // 0xa6f Not
	if(var_32_bool == 0) goto Label_2675; // 0xa70 JumpB
	var_23_bool = 0; // 0xa71 MovB
	return 4; // 0xa72 Return
	
Label_2675:
	GetProperty(var_24_string, var_31_float); // 0xa73 Func
	var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0xa75 PushV
	var_34_float = var_31_float + var_25_float; // 0xa76 Add2
	var_35_float = var_26_float; // 0xa77 Mov
	var_36_float = var_27_float; // 0xa78 Mov
	func_2784(var_33_float, var_34_float, var_35_float, var_36_float); // 0xa79 Call
	SetProperty(var_24_string, var_33_float); // 0xa7b Func
	var_23_bool = 1; // 0xa7d MovB
	return 4; // 0xa7e Return
}


func_1650()
{
	var_935_bool = 0; var_936_bool = 0; var_937_bool = 0; var_938_bool = 0; // 0x672 PushV
	var_939_string = "ammo"; // 0x673 PushS
	GetWeaponProperty(var_937_bool, var_939_string, var_938_bool); // 0x674 Func
	var_940_bool = 0; // 0x676 PushV
	var_940_bool = 1; // 0x677 MovB
	var_941_bool = var_937_bool == 0; // 0x678 Not
	if(var_941_bool == 0) goto Label_1661; // 0x679 JumpB
	var_942_bool = var_938_bool == 0; // 0x67a Not
	if(var_942_bool == 0) goto Label_1661; // 0x67b JumpB
	var_940_bool = 0; // 0x67c MovB
	
Label_1661:
	if(var_940_bool == 0) goto Label_1680; // 0x67d JumpB
	var_943_bool = 0; var_944_string = ""; var_945_int = 0; // 0x67e PushV
	var_944_string = "samopal_ammo"; // 0x67f MovS
	var_945_int = 2; // 0x680 MovI
	func_2854(var_943_bool, var_944_string, var_945_int); // 0x681 Call
	if(var_943_bool == 0) goto Label_1680; // 0x683 JumpB
	var_946_string = ""; // 0x684 PushV
	func_1681(var_946_string); // 0x685 Call
	var_947_string = "_reload"; // 0x687 PushS
	var_948_int = var_946_string + var_947_string; // 0x688 Add
	PlaySound(var_948_int); // 0x689 Func
	var_949_string = "reload"; // 0x68b PushS
	PlayAnimation(var_949_string); // 0x68c Func
	WaitForAnimEnd(); // 0x68e Func
	
Label_1680:
	return 4; // 0x690 Return
}


func_1140(var_680_int)
{
	var_680_int = 1; // 0x474 MovI
	return 0; // 0x475 Return
}


func_1142(var_682_float)
{
	var_682_float = 0.01745; // 0x476 MovF
	return 0; // 0x477 Return
}


func_1144()
{
	var_669_bool = 0; var_670_bool = 0; // 0x478 PushV
	var_671_string = "ammo"; // 0x479 PushS
	var_672_bool = 0; // 0x47a PushB
	SetWeaponProperty(var_670_bool, var_671_string, var_672_bool); // 0x47b Func
	return 2; // 0x47d Return
}


func_125(var_104_string)
{
	var_104_string = "punch"; // 0x7d MovS
	return 0; // 0x7e Return
}


func_1150()
{
	var_707_bool = 0; var_708_string = ""; var_709_int = 0; // 0x47e PushV
	var_708_string = "rifle_ammo"; // 0x47f MovS
	var_709_int = 1; // 0x480 MovI
	func_2854(var_707_bool, var_708_string, var_709_int); // 0x481 Call
	if(var_707_bool == 0) goto Label_1168; // 0x483 JumpB
	var_710_string = ""; // 0x484 PushV
	func_1169(var_710_string); // 0x485 Call
	var_711_string = "_reload"; // 0x487 PushS
	var_712_int = var_710_string + var_711_string; // 0x488 Add
	PlaySound(var_712_int); // 0x489 Func
	var_713_string = "reload"; // 0x48b PushS
	PlayAnimation(var_713_string); // 0x48c Func
	WaitForAnimEnd(); // 0x48e Func
	
Label_1168:
	return 0; // 0x490 Return
}


func_2687(var_26_float, var_27_object, var_28_float, var_29_int)
{
	var_33_int = 0; var_34_string = ""; var_35_int = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_int = 0; var_40_string = ""; var_41_int = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0xa7f PushV
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0xa80 PushV
	var_46_object = var_27_object; // 0xa81 Mov
	var_47_string = "health"; // 0xa82 MovS
	func_2649(var_45_bool, var_46_object, var_47_string); // 0xa83 Call
	var_54_bool = var_45_bool == 0; // 0xa85 Not
	if(var_54_bool == 0) goto Label_2697; // 0xa86 JumpB
	var_26_float = 0.0; // 0xa87 MovF
	return 12; // 0xa88 Return
	
Label_2697:
	var_55_bool = 0; var_56_object = Obj(); var_57_string = ""; // 0xa89 PushV
	var_56_object = var_27_object; // 0xa8a Mov
	var_57_string = "armor"; // 0xa8b MovS
	func_2649(var_55_bool, var_56_object, var_57_string); // 0xa8c Call
	var_58_bool = var_55_bool == 0; // 0xa8e Not
	if(var_58_bool == 0) goto Label_2706; // 0xa8f JumpB
	var_39_int = 0; // 0xa90 MovI
	goto Label_2709; // 0xa91 Jump
	
Label_2709:
	var_59_string = "armor_"; // 0xa95 PushS
	var_60_string = ""; var_61_int = 0; // 0xa96 PushV
	var_61_int = var_29_int; // 0xa97 Mov
	func_2641(var_60_string, var_61_int); // 0xa98 Call
	var_40_string = var_59_string + var_60_string; // 0xa9a Add2
	var_64_bool = 0; var_65_object = Obj(); var_66_string = ""; // 0xa9b PushV
	var_65_object = var_27_object; // 0xa9c Mov
	var_66_string = var_40_string; // 0xa9d Mov
	func_2649(var_64_bool, var_65_object, var_66_string); // 0xa9e Call
	var_67_bool = var_64_bool == 0; // 0xaa0 Not
	if(var_67_bool == 0) goto Label_2724; // 0xaa1 JumpB
	var_41_int = 0; // 0xaa2 MovI
	goto Label_2726; // 0xaa3 Jump
	
Label_2726:
	var_68_float = 0; var_69_float = 0; var_70_float = 0; // 0xaa6 PushV
	var_71_int = var_39_int + var_41_int; // 0xaa7 Add
	var_72_float = 100.0; // 0xaa8 PushF
	var_69_float = var_71_int / var_71_int; // 0xaa9 Div2
	var_70_float = 1; // 0xaaa MovI
	func_2777(var_68_float, var_69_float, var_70_float); // 0xaab Call
	var_42_float = var_68_float; // 0xaac Mov
	var_74_string = "health"; // 0xaae PushS
	GetProperty(var_74_string, var_43_float); // 0xaaf ObjFunc
	var_75_int = 1; // 0xab1 PushI
	var_76_int = var_75_int - var_42_float; // 0xab2 Sub
	var_44_float = var_28_float * var_76_int; // 0xab3 Mult2
	var_77_string = "health"; // 0xab4 PushS
	var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0; // 0xab5 PushV
	var_79_float = var_43_float - var_44_float; // 0xab6 Sub2
	var_80_float = 0; // 0xab7 MovI
	var_81_float = 1; // 0xab8 MovI
	func_2784(var_78_float, var_79_float, var_80_float, var_81_float); // 0xab9 Call
	SetProperty(var_77_string, var_78_float); // 0xabb ObjFunc
	var_26_float = var_44_float; // 0xabd Mov
	return 12; // 0xabe Return
	
Label_2724:
	GetProperty(var_40_string, var_41_int); // 0xaa4 ObjFunc
	
Label_2706:
	var_84_string = "armor"; // 0xa92 PushS
	GetProperty(var_84_string, var_39_int); // 0xa93 ObjFunc
}


func_127(var_144_float, var_145_bool)
{
	var_146_bool = var_145_bool; // 0x80 Push
	if(var_146_bool == 0) goto Label_132; // 0x81 JumpB
	var_144_float = 0.4; // 0x82 MovF
	goto Label_133; // 0x83 Jump
	
Label_133:
	return 0; // 0x85 Return
	
Label_132:
	var_144_float = 0.2; // 0x84 MovF
}


func_134(var_151_int)
{
	var_151_int = 0; // 0x86 MovI
	return 0; // 0x87 Return
}


func_136(var_212_int)
{
	var_212_int = 0; // 0x88 MovI
	return 0; // 0x89 Return
}


func_138(var_0_bool)
{
	var_66_int = 0; var_67_string = ""; var_68_bool = 0; var_69_string = ""; var_70_int = 0; var_71_string = ""; var_72_float = 0; var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_string = ""; var_82_bool = 0; var_83_string = ""; var_84_int = 0; var_85_string = ""; var_86_float = 0; var_87_object = Obj(); var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_float = 0; var_93_int = 0; // 0x8a PushV
	var_0_bool = 0; // 0x8b TMovB
	var_80_int = 0; // 0x8c MovI
	
Label_141:
	var_94_int = 1; // 0x8d PushI
	var_80_int = var_80_int + var_94_int; // 0x8e Add2
	var_95_string = "attack"; // 0x8f PushS
	var_96_int = var_95_string + var_80_int; // 0x90 Add
	var_97_string = "_phase1"; // 0x91 PushS
	var_81_string = var_96_int + var_97_string; // 0x92 Add2
	HasAnimation(var_82_bool, var_81_string); // 0x93 Func
	var_98_bool = var_82_bool == 0; // 0x95 Not
	if(var_98_bool == 0) goto Label_152; // 0x96 JumpB
	goto Label_153; // 0x97 Jump
	
Label_153:
	var_99_int = -1; // 0x99 PushI
	var_80_int = var_80_int + var_99_int; // 0x9a Add2
	var_100_bool = var_80_int == 0; // 0x9b Not
	if(var_100_bool == 0) goto Label_158; // 0x9c JumpB
	return 28; // 0x9d Return
	
Label_158:
	GetCurrentWeapon(var_83_string); // 0x9e Func
	irand(var_84_int, var_80_int); // 0xa0 Func
	var_101_string = "attack"; // 0xa2 PushS
	var_102_int = 1; // 0xa3 PushI
	var_103_int = var_84_int + var_102_int; // 0xa4 Add
	var_85_string = var_101_string + var_103_int; // 0xa5 Add2
	var_104_string = ""; // 0xa6 PushV
	func_125(var_104_string); // 0xa7 Call
	var_105_int = 1; // 0xa9 PushI
	var_106_int = var_84_int + var_105_int; // 0xaa Add
	var_107_int = var_104_string + var_106_int; // 0xab Add
	PlaySound(var_107_int); // 0xac Func
	var_108_bool = 1; // 0xae PushB
	SetAttackState(var_108_bool); // 0xaf Func
	var_109_string = "_phase1"; // 0xb1 PushS
	var_110_int = var_85_string + var_109_string; // 0xb2 Add
	PlayAnimation(var_110_int); // 0xb3 Func
	WaitForAnimEnd(); // 0xb5 Func
	var_111_bool = var_0_bool; // 0xb7 PushT
	if(var_111_bool == 0) goto Label_186; // 0xb8 JumpB
	return 28; // 0xb9 Return
	
Label_186:
	var_112_bool = 0; // 0xba PushB
	SetAttackState(var_112_bool); // 0xbb Func
	GetAttackDistance(var_86_float); // 0xbd Func
	GetVictim(var_86_float, var_87_object); // 0xbf Func
	var_113_bool = var_87_object != 0; // 0xc1 NullNeq
	if(var_113_bool == 0) goto Label_254; // 0xc2 JumpB
	var_114_string = "GetDirection"; // 0xc3 PushS
	var_115_int = 1; // 0xc4 PushI
	var_116_bool = IsFuncExist(var_87_object, var_114_string, var_115_int); // 0xc5 FuncExist
	if(var_116_bool == 0) goto Label_211; // 0xc6 JumpB
	GetDirection(var_89_cvector); // 0xc7 Func
	GetDirection(var_90_cvector); // 0xc9 ObjFunc
	var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); // 0xcb PushV
	var_118_cvector = var_89_cvector; // 0xcc Mov
	var_119_cvector = var_90_cvector; // 0xcd Mov
	func_2831(var_117_float, var_118_cvector, var_119_cvector); // 0xce Call
	var_141_float = 0.5; // 0xd0 PushF
	var_88_bool = var_117_float >= var_141_float; // 0xd1 GE2
	goto Label_212; // 0xd2 Jump
	
Label_212:
	var_142_float = 0; var_143_bool = 0; // 0xd4 PushV
	var_143_bool = var_88_bool; // 0xd5 Mov
	func_269(var_142_float, var_143_bool); // 0xd6 Call
	var_91_float = var_142_float; // 0xd7 Mov
	var_147_float = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0; // 0xd9 PushV
	var_148_object = var_87_object; // 0xda Mov
	var_149_float = var_91_float; // 0xdb Mov
	var_151_int = 0; // 0xdc PushV
	func_134(var_151_int); // 0xdd Call
	var_150_int = var_151_int; // 0xde Mov
	func_2687(var_147_float, var_148_object, var_149_float, var_150_int); // 0xe0 Call
	var_92_float = var_147_float; // 0xe1 Mov
	var_204_float = var_92_float; // 0xe3 Push
	if(var_204_float == 0) goto Label_251; // 0xe4 JumpB
	var_205_int = 2; // 0xe5 PushI
	irand(var_93_int, var_205_int); // 0xe6 Func
	var_206_string = ""; // 0xe8 PushV
	func_125(var_206_string); // 0xe9 Call
	var_207_string = "_hit"; // 0xeb PushS
	var_208_int = var_206_string + var_207_string; // 0xec Add
	var_209_int = 1; // 0xed PushI
	var_210_int = var_93_int + var_209_int; // 0xee Add
	var_211_int = var_208_int + var_210_int; // 0xef Add
	PlaySound(var_211_int); // 0xf0 Func
	ReportAttack(var_87_object); // 0xf2 Func
	var_212_int = 0; // 0xf4 PushV
	func_136(var_212_int); // 0xf5 Call
	ReportHit(var_87_object, var_212_int, var_92_float, var_91_float); // 0xf7 Func
	BroadcastPlayerDamage(var_87_object); // 0xf9 Func
	
Label_251:
	func_302(); // 0xfc Call
	
Label_254:
	var_213_string = "_phase2"; // 0xfe PushS
	var_214_int = var_85_string + var_213_string; // 0xff Add
	PlayAnimation(var_214_int); // 0x100 Func
	WaitForAnimEnd(); // 0x102 Func
	var_215_bool = var_0_bool; // 0x104 PushT
	if(var_215_bool == 0) goto Label_263; // 0x105 JumpB
	return 28; // 0x106 Return
	
Label_263:
	var_87_object = 0; // 0x107 SetNull
	var_216_bool = 0; // 0x108 PushV
	func_303(var_216_bool); // 0x109 Call
	if(var_216_bool == 0) goto Label_158; // 0x10b JumpB
	return 28; // 0x10c Return
	
Label_211:
	var_88_bool = 0; // 0xd3 MovB
	
Label_152:
	goto Label_141; // 0x98 Jump
}


func_1169(var_676_string)
{
	var_676_string = "rifle"; // 0x491 MovS
	return 0; // 0x492 Return
}


func_1681(var_906_string)
{
	var_906_string = "samopal"; // 0x691 MovS
	return 0; // 0x692 Return
}


func_1171(var_681_float)
{
	var_681_float = 1.5; // 0x493 MovF
	return 0; // 0x494 Return
}


func_1683(var_911_float)
{
	var_911_float = 0.8; // 0x693 MovF
	return 0; // 0x694 Return
}


func_1173(var_692_int)
{
	var_692_int = 0; // 0x495 MovI
	return 0; // 0x496 Return
}


func_1685(var_920_int)
{
	var_920_int = 0; // 0x695 MovI
	return 0; // 0x696 Return
}


func_1175(var_694_int)
{
	var_694_int = 2; // 0x497 MovI
	return 0; // 0x498 Return
}


func_1687(var_922_int)
{
	var_922_int = 2; // 0x697 MovI
	return 0; // 0x698 Return
}


func_1177(var_0_bool)
{
	var_598_string = ""; var_599_int = 0; var_600_string = ""; var_601_int = 0; var_602_bool = 0; var_603_float = 0; var_604_float = 0; var_605_cvector = CVector(0,0,0); var_606_object = Obj(); var_607_int = 0; var_608_cvector = CVector(0,0,0); var_609_object = Obj(); var_610_int = 0; var_611_cvector = CVector(0,0,0); var_612_float = 0; var_613_object = Obj(); var_614_object = Obj(); var_615_object = Obj(); var_616_object = Obj(); var_617_bool = 0; var_618_string = ""; var_619_int = 0; var_620_string = ""; var_621_int = 0; var_622_bool = 0; var_623_float = 0; var_624_float = 0; var_625_cvector = CVector(0,0,0); var_626_object = Obj(); var_627_int = 0; var_628_cvector = CVector(0,0,0); var_629_object = Obj(); var_630_int = 0; var_631_cvector = CVector(0,0,0); var_632_float = 0; var_633_object = Obj(); var_634_object = Obj(); var_635_object = Obj(); var_636_object = Obj(); var_637_bool = 0; // 0x499 PushV
	var_0_bool = 0; // 0x49a TMovB
	
Label_1179:
	var_638_bool = 0; // 0x49b PushV
	func_1112(var_638_bool); // 0x49c Call
	var_666_bool = var_638_bool == 0; // 0x49e Not
	if(var_666_bool == 0) goto Label_1185; // 0x49f JumpB
	goto Label_1319; // 0x4a0 Jump
	
Label_1319:
	return 40; // 0x527 Return
	
Label_1185:
	GetCurrentWeapon(var_618_string); // 0x4a1 Func
	var_667_int = 2; // 0x4a3 PushI
	irand(var_619_int, var_667_int); // 0x4a4 Func
	var_620_string = "attack1"; // 0x4a6 MovS
	var_668_bool = 1; // 0x4a7 PushB
	SetAttackState(var_668_bool); // 0x4a8 Func
	func_1144(); // 0x4ab Call
	var_673_string = "_phase1"; // 0x4ad PushS
	var_674_int = var_620_string + var_673_string; // 0x4ae Add
	PlayAnimation(var_674_int); // 0x4af Func
	WaitForAnimEnd(); // 0x4b1 Func
	var_675_bool = var_0_bool; // 0x4b3 PushT
	if(var_675_bool == 0) goto Label_1206; // 0x4b4 JumpB
	return 40; // 0x4b5 Return
	
Label_1206:
	var_676_string = ""; // 0x4b6 PushV
	func_1169(var_676_string); // 0x4b7 Call
	var_677_string = "_shot"; // 0x4b9 PushS
	var_678_int = var_676_string + var_677_string; // 0x4ba Add
	PlaySound(var_678_int); // 0x4bb Func
	func_1346(); // 0x4be Call
	var_679_bool = 0; // 0x4c0 PushB
	SetAttackState(var_679_bool); // 0x4c1 Func
	var_680_int = 0; // 0x4c3 PushV
	func_1140(var_680_int); // 0x4c4 Call
	var_621_int = var_680_int; // 0x4c5 Mov
	var_622_bool = 0; // 0x4c7 MovB
	var_681_float = 0; // 0x4c8 PushV
	func_1171(var_681_float); // 0x4c9 Call
	var_623_float = var_681_float / var_681_float; // 0x4cb Div2
	var_682_float = 0; // 0x4cc PushV
	func_1142(var_682_float); // 0x4cd Call
	var_624_float = var_682_float; // 0x4ce Mov
	GetDirection(var_625_cvector); // 0x4d0 Func
	var_683_object = Obj(); // 0x4d2 PushV
	func_2806(var_683_object); // 0x4d3 Call
	var_626_object = var_683_object; // 0x4d4 Mov
	var_627_int = 0; // 0x4d6 MovI
	
Label_1239:
	var_686_bool = var_627_int < var_621_int; // 0x4d7 LT
	if(var_686_bool == 0) goto Label_1289; // 0x4d8 JumpB
	RandVecCone3D(var_628_cvector, var_625_cvector, var_624_float); // 0x4d9 Func
	GetVictimMaterial(var_629_object, var_630_int, var_631_cvector, var_628_cvector); // 0x4db Func
	var_687_bool = var_629_object != 0; // 0x4dd NullNeq
	if(var_687_bool == 0) goto Label_1285; // 0x4de JumpB
	var_688_float = 0; var_689_object = Obj(); var_690_float = 0; var_691_int = 0; // 0x4df PushV
	var_689_object = var_629_object; // 0x4e0 Mov
	var_690_float = var_623_float; // 0x4e1 Mov
	var_692_int = 0; // 0x4e2 PushV
	func_1173(var_692_int); // 0x4e3 Call
	var_691_int = var_692_int; // 0x4e4 Mov
	func_2687(var_688_float, var_689_object, var_690_float, var_691_int); // 0x4e6 Call
	var_632_float = var_688_float; // 0x4e7 Mov
	var_693_float = var_632_float; // 0x4e9 Push
	if(var_693_float == 0) goto Label_1267; // 0x4ea JumpB
	add(var_629_object); // 0x4eb ObjFunc
	var_694_int = 0; // 0x4ed PushV
	func_1175(var_694_int); // 0x4ee Call
	ReportHit(var_629_object, var_694_int, var_632_float, var_623_float); // 0x4f0 Func
	goto Label_1285; // 0x4f2 Jump
	
Label_1285:
	var_629_object = 0; // 0x505 SetNull
	var_695_int = 1; // 0x506 PushI
	var_627_int = var_627_int + var_695_int; // 0x507 Add2
	goto Label_1239; // 0x508 Jump
	
Label_1267:
	var_696_int = -1; // 0x4f3 PushI
	var_697_bool = var_630_int != var_696_int; // 0x4f4 Neq
	if(var_697_bool == 0) goto Label_1285; // 0x4f5 JumpB
	var_698_bool = var_622_bool == 0; // 0x4f6 Not
	if(var_698_bool == 0) goto Label_1285; // 0x4f7 JumpB
	GetScene(var_633_object); // 0x4f8 Func
	var_699_string = "scripted"; // 0x4fa PushS
	var_700_cvector = CVector(0.0, 0.0, 1.0); // 0x4fb PushVec
	var_701_string = "richochet.xml"; // 0x4fc PushS
	AddActorByType(var_634_object, var_699_string, var_633_object, var_631_cvector, var_700_cvector, var_701_string); // 0x4fd Func
	var_702_string = "Material"; // 0x4ff PushS
	SetScriptProperty(var_702_string, var_630_int); // 0x500 ObjFunc
	var_622_bool = 1; // 0x502 MovB
	var_634_object = 0; // 0x503 SetNull
	var_633_object = 0; // 0x504 SetNull
	
Label_1289:
	iterator(var_635_object); // 0x509 ObjFunc
	
Label_1291:
	Next(var_637_bool, var_636_object); // 0x50b ObjFunc
	var_703_bool = var_637_bool; // 0x50d Push
	if(var_703_bool == 0) goto Label_1300; // 0x50e JumpB
	ReportAttack(var_636_object); // 0x50f Func
	BroadcastPlayerDamage(var_636_object); // 0x511 Func
	goto Label_1291; // 0x513 Jump
	
Label_1300:
	var_704_string = "_phase2"; // 0x514 PushS
	var_705_int = var_620_string + var_704_string; // 0x515 Add
	PlayAnimation(var_705_int); // 0x516 Func
	WaitForAnimEnd(); // 0x518 Func
	var_706_bool = var_0_bool; // 0x51a PushT
	if(var_706_bool == 0) goto Label_1309; // 0x51b JumpB
	return 40; // 0x51c Return
	
Label_1309:
	func_1150(); // 0x51e Call
	var_636_object = 0; // 0x520 SetNull
	var_635_object = 0; // 0x521 SetNull
	var_626_object = 0; // 0x522 SetNull
	var_714_bool = 0; // 0x523 PushV
	func_1347(var_714_bool); // 0x524 Call
	if(var_714_bool == 0) goto Label_1179; // 0x526 JumpB
}


func_1689(var_0_bool)
{
	var_838_string = ""; var_839_int = 0; var_840_string = ""; var_841_int = 0; var_842_bool = 0; var_843_float = 0; var_844_float = 0; var_845_cvector = CVector(0,0,0); var_846_object = Obj(); var_847_int = 0; var_848_cvector = CVector(0,0,0); var_849_object = Obj(); var_850_int = 0; var_851_cvector = CVector(0,0,0); var_852_float = 0; var_853_object = Obj(); var_854_object = Obj(); var_855_object = Obj(); var_856_object = Obj(); var_857_bool = 0; var_858_string = ""; var_859_int = 0; var_860_string = ""; var_861_int = 0; var_862_bool = 0; var_863_float = 0; var_864_float = 0; var_865_cvector = CVector(0,0,0); var_866_object = Obj(); var_867_int = 0; var_868_cvector = CVector(0,0,0); var_869_object = Obj(); var_870_int = 0; var_871_cvector = CVector(0,0,0); var_872_float = 0; var_873_object = Obj(); var_874_object = Obj(); var_875_object = Obj(); var_876_object = Obj(); var_877_bool = 0; // 0x699 PushV
	var_0_bool = 0; // 0x69a TMovB
	
Label_1691:
	var_878_bool = 0; // 0x69b PushV
	func_1608(var_878_bool); // 0x69c Call
	var_892_bool = var_878_bool == 0; // 0x69e Not
	if(var_892_bool == 0) goto Label_1697; // 0x69f JumpB
	goto Label_1831; // 0x6a0 Jump
	
Label_1831:
	return 40; // 0x727 Return
	
Label_1697:
	GetCurrentWeapon(var_858_string); // 0x6a1 Func
	var_893_int = 2; // 0x6a3 PushI
	irand(var_859_int, var_893_int); // 0x6a4 Func
	var_860_string = "attack1"; // 0x6a6 MovS
	var_894_bool = 1; // 0x6a7 PushB
	SetAttackState(var_894_bool); // 0x6a8 Func
	func_1640(); // 0x6ab Call
	var_903_string = "_phase1"; // 0x6ad PushS
	var_904_int = var_860_string + var_903_string; // 0x6ae Add
	PlayAnimation(var_904_int); // 0x6af Func
	WaitForAnimEnd(); // 0x6b1 Func
	var_905_bool = var_0_bool; // 0x6b3 PushT
	if(var_905_bool == 0) goto Label_1718; // 0x6b4 JumpB
	return 40; // 0x6b5 Return
	
Label_1718:
	var_906_string = ""; // 0x6b6 PushV
	func_1681(var_906_string); // 0x6b7 Call
	var_907_string = "_shot"; // 0x6b9 PushS
	var_908_int = var_906_string + var_907_string; // 0x6ba Add
	PlaySound(var_908_int); // 0x6bb Func
	func_1858(); // 0x6be Call
	var_909_bool = 0; // 0x6c0 PushB
	SetAttackState(var_909_bool); // 0x6c1 Func
	var_910_int = 0; // 0x6c3 PushV
	func_1636(var_910_int); // 0x6c4 Call
	var_861_int = var_910_int; // 0x6c5 Mov
	var_862_bool = 0; // 0x6c7 MovB
	var_911_float = 0; // 0x6c8 PushV
	func_1683(var_911_float); // 0x6c9 Call
	var_863_float = var_911_float / var_911_float; // 0x6cb Div2
	var_912_float = 0; // 0x6cc PushV
	func_1638(var_912_float); // 0x6cd Call
	var_864_float = var_912_float; // 0x6ce Mov
	GetDirection(var_865_cvector); // 0x6d0 Func
	var_913_object = Obj(); // 0x6d2 PushV
	func_2806(var_913_object); // 0x6d3 Call
	var_866_object = var_913_object; // 0x6d4 Mov
	var_867_int = 0; // 0x6d6 MovI
	
Label_1751:
	var_914_bool = var_867_int < var_861_int; // 0x6d7 LT
	if(var_914_bool == 0) goto Label_1801; // 0x6d8 JumpB
	RandVecCone3D(var_868_cvector, var_865_cvector, var_864_float); // 0x6d9 Func
	GetVictimMaterial(var_869_object, var_870_int, var_871_cvector, var_868_cvector); // 0x6db Func
	var_915_bool = var_869_object != 0; // 0x6dd NullNeq
	if(var_915_bool == 0) goto Label_1797; // 0x6de JumpB
	var_916_float = 0; var_917_object = Obj(); var_918_float = 0; var_919_int = 0; // 0x6df PushV
	var_917_object = var_869_object; // 0x6e0 Mov
	var_918_float = var_863_float; // 0x6e1 Mov
	var_920_int = 0; // 0x6e2 PushV
	func_1685(var_920_int); // 0x6e3 Call
	var_919_int = var_920_int; // 0x6e4 Mov
	func_2687(var_916_float, var_917_object, var_918_float, var_919_int); // 0x6e6 Call
	var_872_float = var_916_float; // 0x6e7 Mov
	var_921_float = var_872_float; // 0x6e9 Push
	if(var_921_float == 0) goto Label_1779; // 0x6ea JumpB
	add(var_869_object); // 0x6eb ObjFunc
	var_922_int = 0; // 0x6ed PushV
	func_1687(var_922_int); // 0x6ee Call
	ReportHit(var_869_object, var_922_int, var_872_float, var_863_float); // 0x6f0 Func
	goto Label_1797; // 0x6f2 Jump
	
Label_1797:
	var_869_object = 0; // 0x705 SetNull
	var_923_int = 1; // 0x706 PushI
	var_867_int = var_867_int + var_923_int; // 0x707 Add2
	goto Label_1751; // 0x708 Jump
	
Label_1779:
	var_924_int = -1; // 0x6f3 PushI
	var_925_bool = var_870_int != var_924_int; // 0x6f4 Neq
	if(var_925_bool == 0) goto Label_1797; // 0x6f5 JumpB
	var_926_bool = var_862_bool == 0; // 0x6f6 Not
	if(var_926_bool == 0) goto Label_1797; // 0x6f7 JumpB
	GetScene(var_873_object); // 0x6f8 Func
	var_927_string = "scripted"; // 0x6fa PushS
	var_928_cvector = CVector(0.0, 0.0, 1.0); // 0x6fb PushVec
	var_929_string = "richochet.xml"; // 0x6fc PushS
	AddActorByType(var_874_object, var_927_string, var_873_object, var_871_cvector, var_928_cvector, var_929_string); // 0x6fd Func
	var_930_string = "Material"; // 0x6ff PushS
	SetScriptProperty(var_930_string, var_870_int); // 0x700 ObjFunc
	var_862_bool = 1; // 0x702 MovB
	var_874_object = 0; // 0x703 SetNull
	var_873_object = 0; // 0x704 SetNull
	
Label_1801:
	iterator(var_875_object); // 0x709 ObjFunc
	
Label_1803:
	Next(var_877_bool, var_876_object); // 0x70b ObjFunc
	var_931_bool = var_877_bool; // 0x70d Push
	if(var_931_bool == 0) goto Label_1812; // 0x70e JumpB
	ReportAttack(var_876_object); // 0x70f Func
	BroadcastPlayerDamage(var_876_object); // 0x711 Func
	goto Label_1803; // 0x713 Jump
	
Label_1812:
	var_932_string = "_phase2"; // 0x714 PushS
	var_933_int = var_860_string + var_932_string; // 0x715 Add
	PlayAnimation(var_933_int); // 0x716 Func
	WaitForAnimEnd(); // 0x718 Func
	var_934_bool = var_0_bool; // 0x71a PushT
	if(var_934_bool == 0) goto Label_1821; // 0x71b JumpB
	return 40; // 0x71c Return
	
Label_1821:
	func_1650(); // 0x71e Call
	var_876_object = 0; // 0x720 SetNull
	var_875_object = 0; // 0x721 SetNull
	var_866_object = 0; // 0x722 SetNull
	var_950_bool = 0; // 0x723 PushV
	func_1859(var_950_bool); // 0x724 Call
	if(var_950_bool == 0) goto Label_1691; // 0x726 JumpB
}


func_2751(var_40_string, var_41_int)
{
	var_42_int = 1; // 0xac0 PushI
	var_43_bool = var_41_int == var_42_int; // 0xac1 Eq
	if(var_43_bool == 0) goto Label_2758; // 0xac2 JumpB
	var_40_string = "wood"; // 0xac3 MovS
	return 0; // 0xac4 Return
	
Label_2758:
	var_44_int = 2; // 0xac6 PushI
	var_45_bool = var_41_int == var_44_int; // 0xac7 Eq
	if(var_45_bool == 0) goto Label_2764; // 0xac8 JumpB
	var_40_string = "metal"; // 0xac9 MovS
	return 0; // 0xaca Return
	
Label_2764:
	var_46_int = 3; // 0xacc PushI
	var_47_bool = var_41_int == var_46_int; // 0xacd Eq
	if(var_47_bool == 0) goto Label_2769; // 0xace JumpB
	var_40_string = "ground"; // 0xacf MovS
	return 0; // 0xad0 Return
	
Label_2769:
	var_40_string = "stone"; // 0xad1 MovS
	return 0; // 0xad2 Return
}


func_705(var_416_bool)
{
	var_417_bool = 0; var_418_bool = 0; // 0x2c1 PushV
	IsShooting(var_418_bool); // 0x2c2 Func
	var_416_bool = var_418_bool; // 0x2c4 Mov
	return 2; // 0x2c5 Return
}


func_710(var_460_string)
{
	var_460_string = "knife"; // 0x2c6 MovS
	return 0; // 0x2c7 Return
}


func_2246(var_1029_float)
{
	var_1029_float = 0.5; // 0x8c6 MovF
	return 0; // 0x8c7 Return
}


func_712(var_479_float, var_480_bool)
{
	var_481_bool = var_480_bool; // 0x2c9 Push
	if(var_481_bool == 0) goto Label_717; // 0x2ca JumpB
	var_479_float = 0.3; // 0x2cb MovF
	goto Label_718; // 0x2cc Jump
	
Label_718:
	return 0; // 0x2ce Return
	
Label_717:
	var_479_float = 0.3; // 0x2cd MovF
}


func_2248(var_1031_int)
{
	var_1031_int = 0; // 0x8c8 MovI
	return 0; // 0x8c9 Return
}


func_2250(var_0_bool, var_1_bool)
{
	var_1045_object = Obj(); var_1046_bool = 0; var_1047_bool = 0; var_1048_bool = 0; var_1049_bool = 0; var_1050_int = 0; var_1051_int = 0; var_1052_object = Obj(); var_1053_bool = 0; var_1054_bool = 0; var_1055_bool = 0; var_1056_bool = 0; var_1057_int = 0; var_1058_int = 0; // 0x8ca PushV
	var_0_bool = 0; // 0x8cb TMovB
	var_1_bool = 0; // 0x8cc TMovB
	var_1059_string = "use_begin"; // 0x8cd PushS
	PlayAnimation(var_1059_string); // 0x8ce Func
	WaitForAnimEnd(); // 0x8d0 Func
	var_1060_bool = var_0_bool; // 0x8d2 PushT
	if(var_1060_bool == 0) goto Label_2261; // 0x8d3 JumpB
	return 14; // 0x8d4 Return
	
Label_2261:
	GetPlayerSelectedObject(var_1052_object); // 0x8d5 Func
	var_1053_bool = 0; // 0x8d7 MovB
	var_1061_bool = 0; var_1062_object = Obj(); var_1063_string = ""; // 0x8d8 PushV
	var_1062_object = var_1052_object; // 0x8d9 Mov
	var_1063_string = "lp"; // 0x8da MovS
	func_2649(var_1061_bool, var_1062_object, var_1063_string); // 0x8db Call
	if(var_1061_bool == 0) goto Label_2309; // 0x8dd JumpB
	var_1064_string = "lp"; // 0x8de PushS
	GetProperty(var_1064_string, var_1054_bool); // 0x8df ObjFunc
	var_1065_bool = var_1054_bool; // 0x8e1 Push
	if(var_1065_bool == 0) goto Label_2309; // 0x8e2 JumpB
	var_1066_string = "locked"; // 0x8e3 PushS
	GetProperty(var_1066_string, var_1055_bool); // 0x8e4 ObjFunc
	var_1067_bool = var_1055_bool; // 0x8e6 Push
	if(var_1067_bool == 0) goto Label_2309; // 0x8e7 JumpB
	var_1053_bool = 1; // 0x8e8 MovB
	var_1068_string = "locked"; // 0x8e9 PushS
	var_1069_bool = 0; // 0x8ea PushB
	SetProperty(var_1068_string, var_1069_bool); // 0x8eb ObjFunc
	var_1057_int = 0; // 0x8ed MovI
	var_1070_string = "uses"; // 0x8ee PushS
	GetWeaponProperty(var_1056_bool, var_1070_string, var_1057_int); // 0x8ef Func
	var_1071_int = 1; // 0x8f1 PushI
	var_1072_bool = var_1057_int <= var_1071_int; // 0x8f2 LE
	if(var_1072_bool == 0) goto Label_2304; // 0x8f3 JumpB
	GetWeaponItem(var_1058_int); // 0x8f4 Func
	var_1073_bool = 0; // 0x8f6 PushB
	var_1074_int = 0; // 0x8f7 PushI
	SelectItem(var_1058_int, var_1073_bool, var_1074_int); // 0x8f8 Func
	var_1075_int = 1; // 0x8fa PushI
	var_1076_int = 0; // 0x8fb PushI
	RemoveItem(var_1058_int, var_1075_int, var_1076_int); // 0x8fc Func
	var_1_bool = 1; // 0x8fe TMovB
	goto Label_2309; // 0x8ff Jump
	
Label_2309:
	var_1077_bool = var_1053_bool; // 0x905 Push
	if(var_1077_bool == 0) goto Label_2315; // 0x906 JumpB
	var_1078_string = "use_success"; // 0x907 PushS
	PlayAnimation(var_1078_string); // 0x908 Func
	goto Label_2318; // 0x90a Jump
	
Label_2318:
	WaitForAnimEnd(); // 0x90e Func
	var_1079_bool = var_0_bool; // 0x910 PushT
	if(var_1079_bool == 0) goto Label_2323; // 0x911 JumpB
	return 14; // 0x912 Return
	
Label_2323:
	var_1080_bool = var_1_bool; // 0x913 PushT
	if(var_1080_bool == 0) goto Label_2342; // 0x914 JumpB
	var_1081_string = "holster"; // 0x915 PushS
	PlayAnimation(var_1081_string); // 0x916 Func
	WaitForAnimEnd(); // 0x918 Func
	var_1082_int = -1; // 0x91a PushI
	SetHandsItem(var_1082_int); // 0x91b Func
	var_1083_bool = var_0_bool; // 0x91d PushT
	if(var_1083_bool == 0) goto Label_2336; // 0x91e JumpB
	return 14; // 0x91f Return
	
Label_2336:
	var_1_bool = 0; // 0x920 TMovB
	var_1084_string = "unholster"; // 0x921 PushS
	PlayAnimation(var_1084_string); // 0x922 Func
	WaitForAnimEnd(); // 0x924 Func
	
Label_2342:
	return 14; // 0x926 Return
	
Label_2315:
	var_1085_string = "use_fail"; // 0x90b PushS
	PlayAnimation(var_1085_string); // 0x90c Func
	
Label_2304:
	var_1086_string = "uses"; // 0x900 PushS
	var_1087_int = 1; // 0x901 PushI
	var_1088_int = var_1057_int - var_1087_int; // 0x902 Sub
	SetWeaponProperty(var_1056_bool, var_1086_string, var_1088_int); // 0x903 Func
}


func_719(var_484_float)
{
	var_484_float = 0.5; // 0x2cf MovF
	return 0; // 0x2d0 Return
}


func_721(var_500_int)
{
	var_500_int = 1; // 0x2d1 MovI
	return 0; // 0x2d2 Return
}


func_3281()
{
	var_38_float = 0; var_39_float = 0; // 0xcd1 PushV
	var_40_int = 10; // 0xcd2 PushI
	var_41_int = 30; // 0xcd3 PushI
	rand(var_39_float, var_40_int, var_41_int); // 0xcd4 Func
	var_42_int = 0; // 0xcd6 PushI
	SetTimer(var_42_int, var_39_float); // 0xcd7 Func
	return 2; // 0xcd9 Return
}


func_723(var_489_int)
{
	var_489_int = 0; // 0x2d3 MovI
	return 0; // 0x2d4 Return
}


func_2771(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xad3 PushV
	self(var_32_object); // 0xad4 Func
	var_30_object = var_32_object; // 0xad6 Mov
	return 2; // 0xad7 Return
}


func_725(var_498_int)
{
	var_498_int = 1; // 0x2d5 MovI
	return 0; // 0x2d6 Return
}


func_727(var_477_float, var_478_bool)
{
	var_479_float = 0; var_480_bool = 0; // 0x2d8 PushV
	var_480_bool = var_478_bool; // 0x2d9 Mov
	func_712(var_479_float, var_480_bool); // 0x2da Call
	var_482_float = 0; var_483_float = 0; // 0x2dc PushV
	var_484_float = 0; // 0x2dd PushV
	func_719(var_484_float); // 0x2de Call
	var_483_float = var_484_float; // 0x2df Mov
	func_2908(var_482_float, var_483_float); // 0x2e1 Call
	var_477_float = var_479_float * var_482_float; // 0x2e3 Mult2
	return 0; // 0x2e4 Return
}


func_2777(var_68_float, var_69_float, var_70_float)
{
	var_73_bool = var_69_float < var_70_float; // 0xada LT
	if(var_73_bool == 0) goto Label_2782; // 0xadb JumpB
	var_68_float = var_69_float; // 0xadc Mov
	goto Label_2783; // 0xadd Jump
	
Label_2783:
	return 0; // 0xadf Return
	
Label_2782:
	var_68_float = var_70_float; // 0xade Mov
}


func_2784(var_78_float, var_79_float, var_80_float, var_81_float)
{
	var_82_bool = var_79_float < var_80_float; // 0xae1 LT
	if(var_82_bool == 0) goto Label_2789; // 0xae2 JumpB
	var_78_float = var_80_float; // 0xae3 Mov
	return 0; // 0xae4 Return
	
Label_2789:
	var_83_bool = var_79_float > var_81_float; // 0xae5 GT
	if(var_83_bool == 0) goto Label_2793; // 0xae6 JumpB
	var_78_float = var_81_float; // 0xae7 Mov
	return 0; // 0xae8 Return
	
Label_2793:
	var_78_float = var_79_float; // 0xae9 Mov
	return 0; // 0xaea Return
}


func_741()
{
	var_499_int = 0; // 0x2e5 PushV
	var_500_int = 0; // 0x2e6 PushV
	func_721(var_500_int); // 0x2e7 Call
	var_499_int = var_500_int; // 0x2e8 Mov
	func_2889(var_499_int); // 0x2ea Call
	return 0; // 0x2ec Return
}


func_2795(var_318_int, var_319_int, var_320_int, var_321_int)
{
	var_322_bool = var_319_int < var_320_int; // 0xaec LT
	if(var_322_bool == 0) goto Label_2800; // 0xaed JumpB
	var_318_int = var_320_int; // 0xaee Mov
	return 0; // 0xaef Return
	
Label_2800:
	var_323_bool = var_319_int > var_321_int; // 0xaf0 GT
	if(var_323_bool == 0) goto Label_2804; // 0xaf1 JumpB
	var_318_int = var_321_int; // 0xaf2 Mov
	return 0; // 0xaf3 Return
	
Label_2804:
	var_318_int = var_319_int; // 0xaf4 Mov
	return 0; // 0xaf5 Return
}


func_749(var_0_bool)
{
	var_422_int = 0; var_423_string = ""; var_424_bool = 0; var_425_string = ""; var_426_int = 0; var_427_string = ""; var_428_float = 0; var_429_object = Obj(); var_430_bool = 0; var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_float = 0; var_435_int = 0; var_436_int = 0; var_437_string = ""; var_438_bool = 0; var_439_string = ""; var_440_int = 0; var_441_string = ""; var_442_float = 0; var_443_object = Obj(); var_444_bool = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_float = 0; var_448_float = 0; var_449_int = 0; // 0x2ed PushV
	var_0_bool = 0; // 0x2ee TMovB
	var_436_int = 0; // 0x2ef MovI
	
Label_752:
	var_450_int = 1; // 0x2f0 PushI
	var_436_int = var_436_int + var_450_int; // 0x2f1 Add2
	var_451_string = "attack"; // 0x2f2 PushS
	var_452_int = var_451_string + var_436_int; // 0x2f3 Add
	var_453_string = "_phase1"; // 0x2f4 PushS
	var_437_string = var_452_int + var_453_string; // 0x2f5 Add2
	HasAnimation(var_438_bool, var_437_string); // 0x2f6 Func
	var_454_bool = var_438_bool == 0; // 0x2f8 Not
	if(var_454_bool == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_764; // 0x2fa Jump
	
Label_764:
	var_455_int = -1; // 0x2fc PushI
	var_436_int = var_436_int + var_455_int; // 0x2fd Add2
	var_456_bool = var_436_int == 0; // 0x2fe Not
	if(var_456_bool == 0) goto Label_769; // 0x2ff JumpB
	return 28; // 0x300 Return
	
Label_769:
	GetCurrentWeapon(var_439_string); // 0x301 Func
	irand(var_440_int, var_436_int); // 0x303 Func
	var_457_string = "attack"; // 0x305 PushS
	var_458_int = 1; // 0x306 PushI
	var_459_int = var_440_int + var_458_int; // 0x307 Add
	var_441_string = var_457_string + var_459_int; // 0x308 Add2
	var_460_string = ""; // 0x309 PushV
	func_710(var_460_string); // 0x30a Call
	var_461_int = 1; // 0x30c PushI
	var_462_int = var_440_int + var_461_int; // 0x30d Add
	var_463_int = var_460_string + var_462_int; // 0x30e Add
	PlaySound(var_463_int); // 0x30f Func
	var_464_bool = 1; // 0x311 PushB
	SetAttackState(var_464_bool); // 0x312 Func
	var_465_string = "_phase1"; // 0x314 PushS
	var_466_int = var_441_string + var_465_string; // 0x315 Add
	PlayAnimation(var_466_int); // 0x316 Func
	WaitForAnimEnd(); // 0x318 Func
	var_467_bool = var_0_bool; // 0x31a PushT
	if(var_467_bool == 0) goto Label_797; // 0x31b JumpB
	return 28; // 0x31c Return
	
Label_797:
	var_468_bool = 0; // 0x31d PushB
	SetAttackState(var_468_bool); // 0x31e Func
	GetAttackDistance(var_442_float); // 0x320 Func
	GetVictim(var_442_float, var_443_object); // 0x322 Func
	var_469_bool = var_443_object != 0; // 0x324 NullNeq
	if(var_469_bool == 0) goto Label_865; // 0x325 JumpB
	var_470_string = "GetDirection"; // 0x326 PushS
	var_471_int = 1; // 0x327 PushI
	var_472_bool = IsFuncExist(var_443_object, var_470_string, var_471_int); // 0x328 FuncExist
	if(var_472_bool == 0) goto Label_822; // 0x329 JumpB
	GetDirection(var_445_cvector); // 0x32a Func
	GetDirection(var_446_cvector); // 0x32c ObjFunc
	var_473_float = 0; var_474_cvector = CVector(0,0,0); var_475_cvector = CVector(0,0,0); // 0x32e PushV
	var_474_cvector = var_445_cvector; // 0x32f Mov
	var_475_cvector = var_446_cvector; // 0x330 Mov
	func_2831(var_473_float, var_474_cvector, var_475_cvector); // 0x331 Call
	var_476_float = 0.5; // 0x333 PushF
	var_444_bool = var_473_float >= var_476_float; // 0x334 GE2
	goto Label_823; // 0x335 Jump
	
Label_823:
	var_477_float = 0; var_478_bool = 0; // 0x337 PushV
	var_478_bool = var_444_bool; // 0x338 Mov
	func_727(var_477_float, var_478_bool); // 0x339 Call
	var_447_float = var_477_float; // 0x33a Mov
	var_485_float = 0; var_486_object = Obj(); var_487_float = 0; var_488_int = 0; // 0x33c PushV
	var_486_object = var_443_object; // 0x33d Mov
	var_487_float = var_447_float; // 0x33e Mov
	var_489_int = 0; // 0x33f PushV
	func_723(var_489_int); // 0x340 Call
	var_488_int = var_489_int; // 0x341 Mov
	func_2687(var_485_float, var_486_object, var_487_float, var_488_int); // 0x343 Call
	var_448_float = var_485_float; // 0x344 Mov
	var_490_float = var_448_float; // 0x346 Push
	if(var_490_float == 0) goto Label_862; // 0x347 JumpB
	var_491_int = 2; // 0x348 PushI
	irand(var_449_int, var_491_int); // 0x349 Func
	var_492_string = ""; // 0x34b PushV
	func_710(var_492_string); // 0x34c Call
	var_493_string = "_hit"; // 0x34e PushS
	var_494_int = var_492_string + var_493_string; // 0x34f Add
	var_495_int = 1; // 0x350 PushI
	var_496_int = var_449_int + var_495_int; // 0x351 Add
	var_497_int = var_494_int + var_496_int; // 0x352 Add
	PlaySound(var_497_int); // 0x353 Func
	ReportAttack(var_443_object); // 0x355 Func
	var_498_int = 0; // 0x357 PushV
	func_725(var_498_int); // 0x358 Call
	ReportHit(var_443_object, var_498_int, var_448_float, var_447_float); // 0x35a Func
	BroadcastPlayerDamage(var_443_object); // 0x35c Func
	
Label_862:
	func_741(); // 0x35f Call
	
Label_865:
	var_501_string = "_phase2"; // 0x361 PushS
	var_502_int = var_441_string + var_501_string; // 0x362 Add
	PlayAnimation(var_502_int); // 0x363 Func
	WaitForAnimEnd(); // 0x365 Func
	var_503_bool = var_0_bool; // 0x367 PushT
	if(var_503_bool == 0) goto Label_874; // 0x368 JumpB
	return 28; // 0x369 Return
	
Label_874:
	var_443_object = 0; // 0x36a SetNull
	var_504_bool = 0; // 0x36b PushV
	func_906(var_504_bool); // 0x36c Call
	if(var_504_bool == 0) goto Label_769; // 0x36e JumpB
	return 28; // 0x36f Return
	
Label_822:
	var_444_bool = 0; // 0x336 MovB
	
Label_763:
	goto Label_752; // 0x2fb Jump
}


func_2806(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0xaf6 PushV
	CreateObjectSet(var_27_object); // 0xaf7 Func
	var_25_object = var_27_object; // 0xaf9 Mov
	return 2; // 0xafa Return
}


func_2812(var_120_float, var_121_cvector, var_122_cvector)
{
	var_123_float = GetByIndex(var_121_cvector, 0); // 0xafd PushE
	var_124_float = GetByIndex(var_122_cvector, 0); // 0xafe PushE
	var_125_float = var_123_float * var_124_float; // 0xaff Mult
	var_126_float = GetByIndex(var_121_cvector, 2); // 0xb00 PushE
	var_127_float = GetByIndex(var_122_cvector, 2); // 0xb01 PushE
	var_128_float = var_126_float * var_127_float; // 0xb02 Mult
	var_120_float = var_125_float + var_128_float; // 0xb03 Add2
	return 0; // 0xb04 Return
}


func_2821(var_129_float, var_130_cvector)
{
	var_131_float = GetByIndex(var_130_cvector, 0); // 0xb06 PushE
	var_132_float = GetByIndex(var_130_cvector, 0); // 0xb07 PushE
	var_133_float = var_131_float * var_132_float; // 0xb08 Mult
	var_134_float = GetByIndex(var_130_cvector, 2); // 0xb09 PushE
	var_135_float = GetByIndex(var_130_cvector, 2); // 0xb0a PushE
	var_136_float = var_134_float * var_135_float; // 0xb0b Mult
	var_137_int = var_133_float + var_136_float; // 0xb0c Add
	var_129_float = sqrt(var_137_int); // 0xb0d Sqrt2
	return 0; // 0xb0e Return
}


func_269(var_142_float, var_143_bool)
{
	var_144_float = 0; var_145_bool = 0; // 0x10e PushV
	var_145_bool = var_143_bool; // 0x10f Mov
	func_127(var_144_float, var_145_bool); // 0x110 Call
	var_142_float = var_144_float; // 0x111 Mov
	return 0; // 0x113 Return
}


func_2831(var_117_float, var_118_cvector, var_119_cvector)
{
	var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); // 0xb10 PushV
	var_121_cvector = var_118_cvector; // 0xb11 Mov
	var_122_cvector = var_119_cvector; // 0xb12 Mov
	func_2812(var_120_float, var_121_cvector, var_122_cvector); // 0xb13 Call
	var_129_float = 0; var_130_cvector = CVector(0,0,0); // 0xb15 PushV
	var_130_cvector = var_118_cvector; // 0xb16 Mov
	func_2821(var_129_float, var_130_cvector); // 0xb17 Call
	var_138_float = 0; var_139_cvector = CVector(0,0,0); // 0xb19 PushV
	var_139_cvector = var_119_cvector; // 0xb1a Mov
	func_2821(var_138_float, var_139_cvector); // 0xb1b Call
	var_140_float = var_129_float * var_138_float; // 0xb1d Mult
	var_117_float = var_120_float / var_120_float; // 0xb1e Div2
	return 0; // 0xb1f Return
}


func_2848(var_68_bool)
{
	var_69_int = 0; var_70_int = 0; // 0xb20 PushV
	var_71_string = "kerosene"; // 0xb21 PushS
	GetItemCountOfType(var_70_int, var_71_string); // 0xb22 Func
	var_68_bool = var_70_int; // 0xb24 Mov
	return 2; // 0xb25 Return
}


func_2854(var_647_bool, var_648_string, var_649_int)
{
	var_650_int = 0; var_651_int = 0; var_652_bool = 0; var_653_bool = 0; var_654_int = 0; var_655_int = 0; var_656_bool = 0; var_657_bool = 0; // 0xb26 PushV
	GetInvItemByName(var_654_int, var_648_string); // 0xb27 Func
	var_655_int = 0; // 0xb29 MovI
	
Label_2858:
	var_658_bool = var_655_int < var_649_int; // 0xb2a LT
	if(var_658_bool == 0) goto Label_2869; // 0xb2b JumpB
	var_659_int = 1; // 0xb2c PushI
	RemoveItemByType(var_656_bool, var_654_int, var_659_int); // 0xb2d Func
	var_660_bool = var_656_bool == 0; // 0xb2f Not
	if(var_660_bool == 0) goto Label_2866; // 0xb30 JumpB
	goto Label_2869; // 0xb31 Jump
	
Label_2869:
	var_661_bool = var_655_int == 0; // 0xb35 Not
	if(var_661_bool == 0) goto Label_2873; // 0xb36 JumpB
	var_647_bool = 0; // 0xb37 MovB
	return 8; // 0xb38 Return
	
Label_2873:
	var_662_string = "ammo"; // 0xb39 PushS
	SetWeaponProperty(var_657_bool, var_662_string, var_655_int); // 0xb3a Func
	var_647_bool = 1; // 0xb3c MovB
	return 8; // 0xb3d Return
	
Label_2866:
	var_663_int = 1; // 0xb32 PushI
	var_655_int = var_655_int + var_663_int; // 0xb33 Add2
	goto Label_2858; // 0xb34 Jump
}


func_302()
{
	return 0; // 0x12e Return
}


func_303(var_216_bool)
{
	var_217_bool = 0; var_218_bool = 0; // 0x12f PushV
	IsShooting(var_218_bool); // 0x130 Func
	var_216_bool = var_218_bool; // 0x132 Mov
	return 2; // 0x133 Return
}


func_308(var_260_string)
{
	var_260_string = "scalpel"; // 0x134 MovS
	return 0; // 0x135 Return
}


func_2356(var_62_string)
{
	var_63_string = "empty"; // 0x935 PushS
	var_64_bool = var_62_string == var_63_string; // 0x936 Eq
	if(var_64_bool == 0) goto Label_2366; // 0x937 JumpB
	TaskCall(2); // 0x939 TaskCall
	func_138(var_65_bool); // 0x93a Call
	TaskReturn(); // 0x93b TaskReturn
	goto Label_2455; // 0x93d Jump
	
Label_2455:
	return 0; // 0x997 Return
	
Label_2366:
	var_219_string = "scalpel"; // 0x93e PushS
	var_220_bool = var_62_string == var_219_string; // 0x93f Eq
	if(var_220_bool == 0) goto Label_2375; // 0x940 JumpB
	TaskCall(3); // 0x942 TaskCall
	func_347(var_221_bool); // 0x943 Call
	TaskReturn(); // 0x944 TaskReturn
	goto Label_2455; // 0x946 Jump
	
Label_2375:
	var_331_string = "hammer"; // 0x947 PushS
	var_332_bool = var_62_string == var_331_string; // 0x948 Eq
	if(var_332_bool == 0) goto Label_2384; // 0x949 JumpB
	TaskCall(4); // 0x94b TaskCall
	func_548(var_333_bool); // 0x94c Call
	TaskReturn(); // 0x94d TaskReturn
	goto Label_2455; // 0x94f Jump
	
Label_2384:
	var_419_string = "knife"; // 0x950 PushS
	var_420_bool = var_62_string == var_419_string; // 0x951 Eq
	if(var_420_bool == 0) goto Label_2393; // 0x952 JumpB
	TaskCall(5); // 0x954 TaskCall
	func_749(var_421_bool); // 0x955 Call
	TaskReturn(); // 0x956 TaskReturn
	goto Label_2455; // 0x958 Jump
	
Label_2393:
	var_507_string = "trost"; // 0x959 PushS
	var_508_bool = var_62_string == var_507_string; // 0x95a Eq
	if(var_508_bool == 0) goto Label_2402; // 0x95b JumpB
	TaskCall(6); // 0x95d TaskCall
	func_950(var_509_bool); // 0x95e Call
	TaskReturn(); // 0x95f TaskReturn
	goto Label_2455; // 0x961 Jump
	
Label_2402:
	var_595_string = "rifle"; // 0x962 PushS
	var_596_bool = var_62_string == var_595_string; // 0x963 Eq
	if(var_596_bool == 0) goto Label_2411; // 0x964 JumpB
	TaskCall(7); // 0x966 TaskCall
	func_1177(var_597_bool); // 0x967 Call
	TaskReturn(); // 0x968 TaskReturn
	goto Label_2455; // 0x96a Jump
	
Label_2411:
	var_717_string = "revolver"; // 0x96b PushS
	var_718_bool = var_62_string == var_717_string; // 0x96c Eq
	if(var_718_bool == 0) goto Label_2420; // 0x96d JumpB
	TaskCall(8); // 0x96f TaskCall
	func_1433(var_719_bool); // 0x970 Call
	TaskReturn(); // 0x971 TaskReturn
	goto Label_2455; // 0x973 Jump
	
Label_2420:
	var_835_string = "samopal"; // 0x974 PushS
	var_836_bool = var_62_string == var_835_string; // 0x975 Eq
	if(var_836_bool == 0) goto Label_2429; // 0x976 JumpB
	TaskCall(9); // 0x978 TaskCall
	func_1689(var_837_bool); // 0x979 Call
	TaskReturn(); // 0x97a TaskReturn
	goto Label_2455; // 0x97c Jump
	
Label_2429:
	var_953_string = "ognemet"; // 0x97d PushS
	var_954_bool = var_62_string == var_953_string; // 0x97e Eq
	if(var_954_bool == 0) goto Label_2438; // 0x97f JumpB
	TaskCall(10); // 0x981 TaskCall
	func_1864(var_955_object, var_956_bool, var_957_bool); // 0x982 Call
	TaskReturn(); // 0x983 TaskReturn
	goto Label_2455; // 0x985 Jump
	
Label_2438:
	var_998_string = "bottle"; // 0x986 PushS
	var_999_bool = var_62_string == var_998_string; // 0x987 Eq
	if(var_999_bool == 0) goto Label_2447; // 0x988 JumpB
	TaskCall(11); // 0x98a TaskCall
	func_2147(var_1000_bool); // 0x98b Call
	TaskReturn(); // 0x98c TaskReturn
	goto Label_2455; // 0x98e Jump
	
Label_2447:
	var_1041_string = "lockpick"; // 0x98f PushS
	var_1042_bool = var_62_string == var_1041_string; // 0x990 Eq
	if(var_1042_bool == 0) goto Label_2455; // 0x991 JumpB
	TaskCall(12); // 0x993 TaskCall
	func_2250(var_1043_bool, var_1044_bool); // 0x994 Call
	TaskReturn(); // 0x995 TaskReturn
}


func_310(var_279_float, var_280_bool)
{
	var_281_bool = var_280_bool; // 0x137 Push
	if(var_281_bool == 0) goto Label_315; // 0x138 JumpB
	var_279_float = 0.2; // 0x139 MovF
	goto Label_316; // 0x13a Jump
	
Label_316:
	return 0; // 0x13c Return
	
Label_315:
	var_279_float = 0.4; // 0x13b MovF
}


func_317(var_284_float)
{
	var_284_float = 0.5; // 0x13d MovF
	return 0; // 0x13e Return
}


func_2878(var_285_float)
{
	var_286_bool = 0; var_287_int = 0; var_288_bool = 0; var_289_int = 0; // 0xb3e PushV
	var_290_string = "durability"; // 0xb3f PushS
	GetWeaponProperty(var_288_bool, var_290_string, var_289_int); // 0xb40 Func
	var_291_bool = var_288_bool; // 0xb42 Push
	if(var_291_bool == 0) goto Label_2887; // 0xb43 JumpB
	var_292_float = 100.0; // 0xb44 PushF
	var_285_float = var_289_int / var_289_int; // 0xb45 Div2
	goto Label_2888; // 0xb46 Jump
	
Label_2888:
	return 4; // 0xb48 Return
	
Label_2887:
	var_285_float = 1.0; // 0xb47 MovF
}


func_319(var_311_int)
{
	var_311_int = 1; // 0x13f MovI
	return 0; // 0x140 Return
}


func_321(var_300_int)
{
	var_300_int = 0; // 0x141 MovI
	return 0; // 0x142 Return
}


func_1346()
{
	return 0; // 0x542 Return
}


func_323(var_309_int)
{
	var_309_int = 1; // 0x143 MovI
	return 0; // 0x144 Return
}


func_1347(var_714_bool)
{
	var_715_bool = 0; var_716_bool = 0; // 0x543 PushV
	IsShooting(var_716_bool); // 0x544 Func
	var_714_bool = var_716_bool; // 0x546 Mov
	return 2; // 0x547 Return
}


func_325(var_277_float, var_278_bool)
{
	var_279_float = 0; var_280_bool = 0; // 0x146 PushV
	var_280_bool = var_278_bool; // 0x147 Mov
	func_310(var_279_float, var_280_bool); // 0x148 Call
	var_282_float = 0; var_283_float = 0; // 0x14a PushV
	var_284_float = 0; // 0x14b PushV
	func_317(var_284_float); // 0x14c Call
	var_283_float = var_284_float; // 0x14d Mov
	func_2908(var_282_float, var_283_float); // 0x14f Call
	var_277_float = var_279_float * var_282_float; // 0x151 Mult2
	return 0; // 0x152 Return
}


func_1858()
{
	return 0; // 0x742 Return
}


func_1859(var_950_bool)
{
	var_951_bool = 0; var_952_bool = 0; // 0x743 PushV
	IsShooting(var_952_bool); // 0x744 Func
	var_950_bool = var_952_bool; // 0x746 Mov
	return 2; // 0x747 Return
}


func_1352(var_760_bool)
{
	var_761_bool = 0; var_762_bool = 0; var_763_bool = 0; var_764_bool = 0; // 0x548 PushV
	var_765_string = "ammo"; // 0x549 PushS
	GetWeaponProperty(var_763_bool, var_765_string, var_764_bool); // 0x54a Func
	var_766_bool = 0; // 0x54c PushV
	var_766_bool = 1; // 0x54d MovB
	var_767_bool = var_763_bool == 0; // 0x54e Not
	if(var_767_bool == 0) goto Label_1363; // 0x54f JumpB
	var_768_bool = var_764_bool == 0; // 0x550 Not
	if(var_768_bool == 0) goto Label_1363; // 0x551 JumpB
	var_766_bool = 0; // 0x552 MovB
	
Label_1363:
	if(var_766_bool == 0) goto Label_1378; // 0x553 JumpB
	var_769_bool = 0; var_770_string = ""; var_771_int = 0; // 0x554 PushV
	var_770_string = "revolver_ammo"; // 0x555 MovS
	var_771_int = 6; // 0x556 MovI
	func_2854(var_769_bool, var_770_string, var_771_int); // 0x557 Call
	var_772_bool = var_769_bool == 0; // 0x559 Not
	if(var_772_bool == 0) goto Label_1378; // 0x55a JumpB
	var_773_string = "noammo"; // 0x55b PushS
	PlayAnimation(var_773_string); // 0x55c Func
	WaitForAnimEnd(); // 0x55e Func
	var_760_bool = 0; // 0x560 MovB
	return 4; // 0x561 Return
	
Label_1378:
	var_760_bool = 1; // 0x562 MovB
	return 4; // 0x563 Return
}


func_2889(var_310_int)
{
	var_312_bool = 0; var_313_int = 0; var_314_bool = 0; var_315_int = 0; // 0xb49 PushV
	var_316_string = "durability"; // 0xb4a PushS
	GetWeaponProperty(var_314_bool, var_316_string, var_315_int); // 0xb4b Func
	var_317_bool = var_314_bool; // 0xb4d Push
	if(var_317_bool == 0) goto Label_2903; // 0xb4e JumpB
	var_318_int = 0; var_319_int = 0; var_320_int = 0; var_321_int = 0; // 0xb4f PushV
	var_319_int = var_315_int - var_310_int; // 0xb50 Sub2
	var_320_int = 0; // 0xb51 MovI
	var_321_int = 100; // 0xb52 MovI
	func_2795(var_318_int, var_319_int, var_320_int, var_321_int); // 0xb53 Call
	var_315_int = var_318_int; // 0xb54 Mov
	goto Label_2904; // 0xb56 Jump
	
Label_2904:
	var_324_string = "durability"; // 0xb58 PushS
	SetWeaponProperty(var_314_bool, var_324_string, var_315_int); // 0xb59 Func
	return 4; // 0xb5b Return
	
Label_2903:
	var_315_int = 100; // 0xb57 MovI
}


func_1864(var_0_bool, var_1_bool, var_2_bool)
{
	var_958_object = Obj(); var_959_float = 0; var_960_object = Obj(); var_961_float = 0; // 0x748 PushV
	var_962_bool = 0; // 0x749 PushV
	func_2127(var_962_bool); // 0x74a Call
	var_969_bool = var_962_bool == 0; // 0x74c Not
	if(var_969_bool == 0) goto Label_1871; // 0x74d JumpB
	return 4; // 0x74e Return
	
Label_1871:
	var_2_bool = 0; // 0x74f TMovB
	var_1_bool = 0; // 0x750 TMovB
	func_1932(); // 0x752 Call
	GetScene(var_960_object); // 0x754 Func
	var_976_string = "flame"; // 0x756 PushS
	var_977_cvector = CVector(0.0, 0.0, 0.0); // 0x757 PushVec
	AddActorByType(var_0_bool, var_976_string, var_960_object, var_977_cvector); // 0x758 Func
	var_978_object = Obj(); // 0x75a PushV
	func_2771(var_978_object); // 0x75b Call
	var_981_string = "flame"; // 0x75d PushS
	Attach(var_978_object, var_981_string); // 0x75e TObjFunc
	var_982_float = 0.83333; // 0x760 PushF
	SetLength(var_982_float); // 0x761 TObjFunc
	var_983_int = 20; // 0x763 PushI
	var_984_float = 0.1; // 0x764 PushF
	SetTimer(var_983_int, var_984_float); // 0x765 Func
	
Label_1895:
	var_985_string = "attack"; // 0x767 PushS
	PlayAnimation(var_985_string); // 0x768 Func
	WaitForAnimEnd(); // 0x76a Func
	var_986_bool = var_2_bool; // 0x76c PushT
	if(var_986_bool == 0) goto Label_1903; // 0x76d JumpB
	goto Label_1922; // 0x76e Jump
	
Label_1922:
	var_987_int = 20; // 0x782 PushI
	KillTimer(var_987_int); // 0x783 Func
	RemoveActor(var_0_bool); // 0x785 Func
	var_988_string = "flame"; // 0x787 PushS
	RemoveAttachPoint(var_988_string); // 0x788 Func
	return 4; // 0x78a Return
	
Label_1903:
	var_989_bool = var_1_bool; // 0x76f PushT
	if(var_989_bool == 0) goto Label_1911; // 0x770 JumpB
	GetActualLength(var_961_float); // 0x771 TObjFunc
	var_990_float = 0.01667; // 0x773 PushF
	var_991_bool = var_961_float < var_990_float; // 0x774 LT
	if(var_991_bool == 0) goto Label_1911; // 0x775 JumpB
	goto Label_1922; // 0x776 Jump
	
Label_1911:
	var_992_bool = 0; // 0x777 PushV
	func_2142(var_992_bool); // 0x778 Call
	var_995_bool = var_992_bool == 0; // 0x77a Not
	if(var_995_bool == 0) goto Label_1921; // 0x77b JumpB
	var_996_bool = var_1_bool == 0; // 0x77c Not
	if(var_996_bool == 0) goto Label_1921; // 0x77d JumpB
	func_1978(var_961_float); // 0x77f Call
	
Label_1921:
	goto Label_1895; // 0x781 Jump
}


func_339()
{
	var_310_int = 0; // 0x153 PushV
	var_311_int = 0; // 0x154 PushV
	func_319(var_311_int); // 0x155 Call
	var_310_int = var_311_int; // 0x156 Mov
	func_2889(var_310_int); // 0x158 Call
	return 0; // 0x15a Return
}


func_347(var_0_bool)
{
	var_222_int = 0; var_223_string = ""; var_224_bool = 0; var_225_string = ""; var_226_int = 0; var_227_string = ""; var_228_float = 0; var_229_object = Obj(); var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_float = 0; var_234_float = 0; var_235_int = 0; var_236_int = 0; var_237_string = ""; var_238_bool = 0; var_239_string = ""; var_240_int = 0; var_241_string = ""; var_242_float = 0; var_243_object = Obj(); var_244_bool = 0; var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_float = 0; var_248_float = 0; var_249_int = 0; // 0x15b PushV
	var_0_bool = 0; // 0x15c TMovB
	var_236_int = 0; // 0x15d MovI
	
Label_350:
	var_250_int = 1; // 0x15e PushI
	var_236_int = var_236_int + var_250_int; // 0x15f Add2
	var_251_string = "attack"; // 0x160 PushS
	var_252_int = var_251_string + var_236_int; // 0x161 Add
	var_253_string = "_phase1"; // 0x162 PushS
	var_237_string = var_252_int + var_253_string; // 0x163 Add2
	HasAnimation(var_238_bool, var_237_string); // 0x164 Func
	var_254_bool = var_238_bool == 0; // 0x166 Not
	if(var_254_bool == 0) goto Label_361; // 0x167 JumpB
	goto Label_362; // 0x168 Jump
	
Label_362:
	var_255_int = -1; // 0x16a PushI
	var_236_int = var_236_int + var_255_int; // 0x16b Add2
	var_256_bool = var_236_int == 0; // 0x16c Not
	if(var_256_bool == 0) goto Label_367; // 0x16d JumpB
	return 28; // 0x16e Return
	
Label_367:
	GetCurrentWeapon(var_239_string); // 0x16f Func
	irand(var_240_int, var_236_int); // 0x171 Func
	var_257_string = "attack"; // 0x173 PushS
	var_258_int = 1; // 0x174 PushI
	var_259_int = var_240_int + var_258_int; // 0x175 Add
	var_241_string = var_257_string + var_259_int; // 0x176 Add2
	var_260_string = ""; // 0x177 PushV
	func_308(var_260_string); // 0x178 Call
	var_261_int = 1; // 0x17a PushI
	var_262_int = var_240_int + var_261_int; // 0x17b Add
	var_263_int = var_260_string + var_262_int; // 0x17c Add
	PlaySound(var_263_int); // 0x17d Func
	var_264_bool = 1; // 0x17f PushB
	SetAttackState(var_264_bool); // 0x180 Func
	var_265_string = "_phase1"; // 0x182 PushS
	var_266_int = var_241_string + var_265_string; // 0x183 Add
	PlayAnimation(var_266_int); // 0x184 Func
	WaitForAnimEnd(); // 0x186 Func
	var_267_bool = var_0_bool; // 0x188 PushT
	if(var_267_bool == 0) goto Label_395; // 0x189 JumpB
	return 28; // 0x18a Return
	
Label_395:
	var_268_bool = 0; // 0x18b PushB
	SetAttackState(var_268_bool); // 0x18c Func
	GetAttackDistance(var_242_float); // 0x18e Func
	GetVictim(var_242_float, var_243_object); // 0x190 Func
	var_269_bool = var_243_object != 0; // 0x192 NullNeq
	if(var_269_bool == 0) goto Label_463; // 0x193 JumpB
	var_270_string = "GetDirection"; // 0x194 PushS
	var_271_int = 1; // 0x195 PushI
	var_272_bool = IsFuncExist(var_243_object, var_270_string, var_271_int); // 0x196 FuncExist
	if(var_272_bool == 0) goto Label_420; // 0x197 JumpB
	GetDirection(var_245_cvector); // 0x198 Func
	GetDirection(var_246_cvector); // 0x19a ObjFunc
	var_273_float = 0; var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); // 0x19c PushV
	var_274_cvector = var_245_cvector; // 0x19d Mov
	var_275_cvector = var_246_cvector; // 0x19e Mov
	func_2831(var_273_float, var_274_cvector, var_275_cvector); // 0x19f Call
	var_276_float = 0.5; // 0x1a1 PushF
	var_244_bool = var_273_float >= var_276_float; // 0x1a2 GE2
	goto Label_421; // 0x1a3 Jump
	
Label_421:
	var_277_float = 0; var_278_bool = 0; // 0x1a5 PushV
	var_278_bool = var_244_bool; // 0x1a6 Mov
	func_325(var_277_float, var_278_bool); // 0x1a7 Call
	var_247_float = var_277_float; // 0x1a8 Mov
	var_296_float = 0; var_297_object = Obj(); var_298_float = 0; var_299_int = 0; // 0x1aa PushV
	var_297_object = var_243_object; // 0x1ab Mov
	var_298_float = var_247_float; // 0x1ac Mov
	var_300_int = 0; // 0x1ad PushV
	func_321(var_300_int); // 0x1ae Call
	var_299_int = var_300_int; // 0x1af Mov
	func_2687(var_296_float, var_297_object, var_298_float, var_299_int); // 0x1b1 Call
	var_248_float = var_296_float; // 0x1b2 Mov
	var_301_float = var_248_float; // 0x1b4 Push
	if(var_301_float == 0) goto Label_460; // 0x1b5 JumpB
	var_302_int = 2; // 0x1b6 PushI
	irand(var_249_int, var_302_int); // 0x1b7 Func
	var_303_string = ""; // 0x1b9 PushV
	func_308(var_303_string); // 0x1ba Call
	var_304_string = "_hit"; // 0x1bc PushS
	var_305_int = var_303_string + var_304_string; // 0x1bd Add
	var_306_int = 1; // 0x1be PushI
	var_307_int = var_249_int + var_306_int; // 0x1bf Add
	var_308_int = var_305_int + var_307_int; // 0x1c0 Add
	PlaySound(var_308_int); // 0x1c1 Func
	ReportAttack(var_243_object); // 0x1c3 Func
	var_309_int = 0; // 0x1c5 PushV
	func_323(var_309_int); // 0x1c6 Call
	ReportHit(var_243_object, var_309_int, var_248_float, var_247_float); // 0x1c8 Func
	BroadcastPlayerDamage(var_243_object); // 0x1ca Func
	
Label_460:
	func_339(); // 0x1cd Call
	
Label_463:
	var_325_string = "_phase2"; // 0x1cf PushS
	var_326_int = var_241_string + var_325_string; // 0x1d0 Add
	PlayAnimation(var_326_int); // 0x1d1 Func
	WaitForAnimEnd(); // 0x1d3 Func
	var_327_bool = var_0_bool; // 0x1d5 PushT
	if(var_327_bool == 0) goto Label_472; // 0x1d6 JumpB
	return 28; // 0x1d7 Return
	
Label_472:
	var_243_object = 0; // 0x1d8 SetNull
	var_328_bool = 0; // 0x1d9 PushV
	func_504(var_328_bool); // 0x1da Call
	if(var_328_bool == 0) goto Label_367; // 0x1dc JumpB
	return 28; // 0x1dd Return
	
Label_420:
	var_244_bool = 0; // 0x1a4 MovB
	
Label_361:
	goto Label_350; // 0x169 Jump
}


func_2908(var_282_float, var_283_float)
{
	var_285_float = 0; // 0xb5d PushV
	func_2878(var_285_float); // 0xb5e Call
	var_293_int = 1; // 0xb60 PushI
	var_294_int = var_293_int - var_283_float; // 0xb61 Sub
	var_295_float = var_285_float * var_294_int; // 0xb62 Mult
	var_282_float = var_283_float + var_295_float; // 0xb63 Add2
	return 0; // 0xb64 Return
}


func_1380(var_792_int)
{
	var_792_int = 1; // 0x564 MovI
	return 0; // 0x565 Return
}


func_2917()
{
	var_23_bool = 0; var_24_int = 0; var_25_string = ""; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_string = ""; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = ""; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_string = ""; var_38_string = ""; // 0xb65 PushV
	GetGroundMaterial(var_31_bool, var_32_int); // 0xb66 Func
	var_39_bool = var_31_bool == 0; // 0xb68 Not
	if(var_39_bool == 0) goto Label_2923; // 0xb69 JumpB
	var_32_int = -1; // 0xb6a MovI
	
Label_2923:
	var_40_string = ""; var_41_int = 0; // 0xb6b PushV
	var_41_int = var_32_int; // 0xb6c Mov
	func_2751(var_40_string, var_41_int); // 0xb6d Call
	var_33_string = var_40_string; // 0xb6e Mov
	var_34_int = 0; // 0xb70 MovI
	
Label_2929:
	var_48_string = "step_"; // 0xb71 PushS
	var_49_int = var_48_string + var_33_string; // 0xb72 Add
	var_50_int = 1; // 0xb73 PushI
	var_51_int = var_34_int + var_50_int; // 0xb74 Add
	var_52_int = var_49_int + var_51_int; // 0xb75 Add
	IsExistingSound(var_35_bool, var_52_int); // 0xb76 Func
	var_53_bool = var_35_bool == 0; // 0xb78 Not
	if(var_53_bool == 0) goto Label_2939; // 0xb79 JumpB
	goto Label_2942; // 0xb7a Jump
	
Label_2942:
	var_54_bool = var_34_int == 0; // 0xb7e Not
	if(var_54_bool == 0) goto Label_2948; // 0xb7f JumpB
	var_55_string = GlobalVars[0]; // 0xb80 PushGE
	var_55_string = ""; // 0xb81 MovS
	GlobalVars[0] = var_55_string; // 0xb82 PopGE
	return 16; // 0xb83 Return
	
Label_2948:
	var_56_int = 1; // 0xb84 PushI
	var_57_bool = var_34_int == var_56_int; // 0xb85 Eq
	if(var_57_bool == 0) goto Label_2953; // 0xb86 JumpB
	var_36_int = 0; // 0xb87 MovI
	goto Label_2965; // 0xb88 Jump
	
Label_2965:
	var_58_string = "step_"; // 0xb95 PushS
	var_59_int = var_58_string + var_33_string; // 0xb96 Add
	var_60_int = 1; // 0xb97 PushI
	var_61_int = var_36_int + var_60_int; // 0xb98 Add
	var_38_string = var_59_int + var_61_int; // 0xb99 Add2
	PlaySound(var_38_string); // 0xb9a Func
	var_62_string = GlobalVars[0]; // 0xb9c PushGE
	var_62_string = var_38_string; // 0xb9d Mov
	GlobalVars[0] = var_62_string; // 0xb9e PopGE
	return 16; // 0xb9f Return
	
Label_2953:
	irand(var_36_int, var_34_int); // 0xb89 Func
	var_63_string = "step_"; // 0xb8b PushS
	var_64_int = var_63_string + var_33_string; // 0xb8c Add
	var_65_int = 1; // 0xb8d PushI
	var_66_int = var_36_int + var_65_int; // 0xb8e Add
	var_37_string = var_64_int + var_66_int; // 0xb8f Add2
	var_67_string = GlobalVars[0]; // 0xb90 PushGE
	var_68_bool = var_37_string != var_67_string; // 0xb91 Neq
	if(var_68_bool == 0) goto Label_2964; // 0xb92 JumpB
	goto Label_2965; // 0xb93 Jump
	
Label_2964:
	goto Label_2953; // 0xb94 Jump
	
Label_2939:
	var_69_int = 1; // 0xb7b PushI
	var_34_int = var_34_int + var_69_int; // 0xb7c Add2
	goto Label_2929; // 0xb7d Jump
}


func_1382(var_794_float)
{
	var_794_float = 0.02618; // 0x566 MovF
	return 0; // 0x567 Return
}


func_1384()
{
	var_777_bool = 0; var_778_int = 0; var_779_bool = 0; var_780_int = 0; // 0x568 PushV
	var_781_string = "ammo"; // 0x569 PushS
	GetWeaponProperty(var_779_bool, var_781_string, var_780_int); // 0x56a Func
	var_782_string = "ammo"; // 0x56c PushS
	var_783_int = 1; // 0x56d PushI
	var_784_int = var_780_int - var_783_int; // 0x56e Sub
	SetWeaponProperty(var_779_bool, var_782_string, var_784_int); // 0x56f Func
	return 4; // 0x571 Return
}


func_1394()
{
	var_817_bool = 0; var_818_bool = 0; var_819_bool = 0; var_820_bool = 0; // 0x572 PushV
	var_821_string = "ammo"; // 0x573 PushS
	GetWeaponProperty(var_819_bool, var_821_string, var_820_bool); // 0x574 Func
	var_822_bool = 0; // 0x576 PushV
	var_822_bool = 1; // 0x577 MovB
	var_823_bool = var_819_bool == 0; // 0x578 Not
	if(var_823_bool == 0) goto Label_1405; // 0x579 JumpB
	var_824_bool = var_820_bool == 0; // 0x57a Not
	if(var_824_bool == 0) goto Label_1405; // 0x57b JumpB
	var_822_bool = 0; // 0x57c MovB
	
Label_1405:
	if(var_822_bool == 0) goto Label_1424; // 0x57d JumpB
	var_825_bool = 0; var_826_string = ""; var_827_int = 0; // 0x57e PushV
	var_826_string = "revolver_ammo"; // 0x57f MovS
	var_827_int = 6; // 0x580 MovI
	func_2854(var_825_bool, var_826_string, var_827_int); // 0x581 Call
	if(var_825_bool == 0) goto Label_1424; // 0x583 JumpB
	var_828_string = ""; // 0x584 PushV
	func_1425(var_828_string); // 0x585 Call
	var_829_string = "_reload"; // 0x587 PushS
	var_830_int = var_828_string + var_829_string; // 0x588 Add
	PlaySound(var_830_int); // 0x589 Func
	var_831_string = "reload"; // 0x58b PushS
	PlayAnimation(var_831_string); // 0x58c Func
	WaitForAnimEnd(); // 0x58e Func
	
Label_1424:
	return 4; // 0x590 Return
}


func_906(var_504_bool)
{
	var_505_bool = 0; var_506_bool = 0; // 0x38a PushV
	IsShooting(var_506_bool); // 0x38b Func
	var_504_bool = var_506_bool; // 0x38d Mov
	return 2; // 0x38e Return
}


func_1932()
{
	var_970_cvector = CVector(0,0,0); var_971_cvector = CVector(0,0,0); // 0x78c PushV
	var_972_float = GetByIndex(var_971_cvector, 1); // 0x78d PushE
	var_972_float = 0; // 0x78e MovI
	SetByIndex(var_971_cvector, 1) = var_972_float; // 0x78f PopE
	var_973_float = GetByIndex(var_971_cvector, 0); // 0x790 PushE
	var_973_float = 0; // 0x791 MovI
	SetByIndex(var_971_cvector, 0) = var_973_float; // 0x792 PopE
	var_974_float = GetByIndex(var_971_cvector, 2); // 0x793 PushE
	var_974_float = 0; // 0x794 MovI
	SetByIndex(var_971_cvector, 2) = var_974_float; // 0x795 PopE
	var_975_string = "flame"; // 0x796 PushS
	CreateAttachPoint(var_975_string, var_971_cvector); // 0x797 Func
	return 2; // 0x799 Return
}


func_911(var_548_string)
{
	var_548_string = "trost"; // 0x38f MovS
	return 0; // 0x390 Return
}


func_913(var_567_float, var_568_bool)
{
	var_569_bool = var_568_bool; // 0x392 Push
	if(var_569_bool == 0) goto Label_918; // 0x393 JumpB
	var_567_float = 0.3; // 0x394 MovF
	goto Label_919; // 0x395 Jump
	
Label_919:
	return 0; // 0x397 Return
	
Label_918:
	var_567_float = 0.2; // 0x396 MovF
}


func_1425(var_788_string)
{
	var_788_string = "revolver"; // 0x591 MovS
	return 0; // 0x592 Return
}


func_1427(var_793_float)
{
	var_793_float = 0.8; // 0x593 MovF
	return 0; // 0x594 Return
}


func_1429(var_802_int)
{
	var_802_int = 0; // 0x595 MovI
	return 0; // 0x596 Return
}


func_1431(var_804_int)
{
	var_804_int = 2; // 0x597 MovI
	return 0; // 0x598 Return
}


func_920(var_572_float)
{
	var_572_float = 0.5; // 0x398 MovF
	return 0; // 0x399 Return
}


func_1433(var_0_bool)
{
	var_720_string = ""; var_721_int = 0; var_722_string = ""; var_723_int = 0; var_724_bool = 0; var_725_float = 0; var_726_float = 0; var_727_cvector = CVector(0,0,0); var_728_object = Obj(); var_729_int = 0; var_730_cvector = CVector(0,0,0); var_731_object = Obj(); var_732_int = 0; var_733_cvector = CVector(0,0,0); var_734_float = 0; var_735_object = Obj(); var_736_object = Obj(); var_737_object = Obj(); var_738_object = Obj(); var_739_bool = 0; var_740_string = ""; var_741_int = 0; var_742_string = ""; var_743_int = 0; var_744_bool = 0; var_745_float = 0; var_746_float = 0; var_747_cvector = CVector(0,0,0); var_748_object = Obj(); var_749_int = 0; var_750_cvector = CVector(0,0,0); var_751_object = Obj(); var_752_int = 0; var_753_cvector = CVector(0,0,0); var_754_float = 0; var_755_object = Obj(); var_756_object = Obj(); var_757_object = Obj(); var_758_object = Obj(); var_759_bool = 0; // 0x599 PushV
	var_0_bool = 0; // 0x59a TMovB
	
Label_1435:
	var_760_bool = 0; // 0x59b PushV
	func_1352(var_760_bool); // 0x59c Call
	var_774_bool = var_760_bool == 0; // 0x59e Not
	if(var_774_bool == 0) goto Label_1441; // 0x59f JumpB
	goto Label_1575; // 0x5a0 Jump
	
Label_1575:
	return 40; // 0x627 Return
	
Label_1441:
	GetCurrentWeapon(var_740_string); // 0x5a1 Func
	var_775_int = 2; // 0x5a3 PushI
	irand(var_741_int, var_775_int); // 0x5a4 Func
	var_742_string = "attack1"; // 0x5a6 MovS
	var_776_bool = 1; // 0x5a7 PushB
	SetAttackState(var_776_bool); // 0x5a8 Func
	func_1384(); // 0x5ab Call
	var_785_string = "_phase1"; // 0x5ad PushS
	var_786_int = var_742_string + var_785_string; // 0x5ae Add
	PlayAnimation(var_786_int); // 0x5af Func
	WaitForAnimEnd(); // 0x5b1 Func
	var_787_bool = var_0_bool; // 0x5b3 PushT
	if(var_787_bool == 0) goto Label_1462; // 0x5b4 JumpB
	return 40; // 0x5b5 Return
	
Label_1462:
	var_788_string = ""; // 0x5b6 PushV
	func_1425(var_788_string); // 0x5b7 Call
	var_789_string = "_shot"; // 0x5b9 PushS
	var_790_int = var_788_string + var_789_string; // 0x5ba Add
	PlaySound(var_790_int); // 0x5bb Func
	func_1602(); // 0x5be Call
	var_791_bool = 0; // 0x5c0 PushB
	SetAttackState(var_791_bool); // 0x5c1 Func
	var_792_int = 0; // 0x5c3 PushV
	func_1380(var_792_int); // 0x5c4 Call
	var_743_int = var_792_int; // 0x5c5 Mov
	var_744_bool = 0; // 0x5c7 MovB
	var_793_float = 0; // 0x5c8 PushV
	func_1427(var_793_float); // 0x5c9 Call
	var_745_float = var_793_float / var_793_float; // 0x5cb Div2
	var_794_float = 0; // 0x5cc PushV
	func_1382(var_794_float); // 0x5cd Call
	var_746_float = var_794_float; // 0x5ce Mov
	GetDirection(var_747_cvector); // 0x5d0 Func
	var_795_object = Obj(); // 0x5d2 PushV
	func_2806(var_795_object); // 0x5d3 Call
	var_748_object = var_795_object; // 0x5d4 Mov
	var_749_int = 0; // 0x5d6 MovI
	
Label_1495:
	var_796_bool = var_749_int < var_743_int; // 0x5d7 LT
	if(var_796_bool == 0) goto Label_1545; // 0x5d8 JumpB
	RandVecCone3D(var_750_cvector, var_747_cvector, var_746_float); // 0x5d9 Func
	GetVictimMaterial(var_751_object, var_752_int, var_753_cvector, var_750_cvector); // 0x5db Func
	var_797_bool = var_751_object != 0; // 0x5dd NullNeq
	if(var_797_bool == 0) goto Label_1541; // 0x5de JumpB
	var_798_float = 0; var_799_object = Obj(); var_800_float = 0; var_801_int = 0; // 0x5df PushV
	var_799_object = var_751_object; // 0x5e0 Mov
	var_800_float = var_745_float; // 0x5e1 Mov
	var_802_int = 0; // 0x5e2 PushV
	func_1429(var_802_int); // 0x5e3 Call
	var_801_int = var_802_int; // 0x5e4 Mov
	func_2687(var_798_float, var_799_object, var_800_float, var_801_int); // 0x5e6 Call
	var_754_float = var_798_float; // 0x5e7 Mov
	var_803_float = var_754_float; // 0x5e9 Push
	if(var_803_float == 0) goto Label_1523; // 0x5ea JumpB
	add(var_751_object); // 0x5eb ObjFunc
	var_804_int = 0; // 0x5ed PushV
	func_1431(var_804_int); // 0x5ee Call
	ReportHit(var_751_object, var_804_int, var_754_float, var_745_float); // 0x5f0 Func
	goto Label_1541; // 0x5f2 Jump
	
Label_1541:
	var_751_object = 0; // 0x605 SetNull
	var_805_int = 1; // 0x606 PushI
	var_749_int = var_749_int + var_805_int; // 0x607 Add2
	goto Label_1495; // 0x608 Jump
	
Label_1523:
	var_806_int = -1; // 0x5f3 PushI
	var_807_bool = var_752_int != var_806_int; // 0x5f4 Neq
	if(var_807_bool == 0) goto Label_1541; // 0x5f5 JumpB
	var_808_bool = var_744_bool == 0; // 0x5f6 Not
	if(var_808_bool == 0) goto Label_1541; // 0x5f7 JumpB
	GetScene(var_755_object); // 0x5f8 Func
	var_809_string = "scripted"; // 0x5fa PushS
	var_810_cvector = CVector(0.0, 0.0, 1.0); // 0x5fb PushVec
	var_811_string = "richochet.xml"; // 0x5fc PushS
	AddActorByType(var_756_object, var_809_string, var_755_object, var_753_cvector, var_810_cvector, var_811_string); // 0x5fd Func
	var_812_string = "Material"; // 0x5ff PushS
	SetScriptProperty(var_812_string, var_752_int); // 0x600 ObjFunc
	var_744_bool = 1; // 0x602 MovB
	var_756_object = 0; // 0x603 SetNull
	var_755_object = 0; // 0x604 SetNull
	
Label_1545:
	iterator(var_757_object); // 0x609 ObjFunc
	
Label_1547:
	Next(var_759_bool, var_758_object); // 0x60b ObjFunc
	var_813_bool = var_759_bool; // 0x60d Push
	if(var_813_bool == 0) goto Label_1556; // 0x60e JumpB
	ReportAttack(var_758_object); // 0x60f Func
	BroadcastPlayerDamage(var_758_object); // 0x611 Func
	goto Label_1547; // 0x613 Jump
	
Label_1556:
	var_814_string = "_phase2"; // 0x614 PushS
	var_815_int = var_742_string + var_814_string; // 0x615 Add
	PlayAnimation(var_815_int); // 0x616 Func
	WaitForAnimEnd(); // 0x618 Func
	var_816_bool = var_0_bool; // 0x61a PushT
	if(var_816_bool == 0) goto Label_1565; // 0x61b JumpB
	return 40; // 0x61c Return
	
Label_1565:
	func_1394(); // 0x61e Call
	var_758_object = 0; // 0x620 SetNull
	var_757_object = 0; // 0x621 SetNull
	var_748_object = 0; // 0x622 SetNull
	var_832_bool = 0; // 0x623 PushV
	func_1603(var_832_bool); // 0x624 Call
	if(var_832_bool == 0) goto Label_1435; // 0x626 JumpB
}


func_922(var_588_int)
{
	var_588_int = 1; // 0x39a MovI
	return 0; // 0x39b Return
}


func_2456(var_24_string)
{
	var_25_string = "empty"; // 0x999 PushS
	var_26_bool = var_24_string == var_25_string; // 0x99a Eq
	if(var_26_bool == 0) goto Label_2466; // 0x99b JumpB
	var_27_float = 0; // 0x99c PushV
	var_27_float = 0.25; // 0x99d MovF
	TaskCall(1); // 0x99e TaskCall
	func_38(var_28_bool, var_29_bool, var_27_float); // 0x99f Call
	TaskReturn(); // 0x9a0 TaskReturn
	
Label_2466:
	return 0; // 0x9a2 Return
}


func_924(var_577_int)
{
	var_577_int = 0; // 0x39c MovI
	return 0; // 0x39d Return
}


func_926(var_586_int)
{
	var_586_int = 0; // 0x39e MovI
	return 0; // 0x39f Return
}


func_928(var_565_float, var_566_bool)
{
	var_567_float = 0; var_568_bool = 0; // 0x3a1 PushV
	var_568_bool = var_566_bool; // 0x3a2 Mov
	func_913(var_567_float, var_568_bool); // 0x3a3 Call
	var_570_float = 0; var_571_float = 0; // 0x3a5 PushV
	var_572_float = 0; // 0x3a6 PushV
	func_920(var_572_float); // 0x3a7 Call
	var_571_float = var_572_float; // 0x3a8 Mov
	func_2908(var_570_float, var_571_float); // 0x3aa Call
	var_565_float = var_567_float * var_570_float; // 0x3ac Mult2
	return 0; // 0x3ad Return
}


func_2976()
{
	var_46_bool = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_bool = 0; var_50_object = Obj(); var_51_object = Obj(); // 0xba0 PushV
	IsDead(var_49_bool); // 0xba1 Func
	var_52_bool = var_49_bool == 0; // 0xba3 Not
	if(var_52_bool == 0) goto Label_2991; // 0xba4 JumpB
	SetDeathState(); // 0xba5 Func
	GetMainOutdoorScene(var_50_object); // 0xba7 Func
	var_53_string = "player_death"; // 0xba9 PushS
	var_54_string = "play_death_danko.bin"; // 0xbaa PushS
	AddBlankActor(var_51_object, var_50_object, var_53_string, var_54_string); // 0xbab Func
	var_51_object = 0; // 0xbad SetNull
	var_50_object = 0; // 0xbae SetNull
	
Label_2991:
	return 6; // 0xbaf Return
}


func_942()
{
	var_587_int = 0; // 0x3ae PushV
	var_588_int = 0; // 0x3af PushV
	func_922(var_588_int); // 0x3b0 Call
	var_587_int = var_588_int; // 0x3b1 Mov
	func_2889(var_587_int); // 0x3b3 Call
	return 0; // 0x3b5 Return
}


func_2992()
{
	var_21_bool = 0; var_22_bool = 0; // 0xbb0 PushV
	var_23_int = 11; // 0xbb1 PushI
	KillTimer(var_23_int, var_22_bool); // 0xbb2 Func
	var_24_bool = var_22_bool; // 0xbb4 Push
	if(var_24_bool == 0) goto Label_3001; // 0xbb5 JumpB
	var_25_int = -2; // 0xbb6 PushI
	ModNoise(var_25_int); // 0xbb7 Func
	
Label_3001:
	return 2; // 0xbb9 Return
}


func_950(var_0_bool)
{
	var_510_int = 0; var_511_string = ""; var_512_bool = 0; var_513_string = ""; var_514_int = 0; var_515_string = ""; var_516_float = 0; var_517_object = Obj(); var_518_bool = 0; var_519_cvector = CVector(0,0,0); var_520_cvector = CVector(0,0,0); var_521_float = 0; var_522_float = 0; var_523_int = 0; var_524_int = 0; var_525_string = ""; var_526_bool = 0; var_527_string = ""; var_528_int = 0; var_529_string = ""; var_530_float = 0; var_531_object = Obj(); var_532_bool = 0; var_533_cvector = CVector(0,0,0); var_534_cvector = CVector(0,0,0); var_535_float = 0; var_536_float = 0; var_537_int = 0; // 0x3b6 PushV
	var_0_bool = 0; // 0x3b7 TMovB
	var_524_int = 0; // 0x3b8 MovI
	
Label_953:
	var_538_int = 1; // 0x3b9 PushI
	var_524_int = var_524_int + var_538_int; // 0x3ba Add2
	var_539_string = "attack"; // 0x3bb PushS
	var_540_int = var_539_string + var_524_int; // 0x3bc Add
	var_541_string = "_phase1"; // 0x3bd PushS
	var_525_string = var_540_int + var_541_string; // 0x3be Add2
	HasAnimation(var_526_bool, var_525_string); // 0x3bf Func
	var_542_bool = var_526_bool == 0; // 0x3c1 Not
	if(var_542_bool == 0) goto Label_964; // 0x3c2 JumpB
	goto Label_965; // 0x3c3 Jump
	
Label_965:
	var_543_int = -1; // 0x3c5 PushI
	var_524_int = var_524_int + var_543_int; // 0x3c6 Add2
	var_544_bool = var_524_int == 0; // 0x3c7 Not
	if(var_544_bool == 0) goto Label_970; // 0x3c8 JumpB
	return 28; // 0x3c9 Return
	
Label_970:
	GetCurrentWeapon(var_527_string); // 0x3ca Func
	irand(var_528_int, var_524_int); // 0x3cc Func
	var_545_string = "attack"; // 0x3ce PushS
	var_546_int = 1; // 0x3cf PushI
	var_547_int = var_528_int + var_546_int; // 0x3d0 Add
	var_529_string = var_545_string + var_547_int; // 0x3d1 Add2
	var_548_string = ""; // 0x3d2 PushV
	func_911(var_548_string); // 0x3d3 Call
	var_549_int = 1; // 0x3d5 PushI
	var_550_int = var_528_int + var_549_int; // 0x3d6 Add
	var_551_int = var_548_string + var_550_int; // 0x3d7 Add
	PlaySound(var_551_int); // 0x3d8 Func
	var_552_bool = 1; // 0x3da PushB
	SetAttackState(var_552_bool); // 0x3db Func
	var_553_string = "_phase1"; // 0x3dd PushS
	var_554_int = var_529_string + var_553_string; // 0x3de Add
	PlayAnimation(var_554_int); // 0x3df Func
	WaitForAnimEnd(); // 0x3e1 Func
	var_555_bool = var_0_bool; // 0x3e3 PushT
	if(var_555_bool == 0) goto Label_998; // 0x3e4 JumpB
	return 28; // 0x3e5 Return
	
Label_998:
	var_556_bool = 0; // 0x3e6 PushB
	SetAttackState(var_556_bool); // 0x3e7 Func
	GetAttackDistance(var_530_float); // 0x3e9 Func
	GetVictim(var_530_float, var_531_object); // 0x3eb Func
	var_557_bool = var_531_object != 0; // 0x3ed NullNeq
	if(var_557_bool == 0) goto Label_1066; // 0x3ee JumpB
	var_558_string = "GetDirection"; // 0x3ef PushS
	var_559_int = 1; // 0x3f0 PushI
	var_560_bool = IsFuncExist(var_531_object, var_558_string, var_559_int); // 0x3f1 FuncExist
	if(var_560_bool == 0) goto Label_1023; // 0x3f2 JumpB
	GetDirection(var_533_cvector); // 0x3f3 Func
	GetDirection(var_534_cvector); // 0x3f5 ObjFunc
	var_561_float = 0; var_562_cvector = CVector(0,0,0); var_563_cvector = CVector(0,0,0); // 0x3f7 PushV
	var_562_cvector = var_533_cvector; // 0x3f8 Mov
	var_563_cvector = var_534_cvector; // 0x3f9 Mov
	func_2831(var_561_float, var_562_cvector, var_563_cvector); // 0x3fa Call
	var_564_float = 0.5; // 0x3fc PushF
	var_532_bool = var_561_float >= var_564_float; // 0x3fd GE2
	goto Label_1024; // 0x3fe Jump
	
Label_1024:
	var_565_float = 0; var_566_bool = 0; // 0x400 PushV
	var_566_bool = var_532_bool; // 0x401 Mov
	func_928(var_565_float, var_566_bool); // 0x402 Call
	var_535_float = var_565_float; // 0x403 Mov
	var_573_float = 0; var_574_object = Obj(); var_575_float = 0; var_576_int = 0; // 0x405 PushV
	var_574_object = var_531_object; // 0x406 Mov
	var_575_float = var_535_float; // 0x407 Mov
	var_577_int = 0; // 0x408 PushV
	func_924(var_577_int); // 0x409 Call
	var_576_int = var_577_int; // 0x40a Mov
	func_2687(var_573_float, var_574_object, var_575_float, var_576_int); // 0x40c Call
	var_536_float = var_573_float; // 0x40d Mov
	var_578_float = var_536_float; // 0x40f Push
	if(var_578_float == 0) goto Label_1063; // 0x410 JumpB
	var_579_int = 2; // 0x411 PushI
	irand(var_537_int, var_579_int); // 0x412 Func
	var_580_string = ""; // 0x414 PushV
	func_911(var_580_string); // 0x415 Call
	var_581_string = "_hit"; // 0x417 PushS
	var_582_int = var_580_string + var_581_string; // 0x418 Add
	var_583_int = 1; // 0x419 PushI
	var_584_int = var_537_int + var_583_int; // 0x41a Add
	var_585_int = var_582_int + var_584_int; // 0x41b Add
	PlaySound(var_585_int); // 0x41c Func
	ReportAttack(var_531_object); // 0x41e Func
	var_586_int = 0; // 0x420 PushV
	func_926(var_586_int); // 0x421 Call
	ReportHit(var_531_object, var_586_int, var_536_float, var_535_float); // 0x423 Func
	BroadcastPlayerDamage(var_531_object); // 0x425 Func
	
Label_1063:
	func_942(); // 0x428 Call
	
Label_1066:
	var_589_string = "_phase2"; // 0x42a PushS
	var_590_int = var_529_string + var_589_string; // 0x42b Add
	PlayAnimation(var_590_int); // 0x42c Func
	WaitForAnimEnd(); // 0x42e Func
	var_591_bool = var_0_bool; // 0x430 PushT
	if(var_591_bool == 0) goto Label_1075; // 0x431 JumpB
	return 28; // 0x432 Return
	
Label_1075:
	var_531_object = 0; // 0x433 SetNull
	var_592_bool = 0; // 0x434 PushV
	func_1107(var_592_bool); // 0x435 Call
	if(var_592_bool == 0) goto Label_970; // 0x437 JumpB
	return 28; // 0x438 Return
	
Label_1023:
	var_532_bool = 0; // 0x3ff MovB
	
Label_964:
	goto Label_953; // 0x3c4 Jump
}


func_1978(var_1_bool)
{
	var_1_bool = 1; // 0x7ba TMovB
	var_997_float = 0.0; // 0x7bb PushF
	SetLength(var_997_float); // 0x7bc TObjFunc
	return 0; // 0x7be Return
}


func_3002()
{
	func_2992(); // 0xbbb Call
	var_26_int = 11; // 0xbbd PushI
	var_27_float = 0.15; // 0xbbe PushF
	SetTimer(var_26_int, var_27_float); // 0xbbf Func
	var_28_int = 2; // 0xbc1 PushI
	ModNoise(var_28_int); // 0xbc2 Func
	return 0; // 0xbc4 Return
}


func_3013()
{
	var_16_bool = 0; var_17_bool = 0; // 0xbc5 PushV
	var_18_int = 10; // 0xbc6 PushI
	KillTimer(var_18_int, var_17_bool); // 0xbc7 Func
	var_19_bool = var_17_bool; // 0xbc9 Push
	if(var_19_bool == 0) goto Label_3022; // 0xbca JumpB
	var_20_int = -1; // 0xbcb PushI
	ModNoise(var_20_int); // 0xbcc Func
	
Label_3022:
	return 2; // 0xbce Return
}


func_3023()
{
	func_3013(); // 0xbd0 Call
	var_21_int = 10; // 0xbd2 PushI
	var_22_float = 0.35; // 0xbd3 PushF
	SetTimer(var_21_int, var_22_float); // 0xbd4 Func
	var_23_int = 1; // 0xbd6 PushI
	ModNoise(var_23_int); // 0xbd7 Func
	return 0; // 0xbd9 Return
}


func_2005(var_1_bool)
{
	var_75_object = Obj(); var_76_float = 0; var_77_float = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_bool = 0; var_88_object = Obj(); var_89_bool = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; // 0x7d5 PushV
	Intersect(var_84_object, var_85_float); // 0x7d6 TObjFunc
	var_93_bool = var_1_bool == 0; // 0x7d8 Not
	if(var_93_bool == 0) goto Label_2017; // 0x7d9 JumpB
	var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0x7da PushV
	var_95_float = var_85_float; // 0x7db Mov
	var_96_float = 0.83333; // 0x7dc MovF
	func_2777(var_94_float, var_95_float, var_96_float); // 0x7dd Call
	SetLength(var_94_float); // 0x7df TObjFunc
	
Label_2017:
	var_98_float = 0; // 0x7e1 PushV
	func_2136(var_98_float); // 0x7e2 Call
	var_86_float = var_98_float; // 0x7e3 Mov
	var_87_bool = 0; // 0x7e5 MovB
	
Label_2022:
	Next(var_89_bool, var_88_object); // 0x7e6 ObjFunc
	var_99_bool = var_89_bool; // 0x7e8 Push
	if(var_99_bool == 0) goto Label_2091; // 0x7e9 JumpB
	var_100_bool = 0; // 0x7ea PushV
	var_100_bool = 0; // 0x7eb MovB
	var_101_bool = var_88_object != 0; // 0x7ec NullNeq
	if(var_101_bool == 0) goto Label_2036; // 0x7ed JumpB
	var_102_object = Obj(); // 0x7ee PushV
	func_2771(var_102_object); // 0x7ef Call
	var_105_bool = var_88_object != var_102_object; // 0x7f1 Neq
	if(var_105_bool == 0) goto Label_2036; // 0x7f2 JumpB
	var_100_bool = 1; // 0x7f3 MovB
	
Label_2036:
	if(var_100_bool == 0) goto Label_2090; // 0x7f4 JumpB
	var_87_bool = 1; // 0x7f5 MovB
	var_106_float = 0; var_107_object = Obj(); var_108_float = 0; var_109_int = 0; // 0x7f6 PushV
	var_107_object = var_88_object; // 0x7f7 Mov
	var_108_float = var_86_float; // 0x7f8 Mov
	var_110_int = 0; // 0x7f9 PushV
	func_2138(var_110_int); // 0x7fa Call
	var_109_int = var_110_int; // 0x7fb Mov
	func_2687(var_106_float, var_107_object, var_108_float, var_109_int); // 0x7fd Call
	var_90_float = var_106_float; // 0x7fe Mov
	var_162_bool = 0; var_163_object = Obj(); var_164_string = ""; // 0x800 PushV
	var_163_object = var_88_object; // 0x801 Mov
	var_164_string = "disease"; // 0x802 MovS
	func_2649(var_162_bool, var_163_object, var_164_string); // 0x803 Call
	if(var_162_bool == 0) goto Label_2067; // 0x805 JumpB
	var_165_string = "disease"; // 0x806 PushS
	GetProperty(var_165_string, var_91_float); // 0x807 ObjFunc
	var_166_float = 0.1; // 0x809 PushF
	var_167_bool = var_91_float <= var_166_float; // 0x80a LE
	if(var_167_bool == 0) goto Label_2062; // 0x80b JumpB
	var_91_float = 0; // 0x80c MovI
	goto Label_2064; // 0x80d Jump
	
Label_2064:
	var_168_string = "disease"; // 0x810 PushS
	SetProperty(var_168_string, var_91_float); // 0x811 ObjFunc
	
Label_2067:
	var_169_bool = 0; var_170_object = Obj(); var_171_string = ""; // 0x813 PushV
	var_170_object = var_88_object; // 0x814 Mov
	var_171_string = "fire"; // 0x815 MovS
	func_2649(var_169_bool, var_170_object, var_171_string); // 0x816 Call
	if(var_169_bool == 0) goto Label_2081; // 0x818 JumpB
	var_172_string = "fire"; // 0x819 PushS
	GetProperty(var_172_string, var_92_float); // 0x81a ObjFunc
	var_173_string = "fire"; // 0x81c PushS
	var_174_float = 0.1; // 0x81d PushF
	var_175_int = var_92_float + var_174_float; // 0x81e Add
	SetProperty(var_173_string, var_175_int); // 0x81f ObjFunc
	
Label_2081:
	ReportAttack(var_88_object); // 0x821 Func
	var_176_int = 0; // 0x823 PushV
	func_2140(var_176_int); // 0x824 Call
	ReportHit(var_88_object, var_176_int, var_90_float, var_86_float); // 0x826 Func
	BroadcastPlayerDamage(var_88_object); // 0x828 Func
	
Label_2090:
	goto Label_2022; // 0x82a Jump
	
Label_2062:
	var_177_float = 0.1; // 0x80e PushF
	var_91_float = var_91_float - var_177_float; // 0x80f Sub2
	
Label_2091:
	var_178_bool = 0; // 0x82b PushV
	var_178_bool = 0; // 0x82c MovB
	var_179_bool = 0; // 0x82d PushV
	var_179_bool = 0; // 0x82e MovB
	var_180_bool = var_87_bool; // 0x82f Push
	if(var_180_bool == 0) goto Label_2100; // 0x830 JumpB
	var_181_bool = var_1_bool == 0; // 0x831 Not
	if(var_181_bool == 0) goto Label_2100; // 0x832 JumpB
	var_179_bool = 1; // 0x833 MovB
	
Label_2100:
	if(var_179_bool == 0) goto Label_2105; // 0x834 JumpB
	var_182_float = 0.1; // 0x835 PushF
	var_183_bool = var_85_float < var_182_float; // 0x836 LT
	if(var_183_bool == 0) goto Label_2105; // 0x837 JumpB
	var_178_bool = 1; // 0x838 MovB
	
Label_2105:
	if(var_178_bool == 0) goto Label_2118; // 0x839 JumpB
	var_184_float = 0; var_185_object = Obj(); var_186_float = 0; var_187_int = 0; // 0x83a PushV
	var_188_object = Obj(); // 0x83b PushV
	func_2771(var_188_object); // 0x83c Call
	var_185_object = var_188_object; // 0x83d Mov
	var_186_float = var_86_float; // 0x83f Mov
	var_189_int = 0; // 0x840 PushV
	func_2138(var_189_int); // 0x841 Call
	var_187_int = var_189_int; // 0x842 Mov
	func_2687(var_184_float, var_185_object, var_186_float, var_187_int); // 0x844 Call
	
Label_2118:
	var_190_bool = 0; // 0x846 PushV
	func_2127(var_190_bool); // 0x847 Call
	var_197_bool = var_190_bool == 0; // 0x849 Not
	if(var_197_bool == 0) goto Label_2124; // 0x84a JumpB
	var_1_bool = 1; // 0x84b TMovB
	
Label_2124:
	return 18; // 0x84c Return
}


func_3034()
{
	func_2917(); // 0xbdb Call
	return 0; // 0xbdd Return
}


func_3038()
{
	func_2917(); // 0xbdf Call
	func_2992(); // 0xbe2 Call
	return 0; // 0xbe4 Return
}


func_504(var_328_bool)
{
	var_329_bool = 0; var_330_bool = 0; // 0x1f8 PushV
	IsShooting(var_330_bool); // 0x1f9 Func
	var_328_bool = var_330_bool; // 0x1fb Mov
	return 2; // 0x1fc Return
}


func_509(var_372_string)
{
	var_372_string = "hammer"; // 0x1fd MovS
	return 0; // 0x1fe Return
}


func_511(var_391_float, var_392_bool)
{
	var_393_bool = var_392_bool; // 0x200 Push
	if(var_393_bool == 0) goto Label_516; // 0x201 JumpB
	var_391_float = 0.6; // 0x202 MovF
	goto Label_517; // 0x203 Jump
	
Label_517:
	return 0; // 0x205 Return
	
Label_516:
	var_391_float = 0.3; // 0x204 MovF
}


