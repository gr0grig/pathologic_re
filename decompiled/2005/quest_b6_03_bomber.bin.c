task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xd PushV
	var_13_object = var_11_object; // 0xe Mov
	func_1993(var_12_bool, var_13_object); // 0xf NEW_2
	if(var_12_bool == 0) goto Label_25; // 0x11 JumpB
	func_61(); // 0x13 NEW_2
	var_114_object = Obj(); // 0x15 PushV
	var_114_object = var_11_object; // 0x16 Mov
	func_2000(var_114_object); // 0x17 NEW_2
	
Label_25:
	return 0; // 0x19 Return
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x1b PushV
	var_13_object = var_11_object; // 0x1c Mov
	func_1978(var_12_bool, var_13_object); // 0x1d NEW_2
	if(var_12_bool == 0) goto Label_39; // 0x1f JumpB
	func_61(); // 0x21 NEW_2
	var_114_object = Obj(); // 0x23 PushV
	var_114_object = var_11_object; // 0x24 Mov
	func_1985(var_114_object); // 0x25 NEW_2
	
Label_39:
	return 0; // 0x27 Return
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_61(); // 0x2a NEW_2
	var_51_object = Obj(); // 0x2c PushV
	var_51_object = var_49_object; // 0x2d Mov
	func_2010(var_51_object); // 0x2e NEW_2
	return 0; // 0x30 Return
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x32 PushV
	var_15_object = var_11_float; // 0x33 Mov
	var_16_object = var_12_float; // 0x34 Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x35 NEW_2
	if(var_14_bool == 0) goto Label_60; // 0x37 JumpB
	var_49_object = Obj(); // 0x38 PushV
	var_49_object = var_11_float; // 0x39 Mov
	func_40(); // 0x3a NEW_2
	
Label_60:
	return 0; // 0x3c Return
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_61(); // 0x46 NEW_2
	var_13_object = Obj(); // 0x48 PushV
	var_13_object = var_11_object; // 0x49 Mov
	func_2077(); // 0x4a NEW_2
	return 0; // 0x4c Return
}


task_0_event_7(var_0_bool, var_1_bool, var_2_int, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_float = 0; var_13_float = 0; // 0x4d PushV
	var_14_int = 90; // 0x4e PushI
	var_15_bool = var_11_object == var_14_int; // 0x4f Eq
	if(var_15_bool == 0) goto Label_98; // 0x50 JumpB
	var_16_int = 90; // 0x51 PushI
	var_17_int = 1; // 0x52 PushI
	SetTimer(var_16_int, var_17_int); // 0x53 Func
	GetBrightness(var_13_float); // 0x55 Func
	var_18_float = 0.1; // 0x57 PushF
	var_19_bool = var_13_float < var_18_float; // 0x58 LT
	if(var_19_bool == 0) goto Label_98; // 0x59 JumpB
	func_61(); // 0x5b NEW_2
	TaskCall(7); // 0x5e TaskCall
	func_1070(); // 0x5f NEW_2
	TaskReturn(); // 0x60 TaskReturn
	
Label_98:
	return 2; // 0x62 Return
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	RequestClearPath(var_11_object); // 0xa4 Func
	return 0; // 0xa6 Return
}


task_0_event_28(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	Stop(); // 0xa7 Func
	return 0; // 0xa9 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0xd8 PushV
	IsOverrideActive(var_13_bool); // 0xd9 Func
	var_14_bool = var_13_bool == 0; // 0xdb Not
	if(var_14_bool == 0) goto Label_225; // 0xdc JumpB
	var_15_object = Obj(); // 0xdd PushV
	var_15_object = var_11_object; // 0xde Mov
	func_1753(var_15_object); // 0xdf NEW_2
	
Label_225:
	return 2; // 0xe1 Return
}


task_1_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_float, var_13_float, var_14_object)
{
	return 0; // 0x158 Return
}


task_1_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	return 0; // 0x15a Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	return 0; // 0x15c Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x165 PushV
	var_13_object = var_11_object; // 0x166 Mov
	func_1993(var_12_bool, var_13_object); // 0x167 NEW_2
	if(var_12_bool == 0) goto Label_369; // 0x169 JumpB
	func_533(); // 0x16b NEW_2
	var_114_object = Obj(); // 0x16d PushV
	var_114_object = var_11_object; // 0x16e Mov
	func_2000(var_114_object); // 0x16f NEW_2
	
Label_369:
	return 0; // 0x171 Return
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_533(); // 0x174 NEW_2
	var_51_object = Obj(); // 0x176 PushV
	var_51_object = var_49_object; // 0x177 Mov
	func_2010(var_51_object); // 0x178 NEW_2
	return 0; // 0x17a Return
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x17c PushV
	var_15_object = var_11_float; // 0x17d Mov
	var_16_object = var_12_float; // 0x17e Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x17f NEW_2
	if(var_14_bool == 0) goto Label_390; // 0x181 JumpB
	var_49_object = Obj(); // 0x182 PushV
	var_49_object = var_11_float; // 0x183 Mov
	func_370(); // 0x184 NEW_2
	
Label_390:
	return 0; // 0x186 Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_int = 61; // 0x1e2 PushI
	var_13_bool = var_11_object == var_12_int; // 0x1e3 Eq
	if(var_13_bool == 0) goto Label_496; // 0x1e4 JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0x1e5 PushV
	var_15_object = var_1_bool; // 0x1e6 MovT
	func_410(var_14_bool, var_15_object); // 0x1e7 NEW_2
	var_115_bool = var_14_bool == 0; // 0x1e9 Not
	if(var_115_bool == 0) goto Label_494; // 0x1ea JumpB
	Stop(); // 0x1eb Func
	var_2_cvector = 0; // 0x1ed SetNullT
	
Label_494:
	ResetAAS(); // 0x1ee Func
	
Label_496:
	return 0; // 0x1f0 Return
}


task_2_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == 0; // 0x1f2 Not
	if(var_12_bool == 0) goto Label_501; // 0x1f3 JumpB
	return 0; // 0x1f4 Return
	
Label_501:
	var_13_bool = var_11_object == var_1_bool; // 0x1f5 Eq
	if(var_13_bool == 0) goto Label_515; // 0x1f6 JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0x1f7 PushV
	var_15_object = var_1_bool; // 0x1f8 MovT
	func_410(var_14_bool, var_15_object); // 0x1f9 NEW_2
	var_115_bool = var_14_bool == 0; // 0x1fb Not
	if(var_115_bool == 0) goto Label_514; // 0x1fc JumpB
	func_533(); // 0x1fe NEW_2
	var_2_cvector = 0; // 0x200 SetNullT
	return 0; // 0x201 Return
	
Label_514:
	goto Label_522; // 0x202 Jump
	
Label_522:
	GetPFPosition(var_0_bool); // 0x20a TObjFunc
	var_117_string = "new hunt point"; // 0x20c PushS
	Trace(var_117_string); // 0x20d Func
	Stop(); // 0x20f Func
	return 0; // 0x211 Return
	
Label_515:
	var_118_bool = 0; var_119_object = Obj(); var_120_object = Obj(); // 0x203 PushV
	var_119_object = var_11_object; // 0x204 Mov
	var_120_object = var_1_bool; // 0x205 MovT
	func_391(var_118_bool, var_119_object, var_120_object); // 0x206 NEW_2
	if(var_118_bool == 0) goto Label_522; // 0x208 JumpB
	var_1_bool = var_11_object; // 0x209 TMov
}


task_2_event_28(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	Stop(); // 0x212 Func
	return 0; // 0x214 Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_533(); // 0x21d NEW_2
	var_13_object = Obj(); // 0x21f PushV
	var_13_object = var_11_object; // 0x220 Mov
	func_2077(); // 0x221 NEW_2
	return 0; // 0x223 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x225 PushV
	var_13_object = var_11_object; // 0x226 Mov
	func_1993(var_12_bool, var_13_object); // 0x227 NEW_2
	if(var_12_bool == 0) goto Label_561; // 0x229 JumpB
	func_678(); // 0x22b NEW_2
	var_113_object = Obj(); // 0x22d PushV
	var_113_object = var_11_object; // 0x22e Mov
	func_2000(var_113_object); // 0x22f NEW_2
	
Label_561:
	return 0; // 0x231 Return
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x233 PushV
	var_13_object = var_11_object; // 0x234 Mov
	func_1978(var_12_bool, var_13_object); // 0x235 NEW_2
	if(var_12_bool == 0) goto Label_575; // 0x237 JumpB
	func_678(); // 0x239 NEW_2
	var_113_object = Obj(); // 0x23b PushV
	var_113_object = var_11_object; // 0x23c Mov
	func_1985(var_113_object); // 0x23d NEW_2
	
Label_575:
	return 0; // 0x23f Return
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_678(); // 0x242 NEW_2
	var_50_object = Obj(); // 0x244 PushV
	var_50_object = var_49_object; // 0x245 Mov
	func_2010(var_50_object); // 0x246 NEW_2
	return 0; // 0x248 Return
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x24a PushV
	var_15_object = var_11_float; // 0x24b Mov
	var_16_object = var_12_float; // 0x24c Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x24d NEW_2
	if(var_14_bool == 0) goto Label_596; // 0x24f JumpB
	var_49_object = Obj(); // 0x250 PushV
	var_49_object = var_11_float; // 0x251 Mov
	func_576(); // 0x252 NEW_2
	
Label_596:
	return 0; // 0x254 Return
}


task_4_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x36a Eq
	if(var_12_bool == 0) goto Label_877; // 0x36b JumpB
	var_1_bool = 1; // 0x36c TMovB
	
Label_877:
	return 0; // 0x36d Return
}


task_4_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x36f Eq
	if(var_12_bool == 0) goto Label_882; // 0x370 JumpB
	var_1_bool = 0; // 0x371 TMovB
	
Label_882:
	return 0; // 0x372 Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x374 PushV
	var_15_object = var_11_float; // 0x375 Mov
	var_16_object = var_12_float; // 0x376 Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x377 NEW_2
	return 0; // 0x379 Return
}


task_5_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_object = Obj(); // 0x380 PushV
	var_12_object = var_11_object; // 0x381 Mov
	func_924(var_11_object, var_12_object); // 0x382 NEW_2
	return 0; // 0x384 Return
}


task_5_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x386 Eq
	if(var_12_bool == 0) goto Label_905; // 0x387 JumpB
	var_0_bool = 0; // 0x388 SetNullT
	
Label_905:
	return 0; // 0x389 Return
}


	task_5_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	var_50_object = Obj(); // 0x38b PushV
	var_50_object = var_49_object; // 0x38c Mov
	func_924(var_49_object, var_50_object); // 0x38d NEW_2
	return 0; // 0x38f Return
	}


task_5_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x391 PushV
	var_15_object = var_11_float; // 0x392 Mov
	var_16_object = var_12_float; // 0x393 Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x394 NEW_2
	if(var_14_bool == 0) goto Label_923; // 0x396 JumpB
	var_49_object = Obj(); // 0x397 PushV
	var_49_object = var_11_float; // 0x398 Mov
	func_906(); // 0x399 NEW_2
	
Label_923:
	return 0; // 0x39b Return
}


task_6_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3e3 PushV
	var_13_object = var_11_object; // 0x3e4 Mov
	func_1993(var_12_bool, var_13_object); // 0x3e5 NEW_2
	if(var_12_bool == 0) goto Label_1007; // 0x3e7 JumpB
	func_1052(var_10_object, var_11_object); // 0x3e9 NEW_2
	var_113_object = Obj(); // 0x3eb PushV
	var_113_object = var_11_object; // 0x3ec Mov
	func_2000(var_113_object); // 0x3ed NEW_2
	
Label_1007:
	return 0; // 0x3ef Return
}


task_6_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x3f0 PushV
	IsPlayerActor(var_12_bool, var_13_bool); // 0x3f1 Func
	var_14_bool = var_13_bool; // 0x3f3 Push
	if(var_14_bool == 0) goto Label_1014; // 0x3f4 JumpB
	return 2; // 0x3f5 Return
	
Label_1014:
	var_15_bool = 0; var_16_object = Obj(); // 0x3f6 PushV
	var_16_object = var_11_object; // 0x3f7 Mov
	func_2115(var_15_bool, var_16_object); // 0x3f8 NEW_2
	var_114_bool = var_15_bool == 0; // 0x3fa Not
	if(var_114_bool == 0) goto Label_1021; // 0x3fb JumpB
	return 2; // 0x3fc Return
	
Label_1021:
	IsPlayerActor(var_11_object, var_13_bool); // 0x3fd Func
	var_115_bool = var_13_bool; // 0x3ff Push
	if(var_115_bool == 0) goto Label_1030; // 0x400 JumpB
	var_2_cvector = var_11_object; // 0x401 TMov
	Stop(); // 0x402 Func
	StopGroup0(); // 0x404 Func
	
Label_1030:
	return 2; // 0x406 Return
}


	task_6_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1052(var_13_bool, var_49_object); // 0x409 NEW_2
	var_50_object = Obj(); // 0x40b PushV
	var_50_object = var_49_object; // 0x40c Mov
	func_2010(var_50_object); // 0x40d NEW_2
	return 0; // 0x40f Return
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x411 PushV
	var_15_object = var_11_object; // 0x412 Mov
	var_16_object = var_12_object; // 0x413 Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x414 NEW_2
	if(var_14_bool == 0) goto Label_1051; // 0x416 JumpB
	var_49_object = Obj(); // 0x417 PushV
	var_49_object = var_11_object; // 0x418 Mov
	func_1031(); // 0x419 NEW_2
	
Label_1051:
	return 0; // 0x41b Return
}


task_6_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1052(var_10_object, var_11_object); // 0x427 NEW_2
	var_12_object = Obj(); // 0x429 PushV
	var_12_object = var_11_object; // 0x42a Mov
	func_2077(); // 0x42b NEW_2
	return 0; // 0x42d Return
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x437 PushV
	var_13_object = var_11_object; // 0x438 Mov
	func_1993(var_12_bool, var_13_object); // 0x439 NEW_2
	if(var_12_bool == 0) goto Label_1091; // 0x43b JumpB
	func_1127(); // 0x43d NEW_2
	var_114_object = Obj(); // 0x43f PushV
	var_114_object = var_11_object; // 0x440 Mov
	func_2000(var_114_object); // 0x441 NEW_2
	
Label_1091:
	return 0; // 0x443 Return
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x445 PushV
	var_13_object = var_11_object; // 0x446 Mov
	func_1978(var_12_bool, var_13_object); // 0x447 NEW_2
	if(var_12_bool == 0) goto Label_1105; // 0x449 JumpB
	func_1127(); // 0x44b NEW_2
	var_114_object = Obj(); // 0x44d PushV
	var_114_object = var_11_object; // 0x44e Mov
	func_1985(var_114_object); // 0x44f NEW_2
	
Label_1105:
	return 0; // 0x451 Return
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1127(); // 0x454 NEW_2
	var_51_object = Obj(); // 0x456 PushV
	var_51_object = var_49_object; // 0x457 Mov
	func_2010(var_51_object); // 0x458 NEW_2
	return 0; // 0x45a Return
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x45c PushV
	var_15_object = var_11_object; // 0x45d Mov
	var_16_object = var_12_object; // 0x45e Mov
	func_2083(var_14_bool, var_15_object, var_16_object); // 0x45f NEW_2
	if(var_14_bool == 0) goto Label_1126; // 0x461 JumpB
	var_49_object = Obj(); // 0x462 PushV
	var_49_object = var_11_object; // 0x463 Mov
	func_1106(); // 0x464 NEW_2
	
Label_1126:
	return 0; // 0x466 Return
}


task_7_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1127(); // 0x472 NEW_2
	var_13_object = Obj(); // 0x474 PushV
	var_13_object = var_11_object; // 0x475 Mov
	func_2077(); // 0x476 NEW_2
	return 0; // 0x478 Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_int)
{
	var_12_int = 91; // 0x47a PushI
	var_13_bool = var_11_int == var_12_int; // 0x47b Eq
	if(var_13_bool == 0) goto Label_1152; // 0x47c JumpB
	func_1127(); // 0x47e NEW_2
	
Label_1152:
	return 0; // 0x480 Return
}


event_22(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x7e9 PushV
	var_15_object = var_11_object; // 0x7ea Mov
	var_16_int = var_12_int; // 0x7eb Mov
	var_17_float = var_13_float; // 0x7ec Mov
	func_1379(var_15_object, var_16_int, var_17_float); // 0x7ed NEW_2
	return 0; // 0x7ef Return
}


event_43(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x7f1 PushV
	var_17_object = var_11_object; // 0x7f2 Mov
	var_18_int = var_12_int; // 0x7f3 Mov
	var_19_float = var_13_float; // 0x7f4 Mov
	var_20_cvector = var_15_cvector; // 0x7f5 Mov
	var_21_cvector = var_16_cvector; // 0x7f6 Mov
	func_1447(var_19_float, var_20_cvector, var_21_cvector); // 0x7f7 NEW_2
	return 0; // 0x7f9 Return
}


event_16(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x810 PushV
	var_15_string = "health"; // 0x811 PushS
	var_16_bool = var_12_string == var_15_string; // 0x812 Eq
	if(var_16_bool == 0) goto Label_2076; // 0x813 JumpB
	var_17_string = "health"; // 0x814 PushS
	GetProperty(var_17_string, var_14_float); // 0x815 Func
	var_18_int = 0; // 0x817 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x818 LE
	if(var_19_bool == 0) goto Label_2076; // 0x819 JumpB
	SignalDeath(var_11_object); // 0x81a Func
	
Label_2076:
	return 2; // 0x81c Return
}


event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x81e PushV
	var_12_object = var_11_object; // 0x81f Mov
	func_2042(var_12_object); // 0x820 NEW_2
	return 0; // 0x822 Return
}


event_6(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	var_11_object = Obj(); // 0x88a PushV
	func_1631(var_11_object); // 0x88b NEW_2
	RemoveActor(var_11_object); // 0x88d Func
	Hold(); // 0x88f Func
	return 0; // 0x891 Return
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_2108(); // 0x1 NEW_2
	
Label_3:
	var_15_int = 90; // 0x3 PushI
	var_16_int = 10; // 0x4 PushI
	SetTimer(var_15_int, var_16_int); // 0x5 Func
	func_99(var_9_float, var_10_object); // 0x8 NEW_2
	goto Label_3; // 0xa Jump
}


func_1544(var_74_bool, var_75_string)
{
	var_74_bool = 1; // 0x609 MovB
	var_76_bool = 0; // 0x60a PushV
	var_76_bool = 1; // 0x60b MovB
	var_77_bool = 0; // 0x60c PushV
	var_77_bool = 1; // 0x60d MovB
	var_78_bool = 0; // 0x60e PushV
	var_78_bool = 1; // 0x60f MovB
	var_79_bool = 0; // 0x610 PushV
	var_79_bool = 1; // 0x611 MovB
	var_80_bool = 0; // 0x612 PushV
	var_80_bool = 1; // 0x613 MovB
	var_81_bool = 0; // 0x614 PushV
	var_81_bool = 1; // 0x615 MovB
	var_82_bool = 0; // 0x616 PushV
	var_82_bool = 1; // 0x617 MovB
	var_83_bool = 0; // 0x618 PushV
	var_83_bool = 1; // 0x619 MovB
	var_84_bool = 0; // 0x61a PushV
	var_84_bool = 1; // 0x61b MovB
	var_85_bool = 0; // 0x61c PushV
	var_85_bool = 1; // 0x61d MovB
	var_86_bool = 0; // 0x61e PushV
	var_86_bool = 1; // 0x61f MovB
	var_87_string = "woman"; // 0x620 PushS
	var_88_bool = var_75_string == var_87_string; // 0x621 Eq
	if(var_88_bool == 0) goto Label_1575; // 0x622 JumpB
	var_89_string = "worker"; // 0x623 PushS
	var_90_bool = var_75_string == var_89_string; // 0x624 Eq
	if(var_90_bool == 0) goto Label_1575; // 0x625 JumpB
	var_86_bool = 0; // 0x626 MovB
	
Label_1575:
	if(var_86_bool == 0) goto Label_1580; // 0x627 JumpB
	var_91_string = "butcher"; // 0x628 PushS
	var_92_bool = var_75_string == var_91_string; // 0x629 Eq
	if(var_92_bool == 0) goto Label_1580; // 0x62a JumpB
	var_85_bool = 0; // 0x62b MovB
	
Label_1580:
	if(var_85_bool == 0) goto Label_1585; // 0x62c JumpB
	var_93_string = "wasted_girl"; // 0x62d PushS
	var_94_bool = var_75_string == var_93_string; // 0x62e Eq
	if(var_94_bool == 0) goto Label_1585; // 0x62f JumpB
	var_84_bool = 0; // 0x630 MovB
	
Label_1585:
	if(var_84_bool == 0) goto Label_1590; // 0x631 JumpB
	var_95_string = "boy"; // 0x632 PushS
	var_96_bool = var_75_string == var_95_string; // 0x633 Eq
	if(var_96_bool == 0) goto Label_1590; // 0x634 JumpB
	var_83_bool = 0; // 0x635 MovB
	
Label_1590:
	if(var_83_bool == 0) goto Label_1595; // 0x636 JumpB
	var_97_string = "vaxxabitka"; // 0x637 PushS
	var_98_bool = var_75_string == var_97_string; // 0x638 Eq
	if(var_98_bool == 0) goto Label_1595; // 0x639 JumpB
	var_82_bool = 0; // 0x63a MovB
	
Label_1595:
	if(var_82_bool == 0) goto Label_1600; // 0x63b JumpB
	var_99_string = "unosha"; // 0x63c PushS
	var_100_bool = var_75_string == var_99_string; // 0x63d Eq
	if(var_100_bool == 0) goto Label_1600; // 0x63e JumpB
	var_81_bool = 0; // 0x63f MovB
	
Label_1600:
	if(var_81_bool == 0) goto Label_1605; // 0x640 JumpB
	var_101_string = "wasted_male"; // 0x641 PushS
	var_102_bool = var_75_string == var_101_string; // 0x642 Eq
	if(var_102_bool == 0) goto Label_1605; // 0x643 JumpB
	var_80_bool = 0; // 0x644 MovB
	
Label_1605:
	if(var_80_bool == 0) goto Label_1610; // 0x645 JumpB
	var_103_string = "alkash"; // 0x646 PushS
	var_104_bool = var_75_string == var_103_string; // 0x647 Eq
	if(var_104_bool == 0) goto Label_1610; // 0x648 JumpB
	var_79_bool = 0; // 0x649 MovB
	
Label_1610:
	if(var_79_bool == 0) goto Label_1615; // 0x64a JumpB
	var_105_string = "dohodyaga"; // 0x64b PushS
	var_106_bool = var_75_string == var_105_string; // 0x64c Eq
	if(var_106_bool == 0) goto Label_1615; // 0x64d JumpB
	var_78_bool = 0; // 0x64e MovB
	
Label_1615:
	if(var_78_bool == 0) goto Label_1620; // 0x64f JumpB
	var_107_string = "vaxxabit"; // 0x650 PushS
	var_108_bool = var_75_string == var_107_string; // 0x651 Eq
	if(var_108_bool == 0) goto Label_1620; // 0x652 JumpB
	var_77_bool = 0; // 0x653 MovB
	
Label_1620:
	if(var_77_bool == 0) goto Label_1625; // 0x654 JumpB
	var_109_string = "nudegirl"; // 0x655 PushS
	var_110_bool = var_75_string == var_109_string; // 0x656 Eq
	if(var_110_bool == 0) goto Label_1625; // 0x657 JumpB
	var_76_bool = 0; // 0x658 MovB
	
Label_1625:
	if(var_76_bool == 0) goto Label_1630; // 0x659 JumpB
	var_111_string = "morlok"; // 0x65a PushS
	var_112_bool = var_75_string == var_111_string; // 0x65b Eq
	if(var_112_bool == 0) goto Label_1630; // 0x65c JumpB
	var_74_bool = 0; // 0x65d MovB
	
Label_1630:
	return 0; // 0x65e Return
}


func_533()
{
	var_12_int = 61; // 0x215 PushI
	KillTimer(var_12_int); // 0x216 Func
	Stop(); // 0x218 Func
	return 0; // 0x21a Return
}


func_1052(var_0_bool, var_148_int)
{
	SetSeeThreshold(var_0_bool); // 0x41c Func
	SetSeeFOV(var_148_int); // 0x41e Func
	Stop(); // 0x420 Func
	StopGroup0(); // 0x422 Func
	return 0; // 0x424 Return
}


func_2083(var_14_bool, var_15_object, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x823 PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x824 PushV
	var_20_object = var_16_object; // 0x825 Mov
	func_1880(var_19_bool, var_20_object); // 0x826 NEW_2
	if(var_19_bool == 0) goto Label_2106; // 0x828 JumpB
	CanSee(var_18_bool, var_15_object); // 0x829 Func
	var_37_bool = 0; // 0x82b PushV
	var_37_bool = 1; // 0x82c MovB
	var_38_bool = var_18_bool; // 0x82d Push
	if(var_38_bool == 0) goto Label_2103; // 0x82e JumpB
	var_39_float = 0; var_40_object = Obj(); // 0x82f PushV
	var_40_object = var_15_object; // 0x830 Mov
	func_1204(var_40_object); // 0x831 NEW_2
	var_47_float = 490000.0; // 0x833 PushF
	var_48_bool = var_39_float <= var_47_float; // 0x834 LE
	if(var_48_bool == 0) goto Label_2103; // 0x835 JumpB
	var_37_bool = 0; // 0x836 MovB
	
Label_2103:
	if(var_37_bool == 0) goto Label_2106; // 0x837 JumpB
	var_14_bool = 1; // 0x838 MovB
	return 2; // 0x839 Return
	
Label_2106:
	var_14_bool = 0; // 0x83a MovB
	return 2; // 0x83b Return
}


func_1070()
{
	var_21_int = 91; // 0x42e PushI
	var_22_int = 20; // 0x42f PushI
	SetTimer(var_21_int, var_22_int); // 0x430 Func
	func_1171(); // 0x433 NEW_2
	return 0; // 0x435 Return
}


func_2108()
{
	var_11_object = GlobalVars[0]; // 0x83c PushGE
	var_12_object = Obj(); // 0x83d PushV
	func_1663(var_12_object); // 0x83e NEW_2
	var_11_object = var_12_object; // 0x83f Mov
	GlobalVars[0] = var_11_object; // 0x841 PopGE
	return 0; // 0x842 Return
}


func_61()
{
	var_20_int = 90; // 0x3d PushI
	KillTimer(var_20_int); // 0x3e Func
	func_170(var_12_float, var_13_float); // 0x41 NEW_2
	return 0; // 0x43 Return
}


func_2115(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_string = ""; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_string = ""; // 0x843 PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x844 PushV
	var_25_object = var_15_object; // 0x845 Mov
	func_1292(var_24_bool, var_25_object); // 0x846 NEW_2
	var_58_bool = var_24_bool == 0; // 0x848 Not
	if(var_58_bool == 0) goto Label_2124; // 0x849 JumpB
	var_14_bool = 0; // 0x84a MovB
	return 8; // 0x84b Return
	
Label_2124:
	var_59_object = GlobalVars[0]; // 0x84c PushGE
	in(var_20_bool, var_15_object); // 0x84d ObjFunc
	var_60_bool = var_20_bool; // 0x84f Push
	if(var_60_bool == 0) goto Label_2131; // 0x850 JumpB
	var_14_bool = 1; // 0x851 MovB
	return 8; // 0x852 Return
	
Label_2131:
	var_61_bool = 0; var_62_object = Obj(); var_63_string = ""; // 0x853 PushV
	var_62_object = var_15_object; // 0x854 Mov
	var_63_string = "disease"; // 0x855 MovS
	func_1217(var_61_bool, var_62_object, var_63_string); // 0x856 NEW_2
	var_64_bool = var_61_bool == 0; // 0x858 Not
	if(var_64_bool == 0) goto Label_2140; // 0x859 JumpB
	var_14_bool = 0; // 0x85a MovB
	return 8; // 0x85b Return
	
Label_2140:
	var_65_string = "disease"; // 0x85c PushS
	GetProperty(var_65_string, var_21_float); // 0x85d ObjFunc
	IsPlayerActor(var_15_object, var_22_bool); // 0x85f Func
	var_66_bool = var_22_bool; // 0x861 Push
	if(var_66_bool == 0) goto Label_2151; // 0x862 JumpB
	var_67_float = 0.0; // 0x863 PushF
	var_14_bool = var_21_float > var_67_float; // 0x864 GT2
	return 8; // 0x865 Return
	
Label_2151:
	var_68_float = 0.01; // 0x867 PushF
	var_69_bool = var_21_float > var_68_float; // 0x868 GT
	if(var_69_bool == 0) goto Label_2169; // 0x869 JumpB
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0x86a PushV
	var_71_object = var_15_object; // 0x86b Mov
	var_72_string = "class"; // 0x86c MovS
	func_1217(var_70_bool, var_71_object, var_72_string); // 0x86d NEW_2
	if(var_70_bool == 0) goto Label_2169; // 0x86f JumpB
	var_73_string = "class"; // 0x870 PushS
	GetProperty(var_73_string, var_23_string); // 0x871 ObjFunc
	var_74_bool = 0; var_75_string = ""; // 0x873 PushV
	var_75_string = var_23_string; // 0x874 Mov
	func_1544(var_74_bool, var_75_string); // 0x875 NEW_2
	var_14_bool = var_74_bool; // 0x876 Mov
	return 8; // 0x878 Return
	
Label_2169:
	var_14_bool = 0; // 0x879 MovB
	return 8; // 0x87a Return
}


func_597()
{
	var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; // 0x255 PushV
	WaitForAnimEnd(); // 0x256 Func
	var_58_bool = 0; // 0x258 PushV
	func_1461(var_58_bool); // 0x259 NEW_2
	var_61_bool = var_58_bool == 0; // 0x25b Not
	if(var_61_bool == 0) goto Label_606; // 0x25c JumpB
	return 14; // 0x25d Return
	
Label_606:
	var_62_int = 0; // 0x25e PushV
	func_1730(var_62_int); // 0x25f NEW_2
	var_51_int = var_62_int; // 0x260 Mov
	var_52_int = 0; // 0x262 MovI
	
Label_611:
	var_75_bool = 0; // 0x263 PushV
	var_75_bool = 0; // 0x264 MovB
	var_76_int = 5; // 0x265 PushI
	var_77_bool = var_52_int < var_76_int; // 0x266 LT
	if(var_77_bool == 0) goto Label_621; // 0x267 JumpB
	var_78_bool = 0; // 0x268 PushV
	func_1461(var_78_bool); // 0x269 NEW_2
	if(var_78_bool == 0) goto Label_621; // 0x26b JumpB
	var_75_bool = 1; // 0x26c MovB
	
Label_621:
	if(var_75_bool == 0) goto Label_673; // 0x26d JumpB
	var_79_int = 3; // 0x26e PushI
	irand(var_53_int, var_79_int); // 0x26f Func
	var_80_int = 0; // 0x271 PushI
	var_81_bool = var_53_int == var_80_int; // 0x272 Eq
	if(var_81_bool == 0) goto Label_645; // 0x273 JumpB
	var_82_int = var_51_int; // 0x274 Push
	if(var_82_int == 0) goto Label_644; // 0x275 JumpB
	irand(var_54_int, var_51_int); // 0x276 Func
	var_83_string = "all"; // 0x278 PushS
	var_84_string = ""; var_85_int = 0; // 0x279 PushV
	var_85_int = var_54_int; // 0x27a Mov
	func_1723(var_84_string, var_85_int); // 0x27b NEW_2
	PlayAnimation(var_83_string, var_84_string); // 0x27d Func
	WaitForAnimEnd(var_55_bool); // 0x27f Func
	var_86_bool = var_55_bool == 0; // 0x281 Not
	if(var_86_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_673; // 0x283 Jump
	
Label_673:
	ResetAAS(); // 0x2a1 Func
	return 14; // 0x2a3 Return
	
Label_644:
	goto Label_662; // 0x284 Jump
	
Label_662:
	var_87_bool = 0; // 0x296 PushV
	func_676(var_87_bool); // 0x297 NEW_2
	var_88_bool = var_87_bool == 0; // 0x299 Not
	if(var_88_bool == 0) goto Label_668; // 0x29a JumpB
	goto Label_673; // 0x29b Jump
	
Label_668:
	ResetAAS(); // 0x29c Func
	var_89_int = 1; // 0x29e PushI
	var_52_int = var_52_int + var_89_int; // 0x29f Add2
	goto Label_611; // 0x2a0 Jump
	
Label_645:
	var_90_int = 1; // 0x285 PushI
	var_91_bool = var_53_int == var_90_int; // 0x286 Eq
	if(var_91_bool == 0) goto Label_659; // 0x287 JumpB
	var_92_int = 4; // 0x288 PushI
	rand(var_56_float, var_92_int); // 0x289 Func
	var_93_int = 1; // 0x28b PushI
	var_94_int = var_56_float + var_93_int; // 0x28c Add
	Sleep(var_94_int, var_57_bool); // 0x28d Func
	var_95_bool = var_57_bool == 0; // 0x28f Not
	if(var_95_bool == 0) goto Label_658; // 0x290 JumpB
	goto Label_673; // 0x291 Jump
	
Label_658:
	goto Label_662; // 0x292 Jump
	
Label_659:
	var_96_int = var_52_int; // 0x293 Push
	if(var_96_int == 0) goto Label_662; // 0x294 JumpB
	goto Label_673; // 0x295 Jump
}


func_1631(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x65f PushV
	self(var_13_object); // 0x660 Func
	var_11_object = var_13_object; // 0x662 Mov
	return 2; // 0x663 Return
}


func_99(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0x63 PushV
	var_0_bool = 0; // 0x64 TMovB
	var_1_bool = 0; // 0x65 TMovB
	var_29_float = 0.5; // 0x66 PushF
	rand(var_23_float, var_29_float); // 0x67 Func
	Sleep(var_23_float); // 0x69 Func
	
Label_107:
	var_30_bool = var_0_bool == 0; // 0x6b Not
	if(var_30_bool == 0) goto Label_157; // 0x6c JumpB
	var_31_bool = var_1_bool == 0; // 0x6d Not
	if(var_31_bool == 0) goto Label_126; // 0x6e JumpB
	
Label_111:
	GetPosition(var_25_cvector); // 0x6f Func
	var_32_float = 0; // 0x71 PushV
	func_158(var_32_float); // 0x72 NEW_2
	GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool); // 0x74 Func
	var_35_bool = var_26_bool; // 0x76 Push
	if(var_35_bool == 0) goto Label_121; // 0x77 JumpB
	goto Label_125; // 0x78 Jump
	
Label_125:
	goto Label_127; // 0x7d Jump
	
Label_127:
	var_36_object = Obj(); var_37_cvector = CVector(0,0,0); // 0x7f PushV
	var_37_cvector = var_24_cvector; // 0x80 Mov
	func_179(var_36_object, var_37_cvector); // 0x81 NEW_2
	var_27_object = var_36_object; // 0x82 Mov
	var_40_bool = var_27_object != 0; // 0x84 NullNeq
	if(var_40_bool == 0) goto Label_152; // 0x85 JumpB
	RotatePath(var_27_object, var_28_bool); // 0x86 Func
	var_41_bool = var_28_bool; // 0x88 Push
	if(var_41_bool == 0) goto Label_151; // 0x89 JumpB
	var_42_bool = 0; // 0x8a PushV
	func_177(var_42_bool); // 0x8b NEW_2
	FollowPath(var_27_object, var_42_bool, var_28_bool); // 0x8d Func
	var_27_object = 0; // 0x8f SetNull
	var_43_bool = var_28_bool; // 0x90 Push
	if(var_43_bool == 0) goto Label_151; // 0x91 JumpB
	TaskCall(3); // 0x93 TaskCall
	func_597(); // 0x94 NEW_2
	TaskReturn(); // 0x95 TaskReturn
	
Label_151:
	goto Label_155; // 0x97 Jump
	
Label_155:
	var_27_object = 0; // 0x9b SetNull
	goto Label_107; // 0x9c Jump
	
Label_152:
	var_97_int = 1; // 0x98 PushI
	Sleep(var_97_int); // 0x99 Func
	
Label_121:
	var_98_int = 1; // 0x79 PushI
	Sleep(var_98_int); // 0x7a Func
	goto Label_111; // 0x7c Jump
	
Label_126:
	var_1_bool = 0; // 0x7e TMovB
	
Label_157:
	return 12; // 0x9d Return
}


func_1637(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x665 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x666 Or
	var_52_float = sqrt(var_53_int); // 0x667 Sqrt2
	var_54_float = 0.0; // 0x668 PushF
	var_55_bool = var_52_float < var_54_float; // 0x669 LT
	if(var_55_bool == 0) goto Label_1645; // 0x66a JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x66b MovV
	return 2; // 0x66c Return
	
Label_1645:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x66d Div2
	return 2; // 0x66e Return
}


func_1127()
{
	var_14_int = 91; // 0x467 PushI
	KillTimer(var_14_int); // 0x468 Func
	Stop(); // 0x46a Func
	func_1192(); // 0x46d NEW_2
	return 0; // 0x46f Return
}


func_1647(var_47_float, var_48_float, var_49_float, var_50_float)
{
	var_51_bool = var_48_float < var_49_float; // 0x670 LT
	if(var_51_bool == 0) goto Label_1652; // 0x671 JumpB
	var_47_float = var_49_float; // 0x672 Mov
	return 0; // 0x673 Return
	
Label_1652:
	var_52_bool = var_48_float > var_50_float; // 0x674 GT
	if(var_52_bool == 0) goto Label_1656; // 0x675 JumpB
	var_47_float = var_50_float; // 0x676 Mov
	return 0; // 0x677 Return
	
Label_1656:
	var_47_float = var_48_float; // 0x678 Mov
	return 0; // 0x679 Return
}


func_1658(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x67a PushV
	irand(var_93_int, var_91_int); // 0x67b Func
	var_89_bool = var_93_int < var_90_int; // 0x67d LT2
	return 2; // 0x67e Return
}


func_2171(var_52_object)
{
	var_53_bool = 0; var_54_bool = 0; // 0x87b PushV
	var_55_bool = var_52_object == 0; // 0x87c NullEq
	if(var_55_bool == 0) goto Label_2175; // 0x87d JumpB
	return 2; // 0x87e Return
	
Label_2175:
	var_56_object = GlobalVars[0]; // 0x87f PushGE
	in(var_54_bool, var_52_object); // 0x880 ObjFunc
	var_57_bool = var_54_bool == 0; // 0x882 Not
	if(var_57_bool == 0) goto Label_2183; // 0x883 JumpB
	var_58_object = GlobalVars[0]; // 0x884 PushGE
	add(var_52_object); // 0x885 ObjFunc
	
Label_2183:
	return 2; // 0x887 Return
}


func_1663(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x67f PushV
	CreateObjectSet(var_14_object); // 0x680 Func
	var_12_object = var_14_object; // 0x682 Mov
	return 2; // 0x683 Return
}


func_1153(var_30_bool)
{
	var_31_float = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x481 PushV
	rand(var_33_float); // 0x482 Func
	var_35_float = 0.3; // 0x484 PushF
	var_36_bool = var_33_float < var_35_float; // 0x485 LT
	if(var_36_bool == 0) goto Label_1169; // 0x486 JumpB
	var_37_string = "all"; // 0x487 PushS
	var_38_string = "hunt"; // 0x488 PushS
	PlayAnimation(var_37_string, var_38_string); // 0x489 Func
	WaitForAnimEnd(var_34_bool); // 0x48b Func
	var_39_bool = var_34_bool == 0; // 0x48d Not
	if(var_39_bool == 0) goto Label_1169; // 0x48e JumpB
	var_30_bool = 1; // 0x48f MovB
	return 4; // 0x490 Return
	
Label_1169:
	var_30_bool = 0; // 0x491 MovB
	return 4; // 0x492 Return
}


func_1669(var_18_bool, var_19_object, var_20_float)
{
	var_21_bool = var_19_object == 0; // 0x686 Not
	if(var_21_bool == 0) goto Label_1674; // 0x687 JumpB
	var_18_bool = 0; // 0x688 MovB
	return 0; // 0x689 Return
	
Label_1674:
	var_22_int = 0; // 0x68a PushI
	var_23_bool = var_20_float > var_22_int; // 0x68b GT
	if(var_23_bool == 0) goto Label_1681; // 0x68c JumpB
	var_24_int = 8; // 0x68d PushI
	SendWorldWndMessage(var_24_int); // 0x68e Func
	goto Label_1690; // 0x690 Jump
	
Label_1690:
	var_25_float = 0; // 0x69a PushV
	var_25_float = var_20_float; // 0x69b Mov
	func_1704(var_25_float); // 0x69c NEW_2
	var_29_bool = 0; var_30_object = Obj(); var_31_string = ""; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x69e PushV
	var_30_object = var_19_object; // 0x69f Mov
	var_31_string = "reputation"; // 0x6a0 MovS
	var_32_float = var_20_float; // 0x6a1 Mov
	var_33_float = 0; // 0x6a2 MovI
	var_34_float = 1; // 0x6a3 MovI
	func_1229(var_29_bool, var_30_object, var_31_string, var_32_float, var_33_float, var_34_float); // 0x6a4 NEW_2
	var_18_bool = 1; // 0x6a6 MovB
	return 0; // 0x6a7 Return
	
Label_1681:
	var_53_int = 0; // 0x691 PushI
	var_54_bool = var_20_float < var_53_int; // 0x692 LT
	if(var_54_bool == 0) goto Label_1688; // 0x693 JumpB
	var_55_int = 9; // 0x694 PushI
	SendWorldWndMessage(var_55_int); // 0x695 Func
	goto Label_1690; // 0x697 Jump
	
Label_1688:
	var_18_bool = 0; // 0x698 MovB
	return 0; // 0x699 Return
}


func_2184()
{
	return 0; // 0x889 Return
}


func_1171()
{
	var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0; // 0x493 PushV
	
Label_1172:
	RandVec2D(var_26_float, var_27_float); // 0x494 Func
	Rotate(var_26_float, var_27_float, var_28_bool); // 0x496 Func
	var_29_bool = var_28_bool == 0; // 0x498 Not
	if(var_29_bool == 0) goto Label_1179; // 0x499 JumpB
	goto Label_1191; // 0x49a Jump
	
Label_1191:
	return 6; // 0x4a7 Return
	
Label_1179:
	var_30_bool = 0; // 0x49b PushV
	func_1153(var_30_bool); // 0x49c NEW_2
	if(var_30_bool == 0) goto Label_1184; // 0x49e JumpB
	goto Label_1191; // 0x49f Jump
	
Label_1184:
	var_40_int = 5; // 0x4a0 PushI
	Sleep(var_40_int, var_28_bool); // 0x4a1 Func
	var_41_bool = var_28_bool == 0; // 0x4a3 Not
	if(var_41_bool == 0) goto Label_1190; // 0x4a4 JumpB
	goto Label_1191; // 0x4a5 Jump
	
Label_1190:
	goto Label_1172; // 0x4a6 Jump
}


func_158(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x9e PushV
	GetCameraFarDistance(var_34_float); // 0x9f Func
	var_32_float = var_34_float; // 0xa1 Mov
	return 2; // 0xa2 Return
}


func_676(var_87_bool)
{
	var_87_bool = 1; // 0x2a4 MovB
	return 0; // 0x2a5 Return
}


func_678()
{
	StopAnimation(); // 0x2a6 Func
	StopGroup0(); // 0x2a8 Func
	return 0; // 0x2aa Return
}


func_1192()
{
	Stop(); // 0x4a8 Func
	StopGroup0(); // 0x4aa Func
	return 0; // 0x4ac Return
}


func_1704(var_25_float)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x6a8 PushV
	CreateFloatVector(var_27_object); // 0x6a9 Func
	add(var_25_float); // 0x6ab ObjFunc
	var_28_int = 16; // 0x6ad PushI
	SendWorldWndMessage(var_28_int, var_27_object); // 0x6ae Func
	return 2; // 0x6b0 Return
}


func_170(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0xaa TMovB
	var_1_bool = 0; // 0xab TMovB
	Stop(); // 0xac Func
	StopGroup0(); // 0xae Func
	return 0; // 0xb0 Return
}


func_683(var_0_bool, var_1_bool, var_59_object, var_131_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_int = 0; var_66_object = Obj(); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_int = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_int = 0; var_77_object = Obj(); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_int = 0; // 0x2ab PushV
	var_0_bool = var_59_object; // 0x2ac TMov
	CanSee(var_83_int, var_59_object); // 0x2ad Func
	var_84_bool = 0; var_85_object = Obj(); // 0x2af PushV
	var_85_object = var_59_object; // 0x2b0 Mov
	func_1326(var_85_object); // 0x2b1 NEW_2
	var_98_bool = 0; var_99_object = Obj(); // 0x2b3 PushV
	var_99_object = var_59_object; // 0x2b4 Mov
	func_1292(var_98_bool, var_99_object); // 0x2b5 NEW_2
	var_126_bool = var_98_bool == 0; // 0x2b7 Not
	if(var_126_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 22; // 0x2b9 Return
	
Label_698:
	Face(var_59_object); // 0x2ba Func
	
Label_700:
	var_127_bool = 0; var_128_object = Obj(); // 0x2bc PushV
	var_128_object = var_0_bool; // 0x2bd MovT
	func_1292(var_127_bool, var_128_object); // 0x2be NEW_2
	if(var_127_bool == 0) goto Label_870; // 0x2c0 JumpB
	var_129_bool = var_1_bool == 0; // 0x2c1 Not
	if(var_129_bool == 0) goto Label_722; // 0x2c2 JumpB
	StopAsync(); // 0x2c3 Func
	var_130_object = Obj(); // 0x2c5 PushV
	TaskCall(5); // 0x2c6 TaskCall
	func_890(var_131_object, var_130_object); // 0x2c7 NEW_2
	TaskReturn(); // 0x2c8 TaskReturn
	var_0_bool = var_131_object; // 0x2c9 TMov
	var_133_bool = var_0_bool == 0; // 0x2cb NullEq
	if(var_133_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_870; // 0x2cd Jump
	
Label_870:
	StopAsync(); // 0x366 Func
	return 22; // 0x368 Return
	
Label_718:
	CanSee(var_83_int, var_0_bool); // 0x2ce Func
	Face(var_0_bool); // 0x2d0 Func
	
Label_722:
	var_134_object = Obj(); // 0x2d2 PushV
	var_134_object = var_0_bool; // 0x2d3 MovT
	func_1714(var_134_object); // 0x2d4 NEW_2
	ReportAttack(var_0_bool); // 0x2d6 Func
	GetPosition(var_73_cvector); // 0x2d8 Func
	GetPosition(var_74_cvector); // 0x2da TObjFunc
	var_75_cvector = var_74_cvector - var_73_cvector; // 0x2dc Sub2
	var_139_int = 0; var_140_float = 0; // 0x2dd PushV
	var_141_int = var_75_cvector | var_75_cvector; // 0x2de Or
	var_140_float = sqrt(var_141_int); // 0x2df Sqrt2
	func_1942(var_139_int, var_140_float); // 0x2e0 NEW_2
	var_76_int = var_139_int; // 0x2e1 Mov
	var_146_string = "all"; // 0x2e3 PushS
	var_147_string = "attack_begin"; // 0x2e4 PushS
	var_148_int = var_147_string + var_76_int; // 0x2e5 Add
	PlayAnimation(var_146_string, var_148_int); // 0x2e6 Func
	WaitForAnimEnd(); // 0x2e8 Func
	var_149_bool = var_0_bool == 0; // 0x2ea NullEq
	if(var_149_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_870; // 0x2ec Jump
	
Label_749:
	var_150_string = "all"; // 0x2ed PushS
	var_151_string = "attack_end"; // 0x2ee PushS
	var_152_int = var_151_string + var_76_int; // 0x2ef Add
	PlayAnimation(var_150_string, var_152_int); // 0x2f0 Func
	GetScene(var_77_object); // 0x2f2 Func
	var_153_string = "attack"; // 0x2f4 PushS
	var_154_int = var_153_string + var_76_int; // 0x2f5 Add
	GetGeometryLocator(var_154_int, var_79_bool, var_73_cvector, var_78_cvector); // 0x2f6 Func
	var_155_string = "scripted"; // 0x2f8 PushS
	var_156_cvector = CVector(0.0, 0.0, 1.0); // 0x2f9 PushVec
	var_157_string = "grenade.xml"; // 0x2fa PushS
	AddActorByType(var_80_object, var_155_string, var_77_object, var_73_cvector, var_156_cvector, var_157_string); // 0x2fb Func
	var_158_string = "Owner"; // 0x2fd PushS
	var_159_object = Obj(); // 0x2fe PushV
	func_1631(var_159_object); // 0x2ff NEW_2
	SetScriptProperty(var_158_string, var_159_object); // 0x301 ObjFunc
	var_162_int = 1; // 0x303 PushI
	var_163_bool = var_76_int == var_162_int; // 0x304 Eq
	if(var_163_bool == 0) goto Label_779; // 0x305 JumpB
	var_164_string = "StartVelocity"; // 0x306 PushS
	var_165_cvector = CVector(0.0, -500.0, 0.0); // 0x307 PushVec
	SetScriptProperty(var_164_string, var_165_cvector); // 0x308 ObjFunc
	goto Label_829; // 0x30a Jump
	
Label_829:
	var_166_string = "DamageAmount"; // 0x33d PushS
	var_167_float = 0.8; // 0x33e PushF
	SetScriptProperty(var_166_string, var_167_float); // 0x33f ObjFunc
	var_168_string = "DamageType"; // 0x341 PushS
	var_169_int = 2; // 0x342 PushI
	SetScriptProperty(var_168_string, var_169_int); // 0x343 ObjFunc
	WaitForAnimEnd(); // 0x345 Func
	var_170_int = 1; // 0x347 PushI
	var_171_bool = var_76_int == var_170_int; // 0x348 Eq
	if(var_171_bool == 0) goto Label_867; // 0x349 JumpB
	var_172_int = 2; // 0x34a PushI
	irand(var_83_int, var_172_int); // 0x34b Func
	var_173_string = "scream"; // 0x34d PushS
	var_174_int = 1; // 0x34e PushI
	var_175_int = var_83_int + var_174_int; // 0x34f Add
	var_176_int = var_173_string + var_175_int; // 0x350 Add
	Speak(var_176_int); // 0x351 Func
	var_177_object = Obj(); // 0x353 PushV
	var_177_object = var_0_bool; // 0x354 MovT
	func_1466(var_177_object); // 0x355 NEW_2
	var_184_string = "all"; // 0x357 PushS
	var_185_string = "scream"; // 0x358 PushS
	var_186_int = 1; // 0x359 PushI
	var_187_int = var_83_int + var_186_int; // 0x35a Add
	var_188_int = var_185_string + var_187_int; // 0x35b Add
	PlayAnimation(var_184_string, var_188_int); // 0x35c Func
	WaitForAnimEnd(); // 0x35e Func
	var_189_string = "head"; // 0x360 PushS
	UnlookAsync(var_189_string); // 0x361 Func
	
Label_867:
	var_80_object = 0; // 0x363 SetNull
	var_77_object = 0; // 0x364 SetNull
	goto Label_700; // 0x365 Jump
	
Label_779:
	var_190_int = 1; // 0x30b PushI
	var_191_float = GetByIndex(var_78_cvector, 1); // 0x30c PushE
	var_192_float = GetByIndex(var_78_cvector, 1); // 0x30d PushE
	var_193_float = var_191_float * var_192_float; // 0x30e Mult
	var_194_int = var_190_int - var_193_float; // 0x30f Sub
	var_195_float = GetByIndex(var_75_cvector, 0); // 0x310 PushE
	var_196_float = GetByIndex(var_75_cvector, 0); // 0x311 PushE
	var_197_float = var_195_float * var_196_float; // 0x312 Mult
	var_198_float = GetByIndex(var_75_cvector, 2); // 0x313 PushE
	var_199_float = GetByIndex(var_75_cvector, 2); // 0x314 PushE
	var_200_float = var_198_float * var_199_float; // 0x315 Mult
	var_201_int = var_197_float + var_200_float; // 0x316 Add
	var_202_float = var_194_int / var_201_int; // 0x317 Div
	var_81_float = sqrt(var_202_float); // 0x318 Sqrt2
	var_203_float = GetByIndex(var_78_cvector, 0); // 0x319 PushE
	var_204_float = GetByIndex(var_75_cvector, 0); // 0x31a PushE
	var_203_float = var_204_float * var_81_float; // 0x31b Mult2
	SetByIndex(var_78_cvector, 0) = var_203_float; // 0x31c PopE
	var_205_float = GetByIndex(var_78_cvector, 2); // 0x31d PushE
	var_206_float = GetByIndex(var_75_cvector, 2); // 0x31e PushE
	var_205_float = var_206_float * var_81_float; // 0x31f Mult2
	SetByIndex(var_78_cvector, 2) = var_205_float; // 0x320 PopE
	GetPosition(var_74_cvector); // 0x321 TObjFunc
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); // 0x323 PushV
	var_208_cvector = var_73_cvector; // 0x324 Mov
	var_209_cvector = var_74_cvector; // 0x325 Mov
	var_210_cvector = var_78_cvector; // 0x326 Mov
	func_1898(var_207_float, var_208_cvector, var_209_cvector, var_210_cvector); // 0x327 NEW_2
	var_82_float = var_207_float; // 0x328 Mov
	var_254_int = 0; // 0x32a PushI
	var_255_bool = var_82_float < var_254_int; // 0x32b LT
	if(var_255_bool == 0) goto Label_819; // 0x32c JumpB
	var_256_float = 0; var_257_int = 0; // 0x32d PushV
	var_257_int = var_76_int; // 0x32e Mov
	func_1956(var_256_float, var_257_int); // 0x32f NEW_2
	var_82_float = var_256_float; // 0x330 Mov
	goto Label_825; // 0x332 Jump
	
Label_825:
	var_260_string = "StartVelocity"; // 0x339 PushS
	var_261_float = var_78_cvector * var_82_float; // 0x33a Mult
	SetScriptProperty(var_260_string, var_261_float); // 0x33b ObjFunc
	
Label_819:
	var_262_float = 0; var_263_int = 0; var_264_float = 0; // 0x333 PushV
	var_263_int = var_76_int; // 0x334 Mov
	var_264_float = var_82_float; // 0x335 Mov
	func_1964(var_263_int, var_264_float); // 0x336 NEW_2
	var_82_float = var_262_float; // 0x337 Mov
}


func_1197(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4ad PushV
	GetPosition(var_49_cvector); // 0x4ae Func
	GetPosition(var_50_cvector); // 0x4b0 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4b2 Sub2
	return 4; // 0x4b3 Return
}


func_177(var_42_bool)
{
	var_42_bool = 0; // 0xb1 MovB
	return 0; // 0xb2 Return
}


func_1714(var_134_object)
{
	var_135_bool = 0; var_136_bool = 0; // 0x6b2 PushV
	IsPlayerActor(var_134_object, var_136_bool); // 0x6b3 Func
	var_137_bool = var_136_bool; // 0x6b5 Push
	if(var_137_bool == 0) goto Label_1722; // 0x6b6 JumpB
	var_138_string = "attack"; // 0x6b7 PushS
	PlayGlobalMusic(var_138_string); // 0x6b8 Func
	
Label_1722:
	return 2; // 0x6ba Return
}


func_179(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xb3 PushV
	FindShiftedPathTo(var_39_object, var_37_cvector); // 0xb4 Func
	var_36_object = var_39_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_1204(var_39_float)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x4b4 PushV
	GetPosition(var_44_cvector); // 0x4b5 Func
	GetPosition(var_45_cvector); // 0x4b7 ObjFunc
	var_46_cvector = var_45_cvector - var_44_cvector; // 0x4b9 Sub2
	var_39_float = var_46_cvector | var_46_cvector; // 0x4ba Or2
	return 6; // 0x4bb Return
}


func_185(var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0xb9 PushV
	IsPlayerActor(var_56_object, var_58_bool); // 0xba Func
	var_59_bool = var_58_bool; // 0xbc Push
	if(var_59_bool == 0) goto Label_193; // 0xbd JumpB
	func_1838(); // 0xbf NEW_2
	
Label_193:
	func_1814(); // 0xc2 NEW_2
	var_136_object = Obj(); // 0xc4 PushV
	var_136_object = var_56_object; // 0xc5 Mov
	func_201(var_136_object); // 0xc6 NEW_2
	return 2; // 0xc8 Return
}


func_1723(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x6bb PushV
	var_71_string = "idle"; // 0x6bc MovS
	var_72_int = var_69_int; // 0x6bd Push
	if(var_72_int == 0) goto Label_1728; // 0x6be JumpB
	var_71_string = var_71_string + var_69_int; // 0x6bf Add2
	
Label_1728:
	var_68_string = var_71_string; // 0x6c0 Mov
	return 2; // 0x6c1 Return
}


func_1212(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x4bc PushV
	IsPlayerActor(var_15_object, var_17_bool); // 0x4bd Func
	var_14_bool = var_17_bool; // 0x4bf Mov
	return 2; // 0x4c0 Return
}


func_1217(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0; // 0x4c1 PushV
	var_42_string = "HasProperty"; // 0x4c2 PushS
	var_43_int = 2; // 0x4c3 PushI
	var_44_bool = IsFuncExist(var_38_object, var_42_string, var_43_int); // 0x4c4 FuncExist
	var_45_bool = var_44_bool == 0; // 0x4c5 Not
	if(var_45_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_37_bool = 0; // 0x4c7 MovB
	return 2; // 0x4c8 Return
	
Label_1225:
	HasProperty(var_39_string, var_41_bool); // 0x4c9 ObjFunc
	var_37_bool = var_41_bool; // 0x4cb Mov
	return 2; // 0x4cc Return
}


func_1730(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0; // 0x6c2 PushV
	var_65_int = 0; // 0x6c3 MovI
	
Label_1732:
	var_67_string = "all"; // 0x6c4 PushS
	var_68_string = ""; var_69_int = 0; // 0x6c5 PushV
	var_69_int = var_65_int; // 0x6c6 Mov
	func_1723(var_68_string, var_69_int); // 0x6c7 NEW_2
	HasAnimation(var_66_bool, var_67_string, var_68_string); // 0x6c9 Func
	var_73_bool = var_66_bool == 0; // 0x6cb Not
	if(var_73_bool == 0) goto Label_1742; // 0x6cc JumpB
	goto Label_1745; // 0x6cd Jump
	
Label_1745:
	var_62_int = var_65_int; // 0x6d1 Mov
	return 4; // 0x6d2 Return
	
Label_1742:
	var_74_int = 1; // 0x6ce PushI
	var_65_int = var_65_int + var_74_int; // 0x6cf Add2
	goto Label_1732; // 0x6d0 Jump
}


func_201(var_136_object)
{
	EventDisable(0); // 0xca EventDisable
	var_137_object = Obj(); // 0xcb PushV
	var_137_object = var_136_object; // 0xcc Mov
	func_226(var_137_object); // 0xcd NEW_2
	var_217_int = 50; // 0xcf PushI
	var_218_int = 40; // 0xd0 PushI
	SetRTEnvelope(var_217_int, var_218_int); // 0xd1 Func
	EventEnable(0); // 0xd3 EventEnable
	
Label_212:
	Hold(); // 0xd4 Func
	goto Label_212; // 0xd6 Jump
}


func_1229(var_29_bool, var_30_object, var_31_string, var_32_float, var_33_float, var_34_float)
{
	var_35_float = 0; var_36_float = 0; // 0x4cd PushV
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x4ce PushV
	var_38_object = var_30_object; // 0x4cf Mov
	var_39_string = var_31_string; // 0x4d0 Mov
	func_1217(var_37_bool, var_38_object, var_39_string); // 0x4d1 NEW_2
	var_46_bool = var_37_bool == 0; // 0x4d3 Not
	if(var_46_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_29_bool = 0; // 0x4d5 MovB
	return 2; // 0x4d6 Return
	
Label_1239:
	GetProperty(var_31_string, var_36_float); // 0x4d7 ObjFunc
	var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; // 0x4d9 PushV
	var_48_float = var_36_float + var_32_float; // 0x4da Add2
	var_49_float = var_33_float; // 0x4db Mov
	var_50_float = var_34_float; // 0x4dc Mov
	func_1647(var_47_float, var_48_float, var_49_float, var_50_float); // 0x4dd NEW_2
	SetProperty(var_31_string, var_47_float); // 0x4df ObjFunc
	var_29_bool = 1; // 0x4e1 MovB
	return 2; // 0x4e2 Return
}


func_1747(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0x6d3 PushV
	var_119_string = "branch"; // 0x6d4 PushS
	GetVariable(var_119_string, var_118_int); // 0x6d5 Func
	var_116_int = var_118_int; // 0x6d7 Mov
	return 2; // 0x6d8 Return
}


func_1753(var_15_object)
{
	var_16_int = 0; // 0x6da PushV
	func_1747(var_16_int); // 0x6db NEW_2
	var_20_int = 1; // 0x6dd PushI
	var_21_bool = var_16_int == var_20_int; // 0x6de Eq
	if(var_21_bool == 0) goto Label_1763; // 0x6df JumpB
	WorkWithCorpse(var_15_object); // 0x6e0 Func
	goto Label_1765; // 0x6e2 Jump
	
Label_1765:
	return 0; // 0x6e5 Return
	
Label_1763:
	Barter(var_15_object); // 0x6e3 Func
}


func_226(var_137_object)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_string = ""; var_143_object = Obj(); var_144_bool = 0; var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_string = ""; var_153_object = Obj(); var_154_bool = 0; var_155_bool = 0; var_156_float = 0; var_157_cvector = CVector(0,0,0); // 0xe2 PushV
	var_158_bool = var_137_object == 0; // 0xe3 NullEq
	if(var_158_bool == 0) goto Label_234; // 0xe4 JumpB
	var_159_string = ""; // 0xe5 PushV
	var_159_string = "fdie"; // 0xe6 MovS
	func_317(var_159_string); // 0xe7 NEW_2
	goto Label_316; // 0xe9 Jump
	
Label_316:
	return 20; // 0x13c Return
	
Label_234:
	GetPosition(var_148_cvector); // 0xea ObjFunc
	GetPosition(var_149_cvector); // 0xec Func
	GetDirection(var_150_cvector); // 0xee Func
	var_151_cvector = var_149_cvector - var_148_cvector; // 0xf0 Sub2
	var_191_float = GetByIndex(var_151_cvector, 0); // 0xf1 PushE
	var_192_float = GetByIndex(var_150_cvector, 0); // 0xf2 PushE
	var_193_float = var_191_float * var_192_float; // 0xf3 Mult
	var_194_float = GetByIndex(var_151_cvector, 2); // 0xf4 PushE
	var_195_float = GetByIndex(var_150_cvector, 2); // 0xf5 PushE
	var_196_float = var_194_float * var_195_float; // 0xf6 Mult
	var_197_int = var_193_float + var_196_float; // 0xf7 Add
	var_198_int = 0; // 0xf8 PushI
	var_199_bool = var_197_int >= var_198_int; // 0xf9 GE
	if(var_199_bool == 0) goto Label_253; // 0xfa JumpB
	var_152_string = "fdie"; // 0xfb MovS
	goto Label_254; // 0xfc Jump
	
Label_254:
	RemoveRTEnvelope(); // 0xfe Func
	SetDeathState(); // 0x100 Func
	Stop(); // 0x102 Func
	StopAsync(); // 0x104 Func
	var_153_object = var_137_object; // 0x106 Mov
	var_200_string = "GetScriptProperty"; // 0x107 PushS
	var_201_int = 2; // 0x108 PushI
	var_202_bool = IsFuncExist(var_137_object, var_200_string, var_201_int); // 0x109 FuncExist
	if(var_202_bool == 0) goto Label_278; // 0x10a JumpB
	var_203_string = "Owner"; // 0x10b PushS
	HasScriptProperty(var_154_bool, var_203_string); // 0x10c ObjFunc
	var_204_bool = var_154_bool; // 0x10e Push
	if(var_204_bool == 0) goto Label_278; // 0x10f JumpB
	var_205_string = "Owner"; // 0x110 PushS
	GetScriptProperty(var_153_object, var_205_string); // 0x111 ObjFunc
	var_206_bool = var_153_object == 0; // 0x113 NullEq
	if(var_206_bool == 0) goto Label_278; // 0x114 JumpB
	var_153_object = var_137_object; // 0x115 Mov
	
Label_278:
	var_207_string = "@GetEyesHeight"; // 0x116 PushS
	var_208_int = 1; // 0x117 PushI
	var_209_bool = IsFuncExist(var_153_object, var_207_string, var_208_int); // 0x118 FuncExist
	if(var_209_bool == 0) goto Label_293; // 0x119 JumpB
	GetEyesHeight(var_156_float); // 0x11a ObjFunc
	var_157_cvector = CVector(0.0, 0.0, 0.0); // 0x11c MovV
	var_210_float = GetByIndex(var_157_cvector, 1); // 0x11d PushE
	var_210_float = var_156_float; // 0x11e Mov
	SetByIndex(var_157_cvector, 1) = var_210_float; // 0x11f PopE
	var_211_string = "head"; // 0x120 PushS
	LookAsync(var_137_object, var_211_string, var_157_cvector); // 0x121 Func
	var_155_bool = 1; // 0x123 MovB
	goto Label_294; // 0x124 Jump
	
Label_294:
	var_212_string = ""; // 0x126 PushV
	var_212_string = var_152_string; // 0x127 Mov
	func_1503(var_212_string); // 0x128 NEW_2
	var_213_string = "all"; // 0x12a PushS
	PlayAnimation(var_213_string, var_152_string); // 0x12b Func
	WaitForAnimEnd(); // 0x12d Func
	var_214_bool = var_155_bool; // 0x12f Push
	if(var_214_bool == 0) goto Label_310; // 0x130 JumpB
	StopAsync(); // 0x131 Func
	var_215_string = "head"; // 0x133 PushS
	UnlookAsync(var_215_string); // 0x134 Func
	
Label_310:
	var_216_string = "all"; // 0x136 PushS
	LockAnimationEnd(var_216_string, var_152_string); // 0x137 Func
	RemoveEnvelope(); // 0x139 Func
	var_153_object = 0; // 0x13b SetNull
	
Label_293:
	var_155_bool = 0; // 0x125 MovB
	
Label_253:
	var_152_string = "bdie"; // 0xfd MovS
}


func_1251(var_113_bool)
{
	var_115_bool = 0; var_116_bool = 0; // 0x4e3 PushV
	IsDead(var_116_bool); // 0x4e4 ObjFunc
	var_113_bool = var_116_bool; // 0x4e6 Mov
	return 2; // 0x4e7 Return
}


func_1766(var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x6e6 PushV
	var_71_bool = var_65_int > var_66_int; // 0x6e7 GT
	if(var_71_bool == 0) goto Label_1773; // 0x6e8 JumpB
	var_72_string = "GenerateMoney: iMin > iMax"; // 0x6e9 PushS
	Trace(var_72_string); // 0x6ea Func
	return 4; // 0x6ec Return
	
Label_1773:
	var_69_int = 0; // 0x6ed MovI
	var_73_bool = var_65_int != var_66_int; // 0x6ee Neq
	if(var_73_bool == 0) goto Label_1780; // 0x6ef JumpB
	var_74_int = var_66_int - var_65_int; // 0x6f0 Sub
	irand(var_69_int, var_74_int); // 0x6f1 Func
	goto Label_1784; // 0x6f3 Jump
	
Label_1784:
	var_69_int = var_69_int + var_65_int; // 0x6f8 Add2
	var_75_int = 0; // 0x6f9 PushI
	var_76_bool = var_69_int == var_75_int; // 0x6fa Eq
	if(var_76_bool == 0) goto Label_1789; // 0x6fb JumpB
	return 4; // 0x6fc Return
	
Label_1789:
	var_77_int = 0; var_78_string = ""; // 0x6fd PushV
	var_78_string = "Money"; // 0x6fe MovS
	func_1875(var_77_int, var_78_string); // 0x6ff NEW_2
	var_81_int = 0; // 0x701 PushI
	AddItem(var_70_bool, var_77_int, var_81_int, var_69_int); // 0x702 Func
	return 4; // 0x704 Return
	
Label_1780:
	var_82_int = 0; // 0x6f4 PushI
	var_83_bool = var_65_int == var_82_int; // 0x6f5 Eq
	if(var_83_bool == 0) goto Label_1784; // 0x6f6 JumpB
	return 4; // 0x6f7 Return
}


func_1256(var_102_bool, var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); // 0x4e8 PushV
	var_108_bool = var_103_object == 0; // 0x4e9 NullEq
	if(var_108_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_102_bool = 0; // 0x4eb MovB
	return 4; // 0x4ec Return
	
Label_1261:
	var_109_bool = 0; // 0x4ed PushV
	var_109_bool = 0; // 0x4ee MovB
	var_110_string = "IsDead"; // 0x4ef PushS
	var_111_int = 1; // 0x4f0 PushI
	var_112_bool = IsFuncExist(var_103_object, var_110_string, var_111_int); // 0x4f1 FuncExist
	if(var_112_bool == 0) goto Label_1273; // 0x4f2 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x4f3 PushV
	var_114_object = var_103_object; // 0x4f4 Mov
	func_1251(var_114_object); // 0x4f5 NEW_2
	if(var_113_bool == 0) goto Label_1273; // 0x4f7 JumpB
	var_109_bool = 1; // 0x4f8 MovB
	
Label_1273:
	if(var_109_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_102_bool = 0; // 0x4fa MovB
	return 4; // 0x4fb Return
	
Label_1276:
	GetScene(var_106_object); // 0x4fc Func
	var_117_bool = var_106_object == 0; // 0x4fe NullEq
	if(var_117_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_102_bool = 0; // 0x500 MovB
	return 4; // 0x501 Return
	
Label_1282:
	GetScene(var_107_object); // 0x502 ObjFunc
	var_118_bool = var_106_object != var_107_object; // 0x504 Neq
	if(var_118_bool == 0) goto Label_1288; // 0x505 JumpB
	var_102_bool = 0; // 0x506 MovB
	return 4; // 0x507 Return
	
Label_1288:
	var_102_bool = 1; // 0x508 MovB
	return 4; // 0x509 Return
}


func_1797(var_122_string)
{
	var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; var_128_bool = 0; // 0x705 PushV
	CreateInvItem(var_126_object); // 0x706 Func
	SetItemName(var_122_string); // 0x708 ObjFunc
	var_129_string = "Organ"; // 0x70a PushS
	var_130_int = 1; // 0x70b PushI
	SetProperty(var_129_string, var_130_int); // 0x70c ObjFunc
	GetItemID(var_127_int); // 0x70e ObjFunc
	var_131_int = 0; // 0x710 PushI
	var_132_int = 1; // 0x711 PushI
	AddItem(var_128_bool, var_126_object, var_131_int, var_132_int); // 0x712 Func
	return 6; // 0x714 Return
}


func_1292(var_98_bool, var_99_object)
{
	var_100_int = 0; var_101_int = 0; // 0x50c PushV
	var_102_bool = 0; var_103_object = Obj(); // 0x50d PushV
	var_103_object = var_99_object; // 0x50e Mov
	func_1256(var_102_bool, var_103_object); // 0x50f NEW_2
	var_119_bool = var_102_bool == 0; // 0x511 Not
	if(var_119_bool == 0) goto Label_1301; // 0x512 JumpB
	var_98_bool = 0; // 0x513 MovB
	return 2; // 0x514 Return
	
Label_1301:
	var_120_bool = 0; var_121_object = Obj(); var_122_string = ""; // 0x515 PushV
	var_121_object = var_99_object; // 0x516 Mov
	var_122_string = "noaccess"; // 0x517 MovS
	func_1217(var_120_bool, var_121_object, var_122_string); // 0x518 NEW_2
	var_123_bool = var_120_bool == 0; // 0x51a Not
	if(var_123_bool == 0) goto Label_1310; // 0x51b JumpB
	var_98_bool = 1; // 0x51c MovB
	return 2; // 0x51d Return
	
Label_1310:
	var_124_string = "noaccess"; // 0x51e PushS
	GetProperty(var_124_string, var_101_int); // 0x51f ObjFunc
	var_125_int = 0; // 0x521 PushI
	var_98_bool = var_101_int == var_125_int; // 0x522 Eq2
	return 2; // 0x523 Return
}


func_1814()
{
	var_116_int = 0; // 0x716 PushV
	func_1747(var_116_int); // 0x717 NEW_2
	var_120_int = 1; // 0x719 PushI
	var_121_bool = var_116_int != var_120_int; // 0x71a Neq
	if(var_121_bool == 0) goto Label_1821; // 0x71b JumpB
	return 0; // 0x71c Return
	
Label_1821:
	var_122_string = ""; // 0x71d PushV
	var_122_string = "liver"; // 0x71e MovS
	func_1797(var_122_string); // 0x71f NEW_2
	var_133_string = ""; // 0x721 PushV
	var_133_string = "kidney"; // 0x722 MovS
	func_1797(var_133_string); // 0x723 NEW_2
	var_134_string = ""; // 0x725 PushV
	var_134_string = "heart"; // 0x726 MovS
	func_1797(var_134_string); // 0x727 NEW_2
	var_135_string = ""; // 0x729 PushV
	var_135_string = "blood"; // 0x72a MovS
	func_1797(var_135_string); // 0x72b NEW_2
	return 0; // 0x72d Return
}


func_1316(var_88_bool, var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_bool = 0; // 0x524 PushV
	GetPosition(var_93_cvector); // 0x525 Func
	var_94_cvector = var_89_cvector - var_93_cvector; // 0x527 Sub2
	var_96_float = GetByIndex(var_94_cvector, 0); // 0x528 PushE
	var_97_float = GetByIndex(var_94_cvector, 2); // 0x529 PushE
	Rotate(var_96_float, var_97_float, var_95_bool); // 0x52a Func
	var_88_bool = var_95_bool; // 0x52c Mov
	return 6; // 0x52d Return
}


func_1838()
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x72e PushV
	var_64_int = 0; // 0x72f PushI
	ClearSubContainer(var_64_int); // 0x730 Func
	var_65_int = 0; var_66_int = 0; // 0x732 PushV
	var_65_int = 600; // 0x733 MovI
	var_66_int = 1500; // 0x734 MovI
	func_1766(var_65_int, var_66_int); // 0x735 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x737 PushV
	var_84_string = "fresh_meat"; // 0x738 MovS
	var_85_int = 1; // 0x739 MovI
	var_86_int = 6; // 0x73a MovI
	func_1477(var_84_string, var_85_int, var_86_int); // 0x73b NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x73d PushV
	var_95_string = "rusk"; // 0x73e MovS
	var_96_int = 1; // 0x73f MovI
	var_97_int = 6; // 0x740 MovI
	var_98_int = 2; // 0x741 MovI
	func_1488(var_95_string, var_96_int, var_97_int, var_98_int); // 0x742 NEW_2
	var_109_string = ""; var_110_int = 0; var_111_int = 0; // 0x744 PushV
	var_109_string = "gamma_pills"; // 0x745 MovS
	var_110_int = 1; // 0x746 MovI
	var_111_int = 3; // 0x747 MovI
	func_1477(var_109_string, var_110_int, var_111_int); // 0x748 NEW_2
	var_112_int = 0; var_113_string = ""; // 0x74a PushV
	var_113_string = "bomber_mark"; // 0x74b MovS
	func_1875(var_112_int, var_113_string); // 0x74c NEW_2
	var_114_int = 0; // 0x74e PushI
	var_115_int = 1; // 0x74f PushI
	AddItem(var_63_bool, var_112_int, var_114_int, var_115_int); // 0x750 Func
	return 4; // 0x752 Return
}


func_1326(var_84_bool)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x52e PushV
	GetPosition(var_87_cvector); // 0x52f ObjFunc
	var_88_bool = 0; var_89_cvector = CVector(0,0,0); // 0x531 PushV
	var_89_cvector = var_87_cvector; // 0x532 Mov
	func_1316(var_88_bool, var_89_cvector); // 0x533 NEW_2
	var_84_bool = var_88_bool; // 0x534 Mov
	return 2; // 0x536 Return
}


func_1335(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x537 PushV
	var_43_bool = var_28_object == 0; // 0x538 NullEq
	if(var_43_bool == 0) goto Label_1339; // 0x539 JumpB
	return 14; // 0x53a Return
	
Label_1339:
	IsDead(var_36_bool); // 0x53b Func
	var_44_bool = var_36_bool; // 0x53d Push
	if(var_44_bool == 0) goto Label_1344; // 0x53e JumpB
	return 14; // 0x53f Return
	
Label_1344:
	GetSecondaryAnimationType(var_37_int); // 0x540 Func
	var_45_int = 0; // 0x542 PushI
	var_46_bool = var_37_int < var_45_int; // 0x543 LT
	if(var_46_bool == 0) goto Label_1350; // 0x544 JumpB
	return 14; // 0x545 Return
	
Label_1350:
	GetPosition(var_38_cvector); // 0x546 ObjFunc
	GetPosition(var_39_cvector); // 0x548 Func
	GetDirection(var_40_cvector); // 0x54a Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x54c Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x54d PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x54e PushE
	var_49_float = var_47_float * var_48_float; // 0x54f Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x550 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x551 PushE
	var_52_float = var_50_float * var_51_float; // 0x552 Mult
	var_53_int = var_49_float + var_52_float; // 0x553 Add
	var_54_int = 0; // 0x554 PushI
	var_55_bool = var_53_int >= var_54_int; // 0x555 GE
	if(var_55_bool == 0) goto Label_1369; // 0x556 JumpB
	var_42_string = "fhit"; // 0x557 MovS
	goto Label_1370; // 0x558 Jump
	
Label_1370:
	var_56_string = "hit_react"; // 0x55a PushS
	var_57_string = "1"; // 0x55b PushS
	var_58_int = var_42_string + var_57_string; // 0x55c Add
	var_59_string = "2"; // 0x55d PushS
	var_60_int = var_42_string + var_59_string; // 0x55e Add
	var_61_int = -10; // 0x55f PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x560 Func
	return 14; // 0x562 Return
	
Label_1369:
	var_42_string = "bhit"; // 0x559 MovS
}


func_317(var_159_string)
{
	RemoveRTEnvelope(); // 0x13e Func
	SetDeathState(); // 0x140 Func
	Stop(); // 0x142 Func
	StopAsync(); // 0x144 Func
	StopSecondaryAnimation(); // 0x146 Func
	var_160_string = ""; // 0x148 PushV
	var_160_string = var_159_string; // 0x149 Mov
	func_1503(var_160_string); // 0x14a NEW_2
	var_189_string = "all"; // 0x14c PushS
	PlayAnimation(var_189_string, var_159_string); // 0x14d Func
	WaitForAnimEnd(); // 0x14f Func
	var_190_string = "all"; // 0x151 PushS
	LockAnimationEnd(var_190_string, var_159_string); // 0x152 Func
	RemoveEnvelope(); // 0x154 Func
	return 0; // 0x156 Return
}


func_1875(var_77_int, var_78_string)
{
	var_79_int = 0; var_80_int = 0; // 0x753 PushV
	GetInvItemByName(var_80_int, var_78_string); // 0x754 Func
	var_77_int = var_80_int; // 0x756 Mov
	return 2; // 0x757 Return
}


func_1880(var_19_bool, var_20_object)
{
	var_21_string = ""; var_22_string = ""; var_23_string = ""; var_24_string = ""; // 0x758 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x759 PushV
	var_26_object = var_20_object; // 0x75a Mov
	var_27_string = "class"; // 0x75b MovS
	func_1217(var_25_bool, var_26_object, var_27_string); // 0x75c NEW_2
	var_34_bool = var_25_bool == 0; // 0x75e Not
	if(var_34_bool == 0) goto Label_1890; // 0x75f JumpB
	var_19_bool = 0; // 0x760 MovB
	return 4; // 0x761 Return
	
Label_1890:
	var_35_string = "class"; // 0x762 PushS
	GetProperty(var_35_string, var_23_string); // 0x763 Func
	var_36_string = "class"; // 0x765 PushS
	GetProperty(var_36_string, var_24_string); // 0x766 ObjFunc
	var_19_bool = var_24_string == var_23_string; // 0x768 Eq2
	return 4; // 0x769 Return
}


func_349(var_115_object)
{
	var_119_object = Obj(); var_120_bool = 0; // 0x15e PushV
	var_119_object = var_115_object; // 0x15f Mov
	var_120_bool = 0; // 0x160 MovB
	func_417(var_116_cvector, var_117_object, var_118_object, var_115_object, var_119_object, var_120_bool); // 0x161 NEW_2
	return 0; // 0x163 Return
}


func_1379(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x563 PushV
	var_36_bool = 0; // 0x564 PushV
	var_36_bool = 0; // 0x565 MovB
	var_37_bool = 0; // 0x566 PushV
	var_37_bool = 0; // 0x567 MovB
	var_38_object = var_15_object; // 0x568 Push
	if(var_38_object == 0) goto Label_1390; // 0x569 JumpB
	var_39_int = 4; // 0x56a PushI
	var_40_bool = var_16_int != var_39_int; // 0x56b Neq
	if(var_40_bool == 0) goto Label_1390; // 0x56c JumpB
	var_37_bool = 1; // 0x56d MovB
	
Label_1390:
	if(var_37_bool == 0) goto Label_1395; // 0x56e JumpB
	var_41_int = 5; // 0x56f PushI
	var_42_bool = var_16_int != var_41_int; // 0x570 Neq
	if(var_42_bool == 0) goto Label_1395; // 0x571 JumpB
	var_36_bool = 1; // 0x572 MovB
	
Label_1395:
	if(var_36_bool == 0) goto Label_1442; // 0x573 JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x574 PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x575 PushV
	var_46_object = var_15_object; // 0x576 Mov
	func_1197(var_46_object); // 0x577 NEW_2
	var_44_cvector = var_45_cvector; // 0x578 Mov
	func_1637(var_43_cvector, var_44_cvector); // 0x57a NEW_2
	var_27_cvector = var_43_cvector; // 0x57b Mov
	CreateVectorVector(var_28_object); // 0x57d Func
	var_29_int = 1; // 0x57f MovI
	
Label_1408:
	var_56_string = "hit"; // 0x580 PushS
	var_57_int = var_56_string + var_29_int; // 0x581 Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x582 Func
	var_58_bool = var_30_bool == 0; // 0x584 Not
	if(var_58_bool == 0) goto Label_1415; // 0x585 JumpB
	goto Label_1424; // 0x586 Jump
	
Label_1424:
	size(var_33_int); // 0x590 ObjFunc
	var_59_int = var_33_int; // 0x592 Push
	if(var_59_int == 0) goto Label_1441; // 0x593 JumpB
	irand(var_34_int, var_33_int); // 0x594 Func
	get(var_35_cvector, var_34_int); // 0x596 ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x598 PushV
	var_60_object = var_15_object; // 0x599 Mov
	var_61_int = var_16_int; // 0x59a Mov
	var_62_float = var_17_float; // 0x59b Mov
	var_63_cvector = var_35_cvector; // 0x59c Mov
	var_64_cvector = -var_27_cvector; // 0x59d Neg2
	func_1447(var_62_float, var_63_cvector, var_64_cvector); // 0x59e NEW_2
	return 18; // 0x5a0 Return
	
Label_1441:
	var_28_object = 0; // 0x5a1 SetNull
	
Label_1442:
	var_105_object = Obj(); // 0x5a2 PushV
	var_105_object = var_15_object; // 0x5a3 Mov
	func_1335(var_105_object); // 0x5a4 NEW_2
	return 18; // 0x5a6 Return
	
Label_1415:
	var_106_int = var_32_cvector | var_27_cvector; // 0x587 Or
	var_107_float = 0.70711; // 0x588 PushF
	var_108_bool = var_106_int >= var_107_float; // 0x589 GE
	if(var_108_bool == 0) goto Label_1421; // 0x58a JumpB
	add(var_31_cvector); // 0x58b ObjFunc
	
Label_1421:
	var_109_int = 1; // 0x58d PushI
	var_29_int = var_29_int + var_109_int; // 0x58e Add2
	goto Label_1408; // 0x58f Jump
}


func_1898(var_207_float, var_208_cvector, var_209_cvector, var_210_cvector)
{
	var_211_float = 0; var_212_float = 0; var_213_float = 0; var_214_float = 0; var_215_float = 0; var_216_float = 0; var_217_float = 0; var_218_float = 0; var_219_float = 0; var_220_float = 0; // 0x76a PushV
	var_221_float = GetByIndex(var_210_cvector, 0); // 0x76b PushE
	var_222_float = GetByIndex(var_210_cvector, 0); // 0x76c PushE
	var_223_float = var_221_float * var_222_float; // 0x76d Mult
	var_224_float = GetByIndex(var_210_cvector, 2); // 0x76e PushE
	var_225_float = GetByIndex(var_210_cvector, 2); // 0x76f PushE
	var_226_float = var_224_float * var_225_float; // 0x770 Mult
	var_227_int = var_223_float + var_226_float; // 0x771 Add
	var_216_float = sqrt(var_227_int); // 0x772 Sqrt2
	var_228_float = GetByIndex(var_210_cvector, 1); // 0x773 PushE
	var_217_float = var_228_float / var_228_float; // 0x774 Div2
	var_229_float = GetByIndex(var_208_cvector, 0); // 0x775 PushE
	var_230_float = GetByIndex(var_209_cvector, 0); // 0x776 PushE
	var_231_int = var_229_float - var_230_float; // 0x777 Sub
	var_232_float = GetByIndex(var_208_cvector, 0); // 0x778 PushE
	var_233_float = GetByIndex(var_209_cvector, 0); // 0x779 PushE
	var_234_int = var_232_float - var_233_float; // 0x77a Sub
	var_235_float = var_231_int * var_234_int; // 0x77b Mult
	var_236_float = GetByIndex(var_208_cvector, 2); // 0x77c PushE
	var_237_float = GetByIndex(var_209_cvector, 2); // 0x77d PushE
	var_238_int = var_236_float - var_237_float; // 0x77e Sub
	var_239_float = GetByIndex(var_208_cvector, 2); // 0x77f PushE
	var_240_float = GetByIndex(var_209_cvector, 2); // 0x780 PushE
	var_241_int = var_239_float - var_240_float; // 0x781 Sub
	var_242_float = var_238_int * var_241_int; // 0x782 Mult
	var_243_int = var_235_float + var_242_float; // 0x783 Add
	var_218_float = sqrt(var_243_int); // 0x784 Sqrt2
	var_244_float = 500.0; // 0x785 PushF
	var_245_float = var_218_float * var_217_float; // 0x786 Mult
	var_246_float = GetByIndex(var_209_cvector, 1); // 0x787 PushE
	var_247_float = GetByIndex(var_208_cvector, 1); // 0x788 PushE
	var_248_int = var_246_float - var_247_float; // 0x789 Sub
	var_249_int = var_245_float - var_248_int; // 0x78a Sub
	var_219_float = var_244_float / var_244_float; // 0x78b Div2
	var_250_int = 0; // 0x78c PushI
	var_251_bool = var_219_float < var_250_int; // 0x78d LT
	if(var_251_bool == 0) goto Label_1937; // 0x78e JumpB
	var_207_float = -1; // 0x78f MovI
	return 10; // 0x790 Return
	
Label_1937:
	var_252_float = var_218_float / var_216_float; // 0x791 Div
	var_253_float = sqrt(var_219_float); // 0x792 Sqrt
	var_220_float = var_252_float * var_253_float; // 0x793 Mult2
	var_207_float = var_220_float; // 0x794 Mov
	return 10; // 0x795 Return
}


func_890(var_0_bool, var_130_object)
{
	var_132_int = 5; // 0x37a PushI
	Sleep(var_132_int); // 0x37b Func
	var_130_object = var_0_bool; // 0x37d MovT
	return 0; // 0x37e Return
}


func_391(var_118_bool, var_119_object, var_120_object)
{
	var_121_bool = 0; var_122_bool = 0; // 0x187 PushV
	IsPlayerActor(var_119_object, var_122_bool); // 0x188 Func
	var_123_bool = var_122_bool; // 0x18a Push
	if(var_123_bool == 0) goto Label_398; // 0x18b JumpB
	var_118_bool = 0; // 0x18c MovB
	return 2; // 0x18d Return
	
Label_398:
	var_124_bool = 0; var_125_object = Obj(); // 0x18e PushV
	var_125_object = var_120_object; // 0x18f Mov
	func_2115(var_124_bool, var_125_object); // 0x190 NEW_2
	var_126_bool = var_124_bool == 0; // 0x192 Not
	if(var_126_bool == 0) goto Label_406; // 0x193 JumpB
	var_118_bool = 0; // 0x194 MovB
	return 2; // 0x195 Return
	
Label_406:
	IsPlayerActor(var_120_object, var_122_bool); // 0x196 Func
	var_118_bool = var_122_bool; // 0x198 Mov
	return 2; // 0x199 Return
}


func_1942(var_139_int, var_140_float)
{
	var_142_int = 200; // 0x797 PushI
	var_143_bool = var_140_float < var_142_int; // 0x798 LT
	if(var_143_bool == 0) goto Label_1949; // 0x799 JumpB
	var_139_int = 1; // 0x79a MovI
	return 0; // 0x79b Return
	
Label_1949:
	var_144_int = 1000; // 0x79d PushI
	var_145_bool = var_140_float < var_144_int; // 0x79e LT
	if(var_145_bool == 0) goto Label_1954; // 0x79f JumpB
	var_139_int = 2; // 0x7a0 MovI
	return 0; // 0x7a1 Return
	
Label_1954:
	var_139_int = 3; // 0x7a2 MovI
	return 0; // 0x7a3 Return
}


func_410(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x19b PushV
	var_17_object = var_15_object; // 0x19c Mov
	func_2115(var_16_bool, var_17_object); // 0x19d NEW_2
	var_14_bool = var_16_bool; // 0x19e Mov
	return 0; // 0x1a0 Return
}


func_924(var_0_bool, var_50_object)
{
	var_51_bool = 0; // 0x39d PushV
	var_51_bool = 0; // 0x39e MovB
	var_52_bool = var_0_bool == 0; // 0x39f NullEq
	if(var_52_bool == 0) goto Label_935; // 0x3a0 JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x3a1 PushV
	var_54_object = var_50_object; // 0x3a2 Mov
	func_2115(var_53_bool, var_54_object); // 0x3a3 NEW_2
	if(var_53_bool == 0) goto Label_935; // 0x3a5 JumpB
	var_51_bool = 1; // 0x3a6 MovB
	
Label_935:
	if(var_51_bool == 0) goto Label_939; // 0x3a7 JumpB
	var_0_bool = var_50_object; // 0x3a8 TMov
	StopGroup0(); // 0x3a9 Func
	
Label_939:
	return 0; // 0x3ab Return
}


func_417(var_0_bool, var_1_bool, var_2_cvector, var_119_object, var_120_bool, var_142_float)
{
	var_121_bool = 0; var_122_bool = 0; // 0x1a1 PushV
	var_123_bool = 0; var_124_object = Obj(); // 0x1a2 PushV
	var_124_object = var_1_bool; // 0x1a3 MovT
	func_1292(var_123_bool, var_124_object); // 0x1a4 NEW_2
	var_125_bool = var_123_bool == 0; // 0x1a6 Not
	if(var_125_bool == 0) goto Label_425; // 0x1a7 JumpB
	return 2; // 0x1a8 Return
	
Label_425:
	var_1_bool = var_119_object; // 0x1a9 TMov
	var_126_object = Obj(); // 0x1aa PushV
	var_126_object = var_1_bool; // 0x1ab MovT
	func_1714(var_126_object); // 0x1ac NEW_2
	GetPFPosition(var_0_bool); // 0x1ae TObjFunc
	var_131_int = 61; // 0x1b0 PushI
	var_132_float = 0.5; // 0x1b1 PushF
	SetTimer(var_131_int, var_132_float); // 0x1b2 Func
	
Label_436:
	FindPathTo(var_121_bool, var_0_bool); // 0x1b4 Func
	var_133_bool = var_2_cvector == 0; // 0x1b6 NullEq
	if(var_133_bool == 0) goto Label_444; // 0x1b7 JumpB
	var_134_string = "Can't find path to noise source"; // 0x1b8 PushS
	Trace(var_134_string); // 0x1b9 Func
	goto Label_477; // 0x1bb Jump
	
Label_477:
	var_135_int = 61; // 0x1dd PushI
	KillTimer(var_135_int); // 0x1de Func
	return 2; // 0x1e0 Return
	
Label_444:
	FollowPath(var_121_bool, var_120_bool, var_122_bool); // 0x1bc Func
	var_136_bool = var_122_bool == 0; // 0x1be Not
	if(var_136_bool == 0) goto Label_452; // 0x1bf JumpB
	var_137_bool = var_2_cvector == 0; // 0x1c0 NullEq
	if(var_137_bool == 0) goto Label_451; // 0x1c1 JumpB
	goto Label_477; // 0x1c2 Jump
	
Label_451:
	goto Label_475; // 0x1c3 Jump
	
Label_475:
	var_138_bool = var_2_cvector != 0; // 0x1db NullNeq
	if(var_138_bool == 0) goto Label_436; // 0x1dc JumpB
	
Label_452:
	var_139_int = 61; // 0x1c4 PushI
	KillTimer(var_139_int); // 0x1c5 Func
	var_140_object = Obj(); var_141_object = Obj(); // 0x1c7 PushV
	var_141_object = var_1_bool; // 0x1c8 MovT
	TaskCall(6); // 0x1c9 TaskCall
	func_940(var_142_float, var_143_float, var_144_object, var_140_object, var_141_object); // 0x1ca NEW_2
	TaskReturn(); // 0x1cb TaskReturn
	var_1_bool = var_142_float; // 0x1cc TMov
	var_164_int = 61; // 0x1ce PushI
	var_165_float = 0.5; // 0x1cf PushF
	SetTimer(var_164_int, var_165_float); // 0x1d0 Func
	var_166_bool = 0; var_167_object = Obj(); // 0x1d2 PushV
	var_167_object = var_1_bool; // 0x1d3 MovT
	func_1292(var_166_bool, var_167_object); // 0x1d4 NEW_2
	var_168_bool = var_166_bool == 0; // 0x1d6 Not
	if(var_168_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_477; // 0x1d8 Jump
	
Label_473:
	GetPFPosition(var_0_bool); // 0x1d9 TObjFunc
}


func_1956(var_256_float, var_257_int)
{
	var_258_int = 1; // 0x7a5 PushI
	var_259_bool = var_257_int == var_258_int; // 0x7a6 Eq
	if(var_259_bool == 0) goto Label_1962; // 0x7a7 JumpB
	var_256_float = 30; // 0x7a8 MovI
	return 0; // 0x7a9 Return
	
Label_1962:
	var_256_float = 700; // 0x7aa MovI
	return 0; // 0x7ab Return
}


func_1447(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x5a7 PushV
	GetScene(var_24_object); // 0x5a8 Func
	var_26_string = "scripted"; // 0x5aa PushS
	var_27_string = "blood_dir.xml"; // 0x5ab PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x5ac Func
	var_28_object = Obj(); // 0x5ae PushV
	var_28_object = var_17_object; // 0x5af Mov
	func_1335(var_28_object); // 0x5b0 NEW_2
	return 4; // 0x5b2 Return
}


func_1964(var_262_float, var_264_float)
{
	var_265_int = 10; // 0x7ad PushI
	var_266_bool = var_264_float < var_265_int; // 0x7ae LT
	if(var_266_bool == 0) goto Label_1971; // 0x7af JumpB
	var_262_float = 10; // 0x7b0 MovI
	return 0; // 0x7b1 Return
	
Label_1971:
	var_267_int = 1500; // 0x7b3 PushI
	var_268_bool = var_264_float > var_267_int; // 0x7b4 GT
	if(var_268_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_262_float = 1500; // 0x7b6 MovI
	return 0; // 0x7b7 Return
	
Label_1976:
	var_262_float = var_264_float; // 0x7b8 Mov
	return 0; // 0x7b9 Return
}


func_940(var_0_bool, var_1_bool, var_2_cvector, var_140_object, var_141_object)
{
	var_145_bool = 0; var_146_int = 0; var_147_bool = 0; var_148_int = 0; // 0x3ac PushV
	GetSeeThreshold(var_0_bool); // 0x3ad Func
	GetSeeFOV(var_148_int); // 0x3af Func
	var_149_float = 1.5; // 0x3b1 PushF
	var_150_float = var_0_bool / var_149_float; // 0x3b2 Div
	SetSeeThreshold(var_150_float); // 0x3b3 Func
	var_2_cvector = var_141_object; // 0x3b5 TMov
	var_151_object = Obj(); // 0x3b6 PushV
	var_151_object = var_2_cvector; // 0x3b7 MovT
	func_1714(var_151_object); // 0x3b8 NEW_2
	var_148_int = 0; // 0x3ba MovI
	
Label_955:
	var_152_int = 3; // 0x3bb PushI
	var_153_bool = var_148_int < var_152_int; // 0x3bc LT
	if(var_153_bool == 0) goto Label_986; // 0x3bd JumpB
	var_154_float = 1.8; // 0x3be PushF
	var_155_float = var_1_bool * var_154_float; // 0x3bf Mult
	SetSeeFOV(var_155_float); // 0x3c0 Func
	var_156_string = "all"; // 0x3c2 PushS
	var_157_string = "hunt"; // 0x3c3 PushS
	PlayAnimation(var_156_string, var_157_string); // 0x3c4 Func
	WaitForAnimEnd(var_147_bool); // 0x3c6 Func
	SetSeeFOV(var_148_int); // 0x3c8 Func
	var_158_bool = var_147_bool == 0; // 0x3ca Not
	if(var_158_bool == 0) goto Label_973; // 0x3cb JumpB
	goto Label_986; // 0x3cc Jump
	
Label_986:
	func_1052(var_147_bool, var_148_int); // 0x3db NEW_2
	var_159_bool = var_147_bool; // 0x3dd Push
	if(var_159_bool == 0) goto Label_992; // 0x3de JumpB
	var_2_cvector = 0; // 0x3df SetNullT
	
Label_992:
	var_140_object = var_2_cvector; // 0x3e0 MovT
	return 4; // 0x3e1 Return
	
Label_973:
	var_160_int = 2; // 0x3cd PushI
	Sleep(var_160_int, var_147_bool); // 0x3ce Func
	var_161_bool = var_147_bool == 0; // 0x3d0 Not
	if(var_161_bool == 0) goto Label_979; // 0x3d1 JumpB
	goto Label_986; // 0x3d2 Jump
	
Label_979:
	var_162_object = Obj(); // 0x3d3 PushV
	var_162_object = var_2_cvector; // 0x3d4 MovT
	func_1714(var_162_object); // 0x3d5 NEW_2
	var_163_int = 1; // 0x3d7 PushI
	var_148_int = var_148_int + var_163_int; // 0x3d8 Add2
	goto Label_955; // 0x3d9 Jump
}


func_1461(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x5b5 PushV
	IsLoaded(var_60_bool); // 0x5b6 Func
	var_58_bool = var_60_bool; // 0x5b8 Mov
	return 2; // 0x5b9 Return
}


func_1978(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x7bb PushV
	var_15_object = var_13_object; // 0x7bc Mov
	func_2115(var_14_bool, var_15_object); // 0x7bd NEW_2
	var_12_bool = var_14_bool; // 0x7be Mov
	return 0; // 0x7c0 Return
}


func_1466(var_177_object)
{
	var_178_float = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_cvector = CVector(0,0,0); // 0x5ba PushV
	GetEyesHeight(var_180_float); // 0x5bb ObjFunc
	var_181_cvector = CVector(0.0, 0.0, 0.0); // 0x5bd MovV
	var_182_float = GetByIndex(var_181_cvector, 1); // 0x5be PushE
	var_182_float = var_180_float; // 0x5bf Mov
	SetByIndex(var_181_cvector, 1) = var_182_float; // 0x5c0 PopE
	var_183_string = "head"; // 0x5c1 PushS
	LookAsync(var_177_object, var_183_string, var_181_cvector); // 0x5c2 Func
	return 4; // 0x5c4 Return
}


func_1985(var_114_object)
{
	var_115_object = Obj(); // 0x7c2 PushV
	var_115_object = var_114_object; // 0x7c3 Mov
	TaskCall(2); // 0x7c4 TaskCall
	func_349(var_115_object); // 0x7c5 NEW_2
	TaskReturn(); // 0x7c6 TaskReturn
	return 0; // 0x7c8 Return
}


func_1477(var_84_string, var_85_int, var_86_int)
{
	var_87_bool = 0; var_88_bool = 0; // 0x5c5 PushV
	var_89_bool = 0; var_90_int = 0; var_91_int = 0; // 0x5c6 PushV
	var_90_int = var_85_int; // 0x5c7 Mov
	var_91_int = var_86_int; // 0x5c8 Mov
	func_1658(var_89_bool, var_90_int, var_91_int); // 0x5c9 NEW_2
	if(var_89_bool == 0) goto Label_1487; // 0x5cb JumpB
	var_94_int = 0; // 0x5cc PushI
	AddItem(var_88_bool, var_84_string, var_94_int); // 0x5cd Func
	
Label_1487:
	return 2; // 0x5cf Return
}


func_1993(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x7ca PushV
	var_15_object = var_13_object; // 0x7cb Mov
	func_2115(var_14_bool, var_15_object); // 0x7cc NEW_2
	var_12_bool = var_14_bool; // 0x7cd Mov
	return 0; // 0x7cf Return
}


func_2000(var_114_object)
{
	var_115_object = Obj(); // 0x7d1 PushV
	var_115_object = var_114_object; // 0x7d2 Mov
	TaskCall(4); // 0x7d3 TaskCall
	func_683(var_114_object, var_116_object, var_117_bool, var_115_object); // 0x7d4 NEW_2
	TaskReturn(); // 0x7d5 TaskReturn
	ResetAAS(); // 0x7d7 Func
	return 0; // 0x7d9 Return
}


func_1488(var_95_string, var_96_int, var_97_int, var_98_int)
{
	var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_bool = 0; // 0x5d0 PushV
	var_103_bool = 0; var_104_int = 0; var_105_int = 0; // 0x5d1 PushV
	var_104_int = var_96_int; // 0x5d2 Mov
	var_105_int = var_97_int; // 0x5d3 Mov
	func_1658(var_103_bool, var_104_int, var_105_int); // 0x5d4 NEW_2
	if(var_103_bool == 0) goto Label_1502; // 0x5d6 JumpB
	irand(var_101_int, var_98_int); // 0x5d7 Func
	var_106_int = 0; // 0x5d9 PushI
	var_107_int = 1; // 0x5da PushI
	var_108_int = var_101_int + var_107_int; // 0x5db Add
	AddItem(var_102_bool, var_95_string, var_106_int, var_108_int); // 0x5dc Func
	
Label_1502:
	return 4; // 0x5de Return
}


func_2010(var_51_object)
{
	var_52_object = Obj(); // 0x7db PushV
	var_52_object = var_51_object; // 0x7dc Mov
	func_2171(var_52_object); // 0x7dd NEW_2
	var_59_object = Obj(); // 0x7df PushV
	var_59_object = var_51_object; // 0x7e0 Mov
	TaskCall(4); // 0x7e1 TaskCall
	func_683(var_51_object, var_60_object, var_61_bool, var_59_object); // 0x7e2 NEW_2
	TaskReturn(); // 0x7e3 TaskReturn
	ResetAAS(); // 0x7e5 Func
	return 0; // 0x7e7 Return
}


func_1503(var_160_string)
{
	var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_float = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_bool = 0; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); // 0x5df PushV
	IsExisting3DSound(var_169_bool, var_160_string); // 0x5e0 Func
	var_177_bool = var_169_bool == 0; // 0x5e2 Not
	if(var_177_bool == 0) goto Label_1528; // 0x5e3 JumpB
	var_170_int = 0; // 0x5e4 MovI
	
Label_1509:
	var_178_int = 1; // 0x5e5 PushI
	var_179_int = var_170_int + var_178_int; // 0x5e6 Add
	var_180_int = var_160_string + var_179_int; // 0x5e7 Add
	IsExisting3DSound(var_171_bool, var_180_int); // 0x5e8 Func
	var_181_bool = var_171_bool == 0; // 0x5ea Not
	if(var_181_bool == 0) goto Label_1517; // 0x5eb JumpB
	goto Label_1520; // 0x5ec Jump
	
Label_1520:
	var_182_bool = var_170_int == 0; // 0x5f0 Not
	if(var_182_bool == 0) goto Label_1523; // 0x5f1 JumpB
	return 16; // 0x5f2 Return
	
Label_1523:
	irand(var_172_int, var_170_int); // 0x5f3 Func
	var_183_int = 1; // 0x5f5 PushI
	var_184_int = var_172_int + var_183_int; // 0x5f6 Add
	var_160_string = var_160_string + var_184_int; // 0x5f7 Add2
	
Label_1528:
	Is3DSoundLoaded(var_173_bool, var_160_string); // 0x5f8 Func
	var_185_bool = var_173_bool; // 0x5fa Push
	if(var_185_bool == 0) goto Label_1543; // 0x5fb JumpB
	GetEyesHeight(var_174_float); // 0x5fc Func
	GetDirection(var_175_cvector); // 0x5fe Func
	var_186_int = 50; // 0x600 PushI
	var_176_cvector = var_175_cvector * var_186_int; // 0x601 Mult2
	var_187_float = GetByIndex(var_176_cvector, 1); // 0x602 PushE
	var_187_float = var_187_float + var_174_float; // 0x603 Add2
	SetByIndex(var_176_cvector, 1) = var_187_float; // 0x604 PopE
	PlayGlobalSound(var_160_string, var_176_cvector); // 0x605 Func
	
Label_1543:
	return 16; // 0x607 Return
	
Label_1517:
	var_188_int = 1; // 0x5ed PushI
	var_170_int = var_170_int + var_188_int; // 0x5ee Add2
	goto Label_1509; // 0x5ef Jump
}


func_2042(var_12_object)
{
	var_13_object = Obj(); // 0x7fb PushV
	var_13_object = var_12_object; // 0x7fc Mov
	func_2184(); // 0x7fd NEW_2
	var_14_bool = 0; var_15_object = Obj(); // 0x7ff PushV
	var_15_object = var_12_object; // 0x800 Mov
	func_1212(var_14_bool, var_15_object); // 0x801 NEW_2
	if(var_14_bool == 0) goto Label_2057; // 0x803 JumpB
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x804 PushV
	var_19_object = var_12_object; // 0x805 Mov
	var_20_float = 0.05; // 0x806 MovF
	func_1669(var_18_bool, var_19_object, var_20_float); // 0x807 NEW_2
	
Label_2057:
	var_56_object = Obj(); // 0x809 PushV
	var_56_object = var_12_object; // 0x80a Mov
	TaskCall(1); // 0x80b TaskCall
	func_185(var_56_object); // 0x80c NEW_2
	TaskReturn(); // 0x80d TaskReturn
	return 0; // 0x80f Return
}


