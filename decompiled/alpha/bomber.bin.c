task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0xd PushV
	var_13_object = var_11_object; // 0xe Mov
	func_1485(var_12_bool, var_13_object); // 0xf Call
	if(var_12_bool == 0) goto Label_25; // 0x11 JumpB
	func_61(); // 0x13 Call
	var_68_object = Obj(); // 0x15 PushV
	var_68_object = var_11_object; // 0x16 Mov
	func_1492(var_68_object); // 0x17 Call
	
Label_25:
	return 0; // 0x19 Return
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x1b PushV
	var_13_object = var_11_object; // 0x1c Mov
	func_1470(var_12_bool, var_13_object); // 0x1d Call
	if(var_12_bool == 0) goto Label_39; // 0x1f JumpB
	func_61(); // 0x21 Call
	var_68_object = Obj(); // 0x23 PushV
	var_68_object = var_11_object; // 0x24 Mov
	func_1477(var_68_object); // 0x25 Call
	
Label_39:
	return 0; // 0x27 Return
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_61(); // 0x2a Call
	var_47_object = Obj(); // 0x2c PushV
	var_47_object = var_45_object; // 0x2d Mov
	func_1502(var_47_object); // 0x2e Call
	return 0; // 0x30 Return
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x32 PushV
	var_14_object = var_11_float; // 0x33 Mov
	var_15_object = var_12_object; // 0x34 Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x35 Call
	if(var_13_bool == 0) goto Label_60; // 0x37 JumpB
	var_45_object = Obj(); // 0x38 PushV
	var_45_object = var_11_float; // 0x39 Mov
	func_40(); // 0x3a Call
	
Label_60:
	return 0; // 0x3c Return
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_61(); // 0x46 Call
	var_13_object = Obj(); // 0x48 PushV
	var_13_object = var_11_object; // 0x49 Mov
	func_1549(); // 0x4a Call
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
	func_61(); // 0x5b Call
	TaskCall(7); // 0x5e TaskCall
	func_981(); // 0x5f Call
	TaskReturn(); // 0x60 TaskReturn
	
Label_98:
	return 2; // 0x62 Return
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	RequestClearPath(var_11_object); // 0x9d Func
	return 0; // 0x9f Return
}


task_0_event_28(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	Stop(); // 0xa0 Func
	return 0; // 0xa2 Return
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0xc4 PushV
	IsOverrideActive(var_13_bool); // 0xc5 Func
	var_14_bool = var_13_bool == 0; // 0xc7 Not
	if(var_14_bool == 0) goto Label_203; // 0xc8 JumpB
	WorkWithCorpse(var_11_object); // 0xc9 Func
	
Label_203:
	return 2; // 0xcb Return
}


task_1_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_float, var_13_float, var_14_object)
{
	return 0; // 0x13a Return
}


task_1_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	return 0; // 0x13c Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	return 0; // 0x13e Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x147 PushV
	var_13_object = var_11_object; // 0x148 Mov
	func_1485(var_12_bool, var_13_object); // 0x149 Call
	if(var_12_bool == 0) goto Label_339; // 0x14b JumpB
	func_485(); // 0x14d Call
	var_68_object = Obj(); // 0x14f PushV
	var_68_object = var_11_object; // 0x150 Mov
	func_1492(var_68_object); // 0x151 Call
	
Label_339:
	return 0; // 0x153 Return
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_485(); // 0x156 Call
	var_47_object = Obj(); // 0x158 PushV
	var_47_object = var_45_object; // 0x159 Mov
	func_1502(var_47_object); // 0x15a Call
	return 0; // 0x15c Return
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x15e PushV
	var_14_object = var_11_float; // 0x15f Mov
	var_15_object = var_12_object; // 0x160 Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x161 Call
	if(var_13_bool == 0) goto Label_360; // 0x163 JumpB
	var_45_object = Obj(); // 0x164 PushV
	var_45_object = var_11_float; // 0x165 Mov
	func_340(); // 0x166 Call
	
Label_360:
	return 0; // 0x168 Return
}


task_2_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_int = 61; // 0x1b5 PushI
	var_13_bool = var_11_object == var_12_int; // 0x1b6 Eq
	if(var_13_bool == 0) goto Label_451; // 0x1b7 JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0x1b8 PushV
	var_15_object = var_1_bool; // 0x1b9 MovT
	func_380(var_14_bool, var_15_object); // 0x1ba Call
	var_69_bool = var_14_bool == 0; // 0x1bc Not
	if(var_69_bool == 0) goto Label_449; // 0x1bd JumpB
	Stop(); // 0x1be Func
	var_2_cvector = 0; // 0x1c0 SetNullT
	
Label_449:
	ResetAAS(); // 0x1c1 Func
	
Label_451:
	return 0; // 0x1c3 Return
}


task_2_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_1_bool; // 0x1c5 Eq
	if(var_12_bool == 0) goto Label_467; // 0x1c6 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0x1c7 PushV
	var_14_object = var_1_bool; // 0x1c8 MovT
	func_380(var_13_bool, var_14_object); // 0x1c9 Call
	var_68_bool = var_13_bool == 0; // 0x1cb Not
	if(var_68_bool == 0) goto Label_466; // 0x1cc JumpB
	func_485(); // 0x1ce Call
	var_2_cvector = 0; // 0x1d0 SetNullT
	return 0; // 0x1d1 Return
	
Label_466:
	goto Label_474; // 0x1d2 Jump
	
Label_474:
	GetPFPosition(var_0_bool); // 0x1da TObjFunc
	var_70_string = "new hunt point"; // 0x1dc PushS
	Trace(var_70_string); // 0x1dd Func
	Stop(); // 0x1df Func
	return 0; // 0x1e1 Return
	
Label_467:
	var_71_bool = 0; var_72_object = Obj(); var_73_object = Obj(); // 0x1d3 PushV
	var_72_object = var_11_object; // 0x1d4 Mov
	var_73_object = var_1_bool; // 0x1d5 MovT
	func_361(var_71_bool, var_72_object, var_73_object); // 0x1d6 Call
	if(var_71_bool == 0) goto Label_474; // 0x1d8 JumpB
	var_1_bool = var_11_object; // 0x1d9 TMov
}


task_2_event_28(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	Stop(); // 0x1e2 Func
	return 0; // 0x1e4 Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_485(); // 0x1ed Call
	var_13_object = Obj(); // 0x1ef PushV
	var_13_object = var_11_object; // 0x1f0 Mov
	func_1549(); // 0x1f1 Call
	return 0; // 0x1f3 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x1f5 PushV
	var_13_object = var_11_object; // 0x1f6 Mov
	func_1485(var_12_bool, var_13_object); // 0x1f7 Call
	if(var_12_bool == 0) goto Label_513; // 0x1f9 JumpB
	func_618(); // 0x1fb Call
	var_67_object = Obj(); // 0x1fd PushV
	var_67_object = var_11_object; // 0x1fe Mov
	func_1492(var_67_object); // 0x1ff Call
	
Label_513:
	return 0; // 0x201 Return
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x203 PushV
	var_13_object = var_11_object; // 0x204 Mov
	func_1470(var_12_bool, var_13_object); // 0x205 Call
	if(var_12_bool == 0) goto Label_527; // 0x207 JumpB
	func_618(); // 0x209 Call
	var_67_object = Obj(); // 0x20b PushV
	var_67_object = var_11_object; // 0x20c Mov
	func_1477(var_67_object); // 0x20d Call
	
Label_527:
	return 0; // 0x20f Return
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_618(); // 0x212 Call
	var_46_object = Obj(); // 0x214 PushV
	var_46_object = var_45_object; // 0x215 Mov
	func_1502(var_46_object); // 0x216 Call
	return 0; // 0x218 Return
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x21a PushV
	var_14_object = var_11_float; // 0x21b Mov
	var_15_object = var_12_object; // 0x21c Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x21d Call
	if(var_13_bool == 0) goto Label_548; // 0x21f JumpB
	var_45_object = Obj(); // 0x220 PushV
	var_45_object = var_11_float; // 0x221 Mov
	func_528(); // 0x222 Call
	
Label_548:
	return 0; // 0x224 Return
}


task_4_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x319 Eq
	if(var_12_bool == 0) goto Label_796; // 0x31a JumpB
	var_1_bool = 1; // 0x31b TMovB
	
Label_796:
	return 0; // 0x31c Return
}


task_4_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x31e Eq
	if(var_12_bool == 0) goto Label_801; // 0x31f JumpB
	var_1_bool = 0; // 0x320 TMovB
	
Label_801:
	return 0; // 0x321 Return
}


task_4_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x323 PushV
	var_14_object = var_11_float; // 0x324 Mov
	var_15_object = var_12_object; // 0x325 Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x326 Call
	return 0; // 0x328 Return
}


task_5_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_object = Obj(); // 0x32f PushV
	var_12_object = var_11_object; // 0x330 Mov
	func_843(var_11_object, var_12_object); // 0x331 Call
	return 0; // 0x333 Return
}


task_5_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool; // 0x335 Eq
	if(var_12_bool == 0) goto Label_824; // 0x336 JumpB
	var_0_bool = 0; // 0x337 SetNullT
	
Label_824:
	return 0; // 0x338 Return
}


	task_5_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	var_46_object = Obj(); // 0x33a PushV
	var_46_object = var_45_object; // 0x33b Mov
	func_843(var_45_object, var_46_object); // 0x33c Call
	return 0; // 0x33e Return
	}


task_5_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x340 PushV
	var_14_object = var_11_float; // 0x341 Mov
	var_15_object = var_12_object; // 0x342 Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x343 Call
	if(var_13_bool == 0) goto Label_842; // 0x345 JumpB
	var_45_object = Obj(); // 0x346 PushV
	var_45_object = var_11_float; // 0x347 Mov
	func_825(); // 0x348 Call
	
Label_842:
	return 0; // 0x34a Return
}


task_6_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x38a PushV
	var_13_object = var_11_object; // 0x38b Mov
	func_1485(var_12_bool, var_13_object); // 0x38c Call
	if(var_12_bool == 0) goto Label_918; // 0x38e JumpB
	func_963(var_10_object, var_11_object); // 0x390 Call
	var_67_object = Obj(); // 0x392 PushV
	var_67_object = var_11_object; // 0x393 Mov
	func_1492(var_67_object); // 0x394 Call
	
Label_918:
	return 0; // 0x396 Return
}


task_6_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x397 PushV
	IsPlayerActor(var_12_bool, var_13_bool); // 0x398 Func
	var_14_bool = var_13_bool; // 0x39a Push
	if(var_14_bool == 0) goto Label_925; // 0x39b JumpB
	return 2; // 0x39c Return
	
Label_925:
	var_15_bool = 0; var_16_object = Obj(); // 0x39d PushV
	var_16_object = var_11_object; // 0x39e Mov
	func_1599(var_15_bool, var_16_object); // 0x39f Call
	var_68_bool = var_15_bool == 0; // 0x3a1 Not
	if(var_68_bool == 0) goto Label_932; // 0x3a2 JumpB
	return 2; // 0x3a3 Return
	
Label_932:
	IsPlayerActor(var_11_object, var_13_bool); // 0x3a4 Func
	var_69_bool = var_13_bool; // 0x3a6 Push
	if(var_69_bool == 0) goto Label_941; // 0x3a7 JumpB
	var_2_cvector = var_11_object; // 0x3a8 TMov
	Stop(); // 0x3a9 Func
	StopGroup0(); // 0x3ab Func
	
Label_941:
	return 2; // 0x3ad Return
}


	task_6_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_45_object)
	{
	func_963(var_12_object, var_45_object); // 0x3b0 Call
	var_46_object = Obj(); // 0x3b2 PushV
	var_46_object = var_45_object; // 0x3b3 Mov
	func_1502(var_46_object); // 0x3b4 Call
	return 0; // 0x3b6 Return
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x3b8 PushV
	var_14_object = var_11_object; // 0x3b9 Mov
	var_15_object = var_12_object; // 0x3ba Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x3bb Call
	if(var_13_bool == 0) goto Label_962; // 0x3bd JumpB
	var_45_object = Obj(); // 0x3be PushV
	var_45_object = var_11_object; // 0x3bf Mov
	func_942(); // 0x3c0 Call
	
Label_962:
	return 0; // 0x3c2 Return
}


task_6_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_963(var_10_object, var_11_object); // 0x3ce Call
	var_12_object = Obj(); // 0x3d0 PushV
	var_12_object = var_11_object; // 0x3d1 Mov
	func_1549(); // 0x3d2 Call
	return 0; // 0x3d4 Return
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3de PushV
	var_13_object = var_11_object; // 0x3df Mov
	func_1485(var_12_bool, var_13_object); // 0x3e0 Call
	if(var_12_bool == 0) goto Label_1002; // 0x3e2 JumpB
	func_1038(); // 0x3e4 Call
	var_68_object = Obj(); // 0x3e6 PushV
	var_68_object = var_11_object; // 0x3e7 Mov
	func_1492(var_68_object); // 0x3e8 Call
	
Label_1002:
	return 0; // 0x3ea Return
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3ec PushV
	var_13_object = var_11_object; // 0x3ed Mov
	func_1470(var_12_bool, var_13_object); // 0x3ee Call
	if(var_12_bool == 0) goto Label_1016; // 0x3f0 JumpB
	func_1038(); // 0x3f2 Call
	var_68_object = Obj(); // 0x3f4 PushV
	var_68_object = var_11_object; // 0x3f5 Mov
	func_1477(var_68_object); // 0x3f6 Call
	
Label_1016:
	return 0; // 0x3f8 Return
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_45_object)
	{
	func_1038(); // 0x3fb Call
	var_47_object = Obj(); // 0x3fd PushV
	var_47_object = var_45_object; // 0x3fe Mov
	func_1502(var_47_object); // 0x3ff Call
	return 0; // 0x401 Return
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x403 PushV
	var_14_object = var_11_object; // 0x404 Mov
	var_15_object = var_12_object; // 0x405 Mov
	func_1555(var_13_bool, var_14_object, var_15_object); // 0x406 Call
	if(var_13_bool == 0) goto Label_1037; // 0x408 JumpB
	var_45_object = Obj(); // 0x409 PushV
	var_45_object = var_11_object; // 0x40a Mov
	func_1017(); // 0x40b Call
	
Label_1037:
	return 0; // 0x40d Return
}


task_7_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1038(); // 0x419 Call
	var_13_object = Obj(); // 0x41b PushV
	var_13_object = var_11_object; // 0x41c Mov
	func_1549(); // 0x41d Call
	return 0; // 0x41f Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_int)
{
	var_12_int = 91; // 0x421 PushI
	var_13_bool = var_11_int == var_12_int; // 0x422 Eq
	if(var_13_bool == 0) goto Label_1063; // 0x423 JumpB
	func_1038(); // 0x425 Call
	
Label_1063:
	return 0; // 0x427 Return
}


event_22(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x5ed PushV
	var_15_object = var_11_object; // 0x5ee Mov
	var_16_int = var_12_int; // 0x5ef Mov
	var_17_float = var_13_float; // 0x5f0 Mov
	func_1205(var_16_int, var_17_float); // 0x5f1 Call
	return 0; // 0x5f3 Return
}


event_16(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x600 PushV
	var_15_string = "health"; // 0x601 PushS
	var_16_bool = var_12_string == var_15_string; // 0x602 Eq
	if(var_16_bool == 0) goto Label_1548; // 0x603 JumpB
	var_17_string = "health"; // 0x604 PushS
	GetProperty(var_17_string, var_14_float); // 0x605 Func
	var_18_int = 0; // 0x607 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x608 LE
	if(var_19_bool == 0) goto Label_1548; // 0x609 JumpB
	SignalDeath(var_11_object); // 0x60a Func
	
Label_1548:
	return 2; // 0x60c Return
}


event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_object = Obj(); // 0x60e PushV
	var_12_object = var_11_object; // 0x60f Mov
	func_1524(var_12_object); // 0x610 Call
	return 0; // 0x612 Return
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_1592(); // 0x1 Call
	
Label_3:
	var_15_int = 90; // 0x3 PushI
	var_16_int = 10; // 0x4 PushI
	SetTimer(var_15_int, var_16_int); // 0x5 Func
	func_99(var_9_float, var_10_object); // 0x8 Call
	goto Label_3; // 0xa Jump
}


func_1283(var_132_float, var_133_cvector, var_134_cvector)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); // 0x503 PushV
	var_136_cvector = var_134_cvector - var_133_cvector; // 0x504 Sub2
	var_137_int = var_136_cvector | var_136_cvector; // 0x505 Or
	var_132_float = sqrt(var_137_int); // 0x506 Sqrt2
	return 2; // 0x507 Return
}


func_387(var_0_bool, var_1_bool, var_2_cvector, var_73_object, var_74_bool, var_88_float)
{
	var_75_bool = 0; var_76_bool = 0; // 0x183 PushV
	var_1_bool = var_73_object; // 0x184 TMov
	GetPFPosition(var_0_bool); // 0x185 TObjFunc
	var_77_int = 61; // 0x187 PushI
	var_78_float = 0.5; // 0x188 PushF
	SetTimer(var_77_int, var_78_float); // 0x189 Func
	
Label_395:
	FindPathTo(var_75_bool, var_0_bool); // 0x18b Func
	var_79_bool = var_2_cvector == 0; // 0x18d NullEq
	if(var_79_bool == 0) goto Label_403; // 0x18e JumpB
	var_80_string = "Can't find path to noise source"; // 0x18f PushS
	Trace(var_80_string); // 0x190 Func
	goto Label_432; // 0x192 Jump
	
Label_432:
	var_81_int = 61; // 0x1b0 PushI
	KillTimer(var_81_int); // 0x1b1 Func
	return 2; // 0x1b3 Return
	
Label_403:
	FollowPath(var_75_bool, var_74_bool, var_76_bool); // 0x193 Func
	var_82_bool = var_76_bool == 0; // 0x195 Not
	if(var_82_bool == 0) goto Label_411; // 0x196 JumpB
	var_83_bool = var_2_cvector == 0; // 0x197 NullEq
	if(var_83_bool == 0) goto Label_410; // 0x198 JumpB
	goto Label_432; // 0x199 Jump
	
Label_410:
	goto Label_430; // 0x19a Jump
	
Label_430:
	var_84_bool = var_2_cvector != 0; // 0x1ae NullNeq
	if(var_84_bool == 0) goto Label_395; // 0x1af JumpB
	
Label_411:
	var_85_int = 61; // 0x19b PushI
	KillTimer(var_85_int); // 0x19c Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x19e PushV
	var_87_object = var_1_bool; // 0x19f MovT
	TaskCall(6); // 0x1a0 TaskCall
	func_859(var_88_float, var_89_float, var_90_object, var_86_object, var_87_object); // 0x1a1 Call
	TaskReturn(); // 0x1a2 TaskReturn
	var_1_bool = var_88_float; // 0x1a3 TMov
	var_108_int = 61; // 0x1a5 PushI
	var_109_float = 0.5; // 0x1a6 PushF
	SetTimer(var_108_int, var_109_float); // 0x1a7 Func
	var_110_bool = var_1_bool == 0; // 0x1a9 NullEq
	if(var_110_bool == 0) goto Label_428; // 0x1aa JumpB
	goto Label_432; // 0x1ab Jump
	
Label_428:
	GetPFPosition(var_0_bool); // 0x1ac TObjFunc
}


func_1288(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x508 PushV
	CreateObjectSet(var_14_object); // 0x509 Func
	var_12_object = var_14_object; // 0x50b Mov
	return 2; // 0x50c Return
}


func_1294(var_64_string, var_65_int)
{
	var_66_string = ""; var_67_string = ""; // 0x50e PushV
	var_67_string = "idle"; // 0x50f MovS
	var_68_int = var_65_int; // 0x510 Push
	if(var_68_int == 0) goto Label_1299; // 0x511 JumpB
	var_67_string = var_67_string + var_65_int; // 0x512 Add2
	
Label_1299:
	var_64_string = var_67_string; // 0x513 Mov
	return 2; // 0x514 Return
}


func_1038()
{
	var_14_int = 91; // 0x40e PushI
	KillTimer(var_14_int); // 0x40f Func
	Stop(); // 0x411 Func
	func_1103(); // 0x414 Call
	return 0; // 0x416 Return
}


func_1169(var_94_bool, var_95_object)
{
	var_96_int = 0; var_97_int = 0; // 0x491 PushV
	var_98_bool = 0; var_99_object = Obj(); // 0x492 PushV
	var_99_object = var_95_object; // 0x493 Mov
	func_1133(var_98_bool, var_99_object); // 0x494 Call
	var_115_bool = var_98_bool == 0; // 0x496 Not
	if(var_115_bool == 0) goto Label_1178; // 0x497 JumpB
	var_94_bool = 0; // 0x498 MovB
	return 2; // 0x499 Return
	
Label_1178:
	var_116_bool = 0; var_117_object = Obj(); var_118_string = ""; // 0x49a PushV
	var_117_object = var_95_object; // 0x49b Mov
	var_118_string = "noaccess"; // 0x49c MovS
	func_1116(var_116_bool, var_117_object, var_118_string); // 0x49d Call
	var_119_bool = var_116_bool == 0; // 0x49f Not
	if(var_119_bool == 0) goto Label_1187; // 0x4a0 JumpB
	var_94_bool = 1; // 0x4a1 MovB
	return 2; // 0x4a2 Return
	
Label_1187:
	var_120_string = "noaccess"; // 0x4a3 PushS
	GetProperty(var_120_string, var_97_int); // 0x4a4 ObjFunc
	var_121_int = 0; // 0x4a6 PushI
	var_94_bool = var_97_int == var_121_int; // 0x4a7 Eq2
	return 2; // 0x4a8 Return
}


func_1555(var_13_bool, var_14_object, var_15_object)
{
	var_16_string = ""; var_17_bool = 0; var_18_string = ""; var_19_bool = 0; // 0x613 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x614 PushV
	var_21_object = var_15_object; // 0x615 Mov
	var_22_string = "class"; // 0x616 MovS
	func_1116(var_20_bool, var_21_object, var_22_string); // 0x617 Call
	var_29_bool = var_20_bool == 0; // 0x619 Not
	if(var_29_bool == 0) goto Label_1565; // 0x61a JumpB
	var_13_bool = 0; // 0x61b MovB
	return 4; // 0x61c Return
	
Label_1565:
	var_30_string = "class"; // 0x61d PushS
	GetProperty(var_30_string, var_18_string); // 0x61e ObjFunc
	var_31_string = "bomber"; // 0x620 PushS
	var_32_bool = var_18_string != var_31_string; // 0x621 Neq
	if(var_32_bool == 0) goto Label_1573; // 0x622 JumpB
	var_13_bool = 0; // 0x623 MovB
	return 4; // 0x624 Return
	
Label_1573:
	CanSee(var_19_bool, var_14_object); // 0x625 Func
	var_33_bool = 0; // 0x627 PushV
	var_33_bool = 1; // 0x628 MovB
	var_34_bool = var_19_bool; // 0x629 Push
	if(var_34_bool == 0) goto Label_1587; // 0x62a JumpB
	var_35_float = 0; var_36_object = Obj(); // 0x62b PushV
	var_36_object = var_14_object; // 0x62c Mov
	func_1108(var_36_object); // 0x62d Call
	var_43_float = 160000.0; // 0x62f PushF
	var_44_bool = var_35_float <= var_43_float; // 0x630 LE
	if(var_44_bool == 0) goto Label_1587; // 0x631 JumpB
	var_33_bool = 0; // 0x632 MovB
	
Label_1587:
	if(var_33_bool == 0) goto Label_1590; // 0x633 JumpB
	var_13_bool = 1; // 0x634 MovB
	return 4; // 0x635 Return
	
Label_1590:
	var_13_bool = 0; // 0x636 MovB
	return 4; // 0x637 Return
}


func_1301(var_58_int)
{
	var_59_int = 0; var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x515 PushV
	var_61_int = 0; // 0x516 MovI
	
Label_1303:
	var_63_string = "all"; // 0x517 PushS
	var_64_string = ""; var_65_int = 0; // 0x518 PushV
	var_65_int = var_61_int; // 0x519 Mov
	func_1294(var_64_string, var_65_int); // 0x51a Call
	HasAnimation(var_62_bool, var_63_string, var_64_string); // 0x51c Func
	var_69_bool = var_62_bool == 0; // 0x51e Not
	if(var_69_bool == 0) goto Label_1313; // 0x51f JumpB
	goto Label_1316; // 0x520 Jump
	
Label_1316:
	var_58_int = var_61_int; // 0x524 Mov
	return 4; // 0x525 Return
	
Label_1313:
	var_70_int = 1; // 0x521 PushI
	var_61_int = var_61_int + var_70_int; // 0x522 Add2
	goto Label_1303; // 0x523 Jump
}


func_1434(var_130_int, var_131_float)
{
	var_138_int = 200; // 0x59b PushI
	var_139_bool = var_131_float < var_138_int; // 0x59c LT
	if(var_139_bool == 0) goto Label_1441; // 0x59d JumpB
	var_130_int = 1; // 0x59e MovI
	return 0; // 0x59f Return
	
Label_1441:
	var_140_int = 600; // 0x5a1 PushI
	var_141_bool = var_131_float < var_140_int; // 0x5a2 LT
	if(var_141_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_130_int = 2; // 0x5a4 MovI
	return 0; // 0x5a5 Return
	
Label_1446:
	var_130_int = 3; // 0x5a6 MovI
	return 0; // 0x5a7 Return
}


func_163(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0xa3 TMovB
	var_1_bool = 0; // 0xa4 TMovB
	Stop(); // 0xa5 Func
	StopGroup0(); // 0xa7 Func
	return 0; // 0xa9 Return
}


func_291(var_78_string)
{
	RemoveRTEnvelope(); // 0x124 Func
	SetDeathState(); // 0x126 Func
	Stop(); // 0x128 Func
	StopAsync(); // 0x12a Func
	StopSecondaryAnimation(); // 0x12c Func
	var_79_string = "all"; // 0x12e PushS
	PlayAnimation(var_79_string, var_78_string); // 0x12f Func
	WaitForAnimEnd(); // 0x131 Func
	var_80_string = "all"; // 0x133 PushS
	LockAnimationEnd(var_80_string, var_78_string); // 0x134 Func
	RemoveEnvelope(); // 0x136 Func
	return 0; // 0x138 Return
}


func_549()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0; // 0x225 PushV
	WaitForAnimEnd(); // 0x226 Func
	var_54_bool = 0; // 0x228 PushV
	func_1272(var_54_bool); // 0x229 Call
	var_57_bool = var_54_bool == 0; // 0x22b Not
	if(var_57_bool == 0) goto Label_558; // 0x22c JumpB
	return 14; // 0x22d Return
	
Label_558:
	var_58_int = 0; // 0x22e PushV
	func_1301(var_58_int); // 0x22f Call
	var_47_int = var_58_int; // 0x230 Mov
	var_48_int = 0; // 0x232 MovI
	
Label_563:
	var_71_bool = 0; // 0x233 PushV
	var_71_bool = 0; // 0x234 MovB
	var_72_int = 5; // 0x235 PushI
	var_73_bool = var_48_int < var_72_int; // 0x236 LT
	if(var_73_bool == 0) goto Label_573; // 0x237 JumpB
	var_74_bool = 0; // 0x238 PushV
	func_1272(var_74_bool); // 0x239 Call
	if(var_74_bool == 0) goto Label_573; // 0x23b JumpB
	var_71_bool = 1; // 0x23c MovB
	
Label_573:
	if(var_71_bool == 0) goto Label_617; // 0x23d JumpB
	var_75_int = 3; // 0x23e PushI
	irand(var_49_int, var_75_int); // 0x23f Func
	var_76_int = 0; // 0x241 PushI
	var_77_bool = var_49_int == var_76_int; // 0x242 Eq
	if(var_77_bool == 0) goto Label_597; // 0x243 JumpB
	var_78_int = var_47_int; // 0x244 Push
	if(var_78_int == 0) goto Label_596; // 0x245 JumpB
	irand(var_50_int, var_47_int); // 0x246 Func
	var_79_string = "all"; // 0x248 PushS
	var_80_string = ""; var_81_int = 0; // 0x249 PushV
	var_81_int = var_50_int; // 0x24a Mov
	func_1294(var_80_string, var_81_int); // 0x24b Call
	PlayAnimation(var_79_string, var_80_string); // 0x24d Func
	WaitForAnimEnd(var_51_bool); // 0x24f Func
	var_82_bool = var_51_bool == 0; // 0x251 Not
	if(var_82_bool == 0) goto Label_596; // 0x252 JumpB
	goto Label_617; // 0x253 Jump
	
Label_617:
	return 14; // 0x269 Return
	
Label_596:
	goto Label_614; // 0x254 Jump
	
Label_614:
	var_83_int = 1; // 0x266 PushI
	var_48_int = var_48_int + var_83_int; // 0x267 Add2
	goto Label_563; // 0x268 Jump
	
Label_597:
	var_84_int = 1; // 0x255 PushI
	var_85_bool = var_49_int == var_84_int; // 0x256 Eq
	if(var_85_bool == 0) goto Label_611; // 0x257 JumpB
	var_86_int = 4; // 0x258 PushI
	rand(var_52_float, var_86_int); // 0x259 Func
	var_87_int = 1; // 0x25b PushI
	var_88_int = var_52_float + var_87_int; // 0x25c Add
	Sleep(var_88_int, var_53_bool); // 0x25d Func
	var_89_bool = var_53_bool == 0; // 0x25f Not
	if(var_89_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_617; // 0x261 Jump
	
Label_610:
	goto Label_614; // 0x262 Jump
	
Label_611:
	var_90_int = var_48_int; // 0x263 Push
	if(var_90_int == 0) goto Label_614; // 0x264 JumpB
	goto Label_617; // 0x265 Jump
}


func_1318(var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; // 0x526 PushV
	var_30_bool = var_20_int > var_21_int; // 0x527 GT
	if(var_30_bool == 0) goto Label_1325; // 0x528 JumpB
	var_31_string = "GenerateMoney: iMin > iMax"; // 0x529 PushS
	Trace(var_31_string); // 0x52a Func
	return 8; // 0x52c Return
	
Label_1325:
	var_26_int = 0; // 0x52d MovI
	var_32_bool = var_20_int != var_21_int; // 0x52e Neq
	if(var_32_bool == 0) goto Label_1332; // 0x52f JumpB
	var_33_int = var_21_int - var_20_int; // 0x530 Sub
	irand(var_27_int, var_33_int); // 0x531 Func
	goto Label_1336; // 0x533 Jump
	
Label_1336:
	var_26_int = var_26_int + var_20_int; // 0x538 Add2
	var_34_int = 0; // 0x539 PushI
	var_35_bool = var_26_int == var_34_int; // 0x53a Eq
	if(var_35_bool == 0) goto Label_1341; // 0x53b JumpB
	return 8; // 0x53c Return
	
Label_1341:
	var_36_string = "Money"; // 0x53d PushS
	GetInvItemByName(var_28_int, var_36_string); // 0x53e Func
	var_37_int = 0; // 0x540 PushI
	AddItem(var_29_bool, var_28_int, var_37_int, var_26_int); // 0x541 Func
	return 8; // 0x543 Return
	
Label_1332:
	var_38_int = 0; // 0x534 PushI
	var_39_bool = var_20_int == var_38_int; // 0x535 Eq
	if(var_39_bool == 0) goto Label_1336; // 0x536 JumpB
	return 8; // 0x537 Return
}


func_1448(var_214_float, var_215_int)
{
	var_216_int = 1; // 0x5a9 PushI
	var_217_bool = var_215_int == var_216_int; // 0x5aa Eq
	if(var_217_bool == 0) goto Label_1454; // 0x5ab JumpB
	var_214_float = 30; // 0x5ac MovI
	return 0; // 0x5ad Return
	
Label_1454:
	var_214_float = 700; // 0x5ae MovI
	return 0; // 0x5af Return
}


func_1193(var_82_bool)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; // 0x4a9 PushV
	GetPosition(var_88_cvector); // 0x4aa ObjFunc
	GetPosition(var_89_cvector); // 0x4ac Func
	var_90_cvector = var_88_cvector - var_89_cvector; // 0x4ae Sub2
	var_92_float = GetByIndex(var_90_cvector, 0); // 0x4af PushE
	var_93_float = GetByIndex(var_90_cvector, 2); // 0x4b0 PushE
	Rotate(var_92_float, var_93_float, var_91_bool); // 0x4b1 Func
	var_82_bool = var_91_bool; // 0x4b3 Mov
	return 8; // 0x4b4 Return
}


func_170(var_38_bool)
{
	var_38_bool = 0; // 0xaa MovB
	return 0; // 0xab Return
}


func_809(var_0_bool, var_126_object)
{
	var_128_int = 5; // 0x329 PushI
	Sleep(var_128_int); // 0x32a Func
	var_126_object = var_0_bool; // 0x32c MovT
	return 0; // 0x32d Return
}


func_1064(var_30_bool)
{
	var_31_float = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x428 PushV
	rand(var_33_float); // 0x429 Func
	var_35_float = 0.3; // 0x42b PushF
	var_36_bool = var_33_float < var_35_float; // 0x42c LT
	if(var_36_bool == 0) goto Label_1080; // 0x42d JumpB
	var_37_string = "all"; // 0x42e PushS
	var_38_string = "hunt"; // 0x42f PushS
	PlayAnimation(var_37_string, var_38_string); // 0x430 Func
	WaitForAnimEnd(var_34_bool); // 0x432 Func
	var_39_bool = var_34_bool == 0; // 0x434 Not
	if(var_39_bool == 0) goto Label_1080; // 0x435 JumpB
	var_30_bool = 1; // 0x436 MovB
	return 4; // 0x437 Return
	
Label_1080:
	var_30_bool = 0; // 0x438 MovB
	return 4; // 0x439 Return
}


func_172(var_14_object)
{
	func_1348(); // 0xae Call
	var_55_object = Obj(); // 0xb0 PushV
	var_55_object = var_14_object; // 0xb1 Mov
	func_181(var_55_object); // 0xb2 Call
	return 0; // 0xb4 Return
}


func_1456(var_236_float, var_238_float)
{
	var_239_int = 10; // 0x5b1 PushI
	var_240_bool = var_238_float < var_239_int; // 0x5b2 LT
	if(var_240_bool == 0) goto Label_1463; // 0x5b3 JumpB
	var_236_float = 10; // 0x5b4 MovI
	return 0; // 0x5b5 Return
	
Label_1463:
	var_241_int = 1500; // 0x5b7 PushI
	var_242_bool = var_238_float > var_241_int; // 0x5b8 GT
	if(var_242_bool == 0) goto Label_1468; // 0x5b9 JumpB
	var_236_float = 1500; // 0x5ba MovI
	return 0; // 0x5bb Return
	
Label_1468:
	var_236_float = var_238_float; // 0x5bc Mov
	return 0; // 0x5bd Return
}


func_181(var_55_object)
{
	EventDisable(0); // 0xb6 EventDisable
	var_56_object = Obj(); // 0xb7 PushV
	var_56_object = var_55_object; // 0xb8 Mov
	func_204(var_56_object); // 0xb9 Call
	var_106_int = 50; // 0xbb PushI
	var_107_int = 40; // 0xbc PushI
	SetRTEnvelope(var_106_int, var_107_int); // 0xbd Func
	EventEnable(0); // 0xbf EventEnable
	
Label_192:
	Hold(); // 0xc0 Func
	goto Label_192; // 0xc2 Jump
}


func_1205(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x4b5 PushV
	var_38_bool = 0; // 0x4b6 PushV
	var_38_bool = 0; // 0x4b7 MovB
	var_39_int = 4; // 0x4b8 PushI
	var_40_bool = var_16_int != var_39_int; // 0x4b9 Neq
	if(var_40_bool == 0) goto Label_1215; // 0x4ba JumpB
	var_41_int = 5; // 0x4bb PushI
	var_42_bool = var_16_int != var_41_int; // 0x4bc Neq
	if(var_42_bool == 0) goto Label_1215; // 0x4bd JumpB
	var_38_bool = 1; // 0x4be MovB
	
Label_1215:
	if(var_38_bool == 0) goto Label_1234; // 0x4bf JumpB
	GetScene(var_28_object); // 0x4c0 Func
	GetPosition(var_30_cvector); // 0x4c2 Func
	GetEyesHeight(var_31_float); // 0x4c4 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x4c6 PushE
	var_44_int = 2; // 0x4c7 PushI
	var_45_float = var_31_float / var_44_int; // 0x4c8 Div
	var_43_float = var_43_float + var_45_float; // 0x4c9 Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x4ca PopE
	var_46_string = "scripted"; // 0x4cb PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x4cc PushVec
	var_48_string = "blood.xml"; // 0x4cd PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x4ce Func
	var_29_object = 0; // 0x4d0 SetNull
	var_28_object = 0; // 0x4d1 SetNull
	
Label_1234:
	var_49_bool = var_15_object == 0; // 0x4d2 NullEq
	if(var_49_bool == 0) goto Label_1237; // 0x4d3 JumpB
	return 20; // 0x4d4 Return
	
Label_1237:
	GetSecondaryAnimationType(var_32_int); // 0x4d5 Func
	var_50_int = 0; // 0x4d7 PushI
	var_51_bool = var_32_int < var_50_int; // 0x4d8 LT
	if(var_51_bool == 0) goto Label_1243; // 0x4d9 JumpB
	return 20; // 0x4da Return
	
Label_1243:
	GetPosition(var_33_cvector); // 0x4db ObjFunc
	GetPosition(var_34_cvector); // 0x4dd Func
	GetDirection(var_35_cvector); // 0x4df Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x4e1 Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x4e2 PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x4e3 PushE
	var_54_float = var_52_float * var_53_float; // 0x4e4 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x4e5 PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x4e6 PushE
	var_57_float = var_55_float * var_56_float; // 0x4e7 Mult
	var_58_int = var_54_float + var_57_float; // 0x4e8 Add
	var_59_int = 0; // 0x4e9 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x4ea GE
	if(var_60_bool == 0) goto Label_1262; // 0x4eb JumpB
	var_37_string = "fhit"; // 0x4ec MovS
	goto Label_1263; // 0x4ed Jump
	
Label_1263:
	var_61_string = "hit_react"; // 0x4ef PushS
	var_62_string = "1"; // 0x4f0 PushS
	var_63_int = var_37_string + var_62_string; // 0x4f1 Add
	var_64_string = "2"; // 0x4f2 PushS
	var_65_int = var_37_string + var_64_string; // 0x4f3 Add
	var_66_int = -10; // 0x4f4 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x4f5 Func
	return 20; // 0x4f7 Return
	
Label_1262:
	var_37_string = "bhit"; // 0x4ee MovS
}


func_1592()
{
	var_11_object = GlobalVars[0]; // 0x638 PushGE
	var_12_object = Obj(); // 0x639 PushV
	func_1288(var_12_object); // 0x63a Call
	var_11_object = var_12_object; // 0x63b Mov
	GlobalVars[0] = var_11_object; // 0x63d PopGE
	return 0; // 0x63e Return
}


func_1082()
{
	var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0; // 0x43a PushV
	
Label_1083:
	RandVec2D(var_26_float, var_27_float); // 0x43b Func
	Rotate(var_26_float, var_27_float, var_28_bool); // 0x43d Func
	var_29_bool = var_28_bool == 0; // 0x43f Not
	if(var_29_bool == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1102; // 0x441 Jump
	
Label_1102:
	return 6; // 0x44e Return
	
Label_1090:
	var_30_bool = 0; // 0x442 PushV
	func_1064(var_30_bool); // 0x443 Call
	if(var_30_bool == 0) goto Label_1095; // 0x445 JumpB
	goto Label_1102; // 0x446 Jump
	
Label_1095:
	var_40_int = 5; // 0x447 PushI
	Sleep(var_40_int, var_28_bool); // 0x448 Func
	var_41_bool = var_28_bool == 0; // 0x44a Not
	if(var_41_bool == 0) goto Label_1101; // 0x44b JumpB
	goto Label_1102; // 0x44c Jump
	
Label_1101:
	goto Label_1083; // 0x44d Jump
}


func_61()
{
	var_20_int = 90; // 0x3d PushI
	KillTimer(var_20_int); // 0x3e Func
	func_163(var_12_float, var_13_float); // 0x41 Call
	return 0; // 0x43 Return
}


func_1470(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x5bf PushV
	var_15_object = var_13_object; // 0x5c0 Mov
	func_1599(var_14_bool, var_15_object); // 0x5c1 Call
	var_12_bool = var_14_bool; // 0x5c2 Mov
	return 0; // 0x5c4 Return
}


func_1599(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; // 0x63f PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x640 PushV
	var_23_object = var_15_object; // 0x641 Mov
	func_1169(var_22_bool, var_23_object); // 0x642 Call
	var_56_bool = var_22_bool == 0; // 0x644 Not
	if(var_56_bool == 0) goto Label_1608; // 0x645 JumpB
	var_14_bool = 0; // 0x646 MovB
	return 6; // 0x647 Return
	
Label_1608:
	var_57_object = GlobalVars[0]; // 0x648 PushGE
	in(var_19_bool, var_15_object); // 0x649 ObjFunc
	var_58_bool = var_19_bool; // 0x64b Push
	if(var_58_bool == 0) goto Label_1615; // 0x64c JumpB
	var_14_bool = 1; // 0x64d MovB
	return 6; // 0x64e Return
	
Label_1615:
	var_59_bool = 0; var_60_object = Obj(); var_61_string = ""; // 0x64f PushV
	var_60_object = var_15_object; // 0x650 Mov
	var_61_string = "disease"; // 0x651 MovS
	func_1116(var_59_bool, var_60_object, var_61_string); // 0x652 Call
	var_62_bool = var_59_bool == 0; // 0x654 Not
	if(var_62_bool == 0) goto Label_1624; // 0x655 JumpB
	var_14_bool = 0; // 0x656 MovB
	return 6; // 0x657 Return
	
Label_1624:
	var_63_string = "disease"; // 0x658 PushS
	GetProperty(var_63_string, var_20_float); // 0x659 ObjFunc
	IsPlayerActor(var_15_object, var_21_bool); // 0x65b Func
	var_64_bool = var_21_bool; // 0x65d Push
	if(var_64_bool == 0) goto Label_1634; // 0x65e JumpB
	var_65_float = 0.0; // 0x65f PushF
	var_14_bool = var_20_float > var_65_float; // 0x660 GT2
	return 6; // 0x661 Return
	
Label_1634:
	var_66_float = 0.75; // 0x662 PushF
	var_14_bool = var_20_float > var_66_float; // 0x663 GT2
	return 6; // 0x664 Return
}


func_319(var_69_object)
{
	var_73_object = Obj(); var_74_bool = 0; // 0x140 PushV
	var_73_object = var_69_object; // 0x141 Mov
	var_74_bool = 0; // 0x142 MovB
	func_387(var_70_cvector, var_71_object, var_72_object, var_69_object, var_73_object, var_74_bool); // 0x143 Call
	return 0; // 0x145 Return
}


func_963(var_0_bool, var_94_int)
{
	SetSeeThreshold(var_0_bool); // 0x3c3 Func
	SetSeeFOV(var_94_int); // 0x3c5 Func
	Stop(); // 0x3c7 Func
	StopGroup0(); // 0x3c9 Func
	return 0; // 0x3cb Return
}


func_1348()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x544 PushV
	var_19_int = 0; // 0x545 PushI
	ClearSubContainer(var_19_int); // 0x546 Func
	var_20_int = 0; var_21_int = 0; // 0x548 PushV
	var_20_int = 500; // 0x549 MovI
	var_21_int = 1000; // 0x54a MovI
	func_1318(var_20_int, var_21_int); // 0x54b Call
	var_40_int = 4; // 0x54d PushI
	irand(var_17_int, var_40_int); // 0x54e Func
	var_41_int = 0; // 0x550 PushI
	var_42_bool = var_17_int != var_41_int; // 0x551 Neq
	if(var_42_bool == 0) goto Label_1370; // 0x552 JumpB
	var_43_int = 0; var_44_string = ""; // 0x553 PushV
	var_44_string = "rifle_ammo"; // 0x554 MovS
	func_1385(var_43_int, var_44_string); // 0x555 Call
	var_47_int = 0; // 0x557 PushI
	AddItem(var_18_bool, var_43_int, var_47_int, var_17_int); // 0x558 Func
	
Label_1370:
	var_48_int = 3; // 0x55a PushI
	irand(var_17_int, var_48_int); // 0x55b Func
	var_49_int = 0; // 0x55d PushI
	var_50_bool = var_17_int == var_49_int; // 0x55e Eq
	if(var_50_bool == 0) goto Label_1384; // 0x55f JumpB
	var_51_int = 0; var_52_string = ""; // 0x560 PushV
	var_52_string = "rusk"; // 0x561 MovS
	func_1385(var_51_int, var_52_string); // 0x562 Call
	var_53_int = 0; // 0x564 PushI
	var_54_int = 1; // 0x565 PushI
	AddItem(var_18_bool, var_51_int, var_53_int, var_54_int); // 0x566 Func
	
Label_1384:
	return 4; // 0x568 Return
}


func_1477(var_68_object)
{
	var_69_object = Obj(); // 0x5c6 PushV
	var_69_object = var_68_object; // 0x5c7 Mov
	TaskCall(2); // 0x5c8 TaskCall
	func_319(var_69_object); // 0x5c9 Call
	TaskReturn(); // 0x5ca TaskReturn
	return 0; // 0x5cc Return
}


func_843(var_0_bool, var_46_object)
{
	var_47_bool = 0; // 0x34c PushV
	var_47_bool = 0; // 0x34d MovB
	var_48_bool = var_0_bool == 0; // 0x34e NullEq
	if(var_48_bool == 0) goto Label_854; // 0x34f JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x350 PushV
	var_50_object = var_46_object; // 0x351 Mov
	func_1599(var_49_bool, var_50_object); // 0x352 Call
	if(var_49_bool == 0) goto Label_854; // 0x354 JumpB
	var_47_bool = 1; // 0x355 MovB
	
Label_854:
	if(var_47_bool == 0) goto Label_858; // 0x356 JumpB
	var_0_bool = var_46_object; // 0x357 TMov
	StopGroup0(); // 0x358 Func
	
Label_858:
	return 0; // 0x35a Return
}


func_204(var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_object = Obj(); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_object = Obj(); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); // 0xcc PushV
	var_77_bool = var_56_object == 0; // 0xcd NullEq
	if(var_77_bool == 0) goto Label_212; // 0xce JumpB
	var_78_string = ""; // 0xcf PushV
	var_78_string = "fdie"; // 0xd0 MovS
	func_291(var_78_string); // 0xd1 Call
	goto Label_290; // 0xd3 Jump
	
Label_290:
	return 20; // 0x122 Return
	
Label_212:
	GetPosition(var_67_cvector); // 0xd4 ObjFunc
	GetPosition(var_68_cvector); // 0xd6 Func
	GetDirection(var_69_cvector); // 0xd8 Func
	var_70_cvector = var_68_cvector - var_67_cvector; // 0xda Sub2
	var_81_float = GetByIndex(var_70_cvector, 0); // 0xdb PushE
	var_82_float = GetByIndex(var_69_cvector, 0); // 0xdc PushE
	var_83_float = var_81_float * var_82_float; // 0xdd Mult
	var_84_float = GetByIndex(var_70_cvector, 2); // 0xde PushE
	var_85_float = GetByIndex(var_69_cvector, 2); // 0xdf PushE
	var_86_float = var_84_float * var_85_float; // 0xe0 Mult
	var_87_int = var_83_float + var_86_float; // 0xe1 Add
	var_88_int = 0; // 0xe2 PushI
	var_89_bool = var_87_int >= var_88_int; // 0xe3 GE
	if(var_89_bool == 0) goto Label_231; // 0xe4 JumpB
	var_71_string = "fdie"; // 0xe5 MovS
	goto Label_232; // 0xe6 Jump
	
Label_232:
	RemoveRTEnvelope(); // 0xe8 Func
	SetDeathState(); // 0xea Func
	Stop(); // 0xec Func
	StopAsync(); // 0xee Func
	var_72_object = var_56_object; // 0xf0 Mov
	var_90_string = "GetScriptProperty"; // 0xf1 PushS
	var_91_int = 2; // 0xf2 PushI
	var_92_bool = IsFuncExist(var_56_object, var_90_string, var_91_int); // 0xf3 FuncExist
	if(var_92_bool == 0) goto Label_256; // 0xf4 JumpB
	var_93_string = "Owner"; // 0xf5 PushS
	HasScriptProperty(var_73_bool, var_93_string); // 0xf6 ObjFunc
	var_94_bool = var_73_bool; // 0xf8 Push
	if(var_94_bool == 0) goto Label_256; // 0xf9 JumpB
	var_95_string = "Owner"; // 0xfa PushS
	GetScriptProperty(var_72_object, var_95_string); // 0xfb ObjFunc
	var_96_bool = var_72_object == 0; // 0xfd NullEq
	if(var_96_bool == 0) goto Label_256; // 0xfe JumpB
	var_72_object = var_56_object; // 0xff Mov
	
Label_256:
	var_97_string = "@GetEyesHeight"; // 0x100 PushS
	var_98_int = 1; // 0x101 PushI
	var_99_bool = IsFuncExist(var_72_object, var_97_string, var_98_int); // 0x102 FuncExist
	if(var_99_bool == 0) goto Label_271; // 0x103 JumpB
	GetEyesHeight(var_75_float); // 0x104 ObjFunc
	var_76_cvector = CVector(0.0, 0.0, 0.0); // 0x106 MovV
	var_100_float = GetByIndex(var_76_cvector, 1); // 0x107 PushE
	var_100_float = var_75_float; // 0x108 Mov
	SetByIndex(var_76_cvector, 1) = var_100_float; // 0x109 PopE
	var_101_string = "head"; // 0x10a PushS
	LookAsync(var_56_object, var_101_string, var_76_cvector); // 0x10b Func
	var_74_bool = 1; // 0x10d MovB
	goto Label_272; // 0x10e Jump
	
Label_272:
	var_102_string = "all"; // 0x110 PushS
	PlayAnimation(var_102_string, var_71_string); // 0x111 Func
	WaitForAnimEnd(); // 0x113 Func
	var_103_bool = var_74_bool; // 0x115 Push
	if(var_103_bool == 0) goto Label_284; // 0x116 JumpB
	StopAsync(); // 0x117 Func
	var_104_string = "head"; // 0x119 PushS
	UnlookAsync(var_104_string); // 0x11a Func
	
Label_284:
	var_105_string = "all"; // 0x11c PushS
	LockAnimationEnd(var_105_string, var_71_string); // 0x11d Func
	RemoveEnvelope(); // 0x11f Func
	var_72_object = 0; // 0x121 SetNull
	
Label_271:
	var_74_bool = 0; // 0x10f MovB
	
Label_231:
	var_71_string = "bdie"; // 0xe7 MovS
}


func_1485(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); // 0x5ce PushV
	var_15_object = var_13_object; // 0x5cf Mov
	func_1599(var_14_bool, var_15_object); // 0x5d0 Call
	var_12_bool = var_14_bool; // 0x5d1 Mov
	return 0; // 0x5d3 Return
}


func_1103()
{
	Stop(); // 0x44f Func
	StopGroup0(); // 0x451 Func
	return 0; // 0x453 Return
}


func_1492(var_68_object)
{
	var_69_object = Obj(); // 0x5d5 PushV
	var_69_object = var_68_object; // 0x5d6 Mov
	TaskCall(4); // 0x5d7 TaskCall
	func_623(var_68_object, var_70_object, var_71_bool, var_69_object); // 0x5d8 Call
	TaskReturn(); // 0x5d9 TaskReturn
	ResetAAS(); // 0x5db Func
	return 0; // 0x5dd Return
}


func_981()
{
	var_21_int = 91; // 0x3d5 PushI
	var_22_int = 20; // 0x3d6 PushI
	SetTimer(var_21_int, var_22_int); // 0x3d7 Func
	func_1082(); // 0x3da Call
	return 0; // 0x3dc Return
}


func_1108(var_35_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x454 PushV
	GetPosition(var_40_cvector); // 0x455 Func
	GetPosition(var_41_cvector); // 0x457 ObjFunc
	var_42_cvector = var_41_cvector - var_40_cvector; // 0x459 Sub2
	var_35_float = var_42_cvector | var_42_cvector; // 0x45a Or2
	return 6; // 0x45b Return
}


func_859(var_0_bool, var_1_bool, var_2_cvector, var_86_object, var_87_object)
{
	var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0; // 0x35b PushV
	GetSeeThreshold(var_0_bool); // 0x35c Func
	GetSeeFOV(var_94_int); // 0x35e Func
	var_95_float = 1.5; // 0x360 PushF
	var_96_float = var_0_bool / var_95_float; // 0x361 Div
	SetSeeThreshold(var_96_float); // 0x362 Func
	var_2_cvector = var_87_object; // 0x364 TMov
	var_94_int = 0; // 0x365 MovI
	
Label_870:
	var_97_int = 3; // 0x366 PushI
	var_98_bool = var_94_int < var_97_int; // 0x367 LT
	if(var_98_bool == 0) goto Label_897; // 0x368 JumpB
	var_99_float = 1.8; // 0x369 PushF
	var_100_float = var_1_bool * var_99_float; // 0x36a Mult
	SetSeeFOV(var_100_float); // 0x36b Func
	var_101_string = "all"; // 0x36d PushS
	var_102_string = "hunt"; // 0x36e PushS
	PlayAnimation(var_101_string, var_102_string); // 0x36f Func
	WaitForAnimEnd(var_93_bool); // 0x371 Func
	SetSeeFOV(var_94_int); // 0x373 Func
	var_103_bool = var_93_bool == 0; // 0x375 Not
	if(var_103_bool == 0) goto Label_888; // 0x376 JumpB
	goto Label_897; // 0x377 Jump
	
Label_897:
	func_963(var_93_bool, var_94_int); // 0x382 Call
	var_104_bool = var_93_bool; // 0x384 Push
	if(var_104_bool == 0) goto Label_903; // 0x385 JumpB
	var_2_cvector = 0; // 0x386 SetNullT
	
Label_903:
	var_86_object = var_2_cvector; // 0x387 MovT
	return 4; // 0x388 Return
	
Label_888:
	var_105_int = 2; // 0x378 PushI
	Sleep(var_105_int, var_93_bool); // 0x379 Func
	var_106_bool = var_93_bool == 0; // 0x37b Not
	if(var_106_bool == 0) goto Label_894; // 0x37c JumpB
	goto Label_897; // 0x37d Jump
	
Label_894:
	var_107_int = 1; // 0x37e PushI
	var_94_int = var_94_int + var_107_int; // 0x37f Add2
	goto Label_870; // 0x380 Jump
}


func_1116(var_20_bool, var_21_object, var_22_string)
{
	var_23_bool = 0; var_24_bool = 0; // 0x45c PushV
	var_25_string = "HasProperty"; // 0x45d PushS
	var_26_int = 2; // 0x45e PushI
	var_27_bool = IsFuncExist(var_21_object, var_25_string, var_26_int); // 0x45f FuncExist
	var_28_bool = var_27_bool == 0; // 0x460 Not
	if(var_28_bool == 0) goto Label_1124; // 0x461 JumpB
	var_20_bool = 0; // 0x462 MovB
	return 2; // 0x463 Return
	
Label_1124:
	HasProperty(var_22_string, var_24_bool); // 0x464 ObjFunc
	var_20_bool = var_24_bool; // 0x466 Mov
	return 2; // 0x467 Return
}


func_1502(var_47_object)
{
	var_48_object = Obj(); // 0x5df PushV
	var_48_object = var_47_object; // 0x5e0 Mov
	func_1637(var_48_object); // 0x5e1 Call
	var_55_object = Obj(); // 0x5e3 PushV
	var_55_object = var_47_object; // 0x5e4 Mov
	TaskCall(4); // 0x5e5 TaskCall
	func_623(var_47_object, var_56_object, var_57_bool, var_55_object); // 0x5e6 Call
	TaskReturn(); // 0x5e7 TaskReturn
	ResetAAS(); // 0x5e9 Func
	return 0; // 0x5eb Return
}


func_99(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; // 0x63 PushV
	var_0_bool = 0; // 0x64 TMovB
	var_1_bool = 0; // 0x65 TMovB
	var_31_float = 0.5; // 0x66 PushF
	rand(var_24_float, var_31_float); // 0x67 Func
	Sleep(var_24_float); // 0x69 Func
	
Label_107:
	var_32_bool = var_0_bool == 0; // 0x6b Not
	if(var_32_bool == 0) goto Label_155; // 0x6c JumpB
	var_33_bool = var_1_bool == 0; // 0x6d Not
	if(var_33_bool == 0) goto Label_127; // 0x6e JumpB
	
Label_111:
	GetPosition(var_26_cvector); // 0x6f Func
	GetCameraFarDistance(var_27_float); // 0x71 Func
	var_34_float = 2.5; // 0x73 PushF
	var_27_float = var_27_float * var_34_float; // 0x74 Mult2
	GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, var_27_float, var_28_bool); // 0x75 Func
	var_35_bool = var_28_bool; // 0x77 Push
	if(var_35_bool == 0) goto Label_122; // 0x78 JumpB
	goto Label_126; // 0x79 Jump
	
Label_126:
	goto Label_128; // 0x7e Jump
	
Label_128:
	FindShiftedPathTo(var_29_object, var_25_cvector); // 0x80 Func
	var_36_bool = var_29_object != 0; // 0x82 NullNeq
	if(var_36_bool == 0) goto Label_150; // 0x83 JumpB
	RotatePath(var_29_object, var_30_bool); // 0x84 Func
	var_37_bool = var_30_bool; // 0x86 Push
	if(var_37_bool == 0) goto Label_149; // 0x87 JumpB
	var_38_bool = 0; // 0x88 PushV
	func_170(var_38_bool); // 0x89 Call
	FollowPath(var_29_object, var_38_bool, var_30_bool); // 0x8b Func
	var_29_object = 0; // 0x8d SetNull
	var_39_bool = var_30_bool; // 0x8e Push
	if(var_39_bool == 0) goto Label_149; // 0x8f JumpB
	TaskCall(3); // 0x91 TaskCall
	func_549(); // 0x92 Call
	TaskReturn(); // 0x93 TaskReturn
	
Label_149:
	goto Label_153; // 0x95 Jump
	
Label_153:
	var_29_object = 0; // 0x99 SetNull
	goto Label_107; // 0x9a Jump
	
Label_150:
	var_91_int = 1; // 0x96 PushI
	Sleep(var_91_int); // 0x97 Func
	
Label_122:
	var_92_int = 1; // 0x7a PushI
	Sleep(var_92_int); // 0x7b Func
	goto Label_111; // 0x7d Jump
	
Label_127:
	var_1_bool = 0; // 0x7f TMovB
	
Label_155:
	return 14; // 0x9b Return
}


func_485()
{
	var_12_int = 61; // 0x1e5 PushI
	KillTimer(var_12_int); // 0x1e6 Func
	Stop(); // 0x1e8 Func
	return 0; // 0x1ea Return
}


func_1637(var_48_object)
{
	var_49_bool = 0; var_50_bool = 0; // 0x665 PushV
	var_51_bool = var_48_object == 0; // 0x666 NullEq
	if(var_51_bool == 0) goto Label_1641; // 0x667 JumpB
	return 2; // 0x668 Return
	
Label_1641:
	var_52_object = GlobalVars[0]; // 0x669 PushGE
	in(var_50_bool, var_48_object); // 0x66a ObjFunc
	var_53_bool = var_50_bool == 0; // 0x66c Not
	if(var_53_bool == 0) goto Label_1649; // 0x66d JumpB
	var_54_object = GlobalVars[0]; // 0x66e PushGE
	add(var_48_object); // 0x66f ObjFunc
	
Label_1649:
	return 2; // 0x671 Return
}


func_1128(var_109_bool)
{
	var_111_bool = 0; var_112_bool = 0; // 0x468 PushV
	IsDead(var_112_bool); // 0x469 ObjFunc
	var_109_bool = var_112_bool; // 0x46b Mov
	return 2; // 0x46c Return
}


func_361(var_71_bool, var_72_object, var_73_object)
{
	var_74_bool = 0; var_75_bool = 0; // 0x169 PushV
	IsPlayerActor(var_72_object, var_75_bool); // 0x16a Func
	var_76_bool = var_75_bool; // 0x16c Push
	if(var_76_bool == 0) goto Label_368; // 0x16d JumpB
	var_71_bool = 0; // 0x16e MovB
	return 2; // 0x16f Return
	
Label_368:
	var_77_bool = 0; var_78_object = Obj(); // 0x170 PushV
	var_78_object = var_73_object; // 0x171 Mov
	func_1599(var_77_bool, var_78_object); // 0x172 Call
	var_79_bool = var_77_bool == 0; // 0x174 Not
	if(var_79_bool == 0) goto Label_376; // 0x175 JumpB
	var_71_bool = 0; // 0x176 MovB
	return 2; // 0x177 Return
	
Label_376:
	IsPlayerActor(var_73_object, var_75_bool); // 0x178 Func
	var_71_bool = var_75_bool; // 0x17a Mov
	return 2; // 0x17b Return
}


func_618()
{
	StopAnimation(); // 0x26a Func
	StopGroup0(); // 0x26c Func
	return 0; // 0x26e Return
}


func_1385(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0; // 0x569 PushV
	GetInvItemByName(var_46_int, var_44_string); // 0x56a Func
	var_43_int = var_46_int; // 0x56c Mov
	return 2; // 0x56d Return
}


func_1133(var_98_bool, var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj(); // 0x46d PushV
	var_104_bool = var_99_object == 0; // 0x46e NullEq
	if(var_104_bool == 0) goto Label_1138; // 0x46f JumpB
	var_98_bool = 0; // 0x470 MovB
	return 4; // 0x471 Return
	
Label_1138:
	var_105_bool = 0; // 0x472 PushV
	var_105_bool = 0; // 0x473 MovB
	var_106_string = "IsDead"; // 0x474 PushS
	var_107_int = 1; // 0x475 PushI
	var_108_bool = IsFuncExist(var_99_object, var_106_string, var_107_int); // 0x476 FuncExist
	if(var_108_bool == 0) goto Label_1150; // 0x477 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x478 PushV
	var_110_object = var_99_object; // 0x479 Mov
	func_1128(var_110_object); // 0x47a Call
	if(var_109_bool == 0) goto Label_1150; // 0x47c JumpB
	var_105_bool = 1; // 0x47d MovB
	
Label_1150:
	if(var_105_bool == 0) goto Label_1153; // 0x47e JumpB
	var_98_bool = 0; // 0x47f MovB
	return 4; // 0x480 Return
	
Label_1153:
	GetScene(var_102_object); // 0x481 Func
	var_113_bool = var_102_object == 0; // 0x483 NullEq
	if(var_113_bool == 0) goto Label_1159; // 0x484 JumpB
	var_98_bool = 0; // 0x485 MovB
	return 4; // 0x486 Return
	
Label_1159:
	GetScene(var_103_object); // 0x487 ObjFunc
	var_114_bool = var_102_object != var_103_object; // 0x489 Neq
	if(var_114_bool == 0) goto Label_1165; // 0x48a JumpB
	var_98_bool = 0; // 0x48b MovB
	return 4; // 0x48c Return
	
Label_1165:
	var_98_bool = 1; // 0x48d MovB
	return 4; // 0x48e Return
}


func_1390(var_165_float, var_166_cvector, var_167_cvector, var_168_cvector)
{
	var_169_float = 0; var_170_float = 0; var_171_float = 0; var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x56e PushV
	var_179_float = GetByIndex(var_168_cvector, 0); // 0x56f PushE
	var_180_float = GetByIndex(var_168_cvector, 0); // 0x570 PushE
	var_181_float = var_179_float * var_180_float; // 0x571 Mult
	var_182_float = GetByIndex(var_168_cvector, 2); // 0x572 PushE
	var_183_float = GetByIndex(var_168_cvector, 2); // 0x573 PushE
	var_184_float = var_182_float * var_183_float; // 0x574 Mult
	var_185_int = var_181_float + var_184_float; // 0x575 Add
	var_174_float = sqrt(var_185_int); // 0x576 Sqrt2
	var_186_float = GetByIndex(var_168_cvector, 1); // 0x577 PushE
	var_175_float = var_186_float / var_186_float; // 0x578 Div2
	var_187_float = GetByIndex(var_166_cvector, 0); // 0x579 PushE
	var_188_float = GetByIndex(var_167_cvector, 0); // 0x57a PushE
	var_189_int = var_187_float - var_188_float; // 0x57b Sub
	var_190_float = GetByIndex(var_166_cvector, 0); // 0x57c PushE
	var_191_float = GetByIndex(var_167_cvector, 0); // 0x57d PushE
	var_192_int = var_190_float - var_191_float; // 0x57e Sub
	var_193_float = var_189_int * var_192_int; // 0x57f Mult
	var_194_float = GetByIndex(var_166_cvector, 2); // 0x580 PushE
	var_195_float = GetByIndex(var_167_cvector, 2); // 0x581 PushE
	var_196_int = var_194_float - var_195_float; // 0x582 Sub
	var_197_float = GetByIndex(var_166_cvector, 2); // 0x583 PushE
	var_198_float = GetByIndex(var_167_cvector, 2); // 0x584 PushE
	var_199_int = var_197_float - var_198_float; // 0x585 Sub
	var_200_float = var_196_int * var_199_int; // 0x586 Mult
	var_201_int = var_193_float + var_200_float; // 0x587 Add
	var_176_float = sqrt(var_201_int); // 0x588 Sqrt2
	var_202_float = 500.0; // 0x589 PushF
	var_203_float = var_176_float * var_175_float; // 0x58a Mult
	var_204_float = GetByIndex(var_167_cvector, 1); // 0x58b PushE
	var_205_float = GetByIndex(var_166_cvector, 1); // 0x58c PushE
	var_206_int = var_204_float - var_205_float; // 0x58d Sub
	var_207_int = var_203_float - var_206_int; // 0x58e Sub
	var_177_float = var_202_float / var_202_float; // 0x58f Div2
	var_208_int = 0; // 0x590 PushI
	var_209_bool = var_177_float < var_208_int; // 0x591 LT
	if(var_209_bool == 0) goto Label_1429; // 0x592 JumpB
	var_165_float = -1; // 0x593 MovI
	return 10; // 0x594 Return
	
Label_1429:
	var_210_float = var_176_float / var_174_float; // 0x595 Div
	var_211_float = sqrt(var_177_float); // 0x596 Sqrt
	var_178_float = var_210_float * var_211_float; // 0x597 Mult2
	var_165_float = var_178_float; // 0x598 Mov
	return 10; // 0x599 Return
}


func_623(var_0_bool, var_1_bool, var_55_object, var_127_object)
{
	var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_int = 0; var_62_object = Obj(); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; var_67_float = 0; var_68_float = 0; var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_int = 0; var_74_object = Obj(); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_object = Obj(); var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_int = 0; // 0x26f PushV
	var_0_bool = var_55_object; // 0x270 TMov
	CanSee(var_81_int, var_55_object); // 0x271 Func
	var_82_bool = 0; var_83_object = Obj(); // 0x273 PushV
	var_83_object = var_55_object; // 0x274 Mov
	func_1193(var_83_object); // 0x275 Call
	var_94_bool = 0; var_95_object = Obj(); // 0x277 PushV
	var_95_object = var_55_object; // 0x278 Mov
	func_1169(var_94_bool, var_95_object); // 0x279 Call
	var_122_bool = var_94_bool == 0; // 0x27b Not
	if(var_122_bool == 0) goto Label_638; // 0x27c JumpB
	return 24; // 0x27d Return
	
Label_638:
	Face(var_55_object); // 0x27e Func
	IsPlayerActor(var_55_object, var_70_bool); // 0x280 Func
	
Label_642:
	var_123_bool = 0; var_124_object = Obj(); // 0x282 PushV
	var_124_object = var_0_bool; // 0x283 MovT
	func_1169(var_123_bool, var_124_object); // 0x284 Call
	if(var_123_bool == 0) goto Label_789; // 0x286 JumpB
	var_125_bool = var_1_bool == 0; // 0x287 Not
	if(var_125_bool == 0) goto Label_664; // 0x288 JumpB
	StopAsync(); // 0x289 Func
	var_126_object = Obj(); // 0x28b PushV
	TaskCall(5); // 0x28c TaskCall
	func_809(var_127_object, var_126_object); // 0x28d Call
	TaskReturn(); // 0x28e TaskReturn
	var_0_bool = var_127_object; // 0x28f TMov
	var_129_bool = var_0_bool == 0; // 0x291 NullEq
	if(var_129_bool == 0) goto Label_660; // 0x292 JumpB
	goto Label_789; // 0x293 Jump
	
Label_789:
	StopAsync(); // 0x315 Func
	return 24; // 0x317 Return
	
Label_660:
	CanSee(var_81_int, var_0_bool); // 0x294 Func
	Face(var_0_bool); // 0x296 Func
	
Label_664:
	ReportAttack(var_0_bool); // 0x298 Func
	GetPosition(var_71_cvector); // 0x29a Func
	GetPosition(var_72_cvector); // 0x29c TObjFunc
	var_130_int = 0; var_131_float = 0; // 0x29e PushV
	var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x29f PushV
	var_133_cvector = var_72_cvector; // 0x2a0 Mov
	var_134_cvector = var_71_cvector; // 0x2a1 Mov
	func_1283(var_132_float, var_133_cvector, var_134_cvector); // 0x2a2 Call
	var_131_float = var_132_float; // 0x2a3 Mov
	func_1434(var_130_int, var_131_float); // 0x2a5 Call
	var_73_int = var_130_int; // 0x2a6 Mov
	var_142_string = "all"; // 0x2a8 PushS
	var_143_string = "attack_begin"; // 0x2a9 PushS
	var_144_int = var_143_string + var_73_int; // 0x2aa Add
	PlayAnimation(var_142_string, var_144_int); // 0x2ab Func
	WaitForAnimEnd(); // 0x2ad Func
	var_145_bool = var_0_bool == 0; // 0x2af NullEq
	if(var_145_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_789; // 0x2b1 Jump
	
Label_690:
	var_146_string = "all"; // 0x2b2 PushS
	var_147_string = "attack_end"; // 0x2b3 PushS
	var_148_int = var_147_string + var_73_int; // 0x2b4 Add
	PlayAnimation(var_146_string, var_148_int); // 0x2b5 Func
	GetScene(var_74_object); // 0x2b7 Func
	var_149_string = "attack"; // 0x2b9 PushS
	var_150_int = var_149_string + var_73_int; // 0x2ba Add
	GetGeometryLocator(var_150_int, var_76_bool, var_71_cvector, var_75_cvector); // 0x2bb Func
	var_151_string = "scripted"; // 0x2bd PushS
	var_152_cvector = CVector(0.0, 0.0, 1.0); // 0x2be PushVec
	var_153_string = "grenade.xml"; // 0x2bf PushS
	AddActorByType(var_77_object, var_151_string, var_74_object, var_71_cvector, var_152_cvector, var_153_string); // 0x2c0 Func
	var_154_string = "Owner"; // 0x2c2 PushS
	var_155_object = Obj(); // 0x2c3 PushV
	func_1277(var_155_object); // 0x2c4 Call
	SetScriptProperty(var_154_string, var_155_object); // 0x2c6 ObjFunc
	GetPosition(var_72_cvector); // 0x2c8 TObjFunc
	var_158_bool = var_70_bool; // 0x2ca Push
	if(var_158_bool == 0) goto Label_729; // 0x2cb JumpB
	var_70_bool = 0; // 0x2cc MovB
	RandVec2D(var_78_float, var_79_float); // 0x2cd Func
	var_159_float = GetByIndex(var_72_cvector, 0); // 0x2cf PushE
	var_160_int = 500; // 0x2d0 PushI
	var_161_float = var_78_float * var_160_int; // 0x2d1 Mult
	var_159_float = var_159_float + var_161_float; // 0x2d2 Add2
	SetByIndex(var_72_cvector, 0) = var_159_float; // 0x2d3 PopE
	var_162_float = GetByIndex(var_72_cvector, 2); // 0x2d4 PushE
	var_163_int = 500; // 0x2d5 PushI
	var_164_float = var_79_float * var_163_int; // 0x2d6 Mult
	var_162_float = var_162_float + var_164_float; // 0x2d7 Add2
	SetByIndex(var_72_cvector, 2) = var_162_float; // 0x2d8 PopE
	
Label_729:
	var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); // 0x2d9 PushV
	var_166_cvector = var_71_cvector; // 0x2da Mov
	var_167_cvector = var_72_cvector; // 0x2db Mov
	var_168_cvector = var_75_cvector; // 0x2dc Mov
	func_1390(var_165_float, var_166_cvector, var_167_cvector, var_168_cvector); // 0x2dd Call
	var_80_float = var_165_float; // 0x2de Mov
	var_212_int = 0; // 0x2e0 PushI
	var_213_bool = var_80_float < var_212_int; // 0x2e1 LT
	if(var_213_bool == 0) goto Label_745; // 0x2e2 JumpB
	var_214_float = 0; var_215_int = 0; // 0x2e3 PushV
	var_215_int = var_73_int; // 0x2e4 Mov
	func_1448(var_214_float, var_215_int); // 0x2e5 Call
	var_80_float = var_214_float; // 0x2e6 Mov
	goto Label_751; // 0x2e8 Jump
	
Label_751:
	var_218_string = "StartVelocity"; // 0x2ef PushS
	var_219_float = var_75_cvector * var_80_float; // 0x2f0 Mult
	SetScriptProperty(var_218_string, var_219_float); // 0x2f1 ObjFunc
	var_220_string = "DamageAmount"; // 0x2f3 PushS
	var_221_float = 0.8; // 0x2f4 PushF
	SetScriptProperty(var_220_string, var_221_float); // 0x2f5 ObjFunc
	var_222_string = "DamageType"; // 0x2f7 PushS
	var_223_int = 1; // 0x2f8 PushI
	SetScriptProperty(var_222_string, var_223_int); // 0x2f9 ObjFunc
	WaitForAnimEnd(); // 0x2fb Func
	var_224_int = 1; // 0x2fd PushI
	var_225_bool = var_73_int == var_224_int; // 0x2fe Eq
	if(var_225_bool == 0) goto Label_786; // 0x2ff JumpB
	var_226_int = 2; // 0x300 PushI
	irand(var_81_int, var_226_int); // 0x301 Func
	var_227_string = "scream"; // 0x303 PushS
	var_228_int = 1; // 0x304 PushI
	var_229_int = var_81_int + var_228_int; // 0x305 Add
	var_230_int = var_227_string + var_229_int; // 0x306 Add
	Speak(var_230_int); // 0x307 Func
	var_231_string = "all"; // 0x309 PushS
	var_232_string = "scream"; // 0x30a PushS
	var_233_int = 1; // 0x30b PushI
	var_234_int = var_81_int + var_233_int; // 0x30c Add
	var_235_int = var_232_string + var_234_int; // 0x30d Add
	PlayAnimation(var_231_string, var_235_int); // 0x30e Func
	WaitForAnimEnd(); // 0x310 Func
	
Label_786:
	var_77_object = 0; // 0x312 SetNull
	var_74_object = 0; // 0x313 SetNull
	goto Label_642; // 0x314 Jump
	
Label_745:
	var_236_float = 0; var_237_int = 0; var_238_float = 0; // 0x2e9 PushV
	var_237_int = var_73_int; // 0x2ea Mov
	var_238_float = var_80_float; // 0x2eb Mov
	func_1456(var_237_int, var_238_float); // 0x2ec Call
	var_80_float = var_236_float; // 0x2ed Mov
}


func_1650()
{
	return 0; // 0x673 Return
}


func_1524(var_12_object)
{
	var_13_object = Obj(); // 0x5f5 PushV
	var_13_object = var_12_object; // 0x5f6 Mov
	func_1650(); // 0x5f7 Call
	var_14_object = Obj(); // 0x5f9 PushV
	var_14_object = var_12_object; // 0x5fa Mov
	TaskCall(1); // 0x5fb TaskCall
	func_172(var_14_object); // 0x5fc Call
	TaskReturn(); // 0x5fd TaskReturn
	return 0; // 0x5ff Return
}


func_1272(var_54_bool)
{
	var_55_bool = 0; var_56_bool = 0; // 0x4f8 PushV
	IsLoaded(var_56_bool); // 0x4f9 Func
	var_54_bool = var_56_bool; // 0x4fb Mov
	return 2; // 0x4fc Return
}


func_380(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x17d PushV
	var_16_object = var_14_object; // 0x17e Mov
	func_1599(var_15_bool, var_16_object); // 0x17f Call
	var_13_bool = var_15_bool; // 0x180 Mov
	return 0; // 0x182 Return
}


func_1277(var_155_object)
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x4fd PushV
	self(var_157_object); // 0x4fe Func
	var_155_object = var_157_object; // 0x500 Mov
	return 2; // 0x501 Return
}


