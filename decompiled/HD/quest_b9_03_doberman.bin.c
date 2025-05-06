task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	var_23_int = 1; // 0xb4 PushI
	if(var_23_int == 0) goto Label_315; // 0xb5 JumpB
	func_2171(); // 0xb7 NEW_2
	var_25_int = 31699; // 0xb9 PushI
	var_26_bool = var_22_bool == var_25_int; // 0xba Eq
	if(var_26_bool == 0) goto Label_193; // 0xbb JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xbc PushV
	var_27_object = var_1_object; // 0xbd MovT
	var_28_object = var_0_object; // 0xbe MovT
	func_2376(); // 0xbf NEW_2
	
Label_193:
	var_101_int = 31700; // 0xc1 PushI
	var_102_bool = var_22_bool == var_101_int; // 0xc2 Eq
	if(var_102_bool == 0) goto Label_201; // 0xc3 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0xc4 PushV
	var_103_object = var_1_object; // 0xc5 MovT
	var_104_object = var_0_object; // 0xc6 MovT
	func_2332(); // 0xc7 NEW_2
	
Label_201:
	var_121_int = 32356; // 0xc9 PushI
	var_122_bool = var_22_bool == var_121_int; // 0xca Eq
	if(var_122_bool == 0) goto Label_209; // 0xcb JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0xcc PushV
	var_123_object = var_1_object; // 0xcd MovT
	var_124_object = var_0_object; // 0xce MovT
	func_2332(); // 0xcf NEW_2
	
Label_209:
	var_125_int = 31696; // 0xd1 PushI
	var_126_bool = var_21_object == var_125_int; // 0xd2 Eq
	if(var_126_bool == 0) goto Label_257; // 0xd3 JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0xd4 PushV
	var_128_object = var_1_object; // 0xd5 MovT
	func_2419(var_128_object); // 0xd6 NEW_2
	if(var_127_bool == 0) goto Label_242; // 0xd8 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0xd9 PushV
	var_135_object = var_1_object; // 0xda MovT
	var_136_object = var_0_object; // 0xdb MovT
	func_2370(); // 0xdc NEW_2
	var_139_string = ""; // 0xde PushV
	var_139_string = "Neutral"; // 0xdf MovS
	func_157(var_22_bool, var_139_string); // 0xe0 NEW_2
	var_156_int = 530309; // 0xe2 PushI
	SetMessage(var_156_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_157_int = 530310; // 0xe7 PushI
	var_158_int = 31698; // 0xe8 PushI
	var_159_int = 31697; // 0xe9 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0xea TObjFunc
	var_160_int = 531024; // 0xec PushI
	var_161_int = 31698; // 0xed PushI
	var_162_int = 32353; // 0xee PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_163_string = ""; // 0xf2 PushV
	var_163_string = "Neutral"; // 0xf3 MovS
	func_157(var_22_bool, var_163_string); // 0xf4 NEW_2
	var_164_int = 530314; // 0xf6 PushI
	SetMessage(var_164_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_165_int = 530315; // 0xfb PushI
	var_166_int = -1; // 0xfc PushI
	var_167_int = 31702; // 0xfd PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_168_int = 31698; // 0x101 PushI
	var_169_bool = var_21_object == var_168_int; // 0x102 Eq
	if(var_169_bool == 0) goto Label_280; // 0x103 JumpB
	var_170_string = ""; // 0x104 PushV
	var_170_string = "Neutral"; // 0x105 MovS
	func_157(var_22_bool, var_170_string); // 0x106 NEW_2
	var_171_int = 530311; // 0x108 PushI
	SetMessage(var_171_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_172_int = 531025; // 0x10d PushI
	var_173_int = 32355; // 0x10e PushI
	var_174_int = 32354; // 0x10f PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x110 TObjFunc
	var_175_int = 531027; // 0x112 PushI
	var_176_int = -1; // 0x113 PushI
	var_177_int = 32356; // 0x114 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_178_int = 32355; // 0x118 PushI
	var_179_bool = var_21_object == var_178_int; // 0x119 Eq
	if(var_179_bool == 0) goto Label_303; // 0x11a JumpB
	var_180_string = ""; // 0x11b PushV
	var_180_string = "Neutral"; // 0x11c MovS
	func_157(var_22_bool, var_180_string); // 0x11d NEW_2
	var_181_int = 531026; // 0x11f PushI
	SetMessage(var_181_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_182_int = 530312; // 0x124 PushI
	var_183_int = -1; // 0x125 PushI
	var_184_int = 31699; // 0x126 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x127 TObjFunc
	var_185_int = 530313; // 0x129 PushI
	var_186_int = -1; // 0x12a PushI
	var_187_int = 31700; // 0x12b PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_3_string = 1; // 0x12f TMovB
	var_188_bool = 0; // 0x130 PushV
	func_2644(var_188_bool); // 0x131 NEW_2
	if(var_188_bool == 0) goto Label_311; // 0x133 JumpB
	lshStopAnimation(); // 0x134 Func
	goto Label_313; // 0x136 Jump
	
Label_313:
	return 0; // 0x139 Return
	
Label_311:
	StopAnimation(); // 0x137 Func
	
Label_315:
	return 0; // 0x13b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	func_498(var_20_object, var_21_bool); // 0x147 NEW_2
	var_25_object = Obj(); // 0x149 PushV
	var_25_object = var_21_bool; // 0x14a Mov
	func_2696(var_25_object); // 0x14b NEW_2
	return 0; // 0x14d Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x14f PushV
	var_23_object = var_21_bool; // 0x150 Mov
	func_1745(var_22_bool, var_23_object); // 0x151 NEW_2
	if(var_22_bool == 0) goto Label_345; // 0x153 JumpB
	var_26_bool = 0; var_27_string = ""; var_28_string = ""; // 0x154 PushV
	var_27_string = "quest_b9_03"; // 0x155 MovS
	var_28_string = "doberman_attack"; // 0x156 MovS
	func_2295(var_26_bool, var_27_string, var_28_string); // 0x157 NEW_2
	
Label_345:
	return 0; // 0x159 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_string = "attack"; // 0x15b PushS
	var_23_bool = var_21_bool == var_22_string; // 0x15c Eq
	if(var_23_bool == 0) goto Label_359; // 0x15d JumpB
	func_498(var_20_object, var_21_bool); // 0x15f NEW_2
	TaskCall(3); // 0x162 TaskCall
	func_598(); // 0x163 NEW_2
	TaskReturn(); // 0x164 TaskReturn
	goto Label_363; // 0x166 Jump
	
Label_363:
	return 0; // 0x16b Return
	
Label_359:
	var_531_string = ""; // 0x167 PushV
	var_531_string = var_21_bool; // 0x168 Mov
	func_402(var_531_string); // 0x169 NEW_2
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = var_6_int; // 0x19a PushT
	if(var_21_int == 0) goto Label_415; // 0x19b JumpB
	func_498(var_19_object, var_20_bool); // 0x19d NEW_2
	
Label_415:
	var_25_bool = 0; // 0x19f PushV
	var_25_bool = 0; // 0x1a0 MovB
	var_26_int = var_5_int; // 0x1a1 PushT
	if(var_26_int == 0) goto Label_424; // 0x1a2 JumpB
	var_27_bool = 0; // 0x1a3 PushV
	func_431(var_27_bool); // 0x1a4 NEW_2
	if(var_27_bool == 0) goto Label_424; // 0x1a6 JumpB
	var_25_bool = 1; // 0x1a7 MovB
	
Label_424:
	if(var_25_bool == 0) goto Label_430; // 0x1a8 JumpB
	var_28_object = Obj(); // 0x1a9 PushV
	func_2234(var_28_object); // 0x1aa NEW_2
	RemoveActor(var_28_object); // 0x1ac Func
	
Label_430:
	return 0; // 0x1ae Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 10; // 0x1dc PushI
	var_23_bool = var_21_bool == var_22_int; // 0x1dd Eq
	if(var_23_bool == 0) goto Label_497; // 0x1de JumpB
	var_24_bool = 0; // 0x1df PushV
	func_460(var_19_bool, var_20_object, var_21_bool, var_24_bool); // 0x1e0 NEW_2
	if(var_24_bool == 0) goto Label_491; // 0x1e2 JumpB
	var_37_bool = var_2_object == 0; // 0x1e3 Not
	if(var_37_bool == 0) goto Label_490; // 0x1e4 JumpB
	var_38_object = Obj(); // 0x1e5 PushV
	var_38_object = var_4_bool; // 0x1e6 MovT
	func_2160(var_38_object); // 0x1e7 NEW_2
	var_2_object = 1; // 0x1e9 TMovB
	
Label_490:
	goto Label_497; // 0x1ea Jump
	
Label_497:
	return 0; // 0x1f1 Return
	
Label_491:
	var_45_object = var_2_object; // 0x1eb PushT
	if(var_45_object == 0) goto Label_497; // 0x1ec JumpB
	var_46_string = "head"; // 0x1ed PushS
	UnlookAsync(var_46_string); // 0x1ee Func
	var_2_object = 0; // 0x1f0 TMovB
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_object = Obj(); // 0x268 PushV
	func_2234(var_21_object); // 0x269 NEW_2
	RemoveActor(var_21_object); // 0x26b Func
	return 0; // 0x26d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_object = Obj(); // 0x504 PushV
	func_2234(var_21_object); // 0x505 NEW_2
	RemoveActor(var_21_object); // 0x507 Func
	return 0; // 0x509 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_int)
{
	var_22_int = 1; // 0x53c PushI
	var_23_bool = var_21_int == var_22_int; // 0x53d Eq
	if(var_23_bool == 0) goto Label_1348; // 0x53e JumpB
	var_24_object = Obj(); // 0x53f PushV
	var_24_object = var_1_object; // 0x540 MovT
	func_2312(var_24_object); // 0x541 NEW_2
	goto Label_1352; // 0x543 Jump
	
Label_1352:
	return 0; // 0x548 Return
	
Label_1348:
	var_29_int = 0; // 0x544 PushV
	var_29_int = var_21_int; // 0x545 Mov
	func_1497(var_20_bool, var_21_int, var_29_int); // 0x546 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_bool = 0; // 0x557 PushV
	var_22_bool = 0; // 0x558 MovB
	var_23_bool = var_1_object == var_21_object; // 0x559 Eq
	if(var_23_bool == 0) goto Label_1374; // 0x55a JumpB
	var_24_bool = var_2_object == 0; // 0x55b Not
	if(var_24_bool == 0) goto Label_1374; // 0x55c JumpB
	var_22_bool = 1; // 0x55d MovB
	
Label_1374:
	if(var_22_bool == 0) goto Label_1380; // 0x55e JumpB
	var_2_object = 1; // 0x55f TMovB
	var_25_object = Obj(); // 0x560 PushV
	var_25_object = var_21_object; // 0x561 Mov
	func_2160(var_25_object); // 0x562 NEW_2
	
Label_1380:
	return 0; // 0x564 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_bool = 0; // 0x566 PushV
	var_22_bool = 0; // 0x567 MovB
	var_23_bool = var_1_object == var_21_object; // 0x568 Eq
	if(var_23_bool == 0) goto Label_1389; // 0x569 JumpB
	var_24_object = var_2_object; // 0x56a PushT
	if(var_24_object == 0) goto Label_1389; // 0x56b JumpB
	var_22_bool = 1; // 0x56c MovB
	
Label_1389:
	if(var_22_bool == 0) goto Label_1394; // 0x56d JumpB
	var_2_object = 0; // 0x56e TMovB
	var_25_string = "head"; // 0x56f PushS
	UnlookAsync(var_25_string); // 0x570 Func
	
Label_1394:
	return 0; // 0x572 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	RequestClearPath(var_21_object); // 0x5ec Func
	return 0; // 0x5ee Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	func_1353(var_21_object); // 0x5f8 NEW_2
	var_26_object = Obj(); // 0x5fa PushV
	var_26_object = var_21_object; // 0x5fb Mov
	func_2690(); // 0x5fc NEW_2
	return 0; // 0x5fe Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_object = Obj(); // 0x61a PushV
	func_2234(var_21_object); // 0x61b NEW_2
	RemoveActor(var_21_object); // 0x61d Func
	return 0; // 0x61f Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x62f PushV
	IsOverrideActive(var_23_bool); // 0x630 Func
	var_24_bool = var_23_bool == 0; // 0x632 Not
	if(var_24_bool == 0) goto Label_1592; // 0x633 JumpB
	var_25_object = Obj(); // 0x634 PushV
	var_25_object = var_21_object; // 0x635 Mov
	func_2535(var_25_object); // 0x636 NEW_2
	
Label_1592:
	return 2; // 0x638 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	return 0; // 0x6af Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_string)
{
	return 0; // 0x6b1 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	return 0; // 0x6b3 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; // 0xa64 PushV
	var_25_object = var_21_object; // 0xa65 Mov
	var_26_int = var_22_int; // 0xa66 Mov
	var_27_float = var_23_float; // 0xa67 Mov
	func_1944(var_25_object, var_26_int, var_27_float); // 0xa68 NEW_2
	return 0; // 0xa6a Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_int = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0xa6c PushV
	var_27_object = var_21_object; // 0xa6d Mov
	var_28_int = var_22_int; // 0xa6e Mov
	var_29_float = var_23_float; // 0xa6f Mov
	var_30_cvector = var_25_cvector; // 0xa70 Mov
	var_31_cvector = var_26_cvector; // 0xa71 Mov
	func_2012(var_29_float, var_30_cvector, var_31_cvector); // 0xa72 NEW_2
	return 0; // 0xa74 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object, var_22_string)
{
	var_23_float = 0; var_24_float = 0; // 0xa75 PushV
	var_25_string = "health"; // 0xa76 PushS
	var_26_bool = var_22_string == var_25_string; // 0xa77 Eq
	if(var_26_bool == 0) goto Label_2689; // 0xa78 JumpB
	var_27_string = "health"; // 0xa79 PushS
	GetProperty(var_27_string, var_24_float); // 0xa7a Func
	var_28_int = 0; // 0xa7c PushI
	var_29_bool = var_24_float <= var_28_int; // 0xa7d LE
	if(var_29_bool == 0) goto Label_2689; // 0xa7e JumpB
	SignalDeath(var_21_object); // 0xa7f Func
	
Label_2689:
	return 2; // 0xa81 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool, var_21_object)
{
	var_22_object = Obj(); // 0xa83 PushV
	var_22_object = var_21_object; // 0xa84 Mov
	func_2646(var_22_object); // 0xa85 NEW_2
	return 0; // 0xa87 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 1; // 0x13c PushB
	SensePlayerOnly(var_21_bool); // 0x13d Func
	var_22_float = 0; var_23_float = 0; // 0x13f PushV
	var_22_float = 300; // 0x140 MovI
	var_23_float = 100; // 0x141 MovI
	func_364(var_20_bool, var_22_float, var_23_float); // 0x142 NEW_2
	return 0; // 0x144 Return
}


func_512()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0; // 0x200 PushV
	WaitForAnimEnd(); // 0x201 Func
	var_54_bool = 0; // 0x203 PushV
	func_2037(var_54_bool); // 0x204 NEW_2
	var_55_bool = var_54_bool == 0; // 0x206 Not
	if(var_55_bool == 0) goto Label_521; // 0x207 JumpB
	return 14; // 0x208 Return
	
Label_521:
	var_56_int = 0; // 0x209 PushV
	func_2619(var_56_int); // 0x20a NEW_2
	var_47_int = var_56_int; // 0x20b Mov
	var_48_int = 0; // 0x20d MovI
	
Label_526:
	var_69_bool = 0; // 0x20e PushV
	var_69_bool = 0; // 0x20f MovB
	var_70_int = 5; // 0x210 PushI
	var_71_bool = var_48_int < var_70_int; // 0x211 LT
	if(var_71_bool == 0) goto Label_536; // 0x212 JumpB
	var_72_bool = 0; // 0x213 PushV
	func_2037(var_72_bool); // 0x214 NEW_2
	if(var_72_bool == 0) goto Label_536; // 0x216 JumpB
	var_69_bool = 1; // 0x217 MovB
	
Label_536:
	if(var_69_bool == 0) goto Label_588; // 0x218 JumpB
	var_73_int = 3; // 0x219 PushI
	irand(var_49_int, var_73_int); // 0x21a Func
	var_74_int = 0; // 0x21c PushI
	var_75_bool = var_49_int == var_74_int; // 0x21d Eq
	if(var_75_bool == 0) goto Label_560; // 0x21e JumpB
	var_76_int = var_47_int; // 0x21f Push
	if(var_76_int == 0) goto Label_559; // 0x220 JumpB
	irand(var_50_int, var_47_int); // 0x221 Func
	var_77_string = "all"; // 0x223 PushS
	var_78_string = ""; var_79_int = 0; // 0x224 PushV
	var_79_int = var_50_int; // 0x225 Mov
	func_2612(var_78_string, var_79_int); // 0x226 NEW_2
	PlayAnimation(var_77_string, var_78_string); // 0x228 Func
	WaitForAnimEnd(var_51_bool); // 0x22a Func
	var_80_bool = var_51_bool == 0; // 0x22c Not
	if(var_80_bool == 0) goto Label_559; // 0x22d JumpB
	goto Label_588; // 0x22e Jump
	
Label_588:
	ResetAAS(); // 0x24c Func
	return 14; // 0x24e Return
	
Label_559:
	goto Label_577; // 0x22f Jump
	
Label_577:
	var_81_bool = 0; // 0x241 PushV
	func_591(var_81_bool); // 0x242 NEW_2
	var_82_bool = var_81_bool == 0; // 0x244 Not
	if(var_82_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_588; // 0x246 Jump
	
Label_583:
	ResetAAS(); // 0x247 Func
	var_83_int = 1; // 0x249 PushI
	var_48_int = var_48_int + var_83_int; // 0x24a Add2
	goto Label_526; // 0x24b Jump
	
Label_560:
	var_84_int = 1; // 0x230 PushI
	var_85_bool = var_49_int == var_84_int; // 0x231 Eq
	if(var_85_bool == 0) goto Label_574; // 0x232 JumpB
	var_86_int = 4; // 0x233 PushI
	rand(var_52_float, var_86_int); // 0x234 Func
	var_87_int = 1; // 0x236 PushI
	var_88_int = var_52_float + var_87_int; // 0x237 Add
	Sleep(var_88_int, var_53_bool); // 0x238 Func
	var_89_bool = var_53_bool == 0; // 0x23a Not
	if(var_89_bool == 0) goto Label_573; // 0x23b JumpB
	goto Label_588; // 0x23c Jump
	
Label_573:
	goto Label_577; // 0x23d Jump
	
Label_574:
	var_90_int = var_48_int; // 0x23e Push
	if(var_90_int == 0) goto Label_577; // 0x23f JumpB
	goto Label_588; // 0x240 Jump
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_2042(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_2638(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_2636(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_2640(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_2642(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_2589(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_object = Obj(); var_99_object = Obj(); // 0x2f PushV
	var_98_object = var_27_object; // 0x30 Mov
	var_99_object = var_33_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_36_bool); // 0x36 ObjFunc
	
Label_56:
	var_164_bool = var_36_bool == 0; // 0x38 Not
	if(var_164_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_36_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_165_object = Obj(); // 0x3f PushV
	var_165_object = var_27_object; // 0x40 Mov
	func_2111(); // 0x41 NEW_2
	StopDialog(var_33_object); // 0x43 Func
	GetReturnValue(var_35_int); // 0x45 ObjFunc
	var_26_int = var_35_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1280(var_390_int)
{
	var_390_int = 1; // 0x500 MovI
	return 0; // 0x501 Return
}


func_1282(var_385_float)
{
	var_385_float = 0.5; // 0x502 MovF
	return 0; // 0x503 Return
}


func_2307(var_42_float)
{
	var_43_float = 0; var_44_float = 0; // 0x903 PushV
	GetGameTime(var_44_float); // 0x904 Func
	var_42_float = var_44_float; // 0x906 Mov
	return 2; // 0x907 Return
}


func_2565()
{
	var_46_int = 0; // 0xa05 PushV
	func_2606(var_46_int); // 0xa06 NEW_2
	var_50_int = 1; // 0xa08 PushI
	var_51_bool = var_46_int != var_50_int; // 0xa09 Neq
	if(var_51_bool == 0) goto Label_2572; // 0xa0a JumpB
	return 0; // 0xa0b Return
	
Label_2572:
	var_52_string = ""; // 0xa0c PushV
	var_52_string = "liver"; // 0xa0d MovS
	func_2548(var_52_string); // 0xa0e NEW_2
	var_63_string = ""; // 0xa10 PushV
	var_63_string = "kidney"; // 0xa11 MovS
	func_2548(var_63_string); // 0xa12 NEW_2
	var_64_string = ""; // 0xa14 PushV
	var_64_string = "heart"; // 0xa15 MovS
	func_2548(var_64_string); // 0xa16 NEW_2
	var_65_string = ""; // 0xa18 PushV
	var_65_string = "blood"; // 0xa19 MovS
	func_2548(var_65_string); // 0xa1a NEW_2
	return 0; // 0xa1c Return
}


func_1542(var_208_string)
{
	var_208_string = "walk"; // 0x606 MovS
	return 0; // 0x607 Return
}


func_1544(var_209_string)
{
	var_209_string = "run"; // 0x608 MovS
	return 0; // 0x609 Return
}


func_2312(var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x908 PushV
	IsPlayerActor(var_24_object, var_26_bool); // 0x909 Func
	var_27_bool = var_26_bool; // 0x90b Push
	if(var_27_bool == 0) goto Label_2320; // 0x90c JumpB
	var_28_string = "attack"; // 0x90d PushS
	PlayGlobalMusic(var_28_string); // 0x90e Func
	
Label_2320:
	return 2; // 0x910 Return
}


func_1546(var_29_object)
{
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_int = 0; // 0x60b PushV
	var_30_string = "samopal_ammo"; // 0x60c MovS
	var_31_int = 1; // 0x60d MovI
	var_32_int = 1; // 0x60e MovI
	var_33_int = 4; // 0x60f MovI
	func_2178(var_30_string, var_31_int, var_32_int, var_33_int); // 0x610 NEW_2
	func_2565(); // 0x613 NEW_2
	var_66_object = Obj(); // 0x615 PushV
	var_66_object = var_29_object; // 0x616 Mov
	func_1568(var_66_object); // 0x617 NEW_2
	return 0; // 0x619 Return
}


func_1290(var_2_object, var_139_bool, var_140_object, var_141_float, var_142_float, var_143_bool, var_144_bool)
{
	var_148_bool = 0; var_149_bool = 0; var_150_bool = 0; var_151_bool = 0; // 0x50a PushV
	var_152_object = Obj(); // 0x50b PushV
	var_152_object = var_140_object; // 0x50c Mov
	func_2312(var_152_object); // 0x50d NEW_2
	var_153_int = 1; // 0x50f PushI
	var_154_int = 5; // 0x510 PushI
	SetTimer(var_153_int, var_154_int); // 0x511 Func
	CanSee(var_150_bool, var_140_object); // 0x513 Func
	var_155_bool = var_150_bool; // 0x515 Push
	if(var_155_bool == 0) goto Label_1309; // 0x516 JumpB
	var_2_object = 1; // 0x517 TMovB
	var_156_object = Obj(); // 0x518 PushV
	var_156_object = var_140_object; // 0x519 Mov
	func_2160(var_156_object); // 0x51a NEW_2
	goto Label_1310; // 0x51c Jump
	
Label_1310:
	var_163_bool = 0; var_164_object = Obj(); // 0x51e PushV
	var_164_object = var_140_object; // 0x51f Mov
	func_1745(var_163_bool, var_164_object); // 0x520 NEW_2
	if(var_163_bool == 0) goto Label_1320; // 0x522 JumpB
	var_167_object = Obj(); // 0x523 PushV
	func_2234(var_167_object); // 0x524 NEW_2
	SendPlayerEnemy(var_140_object, var_167_object); // 0x526 Func
	
Label_1320:
	var_168_bool = 0; var_169_object = Obj(); var_170_float = 0; var_171_float = 0; var_172_bool = 0; var_173_bool = 0; // 0x528 PushV
	var_169_object = var_140_object; // 0x529 Mov
	var_170_float = var_141_float; // 0x52a Mov
	var_171_float = var_142_float; // 0x52b Mov
	var_172_bool = var_143_bool; // 0x52c Mov
	var_173_bool = var_144_bool; // 0x52d Mov
	func_1395(var_150_bool, var_151_bool, var_168_bool, var_169_object, var_170_float, var_171_float, var_172_bool, var_173_bool); // 0x52e NEW_2
	var_151_bool = var_168_bool; // 0x52f Mov
	var_219_object = var_2_object; // 0x531 PushT
	if(var_219_object == 0) goto Label_1334; // 0x532 JumpB
	var_220_string = "head"; // 0x533 PushS
	UnlookAsync(var_220_string); // 0x534 Func
	
Label_1334:
	var_221_int = 1; // 0x536 PushI
	KillTimer(var_221_int); // 0x537 Func
	var_139_bool = var_151_bool; // 0x539 Mov
	return 4; // 0x53a Return
	
Label_1309:
	var_2_object = 0; // 0x51d TMovB
}


func_2321()
{
	var_369_object = Obj(); var_370_object = Obj(); // 0x911 PushV
	GetScene(var_370_object); // 0x912 Func
	var_371_string = "battle"; // 0x914 PushS
	var_372_object = Obj(); // 0x915 PushV
	func_2234(var_372_object); // 0x916 NEW_2
	BroadcastMessage(var_371_string, var_372_object, var_370_object); // 0x918 Func
	return 2; // 0x91a Return
}


func_2332()
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x91c PushV
	var_107_object = Obj(); // 0x91d PushV
	func_2485(var_107_object); // 0x91e NEW_2
	var_106_object = var_107_object; // 0x91f Mov
	var_108_string = "b9q03DobermanGotoFollower"; // 0x921 PushS
	var_109_string = "pt_b9q03_follower"; // 0x922 PushS
	var_110_int = 0; // 0x923 PushI
	var_111_int = 530343; // 0x924 PushI
	var_112_float = 0; // 0x925 PushV
	func_2307(var_112_float); // 0x926 NEW_2
	AddMark(var_108_string, var_109_string, var_110_int, var_111_int, var_112_float); // 0x928 ObjFunc
	func_2431(); // 0x92b NEW_2
	var_113_bool = 0; var_114_string = ""; var_115_string = ""; // 0x92d PushV
	var_114_string = "quest_b9_03"; // 0x92e MovS
	var_115_string = "doberman_attack"; // 0x92f MovS
	func_2295(var_113_bool, var_114_string, var_115_string); // 0x930 NEW_2
	var_116_object = Obj(); var_117_string = ""; var_118_float = 0; // 0x932 PushV
	var_119_object = Obj(); // 0x933 PushV
	func_2485(var_119_object); // 0x934 NEW_2
	var_116_object = var_119_object; // 0x935 Mov
	var_117_string = "pt_b9q03_follower"; // 0x937 MovS
	var_118_float = 2; // 0x938 MovI
	func_2502(var_116_object, var_117_string, var_118_float); // 0x939 NEW_2
	var_120_object = Obj(); // 0x93b PushV
	func_2485(var_120_object); // 0x93c NEW_2
	ShowMap(var_120_object); // 0x93e ObjFunc
	return 2; // 0x940 Return
}


func_2589(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0xa1d PushV
	var_92_string = "branch"; // 0xa1e PushS
	GetVariable(var_92_string, var_91_int); // 0xa1f Func
	var_93_int = 0; // 0xa21 PushI
	var_94_bool = var_91_int == var_93_int; // 0xa22 Eq
	if(var_94_bool == 0) goto Label_2599; // 0xa23 JumpB
	var_89_int = 1; // 0xa24 MovI
	return 2; // 0xa25 Return
	
Label_2599:
	var_95_int = 1; // 0xa27 PushI
	var_96_bool = var_91_int == var_95_int; // 0xa28 Eq
	if(var_96_bool == 0) goto Label_2604; // 0xa29 JumpB
	var_89_int = 2; // 0xa2a MovI
	return 2; // 0xa2b Return
	
Label_2604:
	var_89_int = 3; // 0xa2c MovI
	return 2; // 0xa2d Return
}


func_1568(var_66_object)
{
	EventDisable(0); // 0x621 EventDisable
	var_67_object = Obj(); // 0x622 PushV
	var_67_object = var_66_object; // 0x623 Mov
	func_1593(var_67_object); // 0x624 NEW_2
	var_147_int = 50; // 0x626 PushI
	var_148_int = 40; // 0x627 PushI
	SetRTEnvelope(var_147_int, var_148_int); // 0x628 Func
	EventEnable(0); // 0x62a EventEnable
	
Label_1579:
	Hold(); // 0x62b Func
	goto Label_1579; // 0x62d Jump
}


func_1062(var_499_bool, var_500_float)
{
	var_501_float = 0; var_502_bool = 0; var_503_float = 0; var_504_bool = 0; // 0x426 PushV
	rand(var_503_float); // 0x427 Func
	var_505_bool = var_503_float < var_500_float; // 0x429 LT
	if(var_505_bool == 0) goto Label_1082; // 0x42a JumpB
	
Label_1067:
	IsAnimationPlaying(var_504_bool); // 0x42b Func
	var_506_bool = var_504_bool == 0; // 0x42d Not
	if(var_506_bool == 0) goto Label_1072; // 0x42e JumpB
	goto Label_1081; // 0x42f Jump
	
Label_1081:
	goto Label_1087; // 0x439 Jump
	
Label_1087:
	var_499_bool = 0; // 0x43f MovB
	return 4; // 0x440 Return
	
Label_1072:
	var_507_bool = 0; // 0x430 PushV
	func_1160(var_507_bool); // 0x431 NEW_2
	if(var_507_bool == 0) goto Label_1078; // 0x433 JumpB
	var_499_bool = 1; // 0x434 MovB
	return 4; // 0x435 Return
	
Label_1078:
	sync(); // 0x436 Func
	goto Label_1067; // 0x438 Jump
	
Label_1082:
	WaitForAnimEnd(); // 0x43a Func
	func_1264(var_504_bool); // 0x43d NEW_2
}


func_1835(var_49_bool)
{
	var_51_bool = 0; var_52_bool = 0; // 0x72b PushV
	IsDead(var_52_bool); // 0x72c ObjFunc
	var_49_bool = var_52_bool; // 0x72e Mov
	return 2; // 0x72f Return
}


func_2606(var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0xa2e PushV
	var_49_string = "branch"; // 0xa2f PushS
	GetVariable(var_49_string, var_48_int); // 0xa30 Func
	var_46_int = var_48_int; // 0xa32 Mov
	return 2; // 0xa33 Return
}


func_1840(var_38_bool, var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); var_43_object = Obj(); // 0x730 PushV
	var_44_bool = var_39_object == 0; // 0x731 NullEq
	if(var_44_bool == 0) goto Label_1845; // 0x732 JumpB
	var_38_bool = 0; // 0x733 MovB
	return 4; // 0x734 Return
	
Label_1845:
	var_45_bool = 0; // 0x735 PushV
	var_45_bool = 0; // 0x736 MovB
	var_46_string = "IsDead"; // 0x737 PushS
	var_47_int = 1; // 0x738 PushI
	var_48_bool = IsFuncExist(var_39_object, var_46_string, var_47_int); // 0x739 FuncExist
	if(var_48_bool == 0) goto Label_1857; // 0x73a JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x73b PushV
	var_50_object = var_39_object; // 0x73c Mov
	func_1835(var_50_object); // 0x73d NEW_2
	if(var_49_bool == 0) goto Label_1857; // 0x73f JumpB
	var_45_bool = 1; // 0x740 MovB
	
Label_1857:
	if(var_45_bool == 0) goto Label_1860; // 0x741 JumpB
	var_38_bool = 0; // 0x742 MovB
	return 4; // 0x743 Return
	
Label_1860:
	GetScene(var_42_object); // 0x744 Func
	var_53_bool = var_42_object == 0; // 0x746 NullEq
	if(var_53_bool == 0) goto Label_1866; // 0x747 JumpB
	var_38_bool = 0; // 0x748 MovB
	return 4; // 0x749 Return
	
Label_1866:
	GetScene(var_43_object); // 0x74a ObjFunc
	var_54_bool = var_42_object != var_43_object; // 0x74c Neq
	if(var_54_bool == 0) goto Label_1872; // 0x74d JumpB
	var_38_bool = 0; // 0x74e MovB
	return 4; // 0x74f Return
	
Label_1872:
	var_38_bool = 1; // 0x750 MovB
	return 4; // 0x751 Return
}


func_2612(var_62_string, var_63_int)
{
	var_64_string = ""; var_65_string = ""; // 0xa34 PushV
	var_65_string = "idle"; // 0xa35 MovS
	var_66_int = var_63_int; // 0xa36 Push
	if(var_66_int == 0) goto Label_2617; // 0xa37 JumpB
	var_65_string = var_65_string + var_63_int; // 0xa38 Add2
	
Label_2617:
	var_62_string = var_65_string; // 0xa39 Mov
	return 2; // 0xa3a Return
}


func_1593(var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_string = ""; var_73_object = Obj(); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_string = ""; var_83_object = Obj(); var_84_bool = 0; var_85_bool = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); // 0x639 PushV
	var_88_bool = var_67_object == 0; // 0x63a NullEq
	if(var_88_bool == 0) goto Label_1601; // 0x63b JumpB
	var_89_string = ""; // 0x63c PushV
	var_89_string = "fdie"; // 0x63d MovS
	func_1684(var_89_string); // 0x63e NEW_2
	goto Label_1683; // 0x640 Jump
	
Label_1683:
	return 20; // 0x693 Return
	
Label_1601:
	GetPosition(var_78_cvector); // 0x641 ObjFunc
	GetPosition(var_79_cvector); // 0x643 Func
	GetDirection(var_80_cvector); // 0x645 Func
	var_81_cvector = var_79_cvector - var_78_cvector; // 0x647 Sub2
	var_121_float = GetByIndex(var_81_cvector, 0); // 0x648 PushE
	var_122_float = GetByIndex(var_80_cvector, 0); // 0x649 PushE
	var_123_float = var_121_float * var_122_float; // 0x64a Mult
	var_124_float = GetByIndex(var_81_cvector, 2); // 0x64b PushE
	var_125_float = GetByIndex(var_80_cvector, 2); // 0x64c PushE
	var_126_float = var_124_float * var_125_float; // 0x64d Mult
	var_127_int = var_123_float + var_126_float; // 0x64e Add
	var_128_int = 0; // 0x64f PushI
	var_129_bool = var_127_int >= var_128_int; // 0x650 GE
	if(var_129_bool == 0) goto Label_1620; // 0x651 JumpB
	var_82_string = "fdie"; // 0x652 MovS
	goto Label_1621; // 0x653 Jump
	
Label_1621:
	RemoveRTEnvelope(); // 0x655 Func
	SetDeathState(); // 0x657 Func
	Stop(); // 0x659 Func
	StopAsync(); // 0x65b Func
	var_83_object = var_67_object; // 0x65d Mov
	var_130_string = "GetScriptProperty"; // 0x65e PushS
	var_131_int = 2; // 0x65f PushI
	var_132_bool = IsFuncExist(var_67_object, var_130_string, var_131_int); // 0x660 FuncExist
	if(var_132_bool == 0) goto Label_1645; // 0x661 JumpB
	var_133_string = "Owner"; // 0x662 PushS
	HasScriptProperty(var_84_bool, var_133_string); // 0x663 ObjFunc
	var_134_bool = var_84_bool; // 0x665 Push
	if(var_134_bool == 0) goto Label_1645; // 0x666 JumpB
	var_135_string = "Owner"; // 0x667 PushS
	GetScriptProperty(var_83_object, var_135_string); // 0x668 ObjFunc
	var_136_bool = var_83_object == 0; // 0x66a NullEq
	if(var_136_bool == 0) goto Label_1645; // 0x66b JumpB
	var_83_object = var_67_object; // 0x66c Mov
	
Label_1645:
	var_137_string = "@GetEyesHeight"; // 0x66d PushS
	var_138_int = 1; // 0x66e PushI
	var_139_bool = IsFuncExist(var_83_object, var_137_string, var_138_int); // 0x66f FuncExist
	if(var_139_bool == 0) goto Label_1660; // 0x670 JumpB
	GetEyesHeight(var_86_float); // 0x671 ObjFunc
	var_87_cvector = CVector(0.0, 0.0, 0.0); // 0x673 MovV
	var_140_float = GetByIndex(var_87_cvector, 1); // 0x674 PushE
	var_140_float = var_86_float; // 0x675 Mov
	SetByIndex(var_87_cvector, 1) = var_140_float; // 0x676 PopE
	var_141_string = "head"; // 0x677 PushS
	LookAsync(var_67_object, var_141_string, var_87_cvector); // 0x678 Func
	var_85_bool = 1; // 0x67a MovB
	goto Label_1661; // 0x67b Jump
	
Label_1661:
	var_142_string = ""; // 0x67d PushV
	var_142_string = var_82_string; // 0x67e Mov
	func_2193(var_142_string); // 0x67f NEW_2
	var_143_string = "all"; // 0x681 PushS
	PlayAnimation(var_143_string, var_82_string); // 0x682 Func
	WaitForAnimEnd(); // 0x684 Func
	var_144_bool = var_85_bool; // 0x686 Push
	if(var_144_bool == 0) goto Label_1677; // 0x687 JumpB
	StopAsync(); // 0x688 Func
	var_145_string = "head"; // 0x68a PushS
	UnlookAsync(var_145_string); // 0x68b Func
	
Label_1677:
	var_146_string = "all"; // 0x68d PushS
	LockAnimationEnd(var_146_string, var_82_string); // 0x68e Func
	RemoveEnvelope(); // 0x690 Func
	var_83_object = 0; // 0x692 SetNull
	
Label_1660:
	var_85_bool = 0; // 0x67c MovB
	
Label_1620:
	var_82_string = "bdie"; // 0x654 MovS
}


func_2619(var_56_int)
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0xa3b PushV
	var_59_int = 0; // 0xa3c MovI
	
Label_2621:
	var_61_string = "all"; // 0xa3d PushS
	var_62_string = ""; var_63_int = 0; // 0xa3e PushV
	var_63_int = var_59_int; // 0xa3f Mov
	func_2612(var_62_string, var_63_int); // 0xa40 NEW_2
	HasAnimation(var_60_bool, var_61_string, var_62_string); // 0xa42 Func
	var_67_bool = var_60_bool == 0; // 0xa44 Not
	if(var_67_bool == 0) goto Label_2631; // 0xa45 JumpB
	goto Label_2634; // 0xa46 Jump
	
Label_2634:
	var_56_int = var_59_int; // 0xa4a Mov
	return 4; // 0xa4b Return
	
Label_2631:
	var_68_int = 1; // 0xa47 PushI
	var_59_int = var_59_int + var_68_int; // 0xa48 Add2
	goto Label_2621; // 0xa49 Jump
}


func_2111()
{
	var_166_bool = 0; var_167_bool = 0; // 0x83f PushV
	var_168_bool = 1; // 0x840 PushB
	CameraSwitchToNormal(var_168_bool); // 0x841 Func
	var_169_bool = 0; // 0x843 PushV
	func_2644(var_169_bool); // 0x844 NEW_2
	if(var_169_bool == 0) goto Label_2120; // 0x846 JumpB
	goto Label_2128; // 0x847 Jump
	
Label_2128:
	return 2; // 0x850 Return
	
Label_2120:
	var_170_string = "head"; // 0x848 PushS
	HasAnimationTrack(var_167_bool, var_170_string); // 0x849 Func
	var_171_bool = var_167_bool; // 0x84b Push
	if(var_171_bool == 0) goto Label_2128; // 0x84c JumpB
	var_172_string = "head"; // 0x84d PushS
	UnlookAsync(var_172_string); // 0x84e Func
}


func_1089(var_0_object, var_296_bool, var_297_float)
{
	var_298_bool = 0; var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_bool = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; // 0x441 PushV
	
Label_1090:
	IsAnimationPlaying(var_303_bool); // 0x442 Func
	var_308_bool = var_303_bool == 0; // 0x444 Not
	if(var_308_bool == 0) goto Label_1095; // 0x445 JumpB
	goto Label_1127; // 0x446 Jump
	
Label_1127:
	func_1264(var_307_float); // 0x468 NEW_2
	var_296_bool = 0; // 0x46a MovB
	return 10; // 0x46b Return
	
Label_1095:
	var_309_bool = 0; // 0x447 PushV
	func_1160(var_309_bool); // 0x448 NEW_2
	if(var_309_bool == 0) goto Label_1101; // 0x44a JumpB
	var_296_bool = 1; // 0x44b MovB
	return 10; // 0x44c Return
	
Label_1101:
	var_352_bool = 0; var_353_object = Obj(); // 0x44d PushV
	var_353_object = var_0_object; // 0x44e MovT
	func_1876(var_352_bool, var_353_object); // 0x44f NEW_2
	var_354_bool = var_352_bool == 0; // 0x451 Not
	if(var_354_bool == 0) goto Label_1109; // 0x452 JumpB
	var_296_bool = 0; // 0x453 MovB
	return 10; // 0x454 Return
	
Label_1109:
	GetPFPosition(var_304_cvector); // 0x455 TObjFunc
	GetPFPosition(var_305_cvector); // 0x457 Func
	var_306_cvector = var_304_cvector - var_305_cvector; // 0x459 Sub2
	var_307_float = var_306_cvector | var_306_cvector; // 0x45a Or2
	var_355_float = var_297_float * var_297_float; // 0x45b Mult
	var_356_bool = var_307_float < var_355_float; // 0x45c LT
	if(var_356_bool == 0) goto Label_1124; // 0x45d JumpB
	var_357_bool = 0; var_358_float = 0; // 0x45e PushV
	var_358_float = var_297_float; // 0x45f Mov
	func_925(var_307_float, var_357_bool, var_358_float); // 0x460 NEW_2
	var_296_bool = 1; // 0x462 MovB
	return 10; // 0x463 Return
	
Label_1124:
	sync(); // 0x464 Func
	goto Label_1090; // 0x466 Jump
}


func_2370()
{
	var_115_string = "oob9DobermanSpi4ka1_1"; // 0x943 PushS
	var_116_int = 1; // 0x944 PushI
	SetVariable(var_115_string, var_116_int); // 0x945 Func
	return 0; // 0x947 Return
}


func_2376()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x948 PushV
	var_31_object = Obj(); // 0x949 PushV
	func_2485(var_31_object); // 0x94a NEW_2
	var_30_object = var_31_object; // 0x94b Mov
	var_38_string = "b9q03DobermanGotoFollower"; // 0x94d PushS
	var_39_string = "pt_b9q03_follower"; // 0x94e PushS
	var_40_int = 0; // 0x94f PushI
	var_41_int = 530343; // 0x950 PushI
	var_42_float = 0; // 0x951 PushV
	func_2307(var_42_float); // 0x952 NEW_2
	AddMark(var_38_string, var_39_string, var_40_int, var_41_int, var_42_float); // 0x954 ObjFunc
	func_2431(); // 0x957 NEW_2
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x959 PushV
	var_69_string = "quest_b9_03"; // 0x95a MovS
	var_70_string = "place_follower"; // 0x95b MovS
	func_2295(var_68_bool, var_69_string, var_70_string); // 0x95c NEW_2
	var_74_bool = 0; var_75_string = ""; var_76_string = ""; // 0x95e PushV
	var_75_string = "quest_b9_03"; // 0x95f MovS
	var_76_string = "init_bonefires"; // 0x960 MovS
	func_2295(var_74_bool, var_75_string, var_76_string); // 0x961 NEW_2
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0; // 0x963 PushV
	var_80_object = Obj(); // 0x964 PushV
	func_2485(var_80_object); // 0x965 NEW_2
	var_77_object = var_80_object; // 0x966 Mov
	var_78_string = "pt_b9q03_follower"; // 0x968 MovS
	var_79_float = 2; // 0x969 MovI
	func_2502(var_77_object, var_78_string, var_79_float); // 0x96a NEW_2
	var_100_object = Obj(); // 0x96c PushV
	func_2485(var_100_object); // 0x96d NEW_2
	ShowMap(var_100_object); // 0x96f ObjFunc
	return 2; // 0x971 Return
}


func_1353(var_2_object)
{
	var_22_int = 1; // 0x549 PushI
	KillTimer(var_22_int); // 0x54a Func
	var_23_object = var_2_object; // 0x54c PushT
	if(var_23_object == 0) goto Label_1362; // 0x54d JumpB
	var_2_object = 0; // 0x54e TMovB
	var_24_string = "head"; // 0x54f PushS
	UnlookAsync(var_24_string); // 0x550 Func
	
Label_1362:
	func_1519(var_21_object); // 0x553 NEW_2
	return 0; // 0x555 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_98_object, var_99_object)
{
	var_0_object = var_99_object; // 0x4b TMov
	var_1_object = var_98_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_104_int = 1; // 0x4e PushI
	if(var_104_int == 0) goto Label_127; // 0x4f JumpB
	var_105_bool = 0; var_106_object = Obj(); // 0x50 PushV
	var_106_object = var_1_object; // 0x51 MovT
	func_2419(var_106_object); // 0x52 NEW_2
	if(var_105_bool == 0) goto Label_110; // 0x54 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x55 PushV
	var_113_object = var_1_object; // 0x56 MovT
	var_114_object = var_0_object; // 0x57 MovT
	func_2370(); // 0x58 NEW_2
	var_117_string = ""; // 0x5a PushV
	var_117_string = "Neutral"; // 0x5b MovS
	func_157(var_99_object, var_117_string); // 0x5c NEW_2
	var_134_int = 530309; // 0x5e PushI
	SetMessage(var_134_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_135_int = 530310; // 0x63 PushI
	var_136_int = 31698; // 0x64 PushI
	var_137_int = 31697; // 0x65 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x66 TObjFunc
	var_138_int = 531024; // 0x68 PushI
	var_139_int = 31698; // 0x69 PushI
	var_140_int = 32353; // 0x6a PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_141_bool = 0; // 0x7f PushV
	func_2644(var_141_bool); // 0x80 NEW_2
	if(var_141_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_142_string = var_3_string; // 0x85 PushT
	if(var_142_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_143_string = ""; // 0x88 PushV
	var_143_string = var_2_object; // 0x89 MovT
	func_2129(var_143_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_154_string = "all"; // 0x8e PushS
	var_155_string = "idle"; // 0x8f PushS
	PlayAnimation(var_154_string, var_155_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_156_string = var_3_string; // 0x94 PushT
	if(var_156_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_157_string = "all"; // 0x97 PushS
	var_158_string = "idle"; // 0x98 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_159_string = ""; // 0x6e PushV
	var_159_string = "Neutral"; // 0x6f MovS
	func_157(var_99_object, var_159_string); // 0x70 NEW_2
	var_160_int = 530314; // 0x72 PushI
	SetMessage(var_160_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_161_int = 530315; // 0x77 PushI
	var_162_int = -1; // 0x78 PushI
	var_163_int = 31702; // 0x79 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_2636(var_86_int)
{
	var_86_int = 518097; // 0xa4c MovI
	return 0; // 0xa4d Return
}


func_2638(var_85_int)
{
	var_85_int = 518096; // 0xa4e MovI
	return 0; // 0xa4f Return
}


func_591(var_81_bool)
{
	var_81_bool = 1; // 0x24f MovB
	return 0; // 0x250 Return
}


func_2640(var_87_string)
{
	var_87_string = "ui/NPC_Citizen2.png"; // 0xa50 MovS
	return 0; // 0xa51 Return
}


func_2129(var_143_string)
{
	var_144_bool = 0; var_145_float = 0; var_146_float = 0; var_147_bool = 0; var_148_float = 0; var_149_float = 0; // 0x851 PushV
	lshHasAnimation(var_147_bool, var_143_string); // 0x852 Func
	var_150_bool = var_147_bool; // 0x854 Push
	if(var_150_bool == 0) goto Label_2140; // 0x855 JumpB
	lshGetAnimTimes(var_143_string, var_148_float, var_149_float); // 0x856 Func
	var_151_bool = 0; // 0x858 PushB
	lshPlayAnimation(var_148_float, var_149_float, var_151_bool); // 0x859 Func
	goto Label_2144; // 0x85b Jump
	
Label_2144:
	return 6; // 0x860 Return
	
Label_2140:
	var_152_string = "Can't find lsh animation : "; // 0x85c PushS
	var_153_int = var_152_string + var_143_string; // 0x85d Add
	Trace(var_153_int); // 0x85e Func
}


func_2642(var_88_string)
{
	var_88_string = "ui/NPC_Citizen2_b.png"; // 0xa52 MovS
	return 0; // 0xa53 Return
}


func_593()
{
	StopAnimation(); // 0x251 Func
	StopGroup0(); // 0x253 Func
	return 0; // 0x255 Return
}


func_2644(var_80_bool)
{
	var_80_bool = 0; // 0xa54 MovB
	return 0; // 0xa55 Return
}


func_851(var_1_object, var_2_object, var_4_bool)
{
	var_61_bool = 0; var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_cvector = CVector(0,0,0); // 0x353 PushV
	var_1_object = 0; // 0x354 TMovI
	
Label_853:
	var_67_string = "all"; // 0x355 PushS
	var_68_string = "attack_begin"; // 0x356 PushS
	var_69_int = 1; // 0x357 PushI
	var_70_int = var_1_object + var_69_int; // 0x358 Add
	var_71_int = var_68_string + var_70_int; // 0x359 Add
	HasAnimation(var_64_bool, var_67_string, var_71_int); // 0x35a Func
	var_72_bool = var_64_bool == 0; // 0x35c Not
	if(var_72_bool == 0) goto Label_863; // 0x35d JumpB
	goto Label_866; // 0x35e Jump
	
Label_866:
	var_2_object = 0; // 0x362 TMovI
	
Label_867:
	var_73_string = "attack"; // 0x363 PushS
	var_74_int = 1; // 0x364 PushI
	var_75_int = var_2_object + var_74_int; // 0x365 Add
	var_76_int = var_73_string + var_75_int; // 0x366 Add
	IsExisting3DSound(var_65_bool, var_76_int); // 0x367 Func
	var_77_bool = var_65_bool == 0; // 0x369 Not
	if(var_77_bool == 0) goto Label_876; // 0x36a JumpB
	goto Label_879; // 0x36b Jump
	
Label_879:
	var_78_string = "all"; // 0x36f PushS
	var_79_string = "bjump"; // 0x370 PushS
	GetAnimationOffset(var_66_cvector, var_78_string, var_79_string); // 0x371 Func
	var_80_float = GetByIndex(var_66_cvector, 2); // 0x373 PushE
	var_4_bool = -var_80_float; // 0x374 Neg2
	return 6; // 0x375 Return
	
Label_876:
	var_81_int = 1; // 0x36c PushI
	var_2_object = var_2_object + var_81_int; // 0x36d Add2
	goto Label_867; // 0x36e Jump
	
Label_863:
	var_82_int = 1; // 0x35f PushI
	var_1_object = var_1_object + var_82_int; // 0x360 Add2
	goto Label_853; // 0x361 Jump
}


func_598()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x256 PushV
	var_35_string = "player"; // 0x257 PushS
	FindActor(var_34_object, var_35_string); // 0x258 Func
	var_36_object = Obj(); var_37_bool = 0; var_38_float = 0; // 0x25a PushV
	var_36_object = var_34_object; // 0x25b Mov
	var_37_bool = 1; // 0x25c MovB
	var_38_float = 180.0; // 0x25d MovF
	func_622(var_30_bool, var_31_float, var_32_int, var_33_object, var_34_object, var_36_object, var_37_bool, var_38_float); // 0x25e NEW_2
	return 2; // 0x260 Return
}


func_2646(var_22_object)
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0xa57 PushV
	var_24_string = "quest_b9_03"; // 0xa58 MovS
	var_25_string = "doberman_dead"; // 0xa59 MovS
	func_2295(var_23_bool, var_24_string, var_25_string); // 0xa5a NEW_2
	var_29_object = Obj(); // 0xa5c PushV
	var_29_object = var_22_object; // 0xa5d Mov
	TaskCall(5); // 0xa5e TaskCall
	func_1546(var_29_object); // 0xa5f NEW_2
	TaskReturn(); // 0xa60 TaskReturn
	return 0; // 0xa62 Return
}


func_1876(var_34_bool, var_35_object)
{
	var_36_int = 0; var_37_int = 0; // 0x754 PushV
	var_38_bool = 0; var_39_object = Obj(); // 0x755 PushV
	var_39_object = var_35_object; // 0x756 Mov
	func_1840(var_38_bool, var_39_object); // 0x757 NEW_2
	var_55_bool = var_38_bool == 0; // 0x759 Not
	if(var_55_bool == 0) goto Label_1885; // 0x75a JumpB
	var_34_bool = 0; // 0x75b MovB
	return 2; // 0x75c Return
	
Label_1885:
	var_56_bool = 0; var_57_object = Obj(); var_58_string = ""; // 0x75d PushV
	var_57_object = var_35_object; // 0x75e Mov
	var_58_string = "noaccess"; // 0x75f MovS
	func_1750(var_56_bool, var_57_object, var_58_string); // 0x760 NEW_2
	var_65_bool = var_56_bool == 0; // 0x762 Not
	if(var_65_bool == 0) goto Label_1894; // 0x763 JumpB
	var_34_bool = 1; // 0x764 MovB
	return 2; // 0x765 Return
	
Label_1894:
	var_66_string = "noaccess"; // 0x766 PushS
	GetProperty(var_66_string, var_37_int); // 0x767 ObjFunc
	var_67_int = 0; // 0x769 PushI
	var_34_bool = var_37_int == var_67_int; // 0x76a Eq2
	return 2; // 0x76b Return
}


func_2145(var_121_string, var_122_bool)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0; // 0x861 PushV
	lshHasAnimation(var_128_bool, var_121_string); // 0x862 Func
	var_131_bool = var_128_bool; // 0x864 Push
	if(var_131_bool == 0) goto Label_2155; // 0x865 JumpB
	lshGetAnimTimes(var_121_string, var_129_float, var_130_float); // 0x866 Func
	lshPlayAnimation(var_129_float, var_130_float, var_122_bool); // 0x868 Func
	goto Label_2159; // 0x86a Jump
	
Label_2159:
	return 6; // 0x86f Return
	
Label_2155:
	var_132_string = "Can't find lsh animation : "; // 0x86b PushS
	var_133_int = var_132_string + var_121_string; // 0x86c Add
	Trace(var_133_int); // 0x86d Func
}


func_610(var_405_float)
{
	var_405_float = 0.1; // 0x263 MovF
	return 0; // 0x264 Return
}


func_613(var_412_int)
{
	var_412_int = 0; // 0x266 MovI
	return 0; // 0x267 Return
}


func_1132(var_0_object, var_311_bool)
{
	var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_float = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_float = 0; var_321_float = 0; // 0x46c PushV
	var_322_bool = 0; var_323_object = Obj(); // 0x46d PushV
	var_323_object = var_0_object; // 0x46e MovT
	func_1876(var_322_bool, var_323_object); // 0x46f NEW_2
	var_324_bool = var_322_bool == 0; // 0x471 Not
	if(var_324_bool == 0) goto Label_1141; // 0x472 JumpB
	var_311_bool = 0; // 0x473 MovB
	return 10; // 0x474 Return
	
Label_1141:
	var_325_bool = 0; // 0x475 PushV
	func_1221(var_321_float, var_325_bool); // 0x476 NEW_2
	if(var_325_bool == 0) goto Label_1158; // 0x478 JumpB
	GetPFPosition(var_317_cvector); // 0x479 TObjFunc
	GetPFPosition(var_318_cvector); // 0x47b Func
	var_319_cvector = var_317_cvector - var_318_cvector; // 0x47d Sub2
	var_320_float = var_319_cvector | var_319_cvector; // 0x47e Or2
	GetAttackDistance(var_321_float); // 0x47f TObjFunc
	var_326_int = 50; // 0x481 PushI
	var_321_float = var_321_float + var_326_int; // 0x482 Add2
	var_327_float = var_321_float * var_321_float; // 0x483 Mult
	var_311_bool = var_320_float <= var_327_float; // 0x484 LE2
	return 10; // 0x485 Return
	
Label_1158:
	var_311_bool = 0; // 0x486 MovB
	return 10; // 0x487 Return
}


func_364(var_6_int, var_22_float, var_23_float)
{
	var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; // 0x16c PushV
	var_6_int = 0; // 0x16d TMovB
	
Label_366:
	var_28_int = 3; // 0x16e PushI
	rand(var_26_float, var_28_int); // 0x16f Func
	var_29_int = 3; // 0x171 PushI
	var_30_int = var_26_float + var_29_int; // 0x172 Add
	Sleep(var_30_int, var_27_bool); // 0x173 Func
	var_6_int = 1; // 0x175 TMovB
	var_31_float = 0; var_32_float = 0; // 0x176 PushV
	var_31_float = var_22_float; // 0x177 Mov
	var_32_float = var_23_float; // 0x178 Mov
	func_433(var_23_float, var_24_float, var_25_bool, var_26_float, var_27_bool, var_31_float, var_32_float); // 0x179 NEW_2
	var_6_int = 0; // 0x17b TMovB
	goto Label_366; // 0x17c Jump
}


func_622(var_0_object, var_3_string, var_5_int, var_36_object, var_37_bool, var_38_float, var_145_bool, var_237_bool)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_float = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; // 0x26e PushV
	func_851(var_58_cvector, var_59_bool, var_60_float); // 0x270 NEW_2
	var_5_int = 0; // 0x272 TMovI
	var_83_string = "@GetAttackDistance"; // 0x273 PushS
	var_84_int = 1; // 0x274 PushI
	var_85_bool = IsFuncExist(var_36_object, var_83_string, var_84_int); // 0x275 FuncExist
	if(var_85_bool == 0) goto Label_636; // 0x276 JumpB
	GetAttackDistance(var_50_float); // 0x277 ObjFunc
	var_86_int = 50; // 0x279 PushI
	var_50_float = var_50_float + var_86_int; // 0x27a Add2
	goto Label_637; // 0x27b Jump
	
Label_637:
	var_87_int = 150; // 0x27d PushI
	var_88_bool = var_50_float >= var_87_int; // 0x27e GE
	if(var_88_bool == 0) goto Label_641; // 0x27f JumpB
	var_50_float = 150; // 0x280 MovI
	
Label_641:
	var_3_string = 0; // 0x281 TMovB
	var_0_object = var_36_object; // 0x282 TMov
	IsPlayerActor(var_0_object, var_53_bool); // 0x283 Func
	var_89_bool = var_53_bool; // 0x285 Push
	if(var_89_bool == 0) goto Label_655; // 0x286 JumpB
	var_90_string = "attack"; // 0x287 PushS
	PlayGlobalMusic(var_90_string); // 0x288 Func
	var_91_object = Obj(); // 0x28a PushV
	func_2234(var_91_object); // 0x28b NEW_2
	SendPlayerEnemy(var_36_object, var_91_object); // 0x28d Func
	
Label_655:
	var_94_bool = var_37_bool; // 0x28f Push
	if(var_94_bool == 0) goto Label_659; // 0x290 JumpB
	var_54_bool = 0; // 0x291 MovB
	goto Label_660; // 0x292 Jump
	
Label_660:
	var_95_float = 400.0; // 0x294 PushF
	var_55_float = var_95_float + var_50_float; // 0x295 Add2
	
Label_662:
	var_96_bool = 0; // 0x296 PushV
	var_96_bool = 0; // 0x297 MovB
	var_97_bool = 0; var_98_object = Obj(); // 0x298 PushV
	var_98_object = var_0_object; // 0x299 MovT
	func_1876(var_97_bool, var_98_object); // 0x29a NEW_2
	if(var_97_bool == 0) goto Label_672; // 0x29c JumpB
	var_131_bool = var_3_string == 0; // 0x29d Not
	if(var_131_bool == 0) goto Label_672; // 0x29e JumpB
	var_96_bool = 1; // 0x29f MovB
	
Label_672:
	if(var_96_bool == 0) goto Label_834; // 0x2a0 JumpB
	func_1264(var_60_float); // 0x2a2 NEW_2
	GetPFPosition(var_51_cvector); // 0x2a4 TObjFunc
	GetPFPosition(var_52_cvector); // 0x2a6 Func
	var_56_cvector = var_51_cvector - var_52_cvector; // 0x2a8 Sub2
	var_57_float = var_56_cvector | var_56_cvector; // 0x2a9 Or2
	var_137_float = var_55_float * var_55_float; // 0x2aa Mult
	var_138_bool = var_57_float >= var_137_float; // 0x2ab GE
	if(var_138_bool == 0) goto Label_700; // 0x2ac JumpB
	var_139_bool = 0; var_140_object = Obj(); var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_bool = 0; // 0x2ad PushV
	var_140_object = var_0_object; // 0x2ae MovT
	var_141_float = var_50_float; // 0x2af Mov
	var_142_float = 3000.0; // 0x2b0 MovF
	var_143_bool = 1; // 0x2b1 MovB
	var_144_bool = 0; // 0x2b2 MovB
	TaskCall(4); // 0x2b3 TaskCall
	func_1290(var_147_bool, var_139_bool, var_140_object, var_141_float, var_142_float, var_143_bool, var_144_bool); // 0x2b4 NEW_2
	TaskReturn(); // 0x2b5 TaskReturn
	var_222_bool = var_145_bool == 0; // 0x2b7 Not
	if(var_222_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_834; // 0x2b9 Jump
	
Label_834:
	WaitForAnimEnd(); // 0x342 Func
	var_223_string = var_3_string; // 0x344 PushT
	if(var_223_string == 0) goto Label_839; // 0x345 JumpB
	return 22; // 0x346 Return
	
Label_839:
	var_224_string = "all"; // 0x347 PushS
	var_225_string = "attack_off"; // 0x348 PushS
	PlayAnimation(var_224_string, var_225_string); // 0x349 Func
	WaitForAnimEnd(); // 0x34b Func
	var_226_bool = var_53_bool; // 0x34d Push
	if(var_226_bool == 0) goto Label_850; // 0x34e JumpB
	var_227_float = 2.0; // 0x34f PushF
	Sleep(var_227_float); // 0x350 Func
	
Label_850:
	return 22; // 0x352 Return
	
Label_698:
	var_54_bool = 0; // 0x2ba MovB
	goto Label_833; // 0x2bb Jump
	
Label_833:
	goto Label_662; // 0x341 Jump
	
Label_700:
	var_228_float = var_38_float * var_38_float; // 0x2bc Mult
	var_229_bool = var_57_float >= var_228_float; // 0x2bd GE
	if(var_229_bool == 0) goto Label_825; // 0x2be JumpB
	GetPFPosition(var_58_cvector); // 0x2bf TObjFunc
	CanReachByPF(var_59_bool, var_58_cvector); // 0x2c1 Func
	var_230_bool = var_59_bool == 0; // 0x2c3 Not
	if(var_230_bool == 0) goto Label_724; // 0x2c4 JumpB
	var_231_bool = 0; var_232_object = Obj(); var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_bool = 0; // 0x2c5 PushV
	var_232_object = var_0_object; // 0x2c6 MovT
	var_233_float = var_50_float; // 0x2c7 Mov
	var_234_float = 3000.0; // 0x2c8 MovF
	var_235_bool = 1; // 0x2c9 MovB
	var_236_bool = 0; // 0x2ca MovB
	TaskCall(4); // 0x2cb TaskCall
	func_1290(var_239_bool, var_231_bool, var_232_object, var_233_float, var_234_float, var_235_bool, var_236_bool); // 0x2cc NEW_2
	TaskReturn(); // 0x2cd TaskReturn
	var_240_bool = var_237_bool == 0; // 0x2cf Not
	if(var_240_bool == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_834; // 0x2d1 Jump
	
Label_722:
	var_54_bool = 0; // 0x2d2 MovB
	goto Label_662; // 0x2d3 Jump
	
Label_724:
	var_241_bool = var_54_bool == 0; // 0x2d4 Not
	if(var_241_bool == 0) goto Label_749; // 0x2d5 JumpB
	var_242_object = Obj(); // 0x2d6 PushV
	var_242_object = var_0_object; // 0x2d7 MovT
	func_2026(); // 0x2d8 NEW_2
	var_251_string = "all"; // 0x2da PushS
	var_252_string = "attack_on"; // 0x2db PushS
	PlayAnimation(var_251_string, var_252_string); // 0x2dc Func
	WaitForAnimEnd(); // 0x2de Func
	func_1264(var_60_float); // 0x2e1 NEW_2
	StopAsync(); // 0x2e3 Func
	var_54_bool = 1; // 0x2e5 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x2e6 PushV
	var_254_object = var_0_object; // 0x2e7 MovT
	func_1876(var_253_bool, var_254_object); // 0x2e8 NEW_2
	var_255_bool = var_253_bool == 0; // 0x2ea Not
	if(var_255_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_834; // 0x2ec Jump
	
Label_749:
	rand(var_60_float); // 0x2ed Func
	var_256_bool = 0; // 0x2ef PushV
	var_256_bool = 1; // 0x2f0 MovB
	var_257_float = 0.25; // 0x2f1 PushF
	var_258_bool = var_60_float < var_257_float; // 0x2f2 LT
	if(var_258_bool == 0) goto Label_761; // 0x2f3 JumpB
	var_259_bool = 0; // 0x2f4 PushV
	func_1221(var_256_bool, var_259_bool); // 0x2f5 NEW_2
	if(var_259_bool == 0) goto Label_761; // 0x2f7 JumpB
	var_256_bool = 0; // 0x2f8 MovB
	
Label_761:
	if(var_256_bool == 0) goto Label_778; // 0x2f9 JumpB
	Face(var_0_object); // 0x2fa Func
	func_1271(); // 0x2fd NEW_2
	var_294_string = "all"; // 0x2ff PushS
	var_295_string = "attack_stay"; // 0x300 PushS
	PlayAnimation(var_294_string, var_295_string); // 0x301 Func
	var_296_bool = 0; var_297_float = 0; // 0x303 PushV
	var_297_float = var_38_float; // 0x304 Mov
	func_1089(var_60_float, var_296_bool, var_297_float); // 0x305 NEW_2
	StopAsync(); // 0x307 Func
	goto Label_824; // 0x309 Jump
	
Label_824:
	goto Label_833; // 0x338 Jump
	
Label_778:
	Face(var_0_object); // 0x30a Func
	var_515_string = "all"; // 0x30c PushS
	var_516_string = "fjump"; // 0x30d PushS
	PlayAnimation(var_515_string, var_516_string); // 0x30e Func
	WaitForAnimEnd(); // 0x310 Func
	func_1264(var_60_float); // 0x313 NEW_2
	var_517_cvector = CVector(0.0, 0.0, 0.0); // 0x315 PushVec
	SetSpeed(var_517_cvector); // 0x316 Func
	Stop(); // 0x318 Func
	StopAsync(); // 0x31a Func
	var_518_bool = 0; // 0x31c PushV
	func_1221(var_60_float, var_518_bool); // 0x31d NEW_2
	var_519_bool = var_518_bool == 0; // 0x31f Not
	if(var_519_bool == 0) goto Label_824; // 0x320 JumpB
	var_520_bool = 0; var_521_object = Obj(); // 0x321 PushV
	var_521_object = var_0_object; // 0x322 MovT
	func_1876(var_520_bool, var_521_object); // 0x323 NEW_2
	var_522_bool = var_520_bool == 0; // 0x325 Not
	if(var_522_bool == 0) goto Label_808; // 0x326 JumpB
	goto Label_834; // 0x327 Jump
	
Label_808:
	GetPFPosition(var_51_cvector); // 0x328 TObjFunc
	GetPFPosition(var_52_cvector); // 0x32a Func
	var_56_cvector = var_51_cvector - var_52_cvector; // 0x32c Sub2
	var_57_float = var_56_cvector | var_56_cvector; // 0x32d Or2
	var_523_float = var_38_float * var_38_float; // 0x32e Mult
	var_524_bool = var_57_float < var_523_float; // 0x32f LT
	if(var_524_bool == 0) goto Label_824; // 0x330 JumpB
	var_525_bool = 0; var_526_float = 0; // 0x331 PushV
	var_526_float = var_38_float; // 0x332 Mov
	func_925(var_60_float, var_525_bool, var_526_float); // 0x333 NEW_2
	var_527_bool = var_525_bool == 0; // 0x335 Not
	if(var_527_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_834; // 0x337 Jump
	
Label_825:
	var_528_bool = 0; var_529_float = 0; // 0x339 PushV
	var_529_float = var_38_float; // 0x33a Mov
	func_925(var_60_float, var_528_bool, var_529_float); // 0x33b NEW_2
	var_530_bool = var_528_bool == 0; // 0x33d Not
	if(var_530_bool == 0) goto Label_832; // 0x33e JumpB
	goto Label_834; // 0x33f Jump
	
Label_832:
	var_54_bool = 1; // 0x340 MovB
	
Label_659:
	var_54_bool = 1; // 0x293 MovB
	
Label_636:
	var_50_float = var_38_float; // 0x27c Mov
}


func_1900(var_38_object)
{
	var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_bool = 0; var_47_int = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; // 0x76c PushV
	var_53_bool = var_38_object == 0; // 0x76d NullEq
	if(var_53_bool == 0) goto Label_1904; // 0x76e JumpB
	return 14; // 0x76f Return
	
Label_1904:
	IsDead(var_46_bool); // 0x770 Func
	var_54_bool = var_46_bool; // 0x772 Push
	if(var_54_bool == 0) goto Label_1909; // 0x773 JumpB
	return 14; // 0x774 Return
	
Label_1909:
	GetSecondaryAnimationType(var_47_int); // 0x775 Func
	var_55_int = 0; // 0x777 PushI
	var_56_bool = var_47_int < var_55_int; // 0x778 LT
	if(var_56_bool == 0) goto Label_1915; // 0x779 JumpB
	return 14; // 0x77a Return
	
Label_1915:
	GetPosition(var_48_cvector); // 0x77b ObjFunc
	GetPosition(var_49_cvector); // 0x77d Func
	GetDirection(var_50_cvector); // 0x77f Func
	var_51_cvector = var_49_cvector - var_48_cvector; // 0x781 Sub2
	var_57_float = GetByIndex(var_51_cvector, 0); // 0x782 PushE
	var_58_float = GetByIndex(var_50_cvector, 0); // 0x783 PushE
	var_59_float = var_57_float * var_58_float; // 0x784 Mult
	var_60_float = GetByIndex(var_51_cvector, 2); // 0x785 PushE
	var_61_float = GetByIndex(var_50_cvector, 2); // 0x786 PushE
	var_62_float = var_60_float * var_61_float; // 0x787 Mult
	var_63_int = var_59_float + var_62_float; // 0x788 Add
	var_64_int = 0; // 0x789 PushI
	var_65_bool = var_63_int >= var_64_int; // 0x78a GE
	if(var_65_bool == 0) goto Label_1934; // 0x78b JumpB
	var_52_string = "fhit"; // 0x78c MovS
	goto Label_1935; // 0x78d Jump
	
Label_1935:
	var_66_string = "hit_react"; // 0x78f PushS
	var_67_string = "1"; // 0x790 PushS
	var_68_int = var_52_string + var_67_string; // 0x791 Add
	var_69_string = "2"; // 0x792 PushS
	var_70_int = var_52_string + var_69_string; // 0x793 Add
	var_71_int = -10; // 0x794 PushI
	FadeSecondaryAnimation(var_66_string, var_68_int, var_70_int, var_71_int); // 0x795 Func
	return 14; // 0x797 Return
	
Label_1934:
	var_52_string = "bhit"; // 0x78e MovS
}


func_2160(var_25_object)
{
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); // 0x870 PushV
	GetEyesHeight(var_28_float); // 0x871 ObjFunc
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x873 MovV
	var_30_float = GetByIndex(var_29_cvector, 1); // 0x874 PushE
	var_30_float = var_28_float; // 0x875 Mov
	SetByIndex(var_29_cvector, 1) = var_30_float; // 0x876 PopE
	var_31_string = "head"; // 0x877 PushS
	LookAsync(var_25_object, var_31_string, var_29_cvector); // 0x878 Func
	return 4; // 0x87a Return
}


func_2419(var_105_bool)
{
	var_107_int = 0; var_108_string = ""; // 0x974 PushV
	var_108_string = "oob9DobermanSpi4ka1_1"; // 0x975 MovS
	func_2273(var_107_int, var_108_string); // 0x976 NEW_2
	var_111_int = 0; // 0x978 PushI
	var_112_bool = var_107_int == var_111_int; // 0x979 Eq
	if(var_112_bool == 0) goto Label_2429; // 0x97a JumpB
	var_105_bool = 1; // 0x97b MovB
	return 0; // 0x97c Return
	
Label_2429:
	var_105_bool = 0; // 0x97d MovB
	return 0; // 0x97e Return
}


func_1395(var_0_object, var_1_object, var_168_bool, var_169_object, var_170_float, var_171_float, var_172_bool, var_173_bool)
{
	var_174_bool = 0; var_175_bool = 0; var_176_object = Obj(); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_bool = 0; var_183_bool = 0; var_184_object = Obj(); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_float = 0; var_189_object = Obj(); // 0x573 PushV
	var_0_object = 0; // 0x574 TMovB
	var_1_object = var_169_object; // 0x575 TMov
	var_183_bool = var_173_bool; // 0x576 Mov
	
Label_1399:
	var_190_bool = 0; var_191_object = Obj(); // 0x577 PushV
	var_191_object = var_169_object; // 0x578 Mov
	func_1535(var_190_bool, var_191_object); // 0x579 NEW_2
	var_194_bool = var_190_bool == 0; // 0x57b Not
	if(var_194_bool == 0) goto Label_1407; // 0x57c JumpB
	var_168_bool = 0; // 0x57d MovB
	return 16; // 0x57e Return
	
Label_1407:
	GetPosition(var_185_cvector); // 0x57f ObjFunc
	GetPosition(var_186_cvector); // 0x581 Func
	var_187_cvector = var_185_cvector - var_186_cvector; // 0x583 Sub2
	var_188_float = var_187_cvector | var_187_cvector; // 0x584 Or2
	var_195_bool = 0; // 0x585 PushV
	var_195_bool = 0; // 0x586 MovB
	var_196_int = 0; // 0x587 PushI
	var_197_bool = var_171_float > var_196_int; // 0x588 GT
	if(var_197_bool == 0) goto Label_1422; // 0x589 JumpB
	var_198_float = var_171_float * var_171_float; // 0x58a Mult
	var_199_bool = var_188_float > var_198_float; // 0x58b GT
	if(var_199_bool == 0) goto Label_1422; // 0x58c JumpB
	var_195_bool = 1; // 0x58d MovB
	
Label_1422:
	if(var_195_bool == 0) goto Label_1427; // 0x58e JumpB
	Stop(); // 0x58f Func
	var_168_bool = 0; // 0x591 MovB
	return 16; // 0x592 Return
	
Label_1427:
	var_200_float = var_170_float * var_170_float; // 0x593 Mult
	var_201_bool = var_188_float > var_200_float; // 0x594 GT
	if(var_201_bool == 0) goto Label_1489; // 0x595 JumpB
	GetPFPosition(var_185_cvector); // 0x596 ObjFunc
	FindPathTo(var_189_object, var_185_cvector); // 0x598 Func
	var_202_bool = var_189_object != 0; // 0x59a NullNeq
	if(var_202_bool == 0) goto Label_1438; // 0x59b JumpB
	var_184_object = var_189_object; // 0x59c Mov
	var_189_object = 0; // 0x59d SetNull
	
Label_1438:
	var_203_bool = var_184_object != 0; // 0x59e NullNeq
	if(var_203_bool == 0) goto Label_1471; // 0x59f JumpB
	var_204_bool = var_183_bool; // 0x5a0 Push
	if(var_204_bool == 0) goto Label_1448; // 0x5a1 JumpB
	var_183_bool = 0; // 0x5a2 MovB
	RotatePath(var_184_object, var_182_bool); // 0x5a3 Func
	var_205_bool = var_182_bool == 0; // 0x5a5 Not
	if(var_205_bool == 0) goto Label_1448; // 0x5a6 JumpB
	goto Label_1495; // 0x5a7 Jump
	
Label_1495:
	var_168_bool = !var_0_object; // 0x5d7 Not2
	return 16; // 0x5d8 Return
	
Label_1448:
	var_206_int = 0; // 0x5a8 PushI
	var_207_float = 0.3; // 0x5a9 PushF
	SetTimer(var_206_int, var_207_float); // 0x5aa Func
	var_208_string = ""; // 0x5ac PushV
	func_1542(var_208_string); // 0x5ad NEW_2
	var_209_string = ""; // 0x5af PushV
	func_1544(var_209_string); // 0x5b0 NEW_2
	FollowPath(var_184_object, var_172_bool, var_182_bool, var_208_string, var_209_string); // 0x5b2 Func
	var_210_bool = var_182_bool == 0; // 0x5b4 Not
	if(var_210_bool == 0) goto Label_1469; // 0x5b5 JumpB
	var_211_object = var_0_object; // 0x5b6 PushT
	if(var_211_object == 0) goto Label_1467; // 0x5b7 JumpB
	var_184_object = 0; // 0x5b8 SetNull
	goto Label_1495; // 0x5b9 Jump
	
Label_1467:
	goto Label_1494; // 0x5bb Jump
	
Label_1494:
	goto Label_1399; // 0x5d6 Jump
	
Label_1469:
	var_184_object = 0; // 0x5bd SetNull
	goto Label_1487; // 0x5be Jump
	
Label_1487:
	var_189_object = 0; // 0x5cf SetNull
	goto Label_1493; // 0x5d0 Jump
	
Label_1493:
	var_184_object = 0; // 0x5d5 SetNull
	
Label_1471:
	var_212_int = 0; // 0x5bf PushI
	KillTimer(var_212_int); // 0x5c0 Func
	var_213_float = 0.5; // 0x5c2 PushF
	Sleep(var_213_float, var_182_bool); // 0x5c3 Func
	var_214_bool = var_182_bool == 0; // 0x5c5 Not
	if(var_214_bool == 0) goto Label_1483; // 0x5c6 JumpB
	var_215_object = var_0_object; // 0x5c7 PushT
	if(var_215_object == 0) goto Label_1483; // 0x5c8 JumpB
	var_184_object = 0; // 0x5c9 SetNull
	goto Label_1495; // 0x5ca Jump
	
Label_1483:
	var_216_int = 0; // 0x5cb PushI
	var_217_float = 0.3; // 0x5cc PushF
	SetTimer(var_216_int, var_217_float); // 0x5cd Func
	
Label_1489:
	var_218_int = 0; // 0x5d1 PushI
	KillTimer(var_218_int); // 0x5d2 Func
	goto Label_1495; // 0x5d4 Jump
}


func_886(var_0_object, var_394_float, var_395_int)
{
	var_396_object = Obj(); var_397_float = 0; var_398_float = 0; var_399_object = Obj(); var_400_float = 0; var_401_float = 0; // 0x376 PushV
	var_402_float = 0.9; // 0x377 PushF
	var_403_float = var_394_float * var_402_float; // 0x378 Mult
	GetVictim(var_403_float, var_399_object); // 0x379 Func
	ReportAttack(var_0_object); // 0x37b Func
	var_404_bool = var_399_object == var_0_object; // 0x37d Eq
	if(var_404_bool == 0) goto Label_923; // 0x37e JumpB
	var_405_float = 0; var_406_object = Obj(); var_407_int = 0; // 0x37f PushV
	var_406_object = var_399_object; // 0x380 Mov
	var_407_int = var_395_int; // 0x381 Mov
	func_610(var_407_int); // 0x382 NEW_2
	var_400_float = var_405_float; // 0x383 Mov
	var_408_float = 0; var_409_object = Obj(); var_410_float = 0; var_411_int = 0; // 0x385 PushV
	var_409_object = var_399_object; // 0x386 Mov
	var_410_float = var_400_float; // 0x387 Mov
	var_412_int = 0; var_413_object = Obj(); var_414_int = 0; // 0x388 PushV
	var_413_object = var_399_object; // 0x389 Mov
	var_414_int = var_395_int; // 0x38a Mov
	func_613(var_414_int); // 0x38b NEW_2
	var_411_int = var_412_int; // 0x38c Mov
	func_1762(var_408_float, var_409_object, var_410_float, var_411_int); // 0x38e NEW_2
	var_401_float = var_408_float; // 0x38f Mov
	var_473_int = 0; // 0x391 PushV
	func_1269(var_473_int); // 0x392 NEW_2
	ReportHit(var_0_object, var_473_int, var_401_float, var_400_float); // 0x394 Func
	var_474_object = Obj(); var_475_float = 0; // 0x396 PushV
	var_474_object = var_399_object; // 0x397 Mov
	var_475_float = var_401_float; // 0x398 Mov
	func_1276(); // 0x399 NEW_2
	
Label_923:
	return 6; // 0x39b Return
}


func_2171()
{
	var_24_bool = 0; // 0x87b PushV
	func_2644(var_24_bool); // 0x87c NEW_2
	if(var_24_bool == 0) goto Label_2177; // 0x87e JumpB
	lshStopSpeech(); // 0x87f Func
	
Label_2177:
	return 0; // 0x881 Return
}


func_382(var_5_int)
{
	var_5_int = 1; // 0x17e TMovB
	var_534_bool = 0; // 0x17f PushV
	var_534_bool = 0; // 0x180 MovB
	var_535_bool = 0; // 0x181 PushV
	func_2037(var_535_bool); // 0x182 NEW_2
	var_538_bool = var_535_bool == 0; // 0x184 Not
	if(var_538_bool == 0) goto Label_395; // 0x185 JumpB
	var_539_bool = 0; // 0x186 PushV
	func_431(var_539_bool); // 0x187 NEW_2
	if(var_539_bool == 0) goto Label_395; // 0x189 JumpB
	var_534_bool = 1; // 0x18a MovB
	
Label_395:
	if(var_534_bool == 0) goto Label_401; // 0x18b JumpB
	var_540_object = Obj(); // 0x18c PushV
	func_2234(var_540_object); // 0x18d NEW_2
	RemoveActor(var_540_object); // 0x18f Func
	
Label_401:
	return 0; // 0x191 Return
}


func_2431()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x97f PushV
	var_47_int = 542; // 0x980 PushI
	var_48_int = 2; // 0x981 PushI
	var_49_int = 530354; // 0x982 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0x983 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x985 PushV
	var_51_object = var_46_object; // 0x986 Mov
	var_52_int = 532; // 0x987 MovI
	func_2457(var_50_bool, var_51_object, var_52_int); // 0x988 NEW_2
	return 2; // 0x98a Return
}


func_2178(var_30_string, var_31_int, var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x882 PushV
	var_38_bool = 0; var_39_int = 0; var_40_int = 0; // 0x883 PushV
	var_39_int = var_31_int; // 0x884 Mov
	var_40_int = var_32_int; // 0x885 Mov
	func_2268(var_38_bool, var_39_int, var_40_int); // 0x886 NEW_2
	if(var_38_bool == 0) goto Label_2192; // 0x888 JumpB
	irand(var_36_int, var_33_int); // 0x889 Func
	var_43_int = 0; // 0x88b PushI
	var_44_int = 1; // 0x88c PushI
	var_45_int = var_36_int + var_44_int; // 0x88d Add
	AddItem(var_37_bool, var_30_string, var_43_int, var_45_int); // 0x88e Func
	
Label_2192:
	return 4; // 0x890 Return
}


func_2696(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0xa89 PushV
	var_27_object = var_25_object; // 0xa8a Mov
	TaskCall(0); // 0xa8b TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0xa8c NEW_2
	TaskReturn(); // 0xa8d TaskReturn
	return 0; // 0xa8f Return
}


func_1160(var_309_bool)
{
	var_310_bool = 0; // 0x488 PushV
	var_310_bool = 0; // 0x489 MovB
	var_311_bool = 0; // 0x48a PushV
	func_1132(var_310_bool, var_311_bool); // 0x48b NEW_2
	if(var_311_bool == 0) goto Label_1171; // 0x48d JumpB
	var_328_bool = 0; // 0x48e PushV
	func_1176(var_309_bool, var_310_bool, var_328_bool); // 0x48f NEW_2
	if(var_328_bool == 0) goto Label_1171; // 0x491 JumpB
	var_310_bool = 1; // 0x492 MovB
	
Label_1171:
	if(var_310_bool == 0) goto Label_1174; // 0x493 JumpB
	var_309_bool = 1; // 0x494 MovB
	return 0; // 0x495 Return
	
Label_1174:
	var_309_bool = 0; // 0x496 MovB
	return 0; // 0x497 Return
}


func_2444(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x98c PushV
	GetDiaryRoot(var_61_object); // 0x98d Func
	var_62_bool = var_61_object == 0; // 0x98f Not
	if(var_62_bool == 0) goto Label_2454; // 0x990 JumpB
	var_63_string = "Can't retrieve diary root"; // 0x991 PushS
	Trace(var_63_string); // 0x992 Func
	var_59_object = 0; // 0x994 MovB
	return 2; // 0x995 Return
	
Label_2454:
	var_59_object = var_61_object; // 0x996 Mov
	return 2; // 0x997 Return
}


func_2193(var_90_string)
{
	var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_int = 0; var_103_bool = 0; var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x891 PushV
	IsExisting3DSound(var_99_bool, var_90_string); // 0x892 Func
	var_107_bool = var_99_bool == 0; // 0x894 Not
	if(var_107_bool == 0) goto Label_2218; // 0x895 JumpB
	var_100_int = 0; // 0x896 MovI
	
Label_2199:
	var_108_int = 1; // 0x897 PushI
	var_109_int = var_100_int + var_108_int; // 0x898 Add
	var_110_int = var_90_string + var_109_int; // 0x899 Add
	IsExisting3DSound(var_101_bool, var_110_int); // 0x89a Func
	var_111_bool = var_101_bool == 0; // 0x89c Not
	if(var_111_bool == 0) goto Label_2207; // 0x89d JumpB
	goto Label_2210; // 0x89e Jump
	
Label_2210:
	var_112_bool = var_100_int == 0; // 0x8a2 Not
	if(var_112_bool == 0) goto Label_2213; // 0x8a3 JumpB
	return 16; // 0x8a4 Return
	
Label_2213:
	irand(var_102_int, var_100_int); // 0x8a5 Func
	var_113_int = 1; // 0x8a7 PushI
	var_114_int = var_102_int + var_113_int; // 0x8a8 Add
	var_90_string = var_90_string + var_114_int; // 0x8a9 Add2
	
Label_2218:
	Is3DSoundLoaded(var_103_bool, var_90_string); // 0x8aa Func
	var_115_bool = var_103_bool; // 0x8ac Push
	if(var_115_bool == 0) goto Label_2233; // 0x8ad JumpB
	GetEyesHeight(var_104_float); // 0x8ae Func
	GetDirection(var_105_cvector); // 0x8b0 Func
	var_116_int = 50; // 0x8b2 PushI
	var_106_cvector = var_105_cvector * var_116_int; // 0x8b3 Mult2
	var_117_float = GetByIndex(var_106_cvector, 1); // 0x8b4 PushE
	var_117_float = var_117_float + var_104_float; // 0x8b5 Add2
	SetByIndex(var_106_cvector, 1) = var_117_float; // 0x8b6 PopE
	PlayGlobalSound(var_90_string, var_106_cvector); // 0x8b7 Func
	
Label_2233:
	return 16; // 0x8b9 Return
	
Label_2207:
	var_118_int = 1; // 0x89f PushI
	var_100_int = var_100_int + var_118_int; // 0x8a0 Add2
	goto Label_2199; // 0x8a1 Jump
}


func_402(var_531_string)
{
	var_532_string = "cleanup"; // 0x193 PushS
	var_533_bool = var_531_string == var_532_string; // 0x194 Eq
	if(var_533_bool == 0) goto Label_409; // 0x195 JumpB
	func_382(var_531_string); // 0x197 NEW_2
	
Label_409:
	return 0; // 0x199 Return
}


func_1684(var_89_string)
{
	RemoveRTEnvelope(); // 0x695 Func
	SetDeathState(); // 0x697 Func
	Stop(); // 0x699 Func
	StopAsync(); // 0x69b Func
	StopSecondaryAnimation(); // 0x69d Func
	var_90_string = ""; // 0x69f PushV
	var_90_string = var_89_string; // 0x6a0 Mov
	func_2193(var_90_string); // 0x6a1 NEW_2
	var_119_string = "all"; // 0x6a3 PushS
	PlayAnimation(var_119_string, var_89_string); // 0x6a4 Func
	WaitForAnimEnd(); // 0x6a6 Func
	var_120_string = "all"; // 0x6a8 PushS
	LockAnimationEnd(var_120_string, var_89_string); // 0x6a9 Func
	RemoveEnvelope(); // 0x6ab Func
	return 0; // 0x6ad Return
}


func_1176(var_0_object, var_4_bool, var_328_bool)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_object = Obj(); var_335_bool = 0; var_336_float = 0; var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); // 0x498 PushV
	GetScene(var_334_object); // 0x499 Func
	var_335_bool = 0; // 0x49b MovB
	
Label_1180:
	var_339_cvector = CVector(0,0,0); var_340_object = Obj(); // 0x49c PushV
	var_340_object = var_0_object; // 0x49d MovT
	func_1730(var_340_object); // 0x49e NEW_2
	var_345_int = -var_339_cvector; // 0x4a0 Neg
	FindDirLength(var_336_float, var_345_int, var_336_float); // 0x4a1 Func
	var_346_bool = var_336_float < var_4_bool; // 0x4a3 LT
	if(var_346_bool == 0) goto Label_1190; // 0x4a4 JumpB
	goto Label_1218; // 0x4a5 Jump
	
Label_1218:
	var_328_bool = var_335_bool; // 0x4c2 Mov
	return 10; // 0x4c3 Return
	
Label_1190:
	Face(var_0_object); // 0x4a6 Func
	var_347_string = "all"; // 0x4a8 PushS
	var_348_string = "bjump"; // 0x4a9 PushS
	PlayAnimation(var_347_string, var_348_string); // 0x4aa Func
	GetPFPosition(var_337_cvector); // 0x4ac TObjFunc
	GetPFPosition(var_338_cvector); // 0x4ae Func
	WaitForAnimEnd(); // 0x4b0 Func
	func_1264(var_338_cvector); // 0x4b3 NEW_2
	StopAsync(); // 0x4b5 Func
	var_349_cvector = CVector(0.0, 0.0, 0.0); // 0x4b7 PushVec
	SetSpeed(var_349_cvector); // 0x4b8 Func
	var_335_bool = 1; // 0x4ba MovB
	var_350_bool = 0; // 0x4bb PushV
	func_1132(var_338_cvector, var_350_bool); // 0x4bc NEW_2
	var_351_bool = var_350_bool == 0; // 0x4be Not
	if(var_351_bool == 0) goto Label_1217; // 0x4bf JumpB
	goto Label_1218; // 0x4c0 Jump
	
Label_1217:
	goto Label_1180; // 0x4c1 Jump
}


func_1944(var_25_object, var_26_int, var_27_float)
{
	var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_int = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_int = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); // 0x798 PushV
	var_46_bool = 0; // 0x799 PushV
	var_46_bool = 0; // 0x79a MovB
	var_47_bool = 0; // 0x79b PushV
	var_47_bool = 0; // 0x79c MovB
	var_48_object = var_25_object; // 0x79d Push
	if(var_48_object == 0) goto Label_1955; // 0x79e JumpB
	var_49_int = 4; // 0x79f PushI
	var_50_bool = var_26_int != var_49_int; // 0x7a0 Neq
	if(var_50_bool == 0) goto Label_1955; // 0x7a1 JumpB
	var_47_bool = 1; // 0x7a2 MovB
	
Label_1955:
	if(var_47_bool == 0) goto Label_1960; // 0x7a3 JumpB
	var_51_int = 5; // 0x7a4 PushI
	var_52_bool = var_26_int != var_51_int; // 0x7a5 Neq
	if(var_52_bool == 0) goto Label_1960; // 0x7a6 JumpB
	var_46_bool = 1; // 0x7a7 MovB
	
Label_1960:
	if(var_46_bool == 0) goto Label_2007; // 0x7a8 JumpB
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x7a9 PushV
	var_55_cvector = CVector(0,0,0); var_56_object = Obj(); // 0x7aa PushV
	var_56_object = var_25_object; // 0x7ab Mov
	func_1730(var_56_object); // 0x7ac NEW_2
	var_54_cvector = var_55_cvector; // 0x7ad Mov
	func_2240(var_53_cvector, var_54_cvector); // 0x7af NEW_2
	var_37_cvector = var_53_cvector; // 0x7b0 Mov
	CreateVectorVector(var_38_object); // 0x7b2 Func
	var_39_int = 1; // 0x7b4 MovI
	
Label_1973:
	var_66_string = "hit"; // 0x7b5 PushS
	var_67_int = var_66_string + var_39_int; // 0x7b6 Add
	GetGeometryLocator(var_67_int, var_40_bool, var_41_cvector, var_42_cvector); // 0x7b7 Func
	var_68_bool = var_40_bool == 0; // 0x7b9 Not
	if(var_68_bool == 0) goto Label_1980; // 0x7ba JumpB
	goto Label_1989; // 0x7bb Jump
	
Label_1989:
	size(var_43_int); // 0x7c5 ObjFunc
	var_69_int = var_43_int; // 0x7c7 Push
	if(var_69_int == 0) goto Label_2006; // 0x7c8 JumpB
	irand(var_44_int, var_43_int); // 0x7c9 Func
	get(var_45_cvector, var_44_int); // 0x7cb ObjFunc
	var_70_object = Obj(); var_71_int = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x7cd PushV
	var_70_object = var_25_object; // 0x7ce Mov
	var_71_int = var_26_int; // 0x7cf Mov
	var_72_float = var_27_float; // 0x7d0 Mov
	var_73_cvector = var_45_cvector; // 0x7d1 Mov
	var_74_cvector = -var_37_cvector; // 0x7d2 Neg2
	func_2012(var_72_float, var_73_cvector, var_74_cvector); // 0x7d3 NEW_2
	return 18; // 0x7d5 Return
	
Label_2006:
	var_38_object = 0; // 0x7d6 SetNull
	
Label_2007:
	var_115_object = Obj(); // 0x7d7 PushV
	var_115_object = var_25_object; // 0x7d8 Mov
	func_1900(var_115_object); // 0x7d9 NEW_2
	return 18; // 0x7db Return
	
Label_1980:
	var_116_int = var_42_cvector | var_37_cvector; // 0x7bc Or
	var_117_float = 0.70711; // 0x7bd PushF
	var_118_bool = var_116_int >= var_117_float; // 0x7be GE
	if(var_118_bool == 0) goto Label_1986; // 0x7bf JumpB
	add(var_41_cvector); // 0x7c0 ObjFunc
	
Label_1986:
	var_119_int = 1; // 0x7c2 PushI
	var_39_int = var_39_int + var_119_int; // 0x7c3 Add2
	goto Label_1973; // 0x7c4 Jump
}


func_2457(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x999 PushV
	var_59_object = Obj(); // 0x99a PushV
	func_2444(var_59_object); // 0x99b NEW_2
	var_56_object = var_59_object; // 0x99c Mov
	Find(var_52_int, var_57_object); // 0x99e ObjFunc
	var_64_bool = var_57_object == 0; // 0x9a0 Not
	if(var_64_bool == 0) goto Label_2472; // 0x9a1 JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x9a2 PushS
	var_66_int = var_65_string + var_52_int; // 0x9a3 Add
	Trace(var_66_int); // 0x9a4 Func
	var_50_bool = 0; // 0x9a6 MovB
	return 6; // 0x9a7 Return
	
Label_2472:
	AddChild(var_51_object); // 0x9a8 ObjFunc
	var_67_int = 7; // 0x9aa PushI
	SendWorldWndMessage(var_67_int); // 0x9ab Func
	GetCategory(var_58_int); // 0x9ad ObjFunc
	SetDiarySection(var_58_int); // 0x9af Func
	var_50_bool = 0; // 0x9b1 MovB
	return 6; // 0x9b2 Return
}


func_157(var_2_object, var_117_string)
{
	var_118_bool = 0; // 0x9e PushV
	func_2644(var_118_bool); // 0x9f NEW_2
	var_119_bool = var_118_bool == 0; // 0xa1 Not
	if(var_119_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_120_bool = var_117_string == var_2_object; // 0xa4 Eq
	if(var_120_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_121_string = ""; var_122_bool = 0; // 0xa7 PushV
	var_121_string = var_117_string; // 0xa8 Mov
	var_123_string = ""; // 0xa9 PushS
	var_124_bool = var_117_string == var_123_string; // 0xaa Eq
	if(var_124_bool == 0) goto Label_174; // 0xab JumpB
	var_122_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_2145(var_121_string, var_122_bool); // 0xaf NEW_2
	var_2_object = var_117_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_122_bool = 1; // 0xae MovB
}


func_925(var_0_object, var_357_bool, var_358_float)
{
	var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = ""; var_363_int = 0; var_364_bool = 0; var_365_int = 0; var_366_string = ""; // 0x39d PushV
	func_1264(var_366_string); // 0x39f NEW_2
	irand(var_363_int, var_366_string); // 0x3a1 Func
	var_367_int = 1; // 0x3a3 PushI
	var_363_int = var_363_int + var_367_int; // 0x3a4 Add2
	Face(var_0_object); // 0x3a5 Func
	var_368_bool = 1; // 0x3a7 PushB
	SetAttackState(var_368_bool); // 0x3a8 Func
	func_2321(); // 0x3ab NEW_2
	var_373_string = "all"; // 0x3ad PushS
	var_374_string = "attack_begin"; // 0x3ae PushS
	var_375_int = var_374_string + var_363_int; // 0x3af Add
	PlayAnimation(var_373_string, var_375_int); // 0x3b0 Func
	WaitForAnimEnd(); // 0x3b2 Func
	func_1232(var_365_int, var_366_string); // 0x3b5 NEW_2
	var_391_bool = 0; var_392_object = Obj(); // 0x3b7 PushV
	var_392_object = var_0_object; // 0x3b8 MovT
	func_1876(var_391_bool, var_392_object); // 0x3b9 NEW_2
	var_393_bool = var_391_bool == 0; // 0x3bb Not
	if(var_393_bool == 0) goto Label_961; // 0x3bc JumpB
	StopAsync(); // 0x3bd Func
	var_357_bool = 0; // 0x3bf MovB
	return 8; // 0x3c0 Return
	
Label_961:
	var_394_float = 0; var_395_int = 0; // 0x3c1 PushV
	var_394_float = var_358_float; // 0x3c2 Mov
	var_395_int = var_363_int; // 0x3c3 Mov
	func_886(var_366_string, var_394_float, var_395_int); // 0x3c4 NEW_2
	var_476_string = "all"; // 0x3c6 PushS
	var_477_string = "attack_middle"; // 0x3c7 PushS
	var_478_int = var_477_string + var_363_int; // 0x3c8 Add
	HasAnimation(var_364_bool, var_476_string, var_478_int); // 0x3c9 Func
	var_479_bool = var_364_bool; // 0x3cb Push
	if(var_479_bool == 0) goto Label_1042; // 0x3cc JumpB
	func_2321(); // 0x3ce NEW_2
	var_480_string = "all"; // 0x3d0 PushS
	var_481_string = "attack_middle"; // 0x3d1 PushS
	var_482_int = var_481_string + var_363_int; // 0x3d2 Add
	PlayAnimation(var_480_string, var_482_int); // 0x3d3 Func
	WaitForAnimEnd(); // 0x3d5 Func
	func_1264(var_366_string); // 0x3d8 NEW_2
	var_483_bool = 0; var_484_object = Obj(); // 0x3da PushV
	var_484_object = var_0_object; // 0x3db MovT
	func_1876(var_483_bool, var_484_object); // 0x3dc NEW_2
	var_485_bool = var_483_bool == 0; // 0x3de Not
	if(var_485_bool == 0) goto Label_996; // 0x3df JumpB
	StopAsync(); // 0x3e0 Func
	var_357_bool = 0; // 0x3e2 MovB
	return 8; // 0x3e3 Return
	
Label_996:
	var_486_float = 0; var_487_int = 0; // 0x3e4 PushV
	var_486_float = var_358_float; // 0x3e5 Mov
	var_487_int = var_363_int; // 0x3e6 Mov
	func_886(var_366_string, var_486_float, var_487_int); // 0x3e7 NEW_2
	var_365_int = 1; // 0x3e9 MovI
	
Label_1002:
	var_488_string = "attack_middle"; // 0x3ea PushS
	var_489_int = var_488_string + var_363_int; // 0x3eb Add
	var_490_string = "_"; // 0x3ec PushS
	var_491_int = var_489_int + var_490_string; // 0x3ed Add
	var_366_string = var_491_int + var_365_int; // 0x3ee Add2
	var_492_string = "all"; // 0x3ef PushS
	HasAnimation(var_364_bool, var_492_string, var_366_string); // 0x3f0 Func
	var_493_bool = var_364_bool == 0; // 0x3f2 Not
	if(var_493_bool == 0) goto Label_1013; // 0x3f3 JumpB
	goto Label_1042; // 0x3f4 Jump
	
Label_1042:
	var_494_bool = 0; // 0x412 PushB
	SetAttackState(var_494_bool); // 0x413 Func
	var_495_string = "all"; // 0x415 PushS
	var_496_string = "attack_end"; // 0x416 PushS
	var_497_int = var_496_string + var_363_int; // 0x417 Add
	PlayAnimation(var_495_string, var_497_int); // 0x418 Func
	var_498_bool = 0; // 0x41a PushV
	func_1278(var_498_bool); // 0x41b NEW_2
	if(var_498_bool == 0) goto Label_1060; // 0x41d JumpB
	var_499_bool = 0; var_500_float = 0; // 0x41e PushV
	var_500_float = 0.75; // 0x41f MovF
	func_1062(var_499_bool, var_500_float); // 0x420 NEW_2
	StopAsync(); // 0x422 Func
	
Label_1060:
	var_357_bool = 1; // 0x424 MovB
	return 8; // 0x425 Return
	
Label_1013:
	func_2321(); // 0x3f6 NEW_2
	var_508_string = "all"; // 0x3f8 PushS
	PlayAnimation(var_508_string, var_366_string); // 0x3f9 Func
	WaitForAnimEnd(); // 0x3fb Func
	func_1264(var_366_string); // 0x3fe NEW_2
	var_509_bool = 0; var_510_object = Obj(); // 0x400 PushV
	var_510_object = var_0_object; // 0x401 MovT
	func_1876(var_509_bool, var_510_object); // 0x402 NEW_2
	var_511_bool = var_509_bool == 0; // 0x404 Not
	if(var_511_bool == 0) goto Label_1034; // 0x405 JumpB
	StopAsync(); // 0x406 Func
	var_357_bool = 0; // 0x408 MovB
	return 8; // 0x409 Return
	
Label_1034:
	var_512_float = 0; var_513_int = 0; // 0x40a PushV
	var_512_float = var_358_float; // 0x40b Mov
	var_513_int = var_363_int; // 0x40c Mov
	func_886(var_366_string, var_512_float, var_513_int); // 0x40d NEW_2
	var_514_int = 1; // 0x40f PushI
	var_365_int = var_365_int + var_514_int; // 0x410 Add2
	goto Label_1002; // 0x411 Jump
}


func_431(var_27_bool)
{
	var_27_bool = 1; // 0x1af MovB
	return 0; // 0x1b0 Return
}


func_433(var_0_object, var_1_object, var_2_object, var_3_string, var_27_bool, var_31_float, var_32_float)
{
	var_33_bool = 0; // 0x1b2 PushV
	func_2037(var_33_bool); // 0x1b3 NEW_2
	var_36_bool = var_33_bool == 0; // 0x1b5 Not
	if(var_36_bool == 0) goto Label_440; // 0x1b6 JumpB
	return 0; // 0x1b7 Return
	
Label_440:
	var_37_string = "player"; // 0x1b8 PushS
	FindActor(var_27_bool, var_37_string); // 0x1b9 Func
	var_2_object = 0; // 0x1bb TMovB
	var_3_string = 0; // 0x1bc TMovB
	var_0_object = var_31_float; // 0x1bd TMov
	var_1_object = var_32_float; // 0x1be TMov
	var_38_int = 10; // 0x1bf PushI
	var_39_float = 1.0; // 0x1c0 PushF
	SetTimer(var_38_int, var_39_float); // 0x1c1 Func
	func_512(); // 0x1c4 NEW_2
	var_91_bool = var_3_string == 0; // 0x1c6 Not
	if(var_91_bool == 0) goto Label_459; // 0x1c7 JumpB
	var_92_int = 10; // 0x1c8 PushI
	KillTimer(var_92_int); // 0x1c9 Func
	
Label_459:
	return 0; // 0x1cb Return
}


func_1716(var_436_string, var_437_int)
{
	var_438_int = 2; // 0x6b5 PushI
	var_439_bool = var_437_int == var_438_int; // 0x6b6 Eq
	if(var_439_bool == 0) goto Label_1723; // 0x6b7 JumpB
	var_436_string = "fire"; // 0x6b8 MovS
	return 0; // 0x6b9 Return
	
Label_1723:
	var_440_int = 1; // 0x6bb PushI
	var_441_bool = var_437_int == var_440_int; // 0x6bc Eq
	if(var_441_bool == 0) goto Label_1728; // 0x6bd JumpB
	var_436_string = "bullet"; // 0x6be MovS
	return 0; // 0x6bf Return
	
Label_1728:
	var_436_string = "phys"; // 0x6c0 MovS
	return 0; // 0x6c1 Return
}


func_2485(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); // 0x9b5 PushV
	GetMainOutdoorScene(var_34_object); // 0x9b6 Func
	var_36_bool = var_34_object == 0; // 0x9b8 NullEq
	if(var_36_bool == 0) goto Label_2496; // 0x9b9 JumpB
	var_37_string = "Can't find main outdoor scene"; // 0x9ba PushS
	Trace(var_37_string); // 0x9bb Func
	var_35_object = 0; // 0x9bd SetNull
	var_31_object = var_35_object; // 0x9be Mov
	return 4; // 0x9bf Return
	
Label_2496:
	GetMap(var_35_object); // 0x9c0 ObjFunc
	var_31_object = var_35_object; // 0x9c2 Mov
	return 4; // 0x9c3 Return
}


func_2234(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x8ba PushV
	self(var_23_object); // 0x8bb Func
	var_21_object = var_23_object; // 0x8bd Mov
	return 2; // 0x8be Return
}


func_2240(var_53_cvector, var_54_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0x8c0 PushV
	var_63_int = var_54_cvector | var_54_cvector; // 0x8c1 Or
	var_62_float = sqrt(var_63_int); // 0x8c2 Sqrt2
	var_64_float = 0.0; // 0x8c3 PushF
	var_65_bool = var_62_float < var_64_float; // 0x8c4 LT
	if(var_65_bool == 0) goto Label_2248; // 0x8c5 JumpB
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0x8c6 MovV
	return 2; // 0x8c7 Return
	
Label_2248:
	var_53_cvector = var_54_cvector / var_54_cvector; // 0x8c8 Div2
	return 2; // 0x8c9 Return
}


func_1730(var_55_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x6c2 PushV
	GetPosition(var_59_cvector); // 0x6c3 Func
	GetPosition(var_60_cvector); // 0x6c5 ObjFunc
	var_55_cvector = var_60_cvector - var_59_cvector; // 0x6c7 Sub2
	return 4; // 0x6c8 Return
}


func_1221(var_0_object, var_259_bool)
{
	var_260_bool = 0; var_261_bool = 0; // 0x4c5 PushV
	var_262_string = "IsAttacking"; // 0x4c6 PushS
	var_263_int = 1; // 0x4c7 PushI
	var_264_bool = IsFuncExist(var_0_object, var_262_string, var_263_int); // 0x4c8 FuncExist
	if(var_264_bool == 0) goto Label_1230; // 0x4c9 JumpB
	IsAttacking(var_261_bool); // 0x4ca TObjFunc
	var_259_bool = var_261_bool; // 0x4cc Mov
	return 2; // 0x4cd Return
	
Label_1230:
	var_259_bool = 0; // 0x4ce MovB
	return 2; // 0x4cf Return
}


func_2502(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; // 0x9c6 PushV
	GetMainOutdoorScene(var_87_object); // 0x9c7 Func
	var_89_bool = var_87_object == 0; // 0x9c9 NullEq
	if(var_89_bool == 0) goto Label_2511; // 0x9ca JumpB
	var_90_string = "Can't find main outdoor scene"; // 0x9cb PushS
	Trace(var_90_string); // 0x9cc Func
	return 8; // 0x9ce Return
	
Label_2511:
	GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector); // 0x9cf ObjFunc
	var_91_bool = var_88_bool == 0; // 0x9d1 Not
	if(var_91_bool == 0) goto Label_2521; // 0x9d2 JumpB
	var_92_string = "Warning: outdoor scene locator "; // 0x9d3 PushS
	var_93_int = var_92_string + var_78_string; // 0x9d4 Add
	var_94_string = " doesnt exist"; // 0x9d5 PushS
	var_95_int = var_93_int + var_94_string; // 0x9d6 Add
	Trace(var_95_int); // 0x9d7 Func
	
Label_2521:
	GetMap(var_77_object); // 0x9d9 ObjFunc
	var_96_bool = var_77_object == 0; // 0x9db NullEq
	if(var_96_bool == 0) goto Label_2529; // 0x9dc JumpB
	var_97_string = "Can't find map"; // 0x9dd PushS
	Trace(var_97_string); // 0x9de Func
	return 8; // 0x9e0 Return
	
Label_2529:
	var_98_float = GetByIndex(var_85_cvector, 0); // 0x9e1 PushE
	var_99_float = GetByIndex(var_85_cvector, 2); // 0x9e2 PushE
	SetMapParams(var_98_float, var_99_float, var_79_float); // 0x9e3 ObjFunc
	return 8; // 0x9e5 Return
}


func_1737(var_28_float)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); // 0x6c9 PushV
	GetPosition(var_33_cvector); // 0x6ca Func
	GetPosition(var_34_cvector); // 0x6cc ObjFunc
	var_35_cvector = var_34_cvector - var_33_cvector; // 0x6ce Sub2
	var_28_float = var_35_cvector | var_35_cvector; // 0x6cf Or2
	return 6; // 0x6d0 Return
}


func_2250(var_446_float, var_447_float, var_448_float)
{
	var_451_bool = var_447_float < var_448_float; // 0x8cb LT
	if(var_451_bool == 0) goto Label_2255; // 0x8cc JumpB
	var_446_float = var_447_float; // 0x8cd Mov
	goto Label_2256; // 0x8ce Jump
	
Label_2256:
	return 0; // 0x8d0 Return
	
Label_2255:
	var_446_float = var_448_float; // 0x8cf Mov
}


func_460(var_0_object, var_1_object, var_4_bool, var_24_bool)
{
	var_25_float = 0; var_26_float = 0; // 0x1cc PushV
	var_27_bool = var_4_bool == 0; // 0x1cd NullEq
	if(var_27_bool == 0) goto Label_465; // 0x1ce JumpB
	var_24_bool = 0; // 0x1cf MovB
	return 2; // 0x1d0 Return
	
Label_465:
	var_28_float = 0; var_29_object = Obj(); // 0x1d1 PushV
	var_29_object = var_4_bool; // 0x1d2 MovT
	func_1737(var_29_object); // 0x1d3 NEW_2
	var_26_float = sqrt(var_28_float); // 0x1d5 Sqrt2
	var_36_object = var_2_object; // 0x1d6 PushT
	if(var_36_object == 0) goto Label_473; // 0x1d7 JumpB
	var_26_float = var_26_float - var_1_object; // 0x1d8 Sub2
	
Label_473:
	var_24_bool = var_26_float < var_0_object; // 0x1d9 LT2
	return 2; // 0x1da Return
}


func_1232(var_2_object, var_5_int)
{
	var_376_float = 0; var_377_int = 0; var_378_float = 0; var_379_int = 0; // 0x4d0 PushV
	var_380_bool = var_2_object == 0; // 0x4d1 Not
	if(var_380_bool == 0) goto Label_1236; // 0x4d2 JumpB
	return 4; // 0x4d3 Return
	
Label_1236:
	var_381_int = var_5_int; // 0x4d4 PushT
	if(var_381_int == 0) goto Label_1244; // 0x4d5 JumpB
	var_382_int = -1; // 0x4d6 PushI
	var_5_int = var_5_int + var_382_int; // 0x4d7 Add2
	var_383_int = 0; // 0x4d8 PushI
	var_384_bool = var_5_int > var_383_int; // 0x4d9 GT
	if(var_384_bool == 0) goto Label_1244; // 0x4da JumpB
	return 4; // 0x4db Return
	
Label_1244:
	rand(var_378_float); // 0x4dc Func
	var_385_float = 0; // 0x4de PushV
	func_1282(var_385_float); // 0x4df NEW_2
	var_386_bool = var_378_float < var_385_float; // 0x4e1 LT
	if(var_386_bool == 0) goto Label_1263; // 0x4e2 JumpB
	irand(var_379_int, var_378_float); // 0x4e3 Func
	var_387_int = 1; // 0x4e5 PushI
	var_379_int = var_379_int + var_387_int; // 0x4e6 Add2
	var_388_string = "attack"; // 0x4e7 PushS
	var_389_int = var_388_string + var_379_int; // 0x4e8 Add
	Speak(var_389_int); // 0x4e9 Func
	var_390_int = 0; // 0x4eb PushV
	func_1280(var_390_int); // 0x4ec NEW_2
	var_5_int = var_390_int; // 0x4ed TMov
	
Label_1263:
	return 4; // 0x4ef Return
}


func_1745(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_bool = 0; // 0x6d1 PushV
	IsPlayerActor(var_164_object, var_166_bool); // 0x6d2 Func
	var_163_bool = var_166_bool; // 0x6d4 Mov
	return 2; // 0x6d5 Return
}


func_2257(var_456_float, var_457_float, var_458_float, var_459_float)
{
	var_460_bool = var_457_float < var_458_float; // 0x8d2 LT
	if(var_460_bool == 0) goto Label_2262; // 0x8d3 JumpB
	var_456_float = var_458_float; // 0x8d4 Mov
	return 0; // 0x8d5 Return
	
Label_2262:
	var_461_bool = var_457_float > var_459_float; // 0x8d6 GT
	if(var_461_bool == 0) goto Label_2266; // 0x8d7 JumpB
	var_456_float = var_459_float; // 0x8d8 Mov
	return 0; // 0x8d9 Return
	
Label_2266:
	var_456_float = var_457_float; // 0x8da Mov
	return 0; // 0x8db Return
}


func_1750(var_56_bool, var_57_object, var_58_string)
{
	var_59_bool = 0; var_60_bool = 0; // 0x6d6 PushV
	var_61_string = "HasProperty"; // 0x6d7 PushS
	var_62_int = 2; // 0x6d8 PushI
	var_63_bool = IsFuncExist(var_57_object, var_61_string, var_62_int); // 0x6d9 FuncExist
	var_64_bool = var_63_bool == 0; // 0x6da Not
	if(var_64_bool == 0) goto Label_1758; // 0x6db JumpB
	var_56_bool = 0; // 0x6dc MovB
	return 2; // 0x6dd Return
	
Label_1758:
	HasProperty(var_58_string, var_60_bool); // 0x6de ObjFunc
	var_56_bool = var_60_bool; // 0x6e0 Mov
	return 2; // 0x6e1 Return
}


func_1497(var_0_object, var_1_object, var_29_int)
{
	var_30_int = 0; // 0x5da PushI
	var_31_bool = var_29_int != var_30_int; // 0x5db Neq
	if(var_31_bool == 0) goto Label_1502; // 0x5dc JumpB
	return 0; // 0x5dd Return
	
Label_1502:
	var_32_bool = 0; var_33_object = Obj(); // 0x5de PushV
	var_33_object = var_1_object; // 0x5df MovT
	func_1535(var_32_bool, var_33_object); // 0x5e0 NEW_2
	var_68_bool = var_32_bool == 0; // 0x5e2 Not
	if(var_68_bool == 0) goto Label_1509; // 0x5e3 JumpB
	var_0_object = 1; // 0x5e4 TMovB
	
Label_1509:
	var_69_int = 0; // 0x5e5 PushI
	KillTimer(var_69_int); // 0x5e6 Func
	Stop(); // 0x5e8 Func
	return 0; // 0x5ea Return
}


func_2268(var_38_bool, var_39_int, var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x8dc PushV
	irand(var_42_int, var_40_int); // 0x8dd Func
	var_38_bool = var_42_int < var_39_int; // 0x8df LT2
	return 2; // 0x8e0 Return
}


func_2012(var_27_object, var_30_cvector, var_31_cvector)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); // 0x7dc PushV
	GetScene(var_34_object); // 0x7dd Func
	var_36_string = "scripted"; // 0x7df PushS
	var_37_string = "blood_dir.xml"; // 0x7e0 PushS
	AddActorByType(var_35_object, var_36_string, var_34_object, var_30_cvector, var_31_cvector, var_37_string); // 0x7e1 Func
	var_38_object = Obj(); // 0x7e3 PushV
	var_38_object = var_27_object; // 0x7e4 Mov
	func_1900(var_38_object); // 0x7e5 NEW_2
	return 4; // 0x7e7 Return
}


func_2273(var_107_int, var_108_string)
{
	var_109_int = 0; var_110_int = 0; // 0x8e1 PushV
	GetVariable(var_108_string, var_110_int); // 0x8e2 Func
	var_107_int = var_110_int; // 0x8e4 Mov
	return 2; // 0x8e5 Return
}


func_1762(var_408_float, var_409_object, var_410_float, var_411_int)
{
	var_415_int = 0; var_416_string = ""; var_417_int = 0; var_418_float = 0; var_419_float = 0; var_420_float = 0; var_421_int = 0; var_422_string = ""; var_423_int = 0; var_424_float = 0; var_425_float = 0; var_426_float = 0; // 0x6e2 PushV
	var_427_bool = 0; var_428_object = Obj(); var_429_string = ""; // 0x6e3 PushV
	var_428_object = var_409_object; // 0x6e4 Mov
	var_429_string = "health"; // 0x6e5 MovS
	func_1750(var_427_bool, var_428_object, var_429_string); // 0x6e6 NEW_2
	var_430_bool = var_427_bool == 0; // 0x6e8 Not
	if(var_430_bool == 0) goto Label_1772; // 0x6e9 JumpB
	var_408_float = 0.0; // 0x6ea MovF
	return 12; // 0x6eb Return
	
Label_1772:
	var_431_bool = 0; var_432_object = Obj(); var_433_string = ""; // 0x6ec PushV
	var_432_object = var_409_object; // 0x6ed Mov
	var_433_string = "armor"; // 0x6ee MovS
	func_1750(var_431_bool, var_432_object, var_433_string); // 0x6ef NEW_2
	var_434_bool = var_431_bool == 0; // 0x6f1 Not
	if(var_434_bool == 0) goto Label_1781; // 0x6f2 JumpB
	var_421_int = 0; // 0x6f3 MovI
	goto Label_1784; // 0x6f4 Jump
	
Label_1784:
	var_435_string = "armor_"; // 0x6f8 PushS
	var_436_string = ""; var_437_int = 0; // 0x6f9 PushV
	var_437_int = var_411_int; // 0x6fa Mov
	func_1716(var_436_string, var_437_int); // 0x6fb NEW_2
	var_422_string = var_435_string + var_436_string; // 0x6fd Add2
	var_442_bool = 0; var_443_object = Obj(); var_444_string = ""; // 0x6fe PushV
	var_443_object = var_409_object; // 0x6ff Mov
	var_444_string = var_422_string; // 0x700 Mov
	func_1750(var_442_bool, var_443_object, var_444_string); // 0x701 NEW_2
	var_445_bool = var_442_bool == 0; // 0x703 Not
	if(var_445_bool == 0) goto Label_1799; // 0x704 JumpB
	var_423_int = 0; // 0x705 MovI
	goto Label_1801; // 0x706 Jump
	
Label_1801:
	var_446_float = 0; var_447_float = 0; var_448_float = 0; // 0x709 PushV
	var_449_int = var_421_int + var_423_int; // 0x70a Add
	var_450_float = 100.0; // 0x70b PushF
	var_447_float = var_449_int / var_449_int; // 0x70c Div2
	var_448_float = 1; // 0x70d MovI
	func_2250(var_446_float, var_447_float, var_448_float); // 0x70e NEW_2
	var_424_float = var_446_float; // 0x70f Mov
	var_452_string = "health"; // 0x711 PushS
	GetProperty(var_452_string, var_425_float); // 0x712 ObjFunc
	var_453_int = 1; // 0x714 PushI
	var_454_int = var_453_int - var_424_float; // 0x715 Sub
	var_426_float = var_410_float * var_454_int; // 0x716 Mult2
	var_455_string = "health"; // 0x717 PushS
	var_456_float = 0; var_457_float = 0; var_458_float = 0; var_459_float = 0; // 0x718 PushV
	var_457_float = var_425_float - var_426_float; // 0x719 Sub2
	var_458_float = 0; // 0x71a MovI
	var_459_float = 1; // 0x71b MovI
	func_2257(var_456_float, var_457_float, var_458_float, var_459_float); // 0x71c NEW_2
	SetProperty(var_455_string, var_456_float); // 0x71e ObjFunc
	var_462_bool = 0; var_463_object = Obj(); // 0x720 PushV
	var_463_object = var_409_object; // 0x721 Mov
	func_1745(var_462_bool, var_463_object); // 0x722 NEW_2
	if(var_462_bool == 0) goto Label_1833; // 0x724 JumpB
	var_464_float = 0; // 0x725 PushV
	var_464_float = -var_426_float; // 0x726 Neg2
	func_2278(var_464_float); // 0x727 NEW_2
	
Label_1833:
	var_408_float = var_426_float; // 0x729 Mov
	return 12; // 0x72a Return
	
Label_1799:
	GetProperty(var_422_string, var_423_int); // 0x707 ObjFunc
	
Label_1781:
	var_472_string = "armor"; // 0x6f5 PushS
	GetProperty(var_472_string, var_421_int); // 0x6f6 ObjFunc
}


func_2278(var_464_float)
{
	var_465_object = Obj(); var_466_object = Obj(); // 0x8e6 PushV
	CreateFloatVector(var_466_object); // 0x8e7 Func
	add(var_464_float); // 0x8e9 ObjFunc
	var_467_int = 0; // 0x8eb PushI
	var_468_bool = var_464_float < var_467_int; // 0x8ec LT
	if(var_468_bool == 0) goto Label_2290; // 0x8ed JumpB
	var_469_float = 0.7; // 0x8ee PushF
	var_470_int = 500; // 0x8ef PushI
	RumblePlay(var_469_float, var_470_int); // 0x8f0 Func
	
Label_2290:
	var_471_int = 15; // 0x8f2 PushI
	SendWorldWndMessage(var_471_int, var_466_object); // 0x8f3 Func
	return 2; // 0x8f5 Return
}


func_2535(var_25_object)
{
	var_26_int = 0; // 0x9e8 PushV
	func_2606(var_26_int); // 0x9e9 NEW_2
	var_30_int = 1; // 0x9eb PushI
	var_31_bool = var_26_int == var_30_int; // 0x9ec Eq
	if(var_31_bool == 0) goto Label_2545; // 0x9ed JumpB
	WorkWithCorpse(var_25_object); // 0x9ee Func
	goto Label_2547; // 0x9f0 Jump
	
Label_2547:
	return 0; // 0x9f3 Return
	
Label_2545:
	Barter(var_25_object); // 0x9f1 Func
}


func_2026()
{
	var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); // 0x7ea PushV
	GetPosition(var_246_cvector); // 0x7eb ObjFunc
	GetPosition(var_247_cvector); // 0x7ed Func
	var_248_cvector = var_246_cvector - var_247_cvector; // 0x7ef Sub2
	var_249_float = GetByIndex(var_248_cvector, 0); // 0x7f0 PushE
	var_250_float = GetByIndex(var_248_cvector, 2); // 0x7f1 PushE
	RotateAsync(var_249_float, var_250_float); // 0x7f2 Func
	return 6; // 0x7f4 Return
}


func_1519(var_0_object)
{
	var_0_object = 1; // 0x5ef TMovB
	var_25_int = 0; // 0x5f0 PushI
	KillTimer(var_25_int); // 0x5f1 Func
	Stop(); // 0x5f3 Func
	return 0; // 0x5f5 Return
}


func_1264(var_0_object)
{
	var_132_object = Obj(); // 0x4f0 PushV
	var_132_object = var_0_object; // 0x4f1 MovT
	func_2312(var_132_object); // 0x4f2 NEW_2
	return 0; // 0x4f4 Return
}


func_498(var_2_object, var_3_string)
{
	func_593(); // 0x1f3 NEW_2
	var_22_int = 10; // 0x1f5 PushI
	KillTimer(var_22_int); // 0x1f6 Func
	var_23_object = var_2_object; // 0x1f8 PushT
	if(var_23_object == 0) goto Label_510; // 0x1f9 JumpB
	var_24_string = "head"; // 0x1fa PushS
	UnlookAsync(var_24_string); // 0x1fb Func
	var_2_object = 0; // 0x1fd TMovB
	
Label_510:
	var_3_string = 1; // 0x1fe TMovB
	return 0; // 0x1ff Return
}


func_2548(var_52_string)
{
	var_53_object = Obj(); var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; var_58_bool = 0; // 0x9f4 PushV
	CreateInvItem(var_56_object); // 0x9f5 Func
	SetItemName(var_52_string); // 0x9f7 ObjFunc
	var_59_string = "Organ"; // 0x9f9 PushS
	var_60_int = 1; // 0x9fa PushI
	SetProperty(var_59_string, var_60_int); // 0x9fb ObjFunc
	GetItemID(var_57_int); // 0x9fd ObjFunc
	var_61_int = 0; // 0x9ff PushI
	var_62_int = 1; // 0xa00 PushI
	AddItem(var_58_bool, var_56_object, var_61_int, var_62_int); // 0xa01 Func
	return 6; // 0xa03 Return
}


func_1269(var_473_int)
{
	var_473_int = 0; // 0x4f5 MovI
	return 0; // 0x4f6 Return
}


func_2037(var_33_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x7f5 PushV
	IsLoaded(var_35_bool); // 0x7f6 Func
	var_33_bool = var_35_bool; // 0x7f8 Mov
	return 2; // 0x7f9 Return
}


func_2295(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x8f7 PushV
	FindActor(var_27_object, var_24_string); // 0x8f8 Func
	var_28_bool = var_27_object == 0; // 0x8fa NullEq
	if(var_28_bool == 0) goto Label_2302; // 0x8fb JumpB
	var_23_bool = 0; // 0x8fc MovB
	return 2; // 0x8fd Return
	
Label_2302:
	Trigger(var_27_object, var_25_string); // 0x8fe Func
	var_23_bool = 1; // 0x900 MovB
	return 2; // 0x901 Return
}


func_2042(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x7fa PushV
	GetPosition(var_50_cvector); // 0x7fb ObjFunc
	GetEyesHeight(var_49_float); // 0x7fd ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x7ff PushE
	var_58_float = var_58_float + var_49_float; // 0x800 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x801 PopE
	GetPosition(var_51_cvector); // 0x802 Func
	GetEyesHeight(var_49_float); // 0x804 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x806 PushE
	var_59_float = var_59_float + var_49_float; // 0x807 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x808 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x809 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x80a PushE
	var_60_float = 0; // 0x80b MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x80c PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x80d Or
	var_62_float = sqrt(var_61_int); // 0x80e Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x80f Div2
	var_53_cvector = -var_52_cvector; // 0x810 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x811 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x812 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x813 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x814 Xor2
	func_2240(var_64_cvector, var_65_cvector); // 0x815 NEW_2
	var_72_int = 25; // 0x817 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x818 Mult
	var_74_int = var_63_float + var_73_float; // 0x819 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x81a PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x81b Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x81c Add2
	IsOverrideActive(var_56_bool); // 0x81d Func
	var_76_bool = var_56_bool; // 0x81f Push
	if(var_76_bool == 0) goto Label_2083; // 0x820 JumpB
	var_37_bool = 0; // 0x821 MovB
	return 18; // 0x822 Return
	
Label_2083:
	StopWorld(); // 0x823 Func
	var_77_bool = 1; // 0x825 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x826 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x828 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x829 PushE
	Rotate(var_78_float, var_79_float); // 0x82a Func
	var_80_bool = 0; // 0x82c PushV
	func_2644(var_80_bool); // 0x82d NEW_2
	if(var_80_bool == 0) goto Label_2097; // 0x82f JumpB
	goto Label_2105; // 0x830 Jump
	
Label_2105:
	CameraWaitForPlayFinish(); // 0x839 Func
	ResumeWorld(); // 0x83b Func
	var_37_bool = 1; // 0x83d MovB
	return 18; // 0x83e Return
	
Label_2097:
	var_81_string = "head"; // 0x831 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x832 Func
	var_82_bool = var_57_bool; // 0x834 Push
	if(var_82_bool == 0) goto Label_2105; // 0x835 JumpB
	var_83_string = "head"; // 0x836 PushS
	LookAsyncCamera(var_83_string); // 0x837 Func
}


func_1271()
{
	var_265_string = ""; // 0x4f7 PushV
	var_265_string = "attack_stay"; // 0x4f8 MovS
	func_2193(var_265_string); // 0x4f9 NEW_2
	return 0; // 0x4fb Return
}


func_1276()
{
	return 0; // 0x4fd Return
}


func_1278(var_498_bool)
{
	var_498_bool = 1; // 0x4fe MovB
	return 0; // 0x4ff Return
}


func_1535(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_object = Obj(); // 0x600 PushV
	var_35_object = var_33_object; // 0x601 Mov
	func_1876(var_34_bool, var_35_object); // 0x602 NEW_2
	var_32_bool = var_34_bool; // 0x603 Mov
	return 0; // 0x605 Return
}


