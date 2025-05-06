task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x18 PushV
	IsOverrideActive(var_16_bool); // 0x19 Func
	var_17_bool = var_16_bool == 0; // 0x1b Not
	if(var_17_bool == 0) goto Label_31; // 0x1c JumpB
	WorkWithCorpse(var_14_bool); // 0x1d Func
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool)
{
	return 0; // 0x8e Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	return 0; // 0x90 Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	return 0; // 0x92 Return
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	func_160(); // 0xa9 Call
	var_16_object = Obj(); // 0xab PushV
	var_16_object = var_14_bool; // 0xac Mov
	func_2323(); // 0xad Call
	return 0; // 0xaf Return
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0xb0 PushV
	var_21_int = 130; // 0xb1 PushI
	var_22_bool = var_14_bool != var_21_int; // 0xb2 Neq
	if(var_22_bool == 0) goto Label_181; // 0xb3 JumpB
	return 6; // 0xb4 Return
	
Label_181:
	IsInWalkMode(var_18_bool); // 0xb5 Func
	var_23_bool = var_18_bool; // 0xb7 Push
	if(var_23_bool == 0) goto Label_214; // 0xb8 JumpB
	GetBrightness(var_19_float); // 0xb9 Func
	var_24_float = 0.2; // 0xbb PushF
	var_20_bool = var_19_float <= var_24_float; // 0xbc LE2
	var_25_bool = var_20_bool != var_2_bool; // 0xbd Neq
	if(var_25_bool == 0) goto Label_214; // 0xbe JumpB
	var_2_bool = var_20_bool; // 0xbf TMov
	var_26_bool = var_20_bool; // 0xc0 Push
	if(var_26_bool == 0) goto Label_214; // 0xc1 JumpB
	func_335(var_19_float, var_20_bool); // 0xc3 Call
	var_27_int = 130; // 0xc5 PushI
	KillTimer(var_27_int); // 0xc6 Func
	var_28_bool = 0; // 0xc8 PushV
	TaskCall(3); // 0xc9 TaskCall
	func_467(var_28_bool); // 0xca Call
	TaskReturn(); // 0xcb TaskReturn
	if(var_28_bool == 0) goto Label_210; // 0xcd JumpB
	func_328(var_19_float, var_20_bool); // 0xcf Call
	goto Label_214; // 0xd1 Jump
	
Label_214:
	return 6; // 0xd6 Return
	
Label_210:
	var_32_int = 130; // 0xd2 PushI
	var_33_float = 0.3; // 0xd3 PushF
	SetTimer(var_32_int, var_33_float); // 0xd4 Func
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0xd8 PushV
	var_16_object = var_14_bool; // 0xd9 Mov
	func_2184(var_15_bool, var_16_object); // 0xda Call
	if(var_15_bool == 0) goto Label_228; // 0xdc JumpB
	func_160(); // 0xde Call
	var_67_object = Obj(); // 0xe0 PushV
	var_67_object = var_14_bool; // 0xe1 Mov
	func_2191(var_67_object); // 0xe2 Call
	
Label_228:
	return 0; // 0xe4 Return
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0xe6 PushV
	var_16_object = var_14_bool; // 0xe7 Mov
	func_2160(var_15_bool, var_16_object); // 0xe8 Call
	if(var_15_bool == 0) goto Label_242; // 0xea JumpB
	func_160(); // 0xec Call
	var_67_object = Obj(); // 0xee PushV
	var_67_object = var_14_bool; // 0xef Mov
	func_2167(var_67_object); // 0xf0 Call
	
Label_242:
	return 0; // 0xf2 Return
}


	task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_53_object)
	{
	func_160(); // 0xf5 Call
	var_55_object = Obj(); // 0xf7 PushV
	var_55_object = var_53_object; // 0xf8 Mov
	func_2221(var_55_object); // 0xf9 Call
	return 0; // 0xfb Return
	}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0xfd PushV
	var_17_object = var_14_object; // 0xfe Mov
	var_18_object = var_15_bool; // 0xff Mov
	func_2249(var_16_bool, var_17_object, var_18_object); // 0x100 Call
	if(var_16_bool == 0) goto Label_263; // 0x102 JumpB
	var_53_object = Obj(); // 0x103 PushV
	var_53_object = var_14_object; // 0x104 Mov
	func_243(); // 0x105 Call
	
Label_263:
	return 0; // 0x107 Return
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	RequestClearPath(var_14_bool); // 0x142 Func
	return 0; // 0x144 Return
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool)
{
	Stop(); // 0x145 Func
	return 0; // 0x147 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x159 PushV
	var_16_object = var_14_bool; // 0x15a Mov
	func_2184(var_15_bool, var_16_object); // 0x15b Call
	if(var_15_bool == 0) goto Label_357; // 0x15d JumpB
	func_462(); // 0x15f Call
	var_66_object = Obj(); // 0x161 PushV
	var_66_object = var_14_bool; // 0x162 Mov
	func_2191(var_66_object); // 0x163 Call
	
Label_357:
	return 0; // 0x165 Return
}


task_2_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x167 PushV
	var_16_object = var_14_bool; // 0x168 Mov
	func_2160(var_15_bool, var_16_object); // 0x169 Call
	if(var_15_bool == 0) goto Label_371; // 0x16b JumpB
	func_462(); // 0x16d Call
	var_66_object = Obj(); // 0x16f PushV
	var_66_object = var_14_bool; // 0x170 Mov
	func_2167(var_66_object); // 0x171 Call
	
Label_371:
	return 0; // 0x173 Return
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_53_object)
	{
	func_462(); // 0x176 Call
	var_54_object = Obj(); // 0x178 PushV
	var_54_object = var_53_object; // 0x179 Mov
	func_2221(var_54_object); // 0x17a Call
	return 0; // 0x17c Return
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x17e PushV
	var_17_object = var_14_object; // 0x17f Mov
	var_18_object = var_15_bool; // 0x180 Mov
	func_2249(var_16_bool, var_17_object, var_18_object); // 0x181 Call
	if(var_16_bool == 0) goto Label_392; // 0x183 JumpB
	var_53_object = Obj(); // 0x184 PushV
	var_53_object = var_14_object; // 0x185 Mov
	func_372(); // 0x186 Call
	
Label_392:
	return 0; // 0x188 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	func_473(); // 0x1de Call
	var_15_object = Obj(); // 0x1e0 PushV
	var_15_object = var_14_bool; // 0x1e1 Mov
	func_2323(); // 0x1e2 Call
	return 0; // 0x1e4 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x1e6 PushV
	var_16_object = var_14_bool; // 0x1e7 Mov
	func_2184(var_15_bool, var_16_object); // 0x1e8 Call
	if(var_15_bool == 0) goto Label_498; // 0x1ea JumpB
	func_473(); // 0x1ec Call
	var_66_object = Obj(); // 0x1ee PushV
	var_66_object = var_14_bool; // 0x1ef Mov
	func_2191(var_66_object); // 0x1f0 Call
	
Label_498:
	return 0; // 0x1f2 Return
}


task_3_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x1f4 PushV
	var_16_object = var_14_bool; // 0x1f5 Mov
	func_2160(var_15_bool, var_16_object); // 0x1f6 Call
	if(var_15_bool == 0) goto Label_512; // 0x1f8 JumpB
	func_473(); // 0x1fa Call
	var_66_object = Obj(); // 0x1fc PushV
	var_66_object = var_14_bool; // 0x1fd Mov
	func_2167(var_66_object); // 0x1fe Call
	
Label_512:
	return 0; // 0x200 Return
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_53_object)
	{
	func_473(); // 0x203 Call
	var_54_object = Obj(); // 0x205 PushV
	var_54_object = var_53_object; // 0x206 Mov
	func_2221(var_54_object); // 0x207 Call
	return 0; // 0x209 Return
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x20b PushV
	var_17_object = var_14_object; // 0x20c Mov
	var_18_object = var_15_bool; // 0x20d Mov
	func_2249(var_16_bool, var_17_object, var_18_object); // 0x20e Call
	if(var_16_bool == 0) goto Label_533; // 0x210 JumpB
	var_53_object = Obj(); // 0x211 PushV
	var_53_object = var_14_object; // 0x212 Mov
	func_513(); // 0x213 Call
	
Label_533:
	return 0; // 0x215 Return
}


task_5_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x295 PushV
	var_15_object = var_14_bool; // 0x296 Mov
	func_2208(var_15_object); // 0x297 Call
	return 0; // 0x299 Return
}


task_5_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x29b PushV
	var_17_object = var_14_object; // 0x29c Mov
	var_18_object = var_15_bool; // 0x29d Mov
	func_2249(var_16_bool, var_17_object, var_18_object); // 0x29e Call
	return 0; // 0x2a0 Return
}


task_5_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_string, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_string = "kill"; // 0x2a2 PushS
	var_16_bool = var_14_bool == var_15_string; // 0x2a3 Eq
	if(var_16_bool == 0) goto Label_678; // 0x2a4 JumpB
	var_0_bool = 1; // 0x2a5 TMovB
	
Label_678:
	return 0; // 0x2a6 Return
}


task_6_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x2de PushV
	var_15_object = var_14_bool; // 0x2df Mov
	func_2208(var_15_object); // 0x2e0 Call
	return 0; // 0x2e2 Return
}


task_6_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x2e4 PushV
	var_17_object = var_14_object; // 0x2e5 Mov
	var_18_object = var_15_bool; // 0x2e6 Mov
	func_2249(var_16_bool, var_17_object, var_18_object); // 0x2e7 Call
	return 0; // 0x2e9 Return
}


task_6_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_string = "kill"; // 0x2eb PushS
	var_16_bool = var_14_bool == var_15_string; // 0x2ec Eq
	if(var_16_bool == 0) goto Label_753; // 0x2ed JumpB
	var_17_bool = GlobalVars[1]; // 0x2ee PushGE
	var_17_bool = 1; // 0x2ef MovB
	GlobalVars[1] = var_17_bool; // 0x2f0 PopGE
	
Label_753:
	return 0; // 0x2f1 Return
}


task_7_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x4de PushV
	var_15_object = var_14_bool; // 0x4df Mov
	func_2208(var_15_object); // 0x4e0 Call
	return 0; // 0x4e2 Return
}


task_7_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj(); // 0x4e4 PushV
	var_17_object = var_14_object; // 0x4e5 Mov
	var_18_object = var_15_bool; // 0x4e6 Mov
	func_2249(var_16_bool, var_17_object, var_18_object); // 0x4e7 Call
	return 0; // 0x4e9 Return
}


task_7_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_bool)
{
	var_15_string = "kill"; // 0x4eb PushS
	var_16_bool = var_14_bool == var_15_string; // 0x4ec Eq
	if(var_16_bool == 0) goto Label_1268; // 0x4ed JumpB
	var_17_bool = GlobalVars[1]; // 0x4ee PushGE
	var_17_bool = 1; // 0x4ef MovB
	GlobalVars[1] = var_17_bool; // 0x4f0 PopGE
	func_1393(var_14_bool); // 0x4f2 Call
	
Label_1268:
	return 0; // 0x4f4 Return
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_int = 0; // 0x55c PushI
	var_16_bool = var_14_bool != var_15_int; // 0x55d Neq
	if(var_16_bool == 0) goto Label_1376; // 0x55e JumpB
	return 0; // 0x55f Return
	
Label_1376:
	var_17_bool = 0; var_18_object = Obj(); // 0x560 PushV
	var_18_object = var_1_bool; // 0x561 MovT
	func_1409(var_17_bool, var_18_object); // 0x562 Call
	var_53_bool = var_17_bool == 0; // 0x564 Not
	if(var_53_bool == 0) goto Label_1383; // 0x565 JumpB
	var_0_bool = 1; // 0x566 TMovB
	
Label_1383:
	var_54_int = 0; // 0x567 PushI
	KillTimer(var_54_int); // 0x568 Func
	Stop(); // 0x56a Func
	return 0; // 0x56c Return
}


task_7_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	RequestClearPath(var_14_bool); // 0x56e Func
	return 0; // 0x570 Return
}


task_7_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_bool)
{
	func_1393(var_14_bool); // 0x57a Call
	var_16_object = Obj(); // 0x57c PushV
	var_16_object = var_14_bool; // 0x57d Mov
	func_2323(); // 0x57e Call
	return 0; // 0x580 Return
}


task_8_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1469(); // 0x5cc Call
	var_17_object = Obj(); // 0x5ce PushV
	var_17_object = var_14_object; // 0x5cf Mov
	func_2323(); // 0x5d0 Call
	return 0; // 0x5d2 Return
}


task_8_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_1469(); // 0x5d5 Call
	var_17_object = Obj(); // 0x5d7 PushV
	var_17_object = var_14_object; // 0x5d8 Mov
	func_2221(var_17_object); // 0x5d9 Call
	return 0; // 0x5db Return
}


task_8_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_int)
{
	var_15_int = 0; // 0x643 PushI
	var_16_bool = var_14_int != var_15_int; // 0x644 Neq
	if(var_16_bool == 0) goto Label_1607; // 0x645 JumpB
	return 0; // 0x646 Return
	
Label_1607:
	var_17_bool = 0; var_18_object = Obj(); // 0x647 PushV
	var_18_object = var_1_bool; // 0x648 MovT
	func_1462(var_17_bool, var_18_object); // 0x649 Call
	var_42_bool = var_17_bool == 0; // 0x64b Not
	if(var_42_bool == 0) goto Label_1614; // 0x64c JumpB
	var_0_bool = 1; // 0x64d TMovB
	
Label_1614:
	var_43_int = 0; // 0x64e PushI
	KillTimer(var_43_int); // 0x64f Func
	Stop(); // 0x651 Func
	return 0; // 0x653 Return
}


task_8_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	RequestClearPath(var_14_object); // 0x655 Func
	return 0; // 0x657 Return
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x8ff PushV
	var_18_object = var_14_object; // 0x900 Mov
	var_19_int = var_15_int; // 0x901 Mov
	var_20_float = var_16_float; // 0x902 Mov
	func_1854(var_19_int, var_20_float); // 0x903 Call
	return 0; // 0x905 Return
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x906 PushV
	var_18_string = "health"; // 0x907 PushS
	var_19_bool = var_15_string == var_18_string; // 0x908 Eq
	if(var_19_bool == 0) goto Label_2322; // 0x909 JumpB
	var_20_string = "health"; // 0x90a PushS
	GetProperty(var_20_string, var_17_float); // 0x90b Func
	var_21_int = 0; // 0x90d PushI
	var_22_bool = var_17_float <= var_21_int; // 0x90e LE
	if(var_22_bool == 0) goto Label_2322; // 0x90f JumpB
	SignalDeath(var_14_object); // 0x910 Func
	
Label_2322:
	return 2; // 0x912 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj(); // 0x914 PushV
	var_15_object = var_14_object; // 0x915 Mov
	func_2294(var_15_object); // 0x916 Call
	return 0; // 0x918 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_bool)
{
	func_2121(); // 0x94 Call
	var_2_bool = 0; // 0x96 TMovB
	
Label_151:
	var_18_int = 130; // 0x97 PushI
	var_19_float = 0.3; // 0x98 PushF
	SetTimer(var_18_int, var_19_float); // 0x99 Func
	func_264(var_12_object, var_13_bool); // 0x9c Call
	goto Label_151; // 0x9e Jump
}


func_0(var_16_object)
{
	func_2052(); // 0x2 Call
	var_59_object = Obj(); // 0x4 PushV
	var_59_object = var_16_object; // 0x5 Mov
	func_9(var_59_object); // 0x6 Call
	return 0; // 0x8 Return
}


func_2052()
{
	var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_bool = 0; // 0x804 PushV
	var_21_int = 0; // 0x805 PushI
	ClearSubContainer(var_21_int); // 0x806 Func
	var_22_int = 0; var_23_int = 0; // 0x808 PushV
	var_22_int = 600; // 0x809 MovI
	var_23_int = 1500; // 0x80a MovI
	func_2022(var_22_int, var_23_int); // 0x80b Call
	var_42_int = 3; // 0x80d PushI
	irand(var_19_int, var_42_int); // 0x80e Func
	var_43_int = 0; // 0x810 PushI
	var_44_bool = var_19_int != var_43_int; // 0x811 Neq
	if(var_44_bool == 0) goto Label_2074; // 0x812 JumpB
	var_45_int = 0; var_46_string = ""; // 0x813 PushV
	var_46_string = "bottle_weapon"; // 0x814 MovS
	func_2094(var_45_int, var_46_string); // 0x815 Call
	var_49_int = 0; // 0x817 PushI
	AddItem(var_20_bool, var_45_int, var_49_int, var_19_int); // 0x818 Func
	
Label_2074:
	var_50_int = 3; // 0x81a PushI
	irand(var_19_int, var_50_int); // 0x81b Func
	var_51_int = 0; // 0x81d PushI
	var_52_bool = var_19_int == var_51_int; // 0x81e Eq
	if(var_52_bool == 0) goto Label_2093; // 0x81f JumpB
	var_53_int = 100; // 0x820 PushI
	irand(var_19_int, var_53_int); // 0x821 Func
	var_54_int = 0; // 0x823 PushI
	var_55_bool = var_19_int != var_54_int; // 0x824 Neq
	if(var_55_bool == 0) goto Label_2093; // 0x825 JumpB
	var_56_int = 0; var_57_string = ""; // 0x826 PushV
	var_57_string = "ognemet_ammo"; // 0x827 MovS
	func_2094(var_56_int, var_57_string); // 0x828 Call
	var_58_int = 0; // 0x82a PushI
	AddItem(var_20_bool, var_56_int, var_58_int, var_19_int); // 0x82b Func
	
Label_2093:
	return 4; // 0x82d Return
}


func_9(var_59_object)
{
	EventDisable(0); // 0xa EventDisable
	var_60_object = Obj(); // 0xb PushV
	var_60_object = var_59_object; // 0xc Mov
	func_32(var_60_object); // 0xd Call
	var_110_int = 50; // 0xf PushI
	var_111_int = 40; // 0x10 PushI
	SetRTEnvelope(var_110_int, var_111_int); // 0x11 Func
	EventEnable(0); // 0x13 EventEnable
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_534(var_60_bool, var_61_object, var_80_bool, var_528_object)
{
	var_62_float = 0; var_63_float = 0; // 0x216 PushV
	var_64_float = 0; var_65_object = Obj(); // 0x217 PushV
	var_65_object = var_61_object; // 0x218 Mov
	func_1643(var_65_object); // 0x219 Call
	var_63_float = var_64_float; // 0x21a Mov
	var_72_bool = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0; // 0x21c PushV
	var_73_float = var_63_float; // 0x21d Mov
	var_74_float = 250000.0; // 0x21e MovF
	var_75_float = 3240000.0; // 0x21f MovF
	func_1984(var_72_bool, var_73_float, var_74_float, var_75_float); // 0x220 Call
	if(var_72_bool == 0) goto Label_555; // 0x222 JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x223 PushV
	var_79_object = var_61_object; // 0x224 Mov
	TaskCall(5); // 0x225 TaskCall
	func_563(var_63_float, var_80_bool, var_78_bool, var_79_object); // 0x226 Call
	TaskReturn(); // 0x227 TaskReturn
	var_60_bool = var_80_bool; // 0x228 Mov
	return 2; // 0x22a Return
	
Label_555:
	var_526_bool = 0; var_527_object = Obj(); // 0x22b PushV
	var_527_object = var_61_object; // 0x22c Mov
	TaskCall(6); // 0x22d TaskCall
	func_679(var_526_bool, var_527_object); // 0x22e Call
	TaskReturn(); // 0x22f TaskReturn
	var_60_bool = var_528_object; // 0x230 Mov
	return 2; // 0x232 Return
}


func_32(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x20 PushV
	var_81_bool = var_60_object == 0; // 0x21 NullEq
	if(var_81_bool == 0) goto Label_40; // 0x22 JumpB
	var_82_string = ""; // 0x23 PushV
	var_82_string = "fdie"; // 0x24 MovS
	func_119(var_82_string); // 0x25 Call
	goto Label_118; // 0x27 Jump
	
Label_118:
	return 20; // 0x76 Return
	
Label_40:
	GetPosition(var_71_cvector); // 0x28 ObjFunc
	GetPosition(var_72_cvector); // 0x2a Func
	GetDirection(var_73_cvector); // 0x2c Func
	var_74_cvector = var_72_cvector - var_71_cvector; // 0x2e Sub2
	var_85_float = GetByIndex(var_74_cvector, 0); // 0x2f PushE
	var_86_float = GetByIndex(var_73_cvector, 0); // 0x30 PushE
	var_87_float = var_85_float * var_86_float; // 0x31 Mult
	var_88_float = GetByIndex(var_74_cvector, 2); // 0x32 PushE
	var_89_float = GetByIndex(var_73_cvector, 2); // 0x33 PushE
	var_90_float = var_88_float * var_89_float; // 0x34 Mult
	var_91_int = var_87_float + var_90_float; // 0x35 Add
	var_92_int = 0; // 0x36 PushI
	var_93_bool = var_91_int >= var_92_int; // 0x37 GE
	if(var_93_bool == 0) goto Label_59; // 0x38 JumpB
	var_75_string = "fdie"; // 0x39 MovS
	goto Label_60; // 0x3a Jump
	
Label_60:
	RemoveRTEnvelope(); // 0x3c Func
	SetDeathState(); // 0x3e Func
	Stop(); // 0x40 Func
	StopAsync(); // 0x42 Func
	var_76_object = var_60_object; // 0x44 Mov
	var_94_string = "GetScriptProperty"; // 0x45 PushS
	var_95_int = 2; // 0x46 PushI
	var_96_bool = IsFuncExist(var_60_object, var_94_string, var_95_int); // 0x47 FuncExist
	if(var_96_bool == 0) goto Label_84; // 0x48 JumpB
	var_97_string = "Owner"; // 0x49 PushS
	HasScriptProperty(var_77_bool, var_97_string); // 0x4a ObjFunc
	var_98_bool = var_77_bool; // 0x4c Push
	if(var_98_bool == 0) goto Label_84; // 0x4d JumpB
	var_99_string = "Owner"; // 0x4e PushS
	GetScriptProperty(var_76_object, var_99_string); // 0x4f ObjFunc
	var_100_bool = var_76_object == 0; // 0x51 NullEq
	if(var_100_bool == 0) goto Label_84; // 0x52 JumpB
	var_76_object = var_60_object; // 0x53 Mov
	
Label_84:
	var_101_string = "@GetEyesHeight"; // 0x54 PushS
	var_102_int = 1; // 0x55 PushI
	var_103_bool = IsFuncExist(var_76_object, var_101_string, var_102_int); // 0x56 FuncExist
	if(var_103_bool == 0) goto Label_99; // 0x57 JumpB
	GetEyesHeight(var_79_float); // 0x58 ObjFunc
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x5a MovV
	var_104_float = GetByIndex(var_80_cvector, 1); // 0x5b PushE
	var_104_float = var_79_float; // 0x5c Mov
	SetByIndex(var_80_cvector, 1) = var_104_float; // 0x5d PopE
	var_105_string = "head"; // 0x5e PushS
	LookAsync(var_60_object, var_105_string, var_80_cvector); // 0x5f Func
	var_78_bool = 1; // 0x61 MovB
	goto Label_100; // 0x62 Jump
	
Label_100:
	var_106_string = "all"; // 0x64 PushS
	PlayAnimation(var_106_string, var_75_string); // 0x65 Func
	WaitForAnimEnd(); // 0x67 Func
	var_107_bool = var_78_bool; // 0x69 Push
	if(var_107_bool == 0) goto Label_112; // 0x6a JumpB
	StopAsync(); // 0x6b Func
	var_108_string = "head"; // 0x6d PushS
	UnlookAsync(var_108_string); // 0x6e Func
	
Label_112:
	var_109_string = "all"; // 0x70 PushS
	LockAnimationEnd(var_109_string, var_75_string); // 0x71 Func
	RemoveEnvelope(); // 0x73 Func
	var_76_object = 0; // 0x75 SetNull
	
Label_99:
	var_78_bool = 0; // 0x63 MovB
	
Label_59:
	var_75_string = "bdie"; // 0x3b MovS
}


func_2094(var_45_int, var_46_string)
{
	var_47_int = 0; var_48_int = 0; // 0x82e PushV
	GetInvItemByName(var_48_int, var_46_string); // 0x82f Func
	var_45_int = var_48_int; // 0x831 Mov
	return 2; // 0x832 Return
}


func_563(var_0_bool, var_78_bool, var_79_object, var_180_object)
{
	var_81_object = Obj(); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_object = Obj(); var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_object = Obj(); var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0x233 PushV
	var_0_bool = 0; // 0x234 TMovB
	var_95_bool = 0; var_96_object = Obj(); // 0x235 PushV
	var_96_object = var_79_object; // 0x236 Mov
	func_1842(var_96_object); // 0x237 Call
	var_107_bool = 0; var_108_object = Obj(); // 0x239 PushV
	var_108_object = var_79_object; // 0x23a Mov
	func_1784(var_107_bool, var_108_object); // 0x23b Call
	var_109_bool = var_107_bool == 0; // 0x23d Not
	if(var_109_bool == 0) goto Label_577; // 0x23e JumpB
	var_78_bool = 0; // 0x23f MovB
	return 14; // 0x240 Return
	
Label_577:
	Face(var_79_object); // 0x241 Func
	var_110_string = "all"; // 0x243 PushS
	var_111_string = "aattack_begin1"; // 0x244 PushS
	PlayAnimation(var_110_string, var_111_string); // 0x245 Func
	WaitForAnimEnd(); // 0x247 Func
	var_112_bool = 0; var_113_object = Obj(); // 0x249 PushV
	var_113_object = var_79_object; // 0x24a Mov
	func_1784(var_112_bool, var_113_object); // 0x24b Call
	var_114_bool = var_112_bool == 0; // 0x24d Not
	if(var_114_bool == 0) goto Label_595; // 0x24e JumpB
	StopAsync(); // 0x24f Func
	var_78_bool = 0; // 0x251 MovB
	return 14; // 0x252 Return
	
Label_595:
	var_115_string = "all"; // 0x253 PushS
	var_116_string = "aattack_end1"; // 0x254 PushS
	PlayAnimation(var_115_string, var_116_string); // 0x255 Func
	GetScene(var_88_object); // 0x257 Func
	var_117_string = "knife"; // 0x259 PushS
	GetGeometryLocator(var_117_string, var_90_bool, var_89_cvector); // 0x25a Func
	var_118_string = "scripted"; // 0x25c PushS
	var_119_cvector = CVector(0.0, 0.0, 1.0); // 0x25d PushVec
	var_120_string = "grabitel_knife.xml"; // 0x25e PushS
	AddActorByType(var_91_object, var_118_string, var_88_object, var_89_cvector, var_119_cvector, var_120_string); // 0x25f Func
	var_121_string = "Owner"; // 0x261 PushS
	var_122_object = Obj(); // 0x262 PushV
	func_1937(var_122_object); // 0x263 Call
	SetScriptProperty(var_121_string, var_122_object); // 0x265 ObjFunc
	GetPosition(var_92_cvector); // 0x267 ObjFunc
	GetEyesHeight(var_93_float); // 0x269 ObjFunc
	var_125_float = GetByIndex(var_92_cvector, 1); // 0x26b PushE
	var_126_int = 10; // 0x26c PushI
	var_127_int = var_93_float - var_126_int; // 0x26d Sub
	var_125_float = var_125_float + var_127_int; // 0x26e Add2
	SetByIndex(var_92_cvector, 1) = var_125_float; // 0x26f PopE
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_float = 0; // 0x270 PushV
	var_129_cvector = var_89_cvector; // 0x271 Mov
	var_130_cvector = var_92_cvector; // 0x272 Mov
	var_131_float = 2000.0; // 0x273 MovF
	func_2099(var_128_cvector, var_129_cvector, var_130_cvector, var_131_float); // 0x274 Call
	var_94_cvector = var_128_cvector; // 0x275 Mov
	var_173_string = "StartDirection"; // 0x277 PushS
	SetScriptProperty(var_173_string, var_94_cvector); // 0x278 ObjFunc
	WaitForAnimEnd(); // 0x27a Func
	StopAsync(); // 0x27c Func
	var_174_bool = var_0_bool; // 0x27e PushT
	if(var_174_bool == 0) goto Label_642; // 0x27f JumpB
	var_78_bool = 1; // 0x280 MovB
	return 14; // 0x281 Return
	
Label_642:
	var_175_bool = 0; var_176_object = Obj(); // 0x282 PushV
	var_176_object = var_79_object; // 0x283 Mov
	func_1784(var_175_bool, var_176_object); // 0x284 Call
	var_177_bool = var_175_bool == 0; // 0x286 Not
	if(var_177_bool == 0) goto Label_650; // 0x287 JumpB
	var_78_bool = 0; // 0x288 MovB
	return 14; // 0x289 Return
	
Label_650:
	var_178_bool = 0; var_179_object = Obj(); // 0x28a PushV
	var_179_object = var_79_object; // 0x28b Mov
	TaskCall(6); // 0x28c TaskCall
	func_679(var_178_bool, var_179_object); // 0x28d Call
	TaskReturn(); // 0x28e TaskReturn
	var_78_bool = var_180_object; // 0x28f Mov
	return 14; // 0x291 Return
}


func_2099(var_128_cvector, var_129_cvector, var_130_cvector, var_131_float)
{
	var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_float = 0; var_135_float = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_float = 0; var_139_float = 0; var_140_float = 0; var_141_float = 0; // 0x833 PushV
	var_137_cvector = var_130_cvector - var_129_cvector; // 0x834 Sub2
	var_138_float = 250000; // 0x835 MovI
	var_142_float = GetByIndex(var_137_cvector, 1); // 0x836 PushE
	var_143_int = 1000; // 0x837 PushI
	var_144_float = var_142_float * var_143_int; // 0x838 Mult
	var_145_float = var_131_float * var_131_float; // 0x839 Mult
	var_139_float = var_144_float - var_145_float; // 0x83a Sub2
	var_140_float = var_137_cvector | var_137_cvector; // 0x83b Or2
	var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_float = 0; // 0x83c PushV
	var_147_float = var_138_float; // 0x83d Mov
	var_148_float = var_139_float; // 0x83e Mov
	var_149_float = var_140_float; // 0x83f Mov
	func_1950(var_146_float, var_147_float, var_148_float, var_149_float); // 0x840 Call
	var_141_float = sqrt(var_146_float); // 0x842 Sqrt2
	var_169_cvector = CVector(0.0, 500.0, 0.0); // 0x843 PushVec
	var_170_float = var_169_cvector * var_141_float; // 0x844 Mult
	var_171_float = var_170_float * var_141_float; // 0x845 Mult
	var_172_int = var_137_cvector + var_171_float; // 0x846 Add
	var_128_cvector = var_172_int / var_172_int; // 0x847 Div2
	return 10; // 0x848 Return
}


func_1078(var_3_bool)
{
	var_3_bool = 1; // 0x436 TMovB
	return 0; // 0x437 Return
}


func_1080(var_493_bool, var_494_float)
{
	var_495_float = 0; var_496_bool = 0; var_497_float = 0; var_498_bool = 0; // 0x438 PushV
	rand(var_497_float); // 0x439 Func
	var_499_bool = var_497_float < var_494_float; // 0x43b LT
	if(var_499_bool == 0) goto Label_1100; // 0x43c JumpB
	
Label_1085:
	IsAnimationPlaying(var_498_bool); // 0x43d Func
	var_500_bool = var_498_bool == 0; // 0x43f Not
	if(var_500_bool == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1099; // 0x441 Jump
	
Label_1099:
	goto Label_1102; // 0x44b Jump
	
Label_1102:
	var_493_bool = 0; // 0x44e MovB
	return 4; // 0x44f Return
	
Label_1090:
	var_501_bool = 0; // 0x442 PushV
	func_1144(var_498_bool, var_501_bool); // 0x443 Call
	if(var_501_bool == 0) goto Label_1096; // 0x445 JumpB
	var_493_bool = 1; // 0x446 MovB
	return 4; // 0x447 Return
	
Label_1096:
	sync(); // 0x448 Func
	goto Label_1085; // 0x44a Jump
	
Label_1100:
	WaitForAnimEnd(); // 0x44c Func
}


func_2121()
{
	var_14_object = GlobalVars[0]; // 0x849 PushGE
	var_15_object = Obj(); // 0x84a PushV
	func_1992(var_15_object); // 0x84b Call
	var_14_object = var_15_object; // 0x84c Mov
	GlobalVars[0] = var_14_object; // 0x84e PopGE
	return 0; // 0x84f Return
}


func_1104(var_0_bool, var_321_bool, var_322_float)
{
	var_323_bool = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_float = 0; var_328_bool = 0; var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_float = 0; // 0x450 PushV
	
Label_1105:
	IsAnimationPlaying(var_328_bool); // 0x451 Func
	var_333_bool = var_328_bool == 0; // 0x453 Not
	if(var_333_bool == 0) goto Label_1110; // 0x454 JumpB
	goto Label_1142; // 0x455 Jump
	
Label_1142:
	var_321_bool = 0; // 0x476 MovB
	return 10; // 0x477 Return
	
Label_1110:
	var_334_bool = 0; // 0x456 PushV
	func_1144(var_332_float, var_334_bool); // 0x457 Call
	if(var_334_bool == 0) goto Label_1116; // 0x459 JumpB
	var_321_bool = 1; // 0x45a MovB
	return 10; // 0x45b Return
	
Label_1116:
	var_359_bool = 0; var_360_object = Obj(); // 0x45c PushV
	var_360_object = var_0_bool; // 0x45d MovT
	func_1784(var_359_bool, var_360_object); // 0x45e Call
	var_361_bool = var_359_bool == 0; // 0x460 Not
	if(var_361_bool == 0) goto Label_1124; // 0x461 JumpB
	var_321_bool = 0; // 0x462 MovB
	return 10; // 0x463 Return
	
Label_1124:
	GetPFPosition(var_329_cvector); // 0x464 TObjFunc
	GetPFPosition(var_330_cvector); // 0x466 Func
	var_331_cvector = var_329_cvector - var_330_cvector; // 0x468 Sub2
	var_332_float = var_331_cvector | var_331_cvector; // 0x469 Or2
	var_362_float = var_322_float * var_322_float; // 0x46a Mult
	var_363_bool = var_332_float < var_362_float; // 0x46b LT
	if(var_363_bool == 0) goto Label_1139; // 0x46c JumpB
	var_364_bool = 0; var_365_float = 0; // 0x46d PushV
	var_365_float = var_322_float; // 0x46e Mov
	func_998(var_332_float, var_364_bool, var_365_float); // 0x46f Call
	var_321_bool = 1; // 0x471 MovB
	return 10; // 0x472 Return
	
Label_1139:
	sync(); // 0x473 Func
	goto Label_1105; // 0x475 Jump
}


func_2128(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_string = ""; // 0x850 PushV
	var_23_bool = 0; var_24_object = Obj(); // 0x851 PushV
	var_24_object = var_18_object; // 0x852 Mov
	func_1784(var_23_bool, var_24_object); // 0x853 Call
	var_57_bool = var_23_bool == 0; // 0x855 Not
	if(var_57_bool == 0) goto Label_2137; // 0x856 JumpB
	var_17_bool = 0; // 0x857 MovB
	return 4; // 0x858 Return
	
Label_2137:
	var_58_object = GlobalVars[0]; // 0x859 PushGE
	in(var_21_bool, var_18_object); // 0x85a ObjFunc
	var_59_bool = var_21_bool; // 0x85c Push
	if(var_59_bool == 0) goto Label_2144; // 0x85d JumpB
	var_17_bool = 1; // 0x85e MovB
	return 4; // 0x85f Return
	
Label_2144:
	var_60_bool = 0; var_61_object = Obj(); var_62_string = ""; // 0x860 PushV
	var_61_object = var_18_object; // 0x861 Mov
	var_62_string = "class"; // 0x862 MovS
	func_1651(var_60_bool, var_61_object, var_62_string); // 0x863 Call
	if(var_60_bool == 0) goto Label_2158; // 0x865 JumpB
	var_63_string = "class"; // 0x866 PushS
	GetProperty(var_63_string, var_22_string); // 0x867 ObjFunc
	var_64_string = "grabitel"; // 0x869 PushS
	var_65_bool = var_22_string == var_64_string; // 0x86a Eq
	if(var_65_bool == 0) goto Label_2158; // 0x86b JumpB
	var_17_bool = 0; // 0x86c MovB
	return 4; // 0x86d Return
	
Label_2158:
	var_17_bool = 1; // 0x86e MovB
	return 4; // 0x86f Return
}


func_1624(var_0_bool)
{
	var_0_bool = 1; // 0x658 TMovB
	var_16_int = 0; // 0x659 PushI
	KillTimer(var_16_int); // 0x65a Func
	Stop(); // 0x65c Func
	return 0; // 0x65e Return
}


func_1631(var_596_string)
{
	var_596_string = "walk"; // 0x65f MovS
	return 0; // 0x660 Return
}


func_1633(var_597_string)
{
	var_597_string = "run"; // 0x661 MovS
	return 0; // 0x662 Return
}


func_1635(var_435_string, var_436_int)
{
	var_437_int = 1; // 0x664 PushI
	var_438_bool = var_436_int == var_437_int; // 0x665 Eq
	if(var_438_bool == 0) goto Label_1641; // 0x666 JumpB
	var_435_string = "fire"; // 0x667 MovS
	return 0; // 0x668 Return
	
Label_1641:
	var_435_string = "phys"; // 0x669 MovS
	return 0; // 0x66a Return
}


func_1643(var_64_float)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x66b PushV
	GetPosition(var_69_cvector); // 0x66c Func
	GetPosition(var_70_cvector); // 0x66e ObjFunc
	var_71_cvector = var_70_cvector - var_69_cvector; // 0x670 Sub2
	var_64_float = var_71_cvector | var_71_cvector; // 0x671 Or2
	return 6; // 0x672 Return
}


func_2160(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x871 PushV
	var_18_object = var_16_object; // 0x872 Mov
	func_2128(var_17_bool, var_18_object); // 0x873 Call
	var_15_bool = var_17_bool; // 0x874 Mov
	return 0; // 0x876 Return
}


func_1651(var_30_bool, var_31_object, var_32_string)
{
	var_33_bool = 0; var_34_bool = 0; // 0x673 PushV
	var_35_string = "HasProperty"; // 0x674 PushS
	var_36_int = 2; // 0x675 PushI
	var_37_bool = IsFuncExist(var_31_object, var_35_string, var_36_int); // 0x676 FuncExist
	var_38_bool = var_37_bool == 0; // 0x677 Not
	if(var_38_bool == 0) goto Label_1659; // 0x678 JumpB
	var_30_bool = 0; // 0x679 MovB
	return 2; // 0x67a Return
	
Label_1659:
	HasProperty(var_32_string, var_34_bool); // 0x67b ObjFunc
	var_30_bool = var_34_bool; // 0x67d Mov
	return 2; // 0x67e Return
}


func_119(var_82_string)
{
	RemoveRTEnvelope(); // 0x78 Func
	SetDeathState(); // 0x7a Func
	Stop(); // 0x7c Func
	StopAsync(); // 0x7e Func
	StopSecondaryAnimation(); // 0x80 Func
	var_83_string = "all"; // 0x82 PushS
	PlayAnimation(var_83_string, var_82_string); // 0x83 Func
	WaitForAnimEnd(); // 0x85 Func
	var_84_string = "all"; // 0x87 PushS
	LockAnimationEnd(var_84_string, var_82_string); // 0x88 Func
	RemoveEnvelope(); // 0x8a Func
	return 0; // 0x8c Return
}


func_2167(var_66_object)
{
	var_67_bool = 0; var_68_object = Obj(); // 0x878 PushV
	var_68_object = var_66_object; // 0x879 Mov
	TaskCall(4); // 0x87a TaskCall
	func_534(var_14_bool, var_66_object, var_67_bool, var_68_object); // 0x87b Call
	TaskReturn(); // 0x87c TaskReturn
	if(var_67_bool == 0) goto Label_2181; // 0x87e JumpB
	var_540_object = Obj(); // 0x87f PushV
	var_540_object = var_66_object; // 0x880 Mov
	TaskCall(8); // 0x881 TaskCall
	func_1420(var_543_bool, var_540_object); // 0x882 Call
	TaskReturn(); // 0x883 TaskReturn
	
Label_2181:
	ResetAAS(); // 0x885 Func
	return 0; // 0x887 Return
}


func_1144(var_0_bool, var_334_bool)
{
	var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_float = 0; var_339_float = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_float = 0; // 0x478 PushV
	var_345_bool = 0; var_346_object = Obj(); // 0x479 PushV
	var_346_object = var_0_bool; // 0x47a MovT
	func_1784(var_345_bool, var_346_object); // 0x47b Call
	var_347_bool = var_345_bool == 0; // 0x47d Not
	if(var_347_bool == 0) goto Label_1153; // 0x47e JumpB
	var_334_bool = 0; // 0x47f MovB
	return 10; // 0x480 Return
	
Label_1153:
	var_348_bool = 0; // 0x481 PushV
	func_1196(var_344_float, var_348_bool); // 0x482 Call
	if(var_348_bool == 0) goto Label_1175; // 0x484 JumpB
	GetPFPosition(var_340_cvector); // 0x485 TObjFunc
	GetPFPosition(var_341_cvector); // 0x487 Func
	var_342_cvector = var_340_cvector - var_341_cvector; // 0x489 Sub2
	var_343_float = var_342_cvector | var_342_cvector; // 0x48a Or2
	GetAttackDistance(var_344_float); // 0x48b TObjFunc
	var_349_int = 50; // 0x48d PushI
	var_344_float = var_344_float + var_349_int; // 0x48e Add2
	var_350_float = var_344_float * var_344_float; // 0x48f Mult
	var_351_bool = var_343_float <= var_350_float; // 0x490 LE
	if(var_351_bool == 0) goto Label_1175; // 0x491 JumpB
	func_1177(var_344_float); // 0x493 Call
	var_334_bool = 1; // 0x495 MovB
	return 10; // 0x496 Return
	
Label_1175:
	var_334_bool = 0; // 0x497 MovB
	return 10; // 0x498 Return
}


func_1663(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0; // 0x67f PushV
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x680 PushV
	var_427_object = var_408_object; // 0x681 Mov
	var_428_string = "health"; // 0x682 MovS
	func_1651(var_426_bool, var_427_object, var_428_string); // 0x683 Call
	var_429_bool = var_426_bool == 0; // 0x685 Not
	if(var_429_bool == 0) goto Label_1673; // 0x686 JumpB
	var_407_float = 0.0; // 0x687 MovF
	return 12; // 0x688 Return
	
Label_1673:
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x689 PushV
	var_431_object = var_408_object; // 0x68a Mov
	var_432_string = "armor"; // 0x68b MovS
	func_1651(var_430_bool, var_431_object, var_432_string); // 0x68c Call
	var_433_bool = var_430_bool == 0; // 0x68e Not
	if(var_433_bool == 0) goto Label_1682; // 0x68f JumpB
	var_420_int = 0; // 0x690 MovI
	goto Label_1685; // 0x691 Jump
	
Label_1685:
	var_434_string = "armor_"; // 0x695 PushS
	var_435_string = ""; var_436_int = 0; // 0x696 PushV
	var_436_int = var_410_int; // 0x697 Mov
	func_1635(var_435_string, var_436_int); // 0x698 Call
	var_421_string = var_434_string + var_435_string; // 0x69a Add2
	var_439_bool = 0; var_440_object = Obj(); var_441_string = ""; // 0x69b PushV
	var_440_object = var_408_object; // 0x69c Mov
	var_441_string = var_421_string; // 0x69d Mov
	func_1651(var_439_bool, var_440_object, var_441_string); // 0x69e Call
	var_442_bool = var_439_bool == 0; // 0x6a0 Not
	if(var_442_bool == 0) goto Label_1700; // 0x6a1 JumpB
	var_422_int = 0; // 0x6a2 MovI
	goto Label_1702; // 0x6a3 Jump
	
Label_1702:
	var_443_float = 0; var_444_float = 0; var_445_float = 0; // 0x6a6 PushV
	var_446_int = var_420_int + var_422_int; // 0x6a7 Add
	var_447_float = 100.0; // 0x6a8 PushF
	var_444_float = var_446_int / var_446_int; // 0x6a9 Div2
	var_445_float = 1; // 0x6aa MovI
	func_1943(var_443_float, var_444_float, var_445_float); // 0x6ab Call
	var_423_float = var_443_float; // 0x6ac Mov
	var_449_string = "health"; // 0x6ae PushS
	GetProperty(var_449_string, var_424_float); // 0x6af ObjFunc
	var_450_int = 1; // 0x6b1 PushI
	var_451_int = var_450_int - var_423_float; // 0x6b2 Sub
	var_425_float = var_409_float * var_451_int; // 0x6b3 Mult2
	var_452_string = "health"; // 0x6b4 PushS
	var_453_float = 0; var_454_float = 0; var_455_float = 0; var_456_float = 0; // 0x6b5 PushV
	var_454_float = var_424_float - var_425_float; // 0x6b6 Sub2
	var_455_float = 0; // 0x6b7 MovI
	var_456_float = 1; // 0x6b8 MovI
	func_1973(var_453_float, var_454_float, var_455_float, var_456_float); // 0x6b9 Call
	SetProperty(var_452_string, var_453_float); // 0x6bb ObjFunc
	var_407_float = var_425_float; // 0x6bd Mov
	return 12; // 0x6be Return
	
Label_1700:
	GetProperty(var_421_string, var_422_int); // 0x6a4 ObjFunc
	
Label_1682:
	var_459_string = "armor"; // 0x692 PushS
	GetProperty(var_459_string, var_420_int); // 0x693 ObjFunc
}


func_2184(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x889 PushV
	var_18_object = var_16_object; // 0x88a Mov
	func_2128(var_17_bool, var_18_object); // 0x88b Call
	var_15_bool = var_17_bool; // 0x88c Mov
	return 0; // 0x88e Return
}


func_2191(var_66_object)
{
	var_67_bool = 0; var_68_object = Obj(); // 0x890 PushV
	var_68_object = var_66_object; // 0x891 Mov
	TaskCall(4); // 0x892 TaskCall
	func_534(var_14_bool, var_66_object, var_67_bool, var_68_object); // 0x893 Call
	TaskReturn(); // 0x894 TaskReturn
	if(var_67_bool == 0) goto Label_2205; // 0x896 JumpB
	var_540_object = Obj(); // 0x897 PushV
	var_540_object = var_66_object; // 0x898 Mov
	TaskCall(8); // 0x899 TaskCall
	func_1420(var_543_bool, var_540_object); // 0x89a Call
	TaskReturn(); // 0x89b TaskReturn
	
Label_2205:
	ResetAAS(); // 0x89d Func
	return 0; // 0x89f Return
}


func_1177(var_0_bool)
{
	var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0); // 0x499 PushV
	Face(var_0_bool); // 0x49a Func
	var_356_string = "all"; // 0x49c PushS
	var_357_string = "bjump"; // 0x49d PushS
	PlayAnimation(var_356_string, var_357_string); // 0x49e Func
	GetPFPosition(var_354_cvector); // 0x4a0 TObjFunc
	GetPFPosition(var_355_cvector); // 0x4a2 Func
	WaitForAnimEnd(); // 0x4a4 Func
	StopAsync(); // 0x4a6 Func
	var_358_cvector = CVector(0.0, 0.0, 0.0); // 0x4a8 PushVec
	SetSpeed(var_358_cvector); // 0x4a9 Func
	return 4; // 0x4ab Return
}


func_160()
{
	func_328(var_15_bool, var_53_object); // 0xa1 Call
	var_54_int = 130; // 0xa3 PushI
	KillTimer(var_54_int); // 0xa4 Func
	return 0; // 0xa6 Return
}


func_2208(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x8a0 PushV
	var_21_bool = var_18_object == 0; // 0x8a1 NullEq
	if(var_21_bool == 0) goto Label_2212; // 0x8a2 JumpB
	return 2; // 0x8a3 Return
	
Label_2212:
	var_22_object = GlobalVars[0]; // 0x8a4 PushGE
	in(var_20_bool, var_18_object); // 0x8a5 ObjFunc
	var_23_bool = var_20_bool == 0; // 0x8a7 Not
	if(var_23_bool == 0) goto Label_2220; // 0x8a8 JumpB
	var_24_object = GlobalVars[0]; // 0x8a9 PushGE
	add(var_18_object); // 0x8aa ObjFunc
	
Label_2220:
	return 2; // 0x8ac Return
}


func_679(var_178_bool, var_179_object)
{
	var_185_bool = GlobalVars[1]; // 0x2a8 PushGE
	var_185_bool = 0; // 0x2a9 MovB
	GlobalVars[1] = var_185_bool; // 0x2aa PopGE
	var_186_object = Obj(); var_187_bool = 0; var_188_float = 0; // 0x2ab PushV
	var_186_object = var_179_object; // 0x2ac Mov
	var_187_bool = 1; // 0x2ad MovB
	var_188_float = 200.0; // 0x2ae MovF
	func_754(var_181_int, var_182_int, var_183_bool, var_184_int, var_178_bool, var_179_object, var_186_object, var_187_bool, var_188_float); // 0x2af Call
	var_520_bool = 0; // 0x2b1 PushV
	var_520_bool = 0; // 0x2b2 MovB
	var_521_bool = GlobalVars[1]; // 0x2b3 PushGE
	if(var_521_bool == 0) goto Label_696; // 0x2b4 JumpB
	var_522_bool = var_3_bool; // 0x2b5 PushT
	if(var_522_bool == 0) goto Label_696; // 0x2b6 JumpB
	var_520_bool = 1; // 0x2b7 MovB
	
Label_696:
	if(var_520_bool == 0) goto Label_703; // 0x2b8 JumpB
	var_523_string = "all"; // 0x2b9 PushS
	var_524_string = "attack_off"; // 0x2ba PushS
	PlayAnimation(var_523_string, var_524_string); // 0x2bb Func
	WaitForAnimEnd(); // 0x2bd Func
	
Label_703:
	var_525_bool = GlobalVars[1]; // 0x2bf PushGE
	var_178_bool = var_525_bool; // 0x2c0 Mov
	return 0; // 0x2c2 Return
}


func_1196(var_0_bool, var_313_bool)
{
	var_314_bool = 0; var_315_bool = 0; // 0x4ac PushV
	var_316_string = "IsAttacking"; // 0x4ad PushS
	var_317_int = 1; // 0x4ae PushI
	var_318_bool = IsFuncExist(var_0_bool, var_316_string, var_317_int); // 0x4af FuncExist
	if(var_318_bool == 0) goto Label_1205; // 0x4b0 JumpB
	IsAttacking(var_315_bool); // 0x4b1 TObjFunc
	var_313_bool = var_315_bool; // 0x4b3 Mov
	return 2; // 0x4b4 Return
	
Label_1205:
	var_313_bool = 0; // 0x4b5 MovB
	return 2; // 0x4b6 Return
}


func_2221(var_17_object)
{
	var_18_object = Obj(); // 0x8ae PushV
	var_18_object = var_17_object; // 0x8af Mov
	func_2208(var_18_object); // 0x8b0 Call
	var_25_bool = 0; var_26_object = Obj(); // 0x8b2 PushV
	var_26_object = var_17_object; // 0x8b3 Mov
	func_1784(var_25_bool, var_26_object); // 0x8b4 Call
	var_59_bool = var_25_bool == 0; // 0x8b6 Not
	if(var_59_bool == 0) goto Label_2233; // 0x8b7 JumpB
	return 0; // 0x8b8 Return
	
Label_2233:
	var_60_bool = 0; var_61_object = Obj(); // 0x8b9 PushV
	var_61_object = var_17_object; // 0x8ba Mov
	TaskCall(4); // 0x8bb TaskCall
	func_534(var_14_object, var_17_object, var_60_bool, var_61_object); // 0x8bc Call
	TaskReturn(); // 0x8bd TaskReturn
	if(var_60_bool == 0) goto Label_2246; // 0x8bf JumpB
	var_533_object = Obj(); // 0x8c0 PushV
	var_533_object = var_17_object; // 0x8c1 Mov
	TaskCall(8); // 0x8c2 TaskCall
	func_1420(var_536_bool, var_533_object); // 0x8c3 Call
	TaskReturn(); // 0x8c4 TaskReturn
	
Label_2246:
	ResetAAS(); // 0x8c6 Func
	return 0; // 0x8c8 Return
}


func_1207(var_2_bool, var_4_object)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0; // 0x4b7 PushV
	var_379_bool = var_2_bool == 0; // 0x4b8 Not
	if(var_379_bool == 0) goto Label_1211; // 0x4b9 JumpB
	return 4; // 0x4ba Return
	
Label_1211:
	var_380_object = var_4_object; // 0x4bb PushT
	if(var_380_object == 0) goto Label_1219; // 0x4bc JumpB
	var_381_int = -1; // 0x4bd PushI
	var_4_object = var_4_object + var_381_int; // 0x4be Add2
	var_382_int = 0; // 0x4bf PushI
	var_383_bool = var_4_object > var_382_int; // 0x4c0 GT
	if(var_383_bool == 0) goto Label_1219; // 0x4c1 JumpB
	return 4; // 0x4c2 Return
	
Label_1219:
	rand(var_377_float); // 0x4c3 Func
	var_384_float = 0; // 0x4c5 PushV
	func_1243(var_384_float); // 0x4c6 Call
	var_385_bool = var_377_float < var_384_float; // 0x4c8 LT
	if(var_385_bool == 0) goto Label_1238; // 0x4c9 JumpB
	irand(var_378_int, var_377_float); // 0x4ca Func
	var_386_int = 1; // 0x4cc PushI
	var_378_int = var_378_int + var_386_int; // 0x4cd Add2
	var_387_string = "attack"; // 0x4ce PushS
	var_388_int = var_387_string + var_378_int; // 0x4cf Add
	Speak(var_388_int); // 0x4d0 Func
	var_389_int = 0; // 0x4d2 PushV
	func_1241(var_389_int); // 0x4d3 Call
	var_4_object = var_389_int; // 0x4d4 TMov
	
Label_1238:
	return 4; // 0x4d6 Return
}


func_1727(var_466_bool, var_467_object)
{
	var_468_float = 0; var_469_float = 0; // 0x6bf PushV
	var_470_bool = 0; var_471_object = Obj(); var_472_string = ""; // 0x6c0 PushV
	var_471_object = var_467_object; // 0x6c1 Mov
	var_472_string = "health"; // 0x6c2 MovS
	func_1651(var_470_bool, var_471_object, var_472_string); // 0x6c3 Call
	var_473_bool = var_470_bool == 0; // 0x6c5 Not
	if(var_473_bool == 0) goto Label_1737; // 0x6c6 JumpB
	var_466_bool = 0; // 0x6c7 MovB
	return 2; // 0x6c8 Return
	
Label_1737:
	var_474_string = "health"; // 0x6c9 PushS
	GetProperty(var_474_string, var_469_float); // 0x6ca ObjFunc
	var_475_float = 0.0; // 0x6cc PushF
	var_466_bool = var_469_float <= var_475_float; // 0x6cd LE2
	return 2; // 0x6ce Return
}


func_707(var_404_float)
{
	var_404_float = 0.1; // 0x2c4 MovF
	return 0; // 0x2c5 Return
}


func_710(var_411_int)
{
	var_411_int = 1; // 0x2c7 MovI
	return 0; // 0x2c8 Return
}


func_2249(var_16_bool, var_17_object, var_18_object)
{
	var_19_string = ""; var_20_bool = 0; var_21_float = 0; var_22_string = ""; var_23_bool = 0; var_24_float = 0; // 0x8c9 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x8ca PushV
	var_26_object = var_18_object; // 0x8cb Mov
	var_27_string = "class"; // 0x8cc MovS
	func_1651(var_25_bool, var_26_object, var_27_string); // 0x8cd Call
	var_34_bool = var_25_bool == 0; // 0x8cf Not
	if(var_34_bool == 0) goto Label_2259; // 0x8d0 JumpB
	var_16_bool = 0; // 0x8d1 MovB
	return 6; // 0x8d2 Return
	
Label_2259:
	var_35_string = "class"; // 0x8d3 PushS
	GetProperty(var_35_string, var_22_string); // 0x8d4 ObjFunc
	var_36_string = "grabitel"; // 0x8d6 PushS
	var_37_bool = var_22_string != var_36_string; // 0x8d7 Neq
	if(var_37_bool == 0) goto Label_2267; // 0x8d8 JumpB
	var_16_bool = 0; // 0x8d9 MovB
	return 6; // 0x8da Return
	
Label_2267:
	CanSee(var_23_bool, var_17_object); // 0x8db Func
	var_38_float = 0; var_39_object = Obj(); // 0x8dd PushV
	var_39_object = var_17_object; // 0x8de Mov
	func_1643(var_39_object); // 0x8df Call
	var_24_float = var_38_float; // 0x8e0 Mov
	var_46_bool = 0; // 0x8e2 PushV
	var_46_bool = 0; // 0x8e3 MovB
	var_47_float = 1000000.0; // 0x8e4 PushF
	var_48_bool = var_24_float <= var_47_float; // 0x8e5 LE
	if(var_48_bool == 0) goto Label_2289; // 0x8e6 JumpB
	var_49_bool = 0; // 0x8e7 PushV
	var_49_bool = 1; // 0x8e8 MovB
	var_50_bool = var_23_bool; // 0x8e9 Push
	if(var_50_bool == 0) goto Label_2287; // 0x8ea JumpB
	var_51_float = 250000.0; // 0x8eb PushF
	var_52_bool = var_24_float <= var_51_float; // 0x8ec LE
	if(var_52_bool == 0) goto Label_2287; // 0x8ed JumpB
	var_49_bool = 0; // 0x8ee MovB
	
Label_2287:
	if(var_49_bool == 0) goto Label_2289; // 0x8ef JumpB
	var_46_bool = 1; // 0x8f0 MovB
	
Label_2289:
	if(var_46_bool == 0) goto Label_2292; // 0x8f1 JumpB
	var_16_bool = 1; // 0x8f2 MovB
	return 6; // 0x8f3 Return
	
Label_2292:
	var_16_bool = 0; // 0x8f4 MovB
	return 6; // 0x8f5 Return
}


func_713(var_461_object, var_462_float)
{
	var_463_bool = 0; // 0x2ca PushV
	var_463_bool = 0; // 0x2cb MovB
	var_464_int = 0; // 0x2cc PushI
	var_465_bool = var_462_float > var_464_int; // 0x2cd GT
	if(var_465_bool == 0) goto Label_725; // 0x2ce JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x2cf PushV
	var_467_object = var_461_object; // 0x2d0 Mov
	func_1727(var_466_bool, var_467_object); // 0x2d1 Call
	if(var_466_bool == 0) goto Label_725; // 0x2d3 JumpB
	var_463_bool = 1; // 0x2d4 MovB
	
Label_725:
	if(var_463_bool == 0) goto Label_732; // 0x2d5 JumpB
	var_476_bool = GlobalVars[1]; // 0x2d6 PushGE
	var_476_bool = 1; // 0x2d7 MovB
	GlobalVars[1] = var_476_bool; // 0x2d8 PopGE
	func_1078(var_462_float); // 0x2da Call
	
Label_732:
	return 0; // 0x2dc Return
}


func_1743(var_40_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x6cf PushV
	IsDead(var_43_bool); // 0x6d0 ObjFunc
	var_40_bool = var_43_bool; // 0x6d2 Mov
	return 2; // 0x6d3 Return
}


func_1748(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x6d4 PushV
	var_35_bool = var_30_object == 0; // 0x6d5 NullEq
	if(var_35_bool == 0) goto Label_1753; // 0x6d6 JumpB
	var_29_bool = 0; // 0x6d7 MovB
	return 4; // 0x6d8 Return
	
Label_1753:
	var_36_bool = 0; // 0x6d9 PushV
	var_36_bool = 0; // 0x6da MovB
	var_37_string = "IsDead"; // 0x6db PushS
	var_38_int = 1; // 0x6dc PushI
	var_39_bool = IsFuncExist(var_30_object, var_37_string, var_38_int); // 0x6dd FuncExist
	if(var_39_bool == 0) goto Label_1765; // 0x6de JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x6df PushV
	var_41_object = var_30_object; // 0x6e0 Mov
	func_1743(var_41_object); // 0x6e1 Call
	if(var_40_bool == 0) goto Label_1765; // 0x6e3 JumpB
	var_36_bool = 1; // 0x6e4 MovB
	
Label_1765:
	if(var_36_bool == 0) goto Label_1768; // 0x6e5 JumpB
	var_29_bool = 0; // 0x6e6 MovB
	return 4; // 0x6e7 Return
	
Label_1768:
	GetScene(var_33_object); // 0x6e8 Func
	var_44_bool = var_33_object == 0; // 0x6ea NullEq
	if(var_44_bool == 0) goto Label_1774; // 0x6eb JumpB
	var_29_bool = 0; // 0x6ec MovB
	return 4; // 0x6ed Return
	
Label_1774:
	GetScene(var_34_object); // 0x6ee ObjFunc
	var_45_bool = var_33_object != var_34_object; // 0x6f0 Neq
	if(var_45_bool == 0) goto Label_1780; // 0x6f1 JumpB
	var_29_bool = 0; // 0x6f2 MovB
	return 4; // 0x6f3 Return
	
Label_1780:
	var_29_bool = 1; // 0x6f4 MovB
	return 4; // 0x6f5 Return
}


func_1239(var_460_int)
{
	var_460_int = 0; // 0x4d7 MovI
	return 0; // 0x4d8 Return
}


func_1241(var_389_int)
{
	var_389_int = 1; // 0x4d9 MovI
	return 0; // 0x4da Return
}


func_1243(var_384_float)
{
	var_384_float = 0.5; // 0x4db MovF
	return 0; // 0x4dc Return
}


func_754(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_186_object, var_187_bool, var_188_float, var_243_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_float = 0; var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_bool = 0; var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_bool = 0; var_201_float = 0; var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_bool = 0; var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_float = 0; var_208_float = 0; // 0x2f2 PushV
	var_1_bool = 0; // 0x2f3 TMovI
	
Label_756:
	var_209_string = "all"; // 0x2f4 PushS
	var_210_string = "attack_begin"; // 0x2f5 PushS
	var_211_int = 1; // 0x2f6 PushI
	var_212_int = var_1_bool + var_211_int; // 0x2f7 Add
	var_213_int = var_210_string + var_212_int; // 0x2f8 Add
	HasAnimation(var_199_bool, var_209_string, var_213_int); // 0x2f9 Func
	var_214_bool = var_199_bool == 0; // 0x2fb Not
	if(var_214_bool == 0) goto Label_766; // 0x2fc JumpB
	goto Label_769; // 0x2fd Jump
	
Label_769:
	var_2_bool = 0; // 0x301 TMovI
	
Label_770:
	var_215_string = "attack"; // 0x302 PushS
	var_216_int = 1; // 0x303 PushI
	var_217_int = var_2_bool + var_216_int; // 0x304 Add
	var_218_int = var_215_string + var_217_int; // 0x305 Add
	IsExisting3DSound(var_200_bool, var_218_int); // 0x306 Func
	var_219_bool = var_200_bool == 0; // 0x308 Not
	if(var_219_bool == 0) goto Label_779; // 0x309 JumpB
	goto Label_782; // 0x30a Jump
	
Label_782:
	var_4_object = 0; // 0x30e TMovI
	var_220_string = "@GetAttackDistance"; // 0x30f PushS
	var_221_int = 1; // 0x310 PushI
	var_222_bool = IsFuncExist(var_186_object, var_220_string, var_221_int); // 0x311 FuncExist
	if(var_222_bool == 0) goto Label_792; // 0x312 JumpB
	GetAttackDistance(var_201_float); // 0x313 ObjFunc
	var_223_int = 50; // 0x315 PushI
	var_201_float = var_201_float + var_223_int; // 0x316 Add2
	goto Label_793; // 0x317 Jump
	
Label_793:
	var_224_int = 150; // 0x319 PushI
	var_225_bool = var_201_float >= var_224_int; // 0x31a GE
	if(var_225_bool == 0) goto Label_797; // 0x31b JumpB
	var_201_float = 150; // 0x31c MovI
	
Label_797:
	var_3_bool = 0; // 0x31d TMovB
	var_0_bool = var_186_object; // 0x31e TMov
	IsPlayerActor(var_0_bool, var_204_bool); // 0x31f Func
	var_226_bool = var_187_bool; // 0x321 Push
	if(var_226_bool == 0) goto Label_805; // 0x322 JumpB
	var_205_bool = 0; // 0x323 MovB
	goto Label_806; // 0x324 Jump
	
Label_806:
	var_227_bool = 0; // 0x326 PushV
	var_227_bool = 0; // 0x327 MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x328 PushV
	var_229_object = var_0_bool; // 0x329 MovT
	func_1784(var_228_bool, var_229_object); // 0x32a Call
	if(var_228_bool == 0) goto Label_816; // 0x32c JumpB
	var_230_bool = var_3_bool == 0; // 0x32d Not
	if(var_230_bool == 0) goto Label_816; // 0x32e JumpB
	var_227_bool = 1; // 0x32f MovB
	
Label_816:
	if(var_227_bool == 0) goto Label_942; // 0x330 JumpB
	GetPFPosition(var_202_cvector); // 0x331 TObjFunc
	GetPFPosition(var_203_cvector); // 0x333 Func
	var_206_cvector = var_202_cvector - var_203_cvector; // 0x335 Sub2
	var_207_float = var_206_cvector | var_206_cvector; // 0x336 Or2
	var_231_float = 300.0; // 0x337 PushF
	var_232_int = var_231_float + var_201_float; // 0x338 Add
	var_233_float = 300.0; // 0x339 PushF
	var_234_int = var_233_float + var_201_float; // 0x33a Add
	var_235_float = var_232_int * var_234_int; // 0x33b Mult
	var_236_bool = var_207_float >= var_235_float; // 0x33c GE
	if(var_236_bool == 0) goto Label_845; // 0x33d JumpB
	var_237_bool = 0; var_238_object = Obj(); var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_bool = 0; // 0x33e PushV
	var_238_object = var_0_bool; // 0x33f MovT
	var_239_float = var_201_float; // 0x340 Mov
	var_240_float = 3000.0; // 0x341 MovF
	var_241_bool = 1; // 0x342 MovB
	var_242_bool = 0; // 0x343 MovB
	TaskCall(7); // 0x344 TaskCall
	func_1269(var_243_bool, var_244_object, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool); // 0x345 Call
	TaskReturn(); // 0x346 TaskReturn
	var_290_bool = var_243_bool == 0; // 0x348 Not
	if(var_290_bool == 0) goto Label_843; // 0x349 JumpB
	goto Label_942; // 0x34a Jump
	
Label_942:
	WaitForAnimEnd(); // 0x3ae Func
	var_291_bool = var_3_bool; // 0x3b0 PushT
	if(var_291_bool == 0) goto Label_947; // 0x3b1 JumpB
	return 20; // 0x3b2 Return
	
Label_947:
	var_292_string = "all"; // 0x3b3 PushS
	var_293_string = "attack_off"; // 0x3b4 PushS
	PlayAnimation(var_292_string, var_293_string); // 0x3b5 Func
	WaitForAnimEnd(); // 0x3b7 Func
	var_294_bool = var_204_bool; // 0x3b9 Push
	if(var_294_bool == 0) goto Label_958; // 0x3ba JumpB
	var_295_float = 2.0; // 0x3bb PushF
	Sleep(var_295_float); // 0x3bc Func
	
Label_958:
	return 20; // 0x3be Return
	
Label_843:
	var_205_bool = 0; // 0x34b MovB
	goto Label_941; // 0x34c Jump
	
Label_941:
	goto Label_806; // 0x3ad Jump
	
Label_845:
	var_296_float = var_188_float * var_188_float; // 0x34d Mult
	var_297_bool = var_207_float >= var_296_float; // 0x34e GE
	if(var_297_bool == 0) goto Label_933; // 0x34f JumpB
	var_298_bool = var_205_bool == 0; // 0x350 Not
	if(var_298_bool == 0) goto Label_863; // 0x351 JumpB
	var_299_object = Obj(); // 0x352 PushV
	var_299_object = var_0_bool; // 0x353 MovT
	func_1921(); // 0x354 Call
	var_308_string = "all"; // 0x356 PushS
	var_309_string = "attack_on"; // 0x357 PushS
	PlayAnimation(var_308_string, var_309_string); // 0x358 Func
	WaitForAnimEnd(); // 0x35a Func
	StopAsync(); // 0x35c Func
	var_205_bool = 1; // 0x35e MovB
	
Label_863:
	rand(var_208_float); // 0x35f Func
	var_310_bool = 0; // 0x361 PushV
	var_310_bool = 1; // 0x362 MovB
	var_311_float = 0.2; // 0x363 PushF
	var_312_bool = var_208_float < var_311_float; // 0x364 LT
	if(var_312_bool == 0) goto Label_875; // 0x365 JumpB
	var_313_bool = 0; // 0x366 PushV
	func_1196(var_310_bool, var_313_bool); // 0x367 Call
	if(var_313_bool == 0) goto Label_875; // 0x369 JumpB
	var_310_bool = 0; // 0x36a MovB
	
Label_875:
	if(var_310_bool == 0) goto Label_889; // 0x36b JumpB
	Face(var_0_bool); // 0x36c Func
	var_319_string = "all"; // 0x36e PushS
	var_320_string = "attack_stay"; // 0x36f PushS
	PlayAnimation(var_319_string, var_320_string); // 0x370 Func
	var_321_bool = 0; var_322_float = 0; // 0x372 PushV
	var_322_float = var_188_float; // 0x373 Mov
	func_1104(var_208_float, var_321_bool, var_322_float); // 0x374 Call
	StopAsync(); // 0x376 Func
	goto Label_932; // 0x378 Jump
	
Label_932:
	goto Label_941; // 0x3a4 Jump
	
Label_889:
	Face(var_0_bool); // 0x379 Func
	var_502_string = "all"; // 0x37b PushS
	var_503_string = "fjump"; // 0x37c PushS
	PlayAnimation(var_502_string, var_503_string); // 0x37d Func
	WaitForAnimEnd(); // 0x37f Func
	var_504_cvector = CVector(0.0, 0.0, 0.0); // 0x381 PushVec
	SetSpeed(var_504_cvector); // 0x382 Func
	Stop(); // 0x384 Func
	StopAsync(); // 0x386 Func
	var_505_bool = 0; // 0x388 PushV
	func_1196(var_208_float, var_505_bool); // 0x389 Call
	var_506_bool = var_505_bool == 0; // 0x38b Not
	if(var_506_bool == 0) goto Label_932; // 0x38c JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x38d PushV
	var_508_object = var_0_bool; // 0x38e MovT
	func_1784(var_507_bool, var_508_object); // 0x38f Call
	var_509_bool = var_507_bool == 0; // 0x391 Not
	if(var_509_bool == 0) goto Label_916; // 0x392 JumpB
	goto Label_942; // 0x393 Jump
	
Label_916:
	GetPFPosition(var_202_cvector); // 0x394 TObjFunc
	GetPFPosition(var_203_cvector); // 0x396 Func
	var_206_cvector = var_202_cvector - var_203_cvector; // 0x398 Sub2
	var_207_float = var_206_cvector | var_206_cvector; // 0x399 Or2
	var_510_float = var_188_float * var_188_float; // 0x39a Mult
	var_511_bool = var_207_float < var_510_float; // 0x39b LT
	if(var_511_bool == 0) goto Label_932; // 0x39c JumpB
	var_512_bool = 0; var_513_float = 0; // 0x39d PushV
	var_513_float = var_188_float; // 0x39e Mov
	func_998(var_208_float, var_512_bool, var_513_float); // 0x39f Call
	var_514_bool = var_512_bool == 0; // 0x3a1 Not
	if(var_514_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_942; // 0x3a3 Jump
	
Label_933:
	var_515_bool = 0; var_516_float = 0; // 0x3a5 PushV
	var_516_float = var_188_float; // 0x3a6 Mov
	func_998(var_208_float, var_515_bool, var_516_float); // 0x3a7 Call
	var_517_bool = var_515_bool == 0; // 0x3a9 Not
	if(var_517_bool == 0) goto Label_940; // 0x3aa JumpB
	goto Label_942; // 0x3ab Jump
	
Label_940:
	var_205_bool = 1; // 0x3ac MovB
	
Label_805:
	var_205_bool = 1; // 0x325 MovB
	
Label_792:
	var_201_float = var_188_float; // 0x318 Mov
	
Label_779:
	var_518_int = 1; // 0x30b PushI
	var_2_bool = var_2_bool + var_518_int; // 0x30c Add2
	goto Label_770; // 0x30d Jump
	
Label_766:
	var_519_int = 1; // 0x2fe PushI
	var_1_bool = var_1_bool + var_519_int; // 0x2ff Add2
	goto Label_756; // 0x300 Jump
}


func_1269(var_0_bool, var_1_bool, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool)
{
	var_245_bool = 0; var_246_bool = 0; var_247_object = Obj(); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_float = 0; var_252_object = Obj(); var_253_bool = 0; var_254_bool = 0; var_255_object = Obj(); var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_float = 0; var_260_object = Obj(); // 0x4f5 PushV
	var_0_bool = 0; // 0x4f6 TMovB
	var_1_bool = var_238_object; // 0x4f7 TMov
	var_254_bool = var_242_bool; // 0x4f8 Mov
	
Label_1273:
	var_261_bool = 0; var_262_object = Obj(); // 0x4f9 PushV
	var_262_object = var_238_object; // 0x4fa Mov
	func_1409(var_261_bool, var_262_object); // 0x4fb Call
	var_265_bool = var_261_bool == 0; // 0x4fd Not
	if(var_265_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_237_bool = 0; // 0x4ff MovB
	return 16; // 0x500 Return
	
Label_1281:
	GetPosition(var_256_cvector); // 0x501 ObjFunc
	GetPosition(var_257_cvector); // 0x503 Func
	var_258_cvector = var_256_cvector - var_257_cvector; // 0x505 Sub2
	var_259_float = var_258_cvector | var_258_cvector; // 0x506 Or2
	var_266_bool = 0; // 0x507 PushV
	var_266_bool = 0; // 0x508 MovB
	var_267_int = 0; // 0x509 PushI
	var_268_bool = var_240_float > var_267_int; // 0x50a GT
	if(var_268_bool == 0) goto Label_1296; // 0x50b JumpB
	var_269_float = var_240_float * var_240_float; // 0x50c Mult
	var_270_bool = var_259_float > var_269_float; // 0x50d GT
	if(var_270_bool == 0) goto Label_1296; // 0x50e JumpB
	var_266_bool = 1; // 0x50f MovB
	
Label_1296:
	if(var_266_bool == 0) goto Label_1301; // 0x510 JumpB
	Stop(); // 0x511 Func
	var_237_bool = 0; // 0x513 MovB
	return 16; // 0x514 Return
	
Label_1301:
	var_271_float = var_239_float * var_239_float; // 0x515 Mult
	var_272_bool = var_259_float > var_271_float; // 0x516 GT
	if(var_272_bool == 0) goto Label_1363; // 0x517 JumpB
	GetPFPosition(var_256_cvector); // 0x518 ObjFunc
	FindPathTo(var_260_object, var_256_cvector); // 0x51a Func
	var_273_bool = var_260_object != 0; // 0x51c NullNeq
	if(var_273_bool == 0) goto Label_1312; // 0x51d JumpB
	var_255_object = var_260_object; // 0x51e Mov
	var_260_object = 0; // 0x51f SetNull
	
Label_1312:
	var_274_bool = var_255_object != 0; // 0x520 NullNeq
	if(var_274_bool == 0) goto Label_1345; // 0x521 JumpB
	var_275_bool = var_254_bool; // 0x522 Push
	if(var_275_bool == 0) goto Label_1322; // 0x523 JumpB
	var_254_bool = 0; // 0x524 MovB
	RotatePath(var_255_object, var_253_bool); // 0x525 Func
	var_276_bool = var_253_bool == 0; // 0x527 Not
	if(var_276_bool == 0) goto Label_1322; // 0x528 JumpB
	goto Label_1369; // 0x529 Jump
	
Label_1369:
	var_237_bool = !var_0_bool; // 0x559 Not2
	return 16; // 0x55a Return
	
Label_1322:
	var_277_int = 0; // 0x52a PushI
	var_278_float = 0.3; // 0x52b PushF
	SetTimer(var_277_int, var_278_float); // 0x52c Func
	var_279_string = ""; // 0x52e PushV
	func_1416(var_279_string); // 0x52f Call
	var_280_string = ""; // 0x531 PushV
	func_1418(var_280_string); // 0x532 Call
	FollowPath(var_255_object, var_241_bool, var_253_bool, var_279_string, var_280_string); // 0x534 Func
	var_281_bool = var_253_bool == 0; // 0x536 Not
	if(var_281_bool == 0) goto Label_1343; // 0x537 JumpB
	var_282_bool = var_0_bool; // 0x538 PushT
	if(var_282_bool == 0) goto Label_1341; // 0x539 JumpB
	var_255_object = 0; // 0x53a SetNull
	goto Label_1369; // 0x53b Jump
	
Label_1341:
	goto Label_1368; // 0x53d Jump
	
Label_1368:
	goto Label_1273; // 0x558 Jump
	
Label_1343:
	var_255_object = 0; // 0x53f SetNull
	goto Label_1361; // 0x540 Jump
	
Label_1361:
	var_260_object = 0; // 0x551 SetNull
	goto Label_1367; // 0x552 Jump
	
Label_1367:
	var_255_object = 0; // 0x557 SetNull
	
Label_1345:
	var_283_int = 0; // 0x541 PushI
	KillTimer(var_283_int); // 0x542 Func
	var_284_float = 0.5; // 0x544 PushF
	Sleep(var_284_float, var_253_bool); // 0x545 Func
	var_285_bool = var_253_bool == 0; // 0x547 Not
	if(var_285_bool == 0) goto Label_1357; // 0x548 JumpB
	var_286_bool = var_0_bool; // 0x549 PushT
	if(var_286_bool == 0) goto Label_1357; // 0x54a JumpB
	var_255_object = 0; // 0x54b SetNull
	goto Label_1369; // 0x54c Jump
	
Label_1357:
	var_287_int = 0; // 0x54d PushI
	var_288_float = 0.3; // 0x54e PushF
	SetTimer(var_287_int, var_288_float); // 0x54f Func
	
Label_1363:
	var_289_int = 0; // 0x553 PushI
	KillTimer(var_289_int); // 0x554 Func
	goto Label_1369; // 0x556 Jump
}


func_2294(var_15_object)
{
	var_16_object = Obj(); // 0x8f7 PushV
	var_16_object = var_15_object; // 0x8f8 Mov
	TaskCall(0); // 0x8f9 TaskCall
	func_0(var_16_object); // 0x8fa Call
	TaskReturn(); // 0x8fb TaskReturn
	return 0; // 0x8fd Return
}


func_1784(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0; // 0x6f8 PushV
	var_29_bool = 0; var_30_object = Obj(); // 0x6f9 PushV
	var_30_object = var_26_object; // 0x6fa Mov
	func_1748(var_29_bool, var_30_object); // 0x6fb Call
	var_46_bool = var_29_bool == 0; // 0x6fd Not
	if(var_46_bool == 0) goto Label_1793; // 0x6fe JumpB
	var_25_bool = 0; // 0x6ff MovB
	return 2; // 0x700 Return
	
Label_1793:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0x701 PushV
	var_48_object = var_26_object; // 0x702 Mov
	var_49_string = "noaccess"; // 0x703 MovS
	func_1651(var_47_bool, var_48_object, var_49_string); // 0x704 Call
	var_56_bool = var_47_bool == 0; // 0x706 Not
	if(var_56_bool == 0) goto Label_1802; // 0x707 JumpB
	var_25_bool = 1; // 0x708 MovB
	return 2; // 0x709 Return
	
Label_1802:
	var_57_string = "noaccess"; // 0x70a PushS
	GetProperty(var_57_string, var_28_int); // 0x70b ObjFunc
	var_58_int = 0; // 0x70d PushI
	var_25_bool = var_28_int == var_58_int; // 0x70e Eq2
	return 2; // 0x70f Return
}


func_264(var_0_bool, var_1_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x108 PushV
	var_0_bool = 0; // 0x109 TMovB
	var_1_bool = 0; // 0x10a TMovB
	var_34_float = 0.5; // 0x10b PushF
	rand(var_27_float, var_34_float); // 0x10c Func
	Sleep(var_27_float); // 0x10e Func
	
Label_272:
	var_35_bool = var_0_bool == 0; // 0x110 Not
	if(var_35_bool == 0) goto Label_320; // 0x111 JumpB
	var_36_bool = var_1_bool == 0; // 0x112 Not
	if(var_36_bool == 0) goto Label_292; // 0x113 JumpB
	
Label_276:
	GetPosition(var_29_cvector); // 0x114 Func
	GetCameraFarDistance(var_30_float); // 0x116 Func
	var_37_float = 2.5; // 0x118 PushF
	var_30_float = var_30_float * var_37_float; // 0x119 Mult2
	GetRandomPFPointInCircle(var_28_cvector, var_29_cvector, var_30_float, var_31_bool); // 0x11a Func
	var_38_bool = var_31_bool; // 0x11c Push
	if(var_38_bool == 0) goto Label_287; // 0x11d JumpB
	goto Label_291; // 0x11e Jump
	
Label_291:
	goto Label_293; // 0x123 Jump
	
Label_293:
	FindShiftedPathTo(var_32_object, var_28_cvector); // 0x125 Func
	var_39_bool = var_32_object != 0; // 0x127 NullNeq
	if(var_39_bool == 0) goto Label_315; // 0x128 JumpB
	RotatePath(var_32_object, var_33_bool); // 0x129 Func
	var_40_bool = var_33_bool; // 0x12b Push
	if(var_40_bool == 0) goto Label_314; // 0x12c JumpB
	var_41_bool = 0; // 0x12d PushV
	func_342(var_41_bool); // 0x12e Call
	FollowPath(var_32_object, var_41_bool, var_33_bool); // 0x130 Func
	var_32_object = 0; // 0x132 SetNull
	var_42_bool = var_33_bool; // 0x133 Push
	if(var_42_bool == 0) goto Label_314; // 0x134 JumpB
	TaskCall(2); // 0x136 TaskCall
	func_393(); // 0x137 Call
	TaskReturn(); // 0x138 TaskReturn
	
Label_314:
	goto Label_318; // 0x13a Jump
	
Label_318:
	var_32_object = 0; // 0x13e SetNull
	goto Label_272; // 0x13f Jump
	
Label_315:
	var_94_int = 1; // 0x13b PushI
	Sleep(var_94_int); // 0x13c Func
	
Label_287:
	var_95_int = 1; // 0x11f PushI
	Sleep(var_95_int); // 0x120 Func
	goto Label_276; // 0x122 Jump
	
Label_292:
	var_1_bool = 0; // 0x124 TMovB
	
Label_320:
	return 14; // 0x140 Return
}


func_1808(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; // 0x710 PushV
	var_27_bool = var_20_object == 0; // 0x711 NullEq
	if(var_27_bool == 0) goto Label_1813; // 0x712 JumpB
	var_19_bool = 0; // 0x713 MovB
	return 6; // 0x714 Return
	
Label_1813:
	GetScene(var_24_object); // 0x715 Func
	var_28_bool = var_24_object == 0; // 0x717 NullEq
	if(var_28_bool == 0) goto Label_1819; // 0x718 JumpB
	var_19_bool = 0; // 0x719 MovB
	return 6; // 0x71a Return
	
Label_1819:
	GetScene(var_25_object); // 0x71b ObjFunc
	var_29_bool = var_24_object != var_25_object; // 0x71d Neq
	if(var_29_bool == 0) goto Label_1825; // 0x71e JumpB
	var_19_bool = 0; // 0x71f MovB
	return 6; // 0x720 Return
	
Label_1825:
	var_30_bool = 0; var_31_object = Obj(); var_32_string = ""; // 0x721 PushV
	var_31_object = var_20_object; // 0x722 Mov
	var_32_string = "noaccess"; // 0x723 MovS
	func_1651(var_30_bool, var_31_object, var_32_string); // 0x724 Call
	var_39_bool = var_30_bool == 0; // 0x726 Not
	if(var_39_bool == 0) goto Label_1834; // 0x727 JumpB
	var_19_bool = 1; // 0x728 MovB
	return 6; // 0x729 Return
	
Label_1834:
	var_40_string = "noaccess"; // 0x72a PushS
	GetProperty(var_40_string, var_26_int); // 0x72b ObjFunc
	var_41_int = 0; // 0x72d PushI
	var_19_bool = var_26_int == var_41_int; // 0x72e Eq2
	return 6; // 0x72f Return
}


func_1842(var_95_bool)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_bool = 0; // 0x732 PushV
	GetPosition(var_101_cvector); // 0x733 ObjFunc
	GetPosition(var_102_cvector); // 0x735 Func
	var_103_cvector = var_101_cvector - var_102_cvector; // 0x737 Sub2
	var_105_float = GetByIndex(var_103_cvector, 0); // 0x738 PushE
	var_106_float = GetByIndex(var_103_cvector, 2); // 0x739 PushE
	Rotate(var_105_float, var_106_float, var_104_bool); // 0x73a Func
	var_95_bool = var_104_bool; // 0x73c Mov
	return 8; // 0x73d Return
}


func_1854(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x73e PushV
	var_41_bool = 0; // 0x73f PushV
	var_41_bool = 0; // 0x740 MovB
	var_42_int = 4; // 0x741 PushI
	var_43_bool = var_19_int != var_42_int; // 0x742 Neq
	if(var_43_bool == 0) goto Label_1864; // 0x743 JumpB
	var_44_int = 5; // 0x744 PushI
	var_45_bool = var_19_int != var_44_int; // 0x745 Neq
	if(var_45_bool == 0) goto Label_1864; // 0x746 JumpB
	var_41_bool = 1; // 0x747 MovB
	
Label_1864:
	if(var_41_bool == 0) goto Label_1883; // 0x748 JumpB
	GetScene(var_31_object); // 0x749 Func
	GetPosition(var_33_cvector); // 0x74b Func
	GetEyesHeight(var_34_float); // 0x74d Func
	var_46_float = GetByIndex(var_33_cvector, 1); // 0x74f PushE
	var_47_int = 2; // 0x750 PushI
	var_48_float = var_34_float / var_47_int; // 0x751 Div
	var_46_float = var_46_float + var_48_float; // 0x752 Add2
	SetByIndex(var_33_cvector, 1) = var_46_float; // 0x753 PopE
	var_49_string = "scripted"; // 0x754 PushS
	var_50_cvector = CVector(0.0, 0.0, 1.0); // 0x755 PushVec
	var_51_string = "blood.xml"; // 0x756 PushS
	AddActorByType(var_32_object, var_49_string, var_31_object, var_33_cvector, var_50_cvector, var_51_string); // 0x757 Func
	var_32_object = 0; // 0x759 SetNull
	var_31_object = 0; // 0x75a SetNull
	
Label_1883:
	var_52_bool = var_18_object == 0; // 0x75b NullEq
	if(var_52_bool == 0) goto Label_1886; // 0x75c JumpB
	return 20; // 0x75d Return
	
Label_1886:
	GetSecondaryAnimationType(var_35_int); // 0x75e Func
	var_53_int = 0; // 0x760 PushI
	var_54_bool = var_35_int < var_53_int; // 0x761 LT
	if(var_54_bool == 0) goto Label_1892; // 0x762 JumpB
	return 20; // 0x763 Return
	
Label_1892:
	GetPosition(var_36_cvector); // 0x764 ObjFunc
	GetPosition(var_37_cvector); // 0x766 Func
	GetDirection(var_38_cvector); // 0x768 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x76a Sub2
	var_55_float = GetByIndex(var_39_cvector, 0); // 0x76b PushE
	var_56_float = GetByIndex(var_38_cvector, 0); // 0x76c PushE
	var_57_float = var_55_float * var_56_float; // 0x76d Mult
	var_58_float = GetByIndex(var_39_cvector, 2); // 0x76e PushE
	var_59_float = GetByIndex(var_38_cvector, 2); // 0x76f PushE
	var_60_float = var_58_float * var_59_float; // 0x770 Mult
	var_61_int = var_57_float + var_60_float; // 0x771 Add
	var_62_int = 0; // 0x772 PushI
	var_63_bool = var_61_int >= var_62_int; // 0x773 GE
	if(var_63_bool == 0) goto Label_1911; // 0x774 JumpB
	var_40_string = "fhit"; // 0x775 MovS
	goto Label_1912; // 0x776 Jump
	
Label_1912:
	var_64_string = "hit_react"; // 0x778 PushS
	var_65_string = "1"; // 0x779 PushS
	var_66_int = var_40_string + var_65_string; // 0x77a Add
	var_67_string = "2"; // 0x77b PushS
	var_68_int = var_40_string + var_67_string; // 0x77c Add
	var_69_int = -10; // 0x77d PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x77e Func
	return 20; // 0x780 Return
	
Label_1911:
	var_40_string = "bhit"; // 0x777 MovS
}


func_328(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x148 TMovB
	var_1_bool = 0; // 0x149 TMovB
	Stop(); // 0x14a Func
	StopGroup0(); // 0x14c Func
	return 0; // 0x14e Return
}


func_335(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x14f TMovB
	var_1_bool = 1; // 0x150 TMovB
	Stop(); // 0x151 Func
	StopGroup0(); // 0x153 Func
	return 0; // 0x155 Return
}


func_342(var_41_bool)
{
	var_41_bool = 0; // 0x156 MovB
	return 0; // 0x157 Return
}


func_1393(var_0_bool)
{
	var_0_bool = 1; // 0x571 TMovB
	var_15_int = 0; // 0x572 PushI
	KillTimer(var_15_int); // 0x573 Func
	Stop(); // 0x575 Func
	return 0; // 0x577 Return
}


func_1921()
{
	var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); // 0x781 PushV
	GetPosition(var_303_cvector); // 0x782 ObjFunc
	GetPosition(var_304_cvector); // 0x784 Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x786 Sub2
	var_306_float = GetByIndex(var_305_cvector, 0); // 0x787 PushE
	var_307_float = GetByIndex(var_305_cvector, 2); // 0x788 PushE
	RotateAsync(var_306_float, var_307_float); // 0x789 Func
	return 6; // 0x78b Return
}


func_1409(var_261_bool, var_262_object)
{
	var_263_bool = 0; var_264_object = Obj(); // 0x582 PushV
	var_264_object = var_262_object; // 0x583 Mov
	func_1784(var_263_bool, var_264_object); // 0x584 Call
	var_261_bool = var_263_bool; // 0x585 Mov
	return 0; // 0x587 Return
}


func_1416(var_279_string)
{
	var_279_string = "walk"; // 0x588 MovS
	return 0; // 0x589 Return
}


func_393()
{
	var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; // 0x189 PushV
	WaitForAnimEnd(); // 0x18a Func
	var_57_bool = 0; // 0x18c PushV
	func_1932(var_57_bool); // 0x18d Call
	var_60_bool = var_57_bool == 0; // 0x18f Not
	if(var_60_bool == 0) goto Label_402; // 0x190 JumpB
	return 14; // 0x191 Return
	
Label_402:
	var_61_int = 0; // 0x192 PushV
	func_2005(var_61_int); // 0x193 Call
	var_50_int = var_61_int; // 0x194 Mov
	var_51_int = 0; // 0x196 MovI
	
Label_407:
	var_74_bool = 0; // 0x197 PushV
	var_74_bool = 0; // 0x198 MovB
	var_75_int = 5; // 0x199 PushI
	var_76_bool = var_51_int < var_75_int; // 0x19a LT
	if(var_76_bool == 0) goto Label_417; // 0x19b JumpB
	var_77_bool = 0; // 0x19c PushV
	func_1932(var_77_bool); // 0x19d Call
	if(var_77_bool == 0) goto Label_417; // 0x19f JumpB
	var_74_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_74_bool == 0) goto Label_461; // 0x1a1 JumpB
	var_78_int = 3; // 0x1a2 PushI
	irand(var_52_int, var_78_int); // 0x1a3 Func
	var_79_int = 0; // 0x1a5 PushI
	var_80_bool = var_52_int == var_79_int; // 0x1a6 Eq
	if(var_80_bool == 0) goto Label_441; // 0x1a7 JumpB
	var_81_int = var_50_int; // 0x1a8 Push
	if(var_81_int == 0) goto Label_440; // 0x1a9 JumpB
	irand(var_53_int, var_50_int); // 0x1aa Func
	var_82_string = "all"; // 0x1ac PushS
	var_83_string = ""; var_84_int = 0; // 0x1ad PushV
	var_84_int = var_53_int; // 0x1ae Mov
	func_1998(var_83_string, var_84_int); // 0x1af Call
	PlayAnimation(var_82_string, var_83_string); // 0x1b1 Func
	WaitForAnimEnd(var_54_bool); // 0x1b3 Func
	var_85_bool = var_54_bool == 0; // 0x1b5 Not
	if(var_85_bool == 0) goto Label_440; // 0x1b6 JumpB
	goto Label_461; // 0x1b7 Jump
	
Label_461:
	return 14; // 0x1cd Return
	
Label_440:
	goto Label_458; // 0x1b8 Jump
	
Label_458:
	var_86_int = 1; // 0x1ca PushI
	var_51_int = var_51_int + var_86_int; // 0x1cb Add2
	goto Label_407; // 0x1cc Jump
	
Label_441:
	var_87_int = 1; // 0x1b9 PushI
	var_88_bool = var_52_int == var_87_int; // 0x1ba Eq
	if(var_88_bool == 0) goto Label_455; // 0x1bb JumpB
	var_89_int = 4; // 0x1bc PushI
	rand(var_55_float, var_89_int); // 0x1bd Func
	var_90_int = 1; // 0x1bf PushI
	var_91_int = var_55_float + var_90_int; // 0x1c0 Add
	Sleep(var_91_int, var_56_bool); // 0x1c1 Func
	var_92_bool = var_56_bool == 0; // 0x1c3 Not
	if(var_92_bool == 0) goto Label_454; // 0x1c4 JumpB
	goto Label_461; // 0x1c5 Jump
	
Label_454:
	goto Label_458; // 0x1c6 Jump
	
Label_455:
	var_93_int = var_51_int; // 0x1c7 Push
	if(var_93_int == 0) goto Label_458; // 0x1c8 JumpB
	goto Label_461; // 0x1c9 Jump
}


func_1418(var_280_string)
{
	var_280_string = "run"; // 0x58a MovS
	return 0; // 0x58b Return
}


func_1932(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x78c PushV
	IsLoaded(var_59_bool); // 0x78d Func
	var_57_bool = var_59_bool; // 0x78f Mov
	return 2; // 0x790 Return
}


func_1420(var_2_bool, var_533_object)
{
	var_537_bool = 0; var_538_bool = 0; // 0x58c PushV
	var_2_bool = 0; // 0x58d TMovB
	var_539_int = 2; // 0x58e PushI
	Sleep(var_539_int, var_538_bool); // 0x58f Func
	var_540_bool = var_538_bool == 0; // 0x591 Not
	if(var_540_bool == 0) goto Label_1428; // 0x592 JumpB
	return 2; // 0x593 Return
	
Label_1428:
	var_2_bool = 1; // 0x594 TMovB
	var_541_bool = 0; var_542_object = Obj(); var_543_float = 0; var_544_float = 0; var_545_bool = 0; var_546_bool = 0; // 0x595 PushV
	var_542_object = var_533_object; // 0x596 Mov
	var_543_float = 200; // 0x597 MovI
	var_544_float = 2000; // 0x598 MovI
	var_545_bool = 1; // 0x599 MovB
	var_546_bool = 1; // 0x59a MovB
	func_1500(var_537_bool, var_538_bool, var_541_bool, var_542_object, var_543_float, var_544_float, var_545_bool, var_546_bool); // 0x59b Call
	var_607_bool = var_541_bool == 0; // 0x59d Not
	if(var_607_bool == 0) goto Label_1440; // 0x59e JumpB
	return 2; // 0x59f Return
	
Label_1440:
	var_2_bool = 0; // 0x5a0 TMovB
	Face(var_533_object); // 0x5a1 Func
	WaitForAnimEnd(var_538_bool); // 0x5a3 Func
	var_608_bool = var_538_bool == 0; // 0x5a5 Not
	if(var_608_bool == 0) goto Label_1450; // 0x5a6 JumpB
	StopAsync(); // 0x5a7 Func
	return 2; // 0x5a9 Return
	
Label_1450:
	var_609_string = "all"; // 0x5aa PushS
	var_610_string = "hunt"; // 0x5ab PushS
	PlayAnimation(var_609_string, var_610_string); // 0x5ac Func
	WaitForAnimEnd(var_538_bool); // 0x5ae Func
	StopAsync(); // 0x5b0 Func
	var_611_bool = var_538_bool == 0; // 0x5b2 Not
	if(var_611_bool == 0) goto Label_1461; // 0x5b3 JumpB
	return 2; // 0x5b4 Return
	
Label_1461:
	return 2; // 0x5b5 Return
}


func_1937(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x791 PushV
	self(var_124_object); // 0x792 Func
	var_122_object = var_124_object; // 0x794 Mov
	return 2; // 0x795 Return
}


func_1943(var_443_float, var_444_float, var_445_float)
{
	var_448_bool = var_444_float < var_445_float; // 0x798 LT
	if(var_448_bool == 0) goto Label_1948; // 0x799 JumpB
	var_443_float = var_444_float; // 0x79a Mov
	goto Label_1949; // 0x79b Jump
	
Label_1949:
	return 0; // 0x79d Return
	
Label_1948:
	var_443_float = var_445_float; // 0x79c Mov
}


func_1950(var_146_float, var_147_float, var_148_float, var_149_float)
{
	var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0; // 0x79e PushV
	var_154_float = var_148_float * var_148_float; // 0x79f Mult
	var_155_int = 4; // 0x7a0 PushI
	var_156_float = var_155_int * var_147_float; // 0x7a1 Mult
	var_157_float = var_156_float * var_149_float; // 0x7a2 Mult
	var_158_int = var_154_float - var_157_float; // 0x7a3 Sub
	var_152_float = sqrt(var_158_int); // 0x7a4 Sqrt2
	var_159_int = -var_148_float; // 0x7a5 Neg
	var_160_int = var_159_int - var_152_float; // 0x7a6 Sub
	var_161_int = 2; // 0x7a7 PushI
	var_162_float = var_161_int * var_147_float; // 0x7a8 Mult
	var_153_float = var_160_int / var_160_int; // 0x7a9 Div2
	var_163_int = 0; // 0x7aa PushI
	var_164_bool = var_153_float > var_163_int; // 0x7ab GT
	if(var_164_bool == 0) goto Label_1967; // 0x7ac JumpB
	var_146_float = var_153_float; // 0x7ad Mov
	return 4; // 0x7ae Return
	
Label_1967:
	var_165_int = -var_148_float; // 0x7af Neg
	var_166_int = var_165_int + var_152_float; // 0x7b0 Add
	var_167_int = 2; // 0x7b1 PushI
	var_168_float = var_167_int * var_147_float; // 0x7b2 Mult
	var_146_float = var_166_int / var_166_int; // 0x7b3 Div2
	return 4; // 0x7b4 Return
}


func_1973(var_453_float, var_454_float, var_455_float, var_456_float)
{
	var_457_bool = var_454_float < var_455_float; // 0x7b6 LT
	if(var_457_bool == 0) goto Label_1978; // 0x7b7 JumpB
	var_453_float = var_455_float; // 0x7b8 Mov
	return 0; // 0x7b9 Return
	
Label_1978:
	var_458_bool = var_454_float > var_456_float; // 0x7ba GT
	if(var_458_bool == 0) goto Label_1982; // 0x7bb JumpB
	var_453_float = var_456_float; // 0x7bc Mov
	return 0; // 0x7bd Return
	
Label_1982:
	var_453_float = var_454_float; // 0x7be Mov
	return 0; // 0x7bf Return
}


func_1462(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x5b7 PushV
	var_20_object = var_18_object; // 0x5b8 Mov
	func_1808(var_19_bool, var_20_object); // 0x5b9 Call
	var_17_bool = var_19_bool; // 0x5ba Mov
	return 0; // 0x5bc Return
}


func_1469()
{
	var_15_bool = var_2_bool; // 0x5bd PushT
	if(var_15_bool == 0) goto Label_1475; // 0x5be JumpB
	func_1624(var_14_object); // 0x5c0 Call
	goto Label_1481; // 0x5c2 Jump
	
Label_1481:
	return 0; // 0x5c9 Return
	
Label_1475:
	StopGroup0(); // 0x5c3 Func
	StopAnimation(); // 0x5c5 Func
	StopAsync(); // 0x5c7 Func
}


func_959(var_0_bool, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0; // 0x3bf PushV
	var_401_float = 0.9; // 0x3c0 PushF
	var_402_float = var_393_float * var_401_float; // 0x3c1 Mult
	GetVictim(var_402_float, var_398_object); // 0x3c2 Func
	ReportAttack(var_0_bool); // 0x3c4 Func
	var_403_bool = var_398_object == var_0_bool; // 0x3c6 Eq
	if(var_403_bool == 0) goto Label_996; // 0x3c7 JumpB
	var_404_float = 0; var_405_object = Obj(); var_406_int = 0; // 0x3c8 PushV
	var_405_object = var_398_object; // 0x3c9 Mov
	var_406_int = var_394_int; // 0x3ca Mov
	func_707(var_406_int); // 0x3cb Call
	var_399_float = var_404_float; // 0x3cc Mov
	var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0; // 0x3ce PushV
	var_408_object = var_398_object; // 0x3cf Mov
	var_409_float = var_399_float; // 0x3d0 Mov
	var_411_int = 0; var_412_object = Obj(); var_413_int = 0; // 0x3d1 PushV
	var_412_object = var_398_object; // 0x3d2 Mov
	var_413_int = var_394_int; // 0x3d3 Mov
	func_710(var_413_int); // 0x3d4 Call
	var_410_int = var_411_int; // 0x3d5 Mov
	func_1663(var_407_float, var_408_object, var_409_float, var_410_int); // 0x3d7 Call
	var_400_float = var_407_float; // 0x3d8 Mov
	var_460_int = 0; // 0x3da PushV
	func_1239(var_460_int); // 0x3db Call
	ReportHit(var_0_bool, var_460_int, var_400_float, var_399_float); // 0x3dd Func
	var_461_object = Obj(); var_462_float = 0; // 0x3df PushV
	var_461_object = var_398_object; // 0x3e0 Mov
	var_462_float = var_400_float; // 0x3e1 Mov
	func_713(var_461_object, var_462_float); // 0x3e2 Call
	
Label_996:
	return 6; // 0x3e4 Return
}


func_1984(var_72_bool, var_73_float, var_74_float, var_75_float)
{
	var_72_bool = 0; // 0x7c1 MovB
	var_76_bool = var_73_float >= var_74_float; // 0x7c2 GE
	if(var_76_bool == 0) goto Label_1991; // 0x7c3 JumpB
	var_77_bool = var_73_float <= var_75_float; // 0x7c4 LE
	if(var_77_bool == 0) goto Label_1991; // 0x7c5 JumpB
	var_72_bool = 1; // 0x7c6 MovB
	
Label_1991:
	return 0; // 0x7c7 Return
}


func_1992(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x7c8 PushV
	CreateObjectSet(var_17_object); // 0x7c9 Func
	var_15_object = var_17_object; // 0x7cb Mov
	return 2; // 0x7cc Return
}


func_462()
{
	StopAnimation(); // 0x1ce Func
	StopGroup0(); // 0x1d0 Func
	return 0; // 0x1d2 Return
}


func_1998(var_67_string, var_68_int)
{
	var_69_string = ""; var_70_string = ""; // 0x7ce PushV
	var_70_string = "idle"; // 0x7cf MovS
	var_71_int = var_68_int; // 0x7d0 Push
	if(var_71_int == 0) goto Label_2003; // 0x7d1 JumpB
	var_70_string = var_70_string + var_68_int; // 0x7d2 Add2
	
Label_2003:
	var_67_string = var_70_string; // 0x7d3 Mov
	return 2; // 0x7d4 Return
}


func_467(var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x1d3 PushV
	var_31_int = 5; // 0x1d4 PushI
	Sleep(var_31_int, var_30_bool); // 0x1d5 Func
	var_28_bool = !var_30_bool; // 0x1d7 Not2
	return 2; // 0x1d8 Return
}


func_2005(var_61_int)
{
	var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_bool = 0; // 0x7d5 PushV
	var_64_int = 0; // 0x7d6 MovI
	
Label_2007:
	var_66_string = "all"; // 0x7d7 PushS
	var_67_string = ""; var_68_int = 0; // 0x7d8 PushV
	var_68_int = var_64_int; // 0x7d9 Mov
	func_1998(var_67_string, var_68_int); // 0x7da Call
	HasAnimation(var_65_bool, var_66_string, var_67_string); // 0x7dc Func
	var_72_bool = var_65_bool == 0; // 0x7de Not
	if(var_72_bool == 0) goto Label_2017; // 0x7df JumpB
	goto Label_2020; // 0x7e0 Jump
	
Label_2020:
	var_61_int = var_64_int; // 0x7e4 Mov
	return 4; // 0x7e5 Return
	
Label_2017:
	var_73_int = 1; // 0x7e1 PushI
	var_64_int = var_64_int + var_73_int; // 0x7e2 Add2
	goto Label_2007; // 0x7e3 Jump
}


func_473()
{
	StopGroup0(); // 0x1d9 Func
	return 0; // 0x1db Return
}


func_1500(var_0_bool, var_1_bool, var_541_bool, var_542_object, var_543_float, var_544_float, var_545_bool, var_546_bool)
{
	var_547_bool = 0; var_548_bool = 0; var_549_object = Obj(); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_cvector = CVector(0,0,0); var_553_float = 0; var_554_object = Obj(); var_555_bool = 0; var_556_bool = 0; var_557_object = Obj(); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_float = 0; var_562_object = Obj(); // 0x5dc PushV
	var_0_bool = 0; // 0x5dd TMovB
	var_1_bool = var_542_object; // 0x5de TMov
	var_556_bool = var_546_bool; // 0x5df Mov
	
Label_1504:
	var_563_bool = 0; var_564_object = Obj(); // 0x5e0 PushV
	var_564_object = var_542_object; // 0x5e1 Mov
	func_1462(var_563_bool, var_564_object); // 0x5e2 Call
	var_582_bool = var_563_bool == 0; // 0x5e4 Not
	if(var_582_bool == 0) goto Label_1512; // 0x5e5 JumpB
	var_541_bool = 0; // 0x5e6 MovB
	return 16; // 0x5e7 Return
	
Label_1512:
	GetPosition(var_558_cvector); // 0x5e8 ObjFunc
	GetPosition(var_559_cvector); // 0x5ea Func
	var_560_cvector = var_558_cvector - var_559_cvector; // 0x5ec Sub2
	var_561_float = var_560_cvector | var_560_cvector; // 0x5ed Or2
	var_583_bool = 0; // 0x5ee PushV
	var_583_bool = 0; // 0x5ef MovB
	var_584_int = 0; // 0x5f0 PushI
	var_585_bool = var_544_float > var_584_int; // 0x5f1 GT
	if(var_585_bool == 0) goto Label_1527; // 0x5f2 JumpB
	var_586_float = var_544_float * var_544_float; // 0x5f3 Mult
	var_587_bool = var_561_float > var_586_float; // 0x5f4 GT
	if(var_587_bool == 0) goto Label_1527; // 0x5f5 JumpB
	var_583_bool = 1; // 0x5f6 MovB
	
Label_1527:
	if(var_583_bool == 0) goto Label_1532; // 0x5f7 JumpB
	Stop(); // 0x5f8 Func
	var_541_bool = 0; // 0x5fa MovB
	return 16; // 0x5fb Return
	
Label_1532:
	var_588_float = var_543_float * var_543_float; // 0x5fc Mult
	var_589_bool = var_561_float > var_588_float; // 0x5fd GT
	if(var_589_bool == 0) goto Label_1594; // 0x5fe JumpB
	GetPFPosition(var_558_cvector); // 0x5ff ObjFunc
	FindPathTo(var_562_object, var_558_cvector); // 0x601 Func
	var_590_bool = var_562_object != 0; // 0x603 NullNeq
	if(var_590_bool == 0) goto Label_1543; // 0x604 JumpB
	var_557_object = var_562_object; // 0x605 Mov
	var_562_object = 0; // 0x606 SetNull
	
Label_1543:
	var_591_bool = var_557_object != 0; // 0x607 NullNeq
	if(var_591_bool == 0) goto Label_1576; // 0x608 JumpB
	var_592_bool = var_556_bool; // 0x609 Push
	if(var_592_bool == 0) goto Label_1553; // 0x60a JumpB
	var_556_bool = 0; // 0x60b MovB
	RotatePath(var_557_object, var_555_bool); // 0x60c Func
	var_593_bool = var_555_bool == 0; // 0x60e Not
	if(var_593_bool == 0) goto Label_1553; // 0x60f JumpB
	goto Label_1600; // 0x610 Jump
	
Label_1600:
	var_541_bool = !var_0_bool; // 0x640 Not2
	return 16; // 0x641 Return
	
Label_1553:
	var_594_int = 0; // 0x611 PushI
	var_595_float = 0.3; // 0x612 PushF
	SetTimer(var_594_int, var_595_float); // 0x613 Func
	var_596_string = ""; // 0x615 PushV
	func_1631(var_596_string); // 0x616 Call
	var_597_string = ""; // 0x618 PushV
	func_1633(var_597_string); // 0x619 Call
	FollowPath(var_557_object, var_545_bool, var_555_bool, var_596_string, var_597_string); // 0x61b Func
	var_598_bool = var_555_bool == 0; // 0x61d Not
	if(var_598_bool == 0) goto Label_1574; // 0x61e JumpB
	var_599_bool = var_0_bool; // 0x61f PushT
	if(var_599_bool == 0) goto Label_1572; // 0x620 JumpB
	var_557_object = 0; // 0x621 SetNull
	goto Label_1600; // 0x622 Jump
	
Label_1572:
	goto Label_1599; // 0x624 Jump
	
Label_1599:
	goto Label_1504; // 0x63f Jump
	
Label_1574:
	var_557_object = 0; // 0x626 SetNull
	goto Label_1592; // 0x627 Jump
	
Label_1592:
	var_562_object = 0; // 0x638 SetNull
	goto Label_1598; // 0x639 Jump
	
Label_1598:
	var_557_object = 0; // 0x63e SetNull
	
Label_1576:
	var_600_int = 0; // 0x628 PushI
	KillTimer(var_600_int); // 0x629 Func
	var_601_float = 0.5; // 0x62b PushF
	Sleep(var_601_float, var_555_bool); // 0x62c Func
	var_602_bool = var_555_bool == 0; // 0x62e Not
	if(var_602_bool == 0) goto Label_1588; // 0x62f JumpB
	var_603_bool = var_0_bool; // 0x630 PushT
	if(var_603_bool == 0) goto Label_1588; // 0x631 JumpB
	var_557_object = 0; // 0x632 SetNull
	goto Label_1600; // 0x633 Jump
	
Label_1588:
	var_604_int = 0; // 0x634 PushI
	var_605_float = 0.3; // 0x635 PushF
	SetTimer(var_604_int, var_605_float); // 0x636 Func
	
Label_1594:
	var_606_int = 0; // 0x63a PushI
	KillTimer(var_606_int); // 0x63b Func
	goto Label_1600; // 0x63d Jump
}


func_998(var_0_bool, var_364_bool, var_365_float)
{
	var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_bool = 0; // 0x3e6 PushV
	irand(var_368_int, var_369_bool); // 0x3e7 Func
	var_370_int = 1; // 0x3e9 PushI
	var_368_int = var_368_int + var_370_int; // 0x3ea Add2
	Face(var_0_bool); // 0x3eb Func
	var_371_bool = 1; // 0x3ed PushB
	SetAttackState(var_371_bool); // 0x3ee Func
	var_372_string = "all"; // 0x3f0 PushS
	var_373_string = "attack_begin"; // 0x3f1 PushS
	var_374_int = var_373_string + var_368_int; // 0x3f2 Add
	PlayAnimation(var_372_string, var_374_int); // 0x3f3 Func
	WaitForAnimEnd(); // 0x3f5 Func
	func_1207(var_368_int, var_369_bool); // 0x3f8 Call
	var_390_bool = 0; var_391_object = Obj(); // 0x3fa PushV
	var_391_object = var_0_bool; // 0x3fb MovT
	func_1784(var_390_bool, var_391_object); // 0x3fc Call
	var_392_bool = var_390_bool == 0; // 0x3fe Not
	if(var_392_bool == 0) goto Label_1028; // 0x3ff JumpB
	StopAsync(); // 0x400 Func
	var_364_bool = 0; // 0x402 MovB
	return 4; // 0x403 Return
	
Label_1028:
	var_393_float = 0; var_394_int = 0; // 0x404 PushV
	var_393_float = var_365_float; // 0x405 Mov
	var_394_int = var_368_int; // 0x406 Mov
	func_959(var_369_bool, var_393_float, var_394_int); // 0x407 Call
	var_477_string = "all"; // 0x409 PushS
	var_478_string = "attack_middle"; // 0x40a PushS
	var_479_int = var_478_string + var_368_int; // 0x40b Add
	HasAnimation(var_369_bool, var_477_string, var_479_int); // 0x40c Func
	var_480_bool = var_369_bool; // 0x40e Push
	if(var_480_bool == 0) goto Label_1062; // 0x40f JumpB
	var_481_string = "all"; // 0x410 PushS
	var_482_string = "attack_middle"; // 0x411 PushS
	var_483_int = var_482_string + var_368_int; // 0x412 Add
	PlayAnimation(var_481_string, var_483_int); // 0x413 Func
	WaitForAnimEnd(); // 0x415 Func
	var_484_bool = 0; var_485_object = Obj(); // 0x417 PushV
	var_485_object = var_0_bool; // 0x418 MovT
	func_1784(var_484_bool, var_485_object); // 0x419 Call
	var_486_bool = var_484_bool == 0; // 0x41b Not
	if(var_486_bool == 0) goto Label_1057; // 0x41c JumpB
	StopAsync(); // 0x41d Func
	var_364_bool = 0; // 0x41f MovB
	return 4; // 0x420 Return
	
Label_1057:
	var_487_float = 0; var_488_int = 0; // 0x421 PushV
	var_487_float = var_365_float; // 0x422 Mov
	var_488_int = var_368_int; // 0x423 Mov
	func_959(var_369_bool, var_487_float, var_488_int); // 0x424 Call
	
Label_1062:
	var_489_bool = 0; // 0x426 PushB
	SetAttackState(var_489_bool); // 0x427 Func
	var_490_string = "all"; // 0x429 PushS
	var_491_string = "attack_end"; // 0x42a PushS
	var_492_int = var_491_string + var_368_int; // 0x42b Add
	PlayAnimation(var_490_string, var_492_int); // 0x42c Func
	var_493_bool = 0; var_494_float = 0; // 0x42e PushV
	var_494_float = 0.75; // 0x42f MovF
	func_1080(var_493_bool, var_494_float); // 0x430 Call
	StopAsync(); // 0x432 Func
	var_364_bool = 1; // 0x434 MovB
	return 4; // 0x435 Return
}


func_2022(var_22_int, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; // 0x7e6 PushV
	var_32_bool = var_22_int > var_23_int; // 0x7e7 GT
	if(var_32_bool == 0) goto Label_2029; // 0x7e8 JumpB
	var_33_string = "GenerateMoney: iMin > iMax"; // 0x7e9 PushS
	Trace(var_33_string); // 0x7ea Func
	return 8; // 0x7ec Return
	
Label_2029:
	var_28_int = 0; // 0x7ed MovI
	var_34_bool = var_22_int != var_23_int; // 0x7ee Neq
	if(var_34_bool == 0) goto Label_2036; // 0x7ef JumpB
	var_35_int = var_23_int - var_22_int; // 0x7f0 Sub
	irand(var_29_int, var_35_int); // 0x7f1 Func
	goto Label_2040; // 0x7f3 Jump
	
Label_2040:
	var_28_int = var_28_int + var_22_int; // 0x7f8 Add2
	var_36_int = 0; // 0x7f9 PushI
	var_37_bool = var_28_int == var_36_int; // 0x7fa Eq
	if(var_37_bool == 0) goto Label_2045; // 0x7fb JumpB
	return 8; // 0x7fc Return
	
Label_2045:
	var_38_string = "Money"; // 0x7fd PushS
	GetInvItemByName(var_30_int, var_38_string); // 0x7fe Func
	var_39_int = 0; // 0x800 PushI
	AddItem(var_31_bool, var_30_int, var_39_int, var_28_int); // 0x801 Func
	return 8; // 0x803 Return
	
Label_2036:
	var_40_int = 0; // 0x7f4 PushI
	var_41_bool = var_22_int == var_40_int; // 0x7f5 Eq
	if(var_41_bool == 0) goto Label_2040; // 0x7f6 JumpB
	return 8; // 0x7f7 Return
}


