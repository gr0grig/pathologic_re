task_0_event_26(var_0_string, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_string = "cleanup"; // 0x1 PushS
	var_9_bool = var_7_bool == var_8_string; // 0x2 Eq
	if(var_9_bool == 0) goto Label_11; // 0x3 JumpB
	var_10_object = Obj(); // 0x4 PushV
	func_1339(var_10_object); // 0x5 NEW_2
	RemoveActor(var_10_object); // 0x7 Func
	Hold(); // 0x9 Func
	
Label_11:
	return 0; // 0xb Return
}


task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	StopGroup0(); // 0x14 Func
	sync(); // 0x16 Func
	return 0; // 0x18 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x39 PushV
	IsOverrideActive(var_9_bool); // 0x3a Func
	var_10_bool = var_9_bool == 0; // 0x3c Not
	if(var_10_bool == 0) goto Label_66; // 0x3d JumpB
	var_11_object = Obj(); // 0x3e PushV
	var_11_object = var_7_bool; // 0x3f Mov
	func_1472(var_11_object); // 0x40 NEW_2
	
Label_66:
	return 2; // 0x42 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	return 0; // 0xb9 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool)
{
	return 0; // 0xbb Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	return 0; // 0xbd Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	func_214(); // 0xe0 NEW_2
	var_9_object = Obj(); // 0xe2 PushV
	var_9_object = var_7_bool; // 0xe3 Mov
	func_1637(); // 0xe4 NEW_2
	return 0; // 0xe6 Return
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = var_7_bool == var_0_object; // 0xe8 Eq
	if(var_8_bool == 0) goto Label_239; // 0xe9 JumpB
	var_9_int = 100; // 0xea PushI
	KillTimer(var_9_int); // 0xeb Func
	Face(var_0_object); // 0xed Func
	
Label_239:
	return 0; // 0xef Return
}


task_2_event_4(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = var_7_bool == var_0_object; // 0xf1 Eq
	if(var_8_bool == 0) goto Label_251; // 0xf2 JumpB
	var_9_int = 100; // 0xf3 PushI
	var_10_float = 3.0; // 0xf4 PushF
	SetTimer(var_9_int, var_10_float); // 0xf5 Func
	var_11_object = Obj(); // 0xf7 PushV
	var_11_object = var_0_object; // 0xf8 MovT
	func_1162(); // 0xf9 NEW_2
	
Label_251:
	return 0; // 0xfb Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_96_object)
	{
	var_97_bool = 0; var_98_object = Obj(); // 0xfd PushV
	var_98_object = var_96_object; // 0xfe Mov
	func_1012(var_97_bool, var_98_object); // 0xff NEW_2
	var_125_bool = var_97_bool == 0; // 0x101 Not
	if(var_125_bool == 0) goto Label_264; // 0x102 JumpB
	var_126_object = Obj(); // 0x103 PushV
	var_126_object = var_96_object; // 0x104 Mov
	func_1809(var_126_object); // 0x105 NEW_2
	return 0; // 0x107 Return
	
Label_264:
	func_214(); // 0x109 NEW_2
	var_142_object = Obj(); // 0x10b PushV
	var_142_object = var_96_object; // 0x10c Mov
	func_1833(var_142_object); // 0x10d NEW_2
	return 0; // 0x10f Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; // 0x111 PushV
	var_11_object = var_7_cvector; // 0x112 Mov
	var_12_object = var_8_cvector; // 0x113 Mov
	var_13_bool = var_9_bool; // 0x114 Mov
	func_1952(var_10_bool, var_11_object, var_12_object, var_13_bool); // 0x115 NEW_2
	if(var_10_bool == 0) goto Label_284; // 0x117 JumpB
	var_96_object = Obj(); // 0x118 PushV
	var_96_object = var_7_cvector; // 0x119 Mov
	func_252(); // 0x11a NEW_2
	
Label_284:
	return 0; // 0x11c Return
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_object = Obj(); // 0x11e PushV
	var_9_object = var_7_bool; // 0x11f Mov
	func_1924(var_8_bool, var_9_object); // 0x120 NEW_2
	if(var_8_bool == 0) goto Label_298; // 0x122 JumpB
	func_214(); // 0x124 NEW_2
	var_128_object = Obj(); // 0x126 PushV
	var_128_object = var_7_bool; // 0x127 Mov
	func_1946(var_128_object); // 0x128 NEW_2
	
Label_298:
	return 0; // 0x12a Return
}


task_2_event_7(var_0_object, var_1_int, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_int = 100; // 0x12c PushI
	var_9_bool = var_7_bool != var_8_int; // 0x12d Neq
	if(var_9_bool == 0) goto Label_304; // 0x12e JumpB
	return 0; // 0x12f Return
	
Label_304:
	var_10_int = 100; // 0x130 PushI
	KillTimer(var_10_int); // 0x131 Func
	StopGroup0(); // 0x133 Func
	return 0; // 0x135 Return
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; // 0x1c7 PushV
	var_8_bool = 0; // 0x1c8 MovB
	var_9_object = var_2_object; // 0x1c9 PushT
	if(var_9_object == 0) goto Label_462; // 0x1ca JumpB
	var_10_bool = var_7_bool == var_0_object; // 0x1cb Eq
	if(var_10_bool == 0) goto Label_462; // 0x1cc JumpB
	var_8_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_8_bool == 0) goto Label_467; // 0x1ce JumpB
	var_11_object = Obj(); // 0x1cf PushV
	var_11_object = var_0_object; // 0x1d0 MovT
	func_1162(); // 0x1d1 NEW_2
	
Label_467:
	return 0; // 0x1d3 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; // 0x1d5 PushV
	var_8_bool = 0; // 0x1d6 MovB
	var_9_object = var_2_object; // 0x1d7 PushT
	if(var_9_object == 0) goto Label_476; // 0x1d8 JumpB
	var_10_bool = var_7_bool == var_0_object; // 0x1d9 Eq
	if(var_10_bool == 0) goto Label_476; // 0x1da JumpB
	var_8_bool = 1; // 0x1db MovB
	
Label_476:
	if(var_8_bool == 0) goto Label_484; // 0x1dc JumpB
	var_11_string = "@Stop hunt"; // 0x1dd PushS
	Trace(var_11_string); // 0x1de Func
	StopAnimation(); // 0x1e0 Func
	StopGroup0(); // 0x1e2 Func
	
Label_484:
	return 0; // 0x1e4 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_96_object)
	{
	var_97_bool = 0; var_98_object = Obj(); // 0x264 PushV
	var_98_object = var_96_object; // 0x265 Mov
	func_1012(var_97_bool, var_98_object); // 0x266 NEW_2
	var_125_bool = var_97_bool == 0; // 0x268 Not
	if(var_125_bool == 0) goto Label_619; // 0x269 JumpB
	return 0; // 0x26a Return
	
Label_619:
	var_126_object = Obj(); // 0x26b PushV
	var_126_object = var_96_object; // 0x26c Mov
	func_1809(var_126_object); // 0x26d NEW_2
	var_141_bool = var_96_object == var_0_object; // 0x26f Eq
	if(var_141_bool == 0) goto Label_627; // 0x270 JumpB
	var_1_object = 0; // 0x271 SetNullT
	goto Label_634; // 0x272 Jump
	
Label_634:
	return 0; // 0x27a Return
	
Label_627:
	var_1_object = var_96_object; // 0x273 TMov
	var_142_object = var_2_object; // 0x274 PushT
	if(var_142_object == 0) goto Label_634; // 0x275 JumpB
	StopAnimation(); // 0x276 Func
	StopGroup0(); // 0x278 Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0; // 0x27c PushV
	var_11_object = var_7_cvector; // 0x27d Mov
	var_12_object = var_8_cvector; // 0x27e Mov
	var_13_bool = var_9_bool; // 0x27f Mov
	func_1952(var_10_bool, var_11_object, var_12_object, var_13_bool); // 0x280 NEW_2
	if(var_10_bool == 0) goto Label_647; // 0x282 JumpB
	var_96_object = Obj(); // 0x283 PushV
	var_96_object = var_7_cvector; // 0x284 Mov
	func_611(); // 0x285 NEW_2
	
Label_647:
	return 0; // 0x287 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x29b PushV
	var_10_object = GlobalVars[0]; // 0x29c PushGE
	in(var_9_bool, var_7_object); // 0x29d ObjFunc
	var_11_bool = var_9_bool == 0; // 0x29f Not
	if(var_11_bool == 0) goto Label_677; // 0x2a0 JumpB
	var_12_object = Obj(); // 0x2a1 PushV
	var_12_object = var_7_object; // 0x2a2 Mov
	func_648(); // 0x2a3 NEW_2
	
Label_677:
	return 2; // 0x2a5 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x2a6 PushV
	var_10_string = "attack"; // 0x2a7 PushS
	var_11_bool = var_7_string == var_10_string; // 0x2a8 Eq
	if(var_11_bool == 0) goto Label_695; // 0x2a9 JumpB
	var_12_object = Obj(); // 0x2aa PushV
	func_874(var_12_object); // 0x2ab NEW_2
	var_9_object = var_12_object; // 0x2ac Mov
	func_839(); // 0x2af NEW_2
	var_16_object = Obj(); // 0x2b1 PushV
	var_16_object = var_9_object; // 0x2b2 Mov
	func_1833(var_16_object); // 0x2b3 NEW_2
	var_9_object = 0; // 0x2b5 SetNull
	goto Label_699; // 0x2b6 Jump
	
Label_699:
	return 2; // 0x2bb Return
	
Label_695:
	var_282_string = "cleanup"; // 0x2b7 PushS
	var_283_bool = var_7_string == var_282_string; // 0x2b8 Eq
	if(var_283_bool == 0) goto Label_699; // 0x2b9 JumpB
	var_2_object = 1; // 0x2ba TMovB
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = ""; // 0x2bd PushV
	var_9_string = "quest_d10_01"; // 0x2be MovS
	var_10_string = "soldier_fight"; // 0x2bf MovS
	func_1434(var_8_bool, var_9_string, var_10_string); // 0x2c0 NEW_2
	return 0; // 0x2c2 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_bool)
{
	return 0; // 0x2c4 Return
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2c5 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x2c6 PushV
	var_11_object = var_7_object; // 0x2c7 Mov
	func_1012(var_10_bool, var_11_object); // 0x2c8 NEW_2
	var_44_bool = var_10_bool == 0; // 0x2ca Not
	if(var_44_bool == 0) goto Label_717; // 0x2cb JumpB
	return 2; // 0x2cc Return
	
Label_717:
	var_45_object = GlobalVars[0]; // 0x2cd PushGE
	in(var_9_bool, var_7_object); // 0x2ce ObjFunc
	var_46_bool = var_9_bool; // 0x2d0 Push
	if(var_46_bool == 0) goto Label_731; // 0x2d1 JumpB
	func_839(); // 0x2d3 NEW_2
	var_47_object = Obj(); // 0x2d5 PushV
	var_47_object = var_7_object; // 0x2d6 Mov
	TaskCall(2); // 0x2d7 TaskCall
	func_190(var_48_object, var_47_object); // 0x2d8 NEW_2
	TaskReturn(); // 0x2d9 TaskReturn
	
Label_731:
	return 2; // 0x2db Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_object = Obj(); // 0x2e6 PushV
	var_9_object = var_7_object; // 0x2e7 Mov
	func_1924(var_8_bool, var_9_object); // 0x2e8 NEW_2
	if(var_8_bool == 0) goto Label_754; // 0x2ea JumpB
	func_839(); // 0x2ec NEW_2
	var_127_object = Obj(); // 0x2ee PushV
	var_127_object = var_7_object; // 0x2ef Mov
	func_1978(var_127_object); // 0x2f0 NEW_2
	
Label_754:
	return 0; // 0x2f2 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; // 0x647 PushV
	var_11_object = var_7_object; // 0x648 Mov
	var_12_int = var_8_int; // 0x649 Mov
	var_13_float = var_9_float; // 0x64a Mov
	func_1080(var_11_object, var_12_int, var_13_float); // 0x64b NEW_2
	return 0; // 0x64d Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_int, var_9_float, var_10_float, var_11_cvector, var_12_cvector)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x64f PushV
	var_13_object = var_7_object; // 0x650 Mov
	var_14_int = var_8_int; // 0x651 Mov
	var_15_float = var_9_float; // 0x652 Mov
	var_16_cvector = var_11_cvector; // 0x653 Mov
	var_17_cvector = var_12_cvector; // 0x654 Mov
	func_1148(var_15_float, var_16_cvector, var_17_cvector); // 0x655 NEW_2
	return 0; // 0x657 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_string)
{
	var_9_float = 0; var_10_float = 0; // 0x658 PushV
	var_11_string = "health"; // 0x659 PushS
	var_12_bool = var_8_string == var_11_string; // 0x65a Eq
	if(var_12_bool == 0) goto Label_1636; // 0x65b JumpB
	var_13_string = "health"; // 0x65c PushS
	GetProperty(var_13_string, var_10_float); // 0x65d Func
	var_14_int = 0; // 0x65f PushI
	var_15_bool = var_10_float <= var_14_int; // 0x660 LE
	if(var_15_bool == 0) goto Label_1636; // 0x661 JumpB
	SignalDeath(var_7_object); // 0x662 Func
	
Label_1636:
	return 2; // 0x664 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_object = Obj(); // 0x666 PushV
	var_9_object = var_7_object; // 0x667 Mov
	func_881(var_8_bool, var_9_object); // 0x668 NEW_2
	if(var_8_bool == 0) goto Label_1650; // 0x66a JumpB
	var_12_object = Obj(); // 0x66b PushV
	func_1339(var_12_object); // 0x66c NEW_2
	var_15_float = 0.0; // 0x66e PushF
	var_16_bool = 1; // 0x66f PushB
	ReportReputationChange(var_7_object, var_12_object, var_15_float, var_16_bool); // 0x670 Func
	
Label_1650:
	var_17_object = Obj(); // 0x672 PushV
	var_17_object = var_7_object; // 0x673 Mov
	func_1998(var_17_object); // 0x674 NEW_2
	return 0; // 0x676 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	var_7_object = Obj(); // 0x7c6 PushV
	func_1339(var_7_object); // 0x7c7 NEW_2
	RemoveActor(var_7_object); // 0x7c9 Func
	Hold(); // 0x7cb Func
	return 0; // 0x7cd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	var_7_bool = 0; // 0x28d PushV
	func_1180(var_7_bool); // 0x28e NEW_2
	var_10_bool = var_7_bool == 0; // 0x290 Not
	if(var_10_bool == 0) goto Label_663; // 0x291 JumpB
	TaskCall(0); // 0x293 TaskCall
	func_12(); // 0x294 NEW_2
	TaskReturn(); // 0x295 TaskReturn
	
Label_663:
	func_732(); // 0x298 NEW_2
	return 0; // 0x29a Return
}


func_898(var_247_float, var_248_object, var_249_float, var_250_int)
{
	var_251_int = 0; var_252_string = ""; var_253_int = 0; var_254_float = 0; var_255_float = 0; var_256_float = 0; var_257_int = 0; var_258_string = ""; var_259_int = 0; var_260_float = 0; var_261_float = 0; var_262_float = 0; // 0x382 PushV
	var_263_bool = 0; var_264_object = Obj(); var_265_string = ""; // 0x383 PushV
	var_264_object = var_248_object; // 0x384 Mov
	var_265_string = "health"; // 0x385 MovS
	func_886(var_263_bool, var_264_object, var_265_string); // 0x386 NEW_2
	var_266_bool = var_263_bool == 0; // 0x388 Not
	if(var_266_bool == 0) goto Label_908; // 0x389 JumpB
	var_247_float = 0.0; // 0x38a MovF
	return 12; // 0x38b Return
	
Label_908:
	var_267_bool = 0; var_268_object = Obj(); var_269_string = ""; // 0x38c PushV
	var_268_object = var_248_object; // 0x38d Mov
	var_269_string = "armor"; // 0x38e MovS
	func_886(var_267_bool, var_268_object, var_269_string); // 0x38f NEW_2
	var_270_bool = var_267_bool == 0; // 0x391 Not
	if(var_270_bool == 0) goto Label_917; // 0x392 JumpB
	var_257_int = 0; // 0x393 MovI
	goto Label_920; // 0x394 Jump
	
Label_920:
	var_271_string = "armor_"; // 0x398 PushS
	var_272_string = ""; var_273_int = 0; // 0x399 PushV
	var_273_int = var_250_int; // 0x39a Mov
	func_845(var_272_string, var_273_int); // 0x39b NEW_2
	var_258_string = var_271_string + var_272_string; // 0x39d Add2
	var_278_bool = 0; var_279_object = Obj(); var_280_string = ""; // 0x39e PushV
	var_279_object = var_248_object; // 0x39f Mov
	var_280_string = var_258_string; // 0x3a0 Mov
	func_886(var_278_bool, var_279_object, var_280_string); // 0x3a1 NEW_2
	var_281_bool = var_278_bool == 0; // 0x3a3 Not
	if(var_281_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_259_int = 0; // 0x3a5 MovI
	goto Label_937; // 0x3a6 Jump
	
Label_937:
	var_282_float = 0; var_283_float = 0; var_284_float = 0; // 0x3a9 PushV
	var_285_int = var_257_int + var_259_int; // 0x3aa Add
	var_286_float = 100.0; // 0x3ab PushF
	var_283_float = var_285_int / var_285_int; // 0x3ac Div2
	var_284_float = 1; // 0x3ad MovI
	func_1359(var_282_float, var_283_float, var_284_float); // 0x3ae NEW_2
	var_260_float = var_282_float; // 0x3af Mov
	var_288_string = "health"; // 0x3b1 PushS
	GetProperty(var_288_string, var_261_float); // 0x3b2 ObjFunc
	var_289_int = 1; // 0x3b4 PushI
	var_290_int = var_289_int - var_260_float; // 0x3b5 Sub
	var_262_float = var_249_float * var_290_int; // 0x3b6 Mult2
	var_291_string = "health"; // 0x3b7 PushS
	var_292_float = 0; var_293_float = 0; var_294_float = 0; var_295_float = 0; // 0x3b8 PushV
	var_293_float = var_261_float - var_262_float; // 0x3b9 Sub2
	var_294_float = 0; // 0x3ba MovI
	var_295_float = 1; // 0x3bb MovI
	func_1366(var_292_float, var_293_float, var_294_float, var_295_float); // 0x3bc NEW_2
	SetProperty(var_291_string, var_292_float); // 0x3be ObjFunc
	var_298_bool = 0; var_299_object = Obj(); // 0x3c0 PushV
	var_299_object = var_248_object; // 0x3c1 Mov
	func_881(var_298_bool, var_299_object); // 0x3c2 NEW_2
	if(var_298_bool == 0) goto Label_969; // 0x3c4 JumpB
	var_300_float = 0; // 0x3c5 PushV
	var_300_float = -var_262_float; // 0x3c6 Neg2
	func_1424(var_300_float); // 0x3c7 NEW_2
	
Label_969:
	var_247_float = var_262_float; // 0x3c9 Mov
	return 12; // 0x3ca Return
	
Label_935:
	GetProperty(var_258_string, var_259_int); // 0x3a7 ObjFunc
	
Label_917:
	var_304_string = "armor"; // 0x395 PushS
	GetProperty(var_304_string, var_257_int); // 0x396 ObjFunc
}


func_1924(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x784 PushV
	var_12_bool = 0; var_13_object = Obj(); // 0x785 PushV
	var_13_object = var_9_object; // 0x786 Mov
	func_1012(var_12_bool, var_13_object); // 0x787 NEW_2
	var_46_bool = var_12_bool == 0; // 0x789 Not
	if(var_46_bool == 0) goto Label_1933; // 0x78a JumpB
	var_8_bool = 0; // 0x78b MovB
	return 2; // 0x78c Return
	
Label_1933:
	var_47_object = GlobalVars[0]; // 0x78d PushGE
	in(var_11_bool, var_9_object); // 0x78e ObjFunc
	var_48_bool = var_11_bool; // 0x790 Push
	if(var_48_bool == 0) goto Label_1940; // 0x791 JumpB
	var_8_bool = 1; // 0x792 MovB
	return 2; // 0x793 Return
	
Label_1940:
	var_49_bool = 0; var_50_object = Obj(); // 0x794 PushV
	var_50_object = var_9_object; // 0x795 Mov
	func_1844(var_49_bool, var_50_object); // 0x796 NEW_2
	var_8_bool = var_49_bool; // 0x797 Mov
	return 2; // 0x799 Return
}


func_1798(var_132_object, var_133_bool)
{
	var_134_object = Obj(); var_135_bool = 0; // 0x707 PushV
	var_134_object = var_132_object; // 0x708 Mov
	var_135_bool = var_133_bool; // 0x709 Mov
	TaskCall(3); // 0x70a TaskCall
	func_310(var_136_object, var_137_object, var_138_bool, var_134_object, var_135_bool); // 0x70b NEW_2
	TaskReturn(); // 0x70c TaskReturn
	ResetAAS(); // 0x70e Func
	return 0; // 0x710 Return
}


func_648()
{
	func_839(); // 0x28a NEW_2
	return 0; // 0x28c Return
}


func_1162()
{
	var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); // 0x48a PushV
	GetPosition(var_323_cvector); // 0x48b ObjFunc
	GetPosition(var_324_cvector); // 0x48d Func
	var_325_cvector = var_323_cvector - var_324_cvector; // 0x48f Sub2
	var_326_float = GetByIndex(var_325_cvector, 0); // 0x490 PushE
	var_327_float = GetByIndex(var_325_cvector, 2); // 0x491 PushE
	RotateAsync(var_326_float, var_327_float); // 0x492 Func
	return 6; // 0x494 Return
}


func_12()
{
	
Label_12:
	Hold(); // 0xc Func
	var_11_bool = 0; // 0xe PushV
	func_1180(var_11_bool); // 0xf NEW_2
	var_12_bool = var_11_bool == 0; // 0x11 Not
	if(var_12_bool == 0) goto Label_12; // 0x12 JumpB
	return 0; // 0x13 Return
}


func_1036(var_24_object)
{
	var_25_bool = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; // 0x40c PushV
	var_39_bool = var_24_object == 0; // 0x40d NullEq
	if(var_39_bool == 0) goto Label_1040; // 0x40e JumpB
	return 14; // 0x40f Return
	
Label_1040:
	IsDead(var_32_bool); // 0x410 Func
	var_40_bool = var_32_bool; // 0x412 Push
	if(var_40_bool == 0) goto Label_1045; // 0x413 JumpB
	return 14; // 0x414 Return
	
Label_1045:
	GetSecondaryAnimationType(var_33_int); // 0x415 Func
	var_41_int = 0; // 0x417 PushI
	var_42_bool = var_33_int < var_41_int; // 0x418 LT
	if(var_42_bool == 0) goto Label_1051; // 0x419 JumpB
	return 14; // 0x41a Return
	
Label_1051:
	GetPosition(var_34_cvector); // 0x41b ObjFunc
	GetPosition(var_35_cvector); // 0x41d Func
	GetDirection(var_36_cvector); // 0x41f Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x421 Sub2
	var_43_float = GetByIndex(var_37_cvector, 0); // 0x422 PushE
	var_44_float = GetByIndex(var_36_cvector, 0); // 0x423 PushE
	var_45_float = var_43_float * var_44_float; // 0x424 Mult
	var_46_float = GetByIndex(var_37_cvector, 2); // 0x425 PushE
	var_47_float = GetByIndex(var_36_cvector, 2); // 0x426 PushE
	var_48_float = var_46_float * var_47_float; // 0x427 Mult
	var_49_int = var_45_float + var_48_float; // 0x428 Add
	var_50_int = 0; // 0x429 PushI
	var_51_bool = var_49_int >= var_50_int; // 0x42a GE
	if(var_51_bool == 0) goto Label_1070; // 0x42b JumpB
	var_38_string = "fhit"; // 0x42c MovS
	goto Label_1071; // 0x42d Jump
	
Label_1071:
	var_52_string = "hit_react"; // 0x42f PushS
	var_53_string = "1"; // 0x430 PushS
	var_54_int = var_38_string + var_53_string; // 0x431 Add
	var_55_string = "2"; // 0x432 PushS
	var_56_int = var_38_string + var_55_string; // 0x433 Add
	var_57_int = -10; // 0x434 PushI
	FadeSecondaryAnimation(var_52_string, var_54_int, var_56_int, var_57_int); // 0x435 Func
	return 14; // 0x437 Return
	
Label_1070:
	var_38_string = "bhit"; // 0x42e MovS
}


func_1424(var_300_float)
{
	var_301_object = Obj(); var_302_object = Obj(); // 0x590 PushV
	CreateFloatVector(var_302_object); // 0x591 Func
	add(var_300_float); // 0x593 ObjFunc
	var_303_int = 15; // 0x595 PushI
	SendWorldWndMessage(var_303_int, var_302_object); // 0x596 Func
	return 2; // 0x598 Return
}


func_1809(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x711 PushV
	var_20_bool = var_17_object == 0; // 0x712 NullEq
	if(var_20_bool == 0) goto Label_1813; // 0x713 JumpB
	return 2; // 0x714 Return
	
Label_1813:
	var_21_object = GlobalVars[0]; // 0x715 PushGE
	in(var_19_bool, var_17_object); // 0x716 ObjFunc
	var_22_bool = var_19_bool == 0; // 0x718 Not
	if(var_22_bool == 0) goto Label_1821; // 0x719 JumpB
	var_23_object = GlobalVars[0]; // 0x71a PushGE
	add(var_17_object); // 0x71b ObjFunc
	
Label_1821:
	var_24_bool = 0; var_25_object = Obj(); // 0x71d PushV
	var_25_object = var_17_object; // 0x71e Mov
	func_881(var_24_bool, var_25_object); // 0x71f NEW_2
	if(var_24_bool == 0) goto Label_1832; // 0x721 JumpB
	var_28_object = Obj(); // 0x722 PushV
	func_1339(var_28_object); // 0x723 NEW_2
	var_31_float = 0.0; // 0x725 PushF
	ReportReputationChange(var_17_object, var_28_object, var_31_float); // 0x726 Func
	
Label_1832:
	return 2; // 0x728 Return
}


func_1557()
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x615 PushV
	var_26_int = 0; // 0x616 PushI
	ClearSubContainer(var_26_int); // 0x617 Func
	var_27_int = 0; var_28_int = 0; // 0x619 PushV
	var_27_int = 500; // 0x61a MovI
	var_28_int = 1000; // 0x61b MovI
	func_1485(var_27_int, var_28_int); // 0x61c NEW_2
	var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0; // 0x61e PushV
	var_46_string = "rifle_ammo"; // 0x61f MovS
	var_47_int = 1; // 0x620 MovI
	var_48_int = 3; // 0x621 MovI
	var_49_int = 3; // 0x622 MovI
	func_1196(var_46_string, var_47_int, var_48_int, var_49_int); // 0x623 NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x625 PushV
	var_62_string = "rusk"; // 0x626 MovS
	var_63_int = 1; // 0x627 MovI
	var_64_int = 3; // 0x628 MovI
	var_65_int = 2; // 0x629 MovI
	func_1196(var_62_string, var_63_int, var_64_int, var_65_int); // 0x62a NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x62c PushV
	var_66_string = "bandage"; // 0x62d MovS
	var_67_int = 1; // 0x62e MovI
	var_68_int = 6; // 0x62f MovI
	func_1185(var_66_string, var_67_int, var_68_int); // 0x630 NEW_2
	var_75_string = ""; var_76_int = 0; var_77_int = 0; // 0x632 PushV
	var_75_string = "tourniquet"; // 0x633 MovS
	var_76_int = 1; // 0x634 MovI
	var_77_int = 6; // 0x635 MovI
	func_1185(var_75_string, var_76_int, var_77_int); // 0x636 NEW_2
	return 4; // 0x638 Return
}


func_1173(var_238_float)
{
	var_240_float = 0; var_241_float = 0; var_242_float = 0; var_243_float = 0; // 0x495 PushV
	GetEyesHeight(var_242_float); // 0x496 Func
	GetEyesHeight(var_243_float); // 0x498 ObjFunc
	var_238_float = var_243_float - var_242_float; // 0x49a Sub2
	return 4; // 0x49b Return
}


func_25(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x1a PushV
	var_21_object = var_19_object; // 0x1b Mov
	func_881(var_20_bool, var_21_object); // 0x1c NEW_2
	if(var_20_bool == 0) goto Label_34; // 0x1e JumpB
	func_1557(); // 0x20 NEW_2
	
Label_34:
	func_1533(); // 0x23 NEW_2
	var_98_object = Obj(); // 0x25 PushV
	var_98_object = var_19_object; // 0x26 Mov
	func_42(var_98_object); // 0x27 NEW_2
	return 0; // 0x29 Return
}


func_1434(var_8_bool, var_9_string, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x59a PushV
	FindActor(var_12_object, var_9_string); // 0x59b Func
	var_13_bool = var_12_object == 0; // 0x59d NullEq
	if(var_13_bool == 0) goto Label_1441; // 0x59e JumpB
	var_8_bool = 0; // 0x59f MovB
	return 2; // 0x5a0 Return
	
Label_1441:
	Trigger(var_12_object, var_10_string); // 0x5a1 Func
	var_8_bool = 1; // 0x5a3 MovB
	return 2; // 0x5a4 Return
}


func_1946(var_128_object)
{
	var_129_object = Obj(); // 0x79b PushV
	var_129_object = var_128_object; // 0x79c Mov
	func_1978(var_129_object); // 0x79d NEW_2
	return 0; // 0x79f Return
}


func_1180(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x49c PushV
	IsLoaded(var_9_bool); // 0x49d Func
	var_7_bool = var_9_bool; // 0x49f Mov
	return 2; // 0x4a0 Return
}


func_158(var_121_string)
{
	RemoveRTEnvelope(); // 0x9f Func
	SetDeathState(); // 0xa1 Func
	Stop(); // 0xa3 Func
	StopAsync(); // 0xa5 Func
	StopSecondaryAnimation(); // 0xa7 Func
	var_122_string = ""; // 0xa9 PushV
	var_122_string = var_121_string; // 0xaa Mov
	func_1211(var_122_string); // 0xab NEW_2
	var_151_string = "all"; // 0xad PushS
	PlayAnimation(var_151_string, var_121_string); // 0xae Func
	WaitForAnimEnd(); // 0xb0 Func
	var_152_string = "all"; // 0xb2 PushS
	LockAnimationEnd(var_152_string, var_121_string); // 0xb3 Func
	RemoveEnvelope(); // 0xb5 Func
	return 0; // 0xb7 Return
}


func_1952(var_10_bool, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x7a0 PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; // 0x7a1 PushV
	var_17_object = var_12_object; // 0x7a2 Mov
	var_18_bool = !var_13_bool; // 0x7a3 Not2
	func_1655(var_16_bool, var_17_object, var_18_bool); // 0x7a4 NEW_2
	if(var_16_bool == 0) goto Label_1976; // 0x7a6 JumpB
	CanSee(var_15_bool, var_11_object); // 0x7a7 Func
	var_84_bool = 0; // 0x7a9 PushV
	var_84_bool = 1; // 0x7aa MovB
	var_85_bool = var_15_bool; // 0x7ab Push
	if(var_85_bool == 0) goto Label_1973; // 0x7ac JumpB
	var_86_float = 0; var_87_object = Obj(); // 0x7ad PushV
	var_87_object = var_11_object; // 0x7ae Mov
	func_866(var_87_object); // 0x7af NEW_2
	var_94_float = 490000.0; // 0x7b1 PushF
	var_95_bool = var_86_float <= var_94_float; // 0x7b2 LE
	if(var_95_bool == 0) goto Label_1973; // 0x7b3 JumpB
	var_84_bool = 0; // 0x7b4 MovB
	
Label_1973:
	if(var_84_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_10_bool = 1; // 0x7b6 MovB
	return 2; // 0x7b7 Return
	
Label_1976:
	var_10_bool = 0; // 0x7b8 MovB
	return 2; // 0x7b9 Return
}


func_1185(var_66_string, var_67_int, var_68_int)
{
	var_69_bool = 0; var_70_bool = 0; // 0x4a1 PushV
	var_71_bool = 0; var_72_int = 0; var_73_int = 0; // 0x4a2 PushV
	var_72_int = var_67_int; // 0x4a3 Mov
	var_73_int = var_68_int; // 0x4a4 Mov
	func_1377(var_71_bool, var_72_int, var_73_int); // 0x4a5 NEW_2
	if(var_71_bool == 0) goto Label_1195; // 0x4a7 JumpB
	var_74_int = 0; // 0x4a8 PushI
	AddItem(var_70_bool, var_66_string, var_74_int); // 0x4a9 Func
	
Label_1195:
	return 2; // 0x4ab Return
}


func_1446(var_143_object)
{
	var_144_bool = 0; var_145_bool = 0; // 0x5a6 PushV
	IsPlayerActor(var_143_object, var_145_bool); // 0x5a7 Func
	var_146_bool = var_145_bool; // 0x5a9 Push
	if(var_146_bool == 0) goto Label_1454; // 0x5aa JumpB
	var_147_string = "attack"; // 0x5ab PushS
	PlayGlobalMusic(var_147_string); // 0x5ac Func
	
Label_1454:
	return 2; // 0x5ae Return
}


func_1833(var_16_object)
{
	var_17_object = Obj(); // 0x72a PushV
	var_17_object = var_16_object; // 0x72b Mov
	func_1809(var_17_object); // 0x72c NEW_2
	var_32_object = Obj(); var_33_bool = 0; // 0x72e PushV
	var_32_object = var_16_object; // 0x72f Mov
	var_33_bool = 1; // 0x730 MovB
	func_1798(var_32_object, var_33_bool); // 0x731 NEW_2
	return 0; // 0x733 Return
}


func_42(var_98_object)
{
	EventDisable(0); // 0x2b EventDisable
	var_99_object = Obj(); // 0x2c PushV
	var_99_object = var_98_object; // 0x2d Mov
	func_67(var_99_object); // 0x2e NEW_2
	var_179_int = 50; // 0x30 PushI
	var_180_int = 40; // 0x31 PushI
	SetRTEnvelope(var_179_int, var_180_int); // 0x32 Func
	EventEnable(0); // 0x34 EventEnable
	
Label_53:
	Hold(); // 0x35 Func
	goto Label_53; // 0x37 Jump
}


func_1196(var_46_string, var_47_int, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x4ac PushV
	var_54_bool = 0; var_55_int = 0; var_56_int = 0; // 0x4ad PushV
	var_55_int = var_47_int; // 0x4ae Mov
	var_56_int = var_48_int; // 0x4af Mov
	func_1377(var_54_bool, var_55_int, var_56_int); // 0x4b0 NEW_2
	if(var_54_bool == 0) goto Label_1210; // 0x4b2 JumpB
	irand(var_52_int, var_49_int); // 0x4b3 Func
	var_59_int = 0; // 0x4b5 PushI
	var_60_int = 1; // 0x4b6 PushI
	var_61_int = var_52_int + var_60_int; // 0x4b7 Add
	AddItem(var_53_bool, var_46_string, var_59_int, var_61_int); // 0x4b8 Func
	
Label_1210:
	return 4; // 0x4ba Return
}


func_1455()
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x5af PushV
	GetScene(var_149_object); // 0x5b0 Func
	var_150_string = "battle"; // 0x5b2 PushS
	var_151_object = Obj(); // 0x5b3 PushV
	func_1339(var_151_object); // 0x5b4 NEW_2
	BroadcastMessage(var_150_string, var_151_object, var_149_object); // 0x5b6 Func
	return 2; // 0x5b8 Return
}


func_1791()
{
	var_13_object = GlobalVars[0]; // 0x6ff PushGE
	var_14_object = Obj(); // 0x700 PushV
	func_1382(var_14_object); // 0x701 NEW_2
	var_13_object = var_14_object; // 0x702 Mov
	GlobalVars[0] = var_13_object; // 0x704 PopGE
	return 0; // 0x705 Return
}


func_1844(var_49_bool, var_50_object)
{
	var_51_float = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_string = ""; var_56_float = 0; // 0x734 PushV
	var_57_bool = 0; var_58_object = Obj(); // 0x735 PushV
	var_58_object = var_50_object; // 0x736 Mov
	func_1012(var_57_bool, var_58_object); // 0x737 NEW_2
	var_59_bool = var_57_bool == 0; // 0x739 Not
	if(var_59_bool == 0) goto Label_1853; // 0x73a JumpB
	var_49_bool = 0; // 0x73b MovB
	return 6; // 0x73c Return
	
Label_1853:
	var_60_bool = 0; var_61_object = Obj(); // 0x73d PushV
	var_61_object = var_50_object; // 0x73e Mov
	func_881(var_60_bool, var_61_object); // 0x73f NEW_2
	if(var_60_bool == 0) goto Label_1864; // 0x741 JumpB
	var_64_string = "reputation"; // 0x742 PushS
	GetProperty(var_64_string, var_54_float); // 0x743 ObjFunc
	var_65_float = 0.33; // 0x745 PushF
	var_49_bool = var_54_float < var_65_float; // 0x746 LT2
	return 6; // 0x747 Return
	
Label_1864:
	var_66_bool = 0; var_67_object = Obj(); var_68_string = ""; // 0x748 PushV
	var_67_object = var_50_object; // 0x749 Mov
	var_68_string = "class"; // 0x74a MovS
	func_886(var_66_bool, var_67_object, var_68_string); // 0x74b NEW_2
	var_69_bool = var_66_bool == 0; // 0x74d Not
	if(var_69_bool == 0) goto Label_1873; // 0x74e JumpB
	var_49_bool = 0; // 0x74f MovB
	return 6; // 0x750 Return
	
Label_1873:
	var_70_string = "class"; // 0x751 PushS
	GetProperty(var_70_string, var_55_string); // 0x752 ObjFunc
	var_71_bool = 0; // 0x754 PushV
	var_71_bool = 1; // 0x755 MovB
	var_72_bool = 0; // 0x756 PushV
	var_72_bool = 1; // 0x757 MovB
	var_73_string = "bomber"; // 0x758 PushS
	var_74_bool = var_55_string == var_73_string; // 0x759 Eq
	if(var_74_bool == 0) goto Label_1887; // 0x75a JumpB
	var_75_string = "hunter"; // 0x75b PushS
	var_76_bool = var_55_string == var_75_string; // 0x75c Eq
	if(var_76_bool == 0) goto Label_1887; // 0x75d JumpB
	var_72_bool = 0; // 0x75e MovB
	
Label_1887:
	if(var_72_bool == 0) goto Label_1892; // 0x75f JumpB
	var_77_string = "grabitel"; // 0x760 PushS
	var_78_bool = var_55_string == var_77_string; // 0x761 Eq
	if(var_78_bool == 0) goto Label_1892; // 0x762 JumpB
	var_71_bool = 0; // 0x763 MovB
	
Label_1892:
	if(var_71_bool == 0) goto Label_1895; // 0x764 JumpB
	var_49_bool = 1; // 0x765 MovB
	return 6; // 0x766 Return
	
Label_1895:
	var_79_bool = 0; var_80_object = Obj(); var_81_string = ""; // 0x767 PushV
	var_80_object = var_50_object; // 0x768 Mov
	var_81_string = "disease"; // 0x769 MovS
	func_886(var_79_bool, var_80_object, var_81_string); // 0x76a NEW_2
	var_82_bool = var_79_bool == 0; // 0x76c Not
	if(var_82_bool == 0) goto Label_1904; // 0x76d JumpB
	var_49_bool = 0; // 0x76e MovB
	return 6; // 0x76f Return
	
Label_1904:
	var_83_bool = 0; // 0x770 PushV
	var_83_bool = 1; // 0x771 MovB
	var_84_bool = 0; var_85_string = ""; // 0x772 PushV
	var_85_string = var_55_string; // 0x773 Mov
	func_1252(var_84_bool, var_85_string); // 0x774 NEW_2
	if(var_84_bool == 0) goto Label_1915; // 0x776 JumpB
	var_123_string = "dog"; // 0x777 PushS
	var_124_bool = var_55_string == var_123_string; // 0x778 Eq
	if(var_124_bool == 0) goto Label_1915; // 0x779 JumpB
	var_83_bool = 0; // 0x77a MovB
	
Label_1915:
	if(var_83_bool == 0) goto Label_1922; // 0x77b JumpB
	var_125_string = "disease"; // 0x77c PushS
	GetProperty(var_125_string, var_56_float); // 0x77d ObjFunc
	var_126_int = 0; // 0x77f PushI
	var_49_bool = var_56_float > var_126_int; // 0x780 GT2
	return 6; // 0x781 Return
	
Label_1922:
	var_49_bool = 0; // 0x782 MovB
	return 6; // 0x783 Return
}


func_310(var_0_object, var_1_object, var_2_object, var_134_object, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x136 PushV
	var_0_object = var_134_object; // 0x137 TMov
	var_143_object = Obj(); // 0x138 PushV
	var_143_object = var_0_object; // 0x139 MovT
	func_1446(var_143_object); // 0x13a NEW_2
	func_1455(); // 0x13d NEW_2
	Face(var_0_object); // 0x13f Func
	var_154_bool = var_135_bool; // 0x141 Push
	if(var_154_bool == 0) goto Label_329; // 0x142 JumpB
	var_155_string = "all"; // 0x143 PushS
	var_156_string = "attack_on"; // 0x144 PushS
	PlayAnimation(var_155_string, var_156_string); // 0x145 Func
	WaitForAnimEnd(); // 0x147 Func
	
Label_329:
	var_157_string = "all"; // 0x149 PushS
	var_158_string = "attack_on"; // 0x14a PushS
	LockAnimationEnd(var_157_string, var_158_string); // 0x14b Func
	var_159_bool = 1; // 0x14d PushB
	SetAttackState(var_159_bool); // 0x14e Func
	
Label_336:
	var_160_bool = 0; var_161_object = Obj(); // 0x150 PushV
	var_161_object = var_0_object; // 0x151 MovT
	func_1012(var_160_bool, var_161_object); // 0x152 NEW_2
	if(var_160_bool == 0) goto Label_442; // 0x154 JumpB
	CanSee(var_142_bool, var_0_object); // 0x155 Func
	var_162_bool = var_142_bool; // 0x157 Push
	if(var_162_bool == 0) goto Label_353; // 0x158 JumpB
	var_163_object = Obj(); // 0x159 PushV
	var_163_object = var_0_object; // 0x15a MovT
	func_1446(var_163_object); // 0x15b NEW_2
	func_490(var_142_bool); // 0x15e NEW_2
	goto Label_432; // 0x160 Jump
	
Label_432:
	var_317_bool = var_1_object != 0; // 0x1b0 NullNeq
	if(var_317_bool == 0) goto Label_438; // 0x1b1 JumpB
	func_485(var_141_bool, var_142_bool); // 0x1b3 NEW_2
	goto Label_441; // 0x1b5 Jump
	
Label_441:
	goto Label_336; // 0x1b9 Jump
	
Label_438:
	var_318_int = 2; // 0x1b6 PushI
	Sleep(var_318_int); // 0x1b7 Func
	
Label_353:
	var_319_object = Obj(); // 0x161 PushV
	var_319_object = var_0_object; // 0x162 MovT
	func_1162(); // 0x163 NEW_2
	var_2_object = 1; // 0x165 TMovB
	var_328_string = "all"; // 0x166 PushS
	var_329_string = "hunt"; // 0x167 PushS
	PlayAnimation(var_328_string, var_329_string); // 0x168 Func
	WaitForAnimEnd(var_141_bool); // 0x16a Func
	var_330_bool = var_141_bool == 0; // 0x16c Not
	if(var_330_bool == 0) goto Label_376; // 0x16d JumpB
	var_331_bool = var_1_object != 0; // 0x16e NullNeq
	if(var_331_bool == 0) goto Label_371; // 0x16f JumpB
	func_485(var_141_bool, var_142_bool); // 0x171 NEW_2
	
Label_371:
	var_332_string = "all"; // 0x173 PushS
	var_333_string = "attack_on"; // 0x174 PushS
	LockAnimationEnd(var_332_string, var_333_string); // 0x175 Func
	goto Label_336; // 0x177 Jump
	
Label_376:
	var_334_bool = 0; var_335_object = Obj(); // 0x178 PushV
	var_335_object = var_0_object; // 0x179 MovT
	func_1012(var_334_bool, var_335_object); // 0x17a NEW_2
	var_336_bool = var_334_bool == 0; // 0x17c Not
	if(var_336_bool == 0) goto Label_383; // 0x17d JumpB
	goto Label_442; // 0x17e Jump
	
Label_442:
	var_337_bool = 0; // 0x1ba PushB
	SetAttackState(var_337_bool); // 0x1bb Func
	StopAsync(); // 0x1bd Func
	var_338_string = "all"; // 0x1bf PushS
	var_339_string = "attack_off"; // 0x1c0 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x1c1 Func
	WaitForAnimEnd(); // 0x1c3 Func
	return 4; // 0x1c5 Return
	
Label_383:
	CanSee(var_142_bool, var_0_object); // 0x17f Func
	var_340_bool = var_142_bool; // 0x181 Push
	if(var_340_bool == 0) goto Label_394; // 0x182 JumpB
	var_2_object = 0; // 0x183 TMovB
	Face(var_0_object); // 0x184 Func
	func_490(var_142_bool); // 0x187 NEW_2
	goto Label_432; // 0x189 Jump
	
Label_394:
	var_341_string = "all"; // 0x18a PushS
	var_342_string = "attack_on"; // 0x18b PushS
	LockAnimationEnd(var_341_string, var_342_string); // 0x18c Func
	var_343_int = 3; // 0x18e PushI
	Sleep(var_343_int, var_141_bool); // 0x18f Func
	var_344_bool = var_141_bool == 0; // 0x191 Not
	if(var_344_bool == 0) goto Label_413; // 0x192 JumpB
	var_345_bool = var_1_object != 0; // 0x193 NullNeq
	if(var_345_bool == 0) goto Label_408; // 0x194 JumpB
	func_485(var_141_bool, var_142_bool); // 0x196 NEW_2
	
Label_408:
	var_346_string = "all"; // 0x198 PushS
	var_347_string = "attack_on"; // 0x199 PushS
	LockAnimationEnd(var_346_string, var_347_string); // 0x19a Func
	goto Label_336; // 0x19c Jump
	
Label_413:
	var_348_bool = 0; var_349_object = Obj(); // 0x19d PushV
	var_349_object = var_0_object; // 0x19e MovT
	func_1012(var_348_bool, var_349_object); // 0x19f NEW_2
	var_350_bool = var_348_bool == 0; // 0x1a1 Not
	if(var_350_bool == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_442; // 0x1a3 Jump
	
Label_420:
	var_2_object = 0; // 0x1a4 TMovB
	CanSee(var_142_bool, var_0_object); // 0x1a5 Func
	var_351_bool = var_142_bool; // 0x1a7 Push
	if(var_351_bool == 0) goto Label_431; // 0x1a8 JumpB
	Face(var_0_object); // 0x1a9 Func
	func_490(var_142_bool); // 0x1ac NEW_2
	goto Label_432; // 0x1ae Jump
	
Label_431:
	goto Label_442; // 0x1af Jump
}


func_1080(var_11_object, var_12_int, var_13_float)
{
	var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_int = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); // 0x438 PushV
	var_32_bool = 0; // 0x439 PushV
	var_32_bool = 0; // 0x43a MovB
	var_33_bool = 0; // 0x43b PushV
	var_33_bool = 0; // 0x43c MovB
	var_34_object = var_11_object; // 0x43d Push
	if(var_34_object == 0) goto Label_1091; // 0x43e JumpB
	var_35_int = 4; // 0x43f PushI
	var_36_bool = var_12_int != var_35_int; // 0x440 Neq
	if(var_36_bool == 0) goto Label_1091; // 0x441 JumpB
	var_33_bool = 1; // 0x442 MovB
	
Label_1091:
	if(var_33_bool == 0) goto Label_1096; // 0x443 JumpB
	var_37_int = 5; // 0x444 PushI
	var_38_bool = var_12_int != var_37_int; // 0x445 Neq
	if(var_38_bool == 0) goto Label_1096; // 0x446 JumpB
	var_32_bool = 1; // 0x447 MovB
	
Label_1096:
	if(var_32_bool == 0) goto Label_1143; // 0x448 JumpB
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0x449 PushV
	var_41_cvector = CVector(0,0,0); var_42_object = Obj(); // 0x44a PushV
	var_42_object = var_11_object; // 0x44b Mov
	func_859(var_42_object); // 0x44c NEW_2
	var_40_cvector = var_41_cvector; // 0x44d Mov
	func_1345(var_39_cvector, var_40_cvector); // 0x44f NEW_2
	var_23_cvector = var_39_cvector; // 0x450 Mov
	CreateVectorVector(var_24_object); // 0x452 Func
	var_25_int = 1; // 0x454 MovI
	
Label_1109:
	var_52_string = "hit"; // 0x455 PushS
	var_53_int = var_52_string + var_25_int; // 0x456 Add
	GetGeometryLocator(var_53_int, var_26_bool, var_27_cvector, var_28_cvector); // 0x457 Func
	var_54_bool = var_26_bool == 0; // 0x459 Not
	if(var_54_bool == 0) goto Label_1116; // 0x45a JumpB
	goto Label_1125; // 0x45b Jump
	
Label_1125:
	size(var_29_int); // 0x465 ObjFunc
	var_55_int = var_29_int; // 0x467 Push
	if(var_55_int == 0) goto Label_1142; // 0x468 JumpB
	irand(var_30_int, var_29_int); // 0x469 Func
	get(var_31_cvector, var_30_int); // 0x46b ObjFunc
	var_56_object = Obj(); var_57_int = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x46d PushV
	var_56_object = var_11_object; // 0x46e Mov
	var_57_int = var_12_int; // 0x46f Mov
	var_58_float = var_13_float; // 0x470 Mov
	var_59_cvector = var_31_cvector; // 0x471 Mov
	var_60_cvector = -var_23_cvector; // 0x472 Neg2
	func_1148(var_58_float, var_59_cvector, var_60_cvector); // 0x473 NEW_2
	return 18; // 0x475 Return
	
Label_1142:
	var_24_object = 0; // 0x476 SetNull
	
Label_1143:
	var_101_object = Obj(); // 0x477 PushV
	var_101_object = var_11_object; // 0x478 Mov
	func_1036(var_101_object); // 0x479 NEW_2
	return 18; // 0x47b Return
	
Label_1116:
	var_102_int = var_28_cvector | var_23_cvector; // 0x45c Or
	var_103_float = 0.70711; // 0x45d PushF
	var_104_bool = var_102_int >= var_103_float; // 0x45e GE
	if(var_104_bool == 0) goto Label_1122; // 0x45f JumpB
	add(var_27_cvector); // 0x460 ObjFunc
	
Label_1122:
	var_105_int = 1; // 0x462 PushI
	var_25_int = var_25_int + var_105_int; // 0x463 Add2
	goto Label_1109; // 0x464 Jump
}


func_1593(var_39_int, var_40_string)
{
	var_41_int = 0; var_42_int = 0; // 0x639 PushV
	GetInvItemByName(var_42_int, var_40_string); // 0x63a Func
	var_39_int = var_42_int; // 0x63c Mov
	return 2; // 0x63d Return
}


func_1978(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x7ba PushV
	var_130_object = GlobalVars[0]; // 0x7bb PushGE
	in(var_129_bool, var_127_object); // 0x7bc ObjFunc
	var_131_bool = var_129_bool; // 0x7be Push
	if(var_131_bool == 0) goto Label_1989; // 0x7bf JumpB
	var_132_object = Obj(); var_133_bool = 0; // 0x7c0 PushV
	var_132_object = var_127_object; // 0x7c1 Mov
	var_133_bool = 1; // 0x7c2 MovB
	func_1798(var_132_object, var_133_bool); // 0x7c3 NEW_2
	
Label_1989:
	return 2; // 0x7c5 Return
}


func_1211(var_122_string)
{
	var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_bool = 0; var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); // 0x4bb PushV
	IsExisting3DSound(var_131_bool, var_122_string); // 0x4bc Func
	var_139_bool = var_131_bool == 0; // 0x4be Not
	if(var_139_bool == 0) goto Label_1236; // 0x4bf JumpB
	var_132_int = 0; // 0x4c0 MovI
	
Label_1217:
	var_140_int = 1; // 0x4c1 PushI
	var_141_int = var_132_int + var_140_int; // 0x4c2 Add
	var_142_int = var_122_string + var_141_int; // 0x4c3 Add
	IsExisting3DSound(var_133_bool, var_142_int); // 0x4c4 Func
	var_143_bool = var_133_bool == 0; // 0x4c6 Not
	if(var_143_bool == 0) goto Label_1225; // 0x4c7 JumpB
	goto Label_1228; // 0x4c8 Jump
	
Label_1228:
	var_144_bool = var_132_int == 0; // 0x4cc Not
	if(var_144_bool == 0) goto Label_1231; // 0x4cd JumpB
	return 16; // 0x4ce Return
	
Label_1231:
	irand(var_134_int, var_132_int); // 0x4cf Func
	var_145_int = 1; // 0x4d1 PushI
	var_146_int = var_134_int + var_145_int; // 0x4d2 Add
	var_122_string = var_122_string + var_146_int; // 0x4d3 Add2
	
Label_1236:
	Is3DSoundLoaded(var_135_bool, var_122_string); // 0x4d4 Func
	var_147_bool = var_135_bool; // 0x4d6 Push
	if(var_147_bool == 0) goto Label_1251; // 0x4d7 JumpB
	GetEyesHeight(var_136_float); // 0x4d8 Func
	GetDirection(var_137_cvector); // 0x4da Func
	var_148_int = 50; // 0x4dc PushI
	var_138_cvector = var_137_cvector * var_148_int; // 0x4dd Mult2
	var_149_float = GetByIndex(var_138_cvector, 1); // 0x4de PushE
	var_149_float = var_149_float + var_136_float; // 0x4df Add2
	SetByIndex(var_138_cvector, 1) = var_149_float; // 0x4e0 PopE
	PlayGlobalSound(var_122_string, var_138_cvector); // 0x4e1 Func
	
Label_1251:
	return 16; // 0x4e3 Return
	
Label_1225:
	var_150_int = 1; // 0x4c9 PushI
	var_132_int = var_132_int + var_150_int; // 0x4ca Add2
	goto Label_1217; // 0x4cb Jump
}


func_1339(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x53b PushV
	self(var_9_object); // 0x53c Func
	var_7_object = var_9_object; // 0x53e Mov
	return 2; // 0x53f Return
}


func_1466(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x5ba PushV
	var_81_string = "branch"; // 0x5bb PushS
	GetVariable(var_81_string, var_80_int); // 0x5bc Func
	var_78_int = var_80_int; // 0x5be Mov
	return 2; // 0x5bf Return
}


func_190(var_0_object, var_47_object)
{
	var_49_bool = 0; var_50_bool = 0; // 0xbe PushV
	var_0_object = var_47_object; // 0xbf TMov
	Face(var_47_object); // 0xc0 Func
	
Label_194:
	var_51_float = 0.5; // 0xc2 PushF
	Sleep(var_51_float, var_50_bool); // 0xc3 Func
	var_52_bool = 0; // 0xc5 PushV
	var_52_bool = 1; // 0xc6 MovB
	var_53_bool = var_50_bool == 0; // 0xc7 Not
	if(var_53_bool == 0) goto Label_208; // 0xc8 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xc9 PushV
	var_55_object = var_0_object; // 0xca MovT
	func_1012(var_54_bool, var_55_object); // 0xcb NEW_2
	var_56_bool = var_54_bool == 0; // 0xcd Not
	if(var_56_bool == 0) goto Label_208; // 0xce JumpB
	var_52_bool = 0; // 0xcf MovB
	
Label_208:
	if(var_52_bool == 0) goto Label_210; // 0xd0 JumpB
	goto Label_211; // 0xd1 Jump
	
Label_211:
	StopAsync(); // 0xd3 Func
	return 2; // 0xd5 Return
	
Label_210:
	goto Label_194; // 0xd2 Jump
}


func_1598(var_18_object)
{
	var_19_object = Obj(); // 0x63f PushV
	var_19_object = var_18_object; // 0x640 Mov
	TaskCall(1); // 0x641 TaskCall
	func_25(var_19_object); // 0x642 NEW_2
	TaskReturn(); // 0x643 TaskReturn
	return 0; // 0x645 Return
}


func_1472(var_11_object)
{
	var_12_int = 0; // 0x5c1 PushV
	func_1466(var_12_int); // 0x5c2 NEW_2
	var_16_int = 1; // 0x5c4 PushI
	var_17_bool = var_12_int == var_16_int; // 0x5c5 Eq
	if(var_17_bool == 0) goto Label_1482; // 0x5c6 JumpB
	WorkWithCorpse(var_11_object); // 0x5c7 Func
	goto Label_1484; // 0x5c9 Jump
	
Label_1484:
	return 0; // 0x5cc Return
	
Label_1482:
	Barter(var_11_object); // 0x5ca Func
}


func_1345(var_39_cvector, var_40_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x541 PushV
	var_49_int = var_40_cvector | var_40_cvector; // 0x542 Or
	var_48_float = sqrt(var_49_int); // 0x543 Sqrt2
	var_50_float = 0.0; // 0x544 PushF
	var_51_bool = var_48_float < var_50_float; // 0x545 LT
	if(var_51_bool == 0) goto Label_1353; // 0x546 JumpB
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x547 MovV
	return 2; // 0x548 Return
	
Label_1353:
	var_39_cvector = var_40_cvector / var_40_cvector; // 0x549 Div2
	return 2; // 0x54a Return
}


func_67(var_99_object)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_string = ""; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_string = ""; var_115_object = Obj(); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); // 0x43 PushV
	var_120_bool = var_99_object == 0; // 0x44 NullEq
	if(var_120_bool == 0) goto Label_75; // 0x45 JumpB
	var_121_string = ""; // 0x46 PushV
	var_121_string = "fdie"; // 0x47 MovS
	func_158(var_121_string); // 0x48 NEW_2
	goto Label_157; // 0x4a Jump
	
Label_157:
	return 20; // 0x9d Return
	
Label_75:
	GetPosition(var_110_cvector); // 0x4b ObjFunc
	GetPosition(var_111_cvector); // 0x4d Func
	GetDirection(var_112_cvector); // 0x4f Func
	var_113_cvector = var_111_cvector - var_110_cvector; // 0x51 Sub2
	var_153_float = GetByIndex(var_113_cvector, 0); // 0x52 PushE
	var_154_float = GetByIndex(var_112_cvector, 0); // 0x53 PushE
	var_155_float = var_153_float * var_154_float; // 0x54 Mult
	var_156_float = GetByIndex(var_113_cvector, 2); // 0x55 PushE
	var_157_float = GetByIndex(var_112_cvector, 2); // 0x56 PushE
	var_158_float = var_156_float * var_157_float; // 0x57 Mult
	var_159_int = var_155_float + var_158_float; // 0x58 Add
	var_160_int = 0; // 0x59 PushI
	var_161_bool = var_159_int >= var_160_int; // 0x5a GE
	if(var_161_bool == 0) goto Label_94; // 0x5b JumpB
	var_114_string = "fdie"; // 0x5c MovS
	goto Label_95; // 0x5d Jump
	
Label_95:
	RemoveRTEnvelope(); // 0x5f Func
	SetDeathState(); // 0x61 Func
	Stop(); // 0x63 Func
	StopAsync(); // 0x65 Func
	var_115_object = var_99_object; // 0x67 Mov
	var_162_string = "GetScriptProperty"; // 0x68 PushS
	var_163_int = 2; // 0x69 PushI
	var_164_bool = IsFuncExist(var_99_object, var_162_string, var_163_int); // 0x6a FuncExist
	if(var_164_bool == 0) goto Label_119; // 0x6b JumpB
	var_165_string = "Owner"; // 0x6c PushS
	HasScriptProperty(var_116_bool, var_165_string); // 0x6d ObjFunc
	var_166_bool = var_116_bool; // 0x6f Push
	if(var_166_bool == 0) goto Label_119; // 0x70 JumpB
	var_167_string = "Owner"; // 0x71 PushS
	GetScriptProperty(var_115_object, var_167_string); // 0x72 ObjFunc
	var_168_bool = var_115_object == 0; // 0x74 NullEq
	if(var_168_bool == 0) goto Label_119; // 0x75 JumpB
	var_115_object = var_99_object; // 0x76 Mov
	
Label_119:
	var_169_string = "@GetEyesHeight"; // 0x77 PushS
	var_170_int = 1; // 0x78 PushI
	var_171_bool = IsFuncExist(var_115_object, var_169_string, var_170_int); // 0x79 FuncExist
	if(var_171_bool == 0) goto Label_134; // 0x7a JumpB
	GetEyesHeight(var_118_float); // 0x7b ObjFunc
	var_119_cvector = CVector(0.0, 0.0, 0.0); // 0x7d MovV
	var_172_float = GetByIndex(var_119_cvector, 1); // 0x7e PushE
	var_172_float = var_118_float; // 0x7f Mov
	SetByIndex(var_119_cvector, 1) = var_172_float; // 0x80 PopE
	var_173_string = "head"; // 0x81 PushS
	LookAsync(var_99_object, var_173_string, var_119_cvector); // 0x82 Func
	var_117_bool = 1; // 0x84 MovB
	goto Label_135; // 0x85 Jump
	
Label_135:
	var_174_string = ""; // 0x87 PushV
	var_174_string = var_114_string; // 0x88 Mov
	func_1211(var_174_string); // 0x89 NEW_2
	var_175_string = "all"; // 0x8b PushS
	PlayAnimation(var_175_string, var_114_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	var_176_bool = var_117_bool; // 0x90 Push
	if(var_176_bool == 0) goto Label_151; // 0x91 JumpB
	StopAsync(); // 0x92 Func
	var_177_string = "head"; // 0x94 PushS
	UnlookAsync(var_177_string); // 0x95 Func
	
Label_151:
	var_178_string = "all"; // 0x97 PushS
	LockAnimationEnd(var_178_string, var_114_string); // 0x98 Func
	RemoveEnvelope(); // 0x9a Func
	var_115_object = 0; // 0x9c SetNull
	
Label_134:
	var_117_bool = 0; // 0x86 MovB
	
Label_94:
	var_114_string = "bdie"; // 0x5e MovS
}


func_839()
{
	StopGroup0(); // 0x347 Func
	Stop(); // 0x349 Func
	return 0; // 0x34b Return
}


func_1355(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x54b PushV
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x54c Sub2
	var_29_float = var_33_cvector | var_33_cvector; // 0x54d Or2
	return 2; // 0x54e Return
}


func_844()
{
	return 0; // 0x34c Return
}


func_845(var_272_string, var_273_int)
{
	var_274_int = 2; // 0x34e PushI
	var_275_bool = var_273_int == var_274_int; // 0x34f Eq
	if(var_275_bool == 0) goto Label_852; // 0x350 JumpB
	var_272_string = "fire"; // 0x351 MovS
	return 0; // 0x352 Return
	
Label_852:
	var_276_int = 1; // 0x354 PushI
	var_277_bool = var_273_int == var_276_int; // 0x355 Eq
	if(var_277_bool == 0) goto Label_857; // 0x356 JumpB
	var_272_string = "bullet"; // 0x357 MovS
	return 0; // 0x358 Return
	
Label_857:
	var_272_string = "phys"; // 0x359 MovS
	return 0; // 0x35a Return
}


func_971(var_27_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x3cb PushV
	IsDead(var_30_bool); // 0x3cc ObjFunc
	var_27_bool = var_30_bool; // 0x3ce Mov
	return 2; // 0x3cf Return
}


func_1359(var_282_float, var_283_float, var_284_float)
{
	var_287_bool = var_283_float < var_284_float; // 0x550 LT
	if(var_287_bool == 0) goto Label_1364; // 0x551 JumpB
	var_282_float = var_283_float; // 0x552 Mov
	goto Label_1365; // 0x553 Jump
	
Label_1365:
	return 0; // 0x555 Return
	
Label_1364:
	var_282_float = var_284_float; // 0x554 Mov
}


func_976(var_16_bool, var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); // 0x3d0 PushV
	var_22_bool = var_17_object == 0; // 0x3d1 NullEq
	if(var_22_bool == 0) goto Label_981; // 0x3d2 JumpB
	var_16_bool = 0; // 0x3d3 MovB
	return 4; // 0x3d4 Return
	
Label_981:
	var_23_bool = 0; // 0x3d5 PushV
	var_23_bool = 0; // 0x3d6 MovB
	var_24_string = "IsDead"; // 0x3d7 PushS
	var_25_int = 1; // 0x3d8 PushI
	var_26_bool = IsFuncExist(var_17_object, var_24_string, var_25_int); // 0x3d9 FuncExist
	if(var_26_bool == 0) goto Label_993; // 0x3da JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x3db PushV
	var_28_object = var_17_object; // 0x3dc Mov
	func_971(var_28_object); // 0x3dd NEW_2
	if(var_27_bool == 0) goto Label_993; // 0x3df JumpB
	var_23_bool = 1; // 0x3e0 MovB
	
Label_993:
	if(var_23_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_16_bool = 0; // 0x3e2 MovB
	return 4; // 0x3e3 Return
	
Label_996:
	GetScene(var_20_object); // 0x3e4 Func
	var_31_bool = var_20_object == 0; // 0x3e6 NullEq
	if(var_31_bool == 0) goto Label_1002; // 0x3e7 JumpB
	var_16_bool = 0; // 0x3e8 MovB
	return 4; // 0x3e9 Return
	
Label_1002:
	GetScene(var_21_object); // 0x3ea ObjFunc
	var_32_bool = var_20_object != var_21_object; // 0x3ec Neq
	if(var_32_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_16_bool = 0; // 0x3ee MovB
	return 4; // 0x3ef Return
	
Label_1008:
	var_16_bool = 1; // 0x3f0 MovB
	return 4; // 0x3f1 Return
}


func_1485(var_27_int, var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0; // 0x5cd PushV
	var_33_bool = var_27_int > var_28_int; // 0x5ce GT
	if(var_33_bool == 0) goto Label_1492; // 0x5cf JumpB
	var_34_string = "GenerateMoney: iMin > iMax"; // 0x5d0 PushS
	Trace(var_34_string); // 0x5d1 Func
	return 4; // 0x5d3 Return
	
Label_1492:
	var_31_int = 0; // 0x5d4 MovI
	var_35_bool = var_27_int != var_28_int; // 0x5d5 Neq
	if(var_35_bool == 0) goto Label_1499; // 0x5d6 JumpB
	var_36_int = var_28_int - var_27_int; // 0x5d7 Sub
	irand(var_31_int, var_36_int); // 0x5d8 Func
	goto Label_1503; // 0x5da Jump
	
Label_1503:
	var_31_int = var_31_int + var_27_int; // 0x5df Add2
	var_37_int = 0; // 0x5e0 PushI
	var_38_bool = var_31_int == var_37_int; // 0x5e1 Eq
	if(var_38_bool == 0) goto Label_1508; // 0x5e2 JumpB
	return 4; // 0x5e3 Return
	
Label_1508:
	var_39_int = 0; var_40_string = ""; // 0x5e4 PushV
	var_40_string = "Money"; // 0x5e5 MovS
	func_1593(var_39_int, var_40_string); // 0x5e6 NEW_2
	var_43_int = 0; // 0x5e8 PushI
	AddItem(var_32_bool, var_39_int, var_43_int, var_31_int); // 0x5e9 Func
	return 4; // 0x5eb Return
	
Label_1499:
	var_44_int = 0; // 0x5db PushI
	var_45_bool = var_27_int == var_44_int; // 0x5dc Eq
	if(var_45_bool == 0) goto Label_1503; // 0x5dd JumpB
	return 4; // 0x5de Return
}


func_1998(var_17_object)
{
	var_18_object = Obj(); // 0x7cf PushV
	var_18_object = var_17_object; // 0x7d0 Mov
	func_1598(var_18_object); // 0x7d1 NEW_2
	return 0; // 0x7d3 Return
}


func_214()
{
	StopAsync(); // 0xd6 Func
	var_127_int = 100; // 0xd8 PushI
	KillTimer(var_127_int); // 0xd9 Func
	StopGroup0(); // 0xdb Func
	return 0; // 0xdd Return
}


func_1366(var_292_float, var_293_float, var_294_float, var_295_float)
{
	var_296_bool = var_293_float < var_294_float; // 0x557 LT
	if(var_296_bool == 0) goto Label_1371; // 0x558 JumpB
	var_292_float = var_294_float; // 0x559 Mov
	return 0; // 0x55a Return
	
Label_1371:
	var_297_bool = var_293_float > var_295_float; // 0x55b GT
	if(var_297_bool == 0) goto Label_1375; // 0x55c JumpB
	var_292_float = var_295_float; // 0x55d Mov
	return 0; // 0x55e Return
	
Label_1375:
	var_292_float = var_293_float; // 0x55f Mov
	return 0; // 0x560 Return
}


func_859(var_41_cvector)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x35b PushV
	GetPosition(var_45_cvector); // 0x35c Func
	GetPosition(var_46_cvector); // 0x35e ObjFunc
	var_41_cvector = var_46_cvector - var_45_cvector; // 0x360 Sub2
	return 4; // 0x361 Return
}


func_732()
{
	func_1791(); // 0x2dd NEW_2
	
Label_735:
	func_755(var_5_cvector, var_6_bool); // 0x2e0 NEW_2
	goto Label_735; // 0x2e2 Jump
}


func_1377(var_54_bool, var_55_int, var_56_int)
{
	var_57_int = 0; var_58_int = 0; // 0x561 PushV
	irand(var_58_int, var_56_int); // 0x562 Func
	var_54_bool = var_58_int < var_55_int; // 0x564 LT2
	return 2; // 0x565 Return
}


func_866(var_86_float)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x362 PushV
	GetPosition(var_91_cvector); // 0x363 Func
	GetPosition(var_92_cvector); // 0x365 ObjFunc
	var_93_cvector = var_92_cvector - var_91_cvector; // 0x367 Sub2
	var_86_float = var_93_cvector | var_93_cvector; // 0x368 Or2
	return 6; // 0x369 Return
}


func_740()
{
	return 0; // 0x2e4 Return
}


func_485(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1e5 TMovT
	var_1_object = 0; // 0x1e6 SetNullT
	Face(var_0_object); // 0x1e7 Func
	return 0; // 0x1e9 Return
}


func_1382(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x566 PushV
	CreateObjectSet(var_16_object); // 0x567 Func
	var_14_object = var_16_object; // 0x569 Mov
	return 2; // 0x56a Return
}


func_1252(var_84_bool, var_85_string)
{
	var_84_bool = 1; // 0x4e5 MovB
	var_86_bool = 0; // 0x4e6 PushV
	var_86_bool = 1; // 0x4e7 MovB
	var_87_bool = 0; // 0x4e8 PushV
	var_87_bool = 1; // 0x4e9 MovB
	var_88_bool = 0; // 0x4ea PushV
	var_88_bool = 1; // 0x4eb MovB
	var_89_bool = 0; // 0x4ec PushV
	var_89_bool = 1; // 0x4ed MovB
	var_90_bool = 0; // 0x4ee PushV
	var_90_bool = 1; // 0x4ef MovB
	var_91_bool = 0; // 0x4f0 PushV
	var_91_bool = 1; // 0x4f1 MovB
	var_92_bool = 0; // 0x4f2 PushV
	var_92_bool = 1; // 0x4f3 MovB
	var_93_bool = 0; // 0x4f4 PushV
	var_93_bool = 1; // 0x4f5 MovB
	var_94_bool = 0; // 0x4f6 PushV
	var_94_bool = 1; // 0x4f7 MovB
	var_95_bool = 0; // 0x4f8 PushV
	var_95_bool = 1; // 0x4f9 MovB
	var_96_bool = 0; // 0x4fa PushV
	var_96_bool = 1; // 0x4fb MovB
	var_97_string = "woman"; // 0x4fc PushS
	var_98_bool = var_85_string == var_97_string; // 0x4fd Eq
	if(var_98_bool == 0) goto Label_1283; // 0x4fe JumpB
	var_99_string = "worker"; // 0x4ff PushS
	var_100_bool = var_85_string == var_99_string; // 0x500 Eq
	if(var_100_bool == 0) goto Label_1283; // 0x501 JumpB
	var_96_bool = 0; // 0x502 MovB
	
Label_1283:
	if(var_96_bool == 0) goto Label_1288; // 0x503 JumpB
	var_101_string = "butcher"; // 0x504 PushS
	var_102_bool = var_85_string == var_101_string; // 0x505 Eq
	if(var_102_bool == 0) goto Label_1288; // 0x506 JumpB
	var_95_bool = 0; // 0x507 MovB
	
Label_1288:
	if(var_95_bool == 0) goto Label_1293; // 0x508 JumpB
	var_103_string = "wasted_girl"; // 0x509 PushS
	var_104_bool = var_85_string == var_103_string; // 0x50a Eq
	if(var_104_bool == 0) goto Label_1293; // 0x50b JumpB
	var_94_bool = 0; // 0x50c MovB
	
Label_1293:
	if(var_94_bool == 0) goto Label_1298; // 0x50d JumpB
	var_105_string = "boy"; // 0x50e PushS
	var_106_bool = var_85_string == var_105_string; // 0x50f Eq
	if(var_106_bool == 0) goto Label_1298; // 0x510 JumpB
	var_93_bool = 0; // 0x511 MovB
	
Label_1298:
	if(var_93_bool == 0) goto Label_1303; // 0x512 JumpB
	var_107_string = "vaxxabitka"; // 0x513 PushS
	var_108_bool = var_85_string == var_107_string; // 0x514 Eq
	if(var_108_bool == 0) goto Label_1303; // 0x515 JumpB
	var_92_bool = 0; // 0x516 MovB
	
Label_1303:
	if(var_92_bool == 0) goto Label_1308; // 0x517 JumpB
	var_109_string = "unosha"; // 0x518 PushS
	var_110_bool = var_85_string == var_109_string; // 0x519 Eq
	if(var_110_bool == 0) goto Label_1308; // 0x51a JumpB
	var_91_bool = 0; // 0x51b MovB
	
Label_1308:
	if(var_91_bool == 0) goto Label_1313; // 0x51c JumpB
	var_111_string = "wasted_male"; // 0x51d PushS
	var_112_bool = var_85_string == var_111_string; // 0x51e Eq
	if(var_112_bool == 0) goto Label_1313; // 0x51f JumpB
	var_90_bool = 0; // 0x520 MovB
	
Label_1313:
	if(var_90_bool == 0) goto Label_1318; // 0x521 JumpB
	var_113_string = "alkash"; // 0x522 PushS
	var_114_bool = var_85_string == var_113_string; // 0x523 Eq
	if(var_114_bool == 0) goto Label_1318; // 0x524 JumpB
	var_89_bool = 0; // 0x525 MovB
	
Label_1318:
	if(var_89_bool == 0) goto Label_1323; // 0x526 JumpB
	var_115_string = "dohodyaga"; // 0x527 PushS
	var_116_bool = var_85_string == var_115_string; // 0x528 Eq
	if(var_116_bool == 0) goto Label_1323; // 0x529 JumpB
	var_88_bool = 0; // 0x52a MovB
	
Label_1323:
	if(var_88_bool == 0) goto Label_1328; // 0x52b JumpB
	var_117_string = "vaxxabit"; // 0x52c PushS
	var_118_bool = var_85_string == var_117_string; // 0x52d Eq
	if(var_118_bool == 0) goto Label_1328; // 0x52e JumpB
	var_87_bool = 0; // 0x52f MovB
	
Label_1328:
	if(var_87_bool == 0) goto Label_1333; // 0x530 JumpB
	var_119_string = "nudegirl"; // 0x531 PushS
	var_120_bool = var_85_string == var_119_string; // 0x532 Eq
	if(var_120_bool == 0) goto Label_1333; // 0x533 JumpB
	var_86_bool = 0; // 0x534 MovB
	
Label_1333:
	if(var_86_bool == 0) goto Label_1338; // 0x535 JumpB
	var_121_string = "morlok"; // 0x536 PushS
	var_122_bool = var_85_string == var_121_string; // 0x537 Eq
	if(var_122_bool == 0) goto Label_1338; // 0x538 JumpB
	var_84_bool = 0; // 0x539 MovB
	
Label_1338:
	return 0; // 0x53a Return
}


func_490(var_0_object)
{
	var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_object = Obj(); var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_int = 0; var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_bool = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_object = Obj(); var_184_object = Obj(); var_185_cvector = CVector(0,0,0); var_186_object = Obj(); var_187_int = 0; var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); var_191_object = Obj(); // 0x1ea PushV
	var_192_object = Obj(); // 0x1eb PushV
	var_192_object = var_0_object; // 0x1ec MovT
	func_1446(var_192_object); // 0x1ed NEW_2
	ReportAttack(var_0_object); // 0x1ef Func
	var_193_bool = 0; var_194_object = Obj(); // 0x1f1 PushV
	var_194_object = var_0_object; // 0x1f2 MovT
	func_881(var_193_bool, var_194_object); // 0x1f3 NEW_2
	if(var_193_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_195_object = Obj(); // 0x1f6 PushV
	func_1339(var_195_object); // 0x1f7 NEW_2
	SendPlayerEnemy(var_0_object, var_195_object); // 0x1f9 Func
	
Label_507:
	GetDirection(var_178_cvector); // 0x1fb Func
	var_196_cvector = CVector(0,0,0); var_197_object = Obj(); // 0x1fd PushV
	var_197_object = var_0_object; // 0x1fe MovT
	func_859(var_197_object); // 0x1ff NEW_2
	var_179_cvector = var_196_cvector; // 0x200 Mov
	var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); // 0x202 PushV
	var_203_cvector = var_178_cvector; // 0x203 Mov
	var_204_cvector = var_179_cvector; // 0x204 Mov
	func_1407(var_202_float, var_203_cvector, var_204_cvector); // 0x205 NEW_2
	var_226_float = 0.99939; // 0x207 PushF
	var_227_bool = var_202_float < var_226_float; // 0x208 LT
	if(var_227_bool == 0) goto Label_523; // 0x209 JumpB
	return 28; // 0x20a Return
	
Label_523:
	func_1455(); // 0x20c NEW_2
	var_228_string = "all"; // 0x20e PushS
	var_229_string = "attack_begin1"; // 0x20f PushS
	PlayAnimation(var_228_string, var_229_string); // 0x210 Func
	var_230_string = "attack"; // 0x212 PushS
	GetGeometryLocator(var_230_string, var_180_bool, var_181_cvector, var_182_cvector); // 0x213 Func
	var_231_bool = var_180_bool; // 0x215 Push
	if(var_231_bool == 0) goto Label_544; // 0x216 JumpB
	GetScene(var_184_object); // 0x217 Func
	var_232_string = "light-dynamic"; // 0x219 PushS
	var_233_string = "soldier_fire.xml"; // 0x21a PushS
	AddActorByType(var_183_object, var_232_string, var_184_object, var_181_cvector, var_182_cvector, var_233_string); // 0x21b Func
	var_184_object = 0; // 0x21d SetNull
	var_183_object = 0; // 0x21e SetNull
	goto Label_546; // 0x21f Jump
	
Label_546:
	var_234_string = "shot"; // 0x222 PushS
	Speak(var_234_string); // 0x223 Func
	GetDirection(var_178_cvector); // 0x225 Func
	var_235_cvector = CVector(0,0,0); var_236_object = Obj(); // 0x227 PushV
	var_236_object = var_0_object; // 0x228 MovT
	func_859(var_236_object); // 0x229 NEW_2
	var_179_cvector = var_235_cvector; // 0x22a Mov
	var_237_float = GetByIndex(var_179_cvector, 1); // 0x22c PushE
	var_238_float = 0; var_239_object = Obj(); // 0x22d PushV
	var_239_object = var_0_object; // 0x22e MovT
	func_1173(var_239_object); // 0x22f NEW_2
	var_237_float = var_237_float + var_238_float; // 0x231 Add2
	SetByIndex(var_179_cvector, 1) = var_237_float; // 0x232 PopE
	var_244_float = 0.03491; // 0x233 PushF
	RandVecCone3D(var_185_cvector, var_179_cvector, var_244_float); // 0x234 Func
	GetVictimMaterial(var_185_cvector, var_186_object, var_187_int, var_188_cvector); // 0x236 Func
	var_245_bool = var_186_object != 0; // 0x238 NullNeq
	if(var_245_bool == 0) goto Label_599; // 0x239 JumpB
	var_246_bool = var_186_object == var_0_object; // 0x23a Eq
	if(var_246_bool == 0) goto Label_584; // 0x23b JumpB
	var_247_float = 0; var_248_object = Obj(); var_249_float = 0; var_250_int = 0; // 0x23c PushV
	var_248_object = var_0_object; // 0x23d MovT
	var_249_float = 1.5; // 0x23e MovF
	var_250_int = 1; // 0x23f MovI
	func_898(var_247_float, var_248_object, var_249_float, var_250_int); // 0x240 NEW_2
	var_189_float = var_247_float; // 0x241 Mov
	var_305_int = 2; // 0x243 PushI
	var_306_float = 1.5; // 0x244 PushF
	ReportHit(var_0_object, var_305_int, var_189_float, var_306_float); // 0x245 Func
	goto Label_599; // 0x247 Jump
	
Label_599:
	var_307_string = "all"; // 0x257 PushS
	var_308_string = "attack_end1"; // 0x258 PushS
	PlayAnimation(var_307_string, var_308_string); // 0x259 Func
	WaitForAnimEnd(); // 0x25b Func
	var_309_string = "all"; // 0x25d PushS
	var_310_string = "attack_on"; // 0x25e PushS
	LockAnimationEnd(var_309_string, var_310_string); // 0x25f Func
	return 28; // 0x261 Return
	
Label_584:
	var_311_int = -1; // 0x248 PushI
	var_312_bool = var_187_int != var_311_int; // 0x249 Neq
	if(var_312_bool == 0) goto Label_599; // 0x24a JumpB
	GetScene(var_190_object); // 0x24b Func
	var_313_string = "scripted"; // 0x24d PushS
	var_314_cvector = CVector(0.0, 0.0, 1.0); // 0x24e PushVec
	var_315_string = "richochet.xml"; // 0x24f PushS
	AddActorByType(var_191_object, var_313_string, var_190_object, var_188_cvector, var_314_cvector, var_315_string); // 0x250 Func
	var_316_string = "Material"; // 0x252 PushS
	SetScriptProperty(var_316_string, var_187_int); // 0x253 ObjFunc
	var_191_object = 0; // 0x255 SetNull
	var_190_object = 0; // 0x256 SetNull
	
Label_544:
	WaitForAnimEnd(); // 0x220 Func
}


func_874(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x36a PushV
	var_15_string = "player"; // 0x36b PushS
	FindActor(var_14_object, var_15_string); // 0x36c Func
	var_12_object = var_14_object; // 0x36e Mov
	return 2; // 0x36f Return
}


func_1388(var_205_float, var_206_cvector, var_207_cvector)
{
	var_208_float = GetByIndex(var_206_cvector, 0); // 0x56d PushE
	var_209_float = GetByIndex(var_207_cvector, 0); // 0x56e PushE
	var_210_float = var_208_float * var_209_float; // 0x56f Mult
	var_211_float = GetByIndex(var_206_cvector, 2); // 0x570 PushE
	var_212_float = GetByIndex(var_207_cvector, 2); // 0x571 PushE
	var_213_float = var_211_float * var_212_float; // 0x572 Mult
	var_205_float = var_210_float + var_213_float; // 0x573 Add2
	return 0; // 0x574 Return
}


func_1516(var_84_string)
{
	var_85_object = Obj(); var_86_int = 0; var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; var_90_bool = 0; // 0x5ec PushV
	CreateInvItem(var_88_object); // 0x5ed Func
	SetItemName(var_84_string); // 0x5ef ObjFunc
	var_91_string = "Organ"; // 0x5f1 PushS
	var_92_int = 1; // 0x5f2 PushI
	SetProperty(var_91_string, var_92_int); // 0x5f3 ObjFunc
	GetItemID(var_89_int); // 0x5f5 ObjFunc
	var_93_int = 0; // 0x5f7 PushI
	var_94_int = 1; // 0x5f8 PushI
	AddItem(var_90_bool, var_88_object, var_93_int, var_94_int); // 0x5f9 Func
	return 6; // 0x5fb Return
}


func_881(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x371 PushV
	IsPlayerActor(var_9_object, var_11_bool); // 0x372 Func
	var_8_bool = var_11_bool; // 0x374 Mov
	return 2; // 0x375 Return
}


func_755(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj(); // 0x2f3 PushV
	GetPFPosition(var_24_object); // 0x2f4 Func
	GetDirection(var_0_object); // 0x2f6 Func
	
Label_760:
	func_844(); // 0x2f9 NEW_2
	var_25_int = 10; // 0x2fb PushI
	irand(var_21_int, var_25_int); // 0x2fc Func
	var_26_int = 5; // 0x2fe PushI
	var_27_int = var_21_int + var_26_int; // 0x2ff Add
	Sleep(var_27_int, var_22_bool); // 0x300 Func
	var_28_bool = var_22_bool; // 0x302 Push
	if(var_28_bool == 0) goto Label_776; // 0x303 JumpB
	func_740(); // 0x305 NEW_2
	goto Label_837; // 0x307 Jump
	
Label_837:
	goto Label_760; // 0x345 Jump
	
Label_776:
	func_844(); // 0x309 NEW_2
	GetPFPosition(var_23_cvector); // 0x30b Func
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x30d PushV
	var_30_cvector = var_1_object; // 0x30e MovT
	var_31_cvector = var_23_cvector; // 0x30f Mov
	func_1355(var_29_float, var_30_cvector, var_31_cvector); // 0x310 NEW_2
	var_34_int = 40000; // 0x312 PushI
	var_35_bool = var_29_float > var_34_int; // 0x313 GT
	if(var_35_bool == 0) goto Label_823; // 0x314 JumpB
	FindPathTo(var_24_object, var_24_object); // 0x315 Func
	var_36_bool = var_24_object != 0; // 0x317 NullNeq
	if(var_36_bool == 0) goto Label_818; // 0x318 JumpB
	RotatePath(var_24_object, var_22_bool); // 0x319 Func
	var_37_bool = var_22_bool == 0; // 0x31b Not
	if(var_37_bool == 0) goto Label_798; // 0x31c JumpB
	goto Label_836; // 0x31d Jump
	
Label_836:
	goto Label_776; // 0x344 Jump
	
Label_798:
	var_38_bool = 0; // 0x31e PushB
	FollowPath(var_24_object, var_38_bool, var_22_bool); // 0x31f Func
	var_39_bool = var_22_bool == 0; // 0x321 Not
	if(var_39_bool == 0) goto Label_804; // 0x322 JumpB
	goto Label_836; // 0x323 Jump
	
Label_804:
	var_40_float = GetByIndex(var_0_object, 0); // 0x324 PushE
	var_41_float = GetByIndex(var_0_object, 2); // 0x325 PushE
	Rotate(var_40_float, var_41_float, var_22_bool); // 0x326 Func
	var_42_bool = var_22_bool == 0; // 0x328 Not
	if(var_42_bool == 0) goto Label_811; // 0x329 JumpB
	goto Label_836; // 0x32a Jump
	
Label_811:
	WaitForAnimEnd(var_22_bool); // 0x32b Func
	var_43_bool = var_22_bool == 0; // 0x32d Not
	if(var_43_bool == 0) goto Label_816; // 0x32e JumpB
	goto Label_836; // 0x32f Jump
	
Label_816:
	goto Label_837; // 0x330 Jump
	
Label_818:
	var_44_int = 1; // 0x332 PushI
	Sleep(var_44_int); // 0x333 Func
	var_24_object = 0; // 0x335 SetNull
	goto Label_836; // 0x336 Jump
	
Label_823:
	var_45_float = GetByIndex(var_0_object, 0); // 0x337 PushE
	var_46_float = GetByIndex(var_0_object, 2); // 0x338 PushE
	Rotate(var_45_float, var_46_float, var_22_bool); // 0x339 Func
	var_47_bool = var_22_bool == 0; // 0x33b Not
	if(var_47_bool == 0) goto Label_830; // 0x33c JumpB
	goto Label_836; // 0x33d Jump
	
Label_830:
	WaitForAnimEnd(var_22_bool); // 0x33e Func
	var_48_bool = var_22_bool == 0; // 0x340 Not
	if(var_48_bool == 0) goto Label_835; // 0x341 JumpB
	goto Label_836; // 0x342 Jump
	
Label_835:
	goto Label_837; // 0x343 Jump
}


func_1012(var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0; // 0x3f4 PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x3f5 PushV
	var_17_object = var_13_object; // 0x3f6 Mov
	func_976(var_16_bool, var_17_object); // 0x3f7 NEW_2
	var_33_bool = var_16_bool == 0; // 0x3f9 Not
	if(var_33_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_12_bool = 0; // 0x3fb MovB
	return 2; // 0x3fc Return
	
Label_1021:
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x3fd PushV
	var_35_object = var_13_object; // 0x3fe Mov
	var_36_string = "noaccess"; // 0x3ff MovS
	func_886(var_34_bool, var_35_object, var_36_string); // 0x400 NEW_2
	var_43_bool = var_34_bool == 0; // 0x402 Not
	if(var_43_bool == 0) goto Label_1030; // 0x403 JumpB
	var_12_bool = 1; // 0x404 MovB
	return 2; // 0x405 Return
	
Label_1030:
	var_44_string = "noaccess"; // 0x406 PushS
	GetProperty(var_44_string, var_15_int); // 0x407 ObjFunc
	var_45_int = 0; // 0x409 PushI
	var_12_bool = var_15_int == var_45_int; // 0x40a Eq2
	return 2; // 0x40b Return
}


func_1397(var_214_float, var_215_cvector)
{
	var_216_float = GetByIndex(var_215_cvector, 0); // 0x576 PushE
	var_217_float = GetByIndex(var_215_cvector, 0); // 0x577 PushE
	var_218_float = var_216_float * var_217_float; // 0x578 Mult
	var_219_float = GetByIndex(var_215_cvector, 2); // 0x579 PushE
	var_220_float = GetByIndex(var_215_cvector, 2); // 0x57a PushE
	var_221_float = var_219_float * var_220_float; // 0x57b Mult
	var_222_int = var_218_float + var_221_float; // 0x57c Add
	var_214_float = sqrt(var_222_int); // 0x57d Sqrt2
	return 0; // 0x57e Return
}


func_886(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0; // 0x376 PushV
	var_39_string = "HasProperty"; // 0x377 PushS
	var_40_int = 2; // 0x378 PushI
	var_41_bool = IsFuncExist(var_35_object, var_39_string, var_40_int); // 0x379 FuncExist
	var_42_bool = var_41_bool == 0; // 0x37a Not
	if(var_42_bool == 0) goto Label_894; // 0x37b JumpB
	var_34_bool = 0; // 0x37c MovB
	return 2; // 0x37d Return
	
Label_894:
	HasProperty(var_36_string, var_38_bool); // 0x37e ObjFunc
	var_34_bool = var_38_bool; // 0x380 Mov
	return 2; // 0x381 Return
}


func_1655(var_16_bool, var_17_object, var_18_bool)
{
	var_19_string = ""; var_20_string = ""; // 0x677 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x678 PushV
	var_22_object = var_17_object; // 0x679 Mov
	var_23_string = "class"; // 0x67a MovS
	func_886(var_21_bool, var_22_object, var_23_string); // 0x67b NEW_2
	var_30_bool = var_21_bool == 0; // 0x67d Not
	if(var_30_bool == 0) goto Label_1665; // 0x67e JumpB
	var_16_bool = 0; // 0x67f MovB
	return 2; // 0x680 Return
	
Label_1665:
	var_31_string = "class"; // 0x681 PushS
	GetProperty(var_31_string, var_20_string); // 0x682 ObjFunc
	var_32_bool = 0; // 0x684 PushV
	var_32_bool = 1; // 0x685 MovB
	var_33_bool = 0; // 0x686 PushV
	var_33_bool = 1; // 0x687 MovB
	var_34_bool = 0; // 0x688 PushV
	var_34_bool = 1; // 0x689 MovB
	var_35_bool = 0; // 0x68a PushV
	var_35_bool = 1; // 0x68b MovB
	var_36_bool = 0; // 0x68c PushV
	var_36_bool = 1; // 0x68d MovB
	var_37_bool = 0; // 0x68e PushV
	var_37_bool = 1; // 0x68f MovB
	var_38_bool = 0; // 0x690 PushV
	var_38_bool = 1; // 0x691 MovB
	var_39_bool = 0; // 0x692 PushV
	var_39_bool = 1; // 0x693 MovB
	var_40_bool = 0; // 0x694 PushV
	var_40_bool = 1; // 0x695 MovB
	var_41_bool = 0; // 0x696 PushV
	var_41_bool = 1; // 0x697 MovB
	var_42_string = "patrol"; // 0x698 PushS
	var_43_bool = var_20_string == var_42_string; // 0x699 Eq
	if(var_43_bool == 0) goto Label_1695; // 0x69a JumpB
	var_44_string = "sanitar"; // 0x69b PushS
	var_45_bool = var_20_string == var_44_string; // 0x69c Eq
	if(var_45_bool == 0) goto Label_1695; // 0x69d JumpB
	var_41_bool = 0; // 0x69e MovB
	
Label_1695:
	if(var_41_bool == 0) goto Label_1700; // 0x69f JumpB
	var_46_string = "soldier"; // 0x6a0 PushS
	var_47_bool = var_20_string == var_46_string; // 0x6a1 Eq
	if(var_47_bool == 0) goto Label_1700; // 0x6a2 JumpB
	var_40_bool = 0; // 0x6a3 MovB
	
Label_1700:
	if(var_40_bool == 0) goto Label_1705; // 0x6a4 JumpB
	var_48_string = "woman"; // 0x6a5 PushS
	var_49_bool = var_20_string == var_48_string; // 0x6a6 Eq
	if(var_49_bool == 0) goto Label_1705; // 0x6a7 JumpB
	var_39_bool = 0; // 0x6a8 MovB
	
Label_1705:
	if(var_39_bool == 0) goto Label_1710; // 0x6a9 JumpB
	var_50_string = "wasted_girl"; // 0x6aa PushS
	var_51_bool = var_20_string == var_50_string; // 0x6ab Eq
	if(var_51_bool == 0) goto Label_1710; // 0x6ac JumpB
	var_38_bool = 0; // 0x6ad MovB
	
Label_1710:
	if(var_38_bool == 0) goto Label_1715; // 0x6ae JumpB
	var_52_string = "vaxxabitka"; // 0x6af PushS
	var_53_bool = var_20_string == var_52_string; // 0x6b0 Eq
	if(var_53_bool == 0) goto Label_1715; // 0x6b1 JumpB
	var_37_bool = 0; // 0x6b2 MovB
	
Label_1715:
	if(var_37_bool == 0) goto Label_1720; // 0x6b3 JumpB
	var_54_string = "vaxxabit"; // 0x6b4 PushS
	var_55_bool = var_20_string == var_54_string; // 0x6b5 Eq
	if(var_55_bool == 0) goto Label_1720; // 0x6b6 JumpB
	var_36_bool = 0; // 0x6b7 MovB
	
Label_1720:
	if(var_36_bool == 0) goto Label_1725; // 0x6b8 JumpB
	var_56_string = "little_girl"; // 0x6b9 PushS
	var_57_bool = var_20_string == var_56_string; // 0x6ba Eq
	if(var_57_bool == 0) goto Label_1725; // 0x6bb JumpB
	var_35_bool = 0; // 0x6bc MovB
	
Label_1725:
	if(var_35_bool == 0) goto Label_1730; // 0x6bd JumpB
	var_58_string = "girl"; // 0x6be PushS
	var_59_bool = var_20_string == var_58_string; // 0x6bf Eq
	if(var_59_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_34_bool = 0; // 0x6c1 MovB
	
Label_1730:
	if(var_34_bool == 0) goto Label_1735; // 0x6c2 JumpB
	var_60_string = "dohodyaga"; // 0x6c3 PushS
	var_61_bool = var_20_string == var_60_string; // 0x6c4 Eq
	if(var_61_bool == 0) goto Label_1735; // 0x6c5 JumpB
	var_33_bool = 0; // 0x6c6 MovB
	
Label_1735:
	if(var_33_bool == 0) goto Label_1740; // 0x6c7 JumpB
	var_62_string = "nudegirl"; // 0x6c8 PushS
	var_63_bool = var_20_string == var_62_string; // 0x6c9 Eq
	if(var_63_bool == 0) goto Label_1740; // 0x6ca JumpB
	var_32_bool = 0; // 0x6cb MovB
	
Label_1740:
	if(var_32_bool == 0) goto Label_1743; // 0x6cc JumpB
	var_16_bool = 1; // 0x6cd MovB
	return 2; // 0x6ce Return
	
Label_1743:
	var_64_bool = var_18_bool; // 0x6cf Push
	if(var_64_bool == 0) goto Label_1747; // 0x6d0 JumpB
	var_16_bool = 0; // 0x6d1 MovB
	return 2; // 0x6d2 Return
	
Label_1747:
	var_16_bool = 1; // 0x6d3 MovB
	var_65_bool = 0; // 0x6d4 PushV
	var_65_bool = 1; // 0x6d5 MovB
	var_66_bool = 0; // 0x6d6 PushV
	var_66_bool = 1; // 0x6d7 MovB
	var_67_bool = 0; // 0x6d8 PushV
	var_67_bool = 1; // 0x6d9 MovB
	var_68_bool = 0; // 0x6da PushV
	var_68_bool = 1; // 0x6db MovB
	var_69_bool = 0; // 0x6dc PushV
	var_69_bool = 1; // 0x6dd MovB
	var_70_string = "worker"; // 0x6de PushS
	var_71_bool = var_20_string == var_70_string; // 0x6df Eq
	if(var_71_bool == 0) goto Label_1765; // 0x6e0 JumpB
	var_72_string = "butcher"; // 0x6e1 PushS
	var_73_bool = var_20_string == var_72_string; // 0x6e2 Eq
	if(var_73_bool == 0) goto Label_1765; // 0x6e3 JumpB
	var_69_bool = 0; // 0x6e4 MovB
	
Label_1765:
	if(var_69_bool == 0) goto Label_1770; // 0x6e5 JumpB
	var_74_string = "boy"; // 0x6e6 PushS
	var_75_bool = var_20_string == var_74_string; // 0x6e7 Eq
	if(var_75_bool == 0) goto Label_1770; // 0x6e8 JumpB
	var_68_bool = 0; // 0x6e9 MovB
	
Label_1770:
	if(var_68_bool == 0) goto Label_1775; // 0x6ea JumpB
	var_76_string = "unosha"; // 0x6eb PushS
	var_77_bool = var_20_string == var_76_string; // 0x6ec Eq
	if(var_77_bool == 0) goto Label_1775; // 0x6ed JumpB
	var_67_bool = 0; // 0x6ee MovB
	
Label_1775:
	if(var_67_bool == 0) goto Label_1780; // 0x6ef JumpB
	var_78_string = "wasted_male"; // 0x6f0 PushS
	var_79_bool = var_20_string == var_78_string; // 0x6f1 Eq
	if(var_79_bool == 0) goto Label_1780; // 0x6f2 JumpB
	var_66_bool = 0; // 0x6f3 MovB
	
Label_1780:
	if(var_66_bool == 0) goto Label_1785; // 0x6f4 JumpB
	var_80_string = "alkash"; // 0x6f5 PushS
	var_81_bool = var_20_string == var_80_string; // 0x6f6 Eq
	if(var_81_bool == 0) goto Label_1785; // 0x6f7 JumpB
	var_65_bool = 0; // 0x6f8 MovB
	
Label_1785:
	if(var_65_bool == 0) goto Label_1790; // 0x6f9 JumpB
	var_82_string = "morlok"; // 0x6fa PushS
	var_83_bool = var_20_string == var_82_string; // 0x6fb Eq
	if(var_83_bool == 0) goto Label_1790; // 0x6fc JumpB
	var_16_bool = 0; // 0x6fd MovB
	
Label_1790:
	return 2; // 0x6fe Return
}


func_1148(var_13_object, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); // 0x47c PushV
	GetScene(var_20_object); // 0x47d Func
	var_22_string = "scripted"; // 0x47f PushS
	var_23_string = "blood_dir.xml"; // 0x480 PushS
	AddActorByType(var_21_object, var_22_string, var_20_object, var_16_cvector, var_17_cvector, var_23_string); // 0x481 Func
	var_24_object = Obj(); // 0x483 PushV
	var_24_object = var_13_object; // 0x484 Mov
	func_1036(var_24_object); // 0x485 NEW_2
	return 4; // 0x487 Return
}


func_1533()
{
	var_78_int = 0; // 0x5fd PushV
	func_1466(var_78_int); // 0x5fe NEW_2
	var_82_int = 1; // 0x600 PushI
	var_83_bool = var_78_int != var_82_int; // 0x601 Neq
	if(var_83_bool == 0) goto Label_1540; // 0x602 JumpB
	return 0; // 0x603 Return
	
Label_1540:
	var_84_string = ""; // 0x604 PushV
	var_84_string = "liver"; // 0x605 MovS
	func_1516(var_84_string); // 0x606 NEW_2
	var_95_string = ""; // 0x608 PushV
	var_95_string = "kidney"; // 0x609 MovS
	func_1516(var_95_string); // 0x60a NEW_2
	var_96_string = ""; // 0x60c PushV
	var_96_string = "heart"; // 0x60d MovS
	func_1516(var_96_string); // 0x60e NEW_2
	var_97_string = ""; // 0x610 PushV
	var_97_string = "blood"; // 0x611 MovS
	func_1516(var_97_string); // 0x612 NEW_2
	return 0; // 0x614 Return
}


func_1407(var_202_float, var_203_cvector, var_204_cvector)
{
	var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); // 0x580 PushV
	var_206_cvector = var_203_cvector; // 0x581 Mov
	var_207_cvector = var_204_cvector; // 0x582 Mov
	func_1388(var_205_float, var_206_cvector, var_207_cvector); // 0x583 NEW_2
	var_214_float = 0; var_215_cvector = CVector(0,0,0); // 0x585 PushV
	var_215_cvector = var_203_cvector; // 0x586 Mov
	func_1397(var_214_float, var_215_cvector); // 0x587 NEW_2
	var_223_float = 0; var_224_cvector = CVector(0,0,0); // 0x589 PushV
	var_224_cvector = var_204_cvector; // 0x58a Mov
	func_1397(var_223_float, var_224_cvector); // 0x58b NEW_2
	var_225_float = var_214_float * var_223_float; // 0x58d Mult
	var_202_float = var_205_float / var_205_float; // 0x58e Div2
	return 0; // 0x58f Return
}


