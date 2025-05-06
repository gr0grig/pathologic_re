task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xd PushV
	var_13_object = var_11_object; // 0xe Mov
	func_1996(var_12_bool, var_13_object); // 0xf NEW_2
	if(var_12_bool == 0) goto Label_25; // 0x11 JumpB
	func_61(); // 0x13 NEW_2
	var_114_object = Obj(); // 0x15 PushV
	var_114_object = var_11_object; // 0x16 Mov
	func_2003(var_114_object); // 0x17 NEW_2
	
Label_25:
	return 0; // 0x19 Return
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x1b PushV
	var_13_object = var_11_object; // 0x1c Mov
	func_1981(var_12_bool, var_13_object); // 0x1d NEW_2
	if(var_12_bool == 0) goto Label_39; // 0x1f JumpB
	func_61(); // 0x21 NEW_2
	var_114_object = Obj(); // 0x23 PushV
	var_114_object = var_11_object; // 0x24 Mov
	func_1988(var_114_object); // 0x25 NEW_2
	
Label_39:
	return 0; // 0x27 Return
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_61(); // 0x2a NEW_2
	var_51_object = Obj(); // 0x2c PushV
	var_51_object = var_49_object; // 0x2d Mov
	func_2013(var_51_object); // 0x2e NEW_2
	return 0; // 0x30 Return
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x32 PushV
	var_15_object = var_11_float; // 0x33 Mov
	var_16_object = var_12_float; // 0x34 Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x35 NEW_2
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
	func_2080(); // 0x4a NEW_2
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
	func_1073(); // 0x5f NEW_2
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
	func_1756(var_15_object); // 0xdf NEW_2
	
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
	func_1996(var_12_bool, var_13_object); // 0x167 NEW_2
	if(var_12_bool == 0) goto Label_369; // 0x169 JumpB
	func_533(); // 0x16b NEW_2
	var_114_object = Obj(); // 0x16d PushV
	var_114_object = var_11_object; // 0x16e Mov
	func_2003(var_114_object); // 0x16f NEW_2
	
Label_369:
	return 0; // 0x171 Return
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_533(); // 0x174 NEW_2
	var_51_object = Obj(); // 0x176 PushV
	var_51_object = var_49_object; // 0x177 Mov
	func_2013(var_51_object); // 0x178 NEW_2
	return 0; // 0x17a Return
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x17c PushV
	var_15_object = var_11_float; // 0x17d Mov
	var_16_object = var_12_float; // 0x17e Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x17f NEW_2
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
	func_2080(); // 0x221 NEW_2
	return 0; // 0x223 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x225 PushV
	var_13_object = var_11_object; // 0x226 Mov
	func_1996(var_12_bool, var_13_object); // 0x227 NEW_2
	if(var_12_bool == 0) goto Label_561; // 0x229 JumpB
	func_678(); // 0x22b NEW_2
	var_113_object = Obj(); // 0x22d PushV
	var_113_object = var_11_object; // 0x22e Mov
	func_2003(var_113_object); // 0x22f NEW_2
	
Label_561:
	return 0; // 0x231 Return
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x233 PushV
	var_13_object = var_11_object; // 0x234 Mov
	func_1981(var_12_bool, var_13_object); // 0x235 NEW_2
	if(var_12_bool == 0) goto Label_575; // 0x237 JumpB
	func_678(); // 0x239 NEW_2
	var_113_object = Obj(); // 0x23b PushV
	var_113_object = var_11_object; // 0x23c Mov
	func_1988(var_113_object); // 0x23d NEW_2
	
Label_575:
	return 0; // 0x23f Return
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_678(); // 0x242 NEW_2
	var_50_object = Obj(); // 0x244 PushV
	var_50_object = var_49_object; // 0x245 Mov
	func_2013(var_50_object); // 0x246 NEW_2
	return 0; // 0x248 Return
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x24a PushV
	var_15_object = var_11_float; // 0x24b Mov
	var_16_object = var_12_float; // 0x24c Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x24d NEW_2
	if(var_14_bool == 0) goto Label_596; // 0x24f JumpB
	var_49_object = Obj(); // 0x250 PushV
	var_49_object = var_11_float; // 0x251 Mov
	func_576(); // 0x252 NEW_2
	
Label_596:
	return 0; // 0x254 Return
}


task_4_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x36d Eq
	if(var_12_bool == 0) goto Label_880; // 0x36e JumpB
	var_1_bool = 1; // 0x36f TMovB
	
Label_880:
	return 0; // 0x370 Return
}


task_4_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x372 Eq
	if(var_12_bool == 0) goto Label_885; // 0x373 JumpB
	var_1_bool = 0; // 0x374 TMovB
	
Label_885:
	return 0; // 0x375 Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x377 PushV
	var_15_object = var_11_float; // 0x378 Mov
	var_16_object = var_12_float; // 0x379 Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x37a NEW_2
	return 0; // 0x37c Return
}


task_5_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_object = Obj(); // 0x383 PushV
	var_12_object = var_11_object; // 0x384 Mov
	func_927(var_11_object, var_12_object); // 0x385 NEW_2
	return 0; // 0x387 Return
}


task_5_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x389 Eq
	if(var_12_bool == 0) goto Label_908; // 0x38a JumpB
	var_0_bool = 0; // 0x38b SetNullT
	
Label_908:
	return 0; // 0x38c Return
}


	task_5_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	var_50_object = Obj(); // 0x38e PushV
	var_50_object = var_49_object; // 0x38f Mov
	func_927(var_49_object, var_50_object); // 0x390 NEW_2
	return 0; // 0x392 Return
	}


task_5_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x394 PushV
	var_15_object = var_11_float; // 0x395 Mov
	var_16_object = var_12_float; // 0x396 Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x397 NEW_2
	if(var_14_bool == 0) goto Label_926; // 0x399 JumpB
	var_49_object = Obj(); // 0x39a PushV
	var_49_object = var_11_float; // 0x39b Mov
	func_909(); // 0x39c NEW_2
	
Label_926:
	return 0; // 0x39e Return
}


task_6_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3e6 PushV
	var_13_object = var_11_object; // 0x3e7 Mov
	func_1996(var_12_bool, var_13_object); // 0x3e8 NEW_2
	if(var_12_bool == 0) goto Label_1010; // 0x3ea JumpB
	func_1055(var_10_object, var_11_object); // 0x3ec NEW_2
	var_113_object = Obj(); // 0x3ee PushV
	var_113_object = var_11_object; // 0x3ef Mov
	func_2003(var_113_object); // 0x3f0 NEW_2
	
Label_1010:
	return 0; // 0x3f2 Return
}


task_6_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x3f3 PushV
	IsPlayerActor(var_12_bool, var_13_bool); // 0x3f4 Func
	var_14_bool = var_13_bool; // 0x3f6 Push
	if(var_14_bool == 0) goto Label_1017; // 0x3f7 JumpB
	return 2; // 0x3f8 Return
	
Label_1017:
	var_15_bool = 0; var_16_object = Obj(); // 0x3f9 PushV
	var_16_object = var_11_object; // 0x3fa Mov
	func_2118(var_15_bool, var_16_object); // 0x3fb NEW_2
	var_114_bool = var_15_bool == 0; // 0x3fd Not
	if(var_114_bool == 0) goto Label_1024; // 0x3fe JumpB
	return 2; // 0x3ff Return
	
Label_1024:
	IsPlayerActor(var_11_object, var_13_bool); // 0x400 Func
	var_115_bool = var_13_bool; // 0x402 Push
	if(var_115_bool == 0) goto Label_1033; // 0x403 JumpB
	var_2_cvector = var_11_object; // 0x404 TMov
	Stop(); // 0x405 Func
	StopGroup0(); // 0x407 Func
	
Label_1033:
	return 2; // 0x409 Return
}


	task_6_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1055(var_13_bool, var_49_object); // 0x40c NEW_2
	var_50_object = Obj(); // 0x40e PushV
	var_50_object = var_49_object; // 0x40f Mov
	func_2013(var_50_object); // 0x410 NEW_2
	return 0; // 0x412 Return
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x414 PushV
	var_15_object = var_11_object; // 0x415 Mov
	var_16_object = var_12_object; // 0x416 Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x417 NEW_2
	if(var_14_bool == 0) goto Label_1054; // 0x419 JumpB
	var_49_object = Obj(); // 0x41a PushV
	var_49_object = var_11_object; // 0x41b Mov
	func_1034(); // 0x41c NEW_2
	
Label_1054:
	return 0; // 0x41e Return
}


task_6_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1055(var_10_object, var_11_object); // 0x42a NEW_2
	var_12_object = Obj(); // 0x42c PushV
	var_12_object = var_11_object; // 0x42d Mov
	func_2080(); // 0x42e NEW_2
	return 0; // 0x430 Return
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x43a PushV
	var_13_object = var_11_object; // 0x43b Mov
	func_1996(var_12_bool, var_13_object); // 0x43c NEW_2
	if(var_12_bool == 0) goto Label_1094; // 0x43e JumpB
	func_1130(); // 0x440 NEW_2
	var_114_object = Obj(); // 0x442 PushV
	var_114_object = var_11_object; // 0x443 Mov
	func_2003(var_114_object); // 0x444 NEW_2
	
Label_1094:
	return 0; // 0x446 Return
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x448 PushV
	var_13_object = var_11_object; // 0x449 Mov
	func_1981(var_12_bool, var_13_object); // 0x44a NEW_2
	if(var_12_bool == 0) goto Label_1108; // 0x44c JumpB
	func_1130(); // 0x44e NEW_2
	var_114_object = Obj(); // 0x450 PushV
	var_114_object = var_11_object; // 0x451 Mov
	func_1988(var_114_object); // 0x452 NEW_2
	
Label_1108:
	return 0; // 0x454 Return
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1130(); // 0x457 NEW_2
	var_51_object = Obj(); // 0x459 PushV
	var_51_object = var_49_object; // 0x45a Mov
	func_2013(var_51_object); // 0x45b NEW_2
	return 0; // 0x45d Return
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x45f PushV
	var_15_object = var_11_object; // 0x460 Mov
	var_16_object = var_12_object; // 0x461 Mov
	func_2086(var_14_bool, var_15_object, var_16_object); // 0x462 NEW_2
	if(var_14_bool == 0) goto Label_1129; // 0x464 JumpB
	var_49_object = Obj(); // 0x465 PushV
	var_49_object = var_11_object; // 0x466 Mov
	func_1109(); // 0x467 NEW_2
	
Label_1129:
	return 0; // 0x469 Return
}


task_7_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1130(); // 0x475 NEW_2
	var_13_object = Obj(); // 0x477 PushV
	var_13_object = var_11_object; // 0x478 Mov
	func_2080(); // 0x479 NEW_2
	return 0; // 0x47b Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_int)
{
	var_12_int = 91; // 0x47d PushI
	var_13_bool = var_11_int == var_12_int; // 0x47e Eq
	if(var_13_bool == 0) goto Label_1155; // 0x47f JumpB
	func_1130(); // 0x481 NEW_2
	
Label_1155:
	return 0; // 0x483 Return
}


event_22(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x7ec PushV
	var_15_object = var_11_object; // 0x7ed Mov
	var_16_int = var_12_int; // 0x7ee Mov
	var_17_float = var_13_float; // 0x7ef Mov
	func_1382(var_15_object, var_16_int, var_17_float); // 0x7f0 NEW_2
	return 0; // 0x7f2 Return
}


event_43(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x7f4 PushV
	var_17_object = var_11_object; // 0x7f5 Mov
	var_18_int = var_12_int; // 0x7f6 Mov
	var_19_float = var_13_float; // 0x7f7 Mov
	var_20_cvector = var_15_cvector; // 0x7f8 Mov
	var_21_cvector = var_16_cvector; // 0x7f9 Mov
	func_1450(var_19_float, var_20_cvector, var_21_cvector); // 0x7fa NEW_2
	return 0; // 0x7fc Return
}


event_16(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x813 PushV
	var_15_string = "health"; // 0x814 PushS
	var_16_bool = var_12_string == var_15_string; // 0x815 Eq
	if(var_16_bool == 0) goto Label_2079; // 0x816 JumpB
	var_17_string = "health"; // 0x817 PushS
	GetProperty(var_17_string, var_14_float); // 0x818 Func
	var_18_int = 0; // 0x81a PushI
	var_19_bool = var_14_float <= var_18_int; // 0x81b LE
	if(var_19_bool == 0) goto Label_2079; // 0x81c JumpB
	SignalDeath(var_11_object); // 0x81d Func
	
Label_2079:
	return 2; // 0x81f Return
}


event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x821 PushV
	var_12_object = var_11_object; // 0x822 Mov
	func_2045(var_12_object); // 0x823 NEW_2
	return 0; // 0x825 Return
}


event_6(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	var_11_object = Obj(); // 0x88d PushV
	func_1634(var_11_object); // 0x88e NEW_2
	RemoveActor(var_11_object); // 0x890 Func
	Hold(); // 0x892 Func
	return 0; // 0x894 Return
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_2111(); // 0x1 NEW_2
	
Label_3:
	var_15_int = 90; // 0x3 PushI
	var_16_int = 10; // 0x4 PushI
	SetTimer(var_15_int, var_16_int); // 0x5 Func
	func_99(var_9_float, var_10_object); // 0x8 NEW_2
	goto Label_3; // 0xa Jump
}


func_1547(var_74_bool, var_75_string)
{
	var_74_bool = 1; // 0x60c MovB
	var_76_bool = 0; // 0x60d PushV
	var_76_bool = 1; // 0x60e MovB
	var_77_bool = 0; // 0x60f PushV
	var_77_bool = 1; // 0x610 MovB
	var_78_bool = 0; // 0x611 PushV
	var_78_bool = 1; // 0x612 MovB
	var_79_bool = 0; // 0x613 PushV
	var_79_bool = 1; // 0x614 MovB
	var_80_bool = 0; // 0x615 PushV
	var_80_bool = 1; // 0x616 MovB
	var_81_bool = 0; // 0x617 PushV
	var_81_bool = 1; // 0x618 MovB
	var_82_bool = 0; // 0x619 PushV
	var_82_bool = 1; // 0x61a MovB
	var_83_bool = 0; // 0x61b PushV
	var_83_bool = 1; // 0x61c MovB
	var_84_bool = 0; // 0x61d PushV
	var_84_bool = 1; // 0x61e MovB
	var_85_bool = 0; // 0x61f PushV
	var_85_bool = 1; // 0x620 MovB
	var_86_bool = 0; // 0x621 PushV
	var_86_bool = 1; // 0x622 MovB
	var_87_string = "woman"; // 0x623 PushS
	var_88_bool = var_75_string == var_87_string; // 0x624 Eq
	if(var_88_bool == 0) goto Label_1578; // 0x625 JumpB
	var_89_string = "worker"; // 0x626 PushS
	var_90_bool = var_75_string == var_89_string; // 0x627 Eq
	if(var_90_bool == 0) goto Label_1578; // 0x628 JumpB
	var_86_bool = 0; // 0x629 MovB
	
Label_1578:
	if(var_86_bool == 0) goto Label_1583; // 0x62a JumpB
	var_91_string = "butcher"; // 0x62b PushS
	var_92_bool = var_75_string == var_91_string; // 0x62c Eq
	if(var_92_bool == 0) goto Label_1583; // 0x62d JumpB
	var_85_bool = 0; // 0x62e MovB
	
Label_1583:
	if(var_85_bool == 0) goto Label_1588; // 0x62f JumpB
	var_93_string = "wasted_girl"; // 0x630 PushS
	var_94_bool = var_75_string == var_93_string; // 0x631 Eq
	if(var_94_bool == 0) goto Label_1588; // 0x632 JumpB
	var_84_bool = 0; // 0x633 MovB
	
Label_1588:
	if(var_84_bool == 0) goto Label_1593; // 0x634 JumpB
	var_95_string = "boy"; // 0x635 PushS
	var_96_bool = var_75_string == var_95_string; // 0x636 Eq
	if(var_96_bool == 0) goto Label_1593; // 0x637 JumpB
	var_83_bool = 0; // 0x638 MovB
	
Label_1593:
	if(var_83_bool == 0) goto Label_1598; // 0x639 JumpB
	var_97_string = "vaxxabitka"; // 0x63a PushS
	var_98_bool = var_75_string == var_97_string; // 0x63b Eq
	if(var_98_bool == 0) goto Label_1598; // 0x63c JumpB
	var_82_bool = 0; // 0x63d MovB
	
Label_1598:
	if(var_82_bool == 0) goto Label_1603; // 0x63e JumpB
	var_99_string = "unosha"; // 0x63f PushS
	var_100_bool = var_75_string == var_99_string; // 0x640 Eq
	if(var_100_bool == 0) goto Label_1603; // 0x641 JumpB
	var_81_bool = 0; // 0x642 MovB
	
Label_1603:
	if(var_81_bool == 0) goto Label_1608; // 0x643 JumpB
	var_101_string = "wasted_male"; // 0x644 PushS
	var_102_bool = var_75_string == var_101_string; // 0x645 Eq
	if(var_102_bool == 0) goto Label_1608; // 0x646 JumpB
	var_80_bool = 0; // 0x647 MovB
	
Label_1608:
	if(var_80_bool == 0) goto Label_1613; // 0x648 JumpB
	var_103_string = "alkash"; // 0x649 PushS
	var_104_bool = var_75_string == var_103_string; // 0x64a Eq
	if(var_104_bool == 0) goto Label_1613; // 0x64b JumpB
	var_79_bool = 0; // 0x64c MovB
	
Label_1613:
	if(var_79_bool == 0) goto Label_1618; // 0x64d JumpB
	var_105_string = "dohodyaga"; // 0x64e PushS
	var_106_bool = var_75_string == var_105_string; // 0x64f Eq
	if(var_106_bool == 0) goto Label_1618; // 0x650 JumpB
	var_78_bool = 0; // 0x651 MovB
	
Label_1618:
	if(var_78_bool == 0) goto Label_1623; // 0x652 JumpB
	var_107_string = "vaxxabit"; // 0x653 PushS
	var_108_bool = var_75_string == var_107_string; // 0x654 Eq
	if(var_108_bool == 0) goto Label_1623; // 0x655 JumpB
	var_77_bool = 0; // 0x656 MovB
	
Label_1623:
	if(var_77_bool == 0) goto Label_1628; // 0x657 JumpB
	var_109_string = "nudegirl"; // 0x658 PushS
	var_110_bool = var_75_string == var_109_string; // 0x659 Eq
	if(var_110_bool == 0) goto Label_1628; // 0x65a JumpB
	var_76_bool = 0; // 0x65b MovB
	
Label_1628:
	if(var_76_bool == 0) goto Label_1633; // 0x65c JumpB
	var_111_string = "morlok"; // 0x65d PushS
	var_112_bool = var_75_string == var_111_string; // 0x65e Eq
	if(var_112_bool == 0) goto Label_1633; // 0x65f JumpB
	var_74_bool = 0; // 0x660 MovB
	
Label_1633:
	return 0; // 0x661 Return
}


func_533()
{
	var_12_int = 61; // 0x215 PushI
	KillTimer(var_12_int); // 0x216 Func
	Stop(); // 0x218 Func
	return 0; // 0x21a Return
}


func_1055(var_0_bool, var_148_int)
{
	SetSeeThreshold(var_0_bool); // 0x41f Func
	SetSeeFOV(var_148_int); // 0x421 Func
	Stop(); // 0x423 Func
	StopGroup0(); // 0x425 Func
	return 0; // 0x427 Return
}


func_2086(var_14_bool, var_15_object, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x826 PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x827 PushV
	var_20_object = var_16_object; // 0x828 Mov
	func_1883(var_19_bool, var_20_object); // 0x829 NEW_2
	if(var_19_bool == 0) goto Label_2109; // 0x82b JumpB
	CanSee(var_18_bool, var_15_object); // 0x82c Func
	var_37_bool = 0; // 0x82e PushV
	var_37_bool = 1; // 0x82f MovB
	var_38_bool = var_18_bool; // 0x830 Push
	if(var_38_bool == 0) goto Label_2106; // 0x831 JumpB
	var_39_float = 0; var_40_object = Obj(); // 0x832 PushV
	var_40_object = var_15_object; // 0x833 Mov
	func_1207(var_40_object); // 0x834 NEW_2
	var_47_float = 490000.0; // 0x836 PushF
	var_48_bool = var_39_float <= var_47_float; // 0x837 LE
	if(var_48_bool == 0) goto Label_2106; // 0x838 JumpB
	var_37_bool = 0; // 0x839 MovB
	
Label_2106:
	if(var_37_bool == 0) goto Label_2109; // 0x83a JumpB
	var_14_bool = 1; // 0x83b MovB
	return 2; // 0x83c Return
	
Label_2109:
	var_14_bool = 0; // 0x83d MovB
	return 2; // 0x83e Return
}


func_1073()
{
	var_21_int = 91; // 0x431 PushI
	var_22_int = 20; // 0x432 PushI
	SetTimer(var_21_int, var_22_int); // 0x433 Func
	func_1174(); // 0x436 NEW_2
	return 0; // 0x438 Return
}


func_61()
{
	var_20_int = 90; // 0x3d PushI
	KillTimer(var_20_int); // 0x3e Func
	func_170(var_12_float, var_13_float); // 0x41 NEW_2
	return 0; // 0x43 Return
}


func_2111()
{
	var_11_object = GlobalVars[0]; // 0x83f PushGE
	var_12_object = Obj(); // 0x840 PushV
	func_1666(var_12_object); // 0x841 NEW_2
	var_11_object = var_12_object; // 0x842 Mov
	GlobalVars[0] = var_11_object; // 0x844 PopGE
	return 0; // 0x845 Return
}


func_2118(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_string = ""; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_string = ""; // 0x846 PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x847 PushV
	var_25_object = var_15_object; // 0x848 Mov
	func_1295(var_24_bool, var_25_object); // 0x849 NEW_2
	var_58_bool = var_24_bool == 0; // 0x84b Not
	if(var_58_bool == 0) goto Label_2127; // 0x84c JumpB
	var_14_bool = 0; // 0x84d MovB
	return 8; // 0x84e Return
	
Label_2127:
	var_59_object = GlobalVars[0]; // 0x84f PushGE
	in(var_20_bool, var_15_object); // 0x850 ObjFunc
	var_60_bool = var_20_bool; // 0x852 Push
	if(var_60_bool == 0) goto Label_2134; // 0x853 JumpB
	var_14_bool = 1; // 0x854 MovB
	return 8; // 0x855 Return
	
Label_2134:
	var_61_bool = 0; var_62_object = Obj(); var_63_string = ""; // 0x856 PushV
	var_62_object = var_15_object; // 0x857 Mov
	var_63_string = "disease"; // 0x858 MovS
	func_1220(var_61_bool, var_62_object, var_63_string); // 0x859 NEW_2
	var_64_bool = var_61_bool == 0; // 0x85b Not
	if(var_64_bool == 0) goto Label_2143; // 0x85c JumpB
	var_14_bool = 0; // 0x85d MovB
	return 8; // 0x85e Return
	
Label_2143:
	var_65_string = "disease"; // 0x85f PushS
	GetProperty(var_65_string, var_21_float); // 0x860 ObjFunc
	IsPlayerActor(var_15_object, var_22_bool); // 0x862 Func
	var_66_bool = var_22_bool; // 0x864 Push
	if(var_66_bool == 0) goto Label_2154; // 0x865 JumpB
	var_67_float = 0.0; // 0x866 PushF
	var_14_bool = var_21_float > var_67_float; // 0x867 GT2
	return 8; // 0x868 Return
	
Label_2154:
	var_68_float = 0.01; // 0x86a PushF
	var_69_bool = var_21_float > var_68_float; // 0x86b GT
	if(var_69_bool == 0) goto Label_2172; // 0x86c JumpB
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0x86d PushV
	var_71_object = var_15_object; // 0x86e Mov
	var_72_string = "class"; // 0x86f MovS
	func_1220(var_70_bool, var_71_object, var_72_string); // 0x870 NEW_2
	if(var_70_bool == 0) goto Label_2172; // 0x872 JumpB
	var_73_string = "class"; // 0x873 PushS
	GetProperty(var_73_string, var_23_string); // 0x874 ObjFunc
	var_74_bool = 0; var_75_string = ""; // 0x876 PushV
	var_75_string = var_23_string; // 0x877 Mov
	func_1547(var_74_bool, var_75_string); // 0x878 NEW_2
	var_14_bool = var_74_bool; // 0x879 Mov
	return 8; // 0x87b Return
	
Label_2172:
	var_14_bool = 0; // 0x87c MovB
	return 8; // 0x87d Return
}


func_597()
{
	var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; // 0x255 PushV
	WaitForAnimEnd(); // 0x256 Func
	var_58_bool = 0; // 0x258 PushV
	func_1464(var_58_bool); // 0x259 NEW_2
	var_61_bool = var_58_bool == 0; // 0x25b Not
	if(var_61_bool == 0) goto Label_606; // 0x25c JumpB
	return 14; // 0x25d Return
	
Label_606:
	var_62_int = 0; // 0x25e PushV
	func_1733(var_62_int); // 0x25f NEW_2
	var_51_int = var_62_int; // 0x260 Mov
	var_52_int = 0; // 0x262 MovI
	
Label_611:
	var_75_bool = 0; // 0x263 PushV
	var_75_bool = 0; // 0x264 MovB
	var_76_int = 5; // 0x265 PushI
	var_77_bool = var_52_int < var_76_int; // 0x266 LT
	if(var_77_bool == 0) goto Label_621; // 0x267 JumpB
	var_78_bool = 0; // 0x268 PushV
	func_1464(var_78_bool); // 0x269 NEW_2
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
	func_1726(var_84_string, var_85_int); // 0x27b NEW_2
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


func_1634(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x662 PushV
	self(var_13_object); // 0x663 Func
	var_11_object = var_13_object; // 0x665 Mov
	return 2; // 0x666 Return
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


func_1640(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x668 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x669 Or
	var_52_float = sqrt(var_53_int); // 0x66a Sqrt2
	var_54_float = 0.0; // 0x66b PushF
	var_55_bool = var_52_float < var_54_float; // 0x66c LT
	if(var_55_bool == 0) goto Label_1648; // 0x66d JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x66e MovV
	return 2; // 0x66f Return
	
Label_1648:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x670 Div2
	return 2; // 0x671 Return
}


func_1130()
{
	var_14_int = 91; // 0x46a PushI
	KillTimer(var_14_int); // 0x46b Func
	Stop(); // 0x46d Func
	func_1195(); // 0x470 NEW_2
	return 0; // 0x472 Return
}


func_1650(var_47_float, var_48_float, var_49_float, var_50_float)
{
	var_51_bool = var_48_float < var_49_float; // 0x673 LT
	if(var_51_bool == 0) goto Label_1655; // 0x674 JumpB
	var_47_float = var_49_float; // 0x675 Mov
	return 0; // 0x676 Return
	
Label_1655:
	var_52_bool = var_48_float > var_50_float; // 0x677 GT
	if(var_52_bool == 0) goto Label_1659; // 0x678 JumpB
	var_47_float = var_50_float; // 0x679 Mov
	return 0; // 0x67a Return
	
Label_1659:
	var_47_float = var_48_float; // 0x67b Mov
	return 0; // 0x67c Return
}


func_1661(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x67d PushV
	irand(var_93_int, var_91_int); // 0x67e Func
	var_89_bool = var_93_int < var_90_int; // 0x680 LT2
	return 2; // 0x681 Return
}


func_2174(var_52_object)
{
	var_53_bool = 0; var_54_bool = 0; // 0x87e PushV
	var_55_bool = var_52_object == 0; // 0x87f NullEq
	if(var_55_bool == 0) goto Label_2178; // 0x880 JumpB
	return 2; // 0x881 Return
	
Label_2178:
	var_56_object = GlobalVars[0]; // 0x882 PushGE
	in(var_54_bool, var_52_object); // 0x883 ObjFunc
	var_57_bool = var_54_bool == 0; // 0x885 Not
	if(var_57_bool == 0) goto Label_2186; // 0x886 JumpB
	var_58_object = GlobalVars[0]; // 0x887 PushGE
	add(var_52_object); // 0x888 ObjFunc
	
Label_2186:
	return 2; // 0x88a Return
}


func_1666(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x682 PushV
	CreateObjectSet(var_14_object); // 0x683 Func
	var_12_object = var_14_object; // 0x685 Mov
	return 2; // 0x686 Return
}


func_1156(var_30_bool)
{
	var_31_float = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x484 PushV
	rand(var_33_float); // 0x485 Func
	var_35_float = 0.3; // 0x487 PushF
	var_36_bool = var_33_float < var_35_float; // 0x488 LT
	if(var_36_bool == 0) goto Label_1172; // 0x489 JumpB
	var_37_string = "all"; // 0x48a PushS
	var_38_string = "hunt"; // 0x48b PushS
	PlayAnimation(var_37_string, var_38_string); // 0x48c Func
	WaitForAnimEnd(var_34_bool); // 0x48e Func
	var_39_bool = var_34_bool == 0; // 0x490 Not
	if(var_39_bool == 0) goto Label_1172; // 0x491 JumpB
	var_30_bool = 1; // 0x492 MovB
	return 4; // 0x493 Return
	
Label_1172:
	var_30_bool = 0; // 0x494 MovB
	return 4; // 0x495 Return
}


func_1672(var_18_bool, var_19_object, var_20_float)
{
	var_21_bool = var_19_object == 0; // 0x689 Not
	if(var_21_bool == 0) goto Label_1677; // 0x68a JumpB
	var_18_bool = 0; // 0x68b MovB
	return 0; // 0x68c Return
	
Label_1677:
	var_22_int = 0; // 0x68d PushI
	var_23_bool = var_20_float > var_22_int; // 0x68e GT
	if(var_23_bool == 0) goto Label_1684; // 0x68f JumpB
	var_24_int = 8; // 0x690 PushI
	SendWorldWndMessage(var_24_int); // 0x691 Func
	goto Label_1693; // 0x693 Jump
	
Label_1693:
	var_25_float = 0; // 0x69d PushV
	var_25_float = var_20_float; // 0x69e Mov
	func_1707(var_25_float); // 0x69f NEW_2
	var_29_bool = 0; var_30_object = Obj(); var_31_string = ""; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x6a1 PushV
	var_30_object = var_19_object; // 0x6a2 Mov
	var_31_string = "reputation"; // 0x6a3 MovS
	var_32_float = var_20_float; // 0x6a4 Mov
	var_33_float = 0; // 0x6a5 MovI
	var_34_float = 1; // 0x6a6 MovI
	func_1232(var_29_bool, var_30_object, var_31_string, var_32_float, var_33_float, var_34_float); // 0x6a7 NEW_2
	var_18_bool = 1; // 0x6a9 MovB
	return 0; // 0x6aa Return
	
Label_1684:
	var_53_int = 0; // 0x694 PushI
	var_54_bool = var_20_float < var_53_int; // 0x695 LT
	if(var_54_bool == 0) goto Label_1691; // 0x696 JumpB
	var_55_int = 9; // 0x697 PushI
	SendWorldWndMessage(var_55_int); // 0x698 Func
	goto Label_1693; // 0x69a Jump
	
Label_1691:
	var_18_bool = 0; // 0x69b MovB
	return 0; // 0x69c Return
}


func_2187()
{
	return 0; // 0x88c Return
}


func_1174()
{
	var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0; // 0x496 PushV
	
Label_1175:
	RandVec2D(var_26_float, var_27_float); // 0x497 Func
	Rotate(var_26_float, var_27_float, var_28_bool); // 0x499 Func
	var_29_bool = var_28_bool == 0; // 0x49b Not
	if(var_29_bool == 0) goto Label_1182; // 0x49c JumpB
	goto Label_1194; // 0x49d Jump
	
Label_1194:
	return 6; // 0x4aa Return
	
Label_1182:
	var_30_bool = 0; // 0x49e PushV
	func_1156(var_30_bool); // 0x49f NEW_2
	if(var_30_bool == 0) goto Label_1187; // 0x4a1 JumpB
	goto Label_1194; // 0x4a2 Jump
	
Label_1187:
	var_40_int = 5; // 0x4a3 PushI
	Sleep(var_40_int, var_28_bool); // 0x4a4 Func
	var_41_bool = var_28_bool == 0; // 0x4a6 Not
	if(var_41_bool == 0) goto Label_1193; // 0x4a7 JumpB
	goto Label_1194; // 0x4a8 Jump
	
Label_1193:
	goto Label_1175; // 0x4a9 Jump
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


func_170(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0xaa TMovB
	var_1_bool = 0; // 0xab TMovB
	Stop(); // 0xac Func
	StopGroup0(); // 0xae Func
	return 0; // 0xb0 Return
}


func_1195()
{
	Stop(); // 0x4ab Func
	StopGroup0(); // 0x4ad Func
	return 0; // 0x4af Return
}


func_1707(var_25_float)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x6ab PushV
	CreateFloatVector(var_27_object); // 0x6ac Func
	add(var_25_float); // 0x6ae ObjFunc
	var_28_int = 16; // 0x6b0 PushI
	SendWorldWndMessage(var_28_int, var_27_object); // 0x6b1 Func
	return 2; // 0x6b3 Return
}


func_683(var_0_bool, var_1_bool, var_59_object, var_131_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_int = 0; var_66_object = Obj(); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_int = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_int = 0; var_77_object = Obj(); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_int = 0; // 0x2ab PushV
	var_0_bool = var_59_object; // 0x2ac TMov
	CanSee(var_83_int, var_59_object); // 0x2ad Func
	var_84_bool = 0; var_85_object = Obj(); // 0x2af PushV
	var_85_object = var_59_object; // 0x2b0 Mov
	func_1329(var_85_object); // 0x2b1 NEW_2
	var_98_bool = 0; var_99_object = Obj(); // 0x2b3 PushV
	var_99_object = var_59_object; // 0x2b4 Mov
	func_1295(var_98_bool, var_99_object); // 0x2b5 NEW_2
	var_126_bool = var_98_bool == 0; // 0x2b7 Not
	if(var_126_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 22; // 0x2b9 Return
	
Label_698:
	Face(var_59_object); // 0x2ba Func
	
Label_700:
	var_127_bool = 0; var_128_object = Obj(); // 0x2bc PushV
	var_128_object = var_0_bool; // 0x2bd MovT
	func_1295(var_127_bool, var_128_object); // 0x2be NEW_2
	if(var_127_bool == 0) goto Label_873; // 0x2c0 JumpB
	var_129_bool = var_1_bool == 0; // 0x2c1 Not
	if(var_129_bool == 0) goto Label_722; // 0x2c2 JumpB
	StopAsync(); // 0x2c3 Func
	var_130_object = Obj(); // 0x2c5 PushV
	TaskCall(5); // 0x2c6 TaskCall
	func_893(var_131_object, var_130_object); // 0x2c7 NEW_2
	TaskReturn(); // 0x2c8 TaskReturn
	var_0_bool = var_131_object; // 0x2c9 TMov
	var_133_bool = var_0_bool == 0; // 0x2cb NullEq
	if(var_133_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_873; // 0x2cd Jump
	
Label_873:
	StopAsync(); // 0x369 Func
	return 22; // 0x36b Return
	
Label_718:
	CanSee(var_83_int, var_0_bool); // 0x2ce Func
	Face(var_0_bool); // 0x2d0 Func
	
Label_722:
	var_134_object = Obj(); // 0x2d2 PushV
	var_134_object = var_0_bool; // 0x2d3 MovT
	func_1717(var_134_object); // 0x2d4 NEW_2
	ReportAttack(var_0_bool); // 0x2d6 Func
	GetPosition(var_73_cvector); // 0x2d8 Func
	GetPosition(var_74_cvector); // 0x2da TObjFunc
	var_75_cvector = var_74_cvector - var_73_cvector; // 0x2dc Sub2
	var_139_int = 0; var_140_float = 0; // 0x2dd PushV
	var_141_int = var_75_cvector | var_75_cvector; // 0x2de Or
	var_140_float = sqrt(var_141_int); // 0x2df Sqrt2
	func_1945(var_139_int, var_140_float); // 0x2e0 NEW_2
	var_76_int = var_139_int; // 0x2e1 Mov
	var_146_string = "all"; // 0x2e3 PushS
	var_147_string = "attack_begin"; // 0x2e4 PushS
	var_148_int = var_147_string + var_76_int; // 0x2e5 Add
	PlayAnimation(var_146_string, var_148_int); // 0x2e6 Func
	WaitForAnimEnd(); // 0x2e8 Func
	var_149_bool = var_0_bool == 0; // 0x2ea NullEq
	if(var_149_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_873; // 0x2ec Jump
	
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
	func_1634(var_159_object); // 0x2ff NEW_2
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
	if(var_171_bool == 0) goto Label_870; // 0x349 JumpB
	var_172_int = 2; // 0x34a PushI
	irand(var_83_int, var_172_int); // 0x34b Func
	var_173_string = "scream"; // 0x34d PushS
	var_174_int = 1; // 0x34e PushI
	var_175_int = var_83_int + var_174_int; // 0x34f Add
	var_176_int = var_173_string + var_175_int; // 0x350 Add
	var_177_cvector = CVector(0.0, 150.0, 0.0); // 0x351 PushVec
	var_178_int = 1; // 0x352 PushI
	var_179_int = 500; // 0x353 PushI
	PlayGlobalSound(var_176_int, var_177_cvector, var_178_int, var_179_int); // 0x354 Func
	var_180_object = Obj(); // 0x356 PushV
	var_180_object = var_0_bool; // 0x357 MovT
	func_1469(var_180_object); // 0x358 NEW_2
	var_187_string = "all"; // 0x35a PushS
	var_188_string = "scream"; // 0x35b PushS
	var_189_int = 1; // 0x35c PushI
	var_190_int = var_83_int + var_189_int; // 0x35d Add
	var_191_int = var_188_string + var_190_int; // 0x35e Add
	PlayAnimation(var_187_string, var_191_int); // 0x35f Func
	WaitForAnimEnd(); // 0x361 Func
	var_192_string = "head"; // 0x363 PushS
	UnlookAsync(var_192_string); // 0x364 Func
	
Label_870:
	var_80_object = 0; // 0x366 SetNull
	var_77_object = 0; // 0x367 SetNull
	goto Label_700; // 0x368 Jump
	
Label_779:
	var_193_int = 1; // 0x30b PushI
	var_194_float = GetByIndex(var_78_cvector, 1); // 0x30c PushE
	var_195_float = GetByIndex(var_78_cvector, 1); // 0x30d PushE
	var_196_float = var_194_float * var_195_float; // 0x30e Mult
	var_197_int = var_193_int - var_196_float; // 0x30f Sub
	var_198_float = GetByIndex(var_75_cvector, 0); // 0x310 PushE
	var_199_float = GetByIndex(var_75_cvector, 0); // 0x311 PushE
	var_200_float = var_198_float * var_199_float; // 0x312 Mult
	var_201_float = GetByIndex(var_75_cvector, 2); // 0x313 PushE
	var_202_float = GetByIndex(var_75_cvector, 2); // 0x314 PushE
	var_203_float = var_201_float * var_202_float; // 0x315 Mult
	var_204_int = var_200_float + var_203_float; // 0x316 Add
	var_205_float = var_197_int / var_204_int; // 0x317 Div
	var_81_float = sqrt(var_205_float); // 0x318 Sqrt2
	var_206_float = GetByIndex(var_78_cvector, 0); // 0x319 PushE
	var_207_float = GetByIndex(var_75_cvector, 0); // 0x31a PushE
	var_206_float = var_207_float * var_81_float; // 0x31b Mult2
	SetByIndex(var_78_cvector, 0) = var_206_float; // 0x31c PopE
	var_208_float = GetByIndex(var_78_cvector, 2); // 0x31d PushE
	var_209_float = GetByIndex(var_75_cvector, 2); // 0x31e PushE
	var_208_float = var_209_float * var_81_float; // 0x31f Mult2
	SetByIndex(var_78_cvector, 2) = var_208_float; // 0x320 PopE
	GetPosition(var_74_cvector); // 0x321 TObjFunc
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); // 0x323 PushV
	var_211_cvector = var_73_cvector; // 0x324 Mov
	var_212_cvector = var_74_cvector; // 0x325 Mov
	var_213_cvector = var_78_cvector; // 0x326 Mov
	func_1901(var_210_float, var_211_cvector, var_212_cvector, var_213_cvector); // 0x327 NEW_2
	var_82_float = var_210_float; // 0x328 Mov
	var_257_int = 0; // 0x32a PushI
	var_258_bool = var_82_float < var_257_int; // 0x32b LT
	if(var_258_bool == 0) goto Label_819; // 0x32c JumpB
	var_259_float = 0; var_260_int = 0; // 0x32d PushV
	var_260_int = var_76_int; // 0x32e Mov
	func_1959(var_259_float, var_260_int); // 0x32f NEW_2
	var_82_float = var_259_float; // 0x330 Mov
	goto Label_825; // 0x332 Jump
	
Label_825:
	var_263_string = "StartVelocity"; // 0x339 PushS
	var_264_float = var_78_cvector * var_82_float; // 0x33a Mult
	SetScriptProperty(var_263_string, var_264_float); // 0x33b ObjFunc
	
Label_819:
	var_265_float = 0; var_266_int = 0; var_267_float = 0; // 0x333 PushV
	var_266_int = var_76_int; // 0x334 Mov
	var_267_float = var_82_float; // 0x335 Mov
	func_1967(var_266_int, var_267_float); // 0x336 NEW_2
	var_82_float = var_265_float; // 0x337 Mov
}


func_1200(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4b0 PushV
	GetPosition(var_49_cvector); // 0x4b1 Func
	GetPosition(var_50_cvector); // 0x4b3 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4b5 Sub2
	return 4; // 0x4b6 Return
}


func_177(var_42_bool)
{
	var_42_bool = 0; // 0xb1 MovB
	return 0; // 0xb2 Return
}


func_179(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xb3 PushV
	FindShiftedPathTo(var_39_object, var_37_cvector); // 0xb4 Func
	var_36_object = var_39_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_1717(var_134_object)
{
	var_135_bool = 0; var_136_bool = 0; // 0x6b5 PushV
	IsPlayerActor(var_134_object, var_136_bool); // 0x6b6 Func
	var_137_bool = var_136_bool; // 0x6b8 Push
	if(var_137_bool == 0) goto Label_1725; // 0x6b9 JumpB
	var_138_string = "attack"; // 0x6ba PushS
	PlayGlobalMusic(var_138_string); // 0x6bb Func
	
Label_1725:
	return 2; // 0x6bd Return
}


func_1207(var_39_float)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x4b7 PushV
	GetPosition(var_44_cvector); // 0x4b8 Func
	GetPosition(var_45_cvector); // 0x4ba ObjFunc
	var_46_cvector = var_45_cvector - var_44_cvector; // 0x4bc Sub2
	var_39_float = var_46_cvector | var_46_cvector; // 0x4bd Or2
	return 6; // 0x4be Return
}


func_185(var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0xb9 PushV
	IsPlayerActor(var_56_object, var_58_bool); // 0xba Func
	var_59_bool = var_58_bool; // 0xbc Push
	if(var_59_bool == 0) goto Label_193; // 0xbd JumpB
	func_1841(); // 0xbf NEW_2
	
Label_193:
	func_1817(); // 0xc2 NEW_2
	var_136_object = Obj(); // 0xc4 PushV
	var_136_object = var_56_object; // 0xc5 Mov
	func_201(var_136_object); // 0xc6 NEW_2
	return 2; // 0xc8 Return
}


func_1726(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x6be PushV
	var_71_string = "idle"; // 0x6bf MovS
	var_72_int = var_69_int; // 0x6c0 Push
	if(var_72_int == 0) goto Label_1731; // 0x6c1 JumpB
	var_71_string = var_71_string + var_69_int; // 0x6c2 Add2
	
Label_1731:
	var_68_string = var_71_string; // 0x6c3 Mov
	return 2; // 0x6c4 Return
}


func_1215(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x4bf PushV
	IsPlayerActor(var_15_object, var_17_bool); // 0x4c0 Func
	var_14_bool = var_17_bool; // 0x4c2 Mov
	return 2; // 0x4c3 Return
}


func_1220(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0; // 0x4c4 PushV
	var_42_string = "HasProperty"; // 0x4c5 PushS
	var_43_int = 2; // 0x4c6 PushI
	var_44_bool = IsFuncExist(var_38_object, var_42_string, var_43_int); // 0x4c7 FuncExist
	var_45_bool = var_44_bool == 0; // 0x4c8 Not
	if(var_45_bool == 0) goto Label_1228; // 0x4c9 JumpB
	var_37_bool = 0; // 0x4ca MovB
	return 2; // 0x4cb Return
	
Label_1228:
	HasProperty(var_39_string, var_41_bool); // 0x4cc ObjFunc
	var_37_bool = var_41_bool; // 0x4ce Mov
	return 2; // 0x4cf Return
}


func_1733(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0; // 0x6c5 PushV
	var_65_int = 0; // 0x6c6 MovI
	
Label_1735:
	var_67_string = "all"; // 0x6c7 PushS
	var_68_string = ""; var_69_int = 0; // 0x6c8 PushV
	var_69_int = var_65_int; // 0x6c9 Mov
	func_1726(var_68_string, var_69_int); // 0x6ca NEW_2
	HasAnimation(var_66_bool, var_67_string, var_68_string); // 0x6cc Func
	var_73_bool = var_66_bool == 0; // 0x6ce Not
	if(var_73_bool == 0) goto Label_1745; // 0x6cf JumpB
	goto Label_1748; // 0x6d0 Jump
	
Label_1748:
	var_62_int = var_65_int; // 0x6d4 Mov
	return 4; // 0x6d5 Return
	
Label_1745:
	var_74_int = 1; // 0x6d1 PushI
	var_65_int = var_65_int + var_74_int; // 0x6d2 Add2
	goto Label_1735; // 0x6d3 Jump
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


func_1232(var_29_bool, var_30_object, var_31_string, var_32_float, var_33_float, var_34_float)
{
	var_35_float = 0; var_36_float = 0; // 0x4d0 PushV
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x4d1 PushV
	var_38_object = var_30_object; // 0x4d2 Mov
	var_39_string = var_31_string; // 0x4d3 Mov
	func_1220(var_37_bool, var_38_object, var_39_string); // 0x4d4 NEW_2
	var_46_bool = var_37_bool == 0; // 0x4d6 Not
	if(var_46_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_29_bool = 0; // 0x4d8 MovB
	return 2; // 0x4d9 Return
	
Label_1242:
	GetProperty(var_31_string, var_36_float); // 0x4da ObjFunc
	var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; // 0x4dc PushV
	var_48_float = var_36_float + var_32_float; // 0x4dd Add2
	var_49_float = var_33_float; // 0x4de Mov
	var_50_float = var_34_float; // 0x4df Mov
	func_1650(var_47_float, var_48_float, var_49_float, var_50_float); // 0x4e0 NEW_2
	SetProperty(var_31_string, var_47_float); // 0x4e2 ObjFunc
	var_29_bool = 1; // 0x4e4 MovB
	return 2; // 0x4e5 Return
}


func_1750(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0x6d6 PushV
	var_119_string = "branch"; // 0x6d7 PushS
	GetVariable(var_119_string, var_118_int); // 0x6d8 Func
	var_116_int = var_118_int; // 0x6da Mov
	return 2; // 0x6db Return
}


func_1756(var_15_object)
{
	var_16_int = 0; // 0x6dd PushV
	func_1750(var_16_int); // 0x6de NEW_2
	var_20_int = 1; // 0x6e0 PushI
	var_21_bool = var_16_int == var_20_int; // 0x6e1 Eq
	if(var_21_bool == 0) goto Label_1766; // 0x6e2 JumpB
	WorkWithCorpse(var_15_object); // 0x6e3 Func
	goto Label_1768; // 0x6e5 Jump
	
Label_1768:
	return 0; // 0x6e8 Return
	
Label_1766:
	Barter(var_15_object); // 0x6e6 Func
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
	func_1506(var_212_string); // 0x128 NEW_2
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


func_1254(var_113_bool)
{
	var_115_bool = 0; var_116_bool = 0; // 0x4e6 PushV
	IsDead(var_116_bool); // 0x4e7 ObjFunc
	var_113_bool = var_116_bool; // 0x4e9 Mov
	return 2; // 0x4ea Return
}


func_1769(var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x6e9 PushV
	var_71_bool = var_65_int > var_66_int; // 0x6ea GT
	if(var_71_bool == 0) goto Label_1776; // 0x6eb JumpB
	var_72_string = "GenerateMoney: iMin > iMax"; // 0x6ec PushS
	Trace(var_72_string); // 0x6ed Func
	return 4; // 0x6ef Return
	
Label_1776:
	var_69_int = 0; // 0x6f0 MovI
	var_73_bool = var_65_int != var_66_int; // 0x6f1 Neq
	if(var_73_bool == 0) goto Label_1783; // 0x6f2 JumpB
	var_74_int = var_66_int - var_65_int; // 0x6f3 Sub
	irand(var_69_int, var_74_int); // 0x6f4 Func
	goto Label_1787; // 0x6f6 Jump
	
Label_1787:
	var_69_int = var_69_int + var_65_int; // 0x6fb Add2
	var_75_int = 0; // 0x6fc PushI
	var_76_bool = var_69_int == var_75_int; // 0x6fd Eq
	if(var_76_bool == 0) goto Label_1792; // 0x6fe JumpB
	return 4; // 0x6ff Return
	
Label_1792:
	var_77_int = 0; var_78_string = ""; // 0x700 PushV
	var_78_string = "Money"; // 0x701 MovS
	func_1878(var_77_int, var_78_string); // 0x702 NEW_2
	var_81_int = 0; // 0x704 PushI
	AddItem(var_70_bool, var_77_int, var_81_int, var_69_int); // 0x705 Func
	return 4; // 0x707 Return
	
Label_1783:
	var_82_int = 0; // 0x6f7 PushI
	var_83_bool = var_65_int == var_82_int; // 0x6f8 Eq
	if(var_83_bool == 0) goto Label_1787; // 0x6f9 JumpB
	return 4; // 0x6fa Return
}


func_1259(var_102_bool, var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); // 0x4eb PushV
	var_108_bool = var_103_object == 0; // 0x4ec NullEq
	if(var_108_bool == 0) goto Label_1264; // 0x4ed JumpB
	var_102_bool = 0; // 0x4ee MovB
	return 4; // 0x4ef Return
	
Label_1264:
	var_109_bool = 0; // 0x4f0 PushV
	var_109_bool = 0; // 0x4f1 MovB
	var_110_string = "IsDead"; // 0x4f2 PushS
	var_111_int = 1; // 0x4f3 PushI
	var_112_bool = IsFuncExist(var_103_object, var_110_string, var_111_int); // 0x4f4 FuncExist
	if(var_112_bool == 0) goto Label_1276; // 0x4f5 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x4f6 PushV
	var_114_object = var_103_object; // 0x4f7 Mov
	func_1254(var_114_object); // 0x4f8 NEW_2
	if(var_113_bool == 0) goto Label_1276; // 0x4fa JumpB
	var_109_bool = 1; // 0x4fb MovB
	
Label_1276:
	if(var_109_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_102_bool = 0; // 0x4fd MovB
	return 4; // 0x4fe Return
	
Label_1279:
	GetScene(var_106_object); // 0x4ff Func
	var_117_bool = var_106_object == 0; // 0x501 NullEq
	if(var_117_bool == 0) goto Label_1285; // 0x502 JumpB
	var_102_bool = 0; // 0x503 MovB
	return 4; // 0x504 Return
	
Label_1285:
	GetScene(var_107_object); // 0x505 ObjFunc
	var_118_bool = var_106_object != var_107_object; // 0x507 Neq
	if(var_118_bool == 0) goto Label_1291; // 0x508 JumpB
	var_102_bool = 0; // 0x509 MovB
	return 4; // 0x50a Return
	
Label_1291:
	var_102_bool = 1; // 0x50b MovB
	return 4; // 0x50c Return
}


func_1800(var_122_string)
{
	var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; var_128_bool = 0; // 0x708 PushV
	CreateInvItem(var_126_object); // 0x709 Func
	SetItemName(var_122_string); // 0x70b ObjFunc
	var_129_string = "Organ"; // 0x70d PushS
	var_130_int = 1; // 0x70e PushI
	SetProperty(var_129_string, var_130_int); // 0x70f ObjFunc
	GetItemID(var_127_int); // 0x711 ObjFunc
	var_131_int = 0; // 0x713 PushI
	var_132_int = 1; // 0x714 PushI
	AddItem(var_128_bool, var_126_object, var_131_int, var_132_int); // 0x715 Func
	return 6; // 0x717 Return
}


func_1295(var_98_bool, var_99_object)
{
	var_100_int = 0; var_101_int = 0; // 0x50f PushV
	var_102_bool = 0; var_103_object = Obj(); // 0x510 PushV
	var_103_object = var_99_object; // 0x511 Mov
	func_1259(var_102_bool, var_103_object); // 0x512 NEW_2
	var_119_bool = var_102_bool == 0; // 0x514 Not
	if(var_119_bool == 0) goto Label_1304; // 0x515 JumpB
	var_98_bool = 0; // 0x516 MovB
	return 2; // 0x517 Return
	
Label_1304:
	var_120_bool = 0; var_121_object = Obj(); var_122_string = ""; // 0x518 PushV
	var_121_object = var_99_object; // 0x519 Mov
	var_122_string = "noaccess"; // 0x51a MovS
	func_1220(var_120_bool, var_121_object, var_122_string); // 0x51b NEW_2
	var_123_bool = var_120_bool == 0; // 0x51d Not
	if(var_123_bool == 0) goto Label_1313; // 0x51e JumpB
	var_98_bool = 1; // 0x51f MovB
	return 2; // 0x520 Return
	
Label_1313:
	var_124_string = "noaccess"; // 0x521 PushS
	GetProperty(var_124_string, var_101_int); // 0x522 ObjFunc
	var_125_int = 0; // 0x524 PushI
	var_98_bool = var_101_int == var_125_int; // 0x525 Eq2
	return 2; // 0x526 Return
}


func_1817()
{
	var_116_int = 0; // 0x719 PushV
	func_1750(var_116_int); // 0x71a NEW_2
	var_120_int = 1; // 0x71c PushI
	var_121_bool = var_116_int != var_120_int; // 0x71d Neq
	if(var_121_bool == 0) goto Label_1824; // 0x71e JumpB
	return 0; // 0x71f Return
	
Label_1824:
	var_122_string = ""; // 0x720 PushV
	var_122_string = "liver"; // 0x721 MovS
	func_1800(var_122_string); // 0x722 NEW_2
	var_133_string = ""; // 0x724 PushV
	var_133_string = "kidney"; // 0x725 MovS
	func_1800(var_133_string); // 0x726 NEW_2
	var_134_string = ""; // 0x728 PushV
	var_134_string = "heart"; // 0x729 MovS
	func_1800(var_134_string); // 0x72a NEW_2
	var_135_string = ""; // 0x72c PushV
	var_135_string = "blood"; // 0x72d MovS
	func_1800(var_135_string); // 0x72e NEW_2
	return 0; // 0x730 Return
}


func_1319(var_88_bool, var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_bool = 0; // 0x527 PushV
	GetPosition(var_93_cvector); // 0x528 Func
	var_94_cvector = var_89_cvector - var_93_cvector; // 0x52a Sub2
	var_96_float = GetByIndex(var_94_cvector, 0); // 0x52b PushE
	var_97_float = GetByIndex(var_94_cvector, 2); // 0x52c PushE
	Rotate(var_96_float, var_97_float, var_95_bool); // 0x52d Func
	var_88_bool = var_95_bool; // 0x52f Mov
	return 6; // 0x530 Return
}


func_1841()
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x731 PushV
	var_64_int = 0; // 0x732 PushI
	ClearSubContainer(var_64_int); // 0x733 Func
	var_65_int = 0; var_66_int = 0; // 0x735 PushV
	var_65_int = 600; // 0x736 MovI
	var_66_int = 1500; // 0x737 MovI
	func_1769(var_65_int, var_66_int); // 0x738 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x73a PushV
	var_84_string = "fresh_meat"; // 0x73b MovS
	var_85_int = 1; // 0x73c MovI
	var_86_int = 6; // 0x73d MovI
	func_1480(var_84_string, var_85_int, var_86_int); // 0x73e NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x740 PushV
	var_95_string = "rusk"; // 0x741 MovS
	var_96_int = 1; // 0x742 MovI
	var_97_int = 6; // 0x743 MovI
	var_98_int = 2; // 0x744 MovI
	func_1491(var_95_string, var_96_int, var_97_int, var_98_int); // 0x745 NEW_2
	var_109_string = ""; var_110_int = 0; var_111_int = 0; // 0x747 PushV
	var_109_string = "gamma_pills"; // 0x748 MovS
	var_110_int = 1; // 0x749 MovI
	var_111_int = 3; // 0x74a MovI
	func_1480(var_109_string, var_110_int, var_111_int); // 0x74b NEW_2
	var_112_int = 0; var_113_string = ""; // 0x74d PushV
	var_113_string = "bomber_mark"; // 0x74e MovS
	func_1878(var_112_int, var_113_string); // 0x74f NEW_2
	var_114_int = 0; // 0x751 PushI
	var_115_int = 1; // 0x752 PushI
	AddItem(var_63_bool, var_112_int, var_114_int, var_115_int); // 0x753 Func
	return 4; // 0x755 Return
}


func_1329(var_84_bool)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x531 PushV
	GetPosition(var_87_cvector); // 0x532 ObjFunc
	var_88_bool = 0; var_89_cvector = CVector(0,0,0); // 0x534 PushV
	var_89_cvector = var_87_cvector; // 0x535 Mov
	func_1319(var_88_bool, var_89_cvector); // 0x536 NEW_2
	var_84_bool = var_88_bool; // 0x537 Mov
	return 2; // 0x539 Return
}


func_1338(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x53a PushV
	var_43_bool = var_28_object == 0; // 0x53b NullEq
	if(var_43_bool == 0) goto Label_1342; // 0x53c JumpB
	return 14; // 0x53d Return
	
Label_1342:
	IsDead(var_36_bool); // 0x53e Func
	var_44_bool = var_36_bool; // 0x540 Push
	if(var_44_bool == 0) goto Label_1347; // 0x541 JumpB
	return 14; // 0x542 Return
	
Label_1347:
	GetSecondaryAnimationType(var_37_int); // 0x543 Func
	var_45_int = 0; // 0x545 PushI
	var_46_bool = var_37_int < var_45_int; // 0x546 LT
	if(var_46_bool == 0) goto Label_1353; // 0x547 JumpB
	return 14; // 0x548 Return
	
Label_1353:
	GetPosition(var_38_cvector); // 0x549 ObjFunc
	GetPosition(var_39_cvector); // 0x54b Func
	GetDirection(var_40_cvector); // 0x54d Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x54f Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x550 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x551 PushE
	var_49_float = var_47_float * var_48_float; // 0x552 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x553 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x554 PushE
	var_52_float = var_50_float * var_51_float; // 0x555 Mult
	var_53_int = var_49_float + var_52_float; // 0x556 Add
	var_54_int = 0; // 0x557 PushI
	var_55_bool = var_53_int >= var_54_int; // 0x558 GE
	if(var_55_bool == 0) goto Label_1372; // 0x559 JumpB
	var_42_string = "fhit"; // 0x55a MovS
	goto Label_1373; // 0x55b Jump
	
Label_1373:
	var_56_string = "hit_react"; // 0x55d PushS
	var_57_string = "1"; // 0x55e PushS
	var_58_int = var_42_string + var_57_string; // 0x55f Add
	var_59_string = "2"; // 0x560 PushS
	var_60_int = var_42_string + var_59_string; // 0x561 Add
	var_61_int = -10; // 0x562 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x563 Func
	return 14; // 0x565 Return
	
Label_1372:
	var_42_string = "bhit"; // 0x55c MovS
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
	func_1506(var_160_string); // 0x14a NEW_2
	var_189_string = "all"; // 0x14c PushS
	PlayAnimation(var_189_string, var_159_string); // 0x14d Func
	WaitForAnimEnd(); // 0x14f Func
	var_190_string = "all"; // 0x151 PushS
	LockAnimationEnd(var_190_string, var_159_string); // 0x152 Func
	RemoveEnvelope(); // 0x154 Func
	return 0; // 0x156 Return
}


func_1878(var_77_int, var_78_string)
{
	var_79_int = 0; var_80_int = 0; // 0x756 PushV
	GetInvItemByName(var_80_int, var_78_string); // 0x757 Func
	var_77_int = var_80_int; // 0x759 Mov
	return 2; // 0x75a Return
}


func_1883(var_19_bool, var_20_object)
{
	var_21_string = ""; var_22_string = ""; var_23_string = ""; var_24_string = ""; // 0x75b PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x75c PushV
	var_26_object = var_20_object; // 0x75d Mov
	var_27_string = "class"; // 0x75e MovS
	func_1220(var_25_bool, var_26_object, var_27_string); // 0x75f NEW_2
	var_34_bool = var_25_bool == 0; // 0x761 Not
	if(var_34_bool == 0) goto Label_1893; // 0x762 JumpB
	var_19_bool = 0; // 0x763 MovB
	return 4; // 0x764 Return
	
Label_1893:
	var_35_string = "class"; // 0x765 PushS
	GetProperty(var_35_string, var_23_string); // 0x766 Func
	var_36_string = "class"; // 0x768 PushS
	GetProperty(var_36_string, var_24_string); // 0x769 ObjFunc
	var_19_bool = var_24_string == var_23_string; // 0x76b Eq2
	return 4; // 0x76c Return
}


func_349(var_115_object)
{
	var_119_object = Obj(); var_120_bool = 0; // 0x15e PushV
	var_119_object = var_115_object; // 0x15f Mov
	var_120_bool = 0; // 0x160 MovB
	func_417(var_116_cvector, var_117_object, var_118_object, var_115_object, var_119_object, var_120_bool); // 0x161 NEW_2
	return 0; // 0x163 Return
}


func_1382(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x566 PushV
	var_36_bool = 0; // 0x567 PushV
	var_36_bool = 0; // 0x568 MovB
	var_37_bool = 0; // 0x569 PushV
	var_37_bool = 0; // 0x56a MovB
	var_38_object = var_15_object; // 0x56b Push
	if(var_38_object == 0) goto Label_1393; // 0x56c JumpB
	var_39_int = 4; // 0x56d PushI
	var_40_bool = var_16_int != var_39_int; // 0x56e Neq
	if(var_40_bool == 0) goto Label_1393; // 0x56f JumpB
	var_37_bool = 1; // 0x570 MovB
	
Label_1393:
	if(var_37_bool == 0) goto Label_1398; // 0x571 JumpB
	var_41_int = 5; // 0x572 PushI
	var_42_bool = var_16_int != var_41_int; // 0x573 Neq
	if(var_42_bool == 0) goto Label_1398; // 0x574 JumpB
	var_36_bool = 1; // 0x575 MovB
	
Label_1398:
	if(var_36_bool == 0) goto Label_1445; // 0x576 JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x577 PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x578 PushV
	var_46_object = var_15_object; // 0x579 Mov
	func_1200(var_46_object); // 0x57a NEW_2
	var_44_cvector = var_45_cvector; // 0x57b Mov
	func_1640(var_43_cvector, var_44_cvector); // 0x57d NEW_2
	var_27_cvector = var_43_cvector; // 0x57e Mov
	CreateVectorVector(var_28_object); // 0x580 Func
	var_29_int = 1; // 0x582 MovI
	
Label_1411:
	var_56_string = "hit"; // 0x583 PushS
	var_57_int = var_56_string + var_29_int; // 0x584 Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x585 Func
	var_58_bool = var_30_bool == 0; // 0x587 Not
	if(var_58_bool == 0) goto Label_1418; // 0x588 JumpB
	goto Label_1427; // 0x589 Jump
	
Label_1427:
	size(var_33_int); // 0x593 ObjFunc
	var_59_int = var_33_int; // 0x595 Push
	if(var_59_int == 0) goto Label_1444; // 0x596 JumpB
	irand(var_34_int, var_33_int); // 0x597 Func
	get(var_35_cvector, var_34_int); // 0x599 ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x59b PushV
	var_60_object = var_15_object; // 0x59c Mov
	var_61_int = var_16_int; // 0x59d Mov
	var_62_float = var_17_float; // 0x59e Mov
	var_63_cvector = var_35_cvector; // 0x59f Mov
	var_64_cvector = -var_27_cvector; // 0x5a0 Neg2
	func_1450(var_62_float, var_63_cvector, var_64_cvector); // 0x5a1 NEW_2
	return 18; // 0x5a3 Return
	
Label_1444:
	var_28_object = 0; // 0x5a4 SetNull
	
Label_1445:
	var_105_object = Obj(); // 0x5a5 PushV
	var_105_object = var_15_object; // 0x5a6 Mov
	func_1338(var_105_object); // 0x5a7 NEW_2
	return 18; // 0x5a9 Return
	
Label_1418:
	var_106_int = var_32_cvector | var_27_cvector; // 0x58a Or
	var_107_float = 0.70711; // 0x58b PushF
	var_108_bool = var_106_int >= var_107_float; // 0x58c GE
	if(var_108_bool == 0) goto Label_1424; // 0x58d JumpB
	add(var_31_cvector); // 0x58e ObjFunc
	
Label_1424:
	var_109_int = 1; // 0x590 PushI
	var_29_int = var_29_int + var_109_int; // 0x591 Add2
	goto Label_1411; // 0x592 Jump
}


func_1901(var_210_float, var_211_cvector, var_212_cvector, var_213_cvector)
{
	var_214_float = 0; var_215_float = 0; var_216_float = 0; var_217_float = 0; var_218_float = 0; var_219_float = 0; var_220_float = 0; var_221_float = 0; var_222_float = 0; var_223_float = 0; // 0x76d PushV
	var_224_float = GetByIndex(var_213_cvector, 0); // 0x76e PushE
	var_225_float = GetByIndex(var_213_cvector, 0); // 0x76f PushE
	var_226_float = var_224_float * var_225_float; // 0x770 Mult
	var_227_float = GetByIndex(var_213_cvector, 2); // 0x771 PushE
	var_228_float = GetByIndex(var_213_cvector, 2); // 0x772 PushE
	var_229_float = var_227_float * var_228_float; // 0x773 Mult
	var_230_int = var_226_float + var_229_float; // 0x774 Add
	var_219_float = sqrt(var_230_int); // 0x775 Sqrt2
	var_231_float = GetByIndex(var_213_cvector, 1); // 0x776 PushE
	var_220_float = var_231_float / var_231_float; // 0x777 Div2
	var_232_float = GetByIndex(var_211_cvector, 0); // 0x778 PushE
	var_233_float = GetByIndex(var_212_cvector, 0); // 0x779 PushE
	var_234_int = var_232_float - var_233_float; // 0x77a Sub
	var_235_float = GetByIndex(var_211_cvector, 0); // 0x77b PushE
	var_236_float = GetByIndex(var_212_cvector, 0); // 0x77c PushE
	var_237_int = var_235_float - var_236_float; // 0x77d Sub
	var_238_float = var_234_int * var_237_int; // 0x77e Mult
	var_239_float = GetByIndex(var_211_cvector, 2); // 0x77f PushE
	var_240_float = GetByIndex(var_212_cvector, 2); // 0x780 PushE
	var_241_int = var_239_float - var_240_float; // 0x781 Sub
	var_242_float = GetByIndex(var_211_cvector, 2); // 0x782 PushE
	var_243_float = GetByIndex(var_212_cvector, 2); // 0x783 PushE
	var_244_int = var_242_float - var_243_float; // 0x784 Sub
	var_245_float = var_241_int * var_244_int; // 0x785 Mult
	var_246_int = var_238_float + var_245_float; // 0x786 Add
	var_221_float = sqrt(var_246_int); // 0x787 Sqrt2
	var_247_float = 500.0; // 0x788 PushF
	var_248_float = var_221_float * var_220_float; // 0x789 Mult
	var_249_float = GetByIndex(var_212_cvector, 1); // 0x78a PushE
	var_250_float = GetByIndex(var_211_cvector, 1); // 0x78b PushE
	var_251_int = var_249_float - var_250_float; // 0x78c Sub
	var_252_int = var_248_float - var_251_int; // 0x78d Sub
	var_222_float = var_247_float / var_247_float; // 0x78e Div2
	var_253_int = 0; // 0x78f PushI
	var_254_bool = var_222_float < var_253_int; // 0x790 LT
	if(var_254_bool == 0) goto Label_1940; // 0x791 JumpB
	var_210_float = -1; // 0x792 MovI
	return 10; // 0x793 Return
	
Label_1940:
	var_255_float = var_221_float / var_219_float; // 0x794 Div
	var_256_float = sqrt(var_222_float); // 0x795 Sqrt
	var_223_float = var_255_float * var_256_float; // 0x796 Mult2
	var_210_float = var_223_float; // 0x797 Mov
	return 10; // 0x798 Return
}


func_893(var_0_bool, var_130_object)
{
	var_132_int = 5; // 0x37d PushI
	Sleep(var_132_int); // 0x37e Func
	var_130_object = var_0_bool; // 0x380 MovT
	return 0; // 0x381 Return
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
	func_2118(var_124_bool, var_125_object); // 0x190 NEW_2
	var_126_bool = var_124_bool == 0; // 0x192 Not
	if(var_126_bool == 0) goto Label_406; // 0x193 JumpB
	var_118_bool = 0; // 0x194 MovB
	return 2; // 0x195 Return
	
Label_406:
	IsPlayerActor(var_120_object, var_122_bool); // 0x196 Func
	var_118_bool = var_122_bool; // 0x198 Mov
	return 2; // 0x199 Return
}


func_1945(var_139_int, var_140_float)
{
	var_142_int = 200; // 0x79a PushI
	var_143_bool = var_140_float < var_142_int; // 0x79b LT
	if(var_143_bool == 0) goto Label_1952; // 0x79c JumpB
	var_139_int = 1; // 0x79d MovI
	return 0; // 0x79e Return
	
Label_1952:
	var_144_int = 1000; // 0x7a0 PushI
	var_145_bool = var_140_float < var_144_int; // 0x7a1 LT
	if(var_145_bool == 0) goto Label_1957; // 0x7a2 JumpB
	var_139_int = 2; // 0x7a3 MovI
	return 0; // 0x7a4 Return
	
Label_1957:
	var_139_int = 3; // 0x7a5 MovI
	return 0; // 0x7a6 Return
}


func_410(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x19b PushV
	var_17_object = var_15_object; // 0x19c Mov
	func_2118(var_16_bool, var_17_object); // 0x19d NEW_2
	var_14_bool = var_16_bool; // 0x19e Mov
	return 0; // 0x1a0 Return
}


func_927(var_0_bool, var_50_object)
{
	var_51_bool = 0; // 0x3a0 PushV
	var_51_bool = 0; // 0x3a1 MovB
	var_52_bool = var_0_bool == 0; // 0x3a2 NullEq
	if(var_52_bool == 0) goto Label_938; // 0x3a3 JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x3a4 PushV
	var_54_object = var_50_object; // 0x3a5 Mov
	func_2118(var_53_bool, var_54_object); // 0x3a6 NEW_2
	if(var_53_bool == 0) goto Label_938; // 0x3a8 JumpB
	var_51_bool = 1; // 0x3a9 MovB
	
Label_938:
	if(var_51_bool == 0) goto Label_942; // 0x3aa JumpB
	var_0_bool = var_50_object; // 0x3ab TMov
	StopGroup0(); // 0x3ac Func
	
Label_942:
	return 0; // 0x3ae Return
}


func_417(var_0_bool, var_1_bool, var_2_cvector, var_119_object, var_120_bool, var_142_float)
{
	var_121_bool = 0; var_122_bool = 0; // 0x1a1 PushV
	var_123_bool = 0; var_124_object = Obj(); // 0x1a2 PushV
	var_124_object = var_1_bool; // 0x1a3 MovT
	func_1295(var_123_bool, var_124_object); // 0x1a4 NEW_2
	var_125_bool = var_123_bool == 0; // 0x1a6 Not
	if(var_125_bool == 0) goto Label_425; // 0x1a7 JumpB
	return 2; // 0x1a8 Return
	
Label_425:
	var_1_bool = var_119_object; // 0x1a9 TMov
	var_126_object = Obj(); // 0x1aa PushV
	var_126_object = var_1_bool; // 0x1ab MovT
	func_1717(var_126_object); // 0x1ac NEW_2
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
	func_943(var_142_float, var_143_float, var_144_object, var_140_object, var_141_object); // 0x1ca NEW_2
	TaskReturn(); // 0x1cb TaskReturn
	var_1_bool = var_142_float; // 0x1cc TMov
	var_164_int = 61; // 0x1ce PushI
	var_165_float = 0.5; // 0x1cf PushF
	SetTimer(var_164_int, var_165_float); // 0x1d0 Func
	var_166_bool = 0; var_167_object = Obj(); // 0x1d2 PushV
	var_167_object = var_1_bool; // 0x1d3 MovT
	func_1295(var_166_bool, var_167_object); // 0x1d4 NEW_2
	var_168_bool = var_166_bool == 0; // 0x1d6 Not
	if(var_168_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_477; // 0x1d8 Jump
	
Label_473:
	GetPFPosition(var_0_bool); // 0x1d9 TObjFunc
}


func_1959(var_259_float, var_260_int)
{
	var_261_int = 1; // 0x7a8 PushI
	var_262_bool = var_260_int == var_261_int; // 0x7a9 Eq
	if(var_262_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_259_float = 30; // 0x7ab MovI
	return 0; // 0x7ac Return
	
Label_1965:
	var_259_float = 700; // 0x7ad MovI
	return 0; // 0x7ae Return
}


func_1450(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x5aa PushV
	GetScene(var_24_object); // 0x5ab Func
	var_26_string = "scripted"; // 0x5ad PushS
	var_27_string = "blood_dir.xml"; // 0x5ae PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x5af Func
	var_28_object = Obj(); // 0x5b1 PushV
	var_28_object = var_17_object; // 0x5b2 Mov
	func_1338(var_28_object); // 0x5b3 NEW_2
	return 4; // 0x5b5 Return
}


func_943(var_0_bool, var_1_bool, var_2_cvector, var_140_object, var_141_object)
{
	var_145_bool = 0; var_146_int = 0; var_147_bool = 0; var_148_int = 0; // 0x3af PushV
	GetSeeThreshold(var_0_bool); // 0x3b0 Func
	GetSeeFOV(var_148_int); // 0x3b2 Func
	var_149_float = 1.5; // 0x3b4 PushF
	var_150_float = var_0_bool / var_149_float; // 0x3b5 Div
	SetSeeThreshold(var_150_float); // 0x3b6 Func
	var_2_cvector = var_141_object; // 0x3b8 TMov
	var_151_object = Obj(); // 0x3b9 PushV
	var_151_object = var_2_cvector; // 0x3ba MovT
	func_1717(var_151_object); // 0x3bb NEW_2
	var_148_int = 0; // 0x3bd MovI
	
Label_958:
	var_152_int = 3; // 0x3be PushI
	var_153_bool = var_148_int < var_152_int; // 0x3bf LT
	if(var_153_bool == 0) goto Label_989; // 0x3c0 JumpB
	var_154_float = 1.8; // 0x3c1 PushF
	var_155_float = var_1_bool * var_154_float; // 0x3c2 Mult
	SetSeeFOV(var_155_float); // 0x3c3 Func
	var_156_string = "all"; // 0x3c5 PushS
	var_157_string = "hunt"; // 0x3c6 PushS
	PlayAnimation(var_156_string, var_157_string); // 0x3c7 Func
	WaitForAnimEnd(var_147_bool); // 0x3c9 Func
	SetSeeFOV(var_148_int); // 0x3cb Func
	var_158_bool = var_147_bool == 0; // 0x3cd Not
	if(var_158_bool == 0) goto Label_976; // 0x3ce JumpB
	goto Label_989; // 0x3cf Jump
	
Label_989:
	func_1055(var_147_bool, var_148_int); // 0x3de NEW_2
	var_159_bool = var_147_bool; // 0x3e0 Push
	if(var_159_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_2_cvector = 0; // 0x3e2 SetNullT
	
Label_995:
	var_140_object = var_2_cvector; // 0x3e3 MovT
	return 4; // 0x3e4 Return
	
Label_976:
	var_160_int = 2; // 0x3d0 PushI
	Sleep(var_160_int, var_147_bool); // 0x3d1 Func
	var_161_bool = var_147_bool == 0; // 0x3d3 Not
	if(var_161_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_989; // 0x3d5 Jump
	
Label_982:
	var_162_object = Obj(); // 0x3d6 PushV
	var_162_object = var_2_cvector; // 0x3d7 MovT
	func_1717(var_162_object); // 0x3d8 NEW_2
	var_163_int = 1; // 0x3da PushI
	var_148_int = var_148_int + var_163_int; // 0x3db Add2
	goto Label_958; // 0x3dc Jump
}


func_1967(var_265_float, var_267_float)
{
	var_268_int = 10; // 0x7b0 PushI
	var_269_bool = var_267_float < var_268_int; // 0x7b1 LT
	if(var_269_bool == 0) goto Label_1974; // 0x7b2 JumpB
	var_265_float = 10; // 0x7b3 MovI
	return 0; // 0x7b4 Return
	
Label_1974:
	var_270_int = 1500; // 0x7b6 PushI
	var_271_bool = var_267_float > var_270_int; // 0x7b7 GT
	if(var_271_bool == 0) goto Label_1979; // 0x7b8 JumpB
	var_265_float = 1500; // 0x7b9 MovI
	return 0; // 0x7ba Return
	
Label_1979:
	var_265_float = var_267_float; // 0x7bb Mov
	return 0; // 0x7bc Return
}


func_1464(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x5b8 PushV
	IsLoaded(var_60_bool); // 0x5b9 Func
	var_58_bool = var_60_bool; // 0x5bb Mov
	return 2; // 0x5bc Return
}


func_1981(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x7be PushV
	var_15_object = var_13_object; // 0x7bf Mov
	func_2118(var_14_bool, var_15_object); // 0x7c0 NEW_2
	var_12_bool = var_14_bool; // 0x7c1 Mov
	return 0; // 0x7c3 Return
}


func_1469(var_180_object)
{
	var_181_float = 0; var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_cvector = CVector(0,0,0); // 0x5bd PushV
	GetEyesHeight(var_183_float); // 0x5be ObjFunc
	var_184_cvector = CVector(0.0, 0.0, 0.0); // 0x5c0 MovV
	var_185_float = GetByIndex(var_184_cvector, 1); // 0x5c1 PushE
	var_185_float = var_183_float; // 0x5c2 Mov
	SetByIndex(var_184_cvector, 1) = var_185_float; // 0x5c3 PopE
	var_186_string = "head"; // 0x5c4 PushS
	LookAsync(var_180_object, var_186_string, var_184_cvector); // 0x5c5 Func
	return 4; // 0x5c7 Return
}


func_1988(var_114_object)
{
	var_115_object = Obj(); // 0x7c5 PushV
	var_115_object = var_114_object; // 0x7c6 Mov
	TaskCall(2); // 0x7c7 TaskCall
	func_349(var_115_object); // 0x7c8 NEW_2
	TaskReturn(); // 0x7c9 TaskReturn
	return 0; // 0x7cb Return
}


func_1480(var_84_string, var_85_int, var_86_int)
{
	var_87_bool = 0; var_88_bool = 0; // 0x5c8 PushV
	var_89_bool = 0; var_90_int = 0; var_91_int = 0; // 0x5c9 PushV
	var_90_int = var_85_int; // 0x5ca Mov
	var_91_int = var_86_int; // 0x5cb Mov
	func_1661(var_89_bool, var_90_int, var_91_int); // 0x5cc NEW_2
	if(var_89_bool == 0) goto Label_1490; // 0x5ce JumpB
	var_94_int = 0; // 0x5cf PushI
	AddItem(var_88_bool, var_84_string, var_94_int); // 0x5d0 Func
	
Label_1490:
	return 2; // 0x5d2 Return
}


func_1996(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x7cd PushV
	var_15_object = var_13_object; // 0x7ce Mov
	func_2118(var_14_bool, var_15_object); // 0x7cf NEW_2
	var_12_bool = var_14_bool; // 0x7d0 Mov
	return 0; // 0x7d2 Return
}


func_2003(var_114_object)
{
	var_115_object = Obj(); // 0x7d4 PushV
	var_115_object = var_114_object; // 0x7d5 Mov
	TaskCall(4); // 0x7d6 TaskCall
	func_683(var_114_object, var_116_object, var_117_bool, var_115_object); // 0x7d7 NEW_2
	TaskReturn(); // 0x7d8 TaskReturn
	ResetAAS(); // 0x7da Func
	return 0; // 0x7dc Return
}


func_1491(var_95_string, var_96_int, var_97_int, var_98_int)
{
	var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_bool = 0; // 0x5d3 PushV
	var_103_bool = 0; var_104_int = 0; var_105_int = 0; // 0x5d4 PushV
	var_104_int = var_96_int; // 0x5d5 Mov
	var_105_int = var_97_int; // 0x5d6 Mov
	func_1661(var_103_bool, var_104_int, var_105_int); // 0x5d7 NEW_2
	if(var_103_bool == 0) goto Label_1505; // 0x5d9 JumpB
	irand(var_101_int, var_98_int); // 0x5da Func
	var_106_int = 0; // 0x5dc PushI
	var_107_int = 1; // 0x5dd PushI
	var_108_int = var_101_int + var_107_int; // 0x5de Add
	AddItem(var_102_bool, var_95_string, var_106_int, var_108_int); // 0x5df Func
	
Label_1505:
	return 4; // 0x5e1 Return
}


func_2013(var_51_object)
{
	var_52_object = Obj(); // 0x7de PushV
	var_52_object = var_51_object; // 0x7df Mov
	func_2174(var_52_object); // 0x7e0 NEW_2
	var_59_object = Obj(); // 0x7e2 PushV
	var_59_object = var_51_object; // 0x7e3 Mov
	TaskCall(4); // 0x7e4 TaskCall
	func_683(var_51_object, var_60_object, var_61_bool, var_59_object); // 0x7e5 NEW_2
	TaskReturn(); // 0x7e6 TaskReturn
	ResetAAS(); // 0x7e8 Func
	return 0; // 0x7ea Return
}


func_1506(var_160_string)
{
	var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_float = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_bool = 0; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); // 0x5e2 PushV
	IsExisting3DSound(var_169_bool, var_160_string); // 0x5e3 Func
	var_177_bool = var_169_bool == 0; // 0x5e5 Not
	if(var_177_bool == 0) goto Label_1531; // 0x5e6 JumpB
	var_170_int = 0; // 0x5e7 MovI
	
Label_1512:
	var_178_int = 1; // 0x5e8 PushI
	var_179_int = var_170_int + var_178_int; // 0x5e9 Add
	var_180_int = var_160_string + var_179_int; // 0x5ea Add
	IsExisting3DSound(var_171_bool, var_180_int); // 0x5eb Func
	var_181_bool = var_171_bool == 0; // 0x5ed Not
	if(var_181_bool == 0) goto Label_1520; // 0x5ee JumpB
	goto Label_1523; // 0x5ef Jump
	
Label_1523:
	var_182_bool = var_170_int == 0; // 0x5f3 Not
	if(var_182_bool == 0) goto Label_1526; // 0x5f4 JumpB
	return 16; // 0x5f5 Return
	
Label_1526:
	irand(var_172_int, var_170_int); // 0x5f6 Func
	var_183_int = 1; // 0x5f8 PushI
	var_184_int = var_172_int + var_183_int; // 0x5f9 Add
	var_160_string = var_160_string + var_184_int; // 0x5fa Add2
	
Label_1531:
	Is3DSoundLoaded(var_173_bool, var_160_string); // 0x5fb Func
	var_185_bool = var_173_bool; // 0x5fd Push
	if(var_185_bool == 0) goto Label_1546; // 0x5fe JumpB
	GetEyesHeight(var_174_float); // 0x5ff Func
	GetDirection(var_175_cvector); // 0x601 Func
	var_186_int = 50; // 0x603 PushI
	var_176_cvector = var_175_cvector * var_186_int; // 0x604 Mult2
	var_187_float = GetByIndex(var_176_cvector, 1); // 0x605 PushE
	var_187_float = var_187_float + var_174_float; // 0x606 Add2
	SetByIndex(var_176_cvector, 1) = var_187_float; // 0x607 PopE
	PlayGlobalSound(var_160_string, var_176_cvector); // 0x608 Func
	
Label_1546:
	return 16; // 0x60a Return
	
Label_1520:
	var_188_int = 1; // 0x5f0 PushI
	var_170_int = var_170_int + var_188_int; // 0x5f1 Add2
	goto Label_1512; // 0x5f2 Jump
}


func_2045(var_12_object)
{
	var_13_object = Obj(); // 0x7fe PushV
	var_13_object = var_12_object; // 0x7ff Mov
	func_2187(); // 0x800 NEW_2
	var_14_bool = 0; var_15_object = Obj(); // 0x802 PushV
	var_15_object = var_12_object; // 0x803 Mov
	func_1215(var_14_bool, var_15_object); // 0x804 NEW_2
	if(var_14_bool == 0) goto Label_2060; // 0x806 JumpB
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x807 PushV
	var_19_object = var_12_object; // 0x808 Mov
	var_20_float = 0.05; // 0x809 MovF
	func_1672(var_18_bool, var_19_object, var_20_float); // 0x80a NEW_2
	
Label_2060:
	var_56_object = Obj(); // 0x80c PushV
	var_56_object = var_12_object; // 0x80d Mov
	TaskCall(1); // 0x80e TaskCall
	func_185(var_56_object); // 0x80f NEW_2
	TaskReturn(); // 0x810 TaskReturn
	return 0; // 0x812 Return
}


