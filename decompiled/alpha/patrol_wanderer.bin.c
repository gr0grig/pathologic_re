task_0_event_1(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0xf PushV
	var_14_object = var_12_int; // 0x10 Mov
	func_1905(var_13_bool, var_14_object); // 0x11 Call
	if(var_13_bool == 0) goto Label_27; // 0x13 JumpB
	func_69(var_11_bool, var_12_int); // 0x15 Call
	var_65_object = Obj(); // 0x17 PushV
	var_65_object = var_12_int; // 0x18 Mov
	func_1912(var_65_object); // 0x19 Call
	
Label_27:
	return 0; // 0x1b Return
}


	task_0_event_17(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj(); // 0x1d PushV
	var_49_object = var_47_object; // 0x1e Mov
	func_1447(var_48_bool, var_49_object); // 0x1f Call
	var_76_bool = var_48_bool == 0; // 0x21 Not
	if(var_76_bool == 0) goto Label_40; // 0x22 JumpB
	var_77_object = Obj(); // 0x23 PushV
	var_77_object = var_47_object; // 0x24 Mov
	func_1923(var_77_object); // 0x25 Call
	return 0; // 0x27 Return
	
Label_40:
	func_69(var_13_int, var_47_object); // 0x29 Call
	var_85_object = Obj(); // 0x2b PushV
	var_85_object = var_47_object; // 0x2c Mov
	func_1936(var_85_object); // 0x2d Call
	return 0; // 0x2f Return
	}


task_0_event_7(var_0_object, var_1_float, var_2_float, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_int = 100; // 0x31 PushI
	var_14_bool = var_12_int != var_13_int; // 0x32 Neq
	if(var_14_bool == 0) goto Label_53; // 0x33 JumpB
	return 0; // 0x34 Return
	
Label_53:
	func_69(var_11_bool, var_12_int); // 0x36 Call
	return 0; // 0x38 Return
}


task_0_event_30(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x3a PushV
	var_15_object = var_12_bool; // 0x3b Mov
	var_16_object = var_13_int; // 0x3c Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0x3d Call
	if(var_14_bool == 0) goto Label_68; // 0x3f JumpB
	var_47_object = Obj(); // 0x40 PushV
	var_47_object = var_12_bool; // 0x41 Mov
	func_28(); // 0x42 Call
	
Label_68:
	return 0; // 0x44 Return
}


task_0_event_41(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_69(var_11_bool, var_12_int); // 0x4f Call
	var_14_object = Obj(); // 0x51 PushV
	var_14_object = var_12_int; // 0x52 Mov
	func_1980(); // 0x53 Call
	return 0; // 0x55 Return
}


task_0_event_3(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; // 0x81 PushV
	var_13_bool = 0; // 0x82 MovB
	var_14_bool = var_12_int == var_0_object; // 0x83 Eq
	if(var_14_bool == 0) goto Label_139; // 0x84 JumpB
	var_15_bool = 0; var_16_object = Obj(); // 0x85 PushV
	var_16_object = var_12_int; // 0x86 Mov
	func_1884(var_15_bool, var_16_object); // 0x87 Call
	if(var_15_bool == 0) goto Label_139; // 0x89 JumpB
	var_13_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_13_bool == 0) goto Label_146; // 0x8b JumpB
	Face(var_0_object); // 0x8c Func
	var_69_int = 100; // 0x8e PushI
	var_70_int = 15; // 0x8f PushI
	SetTimer(var_69_int, var_70_int); // 0x90 Func
	
Label_146:
	return 0; // 0x92 Return
}


task_0_event_4(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = var_12_int == var_0_object; // 0x94 Eq
	if(var_13_bool == 0) goto Label_155; // 0x95 JumpB
	StopAsync(); // 0x96 Func
	var_14_int = 100; // 0x98 PushI
	KillTimer(var_14_int); // 0x99 Func
	
Label_155:
	return 0; // 0x9b Return
}


task_1_event_1(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0xb0 PushV
	var_14_object = var_12_int; // 0xb1 Mov
	func_1905(var_13_bool, var_14_object); // 0xb2 Call
	if(var_13_bool == 0) goto Label_188; // 0xb4 JumpB
	func_299(var_11_bool, var_12_int); // 0xb6 Call
	var_64_object = Obj(); // 0xb8 PushV
	var_64_object = var_12_int; // 0xb9 Mov
	func_1912(var_64_object); // 0xba Call
	
Label_188:
	return 0; // 0xbc Return
}


task_1_event_3(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0xbe PushV
	var_14_object = var_12_int; // 0xbf Mov
	func_1884(var_13_bool, var_14_object); // 0xc0 Call
	if(var_13_bool == 0) goto Label_202; // 0xc2 JumpB
	func_299(var_11_bool, var_12_int); // 0xc4 Call
	var_67_object = Obj(); // 0xc6 PushV
	var_67_object = var_12_int; // 0xc7 Mov
	func_1897(var_67_object); // 0xc8 Call
	
Label_202:
	return 0; // 0xca Return
}


	task_1_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj(); // 0xcc PushV
	var_49_object = var_47_object; // 0xcd Mov
	func_1447(var_48_bool, var_49_object); // 0xce Call
	var_76_bool = var_48_bool == 0; // 0xd0 Not
	if(var_76_bool == 0) goto Label_215; // 0xd1 JumpB
	var_77_object = Obj(); // 0xd2 PushV
	var_77_object = var_47_object; // 0xd3 Mov
	func_1923(var_77_object); // 0xd4 Call
	return 0; // 0xd6 Return
	
Label_215:
	func_299(var_13_int, var_47_object); // 0xd8 Call
	var_84_object = Obj(); // 0xda PushV
	var_84_object = var_47_object; // 0xdb Mov
	func_1936(var_84_object); // 0xdc Call
	return 0; // 0xde Return
	}


task_1_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0xe0 PushV
	var_15_object = var_12_bool; // 0xe1 Mov
	var_16_object = var_13_int; // 0xe2 Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0xe3 Call
	if(var_14_bool == 0) goto Label_234; // 0xe5 JumpB
	var_47_object = Obj(); // 0xe6 PushV
	var_47_object = var_12_bool; // 0xe7 Mov
	func_203(); // 0xe8 Call
	
Label_234:
	return 0; // 0xea Return
}


task_1_event_10(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	RequestClearPath(var_12_int); // 0x125 Func
	return 0; // 0x127 Return
}


task_1_event_28(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int)
{
	Stop(); // 0x128 Func
	return 0; // 0x12a Return
}


task_1_event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_299(var_11_bool, var_12_int); // 0x134 Call
	var_13_object = Obj(); // 0x136 PushV
	var_13_object = var_12_int; // 0x137 Mov
	func_1980(); // 0x138 Call
	return 0; // 0x13a Return
}


task_2_event_1(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x13e PushV
	var_14_object = var_12_int; // 0x13f Mov
	func_1905(var_13_bool, var_14_object); // 0x140 Call
	if(var_13_bool == 0) goto Label_330; // 0x142 JumpB
	func_446(); // 0x144 Call
	var_64_object = Obj(); // 0x146 PushV
	var_64_object = var_12_int; // 0x147 Mov
	func_1912(var_64_object); // 0x148 Call
	
Label_330:
	return 0; // 0x14a Return
}


task_2_event_3(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x14c PushV
	var_14_object = var_12_int; // 0x14d Mov
	func_1884(var_13_bool, var_14_object); // 0x14e Call
	if(var_13_bool == 0) goto Label_344; // 0x150 JumpB
	func_446(); // 0x152 Call
	var_67_object = Obj(); // 0x154 PushV
	var_67_object = var_12_int; // 0x155 Mov
	func_1897(var_67_object); // 0x156 Call
	
Label_344:
	return 0; // 0x158 Return
}


	task_2_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj(); // 0x15a PushV
	var_49_object = var_47_object; // 0x15b Mov
	func_1447(var_48_bool, var_49_object); // 0x15c Call
	var_76_bool = var_48_bool == 0; // 0x15e Not
	if(var_76_bool == 0) goto Label_357; // 0x15f JumpB
	var_77_object = Obj(); // 0x160 PushV
	var_77_object = var_47_object; // 0x161 Mov
	func_1923(var_77_object); // 0x162 Call
	return 0; // 0x164 Return
	
Label_357:
	func_446(); // 0x166 Call
	var_84_object = Obj(); // 0x168 PushV
	var_84_object = var_47_object; // 0x169 Mov
	func_1936(var_84_object); // 0x16a Call
	return 0; // 0x16c Return
	}


task_2_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x16e PushV
	var_15_object = var_12_bool; // 0x16f Mov
	var_16_object = var_13_int; // 0x170 Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0x171 Call
	if(var_14_bool == 0) goto Label_376; // 0x173 JumpB
	var_47_object = Obj(); // 0x174 PushV
	var_47_object = var_12_bool; // 0x175 Mov
	func_345(); // 0x176 Call
	
Label_376:
	return 0; // 0x178 Return
}


task_3_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_object = Obj(); // 0x1c4 PushV
	var_13_object = var_12_int; // 0x1c5 Mov
	func_1923(var_13_object); // 0x1c6 Call
	return 0; // 0x1c8 Return
}


task_3_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x1ca PushV
	var_15_object = var_12_bool; // 0x1cb Mov
	var_16_object = var_13_int; // 0x1cc Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0x1cd Call
	return 0; // 0x1cf Return
}


task_3_event_7(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_int = 0; // 0x237 PushI
	var_14_bool = var_12_int != var_13_int; // 0x238 Neq
	if(var_14_bool == 0) goto Label_571; // 0x239 JumpB
	return 0; // 0x23a Return
	
Label_571:
	var_15_bool = 0; var_16_object = Obj(); // 0x23b PushV
	var_16_object = var_1_float; // 0x23c MovT
	func_604(var_15_bool, var_16_object); // 0x23d Call
	var_51_bool = var_15_bool == 0; // 0x23f Not
	if(var_51_bool == 0) goto Label_578; // 0x240 JumpB
	var_0_object = 1; // 0x241 TMovB
	
Label_578:
	var_52_int = 0; // 0x242 PushI
	KillTimer(var_52_int); // 0x243 Func
	Stop(); // 0x245 Func
	return 0; // 0x247 Return
}


task_3_event_10(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	RequestClearPath(var_12_int); // 0x249 Func
	return 0; // 0x24b Return
}


task_3_event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_588(var_12_int); // 0x255 Call
	var_14_object = Obj(); // 0x257 PushV
	var_14_object = var_12_int; // 0x258 Mov
	func_1980(); // 0x259 Call
	return 0; // 0x25b Return
}


task_4_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_object = Obj(); // 0x276 PushV
	var_13_object = var_12_object; // 0x277 Mov
	func_1923(var_13_object); // 0x278 Call
	return 0; // 0x27a Return
}


task_4_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x27c PushV
	var_15_object = var_12_object; // 0x27d Mov
	var_16_object = var_13_object; // 0x27e Mov
	func_1986(var_14_bool, var_15_object, var_16_object); // 0x27f Call
	return 0; // 0x281 Return
}


task_5_event_0(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x491 PushV
	IsOverrideActive(var_14_bool); // 0x492 Func
	var_15_bool = var_14_bool == 0; // 0x494 Not
	if(var_15_bool == 0) goto Label_1176; // 0x495 JumpB
	WorkWithCorpse(var_12_object); // 0x496 Func
	
Label_1176:
	return 2; // 0x498 Return
}


task_5_event_22(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_float, var_15_float)
{
	return 0; // 0x507 Return
}


task_5_event_16(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_string)
{
	return 0; // 0x509 Return
}


task_5_event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	return 0; // 0x50b Return
}


event_22(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x7a8 PushV
	var_16_object = var_12_object; // 0x7a9 Mov
	var_17_int = var_13_int; // 0x7aa Mov
	var_18_float = var_14_float; // 0x7ab Mov
	func_1471(var_17_int, var_18_float); // 0x7ac Call
	return 0; // 0x7ae Return
}


event_16(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x7af PushV
	var_16_string = "health"; // 0x7b0 PushS
	var_17_bool = var_13_string == var_16_string; // 0x7b1 Eq
	if(var_17_bool == 0) goto Label_1979; // 0x7b2 JumpB
	var_18_string = "health"; // 0x7b3 PushS
	GetProperty(var_18_string, var_15_float); // 0x7b4 Func
	var_19_int = 0; // 0x7b6 PushI
	var_20_bool = var_15_float <= var_19_int; // 0x7b7 LE
	if(var_20_bool == 0) goto Label_1979; // 0x7b8 JumpB
	SignalDeath(var_12_object); // 0x7b9 Func
	
Label_1979:
	return 2; // 0x7bb Return
}


event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_object = Obj(); // 0x7bd PushV
	var_13_object = var_12_object; // 0x7be Mov
	func_1951(var_13_object); // 0x7bf Call
	return 0; // 0x7c1 Return
}


main(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int)
{
	func_1846(); // 0xa8 Call
	
Label_170:
	func_235(var_10_bool, var_11_int); // 0xab Call
	goto Label_170; // 0xad Jump
}


func_0(var_1_float, var_68_object, var_71_float)
{
	GetSeeThreshold(var_68_object); // 0x1 Func
	GetSeeFOV(var_71_float); // 0x3 Func
	var_72_float = 1.5; // 0x5 PushF
	var_73_float = var_1_float / var_72_float; // 0x6 Div
	SetSeeThreshold(var_73_float); // 0x7 Func
	var_74_object = Obj(); // 0x9 PushV
	var_74_object = var_68_object; // 0xa Mov
	func_101(var_68_object, var_74_object); // 0xb Call
	return 0; // 0xd Return
}


func_1538()
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x602 PushV
	GetPosition(var_210_cvector); // 0x603 ObjFunc
	GetPosition(var_211_cvector); // 0x605 Func
	var_212_cvector = var_210_cvector - var_211_cvector; // 0x607 Sub2
	var_213_float = GetByIndex(var_212_cvector, 0); // 0x608 PushE
	var_214_float = GetByIndex(var_212_cvector, 2); // 0x609 PushE
	RotateAsync(var_213_float, var_214_float); // 0x60a Func
	return 6; // 0x60c Return
}


func_1923(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x783 PushV
	var_16_bool = var_13_object == 0; // 0x784 NullEq
	if(var_16_bool == 0) goto Label_1927; // 0x785 JumpB
	return 2; // 0x786 Return
	
Label_1927:
	var_17_object = GlobalVars[0]; // 0x787 PushGE
	in(var_15_bool, var_13_object); // 0x788 ObjFunc
	var_18_bool = var_15_bool == 0; // 0x78a Not
	if(var_18_bool == 0) goto Label_1935; // 0x78b JumpB
	var_19_object = GlobalVars[0]; // 0x78c PushGE
	add(var_13_object); // 0x78d ObjFunc
	
Label_1935:
	return 2; // 0x78f Return
}


func_1154(var_173_object)
{
	EventDisable(0); // 0x483 EventDisable
	var_174_object = Obj(); // 0x484 PushV
	var_174_object = var_173_object; // 0x485 Mov
	func_1177(var_174_object); // 0x486 Call
	var_224_int = 50; // 0x488 PushI
	var_225_int = 40; // 0x489 PushI
	SetRTEnvelope(var_224_int, var_225_int); // 0x48a Func
	EventEnable(0); // 0x48c EventEnable
	
Label_1165:
	Hold(); // 0x48d Func
	goto Label_1165; // 0x48f Jump
}


func_642(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_93_object, var_94_bool, var_95_float, var_150_bool)
{
	var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; var_115_float = 0; // 0x282 PushV
	var_1_float = 0; // 0x283 TMovI
	
Label_644:
	var_116_string = "all"; // 0x284 PushS
	var_117_string = "attack_begin"; // 0x285 PushS
	var_118_int = 1; // 0x286 PushI
	var_119_int = var_1_float + var_118_int; // 0x287 Add
	var_120_int = var_117_string + var_119_int; // 0x288 Add
	HasAnimation(var_106_bool, var_116_string, var_120_int); // 0x289 Func
	var_121_bool = var_106_bool == 0; // 0x28b Not
	if(var_121_bool == 0) goto Label_654; // 0x28c JumpB
	goto Label_657; // 0x28d Jump
	
Label_657:
	var_2_float = 0; // 0x291 TMovI
	
Label_658:
	var_122_string = "attack"; // 0x292 PushS
	var_123_int = 1; // 0x293 PushI
	var_124_int = var_2_float + var_123_int; // 0x294 Add
	var_125_int = var_122_string + var_124_int; // 0x295 Add
	IsExisting3DSound(var_107_bool, var_125_int); // 0x296 Func
	var_126_bool = var_107_bool == 0; // 0x298 Not
	if(var_126_bool == 0) goto Label_667; // 0x299 JumpB
	goto Label_670; // 0x29a Jump
	
Label_670:
	var_4_bool = 0; // 0x29e TMovI
	var_127_string = "@GetAttackDistance"; // 0x29f PushS
	var_128_int = 1; // 0x2a0 PushI
	var_129_bool = IsFuncExist(var_93_object, var_127_string, var_128_int); // 0x2a1 FuncExist
	if(var_129_bool == 0) goto Label_680; // 0x2a2 JumpB
	GetAttackDistance(var_108_float); // 0x2a3 ObjFunc
	var_130_int = 50; // 0x2a5 PushI
	var_108_float = var_108_float + var_130_int; // 0x2a6 Add2
	goto Label_681; // 0x2a7 Jump
	
Label_681:
	var_131_int = 150; // 0x2a9 PushI
	var_132_bool = var_108_float >= var_131_int; // 0x2aa GE
	if(var_132_bool == 0) goto Label_685; // 0x2ab JumpB
	var_108_float = 150; // 0x2ac MovI
	
Label_685:
	var_3_bool = 0; // 0x2ad TMovB
	var_0_object = var_93_object; // 0x2ae TMov
	IsPlayerActor(var_0_object, var_111_bool); // 0x2af Func
	var_133_bool = var_94_bool; // 0x2b1 Push
	if(var_133_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_112_bool = 0; // 0x2b3 MovB
	goto Label_694; // 0x2b4 Jump
	
Label_694:
	var_134_bool = 0; // 0x2b6 PushV
	var_134_bool = 0; // 0x2b7 MovB
	var_135_bool = 0; var_136_object = Obj(); // 0x2b8 PushV
	var_136_object = var_0_object; // 0x2b9 MovT
	func_1447(var_135_bool, var_136_object); // 0x2ba Call
	if(var_135_bool == 0) goto Label_704; // 0x2bc JumpB
	var_137_bool = var_3_bool == 0; // 0x2bd Not
	if(var_137_bool == 0) goto Label_704; // 0x2be JumpB
	var_134_bool = 1; // 0x2bf MovB
	
Label_704:
	if(var_134_bool == 0) goto Label_830; // 0x2c0 JumpB
	GetPFPosition(var_109_cvector); // 0x2c1 TObjFunc
	GetPFPosition(var_110_cvector); // 0x2c3 Func
	var_113_cvector = var_109_cvector - var_110_cvector; // 0x2c5 Sub2
	var_114_float = var_113_cvector | var_113_cvector; // 0x2c6 Or2
	var_138_float = 300.0; // 0x2c7 PushF
	var_139_int = var_138_float + var_108_float; // 0x2c8 Add
	var_140_float = 300.0; // 0x2c9 PushF
	var_141_int = var_140_float + var_108_float; // 0x2ca Add
	var_142_float = var_139_int * var_141_int; // 0x2cb Mult
	var_143_bool = var_114_float >= var_142_float; // 0x2cc GE
	if(var_143_bool == 0) goto Label_733; // 0x2cd JumpB
	var_144_bool = 0; var_145_object = Obj(); var_146_float = 0; var_147_float = 0; var_148_bool = 0; var_149_bool = 0; // 0x2ce PushV
	var_145_object = var_0_object; // 0x2cf MovT
	var_146_float = var_108_float; // 0x2d0 Mov
	var_147_float = 3000.0; // 0x2d1 MovF
	var_148_bool = 1; // 0x2d2 MovB
	var_149_bool = 0; // 0x2d3 MovB
	TaskCall(3); // 0x2d4 TaskCall
	func_464(var_150_bool, var_151_object, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool); // 0x2d5 Call
	TaskReturn(); // 0x2d6 TaskReturn
	var_197_bool = var_150_bool == 0; // 0x2d8 Not
	if(var_197_bool == 0) goto Label_731; // 0x2d9 JumpB
	goto Label_830; // 0x2da Jump
	
Label_830:
	WaitForAnimEnd(); // 0x33e Func
	var_198_bool = var_3_bool; // 0x340 PushT
	if(var_198_bool == 0) goto Label_835; // 0x341 JumpB
	return 20; // 0x342 Return
	
Label_835:
	var_199_string = "all"; // 0x343 PushS
	var_200_string = "attack_off"; // 0x344 PushS
	PlayAnimation(var_199_string, var_200_string); // 0x345 Func
	WaitForAnimEnd(); // 0x347 Func
	var_201_bool = var_111_bool; // 0x349 Push
	if(var_201_bool == 0) goto Label_846; // 0x34a JumpB
	var_202_float = 2.0; // 0x34b PushF
	Sleep(var_202_float); // 0x34c Func
	
Label_846:
	return 20; // 0x34e Return
	
Label_731:
	var_112_bool = 0; // 0x2db MovB
	goto Label_829; // 0x2dc Jump
	
Label_829:
	goto Label_694; // 0x33d Jump
	
Label_733:
	var_203_float = var_95_float * var_95_float; // 0x2dd Mult
	var_204_bool = var_114_float >= var_203_float; // 0x2de GE
	if(var_204_bool == 0) goto Label_821; // 0x2df JumpB
	var_205_bool = var_112_bool == 0; // 0x2e0 Not
	if(var_205_bool == 0) goto Label_751; // 0x2e1 JumpB
	var_206_object = Obj(); // 0x2e2 PushV
	var_206_object = var_0_object; // 0x2e3 MovT
	func_1538(); // 0x2e4 Call
	var_215_string = "all"; // 0x2e6 PushS
	var_216_string = "attack_on"; // 0x2e7 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x2e8 Func
	WaitForAnimEnd(); // 0x2ea Func
	StopAsync(); // 0x2ec Func
	var_112_bool = 1; // 0x2ee MovB
	
Label_751:
	rand(var_115_float); // 0x2ef Func
	var_217_bool = 0; // 0x2f1 PushV
	var_217_bool = 1; // 0x2f2 MovB
	var_218_float = 0.6; // 0x2f3 PushF
	var_219_bool = var_115_float < var_218_float; // 0x2f4 LT
	if(var_219_bool == 0) goto Label_763; // 0x2f5 JumpB
	var_220_bool = 0; // 0x2f6 PushV
	func_1082(var_217_bool, var_220_bool); // 0x2f7 Call
	if(var_220_bool == 0) goto Label_763; // 0x2f9 JumpB
	var_217_bool = 0; // 0x2fa MovB
	
Label_763:
	if(var_217_bool == 0) goto Label_777; // 0x2fb JumpB
	Face(var_0_object); // 0x2fc Func
	var_226_string = "all"; // 0x2fe PushS
	var_227_string = "attack_stay"; // 0x2ff PushS
	PlayAnimation(var_226_string, var_227_string); // 0x300 Func
	var_228_bool = 0; var_229_float = 0; // 0x302 PushV
	var_229_float = var_95_float; // 0x303 Mov
	func_990(var_115_float, var_228_bool, var_229_float); // 0x304 Call
	StopAsync(); // 0x306 Func
	goto Label_820; // 0x308 Jump
	
Label_820:
	goto Label_829; // 0x334 Jump
	
Label_777:
	Face(var_0_object); // 0x309 Func
	var_395_string = "all"; // 0x30b PushS
	var_396_string = "fjump"; // 0x30c PushS
	PlayAnimation(var_395_string, var_396_string); // 0x30d Func
	WaitForAnimEnd(); // 0x30f Func
	var_397_cvector = CVector(0.0, 0.0, 0.0); // 0x311 PushVec
	SetSpeed(var_397_cvector); // 0x312 Func
	Stop(); // 0x314 Func
	StopAsync(); // 0x316 Func
	var_398_bool = 0; // 0x318 PushV
	func_1082(var_115_float, var_398_bool); // 0x319 Call
	var_399_bool = var_398_bool == 0; // 0x31b Not
	if(var_399_bool == 0) goto Label_820; // 0x31c JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x31d PushV
	var_401_object = var_0_object; // 0x31e MovT
	func_1447(var_400_bool, var_401_object); // 0x31f Call
	var_402_bool = var_400_bool == 0; // 0x321 Not
	if(var_402_bool == 0) goto Label_804; // 0x322 JumpB
	goto Label_830; // 0x323 Jump
	
Label_804:
	GetPFPosition(var_109_cvector); // 0x324 TObjFunc
	GetPFPosition(var_110_cvector); // 0x326 Func
	var_113_cvector = var_109_cvector - var_110_cvector; // 0x328 Sub2
	var_114_float = var_113_cvector | var_113_cvector; // 0x329 Or2
	var_403_float = var_95_float * var_95_float; // 0x32a Mult
	var_404_bool = var_114_float < var_403_float; // 0x32b LT
	if(var_404_bool == 0) goto Label_820; // 0x32c JumpB
	var_405_bool = 0; var_406_float = 0; // 0x32d PushV
	var_406_float = var_95_float; // 0x32e Mov
	func_886(var_115_float, var_405_bool, var_406_float); // 0x32f Call
	var_407_bool = var_405_bool == 0; // 0x331 Not
	if(var_407_bool == 0) goto Label_820; // 0x332 JumpB
	goto Label_830; // 0x333 Jump
	
Label_821:
	var_408_bool = 0; var_409_float = 0; // 0x335 PushV
	var_409_float = var_95_float; // 0x336 Mov
	func_886(var_115_float, var_408_bool, var_409_float); // 0x337 Call
	var_410_bool = var_408_bool == 0; // 0x339 Not
	if(var_410_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_830; // 0x33b Jump
	
Label_828:
	var_112_bool = 1; // 0x33c MovB
	
Label_693:
	var_112_bool = 1; // 0x2b5 MovB
	
Label_680:
	var_108_float = var_95_float; // 0x2a8 Mov
	
Label_667:
	var_411_int = 1; // 0x29b PushI
	var_2_float = var_2_float + var_411_int; // 0x29c Add2
	goto Label_658; // 0x29d Jump
	
Label_654:
	var_412_int = 1; // 0x28e PushI
	var_1_float = var_1_float + var_412_int; // 0x28f Add2
	goto Label_644; // 0x290 Jump
}


func_1030(var_0_object, var_241_bool)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_float = 0; var_246_float = 0; var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_float = 0; var_251_float = 0; // 0x406 PushV
	var_252_bool = 0; var_253_object = Obj(); // 0x407 PushV
	var_253_object = var_0_object; // 0x408 MovT
	func_1447(var_252_bool, var_253_object); // 0x409 Call
	var_254_bool = var_252_bool == 0; // 0x40b Not
	if(var_254_bool == 0) goto Label_1039; // 0x40c JumpB
	var_241_bool = 0; // 0x40d MovB
	return 10; // 0x40e Return
	
Label_1039:
	var_255_bool = 0; // 0x40f PushV
	func_1082(var_251_float, var_255_bool); // 0x410 Call
	if(var_255_bool == 0) goto Label_1061; // 0x412 JumpB
	GetPFPosition(var_247_cvector); // 0x413 TObjFunc
	GetPFPosition(var_248_cvector); // 0x415 Func
	var_249_cvector = var_247_cvector - var_248_cvector; // 0x417 Sub2
	var_250_float = var_249_cvector | var_249_cvector; // 0x418 Or2
	GetAttackDistance(var_251_float); // 0x419 TObjFunc
	var_256_int = 50; // 0x41b PushI
	var_251_float = var_251_float + var_256_int; // 0x41c Add2
	var_257_float = var_251_float * var_251_float; // 0x41d Mult
	var_258_bool = var_250_float <= var_257_float; // 0x41e LE
	if(var_258_bool == 0) goto Label_1061; // 0x41f JumpB
	func_1063(var_251_float); // 0x421 Call
	var_241_bool = 1; // 0x423 MovB
	return 10; // 0x424 Return
	
Label_1061:
	var_241_bool = 0; // 0x425 MovB
	return 10; // 0x426 Return
}


func_1411(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x583 PushV
	var_27_bool = var_22_object == 0; // 0x584 NullEq
	if(var_27_bool == 0) goto Label_1416; // 0x585 JumpB
	var_21_bool = 0; // 0x586 MovB
	return 4; // 0x587 Return
	
Label_1416:
	var_28_bool = 0; // 0x588 PushV
	var_28_bool = 0; // 0x589 MovB
	var_29_string = "IsDead"; // 0x58a PushS
	var_30_int = 1; // 0x58b PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x58c FuncExist
	if(var_31_bool == 0) goto Label_1428; // 0x58d JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x58e PushV
	var_33_object = var_22_object; // 0x58f Mov
	func_1406(var_33_object); // 0x590 Call
	if(var_32_bool == 0) goto Label_1428; // 0x592 JumpB
	var_28_bool = 1; // 0x593 MovB
	
Label_1428:
	if(var_28_bool == 0) goto Label_1431; // 0x594 JumpB
	var_21_bool = 0; // 0x595 MovB
	return 4; // 0x596 Return
	
Label_1431:
	GetScene(var_25_object); // 0x597 Func
	var_36_bool = var_25_object == 0; // 0x599 NullEq
	if(var_36_bool == 0) goto Label_1437; // 0x59a JumpB
	var_21_bool = 0; // 0x59b MovB
	return 4; // 0x59c Return
	
Label_1437:
	GetScene(var_26_object); // 0x59d ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x59f Neq
	if(var_37_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_21_bool = 0; // 0x5a1 MovB
	return 4; // 0x5a2 Return
	
Label_1443:
	var_21_bool = 1; // 0x5a3 MovB
	return 4; // 0x5a4 Return
}


func_1292(var_342_string, var_343_int)
{
	var_344_int = 1; // 0x50d PushI
	var_345_bool = var_343_int == var_344_int; // 0x50e Eq
	if(var_345_bool == 0) goto Label_1298; // 0x50f JumpB
	var_342_string = "fire"; // 0x510 MovS
	return 0; // 0x511 Return
	
Label_1298:
	var_342_string = "phys"; // 0x512 MovS
	return 0; // 0x513 Return
}


func_1549(var_53_bool)
{
	var_54_bool = 0; var_55_bool = 0; // 0x60d PushV
	IsLoaded(var_55_bool); // 0x60e Func
	var_53_bool = var_55_bool; // 0x610 Mov
	return 2; // 0x611 Return
}


func_1936(var_84_object)
{
	var_85_object = Obj(); // 0x791 PushV
	var_85_object = var_84_object; // 0x792 Mov
	func_1923(var_85_object); // 0x793 Call
	var_86_object = Obj(); var_87_bool = 0; // 0x795 PushV
	var_86_object = var_84_object; // 0x796 Mov
	var_87_bool = 1; // 0x797 MovB
	TaskCall(4); // 0x798 TaskCall
	func_615(var_86_object, var_87_bool); // 0x799 Call
	TaskReturn(); // 0x79a TaskReturn
	ResetAAS(); // 0x79c Func
	return 0; // 0x79e Return
}


func_1554(var_350_float, var_351_float, var_352_float)
{
	var_355_bool = var_351_float < var_352_float; // 0x613 LT
	if(var_355_bool == 0) goto Label_1559; // 0x614 JumpB
	var_350_float = var_351_float; // 0x615 Mov
	goto Label_1560; // 0x616 Jump
	
Label_1560:
	return 0; // 0x618 Return
	
Label_1559:
	var_350_float = var_352_float; // 0x617 Mov
}


func_1300(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x514 PushV
	GetPosition(var_41_cvector); // 0x515 Func
	GetPosition(var_42_cvector); // 0x517 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x519 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x51a Or2
	return 6; // 0x51b Return
}


func_1177(var_174_object)
{
	var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_string = ""; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_float = 0; var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_string = ""; var_190_object = Obj(); var_191_bool = 0; var_192_bool = 0; var_193_float = 0; var_194_cvector = CVector(0,0,0); // 0x499 PushV
	var_195_bool = var_174_object == 0; // 0x49a NullEq
	if(var_195_bool == 0) goto Label_1185; // 0x49b JumpB
	var_196_string = ""; // 0x49c PushV
	var_196_string = "fdie"; // 0x49d MovS
	func_1264(var_196_string); // 0x49e Call
	goto Label_1263; // 0x4a0 Jump
	
Label_1263:
	return 20; // 0x4ef Return
	
Label_1185:
	GetPosition(var_185_cvector); // 0x4a1 ObjFunc
	GetPosition(var_186_cvector); // 0x4a3 Func
	GetDirection(var_187_cvector); // 0x4a5 Func
	var_188_cvector = var_186_cvector - var_185_cvector; // 0x4a7 Sub2
	var_199_float = GetByIndex(var_188_cvector, 0); // 0x4a8 PushE
	var_200_float = GetByIndex(var_187_cvector, 0); // 0x4a9 PushE
	var_201_float = var_199_float * var_200_float; // 0x4aa Mult
	var_202_float = GetByIndex(var_188_cvector, 2); // 0x4ab PushE
	var_203_float = GetByIndex(var_187_cvector, 2); // 0x4ac PushE
	var_204_float = var_202_float * var_203_float; // 0x4ad Mult
	var_205_int = var_201_float + var_204_float; // 0x4ae Add
	var_206_int = 0; // 0x4af PushI
	var_207_bool = var_205_int >= var_206_int; // 0x4b0 GE
	if(var_207_bool == 0) goto Label_1204; // 0x4b1 JumpB
	var_189_string = "fdie"; // 0x4b2 MovS
	goto Label_1205; // 0x4b3 Jump
	
Label_1205:
	RemoveRTEnvelope(); // 0x4b5 Func
	SetDeathState(); // 0x4b7 Func
	Stop(); // 0x4b9 Func
	StopAsync(); // 0x4bb Func
	var_190_object = var_174_object; // 0x4bd Mov
	var_208_string = "GetScriptProperty"; // 0x4be PushS
	var_209_int = 2; // 0x4bf PushI
	var_210_bool = IsFuncExist(var_174_object, var_208_string, var_209_int); // 0x4c0 FuncExist
	if(var_210_bool == 0) goto Label_1229; // 0x4c1 JumpB
	var_211_string = "Owner"; // 0x4c2 PushS
	HasScriptProperty(var_191_bool, var_211_string); // 0x4c3 ObjFunc
	var_212_bool = var_191_bool; // 0x4c5 Push
	if(var_212_bool == 0) goto Label_1229; // 0x4c6 JumpB
	var_213_string = "Owner"; // 0x4c7 PushS
	GetScriptProperty(var_190_object, var_213_string); // 0x4c8 ObjFunc
	var_214_bool = var_190_object == 0; // 0x4ca NullEq
	if(var_214_bool == 0) goto Label_1229; // 0x4cb JumpB
	var_190_object = var_174_object; // 0x4cc Mov
	
Label_1229:
	var_215_string = "@GetEyesHeight"; // 0x4cd PushS
	var_216_int = 1; // 0x4ce PushI
	var_217_bool = IsFuncExist(var_190_object, var_215_string, var_216_int); // 0x4cf FuncExist
	if(var_217_bool == 0) goto Label_1244; // 0x4d0 JumpB
	GetEyesHeight(var_193_float); // 0x4d1 ObjFunc
	var_194_cvector = CVector(0.0, 0.0, 0.0); // 0x4d3 MovV
	var_218_float = GetByIndex(var_194_cvector, 1); // 0x4d4 PushE
	var_218_float = var_193_float; // 0x4d5 Mov
	SetByIndex(var_194_cvector, 1) = var_218_float; // 0x4d6 PopE
	var_219_string = "head"; // 0x4d7 PushS
	LookAsync(var_174_object, var_219_string, var_194_cvector); // 0x4d8 Func
	var_192_bool = 1; // 0x4da MovB
	goto Label_1245; // 0x4db Jump
	
Label_1245:
	var_220_string = "all"; // 0x4dd PushS
	PlayAnimation(var_220_string, var_189_string); // 0x4de Func
	WaitForAnimEnd(); // 0x4e0 Func
	var_221_bool = var_192_bool; // 0x4e2 Push
	if(var_221_bool == 0) goto Label_1257; // 0x4e3 JumpB
	StopAsync(); // 0x4e4 Func
	var_222_string = "head"; // 0x4e6 PushS
	UnlookAsync(var_222_string); // 0x4e7 Func
	
Label_1257:
	var_223_string = "all"; // 0x4e9 PushS
	LockAnimationEnd(var_223_string, var_189_string); // 0x4ea Func
	RemoveEnvelope(); // 0x4ec Func
	var_190_object = 0; // 0x4ee SetNull
	
Label_1244:
	var_192_bool = 0; // 0x4dc MovB
	
Label_1204:
	var_189_string = "bdie"; // 0x4b4 MovS
}


func_1561(var_36_float, var_37_float, var_38_float, var_39_float)
{
	var_40_bool = var_37_float < var_38_float; // 0x61a LT
	if(var_40_bool == 0) goto Label_1566; // 0x61b JumpB
	var_36_float = var_38_float; // 0x61c Mov
	return 0; // 0x61d Return
	
Label_1566:
	var_41_bool = var_37_float > var_39_float; // 0x61e GT
	if(var_41_bool == 0) goto Label_1570; // 0x61f JumpB
	var_36_float = var_39_float; // 0x620 Mov
	return 0; // 0x621 Return
	
Label_1570:
	var_36_float = var_37_float; // 0x622 Mov
	return 0; // 0x623 Return
}


func_156(var_0_object)
{
	Stop(); // 0x9c Func
	StopGroup0(); // 0x9e Func
	StopAsync(); // 0xa0 Func
	var_92_int = 100; // 0xa2 PushI
	KillTimer(var_92_int); // 0xa3 Func
	var_0_object = 0; // 0xa5 SetNullT
	return 0; // 0xa6 Return
}


func_1308(var_26_bool, var_27_object, var_28_string)
{
	var_29_bool = 0; var_30_bool = 0; // 0x51c PushV
	var_31_string = "HasProperty"; // 0x51d PushS
	var_32_int = 2; // 0x51e PushI
	var_33_bool = IsFuncExist(var_27_object, var_31_string, var_32_int); // 0x51f FuncExist
	var_34_bool = var_33_bool == 0; // 0x520 Not
	if(var_34_bool == 0) goto Label_1316; // 0x521 JumpB
	var_26_bool = 0; // 0x522 MovB
	return 2; // 0x523 Return
	
Label_1316:
	HasProperty(var_28_string, var_30_bool); // 0x524 ObjFunc
	var_26_bool = var_30_bool; // 0x526 Mov
	return 2; // 0x527 Return
}


func_1951(var_13_object)
{
	var_14_object = Obj(); // 0x7a0 PushV
	var_14_object = var_13_object; // 0x7a1 Mov
	TaskCall(5); // 0x7a2 TaskCall
	func_1133(var_14_object); // 0x7a3 Call
	TaskReturn(); // 0x7a4 TaskReturn
	return 0; // 0x7a6 Return
}


func_1572(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x624 PushV
	CreateObjectSet(var_15_object); // 0x625 Func
	var_13_object = var_15_object; // 0x627 Mov
	return 2; // 0x628 Return
}


func_1447(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x5a7 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x5a8 PushV
	var_22_object = var_18_object; // 0x5a9 Mov
	func_1411(var_21_bool, var_22_object); // 0x5aa Call
	var_38_bool = var_21_bool == 0; // 0x5ac Not
	if(var_38_bool == 0) goto Label_1456; // 0x5ad JumpB
	var_17_bool = 0; // 0x5ae MovB
	return 2; // 0x5af Return
	
Label_1456:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x5b0 PushV
	var_40_object = var_18_object; // 0x5b1 Mov
	var_41_string = "noaccess"; // 0x5b2 MovS
	func_1308(var_39_bool, var_40_object, var_41_string); // 0x5b3 Call
	var_48_bool = var_39_bool == 0; // 0x5b5 Not
	if(var_48_bool == 0) goto Label_1465; // 0x5b6 JumpB
	var_17_bool = 1; // 0x5b7 MovB
	return 2; // 0x5b8 Return
	
Label_1465:
	var_49_string = "noaccess"; // 0x5b9 PushS
	GetProperty(var_49_string, var_20_int); // 0x5ba ObjFunc
	var_50_int = 0; // 0x5bc PushI
	var_17_bool = var_20_int == var_50_int; // 0x5bd Eq2
	return 2; // 0x5be Return
}


func_1063(var_0_object)
{
	var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); // 0x427 PushV
	Face(var_0_object); // 0x428 Func
	var_263_string = "all"; // 0x42a PushS
	var_264_string = "bjump"; // 0x42b PushS
	PlayAnimation(var_263_string, var_264_string); // 0x42c Func
	GetPFPosition(var_261_cvector); // 0x42e TObjFunc
	GetPFPosition(var_262_cvector); // 0x430 Func
	WaitForAnimEnd(); // 0x432 Func
	StopAsync(); // 0x434 Func
	var_265_cvector = CVector(0.0, 0.0, 0.0); // 0x436 PushVec
	SetSpeed(var_265_cvector); // 0x437 Func
	return 4; // 0x439 Return
}


func_1320(var_18_bool, var_19_object, var_20_string, var_21_float, var_22_float, var_23_float)
{
	var_24_float = 0; var_25_float = 0; // 0x528 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x529 PushV
	var_27_object = var_19_object; // 0x52a Mov
	var_28_string = var_20_string; // 0x52b Mov
	func_1308(var_26_bool, var_27_object, var_28_string); // 0x52c Call
	var_35_bool = var_26_bool == 0; // 0x52e Not
	if(var_35_bool == 0) goto Label_1330; // 0x52f JumpB
	var_18_bool = 0; // 0x530 MovB
	return 2; // 0x531 Return
	
Label_1330:
	GetProperty(var_20_string, var_25_float); // 0x532 ObjFunc
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x534 PushV
	var_37_float = var_25_float + var_21_float; // 0x535 Add2
	var_38_float = var_22_float; // 0x536 Mov
	var_39_float = var_23_float; // 0x537 Mov
	func_1561(var_36_float, var_37_float, var_38_float, var_39_float); // 0x538 Call
	SetProperty(var_20_string, var_36_float); // 0x53a ObjFunc
	var_18_bool = 1; // 0x53c MovB
	return 2; // 0x53d Return
}


func_1578(var_52_int)
{
	var_53_float = 0; var_54_float = 0; // 0x62a PushV
	GetGameTime(var_54_float); // 0x62b Func
	var_55_int = 1; // 0x62d PushI
	var_56_int = 0; // 0x62e PushV
	var_57_int = 24; // 0x62f PushI
	var_56_int = var_54_float / var_54_float; // 0x630 Div2
	var_52_int = var_55_int + var_56_int; // 0x631 Add2
	return 2; // 0x632 Return
}


func_299(var_0_object, var_1_float)
{
	var_0_object = 1; // 0x12b TMovB
	var_1_float = 0; // 0x12c TMovB
	Stop(); // 0x12d Func
	StopGroup0(); // 0x12f Func
	return 0; // 0x131 Return
}


func_1841(var_82_int, var_83_string)
{
	var_84_int = 0; var_85_int = 0; // 0x731 PushV
	GetInvItemByName(var_85_int, var_83_string); // 0x732 Func
	var_82_int = var_85_int; // 0x734 Mov
	return 2; // 0x735 Return
}


func_1587(var_63_string, var_64_int)
{
	var_65_string = ""; var_66_string = ""; // 0x633 PushV
	var_66_string = "idle"; // 0x634 MovS
	var_67_int = var_64_int; // 0x635 Push
	if(var_67_int == 0) goto Label_1592; // 0x636 JumpB
	var_66_string = var_66_string + var_64_int; // 0x637 Add2
	
Label_1592:
	var_63_string = var_66_string; // 0x638 Mov
	return 2; // 0x639 Return
}


func_1846()
{
	var_12_object = GlobalVars[0]; // 0x736 PushGE
	var_13_object = Obj(); // 0x737 PushV
	func_1572(var_13_object); // 0x738 Call
	var_12_object = var_13_object; // 0x739 Mov
	GlobalVars[0] = var_12_object; // 0x73b PopGE
	return 0; // 0x73c Return
}


func_1594(var_57_int)
{
	var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; // 0x63a PushV
	var_60_int = 0; // 0x63b MovI
	
Label_1596:
	var_62_string = "all"; // 0x63c PushS
	var_63_string = ""; var_64_int = 0; // 0x63d PushV
	var_64_int = var_60_int; // 0x63e Mov
	func_1587(var_63_string, var_64_int); // 0x63f Call
	HasAnimation(var_61_bool, var_62_string, var_63_string); // 0x641 Func
	var_68_bool = var_61_bool == 0; // 0x643 Not
	if(var_68_bool == 0) goto Label_1606; // 0x644 JumpB
	goto Label_1609; // 0x645 Jump
	
Label_1609:
	var_57_int = var_60_int; // 0x649 Mov
	return 4; // 0x64a Return
	
Label_1606:
	var_69_int = 1; // 0x646 PushI
	var_60_int = var_60_int + var_69_int; // 0x647 Add2
	goto Label_1596; // 0x648 Jump
}


func_315(var_37_bool)
{
	var_37_bool = 0; // 0x13b MovB
	return 0; // 0x13c Return
}


func_1082(var_0_object, var_220_bool)
{
	var_221_bool = 0; var_222_bool = 0; // 0x43a PushV
	var_223_string = "IsAttacking"; // 0x43b PushS
	var_224_int = 1; // 0x43c PushI
	var_225_bool = IsFuncExist(var_0_object, var_223_string, var_224_int); // 0x43d FuncExist
	if(var_225_bool == 0) goto Label_1091; // 0x43e JumpB
	IsAttacking(var_222_bool); // 0x43f TObjFunc
	var_220_bool = var_222_bool; // 0x441 Mov
	return 2; // 0x442 Return
	
Label_1091:
	var_220_bool = 0; // 0x443 MovB
	return 2; // 0x444 Return
}


func_1853(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0; // 0x73d PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x73e PushV
	var_25_object = var_19_object; // 0x73f Mov
	func_1447(var_24_bool, var_25_object); // 0x740 Call
	var_58_bool = var_24_bool == 0; // 0x742 Not
	if(var_58_bool == 0) goto Label_1862; // 0x743 JumpB
	var_18_bool = 0; // 0x744 MovB
	return 4; // 0x745 Return
	
Label_1862:
	var_59_object = GlobalVars[0]; // 0x746 PushGE
	in(var_22_bool, var_19_object); // 0x747 ObjFunc
	var_60_bool = var_22_bool; // 0x749 Push
	if(var_60_bool == 0) goto Label_1869; // 0x74a JumpB
	var_18_bool = 1; // 0x74b MovB
	return 4; // 0x74c Return
	
Label_1869:
	var_61_bool = 0; var_62_object = Obj(); var_63_string = ""; // 0x74d PushV
	var_62_object = var_19_object; // 0x74e Mov
	var_63_string = "reputation"; // 0x74f MovS
	func_1308(var_61_bool, var_62_object, var_63_string); // 0x750 Call
	var_64_bool = var_61_bool == 0; // 0x752 Not
	if(var_64_bool == 0) goto Label_1878; // 0x753 JumpB
	var_18_bool = 0; // 0x754 MovB
	return 4; // 0x755 Return
	
Label_1878:
	var_65_string = "reputation"; // 0x756 PushS
	GetProperty(var_65_string, var_23_float); // 0x757 ObjFunc
	var_66_float = 0.1; // 0x759 PushF
	var_18_bool = var_23_float < var_66_float; // 0x75a LT2
	return 4; // 0x75b Return
}


func_446()
{
	StopAnimation(); // 0x1be Func
	StopGroup0(); // 0x1c0 Func
	return 0; // 0x1c2 Return
}


func_1342(var_314_float, var_315_object, var_316_float, var_317_int)
{
	var_321_int = 0; var_322_string = ""; var_323_int = 0; var_324_float = 0; var_325_float = 0; var_326_float = 0; var_327_int = 0; var_328_string = ""; var_329_int = 0; var_330_float = 0; var_331_float = 0; var_332_float = 0; // 0x53e PushV
	var_333_bool = 0; var_334_object = Obj(); var_335_string = ""; // 0x53f PushV
	var_334_object = var_315_object; // 0x540 Mov
	var_335_string = "health"; // 0x541 MovS
	func_1308(var_333_bool, var_334_object, var_335_string); // 0x542 Call
	var_336_bool = var_333_bool == 0; // 0x544 Not
	if(var_336_bool == 0) goto Label_1352; // 0x545 JumpB
	var_314_float = 0.0; // 0x546 MovF
	return 12; // 0x547 Return
	
Label_1352:
	var_337_bool = 0; var_338_object = Obj(); var_339_string = ""; // 0x548 PushV
	var_338_object = var_315_object; // 0x549 Mov
	var_339_string = "armor"; // 0x54a MovS
	func_1308(var_337_bool, var_338_object, var_339_string); // 0x54b Call
	var_340_bool = var_337_bool == 0; // 0x54d Not
	if(var_340_bool == 0) goto Label_1361; // 0x54e JumpB
	var_327_int = 0; // 0x54f MovI
	goto Label_1364; // 0x550 Jump
	
Label_1364:
	var_341_string = "armor_"; // 0x554 PushS
	var_342_string = ""; var_343_int = 0; // 0x555 PushV
	var_343_int = var_317_int; // 0x556 Mov
	func_1292(var_342_string, var_343_int); // 0x557 Call
	var_328_string = var_341_string + var_342_string; // 0x559 Add2
	var_346_bool = 0; var_347_object = Obj(); var_348_string = ""; // 0x55a PushV
	var_347_object = var_315_object; // 0x55b Mov
	var_348_string = var_328_string; // 0x55c Mov
	func_1308(var_346_bool, var_347_object, var_348_string); // 0x55d Call
	var_349_bool = var_346_bool == 0; // 0x55f Not
	if(var_349_bool == 0) goto Label_1379; // 0x560 JumpB
	var_329_int = 0; // 0x561 MovI
	goto Label_1381; // 0x562 Jump
	
Label_1381:
	var_350_float = 0; var_351_float = 0; var_352_float = 0; // 0x565 PushV
	var_353_int = var_327_int + var_329_int; // 0x566 Add
	var_354_float = 100.0; // 0x567 PushF
	var_351_float = var_353_int / var_353_int; // 0x568 Div2
	var_352_float = 1; // 0x569 MovI
	func_1554(var_350_float, var_351_float, var_352_float); // 0x56a Call
	var_330_float = var_350_float; // 0x56b Mov
	var_356_string = "health"; // 0x56d PushS
	GetProperty(var_356_string, var_331_float); // 0x56e ObjFunc
	var_357_int = 1; // 0x570 PushI
	var_358_int = var_357_int - var_330_float; // 0x571 Sub
	var_332_float = var_316_float * var_358_int; // 0x572 Mult2
	var_359_string = "health"; // 0x573 PushS
	var_360_float = 0; var_361_float = 0; var_362_float = 0; var_363_float = 0; // 0x574 PushV
	var_361_float = var_331_float - var_332_float; // 0x575 Sub2
	var_362_float = 0; // 0x576 MovI
	var_363_float = 1; // 0x577 MovI
	func_1561(var_360_float, var_361_float, var_362_float, var_363_float); // 0x578 Call
	SetProperty(var_359_string, var_360_float); // 0x57a ObjFunc
	var_314_float = var_332_float; // 0x57c Mov
	return 12; // 0x57d Return
	
Label_1379:
	GetProperty(var_328_string, var_329_int); // 0x563 ObjFunc
	
Label_1361:
	var_366_string = "armor"; // 0x551 PushS
	GetProperty(var_366_string, var_327_int); // 0x552 ObjFunc
}


func_1471(var_16_object, var_17_int)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; // 0x5bf PushV
	var_39_bool = 0; // 0x5c0 PushV
	var_39_bool = 0; // 0x5c1 MovB
	var_40_int = 4; // 0x5c2 PushI
	var_41_bool = var_17_int != var_40_int; // 0x5c3 Neq
	if(var_41_bool == 0) goto Label_1481; // 0x5c4 JumpB
	var_42_int = 5; // 0x5c5 PushI
	var_43_bool = var_17_int != var_42_int; // 0x5c6 Neq
	if(var_43_bool == 0) goto Label_1481; // 0x5c7 JumpB
	var_39_bool = 1; // 0x5c8 MovB
	
Label_1481:
	if(var_39_bool == 0) goto Label_1500; // 0x5c9 JumpB
	GetScene(var_29_object); // 0x5ca Func
	GetPosition(var_31_cvector); // 0x5cc Func
	GetEyesHeight(var_32_float); // 0x5ce Func
	var_44_float = GetByIndex(var_31_cvector, 1); // 0x5d0 PushE
	var_45_int = 2; // 0x5d1 PushI
	var_46_float = var_32_float / var_45_int; // 0x5d2 Div
	var_44_float = var_44_float + var_46_float; // 0x5d3 Add2
	SetByIndex(var_31_cvector, 1) = var_44_float; // 0x5d4 PopE
	var_47_string = "scripted"; // 0x5d5 PushS
	var_48_cvector = CVector(0.0, 0.0, 1.0); // 0x5d6 PushVec
	var_49_string = "blood.xml"; // 0x5d7 PushS
	AddActorByType(var_30_object, var_47_string, var_29_object, var_31_cvector, var_48_cvector, var_49_string); // 0x5d8 Func
	var_30_object = 0; // 0x5da SetNull
	var_29_object = 0; // 0x5db SetNull
	
Label_1500:
	var_50_bool = var_16_object == 0; // 0x5dc NullEq
	if(var_50_bool == 0) goto Label_1503; // 0x5dd JumpB
	return 20; // 0x5de Return
	
Label_1503:
	GetSecondaryAnimationType(var_33_int); // 0x5df Func
	var_51_int = 0; // 0x5e1 PushI
	var_52_bool = var_33_int < var_51_int; // 0x5e2 LT
	if(var_52_bool == 0) goto Label_1509; // 0x5e3 JumpB
	return 20; // 0x5e4 Return
	
Label_1509:
	GetPosition(var_34_cvector); // 0x5e5 ObjFunc
	GetPosition(var_35_cvector); // 0x5e7 Func
	GetDirection(var_36_cvector); // 0x5e9 Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x5eb Sub2
	var_53_float = GetByIndex(var_37_cvector, 0); // 0x5ec PushE
	var_54_float = GetByIndex(var_36_cvector, 0); // 0x5ed PushE
	var_55_float = var_53_float * var_54_float; // 0x5ee Mult
	var_56_float = GetByIndex(var_37_cvector, 2); // 0x5ef PushE
	var_57_float = GetByIndex(var_36_cvector, 2); // 0x5f0 PushE
	var_58_float = var_56_float * var_57_float; // 0x5f1 Mult
	var_59_int = var_55_float + var_58_float; // 0x5f2 Add
	var_60_int = 0; // 0x5f3 PushI
	var_61_bool = var_59_int >= var_60_int; // 0x5f4 GE
	if(var_61_bool == 0) goto Label_1528; // 0x5f5 JumpB
	var_38_string = "fhit"; // 0x5f6 MovS
	goto Label_1529; // 0x5f7 Jump
	
Label_1529:
	var_62_string = "hit_react"; // 0x5f9 PushS
	var_63_string = "1"; // 0x5fa PushS
	var_64_int = var_38_string + var_63_string; // 0x5fb Add
	var_65_string = "2"; // 0x5fc PushS
	var_66_int = var_38_string + var_65_string; // 0x5fd Add
	var_67_int = -10; // 0x5fe PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x5ff Func
	return 20; // 0x601 Return
	
Label_1528:
	var_38_string = "bhit"; // 0x5f8 MovS
}


func_1986(var_14_bool, var_15_object, var_16_object)
{
	var_17_float = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x7c2 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x7c3 PushV
	var_22_object = var_16_object; // 0x7c4 Mov
	var_23_string = "reputation"; // 0x7c5 MovS
	func_1308(var_21_bool, var_22_object, var_23_string); // 0x7c6 Call
	var_30_bool = var_21_bool == 0; // 0x7c8 Not
	if(var_30_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_14_bool = 0; // 0x7ca MovB
	return 4; // 0x7cb Return
	
Label_1996:
	var_31_string = "reputation"; // 0x7cc PushS
	GetProperty(var_31_string, var_19_float); // 0x7cd ObjFunc
	var_32_float = 0.5; // 0x7cf PushF
	var_33_bool = var_19_float < var_32_float; // 0x7d0 LT
	if(var_33_bool == 0) goto Label_2004; // 0x7d1 JumpB
	var_14_bool = 0; // 0x7d2 MovB
	return 4; // 0x7d3 Return
	
Label_2004:
	CanSee(var_20_bool, var_15_object); // 0x7d4 Func
	var_34_bool = 0; // 0x7d6 PushV
	var_34_bool = 1; // 0x7d7 MovB
	var_35_bool = var_20_bool; // 0x7d8 Push
	if(var_35_bool == 0) goto Label_2018; // 0x7d9 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0x7da PushV
	var_37_object = var_15_object; // 0x7db Mov
	func_1300(var_37_object); // 0x7dc Call
	var_44_float = 160000.0; // 0x7de PushF
	var_45_bool = var_36_float <= var_44_float; // 0x7df LE
	if(var_45_bool == 0) goto Label_2018; // 0x7e0 JumpB
	var_34_bool = 0; // 0x7e1 MovB
	
Label_2018:
	if(var_34_bool == 0) goto Label_2024; // 0x7e2 JumpB
	var_46_float = -0.2; // 0x7e3 PushF
	ReportReputationChange(var_15_object, var_16_object, var_46_float); // 0x7e4 Func
	var_14_bool = 1; // 0x7e6 MovB
	return 4; // 0x7e7 Return
	
Label_2024:
	var_14_bool = 0; // 0x7e8 MovB
	return 4; // 0x7e9 Return
}


func_69(var_77_bool, var_78_int)
{
	SetSeeThreshold(var_78_int); // 0x45 Func
	SetSeeFOV(var_77_bool); // 0x47 Func
	func_156(var_78_int); // 0x4a Call
	return 0; // 0x4c Return
}


func_1093(var_2_float, var_4_bool)
{
	var_282_float = 0; var_283_int = 0; var_284_float = 0; var_285_int = 0; // 0x445 PushV
	var_286_bool = var_2_float == 0; // 0x446 Not
	if(var_286_bool == 0) goto Label_1097; // 0x447 JumpB
	return 4; // 0x448 Return
	
Label_1097:
	var_287_bool = var_4_bool; // 0x449 PushT
	if(var_287_bool == 0) goto Label_1105; // 0x44a JumpB
	var_288_int = -1; // 0x44b PushI
	var_4_bool = var_4_bool + var_288_int; // 0x44c Add2
	var_289_int = 0; // 0x44d PushI
	var_290_bool = var_4_bool > var_289_int; // 0x44e GT
	if(var_290_bool == 0) goto Label_1105; // 0x44f JumpB
	return 4; // 0x450 Return
	
Label_1105:
	rand(var_284_float); // 0x451 Func
	var_291_float = 0; // 0x453 PushV
	func_1131(var_291_float); // 0x454 Call
	var_292_bool = var_284_float < var_291_float; // 0x456 LT
	if(var_292_bool == 0) goto Label_1124; // 0x457 JumpB
	irand(var_285_int, var_284_float); // 0x458 Func
	var_293_int = 1; // 0x45a PushI
	var_285_int = var_285_int + var_293_int; // 0x45b Add2
	var_294_string = "attack"; // 0x45c PushS
	var_295_int = var_294_string + var_285_int; // 0x45d Add
	Speak(var_295_int); // 0x45e Func
	var_296_int = 0; // 0x460 PushV
	func_1129(var_296_int); // 0x461 Call
	var_4_bool = var_296_int; // 0x462 TMov
	
Label_1124:
	return 4; // 0x464 Return
}


func_966(var_386_bool, var_387_float)
{
	var_388_float = 0; var_389_bool = 0; var_390_float = 0; var_391_bool = 0; // 0x3c6 PushV
	rand(var_390_float); // 0x3c7 Func
	var_392_bool = var_390_float < var_387_float; // 0x3c9 LT
	if(var_392_bool == 0) goto Label_986; // 0x3ca JumpB
	
Label_971:
	IsAnimationPlaying(var_391_bool); // 0x3cb Func
	var_393_bool = var_391_bool == 0; // 0x3cd Not
	if(var_393_bool == 0) goto Label_976; // 0x3ce JumpB
	goto Label_985; // 0x3cf Jump
	
Label_985:
	goto Label_988; // 0x3d9 Jump
	
Label_988:
	var_386_bool = 0; // 0x3dc MovB
	return 4; // 0x3dd Return
	
Label_976:
	var_394_bool = 0; // 0x3d0 PushV
	func_1030(var_391_bool, var_394_bool); // 0x3d1 Call
	if(var_394_bool == 0) goto Label_982; // 0x3d3 JumpB
	var_386_bool = 1; // 0x3d4 MovB
	return 4; // 0x3d5 Return
	
Label_982:
	sync(); // 0x3d6 Func
	goto Label_971; // 0x3d8 Jump
	
Label_986:
	WaitForAnimEnd(); // 0x3da Func
}


func_1611(var_49_int, var_50_int)
{
	var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; // 0x64b PushV
	var_68_bool = var_49_int > var_50_int; // 0x64c GT
	if(var_68_bool == 0) goto Label_1618; // 0x64d JumpB
	var_69_string = "GenerateMoney: iMin > iMax"; // 0x64e PushS
	Trace(var_69_string); // 0x64f Func
	return 8; // 0x651 Return
	
Label_1618:
	var_64_int = 0; // 0x652 MovI
	var_70_bool = var_49_int != var_50_int; // 0x653 Neq
	if(var_70_bool == 0) goto Label_1625; // 0x654 JumpB
	var_71_int = var_50_int - var_49_int; // 0x655 Sub
	irand(var_65_int, var_71_int); // 0x656 Func
	goto Label_1629; // 0x658 Jump
	
Label_1629:
	var_64_int = var_64_int + var_49_int; // 0x65d Add2
	var_72_int = 0; // 0x65e PushI
	var_73_bool = var_64_int == var_72_int; // 0x65f Eq
	if(var_73_bool == 0) goto Label_1634; // 0x660 JumpB
	return 8; // 0x661 Return
	
Label_1634:
	var_74_string = "Money"; // 0x662 PushS
	GetInvItemByName(var_66_int, var_74_string); // 0x663 Func
	var_75_int = 0; // 0x665 PushI
	AddItem(var_67_bool, var_66_int, var_75_int, var_64_int); // 0x666 Func
	return 8; // 0x668 Return
	
Label_1625:
	var_76_int = 0; // 0x659 PushI
	var_77_bool = var_49_int == var_76_int; // 0x65a Eq
	if(var_77_bool == 0) goto Label_1629; // 0x65b JumpB
	return 8; // 0x65c Return
}


func_588(var_0_object)
{
	var_0_object = 1; // 0x24c TMovB
	var_13_int = 0; // 0x24d PushI
	KillTimer(var_13_int); // 0x24e Func
	Stop(); // 0x250 Func
	return 0; // 0x252 Return
}


func_847(var_0_object, var_300_float, var_301_int)
{
	var_302_object = Obj(); var_303_float = 0; var_304_float = 0; var_305_object = Obj(); var_306_float = 0; var_307_float = 0; // 0x34f PushV
	var_308_float = 0.9; // 0x350 PushF
	var_309_float = var_300_float * var_308_float; // 0x351 Mult
	GetVictim(var_309_float, var_305_object); // 0x352 Func
	ReportAttack(var_0_object); // 0x354 Func
	var_310_bool = var_305_object == var_0_object; // 0x356 Eq
	if(var_310_bool == 0) goto Label_884; // 0x357 JumpB
	var_311_float = 0; var_312_object = Obj(); var_313_int = 0; // 0x358 PushV
	var_312_object = var_305_object; // 0x359 Mov
	var_313_int = var_301_int; // 0x35a Mov
	func_623(var_313_int); // 0x35b Call
	var_306_float = var_311_float; // 0x35c Mov
	var_314_float = 0; var_315_object = Obj(); var_316_float = 0; var_317_int = 0; // 0x35e PushV
	var_315_object = var_305_object; // 0x35f Mov
	var_316_float = var_306_float; // 0x360 Mov
	var_318_int = 0; var_319_object = Obj(); var_320_int = 0; // 0x361 PushV
	var_319_object = var_305_object; // 0x362 Mov
	var_320_int = var_301_int; // 0x363 Mov
	func_626(var_320_int); // 0x364 Call
	var_317_int = var_318_int; // 0x365 Mov
	func_1342(var_314_float, var_315_object, var_316_float, var_317_int); // 0x367 Call
	var_307_float = var_314_float; // 0x368 Mov
	var_367_int = 0; // 0x36a PushV
	func_1125(var_367_int); // 0x36b Call
	ReportHit(var_0_object, var_367_int, var_307_float, var_306_float); // 0x36d Func
	var_368_object = Obj(); var_369_float = 0; // 0x36f PushV
	var_368_object = var_305_object; // 0x370 Mov
	var_369_float = var_307_float; // 0x371 Mov
	func_1127(); // 0x372 Call
	
Label_884:
	return 6; // 0x374 Return
}


func_464(var_0_object, var_1_float, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool)
{
	var_152_bool = 0; var_153_bool = 0; var_154_object = Obj(); var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_float = 0; var_159_object = Obj(); var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); // 0x1d0 PushV
	var_0_object = 0; // 0x1d1 TMovB
	var_1_float = var_145_object; // 0x1d2 TMov
	var_161_bool = var_149_bool; // 0x1d3 Mov
	
Label_468:
	var_168_bool = 0; var_169_object = Obj(); // 0x1d4 PushV
	var_169_object = var_145_object; // 0x1d5 Mov
	func_604(var_168_bool, var_169_object); // 0x1d6 Call
	var_172_bool = var_168_bool == 0; // 0x1d8 Not
	if(var_172_bool == 0) goto Label_476; // 0x1d9 JumpB
	var_144_bool = 0; // 0x1da MovB
	return 16; // 0x1db Return
	
Label_476:
	GetPosition(var_163_cvector); // 0x1dc ObjFunc
	GetPosition(var_164_cvector); // 0x1de Func
	var_165_cvector = var_163_cvector - var_164_cvector; // 0x1e0 Sub2
	var_166_float = var_165_cvector | var_165_cvector; // 0x1e1 Or2
	var_173_bool = 0; // 0x1e2 PushV
	var_173_bool = 0; // 0x1e3 MovB
	var_174_int = 0; // 0x1e4 PushI
	var_175_bool = var_147_float > var_174_int; // 0x1e5 GT
	if(var_175_bool == 0) goto Label_491; // 0x1e6 JumpB
	var_176_float = var_147_float * var_147_float; // 0x1e7 Mult
	var_177_bool = var_166_float > var_176_float; // 0x1e8 GT
	if(var_177_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_173_bool = 1; // 0x1ea MovB
	
Label_491:
	if(var_173_bool == 0) goto Label_496; // 0x1eb JumpB
	Stop(); // 0x1ec Func
	var_144_bool = 0; // 0x1ee MovB
	return 16; // 0x1ef Return
	
Label_496:
	var_178_float = var_146_float * var_146_float; // 0x1f0 Mult
	var_179_bool = var_166_float > var_178_float; // 0x1f1 GT
	if(var_179_bool == 0) goto Label_558; // 0x1f2 JumpB
	GetPFPosition(var_163_cvector); // 0x1f3 ObjFunc
	FindPathTo(var_167_object, var_163_cvector); // 0x1f5 Func
	var_180_bool = var_167_object != 0; // 0x1f7 NullNeq
	if(var_180_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_162_object = var_167_object; // 0x1f9 Mov
	var_167_object = 0; // 0x1fa SetNull
	
Label_507:
	var_181_bool = var_162_object != 0; // 0x1fb NullNeq
	if(var_181_bool == 0) goto Label_540; // 0x1fc JumpB
	var_182_bool = var_161_bool; // 0x1fd Push
	if(var_182_bool == 0) goto Label_517; // 0x1fe JumpB
	var_161_bool = 0; // 0x1ff MovB
	RotatePath(var_162_object, var_160_bool); // 0x200 Func
	var_183_bool = var_160_bool == 0; // 0x202 Not
	if(var_183_bool == 0) goto Label_517; // 0x203 JumpB
	goto Label_564; // 0x204 Jump
	
Label_564:
	var_144_bool = !var_0_object; // 0x234 Not2
	return 16; // 0x235 Return
	
Label_517:
	var_184_int = 0; // 0x205 PushI
	var_185_float = 0.3; // 0x206 PushF
	SetTimer(var_184_int, var_185_float); // 0x207 Func
	var_186_string = ""; // 0x209 PushV
	func_611(var_186_string); // 0x20a Call
	var_187_string = ""; // 0x20c PushV
	func_613(var_187_string); // 0x20d Call
	FollowPath(var_162_object, var_148_bool, var_160_bool, var_186_string, var_187_string); // 0x20f Func
	var_188_bool = var_160_bool == 0; // 0x211 Not
	if(var_188_bool == 0) goto Label_538; // 0x212 JumpB
	var_189_object = var_0_object; // 0x213 PushT
	if(var_189_object == 0) goto Label_536; // 0x214 JumpB
	var_162_object = 0; // 0x215 SetNull
	goto Label_564; // 0x216 Jump
	
Label_536:
	goto Label_563; // 0x218 Jump
	
Label_563:
	goto Label_468; // 0x233 Jump
	
Label_538:
	var_162_object = 0; // 0x21a SetNull
	goto Label_556; // 0x21b Jump
	
Label_556:
	var_167_object = 0; // 0x22c SetNull
	goto Label_562; // 0x22d Jump
	
Label_562:
	var_162_object = 0; // 0x232 SetNull
	
Label_540:
	var_190_int = 0; // 0x21c PushI
	KillTimer(var_190_int); // 0x21d Func
	var_191_float = 0.5; // 0x21f PushF
	Sleep(var_191_float, var_160_bool); // 0x220 Func
	var_192_bool = var_160_bool == 0; // 0x222 Not
	if(var_192_bool == 0) goto Label_552; // 0x223 JumpB
	var_193_object = var_0_object; // 0x224 PushT
	if(var_193_object == 0) goto Label_552; // 0x225 JumpB
	var_162_object = 0; // 0x226 SetNull
	goto Label_564; // 0x227 Jump
	
Label_552:
	var_194_int = 0; // 0x228 PushI
	var_195_float = 0.3; // 0x229 PushF
	SetTimer(var_194_int, var_195_float); // 0x22a Func
	
Label_558:
	var_196_int = 0; // 0x22e PushI
	KillTimer(var_196_int); // 0x22f Func
	goto Label_564; // 0x231 Jump
}


func_86(var_2_float, var_85_bool)
{
	var_86_bool = 0; var_87_bool = 0; // 0x56 PushV
	var_88_float = 1.8; // 0x57 PushF
	var_89_float = var_2_float * var_88_float; // 0x58 Mult
	SetSeeFOV(var_89_float); // 0x59 Func
	var_90_string = "all"; // 0x5b PushS
	var_91_string = "hunt"; // 0x5c PushS
	PlayAnimation(var_90_string, var_91_string); // 0x5d Func
	WaitForAnimEnd(var_87_bool); // 0x5f Func
	SetSeeFOV(var_86_bool); // 0x61 Func
	var_85_bool = !var_87_bool; // 0x63 Not2
	return 2; // 0x64 Return
}


func_1884(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x75c PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x75d Func
	var_17_bool = var_16_bool == 0; // 0x75f Not
	if(var_17_bool == 0) goto Label_1891; // 0x760 JumpB
	var_13_bool = 0; // 0x761 MovB
	return 2; // 0x762 Return
	
Label_1891:
	var_18_bool = 0; var_19_object = Obj(); // 0x763 PushV
	var_19_object = var_14_object; // 0x764 Mov
	func_1853(var_18_bool, var_19_object); // 0x765 Call
	var_13_bool = var_18_bool; // 0x766 Mov
	return 2; // 0x768 Return
}


func_604(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x25d PushV
	var_18_object = var_16_object; // 0x25e Mov
	func_1447(var_17_bool, var_18_object); // 0x25f Call
	var_15_bool = var_17_bool; // 0x260 Mov
	return 0; // 0x262 Return
}


func_990(var_0_object, var_228_bool, var_229_float)
{
	var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_float = 0; var_235_bool = 0; var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_float = 0; // 0x3de PushV
	
Label_991:
	IsAnimationPlaying(var_235_bool); // 0x3df Func
	var_240_bool = var_235_bool == 0; // 0x3e1 Not
	if(var_240_bool == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_1028; // 0x3e3 Jump
	
Label_1028:
	var_228_bool = 0; // 0x404 MovB
	return 10; // 0x405 Return
	
Label_996:
	var_241_bool = 0; // 0x3e4 PushV
	func_1030(var_239_float, var_241_bool); // 0x3e5 Call
	if(var_241_bool == 0) goto Label_1002; // 0x3e7 JumpB
	var_228_bool = 1; // 0x3e8 MovB
	return 10; // 0x3e9 Return
	
Label_1002:
	var_266_bool = 0; var_267_object = Obj(); // 0x3ea PushV
	var_267_object = var_0_object; // 0x3eb MovT
	func_1447(var_266_bool, var_267_object); // 0x3ec Call
	var_268_bool = var_266_bool == 0; // 0x3ee Not
	if(var_268_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_228_bool = 0; // 0x3f0 MovB
	return 10; // 0x3f1 Return
	
Label_1010:
	GetPFPosition(var_236_cvector); // 0x3f2 TObjFunc
	GetPFPosition(var_237_cvector); // 0x3f4 Func
	var_238_cvector = var_236_cvector - var_237_cvector; // 0x3f6 Sub2
	var_239_float = var_238_cvector | var_238_cvector; // 0x3f7 Or2
	var_269_float = var_229_float * var_229_float; // 0x3f8 Mult
	var_270_bool = var_239_float < var_269_float; // 0x3f9 LT
	if(var_270_bool == 0) goto Label_1025; // 0x3fa JumpB
	var_271_bool = 0; var_272_float = 0; // 0x3fb PushV
	var_272_float = var_229_float; // 0x3fc Mov
	func_886(var_239_float, var_271_bool, var_272_float); // 0x3fd Call
	var_228_bool = 1; // 0x3ff MovB
	return 10; // 0x400 Return
	
Label_1025:
	sync(); // 0x401 Func
	goto Label_991; // 0x403 Jump
}


func_611(var_186_string)
{
	var_186_string = "walk"; // 0x263 MovS
	return 0; // 0x264 Return
}


func_101(var_0_object, var_74_object)
{
	var_75_bool = 0; var_76_int = 0; var_77_bool = 0; var_78_int = 0; // 0x65 PushV
	var_0_object = var_74_object; // 0x66 TMov
	Face(var_0_object); // 0x67 Func
	var_79_int = 100; // 0x69 PushI
	var_80_int = 15; // 0x6a PushI
	SetTimer(var_79_int, var_80_int); // 0x6b Func
	
Label_109:
	var_81_bool = var_0_object != 0; // 0x6d NullNeq
	if(var_81_bool == 0) goto Label_124; // 0x6e JumpB
	var_82_int = 5; // 0x6f PushI
	irand(var_78_int, var_82_int); // 0x70 Func
	var_83_int = 5; // 0x72 PushI
	var_84_int = var_78_int + var_83_int; // 0x73 Add
	Sleep(var_84_int, var_77_bool); // 0x74 Func
	var_85_bool = 0; // 0x76 PushV
	func_86(var_78_int, var_85_bool); // 0x77 Call
	if(var_85_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_124; // 0x7a Jump
	
Label_124:
	func_69(var_77_bool, var_78_int); // 0x7d Call
	return 4; // 0x7f Return
	
Label_123:
	goto Label_109; // 0x7b Jump
}


func_613(var_187_string)
{
	var_187_string = "run"; // 0x265 MovS
	return 0; // 0x266 Return
}


func_1125(var_367_int)
{
	var_367_int = 0; // 0x465 MovI
	return 0; // 0x466 Return
}


func_1127()
{
	return 0; // 0x468 Return
}


func_1897(var_67_object)
{
	var_68_object = Obj(); // 0x76a PushV
	var_68_object = var_67_object; // 0x76b Mov
	TaskCall(0); // 0x76c TaskCall
	func_0(var_70_float, var_71_float, var_68_object); // 0x76d Call
	TaskReturn(); // 0x76e TaskReturn
	return 0; // 0x770 Return
}


func_1129(var_296_int)
{
	var_296_int = 1; // 0x469 MovI
	return 0; // 0x46a Return
}


func_235(var_0_object, var_1_float)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; // 0xeb PushV
	var_0_object = 0; // 0xec TMovB
	var_1_float = 0; // 0xed TMovB
	var_30_float = 0.5; // 0xee PushF
	rand(var_23_float, var_30_float); // 0xef Func
	Sleep(var_23_float); // 0xf1 Func
	
Label_243:
	var_31_bool = var_0_object == 0; // 0xf3 Not
	if(var_31_bool == 0) goto Label_291; // 0xf4 JumpB
	var_32_bool = var_1_float == 0; // 0xf5 Not
	if(var_32_bool == 0) goto Label_263; // 0xf6 JumpB
	
Label_247:
	GetPosition(var_25_cvector); // 0xf7 Func
	GetCameraFarDistance(var_26_float); // 0xf9 Func
	var_33_float = 2.5; // 0xfb PushF
	var_26_float = var_26_float * var_33_float; // 0xfc Mult2
	GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_26_float, var_27_bool); // 0xfd Func
	var_34_bool = var_27_bool; // 0xff Push
	if(var_34_bool == 0) goto Label_258; // 0x100 JumpB
	goto Label_262; // 0x101 Jump
	
Label_262:
	goto Label_264; // 0x106 Jump
	
Label_264:
	FindShiftedPathTo(var_28_object, var_24_cvector); // 0x108 Func
	var_35_bool = var_28_object != 0; // 0x10a NullNeq
	if(var_35_bool == 0) goto Label_286; // 0x10b JumpB
	RotatePath(var_28_object, var_29_bool); // 0x10c Func
	var_36_bool = var_29_bool; // 0x10e Push
	if(var_36_bool == 0) goto Label_285; // 0x10f JumpB
	var_37_bool = 0; // 0x110 PushV
	func_315(var_37_bool); // 0x111 Call
	FollowPath(var_28_object, var_37_bool, var_29_bool); // 0x113 Func
	var_28_object = 0; // 0x115 SetNull
	var_38_bool = var_29_bool; // 0x116 Push
	if(var_38_bool == 0) goto Label_285; // 0x117 JumpB
	TaskCall(2); // 0x119 TaskCall
	func_377(); // 0x11a Call
	TaskReturn(); // 0x11b TaskReturn
	
Label_285:
	goto Label_289; // 0x11d Jump
	
Label_289:
	var_28_object = 0; // 0x121 SetNull
	goto Label_243; // 0x122 Jump
	
Label_286:
	var_90_int = 1; // 0x11e PushI
	Sleep(var_90_int); // 0x11f Func
	
Label_258:
	var_91_int = 1; // 0x102 PushI
	Sleep(var_91_int); // 0x103 Func
	goto Label_247; // 0x105 Jump
	
Label_263:
	var_1_float = 0; // 0x107 TMovB
	
Label_291:
	return 14; // 0x123 Return
}


func_1131(var_291_float)
{
	var_291_float = 0.5; // 0x46b MovF
	return 0; // 0x46c Return
}


func_1641()
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; // 0x669 PushV
	var_48_int = 0; // 0x66a PushI
	ClearSubContainer(var_48_int); // 0x66b Func
	var_49_int = 0; var_50_int = 0; // 0x66d PushV
	var_49_int = 0; // 0x66e MovI
	var_51_int = 100; // 0x66f PushI
	var_52_int = 0; // 0x670 PushV
	func_1578(var_52_int); // 0x671 Call
	var_58_int = 100; // 0x673 PushI
	var_59_float = var_52_int * var_58_int; // 0x674 Mult
	var_50_int = var_51_int + var_59_float; // 0x675 Add2
	func_1611(var_49_int, var_50_int); // 0x676 Call
	var_78_int = 0; // 0x678 PushV
	func_1578(var_78_int); // 0x679 Call
	var_47_int = var_78_int; // 0x67a Mov
	var_79_int = 3; // 0x67c PushI
	irand(var_45_int, var_79_int); // 0x67d Func
	var_80_int = 0; // 0x67f PushI
	var_81_bool = var_45_int == var_80_int; // 0x680 Eq
	if(var_81_bool == 0) goto Label_1674; // 0x681 JumpB
	var_82_int = 0; var_83_string = ""; // 0x682 PushV
	var_83_string = "bottle_water"; // 0x683 MovS
	func_1841(var_82_int, var_83_string); // 0x684 Call
	var_86_int = 0; // 0x686 PushI
	var_87_int = 1; // 0x687 PushI
	AddItem(var_46_bool, var_82_int, var_86_int, var_87_int); // 0x688 Func
	
Label_1674:
	var_88_int = 3; // 0x68a PushI
	irand(var_45_int, var_88_int); // 0x68b Func
	var_89_int = 0; // 0x68d PushI
	var_90_bool = var_45_int == var_89_int; // 0x68e Eq
	if(var_90_bool == 0) goto Label_1688; // 0x68f JumpB
	var_91_int = 0; var_92_string = ""; // 0x690 PushV
	var_92_string = "rusk"; // 0x691 MovS
	func_1841(var_91_int, var_92_string); // 0x692 Call
	var_93_int = 0; // 0x694 PushI
	var_94_int = 1; // 0x695 PushI
	AddItem(var_46_bool, var_91_int, var_93_int, var_94_int); // 0x696 Func
	
Label_1688:
	var_95_int = 7; // 0x698 PushI
	irand(var_45_int, var_95_int); // 0x699 Func
	var_96_int = 0; // 0x69b PushI
	var_97_bool = var_45_int == var_96_int; // 0x69c Eq
	if(var_97_bool == 0) goto Label_1702; // 0x69d JumpB
	var_98_int = 0; var_99_string = ""; // 0x69e PushV
	var_99_string = "bandage"; // 0x69f MovS
	func_1841(var_98_int, var_99_string); // 0x6a0 Call
	var_100_int = 0; // 0x6a2 PushI
	var_101_int = 1; // 0x6a3 PushI
	AddItem(var_46_bool, var_98_int, var_100_int, var_101_int); // 0x6a4 Func
	
Label_1702:
	var_102_int = 7; // 0x6a6 PushI
	irand(var_45_int, var_102_int); // 0x6a7 Func
	var_103_int = 0; // 0x6a9 PushI
	var_104_bool = var_45_int == var_103_int; // 0x6aa Eq
	if(var_104_bool == 0) goto Label_1716; // 0x6ab JumpB
	var_105_int = 0; var_106_string = ""; // 0x6ac PushV
	var_106_string = "tourniquet"; // 0x6ad MovS
	func_1841(var_105_int, var_106_string); // 0x6ae Call
	var_107_int = 0; // 0x6b0 PushI
	var_108_int = 1; // 0x6b1 PushI
	AddItem(var_46_bool, var_105_int, var_107_int, var_108_int); // 0x6b2 Func
	
Label_1716:
	var_109_int = 20; // 0x6b4 PushI
	irand(var_45_int, var_109_int); // 0x6b5 Func
	var_110_int = 0; // 0x6b7 PushI
	var_111_bool = var_45_int == var_110_int; // 0x6b8 Eq
	if(var_111_bool == 0) goto Label_1730; // 0x6b9 JumpB
	var_112_int = 0; var_113_string = ""; // 0x6ba PushV
	var_113_string = "packet"; // 0x6bb MovS
	func_1841(var_112_int, var_113_string); // 0x6bc Call
	var_114_int = 0; // 0x6be PushI
	var_115_int = 1; // 0x6bf PushI
	AddItem(var_46_bool, var_112_int, var_114_int, var_115_int); // 0x6c0 Func
	
Label_1730:
	var_116_int = 20; // 0x6c2 PushI
	irand(var_45_int, var_116_int); // 0x6c3 Func
	var_117_int = 0; // 0x6c5 PushI
	var_118_bool = var_45_int == var_117_int; // 0x6c6 Eq
	if(var_118_bool == 0) goto Label_1744; // 0x6c7 JumpB
	var_119_int = 0; var_120_string = ""; // 0x6c8 PushV
	var_120_string = "hook"; // 0x6c9 MovS
	func_1841(var_119_int, var_120_string); // 0x6ca Call
	var_121_int = 0; // 0x6cc PushI
	var_122_int = 1; // 0x6cd PushI
	AddItem(var_46_bool, var_119_int, var_121_int, var_122_int); // 0x6ce Func
	
Label_1744:
	var_123_int = 30; // 0x6d0 PushI
	irand(var_45_int, var_123_int); // 0x6d1 Func
	var_124_int = 0; // 0x6d3 PushI
	var_125_bool = var_45_int == var_124_int; // 0x6d4 Eq
	if(var_125_bool == 0) goto Label_1758; // 0x6d5 JumpB
	var_126_int = 0; var_127_string = ""; // 0x6d6 PushV
	var_127_string = "watch"; // 0x6d7 MovS
	func_1841(var_126_int, var_127_string); // 0x6d8 Call
	var_128_int = 0; // 0x6da PushI
	var_129_int = 1; // 0x6db PushI
	AddItem(var_46_bool, var_126_int, var_128_int, var_129_int); // 0x6dc Func
	
Label_1758:
	var_130_int = 3; // 0x6de PushI
	var_131_bool = var_47_int >= var_130_int; // 0x6df GE
	if(var_131_bool == 0) goto Label_1775; // 0x6e0 JumpB
	var_132_int = 2; // 0x6e1 PushI
	irand(var_45_int, var_132_int); // 0x6e2 Func
	var_133_int = 0; // 0x6e4 PushI
	var_134_bool = var_45_int == var_133_int; // 0x6e5 Eq
	if(var_134_bool == 0) goto Label_1775; // 0x6e6 JumpB
	var_135_int = 0; var_136_string = ""; // 0x6e7 PushV
	var_136_string = "alpha_pills"; // 0x6e8 MovS
	func_1841(var_135_int, var_136_string); // 0x6e9 Call
	var_137_int = 0; // 0x6eb PushI
	var_138_int = 1; // 0x6ec PushI
	AddItem(var_46_bool, var_135_int, var_137_int, var_138_int); // 0x6ed Func
	
Label_1775:
	var_139_int = 4; // 0x6ef PushI
	var_140_bool = var_47_int >= var_139_int; // 0x6f0 GE
	if(var_140_bool == 0) goto Label_1792; // 0x6f1 JumpB
	var_141_int = 5; // 0x6f2 PushI
	irand(var_45_int, var_141_int); // 0x6f3 Func
	var_142_int = 0; // 0x6f5 PushI
	var_143_bool = var_45_int == var_142_int; // 0x6f6 Eq
	if(var_143_bool == 0) goto Label_1792; // 0x6f7 JumpB
	var_144_int = 0; var_145_string = ""; // 0x6f8 PushV
	var_145_string = "beta_pills"; // 0x6f9 MovS
	func_1841(var_144_int, var_145_string); // 0x6fa Call
	var_146_int = 0; // 0x6fc PushI
	var_147_int = 1; // 0x6fd PushI
	AddItem(var_46_bool, var_144_int, var_146_int, var_147_int); // 0x6fe Func
	
Label_1792:
	var_148_int = 6; // 0x700 PushI
	var_149_bool = var_47_int >= var_148_int; // 0x701 GE
	if(var_149_bool == 0) goto Label_1809; // 0x702 JumpB
	var_150_int = 8; // 0x703 PushI
	irand(var_45_int, var_150_int); // 0x704 Func
	var_151_int = 0; // 0x706 PushI
	var_152_bool = var_45_int == var_151_int; // 0x707 Eq
	if(var_152_bool == 0) goto Label_1809; // 0x708 JumpB
	var_153_int = 0; var_154_string = ""; // 0x709 PushV
	var_154_string = "gamma_pills"; // 0x70a MovS
	func_1841(var_153_int, var_154_string); // 0x70b Call
	var_155_int = 0; // 0x70d PushI
	var_156_int = 1; // 0x70e PushI
	AddItem(var_46_bool, var_153_int, var_155_int, var_156_int); // 0x70f Func
	
Label_1809:
	var_157_int = 8; // 0x711 PushI
	var_158_bool = var_47_int >= var_157_int; // 0x712 GE
	if(var_158_bool == 0) goto Label_1840; // 0x713 JumpB
	var_159_int = 2; // 0x714 PushI
	irand(var_45_int, var_159_int); // 0x715 Func
	var_160_int = 0; // 0x717 PushI
	var_161_bool = var_45_int == var_160_int; // 0x718 Eq
	if(var_161_bool == 0) goto Label_1826; // 0x719 JumpB
	var_162_int = 0; var_163_string = ""; // 0x71a PushV
	var_163_string = "revolver_ammo"; // 0x71b MovS
	func_1841(var_162_int, var_163_string); // 0x71c Call
	var_164_int = 0; // 0x71e PushI
	var_165_int = 1; // 0x71f PushI
	AddItem(var_46_bool, var_162_int, var_164_int, var_165_int); // 0x720 Func
	
Label_1826:
	var_166_int = 2; // 0x722 PushI
	irand(var_45_int, var_166_int); // 0x723 Func
	var_167_int = 0; // 0x725 PushI
	var_168_bool = var_45_int == var_167_int; // 0x726 Eq
	if(var_168_bool == 0) goto Label_1840; // 0x727 JumpB
	var_169_int = 0; var_170_string = ""; // 0x728 PushV
	var_170_string = "rifle_ammo"; // 0x729 MovS
	func_1841(var_169_int, var_170_string); // 0x72a Call
	var_171_int = 0; // 0x72c PushI
	var_172_int = 1; // 0x72d PushI
	AddItem(var_46_bool, var_169_int, var_171_int, var_172_int); // 0x72e Func
	
Label_1840:
	return 6; // 0x730 Return
}


func_615(var_86_object, var_87_bool)
{
	var_93_object = Obj(); var_94_bool = 0; var_95_float = 0; // 0x268 PushV
	var_93_object = var_86_object; // 0x269 Mov
	var_94_bool = var_87_bool; // 0x26a Mov
	var_95_float = 180.0; // 0x26b MovF
	func_642(var_89_int, var_90_int, var_91_bool, var_92_int, var_86_object, var_87_bool, var_93_object, var_94_bool, var_95_float); // 0x26c Call
	return 0; // 0x26e Return
}


func_623(var_311_float)
{
	var_311_float = 0.1; // 0x270 MovF
	return 0; // 0x271 Return
}


func_1264(var_196_string)
{
	RemoveRTEnvelope(); // 0x4f1 Func
	SetDeathState(); // 0x4f3 Func
	Stop(); // 0x4f5 Func
	StopAsync(); // 0x4f7 Func
	StopSecondaryAnimation(); // 0x4f9 Func
	var_197_string = "all"; // 0x4fb PushS
	PlayAnimation(var_197_string, var_196_string); // 0x4fc Func
	WaitForAnimEnd(); // 0x4fe Func
	var_198_string = "all"; // 0x500 PushS
	LockAnimationEnd(var_198_string, var_196_string); // 0x501 Func
	RemoveEnvelope(); // 0x503 Func
	return 0; // 0x505 Return
}


func_1905(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x772 PushV
	var_16_object = var_14_object; // 0x773 Mov
	func_1853(var_15_bool, var_16_object); // 0x774 Call
	var_13_bool = var_15_bool; // 0x775 Mov
	return 0; // 0x777 Return
}


func_626(var_318_int)
{
	var_318_int = 0; // 0x273 MovI
	return 0; // 0x274 Return
}


func_1133(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x46d PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x46e Func
	var_17_bool = var_16_bool; // 0x470 Push
	if(var_17_bool == 0) goto Label_1146; // 0x471 JumpB
	var_18_bool = 0; var_19_object = Obj(); var_20_string = ""; var_21_float = 0; var_22_float = 0; var_23_float = 0; // 0x472 PushV
	var_19_object = var_14_object; // 0x473 Mov
	var_20_string = "reputation"; // 0x474 MovS
	var_21_float = -0.3; // 0x475 MovF
	var_22_float = 0; // 0x476 MovI
	var_23_float = 1; // 0x477 MovI
	func_1320(var_18_bool, var_19_object, var_20_string, var_21_float, var_22_float, var_23_float); // 0x478 Call
	
Label_1146:
	func_1641(); // 0x47b Call
	var_173_object = Obj(); // 0x47d PushV
	var_173_object = var_14_object; // 0x47e Mov
	func_1154(var_173_object); // 0x47f Call
	return 2; // 0x481 Return
}


func_886(var_0_object, var_271_bool, var_272_float)
{
	var_273_int = 0; var_274_bool = 0; var_275_int = 0; var_276_bool = 0; // 0x376 PushV
	irand(var_275_int, var_276_bool); // 0x377 Func
	var_277_int = 1; // 0x379 PushI
	var_275_int = var_275_int + var_277_int; // 0x37a Add2
	Face(var_0_object); // 0x37b Func
	var_278_bool = 1; // 0x37d PushB
	SetAttackState(var_278_bool); // 0x37e Func
	var_279_string = "all"; // 0x380 PushS
	var_280_string = "attack_begin"; // 0x381 PushS
	var_281_int = var_280_string + var_275_int; // 0x382 Add
	PlayAnimation(var_279_string, var_281_int); // 0x383 Func
	WaitForAnimEnd(); // 0x385 Func
	func_1093(var_275_int, var_276_bool); // 0x388 Call
	var_297_bool = 0; var_298_object = Obj(); // 0x38a PushV
	var_298_object = var_0_object; // 0x38b MovT
	func_1447(var_297_bool, var_298_object); // 0x38c Call
	var_299_bool = var_297_bool == 0; // 0x38e Not
	if(var_299_bool == 0) goto Label_916; // 0x38f JumpB
	StopAsync(); // 0x390 Func
	var_271_bool = 0; // 0x392 MovB
	return 4; // 0x393 Return
	
Label_916:
	var_300_float = 0; var_301_int = 0; // 0x394 PushV
	var_300_float = var_272_float; // 0x395 Mov
	var_301_int = var_275_int; // 0x396 Mov
	func_847(var_276_bool, var_300_float, var_301_int); // 0x397 Call
	var_370_string = "all"; // 0x399 PushS
	var_371_string = "attack_middle"; // 0x39a PushS
	var_372_int = var_371_string + var_275_int; // 0x39b Add
	HasAnimation(var_276_bool, var_370_string, var_372_int); // 0x39c Func
	var_373_bool = var_276_bool; // 0x39e Push
	if(var_373_bool == 0) goto Label_950; // 0x39f JumpB
	var_374_string = "all"; // 0x3a0 PushS
	var_375_string = "attack_middle"; // 0x3a1 PushS
	var_376_int = var_375_string + var_275_int; // 0x3a2 Add
	PlayAnimation(var_374_string, var_376_int); // 0x3a3 Func
	WaitForAnimEnd(); // 0x3a5 Func
	var_377_bool = 0; var_378_object = Obj(); // 0x3a7 PushV
	var_378_object = var_0_object; // 0x3a8 MovT
	func_1447(var_377_bool, var_378_object); // 0x3a9 Call
	var_379_bool = var_377_bool == 0; // 0x3ab Not
	if(var_379_bool == 0) goto Label_945; // 0x3ac JumpB
	StopAsync(); // 0x3ad Func
	var_271_bool = 0; // 0x3af MovB
	return 4; // 0x3b0 Return
	
Label_945:
	var_380_float = 0; var_381_int = 0; // 0x3b1 PushV
	var_380_float = var_272_float; // 0x3b2 Mov
	var_381_int = var_275_int; // 0x3b3 Mov
	func_847(var_276_bool, var_380_float, var_381_int); // 0x3b4 Call
	
Label_950:
	var_382_bool = 0; // 0x3b6 PushB
	SetAttackState(var_382_bool); // 0x3b7 Func
	var_383_string = "all"; // 0x3b9 PushS
	var_384_string = "attack_end"; // 0x3ba PushS
	var_385_int = var_384_string + var_275_int; // 0x3bb Add
	PlayAnimation(var_383_string, var_385_int); // 0x3bc Func
	var_386_bool = 0; var_387_float = 0; // 0x3be PushV
	var_387_float = 0.75; // 0x3bf MovF
	func_966(var_386_bool, var_387_float); // 0x3c0 Call
	StopAsync(); // 0x3c2 Func
	var_271_bool = 1; // 0x3c4 MovB
	return 4; // 0x3c5 Return
}


func_1912(var_64_object)
{
	var_65_object = Obj(); var_66_bool = 0; // 0x779 PushV
	var_65_object = var_64_object; // 0x77a Mov
	var_66_bool = 1; // 0x77b MovB
	TaskCall(4); // 0x77c TaskCall
	func_615(var_65_object, var_66_bool); // 0x77d Call
	TaskReturn(); // 0x77e TaskReturn
	ResetAAS(); // 0x780 Func
	return 0; // 0x782 Return
}


func_377()
{
	var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; // 0x179 PushV
	WaitForAnimEnd(); // 0x17a Func
	var_53_bool = 0; // 0x17c PushV
	func_1549(var_53_bool); // 0x17d Call
	var_56_bool = var_53_bool == 0; // 0x17f Not
	if(var_56_bool == 0) goto Label_386; // 0x180 JumpB
	return 14; // 0x181 Return
	
Label_386:
	var_57_int = 0; // 0x182 PushV
	func_1594(var_57_int); // 0x183 Call
	var_46_int = var_57_int; // 0x184 Mov
	var_47_int = 0; // 0x186 MovI
	
Label_391:
	var_70_bool = 0; // 0x187 PushV
	var_70_bool = 0; // 0x188 MovB
	var_71_int = 5; // 0x189 PushI
	var_72_bool = var_47_int < var_71_int; // 0x18a LT
	if(var_72_bool == 0) goto Label_401; // 0x18b JumpB
	var_73_bool = 0; // 0x18c PushV
	func_1549(var_73_bool); // 0x18d Call
	if(var_73_bool == 0) goto Label_401; // 0x18f JumpB
	var_70_bool = 1; // 0x190 MovB
	
Label_401:
	if(var_70_bool == 0) goto Label_445; // 0x191 JumpB
	var_74_int = 3; // 0x192 PushI
	irand(var_48_int, var_74_int); // 0x193 Func
	var_75_int = 0; // 0x195 PushI
	var_76_bool = var_48_int == var_75_int; // 0x196 Eq
	if(var_76_bool == 0) goto Label_425; // 0x197 JumpB
	var_77_int = var_46_int; // 0x198 Push
	if(var_77_int == 0) goto Label_424; // 0x199 JumpB
	irand(var_49_int, var_46_int); // 0x19a Func
	var_78_string = "all"; // 0x19c PushS
	var_79_string = ""; var_80_int = 0; // 0x19d PushV
	var_80_int = var_49_int; // 0x19e Mov
	func_1587(var_79_string, var_80_int); // 0x19f Call
	PlayAnimation(var_78_string, var_79_string); // 0x1a1 Func
	WaitForAnimEnd(var_50_bool); // 0x1a3 Func
	var_81_bool = var_50_bool == 0; // 0x1a5 Not
	if(var_81_bool == 0) goto Label_424; // 0x1a6 JumpB
	goto Label_445; // 0x1a7 Jump
	
Label_445:
	return 14; // 0x1bd Return
	
Label_424:
	goto Label_442; // 0x1a8 Jump
	
Label_442:
	var_82_int = 1; // 0x1ba PushI
	var_47_int = var_47_int + var_82_int; // 0x1bb Add2
	goto Label_391; // 0x1bc Jump
	
Label_425:
	var_83_int = 1; // 0x1a9 PushI
	var_84_bool = var_48_int == var_83_int; // 0x1aa Eq
	if(var_84_bool == 0) goto Label_439; // 0x1ab JumpB
	var_85_int = 4; // 0x1ac PushI
	rand(var_51_float, var_85_int); // 0x1ad Func
	var_86_int = 1; // 0x1af PushI
	var_87_int = var_51_float + var_86_int; // 0x1b0 Add
	Sleep(var_87_int, var_52_bool); // 0x1b1 Func
	var_88_bool = var_52_bool == 0; // 0x1b3 Not
	if(var_88_bool == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_445; // 0x1b5 Jump
	
Label_438:
	goto Label_442; // 0x1b6 Jump
	
Label_439:
	var_89_int = var_47_int; // 0x1b7 Push
	if(var_89_int == 0) goto Label_442; // 0x1b8 JumpB
	goto Label_445; // 0x1b9 Jump
}


func_1406(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x57e PushV
	IsDead(var_35_bool); // 0x57f ObjFunc
	var_32_bool = var_35_bool; // 0x581 Mov
	return 2; // 0x582 Return
}


