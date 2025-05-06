task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xd PushV
	var_13_object = var_11_object; // 0xe Mov
	func_1915(var_12_bool, var_13_object); // 0xf NEW_2
	if(var_12_bool == 0) goto Label_25; // 0x11 JumpB
	func_61(); // 0x13 NEW_2
	var_70_object = Obj(); // 0x15 PushV
	var_70_object = var_11_object; // 0x16 Mov
	func_1922(var_70_object); // 0x17 NEW_2
	
Label_25:
	return 0; // 0x19 Return
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x1b PushV
	var_13_object = var_11_object; // 0x1c Mov
	func_1900(var_12_bool, var_13_object); // 0x1d NEW_2
	if(var_12_bool == 0) goto Label_39; // 0x1f JumpB
	func_61(); // 0x21 NEW_2
	var_70_object = Obj(); // 0x23 PushV
	var_70_object = var_11_object; // 0x24 Mov
	func_1907(var_70_object); // 0x25 NEW_2
	
Label_39:
	return 0; // 0x27 Return
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_61(); // 0x2a NEW_2
	var_51_object = Obj(); // 0x2c PushV
	var_51_object = var_49_object; // 0x2d Mov
	func_1932(var_51_object); // 0x2e NEW_2
	return 0; // 0x30 Return
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x32 PushV
	var_15_object = var_11_float; // 0x33 Mov
	var_16_object = var_12_float; // 0x34 Mov
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x35 NEW_2
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
	func_1999(); // 0x4a NEW_2
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
	func_1675(var_15_object); // 0xdf NEW_2
	
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
	func_1915(var_12_bool, var_13_object); // 0x167 NEW_2
	if(var_12_bool == 0) goto Label_369; // 0x169 JumpB
	func_533(); // 0x16b NEW_2
	var_70_object = Obj(); // 0x16d PushV
	var_70_object = var_11_object; // 0x16e Mov
	func_1922(var_70_object); // 0x16f NEW_2
	
Label_369:
	return 0; // 0x171 Return
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_533(); // 0x174 NEW_2
	var_51_object = Obj(); // 0x176 PushV
	var_51_object = var_49_object; // 0x177 Mov
	func_1932(var_51_object); // 0x178 NEW_2
	return 0; // 0x17a Return
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x17c PushV
	var_15_object = var_11_float; // 0x17d Mov
	var_16_object = var_12_float; // 0x17e Mov
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x17f NEW_2
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
	var_71_bool = var_14_bool == 0; // 0x1e9 Not
	if(var_71_bool == 0) goto Label_494; // 0x1ea JumpB
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
	var_71_bool = var_14_bool == 0; // 0x1fb Not
	if(var_71_bool == 0) goto Label_514; // 0x1fc JumpB
	func_533(); // 0x1fe NEW_2
	var_2_cvector = 0; // 0x200 SetNullT
	return 0; // 0x201 Return
	
Label_514:
	goto Label_522; // 0x202 Jump
	
Label_522:
	GetPFPosition(var_0_bool); // 0x20a TObjFunc
	var_73_string = "new hunt point"; // 0x20c PushS
	Trace(var_73_string); // 0x20d Func
	Stop(); // 0x20f Func
	return 0; // 0x211 Return
	
Label_515:
	var_74_bool = 0; var_75_object = Obj(); var_76_object = Obj(); // 0x203 PushV
	var_75_object = var_11_object; // 0x204 Mov
	var_76_object = var_1_bool; // 0x205 MovT
	func_391(var_74_bool, var_75_object, var_76_object); // 0x206 NEW_2
	if(var_74_bool == 0) goto Label_522; // 0x208 JumpB
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
	func_1999(); // 0x221 NEW_2
	return 0; // 0x223 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x225 PushV
	var_13_object = var_11_object; // 0x226 Mov
	func_1915(var_12_bool, var_13_object); // 0x227 NEW_2
	if(var_12_bool == 0) goto Label_561; // 0x229 JumpB
	func_678(); // 0x22b NEW_2
	var_69_object = Obj(); // 0x22d PushV
	var_69_object = var_11_object; // 0x22e Mov
	func_1922(var_69_object); // 0x22f NEW_2
	
Label_561:
	return 0; // 0x231 Return
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x233 PushV
	var_13_object = var_11_object; // 0x234 Mov
	func_1900(var_12_bool, var_13_object); // 0x235 NEW_2
	if(var_12_bool == 0) goto Label_575; // 0x237 JumpB
	func_678(); // 0x239 NEW_2
	var_69_object = Obj(); // 0x23b PushV
	var_69_object = var_11_object; // 0x23c Mov
	func_1907(var_69_object); // 0x23d NEW_2
	
Label_575:
	return 0; // 0x23f Return
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_678(); // 0x242 NEW_2
	var_50_object = Obj(); // 0x244 PushV
	var_50_object = var_49_object; // 0x245 Mov
	func_1932(var_50_object); // 0x246 NEW_2
	return 0; // 0x248 Return
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x24a PushV
	var_15_object = var_11_float; // 0x24b Mov
	var_16_object = var_12_float; // 0x24c Mov
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x24d NEW_2
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
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x37a NEW_2
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
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x397 NEW_2
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
	func_1915(var_12_bool, var_13_object); // 0x3e8 NEW_2
	if(var_12_bool == 0) goto Label_1010; // 0x3ea JumpB
	func_1055(var_10_object, var_11_object); // 0x3ec NEW_2
	var_69_object = Obj(); // 0x3ee PushV
	var_69_object = var_11_object; // 0x3ef Mov
	func_1922(var_69_object); // 0x3f0 NEW_2
	
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
	func_2031(var_15_bool, var_16_object); // 0x3fb NEW_2
	var_70_bool = var_15_bool == 0; // 0x3fd Not
	if(var_70_bool == 0) goto Label_1024; // 0x3fe JumpB
	return 2; // 0x3ff Return
	
Label_1024:
	IsPlayerActor(var_11_object, var_13_bool); // 0x400 Func
	var_71_bool = var_13_bool; // 0x402 Push
	if(var_71_bool == 0) goto Label_1033; // 0x403 JumpB
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
	func_1932(var_50_object); // 0x410 NEW_2
	return 0; // 0x412 Return
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x414 PushV
	var_15_object = var_11_object; // 0x415 Mov
	var_16_object = var_12_object; // 0x416 Mov
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x417 NEW_2
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
	func_1999(); // 0x42e NEW_2
	return 0; // 0x430 Return
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x43a PushV
	var_13_object = var_11_object; // 0x43b Mov
	func_1915(var_12_bool, var_13_object); // 0x43c NEW_2
	if(var_12_bool == 0) goto Label_1094; // 0x43e JumpB
	func_1130(); // 0x440 NEW_2
	var_70_object = Obj(); // 0x442 PushV
	var_70_object = var_11_object; // 0x443 Mov
	func_1922(var_70_object); // 0x444 NEW_2
	
Label_1094:
	return 0; // 0x446 Return
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x448 PushV
	var_13_object = var_11_object; // 0x449 Mov
	func_1900(var_12_bool, var_13_object); // 0x44a NEW_2
	if(var_12_bool == 0) goto Label_1108; // 0x44c JumpB
	func_1130(); // 0x44e NEW_2
	var_70_object = Obj(); // 0x450 PushV
	var_70_object = var_11_object; // 0x451 Mov
	func_1907(var_70_object); // 0x452 NEW_2
	
Label_1108:
	return 0; // 0x454 Return
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1130(); // 0x457 NEW_2
	var_51_object = Obj(); // 0x459 PushV
	var_51_object = var_49_object; // 0x45a Mov
	func_1932(var_51_object); // 0x45b NEW_2
	return 0; // 0x45d Return
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x45f PushV
	var_15_object = var_11_object; // 0x460 Mov
	var_16_object = var_12_object; // 0x461 Mov
	func_2005(var_14_bool, var_15_object, var_16_object); // 0x462 NEW_2
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
	func_1999(); // 0x479 NEW_2
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
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x79b PushV
	var_15_object = var_11_object; // 0x79c Mov
	var_16_int = var_12_int; // 0x79d Mov
	var_17_float = var_13_float; // 0x79e Mov
	func_1382(var_15_object, var_16_int, var_17_float); // 0x79f NEW_2
	return 0; // 0x7a1 Return
}


event_43(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x7a3 PushV
	var_17_object = var_11_object; // 0x7a4 Mov
	var_18_int = var_12_int; // 0x7a5 Mov
	var_19_float = var_13_float; // 0x7a6 Mov
	var_20_cvector = var_15_cvector; // 0x7a7 Mov
	var_21_cvector = var_16_cvector; // 0x7a8 Mov
	func_1450(var_19_float, var_20_cvector, var_21_cvector); // 0x7a9 NEW_2
	return 0; // 0x7ab Return
}


event_16(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x7c2 PushV
	var_15_string = "health"; // 0x7c3 PushS
	var_16_bool = var_12_string == var_15_string; // 0x7c4 Eq
	if(var_16_bool == 0) goto Label_1998; // 0x7c5 JumpB
	var_17_string = "health"; // 0x7c6 PushS
	GetProperty(var_17_string, var_14_float); // 0x7c7 Func
	var_18_int = 0; // 0x7c9 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x7ca LE
	if(var_19_bool == 0) goto Label_1998; // 0x7cb JumpB
	SignalDeath(var_11_object); // 0x7cc Func
	
Label_1998:
	return 2; // 0x7ce Return
}


event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x7d0 PushV
	var_12_object = var_11_object; // 0x7d1 Mov
	func_1964(var_12_object); // 0x7d2 NEW_2
	return 0; // 0x7d4 Return
}


event_6(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	var_11_object = Obj(); // 0x821 PushV
	func_1547(var_11_object); // 0x822 NEW_2
	RemoveActor(var_11_object); // 0x824 Func
	Hold(); // 0x826 Func
	return 0; // 0x828 Return
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_2030(); // 0x1 NEW_2
	
Label_3:
	var_11_int = 90; // 0x3 PushI
	var_12_int = 10; // 0x4 PushI
	SetTimer(var_11_int, var_12_int); // 0x5 Func
	func_99(var_9_float, var_10_object); // 0x8 NEW_2
	goto Label_3; // 0xa Jump
}


func_1547(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x60b PushV
	self(var_13_object); // 0x60c Func
	var_11_object = var_13_object; // 0x60e Mov
	return 2; // 0x60f Return
}


func_1553(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x611 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x612 Or
	var_52_float = sqrt(var_53_int); // 0x613 Sqrt2
	var_54_float = 0.0; // 0x614 PushF
	var_55_bool = var_52_float < var_54_float; // 0x615 LT
	if(var_55_bool == 0) goto Label_1561; // 0x616 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x617 MovV
	return 2; // 0x618 Return
	
Label_1561:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x619 Div2
	return 2; // 0x61a Return
}


func_533()
{
	var_12_int = 61; // 0x215 PushI
	KillTimer(var_12_int); // 0x216 Func
	Stop(); // 0x218 Func
	return 0; // 0x21a Return
}


func_1563(var_53_float, var_54_float, var_55_float, var_56_float)
{
	var_57_bool = var_54_float < var_55_float; // 0x61c LT
	if(var_57_bool == 0) goto Label_1568; // 0x61d JumpB
	var_53_float = var_55_float; // 0x61e Mov
	return 0; // 0x61f Return
	
Label_1568:
	var_58_bool = var_54_float > var_56_float; // 0x620 GT
	if(var_58_bool == 0) goto Label_1572; // 0x621 JumpB
	var_53_float = var_56_float; // 0x622 Mov
	return 0; // 0x623 Return
	
Label_1572:
	var_53_float = var_54_float; // 0x624 Mov
	return 0; // 0x625 Return
}


func_1055(var_0_bool, var_104_int)
{
	SetSeeThreshold(var_0_bool); // 0x41f Func
	SetSeeFOV(var_104_int); // 0x421 Func
	Stop(); // 0x423 Func
	StopGroup0(); // 0x425 Func
	return 0; // 0x427 Return
}


func_2079()
{
	return 0; // 0x820 Return
}


func_1574(var_95_bool, var_96_int, var_97_int)
{
	var_98_int = 0; var_99_int = 0; // 0x626 PushV
	irand(var_99_int, var_97_int); // 0x627 Func
	var_95_bool = var_99_int < var_96_int; // 0x629 LT2
	return 2; // 0x62a Return
}


func_2089()
{
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x82a PushV
	var_15_string = "quest_d6_02"; // 0x82b MovS
	var_16_string = "gorbun_death"; // 0x82c MovS
	func_1624(var_14_bool, var_15_string, var_16_string); // 0x82d NEW_2
	return 0; // 0x82f Return
}


func_1579(var_24_bool, var_25_object, var_26_float)
{
	var_27_bool = var_25_object == 0; // 0x62c Not
	if(var_27_bool == 0) goto Label_1584; // 0x62d JumpB
	var_24_bool = 0; // 0x62e MovB
	return 0; // 0x62f Return
	
Label_1584:
	var_28_int = 0; // 0x630 PushI
	var_29_bool = var_26_float > var_28_int; // 0x631 GT
	if(var_29_bool == 0) goto Label_1591; // 0x632 JumpB
	var_30_int = 8; // 0x633 PushI
	SendWorldWndMessage(var_30_int); // 0x634 Func
	goto Label_1600; // 0x636 Jump
	
Label_1600:
	var_31_float = 0; // 0x640 PushV
	var_31_float = var_26_float; // 0x641 Mov
	func_1614(var_31_float); // 0x642 NEW_2
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0; // 0x644 PushV
	var_36_object = var_25_object; // 0x645 Mov
	var_37_string = "reputation"; // 0x646 MovS
	var_38_float = var_26_float; // 0x647 Mov
	var_39_float = 0; // 0x648 MovI
	var_40_float = 1; // 0x649 MovI
	func_1232(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float); // 0x64a NEW_2
	var_24_bool = 1; // 0x64c MovB
	return 0; // 0x64d Return
	
Label_1591:
	var_59_int = 0; // 0x637 PushI
	var_60_bool = var_26_float < var_59_int; // 0x638 LT
	if(var_60_bool == 0) goto Label_1598; // 0x639 JumpB
	var_61_int = 9; // 0x63a PushI
	SendWorldWndMessage(var_61_int); // 0x63b Func
	goto Label_1600; // 0x63d Jump
	
Label_1598:
	var_24_bool = 0; // 0x63e MovB
	return 0; // 0x63f Return
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


func_1614(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x64e PushV
	CreateFloatVector(var_33_object); // 0x64f Func
	add(var_31_float); // 0x651 ObjFunc
	var_34_int = 16; // 0x653 PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x654 Func
	return 2; // 0x656 Return
}


func_597()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0; // 0x255 PushV
	WaitForAnimEnd(); // 0x256 Func
	var_54_bool = 0; // 0x258 PushV
	func_1464(var_54_bool); // 0x259 NEW_2
	var_57_bool = var_54_bool == 0; // 0x25b Not
	if(var_57_bool == 0) goto Label_606; // 0x25c JumpB
	return 14; // 0x25d Return
	
Label_606:
	var_58_int = 0; // 0x25e PushV
	func_1652(var_58_int); // 0x25f NEW_2
	var_47_int = var_58_int; // 0x260 Mov
	var_48_int = 0; // 0x262 MovI
	
Label_611:
	var_71_bool = 0; // 0x263 PushV
	var_71_bool = 0; // 0x264 MovB
	var_72_int = 5; // 0x265 PushI
	var_73_bool = var_48_int < var_72_int; // 0x266 LT
	if(var_73_bool == 0) goto Label_621; // 0x267 JumpB
	var_74_bool = 0; // 0x268 PushV
	func_1464(var_74_bool); // 0x269 NEW_2
	if(var_74_bool == 0) goto Label_621; // 0x26b JumpB
	var_71_bool = 1; // 0x26c MovB
	
Label_621:
	if(var_71_bool == 0) goto Label_673; // 0x26d JumpB
	var_75_int = 3; // 0x26e PushI
	irand(var_49_int, var_75_int); // 0x26f Func
	var_76_int = 0; // 0x271 PushI
	var_77_bool = var_49_int == var_76_int; // 0x272 Eq
	if(var_77_bool == 0) goto Label_645; // 0x273 JumpB
	var_78_int = var_47_int; // 0x274 Push
	if(var_78_int == 0) goto Label_644; // 0x275 JumpB
	irand(var_50_int, var_47_int); // 0x276 Func
	var_79_string = "all"; // 0x278 PushS
	var_80_string = ""; var_81_int = 0; // 0x279 PushV
	var_81_int = var_50_int; // 0x27a Mov
	func_1645(var_80_string, var_81_int); // 0x27b NEW_2
	PlayAnimation(var_79_string, var_80_string); // 0x27d Func
	WaitForAnimEnd(var_51_bool); // 0x27f Func
	var_82_bool = var_51_bool == 0; // 0x281 Not
	if(var_82_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_673; // 0x283 Jump
	
Label_673:
	ResetAAS(); // 0x2a1 Func
	return 14; // 0x2a3 Return
	
Label_644:
	goto Label_662; // 0x284 Jump
	
Label_662:
	var_83_bool = 0; // 0x296 PushV
	func_676(var_83_bool); // 0x297 NEW_2
	var_84_bool = var_83_bool == 0; // 0x299 Not
	if(var_84_bool == 0) goto Label_668; // 0x29a JumpB
	goto Label_673; // 0x29b Jump
	
Label_668:
	ResetAAS(); // 0x29c Func
	var_85_int = 1; // 0x29e PushI
	var_48_int = var_48_int + var_85_int; // 0x29f Add2
	goto Label_611; // 0x2a0 Jump
	
Label_645:
	var_86_int = 1; // 0x285 PushI
	var_87_bool = var_49_int == var_86_int; // 0x286 Eq
	if(var_87_bool == 0) goto Label_659; // 0x287 JumpB
	var_88_int = 4; // 0x288 PushI
	rand(var_52_float, var_88_int); // 0x289 Func
	var_89_int = 1; // 0x28b PushI
	var_90_int = var_52_float + var_89_int; // 0x28c Add
	Sleep(var_90_int, var_53_bool); // 0x28d Func
	var_91_bool = var_53_bool == 0; // 0x28f Not
	if(var_91_bool == 0) goto Label_658; // 0x290 JumpB
	goto Label_673; // 0x291 Jump
	
Label_658:
	goto Label_662; // 0x292 Jump
	
Label_659:
	var_92_int = var_48_int; // 0x293 Push
	if(var_92_int == 0) goto Label_662; // 0x294 JumpB
	goto Label_673; // 0x295 Jump
}


func_1624(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x658 PushV
	FindActor(var_18_object, var_15_string); // 0x659 Func
	var_19_bool = var_18_object == 0; // 0x65b NullEq
	if(var_19_bool == 0) goto Label_1631; // 0x65c JumpB
	var_14_bool = 0; // 0x65d MovB
	return 2; // 0x65e Return
	
Label_1631:
	Trigger(var_18_object, var_16_string); // 0x65f Func
	var_14_bool = 1; // 0x661 MovB
	return 2; // 0x662 Return
}


func_99(var_0_bool, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; // 0x63 PushV
	var_0_bool = 0; // 0x64 TMovB
	var_1_bool = 0; // 0x65 TMovB
	var_25_float = 0.5; // 0x66 PushF
	rand(var_19_float, var_25_float); // 0x67 Func
	Sleep(var_19_float); // 0x69 Func
	
Label_107:
	var_26_bool = var_0_bool == 0; // 0x6b Not
	if(var_26_bool == 0) goto Label_157; // 0x6c JumpB
	var_27_bool = var_1_bool == 0; // 0x6d Not
	if(var_27_bool == 0) goto Label_126; // 0x6e JumpB
	
Label_111:
	GetPosition(var_21_cvector); // 0x6f Func
	var_28_float = 0; // 0x71 PushV
	func_158(var_28_float); // 0x72 NEW_2
	GetRandomPFPointInCircle(var_20_cvector, var_21_cvector, var_28_float, var_22_bool); // 0x74 Func
	var_31_bool = var_22_bool; // 0x76 Push
	if(var_31_bool == 0) goto Label_121; // 0x77 JumpB
	goto Label_125; // 0x78 Jump
	
Label_125:
	goto Label_127; // 0x7d Jump
	
Label_127:
	var_32_object = Obj(); var_33_cvector = CVector(0,0,0); // 0x7f PushV
	var_33_cvector = var_20_cvector; // 0x80 Mov
	func_179(var_32_object, var_33_cvector); // 0x81 NEW_2
	var_23_object = var_32_object; // 0x82 Mov
	var_36_bool = var_23_object != 0; // 0x84 NullNeq
	if(var_36_bool == 0) goto Label_152; // 0x85 JumpB
	RotatePath(var_23_object, var_24_bool); // 0x86 Func
	var_37_bool = var_24_bool; // 0x88 Push
	if(var_37_bool == 0) goto Label_151; // 0x89 JumpB
	var_38_bool = 0; // 0x8a PushV
	func_177(var_38_bool); // 0x8b NEW_2
	FollowPath(var_23_object, var_38_bool, var_24_bool); // 0x8d Func
	var_23_object = 0; // 0x8f SetNull
	var_39_bool = var_24_bool; // 0x90 Push
	if(var_39_bool == 0) goto Label_151; // 0x91 JumpB
	TaskCall(3); // 0x93 TaskCall
	func_597(); // 0x94 NEW_2
	TaskReturn(); // 0x95 TaskReturn
	
Label_151:
	goto Label_155; // 0x97 Jump
	
Label_155:
	var_23_object = 0; // 0x9b SetNull
	goto Label_107; // 0x9c Jump
	
Label_152:
	var_93_int = 1; // 0x98 PushI
	Sleep(var_93_int); // 0x99 Func
	
Label_121:
	var_94_int = 1; // 0x79 PushI
	Sleep(var_94_int); // 0x7a Func
	goto Label_111; // 0x7c Jump
	
Label_126:
	var_1_bool = 0; // 0x7e TMovB
	
Label_157:
	return 12; // 0x9d Return
}


func_1636(var_128_object)
{
	var_129_bool = 0; var_130_bool = 0; // 0x664 PushV
	IsPlayerActor(var_128_object, var_130_bool); // 0x665 Func
	var_131_bool = var_130_bool; // 0x667 Push
	if(var_131_bool == 0) goto Label_1644; // 0x668 JumpB
	var_132_string = "attack"; // 0x669 PushS
	PlayGlobalMusic(var_132_string); // 0x66a Func
	
Label_1644:
	return 2; // 0x66c Return
}


func_1130()
{
	var_14_int = 91; // 0x46a PushI
	KillTimer(var_14_int); // 0x46b Func
	Stop(); // 0x46d Func
	func_1195(); // 0x470 NEW_2
	return 0; // 0x472 Return
}


func_1645(var_64_string, var_65_int)
{
	var_66_string = ""; var_67_string = ""; // 0x66d PushV
	var_67_string = "idle"; // 0x66e MovS
	var_68_int = var_65_int; // 0x66f Push
	if(var_68_int == 0) goto Label_1650; // 0x670 JumpB
	var_67_string = var_67_string + var_65_int; // 0x671 Add2
	
Label_1650:
	var_64_string = var_67_string; // 0x672 Mov
	return 2; // 0x673 Return
}


func_1652(var_58_int)
{
	var_59_int = 0; var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x674 PushV
	var_61_int = 0; // 0x675 MovI
	
Label_1654:
	var_63_string = "all"; // 0x676 PushS
	var_64_string = ""; var_65_int = 0; // 0x677 PushV
	var_65_int = var_61_int; // 0x678 Mov
	func_1645(var_64_string, var_65_int); // 0x679 NEW_2
	HasAnimation(var_62_bool, var_63_string, var_64_string); // 0x67b Func
	var_69_bool = var_62_bool == 0; // 0x67d Not
	if(var_69_bool == 0) goto Label_1664; // 0x67e JumpB
	goto Label_1667; // 0x67f Jump
	
Label_1667:
	var_58_int = var_61_int; // 0x683 Mov
	return 4; // 0x684 Return
	
Label_1664:
	var_70_int = 1; // 0x680 PushI
	var_61_int = var_61_int + var_70_int; // 0x681 Add2
	goto Label_1654; // 0x682 Jump
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


func_1669(var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0x685 PushV
	var_125_string = "branch"; // 0x686 PushS
	GetVariable(var_125_string, var_124_int); // 0x687 Func
	var_122_int = var_124_int; // 0x689 Mov
	return 2; // 0x68a Return
}


func_1675(var_15_object)
{
	var_16_int = 0; // 0x68c PushV
	func_1669(var_16_int); // 0x68d NEW_2
	var_20_int = 1; // 0x68f PushI
	var_21_bool = var_16_int == var_20_int; // 0x690 Eq
	if(var_21_bool == 0) goto Label_1685; // 0x691 JumpB
	WorkWithCorpse(var_15_object); // 0x692 Func
	goto Label_1687; // 0x694 Jump
	
Label_1687:
	return 0; // 0x697 Return
	
Label_1685:
	Barter(var_15_object); // 0x695 Func
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


func_1688(var_71_int, var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0; // 0x698 PushV
	var_77_bool = var_71_int > var_72_int; // 0x699 GT
	if(var_77_bool == 0) goto Label_1695; // 0x69a JumpB
	var_78_string = "GenerateMoney: iMin > iMax"; // 0x69b PushS
	Trace(var_78_string); // 0x69c Func
	return 4; // 0x69e Return
	
Label_1695:
	var_75_int = 0; // 0x69f MovI
	var_79_bool = var_71_int != var_72_int; // 0x6a0 Neq
	if(var_79_bool == 0) goto Label_1702; // 0x6a1 JumpB
	var_80_int = var_72_int - var_71_int; // 0x6a2 Sub
	irand(var_75_int, var_80_int); // 0x6a3 Func
	goto Label_1706; // 0x6a5 Jump
	
Label_1706:
	var_75_int = var_75_int + var_71_int; // 0x6aa Add2
	var_81_int = 0; // 0x6ab PushI
	var_82_bool = var_75_int == var_81_int; // 0x6ac Eq
	if(var_82_bool == 0) goto Label_1711; // 0x6ad JumpB
	return 4; // 0x6ae Return
	
Label_1711:
	var_83_int = 0; var_84_string = ""; // 0x6af PushV
	var_84_string = "Money"; // 0x6b0 MovS
	func_1797(var_83_int, var_84_string); // 0x6b1 NEW_2
	var_87_int = 0; // 0x6b3 PushI
	AddItem(var_76_bool, var_83_int, var_87_int, var_75_int); // 0x6b4 Func
	return 4; // 0x6b6 Return
	
Label_1702:
	var_88_int = 0; // 0x6a6 PushI
	var_89_bool = var_71_int == var_88_int; // 0x6a7 Eq
	if(var_89_bool == 0) goto Label_1706; // 0x6a8 JumpB
	return 4; // 0x6a9 Return
}


func_158(var_28_float)
{
	var_29_float = 0; var_30_float = 0; // 0x9e PushV
	GetCameraFarDistance(var_30_float); // 0x9f Func
	var_28_float = var_30_float; // 0xa1 Mov
	return 2; // 0xa2 Return
}


func_676(var_83_bool)
{
	var_83_bool = 1; // 0x2a4 MovB
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


func_683(var_0_bool, var_1_bool, var_53_object, var_125_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_int = 0; var_60_object = Obj(); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; var_65_float = 0; var_66_int = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_int = 0; var_71_object = Obj(); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_object = Obj(); var_75_float = 0; var_76_float = 0; var_77_int = 0; // 0x2ab PushV
	var_0_bool = var_53_object; // 0x2ac TMov
	CanSee(var_77_int, var_53_object); // 0x2ad Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2af PushV
	var_79_object = var_53_object; // 0x2b0 Mov
	func_1329(var_79_object); // 0x2b1 NEW_2
	var_92_bool = 0; var_93_object = Obj(); // 0x2b3 PushV
	var_93_object = var_53_object; // 0x2b4 Mov
	func_1295(var_92_bool, var_93_object); // 0x2b5 NEW_2
	var_120_bool = var_92_bool == 0; // 0x2b7 Not
	if(var_120_bool == 0) goto Label_698; // 0x2b8 JumpB
	return 22; // 0x2b9 Return
	
Label_698:
	Face(var_53_object); // 0x2ba Func
	
Label_700:
	var_121_bool = 0; var_122_object = Obj(); // 0x2bc PushV
	var_122_object = var_0_bool; // 0x2bd MovT
	func_1295(var_121_bool, var_122_object); // 0x2be NEW_2
	if(var_121_bool == 0) goto Label_873; // 0x2c0 JumpB
	var_123_bool = var_1_bool == 0; // 0x2c1 Not
	if(var_123_bool == 0) goto Label_722; // 0x2c2 JumpB
	StopAsync(); // 0x2c3 Func
	var_124_object = Obj(); // 0x2c5 PushV
	TaskCall(5); // 0x2c6 TaskCall
	func_893(var_125_object, var_124_object); // 0x2c7 NEW_2
	TaskReturn(); // 0x2c8 TaskReturn
	var_0_bool = var_125_object; // 0x2c9 TMov
	var_127_bool = var_0_bool == 0; // 0x2cb NullEq
	if(var_127_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_873; // 0x2cd Jump
	
Label_873:
	StopAsync(); // 0x369 Func
	return 22; // 0x36b Return
	
Label_718:
	CanSee(var_77_int, var_0_bool); // 0x2ce Func
	Face(var_0_bool); // 0x2d0 Func
	
Label_722:
	var_128_object = Obj(); // 0x2d2 PushV
	var_128_object = var_0_bool; // 0x2d3 MovT
	func_1636(var_128_object); // 0x2d4 NEW_2
	ReportAttack(var_0_bool); // 0x2d6 Func
	GetPosition(var_67_cvector); // 0x2d8 Func
	GetPosition(var_68_cvector); // 0x2da TObjFunc
	var_69_cvector = var_68_cvector - var_67_cvector; // 0x2dc Sub2
	var_133_int = 0; var_134_float = 0; // 0x2dd PushV
	var_135_int = var_69_cvector | var_69_cvector; // 0x2de Or
	var_134_float = sqrt(var_135_int); // 0x2df Sqrt2
	func_1864(var_133_int, var_134_float); // 0x2e0 NEW_2
	var_70_int = var_133_int; // 0x2e1 Mov
	var_140_string = "all"; // 0x2e3 PushS
	var_141_string = "attack_begin"; // 0x2e4 PushS
	var_142_int = var_141_string + var_70_int; // 0x2e5 Add
	PlayAnimation(var_140_string, var_142_int); // 0x2e6 Func
	WaitForAnimEnd(); // 0x2e8 Func
	var_143_bool = var_0_bool == 0; // 0x2ea NullEq
	if(var_143_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_873; // 0x2ec Jump
	
Label_749:
	var_144_string = "all"; // 0x2ed PushS
	var_145_string = "attack_end"; // 0x2ee PushS
	var_146_int = var_145_string + var_70_int; // 0x2ef Add
	PlayAnimation(var_144_string, var_146_int); // 0x2f0 Func
	GetScene(var_71_object); // 0x2f2 Func
	var_147_string = "attack"; // 0x2f4 PushS
	var_148_int = var_147_string + var_70_int; // 0x2f5 Add
	GetGeometryLocator(var_148_int, var_73_bool, var_67_cvector, var_72_cvector); // 0x2f6 Func
	var_149_string = "scripted"; // 0x2f8 PushS
	var_150_cvector = CVector(0.0, 0.0, 1.0); // 0x2f9 PushVec
	var_151_string = "grenade.xml"; // 0x2fa PushS
	AddActorByType(var_74_object, var_149_string, var_71_object, var_67_cvector, var_150_cvector, var_151_string); // 0x2fb Func
	var_152_string = "Owner"; // 0x2fd PushS
	var_153_object = Obj(); // 0x2fe PushV
	func_1547(var_153_object); // 0x2ff NEW_2
	SetScriptProperty(var_152_string, var_153_object); // 0x301 ObjFunc
	var_156_int = 1; // 0x303 PushI
	var_157_bool = var_70_int == var_156_int; // 0x304 Eq
	if(var_157_bool == 0) goto Label_779; // 0x305 JumpB
	var_158_string = "StartVelocity"; // 0x306 PushS
	var_159_cvector = CVector(0.0, -500.0, 0.0); // 0x307 PushVec
	SetScriptProperty(var_158_string, var_159_cvector); // 0x308 ObjFunc
	goto Label_829; // 0x30a Jump
	
Label_829:
	var_160_string = "DamageAmount"; // 0x33d PushS
	var_161_float = 0.8; // 0x33e PushF
	SetScriptProperty(var_160_string, var_161_float); // 0x33f ObjFunc
	var_162_string = "DamageType"; // 0x341 PushS
	var_163_int = 2; // 0x342 PushI
	SetScriptProperty(var_162_string, var_163_int); // 0x343 ObjFunc
	WaitForAnimEnd(); // 0x345 Func
	var_164_int = 1; // 0x347 PushI
	var_165_bool = var_70_int == var_164_int; // 0x348 Eq
	if(var_165_bool == 0) goto Label_870; // 0x349 JumpB
	var_166_int = 2; // 0x34a PushI
	irand(var_77_int, var_166_int); // 0x34b Func
	var_167_string = "scream"; // 0x34d PushS
	var_168_int = 1; // 0x34e PushI
	var_169_int = var_77_int + var_168_int; // 0x34f Add
	var_170_int = var_167_string + var_169_int; // 0x350 Add
	var_171_cvector = CVector(0.0, 150.0, 0.0); // 0x351 PushVec
	var_172_int = 1; // 0x352 PushI
	var_173_int = 500; // 0x353 PushI
	PlayGlobalSound(var_170_int, var_171_cvector, var_172_int, var_173_int); // 0x354 Func
	var_174_object = Obj(); // 0x356 PushV
	var_174_object = var_0_bool; // 0x357 MovT
	func_1469(var_174_object); // 0x358 NEW_2
	var_181_string = "all"; // 0x35a PushS
	var_182_string = "scream"; // 0x35b PushS
	var_183_int = 1; // 0x35c PushI
	var_184_int = var_77_int + var_183_int; // 0x35d Add
	var_185_int = var_182_string + var_184_int; // 0x35e Add
	PlayAnimation(var_181_string, var_185_int); // 0x35f Func
	WaitForAnimEnd(); // 0x361 Func
	var_186_string = "head"; // 0x363 PushS
	UnlookAsync(var_186_string); // 0x364 Func
	
Label_870:
	var_74_object = 0; // 0x366 SetNull
	var_71_object = 0; // 0x367 SetNull
	goto Label_700; // 0x368 Jump
	
Label_779:
	var_187_int = 1; // 0x30b PushI
	var_188_float = GetByIndex(var_72_cvector, 1); // 0x30c PushE
	var_189_float = GetByIndex(var_72_cvector, 1); // 0x30d PushE
	var_190_float = var_188_float * var_189_float; // 0x30e Mult
	var_191_int = var_187_int - var_190_float; // 0x30f Sub
	var_192_float = GetByIndex(var_69_cvector, 0); // 0x310 PushE
	var_193_float = GetByIndex(var_69_cvector, 0); // 0x311 PushE
	var_194_float = var_192_float * var_193_float; // 0x312 Mult
	var_195_float = GetByIndex(var_69_cvector, 2); // 0x313 PushE
	var_196_float = GetByIndex(var_69_cvector, 2); // 0x314 PushE
	var_197_float = var_195_float * var_196_float; // 0x315 Mult
	var_198_int = var_194_float + var_197_float; // 0x316 Add
	var_199_float = var_191_int / var_198_int; // 0x317 Div
	var_75_float = sqrt(var_199_float); // 0x318 Sqrt2
	var_200_float = GetByIndex(var_72_cvector, 0); // 0x319 PushE
	var_201_float = GetByIndex(var_69_cvector, 0); // 0x31a PushE
	var_200_float = var_201_float * var_75_float; // 0x31b Mult2
	SetByIndex(var_72_cvector, 0) = var_200_float; // 0x31c PopE
	var_202_float = GetByIndex(var_72_cvector, 2); // 0x31d PushE
	var_203_float = GetByIndex(var_69_cvector, 2); // 0x31e PushE
	var_202_float = var_203_float * var_75_float; // 0x31f Mult2
	SetByIndex(var_72_cvector, 2) = var_202_float; // 0x320 PopE
	GetPosition(var_68_cvector); // 0x321 TObjFunc
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); // 0x323 PushV
	var_205_cvector = var_67_cvector; // 0x324 Mov
	var_206_cvector = var_68_cvector; // 0x325 Mov
	var_207_cvector = var_72_cvector; // 0x326 Mov
	func_1820(var_204_float, var_205_cvector, var_206_cvector, var_207_cvector); // 0x327 NEW_2
	var_76_float = var_204_float; // 0x328 Mov
	var_251_int = 0; // 0x32a PushI
	var_252_bool = var_76_float < var_251_int; // 0x32b LT
	if(var_252_bool == 0) goto Label_819; // 0x32c JumpB
	var_253_float = 0; var_254_int = 0; // 0x32d PushV
	var_254_int = var_70_int; // 0x32e Mov
	func_1878(var_253_float, var_254_int); // 0x32f NEW_2
	var_76_float = var_253_float; // 0x330 Mov
	goto Label_825; // 0x332 Jump
	
Label_825:
	var_257_string = "StartVelocity"; // 0x339 PushS
	var_258_float = var_72_cvector * var_76_float; // 0x33a Mult
	SetScriptProperty(var_257_string, var_258_float); // 0x33b ObjFunc
	
Label_819:
	var_259_float = 0; var_260_int = 0; var_261_float = 0; // 0x333 PushV
	var_260_int = var_70_int; // 0x334 Mov
	var_261_float = var_76_float; // 0x335 Mov
	func_1886(var_260_int, var_261_float); // 0x336 NEW_2
	var_76_float = var_259_float; // 0x337 Mov
}


func_1200(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4b0 PushV
	GetPosition(var_49_cvector); // 0x4b1 Func
	GetPosition(var_50_cvector); // 0x4b3 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4b5 Sub2
	return 4; // 0x4b6 Return
}


func_177(var_38_bool)
{
	var_38_bool = 0; // 0xb1 MovB
	return 0; // 0xb2 Return
}


func_179(var_32_object, var_33_cvector)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xb3 PushV
	FindShiftedPathTo(var_35_object, var_33_cvector); // 0xb4 Func
	var_32_object = var_35_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_1719(var_128_string)
{
	var_129_object = Obj(); var_130_int = 0; var_131_bool = 0; var_132_object = Obj(); var_133_int = 0; var_134_bool = 0; // 0x6b7 PushV
	CreateInvItem(var_132_object); // 0x6b8 Func
	SetItemName(var_128_string); // 0x6ba ObjFunc
	var_135_string = "Organ"; // 0x6bc PushS
	var_136_int = 1; // 0x6bd PushI
	SetProperty(var_135_string, var_136_int); // 0x6be ObjFunc
	GetItemID(var_133_int); // 0x6c0 ObjFunc
	var_137_int = 0; // 0x6c2 PushI
	var_138_int = 1; // 0x6c3 PushI
	AddItem(var_134_bool, var_132_object, var_137_int, var_138_int); // 0x6c4 Func
	return 6; // 0x6c6 Return
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


func_185(var_62_object)
{
	var_63_bool = 0; var_64_bool = 0; // 0xb9 PushV
	IsPlayerActor(var_62_object, var_64_bool); // 0xba Func
	var_65_bool = var_64_bool; // 0xbc Push
	if(var_65_bool == 0) goto Label_193; // 0xbd JumpB
	func_1760(); // 0xbf NEW_2
	
Label_193:
	func_1736(); // 0xc2 NEW_2
	var_142_object = Obj(); // 0xc4 PushV
	var_142_object = var_62_object; // 0xc5 Mov
	func_201(var_142_object); // 0xc6 NEW_2
	return 2; // 0xc8 Return
}


func_1215(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x4bf PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0x4c0 Func
	var_20_bool = var_23_bool; // 0x4c2 Mov
	return 2; // 0x4c3 Return
}


func_1220(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0; // 0x4c4 PushV
	var_48_string = "HasProperty"; // 0x4c5 PushS
	var_49_int = 2; // 0x4c6 PushI
	var_50_bool = IsFuncExist(var_44_object, var_48_string, var_49_int); // 0x4c7 FuncExist
	var_51_bool = var_50_bool == 0; // 0x4c8 Not
	if(var_51_bool == 0) goto Label_1228; // 0x4c9 JumpB
	var_43_bool = 0; // 0x4ca MovB
	return 2; // 0x4cb Return
	
Label_1228:
	HasProperty(var_45_string, var_47_bool); // 0x4cc ObjFunc
	var_43_bool = var_47_bool; // 0x4ce Mov
	return 2; // 0x4cf Return
}


func_1736()
{
	var_122_int = 0; // 0x6c8 PushV
	func_1669(var_122_int); // 0x6c9 NEW_2
	var_126_int = 1; // 0x6cb PushI
	var_127_bool = var_122_int != var_126_int; // 0x6cc Neq
	if(var_127_bool == 0) goto Label_1743; // 0x6cd JumpB
	return 0; // 0x6ce Return
	
Label_1743:
	var_128_string = ""; // 0x6cf PushV
	var_128_string = "liver"; // 0x6d0 MovS
	func_1719(var_128_string); // 0x6d1 NEW_2
	var_139_string = ""; // 0x6d3 PushV
	var_139_string = "kidney"; // 0x6d4 MovS
	func_1719(var_139_string); // 0x6d5 NEW_2
	var_140_string = ""; // 0x6d7 PushV
	var_140_string = "heart"; // 0x6d8 MovS
	func_1719(var_140_string); // 0x6d9 NEW_2
	var_141_string = ""; // 0x6db PushV
	var_141_string = "blood"; // 0x6dc MovS
	func_1719(var_141_string); // 0x6dd NEW_2
	return 0; // 0x6df Return
}


func_201(var_142_object)
{
	EventDisable(0); // 0xca EventDisable
	var_143_object = Obj(); // 0xcb PushV
	var_143_object = var_142_object; // 0xcc Mov
	func_226(var_143_object); // 0xcd NEW_2
	var_223_int = 50; // 0xcf PushI
	var_224_int = 40; // 0xd0 PushI
	SetRTEnvelope(var_223_int, var_224_int); // 0xd1 Func
	EventEnable(0); // 0xd3 EventEnable
	
Label_212:
	Hold(); // 0xd4 Func
	goto Label_212; // 0xd6 Jump
}


func_1232(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x4d0 PushV
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x4d1 PushV
	var_44_object = var_36_object; // 0x4d2 Mov
	var_45_string = var_37_string; // 0x4d3 Mov
	func_1220(var_43_bool, var_44_object, var_45_string); // 0x4d4 NEW_2
	var_52_bool = var_43_bool == 0; // 0x4d6 Not
	if(var_52_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_35_bool = 0; // 0x4d8 MovB
	return 2; // 0x4d9 Return
	
Label_1242:
	GetProperty(var_37_string, var_42_float); // 0x4da ObjFunc
	var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0; // 0x4dc PushV
	var_54_float = var_42_float + var_38_float; // 0x4dd Add2
	var_55_float = var_39_float; // 0x4de Mov
	var_56_float = var_40_float; // 0x4df Mov
	func_1563(var_53_float, var_54_float, var_55_float, var_56_float); // 0x4e0 NEW_2
	SetProperty(var_37_string, var_53_float); // 0x4e2 ObjFunc
	var_35_bool = 1; // 0x4e4 MovB
	return 2; // 0x4e5 Return
}


func_1760()
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x6e0 PushV
	var_70_int = 0; // 0x6e1 PushI
	ClearSubContainer(var_70_int); // 0x6e2 Func
	var_71_int = 0; var_72_int = 0; // 0x6e4 PushV
	var_71_int = 600; // 0x6e5 MovI
	var_72_int = 1500; // 0x6e6 MovI
	func_1688(var_71_int, var_72_int); // 0x6e7 NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; // 0x6e9 PushV
	var_90_string = "fresh_meat"; // 0x6ea MovS
	var_91_int = 1; // 0x6eb MovI
	var_92_int = 6; // 0x6ec MovI
	func_1480(var_90_string, var_91_int, var_92_int); // 0x6ed NEW_2
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x6ef PushV
	var_101_string = "rusk"; // 0x6f0 MovS
	var_102_int = 1; // 0x6f1 MovI
	var_103_int = 6; // 0x6f2 MovI
	var_104_int = 2; // 0x6f3 MovI
	func_1491(var_101_string, var_102_int, var_103_int, var_104_int); // 0x6f4 NEW_2
	var_115_string = ""; var_116_int = 0; var_117_int = 0; // 0x6f6 PushV
	var_115_string = "gamma_pills"; // 0x6f7 MovS
	var_116_int = 1; // 0x6f8 MovI
	var_117_int = 3; // 0x6f9 MovI
	func_1480(var_115_string, var_116_int, var_117_int); // 0x6fa NEW_2
	var_118_int = 0; var_119_string = ""; // 0x6fc PushV
	var_119_string = "bomber_mark"; // 0x6fd MovS
	func_1797(var_118_int, var_119_string); // 0x6fe NEW_2
	var_120_int = 0; // 0x700 PushI
	var_121_int = 1; // 0x701 PushI
	AddItem(var_69_bool, var_118_int, var_120_int, var_121_int); // 0x702 Func
	return 4; // 0x704 Return
}


func_226(var_143_object)
{
	var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_string = ""; var_149_object = Obj(); var_150_bool = 0; var_151_bool = 0; var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_string = ""; var_159_object = Obj(); var_160_bool = 0; var_161_bool = 0; var_162_float = 0; var_163_cvector = CVector(0,0,0); // 0xe2 PushV
	var_164_bool = var_143_object == 0; // 0xe3 NullEq
	if(var_164_bool == 0) goto Label_234; // 0xe4 JumpB
	var_165_string = ""; // 0xe5 PushV
	var_165_string = "fdie"; // 0xe6 MovS
	func_317(var_165_string); // 0xe7 NEW_2
	goto Label_316; // 0xe9 Jump
	
Label_316:
	return 20; // 0x13c Return
	
Label_234:
	GetPosition(var_154_cvector); // 0xea ObjFunc
	GetPosition(var_155_cvector); // 0xec Func
	GetDirection(var_156_cvector); // 0xee Func
	var_157_cvector = var_155_cvector - var_154_cvector; // 0xf0 Sub2
	var_197_float = GetByIndex(var_157_cvector, 0); // 0xf1 PushE
	var_198_float = GetByIndex(var_156_cvector, 0); // 0xf2 PushE
	var_199_float = var_197_float * var_198_float; // 0xf3 Mult
	var_200_float = GetByIndex(var_157_cvector, 2); // 0xf4 PushE
	var_201_float = GetByIndex(var_156_cvector, 2); // 0xf5 PushE
	var_202_float = var_200_float * var_201_float; // 0xf6 Mult
	var_203_int = var_199_float + var_202_float; // 0xf7 Add
	var_204_int = 0; // 0xf8 PushI
	var_205_bool = var_203_int >= var_204_int; // 0xf9 GE
	if(var_205_bool == 0) goto Label_253; // 0xfa JumpB
	var_158_string = "fdie"; // 0xfb MovS
	goto Label_254; // 0xfc Jump
	
Label_254:
	RemoveRTEnvelope(); // 0xfe Func
	SetDeathState(); // 0x100 Func
	Stop(); // 0x102 Func
	StopAsync(); // 0x104 Func
	var_159_object = var_143_object; // 0x106 Mov
	var_206_string = "GetScriptProperty"; // 0x107 PushS
	var_207_int = 2; // 0x108 PushI
	var_208_bool = IsFuncExist(var_143_object, var_206_string, var_207_int); // 0x109 FuncExist
	if(var_208_bool == 0) goto Label_278; // 0x10a JumpB
	var_209_string = "Owner"; // 0x10b PushS
	HasScriptProperty(var_160_bool, var_209_string); // 0x10c ObjFunc
	var_210_bool = var_160_bool; // 0x10e Push
	if(var_210_bool == 0) goto Label_278; // 0x10f JumpB
	var_211_string = "Owner"; // 0x110 PushS
	GetScriptProperty(var_159_object, var_211_string); // 0x111 ObjFunc
	var_212_bool = var_159_object == 0; // 0x113 NullEq
	if(var_212_bool == 0) goto Label_278; // 0x114 JumpB
	var_159_object = var_143_object; // 0x115 Mov
	
Label_278:
	var_213_string = "@GetEyesHeight"; // 0x116 PushS
	var_214_int = 1; // 0x117 PushI
	var_215_bool = IsFuncExist(var_159_object, var_213_string, var_214_int); // 0x118 FuncExist
	if(var_215_bool == 0) goto Label_293; // 0x119 JumpB
	GetEyesHeight(var_162_float); // 0x11a ObjFunc
	var_163_cvector = CVector(0.0, 0.0, 0.0); // 0x11c MovV
	var_216_float = GetByIndex(var_163_cvector, 1); // 0x11d PushE
	var_216_float = var_162_float; // 0x11e Mov
	SetByIndex(var_163_cvector, 1) = var_216_float; // 0x11f PopE
	var_217_string = "head"; // 0x120 PushS
	LookAsync(var_143_object, var_217_string, var_163_cvector); // 0x121 Func
	var_161_bool = 1; // 0x123 MovB
	goto Label_294; // 0x124 Jump
	
Label_294:
	var_218_string = ""; // 0x126 PushV
	var_218_string = var_158_string; // 0x127 Mov
	func_1506(var_218_string); // 0x128 NEW_2
	var_219_string = "all"; // 0x12a PushS
	PlayAnimation(var_219_string, var_158_string); // 0x12b Func
	WaitForAnimEnd(); // 0x12d Func
	var_220_bool = var_161_bool; // 0x12f Push
	if(var_220_bool == 0) goto Label_310; // 0x130 JumpB
	StopAsync(); // 0x131 Func
	var_221_string = "head"; // 0x133 PushS
	UnlookAsync(var_221_string); // 0x134 Func
	
Label_310:
	var_222_string = "all"; // 0x136 PushS
	LockAnimationEnd(var_222_string, var_158_string); // 0x137 Func
	RemoveEnvelope(); // 0x139 Func
	var_159_object = 0; // 0x13b SetNull
	
Label_293:
	var_161_bool = 0; // 0x125 MovB
	
Label_253:
	var_158_string = "bdie"; // 0xfd MovS
}


func_1254(var_107_bool)
{
	var_109_bool = 0; var_110_bool = 0; // 0x4e6 PushV
	IsDead(var_110_bool); // 0x4e7 ObjFunc
	var_107_bool = var_110_bool; // 0x4e9 Mov
	return 2; // 0x4ea Return
}


func_1259(var_96_bool, var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj(); // 0x4eb PushV
	var_102_bool = var_97_object == 0; // 0x4ec NullEq
	if(var_102_bool == 0) goto Label_1264; // 0x4ed JumpB
	var_96_bool = 0; // 0x4ee MovB
	return 4; // 0x4ef Return
	
Label_1264:
	var_103_bool = 0; // 0x4f0 PushV
	var_103_bool = 0; // 0x4f1 MovB
	var_104_string = "IsDead"; // 0x4f2 PushS
	var_105_int = 1; // 0x4f3 PushI
	var_106_bool = IsFuncExist(var_97_object, var_104_string, var_105_int); // 0x4f4 FuncExist
	if(var_106_bool == 0) goto Label_1276; // 0x4f5 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x4f6 PushV
	var_108_object = var_97_object; // 0x4f7 Mov
	func_1254(var_108_object); // 0x4f8 NEW_2
	if(var_107_bool == 0) goto Label_1276; // 0x4fa JumpB
	var_103_bool = 1; // 0x4fb MovB
	
Label_1276:
	if(var_103_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_96_bool = 0; // 0x4fd MovB
	return 4; // 0x4fe Return
	
Label_1279:
	GetScene(var_100_object); // 0x4ff Func
	var_111_bool = var_100_object == 0; // 0x501 NullEq
	if(var_111_bool == 0) goto Label_1285; // 0x502 JumpB
	var_96_bool = 0; // 0x503 MovB
	return 4; // 0x504 Return
	
Label_1285:
	GetScene(var_101_object); // 0x505 ObjFunc
	var_112_bool = var_100_object != var_101_object; // 0x507 Neq
	if(var_112_bool == 0) goto Label_1291; // 0x508 JumpB
	var_96_bool = 0; // 0x509 MovB
	return 4; // 0x50a Return
	
Label_1291:
	var_96_bool = 1; // 0x50b MovB
	return 4; // 0x50c Return
}


func_1797(var_83_int, var_84_string)
{
	var_85_int = 0; var_86_int = 0; // 0x705 PushV
	GetInvItemByName(var_86_int, var_84_string); // 0x706 Func
	var_83_int = var_86_int; // 0x708 Mov
	return 2; // 0x709 Return
}


func_1802(var_19_bool, var_20_object)
{
	var_21_string = ""; var_22_string = ""; var_23_string = ""; var_24_string = ""; // 0x70a PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x70b PushV
	var_26_object = var_20_object; // 0x70c Mov
	var_27_string = "class"; // 0x70d MovS
	func_1220(var_25_bool, var_26_object, var_27_string); // 0x70e NEW_2
	var_34_bool = var_25_bool == 0; // 0x710 Not
	if(var_34_bool == 0) goto Label_1812; // 0x711 JumpB
	var_19_bool = 0; // 0x712 MovB
	return 4; // 0x713 Return
	
Label_1812:
	var_35_string = "class"; // 0x714 PushS
	GetProperty(var_35_string, var_23_string); // 0x715 Func
	var_36_string = "class"; // 0x717 PushS
	GetProperty(var_36_string, var_24_string); // 0x718 ObjFunc
	var_19_bool = var_24_string == var_23_string; // 0x71a Eq2
	return 4; // 0x71b Return
}


func_1295(var_92_bool, var_93_object)
{
	var_94_int = 0; var_95_int = 0; // 0x50f PushV
	var_96_bool = 0; var_97_object = Obj(); // 0x510 PushV
	var_97_object = var_93_object; // 0x511 Mov
	func_1259(var_96_bool, var_97_object); // 0x512 NEW_2
	var_113_bool = var_96_bool == 0; // 0x514 Not
	if(var_113_bool == 0) goto Label_1304; // 0x515 JumpB
	var_92_bool = 0; // 0x516 MovB
	return 2; // 0x517 Return
	
Label_1304:
	var_114_bool = 0; var_115_object = Obj(); var_116_string = ""; // 0x518 PushV
	var_115_object = var_93_object; // 0x519 Mov
	var_116_string = "noaccess"; // 0x51a MovS
	func_1220(var_114_bool, var_115_object, var_116_string); // 0x51b NEW_2
	var_117_bool = var_114_bool == 0; // 0x51d Not
	if(var_117_bool == 0) goto Label_1313; // 0x51e JumpB
	var_92_bool = 1; // 0x51f MovB
	return 2; // 0x520 Return
	
Label_1313:
	var_118_string = "noaccess"; // 0x521 PushS
	GetProperty(var_118_string, var_95_int); // 0x522 ObjFunc
	var_119_int = 0; // 0x524 PushI
	var_92_bool = var_95_int == var_119_int; // 0x525 Eq2
	return 2; // 0x526 Return
}


func_1820(var_204_float, var_205_cvector, var_206_cvector, var_207_cvector)
{
	var_208_float = 0; var_209_float = 0; var_210_float = 0; var_211_float = 0; var_212_float = 0; var_213_float = 0; var_214_float = 0; var_215_float = 0; var_216_float = 0; var_217_float = 0; // 0x71c PushV
	var_218_float = GetByIndex(var_207_cvector, 0); // 0x71d PushE
	var_219_float = GetByIndex(var_207_cvector, 0); // 0x71e PushE
	var_220_float = var_218_float * var_219_float; // 0x71f Mult
	var_221_float = GetByIndex(var_207_cvector, 2); // 0x720 PushE
	var_222_float = GetByIndex(var_207_cvector, 2); // 0x721 PushE
	var_223_float = var_221_float * var_222_float; // 0x722 Mult
	var_224_int = var_220_float + var_223_float; // 0x723 Add
	var_213_float = sqrt(var_224_int); // 0x724 Sqrt2
	var_225_float = GetByIndex(var_207_cvector, 1); // 0x725 PushE
	var_214_float = var_225_float / var_225_float; // 0x726 Div2
	var_226_float = GetByIndex(var_205_cvector, 0); // 0x727 PushE
	var_227_float = GetByIndex(var_206_cvector, 0); // 0x728 PushE
	var_228_int = var_226_float - var_227_float; // 0x729 Sub
	var_229_float = GetByIndex(var_205_cvector, 0); // 0x72a PushE
	var_230_float = GetByIndex(var_206_cvector, 0); // 0x72b PushE
	var_231_int = var_229_float - var_230_float; // 0x72c Sub
	var_232_float = var_228_int * var_231_int; // 0x72d Mult
	var_233_float = GetByIndex(var_205_cvector, 2); // 0x72e PushE
	var_234_float = GetByIndex(var_206_cvector, 2); // 0x72f PushE
	var_235_int = var_233_float - var_234_float; // 0x730 Sub
	var_236_float = GetByIndex(var_205_cvector, 2); // 0x731 PushE
	var_237_float = GetByIndex(var_206_cvector, 2); // 0x732 PushE
	var_238_int = var_236_float - var_237_float; // 0x733 Sub
	var_239_float = var_235_int * var_238_int; // 0x734 Mult
	var_240_int = var_232_float + var_239_float; // 0x735 Add
	var_215_float = sqrt(var_240_int); // 0x736 Sqrt2
	var_241_float = 500.0; // 0x737 PushF
	var_242_float = var_215_float * var_214_float; // 0x738 Mult
	var_243_float = GetByIndex(var_206_cvector, 1); // 0x739 PushE
	var_244_float = GetByIndex(var_205_cvector, 1); // 0x73a PushE
	var_245_int = var_243_float - var_244_float; // 0x73b Sub
	var_246_int = var_242_float - var_245_int; // 0x73c Sub
	var_216_float = var_241_float / var_241_float; // 0x73d Div2
	var_247_int = 0; // 0x73e PushI
	var_248_bool = var_216_float < var_247_int; // 0x73f LT
	if(var_248_bool == 0) goto Label_1859; // 0x740 JumpB
	var_204_float = -1; // 0x741 MovI
	return 10; // 0x742 Return
	
Label_1859:
	var_249_float = var_215_float / var_213_float; // 0x743 Div
	var_250_float = sqrt(var_216_float); // 0x744 Sqrt
	var_217_float = var_249_float * var_250_float; // 0x745 Mult2
	var_204_float = var_217_float; // 0x746 Mov
	return 10; // 0x747 Return
}


func_1319(var_82_bool, var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; // 0x527 PushV
	GetPosition(var_87_cvector); // 0x528 Func
	var_88_cvector = var_83_cvector - var_87_cvector; // 0x52a Sub2
	var_90_float = GetByIndex(var_88_cvector, 0); // 0x52b PushE
	var_91_float = GetByIndex(var_88_cvector, 2); // 0x52c PushE
	Rotate(var_90_float, var_91_float, var_89_bool); // 0x52d Func
	var_82_bool = var_89_bool; // 0x52f Mov
	return 6; // 0x530 Return
}


func_1329(var_78_bool)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x531 PushV
	GetPosition(var_81_cvector); // 0x532 ObjFunc
	var_82_bool = 0; var_83_cvector = CVector(0,0,0); // 0x534 PushV
	var_83_cvector = var_81_cvector; // 0x535 Mov
	func_1319(var_82_bool, var_83_cvector); // 0x536 NEW_2
	var_78_bool = var_82_bool; // 0x537 Mov
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


func_317(var_165_string)
{
	RemoveRTEnvelope(); // 0x13e Func
	SetDeathState(); // 0x140 Func
	Stop(); // 0x142 Func
	StopAsync(); // 0x144 Func
	StopSecondaryAnimation(); // 0x146 Func
	var_166_string = ""; // 0x148 PushV
	var_166_string = var_165_string; // 0x149 Mov
	func_1506(var_166_string); // 0x14a NEW_2
	var_195_string = "all"; // 0x14c PushS
	PlayAnimation(var_195_string, var_165_string); // 0x14d Func
	WaitForAnimEnd(); // 0x14f Func
	var_196_string = "all"; // 0x151 PushS
	LockAnimationEnd(var_196_string, var_165_string); // 0x152 Func
	RemoveEnvelope(); // 0x154 Func
	return 0; // 0x156 Return
}


func_1864(var_133_int, var_134_float)
{
	var_136_int = 200; // 0x749 PushI
	var_137_bool = var_134_float < var_136_int; // 0x74a LT
	if(var_137_bool == 0) goto Label_1871; // 0x74b JumpB
	var_133_int = 1; // 0x74c MovI
	return 0; // 0x74d Return
	
Label_1871:
	var_138_int = 1000; // 0x74f PushI
	var_139_bool = var_134_float < var_138_int; // 0x750 LT
	if(var_139_bool == 0) goto Label_1876; // 0x751 JumpB
	var_133_int = 2; // 0x752 MovI
	return 0; // 0x753 Return
	
Label_1876:
	var_133_int = 3; // 0x754 MovI
	return 0; // 0x755 Return
}


func_1878(var_253_float, var_254_int)
{
	var_255_int = 1; // 0x757 PushI
	var_256_bool = var_254_int == var_255_int; // 0x758 Eq
	if(var_256_bool == 0) goto Label_1884; // 0x759 JumpB
	var_253_float = 30; // 0x75a MovI
	return 0; // 0x75b Return
	
Label_1884:
	var_253_float = 700; // 0x75c MovI
	return 0; // 0x75d Return
}


func_349(var_71_object)
{
	var_75_object = Obj(); var_76_bool = 0; // 0x15e PushV
	var_75_object = var_71_object; // 0x15f Mov
	var_76_bool = 0; // 0x160 MovB
	func_417(var_72_cvector, var_73_object, var_74_object, var_71_object, var_75_object, var_76_bool); // 0x161 NEW_2
	return 0; // 0x163 Return
}


func_1886(var_259_float, var_261_float)
{
	var_262_int = 10; // 0x75f PushI
	var_263_bool = var_261_float < var_262_int; // 0x760 LT
	if(var_263_bool == 0) goto Label_1893; // 0x761 JumpB
	var_259_float = 10; // 0x762 MovI
	return 0; // 0x763 Return
	
Label_1893:
	var_264_int = 1500; // 0x765 PushI
	var_265_bool = var_261_float > var_264_int; // 0x766 GT
	if(var_265_bool == 0) goto Label_1898; // 0x767 JumpB
	var_259_float = 1500; // 0x768 MovI
	return 0; // 0x769 Return
	
Label_1898:
	var_259_float = var_261_float; // 0x76a Mov
	return 0; // 0x76b Return
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
	func_1553(var_43_cvector, var_44_cvector); // 0x57d NEW_2
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


func_1900(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x76d PushV
	var_15_object = var_13_object; // 0x76e Mov
	func_2031(var_14_bool, var_15_object); // 0x76f NEW_2
	var_12_bool = var_14_bool; // 0x770 Mov
	return 0; // 0x772 Return
}


func_1907(var_70_object)
{
	var_71_object = Obj(); // 0x774 PushV
	var_71_object = var_70_object; // 0x775 Mov
	TaskCall(2); // 0x776 TaskCall
	func_349(var_71_object); // 0x777 NEW_2
	TaskReturn(); // 0x778 TaskReturn
	return 0; // 0x77a Return
}


func_1915(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x77c PushV
	var_15_object = var_13_object; // 0x77d Mov
	func_2031(var_14_bool, var_15_object); // 0x77e NEW_2
	var_12_bool = var_14_bool; // 0x77f Mov
	return 0; // 0x781 Return
}


func_893(var_0_bool, var_124_object)
{
	var_126_int = 5; // 0x37d PushI
	Sleep(var_126_int); // 0x37e Func
	var_124_object = var_0_bool; // 0x380 MovT
	return 0; // 0x381 Return
}


func_1922(var_70_object)
{
	var_71_object = Obj(); // 0x783 PushV
	var_71_object = var_70_object; // 0x784 Mov
	TaskCall(4); // 0x785 TaskCall
	func_683(var_70_object, var_72_object, var_73_bool, var_71_object); // 0x786 NEW_2
	TaskReturn(); // 0x787 TaskReturn
	ResetAAS(); // 0x789 Func
	return 0; // 0x78b Return
}


func_391(var_74_bool, var_75_object, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0; // 0x187 PushV
	IsPlayerActor(var_75_object, var_78_bool); // 0x188 Func
	var_79_bool = var_78_bool; // 0x18a Push
	if(var_79_bool == 0) goto Label_398; // 0x18b JumpB
	var_74_bool = 0; // 0x18c MovB
	return 2; // 0x18d Return
	
Label_398:
	var_80_bool = 0; var_81_object = Obj(); // 0x18e PushV
	var_81_object = var_76_object; // 0x18f Mov
	func_2031(var_80_bool, var_81_object); // 0x190 NEW_2
	var_82_bool = var_80_bool == 0; // 0x192 Not
	if(var_82_bool == 0) goto Label_406; // 0x193 JumpB
	var_74_bool = 0; // 0x194 MovB
	return 2; // 0x195 Return
	
Label_406:
	IsPlayerActor(var_76_object, var_78_bool); // 0x196 Func
	var_74_bool = var_78_bool; // 0x198 Mov
	return 2; // 0x199 Return
}


func_1932(var_51_object)
{
	var_52_object = Obj(); // 0x78d PushV
	var_52_object = var_51_object; // 0x78e Mov
	func_2079(); // 0x78f NEW_2
	var_53_object = Obj(); // 0x791 PushV
	var_53_object = var_51_object; // 0x792 Mov
	TaskCall(4); // 0x793 TaskCall
	func_683(var_51_object, var_54_object, var_55_bool, var_53_object); // 0x794 NEW_2
	TaskReturn(); // 0x795 TaskReturn
	ResetAAS(); // 0x797 Func
	return 0; // 0x799 Return
}


func_410(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x19b PushV
	var_17_object = var_15_object; // 0x19c Mov
	func_2031(var_16_bool, var_17_object); // 0x19d NEW_2
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
	func_2031(var_53_bool, var_54_object); // 0x3a6 NEW_2
	if(var_53_bool == 0) goto Label_938; // 0x3a8 JumpB
	var_51_bool = 1; // 0x3a9 MovB
	
Label_938:
	if(var_51_bool == 0) goto Label_942; // 0x3aa JumpB
	var_0_bool = var_50_object; // 0x3ab TMov
	StopGroup0(); // 0x3ac Func
	
Label_942:
	return 0; // 0x3ae Return
}


func_417(var_0_bool, var_1_bool, var_2_cvector, var_75_object, var_76_bool, var_98_float)
{
	var_77_bool = 0; var_78_bool = 0; // 0x1a1 PushV
	var_79_bool = 0; var_80_object = Obj(); // 0x1a2 PushV
	var_80_object = var_1_bool; // 0x1a3 MovT
	func_1295(var_79_bool, var_80_object); // 0x1a4 NEW_2
	var_81_bool = var_79_bool == 0; // 0x1a6 Not
	if(var_81_bool == 0) goto Label_425; // 0x1a7 JumpB
	return 2; // 0x1a8 Return
	
Label_425:
	var_1_bool = var_75_object; // 0x1a9 TMov
	var_82_object = Obj(); // 0x1aa PushV
	var_82_object = var_1_bool; // 0x1ab MovT
	func_1636(var_82_object); // 0x1ac NEW_2
	GetPFPosition(var_0_bool); // 0x1ae TObjFunc
	var_87_int = 61; // 0x1b0 PushI
	var_88_float = 0.5; // 0x1b1 PushF
	SetTimer(var_87_int, var_88_float); // 0x1b2 Func
	
Label_436:
	FindPathTo(var_77_bool, var_0_bool); // 0x1b4 Func
	var_89_bool = var_2_cvector == 0; // 0x1b6 NullEq
	if(var_89_bool == 0) goto Label_444; // 0x1b7 JumpB
	var_90_string = "Can't find path to noise source"; // 0x1b8 PushS
	Trace(var_90_string); // 0x1b9 Func
	goto Label_477; // 0x1bb Jump
	
Label_477:
	var_91_int = 61; // 0x1dd PushI
	KillTimer(var_91_int); // 0x1de Func
	return 2; // 0x1e0 Return
	
Label_444:
	FollowPath(var_77_bool, var_76_bool, var_78_bool); // 0x1bc Func
	var_92_bool = var_78_bool == 0; // 0x1be Not
	if(var_92_bool == 0) goto Label_452; // 0x1bf JumpB
	var_93_bool = var_2_cvector == 0; // 0x1c0 NullEq
	if(var_93_bool == 0) goto Label_451; // 0x1c1 JumpB
	goto Label_477; // 0x1c2 Jump
	
Label_451:
	goto Label_475; // 0x1c3 Jump
	
Label_475:
	var_94_bool = var_2_cvector != 0; // 0x1db NullNeq
	if(var_94_bool == 0) goto Label_436; // 0x1dc JumpB
	
Label_452:
	var_95_int = 61; // 0x1c4 PushI
	KillTimer(var_95_int); // 0x1c5 Func
	var_96_object = Obj(); var_97_object = Obj(); // 0x1c7 PushV
	var_97_object = var_1_bool; // 0x1c8 MovT
	TaskCall(6); // 0x1c9 TaskCall
	func_943(var_98_float, var_99_float, var_100_object, var_96_object, var_97_object); // 0x1ca NEW_2
	TaskReturn(); // 0x1cb TaskReturn
	var_1_bool = var_98_float; // 0x1cc TMov
	var_120_int = 61; // 0x1ce PushI
	var_121_float = 0.5; // 0x1cf PushF
	SetTimer(var_120_int, var_121_float); // 0x1d0 Func
	var_122_bool = 0; var_123_object = Obj(); // 0x1d2 PushV
	var_123_object = var_1_bool; // 0x1d3 MovT
	func_1295(var_122_bool, var_123_object); // 0x1d4 NEW_2
	var_124_bool = var_122_bool == 0; // 0x1d6 Not
	if(var_124_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_477; // 0x1d8 Jump
	
Label_473:
	GetPFPosition(var_0_bool); // 0x1d9 TObjFunc
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


func_1964(var_12_object)
{
	var_13_object = Obj(); // 0x7ad PushV
	var_13_object = var_12_object; // 0x7ae Mov
	func_2089(); // 0x7af NEW_2
	var_20_bool = 0; var_21_object = Obj(); // 0x7b1 PushV
	var_21_object = var_12_object; // 0x7b2 Mov
	func_1215(var_20_bool, var_21_object); // 0x7b3 NEW_2
	if(var_20_bool == 0) goto Label_1979; // 0x7b5 JumpB
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0; // 0x7b6 PushV
	var_25_object = var_12_object; // 0x7b7 Mov
	var_26_float = 0.05; // 0x7b8 MovF
	func_1579(var_24_bool, var_25_object, var_26_float); // 0x7b9 NEW_2
	
Label_1979:
	var_62_object = Obj(); // 0x7bb PushV
	var_62_object = var_12_object; // 0x7bc Mov
	TaskCall(1); // 0x7bd TaskCall
	func_185(var_62_object); // 0x7be NEW_2
	TaskReturn(); // 0x7bf TaskReturn
	return 0; // 0x7c1 Return
}


func_943(var_0_bool, var_1_bool, var_2_cvector, var_96_object, var_97_object)
{
	var_101_bool = 0; var_102_int = 0; var_103_bool = 0; var_104_int = 0; // 0x3af PushV
	GetSeeThreshold(var_0_bool); // 0x3b0 Func
	GetSeeFOV(var_104_int); // 0x3b2 Func
	var_105_float = 1.5; // 0x3b4 PushF
	var_106_float = var_0_bool / var_105_float; // 0x3b5 Div
	SetSeeThreshold(var_106_float); // 0x3b6 Func
	var_2_cvector = var_97_object; // 0x3b8 TMov
	var_107_object = Obj(); // 0x3b9 PushV
	var_107_object = var_2_cvector; // 0x3ba MovT
	func_1636(var_107_object); // 0x3bb NEW_2
	var_104_int = 0; // 0x3bd MovI
	
Label_958:
	var_108_int = 3; // 0x3be PushI
	var_109_bool = var_104_int < var_108_int; // 0x3bf LT
	if(var_109_bool == 0) goto Label_989; // 0x3c0 JumpB
	var_110_float = 1.8; // 0x3c1 PushF
	var_111_float = var_1_bool * var_110_float; // 0x3c2 Mult
	SetSeeFOV(var_111_float); // 0x3c3 Func
	var_112_string = "all"; // 0x3c5 PushS
	var_113_string = "hunt"; // 0x3c6 PushS
	PlayAnimation(var_112_string, var_113_string); // 0x3c7 Func
	WaitForAnimEnd(var_103_bool); // 0x3c9 Func
	SetSeeFOV(var_104_int); // 0x3cb Func
	var_114_bool = var_103_bool == 0; // 0x3cd Not
	if(var_114_bool == 0) goto Label_976; // 0x3ce JumpB
	goto Label_989; // 0x3cf Jump
	
Label_989:
	func_1055(var_103_bool, var_104_int); // 0x3de NEW_2
	var_115_bool = var_103_bool; // 0x3e0 Push
	if(var_115_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_2_cvector = 0; // 0x3e2 SetNullT
	
Label_995:
	var_96_object = var_2_cvector; // 0x3e3 MovT
	return 4; // 0x3e4 Return
	
Label_976:
	var_116_int = 2; // 0x3d0 PushI
	Sleep(var_116_int, var_103_bool); // 0x3d1 Func
	var_117_bool = var_103_bool == 0; // 0x3d3 Not
	if(var_117_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_989; // 0x3d5 Jump
	
Label_982:
	var_118_object = Obj(); // 0x3d6 PushV
	var_118_object = var_2_cvector; // 0x3d7 MovT
	func_1636(var_118_object); // 0x3d8 NEW_2
	var_119_int = 1; // 0x3da PushI
	var_104_int = var_104_int + var_119_int; // 0x3db Add2
	goto Label_958; // 0x3dc Jump
}


func_1464(var_54_bool)
{
	var_55_bool = 0; var_56_bool = 0; // 0x5b8 PushV
	IsLoaded(var_56_bool); // 0x5b9 Func
	var_54_bool = var_56_bool; // 0x5bb Mov
	return 2; // 0x5bc Return
}


func_1469(var_174_object)
{
	var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_cvector = CVector(0,0,0); // 0x5bd PushV
	GetEyesHeight(var_177_float); // 0x5be ObjFunc
	var_178_cvector = CVector(0.0, 0.0, 0.0); // 0x5c0 MovV
	var_179_float = GetByIndex(var_178_cvector, 1); // 0x5c1 PushE
	var_179_float = var_177_float; // 0x5c2 Mov
	SetByIndex(var_178_cvector, 1) = var_179_float; // 0x5c3 PopE
	var_180_string = "head"; // 0x5c4 PushS
	LookAsync(var_174_object, var_180_string, var_178_cvector); // 0x5c5 Func
	return 4; // 0x5c7 Return
}


func_1480(var_90_string, var_91_int, var_92_int)
{
	var_93_bool = 0; var_94_bool = 0; // 0x5c8 PushV
	var_95_bool = 0; var_96_int = 0; var_97_int = 0; // 0x5c9 PushV
	var_96_int = var_91_int; // 0x5ca Mov
	var_97_int = var_92_int; // 0x5cb Mov
	func_1574(var_95_bool, var_96_int, var_97_int); // 0x5cc NEW_2
	if(var_95_bool == 0) goto Label_1490; // 0x5ce JumpB
	var_100_int = 0; // 0x5cf PushI
	AddItem(var_94_bool, var_90_string, var_100_int); // 0x5d0 Func
	
Label_1490:
	return 2; // 0x5d2 Return
}


func_1491(var_101_string, var_102_int, var_103_int, var_104_int)
{
	var_105_int = 0; var_106_bool = 0; var_107_int = 0; var_108_bool = 0; // 0x5d3 PushV
	var_109_bool = 0; var_110_int = 0; var_111_int = 0; // 0x5d4 PushV
	var_110_int = var_102_int; // 0x5d5 Mov
	var_111_int = var_103_int; // 0x5d6 Mov
	func_1574(var_109_bool, var_110_int, var_111_int); // 0x5d7 NEW_2
	if(var_109_bool == 0) goto Label_1505; // 0x5d9 JumpB
	irand(var_107_int, var_104_int); // 0x5da Func
	var_112_int = 0; // 0x5dc PushI
	var_113_int = 1; // 0x5dd PushI
	var_114_int = var_107_int + var_113_int; // 0x5de Add
	AddItem(var_108_bool, var_101_string, var_112_int, var_114_int); // 0x5df Func
	
Label_1505:
	return 4; // 0x5e1 Return
}


func_2005(var_14_bool, var_15_object, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x7d5 PushV
	var_19_bool = 0; var_20_object = Obj(); // 0x7d6 PushV
	var_20_object = var_16_object; // 0x7d7 Mov
	func_1802(var_19_bool, var_20_object); // 0x7d8 NEW_2
	if(var_19_bool == 0) goto Label_2028; // 0x7da JumpB
	CanSee(var_18_bool, var_15_object); // 0x7db Func
	var_37_bool = 0; // 0x7dd PushV
	var_37_bool = 1; // 0x7de MovB
	var_38_bool = var_18_bool; // 0x7df Push
	if(var_38_bool == 0) goto Label_2025; // 0x7e0 JumpB
	var_39_float = 0; var_40_object = Obj(); // 0x7e1 PushV
	var_40_object = var_15_object; // 0x7e2 Mov
	func_1207(var_40_object); // 0x7e3 NEW_2
	var_47_float = 490000.0; // 0x7e5 PushF
	var_48_bool = var_39_float <= var_47_float; // 0x7e6 LE
	if(var_48_bool == 0) goto Label_2025; // 0x7e7 JumpB
	var_37_bool = 0; // 0x7e8 MovB
	
Label_2025:
	if(var_37_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_14_bool = 1; // 0x7ea MovB
	return 2; // 0x7eb Return
	
Label_2028:
	var_14_bool = 0; // 0x7ec MovB
	return 2; // 0x7ed Return
}


func_1506(var_166_string)
{
	var_167_bool = 0; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_bool = 0; var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); // 0x5e2 PushV
	IsExisting3DSound(var_175_bool, var_166_string); // 0x5e3 Func
	var_183_bool = var_175_bool == 0; // 0x5e5 Not
	if(var_183_bool == 0) goto Label_1531; // 0x5e6 JumpB
	var_176_int = 0; // 0x5e7 MovI
	
Label_1512:
	var_184_int = 1; // 0x5e8 PushI
	var_185_int = var_176_int + var_184_int; // 0x5e9 Add
	var_186_int = var_166_string + var_185_int; // 0x5ea Add
	IsExisting3DSound(var_177_bool, var_186_int); // 0x5eb Func
	var_187_bool = var_177_bool == 0; // 0x5ed Not
	if(var_187_bool == 0) goto Label_1520; // 0x5ee JumpB
	goto Label_1523; // 0x5ef Jump
	
Label_1523:
	var_188_bool = var_176_int == 0; // 0x5f3 Not
	if(var_188_bool == 0) goto Label_1526; // 0x5f4 JumpB
	return 16; // 0x5f5 Return
	
Label_1526:
	irand(var_178_int, var_176_int); // 0x5f6 Func
	var_189_int = 1; // 0x5f8 PushI
	var_190_int = var_178_int + var_189_int; // 0x5f9 Add
	var_166_string = var_166_string + var_190_int; // 0x5fa Add2
	
Label_1531:
	Is3DSoundLoaded(var_179_bool, var_166_string); // 0x5fb Func
	var_191_bool = var_179_bool; // 0x5fd Push
	if(var_191_bool == 0) goto Label_1546; // 0x5fe JumpB
	GetEyesHeight(var_180_float); // 0x5ff Func
	GetDirection(var_181_cvector); // 0x601 Func
	var_192_int = 50; // 0x603 PushI
	var_182_cvector = var_181_cvector * var_192_int; // 0x604 Mult2
	var_193_float = GetByIndex(var_182_cvector, 1); // 0x605 PushE
	var_193_float = var_193_float + var_180_float; // 0x606 Add2
	SetByIndex(var_182_cvector, 1) = var_193_float; // 0x607 PopE
	PlayGlobalSound(var_166_string, var_182_cvector); // 0x608 Func
	
Label_1546:
	return 16; // 0x60a Return
	
Label_1520:
	var_194_int = 1; // 0x5f0 PushI
	var_176_int = var_176_int + var_194_int; // 0x5f1 Add2
	goto Label_1512; // 0x5f2 Jump
}


func_2030()
{
	return 0; // 0x7ee Return
}


func_2031(var_14_bool, var_15_object)
{
	var_16_string = ""; var_17_string = ""; // 0x7ef PushV
	var_18_bool = 0; var_19_object = Obj(); // 0x7f0 PushV
	var_19_object = var_15_object; // 0x7f1 Mov
	func_1295(var_18_bool, var_19_object); // 0x7f2 NEW_2
	var_52_bool = var_18_bool == 0; // 0x7f4 Not
	if(var_52_bool == 0) goto Label_2040; // 0x7f5 JumpB
	var_14_bool = 0; // 0x7f6 MovB
	return 2; // 0x7f7 Return
	
Label_2040:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x7f8 PushV
	var_54_object = var_15_object; // 0x7f9 Mov
	var_55_string = "health"; // 0x7fa MovS
	func_1220(var_53_bool, var_54_object, var_55_string); // 0x7fb NEW_2
	var_56_bool = var_53_bool == 0; // 0x7fd Not
	if(var_56_bool == 0) goto Label_2049; // 0x7fe JumpB
	var_14_bool = 0; // 0x7ff MovB
	return 2; // 0x800 Return
	
Label_2049:
	var_57_bool = 0; var_58_object = Obj(); var_59_string = ""; // 0x801 PushV
	var_58_object = var_15_object; // 0x802 Mov
	var_59_string = "class"; // 0x803 MovS
	func_1220(var_57_bool, var_58_object, var_59_string); // 0x804 NEW_2
	if(var_57_bool == 0) goto Label_2077; // 0x806 JumpB
	var_60_string = "class"; // 0x807 PushS
	GetProperty(var_60_string, var_17_string); // 0x808 ObjFunc
	var_61_bool = 0; // 0x80a PushV
	var_61_bool = 1; // 0x80b MovB
	var_62_bool = 0; // 0x80c PushV
	var_62_bool = 1; // 0x80d MovB
	var_63_string = "rat"; // 0x80e PushS
	var_64_bool = var_17_string == var_63_string; // 0x80f Eq
	if(var_64_bool == 0) goto Label_2069; // 0x810 JumpB
	var_65_string = "rat_big"; // 0x811 PushS
	var_66_bool = var_17_string == var_65_string; // 0x812 Eq
	if(var_66_bool == 0) goto Label_2069; // 0x813 JumpB
	var_62_bool = 0; // 0x814 MovB
	
Label_2069:
	if(var_62_bool == 0) goto Label_2074; // 0x815 JumpB
	var_67_string = "bomber"; // 0x816 PushS
	var_68_bool = var_17_string == var_67_string; // 0x817 Eq
	if(var_68_bool == 0) goto Label_2074; // 0x818 JumpB
	var_61_bool = 0; // 0x819 MovB
	
Label_2074:
	if(var_61_bool == 0) goto Label_2077; // 0x81a JumpB
	var_14_bool = 0; // 0x81b MovB
	return 2; // 0x81c Return
	
Label_2077:
	var_14_bool = 1; // 0x81d MovB
	return 2; // 0x81e Return
}


